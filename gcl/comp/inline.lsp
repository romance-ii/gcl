(in-package "BCOMP")

(eval-when (compile load eval)

(defmacro opt (key opt)
  `(nth ,(position key '(args return flag template )) ,opt))
)
(eval-when (eval compile load)

(defun flags-pos (flag &aux (i 0))
  (declare (fixnum i))
  (dolist  (v *flags*)
    (cond ((member flag v :test 'eq)
	   (return-from flags-pos i)))
    (setq i (+ i 1)))
  (error "unknown opt flag"))


(defvar *flags*
  '((allocates-new-storage ans)		; might invoke gbc
    (side-effect-p set)			; no effect on arguments
    (constantp)				; always returns same result,
					;double eval ok.
    (result-type-from-args rfa)		; if passed args of matching
					;type result is of result type
    (is);; extends the `integer stack'.
    (mv);; in a declaration, function may return MV.
    (safe);; can be used at safety 3
    (notinline)
    (touch-mv);;Invoking this may alter the MV locations.
    (not-1-val) ;; obsoluete
    (proclaim) ; do a proclaim.
    ))
)
(defmacro flags (&rest lis &aux (i 0))
  (dolist (v lis)
    (setq i (logior  i (ash 1 (flags-pos v)))))
  i)


(defun print-flag (n &optional safe)
  (princ "#.(flags")
  (dotimes (i (length *flags*))
	   (if (logbitp i n) (format t " ~(~s~)"(car (last (nth i *flags*))) )))
  (if safe (princ " safe"))
  (princ ")")
  n)
;#+assist
(progn
  ;; Convert old AKCL opts.

(defun print-opt (sym prop &aux tem )
  (unless (get 'compiler::boolean 'comp-type)
	  (setf (get 'compiler::boolean 'comp-type) 'boolean)
	  (setf (get :dynamic-extent 'comp-type) 'dynamic-extent)
	  (setf (get 'compiler::fixnum-float 'comp-type) 'fix-or-sf-or-df))
  (cond ((setq tem (get sym prop))
	 (format t "~%(defopt ~s" sym)
	 (let ((*print-case* :downcase))
	   (dolist (v (reverse tem))
	     (format t "~% (~s ~s " (mapcar 'comp-type (car v))
		     (comp-type (second v)))
	     (print-flag (third v) (eq prop 'compiler::inline-always))
	     (format t " ~s)"
		     (if (stringp (fourth v))
			 (substitute #\$ #\# (fourth v))
		       (fourth v)))))
	 (princ ")"))))

(defun convert-old (&rest props &aux syms)
  (sloop for pack in '(lisp si compiler)
     do
     (sloop for v in-package pack
	when   (sloop for w in props when (get v w) return t)
	do (push v syms)))
  (setq syms (sort syms #'(lambda (x y) (string-lessp (symbol-name x)
						      (symbol-name y)))))
  (sloop for v in syms
     do (sloop for w in props
	   do (print-opt v w))))

;(with-open-file (*standard-output* "/tmp/opts1.lsp" :direction :output)  (convert-old 'compiler::inline-always 'compiler::inline-unsafe))
;(load "/tmp/opts.lsp")
;(with-open-file (*standard-output* "/tmp/opts.lsp" :direction :output)  (convert-old 'bcomp-opt))

)

(defmacro defopt (fname &rest l)
  ;; adds additional opts to the front.
  ;; last added is most significant.
  `(defopt1 ',fname ',l))
(defun defopt1 (fname l)
  (dolist (v l)
    (let ((fl (opt flag v)))
      (cond ((flag-p fl proclaim)
	     (proclaim1 `(ftype (function ,(opt args v) ,(opt return v)) ,fname)))))
    (push v (get fname 'bcomp-opt))))

(defmacro flag-p (n flag)
  `(logbitp ,(flags-pos  flag)  ,n))

(setf (get 'aref 'coerce-arg-types) '(t fixnum fixnum fixnum fixnum))
(setf (get 'si::aset1 'coerce-arg-types) '(t fixnum ))



(defun get-inline-template (fname fdecl arg-types ret-type type-wanted  
				  &aux lis  opt-ret tem
				  (opt-flag 0)
				  (mask (if (> *safety* 0) ;*unsafe*
					    #.(flags safe)
					  #.(flags))))
  (declare (fixnum mask opt-flag))
  (or (symbolp fname) (wfs-error))
  (setq lis (get fname 'bcomp-opt))
  (or lis (return-from get-inline-template nil))
  (cond ((eq type-wanted 'mv)
	 (setq type-wanted t) 
	 (unless
	  (and fdecl (not (flag-p (second fdecl) mv)))
					;function proclaimed to return 1 arg
	  (setq mask (logior mask #. (flags mv)
			      )))))
  (when (setq tem (get fname 'coerce-arg-types))
    (sloop for v on arg-types
       for w in tem
       unless (eq w t) do (setf (car v) (type-and (car v) w))))
  (if (member type-wanted *immediate-types*)
      (setq ret-type type-wanted))
  (sloop for opt in lis
     do
     (setq opt-ret (opt return opt))
     (setq opt-flag (opt flag opt))
     ;; check return return matches
     do
     (when
	 (and
	  (eql mask (logand opt-flag mask))
	  (or (eql opt-ret t)
	      (eql opt-ret '*)
	      (comp-subtypep ret-type opt-ret)))
       (sloop
	  for v on arg-types
	  for w on (opt args opt)
	  do
	  (cond ((eq (car w) '*)
		 (return-from get-inline-template opt))
		((or (comp-subtypep (car v) (car w)) (return nil))))
	  finally
	  (cond ((eq (car w) '*)
		 (return-from get-inline-template opt))
		((and (null v) (null w))
		 (return-from get-inline-template opt))))))
  )

(defun result-from-args (sym argl &aux arg-types)
  (let ((tem (get sym 'bcomp-opt)))
    (when tem
      (sloop for opt in tem
	 when (flag-p (opt flag opt) rfa)
	 do (or arg-types (setq arg-types (mapcar 'result-type argl)))
	 (sloop
	    for v on arg-types
	    for w on (opt args opt)
	    do
	    (cond ((eq (car w) '*)
		   (return-from result-from-args (opt return opt)))
		  ((or (subtypep (car v) (car w)) (return nil))))
	    finally
	    (cond ((eq (car w) '*)
		   (return-from result-from-args (opt return opt))
		   )
		  ((and (null v) (null w))
		   (return-from result-from-args (opt return opt))
		   ))))
      (cond ((get sym 'arithmetic-contagion)
	     (or arg-types (setq arg-types (mapcar 'result-type argl)))
	     (setq tem
		   (or (member 'double-float arg-types )
		       (member 'short-float arg-types)))
	     (if (and tem (sloop for v in arg-types
			     always (or (subtypep v 'fixnum)
					(subtypep v 'double-float)
					(subtypep v 'short-float))))
		 (return-from result-from-args (car tem)))
	     )))))

(dolist (v '(* + - 1- 1+ /)) (setf (get v 'arithmetic-contagion) t))

;; symbol_value  ;; the result depends on WHEN the form is evaluated.
;; list          ;; Different invocations give different results with same
;;                    args, but order of eval is not important.  Double EVAL is.
;; (add x y)     ;; May be multiple eval'd.   WHEN is not important.
;; (aref x i)    ;; May be multiple eval'd.   WHEN is important.
;; (set x 3)     ;; May be multiple eval'd.   Changes something in x.  WHEN important.

;; by 'not side-effect' in the property of an inline, means that it may be
;; multiple eval'd as long as there were no intervening operation which does
;; not have the no-side-effect property, and the results would be same EXCEPT,
;; that we might get a different storage location.

;; by allocates-new-storage we mean that storage is allocated.

;; A function which has no-side-effect and 'not allocates-new-storage'
;; must return eq results if multiple-eval'd with no intervening
;; no-side-effect function.

;; Call a function  foo and goo `unordered' if
;;     (setq a (goo x y))
;;     (setq b (foo x y))
;; Then no common lisp function could tell whether a or b was computed first.
;; The set of 'not side-effect' functions are unordered.

;; This is the case for LIST, CONS, MAKE-ARRAY, APPEND, AREF, ..  

(defun inline-args (args arg-types &aux type-wanted)
  ;; returns (cons arglist referred-vars)
  ;; where REFERRED-VARS is a list of vars which will be eval'd
  ;; during the inline writeout of the forms in ARGLIST.    The
  ;; list of these variables is necessary so that INLINE-CALL
  ;; may produce this list.

  ;; we check thru each ARG, and any one which we find which does not
  ;; meet the following criteria, is pre eval'd as a temp.
  ;; 1: Are them selves inline calls to functions with 'not side-effect-p' flag
  ;; 2: Refer to vars which are setq'd by subsequent inline-calls (since
  ;;     it will be to late to eliminate them then.   Those setq's will actually
  ;;     be written out in the preevalling. )
  ;; 3: lexical or special vars unless the last arg.

  ;; eg (foo x (progn (setq x 3) 7))  would require saving initial value of x in a
  ;; temp, because it is changed by a subsequent arg.
  ;; In (foo  (progn (setq x 3) 7) x (+ x y))  the second x and the (+ x y)
  ;; could stay and be inlined.
  ;; All user functions are presumed to have 'side-effect-p' 
  
  (sloop for v on args  with referred = (cons nil nil)
     do (setf type-wanted
	      (or (equal arg-types '(*)) (pop arg-types)))
     collect (inline-arg (car v)  type-wanted (cdr v) referred) into all
     finally (setf (car referred) all)
     (return referred)))

(defun function-constant-p (x)
;; a function which returns something which will be the SAME for a given
;; set of arguments, where SAME means that there would not be a way in common lisp
;; of distinguishing between two results of an invocation OTHER than using eq.
  (member x '(+ * list cons)))

(defun remaining-args-constant (rest &aux cd)
  (sloop for v in rest
     do
     (cond ((atom v))
	   ((eq (car v) 'var))
	   ((eq (car v) 'call)
	    (setq cd (third v))
	    (unless (and (function-constant-p (call-data-fname cd))
			 (remaining-args-constant (call-data-arglist cd)))
		(return nil)))
	   (t (return nil)))
     finally (return t)))

(defun is-var-changed (var subsequent-args &aux cd)
  (sloop for v in subsequent-args
     do
     (cond ((or (atom v)  (eq (car v) 'var) (eq (car v) 'dv)) nil)
	   ((not (plain-var-p var))
	    (setq cd (third v))
	    (unless (and
		     (eq (car v) 'call)
		     (function-constant-p (call-data-fname cd))
		     (not (is-var-changed var  (call-data-arglist cd))))
		    (return t)))
	   ((typep (second v) 'desk)
	    (return (memq var (desk-changed-vars (second v)))))
	   (t (return t)))))

(defun inline-arg(a type-wanted rest referred  &aux referred-vars result n tem)
  ;; a value which can be written inline as an arg, and
  ;; sets referred-vars
  ;;
  (when (eq type-wanted 'fix-or-sf-or-df)
    (let ((x (car (member (result-type a) '(fixnum short-float double-float)))))
      (and x (setq type-wanted x))))

  (when (eq type-wanted 'double_ptr)
    (let ((v (get-temp 'double-float))
	  (tem (inline-arg a 'double-float rest referred)))
      (wr-set-inline-loc v tem)
      (return-from inline-arg (list 'address v))))
      
  (cond ((atom a)
	 (or (typep a 'var) (wfs-error))
	 (setq result a)
	 (cond ((or (null rest)
		    (remaining-args-constant rest)
		    (and (plain-var-p a)
			 (not (is-var-changed a rest))))
		(push a (cdr referred)))
	       (t (setq result (get-temp (var-implementation-type a)))
		  (wr-nl result "=" a ";")))
	 (or (eq (var-implementation-type a) type-wanted)
	     (setq result (list 'inline-loc type-wanted result))))
	((eq (car a) 'var)		;a temp var
	 (setq result a)
	 (or (eq (third a) type-wanted)
	     (setq result (list 'inline-loc type-wanted result))))
	((eq (car a) 'dv)
	 (setq result (add-data a))
	 (or (eq t type-wanted)
	     (setq result (list 'inline-loc type-wanted result))))
	((eq (car a) 'the)
	 (setq result (inline-arg  (third a) type-wanted rest referred)))
	((eq (car a) 'call)
	 (setq result (inline-call a type-wanted ))
	 (setq tem nil)
	 (setf referred-vars (car result)
	       (car result) 'inline-call)
	 (let ((templ (cddr result))
	       tem1)
	   (setq n  (opt flag templ))
	   (cond ( ;; need a temp:
		  (or (not (or (flag-p n constantp)
			       (and (not (flag-p n set))
				    (not (flag-p n ans)))))
		      (and (typep (setq tem1 (fourth templ)) 'link)
			   (or (argd-flag-p  (link-argd tem1) requires-nargs)
			       (argd-flag-p  (link-argd tem1) requires-fun-passed))))
		  (setq tem (get-temp type-wanted)))
		 (rest
		  (sloop for referred-var  in referred-vars
		     when (is-var-changed referred-var rest)
		     do (setq tem (get-temp (opt return templ)))
		     (loop-finish))))
	   (unless (null tem)
		   (setq referred-vars nil)
		   (wr-set-inline-loc  tem result)
		   (setf result tem))
	   (unless (eq (opt return templ) type-wanted)
		   (setq result 
			 (list 'inline-loc type-wanted result)))
	   (if referred-vars
	       (setf (cdr referred) (nconc referred-vars (cdr referred))))
	   ))
	(t (setq result (get-temp type-wanted))
	   (when *do-pending-open*
	     (setq *do-pending-open* nil)(open-block))
	   (valex (list 'var result) (next-exit) (expr-b2 a))
	   result))
  result
  )

(defun constant-inline-fixnum(x &aux y)
  (or (and (consp x) (eq (car x) 'inline-loc)
	   (eq (second x) 'fixnum)
	   (and (consp (setq y (third x)))
		(eq (car y) 'dv)
		(typep (third y) 'fixnum)))
      (wfs-error))
  (third y))

(setf (get 'boole 'bo2) 'bo2-boole)

(defun bo2-boole(a type-wanted arg-types)
  (when (and (equal arg-types '(fixnum fixnum fixnum))
	     (dv-p (car (call-data-arglist (third a)))))
    (do-inline-call 'boole3 a 'fixnum)))

(defun wr-inline-boole3 (iargs)
  (wr-inline-call1 (cdr iargs)
		   (ecase (constant-inline-fixnum (car iargs))
		     (#.boole-ior "(($0) | ($1))" )
		     (#.boole-xor "(($0) ^ ($1))" )
		     (#.boole-and "(($0) & ($1))" )
		     (#.boole-eqv "(~(($0) ^ ($1)))" )
		     (#.boole-nand "(~(($0) & ($1)))" )
		     (#.boole-nor "(~(($0) | ($1)))" )
		     (#.boole-andc1 "((~($0)) & ($1))" )
		     (#.boole-andc2 "(($0) & (~($1)))" )
		     (#.boole-orc1 "((~($0)) | ($1))" )
		     (#.boole-orc2 "(($0) | (~($1)))" )
		     (#.boole-clr "(0)" )
		     (#.boole-set "(-1)" )
		     (#.boole-1 "(($0))" )
		     (#.boole-2 "(($1))" )
		     (#.boole-c1 "(~($0))" )
		     (#.boole-c2 "(~($1))" ))))


(defun do-inline-call (fname a type-wanted)
  (inline-call (list 'call (second a) (make-call-data
				        fname
					(call-data-arglist (third a)) nil nil))
	       type-wanted))

(defun coerce-to-binary (sym dsk argl &aux first)
  (setq first
	`(call ,dsk ,(make-call-data sym (list (car argl)(second argl)) nil nil)))
  (cond ((cddr argl)
	 (coerce-to-binary sym dsk (cons first (cddr argl))))
	(t first)))

(defun bo2-coerce-to-binary (a type-wanted arg-types) arg-types
  (let* ((form-type (desk-result-type (second a)))
	 (call-dat (third a))
	 (arglist (call-data-arglist (third a))))
    (cond ((and (cddr arglist)
		(or (not (eq type-wanted t))
		    (not (eq form-type t))))
	   (if (eq type-wanted 'mv) (setq type-wanted t))
	   (inline-call (coerce-to-binary (call-data-fname call-dat)
					  (make-desk (type-and type-wanted
							       form-type))
					  arglist)
			type-wanted)))))


(dolist (v '(+ * - /)) (setf (get v 'bo2) 'bo2-coerce-to-binary))

(setf (get 'aref 'bo2) 'bo2-aref)

(defun bo2-aref (a type-wanted arg-types &aux (cd (third a)) argl type size) arg-types
  (setq argl (call-data-arglist cd))
  (setq type (result-type (car argl)))
  (cond ((and
	  (= *safety* 0)
	  (eql 3 (length argl))
	  (consp type)
	  (eq (car type) 'array)
	  (eq (second type) t)
	  (consp (setq size (third type)))
	  (typep (second size) 'fixnum))
	 (if (eq type-wanted 'mv) (setq type-wanted t))
	 (inline-call (list 'call (second a)
			    (make-call-data
			     'aref-2d
			     (append argl
				     (list (get-object (second size))))
			     nil nil))
		      type-wanted))))
			

(defun inline-call (a type-wanted  &aux call-dat in-args template tem
		      (*exit* (next-exit)))
  ;;  The arg A is a (call  ..) as returned from b1-walk.
  ;;  If TYPE-WANTED is NIL then we may need Mult Values.  
  ;;  This function returns a list:
  ;;  (referred-vars inlined-args result-type  flags fname-or-string)
  ;;  The REFERRED-VARS and RESULT-TYPE and FLAGS are necessary for
  ;;  recursive calls, while the FNAME-OR-STRING and INLINED-ARGS
  ;;  are  used to actually write out the result.
  (setq call-dat (third a))
  
  (let* ((fname (call-data-fname call-dat))
	 fdecl   check
	 (arglist (call-data-arglist call-dat))
	 (arg-types (mapcar 'result-type arglist))
	 (form-type (desk-result-type (second a))))


    (cond ((and (setq tem (get fname 'bo2))
		(setq tem (funcall tem a type-wanted arg-types)))
	   (return-from inline-call tem)))
  

			
    (cond ((call-data-local-fun call-dat)
	   (setq check t)
	   (setq template (get-template-fdata
			   (second (second 
				    (call-data-local-fun call-dat))))))
	  ((setq template
		 (progn
		   (setq fdecl (function-declaration fname))
		   (let ((ret (if fdecl (ret-from-argd (fdecl argd fdecl)))))
		     (cond (ret
			    (cond ((eq ret 'double_ptr)
				   (setq form-type (type-and 'double-float form-type)))
				  ((or (eq ret t)(eq ret '*)))
				  (t (setq form-type (type-and ret form-type)))))))
		   (get-inline-template fname fdecl
				      arg-types form-type type-wanted))))
	  ((setq template (add-link-template fname fdecl
						     arg-types type-wanted))))
    ;; now we have template.
    (when check
      (sloop for v in (car template) with al = arglist
	 do 
	 (cond ((eq v '*) (return t))
	       ((null al) (comp-error "Too few args passed to ~a " fname))
	       (t (pop al)))))
    (cond ((flag-p  (opt flag template)is )
	   (sloop for v on *control-stack*
	      when (or (eq (car v) 'avma-bind)
		       (eq (car v) 'avma-bind-needed))
	      do (setf (car v) 'avma-bind-needed)
	      (return nil)
	      finally (wfs-error))))

    (setq in-args (inline-args arglist (opt args template)))
    (list* (cdr in-args)		; the referred-vars
	   (car in-args)		; the arglist
	   template)))

(defun add-link-template (fname fdecl arg-types  type-wanted &aux tem link ans
				(leng (length arg-types)))
  (declare (fixnum leng))
  (setq tem (assoc fname *file-inline-templates*))
  (when tem
    (setq link (fourth tem))
    (cond ((typep link 'link)
	   (cond ((< leng (argd-minargs (link-argd link)))
		  (setf  (argd-minargs (link-argd link)) leng))
		 ((> leng (argd-maxargs (link-argd link)))
		  (setf  (argd-maxargs (link-argd link)) leng))
		 (t nil))
	   (if (eq type-wanted 'mv) (setf (argd-flag-p (link-argd link) sets-mv)  t))))
    (return-from add-link-template (cdr tem)))
  (let ((ret t)
	(argl '(*))
	(flags #.(flags set ans mv))
	(argd 0)
	link)
    (declare (fixnum argd))
    (cond (fdecl
	   (setq argd (car fdecl))
	   (setq argl (argl-from-argd argd))
	   (setq ret (ret-from-argd argd))
	   (setq flags (second fdecl)))
	  (t (setf (argd-minargs argd) (length arg-types))
	     (setf (argd-maxargs argd) (length arg-types))
	     (setf (argd-flag-p argd requires-nargs) t)
	     (setf (argd-flag-p argd sets-mv) t)))
    (setq link (make-link fname fdecl))
    (setf (link-argd link) argd)
    ;; we need the data object now, so make sure it gets in the vector
    ;; in time
    (add-data (get-object fname))
    (push (setq ans (list fname argl ret flags link))  *file-inline-templates*)
    (cdr ans)))

(defun get-template-fdata (fd &aux  fstring tem)
  ;; make a template for a local fdata
  (or (typep fd 'fdata) (wfs-error))
  (cond ((setq tem (fdata-local-template fd))
	 (return-from get-template-fdata tem)))
  (let* ((vararg (vararg-p fd))
	 (fdecl (fdata-function-declaration fd))
	 (ll (fdata-ll fd)))
    (unless fdecl
	    (setq fdecl
		  (increment-function-decl
		   `(function
		     , (nconc
			(sloop for v in (ll &required ll) collect (value-type v))
			(if (ll &optional ll)
			    (cons '&optional
				  (sloop for v in (ll &optional ll) collect
				     (value-type (car v)))))
			(if (or (ll &rest ll) (ll &key ll)) '(*) nil))
		       ;; todo arrange that pickup ret type
		       ;; from fdata some day10q
		     *)
		   nil)))

    (setq fstring (format nil "L~a($@0)"  (fdata-ind fd)))
    (if vararg (setq fstring (format nil "(VFUN_NARGS = $#,~a)" fstring)))
;    (wr-h (rep-type t) " L" (fdata-ind fd) "();")
    ;; it is only fitting that a closure's template `format string' should in
    ;; fact be a closure.   Takes a closure to know a closure.
    (cond ((fdata-closure-vars fd)
	   (let ((fdc fd)
		 (string fstring))
	     (setf fstring #'(lambda (iargs)
			       (wr "(fcall.fun="
				   (or (fdata-closure-self fdc)
				       (fdata-to-obj fdc)) ",")
				   (wr-inline-call1 iargs string)
				   (wr ")"))))))
    (let ((ans 
	   (list (argl-from-argd (fdecl argd fdecl)) (ret-from-argd (fdecl argd fdecl))
		 (fdecl flag fdecl) fstring)))
      (setf (fdata-local-template fd) ans)
      ans)))



(defun replace-inline-by-temp (x)
  (let* ((type (result-type x))
	 (tem (get-temp type)))
    (wr-set-inline-loc tem x)
    tem))




	 

      
