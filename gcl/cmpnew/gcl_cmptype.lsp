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


(import 'si::proclaimed-arg-types 'compiler)
(import 'si::proclaimed-return-type 'compiler)
(import 'si::proclaimed-function 'compiler)
(import 'si::proper-list 'compiler)
(import 'si::proper-listp 'compiler)
(import 'si::subtypep1 'compiler)
(import 'si::resolve-type 'compiler)
(import 'si::+inf 'compiler)
(import 'si::-inf 'compiler)
(import 'si::nan 'compiler)
(import 'si::isfinite 'compiler)
(import 'si::+type-alist+ 'compiler)
(import 'si::sequencep 'compiler)
(import 'si::ratiop 'compiler)
(import 'si::short-float-p 'compiler)
(import 'si::long-float-p 'compiler)
(import 'si::interpreted-function 'compiler)
(import 'si::eql-is-eq 'compiler)
(import 'si::equal-is-eq 'compiler)
(import 'si::equalp-is-eq 'compiler)
(import 'si::eql-is-eq-tp 'compiler)
(import 'si::equal-is-eq-tp 'compiler)
(import 'si::equalp-is-eq-tp 'compiler)
(import 'si::is-eq-test-item-list 'compiler)
(import 'si::cmp-vec-length 'compiler)
(import 'si::proclaim-from-argd 'compiler)
(import 'si::+array-types+ 'compiler)
(import 'si::+aet-type-object+ 'compiler)
(import 'si::*tmp-dir* 'compiler)
(import 'si::returns-exactly 'compiler)
(import 'si::immfix 'compiler)
(import 'si::proper-sequence 'compiler)
(import 'si::proper-sequencep 'compiler)
(import 'si::proper-cons 'compiler)
(import 'si::proper-consp 'compiler)
(import 'si::*split-files* 'compiler)
(import 'si::funcallable-symbol-function 'compiler)
(import 'si::gens 'compiler)
(import 'si::fcomplex 'compiler)
(import 'si::dcomplex 'compiler)
(import 'si::c-type 'compiler)
(import 'si::cnum-type 'compiler)
(import 'si::complex-real 'compiler)
(import 'si::complex-imag 'compiler)
(import 'si::ratio-numerator 'compiler)
(import 'si::ratio-denominator 'compiler)
(import 'si::mdlsym 'compiler)
(import 'si::mdl 'compiler)
(import 'si::lib-name 'compiler)
(import 'si::isinf 'compiler)
(import 'si::isnan 'compiler)
(import 'si::*sig-discovery* 'compiler)
(import 'si::*compile-verbose* 'compiler)


(let ((p (find-package "DEFPACKAGE")))
  (when p
    (import (find-symbol "DEFPACKAGE" p) 'compiler)))


(defvar *uniq-tp-hash* (make-hash-table :test 'equal))
(defvar *norm-tp-hash* (make-hash-table :test 'eq))

(defmacro cmpt (tp)  `(and (consp ,tp) (member (car ,tp) '(returns-exactly values))))
(defmacro cmpdt (tp) `(and (consp ,tp) (member (car ,tp) '(and or not cons complex
							       returns-exactly values))))
(defmacro cmpao (tp) `(and (consp ,tp) (member (car ,tp) '(and or))))
(defmacro cmpmt (tp) `(and (consp ,tp) (member (car ,tp) '(not cons complex returns-exactly values))))

(defun sort-tps (tps)
  (sort tps (lambda (x y) (> (si::address x) (si::address y)))))

(defun build-tp (tp)
  (cond ((cmpdt tp) (cons (car tp) (mapcar 'uniq-tp (cdr tp))))
	(tp)))

(defun uniq-tp (tp)
  (cond ((gethash tp *uniq-tp-hash*))
	((let ((tp (build-tp tp)))
	   (setf (gethash tp *uniq-tp-hash*) tp)))))

(defun readable-tp (tp)
  (uniq-tp
   (cond ((cmpao tp) (cons (car tp) (sort-tps (mapcar 'readable-tp (cdr tp)))))
	 ((cmpmt tp) (cons (car tp) (mapcar 'readable-tp (cdr tp))))
	 ((si::classp tp) (or (si::class-name tp) t))
	 ((si::structurep tp) (or (si::s-data-name tp) t))
	 ((and (consp tp) (eq (car tp) 'member)) `(,(car tp) ,@(sort-tps (cdr tp))))
	 (tp))))

(defun dnt (tp)
  (uniq-tp
   (cond ((eq '* tp) tp)
	 ((cmpt tp)
	  (cond ((not (cdr tp)) '(returns-exactly))
		((and (eq (car tp) 'returns-exactly) (not (cddr tp))) (cmp-norm-tp (cadr tp)))
		(`(,(car tp) ,@(mapcar 'cmp-norm-tp (cdr tp))))))
	 ((let ((tp (resolve-type tp))) (if (cadr tp) '* (readable-tp (car tp))))))))
  
(defun cmp-norm-tp (tp);(when (and (symbolp tp) (string= "STD-INSTANCE" (symbol-name tp))) (break))
  (multiple-value-bind 
   (r f) (gethash tp *norm-tp-hash*)
   (cond (f r)
	 ((let ((tp (uniq-tp tp)))
	    (multiple-value-bind 
	     (r f) (gethash tp *norm-tp-hash*)
	     (cond (f r)
		   ((let ((nt (dnt tp)))
		      (cond ((and (eq '* nt) (not (eq tp '*))) nt);don't hash unknown types
			    ((and (consp tp) (or (eq (car tp) 'si::type-max) (eq (car tp) 'si::type-min))) nt)
			    ((setf (gethash tp *norm-tp-hash*) nt (gethash nt *norm-tp-hash*) nt))))))))))))

(defun sharp-t-reader (stream subchar arg)
  (declare (ignore subchar arg))
  `(load-time-value (cmp-norm-tp ',(read stream))))
(defun sharp-l-reader (stream subchar arg)
  (declare (ignore subchar arg))
  `(load-time-value (mapcar 'cmp-norm-tp ',(read stream))))
(defun sharp-y-reader (stream subchar arg)
  (declare (ignore subchar arg))
  `(load-time-value (mapcar (lambda (x) (cons (cmp-norm-tp (car x)) (cdr x))) ',(read stream))))

(set-dispatch-macro-character #\# #\t 'sharp-t-reader)
(set-dispatch-macro-character #\# #\l 'sharp-l-reader)
(set-dispatch-macro-character #\# #\y 'sharp-y-reader)

(defconstant +c-type-string-alist+ `((,#tt . "object")
				      (,#tbit . "char")
				      (,#tcharacter . "char")
				      (,#tsigned-char . "char")
				      (,#tnon-negative-char . "char")
				      (,#tunsigned-char . "unsigned char")
				      (,#tsigned-short . "short")
				      (,#tnon-negative-short . "short")
				      (,#tunsigned-short . "unsigned short")
				      (,#tfixnum . "fixnum")
				      (,#tnon-negative-fixnum . "fixnum")
				      (,#tsigned-int . "int")
				      (,#tnon-negative-int . "int")
				      (,#tunsigned-int . "unsigned int")
				      (,#tlong-float . "double")
				      (,#tshort-float . "float")
				      (,#tfcomplex . "fcomplex")
				      (,#tdcomplex . "dcomplex")))


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
  (let ((type (cmp-norm-tp (type-of thing))))
    (cmp-norm-tp
     (cond ((eq thing t) '(member t))
	  ((type>= #tinteger type) `(integer ,thing ,thing))
	  ((type>= #tshort-float type) `(short-float ,thing ,thing))
	  ((type>= #tlong-float type) `(long-float ,thing ,thing))
	  ((type>= #tcons type) (cond ((or lim (cons-tp-limit thing 0 0)) 
				  `(cons ,(object-type (car thing) t) ,(if (cdr thing) (object-type (cdr thing) t) 'null)))
				 ((si::improper-consp thing) `(list))
				 (`(si::proper-list))))
;	  ((and (type>= #tcomplex type) (type>= #tshort-float (object-type (realpart thing)))) #tfcomplex)
;	  ((and (type>= #tcomplex type) (type>= #tlong-float (object-type (realpart thing)))) #tdcomplex)
	  ((type>= #t(or complex symbol character function) type) `(eql ,thing));FIXME member array types
	  (type)))))

(deftype cnum nil `(or fixnum float fcomplex dcomplex))
(deftype rcnum nil `(or fixnum float))


(defconstant +cmp-type-alist+ (mapcar (lambda (x) (cons (cmp-norm-tp (car x)) (cdr x))) +type-alist+))
(defconstant +cmp-array-types+ (mapcar 'cmp-norm-tp +array-types+))

;; (defvar *unt* nil)

;; (defun cmpntww (tp)
;;   (let ((nt (cmp-norm-tp tp)))
;;     (unless (eq nt tp)(unless (member tp *unt* :test 'equal) (break "~s~%" tp))
;;       (pushnew tp *unt* :test 'equal))
;;     nt))

(defmacro cmpntww (tp) tp)

(defmacro uniq-tp-from-stack (op t1 t2)
  (let ((s (gensym)))
    `(let ((,s (list ,op ,t1 ,t2)))
       (declare (:dynamic-extent ,s))
       (uniq-tp ,s))))

(defvar *and-tp-hash* (make-hash-table :test 'eq))
(defvar *or-tp-hash*  (make-hash-table :test 'eq))
(defconstant +useful-type-list+ '(nil 
				  null boolean keyword symbol 
				  proper-cons cons proper-list list 
				  simple-vector string (vector fixnum) vector
				  proper-sequence sequence
				  (integer 0 0) (integer 1 1) 
;				  bit non-negative-char unsigned-char signed-char char
;				  non-negative-short unsigned-short signed-short short
				  seqind non-negative-fixnum 
				  (integer 0) immfix fixnum integer
				  (short-float 0.0 0.0) (short-float * (0.0)) (short-float (0.0)) 
				  (short-float * 0.0) (short-float 0.0) short-float
				  (long-float 0.0 0.0) (long-float * (0.0)) (long-float (0.0)) 
				  (long-float * 0.0) (long-float 0.0) long-float
				  (float 0.0 0.0) (float * (0.0)) (float (0.0)) 
				  (float * 0.0) (float 0.0) float
				  (real 0.0 0.0) (real * (0.0)) (real (0.0)) (real * 0.0) (real 0.0) real
				  fcomplex dcomplex
				  number
				  character function
				  t))
(defconstant +useful-types+ (mapcar (lambda (x) (load-time-value (cmp-norm-tp x))) +useful-type-list+))
(mapc (lambda (x) 
	(setf (gethash x *and-tp-hash*) (make-hash-table :test 'eq :size 256))
	(setf (gethash x  *or-tp-hash*) (make-hash-table :test 'eq :size 256))) +useful-types+)

(defun type-and (t1 t2 &aux h1 h2 r f)
  (cond ((eq t1 t2) t2);accelerator
	((when (setq h1 (gethash t1 *and-tp-hash*)) (multiple-value-setq (r f) (gethash t2 h1)) f) r)
	((when (setq h2 (gethash t2 *and-tp-hash*)) (multiple-value-setq (r f) (gethash t1 h2)) f) r)
	((let ((q (let ((x (uniq-tp-from-stack `and t1 t2)))
		    (multiple-value-setq (r f) (gethash x *norm-tp-hash*))
		    (cond (f r)
			  ((setf (gethash x *norm-tp-hash*) (type-and-int t1 t2)))))))
	   (when h1 (setf (gethash t2 h1) q))
	   (when h2 (setf (gethash t1 h2) q))
	   q))))

(defun type-or1 (t1 t2 &aux h1 h2 r f)
  (cond ((eq t1 t2) t2);accelerator
	((when (setq h1 (gethash t1 *or-tp-hash*)) (multiple-value-setq (r f) (gethash t2 h1)) f) r)
	((when (setq h2 (gethash t2 *or-tp-hash*)) (multiple-value-setq (r f) (gethash t1 h2)) f) r)
	((let ((q (let ((x (uniq-tp-from-stack `or t1 t2)))
		    (multiple-value-setq (r f) (gethash x *norm-tp-hash*))
		    (cond (f r)
			  ((setf (gethash x *norm-tp-hash*) (type-or1-int t1 t2)))))))
	   (when h1 (setf (gethash t2 h1) q))
	   (when h2 (setf (gethash t1 h2) q))
	   q))))

(defmacro type-filter (type) `(cmp-norm-tp ,type))

(defun literalp (form)
  (or (constantp form) (and (consp form) (eq (car form) 'load-time-value))))

(defconstant +real-contagion-list+ '(integer ratio short-float long-float))

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
	      (or (< l 2) (eq (cadr type) '*) (typep (bound (cadr type)) 'real))
	      (or (< l 3) (eq (caddr type) '*) (typep (bound (caddr type)) 'real))))))

(defun conv-bnd (z tp bnd def)
  (cond ((or (not bnd) (eq bnd '*)) (if (eq tp 'short-float) (float def 0.0s0) def))
	((and z (realp bnd) (= 0 bnd)) (conv-bnd z tp '(0) def))
	((or (atom bnd) (not (realp (car bnd))) (not (= 0 (car bnd)))) bnd)
	((= def +inf) '-e)
	('+e)))

(defun qbound (tp s)
  (cond ((consp s) (car s)) 
	((eq s '+e) (contagion-irep 1 tp)) 
	((eq s '-e) (contagion-irep -1 tp)) 
	(s)))

(defun pbound (tp s)
  (cond ((consp s) (car s)) 
	((eq s '+e) (contagion-irep 0 tp)) 
	((eq s '-e) (- (contagion-irep 0 tp)))
	(s)))

(defun apply-fn (f bndf tp r)
  (let* ((r (mapcar (lambda (x) (funcall bndf tp x)) r))
	 (x (let ((si::*ignore-floating-point-errors* t)) (apply f r))))
    (if (numberp x) x nan)))

(defun mfc (f tp &rest r)
  (let* ((e (intersection '(+e -e) r))
	 (z (and (last r) (= 0 (pbound tp (car (last r)))) (and (symbolp f) (get f 'zero-pole))))
	 (q (apply-fn f 'qbound tp r))
	 (v (if z (cond ((< 0 q) +inf) ((> 0 q) -inf) (0)) (apply-fn f 'pbound tp r))))
    (cond 
     ((and e (= v 0)) (cond ((< q 0) '-e) ((> q 0) '+e) (0)))
     ((and r (not (member-if-not (lambda (x) (or (consp x) (member x '(+e -e)))) r))) (list v))
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

(defun promote-ratio (x)
  (if (eq x 'ratio) 'rational x))

(defconstant +small-rat+ (rational least-positive-long-float))

(defun contagion-irep (x tp)
  (if (eq tp 'ratio) (if (or (= 0 x) (= 1 x)) x (+ x +small-rat+)) (coerce x tp)))

(defun mk-tp (&rest tp)
  (let ((v (car (member (car tp) +real-contagion-list+ :test 'typep))))
    (when v
      (list (promote-ratio v) (unconv-bnd (cadr tp)) (unconv-bnd (caddr tp))))))

(defun super-range (f &optional (t1 nil t1p) (t2 nil t2p))

  (when (and t2p (consp t2) (eq (car t2) 'or))
    (return-from super-range (reduce 'type-or1 (mapcar (lambda (x) (super-range f t1 x)) (cdr t2)) :initial-value nil)))

  (when (and t1p (consp t1) (eq (car t1) 'or))
    (return-from super-range (reduce 'type-or1 
				     (mapcar (lambda (x) (if t2p (super-range f x t2) (super-range f x))) (cdr t1))
				     :initial-value nil)))

  (let ((c1 (and t1p (consp t1) (eq (car t1) 'complex)))
	(c2 (and t2p (consp t2) (eq (car t2) 'complex))))
    (when (or c1 c2)
      (let* ((t1 (if c1 (cadr t1) t1))
	     (t2 (if c2 (cadr t2) t2)))
	(when (and (or (not t1p) (integer-float-typep t1) (integer-float-typep (setq t1 (cmp-norm-tp t1))))
		   (or (not t2p) (integer-float-typep t2) (integer-float-typep (setq t2 (cmp-norm-tp t2)))))
	  (let* ((n1 (when t1p (complex (contagion-irep 2 (car t1)) (contagion-irep 3 (car t1)))))
		 (n2 (when t2p (complex (contagion-irep 4 (car t2)) (contagion-irep 5 (car t2)))))
		 (a (cond (t2p (mfc f (car t2) n1 n2)) (t1p (mfc f (car t1) n1)) ((mfc f nil)))))
	    (return-from super-range 
			 (car (member (object-type a) 
				      `(,#t(complex integer) ,#t(complex rational) ,#t(complex short-float)
					   ,#t(complex long-float) ,#tcomplex) :test 'type<=))))))))

  (when (and (or (not t1p) (integer-float-typep t1) (integer-float-typep (setq t1 (cmp-norm-tp t1))))
	     (or (not t2p) (integer-float-typep t2) (integer-float-typep (setq t2 (cmp-norm-tp t2)))))
    (let* ((z (and (symbolp f) (get f 'zero-pole)))
	   (n1 (conv-bnd (unless t2p z) (car t1) (cadr t1)  -inf))
	   (x1 (conv-bnd (unless t2p z) (car t1) (caddr t1) +inf))
	   (n2 (conv-bnd z (car t2) (cadr t2)  -inf))
	   (x2 (conv-bnd z (car t2) (caddr t2) +inf))
	   (a (cond (t2p (mfc f (car t2) n1 n2)) (t1p (mfc f (car t1) n1)) ((mfc f nil))))
	   (b (if t2p (mfc f (car t2) n1 x2) a))
	   (c (cond (t2p (mfc f (car t2) x1 n2)) (t1p (mfc f (car t1) x1)) (a)))
	   (d (if t2p (mfc f (car t2) x1 x2) c))
	   (e (cond (t2p (mfc f (car t2) (contagion-irep 2 (car t1)) (contagion-irep 3 (car t2))))
		    (t1p (mfc f (car t1) (contagion-irep 2 (car t1))))
		    (a)))
	   (v (list a b c d))
	   (v (if (and z 
		       (let ((tt (cond (t2p t2) (t1p t1))))
			 (and 
			  (type-and tt #t(real 0 0)) 
			  (not (type>= #t(real 0) tt)) 
			  (not (type>= #t(real * 0) tt)))))
		  (cons +inf (cons -inf v)) v)))
      (unless (some (lambda (x) (complexp (bound x))) v)
	(cmp-norm-tp (mk-tp e (mmin v) (mmax v)))))))

(dolist (l '(/ floor ceiling truncate round ffloor fceiling ftruncate fround))
  (si::putprop l t 'zero-pole))
(dolist (l '(+ - * exp float atan tanh sinh asinh))
  (si::putprop l 'super-range 'type-propagator))

(defun logand-propagator (f &optional (t1 nil t1p) (t2 nil t2p))
  (cond (t2p (when (and (type>= #tfixnum t2) (type>= #tfixnum t1)) (super-range f t1 t2)))
	(t1p (when (type>= #tfixnum t1)) (super-range f t1))
	((not t1p) (super-range f))))
(dolist (l '(logand logior logandc1 logandc2 logxor lognot))
  (si::putprop l 'logand-propagator 'type-propagator))

(defun min-max-propagator (f &optional (t1 nil t1p) (t2 nil t2p))
  (cond (t2p (super-range f (type-and #treal t1) (type-and #treal t2)))
	(t1p (super-range f (type-and #treal t1)))))
(si::putprop 'max 'min-max-propagator 'type-propagator)
(si::putprop 'min 'min-max-propagator 'type-propagator)

(defun /-propagator (f t1 &optional t2)
  (cond (t2 (super-range f t1 (type-and t2 #t(not (real 0 0)))))
	((super-range f (type-and t1 #t(not (real 0 0)))))))
(si::putprop '/ '/-propagator 'type-propagator)

(defun log-wrap (x y)
  (if (= 0 x) (symbol-value '-inf) (log x y)))

(defun complex-real-imag-type-propagator (f t1)
  (cond ((eq (car t1) 'or) (reduce 'type-or1
				   (mapcar (lambda (x)
					     (complex-real-imag-type-propagator f x)) (cdr t1)) 
				   :initial-value nil))
	((type>= #tcomplex t1) (cadr t1))))
(si::putprop 'si::complex-real 'complex-real-imag-type-propagator 'type-propagator)
(si::putprop 'si::complex-imag 'complex-real-imag-type-propagator 'type-propagator)

(defun complex-propagator (f t1 &optional (t2 t1))
  (declare (ignore f))
  (let ((t1 (type-and #treal t1))
	(t2 (type-and #treal t2)))
    (to-complex-tp (super-range '+ t1 t2))))
(si::putprop 'complex 'complex-propagator 'type-propagator)

(defun c-type-propagator (f t1)
  (cond ((type>= #tlong-float t1)  (object-type #.(c-type 0.0)))
	((type>= #tshort-float t1) (object-type #.(c-type 0.0s0)))
	((type>= #tfixnum t1)      (object-type #.(c-type 0)))
	((type>= #tbignum t1)      (object-type #.(c-type (1+ most-positive-fixnum))))
	((type>= #tratio  t1)      (object-type #.(c-type 1/2)))
	((type>= #tcomplex  t1)    (object-type #.(c-type #c(0 1))))
	((and (consp t1) (eq (car t1) 'not)) 
	 (type-or1 (type-and (c-type-propagator f t) (cmp-norm-tp `(not ,(c-type-propagator f #tnumber))))
		   (c-type-propagator f (type-and #tnumber t1))))
	((and (consp t1) (eq (car t1) 'or)) 
	 (reduce (lambda (y x) (type-or1 (c-type-propagator f x) y)) (cdr t1) :initial-value nil))
	((type>= #tinteger t1)     (type-or1 (c-type-propagator f #tfixnum) (c-type-propagator f #tbignum)))
	((type>= #trational t1)    (type-or1 (c-type-propagator f #tinteger) (c-type-propagator f #tratio)))
	((type>= #tfloat t1)       (type-or1 (c-type-propagator f #tlong-float) (c-type-propagator f #tshort-float)))
	((type>= #treal t1)        (type-or1 (c-type-propagator f #tfloat) (c-type-propagator f #trational)))
	((cmp-norm-tp `(integer 0 ,si::c-type-max)))))
(si::putprop 'c-type 'c-type-propagator 'type-propagator)


(defconstant +e+ 2.7182818284590451)

(defun log-propagator (f t1 &optional (t2 #t(short-float #.(float +e+ 1.0s0) #.(float +e+ 1.0s0))))
  (declare (ignore f))
  (type-or1 (super-range 'log-wrap (type-and t1 #t(not real)) t2)
	    (type-or1 (super-range 'log-wrap (type-and t1 #t(real 0)) t2)
		      (super-range 'log-wrap (type-and t1 #t(real * (0))) t2))))
(si::putprop 'log 'log-propagator 'type-propagator)

(defun last-cons-type (tp &optional l)
  (cond ((and l (atom tp)) tp)
	((and (consp tp) (eq (car tp) 'cons) 
	      (cddr tp) (not (cdddr tp))) (last-cons-type (caddr tp) t))))

(defun cdr-propagator (f t1)
  (let ((t1 (type-and #tlist t1)))
    (cond ((and (consp t1) (eq (car t1) 'or))
	   (reduce 'type-or1 (mapcar (lambda (x) (cdr-propagator f x)) (cdr t1)) :initial-value nil))
	  ((type>= #tnull t1) t1) ;FIXME clb ccb do-setq-tp
	  ((and (consp t1) (eq (car t1) 'cons)) (caddr t1))
	  ((type>= #tproper-list t1) #tproper-list))))
(si::putprop 'si::cons-cdr 'cdr-propagator 'type-propagator)

(defun make-list-propagator (f t1 &rest r)
  (declare (ignore f r))
  (cond ((and (type>= #t(integer 0 5) t1) (atomic-tp t1))
	 (cmp-norm-tp (reduce (lambda (y x) (declare (ignore x)) `(cons t ,y)) (make-list (cadr t1)) :initial-value 'null)))
	(#tproper-list)))
(si::putprop 'make-list 'make-list-propagator 'type-propagator)


(defun nth-cons-tp (n tp)
  (cond ((= n 0) tp)
	((and (consp tp) (eq 'cons (car tp)) (cddr tp) (not (cdddr tp)))
	 (nth-cons-tp (1- n) (caddr tp)))))

(defun nthcdr-propagator (f t1 t2)
  (declare (ignore f))
  (let ((t1 (type-and #tinteger t1))
	(t2 (type-and #tlist t2)))
    (cond ((type>= #tnull t2) t2) ;FIXME clb ccb do-setq-tp
	  ((type>= #t(integer 0 0) t1) t2)
	  ((and (consp t2) (eq (car t2) 'cons) (atomic-tp t1) (typep (cadr t1) 'seqind)) (nth-cons-tp (cadr t1) t2))
	  ((type>= #tproper-list t2) #tproper-list))))
(si::putprop 'nthcdr 'nthcdr-propagator 'type-propagator)

(defun rplacd-propagator (f t1 t2)
  (declare (ignore f t1))
  (dolist (v *vars* #tcons);FIXME variable alias slot
    (when (var-p v) 
      (when (type>= #tproper-cons (var-type v)) 
	(do-setq-tp v nil (if (type>= #tproper-list t2) #tproper-cons #tcons)))))
  (if (type>= #tproper-list t2) #tproper-cons #tcons))
(si::putprop 'rplacd 'rplacd-propagator 'type-propagator)

(defun cons-propagator (f t1 t2)
  (declare (ignore f))
  (cond ((cons-tp-limit t2 0 0) (cmp-norm-tp `(cons ,t1 ,t2)))
	((type>= #tproper-list t2) #tproper-cons)
	(#tcons)))
(si::putprop 'cons 'cons-propagator 'type-propagator)

(defun car-propagator (f t1)
  (declare (ignore f))
  (when (type>= #tnull t1) #tnull))
(si::putprop 'si::cons-car 'car-propagator 'type-propagator)

(defun mod-propagator (f t1 t2)
  (cond ((and (consp t1) (eq (car t1) 'or))
	 (reduce 'type-or1 (mapcar (lambda (x) (mod-propagator f x t2)) (cdr t1)) :initial-value nil))
	((and (consp t2) (eq (car t2) 'or))
	 (reduce 'type-or1 (mapcar (lambda (x) (mod-propagator f t1 x)) (cdr t2)) :initial-value nil))
	((and (type>= #treal t1) (type>= #treal t2))
	 (let ((r (super-range 
		   '* 
		   (cmp-norm-tp `(,(car t1) 0 1))
		   (super-range '* #t(integer 0 1) t2))))
	   (if (numberp (caddr t2));FIXME super-range epsilon support not around 0
	       (type-and r (cmp-norm-tp `(not (,(car t2) ,(caddr t2) ,(caddr t2)))))
	     r)))))
(si::putprop 'mod 'mod-propagator 'type-propagator)

(defun random-propagator (f t1 &optional t2)
  (declare (ignore t2))
  (mod-propagator f t1 t1))
(si::putprop 'random 'random-propagator 'type-propagator)

(defun gcd-propagator (f &optional (t1 nil t1p) (t2 nil t2p))
  (cond (t2p (super-range '* #t(integer 0 1) (super-range 'min t1 t2)))
	(t1p (mod-propagator f t1 t1))
	((super-range f))))
(si::putprop 'gcd 'gcd-propagator 'type-propagator)
(defun lcm-propagator (f &optional (t1 nil t1p) (t2 nil t2p))
  (cond (t2p (super-range '* #t(integer 1) (super-range 'max t1 t2)))
	(t1p (mod-propagator f t1 t1))
	((super-range f))))
(si::putprop 'lcm 'lcm-propagator 'type-propagator)

(defun rem-propagator (f t1 t2)
  (let ((t2 (cmp-norm-tp (mod-propagator f t1 t2))))
    (when t2
      (cond ((type>= #t(real 0) t1)   (type-or1 (type-and #t(real 0)   t2) (super-range '- (type-and #t(real * 0) t2))))
	    ((type>= #t(real * 0) t1) (type-or1 (type-and #t(real * 0) t2) (super-range '- (type-and #t(real 0)   t2))))
	    ((type-or1 t2 (super-range '- t2)))))))
(si::putprop 'rem 'rem-propagator 'type-propagator)

(defun rcnum-types (t1)
  (cond ((and (consp t1) (eq (car t1) 'or))
	 (reduce 'type-or1 (mapcar 'rcnum-types (cdr t1)) :initial-value nil))
	((car (member t1 `(,#tinteger ,#tratio ,#tshort-float ,#tlong-float) :test 'type<=)))))

(defun floor-propagator (f t1 &optional (t2 (type-and (rcnum-types t1) #t(real 1 1))))
  (let ((t1 (type-and t1 #treal))(t2 (type-and t2 #treal)));FIXME
    (let ((sr (super-range f t1 (type-and t2 #t(not (real 0 0))))))
      (when sr
	`(values ,sr
		 ,(cond ((member f (sfl floor ffloor))       (mod-propagator f t1 t2))
			((member f (sfl ceiling fceiling))   (super-range '- (mod-propagator f t1 t2)))
			((member f (sfl truncate ftruncate round fround)) (rem-propagator f t1 t2))))))))
					;multiplying by 0.5 for round would convert integer ranges to float
(dolist (l '(floor ceiling truncate round ffloor fceiling ftruncate fround))
  (si::putprop l 'floor-propagator 'type-propagator))

(defun ash-propagator (f t1 t2)
  (and
   (type>= #tfixnum t1)
   (type>= #t(integer #.most-negative-fixnum #.(integer-length most-positive-fixnum)) t2)
   (super-range f t1 t2)))
(si::putprop 'ash 'ash-propagator 'type-propagator)

(defun pexpt (x y)
  (cond ((or (typep x #tfloat) 
	     (= (abs x) 1) 
	     (= (abs x) 0) 
	     (typep y #t(or float ratio (integer 0 #.(integer-length most-positive-fixnum)))))
	 (let ((si::*ignore-floating-point-errors* t)) (expt x y)))
	((> y 0)
	 (cond ((> x 1) +inf)
	       ((< x -1) -inf)
	       (0.0)))
	((< y 0)
	 (cond ((> (abs x) 1) 0.0)
	       ((> x 0) +inf)
	       (-inf)))))
		
	     
(defun expt-propagator (f t1 t2)
  (declare (ignore f))
  (cond ((or (type-and #tcomplex t1) (type-and #tcomplex t2)) nil)
	((type-and #t(or ratio (real * (0))) t1) nil)
	((and (type-and #tinteger t1) (type-and #t(real * (0)) t2)) nil)
	((type-or1 (super-range 'pexpt (type-and #t(real (0)) t1) t2) 
		   (super-range 'pexpt (type-and #t(real 0 0) t1) t2)))))
(si::putprop 'expt 'expt-propagator 'type-propagator)

;; (defun exp-propagator (f t1)
;;   (declare (ignore f))
;;   (expt-propagator 'expt (if (type>= #tshort-float t1) (object-type (float +e+ 0.0s0)) (object-type +e+)) t1))
;; (si::putprop 'exp 'exp-propagator 'type-propagator)

(defun integer-length-propagator (f t1)
  (when (type>= #tfixnum t1) (type-or1 (super-range f (type-and #t(real 0) t1)) (super-range f (type-and #t(real * 0) t1)))))
(si::putprop 'integer-length 'integer-length-propagator 'type-propagator)

(defun abs-propagator (f t1)
  (when t1
    (type-and #t(real 0) 
	      (type-or1 (abs-propagator f (super-range 'float (complex-real-imag-type-propagator 'complex-real (type-and #tcomplex t1))))
			(let ((t1 (type-and #treal t1)))
			  (type-or1 t1 (super-range '- t1)))))))
(si::putprop 'abs 'abs-propagator 'type-propagator)

(defun cosh-propagator (f t1)
  (type-or1 (super-range f (type-and t1 #t(not real)))
	    (type-or1 (super-range f (type-and t1 #t(real 0))) (super-range f (type-and t1 #t(real * (0)))))))
(si::putprop 'cosh 'cosh-propagator 'type-propagator)

(defun shift-range-fmod (t1 m &optional (mod t))
  (cond ((not t1) nil)
	((eq (car t1) 'or) (reduce 'type-or1 (mapcar (lambda (x) (shift-range-fmod x m mod)) (cdr t1)) :initial-value nil))
	((type>= #trational t1) (shift-range-fmod (super-range 'float t1) m mod))
	((and (eq (cadr t1) '*) (eq (caddr t1) '*)) (if mod (cmp-norm-tp (list (car t1) (- m) m)) t1))
	((eq (cadr t1) '*) (super-range '* #t(integer -1 -1) (shift-range-fmod (super-range '- t1) m mod)))
	((let* ((z (cadr t1))
		(z (if (atom z) z (car z)))
		(z (if mod (* m (fceiling z m)) m))
		(z (cmp-norm-tp (list (car t1) z z)))
		(z (super-range '- t1 z)))
	   (if mod 
	       (type-and (cmp-norm-tp (list (car t1) (- m) m)) z)
	     z)))))

(defconstant +pi+ (atan 0 -1))
(defconstant +pid2+ (* 0.5 (atan 0 -1)))

(defun to-complex-tp (tp)
  (reduce 'type-or1 (mapcar (lambda (x) (let ((z (type-and tp x))) (when z (cmp-norm-tp `(complex ,z))))) (cdr #treal))
	  :initial-value nil))

(defun float-proxy-propagator (f t1) 
  (declare (ignore f)) (super-range 'float t1))
(si::putprop 'si::big-to-double 'float-proxy-propagator 'type-propagator)
(si::putprop 'si::ratio-to-double 'float-proxy-propagator 'type-propagator)

(defun sqrt-propagator (f t1)
  (type-or1 (super-range f (type-and t1 #tcomplex))
	    (type-or1 (super-range f (type-and t1 #t(real 0)))
		      (super-range 'sqrt (to-complex-tp (type-and t1 #t(real * (0))))))));FIXME
(si::putprop 'sqrt 'sqrt-propagator 'type-propagator)

(defun cos-propagator (f t1)
  (type-or1 (super-range f (type-and t1 #tcomplex))
	    (let ((z (shift-range-fmod (type-and t1 #treal) +pi+)))
	      (type-or1 (super-range f (type-and z #t(real 0)))
			(super-range f (type-and z #t(real * (0))))))))
(si::putprop 'cos 'cos-propagator 'type-propagator)

(defun sin-propagator (f t1)
  (type-or1 (super-range f (type-and t1 #tcomplex))
	    (cos-propagator (lambda (x) (funcall f (if (floatp x) (+ x (float +pid2+ x)) (+ (float x +pid2+) +pid2+))))
			    (shift-range-fmod (type-and t1 #treal) +pid2+ nil))))
(si::putprop 'sin 'sin-propagator 'type-propagator)

(defun tan-propagator (f t1)
  (type-or1 (super-range f (type-and t1 #tcomplex))
	    (let ((z (shift-range-fmod (shift-range-fmod (type-and t1 #treal) +pid2+ nil) +pi+)))
	      (type-or1 (super-range (lambda (x) (funcall f (if (floatp x) (+ x (float +pid2+ x)) (+ (float x +pid2+) +pid2+))))
				     (type-and z #t(real 0)))
			(super-range (lambda (x) (funcall f (if (floatp x) (+ x (float +pid2+ x)) (+ (float x +pid2+) +pid2+))))
				     (type-and z #t(real * (0))))))))
(si::putprop 'tan 'tan-propagator 'type-propagator)

(defun asin-propagator (f t1)
  (type-or1 (super-range f (type-and t1 #tcomplex))
	    (type-or1 (super-range (lambda (x) (funcall f (/ x 6))) 
				   (super-range '* #t(integer 6 6) (type-and t1 #t(real -1 1))))
		      (super-range f (to-complex-tp (type-and t1 #t(not (real -1 1))))))))
(si::putprop 'asin 'asin-propagator 'type-propagator)
(si::putprop 'acos 'asin-propagator 'type-propagator)
(si::putprop 'atanh 'asin-propagator 'type-propagator)

(defun acosh-propagator (f t1)
  (type-or1 (super-range f (type-and t1 #tcomplex))
	    (type-or1 (super-range f (type-and t1 #t(real 1)))
		      (super-range f (to-complex-tp (type-and t1 #t(real * (1))))))))
(si::putprop 'acosh 'acosh-propagator 'type-propagator)

(defmacro eov (type1 l1 type2 l2)
  `(if (and (= ,l1 ,l2) 
	    (eq (car ,type1) 'returns-exactly)
	    (eq (car ,type2) 'returns-exactly)) 
       'returns-exactly 'values))

(defun type-and-int (type1 type2)
  (cond ((eq type1 type2) type2)
	((eq type1 '*) type2)
	((eq type2 '*) type1)
	((equal type1 type2) type2)
	((and (cmpt type1) (cmpt type2))
	 (let* ((ntype1 (if (cmpt type1) (cdr type1) (when type1 (list type1))))
		(ntype2 (if (cmpt type2) (cdr type2) (when type2 (list type2))))
		(l1 (length ntype1))
		(l2 (length ntype2))
		(eov (eov type1 l1 type2 l2)))
	   (cond ((and (every 'type>= ntype1 ntype2) (>= l1 l2) (eq (car type2) eov)) type2)
		 ((and (every 'type>= ntype2 ntype1) (>= l2 l1) (eq (car type1) eov)) type1)
		 ((cmp-norm-tp `(,eov ,@(mapcar 'type-and ntype1 ntype2)))))))
	((cmpt type1) (type-and (or (cadr type1) #tnull) type2))
	((cmpt type2) (type-and type1 (or (cadr type2) #tnull)))
	((member type1 '(t object)) type2)
	((member type2 '(t object)) type1)
	((subtypep1 type2 type1) type2)
	((subtypep1 type1 type2) type1)
	((cmp-norm-tp `(and ,type1 ,type2)))))

(defun type>= (type1 type2)
  (let ((t1 (cmpntww type1))
	(t2 (cmpntww type2)))
    (let ((z (type-and t1 t2)))
;      (when (and (equal z t2) (not (eq z t2))) (cmpwarn "eq type2 prob: ~s ~s~%" t1 t2))
					;    (when (not (eq type1 (cmp-norm-tp type1))) (cmpwarn "unnorm type1 ~s~%" type1))
					;    (when (not (eq type2 (cmp-norm-tp type2))) (cmpwarn "unnorm type2 ~s~%" type2))
;      (equal z t2)
      (eq z t2))))
(defun type<= (type1 type2)
  (let ((t1 (cmpntww type1))
	(t2 (cmpntww type2)))
    (let ((z (type-and t2 t1)))
;      (when (and (equal z t1) (not (eq z t1))) (cmpwarn "eq type1 prob: ~s ~s~%" t1 t2))
					;    (when (not (eq type1 (cmp-norm-tp type1))) (cmpwarn "unnorm type1 ~s~%" type1))
					;    (when (not (eq type2 (cmp-norm-tp type2))) (cmpwarn "unnorm type2 ~s~%" type2))
;      (equal z t1))))
      (eq z t1))))

(defun type-or1-int (type1 type2)
  (cond ((eq type1 type2) type2)
	((eq type1 '*) type1)
	((eq type2 '*) type2)
	((equal type1 type2) type2)
	((and (cmpt type1) (cmpt type2))
	 (let* ((ntype1 (if (cmpt type1) (cdr type1) (when type1 (list type1))))
		(ntype2 (if (cmpt type2) (cdr type2) (when type2 (list type2))))
		(l1 (length ntype1))
		(l2 (length ntype2))
		(n (- (max l1 l2) (min l1 l2)))
		(e (make-list n :initial-element #tnull))
		(ntype1 (if (< l1 l2) (append ntype1 e) ntype1))
		(ntype2 (if (< l2 l1) (append ntype2 e) ntype2))
		(eov (eov type1 l1 type2 l2)))
	   (cond ((and (every 'type>= ntype2 ntype1) (>= l2 l1) (eq (car type2) eov)) type2)
		 ((and (every 'type>= ntype1 ntype2) (>= l1 l2) (eq (car type1) eov)) type1)
		 ((cmp-norm-tp `(,eov ,@(mapcar 'type-or1 ntype1 ntype2)))))))
	((cmpt type1) (type-or1 type1 (cmp-norm-tp `(values ,type2))))
	((cmpt type2) (type-or1 (cmp-norm-tp `(values ,type1)) type2))
	((member type1 '(t object)) type1)
	((member type2 '(t object)) type2)
	((subtypep1 type1 type2) type2)
	((subtypep1 type2 type1) type1)
	((type-filter `(or ,type1 ,type2)))))

;; This is the begininng of the long-awaited type-handling
;; centralization.  +c-global-arg-types+ can be passed unboxed to the
;; interpreter -- there are at most three (encoded in a two bit field)
;; of these which must be coordinated with the enum ftype definined in
;; object.h. +c-local-arg-types+ is a larger set which can be passed
;; unboxed to and from compiled functions in the same lisp source file
;; -- these must be passable in total on the C stack by value, i.e. no
;; pointers.  +c-local-var-types+ is a larger set which can be
;; manipulated unboxed within compiled functions, presumably to
;; allocate them on the local stack and save gc, but cannot be passed
;; as function arguments or returned therefrom.  20050707 CM.

(defconstant +c-global-arg-types-syms+   `(fixnum)) ;FIXME (long-float short-float) later
(defconstant +c-local-arg-types-syms+    (union +c-global-arg-types-syms+ '(fixnum character long-float short-float fcomplex dcomplex)))
;(defconstant +c-local-var-types-syms+    (union +c-local-arg-types-syms+ '(fixnum character long-float short-float integer)))
(defconstant +c-local-var-types-syms+    (union +c-local-arg-types-syms+ '(fixnum character long-float short-float fcomplex dcomplex)))

(defun get-sym (args)
  (intern (apply 'concatenate 'string (mapcar 'string args))))

(defconstant +set-return-alist+ 
  (mapcar (lambda (x) (cons (get-sym `("RETURN-" ,x)) (get-sym `("SET-RETURN-" ,x)))) +c-local-arg-types-syms+))
(defconstant +return-alist+ 
  (mapcar (lambda (x) (cons (if (eq x 'object) x (cmp-norm-tp x)) (get-sym `("RETURN-" ,x)))) (cons 'object +c-local-arg-types-syms+)))
(defconstant +wt-loc-alist+ 
  `((object . wt-loc)
    ,@(mapcar (lambda (x) (cons (cmp-norm-tp x) (get-sym `("WT-" ,x "-LOC")))) +c-local-var-types-syms+)))
(defconstant +coersion-alist+
  (mapcar (lambda (x) (cons (cmp-norm-tp x) (get-sym `(,x "-LOC")))) +c-local-var-types-syms+))
(defconstant +inline-types-alist+ 
  `((,#tboolean . inline-cond) (t . inline) 
    ,@(mapcar (lambda (x) (cons (cmp-norm-tp x) (get-sym `("INLINE-" ,x)))) +c-local-var-types-syms+)))
(defconstant +number-inlines+ 
  (mapcar 'cdr (remove-if-not (lambda (x) (type>= #tnumber (car x))) +inline-types-alist+)))

(defconstant +c-global-arg-types+   (mapcar 'cmp-norm-tp +c-global-arg-types-syms+)) ;FIXME (long-float short-float) later
(defconstant +c-local-arg-types+    (mapcar 'cmp-norm-tp +c-local-arg-types-syms+))
(defconstant +c-local-var-types+    (mapcar 'cmp-norm-tp +c-local-var-types-syms+))

(defconstant +wt-c-var-alist+ `((,#tfixnum ."make_fixnum")
				(,#tinteger ."make_integer") 
				(,#tcharacter  ."code_char")
				(,#tlong-float  ."make_longfloat")
				(,#tshort-float ."make_shortfloat")
				(,#tfcomplex ."make_fcomplex")
				(,#tdcomplex ."make_dcomplex")
				(object . "")))

(defconstant +to-c-var-alist+ `((,#tfixnum ."fix")
				(,#tcharacter  ."char_code")
				(,#tlong-float  ."lf")
				(,#tshort-float ."sf")
				(,#tfcomplex ."sfc")
				(,#tdcomplex ."lfc")
				(object . "")))




(defun unboxed-type (type)
  (let ((h (load-time-value (make-hash-table :test 'eq :size 128))))
    (or (gethash type h)
	(setf (gethash type h)
	      (cond ((not type) t)
		    ((member type +c-local-var-types+ :test 'type<=)
		     (nil-to-t 
		      (car (member type +useful-types+ 
				   :test (lambda (x y) 
					   (unless (member y +c-local-var-types+ :test 'type<=) 
					     (type>= y x)))))))
		    (type))))))

(defvar *pmct-hash* (make-hash-table :test 'eq))
(defun promoted-c-type (type)
  (or (gethash type *pmct-hash*)
      (setf (gethash type *pmct-hash*)
	    (let ((type (coerce-to-one-value type)))
	      (cond ((eq type 'object) type)
		    ((when type (car (member type `(,#tnull ,#tboolean ,@+c-local-var-types+) :test 'type<=))))
		    (t))))))

(defvar *ctov-hash* (make-hash-table :test 'eq))
(defun coerce-to-one-value (type)
  (or (gethash type *ctov-hash*)
      (setf (gethash type *ctov-hash*)
	    (when type (type-and type t)))))
;	    (if type (type-and type t) #tnull)))) ;;FIXME ????

(defvar *stp-hash* (make-hash-table :test 'eq))
(defun single-type-p (type)
  (or (gethash type *stp-hash*)
      (setf (gethash type *stp-hash*)
	    (type>= t type))))	   

(defconstant +export-type-alist+ (mapcar 'cons +useful-type-list+ +useful-types+))
(defvar *ext-hash* (make-hash-table :test 'eq))
(defun export-type (type)
  (or (gethash type *ext-hash*)
      (setf (gethash type *ext-hash*)
	    (cond ((when (single-type-p type) (car (rassoc type +export-type-alist+))))
		  ((and (consp type) (eq (car type) 'member)) (export-type (bump-tp type)))
		  ((consp type) `(,(car type) ,@(mapcan (lambda (x) 
							  (let ((x (export-type x)))
							    (if (and (cmpao x) (eq (car x) (car type)))
								(copy-tree (cdr x)) (list x)))) (cdr type))))
		  (type)))))

(defvar *unique-sigs* (make-hash-table :test 'equal))
(defun unique-sigs (sig)
  (let ((sig (list (mapcar (lambda (x) (export-type (cmp-norm-tp x))) (car sig))
		   (export-type (cmp-norm-tp (cadr sig))))))
    (or (gethash sig *unique-sigs*) (setf (gethash sig *unique-sigs*) sig))))
		  
(defvar *bump-hash* (make-hash-table :test 'eq))
(defun bump-tp (tp)
  (or (gethash tp *bump-hash*)
      (setf (gethash tp *bump-hash*)
	    (cond ((eq tp '*) tp)
		  ((and (consp tp) (member (car tp) '(values returns-exactly))) 
		   (cmp-norm-tp `(,(car tp) ,@(mapcar 'bump-tp (cdr tp)))))
		  ((type>= tp #tnull) (type-or1 #tnull (bump-tp (type-and #t(not null) tp))))
		  ((car (member tp +useful-types+ :test 'type<=)))))))

(defun reset-info-type (info)
  (if (info-type info)
      (let ((info1 (copy-info info)))
           (setf (info-type info1) t)
           info1)
      info))

(defun and-form-type (type form original-form &aux type1)
  (setq type1 (type-and type (info-type (cadr form))))
  (when (and (null type1) type (info-type (cadr form)))
        (cmpwarn "The type of the form ~s is not ~s, but ~s." original-form type (info-type (cadr form))))
  (if (or *compiler-check-args* (eq type1 (info-type (cadr form))))
      form
      (let ((info (copy-info (cadr form))))
           (setf (info-type info) type1)
           (list* (car form) info (cddr form)))))

(defun check-form-type (type form original-form)
  (when (and (null (type-and type (info-type (cadr form)))) type (info-type (cadr form)))
        (cmpwarn "The type of the form ~s is not ~s, but ~s." original-form type (info-type (cadr form)))))


