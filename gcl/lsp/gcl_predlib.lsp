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

(export '(lisp::upgraded-complex-part-type 
	  lisp::deftype lisp::typep lisp::subtypep 
	  lisp::coerce lisp::upgraded-array-element-type) 'lisp)

(eval-when (compile)
(proclaim '(optimize (safety 2) (space 3)))
)

;;; DEFTYPE macro.
(defmacro deftype (name lambda-list &rest body)
  ;; Replace undefaultized optional parameter X by (X '*).
  (do ((l lambda-list (cdr l))
       (m nil (cons (car l) m)))
      ((null l))
    (when (member (car l) lambda-list-keywords)
	  (unless (eq (car l) '&optional) (return nil))
	  (setq m (cons '&optional m))
	  (setq l (cdr l))
	  (do ()
	      ((or (null l) (member (car l) lambda-list-keywords)))
	    (if (symbolp (car l))
		(setq m (cons (list (car l) ''*) m))
		(setq m (cons (car l) m)))
	    (setq l (cdr l)))
	  (setq lambda-list (nreconc m l))
	  (return nil)))
  `(eval-when (compile eval load)
	      (si:putprop ',name
			  '(deftype ,name ,lambda-list ,@body)
			  'deftype-form)
	      (si:putprop ',name
			  (if (null ',lambda-list)
			      (let ((tem (progn ,@body)))
				(lambda ,lambda-list tem))
			    (lambda ,lambda-list ,@body))
			  'deftype-definition)
	      (si:putprop ',name
			  ,(find-documentation body)
			  'type-documentation)
	      ',name))


;;; Some DEFTYPE definitions.
;(deftype fixnum ()
;  `(integer ,most-negative-fixnum ,most-positive-fixnum))
(deftype seqind ()
  `(integer 0 ,array-dimension-limit))
(deftype rnkind ()
  `(integer 0 ,array-rank-limit))
;(deftype non-negative-fixnum ()
;  `(integer 0 ,most-positive-fixnum))
;(deftype negative-fixnum ()
;  `(integer ,most-negative-fixnum -1))
;(deftype fixnum ()
;  `(integer ,most-negative-fixnum ,most-positive-fixnum))
(deftype bit () '(integer 0 1))
(deftype mod (n)
  `(integer 0 ,(1- n)))
(deftype non-negative-byte (&optional s)
  (if (eq s '*)
      `(integer * *)
      `(integer 0 ,(1- (expt 2 (1- s))))))
(deftype negative-byte (&optional s)
  (if (eq s '*)
      `(integer * *)
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


(deftype vector (&optional element-type size)
  `(array ,element-type (,size)))
(deftype string (&optional size)
  `(vector string-char ,size))
(deftype base-string (&optional size)
  `(vector base-char ,size))
(deftype bit-vector (&optional size)
  `(vector bit ,size))

(deftype simple-vector (&optional size)
  `(simple-array t (,size)))
(deftype simple-string (&optional size)
  `(simple-array string-char (,size)))
(deftype simple-base-string (&optional size)
  `(simple-array base-char (,size)))
(deftype simple-bit-vector (&optional size)
  `(simple-array bit (,size)))

(deftype function-identifier () `(satisfies si::function-identifierp))
(defun function-identifierp (tp)
  (or (symbolp tp)
      (and (consp tp)
	   (eq (car tp) 'setf)
	   (consp (cdr tp))
	   (symbolp (cadr tp))
	   (not (cddr tp)))))

(defun simple-array-p (x)
  (and (arrayp x)
       ;; should be (not (expressly-adjustable-p x))
       ;; since the following will always return T
       ;; (not (adjustable-array-p x))
       (not (array-has-fill-pointer-p x))
       (not (si:displaced-array-p x))))

(deftype list () `(or cons nil))
(deftype sequence () `(or list vector))
(deftype character () `(or base-char extended-char))
(deftype string-char () `(or base-char extended-char))
(deftype stream () `(or broadcast-stream concatenated-stream echo-stream
			file-stream string-stream synonym-stream two-way-stream))

(deftype bignum () `(and integer (not fixnum)))
(deftype rational (&optional (low '*) (high '*)) `(or (integer ,low ,high) (ratio ,low ,high)))
(deftype float (&optional (low '*) (high '*)) `(or (short-float ,low ,high) (long-float ,low ,high)))
(deftype single-float (&optional (low '*) (high '*)) `(long-float ,low ,high))
(deftype double-float (&optional (low '*) (high '*)) `(long-float ,low ,high))
(deftype real (&optional (low '*) (high '*)) `(or (rational ,low ,high) (float ,low ,high)))
(deftype number () `(or real complex))
;(deftype boolean () `(member t nil)) ;FIXME member types
(deftype atom () `(not cons))
(deftype function () `(or interpreted-function compiled-function))
(deftype symbol () `(or non-keyword-boolean-symbol null is-t keyword))
(deftype base-char () `(or standard-char non-standard-base-char))
;(deftype t () `(or atom cons))

(deftype integer (&optional (low '*) (high '*)) `(integer ,low ,high))
(deftype ratio (&optional (low '*) (high '*)) `(ratio ,low ,high))
(deftype short-float (&optional (low '*) (high '*)) `(short-float ,low ,high))
(deftype long-float (&optional (low '*) (high '*)) `(long-float ,low ,high))

(deftype array (&optional (et '*) (dims '*)) 
  `(array ,et ,(if (integerp dims) (make-list dims :initial-element '*) dims)))
(deftype simple-array (&optional (et '*) (dims '*)) 
  `(simple-array ,et ,(if (integerp dims) (make-list dims :initial-element '*)  dims)))

(defun upgraded-complex-part-type (type &optional environment) (declare (ignore environment)) type)

(deftype complex (&optional (ts 'real)) `(complex ,(if (eq ts '*) 'real ts)))
(deftype eql (x) `(member ,x))


(defconstant +singleton-types+ '(cons non-keyword-boolean-symbol is-t null keyword standard-char
				      non-standard-base-char extended-char 
				      package 
				      broadcast-stream concatenated-stream echo-stream file-stream string-stream
				      synonym-stream two-way-stream 
				      pathname readtable hash-table random-state structure 
				      interpreted-function compiled-function))

(defvar *singleton-types* '#.(reverse (let ((i -1)) (mapcar (lambda (x) `(,x . ,(ash 1 (incf i)))) +singleton-types+))))

(defmacro mbtp (x) `(and (consp ,x) (eq (car ,x) 'member)))

(defun singleton-tp-from-int (x)
  (let ((z (mapcar 'car (remove-if (lambda (z) (= 0 (logand x z))) *singleton-types* :key 'cdr))))
    (if (cdr z)
	`(or ,@z)
      z)))

(defun singleton-op (op x &optional y)
  (let ((x (if (integerp x) x (or (cdr (assoc x *singleton-types*)) (if x -1 0))))
	(y (if (integerp y) y (or (cdr (assoc y *singleton-types*)) (if y -1 0)))))
    (case op 
	  (and (logand x y))
	  (or (logior x y))
	  (not (lognot x)))))


;(defstruct tp
;  (nums (make-list 8) :type list)
;  single
;  array
;  struct
;  class)

(defconstant +range-types+ `(integer ratio short-float long-float))
(defconstant +array-types+ '(character bit signed-char unsigned-char signed-short unsigned-short 
				       fixnum short-float long-float t))

(defmacro make-tp () `(list (make-list ,#.(* 2 (length +range-types+))) 
			    nil
			    (make-list ,#.(length +array-types+))
			     nil nil))
(defmacro tp-nums (tp) `(first ,tp))
(defmacro tp-single (tp) `(second ,tp))
(defmacro tp-array (tp) `(third ,tp))
(defmacro tp-struct (tp) `(fourth ,tp))
(defmacro tp-class (tp) `(fifth ,tp))

(defun class< (x y)
  (cond ((and (consp x) (eq (car x) 'member)) (every (lambda (z) (typep z y)) (cdr x)))
	((and (consp y) (eq (car y) 'member)) nil)
	((let ((x (if (symbolp x) (find-class x nil) x))
	       (y (if (symbolp y) (find-class y nil) y)))
	   (or (not x) (and y (member y (class-precedence-list x))))))))

(defun struct< (x y)
  (cond ((and (consp x) (eq (car x) 'member)) (every (lambda (z) (typep z y)) (cdr x)))
	((and (consp y) (eq (car y) 'member)) nil)
	((or (not x) (eq y t)))
	((let ((x (and (symbolp x) (get x 's-data)))
	       (y (and (symbolp y) (get y 's-data))))
	   (and x y (do ((x x (s-data-includes x))) ((or (not x) (eq x y)) (eq x y))))))))


(defun op-from-inclusion (op ox oy < atm)
  (let* ((cx (and (consp ox) (eq (car ox) 'not)))
	 (x (if cx (cadr ox) ox))
	 (cy (and (consp oy) (eq (car oy) 'not)))
	 (y (if cy (cadr oy) oy))
	 (<xy (funcall < x y))
	 (<yx (funcall < y x))
	 (opor (case op (or t) (and nil) (otherwise (error "Bad op~%")))))
    (cond ((not (or cx cy)) 
	   (cond (<xy (if opor y x))
		 (<yx (if opor x y))
		 ((when opor (clean-or atm `(or ,x ,y))))))
	  ((and cx cy)
	   (cond (<xy `(not ,(if opor x y)))
		 (<yx `(not ,(if opor y x)))
		 ((if opor t (clean-and atm `(and (not ,x) (not ,y)))))))
	  (cx (op-from-inclusion op oy ox < atm))
	  ((cond ((and <xy <yx) opor)
		 (<xy (when opor (clean-or atm `(or ,x (not ,y)))))
		 (<yx (if opor t (clean-and atm `(and ,x (not ,y)))))
		 ((if opor `(not ,y) x)))))))

;(defun compound (x)
;  (cond ((atom x) nil)
;	((eq (car x) 'not) (compound (cadr x)))
;	((consp (car x)))
;	((member (car x) '(and or t nil)))))
;	
;(defmacro atomic-tp (x) `(not (compound ,x)))

(defun classatm (x)
  (cond ((atom x))
	((eq (car x) 'not) (classatm (cadr x)))
	((eq (car x) 'member))))

(defun structatm (x) (classatm x))
(defun dimatm (x)
  (cond ((atom x))
	((eq (car x) 'not) (dimatm (cadr x)))
	((integerp (car x)))
	((eq (car x) t))))

(defun clean-or (atm lst)
  (if (funcall atm lst) lst
    (or 
     (car (member t lst))
     (let ((nl (remove-if 'not (remove-duplicates (cdr lst) :test 'equal))))
       (if (cdr nl) `(or ,@nl) (car nl))))))

(defun clean-and (atm lst)
  (if (funcall atm lst) lst
    (unless (member nil lst)
      (let ((nl (remove-if (lambda (z) (eq z t)) (remove-duplicates (cdr lst) :test 'equal))))
	(if (cdr nl) `(and ,@nl) (or (car nl) t))))))

(defun repl-op (op x y < atm)
  (let ((z (inclusion-op op x y < atm)))
    (if (funcall atm z) z y)))

(defun clean-tp (op atm x &optional y)
  (let ((cf (case op (or 'clean-or) (and 'clean-and) (otherwise (error "Bad op~%"))))
	(x (if (funcall atm x) (list x) x))
	(y (if (funcall atm y) (list y) y)))
    (cond ((not (car y)) (funcall cf atm `(,op ,@x)))
	  ((eq (car y) op) (funcall cf  atm `(,op ,@x ,@(cdr y))))
	  ((member (car y) '(and not or)) `(,op ,@x ,y))
	  ((funcall cf atm  `(,op ,@x ,@y))))))
    
(defun clean-not (atm lst)
  (cond ((atom lst) lst)
	((and (eq (car lst) 'not) (consp (cadr lst)) (eq (caadr lst) 'not))
	 (clean-not atm (cadadr lst)))
	((eq (cadr lst) t) nil)
	((and (cdr lst) (not (cadr lst))))
	(lst)))
					     
(defun inclusion-op (op x y < atm)
  (cond ((and (not (funcall atm x)) (eq op (car x)))
	 (inclusion-op op (cadr x) (clean-tp op atm (cddr x) y) < atm))
	((and (not (funcall atm x)) (eq 'not (car x)))
	 (clean-not atm `(not ,(inclusion-op (if (eq op 'or) 'and 'or) (clean-not atm `(not ,x)) (clean-not atm `(not ,y)) < atm))))
	((not (funcall atm x))
	 (clean-tp (if (eq op 'or) 'and 'or) atm (mapcar (lambda (w) (inclusion-op op w y < atm)) (cdr x))))
	((funcall atm y) (op-from-inclusion op x y < atm))
	((eq op (car y))
	 (let ((z (clean-tp op atm (if (some (lambda (z) (equal z (inclusion-op op x z < atm))) (cdr y))
				   (eq op 'and) x)
			    (mapcar (lambda (z) (repl-op op x z < atm)) (cdr y)))))
	   (if (funcall atm z) z 
	     (let ((ny (clean-tp op atm (cddr z)))) 
	       (if (and (equal x (cadr z)) (equal ny y)) 
		   z 
		 (inclusion-op op (cadr z) ny < atm))))))
	((eq 'not (car y))
	 (clean-not atm `(not ,(inclusion-op (if (eq op 'or) 'and 'or) (clean-not atm `(not ,x)) (clean-not atm `(not ,y)) < atm))))
	((clean-tp (if (eq op 'or) 'and 'or) atm  (mapcar (lambda (w) (inclusion-op op x w < atm)) (cdr y))))))

;	((inclusion-op op y x <)))));

(defun andf (&rest args)
  (or (not args) (and (car args) (cadr args))))

(defun dim< (x y)
  (cond ((or (eq y t) (not x)))
	((or (eq x t) (not y)) nil)
	((integerp x) (if (integerp y) (= x y) (and (consp y) (= x (length y)) (every (lambda (z) (eq z t)) y))))
	((integerp y) (dim< x (make-list y :initial-element t)))
	((/= (length x) (length y)) nil)
	((every (lambda (z) (eq z t)) (mapcar 'dim< x y)))))

(defun array-op (op x &optional y) ;(declare (ignore op x y)) nil)
  (case op
	(not (mapcar (lambda (z) (clean-not 'dimatm `(not ,z))) x))
	(otherwise (mapcar (lambda (x y) (inclusion-op op x y 'dim< 'dimatm)) x y))))

(defun tp-and (&rest xy)
  (when xy
    (let ((x (car xy)) (y (cadr xy)))
      (when x
	(setf (tp-nums x) (mapcar 'range-and (tp-nums x) (tp-nums y)))
	(setf (tp-single x) (singleton-op 'and (tp-single x) (tp-single y)))
	(setf (tp-array x) (array-op 'and (tp-array x) (tp-array y)))
	(setf (tp-struct x) (inclusion-op 'and (tp-struct x) (tp-struct y) 'struct< 'structatm))
	(setf (tp-class x) (inclusion-op 'and (tp-class x) (tp-class y) 'class< 'classatm)))
      x)))

(defun tp-or (&rest xy)
  (when xy
    (let ((x (car xy)) (y (cadr xy)))
      (when x
	(setf (tp-nums x) (mapcar 'range-or (tp-nums x) (tp-nums y)))
	(setf (tp-single x) (singleton-op 'or (tp-single x) (tp-single y)))
	(setf (tp-array x) (array-op 'or (tp-array x) (tp-array y)))
	(setf (tp-struct x) (inclusion-op 'or (tp-struct x) (tp-struct y) 'struct< 'structatm))
	(setf (tp-class x) (inclusion-op 'or (tp-class x) (tp-class y) 'class< 'classatm)))
      x)))

(defun tp-not (x)
  (when x
    (setf (tp-nums x) (mapcar 'range-not (tp-nums x)))
    (setf (tp-single x) (singleton-op 'not (tp-single x)))
    (setf (tp-array x) (array-op 'not (tp-array x)))
    (setf (tp-struct x) (clean-not 'structatm `(not ,(tp-struct x))));FIXME
    (setf (tp-class x) (clean-not 'classatm `(not ,(tp-class x)))))
  x)

(defun tp-load (type shift &aux tem)
  (let ((tp (make-tp)))
    (cond ((eq (car type) t) (tp-not tp))
	  ((setq tem (position (car type) +range-types+))
	   (setf (nth (+ shift tem) (tp-nums tp)) 
		 (let ((z `((,(cadr type) . ,(caddr type)))))
		   (number-range-fixup z (nth tem +range-types+)))))
	  ((member (car type) +singleton-types+)
	   (setf (tp-single tp) (car type)))
	  ((member (car type) '(array simple-array))
	   (let ((z (position (if (eq (cadr type) 'string-char) 'character (cadr type)) +array-types+)));FIXME
	     (unless (or z (eq (cadr type) '*)) (error "Bad array type ~a~%" (cadr type)))
	     (let* ((dim (caddr type))
		    (dim (if (eq dim '*) t dim))
		    (dim (if (listp dim) (mapcar (lambda (z) (or (eq '* z)  z)) dim) dim)))
	       (if z
		   (setf (nth z (tp-array tp)) dim)
		 (setf (tp-array tp) (mapcar (lambda (z) (declare (ignore z)) dim) (tp-array tp)))))))
	  ((setq tem (or (and (symbolp (car type)) (find-class (car type) nil)) (when (classp (car type)) (car type))))
	   (setf (tp-class tp) tem))
	  ((and (symbolp (car type)) (setq tem (get (car type) 'si::s-data)))
;	   (setf (tp-struct tp) tem))FIXME
	   (setf (tp-struct tp) (car type)))
	  ((eq (car type) 'member)
	   (dolist (l (cdr type))
	     (cond ((setq tem (position-if (lambda (x) (typep l x)) +range-types+))
		    (setf (nth tem (tp-nums tp))
			  (range-or (let ((z `((,l . ,l))))
				      (number-range-fixup z (nth tem +range-types+)))
				    (nth tem (tp-nums tp)))))
		   ((setq tem (position-if (lambda (x) (typep l x)) +singleton-types+))
		    (setf (tp-single tp) (if (consp (tp-single tp)) `(,@(tp-single tp) ,l) `(member ,l))))
		   ((setq tem (position-if (lambda (x) (typep l `(complex ,x))) +range-types+)) ;;FIXME
		    (setf (nth (+ (length +range-types+) tem) (tp-nums tp))
			  (range-or (let ((z `((,(realpart l) . ,(realpart l)))))
				      (number-range-fixup z (nth tem +range-types+)))
				    (range-or (let ((z `((,(imagpart l) . ,(imagpart l)))))
						(number-range-fixup z (nth tem +range-types+)))
					      (nth (+ (length +range-types+) tem) (tp-nums tp)))))))))
	  ((car type) (setq tp (tp-not tp)))) ;(format t  "not processing type ~a~%" type)
    tp))
	   
(defun reconstruct-type (tp)
  (if (and (consp tp) (eq (car tp) 'cons) (cdr tp))
      (let ((a (reconstruct-type (cadr tp)))
	    (d (reconstruct-type (caddr tp))))
	(and a d `(cons ,(reconstruct-type (cadr tp)) ,(reconstruct-type (caddr tp)))))
    (let* ((res (when (some 'identity (tp-nums tp))
		(remove-if 
		 'not
		 (append 
		  (mapcan (lambda (x y) 
			    (mapcar (lambda (y) 
				      (let ((y (car (number-range-fixup (list y) x))))
					(when y `(,x ,(car y) ,(cdr y))))) y))
			  +range-types+ (tp-nums tp))
		  (mapcan (lambda (x y) 
			    (mapcar (lambda (y) 
				      (let ((y (car (number-range-fixup (list y) x))))
					(when y `(complex (,x ,(car y) ,(cdr y)))))) y))
			  +range-types+ (nthcdr 4 (tp-nums tp)))))))
	 (res (if (some 'identity (tp-array tp))
		`(,@res ,@(remove-if 
			   'not
			   (mapcan (lambda (x y) (mapcar (lambda (y) (when y `(array ,x ,y))) (if (atom y) (list y) y)))
				   +array-types+ (tp-array tp)))) res))
	 (res (if (tp-single tp) 
		  `(,@res ,@(remove-if 
			     'not
			     (mapcar (lambda (z) 
				       (when (/= 0 (logand (cdr z) (tp-single tp)))
					 (car z))) *singleton-types*))) res))
	 (res (if (tp-struct tp) `(,@res ,(tp-struct tp)) res))
	 (res (if (tp-class tp) `(,@res ,(tp-class tp)) res)))
    (when res
      (if (cdr res)
	  (clean-tp 'or 'null res)
	(car res))))))


(defun resolve-type (type)
;  (format t "norm~%")
;  (setq type (time (normalize-type type t)))
;  (format t "proc~%")
;  (setq type (time (process-type type)))
;  (format t "recon~%")
;  (setq type (time (reconstruct-type type))))
;  (let* ((type (time (normalize-type type t)))
;	 (type (time (process-type type)))
;	 (type (time (reconstruct-type type))))
;    type))
  (reconstruct-type (process-type (normalize-type type t))))
    

(defun tp-and1 (&rest xy)
  (when xy
    `(and ,@xy)))
  
(defun tp-or1 (&rest xy)
  (when xy
    `(or ,@xy)))
  
(defun tp-not1 (&rest xy)
  (when xy
    `(not ,@xy)))
  


(defun process-type (type &optional (shift 0))
  (cond	((not type) type)
;	((and (setq tem (normalize-type type)) (not (equal type tem)) (not (eq (car tem) 'satisfies)))
;	 (process-type tem shift))
	((eq (car type) 'and)  (reduce 'tp-and (mapcar (lambda (x) (process-type x shift)) (cdr type))))
	((eq (car type) 'or)   (reduce 'tp-or (mapcar (lambda (x) (process-type x shift)) (cdr type))))
	((eq (car type) 'not)  (tp-not (process-type (cadr type) shift)))
	((eq (car type) 'complex) (process-type (cadr type) 4))
;	((and (eq (car type) 'cons) (cdr type)) `(cons ,(process-type (cadr type)) ,(process-type (caddr type))))
	((tp-load type shift))))

(deftype boolean () `(or null is-t))
(defun is-t-p (x) (eq x t));FIXME member types

(defun non-keyword-boolean-symbol-p (x)
  (and (symbolp x) (not (keywordp x)) (not (null x)) (not (is-t-p x))))

(defun base-char-p (x)
  (characterp x))

(defun non-standard-base-char-p (x)
  (and (base-char-p x) (not (standard-char-p x))))

(defun extended-char-p (x) (declare (ignore x)) nil)

(defun interpreted-function-p (x) 
  (and (functionp x) (not (compiled-function-p x))))


(do ((l '((null . null)
          (symbol . symbolp)
          (keyword . keywordp)
          (is-t . is-t-p)
	  (non-keyword-boolean-symbol . non-keyword-boolean-symbol-p)
	  (standard-char . standard-char-p)
	  (base-char . base-char-p)
	  (extended-char . extended-char-p)
	  (string-char . string-char-p);;FIXME
	  (interpreted-function . interpreted-function-p)
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
          (structure . si:structurep)
          (function . functionp)
          (compiled-function . compiled-function-p)
          (common . commonp)
          )
        (cdr l)))
    ((endp l))
  (si:putprop (caar l) (cdar l) 'type-predicate)
  (when (symbolp (cdar l)) (si:putprop (cdar l) (caar l) 'predicate-type)))


(defun classp (object) (declare (ignore object)) nil)
(defun class-precedence-list (object) (declare (ignore object)) nil)
(defun find-class (object &optional errorp environment) (declare (ignore object errorp environment))nil)

(defmacro range-num (x) `(if (atom ,x) ,x (car ,x)))

(defun elgt (x y)
  (cond ((or (eq (car x) '*) (eq (cdr y) '*)) nil)
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

(defun range-and (x y &optional res)
  (cond ((or (not x) (not y)) (nreverse res));(if (and (not x) (not y)) res (cons (car (or x y)) res))))
	((elgt (car y) (car x)) (range-and (cdr x) y res))
	((elgt (car x) (car y)) (range-and x (cdr y) res))
	((let ((z (elin (cdar y) (cdar x) '<)))
	   (range-and (if (equal z (cdar x)) (cdr x) x) (if (equal z (cdar y)) (cdr y) y) 
		    (cons (cons (elin (caar x) (caar y) '>) z) res))))))

(defun range-or (x y &optional res)
  (cond ((and (not x) (not y)) (nreverse res))
	((not x) (range-or x (cdr y) (cons (car y) res)))
	((not y) (range-or (cdr x) y (cons (car x) res)))
	((elgt (car y) (car x)) (range-or (cdr x) y (cons (car x) res)))
	((elgt (car x) (car y)) (range-or x (cdr y) (cons (car y) res)))
	((and (equal (elout (caar x) (caar y) '<) (caar x))
	      (equal (elout (cdar y) (cdar x) '>) (cdar x))) (range-or x (cdr y) res))
	((and (equal (elout (caar x) (caar y) '<) (caar y))
	      (equal (elout (cdar y) (cdar x) '>) (cdar y))) (range-or (cdr x) y res))
	((range-or (cdr x) (cdr y);(if (equal (caar x) z) (cdr x) x) (if (equal (caar y) z) (cdr y) y)
		    (cons (cons (elout (caar x) (caar y) '<) (elout (cdar y) (cdar x) '>)) res)))))

(defmacro elcomp (x) `(cond ((eq ,x '*) ,x) ((atom ,x) (list ,x)) ((car ,x))))

(defun range-not (x &optional res (last '* lastp))
  (cond ((not x) (nreverse (if (and lastp (eq last '*)) res (cons (cons (elcomp last) '*) res))))
	((range-not (cdr x) (if (eq (caar x) last) res (cons (cons (elcomp last) (elcomp (caar x))) res)) (cdar x)))))
;		    (let* ((el (elcomp last))
;			   (ex (elcomp (caar x)))
;			   (il (if (atom el) el (car el)))
;			   (ix (if (atom ex) ex (car ex))))
;		      (if (and (not (eq il '*)) (not (eq ix '*)) (= il ix) (or (listp el) (listp ex)))
;			  res
;			(cons (cons el ex) res))) (cdar x)))))

(defun imod (x p)
  (if (eq x '*) x
    (let* ((e (atom x))
	   (x (if e x (car x)))
	   (cx (if (= p 1) (ceiling x) (floor x))))
      (cond ((/= cx x) cx)
	    (e cx)
	    ((+ cx p))))))
  
(defun integer-range-fixup (x &optional res)
  (cond ((not x) (remove-if (lambda (x) (and (realp (car x)) (realp (cdr x)) (> (car x) (cdr x)))) (nreverse res)))
	((integer-range-fixup (cdr x) 
			      (cons (cons (imod (caar x) 1) (imod (cdar x) -1)) res)))))

(defun number-range-fixup (x tp)
  (if (eq tp 'integer)
      (integer-range-fixup x)
    (remove-if (lambda (x) (let ((a (car x)) (d (cdr x))) 
			     (let ((na (if (atom a) a (car a))) (nd (if (atom d) d (car d))))
			       (and (not (eq na '*)) (not (eq nd '*))
				    (= na nd)
				    (or (listp a) (listp d)))))) x)))

(defconstant +real-type-alist+ '((integer)
				 (ratio)
				 (short-float)
				 (long-float)
				 (rational integer ratio) 
				 (single-float long-float) 
				 (double-float long-float)
				 (float long-float short-float) 
				 (real rational float)))

(defconstant +numeric-logic-alist+ '((and . range-and) (or . range-or)))

;;coerce nums t prope type
;; sort non-reals
;; comples
(defun do-real-ranges (type &aux tem)
  (cond ((assoc type +real-type-alist+) (do-real-ranges `(,type * *)))
	((atom type) nil)
	((setq tem (cdr (assoc (car type) +numeric-logic-alist+) ))
	 (reduce (lambda (x y) (mapcar tem x y)) (mapcar 'do-real-ranges (cdr type))))
	((eq (car type) 'not) 
	 (mapcar 'range-not (do-real-ranges (cadr type))))
	((eq (car type) 'member) 
	 (do-real-ranges 
	  `(or ,@(mapcar (lambda (x) 
			   (let ((tt (car (assoc x +real-type-alist+ :test 'typep))))
			     (when tt `(,tt ,x ,x)))) (cdr type)))))
	((setq tem (cdr (assoc (car type) +real-type-alist+)))
	 (do-real-ranges `(or ,@(mapcar (lambda (x) `(,x ,@(cdr type))) tem))))
	((setq tem (position (car type) +real-type-alist+ :key 'car))
	 (append (make-list tem) (list (list (cons (or (cadr type) '*) (or (caddr type) '*)))) (make-list (- 3 tem))))))

(defun exnr (type)
  `(or ,@(mapcar (lambda (x y) (when y `(,(car x) ,@y))) +real-type-alist+ (do-real-ranges type))))

(defun type-null (type)
  (equal type `(or nil nil nil nil)))

(defun subtypep (t1 t2 &optional env)
  (declare (ignore env))
  (let ((r (not (resolve-type `(and ,t1 (not ,t2))))))
    (values r t)))

(defun *typep (object type)
  (or (pcl-complete-redirect '*typep object type)
      (pcl-redirect '*typep object type)))
(defun *subtypep (type1 type2)
  (let ((l (multiple-value-list (pcl-complete-redirect '*subtypep type1 type2))))
    (if (cdr l)
	(values (car l) (cdr l)))
    (pcl-redirect '*subtypep type1 type2)))


;;; TYPEP predicate.
;;; FIXME --optimize with most likely cases first
(defun typep (object type &optional env &aux tp i tem)
  (declare (ignore env))
  (if (atom type)
      (setq tp type i nil)
      (setq tp (car type) i (cdr type)))
  (if (eq tp 'structure-object) (setq tp 'structure))
  (let ((f (and (not i) (get tp 'type-predicate))))
    (when f (return-from typep (funcall f object))))
  (case tp
    (cons (and (consp object) (typep (car object) (car i)) (typep (cdr object) (cadr i))))
    (member (member object i))
    (not (not (typep object (car i))))
    (or
     (do ((l i (cdr l)))
         ((null l) nil)
      (when (typep object (car l)) (return t))))
    (and
     (do ((l i (cdr l)))
         ((null l) t)
       (unless (typep object (car l)) (return nil))))
    (satisfies (funcall (car i) object))
    ((t) t)
    ((nil) (not object))
    (boolean (or (eq object 't) (eq object 'nil)))
    (fixnum (eq (type-of object) 'fixnum))
    (bignum (eq (type-of object) 'bignum))
    (ratio (eq (type-of object) 'ratio))
    (standard-char
     (and (characterp object) (standard-char-p object)))
    ((base-char string-char)
     (and (characterp object) (string-char-p object)))
    (integer
     (and (integerp object) (in-interval-p object i)))
    (rational
     (and (rationalp object) (in-interval-p object i)))
    (real
     (and (realp object) (in-interval-p object i)))
    (float
     (and (floatp object) (in-interval-p object i)))
    ((short-float)
     (and (eq (type-of object) 'short-float) (in-interval-p object i)))
    ((single-float double-float long-float)
     (and (eq (type-of object) 'long-float) (in-interval-p object i)))
    (complex
     (and (complexp object)
    	  
    (or (null i)
       (and   (typep (realpart object) (car i))
            ;;wfs--should only have to check one.
            ;;Illegal to mix real and imaginary types!
              (typep (imagpart object) (car i))))
     ))
    (sequence (or (listp object) (vectorp object)))
    ((base-string string) ;FIXME
     (and (stringp object)
          (or (endp i) (match-dimensions (array-dimensions object) i))))
    (bit-vector
     (and (bit-vector-p object)
          (or (endp i) (match-dimensions (array-dimensions object) i))))
    ((simple-base-string simple-string) ;FIXME
     (and (simple-string-p object)
          (or (endp i) (match-dimensions (array-dimensions object) i))))
    (simple-bit-vector
     (and (simple-bit-vector-p object)
          (or (endp i) (match-dimensions (array-dimensions object) i))))
    (simple-vector
     (and (simple-vector-p object)
	  (or (endp i) (eq (car i) '*) 
	      (and (eq (car i) t) (not (stringp object)) (not (bit-vector-p object)))
	      (equal (array-element-type object) (best-array-element-type (car i))))
          (or (endp (cdr i)) (match-dimensions (array-dimensions object) (cdr i)))))
    (vector
     (and (vectorp object)
	  (or (endp i) (eq (car i) '*) 
	      (and (eq (car i) t) (not (stringp object)) (not (bit-vector-p object)))
	      (equal (array-element-type object) (best-array-element-type (car i))))
          (or (endp (cdr i)) (match-dimensions (array-dimensions object) (cdr i)))))
    (simple-array
     (and (simple-array-p object)
          (or (endp i) (eq (car i) '*)
              (equal (array-element-type object)(best-array-element-type (car i))))
          (or (endp (cdr i)) (eq (cadr i) '*)
	      (if (listp (cadr i))
		  (match-dimensions (array-dimensions object) (cadr i))
		(eql (array-rank object) (cadr i))))))
    (array
     (and (arrayp object)
          (or (endp i) (eq (car i) '*)
              ;; Or the element type of object should be EQUAL to (car i).
              ;; Is this too strict?
              (equal (array-element-type object) (best-array-element-type (car i))))
          (or (endp (cdr i)) (eq (cadr i) '*)
	      (if (listp (cadr i))
		  (match-dimensions (array-dimensions object) (cadr i))
		(eql (array-rank object) (cadr i))))))
    (file-stream (eq (type-of object) 'file-stream))
    (string-stream (eq (type-of object) 'string-stream))
    (synonym-stream (eq (type-of object) 'synonym-stream))
    (concatenated-stream (eq (type-of object) 'concatenated-stream))
    (two-way-stream (eq (type-of object) 'two-way-stream))
    (echo-stream (eq (type-of object) 'echo-stream))
    (logical-pathname
      (and (pathnamep object)
	   (not (endp (si:pathname-lookup (pathname-host object)
				    	  si:*pathname-logical*)))))
    (t 
     (cond ((setq tem (get tp 'deftype-definition))
	      (typep object
		     (apply tem i)))
	   ((setq tem (get tp 'si::s-data))
	    (structure-subtype-p object tem))
           ))))


(defun normalize-type (type &optional ar &aux tem)
  (cond ((atom type) (normalize-type (list type) ar))
	((and (eq (car type) 'satisfies) (setq tem (get (cadr type) 'predicate-type)))
	 (normalize-type tem ar))
	((let* ((dt (and (symbolp (car type)) (get (car type) 'deftype-definition)))
		(nt (and dt (apply dt (cdr type)))))
	   (when (and nt (not (equal type nt)) (not (and (eq (car nt) 'satisfies) (find-class (car type) nil))))
	     (normalize-type nt ar))))
	((and ar (member (car type) '(array simple-array)))
	 `(,(car type) ,(upgraded-array-element-type (cadr type)) ,(caddr type)))
	((eq (car type) 'complex)
	 `(complex ,(normalize-type (cadr type) ar)))
	((and (eq (car type) 'cons) (cdr type)) 
	 (let* ((a (normalize-type (cadr type) ar))
		(ai (if (cdr a) a (car a)))
		(d (normalize-type (caddr type) ar))
		(di (if (cdr d) d (car d))))
	   (and ai di `(cons ,a ,d))))
	((member (car type) '(and or not))
	 (let ((z `(,(car type))))
	   (dolist (l (mapcar (lambda (z) (normalize-type z ar)) (cdr type)))
	     (if (and (eq (car l) (car type)) (not (eq (car type) 'not)))
		 (dolist (w (cdr l)) (push w z))
	       (push l z)))
	   (if (cdr z)
	       (nreverse z)
	     (case (car z) (and '(t)) (or '(nil)) (not (error "Bad type~%"))))))
	(type)))

;;; NORMALIZE-TYPE normalizes the type using the DEFTYPE definitions.
;;; The result is always a list.
;(defun normalize-type (type &aux tp i )
  ;; Loops until the car of type has no DEFTYPE definition.
;  (when (and (consp type) (eq (car type) 'satisfies))
;    (when (setq tp (get (cadr type) 'predicate-type))
;      (setq type tp)))
;  (loop
;    (if (atom type)
;        (setq tp type i nil)
;        (setq tp (car type) i (cdr type)))
;    (let* ((dt (get tp 'deftype-definition))
;	   (nt (and dt (apply dt i))))
;      (if (and nt (not (equal type nt)))
;	  (setq type nt)
;        (return-from normalize-type (if (atom type) (list type) type))))))


;;; KNOWN-TYPE-P answers if the given type is a known base type.
;;; The type may not be normalized.

;;FIXME -- get rid of this list.  And those in subtypep.  CM 20050106
(defun known-type-p (type)
  (when (consp type) (setq type (car type)))
  (if (and (symbolp type) 
	   (or (equal (string type) "ERROR") ;FIXME error symbol
	       (member type
		       '(t nil boolean null symbol keyword atom cons list sequence
			   non-negative-char negative-char signed-char unsigned-char
			   non-negative-short negative-short signed-short unsigned-short
			   non-negative-fixnum negative-fixnum
			   number integer bignum rational ratio float method-combination
			   short-float single-float double-float long-float complex
			   character standard-char string-char real 
			   package stream pathname readtable hash-table random-state
			   structure array simple-array function compiled-function
			   arithmetic-error base-char base-string broadcast-stream 
			   built-in-class cell-error class concatenated-stream condition 
			   control-error division-by-zero echo-stream end-of-file error 
			   extended-char file-error file-stream floating-point-inexact 
			   floating-point-invalid-operation floating-point-overflow 
			   floating-point-underflow generic-function logical-pathname method 
			   package-error parse-error print-not-readable program-error 
			   reader-error serious-condition simple-base-string simple-condition 
			   simple-type-error simple-warning standard-class 
			   standard-generic-function standard-method standard-object
			   storage-condition stream-error string-stream structure-class
			   style-warning synonym-stream two-way-stream structure-object
			   type-error unbound-slot unbound-variable undefined-function
			   warning ))
	       (get type 's-data)
	       (find-class (implicit-symbol type nil) nil)))
      t
      nil))

(defun implicit-symbol (a b)
  (cond ((not (consp a))
	 (or (and (symbolp a) a) b))
	((null b)
	 (let ((b (car a)))
	   (and (symbolp b) (implicit-symbol (cdr a) b))))
	((let ((a (car a))) (or (eq a '*) (eq a t)))
	 (implicit-symbol (cdr a) b))))

;(defun implicit-symbol (a b)
;  (cond ((atom a)  (when (symbolp a) a))
;	((subsetp (cdr a) '(t *)) (car a))))

(defun upgraded-array-element-type (type &optional environment)
  (declare (ignore environment))
  (best-array-element-type type))

(defun type-null (type)
  (cond ((atom type) (not type))
	((eq (car type) 'and) 
	 (every (lambda (x) 
		  (or (and (consp x) (member (car x) '(and or member not)))
		      (every (lambda (y) 
				(or (and (consp y) (member (car y) '(and or member not)))
				    (subtypep x `(not ,y)))))))))))


;;; SUBTYPEP predicate.
(defun osubtypep (type1 type2 &optional env &aux t1 t2 i1 i2 ntp1 ntp2 tem)
  (declare (ignore env))
  (let* ((t1 (or (find-class (implicit-symbol type1 nil) nil) (when (classp type1) type1)))
	 (t2 (or (find-class (implicit-symbol type2 nil) nil) (when (classp type2) type2))))
    (when (and t1 t2)
      (return-from osubtypep 
		   (if (member t2 (class-precedence-list t1))
		       (values t t) (values nil t)))))
;    (when (or t1 t2)
;      (return-from osubtypep (values nil nil))))
  (setq t1 (normalize-type type1))
  (setq type1 (if (eq (car t1) 'satisfies) (list type1) t1))
  (setq t2 (normalize-type type2))
  (setq type2 (if (eq (car t2) 'satisfies) (list type2) t2))
;  (setq type1 (normalize-type type1))
;  (setq type2 (normalize-type type2))  
  (setq t1 (car type1) t2 (car type2))
  (setq i1 (effective-range t1 (cdr type1)) i2 (effective-range t2 (cdr type2)))
  (cond ((eq t1 'member)
         (dolist (e i1)
           (unless (typep e type2) (return-from osubtypep (values nil t))))
         (return-from osubtypep (values t t)))
        ((eq t1 'or)
         (dolist (tt i1)
           (multiple-value-bind (tv flag) (osubtypep tt (if i2 type2 t2))
             (unless tv (return-from osubtypep (values tv flag)))))
         (return-from osubtypep (values t t)))
        ((eq t1 'and)
	 (let* ((i1 (remove-duplicates i1 :test 'equal))
		(i1 (if (not (cdr i1)) i1 
		      (intersection i1 i1 :test 
				 (lambda (x y) (and (not (equal x y)) 
						    (let ((r (multiple-value-list (osubtypep x y)))
							  (s (multiple-value-list (osubtypep y x))))
						      (or  (car r) (not (cadr r))
							   (car s) (not (cadr s))))))))))
	   (unless i1 (return-from osubtypep (values (if (if i2 type2 t2) nil t) t)))
	   (dolist (tt i1)
	     (let ((tv (osubtypep tt (if i2 type2 t2))))
	       (when tv (return-from osubtypep (values t t))))));;FIXME t2 nil
         (return-from osubtypep (values nil (and (not t2) (some 'known-type-p i1)))))
        ((eq t1 'not)
	 ;;
	 (return-from osubtypep
		      (if (eq t2 'not)
			  (osubtypep (car i2) (car i1))
			(let ((r (osubtypep t `(or ,(if i2 type2 t2) ,(car i1)))))
			  (values r (or r (osubtypep type1 `(not ,(if i2 type2 t2))))))))))
  (cond ((eq t2 'member)
         (return-from osubtypep (values nil nil)))
        ((eq t2 'or)
         (dolist (tt i2)
           (let ((tv (osubtypep (if i1 type1 t1) tt)))
             (when tv (return-from osubtypep (values t t)))))
         (return-from osubtypep (values nil (if (eq t1 t) t nil))))
        ((eq t2 'and)
         (dolist (tt i2)
           (multiple-value-bind (tv flag) (osubtypep (if i1 type1 t1) tt)
             (unless tv (return-from osubtypep (values tv flag)))))
         (return-from osubtypep (values t t)))
        ((eq t2 'not)
	 (return-from osubtypep (let ((r (osubtypep `(and ,(if i1 type1 t1) ,(car i2)) nil)))
				 (values r (or r (osubtypep (if i1 type1 t1) (car i2))))))))
	
  (when (equal type1 type2)
    (return-from osubtypep (values t t)))
  (setq ntp1 (known-type-p type1) ntp2 (known-type-p type2))
  (cond	((or (eq t1 'nil) (eq t2 't) (eq t2 'common)) (values t t))
       	((eq t2 'nil) (values (eq t1 'extended-char) ntp1))
       	((eq t1 't) (values nil ntp2))
       	((eq t1 'common) (values nil ntp2))
	((eq t2 'cons)
	 (cond ((eq t1 'cons)
		(macrolet ((ct (f x)
			       (let ((tmp (gensym)))
				 `(let ((,tmp (,f ,x)))
				    (cond ((eq ,tmp '*) t)
					  ((null ,tmp) t)
					  (t ,tmp))))))
		  (return-from osubtypep (values (and (osubtypep (ct car i1) (ct car i2))
						     (osubtypep (ct cadr i1) (ct cadr i2))) t))))
	       (t
		(values nil ntp1))))
       	((eq t2 'list)
       	 (cond ((member t1 '(null cons)) (values t t))
       	       (t (values nil ntp1))))
       	((eq t2 'sequence)
       	 (cond ((member t1 '(null cons list)) 
		(values t t))
       	       ((or (eq t1 'simple-array) (eq t1 'array))
       	        (if (and (cdr i1) (consp (cadr i1)) (null (cdadr i1)))
       	            (values t t)
       	            (values nil t)))
       	       (t (values nil ntp1))))
       	((eq t1 'list) (values nil ntp2))
       	((eq t1 'sequence) (values nil ntp2))
       	((eq t2 'atom)
       	 (cond ((member t1 '(cons list)) (values nil t))
       	       (ntp1 (values t t))
       	       (t (values nil nil))))
       	((eq t1 'atom) (values nil ntp2))
       	((eq t2 'symbol)
       	 (if (member t1 '(keyword boolean null))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'function)
       	 (if (member t1 '(compiled-function generic-function standard-generic-function))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'generic-function)
       	 (if (eq t1 'standard-generic-function)
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'boolean)
       	 (if (eq t1 'null)
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'standard-object)
       	 (if (member t1 '(class built-in-class structure-class standard-class 
				method standard-method))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'class)
       	 (if (member t1 '(built-in-class structure-class standard-class ))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'condition)
       	 (if (and (symbolp t1) 
		  (or (equal (string t1) "ERROR")
		      (member t1 '(serious-condition error type-error simple-type-error
					    parse-error cell-error unbound-slot
					    warning style-warning storage-condition
					    simple-warning unbound-variable control-error
					    program-error undefined-function
					    package-error arithmetic-error 
					    division-by-zero simple-condition
					    floating-point-invalid-operation
					    floating-point-inexact 
					    floating-point-overflow
					    floating-point-underflow 
					    file-error stream-error end-of-file
					    print-not-readable
					    reader-error))))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'serious-condition)
       	 (if (and (symbolp t1)
		  (or (equal (string t1) "ERROR")
		      (member t1 '( error type-error simple-type-error
				     parse-error cell-error unbound-slot
				     storage-condition
				     unbound-variable control-error
				     program-error undefined-function
				     package-error arithmetic-error 
				     division-by-zero simple-type-error
				     floating-point-invalid-operation
				     floating-point-inexact
				     floating-point-overflow
				     floating-point-underflow 
				     file-error stream-error end-of-file 
				     print-not-readable
				     reader-error))))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'type-error)
       	 (if (eq t1 'simple-type-error)
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'parse-error)
       	 (if (eq t1 'reader-error)
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'stream-error)
       	 (if (member t1 '(reader-error end-of-file))
       	     (values t t)
       	     (values nil ntp1)))
       	((and (symbolp t2) (or (equal (string t2) "ERROR") (eq t2 'error)))
       	 (if (member t1 '(simple-type-error type-error
			  parse-error cell-error unbound-slot
			  unbound-variable control-error
			  program-error undefined-function
			  package-error arithmetic-error 
			  division-by-zero simple-type-error
			  floating-point-invalid-operation
			  floating-point-inexact
			  floating-point-overflow
			  floating-point-underflow 
			  file-error stream-error end-of-file print-not-readable
			  reader-error ))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'stream)
       	 (if (member t1 '(broadcast-stream concatenated-stream echo-stream file-stream
					   string-stream synonym-stream two-way-stream))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'pathname)
       	 (if (eq t1 'logical-pathname)
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'method)
       	 (if (eq t1 'standard-method)
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'simple-condition)
       	 (if (member t1 '(simple-type-error simple-warning))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'simple-condition)
       	 (if (member t1 '(simple-type-error simple-warning))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'cell-error)
       	 (if (member t1 '(unbound-slot unbound-variable undefined-function))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'warning)
       	 (if (member t1 '(style-warning simple-warning))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'arithmetic-error)
       	 (if (member t1 '(division-by-zero
			  floating-point-invalid-operation
			  floating-point-inexact
			  floating-point-overflow
			  floating-point-underflow ))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t2 'keyword)
       	 (if (eq t1 'keyword) (values t t) (values nil ntp1)))
       	((eq t2 'null)
       	 (if (eq t1 'null) (values t t) (values nil ntp1)))
       	((eq t2 'number)
	 (cond ((member t1 '(bignum integer ratio rational float real
	                     short-float single-float double-float long-float
	                     complex number))
	        (values t t))
	       (t (values nil ntp1))))
       	((eq t1 'number) (values nil ntp2))
       	((or (eq t2 'structure) (eq t2 'structure-object))
       	 (if (and (symbolp t1) (or (eq t1 'structure) (get t1 'si::s-data)))
       	     (values t t)
       	     (values nil ntp1)))
       	((eq t1 'structure) (values nil ntp2))
       	((and (symbolp t1) (setq tem (get t1 'si::s-data)))
	 (let ((tem2 (and (symbolp t2) (get t2 'si::s-data))))
	   (cond (tem2
		   (do ((tp1 tem (s-data-includes tp1)) (tp2 tem2))
		       ((null tp1)(values nil t))
		       (when (eq tp1 tp2) (return (values t t)))))
		 (t (values nil ntp2)))))
        ((eq t2 'real)
	 (let ((r (and (member t1 '(fixnum integer bignum float short-float
					   single-float double-float long-float
					   real ratio
					   rational)))))
	   (values r r)))
       	((and (symbolp t2) (get t2 'si::s-data)) (values nil ntp1))
       	(t
       	 (case t1
       	   (bignum
       	    (case t2
       	      (bignum (values t t))
       	      ((integer rational)
       	       (let ((r (sub-interval-p '(* *) i2)))
       	           (values r r)))
       	      (t (values nil ntp2))))
       	   (ratio
       	    (case t2
       	      (rational
       	       (let ((r (sub-interval-p '(* *) i2))) (values r r)))
       	      (t (values nil ntp2))))
       	   (standard-char
	    (if (member t2 '(base-char string-char character))
	        (values t t)
	        (values nil ntp2)))
       	   (base-char
	    (if (member t2 '(character string-char))
	        (values t t)
	        (values nil ntp2)))
       	   (string-char
	    (if (member t2 '(character base-char))
	        (values t t)
	        (values nil ntp2)))
       	   (extended-char
	    (if (eq t2 'character)
	        (values t t)
	        (values nil ntp2)))
	   (character
	    (if (member t2 '(string-char base-char))
	        (values t t)
	        (values nil ntp2)))
	   (integer
	    (if (member t2 '(integer rational bignum))
		(let ((r (sub-interval-p i1 i2))) (values r r))
		(values nil ntp2)))
	   (rational
	    (if (eq t2 'rational)
		(let ((r (sub-interval-p i1 i2))) (values r r))
		(values nil ntp2)))
	   (float
	    (if (eq t2 'float)
		(let ((r (sub-interval-p i1 i2))) (values r r))
		(values nil ntp2)))
	   ((short-float)
	    (if (member t2 '(short-float float))
		(let ((r (sub-interval-p i1 i2))) (values r r))
		(values nil ntp2)))
	   ((single-float double-float long-float)
	    (if (member t2 '(single-float double-float long-float float))
		(let ((r (sub-interval-p i1 i2))) (values r r))
	      (values nil ntp2)))
	   (complex
	    (if (eq t2 'complex)
		(osubtypep (or (car i1) t) (or (car i2) t))
	        (values nil ntp2)))
	   ((simple-array array)
	    (cond ((or (eq t1 t2) (eq t2 'array))
		   (labels ((all-sym (a s &optional (b a) (c 0))
				     (cond ((null b) c)
					   ((eq (car b)	s) (all-sym a s (cdr b) (1+ c)))
					   (t a))))
		     (macrolet ((ty (x) `(or (car ,x) '*))
;				(let ((tmp (gensym)))
;					  `(or (not ,x)
;					       (let ((,tmp (car ,x)))
;						 (or (eq ,tmp '*) ,tmp)))))
				(di (x) (let ((tmp (gensym)))
					  `(or (not (cdr ,x))
					       (let ((,tmp (cadr ,x)))
						 (or (eq ,tmp '*)
						     (and (integerp ,tmp) ,tmp)
						     (all-sym ,tmp '*)))))))
		       (let* ((at1 (ty i1))
			      (at2 (ty i2))
			      (at2 (or (and (eq at2 'string-char) 'character) at2)))
			 (unless (or (eq at2 '*)
				     (eq (upgraded-array-element-type at1) (upgraded-array-element-type at2)))
			   (return-from osubtypep (values nil t))))
		       (let ((ad1 (di i1))
			     (ad2 (di i2)))
			 (when (eq ad2 t)
			   (return-from osubtypep (values t t)))
			 (when (eq ad1 t)
			   (return-from osubtypep (values nil t)))
			 (values (match-dimensions ad1 ad2) t)))))
	          (t (values nil ntp2))))
	   (t (if ntp1 (values (eq t1 t2) t) (values nil nil)))))))

(defun effective-range (tp i)
  (unless (member tp '(integer bignum))
    (return-from effective-range i))
  (let (r d)
    (dolist (j i (nreverse r))
      (push (if (consp j) (if d (1- (car j)) (1+ (car j))) j) r)
      (setq d t))))


(defun sub-interval-p (i1 i2)
  (let (low1 high1 low2 high2)
    (if (endp i1)
        (setq low1 '* high1 '*)
        (if (endp (cdr i1))
            (setq low1 (car i1) high1 '*)
            (setq low1 (car i1) high1 (cadr i1))))
    (if (endp i2)
        (setq low2 '* high2 '*)
        (if (endp (cdr i2))
            (setq low2 (car i2) high2 '*)
            (setq low2 (car i2) high2 (cadr i2))))
    (cond ((eq low1 '*)
	   (unless (eq low2 '*)
	           (return-from sub-interval-p nil)))
          ((eq low2 '*))
	  ((consp low1)
	   (if (consp low2)
	       (when (< (car low1) (car low2))
		     (return-from sub-interval-p nil))
	       (when (< (car low1) low2)
		     (return-from sub-interval-p nil))))
	  ((if (consp low2)
	       (when (<= low1 (car low2))
		     (return-from sub-interval-p nil))
	       (when (< low1 low2)
		     (return-from sub-interval-p nil)))))
    (cond ((eq high1 '*)
	   (unless (eq high2 '*)
	           (return-from sub-interval-p nil)))
          ((eq high2 '*))
	  ((consp high1)
	   (if (consp high2)
	       (when (> (car high1) (car high2))
		     (return-from sub-interval-p nil))
	       (when (> (car high1) high2)
		     (return-from sub-interval-p nil))))
	  ((if (consp high2)
	       (when (>= high1 (car high2))
		     (return-from sub-interval-p nil))
	       (when (> high1 high2)
		     (return-from sub-interval-p nil)))))
    (return-from sub-interval-p t)))

(defun in-interval-p (x interval)
  (let (low high)
    (if (endp interval)
        (setq low '* high '*)
        (if (endp (cdr interval))
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

;;; COERCE function.
(defun coerce (object type)
  (when (typep object type)
        ;; Just return as it is.
        (return-from coerce object))
  (when (classp type)
    (specific-error :wrong-type-argument "Cannot coerce ~S to class ~S." object type))
;  (setq type (normalize-type type))
  (if (atom type) (setq type (list type)))
  (case (car type)
;	((and or)  (coerce object (cadr type)));FIXME!!! 
    (list
     (do ((l nil (cons (elt object i) l))
          (i (1- (length object)) (1- i)))
         ((< i 0) l)))
    ((array simple-array vector simple-vector string simple-string)
     (unless (or (endp (cdr type))
		 (endp (cddr type))
		 (eq (caddr type) '*)
		 (endp (cdr (caddr type))))
       (specific-error :wrong-type-argument "Cannot coerce ~S to class ~S." object type))
     (do ((seq (make-sequence type (length object)))
	  (i 0 (1+ i))
          (l (length object)))
         ((>= i l) seq)
       (setf (elt seq i) (elt object i))))
    (character (character object))
    (float (float object))
    ((short-float) (float object 0.0S0))
    ((single-float double-float long-float) (float object 0.0L0))
    (complex
     (if (or (null (cdr type)) (null (cadr type)) (eq (cadr type) '*))
         (complex (realpart object) (imagpart object))
         (complex (coerce (realpart object) (cadr type))
                  (coerce (imagpart object) (cadr type)))))
    (t (specific-error :wrong-type-argument "Cannot coerce ~S to class ~S." object type))))

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



