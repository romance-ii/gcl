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


(in-package 'lisp)

(export '(make-sequence concatenate map some every notany notevery))

(in-package 'system)


(proclaim '(optimize (safety 2) (space 3)))


(defun make-sequence (type size	&key (initial-element nil iesp)
                                &aux element-type sequence)
  (setq element-type
        (cond ((eq type 'list)
               (return-from make-sequence
                (if iesp
                    (make-list size :initial-element initial-element)
                    (make-list size))))
              ((or (eq type 'simple-string) (eq type 'string)) 'string-char)
              ((or (eq type 'simple-bit-vector) (eq type 'bit-vector)) 'bit)
              ((or (eq type 'simple-vector) (eq type 'vector)) t)
              (t
               (setq type (normalize-type type))
               (when (subtypep (car type) 'list)
		 (if (or (and (eq 'null (car type)) (not (equal size 0)))
			 (and (eq 'cons (car type)) (equal size 0)))
		     (specific-error :wrong-type-argument "~S is not of type ~S." 
				     type (format nil "list (size ~S)" size)))
                     (return-from make-sequence
                      (if iesp
                          (make-list size :initial-element initial-element)
                          (make-list size))))
               (unless (or (eq (car type) 'array)
			   (eq (car type) 'simple-array))
		 (specific-error :wrong-type-argument "~S is not of type ~S." 
				 type 'sequence))
	       (let ((ssize (caddr type)))
		 (if (listp ssize) (setq ssize (car ssize)))
		 (if (not (si::fixnump ssize)) (setq ssize size))
		 (unless (equal ssize size)
		 (specific-error :wrong-type-argument "~S is not of type ~S." 
				 type (format nil "~S (size ~S)" type size))))
               (or (cadr type) t))))
  (setq element-type (si::best-array-element-type element-type))
  (setq sequence (si:make-vector element-type size nil nil nil nil nil))
  (when iesp
        (do ((i 0 (1+ i))
             (size size))
            ((>= i size))
          (declare (fixnum i size))
          (setf (elt sequence i) initial-element)))
  sequence)


(defun concatenate (result-type &rest sequences)
  (do ((x (make-sequence result-type
			 (apply #'+ (mapcar #'length sequences))))
       (s sequences (cdr s))
       (i 0))
      ((null s) x)
    (declare (fixnum i))
    (do ((j 0 (1+ j))
         (n (length (car s))))
        ((>= j n))
      (declare (fixnum j n))
      (setf (elt x i) (elt (car s) j))
      (incf i))))


(defun map (result-type function sequence &rest more-sequences)
  (setq more-sequences (cons sequence more-sequences))
  (let ((l (apply #'min (mapcar #'length more-sequences))))
    (if (null result-type)
        (do ((i 0 (1+ i))
             (l l))
            ((>= i l) nil)
          (declare (fixnum i l))
          (apply function (mapcar #'(lambda (z) (elt z i))
                                  more-sequences)))
        (let ((x (make-sequence result-type l)))
          (do ((i 0 (1+ i))
               (l l))
              ((>= i l) x)
            (declare (fixnum i l))
            (setf (elt x i)
                  (apply function (mapcar #'(lambda (z) (elt z i))
                                          more-sequences))))))))


(defun some (predicate sequence &rest more-sequences)
  (setq more-sequences (cons sequence more-sequences))
  (do ((i 0 (1+ i))
       (l (apply #'min (mapcar #'length more-sequences))))
      ((>= i l) nil)
    (declare (fixnum i l))
    (let ((that-value
           (apply predicate
                  (mapcar #'(lambda (z) (elt z i)) more-sequences))))
      (when that-value (return that-value)))))


(defun every (predicate sequence &rest more-sequences)
  (setq more-sequences (cons sequence more-sequences))
  (do ((i 0 (1+ i))
       (l (apply #'min (mapcar #'length more-sequences))))
      ((>= i l) t)
    (declare (fixnum i l))
    (unless (apply predicate (mapcar #'(lambda (z) (elt z i)) more-sequences))
            (return nil))))


(defun notany (predicate sequence &rest more-sequences)
  (not (apply #'some predicate sequence more-sequences)))


(defun notevery (predicate sequence &rest more-sequences)
  (not (apply #'every predicate sequence more-sequences)))
