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

;; (defun make-sequence-vector (element-type size iesp initial-element)
;;   (let ((sequence (si:make-vector element-type size nil nil nil nil nil)))
;;     (when iesp
;;       (do ((i 0 (1+ i))
;; 	   (size size))
;; 	  ((>= i size))
;; 	  (declare (fixnum i size))
;; 	  (setf (elt sequence i) initial-element)))
;;     sequence))

;(defconstant +make-sequence-list+ '(list vector string array null cons))

(defun expand-deftype (type &aux (atp (listp type)) (ctp (if atp (car type) type)) (tp (when atp (cdr type))))
  (if (si-classp ctp) (si-class-name ctp)
    (let ((tem (get ctp 'deftype-definition)))
      (when tem
	(let ((ntype (apply tem tp)))
	  (unless (eq ctp (if (listp ntype) (car ntype) ntype))
	    ntype))))))

(defun make-sequence (type size &key initial-element &aux ntype (atp (listp type)))
  (declare (optimize (safety 1)))
  (let ((res
	 (case (if atp (car type) type)
	       ((list cons member) (make-list size :initial-element initial-element))
	       ((vector array) (make-vector (upgraded-array-element-type (or (when atp (cadr type)) t)) size nil nil nil 0 nil initial-element))
	       (otherwise 'none))))
    (cond ((not (eq res 'none)) (check-type-eval res type) res)
	  ((setq ntype (expand-deftype type)) (make-sequence ntype size :initial-element initial-element))
	  ((check-type type (member list vector))))))

;; (defun make-sequence (type size &key (initial-element nil iesp))

;; ;  (let ((x (sequence-type-length-type type)))
;; ;    (when x (check-type-eval size x)))

;;   (let* ((tp (or (car (member (if (atom type) type (car type)) +coerce-list+))
;; 		 (car (member type +coerce-list+ :test 'subtypep1))))
;; 	 (res 
;; 	  (case tp
;; 		((list cons null)
;; 		 (make-list size :initial-element (and iesp initial-element)))
;; 		(string
;; 		 (make-sequence-vector 'character size iesp initial-element))
;; 		((vector array)
;; 		 (let ((element-type (sequence-type-element-type type)))
;; 		   (when (eq element-type 'error)
;; 		     (check-type type (member list vector)))
;; 		   (make-sequence-vector element-type size iesp initial-element)))
;; 		(otherwise (check-type type (member list vector))))))
;;     (check-type-eval res type)
;;     res))

;; (defun string-concatenate (&rest seqs)
;;   (declare (optimize (safety 2)) (:dynamic-extent seqs))
;;   (macrolet
;;    ((++ (x) `(prog1 ,x (incf ,x))))
;;    (mapl (lambda (x) (setf (car x) (string (car x)))) seqs);FIXME side-effects, and map
;;    (let* ((sl (reduce (lambda (y x) (+ y (length x))) seqs :initial-value 0))
;; 	  (rs (make-array sl :element-type 'character))(i 0))
;;      (dolist (seq seqs rs)
;;        (do* ((j 0)(ls (length seq))) ((>= j ls))
;; 	   (setf (aref rs (++ i)) (aref seq (++ j))))))))
;; (declaim (inline string-concatenate))

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

;; (defun concatenate (rt &rest seqs)
;;   (declare (optimize (safety 2)) (:dynamic-extent seqs))
;;   (macrolet
;;    ((++ (x) `(prog1 ,x (incf ,x))))
;;    (let* ((sl (reduce (lambda (y x) (+ y (length x))) seqs :initial-value 0))
;; 	  (rs (make-sequence rt sl))
;; 	  (rc (consp rs))(rh rs)(i 0))
;;      (dolist (seq seqs rs)
;;        (let* ((sc (consp seq))(sh seq)(j 0)
;; 	      (ls (if sc array-dimension-limit (length seq))))
;; 	 (do* nil ((or (>= j ls) (when sc (endp sh))))
;; 	      (let ((tmp (if sc (pop sh) (aref seq (++ j)))))
;; 		(if rc (setf (car rh) tmp rh (cdr rh))
;; 		  (setf (aref rs (++ i)) tmp)))))))))

(defun map (rt f seq &rest sqs &aux (seqs (cons seq sqs)) (l (length seqs)) (vals (make-list l)))
  (declare (optimize (safety 2)))
  (declare (:dynamic-extent sqs seqs vals))
  (let ((sl (reduce (lambda (y x) (min y (length x))) seqs :initial-value array-dimension-limit)))
    (do* ((x (when rt (make-sequence rt sl)))(xc (consp x))(xp x)(i 0 (1+ i)))
	 ((or (when xc (endp xp)) (>= i sl)) x)
	 (mapl (lambda (x y &aux (z (car x)))
		 (setf (car y) (if (listp z) (pop (car x)) (aref z i)))) seqs vals)
	 (let ((tmp (apply f vals)))
	   (cond (xc (setf (car xp) tmp xp (cdr xp))) (rt (setf (aref x i) tmp)))))))

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
