(in-package "COMPILER")
(in-package "SYSTEM")
(in-package "USER")
(in-package "LISP")
(in-package "USER")
(progn (allocate 'cons 90) (system:init-system) (gbc t)
 (or lisp::*link-array*
  (setq lisp::*link-array*
	(si::make-vector 'fixnum 200 nil 0 nil nil t)))
 (use-fast-links t)
 (setq system::*old-top-level* (symbol-function 'system:top-level))
 (defun system::gcl-top-level nil
  (when (> (system:argc) 1)
        (setq system:*system-directory* (system:argv 1)))
  (format t "Gcl (Austin Kyoto Common Lisp)  ~A~% ~a" "DATE"
	  "Please notify us of functions which fail to autoload.")
  (in-package 'system::user) (funcall system::*old-top-level*))
 (defun lisp-implementation-version nil "DATE")
 (setq *modules* nil) (gbc t) (system:reset-gbc-count)
 (allocate 'cons 100)
 (defun system:top-level nil (system::gcl-top-level))
 (system:save-system "saved_kcn") (bye)
 (defun system:top-level nil (system::gcl-top-level))
 (save "saved_kcn") (bye))
