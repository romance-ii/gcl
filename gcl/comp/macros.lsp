(in-package "BCOMP")

;(dolist-safe (a b) (foo a))
(defmacro dolist-safe ((x l &optional res) &body body)
  (let ((l1 (gensym))
	(l2 (gensym)))
    `(let* (
	    (,l1 ,l)
	    (,l2 ,l1)
	   ,x)
       (loop
	(cond ((consp ,l1)
	       (setq ,x (car ,l1) ,l1 (cdr ,l1))
	       ,@body)
	      ((null ,l1)
	       (return ,res))
	      (t (comp-error "expected a list ~a" ,l2))))))))

;; go through a list safely signalling an error if not a true list.
(def-loop-for in-list (var lis)
  (let ((point (gensym "POINT"))
	(l1 (gensym)))
    `(with ,point with ,l1 with ,var initially (setf ,l1 (setf ,point ,lis))
           do(or (consp ,point)
		 (comp-error "Expected a list ~a " ,l1))
	   (desetq ,var (car ,point))
	   end-test (and (null ,point)(local-finish))
	   increment (setf ,point (cdr ,point)))))

(def-loop-for on-list (point lis)
  (let ((l1 (gensym)))
    `(with ,point with ,l1 initially (setf ,l1 (setf ,point ,lis))
           do(or (consp ,point)
		 (comp-error "Expected a list ~a " ,l1))
	   end-test (and (null ,point)(local-finish))
	   increment (setf ,point (cdr ,point)))))


(defmacro safe-cdr (x)
  (if (symbolp x) `(progn (or (consp ,x)(null ,x)
			      (comp-error "expected list ~a" ,x))
			  (cdr ,x))
    (let ((xx (gensym)))
      `(let ((,xx ,x))
	 (safe-cdr ,xx)))))

	
(defmacro memq (a l) `(member ,a,l :test 'eq))
(defmacro valex (a b form)
  (let (binds )
    (or (eq b '*exit*) (push (list '*exit* b) binds))
    (or (eq a '*value*) (push (list '*value* a) binds))
  `(let ,binds ,form)))
	      
(defsetf logbitp logstore)
(defmacro logstore ( i a val)
  `(setf (ldb (byte 1 ,i) ,a) (if ,val 1 0)))



(defmacro argd-minargs(x)
  `(the fixnum (ldb (byte 6 0) (the fixnum ,x))))
(defmacro argd-maxargs(x)
  `(the fixnum (ldb (byte 6 9) (the fixnum ,x))))
(defmacro argd-flags(x)
  `(the fixnum (ldb (byte 3 6) (the fixnum ,x))))
(defmacro argd-atypes(x)
  `(the fixnum (ldb (byte 16 15) (the fixnum ,x))))
(defmacro argd-flag-p (x name)
  `(logbitp ,(+ 6 (position name
			    '(requires-nargs sets-mv
					     requires-fun-passed)))
	     (the fixnum ,x) 
	    ))

		
(defmacro ll (key lambda-list)
  `(nth ,(position key (cons '&required lambda-list-keywords)) ,lambda-list))
	  