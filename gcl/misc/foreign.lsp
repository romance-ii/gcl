;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; -*- Mode: Lisp;  -*-
;;; File: foreign-interface.lisp
;;; Author: Paul Viola (viola@ai.mit.edu)
;;; Copyright (C) Paul Viola, 1993
;;;*----------------------------------------------------------------------------
;;;* FUNCTION: Code to support foreign function call interface in GCL.
;;;*
;;;* CLASSES:
;;;* 
;;;* RELATED PACKAGES:
;;;*
;;;* HISTORY:
;;;* Last edited: May  7 17:55 1993 (viola)
;;;* Created: Thu May  6 11:36:49 1993 (viola)
;;;*----------------------------------------------------------------------------

(in-package "USER")

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Code that makes some lucid foreign function definitions work in GCL.

(defparameter *lucid-to-gcl-c-types*
  '((:signed-32bit int)
    (:unsigned-32bit int)		;I hope this is right.
    (:double-float double)
    (:single-float float)
    (:simple-string string)
    ((:pointer :signed-32bit) vector-int)
    ((:pointer :single-float) vector-single-float)
    ((:pointer :double-float) vector-double-float)
    (:null void)))

(defmacro def-foreign-function ((lisp-name . key-params) . c-params)
  "I wrote this so that lucid calls to foreign functions could be used directly in
GCL. "
  (progn (print lisp-name)
	 `(defentry-2 ,lisp-name
	   ,(loop for param in c-params
		  collect (cadr (assoc (cadr param) *lucid-to-gcl-c-types*
				       :test #'equal)))
	   ,(list (cadr (assoc (lucid-return-type key-params) *lucid-to-gcl-c-types*
			       :test #'equal))
		  (lucid-c-name key-params)))))

(defun lucid-return-type (key-params)
  (cadar (member :return-type key-params :key #'car)))

(defun lucid-c-name (key-params)
  (intern
   (string-upcase
    (subseq (cadar (member :name key-params :key #'car)) 1))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Using lisp strings in C is a pain.  First they need to be NULL terminated
;;; then they need to be converted into a C object.  The code below returns a
;;; C-string from a lisp routine.  This is pretty dangerous - I don't know what
;;; would happen if you tried to operate on it.

;;; For an array of ints.
(defCfun "object get_c_ints(s) object s;" 0
  " return(s->fixa.fixa_self);"
  )

(defentry get-c-ints (object) (object get_c_ints))

;;; For an array of single-floats.
(defCfun "object get_c_single_floats(s) object s;" 0
  " return(s->sfa.sfa_self);"
  )

(defentry get-c-single-floats (object) (object get_c_single_floats))

;;; For an array of double-floats.
(defCfun "object get_c_double_floats(s) object s;" 0
  " return(s->lfa.lfa_self);"
  )

(defentry get-c-double-floats (object) (object get_c_double_floats))

;;; For a string.
(defCfun "object get_c_string(s) object s;" 0
  " return(s->st.st_self);"
  )
(defentry get_c_string_2 (object) (object get_c_string))

;; make sure string is null terminated
(defun get-c-string (string)
  (get_c_string_2 (concatenate 'string string "


(defparameter *gcl-to-c-types*
  '((int int nil)
    (char char nil)
    (float float nil)
    (double double nil)
    (object object nil)
    (string object get-c-string)
    (vector-int object get-c-ints)
    (vector-single-float object get-c-single-floats)
    (vector-double-float object get-c-double-floats)))
	    
(defmacro defentry-2 (func-name param-types declaration)
  "Macro enhances defentry so that composite types can be passed to C functions.
For a list of types look at *gcl-to-c-types*"
  (let ((f-name (intern (concatenate 'string (symbol-name func-name) "-2")))
	(new-types (mapcar #'(lambda (a) (cadr (assoc a *gcl-to-c-types*))) param-types))
	(param-list (mapcar #'(lambda (a) (gensym)) param-types)))
    `(progn 
      (defentry ,f-name ,new-types ,declaration)
      (defmacro ,func-name ,param-list
	(list ',f-name
	      ,@(loop for p in param-list
		      for type in param-types
		      for (ntype new-type converter-func) = (assoc type *gcl-to-c-types*)
		      collect (if (null converter-func)
				  p
				  `(list ',converter-func ,p))))))))

