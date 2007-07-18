;;-*-Lisp-*-
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

(defvar *objects* (make-hash-table :test 'equal))
(defvar *objects-rev* (make-hash-table :test 'equal))
(defvar *constants* nil)
(defvar *sharp-commas* nil)
(defvar *function-links* nil)
(defvar *c-gc* t) ;if we gc the c stack.

;; We are expanding the use of *c-vars* to hold type information for C
;; stack variables initialized in inline blocks too.  conses of form
;; type . num get initialized at function top as before.  conses of
;; this form and the alternate form (num . type) are searched for
;; inline matching late in pass2, e.g. cmp-aref-inline. 20060627 CM
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

(defvar *setf-function-proxy-symbols* nil)

;; alist of proxy sybmols to name functions defun'ed as (setf foo)


;;; Package operations.

(si:putprop 'make-package t 'package-operation)
(if (fboundp 'si::kcl-in-package)
    (si:putprop 'si::kcl-in-package t 'package-operation))
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
(si:putprop 'defpacakge t 'package-operation)
(si:putprop 'mdlsym t 'package-operation)

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
(defmacro vargd (min max mv)  `(+ ,min (ash ,max 16) (ash (if ,mv 4 0) 8)));;fixme rationalize
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


;; FIXME case does not optimize as well
(defun dash-to-underscore-int (str beg end)
  (declare (string str) (fixnum beg end))
  (unless (< beg end)
    (return-from dash-to-underscore-int str))
  (let ((ch (aref str beg)))
    (declare (character ch))
    (setf (aref str beg)
	  (cond 
	    ((eql ch #\-) #\_)
	    ((eql ch #\/) #\_)
	    ((eql ch #\.) #\_)
	    ((eql ch #\_) #\_)
	    ((eql ch #\!) #\E)
	    ((eql ch #\*) #\A)
	    (t (if (alphanumericp ch) ch #\$)))))
  (dash-to-underscore-int str (1+ beg) end))

(defun dash-to-underscore (str)
  (declare (string str))
  (let ((new (copy-seq str)))
    (dash-to-underscore-int new 0 (length new))))

(defun init-name (p &optional sp (gp t) (dc t) (nt t)) 

  (cond ((not sp) "code")
	((not (pathnamep p)) (init-name (pathname p) sp gp dc nt))
	(gp (init-name (truename (merge-pathnames p #".lsp")) sp nil dc nt))
	((pathname-type p)
	 (init-name (make-pathname
                     :host (pathname-host p)
                     :device (pathname-device p)
                     :directory (pathname-directory p)
                     :name (pathname-name p)
                     :version (pathname-version p)) sp gp dc nt))
;	#-aosvs(dc (string-downcase (init-name p sp gp nil nt)))
	((and nt
	      (let* ((pn (pathname-name p))
		     (pp (make-pathname :name pn)))
		(and (not (equal pp p)) 
		     (eql 4 (string<= "gcl_" pn))
		     (init-name pp sp gp dc nil)))))
	((dash-to-underscore (namestring p)))))


;; FIXME consider making this a macro
(defun c-function-name (prefix num fname)
  (si::string-concatenate
   (string prefix)
   (write-to-string num)
   (let ((fname (string fname)))
     (si::string-concatenate
      "__"
      (dash-to-underscore fname)
      "__"
      (if (boundp '*compiler-input*)
	  (subseq (init-name *compiler-input* t) 4)
	"")))))

(defun t1expr (form &aux (*current-form* form) (*first-error* t))
  (catch *cmperr-tag*
    (when (consp form)
      (let ((fun (car form)) (args (cdr form)) fd)
           (cond
            ((symbolp fun)
             (cond ((eq fun 'si:|#,|)
                    (cmperr "Sharp-comma-macro is in a bad place."))
                   ((get fun 'package-operation)
;                    (when *non-package-operation*
;                      (cmpwarn "The package operation ~s was in a bad place."
;                               form))
		    (let ((res (if (setq fd (macro-function fun))
				   (cmp-expand-macro fd fun (copy-list (cdr form)))
				 form)))
		      (maybe-eval t res) 
		      (t1ordinary form)
		      (when (member fun '(mdlsym make-package defpackage)) (wt-data-package-operation form))));FIXME
                   ((setq fd (get fun 't1))
                    (when *compile-print* (print-current-form))
                    (values (funcall fd args)))
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

;(defun declaration-type (type) 
;  (cond ((equal type "") "void")
;	((equal type "long ") "object ")
;	(t type)))

(defvar *vaddress-list*)   ;; hold addresses of C functions, and other data
(defvar *vind*)            ;; index in the VV array where the address is.
(defvar *Inits*)
(defun ctop-write (name &aux
			def
		(*function-links* nil) *c-vars* (*volatile* " VOL ")
		*vaddress-list* (*vind* 0)  *inits*
		*current-form* *vcs-used*)
  (declare (special *current-form* *vcs-used*))

;;  #+gprof(add-libc "mcount")
  (setq *top-level-forms* (reverse *top-level-forms*))

  ;;; Initialization function.
  (wt-nl1     "void init_" name "(){"
	      #+sgi3d "Init_Links ();"
	       "do_init((void *)VV);"
	      "}")


  ;; write all the inits.
  (dolist* (*current-form* *top-level-forms*)
	   (setq *first-error* t)	   
	   (setq *vcs-used* nil)
           (when (setq def (get (car *current-form*) 't2))
                 (apply def (cdr *current-form*))))

  
  ;;; C function definitions.
  (dolist* (*current-form* *top-level-forms*)
	   (setq *first-error* t)	   
	   (setq *vcs-used* nil)
           (when (setq def (get (car *current-form*) 't3))
                 (apply def (cdr *current-form*))))

  ;;; Local function and closure function definitions.
  (let (lf)
       (block local-fun-process
         (loop
          (when (endp *local-funs*) (return-from local-fun-process))
          (setq lf (car *local-funs*))
          (pop *local-funs*)
	  (setq *vcs-used* nil)
          (apply 't3local-fun lf))))

  ;;; Global entries for directly called functions.

  (dolist* (x *global-entries*)
	   (setq *vcs-used* nil)
           (apply 'wt-global-entry x))
  
  ;;; Fastlinks
  (dolist* (x *function-links*)
	   (setq *vcs-used* nil)
	   (wt-function-link x))
  #+sgi3d
  (progn
    (wt-nl1 "" "static void Init_Links () {")
    (dolist* (x *function-links*)
	     (let ((num (second x)))
	       (wt-nl "Lnk" num " = LnkT" num ";")))
    (wt-nl1 "}"))

  ;;; Declarations in h-file.
  (dolist* (fun *closures*) (wt-h "static void " (c-function-name "LC" (fun-cfun fun) (fun-name fun)) "();"))
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


  (wt-h "static void * VVi[" (+ 1 *next-vv*) "]={")
  (wt-h "#define Cdata VV[" *next-vv* "]")
  (or *vaddress-list* (wt-h 0))
   (do ((v (nreverse *Vaddress-List*) (cdr v)))
       ((null v)   (wt-h "};"))
       (wt-h "(void *)(" (caar v) (if (cdr v) ")," ")")))

   (wt-h "#define VV (VVi)")


   (wt-data-file)

 
  (dolist (x *function-links* )
	  (let ((num (second x))
		(type (third x))
		(args (fourth x))
		(newtype nil))
	    (cond ((eq type 'proclaimed-closure)
		   (wt-h "static object *Lclptr"num";")
		   (setq newtype ""))
		  (t
		   (setq newtype (if type (Rep-type type) ""))))

	    (if (and (not (null type))
		     (not (eq type 'proclaimed-closure))
		     (or args (not (eq t type))))
		(progn
		  (wt-h "static " (declaration-type newtype) " LnkT" num "(object,...);")
		  #-sgi3d (wt-h "static "  (declaration-type newtype) " (*Lnk" num ")() = ("
				(declaration-type newtype) "(*)()) LnkT" num ";")
		  #+sgi3d (wt-h "static "  (declaration-type newtype) " (*Lnk" num ")();"))
	      (progn 
		(wt-h "static " (declaration-type newtype) " LnkT" num "();")
		#-sgi3d (wt-h "static "  (declaration-type newtype) " (*Lnk" num ")() = LnkT" num ";")
		#+sgi3d (wt-h "static "  (declaration-type newtype) " (*Lnk" num ")();"))))))


;; this default will be as close to the the decision of the x3j13 committee
;; as I can make it.   Valid values of *eval-when-defaults* are
;; a sublist of '(compile eval load)

(defvar *eval-when-defaults* :defaults)

(defun maybe-eval (default-action form)
  (or default-action (and (symbolp (car form))
			    (setq default-action (get (car form) 'eval-at-compile))))
  (cond ((or (and default-action (eq :defaults *eval-when-defaults*))
	     (and (consp *eval-when-defaults*)
		  (or (member 'compile *eval-when-defaults* )
		      (member :compile-toplevel *eval-when-defaults* ))))
	  (when form
	    (cmp-eval form))
	  t)))


(defun t1eval-when (args &aux load-flag compile-flag)
  (when (endp args) (too-few-args 'eval-when 1 0))
  (dolist** (situation (car args))
    (case situation
          ((load :load-toplevel) (setq load-flag t))
          ((compile :compile-toplevel) (setq compile-flag t))
          ((eval :execute))
          (otherwise (cmperr "The EVAL-WHEN situation ~s is illegal."
                             situation))))
  (let ((*eval-when-defaults* (car args)))
    (when load-flag
	   (t1progn (cdr args)))
    (when compile-flag (cmp-eval (cons 'progn (cdr args))))))


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
	  (when tem
	    (setf (car tem) (second v))
	    (do ((f (cddr args) (cdr f))) ((endp f))
		(cond ((stringp (car f)))
		      ((and (consp (car f)) (eq (caar f) 'declare))
		       (dolist (l (cdar f))
			 (let ((l (if (eq (car l) 'type) (cdr l) l)))
			   (when (not (eq '* (cmp-norm-tp (car l))))
			     (nsublis (list (cons (car v) (cadr v))) (cdr l))))))
		      ((and (consp (car f)) (eq (caar f) 'check-type))
		       (when (eq (cadar f) (car v))
			 (setf (cadar f) (cadr v))))
		      ((return nil))))))
  (cond ((setq tem (member '&aux lam))
	 (setf (cdr tem) (append bind (cdr tem))))
	(t (setf lam (append lam (cons '&aux bind)))))
  (list* (car args) lam (cddr args)))

(defmacro setf-function-proxy-symbol (sym)
  `(cdr (assoc ,sym *setf-function-proxy-symbols*)))

(defmacro setf-function-base-symbol (sym)
  `(car (rassoc ,sym *setf-function-proxy-symbols*)))

(defun make-setf-function-proxy-symbol (sym)
  (unless (symbolp sym)
    (error "~S not a symbol" sym))
  (or
   (setf-function-proxy-symbol sym)
   (let ((new (gensym (concatenate 'string (symbol-name sym) "-SETF")))
	 (prop (get sym 'setf-proclamations))
	 (cmpm (get sym 'si::compiler-macro-prop-setf)))
     (let ((p (or (symbol-package sym)
		  *tmp-pack*
		  (setq *tmp-pack* (make-package (symbol-name (gensym)))))))
       (or (find-symbol (string new) p) (import new p)))
     (push (cons sym new) *setf-function-proxy-symbols*)
     (when prop
       (dolist (l '(proclaimed-arg-types proclaimed-return-type proclaimed-function))
	 (let ((prop (assoc l prop)))
	   (when prop
	     (si::putprop new (cdr prop) l)))))
     (when cmpm
       (si::putprop new cmpm 'si::compiler-macro-prop))
     new)))

(defun function-symbol (name)
  (cond
   ((symbolp name)
    name)
   ((is-setf-function name)
    (make-setf-function-proxy-symbol (cadr name)))
   (t
    nil)))

(defun function-string (name)
  (unless (symbolp name)
    (error "function names must be symbols~%"))
  (let ((sname (setf-function-base-symbol name)))
    (if sname
	(si::string-concatenate "(SETF " (symbol-name sname) ")")
      (symbol-name name))))

(defvar *compiler-auto-proclaim* t)
(defvar *mlts* nil)

(defmacro ndbctxt (&rest body)
  `(let ((*debug* *debug*) 
	 (*compiler-check-args* *compiler-check-args*) 
	 (*safe-compile* *safe-compile*) 
	 (*compiler-push-events* *compiler-push-events*) 
	 (*compiler-new-safety* *compiler-new-safety*) 
	 (*notinline* *notinline*)
	 (*space* *space*))
     ,@body))

(defun is-declared-special (sym forms)
  (dolist (form forms)
    (cond ((stringp form))
	  ((and (consp form) (eq (car form) 'declare)
		(mapc (lambda (x) (and (consp x) (eq (car x) 'special) (member sym (cdr x))) (return t)) (cdr form)))))))

(defun portable-source (form &optional cdr)
  (cond ((atom form) form)
	(cdr (cons (portable-source (car form)) (portable-source (cdr form) t)))
	((case (car form)
	       ((let let* lambda) 
		`(,(car form) 
		  ,(mapcar (lambda (x) (if (atom x) x `(,(car x) ,@(portable-source (cdr x) t)))) (cadr form))
		  ,@(let* ((r (delete-if (lambda (x) (or (not (si::specialp x)) (is-declared-special x (cddr form))))
					 (mapcar (lambda (x) (if (atom x) x (car x))) (cadr form)))))
		      (when r `((declare (special ,@r)))))
		  ,@(ndbctxt (portable-source (cddr form) t))))
	       ((quote function) form)
	       (declare 
		(let ((opts (mapcan (lambda (x) (if (eq (car x) 'optimize) (cdr x) (list x)))
				    (remove-if-not
				     (lambda (x) (and (consp x) (member (car x) '(optimize notinline))))
				     (cdr form)))))
		  (when opts (local-compile-decls opts)))
		form)
	       (the `(,(car form) ,(cadr form) ,@(portable-source (cddr form) t)))
	       ((and or) `(,(car form) ,@(portable-source (cdr form) t)))
	       (check-type form)
	       ((flet labels macrolet) 
		`(,(car form)
		  ,(mapcar (lambda (x) `(,(car x) ,@(cdr (portable-source `(lambda ,@(cdr x)))))) (cadr form))
		  ,@(let ((*mlts* *mlts*))
		      (when (eq (car form) 'macrolet)
			(dolist (l (cadr form)) (push (car l) *mlts*)))
		      (ndbctxt (portable-source (cddr form) t)))))
	       (multiple-value-setq (portable-source (multiple-value-setq-expander (cdr form))))
	       (multiple-value-bind `(,(car form) ,(cadr form) ,(portable-source (caddr form))
				      ,@(let ((r (remove-if (lambda (x) (or (not (si::specialp x)) 
									    (is-declared-special x (cdddr form)))) (cadr form))))
					  (when r `((declare (special ,@r)))))
				      ,@(ndbctxt (portable-source (cdddr form) t))))
	       ((case ccase ecase) `(,(car form) ,(portable-source (cadr form))
				     ,@(mapcar (lambda (x) `(,(car x) ,@(portable-source (cdr x) t))) (cddr form))))))
	((let* ((fd (and (symbolp (car form)) (not (member (car form) *mlts*))
			 (or (unless (member (car form) *notinline*) (get (car form) 'si::compiler-macro-prop))
			     (macro-function (car form)))))
		(nf (if fd (cmp-expand-macro fd (car form) (cdr form)) form)))
	   (portable-source nf (equal form nf))))))

(defvar *no-proxy-symbols* nil)

(defun this-safety-level nil
  (cond (*compiler-push-events* 4)
	(*compiler-new-safety* 3)
	(*safe-compile* 2)
	(*compiler-check-args* 1)
	(0)))
  
(defun pd (fname ll args)
  (let (decls ctps doc (*no-proxy-symbols* t))
    (do nil ((or (not args) (if (stringp (car args)) (or (endp (cdr args)) doc)
			      (or (not (consp (car args))) (not (eq (caar args) 'declare))))))
	(let ((x (pop args))) (if (stringp x) (unless doc (push x doc)) (push x decls))))
    (do nil ((or (not args) (not (consp (car args))) (not (eq (caar args) 'check-type))))
	(push (pop args) ctps))
    (let* ((nal (do (r (y ll)) ((or (not y) (eq (car y) '&aux)) (nreverse r)) (push (pop y) r)))
	   (al (cdr (member '&aux ll)))
	   (ax (mapcar (lambda (x) (if (atom x) x (car x))) al))
	   (dd (aux-decls ax decls))
	   (cc (aux-ctps  ax ctps))
	   (sd `(declare (optimize (safety ,(this-safety-level))))))
      (portable-source `(lambda ,nal
			  ,@doc
			  ,@(let ((r (nreverse (cadr dd))))
			      (unless (and (consp r) (consp (car r)) (eq (caar r) 'declare)
					   (consp (cadar r)) (eq (caadar r) 'optimize)
					   (consp (cadr (cadar r))) (eq (caadr (cadar r)) 'safety))
				(push sd r))
			      (nconc r (cadr cc)))
			  ,@(let* ((r args)
				   (r (if (or al (car dd)) `((let* ,al ,@(append (car dd) (car cc)) ,@r)) r))
				   (r (if (and (consp (car r)) (eq (caar r) 'block) (eq (cadar r) fname))
					  r `((block ,fname ,@r)))))
			      r))))))

(defvar *recursion-detected*)

(defun aux-decls (auxs decls)
  (let (ad dd)
    (dolist (l decls)
      (let* ((b (cadr l))
	     (b (if (eq (car b) 'type) (cdr b) b)))
	(cond ((eq (car b) 'optimize) (push l dd))
	      ((eq (car b) 'class)
	       (unless (<= (length b) 3)
		 (cmperr "Unknown class declaration: ~s" b))
	       (if (member (cadr b) auxs) (push l ad) (push l dd)))
	      ((let ((tt (intersection (cdr b) auxs)))
		 (cond ((not tt) (push l dd))
		       ((let ((z (if (eq b (cadr l)) (list (caadr l)) (list (caadr l) (cadadr l)))))
			  (push `(declare (,@z ,@tt)) ad)
			  (let ((q (set-difference (cdr b) auxs)))
			    (when q
			      (push `(declare (,@z ,@q)) dd)))))))))))
    (list (nreverse ad) (nreverse dd))))

(defun aux-ctps (auxs ctps)
  (let (ad dd)
    (dolist (l ctps) (if (member (cadr l) auxs) (push l ad) (push l dd)))
    (list (nreverse ad) (nreverse dd))))

(defun c1retnote (le)
  (case (car le)
	(call-global (list (third le) (export-type (info-type (second le)))))
	((let let*) (list (car le) (export-type (info-type (second le))) 
			  (mapcar (lambda (x y) (list (var-name x) (c1retnote y))) (third le) (fourth le)) (c1retnote (fifth le))))
	(progn (list (car le) (export-type (info-type (second le))) (c1retnote (car (last (car (last le)))))))
	((lambda inline decl-body) (list (car le) (export-type (info-type (second le))) (c1retnote (car (last le)))))
	(if (list (car le) (export-type (info-type (second le))) (c1retnote (fourth le)) (c1retnote (fifth le))))
	(var (list (car le) (export-type (info-type (second le))) (var-name (car (third le)))))
	(location (list (car le) (export-type (info-type (second le)))))
	(return-from (list (car le) (c1retnote (car (last le)))))
	(tagbody `(,(car le) ,(export-type (info-type (second le))) ,@(mapcar (lambda(x) (unless (tag-p x) (c1retnote x))) (car (last le)))))
	(block `(,(car le) ,(export-type (info-type (second le))) ,@(mapcar 'c1retnote (last le))))
	(otherwise (list (car le) 'foo))))

(defvar *callees* nil)

(defun t1defun (args &aux (setjmps *setjmps*) (defun 'defun) (*sharp-commas* nil) fname lambda-expr cfun doc)
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'defun 2 (length args)))
  (cmpck (not (setq fname (function-symbol (car args))))
         "The function name ~s is not valid." (car args))
  (setq cfun (or (get fname 'Ufun) (next-cfun)))
  (maybe-eval nil  (cons 'defun args))

  (let* (*recursion-detected* *warning-note-stack* *callees* (e (or (gethash fname *sigs*) (setf (gethash fname *sigs*) (make-list 4)))))
	 
    (tagbody

     top

     (setq *non-package-operation* t)
     (setq *local-functions* nil *warning-note-stack* nil)

     (let* (*vars* *funs* *blocks* *tags* *special-binding*)
       (setq lambda-expr (c1lambda-expr (cdr args) fname)))
     (or (eql setjmps *setjmps*) (setf (info-volatile (cadr lambda-expr)) 1))
     (check-downward (cadr lambda-expr))
     (cmpnote "~s return type ~s" fname (c1retnote lambda-expr))

     (when *compiler-auto-proclaim*

       (let* ((al (mapcar 'var-type (caaddr lambda-expr)));(lambda (x) (readable-tp (var-type x)))
	      (rt (info-type (cadar (last lambda-expr)))))
	 
	 (when (notevery 'null (cdaddr lambda-expr)) (if al (nconc al '(*)) (setq al '(*))))
	 
	 (cmpnote "(proclaim '(ftype (function ~s ~s) ~s~%" al rt fname)
	 
	 (let ((oal (get-arg-types fname))
	       (ort (get-return-type fname)))
	   (unless (equal oal '(*))
	     (unless (and (= (length al) (length oal))
			  (every (lambda (x y) (or (and (eq x '*) (eq y '*)) (type>= y x))) al oal))
	       (cmpwarn "arg type mismatch in auto-proclamation ~s -> ~s~%" 
			(mapcar 'export-type oal) (mapcar 'export-type al))))
	   (unless (eq ort '*)
	     (unless (type>= ort rt)
	       (when (or (and (eq rt '*) (not (eq ort '*)))
			 (and (single-type-p ort) (not (single-type-p rt)))
			 (and (get fname 'return-type) (single-type-p (get fname 'return-type)) (not (single-type-p rt))))
		 (cmpwarn "ret type mismatch in auto-proclamation ~s(~s) -> ~s~%" 
			  (export-type ort) (get fname 'return-type) (export-type rt)))))
	   (let* ((osig (or (car e) (list (mapcar 'export-type oal) (export-type ort))));(gethash fname *sigs*))
		  (sig (list (mapcar 'export-type al) (export-type (if *recursion-detected* (bump-tp rt) rt)))))
	     (unless (or (equal sig osig) *new-sigs-in-file* *recursion-detected*)
	       (setq *new-sigs-in-file* 
		     (some (lambda (x) 
			     (unless (eq x fname)
			       (multiple-value-bind 
				(s f) (gethash x *sigs*) 
				(declare (ignore s))
				(when f (list x fname osig sig))))) (si::callers fname))))
	     (setf (car e) sig)
;	     (si::procl fname sig)
	     )
	   (when *recursion-detected*;FIXME
	     (let ((al (get-arg-types fname)) (rt (get-return-type fname)))
	       (unless (and (equal oal al) (equal ort rt) (eq *recursion-detected* 'block))
		 (setq *recursion-detected* 'block)
		 (go top)))))))
    

     ;;provide a simple way for the user to declare functions to
     ;;have fixed args without having to count them, and make mistakes.
     (cond ((get fname 'fixed-args);the number of regular args in definition
	    (let ((n  (length (car (lambda-list lambda-expr)))))
	      (setf (get fname 'fixed-args)  n);;for error checking.
	      (proclaim (list 'function fname
			      (make-list n :initial-element t) t)))))
     
     (cond
      ((and
;	(get fname 'proclaimed-function)
	;; check the args:
	(let ((lambda-list (lambda-list lambda-expr)) bind)
	  (and (null (cadr lambda-list))	;;; no optional
	       (null (caddr lambda-list))	;;; no rest
	       (null (cadddr lambda-list))	;;; no keyword
	       (< (length (car lambda-list)) call-arguments-limit)
						;;; less than 10 requireds
		   ;;; For all required parameters...
	       (do ((vars (car lambda-list) (cdr vars))
		    (types (get-arg-types fname) (cdr types))
		    (problem))
		   ((endp vars)
		    (and (endp types)
			 (cond (bind (setq args (cmpfix-args args bind))
				     (go top))
			       (t (not problem)))))
		   (let ((var (car vars)))
		     (cond  ((equal (car types) '*)(return nil)))
		     (unless
			 (and
			  (or (and (or (eq (var-kind var) 'LEXICAL)
				       (and (eq (var-kind var)
						'special)
					    (eq (car types) t)))
				   (not (var-cb var)))
			      (progn (push (list 
					    (var-name var) (gensym))
					   bind)
				     t))
			  (type-and (car types) (var-type var))
			  (or (member (car types) +c-local-var-types+)
			      (eq (var-loc var) 'object)
			      *c-gc* 
			      (not (is-changed var (cadr lambda-expr)))))
		       (unless bind
			 (cmpwarn "Calls to ~a will be VERY SLOW. Recommend not to proclaim.  ~%;;The arg caused the problem. ~a"
				  fname  (var-name var)))
		       
		       (setq problem t))))
	       (numberp cfun))))
       ;;whew: it is acceptable.
       (push (let* ((at (get-arg-types fname))
		    (vr (member '* at))
		    (rt (get-return-type fname)))
	       (list fname (mapcar (lambda (x) (link-rt x vr)) at) (link-rt rt vr)
		     (if (single-type-p rt) (flags set ans) (flags set ans sets-vs-top))
		     (make-inline-string cfun at fname)))
	     *inline-functions*)))

     (output-warning-note-stack)

     (when (cadddr lambda-expr)
       (setq doc  (cadddr lambda-expr)))
     (add-load-time-sharp-comma)
     (push (list defun fname cfun lambda-expr doc *special-binding*)
	   *top-level-forms*)
     (push (cons fname cfun) *global-funs*)
     
     (setf (cadr e) *callees*)

     (if *sig-discovery*
	 (si::add-hash fname (car e) (cadr e)  nil nil)
       (setf (caddr e) (let* ((w (make-string-output-stream))
			      (ss (si::open-fasd w :output nil nil))
			      (out (pd fname (cadr args) (cddr args))))
			 (si::find-sharing-top out (aref ss 1))
			 (si::write-fasd-top out ss)
			 (si::close-fasd ss)
			 (get-output-stream-string w))
	     (cadddr e) (unless *compiler-compile* 
			  (namestring (pathname *compiler-input*))))))))
  
(defun make-inline-string (cfun args fname)
  (if (null args)
      (format nil "~d()" (c-function-name "LI" cfun fname))
      (let ((rt (get-return-type fname))
	    (o (make-array 100 :element-type 'character :fill-pointer 0 :adjustable t )))
           (format o "~d(" (c-function-name "LI" cfun fname))
           (do ((l (if (single-type-p rt) args (cons #tfixnum args)) (cdr l))
                (n (if (single-type-p rt) 0 -1) (1+ n)))
               ((endp (cdr l))
                (if (eq '* (car l)) (format o "#*)") (format o "#~d)" n)))
               (declare (fixnum n))
               (format o "#~d," n))
           o)))

 

(defun cs-push (&optional type local)
  (let ((tem (next-cvar)))
   (let ((type (if (or (not type) (eq type 'object)) t type)))
    (when (or (not local) (not (eq type t)))
	(push (if local (cons tem type) (cons type tem)) *c-vars*)))
    tem))


;For the moment only two types are recognized.
(defun f-type (x)
  (if (var-p x) (setq x (var-type x)))
  (let ((x (promoted-c-type x)))
    (let ((x (position x +c-global-arg-types+)))
      (if x (1+ x) 0))))

(defun proclaimed-argd (args return)
  (let* ((ans (length args))
	 (i 8)
	 (type (the fixnum (f-type return)))
	 (type (if (single-type-p return) type (+ 4 type)));fixme rationalize
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
    
(defun type-f (x)
  (declare (fixnum x))
  (if (zerop x) t (nth (1- x) +c-global-arg-types+)))

;FIXME obsolete
(defun proclaim-from-argd (argd)
  (declare (fixnum argd))
  (let* ((n (logand argd (1- (ash 1 8))))
	 (argd (ash argd -8))
	 (ret (logand argd (1- (ash 1 2))))
	 (argd (ash argd -4))
	 (args (let (r) (dotimes (i n) (push (logand argd (1- (ash 1 2))) r) (setq argd (ash argd -2))) (nreverse r))))
    (list (mapcar 'type-f args) (type-f ret))))


(defun vald (tp)
  (cond ((single-type-p tp) 0)
	((type>= #t(values t) tp) 1);FIXME
	((eq tp '*) multiple-values-limit)
	((> (length tp) (+ 2 multiple-values-limit)) (baboon))
	((eq (car tp) 'returns-exactly) (- 2 (length tp)))
	((- (length tp) 2))))

(defun wt-if-proclaimed (fname cfun lambda-expr)
  (when (and (fast-link-proclaimed-type-p fname) (not (member '* (get-arg-types fname))))
    (let ((at (get-arg-types fname))
	  (rt (get-return-type fname)))
      (cond ((assoc fname *inline-functions*)
	     (add-init `(si::mfsfun ',fname 
				    ,(add-address (c-function-name "LI" cfun fname))
				    ,(proclaimed-argd at rt)
				    ,(vald rt)))
	     t)
	    ((let ((arg-c (length (car (lambda-list lambda-expr))))
		   (arg-p (length at))
		   (va (member '* at)))
	       (cond (va
		      (or (>= arg-c (- arg-p (length va)))
			  (cmpwarn "~a needs ~a args. ~a supplied." fname (- arg-p (length va)) arg-c)))
		     ((not (eql arg-c arg-p))
		      (cmpwarn
		       "~%;; ~a Number of proclaimed args was ~a. ~
                          ~%;;Its definition had ~a." fname arg-p arg-c))
					;((>= arg-c 10.)) ;checked above 
					;(cmpwarn " t1defun only likes 10 args ~
					;            ~%for proclaimed functions")
		     (t (cmpwarn
		       " ~a is proclaimed but not in *inline-functions* ~
        ~%T1defun could not assure suitability of args for C call" fname)))
	       nil))))))
	

(defun volatile (info)
   (if  (/= (info-volatile info) 0) "VOL " ""))

(defun register (var)
  (cond ((and (equal *volatile* "")
	      (>= (the fixnum (var-register var))
		  (the fixnum *register-min*)))
	 "register ")
	(t "")))

(defun vararg-p (x)
  (member '* (get-arg-types x)))
;  (and 
;   (link-arg-p (get-return-type x))
;   (every 'link-arg-p (get-arg-types x))))
;   (every (lambda (y) (or (eq y t) (eq y '*))) (get-arg-types x))));FIXME keep full arg-types and link-rt them too

(defun maxargs (lambda-list)
; any function can take &allow-other-keys in ANSI lisp 
  (cond (
;	 (or (ll-allow-other-keys lambda-list)(ll-rest lambda-list))
	 (or (ll-keywords-p lambda-list) (ll-rest lambda-list))
	 64)
	(t (+ (length (car lambda-list)) ;reg
	      (length (ll-optionals lambda-list))
	      (* 2 (length (ll-keywords lambda-list)))))))



  
(defun add-address (a)
  ;; if need ampersand before function for address
  ;; (setq a (string-concatenate "&" a))
  (push (list a) *vaddress-list*)
  (prog1 *vind* (incf *vind*)))

;FIXME obsolete
(defun collect-objects (le)
  (cond ((atom le) nil)
	((and (eq (car le) 'location) (consp (caddr le)) (eq (caaddr le) 'vv))
	 (list (or (car (member (cadr (caddr le)) *top-level-forms* :key 'cadr))
		   (aref (data-vector) (cadr (caddr le))))))
	((append (collect-objects (car le)) (collect-objects (cdr le))))))


(defun t2defun (fname cfun lambda-expr doc sp)
  (declare (ignore  sp))
  (cond ((get fname 'no-global-entry)(return-from t2defun nil)))

  (when doc (add-init `(si::putprop ',fname ,doc 'si::function-documentation) ))

  (cond ((wt-if-proclaimed fname cfun lambda-expr))
	((vararg-p fname)
	 (let ((keyp (ll-keywords-p (lambda-list lambda-expr)))
	       (rt (get-return-type fname)))
	   (if keyp
	       (add-init `(si::mfvfun-key
			   ',fname ,(add-address (c-function-name "LI" cfun fname))
			   ,(vargd (length (car (lambda-list lambda-expr)))
				   (maxargs (lambda-list lambda-expr))
				   (not (single-type-p rt)))
			   ,(add-address (format nil "&LI~akey" cfun))
			   ,(vald rt)))
	     (add-init `(si::mfvfun ',fname ,(add-address (c-function-name "LI" cfun fname))
				    ,(vargd (length (car (lambda-list lambda-expr)))
					    (maxargs (lambda-list lambda-expr))
					    (not (single-type-p rt)))
				    ,(vald rt))))))
	((numberp cfun)
         (wt-h "static void " (c-function-name "L" cfun fname) "();")
	 (add-init `(si::mf ',fname ,(add-address (c-function-name "L" cfun fname))) ))
        (t (wt-h cfun "();")
	   (add-init `(si::mf ',fname ,(add-address (c-function-name "" cfun fname) )) )))
           
  (when *compiler-auto-proclaim*
    (add-init `(si::add-hash ',fname ,@(mapcar (lambda (x) `(quote ,x)) (gethash fname *sigs*)))))
;;    (let ((h (gethash fname si::*call-hash-table*)))
;;       (add-init `(si::add-hash ',fname ',(gethash fname *sigs*)
;; 			       ',(mapcar (lambda (x) 
;; 					   (cons x (or (gethash x *sigs*) (si::call-sig (gethash x si::*call-hash-table*)))))
;; 					 (sublis +cmp-fn-alist+ (si::call-callees h)))
;; 			       ,(si::call-src h) ,(si::call-file h)))
;;      ))

  (let ((base-name (setf-function-base-symbol fname)))
    (when base-name
      (add-init `(si::putprop ',base-name ',fname 'si::setf-function))))

  (cond ((< *space* 2)
	 (setf (get fname 'debug-prop) t)
	 )))

(defun si::add-debug (fname x)
  (si::putprop fname x  'si::debugger))

(defun t3defun (fname cfun lambda-expr doc sp &aux inline-info 
		      (*current-form* (list 'defun fname))
		      (*volatile* (volatile (second lambda-expr)))
		      *downward-closures*)

  (declare (ignore doc))

  (let ((*compiler-check-args* *compiler-check-args*)
        (*safe-compile* *safe-compile*)
        (*compiler-push-events* *compiler-push-events*)
        (*compiler-new-safety* *compiler-new-safety*)
        (*notinline* *notinline*)
        (*space* *space*)
        (*debug* *debug*))
    
    (when (eq (car (caddr (cddr lambda-expr))) 'decl-body)
      (local-compile-decls (caddr (caddr (cddr lambda-expr)))))

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
      (analyze-regs (cadr lambda-expr) 0)
      (t3defun-aux 't3defun-local-entry
		   (or (cdr (assoc (promoted-c-type (caddr inline-info)) +return-alist+)) 'return-object)
		   fname cfun lambda-expr sp inline-info))

     ((vararg-p fname)
      (analyze-regs (cadr lambda-expr) 0)
      (t3defun-aux 't3defun-vararg 'return-object
		   fname cfun lambda-expr sp))

     (t (analyze-regs (cadr lambda-expr) 2)
	(t3defun-aux 't3defun-normal 'return fname cfun lambda-expr sp)))
    
    (wt-downward-closure-macro cfun)
    (add-debug-info fname lambda-expr)))

(defun t3defun-aux (f *exit* &rest lis)
  (let-pass3 ()   (apply f lis)))   

(defvar *mv-var* nil)

(defun t3defun-local-entry (fname cfun lambda-expr sp inline-info
				   &aux specials (requireds (caaddr lambda-expr)) mv-var)
  (do ((vl requireds (cdr vl))
       (types (cadr inline-info) (cdr types)))
      ((endp vl))
      (if (eq (var-kind (car vl)) 'special)
	  (push (cons (car vl) (var-loc (car vl))) specials)
	(setf (var-kind (car vl))
	      (or (car (member (promoted-c-type (car types)) +c-local-arg-types+)) 'object)))
      (setf (var-loc (car vl)) (cs-push (var-type (car vl)) t)))
  (wt-comment "local entry for function " (function-string fname))
  (wt-h "static " (declaration-type (rep-type (caddr inline-info))) (c-function-name "LI" cfun fname) "();")
  (wt-nl1 "static " (declaration-type (rep-type (caddr inline-info))) (c-function-name "LI" cfun fname) "(")
  (let ((rt (get-return-type fname)))
    (unless (single-type-p rt)
      (setq mv-var (make-var :type #tfixnum :kind #tfixnum :ref t :name (gensym) 
			     :loc (cs-push #tfixnum t) :mt #tfixnum :dt #tfixnum))
      (let ((ns (abs (vald rt))))
	(unless (= ns multiple-values-limit)
	  (setq *max-vs* (max *max-vs* ns))))))
  (if mv-var
      (wt-requireds (cons mv-var requireds) (cons #tfixnum (cadr inline-info)))
    (wt-requireds  requireds (cadr inline-info)))
         ;;; Now the body.
  (let ((cm *reservation-cmacro*)
	(*tail-recursion-info*
	 (if *do-tail-recursion* (cons fname requireds) nil))
	(*unwind-exit* *unwind-exit*))
    (wt-nl1 "{	")
    (assign-down-vars (cadr lambda-expr) cfun
		      't3defun)
    (wt " VMB" cm " VMS" cm " VMV" cm)
    
    (when sp (wt-nl "bds_check;"))
    (when *compiler-push-events* (wt-nl "ihs_check;"))
    (when *tail-recursion-info*
      (push 'tail-recursion-mark *unwind-exit*)
      (wt-nl "goto TTL;") (wt-nl1 "TTL:;"))
    (dolist
	(v specials)
      (wt-nl "bds_bind(" (vv-str (cdr v)) ",V" (var-loc (car v))");")
      (push 'bds-bind *unwind-exit*)
      (setf (var-kind (car v)) 'SPECIAL)
      (setf (var-loc (car v)) (cdr v)))
    (let ((*mv-var* mv-var))
      (c2expr (caddr (cddr lambda-expr)))
      (wt-V*-macros cm (caddr inline-info)))
    
;;; Use base if defined for lint
    (if (and (zerop *max-vs*) (not *sup-used*) (not *base-used*)) t (wt-nl "base[0]=base[0];"))
    
;;; Make sure to return object if necessary
    (if (equal "object " (rep-type (caddr inline-info))) (wt-nl "return Cnil;"))
    
    (wt-nl1 "}")))

(defvar *vararg-use-vs* nil)
(defun set-up-var-cvs (var)
	      (cond (*vararg-use-vs* 
		     (setf (var-ref var) (vs-push)))
;		    ((numberp (var-loc var)))
		    (t (setf (var-ref var) (cvs-push)))))

(defun t3defun-vararg (fname cfun lambda-expr sp &aux  reqs *vararg-use-vs* mv-var
			     block-p labels (deflt t) key-offset
			     (*inline-blocks* 0) rest-var
			     (ll (lambda-list lambda-expr)) va-start
			     (is-var-arg (or (ll-rest ll)
					     (ll-optionals ll)
					     (ll-keywords-p ll))))

  (dotimes (i (length (car ll)))
    (push (list 'cvar (cs-push t t)) reqs))
  (let ((rt (get-return-type fname)))
    (unless (single-type-p rt)
      (setq mv-var (make-var :type #tfixnum :kind #tfixnum :ref t :name (gensym) 
			     :loc (cs-push #tfixnum t) :mt #tfixnum :dt #tfixnum))
      (push mv-var (car ll))
      (let ((ns (abs (vald rt))))
	(unless (= ns multiple-values-limit)
	  (setq *max-vs* (max *max-vs* ns))))
      (push (list 'var mv-var nil) reqs)))
  (wt-comment "local entry for function " (function-string fname))
  
  (let ((tmp ""))
    (wt-nl1 "static object " (c-function-name "LI" cfun fname) "(")
    (when reqs 
      (do ((v reqs (cdr v)))
	  ((null v))
	  (cond ((and mv-var (eq v reqs)) 
		 (wt "fixnum V" (var-loc (cadar v)))
		 (setq tmp (concatenate 'string tmp "fixnum")))
		(t (wt "object " (car v))
		 (setq tmp (concatenate 'string tmp "object"))))
	  (or (null (cdr v)) 
	      (progn 
		(wt ",")
		(setq tmp (concatenate 'string tmp ","))))))
    (when is-var-arg
      (when reqs (progn (wt ",") (setq tmp (concatenate 'string tmp ","))))
      (wt "object first,...")
      (setq tmp (concatenate 'string tmp "object,...")))
    (wt ")")
    (wt-h "static object " (c-function-name "LI" cfun fname) "(" tmp ");"))
  
  
					;  (when reqs (wt-nl "object ")
					;	(wt-list reqs)  (wt ";"))
					;  (if is-var-arg (wt-nl "va_dcl "))
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
	  (not (member-if-not (lambda (x) (and (consp x) (consp (cadr x)) (eq (caadr x) 'location))) (ll-optionals ll)));fixme function defaults
	  (null (ll-keywords ll))
	  (cons fname (append (if mv-var (cdr (car ll)) (car ll)) (ll-optionals ll)))))
	(*unwind-exit* *unwind-exit*))
    (wt-nl1 "{	")
    (when is-var-arg	  (wt-nl "va_list ap;"))
    (wt-nl "int narg = VFUN_NARGS" (if mv-var "+1;" ";"))
    
    (assign-down-vars (cadr lambda-expr) cfun
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
			(let ((cvar (cs-push (var-type var) t)))
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
					;  (if *vararg-use-vs* t (progn (wt-nl "Vcs[0]=Vcs[0];")))
    
  ;;; start va_list at beginning
    (if (or (ll-optionals ll) (ll-rest ll) (ll-keywords-p ll))
	(unless va-start (setq va-start t) (wt-nl "va_start(ap,first);")))
    
  ;;; Check arguments.
    (when (and (or *safe-compile* *compiler-check-args*) (car ll))
      (wt-nl "if(narg <" (length (car ll))
	     ") too_few_arguments();"))
    
  ;;; Allocate the parameters.
    (dolist** (var (car ll))    (set-up-var-cvs var))
    (dolist** (opt (ll-optionals ll))  (set-up-var-cvs (car opt)) (when (caddr opt) (set-up-var-cvs (caddr opt))))
    
    
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
	(wt-nl "narg -= " (length reqs) ";")
	(let ((first t))
	  (dolist** (opt (ll-optionals ll))
		    (push (next-label) labels)
		    (wt-nl "if (" (if (cdr labels) "--" "") "narg <= 0) ")
		    (wt-go (car labels))
		    (wt-nl "else {" )
		    (unless va-start (setq va-start t) (wt-nl "va_start(ap,first);"))
		    (c2bind-loc (car opt) (if first (list 'first-var-arg) (list 'next-var-arg)))
		    (setq first nil)
		    (wt "}")
		    (when (caddr opt) (c2bind-loc (caddr opt) t)))
	  (when (and (not first) (or (ll-rest ll) (ll-keywords ll)))
	    (wt-nl "first=va_arg(ap,object);"))))
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
		(t (wt-nl "narg -= " (length (car ll)) ";")))
	  (unless va-start (setq va-start t) (wt-nl "va_start(ap,first);"))
	  (wt-nl "V" rest-var " = ")
	  
	  (let ((*rest-on-stack*
		 (or (/= (var-dynamic (ll-rest ll)) 0)
		     *rest-on-stack*)))
	    (if (ll-keywords-p ll)
		(cond (*rest-on-stack*
		       (add-libc "bzero")
		       (add-libc "memset")
		       (wt "(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));"))
		      (t (wt "make_list(narg);")))
	      (cond (*rest-on-stack*
		     (add-libc "bzero")
		     (add-libc "memset")
		     (wt "(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));"
			 ))
		    (t  (wt "list_vector_new(narg,first,ap);"))))
	    (c2bind-loc (ll-rest ll) (list 'cvar rest-var)))))
    (when (ll-keywords-p ll)
      (cond ((ll-rest ll))
	    ((ll-optionals ll))
	    (t (wt-nl "narg -= " (length (car ll)) ";")))
      
      (unless va-start (setq va-start t) (wt-nl "va_start(ap,first);"))
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
	  (wt "} " "LI" cfun "key=")
	  
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
	       (wt-nl "parse_key_rest_new(" (list 'cvar rest-var) ","))
	      (t (wt-nl "parse_key_new_new(")))
	(if (eql 0 *cs*)(setq *cs* 1))
	(wt "narg," (if *vararg-use-vs* "base " (progn (setq *vcs-used* t) "Vcs "))
	    "+" key-offset",(struct key *)(void *)&LI" cfun "key,first,ap);")
	
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
      (wt-nl "goto TTL;") (wt-nl1 "TTL:;"))
    (let ((*mv-var* mv-var))
      (c2expr (caddr (cddr lambda-expr)))
      (wt-V*-macros cm (get fname 'proclaimed-return-type)))
    
    ;;; End va_list at function end
    
    (when va-start (setq va-start nil) (wt-nl "va_end(ap);"))
    
;;; Use base if defined for lint
    (if (and (zerop *max-vs*) (not *sup-used*) (not *base-used*)) t (wt-nl "base[0]=base[0];"))
    
;;; Need to ensure return of type object
    (wt-nl "return Cnil;")
    
    (wt "}") 
    (when block-p (wt-nl "}"))
    (close-inline-blocks)))

(defun t3defun-normal (fname cfun lambda-expr sp)
         (wt-comment "function definition for " (function-string fname))
         (if (numberp cfun)
             (wt-nl1 "static void " (c-function-name "L" cfun fname) "()")
             (wt-nl1 cfun "()"))
         (wt-nl1 "{" "register object *"  *volatile*"base=vs_base;")
	 (assign-down-vars (cadr lambda-expr) cfun
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
  (declare (ignore return-type))
  (push (cons cm *max-vs*) *reservations*)
  
  ;;note if (proclaim '(function foo () t))
  ;;(defun foo () (goo)) ;then *max-vs*=0,*sup-used*=t;--wfs
  (cond ((and (zerop *max-vs*) (not *sup-used*) (not *base-used*)) (wt-h "#define VMB" cm))
	((wt-h "#define VMB" cm " register object *" *volatile* "base=vs_top;")))
  ;;tack following onto the VMB macro..
  (wt-cvars)

  (cond (*sup-used* (wt-h "#define VMS" cm  " register object *" *volatile* "sup=vs_top+" *max-vs* ";vs_top=sup;"))
	((zerop *max-vs*) (wt-h "#define VMS" cm))
	((wt-h "#define VMS" cm " vs_top += " *max-vs* ";")))
  
  (cond ((zerop *max-vs*) (wt-h "#define VMV" cm))
	(*safe-compile*	(wt-h "#define VMV" cm " vs_reserve(" *max-vs* ");"))
	((wt-h "#define VMV" cm " vs_check;")))

  (cond (*mv-var* (wt-h "#define VMR" cm "(VMT" cm ") vs_top=V" (var-loc *mv-var*) 
			" ? (object *)V" (var-loc *mv-var*) " : base; return(VMT" cm ");"))
	((zerop *max-vs*) (wt-h "#define VMR" cm "(VMT" cm ") return(VMT" cm ");"))
	((wt-h "#define VMR" cm "(VMT" cm ") vs_top=base ; return(VMT" cm ");"))))

;;Write the required args as c arguments, and declarations for the arguments.
(defun wt-requireds (requireds arg-types)
  (do ((vl requireds (cdr vl)))
      ((endp vl))
      (let ((cvar (cs-push (var-type (car vl)) t)))
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
	
	(if prev-type (wt ";"))
	
	(wt *volatile* (register (car vl))
	    (rep-type (car types)));(var-kind (car vl))));(car types)))	
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
      (do-referred (va (second lambda-expr))
	      (when (and (consp (var-ref va))
			 (si::fixnump (cdr (var-ref va))))
	    (setq leng (max leng (cdr (var-ref va))))))
      (setq locals (make-list (1+ leng)))
      (do-referred (va (second lambda-expr))
	      (when (and (consp (var-ref va))  ;always fixnum ?
			 (si::fixnump (cdr (var-ref va))))
		    (setf (nth (cdr (var-ref va)) locals)
			  (var-name va))))
      (setf (get fname 'si::debugger) locals)
      (let ((locals (get fname 'si::debugger)))
	(if (and locals (or (cdr locals) (not (null (car locals)))))
	    (add-init `(si::debugger ',fname ',locals) )
	    ))
      ))))


;;Checks the register slots of variables, and finds which
;;variables should be in registers, zero'ing the register slot
;;in the remaining.  Data and address variables are done separately.
(defun analyze-regs (info for-sup-base)
  (let ((addr-regs (- *free-address-registers* for-sup-base)))
  (cond ((zerop *free-data-registers*)
	 (analyze-regs1 info addr-regs))
	(t
	 (let ((addr (make-info))
	       (data (make-info)))
	   (do-referred (v info)
	     (cond ((member (var-type v) +c-local-var-types+)
		    (push-referred v data))
		   (t
		    (push-referred v addr))))
	   (analyze-regs1 addr addr-regs)
	   (analyze-regs1 data *free-data-registers*))))))

(defun analyze-regs1 (info want )
  (let ((tem 0)(real-min 3)(this-min 100000)(want want)(have 0))
    (declare (fixnum tem real-min this-min  want have))
  (tagbody
   START
   (do-referred (v info)
	   (setq tem (var-register v))
	   (cond ((>= tem real-min)
		  (setq have (the fixnum (+ have 1)))
		  (cond ((< tem this-min )
			 (setq this-min tem)))
		  (cond ((> have want) (go NEXT)))
		  )))
    (cond ((< have want) (setq real-min (- real-min 1))))
    (do-referred (v info)
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
    (wt-comment "global entry for the function " (function-string fname))
    (wt-nl1 "static void " (c-function-name "L" cfun fname) "()")
    (wt-nl1 "{	register object *base=vs_base;")
    (when (or *safe-compile* *compiler-check-args*)
          (wt-nl "check_arg(" (length arg-types) ");"))
    (wt-nl "base[0]=" (let* ((tp (promoted-c-type return-type))
			     (z (cdr (assoc tp +wt-c-var-alist+))))
			(if (and (eq #tfixnum tp) (zerop *space*)) 
			  (concatenate 'string "CMP" z) (or z "")));FIXME t
           "(" (c-function-name "LI" cfun fname) "(")
    (unless (single-type-p return-type)
      (wt "(fixnum)(base+1),"))
    (do ((types arg-types (cdr types))
         (n 0 (1+ n)))
        ((endp types))
        (declare (object types) (fixnum n))
        (wt (let ((z (promoted-c-type (car types))))
	      (or (cdr (assoc z +to-c-var-alist+)) ""))
            "(base[" n "])")
        (unless (endp (cdr types)) (wt ",")))
    (wt "));")
    (if (single-type-p return-type)
	(wt-nl "vs_top=(vs_base=base)+1;")
      (wt-nl "vs_base=base;"))
    (wt-nl1 "}"))

(defconstant +wt-c-rep-alist+ `((,#tfixnum ."fixnum ")
;				(,#tinteger ."GEN ") 
				(,#tcharacter  ."unsigned char ")
				(,#tlong-float  ."double ")
				(,#tshort-float ."float ")
				(,#tfcomplex ."fcomplex ")
				(,#tdcomplex ."dcomplex ")
				(object . "object ")))

(defun rep-type (type)
  (let ((z (promoted-c-type type)))
    (or (cdr (assoc z +wt-c-rep-alist+)) "object ")))


(defun t1defmacro (args)
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'defmacro 2 (length args)))
  (cmpck (not (symbolp (car args)))
         "The macro name ~s is not a symbol." (car args))
  (maybe-eval (not (macro-function (car args))) (cons 'defmacro args))
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
             *top-level-forms*)))


(defun t2defmacro (fname cfun macro-lambda doc ppn sp)

  (declare (ignore macro-lambda sp))
  (when doc (add-init `(si::putprop ',fname ,doc 'si::function-documentation) ))
  (when ppn
	(add-init `(si::putprop ',fname ',ppn 'si::pretty-print-format) ))
  (let ((nm (c-function-name "L" cfun fname)))
    (wt-h "static void " nm "();")
    (add-init `(si::MM ',fname ,(add-address nm)))))

(defun t3defmacro (fname cfun macro-lambda doc ppn sp
                         &aux (*volatile* (if (get fname 'contains-setjmp)
					      " VOL " "")))
  (declare (ignore doc ppn))

  (let ((*compiler-check-args* *compiler-check-args*)
        (*safe-compile* *safe-compile*)
        (*compiler-push-events* *compiler-push-events*)
        (*compiler-new-safety* *compiler-new-safety*)
        (*notinline* *notinline*)
        (*space* *space*)
        (*debug* *debug*))
    
    (when (eq (car (cadddr macro-lambda)) 'decl-body)
      (local-compile-decls (caddr (cadddr macro-lambda))))
    
    (let-pass3
     ((*exit* 'return))
     (wt-comment "macro definition for " fname)
     (wt-nl1 "static void " (c-function-name "L" cfun fname) "()")
     (wt-nl1 "{register object *" *volatile* "base=vs_base;")
     (assign-down-vars (nth 4 macro-lambda) cfun ;*dm-info*
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
     (wt-cvars))))


(defun tlclp (form)
  (cond ((atom form) nil)
	((member (car form) '(si::define-macro si::fset)))
	((or (tlclp (car form)) (tlclp (cdr form))))))

(defun t1ordinary (form &aux tem )
  (setq *non-package-operation* t)
  ;; check for top level functions
  (cond ((or *compile-ordinaries* (tlclp (portable-source form)))
	 (maybe-eval nil form)
	 (let ((gen (gensym "progn 'compile")))
	   (proclaim `(function ,gen nil t))
	   (t1expr `(defun ,gen (), form nil))
	   (push (list 'ordinary `(,gen) ) *top-level-forms*)))
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
	(t (add-init form))))

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
  (wt-nl (vv-str vv) "->s.s_dbind = " loc ";"))

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
  (wt-h header ";")
  (wt-nl1 "{")
  (wt-nl1 "object *vs=vs_top;")
  (when (or (> vs-size 0)
	    (some (lambda (x) (or (not (stringp x)) (not (constantp x)))) body))
    (wt-nl1 "object *old_top=vs_top+" vs-size ";"))
  (when (> vs-size 0) (wt-nl "vs_top=old_top;"))
  (wt-nl1 "{")
  (dolist** (s body)
    (cond ((stringp s) (wt-nl1 s))
          ((eq (caar s) 'quote)
           (wt-nl1 (cadadr s))
           (case (caadr s)
                 (object (wt "=" (vv-str (cadar s)) ";"))
                 (otherwise
                  (wt "=object_to_" (string-downcase (symbol-name (caadr s)))
                      "(" (vv-str (cadar s)) ");"))))
          (t (wt-nl1 "{vs_base=vs_top=old_top;")
             (dolist** (arg (cdar s))
               (wt-nl1 "vs_push(")
               (case (car arg)
                     (object (wt (cadr arg)))
                     (char (wt "code_char((long)" (cadr arg) ")"))
                     (int (when (zerop *space*) (wt "CMP"))
                          (wt "make_fixnum(" (cadr arg) ")"))
                     (float (wt "make_shortfloat((double)" (cadr arg) ")"))
                     (double (wt "make_longfloat((double)" (cadr arg) ")")))
               (wt ");"))
             (cond ((setq fd (assoc (caar s) *global-funs*))
                    (cond (*compiler-push-events*
                           (wt-nl1 "ihs_push(" (vv-str (add-symbol (caar s))) ");")
                           (wt-nl1 (c-function-name "L" (cdr fd) (caar s)) "();")
                           (wt-nl1 "ihs_pop();"))
                          (t (wt-nl1 (c-function-name "L" (cdr fd) (caar s)) "();"))))
                   (*compiler-push-events*
                    (wt-nl1 "super_funcall(" (vv-str (add-symbol (caar s))) ");"))
                   (*safe-compile*
                    (wt-nl1 "super_funcall_no_event(" (vv-str (add-symbol (caar s))) ");"))
                   (t (wt-nl1 "CMPfuncall(" (vv-str (add-symbol (caar s))) "->s.s_gfdef);"))
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

(defun t1defentry (args &aux type cname (cfun (next-cfun)) cfspec static)
  (when (or (endp args) (endp (cdr args)) (endp (cddr args)))
        (too-few-args 'defentry 3 (length args)))
  (cmpck (not (symbolp (car args)))
         "The function name ~s is not a symbol." (car args))
  (dolist** (x (cadr args))
    (cmpck (not (member x '(object char int fixnum float double string)))
           "The C-type ~s is illegal." x))
  (setq cfspec (caddr args))
  (cond ((symbolp cfspec)
         (setq type 'object)
         (setq cname (string-downcase (symbol-name cfspec))))
        ((stringp cfspec)
         (setq type 'object)
         (setq cname cfspec))
	((and (consp cfspec) (eq (car cfspec) 'static)
	      (setq static t cfspec (cdr cfspec)) nil))
        ((and (consp cfspec)
              (member (car cfspec) '(void object char int fixnum float double
					  string))
              (consp (cdr cfspec))
              (or (symbolp (cadr cfspec)) (stringp (cadr cfspec)))
              (endp (cddr cfspec)))
         (setq cname (if (symbolp (cadr cfspec))
                        (string-downcase (symbol-name (cadr cfspec)))
                        (cadr cfspec)))
         (setq type (car cfspec)))
        (t (cmperr "The C function specification ~s is illegal." cfspec)))
  (push (list 'defentry (car args) cfun (cadr args) (if static (list 'static type) type) cname)
        *top-level-forms*)
  (push (cons (car args) cfun) *global-funs*)
  )

(defun t2defentry (fname cfun arg-types type cname)
  (declare (ignore arg-types type cname))
  (wt-h "static void " (c-function-name "L" cfun fname) "();")
  (add-init `(si::mf ',fname ,(add-address (c-function-name "L" cfun fname))) )
  )

(defun t3defentry (fname cfun arg-types type cname)
  (wt-h 
   (if (and (consp type) (eq (car type) 'static) (setq type (cadr type))) "static " "")
   (if (eq type 'string) "char *" (string-downcase (symbol-name type)))
   " " cname "("
   (with-output-to-string 
    (s)
    (do ((l arg-types (cdr l))) ((not l) (princ ");"s ))
      (princ (if (eq (car l) 'string) "char *" (string-downcase (symbol-name (car l)))) s)
      (when (cdr l) (princ "," s)))))
  (wt-comment "function definition for " fname)
  (wt-nl1 "static void " (c-function-name "L" cfun fname) "()")
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
              (declare (fixnum i))
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
        ((fixnum int) (when (zerop *space*) (wt "CMP"))
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



;; Add optional argument initial-ccb-vs here defaulting to ccb-vs.
;; Local functions will set this to the value of *initial-ccb-vs*
;; prevalent at the time of the local function creation.  Closures
;; will let it default to ccb-vs, which will be the value of *ccb-vs*
;; prevalent at the time the environment stack was pushed and the
;; closure was created.  CM 20031130
(defun t3local-dcfun (closure-p clink ccb-vs fun lambda-expr &optional (initial-ccb-vs ccb-vs)
                              &aux (level (if closure-p 0 (fun-level fun)))
			      cm
             (*volatile* (volatile (cadr lambda-expr)))
	     *downward-closures*
	     (requireds (caaddr lambda-expr)))
  (wt-comment "local dc function " (if (fun-name fun) (fun-name fun) nil))
  (wt-nl1 "static void " (c-function-name (if closure-p "LC" "L") (fun-cfun fun) (fun-name fun)) "(")
  (wt "base0" (if requireds "," ""))
  (analyze-regs (cadr lambda-expr) 2)
  (wt-requireds (caaddr lambda-expr) nil) ;;nil = arg types all t
  (wt "register object *" *volatile* "base0;")
  (let-pass3
   ((*exit* 'return-object)
    (*clink* clink)(*ccb-vs* ccb-vs)
                         ;; Use new optional parameter to initialize
                         ;; *initial-ccb-vs* for correct use in
                         ;; wt-ccb-vs. CM 20031130
    (*level* (1+ level))(*initial-ccb-vs* initial-ccb-vs))
   (setq cm *reservation-cmacro*)
       (wt-nl1 "{")
       (assign-down-vars
	(cadr lambda-expr) (fun-cfun fun) 't3local-dcfun)
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


;; Add optional argument initial-ccb-vs here defaulting to ccb-vs.
;; Local functions will set this to the value of *initial-ccb-vs*
;; prevalent at the time of the local function creation.  Closures
;; will let it default to ccb-vs, which will be the value of *ccb-vs*
;; prevalent at the time the environment stack was pushed and the
;; closure was created.  CM 20031130
(defun t3local-fun (closure-p clink ccb-vs fun lambda-expr &optional (initial-ccb-vs ccb-vs)
                              &aux (level (if closure-p 0 (fun-level fun)))
			      (*volatile* (volatile (cadr lambda-expr)))
			      *downward-closures*)
  (declare (fixnum level))
  (if (eq closure-p 'dclosure)
      (return-from t3local-fun
		   (t3local-dcfun closure-p clink ccb-vs fun lambda-expr initial-ccb-vs)))
  (wt-comment "local function " (if (fun-name fun) (fun-name fun) nil))
  (wt-h   "static void " (c-function-name (if closure-p "LC" "L") (fun-cfun fun) (fun-name fun)) "();")
  (wt-nl1 "static void " (c-function-name (if closure-p "LC" "L") (fun-cfun fun) (fun-name fun)) "(")
  (dotimes* (n level (wt "base" n ")")) (wt "base" n ","))
  (wt-nl1  "register object ")
  (dotimes* (n level (wt "*"*volatile*"base" n ";"))
	    (wt "*"*volatile*"base" n ","))
  (analyze-regs (cadr lambda-expr) 2)
  (let-pass3
   ((*clink* clink) (*ccb-vs* ccb-vs)
                         ;; Use new optional parameter to initialize
                         ;; *initial-ccb-vs* for correct use in
                         ;; wt-ccb-vs. CM 20031130
    (*level* (1+ level)) (*initial-ccb-vs* initial-ccb-vs)
    (*exit* 'return)
    (*compiler-check-args* *compiler-check-args*)
    (*safe-compile* *safe-compile*)
    (*compiler-push-events* *compiler-push-events*)
    (*compiler-new-safety* *compiler-new-safety*)
    (*notinline* *notinline*)
    (*space* *space*)
    (*debug* *debug*))
   (when (eq (car (caddr (cddr lambda-expr))) 'decl-body)
     (local-compile-decls (caddr (caddr (cddr lambda-expr)))))
   (wt-nl1 "{	register object *"*volatile*"base=vs_base;")
   (wt-nl  "register object *" *volatile* "sup=base+VM" *reservation-cmacro* ";")
   (assign-down-vars (cadr lambda-expr) (fun-cfun fun)
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
  (let (vars)
    (dolist (v *c-vars*)
      (when (integerp (cdr v))
	(setq vars t)
	(let* ((t1 (car v))
	       (v (cdr v)))
	  (cond ((eq type t1)(format *compiler-output2* " ,V~a" v))
		(t (or (null type)
		       (format *compiler-output2* ";"))
		   (setq type t1)
		   (if (eq (promoted-c-type type) 'integer)
		       (format *compiler-output2*  "IDECL1(V~a,V~abody,V~aalloc)" v v v)
		     (format *compiler-output2* " ~a V~a" (rep-type type) v)))))))
    (when vars (format *compiler-output2* ";")))
  (unless (or (not *vcs-used*) (eql *cs* 0))
;	 (format *compiler-output2* " object Vcs[~a]={Cnil" *cs*)
;	 (dotimes (temp (- *cs* 1) t) (format *compiler-output2* ",Cnil"))
;	 (format *compiler-output2* "};"))
    (format *compiler-output2* " object Vcs[~a];" *cs*)))



(defconstant +boot-fns+ '(c1add-globals c1expr* c1make-var cmp-norm-tp equal-is-eq eql-is-eq
    set-var-init-type bsearchleq push-array type-of do-num-relations 
    do-predicate type>= type-and fmla-infer-tp fmla-eval-const 
    c1fmla c1progn  c1let* c1let 
    result-type-from-args coerce-to-one-value check-form-type
    maybe-inline c1local-fun c1lambda-fun c1symbol-fun c1structure-ref1
    inline-possible cmp-eval get-return-type get-arg-types second first
    cmp-expand-macro and-form-type get-local-arg-types
    get-local-return-type c1args c1var function-lambda-expression
    atomic-tp do-eq-et-al make-info c1expr** c1if add-info add-constant
    add-object c1constant-value  c1tagbody object-type c1expr))