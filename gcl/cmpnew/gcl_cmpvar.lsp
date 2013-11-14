;;-*-Lisp-*-
;;; CMPVAR  Variables.
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

(si:putprop 'var 'c2var 'c2)
(si:putprop 'location 'c2location 'c2)
(si:putprop 'setq 'c1setq 'c1special)
(si:putprop 'setq 'c2setq 'c2)
(si:putprop 'progv 'c1progv 'c1special)
(si:putprop 'progv 'c2progv 'c2)
;; (si:putprop 'psetq 'c1psetq 'c1)
;; (si:putprop 'psetq 'c2psetq 'c2)

(si:putprop 'var 'set-var 'set-loc)
(si:putprop 'cvar 'set-cvar 'set-loc)
(si:putprop 'var 'wt-var 'wt-loc)

(defstruct (var (:print-function (lambda (x s i) (s-print 'var (var-name x) (si::address x) s))))
  name		;;; Variable name.
  kind		;;; One of LEXICAL, SPECIAL, GLOBAL, REPLACED, FIXNUM,
  		;;; CHARACTER, LONG-FLOAT, SHORT-FLOAT, and OBJECT.
  ref		;;; Referenced or not.
  		;;; During Pass1, T, NIL, or IGNORE.
  		;;; During Pass2, the vs-address for the variable.
  ref-ccb	;;; Cross closure reference.
  		;;; During Pass1, T or NIL.
  		;;; During Pass2, the ccb-vs for the variable, or NIL.
  loc		;;; For SPECIAL and GLOBAL, the vv-index for variable name.
		;;; For others, this field is used to indicate whether
		;;; to be allocated on the value-stack: OBJECT means
		;;; the variable is declared as OBJECT, and CLB means
		;;; the variable is referenced across Level Boundary and thus
		;;; cannot be allocated on the C stack.  Note that OBJECT is
		;;; set during variable binding and CLB is set when the
		;;; variable is used later, and therefore CLB may supersede
		;;; OBJECT.
  		;;; For REPLACED, the actual location of the variable.
  		;;; For FIXNUM, CHARACTER, LONG-FLOAT, SHORT-FLOAT, and
  		;;; OBJECT, the cvar for the C variable that holds the value.
  		;;; Not used for LEXICAL.
  (dt t)	;;; Declared Type of the variable.
  (type t)	;;; Current Type of the variable.
  (mt t)	;;; Maximum type of the life of this binding
  tag           ;;; Inner tag (to binding) being analyzed if any
  (register 0 :type unsigned-char)  ;;; If greater than specified am't this goes into register.
  (flags    0 :type unsigned-char)  ;;; If variable is declared dynamic-extent
  (space    0 :type char)           ;;; If variable is declared as an object array of this size
  (known-init -1 :type char)        ;;; Number of above known to be implicitly initialized
  store         ;;; keep kind in hashed c1forms
  aliases
  )

(si::freeze-defstruct 'var)

(defun var-dynamic (v);FIXME
  (/= 0 (logand 1 (var-flags v))))
(defun var-reffed (v)
  (/= 0 (logand 2 (var-flags v))))
(defun var-noreplace (v)
  (/= 0 (logand 4 (var-flags v))))
(defun var-set (v)
  (/= 0 (logand 8 (var-flags v))))
(defun var-aliased (v)
  (/= 0 (logand 16 (var-flags v))))

(defun set-var-dynamic (v)
  (setf (var-flags v) (logior 1 (var-flags v))))
(defun set-var-reffed (v)
  (setf (var-flags v) (logior 2 (var-flags v))))
(defun set-var-noreplace (v)
  (setf (var-flags v) (logior 4 (var-flags v))))
(defun set-var-set (v)
  (setf (var-flags v) (logior 8 (var-flags v))))
(defun set-var-aliased (v)
  (setf (var-flags v) (logior 16 (var-flags v))))

(defun unset-var-set (v)
  (setf (var-flags v) (logandc2 (var-flags v) 8)))
(defun unset-var-aliased (v)
  (setf (var-flags v) (logandc2 (var-flags v) 16)))

;;; A special binding creates a var object with the kind field SPECIAL,
;;; whereas a special declaration without binding creates a var object with
;;; the kind field GLOBAL.  Thus a reference to GLOBAL may need to make sure
;;; that the variable has a value.

(defvar *vars* nil)
(defvar *register-min* 4) ;criteria for putting in register.
(defvar *undefined-vars* nil)
(defvar *special-binding* nil)

;;; During Pass 1, *vars* holds a list of var objects and the symbols 'CB'
;;; (Closure Boundary) and 'LB' (Level Boundary).  'CB' will be pushed on
;;; *vars* when the compiler begins to process a closure.  'LB' will be pushed
;;; on *vars* when *level* is incremented.
;;; *GLOBALS* holds a list of var objects for those variables that are
;;; not defined.  This list is used only to suppress duplicated warnings when
;;; undefined variables are detected.

(defun is-rep-referred (var info)
  (let ((rx (var-rep-loc var)))
    (do-referred (v info)
     (let ((ry (var-rep-loc v)))
       (when (or (eql-not-nil (var-loc var) ry)
		 (eql-not-nil (var-loc v) rx)
		 (eql-not-nil rx ry))
	 (return-from is-rep-referred t))))))

(defun c1make-var (name specials ignores types &aux x)

  (let ((var (make-var :name name)))

    (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
    (cmpck (constantp name)     "The constant ~s is being bound." name)
    
    (dolist (v types)
      (when (eq (car v) name)
	(case (cdr v)
	      (object (setf (var-loc var) 'object))
	      (register (setf (var-register var) (+ (var-register var) 100)))
	      (dynamic-extent #+dynamic-extent (set-var-dynamic var))
	      (t (unless (and (not (get (var-name var) 'tmp));FIXME
			      *compiler-new-safety*) 
		   (setf (var-type var) (nil-to-t (type-and (var-type var) (cdr v)))))))))
    
    (cond ((or (member name specials) (si:specialp name))
	   (setf (var-kind var) 'SPECIAL)
	   (setf (var-loc var) (add-symbol name))
	   (when (and (not *compiler-new-safety*) (not (assoc name types)) (setq x (get name 'cmp-type)))
	     (setf (var-type var) x))
	   (setq *special-binding* t))
	  (t
	   (and (boundp '*c-gc*) *c-gc*
		(or (null (var-type var))
		    (eq t (var-type var)))
		(setf (var-loc var) 'object))
	   (setf (var-kind var) 'LEXICAL)))
    (let ((ign (member name ignores)))
      (when ign
	(setf (var-ref var) (if (eq (cadr ign) 'ignorable) 'IGNORABLE 'IGNORE))))
    
    (setf (var-mt var) (var-type var))
    (setf (var-dt var) (var-type var))
    var))

(defun check-vref (var)
  (unless *in-inline*
    (when (and (eq (var-kind var) 'LEXICAL)
	       (not (var-reffed var))
	       (not (var-ref var)));;; This field may be IGNORE or IGNORABLE here.
      (cmpwarn "The variable ~s is not used." (var-name var)))))

(defun var-cb (v)
  (or (var-ref-ccb v) (eq 'clb (var-loc v))))

;; (defun var-cbb (v)
;;   (or (var-ref-ccb v) (eq 'clb (var-loc v)) (eq (var-ref v) 'pb)))

;; (defun c1var (name)
;;   (let ((info (make-info :referred-array (make-array 1 :fill-pointer 0)))
;; ;			 :changed-array +empty-info-array+))
;;         (vref (c1vref name)))
;;     (push-referred (car vref) info)
;;     (setf (info-type info) (if (var-cb (car vref)) (var-dt (car vref)) (var-type (car vref))))
;;     (list 'var info vref)))

;;; A variable reference (vref for short) is a pair
;;;	( var-object  ccb-reference )

(defun find-v (f)
  (when f (car (member f *vars* :key (lambda (x) (when (var-p x) (var-name x)))))))

(defun set-vref (v vl)
  (let ((ol (list (var-ref-ccb v) (var-loc v) (var-ref v))))
    (setf (var-ref-ccb v) (pop vl) (var-loc v) (pop vl) (var-ref v) (car vl))
    ol))

(defun c1prov-expr (form)
  (let* ((v (find-v form))
	 (vl (when v (list (var-ref-ccb v) (var-loc v) (var-ref v))))
	 (e (c1expr form))
	 (nl (when vl (set-vref v vl))))
    (if nl (append e (list nl)) e)))

(defun add-vref (vref info &optional setq)
  (cond ((cadr vref)  (push (car vref) (info-ref-ccb info)))
	((caddr vref) (push (car vref) (info-ref-clb info)))
	((not setq)   (push (car vref) (info-ref     info)))))

;; (defun add-vref (vref info &optional setq)
;;   (cond ((cadr vref) (push (car vref) (info-vref-ccb info)))
;; 	((caddr vref) (push (car vref) (info-vref-clb info)))
;; 	((not setq) (push (car vref) (info-vref info)))))


(defun make-vs (info) (mapcar (lambda (x) (cons x (var-store x))) (remove-if-not 'var-p (info-ref info))))

(defun check-vs (vs &aux (b (member-if-not 'var-p *vars*)))
  (not (member-if-not (lambda (x &aux (v (pop x))(vv (member v *vars*))) 
			(and (when vv (tailp b vv))
			     (when x (unless (eq x +opaque+) (eq (var-store v) x))))) vs)))

(defun c1var (name)
  (let* ((info (make-info))
	 (vref (c1vref name))
	 (c1fv (when (cadr vref) (c1inner-fun-var))))
    (setf (info-type info) (if (or (cadr vref) (caddr vref)) (var-dt (car vref)) (var-type (car vref)))
	  (var-mt (car vref)) (type-or1 (info-type info) (var-mt (car vref))))
    (add-vref vref info)
    (when c1fv
      (add-info info (cadr c1fv)))
    (let ((fmla (exit-to-fmla-p)))
      (cond ((when fmla (type>= #tnull (info-type info))) (c1nil))
	    ((when fmla (type>= #t(not null) (info-type info))) (c1t))
	    ((unless (or (cadr vref) (caddr vref))
	       (let ((tmp (get (var-store (car vref)) 'bindings)))
		 (when tmp
		   (when (check-vs (car (last tmp)))
		     (let* ((f (pop tmp))(i (copy-info (pop tmp))))
		       (setf (info-type i) (info-type info))
		       (list* f i tmp)))))))
	    ((list 'var info vref c1fv (make-vs info)))))))

;; (defun c1var (name &aux tmp)
;;   (let* ((info (make-info))
;; 	 (vref (c1vref name))
;; 	 (c1fv (when (cadr vref) (c1inner-fun-var))))
;;     (setf (info-type info) (if (or (cadr vref) (caddr vref)) (var-dt (car vref)) (var-type (car vref))))
;;     (add-vref vref info)
;;     (when c1fv
;;       (add-info info (cadr c1fv)))
;;     (let ((fmla (exit-to-fmla-p)))
;;       (cond ((when fmla (type>= #tnull (info-type info))) (c1nil))
;; 	    ((when fmla (type>= #t(not null) (info-type info))) (c1t))
;; 	    ((unless (or (cadr vref) (caddr vref))
;; 	       (let ((tmp (get (var-store (car vref)) 'bindings)))
;; 		 (when tmp
;; 		   (unless (member-if-not (lambda (x) (eq (var-store (car x)) (cdr x))) (cdr tmp))
;; 		     ;; (unless (type>= (var-type (car vref)) (info-type (cadar tmp)))
;; 		     ;;   (let ((i (copy-info (cadar tmp))))
;; 		     ;;     (setf (info-type i) (var-type (car vref)) tmp (list (list* (caar tmp) i (cddar tmp))))))
;; 		     (car tmp))))))
;; 	    ((list 'var info vref c1fv))))))

;; (defun c1var (name)
;;   (let* ((info (make-info))
;; 	 (vref (c1vref name))
;; 	 (c1fv (when (cadr vref) (c1inner-fun-var))))
;;     (setf (info-type info) (if (or (cadr vref) (caddr vref)) (var-dt (car vref)) (var-type (car vref))))
;;     (add-vref vref info)
;;     (when c1fv
;;       (add-info info (cadr c1fv)))
;;     (let ((fmla (exit-to-fmla-p)))
;;       (cond ((when fmla (type>= #tnull (info-type info))) (c1nil))
;; 	    ((when fmla (type>= #t(not null) (info-type info))) (c1t))
;; 	    ((list 'var info vref c1fv))))))

;; (defun c1var (name)
;;   (let* ((info (make-info))
;; 	 (vref (c1vref name))
;; 	 (c1fv (when (cadr vref) (c1inner-fun-var))))
;;     (setf (info-type info) (if (or (cadr vref) (caddr vref)) (var-dt (car vref)) (var-type (car vref))))
;;     (add-vref vref info)
;;     (when c1fv
;;       (add-info info (cadr c1fv)))
;;     (let ((fmla (exit-to-fmla-p)))
;;       (cond ((when fmla (type>= #tnull (info-type info))) (c1nil))
;; 	    ((when fmla (type>= #t(member t) (info-type info))) (c1t))
;; 	    ((list 'var info vref c1fv))))))

;; (defun c1var (name)
;;   (let* ((info (make-info))
;; 	 (vref (c1vref name))
;; 	 (c1fv (when (cadr vref) (c1inner-fun-var))))
;;     (setf (info-type info) (if (or (cadr vref) (caddr vref)) (var-dt (car vref)) (var-type (car vref))))
;;     (add-vref vref info)
;;     (when c1fv
;;       (add-info info (cadr c1fv)))
;;     (list 'var info vref c1fv)))

;; (defun c1var (name)
;;   (let* ((info (make-info))
;; 	 (vref (c1vref name)))
;;     (setf (info-type info) (if (var-cb (car vref)) (var-dt (car vref)) (var-type (car vref))))
;;     (push-referred (car vref) info)
;;     (list 'var info vref)))

(defun ref-obs1 (form obs sccb sclb s &aux (i (cadr form)))
  (mapc (lambda (x)
	  (when (member x (info-ref-ccb i))
	    (funcall sccb x))
	  (when (member x (info-ref-clb i))
	    (funcall sclb x))
	  (when (member x (info-ref i))
	    (funcall s x))) obs))
(declaim (inline ref-obs1))

(defvar *fast-ref* t)

(defun ref-obs (form obs sccb sclb s n ns r &optional l &aux vref)
  (cond ((not l)
	 (cond (*fast-ref* (ref-obs1 form obs sccb sclb s))
	       ((let* ((l (list (info-ref (cadr form)) (info-ref-ccb (cadr form)) (info-ref-clb (cadr form))))
		       (l (mapcar (lambda (x) (intersection x obs)) l))
		       (l (mapcar (lambda (y) (mapcar (lambda (x) (cons x nil)) y)) l)))
		  (ref-obs form obs sccb sclb s n ns r l)
		  (let* (y (x (member-if (lambda (x) (setq y (member nil x :key 'cdr))) l)))
		    (when y
		      (cmpwarn "~s ~s ~s referenced in info but not in form" (length (ldiff l x)) ns (funcall n (caar y)))))))))
	((atom form))
	((setq vref (funcall r form))
	 (let* ((v (pop vref))
		(ccb (pop vref))
		(clb (car vref)))
	   (when (member v obs)
	     (cond (ccb (funcall sccb v))
		   (clb (funcall sclb v))
		   ((funcall s v)))
	     (when l
	       (let* ((y (cond (ccb (cadr l))(clb (caddr l))((car l))))(x (assoc v y)))
		 (if x (rplacd x t) (cmpwarn "~s ~s ~s referenced in form but not in info" (if ccb 'cb (if clb 'lb)) ns (funcall n v)))))
	     (keyed-cmpnote (list 'ref (funcall n v)) "~s ~s is referenced with barrier ~s" ns (funcall n v) (if ccb 'cb (if clb 'lb))))
	   (ref-obs (cdddr form) obs sccb sclb s n ns r l)))
	(t (ref-obs (car form) obs sccb sclb s n ns r l) (ref-obs (cdr form) obs sccb sclb s n ns r l))))
(declaim (inline ref-obs))

(defun ref-vars (form vars)
  (ref-obs form vars 
	   (lambda (x) (setf (var-ref-ccb x) t))
	   (lambda (x) (when (eq (var-kind x) 'lexical) (setf (var-loc x) 'clb)) (setf (var-ref x) t))
	   (lambda (x) (setf (var-ref x) t (var-register x) (1+ (var-register x))))
	   'var-name
	   "Var"
	   (lambda (x &aux (y (pop x))) 
	     (when (member y '(var setq))
	       (let ((z (cadr x)))
		 (unless (and (eq y 'setq) (not (cadr z)) (not (caddr z)))
		   z))))))

(defun inner-fun-var (&optional (v *vars*) f &aux (y v) (x (pop v)))
  (cond ((atom v) nil)
	((is-fun-var x) (inner-fun-var v y))
	((eq x 'cb) f)
	((inner-fun-var v f))))

(defun c1inner-fun-var nil
  (let ((*vars* (inner-fun-var)))
    (c1var (var-name (car *vars*)))))
    

(defun local-var (vref &aux (v (pop vref)))
  (unless (or (car vref) (cadr vref))
    v))

(defun get-vbind (var &aux (var (if (when (consp var) (eq 'var (car var))) (local-var (caddr var)) var)))
  (when (var-p var) (var-store var)))

(defun repeatable-var-binding (form)
  (case (car form)
	(var form)
	;; (lit (unless (member-if (lambda (x) (when (stringp x) (>= (si::string-match #v"[a-zA-Z0-9]+\\(" x) 0))) form)
	;;        form))
	))

(defun push-vbind (var form &aux (s (tmpsym))(i (cadr (repeatable-var-binding form))))
  (when (eq 'lexical (var-kind var))
    (unless (eq (var-store var) +opaque+) 
      (when (and i (info-type i) (not (iflag-p (info-flags i) side-effects)) (not (or (info-ref-clb i) (info-ref-ccb i))))
	(setf (get s 'bindings) form))
      (setf (var-store var) s))))

;; (defun push-vbind (var form &aux (s (tmpsym)) (i (when (member (car form) '(lit var)) (cadr form))))
;;   (when (eq 'lexical (var-kind var))
;;     (unless (eq (var-store var) +opaque+) 
;;       (when (and i (info-type i) (not (iflag-p (info-flags i) side-effects)) (not (or (info-ref-clb i) (info-ref-ccb i))))
;; 	(setf (get s 'bindings) form))
;;       (setf (var-store var) s))))

;; (defun push-vbind (var form &aux
;; 		       (s (or (get-vbind form) (tmpsym)))
;; 		       (i (when (eq (car form) 'lit) (cadr form)))
;; 		       (vp (and i (not (eq s +opaque+)) (not (iflag-p (info-flags i) side-effects)) (not (or (info-ref-clb i) (info-ref-ccb i)))))
;; 		       (vs (when vp (remove-if-not 'var-p (info-ref i)))))
;;   (when (eq 'lexical (var-kind var))
;;     (unless (eq (var-store var) +opaque+) 
;;       (when vp (setf (get s 'bindings) (cons form (mapcar (lambda (x) (cons x (var-store x))) vs))))
;;       (setf (var-store var) s))))

;; (defun push-vbind (var form &aux
;; 		       (i (when (eq (car form) 'lit) (cadr form)))
;; 		       (vp (and i (not (iflag-p (info-flags i) side-effects)) (not (or (info-ref-clb i) w(info-ref-ccb i))) 
;; 				(type>= (var-type var) (info-type i))))
;; 		       (vs (when vp (remove-if-not 'var-p (info-ref i))))
;; 		       (s (or (get-vbind form) (tmpsym))))
;;   (unless (eq (var-store var) +opaque+) 
;;     (when vp (setf (get s 'bindings) (cons form (mapcar (lambda (x) (cons x (var-store x))) vs))))
;;     (setf (var-store var) s)))

;; (defun get-vbind (var &aux (var (if (when (consp var) (eq 'var (car var))) (caaddr var) var)))
;;   (when (var-p var) (var-store var)))

;; (defun push-vbind (var form)
;;   (unless (eq (var-store var) +opaque+) (setf (var-store var) (or (get-vbind form) (tmpsym)))))

;; (defun push-vbind (var form)
;;   (setf (var-store var) (or (get-vbind form) (tmpsym))))

(defun get-top-var-binding (bind)
  (labels ((f (l) (member bind l :key (lambda (x) (when (var-p x) (var-store x)))))
	   (r (l) (let* ((var (car l))
			 (nl  (f (cdr l)))
			 (nl  (when (eq nl (member (car nl) *vars*)) nl)))
		    (if (tailp nl (member-if-not 'var-p l)) var (r nl)))))
	  (when bind ;FIXME defvar
	    (unless (eq bind +opaque+)
	      (r (f *vars*))))))

(defun get-var (o &aux (vp (var-p o)))
  (or (get-top-var-binding (if vp (get-vbind o) o)) (when vp o)))

;; (defun get-var (o &aux (vp (var-p o)))
;;   (let ((y (or (get-top-var-binding (if vp (get-vbind o) o)) (when vp o))))
;;     (when y
;;       (unless (eq o y)
;; 	(maybe-tvc-var y t)
;; 	(when vp (maybe-tvc-var o t))))
;;     y))

(defun c1vref (name &aux ccb clb)
  (dolist (var *vars*
               (let ((var (sch-global name)))
                    (unless var
                      (unless (or (si:specialp name) (constantp name)) (undefined-variable name))
                      (setq var (make-var :name name
                                          :kind 'GLOBAL
                                          :loc (add-symbol name)
                                          :type (or (get name 'cmp-type) t)
					  :ref t));FIXME
                      (push var *undefined-vars*))
                    (list var ccb)))
      (cond ((eq var 'cb) (setq ccb t))
            ((eq var 'lb) (setq clb t))
            ((or (eq (var-name var) name) (eq var name))
	     (set-var-reffed var)
	     (keyed-cmpnote (list 'var-ref (var-name var))
			    "Making variable ~s reference with barrier ~s" (var-name var) (if ccb 'cb (if clb 'lb)))
	     (return-from c1vref (list var ccb clb))))))

;; (defun c1vref (name &optional setq &aux ccb clb)
;;   (dolist (var *vars*
;;                (let ((var (sch-global name)))
;;                     (unless var
;;                       (unless (or (si:specialp name) (constantp name)) (undefined-variable name))
;;                       (setq var (make-var :name name
;;                                           :kind 'GLOBAL
;;                                           :loc (add-symbol name)
;;                                           :type (or (get name 'cmp-type) t)
;; 					  :ref t));FIXME
;;                       (push var *undefined-vars*))
;;                     (list var ccb)))
;;       (cond ((eq var 'cb) (setq ccb t))
;;             ((eq var 'lb) (setq clb t))
;;             ((or (eq (var-name var) name) (eq var name))
;; 	     (set-var-reffed var)
;; 	     (keyed-cmpnote (list 'var-ref (var-name var))
;; 			    "Making variable ~s reference with barrier ~s" (var-name var) (if ccb 'cb (if clb 'lb)))
;; 	     (let ((nv (if setq var (get-var var))))
;; 	       (return-from c1vref (if (eq var nv) (list var ccb clb) (c1vref nv setq))))))))

;; (defun c1vref (name &optional setq &aux ccb clb)
;;   (dolist (var *vars*
;;                (let ((var (sch-global name)))
;;                     (unless var
;;                       (unless (or (si:specialp name) (constantp name)) (undefined-variable name))
;;                       (setq var (make-var :name name
;;                                           :kind 'GLOBAL
;;                                           :loc (add-symbol name)
;;                                           :type (or (get name 'cmp-type) t)
;; 					  :ref t));FIXME
;;                       (push var *undefined-vars*))
;;                     (list var ccb)))
;;       (cond ((eq var 'cb) (setq ccb t))
;;             ((eq var 'lb) (setq clb t))
;;             ((or (eq (var-name var) name) (eq var name))
;; 	     (set-var-reffed var)
;; 	     (keyed-cmpnote (list 'var-ref (var-name var))
;; 			    "Making variable ~s reference with barrier ~s" (var-name var) (if ccb 'cb (if clb 'lb)))
;; 	     (return-from c1vref (list (if setq var (get-var var)) ccb clb))))))

;; (defun c1vref (name &aux ccb clb)
;;   (dolist (var *vars*
;;                (let ((var (sch-global name)))
;;                     (unless var
;;                       (unless (or (si:specialp name) (constantp name)) (undefined-variable name))
;;                       (setq var (make-var :name name
;;                                           :kind 'GLOBAL
;;                                           :loc (add-symbol name)
;;                                           :type (or (get name 'cmp-type) t)
;; 					  :ref t));FIXME
;;                       (push var *undefined-vars*))
;;                     (list var ccb)))
;;       (cond ((eq var 'cb) (setq ccb t))
;;             ((eq var 'lb) (setq clb t))
;;             ((eq (var-name var) name)
;; 	     (set-var-reffed var)
;; 	     (keyed-cmpnote (list 'var-ref (var-name var))
;; 			    "Making variable ~s reference with barrier ~s" (var-name var) (if ccb 'cb (if clb 'lb)))
;; 	     (let ((l (list var ccb clb)))
;; 	       (push l (var-store var))
;; 	       (return-from c1vref l))))))

;; (defun c1vref (name &aux ccb clb)
;;   (dolist (var *vars*
;;                (let ((var (sch-global name)))
;;                     (unless var
;;                       (unless (or (si:specialp name) (constantp name)) (undefined-variable name))
;;                       (setq var (make-var :name name
;;                                           :kind 'GLOBAL
;;                                           :loc (add-symbol name)
;;                                           :type (or (get name 'cmp-type) t)
;; 					  :ref t));FIXME
;;                       (push var *undefined-vars*))
;;                     (list var ccb)))
;;       (cond ((eq var 'cb) (setq ccb t))
;;             ((eq var 'lb) (setq clb t))
;;             ((eq (var-name var) name)
;; 	     (set-var-reffed var)
;; 	     (keyed-cmpnote (list 'var-ref (var-name var))
;; 			    "Making variable ~s reference with barrier ~s" (var-name var) (if ccb 'cb (if clb 'lb)))
;;              (return-from c1vref (list var ccb clb))))))

;; (defun c1vref (name &optional noref &aux ccb clb inner)
;;   (dolist (var *vars*
;;                (let ((var (sch-global name)))
;;                     (unless var
;;                       (unless (or (si:specialp name) (constantp name)) (undefined-variable name))
;;                       (setq var (make-var :name name
;;                                           :kind 'GLOBAL
;;                                           :loc (add-symbol name)
;;                                           :type (or (get name 'cmp-type) t)
;; 					  :ref t));FIXME
;;                       (push var *undefined-vars*))
;;                     (list var ccb)))
;;       (cond ((eq var 'cb) (setq ccb t inner (or inner 'cb)))
;;             ((eq var 'lb) (setq clb t inner (or inner 'lb)))
;;             ((eq (var-name var) name)
;;              (when (eq (var-ref var) 'IGNORE)
;; 	       (cmpwarn "The ignored variable ~s is used." name)
;; 	       (unless noref (setf (var-ref var) t)))
;;              (cond (ccb 
;; 		    (ref-inner inner) 
;; 		    (setf (var-ref-ccb var) t));FIXME think noref
;;                    (clb 
;; 		    (when (eq (var-kind var) 'lexical) (setf (var-loc var) 'clb))
;; 		    (setf (var-ref var) t));FIXME
;; 		   (t (unless noref (setf (var-ref var) t))
;; 		      (setf (var-register var) (1+ (var-register var)))))
;;              (return-from c1vref (list var ccb))))))

(defun c2var-kind (var)
  (when (and (eq (var-kind var) 'LEXICAL)
           (not (var-ref-ccb var))
           (not (eq (var-loc var) 'clb)))
    (cond ((eq (var-loc var) 'object) (setf (var-type var) #tt) (var-loc var)) ;FIXME check ok; need *c-vars* and kind to agree
	  ((car (member (var-type var) +c-local-var-types+ :test 'type<=)))
	  ((and (boundp '*c-gc*) *c-gc* 'OBJECT)))))


;; (defun c2var-kind (var)
;;   (if (and (eq (var-kind var) 'LEXICAL)
;;            (not (var-ref-ccb var))
;;            (not (eq (var-loc var) 'clb)))
;;       (if (eq (var-loc var) 'OBJECT)
;;           'OBJECT
;;           (let ((type (var-type var)))
;;                (cond ((car (member type +c-local-var-types+ :test 'type<=)))
;;                      ((and (boundp '*c-gc*) *c-gc* 'OBJECT))
;; 		     (t nil))))
;;       nil)
;;   )

(defun c2var (vref c1fv stores) (declare (ignore c1fv stores)) (unwind-exit (cons 'var vref) nil 'single-value))

;; (defun c2var (vref c1fv) (declare (ignore c1fv)) (unwind-exit (cons 'var vref) nil 'single-value))

;; (defun c2var (vref) (unwind-exit (cons 'var vref) nil 'single-value))

(defun c2location (loc) (unwind-exit loc nil 'single-value))


(defun wt-var (var ccb &optional clb)
  (declare (ignorable clb));FIXME
  (case (var-kind var)
        (LEXICAL (cond (ccb (wt-ccb-vs (var-ref-ccb var)))
                       ((var-ref-ccb var) (wt-vs* (var-ref var)))
		       ((and (eq t (var-ref var)) 
			     (si:fixnump (var-loc var))
			     *c-gc*
			     (eq t (var-type var)))
			(setf (var-kind var) 'object)
			(wt-var var ccb))
                       (t (wt-vs (var-ref var)))))
        (SPECIAL (wt "(" (vv-str (var-loc var)) "->s.s_dbind)"))
        (REPLACED (wt (var-loc var)))
;        (REPLACED (cond ((and (consp (var-loc var)) (info-p (cadr (var-loc var))))FIXME
;			 (let* ((*inline-blocks* 0)(v (c2expr (var-loc var))))(print v)(break)
;			   (unwind-exit (get-inline-loc `((t) t #.(flags) "(#0)") (list v))
;					nil 'single-value)
;			   (close-inline-blocks)))
;			((wt (var-loc var)))))
	(DOWN  (wt-down (var-loc var)))
        (GLOBAL (if *safe-compile*
                    (wt "symbol_value(" (vv-str (var-loc var)) ")")
		  (wt "(" (vv-str (var-loc var)) "->s.s_dbind)")))
        (t (let ((z (cdr (assoc (var-kind var) +wt-c-var-alist+))))
	     (unless z (baboon))
	     (when (and (eq #tfixnum (var-kind var)) (zerop *space*)) 
	       (wt "CMP"))
	     (wt z)
           (wt "(V" (var-loc var) ")")))
        ))

;; When setting bignums across setjmps, cannot use alloca as longjmp
;; restores the C stack.  FIXME -- only need malloc when reading variable
;; outside frame.  CM 20031201
(defmacro bignum-expansion-storage ()
  `(if (and (boundp '*unwind-exit*) (member 'frame *unwind-exit*))
       "gcl_gmp_alloc"
     "alloca"))

(defun set-var (loc var ccb &optional clb)
  (declare (ignore clb))
  (unless (and (consp loc)
               (eq (car loc) 'var)
               (eq (cadr loc) var)
               (eq (caddr loc) ccb))
          (case (var-kind var)
            (LEXICAL (wt-nl)
                     (cond (ccb (wt-ccb-vs (var-ref-ccb var)))
                           ((var-ref-ccb var) (wt-vs* (var-ref var)))
                           (t (wt-vs (var-ref var))))
                     (wt "= " loc ";"))
            (SPECIAL (wt-nl "(" (vv-str (var-loc var)) "->s.s_dbind)= " loc ";"))
            (GLOBAL
             (if *safe-compile*
                 (wt-nl "setq(" (vv-str (var-loc var)) "," loc ");")
                 (wt-nl "(" (vv-str (var-loc var)) "->s.s_dbind)= " loc ";")))
	    (DOWN
	      (wt-nl "") (wt-down (var-loc var))
	      (wt "=" loc ";"))
            (t
	     (cond ((eq (var-kind var) #tinteger)
		    (let ((first (and (consp loc) (car loc)))
			  (n (var-loc var)))
		      (case first
			(inline-fixnum
			 (wt-nl "ISETQ_FIX(V"n",V"n"alloc,")
			 (wt-inline-loc (caddr loc) (cadddr loc)))
			(fixnum-value (wt-nl "ISETQ_FIX(V"n",V"n"alloc,"(caddr loc)))
			(var
			 (cond 
			  ((eq (var-kind (cadr loc)) #tinteger) 
			   (wt "SETQ_II(V"n",V"n"alloc,V" (var-loc (cadr loc)) "," (bignum-expansion-storage)))
			  ((eq (var-kind (cadr loc)) #tfixnum)  
			   (wt "ISETQ_FIX(V"n",V"n"alloc,V" (var-loc (cadr loc))))
			  ((wt "SETQ_IO(V"n",V"n"alloc,"loc "," (bignum-expansion-storage)))))
			(vs (wt "SETQ_IO(V"n",V"n"alloc,"loc ","
				(bignum-expansion-storage)))
			(otherwise
			 (let ((*inline-blocks* 0) (*restore-avma* *restore-avma*))
			   (save-avma '(nil integer))
			   (wt-nl "SETQ_II(V"n",V" n"alloc,")
			   (wt-integer-loc loc)
			   (wt "," (bignum-expansion-storage) ");")
			   (close-inline-blocks))
			 (return-from set-var nil)))
		      (wt ");")))
		   (t 
		    (wt-nl "V" (var-loc var) "= ")
		    (funcall (or (cdr (assoc (var-kind var) +wt-loc-alist+)) (baboon)) loc)
		    (wt ";")))))))

(defun set-cvar (loc cvar)
  (wt-nl "V" cvar "= ")
  (let* ((fn (or (car (rassoc cvar *c-vars*)) (cdr (assoc cvar *c-vars*)) t))
	 (fn (or (car (member fn +c-local-var-types+ :test 'type<=)) 'object))
	 (fn (cdr (assoc fn +wt-loc-alist+))))
    (unless fn (baboon))
    (funcall fn loc))
  (wt ";"))

(defun sch-global (name)
  (dolist (var *undefined-vars* nil)
    (when (eq (var-name var) name) (return-from sch-global var))))

(defun c1add-globals (globals)
  (dolist (name globals)
    (push (make-var :name name
                    :kind 'GLOBAL
                    :loc (add-symbol name)
                    :type (or (get name 'cmp-type) t))
          *vars*)))

(defun c1setq (args)
  (cond ((endp args) (c1nil))
        ((endp (cdr args)) (too-few-args 'setq 2 1))
        ((endp (cddr args)) (c1setq1 (car args) (cadr args)))
        ((do ((pairs args) forms)
             ((endp pairs) (c1expr (cons 'progn (nreverse forms))))
             (cmpck (endp (cdr pairs)) "No form was given for the value of ~s." (car pairs))
             (push (list 'setq (pop pairs) (pop pairs)) forms)))))

;; (defun c1setq (args)
;;   (cond ((endp args) (c1nil))
;;         ((endp (cdr args)) (too-few-args 'setq 2 1))
;;         ((endp (cddr args)) (c1setq1 (car args) (cadr args)))
;;         ((do ((pairs args (cddr pairs))
;;               (forms nil))
;;              ((endp pairs) (c1expr (cons 'progn (reverse forms))))
;;              (cmpck (endp (cdr pairs))
;;                     "No form was given for the value of ~s." (car pairs))
;;              (push (list 'setq (car pairs) (cadr pairs)) forms)))))


(defun llvar-p (v)
  (when (eq (var-kind v) 'lexical)
    (let ((x (member v *vars*))(y (member-if-not 'var-p *vars*)))
      (tailp y x))))

(defun do-setq-tp (v form t1)
  (unless nil ; *compiler-new-safety* FIXME
    (when (llvar-p v)
      (setq t1 (coerce-to-one-value t1))
      (let* ((tp (type-and (var-dt v) t1)))
	(unless (or tp (not (and (var-dt v) t1)))
	  (cmpwarn "Type mismatches between ~s/~s and ~s/~s." (var-name v) (var-dt v) (car form) t1))
	(keyed-cmpnote (list (var-name v) 'type-propagation 'type)
		       "Setting var-type on ~s from ~s to ~s, form ~s, max ~s" 
		       (var-name v) (var-type v) tp (car form) (var-mt v))
	(when (member v *restore-vars-env*)
	  (pushnew (list v (var-type v) (var-store v)) *restore-vars* :key 'car))

	(setf (var-type v) tp)
	(unless (type>= (var-mt v) tp)
	  (setf (var-mt v) (type-and (bbump-tp (type-or1 (var-mt v) tp)) (var-dt v))))))))

;; (defun do-setq-tp (v form t1)
;;   (unless nil ; *compiler-new-safety* FIXME
;;     (when (eq (var-kind v) 'lexical)
;;       (setq t1 (coerce-to-one-value t1))
;;       (let* ((tp (type-and (var-dt v) t1)))
;; 	(unless (or tp (not (and (var-dt v) t1)))
;; 	  (cmpwarn "Type mismatches between ~s/~s and ~s/~s." (var-name v) (var-dt v) (car form) t1))
;; 	(keyed-cmpnote (list (var-name v) 'type-propagation 'type)
;; 		       "Setting var-type on ~s from ~s to ~s, form ~s, max ~s" 
;; 		       (var-name v) (var-type v) tp (car form) (var-mt v))
;; 	(when (member v *restore-vars-env*)
;; 	  (pushnew (list v (var-type v) (var-store v)) *restore-vars* :key 'car))

;; 	(setf (var-type v) tp)
;; 	(unless (type>= (var-mt v) tp)
;; 	  (setf (var-mt v) (type-and (bbump-tp (type-or1 (var-mt v) tp)) (var-dt v))))))))

;; (defun do-setq-tp (v form t1)
;;   (unless nil ; *compiler-new-safety* FIXME
;;     (when (eq (var-kind v) 'lexical)
;;       (setq t1 (coerce-to-one-value t1))
;;       (let* ((tp (type-and (var-dt v) t1)))
;; 	(unless (or tp (not (and (var-dt v) t1)))
;; 	  (cmpwarn "Type mismatches between ~s/~s and ~s/~s." (var-name v) (var-dt v) (car form) t1))
;; 	(keyed-cmpnote (list (var-name v) 'type-propagation 'type)
;; 		       "Setting var-type on ~s from ~s to ~s, form ~s, max ~s" 
;; 		       (var-name v) (var-type v) tp (car form) (var-mt v))
;; 	(when (member v *restore-vars-env*)
;; 	  (pushnew (list v (var-type v) (var-store v)) *restore-vars* :key 'car))

;; 	(when form
;; 	  (keyed-cmpnote (list (var-name v) 'var-store) "~s store set from ~s to ~s" v (var-store v) (or (get-vbind (cadr form)) (tmpsym)))
;; 	  (push-vbind v (cadr form))
;; 	  (maybe-tvc-var v nil))

;; 	(setf (var-type v) tp)
;; 	(unless (type>= (var-mt v) tp)
;; 	  (setf (var-mt v) (type-or1 (var-mt v) tp))
;; 	  (when (var-tag v)
;; 	    (let* ((nmt (bbump-tp (var-mt v)))
;; 		   (nmt (type-and nmt (var-dt v))))
;; 	      (setf (var-mt v) nmt))
;; 	    (pushnew v *tvc*)
;; 	    (when t (throw (var-tag v) v)));(member (var-tag v) *catch-tags*)
;; 	  ;; (let* ((nmt (bbump-tp (type-or1 (var-mt v) tp)))
;; 	  ;; 	 (nmt (type-and nmt (var-dt v))))
;; 	  ;;   (setf (var-mt v) nmt))
;; 	  ;; (when (var-tag v)
;; 	  ;;   (pushnew v *tvc*)
;; 	  ;;   (when (member (var-tag v) *catch-tags*) (throw (var-tag v) v)))
;; 	  )))))

;; (defun do-setq-tp (v form t1)
;;   (unless nil ; *compiler-new-safety* FIXME
;;     (when (eq (var-kind v) 'lexical)
;;       (setq t1 (coerce-to-one-value t1))
;;       (let* ((tp (type-and (var-dt v) t1)))
;; 	(unless (or tp (not (and (var-dt v) t1)))
;; 	  (cmpwarn "Type mismatches between ~s/~s and ~s/~s." (var-name v) (var-dt v) form t1))
;; 	(keyed-cmpnote (list (var-name v) 'type-propagation 'type)
;; 		       "Setting var-type on ~s from ~s to ~s, form ~s, max ~s" 
;; 		       (var-name v) (var-type v) tp form (var-mt v))
;; 	(when (member v *restore-vars-env*)
;; 	  (pushnew (list v (var-type v)) *restore-vars* :key 'car))
;; 	(setf (var-type v) tp)
;; 	(unless (type>= (var-mt v) tp)
;; 	  (setf (var-mt v) (type-or1 (var-mt v) tp))
;; 	  (when (var-tag v)
;; 	    (let* ((nmt (bbump-tp (var-mt v)))
;; 		   (nmt (type-and nmt (var-dt v))))
;; 	      (setf (var-mt v) nmt))
;; 	    (pushnew v *tvc*)
;; 	    (when (member (var-tag v) *catch-tags*) (throw (var-tag v) v))))))))

(defun set-form-type (form type) (sft form type))

;; (defun set-form-type (form type) (setf (info-type (cadr form)) (type-and type (info-type (cadr form)))))
;  (sft form type))  FIXME cannot handle nil return types such as tail recursive calls

(defun sft-block (form block type)
  (cond ((atom form))
	((and (eq (car form) 'return-from) (eq (third form) block))
	 (sft (car (last form)) type))
	(t (sft-block (car form) block type) (sft-block (cdr form) block type))))

(defun sft (form type)
  (let ((it (info-type (cadr form))))
    (unless (type>= type it)
      (let ((nt (type-and type it)))
	(when nt;FIXME
;	  (when (eq form +c1nil+) (break))
	  (setf (info-type (cadr form)) nt)
	  (case (car form)
		(block (sft-block (fourth form) (third form) type))
		((decl-body inline) (sft (car (last form)) type))
		((let let*)
		 (sft (car (last form)) type)
		 (mapc (lambda (x y) (sft y (var-type x)))
		       (caddr form) (cadddr form)))
		(var (do-setq-tp (caaddr form) nil (type-and nt (var-type (caaddr form)))))
		(progn (sft (car (last (third form))) type))
		;; (if 
		;;     (when (ignorable-form (third form));FIXME put third form into progn
		;;       (let ((tt (type-and type (nil-to-t (info-type (cadr (fourth form))))))
		;; 	    (ft (type-and type (nil-to-t (info-type (cadr (fifth form)))))))
		;; 	(unless tt
		;; 	  (sft (fifth form) type)
		;; 	  (setf (car form) 'progn (cadr form) (cadr (fifth form)) (caddr form) 
		;; 		(list (fifth form)) (cdddr form) nil))
		;; 	(unless ft
		;; 	  (sft (fourth form) type)
		;; 	  (setf (car form) 'progn (cadr form) (cadr (fourth form)) (caddr form) 
		;; 		(list (fourth form)) (cdddr form) nil)))))
		))))))

;; (defun sft (form type)
;;   (let ((it (info-type (cadr form))))
;;     (unless (type>= type it)
;;       (let ((nt (type-and type it)))
;; 	(when nt;FIXME
;; ;	  (when (eq form +c1nil+) (break))
;; 	  (setf (info-type (cadr form)) nt)
;; 	  (case (car form)
;; 		(block (sft-block (fourth form) (third form) type))
;; 		((decl-body inline) (sft (car (last form)) type))
;; 		((let let*)
;; 		 (sft (car (last form)) type)
;; 		 (mapc (lambda (x y) (sft y (var-type x)))
;; 		       (caddr form) (cadddr form)))
;; 		(var (do-setq-tp (caaddr form) nil nt))
;; 		(progn (sft (car (last (third form))) type))
;; 		(if 
;; 		    (when (ignorable-form (third form));FIXME put third form into progn
;; 		      (let ((tt (type-and type (nil-to-t (info-type (cadr (fourth form))))))
;; 			    (ft (type-and type (nil-to-t (info-type (cadr (fifth form)))))))
;; 			(unless tt
;; 			  (sft (fifth form) type)
;; 			  (setf (car form) 'progn (cadr form) (cadr (fifth form)) (caddr form) 
;; 				(list (fifth form)) (cdddr form) nil))
;; 			(unless ft
;; 			  (sft (fourth form) type)
;; 			  (setf (car form) 'progn (cadr form) (cadr (fourth form)) (caddr form) 
;; 				(list (fourth form)) (cdddr form) nil)))))))))))

;; (defun sft (form type)
;;   (let ((it (info-type (cadr form))))
;;     (unless (type>= type it)
;;       (let ((nt (type-and type it)))
;; 	(when nt;FIXME
;; 	  (when (eq form +c1nil+) (break))
;; 	  (setf (info-type (cadr form)) nt)
;; 					;)
;; 	  (case (car form)
;; 		(block (sft-block (fourth form) (third form) type))
;; 		((decl-body inline) (sft (car (last form)) type))
;; 		((let let*)
;; 		 (sft (car (last form)) type)
;; 		 (mapc (lambda (x y) (sft y (var-type x)))
;; 		       (caddr form) (cadddr form)))
;; 		(var (do-setq-tp (caaddr form) nil nt))
;; 		(progn (sft (car (last (third form))) type))
;; 		(if 
;; 		    (let ((tt (type-and type (nil-to-t (info-type (cadr (fourth form))))))
;; 			  (ft (type-and type (nil-to-t (info-type (cadr (fifth form)))))))
;; 		      (unless tt
;; 			(sft (fifth form) type)
;; 			(setf (car form) 'progn (cadr form) (cadr (fifth form)) (caddr form) 
;; 			      (list (fifth form)) (cdddr form) nil))
;; 		      (unless ft
;; 			(sft (fourth form) type)
;; 			(setf (car form) 'progn (cadr form) (cadr (fourth form)) (caddr form) 
;; 			      (list (fourth form)) (cdddr form) nil))))))))))
    
;; (defun sft (form type)
;;   (let* ((it (info-type (cadr form)))
;; 	 (nt (type-and type it)))
;; ;    (when (or nt (not it))
;;     (unless (and it (or (eq nt it) (not nt)));FIXME type<=
;;       (when (eq form +c1nil+) (break))
;;       (setf (info-type (cadr form)) nt)
;; ;)
;;       (case (car form)
;; 	    (block (sft-block (fourth form) (third form) type))
;; 	    ((decl-body inline) (sft (car (last form)) type))
;; 	    ((let let*)
;; 	     (sft (car (last form)) type)
;; 	     (mapc (lambda (x y) (sft y (var-type x)))
;; 		   (caddr form) (cadddr form)))
;; 	    (var (do-setq-tp (caaddr form) nil nt))
;; 	    (progn (sft (car (last (third form))) type))
;; 	    (if 
;; 		(let ((tt (type-and type (nil-to-t (info-type (cadr (fourth form))))))
;; 		      (ft (type-and type (nil-to-t (info-type (cadr (fifth form)))))))
;; 		  (unless tt
;; 		    (sft (fifth form) type)
;; 		    (setf (car form) 'progn (cadr form) (cadr (fifth form)) (caddr form) 
;; 			  (list (fifth form)) (cdddr form) nil))
;; 		  (unless ft
;; 		    (sft (fourth form) type)
;; 		    (setf (car form) 'progn (cadr form) (cadr (fourth form)) (caddr form) 
;; 			  (list (fourth form)) (cdddr form) nil))))))))

(defun c1setq1 (name form &aux (info (make-info)) type form1 name1)
  (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
  (cmpck (constantp name) "The constant ~s is being assigned a value." name)
  (setq name1 (c1vref name))
  (when (member (var-kind (car name1)) '(special global));FIXME
    (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))
;  (push-changed (car name1) info)
  (add-vref name1 info t)
  (setq form1 (c1arg form info))

  (when (and (eq (car form1) 'var)
	     (or (eq (car name1) (caaddr form1))
		 (and (var-store (car name1))
		      (eq (var-store (car name1)) (var-store (caaddr form1)))
		      (not (eq +opaque+ (var-store (car name1)))))))
    (return-from c1setq1 form1))

  (unless (and (eq (car form1) 'var) (eq (car name1) (caaddr form1)))
    (push-changed (car name1) info))

  (when (eq (car form1) 'var)
    (unless (eq (caaddr form1) (car name1))
      (pushnew (caaddr form1) (var-aliases (car name1)))))

  (let* ((v (car name1))(st (var-store v)))
    (cond ((and (eq (var-kind v) 'lexical) (or (cadr name1) (caddr name1)))
	   (assert st)
;	   (assert (info-type (cadr form1)))
	   (setq type (info-type (cadr form1)))
	   (setf (get st 'ccb-tp) (type-or1 (get st 'ccb-tp) (info-type (cadr form1)))))
	  (t 
	   (do-setq-tp v (list form form1) (info-type (cadr form1)))
	   (setq type (var-type (car name1)))
	   (push-vbind v form1)
	   (keyed-cmpnote (list (var-name v) 'var-store) "~s store set from ~s to ~s" v st (var-store v)))))

  (unless (eq type (info-type (cadr form1)))
    (let ((info1 (copy-info (cadr form1))))
         (setf (info-type info1) type)
         (setq form1 (list* (car form1) info1 (cddr form1)))))

  (setf (info-type info) type)
  (set-form-type form1 type)
  (let ((c1fv (when (cadr name1) (c1inner-fun-var))))
    (when c1fv (add-info info (cadr c1fv)))
    (list 'setq info name1 form1 c1fv)))

;; (defun c1setq1 (name form &aux (info (make-info)) type form1 name1)
;;   (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
;;   (cmpck (constantp name) "The constant ~s is being assigned a value." name)
;;   (setq name1 (c1vref name t))
;;   (when (member (var-kind (car name1)) '(special global));FIXME
;;     (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))
;;   (push-changed (car name1) info)
;;   (add-vref name1 info t)
;;   (setq form1 (c1arg form info))

;;   (when (eq (car form1) 'var)
;;     (unless (eq (caaddr form1) (car name1))
;;       (pushnew (caaddr form1) (var-aliases (car name1)))))

;;   (do-setq-tp (car name1) (list form form1) (info-type (cadr form1)))
;;   (setq type (var-type (car name1)))

;;   (unless (or (cadr name1) (caddr name1))
;;     (let* ((v (car name1))(st (var-store v)))
;;       (push-vbind v form1)
;;       (keyed-cmpnote (list (var-name v) 'var-store) "~s store set from ~s to ~s" v st (var-store v))))

;;   (unless (eq type (info-type (cadr form1)))
;;     (let ((info1 (copy-info (cadr form1))))
;;          (setf (info-type info1) type)
;;          (setq form1 (list* (car form1) info1 (cddr form1)))))

;;   (setf (info-type info) type)
;;   (set-form-type form1 type)
;;   (let ((c1fv (when (cadr name1) (c1inner-fun-var))))
;;     (when c1fv (add-info info (cadr c1fv)))
;;     (list 'setq info name1 form1 c1fv)))

;; (defun c1setq1 (name form &aux (info (make-info)) type form1 name1)
;;   (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
;;   (cmpck (constantp name) "The constant ~s is being assigned a value." name)
;;   (setq name1 (c1vref name t))
;;   (when (member (var-kind (car name1)) '(special global));FIXME
;;     (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))
;;   (push-changed (car name1) info)
;;   (add-vref name1 info t)
;;   (setq form1 (c1arg form info))

;;   (when (eq (car form1) 'var)
;;     (pushnew (caaddr form1) (var-aliases (car name1))))

;;   (do-setq-tp (car name1) (list form form1) (info-type (cadr form1)))
;;   (setq type (var-type (car name1)))

;;   (let* ((v (car name1))(st (var-store v)))
;;     (push-vbind v form1)
;;     (keyed-cmpnote (list (var-name v) 'var-store) "~s store set from ~s to ~s" v st (var-store v)))

;;   (unless (eq type (info-type (cadr form1)))
;;     (let ((info1 (copy-info (cadr form1))))
;;          (setf (info-type info1) type)
;;          (setq form1 (list* (car form1) info1 (cddr form1)))))

;;   (setf (info-type info) type)
;;   (set-form-type form1 type)
;;   (let ((c1fv (when (cadr name1) (c1inner-fun-var))))
;;     (when c1fv (add-info info (cadr c1fv)))
;;     (list 'setq info name1 form1 c1fv)))

;; (defun c1setq1 (name form &aux (info (make-info)) type form1 name1)
;;   (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
;;   (cmpck (constantp name) "The constant ~s is being assigned a value." name)
;;   (setq name1 (c1vref name t))
;;   (when (member (var-kind (car name1)) '(special global));FIXME
;;     (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))
;;   (push-changed (car name1) info)
;;   (add-vref name1 info t)
;;   (setq form1 (c1arg form info))

;;   (when (eq (car form1) 'var)
;;     (pushnew (caaddr form1) (var-aliases (car name1))))

;;   (do-setq-tp (car name1) (list form form1) (info-type (cadr form1)))
;;   (setq type (var-type (car name1)))

;;   (unless (eq type (info-type (cadr form1)))
;;     (let ((info1 (copy-info (cadr form1))))
;;          (setf (info-type info1) type)
;;          (setq form1 (list* (car form1) info1 (cddr form1)))))

;;   (setf (info-type info) type)
;;   (set-form-type form1 type)
;;   (let ((c1fv (when (cadr name1) (c1inner-fun-var))))
;;     (when c1fv (add-info info (cadr c1fv)))
;;     (list 'setq info name1 form1 c1fv)))

;; (defun c1setq1 (name form &aux (info (make-info)) type form1 name1)
;;   (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
;;   (cmpck (constantp name) "The constant ~s is being assigned a value." name)
;;   (setq name1 (c1vref name))
;;   (when (member (var-kind (car name1)) '(special global));FIXME
;;     (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))
;;   (push-changed (car name1) info)
;;   (add-vref name1 info t)
;;   (setq form1 (c1arg form info))
  
;;   (when (eq (car form1) 'var)
;;     (pushnew (caaddr form1) (var-aliases (car name1))))

;;   (do-setq-tp (car name1) form (info-type (cadr form1)))
;;   (setq type (var-type (car name1)))

;;   (unless (eq type (info-type (cadr form1)))
;;     (let ((info1 (copy-info (cadr form1))))
;;          (setf (info-type info1) type)
;;          (setq form1 (list* (car form1) info1 (cddr form1)))))

;;   (setf (info-type info) type)
;;   (set-form-type form1 type)
;;   (let ((c1fv (when (cadr name1) (c1inner-fun-var))))
;;     (when c1fv (add-info info (cadr c1fv)))
;;     (list 'setq info name1 form1 c1fv)))

;; (defun c1setq1 (name form &aux (info (make-info)) type form1 name1 *c1exit*)
;;   (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
;;   (cmpck (constantp name) "The constant ~s is being assigned a value." name)
;;   (setq name1 (c1vref name))
;;   (when (member (var-kind (car name1)) '(special global));FIXME
;;     (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))
;;   (push-changed (car name1) info)
;;   (add-vref name1 info t)
;;   (setq form1 (c1expr form))
;;   (add-info info (cadr form1))
  
;;   (when (eq (car form1) 'var)
;;     (pushnew (caaddr form1) (var-aliases (car name1))))

;;   (do-setq-tp (car name1) form (info-type (cadr form1)))
;;   (setq type (var-type (car name1)))

;;   (unless (eq type (info-type (cadr form1)))
;;     (let ((info1 (copy-info (cadr form1))))
;;          (setf (info-type info1) type)
;;          (setq form1 (list* (car form1) info1 (cddr form1)))))

;;   (setf (info-type info) type)
;;   (set-form-type form1 type)
;;   (let ((c1fv (when (cadr name1) (c1inner-fun-var))))
;;     (when c1fv (add-info info (cadr c1fv)))
;;     (list 'setq info name1 form1 c1fv)))

;; (defun c1setq1 (name form &aux (info (make-info)) type form1 name1 *c1exit*)
;;   (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
;;   (cmpck (constantp name) "The constant ~s is being assigned a value." name)
;;   (setq name1 (c1vref name t))
;;   (when (member (var-kind (car name1)) '(special global));FIXME
;;     (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))
;;   (push-changed (car name1) info)
;;   (setq form1 (c1expr form))
;;   (add-info info (cadr form1))
  
;;   (when (eq (car form1) 'var)
;;     (pushnew (caaddr form1) (var-aliases (car name1))))

;;   (do-setq-tp (car name1) form (info-type (cadr form1)))
;;   (setq type (var-type (car name1)))

;;   (unless (eq type (info-type (cadr form1)))
;;     (let ((info1 (copy-info (cadr form1))))
;;          (setf (info-type info1) type)
;;          (setq form1 (list* (car form1) info1 (cddr form1)))))

;;   (setf (info-type info) type)
;;   (set-form-type form1 type)
;;   (list 'setq info name1 form1))

;; (defun c2setq (vref form)
;;   (let ((*value-to-go* (cons 'var vref))) (c2expr* form))
;;   (case (car form)
;;         (LOCATION (c2location (caddr form)))
;;         (otherwise (unwind-exit (cons 'var vref)))))

(defun c2setq (vref form c1fv &aux (v (car vref)))
  (declare (ignore c1fv))
  (cond ((or (eq t (var-ref v)) (consp (var-ref v)) (var-cb v) (member (var-kind v) '(special global)));FIXME
	 (push 'var vref)
	 (let ((*value-to-go* vref)) (c2expr* form))
	 (case (car form)
	       (LOCATION (c2location (caddr form)))
	       (otherwise (unwind-exit vref))))
	((c2expr form))))

;; (defun c2setq (vref form &aux (v (car vref)))
;;   (cond ((or (eq t (var-ref v)) (consp (var-ref v)) (var-cb v) (eq (var-kind v) 'global));FIXME
;; 	 (push 'var vref)
;; 	 (let ((*value-to-go* vref)) (c2expr* form))
;; 	 (case (car form)
;; 	       (LOCATION (c2location (caddr form)))
;; 	       (otherwise (unwind-exit vref))))
;; 	((c2expr* form))))

(defun c1progv (args &aux (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'progv 2 (length args)))
  (list 'progv info (c1arg (pop args) info) (c1arg (pop args) info) (c1progn* args info)))

;; (defun c1progv (args &aux symbols values (info (make-info)))
;;   (when (or (endp args) (endp (cdr args)))
;;         (too-few-args 'progv 2 (length args)))
;;   (setq symbols (c1expr* (car args) info))
;;   (setq values (c1expr* (cadr args) info))
;;   (list 'progv info symbols values (c1progn* (cddr args) info)))

(defun c2progv (symbols values body
			&aux (cvar (cs-push t t))
			(*unwind-exit* *unwind-exit*))
  
  (wt-nl "{object symbols,values;")
  (wt-nl "bds_ptr V" cvar "=bds_top;")
  (push cvar *unwind-exit*)
  
  (let ((*vs* *vs*))
    (let ((*value-to-go* (list 'vs (vs-push))))
      (c2expr* symbols)
      (wt-nl "symbols= " *value-to-go* ";"))
    
    (let ((*value-to-go* (list 'vs (vs-push))))
      (c2expr* values)
      (wt-nl "values= " *value-to-go* ";"))
    
    (wt-nl "while(!endp(symbols)){")
    (when *safe-compile*
      (wt-nl "if(type_of(MMcar(symbols))!=t_symbol)")
      (wt-nl
       "FEinvalid_variable(\"~s is not a symbol.\",MMcar(symbols));"))
    (wt-nl "if(endp(values))bds_bind(MMcar(symbols),OBJNULL);")
    (wt-nl "else{bds_bind(MMcar(symbols),MMcar(values));")
    (wt-nl "values=MMcdr(values);}")
    (wt-nl "symbols=MMcdr(symbols);}")
    (setq *bds-used* t))
  (c2expr body)
  (wt "}"))

;; (defun c1psetq (args &aux vrefs forms (info (make-info :type #tnull)));FIXME to setq
;;   (do ((l args (cddr l)))
;;       ((endp l))
;;       (cmpck (not (symbolp (car l)))
;;              "The variable ~s is not a symbol." (car l))
;;       (cmpck (constantp (car l))
;;              "The constant ~s is being assigned a value." (car l))
;;       (cmpck (endp (cdr l))
;;              "No form was given for the value of ~s." (car l))
;;       (let* ((vref (c1vref (car l)))
;;              (form (c1arg (cadr l) info))
;;              (type (type-and (var-dt (car vref)) (info-type (cadr form)))))

;; 	(when (eq (car form) 'var)
;; 	  (pushnew (caaddr form) (var-aliases (car vref))))

;; 	(when (member (var-kind (car vref)) '(special global));FIXME
;; 	  (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))

;; 	(do-setq-tp (car vref) (cadr l) (info-type (cadr form)))
;; 	(setq type (var-type (car vref)))

;; 	(unless (equal type (info-type (cadr form)))
;; 	  (set-form-type form type))
;; ;	  (let ((info1 (copy-info (cadr form))))
;; ;	    (setf (info-type info1) type)
;; ;	    (setq form (list* (car form) info1 (cddr form)))))
;; 	(push vref vrefs)
;; 	(push form forms)
;; 	(push-changed (car vref) info)))
;;   (list 'psetq info (reverse vrefs) (reverse forms)))

;; (defun c1psetq (args &aux (vrefs nil) (forms nil) *c1exit*
;;                           (info (make-info :type #tnull)))
;;   (do ((l args (cddr l)))
;;       ((endp l))
;;       (cmpck (not (symbolp (car l)))
;;              "The variable ~s is not a symbol." (car l))
;;       (cmpck (constantp (car l))
;;              "The constant ~s is being assigned a value." (car l))
;;       (cmpck (endp (cdr l))
;;              "No form was given for the value of ~s." (car l))
;;       (let* ((vref (c1vref (car l)))
;;              (form (c1expr (cadr l)))
;;              (type (type-and (var-dt (car vref)) (info-type (cadr form)))))

;; 	(when (eq (car form) 'var)
;; 	  (pushnew (caaddr form) (var-aliases (car vref))))

;; 	(when (member (var-kind (car vref)) '(special global));FIXME
;; 	  (setf (info-flags info) (logior (iflags side-effects) (info-flags info))))

;; 	(do-setq-tp (car vref) (cadr l) (info-type (cadr form)))
;; 	(setq type (var-type (car vref)))

;; 	(unless (equal type (info-type (cadr form)))
;; 	  (set-form-type form type))
;; ;	  (let ((info1 (copy-info (cadr form))))
;; ;	    (setf (info-type info1) type)
;; ;	    (setq form (list* (car form) info1 (cddr form)))))
;; 	(push vref vrefs)
;; 	(push form forms)
;; 	(push-changed (car vref) info)
;; 	(add-info info (cadar forms))))
;;   (list 'psetq info (reverse vrefs) (reverse forms)))

;; (defun c2psetq (vrefs forms &aux (*vs* *vs*) (saves nil) (blocks 0))
;;   (dolist (vref vrefs)
;;     (if (or (args-info-changed-vars (car vref) (cdr forms))
;;             (args-info-referred-vars (car vref) (cdr forms)))
;;         (case (caar forms)
;;           (LOCATION (push (cons vref (caddar forms)) saves))
;;           (otherwise
;;             (if (assoc (var-kind (car vref)) +return-alist+)
;;                 (let* ((kind (var-kind (car vref)))
;;                        (cvar (cs-push (var-type (car vref)) t))
;;                        (temp (list 'var (make-var :kind kind :type (var-type (car vref)) :loc cvar) nil)))
;;                   (wt-nl "{" *volatile* (rep-type kind) "V" cvar ";")
;;                   (incf blocks)
;;                   (let ((*value-to-go* temp)) (c2expr* (car forms)))
;;                   (push (cons vref temp) saves))
;;                 (let ((*value-to-go* (list 'vs (vs-push))))
;;                   (c2expr* (car forms))
;;                   (push (cons vref *value-to-go*) saves)))))
;;         (let ((*value-to-go* (cons 'var vref))) (c2expr* (car forms))))
;;     (pop forms))
;;   (dolist** (save saves) (set-var (cdr save) (caar save) (cadar save)))
;;   (dotimes (i blocks) (wt "}"))
;;   (unwind-exit nil)
;;   )

(defun wt-var-decl (var)
  (cond ((var-p var)
	 (let ((n (var-loc var)))
	   (when (eq (var-kind var) #tinteger) (wt "IDECL("))
	   (wt *volatile* (register var) (rep-type (var-kind var)) "V" n )
	   (when (eq (var-kind var) #tinteger) (wt ",V"n"space,V"n"alloc)"))
	   (wt ";")))
        (t (wfs-error))))
