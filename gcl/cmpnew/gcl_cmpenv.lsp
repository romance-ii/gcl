;;-*-Lisp-*-
;;; CMPENV  Environments of the Compiler.
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

(defvar *safe-compile* nil)
(defvar *compiler-check-args* nil)
(defvar *compiler-new-safety* nil)
(defvar *compiler-push-events* nil)
(defvar *speed* 3)
(defvar *space* 0)
(defvar *debug* 0)

;;; Only these flags are set by the user.
;;; If *safe-compile* is ON, some kind of run-time checks are not
;;; included in the compiled code.  The default value is OFF.

(defvar *dlinks* (make-hash-table :test 'equal))

(defun init-env ()
  (setq *tmpsyms* +tmpsyms+)
  (setq *gensym-counter* 0)
  (setq *next-cvar* 0)
  (setq *next-cmacro* 0)
  (setq *next-vv* -1)
  (setq *next-cfun* 0)
  (setq *last-label* 0)
  (clrhash *src-hash*)
  (clrhash *fn-src-fn*)
  (clrhash *objects*)
  (clrhash *dlinks*)
  (setq *local-funs* nil)
  (setq *global-funs* nil)
  (setq *global-entries* nil)
  (setq *undefined-vars* nil)
  (setq *reservations* nil)
  (setq *top-level-forms* nil)
  (setq *non-package-operation* nil)
  (setq *function-declarations* nil)
  (setq *inline-functions* nil)
  (setq *function-links* nil)
  (setq *inline-blocks* 0)
  (setq *notinline* nil))


(defvar *next-cvar* 0)
(defvar *next-cmacro* 0)
(defvar *next-vv* -1)
(defvar *next-cfun* 0)
(defvar *tmp-pack* nil)

;;; *next-cvar* holds the last cvar number used.
;;; *next-cmacro* holds the last cmacro number used.
;;; *next-vv* holds the last VV index used.
;;; *next-cfun* holds the last cfun used.

(defmacro next-cfun () '(incf *next-cfun*))

(defun add-libc (x)
  (add-dladdress (strcat "dl" x) (mdlsym x)))

(defun add-dladdress (n l) 
  (unless (gethash n *dlinks*) 
    (wt-h "static void *" n #+static"=" #+static(symbol-name l) ";")
    (setf (gethash n *dlinks*) t)
    (add-dl `(si::mdl ',(symbol-name l) ',(package-name (symbol-package l)) ,(add-address (concatenate 'string "&" n))))))

(defun add-symbol (symbol) (add-object symbol))
;; (defun add-symbol (symbol)
;;   (let ((x (gethash symbol *objects*)))
;;        (cond (x)
;;              ((push-data-incf symbol)
;; 		(setf (gethash *next-vv* *objects-rev*) symbol)
;; 		(setf (gethash symbol *objects*) *next-vv*)))))

;; Write to a string with all the *print-.. levels bound appropriately.
(defun wt-to-string (x &aux
		       (*compiler-output-data* (make-string-output-stream))
		       *fasd-data*)
  (wt-data1 x)
  (get-output-stream-string *compiler-output-data*))

(defun nani-eq (x y)
  (and (consp x) (consp y)
       (eq (car x) 'si::nani) (eq (car y) 'si::nani)
       (eq (cadr x) (cadr y))))

(defun add-object2 (object)
  (let* ((init (when (contains-sharp-comma object)
		 (if (when (consp object) (eq (car object) '|#,|))
		     (cdr object) (string-to-object (wt-to-string object)))))
	 (object (if (when (consp init) (eq (car init) 'nani)) (nani (cadr init)) object)))
    (cond ((gethash object *objects*))
	  ((push-data-incf (unless init object))
	   (when init (add-init `(setvv ,*next-vv* ,init)))
	   (setf (gethash object *objects*) *next-vv*)))))

;; (defun add-object2 (object)
;;   (let* ((init (when (contains-sharp-comma object)
;; 		 (if (when (consp object) (eq (car object) '|#,|))
;; 		     (cdr object) (string-to-object (wt-to-string object))))))
;;     (cond ((gethash object *objects*))
;; 	  ((push-data-incf (unless init object))
;; 	   (when init (add-init `(setvv ,*next-vv* ,init)))
;; 	   (setf (gethash object *objects*) *next-vv*)))))

(defun add-object (object) 
  (cond ((ltvp object) object)
	((and *compiler-compile* (not *keep-gaz*)) (cons '|#,| `(nani ,(address object))))
	(object)))

;; (defun add-object (object) 
;;   (cond ((when (consp object) (eq (car object) '|#,|)) object)
;; 	((and *compiler-compile* (not *keep-gaz*)) (cons '|#,| `(nani ,(address object))))
;; 	(object)))

(defun add-constant (symbol) 
  (add-object (cons '|#,| symbol)))

(defmacro next-cvar () '(incf *next-cvar*))
(defmacro next-cmacro () '(incf *next-cmacro*))

;;; Tail recursion information.
(defvar *do-tail-recursion* t)
;(defvar *tail-recursion-info* nil)
;;; Tail recursion optimization never occurs if *do-tail-recursion* is NIL.
;;; *tail-recursion-info* holds NIL, if tail recursion is impossible.
;;; If possible, *tail-recursion-info* holds
;;;	( fname  required-arg .... required-arg ),
;;; where each required-arg is a var-object.


(defvar *function-declarations* nil)
;;; *function-declarations* holds :
;;;	(... ( { function-name | fun-object } arg-types return-type ) ...)
;;; Function declarations for global functions are ASSOCed by function names,
;;; whereas those for local functions are ASSOCed by function objects.
;;;
;;; The valid argment type declaration is:
;;;	( {type}* [ &optional {type}* ] [ &rest type ] [ &key {type}* ] )
;;; though &optional, &rest, and &key return types are simply ignored.

;; (defmacro t-to-nil (x) (let ((s (tmpsym))) `(let ((,s ,x)) (if (eq ,s t) nil ,s))))

;; (defmacro nil-to-t (x) `(or ,x t))


(defun is-global-arg-type (x)
  (let ((x (promoted-c-type x)))
    (or (eq x #tt) (member x +c-global-arg-types+))))
(defun is-local-arg-type (x)
  (let ((x (promoted-c-type x)))
    (or (eq x #tt) (member x +c-local-arg-types+))))
(defun is-local-var-type (x)
  (let ((x (promoted-c-type x)))
    (or (eq x #tt) (member x +c-local-var-types+))))

;; (defun coerce-to-one-value (type)
;;   (or (not type) (type-and type t)))

(defun function-arg-types (arg-types) (mapcar 'readable-tp arg-types))
;; (defun function-arg-types (arg-types &aux vararg (types nil) result)
;;   (setq result
;; 	(do ((al arg-types (cdr al))
;; 	     (i 0 (the fixnum (+ 1 i))))
;; 	    ((endp al)
;; 	     (reverse types))
;; 	    (declare (fixnum i))
;; 	    (cond ((or (member (car al) '(&optional &rest &key))
;; 		       (equal (car al) '* ))
;; 		   (setq vararg t)
;; 		   (return (reverse (cons '* types)))))
;; 	    ;; only the first 9 args may have proclaimed type different from T
;; 	    (push       (cond 
;; 			       ((< i 9)
;; 				(let ((tem
;; 				       (type-filter (car al))))
;; 				  (if (is-local-arg-type tem) (nil-to-t (car al)) t)));FIXME
;; 			      (t (if (eq (car al) '*) '* t)))
;; 			types)))
;;   ;;only type t args for var arg so far.
;;   (cond (vararg (do ((v result (cdr v)))
;; 		    ((null v))
;; 		    (setf (car v) (if (eq (car v) '*) '* t)))))
		    
;;   result)


;;; The valid return type declaration is:
;;;	(( VALUES {type}* )) or ( {type}* ).

(defun function-return-type (return-types)
  (cond ((endp return-types) nil)
        ((cmpt return-types)
	 (cmp-norm-tp `(,(car return-types) ,@(function-return-type (cdr return-types)))))
        ((cmpt (car return-types))
	 (cmp-norm-tp `(,(caar return-types) ,@(function-return-type (cdar return-types)))))
	((mapcar 'readable-tp return-types))))
;; 	(t (do ((v return-types (cdr v))
;; 		(result))
;; 	       ((endp v)(or (null v)
;; 			    (warn "The function return type ~s is illegal."
;; 				  return-types))
;; 		(nreverse result))
;; 	     (let ((tem  (if (eq (car v) '*) '* (type-filter (car v)))))
;; 	       (unless (or (not tem) (eq tem '*) (is-local-arg-type tem)) (setq tem t))
;; 	       (push (or (car (member tem '(* t))) (car v)) result))))));FIXME

(defun put-procls (fname arg-types return-types procl)
  (declare (ignore procl))
;  (si::add-hash fname (list arg-types return-types) nil nil nil))
  (unless *compiler-auto-proclaim* (si::add-hash fname (list arg-types return-types) nil nil nil)))

;;   (if (eq arg-types '*)
;;       (remprop fname  'proclaimed-arg-types)
;;     (si:putprop fname  arg-types  'proclaimed-arg-types))

;;   (si:putprop fname return-types  'proclaimed-return-type)

;;   (if procl  (si:putprop fname t 'proclaimed-function)
;;     (remprop fname 'proclaimed-function)))


(defun add-function-proclamation (fname decl list &aux (procl t)
					arg-types return-types)
  (check-type list list)
  (check-type decl list)
  (check-type (cdr decl) list)

  (setq arg-types (if (or (null decl) (eq (car decl) '*)) '(*) (function-arg-types (car decl))))
  (setq return-types (function-return-type (cdr decl)))
  (unless (cmpt return-types)
    (setq return-types (car return-types)))
  (unless (and (listp arg-types) (< (length arg-types) call-arguments-limit))
    (setq procl nil))
  (dolist (fname (cons fname list))
    (let ((x (si::funid-sym-p fname)))
      (if x
	  (put-procls x arg-types return-types procl)
	(warn "The function procl ~s ~s is not valid." fname decl)))))

(defun add-function-declaration (fname arg-types return-types)
  (cond ((symbolp fname)
         (push (list (sch-local-fun fname)
                     (function-arg-types arg-types)
                     (function-return-type return-types))
               *function-declarations*))
        (t (warn "The function name ~s is not a symbol." fname))))

(defun get-arg-types (fname &aux x (y (load-time-value (tmpsym))))
  (cond ((setq x (assoc fname *function-declarations*)) (mapcar 'cmp-norm-tp (cadr x)))
	((setq x (local-fun-p fname)) (caar (fun-call x)))
	((setq x (gethash fname *sigs*)) (mapcar 'cmp-norm-tp (caar x)))
	((setq x (si::sig fname)) (car x))
	((not (symbolp fname)) '(*))
	((not (eq (setq x (get fname 'proclaimed-arg-types y)) y)) (mapcar 'cmp-norm-tp x))
	('(*))))

(defun get-return-type (fname &aux x (y (load-time-value (tmpsym))))
  (cond ((setq x (assoc fname *function-declarations*)) (cmp-norm-tp (caddr x)))
	((setq x (local-fun-p fname)) (cadar (fun-call x)))
	((setq x (gethash fname *sigs*)) (cmp-norm-tp (cadar x)))
	((setq x (si::sig fname)) (cadr x))
	((not (symbolp fname)) '*)
	((not (eq (setq x (get fname 'proclaimed-return-type y)) y)) (cmp-norm-tp x));FIXME
	('*)))

(defun get-sig (fname)
  (list (get-arg-types fname) (get-return-type fname)))

(defun cclosure-p (fname)
  (not 
   (let ((x (or (fifth (gethash fname *sigs*)) (si::props fname))))
     (when x
       (logbitp 0 x)))))

(defun get-local-arg-types (fun &aux x)
  (if (setq x (assoc fun *function-declarations*))
      (cadr x)
      nil))

(defun get-local-return-type (fun &aux x)
  (if (setq x (assoc fun *function-declarations*))
      (caddr x)
      nil))

(defvar *vs-base-ori-used* nil)
(defvar *sup-used* nil)
(defvar *base-used* nil)
(defvar *frame-used* nil)
(defvar *bds-used*   nil)

(defun reset-top ()
  (wt "vs_top=sup;")
  (setq *sup-used* t))

(defmacro base-used () '(setq *base-used* t))

;;; Proclamation and declaration handling.

(defvar *alien-declarations* nil)
(defvar *inline* nil)
(defvar *notinline* nil)

(defun inline-asserted (fname)
  (unless *compiler-push-events*
    (or 
     (member fname *inline*)
     (local-fun-fn fname)
     (get fname 'cmp-inline)
     (member (symbol-package fname) (load-time-value (mapcar 'find-package '(:s |libm| |libc| |libgmp|)))))))

;; (defun inline-asserted (fname)
;;   (unless *compiler-push-events*
;;     (or 
;;      (member fname *inline*)
;;      (local-fun-fn fname)
;;      (get fname 'cmp-inline))))

;; (defun inline-asserted (fname)
;;   (unless *compiler-push-events*
;;     (or 
;;      (member fname *inline*)
;;      (local-fun-fun fname)
;;      (get fname 'cmp-inline))))

(defun inline-possible (fname)
  (cond ((eq fname 'funcall));FIXME
	((eq fname 'apply));FIXME
	((not (or *compiler-push-events*
		  (member fname *notinline*)
		  (get fname 'cmp-notinline))))))

;; (defun inline-possible (fname)
;;   (not (or *compiler-push-events*
;; 	   (member fname *notinline*)
;; 	   (get fname 'cmp-notinline))))

(defun proclaim (decl)
 (declare (optimize (safety 2)))
 (check-type decl list)
 (check-type (cdr decl) list)
 (case (car decl)
       (special
	(dolist (var (cdr decl))
	  (check-type var symbol)
	  (si:*make-special var)))
       (optimize
	(dolist (x (cdr decl))
	  (when (symbolp x) (setq x (list x 3)))
	  (check-type x cons)
	  (check-type (cdr x) cons)
	  (check-type (cadr x) (integer 0 3))
	  (ecase (car x)
		 (debug (setq *debug* (cadr x)))
		 (safety (setq *compiler-check-args* (>= (cadr x) 1))
			 (setq *safe-compile* (>= (cadr x) 2))
			 (setq *compiler-new-safety* (>= (cadr x) 3))
			 (setq *compiler-push-events* (>= (cadr x) 4)))
		 (space (setq *space* (cadr x)))
		 (speed (setq *speed* (cadr x)))
		 (compilation-speed (setq *speed* (- 3 (cadr x)))))))
       (type
	(proclaim-var (cadr decl) (cddr decl)))
       (ftype
	(let* ((d (cdr decl))(def (pop d)))
	  (assert (subtypep def 'function))
	  (when (listp def)
	    (add-function-proclamation (pop d) (cdr def) d))))
       (function
	(add-function-proclamation (cadr decl) (cddr decl) nil))
       (inline
	 (dolist (fun (cdr decl))
	   (check-type fun si::function-identifier)
	   (when (symbolp fun) 
	     (si:putprop fun t 'cmp-inline)
	     (remprop fun 'cmp-notinline))))
       (notinline
	(dolist (fun (cdr decl))
	  (check-type fun si::function-identifier)
	  (when (symbolp fun) 
	    (si:putprop fun t 'cmp-notinline)
	    (remprop fun 'cmp-inline))))
       ((object ignore ignorable)
	(dolist (var (cdr decl))
	  (check-type var si::function-identifier)))
       (declaration
	(dolist (x (cdr decl))
	  (check-type x symbol)
	  (unless (member x *alien-declarations*)
	    (push x *alien-declarations*))))
       (otherwise
	(cond ((check-type (car decl) si::type-spec))
	      ((not (eq '* (cmp-norm-tp (car decl))))
	       (proclaim-var (car decl) (cdr decl)))
	      (t (unless (member (car decl) *alien-declarations*)
		   (warn "The declaration specifier ~s is unknown." (car decl)))
		 (and (symbolp (car decl))
		      (functionp (get (car decl) :proclaim))
		      (dolist (v (cdr decl))
			(funcall (get (car decl) :proclaim) v)))))))
 nil)

(defun proclaim-var (type vl)
  (declare (optimize (safety 2)))
  (check-type vl list)
  (setq type (cmp-norm-tp type))
  (dolist** (var vl)
    (cond ((symbolp var)
           (let ((type1 (get var 'cmp-type))
                 (v (sch-global var)))
	     (let ((t2 (type-and type1 type)))
	       (when (and type type1 (not t2))
		 (warn "Inconsistent type declaration was found for the variable ~s." var))
	       (setq type1 t2))
	     (when v
	       (let ((t2 (type-and type1 (var-type v))))
		 (when (and type1 (var-type v) (not t2))
		   (warn "Inconsistent type declaration was found for the variable ~s." var))
		 (setf type1 t2 (var-type v) type1)))
	     (si:putprop var type1 'cmp-type)))
          ((warn "The variable name ~s is not a symbol." var)))))


(defun max-vtp (tp)
  (let ((n (cmp-norm-tp tp)))
    (if (eq n '*)
	(cmp-norm-tp `(si::type-max (and t ,tp)))
      n)))

(defun c1body (body doc-p &aux ss is ts others cps)
  (multiple-value-bind
   (doc decls ctps body)
   (parse-body-header body (unless doc-p ""))
   (dolist (decl decls)
     (dolist (decl (cdr decl))
       (cmpck (not (consp decl)) "The declaration ~s is illegal." decl)
       (let ((dtype (car decl)))
	 (if (consp dtype)
	     (let* ((dtype (max-vtp dtype))
		    (stype (if (consp dtype) (car dtype) dtype)))
	       (case stype
		     (satisfies (push decl others))
		     (otherwise
		      (dolist (var (cdr decl))
			(cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
			       decl var)
			(push (cons var dtype) ts)))))
	   (let ((stype dtype))
	     (cmpck (not (symbolp stype)) "The declaration ~s is illegal." decl)
	     (case stype
		   (special
		    (dolist (var (cdr decl))
		      (cmpck (not (symbolp var)) "The special declaration ~s contains a non-symbol ~s."
			     decl var)
		      (push var ss)))
		   ((ignore ignorable)
		    (dolist (var (cdr decl))
		      (cmpck (not (symbolp var)) "The ignore declaration ~s contains a non-symbol ~s."
			     decl var)
		      (when (eq stype 'ignorable)
			(push 'ignorable is))
		      (push var is)))
		   ((optimize ftype inline notinline)
		    (push decl others))
		   ((hint type)
		    (cmpck (endp (cdr decl))  "The type declaration ~s is illegal." decl)
		    (let ((type (max-vtp (cadr decl))))
		      (when type
			(dolist (var (cddr decl))
			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s." decl var)
			  (cond ((unless (get var 'tmp) (eq stype 'hint)) (push (cons var type) cps) ;FIXME
				 (push (cons var (global-type-bump type)) ts))
				((push (cons var type) ts)))))))
		   (class
		    (cmpck (cdddr decl) "The type declaration ~s is illegal." decl)
		    (let ((type (max-vtp (or (caddr decl) (car decl)))))
		      (when type
			(let ((var (cadr decl)))
			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
				 decl var)
			  (push (cons var type) ts)))))
		   (object
		    (dolist (var (cdr decl))
		      (cmpck (not (symbolp var)) "The object declaration ~s contains a non-symbol ~s."
			     decl var)
		      (push (cons var 'object) ts)))
		   (:register
		    (dolist (var (cdr decl))
		      (cmpck (not (symbolp var)) "The register declaration ~s contains a non-symbol ~s."
			     decl var)
		      (push (cons var  'register) ts)))
		   ((:dynamic-extent dynamic-extent)
		    (dolist (var (cdr decl))
		      (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
			     decl var)
		      (push (cons var 'dynamic-extent) ts)))
		   (otherwise
		    (let ((type (max-vtp stype)))
		      (unless (eq type t)
			(dolist (var (cdr decl))
			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
				 decl var)
			  (push (cons var type) ts)))))))))))

  (dolist (l ctps) 
    (when (and (cadr l) (symbolp (cadr l))) 
      (let ((tp (max-vtp (caddr l)))) 
	(unless (eq tp t) 
	  (push (cons (cadr l) tp) cps)))))

  (let ((s (> (effective-safety (mapcar (lambda (x) `(declare ,x)) others)) 0)))
    (when cps
      (unless s
;	  (setq body `((let ,(mapcar (lambda (x) (list (car x) (car x))) cps) ,@body)))
	(setq ts (nconc cps ts))))
    (when (and ctps s)
      (setq body (nreconc ctps body))))
  (values body ss ts is others (when doc-p doc) cps)))

;; (defun c1body (body doc-p &aux ss is ts others cps)
;;   (multiple-value-bind
;;    (doc decls ctps body)
;;    (parse-body-header body (unless doc-p ""))
;;    (dolist (decl decls)
;;      (dolist (decl (cdr decl))
;;        (cmpck (not (consp decl)) "The declaration ~s is illegal." decl)
;;        (let ((dtype (car decl)))
;; 	 (if (consp dtype)
;; 	     (let* ((dtype (max-vtp dtype))
;; 		    (stype (if (consp dtype) (car dtype) dtype)))
;; 	       (case stype
;; 		     (satisfies (push decl others))
;; 		     (otherwise
;; 		      (dolist (var (cdr decl))
;; 			(cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 			       decl var)
;; 			(push (cons var dtype) ts)))))
;; 	   (let ((stype dtype))
;; 	     (cmpck (not (symbolp stype)) "The declaration ~s is illegal." decl)
;; 	     (case stype
;; 		   (special
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The special declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push var ss)))
;; 		   ((ignore ignorable)
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The ignore declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (when (eq stype 'ignorable)
;; 			(push 'ignorable is))
;; 		      (push var is)))
;; 		   ((optimize ftype inline notinline)
;; 		    (push decl others))
;; 		   ((hint type)
;; 		    (cmpck (endp (cdr decl))  "The type declaration ~s is illegal." decl)
;; 		    (let ((type (max-vtp (cadr decl))))
;; 		      (when type
;; 			(dolist (var (cddr decl))
;; 			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s." decl var)
;; 			  (push (cons var type) ts)))))
;; 		   (class
;; 		    (cmpck (cdddr decl) "The type declaration ~s is illegal." decl)
;; 		    (let ((type (max-vtp (or (caddr decl) (car decl)))))
;; 		      (when type
;; 			(let ((var (cadr decl)))
;; 			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 				 decl var)
;; 			  (push (cons var type) ts)))))
;; 		   (object
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The object declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push (cons var 'object) ts)))
;; 		   (:register
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The register declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push (cons var  'register) ts)))
;; 		   ((:dynamic-extent dynamic-extent)
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push (cons var 'dynamic-extent) ts)))
;; 		   (otherwise
;; 		    (let ((type (max-vtp stype)))
;; 		      (unless (eq type t)
;; 			(dolist (var (cdr decl))
;; 			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 				 decl var)
;; 			  (push (cons var type) ts)))))))))))

;;   (dolist (l ctps) 
;;     (when (and (cadr l) (symbolp (cadr l))) 
;;       (let ((tp (max-vtp (caddr l)))) 
;; 	(unless (eq tp t) 
;; 	  (push (cons (cadr l) tp) cps)))))

;;   (let ((s (> (effective-safety (mapcar (lambda (x) `(declare ,x)) others)) 0)))
;;     (when cps
;;       (unless s
;; ;	  (setq body `((let ,(mapcar (lambda (x) (list (car x) (car x))) cps) ,@body)))
;; 	(setq ts (nconc cps ts))))
;;     (when (and ctps s)
;;       (setq body (nreconc ctps body))))
;;   (values body ss ts is others (when doc-p doc) cps)))

;; (defun c1body (body doc-p &aux ss is ts others cps)
;;   (multiple-value-bind
;;    (doc decls ctps body)
;;    (parse-body-header body (unless doc-p ""))
;;    (dolist (decl decls)
;;      (dolist (decl (cdr decl))
;;        (cmpck (not (consp decl)) "The declaration ~s is illegal." decl)
;;        (let ((dtype (car decl)))
;; 	 (if (consp dtype)
;; 	     (let* ((dtype (max-vtp dtype))
;; 		    (stype (if (consp dtype) (car dtype) dtype)))
;; 	       (case stype
;; 		     (satisfies (push decl others))
;; 		     (otherwise
;; 		      (dolist (var (cdr decl))
;; 			(cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 			       decl var)
;; 			(push (cons var dtype) ts)))))
;; 	   (let ((stype dtype))
;; 	     (cmpck (not (symbolp stype)) "The declaration ~s is illegal." decl)
;; 	     (case stype
;; 		   (special
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The special declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push var ss)))
;; 		   ((ignore ignorable)
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The ignore declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (when (eq stype 'ignorable)
;; 			(push 'ignorable is))
;; 		      (push var is)))
;; 		   ((optimize ftype inline notinline)
;; 		    (push decl others))
;; 		   ((hint type)
;; 		    (cmpck (endp (cdr decl))  "The type declaration ~s is illegal." decl)
;; 		    (let ((type (max-vtp (cadr decl))))
;; 		      (when type
;; 			(dolist (var (cddr decl))
;; 			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 				 decl var)
;; 			  (cond ((eq stype 'hint) (push (cons var type) cps) 
;; 				 (push (cons var (global-type-bump type)) ts))
;; 				((push (cons var type) ts)))))))
;; 		   (class
;; 		    (cmpck (cdddr decl) "The type declaration ~s is illegal." decl)
;; 		    (let ((type (max-vtp (or (caddr decl) (car decl)))))
;; 		      (when type
;; 			(let ((var (cadr decl)))
;; 			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 				 decl var)
;; 			  (push (cons var type) ts)))))
;; 		   (object
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The object declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push (cons var 'object) ts)))
;; 		   (:register
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The register declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push (cons var  'register) ts)))
;; 		   ((:dynamic-extent dynamic-extent)
;; 		    (dolist (var (cdr decl))
;; 		      (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 			     decl var)
;; 		      (push (cons var 'dynamic-extent) ts)))
;; 		   (otherwise
;; 		    (let ((type (max-vtp stype)))
;; 		      (unless (eq type t)
;; 			(dolist (var (cdr decl))
;; 			  (cmpck (not (symbolp var)) "The type declaration ~s contains a non-symbol ~s."
;; 				 decl var)
;; 			  (push (cons var type) ts)))))))))))

;;   (dolist (l ctps) 
;;     (when (and (cadr l) (symbolp (cadr l))) 
;;       (let ((tp (max-vtp (caddr l)))) 
;; 	(unless (eq tp t) 
;; 	  (push (cons (cadr l) tp) cps)))))

;;   (let ((s (> (effective-safety (mapcar (lambda (x) `(declare ,x)) others)) 0)))
;;     (when cps
;;       (unless s
;; ;	  (setq body `((let ,(mapcar (lambda (x) (list (car x) (car x))) cps) ,@body)))
;; 	(setq ts (nconc cps ts))))
;;     (when (and ctps s)
;;       (setq body (nreconc ctps body))))
;;   (values body ss ts is others (when doc-p doc) cps)))

(defun c1decl-body (decls body &aux dl)
  (let ((*function-declarations* *function-declarations*)
	(*alien-declarations* *alien-declarations*)
	(*notinline* *notinline*)
	(*inline* *inline*)
	(*space* *space*)
	(*compiler-check-args* *compiler-check-args*)
	(*compiler-new-safety* *compiler-new-safety*)
	(*compiler-push-events* *compiler-push-events*)
	(*safe-compile* *safe-compile*))
    (dolist (decl decls dl)
      (case (car decl)
	    (optimize
	     (dolist (d (cdr decl)) (push d dl))
	     (local-compile-decls (cdr decl)))
	    (ftype
	     (if (or (endp (cdr decl))
		     (not (consp (cadr decl)))
		     (not (eq (caadr decl) 'function))
		     (endp (cdadr decl)))
		 (cmpwarn "The function declaration ~s is illegal." decl)
	       (dolist (fname (cddr decl))
		 (add-function-declaration
		  fname (cadadr decl) (cddadr decl)))))
	    (function
	     (if (or (endp (cdr decl))
		     (endp (cddr decl))
		     (not (symbolp (cadr decl))))
		 (cmpwarn "The function declaration ~s is illegal." decl)
	       (add-function-declaration
		(cadr decl) (caddr decl) (cdddr decl))))
	    (inline
	      (dolist (fun (cdr decl))
		(if (symbolp fun)
		    (progn (push (list 'inline fun) dl)
			   (pushnew fun *inline*)
			   (setq *notinline* (remove fun *notinline*)))
		  (cmpwarn "The function name ~s is not a symbol." fun))))
	    (notinline
	     (dolist (fun (cdr decl))
	       (if (symbolp fun)
		   (progn (push (list 'notinline fun) dl)
			  (pushnew fun *notinline*)
			  (setq *inline* (remove fun *inline*)))
		 (cmpwarn "The function name ~s is not a symbol." fun))))
	    (declaration
	     (dolist (x (cdr decl))
	       (if (symbolp x)
		   (unless (member x *alien-declarations*)
		     (push x *alien-declarations*))
		 (cmpwarn "The declaration specifier ~s is not a symbol."
			  x))))
	    (otherwise
	     (unless (member (car decl) *alien-declarations*)
	       (cmpwarn "The declaration specifier ~s is unknown." (car decl))))))
    (let ((c1b (c1progn body)))
      (cond ((null dl) c1b)
	    ((unless *safe-compile* (member (car c1b) '(lit var))) c1b)
	    ((eq (car c1b) 'decl-body) (setf (third c1b) (nunion dl (third c1b))) c1b)
	    ((list 'decl-body (copy-info (cadr c1b)) dl c1b))))))

;; (defun c1decl-body (decls body &aux dl)
;;   (let ((*function-declarations* *function-declarations*)
;; 	(*alien-declarations* *alien-declarations*)
;; 	(*notinline* *notinline*)
;; 	(*inline* *inline*)
;; 	(*space* *space*)
;; 	(*compiler-check-args* *compiler-check-args*)
;; 	(*compiler-new-safety* *compiler-new-safety*)
;; 	(*compiler-push-events* *compiler-push-events*)
;; 	(*safe-compile* *safe-compile*))
;;     (dolist (decl decls dl)
;;       (case (car decl)
;; 	    (optimize
;; 	     (dolist (d (cdr decl)) (push d dl))
;; 	     (local-compile-decls (cdr decl)))
;; 	    (ftype
;; 	     (if (or (endp (cdr decl))
;; 		     (not (consp (cadr decl)))
;; 		     (not (eq (caadr decl) 'function))
;; 		     (endp (cdadr decl)))
;; 		 (cmpwarn "The function declaration ~s is illegal." decl)
;; 	       (dolist (fname (cddr decl))
;; 		 (add-function-declaration
;; 		  fname (cadadr decl) (cddadr decl)))))
;; 	    (function
;; 	     (if (or (endp (cdr decl))
;; 		     (endp (cddr decl))
;; 		     (not (symbolp (cadr decl))))
;; 		 (cmpwarn "The function declaration ~s is illegal." decl)
;; 	       (add-function-declaration
;; 		(cadr decl) (caddr decl) (cdddr decl))))
;; 	    (inline
;; 	      (dolist (fun (cdr decl))
;; 		(if (symbolp fun)
;; 		    (progn (push (list 'inline fun) dl)
;; 			   (pushnew fun *inline*)
;; 			   (setq *notinline* (remove fun *notinline*)))
;; 		  (cmpwarn "The function name ~s is not a symbol." fun))))
;; 	    (notinline
;; 	     (dolist (fun (cdr decl))
;; 	       (if (symbolp fun)
;; 		   (progn (push (list 'notinline fun) dl)
;; 			  (pushnew fun *notinline*)
;; 			  (setq *inline* (remove fun *inline*)))
;; 		 (cmpwarn "The function name ~s is not a symbol." fun))))
;; 	    (declaration
;; 	     (dolist (x (cdr decl))
;; 	       (if (symbolp x)
;; 		   (unless (member x *alien-declarations*)
;; 		     (push x *alien-declarations*))
;; 		 (cmpwarn "The declaration specifier ~s is not a symbol."
;; 			  x))))
;; 	    (otherwise
;; 	     (unless (member (car decl) *alien-declarations*)
;; 	       (cmpwarn "The declaration specifier ~s is unknown." (car decl))))))
;;     (let ((c1b (c1progn body)))
;;       (cond ((null dl) c1b)
;; 	    ((unless *safe-compile* (eq (car c1b) 'lit)) c1b)
;; 	    ((eq (car c1b) 'decl-body) (setf (third c1b) (nunion dl (third c1b))) c1b)
;; 	    ((list 'decl-body (copy-info (cadr c1b)) dl c1b))))))

;; (defun c1decl-body (decls body &aux (dl nil))
;;   (if (null decls)
;;       (c1progn body)
;;     (let ((*function-declarations* *function-declarations*)
;; 	  (*alien-declarations* *alien-declarations*)
;; 	  (*notinline* *notinline*)
;; 	  (*inline* *inline*)
;; 	  (*space* *space*)
;; 	  (*compiler-check-args* *compiler-check-args*)
;; 	  (*compiler-new-safety* *compiler-new-safety*)
;; 	  (*compiler-push-events* *compiler-push-events*)
;; 	  (*safe-compile* *safe-compile*))
;;       (dolist (decl decls dl)
;; 	(case (car decl)
;; 	      (optimize
;; 	       (dolist (d (cdr decl)) (push d dl))
;; 	       (local-compile-decls (cdr decl)))
;;               (ftype
;;                (if (or (endp (cdr decl))
;;                        (not (consp (cadr decl)))
;;                        (not (eq (caadr decl) 'function))
;;                        (endp (cdadr decl)))
;;                    (cmpwarn "The function declaration ~s is illegal." decl)
;; 		 (dolist (fname (cddr decl))
;; 		   (add-function-declaration
;; 		    fname (cadadr decl) (cddadr decl)))))
;;               (function
;;                (if (or (endp (cdr decl))
;;                        (endp (cddr decl))
;;                        (not (symbolp (cadr decl))))
;;                    (cmpwarn "The function declaration ~s is illegal." decl)
;; 		 (add-function-declaration
;; 		  (cadr decl) (caddr decl) (cdddr decl))))
;;               (inline
;; 		(dolist (fun (cdr decl))
;; 		  (if (symbolp fun)
;; 		      (progn (push (list 'inline fun) dl)
;; 			     (pushnew fun *inline*)
;; 			     (setq *notinline* (remove fun *notinline*)))
;; 		    (cmpwarn "The function name ~s is not a symbol." fun))))
;;               (notinline
;;                (dolist (fun (cdr decl))
;; 		 (if (symbolp fun)
;;                      (progn (push (list 'notinline fun) dl)
;;                             (pushnew fun *notinline*)
;; 			    (setq *inline* (remove fun *inline*)))
;; 		   (cmpwarn "The function name ~s is not a symbol." fun))))
;;               (declaration
;;                (dolist (x (cdr decl))
;;                  (if (symbolp x)
;;                      (unless (member x *alien-declarations*)
;; 		       (push x *alien-declarations*))
;; 		   (cmpwarn "The declaration specifier ~s is not a symbol."
;; 			    x))))
;;               (otherwise
;;                (unless (member (car decl) *alien-declarations*)
;;                  (cmpwarn "The declaration specifier ~s is unknown." (car decl))))))
;;       (setq body (c1progn body))
;;       (cond ((null dl) body)
;; 	    ((eq (car body) 'decl-body) (setf (third body) (nunion dl (third body))) body)
;; 	    ((list 'decl-body (copy-info (cadr body)) dl body))))))

(si:putprop 'decl-body 'c2decl-body 'c2)

(defun local-compile-decls (decls)
  (dolist (decl decls)
    (unless (consp decl) (setq decl (list decl 3)))
    (case (car decl)
	  (debug (setq *debug* (cadr decl)))
	  (safety
	   (let* ((tl (this-safety-level))(level (if (>= tl 3) tl (cadr decl))))
	     (declare (fixnum level))
	     (setq *compiler-check-args* (>= level 1)
		   *safe-compile* (>= level 2)
		   *compiler-new-safety* (>= level 3)
		   *compiler-push-events* (>= level 4))));FIXME
	  (space (setq *space* (cadr decl)))
	  (notinline (push (cadr decl) *notinline*))
	  (speed) ;;FIXME
	  (compilation-speed) ;;FIXME
	  (inline (setq *notinline* (remove (cadr decl) *notinline*)))
	  (otherwise (baboon)))))

;; (defun local-compile-decls (decls)
;;   (dolist (decl decls)
;;     (unless (consp decl) (setq decl (list decl 3)))
;;     (case (car decl)
;; 	  (debug (setq *debug* (cadr decl)))
;; 	  (safety
;; 	   (let ((level (cadr decl)))
;; 	     (declare (fixnum level))
;; 	     (setq *compiler-check-args* (or *compiler-check-args* (>= level 1))
;; 		   *safe-compile* (or *safe-compile* (>= level 2))
;; 		   *compiler-new-safety* (or *compiler-new-safety* (>= level 3))
;; 		   *compiler-push-events* (or *compiler-push-events* (>= level 4)))));FIXME
;; 	  (space (setq *space* (cadr decl)))
;; 	  (notinline (push (cadr decl) *notinline*))
;; 	  (speed) ;;FIXME
;; 	  (compilation-speed) ;;FIXME
;; 	  (inline (setq *notinline* (remove (cadr decl) *notinline*)))
;; 	  (otherwise (baboon)))))

(defun c2decl-body (decls body)
  (let ((*compiler-check-args* *compiler-check-args*)
        (*safe-compile* *safe-compile*)
        (*compiler-push-events* *compiler-push-events*)
        (*compiler-new-safety* *compiler-new-safety*)
        (*notinline* *notinline*)
        (*space* *space*)
        (*debug* *debug*))
    (local-compile-decls decls)
    (c2expr body)))

(defun check-vdecl (vnames ts is)
  (dolist (x ts)
    (unless (member (car x) vnames)
      (cmpwarn "Type declaration was found for not bound variable ~s" (car x))))
  (dolist (x is)
    (unless (or (eq x 'ignorable) (member x vnames))
      (cmpwarn "Ignore/ignorable declaration was found for not bound variable ~s." x))))


