;;Copyright William F. Schelter 1990, All Rights Reserved


(in-package "BCOMP")
(use-package "SLOOP")

(setq SYSTEM:*INHIBIT-MACRO-SPECIAL* nil)
;(fmakunbound 'multiple-value-list)

(defvar *default-desk* (make-desk t))

(defun get-desk (type)
  (if (eq type t) *default-desk* (make-desk type)))

(defun set-desk-type (desk new-type)
  (cond ((eq desk *default-desk*) (make-desk new-type))
	(t (setf (desk-result-type desk) (type-and (desk-result-type desk) new-type))
	   desk)))

(setq SYSTEM:*INHIBIT-MACRO-SPECIAL* t)

(do ((v '(QUOTE b1-quote
		MACROLET b1-macrolet
		symbol-macrolet b1-symbol-macrolet
		MULTIPLE-VALUE-PROG1 b1-MULTIPLE-VALUE-PROG1
		UNWIND-PROTECT b1-unwind-protect
		EVAL-WHEN b1-quote-first
		LET b1-let
		RETURN-FROM b1-return-from
		MULTIPLE-VALUE-LIST b1-eval
		IF b1-if
		THE b1-the
		PROGV b1-progv
 		FUNCTION b1-function
		FLET b1-flet
		COMPILER-LET b1-compiler-let
		DECLARE b1-declare
		TAGBODY b1-tagbody
		LABELS b1-flet
		PROGN b1-progn
		LET* b1-let*
		CATCH b1-catch
		THROW b1-throw
		BLOCK b1-block
		GO b1-go
		SETQ b1-setq
		VALUES b1-values
		LAMBDA-BLOCK b1-lambda-block
		DONE-b1 b1-done-b1
		#+c-pass1 MULTIPLE-VALUE-BIND b1-multiple-value-bind
		#+c-pass1 MULTIPLE-VALUE-setq b1-multiple-value-setq
		
		
		) (cddr v)))
    ((null v))
  (setf (get (car v) 'b1) (second v)))

(defmacro locally (&body body)
  `(let nil ,@body))

(defvar *control-stack*
  ;; When a special is bound  'bound-special is pushed
  ;; When clb lambda is entered 'clb is pushed
  ;; When save_avma is entered 'save-avma is pushed
  ;; Thus go can tell whether the tag is acros 'clb or
  ;; or else how many bds-unbinds it has to do before going.
  nil)

(defvar *walk-functions*
  ;; bindings of functions and macros by flet,macrolet,labels
  nil)

(defvar *walk-variable-bindings*
  ;; bindings of variables by let,lambda, let*, symbol-macrolet.
  ;;   
  nil)

(defvar *digest-line-info* (make-hash-table :test 'eq))

(defvar *line-info* nil)

(defun walk-environment ()
  (list nil  *walk-functions*))

(defun mapcar2 (f lis c &optional last)
  (or last (setq last c))
  (do ((v lis (cdr v))
       (result) (ptr))
      ((null v) result)
    (or (consp v) (comp-error "Expected a list of forms ~a" lis))
    (let ((tem (funcall (the (function (t t) t) f)
			(car v)
			(if (cdr v) c last))))
      (cond (ptr (setf (cdr ptr) (list tem))
		 (setf ptr (cdr ptr)))
	    (t (setq result (setq ptr (list tem))))))))

(eval-when (compile eval load)

(defun desetq-consp-check (val)
  (or (consp val) (error "~a is not a cons" val)))

(defun desetq1 (form val)
  (cond ((symbolp form)
	 (cond (form			;(push form *desetq-binds*)
		`(setf ,form ,val))))
	((consp form)
	 `(progn
	    (desetq-consp-check ,val)
	    ,(desetq1 (car form) `(car ,val))
	    ,@ (if (consp (cdr form))
		   (list(desetq1 (cdr form) `(cdr ,val)))
		 (and (cdr form) `((setf ,(cdr form) (cdr ,val)))))))
	(t (error ""))))
  )

(defmacro desetq (form val)
  (cond ((atom val) (desetq1 form val))
	(t (let ((value (gensym)))
	     `(let ((,value ,val)) , (desetq1 form value))))))

(defun b1-quote-two (form where &aux sform a b c) where
  (desetq (sform a b . c) form)
  (list* sform a b (mapcar2 'b1-walk c sform)))

(eval-when (compile eval load)

(defun wbind1 (v decls &aux var specialp tem)
  (or (symbolp v) (comp-error "binding non symbol ~a"))
  (if (null v) (comp-error "binding nil ~a"))
  (sloop for w on-list (second decls)
     when (eq (car w) v) do (setq specialp t)(setf (car w) nil))
  (if (si::specialp v) (setq specialp t))
  (setq var (makevar v specialp))
  (if specialp (push 'bound-special
		     *control-stack*))

  (push var *walk-variable-bindings*)
  (cond ((setq tem (assoc v (car decls)))
	 (setf (var-type var) (cdr tem))))
  var
  )

(defmacro wbind (v decls)
  `(setf ,v (wbind1 ,v ,decls)))

(defun makevar (var specialp)
  (or (symbolp var) (error "not a symbol ~a" var))
  (let ((v (make-var :name var)))
    (when specialp (setf (var-special-p v) t)
	  (setf (var-ind v) (get-object var)))
    (setf (var-type v) (or (get var 'proclaimed-variable-type) t))
    
    v))    

(defun canon-opt-arg (v type
			&aux var val supplied-p keyword 
			(intern (eql type '&key)))
  ;; (list var val supplied-p keyword)
  (tagbody
   (if intern (setq keyword v))
   (cond ((atom v)
	  (or (symbolp v) (go error))
	  (setq var v))
	 (t
	  (cond ((consp (car v))
		 (or intern (go error))
		 (setq intern nil)
		 (desetq (keyword var) (car v)))
		(t
		 (setq keyword (car v) var (car v))))
	  (or (consp (cdr v)) (go error))
	  (setq val (cadr v))
	  (if (consp (cddr v))
	      (setq supplied-p (caddr v)))))
   (or (symbolp keyword) (go error))
   (or (symbolp var ) (go error))
   (or (null intern)
       (setq keyword (intern (symbol-name keyword) 'keyword)))
   (return-from canon-opt-arg (list var val supplied-p keyword))
   error
   (comp-error "bad ~a arg ~s" type v)))

;;lambda-list-keywords has value:
;; '(&optional &rest &key &allow-other-keys &aux &whole &environment &body)

(defun decode-ll (list)
  (let (ll sections)
    (do ((v list (cdr v))
	 (this (list '&required)))
	((null v) (push (nreverse this) sections)
	 (setq sections (nreverse sections )))
      (cond ((member (car v) lambda-list-keywords)
	     (push (nreverse this) sections)
	     (setq this (list (car v))))
	    (t (push (if (consp (car v)) (car v)
		       (if sections (list (car v) nil) (car v)))
		     this))))
    (do ((v (cons '&required lambda-list-keywords) (cdr v))
	 tem)
	((eq (car v) '&whole) 
	 (or (null sections)
	     (error "unrecognized or duplicate '&' keyword in lambda-list ~a"
		    sections)))
      (cond ((setq tem (assoc (car v) sections))
	     (or (eq (car sections) tem)
		 (error "~a in incorrect position" (car v)))
	     (setf sections (cdr sections))))
      (push tem ll)
      )
    (setq ll (nreverse ll))
    (dolist (v (ll &required ll))
      (unless (symbolp v) (error "required arg not a symbol ~a" v)))
    (if (ll &allow-other-keys ll)
	(setf (cdr (ll &allow-other-keys ll)) t))
    (setf (ll &key ll)
	  (sloop for v in-list (ll &key ll)
	     collect (canon-opt-arg v '&key)))
    (setf (ll &optional ll)
	  (sloop for v in-list (ll &optional ll)
	     collect (canon-opt-arg v '&optional)))
    (setf ll (mapcar 'cdr ll))))

(defun lambda-bind-b1 (decoded clb decls)
  (let ((*walk-variable-bindings* *walk-variable-bindings*)
	(*control-stack* *control-stack*))
    (if clb (push 'clb *walk-variable-bindings*))
    (flet ((fbind1 ( l decls &aux v)
		   (sloop for w on l
		      do
		      (cond ((atom (car w)) (wbind (car w) decls))
			    (t (setq v (car w))
					; v = (list var val supplied-p keyword)
			       (setf (nth 1 v) (b1-walk (nth 1 v) 'bind))
			       (wbind (nth 0 v) decls)
			       (setq v (cddr v))
			       (if (car v) (wbind (car v) decls))
			       (setq v (cdr v))
			       (if (car v) (setf (car v)
						 (get-object (car v)))))))))
      (fbind1 (ll &required decoded) decls)
      (fbind1 (ll &optional decoded) decls)
      (if (ll &rest decoded) (wbind (caar (ll &rest decoded)) decls))
      (fbind1 (ll &key decoded) decls))
    (add-remaining-special-decls decls)
    *walk-variable-bindings*))
;;end eval-when
)

(defvar *contains-function*
  ;; set if the form contains a lambda expression.
  )

(defvar *setjmps*
  ;; the number of setjmps encountered so far.
  ;; tagbody with clb tags, unwind-protect, catch all lay down setjmps.
  )

(defun  bound-variables-volatile ()
  (dolist (v *walk-variable-bindings*)
    (cond ((eql v 'clb) (return nil))
	  ((typep v 'var)
	   (setf (var-volatile v) t)))))

(defun check-used (binds pos &aux w)
  (dolist (v binds)
    (cond ((consp v)
	   (setq w (nth pos v))
	   (if (typep w 'var)
	       (or  (var-special-p w) (var-changed w ) (var-ref w )
		   
		    (comp-warn "Variable ~s was not used" (var-name w))))))))

(defun add-remaining-special-decls (decls)
  (sloop for v in (second decls)
     when v
     do (push (list v 'special (makevar v t)) *walk-variable-bindings*)))

(defun b1-lambda-block (form where &optional (clb 'clb)
			     &aux sform name closure-record
			     result decls doc
			     (*control-stack* (cons clb  *control-stack*))
			     (*function-decls* *function-decls*)
			      (tail-label (make-label :identifier '#.(gensym "tail")))
			     ll bod decoded)
  where
  (desetq (sform) form) (setq form (cdr form))
  ;; set
  (setq  *contains-function* t)
  (cond ((eq sform 'lambda-block)
	 (desetq (name) form)
	 (setq form (cdr form))))
  (desetq (ll . bod) form)
  (setq decoded (decode-ll ll))
  (desetq (decls bod doc) (grab-declares bod t))
  (cond ((and (null name)
	     (consp bod)
	     (consp (car bod))
	     (eq (caar bod) 'block))
	 (desetq (name) (cdar bod)))
	((and (symbolp name) (eq sform 'lambda-block))
	 (setq bod `((block ,name ,. bod)))))
  (when clb
    (dolist (v *walk-variable-bindings*)
      (and (typep v 'var)
	   (var-clb v)
	   (push (cons v (var-clb v)) closure-record))))

  (let* ((*control-stack* *control-stack*)
	 (*walk-variable-bindings*
	  (lambda-bind-b1 decoded clb decls))
	 (tail-recursion
	  (and (not (ll &optional decoded))
	       (eq sform 'lambda)
	       (not (ll &key decoded))
	       (not (ll &rest decoded))
	       (list 'lambda-block name (ll &required decoded) tail-label))))

    
    (push tail-label *control-stack*)
    (setq result
	  (b1-walk `(let* ,(ll &aux decoded)
		      ,@ (get-back-some-decls decls (mapcar 'car (ll &aux decoded)))
		      ,@ bod) tail-recursion))

    (check-used *walk-variable-bindings* 1))
  (if (ll &aux decoded)
      (setf ll (butlast ll (length (member '&aux ll)))))
  `(,sform , (make-fun-data name closure-record clb decoded doc result tail-label
			    ) )))

(defun make-fun-data (name closure-record clb ll doc form tail-label &aux tem result)
  (setq result (make-fdata :name name    :ll ll :doc doc))
  (setf (fdata-form result) form)
  (setf (fdata-tail-label result) tail-label)
  (when clb
    (dolist  (v  *walk-variable-bindings*)
      (cond ((and (typep v 'var)
		  (setq tem (var-clb v)))
	     (if (> tem
		    (or (cdr (assoc v closure-record)) 0))
		 (push v (fdata-closure-vars result)))))))
  result)

(defun declare-volatile (binds)
  (dolist (v binds)
    (or (and (consp v) (typep (car v) 'var) (wfs-error)))
    (setf (var-volatile (car v)) t)))

(defun find-bind (var &optional (set-clb t) &aux clb)
  (cond ((and (consp var) (eq (car var) 'done-b1))
	 (setq var (cdr var))))
  (dolist (v *walk-variable-bindings*)
    (cond ((var-p v)
	   (when (or (eq var (var-name v))
		     (eq var v))
	     (cond ((and clb set-clb
			 (not (var-special-p v)))
		    (setf (var-clb v)
			  (+ 1 (the fixnum (or (var-clb v) 0))))))
	     (return-from find-bind v)))
	  ((eq 'clb v)
	   (setq clb t))
	  ((consp v)
	   (cond ((eq (car v) var)
		  (case (second v)
		    (special
		     (return-from find-bind (third v)))
		    (symbol-macro (return-from find-bind (cdr v)))
		    (otherwise (wfs-error))))))
	  (t (wfs-error))))
  (or (si::specialp var) (keywordp var)
      (comp-warn "~a is an unknown variable.  Assuming it is special." var))
  (let ((tem (makevar var t)))
    (push (list var 'special tem) *walk-variable-bindings*)
    tem))


(defun b1-macro-function (name)
  (let ((tem (assoc name *walk-functions*)))
    (cond (tem
	   (if (eq 'macro (cadr tem)) (third tem) nil))
	  (t (macro-function name)))))

(eval-when (compile) (proclaim '(function expand-fun (t) t)))  

(defun expand-fun (form &aux f)
  (unless (and (consp form) (eq (car form) 'lambda-block))
	  (return-from expand-fun form))
  (setq f (second form))
  (let* ((line-info (get f 'line-info))
	 (*digest-line-info*
	  (if (and line-info *digest-line-info*)
	      (progn (clrhash *digest-line-info*)
		     (dotimes (i (length line-info))
			      (setf (gethash (aref line-info i)
					     *digest-line-info*)
				    i))
		     *digest-line-info*)
	    nil))
	 (*line-info* line-info))
    (let ((result (walk-top form)))
      (setf (car form) 'lambda-block-expanded)
      (setf (cdr form) (cdr result))
      form)))

(defun walk-top (form)
  (let ((*walk-variable-bindings* nil)
	(*control-stack* nil)
	(*walk-functions* nil)
	)
    (b1-walk form 'top)))

(defun transfer-line-info (form result for-sure &aux tem)
  ;; transfer the line info from FORM to RESULT.
  ;; If FOR-SURE holds, do it even if this would destroy
  ;; line info of RESULT.
  (cond ((atom result) nil)
	((setq tem (gethash form *digest-line-info*))
	 (when (or for-sure (not  (gethash result *digest-line-info*)))
	   (remhash form  *digest-line-info*)
	   (and *line-info* (setf (aref *line-info* tem) result))
	   (setf (gethash result *digest-line-info*) tem)))))

(defun b1-walk (form where &aux tem sym  result (changed 0))
  (declare (fixnum changed))
  (setq
   result
   (cond ((atom form)
	  (cond
	   ((constantp form)
	    (cond ((symbolp form)
		   (get-object (symbol-value form)))
		  (t  (get-object form))))
	   ((symbolp form)
	    (let ((v (find-bind form t)))
	      (cond ((and (consp v) (eq (car v) 'symbol-macro))
		     (b1-walk (second v) where))
		    (t (or (var-ref v) (setf (var-ref v) t))
		       v))))))
	 ((symbolp (setq sym (car form)))
	  ;;possibly fix line info
	  (and *digest-line-info*
	       (cond ((setq tem (get sym 'wl))
		      (funcall tem form))))
	  (setq changed (fill-pointer *changed*))
	  (cond ((setq tem (get sym 'b1))
		 (funcall tem form where))
		((and (setq tem (get sym 'bo1))
		      (setq tem (funcall tem form where)))
		 (b1-walk tem where))
		((b1-macro-function sym)
		 (b1-walk (macroexpand form (walk-environment)) where))
		((setq tem (get sym 'si::structure-access))
		 (let (arg res-type  sd (index (cdr tem)))
		   (desetq (arg) (cdr form))
		   (setq tem
			 (case (car tem)
			   (vector `(aref (the (array t) ,arg) ,index))
			   (list `(nth ,index ,arg))
			   (t 
			    (setq sd (get (car tem) 'si::s-data))
			    (or (null (cddr form)) (comp-warn "Too many args to ~a" sym))
			    (cond ((null sd) (comp-warn "Structure not defined ~a" (car tem)))
				  (t
				   (setq res-type
					 (comp-type(aet-type (aref (si::s-data-raw sd) index))))
				   (cond ((eq res-type t)
					  `(si::structure-ref ,arg  ',(car tem) ,index))
					 (t
					  `(the,res-type
					    (si::structure-ref
					     (the (struct ,res-type) ,arg)
					     ',(car tem) ,index)))))))))
		   (b1-walk tem where)))
		;; function application
		(t
		 (do-call-b1 form where)
		)))
	 ((and (consp (car form))
	       (eq (caar form) 'lambda))
	  (b1-walk `(funcall (function ,(car form)) ,@ (cdr form)) where))
	 (t (error "unrecognized form to eval ~a" form))))
  (when (and (consp result)
	     (consp (cdr result))
	     (typep (second result) 'desk))
    (let ((tem 
	   (let ((v *changed*))
	     (declare (type (vector (t)) v))
	     (sloop for i from changed below (fill-pointer v)
		collect (aref v i)))))
      (when tem
	(if (eq (second result)	*default-desk*)
	    (setf (second result) (make-desk t)))
	(setf (desk-changed-vars (second result))tem)
	)))
  (and *digest-line-info* (transfer-line-info form result t))
  result)

(defun constant-call (sym arglist)
  (and (sloop for v in arglist
	  always (and (consp v) (eq (car v) 'dv)))
       (cons 
	(b1-walk (apply sym (mapcar 'caddr arglist)) 'call)
	nil)))

(defun do-call-b1 (form where &aux (sym (car form)) tem args)
  (let* ((wf (cdr (assoc sym *walk-functions*)))
	 (res
	 `(call ,*default-desk*
		,(make-call-data sym
				 (setq args (mapcar2 'b1-walk (cdr form)
						     'funcall))
				 wf
				 (cdr (assoc sym *function-decls*))
				 ))))
    (cond (wf
	   ;; indicate a closure ref if necessary.
	   (if (third wf) 	   (find-bind (var-name (third wf))))
	   )
	  ((setq tem (result-from-args sym args))
	   (setf (second res) (set-desk-type (second res) tem)))
	  ((setq tem (get sym 'proclaimed-function-declaration))
	   (setq tem (ret-from-argd (fdecl argd tem)))
	   (cond ((eq tem 'double_ptr) (setq tem 'double-float))
		 ((eq tem '*) (setq tem 't)))
	   (setf (second res) (set-desk-type (second res) tem))))
    (cond ((and (member sym '(< > length + - * / ))
		(setq tem (constant-call sym (call-data-arglist (third res)))))
	   (return-from do-call-b1 (car tem))))
    
    ;; tail recursion????
    (cond ((and (consp where)
		(eq (car where) 'lambda-block)
		(eq (second where) sym)
		(not (member 'bound-special *control-stack*))
		(not wf))
	   (format t "~%;;Note: Replaced tail call of ~a by iteration." sym)
	   (let ((args (call-data-arglist (third res))))
	     (sloop for v in args with s
		do
		(unless (cdr args)
			(setq sets (list (cons 'done-b1 (car args))))
			(loop-finish))
		(setq s (gensym))
		for var in (third where)
		collect (list s (cons 'done-b1 v)) into binds
		unless (eq t (var-type var))
		collect (list 'type (var-type var) s) into decls
		collect s into sets
		finally
		(setq res (b1-walk
			   `(let ,binds
			      ,(cons 'declare decls)
			      (assign-args  ,@sets)
			      (go ,(label-identifier (nth 3 where))))
			   'let))))))

    ;;ordinary functioncall
    res))

(defun b1-quote-first (form where &aux sform fir bod) where
  (desetq (sform fir . bod) form)
  `(,sform ,fir ,@ (mapcar2 'b1-walk bod sform)))

(defun b1-quote (form where &aux val) where
  (desetq (nil val) form)
  (and (cddr form) (comp-error "Two many args to quote ~a"form))
  (get-object val))

(defun b1-setq (form where &aux sform var bod val ans)  where
  (cond ((null (cdr form)) (return-from b1-setq (get-object nil))))
  (desetq (sform var val . bod) form)
  (do  ()  (nil)
    (let ((v  (find-bind var t)))
      (setf (var-changed v) t)
      (and (plain-var-p v) (vector-push-extend v *changed*))
      (setq val (b1-walk val sform))
      (push v ans) (push val ans)
      (if bod (desetq (var val . bod) bod)
	(return nil))))
  `(,sform, (make-desk (var-type (second ans))) ,@ (nreverse ans)))

(defun b1-eval (form where &aux sform bod) where
  (desetq (sform . bod) form)
  `(,sform ,@ (mapcar2 'b1-walk bod sform)))

;; using (control-jumped-back id)
;; 
;; and (pass-values) 

(defun b1-tagbody  (form where &aux sform bod
			 (*walk-variable-bindings* *walk-variable-bindings*)
			 (*control-stack* *control-stack*)
			 (longjmp-id (makevar nil nil))
			 sym
			 (clb-ref (list 0 longjmp-id))
			 )
  where
  (desetq (sform . bod) form)
  (push longjmp-id *walk-variable-bindings*)
  (setq bod 
	(sloop for v in-list bod
	   when (or (integerp v) (symbolp v))
	   collect (list 'done-b1
			 'label
			 (let ((tem (make-label :identifier v
						:clb-reference
						(cons nil clb-ref)
						)))
			   (push tem *control-stack*)
			   tem))
	   else
	   collect v))
  (setq bod (mapcar2 'b1-walk bod sform))
  (cond ((var-clb longjmp-id)
	 (setq sym (gensym))
	 (bound-variables-volatile)
	 `(let-control-stack
	   (let ,*default-desk*
	     ((,longjmp-id ,(b1-walk '(unique-id) 'let-var)))
	     (,(b1-walk
		`(let ((,sym  0)
		       (ctl-came-back  (control-jumped-back (done-b1 . ,longjmp-id))))
		   (declare (fixnum ,sym)(boolean ctl-came-back))
		   (if  ctl-came-back
		       (progn (nlj-active-off)(setq ,sym (pass-values))))
		   (switch ,sym
			   ,@ (sloop for v in bod with tem
				 when (and (consp v)
					   (eq (car v) 'label)
					   (setq tem (car (label-clb-reference (cadr v)))))
				 collect `(case ,tem)
				 collect (cons 'done-b1 v))))
		'tagbody)))))

	(t
	 `(,sform  ,*default-desk*  ,bod))))





;; wrapper so you can avoid doing b1 twice on a form.
;; when we need to do it once to get the result type.

(defun b1-done-b1 (form where) where (cdr form))

(defun b1-prog1 (form where &aux sform body first)
  (desetq (sform first body) form)
  (setq first (b1-walk first where))
  (let ((sym (gensym)))
    (b1-walk 
     `(let ((,sym (done-b1 . ,first)))
	(declare (type ,(result-type first) ,sym))
	,@ (append body (list sym)))
     where)))

(defun b1-progn (form where &aux sform bod) where
  (desetq (sform . bod) form)
  (cond ((and (eq sform 'progn) (null (cdr bod)))
	 (b1-walk (car bod) where))
	(t (setq bod (mapcar2 'b1-walk bod sform where))
	   `(progn ,(make-desk (result-type (car (last bod))))  ,bod ))))

(defun b1-if (form where &aux sform test then else) where
  (desetq (sform test then) form)
  (setq form (cdddr form))
  (when (consp form) (setq else (car form)) (setq form (cdr form)))
  (if form (error "Too many args to if"))
  (setq test (b1-walk test sform))
  (setq then (b1-walk then  where))
  (setq else (b1-walk else  where))
  (cond ((and (consp test) (eq (car test) 'dv))
	 (return-from b1-if
		      (if (eq (third test) nil) else then))))
  `(,sform ,(make-desk (type-and (result-type then)
				 (result-type else)))
	   ,test ,then ,else))

(defun  b1-macrolet (form where &aux sform mbinds ll name body mbody funs)
  (desetq (sform mbinds  . body) form)
  (do ((v mbinds (cdr v)))
      ((atom v))
    (desetq ((name ll . mbody)) v)
    (let ((fun (second (parse-macro name ll  mbody t))))
      (push (list name 'macro fun) funs)))
  (let ((*walk-functions* (nconc (nreverse funs) *walk-functions*)))
    (b1-walk (cons 'progn body) where)))

(defun  b1-flet (form where &aux sform mbinds name ll body mbody 
		      new-binds fun  ans let-binds let-sets var fdat tem
		      (*walk-variable-bindings* *walk-variable-bindings*)
		      (*walk-functions* *walk-functions*))
  (desetq (sform mbinds  . body) form)
  (do ((v mbinds (cdr v)))
      ((atom v))
    (desetq ((name ll . mbody)) v)
    (setq fun `(lambda-block ,name ,ll ,@mbody))
    ;;a variable to hold a pointer to the function itself.
    ;; so we don't have to cons up more than one copy of itself.
    (setq var (makevar (gensym "flet") nil))
    (push var *walk-variable-bindings*)
    (push (list name fun nil var) new-binds)) 
  (if (eq sform 'labels)
      (setf *walk-functions*
	    (append new-binds *walk-functions*)))
  (dolist (v new-binds)
    (setq var (fourth v))
    (setq ans(b1-lambda-block (second v) sform 'clb ))
    (setq fdat (second ans))
    (setf (third v) ans)
    (cond ((setq tem (fdata-closure-vars fdat))
	   (cond ((and (null (cdr tem))
		       (eq (car tem) var))
		  ;; if the only reason for it being a closure is the self reference var
		  ;; forget it.
		  (setf (fdata-closure-vars fdat) nil))
		 (t 
		  (setf (fdata-closure-self fdat) var)
		  (push (list var nil) let-binds)
		  (push  `(pointer-to-funobj ,fdat) let-sets)
		  (push var let-sets))))
	  (t (setf (fourth v) nil)
	     )))

  (if (eq sform 'flet)
      (setf *walk-functions*  (append new-binds *walk-functions*)))
  (setq body (mapcar2 'b1-walk body sform where))
  (setq ans 
	`(flet ,(make-desk (result-type (car (last body))))
	   ,(reverse new-binds) ,body))
  (if let-binds
      `(let ,(second ans) ,let-binds
		      ((setq  ,*default-desk* ,@ let-sets)
		       ,ans))
    ans))

(defun b1-symbol-macrolet (x where &aux sform binds body expansion decls tem
			     new-binds name
			     )
  (desetq (sform binds . body) x)
  (desetq (decls  body)  (grab-declares body t))
  (do ((v binds (cdr v)))
      ((atom v))
    (desetq ((name  expansion)) v)
    (if (member name (car decls))
	(error "special declaration of symbol-macrolet var ~a"
	       name))
    (when (setq tem (assoc name (second decls)))
      (setf expansion `(the , (cdr tem) ,expansion)))
    (push (list name 'symbol-macro  expansion) new-binds))
  (let ((*walk-variable-bindings*  (nconc new-binds *walk-variable-bindings*)))
    (b1-progn (cons 'progn body) where)))

(defun b1-let (form where &optional compiler-let
		    &aux sform  var vars body val
		    (*function-decls* *function-decls*)
		    (*walk-variable-bindings* *walk-variable-bindings*)
		    (*control-stack* *control-stack*)
		    decls
		    binds)
  (desetq (sform vars . body) form)
  (do ((v vars (cdr v)))
      ((atom v))
    (cond ((consp (car v))
	   (setq var (caar v))
	   (setq val (cdar v))
	   (and (not compiler-let)
		(setq val (b1-walk (car val) sform))))
	  (t (setq var (car v) val nil)))
    (push (list var val) binds))
  (setq binds (nreverse binds))
  (if compiler-let
      (return-from b1-let
		   (progv (mapcar 'car binds) (mapcar 'cadr binds)
			  (b1-progn (cons 'progn body) where))))
  (desetq (decls  body)  (grab-declares body nil))
  (dolist-safe (v binds)
	       (wbind (car v) decls))
  (add-remaining-special-decls decls)
  (cond ((null vars) (b1-progn (cons 'progn body) where))
	(t (setq body (mapcar2 'b1-walk body sform where))
	   (check-used binds 0)
	   `(let ,(make-desk (result-type (car (last body))))
	      ,binds, body))))

(defun b1-compiler-let (form where)
  (b1-let form where t))

(defun b1-let* (form where &aux sform var val binds
		     (*function-decls* *function-decls*)
		     (*control-stack* *control-stack*)
		     (*walk-variable-bindings* *walk-variable-bindings*)
		     vars body decls)
  (desetq (sform vars . body) form)
  (desetq (decls body) (grab-declares body nil))
  (do ((v vars (cdr v)))
      ((atom v))
    (cond ((consp (car v))
	   (setq var (caar v))
	   (setq val (cdar v))
	   (and (consp val)
		(setq val (b1-walk (car val) sform))))
	  (t (setq var (car v) val nil)))
    (push (list var val) binds)
    (wbind (caar binds) decls)
    )
  (add-remaining-special-decls decls)
  (setq binds (nreverse binds))
  (cond ((null vars) (b1-progn (cons 'progn body) where))
	(t (setq body (mapcar2 'b1-walk body sform where))
	   (check-used binds 0)
	   `(let* ,(make-desk (result-type (car (last body))))
	      ,binds, body)))
  )

;; Scope of declarations:
;; Note Xrj13 voted that for
;; (let ((x 0)) (declare (fixnum x))
;;      .. (let ((x 5))(declare (type t x)) ..))
;; then the inner declaration of x is also (and fixnum t) ie fixnum.
;; We DO NOT take advantage of this declaration, since it is very easy
;; for users to slip up on this, and since it is contrary to CltlI.  The
;; Compiler has license to ignore type decls if it wants, and we do so here.
;; They explicitly say for
;; (let ((x 0)) (declare (special x))
;;      .. (let ((x 5)) ..))
;; then the inner binding of x is NOT special unless there is another decl.
;; We do this.

(defun grab-declares (form doc-allowed &aux (dec t) decls doc tem) doc-allowed
  ;; return  (cons form  decls)
  ;; decls == (list specials type-decls ..)
  (if (stringp (car form)) (setq doc (car form)
				 form (cdr form)))
  (sloop while dec
     do
     (setq tem (car form))
     (cond ((and (consp tem) (eq (car tem) 'declare))
	    (setq form (cdr form))
	    (dolist-safe (v (cdr tem)) (setq decls (grab-1-decl v decls))))
	   ((eq tem (car form))(setq dec nil))
	   (t (setq form (cons tem (car form))))))
;  (if (and doc (not decls))     (setq form (cons doc form)))
  ;decls= (((v1 . type1) (v2 . type2) ..)(special-var1 special-var2 ..))
  (list decls form doc))

(defun get-back-some-decls (decls vars &aux specials types tem)
;; build up a declare to restore the decls.  
  (setq specials(sloop for v in vars when (member v (second decls))
		   collect v ))
  (setq types(sloop for v in vars
		when (setq tem (assoc v (car decls)))
		collect `(type ,(cdr tem) ,v)))
  (cond (specials (push (cons 'special specials) types)))
  (if types  `((declare ,@ types))nil))
  
(defun b1-declare (form where &aux type vars)
  where
  (dolist (v (cdr form))
    (desetq (type . vars)   v)
    (cond ((eq type'special)
	   (sloop for w in-list vars
	      do (push (list v 'special (makevar v t)) *walk-variable-bindings*)))
	  ((member type '(ftype optimize function 
				ignore
				declaration
				dynamic-extent))
	   nil)
	  ((member type '(inline notinline))
	   (dolist-safe (v vars)
			(push (cons v
				    (increment-function-decl type
							     (function-declaration v)))
							      *function-decls*)))
	  ((eq type 'type)
	   (desetq (type . vars) vars)
	   ;; do nothing.
	   )))
  nil)

(defun b1-the (form where &aux sform type val tem)
  ;; note this takes away the checking
  (desetq (sform type val) form)
  (setq val (b1-walk val where))
  (setq type (comp-type type))
  (cond ((and (consp val) (typep (setq tem (second val)) 'desk))
	 (setf (second val) (set-desk-type tem type))
;	 (unless (and (consp type) (eq (car type )'values)
;		      (consp (cdr type)) (consp (cddr type)))
;		 (setf (desk-single-value (second val)) t))
	 val)
	(t (setq tem (result-type val))
	   (setq type (type-and tem type))
	 `(the ,(make-desk type) ,val))))

(defun b1function-object (object  where)
  ;; this might be called by b1-funcall, b1-mapcar and others
  ;; to avoid getting closure varialbes.   They must promise to inline
  ;; this, since the closure vars are not set up, for cross closure stuff.
  
  (cond ((matches object '(function (lambda . tem)))

	 `(inline-function ,(b1-lambda-block (second object) 'function nil)))
	(t (b1-walk object where ))))

(defun b1-function (form where &aux sform body tem) where
  (desetq (sform body) form)
  (cond ((symbolp body)
	 (cond ((setq tem (assoc body *walk-functions*))
		(cons 'pointer-to-funobj (cddr tem)))
	       (t (b1-walk `(symbol-function ',body) where))))
	((and (consp body)
	      (eq (car body) 'lambda))
	 (b1-lambda-block body 'function 'clb))
					;`(lambda-block ,(b1-lambda-block body 'function t))
	(t (error "unrecognized function ~a" body))))

(defun b1-go (form where &aux sform label clb result ) where
  (desetq (sform label) form)
  (sloop for v in *control-stack*
     when (eq v 'clb) do (setq clb t)
     else  when (and (typep v 'label)
		     (eql (label-identifier v) label))
     do(setq result v)
     (when clb
       (setq clb (label-clb-reference v))
       (or (car clb) (setf (car clb) (incf (cadr clb))))
       (let ((tem (or (var-clb (third clb)) 0)))
	 (incf tem)
	 (setf (var-clb (third clb) ) tem)))
     (return nil)
     finally (comp-error "~a label is not found " label))
  (cond (clb (b1-walk `(progn (call-set-mv ,(car clb))
			      (do-throw (done-b1 . ,(third clb))) nil) 'go))
	(t (setf (label-referred result) t)  (list 'go result))))

;(defun b1-unwind-protect (x where &aux form cleanup 
;			    (var (gensym))
;			    )
;  (desetq (nil form . cleanup) x)
;  (bound-variables-volatile)
;  (b1-walk
;   `(let ((,var (function (lambda () ,@ cleanup))))
;      (declare (dynamic-extent ,var))
;      (push-unwind-protect ,var)
;      (multiple-value-prog1
;       ,form
;       (pop-control-stack)
;       (funcall ,var)))
;   where))

(defun simple-b1 (x where &aux sform form)
  (desetq (sform form) x)
  `(,sform ,(b1-walk form where)))
(setf (get 'let-control-stack 'b1) 'simple-b1)

(defun b1-unwind-protect (x where &aux form cleanup 
			    (var (gensym))
			    )
  (desetq (nil form . cleanup) x)
  (bound-variables-volatile)
  (b1-walk
   `(let ((,var (function (lambda () ,@ cleanup))))
      (declare (dynamic-extent ,var))
       (let-control-stack (progn (push-unwind-protect ,var) ,form)))
   where))

(defun b1-progv (x where &aux vars vals body bind)
  (desetq (vars vals . body) (cdr x))
  (setq bind (b1-walk `(the fixnum (progv-bind ,vars ,vals)) 'progv))
  (let ((*control-stack* (cons 'progv *control-stack*)))
    (setq body  (mapcar2 'b1-walk body 'progv where))
    `(progv ,(make-desk (result-type (car (last body))))
	    ,bind ,body)))

(defun b1-catch (x where &aux tag bod ) 
  where
  (desetq (tag . bod) (cdr x))
  (bound-variables-volatile)
  `(let-control-stack
    ,(b1-walk
      `(if (control-jumped-back ,tag) (progn (nlj-active-off)(pass-values))
	 (progn ,@ bod))
      'catch)))

(defun b1-throw (x where &aux tag bod form) where
  (desetq ( tag  form . bod ) (cdr x))
  (or (null bod) (comp-error "too many args to throw ~a" x))
  (let (sym)
    (b1-walk
     `(let ,(cond ((and (consp tag)(eq (car tag) 'quote))(setq sym tag) nil)
		  (t (setq sym (gensym)) `((,sym ,tag))))
	(call-set-mv ,form)
	(do-throw ,sym)
	nil)
     'throw)))

;(defun b1-throw (x where &aux tag bod form) where
;  (desetq ( tag  form . bod ) (cdr x))
;  (or (null bod) (comp-error "too many args to throw ~a" x))
;  `(throw ,*default-desk* ,tag ,(b1-walk form 'throw)))

(defun b1-multiple-value-prog1 (x where &aux first bod)
  (desetq (nil first . bod) x)
  `(multiple-value-prog1 ,*default-desk* ,(b1-walk first where)
			 ,(mapcar2 'b1-walk bod  'progn)))

(defun b1-block (x where &aux sform tag bod
                   ( *control-stack*  *control-stack*)
		   (*walk-variable-bindings* *walk-variable-bindings*)
                   block ans var)
  (desetq (sform tag . bod) x)
  (setq block (make-block (make-label :identifier tag
				      :clb-reference (setq var (makevar nil nil))
				      )))
  (push var *walk-variable-bindings*)
  (push block *control-stack*)
  (or bod (setq bod '(nil)))
  (setq bod  (mapcar2 'b1-walk bod  sform where))
  (setq ans   `(,sform ,(make-desk (result-type (car (last bod))))
		       ,block ,bod))
  (cond ((var-clb var)
	 (bound-variables-volatile)
	 (setq ans
	       `(let-control-stack
		 (let ,(second ans) ,
		   `((,var ,(b1-walk '(unique-id) 'let-var)))
		   (,(b1-walk `(if (control-jumped-back (done-b1 . ,var))
				   (progn
				     (nlj-active-off)
				     (pass-values))
				 (done-b1 . ,ans))
			      where))))))
	(t (setf (label-clb-reference (block-label block)) nil)))
  ans
  )

(defun b1-return-from (x where &aux clb tag block form bod) where
  (desetq (nil tag . bod) x)
  (cond ((null bod) (setq form nil))
	((consp bod) (setq form (car bod))
	 (or (null (cdr bod))
	     (comp-error "Too many values for return-from ~a"x)))
	(t (comp-error "Bad return from ~a" x)))
  (sloop for v in *control-stack* 
     when (eq v 'clb) do (setq clb t)
     else
     when (and (typep v 'block)
	       (eql (label-identifier (block-label v)) tag))
     do (setq block v)
     (when clb
       (setq clb (label-clb-reference (block-label v)))
       (cond ((var-clb clb) (incf (var-clb clb)))
	     (t (setf (var-clb clb) 1))))
     (return nil)
     finally (comp-error "Could not find ~a tag to return from" block))
  (cond (clb
	 (b1-walk `(progn 
		     (call-set-mv ,form)
		     (do-throw ,(cons 'done-b1 clb))
		     nil
		     )
		  'return-from))
	(t  (setq form (b1-walk form 'return-from))
	    `(return-from ,(make-desk (result-type form)) ,block ,form))))

(defun b1-values (x where)
  (let ((argl (mapcar2 'b1-walk (cdr x) where)))
    `(values , (make-desk (if argl (result-type (car argl)) t)) ,argl)))

  

;; Several WL functions for Walk to fix Line-info, and
;; make it more sensible for special forms.

(do ((v '(let wl-let
	   let* wl-let
	   compiler-let wl-let
	   cond wl-cond
	   ) (cddr v)))
    ((null v))
  (setf (get (car v) 'wl) (second v)))

(defun wl-let (form &aux sform vars bod)
  (desetq (sform vars . bod) form)
  (dolist (v vars)
    (if (consp v)
	(transfer-line-info v (second v) nil))))

(defun wl-cond (form &aux clauses)
  (desetq (nil . clauses) form)
  (dolist (v clauses)
    (or (consp v) (error "bad cond clause"))
    (transfer-line-info v (if (consp (car v)) (car v)
			    (second v)) nil)))

(defun use-expansion (do)
  (if do (setf si::lambda-block-expanded (symbol-function 'si::expand-fun))
    (setf si::lambda-block-expanded nil)))

(defmacro switch (test &body body &aux tem (tes (gensym )))
  (sloop for v in-list body
     when
     (and (consp v) (eq (car v) 'case)
	  (consp (cdr v))
	  (null (cddr v)))
     collect (setq tem (make-symbol (format nil "case~a_" (cadr v)))) into bod
     and
     collect (cons (cadr v) tem) into cases
     else collect v into bod
     finally
     (return
      `(tagbody
	(let ((,tes ,test))
	  (declare (fixnum ,tes))
	  (cond ,@ (sloop for v in cases
		      when (typep (car v) 'fixnum)
		      collect `((eql ,tes ,(car v))(go ,(cdr v)))
		      else
		      collect `(t (go ,(cdr v))))))
	,@ bod))))
	      
;(switch n (case 0) 3)
	
	
     
	       


;;
;;- Local variables:
;;- mode:lisp
;;- version-control:t
;;- End:



  

	
	 
	  



