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


;;;;	evalmacros.lsp


(in-package "LISP")

(export '(defvar defparameter defconstant))

(in-package "SYSTEM")


(eval-when (compile) (proclaim '(optimize (safety 2) (space 3))))
(eval-when (eval compile) (defun si:clear-compiler-properties (symbol)))
(eval-when (eval compile) (setq si:*inhibit-macro-special* nil))


(defmacro defvar (var &optional (form nil form-sp) doc-string)
  `(progn (si:*make-special ',var)
	  ,(if doc-string
	       `(si:putprop ',var ,doc-string 'variable-documentation))
	  ,(if form-sp
	       `(or (boundp ',var)
		    (setq ,var ,form)))
	  ',var)
	  )

(defmacro defparameter (var form &optional doc-string)
  (if doc-string
      `(progn (si:*make-special ',var)
              (si:putprop ',var ,doc-string 'variable-documentation)
              (setq ,var ,form)
              ',var)
      `(progn (si:*make-special ',var)
              (setq ,var ,form)
              ',var)))

(defmacro defconstant (var form &optional doc-string)
  (if doc-string
      `(progn (si:*make-constant ',var ,form)
              (si:putprop ',var ,doc-string 'variable-documentation)
              ',var)
      `(progn (si:*make-constant ',var ,form)
              ',var)))


;;; Each of the following macros is also defined as a special form.
;;; Thus their names need not be exported.

(defmacro and (&rest forms)
  (if (endp forms)
      t
      (let ((x (reverse forms)))
           (do ((forms (cdr x) (cdr forms))
                (form (car x) `(if ,(car forms) ,form)))
               ((endp forms) form))))
  )

(defmacro or (&rest forms)
  (if (endp forms)
      nil
      (let ((x (reverse forms)))
           (do ((forms (cdr x) (cdr forms))
                (form (car x)
                      (let ((temp (gensym)))
                           `(let ((,temp ,(car forms)))
                                 (if ,temp ,temp ,form)))))
               ((endp forms) form))))
  )
               
(defmacro locally (&rest body) `(let () ,@body))

(defmacro loop (&rest body &aux (tag (gensym)))
  `(block nil (tagbody ,tag (progn ,@body) (go ,tag))))

(defmacro defmacro (name vl &rest body)
  `(si:define-macro ',name (si:defmacro* ',name ',vl ',body)))

(defmacro defun (name lambda-list &rest body)
  (multiple-value-bind (doc decl body)
       (find-doc body nil)
    (if doc
        `(progn (setf (get ',name 'si:function-documentation) ,doc)
                (setf (symbol-function ',name)
                      #'(lambda ,lambda-list
                          ,@decl (block ,name ,@body)))
                ',name)
        `(progn (setf (symbol-function ',name)
                      #'(lambda ,lambda-list
                          ,@decl (block ,name ,@body)))
                ',name))))

; assignment

(defmacro psetq (&rest args)
   (do ((l args (cddr l))
        (forms nil)
        (bindings nil))
       ((endp l) (list* 'let* (reverse bindings) (reverse (cons nil forms))))
       (declare (object l))
       (let ((sym (gensym)))
            (push (list sym (cadr l)) bindings)
            (push (list 'setq (car l) sym) forms)))
   )

; conditionals

(defmacro cond (&rest clauses &aux (form nil))
  (dolist (l (reverse clauses) form)
          (declare (object l))
    (cond ((endp (cdr l))
           (if (eq (car l) 't)
               (setq form 't)
               (let ((sym (gensym)))
                    (setq form `(let ((,sym ,(car l)))
                                     (if ,sym ,sym ,form))))))
          ((eq (car l) 't)
           (setq form (if (endp (cddr l))
                          (cadr l)
                          `(progn ,@(cdr l)))))
          (t (setq form (if (endp (cddr l))
                            `(if ,(car l) ,(cadr l) ,form)
                            `(if ,(car l) (progn ,@(cdr l)) ,form))))))
  )

(defmacro when (pred &rest body)
  `(if ,pred (progn ,@body)))

(defmacro unless (pred &rest body)
  `(if (not ,pred) (progn ,@body)))

; program feature

(defmacro prog (vl &rest body &aux (decl nil))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare)))
       `(block nil (let ,vl ,@decl (tagbody ,@body)))
       )
      (push (car body) decl)
      (pop body))
  )

(defmacro prog* (vl &rest body &aux (decl nil))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare)))
       `(block nil (let* ,vl ,@decl (tagbody ,@body)))
       )
      (push (car body) decl)
      (pop body))
  )

; sequencing

(defmacro prog1 (first &rest body &aux (sym (gensym)))
  `(let ((,sym ,first)) ,@body ,sym))

(defmacro prog2 (first second &rest body &aux (sym (gensym)))
  `(progn ,first (let ((,sym ,second)) ,@body ,sym)))

; multiple values

(defmacro multiple-value-list (form)
  `(multiple-value-call 'list ,form))

(defmacro multiple-value-setq (vars form)
  (do ((vl vars (cdr vl))
       (sym (gensym))
       (forms nil)
       (n 0 (1+ n)))
      ((endp vl) `(let ((,sym (multiple-value-list ,form))) ,@forms))
      (declare (fixnum n) (object vl))
      (push `(setq ,(car vl) (nth ,n ,sym)) forms))
  )

(defmacro multiple-value-bind (vars form &rest body)
  (do ((vl vars (cdr vl))
       (sym (gensym))
       (bind nil)
       (n 0 (1+ n)))
      ((endp vl) `(let* ((,sym (multiple-value-list ,form)) ,@(reverse bind))
                        ,@body))
      (declare (fixnum n) (object vl))
      (push `(,(car vl) (nth ,n ,sym)) bind))
  )

(defmacro do (control (test . result) &rest body
              &aux (decl nil) (label (gensym)) (vl nil) (step nil))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare))))
      (push (car body) decl)
      (pop body))
  (dolist (c control)
          (declare (object c))
    (if(symbolp  c) (setq c (list c)))
        (push (list (car c) (cadr c)) vl)
    (unless (endp (cddr c))
            (push (car c) step)
            (push (caddr c) step)))
  `(block nil
          (let ,(reverse vl)
               ,@decl
               (tagbody
                ,label (if ,test (return (progn ,@result)))
                       (tagbody ,@body)
                       (psetq ,@(reverse step))
                       (go ,label)))))

(defmacro do* (control (test . result) &rest body
               &aux (decl nil) (label (gensym)) (vl nil) (step nil))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare))))
      (push (car body) decl)
      (pop body))
  (dolist (c control)
          (declare (object c))
    (if(symbolp  c) (setq c (list c)))
        (push (list (car c) (cadr c)) vl)
    (unless (endp (cddr c))
            (push (car c) step)
            (push (caddr c) step)))
  `(block nil
          (let* ,(reverse vl)
                ,@decl
                (tagbody
                 ,label (if ,test (return (progn ,@result)))
                        (tagbody ,@body)
                        (setq ,@(reverse step))
                        (go ,label))))
  )

(defmacro case (keyform &rest clauses &aux (form nil) (key (gensym)))
  (dolist (clause (reverse clauses) `(let ((,key ,keyform)) ,form))
          (declare (object clause))
    (cond ((or (eq (car clause) 't) (eq (car clause) 'otherwise))
           (setq form `(progn ,@(cdr clause))))
          ((consp (car clause))
           (setq form `(if (member ,key ',(car clause))
                           (progn ,@(cdr clause))
                           ,form)))
          ((car clause)
           (setq form `(if (eql ,key ',(car clause))
                           (progn ,@(cdr clause))
                           ,form)))))
  )


(defmacro return (&optional (val nil)) `(return-from nil ,val))

(defmacro dolist ((var form &optional (val nil)) &rest body
                                                 &aux (temp (gensym)))
  `(do* ((,temp ,form (cdr ,temp)) (,var (car ,temp) (car ,temp)))
	((endp ,temp) ,val)
	,@body))

;; In principle, a more complete job could be done here by trying to
;; capture fixnum type declarations from the surrounding context or
;; environment, or from within the compiler's internal structures at
;; compile time.  See gcl-devel archives for examples.  This
;; implementation relies on the fact that the gcc optimizer will
;; eliminate the bignum branch if the supplied form is a symbol
;; declared to be fixnum, as the comparison of a long integer variable
;; with most-positive-fixnum is then vacuous.  Care must be taken in
;; making comparisons with most-negative-fixnum, as the C environment
;; appears to treat this as positive or negative depending on the sign
;; of the other argument in the comparison, apparently to symmetrize
;; the long integer range.  20040403 CM.
(defmacro dotimes ((var form &optional (val nil)) &rest body)
  (cond
   ((symbolp form)
    (let ((temp (gensym)))
      `(cond ((< ,form 0)
	      (let ((,var 0))
		(declare (fixnum ,var) (ignorable ,var))
		,val))
	     ((<= ,form most-positive-fixnum)
                 (let ((,temp ,form))
                   (declare (fixnum ,temp))
                   (do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
                     (declare (fixnum ,var))
                     ,@body)))
                (t 
		 (let ((,temp ,form))
		   (do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
		     ,@body))))))
	((constantp form)
	 (cond ((< form 0)
		`(let ((,var 0))
		   (declare (fixnum ,var) (ignorable ,var))
		   ,val))
	       ((<= form most-positive-fixnum)
		`(do* ((,var 0 (1+ ,var))) ((>= ,var ,form) ,val)
		   (declare (fixnum ,var))
		   ,@body))
	       (t
		`(do* ((,var 0 (1+ ,var))) ((>= ,var ,form) ,val)
		   ,@body))))
	(t
	 (let ((temp (gensym)))
	 `(let ((,temp ,form))
	    (cond ((< ,temp 0)
		   (let ((,var 0))
		     (declare (fixnum ,var) (ignorable ,var))
		     ,val))
		  ((<= ,temp most-positive-fixnum)
		   (let ((,temp ,temp))
		     (declare (fixnum ,temp))
		     (do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
		       (declare (fixnum ,var))
		       ,@body)))
		  (t 
		   (do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
		     ,@body))))))))


(defmacro declaim (&rest l)
 `(eval-when (compile eval load)
	     ,@(mapcar #'(lambda (x) `(proclaim ',x)) l)))

(defmacro lambda ( &rest l) `(function (lambda ,@l)))
