
(in-package "BCOMP")

(eval-when (compile eval)
  (require 'FASDMACROS "../comp/fasdmacros.lsp")
(defvar *data*)
(defvar *data-output*)
(defmacro data-vector () `(car *data*))
)
(defvar *fasd-data*)


;
; (defun verify-data-vector(vec &aux v)
;  (dotimes (i (length vec))
;	   (setq v (aref vec i))
;	   (let ((has (si::hash-equal (cdr v) -1000)))
;	     (cond ((and (typep (car v) 'fixnum)
;			 (not (eql (car v) has)))
;		    (cmpwarn "A form or constant:~% ~s ~%has changed during the eval compile procedure!.~%  The changed form will be the one put in the compiled file" (cdr v)))))
;	   (setf (aref vec i) (cdr v)))
;  vec
;  )




(defun wt-data-file ( &aux (x (data-vector))
			   (*package* (find-package "LISP"))
			   fd tem
			   )
  (declare (type (array (t)) x))
;  (verify-data-vector x)
  (setq fd (si::open-fasd *data-output* :output nil nil))
  
  (si::find-sharing-top x (fasd-table fd))
  (put-op d_enter_vector *data-output*)
  (sloop for i below (length x) 
     do (setq tem (aref x i))
     (cond ((consp tem)
	    (cond ((eq (car tem) 'd_eval_skip)
		   (put-op d_eval_skip  *data-output*))
		  ((eq (car tem) 'd_eval)
		   (put-op d_eval  *data-output*)))))
     (si::write-fasd-top (cdr tem) fd))
  (put-op d_delimiter *data-output*)
  (si::close-fasd fd))

(defun display-data-file(file &aux fd (eof '(nil))  tem )
  (with-open-file (st file)
  ;  (setq fd (si::open-fasd st :input eof nil))
    (setq fd (si::open-fasd st :input eof
			    (make-array 100 :adjustable t)))
    (sloop::sloop      for i from 0 
       while
       (not (eq eof (setq tem (si::read-fasd-top fd))))
       do
       (format t "~%item ~a:~%~s" i tem ))
    ))
(defun display-data-file1(file &aux fd (eof '(nil))  )
  (with-open-file (st file)
  ;  (setq fd (si::open-fasd st :input eof nil))
    (setq fd (si::open-fasd st :input eof
			    (make-array 100 :adjustable t)))
    (let ((si::%memory nil))
      (declare (special si::%memory))
      (si::read-fasd-top fd))))

(defun push-data (flag val)
  (vector-push-extend (cons flag val) (data-vector))
  (prog1  *next-data*
      (if  (or (eq  flag 'dv) (eq flag 'd_eval))
	  (incf *next-data*))))

(defun get-load-time-form (x)
  (let ((tem (cdr (assoc x *load-time-forms*))))
    (cond (tem)
	  (t (setq tem (list 'dv nil x))
	     (setf (second tem) (push-data 'd_eval x))
	     (push (cons x tem) *load-time-forms*)
	     tem))))


(defun get-object (x &aux tem)
  (cond ((setq tem (gethash x *data-table*)))
	((typep x 'compiled-function)
	 (setq tem (list 'd_eval
			 nil
			 `(function 
			    ,(or (si::compiled-function-name x)
				 (comp-error
				  "Can't dump un named compiled funs")))
			 ))
	 (setf (gethash x *data-table*) tem)
	 tem)
	(t
	 (setq tem (list 'dv nil x))
	 (setf (gethash x *data-table*) tem)
	 tem)))

#| steps in loading
0) (let (*cfun-addresses* *data-object*)
1) copy address in VV vector into *vv-addresses* vector.
2) make a *data-object* whose body is the VV.
3) readin the items into the vector.    using read-fasd-top

|#
