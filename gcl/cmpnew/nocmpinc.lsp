

(in-package 'compiler)

(defvar *cmpinclude-string* nil)

(defun write-out-cmpinclude (stream  string)
  (do ((i 0 (setq i (the fixnum (+ i 1))))
       (l (length *cmpinclude-string*)))
      ((>= i l))
      (declare (fixnum i l))
      (or string (setq string *cmpinclude-string*))
      (or string (error "need a string"))
      (let ((tem (aref (the string  string i))))
	(declare (character tem))
	(write-char tem stream))))
  



      
      
  