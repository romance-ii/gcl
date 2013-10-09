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


;; (in-package 'lisp)
;; (export
;;  '(isqrt abs phase signum cis asin acos sinh cosh tanh
;;    asinh acosh atanh
;;    rational rationalize
;;    ffloor fround ftruncate fceiling
;;    lognand lognor logandc1 logandc2 logorc1 logorc2
;;    lognot logtest
;;    byte byte-size byte-position
;;    ldb ldb-test mask-field dpb deposit-field
;;    ))


(in-package :system)


(defun rational (x)
  (etypecase x
    (float	  
      (multiple-value-bind
       (i e s) (integer-decode-float x)
       (let ((x (if (>= e 0) (ash i e) (/ i (ash 1 (- e))))))
	 (if (>= s 0) x (- x)))))
    (rational x)))
(setf (symbol-function 'rationalize) (symbol-function 'rational))

(defconstant imag-one #C(0 1))

(defun isqrt (i)
       (unless (and (integerp i) (>= i 0))
	       (error 'type-error :datum i :expected-type `(integer 0 ,most-positive-fixnum)))
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


;(defun logandc2 (x y) (boole boole-andc2 x y))

;; (defstruct byte
;;   (position 0 :type (integer 0))
;;   (size     0 :type (integer 0)))

;; (defun byte (size position)
;;   (declare (optimize (safety 1)))
;;   (check-type size (integer 0))
;;   (check-type position (integer 0))
;;   (make-byte :size size :position position))

(defun byte (size position)
  (cons size position))
(defun byte-position (bytespec)
  (check-type bytespec cons)
  (cdr bytespec))
(defun byte-size (bytespec)
  (check-type bytespec cons)
  (car bytespec))
(defun ldb (bytespec integer)
  (logandc2 (ash integer (- (byte-position bytespec)))
	    (- (ash 1 (byte-size bytespec)))))
(defun mask-field (bytespec integer)
  (ash (ldb bytespec integer) (byte-position bytespec)))
(defun dpb (newbyte bytespec integer)
  (logxor integer
	  (mask-field bytespec integer)
	  (ash (logandc2 newbyte
			 (- (ash 1 (byte-size bytespec))))
	       (byte-position bytespec))))



(defun phase (x)
  (if (= 0 x) 0.0
       (atan (imagpart x) (realpart x))))

;; (defun signum (x)
;;   (declare (optimize (safety 1)))
;;   (check-type x number)
;;   (typecase
;;    x
;;    (rational (cond ((zerop x) x) ((plusp x) 1) (-1)))
;;    (real     (cond ((zerop x) x) ((plusp x) (float 1 x)) ((float -1 x))))
;;    (otherwise (cond ((zerop x) x) ((/ x (abs x)))))))

(defun signum (x) (if (zerop x) x (/ x (abs x))))

(defun cis (x) 
  (declare (optimize (safety 1)))
  (check-type x real)
  (exp (* #c(0 1) (float x))))

;; (defmacro asincos (x f)
;;   (let* ((rad (list 'sqrt (list '- 1d0 (list '* x x))))
;; 	 (ff (if f (list '* imag-one x) x))
;; 	 (ss (if f rad (list '* imag-one rad))))
;;     `(let* ((sf (or (typep ,x 'short-float) (typep ,x '(complex short-float))))
;; 	    (c (- (* imag-one
;; 		     (log (+ ,ff ,ss)))))
;; 	    (c (if (or (and (not (complexp ,x)) (<= ,x 1) (>= ,x -1))
;; 		       (zerop (imagpart c)))
;; 		   (realpart c)
;; 		 c)))
;;        (if sf (coerce c (if (complexp c) '(complex short-float) 'short-float)) c))))

;; (defun asin (x)
;;   (asincos x t))

;; (defun acos (x)
;;   (asincos x nil))

;; (defun sinh (z)
;;   (cond ((complexp z)
;; 	 ;; For complex Z, compute the real and imaginary parts
;; 	 ;; separately to get better precision.
;; 	 (let ((x (realpart z))
;; 	       (y (imagpart z)))
;; 	   (complex (* (sinh x) (cos y))
;; 		    (* (cosh x) (sin y)))))
;; 	(t				; Should this be (realp z) instead of t?
;; 	 (let ((limit #.(expt (* double-float-epsilon 45/2) 1/5)))
;; 	   (if (< (- limit) z limit)
;; 	       ;; For this region, write use the fact that sinh z =
;; 	       ;; z*exp(z)*[(1 - exp(-2z))/(2z)].  Then use the first
;; 	       ;; 4 terms in the Taylor series expansion of
;; 	       ;; (1-exp(-2z))/2/z.  series expansion of (1 -
;; 	       ;; exp(2*x)).  This is needed because there is severe
;; 	       ;; roundoff error calculating (1 - exp(-2z)) for z near
;; 	       ;; 0.
;; 	       (* z (exp z)
;; 		  (- 1 (* z
;; 			  (- 1 (* z
;; 				  (- 2/3 (* z
;; 					    (- 1/3 (* 2/15 z)))))))))
;; 	       (let ((e (exp z)))
;; 		 (* 1/2 (- e (/ e)))))))))

;(defun sinh (x) (/ (- (exp x) (exp (- x))) 2.0d0))

;; (defun cosh (z)
;;   (cond ((complexp z)
;; 	 ;; For complex Z, compute the real and imaginary parts
;; 	 ;; separately to get better precision.
;; 	 (let ((x (realpart z))
;; 	       (y (imagpart z)))
;; 	   (complex (* (cosh x) (cos y))
;; 		    (* (sinh x) (sin y)))))
;; 	(t				; Should this be (realp z) instead of t?
;; 	 ;; For real Z, there's no chance of round-off error, so
;; 	 ;; direct evaluation is ok.
;; 	 (let ((e (exp z)))
;; 	   (* 1/2 (+ e (/ e)))))))
;(defun cosh (x) (/ (+ (exp x) (exp (- x))) 2.0d0))
;(defun tanh (x) (/ (sinh x) (cosh x)))

;(defun asinh (x) (log (+ x (sqrt (+ 1 (* x x))))))
;(defun acosh (x)
;  (log (+ x
;	  (* (1+ x)
;	     (sqrt (/ (1- x) (1+ x)))))))
;(defun acosh (x)
;       (log (+ x
;	       (sqrt (* (1- x) (1+ x))))))
;(defun acosh (x)
;  (* 2 (log (+ (sqrt (/ (1+ x) 2)) (sqrt (/ (1- x) 2))))))
;(defun atanh (x)
;       (when (or (= x 1) (= x -1))
;             (error "The argument ~S for ~S, is a logarithmic singularity."
;                    x 'atan))
;       (log (/ (1+ x) (sqrt (- 1 (* x x))))))
;;        (let ((y (log (/ (1+ x) (sqrt (- 1 (* x x)))))))
;; 	 (if (and (= (imagpart x) 0) (complexp y))
;; 	     (complex (realpart y) (- (imagpart y)))
;; 	   y)))




;; although the following is correct code in that it approximates the
;; x to within eps, it does not preserve (eql (float (rationalize x) x) x)
;; since the test for eql is more strict than the float-epsilon

;;; Rationalize originally by Skef Wholey.
;;; Obtained from Daniel L. Weinreb.
;(defun rationalize (x)
;  (typecase x
;    (rational x)
;    (short-float (rationalize-float x short-float-epsilon 1.0s0))
;    (long-float (rationalize-float x long-float-epsilon 1.0d0))
;    (otherwise (error "~S is neither rational nor float." x))))
;
;(defun rationalize-float (x eps one)
;  (cond ((minusp x) (- (rationalize (- x))))
;        ((zerop x) 0)
;        (t (let ((y ())
;                 (a ()))
;             (do ((xx x (setq y (/ one
;                                   (- xx (float a x)))))
;                  (num (setq a (truncate x))
;                       (+ (* (setq a (truncate y)) num) onum))
;                  (den 1 (+ (* a den) oden))
;                  (onum 1 num)
;                  (oden 0 den))
;                 ((and (not (zerop den))
;                       (not (> (abs (/ (- x (/ (float num x)
;                                               (float den x)))
;                                       x))
;                               eps)))
;                  (/ num den)))))))


(defun ffloor (x &optional (y 1.0s0))
  (multiple-value-bind (i r) (floor x y)
    (values (float i (if (floatp x) x 1.0)) r)))

(defun fceiling (x &optional (y 1.0s0))
  (multiple-value-bind (i r) (ceiling x y)
    (values (float i (if (floatp x) x 1.0)) r)))

(defun ftruncate (x &optional (y 1.0s0))
  (multiple-value-bind (i r) (truncate x y)
    (values (float i (if (floatp x) x 1.0)) r)))

(defun fround (x &optional (y 1.0s0))
  (multiple-value-bind (i r) (round x y)
    (values (float i (if (floatp x) x 1.0)) r)))

(defun logtest (x y) 
  (declare (optimize (safety 1)))
  (check-type x integer)
  (check-type y integer)
  (not (zerop (logand x y))))

(defun deposit-field (newbyte bytespec integer)
  (dpb (ash newbyte (- (byte-position bytespec))) bytespec integer))
