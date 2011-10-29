(in-package :lisp)

(export '(car cdr caar cadr cdar cddr caaar caadr cadar caddr cdaar cdadr cddar cdddr
          caaaar caaadr caadar caaddr cadaar cadadr caddar cadddr cdaaar cdaadr cdadar
          cdaddr cddaar cddadr cdddar cddddr))

(in-package :si)

(defun car (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (lit :object (:object x) "->c.c_car"));  (cons-car x)

(defun cdr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (lit :object (:object x) "->c.c_cdr"));  (cons-cdr x)

(defun cadr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cdr x)))

(defun caar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (car x)))

(defun cdar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (car x)))

(defun cddr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cdr x)))

(defun caaar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (caar x)))
(defun caadr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cadr x)))
(defun cadar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cdar x)))
(defun cdaar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (caar x)))
(defun caddr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cddr x)))
(defun cdadr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cadr x)))
(defun cddar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cdar x)))
(defun cdddr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cddr x)))



(defun caaaar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (caaar x)))
(defun caaadr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (caadr x)))
(defun caadar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cadar x)))
(defun cadaar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cdaar x)))
(defun cdaaar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (caaar x)))
(defun caaddr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (caddr x)))
(defun cadadr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cdadr x)))
(defun cdaadr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (caadr x)))
(defun caddar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cddar x)))
(defun cdadar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cadar x)))
(defun cddaar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cdaar x)))
(defun cdddar (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cddar x)))
(defun cddadr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cdadr x)))
(defun cdaddr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (caddr x)))
(defun cadddr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (car (cdddr x)))
(defun cddddr (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (cdr (cdddr x)))
