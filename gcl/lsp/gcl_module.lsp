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


(in-package 'lisp)

(export '(*modules* provide require))
(export 'documentation)
(export '(variable function structure type setf compiler-macro))

(in-package 'system)


;(eval-when (compile) (proclaim '(optimize (safety 2) (space 3))))


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
  (cond ((typep object 'function)
	 (setq object (function-name object)))
	((typep object 'package)
	 (setq object (find-symbol (package-name object) :keyword))))
  (when object
    (check-type object symbol)
    (ecase doc-type
      (variable (get object 'variable-documentation))
      (function (get object 'function-documentation))
      (structure (get object 'structure-documentation))
      (type (get object 'type-documentation))
      (setf (get object 'setf-documentation))
      (compiler-macro (get object 'compiler-macro-documentation))
      (method-combination (get object 'method-combination-documentation))
      ((t) (when (find-package object) (get object 'package-documentation))))))

(defun set-documentation (object doc-type value)
  (cond ((typep object 'function)
	 (setq object (function-name object) doc-type 'function))
	((typep object 'package)
	 (setq object (find-symbol (package-name object) :keyword))))
  (when object
    (check-type object symbol)
    (ecase doc-type
      (variable (setf (get object 'variable-documentation) value))
      (function (setf (get object 'function-documentation) value))
      (structure (setf (get object 'structure-documentation) value))
      (type (setf (get object 'type-documentation) value))
      (setf (setf (get object 'setf-documentation) value))
      (compiler-macro (setf (get object 'compiler-macro-documentation) value))
      (method-combination (setf (get object 'method-combination-documentation) value))
      ((t) (when (find-package object) (setf (get object 'package-documentation) value))))))

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
