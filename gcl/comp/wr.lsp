(in-package "BCOMP")
(defmacro wr  (&rest l)
  `(progn ,@ (mapcar #'(lambda (x)
			 (if (stringp x) `(princ ,x *c-output*)
			   `(wr1 ,x)))
		     l
		     )))
(defmacro wr-nl (&rest l)
  `(wr "
	" ,@l))

(defmacro wr-h  (&rest l)
  `(progn (princ "
	" *h-output*)
	  ,@ (mapcar #'(lambda (x)
			 (if (stringp x) `(princ ,x *h-output*)
			   `(wr1-h ,x)))
		     l)))

(defun wr1 (x )
  (cond ((or (typep x 'fixnum)(stringp x)) (princ x *c-output*))
	((consp x)
	 (or (symbolp (car x)) (wfs-error))
	 (let ((fd (get (car x) 'wr)))
	   (or fd (wfs-error))
	   (funcall fd x)))
	((typep x 'var)
	 (cond ((var-clb x)
		(wr "ClosRef(" (list 'closure-var-loc x) ")"))
	       ((var-special-p x)
		(or (var-ind x) (wfs-error))
		(cond ((= *safety* 0)
		       (wr "("(var-ind x)")->s.Bind" ))
		      (t (wr "symbol_value("(var-ind x)")" ))))
	       (t (or (var-ind x) (next-cvar x))
		  (cond ((stringp (var-ind x)) (wr (var-ind x)))
			(t (wr "V" (var-ind x)))))))
	((eq t x)(wr "Ct"))
	((eq nil x)(wr "Cnil"))
	((typep x 'label)
	 (or (label-ind x) (setf (label-ind x) (next-label)))
	 (wr (label-ind x)))
	((typep x 'fdata)
	 (let ((i (fdata-ind x)))
	   (if (stringp i) (wr i) (wr "L" i))))
	(t (wfs-error))))

(defun wr1-h (x &aux (*c-output* *h-output*))
  (wr1 x))

(setf (get 'dv 'wr) 'wr-dv)
(setf (get 'd_eval 'wr) 'wr-dv)

(defun add-data (x &aux tem)
  (or (and (consp x) (or (eq (car x) 'dv)
			 (eq (car x) 'd_eval)))
      (wfs-error))
  (let ((item (third x)))
    (unless (second x)
	    (cond
	     ((and (symbolp item)
		   (setq tem (get item 'dv)))
	      (setf (second x) tem))
	     ((and (typep item 'fixnum)
	       (eql 0 (logand #. (lognot 1023) (the fixnum item))))
	      (setf (cadr x)
		    (format nil "small_fixnum(~a)" item)))
	     (t (setf (second x) *next-data*)
		(push-data (car x) (third x)))))
    x))

;; Some things namely the keyword mechanism REQUIRES a constant which
;; has an index.   This means that named ones will have to get an index
;; We could smash this place
(defun get-dv-index (x)
  ;; a (dv which may have a string.   We put an index in the fourth place.)
  (cond ((typep (second x) 'fixnum) (second x))
	((cdddr x) (fourth x))
	(t (setq x (nconc x (list *next-data*)))
	   (push-data (car x) (third x)))))
      
(defun wr-dv (x)
  (let ((tem (second x)))
    (cond (tem
	   (cond ((typep tem 'fixnum) (wr "VV[" tem"]"))
		 (t (wr tem))))
	  (t (add-data x)
	     (wr-dv x)))))


(setf (get 'var 'wr) 'wr-var)
(defun wr-var (x)
  (cond ((and (consp x) (eq (car x) 'var))
	 (wr-vind (second x)))
	(t (wfs-error))))

(defun wr-vind (x)
    (if (stringp x) (wr x) (wr "V" x)))

(setf (get 'closure-var-loc 'wr) 'wr-closure-var-loc)
(defun wr-closure-var-loc (x &aux (var (second x)))
  (cond ((member var *closure-vars*)
	 (wr "CLvars->")
	 (or (and (consp (var-ind var)) (eq (car (var-ind var)) 'kw))
	     (wfs-error))
	 (wr-vind (second (var-ind var))))
	(t (wr-vind (var-ind var)))))

(setf (get 'key-var 'wr) 'wr-key-var)
(defun wr-key-var (x &aux (v (second x)) tem)
  (or (typep v 'var) (wfs-error))
  (cond ((setq tem (var-special-p v))
	 (wr tem))
	(t
	 (wr-vind (var-ind v)))))
	
	 

(setf (get 'vcs 'wr) 'wr-vcs)
(defun wr-vcs(x)
  (wr "cs[" (second x)"]"))

(setf (get 'kw 'wr) 'wr-kw)
(defun wr-kw(x)
  (wr "k.")
  (wr-vind (second x)))

(setf (get 'vk 'wr) 'wr-vk)
(defun wr-vk (x)
  (wr "&VK" (second x) "key"))

(defun wr-comment (message &optional (symbol nil))
  (wr "
/*	"  message)
   (and symbol (wr (mangle symbol)))
  
  (wr "	*/
")	
  nil)

(setf (get 'label 'wr) 'wr-label)
(defun wr-label (n &aux)
  (when  (consp n)
    (or (eq (car n) 'label) (wfs-error))
    (setq n (second n)))
	 (wr "
 LA" n ": "))
	   
(defun wr-go (n)
  (if (typep n 'label)
      (or (label-ind n) (setq n (setf (label-ind n) (next-label)))))
  (wr "goto LA" n ";"))

(defun wr-list (l)
  (do ((v l (cdr v)))
      ((null v))
      (wr (car v))
      (or (null (cdr v)) (wr ","))))  

(setf (get 'next-var-arg 'wr) 'wr-next-var-arg)
(defun wr-next-var-arg (x)
  x  (wr "va_arg(Iap,object)"))


(setf (get 'call 'wr) 'wr-call)
(defun wr-call (x)
  (let* ((cdat (second x))
	 (fname (call-data-fname cdat))
	 (name (if (symbolp fname) (symbol-name fname)
		 (format nil "L~a" (fdata-ind fname)))))
    (wr "CA_" name   "(")
    (wr-list (third x))
    (wr ")"))
  )

(defmacro var-implementation-type (x)
  `(cond ((and (plain-var-p ,x)
	       (not (and (consp (var-ind ,x)) (eq (car (var-ind ,x)) 'kw))))
	  (var-type ,x))
	 (t t)))
    
(defun wr-set-inline-loc (a b &aux type)
  (cond ((eq a b) (wr ";")(return-from wr-set-inline-loc nil)))
  (cond((atom a)
	 (or (typep a 'var) (wfs-error))
	 (cond ((var-special-p a)
		(setq type 'special)
		(wr-nl "(" (var-ind a) ")->s.Bind = "))
	       (t (setq type (var-implementation-type a)))))
	((and (consp a) (eq (car a) 'var))
	 (setq type (third a)))
	(t (wfs-error)))
  
  (cond ((eq type 'integer)
	 (let ((val-type (value-type b)))
	   (case val-type
	     (fixnum (wr-nl "ISETQ_FIX(") )
	     (integer (wr-nl "SETQ_II(") )
	     (otherwise (wr-nl "SETQ_IO(") (setq val-type t)))
	   (setq b (list 'inline-loc val-type b))
	   (wr  a","a"__alloc," b ");")
	   (return-from wr-set-inline-loc nil)))
	((eq type 'special)
	 (setq type t))
	(t  (wr-nl a "=")))
  (case type
    (fixnum (wr-fixnum-loc b))
    (character (wr-character-loc b))
    (gen (wr-integer-loc b))
    (double-float (wr-double-float-loc b))
    (double_ptr (wr-double_ptr-loc b))
    (short-float (wr-short-float-loc b))
    (boolean (wr-boolean-loc b))
    (t (wr-obj-loc b)))
  (wr ";")
  )

(defun wr-integer-loc (x)
  (cond ((and (dv-p x) (typep (third x) 'fixnum))
	 (setq x (list 'inline-loc 'fixnum x))))
  (case (value-type x)
    (integer (wr x))
    (fixnum (wr "stoi(" x ")"))
    (t  (wr "otoi(" x ")"))))



(defun value-type (x &aux tem)
  ;; returns the representation type of form x
  (setq tem
	(cond ((consp x)
	       (cond ((eq (car x) 'dv) t)
		     
		     ((eq (car x) 'var) (or (third x) t))
		     ((eq (car x) 'inline-call) (nth 3 x))
		     ((eq (car x) 'inline-loc) (nth 1 x))
		     ((eq (car x) 'let-control-stack)
		      (value-type (second x)))
		     ((eq (car x) 'next-var-arg) t)
		     ))
	      ((typep x 'var)
	       (var-implementation-type x))))

  (unless tem
	  (comp-warn "Don't know type of ~a.  Assuming type t" x))
  (or (memq tem '(fixnum integer  short-float double-float character boolean double_ptr))
      (setq tem t))
  tem)


(setf (get 'inline-loc 'wr) 'wr-inline-loc)

(defun wr-inline-loc (x &aux (y (third x)) (type (second x)))
  (case type
    (fixnum (wr-fixnum-loc y))
    (short-float (wr-short-float-loc y))
    (double-float (wr-double-float-loc y))
    (double_ptr (wr-double_ptr-loc y))
    (character (wr-character-loc y))
    ((gen integer) (wr-integer-loc y))
    (boolean (wr-boolean-loc y))
    (t (wr-obj-loc y))))
    
(setf (get 'fixnum 'loc) 'wr-fixnum)

(defun wr-boolean-loc (x)
  (let ((type (value-type x)))
    (case type
      (boolean (wr x))
      ((short-float double_ptr character long-float integer) (wr "1"))
      (t       (wr "(" x ")!=sLnil" )))))
	 

(defun wr-fixnum-loc (b)
  (case (value-type b)
    (fixnum (wr b))
    ((short-float long-float) (wr "(int)(" b")" ))
    (double_ptr (wr "(int)(*(" b "))"))
    (integer (wr "itos(" b")"))
    (t
     (cond ((and (consp b) (eq (car b) 'dv))
	    (cond ((typep (third b) 'fixnum)
		   (wr  (third b)) (return-from wr-fixnum-loc nil))
		  (t  (comp-warn "Not a fixnum ~a "(third b))))))
     (wr "fix(" b ")"))))

(defun wr-character-loc (b)
  (case (value-type b)
    (character (wr b))
    ((short-float long-float)
     (comp-error "Cant coerce float to character")
     (wr "(int)(" b")" ))
    (integer (wfs-todo))
    (t
     (cond ((and (consp b) (eq (car b) 'dv))
	    (cond ((typep (third b) 'character)
		   (wr  (char-code (third b))) (return-from wr-character-loc nil))
		  (t  (comp-warn "Not a character ~a "(third b))))))
     (wr "char_code(" b ")"))))


(defun wr-double-float-loc (b)
  (case (value-type b)
    ((short-float fixnum) (wr "(double)(" b ")"))
    (double-float (wr b))
    (double_ptr (wr "*(" b ")"))
    (integer (wfs-todo))
    (t  (wr "DFloat(" b ")"))))

(defun wr-short-float-loc (b)
  (case (value-type b)
    ((short-float fixnum double-float) (wr "(float)(" b ")"))
    (double_ptr (wr "(float)(*(" b "))"))
    (integer (wfs-todo))
    (t  (wr "SFloat(" b ")"))))

(defun wr-double_ptr-loc (b &aux tem)
  (case (value-type b)
    ((short-float fixnum)
     (setq tem (get-temp 'double_ptr))
     (wr "*"tem" = (double)(" b ")") )
    (double (wr "*("b")"))
    (integer (wfs-todo))
    (t 
       ;;wrong
     (object (wr "&(DFloat(" b "))")))))


(defun wr-obj-loc (x)
  (case (value-type x)
    (short-float (wr "make_shortfloat(" x ")"))
    (double-float (wr "Imake_doublefloat(" x ")"))
    (double_ptr (wr "Imake_doublefloat(*(" x "))"))
    (fixnum (wr "make_fixnum(" x ")"))
    (integer
     (wr "make_integer(" x ")"))
    (character (wr "code_char(" x ")"))
    (boolean (wr "(" x "? sLt : sLnil)"))
    (t (wr x))))
    
(setf (get 'inline-call 'wr) 'wr-inline-call)

(defun wr-inline-call (x )
;  (desetq (sform iargs arg-types res flags fstring) x)
  (wr-inline-call1 (cadr x) (opt template (cddr x))))

(defun wr-link-call (lnk iargs &aux nochange)
  (let* ((argd (link-argd lnk))
	 (n (length iargs)))
    (declare (fixnum argd ))
    (cond ((< n (argd-minargs argd))
	   (setf (argd-minargs argd) n))
	  ((> n  (argd-maxargs argd))
	   (setf (argd-maxargs argd) n))
	  (t (setq nochange t))
	  (setf (argd-minargs (link-argd lnk))))
    (unless nochange
	    (setf (link-argd lnk) argd))
    (or (link-ind lnk) (setf (link-ind lnk) (mangle-name (link-fname lnk) 'function)))
    (cond ((argd-flag-p argd requires-nargs)
	   (wr "(VFUN_NARGS=" n ",")))
    
    (wr "(*LnK" (link-ind lnk) ")(")
    (wr-list iargs)
    (wr ")")
    (cond ((argd-flag-p   argd requires-nargs)
	   (wr ")")))))

(defun wr-inline-call1 (iargs fstring &aux
			 (leng 0) wrote-paren
			  (ch #\space) (ind 0) (start 0)
			 (out *c-output*))
;; $@i : write out all (nthcdr i args) in a comma separated list.
;; $i : write out arg i  ( 0<= i < 10)
;; $# : write out (length iargs)
;; @i,j,..; i,j,.. are multiple eval'd.
;; $*i : push args starting at the ith onto value stack and pass the pointer
;;       to the place where you start.        
  (declare (character ch) (fixnum ind leng start)
	   (string fstring))
  (cond ((stringp fstring))
	((typep fstring 'link)
	 (wr-link-call fstring iargs) (return-from wr-inline-call1 nil))
	(t  (return-from wr-inline-call1 (funcall fstring iargs))))
  (setq leng (length fstring))
  ;; save multiple eval'd args.  @0,3; means args 0 and 3 need temps.
  (cond ((eql (aref fstring 0) #\@)
	 (sloop for i from 1 below leng 
	    until (eql (setq ch (aref fstring i)) #\;)
	    when (digit-char-p ch)
	    do (let ((tem (nth (setq ind (-  (char-code ch )(char-code #\0)))
			       iargs)))
		 (unless (or (typep tem 'var)
			     (and (consp tem)
				  (or (eq (car tem) 'dv)
				      (eq (car tem) 'var))))
			 (let ((v (get-temp (value-type
					     (nth ind iargs)))))
			   (setf (nth ind iargs) v)
			   (unless wrote-paren
				   (setq wrote-paren t)
				   (wr "("))
			   (wr  v "= " tem ","))))
	    finally (setq start (+ 1 i)))))
	 
  ;; write out the template.
  (sloop for i from start below leng with l = (length iargs)
     declare (fixnum l)
     do (setq ch (aref (the string fstring) i))
     (cond
      ((or (eql ch #\$)
	   (eql ch #\#);; compatibility with akcl
	   )
       (setq i (+ i 1))
       (setq ch (aref (the string fstring) i))
       (setq ind (- (char-code ch) (char-code #\0)))
       (cond ((and (< ind 10) (>= ind 0))
	      (if (>= ind l)
		  (comp-error "Bad inline template ~a" fstring))
	      (wr (nth ind iargs)))
	     ((eql ch #\@)
	      (setq i (+ i 1))
	      (let ((n (- (char-code (aref fstring i)) (char-code #\0))))
		(declare (fixnum n))
		(wr-list (nthcdr n  iargs))))
	     ((eql ch #\*)
	      (setq i (+ i 1))
	      (let* ((n (- (char-code (aref fstring i)) (char-code #\0)))
		     (m (- (length iargs) n))
		     (p (get-temp "object *")))
		(declare (fixnum n m))
		(wr "(" p "= (vs_top+=" m"),")
		(sloop for v in (reverse (nthcdr n iargs))
		   do (wr "*--"p" =" v","))
		(wr p ")")))
	     ((eql ch #\# ) (wr (length iargs)))
	     (t (comp-error "Bad inline string ~s" fstring))))
      (t (write-char ch out))))
  ;
  (if wrote-paren (wr ")"))
  )
(defun write-out-links( &aux lnk)
  (dolist (v *file-inline-templates*)
    (or (typep (setq lnk (nth 4 v)) 'link) (wfs-error))
  (let ((ind (link-ind lnk))
	(rett (rep-type (third v))))
      (wr "
static " rett "LnKT" ind "(va_alist)va_dcl
{va_list Iap; va_start(Iap); return ("rett ")Icall_proc"
  (if (eq (third v) 'short-float) "_float(" "(")
  (get-object (link-fname lnk)) ","
	     (link-argd lnk)
	     ",&LnK"  (link-ind lnk ) ",Iap);}")
      (wr-h "static "rett "LnKT"ind"(),(*LnK"
	    ind ")()=LnKT" ind ";")
      )
    ))

(defun  write-out-address-and-data ()
  (let ((*c-output* *h-output*))
  (wr"
static object VV["  (max 1 (length *address-vector*) *next-data*) "]={")
  (let ((l (length *address-vector*))
	(i 0))
    (declare (fixnum i l))
    (sloop while (< i l)
       do (wr-nl "(void *)" (aref *address-vector* i))
       when (< (setq i (+ i 1)) l)
       do (wr ","))
    (if (eql i 0) (wr 0))
    (wr "};")))
  (wt-data-file))

(setf (get 'address 'wr) 'wr-address)
(defun wr-address (x)
  (wr "&" (second x)))