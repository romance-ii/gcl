(defun jamie-load-clcs (&optional (mode :compiled))
  (let ((files (list 
		;"package"
		"clcs_precom"
		"clcs_macros"
		"clcs_restart"
		"clcs_handler"
		"clcs_debugger"
		"clcs_conditions"
		"clcs_condition_definitions"
		"clcs_kcl_cond"
		"clcs_top_patches"
		"clcs_install")))
;     (load "package.lisp")
    (when (eql :compile mode)
;	  (load "package.lisp")
	  (load "clcs_precom.lisp"))
    (mapc #'(lambda (file)
	      (ecase mode
		     (:interpreted (load (format nil "~A.lisp" file)))
		     (:compiled (load (format nil "~A.o" file)))
		     (:compile (compile-file (format nil "~A.lisp" file) :c-file t :h-file t :data-file t :system-p t))))
	  files)))



