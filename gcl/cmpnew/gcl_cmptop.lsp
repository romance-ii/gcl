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


(in-package :compiler)

(defvar *objects* (make-hash-table :test 'eq))
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

(defvar *volatile*)
(defvar *setjmps* 0)

;; Functions may use a block of C stack space.
;; (cs . i)  will become Vcs[i].

(defvar *cs* 0)


;;; *objects* holds ( { object vv-index }* ).
;;; *function-links* ( {symbol vv-index} ) for function symbols needing link

(defvar *global-funs* nil)

;;; *global-funs* holds
;;; 	( { global-fun-name cfun }* )

(defvar *local-funs* nil)
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

(defvar *reservations* nil)
(defvar *reservation-cmacro* nil)

;;; *reservations* holds (... ( cmacro . value ) ...).
;;; *reservation-cmacro* holds the cmacro current used as vs reservation.

(defvar *global-entries* nil)

;;; *global-entries* holds (... ( fname cfun return-types arg-type ) ...).

;(defvar *setf-function-proxy-symbols* nil)

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
;(si:putprop 'defentry 't1defentry 't1)
(si:putprop 'defla 't1defla 't1)

;;; Top-level macros.

(si:putprop 'defconstant t 'top-level-macro)
(si:putprop 'defparameter t 'top-level-macro)
(si:putprop 'defstruct t 'top-level-macro)
(si:putprop 'deftype t 'top-level-macro)
(si:putprop 'defsetf t 'top-level-macro)

;;; Pass 2 initializers.

(si:putprop 'defun 't2defun 't2)
(si:putprop 'mflag 't3mflag 't3)
;(si:putprop 'defmacro 't2defmacro 't2)
(si:putprop 'ordinary 't3ordinary 't3)
(si:putprop 'declare 't2declare 't2)
;(si:putprop 'defentry 't2defentry 't2)
(si:putprop 'si:putprop 't2putprop 't2)

;;; Pass 2 C function generators.

(si:putprop 'defun 't3defun 't3)
;(si:putprop 'defmacro 't3defmacro 't3)
(si:putprop 'clines 't3clines 't3)
(si:putprop 'defcfun 't3defcfun 't3)
;(si:putprop 'defentry 't3defentry 't3)

	  
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
		  (*base-used* nil)(*bds-used* nil)(*frame-used* nil)
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
   (if (stringp num) num (write-to-string num))
   (let ((fname (string fname)))
     (si::string-concatenate
      "__"
      (dash-to-underscore fname)
      "__"
      (if (boundp '*compiler-input*)
	  (subseq (init-name *compiler-input* t) 4)
	"")))))

(defvar *top-form* nil)
(defun t1expr (form &aux (*current-form* form) (*top-form* form) (*first-error* t))
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
  (dolist (*current-form* *top-level-forms*)
    (setq *first-error* t)	   
    (setq *vcs-used* nil)
    (when (setq def (get (car *current-form*) 't2))
      (apply def (cdr *current-form*))))

  
  ;;; C function definitions.
  (dolist (*current-form* *top-level-forms*)
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
  (dolist* (x *reservations*)
           (wt-h "#define VM" (car x) " " (cdr x)))

  ;;*next-vv* is the index of the last entry pushed onto the data vector
  ;;*vind* is the index of the next constant to be pushed.
  ;;make sure enough room in VV to handle *vind*

  ;;reserve a spot for the Cdata which will be swapped for the (si::%init..):
  (push-data-incf nil)

  ;Ensure there is enough room to write t
  (dotimes (i (- *vind* *next-vv* +1)) (push-data-incf nil))
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

 
  (dolist (x *function-links*)
    (let* ((num (second x))
	   (type (fourth x))
	   (type (if (link-arg-p type) type t))
	   (type (or type t));FIXME
	   (args (fifth x))
	   (pc (eq type 'proclaimed-closure))
	   (newtype (cond (pc "") ((not type) "") ((rep-type type))))
	   (d (declaration-type newtype)))

      (when (eq type 'proclaimed-closure)
	(wt-h "static object *Lclptr"num";"))
      
      (if (and (not (null type))
	       (not (eq type 'proclaimed-closure))
	       (or args (not (eq t type))))
	  (progn
	    (wt-h "static " d " LnkT" num "(object,...);")
	    #-sgi3d (wt-h "static "  d " (*Lnk" num ")() = ("
			  d "(*)()) LnkT" num ";")
	    #+sgi3d (wt-h "static "  d " (*Lnk" num ")();"))
	(progn 
	  (wt-h "static " d " LnkT" num "();")
	  #-sgi3d (wt-h "static "  d " (*Lnk" num ")() = LnkT" num ";")
	  #+sgi3d (wt-h "static "  d " (*Lnk" num ")();"))))))


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
    (cond (load-flag (t1progn (cdr args)))
	  (compile-flag (cmp-eval (cons 'progn (cdr args)))))))

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


(defun function-symbol (name)
  (si::funid-sym name))

(defun function-string (name)
  (unless (symbolp name)
    (error "function names must be symbols~%"))
  (delete-if (lambda (x) (or (eq x #\@) (eq x #\/)))
	     (si::string-concatenate 
	      (let ((p (symbol-package name))) (if p (package-name p) ""))
	      "::"
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
		(mapc (lambda (x) (and (consp x) (eq (car x) 'special) (member sym (cdr x)) (return t))) (cdr form)))))))

(defun portable-source (form &optional cdr)
  (cond ((atom form) form)
	(cdr (cons (portable-source (car form)) (portable-source (cdr form) t)))
	((case (car form)
	       ((let let* lambda) 
		`(,(car form) 
		  ,(mapcar (lambda (x) (if (atom x) x `(,(car x) ,@(portable-source (cdr x) t)))) (cadr form))
		  ,@(let* ((r (delete-if (lambda (x) (or (not (si::specialp x)) (is-declared-special x (cddr form))))
					 (mapcar (lambda (x) (if (atom x) x (car x))) (cadr form)))));FIXME key name
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
		(let ((fns (mapcar 'car (cadr form))))
		  `(,(car form)
		    ,(let ((*mlts* (if (eq (car form) 'labels) (append fns *mlts*) *mlts*)))
		       (mapcar (lambda (x) `(,(car x) ,@(cdr (portable-source `(lambda ,@(cdr x)))))) (cadr form)))
		    ,@(let ((*mlts* (append fns *mlts*)))
			(ndbctxt (portable-source (cddr form) t))))))
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

;(defvar *no-proxy-symbols* nil)

(defun this-safety-level nil
  (cond (*compiler-push-events* 4)
	(*compiler-new-safety* 3)
	(*safe-compile* 2)
	(*compiler-check-args* 1)
	(0)))
  
(defun pd (fname ll args)
  (multiple-value-bind
   (doc decls ctps args)
   (parse-body-header args)
   (let* ((nal (do (r (y ll)) ((or (not y) (eq (car y) '&aux)) (nreverse r)) (push (pop y) r)))
	  (al (cdr (member '&aux ll)))
	  (ax (mapcar (lambda (x) (if (atom x) x (car x))) al))
	  (dd (split-decls ax decls t))
	  (cc (split-ctps  ax ctps)))
     (portable-source `(lambda ,nal
			 ,@(when doc `(,doc))
			 ,@(nconc (nreverse (cadr dd)) (cadr cc))
			 ,@(let* ((r args)
				  (r (if (eq fname (blocked-body-name r)) (cddar r) r))
				  (r (if (or al (car dd)) `((let* ,al ,@(append (car dd) (car cc)) ,@r)) r)))
			     `((block ,fname ,@r))))))))

(defvar *recursion-detected* nil)

(defun split-decls (auxs decls &optional ro  &aux ad dd)
  (dolist (l decls (list (nreverse ad) (nreverse dd)))
    (dolist (bb (cdr l))
      (let ((b (if (eq (car bb) 'type) (cdr bb) bb)))
	(cond ((eq (car b) 'optimize) (if ro (push `(declare ,b) dd) (push `(declare ,b) ad)))
	      ((eq (car b) 'class)
	       (unless (<= (length b) 3)
		 (cmperr "Unknown class declaration: ~s" b))
	       (if (member (cadr b) auxs) (push `(declare ,b) ad) (push `(declare ,b) dd)))
	      ((multiple-value-bind
		(tt q)
		(list-split (cdr b) auxs)
		(let ((z (if (eq b bb) (list (car bb)) (list (car bb) (cadr bb)))))
		  (when tt
		    (push `(declare (,@z ,@tt)) ad))
		  (when q
		    (push `(declare (,@z ,@q)) dd))))))))))

;; (defun split-decls (auxs decls &aux ad dd)
;;   (dolist (l decls (list (nreverse ad) (nreverse dd)))
;;     (dolist (bb (cdr l))
;;       (let ((b (if (eq (car bb) 'type) (cdr bb) bb)))
;; 	(cond ((eq (car b) 'optimize) (push `(declare ,b) dd))
;; 	      ((eq (car b) 'class)
;; 	       (unless (<= (length b) 3)
;; 		 (cmperr "Unknown class declaration: ~s" b))
;; 	       (if (member (cadr b) auxs) (push `(declare ,b) ad) (push `(declare ,b) dd)))
;; 	      ((multiple-value-bind
;; 		(tt q)
;; 		(list-split (cdr b) auxs)
;; 		(let ((z (if (eq b bb) (list (car bb)) (list (car bb) (cadr bb)))))
;; 		  (when tt
;; 		    (push `(declare (,@z ,@tt)) ad))
;; 		  (when q
;; 		    (push `(declare (,@z ,@q)) dd))))))))))

;; (defun split-decls (auxs decls &aux ad dd)
;;   (dolist (l decls (list (nreverse ad) (nreverse dd)))
;;     (dolist (bb (cdr l))
;;       (let ((b (if (eq (car bb) 'type) (cdr bb) bb)))
;; 	(cond ((eq (car b) 'optimize) (push `(declare ,b) dd))
;; 	      ((eq (car b) 'class)
;; 	       (unless (<= (length b) 3)
;; 		 (cmperr "Unknown class declaration: ~s" b))
;; 	       (if (member (cadr b) auxs) (push `(declare ,b) ad) (push `(declare ,b) dd)))
;; 	      ((eq (car b) 'special) (push `(declare ,b) ad))
;; 	      ((multiple-value-bind
;; 		(tt q)
;; 		(list-split (cdr b) auxs)
;; 		(let ((z (if (eq b bb) (list (car bb)) (list (car bb) (cadr bb)))))
;; 		  (when tt
;; 		    (push `(declare (,@z ,@tt)) ad))
;; 		  (when q
;; 		    (push `(declare (,@z ,@q)) dd))))))))))

(defun split-ctps (auxs ctps)
  (let (ad dd)
    (dolist (l ctps) (if (member (cadr l) auxs) (push l ad) (push l dd)))
    (list (nreverse ad) (nreverse dd))))

(defun c1retnote (le)
  (case (car le)
	(call-global (list (third le) (export-type (info-type (second le)))))
	((let let*) 
	 (list (car le) (export-type (info-type (second le))) 
	       (mapcar (lambda (x y) (list (var-name x) (c1retnote y))) 
		       (third le) (fourth le)) 
	       (c1retnote (fifth le))))
	((flet labels) 
	 (list (car le) (export-type (info-type (second le))) 
	       (mapcar (lambda (x y) (list (fun-name (car x)) (c1retnote y))) 
		       (third le) (fourth le)) 
	       (c1retnote (fifth le))))
	(recur (list (car le) (export-type (info-type (second le)))))
	(progn 
	  (list (car le)
		(export-type (info-type (second le)))
		(mapcar 'c1retnote (car (last le)))))
	((lambda decl-body) 
	 (list (car le) 
	       (export-type (info-type (second le))) 
	       (c1retnote (car (last le)))))
	(inline 
	 (list (car le) (caddr le)
	       (export-type (info-type (second le))) 
	       (c1retnote (car (last le)))))
	(if 
	    (list (car le) 
		  (export-type (info-type (second le))) 
		  (c1retnote (fourth le)) 
		  (c1retnote (fifth le))))
	(var (list (car le) (export-type (info-type (second le))) (var-name (car (third le)))))
	(location (list (car le) (export-type (info-type (second le)))))
	(return-from (list (car le) (c1retnote (car (last le)))))
	(tagbody `(,(car le) 
		   ,(export-type (info-type (second le))) 
		   ,@(mapcar (lambda(x) (unless (tag-p x) (c1retnote x))) (car (last le)))))
	(block `(,(car le) 
		 ,(export-type (info-type (second le))) 
		 ,@(mapcar 'c1retnote (last le))))
	(otherwise (list (car le) 'foo))))

;; (defun c1retnote (le)
;;   (case (car le)
;; 	(call-global (list (third le) (export-type (info-type (second le)))))
;; 	((let let* flet labels) 
;; 	 (list (car le) (export-type (info-type (second le))) 
;; 	       (mapcar (lambda (x y) (list (var-name x) (c1retnote y))) 
;; 		       (third le) (fourth le)) 
;; 	       (c1retnote (fifth le))))
;; 	(recur (list (car le) (export-type (info-type (second le)))))
;; 	(progn 
;; 	  (list (car le)
;; 		(export-type (info-type (second le)))
;; 		(mapcar 'c1retnote (car (last le)))))
;; 	((lambda decl-body) 
;; 	 (list (car le) 
;; 	       (export-type (info-type (second le))) 
;; 	       (c1retnote (car (last le)))))
;; 	(inline 
;; 	 (list (car le) (caddr le)
;; 	       (export-type (info-type (second le))) 
;; 	       (c1retnote (car (last le)))))
;; 	(if 
;; 	    (list (car le) 
;; 		  (export-type (info-type (second le))) 
;; 		  (c1retnote (fourth le)) 
;; 		  (c1retnote (fifth le))))
;; 	(var (list (car le) (export-type (info-type (second le))) (var-name (car (third le)))))
;; 	(location (list (car le) (export-type (info-type (second le)))))
;; 	(return-from (list (car le) (c1retnote (car (last le)))))
;; 	(tagbody `(,(car le) 
;; 		   ,(export-type (info-type (second le))) 
;; 		   ,@(mapcar (lambda(x) (unless (tag-p x) (c1retnote x))) (car (last le)))))
;; 	(block `(,(car le) 
;; 		 ,(export-type (info-type (second le))) 
;; 		 ,@(mapcar 'c1retnote (last le))))
;; 	(otherwise (list (car le) 'foo))))

(defvar *callees* nil)

(defconstant +nargs+ (let ((s (tmpsym))) (setf (get s 'tmp) t) s))
(defconstant +fun+ (let ((s (tmpsym))) (setf (get s 'tmp) t) s))
(defconstant +mv+ (let ((s (tmpsym))) (setf (get s 'tmp) t) s))
(defconstant +first+ (let ((s (tmpsym))) (setf (get s 'tmp) t) s))

(defun mll (ll)
  (let ((a (pop ll)))
    (cond ((not a) 0)
	  ((eq a '&optional) (mll ll))
	  ((member a '(&rest &key)) 63)
	  ((member a lambda-list-keywords) 0)
	  ((1+ (mll ll))))))

(defun is-narg-var (v)
  (when (var-p v) (eq (var-name v) +nargs+)))
(defun is-mv-var (v)
  (when (var-p v) (eq (var-name v) +mv+)))
(defun is-fun-var (v)
  (when (var-p v) (eq (var-name v) +fun+)))
(defun is-first-var (v)
  (when (var-p v) (eq (var-name v) +first+)))

(defun list-split (x y &optional iy niy (cx nil cxp));FIXME intersection/set-difference bootstrap
  (cond (cxp (if (or (not y) (eq cx (car y))) y (list-split x (cdr y) iy niy cx)))
	((not x) (values iy niy))
	(t (let* ((cx (car x))
		  (v (list-split x y iy niy cx))) 
	   (if v (push cx iy) (push cx niy))
	   (list-split (cdr x) y iy niy)))))

(defun decl-safety (d &optional s)
  (cond ((consp (car d)) (max (decl-safety (car d) s) (decl-safety (cdr d) s)))
	((eq (car d) 'declare) (decl-safety (cdr d) 1))
	((and s (= s 1) (eq (car d) 'optimize)) (decl-safety (cdr d) 2))
	((and s (= s 2) (eq (car d) 'safety)) (or (cadr d) 3))
	(0)))

(defun effective-safety (decls)
  (max (decl-safety decls) (this-safety-level)))

(defun new-defun-args (args &optional (tag (tmpsym)))
  (let* ((nm (si::funid-to-sym (car args)))
	 (args (ttl-tag-src args tag nm))
	 (args (cdr args))
	 (ll (pop args))
	 (opts (member-if (lambda (x) (member x '(&optional &rest &key &aux))) ll)));FIXME centralize
    (multiple-value-bind
     (doc decls ctps args)
     (parse-body-header args)
     (let* ((regs (ldiff ll opts))
	    (dl (decl-safety decls))
	    (sl (effective-safety decls))
	    (s (> sl 0))
	    (od (split-decls regs decls))
	    (rd (pop od))
	    (oc (split-ctps regs ctps))
	    (rc (pop oc))
	    (oc (append (when s rc) (car oc)))
	    (rc (mapcar (lambda (x) `(declare (,@(when s `(hint)) ,(caddr x) ,(cadr x)))) rc))
	    (rc (cons `(declare (optimize (safety ,dl))) rc))
	    (narg (when opts +nargs+));FIXME (cdr opts)
	    (nr (length regs))
	    (regs (or regs (when narg (list +first+))))
	    (m (min 63 (mll ll)))
	    (args `(,@(car od) ,@oc ,@args))
	    (opts (if narg (cons narg opts) opts))
	    (args (if narg (cons `(declare ((integer ,(- m) ,m) ,narg)) args) args))
	    (rc (if narg (cons `(declare (hint (integer ,(- m) ,m) ,narg)) rc) rc))
	    (opts (cons +mv+ opts))
	    (args `((declare (ignorable ,+mv+) (fixnum ,+mv+)) ,@args))
	    (vals `((fun-valp) ,@(when narg `((vfun-nargs)))));FIXME
	    (bl (list (blla opts vals nil args narg nr (when (eq (car regs) +first+) +first+))))
	    (bl `((let ((,+fun+ (fun-fun))) (declare (ignorable ,+fun+)) (bind-reg-clv) ,@bl))))
       `(,nm ,regs 
	     ,@(when doc `(,doc))
	     ,@rd ,@rc ,@bl)))))

;; (defun new-defun-args (args &optional (tag (tmpsym)))
;;   (let* ((nm (si::funid-to-sym (car args)))
;; 	 (args (ttl-tag-src args tag nm))
;; 	 (args (cdr args))
;; 	 (ll (pop args))
;; 	 (opts (member-if (lambda (x) (member x '(&optional &rest &key &aux))) ll)));FIXME centralize
;;     (multiple-value-bind
;;      (doc decls ctps args)
;;      (parse-body-header args)
;;      (let* ((regs (ldiff ll opts))
;; 	    (dl (decl-safety decls))
;; 	    (sl (effective-safety decls))
;; 	    (s (> sl 0))
;; 	    (od (split-decls regs decls))
;; 	    (rd (pop od))
;; 	    (oc (split-ctps regs ctps))
;; 	    (rc (pop oc))
;; 	    (oc (append (when s rc) (car oc)))
;; 	    (rc (mapcar (lambda (x) `(declare (,@(when s `(hint)) ,(caddr x) ,(cadr x)))) rc))
;; 	    (rc (cons `(declare (optimize (safety ,dl))) rc))
;; 	    (narg (when opts +nargs+))
;; 	    (nr (length regs))
;; 	    (regs (or regs (when narg (list +first+))))
;; 	    (m (min 63 (mll ll)))
;; 	    (args `(,@(car od) ,@oc ,@args))
;; 	    (opts (if narg (cons narg opts) opts))
;; 	    (args (if narg `((declare ((integer ,(- m) ,m) ,narg)) ,@args) args))
;; 	    (opts (cons +mv+ opts))
;; 	    (args `((declare (ignorable ,+mv+) (fixnum ,+mv+)) ,@args))
;; 	    (vals `((fun-valp) ,@(when narg `((vfun-nargs)))));FIXME
;; 	    (bl (list (blla opts vals nil args narg nr (when (eq (car regs) +first+) +first+))))
;; 	    (bl `((let ((,+fun+ (fun-fun))) (declare (ignorable ,+fun+)) (bind-reg-clv) ,@bl))))
;;        `(,nm ,regs 
;; 	     ,@(when doc `(,doc))
;; 	     ,@rd ,@rc ,@bl)))))

;; (defun new-defun-args (args &optional (tag (tmpsym)))
;;   (let* ((nm (si::funid-to-sym (car args)))
;; 	 (args (ttl-tag-src args tag nm))
;; 	 (args (cdr args))
;; 	 (ll (pop args))
;; 	 (opts (member-if (lambda (x) (member x '(&optional &rest &key &aux))) ll)));FIXME centralize
;;     (multiple-value-bind
;;      (doc decls ctps args)
;;      (parse-body-header args)
;;      (let* ((regs (ldiff ll opts))
;; 	    (dl (decl-safety decls))
;; 	    (sl (effective-safety decls))
;; 	    (s (> sl 0))
;; 	    (od (split-decls regs decls))
;; 	    (rd (pop od))
;; 	    (oc (split-ctps regs ctps))
;; 	    (rc (pop oc))
;; 	    (oc (append (when s rc) (car oc)))
;; 	    (rc (mapcar (lambda (x) `(declare (,@(when s `(hint)) ,(caddr x) ,(cadr x)))) rc))
;; 	    (rc (cons `(declare (optimize (safety ,dl))) rc))
;; 	    (narg (when opts +nargs+))
;; 	    (nr (length regs))
;; 	    (regs (or regs (when narg (list +first+))))
;; 	    (m (min 63 (mll ll)))
;; 	    (args `(,@(car od) ,@oc (bind-reg-clv) ,@args))
;; 	    (opts (if narg (cons narg opts) opts))
;; 	    (args (if narg `((declare ((integer ,(- m) ,m) ,narg)) ,@args) args))
;; 	    (opts (cons +fun+ (cons +mv+ opts)))
;; 	    (args `((declare (ignorable ,+fun+ ,+mv+) (fixnum ,+mv+)) ,@args))
;; 	    (vals `((fun-fun) (fun-valp) ,@(when narg `((vfun-nargs)))));FIXME
;; 	    (bl (list (blla opts vals nil args narg nr (when (eq (car regs) +first+) +first+)))))
;;        `(,nm ,regs 
;; 	     ,@(when doc `(,doc))
;; 	     ,@rd ,@rc ,@bl)))))

;; (defun new-defun-args (args &optional (tag (tmpsym)))
;;   (let* ((nm (si::funid-to-sym (car args)))
;; 	 (args (ttl-tag-src args tag nm))
;; 	 (args (cdr args))
;; 	 (ll (pop args))
;; 	 (opts (member-if (lambda (x) (member x '(&optional &rest &key))) ll)))
;;     (multiple-value-bind
;;      (doc decls ctps args)
;;      (parse-body-header args)
;;      (let* ((regs (ldiff ll opts))
;; 	    (dl (decl-safety decls))
;; 	    (sl (effective-safety decls))
;; 	    (s (> sl 0))
;; 	    (rd (split-decls regs decls))
;; 	    (od (cadr rd))
;; 	    (rd (car rd))
;; 	    (rc (split-ctps regs ctps))
;; 	    (oc (cadr rc))
;; 	    (rc (car rc))
;; 	    (oc (append (when s rc) oc))
;; 	    (rc (mapcar (lambda (x) `(declare (,@(when s `(hint)) ,(caddr x) ,(cadr x)))) rc))
;; 	    (rc (cons `(declare (optimize (safety ,dl))) rc))
;; 	    (narg (when opts +nargs+))
;; 	    (nr (length regs))
;; 	    (regs (or regs (when narg (list +first+))))
;; 	    (m (min 63 (mll ll)))
;; 	    (args `(,@od ,@oc (bind-reg-clv) ,@args))
;; 	    (opts (if narg (cons narg opts) opts))
;; 	    (args (if narg `((declare ((integer ,(- m) ,m) ,narg)) ,@args) args))
;; 	    (opts (cons +fun+ (cons +mv+ opts)))
;; 	    (args `((declare (ignorable ,+fun+ ,+mv+) (fixnum ,+mv+)) ,@args))
;; 	    (vals `((fun-fun) (fun-valp) ,@(when narg `((vfun-nargs)))));FIXME
;; 	    (bl (list (blla opts vals nil args narg nr (when (eq (car regs) +first+) +first+)))))
;;        `(,nm ,regs 
;; 	     ,@(when doc `(,doc))
;; 	     ,@rd ,@rc ,@bl)))))
    
(defun c1va-pop (args)
  (declare (ignore args))
  (list 'va-pop (make-info :type t)))
(defun c2va-pop nil
  (unwind-exit (list 'va-pop) nil 'single-value))
(defun wt-va-pop nil
  (wt "va_arg(ap,object)"))
(setf (get 'va-pop 'c1) 'c1va-pop)
(setf (get 'va-pop 'c2) 'c2va-pop)
(setf (get 'va-pop 'wt-loc) 'wt-va-pop)


(defun c1vfun-nargs (args)
  (declare (ignore args))
  (list 'location (make-info :type #t(integer -63 63)) (list 'inline-fixnum 0 "VFUN_NARGS" nil)))
(setf (get 'vfun-nargs 'c1) 'c1vfun-nargs)
;(defun c2vfun-nargs nil
;  (unwind-exit (list 'inline-fixnum nil "VFUN_NARGS")));FIXME
;(setf (get 'vfun-nargs 'c2) 'c2vfun-nargs)

(defun c1fun-valp (args)
  (declare (ignore args))
  (list 'location (make-info :type #tfixnum) (list 'inline-fixnum 0 "FUN_VALP" nil)))
(setf (get 'fun-valp 'c1) 'c1fun-valp)
;(defun c2fun-valp nil
;  (unwind-exit (list 'inline-fixnum nil "FUN_VALP")));FIXME
;(setf (get 'fun-valp 'c2) 'c2fun-valp)

(defun c1fun-fun (args)
  (declare (ignore args))
  (list 'fun-fun (make-info :type #tt)))
(defun c2fun-fun nil
  (unwind-exit (list 'fun-fun) nil 'single-value))
(defun wt-fun-fun nil
  (wt "fcall.fun;")
  (wt-nl "#undef base0")
  (wt-nl "#define base0 ")
  (wt *value-to-go*)
  (wt "->fun.fun_env")
  (wt-nl))
(setf (get 'fun-fun 'c1) 'c1fun-fun)
(setf (get 'fun-fun 'c2) 'c2fun-fun)
(setf (get 'fun-fun 'wt-loc) 'wt-fun-fun)

(defun c1side-effects (args)
  (declare (ignore args))
  (list 'side-effects (make-info :flags (iflags side-effects))))
(defun c2side-effects nil nil)
(setf (get 'side-effects 'c1) 'c1side-effects)
(setf (get 'side-effects 'c2) 'c2side-effects)
  

(defun c1bind-reg-clv (args)
  (declare (ignore args))
  (list 'bind-reg-clv (make-info :type #tt :flags (iflags side-effects))))
(defun c2bind-reg-clv (&aux x clb var)
  (do nil
      ((not (setq x (pop *reg-clv*) clb (pop x) var (car x))))
      (wt-nl)
      (cond (clb
	     (setf (var-ref var) (vs-push));FIXME ?
	     (wt-vs (var-ref var)) (wt "= " (list 'cvar (var-loc var)) ";"))
	    ((setf (var-ref var) (list 'cvar (var-loc var)))))
      (when (var-ref-ccb var)
	(clink (var-ref var))
	(setf (var-ref-ccb var) (ccb-vs-push)))))

;; (defun c2bind-reg-clv (&aux var)
;;   (do nil
;;       ((not (setq var (pop *reg-clv*))))
;;       (wt-nl)
;;       (cond ((and (var-ref-ccb var) (not (eq 'clb (var-loc var))))
;; 	     (setf (var-ref var) (list 'cvar (var-loc var)))
;; 	     (clink (var-ref var))
;; 	     (setf (var-ref-ccb var) (ccb-vs-push)))
;; 	    ((setf (var-ref var) (vs-push));FIXME
;; 	     (wt-vs (var-ref var)) (wt "= " (list 'cvar (var-loc var)) ";")))))
(setf (get 'bind-reg-clv 'c1) 'c1bind-reg-clv)
(setf (get 'bind-reg-clv 'c2) 'c2bind-reg-clv)
  
(defun c1ub (args)
  (let* ((key (pop args))
;	 (info (make-info :type #topaque :flags (iflags side-effects)));FIXME
	 (info (make-info :type #topaque))
	 (nargs (c1args args info)))
    (list* 'ub info key nargs)))
(setf (get 'ub 'c1) 'c1ub)
(setf (get 'unbox 'c1) 'c1ub)

;; (defun c1lit (args)
;;   (let* ((tp (get (pop args) 'lisp-type :opaque))
;; 	 (info (make-info :type (cmp-norm-tp tp) :flags (iflags side-effects))) ;FIXME boolean
;; 	 (nargs (c1args args info)))
;;     (when (eq tp :opaque) (baboon))
;;     (list 'lit info (info-type info) nargs)))
;; (defun c2lit (tp args)
;;   (let* ((sig (list (mapcar (lambda (x) (info-type (cadr x))) args) tp))
;; 	 (i -1)
;; 	 (inl (reduce (lambda (y x) (strcat y "#" (write-to-string (incf i)))) args :initial-value ""))
;; 	 (*inline-blocks* 0)
;; 	 (*restore-avma*  *restore-avma*))
;;     (unwind-exit (get-inline-loc (list (car sig) (cadr sig) (flags rfa) inl) args)
;; 		 nil (cons 'values (if (eq (cadr sig) #t(returns-exactly)) 0 1)))
;;     (close-inline-blocks)))
;; (setf (get 'lit 'c1) 'c1lit)
;; (setf (get 'lit 'c2) 'c2lit)


;; (defun c1litt (args)
;;   (let* ((tp (get (pop args) 'lisp-type :opaque))
;; 	 (info (make-info :type (cmp-norm-tp tp) :flags (iflags side-effects))) ;FIXME boolean
;; 	 (inl "")(i -1)
;; 	 (nargs (mapcan (lambda (x &aux (sp (stringp x))) 
;; 			  (setq inl (strcat inl (if sp x (strcat "#" (write-to-string (incf i))))))
;; 			  (unless sp (list (c1expr* (cons 'ub x) info)))) args)))
;;     (when (eq tp :opaque) (baboon))
;;     (list 'litt info (info-type info) inl nargs)))
;; (defun c2litt (tp inl args)
;;   (let* ((sig (list (mapcar (lambda (x) (info-type (cadr x))) args) tp))
;; 	 (*inline-blocks* 0)
;; 	 (*restore-avma*  *restore-avma*))
;;     (unwind-exit (get-inline-loc (list (car sig) (cadr sig) (flags rfa) inl) args)
;; 		 nil (cons 'values (if (eq (cadr sig) #t(returns-exactly)) 0 1)))
;;     (close-inline-blocks)))
;; (setf (get 'litt 'c1) 'c1litt)
;; (setf (get 'litt 'c2) 'c2litt)


(defun c1lit (args)
  (flet ((strcat (&rest r) (apply 'concatenate 'string r)))
	(let* ((tp (get (pop args) 'lisp-type :opaque))
					;	 (info (make-info :type (cmp-norm-tp tp) :flags (iflags side-effects))) ;FIXME boolean
	       (info (make-info :type (cmp-norm-tp tp))) ;FIXME boolean
	       (inl "")(i -1)
	       (nargs (mapcan (lambda (x &aux (sp (stringp x))) 
				(setq inl (strcat inl (if sp x (strcat "#" (write-to-string (incf i))))))
				(unless sp (list (c1arg (cons 'ub x) info)))) args)))
	  (when (eq tp :opaque) (baboon))
	  (list 'lit info (info-type info) inl nargs))))

;; (defun c1lit (args)
;;   (flet ((strcat (&rest r) (apply 'concatenate 'string r)))
;; 	(let* ((tp (get (pop args) 'lisp-type :opaque))
;; 					;	 (info (make-info :type (cmp-norm-tp tp) :flags (iflags side-effects))) ;FIXME boolean
;; 	       (info (make-info :type (cmp-norm-tp tp))) ;FIXME boolean
;; 	       (inl "")(i -1)
;; 	       (nargs (mapcan (lambda (x &aux (sp (stringp x))) 
;; 				(setq inl (strcat inl (if sp x (strcat "#" (write-to-string (incf i))))))
;; 				(unless sp (list (c1expr* (cons 'ub x) info)))) args)))
;; 	  (when (eq tp :opaque) (baboon))
;; 	  (list 'lit info (info-type info) inl nargs))))

(defun c2lit (tp inl args)
  (let* ((sig (list (mapcar (lambda (x) (info-type (cadr x))) args) tp))
	 (*inline-blocks* 0)
	 (*restore-avma*  *restore-avma*))
    (unwind-exit (get-inline-loc (list (car sig) (cadr sig) (flags rfa) inl) args)
		 nil (cons 'values (if (eq (cadr sig) #t(returns-exactly)) 0 1)))
    (close-inline-blocks)))
(setf (get 'lit 'c1) 'c1lit)
(setf (get 'lit 'c2) 'c2lit)


(defun ttl-ll (ll)
  (let ((a (member '&aux ll)))
    (ldiff ll a)))

(defun suppress-unfinalized-local-fun-warnings (name b l)
  (let ((fun (local-fun-p name)))
    (when fun
      (member-if (lambda (x) (when (fun-p x) (unless (eq x fun) (not (consp (if (eq b 'cb) (fun-c1cb x) (fun-c1 x)))))))
		 (append (info-ref (cadr l)) (info-ref-ccb (cadr l)))))))

(defun do-l1-fun (name src e &aux *callees* *recursion-detected* *warning-note-stack*)

  (let* ((l (c1lambda-expr src))
	 (osig (car e))
	 (sig (lam-e-to-sig l))
	 (sig (if *recursion-detected* (list (car sig) (bbump-tp (cadr sig))) sig)))
    (setf (car e) sig (cadr e) *callees*)
    (if (and *recursion-detected* (not (eq (cadr osig) (cadr sig))))
	(do-l1-fun name src e)
      l)))

;; (defun do-l1-fun (name src e &aux *callees* *recursion-detected* *warning-note-stack*)

;;   (let* ((l (c1lambda-expr src))
;; 	 (osig (car e))
;; 	 (sig (lam-e-to-sig l))
;; 	 (sig (if *recursion-detected* (list (car sig) (bbump-tp (cadr sig))) sig)))
;;     (setf (car e) sig (cadr e) *callees*)
;;     (cond ((and *recursion-detected* (not (eq (cadr osig) (cadr sig))))
;; 	   (do-l1-fun name src e))
;; 	  (t (output-warning-note-stack) l))))

;; (defun do-l1-fun (name src e &aux *callees* *recursion-detected* *warning-note-stack*)

;;   (let* ((l (c1lambda-expr src name))
;; 	 (osig (car e))
;; 	 (sig (lam-e-to-sig l))
;; 	 (sig (if *recursion-detected* (list (car sig) (bbump-tp (cadr sig))) sig)))
;;     (setf (car e) sig (cadr e) *callees*)
;;     (cond ((and *recursion-detected* (not (eq (cadr osig) (cadr sig))))
;; 	   (do-l1-fun name src e))
;; 	  (t (output-warning-note-stack) l))))

;   (unless (member v (caaddr l));FIXME not in info referred?
;     (when (and (var-p v) (var-cb v)) 
;       )))

(defun get-clv (l &aux (i (cadr l)))
  (mapcan
   (lambda (v) (when (var-p v) (list (list (var-name v) (car (atomic-tp (var-type v)))))))
   (append (info-ref-ccb i) (info-ref-clb i))))

;; (defun get-clv (l &aux r)
;;   (do-referred-cb (v (cadr l)) (push (list (var-name v) (car (atomic-tp (var-type v)))) r))
;;   (nreverse r))

(defun do-fun (name src e vis b)
  (let* ((*vars*   (when b (cons b *vars*)))
	 (*funs*   (when b (cons b *funs*)))
	 (*blocks* (when b (cons b *blocks*)))
	 (*tags*   (when b (cons b *tags*)))
	 (tag (tmpsym))
	 (*prev-sri* (append *src-inline-recursion* *prev-sri*))
	 (*src-inline-recursion* (when vis (list (list (list (sir-name name)) tag (ttl-ll (cadr src))))))
	 (*c1exit* (list name))
	 (*current-form* `(defun ,name))
	 (l (do-l1-fun name (cdr (new-defun-args src tag)) e))
	 (clv (get-clv l)))
    (setf (car e) (export-sig (car e))
	  (third e) (list src clv name)
	  (fourth e) (unless *compiler-compile* (namestring (truename (pathname *compiler-input*))))
	  (fifth e) (if (= (length clv) 0) 1 0))
    (if (suppress-unfinalized-local-fun-warnings name b l)
      (output-warning-note-stack))
    l))

;; (defun do-fun (name src e vis b)
;;   (let* ((*vars*   (when b (cons b *vars*)))
;; 	 (*funs*   (when b (cons b *funs*)))
;; 	 (*blocks* (when b (cons b *blocks*)))
;; 	 (*tags*   (when b (cons b *tags*)))
;; 	 (tag (tmpsym))
;; 	 (*prev-sri* (append *src-inline-recursion* *prev-sri*))
;; 	 (*src-inline-recursion* (when vis (list (list (list (sir-name name)) tag (ttl-ll (cadr src))))))
;; 	 *provisional-inline*
;; 	 (*c1exit* (list name))
;; 	 (*current-form* `(defun ,name))
;; 	 (l (do-l1-fun name (cdr (new-defun-args src tag)) e))
;; 	 (clv (get-clv l)))
;;     (setf (car e) (export-sig (car e))
;; 	  (third e) (list src clv name)
;; 	  (fourth e) (unless *compiler-compile* (namestring (truename (pathname *compiler-input*))))
;; 	  (fifth e) (if (= (length clv) 0) 1 0))
;;     l))

;; (defun do-fun (name src e vis b)
;;   (let* ((*vars*   (when b (cons b *vars*)))
;; 	 (*funs*   (when b (cons b *funs*)))
;; 	 (*blocks* (when b (cons b *blocks*)))
;; 	 (*tags*   (when b (cons b *tags*)))
;; 	 (tag (tmpsym))
;; 	 (*prev-sri* (append *src-inline-recursion* *prev-sri*))
;; 	 (*src-inline-recursion* (when vis (list (list (list (sir-name name)) tag (ttl-ll (cadr src))))))
;; 	 *provisional-inline*
;; 	 (*c1exit* (list name))
;; 	 (*current-form* `(defun ,name))
;; 	 (l (do-l1-fun name (cdr (new-defun-args src tag)) e))
;; 	 (clv (get-clv l)))
;;     (setf (car e) (export-sig (car e))
;; 	  (third e) (compress-fle src clv name)
;; 	  (fourth e) (unless *compiler-compile* (namestring (pathname *compiler-input*)))
;; 	  (fifth e) (if (= (length clv) 0) 1 0))
;;     l))
	 

(defun t1defun (args)

  (when (or (endp args) (endp (cdr args)))
    (too-few-args 'defun 2 (length args)))
  (maybe-eval nil (cons 'defun args))
  (setq *non-package-operation* t)

  (let* ((fname (car args))
	 (fname (or (function-symbol fname) (cmperr "The function name ~s is not valid." fname)))
	 (cfun (next-cfun))
	 (oal (get-arg-types fname)) (ort (get-return-type fname))
	 (osig (export-sig (list oal ort)))
	 (e (or (gethash fname *sigs*) (setf (gethash fname *sigs*) (make-list 5))))
	 (setjmps *setjmps*)
	 (lambda-expr (do-fun fname args e t nil))
	 (sig (car e))
	 (osig (if (equal '((*) *) osig) sig osig));FIXME
	 (doc (cadddr lambda-expr)))
	 
    (or (eql setjmps *setjmps*) (setf (info-volatile (cadr lambda-expr)) 1))
    (keyed-cmpnote (list 'return-type fname) "~s return type ~s" fname (c1retnote lambda-expr))
    
    (unless (or (equal osig sig) (eq fname 'cmp-anon));FIXME
      (cmpwarn "signature change on function ~s, ~s -> ~s~%" fname osig sig)
      (setq *new-sigs-in-file* 
	    (some
	     (lambda (x) 
	       (unless (eq x fname)
		 (multiple-value-bind 
		  (s f) (gethash x *sigs*) 
		  (declare (ignore s))
		  (when f (list x fname osig sig))))) (si::callers fname))))
    
    (push (let* ((at (car sig))
		 (al (mapcar (lambda (x) (link-rt (cmp-norm-tp x) nil)) at))
		 (rt (link-rt (cmp-norm-tp (cadr sig)) nil)))
	    (list fname al rt
		  (if (single-type-p rt) (flags set ans) (flags set ans sets-vs-top))
		  (make-inline-string cfun at fname)))
	  *inline-functions*)
  
    (push (list 'defun fname cfun lambda-expr doc nil) *top-level-forms*)
    (push (cons fname cfun) *global-funs*)
    
    (when *sig-discovery*
      (si::add-hash fname (car e) (cadr e) nil nil))))

(defun make-inline-string (cfun args fname)
  (format nil "~d(~a)" (c-function-name "LI" cfun fname)
	  (make-inline-arg-str (list args (get-return-type fname)))))

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

(defun new-proclaimed-argd (args return)
  (do* ((type (f-type return) (f-type (pop args)))
	(i 0 (+ 2 i))
	(ans type (logior ans (ash type i))))
       ((or (>= i 32) (null args)) ans)))

(defun type-f (x)
  (declare (fixnum x))
  (if (zerop x) t (nth (1- x) +c-global-arg-types+)))

(defun argsizes (args return &optional max pushed)
  (let* ((x (vald return))
	 (vv (> x 0))
	 (x (if vv x (- x)))
	 (la (length args))
	 (varg (eq (car (last args)) '*))
	 (la (if varg (1- la) la)))
    (let ((r (logior la
		     (ash (or max la) 6)
		     (ash x 12) 
		     (ash (if vv 1 0) 17)
		     (ash (if varg 1 0) 18)
		     (ash (if pushed 1 0) 19))))
      (when (< r 0) (print r) (break))
      r)))

(defun vald (tp)
  (cond ((single-type-p tp) 0)
	((type>= #t(values t) tp) 1);FIXME
	((eq tp '*) (1- multiple-values-limit))
	((> (length tp) (+ 2 multiple-values-limit)) (baboon));FIXME
	((eq (car tp) 'returns-exactly) (- 2 (length tp)))
	((- (length tp) 2))))

(defun wt-if-proclaimed (fname cfun lambda-expr)
  (when (fast-link-proclaimed-type-p fname);(and  (not (member '* (get-arg-types fname))))
    (let ((at (get-arg-types fname))
	  (rt (get-return-type fname)))
      (cond ((assoc fname *inline-functions*)
	     (add-init `(si::init-function ',fname
					   ,(add-address (c-function-name "LI" cfun fname))
					   nil nil -1 ,(new-proclaimed-argd at rt)
					   ,(argsizes at rt (xa lambda-expr)))))
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

(defun maxargs (lambda-list)
; any function can take &allow-other-keys in ANSI lisp 
  (cond (
;	 (or (ll-allow-other-keys lambda-list)(ll-rest lambda-list))
	 (or (ll-keywords-p lambda-list) (ll-rest lambda-list))
	 63)
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


(defun xa (l)
  (let ((v (is-narg-le l)))
    (if v (caddr (var-type v)) (length (caaddr l)))))

(defun global-type-bump (tp)
  (let* ((mv (cmpt tp))
	 (tpp (if mv (coerce-to-one-value tp) tp))
	 (tppn (car (member (nil-to-t tpp) `(,@+c-global-arg-types+ ,#tt ,#t*) :test 'type<=))));FIXME
    (if mv (cmp-norm-tp `(,(car tp) ,tppn ,@(cddr tp))) tppn)))

(defun t2defun (fname cfun lambda-expr doc sp)
  (declare (ignore cfun lambda-expr doc sp))

  (cond ((get fname 'no-global-entry)(return-from t2defun nil)))
  
  (when (< *space* 2)
    (setf (get fname 'debug-prop) t)))

;; (defun t2defun (fname cfun lambda-expr doc sp)
;;   (declare (ignore sp))

;;   (cond ((get fname 'no-global-entry)(return-from t2defun nil)))

;;   (when doc (add-init `(si::putprop ',fname ,doc 'si::function-documentation)))

;;   (cond ((wt-if-proclaimed fname cfun lambda-expr))
;; 	((numberp cfun)
;; 	 (let ((at (mapcar 'global-type-bump (get-arg-types fname)))
;; 	       (rt (global-type-bump (get-return-type fname))))
;; 	   (add-init `(si::init-function
;; 		       ',fname
;; ;		       ,(add-address (c-function-name "LI" (format nil "G~a" cfun) fname))
;; 		       ,(add-address (c-function-name "LI" (format nil "~a" cfun) fname))
;; 		       nil nil -1 ,(new-proclaimed-argd at rt)
;; 		       ,(argsizes at rt (xa lambda-expr)))))
;; ;         (wt-h "static void " (c-function-name "L" cfun fname) "();")
;; ;	 (add-init `(si::mf ',fname ,(add-address (c-function-name "L" cfun fname))))
;; 	 )
;;         (t (baboon)(wt-h cfun "();")
;; 	   (add-init `(si::mf ',fname ,(add-address (c-function-name "" cfun fname))))))

;;   (when *compiler-auto-proclaim*
;;     (add-init `(si::add-hash ',fname ,@(mapcar (lambda (x) `(quote ,x)) (export-call (gethash fname *sigs*))))))
  
;;   (when (< *space* 2)
;;     (setf (get fname 'debug-prop) t)))


;; (defun t2defun (fname cfun lambda-expr doc sp)
;;   (declare (ignore sp))

;;   (cond ((get fname 'no-global-entry)(return-from t2defun nil)))

;;   (when doc (add-init `(si::putprop ',fname ,doc 'si::function-documentation)))

;;   (cond ((wt-if-proclaimed fname cfun lambda-expr))
;; 	((numberp cfun)
;; 	 (let ((at (mapcar 'global-type-bump (get-arg-types fname)))
;; 	       (rt (global-type-bump (get-return-type fname))))
;; 	   (add-init `(si::init-function
;; 		       ',fname
;; ;		       ,(add-address (c-function-name "LI" (format nil "G~a" cfun) fname))
;; 		       ,(add-address (c-function-name "LI" (format nil "~a" cfun) fname))
;; 		       nil nil -1 ,(new-proclaimed-argd at rt)
;; 		       ,(argsizes at rt (xa lambda-expr)))))
;; ;         (wt-h "static void " (c-function-name "L" cfun fname) "();")
;; ;	 (add-init `(si::mf ',fname ,(add-address (c-function-name "L" cfun fname))))
;; 	 )
;;         (t (baboon)(wt-h cfun "();")
;; 	   (add-init `(si::mf ',fname ,(add-address (c-function-name "" cfun fname))))))

;;   (when *compiler-auto-proclaim*
;;     (add-init `(si::add-hash ',fname ,@(mapcar (lambda (x) `(quote ,x)) (gethash fname *sigs*)))))
  
;;   (when (< *space* 2)
;;     (setf (get fname 'debug-prop) t)))

(defun si::add-debug (fname x)
  (si::putprop fname x  'si::debugger))

(defun t3init-fun (fname cfun lambda-expr doc)

  (when doc (add-init `(putprop ',fname ,doc 'function-documentation)))

  (unless (wt-if-proclaimed fname cfun lambda-expr)
    (assert (numberp cfun))
    (let ((at (mapcar 'global-type-bump (get-arg-types fname)))
	  (rt (global-type-bump (get-return-type fname))))
      (add-init `(init-function
		  ',fname
		  ,(add-address (c-function-name "LI" (format nil "~a" cfun) fname))
		  nil nil -1 ,(new-proclaimed-argd at rt)
		  ,(argsizes at rt (xa lambda-expr))))))

  (when *compiler-auto-proclaim*
    (add-init `(si::add-hash ',fname ,@(mapcar (lambda (x) `(quote ,x)) (export-call (gethash fname *sigs*)))))))

(defun t3defun (fname cfun lambda-expr doc sp &aux inline-info 
		      (*current-form* (list 'defun fname))
		      (*volatile* (volatile (second lambda-expr))))

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
;; 	(push (list fname cfun (cadr inline-info) (caddr inline-info))
;; 	      *global-entries*))
    
    ;;; Local entry
      (analyze-regs (cadr lambda-expr) 0)

      (mapc (lambda (x) (setf (var-type x) (global-type-bump (var-type x)))) (caaddr lambda-expr))
      (setf (info-type (cadr (fifth lambda-expr))) (global-type-bump (info-type (cadr (fifth lambda-expr)))))
      (setf (caddr inline-info) (global-type-bump (cadr (lam-e-to-sig lambda-expr))))

      (t3defun-aux 't3defun-local-entry
		   (or (cdr (assoc (promoted-c-type (caddr inline-info)) +return-alist+)) 'return-object)
		   fname cfun lambda-expr sp inline-info))
     ((baboon)))
    
    (t3init-fun fname cfun lambda-expr doc)

    (add-debug-info fname lambda-expr)))

;; (defun t3defun (fname cfun lambda-expr doc sp &aux inline-info 
;; 		      (*current-form* (list 'defun fname))
;; 		      (*volatile* (volatile (second lambda-expr))))

;;   (declare (ignore doc))

;;   (let ((*compiler-check-args* *compiler-check-args*)
;;         (*safe-compile* *safe-compile*)
;;         (*compiler-push-events* *compiler-push-events*)
;;         (*compiler-new-safety* *compiler-new-safety*)
;;         (*notinline* *notinline*)
;;         (*space* *space*)
;;         (*debug* *debug*))
    
;;     (when (eq (car (caddr (cddr lambda-expr))) 'decl-body)
;;       (local-compile-decls (caddr (caddr (cddr lambda-expr)))))

;;     (cond
;;      ((dolist (v *inline-functions*)
;; 	(or (si::fixnump (nth 3 v))
;; 	    (error "Old style inline"))
;; 	(and (eq (car v) fname)
;; 	     (not (nth 5 v)) ; ie.not  'link-call or 'ifuncall
;; 	     (return (setq inline-info v))))
      
;;     ;;; Add global entry information.
;; ;; 	(push (list fname cfun (cadr inline-info) (caddr inline-info))
;; ;; 	      *global-entries*))
    
;;     ;;; Local entry
;;       (analyze-regs (cadr lambda-expr) 0)
;;       (let ((lambda-expr (if (fast-link-proclaimed-type-p fname) lambda-expr (ttl-to-top lambda-expr fname))))
;; 	(t3defun-aux 't3defun-local-entry
;; 		     (or (cdr (assoc (promoted-c-type (caddr inline-info)) +return-alist+)) 'return-object)
;; 		     fname cfun lambda-expr sp inline-info))


;;       (when (not (fast-link-proclaimed-type-p fname))
;; 	(let* ((sig (lam-e-to-sig lambda-expr))
;; 	       (lsig (list (car sig) (if (type>= #tboolean (cadr sig)) #tt (cadr sig))));FIXME
;; 	       (fun (make-fun :level -1 
;; 			      :info (make-info :type (cadr lsig)) :call (list lsig) 
;; 			      :name fname :cfun (format nil "I~a" cfun)))
;; 	       (ttl (find-ttl-vars lambda-expr))
;; 	       (vp (member-if-not 'var-p ttl))
;; 	       (ttl (ldiff ttl vp))
;; 	       (v (mapcar (lambda (x) (list 'var (make-info :type (var-type x)) (list x nil))) ttl))
;; 	       (tp (cadr sig))
;; 	       (inline-info (copy-tree inline-info)))
;; 	  (setf (caddr inline-info) (global-type-bump tp))
;; 	  (rcl lambda-expr fun v fname)
;; 	  (t3defun-aux 't3defun-local-entry
;; 		       (or (cdr (assoc (promoted-c-type (caddr inline-info)) +return-alist+)) 'return-object)
;; 		       fname (format nil "G~a" cfun) lambda-expr sp inline-info))))

;;      ((baboon)))
    
;;     (add-debug-info fname lambda-expr)))

(defun t3defun-aux (f *exit* &rest lis)
  (let-pass3 ()   (apply f lis)))   

(defvar *mv-var* nil)

;; (defun tail-recursion-info (fname mv-var ll)
;;   (when *do-tail-recursion*
;;     (cons fname (append (if mv-var (cdr (car ll)) (car ll)) (ll-optionals ll) (list (ll-rest ll)) (ll-keywords ll)))))

;; (defun tail-recursion-info (fname mv-var l)
;;   (declare (ignore mv-var))
;;   (when *do-tail-recursion*
;;     (cons fname (find-ttl-vars l))))


(defun t3defun-local-entry (fname cfun lambda-expr sp inline-info
				  &aux specials *reg-clv* (requireds (caaddr lambda-expr)) nargs)
  (do ((vl requireds (cdr vl))
       (types (cadr inline-info) (cdr types)))
      ((endp vl))
      (cond ((eq (var-kind (car vl)) 'special)
	     (push (cons (car vl) (var-loc (car vl))) specials))
	    ((var-cb (car vl)) (push (list (eq 'clb (var-loc (car vl))) (car vl)) *reg-clv*))
;	    ((var-cb (car vl)) (push (car vl) *reg-clv*))
	    ((setf (var-kind (car vl))
		   (or (car (member (promoted-c-type (var-type (car vl))) +c-local-arg-types+)) 'object))))
      (setf (var-loc (car vl)) (cs-push (var-type (car vl)) t)))
  (let ((rt (get-return-type fname)))
    (unless (single-type-p rt)
      (let ((ns (abs (vald rt))))
	(unless (= ns (1- multiple-values-limit))
	  (setq *max-vs* (max *max-vs* ns))))))
  (when (is-narg-le lambda-expr)
    (setq nargs (car (last requireds)))
    (setf (var-register nargs) 0))
  (let* ((s (function-string fname))
	 (g (when (stringp cfun) (char= #\G (char cfun 0)))))
    (wt-comment (strcat (if g "global" "local") " entry for function ") s))
  (wt-h "static " (declaration-type (rep-type (caddr inline-info))) (c-function-name "LI" cfun fname) "(")
  (wt-nl1 "static " (declaration-type (rep-type (caddr inline-info))) (c-function-name "LI" cfun fname) "(")
  (wt-requireds requireds (cadr inline-info) nil nargs)
  (wt-h ";")
  (let* ((cm *reservation-cmacro*))
	 ;; (tri (tail-recursion-info fname nil lambda-expr))
	 ;; (*unwind-exit* (if tri (cons 'tail-recursion-mark *unwind-exit*) *unwind-exit*)))
    (wt-nl1 "{	")
    (wt " VMB" cm " VMS" cm " VMV" cm)
    (when nargs (wt-nl "va_list ap;")(wt-nl "va_start(ap,V" (var-loc nargs) ");"))

    (when sp (wt-nl "bds_check;"))
    (when *compiler-push-events* (wt-nl "ihs_check;"))
;    (dolist (v clv) (setf (var-ref v) (list 'cvar (var-loc v))) (c2bind v))
    (dolist (v specials)
      (setq *bds-used* t)
      (wt-nl "bds_bind(" (vv-str (cdr v)) ",V" (var-loc (car v))");")
      (push 'bds-bind *unwind-exit*)
      (setf (var-kind (car v)) 'SPECIAL)
      (setf (var-loc (car v)) (cdr v)))
    (let ((*mv-var* (mv-var lambda-expr)))
      (c2expr (caddr (cddr lambda-expr)))
      (wt-V*-macros cm (caddr inline-info)))
    
;;; Use base if defined for lint
;    (unless (and (zerop *max-vs*) (not *base-used*)) (wt-nl "base[0]=base[0];"))
    
;;; Make sure to return object if necessary
;    (if (equal "object " (rep-type (caddr inline-info))) (wt-nl "return Cnil;"))

    (when nargs (wt-nl "va_end(ap);"))
    (wt-nl1 "}")))

(defvar *vararg-use-vs* nil)
(defun set-up-var-cvs (var)
  (setf (var-ref var) (if *vararg-use-vs* (vs-push) (cvs-push))))

;;Macros for conditionally writing vs_base ..preamble, and for setting
;;up the return.
(defun wt-V*-macros (cm return-type)
  (declare (ignore return-type))

  (push (cons cm *max-vs*) *reservations*)
  
  (let ((vstb (if (or *mv-var* (> *max-vs* 0) *base-used*)
		  (concatenate 'string " register object * " *volatile* " base=vs_top;") ""))
	(bdsb (if *bds-used* " bds_ptr old_bds_top=bds_top;" ""))
	(frsb (if *frame-used* " frame_ptr old_frs_top=frs_top;" "")))
    (wt-h "#define VMB" cm vstb bdsb frsb))

  (wt-cvars)

  (cond (*sup-used* (wt-h "#define VMS" cm  " register object *" *volatile* "sup=vs_top+" *max-vs* ";vs_top=sup;"))
	((zerop *max-vs*) (wt-h "#define VMS" cm))
	((wt-h "#define VMS" cm " vs_top += " *max-vs* ";")))
  
  (cond ((zerop *max-vs*) (wt-h "#define VMV" cm))
	(*safe-compile*	(wt-h "#define VMV" cm " vs_reserve(" *max-vs* ");"))
	((wt-h "#define VMV" cm " vs_check;")))

  (let ((vstu (cond (*mv-var* 
		     (let ((loc (write-to-string (var-loc *mv-var*))))
		       (concatenate 'string " if ((b_)>=-1) vs_top=V" loc 
				    " ? (object *)V" loc "+(b_) : base;")))
		    ((or (> *max-vs* 0) *base-used*) " vs_top=base;")
		    ("")))
	(bdsu (if *bds-used* " for (;bds_top>old_bds_top;) bds_unwind1;" ""))
	(frsu (if *frame-used* " for (;frs_top>old_frs_top;) frs_pop();" "")))
    (wt-h "#define VMRV" cm "(a_,b_)" vstu bdsu frsu " return(a_);")
    (wt-h "#define VMR" cm "(a_) VMRV" cm "(a_,0);")))


(defun wt-requireds (requireds arg-types &optional first narg)
  (declare (ignore arg-types))
  (flet ((wt (x) (wt x) (let ((*compiler-output1* *compiler-output2*)) (wt x))))
	(dolist (v requireds (wt (if narg ",...)" ")")))
	  (setq narg (or narg (is-narg-var v)))
	  (let ((cvar (cs-push (var-type v) t)))
	    (when first (wt ","))
	    (setq first t)
	    (setf (var-loc v) cvar)
	    (wt *volatile*)
	    (wt (register v))
	    (wt (rep-type (var-type v)))
	    (wt "V")
	    (wt cvar)))))

;;Write the required args as c arguments, and declarations for the arguments.
(defun wt-requireds-old (requireds arg-types)
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


(defun if1 (f)
  (flet ((tbp (l) (member-if (lambda (x) (or (tag-p x) (blk-p x))) l)))
	(not (or (info-ch f) 
		 (tbp (info-ref     f))
		 (tbp (info-ref-ccb f))
		 (tbp (info-ref-clb f))
		 (iflag-p (info-flags f) side-effects)))))

;; (defun if1 (f)
;;   (not (or (info-ch f) (info-blocks f) (info-tags f)
;; 	   (iflag-p (info-flags f) side-effects))))
  
(defun ignorable-form-old (f)
  (cond ((> (changed-length (cadr f)) 0) nil)
	((side-effects-p f) nil)
	(t)))

(defun ignorable-form (f)
  (or (eq (car f) 'function)
      (if1 (cadr f))))

;; (defun ignorable-form (f)
;;   (if1 (cadr f)))


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

(defun analyze-regs1 (info want)
  (let ((tem 0)(real-min 3)(this-min 100000)(want want)(have 0))
    (declare (seqind tem real-min this-min want have))
    (tagbody
     START
     (do-referred
      (v info)
      (setq tem (var-register v))
      (when (>= tem real-min)
	(incf have)
	(when (< tem this-min)
	  (setq this-min tem))
	(when (> have want) 
	  (go NEXT))))
     (when (< have want)
       (decf real-min))
     (do-referred
      (v info)
      (when (< (var-register v) real-min)
	(setf (var-register v) 0)))
     (return-from analyze-regs1 real-min)
     NEXT
     (setq have 0 real-min (1+ this-min) this-min 1000000)
     (go START))))


(defun find-block-by-name (form name)
  (cond ((atom form) nil)
	((and (eq (car form) 'block) (blk-p (caddr form)) (eq (blk-name (caddr form)) name)) form)
	((or (find-block-by-name (car form) name) (find-block-by-name (cdr form) name)))))

(defun find-ttl (form name)
  (cond ((atom form) nil)
	((and (consp (car form)) (eq (caar form) 'bind-reg-clv)) (cadr form))
	((or (find-ttl (car form) name) (find-ttl (cdr form) name)))))

(defun ttl-to-top (form name)
  (cond ((atom form) form)
	((not (eq (car form) 'lambda)) form)
	((list (car form) (cadr form) (caddr form) (cadddr form) (find-ttl (fifth form) name)))))


(defun rcl (form fun vars name)
  (cond ((var-p form)
;	 (setf form (copy-var form))
	 (when (eq (var-kind form) 'replaced)
	   (setf (var-kind form) (if (var-aliases form) (var-kind (car (var-aliases form))) 'object))))
	((atom form))
	((and (eq (car form) 'block) (blk-p (caddr form)) (eq (blk-name (caddr form)) name))
	 (setf (cadddr form) (list 'call-local (fun-info fun) (list fun nil) vars)))
	((and (consp (car form)) (eq (caar form) 'bind-reg-clv))
	 (setf (cadr form) (list 'call-local (fun-info fun) (list fun nil) vars)))
	((eq (car form) 'lambda)
	 (mapc (lambda (x) (setf (var-type x) (global-type-bump (var-type x)))) (caaddr form))
	 (let* ((x (car (last form)))
		(y (cadr x))
		(tp (info-type y)))
	   (setf (info-type y) (global-type-bump tp))
	   (mapl (lambda (x) (mapl (lambda (y) (when (var-p (car y)) (setf (car y) (copy-var (car y))))) (car x))) (caddr form))
	   (rcl x fun vars name)))
	(t (rcl (car form) fun vars name) (rcl (cdr form) fun vars name))))
	

(defconstant +wt-c-rep-alist+ `((,#tnil ."object ")
				(,#tchar ."int8_t ")
				(,#tfixnum ."fixnum ")
;				(,#tinteger ."GEN ") 
;				(,#tcharacter  ."unsigned char ")
				(,#tlong-float  ."double ")
				(,#tshort-float ."float ")
				(,#tfcomplex ."fcomplex ")
				(,#tdcomplex ."dcomplex ")
				(object . "object ")))
;; (defconstant +wt-c-rep-alist+ `((,#tchar ."int8_t ")
;; 				(,#tfixnum ."fixnum ")
;; ;				(,#tinteger ."GEN ") 
;; ;				(,#tcharacter  ."unsigned char ")
;; 				(,#tlong-float  ."double ")
;; 				(,#tshort-float ."float ")
;; 				(,#tfcomplex ."fcomplex ")
;; 				(,#tdcomplex ."dcomplex ")
;; 				(object . "object ")))

(defun rep-type (type)
  (let ((z (promoted-c-type type)))
    (or (cdr (assoc z +wt-c-rep-alist+)) "object ")))


(defun t1defmacro (args &aux (w args) (n (pop args)) (ll (pop args)))
  (t1expr `(defun ,n ,@(cdr (si::defmacro-lambda n ll args))))
  (maybe-eval (not (macro-function n)) (cons 'defmacro w));FIXME?
  (push `(mflag ,n) *top-level-forms*))

(defun t3mflag (n)
  (add-init `(c::set-symbol-mflag 1 ',n)))

(defun c1fset (args)
  (let* ((info (make-info))
	 (nargs (c1args (cdr args) info)))
    (list* 'fset info (car args) nargs)))
(defun c2fset (sym f)
  (let* ((fun (car f))
	 (lam (cadr f))
	 (cl (fun-call fun))
	 (at (caar cl))
	 (rt (cadar cl)))
    (add-init `(si::init-function 
		',sym
		,(add-address (c-function-name "&LC" (fun-cfun fun) (fun-name fun)))
		nil nil -1 ,(new-proclaimed-argd at rt)
		,(argsizes at rt (xa lam))))))

(defun tlclp (form)
  (cond ((atom form) nil)
	((eq (car form) 'si::fset))
;	((member (car form) '(si::define-macro si::fset)))
	((or (tlclp (car form)) (tlclp (cdr form))))))

(defun t1ordinary (form)
  (setq *non-package-operation* t)
  ;; check for top level functions
  (cond ((or *compile-ordinaries* (tlclp (portable-source form)))
	 (maybe-eval nil form)
	 (let ((gen (gensym "progncompile")))
	   (proclaim `(function ,gen nil t))
	   (t1expr `(defun ,gen (), form nil))
	   (push (list 'ordinary `(,gen)) *top-level-forms*)))
	(t 
	 (maybe-eval nil form)
	 (let (*vars* *funs* *blocks* *tags*)
	   (push (list 'ordinary  form) *top-level-forms*)
	   nil))))

(defun t3ordinary (form)
  (cond ((atom form))
	((constantp form))
	((add-init form))))

(defun t2declare (vv)
  (declare (ignore vv))
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
  (dolist (s (cddr args))
    (cond ((stringp s) (push s body))
          ((consp s)
           (cond ((symbolp (car s))
                  (cmpck (special-operator-p (car s))
                         "Special form ~s is not allowed in defCfun." (car s))
                  (push (list (cons (car s) (parse-cvspecs (cdr s)))) body))
                 ((and (consp (car s)) (symbolp (caar s))
                       (not (if (eq (caar s) 'quote)
                                (or (endp (cdar s))
                                    (not (endp (cddar s)))
                                    (endp (cdr s))
                                    (not (endp (cddr s))))
			      (special-operator-p (caar s)))))
                  (push (cons (cons (caar s)
                                    (if (eq (caar s) 'quote)
                                        (list (add-object (cadar s)))
				      (parse-cvspecs (cdar s))))
                              (parse-cvspecs (cdr s)))
                        body))
                 (t (cmperr "The defCfun body ~s is illegal." s))))
          (t (cmperr "The defCfun body ~s is illegal." s))))
  (push (list 'defcfun (car args) (cadr args) (reverse body)) *top-level-forms*))

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
  (dolist (s body)
    (cond ((stringp s) (wt-nl1 s))
          ((eq (caar s) 'quote)
           (wt-nl1 (cadadr s))
           (case (caadr s)
                 (object (wt "=" (vv-str (cadar s)) ";"))
                 (otherwise
                  (wt "=object_to_" (string-downcase (symbol-name (caadr s)))
                      "(" (vv-str (cadar s)) ");"))))
          (t (wt-nl1 "{vs_base=vs_top=old_top;")
             (dolist (arg (cdar s))
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
                   (t (wt-nl1 "CMPfuncall(" (vv-str (add-symbol (caar s))) "->s.s_gfdef);")))
             (unless (endp (cdr s))
               (wt-nl1 (cadadr s))
               (case (caadr s)
                     (object (wt "=vs_base[0];"))
                     (otherwise (wt "=object_to_"
                                    (string-downcase (symbol-name (caadr s)))
                                    "(vs_base[0]);")))
               (dolist (dest (cddr s))
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
  (wt-nl1 "}"))

;; (defmacro defentry (n args c &optional (lt t))
;;   (let* ((cp (consp c))
;; 	 (c (if (and cp (eq (car c) 'static)) (cdr c) c))
;; 	 (m (if cp (cadr c) c))
;; 	 (rt (if cp (intern (symbol-name (car c)) 'keyword) :t))
;; 	 (syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) args)))
;;   `(defun ,n ,syms 
;;      (the ,lt
;; 	  (box ,rt 
;; 	       (addr-call (cstr "") (c-addr ,m) 
;; 			  ,@(mapcar (lambda (x y) 
;; 				      `(unbox ,(intern (symbol-name x) 'keyword) ,y)) args syms)))))))

(defmacro defentry (n args c &optional (lt t))
  (let* ((cp (consp c))
	 (st (and cp (eq (car c) 'static)))
	 (c (if st (cdr c) c))
	 (m (if cp (cadr c) c))
	 (m (if (symbolp m) (string-downcase m) m))
	 (rt (intern (symbol-name (if cp (car c) lt)) 'keyword))
	 (tps (mapcar (lambda (x) (intern (string (if (consp x) (car x) x)) 'keyword)) args))
	 (decl (reduce (lambda (y x) (strcat y (if (> (length y) 0) "," "") x)) args :initial-value ""))
	 (decl (concatenate 'string (string-downcase rt) " " m "(" decl ");"))
	 (decl (if st "" decl))
	 (syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) args)))
  `(defun ,n ,syms 
     (declare (optimize (safety 2)))
     ,@(mapcar (lambda (x y) `(check-type ,x ,(get y 'lisp-type))) syms tps)
     (lit ,rt 
	  "({" ,decl 
	  ,@(when (eq rt :void) `("("))
	  ,m "("
	  ,@(mapcon (lambda (x y z) `((,(car z) ,(car y))
				      ,(if (cdr x) (if (consp (car x)) "+" ",") ""))) args syms tps)
	  ")"
	  ,@(when (eq rt :void) `(",Cnil)"))
	  ";})"))))


;; (defmacro defentry (n args c &optional (lt t))
;;   (let* ((cp (consp c))
;; 	 (c (if (and cp (eq (car c) 'static)) (cdr c) c))
;; 	 (m (if cp (cadr c) c))
;; 	 (m (if (symbolp m) (string-downcase m) m))
;; 	 (rt (intern (symbol-name (if cp (car c) lt)) 'keyword))
;; 	 (tps (mapcar (lambda (x) (intern (string (if (consp x) (car x) x)) 'keyword)) args))
;; 	 (decl (reduce (lambda (y x) (strcat y (if (> (length y) 0) "," "") x)) args :initial-value ""))
;; 	 (decl (concatenate 'string (string-downcase rt) " " m "(" decl ");"))
;; 	 (syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) args)))
;;   `(defun ,n ,syms 
;;      (declare (optimize (safety 2)))
;;      ,@(mapcar (lambda (x y) `(check-type ,x ,(get y 'lisp-type))) syms tps)
;;      (lit ,rt 
;; 	  (cstr "({") (cstr ,decl) 
;; 	  ,@(when (eq rt :void) `((cstr "(")))
;; 	  (cstr ,m) (cstr "(")
;; 	  ,@(mapcon (lambda (x y z) `((unbox ,(car z) ,(car y))
;; 				      (cstr ,(if (cdr x) (if (consp (car x)) "+" ",") "")))) args syms tps)
;; 	  (cstr ")")
;; 	  ,@(when (eq rt :void) `((cstr ",Cnil)")))
;; 	  (cstr ";})")))))


;; (defmacro defentry1 (n args c &optional (lt t))
;;   (let* ((cp (consp c))
;; 	 (c (if (and cp (eq (car c) 'static)) (cdr c) c))
;; 	 (m (if cp (cadr c) c))
;; 	 (rt (if cp (intern (symbol-name (car c)) 'keyword) :t))
;; 	 (syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) args)))
;;     `(progn
;;        (defdlfun2 (,rt ,m) ,@(mapcar (lambda (x) (intern (symbol-name x) 'keyword)) args))
;;        (defun ,n ,syms (,(mdlsym m "") ,@syms)))))

;; (defun t1defentry (args &aux type cname (cfun (next-cfun)) cfspec static)
;;   (when (or (endp args) (endp (cdr args)) (endp (cddr args)))
;;         (too-few-args 'defentry 3 (length args)))
;;   (cmpck (not (symbolp (car args)))
;;          "The function name ~s is not a symbol." (car args))
;;   (dolist (x (cadr args))
;;     (cmpck (not (member x '(object char int fixnum float double string)))
;;            "The C-type ~s is illegal." x))
;;   (setq cfspec (caddr args))
;;   (cond ((symbolp cfspec)
;;          (setq type 'object)
;;          (setq cname (string-downcase (symbol-name cfspec))))
;;         ((stringp cfspec)
;;          (setq type 'object)
;;          (setq cname cfspec))
;; 	((and (consp cfspec) (eq (car cfspec) 'static)
;; 	      (setq static t cfspec (cdr cfspec)) nil))
;;         ((and (consp cfspec)
;;               (member (car cfspec) '(void object char int fixnum float double string))
;;               (consp (cdr cfspec))
;;               (or (symbolp (cadr cfspec)) (stringp (cadr cfspec)))
;;               (endp (cddr cfspec)))
;;          (setq cname (if (symbolp (cadr cfspec))
;;                         (string-downcase (symbol-name (cadr cfspec)))
;;                         (cadr cfspec)))
;;          (setq type (car cfspec)))
;;         (t (cmperr "The C function specification ~s is illegal." cfspec)))
;;   (push (list 'defentry (car args) cfun (cadr args) (if static (list 'static type) type) cname)
;;         *top-level-forms*)
;;   (push (cons (car args) cfun) *global-funs*))

;; (defun t2defentry (fname cfun arg-types type cname)
;;   (declare (ignore arg-types type cname))
;;   (wt-h "static void " (c-function-name "L" cfun fname) "();")
;;   (add-init `(si::mf ',fname ,(add-address (c-function-name "L" cfun fname)))))

;; (defun t3defentry (fname cfun arg-types type cname)
;;   (wt-h 
;;    (if (and (consp type) (eq (car type) 'static) (setq type (cadr type))) "static " "")
;;    (if (eq type 'string) "char *" (string-downcase (symbol-name type)))
;;    " " cname "("
;;    (with-output-to-string 
;;     (s)
;;     (do ((l arg-types (cdr l))) ((not l) (princ ");"s ))
;;       (princ (if (eq (car l) 'string) "char *" (string-downcase (symbol-name (car l)))) s)
;;       (when (cdr l) (princ "," s)))))
;;   (wt-comment "function definition for " fname)
;;   (wt-nl1 "static void " (c-function-name "L" cfun fname) "()")
;;   (wt-nl1 "{	object *old_base=vs_base;")
;;   (case type
;;     (void)
;;     (string (wt-nl "char *x;"))
;;     (t (wt-nl (string-downcase (symbol-name type)) " x;")))
;;   (when *safe-compile* (wt-nl "check_arg(" (length arg-types) ");"))
;;   (unless (eq type 'void) (wt-nl "x="))
;;   (wt-nl cname "(")
;;   (unless (endp arg-types)
;;           (do ((types arg-types (cdr types))
;;                (i 0 (1+ i)))
;;               (nil)
;;               (declare (fixnum i))
;;               (case (car types)
;;                     (object (wt-nl "vs_base[" i "]"))
;;                     (otherwise
;;                      (wt-nl "object_to_"
;;                             (string-downcase (symbol-name (car types)))
;;                             "(vs_base[" i "])")))
;;               (when (endp (cdr types)) (return))
;;               (wt ",")))
;;   (wt ");")
;;   (wt-nl "vs_top=(vs_base=old_base)+1;")
;;   (wt-nl "vs_base[0]=")
;;   (case type
;;         (void (wt "Cnil"))
;;         (object (wt "x"))
;;         (char (wt "code_char(x)"))
;;         ((fixnum int) (when (zerop *space*) (wt "CMP")) (wt "make_fixnum(x)"))
;; 	(string (wt "make_simple_string(x)"))
;;         (float (wt "make_shortfloat(x)"))
;;         (double (wt "make_longfloat(x)"))
;;         )
;;   (wt ";")
;;   (wt-nl1 "}"))

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
(defvar *reg-clv*)

(defun t3local-fun (closure-p clink ccb-vs fun lambda-expr &optional (initial-ccb-vs ccb-vs)
                              &aux (requireds (caaddr lambda-expr)) nargs specials
			      *reg-clv*
			      h at rt (level (if closure-p (if clink 0 -1) (fun-level fun)))
			      (*volatile* (volatile (cadr lambda-expr))))
  (declare (fixnum level))

  (setq h (fun-call fun) at (mapcar 'cmp-norm-tp (caar h)) rt (cmp-norm-tp (cadar h)));FIXME
  (dolist (vl requireds)
    (cond ((eq (var-kind vl) 'special)
	   (push (cons vl (var-loc vl)) specials))
	  ((var-cb vl) (push (list (eq 'clb (var-loc vl)) vl) *reg-clv*))
;	  ((var-cb vl) (push vl *reg-clv*))
	  ((setf (var-kind vl)
		 (or (car (member (promoted-c-type (var-type vl)) +c-local-arg-types+)) 'object))))
    (setf (var-loc vl) (cs-push (var-type vl) t)))

  (wt-comment "local function " (if (fun-name fun) (fun-name fun) nil))
  (wt-h   "static " (declaration-type (rep-type rt))
	  (c-function-name (if closure-p "LC" "L") (fun-cfun fun) (fun-name fun)) "(")
  (wt-nl1 "static " (declaration-type (rep-type rt))
	  (c-function-name (if closure-p "LC" "L") (fun-cfun fun) (fun-name fun)) "(")
  (unless (single-type-p rt)
    (let ((ns (abs (vald rt))))
      (unless (= ns (1- multiple-values-limit))
	(setq *max-vs* (max *max-vs* ns)))))
  (when (is-narg-le lambda-expr)
    (setq nargs (car (last requireds)))
    (setf (var-register nargs) 0))
  (let (first)
    (unless closure-p
      (flet ((wt2 (x) (wt x) (let ((*compiler-output1* *compiler-output2*)) (wt x))))
	    (dotimes (i (1+ level))
	      (when first (wt2 ",")) (setq first t) 
	      (wt2 "object *") (wt2 *volatile*) (wt2 "base") (wt2 i))))
    (wt-requireds requireds at first nargs))
  (wt-h ";")
  (analyze-regs (cadr lambda-expr) 2)
  (let-pass3
   ((*clink* clink) (*ccb-vs* ccb-vs)
                         ;; Use new optional parameter to initialize
                         ;; *initial-ccb-vs* for correct use in
                         ;; wt-ccb-vs. CM 20031130
    (*level* (1+ level)) (*initial-ccb-vs* initial-ccb-vs)
    (*exit* (or (cdr (assoc (promoted-c-type rt) +return-alist+)) 'return-object))
    (*compiler-check-args* *compiler-check-args*)
    (*safe-compile* *safe-compile*)
    (*compiler-push-events* *compiler-push-events*)
    (*compiler-new-safety* *compiler-new-safety*)
    (*notinline* *notinline*)
    (*space* *space*)
    (*debug* *debug*))

   (when (eq (car (caddr (cddr lambda-expr))) 'decl-body)
     (local-compile-decls (caddr (caddr (cddr lambda-expr)))))
   (wt-nl1 "{	")
   (let* ((cm *reservation-cmacro*))
	  ;; (tri (tail-recursion-info (fun-name fun) nil lambda-expr))
	  ;; (*unwind-exit* (if tri (cons 'tail-recursion-mark *unwind-exit*) *unwind-exit*)))
     (wt-nl "VMB" cm " VMS" cm " VMV" cm)
     (when nargs (wt-nl "va_list ap;")(wt-nl "va_start(ap,V" (var-loc nargs) ");"))
     (if *safe-compile*
	 (wt-nl "vs_reserve(VM" cm ");")
       (wt-nl "vs_check;"))
     (when *compiler-push-events* (wt-nl "ihs_check;"))
;     (when clv (wt-nl "#define base0 fcall.fun->fun.fun_env"))
;     (dolist (v clv) (setf (var-ref v) (list 'cvar (var-loc v))) (c2bind v))
     (dolist (v specials)
       (setq *bds-used* t)
       (wt-nl "bds_bind(" (vv-str (cdr v)) ",V" (var-loc (car v))");")
       (push 'bds-bind *unwind-exit*)
       (setf (var-kind (car v)) 'SPECIAL)
       (setf (var-loc (car v)) (cdr v)))
     (let ((*mv-var* (mv-var lambda-expr)))
       (c2expr (caddr (cddr lambda-expr)))
       (wt-V*-macros cm rt)))

   (wt-nl "#undef base0")

   (when nargs (wt-nl "va_end(ap);"))
   (wt-nl1 "}")))


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
  (unless (or (not *vcs-used*) (= *cs* 0))
;	 (format *compiler-output2* " object Vcs[~a]={Cnil" *cs*)
;	 (dotimes (temp (- *cs* 1) t) (format *compiler-output2* ",Cnil"))
;	 (format *compiler-output2* "};"))
    (format *compiler-output2* " object Vcs[~a];" *cs*)))
