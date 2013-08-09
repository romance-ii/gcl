;;; -*- Mode: Lisp; Syntax: Common-Lisp; Package: "CONDITIONS"; Base: 10 -*-

(in-package :CONDITIONS)

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
