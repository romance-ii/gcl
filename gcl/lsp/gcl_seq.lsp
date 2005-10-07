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


(defun make-sequence (type size &key (initial-element nil iesp))

  (let ((x (sequence-type-length-type type)))
    (when x (assert-type size x)))
  (cond 
   ((subtypep1 type 'list)
    (make-list size :initial-element (and iesp initial-element)))
   ((subtypep1 type 'array)
    (let ((element-type (sequence-type-element-type type)))
      (unless element-type
	(assert-type type '(member list array)))
      (let ((sequence (si:make-vector element-type size nil nil nil nil nil)))
	(when iesp
	  (do ((i 0 (1+ i))
	       (size size))
	      ((>= i size))
	      (declare (fixnum i size))
	      (setf (elt sequence i) initial-element)))
	sequence)))
   ((assert-type type '(member list array)))))


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
