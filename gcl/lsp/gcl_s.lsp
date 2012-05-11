(in-package :s)

(eval-when
 (eval compile) 
 (defmacro idefun (n &rest args) `(progn (defun ,n ,@args) (si::putprop ',n t 'compiler::cmp-inline) (export ',n))))

(eval-when 
  (compile)
  (defmacro mffe nil
    `(progn
       ,@(mapcar (lambda (z &aux (x (pop z))(s (pop z))(m (car z))(n (intern (string-concatenate "*" (string-upcase x)))))
		   `(idefun ,n (x o s y)
			    (declare (fixnum x o)(boolean s))
			    (if s (lit ,x "((" ,(strcat x) "*)" (:fixnum x) ")[" (:fixnum o) "]=" (,x y))
			     (lit ,x "((" ,(strcat x) "*)" (:fixnum x) ")[" (:fixnum o) "]")))) +ks+)))
  (defmacro mfff nil
   `(progn
      (idefun address (x) (lit :fixnum "((fixnum)" (:object x) ")"))
      ,@(mapcar (lambda (x &aux (c (consp x))(n (if c (car x) x))(s (string (if c (cdr x) x))))
		  `(idefun ,n (x y) (declare (fixnum x y)) (lit :fixnum "(" (:fixnum x) ,s (:fixnum y) ")")))
		'(& \| ^ >> << (c+ . +) (c* . *) (c- . -) (c/ . /) %)))))

(eval-when 
  (eval)
  (defmacro mffe nil
    `(progn
       ,@(mapcar (lambda (z &aux (x (pop z))(s (pop z))(m (car z))(n (intern (string-concatenate "*" (string-upcase x)))))
		   `(idefun ,n (x o s y)
			    (declare (fixnum x o)(boolean s))
			    (cref (c+ x (<< o ,s)) ,(<< 1 s) ,m (if s 1 0) y))) +ks+)))
  (defmacro mfff nil nil))
  
(defconstant +fl+ (- (integer-length fixnum-length) 4))
(defconstant +ks+ `((:char 0 0)(:uchar 0 1)(:short 1 0)(:ushort 1 1)(:int 2 0)#+64bit(:uint 2 1)
		    (:float 2 2) (:double 3 2) (:fcomplex 3 3) (:dcomplex 4 3) 
		    (:long ,+fl+ 0) (:fixnum ,+fl+ 0) (:object ,+fl+ 5)))
(export '(+ks+ +fl+))

(mffe)
(mfff)