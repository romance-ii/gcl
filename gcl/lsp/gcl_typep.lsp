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


(defun expand-deftype (type &aux (atp (listp type)) (ctp (if atp (car type) type)) (tp (when atp (cdr type))))
  (cond ((si-classp ctp) (the symbol (si-class-name ctp)));FIXME pcl funcall miss-fn
	((get ctp 's-data) `(structure ,@(get-included ctp)))
	((let ((tem (get ctp 'deftype-definition)))
	   (when tem
	     (let ((ntype (apply tem tp)))
	       (unless (eq ctp (if (listp ntype) (car ntype) ntype))
		 ntype)))))))

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
			 ((nil t) (when ctp t));FIXME ctp not inferred here
			 (otherwise (let ((tem (expand-deftype otp))) (when tem (typep o tem)))))))
	     
	     (tpi o (if lp (car otp) otp) (when lp (cdr otp)))))
