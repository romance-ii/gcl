;;; copied from ECL under LGPL by Michael Koehne
;;;    with-standard-io-syntax

(in-package 'lisp)
(export '(with-standard-io-syntax))
(in-package 'si)

;; FIXME -- add support for other print variables commented out here.  20040702 CM.

(defmacro with-standard-io-syntax (&body body)
  "Syntax: ({forms}*)
The forms of the body are executed in a print environment that corresponds to
the one defined in the ANSI standard. *print-base* is 10, *print-array* is t,
*package* is \"CL-USER\", etc."
  `(let*((*package* (find-package :cl-user))
	 (*print-array* t) ;; print-array -> core dampft
	 (*print-base* 10)
	 (*print-case* :upcase)
	 (*print-circle* nil)
	 (*print-escape* t)
	 (*print-gensym* t)
	 (*print-length* nil)
	 (*print-level* nil)
;	 (*print-lines* nil)
;	 (*print-miser-width* nil)
;	 (*print-pprint-dispatch* nil)
	 (*print-pretty* nil)
	 (*print-radix* nil)
	 (*print-readably* t)
;	 (*print-right-margin* nil)
	 (*read-base* 10)
	 (*read-default-float-format* 'single-float)
;	 (*read-eval* t)
	 (*read-suppress* nil)
	 (*readtable* (copy-readtable (si::standard-readtable))))
    ,@body))

