
(defun file-name-directory (path)
  (let ((pa (pathname path)))
    (namestring (make-pathname :directory (pathname-directory path) ))))

(let ((pa (file-name-directory si::*LOAD-PATHNAME*))
      (files '("package"
		"precom"
		"macros"
		"restart"
		"handler"
		"debugger"
		"conditions"
		"condition-definitions"
		"kcl-cond"
		"top-patches"
		"install")))
  (dolist (v files) (setq v (si::file-search v (list pa) '(".o" ".lisp")))
	  (load v)))

       