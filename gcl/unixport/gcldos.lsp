(in-package "COMPILER")
(in-package "SYSTEM")
(in-package "USER")
(in-package "LISP")

(lisp::in-package "SLOOP")
;;Appropriate for Austin
(setq SYSTEM:*DEFAULT-TIME-ZONE*  6)

(in-package "USER")
(progn (allocate 'cons 100) (allocate 'string 40)
 (system:init-system) (gbc t)
 (si::multiply-bignum-stack 25)
 (or lisp::*link-array*
  (setq lisp::*link-array*
     (make-array 500 :element-type 'fixnum :fill-pointer 0)))
 (use-fast-links t)(setq compiler::*cc* "gcc -DVOL=volatile")(si::build-symbol-table)
(setq compiler::*cmpinclude* "<cmpinclude.h>") (load #"../cmpnew/cmpmain.lsp") (gbc t) (load #"../cmpnew/lfun_list.lsp")
 (gbc t) (load #"../cmpnew/cmpopt.lsp") (gbc t)
(load #"../lsp/auto.lsp") (gbc t)
(defun si::src-path (x) (si::string-concatenate "/gcl/" x))
 (when compiler::*cmpinclude-string*
  (with-open-file (st "../h/cmpinclude.h")
    (let
	((tem (make-array (file-length st) :element-type 'standard-char
			  :static t)))
      (if (si::fread tem 0 (length tem) st)
	  (setq compiler::*cmpinclude-string* tem)))))
 ;;compile-file is in cmpmain.lsp

 (setf (symbol-function 'si:clear-compiler-properties)
       (symbol-function 'compiler::compiler-clear-compiler-properties))
; (load "../lsp/setdoc.lsp")
 (setq system::*old-top-level* (symbol-function 'system:top-level))
 (defun system::gcl-top-level nil
  (when (> (system:argc) 1)
        (setq system:*system-directory* (system:argv 1)))
  (when (>= (system:argc) 5)
        (let ((system::*quit-tag* (cons nil nil))
              (system::*quit-tags* nil) (system::*break-level* '())
              (system::*break-env* nil) (system::*ihs-base* 1)
              (system::*ihs-top* 1) (system::*current-ihs* 1)
              (*break-enable* nil))
             (system:error-set
              '(let ((system::flags (system:argv 4)))
                    (setq system:*system-directory*
                          (pathname (system:argv 1)))
                    (compile-file (system:argv 2) :output-file
                     (system:argv 3) :o-file
                     (case (schar system::flags 1) (#\0 nil) (#\1 t)
                           (t (system:argv 5)))
                     :c-file
                     (case (schar system::flags 2) (#\0 nil) (#\1 t)
                           (t (system:argv 6)))
                     :h-file
                     (case (schar system::flags 3) (#\0 nil) (#\1 t)
                           (t (system:argv 7)))
                     :data-file
                     (case (schar system::flags 4) (#\0 nil) (#\1 t)
                           (t (system:argv 8)))
                     :system-p
                     (if (char-equal (schar system::flags 0) #\S) t
                         nil))))
             (bye (if compiler::*error-p* 1 0))))
  (format t "GCL (GNU Common Lisp)  ~A~%~a~%" "Version(1.617) Tue Nov 24 11:34:34 CST 1992"
        "Contains Enhancements by W. Schelter")
     (setq si::*ihs-top* 1)

  (in-package 'system::user) (incf system::*ihs-top* 2)
  (funcall system::*old-top-level*))
 (setq si::*gcl-version* 600) 
 (setq si::*gcl-version* '617)(defun lisp-imp'lementation-version nil (format nil "1-~a" si::*gcl-version*))
 (setq si:*inhibit-macro-special* t)
 ;(setq *modules* nil)
 (gbc t) (system:reset-gbc-count)
 (allocate 'cons 200)
 (defun system:top-level nil (system::gcl-top-level))
 (unintern 'system)
 (unintern 'lisp)
 (unintern 'compiler)
 (unintern 'user)
 (system:save-system "saved_gcl") (bye)
 (defun system:top-level nil (system::gcl-top-level))
 (save "saved_gcl") (bye))
