(in-package :si)

(defun infer-type (x y z) (declare (ignore x y)) z);avoid macroexpansion in bootstrap
(define-compiler-macro infer-type (x y z)
  `(infer-tp ,(compiler::cmp-eval x) ,(compiler::cmp-eval y) ,z))

(defun mkinf (f tp z &aux (z (if (cdr z) `(progn ,@z) (car z))))
  `(infer-type ',f ',tp ,z))

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

(defun sdata-includes (x)
  (the (or s-data null) (*object (c-structure-self x) 4 nil nil)));FIXME s-data-name boostrap loop
(setf (get 'sdata-includes 'compiler::cmp-inline) t)
(defun sdata-included (x)
  (the proper-list (*object (c-structure-self x) 3 nil nil)));FIXME s-data-name boostrap loop
(setf (get 'sdata-included 'compiler::cmp-inline) t)
(defun sdata-name (x)
  (the symbol (*object (c-structure-self x) 0 nil nil)));FIXME s-data-name boostrap loop
(setf (get 'sdata-name 'compiler::cmp-inline) t)

;; (defun mss (o sn) (or (eq o sn) (when (sdata-included sn) (let ((o (sdata-includes o))) (when o (mss o sn))))))
;; (setf (get 'mss 'compiler::cmp-inline) t)

(defun structure-name (o) (sdata-name (c-structure-def o)))
(setf (get 'structure-name 'compiler::cmp-inline) t)


(eval-when
 (compile eval)
 (defun cfn (tp code) 
   (let* ((nc (cmp-norm-tp tp))
	  (a (type-and-list (list nc)))(c (calist2 a))
	  (f (best-type-of c))(it (caar c))(it (if (cdr it) (cons 'or it) (car it))))
     `(case (,f o)
	    (,(tps-ints a (cdr (assoc f +rs+))) ,(mkinf 'o it (list code)))
	    (otherwise ,(mkinf 'o `(not ,it) '(nil))))))
  (defun mksubb (o tp x)
   (case x
	 ((immfix bfix bignum integer ratio single-float double-float short-float long-float float rational real) `(ibb ,o ,tp))
	 (proper-cons `(unless (improper-consp ,o) t))
;	 ((structure structure-object) `(if tp (mss (c-structure-def ,o) (car tp)) t))
	 ((structure structure-object) `(if tp (when (member (structure-name ,o) tp) t) t))
	 (std-instance `(if tp (when (member (car tp) (si-class-precedence-list (si-class-of ,o))) t) t))
	 (mod `(let ((s (pop ,tp))) (<= 0 ,o (1- s))));FIXME error null tp
	 (signed-byte `(if tp (let* ((s (pop ,tp))(s (when s (ash 1 (1- s))))) (<= (- s) ,o (1- s))) t))
	 (unsigned-byte `(if tp (let* ((s (pop ,tp))(s (when s (ash 1 s)))) (<= 0 ,o (1- s))) (<= 0 ,o)))
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

(defun valid-class-name (class &aux (name (si-class-name class)))
  (when (eq class (si-find-class name nil))
    name))
(setf (get 'valid-class-name 'compiler::cmp-inline) t)

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

#.`(defun typep (o otp &optional env &aux (lp (listp otp)))
     (declare (ignore env))
     (labels ((tpi (o ctp tp &aux (ctp (if (when (eq ctp 'array) (vtp tp)) 'vector ctp)))
		   (when (or (eq ctp 'values) (when tp (eq ctp 'function)))
		     (error 'type-error :datum (cons ctp tp) :expected-type 'type-spec))
		   (case ctp
			 ,@(mapcar (lambda (x &aux (c (if (atom x) x (car x)))) 
				     `(,c ,(cfn c (mksubb 'o 'tp c)))) (append +s+ +rr+))
			 (member (when (if (cdr tp) (member o tp) (eql o (car tp))) t));FIXME
			 (eql (eql o (car tp)))
			 (complex (mtc o tp))
			 (vector (mtv o tp))
			 (array (mta o tp))
			 (or (when tp (or (typep o (car tp)) (tpi o 'or (cdr tp)))))
			 (and (if tp (and (typep o (car tp)) (tpi o 'and (cdr tp))) t))
			 (not (not (typep o (car tp))))
			 (satisfies (when (funcall (car tp) o) t))
			 ((nil t) (when ctp t));FIXME ctp not inferred here
			 (otherwise (let ((tem (expand-deftype otp))) (when tem (typep o tem)))))))
	     
	     (tpi o (if lp (car otp) otp) (when lp (cdr otp)))))


#.`(defun type-of (x)
     (typecase
      x
      (null 'null)(true 'true)
      ,@(mapcar (lambda (y) `(,y `(,',y ,x ,x))) +range-types+)
      ,@(mapcar (lambda (y &aux (b (pop y))) 
		 `(,(car y) (let ((r (realpart x))(i (imagpart x))) `(complex (,',b ,(min r i) ,(max r i)))))) +ctps+)
      ,@(mapcar (lambda (y &aux (b (car y))) `((array ,b) `(array ,',b ,(array-dimensions x)))) +vtps+)
      (std-instance (let* ((c (si-class-of x))) (or (valid-class-name c) c)))
      (structure (sdata-name (c-structure-def x)))
      ,@(mapcar (lambda (x) `(,x ',x)) (set-difference +kt+ 
						       (mapcar 'cmp-norm-tp '(boolean number array structure std-instance))
						       :test 'type-and))))


;; (eval-when
;;  (compile eval)
;;  (defconstant +s+ `(list sequence function symbol boolean 
;; 			 proper-cons
;; 			 fixnum integer rational float real number;complex
;; 			 character
;; 			 hash-table pathname
;; 			 stream 
;; ;			 double-float single-float
;; 			 structure-object ;FIXME
;; 			 ))
;;  (defconstant +rr+ (lremove-if (lambda (x) (type-and (cmp-norm-tp '(or complex array)) (cmp-norm-tp (car x)))) +r+)))


;; (defun ibm (o l &optional f)
;;   (let* ((a (atom l))
;; 	 (l (if a l (car l)))
;; 	 (l (unless (eq '* l) l)))
;;     (or (not l) (if f (if a `(<= ,l ,o) `(< ,l ,o)) (if a `(<= ,o ,l) `(< ,o ,l))))))

;; (defun ibbm (o tp)
;;   (and (ibm o (car tp) t) (ibm o (cadr tp))))

;; (defun cfnm (tp o code) 
;;   (let* ((nc (cmp-norm-tp tp))
;; 	 (a (type-and-list (list nc)))(c (calist2 a))
;; 	 (f (best-type-of c))(it (caar c))(it (if (cdr it) (cons 'or it) (car it))))
;;     `(case (,f ,o)
;; 	   (,(tps-ints a (cdr (assoc f +rs+))) ,(mkinf o it (list code)))
;; 	   (otherwise ,(mkinf o `(not ,it) '(nil))))))
;; (defun mksubbm (o tp x)
;;   (case x
;; 	((integer ratio single-float double-float short-float long-float float rational real) (ibbm o tp))
;; 	(proper-cons `(unless (improper-consp ,o) t))
;; 	((structure structure-object) (if tp `(mss (c-structure-def ,o) ',(car tp)) t))
;; 	(std-instance (if tp `(when (member ',(car tp) (si-class-precedence-list (si-class-of ,o))) t) t))
;; 	(cons (if tp `(and (typep (pop ,o) ',(pop tp)) (typep ,o ',(car tp)) t) t))
;; 	(otherwise t)))


;; #.`(defun tpim (o ctp tp otp &aux (ctp (if (when (eq ctp 'array) (vtp tp)) 'vector ctp)))(print (list 'foo o ctp tp otp))
;;      (when (or (eq ctp 'values) (when tp (eq ctp 'function)))
;;        (error 'type-error :datum (cons ctp tp) :expected-type 'type-spec))
;;      (case ctp
;; 	   ,@(mapcar (lambda (x &aux (c (if (atom x) x (car x)))) 
;; 		       `(,c (cfnm ',c o (mksubbm o tp ',c)))) (append +s+ +rr+))
;; 	   (member (when (if (cdr tp) `(member ,o ',tp) `(eql ,o ,(car tp))) t));FIXME
;; 	   (eql `(eql ,o ,(car tp)))
;; 	   (complex (mtcm o tp))
;; 	   (vector (mtvm o tp))
;; 	   (array (mtam o tp))
;; 	   (or (when tp `(or ,(typepm o (car tp)) ,(tpim o 'or (cdr tp) nil))))
;; 	   (and (if tp `(and ,(typepm o (car tp)) ,(tpim o 'and (cdr tp) nil)) t))
;; 	   (not `(not ,(typepm o (car tp))))
;; 	   (satisfies `(when (funcall ',(car tp) ,o) t))
;; 	   ((nil t) (when ctp t));FIXME ctp not inferred here
;; 	   (otherwise (let ((tem (expand-deftype otp))) (when tem (typepm o tem))))))


;; #.`(defun typepm (o otp &optional env &aux (lp (listp otp)))
;;      (declare (ignore env))(print (list o otp lp))
;;      (tpim o (if lp (car otp) otp) (when lp (cdr otp)) otp))

;; (defmacro ttm (o tp) (typepm o tp))
