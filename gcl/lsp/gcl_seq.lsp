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


(in-package 'lisp)

(export '(make-sequence concatenate map some every notany notevery))

(in-package 'system)


(eval-when (compile) (proclaim '(optimize (safety 1) (space 3))))


(defun make-sequence (type size &key (initial-element nil iesp)
                                &aux element-type sequence)  
  (setq element-type
        (cond ((eq type 'list)
               (return-from make-sequence
                (if iesp
                    (make-list size :initial-element initial-element)
                    (make-list size))))
              ((or (eq type 'simple-string) (eq type 'string)) 'character)
              ((or (eq type 'simple-bit-vector) (eq type 'bit-vector)) 'bit)
              ((or (eq type 'simple-vector) (eq type 'vector)) t)
              (t
	       (when (subtypep type 'list)
		 (let ((nn (subtypep type 'null)))
                   (when (if nn (/= size 0) (= size 0))
		     (specific-error :wrong-type-argument "~S is not of type ~S." 
				     type (format nil "list (size ~S)" size)))
                   (return-from make-sequence
                     (if iesp
                         (make-list size :initial-element initial-element)
                         (make-list size)))))
               (let ((normalized-type (normalize-type type)))
;                 (when (member (car normalized-type) '(cons null))  ;(subtypep (car normalized-type) 'list)
;                   (if (or (and (eq 'null (car normalized-type)) (not (equal size 0)))
;                           (and (eq 'cons (car normalized-type)) (equal size 0)))
;                       (specific-error :wrong-type-argument "~S is not of type ~S." 
;                                       type (format nil "list (size ~S)" size)))
;                   (return-from make-sequence
;                     (if iesp
;                         (make-list size :initial-element initial-element)
;                         (make-list size))))
;                 (when (and (equal normalized-type '(member nil)) (equal size 0))
;                   (return-from make-sequence nil))
                 (unless (or (eq (car normalized-type) 'array)
                             (eq (car normalized-type) 'simple-array))
                   (specific-error :wrong-type-argument "~S is not of type ~S." 
                                   type 'sequence))
                 (let ((ssize (caddr normalized-type)))
                   (if (listp ssize) (setq ssize (car ssize)))
                   (if (not (si::fixnump ssize)) (setq ssize size))
                   (unless (equal ssize size)
                     (specific-error :wrong-type-argument "~S is not of type ~S." 
                                     type (format nil "~S (size ~S)" type size))))
                 (or (cadr normalized-type) t)))))
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
  (if (eq result-type 'list)
      (let* ((head (cons nil nil))
             (tail head))
        (dolist (s sequences (cdr head))
          (if (listp s)
              (dolist (e s)
                (setf tail (setf (cdr tail) (cons e nil))))
              (let ((len (length s)))
                (declare (type fixnum len))
                (do ((i 0 (1+ i)))
                    ((>= i len))
		  (declare (type fixnum i))
                  (setf tail (setf (cdr tail) (cons (elt s i) nil))))))))
      (do ((x (make-sequence result-type
                             (apply #'+ (mapcar #'length sequences))))
           (s sequences (cdr s))
           (i 0))
          ((null s) x)
        (declare (fixnum i))
        (if (listp (car s))
            (dolist (e (car s))
              (setf (elt x i) e)
              (incf i))
            (do ((j 0 (1+ j))
                 (n (length (car s))))
                ((>= j n))
              (declare (fixnum j n))
              (setf (elt x i) (elt (car s) j))
              (incf i))))))


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
  (cond
    ((and (listp sequence) (null more-sequences))
     ;; special case -- only one sequence, and it's a list
     (dolist (e sequence nil)
       (let ((that-value (funcall predicate e)))
         (when that-value (return that-value)))))
    (t
     (let* ((more-sequences (cons sequence more-sequences)))
       (do ((i 0 (1+ i))
            (l (apply #'min (mapcar #'length more-sequences))))
           ((>= i l) nil)
         (declare (fixnum i l))
         (let ((that-value
                (apply predicate
                       ;; (mapcar #'(lambda (z) (elt z i)) more-sequences)
                       (let* ((head (cons nil nil))
                              (tail head))
                         (do ((s more-sequences (cdr s)))
                             ((null s) (cdr head))
                           (let ((e (car s)))
                             (setf tail (setf (cdr tail)
                                              (cons (if (consp e) (pop (car s)) (elt e i))
                                                    nil))))))
                       )))
           (when that-value (return that-value))))))))

(defun every (predicate sequence &rest more-sequences)
  (cond
    ((and (listp sequence) (null more-sequences))
     ;; special case -- only one sequence, and it's a list
     (dolist (e sequence t)
       (unless (funcall predicate e) (return nil))))
    (t
     (let* ((more-sequences (cons sequence more-sequences)))
       (do ((i 0 (1+ i))
            (l (apply #'min (mapcar #'length more-sequences))))
           ((>= i l) t)
         (declare (fixnum i l))
         (unless (apply predicate
                        ;; (mapcar #'(lambda (z) (elt z i)) more-sequences)
                        (let* ((head (cons nil nil))
                               (tail head))
                          (do ((s more-sequences (cdr s)))
                              ((null s) (cdr head))
                            (let ((e (car s)))
                              (setf tail (setf (cdr tail)
                                               (cons (if (consp e) (pop (car s)) (elt e i))
                                                     nil)))))))
           (return nil)))))))

(defun notany (predicate sequence &rest more-sequences)
  (not (apply 'some predicate sequence more-sequences)))


(defun notevery (predicate sequence &rest more-sequences)
  (not (apply 'every predicate sequence more-sequences)))
