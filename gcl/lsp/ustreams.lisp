
;;;
;;; This file contains some macros for user defined streams
;;;
;;;
;;; probably need to add some fields to "define-user-stream-type"
;;;
;;;
;;; we probably need the ability for user-defined streams to declare
;;; whether they are input/output or both
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(in-package 'lisp)

(export '(make-user-stream define-user-stream-type *user-defined-stream-types*))

(defvar *user-defined-stream-types* nil) ;;; list of user defined stream types

(defun make-user-stream (str-type)
  (let (struct)
    (unless (member str-type *user-defined-stream-types*)
	    (error "Make-user-stream: ~a undefined stream type" str-type))
    (setq struct (funcall (get str-type 'lisp::str-conc-name)))
    (allocate-stream-object str-type struct)))

(defmacro define-user-stream-type (str-name
				   str-data
				   str-read-char
				   str-write-char
				   str-peek-char
				   str-force-output
				   str-close
				   str-type
				   &optional str-unread-char)
   (let ((conc-name (intern (concatenate 'string "KCL-" 
					(symbol-name str-name)))))
     nil
     `(progn
	(setf (get ',str-name 'str-conc-name) ',conc-name)
	(setf (get ',str-name 'stream) t)
	(format t "Constructor ")
	(setq lisp::*user-defined-stream-types* (cons ',str-name lisp::*user-defined-stream-types*))
	(defstruct (,str-name (:constructor ,conc-name))
	  (str-data ,str-data)  		;0
	  (str-read-char ,str-read-char)	;1
	  (str-write-char ,str-write-char)	;2
	  (str-peek-char ,str-peek-char)	;3
	  (str-force-output ,str-force-output)	;4
	  (str-close ,str-close)		;5
	  (str-type ,str-type)			;6
	  (str-unread-char ,str-unread-char)	;7
	  (str-name ',str-name)))))		;8


;;;
;;;  allocate a stream-object and patch in the struct which holds
;;;  the goodies
;;;
(Clines

" object allocate_stream_object (stream_type, new_struct)

  object stream_type;
  object new_struct;          
 {
   object x;
   x = alloc_object(t_stream);
   x->sm.sm_mode = smm_user_defined;
   x->sm.sm_object1 = new_struct;
   x->sm.sm_object0 = stream_type;
   x->sm.sm_int0 = 0;
   x->sm.sm_fp = 0;
   x->sm.sm_int1 = 0;
   return x;
}"
)

(defentry allocate-stream-object (object object) (object allocate_stream_object)) 



