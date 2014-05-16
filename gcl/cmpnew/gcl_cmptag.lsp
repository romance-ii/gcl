;; -*-Lisp-*-
;;; CMPTAG  Tagbody and Go.
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


(si:putprop 'tagbody 'c1tagbody 'c1special)
(si:putprop 'tagbody 'c2tagbody 'c2)

(si:putprop 'go 'c1go 'c1special)
(si:putprop 'go 'c2go 'c2)

(defstruct tag
           name			;;; Tag name.
           ref			;;; Referenced or not.  T or NIL.
           ref-clb		;;; Cross local function reference.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the vs-address for the
           			;;; tagbody id, or NIL.
           ref-ccb		;;; Cross closure reference.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the vs-address for the
           			;;; block id, or NIL.
           label		;;; Where to jump.  A label.
           unwind-exit		;;; Where to unwind-no-exit.
           var			;;; The tag-name holder.  A VV index.
	   switch               ;;; tag for switch.  A fixnum or 'default
           )

(si::freeze-defstruct 'tag)

(defvar *tags* nil)

;;; During Pass 1, *tags* holds a list of tag objects and the symbols 'CB'
;;; (Closure Boundary) and 'LB' (Level Boundary).  'CB' will be pushed on
;;; *tags* when the compiler begins to process a closure.  'LB' will be pushed
;;; on *tags* when *level* is incremented.



(defun jumps-to-p (clause tag-name &aux tem)
;;Does CLAUSE have a go TAG-NAME in it?
  (cond ((atom clause)nil)
	((and (eq (car clause) 'go)
	      (tag-p (setq tem (cadddr (cdr clause))))
	      (eq (tag-name tem) tag-name)))
	(t (or (jumps-to-p (car clause) tag-name)
	       (jumps-to-p (cdr clause) tag-name)))))

(defvar *reg-amount* 60)
;;amount to increase var-register for each variable reference in side a loop

(defun add-reg1 (form)
;;increase the var-register in FORM for all vars
  (cond ((atom form)
	 (cond ((typep form 'var)
		 (setf (var-register form)
		      (the fixnum (+ (the fixnum (var-register form))
				      (the fixnum *reg-amount*))))
		)))
	(t (add-reg1 (car form))
	   (add-reg1 (cdr form)))))
	 

(defun add-loop-registers (tagbody)
;;Find a maximal iteration interval in TAGBODY from first to end
;;then increment the var-register slot.
  (do ((v tagbody (cdr v))
       (end nil)
       (first nil))
      ((null v)
       (do ((ww first (cdr ww)))
	   ((eq ww end)(add-reg1 (car ww)))
	   (add-reg1 (car ww))))
   (cond ((typep (car v) 'tag)
	  (or first (setq first v))
	  (do ((w (cdr v) (cdr w))
	       (name (tag-name (car v))))
	      ((null w) )
	      (cond ((jumps-to-p (car w) name)
		     (setq end w))))))))


(defvar *ttl-tags* nil)

(defun ref-tags (form tags)
  (ref-obs form tags 
	   (lambda (x) (setf (tag-ref-ccb x) t))
	   (lambda (x) (setf (tag-ref-clb x) t))
	   (lambda (x) (setf (tag-ref x) t))
	   'tag-name
	   "Tag"
	   (lambda (x &aux (y (pop x))) (when (eq y 'go) (cdr x)))))

;; (defun ref-tags1 (form tags &aux (i (cadr form)))
;;   (dolist (tag tags)
;;     (when (member tag (info-tref-ccb i))
;;       (setf (tag-ref-ccb tag) t))
;;     (when (member tag (info-tref-clb i))
;;       (setf (tag-ref-clb tag) t))
;;     (when (member tag (info-tref i))
;;       (setf (tag-ref tag) t))))

;; (defun ref-tags (form tags &optional l)
;;   (cond ((not l) 
;; 	 (cond (*fast-ref* (ref-tags1 form tags))
;; 	       ((let* ((l (list (info-tref (cadr form)) (info-tref-ccb (cadr form)) (info-tref-clb (cadr form))))
;; 		       (l (mapcar (lambda (x) (intersection x tags)) l))
;; 		       (l (mapcar (lambda (y) (mapcar (lambda (x) (cons x nil)) y)) l)))
;; 		  (ref-tags form tags l)
;; 		  (let* (y (x (member-if (lambda (x) (setq y (member nil x :key 'cdr))) l)))
;; 		    (when y
;; 		      (cmpwarn "~s Tag ~s reffed in info but not in form" (length (ldiff l x)) (tag-name (caar y)))))))))
;; 	((atom form))
;; 	((eq (car form) 'go)
;; 	 (let* ((tref (cddr form))
;; 		(tag (pop tref))
;; 		(ccb (pop tref))
;; 		(clb (car tref)))
;; 	   (when (member tag tags)
;; 	     (cond (ccb (setf (tag-ref-ccb tag) t) 
;; 			(let* ((x (cadr l))(x (assoc tag x)))
;; 			  (if x (rplacd x t) (cmpwarn "ccb Tag ~s reffed in form but not in info" (tag-name tag)))))
;; 		   (clb (setf (tag-ref-clb tag) t)
;; 			(let* ((x (caddr l))(x (assoc tag x))) 
;; 			  (if x (rplacd x t) (cmpwarn "clb Tag ~s reffed in form but not in info" (tag-name tag)))))
;; 		   ((setf (tag-ref tag) t)
;; 		    (let* ((x (car l))(x (assoc tag x))) 
;; 		      (if x (rplacd x t) (cmpwarn "nil Tag ~s reffed in form but not in info" (tag-name tag))))))
;; 	     (keyed-cmpnote (list 'tag-ref (tag-name tag)) "Tag is referred with barrier ~s" (tag-name tag) (if ccb 'cb (if clb 'lb))))
;; 	   (ref-tags tref tags l)));FIXME?
;; 	(t (ref-tags (car form) tags l) (ref-tags (cdr form) tags l))))

;FIXME separate pass with no repetitive allocation
(defvar *bt* nil)

(defun tst (y x &aux (z (eq (car x) y))) 
  (unless z
    (keyed-cmpnote (list 'tagbody-iteration) "Iterating tagbody at ~s ~x on ~s conflicts" (tag-name y) (address y) (length x))
    (mapc (lambda (x &aux (v (pop x))) 
	    (keyed-cmpnote (list (var-name v) 'tagbody-iteration)
			   "    Iterating tagbody: setting ~s type ~s to ~s, store ~s to ~s"
			   v (var-type v) (car x) (var-store v) (cadr x))
	    (setf (var-type v) (car x) (var-store v) (cadr x))) x))
  (when z x))

(defun pt (y x) (or (tst y (with-restore-vars (catch y (prog1 (cons y (pr x)) (keep-vars))))) (pt y x)))

;; (defun pt (y x &optional (ws *warning-note-stack*))
;;   (or (tst y (with-restore-vars (catch y (prog1 (cons y (pr x)) (keep-vars))))) (pt y x (setq *warning-note-stack* ws))))

(defun lvars (&aux (v (member-if-not 'var-p *vars*)))
  (if v (ldiff *vars* v) *vars*))

(defun mch nil
;  (mapcar (lambda (x) (list x (var-type x) (var-store x) (mcpt (var-type x)))) (lvars)))
  (mapcar (lambda (x) (list x (var-type x) (var-store x) (mcpt (var-type x)))) (remove-if-not 'var-p *vars*)))

;; (defun mch nil
;;   (mapcar (lambda (x) (list x (var-type x) (var-store x))) (remove-if-not 'var-p *vars*)))

(defun pr (x &aux (y (member-if 'tag-p x))) 
  (nconc (mapcar 'c1arg (ldiff x y)) 
	 (when y (let* ((z (pop y))(*bt* (cons (cons z (mch)) *bt*))) (pt z y)))))


(defun nttl-tags (body &aux (x (car body))(y (when (tag-p x) (tag-name x))))
  (if (when (symbolp y) (get y 'ttl-tag))
      (cons (list x *vars*) *ttl-tags*)
    *ttl-tags*))

(defun c1tagbody (body &aux (info (make-info :type #tnull)))

  (let* ((body (mapcar (lambda (x) (if (or (symbolp x) (integerp x)) (make-tag :name x) x)) body))
	 (tags (remove-if-not 'tag-p body))
	 (body (let* ((*tags* (append tags *tags*))
		      (*ttl-tags* (nttl-tags body)))
		  (pr body)))
	 (body (mapc (lambda (x) (unless (tag-p x) (ref-tags x tags))) body))
	 (ref-clb (remove-if-not 'tag-ref-clb tags))
	 (ref-ccb (remove-if-not 'tag-ref-ccb tags))
	 (tagsc (union ref-clb ref-ccb))
	 (tags (union (remove-if-not 'tag-ref tags) tagsc))
	 (body (remove-if-not (lambda (x) (if (tag-p x) (member x tags) t)) body)))
	 
    (mapc (lambda (x) (setf (tag-var x) (add-object (tag-name x)))) tagsc)
    (if tagsc (incf *setjmps*) (add-loop-registers body))
    (when ref-ccb (mapc (lambda (x) (setf (tag-ref-ccb x) t)) ref-clb));FIXME?
    (mapc (lambda (x) (unless (tag-p x) (add-info info (cadr x)))) body)
    (let ((x (car (last body))))
      (unless (or (not x) (tag-p x) (info-type (cadr x)))
	(setf (info-type info) nil)))

    (if tags
	`(tagbody ,info ,(when ref-clb t) ,(when ref-ccb t) ,body)
      (let* ((v (car (last body)))
	     (v (if (when v (not (info-type (cadr v)))) body (nconc body (list (c1nil))))))
	(if (cdr v) `(progn ,info ,v) (car v))))))

;; (defun c1tagbody (body &aux (otags *tags*) (*tags* *tags*) (*ttl-tags* *ttl-tags*) popv
;; 		       (info (make-info :type #tnull)) (nt (tmpsym)))

;;   (setq body
;;         (mapcar
;;          (lambda (x)
;; 	   (cond ((or (symbolp x) (integerp x)) (car (push (make-tag :name x :ref nil :ref-ccb nil :ref-clb nil :label nt) *tags*)))
;; 		 ((tag-p x) (car (push x *tags*)))
;; 		 (x)))
;;          body))

;;   (let* ((x (car body))
;; 	 (y (when (tag-p x) (tag-name x)))
;; 	 (y (when (symbolp y) (get y 'ttl-tag))))
;;     (when y
;;       (push (list x *vars*) *ttl-tags*)))

;;   (setq body 
;; 	(nreverse 
;; 	 (let* (nb 
;; 		(ob body)
;; 		(ft (do (l) ((or (not (setq l (pop ob))) (tag-p l)) l)
;; 			    (push (c1arg l) nb))))
;; 	   (if (not ft) nb
;; 	     (let ((nb (cons ft nb)) vl)
;; 	       (dolist (v *vars*) (when (var-p v) 
;; 				    (push (list v (var-mt v) (var-tag v) (var-flags v)) vl)
;; 				    (unset-var-set v)(unset-var-aliased v)
;; 				    (setf (var-tag v) nt (var-mt v) (var-type v))))
;; 	       (unwind-protect 
;; 		   (do ((tob ob ob) (tnb nb nb) *tvc* ns nud)
;; 		       ((not 
;; 			 (let ((nv (with-restore-vars  
;; 				     (catch nt 
;; 				       (do (l (*warning-note-stack* 
;; 					       (when (boundp '*warning-note-stack*) *warning-note-stack*))
;; 					      *undefined-vars*) 
;; 					   ((not (setq l (pop tob))) 
;; 					    (setq ns (when (boundp '*warning-note-stack*) 
;; 						       *warning-note-stack*) nud *undefined-vars*)
;; 					    (setq popv (append *restore-vars* popv) *restore-vars* nil))
;; 					   (push (if (tag-p l) 
;; 						     (progn (setq popv (append *restore-vars* popv)) (pop-restore-vars) l)
;; 						   (c1arg l)) tnb))))));maybe copy-info here
;; 			   (when nv
;; 			     (keyed-cmpnote (list 'tagbody-iteration) "Iterating tagbody on ~s conflicts" (length *tvc*))
;; 			     (do nil ((not (setq nv (pop *tvc*))) t)
;; 				 (keyed-cmpnote (list (var-name nv) 'tagbody-iteration)
;; 						"    Iterating tagbody: setting ~s type ~s to ~s"
;; 						(var-name nv) (var-type nv) (var-mt nv))
;; 				 (setf (var-type nv) (var-mt nv) (var-store nv) (tmpsym))))))
;; 			(when ns (setq *warning-note-stack* ns)) (setq *undefined-vars* nud)
;; 			tnb))
;; 		 (dolist (v vl) 
;; 		   (when (caddr v)
;; 		     (unless (type>= (cadr v) (var-mt (car v)))
;; 		       (pushnew (car v) *tvc*)))
;; 		   (when (and (var-set (car v)) (var-aliased (car v)))
;; 		     (unless (= 3 (ash (fourth v) -3));FIXME
;; 		       (pushnew (car v) *tvc*)))
;; 		   (setf (var-mt (car v)) (type-or1 (var-mt (car v)) (cadr v))
;; 			 (var-tag (car v)) (caddr v)
;; 			 (var-flags (car v)) (logior (cadddr v) (var-flags (car v)))))))))))



;;   (let ((ntags (ldiff *tags* otags)))
;;     (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body)
;;     (when t; FIXME (member-if (lambda (x) (when (tag-p x) (or (tag-ref x) (tag-ref-clb x) (tag-ref-ccb x)))) ntags)
;;       (dolist (l popv)
;; 	(let ((l (car l)))
;; 	  (keyed-cmpnote (list (var-name l) 'tagbody-exit)
;; 			 "Exit tagbody setting ~s type ~s to ~s"
;; 			 (var-name l) (var-type l) (var-mt l))
;; 	  (setf (var-type l) (var-mt l) (var-store l) (tmpsym))))));do-setq-tp?
  
;;   ;; (let ((ntags (ldiff *tags* otags)))
;;   ;;   (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body))
				     
;;   (let (body1 ref ref-clb ref-ccb (*tags* otags))

;;   ;;; Delete redundant tags.
;;     (dolist (l body)
;;       (cond ((not (tag-p l))
;; 	     (add-info info (cadr l))
;; 	     (push l body1))
;; 	    ((tag-ref-ccb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-ccb t))
;; 	    ((tag-ref-clb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-clb t))
;; 	    ((tag-ref l) (push l body1) (setq ref t))))

;;     (when (and (listp (car body1)) (info-p (cadar body1)))
;;       (let ((tp (info-type (cadar body1))))
;; 	(unless tp (setf (info-type info) nil))))

;;     (cond ((or ref-ccb ref-clb ref)
;; 	   (setq body1 (nreverse body1))
;; 	   ;; If ref-ccb is set, we will cons up the environment, hence
;; 	   ;; all tags which had level boundary references must be changed
;; 	   ;; to ccb references.  FIXME -- review this logic carefully
;; 	   ;; CM 20040228
;; 	   (when ref-ccb
;; 	     (dolist (l body1)
;; 	       (when (and (tag-p l) (tag-ref-clb l))
;; 		 (setf (tag-ref-ccb l) t))))
;; 	   (if (or ref-clb ref-ccb) 
;; 	       (incf *setjmps*)
;; 	     (add-loop-registers body1))
;; 	   `(tagbody ,info ,ref-clb ,ref-ccb ,body1))
;; 	  ((let* ((v (nreverse (if (when body1 (not (info-type (cadar body1)))) body1 (cons (c1nil) body1)))))
;; 	     (if (cdr v) `(progn ,info ,v) (car v)))))))

;; (defun c1tagbody (body &aux (otags *tags*) (*tags* *tags*) (*ttl-tags* *ttl-tags*) popv
;; 		       (info (make-info :type #tnull)) (nt (tmpsym)))

;;   (setq body
;;         (mapcar
;;          (lambda (x)
;; 	   (cond ((or (symbolp x) (integerp x)) (car (push (make-tag :name x :ref nil :ref-ccb nil :ref-clb nil :label nt) *tags*)))
;; 		 ((tag-p x) (car (push x *tags*)))
;; 		 (x)))
;;          body))

;;   (let* ((x (car body))
;; 	 (y (when (tag-p x) (tag-name x)))
;; 	 (y (when (symbolp y) (get y 'ttl-tag))))
;;     (when y
;;       (push (list x *vars*) *ttl-tags*)))

;;   (setq body 
;; 	(nreverse 
;; 	 (let* (nb 
;; 		(ob body)
;; 		(ft (do (l) ((or (not (setq l (pop ob))) (tag-p l)) l)
;; 			    (push (c1arg l) nb))))
;; 	   (if (not ft) nb
;; 	     (let ((nb (cons ft nb)) vl)
;; 	       (dolist (v *vars*) (when (var-p v) 
;; 				    (push (list v (var-mt v) (var-tag v)) vl)
;; 				    (setf (var-tag v) nt (var-mt v) (var-type v))))
;; 	       (unwind-protect 
;; 		   (do ((tob ob ob) (tnb nb nb) *tvc* ns nud)
;; 		       ((not 
;; 			 (let ((nv (with-restore-vars  
;; 				     (catch nt 
;; 				       (do (l (*warning-note-stack* 
;; 					       (when (boundp '*warning-note-stack*) *warning-note-stack*))
;; 					      *undefined-vars*) 
;; 					   ((not (setq l (pop tob))) 
;; 					    (setq ns (when (boundp '*warning-note-stack*) 
;; 						       *warning-note-stack*) nud *undefined-vars*)
;; 					    (setq popv (append *restore-vars* popv) *restore-vars* nil))
;; 					   (push (if (tag-p l) 
;; 						     (progn (setq popv (append *restore-vars* popv)) (pop-restore-vars) l)
;; 						   (c1arg l)) tnb))))));maybe copy-info here
;; 			   (when nv
;; 			     (do nil ((not (setq nv (pop *tvc*))) t)
;; 				 (keyed-cmpnote (list (var-name nv) 'tagbody-iteration)
;; 						"Iterating tagbody setting ~s type ~s to ~s"
;; 						(var-name nv) (var-type nv) (var-mt nv))
;; 				 (setf (var-type nv) (var-mt nv))))))
;; 			(when ns (setq *warning-note-stack* ns)) (setq *undefined-vars* nud)
;; 			tnb))
;; 		 (dolist (v vl) 
;; 		   (when (caddr v)
;; 		     (unless (type>= (cadr v) (var-mt (car v)))
;; 		       (pushnew (car v) *tvc*)))
;; 		   (setf (var-mt (car v)) (type-or1 (var-mt (car v)) (cadr v))
;; 			 (var-tag (car v)) (caddr v)))))))))



;;   (let ((ntags (ldiff *tags* otags)))
;;     (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body)
;;     (when t; FIXME (member-if (lambda (x) (when (tag-p x) (or (tag-ref x) (tag-ref-clb x) (tag-ref-ccb x)))) ntags)
;;       (dolist (l popv)
;; 	(let ((l (car l)))
;; 	  (keyed-cmpnote (list (var-name l) 'tagbody-iteration)
;; 			 "Exit tagbody setting ~s type ~s to ~s"
;; 			 (var-name l) (var-type l) (var-mt l))
;; 	  (setf (var-type l) (var-mt l))))))
  
;;   ;; (let ((ntags (ldiff *tags* otags)))
;;   ;;   (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body))
				     
;;   (let (body1 ref ref-clb ref-ccb (*tags* otags))

;;   ;;; Delete redundant tags.
;;     (dolist (l body)
;;       (cond ((not (tag-p l))
;; 	     (add-info info (cadr l))
;; 	     (push l body1))
;; 	    ((tag-ref-ccb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-ccb t))
;; 	    ((tag-ref-clb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-clb t))
;; 	    ((tag-ref l) (push l body1) (setq ref t))))

;;     (when (and (listp (car body1)) (info-p (cadar body1)))
;;       (let ((tp (info-type (cadar body1))))
;; 	(unless tp (setf (info-type info) nil))))

;;     (cond ((or ref-ccb ref-clb ref)
;; 	   (setq body1 (nreverse body1))
;; 	   ;; If ref-ccb is set, we will cons up the environment, hence
;; 	   ;; all tags which had level boundary references must be changed
;; 	   ;; to ccb references.  FIXME -- review this logic carefully
;; 	   ;; CM 20040228
;; 	   (when ref-ccb
;; 	     (dolist (l body1)
;; 	       (when (and (tag-p l) (tag-ref-clb l))
;; 		 (setf (tag-ref-ccb l) t))))
;; 	   (if (or ref-clb ref-ccb) 
;; 	       (incf *setjmps*)
;; 	     (add-loop-registers body1))
;; 	   `(tagbody ,info ,ref-clb ,ref-ccb ,body1))
;; 	  ((let* ((v (nreverse (if (when body1 (not (info-type (cadar body1)))) body1 (cons (c1nil) body1)))))
;; 	     (if (cdr v) `(progn ,info ,v) (car v)))))))

;; (defun c1tagbody (body &aux (otags *tags*) (*tags* *tags*) (*ttl-tags* *ttl-tags*) popv
;; 		       (info (make-info :type #tnull)) (nt (tmpsym)))

;;   (setq body
;;         (mapcar
;;          (lambda (x)
;; 	   (cond ((or (symbolp x) (integerp x)) (car (push (make-tag :name x :ref nil :ref-ccb nil :ref-clb nil :label nt) *tags*)))
;; 		 ((tag-p x) (car (push x *tags*)))
;; 		 (x)))
;;          body))

;;   (let* ((x (car body))
;; 	 (y (when (tag-p x) (tag-name x)))
;; 	 (y (when (symbolp y) (get y 'ttl-tag))))
;;     (when y
;;       (push (list x *vars*) *ttl-tags*)))

;;   (setq body 
;; 	(nreverse 
;; 	 (let* (nb 
;; 		(ob body)
;; 		(ft (do (l) ((or (not (setq l (pop ob))) (tag-p l)) l)
;; 			    (push (c1expr l) nb))))
;; 	   (if (not ft) nb
;; 	     (let ((nb (cons ft nb)) vl)
;; 	       (dolist (v *vars*) (when (var-p v) 
;; 				    (push (list v (var-mt v) (var-tag v)) vl)
;; 				    (setf (var-tag v) nt (var-mt v) (var-type v))))
;; 	       (unwind-protect 
;; 		   (do ((tob ob ob) (tnb nb nb) *tvc* ns nud)
;; 		       ((not 
;; 			 (let ((nv (with-restore-vars  
;; 				     (catch nt 
;; 				       (do (l (*warning-note-stack* 
;; 					       (when (boundp '*warning-note-stack*) *warning-note-stack*))
;; 					      *undefined-vars*) 
;; 					   ((not (setq l (pop tob))) 
;; 					    (setq ns (when (boundp '*warning-note-stack*) 
;; 						       *warning-note-stack*) nud *undefined-vars*)
;; 					    (setq popv (append *restore-vars* popv) *restore-vars* nil))
;; 					   (push (if (tag-p l) 
;; 						     (progn (setq popv (append *restore-vars* popv)) (pop-restore-vars) l)
;; 						   (c1expr l)) tnb))))));maybe copy-info here
;; 			   (when nv
;; 			     (do nil ((not (setq nv (pop *tvc*))) t)
;; 				 (keyed-cmpnote (list (var-name nv) 'tagbody-iteration)
;; 						"Iterating tagbody setting ~s type ~s to ~s"
;; 						(var-name nv) (var-type nv) (var-mt nv))
;; 				 (setf (var-type nv) (var-mt nv))))))
;; 			(when ns (setq *warning-note-stack* ns)) (setq *undefined-vars* nud)
;; 			tnb))
;; 		 (dolist (v vl) 
;; 		   (when (caddr v)
;; 		     (unless (type>= (cadr v) (var-mt (car v)))
;; 		       (pushnew (car v) *tvc*)))
;; 		   (setf (var-mt (car v)) (type-or1 (var-mt (car v)) (cadr v))
;; 			 (var-tag (car v)) (caddr v)))))))))



;;   (let ((ntags (ldiff *tags* otags)))
;;     (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body)
;;     (when t; FIXME (member-if (lambda (x) (when (tag-p x) (or (tag-ref x) (tag-ref-clb x) (tag-ref-ccb x)))) ntags)
;;       (dolist (l popv)
;; 	(let ((l (car l)))
;; 	  (keyed-cmpnote (list (var-name l) 'tagbody-iteration)
;; 			 "Exit tagbody setting ~s type ~s to ~s"
;; 			 (var-name l) (var-type l) (var-mt l))
;; 	  (setf (var-type l) (var-mt l))))))
  
;;   ;; (let ((ntags (ldiff *tags* otags)))
;;   ;;   (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body))
				     
;;   (let (body1 ref ref-clb ref-ccb (*tags* otags))

;;   ;;; Delete redundant tags.
;;     (dolist (l body)
;;       (cond ((not (tag-p l))
;; 	     (add-info info (cadr l))
;; 	     (push l body1))
;; 	    ((tag-ref-ccb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-ccb t))
;; 	    ((tag-ref-clb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-clb t))
;; 	    ((tag-ref l) (push l body1) (setq ref t))))

;;     (when (and (listp (car body1)) (info-p (cadar body1)))
;;       (let ((tp (info-type (cadar body1))))
;; 	(unless tp (setf (info-type info) nil))))

;;     (cond ((or ref-ccb ref-clb ref)
;; 	   (setq body1 (nreverse body1))
;; 	   ;; If ref-ccb is set, we will cons up the environment, hence
;; 	   ;; all tags which had level boundary references must be changed
;; 	   ;; to ccb references.  FIXME -- review this logic carefully
;; 	   ;; CM 20040228
;; 	   (when ref-ccb
;; 	     (dolist (l body1)
;; 	       (when (and (tag-p l) (tag-ref-clb l))
;; 		 (setf (tag-ref-ccb l) t))))
;; 	   (if (or ref-clb ref-ccb) 
;; 	       (incf *setjmps*)
;; 	     (add-loop-registers body1))
;; 	   `(tagbody ,info ,ref-clb ,ref-ccb ,body1))
;; 	  (`(progn ,info ,(nreverse 
;; 			   (let ((b (car body1)))
;; 			     (if (and (consp b) (eq (car b) 'return-from)) body1
;; 			       (cons (c1nil) body1)))))))))

;; (defun c1tagbody (body &aux (otags *tags*) (*tags* *tags*) (*ttl-tags* *ttl-tags*) popv
;; 		       (info (make-info :type #tnull)) (nt (tmpsym)))

;;   (setq body
;;         (mapcar
;;          (lambda (x)
;; 	   (cond ((or (symbolp x) (integerp x)) (car (push (make-tag :name x :ref nil :ref-ccb nil :ref-clb nil :label nt) *tags*)))
;; 		 ((tag-p x) (car (push x *tags*)))
;; 		 (x)))
;;          body))

;;   (let* ((x (car body))
;; 	 (y (when (tag-p x) (tag-name x)))
;; 	 (y (when (symbolp y) (get y 'ttl-tag))))
;;     (when y
;;       (push (list x *vars*) *ttl-tags*)))

;;   (setq body 
;; 	(nreverse 
;; 	 (let* (nb 
;; 		(ob body)
;; 		(ft (do (l) ((or (not (setq l (pop ob))) (tag-p l)) l)
;; 			    (push (c1expr l) nb))))
;; 	   (if (not ft) nb
;; 	     (let ((nb (cons ft nb)) vl)
;; 	       (dolist (v *vars*) (when (var-p v) 
;; 				    (push (list v (var-mt v) (var-tag v)) vl)
;; 				    (setf (var-tag v) nt (var-mt v) (var-type v))))
;; 	       (unwind-protect 
;; 		   (do ((tob ob ob) (tnb nb nb) *tvc* ns nud)
;; 		       ((not 
;; 			 (let ((nv (with-restore-vars  
;; 				     (catch nt 
;; 				       (do (l (*warning-note-stack* 
;; 					       (when (boundp '*warning-note-stack*) *warning-note-stack*))
;; 					      *undefined-vars*) 
;; 					   ((not (setq l (pop tob))) 
;; 					    (setq ns (when (boundp '*warning-note-stack*) 
;; 						       *warning-note-stack*) nud *undefined-vars*)
;; 					    (setq popv (append *restore-vars* popv) *restore-vars* nil))
;; 					   (push (if (tag-p l) 
;; 						     (progn (setq popv (append *restore-vars* popv)) (pop-restore-vars) l)
;; 						   (c1expr l)) tnb))))));maybe copy-info here
;; 			   (when nv
;; 			     (do nil ((not (setq nv (pop *tvc*))) t)
;; 				 (keyed-cmpnote (list (var-name nv) 'tagbody-iteration)
;; 						"Iterating tagbody setting ~s type ~s to ~s"
;; 						(var-name nv) (var-type nv) (var-mt nv))
;; 				 (setf (var-type nv) (var-mt nv))))))
;; 			(when ns (setq *warning-note-stack* ns)) (setq *undefined-vars* nud)
;; 			tnb))
;; 		 (dolist (v vl) 
;; 		   (when (caddr v)
;; 		     (unless (type>= (cadr v) (var-mt (car v)))
;; 		       (pushnew (car v) *tvc*)))
;; 		   (setf (var-mt (car v)) (type-or1 (var-mt (car v)) (cadr v))
;; 			 (var-tag (car v)) (caddr v)))))))))



;;   (let ((ntags (ldiff *tags* otags)))
;;     (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body)
;;     (when (member-if (lambda (x) (when (tag-p x) (or (tag-ref x) (tag-ref-clb x) (tag-ref-ccb x)))) ntags)
;;       (dolist (l popv)
;; 	(keyed-cmpnote (list (var-name l) 'tagbody-iteration)
;; 		       "Exit tagbody setting ~s type ~s to ~s"
;; 		       (var-name (car l)) (var-type (car l)) (var-mt (car l)))
;; 	(setf (var-type (car l)) (var-mt (car l))))))

;;   ;; (let ((ntags (ldiff *tags* otags)))
;;   ;;   (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body))
				     
;;   (let (body1 ref ref-clb ref-ccb (*tags* otags))

;;   ;;; Delete redundant tags.
;;     (dolist (l body)
;;       (cond ((not (tag-p l))
;; 	     (add-info info (cadr l))
;; 	     (push l body1))
;; 	    ((tag-ref-ccb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-ccb t))
;; 	    ((tag-ref-clb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-clb t))
;; 	    ((tag-ref l) (push l body1) (setq ref t))))

;;     (when (and (listp (car body1)) (info-p (cadar body1)))
;;       (let ((tp (info-type (cadar body1))))
;; 	(unless tp (setf (info-type info) nil))))

;;     (cond ((or ref-ccb ref-clb ref)
;; 	   (setq body1 (nreverse body1))
;; 	   ;; If ref-ccb is set, we will cons up the environment, hence
;; 	   ;; all tags which had level boundary references must be changed
;; 	   ;; to ccb references.  FIXME -- review this logic carefully
;; 	   ;; CM 20040228
;; 	   (when ref-ccb
;; 	     (dolist (l body1)
;; 	       (when (and (tag-p l) (tag-ref-clb l))
;; 		 (setf (tag-ref-ccb l) t))))
;; 	   (if (or ref-clb ref-ccb) 
;; 	       (incf *setjmps*)
;; 	     (add-loop-registers body1))
;; 	   `(tagbody ,info ,ref-clb ,ref-ccb ,body1))
;; 	  (`(progn ,info ,(nreverse 
;; 			   (let ((b (car body1)))
;; 			     (if (and (consp b) (eq (car b) 'return-from)) body1
;; 			       (cons (c1nil) body1)))))))))

;; (defun c1tagbody (body &aux (otags *tags*) (*tags* *tags*) (*ttl-tags* *ttl-tags*) 
;; 		       (info (make-info :type #tnull)) (nt (tmpsym)))

;;   (setq body
;;         (mapcar
;;          (lambda (x)
;; 	   (if (not (or (symbolp x) (integerp x))) x
;; 	     (car (push (make-tag :name x :ref nil :ref-ccb nil :ref-clb nil :label nt) *tags*))))
;;          body))

;;   (let* ((x (car body))
;; 	 (y (when (tag-p x) (tag-name x)))
;; 	 (y (when (symbolp y) (get y 'ttl-tag))))
;;     (when y
;;       (push (list x *vars*) *ttl-tags*)))

;;   (setq body 
;; 	(nreverse 
;; 	 (let* (nb 
;; 		(ob body)
;; 		(ft (do (l) ((or (not (setq l (pop ob))) (tag-p l)) l)
;; 			    (push (c1expr l) nb))))
;; 	   (if (not ft) nb
;; 	     (let ((nb (cons ft nb)) vl)
;; 	       (dolist (v *vars*) (when (var-p v) 
;; 				    (push (list v (var-mt v) (var-tag v)) vl)
;; 				    (setf (var-tag v) nt (var-mt v) (var-type v))))
;; 	       (unwind-protect 
;; 		   (do ((tob ob ob) (tnb nb nb) *tvc* ns nud)
;; 		       ((not 
;; 			 (let ((nv (with-restore-vars  
;; 				     (catch nt 
;; 				       (do (l (*warning-note-stack* 
;; 					       (when (boundp '*warning-note-stack*) *warning-note-stack*))
;; 					      *undefined-vars*) 
;; 					   ((not (setq l (pop tob))) 
;; 					    (setq ns (when (boundp '*warning-note-stack*) 
;; 						       *warning-note-stack*) nud *undefined-vars*)
;; 					    (do nil ((not (setq l (pop *restore-vars*)))) 
;; 						  (setf (var-type (car l)) (var-mt (car l)))))
;; 					   (push (if (tag-p l) 
;; 						     (progn (pop-restore-vars) l)
;; 						   (c1expr l)) tnb))))));maybe copy-info here
;; 			   (when nv
;; 			     (do nil ((not (setq nv (pop *tvc*))) t)
;; 				 (keyed-cmpnote (list (var-name nv) 'tagbody-iteration)
;; 						"Iterating tagbody setting ~s type ~s to ~s"
;; 						(var-name nv) (var-type nv) (var-mt nv))
;; 				 (setf (var-type nv) (var-mt nv))))))
;; 			(when ns (setq *warning-note-stack* ns)) (setq *undefined-vars* nud)
;; 			tnb))
;; 		 (dolist (v vl) 
;; 		   (when (caddr v)
;; 		     (unless (type>= (cadr v) (var-mt (car v)))
;; 		       (pushnew (car v) *tvc*)))
;; 		   (setf (var-mt (car v)) (type-or1 (var-mt (car v)) (cadr v))
;; 			 (var-tag (car v)) (caddr v)))))))))


;;   (let ((ntags (ldiff *tags* otags)))
;;     (mapc (lambda (x) (unless (tag-p x) (ref-tags x ntags))) body))
				     
;;   (let (body1 ref ref-clb ref-ccb (*tags* otags))

;;   ;;; Delete redundant tags.
;;     (dolist (l body)
;;       (cond ((not (tag-p l))
;; 	     (add-info info (cadr l))
;; 	     (push l body1))
;; 	    ((tag-ref-ccb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-ccb t))
;; 	    ((tag-ref-clb l)
;; 	     (push l body1)
;; 	     (setf (tag-var l) (add-object (tag-name l)))
;; 	     (setq ref-clb t))
;; 	    ((tag-ref l) (push l body1) (setq ref t))))

;;     (when (and (listp (car body1)) (info-p (cadar body1)))
;;       (let ((tp (info-type (cadar body1))))
;; 	(unless tp (setf (info-type info) nil))))

;;     (cond ((or ref-ccb ref-clb ref)
;; 	   (setq body1 (nreverse body1))
;; 	   ;; If ref-ccb is set, we will cons up the environment, hence
;; 	   ;; all tags which had level boundary references must be changed
;; 	   ;; to ccb references.  FIXME -- review this logic carefully
;; 	   ;; CM 20040228
;; 	   (when ref-ccb
;; 	     (dolist (l body1)
;; 	       (when (and (tag-p l) (tag-ref-clb l))
;; 		 (setf (tag-ref-ccb l) t))))
;; 	   (if (or ref-clb ref-ccb) 
;; 	       (incf *setjmps*)
;; 	     (add-loop-registers body1))
;; 	   `(tagbody ,info ,ref-clb ,ref-ccb ,body1))
;; 	  (`(progn ,info ,(nreverse 
;; 			   (let ((b (car body1)))
;; 			     (if (and (consp b) (eq (car b) 'return-from)) body1
;; 			       (cons (c1nil) body1)))))))))

;; (defun c1tagbody (body &aux (otags *tags*) (*tags* *tags*) (*ttl-tags* *ttl-tags*) 
;; 		       (info (make-info :type #tnull)) (nt (tmpsym)))

;;   (setq body
;;         (mapcar
;;          (lambda (x)
;; 	   (if (not (or (symbolp x) (integerp x))) x
;; 	     (car (push (make-tag :name x :ref nil :ref-ccb nil :ref-clb nil :label nt) *tags*))))
;;          body))

;;   (let* ((x (car body))
;; 	 (y (when (tag-p x) (tag-name x)))
;; 	 (y (when (symbolp y) (get y 'ttl-tag))))
;;     (when y
;;       (push (list x *vars*) *ttl-tags*)))

;;   (setq body 
;; 	(nreverse 
;; 	 (let* (nb 
;; 		(ob body)
;; 		(ft (do (l) ((or (not (setq l (pop ob))) (typep l 'tag)) l)
;; 			    (push (c1expr* l info) nb))))
;; 	   (if (not ft) nb
;; 	     (let ((nb (cons ft nb)) vl)
;; 	       (dolist (v *vars*) (when (var-p v) 
;; 				    (push (list v (var-mt v) (var-tag v)) vl)
;; 				    (setf (var-tag v) nt (var-mt v) (var-type v))))
;; 	       (unwind-protect 
;; 		   (do ((tob ob ob) (tnb nb nb) *tvc* ns nud)
;; 		       ((not 
;; 			 (let ((nv (with-restore-vars  
;; 				     (catch nt 
;; 				       (do (l (*warning-note-stack* 
;; 					       (when (boundp '*warning-note-stack*) *warning-note-stack*))
;; 					      *undefined-vars*) 
;; 					   ((not (setq l (pop tob))) 
;; 					    (setq ns (when (boundp '*warning-note-stack*) 
;; 						       *warning-note-stack*) nud *undefined-vars*)
;; 					    (do nil ((not (setq l (pop *restore-vars*)))) 
;; 						  (setf (var-type (car l)) (var-mt (car l)))))
;; 					   (push (if (typep l 'tag) 
;; 						     (progn (pop-restore-vars) l)
;; 						   (c1expr* l info)) tnb))))));maybe copy-info here
;; 			   (when nv
;; 			     (do nil ((not (setq nv (pop *tvc*))) t)
;; 				 (keyed-cmpnote (list (var-name nv) 'tagbody-iteration)
;; 						"Iterating tagbody setting ~s type ~s to ~s"
;; 						(var-name nv) (var-type nv) (var-mt nv))
;; 				 (setf (var-type nv) (var-mt nv))))))
;; 			(when ns (setq *warning-note-stack* ns)) (setq *undefined-vars* nud)
;; 			tnb))
;; 		 (dolist (v vl) 
;; 		   (when (caddr v)
;; 		     (unless (type>= (cadr v) (var-mt (car v)))
;; 		       (pushnew (car v) *tvc*)))
;; 		   (setf (var-mt (car v)) (type-or1 (var-mt (car v)) (cadr v))
;; 			 (var-tag (car v)) (caddr v)))))))))


;;   (ref-tags (list 'tagbody info body) (ldiff *tags* otags))
				     
;;   ;;; Delete redundant tags.
;;   (let (body1 ref ref-clb ref-ccb)
;;     (dolist (l body)
;;       (if (not (tag-p l)) 
;; 	  (push l body1)
;; 	(cond ((tag-ref-ccb l)
;; 	       (push l body1)
;; 	       (setf (tag-var l) (add-object (tag-name l)))
;; 	       (setq ref-ccb t))
;; 	      ((tag-ref-clb l)
;; 	       (push l body1)
;; 	       (setf (tag-var l) (add-object (tag-name l)))
;; 	       (setq ref-clb t))
;; 	      ((tag-ref l) (push l body1) (setq ref t)))))

;; ;    (when (and (listp (car body1)) (info-p (cadar body1)))
;; ;      (setf (info-type info) (info-type (cadar body1))))
;;     (when (and (listp (car body1)) (info-p (cadar body1)))
;;       (let ((tp (info-type (cadar body1))))
;; 	(unless tp (setf (info-type info) nil))))
;;     (setf (info-tags info) (set-difference (info-tags info) (remove-if-not 'tag-p body1)));FIXME
;;     (cond ((or ref-ccb ref-clb ref)
;; 	   (setq body1 (nreverse body1))
;; 	   ;; If ref-ccb is set, we will cons up the environment, hence
;; 	   ;; all tags which had level boundary references must be changed
;; 	   ;; to ccb references.  FIXME -- review this logic carefully
;; 	   ;; CM 20040228
;; 	   (when ref-ccb
;; 	     (dolist (l body1)
;; 	       (when (and (typep l 'tag) (tag-ref-clb l))
;; 		 (setf (tag-ref-ccb l) t))))
;; 	   (cond ((or ref-clb ref-ccb) (incf *setjmps*))
;; 		 ((add-loop-registers body1)))
;; 	   `(tagbody ,info ,ref-clb ,ref-ccb ,body1))
;; 	  (`(progn ,info ,(nreverse 
;; 			   (let ((b (car body1)))
;; 			     (if (and (consp b) (eq (car b) 'return-from)) body1
;; 			       (cons (c1nil) body1)))))))))

;; (defun c1tagbody (body &aux (*tags* *tags*) (*ttl-tags* *ttl-tags*) 
;; 		       (info (make-info :type #tnull)) (nt (tmpsym)))

;;   (setq body
;;         (mapcar
;;          (lambda (x)
;; 	   (if (not (or (symbolp x) (integerp x))) x
;; 	     (car (push (make-tag :name x :ref nil :ref-ccb nil :ref-clb nil :label nt) *tags*))))
;;          body))

;;   (let* ((x (car body))
;; 	 (y (when (tag-p x) (tag-name x)))
;; 	 (y (when (symbolp y) (get y 'ttl-tag))))
;;     (when y
;;       (push (list x *vars*) *ttl-tags*)))

;;   (setq body 
;; 	(nreverse 
;; 	 (let* (nb 
;; 		(ob body)
;; 		(ft (do (l) ((or (not (setq l (pop ob))) (typep l 'tag)) l)
;; 			    (push (c1expr* l info) nb))))
;; 	   (if (not ft) nb
;; 	     (let ((nb (cons ft nb)) vl)
;; 	       (dolist (v *vars*) (when (var-p v) 
;; 				    (push (list v (var-mt v) (var-tag v)) vl)
;; 				    (setf (var-tag v) nt (var-mt v) (var-type v))))
;; 	       (unwind-protect 
;; 		   (do ((tob ob ob) (tnb nb nb) *tvc* ns nud)
;; 		       ((not 
;; 			 (let ((nv (with-restore-vars  
;; 				     (catch nt 
;; 				       (do (l (*warning-note-stack* 
;; 					       (when (boundp '*warning-note-stack*) *warning-note-stack*))
;; 					      *undefined-vars*) 
;; 					   ((not (setq l (pop tob))) 
;; 					    (setq ns (when (boundp '*warning-note-stack*) 
;; 						       *warning-note-stack*) nud *undefined-vars*)
;; 					    (do nil ((not (setq l (pop *restore-vars*)))) 
;; 						  (setf (var-type (car l)) (var-mt (car l)))))
;; 					   (push (if (typep l 'tag) 
;; 						     (progn (pop-restore-vars) l)
;; 						   (c1expr* l info)) tnb))))));maybe copy-info here
;; 			   (when nv
;; 			     (do nil ((not (setq nv (pop *tvc*))) t)
;; 				 (keyed-cmpnote (list (var-name nv) 'tagbody-iteration)
;; 						"Iterating tagbody setting ~s type ~s to ~s"
;; 						(var-name nv) (var-type nv) (var-mt nv))
;; 				 (setf (var-type nv) (var-mt nv))))))
;; 			(when ns (setq *warning-note-stack* ns)) (setq *undefined-vars* nud)
;; 			tnb))
;; 		 (dolist (v vl) 
;; 		   (when (caddr v)
;; 		     (unless (type>= (cadr v) (var-mt (car v)))
;; 		       (pushnew (car v) *tvc*)))
;; 		   (setf (var-mt (car v)) (type-or1 (var-mt (car v)) (cadr v))
;; 			 (var-tag (car v)) (caddr v)))))))))

				     
;;   ;;; Delete redundant tags.
;;   (let (body1 ref ref-clb ref-ccb)
;;     (dolist (l body)
;;       (if (not (tag-p l)) 
;; 	  (push l body1)
;; 	(cond ((tag-ref-ccb l)
;; 	       (push l body1)
;; 	       (setf (tag-var l) (add-object (tag-name l)))
;; 	       (setq ref-ccb t))
;; 	      ((tag-ref-clb l)
;; 	       (push l body1)
;; 	       (setf (tag-var l) (add-object (tag-name l)))
;; 	       (setq ref-clb t))
;; 	      ((tag-ref l) (push l body1) (setq ref t)))))

;; ;    (when (and (listp (car body1)) (info-p (cadar body1)))
;; ;      (setf (info-type info) (info-type (cadar body1))))
;;     (when (and (listp (car body1)) (info-p (cadar body1)))
;;       (let ((tp (info-type (cadar body1))))
;; 	(unless tp (setf (info-type info) nil))))
;;     (setf (info-tags info) (set-difference (info-tags info) (remove-if-not 'tag-p body1)));FIXME
;;     (cond ((or ref-ccb ref-clb ref)
;; 	   (setq body1 (nreverse body1))
;; 	   ;; If ref-ccb is set, we will cons up the environment, hence
;; 	   ;; all tags which had level boundary references must be changed
;; 	   ;; to ccb references.  FIXME -- review this logic carefully
;; 	   ;; CM 20040228
;; 	   (when ref-ccb
;; 	     (dolist (l body1)
;; 	       (when (and (typep l 'tag) (tag-ref-clb l))
;; 		 (setf (tag-ref-ccb l) t))))
;; 	   (cond ((or ref-clb ref-ccb) (incf *setjmps*))
;; 		 ((add-loop-registers body1)))
;; 	   `(tagbody ,info ,ref-clb ,ref-ccb ,body1))
;; 	  (`(progn ,info ,(nreverse 
;; 			   (let ((b (car body1)))
;; 			     (if (and (consp b) (eq (car b) 'return-from)) body1
;; 			       (cons (c1nil) body1)))))))))

(defun is-ttl-tag (x)
  (when (tag-p x) (when (symbolp (tag-name x)) (get (tag-name x) 'ttl-tag))))

(defun c2tagbody (ref-clb ref-ccb body)
  (cond (ref-ccb (c2tagbody-ccb body))
	(ref-clb (c2tagbody-clb body))
	((c2tagbody-local body))))

(defun c2tagbody-local (body &aux (label (next-label)))
  (dolist (x body)
    (when (typep x 'tag)
          (setf (tag-label x) (next-label*))
          (setf (tag-unwind-exit x) label)))
  (let ((*unwind-exit* (cons label *unwind-exit*)))
    (c2tagbody-body body)))

(defun c2tagbody-body (body)
  (do ((l body (cdr l)) (written nil))
      ((endp (cdr l))
       (cond (written (unwind-exit nil))
             ((typep (car l) 'tag)
	      (wt-switch-case (tag-switch (car l)))
              (wt-label (tag-label (car l)))
              (unwind-exit nil))
             (t (let* ((*exit* (next-label))
                       (*unwind-exit* (cons *exit* *unwind-exit*))
                       (*value-to-go* 'trash))
                  (c2expr (car l))
                  (wt-label *exit*))
                (unless (type>= #tnil (info-type (cadar l))) (unwind-exit nil)))));(eq (caar l) 'go)
    (cond (written (setq written nil))
          ((typep (car l) 'tag)
	   (wt-switch-case (tag-switch (car l)))
	   (wt-label (tag-label (car l))))
          (t (let* ((*exit* (if (typep (cadr l) 'tag)
                                (progn (setq written t) (tag-label (cadr l)))
                                (next-label)))
                    (*unwind-exit* (cons *exit* *unwind-exit*))
                    (*value-to-go* 'trash))
               (c2expr (car l))
	       (and (typep (cadr l) 'tag)
		    (wt-switch-case (tag-switch (cadr l))))
               (wt-label *exit*))))))
  
(defun c2tagbody-clb (body &aux (label (next-label)) (*vs* *vs*))
  (let ((*unwind-exit* (cons 'frame *unwind-exit*))
        (ref-clb (vs-push)))
    (wt-nl) (wt-vs ref-clb) (wt "=alloc_frame_id();")
    (add-libc "setjmp")
    (setq *frame-used* t)
    (wt-nl "frs_push(FRS_CATCH,") (wt-vs ref-clb) (wt ");")
    (wt-nl "if(nlj_active){")
    (wt-nl "nlj_active=FALSE;")
    ;;; Allocate labels.
    (dolist** (tag body)
      (when (typep tag 'tag)
        (setf (tag-label tag) (next-label*))
        (setf (tag-unwind-exit tag) label)
        (when (tag-ref-clb tag)
          (setf (tag-ref-clb tag) ref-clb)
          (wt-nl "if(eql(nlj_tag," (vv-str (tag-var tag)) ")) {")
  	  (wt-nl "   ")
	  (reset-top)
	  (wt-nl "   ")
          (wt-go (tag-label tag))
	  (wt-nl "}"))))
    (wt-nl "FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);")
    (wt-nl "}")
    (let ((*unwind-exit* (cons label *unwind-exit*)))
      (c2tagbody-body body))))

(defun c2tagbody-ccb (body &aux (label (next-label))
                           (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*))
  (let ((*unwind-exit* (cons 'frame *unwind-exit*))
        (ref-clb (vs-push)) ref-ccb)
    (wt-nl) (wt-vs ref-clb) (wt "=alloc_frame_id();")
    (wt-nl) 
    (clink ref-clb)
    (setq ref-ccb (ccb-vs-push))
    (add-libc "setjmp")
    (setq *frame-used* t)
    (wt-nl "frs_push(FRS_CATCH,") (wt-vs* ref-clb) (wt ");")
    (wt-nl "if(nlj_active){")
    (wt-nl "nlj_active=FALSE;")
    ;;; Allocate labels.
    (dolist** (tag body)
      (when (typep tag 'tag)
        (setf (tag-label tag) (next-label*))
        (setf (tag-unwind-exit tag) label)
        (when (or (tag-ref-clb tag) (tag-ref-ccb tag))
          (setf (tag-ref-clb tag) ref-clb)
          (when (tag-ref-ccb tag) (setf (tag-ref-ccb tag) ref-ccb))
          (wt-nl "if(eql(nlj_tag," (vv-str (tag-var tag)) ")) {")
	  (wt-nl "   ")
	  (reset-top)
	  (wt-nl "   ")
          (wt-go (tag-label tag))
	  (wt-nl "}"))))
    (wt-nl "FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);")
    (wt-nl "}")
    (let ((*unwind-exit* (cons label *unwind-exit*)))
      (c2tagbody-body body))))

(defun mcpt (tp)
  (when (consp (car (atomic-tp tp)))
    (list (pop tp) (copy-list (car tp)))))

(defun tag-throw (tag)
  (let ((v (remove-if (lambda (x &aux (v (pop x))(tp (pop x))(st (pop x))(m (car x))) 
			(and (type>= (type-and (var-dt v) tp) (var-type v)) (eq st (var-store v)) (if m (equal tp m) t)))
		      (cdr (assoc tag *bt*)))))
    (when v (throw tag (mapc (lambda (x &aux (v (pop x))(y x)(tp (pop x))(st (pop x))(m (car x))
					(t1 (type-and (var-dt v) (bbump-tp (type-or1 (or m tp) (var-type v))))))
			       (setf (car y) t1 y (cdr y)
				     (car y) (if (eq st (var-store v)) st +opaque+) y (cdr y)
				     (car y) (mcpt t1))) v)))))

;; (defun tag-throw (tag)
;;   (let ((v (remove-if (lambda (x &aux (v (pop x))(tp (pop x))(st (car x))) 
;; 			(and (type>= tp (var-type v)) (eq st (var-store v))))
;; 		      (cdr (assoc tag *bt*)))))
;;     (when v (throw tag (mapc (lambda (x &aux (v (pop x))(y x)(tp (pop x))(st (car x)))
;; 			       (setf (car y) (bbump-tp (type-or1 tp (var-type v))) y (cdr y)
;; 				     (car y) (if (eq st (var-store v)) st +opaque+))) v)))))

(defun c1go (args &aux (name (car args)) ccb clb inner)
  (cond ((endp args) (too-few-args 'go 1 0))
        ((not (endp (cdr args))) (too-many-args 'go 1 (length args)))
        ((not (or (symbolp name) (integerp name)))
         "The tag name ~s is not a symbol nor an integer." name))
  (dolist (tag *tags* (cmperr "The tag ~s is undefined." name))
    (case tag
	  (cb (setq ccb t inner (or inner 'cb)))
	  (lb (setq clb t inner (or inner 'lb)))
	  (t (when (eq (tag-name tag) name)
	       (tag-throw tag)
	       (let* ((ltag (list tag))
		      (info (make-info :type nil))
		      (c1fv (when ccb (c1inner-fun-var))))
		 (cond (ccb (setf (info-ref-ccb info) ltag))
		       (clb (setf (info-ref-clb info) ltag))
		       ((setf (info-ref info) ltag)))
		 (when c1fv (add-info info (cadr c1fv)))
		 (return (list 'go info tag ccb clb c1fv))))))))

;; (defun c1go (args &aux (name (car args)) ccb clb inner)
;;   (cond ((endp args) (too-few-args 'go 1 0))
;;         ((not (endp (cdr args))) (too-many-args 'go 1 (length args)))
;;         ((not (or (symbolp name) (integerp name)))
;;          "The tag name ~s is not a symbol nor an integer." name))
;;   (dolist (tag *tags* (cmperr "The tag ~s is undefined." name))
;;     (case tag
;; 	  (cb (setq ccb t inner (or inner 'cb)))
;; 	  (lb (setq clb t inner (or inner 'lb)))
;; 	  (t (when (eq (tag-name tag) name)
;; 	       (when *tvc*
;; 		 (let ((v (car *tvc*)))
;; 		   (when (var-tag v)
;; 		     (throw (var-tag v) v))))
;; 	       (let* ((ltag (list tag))
;; 		      (info (make-info :type nil))
;; 		      (c1fv (when ccb (c1inner-fun-var))))
;; 		 (cond (ccb (setf (info-ref-ccb info) ltag))
;; 		       (clb (setf (info-ref-clb info) ltag))
;; 		       ((setf (info-ref info) ltag)))
;; 		 (when c1fv (add-info info (cadr c1fv)))
;; 		 (return (list 'go info tag ccb clb c1fv))))))))

;; (defun c1go (args &aux (name (car args)) ccb clb inner)
;;   (cond ((endp args) (too-few-args 'go 1 0))
;;         ((not (endp (cdr args))) (too-many-args 'go 1 (length args)))
;;         ((not (or (symbolp name) (integerp name)))
;;          "The tag name ~s is not a symbol nor an integer." name))
;;   (dolist (tag *tags* (cmperr "The tag ~s is undefined." name))
;;     (case tag
;; 	  (cb (setq ccb t inner (or inner 'cb)))
;; 	  (lb (setq clb t inner (or inner 'lb)))
;; 	  (t (when (eq (tag-name tag) name)
;; 	       (when *tvc*
;; 		 (let ((v (car *tvc*)))
;; 		   (when (var-tag v)
;; 		     (throw (var-tag v) v))))
;; 	       (let* ((ltag (list tag))
;; 		      (info (make-info :type nil :tags ltag))
;; 		      (c1fv (when ccb (c1inner-fun-var))))
;; 		 (cond (ccb (setf (info-tref-ccb info) ltag))
;; 		       (clb (setf (info-tref-clb info) ltag))
;; 		       ((setf (info-tref info) ltag)))
;; 		 (when c1fv (add-info info (cadr c1fv)))
;; 		 (return (list 'go info tag ccb clb c1fv))))))))

;; (defun c1go (args)
;;   (cond ((endp args) (too-few-args 'go 1 0))
;;         ((not (endp (cdr args))) (too-many-args 'go 1 (length args)))
;;         ((not (or (symbolp (car args)) (integerp (car args))))
;;          "The tag name ~s is not a symbol nor an integer." (car args)))
;;   (do ((tags *tags* (cdr tags))
;;        (name (car args))
;;        ccb clb inner)
;;       ((endp tags) (cmperr "The tag ~s is undefined." name))
;;     (case (car tags)
;;       (cb (setq ccb t inner (or inner 'cb)))
;;       (lb (setq clb t inner (or inner 'lb)))
;;       (t (when (eq (tag-name (car tags)) name)
;; 	   (when *tvc*
;; 	     (let ((v (car *tvc*)))
;; 	       (when (var-tag v)
;; 		 (throw (var-tag v) v))))
;; 	   (let ((tag (car tags)))
;;              (cond (ccb (ref-inner inner) (setf (tag-ref-ccb tag) t))
;;                    (clb (setf (tag-ref-clb tag) t))
;;                    (t (setf (tag-ref tag) t)))
;;              (return (list 'go (make-info :type nil :tags (list tag)) clb ccb tag))))))))

(defun c2go (tag ccb clb c1fv)
  (declare (ignore c1fv))
  (cond (ccb (c2go-ccb tag))
        (clb (c2go-clb tag))
        (t (c2go-local tag))))

;; (defun c2go (clb ccb tag)
;;   (cond (ccb (c2go-ccb tag))
;;         (clb (c2go-clb tag))
;;         (t (c2go-local tag))))

(defun c2go-local (tag)
  (unless (is-ttl-tag tag) (unwind-no-exit (tag-unwind-exit tag)))
  (wt-nl) (wt-go (tag-label tag)))

(defun c2go-clb (tag)
  (wt-nl "vs_base=vs_top;")
  (wt-nl "unwind(frs_sch(")
  (if (tag-ref-ccb tag)
    (wt-vs* (tag-ref-clb tag))
  (wt-vs (tag-ref-clb tag)))
  (wt ")," (vv-str (tag-var tag)) ");")
  (unwind-exit nil))

(defun c2go-ccb (tag)
  (wt-nl "{frame_ptr fr;")
  (wt-nl "fr=frs_sch(") (wt-ccb-vs (tag-ref-ccb tag)) (wt ");")
  (wt-nl "if(fr==NULL)FEerror(\"The GO tag ~s is missing.\",1," (vv-str (tag-var tag)) ");")
  (wt-nl "vs_base=vs_top;")
  (wt-nl "unwind(fr," (vv-str (tag-var tag)) ");}")
  (unwind-exit nil))


(defun wt-switch-case (x)
  (cond (x (wt-nl (if (typep x #tfixnum) "case " "") x ":"))))

(defun or-branches (trv)
  (mapc (lambda (x &aux (v (pop x))) 
	  (setf (var-store v) (if (eq (var-store v) (cadr x)) (var-store v) +opaque+));FIXME *restore-vars*, centralize
	  (do-setq-tp v (list 'or-branches nil) (type-or1 (var-type v) (car x))))
	trv))

(defun c1switch (body)
  (flet ((tgs-p (x) (or (symbolp x) (integerp x)))) 
	(let* ((switch-op (pop body))
	       (info (make-info :type #tnil))
	       (switch-op-1 (c1arg switch-op info))
	       (st (info-type (cadr switch-op-1)))
	       (st (if (type>= #tfixnum st) st (baboon)))
	       tags
	       (body (remove-if (lambda (x) (when (tgs-p x) (prog1 (member x tags) (push x tags)))) body))
	       skip cs dfp rt
	       (body (remove-if-not (lambda (b)
				      (cond ((tgs-p b)
					     (unless cs (setq cs t skip t rt nil))
					     (let* ((e (object-type b))(df (type>= #tsymbol e))(e (if df st e)))
					       (cond ((and df dfp) (cmperr "default tag must be last~%"))
						     ((type-and st e) (setq skip nil dfp (or df dfp) rt (type-or1 rt e)))
						     ((keyed-cmpnote 'branch-elimination "Eliminating unreachable switch ~s" b)))))
					    ((not skip) (when cs (setq st (type-and st (cmp-norm-tp `(not ,rt))) cs nil)) t))) body))
	       (body (mapcar (lambda (x) (if (tgs-p x) (make-tag :name x :ref t :switch (if (typep x #tfixnum) x "default")) x)) body))
	       trv
	       (body (mapcar (lambda (x) (if (tag-p x) x (let ((x (c1branch t nil (list nil x) info))) 
							   (prog1 (pop x) (setq trv (append trv (car x))))))) body))
	       (ls (member-if 'consp body)))
	  (or-branches trv)
	  (when st (baboon))
	  (mapc (lambda (x) (assert (or (tag-p x) (not (info-type (cadr x)))))) body)
	  (if (unless (cdr ls) (ignorable-form switch-op-1))
	      (car ls)
	    (list 'switch info switch-op-1 body)))))

;; (defun c1switch(form &aux (*tags* *tags*) st ls)
;;   (let* ((switch-op  (car form))
;; 	 (body (cdr form))
;; 	 (info (make-info :type #tnull))
;; 	 (switch-op-1 (c1arg switch-op info)))
;;     (cond ((and (typep (second switch-op-1 ) 'info)
;; 		(type>= #tfixnum (setq st (info-type (second switch-op-1)))))
;; 	   ;;optimize into a C switch:
;; 	   ;;If we ever get GCC to do switch's with an enum arg,
;; 	   ;;which don't do bounds checking, then we will
;; 	   ;;need to carry over the restricted range.
;; 	   ;;more generally the compiler should carry along the original type
;; 	   ;;decl, not just the coerced one.  This needs another slot in
;; 	   ;;info.
;; 	   (or (member t body) (setq body (append body (list t))))
;; 	   ;; Remove duplicate tags in C switch statement -- CM 20031112
;; 	   (setq body
;; 		 (let (tags new-body)
;; 		   (dolist (b body)
;; 		     (cond ((or (symbolp b) (integerp b))
;; 			    (unless (member b tags)
;; 			      (push b tags)
;; 			      (push b new-body)))
;; 			   (t
;; 			    (push b new-body))))
;; 		   (nreverse new-body)))
;; 	   (setq body
;; 		 (let* (skip cs new-body dfp rt)
;; 		   (dolist (b body (nreverse new-body))
;; 		     (cond ((or (symbolp b) (integerp b))
;; 			    (unless cs (setq cs t skip t))
;; 			    (let* ((e (info-type (second (c1arg b))))
;; 				   (df (type>= #tsymbol e))
;; 				   (e (if df (cmp-norm-tp `(and integer (not ,rt))) e)))
;; 			      (cond ((and df dfp) (cmperr "default tag must be last~%"))
;; 				    ((type-and (info-type (second switch-op-1)) e)
;; 				     (setq skip nil dfp df rt (type-or1 rt e) 
;; 					   st (type-and st (cmp-norm-tp `(not ,e))))
;; 				     (push b new-body))
;; 				    ((keyed-cmpnote 'branch-elimination
;; 						    "Eliminating unreachable switch ~s" b)))))
;; 			   ((not skip) (setq cs nil) (push b new-body))))))
;; 	   (when (and (not st) 
;; 		      (not (cdr (setq ls (member-if 'consp body))))
;; ;		      (= 1 (count-if (lambda (x) (or (consp x) (symbolp x))) body));FIXME
;; 		      (ignorable-form switch-op-1))
;; 	     (return-from c1switch (c1expr (car ls))))
;; 	   (setq body
;; 		 (mapcar
;; 		  (lambda (x)
;; 		      (cond ((or (symbolp x) (integerp x))
;; 			     (let ((tag (make-tag :name x :ref
;; 						  nil
;; 						  :ref-ccb nil
;; 						  :ref-clb nil)))
;; 			       (cond((typep x #tfixnum)
;; 				     (setf (tag-ref tag) t)
;; 				     (setf (tag-switch tag) x))
;; 				    ((eq t x)
;; 				     (setf (tag-ref tag) t)
;; 				     (setf (tag-switch tag) "default")))
;; 			       tag))
;; 			    (t x)))
;; 		  body))
;; 	   (let ((d (c1arg `(tagbody ,@body) info)))
;; 	     (setf (info-type info) (info-type (cadr d)))
;; 	     (list* 'switch info switch-op-1 (cddr d))))
;; 	  ((c1expr (cmp-macroexpand-1 (cons 'switch form)))))))

;; (defun c1switch(form  &aux (*tags* *tags*) st ls)
;;   (let* ((switch-op  (car form))
;; 	 (body (cdr form))
;; 	 (switch-op-1 (c1expr switch-op)))
;;     (cond ((and (typep (second switch-op-1 ) 'info)
;; 		(type>= #tfixnum (setq st (info-type (second switch-op-1)))))
;; 	   ;;optimize into a C switch:
;; 	   ;;If we ever get GCC to do switch's with an enum arg,
;; 	   ;;which don't do bounds checking, then we will
;; 	   ;;need to carry over the restricted range.
;; 	   ;;more generally the compiler should carry along the original type
;; 	   ;;decl, not just the coerced one.  This needs another slot in
;; 	   ;;info.
;; 	   (or (member t body) (setq body (append body (list t))))
;; 	   ;; Remove duplicate tags in C switch statement -- CM 20031112
;; 	   (setq body
;; 		 (let (tags new-body)
;; 		   (dolist (b body)
;; 		     (cond ((or (symbolp b) (integerp b))
;; 			    (unless (member b tags)
;; 			      (push b tags)
;; 			      (push b new-body)))
;; 			   (t
;; 			    (push b new-body))))
;; 		   (nreverse new-body)))
;; 	   (setq body
;; 		 (let* (skip cs new-body dfp rt)
;; 		   (dolist (b body (nreverse new-body))
;; 		     (cond ((or (symbolp b) (integerp b))
;; 			    (unless cs (setq cs t skip t))
;; 			    (let* ((e (info-type (second (c1expr b))))
;; 				   (df (type>= #tsymbol e))
;; 				   (e (if df (cmp-norm-tp `(and integer (not ,rt))) e)))
;; 			      (cond ((and df dfp) (cmperr "default tag must be last~%"))
;; 				    ((type-and (info-type (second switch-op-1)) e)
;; 				     (setq skip nil dfp df rt (type-or1 rt e) 
;; 					   st (type-and st (cmp-norm-tp `(not ,e))))
;; 				     (push b new-body))
;; 				    ((keyed-cmpnote 'branch-elimination
;; 						    "Eliminating unreachable switch ~s" b)))))
;; 			   ((not skip) (setq cs nil) (push b new-body))))))
;; 	   (when (and (not st) 
;; 		      (not (cdr (setq ls (member-if 'consp body))))
;; ;		      (= 1 (count-if (lambda (x) (or (consp x) (symbolp x))) body));FIXME
;; 		      (ignorable-form switch-op-1))
;; 	     (return-from c1switch (c1expr (car ls))))
;; 	   (setq body
;; 		 (mapcar
;; 		  (lambda (x)
;; 		      (cond ((or (symbolp x) (integerp x))
;; 			     (let ((tag (make-tag :name x :ref
;; 						  nil
;; 						  :ref-ccb nil
;; 						  :ref-clb nil)))
;; 			       (cond((typep x #tfixnum)
;; 				     (setf (tag-ref tag) t)
;; 				     (setf (tag-switch tag) x))
;; 				    ((eq t x)
;; 				     (setf (tag-ref tag) t)
;; 				     (setf (tag-switch tag) "default")))
;; 			       tag))
;; 			    (t x)))
;; 		  body))
;; 	   (let ((tem (c1tagbody `(,@ body switch-finish-label))))
;; 	     (add-info (cadr tem) (cadr switch-op-1))
;; 	     (list* 'switch (cadr tem) switch-op-1 (cddr tem))))
;; 	  (t (c1expr (cmp-macroexpand-1 (cons 'switch form)))))))

;; (defun c1switch(form  &aux (*tags* *tags*) st ls)
;;   (let* ((switch-op  (car form))
;; 	 (body (cdr form))
;; 	 (switch-op-1 (c1expr switch-op)))
;;     (cond ((and (typep (second switch-op-1 ) 'info)
;; 		(type>= #tfixnum (setq st (info-type (second switch-op-1)))))
;; 	   ;;optimize into a C switch:
;; 	   ;;If we ever get GCC to do switch's with an enum arg,
;; 	   ;;which don't do bounds checking, then we will
;; 	   ;;need to carry over the restricted range.
;; 	   ;;more generally the compiler should carry along the original type
;; 	   ;;decl, not just the coerced one.  This needs another slot in
;; 	   ;;info.
;; 	   (or (member t body) (setq body (append body (list t))))
;; 	   ;; Remove duplicate tags in C switch statement -- CM 20031112
;; 	   (setq body
;; 		 (let (tags new-body)
;; 		   (dolist (b body)
;; 		     (cond ((or (symbolp b) (integerp b))
;; 			    (unless (member b tags)
;; 			      (push b tags)
;; 			      (push b new-body)))
;; 			   (t
;; 			    (push b new-body))))
;; 		   (nreverse new-body)))
;; 	   (setq body
;; 		 (let* (skip cs new-body dfp rt)
;; 		   (dolist (b body (nreverse new-body))
;; 		     (cond ((or (symbolp b) (integerp b))
;; 			    (unless cs (setq cs t skip t))
;; 			    (let* ((e (info-type (second (c1expr b))))
;; 				   (df (type>= #tsymbol e))
;; 				   (e (if df (cmp-norm-tp `(and integer (not ,rt))) e)))
;; 			      (cond ((and df dfp) (cmperr "default tag must be last~%"))
;; 				    ((type-and (info-type (second switch-op-1)) e)
;; 				     (setq skip nil dfp df rt (type-or1 rt e) 
;; 					   st (type-and st (cmp-norm-tp `(not ,e))))
;; 				     (push b new-body))
;; 				    ((keyed-cmpnote 'branch-elimination
;; 						    "Eliminating unreachable switch ~s" b)))))
;; 			   ((not skip) (setq cs nil) (push b new-body))))))
;; 	   (when (and (not st) 
;; 		      (not (cdr (setq ls (member-if 'consp body))))
;; ;		      (= 1 (count-if (lambda (x) (or (consp x) (symbolp x))) body));FIXME
;; 		      (ignorable-form switch-op-1))
;; 	     (return-from c1switch (c1expr (car ls))))
;; 	   (setq body
;; 		 (mapcar
;; 		  (lambda (x)
;; 		      (cond ((or (symbolp x) (integerp x))
;; 			     (let ((tag (make-tag :name x :ref
;; 						  nil
;; 						  :ref-ccb nil
;; 						  :ref-clb nil)))
;; 			       (cond((typep x #tfixnum)
;; 				     (setf (tag-ref tag) t)
;; 				     (setf (tag-switch tag) x))
;; 				    ((eq t x)
;; 				     (setf (tag-ref tag) t)
;; 				     (setf (tag-switch tag) "default")))
;; 			       tag))
;; 			    (t x)))
;; 		  body))
;; 	   (let ((tem (c1tagbody
;; 			`(,@ body
;; 			  switch-finish-label))))
;; 	     (nconc (list 'switch (cadr tem) switch-op-1)
;; 		    (cddr tem))
;; 	     ))
;; 	  (t (c1expr (cmp-macroexpand-1 (cons 'switch form)))))))

(defun c2switch (op body &aux (*inline-blocks* 0)(*vs* *vs*))
  (let ((args (inline-args (list op) `(,#tfixnum))))
    (wt-nl "")
    (wt-inline-loc "switch(#0){" args)
    (c2tagbody-local body)
    (wt "}")
    (unwind-exit nil)
    (close-inline-blocks)))

;; (defun c2switch (op ref-clb ref-ccb body &aux (*inline-blocks* 0)(*vs* *vs*))
;;   (let ((args (inline-args (list op) `(,#tfixnum))))
;;     (wt-nl "")
;;     (wt-inline-loc "switch(#0){" args)
;;     (cond (ref-ccb (c2tagbody-ccb body))
;; 	  (ref-clb (c2tagbody-clb body))
;; 	  (t (c2tagbody-local body)))
;;     (wt "}")
;;     (unwind-exit nil)
;;     (close-inline-blocks)))
	


;; SWITCH construct for Common Lisp. (TEST &body BODY) (in package SI)

;; TEST must evaluate to something of INTEGER TYPE.  If test matches one
;; of the labels (ie integers) in the body of switch, control will jump
;; to that point.  It is an error to have two or more constants which are
;; eql in the the same switch.  If none of the constants match the value,
;; then control moves to a label T.  If there is no label T, control
;; flows as if the last term in the switch were a T.  It is an error
;; however if TEST were declared to be in a given integer range, and at
;; runtime a value outside that range were provided.  The value of a
;; switch construct is undefined.  If you wish to return a value use a
;; block construct outside the switch and a return-from.  `GO' may also
;; be used to jump to labels in the SWITCH.

;; Control falls through from case to case, just as if the cases were
;; labels in a tagbody.  To jump to the end of the switch, use
;; (switch-finish).

;; The reason for using a new construct rather than building on CASE, is
;; that CASE does not allow the user to use invoke a `GO' if necessary.
;; to switch from one case to another.  Also CASE does not allow sharing
;; of parts of code between different cases.  They have to be either the
;; same or disjoint.

;; The SWITCH may be implemented very efficiently using a jump table, if
;; the range of cases is not too much larger than the number of cases.
;; If the range is much larger than the number of cases, a binary
;; splitting of cases might be used.

;; Sample usage:
;; (defun goo (x)
;;  (switch x
;;    1 (princ "x is one, ")
;;    2 (princ "x is one or two, ")
;;    (switch-finish)
;;    3 (princ "x is three, ")
;;    (switch-finish)	 
;;    t (princ "none")))

;; We provide a Common Lisp macro for implementing the above construct:


(defmacro switch (test &body body &aux cases)
  (dolist  (v body)
    (cond ((integerp v) (push `(if (eql ,v ,test) (go ,v) nil) cases))))
  `(tagbody
     ,@(nreverse cases)
     (go t)
     ,@ body
     ,@ (if (member t body) nil '(t))
     switch-finish-label))

(defmacro switch-finish nil '(go switch-finish-label))

  
(si::putprop 'switch 'c1switch 'c1special)
(si::putprop 'switch 'c2switch 'c2)
