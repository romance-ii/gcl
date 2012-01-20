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


;;;;    arraylib.lsp
;;;;
;;;;                            array routines


;; (in-package :lisp)


;; (export '(make-array array-displacement vector
;;           array-element-type array-rank array-dimension
;;           array-dimensions
;;           array-in-bounds-p array-row-major-index
;;           adjustable-array-p
;;           bit sbit 
;;           bit-and bit-ior bit-xor bit-eqv bit-nand bit-nor
;;           bit-andc1 bit-andc2 bit-orc1 bit-orc2 bit-not
;;           array-has-fill-pointer-p fill-pointer
;;           vector-push vector-push-extend vector-pop
;;           adjust-array))

(in-package :system)

(defun upgraded-array-element-type (type &optional environment)
  (declare (ignore environment) (optimize (safety 1)))
  (cond ((not type))
	((eq type '*) '*)
	((car (member type +array-types+)))
	((car (member type +array-types+ :test 'subtypep1)))
	((subtypep1 type 'float) 'long-float)
	(t)))

(defun fill-pointer (x)
  (declare (optimize (safety 2)))
  (check-type x fpvec)
  (fill-pointer-internal x))

(defun make-array (dimensions
		   &key element-type
			initial-element
			(initial-contents nil icsp)
			adjustable fill-pointer
			displaced-to (displaced-index-offset 0)
			static
		   &aux
			(dimensions (if (and (listp dimensions) (not (cdr dimensions))) (car dimensions) dimensions))
			(element-type (upgraded-array-element-type element-type)))
  (declare (optimize (safety 1)))
  (check-type fill-pointer (or boolean integer))
  (check-type displaced-to (or null array))
  (check-type displaced-index-offset integer)
  (etypecase 
   dimensions
   (list
    (let ((dimensions (dolist (d dimensions dimensions) (check-type d integer)))
	  (x (make-array1 (get-aelttype element-type) static initial-element displaced-to displaced-index-offset dimensions)))
      (assert (not fill-pointer))
      (unless (member 0 dimensions)
	(when icsp
	  (do ((j nil t)(cursor (make-list (length dimensions) :initial-element 0)))
	      ((when j (increment-cursor cursor dimensions)))
	      (declare (:dynamic-extent cursor))
	      (aset-by-cursor x (sequence-cursor initial-contents cursor) cursor))))
      x))
    (integer
     (let ((x (make-vector element-type dimensions adjustable (when fill-pointer dimensions)
			   displaced-to displaced-index-offset static initial-element)))
       (when icsp (replace x initial-contents))
       (when (and fill-pointer (not (eq t fill-pointer))) (setf (fill-pointer x) fill-pointer))
       x))))

;; (defun make-array (dimensions
;; 		   &key (element-type t)
;; 			(initial-element nil)
;; 			(initial-contents nil initial-contents-supplied-p)
;; 			adjustable fill-pointer
;; 			displaced-to (displaced-index-offset 0)
;; 			static)
;;   (when (integerp dimensions) (setq dimensions (list dimensions)))
;;   (setq element-type (or (upgraded-array-element-type element-type) 'character))
;;   (cond ((= (length dimensions) 1)
;; 	 (let ((x (si:make-vector element-type (car dimensions)
;; 	                          adjustable fill-pointer
;; 	                          displaced-to displaced-index-offset
;; 	                          static initial-element)))
;; 	   (when initial-contents-supplied-p
;; 		 (do ((n (car dimensions))
;; 		      (i 0 (1+ i)))
;; 		     ((>= i n))
;; 		   (declare (fixnum n i))
;; 		   (si:aset (elt initial-contents i) x i)))
;; 	   x))
;;         (t
;; 	 (let ((x
;; 		(make-array1
;; 		       (the fixnum (get-aelttype element-type))
;; 			static initial-element 
;; 		       displaced-to (the fixnum displaced-index-offset)
;; 		       dimensions)))
;; 	   (if fill-pointer (error "fill pointer for 1 dimensional arrays only"))
;;            (unless (member 0 dimensions)
;; 	   (when initial-contents-supplied-p
;; 		 (do ((cursor
;; 		       (make-list (length dimensions)
;; 		                  :initial-element 0)))
;; 		     (nil)
;; 		     (declare (:dynamic-extent cursor))
;; 		   (aset-by-cursor x
;; 			           (sequence-cursor initial-contents
;; 			                            cursor)
;; 				   cursor)
;; 		   (when (increment-cursor cursor dimensions)
;;                           (return nil)))))
;;             x))))


(defun increment-cursor (cursor dimensions)
  (if (null cursor)
      t
      (let ((carry (increment-cursor (cdr cursor) (cdr dimensions))))
	(if carry
	    (cond ((>= (the fixnum (1+ (the fixnum (car cursor))))
	               (the fixnum (car dimensions)))
		   (rplaca cursor 0)
		   t)
		  (t
		   (rplaca cursor
		           (the fixnum (1+ (the fixnum (car cursor)))))
		   nil))
	    nil))))


(defun sequence-cursor (sequence cursor)
  (if (null cursor)
      sequence
      (sequence-cursor (elt sequence (the fixnum (car cursor)))
                       (cdr cursor))))


(defun vector (&rest objects &aux (l (list (length objects))))
  (declare (:dynamic-extent objects l))
  (make-array l :element-type t :initial-contents objects))


(defun array-dimensions (array)
  (do ((i (array-rank array))
       (d nil))
      ((= i 0) d)
    (setq i (1- i))
    (setq d (cons (array-dimension array i) d))))


(defun array-in-bounds-p (array &rest indices &aux (r (array-rank array)))
  (declare (:dynamic-extent indices))
  (when (/= r (length indices))
        (error "The rank of the array is ~R,~%~
               ~7@Tbut ~R ~:*~[indices are~;index is~:;indices are~] ~
               supplied."
               r (length indices)))
  (do ((i 0 (1+ i))
       (s indices (cdr s)))
      ((>= i r) t)
    (when (or (< (car s) 0)
              (>= (car s) (array-dimension array i)))
          (return nil))))


(defun array-row-major-index (array &rest indices)
  (declare (:dynamic-extent indices))
  (do ((i 0 (1+ i))
       (j 0 (+ (* j (array-dimension array i)) (car s)))
       (s indices (cdr s)))
      ((null s) j)))


(defun bit (bit-array &rest indices)
  (declare (:dynamic-extent indices))
  (apply #'aref bit-array indices))


(defun sbit (bit-array &rest indices)
  (declare (:dynamic-extent indices))
  (apply #'aref bit-array indices))


(defun bit-and (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-and bit-array1 bit-array2 result-bit-array))


(defun bit-ior (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-ior bit-array1 bit-array2 result-bit-array))


(defun bit-xor (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-xor bit-array1 bit-array2 result-bit-array))


(defun bit-eqv (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-eqv bit-array1 bit-array2 result-bit-array))

    
(defun bit-nand (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-nand bit-array1 bit-array2 result-bit-array))

    
(defun bit-nor (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-nor bit-array1 bit-array2 result-bit-array))

    
(defun bit-andc1 (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-andc1 bit-array1 bit-array2 result-bit-array))

    
(defun bit-andc2 (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-andc2 bit-array1 bit-array2 result-bit-array))

    
(defun bit-orc1 (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-orc1 bit-array1 bit-array2 result-bit-array))

    
(defun bit-orc2 (bit-array1 bit-array2 &optional result-bit-array)
  (bit-array-op boole-orc2 bit-array1 bit-array2 result-bit-array))

    
(defun bit-not (bit-array &optional result-bit-array)
  (bit-array-op boole-c1 bit-array bit-array result-bit-array))


(defun vector-push (new-element vector)
  (declare (optimize (safety 2)))
  (check-type vector fpvec)
  (let ((fp (fill-pointer vector)))
    (cond ((< fp (array-dimension vector 0))
           (si:aset new-element vector fp)
           (si:fill-pointer-set vector (1+ fp))
	   fp))))


(defun vector-push-extend (new-element vector &optional extension)
  (declare (optimize (safety 2)))
  (check-type vector fpvec)
  (let ((fp (fill-pointer vector))
	(dim (array-dimension vector 0)))
    (unless (< fp dim)
      (adjust-array vector (the seqind (+ dim (or extension (max 5 dim))))
		    :element-type (array-element-type vector)
		    :fill-pointer fp))
    (si:aset new-element vector fp)
    (si:fill-pointer-set vector (1+ fp))
    fp))


(defun vector-pop (vector)
  (declare (optimize (safety 2)))
  (check-type vector fpvec)
  (let ((fp (fill-pointer vector)))
    (when (= fp 0)
          (error "The fill pointer of the vector ~S zero." vector))
    (fill-pointer-set vector (1- fp))
    (aref vector (1- fp))))


(defun adjust-array (array new-dimensions
                     &rest r
		     &key element-type
			  initial-element
			  (initial-contents nil initial-contents-supplied-p)
			  (fill-pointer nil fill-pointer-supplied-p)
			  (displaced-to nil)
			  (displaced-index-offset 0)
			  (static nil static-supplied-p))

  (declare (ignore initial-element initial-contents static displaced-index-offset) ;FIXME
	   (:dynamic-extent r)
	   (optimize (safety 2)))

  (check-type array array)
  (check-type new-dimensions (or seqind proper-list))

  (when (and (listp new-dimensions) (not (cdr new-dimensions))) (setq new-dimensions (car new-dimensions)))
  
  (setq element-type (array-element-type array))
  (unless (eq element-type t)
    (setq r (cons element-type r) r (cons :element-type r)))

  (unless static-supplied-p
    (setq r (cons (staticp array) r) r (cons :static r)))

  (cond (fill-pointer-supplied-p
	 (let ((fill-pointer (or fill-pointer (when (array-has-fill-pointer-p array) (fill-pointer array)))))
	   (setf (cadr (member :fill-pointer r)) fill-pointer)))
	((array-has-fill-pointer-p array) (setq r (cons (fill-pointer array) r) r (cons :fill-pointer r))))
      
  (let ((x (apply 'make-array new-dimensions :adjustable t r)))	

    (unless (or displaced-to initial-contents-supplied-p)

      (cond ((or (seqindp new-dimensions)
		 (and (equal (cdr new-dimensions)
			     (cdr (array-dimensions array)))
		      (or (not (eq element-type 'bit))
			  (when new-dimensions (= 0 (mod (the seqind (car (last new-dimensions))) char-length))))))
	     (copy-array-portion
	      array x 0 0 (min (array-total-size x)
			       (array-total-size array))))
	    ((do ((cursor (make-list (length new-dimensions) :initial-element 0)))
		 (nil)
	       (declare (:dynamic-extent cursor))
	       (when (apply 'array-in-bounds-p array cursor)
		 (aset-by-cursor x (apply 'aref array cursor) cursor))
	       (when (increment-cursor cursor new-dimensions)
		 (return nil))))))

    (replace-array array x)

    (when (eq fill-pointer t)
      (setq fill-pointer (array-total-size array)))
    (when fill-pointer
      (setf (fill-pointer array) fill-pointer))
   
    array))