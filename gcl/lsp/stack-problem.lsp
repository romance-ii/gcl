(in-package 'si)

(defvar *old-handler* #'si::universal-error-handler)

(defentry ihs_function_name (object) (object "ihs_function_name"))


(defun new-universal-error-handler
  (a b c d e &rest l &aux (i 0) (top (si::ihs-top)))
  (declare (fixnum  i top))
  (if (search "stack overflow" e)
      (progn (format t "~a in ~a" e d)
	     (format t "invocation stack:")
	     (loop (cond ((or (> i 20)
			      (< top 10))
			  (return nil)))
		   (setq i (+ i 1))
		   (setq top (- top 1))
		   (format t "< ~s " (ihs_function_name (si::ihs-fun top))))
	     (format t "Jumping to top")
	     (throw *quit-tag* nil)
	     )
    (apply *old-handler* a b c d e l)))


(setf (symbol-function 'si::universal-error-handler)
      #'new-universal-error-handler)


