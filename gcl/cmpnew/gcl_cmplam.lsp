;;; CMPLAM  Lambda expression.
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

;;; During Pass1, a lambda-list
;;;
;;; (	{ var }*
;;; 	[ &optional { var | ( var [ initform [ svar ] ] ) }* ]
;;; 	[ &rest var ]
;;; 	[ &key { var | ( { var | ( kwd var ) } [initform [ svar ]])}*
;;; 		[&allow-other-keys]]
;;; 	[ &aux {var | (var [initform])}*]
;;; )
;;;
;;; is transformed into
;;;
;;; (	( { var }* )				; required
;;; 	( { (var initform svar) }* )		; optional
;;; 	{ var | nil }				; rest
;;; 	key-flag
;;; 	( { ( kwd-vv-index var initform svar) }* )	; key
;;; 	allow-other-keys-flag
;;; )
;;;
;;; where
;;; 	svar:	  nil		; means svar is not supplied
;;;	        | var
;;;
;;; &aux parameters will be embedded into LET*.
;;;
;;; c1lambda-expr receives
;;;	( lambda-list { doc | decl }* . body )
;;; and returns
;;;	( lambda info-object lambda-list' doc body' )
;;;
;;; Doc is NIL if no doc string is supplied.
;;; Body' is body possibly surrounded by a LET* (if &aux parameters are
;;; supplied) and an implicit block.

(defmacro ck-spec (condition)
  `(unless ,condition
           (cmperr "The parameter specification ~s is illegal." spec)))

(defmacro ck-vl (condition)
  `(unless ,condition
           (cmperr "The lambda list ~s is illegal." vl)))


;;;the following code implements downward closures.
;;;These are like closures, except they are guaranteed not
;;;to survive past the exit of the function in which they
;;;are born.


(defmacro downward-function (x)
  `(function ,x))

(setf (get 'downward-function  'c1special)
      'c1downward-function)

(defun c1downward-function (x)
  (let* ((tem (c1expr (list 'function (car x))))
	 (info (cadr tem)))
    ;; for the moment we only allow downward closures with no args
    (cond ((and (consp x) (consp (car x))
		(eq (caar x) 'lambda)
		(null (second (car x))))
	   (dolist (var (info-referred-vars info))
		   (cond ((and (eq (var-kind var) 'lexical)
			       (var-ref-ccb var) t)
			  (setf (var-kind var) 'down)))
		   )
	   (setf (car tem) 'downward-function)
	   tem)
	  (t tem))))

(si::putprop   'downward-function  'c2downward-function  'c2)
(si:putprop 'make-dclosure 'wt-make-dclosure 'wt-loc)

(defun wt-make-dclosure (cfun clink)clink  ;;Dbase=base0
  (wt-nl "(DownClose"cfun".t=t_dclosure,DownClose" cfun ".dc_self=LC" cfun","
     "DownClose" cfun ".dc_env=base0,(object)&DownClose" cfun ")"))

(defun wfs-error ()
  (error "This error is not supposed to occur: Contact Schelter ~
    ~%wfs@math.utexas.edu"))

(defun wt-downward-closure-macro (cfun)
  (cond (*downward-closures*
	  (wt-h "#define DCnames" cfun " ")
	  (setq *downward-closures* (delete 'dcnames *downward-closures*))
	  (cond (*downward-closures*
		  (wt-h1 "struct dclosure ")
		  (do ((v *downward-closures* (cdr v)))
		      ((null v))
		      (wt-h1 "DownClose")
		      (wt-h1 (car v))
		      (if (cdr v) (wt-h1 ",")))
		  (wt-h1 ";"))))))

(defun c2downward-function (funob)
  (let ((fun (make-fun :name 'closure :cfun (next-cfun))))
              (push (list 'dclosure (if (null *clink*) nil (cons 0 0))
                          *ccb-vs* fun funob)
                    *local-funs*)
              (push fun *closures*)
	      (push (fun-cfun fun) *downward-closures*)
              (unwind-exit (list 'make-dclosure (fun-cfun fun) *clink*))))



(defun c1lambda-expr (lambda-expr
                      &optional (block-name nil block-it)
                      &aux (requireds nil) (optionals nil) (rest nil)
                           (keywords nil) (key-flag nil)
			   lambda-list
                           (allow-other-keys nil) (aux-vars nil)
                           (aux-inits nil) doc vl spec body ss is ts
                           other-decls vnames
                           (*vars* *vars*)
                           (info (make-info))
                           (aux-info nil)
			   (setjmps *setjmps*)
                      )
  (cmpck (endp lambda-expr)
         "The lambda expression ~s is illegal." (cons 'lambda lambda-expr))

  (multiple-value-setq (body ss ts is other-decls doc)
                       (c1body (cdr lambda-expr) t))
  
  (when block-it (setq body (list (cons 'block (cons block-name body)))))

  (c1add-globals ss)

  (setq vl (car lambda-expr))
  (block parse
   (tagbody
    Lreq
      (when (null vl) (return-from parse))
      (ck-vl (consp vl))
      (case (setq spec (pop vl))
            (&optional (go Lopt))
            (&rest (go Lrest))
            (&key (go Lkey))
            (&aux (go Laux)))
      (let ((v (c1make-var spec ss is ts)))
           (push spec vnames)
           (push v *vars*)
           (push v requireds))
      (go Lreq)

    Lopt
      (when (null vl) (return-from parse))
      (ck-vl (consp vl))
      (case (setq spec (pop vl))
            (&rest (go Lrest))
            (&key (go Lkey))
            (&aux (go Laux)))
      (cond ((not (consp spec))
             (let ((v (c1make-var spec ss is ts)))
                  (push spec vnames)
                  (push (list v (default-init (var-type v)) nil) optionals)
                  (push v *vars*)))
            ((not (consp (cdr spec)))
             (ck-spec (null (cdr spec)))
             (let ((v (c1make-var (car spec) ss is ts)))
                  (push (car spec) vnames)
                  (push (list v (default-init (var-type v)) nil) optionals)
                  (push v *vars*)))
            ((not (consp (cddr spec)))
             (ck-spec (null (cddr spec)))
             (let ((init (c1expr* (cadr spec) info))
                   (v (c1make-var (car spec) ss is ts)))
                  (push (car spec) vnames)
                  (push
                   (list v (and-form-type (var-type v) init (cadr spec)) nil)
                   optionals)
                  (push v *vars*)))
            (t
             (ck-spec (null (cdddr spec)))
             (let ((init (c1expr* (cadr spec) info))
                   (v (c1make-var (car spec) ss is ts))
                   (sv (c1make-var (caddr spec) ss is ts))
                   )
                  (push (car spec) vnames)
                  (push (caddr spec) vnames)
                  (push
                   (list v (and-form-type (var-type v) init (cadr spec)) sv)
                   optionals)
                  (push v *vars*)
                  (push sv *vars*))))
      (go Lopt)

    Lrest
      (ck-vl (consp vl))
      (push (car vl) vnames)
      (setq rest (c1make-var (pop vl) ss is ts))
      (push rest *vars*)
      (when (null vl) (return-from parse))
      (ck-vl (consp vl))
      (case (setq spec (pop vl))
            (&key (go Lkey))
            (&aux (go Laux)))
      (cmperr "Either &key or &aux is missing before ~s." spec)

    Lkey
      (setq key-flag t)
      (when (null vl) (return-from parse))
      (ck-vl (consp vl))
      (case (setq spec (pop vl))
            (&aux (go Laux))
            (&allow-other-keys (setq allow-other-keys t)
                               (when (null vl) (return-from parse))
                               (ck-vl (consp vl))
                               (case (setq spec (pop vl))
                                     (&aux (go Laux)))
                               (cmperr "&aux is missing before ~s." spec)))
      (when (not (consp spec)) (setq spec (list spec)))
      (cond ((consp (car spec))
             (ck-spec (and (keywordp (caar spec))
                           (consp (cdar spec))
                           (null (cddar spec))))
             (setq spec (cons (caar spec) (cons (cadar spec) (cdr spec)))))
            (t
             (ck-spec (symbolp (car spec)))
             (setq spec (cons (intern (string (car spec)) 'keyword)
                              (cons (car spec) (cdr spec))))))
      (cond ((not (consp (cddr spec)))
             (ck-spec (null (cddr spec)))
             (let ((v (c1make-var (cadr spec) ss is ts)))
                  (push (cadr spec) vnames)
                  (push
                   (list (car spec) v (default-init (var-type v))
                         (make-var :kind 'DUMMY))
                   keywords)
                  (push v *vars*)))
            ((not (consp (cdddr spec)))
             (ck-spec (null (cdddr spec)))
             (let ((init (c1expr* (caddr spec) info))
                   (v (c1make-var (cadr spec) ss is ts)))
                  (push (cadr spec) vnames)
                  (push (list (car spec) v
                              (and-form-type (var-type v) init (caddr spec))
                              (make-var :kind 'DUMMY))
                        keywords)
                  (push v *vars*)))
            (t
             (ck-spec (null (cddddr spec)))
             (let ((init (c1expr* (caddr spec) info))
                   (v (c1make-var (cadr spec) ss is ts))
                   (sv (c1make-var (cadddr spec) ss is ts)))
                  (push (cadr spec) vnames)
                  (push (cadddr spec) vnames)
                  (push (list (car spec) v
                              (and-form-type (var-type v) init (caddr spec))
                              sv)
                        keywords)
                  (push v *vars*)
                  (push sv *vars*))))
      (go Lkey)

    Laux
      (setq aux-info (make-info))
    Laux1
      (when (null vl) (add-info info aux-info) (return-from parse))
      (ck-vl (consp vl))
      (setq spec (pop vl))
      (cond ((consp spec)
             (cond ((not (consp (cdr spec)))
                    (ck-spec (null (cdr spec)))
                    (let ((v (c1make-var (car spec) ss is ts)))
                         (push (car spec) vnames)
                         (push (default-init (var-type v)) aux-inits)
                         (push v aux-vars)
                         (push v *vars*)))
                   (t
                    (ck-spec (null (cddr spec)))
                    (let ((init (c1expr* (cadr spec) aux-info))
                          (v (c1make-var (car spec) ss is ts)))
                         (push (car spec) vnames)
                         (push (and-form-type (var-type v) init (cadr spec))
                               aux-inits)
                         (push v aux-vars)
                         (push v *vars*)))))
            (t
             (let ((v (c1make-var spec ss is ts)))
                  (push spec vnames)
                  (push (default-init (var-type v)) aux-inits)
                  (push v aux-vars)
                  (push v *vars*))))
      (go Laux1)
      )
   )
  (setq requireds (reverse requireds)
        optionals (reverse optionals)
        keywords (reverse keywords)
        aux-vars (reverse aux-vars)
        aux-inits (reverse aux-inits))

  (check-vdecl vnames ts is)

  (setq body (c1decl-body other-decls body))

  (add-info info (cadr body))

  (dolist** (var requireds) (check-vref var))
  (dolist** (opt optionals)
            (check-vref (car opt))
            (when (caddr opt) (check-vref (caddr opt))))
  (when rest (check-vref rest))
  (dolist** (kwd keywords)
            (check-vref (cadr kwd))
            (when (cadddr kwd) (check-vref (cadddr kwd))))
  (dolist** (var aux-vars) (check-vref var))
  
  (when aux-vars
        (add-info aux-info (cadr body))
        (setq body (list 'let* aux-info aux-vars aux-inits body))
	(or (eql setjmps *setjmps*) (setf (info-volatile aux-info) t)))
  
  (setq body (fix-down-args requireds body block-name))
  (setq lambda-list
	(list requireds optionals rest key-flag keywords allow-other-keys))
  (and *record-call-info* (record-arg-info lambda-list))
  (list 'lambda
        info
	lambda-list
        doc
        body)
  )


;;this makes a let for REQUIREDS which are used in a downward 
;;lexical closure

(defun fix-down-args(requireds body name &aux auxv auxinit info v)
  (let ((types	 (get  name 'proclaimed-arg-types))
	(fixed (get name 'fixed-args)))
    (do ((vv requireds (cdr vv))
	 (typ types (cdr typ)))
	((null vv))
	(setq v (car vv))
	(cond ((not (or fixed (eq (car typ) t)))
	       (return-from fix-down-args body))
	      ((and (eq (var-kind v) 'DOWN) (eq (var-loc v) 'object))
	       ;;a downward variable could not have been special
	       ;;and must be type t.  We create a new variable
	       ;;for the arg, and bind the old one to it.
	       (let* ((new (c1make-var (var-name v) nil nil nil))
		      (init
		       (list 'var 
			     (or info (setq info (make-info)))
			     (list new nil))))
		 (push  v auxv)
		 (setf (car vv) new)
		 (push new (info-referred-vars info))
		 (push init auxinit)))))
    (if auxv (list 'let* info auxv auxinit body)
      body)))

(defun the-parameter (name)
  (cmpck (not (symbolp name)) "The parameter ~s is not a symbol." name)
  (cmpck (constantp name) "The constant ~s is being bound." name)
  name
  )

(defvar *rest-on-stack* nil)  ;; non nil means put rest arg on C stack.

(defun c2lambda-expr (lambda-list body &optional (fname nil s-fname))
  (let ((*tail-recursion-info*			;;; Tail recursion possible if
         (if (and *do-tail-recursion*
                  s-fname			;;; named function,
                  (dolist* (var (car lambda-list) t)
                    (when (var-ref-ccb var) (return nil)))
				;;; no required is closed in a closure,
                  (null (cadr lambda-list))	;;; no optionals,
                  (null (caddr lambda-list))	;;; no rest parameter, and
                  (not (cadddr lambda-list)))	;;; no keywords.
             (cons fname (car lambda-list))
             nil)))
    (let ((*rest-on-stack*
	    (cond ((and (caddr lambda-list)
			(eq (var-type (caddr lambda-list)) :dynamic-extent))
		   t)
		  (t *rest-on-stack*))))
       (if (cadddr lambda-list) ;;; key-flag
           (c2lambda-expr-with-key lambda-list body)
           (c2lambda-expr-without-key lambda-list body)))
  ))

(defun c2lambda-expr-without-key
       (lambda-list body
        &aux (requireds (car lambda-list))
             (optionals (cadr lambda-list))
             (rest (caddr lambda-list))
             (labels nil)
             (*unwind-exit* *unwind-exit*)
             (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*)
             (block-p nil)
        )
  (declare (object requireds optionals rest))
  ;;; Allocate immediate-type parameters.

  (flet ((do-decl (var)
           (let ((kind (c2var-kind var)))
                (declare (object kind))
                (when kind
                      (let ((cvar (next-cvar)))
                           (setf (var-kind var) kind)
                           (setf (var-loc var) cvar)
                           (wt-nl)
                           (unless block-p (wt "{") (setq block-p t))
			   (wt-var-decl var)
			   )))))

        (dolist** (v requireds) (do-decl v))
        (dolist** (opt optionals)
                  (do-decl (car opt))
                  (when (caddr opt) (do-decl (caddr opt))))
        (when rest (do-decl rest))
        )
  ;;; check arguments
  (when (or *safe-compile* *compiler-check-args*)
    (cond ((or rest optionals)
           (when requireds
             (wt-nl "if(vs_top-vs_base<" (length requireds)
                    ") too_few_arguments();"))
           (unless rest
             (wt-nl "if(vs_top-vs_base>"
                    (+ (length requireds) (length optionals))
                    ") too_many_arguments();")))
          (t (wt-nl "check_arg(" (length requireds) ");"))))

  ;;; Allocate the parameters.
  (dolist** (var requireds) (setf (var-ref var) (vs-push)))
  (dolist** (opt optionals) (setf (var-ref (car opt)) (vs-push)))
  (when rest (setf (var-ref rest) (vs-push)))
  (dolist** (opt optionals)
            (when (caddr opt) (setf (var-ref (caddr opt)) (vs-push))))

  ;;; Bind required parameters.
  (dolist** (var requireds) (c2bind var))

  ;;; Bind optional parameters as long as there remain arguments.
  ;;; The compile-time binding is discarded because they are bound again.
  (when (and (or optionals rest) (not (null requireds)))
        (wt-nl "vs_base=vs_base+" (length requireds) ";"))
  (cond (optionals
         (let ((*clink* *clink*)
               (*unwind-exit* *unwind-exit*)
               (*ccb-vs* *ccb-vs*))
           (when rest
             (wt-nl "vs_top[0]=Cnil;")
             (wt-nl "{object *p=vs_top, *q=vs_base+" (length optionals) ";")
             (wt-nl " for(;p>q;p--)p[-1]=MMcons(p[-1],p[0]);}"))
           (do ((opts optionals (cdr opts)))
               ((endp opts))
               (declare (object opts))
             (push (next-label) labels)
             (wt-nl "if(vs_base>=vs_top){")
             (reset-top)
             (wt-go (car labels)) (wt "}")
             (c2bind (caar opts))
             (when (caddar opts) (c2bind-loc (caddar opts) t))
             (when  (cdr opts)  (wt-nl "vs_base++;"))
             )
           (when rest (c2bind rest))
           )

         (wt-nl) (reset-top)

         (let ((label (next-label)))
           (wt-nl) (wt-go label)

           (setq labels (reverse labels))

           ;;; Bind unspecified optional parameters.
           (dolist** (opt optionals)
             (wt-label (car labels))
             (pop labels)
             (c2bind-init (car opt) (cadr opt))
             (when (caddr opt) (c2bind-loc (caddr opt) nil)))

             (when rest (c2bind-loc rest nil))

             (wt-label label)))
        (rest
         (wt-nl "vs_top[0]=Cnil;")
         (wt-nl "{object *p=vs_top;")
         (wt-nl " for(;p>vs_base;p--)p[-1]="
		(if *rest-on-stack* "ON_STACK_CONS" "MMcons")
		"(p[-1],p[0]);}")
         (c2bind rest)
         (wt-nl)
         (reset-top))
        (t
         (wt-nl)
         (reset-top)))

  (when *tail-recursion-info*
        (push 'tail-recursion-mark *unwind-exit*) (wt-nl "goto TTL;")(wt-nl1 "TTL:;"))

  ;;; Now the parameters are ready!
  (c2expr body)

  (when block-p (wt-nl "}"))
  )

(defun c2lambda-expr-with-key
       (lambda-list body
        &aux (requireds (nth 0 lambda-list))
             (optionals (nth 1 lambda-list))
             (rest (nth 2 lambda-list))
             (keywords (nth 4 lambda-list))
             (allow-other-keys (nth 5 lambda-list))
             (labels nil)
             (*unwind-exit* *unwind-exit*)
             (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*)
             (block-p nil)
             )
  (declare
   (object requireds optionals rest keywords allow-other-keys))
  ;;; Allocate immediate-type parameters.
  (flet ((do-decl (var)
           (let ((kind (c2var-kind var)))
                (declare (object kind))
                (when kind
                      (let ((cvar (next-cvar)))
                           (setf (var-kind var) kind)
                           (setf (var-loc var) cvar)
                           (wt-nl)
                           (unless block-p (wt "{") (setq block-p t))
			   (wt-var-decl var)
			   )))))

        (dolist** (v requireds) (do-decl v))
        (dolist** (opt optionals)
                  (do-decl (car opt))
                  (when (caddr opt) (do-decl (caddr opt))))
        (when rest (do-decl rest))
        (dolist** (kwd keywords)
                  (do-decl (cadr kwd))
                  (when (cadddr kwd) (do-decl (cadddr kwd))))
        )
  ;;; Check arguments.
  (when (and (or *safe-compile* *compiler-check-args*) requireds)
        (when requireds
              (wt-nl "if(vs_top-vs_base<" (length requireds)
                     ") too_few_arguments();")))

  ;;; Allocate the parameters.
  (dolist** (var requireds) (setf (var-ref var) (vs-push)))
  (dolist** (opt optionals)
    (setf (var-ref (car opt)) (vs-push)))
  (when rest (setf (var-ref rest) (vs-push)))
  (dolist** (kwd keywords)
    (setf (var-ref (cadr kwd)) (vs-push)))
  (dolist** (kwd keywords)
    (setf (var-ref (cadddr kwd)) (vs-push)))
  (dolist** (opt optionals)
    (when (caddr opt) (setf (var-ref (caddr opt)) (vs-push))))

  ;;; Assign rest and keyword parameters first.
  ;;; parse_key does not change vs_base and vs_top.

  (wt-nl "parse_key(vs_base")
  (when (or requireds optionals)
        (wt "+" (+ (length requireds) (length optionals))))
  (if rest (wt ",TRUE,") (wt ",FALSE,"))
  (if allow-other-keys (wt "TRUE,") (wt "FALSE,"))
  (wt (length keywords))
  (dolist** (kwd keywords) (wt ",VV[" (add-symbol (car kwd)) "]"))
  (wt ");")

  ;;; Bind required parameters.
  (dolist** (var requireds) (c2bind var))

  ;;; Bind optional parameters as long as there remain arguments.
  ;;; The compile-time binding is discarded because they are bound again.

  (when optionals

        (when requireds (wt-nl "vs_base += " (length requireds) ";"))

        (let ((*clink* *clink*)
              (*unwind-exit* *unwind-exit*)
              (*ccb-vs* *ccb-vs*))
             (do ((opts optionals (cdr opts)))
                 ((endp opts))
                 (declare (object opts))
                 (push (next-label) labels)
                 (wt-nl "if(vs_base>=vs_top){vs_top=sup;")
                 (wt-go (car labels)) (wt "}")
                 (c2bind (caar opts))
                 (when (caddar opts) (c2bind-loc (caddar opts) t))
                 (when (cdr opts) (wt-nl "vs_base++;"))))

        (setq labels (reverse labels))
        )

  (wt-nl "vs_top=sup;")

  (when optionals
        (let ((label (next-label)))
             (wt-go label)

             ;;; Bind unspecified optional parameters.

             (dolist** (opt optionals)
                       (wt-label (car labels))
                       (pop labels)
                       (c2bind-init (car opt) (cadr opt))
                       (when (caddr opt) (c2bind-loc (caddr opt) nil)))

             (wt-label label)
             ))

  (when rest (c2bind rest))

  ;;; Bind keywords.

  (dolist** (kwd keywords)
    (cond ((and (eq (caaddr kwd) 'LOCATION) (null (caddr (caddr kwd))))
           ;;; Cnil has been set if keyword parameter is not supplied.
           (c2bind (cadr kwd)))
          (t
           (wt-nl "if(") (wt-vs (var-ref (cadddr kwd))) (wt "==Cnil){")
           (let ((*clink* *clink*)
                 (*unwind-exit* *unwind-exit*)
                 (*ccb-vs* *ccb-vs*))
                (c2bind-init (cadr kwd) (caddr kwd)))
           (wt-nl "}else{")
           (c2bind (cadr kwd))
           (wt "}")))
    (unless (eq (var-kind (cadddr kwd)) 'DUMMY) (c2bind (cadddr kwd))))

  ;;; Now the parameters are ready, after all!
  (c2expr body)

  (when block-p (wt-nl "}"))
  )

(defun need-to-set-vs-pointers (lambda-list)
				;;; On entry to in-line lambda expression,
				;;; vs_base and vs_top must be set iff,
   (or *safe-compile*
       *compiler-check-args*
       (nth 1 lambda-list)	;;; optional,
       (nth 2 lambda-list)	;;; rest, or
       (nth 3 lambda-list)	;;; key-flag.
       ))


;;; The DEFMACRO compiler.

;;; valid lambda-list to DEFMACRO is:
;;;
;;;	( [ &whole sym ]
;;;	  [ &environment sym ]
;;;	  { v }*
;;;	  [ &optional { sym | ( v [ init [ v ] ] ) }* ]
;;;	  {  [ { &rest | &body } v ]
;;;	     [ &key { sym | ( { sym | ( key v ) } [ init [ v ]] ) }*
;;;		    [ &allow-other-keys ]]
;;;	     [ &aux { sym | ( v [ init ] ) }* ]
;;;	  |  . sym }
;;;	 )
;;;
;;; where v is short for { defmacro-lambda-list | sym }.
;;; Defamcro-lambda-list is defined as:
;;;
;;;	( { v }*
;;;	  [ &optional { sym | ( v [ init [ v ] ] ) }* ]
;;;	  {  [ { &rest | &body } v ]
;;;	     [ &key { sym | ( { sym | ( key v ) } [ init [ v ]] ) }*
;;;		    [ &allow-other-keys ]]
;;;	     [ &aux { sym | ( v [ init ] ) }* ]
;;;	  |  . sym }
;;;	 )

(defvar *vnames*)
(defvar *dm-info*)
(defvar *dm-vars*)


(defun c1dm (macro-name vl body
                        &aux (*vs* *vs*) (whole nil) (env nil)
	(setjmps *setjmps*)
                        (*vnames* nil) (*dm-info* (make-info)) (*dm-vars* nil)
                        doc ss is ts other-decls ppn)

  (multiple-value-setq (body ss ts is other-decls doc) (c1body body t))
  (setq body (list (list* 'block macro-name body)))

  (c1add-globals ss)

  (when (and (listp vl) (eq (car vl) '&whole))
        (push (cadr vl) *vnames*)
        (setq whole (c1make-var (cadr vl) ss is ts))
        (push whole *dm-vars*)
        (push whole *vars*)
        (setq vl (cddr vl))
        )
  (let ((env-m (and (listp vl) (do ((tail vl (cdr tail)))
				   ((not (consp tail)) nil)
				 (when (eq '&environment (car tail))
				   (return tail))))))
    (when env-m
      (push (cadr env-m) *vnames*)
      (setq env (c1make-var (cadr env-m) ss is ts))
      (push env *dm-vars*)
      (push env *vars*)
      (setq vl (append (ldiff vl env-m) (cddr env-m)))))
  (multiple-value-setq (vl ppn) (c1dm-vl vl ss is ts))

  (check-vdecl *vnames* ts is)
  (setq body (c1decl-body other-decls body))
  (add-info *dm-info* (cadr body))
   (cond ((eql setjmps *setjmps*))
         (t(setf (info-volatile *dm-info*) t)
           (setf (get macro-name 'contains-setjmp) t)
               ))
  (dolist* (v *dm-vars*) (check-vref v))
  (list doc ppn whole env vl body *dm-info*)
  )

(defun c1dm-vl (vl ss is ts)
  (do ((optionalp nil) (restp nil) (keyp nil) (allow-other-keys-p nil)
       (auxp nil)
       (requireds nil) (optionals nil) (rest nil) (key-flag nil)
       (keywords nil) (auxs nil) (allow-other-keys nil)
       (n 0) (ppn nil)
       )
    ((not (consp vl))
     (when vl
           (when restp (dm-bad-key '&rest))
           (setq rest (c1dm-v vl ss is ts)))
     (values (list (reverse requireds) (reverse optionals) rest key-flag
                   (reverse keywords) allow-other-keys (reverse auxs))
             ppn)
     )
    (let ((v (car vl)))
         (declare (object v))
      (cond
       ((eq v '&optional)
        (when optionalp (dm-bad-key '&optional))
        (setq optionalp t)
        (pop vl))
       ((or (eq v '&rest) (eq v '&body))
        (when restp (dm-bad-key v))
        (setq rest (c1dm-v (cadr vl) ss is ts))
        (setq restp t optionalp t)
        (setq vl (cddr vl))
        (when (eq v '&body) (setq ppn n)))
       ((eq v '&key)
        (when keyp (dm-bad-key '&key))
        (setq keyp t restp t optionalp t key-flag t)
        (pop vl))
       ((eq v '&allow-other-keys)
        (when (or (not keyp) allow-other-keys-p)
              (dm-bad-key '&allow-other-keys))
        (setq allow-other-keys-p t allow-other-keys t)
        (pop vl))
       ((eq v '&aux)
        (when auxp (dm-bad-key '&aux))
        (setq auxp t allow-other-keys-p t keyp t restp t optionalp t)
        (pop vl))
       (auxp
        (let (x init)
             (cond ((symbolp v) (setq x v init (c1nil)))
                   (t (setq x (car v))
                      (if (endp (cdr v))
                          (setq init (c1nil))
                          (setq init (c1expr* (cadr v) *dm-info*)))))
             (push (list (c1dm-v x ss is ts) init) auxs))
        (pop vl))
       (keyp
        (let (x k init (sv nil))
             (cond ((symbolp v)
                    (setq x v k (intern (string v) 'keyword) init (c1nil)))
                   (t (if (symbolp (car v))
                          (setq x (car v)
                                k (intern (string (car v)) 'keyword))
                          (setq x (cadar v) k (caar v)))
                      (cond ((endp (cdr v)) (setq init (c1nil)))
                            (t (setq init (c1expr* (cadr v) *dm-info*))
                               (unless (endp (cddr v))
                                       (setq sv (caddr v)))))))
             (push (list k (c1dm-v x ss is ts) init
                         (if sv (c1dm-v sv ss is ts) nil))
                   keywords)
             )
        (pop vl))
       (optionalp
        (let (x init (sv nil))
             (cond ((symbolp v) (setq x v init (c1nil)))
                   (t (setq x (car v))
                      (cond ((endp (cdr v))
                             (setq init (c1nil)))
                            (t (setq init (c1expr* (cadr v) *dm-info*))
                               (unless (endp (cddr v))
                                       (setq sv (caddr v)))))))
             (push (list (c1dm-v x ss is ts) init
                         (if sv (c1dm-v sv ss is ts) nil))
                   optionals))
        (pop vl)
        (incf n)
        )
       (t (push (c1dm-v v ss is ts) requireds)
          (pop vl)
          (incf n))
       )))
  )

(defun c1dm-v (v ss is ts)
       (cond ((symbolp v)
              (push v *vnames*)
              (setq v (c1make-var v ss is ts))
              (push v *vars*)
              (push v *dm-vars*)
              v)
             (t (c1dm-vl v ss is ts))))

(defun c1dm-bad-key (key)
       (cmperr "Defmacro-lambda-list contains illegal use of ~s." key))

(defmacro maybe-wt-c2dm-bind-vl (vl cvar form end-form)
  `(let ((ipos (file-position *compiler-output1*)))
    ,form
    (let ((npos (file-position *compiler-output1*)))
     (c2dm-bind-vl ,vl ,cvar)
     (if (eql npos (file-position *compiler-output1*))
         (file-position *compiler-output1* ipos)
      ,end-form))))

(defun c2dm (whole env vl body
                   &aux (cvar (next-cvar)))
  (when (or *safe-compile* *compiler-check-args*)
    (wt-nl "check_arg(2);"))
  (cond (whole (setf (var-ref whole) (vs-push)))
        (t (vs-push)))
  (cond (env (setf (var-ref env) (vs-push)))
        (t (vs-push)))
  (c2dm-reserve-vl vl)
  (wt-nl "vs_top=sup;")
  (when whole (c2bind whole))
  (when env (c2bind env))
  (maybe-wt-c2dm-bind-vl vl cvar (wt-nl "{object V" cvar "=base[0]->c.c_cdr;") (wt "}"))
  (c2expr body)
  )

(defun c2dm-reserve-vl (vl)
  (dolist** (var (car vl)) (c2dm-reserve-v var))
  (dolist** (opt (cadr vl))
            (c2dm-reserve-v (car opt))
            (when (caddr opt) (c2dm-reserve-v (caddr opt))))
  (when (caddr vl) (c2dm-reserve-v (caddr vl)))
  (dolist** (kwd (car (cddddr vl)))
            (c2dm-reserve-v (cadr kwd))
            (when (cadddr kwd) (c2dm-reserve-v (cadddr kwd))))
  (dolist** (aux (caddr (cddddr vl)))
            (c2dm-reserve-v (car aux)))
  )

(defun c2dm-reserve-v (v)
  (if (consp v)
      (c2dm-reserve-vl v)
      (setf (var-ref v) (vs-push))))

(defun c2dm-bind-vl (vl cvar 
                        &aux
                        (requireds (car vl)) (optionals (cadr vl))
                        (rest (caddr vl)) (key-flag (cadddr vl))
                        (keywords (car (cddddr vl)))
                        (allow-other-keys (cadr (cddddr vl)))
                        (auxs (caddr (cddddr vl)))
                        )
  (declare (object requireds optionals rest key-flag keywords allow-other-keys
                   auxs))
  (do ((reqs requireds (cdr reqs)))
      ((endp reqs))
      (declare (object reqs))
      (when (or *safe-compile* *compiler-check-args*)
            (wt-nl "if(endp(V" cvar "))invalid_macro_call();"))
      (c2dm-bind-loc (car reqs) `(car ,cvar))
      (when (or (cdr reqs) optionals rest key-flag
                *safe-compile* *compiler-check-args*)
            (wt-nl "V" cvar "=V" cvar "->c.c_cdr;")))
  (do ((opts optionals (cdr opts)))
      ((endp opts))
      (declare (object opts))
      (let ((opt (car opts)))
           (declare (object opt))
           (wt-nl "if(endp(V" cvar ")){")
           (let ((*clink* *clink*)
                 (*unwind-exit* *unwind-exit*)
                 (*ccb-vs* *ccb-vs*))
                (c2dm-bind-init (car opt) (cadr opt))
                (when (caddr opt) (c2dm-bind-loc (caddr opt) nil))
                )
           (wt-nl "} else {")
           (c2dm-bind-loc (car opt) `(car ,cvar))
           (when (caddr opt) (c2dm-bind-loc (caddr opt) t)))
      (when (or (cdr opts) rest key-flag
                *safe-compile* *compiler-check-args*)
            (wt-nl "V" cvar "=V" cvar "->c.c_cdr;"))
      (wt "}"))
  (when rest (c2dm-bind-loc rest `(cvar ,cvar)))
  (dolist** (kwd keywords)
    (let ((cvar1 (next-cvar)))
         (wt-nl
          "{object V" cvar1 "=getf(V" cvar ",VV[" (add-symbol (car kwd))
          "],OBJNULL);")
         (wt-nl "if(V" cvar1 "==OBJNULL){")
         (let ((*clink* *clink*)
               (*unwind-exit* *unwind-exit*)
               (*ccb-vs* *ccb-vs*))
              (c2dm-bind-init (cadr kwd) (caddr kwd))
              (when (cadddr kwd) (c2dm-bind-loc (cadddr kwd) nil))
              (wt "} else {"))
         (c2dm-bind-loc (cadr kwd) `(cvar ,cvar1))
         (when (cadddr kwd) (c2dm-bind-loc (cadddr kwd) t))
         (wt-nl "}}")))
  (when (and (or *safe-compile* *compiler-check-args*)
             (null rest)
             (null key-flag))
        (wt-nl "if(!endp(V" cvar "))invalid_macro_call();"))
  (when (and (or *safe-compile* *compiler-check-args*)
             key-flag
             (not allow-other-keys))
        (wt-nl "check_other_key(V" cvar "," (length keywords))
        (dolist** (kwd keywords)
                  (wt ",VV[" (add-symbol (car kwd)) "]"))
        (wt ");"))
  (dolist** (aux auxs)
            (c2dm-bind-init (car aux) (cadr aux)))
  )

(defun c2dm-bind-loc (v loc)
  (if (consp v)
      (let ((cvar (next-cvar)))
           (maybe-wt-c2dm-bind-vl v cvar (wt-nl "{object V" cvar "= " loc ";") (wt "}")))
      (c2bind-loc v loc)))

(defun c2dm-bind-init (v init)
  (if (consp v)
      (let* ((*vs* *vs*) (*inline-blocks* 0)
             (cvar (next-cvar))
             (loc (car (inline-args (list init) '(t)))))
       (maybe-wt-c2dm-bind-vl v cvar (wt-nl "{object V" cvar "= " loc ";") (wt "}"))
       (close-inline-blocks))
      (c2bind-init v init)))



