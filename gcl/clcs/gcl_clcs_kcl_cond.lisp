;;; -*- Mode: Lisp; Syntax: Common-Lisp; Package: "CONDITIONS"; Base: 10 -*-

(in-package "CONDITIONS")

(defvar *internal-error-table* (make-hash-table :test 'equal))

(defmacro find-internal-error-data (error-name error-format-string)
  `(gethash (list ,error-name ,error-format-string) *internal-error-table*))

(defvar *internal-error-parms* nil)

(defun clcs-universal-error-handler (error-name correctable function-name
			             continue-format-string error-format-string
			             &rest args
				     &aux (internal-error-parms
					   (list error-name correctable function-name
						 continue-format-string error-format-string)))
  (si::maybe-clear-input)
  (when (equal internal-error-parms *internal-error-parms*)
    (format t "Universal error handler called recursively ~S~%"
	    internal-error-parms)
	    (return-from clcs-universal-error-handler))
  (let* ((*internal-error-parms* (list error-name
				       correctable
				       function-name
				       continue-format-string
				       error-format-string))
         (e-d (or (find-internal-error-data error-name error-format-string)
	          (find-internal-error-data error-name t))))
    (if e-d
	(let ((condition-name (car e-d)))
	  (if correctable
	      (with-simple-restart 
	       (continue "~a" (apply #'format nil continue-format-string args))
	       (apply #'error condition-name
		   :function-name function-name
		      (let ((k-a (mapcan #'list (cdr e-d) args)))
			(if (simple-condition-class-p condition-name)
			    (list* :format-string error-format-string
				   :format-arguments args
				   k-a)
			  k-a))))
	    (apply #'error condition-name
		   :function-name function-name
		   (let ((k-a (mapcan #'list (cdr e-d) args)))
		     (if (simple-condition-class-p condition-name)
			 (list* :format-string error-format-string
				:format-arguments args
				k-a)
		       k-a)))))
	  (if correctable
	      (with-simple-restart 
	       (continue "~a" (apply #'format nil continue-format-string args))
      	       (error 'internal-simple-error
	     	:function-name function-name
	     	:format-string error-format-string
		:format-arguments args))
      	       (error 'internal-simple-error
	     	:function-name function-name
	     	:format-string error-format-string
		:format-arguments args)
      	    ))))

(defun set-internal-error (error-keyword error-format condition-name
					 &rest keyword-list)
  (setf (find-internal-error-data error-keyword error-format)
	(cons condition-name keyword-list)))

(defun initialize-internal-error-table ()
  (declare (special *internal-error-list*))
  (clrhash *internal-error-table*)
  (dolist (error-data *internal-error-list*)
    (apply #'set-internal-error error-data)))

(defparameter *internal-error-list*
  '((:control-error "control error" internal-simple-control-error)
    (:error "The argument ~S for ~S, is a logarithmic singularity." arithmetic-error :operands :operation)
    (:error "APPLY sended too few arguments to LAMBDA." internal-simple-control-error) 
    (:error "APPLY sended too few arguments to LAMBDA." internal-simple-control-error) 
    (:error "Expected ~S args but received ~S args" internal-simple-control-error)
    (:error "Keywords and values do not match." internal-simple-program-error) ;??
    (:error "Wrong number of args" internal-simple-program-error)
    (:error "~S is an illegal index to ~S." internal-simple-error)
    (:error "~S is not a keyword." internal-simple-program-error) ;??
    (:invalid-form "Invalid macro call to ~S." internal-simple-program-error) ; |<function>|
    (:invalid-form "~S is an illegal declaration form." internal-simple-program-error)
    (:invalid-variable "~S is an invalid variable." internal-simple-program-error ) ; |obj|
    (:package-error "A package error occurred on ~S: ~S." internal-package-error :package :message) ; |<function>| |top - base|
    (:parse-error "parse error" internal-simple-parse-error) ; |<function>| |top - base|
    (:too-few-arguments "~S [or a callee] requires more than ~R argument~:p." internal-simple-program-error) ; |<function>| |top - base|
    (:too-few-arguments "Symbol type specifiers must be supplied." internal-simple-program-error)
    (:too-many-arguments "~S [or a callee] requires only ~R argument~:p,~% but ~R ~:*~[were~;was~:;were~] supplied." internal-simple-program-error) ; |<function>| |n| |top - base|
    (:too-many-arguments "~S [or a callee] requires less than ~R argument~:p." internal-simple-program-error) ; |<function>| |top - base|
    (:unbound-variable "The variable ~S is unbound." internal-unbound-variable :name) ; |sym|
    (:undefined-function "The function ~S is undefined." internal-undefined-function :name)
    (:unexpected-keyword "~S does not allow the keyword ~S." internal-simple-program-error) ; |<function>| |key|
    (:wrong-type-argument "~S is not of type ~S." internal-type-error :datum :expected-type)
    (:wrong-type-argument "Cannot coerce ~S to class ~S." internal-type-error :datum :expected-type)
    (:wrong-type-argument "The value of ~S is not ~S." internal-type-error :datum :expected-type)
    (:wrong-type-argument "The value of ~S is not of type ~S." internal-type-error :datum :expected-type)
    (:wrong-type-argument "The value of ~S is not ~S, but ~S." internal-type-error :datum :expected-type)
    (:wrong-type-argument "The value of ~S is not of type ~S, but ~S." internal-type-error :datum :expected-type)
    (:wrong-type-argument "The value ~:@(~S~) is not ~A. (bound to variable ~:@(~S~))" internal-type-error :datum :expected-type)

; those had been commented out before - have to check them
;   (:too-few-arguments "~S [or a callee] requires ~R argument~:p,~% but only ~R ~:*~[were~;was~:;were~] supplied." internal-simple-program-error) ; |<function>| |n| |top - base|
;   (:invalid-function "~S is invalid as a function." internal-type-error :datum :expected-type) ; |obj|
;   (:invalid-variable "~S is not a symbol." internal-simple-error) ;??
;   (:invalid-variable "~S is not a variable." internal-simple-program-error)
;   (:too-few-arguments "Too few arguments." internal-simple-control-error) ; |<function>| |args|
;   (:too-many-arguments "Too many arguments." internal-simple-control-error) ; |<function>| |args|

    (:error "Cannot create the file ~A." internal-simple-file-error :pathname)
    (:error "Cannot open the file ~A." internal-simple-file-error :pathname)
    (:error "Cannot read the stream ~S." internal-simple-stream-error :stream)
    (:error "Cannot write to the stream ~S." internal-simple-stream-error :stream)
    (:error "Cannot close the standard input." internal-simple-stream-error) ; no stream here!!
    (:error "Cannot close the standard output." internal-simple-stream-error) ; no stream here!!
    (:error "Unexpected end of ~S." internal-end-of-file :stream)
    (:error "Cannot append to the file ~A." internal-simple-file-error :pathname)
    (:error "The file ~A already exists." internal-simple-file-error :pathname)
    (:error "The file ~A does not exist." internal-simple-file-error :pathname)
    (:error "~S is an illegal IF-DOES-NOT-EXIST option." internal-simple-control-error)
    (:error "~S is an illegal IF-EXISTS option." internal-simple-control-error)
    (:error "~S is a too long file name." internal-simple-file-error :pathname)
    (:error "Illegal open mode for ~S." internal-simple-control-error)

    (:pathname-error "Invalid device in pathname ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid device in logical pathname ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid directory in logical pathname ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid directory in pathname ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid host in logical pathname ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid host in pathname ~S." internal-simple-file-error :pathname)
    (:pathname-error "The pathname ~S does not match the host." internal-simple-file-error :pathname)
    (:pathname-error "Invalid name in pathname ~S."  internal-simple-file-error :pathname)
    (:pathname-error "Invalid 4th name component in namestring ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid blank component in namestring ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid component in namestring ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid character in logical pathname namestring ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid device or host in namestring ~S." internal-simple-file-error :pathname)
    (:pathname-error "Invalid type in pathname ~S."  internal-simple-file-error :pathname)
    (:pathname-error "Invalid version in pathname ~S."  internal-simple-file-error :pathname)
    (:pathname-error "Translate logical pathname ~S recursion stop."  internal-simple-file-error :pathname)
    (:pathname-error "No translation matches ~S."  internal-simple-file-error :pathname)
    (:pathname-error "File ~S is wild." internal-simple-file-error :pathname)
    (:pathname-error "File ~S does not exist." internal-simple-file-error :pathname)
    (:pathname-error "Cannot change the current directory to ~S." internal-simple-file-error :pathname)
    (:pathname-error "Cannot make the directory ~S." internal-simple-file-error :pathname)
    (:pathname-error "Cannot remove the directory ~S." internal-simple-file-error :pathname)

    (:pathname-error "Cannot find host ~S." internal-simple-control-error)
    (:pathname-error "Invalid key for wild-pathname-p ~S." internal-simple-control-error)
    (:pathname-error "Token overrun at ~S." internal-simple-control-error)
    (:pathname-error "Invalid pathname component ~S." internal-simple-control-error)

    (:pathname-error "Pathname ~S is not a ~S." internal-type-error :datum :expected-type)
    (:pathname-error "Cannot coerce ~S to a ~S." internal-type-error :datum :expected-type)
    (:pathname-error "Cannot coerce ~S to a ~S namestring." internal-type-error :datum :expected-type)
    (:pathname-error "Cannot parse the namestring stream ~S to a ~S." internal-type-error :datum :expected-type)
    (:pathname-error "Cannot parse the namestring thing ~S to a ~S." internal-type-error :datum :expected-type)

; those can be matched by a simple t
    (:error               t internal-simple-error)
    (:too-few-arguments   t internal-simple-control-error)
    (:too-many-arguments  t internal-simple-control-error)
    (:control-error 	  t internal-simple-control-error)
    (:unexpected-keyword  t internal-simple-control-error)
    (:parse-error         t internal-simple-parse-error)
    (:reader-error        t internal-simple-reader-error :stream)
    (:invalid-form        t internal-simple-program-error)
    (:invalid-variable    t internal-simple-program-error )

; those MUST NOT be matched by a simple t - as they have arguments.
;   (:unbound-variable t internal-unbound-variable :name)
;   (:undefined-function t internal-undefined-function :name)
;   (:wrong-type-argument t internal-type-error :datum :expected-type)
;   (:invalid-function t internal-type-error :datum :expected-type)
;   (:package-error t internal-package-error :package :message)
    ))

(initialize-internal-error-table)

(defun condition-backtrace (condition)
  (let* ((*debug-io* *error-output*)
	 (si::*ihs-base* (1+ si::*ihs-top*))
         (si::*ihs-top* (1- (si::ihs-top)))
         (si::*current-ihs* si::*ihs-top*)
         (si::*frs-base* (or (si::sch-frs-base si::*frs-top* si::*ihs-base*)
			     (1+ (si::frs-top))))
         (si::*frs-top* (si::frs-top))
         (si::*break-env* nil))
    (format *error-output* "~%~A~%" condition)
    (si::simple-backtrace)))

(defvar *error-set-break-p* nil)

(defun clcs-error-set (form)
  (let ((cond nil))
    (restart-case (handler-bind ((error #'(lambda (condition)
					    (unless (or si::*break-enable*
							*error-set-break-p*)
					      (condition-backtrace condition)
					      (return-from clcs-error-set condition))
					    (setq cond condition)
					    nil)))
		     (values-list (cons nil (multiple-value-list (eval form)))))
       (si::error-set ()
	  :report (lambda (stream)
		    (format stream "~S" `(si::error-set ',form)))
	  cond))))

(eval-when (compile load eval)

(defun reset-function (symbol) ; invoke compiler::compiler-clear-compiler-properties
  (setf (symbol-function symbol) (symbol-function symbol)))

(reset-function 'si::error-set)
(reset-function 'load)
(reset-function 'open)
)

(setq compiler::*compiler-break-enable* t)

(defun compiler::cmp-toplevel-eval (form)
   (let* (;;(si::*ihs-base* si::*ihs-top*) ; show the whole stack
          (si::*ihs-top* (1- (si::ihs-top)))
          (*break-enable* compiler::*compiler-break-enable*)
          (si::*break-hidden-packages*
           (cons (find-package 'compiler)
                 si::*break-hidden-packages*)))
         (si:error-set form)))
