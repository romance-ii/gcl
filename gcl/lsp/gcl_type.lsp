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
      ((immfix bfix bignum ratio short-float long-float)
       (let* ((d (cdr tp))(dd (cadr d))(da (car d)))
	 (and (numberp da) (numberp dd) (= da dd) d)))
      ((member eql) (let ((d (cdr tp))) (unless (cdr d) d))))))
;(declaim (inline atomic-tp))

(defun t-to-nil (x) (unless (eq x t) x))
(setf (get 't-to-nil 'compiler::cmp-inline) t)

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
  (flet ((to (t1 t2 &aux (x (uniq-tp-from-stack `or t1 t2))) (type-or1-int t1 t2 x)));(cmp-norm-tp x) FIXME no values support
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





(defconstant +ctps+ (mapcar (lambda (x) (list x (intern (string-concatenate "COMPLEX-" (string x))))) +complex-types+));FIXME
(defconstant +vtps+ (mapcar (lambda (x) (list x (intern (string-concatenate "VECTOR-"  (string x))))) +array-types+))
(defconstant +atps+ (mapcar (lambda (x) (list x (intern (string-concatenate "ARRAY-"   (string x))))) +array-types+))

#.`(progn
     ,@(mapcar (lambda (x &aux (s (cadr x))(x (car x))) 
		 `(deftype ,s (&optional (l '*) (h '*)) `(complex (,',x ,l ,h)))) +ctps+)
     ,@(mapcar (lambda (x &aux (s (cadr x))(x (car x))) 
		 `(deftype ,s (&optional (d '*)) `(vector ,',x ,d))) +vtps+)
     ,@(mapcar (lambda (x &aux (s (cadr x))(x (car x))) 
		 `(deftype ,s (&optional (d '*)) `(and (array ,',x ,d) (not vector)))) +atps+))


(defconstant +r+ `((immfix 1) 
		   (bfix  most-positive-fixnum)
		   (bignum (1+ most-positive-fixnum))
		   (ratio 1/2)
		   (short-float 1.0s0) 
		   (long-float 1.0)
		   ,@(mapcar (lambda (x &aux (v (case (car x) (integer 1) (ratio 1/2) (short-float 1.0s0) (long-float 1.0)))) 
			       `(,(cadr x) (complex ,v ,v))) +ctps+)
		   (standard-char #\a)
		   (non-standard-base-char #\Return)
		   (structure (make-dummy-structure)) 
		   (std-instance (set-d-tt 1 (make-dummy-structure))) 
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
		   (non-standard-generic-compiled-function (function eq))
		   (non-standard-generic-interpreted-function (set-d-tt 2 (lambda nil nil)))
		   (standard-generic-compiled-function (set-d-tt 1 (lambda nil nil)))
		   (standard-generic-interpreted-function (set-d-tt 3 (lambda nil nil)))
		   ,@(mapcar (lambda (x) `(,(cadr x) (make-vector ',(car x) 1 nil nil nil 0 nil nil))) +vtps+)
		   ,@(mapcar (lambda (x) `(,(cadr x) (make-array1 ',(car x) nil nil nil 0 '(1 1) nil))) +atps+)
                   (spice (alloc-spice))
		   (cons '(1))
		   (keyword :a)
		   (null nil)
		   (true t)
		   (gsym 'a)))

(defconstant +rn+ (mapcar (lambda (x) (cons (cmp-norm-tp (car x)) (cadr x))) +r+))

(defconstant +tfns1+ '(tp0 tp1 tp2 tp3 tp4 tp5 tp6 tp7 tp8))

(defconstant +rs+ (mapcar (lambda (x) (cons x (mapcar (lambda (y) (cons (car y) (funcall x (eval (cdr y))))) +rn+))) +tfns1+))

(defconstant +kt+ (mapcar 'car +rn+))

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
		    (setf (get ',x 'compiler::c1no-side-effects) t))) +tfns1+))

(mapc (lambda (x) 
	(setf (gethash x *and-tp-hash*) (make-hash-table :test 'eq :size 256))
	(setf (gethash x  *or-tp-hash*) (make-hash-table :test 'eq :size 256))) +kt+)


(defun type-and-list (tps)
  (mapcan (lambda (x) (mapcan (lambda (y &aux (z (type-and x y))) (when z `((,x ,y ,z)))) +kt+)) tps))

(defun best-type-of (c &aux (r (lreduce 'set-difference c :key 'car :initial-value +kt+))(tps (nconc (mapcar 'car c) (list r))))
  (or (caar (member-if (lambda (x &aux (f (pop x))
				  (z (mapcan (lambda (y) (lremove-duplicates (mapcar (lambda (z) (cdr (assoc z x))) y))) tps)))
			 (eq z (lremove-duplicates z))) +rs+))
      (caar +rs+)))

;; (defun malist (car cadr a)
;;   (mapcar (lambda (x) (cons x (mapcar car (lremove-if-not (lambda (z) (eq (funcall cadr z) x)) a)))) (lremove-duplicates (mapcar cadr a))))

(defun calist2 (a)
  (let* ((subs (lremove-duplicates (mapcar 'cadr (lremove-if (lambda (x) (eq (cadr x) (caddr x))) a))))
	 (x (mapcar (lambda (x) (cons (list x) (mapcar (lambda (x) (cons (car x) (caddr x)))
						       (lremove-if-not (lambda (y) (eq (cadr y) x)) a)))) subs))
	 (ra (lremove-if (lambda (x) (member (cadr x) subs)) a))
	 (y (mapcar (lambda (x) (list (mapcar 'cadr (lremove-if-not (lambda (y) (eq x (car y))) ra)) (cons x nil))) 
		    (lremove-duplicates (mapcar 'car ra)))))
    (nconc x y)))

;; (defun calist2 (a)
;;   (let* ((b (malist 'car 'cadr a))
;; 	 (b (mapcar 'cdr (malist 'car 'cadr b))))
;;     (mapcar (lambda (x) (cons x (lremove-duplicates (mapcar 'car (lremove-if-not (lambda (z) (member (cadr z) x)) a))))) b)))

(defun tps-ints (a rl)
  (lremove-duplicates (mapcar (lambda (x) (cdr (assoc (cadr x) rl))) a)))

(defun ints-tps (a rl)
  (lreduce (lambda (y x) (if (member (cdr x) a) (type-or1 y (car x)) y)) rl :initial-value nil))
