(in-package "BCOMP")
;; pass 2 c compilation

(eval-when (compile eval load)

(defparameter
  *pass-2-vars* '(
		  *address-vector*
		  ;; At load time the index in *cfun-addresses*
		  ;; will be the address of the function.   This *address-vector* is used
		  ;; at the end to create this vector in the .h file.
		  *next-data*
		  ;; is the next data index available
		  *next-label*
		  ;; is next label available number
		  *next-function*
		  ;; next function number as  `3' in L3
		  *blocks*
		  ;; number of '{' we have  nested using open-block
		  *next-cvar*
		  ;; is next c variable number
		  *file-inline-templates*
		  *local-funs*
		  ;; are extra-local-funs to do
		  *local-inline-templates*
		  ;; inline templates
		  *top-level-closure-vars*
		  ;; call links.
		  *links*
		  ;; alist of forms to eval at load time and put in constant vector.
		  *load-time-forms*
		  ;; if not nil open a block 
		  *do-pending-open*
		  ))

(proclaim (cons 'special *pass-2-vars*))

 )		       

(defun vararg-p (fd)
  (let ((ll (fdata-ll fd)))
    (or (ll &optional ll)
	(ll &rest ll)
	(ll &key ll))))

(eval-when (load compile eval)

(defvar *illegal-names* (make-hash-table :size 100 :test 'equal))
(unless
;   (gethash  "case" *illegal-names*)
   (dolist (v'(;;C reserved words:
	       "do" "for" "sizeof" "typedef" "extern" "static" "auto"
	       "register" "void" "char" "short" "int" "long" "float" "double"
	       "signed" "unsigned" "struct" "union" "enum" "const" "volatile" "case"
	       "default" "if" "else" "switch" "while" "do" "for" "goto" "continue"
	       "break"
	       ;;varargs
	       "va_start" "va_end" "va_list" "va_dcl" "va_alist"
	       "stdin" "stdout"
	       "inline"
					;lisp specific:
	       "length" "elt" 
	       "object" "car" "cdr" "list"
	       "number_plus" "number_times"  "bool" fixnum" shortfloat"
	       "doublefloat"
	       ))
     (setf (gethash v *illegal-names*) t)))

(defvar *use-mangled-names* t)

(defvar *used-names*
  ;; bound by lets and constructions which bind variables
  nil)

(defun mangle-name (name name-type &aux p)
  ;; NAME is a symbol which we wish to mangle, and name-type is
  ;; 'var or 'function.
  
  (cond ((or (null *use-mangled-names*) (null name)
	     (null (setq p (symbol-package name))))
	 (cond ((eq  name-type 'var) *next-cvar*)
	       ((eq  name-type 'function)
		(incf *next-function*))
	       (t (incf *next-cvar*))))
	(t (or (eq name-type 'var)
	       (setq p (get-package-shortname p)))
	   (let ((v (mangle name)))
	     (cond ((eq name-type 'var)
		    (do ((i 0)
			 (w v (setq w (format nil "V~a~a" (incf i) v))))
			((not (or (gethash w *illegal-names*)
				  (member w *used-names* :test 'equal)))
			 (setq w (copy-seq w))
			 (Push w *used-names*)
			 w)))
		   (t 
		    (si::string-concatenate
		     (cond ((eq name-type 'function)  "f")
			   ((eq name-type 'symbol) "s")
			   (t "u"))
		     p
		     v
		     )))))))

(defvar *package-names* nil)

(defun get-package-shortname (x)
  (or *package-names*
      (setq *package-names*
	    `((,(find-package "LISP") . "L")
	      (,(find-package "SYSTEM") . "S")
	      (,(find-package "KEYWORD") . "K"))))
  (let ((tem (cdr (assoc x *package-names*))))
    (cond (tem tem)
	  (t
	   (let((na (or (car (package-nicknames x))
			(package-name x))))
	     (setq na (mangle (string-downcase na)))
	     (if (rassoc na *package-names*)
		 (error "You need to add another nickname: ~a is in use" na))
	     (setq na (copy-seq na))
	     (push (cons x na) *package-names*)
	     na)))))

(defun next-cvar (&optional v &aux name)
  (let ((n (incf *next-cvar*)))
    (cond ((null v) n)
	  ((consp v) (setf (second v) n) v)
	  ((typep v 'var)
	   (cond ((var-special-p v)
		  (setf (var-special-p v) n)) 
		 (t (setq name (var-name v))
		    (setf (var-ind v)
			  (if (and name (symbol-package name))
			      (copy-seq (mangle-name name 'var))
			    n)))))
	  (t (wfs-error)))))

(defun next-label()
  (incf *next-label*))

  (proclaim (cons 'special *pass-2-vars*))

(defun execute-pass-2 ( &aux  (top *top-forms*) )
  (let  #.*pass-2-vars*
    (setq *next-data* 0 *next-label* 0 *next-function* 0
	  *address-vector* (make-array 30 :adjustable t :fill-pointer 0))
    (terpri *c-output*)
    (wr "
#include \"cmpinclude.h\"
#include \"" (pathname-name *h-output*) ".h\"")
    (wr "

init_code(){IdoInit(sizeof(VV)/sizeof(char *),VV);}

")
    (sloop for v in top do
       (do-one-pass-2 v))
    (write-out-links)
    (write-out-address-and-data)
    (terpri *h-output*)
    (wr-nl "")
					;   (print *data*)
    ))

(defun do-one-pass-2 (x &aux df *local-funs* fd)
  (cond ((consp x)
	 (cond ((and (symbolp (car x))
		     (setq fd (get (car x) 'e2)))
		(funcall fd x))
	       (t (wfs-error))))
	((typep x 'top-form)
	 (cond ((top-form-funp x)
		(setq df (add-dummy-fun
			  (top-form-walked x))))
	       (t (push-data 'd_eval_skip
			     (top-form-lisp x)))))
	(t (wfs-error)))
  (dolist (v *local-funs*)
    (do-one-pass-2 v))
  (when df
    (push-data 'd_eval_skip `(si::invoke ,df))))

(proclaim '(ftype (function () t) dummy-top))

(defun add-dummy-fun (x &aux ans)
  ;; create a simple C function of no args which invokes the
  ;; lisp form x in compiled form.  returns the integer index
  ;; of the *function-addresses* array where the C function's address resides.
  (setq ans`(lambda-block   ,(make-fun-data 'dummy-top nil nil nil nil x nil)))
  (setf (fdata-ind (second ans)) (incf *next-function*))
  (e2-write-top  (make-top-form :walked ans :funp t))
  (push-address (second ans))
  )

(defun car-get (x flag)
  (and (consp x) (symbolp (car x))
       (get (car x) flag)))

  (setf (get 'write-top 'e2) 'e2-write-top)

(defun e2-write-top (x &aux fd)
					;(print x)
					;  for (lambda #S(fdata ..))
					;  sets the ind in #s(fdata ) and writes out the definition.
					;  writes out the L20() { ..}
					; side ..
  (cond ((and (typep x 'top-form)
	      (setq fd (car-get (top-form-walked x) 'e2)))
	 (return-from e2-write-top (funcall fd (top-form-walked x)))))

  (unless (and (consp x) (symbolp (car x)))
	  (wfs-error))
  (cond ((setq fd (get (car x) 'e2))
	 (funcall fd x))
	(t (wfs-error)))
  ) 

  ;; writing out the .data  file:
  ;; each time something in *data-table* is first referenced we assign
  ;; an index and put it in *data*.   This normally happens while a function
  ;; definition (and its local functions) are being written out.    After
  ;; that is written out (so all its constants are looked after) we push 
  ;; the (d_eval_skip (fset argd function-address-index "docstring"))

  (setf (get 'si::fset 'e2) 'e2fset)
  (setf (get 'mset 'e2) 'e2fset)

(defun push-address (x)
  (let ((n (fill-pointer *address-vector*)))
    (vector-push-extend x *address-vector*)
    n))

(defun link-descriptor-from-decl (argl ret  &aux (atypes 0) saw-optional
				       (min 0) (max 0)  )
  (declare (fixnum   min max atypes))
  (sloop for v in-list argl
     when (eq v '&optional)
     do (setq saw-optional t)
     else
     when (member v '#. (cons '* lambda-list-keywords))
     do (setq max 63) (return nil)
     else
     do
;     (if (eq v 'short-float) (setq v 'double-float)) 
     (unless saw-optional
	     (incf min))
     (incf max)
     (cond ((< max 7) 
	    (setq atypes (+ atypes
			    (the fixnum (ash
					 (arg-type-code (promote-arg-type v))
					 (the fixnum (* max 2)))))
		  ))))
  ;; set the return type:
  (setq atypes (logior atypes (arg-type-code  (promote-arg-type ret))))
  
  (let ((res 0))
    (declare (fixnum res))
    (setf res   (make-argd min max atypes))
    (or (eql max min)
	(setf (argd-flag-p res requires-nargs) t))
    (when (or (eql ret '*)(and (consp ret)(eq (car ret) 'values)))
      (setf (argd-flag-p res sets-mv) t))
    res))  

(defun make-argd (min max  atypes &aux (result 0))
  (declare (fixnum min max atypes result))
  (setf (argd-minargs result) min)
  (setf (argd-maxargs result) max)
  (setf (argd-atypes result) atypes)
  result)

(defun describe-argd (argd)
  (format t "~%min=~a,max=~a,atypes=~a,arg-types=~a,ret=~a
flags[set-mv=~a, requires-nargs=~a,requires-fun-passed=~a "
	  (argd-minargs argd)
	  (argd-maxargs argd)
	  (argd-atypes argd)
	  (argl-from-argd argd)
	  (ret-from-argd argd)
	  (argd-flag-p argd sets-mv)
	  (argd-flag-p argd requires-nargs)
	  (argd-flag-p argd  requires-fun-passed)))

;(defstruct arg-stepper (atype 0 :type fixnum))
;(defvar *arg-stepper* (make-arg-stepper))
;
;(defun init-arg-stepper (argd) (setf (arg-stepper-atype *arg-stepper*)
;			       (argd-atypes (the fixnum argd)))
;  nil)
;
;(defun next-arg-type ()
;  (let* ((a (arg-stepper-atype *arg-stepper*))
;	 (res (aref *promoted-arg-types* (the fixnum (logand a 3)))))
;    (setf a (ash a -2))
;    (setf (arg-stepper-atype *arg-stepper*) a)
;    res))
  
(defun argl-from-argd (argd &aux ans)

  (declare (fixnum argd))
  (let ((atypes (argd-atypes  argd))
	(min (argd-minargs argd))
	(max (argd-maxargs argd))
	(i 0))
    (declare (fixnum atypes min max i))
    (sloop while (<= i 7)
       do (setq atypes (ash atypes -2))
       (cond ((and (>= i min) (eql atypes 0))
	      (if (< i max) (push '* ans))
	      (return nil))
	     ((eql i min) (push '&optional ans)))
       (push (aref *promoted-arg-types* (logand atypes 3)) ans)
       (setq i (+ i 1)))
    (or (eq (car ans) '*)
	(<= max 7)
	(push '* ans))
    (nreverse ans)))
	  
(defun ret-from-argd (argd &aux ans)
  (declare (Fixnum argd))
  (let ((tem (logand (argd-atypes argd) 3)))
    (declare (fixnum tem))
    (setq ans (aref *promoted-arg-types* tem))
    (cond ((argd-flag-p argd sets-mv) '*)
	  (t ans))))
)

(defun fdata-to-argd(fdat &aux tem)
  (cond ((setq tem (fdata-function-declaration fdat))
	 (return-from fdata-to-argd  (the fixnum(car tem)))))
  (let* ((ll (fdata-ll fdat))
	 (min (length (ll &required ll)))
	 (max (+ min (length (ll &optional ll))))
	 (argd 0))
    (declare (fixnum min max argd))
    (cond ((or (ll &rest ll)
	       (ll &key ll))
	   (setq max 63)))
    (setq argd (make-argd min max 0))
    (setf (argd-flag-p argd requires-nargs ) (> max min))
    (setf (argd-flag-p argd sets-mv) t)
    (setf (argd-flag-p  argd requires-fun-passed)(fdata-closure-vars fdat))
    argd))

(defun get-install-form (fdat sym &aux tem)
  (let ((argd (fdata-to-argd fdat))
	(n  (push-address fdat)))
    `(si::initfun ,sym ,n
		  ,argd,@ 
		  (sloop for v in (fdata-closure-vars fdat) 
		     do (setq tem (cdr (assoc v  *top-level-closure-vars*)))
		     (or tem (setq tem (push-data 'dv (cons nil nil))))
		     collect tem))))

(defun e2fset (form &aux sym fun fdat tem sform)
  (desetq (sform sym fun) form)
  (or (typep fun 'top-form) (wfs-error))
  (cond ((and (consp (setq tem (top-form-walked fun)))
	      (consp (cdr tem))
	      (typep (setq fdat (cadr tem)) 'fdata))
	 (e2-write-top fun)
	 (push-data 'd_eval_skip
		    (ecase sform
		      (si::fset
		       (get-install-form fdat sym))
		      (mset
		       (cons 'si::initmacro (cdr (get-install-form fdat sym))))))
	 )
	(t (setf (third form) (top-form-lisp (third form)))
	   
	   (push-data 'd_eval_skip form))))

(setf (get 'local-function 'e2) 'e2-local-function)

(defun e2-local-function (x )
  (e2-write-top  (second x))
  )

  #+later

(defun multiple-value-p (ret-type)
  ;; return T if the ret-type is one for not a single value.
  (or (eq ret-type '*)
      (and (consp ret-type) (eq (car ret-type) 'values))))

(setf (get 'lambda-block 'e2) 'e2-lambda-block)
(setf (get 'lambda 'e2) 'e2-lambda-block)

(defvar *temp-cvars*
  ;; list  of C  Vars  (ind type) which will be written out as the
  ;; TEMP_CVARSi macro at the beginning.
  )

(defvar	*next-vcs*
  ;; size of block of c stack reserved for this function
  ;; declare by object Vcs[n];
  )

(defvar *exit*
  ;; a CONS whose CAR              
  ;;          'function-return'      indicates return from function after set
  ;;          'next'                 control just continues
  ;;          a label struct         do a goto this lavel
  ;; Its CDR is a pointer into the control stack.     The interval of the controlstack
  ;; between this pointer and the current *control-stack*, must be unwound before jumping
  ;; or setting a possibly special variable.
  )

(defvar *closure-vars* nil)

(defvar *fdata* nil)

(defvar			  *used-function-saved-avma* nil
			  ;;  is set to t if we need to
			  ;; save the entering avma address.
)

(defun e2-lambda-block (x &aux (*next-cvar* 0) (*blocks* 0) fdat
			  *used-names*
			  (*next-vcs* 0)
			  (*next-label* 0)
			  *temp-cvars*
			  *closure-vars*
			  freturn-type
			  *control-stack*
			  ;; in this pass *control-stack* contains info about
			  ;; binding specials,saved-avma, tags  so we know when
			  ;; we jump if we need a setjmp, or if we need to unwind.
			  ;; also for function-return.
			  *alloc-decls*
			  *fdata*
			  *used-function-saved-avma*
			  )
  (declare (special *fdata*))
  (setq fdat (second x))
  (setq *fdata* fdat)
  (unless (fdata-ind fdat)
	  (setf (fdata-ind fdat)
		(mangle-name (fdata-name fdat) 'function)))
  (setq *closure-vars* (fdata-closure-vars fdat))

  (wr-comment "function definition:  " (fdata-name fdat))
  (wr"
static "     (rep-type (setq freturn-type (function-return-type fdat)))
" " fdat"(")
  (wr-h "static " (rep-type freturn-type)  fdat  "() ;");
  (write-args-and-open (fdata-ll fdat) (fdata-closure-vars fdat))
  (if (eq freturn-type 'double_ptr)(setq freturn-type 'double-float)) 
  (let* ((var (get-temp freturn-type))
	 (value `(,(if (eq freturn-type 'mv) 'mv 'var) ,var)))
    (valex value `(function-return ,var) (expr-b2 (fdata-form fdat))))
  (close-blocks)
  (wr-h-temp-vars)
  ;; This var is shared elsewhere and we want new reference mechanism.
  (dolist (v *closure-vars*) (setf (var-ind v) nil))
  (when (ll &key (fdata-ll fdat))
    (let ((tem (push-address (list 'VK (fdata-ind fdat) ))))
      (push-data 'd_eval_skip `(si::set-key-struct ,tem))))
  )

(defun wr-h-temp-vars( &aux type v)
  (let ((*c-output* *h-output*))
    (wr "
#define TEMP_VARS" *fdata*)
    (cond (*used-function-saved-avma*
	   (wr " long FunctionEntryAvma = avma;")))
    (dolist (w *temp-cvars*)
      (let ((t1 (or (second w) t)))
	(setq v (car w))
	(cond ((eq type t1)
	       (wr " ,V" v) )
	      (t (or (null type)
		     (wr ";"))
		 (setq type t1)
		 (format *h-output* " ~a V~a"
			 (rep-type type) v)))
	(cond ((eq type 'integer)
	       (format *h-output* "= 0,V~aalloc" v)
	       ))
	))
    (and *temp-cvars* (format *h-output* ";"))
    (unless (eql *next-vcs* 0)
	    (format *h-output* " object Vcs[~a];" *next-vcs*))
    ))

(defun open-block ()
  (incf *blocks*)
  (wr-nl "{"))

(defun close-blocks()
  (loop  (if (<= *blocks* 0) (return nil))
	 (wr "}")(incf *blocks* -1)))

(defun rep-type (type)
  (cond ((stringp type) (return-from rep-type type)))
  (case type
    ((character fixnum boolean) "int ")
    ((gen integer) "GEN ")
    (short-float "float ")
    (double-float "double ")
    (double_ptr  "DoublePtr ")
    (otherwise "object ")))

(defun bind-special (var val)
  (push 'bdsp *control-stack*)
					;  (incf *bdsp*)
  (or (var-ind var) (setf (var-ind var) (get-object (var-name var))))
  (wr-nl "BdSp("(var-ind var)","(list 'inline-loc t val)");")
  )

(defun b2-bind-var (w v)
  (cond
   ((typep w 'var)
    (cond 
     ((var-special-p w)
      (bind-special w v))
     ((var-clb w)
      (wr-nl)
      (wr-vind (var-ind w))
      (wr "=MakeClosVar(" v ");")
      (or (var-ind w) (wfs-error))
      )
     ((and (consp v) (eq (car v) 'var)
	    (eql (second v) (var-ind w))))
     (t
      (wr-set-inline-loc w v))))
	
   ;; save writing V3=V3
   ((and (consp w) (eq (car w) 'var))
    (cond ((and (typep v 'var) (eql (second w) (var-ind v))))
  	  (t   (wr-set-inline-loc w v))))
   (t (wfs-error)
  					;(wr-nl w "=" v ";")
      )))

(defun b2-bind-var-b2 (var val &aux tem)
  ;; like b2-bind-var-b2, but does a b2 eval on its second arg.
  (if  (plain-var-p var) (setq tem var ) (setq tem (get-temp t)))
  (valex (list 'var tem) (next-exit) (expr-b2 val))
  (or (eq tem var) (b2-bind-var var tem)))

(defun assign-reqds-and-optionals (ll fdat &aux (atypes 0) var tem type
				       (did-required nil)
				       (lis (ll &required ll)))
  (declare (fixnum atypes)(boolean did-required))
  (let ((fdecl (fdata-function-declaration fdat)))
    (cond (fdecl (setq atypes (argd-atypes(fdecl argd fdecl))))))
  (tagbody
   again
   (sloop for v on lis with vtype
      do (setq var (if did-required (caar v) (car v)))
      (setq type  (aref *promoted-arg-types* (logand (setq atypes (ash atypes -2)) 3)))
      (setq vtype (var-implementation-type var))
      (cond  ((or (eq type vtype)
		  (eql (rep-type type) (rep-type vtype)))
	      (setq tem var))
	     (t
	      (setq tem nil)
	      (cond ((plain-var-p var)
		     (next-cvar var)
		     (push var *alloc-decls*)))))
      (setf (car v) (cons (list 'var (next-cvar tem) type) (car v))))
   (unless did-required
	   (setq did-required  t)
	   (setq lis (ll &optional ll))
	   (go again))
   ))
	    
  ;; if not nil try to allocate all rest args on the c stack.

(defun wr-decl-var (var)
  (cond ((typep var 'var)
	 (if (var-volatile var) (wr "VOL "))
	 (let ((type (var-type var)))
	   (cond ((eq type 'integer)
		  (wr "IDECL("var","var"__space,"var"__alloc);"))
		 (t
		  (wr (rep-type type) " ")
		  (wr-vind (var-ind var))(wr ";")))))
	((and (consp var) (eq (car var) 'var))
	 (wr (if (third var) (rep-type (third var))
	       "object ") var ";"))
	(t (wfs-error))))

(defvar *rest-on-stack* nil)

(defvar *alloc-decls* nil)

(defun write-args-and-open(ll closure-vars &aux reqds varargp va-start labels
			      deflt rest-var (fdat *fdata*) tem
			      (cfun (fdata-ind fdat)))
  (assign-reqds-and-optionals ll fdat)
  (setq reqds (ll &required ll))
  (wr-list (mapcar 'car reqds))
  (cond ((vararg-p fdat)(setq varargp t)
	 (if reqds (wr ","))
	 (wr  "va_alist)
"))
	(t (wr ")
")))
  (sloop for v in reqds do (wr-decl-var (car v)))
  (cond (varargp (wr "va_dcl ")))
  (incf *blocks*)
  (wr "
{	TEMP_VARS" fdat"
	")
  (sloop for v in *alloc-decls* do (wr-decl-var v))
  (setq *alloc-decls* nil)

  ;; we must actually have the pointers in our function point to the closure cells.
  ;; Otherwise if noone keeps a pointer to the closure itself during the call,
  ;; the closure might be gc'd and the variables themselves be unprotected.
  
  (when closure-vars
    (dolist (v closure-vars)
      (allocate-var v 'kw))
    (wr "VOL object CLfun;")
    (wr-nl "struct { ")
    (write-alloc-decls (rep-type t))
    ;; the *& is to make sure this goes into the Cstack.
    (wr "} *CLvars = (void *) (*&CLfun = fcall.fun, CLfun->cl.Env);"))

  (cond (varargp
	 (wr-nl "int Inargs = VFUN_NARGS - "
		(length reqds)";va_list Iap;")
	 (dolist (v (ll &optional ll))
	   (wr-decl-var (car v))
	   (allocate-var (cadddr v) t))
	 (write-alloc-decls (rep-type t))
	 (when (ll &rest ll)
	   (setq rest-var (caar (ll &rest ll)))
	   (allocate-var rest-var t))
	 (write-alloc-decls (rep-type t))

	 ;; Todo : Use a structure to get named args:
	 ;; struct { object V1,V2,...V10;} Vk;
	 ;; Refer Kw.V2
	 (when (ll &key ll)

	   (wr-nl " struct {")
	   
	   (dolist (v (ll &key ll)) (allocate-var (car v) 'kw))
	   (write-alloc-decls (rep-type t))
	   (dolist (v (ll &key ll))  (allocate-var (caddr v) 'kw))
	   (wr-nl"")
	   (write-alloc-decls (rep-type t))	   
	   
	   (wr "} Vk;"))
	 ))

  (cond ((and (setq tem (fdata-tail-label fdat))(label-referred tem))
	 (wr "LA" tem ":;")
	 (push tem *control-stack*)
	 ))
  
  (sloop for v in reqds do
     (b2-bind-var (cdr v) (car v)))

  (when varargp
    (wr-nl "Inargs = VFUN_NARGS - " (length reqds) " ; ")
    (when
	(ll &optional ll)
      (let (*control-stack*)
	;; don't double BDSP.  These will be added below

	(dolist (opt (ll &optional ll))
	  (push (next-label) labels)
	  (wr-nl "if( --Inargs < 0)")
	  (wr-go (car labels))
	  (wr-nl "else {")
	  (unless va-start (setq va-start t) (wr-nl "va_start(Iap);"))
	  (b2-bind-var (car opt) (list 'next-var-arg))
	  (b2-bind-var (cadr opt) (car opt))
	  (wr "}")
	  (when (cadddr opt) (b2-bind-var (cadddr opt) (get-object t)))
	  ))
      (setq labels (nreverse labels))
      (let ((label (next-label)))
	(wr-go label)

             ;;; Bind unspecified optional parameters.

	(dolist-safe (opt (ll &optional ll))
		     (wr-label (car labels))
		     (pop labels)
		     (b2-bind-var-b2 (car opt) (caddr opt))
		     (b2-bind-var (cadr opt) (car opt))
		     (when (cadddr opt) (b2-bind-var (cadddr opt) (get-object nil))))
	(wr-label label)
	))

    ;; bind &rest arg
    (when rest-var
      (let ((dynamic-extent (or *rest-on-stack*
				(eq 'dynamic-extent
				    (var-type rest-var))))
	    (temp (get-temp t)))
	(unless va-start (setq va-start t) (wr-nl "va_start(Iap);"))
	(wr-nl temp "=" )
	(cond ((ll &key ll)
	       (cond (*rest-on-stack*
		      (wr "(ALLOCA_CONS(Inargs),ON_STACK_MAKE_LIST(Inargs));"))
		     (t (wr "make_list(Inargs);"))))
	      (dynamic-extent
	       (wr "(ALLOCA_CONS(Inargs),ON_STACK_LIST_VECTOR(Inargs,Iap));"))
	      (t  (wr "list_vector(Inargs,Iap);")))
	  
	(b2-bind-var rest-var temp)))


    ;; bind keywords

    (when (ll &key ll)
      (unless va-start (setq va-start t) (wr-nl "va_start(Iap);"))
      (setq deflt (mapcar 'cadr (ll &key ll)))
      (let ((vkdefaults nil)
	    (n (length (ll &key ll))))
	(do* ((v deflt (cdr v))
	      (kwds (ll &key ll) (cdr kwds))
	      (kwd (car kwds) (car kwds)))
	    ((null v))
	  (unless (and (dv-p (car v)) 
		       (eq (third (car v)) nil))
		  (setq vkdefaults t))
	  (when (or (not (and (dv-p (car v))   
			      (progn (add-data (car v)))))
		    ;; the supplied-p variable is not there
		    (not (null (third kwd)))
		    )
	    (setf Vkdefaults t)
	    (setf (car v) 0)))
	(if (> (length deflt) 15) (setq vkdefaults t))

	(open-block)
	(let ((*c-output* *h-output*))
	  (when vkdefaults
	    (terpri *h-output*)
	    (wr "static int VK" cfun
		"defaults[" (length deflt) "]={")
	    (do ((v deflt(cdr v))(tem))
		((null v))
	      (cond ((eql (car v) 0)
		     (wr "-1"))
		    ;; must be location
		    ((and
		      (eq (caar v) 'dv)
		      (eq (setq tem (third (car v))) nil))
		     (wr "-2"))
		    ;; fix these two to allow fixnum constants.
		    ((eq (caar v) 'dv)
		     (wr (get-dv-index (car v))))
		    (t (wfs-error)))
	      (if (cdr v) (wr ",")))
	    (wr "};"))
	  (terpri *h-output*)
	  (wr "static struct { short n,allow_other_keys;"
	      "int *defaults;")
	  (wr-nl " int keys[" n "];")
	  (wr "} VK" cfun "key=")
		
	  (wr "{" (length (ll &key ll)) ","
	      (if (ll &allow-other-keys ll) 1 0)
	      ",")
	  (if vkdefaults (wr "VK" cfun "defaults")
	    (wr "(int *)Cstd_key_defaults"))
	  (when (ll &key ll)
	    (wr ",{")
	    (do ((v (reverse (ll &key ll)) (cdr v)))
		((null v))
	      ;; We write this list backwards for convenience
	      ;; in stepping through it in parse_key
	      (wr  (second (add-data (fourth (car v))  )))
	      (if (cdr v) (wr ",")))
	    (wr "}"))
	  (wr "};")
	  )
	(cond (rest-var
	       (wr-nl "parse_key_rest(" rest-var ","))
	      (t (wr-nl "parse_key_new(")))
        
	(wr "Inargs,&Vk,&VK" cfun "key,Iap);")
	)
      ;; end setup keys
      ;; bind the keys
      (dolist (kwd (ll &key ll))
	(cond ((not (eql 0 (pop deflt)))
	       ;; keyword default bound by parse_key.. and no supplied-p
	       (b2-bind (car kwd)))
	      (t
	       (wr-nl "if(" `(key-var ,(car kwd)) "==0){")
	       (b2-bind-var-b2 (car kwd) (cadr kwd))
	       (unless (null (caddr kwd))
		       (b2-bind-var (caddr kwd) (get-object nil)))

	       (wr-nl "}else{")
		(let (*control-stack*)
		  ;; don't do extr BdSP
		  (b2-bind (car kwd))
		  (and (caddr kwd)  (b2-bind-var (caddr kwd) (get-object t))))
	       
	       (wr "}"))))))

  ))

(defun b2-bind (w)
  (cond ((var-special-p w)
	 (b2-bind-var w (var-special-p w)))
	((var-clb w)
	 (or (consp (var-ind w)) (wfs-error))
	 (b2-bind-var w (list 'closure-var-loc w)))
	(t nil)))


(setf (get 'var 'b2) 'b2-var)
(setf (get 'dv 'b2) 'b2-dv)

(defun b2-dv (x  )
  (unless (cadr x) (add-data x))
  (unwind-set x))

(defun b2-var (v)
  ;; what about the strategy of having everything except var's
  ;; eval'd into a temp var.
  (unwind-set v)
  v)

(defun needs-temp (val sofar rest &aux tem)
  ;; VAL is the result of a expr-b2 ? '(1val) and SOFAR is the list of
  ;; results sofar and REST is the list of future arguments to expr-b2.
  ;; We must create a temp variable and assign it to val if any evaluation
  ;; of the things in rest or sofar might alter the value in VAL.
  (and (null sofar) (null rest)
       (return-from needs-temp nil))
  ;;  if sofar is only vars and rest is null
  ;; also would be ok.
  (cond ((consp val)
	 (cond ((eq (car val) 'var) (return-from needs-temp nil))
	       ((eq (car val) 'dv)
		(if (or (numberp (third val))
			(keywordp (third val)))
		    (return-from needs-temp nil)))
	       ((eq (car val) 'call)
		;; symbol-function does not have side-effect, but
		;; we need to preeval both to make sure order is write.
		;; (foo (symbol-function 'bil) (deff 'bil))
		(cond ((not (side-effect-p val))
		       (return-from needs-temp nil))))))
	((typep val 'var)
	 (or (null (var-special-p val)) (wfs-error))
	 (cond ((and  (null (var-clb val)))
		(return-from needs-temp nil)))))
  (setq tem (get-temp  (result-type val)))
  (wr-nl tem "=" val ";")
  tem)

(defun sets-mv-p (loc)
  (cond ((atom loc) nil)
	((eq (car loc) 'inline-loc)
	 (sets-mv-p (third loc)))
	((eq (car loc) 'inline-call)
	 (flag-p (opt  flag (cddr loc)) mv))
	(t nil)))

(defun unwind-avma (ctl-stack)
  (sloop for v on *control-stack*
     do
     (cond ((eq  v ctl-stack)(return nil))
	   ((eq (car v) 'avma-bind-needed)
	    (cond ((member  'inner-avma (cdr v))
		   (wr-nl "avma = InnerAvma;"))
		  (t (wr-nl "avma = FunctionEntryAvma;")
		     (setq *used-function-saved-avma* t)))))))

(defun unwind-stack (ctl-stack)
  ;; Does the unbinding of special variables, popping the CtlStack,
  ;; Cases here must also appear in unwind-stack-p
  (sloop for v on *control-stack*
     until (eq v ctl-stack)
     do
     (case (car v)
       (bdsp
	(wr-nl "UnBdSp;"))
       (ctl-push
	(wr-nl "CtlPop;"))
       (t (cond ((consp (car v))
		 (case (caar v)
		   (progv-bind
		    (wr-nl "IunwindBdSp(" (cadar v) ");"))
		   (unwind-protect
		       (wr-nl "CtlPop;IcallUnwindFun(" (cadar v) ");"))
		   )))))))

(defun unwind-stack-p (ctl-stack)
  (sloop for v on *control-stack*
     until (eq v ctl-stack)
     when
     (or (eq (car v) 'bdsp)
	 (eq (car v) 'ctl-push)
	 (and (consp (car v))
	      (or (eq (caar v) 'progv-bind)
		  (eq (caar v) 'unwind-protect))))
     do (return t)))

(defun restore-function-avma ()
  (wr-nl "avma = EntryAvma;")
  (setq *used-function-saved-avma* t))

(defun unwind-set (val &optional avma-bind)
  (cond ((and (typep val 'var)
	      (var-special-p val)
	      (cdr *value*)
	      (unwind-stack-p (cdr *exit*)))
	 (setq val (replace-inline-by-temp val))))
  (cond ((second *value*)
	 (unwind-stack (cdr *exit*))
  	 (wr-set-inline-loc (second *value*) val))
	((and (consp val) (eq (car val) 'inline-call))
	 (let ((flag (opt flag (cddr val))))
	   (cond ((flag-p flag set)
		  (wr-nl   val ";")))
	 (unwind-stack (cdr *exit*))))
	(t  (unwind-stack (cdr *exit*))))
  
  (cond ((and (eq (car *value*) 'mv)
	      ;;  *MV-N-VALUES-SET* bound to t by values special form
	      (null *MV-N-VALUES-SET*)
	      (not (sets-mv-p val)))
	 ;; detect if val does a set of MV
	 ;; if not then we must
	 (wr "fcall.nvalues = 1;")))

  (case  (car *exit*) 
    (function-return
     (or (eq (second *exit*) (second *value*))
	 (wfs-error))
     ;; must make sure CLfun and so its closure vars are not gc'd.  The
     ;; usage *&CLfun may mean this touch can be empty, since I think ANSI
     (unwind-avma nil)
     (if *closure-vars* (wr "TOUCH_CLfun;"))
     (let ((val (second *value*)))
       (or (eq (car val) 'var) (wfs-error))
       (cond ((eq (third val) 'double-float)
	      (wr-nl "RETURN_DOUBLE_PTR(" val ");"))
	     (t (wr-nl "return " val ";")))))
    (next
     (if avma-bind (unwind-avma (cdr *exit*))))
    (otherwise
     (cond ((typep (car *exit*) 'label)
	    (unwind-avma (cdr *exit*))
	    (wr-go (car *exit*)))
	   (t (wfs-error)))))
  ;; remove the avma-bind which has just been used.
  (if avma-bind (remove-avma-bind avma-bind))
  )
(defun remove-avma-bind (avma-bind)
  (cond ((eq *control-stack* avma-bind)
	 (setq *control-stack* (cdr avma-bind)))
	((eq (cddr *control-stack*) (cdr avma-bind))
	 (setq *control-stack* (cons (car *control-stack*) (cdr avma-bind))))
	(t (wfs-error))))

(setf (get 'progn 'b2) 'b2-progn) 

(defun b2-progn (x)
  (progn-b2 (third x)))

(defun progn-b2 (body)
  (sloop for v on body
     do (if (cdr v) (valex '(ignore) (next-exit) (expr-b2 (car v)))
	  (expr-b2 (car v))))
  (or body (expr-b2 (get-object nil))))

(defun get-temp (type)
  (cond ((eq type 'integer) (setq type 'gen)))
  (let ((tem (list 'var (next-cvar) type)))
    (push (cdr tem) *temp-cvars*)
    tem))

(defun push-vcs ()
  (prog1 (list 'vcs *next-vcs*) (incf *next-vcs*)))

(defun write-alloc-decls(str)
  (when *alloc-decls*
    (wr str)
    (wr-list (nreverse *alloc-decls*))
    (wr ";")
    (setq *alloc-decls* nil)))

(defun allocate-var (v type)
  (cond ((if (null  v) (push `(var ,(next-cvar)) *alloc-decls*))
	 (return-from allocate-var nil))
	((typep v 'var)
	 (cond ((eq type 'kw)
		(let ((ind (next-cvar v)))
		  (push (list 'var ind) *alloc-decls*)
		  (cond ((var-special-p v)
			 (setf (var-special-p v) `(var (kw ,ind))))
			(t (setf (var-ind v) (list 'kw ind))))))
	       ((var-special-p v))
	       (t (next-cvar v)
		  (push (list 'var (var-ind v)) *alloc-decls*))))))

(defun plain-var-p (x)
  (and (typep x 'var)
       (not (var-special-p x))
       (not (var-clb x))))
	    
(setf (get 'let 'b2) 'b2-let)
(setf (get 'let* 'b2) 'b2-let)

(defvar *last* nil)

(defun next-exit ()
  ;; a hack to avoid some consing.
  (cond ((and  *last* (eq (cdr *last*) *control-stack*)) *last*)
	(t (setq *last* (cons 'next *control-stack*)))))

(defun b2-let (x  &aux (*control-stack* *control-stack*)
		  (*blocks* 0) binds body
		  (*used-names* *used-names*)
		  todo )
  (desetq (binds body) (cddr x))  
  (open-block)
  (sloop for (var) in binds
     when (not (var-special-p var))
     do (next-cvar var)
     (wr-decl-var var))
  (sloop for (var val) in binds
     do (cond ((plain-var-p var)
	       (valex (list 'var var) (next-exit) (expr-b2 val)))
	      (t (let ((tem (get-temp t)))
		   (valex (list 'var tem) (next-exit) (expr-b2 val))
		   (if (eql (car x) 'let) (push (cons var tem) todo)
		     (b2-bind-var var tem))))))
  (sloop for (var . val)  in (nreverse todo)
     do (b2-bind-var var val))
  (progn-b2 body)
  (close-blocks)
  nil)

(defun safe-system (x)
  (unless (eql 0 (system x))
	  (error "The command ~s failed" x)))

(defun  compile-and-add-data-file ( o-file &aux command dir)
  (declare (special c-debug))
  (force-output *c-output*)
  (force-output *data-output*)
  (force-output *h-output*)
  (if (eql *c-output* *standard-output*)
      (return-from compile-and-add-data-file nil))
  (setq dir (namestring
	     (make-pathname :directory (or (pathname-directory *c-output*)
					   '(:current)))))
  (setq command (format nil "(cd ~a ; ~a -c -I. -I/u/wfs/new-lisp/newh  ~a ~a ~a )"
			dir
			compiler::*cc*
			(namestring *c-output*)
			(if c-debug "-g" "")
			(if (> *speed* 0) "-O" "")
			))
  
  (cond (o-file
	 (safe-system command)
	 (with-open-file (st (get-output-pathname "o") :direction :output
			     :if-exists :append)
	   (setq o-file (truename st))
	   (sloop for v in-array "      "
	      do (write-char v st))
	   (write-char #\N st))
	 (system (format nil "cat ~a >> ~a"   (namestring *data-output*)
			 (namestring o-file)))))
  )

(defun disassemble1 (name)
  (with-open-file (st "/tmp/wfs1.lsp" :direction :output)
    (print `(in-package ,(package-name *package*)))
    (let ((def (symbol-function name)))
      (cond ((and (consp def) (eq (car def) 'lambda-block))
	     (print `(defun ,name ,@ (cddr def)) st))
	    (t (return-from disassemble1 'cant))))
    (force-output st)
    (compile-file1 (pathname st) :c-file *standard-output*)))

