(in-package "BCOMP")
;; Naming convention
;; <package>{f | s | q | l}<mangled_name>
;; where f = Function, s = Symbol , q = special form (Quote) , l= Lexical
;; eg fLcar, sLnil, fSallocate_internal,sLAstandard_outputA.qLprogn

(eval-when (load eval compile)
(defvar *mangle-base* (make-array 128 :element-type 'character))
(defvar *mangle-escapes*  (make-array 128 :element-type 'character))
(defmacro mangle-type (flag) `(position ',flag  '(octal self special-escape)))
(defvar *mangle-escape* #\E)

(sloop for i below 128 with tem
   for ch = (code-char i)
   
   do (setf (aref *mangle-escapes* i) (code-char 0))
   (setf (aref *mangle-base* i) (code-char (mangle-type octal)))
   (when (alphanumericp ch) (setf (aref *mangle-base* i)
				 (if (upper-case-p ch) (char-downcase ch)
				   (char-upcase ch)))))

(sloop for (v ch) in
    '((#\+ #\Q)(#\- #\_)(#\* #\A)(#\% #\P)
				 (#\; #\X)(#\. #\Z)(#\, #\Y)
				 (#\ #\E)
				 (#\@ #\B)
				 )
   do (setf (aref *mangle-base* (char-code v)) ch)
   (setf (aref *mangle-base* (char-code v))  ch)
   (setf (aref *mangle-base* (char-code (char-downcase ch)))
	 (code-char (mangle-type special-escape)))
   (setf (aref *mangle-escapes* (char-code (char-downcase ch)))
	 (char-downcase ch)))
(sloop for i from (char-code #\0) to (char-code #\9)
   for j from (char-code #\A)
   do (setf (aref *mangle-escapes* i) (code-char j)))

(defvar *mangle-out* (make-array 40 :element-type 'string-char :fill-pointer 0
				 :adjustable t))
(proclaim '(string *mangle-out* *mangle-escapes* *mangle-base*))
(proclaim '(character *mangle-escape*))
)


(defun mangle(string)
  (let ((string
	 (if (symbolp string) (symbol-name string)
	   string)))
    (declare (string string))
    (let ((n (length string)) (start 0))
      (declare (fixnum n))
      (unless (> (array-total-size *mangle-out*)
		 (the fixnum (* 4 n)))
	      (adjust-array *mangle-out* (* 4 n) :fill-pointer 0 ))
      (cond ((and (> n 0)
		  (digit-char-p (aref string 0)))
	     (setf (aref *mangle-out*  0) *mangle-escape*)
	     (setf (aref *mangle-out*  1)
		   (aref *mangle-escapes* (char-code (aref string 0))))
	     (setf (fill-pointer *mangle-out*) 2)
	     (incf start))
	    (t       (setf (fill-pointer *mangle-out*) 0)))
      (sloop for i from start below n
	 do (mangle1 (aref string i)))
      *mangle-out*)))

(defun mangle1 (ch )
  (declare (character ch))
  (let* ((tem (aref *mangle-base* (char-code ch)))
	 (n (char-code tem))
	 (out *mangle-out*))
    (declare (character tem)(fixnum n))
    (cond ((> n (mangle-type special-escape))
	   (vector-push tem *mangle-out*))
	  ((= n (mangle-type special-escape))
	   (vector-push  *mangle-escape* out)
	   (vector-push  (aref *mangle-escapes* (char-code ch) )out))
	  ((= n (mangle-type octal))
	   (vector-push  #.(char-upcase *mangle-escape*) out)
	   (let ((m (char-code ch)))
	     (vector-push  (code-char
				   (the fixnum (+ (logand (the fixnum
							       (ash m -6)) 7)
						  (char-code #\0))))
				   out)
	     (vector-push  (code-char
				   (the fixnum (+ (logand (the fixnum
							       (ash m -3)) 7)
						  (char-code #\0))))
				   out)
	     (vector-push  (code-char
				   (the fixnum (+ (logand  m  7)
						  (char-code #\0))))
				   out)))
	  (t (wfs-error)))))

#+how_to_unmangle ;; get next character and unmangle it.
(defun unmangle-next ()
  (let ((y (get-next)))
    (cond ((alpha-char-p y)
	   (cond ((lower-case-p y) (upcase-char y))
		 ((eql y *mangle-escape*)
		  (let ((n (get-next)))
		    (cond ((digit-char-p n)
			   (make-octal-char n (get-next) (get-next)))
			  ((upper-case-p n)
			   (code-char (+ (char-code #\0) (- n (char-code #\A)))))
			  (t n))))
		 ((car (rassoc (list n)
			       '((#\+ #\Q)(#\- #\_)(#\* #\A)(#\% #\P)
				 (#\; #\X)(#\. #\Z)(#\, #\Y)
				 (#\e #\E)))))
		 (t (char-downcase n))))
	  (t y))))
			       
	   
