;;; -*- Mode: Lisp; Syntax: Common-Lisp; Package: ("CONDITIONS" :USE "LISP" :SHADOW ("BREAK" "ERROR" "CERROR" "WARN" "CHECK-TYPE" "ASSERT" "ETYPECASE" "CTYPECASE" "ECASE" "CCASE")); Base: 10 -*-
; From arisia.xerox.com:/cl/conditions/cond18.lisp
;;;
;;; CONDITIONS
;;;
;;; This is a sample implementation. It is not in any way intended as the definition
;;; of any aspect of the condition system. It is simply an existence proof that the
;;; condition system can be implemented.
;;;
;;; While this written to be "portable", this is not a portable condition system
;;; in that loading this file will not redefine your condition system. Loading this
;;; file will define a bunch of functions which work like a condition system. Redefining
;;; existing condition systems is beyond the goal of this implementation attempt.

(unless (find-package :conditions)
  (make-package :conditions :use '(:cl)))

(in-package :conditions)

(export '(*break-on-signals* *debugger-hook* signal
			     with-condition-restarts
			     handler-case handler-bind ignore-errors define-condition make-condition
			     with-simple-restart restart-case restart-bind restart-name
			     restart-name find-restart compute-restarts invoke-restart
			     invoke-restart-interactively abort continue muffle-warning
			     store-value use-value invoke-debugger restart condition
			     warning serious-condition simple-condition simple-warning simple-error
			     simple-condition-format-control simple-condition-format-arguments
			     storage-condition stack-overflow storage-exhausted type-error
			     type-error-datum type-error-expected-type simple-type-error
			     program-error control-error stream-error stream-error-stream
			     end-of-file file-error file-error-pathname cell-error cell-error-name
			     unbound-variable unbound-slot unbound-slot-name unbound-slot-instance undefined-function
			     arithmetic-error print-not-readable-object
			     arithmetic-error-operation arithmetic-error-operands
			     package-error package-error-package
			     division-by-zero floating-point-overflow floating-point-underflow))

(defvar *this-package* (find-package :conditions))


