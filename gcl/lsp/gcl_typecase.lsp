(in-package :si)

(export '(cmpt tmpsym *or-tp-hash* *and-tp-hash* *norm-tp-hash* *uniq-tp-hash* object-type
	       readable-tp returs-exactly eov contains-cons-tp uniq-tp cmp-norm-tp funcallable-symbol-function atomic-tp
	       type-and type-or1 type>= type<= min-ftp infer-tp))




(defvar *uniq-tp-hash* (make-hash-table :test 'equal))
(defvar *norm-tp-hash* (make-hash-table :test 'eq))
(defvar *and-tp-hash* (make-hash-table :test 'eq))
(defvar *or-tp-hash*  (make-hash-table :test 'eq))

(defmacro cmpt (tp)  `(and (consp ,tp) (member (car ,tp) '(returns-exactly values))))
(defmacro cmpdt (tp) `(and (consp ,tp) (member (car ,tp) '(and or not cons complex
							       returns-exactly values))))
(defmacro cmpao (tp) `(and (consp ,tp) (member (car ,tp) '(and or))))
(defmacro cmpmt (tp) `(and (consp ,tp) (member (car ,tp) '(not cons complex returns-exactly values))))

(defun lsort (l f)
  (when l
    (let* ((z (pop l))
	   (r (mapcar (lambda (x) (if (funcall f z x) x (prog1 z (setq z x)))) l)))
      (cons z (lsort r f)))))

(defun sort-tps (tps)
  (lsort tps (lambda (x y) (> (si::address x) (si::address y)))))

(defun build-tp (tp)
  (cond ((cmpdt tp) (cons (car tp) (mapcar 'uniq-tp (cdr tp))))
	(tp)))

(defun contains-cons-tp (tp)
  (cond ((atom tp) nil)
	((eq (car tp) 'member) (member-if 'consp (cdr tp)))
	((or (contains-cons-tp (car tp)) (contains-cons-tp (cdr tp))))))

(defun uniq-tp (tp) 
  (cond ((contains-cons-tp tp) tp)
	((gethash tp *uniq-tp-hash*))
	((let ((tp (build-tp tp)))
	   (setf (gethash tp *uniq-tp-hash*) tp)))))

(defun readable-tp (tp)
  (uniq-tp
   (cond ((cmpao tp) (cons (car tp) (sort-tps (mapcar 'readable-tp (cdr tp)))))
	 ((cmpmt tp) (cons (car tp) (mapcar 'readable-tp (cdr tp))))
	 ((si::si-classp tp) (or (si::si-class-name tp) t))
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
			    ((and (consp tp) (or (eq (car tp) 'si::type-max) (eq (car tp) 'si::type-min))) nt)
			    ((or (contains-cons-tp tp) (contains-cons-tp nt)) nt)
			    ((setf (gethash tp *norm-tp-hash*) nt (gethash nt *norm-tp-hash*) nt))))))))))))



(defconstant +null+ (cmp-norm-tp 'null))
(defconstant +cons+ (cmp-norm-tp 'cons))
(defconstant +proper-cons+ (cmp-norm-tp 'proper-cons))

(defmacro eov (type1 l1 type2 l2)
  `(if (and (= ,l1 ,l2) 
	    (eq (car ,type1) 'returns-exactly)
	    (eq (car ,type2) 'returns-exactly)) 
       'returns-exactly 'values))

(defun type-and-int (type1 type2 x)
  (cond ((eq type1 type2) type2)
	((eq type1 '*) type2)
	((eq type2 '*) type1)
	((not type1) nil)
	((not type2) nil)
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
	((cmpt type1) (type-and (or (cadr type1) +null+) type2))
	((cmpt type2) (type-and type1 (or (cadr type2) +null+)))
	((member type1 '(t object)) type2)
	((member type2 '(t object)) type1)
	((subtypep1 type2 type1) type2)
	((subtypep1 type1 type2) type1)
	((cmp-norm-tp x))))



(defun type-or1-int (type1 type2 x)
  (cond ((eq type1 type2) type2)
	((eq type1 '*) type1)
	((eq type2 '*) type2)
	((not type1) type2)
	((not type2) type1)
	((equal type1 type2) type2)
	((and (cmpt type1) (cmpt type2))
	 (let* ((ntype1 (if (cmpt type1) (cdr type1) (when type1 (list type1))))
		(ntype2 (if (cmpt type2) (cdr type2) (when type2 (list type2))))
		(l1 (length ntype1))
		(l2 (length ntype2))
		(n (- (max l1 l2) (min l1 l2)))
		(e (make-list n :initial-element +null+))
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
	((cmp-norm-tp x))))

(defun atomic-tp (tp)
  (when (consp tp)
    (case (car tp)
      ((integer ratio short-float long-float)
       (let* ((d (cdr tp))(dd (cadr d))(da (car d)))
	 (and (numberp da) (numberp dd) (= da dd) d)))
      ((member eql) (let ((d (cdr tp))) (unless (cdr d) d))))))
;(declaim (inline atomic-tp))

(defun type-and (t1 t2 &aux h1 h2 r f c1 c2);m1 m2
  (cond
   ((eq t1 t2) t2);accelerator
   ((eq t1 '*) t2);accelerator
   ((eq t2 '*) t1);accelerator
   ((not t1) nil)
   ((not t2) nil)
   ((when (setq c1 (t-to-nil (car (atomic-tp t1))) c2 (t-to-nil (car (atomic-tp t2)))) nil))
   (c2 (when (or (eql c1 c2) (typep c2 t1)) t2))
   (c1 (when (typep c1 t2) t1))
   ((when (setq h1 (gethash t1 *and-tp-hash*)) (multiple-value-setq (r f) (gethash t2 h1)) f) r)
   ((when (setq h2 (gethash t2 *and-tp-hash*)) (multiple-value-setq (r f) (gethash t1 h2)) f) r)
   ((let ((x (uniq-tp `(and ,t1 ,t2))))
      (multiple-value-bind
       (r f)
       (gethash x *norm-tp-hash*)
       (if f r
	 (let ((q (type-and-int t1 t2 x)))
	   (unless (contains-cons-tp q)
	     (setf (gethash x *norm-tp-hash*) q)
	     (unless (contains-cons-tp t2) (when h1 (setf (gethash t2 h1) q)))
	     (unless (contains-cons-tp t1) (when h2 (setf (gethash t1 h2) q))))
	   q)))))))

(defmacro uniq-tp-from-stack (op t1 t2)
  (let ((s (tmpsym)))
    `(let ((,s (list ,op ,t1 ,t2)))
       (declare (:dynamic-extent ,s))
       (uniq-tp ,s))))

(defun type-or1 (t1 t2 &aux h1 h2 r f c1 c2);FIXME think about atomic types
  (flet ((to (t1 t2 &aux (x (uniq-tp-from-stack `or t1 t2))) (cmp-norm-tp x)));(type-or1-int t1 t2 x)))
	(cond
	 ((eq t1 t2) t2);accelerator
	 ((eq t1 '*) t1);accelerator
	 ((eq t2 '*) t2);accelerator
	 ((not t1) t2);FIXME atomic type logic requires eq -> and
	 ((not t2) t1)
	 ((when (setq c1 (t-to-nil (car (atomic-tp t1))) c2 (t-to-nil (car (atomic-tp t2)))) nil))
	 (c1 (if (or (eql c1 c2) (unless (cmpt t2) (typep c1 t2))) t2 (if (consp c1) (type-or1 (if (cdr c1) +cons+ +proper-cons+) t2) (to t1 t2))))
	 (c2 (if (unless (cmpt t1) (typep c2 t1)) t1 (if (consp c2) (type-or1 t1 (if (cdr c2) +cons+ +proper-cons+)) (to t1 t2))))
	 ((when (setq h1 (gethash t1 *or-tp-hash*)) (multiple-value-setq (r f) (gethash t2 h1)) f) r)
	 ((when (setq h2 (gethash t2 *or-tp-hash*)) (multiple-value-setq (r f) (gethash t1 h2)) f) r)
	 ((let ((x (uniq-tp `(or ,t1 ,t2))))
	    (multiple-value-bind
	     (r f)
	     (gethash x *norm-tp-hash*)
	     (if f r
	       (let ((q (type-or1-int t1 t2 x)))
		 (unless (contains-cons-tp q)
		   (setf (gethash x *norm-tp-hash*) q)
		   (unless (contains-cons-tp t2) (when h1 (setf (gethash t2 h1) q)))
		   (unless (contains-cons-tp t1) (when h2 (setf (gethash t1 h2) q))))
		 q))))))))

(defun type>= (t1 t2)
  (let ((z (type-and t1 t2)))
    (eq z t2)))

(defun type<= (t1 t2)
  (let ((z (type-and t2 t1)))
    (eq z t1)))

(defun min-ftp (tp)
  (let ((n (cmp-norm-tp tp)))
    (if (eq n '*)
	(cmp-norm-tp `(si::type-min (or nil ,tp)))
      n)))

(defmacro infer-tp (x y z) (declare (ignore x y)) z)
(defun infer-type (x y z) (declare (ignore x y)) z);avoid macroexpansion in bootstrap
(setf (get 'infer-type 'compiler::cmp-inline) t)

(defun expand-array-element-type (type)
  (cond
   ((car (member type +array-types+ :test 'subtypep1)))
   ((subtypep1 type 'float) 'long-float)
   (t)))

#.`(defun upgraded-array-element-type (type &optional environment)
     (declare (ignore environment) (optimize (safety 1)))
     (case type
	   ((nil t) t)
	   ,@(mapcar (lambda (x) `(,x type)) (cons '* (lremove t +array-types+)))
	   (otherwise (expand-array-element-type type))))





(eval-when
 (compile load eval)
 (defun mkinf (f tp z &aux (z (if (cdr z) `(progn ,@z) (car z))))
   `(infer-type ',f ',tp ,z))
 (defun mkinfm (f tp z &aux (z (if (cdr z) `(progn ,@z) (car z))))
   `(infer-tp ,f ,tp ,z))
 (defconstant +ctps+ (mapcar (lambda (x) (list x (intern (string-concatenate "COMPLEX-" (string x))))) +range-types+))
 (defconstant +vtps+ (mapcar (lambda (x) (list x (intern (string-concatenate "VECTOR-"  (string x))))) +array-types+))
 (defconstant +atps+ (mapcar (lambda (x) (list x (intern (string-concatenate "ARRAY-"   (string x))))) +array-types+)))

(eval-when
 (compile load eval)
 (deftype bfix nil `(and fixnum (not immfix)))
 #.`(progn
     ,@(mapcar (lambda (x &aux (s (cadr x))(x (car x))) 
		 `(deftype ,s (&optional (l '*) (h '*)) `(complex (,',x ,l ,h)))) +ctps+)
     ,@(mapcar (lambda (x &aux (s (cadr x))(x (car x))) 
		 `(deftype ,s (&optional (d '*)) `(vector ,',x ,d))) +vtps+)
     ,@(mapcar (lambda (x &aux (s (cadr x))(x (car x))) 
		 `(deftype ,s (&optional (d '*)) `(and (array ,',x ,d) (not vector)))) +atps+)))

(defconstant +r+ `((immfix 1) 
		   (bfix  (1+ (caddr (cmp-norm-tp 'immfix))))
		   (bignum (1+ most-positive-fixnum))
		   (ratio 1/2)
		   (short-float 1.0s0) 
		   (long-float 1.0)
		   ,@(mapcar (lambda (x &aux (v (cadr (member (car x) '(integer 1 ratio 1/2 short-float 1.0s0 long-float 1.0))))) 
			       `(,(cadr x) (complex ,v ,v))) +ctps+)
		   (standard-char #\a)
		   (non-standard-base-char #\Return)
		   (structure (make-dummy-structure)) 
		   (std-structure (set-d-tt 1 (make-dummy-structure))) 
		   (non-logical-pathname #p".")
		   (logical-pathname (set-d-tt 1 #p"."))
		   (hash-table-eq (make-hash-table :test 'eq))
		   (hash-table-eql (make-hash-table :test 'eql))
		   (hash-table-equal (make-hash-table :test 'equal))
		   (hash-table-equalp (make-hash-table :test 'equalp))
		   (package *package*)
		   (file-input-stream (open-int "/dev/null" :input 'character nil nil nil nil :default))
		   (file-output-stream (open-int "/dev/null" :output 'character nil nil nil nil :default))
		   (file-io-stream (open-int "/dev/null" :io 'character nil nil nil nil :default))
		   (file-probe-stream (open-int "/dev/null" :probe 'character nil nil nil nil :default))
		   (synonym-stream *standard-output*)
		   (broadcast-stream (make-broadcast-stream))
		   (concatenated-stream (make-concatenated-stream))
		   (two-way-stream *terminal-io*)
		   (echo-stream (make-echo-stream *standard-output* *standard-output*))
		   (string-input-stream (make-string-input-stream ""))
		   (string-output-stream (make-string-output-stream));FIXME user defined, socket
		   (random-state (make-random-state)) 
		   (readtable (standard-readtable)) 
		   (non-generic-compiled-function (function eq))
		   (generic-function (set-d-tt 1 (lambda nil nil)))
		   ,@(mapcar (lambda (x) `(,(cadr x) (make-vector ',(car x) 1 nil nil nil 0 nil nil))) +vtps+)
		   ,@(mapcar (lambda (x) `(,(cadr x) (make-array1 ',(car x) nil nil nil 0 '(1 1)))) +atps+)
		   (cons '(1))
		   (keyword :a)
		   (null nil)
		   (true t)
		   (gsym 'a)))


(defun t-to-nil (x) (unless (eq x t) x))
(setf (get 't-to-nil 'compiler::cmp-inline) t)

(eval-when
 (compile eval)
 (defconstant +s+ `(list sequence function symbol boolean 
			 proper-cons
			 fixnum integer rational float real number;complex
			 character
			 hash-table pathname
			 stream 
			 double-float single-float
			 structure-object ;FIXME
			 unsigned-byte
			 signed-byte))
 (defconstant +rr+ (lremove-if (lambda (x) (type-and (cmp-norm-tp '(or complex array)) (cmp-norm-tp (car x)))) +r+)))

(defconstant +tfns1+ '(tp0 tp1 tp2 tp3 tp4 tp5 tp6 tp7))

(defconstant +rs+ (mapcar (lambda (x) 
		       (cons x 
			     (mapcar (lambda (y) 
				       (cons (cmp-norm-tp (pop y)) (funcall x (eval (car y))))) +r+))) +tfns1+))

(defconstant +kt+ (mapcar 'car (cdar +rs+)))





(defvar *hs* nil)
(defun memoize3 (fn tst &aux (o (symbol-function fn)))
  (setf (get fn 'unmemoize) o
	(symbol-function fn)
	(let ((h (cdar (push (cons fn (make-hash-table :test tst)) *hs*))))
	  (lambda (x y &aux (z (car (rassoc y +rs+))) (zh (or (gethash z h) (setf (gethash z h) (make-hash-table :test tst)))))
	    (or (gethash x zh) (setf (gethash x zh) (funcall o x y)))))))

 (defun unmemoize2 (fn)
   (setf (symbol-function fn) (get fn 'unmemoize))
   (remprop fn 'unmemoize)
   (setq *hs* (lremove fn *hs* :key 'car)))
 
(eval-when
 (compile eval)
 (defun msym (x) (intern (string-concatenate (string x) "-TYPE-PROPAGATOR") :compiler)))

#.`(progn
     ,@(mapcar (lambda (x &aux (s (msym x))) 
		 `(progn 
		    (defun ,s (f x &aux (rl (load-time-value (cdr (assoc ',x +rs+)))))
		      (declare (ignore f))
		      (cmp-norm-tp (cons 'member (tps-ints (type-and-list (list x)) rl))))
		    (setf (get ',x 'compiler::type-propagator) ',s)
		    (setf (get ',s 'compiler::cmp-inline) t))) +tfns1+))

#.`(defun listp (x) (if (eql 0 (tp2 x)) ,(mkinf 'x 'list '(t)) ,(mkinf 'x '(not list) '(nil))));FIXME



(defun ib (o l &optional f)
  (let* ((a (atom l))
	 (l (if a l (car l)))
	 (l (unless (eq '* l) l)))
    (or (not l) (if f (if a (<= l o) (< l o)) (if a (<= o l) (< o l))))))
(setf (get 'ib 'compiler::cmp-inline) t)

(defun db (o tp)
  (let* ((b (car tp))(i -1))
    (cond ((not b))
	  ((eq b '*))
	  ((not (listp b)) (eql (c-array-rank o) b))
	  ((eql (length b) (c-array-rank o))(not (member-if-not (lambda (x) (incf i) (or (eq x '*) (eql x (array-dims o i)))) b))))))
	 

(defun dbv (o tp)
  (let* ((b (car tp))(b (if (listp b) (car b) b)))
     (cond ((not b))
	   ((eq b '*))
	   ((eql (c-array-dim o) b)))))
(setf (get 'db 'compiler::cmp-inline) t)
(setf (get 'dbv 'compiler::cmp-inline) t)


(defun ibb (o tp)
  (and (ib o (car tp) t) (ib o (cadr tp))))
(setf (get 'ibb 'compiler::cmp-inline) t)

(defun get-included (name)
  (let ((sd (get name 's-data)))
    (cons (sdata-name sd)
	  (mapcan 'get-included (sdata-included sd)))))

(defun sdata-included (x)
  (the proper-list (*object (c-structure-self x) 3 nil nil)));FIXME s-data-name boostrap loop
(setf (get 'sdata-included 'compiler::cmp-inline) t)
(defun sdata-name (x)
  (the symbol (*object (c-structure-self x) 0 nil nil)));FIXME s-data-name boostrap loop
(setf (get 'sdata-name 'compiler::cmp-inline) t)
(defun structure-name (x) (sdata-name (c-structure-def x)))
(setf (get 'structure-name 'compiler::cmp-inline) t)

(eval-when
 (compile load eval)

 (defun type-and-list (tps)
  (mapcan (lambda (x) (mapcan (lambda (y &aux (z (type-and x y))) (when z `((,x ,y ,z)))) +kt+)) tps))

 (defun best-type-of (c &aux (r (lreduce 'set-difference c :key 'car :initial-value +kt+))(tps (nconc (mapcar 'car c) (list r))))
   (or (caar (member-if (lambda (x &aux (f (pop x))
				   (z (mapcan (lambda (y) (lremove-duplicates (mapcar (lambda (z) (cdr (assoc z x))) y))) tps)))
			  (eq z (lremove-duplicates z))) +rs+))
       (caar +rs+)))
 
 (defun malist (car cadr a)
   (mapcar (lambda (x) (cons x (mapcar car (lremove-if-not (lambda (z) (eq (funcall cadr z) x)) a)))) (lremove-duplicates (mapcar cadr a))))
 
(defun calist2 (a)
  (let* ((b (malist 'car 'cadr a))
	 (b (mapcar 'cdr (malist 'car 'cadr b))))
    (mapcar (lambda (x) (cons x (lremove-duplicates (mapcar 'car (lremove-if-not (lambda (z) (member (cadr z) x)) a))))) b)))

(defun tps-ints (a rl)
  (lremove-duplicates (mapcar (lambda (x) (cdr (assoc (cadr x) rl))) a))))

(eval-when
 (compile eval)
 (defun cfn (tp code) 
   (let* ((nc (cmp-norm-tp tp))
	  (a (type-and-list (list nc)))(c (calist2 a))
	  (f (best-type-of c)))
     `(case (,f o)
	    (,(tps-ints a (cdr (assoc f +rs+))) ,(mkinf 'o nc (list code)))
	    (otherwise ,(mkinf 'o `(not ,nc) '(nil))))))
  (defun mksubb (o tp x)
   (case x
	 ((integer ratio single-float double-float short-float long-float float rational real) `(ibb ,o ,tp))
	 (proper-cons `(unless (improper-consp ,o) t))
	 ((structure structure-object) `(if tp (when (member (structure-name ,o) tp) t) t))
	 (mod `(let ((s (pop ,tp))) (<= 0 ,o (1- s))));FIXME error null tp
	 (signed-byte `(if tp (let* ((s (pop ,tp))(s (when s (ash 1 (1- s))))) (<= (- s) ,o (1- s))) t))
	 (unsigned-byte `(if tp (let* ((s (pop ,tp))(s (when s (ash 1 s)))) (<= 0 ,o (1- s))) t))
	 (cons `(if tp (and (typep (pop ,o) (pop ,tp)) (typep ,o (car ,tp)) t) t))
	 (otherwise t))))


#.`(defun mtc (o tp &aux (otp (car tp))(tp otp)(lp (listp tp))(ctp (if lp (car tp) tp))(tp (when lp (cdr tp))))
     (case (when ctp (upgraded-complex-part-type ctp))
	   ,@(mapcar (lambda (x &aux (n (pop x)))
			 `(,n ,(cfn (car x) `(and (ibb (realpart o) tp) (ibb (imagpart o) tp))))) +ctps+)
	   (otherwise ,(cfn 'complex '(if tp (and (typep (realpart o) otp) (typep (imagpart o) otp) t) t)))))
					;FIXME the mutual recursion on typep prevents return type determination
(setf (get 'mtc 'compiler::cmp-inline) t)
		       

#.`(defun mta (o tp &aux (lp (listp tp))(ctp (if lp (car tp) tp))(tp (when lp (cdr tp))))
     (and (case (when ctp (upgraded-array-element-type ctp))
		,@(mapcar (lambda (x &aux (n (pop x))(n (if (eq t n) (list n) n)))
			    `(,n ,(cfn (car x) t))) (mapcar (lambda (x y) `(,(car x) (or ,(cadr x) ,(cadr y)))) +vtps+ +atps+))
		(otherwise ,(cfn 'array t)))
	  (db o tp)))
(setf (get 'mta 'compiler::cmp-inline) t)


#.`(defun mtv (o tp &aux (lp (listp tp))(ctp (if lp (car tp) tp))(tp (when lp (cdr tp))))
     (and (case (when ctp (upgraded-array-element-type ctp))
		,@(mapcar (lambda (x &aux (n (pop x))(n (if (eq t n) (list n) n)))
			    `(,n ,(cfn (car x) t))) +vtps+)
		(otherwise ,(cfn 'vector t)))
	  (dbv o tp)))
(setf (get 'mtv 'compiler::cmp-inline) t)

		       
(defun vtp (tp &aux (tp (cadr tp)))
  (or (eql 1 tp) (unless (atom tp) (not (cdr tp)))))
(setf (get 'vtp 'compiler::cmp-inline) t)


(defun expand-deftype (type &aux (atp (listp type)) (ctp (if atp (car type) type)) (tp (when atp (cdr type))))
  (cond ((si-classp ctp) (si-class-name ctp))
	((get ctp 's-data) `(structure ,@(get-included ctp)))
	((let ((tem (get ctp 'deftype-definition)))
	   (when tem
	     (let ((ntype (apply tem tp)))
	       (unless (eq ctp (if (listp ntype) (car ntype) ntype))
		 ntype)))))))

#.`(defun typep (o otp &optional env &aux (lp (listp otp)))
     (declare (ignore env))
     (labels ((tpi (o ctp tp &aux (ctp (if (when (eq ctp 'array) (vtp tp)) 'vector ctp)))
		   (when (or (eq ctp 'values) (when tp (eq ctp 'function)))
		     (error 'type-error :datum (cons ctp tp) :expected-type 'type-spec))
		   (case ctp
			 ,@(mapcar (lambda (x &aux (c (if (atom x) x (car x)))(code (mksubb 'o 'tp c))) 
				     `(,c ,(cfn c code))) (append +s+ +rr+))
			 (member (when (if (cdr tp) (member o tp) (eql o (car tp))) t));FIXME
			 (eql (eql o (car tp)))
			 (complex (mtc o tp))
			 (vector (mtv o tp))
			 (array (mta o tp))
			 (or (when tp (or (typep o (car tp)) (tpi o 'or (cdr tp)))))
			 (and (if tp (and (typep o (car tp)) (tpi o 'and (cdr tp))) t))
			 (not (not (typep o (car tp))))
			 (satisfies (when (funcall (car tp) o) t))
			 ((nil t) ctp)
			;FIXME the mutual recursion on typep prevents return type determination
			 (otherwise (let ((tem (expand-deftype otp))) (when tem (when (typep o tem) t)))))))
	     
	     (tpi o (if lp (car otp) otp) (when lp (cdr otp)))))



(defun sub-tp-1 (t1 t2 a &aux (z (cdar (member-if (lambda (x) (and (eq (pop x) t1) (eq (car x) t2))) a))))
  (not (eq (car z) (cadr z))))

(defun add-t-p (x a tpsff &aux (tp (car (pop x))));FIXME
  (when (member-if (lambda (z) (sub-tp-1 z tp a)) x)
    (let ((x (cmp-norm-tp (cons 'or (mapcar (lambda (x) (cadr (assoc x tpsff))) x)))))
      (unless (eq tp x) x))))

(defun sub-p (x a &aux (z (cdr x)))
  (or (cdr z)
      (member-if (lambda (x) (when (eq (pop x) (car z)) (not (eq (pop x) (car x))))) a)))

(defun sub-p1 (tp a)
  (member-if (lambda (x) (when (eq (pop x) tp) (not (eq (pop x) (car x))))) a))

(defun branch (tpsff x a f &aux (z (cdr (assoc x tpsff)))(tp (pop z)))
  (if (sub-p1 x a) `((typep ,f ',tp) ,(mkinfm f tp z)) z))

(defun branch1 (x a tpsff f o)
  (let* ((z (mapcar (lambda (x) (branch tpsff x a f)) (cdr x)))
	 (s (add-t-p x a tpsff))
	 (z (if s (nconc z `((t ,(mkinfm f `(not ,s) (cdar o))))) z)))
    (if (member-if (lambda (x) (when (listp x) (cdr x))) z) `(cond ,@z) (caar z))));FIXME


(defun branches (f a tpsff fnl o c)
  (mapcar (lambda (x)
	    `(,(lremove-duplicates (mapcar (lambda (x) (cdr (assoc x fnl))) (car x)))
	      ,(mkinfm f (if (cdar x) (cons 'or (car x)) (caar x)) (list (branch1 x a tpsff f o))))) c ))


(defmacro typecase (keyform &rest clauses &aux (key (if (symbolp keyform) keyform (sgen))))
  (declare (optimize (safety 2)))
  (labels ((l (x &aux (c (pop x))(tp (pop c))(fm (if (cdr c) (cons 'progn c) (car c)))(y (when x (l x))))
	      (if (or (eq tp t) (eq tp 'otherwise)) fm `(if (typep ,key ',tp) ,fm ,y))))
	  (let ((x (l clauses)))
	    (if (eq key keyform) x `(let ((,key ,keyform)) ,x)))))

(defmacro etypecase (keyform &rest clauses &aux (key (if (symbolp keyform) keyform (gensym))))
  (declare (optimize (safety 2)))
  (check-type clauses (list-of proper-list))
  (let ((tp `(or ,@(mapcar 'car clauses))))
    `(typecase ,keyform ,@clauses (t (error 'type-error :datum ,key :expected-type ',tp)))))

(define-compiler-macro typecase (&whole w x &rest ff)
  (let* ((bind (unless (symbolp x) (list (list (gensym) x))));FIXME sgen?
	 (f (or (caar bind) x))
	 (o (member-if (lambda (x) (or (eq (car x) t) (eq (car x) 'otherwise))) ff))
	 (ff (if o (ldiff ff o) ff))
	 (o (list (cons t (cdar o))))
	 (tps (mapcar 'cmp-norm-tp (mapcar 'car ff)))
	 z (tps (mapcar (lambda (x) (prog1 (type-and x (cmp-norm-tp `(not ,z))) (setq z (type-or1 x z)))) tps))
	 (a (type-and-list tps))(c (calist2 a))
	 (fn (best-type-of c))
	 (fm `(case (,fn ,f)
		    ,@(branches f a (mapcar 'cons tps ff) (cdr (assoc fn +rs+)) o c)
		    (otherwise ,(mkinfm f `(not (or ,@(mapcan 'car c))) (cdar o))))))
    (if bind `(let ,bind ,fm) fm)))


(defun funcallable-symbol-function (x) (c-symbol-gfdef x))

(define-compiler-macro infer-type (x y z)
  `(infer-tp ,(compiler::cmp-eval x) ,(compiler::cmp-eval y) ,z));FIXME

