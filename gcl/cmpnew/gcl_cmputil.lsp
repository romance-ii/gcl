;;; CMPUTIL  Miscellaneous Functions.
;;;
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


(in-package 'compiler)

(export '(*suppress-compiler-warnings*
          *suppress-compiler-notes*
          *compiler-break-enable*))

(defmacro safe-compile (&rest forms) `(when *safe-compile* ,@forms))

(defvar *current-form* '|compiler preprocess|)
(defvar *first-error* t)
(defvar *error-count* 0)

(defconstant *cmperr-tag* (cons nil nil))

(defun cmperr (string &rest args &aux (*print-case* :upcase))
  (print-current-form)
  (format t "~&;;; ")
  (apply #'format t string args)
  (incf *error-count*)
  (throw *cmperr-tag* '*cmperr-tag*))

(defmacro cmpck (condition string &rest args)
  `(if ,condition (cmperr ,string ,@args)))

(defun too-many-args (name upper-bound n &aux (*print-case* :upcase))
  (print-current-form)
  (format t
          ";;; ~S requires at most ~R argument~:p, ~
          but ~R ~:*~[were~;was~:;were~] supplied.~%"
          name
          upper-bound
          n)
  (incf *error-count*)
  (throw *cmperr-tag* '*cmperr-tag*))

(defun too-few-args (name lower-bound n &aux (*print-case* :upcase))
  (print-current-form)
  (format t
          ";;; ~S requires at least ~R argument~:p, ~
          but only ~R ~:*~[were~;was~:;were~] supplied.~%"
          name
          lower-bound
          n)
  (incf *error-count*)
  (throw *cmperr-tag* '*cmperr-tag*))

(defvar *suppress-compiler-warnings* nil)

(defun cmpwarn (string &rest args &aux (*print-case* :upcase))
  (unless *suppress-compiler-warnings*
    (print-current-form)
    (format t ";; Warning: ")
    (apply #'format t string args)
    (terpri))
  nil)

(defvar *suppress-compiler-notes* nil)

(defun cmpnote (string &rest args &aux (*print-case* :upcase))
  (unless *suppress-compiler-notes* 
    (terpri)
    (format t ";; Note: ")
    (apply #'format t string args))
  nil)

(defun print-current-form ()
  (when *first-error*
        (setq *first-error* nil)
        (fresh-line)
        (cond
         ((and (consp *current-form*)
               (eq (car *current-form*) 'si:|#,|))
          (format t "; #,~s is being compiled.~%" (cdr *current-form*)))
         (t
          (let ((*print-length* 2)
                (*print-level* 2))
               (format t "; ~s is being compiled.~%" *current-form*)))))
  nil)

(defun undefined-variable (sym &aux (*print-case* :upcase))
  (print-current-form)
  (format t
          ";; The variable ~s is undefined.~%~
           ;; The compiler will assume this variable is a global.~%"
          sym)
  nil)

(defun baboon (&aux (*print-case* :upcase))
  (print-current-form)
  (format t ";;; A bug was found in the compiler.  Contact Taiichi.~%")
  (incf *error-count*)
  (break)
;  (throw *cmperr-tag* '*cmperr-tag*)
)

;;; Internal Macros with type declarations

(defmacro dolist* ((v l &optional (val nil)) . body)
  (let ((temp (gensym)))
  `(do* ((,temp ,l (cdr ,temp)) (,v (car ,temp) (car ,temp)))
	((endp ,temp) ,val)
	(declare (object ,v))
	,@body)))

(defmacro dolist** ((v l &optional (val nil)) . body)
  (let ((temp (gensym)))
  `(do* ((,temp ,l (cdr ,temp)) (,v (car ,temp) (car ,temp)))
	((endp ,temp) ,val)
	(declare (object ,temp ,v))
	,@body)))

(defmacro dotimes* ((v n &optional (val nil)) . body)
  (let ((temp (gensym)))
   `(do* ((,temp ,n) (,v 0 (1+ ,v)))
	 ((>= ,v ,temp) ,val)
	 (declare (fixnum ,v))
	 ,@body)))

(defmacro dotimes** ((v n &optional (val nil)) . body)
  (let ((temp (gensym)))
   `(do* ((,temp ,n) (,v 0 (1+ ,v)))
	 ((>= ,v ,temp) ,val)
	 (declare (fixnum ,temp ,v))
	 ,@body)))

(defun cmp-eval (form)
  (let ((x (multiple-value-list (cmp-toplevel-eval `(eval ',form)))))
    (if (car x)
        (let ((*print-case* :upcase))
          (incf *error-count*)
          (print-current-form)
          (format t
                  ";;; The form ~s was not evaluated successfully.~%~
                  ;;; You are recommended to compile again.~%"
                  form)
          nil)
        (values-list (cdr x)))))


;(si::putprop 'setf 'c1setf 'c1special)

;;The PLACE may be a local macro, so we must take care to expand it
;;before trying to call the macro form of setf, or an error will

;(defun c1setf (args &aux fd)
;  (cond ((and
;	   (consp (car args))
;	   (symbolp (caar args))
;	   (setq fd (cmp-macro-function (caar args))))
;	 (c1expr `(setf ,(cmp-expand-macro fd (caar args) (cdar args))
;			,@ (cdr args))))
;	(t       
;         (c1expr (cmp-expand-macro (macro-function 'setf)
;				   'setf
;				   args)))))

(defun cmp-macroexpand (form &aux env)
  ;;Obtain the local macro environment for expansion.
  (dolist (v *funs*)
	  (if (consp v) (push (list (car v) 'macro (cadr v)) env)))
  (if env (setq env (list nil (nreverse env) nil)))
  (let ((x (multiple-value-list
	     (cmp-toplevel-eval `(macroexpand ',form ',env)))))
    (if (car x)
        (let ((*print-case* :upcase))
          (incf *error-count*)
          (print-current-form)
          (format t
                  ";;; The macro form ~s was not expanded successfully.~%"
                  form)
          `(error "Macro-expansion of ~s failed at compile time." ',form))
        (cadr x))))

(defun cmp-macroexpand-1 (form &aux env)
  (dolist (v *funs*)
	  (if (consp v) (push (list (car v) 'macro (cadr v)) env))) 
  (let ((x (multiple-value-list (cmp-toplevel-eval `(macroexpand-1 ',form
								   ',env)))))
    (if (car x)
        (let ((*print-case* :upcase))
          (incf *error-count*)
          (print-current-form)
          (format t
                  ";;; The macro form ~s was not expanded successfully.~%"
                  form)
          `(error "Macro-expansion of ~s failed at compile time." ',form))
        (cadr x))))

(defun cmp-expand-macro (fd fname args &aux env)
  (dolist (v *funs*)
	  (if (consp v) (push (list (car v) 'macro (cadr v)) env)))
  (and *record-call-info* (add-macro-callee fname))
  (if env (setq env (list nil (nreverse env) nil)))
  (let ((x (multiple-value-list
            (cmp-toplevel-eval
             `(funcall *macroexpand-hook* ',fd ',(cons fname args) ',env)))))
    (if (car x)
        (let ((*print-case* :upcase))
          (incf *error-count*)
          (print-current-form)
          (format t
            ";;; The macro form (~s ...) was not expanded successfully.~%"
            fname)
          `(error "Macro-expansion of ~s failed at compile time."
                  ',(cons fname args)))
        (cadr x))))

(defvar *compiler-break-enable* nil)

(defun cmp-toplevel-eval (form)
   (let* ((si::*ihs-base* si::*ihs-top*)
          (si::*ihs-top* (1- (si::ihs-top)))
          (*break-enable* *compiler-break-enable*)
          (si::*break-hidden-packages*
           (cons (find-package 'compiler)
                 si::*break-hidden-packages*)))
         (si:error-set form)))

(dolist (v '(si::cdefn lfun inline-safe inline-unsafe
		       inline-always c1conditional c2 c1 c1+ co1
		       si::structure-access co1special
		       top-level-macro t3 t2 t1 package-operation))
	   (si::putprop v t 'compiler-prop ))

(defun  compiler-def-hook (symbol code) symbol code nil)

(defun compiler-clear-compiler-properties (symbol code)
  code
  (let ((v (symbol-plist symbol)) w)
    (tagbody
      top
      (setq w (car v))
      (cond ((and (symbolp w)
		  (get w 'compiler-prop))

	     (setq v (cddr v))
	     (remprop symbol w))
	    (t (setq v (cddr v))))
      (or (null v) (go top)))
    (compiler-def-hook symbol code)
    ))

;hi
