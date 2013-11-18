
(in-package :conditions)

;; (import '(with-simple-restart abort continue compute-restarts
;; 	  *debug-level* *debug-restarts* *number-of-debug-restarts*
;; 	  *debug-abort* *debug-continue* *debug-condition* *debug-eval*
;; 	  find-restart invoke-restart invoke-restart-interactively invoke-debugger
;; 	  restart-name ignore-errors show-restarts conditionp signal store-value
;; 	  read-evaluated-form restart-case muffle-warning)
;; 	:si)

(in-package :si)

(defvar *abort-restarts* nil)

(defconstant +protos+ (mapcar (lambda (x) (cons (intern (concatenate 'string "PROTO-" (string x))) x))
			      '(with-simple-restart show-restarts abort continue break-level-invoke-restart
						    invoke-debugger signal return-from muffle-warning
						    restart-case)))

(defmacro with-protos (&body forms)
`(let ((*proto-debug-level* *debug-level*))
   ,@(nsublis +protos+ forms)))
   
(defun break-quit-one nil
  (break-quit (length *abort-restarts*))
  (throw *quit-tag* *quit-tag*))

(defun processed-error-p (x) (or (stringp x) (conditionp x)))
(defun process-error (datum args function-name &optional (default-type 'conditions::simple-error))
  (let ((internal (when (symbolp datum)
		    (find-class 
		     (conditions::symcat
		      (if (conditions::simple-condition-class-p datum) "INTERNAL-" "INTERNAL-SIMPLE-") 
		      datum) 
		     nil))))
    (when internal
	(setq datum (class-name internal) args `(,@args :function-name ,(ihs-fname *current-ihs*)))))
  (or (conditions::coerce-to-condition datum args default-type function-name)
      (coerce-to-string datum args)))
(defun process-warning (datum args function-name &optional (default-type 'conditions::simple-warning))
  (let ((r (process-error datum args function-name default-type)))
    (declare (optimize (safety 1)))
    (check-type r warning "a warning condition")
    r))

(defun break-level (at &optional env)
  (let*  ((*debug-level* (1+ *debug-level*))
	  (*debug-restarts* (compute-restarts))
	  (*number-of-debug-restarts* (length *debug-restarts*))
	  (*debug-abort* (find-restart 'abort))
	  (*debug-continue* (or (let ((c (find-restart 'continue)))
				  (unless (and *debug-continue* (eq *debug-continue* c)) c))
				(let ((c (car *debug-restarts*)))
				  (unless (eq c *debug-abort*) c))))
	  (*debug-condition* (if (conditionp at) at *debug-condition*))
	  (*abort-restarts* (remove-if-not (lambda (x) (eq 'abort (restart-name x))) *debug-restarts*)))
    (with-protos
     (funcall #.(function-src 'break-level) at env))))

(defun new-quit-tag nil nil)

(defun cerror (c d &rest a)
  (with-protos
    (apply #.(function-src 'cerror) c d a)))

(defun error (d &rest a)
  (with-protos
    (apply #.(function-src 'error) d a)))

(defun warn (d &rest a)
  (with-protos
    (apply #.(function-src 'warn) d a)))

(defun error-in-error (c d e f)
  (with-protos
    (funcall #.(function-src 'error-in-error) c d e f)))

(defun universal-error-handler (e &rest a)
  (with-protos
    (apply #.(function-src 'universal-error-handler) e a)))

(defun dbl-eval (d)
  (with-protos
    (funcall #.(function-src 'dbl-eval) d)))

(defun break (&rest a)
  (with-protos
    (apply #.(function-src 'break) a)))

(defun break-level-invoke-restart (-)
  (COND ((AND (PLUSP -)
	      (< - (+ *NUMBER-OF-DEBUG-RESTARTS* 1)))
	 (LET ((RESTART (NTH (- - 1) *DEBUG-RESTARTS*)))
	   (INVOKE-RESTART-INTERACTIVELY RESTART)))
	(T
	 (FORMAT T "~&No such restart."))))

(defun terminal-interrupt (correctablep)
  (if correctablep
      (cerror "Continues execution." "Console interrupt.")
      (error "Console interrupt -- cannot continue.")))

(defun break-quit (&optional (level 0))
  (let ((abort (nth level (cons (find-restart 'conditions::gcl-top-restart) (reverse *abort-restarts*)))))
    (when abort (invoke-restart-interactively abort)))
  (break-current))

(setq conditions::*debugger-function* 'universal-error-handler)
(setq conditions::*debug-command-prefix* "")

(defun break-resume ()
  (if *debug-continue* 
      (invoke-restart *debug-continue*)
    :resume))

(putprop :r 'break-resume 'break-command)
(putprop :s 'show-restarts 'break-command)

(defun check-type-symbol (symbol value type &optional type-string)
  (tagbody
   tag
   (if (typep value type) (return-from check-type-symbol value)
     (restart-case 
      (error 'type-error :datum value :expected-type (or type-string type))
;	     :format-control "The value ~:@(~S~) is not ~A. (bound to variable ~:@(~S~))"
;	     :format-arguments (list value (or type-string type) symbol))
      (store-value (v)
		   :report (lambda (stream)
				   (format stream "supply a new value of ~s." symbol))
		   :interactive read-evaluated-form
		   (setq value v)
		   (go tag))))))

(defun break-help ()
  (format *debug-io* "
Break-loop Command Summary ([] indicates optional arg)
--------------------------

:bl [j]     show local variables and their values, or segment of vs if compiled
              in j stack frames starting at the current one.
:bt [n]     BACKTRACE [n steps]
:down [i]   DOWN i frames (one if no i)
:env        describe ENVIRONMENT of this stack frame (for interpreted).
:fr [n]     show frame n
:loc [i]    return i'th local of this frame if its function is compiled (si::loc i)
:r          RESUME (return from the current break loop).
:up [i]     UP i frames (one if no i)

Example: print a bactrace of the last 4 frames

>>:bt 4

Note:  (use-fast-links nil) makes all non system function calls
be recorded in the stack.   (use-fast-links t) is the default


Low level commands:
------------------
:p [i]           make current the i'th PREVIOUS frame (in list show by :b)
:n [i]           make current the i'th NEXT frame (in list show by :b)
:go [ihs-index]  make current the frame corresponding ihs-index
:m               print the last break message.
:s               show restarts.
:c               show function of the current ihs frame.
:q [i]           quit to top level
:r               resume from this break loop.
:b               full backtrace of all functions and special forms.
:bs [name]       backward search for frame named 'name'
:fs  [name]      search for frame named 'name'
:vs [from] [to]  Show value stack between FROM and TO
:ihs [from] [to] Show Invocation History Stack
:bds ['v1 'v2 ..]Show previous special bindings of v1, v2,.. or all if no v1

")
	  (values)
	  )
