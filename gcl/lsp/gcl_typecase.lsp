(in-package :si)

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

(defmacro infer-tp (x y z) (declare (ignore x y)) z)

(defun mkinfm (f tp z &aux (z (if (cdr z) `(progn ,@z) (car z))))
  `(infer-tp ,f ,tp ,z))

(defun branch (tpsff x a f &aux (q (cdr x))(x (car x))(z (cdr (assoc x tpsff)))(tp (pop z)))
  (if q
      (mapcar (lambda (q) `((typep ,f ',q) ,(mkinfm f q z)))
	      (if (when (consp q) (eq (car q) 'or)) (cdr q) (list q)))
    (list z)))

(defun ?-add (x tp) (if (cdr tp) (cons x tp) (car tp)))

(defun branch1 (x a tpsff f o)
  (let* ((z (mapcan (lambda (x) (branch tpsff x a f)) (cdr x)))
	 (s (lremove nil (mapcar 'cdr (cdr x))))
	 (z (if s (nconc z `((t ,(mkinfm f `(not ,(?-add 'or s)) (cdar o))))) z)))
    (if (member-if (lambda (x) (when (listp x) (cdr x))) z) `(cond ,@z) (caar z))))

(defun branches (f a tpsff fnl o c)
  (mapcar (lambda (x)
	    `(,(lremove-duplicates (mapcar (lambda (x) (cdr (assoc x fnl))) (car x)))
	      ,(mkinfm f (?-add 'or (car x)) (list (branch1 x a tpsff f o))))) c))

(define-compiler-macro typecase (&whole w x &rest ff)
  (let* ((bind (unless (symbolp x) (list (list (gensym) x))));FIXME sgen?
	 (f (or (caar bind) x))
	 (o (member-if (lambda (x) (or (eq (car x) t) (eq (car x) 'otherwise))) ff))
	 (ff (if o (ldiff ff o) ff))
	 (o (list (cons t (cdar o))))
	 (tps (mapcar 'cmp-norm-tp (mapcar 'car ff)))
	 (z nil) (tps (mapcar (lambda (x) (prog1 (type-and x (cmp-norm-tp `(not ,z))) (setq z (type-or1 x z)))) tps))
	 (a (type-and-list tps))(c (calist2 a))
	 (fn (best-type-of c))
	 (fm `(case (,fn ,f)
		    ,@(branches f a (mapcar 'cons tps ff) (cdr (assoc fn +rs+)) o c)
		    (otherwise ,(mkinfm f `(not (or ,@(apply 'append (mapcar 'car c)))) (cdar o))))))
    (if bind `(let ,bind ,fm) fm)))

(defun funcallable-symbol-function (x) (c-symbol-gfdef x))



(defun funid-sym-p (funid &optional err)
  (typecase
   funid
   (symbol funid)
   ((cons (member setf) (cons symbol null)) (setf-sym (cadr funid)))
   (otherwise (when err (error 'type-error :datum funid :expected-type 'function-name)))))

(defun funid-sym (funid)
  (funid-sym-p funid t))

(defun funid-p (funid &optional err)
  (typecase
   funid
   (symbol funid)
   ((cons (member lambda) t) funid)
   ((cons (member setf) (cons symbol null)) (setf-sym (cadr funid)))
   (otherwise (when err (error 'type-error :datum funid :expected-type 'function-identifier)))))

(defun funid (funid)
  (funid-p funid t))






(defconstant +xi+ (let* ((a (type-and-list (list (cmp-norm-tp `(and number (not immfix))))))
			 (rl (cdr (assoc 'tp8 +rs+)))
			 (i (lremove-duplicates (mapcar (lambda (x) (cdr (assoc (cadr x) rl))) a)))
			 (mi (apply 'min i))(xi (apply 'max i))(m (apply '+ i)))
;		    (assert (= mi 1))
;		    (assert (= m (/ (* xi (1+ xi)) 2)))
		    xi))


(eval-when
 (compile eval)
 (defun mtp8b (tpi &aux (rl (cdr (assoc 'tp8 +rs+)))
		   (tp (lreduce 'type-or1 (mapcar 'car (lremove-if-not (lambda (x) (eql tpi (cdr x))) rl)) :initial-value nil)))
   `(infer-type
     'x ',tp
     (infer-type
      'y ',tp
      ,(let ((x (car (member-if (lambda (x) (eql tpi (cdr (assoc (cmp-norm-tp `(and ,(get x 'lisp-type) (not immfix))) rl))))
				'(:fixnum :float :double :fcomplex :dcomplex)))))
	 (if x `(,(intern (string-upcase (strcat "C-" x "-=="))) x y)
	   (cond ((eq tp (cmp-norm-tp 'bignum)) `(eql 0 (mpz_cmp x y)))
		 ((eq tp (cmp-norm-tp 'ratio)) `(and (eql (numerator x) (numerator y)) (eql (denominator x) (denominator y))))
		 ((eq tp (cmp-norm-tp '(complex rational))) 
		  `(and (eql (realpart x) (realpart y))
			(eql (imagpart x) (imagpart y))))
		 ((error "Unknown tp")))))))))
			   
#.`(defun num-comp (x y tp)
     (declare (fixnum tp))
     (case tp
	    ,@(let (r) (dotimes (i +xi+) (push `(,(1+ i) ,(mtp8b (1+ i))) r)) (nreverse r))))
(setf (get 'num-comp 'compiler::cmp-inline) t)

(defun eql (x y)
  (or (eq x y)
      (let ((tx (tp8 x))(ty (tp8 y))) 
	(when (= tx ty)
	  (num-comp x y tx)))))

(defun eql-with-tx (x y tx)
  (declare (fixnum tx))
  (or (eq x y)
      (let ((ty (tp8 y))) 
	(when (= tx ty)
	  (num-comp x y tx)))))
(setf (get 'eql-with-tx 'compiler::cmp-inline) t)
