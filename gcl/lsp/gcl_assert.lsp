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


;;;;    assert.lsp


;; (in-package 'lisp)


;; (export '(check-type assert
;;           ecase ccase typecase etypecase ctypecase))


(in-package :system)


(defun check-type-symbol (symbol value typespec &optional s)
  (do nil
      ((typep value typespec) value)
      (let ((*print-level* 4) (*print-length* 4))
	(cerror "choose a new value" 'type-error :datum value :expected-type (or s typespec)))
;		(format nil "The value ~:@(~S~) bound to variable ~:@(~S~) is not ~A -- choose a new value" 
;			value symbol (or s typespec))
      (progn (format  *error-output*
		      "Please input a new form (to be evaluated) for the place ~:@(~S~): "
		      symbol)
	     (finish-output *error-output*)
	     (setf value (eval (read))))))


(defun ask-for-form (place)
  `(progn (format  *error-output*
                   "Please input a new form (to be evaluated) for the place ~:@(~S~): "
                   ',place)
          (finish-output *error-output*)
          (setf ,place (eval (read)))))


(defmacro assert (test-form &optional places string &rest args)
  (declare (optimize (safety 2)))
  `(do nil ;((*print-level* 4) (*print-length* 4))
       (,test-form nil)
     ,(if string
	  `(cerror "" ,string ,@args)
	`(cerror "" "The assertion ~:@(~S~) failed." ',test-form))
     ,@(mapcar 'ask-for-form places)))


(defun clause-type (clauses)
  `(or ,@(mapcan (lambda (x) (mapcar (lambda (y) `(eql ,y)) (if (listp (car x)) (car x) (list (car x))))) clauses)))
	
;; (defmacro etypecase (keyform &rest clauses &aux (key (if (symbolp keyform) keyform (gensym))))
;;   (declare (optimize (safety 2)))
;;   (check-type clauses (list-of proper-list))
;;   (let ((tp `(or ,@(mapcar 'car clauses))))
;;     `(typecase ,keyform ,@clauses (t (error 'type-error :datum ,key :expected-type ',tp)))))

(defmacro ctypecase (keyform &rest clauses &aux (key (gensym)))
  (declare (optimize (safety 2)))
  (check-type clauses (list-of proper-list))
  `(loop
    (typecase ,keyform
      ,@(mapcar (lambda (l)
		  `(,(car l) (return (progn ,@(subst key keyform (cdr l))))))
		clauses))
    (check-type ,keyform (or ,@(mapcar 'car clauses)))))
