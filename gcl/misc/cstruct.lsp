;; Sample usage:  Create lisp defstructs corresponding to C structures:
(use-package "SLOOP")
;; How to: Create a file foo.c which contains just structures
;; and possibly some externs.   
;; cc -E /tmp/foo1.c  > /tmp/fo2.c
;; ../xbin/strip-ifdef /tmp/fo2.c > /tmp/fo3.c
;; then (parse-file "/tmp/fo3.c")
;; will return a list of defstructs and appropriate slot offsets.


(defun white-space (ch) (member ch '(#\space #\linefeed #\return #\newline  #\tab)))

(defvar *eof* (code-char 255))
(defun delimiter(ch) (or (white-space ch)
			 (member ch '(#\, #\;  #\{ #\} #\*))))
(defun next-char (st)
  (let ((char (read-char st nil *eof*)))
    
    (case char
      (#\{  char)
      (
       #\/ (cond ((eql (peek-char nil st nil) #\*)
		  (read-char st)
		  (sloop when (eql (read-char st) #\*)
			do (cond ((eql (read-char st) #\/ )
				  (return-from next-char (next-char st))))))
		(t char)))
      ((#\tab #\linefeed #\return #\newline )
       (cond ((member (peek-char nil st nil) '(#\space #\tab #\linefeed #\return #\newline  ))
	      (return-from next-char (next-char st))))
       #\space)
      (t char))))

(defun get-token (st &aux tem)
  (sloop while (white-space (peek-char nil st nil))
	 do (read-char st))
  (cond ((member (setq tem (peek-char nil st nil)) '(#\, #\; #\* #\{ #\} ))
	 (return-from get-token (coerce (list (next-char st)) 'string))))
  (sloop with x = (make-array 10 :element-type 'character  :fill-pointer 0
			      :adjustable t)
    when  (delimiter (setq tem (next-char st)))
    do (cond ((> (length x) 0)
	      (or (white-space tem) (unread-char tem st))
	      (return x)))
    else
    do
    (cond ((eql tem *eof*) (return *eof*))
	  (t    (vector-push-extend tem x)))))
(defvar *parse-list* nil)
(defvar *structs* nil)
(defun parse-file (fi &optional *structs*)
  (with-open-file (st fi)
    (let ((*parse-list*
      (sloop while (not (eql *eof* (setq tem (get-token st))))
	     collect  (intern tem))))
      (print *parse-list*)
      (let ((structs
	     (sloop while (setq tem (parse-struct))
		    do (push tem *structs*)
		    collect tem)))
	(get-sizes fi structs)
	(with-open-file (st "gaz3.lsp")
	  (prog1 
	  (list structs (read st))
	  (delete-file "gaz3.lsp")))))))
	  

  


(defparameter *type-alist* '((|short| . signed-short)
		       (|unsigned short| . unsigned-short)
		       (|char| . signed-char)
		       (|unsigned char| . unsigned-char)
		       (|int| . fixnum)
		       (|long| . fixnum)
		       (|object| . t)))


(defun parse-type( &aux top)
   (setq top (pop *parse-list*))
  (cond ((member top '(|unsigned| |signed|))
	 (push (intern (format nil "~a-~a" (pop *parse-list*))) *parse-list*)
	 (parse-type))
	((eq '* (car *parse-list*)) (pop *parse-list*) 'fixnum)
	((eq top '|struct|)
	 (prog1
	     (cond ((car (member (car *parse-list*)  *STRUCTS* :key 'cadr)))
	       (t (error "unknown struct ~a " (car *parse-list*))))
	   (pop *parse-list*)
	   ))
	((cdr (assoc top *type-alist*)))
	(t (error "unknown type ~a " top))))
(defun expect (x) (or (eql (car *parse-list*) x)
		      (error "expected ~a at beginning of ~s" x *parse-list*))
  (pop *parse-list*))
(defun parse-field ( &aux tem)
  (cond ((eql (car *parse-list*) '|}|)
	 (pop *parse-list*)
	 (expect '|;|)
	 nil)
	(t
	(let ((type (parse-type)))
	  
	  (sloop until (eql (setq tem (pop *parse-list*)) '|;|)
		 append (get-field tem type)
			 
		 do (or (eq (car *parse-list*) '|;|) (expect '|,|)))))))
(deftype pointer () `(integer ,most-negative-fixnum most-positive-fixnum))
(defun get-field (name type)
  (cond ((eq name '|*|)(get-field (pop *parse-list*) 'pointer))
	((and (consp type) (eq (car type) 'defstruct))
	 (sloop for w in (cddr type)
		append (get-field
			 (intern (format nil "~a.~a" name (car w)))
			 (fourth w))))
	(t 
	 `((,name ,(if (eq type t) nil 0) :type ,type)))))

(defun parse-struct ()
  (cond ((null *parse-list*) (return-from parse-struct nil)))
  (cond ((not (eq (car *parse-list*) '|struct|))
	 (sloop until (eq (pop *parse-list*) '|;|))
	 (return-from parse-struct (parse-struct))))
  (expect '|struct|)
  (let* ((name (prog1 (pop *parse-list*)(expect '|{|))))
    `(defstruct ,name ,@
           (sloop while (setq tem (parse-field))
	   append tem))))

(defun printf (st x &rest y)
  (format st "~%printf(\"~a\"" x)
  (sloop for w in y do (princ "," st) (princ y st))
  (princ ");" st))

(defun get-sizes (file structs)
  (with-open-file (st "gaz0" :direction :output)
    (sloop for i from 1
	   for u in structs
	   do (format st "struct ~a SSS~a;~%" (second u) i))
    (format st "~%main() {~%")
    (printf st "(")
    (sloop for i from 1
	   for u in structs
	   do
	   (printf st (format nil "(|~a| " (second u)))
	   (sloop for w in (cddr u)
		  do
		  (printf st " %d "
			  (format nil "(char *)&SSS~a.~a - (char *)&SSS~a"
				  i (car w) i)))
	   (printf st ")"))
    (printf st ")")
    (princ " ;}" st))
  (system
   (format nil "cat ~a gaz0 > tmpx.c ; cc tmpx.c -o tmpx ; (tmpx > gaz3.lsp) ; rm -f  gaz0" file)))

