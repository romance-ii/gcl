;;; CMPTOP  Compiler top-level.
;;;
;; Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

;; This file is part of GNU Common Lisp, herein referred to as GCL
;;
;; GCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;; 
;; GCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
;; License for more details.
;; 
;; You should have received a copy of the GNU Library General Public License 
;; along with GCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


(in-package 'compiler)

(defvar *objects* nil)
(defvar *constants* nil)
(defvar *sharp-commas* nil)
(defvar *function-links* nil)
(defvar *c-gc* t) ;if we gc the c stack.
(defvar *c-vars*)  ;list of *c-vars* to put at beginning of function.
;;number of address registers available not counting the
;;frame pointer and the stack pointer
;;If sup and base are used, then their are even 2 less
;;To do: If the regs hold data then there are really more available;
(defvar *free-address-registers* 5)
(defvar *free-data-registers* 6)
;;Inside t3defun this collects the list of downward closures defined.
(defvar *downward-closures* nil)

(defvar *volatile*)
(defvar *setjmps* 0)

;; Functions may use a block of C stack space.
;; (cs . i)  will become Vcs[i].

(defvar *cs* 0)

;; Holds list of local-functions resulting from c1function of
;; a lambda.  Is used to eliminate mix of downward and regular closures.
(defvar *local-functions* nil)

 

;;; *objects* holds ( { object vv-index }* ).
;;; *constants* holds ( { symbol vv-index }* ).
;;; *sharp-commas* holds ( vv-index* ), indicating that the value
;;;  of each vv should be turned into an object from a string before
;;;  defining the current function during loading process, so that
;;;  sharp-comma-macros may be evaluated correctly.
;;; *function-links* ( {symbol vv-index} ) for function symbols needing link

(defvar *global-funs* nil)

;;; *global-funs* holds
;;; 	( { global-fun-name cfun }* )

(defvar *closures* nil)
(defvar *local-funs* nil)

;;; *closure* holds fun-objects for closures.



(defvar *top-level-forms* nil)
(defvar *non-package-operation* nil)

;;; *top-level-forms* holds ( { top-level-form }* ).
;;;
;;;     top-level-form:
;;;	  ( 'DEFUN'     fun-name cfun lambda-expr doc-vv sp)
;;;	| ( 'DEFMACRO'  macro-name cfun lambda-expr doc-vv sp)
;;;	| ( 'ORDINARY'  cfun expr)
;;;	| ( 'DECLARE'   var-name-vv )
;;;	| ( 'DEFVAR'	var-name-vv expr doc-vv)
;;;	| ( 'CLINES'	string )
;;;	| ( 'DEFCFUN'	header vs-size body)
;;;	| ( 'DEFENTRY'	fun-name cfun cvspecs type cfun-name )
;;;	| ( 'SHARP-COMMA' vv )

(defvar *reservations* nil)
(defvar *reservation-cmacro* nil)

;;; *reservations* holds (... ( cmacro . value ) ...).
;;; *reservation-cmacro* holds the cmacro current used as vs reservation.

(defvar *global-entries* nil)

;;; *global-entries* holds (... ( fname cfun return-types arg-type ) ...).

;;; Package operations.

(si:putprop 'make-package t 'package-operation)
(si:putprop 'in-package t 'package-operation)
(si:putprop 'shadow t 'package-operation)
(si:putprop 'shadowing-import t 'package-operation)
(si:putprop 'export t 'package-operation)
(si:putprop 'unexport t 'package-operation)
(si:putprop 'use-package t 'package-operation)
(si:putprop 'unuse-package t 'package-operation)
(si:putprop 'import t 'package-operation)
(si:putprop 'provide t 'package-operation)
(si:putprop 'require t 'package-operation)

;;; Pass 1 top-levels.

(si:putprop 'eval-when 't1eval-when 't1)
(si:putprop 'progn 't1progn 't1)
(si:putprop 'defun 't1defun 't1)
(si:putprop 'defmacro 't1defmacro 't1)
(si:putprop 'clines 't1clines 't1)
(si:putprop 'defcfun 't1defcfun 't1)
(si:putprop 'defentry 't1defentry 't1)
(si:putprop 'defla 't1defla 't1)

;;; Top-level macros.

(si:putprop 'defconstant t 'top-level-macro)
(si:putprop 'defparameter t 'top-level-macro)
(si:putprop 'defstruct t 'top-level-macro)
(si:putprop 'deftype t 'top-level-macro)
(si:putprop 'defsetf t 'top-level-macro)

;;; Pass 2 initializers.

(si:putprop 'defun 't2defun 't2)
(si:putprop 'defmacro 't2defmacro 't2)
(si:putprop 'ordinary 't2ordinary 't2)
(si:putprop 'declare 't2declare 't2)
(si:putprop 'sharp-comma 't2sharp-comma 't2)
(si:putprop 'defentry 't2defentry 't2)
(si:putprop 'si:putprop 't2putprop 't2)

;;; Pass 2 C function generators.

(si:putprop 'defun 't3defun 't3)
(si:putprop 'defmacro 't3defmacro 't3)
(si:putprop 'clines 't3clines 't3)
(si:putprop 'defcfun 't3defcfun 't3)
(si:putprop 'defentry 't3defentry 't3)

	  
(eval-when (compile eval)
(defmacro lambda-list (lambda-expr) `(caddr ,lambda-expr))
(defmacro ll-requireds (lambda-list) `(car ,lambda-list))
(defmacro ll-keywords (lambda-list) `(nth 4 ,lambda-list))
(defmacro ll-optionals (lambda-list) `(nth 1 ,lambda-list))
(defmacro ll-keywords-p (lambda-list) `(nth 3 ,lambda-list))
(defmacro ll-rest (lambda-list) `(nth 2 ,lambda-list))
(defmacro ll-allow-other-keys (lambda-list) `(nth 5 ,lambda-list))
(defmacro vargd (min max)  `(+ ,min (ash ,max 8)))
(defmacro let-pass3 (binds &body body &aux res)
  (let ((usual '((*c-vars* nil)
		  (*vs* 0) (*max-vs* 0) (*level* 0) (*ccb-vs* 0) (*clink* nil)
		  (*unwind-exit* (list *exit*))
		  (*value-to-go* *exit*)
		  (*reservation-cmacro* (next-cmacro))
		  (*sup-used* nil)
		  (*restore-avma* nil)
		  (*base-used* nil)
		  (*cs* 0)
		  )))
	(dolist (v binds)
		(or (assoc (car v) usual)
		    (push v usual)))
	(do ((v (setq usual (copy-list usual)) (cdr v)))
	    ((null v))
         (let ((tem (assoc (caar v) binds)))
	     (if tem (setf (car v) tem))))
	`(let* ,usual ,@body)))
)



(defun t1expr (form &aux (*current-form* form) (*first-error* t))
  (catch *cmperr-tag*
    (when (consp form)
      (let ((fun (car form)) (args (cdr form)) fd)
           (declare (object fun args))
           (cond
            ((symbolp fun)
             (cond ((eq fun 'si:|#,|)
                    (cmperr "Sharp-comma-macro is in a bad place."))
                   ((get fun 'package-operation)
                    (when *non-package-operation*
                      (cmpwarn "The package operation ~s was in a bad place."
                               form))
		    (maybe-eval t form)
                    (wt-data-package-operation form))
                   ((setq fd (get fun 't1))
                    (when *compile-print* (print-current-form))
                    (funcall fd args))
                   ((get fun 'top-level-macro)
                    (when *compile-print* (print-current-form))
                    (t1expr (cmp-macroexpand-1 form)))
                   ((get fun 'c1) (t1ordinary form))
                   ((setq fd (macro-function fun))
		    (let ((res
			   (cmp-expand-macro fd fun (copy-list (cdr form)))
			   ))
		      (t1expr res)))
                   (t (t1ordinary form))
                   ))
            ((consp fun) (t1ordinary form))
            (t (cmperr "~s is illegal function." fun)))
           )))
  )

(defun declaration-type (type) 
  (cond ((equal type "") "void")
	((equal type "long ") "object ")
	(t type)))

(defvar *vaddress-list*)   ;; hold addresses of C functions, and other data
(defvar *vind*)            ;; index in the VV array where the address is.
(defvar *Inits*)
(defun ctop-write (name &aux
			def
		(*function-links* nil) *c-vars* (*volatile* " VOL ")
		*vaddress-list* (*vind* 0)  *inits*
		*current-form*)
  (declare (special *current-form*))

  (setq *top-level-forms* (reverse *top-level-forms*))

  ;;; Initialization function.
  (wt-nl1     "void init_" name "(){"
	      #+sgi3d "Init_Links ();"
	       "do_init(VV);"
	      "}")


  ;; write all the inits.
  (dolist* (*current-form* *top-level-forms*)
	   (setq *first-error* t)	   
           (when (setq def (get (car *current-form*) 't2))
                 (apply def (cdr *current-form*))))

  
  ;;; C function definitions.
  (dolist* (*current-form* *top-level-forms*)
	   (setq *first-error* t)	   
           (when (setq def (get (car *current-form*) 't3))
                 (apply def (cdr *current-form*))))

  ;;; Local function and closure function definitions.
  (let (lf)
       (block local-fun-process
         (loop
          (when (endp *local-funs*) (return-from local-fun-process))
          (setq lf (car *local-funs*))
          (pop *local-funs*)
          (apply 't3local-fun lf))))

  ;;; Global entries for directly called functions.

  (dolist* (x *global-entries*)
           (apply 'wt-global-entry x))
  
  ;;; Fastlinks
  (dolist* (x *function-links*)
	   (wt-function-link x)
	   )
  #+sgi3d
  (progn
    (wt-nl1 "" "static void Init_Links () {")
    (dolist* (x *function-links*)
	     (let ((num (second x)))
	       (wt-nl "Lnk" num " = LnkT" num ";")))
    (wt-nl1 "}"))

  ;;; Declarations in h-file.
  (dolist* (fun *closures*) (wt-h "static void LC" (fun-cfun fun) "();"))
  (dolist* (x *reservations*)
           (wt-h "#define VM" (car x) " " (cdr x)))

  ;;*next-vv* is the index of the last entry pushed onto the data vector
  ;;*vind* is the index of the next constant to be pushed.
  ;;make sure enough room in VV to handle *vind*

  ;;reserve a spot for the Cdata which will be swapped for the (si::%init..):
  (push-data-incf nil)

  ;Ensure there is enough room to write t
  (dotimes (i (- *vind* *next-vv* +1))
	   (push-data-incf nil))
   ;; now *next-vv* >= *vind* 

  ;; reserve space for the Cdata the cfdata object as the
  ;; last entry in the VV vector.


  (wt-h "static char * VVi[" (+ 1 *next-vv*) "]={")
  (wt-h "#define Cdata VV[" *next-vv* "]")
  (or *vaddress-list* (wt-h 0))
   (do ((v (nreverse *Vaddress-List*) (cdr v)))
       ((null v)   (wt-h "};"))
       (wt-h "(char *)(" (caar v) (cadar v)  (if (cdr v) ")," ")")))

   (wt-h "#define VV ((object *)VVi)")


   (wt-data-file)

 
  (dolist (x *function-links* )
	  (let ((num (second x))
		(type (third x)))
	    (cond ((eq type 'proclaimed-closure)
		   (wt-h "static object *Lclptr"num";")
		   (setq type ""))
		  (t
		   (setq type (if type (Rep-type type) ""))))

	    (wt-h "static " (declaration-type type) " LnkT" num "() ;") ;initial function.
   #-sgi3d    (wt-h "static "  (declaration-type type) " (*Lnk" num ")() = LnkT" num ";")
   #+sgi3d    (wt-h "static "  (declaration-type type) " (*Lnk" num ")();")))
  )


;; this default will be as close to the the decision of the x3j13 committee
;; as I can make it.   Valid values of *eval-when-defaults* are
;; a sublist of '(compile eval load)

(defvar *eval-when-defaults* :defaults)

(defun maybe-eval (default-action form)
  (or default-action (and (symbolp (car form))
			    (setq default-action (get (car form) 'eval-at-compile))))
  (cond ((or (and default-action (eq :defaults *eval-when-defaults*))
	     (and (consp *eval-when-defaults*)(member 'compile *eval-when-defaults* )))
	  (if form  (cmp-eval form))
	  t)))


(defun t1eval-when (args &aux load-flag compile-flag)
  (when (endp args) (too-few-args 'eval-when 1 0))
  (dolist** (situation (car args))
    (case situation
          (load (setq load-flag t))
          (compile (setq compile-flag t))
          (eval)
          (otherwise (cmperr "The EVAL-WHEN situation ~s is illegal."
                             situation))))
  (let ((*eval-when-defaults* (car args)))
    (cond (load-flag
	   (t1progn (cdr args)))
	  (compile-flag
	   (cmp-eval (cons 'progn (cdr args)))))))


(defvar *compile-ordinaries* nil)

(defun t1progn (args)
  (cond ((equal (car args) ''compile)
	 (let ((*compile-ordinaries* t))
	   (t1progn (cdr args))))
	(t
	 (dolist** (form args) (t1expr form)))))

;; (defun foo (x) ..   -> (defun foo (g102 &aux (x g102)) ... 
(defun  cmpfix-args (args bind &aux tem (lam (copy-list (second args))))
  (dolist (v bind)
	  (setq tem (member (car v) lam))
	  (and tem
	       (setf (car tem) (second v))))
  (cond ((setq tem (member '&aux lam))
	 (setf (cdr tem) (append bind (cdr tem))))
	(t (setf lam (append lam (cons '&aux bind)))))
  (list* (car args) lam (cddr args)))



(defun t1defun (args &aux (setjmps *setjmps*) (defun 'defun) (*sharp-commas* nil))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'defun 2 (length args)))
  (cmpck (not (symbolp (car args)))
         "The function name ~s is not a symbol." (car args))
  (maybe-eval nil  (cons 'defun args))
 (tagbody
   top
  (setq *non-package-operation* t)
  (setq *local-functions* nil)
  (let ((*vars* nil) (*funs* nil) (*blocks* nil) (*tags* nil) lambda-expr
         (*special-binding* nil)
        (cfun (or (get (car args) 'Ufun) (next-cfun)))
        (doc nil) (fname (car args)))
       (declare (object fname))
       (setq lambda-expr (c1lambda-expr (cdr args) fname))
  (or (eql setjmps *setjmps*) (setf (info-volatile (cadr lambda-expr)) t))
  (check-downward (info-referred-vars (cadr lambda-expr)))

;;provide a simple way for the user to declare functions to
;;have fixed args without having to count them, and make mistakes.
  (cond ((get fname 'fixed-args)
	 ;the number of regular args in definition
	 (let ((n  (length (car (lambda-list lambda-expr)))))
	   (setf (get fname 'fixed-args)  n);;for error checking.
	   (proclaim (list 'function fname
			   (make-list n :initial-element t) t)))))
        
  (cond
   ((and
	  (get fname 'proclaimed-function)
	  ;; check the args:
	  (let ((lambda-list (lambda-list lambda-expr))bind)
	    (declare (object lambda-list))
	    (and (null (cadr lambda-list))	;;; no optional
		 (null (caddr lambda-list))	;;; no rest
		 (null (cadddr lambda-list))	;;; no keyword
		 (< (length (car lambda-list)) call-arguments-limit)
						;;; less than 10 requireds
		   ;;; For all required parameters...
		 (do ((vars (car lambda-list) (cdr vars))
		      (types (get fname 'proclaimed-arg-types) (cdr types))
		      (problem))
		     ((endp vars)
		      (and (endp types)
			   (cond (bind (setq args (cmpfix-args args bind))
				       (go top))
				 (t (not problem)))))
		     (declare (object vars types))
		     (let ((var (car vars)))
		       (declare (object var))
		       (cond  ((equal (car types) '*)(return nil)))
		       (unless
			 (and
			   (or (and (or (eq (var-kind var) 'LEXICAL)
					(and (eq (var-kind var)
						 'special)
					     (eq (car types) t)))
				    (not (var-ref-ccb var))
				    (not (eq (var-loc var) 'clb)))
			       (progn (push (list 
					      (var-name var) (gensym))
					    bind)
				      t))
			   (type-and (car types) (var-type var))
			   (or (member (car types)
				       '(fixnum character
						long-float short-float))
			       (eq (var-loc var) 'object)
			       *c-gc* 
				    (not (member var
						      (info-changed-vars
							(cadr lambda-expr))))))
                                    
			 (unless bind
				 (cmpwarn "Calls to ~a will be VERY SLOW. Recommend not to proclaim.  ~%;;The arg caused the problem. ~a"
					  fname  (var-name var)))
			 (setq problem t))))
		 (numberp cfun))))
	;;whew: it is acceptable.
        (push (list fname
                    (get fname 'proclaimed-arg-types)
                    (get fname 'proclaimed-return-type)
		    (flags set ans)
                    (make-inline-string
                     cfun (get fname 'proclaimed-arg-types)))
              *inline-functions*))
   ((and ;(get fname 'proclaimed-function)
     (eq (get fname 'proclaimed-return-type) t))
;    (setq me lambda-list)
;    (setq me (lambda-list lambda-expr))
    
;    (print args)
    ))
    ;; variable number of args;
	 


       (when (cadddr lambda-expr)
             (setq doc  (cadddr lambda-expr)))
       (add-load-time-sharp-comma)
       (push (list defun fname cfun lambda-expr doc *special-binding*)
             *top-level-forms*)
       (push (cons fname cfun) *global-funs*)

       
       )))

(defun make-inline-string (cfun args)
  (if (null args)
      (format nil "LI~d()" cfun)
      (let ((o (make-array 100 :element-type 'string-char :fill-pointer 0
			   :adjustable t )))
           (format o "LI~d(" cfun)
           (do ((l args (cdr l))
                (n 0 (1+ n)))
               ((endp (cdr l))
                (format o "#~d)" n))
               (declare (fixnum n))
               (format o "#~d," n))
           o)))

 

(defun cs-push (&optional type)
  (let ((tem (next-cvar)))
    (push (if type (cons type tem) tem) *c-vars*)
    tem))
; For the moment only two types are recognized.
(defun f-type (x)
  (if (var-p x) (setq x (var-type x)))
  (cond ((and x (subtypep x 'fixnum))
	 1)
	(t 0)))


(defun proclaimed-argd (args return)
  (let ((ans (length args))
	(i 8)
	(type (the fixnum (f-type return)))
	(begin t))
    (declare (fixnum ans i))
    (loop
     (if (not (eql 0 type))
	 (setq ans (the fixnum (+ ans
				  (the fixnum (ash (the fixnum type)
						   (the (integer 0 30)
							i)))))))
     (when  begin (setq i 10) (setq begin nil))
     (if (null args) (return ans))
     (setq i (the fixnum (+ i 2)))
     (setq type (f-type (pop args))))))
    

(defun wt-if-proclaimed (fname cfun  lambda-expr)
  (cond ((fast-link-proclaimed-type-p fname)
	 (cond ((assoc fname *inline-functions*)
		(add-init `(si::mfsfun ',fname ,(add-address "LI" cfun)
				   ,(proclaimed-argd (get fname 'proclaimed-arg-types)
						     (get fname 'proclaimed-return-type)
					)		   )
		      )
		t)
	       (t
		(let ((arg-c (length (car (lambda-list lambda-expr))))
		      (arg-p (length (get fname 'proclaimed-arg-types)))
		      (va  (member '* (get fname 'proclaimed-arg-types))))
		  (cond (va
			 (or (>= arg-c)
			     (- arg-p (length va))
			     (cmpwarn "~a needs ~a args. ~a supplied."
				      fname   (- arg-p (length va))
				      arg-c)))
				      
			((not (eql arg-c arg-p))
			 (cmpwarn
			 "~%;; ~a Number of proclaimed args was ~a. ~
                          ~%;;Its definition had ~a." fname arg-p arg-c))
			;((>= arg-c 10.)) ;checked above 
			 ;(cmpwarn " t1defun only likes 10 args ~
                         ;            ~%for proclaimed functions")
			(t (cmpwarn
			" ~a is proclaimed but not in *inline-functions* ~
        ~%T1defun could not assure suitability of args for C call" fname
			))))
		nil)))))	
	

(defun volatile (info)
   (if  (info-volatile info) "VOL " ""))

(defun register (var)
  (cond ((and (equal *volatile* "")
	      (>= (the fixnum (var-register var))
		  (the fixnum *register-min*)))
	 "register ")
	(t "")))

(defun vararg-p (x)
  (and (equal (get x 'proclaimed-return-type) t)
       (do ((v (get x 'proclaimed-arg-types) (cdr v)))
	   ((null v) t)
	   (or (consp v) (return nil))
	   (or (eq (car v) t)
	       (eq (car v) '*)
	       (return nil)))))


(defun maxargs (lambda-list)
; any function can take &allow-other-keys in ANSI lisp 
  (cond (
;	 (or (ll-allow-other-keys lambda-list)(ll-rest lambda-list))
	 (or (ll-keywords-p lambda-list) (ll-rest lambda-list))
	 64)
	(t (+ (length (car lambda-list)) ;reg
	      (length (ll-optionals lambda-list))
	      (* 2 (length (ll-keywords lambda-list)))))))



  
(defun add-address (a b)
  ;; if need ampersand before function for address
  ;; (setq a (string-concatenate "&" a))
  (push (list a b) *vaddress-list*)
  (prog1 *vind* (incf *vind*)))

(defun t2defun (fname cfun lambda-expr doc sp)
  (declare (ignore  sp))
  (cond ((get fname 'no-global-entry)(return-from t2defun nil)))

  (when doc (add-init `(si::putprop ',fname ,doc 'si::function-documentation) ))
  
  (cond ((wt-if-proclaimed fname cfun lambda-expr))
	((vararg-p fname)
	 (let ((keyp (ll-keywords-p (lambda-list lambda-expr))))
	   (wt-h "static object LI" cfun "();")
	   (if keyp
	     (add-init `(si::mfvfun-key
		     ',fname ,(add-address "LI" cfun)
		     ,(vargd (length (car (lambda-list lambda-expr)))
			     (maxargs (lambda-list lambda-expr)))
		     ,(add-address (format nil "&LI~akey" cfun) ""))
		   )
	     (add-init `(si::mfvfun ',fname ,(add-address "LI" cfun)
				,(vargd (length (car (lambda-list lambda-expr)))
				       (maxargs (lambda-list lambda-expr))))
		   ))))
	((numberp cfun)
         (wt-h "static void L" cfun "();")
	 (add-init `(si::mf ',fname ,(add-address "L" cfun)) ))
        (t (wt-h cfun "();")
	   (add-init `(si::mf ',fname ,(add-address "" cfun )) )))
           
    (cond ((< *space* 2)
           (setf (get fname 'debug-prop) t)
	   )))

(defun si::add-debug (fname x)
  (si::putprop fname x  'si::debug))

(defun t3defun (fname cfun lambda-expr doc sp &aux inline-info 
		      (*current-form* (list 'defun fname))
		      (*volatile* (volatile (second lambda-expr)))
		      *downward-closures*)
  (declare (ignore doc))
  (cond
   ((dolist (v *inline-functions*)
      (or (si::fixnump (nth 3 v))
	  (error "Old style inline"))
	   (and (eq (car v) fname)
                 (not (nth 5 v)) ; ie.not  'link-call or 'ifuncall
		 (return (setq inline-info v))))

    ;;; Add global entry information.
    (when (not (fast-link-proclaimed-type-p fname))
	  (push (list fname cfun (cadr inline-info) (caddr inline-info))
		*global-entries*))

    ;;; Local entry
    (analyze-regs (info-referred-vars (cadr lambda-expr)) 0)
    (t3defun-aux 't3defun-local-entry
		 (case (caddr inline-info)
		   (fixnum 'return-fixnum)
                         (character 'return-character)
                         (long-float 'return-long-float)
                         (short-float 'return-short-float)
                         (otherwise 'return-object))
		 fname cfun lambda-expr sp inline-info
    ))
   ((vararg-p fname)
    (analyze-regs (info-referred-vars (cadr lambda-expr)) 0)
    (t3defun-aux 't3defun-vararg 'return-object
		 fname cfun lambda-expr sp))
   (t
    (analyze-regs (info-referred-vars (cadr lambda-expr)) 2)
    (t3defun-aux 't3defun-normal 'return fname cfun lambda-expr sp)))
  
  (wt-downward-closure-macro cfun)
  (add-debug-info fname lambda-expr))

(defun t3defun-aux (f *exit* &rest lis)
  (let-pass3 ()   (apply f lis)))   

(defun t3defun-local-entry (fname cfun lambda-expr sp inline-info
				   &aux specials
				   (requireds   (caaddr lambda-expr)))
  (do ((vl requireds (cdr vl))
       (types (cadr inline-info) (cdr types)))
      ((endp vl))
      (declare (object vl types))
      (cond ((eq (var-kind (car vl)) 'special)
              (push (cons (car vl) (var-loc (car vl))) specials))
            (t
             (setf (var-kind (car vl))
                   (case (car types)
                         (fixnum 'FIXNUM)
                         (character 'CHARACTER)
                         (long-float 'LONG-FLOAT)
                         (short-float 'SHORT-FLOAT)
                         (otherwise 'OBJECT))))
                   )
             (setf (var-loc (car vl)) (next-cvar)))
         (wt-comment "local entry for function " fname)
         (wt-h "static " (declaration-type (rep-type (caddr inline-info))) "LI" cfun "();")
         (wt-nl1 "static " (declaration-type (rep-type (caddr inline-info))) "LI" cfun "(")
         (wt-requireds  requireds
		       (cadr inline-info))
         ;;; Now the body.
         (let ((cm *reservation-cmacro*)
	       (*tail-recursion-info*
	        (if *do-tail-recursion* (cons fname requireds) nil))
	       (*unwind-exit* *unwind-exit*))
              (wt-nl1 "{	")
               (assign-down-vars (info-referred-vars (cadr lambda-expr)) cfun
		  't3defun)
                (wt " VMB" cm " VMS" cm " VMV" cm)

              (when sp (wt-nl "bds_check;"))
              (when *compiler-push-events* (wt-nl "ihs_check;"))
              (when *tail-recursion-info*
                    (push 'tail-recursion-mark *unwind-exit*)
                    (wt-nl1 "goto TTL;") (wt-nl1 "TTL:;"))
              (dolist
                (v specials)
	          (wt-nl "bds_bind(VV[" (cdr v)"],V" (var-loc (car v))");")
	          (push 'bds-bind *unwind-exit*)
		  (setf (var-kind (car v)) 'SPECIAL)
		  (setf (var-loc (car v)) (cdr v)))
              (c2expr (caddr (cddr lambda-expr)))
              
;;; Use base if defined for lint
	      (if (and (zerop *max-vs*) (not *sup-used*) (not *base-used*)) t (wt-nl "base[0]=base[0];"))

;;; Make sure to return object if necessary
	      (if (equal "object " (rep-type (caddr inline-info))) (wt-nl "return Cnil;"))

              (wt-nl1 "}")
	      (wt-V*-macros cm (caddr inline-info))
         ))



(defvar *vararg-use-vs* nil)
(defun set-up-var-cvs (var)
	      (cond (*vararg-use-vs* 
		     (setf (var-ref var) (vs-push)))
;		    ((numberp (var-loc var)))
		    (t (setf (var-ref var) (cvs-push)))))

(defun t3defun-vararg (fname cfun lambda-expr sp &aux  reqs *vararg-use-vs*
			     block-p labels (deflt t) key-offset
			     (*inline-blocks* 0) rest-var
			     (ll (lambda-list lambda-expr)) va-start
			     (is-var-arg (or (ll-rest ll)
					     (ll-optionals ll)
					     (ll-keywords-p ll))))
  (dolist (v (car ll))
	  (push (list 'cvar (next-cvar)) reqs))
 
  (wt-comment "local entry for function " fname)
  (wt-h "static object LI" cfun "();")
  (wt-nl1 "static object LI" cfun "(")
  (wt-list reqs)
  (when is-var-arg
	(if reqs (wt ","))
	(wt "va_alist"))
  (wt ")")
  (when reqs (wt-nl "object ")
	(wt-list reqs)  (wt ";"))
  (if is-var-arg (wt-nl "va_dcl "))
         ;;; Now the body.
   
  (let ((cm *reservation-cmacro*)
	(*tail-recursion-info*
	 ;; to do:  When can we do tail recursion?
	 ;; Should be able to do the optionals case, where the
	 ;; optional defaults are constants.    But this
	 ;; is probably not worth it.
	 (and
	  *do-tail-recursion*
	  (not (ll-rest ll))
	  (dolist* (var (ll-requireds ll) t)
		   (when (var-ref-ccb var) (return nil)))
	  (null (ll-optionals ll))
	  (null (ll-keywords ll))
	  (cons fname (car ll))))
	(*unwind-exit* *unwind-exit*))
    (wt-nl1 "{	")
    (when is-var-arg	  (wt-nl "va_list ap;"))
    (wt-nl "int narg = VFUN_NARGS;")

    (assign-down-vars (info-referred-vars (cadr lambda-expr)) cfun
		      't3defun)
    (wt " VMB" cm " VMS" cm " VMV" cm)

    (when sp (wt-nl "bds_check;"))
    (when *compiler-push-events* (wt-nl "ihs_check;"))
    (or is-var-arg (wt-nl "if ( narg!= " (length reqs) ") vfun_wrong_number_of_args(small_fixnum("
			  (length reqs)
			  "));"))

    (flet ((do-decl (var)
		    (and (eql (var-loc var) 'clb) (setf *vararg-use-vs* t))
		    (let ((kind (c2var-kind var)))
		      (declare (object kind))
		      (when kind
			    (let ((cvar (next-cvar)))
			      (setf (var-kind var) kind)
			      (setf (var-loc var) cvar)
			      (wt-nl)
			      (unless block-p (wt "{") (setq block-p t))
			      (wt-var-decl var)
			      )))))

	  (dolist** (var (car ll))
		    (do-decl var))
	  (dolist** (opt (ll-optionals ll))
		    (do-decl (car opt))
		    (when (caddr opt) (do-decl (caddr opt))))
	  (when (ll-rest ll) (do-decl (ll-rest ll)))
	  (dolist** (kwd (ll-keywords ll))
		    (do-decl (cadr kwd))
		    (when (cadddr kwd) (do-decl (cadddr kwd))))
	  )

  ;;; Use Vcs for lint
    (if *vararg-use-vs* t (progn (wt-nl "Vcs[0]=Vcs[0];")))

  ;;; start va_list at beginning
    (if (or (ll-optionals ll) (ll-rest ll) (ll-keywords-p ll))
	(unless va-start (setq va-start t) (wt-nl "va_start(ap);")))
      
  ;;; Check arguments.
    (when (and (or *safe-compile* *compiler-check-args*) (car ll))
	  (wt-nl "if(narg <" (length (car ll))
		 ") too_few_arguments();"))

  ;;; Allocate the parameters.
    (dolist** (var (car ll))    (set-up-var-cvs var))
    (dolist** (opt (ll-optionals ll))  (set-up-var-cvs (car opt)))
	      

    (when (ll-rest ll) (set-up-var-cvs (ll-rest ll))) 

    (setf key-offset (if *vararg-use-vs* *vs* *cs*))
    (dolist** (kwd (ll-keywords ll))
	       (set-up-var-cvs (cadr kwd)))
    (dolist** (kwd (ll-keywords ll))
	       (set-up-var-cvs (cadddr kwd)))

    ;;bind the params:
    (do ((v reqs (cdr v))
	 (vl (car ll) (cdr vl)))
	((null v))
	(c2bind-loc (car vl) (car v)))
    (when (ll-optionals ll)
      (let ((*clink* *clink*)
	    (*unwind-exit* *unwind-exit*)
	    (*ccb-vs* *ccb-vs*))
	(wt-nl "narg = narg - " (length reqs) ";")
	(dolist** (opt (ll-optionals ll))
		  (push (next-label) labels)
		  (wt-nl "if (" (if (cdr labels) "--" "") "narg <= 0) ")
		  (wt-go (car labels))
		  (wt-nl "else {" )
		  (unless va-start (setq va-start t) (wt-nl "va_start(ap);"))
		  (c2bind-loc (car opt) (list 'next-var-arg))
		  (wt "}")
		  (when (caddr opt) (c2bind-loc (caddr opt) t))))
      (setq labels (nreverse labels))
      
      (let ((label (next-label)))
	(wt-nl "--narg; ")
	(wt-go label)
	
             ;;; Bind unspecified optional parameters.
	
	(dolist** (opt (ll-optionals ll))
		  (wt-label (car labels))
		  (pop labels)
		  (c2bind-init (car opt) (cadr opt))
		  (when (caddr opt) (c2bind-loc (caddr opt) nil)))
					;	     (if (or (ll-rest ll)(ll-keywords-p ll))(wt-nl "narg=0;"))
	
	(wt-label label)
	))
    (if (ll-rest ll)
	(progn
	  (setq rest-var (cs-push))
	  (cond ((ll-optionals ll))
		(t (wt-nl "narg= narg - " (length (car ll)) ";")))
	  (unless va-start (setq va-start t) (wt-nl "va_start(ap);"))
	  (wt-nl "V" rest-var " = ")
	  
	  (let ((*rest-on-stack*
		 (or (eq (var-type (ll-rest ll)) :dynamic-extent)
		     *rest-on-stack*)))
	    (if (ll-keywords-p ll)
		(cond (*rest-on-stack*
		       (wt "(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));"))
		      (t (wt "make_list(narg);")))
	      (cond (*rest-on-stack*
		     (wt "(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));"
			 ))
		    (t  (wt "list_vector(narg,ap);"))))
	    (c2bind-loc (ll-rest ll) (list 'cvar rest-var)))))
    (when (ll-keywords-p ll)
      (cond ((ll-rest ll))
	    ((ll-optionals ll))
	    (t (wt-nl "narg= narg - " (length (car ll)) ";")))
      
      (unless va-start (setq va-start t) (wt-nl "va_start(ap);"))
      (setq deflt (mapcar 'caddr (ll-keywords ll)))
      (let ((vkdefaults nil)
	    (n (length (ll-keywords ll))))
	(do* ((v deflt (cdr v))
	      (kwds (ll-keywords ll) (cdr kwds))
	      (kwd (car kwds) (car kwds)))
	     ((null v))
	     (unless (and (eq (caar v)  'location)
			  (eq (third (car v)) nil))
	       (setq vkdefaults t))
	     (when (or (not (and (eq (caar v) 'location)
				 (let ((tem (third (car v))))
				   (or (eq tem nil)
				       (and (consp tem)
					    (member (car tem)
						    '(vv fixnum-value))
					    )))))
		       ;; the supplied-p variable is not there
		       (not (eq (var-kind (cadddr kwd)) 'DUMMY)))
	       (setf Vkdefaults t)
	       (setf (car v) 0)))
	(if (> (length deflt) 15) (setq vkdefaults t))
	
	(wt-nl "{")
	(inc-inline-blocks)
	(let ((*compiler-output1* *compiler-output2*))
	  (when vkdefaults
	    (terpri *compiler-output2*)
	    (wt "static object VK" cfun
		"defaults[" (length deflt) "]={")
	    (do ((v deflt(cdr v))(tem))
		((null v))
		(wt "(void *)")
		(cond ((eql (car v) 0)
		       (wt "-1"))
		      ;; must be location
		      ((and (eq (setq tem (third (car v))) nil))
		       (wt "-2"))
		      ((and (consp tem) (eq (car tem) 'vv))
		       (wt  (second tem) ))
		      ((and (consp tem) (eq (car tem) 'fixnum-value))
		       (wt (add-object(third tem)) ))
		      (t (baboon)))
		
		(if (cdr v) (wt ",")))
	    (wt "};"))
	  (terpri *compiler-output2*)
	  (wt "static struct { short n,allow_other_keys;"
	      "object *defaults;")
	  (wt-nl " KEYTYPE keys[" (max n 1) "];")
	  (wt "} LI"cfun "key=")
	  
	  (wt "{" (length (ll-keywords ll)) ","
	      (if (ll-allow-other-keys ll) 1 0)
	      ",")
	  (if vkdefaults (wt "VK" cfun "defaults")
	    (wt "Cstd_key_defaults"))
	  (when (ll-keywords ll)
	    (wt ",{")
	    (do ((v (reverse (ll-keywords ll)) (cdr v)))
		((null v))
		;; We write this list backwards for convenience
		;; in stepping through it in parse_key
		(wt "(void *)")
		(wt  (add-symbol (caar v))  )
		(if (cdr v) (wt ",")))
	    (wt "}"))
	  (wt "};")
	  )
	(cond ((ll-rest ll)
	       (wt-nl "parse_key_rest(" (list 'cvar rest-var) ","))
	      (t (wt-nl "parse_key_new(")))
	(if (eql 0 *cs*)(setq *cs* 1))
	(wt "narg," (if *vararg-use-vs* "base " "Vcs ")
	    "+" key-offset",(struct key *)&LI" cfun "key,ap);")
	
	))
    
    
    
    ;; bind keywords
    
    (dolist** (kwd (ll-keywords ll))
	      (cond ((not (eql 0 (pop deflt)))
		     ;; keyword default bound by parse_key.. and no supplied-p
		     (c2bind (cadr kwd)))
		    (t
		     (wt-nl "if(") (wt-vs (var-ref (cadr kwd))) (wt "==0){")
		     (let ((*clink* *clink*)
			   (*unwind-exit* *unwind-exit*)
			   (*ccb-vs* *ccb-vs*))
		       (c2bind-init (cadr kwd) (caddr kwd)))
		     (unless (eq (var-kind (cadddr kwd)) 'DUMMY) (c2bind-loc (cadddr kwd) nil))
		     
		     (wt-nl "}else{")
		     (c2bind (cadr kwd))
		     (unless (eq (var-kind (cadddr kwd)) 'DUMMY) (c2bind-loc (cadddr kwd)
									     t))
		     
		     (wt "}")))
	      
	      
	      
	      )

    (when *tail-recursion-info*
      (push 'tail-recursion-mark *unwind-exit*)
      (wt-nl1 "goto TTL;") (wt-nl1 "TTL:;"))
    (c2expr (caddr (cddr lambda-expr)))
    
    ;;; End va_list at function end

    (when va-start (setq va-start nil) (wt-nl "va_end(ap);"))

;;; Use base if defined for lint
    (if (and (zerop *max-vs*) (not *sup-used*) (not *base-used*)) t (wt-nl "base[0]=base[0];"))

;;; Need to ensure return of type object
    (wt-nl "return Cnil;")

    (wt "}") 
    (when block-p (wt-nl "}"))
    (close-inline-blocks)
    (wt-V*-macros cm (get fname 'proclaimed-return-type))
    ))

(defun t3defun-normal (fname cfun lambda-expr sp)
         (wt-comment "function definition for " fname)
         (if (numberp cfun)
             (wt-nl1 "static void L" cfun "()")
             (wt-nl1 cfun "()"))
         (wt-nl1 "{" "register object *"  *volatile*"base=vs_base;")
	 (assign-down-vars (info-referred-vars (cadr lambda-expr)) cfun
			   't3defun)
         (wt-nl 
		"register object *" *volatile*"sup=base+VM" *reservation-cmacro* ";")
          (wt " VC" *reservation-cmacro*)
         (if *safe-compile*
             (wt-nl "vs_reserve(VM" *reservation-cmacro* ");")
             (wt-nl "vs_check;"))
         (when sp (wt-nl "bds_check;"))
         (when *compiler-push-events* (wt-nl "ihs_check;"))
         (c2lambda-expr (lambda-list lambda-expr) (caddr (cddr lambda-expr)) fname)
         (wt-nl1 "}")
         (push (cons *reservation-cmacro* *max-vs*) *reservations*)

       (wt-h "#define VC" *reservation-cmacro*)
       (wt-cvars)

         )


;;Macros for conditionally writing vs_base ..preamble, and for setting
;;up the return.
(defun wt-V*-macros (cm return-type)
  (push (cons cm *max-vs*) *reservations*)
  (if (and (zerop *max-vs*) (not *sup-used*) (not *base-used*))
      ;;note if (proclaim '(function foo () t))
      ;;(defun foo () (goo)) ;then *max-vs*=0,*sup-used*=t;--wfs
      (wt-h "#define VMB" cm)
    (wt-h "#define VMB" cm " " 
	  "register object *" *volatile*"base=vs_top;"))
  ;;tack following onto the VMB macro..
  (wt-cvars)
  (if *sup-used*
      (wt-h "#define VMS" cm
	    " "  " register object *" *volatile*"sup=vs_top+" *max-vs*
	    ";vs_top=sup;")
    (if (zerop *max-vs*)
	(wt-h "#define VMS" cm)
      (wt-h "#define VMS" cm " vs_top += " *max-vs* ";")))
  (if (zerop *max-vs*)
      (wt-h "#define VMV" cm)
    (if *safe-compile*
	(wt-h "#define VMV" cm " vs_reserve(" *max-vs* ");")
      (wt-h "#define VMV" cm " vs_check;")))
  (if (zerop *max-vs*)
      (wt-h "#define VMR" cm "(VMT" cm ") return(VMT" cm ");")
    (wt-h "#define VMR" cm "(VMT" cm ") vs_top=base ; return(VMT" cm ");"))
  )

;;Write the required args as c arguments, and declarations for the arguments.
(defun wt-requireds (requireds arg-types)
  (do ((vl requireds (cdr vl)))
      ((endp vl))
      (declare (object vl))
      (let ((cvar (next-cvar)))
	(setf (var-loc (car vl)) cvar)
	(wt "V" cvar))
      (unless (endp (cdr vl)) (wt ",")))
  (wt ")
")
  (when requireds
	(wt-nl1)
	(do ((vl requireds (cdr vl))
	     (types arg-types (cdr types))
	     (prev-type nil))
	    ((endp vl) (wt ";"))
	    (declare (object vl))

	    (if prev-type (wt ";"))
                 
	    (wt *volatile* (register (car vl))
		(rep-type (car types)))	
	    (setq prev-type (car types))
	    (wt "V" (var-loc (car vl))))))


(defun add-debug-info (fname lambda-expr &aux locals)
  (cond
   ((>= *space* 2))
   ((null (get fname 'debug-prop))
	  (warn "~a has a duplicate definition in this file" fname))
   (t
    (remprop fname 'debug-prop)
    (let ((leng 0))
      (dolist (va (info-referred-vars (second lambda-expr)))
	      (when (and (consp (var-ref va))
			 (si::fixnump (cdr (var-ref va))))
	    (setq leng (max leng (cdr (var-ref va))))))
      (setq locals (make-list (1+ leng)))
      (dolist (va (info-referred-vars (second lambda-expr)))
	      (when (and (consp (var-ref va))  ;always fixnum ?
			 (si::fixnump (cdr (var-ref va))))
		    (setf (nth (cdr (var-ref va)) locals)
			  (var-name va))))
      (setf (get fname 'si::debug) locals)
      (let ((locals (get fname 'si::debug)))
	(if (and locals (or (cdr locals) (not (null (car locals)))))
	    (add-init `(si::debug ',fname ',locals) )
	    ))
      ))))


;;Checks the register slots of variables, and finds which
;;variables should be in registers, zero'ing the register slot
;;in the remaining.  Data and address variables are done separately.
(defun analyze-regs (vars for-sup-base)
  (let ((addr-regs (- *free-address-registers* for-sup-base)))
  (cond ((zerop *free-data-registers*)
	 (analyze-regs1 (remove-duplicates vars) addr-regs))
	(t
	 (let (addr data)
	   (dolist (v vars)
	     (cond ((member
		     (var-type v)'(FIXNUM CHARACTER SHORT-FLOAT LONG-FLOAT)
		     :test 'eq)
		    (or (member v data) (push v data)))
		   (t (or (member v addr :test 'eq) (push v data)))))
	   (analyze-regs1 addr addr-regs)
	   (analyze-regs1 data *free-data-registers*))))))

(defun analyze-regs1 (vars want )
  (let ((tem 0)(real-min 3)(this-min 100000)(want want)(have 0))
    (declare (fixnum tem real-min this-min  want have))
    (setq vars (remove-duplicates vars))
  (tagbody
   START
   (dolist (v vars)
	   (setq tem (var-register v))
	   (cond ((>= tem real-min)
		  (setq have (the fixnum (+ have 1)))
		  (cond ((< tem this-min )
			 (setq this-min tem)))
		  (cond ((> have want) (go NEXT)))
		  )))
    (cond ((< have want) (setq real-min (- real-min 1))))
    (dolist (v vars)
	    (cond ((< (the fixnum (var-register v))
		      real-min)
		   (setf (var-register v) 0))))
    (return-from analyze-regs1  real-min)
     NEXT
    (setq have 0)
    (setq real-min (the fixnum (+ this-min 1)))
        (setq this-min 1000000)
    (go START)
)))



(defun wt-global-entry (fname cfun arg-types return-type)
    (cond ((get fname 'no-global-entry)(return-from wt-global-entry nil)))
    (wt-comment "global entry for the function " fname)
    (wt-nl1 "static void L" cfun "()")
    (wt-nl1 "{	register object *base=vs_base;")
    (when (or *safe-compile* *compiler-check-args*)
          (wt-nl "check_arg(" (length arg-types) ");"))
    (wt-nl "base[0]=" (case return-type
                            (fixnum (if (zerop *space*)
                                        "CMPmake_fixnum"
                                        "make_fixnum"))
                            (character "code_char")
                            (long-float "make_longfloat")
                            (short-float "make_shortfloat")
                            (otherwise ""))
           "(LI" cfun "(")
    (do ((types arg-types (cdr types))
         (n 0 (1+ n)))
        ((endp types))
        (declare (object types) (fixnum n))
        (wt (case (car types)
                  (fixnum "fix")
                  (character "char_code")
                  (long-float "lf")
                  (short-float "sf")
                  (otherwise ""))
            "(base[" n "])")
        (unless (endp (cdr types)) (wt ",")))
    (wt "));")
    (wt-nl "vs_top=(vs_base=base)+1;")
    (wt-nl1 "}")
    )

(defun rep-type (type)
       (case type
             (fixnum "long ")
	     (integer "GEN ")
             (character "unsigned char ")
             (short-float "float ")
             (long-float "double ")
             (otherwise "object ")))


(defun t1defmacro (args)
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'defmacro 2 (length args)))
  (cmpck (not (symbolp (car args)))
         "The macro name ~s is not a symbol." (car args))
  (maybe-eval t (cons 'defmacro args))
  (setq *non-package-operation* t)
  (let ((*vars* nil) (*funs* nil) (*blocks* nil) (*tags* nil)
        (*sharp-commas* nil) (*special-binding* nil)
        macro-lambda (cfun (next-cfun)))
       (setq macro-lambda (c1dm (car args) (cadr args) (cddr args)))
       (add-load-time-sharp-comma)
       (push (list 'defmacro (car args) cfun (cddr macro-lambda)
		   (car macro-lambda)   ;doc
		   (cadr macro-lambda)  ; ppn
                   *special-binding*)
             *top-level-forms*))
  )


(defun t2defmacro (fname cfun macro-lambda doc ppn sp)

  (declare (ignore macro-lambda sp))
  (when doc (add-init `(si::putprop ',fname ,doc 'si::function-documentation) ))
  (when ppn
	(add-init `(si::putprop ',fname ',ppn 'si::pretty-print-format) ))
  (wt-h "static void L" cfun "();")
  (add-init `(si::MM ',fname ,(add-address "L" cfun)) )
  )

(defun t3defmacro (fname cfun macro-lambda doc ppn sp
                         &aux (*volatile* (if (get fname 'contains-setjmp)
					      " VOL " "")))
  (declare (ignore doc ppn))
  (let-pass3
   ((*exit* 'return))
   (wt-comment "macro definition for " fname)
   (wt-nl1 "static void L" cfun "()")
   (wt-nl1 "{register object *" *volatile* "base=vs_base;")
   (assign-down-vars (info-referred-vars (nth 4 macro-lambda)) cfun ;*dm-info*
		     't3defun)
   (wt-nl "register object *"*volatile* "sup=base+VM" *reservation-cmacro* ";")
   (wt " VC" *reservation-cmacro*)
   (if *safe-compile*
       (wt-nl "vs_reserve(VM" *reservation-cmacro* ");")
     (wt-nl "vs_check;"))
   (when sp (wt-nl "bds_check;"))
   (when *compiler-push-events* (wt-nl "ihs_check;"))
   (c2dm (car macro-lambda) (cadr macro-lambda) (caddr macro-lambda)
	 (cadddr macro-lambda))
   (wt-nl1 "}")
   (push (cons *reservation-cmacro* *max-vs*) *reservations*)
   (wt-h "#define VC" *reservation-cmacro*)
   (wt-cvars)

   ))



(defun t1ordinary (form &aux tem )
  (setq *non-package-operation* t)
  ;; check for top level functions
  (cond (*compile-ordinaries*
	 (maybe-eval nil form)
	 (let ((gen (gensym "progn 'compile")))
	   (proclaim `(function ,gen nil t))
	   (t1expr `(defun ,gen (), form nil))
	   (push (list 'ordinary `(,gen) ) *top-level-forms*)))
	;;Hack to things like (setq bil #'(lambda () ...)) or (foo nil #'(lambda () ..))
	;; but not (let ((x ..)) (setq bil #'(lambda () ..)))
	;; for the latter you must use (progn 'compile ...)
	((and (consp form)
	      (symbolp (car form))
	      (or (eq (car form) 'setq)
		  (not (special-form-p (car form))))
	      (do ((v (cdr form) (and (consp v) (cdr v)))
		   (i 1 (the fixnum (+ 1 i))))
		  ((or (>= i 1000)
		       (not (consp v))) nil)
		  (declare (fixnum i))
		  (cond ((and (consp (car v))
			      (eq (caar v) 'function)
			      (consp (setq tem (second (car v))))
			      (eq (car tem) 'lambda))
			 (let ((gen (gensym)))
			   (t1expr `(defun ,gen ,@ (cdr tem)))
			   (return-from t1ordinary
					(t1ordinary (append
						     (subseq form 0 i)
						     `((symbol-function ', gen))
						     (nthcdr (+ 1 i) form))))))))))
	(t 
	 (maybe-eval nil form)
	 (let ((*vars* nil) (*funs* nil) (*blocks* nil) (*tags* nil)
	       (*sharp-commas* nil))
	   (push (list 'ordinary  form) *top-level-forms*)
	   nil
	   ))))

(defun t2ordinary (form)
  (cond ((atom form))
	((constantp form) )
	(t (add-init form ))))
  
  )

(defun add-load-time-sharp-comma ()
  (dolist* (vv (reverse *sharp-commas*))
	   (cond ((atom vv) (wfs-error)))
    (push (cons 'sharp-comma vv) *top-level-forms*)))

(defun t2sharp-comma (vv val)
  (add-init `(si::setvv ,vv ,val) ))

(defun t2declare (vv) vv
  (wfs-error))

;; Some top level functions which should be eval'd in the :default case
;; for eval-when
(setf (get 'si::*make-special 'eval-at-compile) t)
(setf (get 'si::*make-constant 'eval-at-compile) t)
(setf (get 'proclaim 'eval-at-compile) t)


(setf (get 'si::define-structure 't1) 't1define-structure)

(defun t1define-structure (args)
  (maybe-eval t `(si::define-structure ,@args ,(not (maybe-eval nil nil))))
  (t1ordinary (cons 'si::define-structure args)))


(si:putprop 'dbind 'set-dbind 'set-loc)

(defun set-dbind (loc vv)
  (wt-nl "VV[" vv "]->s.s_dbind = " loc ";"))

(defun t1clines (args)
  (dolist** (s args)
    (cmpck (not (stringp s)) "The argument to CLINE, ~s, is not a string." s))
  (push (list 'clines args) *top-level-forms*))

(defun t3clines (ss) (dolist** (s ss) (wt-nl1 s)))

(defun t1defcfun (args &aux (body nil))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'defcfun 2 (length args)))
  (cmpck (not (stringp (car args)))
         "The first argument to defCfun ~s is not a string." (car args))
  (cmpck (not (numberp (cadr args)))
         "The second argument to defCfun ~s is not a number." (cadr args))
  (dolist** (s (cddr args))
    (cond ((stringp s) (push s body))
          ((consp s)
           (cond ((symbolp (car s))
                  (cmpck (special-form-p (car s))
                         "Special form ~s is not allowed in defCfun." (car s))
                  (push (list (cons (car s) (parse-cvspecs (cdr s)))) body))
                 ((and (consp (car s)) (symbolp (caar s))
                       (not (if (eq (caar s) 'quote)
                                (or (endp (cdar s))
                                    (not (endp (cddar s)))
                                    (endp (cdr s))
                                    (not (endp (cddr s))))
                                (special-form-p (caar s)))))
                  (push (cons (cons (caar s)
                                    (if (eq (caar s) 'quote)
                                        (list (add-object (cadar s)))
                                        (parse-cvspecs (cdar s))))
                              (parse-cvspecs (cdr s)))
                        body))
                 (t (cmperr "The defCfun body ~s is illegal." s))))
          (t (cmperr "The defCfun body ~s is illegal." s))))
  (push (list 'defcfun (car args) (cadr args) (reverse body))
        *top-level-forms*)
  )

(defun t3defcfun (header vs-size body &aux fd)
  (wt-comment "C function defined by " 'defcfun)
  (wt-nl1 header)
  (wt-nl1 "{")
  (wt-nl1 "object *vs=vs_top;")
  (wt-nl1 "object *old_top=vs_top+" vs-size ";")
  (when (> vs-size 0) (wt-nl "vs_top=old_top;"))
  (wt-nl1 "{")
  (dolist** (s body)
    (cond ((stringp s) (wt-nl1 s))
          ((eq (caar s) 'quote)
           (wt-nl1 (cadadr s))
           (case (caadr s)
                 (object (wt "=VV[" (cadar s) "];"))
                 (otherwise
                  (wt "=object_to_" (string-downcase (symbol-name (caadr s)))
                      "(VV[" (cadar s) "]);"))))
          (t (wt-nl1 "{vs_base=vs_top=old_top;")
             (dolist** (arg (cdar s))
               (wt-nl1 "vs_push(")
               (case (car arg)
                     (object (wt (cadr arg)))
                     (char (wt "code_char((long)" (cadr arg) ")"))
                     (int (when (zerop *space*) (wt "CMP"))
                          (wt "make_fixnum((long)" (cadr arg) ")"))
                     (float (wt "make_shortfloat((double)" (cadr arg) ")"))
                     (double (wt "make_longfloat((double)" (cadr arg) ")")))
               (wt ");"))
             (cond ((setq fd (assoc (caar s) *global-funs*))
                    (cond (*compiler-push-events*
                           (wt-nl1 "ihs_push(VV[" (add-symbol (caar s)) "]);")
                           (wt-nl1 "L" (cdr fd) "();")
                           (wt-nl1 "ihs_pop();"))
                          (t (wt-nl1 "L" (cdr fd) "();"))))
                   (*compiler-push-events*
                    (wt-nl1 "super_funcall(VV[" (add-symbol (caar s)) "]);"))
                   (*safe-compile*
                    (wt-nl1 "super_funcall_no_event(VV[" (add-symbol (caar s))
                                                        "]);"))
                   (t (wt-nl1 "CMPfuncall(VV[" (add-symbol (caar s))
                                              "]->s.s_gfdef);"))
                   )
             (unless (endp (cdr s))
               (wt-nl1 (cadadr s))
               (case (caadr s)
                     (object (wt "=vs_base[0];"))
                     (otherwise (wt "=object_to_"
                                    (string-downcase (symbol-name (caadr s)))
                                    "(vs_base[0]);")))
               (dolist** (dest (cddr s))
                 (wt-nl1 "vs_base++;")
                 (wt-nl1 (cadr dest))
                 (case (car dest)
                       (object
                        (wt "=(vs_base<vs_top?vs_base[0]:Cnil);"))
                       (otherwise
                        (wt "=object_to_"
                            (string-downcase (symbol-name (car dest)))
                            "((vs_base<vs_top?vs_base[0]:Cnil));"))))
               )
             (wt-nl1 "}")
             )))
  (wt-nl1 "}")
  (wt-nl1 "vs_top=vs;")
  (wt-nl1 "}")
  )

(defun t1defentry (args &aux type cname (cfun (next-cfun)) cfspec)
  (when (or (endp args) (endp (cdr args)) (endp (cddr args)))
        (too-few-args 'defentry 3 (length args)))
  (cmpck (not (symbolp (car args)))
         "The function name ~s is not a symbol." (car args))
  (dolist** (x (cadr args))
    (cmpck (not (member x '(object char int float double string)))
           "The C-type ~s is illegal." x))
  (setq cfspec (caddr args))
  (cond ((symbolp cfspec)
         (setq type 'object)
         (setq cname (string-downcase (symbol-name cfspec))))
        ((stringp cfspec)
         (setq type 'object)
         (setq cname cfspec))
        ((and (consp cfspec)
              (member (car cfspec) '(void object char int float double
					  string))
              (consp (cdr cfspec))
              (or (symbolp (cadr cfspec)) (stringp (cadr cfspec)))
              (endp (cddr cfspec)))
         (setq cname (if (symbolp (cadr cfspec))
                        (string-downcase (symbol-name (cadr cfspec)))
                        (cadr cfspec)))
         (setq type (car cfspec)))
        (t (cmperr "The C function specification ~s is illegal." cfspec)))
  (push (list 'defentry (car args) cfun (cadr args) type cname)
        *top-level-forms*)
  (push (cons (car args) cfun) *global-funs*)
  )

(defun t2defentry (fname cfun arg-types type cname)
  (declare (ignore arg-types type cname))
  (wt-h "static void L" cfun "();")
  (add-init `(si::mf ',fname ,(add-address "L" cfun)) )
  )

(defun t3defentry (fname cfun arg-types type cname)
  (wt-comment "function definition for " fname)
  (wt-nl1 "static void L" cfun "()")
  (wt-nl1 "{	object *old_base=vs_base;")
  (case type
    (void)
    (string (wt-nl "char *x;"))
    (t (wt-nl (string-downcase (symbol-name type)) " x;")))
  (when *safe-compile* (wt-nl "check_arg(" (length arg-types) ");"))
  (unless (eq type 'void) (wt-nl "x="))
  (wt-nl cname "(")
  (unless (endp arg-types)
          (do ((types arg-types (cdr types))
               (i 0 (1+ i)))
              (nil)
              (declare (object types) (fixnum i))
              (case (car types)
                    (object (wt-nl "vs_base[" i "]"))
                    (otherwise
                     (wt-nl "object_to_"
                            (string-downcase (symbol-name (car types)))
                            "(vs_base[" i "])")))
              (when (endp (cdr types)) (return))
              (wt ",")))
  (wt ");")
  (wt-nl "vs_top=(vs_base=old_base)+1;")
  (wt-nl "vs_base[0]=")
  (case type
        (void (wt "Cnil"))
        (object (wt "x"))
        (char (wt "code_char(x)"))
        (int (when (zerop *space*) (wt "CMP"))
             (wt "make_fixnum(x)"))
	(string
	  (wt "make_simple_string(x)"))
        (float (wt "make_shortfloat(x)"))
        (double (wt "make_longfloat(x)"))
        )
  (wt ";")
  (wt-nl1 "}")
  )

(defun t1defla (args) (declare (ignore args)))

(defun parse-cvspecs (x &aux (cvspecs nil))
  (dolist** (cvs x (reverse cvspecs))
    (cond ((symbolp cvs)
           (push (list 'object (string-downcase (symbol-name cvs))) cvspecs))
          ((stringp cvs) (push (list 'object cvs) cvspecs))
          ((and (consp cvs)
                (member (car cvs) '(object char int float double)))
           (dolist** (name (cdr cvs))
             (push (list (car cvs)
                         (cond ((symbolp name)
                                (string-downcase (symbol-name name)))
                               ((stringp name) name)
                               (t (cmperr "The C variable name ~s is illegal."
                                          name))))
                   cvspecs)))
          (t (cmperr "The C variable specification ~s is illegal." cvs))))
  )



(defun t3local-dcfun (closure-p clink ccb-vs fun lambda-expr
                              &aux (level (if closure-p 0 (fun-level fun)))
			      cm
             (*volatile* (volatile (cadr lambda-expr)))
	     *downward-closures*
	     (requireds (caaddr lambda-expr)))
  (wt-comment "local dc function " (if (fun-name fun) (fun-name fun) nil))
  (wt-nl1 "static void " (if closure-p "LC" "L") (fun-cfun fun) "(")
  (wt "base0" (if requireds "," ""))
  (analyze-regs (info-referred-vars (cadr lambda-expr)) 2)
  (wt-requireds (caaddr lambda-expr) nil) ;;nil = arg types all t
  (wt "register object *" *volatile* "base0;")
  (let-pass3
   ((*exit* 'return-object)
    (*clink* clink)(*ccb-vs* ccb-vs)
    (*level* (1+ level))(*initial-ccb-vs* ccb-vs))
   (setq cm *reservation-cmacro*)
       (wt-nl1 "{")
       (assign-down-vars
	(info-referred-vars (cadr lambda-expr)) (fun-cfun fun) 't3local-dcfun)
        (wt-nl  "VMB" cm " VMS" cm " VMV" cm )
	(when *compiler-push-events* (wt-nl "ihs_check;"))
	(c2expr (caddr (cddr lambda-expr)))
	;(c2lambda-expr (lambda-list lambda-expr) (caddr (cddr lambda-expr)))
;;; Use base if defined for lint
	(if (and (zerop *max-vs*) (not *sup-used*) (not *base-used*)) t (wt-nl "base[0]=base[0];"))
	(wt-nl1 "}")
	(wt-V*-macros cm t)
	(wt-downward-closure-macro (fun-cfun fun))
  ))


(defun t3local-fun (closure-p clink ccb-vs fun lambda-expr
                              &aux (level (if closure-p 0 (fun-level fun)))
			      (*volatile* (volatile (cadr lambda-expr)))
			      *downward-closures*)
  (declare (fixnum level))
  (if (eq closure-p 'dclosure)
      (return-from t3local-fun
		   (t3local-dcfun closure-p clink ccb-vs fun lambda-expr)))
  (wt-comment "local function " (if (fun-name fun) (fun-name fun) nil))
  (wt-h   "static void " (if closure-p "LC" "L") (fun-cfun fun) "();")
  (wt-nl1 "static void " (if closure-p "LC" "L") (fun-cfun fun) "(")
  (dotimes* (n level (wt "base" n ")")) (wt "base" n ","))
  (wt-nl1  "register object ")
  (dotimes* (n level (wt "*"*volatile*"base" n ";"))
	    (wt "*"*volatile*"base" n ","))
  (analyze-regs (info-referred-vars (cadr lambda-expr)) 2)
  (let-pass3
   ((*clink* clink) (*ccb-vs* ccb-vs)
    (*level* (1+ level)) (*initial-ccb-vs* ccb-vs)
    (*exit* 'return))
   (wt-nl1 "{	register object *"*volatile*"base=vs_base;")
   (wt-nl  "register object *" *volatile* "sup=base+VM" *reservation-cmacro* ";")
   (assign-down-vars (info-referred-vars (cadr lambda-expr)) (fun-cfun fun)
		     't3local-fun)
   (wt " VC" *reservation-cmacro*)
   (if *safe-compile*
       (wt-nl "vs_reserve(VM" *reservation-cmacro* ");")
     (wt-nl "vs_check;"))
   (when *compiler-push-events* (wt-nl "ihs_check;"))
   (if closure-p
       (c2lambda-expr (lambda-list lambda-expr) (caddr (cddr lambda-expr)))
     (c2lambda-expr (lambda-list lambda-expr)
		    (caddr (cddr lambda-expr)) fun))
   (wt-nl1 "}")
   (push (cons *reservation-cmacro* *max-vs*) *reservations*)
   (wt-h "#define VC" *reservation-cmacro*)
   (wt-cvars)
   )
  (wt-downward-closure-macro (fun-cfun fun))
  )

(defun wt-cvars( &aux type )
  (dolist (v *c-vars*)
     (let ((t1 (if (consp v) (prog1 (car v) (setq v (cdr v))) t)))
       (cond ((eq type t1)(format *compiler-output2* " ,V~a" v))
	     (t (or (null type)
		    (format *compiler-output2* ";"))
		(setq type t1)
		(format *compiler-output2* " ~a V~a"
				       (rep-type type) v)))
       (cond ((eq type 'integer)
	      (format *compiler-output2* "= 0,V~aalloc" v)
	      ))
       ))
 (and *c-vars* (format *compiler-output2* ";"))
 (unless (eql *cs* 0)
;	 (format *compiler-output2* " object Vcs[~a]={Cnil" *cs*)
;	 (dotimes (temp (- *cs* 1) t) (format *compiler-output2* ",Cnil"))
;	 (format *compiler-output2* "};"))
	 (format *compiler-output2* " object Vcs[~a];" *cs*))
  )



