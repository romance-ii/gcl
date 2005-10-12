;;-*-Lisp-*-
;;; CMPTYPE  Type information.
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

;;; CL-TYPE is any valid type specification of Common Lisp.
;;;
;;; TYPE is a representation type used by KCL.  TYPE is one of:
;;;
;;;				T(BOOLEAN)
;;;
;;;	FIXNUM  CHARACTER  SHORT-FLOAT  LONG-FLOAT
;;;	(VECTOR T)  STRING  BIT-VECTOR  (VECTOR FIXNUM)
;;;	(VECTOR SHORT-FLOAT)  (VECTOR LONG-FLOAT)
;;;	(ARRAY T)  (ARRAY CHARACTER)  (ARRAY BIT)
;;;	(ARRAY FIXNUM)
;;;	(ARRAY SHORT-FLOAT)  (ARRAY LONG-FLOAT)
;;;	UNKNOWN
;;;
;;;				NIL
;;;
;;;
;;; immediate-type:
;;;	FIXNUM		int
;;;	CHARACTER	char
;;;	SHORT-FLOAT	float
;;;	LONG-FLOAT	double


;;; Check if THING is an object of the type TYPE.
;;; Depends on the implementation of TYPE-OF.
(defun object-type (thing)
  (let ((type (type-of thing)))
    (case type
      ((fixnum bignum) `(integer ,thing ,thing))
      ((short-float long-float symbol null boolean) type)
      (cons `(cons ,(object-type (car thing)) ,(if (cdr thing) (object-type (cdr thing)) 'null)))
      (keyword 'symbol)
      ((standard-char character) 'character)
      ((string bit-vector) type)
      (vector (list 'vector (array-element-type thing)))
      (array (list 'array (array-element-type thing)))
      (t t))))   ;   'unknown ;; I can't see any use of this

(defvar *norm-tp-hash* (make-hash-table :test 'equal))
(defvar *and-tp-hash* (make-hash-table :test 'equal))
(defvar *or-tp-hash* (make-hash-table :test 'equal))

(defun cmp-norm-tp (tp)
  (multiple-value-bind 
   (r f) 
   (gethash tp *norm-tp-hash*)
   (cond (f r)
	 ((setf (gethash tp *norm-tp-hash*) (si::normalize-type-int tp t))))))

(defun type-and (t1 t2)
  (let ((x (cons t1 t2)))
    (multiple-value-bind 
     (r f) 
     (gethash x *norm-tp-hash*)
     (cond (f r)
	   ((setf (gethash x *and-tp-hash*) (type-and-int t1 t2)))))))

(defun type-or1 (t1 t2)
  (let ((x (cons t1 t2)))
    (multiple-value-bind 
     (r f) 
     (gethash x *norm-tp-hash*)
     (cond (f r)
	   ((setf (gethash x *or-tp-hash*) (type-or1-int t1 t2)))))))

;;FIXME -- this function needs a rewrite.  CM 20050106
(defun type-filter (type)
  (when (and (symbolp type) (get type 'si::deftype-definition) (not (get type 's-data)) (not (eq type 'string)))
    (return-from type-filter type))
  (case type
    ((character short-float long-float boolean symbol cons list sequence) type)
    ((single-float double-float) 'long-float)
    (keyword 'symbol)
    ((nil t) t)
    (t (let ((type (cmp-norm-tp type)) element-type)
	 (case (car type)
	   ((simple-array array)
	    (cond ((or (endp (cdr type))
		       (not (setq element-type
				  (cond ((eq '*  (cadr type)) nil)
					((si::best-array-element-type
					  (cadr type)))
					(t t)))))
		   t)	; I don't know.
		  ((and (not (endp (cddr type)))
			(not (eq (caddr type) '*))
			(or (eql (caddr type) 1)
			    (and (consp (caddr type))
				 (= (length (caddr type)) 1))))
		   (case element-type
		     (bit 'bit-vector)
		     (t (list 'vector element-type))))
		  (t (list 'array element-type))))
	   ((integer signed-byte unsigned-byte) type)
	   ((short-float) 'short-float)
	   ((long-float double-float single-float) 'long-float)
	   ((stream) 'stream)
	   (t (cond ((car (member type 
				  '(fixnum integer character short-float long-float
					   (vector t) string bit-vector
					   (vector fixnum) (vector short-float) (vector long-float)
					   (array t) (array bit) (array fixnum)
					   (array short-float) (array long-float))
				  :test 'type<=)))
		    ((eq (car type) 'values)
		     (if  (null (cddr type))
			 (list 'values (type-filter (second type)))
		       t))
		    ((and (eq (car type) 'satisfies)
			  (symbolp (second type))
			  (get (second type) 'type-filter)))
		    (t t)))
	   )))))

(defun literalp (form)
  (or (constantp form) (and (consp form) (eq (car form) 'load-time-value))))

;;FIXME -- This function needs expansion on centralization.  CM 20050106
(defun promoted-c-type (type)
  (let ((type (coerce-to-one-value type)))
    (let ((ct (and type (car (member type
;			   '(signed-char signed-short fixnum integer)
;			   '(signed-char unsigned-char signed-short unsigned-short fixnum integer)
			   '(fixnum integer)
			   :test 'type<=)))))
      (cond (ct)
;	    ((eq type 'boolean))
	    (type)))))
;      (or ct type))))
;      (if (integer-typep type)
;	(cond ;((subtypep type 'signed-char) 'signed-char)
;	 ((subtypep type 'fixnum) 'fixnum)
;	 ((subtypep type 'integer) 'integer)
;	 (t  (error "Cannot promote type ~S to C type~%" type)))
;      type)))

(defun random-propagator (&rest r)
  (let ((tp (cmp-norm-tp (cadr r))))
    (if (integer-typep tp)
	`(integer 0 ,(if (integerp (caddr tp)) (caddr tp) '*))
      tp)))
(si::putprop 'random (function random-propagator) 'type-propagator)

(defun ash-propagator (f t1 t2)
  (and
   (type>= 'fixnum t1)
   (type>= '(integer #.most-negative-fixnum #.(integer-length most-positive-fixnum)) t2)
   (super-range f t1 t2)))

(defun floor-propagator (f t1 &optional (t2 '(integer 1 1)))
  (let ((t1 (coerce-to-integer-type t1))
	(t2 (coerce-to-integer-type t2)))
    (and t2
	 (let ((i21 (integerp (cadr t2)))
	       (i22 (integerp (caddr t2))))
	   (and i21 i22 (> (* (cadr t2) (caddr t2)) 0)
		(let ((sr (super-range f t1 t2)))
		  (and sr
		       (list 'values sr
			     (let ((outer (if (< (cadr t2) 0) (cadr t2) (caddr t2))))
			       (let ((a (cadr (multiple-value-list
					      (funcall (symbol-function f) 1 outer))))
				     (b (cadr (multiple-value-list
					       (funcall (symbol-function f) -1 outer))))
				     (c (cadr (multiple-value-list
					       (funcall (symbol-function f) (1+ outer) outer))))
				     (d (cadr (multiple-value-list
					       (funcall (symbol-function f) (1- outer) outer)))))
				 (let ((p (min a b c d)))
				   (if (< p 0)
				       (list (car t2) p 0)
				     (list (car t2) 0 (max a b c d))))))))))))))


(defun super-range (f t1 &optional (t2 nil t2p))
  (let ((t1 (coerce-to-integer-type t1)))
    (and t1
	 (let ((i11 (integerp (cadr t1)))
	       (i12 (integerp (caddr t1))))
	   (if (and i11 i12)
	       (if t2p
		   (let ((t2 (coerce-to-integer-type t2)))
		     (and t2 (eq (car t1) (car t2))
			  (let ((i21 (integerp (cadr t2)))
				(i22 (integerp (caddr t2))))
			    (if (and i21 i22)
				(let ((a (funcall (symbol-function f) (cadr t1) (cadr t2)))
				      (b (funcall (symbol-function f) (cadr t1) (caddr t2)))
				      (c (funcall (symbol-function f) (caddr t1) (cadr t2)))
				      (d (funcall (symbol-function f) (caddr t1) (caddr t2))))
				  (list (car t1) (min a b c d) (max a b c d)))
			      (list (car t1) '* '*)))))
		 (let ((a (funcall (symbol-function f) (cadr t1)))
		       (b (funcall (symbol-function f) (caddr t1))))
		   (list (car t1) (min a b) (max a b))))
	     (list (car t1) '* '*))))))

(defun integer-typep (type)
  (and (consp type)
       (member (car type) '(integer signed-byte unsigned-byte) :test #'eq)
       (let ((l (length type)))
	 (and (<= 1 l 3)
	      (or (< l 2) (integerp (cadr type)) (eq (cadr type) '*))
	      (or (< l 3) (integerp (caddr type)) (eq (caddr type) '*))))))

(defun coerce-to-integer-type (t1)
  (if (integer-typep t1) t1
    (let ((t1 (cmp-norm-tp t1)))
      (if (integer-typep t1) t1))))

(defvar *two-stars* '(* *))

(defun integer-norm-form (form &optional (st *two-stars* stp))
  (cond ((and (not stp) (atom form)) (integer-norm-form (list form)))
	((and form (or (not st) (atom form))) (error "Bad integer type"))
	(form (cons (car form) (integer-norm-form (cdr form) (if stp (cdr st) st))))
	(st)))

(defun integer-type-and (type1 type2)
  (let ((ct1 (integer-norm-form (coerce-to-integer-type type1)))
	(ct2 (integer-norm-form (coerce-to-integer-type type2))))
    (and ct1 ct2
	 (eq (car ct1) (car ct2))
	 (let ((b1 (cadr ct1))
	       (e1 (caddr ct1))
	       (b2 (cadr ct2))
	       (e2 (caddr ct2)))
	   (let ((i11 (integerp b1))
		 (i12 (integerp e1))
		 (i21 (integerp b2))
		 (i22 (integerp e2)))
	     (let ((br (if i11 (if i21 (max b1 b2) b1) (if i21 b2 '*)))
		   (er (if i12 (if i22 (min e1 e2) e1) (if i22 e2 '*))))
	       (let ((t12 (and (eql br b1) (eql er e1) type1))
		     (t21 (and (eql br b2) (eql er e2) type2)))
		     (or (and t12 t21)
			 t12 t21
			 (and (or (eq br '*) (eq er '*) (<= br er))
			      (list (car ct1) br er))))))))))

;;FIXME -- centralize subtypep, normalzie-type, type>=, type-and.
;;Consider traversing a static tree.  CM 20050106
(defun type-and-int (type1 type2)

  (cond ((equal type1 type2) type2)
	((and (consp type2) (eq (car type2) 'values))
	 (if (and (consp type1) (eq (car type1) 'values))
	     (let ((r (list 'values)))
	       (do ((t1 (cdr type1) (cdr t1))
		    (t2 (cdr type2) (cdr t2)))
		   ((not (and (consp t1) (consp t2))) (nreverse r))
		 (push (type-and (car t1) (car t2)) r)))
	   (type-and type1 (second type2))))
	((and (consp type1) (eq (car type1) 'values))
	 (type-and (second type1) type2))
	((member type1 '(t object *)) type2)
	((member type2 '(t object *)) type1)
	((let* ((n (cmp-norm-tp `(and ,type1 ,type2)))
		(tem (cmp-norm-tp (car (si::nreconstruct-type (si::nprocess-type n))))))
	   (cond ((equal tem (caddr n)) type2) ;;FIXME centralize normalization
		 ((equal tem (cadr n)) type1)
		 ((not (car tem)) nil)
		 (tem))))))
		 
(defun type>= (type1 type2)
  (equal (type-and type1 type2) type2))
(defun type<= (type1 type2)
  (equal (type-and type2 type1) type1))


(defun type-or1-int (type1 type2)
  (cond ((equal type1 type2) type2)
	((and (consp type2) (eq (car type2) 'values))
	 (if (and (consp type1) (eq (car type1) 'values))
	     (let ((r (list 'values)))
	       (do ((t1 (cdr type1) (cdr t1))
		    (t2 (cdr type2) (cdr t2)))
		   ((not (and (consp t1) (consp t2))) (nreverse r))
		 (push (type-or1 (car t1) (car t2)) r)))
	   (type-or1 type1 (second type2))))
	((and (consp type1) (eq (car type1) 'values))
	 (type-or1 (second type1) type2))
	((member type1 '(t object *)) type1)
	((member type2 '(t object *)) type2)
	((let* ((n (cmp-norm-tp `(or ,type1 ,type2)))
		(tem (cmp-norm-tp (car (si::nreconstruct-type (si::nprocess-type n))))))
	   (cond ((equal tem (caddr n)) type2) ;;FIXME centralize normalization
		 ((equal tem (cadr n)) type1)
		 ((not (car tem)) nil)
		 ((eq (car tem) t))
		 (tem))))))

(defun reset-info-type (info)
  (if (info-type info)
      (let ((info1 (copy-info info)))
           (setf (info-type info1) t)
           info1)
      info))

;(defun reset-info-type (x) x)

(defun and-form-type (type form original-form &aux type1)
  (setq type1 (type-and type (info-type (cadr form))))
  (when (null type1)
        (cmpwarn "The type of the form ~s is not ~s, but ~s." original-form type (info-type (cadr form))))
  (if (eq type1 (info-type (cadr form)))
      form
      (let ((info (copy-info (cadr form))))
           (setf (info-type info) type1)
           (list* (car form) info (cddr form)))))

(defun check-form-type (type form original-form)
  (when (null (type-and type (info-type (cadr form))))
        (cmpwarn "The type of the form ~s is not ~s, but ~s." original-form type (info-type (cadr form)))))

(defun default-init (type)
  (let ((type (promoted-c-type type)))
    (when (member type +c-local-var-types+)
      (cmpwarn "The default value of NIL is not ~S." type)))
  (c1nil))
