(in-package "BCOMP")


(defvar *immediate-types*
  '(fixnum character short-float double-float boolean))

(dolist (v
	 '((t 	array				package		
		atom		float		pathname	
		bignum		function	random-state	
		hash-table	ratio		single-float
		rational	standard-char
		keyword		readtable	stream
		common		list		sequence	
		compiled-function  		
		complex		nil		signed-byte	symbol
		cons		null		unsigned-byte	t
		number		simple-array	vector
		)
	   (bit bit)
	   (integer integer)
	   (double-float long-float single-float)
	   (character string-char)
	   ((vector character) string simple-string)
	   ((vector bit) bit-vector  simple-bit-vector)
	   ((vector t) simple-vector)
	   (stream stream)
	   (dynamic-extent dynamic-extent )
	   (fix-or-sf-or-df fix-or-sf-or-df)
	   ))
  (dolist (w (cdr v))
    (setf (get w 'comp-type) (car v))))
(dolist (v *immediate-types*) (setf (get v 'comp-type) v))

(deftype fix-or-sf-or-df nil '(or fixnum short-float double-float))
(deftype boolean nil t)
(proclaim '(declaration dynamic-extent))
;(deftype dynamic-extent nil t)

(defun grab-1-decl (x decls &aux type l tem place)
  (tagbody
   (go begin)
   ERROR
   (comp-warn "bad declaration ~a" x)
   (return-from grab-1-decl decls)
   BEGIN
  (or (consp x) (go error))
  (setq type  (car x) l (cdr x))
  (or (null l) (consp l) (go error))
  (unless
   (symbolp type)
   (comp-warn "bad declaration ~a" x)
   (return-from grab-1-decl decls)
   )
  (cond ((or (setq tem (get type 'comp-type))
	     (and (eq type 'type)
		  (consp l)
		  (setq tem (comp-type (car l)))
		  (setq l (cdr l))))
	 (unless (eq t (setq tem (comp-type tem)))
		 (or decls (setq decls (list nil)))
		 (dolist-safe (v l)
		   (or (symbolp v) (go error))
		   (push (cons v tem) (car decls)))))
	((eq type 'special)
	 (cond ((null decls) (setq decls (list nil nil)))
	       ((null (cdr decls))
		(setf (cdr decls) (list nil))))
	 (setq place (cdr decls))
	 (dolist-safe (v l)
	   (or (symbolp v) (go error))
	   (push v  (car place))
	   ))
	((or (eq type 'inline)
	     (eq type 'not-inline)
	     (and (eq type 'ftype)
		  (progn (desetq (type . l) l) t)))
	 (dolist-safe (v l) (push
			     (cons v (increment-function-decl
				      type (function-declaration v)))
			     *function-decls*)))
	(t nil)))
  ; (((v1 . type1) (v2 . type2) ..)(special-var1 special-var2 ..))
  decls)
	   
(defun best-array-element-type (type)
  (cond ((or (eql t type) (null type)) t)
	((memq type '(bit unsigned-char signed-char
				    unsigned-short
				    signed-short fixnum
				    character
				    ))
	       type)
	((subtypep type 'fixnum)
	 (dolist (v '(bit unsigned-char signed-char
				    unsigned-short
				    signed-short)
		    'fixnum)
		 (cond ((subtypep type v)
			(return v)))))
	((eql type 'string-char) 'character)
	(t (or (dolist (v '(string-char bit short-float
				    long-float))
		   (cond ((subtypep type v)
			  (return v))))
	       t))))

(deftype type-of (x)
  (cond (*in-pass-1*
	 (let ((tem (b1-walk x 'type-of)))
	   (result-type tem)))
	(t t)))

(defun assure-list (x)
  (loop
   (if (null x) (return t))
   (if (consp x) (setq x (cdr x))
     (error "expected a list ~a" x))))

(deftype struct (x) 'structure)
(defun comp-type (type &aux tem element-type sizes)
;; coerce type to ones understood by compiler  
  (cond ;((member type *immediate-types*)
	 ;(return-from comp-type type))
	((and (symbolp type)
	      (setq tem (get type 'comp-type)))
	 (return-from comp-type tem))
	((and(symbolp type)
	     (setq tem (get type 'si::deftype-definition)))
	 (comp-type (funcall tem)))
	((consp type)
	 (cond
	  ((eq (car type) 'struct)
		(list 'struct (best-array-element-type (cadr type))))
	  ((progn 		(setq type (si::normalize-type type)) nil))
	  ((member (car type) '(array simple-array vector simple-vector))
	   (when (consp (cdr type))
	     (setq element-type (best-array-element-type (cadr type)))
	     (when(consp (cddr type))
	       (setq sizes (caddr type))
	       (cond ((consp sizes)
		      (assure-list sizes)
		      (unless (typep (second sizes) 'fixnum) (setq sizes nil)))
		     ((typep sizes 'fixnum) )
		     (t (setq sizes nil))))
	     (cond ((or (eql sizes 1) (null (cdr sizes)))
		    (setq tem 'vector) (setq sizes nil))
		   (t (setq tem 'array)))
	   (list*  tem  element-type  (if sizes (list sizes)))))
	  ((eq (car type) 'integer)
	   (if (si::sub-interval-p (cdr type)
				   (list most-negative-fixnum
					 most-positive-fixnum))
	       'fixnum
	     'integer))
	  ((eq (car type) 'values)
	   (if  (null (cddr type))
	       (comp-type (second type))
	     (cons 'values (mapcar 'comp-type (cdr (the-list type))))))
          (t   t)))
	(t t)))

(setf (get 'var 'result-type-b1) 'result-type-b1-var)
(defun result-type-b1-var (x) (or (third x) t))

(defun result-type (form &aux fd)
;; compute the result type of form , where FORM is somethign
;; returned by b1-walk   
  (cond ((consp form)
	 (cond ((and (symbolp (car form))
		     (setq fd (get (car form) 'result-type-b1)))
		(funcall fd form))
	       ((and (atom (second form))
		     (typep (second form) 'desk))
		(desk-result-type (second form)))
	       (t t)))
	((typep form 'var)
	 (var-type  form))
	(t
	 (wfs-error)
	 )))

(setf (get 'dv 'result-type-b1) 'dv-result-type)
(defun dv-result-type (x)
  (let ((val (third x)))
    (cond ((typep val 'fixnum) 'fixnum)
	  ((typep val 'short-float) 'short-float)
	  ((typep val 'double-float) 'double-float)
	  ((typep val 'character) 'character)
	  ((typep val 'character) 'character)
	  (t t))))

(defun comp-subtypep (x y &aux xa xb)
;  (cond ((and (atom x) (not (eq y t)) (not (eq x y))
;	      (subtypep x y))(comp-warn "subtypep ~a ~a" x y)))
  (cond ((eq y t) t)
	((atom x)
	 (subtypep x y))
	((atom y)
	 (subtypep x y))
	((member (car x) '(array struct))
	 (and (eq (car y) (car y)) (subtypep (cdr x) (cdr y))))
	(t (subtypep x y))))

(defun type-and (a b)
  (if (eq a b) (return-from type-and a))
  (if (eq a t) (return-from type-and b))
  (if (eq b t) (return-from type-and a))
  (multiple-value-bind (typ sure)
		       (subtypep a b)
		       sure
		       (cond (typ (return-from type-and a))))
  (multiple-value-bind (typ sure)
		       (subtypep b a)
		       sure
		       (cond (typ (return-from type-and b))))
  t)
    
  
  
  
	
	      
	     
	     
  

