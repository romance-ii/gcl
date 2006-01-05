; Copyright (c) 1994 William F. Schelter

; See the files gnu.license and dec.copyright .

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 1, or (at your option)
; any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

; Some of the files that interface to the Xlib are adapted from DEC/MIT files.
; See the file dec.copyright for details.
(in-package :XLIB)
(in-package "COMPILER")
(in-package "SYSTEM")
(defvar *command-args* nil)
(in-package "USER")
(in-package "LISP")

(lisp::in-package "SLOOP")
;;Appropriate for Austin
#-winnt
(setq SYSTEM:*DEFAULT-TIME-ZONE*  6)
#+winnt
(setq SYSTEM:*DEFAULT-TIME-ZONE*  (GET-SYSTEM-TIME-ZONE))

(in-package "USER")
(progn (allocate 'cons 100) (allocate 'string 40)
 (system:init-system) (gbc t)
 (si::multiply-bignum-stack 25)
 (or lisp::*link-array*
  (setq lisp::*link-array*
     (make-array 500 :element-type 'fixnum :fill-pointer 0)))
 (use-fast-links t)
(setq compiler::*cmpinclude* "<cmpinclude.h>") (load #"../cmpnew/cmpmain.lsp") (gbc t) (load #"../cmpnew/lfun_list.lsp")
 (gbc t) (load #"../cmpnew/cmpopt.lsp") (gbc t)
(load #"../lsp/auto.lsp") (gbc t)
(defun si::src-path (x)
  (si::string-concatenate (or si::*lib-directory* "GCLDIR/") x))

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
(defvar si::*command-args* nil)
(defun si::get-command-arg (a &optional val-if-there)
  ;; return non nil if a is in si::*command-args* and return
  ;; the string which is after it if there is one"
  (let ((tem (member a si::*command-args* :test 'equal)))
    (if tem (or  val-if-there (cadr tem) t))))
(defvar si::*lib-directory* nil)
(defun system::gcl-top-level (&aux tem)
  (dotimes (i (si::argc))
	   (setq si::*command-args* (cons (si::argv i) si::*command-args*)))
  (setq si::*command-args* (nreverse si::*command-args* ))
  (setq si::*system-directory*
	(or (si::get-command-arg "-dir")
	    (car si::*command-args*)))
  (setq si::*lib-directory* (si::get-command-arg "-libdir"))
	
  (when (si::get-command-arg "-compile")
        (let ((system::*quit-tag* (cons nil nil))
              (system::*quit-tags* nil) (system::*break-level* '())
              (system::*break-env* nil) (system::*ihs-base* 1)
              (system::*ihs-top* 1) (system::*current-ihs* 1)
              (*break-enable* nil))
             (system:error-set
              '(progn
		 (compile-file (si::get-command-arg "-compile")
			       :output-file 
			       (or (si::get-command-arg "-o")
				   (si::get-command-arg "-compile"))
			       :o-file (not (si::get-command-arg "-no-o" t))
			       :c-file (si::get-command-arg "-system-p" t)
			       :h-file (si::get-command-arg "-system-p" t)
			       :data-file (si::get-command-arg "-system-p" t)
			       :system-p (si::get-command-arg "-system-p" t))))
             (bye (if compiler::*error-p* 1 0))))
  (format t "GCL (GNU Common Lisp)  ~A~%~a~%~a~%" "DATE"
	  "Licensed under GNU Public Library License"
        "Contains Enhancements by W. Schelter")
     (setq si::*ihs-top* 1)
  (in-package 'system::user) (incf system::*ihs-top* 2)
  (funcall system::*old-top-level*))
 (setq si::*gcl-version* 600) 
 (defun lisp-implementation-version nil (format nil "1-~a" si::*gcl-version*))
 (setq si:*inhibit-macro-special* t)
 ;(setq *modules* nil)
 (gbc t) (system:reset-gbc-count)
 (allocate 'cons 200)
 (defun system:top-level nil (system::gcl-top-level))
 (unintern 'system)
 (unintern 'lisp)
 (unintern 'compiler)
 (unintern 'user)
 (si::chdir "/d19/staff/wfs/novak-xgcl")(user::user-init)(si::save-system "saved_xgcl")
 (if (fboundp 'user-init) (user-init))
 (system:save-system "saved_gcl") (bye)
 (defun system:top-level nil (system::gcl-top-level))
 (save "saved_gcl") (bye))

