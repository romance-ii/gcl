;; -*-Lisp-*-
(in-package :si)

(defun cnum-type (x)
  (let ((y (c-type x)))
    (if (/= y #.(c-type #c(0 1))) y
      (case (c-type (complex-real (the complex x)))
	    (#.(c-type 0.0s0) #.(1+ c-type-max))
	    (#.(c-type 0.0)   #.(+ 2 c-type-max))
	    (otherwise y)))))

;FIXME no declaim yet in default init position
(si::putprop 'cnum-type t 'compiler::cmp-inline)

(defun isnormal (x)
  (and (isfinite x)
       (>= (abs x) least-positive-normalized-long-float)))

(defun ratio-to-double (x &aux nx ny)
  (declare (inline isnormal))
  (multiple-value-bind 
   (r x) (round x)
   (+ (float r)
      (let ((y (denominator x))
	    (x (numerator x)))
	(do ((dx (float x)) (dy (float y)))
	    ((or (zerop dx) (zerop dy)
		 (progn (setq nx (isnormal dx) ny (isnormal dy))
			(and nx ny)))
	     (/ dx dy))
	    (if nx (setq dx (* 0.5 dx)) (setq x (ash x -1) dx (float x)))
	    (if ny (setq dy (* 0.5 dy)) (setq y (ash y -1) dy (float y))))))))

(defun float (x &optional z)
  (declare (optimize (safety 2)))
  (check-type x real)
  (check-type z (or null float))
  (let ((s (typep z 'short-float)))
    (etypecase 
     x
     (short-float (if (typep z 'long-float) (* 1.0 x) x))
     (long-float  (if s (long-to-short x) x))
     (fixnum      (if s (* 1.0s0 x) (* 1.0 x)))
     (bignum      (let ((z (big-to-double x)))   (if s (long-to-short z) z)))
     (ratio       (let ((z (ratio-to-double x))) (if s (long-to-short z) z))))))

(defun realpart (x)
  (declare (optimize (safety 2)))
  (check-type x number)
  (typecase
   x
   (real x)
   (otherwise (complex-real x))))

(defun imagpart (x)
  (declare (optimize (safety 2)))
  (check-type x number)
  (typecase
   x
   (real (if (floatp x) (float 0 x) 0))
   (otherwise (complex-imag x))))

(defun numerator (x)
  (declare (optimize (safety 2)))
  (check-type x rational)
  (typecase
   x
   (integer x)
   (otherwise (ratio-numerator x))))

(defun denominator (x)
  (declare (optimize (safety 2)))
  (check-type x rational)
  (typecase
   x
   (integer 1)
   (otherwise (ratio-denominator x))))
