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

(defvar *car-limit* -1);1)
(defvar *cdr-limit* -1);5)
(defun cons-tp-limit (x i j)
  (declare (seqind i j))
  (cond ((> i *car-limit*) nil)
	((> j *cdr-limit*) nil)
	((atom x) t)
	((and (cons-tp-limit (car x) (1+ i) 0) (cons-tp-limit (cdr x) i (1+ j))))))


(defun object-type (thing &optional lim)
  (let* ((type (type-of thing)))
    (cond ((eq thing t) '(member t))
	  ((type>= 'integer type) `(integer ,thing ,thing))
	  ((type>= 'short-float type) `(short-float ,thing ,thing))
	  ((type>= 'long-float type) `(long-float ,thing ,thing))
	  ((eq type 'cons) (cond ((or lim (cons-tp-limit thing 0 0)) 
				  `(cons ,(object-type (car thing) t) ,(if (cdr thing) (object-type (cdr thing) t) 'null)))
				 ((si::improper-consp thing) `(list))
				 (`(si::proper-list))))
	  ((eq type 'keyword) 'symbol)
	  ((type>= 'character type) 'character)
	  (type))))

(defvar *norm-tp-hash* (make-hash-table :test 'equal))
(defvar *and-tp-hash* (make-hash-table :test 'equal))
(defvar *or-tp-hash* (make-hash-table :test 'equal))

(defun cmp-norm-tp (tp)
  (multiple-value-bind 
   (r f) 
   (gethash tp *norm-tp-hash*)
   (cond (f r)
	 ((setf (gethash tp *norm-tp-hash*) (let ((tp (resolve-type tp))) (unless (cadr tp) (car tp))))))))

(defun type-and (t1 t2)
  (let ((x (cons t1 t2)))
    (multiple-value-bind 
     (r f) 
     (gethash x *and-tp-hash*)
     (cond (f r)
	   ((setf (gethash x *and-tp-hash*) (type-and-int t1 t2)))))))

(defun type-or1 (t1 t2)
  (let ((x (cons t1 t2)))
    (multiple-value-bind 
     (r f) 
     (gethash x *or-tp-hash*)
     (cond (f r)
	   ((setf (gethash x *or-tp-hash*) (type-or1-int t1 t2)))))))

(defmacro type-filter (type) `(nil-to-t (cmp-norm-tp ,type)))

(defun literalp (form)
  (or (constantp form) (and (consp form) (eq (car form) 'load-time-value))))

;;FIXME -- This function needs expansion on centralization.  CM 20050106
(defun promoted-c-type (type)
  (let ((type (coerce-to-one-value type)))
    (let ((ct (and type (car (member type
;			   '(signed-char signed-short fixnum integer)
;			   '(signed-char unsigned-char signed-short unsigned-short fixnum integer)
			   '(fixnum integer short-float long-float)
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


;; old propagators

;(defun random-propagator (&rest r)
;  (let ((tp (cmp-norm-tp (cadr r))))
;    (if (integer-typep tp)
;	`(integer 0 ,(if (integerp (caddr tp)) (caddr tp) '*))
;      tp)))

;(defun ash-propagator (f t1 t2)
;  (and
;   (type>= 'fixnum t1)
;   (type>= '(integer #.most-negative-fixnum #.(integer-length most-positive-fixnum)) t2)
;   (super-range f t1 t2)))

;(defun floor-propagator (f t1 &optional (t2 '(integer 1 1)))
;  (let ((t1 (coerce-to-integer-type t1))
;	(t2 (coerce-to-integer-type t2)))
;    (and t2
;	 (let ((i21 (integerp (cadr t2)))
;	       (i22 (integerp (caddr t2))))
;	   (and i21 i22 (> (* (cadr t2) (caddr t2)) 0)
;		(let ((sr (super-range f t1 t2)))
;		  (and sr
;		       (list 'values sr
;			     (let ((outer (if (< (cadr t2) 0) (cadr t2) (caddr t2))))
;			       (let ((a (cadr (multiple-value-list
;					      (funcall (symbol-function f) (- (1- outer)) outer))))
;				     (b (cadr (multiple-value-list
;					       (funcall (symbol-function f) (- (1+ outer)) outer))))
;				     (c (cadr (multiple-value-list
;					       (funcall (symbol-function f) (1+ outer) outer))))
;				     (d (cadr (multiple-value-list
;					       (funcall (symbol-function f) (1- outer) outer)))))
;				 (let ((p (min a b c d)))
;				   (if (< p 0)
;				       (list (car t2) p 0)
;				     (list (car t2) 0 (max a b c d))))))))))))))

;(defmacro mfc2 (&rest r)
;  `(cadr (multiple-value-list (mfc ,@r))))

;(defun floor-propagator1 (f t1 &optional (t2 '(integer 1 1)))
;  (let ((sr (super-range1 f t1 t2)))
;    (when sr
;      `(values ,sr
;	       ,(let* ((outer (if (type>= '(real * (0)) t2)
;				(if (consp (cadr t2)) (caadr t2) (cadr t2))
;			      (if (consp (caddr t2)) (caaddr t2) (caddr t2))))
;		      (a (mfc2 f 1 outer))
;		      (b (mfc2 f -1 outer))
;		      (c (mfc2 f (1+ outer) outer))
;		      (d (mfc2 f (1- outer) outer))
;		      (p (min a b c d)))
;		 (if (< p 0)
;		     `(,(car t2) ,p 0)
;		   `(,(car t2) 0 ,(max a b c d))))))))
		 
;; (defun super-range (f &optional (t1 nil t1p) (t2 nil t2p))
;;   (if t1p
;;       (let ((t1 (coerce-to-integer-type t1)))
;; 	(and t1
;; 	     (let ((i11 (integerp (cadr t1)))
;; 		   (i12 (integerp (caddr t1))))
;; 	       (if (and i11 i12)
;; 		   (if t2p
;; 		       (let ((t2 (coerce-to-integer-type t2)))
;; 			 (and t2 (eq (car t1) (car t2))
;; 			      (let ((i21 (integerp (cadr t2)))
;; 				    (i22 (integerp (caddr t2))))
;; 				(if (and i21 i22)
;; 				    (let ((a (funcall f (cadr t1) (cadr t2)))
;; 					  (b (funcall f (cadr t1) (caddr t2)))
;; 					  (c (funcall f (caddr t1) (cadr t2)))
;; 					  (d (funcall f (caddr t1) (caddr t2))))
;; 				      (list (car t1) (min a b c d) (max a b c d)))
;; 				  (list (car t1) '* '*)))))
;; 		     (let ((a (funcall f (cadr t1)))
;; 			   (b (funcall f (caddr t1))))
;; 		       (list (car t1) (min a b) (max a b))))
;; 		 (list (car t1) '* '*)))))
;;     (let ((a (funcall f)))
;;       (list 'integer a a))))

;; (defmacro pbound (a)
;;   (let ((s (gensym)))
;;     `(let ((,s ,a)) (cond ((consp ,s) (car ,s)) ((eq ,s '+*) 1) ((eq ,s '-*) -1) ((eq ,s '+e) 0) ((eq ,s '-e) 0) (,s)))))
;; (defmacro qbound (a)
;;   (let ((s (gensym)))
;;     `(let ((,s ,a)) (cond ((consp ,s) (car ,s)) ((eq ,s '+*) 1) ((eq ,s '-*) -1) ((eq ,s '+e) 1) ((eq ,s '-e) -1) (,s)))))

;; (defmacro mfc (f &rest r)
;;   (let ((v (gensym)) (i (gensym)) (e (gensym)) (q (gensym)))
;;     `(let ((,i (or ,@(mapcan (lambda (x) `((eq '+* ,x) (eq '-* ,x))) r)))
;; 	   (,e (or ,@(mapcan (lambda (x) `((eq '+e ,x) (eq '-e ,x))) r)))
;; 	   (,v ,(cons 'funcall (cons f (mapcar (lambda (x) `(pbound ,x)) r))))
;; 	   (,q ,(cons 'funcall (cons f (mapcar (lambda (x) `(qbound ,x)) r)))))
;; 	 (cond (,i (cond ((< ,v 0) '-*) ((> ,v 0) '+*) ((< ,q 0) '-*) ('+*)))
;; 	       ((and ,e (= ,v 0)) (cond ((< ,q 0) '-e) ((> ,q 0) '+e) (0)))
;; 	       ((and ,@(mapcar (lambda (x) `(or (eq ,x '+e) (eq ,x '-e) (consp ,x))) r)) (list ,v))
;; 	       (,v)))))

;; (defun integer-typep (type)
;;   (and (consp type)
;;        (member (car type) '(integer signed-byte unsigned-byte))
;;        (let ((l (length type)))
;; 	 (and (<= 1 l 3)
;; 	      (or (< l 2) (integerp (cadr type)) (eq (cadr type) '*))
;; 	      (or (< l 3) (integerp (caddr type)) (eq (caddr type) '*))))))

;; (defun coerce-to-integer-type (t1)
;;   (if (integer-typep t1) t1
;;     (let ((t1 (cmp-norm-tp t1)))
;;       (if (integer-typep t1) t1))))

;; (defvar *two-stars* '(* *))

;; (defun integer-norm-form (form &optional (st *two-stars* stp))
;;   (cond ((and (not stp) (atom form)) (integer-norm-form (list form)))
;; 	((and form (or (not st) (atom form))) (error "Bad integer type"))
;; 	(form (cons (car form) (integer-norm-form (cdr form) (if stp (cdr st) st))))
;; 	(st)))

;; (defun integer-type-and (type1 type2)
;;   (let ((ct1 (integer-norm-form (coerce-to-integer-type type1)))
;; 	(ct2 (integer-norm-form (coerce-to-integer-type type2))))
;;     (and ct1 ct2
;; 	 (eq (car ct1) (car ct2))
;; 	 (let ((b1 (cadr ct1))
;; 	       (e1 (caddr ct1))
;; 	       (b2 (cadr ct2))
;; 	       (e2 (caddr ct2)))
;; 	   (let ((i11 (integerp b1))
;; 		 (i12 (integerp e1))
;; 		 (i21 (integerp b2))
;; 		 (i22 (integerp e2)))
;; 	     (let ((br (if i11 (if i21 (max b1 b2) b1) (if i21 b2 '*)))
;; 		   (er (if i12 (if i22 (min e1 e2) e1) (if i22 e2 '*))))
;; 	       (let ((t12 (and (eql br b1) (eql er e1) type1))
;; 		     (t21 (and (eql br b2) (eql er e2) type2)))
;; 		     (or (and t12 t21)
;; 			 t12 t21
;; 			 (and (or (eq br '*) (eq er '*) (<= br er))
;; 			      (list (car ct1) br er))))))))))

(defconstant +real-contagion-list+ '(integer short-float long-float))

(defmacro sfl (&rest l)
  `'(,@(append l)))
;  `'(,@(append l (mapcar 'symbol-function l))))

(defmacro bound (a)
  (let ((s (gensym)))
    `(let ((,s ,a)) (if (consp ,s) (car ,s) ,s))))

(defmacro boundptr (a)
  (let ((s (gensym)))
    `(let ((,s ,a)) (if (consp (car ,s)) (car ,s) ,s))))


(defun maybe-coerce-val (place base)
  (unless (typep (car place) base)
    (setf (car place) (coerce (car place) base))))

(defun ensure-atomic-real-type (type)
  (when (and (consp type) 
	     (member (car type) +real-contagion-list+)
	     (not (cdddr type)))
    (when (cdr type)
      (maybe-coerce-val (boundptr (cdr type)) (car type)))
    (when (cddr type)
      (maybe-coerce-val (boundptr (cddr type)) (car type)))
    type))



(defun integer-float-typep (type)
  (and (consp type)
       (member (car type) +real-contagion-list+)
       (let ((l (length type)))
	 (and (<= 1 l 3)
	      (or (< l 2) (eq (cadr type) '*) (typep (bound (cadr type)) '(or integer float)))
	      (or (< l 3) (eq (caddr type) '*) (typep (bound (caddr type)) '(or integer float)))))))

(defun conv-bnd (z tp bnd def)
  (cond ((or (not bnd) (eq bnd '*)) def)
	((and z (realp bnd) (= 0 bnd)) (conv-bnd z tp '(0) def))
	((or (atom bnd) (not (realp (car bnd))) (not (= 0 (car bnd)))) bnd)
	((= def +inf) '-e)
	('+e)))

(defun qbound (s)
  (cond ((consp s) (car s)) 
	((eq s '+e) 1) 
	((eq s '-e) -1) 
	(s)))

(defun pbound (s)
  (cond ((consp s) (car s)) 
	((eq s '+e) 0) 
	((eq s '-e) 0) 
	(s)))

(defun mfc (f &rest r)
  (let* ((e (intersection '(+e -e) r))
	 (z (and (last r) (= 0 (pbound (car (last r)))) (get f 'zero-pole)))
	 (q (apply f (mapcar 'qbound r)))
	 (v (if z (cond ((< 0 q) +inf) ((> 0 q) -inf) (0)) (apply f (mapcar 'pbound r)))))
    (cond 
     ((and e (= v 0)) (cond ((< q 0) '-e) ((> q 0) '+e) (0)))
     ((and r (every (lambda (x) (or (consp x) (member x '(+e -e)))) r)) (list v))
     (v))))


(defun m< (x y)
  (let ((x (bound x))
	(y (bound y)))
    (cond ((eql x y) nil)
	  ((eq x '-e) (or (eql y 0) (m< 0 y)))
	  ((eq x '+e) (m< 0 y))
	  ((eq y '+e) (or (eql x 0) (m< x 0)))
	  ((eq y '-e) (m< x 0))
	  ((< x y)))))

(defun isnan (x)
  (and (floatp x)
       (not (= +inf x))
       (not (= -inf x))
       (not (isfinite x))))

(defun mmin (x &optional (y +inf))
  (cond ((atom x) y)
	((isnan (bound (car x))) (mmin (cdr x) y))
	((m< (car x) y) (mmin (cdr x) (car x)))
	((mmin (cdr x) y))))

(defun mmax (x &optional (y -inf))
  (cond ((atom x) y)
	((isnan (bound (car x))) (mmax (cdr x) y))
	((m< (car x) y) (mmax (cdr x) y))
	((mmax (cdr x) (car x)))))


(defun unconv-bnd (x)
  (cond ((member x '(-e +e)) '(0))
	((or (= +inf (bound x)) (= -inf (bound x))) '*)
	(x)))

(defun mk-tp (&rest tp)
  (let ((v (car (member (car tp) +real-contagion-list+ :test 'typep))))
    (when v
      (list v (unconv-bnd (cadr tp)) (unconv-bnd (caddr tp))))))

(defun super-range (f &optional (t1 nil t1p) (t2 nil t2p))
  (when (and (or (not t1p) (integer-float-typep t1) (integer-float-typep (setq t1 (cmp-norm-tp t1))))
	     (or (not t2p) (integer-float-typep t2) (integer-float-typep (setq t2 (cmp-norm-tp t2)))))
    (let* ((z (get f 'zero-pole))
	   (n1 (conv-bnd (unless t2p z) (car t1) (cadr t1)  -inf))
	   (x1 (conv-bnd (unless t2p z) (car t1) (caddr t1) +inf))
	   (n2 (conv-bnd z (car t2) (cadr t2)  -inf))
	   (x2 (conv-bnd z (car t2) (caddr t2) +inf))
	   (a (cond (t2p (mfc f n1 n2)) (t1p (mfc f n1)) ((mfc f))))
	   (b (if t2p (mfc f n1 x2) a))
	   (c (cond (t2p (mfc f x1 n2)) (t1p (mfc f x1)) (a)))
	   (d (if t2p (mfc f x1 x2) c))
	   (e (cond (t2p (mfc f (coerce 2 (car t1)) (coerce 3 (car t2))))
		    (t1p (mfc f (coerce 2 (car t1))))
		    (a)))
	   (v (list a b c d))
	   (v (if (and z 
		       (let ((tt (cond (t2p t2) (t1p t1))))
			 (and 
			  (type-and tt '(real 0 0)) 
			  (not (type>= '(real 0) tt)) 
			  (not (type>= '(real * 0) tt)))))
		  (cons +inf (cons -inf v)) v)))
      (unless (some (lambda (x) (complexp (bound x))) v)
	(mk-tp e (mmin v) (mmax v))))))

(dolist (l '(/ floor ceiling truncate round ffloor fceiling ftruncate fround))
  (si::putprop l t 'zero-pole))
(dolist (l '(+ - * / exp float sqrt atan min max))
  (si::putprop l 'super-range 'type-propagator))

(defun log-wrap (x y)
  (if (= 0 x) (symbol-value '-inf) (log x y)))

;; (defun max-propagator (f t1 &optional (t2 nil t2p))
;;   (cond ((not t2p) (super-range f t1))
;; 	((member-if (lambda (x) (and (type>= x t1) (type>= x t2))) +real-contagion-list+) (super-range f t1 t2)))) ;;FIXME super-range needs to handle or types, right now punt to rfa in gcl_cmpopt.
;; (si::putprop 'max 'max-propagator 'type-propagator)
;; (si::putprop 'min 'max-propagator 'type-propagator)

(defun log-propagator (f t1 &optional (t2 `(short-float ,(exp 1.0s0) ,(exp 1.0s0))))
  (declare (ignore f))
  (super-range 'log-wrap t1 t2))
(si::putprop 'log 'log-propagator 'type-propagator)

(defun last-cons-type (tp &optional l)
  (cond ((and l (atom tp)) tp)
	((and (consp tp) (eq (car tp) 'cons) 
	      (cddr tp) (not (cdddr tp))) (last-cons-type (caddr tp) t))))

(defun cdr-propagator (f t1)
  (declare (ignore f))
  (cond ((type>= 'null t1) t1) ;FIXME clb ccb do-setq-tp
	((and (consp t1) (eq (car t1) 'cons)) (caddr t1))
	((type>= 'proper-list t1) 'proper-list)))
(si::putprop 'cdr 'cdr-propagator 'type-propagator)

(defun cons-propagator (f t1 t2)
  (declare (ignore f))
  (cond ((cons-tp-limit t2 0 0) (cmp-norm-tp `(cons ,t1 ,t2)))
	((type>= 'proper-list t2) (cmp-norm-tp 'proper-list))
	((cmp-norm-tp 'cons))))
(si::putprop 'cons 'cons-propagator 'type-propagator)

(defun car-propagator (f t1)
  (declare (ignore f))
  (when (type>= 'null t1) 'null))
(si::putprop 'car 'car-propagator 'type-propagator)

(defun mod-propagator (f t1 t2)
  (declare (ignore f t1))
  (let ((sr (super-range '* '(integer 0 1) t2)))
    (when sr
      (do ((x (cdr sr) (cdr x))) ((not x) sr)
	  (unless (or (eq (car x) '*) (consp (car x)) (= (car x) 0))
	    (setf (car x) (list (car x))))))))
(si::putprop 'mod 'mod-propagator 'type-propagator)

(defun random-propagator (f t1 &optional t2)
  (declare (ignore t2))
  (mod-propagator f t1 t1))
(si::putprop 'random 'random-propagator 'type-propagator)

(defun gcd-propagator (f &optional (t1 nil t1p) (t2 nil t2p))
  (cond (t2p (super-range '* '(integer 0 1) (super-range 'min t1 t2)))
	(t1p (mod-propagator f t1 t1))
	((super-range f))))
(si::putprop 'gcd 'gcd-propagator 'type-propagator)
(defun lcm-propagator (f &optional (t1 nil t1p) (t2 nil t2p))
  (cond (t2p (super-range '* '(integer 1) (super-range 'max t1 t2)))
	(t1p (mod-propagator f t1 t1))
	((super-range f))))
(si::putprop 'lcm 'lcm-propagator 'type-propagator)

(defun rem-propagator (f t1 t2)
  (let ((t2 (mod-propagator f t1 t2)))
    (when t2
      (cond ((type>= '(real 0) t1)   (type-or1 (type-and '(real 0)   t2) (super-range '- (type-and '(real * 0) t2))))
	    ((type>= '(real * 0) t1) (type-or1 (type-and '(real * 0) t2) (super-range '- (type-and '(real 0)   t2))))
	    ((type-or1 t2 (super-range '- t2)))))))
(si::putprop 'rem 'rem-propagator 'type-propagator)

(defun floor-propagator (f t1 &optional (t2 '(integer 1 1)))
  (let ((sr (super-range f t1 t2)))
    (when sr
      `(values ,sr
	       ,(cond ((member f (sfl floor ffloor))       (mod-propagator f t1 t2))
		      ((member f (sfl ceiling fceiling))   (super-range '- (mod-propagator f t1 t2)))
		      ((member f (sfl truncate ftruncate round fround)) (rem-propagator f t1 t2)))))))
					;multiplying by 0.5 for round would convert integer rages to float
(dolist (l '(floor ceiling truncate round ffloor fceiling ftruncate fround))
  (si::putprop l 'floor-propagator 'type-propagator))

(defun ash-propagator (f t1 t2)
  (and
   (type>= 'fixnum t1)
   (type>= '(integer #.most-negative-fixnum #.(integer-length most-positive-fixnum)) t2)
   (super-range f t1 t2)))
(si::putprop 'ash 'ash-propagator 'type-propagator)

(defun expt-propagator (f t1 t2)
  (cond ((or (not (type>= '(real #.(float most-negative-fixnum) #.(float most-positive-fixnum)) t1))
	     (not (type>= '(real #.(float most-negative-fixnum) #.(float (integer-length most-positive-fixnum))) t2)))
	 (let ((v1 (member-if (lambda (x) (type>= t1 x) (type>= x t1)) +real-contagion-list+))
	       (v2 (member-if (lambda (x) (type>= t2 x) (type>= x t2)) +real-contagion-list+)))
	   (or (car (member (car v1) v2)) (car (member (car v2) v1)))))
	((type-or1 (super-range f (type-and '(real (0)) t1) t2) (super-range f (type-and '(real * (0)) t1) t2)))))
(si::putprop 'expt 'expt-propagator 'type-propagator)

(defun integer-length-propagator (f t1)
  (when (type>= 'fixnum t1) (type-or1 (super-range f (type-and '(real 0) t1)) (super-range f (type-and '(real * 0) t1)))))
(si::putprop 'integer-length 'integer-length-propagator 'type-propagator)

(defun abs-propagator (f t1)
  (declare (ignore f))
  (type-and (type-or1 t1 (super-range '- t1)) '(real 0)))
(si::putprop 'abs 'abs-propagator 'type-propagator)


;;FIXME -- centralize subtypep, normalzie-type, type>=, type-and.
;;Consider traversing a static tree.  CM 20050106
(defun type-and-int (type1 type2)

  (cond ((member type1 '(t object *)) type2)
	((member type2 '(t object *)) type1)
	((equal type1 type2) type2)
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
	((subtypep1 type2 type1) type2)
	((subtypep1 type1 type2) type1)
	((cmp-norm-tp `(and ,type1 ,type2)))))
		 
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
	((subtypep1 type1 type2) type2)
	((subtypep1 type2 type1) type1)
	((type-filter `(or ,type1 ,type2)))))

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

(defconstant +c1nil+ (list 'LOCATION (make-info :type (object-type nil)) nil))
(defmacro c1nil () `+c1nil+)
(defconstant +c1t+ (list 'LOCATION (make-info :type (object-type t)) t))
(defmacro c1t () `+c1t+)


(defun default-init (type)
  (let ((type (promoted-c-type type)))
    (when (member type +c-local-var-types+)
      (cmpwarn "The default value of NIL is not ~S." type)))
  (c1nil))
