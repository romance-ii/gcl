(in-package "BCOMP")
;; pass 2 c compilation

(defvar *value*
  ;; indicates where to store the value of the current expression being
  ;; computed.
  ;; one of '(var <plain-var>) 
  ;;        '(mv <first-mv-var>)
  ;;        '(ignore)
  )

(setf (get 'nil 'dv) "sLnil")
(setf (get 't 'dv) "sLt")

;; This function is the main dispatch.  It causes writing out of the
;; code for x.    An implicit *value* is set during this write out.
;; The code for doing that is in b2-call, b2-var, b2-return, and
;; any other primitives which might return a value.   Note things like
;; progn, let, prog1, all just call expr-b2 on their last term.

(defun expr-b2(x &aux fd)
  (cond ((consp x)
	 (setq fd (get (car x) 'b2))
	 (cond (fd (funcall fd x))
	       (t (wfs-error))))
	((typep x 'var)
	 (unwind-set x))
	((eq x nil)
	 (unwind-set '(dv "sLnil" nil)))
	((eq x t)
	 (unwind-set 	 '(dv "sLt" t)))
	(t (wfs-error))))

(setf (get 'call 'b2) 'b2-call)

(defun maybe-push-avma-bind ()
  (sloop for v on *control-stack*
     do (cond ((or (eq (car v) 'avma-bind)
		   (eq (car v) 'avma-bind-needed))
	       (return nil))
	      ((typep (car v) 'label)
	       (loop-finish)))
     finally
     (push 'avma-bind *control-stack*)
     (return *control-stack*)))
     

(defun b2-call (x &aux type-wanted  (loc (second *value*)) tem avma-bind)

  (cond ((eq (car *value*) 'mv) (setq type-wanted 'mv))
	(loc 
	 (cond ((typep loc 'var)
		(setq type-wanted (var-type loc)))
	       ((and (consp loc) (eq (car loc) 'var))
		(setq type-wanted (third loc)))
	       (t (wfs-error))))
	(t (setq type-wanted t)))

  
  (setq avma-bind (maybe-push-avma-bind))
  
  (setq tem (cons 'inline-call
		  (cdr (inline-call x type-wanted ))))
  (cond ((eq (car *value*) 'ignore)
	 (unwind-set tem avma-bind))
	(t (let ((*MV-N-VALUES-SET* *MV-N-VALUES-SET*))
	     ;; We must communicate whether or not this inline-call
	     ;; sets multiple values, before we replace it by a temp
	     (when (unwind-stack-p (cdr *exit*))
	       (if (flag-p (opt flag (cddr tem))  mv)
		   (setq *MV-N-VALUES-SET* t))
	       (setq tem (replace-inline-by-temp tem)))
	     (unwind-set tem avma-bind))))
  )
		    
(setf (get 'setq 'b2) 	'b2-setq)

(defun b2-setq (form &aux last)
 ;;(setq desk var val var val..)
  (do ((x (cddr form) (cddr x)))
      ((null x))
    (setq last (car x))
    (valex (list 'var last) (next-exit) (expr-b2 (second x))))
  (unwind-set last))



(setf (get 'tagbody 'b2) 'b2-tagbody)

(defun b2-tagbody (x &aux bod  lab
		     all-labels it
		     (*blocks* 0)
		     (*control-stack* *control-stack*))
  (setq bod (third x))
  (dolist (v bod)
    (when (and (consp v) (eq (car v) 'label))
      (setq lab (second v))
      (setf (label-ind lab) (next-label))
      (push lab all-labels)))
  (sloop for v on *control-stack*
     when (or (eq (car v) 'avma-bind)
	      (eq (car v) 'avma-bind-needed))
     do (push 'inner-avma *control-stack*)
     (open-block) (wr "long InnerAvma=avma;") (return nil))
	      
  (setq *control-stack*	(nconc all-labels *control-stack*))
  (sloop for v on bod do (setq it (car v))
     (valex '(ignore) (next-exit)  (expr-b2 it)))
  ;; this should do the unwinding to the outside frame.
  (cond ((and (consp it) (or (eq (car it) 'return-from)
			     (eq (car it) 'go)))
	 ;;I don't even think this unwind-stack is necessary.
	 ;; I don't see hwo it will be reached.
	 (unwind-stack (cdr *exit*)))
	(t  (expr-b2 (get-object nil))))
  (close-blocks)
  )

(setf (get 'label 'b2) 'b2-label)

(defun b2-label (x &aux (lab (second x)))
  (or (typep lab 'label) (wfs-error))
  (wr-label x) (wr ";"))

(setf (get 'go 'b2) 'b2-go)

(defun b2-go (x &aux lab)
  (setq lab (cadr x))
  (let ((upto (member lab *control-stack* :test 'eq)))
    (or upto
	(wfs-error))
    (unwind-stack upto)
    (wr-go lab)))


(setf (get 'if 'b2) 'b2-if)

(defmacro ifb (x y) `(nth ,(position x '(test then else)) (cddr ,y)))

(defun dv-p (x) (and (consp x) (eq (car x) 'dv)))

(defun trans-if (x &aux test then else t-test t-then t-else
		   lab new (desk (second x)))
;; transform an if expression so that the TEST is neither an IF nor a CONSTANT.
  
  (desetq (test then else) (cddr x))
  (cond ((and (consp test) (eq (car test) 'if))
	 (setq t-then (ifb then test) t-else (ifb else test)
	       t-test (ifb test test))
	 (setq lab (make-label))
	 (cond ((dv-p t-then))
	       ((dv-p t-else)
		(setq t-test (do-not t-test))
		(rotatef t-then t-else))
	       (t (return-from trans-if x)))
	 (setq new
	       (cond ((null (third t-then))
		      `(if ,desk,t-test (progn ,desk ((nlabel ,lab) ,else))
			 (if ,desk ,t-else ,then (go ,lab) )))
		     (t
		      `(if ,(second x),t-test (progn ,desk ((nlabel ,lab) ,then))
			   (if ,desk ,t-else (go ,lab) ,else))))))
	((dv-p test)
	 (setq new  (if (third test) then else))
	 (cond ((and (consp new) (eq (car new) 'if))
		(setq new (trans-if new))))
	 (return-from trans-if new)))
  (cond (new (trans-if new))
	(t x)))

(defun do-not (x)
  `(call ,(make-desk 'boolean)
	 ,(make-call-data 'not (list x) nil nil)))

(setf (get 'nlabel 'b2) 'b2-nlabel)
(defun b2-nlabel (x)
  (push (second x) *control-stack*)
  (wr-label (second x)) (wr ";"))

(defun b2-if (form &aux test then else  (*control-stack* *control-stack*) avma-bind)
  (setq form (trans-if form))
  (unless (and (consp form) (eq (car form) 'if))
	  (return-from b2-if (expr-b2 form)))
  (desetq (test then else) (cddr form))
  (setq avma-bind (maybe-push-avma-bind))
  (let ((tem (inline-arg test 'boolean nil (cons nil nil))))
    (when avma-bind
      (cond ((eq (car avma-bind) 'avma-bind-needed)
	     (let ((tem1 (get-temp 'boolean)))
	       (valex (list 'var tem1) (next-exit) 
		      (unwind-set tem avma-bind))))
	    (t (remove-avma-bind avma-bind))))
    (wr-nl "if(" tem "){"))
  (let ((*blocks* 0))
    (expr-b2 then)
    (close-blocks) (wr "}"))
  (unless (and
	   (or (atom else) (eq (car else) 'dv))
	   (eq (car *value*) 'ignore)
	   (eq (car *exit*) 'next)
	   (not (unwind-stack-p (cdr *exit*))))
	  (let ((*blocks* 0))
	    (wr-nl "else ")
	    (open-block)
	    (expr-b2 else)
	    (close-blocks)))
  )

(setf (get 'block 'b2) 'b2-block)

(defun b2-block (x &aux sform block bod dsk
		   end-label 
		   (*control-stack* *control-stack*))
  (desetq (sform dsk block bod) x)
  (push block *control-stack*)
  (setq end-label (make-label))
  (setf (block-exit block)
	(cond ((eq (car *exit*) 'next)
	       (cons end-label (cdr *exit*)))
	      (t *exit*)))
  (setf (block-value block) *value*)
  (valex *value* (block-exit block) (progn-b2 bod))
  (cond ((label-ind end-label)
	 (wr-label end-label) (wr ";"))))

(setf (get 'return-from 'b2) 'b2-return-from)

(defun b2-return-from (x &aux block form tem)
  (desetq (block form)  (cddr x))
  (cond ((setq tem (member  block *control-stack*))
	 (valex (block-value block) (block-exit block) (expr-b2 form)))
	(t (wfs-error))))

(setf (get 'the 'b2) 'b2-the)

(defun b2-the (x)
  (expr-b2 (third x)))

(defun fdata-to-obj (fdat )
  (or (typep fdat 'fdata) (wfs-error))
  (or (fdata-ind fdat) (setf (fdata-ind fdat) (incf *next-function*)))
  (cond ((fdata-closure-vars fdat)
	 (let ((args (mapcar #'(lambda (x) (list 'var (var-ind x)))
			     (fdata-closure-vars fdat))))
	   (list 'inline-call (list*
			       (get-load-time-form 'si::%memory)
			       fdat
			       args)
		 '(*) t #.(flags ans)
		 (format nil "MakeClosure(~a,~a,$@0)"
			 (length (fdata-closure-vars fdat))
			 (fdata-to-argd fdat)
			 ))))
	(t
	 (list 'inline-call
	       (list fdat
		     (fdata-to-argd fdat)
		     (get-load-time-form 'si::%memory)
		     ) '(t fixnum t) t #.(flags ans constantp)
		       "MakeAfun($0,$1,$2)" ))))

(setf (get 'pointer-to-funobj 'b2) 'b2-pointer-to-funobj)
(defun b2-pointer-to-funobj (x &aux ans tem)
  (setq tem (second x))
  (cond ((and (consp tem) (eq (car tem) 'lambda-block))
	 (setq tem (second tem))))
  (setq ans (fdata-to-obj tem))
  (unwind-set ans))
  
(setf (get 'lambda-block 'b2) 'b2-lambda-block)
(setf (get 'lambda 'b2) 'b2-lambda-block)

(defun b2-lambda-block (x &aux result  (*used-names* *used-names*))
  (let ((fdat (second x)))
    (unless (fdata-ind fdat)
	    (setf (fdata-ind fdat)
		  (mangle-name (fdata-name fdat) 'function)))
    (push (list 'local-function x) *local-funs*)
;    (wr-h "static object " fdat "();")
    (setq result (fdata-to-obj fdat))
    (unwind-set result)))

(defun might-touch-mv (x)
  ;; This needs expanding to handle functions like LIST,+,
  ;; .. etc which do not touch mv
  (not (or (atom x) (eq (car x) 'var) (eq (car x) 'dv))))
(setf (get 'values 'b2) 'b2-values)

(defun b2-values (x &aux (argl (third x)) avma-bind)
  (cond ((eq (car *value*) 'mv)
	 (setq avma-bind (maybe-push-avma-bind)) 
	 (let ((args (car (inline-args argl '(*)))))
	   (sloop for v on args 
	      when (and (consp (car v)) (might-touch-mv (car v)))
	      do (setf (car v) (replace-inline-by-temp (car v))))
	   (when (cdr args)
	     (wr-nl "{obj *MVptr = &fcall.values[1];"
		    "*MVptr =" (second args) ";")
	     (dolist (v  (cddr args))(wr "*(++MVptr) = " v ";"))
	     (wr "}"))
	   (wr " fcall.nvalues=" (length args) ";")
	   (let ((*MV-N-VALUES-SET* t))
	     (unwind-set  (if args (car args) (get-object nil)) avma-bind))
	   ))
	(argl (expr-b2 (car argl)))
	(t (expr-b2 (get-object nil)))))

(setf (get 'call-set-mv 'b2) 'b2-call-set-mv)

(defun b2-call-set-mv (x &aux form)
;; invoke form setting up multiple-values.
;; x == (call-set-mv desk form)
  (setq form (third x))
  (valex `(mv (var "fcall.values[0]")) (next-exit) (expr-b2 form)))

(setf (get 'progv 'b2) 'b2-progv)

(defun b2-progv (x &aux binds body)
  (desetq (binds  body) (cddr x))
  (let ((tem (get-temp 'fixnum)))
    (valex `(var ,tem) (next-exit) (expr-b2 binds))
    (let ((*control-stack* (cons `(progv-bind ,tem) *control-stack*)))
      (progn-b2 body))))

(setf (get 'flet 'b2) 'b2-flet)

(defun b2-flet (x &aux binds body fd)
  (desetq (binds body) (cddr x))
  (sloop for v in binds
     do
     (setq fd (cadr (third v)))
     (or (typep fd 'fdata) (wfs-error))
     (or (fdata-ind fd) (setf (fdata-ind fd) (incf *next-function*)))
     (valex '(ignore) (next-exit)
	    (expr-b2 (third v)))
     )
  (progn-b2 body))

(defun do-assign-args (x &aux reqs)
  (setq reqs (ll &required (fdata-ll *fdata*)))
  (or (eql (length x) (length reqs))
      (comp-error "Wrong number of args in call to ~a " (fdata-name *fdata*)))
  (sloop for v in reqs
     for val in x
     do (wr-set-inline-loc (car v) val)
     )
  )

(defvar *aet-types*
  #(T STRING-CHAR SIGNED-CHAR FIXNUM SHORT-FLOAT DOUBLE-FLOAT
			SIGNED-CHAR
			UNSIGNED-CHAR SIGNED-SHORT UNSIGNED-SHORT))

(defun aet-type (i) (aref *aet-types* i))

(defun aet-c-type (type)
  (ecase type
    ((t) "object")
    ((string-char signed-char) "char")
    (fixnum "fixnum")
    (unsigned-char "unsigned char")
    (unsigned-short "unsigned short")
    (signed-short "short")
    (unsigned-short "unsigned short")
    (double-float "double")
    (short-float "float")))

(defun do-structure-ref (iargs &aux x name ind (index 0) sd)
  (declare (fixnum index))
  (setq x (car iargs) name (second iargs) ind (third iargs))
  (or (and (consp ind) (eq (car ind)'inline-loc)
	   (dv-p (third ind))) (wfs-error))
  (setq index (third (third ind)))
  (setq sd (get (third name) 'si::s-data))
  (or sd (wfs-error))
  (let* ((aet (aref (si::s-data-raw sd) index))
	 (c-type (aet-c-type (aref *aet-types* aet)))
	 (pos (aref (si::s-data-slot-position sd) index)))
    (wr "STREF(" c-type "," x "," pos")")))

(defun do-structure-set (iargs)
  (let ((rargs (butlast iargs)))
    (do-structure-ref rargs)
    (wr " = " (car (last iargs)))))

(defun si::setf-structure-access (struct type index newvalue)
  (case type
    (list `(si:rplaca-nthcdr ,struct ,index ,newvalue))
    (vector `(si:aset ,struct ,index ,newvalue))
    (t
     (let ((sd (get type 'si::s-data)))
       (when sd
	 (let ((res-type (comp-type(aet-type (aref (si::s-data-raw sd) index)))))
	   (cond ((eq res-type t)
		  `(si::structure-set ,struct ',type ,index ,newvalue))
		 (t  `(the ,res-type
			   (si::structure-set
			    (the (struct  ,res-type),struct) ',type ,index
			    (the ,res-type ,newvalue)))))))))))

	
(setf (get 'eval-when 'b2) 'b2-eval-when)
(defun b2-eval-when
 (x)
  (progn-b2 (cddr x)))
  
  
