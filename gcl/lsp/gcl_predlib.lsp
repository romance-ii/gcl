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


;;;;    predlib.lsp
;;;;
;;;;                              predicate routines

(in-package 'system)

(export '(lisp::upgraded-complex-part-type lisp::type-of
	  lisp::deftype lisp::typep lisp::subtypep 
	  lisp::coerce lisp::upgraded-array-element-type) 'lisp)

;;Exported functions need to be compiled with some safety to ensure
;;that user-supplied arguments are checked.  They should therefore
;;primarily be wrappers around computationally intensive internal
;;functions compiled with more aggressive settings. 20050718 CM

(eval-when (compile)
	   (proclaim '(optimize (safety 0) (space 3) (speed 3))))

(defun type-of (object)
  (or (and (typep object 'standard-object) 
	   (let* ((c (class-of object))
		  (n (class-name c)))
	     (if (and n (eq c (find-class n nil))) n c)))
      (let ((tp (type-of-c object)))
	(if (member tp '(vector array));FIXME
	    `(,tp ,(upgraded-array-element-type (array-element-type object)))
	  tp))))

(defmacro dt-apply (x y) 
  (let ((l (gensym))) 
    `(let ((,l (length ,y))) 
       (case ,l 
	     (0 (funcall ,x)) 
	     (1 (funcall ,x (car ,y))) 
	     (2 (funcall ,x (car ,y) (cadr ,y))) 
	     (otherwise (apply ,x ,y))))))

(defun typep-int (object type &aux tp i tem)
  (if (atom type)
      (setq tp type i nil)
      (setq tp (car type) i (cdr type)))
  (when (or (eq tp 'values) (and (eq tp 'function) i))
    (error "Bad type to typep: ~S" type))
  (if (eq tp 'structure-object) (setq tp 'structure))
  (when (and (member tp '(structure compiled-function)) (typep-int object 'standard-object))
    (return-from typep-int nil))
  (let ((f (and (not i) (symbolp tp) (get tp 'type-predicate))))
    (when f (return-from typep-int (let ((z (funcall f object))) z))))
  (case tp
    (cons (and (consp object)
	       (or (not i)
		   (and (typep-int (car object) (car i))
			(or (endp (cdr i))
			    (typep-int (cdr object) (cadr i)))))))
    (member (member object i))
    (not (not (typep-int object (car i))))
    (or
     (do ((l i (cdr l)))
         ((null l) nil)
      (when (typep-int object (car l)) (return t))))
    (and
     (do ((l i (cdr l)))
         ((null l) t)
       (unless (typep-int object (car l)) (return nil))))
    (satisfies (let ((z (funcall (car i) object))) z))
    ((t) t)
    ((nil) nil)
    (boolean (or (eq object 't) (eq object 'nil)))
    (bignum (member (type-of-c object) '(bignum non-negative-bignum negative-bignum)))
    (ratio (eq (type-of-c object) 'ratio))
    ((base-char) (characterp object))
    (integer
     (and (integerp object) (in-interval-p object i)))
    (rational
     (and (rationalp object) (in-interval-p object i)))
    (real
     (and (realp object) (in-interval-p object i)))
    (float
     (and (floatp object) (in-interval-p object i)))
    ((short-float)
     (and (eq (type-of-c object) 'short-float) (in-interval-p object i)))
    ((single-float double-float long-float)
     (and (eq (type-of-c object) 'long-float) (in-interval-p object i)))
    (complex
     (and (complexp object)
	  (or (null i)
	      (and   (typep-int (realpart object) (car i))
		     ;;wfs--should only have to check one.
		     ;;Illegal to mix real and imaginary types!
		     (typep-int (imagpart object) (car i))))))
    (sequence (or (listp object) (vectorp object)))
    ((base-string string simple-base-string simple-string) ;FIXME
     (and (stringp object)
          (or (endp i) (match-dimensions (array-dimensions object) i))))
    ((bit-vector simple-bit-vector)
     (and (bit-vector-p object)
          (or (endp i) (match-dimensions (array-dimensions object) i))))
    ((vector simple-vector)
     (and (vectorp object)
	  (let ((at (upgraded-array-element-type (or (eq tp 'simple-vector) (car i) (if (eq tp 'vector) '* t)))))
	    (or (eq at '*) (eq at (upgraded-array-element-type (array-element-type object)))))
          (or (not (cdr i)) (match-dimensions (array-dimensions object) (cdr i)))))
    ((array simple-array)
     (and (arrayp object)
	  (let ((at (upgraded-array-element-type (or (car i) '*))))
	    (or (eq at '*) (eq at (upgraded-array-element-type (array-element-type object)))))
          (or (not (cdr i)) (eq (cadr i) '*)
	      (if (listp (cadr i))
		  (match-dimensions (array-dimensions object) (cadr i))
		(eql (array-rank object) (cadr i))))))
    ((file-stream string-stream synonym-stream concatenated-stream
		  broadcast-stream two-way-stream echo-stream) (eq (type-of-c object) tp))
    (t (cond 
	 ((setq tem (when (symbolp tp) (get tp 'deftype-definition)))
	  (typep-int object (dt-apply tem i)))
	 ((if (symbolp tp) (get tp 's-data) (typep-int tp 's-data))
	  (let ((z (structure-subtype-p object tp))) z))
	 ((classp tp)
	  (values (subtypep (class-of object) tp)))))))
	 

;;; TYPEP predicate.
;;; FIXME --optimize with most likely cases first
(defun typep (object type &optional env)
  (declare (ignore env) (optimize (safety 1)))
  (typep-int object type))
(si::putprop 'typep 'compiler::co1typep 'compiler::co1)

(defun in-interval-p (x interval)
  (let ((low '*) (high '*))
    (when interval
      (check-type  interval cons)
      (or (eq (car interval) '*)
	  (check-type (car interval) (or (cons real null) real)))
      (setq low (car interval))
      (when (cdr interval)
	(check-type (cdr interval) cons)
	(or (eq (cadr interval) '*)
	    (check-type  (cadr interval) (or (cons real null) real)))
	(setq high (cadr interval))))
    (if (not interval)
        (setq low '* high '*)
        (if (not (cdr interval))
            (setq low (car interval) high '*)
            (setq low (car interval) high (cadr interval))))
    (cond ((eq low '*))
          ((consp low)
           (when (<= x (car low)) (return-from in-interval-p nil)))
          ((when (< x low) (return-from in-interval-p nil))))
    (cond ((eq high '*))
          ((consp high)
           (when (>= x (car high)) (return-from in-interval-p nil)))
          ((when (> x high) (return-from in-interval-p nil))))
    (return-from in-interval-p t)))

(defun match-dimensions (dim pat)
  (cond ((null dim)
	 (null pat))
	((integerp dim)
	 (eql dim pat))
	((integerp pat)
	 (eql (length dim) pat))
	(t 
	 (and (or (eq (car pat) '*)
		  (eql (car dim) (car pat)))
	      (match-dimensions (cdr dim) (cdr pat))))))


(defun subtypep1 (t1 t2)
  (or (not t1) (eq t2 t)
      (not (car (resolve-type `(and ,t1 ,(negate t2)))))
      (not (car (resolve-type `(and (type-max ,t1) ,(negate `(type-min ,t2))))))))

(defun subtypep (t1 t2 &optional env)
  (declare (ignore env) (optimize (safety 1)))
  (if (or (not t1) (eq t2 t))
      (values t t)
    (let* ((rt (resolve-type `(and ,t1 ,(negate t2))))
	   (mt (when (cadr rt) (resolve-type `(and (type-max ,t1) ,(negate `(type-min ,t2))))))
	   (rt (if (or (not (cadr rt)) (car mt)) rt `(nil nil))))
      (values (not (car rt))  (not (cadr rt))))))

(defun upgraded-complex-part-type (type &optional environment) 
  (declare (ignore environment) (optimize (safety 1)) )
  type)

(defun upgraded-array-element-type (type &optional environment)
  (declare (ignore environment) (optimize (safety 1)))
  (best-array-element-type type))


(defun sequence-type-length-type-int (type)
    (case (car type)
	  (cons (do ((i 0 (1+ i)) (x type (caddr type))) 
		    ((not (eq 'cons (car x))) 
		     (cond ((equal x '(member nil)) `(eql ,i))
			   ((not (equal x '(t))) `(eql ,(1+ i)))
			   ('(integer 1)))) (declare (seqind i))))
	  (member (unless (cadr type) `(eql 0)))
	  (array (and (cddr type) (consp (caddr type)) (= (length (caddr type)) 1) (integerp (caaddr type))
		    `(eql ,(caaddr type))))
	  ((or and) (reduce (lambda (&rest xy) (when xy 
						 (and (integerp (car xy)) 
						      (integerp (cadr xy)) 
						      (equal (car xy) (cadr xy)) (car xy))))
			    (mapcar 'sequence-type-length-type-int (cdr type))))))
	  
(defun sequence-type-length-type (type)
  (cond ((eq type 'null) `(eql 0));;FIXME accelerators
	((eq type 'cons) `(integer 1))
	((consp type) (sequence-type-length-type-int (normalize-type type)))))

(defun sequence-type-element-type-int (type)
    (case (car type)
	  (cons t)
	  (array (or (not (cdr type)) (upgraded-array-element-type (cadr type))))
	  ((or and) (reduce 
		     (lambda (&rest xy) 
		       (when xy 
			 (cond ((eq (car xy) '*) (cadr xy))
			       ((eq (cadr xy) '*) (car xy))
			       ((eq (car xy) (cadr xy)) (car xy)))))
		     (mapcar 'sequence-type-element-type-int (cdr type))))))
	  
(defun sequence-type-element-type (type)
  (let* ((type (resolve-type type))
	 (type (unless (cadr type) (car type))))
    (let ((x (sequence-type-element-type-int type)))
      (or (eq x '*) x))))

(defmacro check-type-eval (place type)
  `(assert (typep ,place ,type) (,place) 'type-error :datum ,place :expected-type ,type))

;;; COERCE function.
(defun coerce (object type)
  (declare (optimize (safety 1)))
  (when (typep-int object type)
    (return-from coerce object))
  (cond
   ((subtypep1 type 'function)
    (cond ((symbolp object) (symbol-function object))
	  ((and (consp object) (eq (car object) 'lambda)) (eval `(function ,object)))
	  ((function-identifierp object) (get (cadr object) 'setf-function))));FIXME
   ((subtypep1 type 'list)
    (let* ((l (length object))
	   (x (sequence-type-length-type type)))
      (when x (check-type l x))
      (do ((ll nil (cons (elt object i) ll))
	   (i (1- l) (1- i)))
	  ((< i 0) ll))))
   ((subtypep1 type 'array)
    (let* ((l (length object))
	   (x (sequence-type-length-type type)))
      (when x (check-type-eval l x))
      (do ((seq (make-sequence type l))
	   (i 0 (1+ i))
	   (l l))
	  ((>= i l) seq)
	  (setf (elt seq i) (elt object i)))))
   ((subtypep1 type 'character) (character object))
   ((subtypep1 type 'short-float) (float object 0.0S0))
   ((subtypep1 type 'long-float) (float object 0.0L0))
   ((subtypep1 type 'float) (float object))
   ((subtypep1 type 'complex)
    (if (or (atom type) (null (cdr type)) (null (cadr type)) (eq (cadr type) '*))
	(complex (realpart object) (imagpart object))
      (complex (coerce (realpart object) (cadr type))
	       (coerce (imagpart object) (cadr type)))))
   ((check-type-eval object type))))

;;; DEFTYPE macro.
(defmacro deftype (name lambda-list &rest body &aux decls prot)
  ;; Replace undefaultized optional parameter X by (X '*).
  (declare (optimize (safety 1)))
  (do ((b body body)) ((or (not b) (not (consp (car b))) (not (eq 'declare (caar b)))) (nreverse decls))
      (let ((d (pop body)))
	(unless (member-if (lambda (x) (and (consp x) (eq (car x) 'special))) (cdr d)) ;FIXME
	  (push d decls))))
  (do ((l lambda-list (cdr l))
       (m nil (cons (car l) m)))
      ((null l))
      (cond ((member (car l) lambda-list-keywords)
	     (unless (eq (car prot) '*) (push '* prot))
	     (unless (member (car l) '(&optional &key)) (return nil))
	     (setq m (cons (car l) m))
	     (setq l (cdr l))
	     (do ()
		 ((or (null l) (member (car l) lambda-list-keywords)))
		 (if (symbolp (car l))
		     (setq m (cons (list (car l) ''*) m))
		   (setq m (cons (car l) m)))
		 (setq l (cdr l)))
	     (setq lambda-list (nreconc m l))
	     (return nil))
	    ((push t prot))))
  (let ((fun-name (gensym (string name))) (prot (nreverse prot)))
    `(eval-when (compile eval load)
		(putprop ',name
			 '(deftype ,name ,lambda-list ,@body)
			 'deftype-form)
		(proclaim '(ftype (function ,prot t) ,fun-name))
		(defun ,fun-name ,lambda-list ,@decls (block ,name ,@body))
		(putprop ',name ',fun-name 'deftype-definition)
		(putprop ',name
			 ,(find-documentation body)
			 'type-documentation)
		',name)))

;;; Some DEFTYPE definitions.
(deftype seqind ()
  `(integer 0 ,array-dimension-limit))
(deftype rnkind ()
  `(integer 0 ,array-rank-limit))
(deftype bit () '(integer 0 1))
(deftype mod (n)
  `(integer 0 ,(1- n)))
(deftype non-negative-byte (&optional s)
  (if (eq s '*)
      `(integer 0 *)
      `(integer 0 ,(1- (expt 2 (1- s))))))
(deftype negative-byte (&optional s)
  (if (eq s '*)
      `(integer * -1)
      `(integer ,(- (expt 2 (1- s))) -1)))
(deftype signed-byte (&optional s)
  (if (eq s '*)
      `(integer * *)
      `(integer ,(- (expt 2 (1- s))) ,(1- (expt 2 (1- s))))))
(deftype unsigned-byte (&optional s)
  (if (eq s '*)
      `(integer 0 *)
      `(integer 0 ,(1- (expt 2 s)))))

(deftype non-negative-char () `(non-negative-byte ,char-length))
(deftype negative-char () `(negative-byte ,char-length))
(deftype signed-char ()`(signed-byte ,char-length))
(deftype unsigned-char ()`(unsigned-byte ,char-length))
(deftype char ()`(signed-char))

(deftype non-negative-short () `(non-negative-byte ,short-length))
(deftype negative-short () `(negative-byte ,short-length))
(deftype signed-short ()`(signed-byte ,short-length))
(deftype unsigned-short ()`(unsigned-byte ,short-length))
(deftype short ()`(signed-short))

(deftype non-negative-int () `(non-negative-byte ,int-length))
(deftype negative-int () `(negative-byte ,int-length))
(deftype signed-int ()`(signed-byte ,int-length))
(deftype unsigned-int ()`(unsigned-byte ,int-length))
(deftype int ()`(signed-int))

(deftype non-negative-fixnum () `(non-negative-byte ,fixnum-length))
(deftype negative-fixnum () `(negative-byte ,fixnum-length))
(deftype signed-fixnum ()`(signed-byte ,fixnum-length))
(deftype unsigned-fixnum ()`(unsigned-byte ,fixnum-length))
(deftype fixnum ()`(signed-fixnum))

(deftype non-negative-lfixnum () `(non-negative-byte ,lfixnum-length))
(deftype negative-lfixnum () `(negative-byte ,lfixnum-length))
(deftype signed-lfixnum ()`(signed-byte ,lfixnum-length))
(deftype unsigned-lfixnum ()`(unsigned-byte ,lfixnum-length))
(deftype lfixnum ()`(signed-lfixnum))


;;FIXME this is really ugly, but we need nreconstruct-type to return
;;values that are equal to normalize type in the compiler (type-and,
;;etc.)
;(deftype vector (&optional element-type size)
;  `(array ,element-type (,size)))
;see below

(deftype string (&optional size)
  `(array character (,size)))
(deftype base-string (&optional size)
  `(array base-char (,size)))
(deftype bit-vector (&optional size)
  `(array bit (,size)))

(deftype simple-vector (&optional size)
  `(array t (,size)))
(deftype simple-string (&optional size)
  `(array character (,size)))
(deftype simple-base-string (&optional size)
  `(array base-char (,size)))
(deftype simple-bit-vector (&optional size)
  `(array bit (,size)))

(deftype function-identifier () `(satisfies function-identifierp))


(deftype list () `(or cons null))
(deftype sequence () `(or list vector))

(defun non-standard-base-char-p (x)
  (and (characterp x) (not (standard-char-p x))))

(defun improper-consp-int (s f)
  (cond ((atom f) f)
	((atom (cdr f)) (cdr f))
	((eq s f))
	((improper-consp-int (cdr s) (cddr f)))))

(defun improper-consp (x)
  (and (consp x)
       (or (and (atom (cdr x)) (cdr x))
	   (improper-consp-int (cdr x) (cddr x)))))

;(deftype proper-list () `(or null (and cons (not (satisfies improper-consp)))))

(deftype extended-char () nil)
(deftype base-char () `(or standard-char non-standard-base-char))
(deftype character () `(or base-char extended-char))

(deftype stream () `(or broadcast-stream concatenated-stream echo-stream
			file-stream string-stream synonym-stream two-way-stream))

(deftype input-stream ()  `(and stream (satisfies  input-stream-p)))
(deftype output-stream () `(and stream (satisfies  output-stream-p)))

(deftype bignum () `(and integer (not fixnum)))
(deftype non-negative-bignum () `(and non-negative-byte (not non-negative-fixnum)))
(deftype negative-bignum () `(and negative-byte (not negative-fixnum)))
;;FIXME adjust integer bounds here?
(deftype rational (&optional (low '*) (high '*)) `(or (integer ,low ,high) (ratio ,low ,high)))
(deftype float (&optional (low '*) (high '*)) `(or (short-float ,low ,high) (long-float ,low ,high)))
(deftype single-float (&optional (low '*) (high '*)) `(long-float ,low ,high))
(deftype double-float (&optional (low '*) (high '*)) `(long-float ,low ,high))
(deftype real (&optional (low '*) (high '*)) `(or (rational ,low ,high) (float ,low ,high)))
(deftype number () `(or real complex))
(deftype atom () `(not cons))
(deftype function (&optional as vs) 
  (declare (ignore as vs)) 
  `(or interpreted-function compiled-function generic-function))

(deftype integer (&optional (low '*) (high '*)) `(integer ,low ,high))
(deftype ratio (&optional (low '*) (high '*)) `(ratio ,low ,high))
(deftype short-float (&optional (low '*) (high '*)) `(short-float ,low ,high))
(deftype long-float (&optional (low '*) (high '*)) `(long-float ,low ,high))

(deftype array (&optional (et '*) (dims '*)) 
  `(array ,et ,(if (not dims) 0 dims)))
(deftype simple-array (&optional (et '*) (dims '*)) 
  `(array ,et ,(if (not dims) 0 dims)))

(deftype eql (&optional (x nil xp)) (when xp `(member ,x)))

(deftype cons-member () `(cons))

(deftype boolean () `(member t nil))
(deftype null () `(member nil))

(deftype symbol () `(or non-keyword-symbol keyword))

(deftype complex (&optional (rp 'real)) `(complex ,(if (eq rp '*) 'real rp)))
(deftype cons (&optional (car t) (cdr t)) `(cons ,(if (eq car '*) t car)  ,(if (eq cdr '*) t cdr)))
(deftype structure-object () `(structure))
(deftype pathname () `(or non-logical-pathname logical-pathname))

(defun non-logical-pathname-p (x)
  (and (pathnamep x) (not (logical-pathname-p x))))

(defun non-keyword-symbol-p (x)
  (and (symbolp x) (not (keywordp x))))

(defun function-identifierp (tp)
  (or (symbolp tp)
      (and (consp tp) (eq (car tp) 'lambda))
      (and (consp tp)
	   (eq (car tp) 'setf)
	   (consp (cdr tp))
	   (symbolp (cadr tp))
	   (not (cddr tp)))))

;(defun simple-array-p (x)
;  (and (arrayp x)
       ;; should be (not (expressly-adjustable-p x))
       ;; since the following will always return T
       ;; (not (adjustable-array-p x))
;       (not (array-has-fill-pointer-p x))
;       (not (displaced-array-p x))))


;(defun extended-char-p (x) (declare (ignore x)) nil)

;(defun interpreted-function-p (x) 
;  (and (function-p x) (not (compiled-function-p x))))

;(defun function-p (x)
;  (and (not (symbolp x)) (functionp x)))

(defun sequencep (x)
  (or (listp x) (vectorp x)))

(defun ratiop (x)
  (and (rationalp x) (not (integerp x))))

(defun short-float-p (x)
  (and (floatp x) (eql x (float x 0.0s0))))

(defun long-float-p (x)
  (and (floatp x) (eql x (float x 0.0))))

(defun proper-listp (x)
  (or (not x) (and (consp x) (not (improper-consp x)))))

(deftype not-type nil 'null)

(defconstant +type-alist+ '((null . null)
	  (not-type . not)
          (symbol . symbolp)
          (keyword . keywordp)
	  (non-logical-pathname . non-logical-pathname-p)
	  (logical-pathname . logical-pathname-p)
	  (proper-list . proper-listp)
	  (non-keyword-symbol . non-keyword-symbol-p)
	  (standard-char . standard-char-p)
	  (non-standard-base-char . non-standard-base-char-p)
	  (interpreted-function . interpreted-function-p)
	  (float . floatp)
	  (short-float . short-float-p)
	  (long-float . long-float-p)
	  (array . arrayp)
	  (vector . vectorp)
	  (bit-vector . bit-vector-p)
	  (string . stringp)
	  (complex . complexp)
	  (ratio . ratiop)
	  (sequence . sequencep)
          (atom . atom)
          (cons . consp)
          (list . listp)
          (fixnum . fixnump)
          (integer . integerp)
          (rational . rationalp)
          (number . numberp)
          (character . characterp)
          (package . packagep)
          (stream . streamp)
          (pathname . pathnamep)
          (readtable . readtablep)
          (hash-table . hash-table-p)
          (random-state . random-state-p)
          (structure . structurep)
          (function . functionp)
          (compiled-function . compiled-function-p)
          (common . commonp)))

(dolist (l +type-alist+)
  (putprop (car l) (cdr l) 'type-predicate)
  (when (symbolp (cdr l)) 
    (putprop (cdr l) (car l) 'predicate-type)
    (proclaim `(ftype (function (t) t) ,(cdr l)))))


(defconstant +singleton-types+ '(non-keyword-symbol keyword standard-char
				      non-standard-base-char 
				      package cons-member proper-list
				      broadcast-stream concatenated-stream echo-stream file-stream string-stream
				      synonym-stream two-way-stream 
				      non-logical-pathname logical-pathname
				      readtable hash-table random-state standard-object structure 
				      interpreted-function
				      compiled-function))


(defconstant +range-types+ `(integer ratio short-float long-float))

(defconstant +array-types+ (si::aelttype-list))
(defconstant +array-types-with-nil-for-ansi+ (append '(nil) +array-types+))

(deftype vector (&optional (element-type '* ep) size)
  (if ep 
      `(array ,element-type (,size))
    `(or ,@(mapcar (lambda (x) `(array ,x (,size))) +array-types-with-nil-for-ansi+))))

(defconstant +known-types+ (append +range-types+ 
				   (mapcar (lambda (x) `(complex ,x)) +range-types+)
				   +singleton-types+
				   (mapcar (lambda (x) `(array ,x)) +array-types-with-nil-for-ansi+)))

(defconstant +array-type-alist+ (mapcar (lambda (x) (cons x (intern (string-concatenate "ARRAY-" (string x)))))
					+array-types-with-nil-for-ansi+))
(defconstant +complex-type-alist+ (mapcar (lambda (x) (cons x (intern (string-concatenate "COMPLEX-" (string x)))))
					+range-types+))

(defconstant +kindom-logic-ops-alist+ `(,@(mapcar (lambda (x) `(,x . range-op)) +range-types+)
					  (cons . cons-op)
					  (standard-object . standard-op)
					  (structure . structure-op)
					  ,@(mapcar (lambda (x) `(,(cdr x) . complex-op)) +complex-type-alist+)
					  ,@(mapcar (lambda (x) `(,(cdr x) . array-op)) +array-type-alist+)
					  ,@(mapcar (lambda (x) `(,x . single-op)) +singleton-types+)))

(defconstant +kindom-recon-ops-alist+ `(,@(mapcar (lambda (x) `(,x . range-recon)) +range-types+)
					  (cons . cons-recon)
					  (standard-object . standard-recon)
					  (structure . structure-recon)
					  ,@(mapcar (lambda (x) `(,(cdr x) . complex-recon)) +complex-type-alist+)
					  ,@(mapcar (lambda (x) `(,(cdr x) . array-recon)) +array-type-alist+)
					  ,@(mapcar (lambda (x) `(,x . single-recon)) +singleton-types+)))

(defconstant +kindom-load-ops-alist+ `(,@(mapcar (lambda (x) `(,x . range-load)) +range-types+)
					 (complex . complex-load)
					 (cons . cons-load)
					 (standard-object . standard-load)
					 (structure . structure-load)
					 (array . array-load)
;					 (simple-array . array-load)
					 ,@(mapcar (lambda (x) `(,x . single-load)) +singleton-types+)))



(defmacro make-ntp nil `(make-list 3))
(defconstant +tp-nil+ (make-ntp))
(defconstant +tp-t+   '(nil t nil));FIXME cannot call ntp-not as depends on setf too early
(defmacro ntp-tps (ntp) `(first ,ntp))
(defmacro ntp-def (ntp) `(second ,ntp))
(defmacro ntp-ukn (ntp) `(third ,ntp))
(defmacro ntp-ld (ntp tp) (let ((ns (gensym)) (ts (gensym)))
				`(let ((,ns ,ntp) (,ts ,tp))
				   (when ,ts
				     (if (ntp-tps ,ns) (nconc (ntp-tps
                                                               ,ns)
                                                              (list
                                                               ,ts))
                                       (setf (ntp-tps ,ns) (list ,ts)))))))
(defmacro range-num (x) `(if (atom ,x) ,x (car ,x)))
(defmacro elcomp (x) `(cond ((eq ,x '*) ,x) 
			    ((atom ,x) (list ,x)) 
			    ((car ,x))))

;;FIXME --remove these when compiler is ready

(defmacro lposition-if (fn lst)
  (let ((lsym (gensym)) (p (gensym)) (ind (gensym)))
    `(let ((,lsym ,lst))
       (do ((,ind ,lsym (cdr ,ind)) (,p 0 (1+ ,p))) ((or (not ,ind) (funcall ,fn (car ,ind))) (and ,ind ,p))
	   (declare (seqind ,p))))))

(defmacro lposition-eq (itm lst)
  (let ((lsym (gensym)) (i (gensym)) (p (gensym)) (ind (gensym)))
    `(let ((,lsym ,lst) (,i ,itm))
       (do ((,ind ,lsym (cdr ,ind)) (,p 0 (1+ ,p))) ((or (not ,ind) (eq ,i (car ,ind))) (and ,ind ,p))
	   (declare (seqind ,p))))))

(defmacro ldelete-if (fn lst)
  (let ((lsym (gensym)) (f (gensym)) (p (gensym)) (ind (gensym)))
    `(let ((,lsym ,lst))
       (do ((,p nil (or ,p ,f)) ,f (,ind ,lsym (cdr ,ind))) ((not ,ind) ,f)
	   (if (funcall ,fn (car ,ind))
	       (when ,p (setq ,p (rplacd ,p (cdr ,ind))))
	     (setq ,f (or ,f ,ind) ,p (cdr ,p)))))))

(defmacro lremove-if (fn lst)
  (let ((lsym (gensym)) (tmp (gensym)) (r (gensym)) (l (gensym)) (ind (gensym)))
    `(let ((,lsym ,lst) ,r ,l)
       (do ((,ind ,lsym (cdr ,ind))) ((not ,ind) ,r)
	   (unless (funcall ,fn (car ,ind))
	     (setf (car (setq ,l (let ((,tmp (cons nil nil))) (if ,l (cdr (rplacd ,l ,tmp)) (setq ,r ,tmp))))) (car ,ind)))))))

(defmacro lremove-if-not (fn lst)
  (let ((lsym (gensym)) (tmp (gensym)) (r (gensym)) (l (gensym)) (ind (gensym)))
    `(let ((,lsym ,lst) ,r ,l)
       (do ((,ind ,lsym (cdr ,ind))) ((not ,ind) ,r)
	   (when (funcall ,fn (car ,ind))
	     (setf (car (setq ,l (let ((,tmp (cons nil nil))) (if ,l (cdr (rplacd ,l ,tmp)) (setq ,r ,tmp))))) (car ,ind)))))))


(defun resolve-type (type)
  (nreconstruct-type (nprocess-type (normalize-type type t))))


(defun copy-type (type res)
  (cond ((atom type) (nreverse res))
	((consp (car type)) (copy-type (cdr type) (cons (copy-type (car type) nil) res)))
	((member (car type) '(member eql)) type)
	((copy-type (cdr type) (cons (car type) res)))))

(defun normalize-type (tp &optional ar);FIXME
  (let* ((tp (normalize-type-int tp ar))
	 (lt (list-types tp)))
    (if lt 
	(nsublis `(((proper-list) . (or  (member nil) (cons (t) (proper-list)) ,@lt))) tp :test 'equal)
      tp)))

(defmacro maybe-eval (x) `(if (and (consp ,x) (eq (car ,x) 'load-time-value)) (eval (cadr ,x)) ,x))

(defun proper-cons-tp (tp)
  (cond ((eq (car tp) 'cons) (cons 'cons (list '(t) (proper-cons-tp (caddr tp)))))
	('(member nil))))

(defun list-types (tp &optional r)
  (cond ((atom tp) r)
	((consp (car tp)) (let ((r (list-types (car tp) r))) (list-types (cdr tp) r)))
	((equal tp '(member nil)) (pushnew tp r :test 'eq) (list-types (cdr tp) r))
	((eq (car tp) 'cons) (pushnew (proper-cons-tp tp) r :test 'equal) (list-types (cdr tp) r))
	((list-types (cdr tp) r))))


;;FIXME loose the ar and default to t
(defun normalize-type-int (type ar &aux tem)
  (cond ((atom type) (normalize-type-int (list type) ar))
	;;These are deftype accelerators  FIXME may no longer be necessary with faster deftype
	((member (car type) +range-types+)
	 (let* ((l (cadr type))
		(ln (if (cdr type) (maybe-eval l) '*))
		(h (caddr type))
		(hn (if (cddr type) (maybe-eval h) '*)))
	 (if (and (eq l ln) (eq h hn)) type `(,(car type) ,ln ,hn))))
	((eq (car type) 'complex)
	 (let* ((z (cadr type))
		(zn (if (cdr type) (maybe-eval z) 'real))
		(zn (if (eq zn '*) 'real zn))
		(zn (normalize-type-int zn ar)))
	   (cond ((member (car zn) '(and or not)) (distribute-complex zn))
		 ((and (not (cddr type)) (eq z zn)) type)
		 (`(,(car type) ,zn)))))
	((eq (car type) 'array)
	 (let* ((tp (cadr type))
		(tpn (if (cdr type) (maybe-eval tp) '*))
		(tpn (if ar (upgraded-array-element-type tpn) tpn))
		(dm (caddr type))
		(dmn (if (cddr type) (maybe-eval dm) '*))
		(dmn (or dmn 0)))
	   (if (and (not (cdddr type)) (eq tp tpn) (eq dm dmn)) type `(,(car type) ,tpn ,dmn))))
	((eq (car type) 'member) type)
	((eq (car type) 'cons)
	 (let* ((def '(t))
		(car (cadr type))
		(carn (if (cdr type) (maybe-eval car) def))
		(carn (if (eq carn '*) def carn))
		(carn (if (eq carn def) carn (normalize-type-int carn ar)))
		(cdr (caddr type))
		(cdrn (if (cddr type) (maybe-eval cdr) def))
		(cdrn (if (eq cdrn '*) def cdrn))
		(cdrn (if (eq cdrn def) cdrn (normalize-type-int cdrn ar))))
	   (if (and (not (cdddr type)) (eq car carn) (eq cdr cdrn)) type `(,(car type) ,carn ,cdrn))))
	((setq tem (coerce-to-standard-class (car type))) (if (eq (car type) tem) type `(,tem ,@(cdr type))))
	((classp (car type)) (normalize-type-int `(,(class-name (car type)) ,@(cdr type)) ar))
	((and (not (cdr type)) (member (car type) +singleton-types+)) type)
        ((and (eq (car type) 'satisfies) 
	      (setq tem (get (cadr type) 'predicate-type)))
	 (normalize-type-int tem ar))
	((let* ((dt (and (symbolp (car type)) 
			 (get (car type) 'deftype-definition)))
		(rr (if (member 'load-time-value (cdr type) :key (lambda (x) (when (consp x) (car x))))
			(mapcar (lambda (x) (if (and (consp x) (eq (car x) 'load-time-value)) (eval (cadr x)) x))
				(cdr type))
		      (cdr type)))
		(nt (and dt (or (dt-apply dt rr) '(nil)))))
	   (when (and nt (not (equal type nt)))
	     (normalize-type-int nt ar))))
	((member (car type) '(and or not))
	 (let ((type `(,(car type) ,@(mapcar (lambda (x) (normalize-type-int x ar)) (cdr type)))))
	   (if (cdr type)
	       type
	     (case (car type) (and '(t)) (or '(nil)) (not (error "Bad type~%"))))))
	((member (car type) '(type-min type-max)) `(,(car type) ,(normalize-type-int (cadr type) ar)))
	(type)))

(defun distribute-complex (type)
  (cond ((atom type) type)
	((consp (car type)) (cons (distribute-complex (car type)) (distribute-complex (cdr type))))
	((member (car type) '(and or not)) (cons (car type) (distribute-complex (cdr type))))
	(`(complex ,type))))


(defvar *tp-mod* 0)
(eval-when (compile) (proclaim '(type (integer -1 1) *tp-mod*)))

(defun tp-mod (x d)
  (unless (or (not (ntp-ukn x)) (/= (abs *tp-mod*) 1))
    (if d (setf (ntp-tps x) nil (ntp-def x) (= *tp-mod* 1) (ntp-ukn x) nil)
      (setq x (if (= *tp-mod* 1) +tp-t+ +tp-nil+))))
  x)

(defun nprocess-type (type)
  (cond	
   ((eq (car type) 'type-min) (let ((*tp-mod* -1)) (nprocess-type (cadr type))))
   ((eq (car type) 'type-max) (let ((*tp-mod*  1)) (nprocess-type (cadr type))))
   ((eq (car type) 'and)  (reduce 'ntp-and (mapcar (lambda (x) (nprocess-type x)) (cdr type))))
   ((eq (car type) 'or)   (reduce 'ntp-or (mapcar (lambda (x) (nprocess-type x)) (cdr type))))
   ((eq (car type) 'not)  (ntp-not (nprocess-type (cadr type))))
   ((ntp-load type))))

(defun ntp-and (&rest xy)
  (when xy
    (let ((x (tp-mod (car xy) t)) (y (tp-mod (cadr xy) nil)))
      (dolist (l (ntp-tps x))
	(let ((op (cdr (assoc (car l) +kindom-logic-ops-alist+)))
	      (ny (assoc (car l) (ntp-tps y))))
	  (when (or ny (not (ntp-def y)))
	    (funcall op 'and l ny))))
      (dolist (l (ntp-tps y))
	(when (and (ntp-def x) (not (assoc (car l) (ntp-tps x))))
	  (ntp-ld x l)))
      (setf (ntp-def x) (and (ntp-def x) (ntp-def y)))
      (setf (ntp-ukn x) (or  (ntp-ukn x) (ntp-ukn y)))
      (ntp-clean x)
      x)))

(defun ntp-or (&rest xy)
  (when xy
    (let ((x (tp-mod (car xy) t)) (y (tp-mod (cadr xy) nil)))
      (dolist (l (ntp-tps x))
	(let* ((op (cdr (assoc (car l) +kindom-logic-ops-alist+)))
	      (ny (assoc (car l) (ntp-tps y)))
	      (ny (or ny (when (ntp-def y) (let ((z `(,(car l) nil))) (funcall op 'not z nil) z)))))
	  (when ny
	    (funcall op 'or l ny))))
      (dolist (l (ntp-tps y))
	(unless (or (ntp-def x) (assoc (car l) (ntp-tps x)))
	  (ntp-ld x l)))
      (setf (ntp-def x) (or (ntp-def x) (ntp-def y)))
      (setf (ntp-ukn x) (or (ntp-ukn x) (ntp-ukn y)))
      (ntp-clean x)
      x)))

(defun ntp-not (x)
  (dolist (l (ntp-tps x))
    (funcall (cdr (assoc (car l) +kindom-logic-ops-alist+)) 'not l nil))
  (setf (ntp-def x) (negate (ntp-def x)))
  (ntp-clean x)
  x)

(defun ntp-clean (x) ;; FIXME same for t and (ntp-def x)
 (when (and (rassoc nil (ntp-tps x) :key 'car) (not (ntp-def x)))
    (setf (ntp-tps x) (lremove-if (lambda (x) (not (cadr x))) (ntp-tps x)))))

(defun ntp-load (type &aux tem)
  (let ((ntp (make-ntp)))
    (cond ((eq (car type) t) (ntp-not ntp))
	  ((setq tem (cdr (assoc (car type) +kindom-load-ops-alist+)))
	   (funcall tem ntp type))
	  ((setq tem (coerce-to-standard-class (car type)))
	   (ntp-ld ntp `(standard-object ,tem)))
	  ((and (symbolp (car type)) (setq tem (get (car type) 's-data)))
	   (ntp-ld ntp `(structure ,tem)))
	  ((eq (car type) 'member)
	   (let ((els (cdr type)))
	     (dolist (l +known-types+)
	       (let ((z (lremove-if-not (lambda (x) (typep-int x l)) els)))
		 (when z
		   (setq els (set-difference els z))
		   (let* ((z (cond ((member l +range-types+)
				    (reduce 'range-or (mapcar (lambda (x) (number-range-fixup `((,x . ,x)) l)) z)))
				   ((and (consp l) (eq (car l) 'complex))
				    (cons
				     (reduce 'range-or (mapcar (lambda (x) (let ((q (realpart x))) 
									     (number-range-fixup `((,q . ,q)) (cadr l)))) z))
				     (reduce 'range-or (mapcar (lambda (x) (let ((q (imagpart x))) 
									     (number-range-fixup `((,q . ,q)) (cadr l)))) z))))
				   (`(member ,@z))))
			  (lst (and (consp l) (if (eq (car l) 'array) +array-type-alist+ +complex-type-alist+)))
			  (z (and z `(,(if lst (cdr (assoc (cadr l) lst)) l) ,z))))
		     (ntp-ld ntp z)))))
	     (let ((z (lremove-if-not (lambda (x) (typep-int x 'complex)) els)))
	       (when z
		 (setq els (set-difference els z))
		 (dolist (el z)
		   (let* ((rt (car (member (realpart el) +range-types+ :test 'typep-int)))
			  (it (car (member (imagpart el) +range-types+ :test 'typep-int)))
			  (zr (let ((q (realpart el)))  (number-range-fixup `((,q . ,q)) rt)))
			  (zi (let ((q (imagpart el)))  (number-range-fixup `((,q . ,q)) it))))
		     (ntp-ld ntp `(,(cdr (assoc rt +complex-type-alist+)) (,zr . nil)))
		     (ntp-ld ntp `(,(cdr (assoc it +complex-type-alist+)) (nil . ,zi)))))))
	     (when els (let ((ntp (ntp-not ntp))) (setf (ntp-ukn ntp) t)))))
	  ((car type) (let ((ntp (ntp-not ntp))) (setf (ntp-ukn ntp) t)))) ;(format t  "not processing type ~a~%" type)
    ntp))


;; RANGE-TYPES

(defun range-load (ntp type)
  (let* ((z `((,(cadr type) . ,(caddr type))))
	 (z (number-range-fixup z (car type))))
    (ntp-ld ntp (let ((z `(,(car type) ,z))) z))))

(defun range-op (op x y)
  (case op
	(and (setf (cadr x) (range-and (cadr x) (cadr y))))
	(or (setf (cadr x) (range-or (cadr x) (cadr y))))
	(not (setf (cadr x) (range-not (cadr x))))))


(defun range-and (x y &optional res)
  (cond ((or (not x) (not y)) (nreverse res))
	((elgt (car y) (car x)) (range-and (cdr x) y res))
	((elgt (car x) (car y)) (range-and x (cdr y) res))
	((let ((z (elin (cdar y) (cdar x) '<)))
	   (range-and (if (equal z (cdar x)) (cdr x) x) (if (equal z (cdar y)) (cdr y) y) 
		    (cons (cons (elin (caar x) (caar y) '>) z) res))))))

;;FIXME handle cleanups here and in and
(defun range-or (x y &optional res)
  (cond ((and (not x) (not y)) (nreverse res))
	((not x) (range-or x (cdr y) (maybe-or-push (car y) res)))
	((not y) (range-or (cdr x) y (maybe-or-push (car x) res)))
	((elgt (car y) (car x)) (range-or (cdr x) y (maybe-or-push (car x) res)))
	((elgt (car x) (car y)) (range-or x (cdr y) (maybe-or-push (car y) res)))
	((range-or (cdr x) (cdr y)
		    (maybe-or-push (cons (elout (caar x) (caar y) '<) (elout (cdar y) (cdar x) '>)) res)))))

(defun maybe-or-push (x res)
  (cond ((not res) (list x))
	((elgt x (car res)) (cons x res))
	((cons (cons (elout (caar res) (car x) '<) (elout (cdr x) (cdar res) '>)) (cdr res)))))

(defun range-not (x &optional res (last '* lastp))
  (cond ((not x) (nreverse (if (and lastp (eq last '*)) res (cons (cons (elcomp last) '*) res))))
	((range-not (cdr x) (if (eq (caar x) last) res (cons (cons (elcomp last) (elcomp (caar x))) res)) (cdar x)))))

(defun elgt (x y)
  (cond ((or (eq (car x) '*) (eq (cdr y) '*)) nil)
	((and (integerp (car x)) (integerp (cdr y))) (> (car x) (1+ (cdr y))))
	((and (integerp (range-num (car x))) 
	      (integerp (range-num (cdr y)))) (>= (range-num (car x)) (1+ (range-num (cdr y)))))
	((and (numberp (car x)) (numberp (cdr y))) (> (car x) (cdr y)))
	((>= (range-num (car x)) (range-num (cdr y))))))

(defun elin (x y op)
  (cond ((eq x '*) y)
	((eq y '*) x)
	((= (range-num x) (range-num y)) (if (atom x) y x))
	((funcall op (range-num x) (range-num y)) x)
	(y)))

(defun elout (x y op)
  (cond ((eq x '*) x)
	((eq y '*) y)
	((= (range-num x) (range-num y)) (if (atom x) x y))
	((funcall op (range-num x) (range-num y)) x)
	(y)))


(defun imod (x p)
  (if (eq x '*) x
    (let* ((e (atom x))
	   (x (if e x (car x)))
	   (cx (if (= p 1) (ceiling x) (floor x))))
      (cond ((/= cx x) cx)
	    (e cx)
	    ((+ cx p))))))
  
(defun integer-range-fixup (x &optional res)
  (cond ((not x) (lremove-if (lambda (x) (and (realp (car x)) (realp (cdr x)) (> (car x) (cdr x)))) (nreverse res)))
	((integer-range-fixup (cdr x) 
			      (cons (cons (imod (caar x) 1) (imod (cdar x) -1)) res)))))

(defun number-range-fixup (x tp)
  (if (eq tp 'integer)
      (integer-range-fixup x)
    (lremove-if (lambda (x) (let ((a (car x)) (d (cdr x))) 
			     (let ((na (if (atom a) a (car a))) (nd (if (atom d) d (car d))))
			       (and (not (eq na '*)) (not (eq nd '*))
				    (= na nd)
				    (or (listp a) (listp d)))))) x)))


(defun range-recon (x)
  (let ((z (mapcar (lambda (y) `(,(car x) ,(car y) ,(cdr y))) (number-range-fixup (cadr x) (car x)))))
    (if (cdr z) `(or ,@z) (car z))))

;; COMPLEX

(defun complex-load (ntp type)
  (let* ((z `((,(cadr (cadr type)) . ,(caddr (cadr type)))))
	 (z (number-range-fixup z (car type))))
    (ntp-ld ntp `(,(cdr (assoc (car (cadr type)) +complex-type-alist+)) (,z . ,z)))))

(defun complex-op (op x y)
  (let ((z
	 (case op
	       (and (cons (range-and (caadr x) (caadr y)) (range-and (cdadr x) (cdadr y))))
	       (or (cons (range-or (caadr x) (caadr y)) (range-or (cdadr x) (cdadr y))))
	       (not (cons (range-not (caadr x) (caadr y)) (range-not (cdadr x) (cdadr y)))))))
    (setf (cadr x) (and (car z) (cdr z) z))))

(defun complex-recon (x)
  (let* ((tp (car (rassoc (car x) +complex-type-alist+)))
	 (z (range-or (caadr x) (cdadr x)))
	 (z (number-range-fixup z tp))
	 (z (mapcar (lambda (y) `(complex (,tp ,(car y) ,(cdr y)))) z)))
    (if (cdr z) `(or ,@z) (car z))))


;; SINGLETON-TYPES

(defun single-load (ntp type)
  (ntp-ld ntp `(,(car type) t)))

(defun single-atm (x)
  (cond ((or (eq x t) (not x)))
	((and (consp x) (eq (car x) 'member)))
	((and (consp x) (eq (car x) 'not)) (single-atm (cadr x)))))

(defun ordered-intersection-eq (l1 l2)
  (let (z zt)
    (do ((l l1 (cdr l))) ((not l))
      (when (memq (car l) l2)
	(setf zt (let ((p (cons (car l) nil))) (if zt (cdr (rplacd zt p)) (setf z p))))))
    z))

(defun ordered-intersection (l1 l2)
  (let (z zt)
    (do ((l l1 (cdr l))) ((not l))
      (when (member (car l) l2)
	(setf zt (let ((p (cons (car l) nil))) (if zt (cdr (rplacd zt p)) (setf z p))))))
    z))

(defun single^ (x y)
  (cond ((eq x t) y)
	((eq y t) x)
	((and x y) (let ((z (ordered-intersection (cdr x) (cdr y)))) (when z `(member ,@z))))))

(defun single-op (op x y)
  (setf (cadr x)
	(case op
	      ((and or) (sigalg-atom-op op (cadr x) (cadr y) 'single^ 'single-atm))
	      (not (negate (cadr x))))))

(defun single-recon (x)
  (cond ((atom (cadr x)) (car x))
	((cadr x))))


;; ARRAY TYPES

(defun array-load (ntp type)
  (let* ((z (cadr type))
	 (z (if (eq z '*) z (car (member z +array-types-with-nil-for-ansi+)))))
    (unless (or z (not (cadr type))) (error "Bad array type ~a~%" (cadr type)))
    (let* ((dim (caddr type))
	   (dim (cond ((eq dim '*) t)
		      ((integerp dim) (if (= 0 dim) dim (make-list dim :initial-element t)))
		      ((listp dim) (let (r) (dolist (d dim (nreverse r)) (push (if (eq d '*) t d) r)))))))
      (if (eq z '*)
	  (dolist (l +array-type-alist+)
	    (ntp-ld ntp `(,(cdr l) ,(when z dim))))
	(ntp-ld ntp `(,(cdr (assoc z +array-type-alist+)) ,dim))))))
  
(defun array-atm (x)
  (cond ((atom x))
	((eq (car x) 'not) (array-atm (cadr x)))
	((integerp (car x)))
	((eq (car x) 'member))
	((eq (car x) t))))

(defun array^ (x y)
  (cond ((not (and x y)) nil)
	((eq y t) x)
	((eq x t) y)
	((and (integerp x) (integerp y)) (when (= x y) x))
	((integerp x) (when (and (consp y) (= x (length y))) y))
	((integerp y) (array^ y x))
	((and (consp x) (eq (car x) 'member))
	 (let ((y (cond ((and (consp y) (eq (car y) 'member)) y)
			((eq y t) `(array * *))
			((and (consp y) (member t y)) `(array * ,(substitute '* t y)))
			(`(array * ,y)))))
	   (let ((q (lremove-if-not (lambda (z) (typep-int z y)) (cdr x))))
	   (when q `(member ,@q)))))
	((and (consp y) (eq (car y) 'member)) (array^ y x))
	((/= (length x) (length y)) nil)
	((mapcar 'array^ x y))))

(defun array-op (op x y)
  (setf (cadr x)
	(case op
	      ((and or) (sigalg-op op (cadr x) (cadr y) 'array^ 'array-atm))
	      (not (negate (cadr x))))))

(defun array-recon (x) 
  `(array ,(car (rassoc (car x) +array-type-alist+)) ,(cond ((eq (cadr x) t) '*) ((atom (cadr x)) (cadr x)) ((mapcar (lambda (x) (if (eq x t) '* x)) (cadr x))))))

;; STRUCTURES

(defun structure-load (ntp type) (single-load ntp type));;FIXME macro

(defun structure-atm (x) (standard-atm x))

(defun structure^ (x y)
  (cond ((not (and x y)) nil)
	((eq x t) y)
	((eq y t) x)
	((and (consp x) (eq (car x) 'member))
	 (let ((q (lremove-if-not (lambda (z) (typep-int z y)) (cdr x))))
	   (when q `(member ,@q))))
	((and (consp y) (eq (car y) 'member)) (structure^ y x))
	((do ((z x (s-data-includes z))) ((or (not z) (eq z y)) (and z x))))
	((do ((z y (s-data-includes z))) ((or (not z) (eq z x)) (and z y))))))

(defun structure-op (op x y)
  (setf (cadr x)
	(case op
	      ((and or) (sigalg-op op (cadr x) (cadr y) 'structure^ 'structure-atm))
	      (not (negate (cadr x))))))

(defun structure-recon (x) (cadr x))

;; STANDARD-OBJECTS

(defun standard-load (ntp type) (single-load ntp type))

(defun standard-atm (x)
  (cond ((atom x))
	((eq (car x) 'not) (standard-atm (cadr x)))
	((eq (car x) 'member))))

(defun standard^ (x y)
  (cond ((not (and x y)) nil)
	((eq x t) y)
	((eq y t) x)
	((and (consp x) (eq (car x) 'member))
	 (let ((q (lremove-if-not (lambda (z) (typep-int z y)) (cdr x))))
	   (when q `(member ,@q))))
	((and (consp y) (eq (car y) 'member)) (standard^ y x))
	((member y (class-precedence-list x)) x)
	((member x (class-precedence-list y)) y)
	((reduce (lambda (&rest xy) (when xy (standard^ (car xy) (cadr xy))))
		 (ordered-intersection-eq (class-direct-subclasses x) (class-direct-subclasses y))))))
;	((reduce (lambda (&rest xy) (when xy (standard^ (car xy) (cadr xy))))
;		 (intersection (class-direct-subclasses x) (class-direct-subclasses y)
;				 :test 'standard^)))))

(defun standard-op (op x y)
  (setf (cadr x)
	(case op
	      ((and or) (sigalg-op op (cadr x) (cadr y) 'standard^ 'standard-atm))
	      (not (negate (cadr x))))))

(defun standard-recon (x) (cadr x))

;; CONS

(defun cons-load (ntp type)
  (ntp-ld ntp `(cons (,(nprocess-type (cadr type)) . ,(nprocess-type (caddr type))))))

(defun cons-atm (x)
  (cond ((not x))
	((eq x t))
	((and (consp x) 
	      (consp (car x)) (listp (caar x)) (= (length (car x)) 3)
	      (consp (cdr x)) (listp (cadr x)) (= (length (cdr x)) 3)))))

(defun cons^ (x y)
  (cond ((eq x t) y)
	((eq y t) x)
	((and x y)
	 (let ((ax (copy-tree (car x)))
	       (dx (copy-tree (cdr x))))
	   (cons-to-nil
	    (cons (ntp-and ax (car y))
		  (ntp-and dx (cdr y))))))))

(defun cons-op (op x y)
  (setf (cadr x)
	(case op
	      ((and or) (cons-to-nil (sigalg-op op (cadr x) (cadr y) 'cons^ 'cons-atm)))
	      (not
	       (cond ((not (cadr x)))
		     ((eq (cadr x) t) nil)
		     ((cons-atm (cadr x))
		      (let ((car (ntp-to-nil (ntp-not (copy-tree (caadr x)))));FIXME
			    (cdr (ntp-to-nil (ntp-not (copy-tree (cdadr x))))))
			(cond ((and car cdr) 
			       (cons-to-nil 
				(sigalg-op 'or `(,car . ,(nprocess-type '(t))) 
					   `(,(nprocess-type '(t)) . ,cdr) 'cons^ 'cons-atm)))
			      (car (cons car (nprocess-type '(t))))
			      (cdr (cons (nprocess-type '(t)) cdr)))))
		     (t (reduce (lambda (&rest xy) 
				 (when xy 
				   (cons-to-nil
				    (sigalg-op 
				     (if (eq (caadr x) 'or) 'and 'or) (car xy) (cadr xy) 'cons^ 'cons-atm))))
				(mapcar (lambda (x) (cons-op 'not `(cons ,x) nil)) (cdadr x)))) nil)))))

(defun cons-to-nil (cntp)
  (let* ((at (or (atom cntp) (not (cons-atm cntp))))
	 (car (or at (atom (car cntp)) (ntp-to-nil (car cntp))))
	 (cdr (or at (atom (cdr cntp)) (ntp-to-nil (cdr cntp)))))
    (and car cdr cntp)))

(defun ntp-to-nil (ntp)
  (when (or (ntp-tps ntp) (ntp-def ntp))
    ntp))

(defun cons-recon (x)
  (cond ((eq t (cadr x)) `(cons t t))
	((atom (cadr x)) nil)
	((cons-atm (cadr x))
	 (let ((car (nreconstruct-type-int (copy-tree (caadr x))));FIXME
	       (cdr (nreconstruct-type-int (copy-tree (cdadr x)))))
	   (and car cdr `(cons ,car ,cdr))))
	((eq (caadr x) 'or)
	 (let ((z (lremove-if 'not (mapcar (lambda (x) (cons-recon `(cons ,x))) (cdadr x)))))
	   (if (cdr z) `(or ,@z) (car z))))
	((error "Bad cons recon~%"))))


;; GENERIC SIGNA ALGEBRA OPERATIONS

(defun sigalg-op (op x y ^ atm)
  (let ((ax (funcall atm x)))
    (cond ((and (not ax) (eq op (car x)))
	   (sigalg-op op (cadr x) (clean-tp op atm (cddr x) (if (funcall atm y) (list y) y)) ^ atm))
	  ((and (not ax) (eq 'not (car x)))
	   (negate (sigalg-op (if (eq op 'or) 'and 'or) (negate x) (negate y) ^ atm)))
	  ((not ax);FIXME reduce here?
	   (clean-tp 
	    (if (eq op 'or) 'and 'or) 
	    atm 
	    (mapcar (lambda (w) (sigalg-op op w y ^ atm)) (cdr x))))
	  ((funcall atm y) (sigalg-atom-op op x y ^ atm))
	  ((eq op (car y))
	   (let* ((y (if (cddr y) (sigalg-op op (cadr y) `(,op ,@(cddr y)) ^ atm) y))
		  (y (if (or (atom y) (not (eq (car y) op))) `(,op ,y) y))
		  (q (mapcar (lambda (z) (sigalg-op op x z ^ atm)) (cdr y))))
	     (let ((z 
		    (clean-tp 
		     op atm
		     (do ((y (cdr y) (cdr y)) (q q (cdr q))) 
			 ((or (not y) (not q) (equal (car y) (car q))) (if (and y q) (eq op 'and) x)))
			;		   (if (some 'equal (cdr y) q) (eq op 'and) x)
		     (mapcar (lambda (x y) (if (funcall atm y) y x))
			     (cdr y) q))))
	       (if (funcall atm z) z 
		 (let ((ny (clean-tp op atm (cddr z)))) 
		   (if (and (equal x (cadr z)) (equal ny y)) 
		       z 
		     (sigalg-op op (cadr z) ny ^ atm)))))))
	  ((eq 'not (car y))
	   (negate (sigalg-op (if (eq op 'or) 'and 'or) (negate x) (negate y) ^ atm)))
	  (t
	    (let ((z (mapcar (lambda (w) (sigalg-op op x w ^ atm)) (cdr y))))
	      (reduce (lambda (&rest xy) (when xy (sigalg-op (if (eq op 'or) 'and 'or) (car xy) (cadr xy) ^ atm))) z))))))


(defun sigalg-atom-op (op ox oy ^ atm)
  (let* ((cx (and (consp ox) (eq (car ox) 'not)))
	 (x (if cx (cadr ox) ox))
	 (cy (and (consp oy) (eq (car oy) 'not)))
	 (y (if cy (cadr oy) oy))
	 (^xy (funcall ^ x y))
	 (vxy (memberv x y))
	 (-xy (if vxy (member- x y) x))
	 (-yx (if vxy (member- y x) y))
	 (<xy (equal ^xy x))
	 (<yx (equal ^xy y))
	 (opor (case op (or t) (and nil) (otherwise (error "Bad op~%")))))
    (cond ((not (or cx cy)) 
	   (cond (<xy (if opor y x))
		 (<yx (if opor x y))
		 (opor (or vxy (clean-or atm `(or ,x ,y))))
		 (^xy)))
	  ((and cx cy)
	   (cond (<xy `(not ,(if opor x y)))
		 (<yx `(not ,(if opor y x)))
		 (opor (negate ^xy))
		 ((negate (sigalg-atom-op 'or x y ^ atm)))))
	  (cx (sigalg-atom-op op oy ox ^ atm))
	  ((and <xy <yx) opor)
	  (<xy (when opor 
		 (if (equal -yx y)
		     (clean-or atm `(or ,x ,(negate y)))
		   (negate -yx))))
	  (<yx (if opor t (if (equal x -xy) (clean-and atm `(and ,x ,(negate y))) -xy)))
	  (opor (if (funcall ^ ^xy -yx) (clean-or atm `(or ,^xy ,(negate -yx))) (negate -yx)))
	  ((clean-and atm (if (funcall ^ -xy ^xy) `(and ,-xy ,(negate ^xy)) -xy))))))


(defun memberv (x y)
  (and (consp x) (consp y)
       (eq (car x) 'member) (eq (car y) 'member)
       (let ((z (union (cdr x) (cdr y))))
	 (and z `(member ,@z)))))

(defun member- (x y)
  (and (consp x) (consp y)
       (eq (car x) 'member) (eq (car y) 'member)
       (let ((z (set-difference (cdr x) (cdr y))))
	 (and z `(member ,@z)))))


(defun clean-or (atm lst)
  (if (funcall atm lst) lst
    (or 
     (car (member t lst))
     (let ((nl (lremove-if 'not (remove-duplicates (cdr lst) :test 'equal))))
       (if (cdr nl) `(or ,@nl) (car nl))))))

(defun clean-and (atm lst)
  (if (funcall atm lst) lst
    (unless (member nil lst)
      (let ((nl (lremove-if (lambda (z) (eq z t)) (remove-duplicates (cdr lst) :test 'equal))))
	(if (cdr nl) `(and ,@nl) (or (car nl) t))))))


(defun clean-tp (op atm x &optional y)
  (let ((cf (case op (or 'clean-or) (and 'clean-and) (otherwise (error "Bad op~%"))))
	(x (if (funcall atm x) (list x) x)))
    (let ((z (cond ((eq (car y) op) (funcall cf  atm `(,op ,@x ,@(cdr y))))
		   ((member (car y) '(and not or)) `(,op ,@x ,y))
		   ((funcall cf atm  `(,op ,@x ,@y))))))
      z)))
    
(defmacro negate (lst)
  (let ((l (gensym)))
    `(let ((,l ,lst))
       (cond ((not ,l))
	     ((eq ,l t) nil)
	     ((and (consp ,l) (eq (car ,l) 'not)) (cadr ,l))
	     (`(not ,,l))))))
  


(defun prune-type (z q i w) ;FIXME optional tail recursion
  (declare (seqind i))
  (cond ((= i (length +array-type-alist+))
	 (setf (cadar q) '*)
	 (ldelete-if (lambda (y) (unless (eq y (car q)) (and (consp y) (eq (car y) 'array)))) z))
	((not w) z)
	((or (atom (car w)) (not (eq (caar w) 'array))) (prune-type z q i (cdr w)))
	((not q) (prune-type z w (1+ i) (cdr w)))
	((equal (caddar w) (caddar q)) (prune-type z q (1+ i) (cdr w)))
	(z)))

(defun nreconstruct-type-int (x)
  (if (ntp-ukn x) t
    (if (ntp-def x)
	(let ((z (nreconstruct-type-int (ntp-not x))))
	  (or (not z) `(not ,z)))
      (let* ((z (lremove-if 
		 'not 
		 (mapcar (lambda (x)
			   (let ((op (cdr (assoc (car x) +kindom-recon-ops-alist+))))
			     (funcall op x))) (ntp-tps x))))
	     (z (prune-type z nil 0 z)))
	(if (cdr z) `(or ,@z) (car z))))))



(defun nreconstruct-type (x)
  (list (nreconstruct-type-int x) (ntp-ukn x)))


;; CLASS HACKS



(defun classp (object) (declare (ignore object)) nil)
(defun class-precedence-list (object) (declare (ignore object)) nil)
(defun find-class (object &optional errorp environment) (declare (ignore object errorp environment))nil)
(defun class-name (class) (declare (ignore class)) nil)
(defun class-of (object) (declare (ignore object)) nil)
(defun class-direct-subclasses (object) (declare (ignore object)) nil)

(defun is-standard-class-symbol (sym) 
  (let* ((z (get sym 'deftype-definition))
	 (z (and z (not (caddr (get sym 'deftype-form))) (funcall z)))
	 (z (and (consp z) (eq (car z) 'satisfies) (cadr z))))
    (and z (not (member (symbol-package z) '(lisp si compiler) :key 'find-package)))))

(defun find-standard-class (object)
  (and (symbolp object)
       (is-standard-class-symbol object)
       (find-class object nil)))

(defun coerce-to-standard-class (object)
  (cond ((and (classp object)
	      (is-standard-class-symbol (class-name object)))
	 object)
	((find-standard-class object))))







;; set by unixport/init_kcl.lsp
;; warn if a file was comopiled in another version
(defvar *gcl-extra-version* nil)
(defvar *gcl-minor-version* nil)
(defvar *gcl-major-version* nil)

(defun warn-version (majvers minvers extvers)
  (and *gcl-major-version* *gcl-minor-version* *gcl-extra-version*
       (or (not (eql extvers *gcl-extra-version*))
	   (not (eql minvers *gcl-minor-version*))
	   (not (eql majvers *gcl-major-version*)))
       *load-verbose*
       (format t "[compiled in GCL ~a.~a.~a] " majvers minvers extvers)))



