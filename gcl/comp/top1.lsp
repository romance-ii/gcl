(in-package "BCOMP")


(setf (get 'eval-when 't1) 't1eval-when)
(setf (get 'progn 't1) 't1progn)
(setf (get 'defun 't1) 't1top-macro)
(setf (get 'quote 't1) 't1ignore)
(setf (get 'defmacro 't1) 't1top-macro)
(setf (get 'defvar 't1) 't1top-macro)
(setf (get 'defparameter 't1) 't1top-macro)


(defun t1top-macro (x)
  (let ((*top-form* x))
    (setq x (macroexpand x))
    (pass-1 x)))


(defun t1ignore (form) form nil)

(defvar *changed* nil)
(defvar  *FUNCTION-DECLS* nil)
(defvar *in-pass-1* nil)

(defun execute-pass-1 ( &aux  (eof '(nil)) tem
			      (*in-pass-1* t)
			     (*changed*
			      (make-array 40 :fill-pointer 0 :adjustable t)))
  (sloop while (not (eq eof (setq tem (read *lsp-input* nil eof))))
     do (pass-1 tem))
  (setq *top-forms* (nreverse *top-forms*))
     )

(defvar *eval-when-defaults* :defaults)

(dolist
    (v '(si::*make-special si::*make-constant proclaim si::define-macro
         make-package in-package shadow shadowing-import export unexport
	 si::define-structure
	 use-package unuse-package import provide require))
  (setf (get v 'eval-at-compile) t))


;; return t if we do an eval,
(defun maybe-comp-eval (default-action form)
  (or default-action
      (and (symbolp (car form))
	   (setq default-action (get (car form) 'eval-at-compile))))
  (cond
   ((or (and default-action (eq :defaults *eval-when-defaults*))
	(and (consp *eval-when-defaults*)(member 'compile *eval-when-defaults* )))
    (comp-eval form)
    t)))

(defun t1eval-when (x &aux do-load do-compile)
  (sloop for v in-list (second x)
     do
     (case v
       (eval)
       (load (setq do-compile t))
       (compile (setq do-compile t))
       (otherwise (comp-error "Bad arg to eval-when ~a" v))))
  (let ((*eval-when-defaults* (second x)))
    (cond (do-compile (t1progn (cddr x))))))


(defun walk-top-form (x &aux (*top-form* x))
  (let* (*contains-function*
	 (tem (walk-top x)))
    (setq tem
	  (make-top-form
	   :lisp x
	   :walked tem
	   :funp *contains-function*))))

(defvar *variable-decls*)
(defvar *function-decls*)

(defun pass-1 (x &aux *variable-decls* fd)
  ;; fix for symbol macro
  (cond ((atom x) (return-from pass-1 nil)))
  (cond ((symbolp (car x))
	 (cond ((setq fd (get (car x) 't1))
		(funcall fd x))
	       ((macro-function (car x))
		(setq x (macroexpand x))
		(pass-1 x))
	       (t
		(maybe-comp-eval nil x)
		(push (walk-top-form x) *top-forms*)
		)))
	((and (consp (car x)) (eq (caar x) 'lambda))
	 (pass-1 `(funcall (function ,(car x)) ,@ (cdr x))))
	(t (comp-error "Unexpected form ~a" x))))

(setf (get 'si::defmacro* 'b1) 'b1-defmacro*)


(setf (get 'si::fset 't1) 't1-set)

(setf (get 'mset 't1) 't1-set)


;; use for fset,define-macro and defvar
(defun t1-set (form &aux var val sform)
  (maybe-comp-eval nil form)
  (desetq (sform var val) form)
  (or (and (consp var) (eq (car var) 'quote)
	   (symbolp (second var))) (error "expected a symbol"))
  (push `(,sform ,var ,(walk-top-form val)) *top-forms*)
  )


(defun t1progn(form)
  (sloop for v in-list form do (pass-1 v)))

(defun b1-defmacro* (form where)
  (let* ((tem (comp-eval form)))
    (push 'list tem)
    (b1-walk tem where)))


(defun comp-eval (form )
  (multiple-value-bind (error res)
		       (si::error-set `(eval ',form))
		       (or error (return-from comp-eval res)))
  (comp-error "Evaluation of ~s failed" form))






     
  

  
