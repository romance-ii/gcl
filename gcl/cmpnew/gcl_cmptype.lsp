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
(import 'si::proper-cons 'compiler)
(import 'si::*split-files* 'compiler)

(let ((p (find-package "DEFPACKAGE")))
  (when p
    (import (find-symbol "DEFPACKAGE" p) 'compiler)))


(defvar *uniq-tp-hash* (make-hash-table :test 'equal))
(defvar *norm-tp-hash* (make-hash-table :test 'eq))

(defmacro cmpt (tp)  `(and (consp ,tp) (member (car ,tp) '(returns-exactly values))))
(defmacro cmpdt (tp) `(and (consp ,tp) (member (car ,tp) '(and or not cons returns-exactly values))))

(defun build-tp (tp)
  (cond ((cmpdt tp) (cons (car tp) (mapcar 'uniq-tp (cdr tp))))
	(tp)))

(defun uniq-tp (tp)
  (cond ((gethash tp *uniq-tp-hash*))
	((let ((tp (build-tp tp)))
	   (setf (gethash tp *uniq-tp-hash*) tp)))))

(defun readable-tp (tp)
  (cond ((cmpdt tp) (cons (car tp) (mapcar 'readable-tp (cdr tp))))
	((si::classp tp) (or (si::class-name tp) t))
	((si::structurep tp) (or (si::s-data-name tp) t))
	((and (consp tp) (eq (car tp) 'member)) `(,(car tp) ,@(sort (cdr tp) (lambda (x y) (> (si::address x) (si::address y))))))
	(tp)))

(defun dnt (tp)
  (uniq-tp
   (cond ((eq '* tp) tp)
	 ((cmpt tp)
	  (cond ((not (cdr tp)) '(returns-exactly))
		((and (eq (car tp) 'returns-exactly) (not (cddr tp))) (cmp-norm-tp (cadr tp)))
		(`(,(car tp) ,@(mapcar 'cmp-norm-tp (cdr tp))))))
	 ((let ((tp (resolve-type tp))) (if (cadr tp) '* (readable-tp (car tp))))))))
  
(defun cmp-norm-tp (tp)
  (multiple-value-bind 
   (r f) (gethash tp *norm-tp-hash*)
   (cond (f r)
	 ((let ((tp (uniq-tp tp)))
	    (multiple-value-bind 
	     (r f) (gethash tp *norm-tp-hash*)
	     (cond (f r)
		   ((let ((nt (dnt tp)))
		      (cond ((and (eq '* nt) (not (eq tp '*))) nt);don't hash unknown types
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

(defconstant +c-type-string-alist+ #y((t . "object")
				      (bit . "char")
				      (character . "char")
				      (signed-char . "char")
				      (non-negative-char . "char")
				      (unsigned-char . "unsigned char")
				      (signed-short . "short")
				      (non-negative-short . "short")
				      (unsigned-short . "unsigned short")
				      (fixnum . "fixnum")
				      (non-negative-fixnum . "fixnum")
				      (signed-int . "int")
				      (non-negative-int . "int")
				      (unsigned-int . "unsigned int")
				      (long-float . "double")
				      (short-float . "float")))


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
  (let* ((type (cmp-norm-tp (type-of thing))))
    (cmp-norm-tp
     (cond ((eq thing t) '(member t))
	  ((type>= #tinteger type) `(integer ,thing ,thing))
	  ((type>= #tshort-float type) `(short-float ,thing ,thing))
	  ((type>= #tlong-float type) `(long-float ,thing ,thing))
	  ((type>= #tcons type) (cond ((or lim (cons-tp-limit thing 0 0)) 
				  `(cons ,(object-type (car thing) t) ,(if (cdr thing) (object-type (cdr thing) t) 'null)))
				 ((si::improper-consp thing) `(list))
				 (`(si::proper-list))))
	  ((type>= #tkeyword type) 'symbol)
	  ((type>= #tcharacter type) 'character)
	  (type)))))

(deftype fixnum-float nil `(or fixnum float))


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
(defvar  *or-tp-hash* (make-hash-table :test 'eq))
(defconstant +useful-type-list+ '(nil 
				  null boolean keyword symbol 
				  proper-cons cons proper-list list 
				  simple-vector string (vector fixnum) vector
				  proper-sequence sequence
				  (integer 0 0) (integer 1 1) 
;				  bit char unsigned-char short unsigned-short 
				  seqind immfix fixnum (integer 0) integer
				  (short-float 0.0 0.0) (short-float * (0.0)) (short-float (0.0)) 
				  (short-float * 0.0) (short-float 0.0) short-float
				  (long-float 0.0 0.0) (long-float * (0.0)) (long-float (0.0)) 
				  (long-float * 0.0) (long-float 0.0) long-float
				  (real 0.0 0.0) (real * (0.0)) (real (0.0)) (real * 0.0) (real 0.0) real
				  number
				  character 
				  t))
(defconstant +useful-types+ (mapcar (lambda (x) (load-time-value (cmp-norm-tp x))) +useful-type-list+))
(mapc (lambda (x) 
	(setf (gethash x *and-tp-hash*) (make-hash-table :test 'eq :size 128))
	(setf (gethash x  *or-tp-hash*) (make-hash-table :test 'eq :size 128))) +useful-types+)

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
  (and (long-float-p x);FIXME
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
			  (type-and tt #t(real 0 0)) 
			  (not (type>= #t(real 0) tt)) 
			  (not (type>= #t(real * 0) tt)))))
		  (cons +inf (cons -inf v)) v)))
      (unless (some (lambda (x) (complexp (bound x))) v)
	(cmp-norm-tp (mk-tp e (mmin v) (mmax v)))))))

(dolist (l '(/ floor ceiling truncate round ffloor fceiling ftruncate fround))
  (si::putprop l t 'zero-pole))
(dolist (l '(+ - * exp float sqrt atan))
  (si::putprop l 'super-range 'type-propagator))

(defun min-max-propagator (f &optional (t1 nil t1p) (t2 nil t2p))
  (cond (t2p (super-range f t1 t2))
	(t1p (super-range f t1))))
(si::putprop 'max 'min-max-propagator 'type-propagator)
(si::putprop 'min 'min-max-propagator 'type-propagator)

(defun /-propagator (f t1 &optional t2)
  (cond (t2 (super-range f t1 (type-and t2 #t(not (real 0 0)))))
	((super-range f (type-and t1 #t(not (real 0 0)))))))
(si::putprop '/ '/-propagator 'type-propagator)

(defun log-wrap (x y)
  (if (= 0 x) (symbol-value '-inf) (log x y)))

(defun log-propagator (f t1 &optional (t2 #t(short-float #.(exp 1.0s0) #.(exp 1.0s0))))
  (declare (ignore f))
  (super-range 'log-wrap t1 t2))
(si::putprop 'log 'log-propagator 'type-propagator)

(defun last-cons-type (tp &optional l)
  (cond ((and l (atom tp)) tp)
	((and (consp tp) (eq (car tp) 'cons) 
	      (cddr tp) (not (cdddr tp))) (last-cons-type (caddr tp) t))))

(defun cdr-propagator (f t1)
  (declare (ignore f))
  (cond ((type>= #tnull t1) t1) ;FIXME clb ccb do-setq-tp
	((and (consp t1) (eq (car t1) 'cons)) (caddr t1))
	((type>= #tproper-list t1) #tproper-list)))
(si::putprop 'cdr 'cdr-propagator 'type-propagator)

(defun cons-propagator (f t1 t2)
  (declare (ignore f))
  (cond ((cons-tp-limit t2 0 0) (cmp-norm-tp `(cons ,t1 ,t2)))
	((type>= #tproper-list t2) #tproper-list)
	(#tcons)))
(si::putprop 'cons 'cons-propagator 'type-propagator)

(defun car-propagator (f t1)
  (declare (ignore f))
  (when (type>= #tnull t1) #tnull))
(si::putprop 'car 'car-propagator 'type-propagator)

(defun mod-propagator (f t1 t2)
  (declare (ignore f t1))
  (let ((sr (copy-tree (super-range '* #t(integer 0 1) t2))))
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

(defun floor-propagator (f t1 &optional (t2 #t(integer 1 1)))
  (let ((sr (super-range f t1 (type-and t2 #t(not (real 0 0))))))
    (when sr
      `(values ,sr
	       ,(cond ((member f (sfl floor ffloor))       (mod-propagator f t1 t2))
		      ((member f (sfl ceiling fceiling))   (super-range '- (mod-propagator f t1 t2)))
		      ((member f (sfl truncate ftruncate round fround)) (rem-propagator f t1 t2)))))))
					;multiplying by 0.5 for round would convert integer ranges to float
(dolist (l '(floor ceiling truncate round ffloor fceiling ftruncate fround))
  (si::putprop l 'floor-propagator 'type-propagator))

(defun ash-propagator (f t1 t2)
  (and
   (type>= #tfixnum t1)
   (type>= #t(integer #.most-negative-fixnum #.(integer-length most-positive-fixnum)) t2)
   (super-range f t1 t2)))
(si::putprop 'ash 'ash-propagator 'type-propagator)

(defun expt-propagator (f t1 t2)
  (cond ((or (not (type>= #t(real #.(float most-negative-fixnum) #.(float most-positive-fixnum)) t1))
	     (not (type>= #t(real #.(float most-negative-fixnum) #.(float (integer-length most-positive-fixnum))) t2)))
	 (let ((rcl (load-time-value (mapcar 'cmp-norm-tp +real-contagion-list+))))
	   (let ((v1 (member-if (lambda (x) (type>= t1 x) (type>= x t1)) rcl))
		 (v2 (member-if (lambda (x) (type>= t2 x) (type>= x t2)) rcl)))
	     (or (car (member (car v1) v2)) (car (member (car v2) v1))))))
	((type-or1 (super-range f (type-and #t(real (0)) t1) t2) (super-range f (type-and #t(real * (0)) t1) t2)))))
(si::putprop 'expt 'expt-propagator 'type-propagator)

(defun integer-length-propagator (f t1)
  (when (type>= #tfixnum t1) (type-or1 (super-range f (type-and #t(real 0) t1)) (super-range f (type-and #t(real * 0) t1)))))
(si::putprop 'integer-length 'integer-length-propagator 'type-propagator)

(defun abs-propagator (f t1)
  (declare (ignore f))
  (type-and (type-or1 t1 (super-range '- t1)) #t(real 0)))
(si::putprop 'abs 'abs-propagator 'type-propagator)

(defmacro eov (type1 l1 type2 l2)
  `(if (and (= ,l1 ,l2) 
	    (eq (car ,type1) 'returns-exactly)
	    (eq (car ,type2) 'returns-exactly)) 
       'returns-exactly 'values))

(defun type-and-int (type1 type2)
  (cond ((eq type1 '*) type2)
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
  (cond ((eq type1 '*) type1)
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
(defconstant +c-local-arg-types-syms+    (union +c-global-arg-types-syms+ '(fixnum character long-float short-float)))
;(defconstant +c-local-var-types-syms+    (union +c-local-arg-types-syms+ '(fixnum character long-float short-float integer)))
(defconstant +c-local-var-types-syms+    (union +c-local-arg-types-syms+ '(fixnum character long-float short-float)))

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

(defconstant +c-global-arg-types+   (mapcar 'cmp-norm-tp +c-global-arg-types-syms+)) ;FIXME (long-float short-float) later
(defconstant +c-local-arg-types+    (mapcar 'cmp-norm-tp +c-local-arg-types-syms+))
(defconstant +c-local-var-types+    (mapcar 'cmp-norm-tp +c-local-var-types-syms+))


(defvar *pmct-hash* (make-hash-table :test 'eq))
(defun promoted-c-type (type)
  (or (gethash type *pmct-hash*)
      (setf (gethash type *pmct-hash*)
	    (let ((type (coerce-to-one-value type)))
	      (cond ((eq type 'object) type)
		    ((when type (car (member type `(,#tboolean ,@+c-local-var-types+) :test 'type<=))))
		    (type))))))

(defvar *ctov-hash* (make-hash-table :test 'eq))
(defun coerce-to-one-value (type)
  (or (gethash type *ctov-hash*)
      (setf (gethash type *ctov-hash*)
	    (or (not type) (type-and type t)))))   

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
	    (cond ((single-type-p type) (or (car (rassoc type +export-type-alist+)) type))
		  ((consp type) `(,(car type) ,@(mapcar 'export-type (cdr type))))
		  (type)))))
		  
(defvar *bump-hash* (make-hash-table :test 'eq))
(defun bump-tp (tp)
  (or (gethash tp *bump-hash*)
      (setf (gethash tp *bump-hash*)
	    (cond ((eq tp '*) tp)
		  ((and (consp tp) (member (car tp) '(values returns-exactly))) 
		   (cmp-norm-tp `(,(car tp) ,@(mapcar 'bump-tp (cdr tp)))))
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
  (if (eq type1 (info-type (cadr form)))
      form
      (let ((info (copy-info (cadr form))))
           (setf (info-type info) type1)
           (list* (car form) info (cddr form)))))

(defun check-form-type (type form original-form)
  (when (and (null (type-and type (info-type (cadr form)))) type (info-type (cadr form)))
        (cmpwarn "The type of the form ~s is not ~s, but ~s." original-form type (info-type (cadr form)))))


