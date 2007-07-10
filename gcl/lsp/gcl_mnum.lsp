;; -*-Lisp-*-
(in-package 'si)

(import 'lisp::abs 'si)
(import 'compiler::defdlfun 'si)
(import 'compiler::strcat 'si)

#+c99
(progn

(eval-when
    (compile eval)
  (defmacro deflibmfun (x)
    `(progn
       (defdlfun (:float    ,(strcat x "f")     ) :float)
       (defdlfun (:double   ,x                  ) :double)
       (defdlfun (:fcomplex ,(strcat "c" x "f") ) :fcomplex)
       (defdlfun (:dcomplex ,(strcat "c" x)     ) :dcomplex)))
  
  (defmacro defrlibmfun (x)
    `(progn
       (defdlfun (:float    ,(strcat x "f")     ) :float :float)
       (defdlfun (:double   ,x                  ) :double :double)))

  (defmacro defalibmfun (x)
    `(progn
       (defdlfun (:float    ,(strcat "f" x "f") ) :float)
       (defdlfun (:double   ,(strcat "f" x)     ) :double)
       (defdlfun (:fixnum   ,x                  ) :fixnum)
       (defdlfun (:float    ,(strcat "c" x "f") ) :fcomplex)
       (defdlfun (:double   ,(strcat "c" x)     ) :dcomplex))))

(defalibmfun "abs")

(deflibmfun "exp")
(deflibmfun "log")
(deflibmfun "sqrt")

(deflibmfun "sin")
(deflibmfun "cos")
(deflibmfun "tan")
(deflibmfun "sinh")
(deflibmfun "cosh")
(deflibmfun "tanh")
(deflibmfun "asin")
(deflibmfun "acos")
(deflibmfun "atan")
(defrlibmfun "atan2")
(deflibmfun "asinh")
(deflibmfun "acosh")
(deflibmfun "atanh")


(eval-when 
 (compile eval)
 

 (defmacro defmfun (x &optional n protect-real)
   (let* ((b (mdlsym x))
	  (f (mdlsym (string-concatenate x "f")))
	  (c (mdlsym (string-concatenate "c" x)))
	  (cf (mdlsym (string-concatenate "c" x "f")))
	  (ts (intern (string-upcase x)))
	  (tp (get ts 'compiler::type-propagator)))
     `(progn
	(mdlsym ,x)
	(mdlsym (string-concatenate ,x "f"))
	(mdlsym (string-concatenate "c" ,x))
	(mdlsym (string-concatenate "c" ,x "f"))
	(setf (get ',b 'compiler::type-propagator)  ',tp)
	(setf (get ',f 'compiler::type-propagator)  ',tp)
	(setf (get ',c 'compiler::type-propagator)  ',tp)
	(setf (get ',cf 'compiler::type-propagator) ',tp)
	(defun ,(or n (intern (string-upcase x))) (x)
	  ,@(unless (and n (not (string= (string-upcase n) (string-upcase x))))
	      `((declare (optimize (safety 1)))
		(check-type x number)))
	  (let ((x ,(if protect-real `(if (and (realp x) (not ,protect-real))
					  (if (floatp x) (complex x (float 0.0 x))
					    (complex (float x 0.0) 0.0))
					x) `x)))
	    (typecase x
		      (long-float  (,b x))
		      (short-float (,f x))
;		      (fixnum      (,b (float x 0.0)))
		      (rational    (,b (float x 0.0)))
		      (dcomplex    (,c x))
		      (fcomplex    (,cf x))
		      (otherwise   (,c (complex (float (realpart x) 0.0) (float (imagpart x) 0.0))))))))))
   
 
 (defmacro defmabs (x &optional n)
   (let* ((i (mdlsym x))
	  (b (mdlsym (string-concatenate "f" x)))
	  (f (mdlsym (string-concatenate "f" x "f")))
	  (c (mdlsym (string-concatenate "c" x)))
	  (cf (mdlsym (string-concatenate "c" x "f")))
	  (ts (intern (string-upcase x)))
	  (tp (get ts 'compiler::type-propagator)))
     `(progn
	(mdlsym ,x)
	(mdlsym (string-concatenate "f" ,x))
	(mdlsym (string-concatenate "c" ,x))
	(setf (get ',i 'compiler::type-propagator)  ',tp)
	(setf (get ',b 'compiler::type-propagator)  ',tp)
	(setf (get ',f 'compiler::type-propagator)  ',tp)
	(setf (get ',c 'compiler::type-propagator)  ',tp)
	(setf (get ',cf 'compiler::type-propagator)  ',tp)
	(defun ,(or n (intern (string-upcase x))) (x)
	  ,@(unless n `((declare (optimize (safety 1)))
			(check-type x number)))
	  (typecase x
			 (long-float  (,b x))
			 (short-float (,f x))
			 (fixnum      (if (> x most-negative-fixnum) (,i x) (- most-negative-fixnum)))
			 (rational    (if (minusp x) (- x) x))
			 (dcomplex    (,c x))
			 (fcomplex    (,cf x))
			 (otherwise   (,c (complex (float (realpart x) 0.0) (float (imagpart x) 0.0)))))))))

 (defmacro defrmfun (x &optional n)
   (let ((b (mdlsym x))
	 (f (mdlsym (string-concatenate x "f"))))
     `(progn
	(mdlsym ,x)
	(mdlsym (string-concatenate ,x "f"))
	(defun ,(or n (intern (string-upcase x))) (x z)
	  ,(unless n `((declare (optimize (safety 1)))
		       (check-type x real)
		       (check-type z real)))
	  (typecase 
	   z
	   (long-float (typecase 
			x
			(long-float  (,b x z))
			(short-float (,b (float x z) z))
			(fixnum      (,b (float x z) z))
			(rational    (,b (float x z) z))))
	   (short-float (typecase 
			 x
			 (long-float  (,b x (float z x)))
			 (short-float (,f x z))
			 (fixnum      (,f (float x z) z))
			 (rational    (,f (float x z) z))))
	   (fixnum (typecase 
		    x
		    (long-float  (,b x (float z x)))
		    (short-float (,f x (float z x)))
		    (fixnum      (,b (float x 0.0) (float z 0.0)))
		    (rational    (,b (float x 0.0) (float z 0.0)))))
	   (rational (typecase 
		      x
		      (long-float  (,b x (float z x)))
		      (short-float (,f x (float z x)))
		      (fixnum      (,b (float x 0.0) (float z 0.0)))
		      (rational    (,b (float x 0.0) (float z 0.0)))))))))))



 
(defmabs "abs")

(defmfun "sin")	
(defmfun "cos")	
(defmfun "tan")
(defmfun "asinh")
(defmfun "sinh")
(defmfun "cosh")
(defmfun "tanh")

(defmfun "exp" rawexp)
(defun exp (x)
  (declare (inline rawexp))
  (check-type x number)
  (let ((z (rawexp x)))
    (when (zerop z) 
      (error 'floating-point-underflow :operation 'exp :operands x))
    (let ((z (abs z)))
      (when (and (isinf z) (not (isinf (abs x))))
	(error 'floating-point-overflow :operation 'exp :operands x)))
    z))

(defrmfun "atan2"  rawatan2)
(defmfun "atan" rawatan)
(defun atan (x &optional (z 0.0 zp))
  (declare (optimize (safety 1)) (inline rawatan2 rawatan))
  (check-type x number)
  (check-type z real)
  (cond (zp 
	 (check-type x real)
	 (rawatan2 x z))
	((rawatan x))))

(defmfun "log" rawlog (>= x 0))
(defun log (x &optional b)
  (declare (optimize (safety 1)) (inline rawlog))
  (check-type x number)
  (check-type b (or null number))
  (if b 
      (/ (log x) (log b))
    (let ((z (rawlog x)))
      (when (isinf (abs z)) (error 'floating-point-overflow :operation 'log :operands x))
      z)))
  
(defmfun "acosh" acosh (>= x 1))
(defmfun "atanh" atanh (and (>= x -1) (<= x 1)))
(defmfun "acos"  acos (and (>= x -1) (<= x 1)))
(defmfun "asin"  asin (and (>= x -1) (<= x 1)))
(defmfun "sqrt"  sqrt (>= x 0))
)

#-c99
(defun abs (z)
  (declare (optimize (safety 1)))
  (check-type z number)
  (if (complexp z)
      ;; Compute (sqrt (+ (* x x) (* y y))) carefully to prevent
      ;; overflow!
      (let* ((x (abs (realpart z)))
	     (y (abs (imagpart z))))
	(if (< x y)
	    (rotatef x y))
	(if (zerop x)
	    x
	  (let ((r (/  y x)))
	    (* x (sqrt (+ 1 (* r r))))))))
  (if (minusp z) (- z) z))
