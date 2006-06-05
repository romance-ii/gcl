;; -*-Lisp-*-
;;; CMPWT  Output routines.
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

(defstruct (fasd (:type vector))
  stream
  table
  eof
  direction
  package
  index
  filepos
  table_length
  evald_forms ; list of forms eval'd. (load-time-eval)
  )

(defvar *fasd-ops*
'(  d_nil         ;/* dnil: nil */
  d_eval_skip    ;    /* deval o1: evaluate o1 after reading it */
  d_delimiter    ;/* occurs after d_listd_general and d_new_indexed_items */
  d_enter_vector ;     /* d_enter_vector o1 o2 .. on d_delimiter  make a cf_data with
		  ;  this length.   Used internally by gcl.  Just make
		  ;  an array in other lisps */
  d_cons        ; /* d_cons o1 o2: (o1 . o2) */
  d_dot         ;
  d_list    ;/* list* delimited by d_delimiter d_list,o1,o2, ... ,d_dot,on
		;for (o1 o2       . on)
		;or d_list,o1,o2, ... ,on,d_delimiter  for (o1 o2 ...  on)
	      ;*/
  d_list1   ;/* nil terminated length 1  d_list1o1   */
  d_list2   ; /* nil terminated length 2 */
  d_list3
  d_list4
  d_eval
  d_short_symbol
  d_short_string
  d_short_fixnum
  d_short_symbol_and_package
  d_bignum
  d_fixnum
  d_string
  d_objnull
  d_structure
  d_package
  d_symbol
  d_symbol_and_package
  d_end_of_file
  d_standard_character
  d_vector
  d_array
  d_begin_dump
  d_general_type
  d_sharp_equals ;              /* define a sharp */
  d_sharp_value
  d_sharp_value2
  d_new_indexed_item
  d_new_indexed_items
  d_reset_index
  d_macro
  d_reserve1
  d_reserve2
  d_reserve3
  d_reserve4
  d_indexed_item3 ;      /* d_indexed_item3 followed by 3bytes to give index */
  d_indexed_item2  ;      /* d_indexed_item2 followed by 2bytes to give index */
  d_indexed_item1 
  d_indexed_item0    ;  /* This must occur last ! */
))

;(require 'FASDMACROS "../cmpnew/gcl_fasdmacros.lsp")
(eval-when (compile eval)
;  (require 'FASDMACROS "../cmpnew/gcl_fasdmacros.lsp")

(defmacro put-op (op str)
  `(write-byte ,(or (position op *fasd-ops*)
		    (error "illegal op")) ,str))

(defmacro put2 (n str)
  `(progn  (write-bytei ,n 0 ,str)
	   (write-bytei  ,n 1 ,str)))
  
(defmacro write-bytei (n i str)
  `(write-byte (the fixnum (ash (the fixnum ,n) >> ,(* i 8))) ,str))
  


(defmacro data-vector () `(car *data*))
(defmacro data-inits () `(second *data*))
(defmacro data-package-ops () `(third *data*))

)

(defun wt-comment (message &optional (symbol nil))
  (princ "
/*	" *compiler-output1*)
  (let* ((mlist (and symbol (list (string symbol))))
	 (mlist (cons message mlist)))
    (dolist (s mlist)
      (declare (string s))
      (dotimes** (n (length s))
		 (let ((c (schar s n)))
		   (declare (character c))
		   (unless (char= c #\/)
		     (princ c *compiler-output1*))))))
  (princ "	*/
" *compiler-output1*)
  nil
  )

(defun wt1 (form)
  (cond ((or (stringp form) (integerp form) (characterp form))
         (princ form *compiler-output1*))
        ((or (typep form 'long-float)
             (typep form 'short-float))
         (format *compiler-output1* "~10,,,,,,'eG" form))
        (t (wt-loc form)))
  nil)

(defun wt-h1 (form)
  (cond ((consp form)
         (let ((fun (get (car form) 'wt)))
              (if fun
                  (apply fun (cdr form))
                  (cmpiler-error "The location ~s is undefined." form))))
        (t (princ form *compiler-output2*)))
  nil)

(defvar *fasd-data*)

(defun push-data-incf (x)
  (let ((x (or (setf-function-base-symbol x) x)))
    (vector-push-extend (cons (si::hash-equal x -1000) x) (data-vector))
    (incf *next-vv*)))

(defun wt-data1 (expr)
  (let ((*print-radix* nil)
        (*print-base* 10)
        (*print-circle* t)
        (*print-pretty* nil)
        (*print-level* nil)
        (*print-length* nil)
        (*print-case* :downcase)
        (*print-gensym* t)
        (*print-array* t)
	;;This forces the printer to add the float type in the .data file.
	(*READ-DEFAULT-FLOAT-FORMAT* t) 
        (si::*print-package* t)
        (si::*print-structure* t))
    (terpri *compiler-output-data*)
    (prin1 expr *compiler-output-data*)))

(defun verify-data-vector(vec &aux v)
  (dotimes (i (length vec))
	   (setq v (aref vec i))
	   (let ((has (si::hash-equal (cdr v) -1000)))
	     (cond ((not (eql (car v) has))
		    (cmpwarn "A form or constant:~% ~s ~%has changed during the eval compile procedure!.~%  The changed form will be the one put in the compiled file" (cdr v)))))
	   (setf (aref vec i) (cdr v)))
  vec
  )

(defun add-init (x &optional endp)
  (let ((tem (cons (si::hash-equal x -1000) x)))
    (setf (data-inits)
		    (if endp
			(nconc (data-inits) (list tem))
		      (cons tem (data-inits) )))
    x))

(defun wt-data-file ()
  (verify-data-vector (data-vector))
  (let* ((vec (coerce (nreverse (data-inits)) 'vector)))
    (verify-data-vector vec)
    (let ((v (make-array 2)))
      (setf (aref v 0) `(let ((si::*disable-recompile* t)) ,@(coerce vec 'list))
	    (aref v 1) `(si::do-recompile)
	    (aref (data-vector) (- (length (data-vector)) 1))
	    (cons 'si::%init v)))
    (setf (data-package-ops) (nreverse (data-package-ops)))
    (cond (*fasd-data*
	   (wt-fasd-data-file))
	  (t
	   (format *compiler-output-data* "       ~%#(")
	   (dolist (v (data-package-ops))
		   (format *compiler-output-data* "#! ")
		   (wt-data1 v))
	   (wt-data1 (data-vector))
	   (format *compiler-output-data* "~%)~%")
	   ))))

(defun wt-fasd-data-file ( &aux (x (data-vector)) tem)
;  (si::find-sharing-top (data-package-ops) (fasd-table (car *fasd-data*)))
  (si::find-sharing-top x (fasd-table (car *fasd-data*)))
  (cond ((setq tem  (data-package-ops))
	 (dolist (v tem)
	 (put-op d_eval_skip  *compiler-output-data*)
	 (si::write-fasd-top v (car *fasd-data*)))))
  (si::write-fasd-top x (car *fasd-data*))
;  (sloop::sloop for (k v) in-table (fasd-table (car *fasd-data*))
;		when (>= v 0) do (print (list k v)))
  (si::close-fasd (car *fasd-data*)))
(defun wt-data-begin ())
(defun wt-data-end ())
(defun wt-data-package-operation (x)
  (push x (data-package-ops)))
;  (push-data-incf x))

(defmacro wt (&rest forms &aux (fl nil))
  (dolist** (form forms (cons 'progn (reverse (cons nil fl))))
    (if (stringp form)
        (push `(princ ,form *compiler-output1*) fl)
        (push `(wt1 ,form) fl))))

(defmacro wt-h (&rest forms &aux (fl nil))
  (cond ((endp forms) '(princ "
" *compiler-output2*))
        ((stringp (car forms))
         (dolist** (form (cdr forms)
                         (list* 'progn `(princ ,(concatenate 'string "
" (car forms)) *compiler-output2*) (reverse (cons nil fl))))
                   (if (stringp form)
                       (push `(princ ,form *compiler-output2*) fl)
                       (push `(wt-h1 ,form) fl))))
        (t (dolist** (form forms
                           (list* 'progn '(princ "
" *compiler-output2*) (reverse (cons nil fl))))
                     (if (stringp form)
                         (push `(princ ,form *compiler-output2*) fl)
                         (push `(wt-h1 ,form) fl))))))

(defmacro wt-nl (&rest forms &aux (fl nil))
  (cond ((endp forms) '(princ "
	" *compiler-output1*))
        ((stringp (car forms))
         (dolist** (form (cdr forms)
                         (list* 'progn `(princ ,(concatenate 'string "
	" (car forms)) *compiler-output1*) (reverse (cons nil fl))))
                   (if (stringp form)
                       (push `(princ ,form *compiler-output1*) fl)
                       (push `(wt1 ,form) fl))))
        (t (dolist** (form forms
                           (list* 'progn '(princ "
	" *compiler-output1*) (reverse (cons nil fl))))
                     (if (stringp form)
                         (push `(princ ,form *compiler-output1*) fl)
                         (push `(wt1 ,form) fl))))))

(defmacro wt-nl1 (&rest forms &aux (fl nil))
  (cond ((endp forms) '(princ "
" *compiler-output1*))
        ((stringp (car forms))
         (dolist** (form (cdr forms)
                         (list* 'progn `(princ ,(concatenate 'string "
" (car forms)) *compiler-output1*) (reverse (cons nil fl))))
                   (if (stringp form)
                       (push `(princ ,form *compiler-output1*) fl)
                       (push `(wt1 ,form) fl))))
        (t (dolist** (form forms
                           (list* 'progn '(princ "
" *compiler-output1*) (reverse (cons nil fl))))
                     (if (stringp form)
                         (push `(princ ,form *compiler-output1*) fl)
                         (push `(wt1 ,form) fl))))))

