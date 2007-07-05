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


(in-package 'lisp)


(export '(check-type assert
          ecase ccase typecase etypecase ctypecase))


(in-package 'system)


;(proclaim '(optimize (safety 2) (space 3)))


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

(defmacro check-type (place typespec &optional string)
  (declare (optimize (safety 1)))
  `(progn (setf ,place (the ,typespec (if (typep ,place ',typespec) ,place (check-type-symbol ',place ,place ',typespec ',string)))) nil))
;  `(unless (typep ,place ',typespec) (setf ,place (the ,typespec (check-type-symbol ',place ,place ',typespec ',string))) nil))
  

(defun ask-for-form (place)
  `(progn (format  *error-output*
                   "Please input a new form (to be evaluated) for the place ~:@(~S~): "
                   ',place)
          (finish-output *error-output*)
          (setf ,place (eval (read)))))


(defmacro assert (test-form &optional places string &rest args)
  (declare (optimize (safety 1)))
  `(do nil ;((*print-level* 4) (*print-length* 4))
       (,test-form nil)
     ,(if string
	  `(cerror "" ,string ,@args)
	`(cerror "" "The assertion ~:@(~S~) is failed." ',test-form))
     ,@(mapcar 'ask-for-form places)))


(defun clause-type (clauses)
  `(or ,@(mapcan (lambda (x) (mapcar (lambda (y) `(eql ,y)) (if (listp (car x)) (car x) (list (car x))))) clauses)))

(defmacro ecase (keyform &rest clauses &aux (key (gensym)))
  (declare (optimize (safety 1)))
  (check-type clauses (list-of proper-list))
  (let ((tp (clause-type clauses)))
    (do ((l (reverse clauses) (cdr l))
	 (form `(error 'type-error :datum ,key :expected-type ',tp)))
	((endp l) `(let ((,key ,keyform)) ,form))
	(when (caar l)
	  (setq form `(if ,(if (listp (caar l))
			       `(or ,@(mapcar (lambda (x) `(eql ,key ',x)) (caar l)));`(member ,key ',(caar l))
			     `(eql ,key ',(caar l)))
			  (progn ,@(cdar l))
			,form))))))

(defmacro ccase (keyplace &rest clauses &aux (key (gensym)))
  (declare (optimize (safety 1)))
  (check-type clauses (list-of proper-list))
   `(loop (let ((,key ,keyplace))
	    ,@(mapcar (lambda (l)
			`(when ,(if (listp (car l))
				    `(or ,@(mapcar (lambda (x) `(eql ,key ',x)) (car l)));`(member ,key ',(car l))
				  `(eql ,key ',(car l)))
			   (return (progn ,@(cdr l)))))
		      clauses)
	    (check-type ,keyplace ,(clause-type clauses)))))

(defmacro typecase (keyform &rest clauses)
  (declare (optimize (safety 1)))
  (check-type clauses (list-of proper-list))
  (let ((key (unless (symbolp keyform) (gensym))))
    (do ((l (reverse clauses) (cdr l))
	 (form nil))
	((endp l) (if key `(let ((,key ,keyform)) ,form) form))
      (let ((z `(progn ,@(cdar l))))
	(setq form (if (member (caar l) '(otherwise t)) z 
		     `(if (typep ,(or key keyform) ',(caar l)) ,z ,form)))))))
	
(defmacro etypecase (keyform &rest clauses &aux (key (if (symbolp keyform) keyform (gensym))))
  (declare (optimize (safety 1)))
  (check-type clauses (list-of proper-list))
  (let ((tp `(or ,@(mapcar 'car clauses))))
    `(typecase ,keyform ,@clauses (t (error 'type-error :datum ,key :expected-type ',tp)))))

(defmacro ctypecase (keyform &rest clauses &aux (key (gensym)))
  (declare (optimize (safety 1)))
  (check-type clauses (list-of proper-list))
  `(loop
    (typecase ,keyform
      ,@(mapcar (lambda (l)
		  `(,(car l) (return (progn ,@(subst key keyform (cdr l))))))
		clauses))
    (check-type ,keyform (or ,@(mapcar 'car clauses)))))

;; (defun typecase-error-string
;;        (keyform keyvalue negs
;;                 &aux (negs1 nil) (poss nil) (poss1 nil))
;;    (do ()
;;        ((endp negs))
;;        (if (symbolp (car negs))
;;            (progn (push (list (car negs)) negs1) (pop negs))
;;            (case (caar negs)
;;                  (or (setq negs (append (cdar negs) (cdr negs))))
;;                  (member (mapc #'(lambda (x) (push `(member ,x) negs1))
;;                                (cdar negs))
;;                          (pop negs))
;;                  (not (push (cadar negs) poss) (pop negs))
;;                  (otherwise (push (car negs) negs1) (pop negs)))))
;;    (do ()
;;        ((endp poss))
;;        (cond ((symbolp (car poss)) (push (list (car poss)) poss1) (pop poss))
;;              ((eq (caar poss) 'and)
;;               (setq poss (append (cdar poss) (cdr poss))))
;;              (t (push (car poss) poss1) (pop poss))))
;;    (format
;;     nil
;;     "The value of ~:@(~S~), ~:@(~S~), is ~?~?."
;;     keyform
;;     keyvalue
;;     "~#[~;~;~?~;~;~? and ~?~:;~%~@{~#[~;~;and ~]~?~^, ~}~]"
;;     (mapcan 'typecase-error-strings poss1)
;;     "~:[~[something~;~:;~%~]~;~[~:;, but~%~]~]~
;;      ~#[~;~;not ~?~;~;neither ~? nor ~?~:;not ~@{~#[~;~;or ~]~?~^, ~}~]"
;;     (cons poss1 (cons (length negs1)
;;                       (mapcan 'typecase-error-strings (reverse negs1))))))

;; (defun typecase-error-strings (type)
;;  (cond ((eq (car type) 'member)
;;         (case (length (cdr type))
;;               (0 `("one of none" nil))
;;               (1 `("~:@(~S~)" (,(cadr type))))
;;               (2 `("either ~:@(~S~) or ~:@(~S~)" ,(cdr type)))
;;               (t `("one of ~:@(~S~)" (,(cdr type))))))
;;        ((eq (car type) 'satisfies)
;;         `("an object satisfying ~:@(~S~)" ,(cdr type)))
;;        ((or (endp (cdr type)) (null (remove '* (cdr type))))
;;         (let ((x (assoc (car type)
;;                         '((t "anything")
;;                           (nil "none")
;;                           (null "nil")
;;                           (common "an object of a standard data type")))))
;;              (if x
;;                  `(,(cadr x) nil)
;;                  `("~:[a~;an~] ~(~A~)" (,(boin-p (car type)) ,(car type))))))
;;        (`("~:[a~;an~] ~:@(~S~)" (,(boin-p (car type)) ,type)))) )

;; (defun boin-p (symbol)
;;        (member (elt (symbol-name symbol) 0)
;;                '(#\A #\I #\U #\E #\O #\a #\i #\u #\e #\o)))

