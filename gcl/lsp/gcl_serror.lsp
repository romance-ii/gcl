;; -*-Lisp-*-
(in-package 'lisp)
(export '(error break cerror))

(in-package 'si)

(defvar *error-stack* nil)

(defvar *proto-debug-level* 1)
(defun proto-show-restarts nil nil)
(defun proto-with-simple-restart (x y) (declare (ignore x)) y)
(defun proto-restart-case (x &rest y) (declare (ignore y)) x)
(defun proto-continue (&rest r) (declare (ignore r)) nil)
(defun proto-return-from (&rest r) (declare (ignore r)) nil)
(defun proto-muffle-warning (&rest r) (declare (ignore r)) nil)
(defun proto-abort (&rest r) (declare (ignore r)) nil)
(defun proto-signal (x) (declare (ignore x)) nil)
(defun proto-invoke-restart (-) -)
(defun proto-invoke-debugger (&optional (datum "debug") &rest arguments)
  (let ((pe (process-error datum arguments 'debug)))
    (universal-error-handler pe)
    (throw *quit-tag* *quit-tag*)))

;homogenize break-quit

(defun break-quit-one nil
  (break-quit (length *break-level*))
  (throw *quit-tag* *quit-tag*))

(defun find-ihs (s i &optional (j i))
  (cond ((eq (ihs-fname i) s) i)
	((and (> i 0) (find-ihs s (1- i) j)))
	(j)))

(defun error-in-error (x y z e)
  (proto-signal (process-error y z x))
  (format *debug-io* "Error in error: ~&~A ~A ~A ~A~2%" x y z e)
  (simple-backtrace)
  (break-quit-one))

(defmacro with-error-level-bindings ((fn d a &optional e) &body forms)
  `(let* ((error-stack *error-stack*)
	  (*error-stack* (if (member ',fn error-stack) error-stack (cons ',fn error-stack)))
 	  (no-bind (and error-stack (not (eq *error-stack* error-stack))))
	  (*ihs-base* (if no-bind *ihs-base* (1+ *ihs-top*)))
	  (*ihs-top*  (if no-bind *ihs-top*  (1- (find-ihs ',fn (ihs-top)))))
	  (*frs-base* (if no-bind *frs-base* (or (sch-frs-base *frs-top* *ihs-base*) (1+ (frs-top)))))
	  (*frs-top*  (if no-bind *frs-top* (frs-top)))
	  (*current-ihs* *ihs-top*))
     (cond ((eq error-stack *error-stack*) (error-in-error ',fn ,d ,a ,e))
	   (t ,@forms))))

(defun bind-test (n)
  (let ((*error-stack* *error-stack*))
    (cond ((> n 0) (bind-test (1- n))))))
  
(defun new-quit-tag nil (cons nil nil))

(defmacro with-read-level-bindings (&body forms)
  `(let* ((qts (cons (cons *break-level* *quit-tag*) *quit-tags*))
	  (qt (new-quit-tag))
	  (be (unless p-e-p *break-enable*));fix p-e-p
	  (rt (or *break-readtable* *readtable*))
	  (bt (bind-test 8))
	  (*quit-tags* qts)
	  (*quit-tag* qt)
	  (*break-level* break-level)
	  (*break-enable* be)
	  (*readtable* rt)
	  (*break-env* nil)
	  (*read-suppress* nil)
	  (*error-stack* nil))
     (declare (ignore bt))
     (catch *quit-tag*
       ,@forms)))



(defun processed-error-p (x) (stringp x))
(defun coerce-to-string (datum args) 
  (cond ((stringp datum)
	 (if args 
	     (let ((*print-pretty* nil)
		   (*print-level* *debug-print-level*)
		   (*print-length* *debug-print-level*)
		   (*print-case* :upcase))
	       (apply 'format nil datum args))
	   datum))
	((symbolp datum)
	 (let* ((fc (cadr (member :format-control args)))
		(fa (cadr (member :format-arguments args)))
		(tl (list :format-control :format-arguments fc fa))
		(args (nconc (remove-if (lambda (x) (not (not (member x tl)))) args)
			     (list (when fc (apply 'format nil fc fa))))))
	   (substitute 
	    #\^ #\~ 
	    (coerce-to-string
	     (if args
		 (apply 'string-concatenate (cons datum (make-list (length args) :initial-element " ~s")))
	       (string datum))
	     args))))
	 ("unknown error")))

(defun warn (datum &rest arguments)
  (declare (optimize (safety 1)))
  (let ((c (process-warning datum arguments 'warn)))
    (when *break-on-warnings*
	(break "~A~%break entered because of *break-on-warnings*." c))
    (let (warn)
      (declare (ignorable warn))
      (proto-restart-case
       (proto-signal c)
       (proto-muffle-warning nil :report "Skip warning."  (proto-return-from warn nil))))
    (format *error-output* "~&Warning: ~a~%" c)
    nil))

(defun process-error (datum args function-name &optional default-type)
  (declare (ignore function-name default-type))
  (coerce-to-string datum args))
(defun process-warning (datum args function-name &optional default-type)
  (process-error datum args function-name default-type))
(defun no-value nil (values))
(defun skip-error (datum)
  (and *ignore-floating-point-errors* 
	   (member datum '(floating-point-overflow floating-point-underflow))))
(defun error (datum &rest arguments)
  (if (skip-error datum)
      (no-value)
    (with-error-level-bindings
     (error datum arguments)
     (let ((pe (process-error datum arguments 'error)))
       (proto-invoke-debugger pe)
       (throw *quit-tag* *quit-tag*)))))
  
(defvar *default-continue-string* nil)

(defun cerror (continue-string datum &rest arguments)
  (unless (skip-error datum)
    (with-error-level-bindings
     (cerror datum arguments)
     (let ((*default-continue-string* continue-string))
       (catch 'cerror;remove in ansi
	 (proto-with-simple-restart
	  (proto-continue (apply 'format nil continue-string arguments))
	  (apply 'error datum arguments)))
       nil))))

(defvar *ignore-floating-point-errors* nil)
(defun universal-error-handler
  (error-name &optional (correctable *default-continue-string* cp)
	      function-name
	      (continue-format-string *default-continue-string*) error-format-string
   &rest args)
  (declare (:dynamic-extent args))

  (unless (skip-error error-name)
    
    (maybe-clear-input)
    
    (with-error-level-bindings
     (universal-error-handler error-name args
			      (list function-name continue-format-string error-format-string))
     
     (let ((message (if cp (process-error error-name args 'universal-error-handler)
		      error-name))
	   (function-name (or function-name (ihs-fname *current-ihs*))))
       (proto-signal message)
       (let ((*print-pretty* nil)
	     (*print-level* *debug-print-level*)
	     (*print-length* *debug-print-level*)
	     (*print-case* :upcase))
	 (terpri *error-output*)
	 (format *error-output* (if (and correctable *break-enable*) "~&Correctable error: " "~&Error: "))
	 (let ((*indent-formatted-output* t))
	   (when (stringp message) (format *error-output* message)))
	 (terpri *error-output*)
	 (if (> (length *link-array*) 0)
	     (format *error-output* "Fast links are on: do (si::use-fast-links nil) for debugging~%"))
	 (format *error-output* "Signalled by ~:@(~S~).~%" (or function-name "an anonymous function"))
	 (when (and correctable *break-enable*)
	   (format *error-output* "~&If continued: ")
	   (let ((*indent-formatted-output* t))
	     (format *error-output* "~?~&" continue-format-string args))))
       (force-output *error-output*)
       (cond ((member 'cerror *error-stack*)
	      (break-level message)
	      (throw 'cerror t))
	     (correctable
	      (proto-with-simple-restart
	       (proto-continue (apply 'format nil continue-format-string args))
	       (break-level message))
	      nil)
	     (t (break-level message) (throw *quit-tag* *quit-tag*)))))))

(defun dbl-eval (- &aux (break-command t))
  (let ((val-list (multiple-value-list
		   (cond 
		    ((keywordp -)
		     (break-call - nil 'break-command))
		    ((and (consp -) (keywordp (car -)))
		     (break-call (car -) (cdr -) 'break-command))
		    ((integerp -) 
		     (proto-break-level-invoke-restart -))     
		    (t (setq break-command nil) (evalhook - nil nil *break-env*))))))
    (cons break-command val-list)))


(defun break-level (at &optional env)
  (let* ((p-e-p (processed-error-p at))
	 (*break-message* (if p-e-p at *break-message*))
         (+ +) (++ ++) (+++ +++)
         (- -)
         (* *) (** **) (*** ***)
         (/ /) (// //) (/// ///)
	 (break-level (if p-e-p (cons t *break-level*) *break-level*))
	 (debug-level *proto-debug-level*))

    (catch-fatal 1)
    (setq *interrupt-enable* t)
    (if p-e-p 
	(proto-with-simple-restart 
	 (proto-abort "Return to debug level ~D." DEBUG-LEVEL)
	 (progn
	   (format *debug-io* "~&~A~2%" *break-message*)
	   (set-current)
	   (setq *no-prompt* nil)
	   (proto-show-restarts)))
      (set-back at env))
    
    (loop 
     
     (setq +++ ++ ++ + + -)
     
     (if *no-prompt* 
	 (setq *no-prompt* nil)
       (format *debug-io* "~&~a~a>~{~*>~}"
	       (if p-e-p "" "dbl:")
	       (if (eq *package* (find-package 'user)) "" (package-name *package*))
	       break-level))
     
     (force-output *error-output*)
     
     (unless
	 (proto-with-simple-restart 
	  (proto-abort "Return to debug level ~D." DEBUG-LEVEL)
	  (not
	   (catch 'step-continue
	     (with-read-level-bindings
	      (setq - (dbl-read *debug-io* nil *top-eof*))
	      (when (eq - *top-eof*) (bye -1))
	      (let* ((ev (dbl-eval -))
		     (break-command (car ev))
		     (values (cdr ev)))
		(and break-command (eq (car values) :resume)(return))
		(setq /// // // / / values *** ** ** * * (car /))
		(fresh-line *debug-io*)
		(dolist (val /)
		  (prin1 val *debug-io*)
		  (terpri *debug-io*)))
	      nil))))
       (terpri *debug-io*)
       (break-current)))))

(defun break (&optional format-string &rest args &aux message)

  (with-error-level-bindings
   (break format-string args)
   (let ((*print-pretty* nil)
	 (*print-level* 4)
	 (*print-length* 4)
	 (*print-case* :upcase))
     (terpri *error-output*)
     (cond (format-string
	    (format *error-output* "~&Break: ")
	    (let ((*indent-formatted-output* t))
	      (apply 'format *error-output* format-string args))
	    (terpri *error-output*)
	    (setq message (apply 'format nil format-string args)))
	   (t (format *error-output* "~&Break.~%")
	      (setq message ""))))
   (proto-with-simple-restart 
    (proto-continue "Return from break.")
    (let ((*break-enable* t)) (break-level message)))
   nil))