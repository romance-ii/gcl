;; -*-Lisp-*-
;; Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

;; This file is part of GNU Common Lisp, herein referred to as GCL
;;
;; GCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;; 
;; GCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
;; License for more details.
;; 
;; You should have received a copy of the GNU Library General Public License 
;; along with GCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


;;;;    module.lsp
;;;;
;;;;                            module routines


;; (in-package 'lisp)

;; (export '(*modules* provide require))
;; (export '(documentation variable function structure type setf compiler-macro))

(in-package :system)


(defvar *modules* nil)


(defun provide (module-name)
  (setq *modules*
        (adjoin (string module-name)
                *modules*
                :test #'string=)))


(defun require (module-name
                &optional (pathname (string-downcase (string module-name))))
  (let ((*default-pathname-defaults* #""))
    (unless (member (string module-name)
                    *modules*
                    :test #'string=)
            (if (atom pathname)
                (load pathname)
                (do ((p pathname (cdr p)))
                    ((endp p))
                  (load (car p)))))))
          

(defun documentation (object doc-type)
  (let ((x (typecase object
		     (function (function-name object))
		     (package (find-symbol (package-name object) :keyword))
		     ((cons (member setf) (cons symbol nil)) (setf-sym object))
		     (symbol object)))
	(p (ecase doc-type
	       (variable 'variable-documentation)
	       (function 'function-documentation)
	       (structure 'structure-documentation)
	       (type 'type-documentation)
	       (setf 'setf-documentation)
	       (compiler-macro 'compiler-macro-documentation)
	       (method-combination 'method-combination-documentation)
	       ((t) 'package-documentation))))
    (when x (get x p))))


(defun find-documentation (body)
  (if (or (endp body) (endp (cdr body)))
      nil
      (let ((form (macroexpand (car body))))
        (if (stringp form)
            form
            (if (and (consp form)
                     (eq (car form) 'declare))
                (find-documentation (cdr body))
                nil)))))
