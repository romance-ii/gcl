;;-*-Lisp-*-
;;; CMPINLINE  Open coding optimizer.
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

;;; Pass 1 generates the internal form
;;;	( id  info-object . rest )
;;; for each form encountered.

;;;  Change changed-vars and referrred-vars slots in info structure to arrays
;;;  for dramatic compilation speed improvements when the number of variables
;;;  are large, as occurs at present in running the random-int-form tester.
;;;  20040320 CM

(defmacro eql-not-nil (x y) `(and ,x (eql ,x ,y)))

;; lay down code for a load time eval constant.
(defun name-sd1 (x)
  (or  (get x 'name-to-sd)
      (setf (get x 'name-sd)
	    `(si::|#,| name-to-sd ',x))))

(defun s-print (n x a s)
  (princ "#<" s)
  (princ n s)
  (princ " " s)
  (princ x s)
  (format s " ~x>" a))

(defstruct (info (:print-function (lambda (x s i) (s-print 'info (info-type x) (si::address x) s)))
		 (:copier old-copy-info))
  (type t)		    ;;; Type of the form.
  (sp-change 0   :type bit) ;;; Whether execution of the form may change the value of a special variable *VS*.
  (volatile  0   :type bit) ;;; whether there is a possible setjmp
  (flags     0   :type char)
  (unused1   0   :type char)
  (ch      nil   :type list)
  (ref-ccb nil   :type list)
  (ref-clb nil   :type list)
  (ref     nil   :type list)
  )

(si::freeze-defstruct 'info)


(defconstant +iflags+ '(side-effects provisional))

(defmacro iflag-p (flags flag)
  (let ((i (position flag +iflags+)))
    (unless i (baboon))
    `(logbitp ,i ,flags)))

(defmacro iflags (&rest flags &aux (r 0))
  (dolist (flag flags r)
    (let ((i (position flag +iflags+)))
      (unless i (baboon))
      (setq r (logior r (ash 1 i))))))

(defmacro copy-ht (ht)
  `(copy-list ,ht));nil ?

(defun copy-info (info)
  (let ((new-info (old-copy-info info)))
    (setf (info-ch        new-info) (copy-ht (info-ch        info))
	  (info-ref       new-info) (copy-ht (info-ref       info))
	  (info-ref-ccb   new-info) (copy-ht (info-ref-ccb   info))
	  (info-ref-clb   new-info) (copy-ht (info-ref-clb   info)))
    new-info))

;; (defun copy-info (info)
;;   (let ((new-info (old-copy-info info)))
;;     (setf (info-ref new-info) (copy-ht (info-ref info))
;; 	  (info-ch  new-info) (copy-ht (info-ch  info))
;; 	  (info-blocks    new-info) (copy-ht (info-blocks    info))
;; 	  (info-tags      new-info) (copy-ht (info-tags      info)))
;;     (when *make-fast-ref*
;;       (setf (info-vref      new-info) (copy-ht (info-vref      info))
;; 	    (info-vref-ccb  new-info) (copy-ht (info-vref-ccb  info))
;; 	    (info-vref-clb  new-info) (copy-ht (info-vref-clb  info))))
;;     new-info))

;; (defun copy-info (info)
;;   (let ((new-info (old-copy-info info)))
;;     (setf (info-ref new-info) (copy-ht (info-ref info))
;; 	  (info-ch  new-info) (copy-ht (info-ch  info))
;; 	  (info-blocks    new-info) (copy-ht (info-blocks    info))
;; 	  (info-tags      new-info) (copy-ht (info-tags      info))
;; 	  (info-vref      new-info) (copy-ht (info-vref      info))
;; 	  (info-vref-ccb  new-info) (copy-ht (info-vref-ccb  info))
;; 	  (info-vref-clb  new-info) (copy-ht (info-vref-clb  info))
;; 	  (info-bref      new-info) (copy-ht (info-bref      info))
;; 	  (info-bref-ccb  new-info) (copy-ht (info-bref-ccb  info))
;; 	  (info-bref-clb  new-info) (copy-ht (info-bref-clb  info))
;; 	  (info-tref      new-info) (copy-ht (info-tref      info))
;; 	  (info-tref-ccb  new-info) (copy-ht (info-tref-ccb  info))
;; 	  (info-tref-clb  new-info) (copy-ht (info-tref-clb  info))
;; 	  (info-fref      new-info) (copy-ht (info-fref      info))
;; 	  (info-fref-ccb  new-info) (copy-ht (info-fref-ccb  info))
;; ;	  (info-fref-clb  new-info) (copy-ht (info-fref-clb  info))
;; 	  )    
;;     new-info))

(defmacro push-ht (x ht)
  `(pushnew ,x ,ht :test 'eq))

(defmacro do-ht ((v ht) &rest body)
  `(dolist (,v ,ht) ,@body))

(defmacro in-ht (v ht)
  `(member ,v ,ht :test 'eq))

(defmacro adjustable-ht (ht) ht)

(defmacro do-referred ((v info) &rest body)
  `(progn 
     (do-ht (,v (info-ref-ccb ,info)) (when (var-p ,v) ,@body))
     (do-ht (,v (info-ref-clb ,info)) (when (var-p ,v) ,@body))
     (do-ht (,v (info-ref     ,info)) (when (var-p ,v) ,@body))))
;; (defmacro do-referred-cb ((v info) &rest body)
;;   `(progn 
;;      (do-ht (,v (info-ref-ccb ,info)) (when (var-p ,v) ,@body))
;;      (do-ht (,v (info-ref-clb ,info)) (when (var-p ,v) ,@body))))
;; (defmacro do-referred ((v info) &rest body)
;;   `(do-ht (,v (info-ref ,info)) ,@body))
(defmacro do-changed ((v info) &rest body)
  `(do-ht (,v (info-ch ,info)) ,@body))
(defmacro is-referred (var info)
  `(or 
    (in-ht ,var (info-ref-ccb ,info))
    (in-ht ,var (info-ref-clb ,info))
    (in-ht ,var (info-ref     ,info))))
;; (defmacro is-referred (var info)
;;   `(in-ht ,var (info-ref ,info)))
(defmacro is-changed (var info)
  `(in-ht ,var (info-ch ,info)))
(defmacro push-referred (var info) 
  `(push-ht ,var (info-ref ,info)));FIXME
;; (defmacro push-referred (var info)
;;   `(push-ht ,var (info-ref ,info)))
(defmacro push-changed (var info)
  `(push-ht ,var (info-ch ,info)))
(defmacro changed-length (info)
  `(length (info-ch ,info)))
;; (defmacro referred-length (info)
;;   `(length (info-ref ,info)))

(defun imerge (x y list)
  (nunion x (intersection y list :test 'eq) :test 'eq))
(declaim (inline imerge))

(defun add-info (to-info from-info)
  ;; Allow nil from-info without error CM 20031030
  (unless from-info (return-from add-info to-info))
  (macrolet ((mrg (field) `(let* ((r (,field from-info))) 
			      (when r
				(setf (,field to-info) (imerge (,field to-info) r *outer-env*)
				      (,field to-info) (imerge (,field to-info) r *vars*)
				      (,field to-info) (imerge (,field to-info) r *blocks*)
				      (,field to-info) (imerge (,field to-info) r *tags*)
				      (,field to-info) (imerge (,field to-info) r *funs*))))))
	    (mrg info-ch)
	    (mrg info-ref-ccb)
	    (mrg info-ref-clb)
	    (mrg info-ref))
  (when (/= (info-sp-change from-info) 0) (setf (info-sp-change to-info) 1))
  (setf (info-flags to-info) (logior (info-flags to-info) (info-flags from-info)))
  to-info)

;; (defun add-info (to-info from-info)
;;   ;; Allow nil from-info without error CM 20031030
;;   (unless from-info (return-from add-info to-info))
;;   (macrolet ((mrg (field scrn) `(let* ((r (,field from-info))) (when r (setf (,field to-info) (imerge (,field to-info) r ,scrn)))))
;; 	     (mrg1 (field) `(let* ((r (,field from-info))) 
;; 			      (when r
;; 				(setf (,field to-info) (imerge (,field to-info) r *vars*)
;; 				      (,field to-info) (imerge (,field to-info) r *blocks*)
;; 				      (,field to-info) (imerge (,field to-info) r *tags*)
;; 				      (,field to-info) (imerge (,field to-info) r *funs*))))))
;; 	    (mrg  info-ch        *vars*)
;; 	    (mrg1 info-ref-ccb)
;; 	    (mrg1 info-ref-clb)
;; 	    (mrg1 info-ref))
;;   (when (/= (info-sp-change from-info) 0) (setf (info-sp-change to-info) 1))
;;   (setf (info-flags to-info) (logior (info-flags to-info) (info-flags from-info)))
;;   to-info)

;; (defun add-info (to-info from-info)
;;   ;; Allow nil from-info without error CM 20031030
;;   (unless from-info (return-from add-info to-info))
;;   (macrolet ((mrg (field scrn) `(let* ((r (,field from-info))) (when r (setf (,field to-info) (imerge (,field to-info) r ,scrn)))))
;; 	     (mrg1 (field) `(let* ((r (,field from-info))) 
;; 			      (when r
;; 				(setf (,field to-info) (imerge (,field to-info) r *vars*)
;; 				      (,field to-info) (imerge (,field to-info) r *blocks*)
;; 				      (,field to-info) (imerge (,field to-info) r *tags*)
;; 				      (,field to-info) (imerge (,field to-info) r *funs*))))))
;; 	    (mrg info-ref       *vars*)
;; 	    (mrg info-ch        *vars*)
;; 	    (mrg info-blocks    *blocks*)
;; 	    (mrg info-tags      *tags*)
;; 	    (when *make-fast-ref*
;; 	      (mrg1 info-vref-ccb)
;; 	      (mrg1 info-vref-clb)
;; 	      (mrg1 info-vref)))
;;   (when (/= (info-sp-change from-info) 0) (setf (info-sp-change to-info) 1))
;;   (setf (info-flags to-info) (logior (info-flags to-info) (info-flags from-info)))
;;   to-info)

;; (defun add-info (to-info from-info)
;;   ;; Allow nil from-info without error CM 20031030
;;   (unless from-info (return-from add-info to-info))
;;   (macrolet ((mrg (field scrn) `(let* ((r (,field from-info))) (when r (setf (,field to-info) (imerge (,field to-info) r ,scrn))))))
;; 	    (mrg info-ref       *vars*)
;; 	    (mrg info-ch        *vars*)
;; 	    (mrg info-blocks    *blocks*)
;; 	    (mrg info-tags      *tags*)
;; 	    (mrg info-vref-ccb  *vars*)
;; 	    (mrg info-vref-clb  *vars*)
;; 	    (mrg info-vref      *vars*)
;; 	    (mrg info-bref-ccb  *blocks*)
;; 	    (mrg info-bref-clb  *blocks*)
;; 	    (mrg info-bref      *blocks*)
;; 	    (mrg info-tref-ccb  *tags*)
;; 	    (mrg info-tref-clb  *tags*)
;; 	    (mrg info-tref      *tags*)
;; 	    (mrg info-fref-ccb  *funs*)
;; ;	    (mrg info-fref-clb  *funs*)
;; 	    (mrg info-fref      *funs*))
;;   (when (/= (info-sp-change from-info) 0) (setf (info-sp-change to-info) 1))
;;   (setf (info-flags to-info) (logior (info-flags to-info) (info-flags from-info)))
;;   to-info)

;;   (setf (info-ref to-info) (imerge (info-ref to-info) (info-ref from-info) *vars*)
;; 	(info-ch to-info)  (imerge (info-ch to-info)  (info-ch from-info) *vars*)
;; 	(info-blocks to-info) (imerge (info-blocks to-info) (info-blocks from-info) *blocks*)
;; 	(info-tags to-info) (imerge (info-tags to-info) (info-tags from-info) *tags*)
;; 	(info-vref-ccb to-info) (imerge (info-vref-ccb to-info) (info-vref-ccb from-info) *vars*)
;; 	(info-vref-clb to-info) (imerge (info-vref-clb to-info) (info-vref-clb from-info) *vars*)
;; 	(info-vref to-info) (imerge (info-vref to-info) (info-vref from-info) *vars*)
;; 	(info-bref-ccb to-info) (imerge (info-bref-ccb to-info) (info-bref-ccb from-info) *blocks*)
;; 	(info-bref-clb to-info) (imerge (info-bref-clb to-info) (info-bref-clb from-info) *blocks*)
;; 	(info-bref to-info) (imerge (info-bref to-info) (info-bref from-info) *blocks*)
;; 	(info-tref-ccb to-info) (imerge (info-tref-ccb to-info) (info-tref-ccb from-info) *tags*)
;; 	(info-tref-clb to-info) (imerge (info-tref-clb to-info) (info-tref-clb from-info) *tags*)
;; 	(info-tref to-info) (imerge (info-tref to-info) (info-tref from-info) *tags*)
;; 	(info-fref-ccb to-info) (imerge (info-fref-ccb to-info) (info-fref-ccb from-info) *funs*)
;; ;	(info-fref-clb to-info) (imerge (info-fref-clb to-info) (info-fref-clb from-info) *funs*)
;; 	(info-fref to-info) (imerge (info-fref to-info) (info-fref from-info) *funs*)
;; 	)
;;   (when (/= (info-sp-change from-info) 0) (setf (info-sp-change to-info) 1))
;;   (setf (info-flags to-info) (logior (info-flags to-info) (info-flags from-info)))
;;   to-info)

(defconstant +c1nil+ (list 'LOCATION (make-info :type (object-type nil)) nil))
(defmacro c1nil () `+c1nil+)
(defconstant +c1t+ (list 'LOCATION (make-info :type (object-type t)) t))
(defmacro c1t () `+c1t+)

(defun args-info-changed-vars (var forms)
  (if (member (var-kind var) +c-local-var-types+)
      (dolist** (form forms)
		(when (is-changed var (cadr form))
		  (return-from args-info-changed-vars t)))
    (case (var-kind var)
	  ((LEXICAL OBJECT)
	   (dolist** (form forms)
		     (when (is-changed var (cadr form))
		       (return-from args-info-changed-vars t))))
	  (REPLACED nil)
	  (t (dolist** (form forms nil)
		       (when (or (is-changed var (cadr form))
				 (/= (info-sp-change (cadr form)) 0))
			 (return-from args-info-changed-vars t)))))))

;; Variable references in arguments can also be via replaced variables
;; (see gcl_cmplet.lsp) It appears that this is not necessary when
;; checking for changed variables, as matches would appear to require
;; that the variable not be replaced.  It might be better to provide a
;; new slot in the var structure to point to the variable by which one
;; is replaced -- one would need to consider chains in such a case.
;; Here we match on the C variable reference, which should be complete.
;; 20040306 CM

(defun var-rep-loc (x)
  (and
   (eq (var-kind x) 'replaced)
   (consp (var-loc x)) ;; may not be necessary, but vars can also be replaced to 'locations
                       ;; see gcl_cmplet.lsp
   (cadr (var-loc x))))

(defun args-info-referred-vars (var forms)
  (if (member (var-kind var) +c-local-var-types+)
      (dolist** (form forms nil)
		(when (or (is-referred var (cadr form))
			  (is-rep-referred var (cadr form)))
		  (return-from args-info-referred-vars t)))
    (case (var-kind var)
	  ((LEXICAL REPLACED OBJECT)
	   (dolist** (form forms nil)
		     (when (or (is-referred var (cadr form))
			       (is-rep-referred var (cadr form)))
		       (return-from args-info-referred-vars t))))
	  (t (dolist** (form forms nil)
		       (when (or (is-referred var (cadr form))
				 (is-rep-referred var (cadr form))
				 (/= (info-sp-change (cadr form)) 0))
			 (return-from args-info-referred-vars t)))))))

;;; Valid property names for open coded functions are:
;;;  INLINE
;;;  INLINE-SAFE	safe-compile only
;;;  INLINE-UNSAFE	non-safe-compile only
;;;
;;; Each property is a list of 'inline-info's, where each inline-info is:
;;; ( types { type | boolean } side-effect new-object { string | function } ).
;;;
;;; For each open-codable function, open coding will occur only if there exits
;;; an appropriate property with the argument types equal to 'types' and with
;;; the return-type equal to 'type'.  The third element
;;; is T if and only if side effects may occur by the call of the function.
;;; Even if *VALUE-TO-GO* is TRASH, open code for such a function with side
;;; effects must be included in the compiled code.
;;; The forth element is T if and only if the result value is a new Lisp
;;; object, i.e., it must be explicitly protected against GBC.

(defvar *inline-functions* nil)
(defvar *inline-blocks* 0)
;;; *inline-functions* holds:
;;;	(...( function-name . inline-info )...)
;;;
;;; *inline-blocks* holds the number of temporary cvars used to save
;;; intermediate results during evaluation of inlined function calls.
;;; This variable is used to close up blocks introduced to declare static
;;; c variables.

(defun inc-inline-blocks()
  (cond ((consp *inline-blocks*)
	 (incf (car *inline-blocks*)))
	(t (incf *inline-blocks*))))


;; (defun loc-from-c2form (form type)
;;   (case (car form)
;; 	(LOCATION (coerce-loc (caddr form) type))
;; 	(VAR
;; 	 (cond ((args-info-changed-vars (caaddr form) (cdr forms))
;; 		(cond ((and (member (var-kind (caaddr form)) +c-local-var-types+)
;; 			    (eq type (var-kind (caaddr form))))
;; 		       (let* ((cvar (cs-push type t))(*value-to-go* `(cvar ,cvar)))
;; 			 (wt-nl "{" (rep-type type) "V" cvar "= V"
;; 				(var-loc (caaddr form)) ";")
;; 			 (inc-inline-blocks)
;; 			 (list 'cvar cvar 'inline-args)))
;; 		      ((let* ((temp (wt-c-push type))(*value-to-go* temp))
;; 			 (wt-nl temp "= ")
;; 			 (wt-var (caaddr form) (cadr (caddr form)))
;; 			 (wt ";")
;; 			 (coerce-loc temp type)))))
;; 	       ((and (member (var-kind (caaddr form)) +c-local-var-types+)
;; 		     (not (eq type (var-kind (caaddr form)))))
;; 		(let* ((temp (cs-push type))(*value-to-go* `(cvar ,temp)))
;; 		  (wt-nl "V" temp " = "
;; 			 (coerce-loc (cons 'var (caddr form)) type) ";")
;; 		  (list 'cvar temp)))
;; 	       ((coerce-loc (cons 'VAR (caddr form)) type))))
;; 	(CALL-GLOBAL
;; 	 (if (let ((fname (caddr form)))
;; 	       (and (inline-possible fname)
;; 		    (setq ii (get-inline-info fname (cadddr form) (info-type (cadr form)) (sixth form)))
;; 		    (progn  (save-avma ii) t)))
;; 	     (let ((loc (get-inline-loc ii (cadddr form))))
;; 	       (cond
;; 		((or (and (flag-p (caddr ii) ans)(not *c-gc*)); returns new object
;; 		     (and (member (cadr ii) +c-local-var-types+)
;; 			  (not (eq type (cadr ii)))))
;; 		 (let* ((temp (cs-push type))(*value-to-go* `(cvar ,temp)))
;; 		   (wt-nl "V" temp " = " (coerce-loc loc type) ";")
;; 		   (list 'cvar temp)))
;; 		((or (need-to-protect (cdr forms) (cdr types))
;; 		     ;;if either new form or side effect,
;; 		     ;;we don't want double evaluation
;; 		     (and (flag-p (caddr ii) allocates-new-storage)
;; 			  (or (null fun)
;; 			      ;; Any fun such as list,list* which
;; 			      ;; does not cause side effects or
;; 			      ;; do double eval (ie not "@..")
;; 			      ;; could go here.
;; 			      (not (si::memq fun '(list-inline list*-inline)))))
;; 		     (flag-p (caddr ii) is)
;; 		     (and (flag-p (caddr ii) set) ; side-effectp
;; 			  (not (null (cdr forms)))))
;; 		 (let (cvar)
;; 		   (cond
;; 		    ((eq type t)
;; 		     (setq cvar (cs-push))
;; 		     (wt-nl "V" cvar "= ")
;; 		     (let ((*value-to-go* `(cvar ,cvar))) (wt-loc loc)))
;; 		    (t (setq cvar (cs-push type t))
;; 		       (wt-nl "{" (rep-type type) "V" cvar "= ")
;; 		       (let ((*value-to-go* `(cvar ,cvar)))
;; 			 (funcall (or (cdr (assoc (promoted-c-type type) +wt-loc-alist+)) 'wt-loc) loc))
;; 		       (inc-inline-blocks)))
;; 		   (wt ";")
;; 		   (list 'cvar cvar 'inline-args)))
;; 		(t (coerce-loc loc type))))
;; 	   (let* ((temp (if *c-gc* (list 'cvar (cs-push)) (list 'vs (vs-push))))
;; 		  (*value-to-go* temp))
;; 	     (c2expr* form)
;; 	     (coerce-loc temp type))))
;; 	(ub (list 'gen-loc (caddr form) (loc-from-c2form (fourth form) type)))
;; 	(structure-ref(coerce-loc-structure-ref (cdr form) type))
;; 	(SETQ
;; 	 (let ((vref (caddr form))
;; 	       (form1 (cadddr form)))
;; 	   (let ((*value-to-go* (cons 'var vref))) (c2expr* form1))
;; 	   (cond ((eq (car form1) 'LOCATION)
;; 		  (coerce-loc (caddr form1) type))
;; 		 (t (loc-from-c2form (list 'VAR (cadr form) vref))
;; 		  (setq forms (list* form (list 'VAR (cadr form) vref) (cdr forms)))
;; 		  ;; want (setq types (list* type type (cdr  types)))
;; 		  ;; but type is first of types
;; 		  (setq types (list* type  types))))))
;; 	((let ((temp
;; 		(cond ((not *c-gc*) (list 'vs (vs-push)))
;; 		      ((eq type t) (list 'cvar (cs-push)))
;; 		      ((list 'var
;; 			     (make-var :type type :loc (cs-push type)
;; 				       :kind (or (car (member (promoted-c-type type) +c-local-var-types+)) 'object))
;; 			     nil)))))
;; 	   (let ((*value-to-go* temp))
;; 	     (c2expr* form)
;; 	     (coerce-loc temp type))))))

(defun wt-push-loc (loc type &optional expr)
  (let* ((cv (cs-push type))
	 (*value-to-go* `(cvar ,cv)))
    (if expr (c2expr* loc)
      (wt-nl "V" cv "= " (coerce-loc loc type) ";"))
    (coerce-loc *value-to-go* type)))
    

(defun inline-args (forms types &optional fun &aux locs ii)
  (do ((forms forms (cdr forms))
       (types types (cdr types)))
      ((endp forms) (nreverse locs))
      (let* ((form (car forms))
	     (type (car types))
	     (type (adj-cnum-tp type (info-type (cadr form)))))
        (case (car form)
              (LOCATION (push (coerce-loc (caddr form) type) locs))
              (VAR
	       (cond ((args-info-changed-vars (caaddr form) (cdr forms))
		      (push (wt-push-loc (cons 'var (caddr form)) type) locs))
		     ((and (member (var-kind (caaddr form)) +c-local-var-types+)
			   (not (type>= (var-kind (caaddr form)) type)))
;			   (not (eq type (var-kind (caaddr form)))))
		      (push (wt-push-loc (cons 'var (caddr form)) type) locs))
		     ((push (coerce-loc (cons 'VAR (caddr form)) type) locs))))
              (CALL-GLOBAL
               (if (let ((fname (caddr form)))
		     (and (inline-possible fname)
			  (setq ii (get-inline-info
				    fname (cadddr form)
				    (info-type (cadr form)) (sixth form)))
			  (progn  (save-avma ii) t)))
                   (let ((loc (get-inline-loc ii (cadddr form))))
		     (cond
		      ((or (and (flag-p (caddr ii) ans)(not *c-gc*)); returns new object
			   (and (member (cadr ii) +c-local-var-types+)
				(not (eq type (cadr ii)))))
		       (push (wt-push-loc loc type) locs))
		      ((or (need-to-protect (cdr forms) (cdr types))
			   ;;if either new form or side effect,
			   ;;we don't want double evaluation
			   (and (flag-p (caddr ii) allocates-new-storage)
				(or (null fun)
				    ;; Any fun such as list,list* which
				    ;; does not cause side effects or
				    ;; do double eval (ie not "@..")
				    ;; could go here.
				    (not (si::memq fun '(list-inline list*-inline)))))
			   (flag-p (caddr ii) is)
			   (and (flag-p (caddr ii) set) ; side-effectp
				(not (null (cdr forms)))))
		       (push (wt-push-loc loc type) locs))
		      ((push (coerce-loc loc type) locs))))
		 (push (wt-push-loc form type t) locs)))
	      (ub (push (list 'gen-loc (caddr form) 
			      (let* ((v (fourth form))(tv (third v))) 
				(if (eq (car v) 'var) (cons (car v) tv) tv))) locs))
              (structure-ref (push (coerce-loc-structure-ref (cdr form) type) locs))
              (SETQ
	       (let* ((vref (caddr form))
		      (form1 (cadddr form))
		      (v (car vref))
		      (vv (cons 'var vref))
		      (vt (if (or (eq t (var-ref v)) (consp (var-ref v)) (var-cb v) (eq (var-kind v) 'global)) vv *value-to-go*)))
		 (cond ((eq vt vv)
			(let ((*value-to-go* vt)) (c2expr* form1))
			(if (eq (car form1) 'LOCATION)
			    (push (coerce-loc (caddr form1) type) locs)
			  (setq forms (list* form (list 'VAR (cadr form) vref) (cdr forms))
				types (list* type  types))))
		       ((setq forms (list* form form1 (cdr forms))
			      types (list* type  types))))));; want (setq types (list* type type (cdr  types))) but type is first of types
              (otherwise (push (wt-push-loc form type t) locs))))))

;; (defun inline-args (forms types &optional fun &aux locs ii)
;;   (do ((forms forms (cdr forms))
;;        (types types (cdr types)))
;;       ((endp forms) (nreverse locs))
;;       (let* ((form (car forms))
;; 	     (type (car types))
;; 	     (type (adj-cnum-tp type (info-type (cadr form)))))
;;         (case (car form)
;;               (LOCATION (push (coerce-loc (caddr form) type) locs))
;;               (VAR
;; 	       (cond ((args-info-changed-vars (caaddr form) (cdr forms))
;; 		      (push (wt-push-loc (cons 'var (caddr form)) type) locs))
;; 		     ((and (member (var-kind (caaddr form)) +c-local-var-types+)
;; 			   (not (eq type (var-kind (caaddr form)))))
;; 		      (push (wt-push-loc (cons 'var (caddr form)) type) locs))
;; 		     ((push (coerce-loc (cons 'VAR (caddr form)) type) locs))))
;;               (CALL-GLOBAL
;;                (if (let ((fname (caddr form)))
;; 		     (and (inline-possible fname)
;; 			  (setq ii (get-inline-info
;; 				    fname (cadddr form)
;; 				    (info-type (cadr form)) (sixth form)))
;; 			  (progn  (save-avma ii) t)))
;;                    (let ((loc (get-inline-loc ii (cadddr form))))
;; 		     (cond
;; 		      ((or (and (flag-p (caddr ii) ans)(not *c-gc*)); returns new object
;; 			   (and (member (cadr ii) +c-local-var-types+)
;; 				(not (eq type (cadr ii)))))
;; 		       (push (wt-push-loc loc type) locs))
;; 		      ((or (need-to-protect (cdr forms) (cdr types))
;; 			   ;;if either new form or side effect,
;; 			   ;;we don't want double evaluation
;; 			   (and (flag-p (caddr ii) allocates-new-storage)
;; 				(or (null fun)
;; 				    ;; Any fun such as list,list* which
;; 				    ;; does not cause side effects or
;; 				    ;; do double eval (ie not "@..")
;; 				    ;; could go here.
;; 				    (not (si::memq fun '(list-inline list*-inline)))))
;; 			   (flag-p (caddr ii) is)
;; 			   (and (flag-p (caddr ii) set) ; side-effectp
;; 				(not (null (cdr forms)))))
;; 		       (push (wt-push-loc loc type) locs))
;; 		      ((push (coerce-loc loc type) locs))))
;; 		 (push (wt-push-loc form type t) locs)))
;; 	      (ub (push (list 'gen-loc (caddr form) 
;; 			      (let* ((v (fourth form))(tv (third v))) 
;; 				(if (eq (car v) 'var) (cons (car v) tv) tv))) locs))
;;               (structure-ref (push (coerce-loc-structure-ref (cdr form) type) locs))
;;               (SETQ
;; 	       (let* ((vref (caddr form))
;; 		      (form1 (cadddr form))
;; 		      (v (car vref))
;; 		      (vv (cons 'var vref))
;; 		      (vt (if (or (eq t (var-ref v)) (consp (var-ref v)) (var-cb v) (eq (var-kind v) 'global)) vv *value-to-go*)))
;; 		 (cond ((eq vt vv)
;; 			(let ((*value-to-go* vt)) (c2expr* form1))
;; 			(if (eq (car form1) 'LOCATION)
;; 			    (push (coerce-loc (caddr form1) type) locs)
;; 			  (setq forms (list* form (list 'VAR (cadr form) vref) (cdr forms))
;; 				types (list* type  types))))
;; 		       ((setq forms (list* form form1 (cdr forms))
;; 			      types (list* type  types))))));; want (setq types (list* type type (cdr  types))) but type is first of types
;;               (otherwise (push (wt-push-loc form type t) locs))))))

;; (defun inline-args (forms types &optional fun &aux locs ii)
;;   (do ((forms forms (cdr forms))
;;        (types types (cdr types)))
;;       ((endp forms) (reverse locs))
;;       (let ((form (car forms))
;;             (type (car types)))
;; 	(let ((type (adj-cnum-tp type (info-type (cadr form)))))
;;         (case (car form)
;;               (LOCATION (push (coerce-loc (caddr form) type) locs))
;;               (VAR
;; 	       (cond ((args-info-changed-vars (caaddr form) (cdr forms))
;; 		      (cond ((and (member (var-kind (caaddr form)) +c-local-var-types+)
;; 				  (eq type (var-kind (caaddr form))))
;; 			     (let* ((cvar (cs-push type t))(*value-to-go* `(cvar ,cvar)))
;; 			       (wt-nl "{" (rep-type type) "V" cvar "= V"
;; 				      (var-loc (caaddr form)) ";")
;; 			       (push (list 'cvar cvar 'inline-args) locs)
;; 			       (inc-inline-blocks)))
;; 			    ((let* ((temp (wt-c-push type))(*value-to-go* temp))
;; 			       (wt-nl temp "= ")
;; 			       (wt-var (caaddr form) (cadr (caddr form)))
;; 			       (wt ";")
;; 			       (push (coerce-loc temp type) locs)))))
;; 		     ((and (member (var-kind (caaddr form)) +c-local-var-types+)
;; 			   (not (eq type (var-kind (caaddr form)))))
;; 		      (let* ((temp (cs-push type))(*value-to-go* `(cvar ,temp)))
;; 			(wt-nl "V" temp " = "
;; 			       (coerce-loc (cons 'var (caddr form)) type) ";")
;; 			(push (list 'cvar temp) locs)))
;; 		     ((push (coerce-loc (cons 'VAR (caddr form)) type) locs))))
;;               (CALL-GLOBAL
;;                (if (let ((fname (caddr form)))
;; 		     (and (inline-possible fname)
;; 			  (setq ii (get-inline-info
;; 				    fname (cadddr form)
;; 				    (info-type (cadr form)) (sixth form)))
;; 			  (progn  (save-avma ii) t)))
;;                    (let ((loc (get-inline-loc ii (cadddr form))))
;; 		     (cond
;; 		      ((or (and (flag-p (caddr ii) ans)(not *c-gc*)); returns new object
;; 			   (and (member (cadr ii) +c-local-var-types+)
;; 				(not (eq type (cadr ii)))))
;; 		       (let* ((temp (cs-push type))(*value-to-go* `(cvar ,temp)))
;; 			 (wt-nl "V" temp " = " (coerce-loc loc type) ";")
;; 			 (push (list 'cvar temp) locs)))
;; 		      ((or (need-to-protect (cdr forms) (cdr types))
;; 			   ;;if either new form or side effect,
;; 			   ;;we don't want double evaluation
;; 			   (and (flag-p (caddr ii) allocates-new-storage)
;; 				(or (null fun)
;; 				    ;; Any fun such as list,list* which
;; 				    ;; does not cause side effects or
;; 				    ;; do double eval (ie not "@..")
;; 				    ;; could go here.
;; 				    (not (si::memq fun '(list-inline list*-inline)))))
;; 			   (flag-p (caddr ii) is)
;; 			   (and (flag-p (caddr ii) set) ; side-effectp
;; 				(not (null (cdr forms)))))
;; 		       (let (cvar)
;; 			 (cond
;; 			  ((eq type t)
;; 			   (setq cvar (cs-push))
;; 			   (wt-nl "V" cvar "= ")
;; 			   (let ((*value-to-go* `(cvar ,cvar))) (wt-loc loc)))
;; 			  (t (setq cvar (cs-push type t))
;; 			     (wt-nl "{" (rep-type type) "V" cvar "= ")
;; 			     (let ((*value-to-go* `(cvar ,cvar)))
;; 			       (funcall (or (cdr (assoc (promoted-c-type type) +wt-loc-alist+)) 'wt-loc) loc))
;; 			     (inc-inline-blocks)))
;; 			 (wt ";")
;; 			 (push (list 'cvar cvar 'inline-args) locs)))
;; 		      (t (push (coerce-loc loc type) locs))))
;; 		 (let ((temp (if *c-gc* (list 'cvar (cs-push)) (list 'vs (vs-push)))))
;; 		   (let ((*value-to-go* temp)) (c2expr* form))
;; 		   (push (coerce-loc temp type) locs))))
;; ;	      (ub (push (coerce-loc (cons 'var (third (fourth form))) (get (caddr form) 'lisp-type)) locs))
;; 	      (ub (push (list 'gen-loc (caddr form) (let* ((v (fourth form))(tv (third v))) (if (eq (car v) 'var) (cons (car v) tv) tv))) locs))
;;               (structure-ref
;;                (push (coerce-loc-structure-ref (cdr form) type) locs))
;;               (SETQ
;;                (let ((vref (caddr form))
;;                      (form1 (cadddr form)))
;;                  (let ((*value-to-go* (cons 'var vref))) (c2expr* form1))
;;                  (cond ((eq (car form1) 'LOCATION)
;;                         (push (coerce-loc (caddr form1) type) locs))
;;                        (t
;; 			(setq forms (list* form (list 'VAR (cadr form) vref) (cdr forms)))
;; 			;; want (setq types (list* type type (cdr  types)))
;; 			;; but type is first of types
;; 			(setq types (list* type  types))))))
;;               (t (let
;; 		     ((temp
;; 		       (cond ((not *c-gc*) (list 'vs (vs-push)))
;; 			     ((eq type t) (list 'cvar (cs-push)))
;; 			     ((list 'var
;; 				    (make-var :type type :loc (cs-push type)
;; 					      :kind (or (car (member (promoted-c-type type) +c-local-var-types+)) 'object))
;; 				    nil)))))
;; 		   (let ((*value-to-go* temp))
;; 		     (c2expr* form)
;; 		     (push (coerce-loc temp type) locs)))))))))

(defun coerce-loc (loc type)
  (when (eq 'var (when (listp loc) (car loc))) (setf (var-type (cadr loc)) type));FIXME cmp-aref
  (let ((tmp (car (rassoc (promoted-c-type type) *box-alist*))))
    (if tmp (list 'gen-loc tmp loc)
      (let ((tl (cdr (assoc (promoted-c-type type) +coersion-alist+))))
	(if tl (list tl loc) loc)))))

(defun get-inline-loc (ii args &aux (fun (car (cdddr ii))) locs)
  ;;; Those functions that use GET-INLINE-LOC must rebind the variable *VS*.
  (setq locs (inline-args args (car ii) fun))
  (when (and (stringp fun) (char= (char (the string fun) 0) #\@))
    (let ((i 1) (saves nil))
         (declare (fixnum i))
      (do ((char (char (the string fun) i)
                 (char (the string fun) i)))
          ((char= char #\;) (incf i))
          (declare (character char))
          (push (the fixnum (- (char-code char) #.(char-code #\0))) saves)
          (incf i))
      (do ((l locs (cdr l))
           (n 0 (1+ n))
           (locs1 nil))
          ((endp l) (setq locs (reverse locs1)))
          (declare (fixnum n))
          (if (member n saves)
              (let* ((loc (car l)) (loc1 loc) 
		     (coersion (and (consp loc) (cdr (rassoc (car loc) +coersion-alist+))))
		     (loc (if coersion (cadr loc) loc))); remove coersion
                (cond
                 ((and (consp loc)
		       (rassoc (car loc) +inline-types-alist+)
		       (or (member (car loc) '(inline inline-cond))
			   (flag-p (cadr loc) allocates-new-storage)
			   (flag-p (cadr loc) side-effect-p)))
                  (wt-nl "{")
                  (inc-inline-blocks) ;;FIXME -- make sure not losing specificity in coersion
		  (let* ((ck (or (car (rassoc coersion +coersion-alist+)) 'object))
			 (cvar (cs-push ck t)))
                    (push (list 'CVAR cvar) locs1)
		    (unless ck (baboon))
		    (wt (rep-type ck) "V" cvar "= ")
		    (funcall (cdr (assoc ck +wt-loc-alist+)) loc))
                  (wt ";"))
                 (t (push loc1 locs1))))
              (push (car l) locs1)))))

  (let ((others (and (stringp fun) (not (single-type-p (cadr ii))) (not (type>= (cadr ii) '*))
		     (mapcar 'inline-type (cddadr ii)))))
    (list (inline-type (cadr ii))
	  (caddr ii)
	  (if others (cons fun others) fun)
	  locs
	  ))
  )

(defun inline-type (type)
  (or (cdr (assoc (promoted-c-type type) +inline-types-alist+)) 'inline))

(defun get-plist-inline (fname args return-type apnarg inline-list)
  (reduce (lambda (y x)
	    (or y (inline-type-matches fname x args return-type apnarg)))
	  inline-list :initial-value nil))

(defun get-inline-info (fname args return-type &optional apnarg
			      &aux (sui (if *safe-compile* 'inline-safe 'inline-unsafe)))
  (setq args (mapcar (lambda (form) (info-type (cadr form))) args))
  (cond ((get-plist-inline fname args return-type apnarg (get fname sui)))
	((get-plist-inline fname args return-type apnarg (get fname 'inline-always)))
	((cdr (add-fast-link fname (length args) apnarg)))))

;; (defun get-inline-info (fname args return-type &optional apnarg
;; 			      &aux (sui (if *safe-compile* 'inline-safe 'inline-unsafe)))
;;   (setq args (mapcar (lambda (form) (info-type (cadr form))) args))
;;   (cond ((get-plist-inline fname args return-type apnarg (get fname sui)))
;; 	((get-plist-inline fname args return-type apnarg (get fname 'inline-always)))
;; 	((cdr (add-fast-link fname apnarg)))))


(defun adj-cnum-tp (tp ref)
  (if (and (type>= #tcnum tp) (not (type>= #tcnum (promoted-c-type tp))))
      (let ((pr (promoted-c-type ref)))
	(when (and (type>= #tcnum pr) (type>= tp ref)) ref))
    tp))

(defun inline-type-matches (fname inline-info arg-types return-type &optional apnarg
                                        &aux rts (flags (third inline-info)))
  (declare (ignore fname))

  (fix-opt inline-info)

  (when (let ((x (flag-p flags aa))) (if apnarg x (not x)))

    (when (flag-p flags itf)
      (let ((restp (apply (car inline-info) arg-types)))
	(return-from inline-type-matches (when restp `(,(car restp) ,(cadr restp) ,@(cddr inline-info))))))
    (let* ((t1 (mapcar (lambda (x) (or x #tnull)) (cons return-type arg-types)))
	   (t2 (cons (cadr inline-info) (car inline-info)))
	   (last #tt) (ret t))
      (when (dolist (arg-type t1 (or (equal t2 '(*)) (endp t2)))
	      (when (endp t2) (return nil))
	      (let* ((s (unless ret (and (eq (car t2) '*) (not (cdr t2)))))
		     (lst (if (and s (not (eq last #topaque))) #tt last));FIXME
		     (type (if s lst (pop t2)))
		     (arg-type (if ret arg-type (coerce-to-one-value arg-type)))
		     (tp (adj-cnum-tp type arg-type)))
		(unless (type>= tp arg-type) (return nil))
		(setq last type ret nil)
		(push tp rts)))
	(setq rts (nreverse rts))
	(cons (cdr rts) (cons (car rts) (cddr inline-info)))))))

(defun need-to-protect (forms types &aux ii)
  (do ((forms forms (cdr forms))
       (types types (cdr types)))
      ((endp forms) nil)
      (let ((form (car forms)))
        (case (car form)
              (LOCATION)
              (VAR
               (when (or (args-info-changed-vars (caaddr form) (cdr forms))
                         (when (member (var-kind (caaddr form)) +c-local-var-types+)
			   (not (type>= (var-kind (caaddr form)) (car types)))))
		 (return t)))
              (CALL-GLOBAL
               (let ((fname (caddr form)))
                    (when
                     (or (not (inline-possible fname))
                         (null (setq ii (get-inline-info
                                         fname (cadddr form)
                                         (info-type (cadr form)))))
			 (flag-p (caddr ii) allocates-new-storage)
			 (flag-p (caddr ii) set)
			 (flag-p (caddr ii) is)
                         (and (member (cadr ii) +c-local-var-types+)
                              (not (eq (car types) (cadr ii))))
                         (need-to-protect (cadddr form) (car ii)))
                     (return t))))
              (structure-ref
               (when (need-to-protect (list (caddr form)) '(t))
                     (return t)))
              (t (return t))))))

(defun wt-c-push (&optional type)
  (cond (*c-gc* (inc-inline-blocks)
		(let ((tem (cs-push type t)))
		  (wt "{" *volatile* "object V" tem ";")
		  (list 'cvar tem)))
	(t (list 'VS (vs-push)))))

(defun close-inline-blocks ( &aux (bl *inline-blocks*))
  (when (consp bl)
    (if (eql (cdr bl) 'restore-avma) (wt "restore_avma;"))
    (setq bl (car bl)))
  (dotimes** (i bl) (wt "}")))

(si:putprop 'inline 'wt-inline 'wt-loc)
(si:putprop 'inline-cond 'wt-inline-cond 'wt-loc)
(si:putprop 'inline-fixnum 'wt-inline-fixnum 'wt-loc)
(si:putprop 'inline-integer 'wt-inline-integer 'wt-loc)
(si:putprop 'inline-character 'wt-inline-character 'wt-loc)
(si:putprop 'inline-char 'wt-inline-char 'wt-loc)
(si:putprop 'inline-long-float 'wt-inline-long-float 'wt-loc)
(si:putprop 'inline-short-float 'wt-inline-short-float 'wt-loc)
(si:putprop 'inline-dcomplex 'wt-inline-dcomplex 'wt-loc)
(si:putprop 'inline-fcomplex 'wt-inline-fcomplex 'wt-loc)

(defun wt-inline-loc (fun locs &aux (i 0) (max 0) (maxv 0))
  (declare (fixnum i max maxv))
  (let* ((others (and (consp fun) (stringp (car fun)) (cdr fun)))
	 (fun (if (and (consp fun) (stringp (car fun))) (car fun) fun)))
    (cond ((stringp fun)
	   (when (char= (char fun 0) #\@)
	     (setq i 1)
	     (do ()
		 ((char= (char fun i) #\;) (incf i))
               (incf i)))
	   (do ((size (length fun)))
	       ((>= i size))
	       (declare (fixnum size))
	       (let ((char (char fun i)))
		 (declare (character char))
		 (cond ((char= char #\#)
			(let ((ch (char fun (the fixnum (1+ i))))
			      (n 0))
			  (cond 
			   ((eql ch #\n)
			    (wt (length locs)))
			   ((or (eql ch #\*) (eql ch #\?))
			    (let* ((f (char= (char fun (1- i)) #\())
				   (e (char= (char fun (+ 2 i)) #\)))
				   (locs (nthcdr max locs))
				   (locs (or locs (when (eql ch #\?) `((fixnum-value nil 0))))))
			      (dolist (v locs (unless (or f e) (wt ",")))
				(unless f (wt ","))
				(setq f nil)
				(wt-loc v))))
			   ((eql ch #\v)
			    (wt-fixnum-loc
			     (cond ((eq *value-to-go* 'top) (list 'vs-address "base" (cdr (vs-push))))
				   ((and (not (eq *value-to-go* 'return))
					 (not (rassoc *value-to-go* +return-alist+))
					 (not *values-to-go*))
				    (list 'fixnum-value nil 0))
				   (*mv-var*
				    (cond ((>= (var-known-init *mv-var*) 0)
					   (setq *values-to-go* 
						 (nthcdr (var-known-init *mv-var*) *values-to-go*)))
					  (t
					   (unless (boundp '*extend-vs-top*) (baboon))
					   (setq *extend-vs-top* t *values-to-go* nil)))
				    (list 'var *mv-var* nil))
				   ((list 'vs-address "base" (cdr (vs-push)))))))
			   ((setq n (digit-char-p ch))
			    (let* ((ii (+ i 2))
				   (m (when (> (length fun) ii) (digit-char-p (setq ch (char fun ii))))))
			      (when m (setq n (+ (* n 10) m) i (1+ i)))
			      (setq max (max max (1+ n)))
			      (wt-loc (nth n locs))))
			   ((baboon))))
			(incf i 2))
		       ((char= char #\@);FIXME better error checking
			(let* ((n (- (char-code (char fun (1+ i))) #.(char-code #\1)))
			       (n (if (digit-char-p (char fun (+ i 2))) 
				      (+ (* 10 (1+ n)) (- (char-code (char fun (1+ (incf i)))) #.(char-code #\1))) n))
			       (pos (position #\@ fun :start (+ i 2)))
			       (new-fun (subseq fun (+ i 2) pos))
			       (*value-to-go* (or (nth n *values-to-go*)
						  (and (member *value-to-go* '(top return))
						       (list 'vs (vs-push)))
						  'trash))
			       (*values-to-go* nil))
			  (set-loc (list (nth n others) (flags) new-fun locs))
			  (setf maxv (max maxv (1+ n)))
			  (setf i (1+ pos))))
		       (t
			(princ char *compiler-output1*)
			(incf i)))))
	   (setq *values-to-go* (nthcdr maxv *values-to-go*)))
	  ((values (apply fun locs))))))

(defun wt-inline (flags fun locs)
  (declare (ignore flags))
  (wt-inline-loc fun locs))

(defun wt-inline-cond (flags fun locs)
  (declare (ignore flags))
  (wt "(") (wt-inline-loc fun locs) (wt "?Ct:Cnil") (wt ")"))

(defun wt-inline-fixnum (flags fun locs)
  (declare (ignore flags))
  (when (zerop *space*) (wt "CMP"))
  (wt "make_fixnum(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-integer (flags fun locs)
  (declare (ignore flags))
  (wt "make_integer(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-character (flags fun locs)
  (declare (ignore flags))
  (wt "code_char(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-char (flags fun locs)
  (declare (ignore flags))
  (wt "make_fixnum(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-long-float (flags fun locs)
  (declare (ignore flags))
  (wt "make_longfloat(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-short-float (flags fun locs)
  (declare (ignore flags))
  (wt "make_shortfloat(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-fcomplex (flags fun locs)
  (declare (ignore flags))
  (wt "make_fcomplex(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-dcomplex (flags fun locs)
  (declare (ignore flags))
  (wt "make_dcomplex(") (wt-inline-loc fun locs) (wt ")"))

;;; Borrowed from CMPOPT.LSP

(defmacro can-allocate-on-stack ()
  `(and (consp *value-to-go*)
	(eq (car *value-to-go*) 'var)
	(var-dynamic (second *value-to-go*))))

(defun wt-stack-list* (x l &optional n (st "Cnil") (lst "Cnil"))
  (let ((z (or n (length x))))
    (wt-nl "!" z "? Cnil : (alloca_val=alloca((" z ")*sizeof(struct cons)+sizeof(object)),");FIXME double eval
    (wt-nl "({object _b=(void *)alloca_val;if (((unsigned long)_b)&sizeof(_b)) _b++;")
    (wt-nl "{register struct cons *_p=(void *)_b;")
    (cond (n (wt-nl "{struct cons *_e=_p+(" n "-1);")
	     (wt-nl "for (;_p<_e;_p++) {_p->c_car=" st ";_p->c_cdr=(object)(_p+1);}}")
	     (wt-nl "_p->c_car=" lst ";_p->c_cdr=Cnil;}_b;}))"))
	  ((dolist (x x (wt-nl "_p[-1].c_cdr=" l ";}_b;}))"))
	     (wt-nl "_p->c_car=" x ";_p->c_cdr=(object)(_p+1);_p++;"))))))

(defun list-inline (&rest x)
  (cond ((can-allocate-on-stack) (wt-stack-list* x nil))
	((endp (cdr x)) (wt "make_cons(" (car x) ",Cnil)"))
	(t 
	 (wt "list(" (length x))
	 (dolist (loc x (wt #\))) (wt #\, loc)))))

(defun list*-inline (&rest x)
  (if (can-allocate-on-stack)
      (wt-stack-list* (butlast x) (car (last x)))
    (case (length x)
	  (1 (wt (car x)))
	  (2 (wt "make_cons(" (car x) "," (cadr x) ")"))
	  (otherwise
	   (wt "listA(" (length x)) (dolist (loc x) (wt #\, loc)) (wt #\))))))
  
(defun make-list-inline (n)
  (if (can-allocate-on-stack)
      (wt-stack-list* nil nil n)
    (wt "make_list(" n ")")))

(defun cons-inline (x y)
  (if (can-allocate-on-stack) 
      (wt-stack-list* (list x) y)
    (wt "make_cons(" x "," y ")")))

(defun c-cast (aet)
  (or (cdr (assoc aet +c-type-string-alist+)) (baboon)))



;;FIXME -- This set of inlining/type-propagation work makes use of
;;three types of functions per compiled function -- an expander as a
;;compiler-macro, a type propagator, and an (optional) inliner.
;;Traditionally, these tasks were divided among the c1 and c2
;;functions.  The compiler-macros effectively run at a pre-pass1
;;level, enabling simplifications which allow auto-declaration of
;;constant bindings at the lisp level.  This seems logically distinct
;;from the role of the c1 functions, which is promaliry to produce the
;;call tree forms, and so should probably stay.  The type propagator
;;functions are partially redundant with the rfa inliner types,
;;arg-types/return-types in the plist, and
;;proclaimed-arg-types/proclaimed-return-types in the plist.  One
;;cannot, however, enumerate all the bounded integer range propagation
;;information in the older type facilities.  Unlike the latter,
;;however, it appears difficult to automate the generation of such
;;propagator functions from the function definitions themselves,
;;making the overhead of this facility quite large.  The existing
;;inliner records have two difficulties vis a vis inliner functions --
;;1) their functionality is overloaded, producing (lisp) variable type
;;information in result-type-from-args and C type (e.g. var-kind)
;;coersion information in inline-type-matches, and 2) enumerating all
;;the possibilites at a minimum does not scale well, e.g. with the
;;array types.  Still, to go forward efficiently, we are in need of a
;;centralized means of producing the expander, propagator, and inliner
;;from the function definitions themselves.  CM 20050106.
(defun aref-propagator (fn x &rest inds)
  (declare (ignore fn inds))
  (let* ((x (cmp-norm-tp x)))
    (cmp-norm-tp 
     (and (consp x) (member (car x) '(array simple-array))
	  (and (not (eq (cadr x) '*)) (upgraded-array-element-type (nil-to-t (cadr x))))))))

(defun var-array-type (a)
  (when (consp a)
    (cond ((eq (car a) 'var) (var-type (cadr a)))
	  ((eq (car a) 'VV) 
	   (object-type (cdr (aref (car *data*) (cadr a)))))
	  ((eq (car a)  'cvar)
	   (or (cdr (assoc (cadr a) *c-vars*))
	       (car (rassoc (cadr a) *c-vars*)))))))

(setf (symbol-function 'cmp-aref) (symbol-function 'row-major-aref))

(defmacro wt-bv-index (a i)
 `(wt "(((" ,a ")->bv.bv_offset) + " ,i ")"))

(defmacro wt-bv-shift (a i)
  `(progn
     (wt #+clx-little-endian "(7-" "(")
     (wt-bv-index ,a ,i)
     (wt "&0x7)" #+clx-little-endian ")")))

(defun cmp-aref-inline-types (&rest r)
  (let ((art (type-and #tarray (car r))))
    (let ((aet (aref-propagator 'cmp-aref art)))
      (if aet
	  `((,(cmp-norm-tp art) ,#tseqind) ,aet)
	`((t ,#tseqind) t)))))

(defun cmp-aref-inline (a i)
  (let ((at (nil-to-t (type-and #tarray (var-array-type a)))))
    (let ((aet (aref-propagator 'cmp-aref at)))
      (if aet
	  (cond ((eq aet #tbit) 
		 (wt  "(((" (c-cast aet) " *)(" a ")->bv.bv_self)[")
		 (wt-bv-index a i)
		 (wt ">>3]>>")
		 (wt-bv-shift a i) 
		 (wt "&0x1)"))
		((eq aet #tcharacter)
		 (wt  "code_char(((" (c-cast aet) " *)(" a ")->v.v_self)[" i "])"))
		((wt  "((" (c-cast aet) " *)(" a ")->v.v_self)[" i "]")))
	(if *safe-compile*
	    (wt "fLrow_major_aref(" a "," i ")")
	  (wt "((" a ")->v.v_elttype==aet_object ? (" a ")->v.v_self[" i "] : fLrow_major_aref(" a "," i "))"))))))
  
  
(setf (symbol-function 'cmp-aset) (symbol-function 'si::aset1))

(defun cmp-aset-inline-types (&rest r)
  (let ((art (type-and #tarray (car r))))
    (let ((aet (aref-propagator 'cmp-aset art)))
      (if aet
	  `((,(cmp-norm-tp art) ,#tseqind ,aet) ,aet)
	`((t ,#tseqind t) t)))))


	       

(defun cmp-aset-inline (a i j)
  (let ((at (nil-to-t (type-and #tarray (var-array-type a)))))
    (let ((aet (aref-propagator 'cmp-aset at)))
      (if aet
	  (cond ((eq aet #tbit) 
		 (wt  "(" j " ? (((" (c-cast aet) " *)(" a ")->bv.bv_self)[")
		 (wt-bv-index a i)
		 (wt ">>3]|=(1<<")
		 (wt-bv-shift a i)
		 (wt ")) : (((" (c-cast aet) " *)(" a ")->bv.bv_self)[")
		 (wt-bv-index a i)
		 (wt ">>3]&=~(1<<")
		 (wt-bv-shift a i) 
		 (wt ")))"))
		((eq aet #tcharacter)
		 (wt  "code_char((((" (c-cast aet) " *)(" a ")->v.v_self)[" i "]=char_code(" j ")))"))
		((wt  "(((" (c-cast aet) " *)(" a ")->v.v_self)[" i "]=" j ")")))
	(wt "fSaset1(" a "," i "," j ")")))))
  
  
(setf (symbol-function 'cmp-array-dimension) (symbol-function 'array-dimension))
;(proclaim '(ftype (function (t rnkind) seqind) cmp-array-dimension))
(defun cmp-array-dimension-inline-types (&rest r)
  (if (aref-propagator 'cmp-array-dimension (type-and #tarray (car r)))
      `((,(cmp-norm-tp (car r)) ,#trnkind) ,#tseqind)
    `((t ,#trnkind) ,#tseqind)))


;;FIXME lose the normalize-type
(defun cmp-array-dimension-inline (a i)
  (let ((at (nil-to-t (type-and #tarray (var-array-type a)))))
    (let ((aet (and (consp at) (member (car at) '(array simple-array)))))
      (cond ((and (not *safe-compile*) (not aet))
	     (wt "fixint(fLarray_dimension(" a "," i "))"))
	    ((and aet (consp (third at)) (= (length (third at)) 1))
	     (wt "(" a ")->v.v_dim"))
	    ((and (constantp i) (> i 0))
	     (wt "(" a ")->a.a_dims[((unsigned)" i ")]"));FIXME
	    ((wt "(type_of(" a ")==t_array ? (" a ")->a.a_dims[((unsigned)" i ")] : (" a ")->v.v_dim)"))))))

;; (defun cmp-array-dimension-inline (a i)
;;   (let ((at (nil-to-t (type-and #tarray (var-array-type a)))))
;;     (let ((aet (and (consp at) (member (car at) '(array simple-array)))))
;;       (cond ((and (not *safe-compile*) (not aet))
;; 	     (wt "fixint(fLarray_dimension(" a "," i "))"))
;; 	    ((and aet (consp (third at)) (= (length (third at)) 1))
;; 	     (wt "(" a ")->v.v_dim"))
;; 	    ((and (constantp i) (> i 0))
;; 	     (wt "(" a ")->a.a_dims[(" i ")]"))
;; 	    ((wt "(type_of(" a ")==t_array ? (" a ")->a.a_dims[(" i ")] : (" a ")->v.v_dim)"))))))

(defun default-init (type)
  (let ((type (promoted-c-type type)))
    (when (member type +c-local-var-types+)
      (cmpwarn "The default value of NIL is not ~S." type)))
  (c1nil))
