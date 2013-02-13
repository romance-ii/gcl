(in-package :s)

(export '(+ks+ +fl+))

(si::*make-constant '+fl+ (- (integer-length fixnum-length) 4))
(si::*make-constant '+ks+ 
		 `((:char 0 0)(:uchar 0 1)(:short 1 0)(:ushort 1 1)(:int 2 0) ,@(when (member :64bit *features*) `((:uint 2 1)))
		   (:float 2 2) (:double 3 2) (:fcomplex 3 3) (:dcomplex 4 3) 
		   (:long ,+fl+ 0) (:fixnum ,+fl+ 0) (:object ,+fl+ 5)))

(eval-when 
  (compile)
  (defmacro idefun (n &rest args) `(progn (defun ,n ,@args) (si::putprop ',n t 'compiler::cmp-inline) (export ',n)))
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
      (idefun ~ (x) (declare (fixnum x)) (lit :fixnum "(~" (:fixnum x) ")"))
      ,@(mapcar (lambda (x &aux (c (consp x))(n (if c (car x) x))(s (string (if c (cdr x) x))))
		  `(idefun ,n (x y) (declare (fixnum x y)) (lit :fixnum "(" (:fixnum x) ,s (:fixnum y) ")")))
		'(& \| ^ >> << (c+ . +) (c* . *) (c- . -) (c/ . /) %))
      ;; (idefun tt3 (x) (lit :fixnum  "tt3(" (:object x) ")"))
      ;; (idefun tt30 (x) (lit :fixnum  "tt30(" (:object x) ")"))
      (idefun tp0 (x) (lit :fixnum  "tp0(" (:object x) ")"))
      (idefun tp1 (x) (lit :fixnum  "tp1(" (:object x) ")"))
      (idefun tp2 (x) (lit :fixnum  "tp2(" (:object x) ")"))
      (idefun tp3 (x) (lit :fixnum  "tp3(" (:object x) ")"))
      (idefun tp4 (x) (lit :fixnum  "tp4(" (:object x) ")"))
      (idefun tp5 (x) (lit :fixnum  "tp5(" (:object x) ")"))
      (idefun tp6 (x) (lit :fixnum  "tp6(" (:object x) ")"))
      (idefun tp7 (x) (lit :fixnum  "tp7(" (:object x) ")"))
      (idefun tp8 (x) (lit :fixnum  "tp8(" (:object x) ")")))))

(eval-when 
  (eval)
  #.(cons 'progn 
	  (mapcar #'(lambda (z &aux (x (pop z))(s (pop z))(m (car z))(n (intern (string-concatenate "*" (string-upcase x)))))
		    `(progn (defun ,n (x o s y)
			      (declare (fixnum x o)(boolean s))
			      (cref (c+ x (<< o ,s)) ,(<< 1 s) ,m (if s 1 0) y))
			    (si::putprop ',n t 'compiler::cmp-inline)
			    (export ',n)))
		    +ks+))
  (defun mffe nil nil)
  (defun mfff nil nil))

(mffe)
(mfff)


