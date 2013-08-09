;; -*-Lisp-*-
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


;;;;   seq.lsp
;;;;
;;;;                           sequence routines


;; (in-package 'lisp)

;; (export '(make-sequence concatenate map map-into))

(in-package :system)

(defun or-sequence-tp (tp &aux (l (load-time-value `(list ,@(mapcar (lambda (x) `(vector ,x)) +array-types+) vector))))
  (let ((x (remove-duplicates (mapcar (lambda (x) (car (member x l :test 'subtypep))) (cdr tp)))))
    (unless (cdr x) (car x))))

(defun make-sequence (type size &key initial-element &aux (atp (listp type)))
  (declare (optimize (safety 1)))
  (flet ((chk (res) (unless (typep res type) (error 'type-error :datum res :expected-type type)) res))
	(case (if atp (car type) type)
	      (or (chk (make-sequence (or-sequence-tp type) size :initial-element initial-element)))
	      ((list cons member) (chk (make-list size :initial-element initial-element)))
	      ((vector array) (chk (make-vector
				    (upgraded-array-element-type (or (when atp (cadr type)) t))
				    size nil nil nil 0 nil initial-element)))
	      (otherwise (let ((ntype (expand-deftype type)))
			   (if ntype (make-sequence ntype size :initial-element initial-element)
			     (check-type type (member list vector))))))))

(defun concatenate (rt &rest seqs)
  (declare (optimize (safety 2)) (:dynamic-extent seqs))
  (macrolet
   ((++ (x) `(prog1 ,x (incf ,x))))
   (let* ((rs (make-sequence rt (reduce (lambda (y x) (+ y (length x))) seqs :initial-value 0)))
	  (rt (unless (listp rs) (array-element-type rs)))(rh rs)(i 0))
     (dolist (seq seqs rs)
       (let* ((st (unless (listp seq) (array-element-type seq)))(sh seq)(j 0)
	      (ls (if st (length seq) array-dimension-limit)))
	 (do nil ((or (>= j ls) (unless st (endp sh))))
	     (if (when rt (eq rt st)) (set-array rs (++ i) seq (++ j))
	       (let ((tmp (if st (aref seq (++ j)) (pop sh))))
		 (if rt (setf (aref rs (++ i)) tmp)
		   (setf (car rh) tmp rh (cdr rh)))))))))))

(eval-when
 (compile eval)

 (defmacro locsym (f s) `(si::sgen (concatenate 'string (string ,f) ,s)))
 
 (defmacro dyncpl (x &aux (l (locsym 'dyncpl "-LOOP")));FIXME this can't cons in a labels as it might be a separate fn.  Get do to unroll too.
   `(labels ((,l (x y) (when x (setf (car x) (car y)) (,l (cdr x) (cdr y)))))
	    (declare (notinline make-list))
	    (let ((tmp (make-list (length ,x))))
	      (declare (:dynamic-extent tmp))
	      (,l tmp ,x);Can't be mapl, used by
	     tmp)))

 ;; (defmacro seqend (seq seqs &aux (l (locsym 'seqend "-LOOP"))(ll (locsym 'seqend "-LOOP")))
 ;;   `(labels ((,ll (x) (if (listp x) array-dimension-limit (length x)))
 ;; 	     (,l (s z) (if s (,l (cdr s) (min (,ll (car s)) z)) z)))
 ;; 	    (,l ,seqs (length ,seq))))
 
 (defmacro seqval (seq place i)
   `(if (listp ,seq) (pop ,place) (aref ,seq ,i)))

 (defmacro seqvals (vals ns i)
   `(mapl (lambda (x y &aux (yc (car y))) (setf (car x) (seqval yc (car y) ,i))) ,vals ,ns)))

(defun map (rt f seq &rest sqs &aux (f (coerce f 'function)) (l (listp seq));FIXME test array-dimension-limit instead of length for lists
	       (sl (reduce (lambda (y x) (min y (length x))) sqs :initial-value (length seq)))
	       (x (when rt (make-sequence rt sl))))
  (declare (optimize (safety 2))(dynamic-extent sqs))
  (check-type rt type-spec)
  (check-type f function-designator)
  (check-type seq sequence)
  (labels ((ml (i xp seq ns vals) 
	       (unless (>= i sl)
		 (let ((tmp (apply f (if l (car seq) (aref seq i)) (seqvals vals ns i))))
		   (cond (xp (setf (car xp) tmp)) (rt (setf (aref x i) tmp))))
		 (ml (1+ i) (cdr xp) (if l (cdr seq) seq) ns vals))))
	  (ml 0 (when (consp x) x) seq (dyncpl sqs) (dyncpl sqs)) x))

;; (defun map (rt f seq &rest sqs &aux (f (tofn f)) (l (listp seq)) (sl (seqend seq sqs))(x (when rt (make-sequence rt sl))))
;;   (declare (optimize (safety 2)) (dynamic-extent sqs))
;;   (check-type rt type-spec)
;;   (check-type f fn)
;;   (check-type seq sequence)
;;   (labels ((ml (i xp seq ns vals) 
;; 	       (unless (or (>= i sl) (when l (endp seq)) (member-if (lambda (x) (when (listp x) (endp x))) ns))
;; ;	       (when (and (< i sl) (if l (not (endp seq)) t) (not (member-if (lambda (x) (when (listp x) (endp x))) ns)))
;; 		 (let ((tmp (apply f (if l (car seq) (aref seq i)) (seqvals vals ns i))))
;; 		   (cond (xp (setf (car xp) tmp)) (rt (setf (aref x i) tmp))))
;; 		 (ml (1+ i) (cdr xp) (if l (cdr seq) seq) ns vals))))
;; 	  (ml 0 (when (consp x) x) seq (dyncpl sqs) (dyncpl sqs)) x))

;; (defun map (rt f seq &rest sqs &aux (seqs (cons seq sqs)) (l (length seqs)) (vals (make-list l)))
;;   (declare (optimize (safety 2)))
;;   (declare (:dynamic-extent sqs seqs vals))
;;   (let ((sl (reduce (lambda (y x) (min y (length x))) seqs :initial-value array-dimension-limit)))
;;     (do* ((x (when rt (make-sequence rt sl)))(xc (consp x))(xp x)(i 0 (1+ i)))
;; 	 ((or (when xc (endp xp)) (>= i sl)) x)
;; 	 (mapl (lambda (x y &aux (z (car x)))
;; 		 (setf (car y) (if (listp z) (pop (car x)) (aref z i)))) seqs vals)
;; 	 (let ((tmp (apply f vals)))
;; 	   (cond (xc (setf (car xp) tmp xp (cdr xp))) (rt (setf (aref x i) tmp)))))))

(defun map-into (rs g &rest seqs &aux 
		    (h rs) (lp (unless (listp rs) (array-total-size rs))) 
		    (fp (when lp (array-has-fill-pointer-p rs)))(j 0))
  (declare (optimize (safety 2)))
  (declare (:dynamic-extent seqs))
  (when fp (setf (fill-pointer rs) lp))
  (block exit
	 (apply 'map nil
		(lambda (x &rest r) 
		  (when (if lp (= j lp) (endp h)) (return-from exit))
		  (let ((tmp (apply g r))) 
		    (if lp (setf (aref rs j) tmp j (1+ j)) (setf (car h) tmp h (cdr h))))) rs seqs))
  (when fp (setf (fill-pointer rs) j))
  rs)
