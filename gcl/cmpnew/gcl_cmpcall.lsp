;;-*-Lisp-*-
;;; CMPCALL  Function call.
;;;
;; Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

;; This file is part of GNU Common Lisp, herein referred to as GCL
;;
;; GCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;; 
;; GCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
;; License for more details.
;; 
;; You should have received a copy of the GNU Library General Public License 
;; along with GCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


(in-package 'compiler)

(defvar *ifuncall* nil)


(defun link-arg-p (x)
  (or (is-global-arg-type x) (not (is-local-arg-type x))))

(defun fast-link-proclaimed-type-p (fname &optional args)
  (and 
   (symbolp fname)
   (not (get fname 'lfun))
   (and (< (length args) 64)
	(or  (and (get fname 'fixed-args) (listp args))
	     (and (link-arg-p (get-return-type fname))
		  (not (member-if-not 'link-arg-p (get-arg-types fname))))))))

(si::putprop 'funcall 'c2funcall-aux 'wholec2)
(si:putprop 'call-lambda 'c2call-lambda 'c2)
(si:putprop 'call-global 'c2call-global 'c2)

;;Like macro-function except it searches the lexical environment,
;;to determine if the macro is shadowed by a function or a macro.
(defun cmp-macro-function (name &aux fd)
  (cond ((setq fd (c1local-fun name))
	 (if (eq (car fd) 'call-local) nil  fd))
	(t (macro-function name))))

(defun c1funob (fun &aux fd sym)
  ;;; NARGS is the number of arguments.  If the number is unknown, (e.g.
  ;;; in case of APPLY), then NARGS should be NIL.
  (cond ((and (consp fun)
	      (symbolp (car fun))
	      (cmp-macro-function (car fun)))
	 (setq fun (cmp-macroexpand fun))))
  (or
   (and
    (consp fun)
    (or (and (eq (car fun) 'quote)
             (not (endp (cdr fun)))
             (endp (cddr fun))
             (or (and (consp (cadr fun))
                      (not (endp (cdadr fun)))
                      (eq (caadr fun) 'lambda)
                      (let ((*vars* nil) (*funs* nil) (*blocks* nil)
                                         (*tags* nil))
                           (let ((lambda-expr (c1lambda-expr (cdadr fun))))
			     (setf (info-type (cadr lambda-expr)) (info-type (cadar (last lambda-expr))))
			     (list 'call-lambda (cadr lambda-expr) lambda-expr))))
                 (and (symbolp (cadr fun))
                      (or (and (setq fd (c1local-fun (cadr fun)))
                               (eq (car fd) 'call-local)
                               fd)
                          (list 'call-global
                                (make-info :type (get-return-type (cadr fun))
                                 :sp-change (if (null (get (cadr fun) 'no-sp-change)) 1 0))
                                (cadr fun)))
                      )))
        (and (eq (car fun) 'function)
             (not (endp (cdr fun)))
             (endp (cddr fun))
             (or (and (consp (cadr fun))
                      (eq (caadr fun) 'lambda)
                      (not (endp (cdadr fun)))
                      (let ((lambda-expr (c1lambda-expr (cdadr fun))))
			(setf (info-type (cadr lambda-expr)) (info-type (cadar (last lambda-expr))))
			(list 'call-lambda (cadr lambda-expr) lambda-expr))
                      )
                 (and (setq sym (si::funid-sym-p (cadr fun)))
                      (or (and (setq fd (c1local-fun sym))
                               (eq (car fd) 'call-local)
                               fd)
                          (list 'call-global
                                (make-info :type (get-return-type sym)
                                 :sp-change (if (null (get sym 'no-sp-change)) 1 0))
                                sym))
                      )
;; 		 (and
;; 		  (is-setf-function (cadr fun))
;; 		  (let ((new (make-setf-function-proxy-symbol (cadadr fun))))
;; 		    (or (and (setq fd (c1local-fun new))
;; 			     (eq (car fd) 'call-local)
;; 			     fd)
;; 			(list 'call-global
;; 			      (make-info :type (get-return-type new)
;; 			       :sp-change (if (null (get new 'no-sp-change)) 1 0))
;; 			      new))))
		 ))))
   (let ((x (c1expr fun)) (info (make-info :type (get-return-type fun) :sp-change 1)))
        (add-info info (cadr x))
        (list 'ordinary info x))
   ))


(defun c2funcall-aux(form &aux  (info (cadr form))
		       (funob (caddr form))
		       (args (cadddr form))
		       (loc (nth 4 form)))
  (c2funcall funob args loc info))

(defvar  *use-sfuncall* t)
(defvar *super-funcall* nil)

(defun c2funcall (funob args &optional loc info)

  ;;; Usually, ARGS holds a list of forms, which are arguments to the
  ;;; function.  If, however, the arguments are already pushed on the stack,
  ;;; ARGS should be set to the symbol ARGS-PUSHED.
  (case (car funob)
    (call-global (c2call-global (caddr funob) args loc t))
    (call-local (c2call-local (cddr funob) args))
    (call-lambda (c2call-lambda (caddr funob) args))
    (ordinary		;;; An ordinary expression.  In this case, if
              		;;; arguments are already pushed on the stack, then
              		;;; LOC cannot be NIL.  Callers of C2FUNCALL must be
              		;;; responsible for maintaining this condition.
      (let ((*vs* *vs*) (form (caddr funob)))
           (declare (object form))
	   (cond ((and (listp args)
		       *use-sfuncall*
		       ;;Determine if only one value at most is required:
		       (or
			(not (or (multiple-values-p) (member *value-to-go* '(top return)) (rassoc *value-to-go* +return-alist+)))
;			(eq *value-to-go* 'trash)
;			(and (consp *value-to-go*)
;			     (eq (car *value-to-go*) 'var))
			(and info (single-type-p (info-type info)))))
		  (c2funcall-sfun form args info)
		  (return-from c2funcall nil)))
           (unless loc
             (unless (listp args) (baboon))
             (cond ((eq (car form) 'LOCATION) (setq loc (caddr form)))
                   ((and (eq (car form) 'VAR)
                         (not (args-info-changed-vars (caaddr form) args)))
                    (setq loc (cons 'VAR (caddr form))))
                   (t
                    (setq loc (list 'vs (vs-push)))
                    (let ((*value-to-go* loc)) (c2expr* (caddr funob))))))
           (push-args args)
           (if *compiler-push-events*
               (wt-nl "super_funcall(" loc ");")
	     (if *super-funcall*
		 (funcall *super-funcall* loc)
               (wt-nl "super_funcall_no_event(" loc ");")))
           (unwind-exit 'fun-val)))
    (otherwise (baboon))
    ))


(defun fcalln-inline (&rest args &aux (f (car args)))
  (wt #\()
  (unless (and (consp f) (eq (car f) 'var))
	  (setq f (list 'cvar (cs-push)))
	  (wt-nl f " = " (car args) ","))
  (wt-nl "({object _ob=" f ",_z;")
  (wt-nl "enum type _tp;extern int Rset;")
  (wt-nl "if (!Rset) _tp=-1; else if ((_tp=type_of(_ob))==t_symbol) {_ob=_ob->s.s_gfdef;_tp=_ob==OBJNULL ? -1 : type_of(_ob);}")
  (wt-nl "switch(_tp) {")
  (wt-nl "case t_sfun: _z=_ob->sfn.sfn_self(")
  (when (cdr args) (wt (cadr args))
	(dolist (loc (cddr args)) (wt #\, loc)))
  (wt #\) #\; "break;")
  (wt-nl "case t_vfun: VFUN_NARGS=" (length (cdr args)) ";")
  (wt "_z=_ob->vfn.vfn_mv ? (_ob->vfn.vfn_self(0")
  (when (cdr args) 
    (dolist (loc (cdr args)) (wt #\, loc)))
  (wt #\) )
  (wt "): _ob->vfn.vfn_self(")
  (when (cdr args) (wt (cadr args))
	(dolist (loc (cddr args)) (wt #\, loc)))
  (wt #\) #\; "break;")
  (wt-nl "case t_gfun: case t_afun: {unsigned _a=_ob->sfn.sfn_argd;if (_tp==t_gfun) {if ((_a&~(1<<10))<15) {_z=_ob->sfn.sfn_self(0")
  (when (cdr args)
    (dolist (loc (cdr args)) (wt #\, loc)))
  (wt #\) #\; "break;}")
  (wt "} else {if (!(_a>>16)) {VFUN_NARGS=" (length (cdr args)) ";_z=_ob->sfn.sfn_self(")
  (when (cdr args) (wt (cadr args))
	(dolist (loc (cddr args)) (wt #\, loc)))
  (wt #\) #\; "break;}}}")
  (wt-nl "default: fcall.argd=" (length (cdr args)) ";fcall.fun=_ob;_z=fcalln1(")
  (when (cdr args) (wt (cadr args))
	(dolist (loc (cddr args)) (wt #\, loc)))
  (wt ");")
  (wt-nl "};")
  (wt-nl "_z;}))"))

;; (defun fcalln-inline (&rest args &aux (f (car args)) length)
;;   (wt #\()
;;   (unless (and (consp f) (eq (car f) 'var))
;; 	  (setq f (list 'cvar (cs-push)))
;; 	  (wt-nl f " = " (car args) ","))
;;    (wt-nl "({object _ob=" f ";enum type _tp=type_of(_ob);if (_tp==t_symbol) {_ob=_ob->s.s_gfdef;_tp=type_of(_ob);}")
;;    (wt-nl "(_tp == t_sfun ?"
;; ;	  "(*(object (*)())((" f ")->sfn.sfn_self)):")
;; 	  "(*((_ob)->sfn.sfn_self)):")
;;    (when (< *space* 3)
;; 	 (setq length t)
;; 	 (wt-nl "(fcall.argd="  (length (cdr args)) ",_tp==t_vfun && !_ob->vfn.vfn_mv) ?");FIXME
;; ;	 (wt-nl  "(*(object (*)())((" f ")->sfn.sfn_self)):"))
;; 	 (wt-nl  "(*((_ob)->sfn.sfn_self)):"))
;;    (wt-nl  "(fcall.fun=(_ob),")
;;    (unless length
;; 	   (wt "fcall.argd="  (length (cdr args)) ","))
;;    (wt   "fcalln));})(")
;;    (when (cdr args) (wt (cadr args))
;; 	 (dolist (loc (cddr args)) (wt #\, loc)))
;;    (wt #\) #\)  ))

(defun c2call-lambda (lambda-expr args &aux (lambda-list (caddr lambda-expr)))
  (declare (object lambda-list))
  (cond ((or (cadr lambda-list)		;;; Has optional?
             (caddr lambda-list)	;;; Has rest?
             (cadddr lambda-list)	;;; Has key?
             (not (listp args))		;;; Args already pushed?
             )
         (when (listp args)		;;; Args already pushed?
           (let ((*vs* *vs*) (base *vs*))
                (push-args-lispcall args)
                (when (need-to-set-vs-pointers lambda-list)
                  (wt-nl "vs_top=(vs_base=base+" base ")+" (- *vs* base) ";")
                  (base-used)
                  )))
         (c2lambda-expr lambda-list (caddr (cddr lambda-expr)))
         )
        (t
	 (let ((l-length (length (car lambda-list)))
	       (a-length (length args)))
	   (or (eql a-length l-length)
	     (cmperr "Calling lambda with ~a args not ~a" a-length
		     l-length)))
	      
	 (c2let (car lambda-list) args (caddr (cddr lambda-expr)))))
  )

(defun check-fname-args (fname args)
  (let ((a (get fname 'arg-types t)))
    (and (eq t a) (get fname 'si::structure-access)
	 (setq a '(t)))
    (cond ((and (listp a)
		(listp args)
		(not (member '* a)))
	   (or (eql (length a) (length args))
		   (cmpwarn "Wrong number of args for ~s: ~a instead of ~a."
			    fname
			    (length args) (length a)))))))

(defun save-avma (fd)
  (when (and (not *restore-avma*)
	     (setq *restore-avma*
		 (or 
		  (member 'integer (car fd))
		  (eq (cadr fd) 'integer)
		  (flag-p (caddr fd) is))))
    (wt-nl "{ save_avma;")
    (inc-inline-blocks)
    (or (consp *inline-blocks*)
	(setq *inline-blocks* (cons  *inline-blocks* 'restore-avma)))))

    
    
(setf (get 'recur 'c1) 'c1recur)
(setf (get 'recur 'c2) 'c2recur)

(defun c1recur (args)
  (let* ((fname (pop args))
	 (funob (c1funob fname))
	 (fname (cmp-eval fname))
	 (rt (get-return-type fname))
	 (rt (unless (and (not (eq *recursion-detected* 'block))
			  (setq *recursion-detected* t)) rt))
	 (info (copy-info (cadr funob)))
	 (ap (pop args))
	 (*fn-val-list* (append args *fn-val-list*))
	 (nargs (c1args args info)))
    (setf (info-type info) rt)
    (list 'recur info funob ap nargs)))

(defun find-var (n x &optional f)
  (cond ((not f) (or (find-var n x t) (baboon)))
	((var-p x) (when (eq n (var-name x)) x))
	((atom x) nil)
	((or (find-var n (car x) f) (find-var n (cdr x) f)))))

(defun ori-p (x)
  (and (consp x) 
       (eq (car x) 'var) 
       (char= #\Z (aref (symbol-name (var-name (caaddr x))) 0))))

(defun c2recur (funob ap args)
  (cond ((and *tail-recursion-info*
	      (or (eq *exit* 'return) (rassoc *exit* +return-alist+))
	      (tail-recursion-possible))
	 (let* ((*value-to-go* 'trash)
		(*exit* (next-label))
		(*unwind-exit* (cons *exit* *unwind-exit*))
		(syms (remove-if 'ori-p args))
		(h (mapcar (lambda (x) (list (find-var (get (var-name (caaddr x)) 'kp) *tail-recursion-info*) nil)) syms)));FIXME
	   (c2psetq h syms)
	   (wt-label *exit*))
	 (unwind-no-exit 'tail-recursion-mark)
	 (wt-nl "goto TTL;")
	 (cmpnote "Tail-recursive call of ~s was replaced by iteration." (car *tail-recursion-info*)));FIXME
	((let ((args (remove-if-not 'ori-p args)))
	   (if ap (c2apply funob args)
	     (c2call-global (caddr funob) args (save-funob funob) (info-type (cadr funob))))))))

(defun kp (x y)
  (setf (get y 'kp) x)
  (cons x y))

(defun ll-sym (x &optional kn)
  (cond ((atom x) x)
	((atom (car x)) (car x))
	(kn (caar x))
	((cadar x))))

(defun ll-alist (l &aux k)
  (mapcan (lambda (x) 
	    (cond ((member x lambda-list-keywords) (setq k x) nil)
		  (`(,@(when (and (consp x) (caddr x)) (list (kp (caddr x) (gensym "P"))))
		     ,(kp (ll-sym x) (gensym (if k (string (aref (symbol-name k) 1)) "G"))))))) l))

(defun name-keys (l &aux k)
  (mapcar (lambda (x)
	    (cond ((member x lambda-list-keywords) (setq k x) x)
		  ((eq k '&key) (cond ((atom x) (list (list (intern (symbol-name x) 'keyword) x)))
				      ((atom (car x)) (list* (list (intern (symbol-name (car x)) 'keyword) (car x)) (cdr x)))
				      (x)))
		  (x))) l))


(defun blla-recur (f ll args last) 
  (let* ((ll (ldiff ll (member '&aux ll)))
	 (ll (name-keys ll))
	 (s (ll-alist ll))
	 (sl (sublis s ll))
	 (v (mapcar 'cdr s))
	 (al (mapcar (lambda (x) (list (gensym "Z") x)) (append args (when last (list last)))))
	 (a (mapcar 'car al))
	 (last (when last (car (last a))))
	 (args (if last (butlast a) a)))
    `(let* ,al
       ,(blla sl args last `((recur ',f ,(when last t) ,@a ,@v))))))

(defun c2call-global (fname args loc return-type &aux fd (*vs* *vs*))
  (if (or (inline-possible fname) (special-form-p fname)) ;FIXME?
    (cond 
     ;;; Open-codable function call.
     ((and (listp args)
           (null loc)
	   (not (special-form-p fname))
           (setq fd (get-inline-info fname args return-type)))
      (let ((*inline-blocks* 0)
	    (*restore-avma*  *restore-avma*)) 
	(save-avma fd)
	(unwind-exit (get-inline-loc fd args) nil fname)
	(close-inline-blocks)))

     ;;; Call to a function whose C language function name is known.
     ((setq fd (or (get fname 'Lfun) (get fname 'Ufun)))
      (check-fname-args fname args)
      (push-args args)
      (wt-nl fd "();")
      (unwind-exit 'fun-val nil fname))

     ( t; *Fast-link-compiling*
      (cond ((and
	      (listp args)
	      (< (length args) 10)
	      (or
		   *ifuncall*
		   (get fname 'ifuncall))
	      	      (progn (if (eq *value-to-go* 'top) (format t "~%Called with top:~a" fname)) t)
		      (not (eq 'top *value-to-go*))
		  (null loc)
		  )
	     (let ((*inline-blocks* 0))
	       (unwind-exit (get-inline-loc  (inline-proc fname args) args)
			    nil fname)
	       (close-inline-blocks)))
	    (t
	     (push-args args)
	     (let ((num (add-fast-link fname nil args t)))
	       (wt-nl "(void) (*Lnk" num  ")(")
	       (if (get fname 'proclaimed-closure) (wt "Lclptr" num))
	       (wt  ");")
	       (unwind-exit 'fun-val nil fname)))))


     ;;; Call to a function defined in the same file.
     ((setq fd (assoc fname *global-funs*))
      (push-args args)
      (wt-nl (c-function-name "L" (cdr fd) fname) "();")
      (unwind-exit 'fun-val nil fname))
     ((eql fname 'funcall-c)
      (wt-funcall-c args))

     ;;; Otherwise.
     (t (c2call-unknown-global fname args loc t)))
    (c2call-unknown-global fname args loc nil))
  )

(defun link-rt (tp vararg)
  (cond ((cmpt tp) (cmp-norm-tp `(,(car tp) ,@(mapcar (lambda (x) (link-rt x vararg)) (cdr tp)))))
	((or (type>= #tboolean tp) (not tp) (and (single-type-p tp) vararg) 
	     (car (member tp `(,@+c-local-var-types+ t *) :test 'type<=))))))



(defun add-fast-link (fname type args &optional no-open-code)
  (declare (ignore type))
  (let (link-info (n (add-symbol fname)) vararg (rt (get-return-type fname)))
    (cond (no-open-code
	   (check-fname-args fname args)
	   (setq link-info (list fname n (when (get fname 'proclaimed-closure) 'proclaimed-closure))))
	  ((let* (link-string tem argtypes (leng (and (listp args) (length args))))
	     (setq argtypes
		   (cond ((setq tem (get fname ' fixed-args))
			  (cond ((si:fixnump tem)
				 (or (equal leng tem)
				     (cmpwarn "~a: Fixed args not fixed!" fname)))
				((setf (get fname 'fixed-args) leng)))
			  (make-list leng :initial-element t))
			 ((get-arg-types fname))))
	     (when (member '* argtypes) (setq argtypes (mapcar (lambda (x) (if (eq x '*) x t)) argtypes)))
	     (when leng
		  (or (= leng  (length argtypes))
		      (MEMBER '* ARGTYPES)
		      (cmpwarn "~a called with ~a args, expected ~a "
			       fname leng
			       (length argtypes))))
	     (unless
	      (caddr (setq link-info (assoc fname *function-links*)))
	      (setq link-string
		    (with-output-to-string
		     (st)
		     (let ((as (with-output-to-string
				 (st)
				 (do ((com)
				      (v (if (single-type-p rt) argtypes (cons #tfixnum argtypes)) (cdr v))
				      (i (if (single-type-p rt) 0 -1) (+ 1 i)))
				     ((null v))
				     (cond ((eq (car v) '*)
					    (setq vararg t)
					    (princ "#*"  st))
					   (t 
					    (if com  (princ "," st) (setq com t))
					    (format st "#~a" i)))))))

		       (format st "(/* ~a */(*LnkLI~d)(~a))" (function-string fname) n as))))


	      ;; If link is bound above, closure is unprintable as is in its own environment
	      ;; enables tracing of inline-type-matches.  CM 20050106
	      (let ((link (when vararg (lambda (&rest l)
					    (wt "(VFUN_NARGS="(length l) ",")
					    (wt-inline-loc link-string l)
					    (wt ")")))))
		(push (list fname (mapcar (lambda (x) (link-rt x vararg)) argtypes) (link-rt rt vararg)
			    (if (single-type-p rt)
				(flags side-effect-p allocates-new-storage)
			      (flags side-effect-p allocates-new-storage sets-vs-top))
			    (or link link-string) 'link-call)
		      *inline-functions*))
	      (setq link-info (list fname (format nil "LI~d" n) (link-rt rt vararg) 
				    (mapcar (lambda (x) (link-rt x vararg)) argtypes)))))))
    (pushnew link-info  *function-links* :test 'equal)
    n))

(defun declaration-type (type) 
  (cond ((equal type "") "void")
	((equal type "long ") "object ")
	(t type)))

;;make a function which will be called hopefully only once,
;;and will establish the link.
(defun wt-function-link (x)
  (let ((name (first x))
	(num (second x))
	(type (third x))
	(args (fourth x))
;	(setf (setf-function-base-symbol (first x)))
	(setf nil)
	)
    (cond
      ((null type)
       (wt-nl1 "static void LnkT"
	       num "(){ call_or_link(" (vv-str num) "," (if setf "1" "0") ",(void **)(void *)&Lnk" num");}"
	       ))
      ((eql type 'proclaimed-closure)
       (wt-nl1 "static void LnkT" num
	       "(ptr) object *ptr;{ call_or_link_closure(" (vv-str num) "," (if setf "1" "0") ",(void **)(void *)&Lnk" num",(void **)(void *)&Lclptr" num");}"))
      (t
       ;;change later to include above.
       ;;(setq type (cdr (assoc type '((t . "object")(:btpr . "bptr")))))
       (wt-nl1 "static " (declaration-type (rep-type type)) " LnkT" num )
       (cond ((or args (not (eq t type)))
	      (let ((vararg (member '* args)))
		(wt "(object first,...){"
		    (declaration-type (rep-type type)) "V1;"
		    "va_list ap;va_start(ap,first);V1=(" (declaration-type (rep-type type)) ")call_"
		    (if vararg "v" "") "proc_new(" (vv-str (add-object name)) "," (if setf "1" "0") "," 
		    (write-to-string (vald (get-return-type name))) ",(void **)(void *)&Lnk" num )
		(or vararg (wt "," (proclaimed-argd args type)))
		(wt   ",first,ap);va_end(ap);return V1;}" )))
	     (t (wt "(){return call_proc0(" (vv-str (add-object name)) "," 
		    (if setf "1" "0") ",(void **)(void *)&Lnk" num ");}" ))))
      (t (error "unknown link type ~a" type)))
    (setq name (function-string name))
    (if (find #\/ name) (setq name (remove #\/ name)))
    (wt " /* " name " */")
    ))
      


;;For funcalling when the argument is guaranteed to be a compiled-function.
;;For (funcall-c he 3 4), he being a compiled function. (not a symbol)!
(defun wt-funcall-c (args)
  (let ((fun (car args))
	(real-args (cdr args))
	loc)
    (cond ((eql (car fun) 'var)
           (let ((fun-loc (cons (car fun) (third fun))))
	     (when *safe-compile*
		   (wt-nl "(type_of(")
		   (wt-loc fun-loc)
		   (wt ")==t_cfun)||FEinvalid_function(")
		   (wt-loc fun-loc)(wt ");"))
	   (push-args real-args)
	   (wt-nl "(")  
	   (wt-loc  fun-loc)))
	  (t
	   (setq loc (list 'cvar (cs-push t t)))
	   (let ((*value-to-go* loc))
	     (wt-nl 
	      "{object V" (second loc) ";")
	     (c2expr* (car args))
	     (push-args (cdr args))
	     (wt "(V" (second loc)))))
    (wt ")->cf.cf_self ();")
    (and loc (wt "}")))
  (unwind-exit 'fun-val))

(defun inline-proc (fname args &aux (n (length args)) res
			  (obj (add-object fname)))
  (format t "~%Using ifuncall: ~a" fname)
  (let ((result
  (case n
	;(0  (list () t (flags ans set) (format nil "ifuncall0(VV[~d])" obj)))
	(1 (list  '(t) t (flags ans set) (format nil "ifuncall1(~a,(#0))" (vv-str obj))
		  'ifuncall))
	(2 (list  '(t t) t  (flags ans set) 
		       (format nil "ifuncall2(~a,(#0),(#1))" (vv-str obj))
		       'ifuncall))
	(t
	 (list (make-list n :initial-element t)
	       t (flags ans set) 
	       (format nil "ifuncall(~a,~a~{,#~a~})"
		       (vv-str obj) n
		       (dotimes (i n(nreverse res))
				(push i res)))
	       'ifuncall)))))
    (push (cons fname result ) *inline-functions*)
    result
    ))


(si:putprop 'simple-call 'wt-simple-call 'wt-loc)

(defun wt-simple-call (cfun base n &optional (vv-index nil))
  (wt "simple_" cfun "(")
  (when vv-index (wt (vv-str vv-index) ","))
  (wt "base+" base "," n ")")
  (base-used))

;;; Functions that use SAVE-FUNOB should reset *vs*.
(defun save-funob (funob)
  (case (car funob)
        ((call-lambda call-quote-lambda call-local))
        (call-global
         (unless (and (inline-possible (caddr funob))
                      (or (get (caddr funob) 'Lfun)
                          (get (caddr funob) 'Ufun)
                          (assoc (caddr funob) *global-funs*)))
           (let ((temp (list 'vs (vs-push))))
                (if *safe-compile*
                    (wt-nl
                     temp
                     "=symbol_function(" (vv-str (add-symbol (caddr funob))) ");")
                    (wt-nl temp
                           "=" (vv-str (add-symbol (caddr funob))) "->s.s_gfdef;"))
                temp)))
        (ordinary (let* ((temp (list 'vs (vs-push)))
                         (*value-to-go* temp))
                        (c2expr* (caddr funob))
                        temp))
        (otherwise (baboon))
        ))

(defun push-args (args)
  (cond ((null args) (wt-nl "vs_base=vs_top;"))
        ((consp args)
         (let ((*vs* *vs*) (base *vs*))
           (dolist** (arg args)
             (let ((*value-to-go* (list 'vs (vs-push))))
               (c2expr* arg)))
           (wt-nl "vs_top=(vs_base=base+" base ")+" (- *vs* base) ";")
           (base-used)))))

(defun push-args-lispcall (args)
  (dolist** (arg args)
    (let ((*value-to-go* (list 'vs (vs-push))))
      (c2expr* arg))))

(defun c2call-unknown-global (fname args loc inline-p)
  (cond (*compiler-push-events*
         ;;; Want to set up the return catcher.
         (unless loc
           (setq loc (list 'vs (vs-push)))
           (wt-nl loc "=symbol_function(" (vv-str (add-symbol fname)) ");"))
         (push-args args)
         (wt-nl "funcall_with_catcher(" (vv-str (add-symbol fname)) "," loc  ");")
         (unwind-exit 'fun-val nil fname))
        (loc
         ;;; The function was already pushed.
         (push-args args)
         (if inline-p
             (if *safe-compile*
                 (wt-nl "funcall_no_event(" loc ");")
                 (wt-nl "CMPfuncall(" loc  ");"))
             (wt-nl "funcall(" loc  ");"))
         (unwind-exit 'fun-val))
        ((args-cause-side-effect args)
         ;;; Evaluation of the arguments may cause side-effect.
         ;;; Arguments are not yet pushed.
         (let ((base *vs*))
              (setq loc (list 'vs (vs-push)))
              (if *safe-compile*
                  (wt-nl loc "=symbol_function(" (vv-str (add-symbol fname)) ");")
                  (wt-nl loc "=(" (vv-str (add-symbol fname)) "->s.s_gfdef);"))
              (push-args-lispcall args)
              (cond ((or (eq *value-to-go* 'return)
			 (rassoc *value-to-go* +return-alist+)
                         (eq *value-to-go* 'top))
                     (wt-nl "lispcall")
                     (when inline-p (wt "_no_event"))
                     (wt "(base+" base "," (length args) ");")
                     (base-used)
                     (unwind-exit 'fun-val))
                    (t (unwind-exit
                        (list 'SIMPLE-CALL
                              (if inline-p "lispcall_no_event" "lispcall")
                              base (length args))))))
         )
        (t
         ;;; Evaluation of the arguments causes no side-effect.
         ;;; Arguments are not yet pushed.
         (let ((base *vs*))
              (push-args-lispcall args)
              (cond ((or (eq *value-to-go* 'return)
			 (rassoc *value-to-go* +return-alist+)
                         (eq *value-to-go* 'top))
                     (wt-nl "symlispcall")
                     (when inline-p (wt "_no_event"))
                     (wt "(" (vv-str (add-symbol fname)) ",base+" base ","
                         (length args) ");")
                     (base-used)
                     (unwind-exit 'fun-val nil fname))
                    (t (unwind-exit
                        (list 'SIMPLE-CALL
                          (if inline-p "symlispcall_no_event" "symlispcall")
                          base (length args) (add-symbol fname))
			nil fname))))
         )))
