(in-package 'si)

(require "FASDMACROS" "../cmpnew/fasdmacros.lsp")
;; (test '(a (1)) 2 12.0) -->   ((a (1)) 2 12.0)

(defmacro dprint (x)
  `(if (and (boundp 'debug) debug)
    (format t "~%The value of ~a is ~s" ',x ,x)))



(defun keep (x) (setq sil x))
(defun test (&rest l &aux tab)
  (with-open-file (st "/tmp/foo.l"
		      :direction :output )
    (let* ((fd (open-fasd st :output nil (setq tab (make-hash-table :test 'eq)))))
      (declare (special *fd*))
      (si::find-sharing-top l tab)
;      (preprocess l tab)
      (sloop::sloop for v in l
		    do
		    (write-fasd-top v fd)
		    finally (close-fasd fd))))
  (test-in))

(defun preprocess1(lis table)
  (cond ((symbolp lis)
	 (and lis
	      (let ((tem (gethash lis table)))
		(cond (tem
		       (if (< (the fixnum tem) 0)
			 (setf (gethash lis table) (the fixnum (+ (the fixnum tem) -1)))))
		      (t (setf (gethash lis table) -1))))))
	((consp lis)
	 (preprocess1 (car lis) table)
	 (preprocess1 (cdr lis) table))
	((and (arrayp lis)
	      (eq (array-element-type lis) t))
	 (sloop::sloop for i below (length lis)
		       do (preprocess1 (aref (the (array t) lis) i) table)))
	((and (arrayp lis)
	      (eq (array-element-type lis) t))
	 (sloop::sloop for i below (length lis)
		       do (preprocess1 (aref (the (array t) lis) i) table)))
	(t nil)))

(defun preprocess (lis table &aux freq)
  (preprocess1 lis table)
  (sloop:sloop for (ke val) in-table table
	       with m = 0 declare (fixnum m)
	       do ;(print (list ke val))
	       (cond((> (the fixnum val) 0)
		     (SETQ m (the fixnum (+ 1 m))))
		    ((< (the fixnum val) -1)
		     (remhash ke table)
		     (push (cons val ke) freq)))
	       finally (sloop::loop-return
			(sort freq '> :key 'car ))))

(defun test-in ()
  (with-open-file (st "/tmp/foo.l" :direction :input)
      (let ((fdin (open-fasd st :input (setq eof '(nil)) (keep (make-array 10)))))
	(sloop while (not (eq eof (setq tem (read-fasd-top fdin))))
	       collect tem
	       finally
	       (dprint fdin)
	       (close-fasd fdin)))))

(defun try-write (file &aux (tab (make-hash-table :test 'eq)) (eof '(nil)))
  (with-open-file (st file)
        (with-open-file (st1 "/tmp/foo.l" :direction :output)
	  (sloop  while (not (eq eof (setq tem (read st nil eof)))) with fd
		  collect (file-position st1)
		  do(clrhash tab)

		  (setq fd (open-fasd st1 :output nil tab))
;		  (let ((prp (preprocess tem tab)))
;		    (dprint  prp))
		  (write-fasd-top tem fd)
		  (close-fasd fd)
		  (dprint tab)
		  ))))
(defvar *differed* nil)

(defun try-read (file pos &aux (tab (make-array 10)) (eof '(nil)))
  (with-open-file (st file)
        (with-open-file (st1 "/tmp/foo.l")
	  (sloop  while (not (eq eof (setq tem (read st nil eof)))) with fd with re
		  for u in pos
		  do (file-position st1 u)
		  (setq fd (open-fasd st1 :input eof tab))
		  (sloop::sloop for i below (length tab) do (setf (aref (the (array (t)) tab) i) nil))
		  (setq re (read-fasd-top fd))
		  (dprint re)
		  (unless (equalp tem re)
			  (push (list tem re) *differed*))
		 ; (assert (eq eof (read-fasd-top fd)))
		  (close-fasd fd)))))

(defun try (file)
  (let ((pos (try-write file)))
    (try-read file pos)
    (print file)
    (system (format nil "cat ~a | wc ; cat /tmp/foo.l | wc " (namestring file)))
    ))

(defvar *table* (make-hash-table :test 'eq))
(defun do-share (x)
  (si::find-sharing x *table*))




(defun read-data-file (file)
  (let ((pack-ops))
    (set-dispatch-macro-character #\# #\!
				  #'(lambda (st a b ) (setq pack-ops (read st nil nil) )))
    (with-open-file (st file)
      (let ((tem (read st nil nil)))
	(list pack-ops tem)))))


(defun write-out-data (lis fil)
  (with-open-file (st fil :direction :output)
    (let ((fd (open-fasd st :output nil (setq tab (make-hash-table :test 'eq)))))
      (find-sharing-top lis (fasd-table fd))
      (write-fasd-top (car lis) fd)
      (write-fasd-top (second lis) fd)
;      (close-fasd fd)
      fd)))

;; To convert an ascii .data file to a fasd one. 
;(setq bil (si::read-data-file "vmlisp.data") her nil)
;(SI::WRITE-OUT-DATA1 (SECOND BIL) (FIRST BIL) "/tmp/foo.l")
(defun write-out-data1 (data-vec pack-ops fil)
  (with-open-file (st fil :direction :output)
    (let ((compiler::*data* (list data-vec nil        pack-ops))
	  (compiler::*compiler-output-data* st)
	  (compiler::*fasd-data* (list (open-fasd st :output nil nil))))
      (compiler::wt-fasd-data-file)
      (car compiler::*fasd-data*))))


	     
	 
	 
  
;(setq dirs (directory "/public/spad/libraries/A*/index.KAF*"))
;(mapcar 'try dirs)


