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


;;;;    numlib.lsp
;;;;
;;;;                           number routines


(in-package :system)

(defun rational (x)
  (declare (optimize (safety 1)))
  (check-type x real)
  (typecase x
    (float	  
      (multiple-value-bind
       (i e s) (integer-decode-float x)
       (let ((x (if (>= e 0) (ash i e) (/ i (ash 1 (- e))))))
	 (if (>= s 0) x (- x)))))
    (rational x)))
(setf (symbol-function 'rationalize) (symbol-function 'rational))

(defconstant imag-one #C(0 1))

(defun isqrt (i)
  (declare (optimize (safety 1)))
  (check-type i (integer 0))
  (if (zerop i)
      0
    (let ((n (integer-length i)))
      (do ((x (ash 1 (ceiling n 2)))
	   (y))
	  (nil)
	(setq y (floor i x))
	(when (<= x y)
	  (return x))
	(setq x (floor (+ x y) 2))))))

(deftype bytespec nil `(cons (integer 0) (integer 0)))

(defun byte (size position)
  (declare (optimize (safety 1)))
  (check-type size (integer 0))
  (check-type position (integer 0))
  (cons size position))

(defun byte-position (bytespec)
  (declare (optimize (safety 1)))
  (check-type bytespec cons)
  (cdr bytespec))

(defun byte-size (bytespec)
  (declare (optimize (safety 1)))
  (check-type bytespec cons)
  (car bytespec))

(defun ldb (bytespec integer)
  (declare (optimize (safety 1)))
  (check-type bytespec bytespec)
  (check-type integer integer)
  (logand (ash integer (- (byte-position bytespec)))
	  (1- (ash 1 (byte-size bytespec)))))

(defun ldb-test (bytespec integer)
  (declare (optimize (safety 1)))
  (check-type bytespec bytespec)
  (check-type integer integer)
  (not (zerop (ldb bytespec integer))))

(defun dpb (newbyte bytespec integer &aux (z (1- (ash 1 (byte-size bytespec)))))
  (declare (optimize (safety 1)))
  (check-type newbyte integer)
  (check-type bytespec bytespec)
  (check-type integer integer)
  (logior (logandc2 integer (ash z (byte-position bytespec)))
	  (ash (logand newbyte z) (byte-position bytespec))))

(defun deposit-field (newbyte bytespec integer &aux (z (ash (1- (ash 1 (byte-size bytespec))) (byte-position bytespec))))
  (declare (optimize (safety 1)))
  (check-type newbyte integer)
  (check-type bytespec bytespec)
  (check-type integer integer)
  (logior (logandc2 integer z) (logand newbyte z)))


(defun phase (x)
  (declare (optimize (safety 1)))
  (check-type x complex)
  (if (= 0 x) 0.0
       (atan (imagpart x) (realpart x))))

(defun signum (x) 
  (declare (optimize (safety 1)))
  (check-type x number)
  (if (zerop x) x (/ x (abs x))))

(defun cis (x) 
  (declare (optimize (safety 1)))
  (check-type x real)
  (exp (* #c(0 1) (float x))))


(defun ffloor (x &optional (y 1.0s0))
  (declare (optimize (safety 1)))
  (check-type x real)
  (check-type y real)
  (multiple-value-bind (i r) (floor x y)
    (values (float i (if (floatp x) x 1.0)) r)))

(defun fceiling (x &optional (y 1.0s0))
  (declare (optimize (safety 1)))
  (check-type x real)
  (check-type y real)
  (multiple-value-bind (i r) (ceiling x y)
    (values (float i (if (floatp x) x 1.0)) r)))

(defun ftruncate (x &optional (y 1.0s0))
  (declare (optimize (safety 1)))
  (check-type x real)
  (check-type y real)
  (multiple-value-bind (i r) (truncate x y)
    (values (float i (if (floatp x) x 1.0)) r)))

(defun fround (x &optional (y 1.0s0))
  (declare (optimize (safety 1)))
  (check-type x real)
  (check-type y real)
  (multiple-value-bind (i r) (round x y)
    (values (float i (if (floatp x) x 1.0)) r)))


(defun logtest (x y) 
  (declare (optimize (safety 1)))
  (check-type x integer)
  (check-type y integer)
  (not (zerop (logand x y))))
