;; -*-Lisp-*-
;;; CMPEVAL  The Expression Dispatcher.
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




(export '(si::define-compiler-macro
          si::compiler-macro-function
	  si::undef-compiler-macro
          si::define-inline-function) 'system)

(in-package 'compiler)

(si:putprop 'progn 'c1progn 'c1special)
(si:putprop 'progn 'c2progn 'c2)

(si:putprop 'si:structure-ref 'c1structure-ref 'c1)
(si:putprop 'structure-ref 'c2structure-ref 'c2)
(si:putprop 'structure-ref 'wt-structure-ref 'wt-loc)
(si:putprop 'si:structure-set 'c1structure-set 'c1)
(si:putprop 'structure-set 'c2structure-set 'c2)

(defun c1expr* (form info)
  (setq form (c1expr form))
  (add-info info (cadr form))
  form)

(defun c1expr** (form info)
  (setq form (copy-list (c1expr form)))
  (setf (cadr form) (copy-info (cadr form)))
  (add-info (cadr form) info)
  form)

(defun readable-val (val)
  (cond ((not (arrayp val)))
	((not (si::staticp val)))))

(defvar *fn-val-list* nil)

(defun c1expr (form)
  (setq form (catch *cmperr-tag*
    (cond ((symbolp form)
           (cond ((eq form nil) (c1nil))
                 ((eq form t) (c1t))
                 ((keywordp form)
                  (list 'LOCATION (make-info :type (object-type form))
                        (list 'VV (add-object form))))
                 ((constantp form)
                  (let ((val (symbol-value form)))
		    (or 
		     (c1constant-value val nil)
		     `(location ,(make-info :type (object-type val)) (VV ,(add-constant form))))))
		 ((unless (member form *fn-val-list*)
		    (let* ((v (car (member-if (lambda (x) (if (var-p x) (eq form (var-name x)) t)) *vars*)))
			   (tp (when (and (var-p v) (not (var-cb v))) 
				 (var-type v))))
		      (when (atomic-tp tp) 
			(unless (var-ref v) (setf (var-ref v) 'ignorable))
			(let* ((val (cadr tp))
			       (val (cond ((functionp val) 
					   (let ((s (coerce-to-funid val)))
					     (when s `(function ,s))))
					  ((when (consp val) (eq (car val) 'load-time-value)) val)
					  (`(quote ,val)))))
			  (when val
			    (let ((*fn-val-list* (cons form *fn-val-list*)))
			      (c1expr val))))))))
                 ((c1var form))))
          ((consp form)
           (let ((fun (car form)))
             (cond ((symbolp fun)
                    (c1symbol-fun fun (cdr form)))
                   ((and (consp fun) (eq (car fun) 'lambda))
                    (c1lambda-fun (cdr fun) (cdr form)))
                   ((and (consp fun) (eq (car fun) 'si:|#,|))
                    (cmperr "Sharp-comma-macro was found in a bad place."))
                   (t (cmperr "The function ~s is illegal." fun)))))
          (t (c1constant-value form t)))))
  (if (eq form '*cmperr-tag*) (c1nil) form))

(si::putprop 'si:|#,| 'c1sharp-comma 'c1special)
(si::putprop 'load-time-value 'c1load-time-value 'c1special)

(defun c1sharp-comma (arg)
  (c1constant-value (cons 'si:|#,| arg) t))

(defun c1load-time-value (arg)
  (c1constant-value
   (cons 'si:|#,|
	 (if *compiler-compile*
	     (let ((x (cmp-eval (car arg))));FIXME double cmp-eval with c1constant-value
	       (if (and (cdr arg) (cadr arg))
		   x
		 `(si::nani ,(si::address x))))
	   (car arg)))
   t))

(si::putprop 'si::define-structure 'c1define-structure 't1)

(defun c1define-structure (arg &aux *sharp-commas*)
  (declare (special *sharp-commas*))
  (eval (cons 'si::define-structure arg))
  (c1constant-value (cons 'si:|#,| (cons 'si::define-structure arg)) t)
  (add-load-time-sharp-comma)
  nil)

(defun flags-pos (flag &aux (i 0))
  (declare (fixnum i))
  (dolist
      (v
       '((allocates-new-storage ans)            ;; might invoke gbc
	 (side-effect-p set)                    ;; no effect on arguments
	 (constantp)                            ;; always returns same result,
	                                        ;; double eval ok.
	 (result-type-from-args rfa)            ;; if passed args of matching
					        ;; type result is of result type
         (is)                                   ;; extends the `integer stack'.
	 (inline-types-function itf)            ;; car of ii is a function returning match info
	 (sets-vs-top svt)))                    ;; callee sets the vs_top variable
    (cond ((member flag v :test 'eq)
	   (return-from flags-pos i)))
    (setq i (+ i 1)))
  (error "unknown opt flag"))

(defmacro flag-p (n flag)
  `(logbitp ,(flags-pos  flag)  ,n))

;; old style opts had '(args ret new-storage side-effect string)
;; these new-storage and side-effect have been combined into
;; one integer, along with several other flags.

(defun fix-opt (opt)
  (let ((a (cddr opt)))
    (unless (typep (car a ) #tfixnum)
    (if *compiler-in-use*
	(cmpwarn "Obsolete optimization: use fix-opt ~s"  opt))
		     
    (setf (cddr opt)
	  (cons (logior (if (car a) 2 0)
			(if (cadr a) 1 0))
		(cddr a))))
    opt))

;; some hacks for revising a list of optimizers.
#+revise
(progn
(defun output-opt (opt sym flag)
  (fix-opt opt)
  (format t "(push '(~(~s ~s #.(flags~)" (car opt) (second opt))
  (let ((o (third opt)))
    (if (flag-p o set) (princ " set"))
    (if (flag-p o ans) (princ " ans"))
    (if (flag-p o rfa) (princ " rfa"))
    (if (flag-p o constantp) (princ "constantp ")))
  (format t ")")
  (if (and (stringp (nth 3 opt))
	   (> (length (nth 3 opt)) 40))
      (format t "~%  "))
  (prin1 (nth 3 opt))
  (format t ")~%   ~((get '~s '~s)~))~%"  sym flag))

(defun output-all-opts (&aux  lis did)
  (sloop::sloop
   for v in ;(list (find-package "LISP"))
					(list-all-packages)
   do
   (setq lis
	 (sloop::sloop
	  for sym in-package (package-name v)
	  when (or (get sym 'inline-always)
		   (get sym 'inline-safe)
		   (get sym 'inline-unsafe))
	  collect sym))
   (setq lis (sort lis #'(lambda (x y) (string-lessp (symbol-name x)
						      (symbol-name y)))))
   do
   (sloop::sloop for sym in lis do
		 (format t "~%;;~s~% " sym)
       (sloop::sloop for u in '(inline-always inline-safe inline-unsafe)
		     do (sloop::sloop
			 for w in (reverse (remove-duplicates
					    (copy-list (get sym u))
					    :test 'equal))
			 do (output-opt w  sym u))))))

)				      
				

(defun result-type-from-args (f args)
  (when (and (not *compiler-new-safety*) 
	     (not (eq '* (get f 'return-type)))) ;;FIXME  make sure return-type and proclaimed-return-type are in sync
    (let* ((be (get f 'type-propagator))
	   (ba (and be ;(si::dt-apply be (cons f (mapcar 'coerce-to-one-valuea args))))));FIXME
		    (apply be (cons f (mapcar 'coerce-to-one-value args))))));FIXME
      (when ba
	(return-from result-type-from-args (cmp-norm-tp ba))))
    (dolist (v '(inline-always inline-unsafe))
      (let* ((w (get f v)))
	(if (and w (symbolp (caar w)) (flag-p (third (car w)) itf))
	    (return-from result-type-from-args (cadr (apply (caar w) args)))
	  (dolist (w w)
	    (fix-opt w)
	    (when (and
		   (flag-p (third w) result-type-from-args)
		   (>= (length args) (- (length (car w)) (length (member '* (car w)))))
		   (do ((a args (cdr a)) 
			(b (car w) (if (and (eq (cadr b) '*) (endp (cddr b))) b (cdr b))))
		       ((null a) t)
		       (unless (and (car a) (car b)
				    (or  (eq (car a) (car b))
					 (type>= (cmp-norm-tp (car b)) (cmp-norm-tp (car a)))))
			 (return nil))))
	      (return-from result-type-from-args (cmp-norm-tp (second w))))))))))
	

;; omitting a flag means it is set to nil.
(defmacro flags (&rest lis &aux (i 0))
  (dolist (v lis)
    (setq i (logior  i (ash 1 (flags-pos v)))))
  i)

;; Usage:
; (flagp-p (caddr ii) side-effect-p)
; (push '((integer integer) integer #.(flags const raf) "addii(#0,#1)")
;         (get '+ 'inline-always))

;(defun arg-appears (x y dep)
;  (cond ((atom y) nil)
;	((consp (car y))
;	 (or (arg-appears x (cdar y) t) (arg-appears x (cdr y) dep)))
;	(t
;	 (or (and (eq x (car y)) dep)
;	     (arg-appears x (cdr y) dep)))))

(defun cons-to-right (x)
  (and x (or (consp (car x)) (cons-to-right (cdr x)))))

(defun needs-pre-eval (x)
  (or (and (consp (car x)) (not (eq (caar x) 'quote)))
      (and (atom (car x))
	   (not (constantp (car x)))
	   (cons-to-right (cdr x)))))
;	   (arg-appears (car x) (cdr x) nil))))

(defun bind-before-cons (x y)
  (and y (consp (car y)) (atom (cadar y))
       (if (eq x (cadar y)) (caar y)
	 (bind-before-cons x (cdr y)))))
  
(defun pull-evals-int (x form lets)
  (if (atom x)
      (list (nreverse form) (nreverse lets))
    (let* ((s (if (needs-pre-eval x) (bind-before-cons (car x) lets) (car x)))
	   (lets (if s lets (cons (list (gensym) (car x)) lets)))
	   (s (or s (caar lets))))
      (pull-evals-int (cdr x) (cons s form) lets))))

(defun pull-evals (form)
  (let ((form (pull-evals-int (cdr form) (list (car form)) nil)))
    (values (car form) (cadr form))))

(defun binary-nest-int (form len)
  (declare (fixnum len) (list form))
  (if (> len 3)
      (binary-nest-int
       (cons (car form)
	     (cons (list (car form) (cadr form) (caddr form))
		   (cdddr form)))
       (1- len))
    form))

(defmacro let-wrap (lets form)
  `(if lets
       (list 'let* ,lets ,form)
     ,form))

(defun binary-nest (form env)
  (declare (ignore env))
  (let ((len (length form)))
    (declare (fixnum len))
    (if (> len 3)
	(multiple-value-bind (form lets) (values form nil);(pull-evals form)
	  (let-wrap lets (binary-nest-int form len)))
      form)))

(si::putprop '* 'binary-nest 'si::compiler-macro-prop)
(si::putprop '+ 'binary-nest 'si::compiler-macro-prop)

(si::putprop 'logand 'binary-nest 'si::compiler-macro-prop)
(si::putprop 'logior 'binary-nest 'si::compiler-macro-prop)
(si::putprop 'logxor 'binary-nest 'si::compiler-macro-prop)

(si::putprop 'max 'binary-nest 'si::compiler-macro-prop)
(si::putprop 'min 'binary-nest 'si::compiler-macro-prop)

(si::putprop 'gcd 'binary-nest 'si::compiler-macro-prop)
(si::putprop 'lcm 'binary-nest 'si::compiler-macro-prop)

;; (defun gensym-expander (form env)
;;   (declare (ignore env))
;;   `(cond ((not ,(cadr form)) (si::gensym0))
;; 	 ((stringp ,(cadr form)) (si::gensym1s ,(cadr form)))
;; 	 ((si::gensym1ig ,(cadr form)))))
;; (si::putprop 'gensym 'gensym-expander 'si::compiler-macro-prop)

(defun multiple-value-bind-expander (form env)
  (declare (ignore env))
  (if (and (consp (caddr form)) (eq (caaddr form) 'values))
      (let ((l1 (length (cadr form))) (l2 (length (cdaddr form))))
      `(let (,@(mapcar 'list (cadr form) (cdaddr form))
	       ,@(when (> l1 l2)
		   (nthcdr l2 (cadr form))))
	 ,@(when (> l2 l1) (nthcdr l1 (cdaddr form)))
	 ,@(cdddr form)))
    form))
(si::putprop 'multiple-value-bind 'multiple-value-bind-expander 'si::compiler-macro-prop)

;FIXME apply-expander
(defun funcall-expander (form env &aux x);FIXME inlinable-fn?
  (declare (ignore env))
  (cond ((and (consp (cadr form)) (eq (caadr form) 'lambda)) (cdr form))
	((and (consp (cadr form)) (eq (caadr form) 'function)
	      (setq x (cadadr form))
	      (setq x (if (is-setf-function x) (unless *no-proxy-symbols* (make-setf-function-proxy-symbol (cadr x))) x))
	      (or (symbolp x)
		  (and (consp x) (eq (car x) 'lambda))))
	 `(,x ,@(cddr form)))
	((constantp (cadr form)) `(,(cmp-eval (cadr form)) ,@(cddr form)))
	(form)))
(si::putprop 'funcall 'funcall-expander 'si::compiler-macro-prop)

;; (defun last-expander (form env)
;;   (declare (ignore env))
;;   (if (or (not (cdr form)) (cdddr form)) form
;;     (let ((v (gensym)) (f (gensym)) (n (gensym)) (i (gensym)))
;;       `(let ((,f ,(cadr form)) 
;; 	     (,n ,(or (caddr form) 1)))
;; 	 ,@(when *compiler-check-args* `((check-type ,f list)(check-type ,n (integer 0))))
;; 	 (let ((,v (do ((,v ,f (cdr ,v)) (,i 0 (1+ ,i))) ((or (= ,i ,n) (not (consp ,v))) ,v) (declare (seqind ,i)))))
;; 	   (do ((,f ,f (cdr ,f)) (,v ,v (cdr ,v))) ((not (consp ,v)) ,f)))))))
;; (si::putprop 'last 'last-expander 'si::compiler-macro-prop)
       
;; (defun nreconc-expander (form env)
;;   (declare (ignore env))
;;   (if (or (not (cddr form)) (cdddr form)) form
;;     (let ((v (gensym)) (f (gensym)) (tl (gensym)))
;;       `(let ((,f ,(cadr form)) (,tl ,(caddr form)))
;; 	 (do ((,f ,f (or ,v ,f)) (,v (cdr ,f) (cdr ,v))) ((endp ,v) (if ,f (setf (cdr ,f) ,tl) (setq ,f ,tl)) ,f)
;; 	   (setf (cdr ,f) ,tl ,tl ,f))))))
;; (si::putprop 'nreconc 'nreconc-expander 'si::compiler-macro-prop)
       


;; (defun nconc-expander-int (form len)
;;   (declare (fixnum len) (list form))
;;   (cond ((> len 2)
;; 	 (let ((v (gensym)) (f (gensym)) (tl (gensym)))
;; 	   `(let* ((,f ,(cadr form)) (,v (last ,f)) (,tl ,(nconc-expander-int `(,(car form) ,@(cddr form)) (1- len))))
;; 	      (if ,v (setf (cdr ,v) ,tl) (setq ,f ,tl))
;; 	      ,f)))
;; 	((= len 2) (cadr form))))

;; (defun nconc-expander (form env)
;;   (declare (ignore env))
;;   (nconc-expander-int form (length form)))
;; (si::putprop 'nconc 'nconc-expander 'si::compiler-macro-prop)


(defun invert-binary-nest (form env)
  (declare (ignore env))
  (if (> (length form) 3)
      (let* ((op (car form))
	     (recip (cond
		     ((eq op '-) '+)
		     ((eq op '/) '*)
		     (t (error "Bad op ~S~%" op)))))
	(list op (cadr form) (cons recip (cddr form))))
    form))

(si::putprop '- 'invert-binary-nest 'si::compiler-macro-prop)
(si::putprop '/ 'invert-binary-nest 'si::compiler-macro-prop)

(defun logical-binary-nest (form env)
  (declare (ignore env))
  (if (> (length form) 3)
      (multiple-value-bind (form lets) (pull-evals form)
	(let (r)
	  (do ((f (cdr form) (cdr f)))
	      ((null (cdr f))
	       (let-wrap lets (cons 'and (nreverse r))))
	    (push (list (car form) (car f) (cadr f)) r))))
	form))

(si::putprop '> 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop '>= 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop '< 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop '<= 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop '= 'logical-binary-nest 'si::compiler-macro-prop)

(si::putprop 'char> 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop 'char>= 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop 'char< 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop 'char<= 'logical-binary-nest 'si::compiler-macro-prop)
(si::putprop 'char= 'logical-binary-nest 'si::compiler-macro-prop)

(defun logical-outer-nest (form env)
  (declare (ignore env))
  (if (> (length form) 3)
      (multiple-value-bind (form lets) (pull-evals form)
	(let (r)
	  (do ((f (cdr form) (cdr f)))
	      ((null (cdr f))
	       (let-wrap lets (cons 'and (nreverse r))))
	    (do ((g (cdr f) (cdr g))) ((null g))
	    (push (list (car form) (car f) (car g)) r)))))
    form))

(si::putprop '/= 'logical-outer-nest 'si::compiler-macro-prop)
(si::putprop 'char/= 'logical-outer-nest 'si::compiler-macro-prop)

;; (setf (symbol-function 'cmp-nthcdr) (symbol-function 'nthcdr))
;; (defun nthcdr-expander (form env)
;;   (declare (ignore env))
;;   (if (= (length form) 3)
;;       (let* ((non (inlinable-fn (cadr form))) ;;FIXME, we need to centralize things like this
;; 	     (n (if non (cadr form) (gensym))) (l (gensym)))
;; 	`(let (,@(unless non `((,n ,(cadr form)))) (,l ,(caddr form)))
;; 	   (if (typep ,n ',#tseqind);;FIX typep inference to branch types outside of +type-alist+
;; 	       (cmp-nthcdr ,n ,l)
;; 	     (cmp-nthcdr ,n ,l))))
;;     form))
;; (si::putprop 'nthcdr 'nthcdr-expander 'si::compiler-macro-prop)

;; (setf (symbol-function 'cmp-nth) (symbol-function 'nth))
;; (defun nth-expander (form env)
;;   (declare (ignore env))
;;   `(car (nthcdr ,@(cdr form))))
;; (si::putprop 'nth 'nth-expander 'si::compiler-macro-prop)

(defun incr-to-plus (form env)
  (declare (ignore env))
  `(+ ,(cadr form) 1))

(defun decr-to-minus (form env)
  (declare (ignore env))
  `(- ,(cadr form) 1))

(si::putprop '1+ 'incr-to-plus 'si::compiler-macro-prop)
(si::putprop '1- 'decr-to-minus 'si::compiler-macro-prop)

(defun plusp-compiler-macro (form env)
  (declare (ignore env))
  (if (and (cdr form) (endp (cddr form)))
      `(> ,(cadr form) 0)
    form))
(si::putprop 'plusp 'plusp-compiler-macro 'si::compiler-macro-prop)

(defun minusp-compiler-macro (form env)
  (declare (ignore env))
  (if (and (cdr form) (endp (cddr form)))
      `(< ,(cadr form) 0)
    form))
(si::putprop 'minusp 'minusp-compiler-macro 'si::compiler-macro-prop)

(defun zerop-compiler-macro (form env)
  (declare (ignore env))
  (if (and (cdr form) (endp (cddr form)))
      `(= ,(cadr form) 0)
    form))
(si::putprop 'zerop 'zerop-compiler-macro 'si::compiler-macro-prop)

(defconstant +cnum-tp-alist+ `((,#tfixnum . ,(c-type 0))
			       (,#tbignum . ,(c-type (1+ most-positive-fixnum)))
			       (,#tratio  . ,(c-type 1/2))
			       (,#tshort-float . ,(c-type 0.0s0))
			       (,#tlong-float  . ,(c-type 0.0))
			       (,#tfcomplex  . ,(1+ c-type-max))
			       (,#tdcomplex  . ,(+ 2 c-type-max))
			       (,#t(complex rational) . ,(c-type #c(0 1)))))

(defun typecase-compiler-macro (form env)
  (declare (ignore env))
  (let ((x (cadr form)))
    (let (r tp)
      (dolist (f (cddr form) `(case (cnum-type ,x) ,@(nreverse r)))
	(let ((z (cdr f)))
	  (cond ((member (car f) '(t otherwise)) 
		 (if (symbolp x)
		     (push `(,(car f) (setq ,x (the (not (or ,@tp)) ,x)) ,@z) r)
		   (push `(,(car f) ,@z) r)))
		((let* ((q (cmp-norm-tp (car f)))
			(i (mapcar 
			    'cdr 
			    (remove-if-not
			     (lambda (x) (when (type>= q (car x)) (setq q (type-and q (cmp-norm-tp `(not ,(car x))))) t))
			     +cnum-tp-alist+))))
		   (when (or q (not i)) (return form))
		   (push (car f) tp)
		   (if (symbolp x)
		       (push `(,i (setq ,x (the ,(car f) ,x)) ,@z) r)
		     (push `(,i ,@z) r))))))))))

(si::putprop 'typecase 'typecase-compiler-macro 'si::compiler-macro-prop)

;; (defun reverse-expander (form env)
;;   (declare (ignore env))
;;   (let ((x (gensym)) (i (gensym)) (s (gensym)))
;;     `(let ((,s ,(cadr form)))
;;        (if (listp ,s)
;; 	   (let (,x)
;; 	     (do ((,s ,s (cdr ,s))) ((endp ,s) ,x)
;; 	       (setq ,x (cons (car ,s) ,x))))
;; 	 (let ((,x (make-array (length ,s) :element-type (array-element-type ,s))))
;; 	   (do ((,i 0 (1+ ,i))) ((= ,i (length ,s)) ,x)
;; 	     (declare (seqind ,i))
;; 	     (setf (aref ,x (1- (- (length ,s) ,i))) (aref ,s ,i))))))))
;; (si::putprop 'reverse 'reverse-expander 'si::compiler-macro-prop)

;; (defmacro with-var-form-type ((v f tp) &rest body)
;;   ``(let ((,,v ,,f))
;;      ,@(when *compiler-check-args* `((check-type ,,v ,,tp)))
;;      (let ((,,v ,,v))
;;        (declare (,,tp ,,v))
;;        ,,@body)))

;; (defun elt-expander (form env)
;;   (declare (ignore env))
;;   (let ((i (gensym)) (s (gensym)))
;;     (with-var-form-type 
;;      (s (cadr form) #tsequence)
;;      (with-var-form-type 
;;       (i (caddr form) #tseqind)
;;       `(if (listp ,s) (nth ,i ,s) (aref ,s ,i))))))
;; (si::putprop 'elt 'elt-expander 'si::compiler-macro-prop)


;; (defun length-expander (form env)
;;   (declare (ignore env))
;;   (let ((i (gensym)) (s (gensym)))
;;     (with-var-form-type (s (cadr form) #tsequence)
;;      `(if (listp ,s)	
;; 	      (do ((,i 0 (1+ ,i)) (,s ,s (cdr ,s))) ((endp ,s) ,i)
;; 		  (declare (seqind ,i)))
;; 	(cmp-vec-length ,s)))))
;; (si::putprop 'length 'length-expander 'si::compiler-macro-prop)

;; (defun adjoin-expander (form env)
;;   (declare (ignore env))
;;   (let (syms nf)
;;     (dolist (l (cdr form))
;;       (cond ((literalp l) (push l nf))
;; 	    ((let ((lb (list (gensym) l))) (push lb syms) (push (car lb) nf)))))
;;     (let ((nf (nreverse nf)))
;;       `(let* ,(nreverse syms) (if (member ,@nf) ,(cadr nf) (cons ,(car nf) ,(cadr nf)))))))
;; (si::putprop 'adjoin 'adjoin-expander 'si::compiler-macro-prop)

;; (defun endp-expander (form env)
;;   (declare (ignore env))
;;   (if *compiler-check-args*
;;       (let ((x (gensym)))
;; 	`(let ((,x ,(cadr form)))
;; 	   (cond ((not ,x) t);;Cannot infer the type of x below without the t 
;; 		 ((consp ,x) nil)
;; 		 ((error 'type-error :datum ,x :expected-type 'list)))));;cannot continue
;;     `(not ,(cadr form))))
;; (si::putprop 'endp 'endp-expander 'si::compiler-macro-prop)
  
;; (defun garef (a i l)
;;   (let ((ff `(aref ,a ,i)))
;;     (if l `(car ,ff) ff)))

;; (defun qsl-fun (l p k list)
;;   (let ((ll (gensym)) (a (gensym)) (fi (gensym)) (ls (gensym)) (lf (gensym)) (rt (gensym))
;; 	(sp (gensym)) (spi (gensym)) (s (gensym)) (ii (gensym)))
;;     `(let* ((,ll (length ,l))
;; 	    (,a ,(if list `(make-array ,ll) l)));FIXME default?
;;        ,(when list `(declare ((vector t) ,a)))
;;        ,(when list `(do ((,fi 0 (1+ ,fi)) (,l ,l (cdr ,l))) ((= ,fi ,ll))
;; 	   (declare (seqind ,fi))
;; 	   (setf (aref ,a ,fi) ,l)))
;;        (let* ((,ii (make-array 1024 :element-type ',#tnon-negative-fixnum :adjustable t))
;; 	      (,s 2))
;; 	 (declare (seqind ,s) ((vector seqind) ,ii));FIXME (adjust-array
;; 	 (setf (aref ,ii 0) 0 (aref ,ii 1) ,ll)
;; 	 (do () ((= ,s 0))
;; 	     (let* ((,ls (aref ,ii (decf ,s))) (,fi (aref ,ii (decf ,s))))
;; 	       (declare (seqind ,ls ,fi));FIXME setq
;; 	       (do () ((>= ,fi (1- ,ls)))
;; 		   (rotatef ,(garef a fi list) ,(garef a `(+ ,fi (truncate (- ,ls ,fi) 2)) list))
;; 		   (let* ((,spi ,fi)
;; 			  (,sp (funcall ,k ,(garef a spi list))))
;; 		     (declare (seqind ,spi))
;; 		     (do ((,lf ,fi) (,rt ,ls)) ((>= ,lf ,rt))
;; 			 (declare (seqind ,lf ,rt))
;; 			 (do () ((or (>= (incf ,lf) ,rt)
;; 				     (not (funcall ,p (funcall ,k ,(garef a lf list)) ,sp)))))
;; 			 (do () ((or (>= ,lf (decf ,rt)) 
;; 				     (funcall ,p (funcall ,k ,(garef a rt list)) ,sp))))
;; 			 (when (< ,lf ,rt)
;; 			   (rotatef ,(garef a lf list) ,(garef a rt list)))
;; 			 (setq ,spi (1- ,lf)))
;; 		     (rotatef ,(garef a fi list) ,(garef a spi list))
;; 		     (if (< (- ,ls ,spi) (- ,spi ,fi))
;; 			 (let ((,lf (1+ ,spi)))
;; 			   (when (> (- ,ls ,lf) 1)
;; 			     (when (>= ,s (1- (length ,ii)))
;; 			       (setq ,ii (adjust-array ,ii (ash (length ,ii) 1))))
;; 			     (setf (aref ,ii ,s) ,lf (aref ,ii (incf ,s)) ,ls ,s (1+ ,s)))
;; 			   (setq ,ls ,spi))
;; 		       (let ((,rt ,spi))
;; 			 (when (> (- ,rt ,fi) 1)
;; 			   (when (>= ,s (1- (length ,ii)))
;; 			     (setq ,ii (adjust-array ,ii (ash (length ,ii) 1))))
;; 			   (setf (aref ,ii ,s) ,fi (aref ,ii (incf ,s)) ,rt ,s (1+ ,s)))
;; 			 (setq ,fi (1+ ,spi)))))))))
;;        ,l)))

;; (defun qsort-expander (form env) ;l p k
;;   (declare (ignore env))
;;   (if (or (not (consp (caddr form)))
;; 	  (not (member (caaddr form) '(function lambda quote)))
;; 	  (and (cdddr form) 
;; 	       (or (not (eq :key (cadddr form)))
;; 		   (not (consp (fifth form)))
;; 		   (not (member (car (fifth form)) '(function lambda quote))))))
;;       form
;;     (let ((seq (gensym)))
;;       `(let ((,seq ,(cadr form)))
;; 	 (if (listp ,seq)
;; 	     (let ((,seq ,seq))
;; 	       (declare (list ,seq))
;; 	       ,(qsl-fun seq (caddr form) (if (cdddr form) (fifth form) ''identity) t))
;; 	   (let ((,seq ,seq))
;; 	     (declare (vector ,seq))
;; 	     ,(qsl-fun seq (caddr form) (if (cdddr form) (fifth form) ''identity) nil)))))))
;(si::putprop 'sort 'qsort-expander 'si::compiler-macro-prop)

;; (defun mheap (a r b key p)
;;   (let ((block (gensym)) (j (gensym)) (k (gensym)) (k1 (gensym)) (kk (gensym)) (kk1 (gensym)) (x (gensym)))
;;     `(block
;;       ,block
;;       (do ((,j ,r) (,k (ash ,r 1))) ((>= ,k ,b))
;; 	  (declare (seqind ,j ,k))
;; 	  (let ((,kk (funcall ,key (car (aref ,a ,k)))))
;; 	    (unless (= ,k (1- ,b))
;; 	      (let* ((,k1 (1+ ,k))
;; 		     (,kk1 (funcall ,key (car (aref ,a ,k1)))))
;; 		(when (funcall ,p ,kk ,kk1)
;; 		  (setq ,kk ,kk1 ,k ,k1))))
;; 	    (let ((,x (car (aref ,a ,j))))
;; 	      (if (funcall ,p (funcall ,key ,x) ,kk)
;; 		(setf (car (aref ,a ,j)) (car (aref ,a ,k))
;; 		      (car (aref ,a ,k)) ,x
;; 		      ,j ,k
;; 		      ,k (ash ,j 1))
;; 		  (return-from ,block))))))))

(defconstant +hash-index-type+ #t(or (integer -1 -1) seqind))

;; (defun sort-expander (form env)
;;   (declare (ignore env))
;;   (if (or (not (consp (caddr form)))
;; 	  (not (member (caaddr form) '(function lambda quote)))
;; 	  (and (cdddr form) 
;; 	       (or (not (eq :key (cadddr form)))
;; 		   (not (consp (fifth form)))
;; 		   (not (member (car (fifth form)) '(function lambda quote))))))
;;       form
;;     (let ((ll (gensym)) (a (gensym)) (i (gensym)) (x (gensym))
;; 	  (seq (gensym)) (pred (caddr form)) (key (if (cdddr form) (fifth form) ''identity)))
;;       `(let ((,seq ,(cadr form)))
;; 	 (declare (list ,seq))
;; 	 (let* ((,ll (length ,seq))
;; 		(,a (make-array ,ll :element-type t)))
;; 	   (declare ((vector t) ,a)) ;FIXME
;; 	   (do ((,i 0 (1+ ,i)) (,x ,seq (cdr ,x))) ((= ,i ,ll))
;; 	       (declare (seqind ,i))
;; 	       (setf (aref ,a ,i) ,x))
;; 	   (do ((,i (floor ,ll 2) (1- ,i))) ((< ,i 0))
;; 	       (declare (,+hash-index-type+ ,i))
;; 	       ,(mheap a i ll key pred))
;; 	   (do ((,i (1- ,ll) (1- ,i))) ((<= ,i 0))
;; 	       (declare (seqind ,i))
;; 	       (let ((,x (car (aref ,a 0))))
;; 		 (setf (car (aref ,a 0)) (car (aref ,a ,i)) (car (aref ,a ,i)) ,x))
;; 	       ,(mheap a 0 i key pred)))
;; 	 ,seq))))
;(si::putprop 'sort (function sort-expander) 'si::compiler-macro-prop)

(defun identity-expander (form env)
  (declare (ignore env))
  (if (cddr form) form (cadr form)))
(si::putprop 'identity 'identity-expander 'si::compiler-macro-prop)

(defun seqind-wrap (form)
  (if *safe-compile*
      form
    `(the seqind ,form)))

(defun fboundp-expander (form env)
  (declare (ignore env))
  (let ((s (gensym)))
  `(let ((,s ,(cadr form)))
     (cond ((symbolp ,s) (si::fboundp-sym ,s))
	   ((is-setf-function ,s) (when (get (cadr ,s) 'si::setf-function) t))
	   ((check-type ,s si::function-identifier))))))
(si::putprop 'fboundp 'fboundp-expander 'si::compiler-macro-prop)

(defun maphash-expander (form env)
  (declare (ignore env))
  (let ((block (gensym))(tag (gensym)) (ind (gensym)) (key (gensym)) (val (gensym)))
    `(block 
      ,block
      (let ((,ind -1))
	(declare (,+hash-index-type+ ,ind))
	(tagbody 
	 ,tag
	 (when (< (setq ,ind (si::next-hash-table-index ,(caddr form) (1+ ,ind))) 0)
	   (return-from ,block))
	 (let ((,key (si::hash-key-by-index ,(caddr form) ,ind))
	       (,val (si::hash-entry-by-index ,(caddr form) ,ind)))
	   (funcall ,(cadr form) ,key ,val))
	 (go ,tag))))))
(si::putprop 'maphash 'maphash-expander 'si::compiler-macro-prop)
	
(defun array-row-major-index-expander (form env &optional (it 0))
  (declare (ignore env) (fixnum it))
  (let ((l (length form)))
    (cond ((= l 2) 0)
	  ((= l 3) (seqind-wrap (caddr form)))
	  (t (let ((it (1+ it))
		   (fn (car form))
		   (ar (cadr form))
		   (first (seqind-wrap (caddr form)))
		   (second (seqind-wrap (cadddr form)))
		   (rest (cddddr form)))
	       (array-row-major-index-expander
		`(,fn ,ar ,(seqind-wrap
			    `(+
			      ,(seqind-wrap
				`(* ,first (array-dimension ,ar ,it))) ,second)) ,@rest)
		nil it))))))

(si::putprop 'array-row-major-index 'array-row-major-index-expander 'si::compiler-macro-prop)

;; (defmacro with-pulled-array (bindings form &body body)
;;   `(let ((,(car bindings) (cadr ,form)))
;;      (let ((,(cadr bindings) (and (consp ,(car bindings)) `((,(gensym) ,,(car bindings))))))
;;        (let ((,(caddr bindings) (or (caar ,(cadr bindings)) ,(car bindings))))
;; 	 ,@body))))
	
(defmacro with-pulled-array (bindings form &body body) ;FIXME
  `(let ((,(car bindings) (cadr ,form)))
     (let ((,(cadr bindings) `((,(gens ,(car bindings)) ,,(car bindings)))))
       (let ((,(caddr bindings) (or (caar ,(cadr bindings)) ,(car bindings))))
	 ,@body))))
	

(defun aref-expander (form env)
  (declare (ignore env))
  (with-pulled-array
   (ar lets sym) form
   (let ((isym (gensym)))
     (let ((lets (append lets `((,isym (array-row-major-index ,sym ,@(cddr form)))))))
       (let-wrap lets `(compiler::cmp-aref ,sym ,isym))))))

(si::putprop 'aref 'aref-expander 'si::compiler-macro-prop)
(si::putprop 'row-major-aref 'aref-expander 'si::compiler-macro-prop)

(defun aset-expander (form env)
  (declare (ignore env))
  (with-pulled-array
   (ar lets sym) form
   (let ((isym (gensym)))
     (let ((lets (append lets `((,isym (array-row-major-index ,sym ,@(butlast (cddr form))))))))
       (let-wrap lets `(compiler::cmp-aset ,sym ,isym ,(car (last form))))))))

(si::putprop 'si::aset 'aset-expander 'si::compiler-macro-prop)
;FIXME -- test and install this and svref, CM 20050106
;(si::putprop 'svset 'aset-expander 'si::compiler-macro-prop)

(defun array-dimension-expander (form env)
  (declare (ignore env))
  (with-pulled-array
   (ar lets sym) form
   (let-wrap lets `(compiler::cmp-array-dimension ,sym ,(caddr form)))))

(si::putprop 'array-dimension 'array-dimension-expander 'si::compiler-macro-prop)

;; (defun do-list-search (test list &key (k1 nil k1p) key (item nil itemp) rev (ret nil retp) test-not ((:test foo)))
;;   (declare (ignore foo))
;;   (let* ((x (gens list))
;; 	 (rf (if retp `(funcall ,ret ,x) x))
;; 	 (el (if k1p `(funcall ,k1 ,rf) rf))
;; 	 (el (if key `(if ,key (funcall ,key ,el) ,el) el))
;; 	 (tf (if itemp `(funcall ,test ,(if rev el item) ,(if rev item el)) `(funcall ,test ,el)))
;; 	 (tf (if test-not `(not ,tf) tf))
;; 	 (tf (if retp `(and ,rf ,tf) tf))
;; 	 (ef `(or (endp ,x) ,tf)))
;; 	 `(do ((,x ,list (cdr ,x))) (,ef ,rf))))

;; (defun possible-eq-list-search (item list special-keys &rest r &key rev key (test ''eql testp) (test-not nil test-notp))
;;   (declare (ignore key rev));FIXME
;;   (let* ((test (cond ((and testp test-notp) `(or ,test ,test-not ''eql)) (test-notp test-not) (test)))
;; 	 (test (if (and (consp test) (eq (car test) 'function)) `(quote ,(cadr test)) test))
;; 	 (r `(,@special-keys ,@r)))
;;     (let ((form (apply 'do-list-search test list r)))
;;       (if (member :item special-keys)
;; 	  `(if (is-eq-test-item-list ,test ,item ,list ',r); (and (eq ,test 'eql) (eql-is-eq ,item ,test ,list))
;; 	       ,(apply 'do-list-search ''eq list r)
;; 	     ,form)
;; 	form))))

;(defmacro member-compiler-macro (&whole w &rest args)
;; (defun member-compiler-macro (w env &aux (args (cdr w))) (declare (ignore env))
;;   (if (or (< (length args) 2) (do ((r (cddr args) (cddr r))) ((not (and r (keywordp (car r)))) r)))
;;       w
;;     (let* ((syms (reduce (lambda (&rest r) 
;; 			   (when r 
;; 			     (if (inlinable-fn (cadr r))
;; 				 (car r) 
;; 			       `(,@(car r) (,(gensym) ,(cadr r))))))
;; 			 args :initial-value nil))
;; 	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
;; 					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
;; 	   (specials (if (member (car w) '(rassoc rassoc-if rassoc-if-not)) '(:k1 'cdr) '(:k1 'car)))
;; 	   (specials (if (member (car w) '(member assoc rassoc)) `(:item ,(car r) ,@specials) specials))
;; 	   (specials (if (member (car w) '(assoc assoc-if assoc-if-not rassoc rassoc-if rassoc-if-not)) 
;; 			 `(:ret 'car ,@specials) specials))
;; 	   (overrides (if (member (car w) '(member-if assoc-if rassoc-if)) `(:test ,(car r))))
;; 	   (overrides (if (member (car w) '(member-if-not assoc-if-not rassoc-if-not)) 
;; 			  `(:test-not ,(car r) ,@overrides) overrides)))
;;       `(let (,@syms)
;; 	 ,(apply 'possible-eq-list-search (car r) (cadr r) specials `(,@overrides ,@(cddr r)))))))

;; (si::putprop 'member 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'member-if 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'member-if-not 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'assoc 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'assoc-if 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'assoc-if-not 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'rassoc 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'rassoc-if 'member-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'rassoc-if-not 'member-compiler-macro 'si::compiler-macro-prop)

;(defmacro intersection-compiler-macro (&whole w &rest args)
;; (defun intersection-compiler-macro (w env &aux (args (cdr w))) (declare (ignore env))
;;   (if (or (< (length args) 2) (do ((r (cddr args) (cddr r))) ((not (and r (keywordp (car r)))) r)))
;;       w
;;     (let* ((syms (reduce (lambda (&rest r) 
;; 			   (when r 
;; 			     (if (inlinable-fn (cadr r))
;; 				 (car r) 
;; 			       `(,@(car r) (,(gensym) ,(cadr r))))))
;; 			 args :initial-value nil))
;; 	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
;; 					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
;; 	   (ks (cadr (member :key r)))
;; 	   (ans (gensym)) (l (gensym)) (z (gensym))
;; 	   (syms `(,@syms ,@(unless (eq (car w) 'subsetp) `((,ans ,(when (eq (car w) 'union) (cadr r))))))))
;;       `(let* (,@syms)
;; 	 (dolist (,l ,(car r) ,(if (eq (car w) 'subsetp) t ans))
;; 	   (let ((,z (if ,ks (funcall ,ks ,l) ,l)))
;; 	     (,(if (eq (car w) 'intersection) 'when 'unless) (member ,z ,(cadr r) ,@(cddr r)) 
;; 	       ,(if (eq (car w) 'subsetp) `(return nil) `(push ,l ,ans)))))))))
;; (si::putprop 'intersection 'intersection-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'union 'intersection-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'set-difference 'intersection-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'subsetp 'intersection-compiler-macro 'si::compiler-macro-prop)
	  
;(defmacro set-exclusive-or-compiler-macro (&whole w &rest args)
;; (defun set-exclusive-or-compiler-macro (w env &aux (args (cdr w))) (declare (ignore env))
;;   (if (or (< (length args) 2) (do ((r (cddr args) (cddr r))) ((not (and r (keywordp (car r)))) r)))
;;       w
;;     (let* ((syms (reduce (lambda (&rest r) 
;; 			   (when r 
;; 			     (if (inlinable-fn (cadr r))
;; 				 (car r) 
;; 			       `(,@(car r) (,(gensym) ,(cadr r))))))
;; 			 args :initial-value nil))
;; 	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
;; 					((car (rassoc x syms :key 'car :test 'equal))) (x))) args)))
;;       `(let* (,@syms)
;; 	 (nconc (set-difference ,(car r) ,(cadr r) ,@(cddr r))
;; 		(set-difference ,(cadr r) ,(car r) :rev t ,@(cddr r)))))))
;; (si::putprop 'set-exclusive-or 'set-exclusive-or-compiler-macro 'si::compiler-macro-prop)

;(defmacro mapcar-compiler-macro (&whole w &rest args)
;; (defun mapcar-compiler-macro (w env &aux (args (cdr w))) (declare (ignore env))
;;   (if (< (length args) 2) 
;;       w
;;     (let* ((syms (unless (inlinable-fn (car args)) `((,(gensym) ,(car args)))))
;; 	   (syms `(,@syms ,@(reduce (lambda (&rest r) 
;; 				      (when r 
;; 					`(,@(car r) (,(gensym) ,(cadr r)))))
;; 				    (cdr args) :initial-value nil)))
;; 	   (r (mapcar (lambda (x) (cond ((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
;; 	   (ans (gensym)) (l (gensym)) (tmp (gensym))
;; 	   (car (member (car w) '(mapcar mapcan mapc)))
;; 	   (fc `(funcall ,(car r) ,@(if car (mapcar (lambda (x) `(car ,x)) (cdr r)) (cdr r))))
;; 	   (accum (member (car w) '(mapcar maplist mapcan mapcon)))
;; 	   (cat (member (car w) '(mapcan mapcon)))
;; 	   (syms `(,@syms ,@(if accum `(,ans ,l) `((,ans ,(cadr r)))))))
;;       `(let* (,@syms)
;; 	 (do (,@(mapcar (lambda (x) `(,x ,x (cdr ,x))) (cdr r)))
;; 	     ((or ,@(mapcar (lambda (x) `(endp ,x)) (cdr r))) ,ans)
;; 	     ,(cond (cat `(setq ,l (let ((,tmp ,fc))
;; 			      (cond (,l (last (rplacd ,l ,tmp))) ((listp ,tmp) (last (setq ,ans ,tmp))) ((setq ,ans ,tmp))))))
;; 		    (accum `(setq ,l (let ((,tmp (cons ,fc nil)))
;; 			      (if ,l (cdr (rplacd ,l ,tmp)) (setq ,ans ,tmp)))))
;; 		    (fc)))))))
;; (si::putprop 'mapcar 'mapcar-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'maplist 'mapcar-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'mapc 'mapcar-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'mapl 'mapcar-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'mapcan 'mapcar-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'mapcon 'mapcar-compiler-macro 'si::compiler-macro-prop)
      
	   
;;start end count position
;; (defun do-sequence-search (fn vars &key (some nil somep) (dest nil destp) (newseq nil newseqp) sum pos start
;; 			      end count test test-not
;; 			      (item nil itemp) ret k1 (key nil keyp) rev not (iv nil ivp))
;;   (declare (ignore test not))
;;   (let* ((newseq (cmp-eval newseq))
;; 	 (ns newseq)
;; 	 (newseq (and newseqp (cond ((not newseq) :nil) 
;; 				    ((type>= #tlist (cmp-norm-tp newseq)) :list)
;; 				    ((type>= #tvector (cmp-norm-tp newseq)) :vector))))
;; 	 (gs (mapcar (lambda (x) (list (gensym) x)) vars))

;; 	 (l (gensym))
;; 	 (lf (mapcar (lambda (x) `(length ,x)) vars))
;; 	 (lf (if destp `((if (listp ,dest) (length ,dest) (array-dimension ,dest 0)) ,@lf) lf))
;; 	 (lf (if end `(,end ,@lf) lf))
;; 	 (lf (if (> (length lf) 1) (cons 'min lf) (car lf)))
;; 	 (lf (if (or pos start end (eq newseq :vector)) lf
;; 		     `(if (and ,@(when destp `((listp ,dest)))
;; 			       ,@(mapcar (lambda (x) `(listp ,x)) vars)) -1 ,lf)))
;; 	 (lf `((,l ,lf)))
;; 	 (i (gensym))

;; 	 (tf (mapcar (lambda (x) `(if (listp ,(cadr x)) (car ,(car x)) (aref ,(cadr x) ,i))) gs))
;; 	 (tf (if ret (mapcar (lambda (x) `(funcall ,ret ,x)) tf) tf))
;; 	 (tf (if k1 (mapcar (lambda (x) `(funcall ,k1 ,x)) tf) tf))
;; 	 (tf (if keyp (mapcar (lambda (x) `(funcall ,key ,x)) tf) tf))
;; 	 (first (car (if rev (last tf) tf)))
;; 	 (out (gensym))
;; 	 (lh (gensym))
;; 	 (sv (gensym))
;; 	 (sm (gensym))
;; 	 (fv (gensym))
;; 	 (p  (gensym))
;; 	 (cv  (gensym))
;; 	 (tmp  (gensym))
;; 	 (tf (if sum (cons sv tf) tf))
;; 	 (tf (if itemp (if (and (not sum) (= (length vars) 1)) (cons item tf) (baboon)) tf))
;; 	 (tf (if rev (nreverse tf) tf))
;; 	 (tf `(funcall ,fn ,@tf))
;; 	 (tf (if somep `(setq ,sm ,tf) tf))
;; 	 (tf (if test-not `(not ,tf) tf))

;; 	 (tf (if (and sum (not ivp)) (if (= (length vars) 1) `(if ,fv ,tf ,first) (baboon)) tf))

;; 	 (inf (mapcar (lambda (x) 
;; 			`(,(car x) ,(cadr x) (if (listp ,(cadr x)) (cdr ,(car x)) ,(car x)))) gs))
;; 	 (inf `((,i 0 ,@(if (or pos start end (eq newseq :vector)) `((+ ,i 1)) `((if (>= ,l 0) (+ ,i 1) ,i)))) ,@inf))

;; 	 (lf (if (eq newseq :vector) 
;; 		 `(,@lf (,out (make-array ,l 
;; 					  :fill-pointer ,l 
;; 					  :element-type ',(cmp-norm-tp (upgraded-array-element-type (si::sequence-type-element-type ns)))))) lf))
;; 	 (lf (if (or destp (eq newseq :list))
;; 		 `(,@lf (,p (when (listp ,dest) ,dest))) lf))
;; 	 (lf (if sum `(,@lf (,fv ,ivp) (,sv ,iv)) lf))
;; 	 (lf (if somep `(,@lf (,sm ,(not some))) lf))
;; 	 (lf (if count `(,@lf (,cv 0)) lf))
;; 	 (lf (if (eq newseq :list ) `(,@lf ,lh) lf))
;; 	 (inf (if (or destp (eq newseq :list)) 
;; 		  `((,p ,p (if (and (listp ,dest) ,(not (eq newseq :list))) (cdr ,p) ,p)) ,@inf) inf))
;; 	 (tf (cond (destp `(cond ((listp ,dest) (setf (car ,p) ,tf) nil)
;; 				 ((setf (aref ,dest ,i) ,tf) nil)))
;; 		   ((eq newseq :list) `(and (setq ,p (let ((,tmp (cons ,tf nil))) 
;; 						       (if ,p (cdr (rplacd ,p ,tmp))
;; 							 (setq ,lh ,tmp)))) nil))
;; 		   ((eq newseq :vector) `(and (setf (aref ,out ,i) ,tf) nil))
;; 		   ((eq newseq :nil) `(and ,tf nil))
;; 		   (sum `(progn (setq ,sv ,tf ,fv t) nil))
;; 		   (count `(progn (when ,tf (incf ,cv)) nil))
;; 		   (tf)))
;; 	 (tf (if start `(when (>= ,i ,start) ,tf) tf))
;; 	 (tf (if ret `(and (funcall ,ret ,(car vars)) ,tf) tf))
;; ;;FIXME the or problem if possible
;; 	 (ef `(= ,i ,l))
;; 	 (ef (if (or pos start end (eq newseq :vector)) ef `(and (>= ,l 0) ,ef)))
;; 	 (ef `(if ,ef t
;; 		,@(if (or pos start end (eq newseq :vector)) `(,tf)
;; 		    `(,(reduce (lambda (x y) `(if (and (listp ,(cadr x)) (endp ,(car x))) t ,y))
;; 			       `(,@(when destp `((,p ,dest))) ,@gs) :initial-value tf :from-end t)))))
;; 	 (rf (cond (destp dest) 
;; 		   ((eq newseq :nil) nil) 
;; 		   ((eq newseq :list) lh) 
;; 		   ((eq newseq :vector) out) 
;; 		   (sum `(if ,fv ,sv (funcall ,fn)))
;; 		   (count cv) 
;; 		   (pos `(unless (= ,i ,l) ,i))
;; 		   (somep (if some sm `(not ,sm)))
;; 		   ((let ((tmp (if end ;fixme
;; 				   `(unless (= ,i ,l) (if (listp ,(caar gs)) (car ,(caar gs)) (aref ,(caar gs) ,i)))
;; 				 `(if (listp ,(caar gs)) (car ,(caar gs)) (unless (= ,i ,l) (aref ,(caar gs) ,i))))))
;; 		      (if ret `(funcall ,ret ,tmp) tmp))))))

;;     `(let* ,lf  
;;        ,@(when count `((declare (seqind  ,cv))))
;;        ,@(when destp
;; 	   `((unless (listp ,dest) 
;; 	       (when (array-has-fill-pointer-p ,dest)
;; 		 (setf (fill-pointer ,dest) ,l)))))
;;        (do ,inf (,ef ,rf)(declare (seqind ,i))))))

;; (defun possible-eq-sequence-search (item seq special-keys &rest r 
;; 					 &key key start end (test ''eql testp) (test-not nil test-notp))
;;   (declare (ignore key start end testp));FIXME
;;   (let* ((test (if test-notp test-not test))
;; 	 (test (if (and (consp test) (eq (car test) 'function) (symbolp (cadr test))) `(quote ,(cadr test)) test))
;; 	 (r `(,@special-keys ,@r)))
;;     (let ((form (apply 'do-sequence-search test (list seq) r)))
;;       (if (member :item special-keys)
;; 	  `(if (is-eq-test-item-list ,test ,item ,seq ',r); FIXME
;; 	       ,(apply 'do-sequence-search ''eq (list seq) r)
;; 	     ,form)
;; 	form))))

(defmacro inlinable-fn (a) 
  `(or (constantp ,a) (and (consp ,a) (member (car ,a) '(function lambda)))))

;; (defconstant +seq-fn-key-list+ 
;;   '((find . (:item))
;;     (find-if . (:test))
;;     (find-if-not . (:test-not))
;;     (position . (:item (:pos t)))
;;     (position-if . (:test (:pos t)))
;;     (position-if-not . (:test-not (:pos t)))
;;     (count . (:item (:count t)))
;;     (count-if . (:test (:count t)))
;;     (count-if-not . (:test-not (:count t)))
;;     (some . (:test (:some t)))
;;     (notevery . (:test-not (:some nil)))))

;; ;(defmacro seq-compiler-macro (&whole w &rest args)
;; (defun seq-compiler-macro (w env &aux (args (cdr w))) (declare (ignore env))
;;   (if (or (< (length args) 2) 
;; 	  (do ((r (cddr args) (cddr r))) 
;; 	      ((not (and r (keywordp (car r)) (not (eq (car r) :from-end)))) r))
;; 	  (every (lambda (x) (member x (cddr args))) '(:test :test-not))
;; 	  (some (lambda (x) (not (inlinable-fn (cadr (member x (cddr args)))))) '(:key :test :test-not)))
;;       w
;;     (let* ((syms (reduce (lambda (&rest r) 
;; 			   (when r
;; 			     (if (inlinable-fn (cadr r)) (car r) `(,@(car r) (,(gensym) ,(cadr r))))))
;; 			 args :initial-value nil))
;; 	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
;; 					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
;; 	   (z (cdr (assoc (car w) +seq-fn-key-list+)))
;; 	   (specials `(,@(when (eq (car z) :item) `(:item ,(car r))) ,@(cadr z)))
;; 	   (overrides (unless (eq (car z) :item) `(,(car z) ,(car r))))
;; 	   (form (apply 'possible-eq-sequence-search (car r) (cadr r) specials `(,@overrides ,@(cddr r)))))
;;       `(let (,@syms)
;; 	 ,@(if (constantp (cadr r)) (list form)
;; 	     `((if (listp ,(cadr r))
;; 		 (let ((,(cadr r) ,(cadr r)))
;; 		   (declare (list ,(cadr r)))
;; 		   ,form)
;; 		   (let ((,(cadr r) ,(cadr r)))
;; 		     (declare (vector ,(cadr r)))
;; 		     ,form))))))))
;; (si::putprop 'find 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'find-if 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'find-if-not 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'position 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'position-if 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'position-if-not 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'count 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'count-if 'seq-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'count-if-not 'seq-compiler-macro 'si::compiler-macro-prop)
;(si::putprop 'some 'seq-compiler-macro 'si::compiler-macro-prop)
;(si::putprop 'notevery 'seq-compiler-macro 'si::compiler-macro-prop)

;(defmacro notany-compiler-macro (&rest args)
;; (defun notany-compiler-macro (form env)
;;   (declare (ignore env))
;;   `(not (some ,@(cdr form))))
;; (si::putprop 'notany 'notany-compiler-macro 'si::compiler-macro-prop)
;(defmacro every-compiler-macro (&rest args)
;; (defun every-compiler-macro (form env)
;;   (declare (ignore env))
;;   `(not (notevery ,@(cdr form))))
;; (si::putprop 'every 'every-compiler-macro 'si::compiler-macro-prop)

;; (defmacro maybe-with-syms-r (conditional (syms r args) &rest body)

;;   `(if ,condition
;;     (let* ((,syms (reduce (lambda (&rest r) 
;; 			   (when r 
;; 			     (if (inlinable-fn (cadr r))
;; 				 (car r) 
;; 			       `(,@(car r) (,(gensym) ,(cadr r))))))
;; 			 ,args :initial-value nil))
;; 	   (,r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
;; 					 ((car (rassoc x syms :key 'car :test 'equal))) (x))) args)))

;(defmacro map-into-compiler-macro (&whole w &rest args)
;; (defun map-into-compiler-macro (w env &aux (args (cdr w))) (declare (ignore env))
;;   (if (or (< (length args) 3) (and (eq (car w) 'map) (or (not (constantp (car args)))
;; 							 (let ((tp (cmp-norm-tp (cmp-eval (car args)))))
;; 							   (or 
;; 							    (not (type>= #tsequence tp))
;; 							    (eq 'error (si::sequence-type-element-type tp)))))))
;;       w
;;     (let* ((syms (reduce (lambda (&rest r) 
;; 			   (when r 
;; 			     (if (inlinable-fn (cadr r))
;; 				 (car r) 
;; 			       `(,@(car r) (,(gensym) ,(cadr r))))))
;; 			 args :initial-value nil))
;; 	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
;; 					((car (rassoc x syms :key 'car :test 'equal))) (x))) args)))
;;       `(let ,syms
;; 	 ,(do-sequence-search (cadr r) (cddr r) (if (eq (car w) 'map) :newseq :dest) (car r))))))
;; (si::putprop 'map      'map-into-compiler-macro 'si::compiler-macro-prop)
;; (si::putprop 'map-into 'map-into-compiler-macro 'si::compiler-macro-prop)

;; (defun maybe-reduce-lambda-wrap (lm)
;;   (cond ((atom lm) lm)
;; 	((eq (car lm) 'function) `(function ,(maybe-reduce-lambda-wrap (cadr lm))))
;; 	((and (eq (car lm) 'lambda) (not (member (caadr lm) '(&optional &rest))))
;; 	 (let ((x (gensym))(y (gensym))(xp (gensym)))
;; 	   `(lambda (&optional (,x nil ,xp) ,y) (declare (ignorable ,x ,y ,xp)) (when ,xp (funcall ,lm ,x ,y)))))
;; 	(lm)))

;; ;(defmacro reduce-compiler-macro (&whole w &rest args)
;; (defun reduce-compiler-macro (w env &aux (args (cdr w))) (declare (ignore env))
;;   (if (or (< (length args) 2) 
;; 	  (do ((r (cddr args) (cddr r))) 
;; 	      ((not (and r (keywordp (car r)) (not (eq (car r) :from-end)))) r))
;; 	  (not (inlinable-fn (cadr (member :key (cddr args))))))
;;       w
;;     (let* ((syms (reduce (lambda (&rest r) 
;; 			   (when r (if (inlinable-fn (cadr r)) (car r) `(,@(car r) (,(gensym) ,(cadr r))))))
;; 			 args :initial-value nil))
;; 	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
;; 					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
;; 	   (fn (maybe-reduce-lambda-wrap (car r)))
;; 	   (form (apply 'do-sequence-search fn (list (cadr r)) `( :sum t ,@(substitute :iv :initial-value (cddr args))))))
;;       `(let ,syms
;; 	 ,@(if (constantp (cadr r)) (list form)
;; 	     `((if (listp ,(cadr r))
;; 		 (let ((,(cadr r) ,(cadr r)))
;; 		   (declare (list ,(cadr r)))
;; 		   ,form)
;; 		 (let ((,(cadr r) ,(cadr r)))
;; 		   (declare (vector ,(cadr r)))
;; 		   ,form))))))))
;; (si::putprop 'reduce 'reduce-compiler-macro 'si::compiler-macro-prop)


(defun and-compiler-macro (form env)
  (declare (ignore env))
  (cond ((endp (cdr form)))
	((endp (cddr form)) (cadr form))
	((cmp-macroexpand form))))
;	(`(if ,(cadr form) ,(and-compiler-macro `(and ,@(cddr form)) nil)))))
(si::putprop 'and 'and-compiler-macro 'si::compiler-macro-prop)
	   
(defun or-compiler-macro (form env)
  (declare (ignore env))
  (cond ((endp (cdr form)) nil)
	((endp (cddr form)) (cadr form))
	((cmp-macroexpand form))))
;	((let ((s (gensym))) `(let ((,s ,(cadr form))) (if ,s ,s ,(or-compiler-macro `(or ,@(cddr form)) nil)))))))
(si::putprop 'or 'or-compiler-macro 'si::compiler-macro-prop)

;(defconstant +basic-inlines+ '(every some notevery notsome reduce
;				     elt reverse nreverse nth nreconc nconc last gensym nthcdr endp length remove remove-if remove-if-not))
(defvar *basic-inlines* nil)

(defun c1comment (args)
  (list 'comment (make-info :type nil) (with-output-to-string (s) (princ (car args) s))))
(defun c2comment (comment)
  (wt-nl "/*" comment "*/"))
(si::putprop 'comment 'c1comment 'c1)
(si::putprop 'comment 'c2comment 'c2)

;(defvar *src-hash* (make-hash-table :test 'eq))

(defun assert-safety (forms)
  (dolist (form (cddr forms))
    (cond ((stringp form))
	  ((and (consp form) (eq (car form) 'declare))
	   (dolist (decl (cdr form))
	     (cond ((atom decl))
		   ((when (eq (car decl) 'optimize) (setq decl (cadr decl)) nil))
		   ((eq (car decl) 'safety) (setf (cadr decl) (this-safety-level))))))
	  ((return nil)))))

(defun c1inline (args)
  (let ((nargs (c1expr (cadr args))))
    (list 'inline (cadr nargs) (with-output-to-string (s) (princ (car args) s)) nargs)))
(defun c2inline (comment expr)
  (wt-nl "/*" comment "*/")
  (c2expr expr)
  (wt-nl "/* END " comment "*/"))
(si::putprop 'inline 'c1inline 'c1)
(si::putprop 'inline 'c2inline 'c2)

(defun c1size (form)
  (cond ((atom form) 0)
	((1+ (+ (c1size (car form)) (c1size (cdr form)))))))


(defvar *inline-forms* nil)

(defun copy-vars (form)
  (cond ((var-p form) (setf (var-store form) (var-kind form)))
;	(list (var-kind form) (var-ref form) (var-ref-ccb form) (var-loc form)
;						   (var-type form))))
	((atom form))
	(t (copy-vars (car form)) (copy-vars (cdr form)))))

(defun set-vars (form)
  (cond ((var-p form) (setf (var-kind form) (var-store form)
;			    (var-ref form) (cadr (var-store form))
;			    (var-ref-ccb form) (caddr (var-store form))
;			    (var-loc form) (cadddr (var-store form))
;			    (var-type form) (fifth (var-store form))
			    ))
	((atom form))
	(t (set-vars (car form)) (set-vars (cdr form)))))

(defun global-ref-p (form)
  (cond ((and (var-p form) (member (var-kind form) '(global special))))
	((atom form) nil)
	((or (global-ref-p (car form)) (global-ref-p (cdr form))))))

(defun closure-p (form)
  (and (eq (car form) 'function)
       (eq (caaddr form) 'lambda)
       (or (do-referred (s (cadr (caddr form)))
			(unless (member s (caaddr (caddr form))) (return t)))
	   (global-ref-p form))))

(defun vv-p (form)
  (cond ((atom form) nil)
	((and (eq (car form) 'location) (listp (caddr form)) 
	      (or (eq (caaddr form) 'vv)
		  (and (member (caaddr form) '(fixnum-value character-value long-float-value short-float-value fcomplex-value dcomplex-value))
		       (cadr (caddr form))))))
	((or (vv-p (car form)) (vv-p (cdr form))))))

;;FIXME
(dolist (l '(coerce constantly complement open load delete-package import compile compile-file
		  error cerror warn break get-setf-method make-list))
  (si::putprop l t 'cmp-no-src-inline))

(defvar *prop-hash* (make-hash-table :test 'equal))
(defvar *src-inline-recursion* nil)

(defun src-inlineable (form)
  (let ((n (car form)))
    (and (symbolp n)
	 (not (get n 'cmp-no-src-inline))
	 (fboundp n)
	 (or (si::src n) (si::interpreted-function-p (symbol-function n)))
	 (not (eq n (cadr *src-inline-recursion*)))
	 (or (inline-asserted n)
	     (multiple-value-bind (s k) (find-symbol (symbol-name n) 'lisp) 
				  (when s (eq k :external)))))))

(defun mark-for-hash-inlining (fms)
  (let ((i 0)
	(c1t (c1t))
	(c1nil (c1nil)))
    (mapl (lambda (x) 
	    (when (car x)
	      (when (or (eq (car x) c1t) (eq (car x) c1nil)) 
		(setf (car x) (list (caar x) (copy-info (cadar x)) (caddar x))))
	      (setf (info-unused1 (cadar x)) (incf i)))) fms)))

(defun inline-hasheable (form fms c1)
  (let ((cp (member-if 'closure-p fms))
	(vvp (vv-p (if (eq (car (fourth c1)) 'let*) (cddddr (fourth c1)) c1)))
	(rec (and (boundp '*recursion-detected*) (eq *recursion-detected* t))))
    (when cp (cmpnote "not hashing ~s due to closure~%" form))
    (when vvp (cmpnote "not hashing ~s due to vv objs~%" form))
    (when rec (cmpnote "not hashing ~s due to recursion~%" form))
    (not (or cp vvp rec))))

(defun calc-inline-h (form prop fms)
  (let* ((fn (car form))
	 (args (cdr form))
	 (last (car (last fms)))
	 (args (if last (butlast args) args))
	 (la   (when last (car (last form))))
	 (src (si::function-src fn))
	 (src (blla (cadr src) args la (cddr src)))) ;(if (stringp (caddr src)) (cdddr src) (cddr src)))))
    (assert-safety src) 
    (let* ((*inline-forms* (mapcar 'cons (cdr form) fms))
	   (*src-inline-recursion* (cons fn *src-inline-recursion*))
;	   (c1 (c1expr `(inline ,form ,src)))
	   (c1 (c1inline (list form src)))
	   (sz (c1size c1)))
      (copy-vars c1)
      (let ((res (list c1 sz (info-type (cadr c1)))))
	(when (inline-hasheable form fms c1) 
	  (setf (gethash prop *prop-hash*) res))
	(if (acceptable-inline res form (cddr prop)) res (cons nil (cdr res)))))))

(defun match-c1forms (ofs fms)
  (mapcar (lambda (x) 
	    (or (car (member (info-unused1 (cadr x)) fms 
			     :key (lambda (x) (when x (info-unused1 (cadr x)))))) x)) ofs))

(defun get-inline-h (form prop fms)

  (let ((h (gethash prop *prop-hash*)))

    (when h

      (unless (acceptable-inline h form (cddr prop))
	(return-from get-inline-h (cons nil (cdr h))))

      (let* ((f (car h))
	     (ofs (when (eq (car (fourth f)) 'let*) (fourth (fourth f))))
	     (oi (cadr f))
	     (info (make-info))
	     (n (caddr f))
	     (nfs (match-c1forms ofs fms)))

	(set-vars f)
	(setf (info-type info) (info-type oi))
	(dolist (l nfs) (add-info info (cadr l)))

	(cons
	 (sublis (list (cons oi info) 
		       (cons ofs nfs) 
		       (cons n (with-output-to-string (s) (princ form s)))) f)
	 (cdr h))))))
  

(defun acceptable-inline (h form tpis)
  (let* ((c1 (car h))
	 (sz (cadr h))
	 (d (and c1
		 (inline-possible (car form))
		 (or (< sz (* 1000 (- 3 (max 0 *space*))))
		     (and (< *space* 3) (member-if (lambda (x) (and (atomic-tp (car x)) (functionp (cadar x)))) tpis))))))
    (if d 
	(cmpnote "inlining ~s ~s~%" form (not (not h)))
      (cmpnote "not inlining ~s ~s ~s ~s~%" form sz (* 1000 (- 3 (max 0 *space*))) tpis))
    d))

(defun maybe-inline (form c1forms &optional last &aux (*in-inline* t))
  (when (and (not *compiler-new-safety*) (> *speed* 0) (src-inlineable form))
    (let* ((fms (append c1forms (list last)))
	   (tpis (mapcar (lambda (x) (when x (cons (info-type (cadr x)) (ignorable-form x)))) fms))
	   (prop (cons (car form) (cons (this-safety-level) tpis))))

      (mark-for-hash-inlining fms)

      (let ((h (or (get-inline-h  form prop fms) 
		   (calc-inline-h form prop fms))))
	(values (car h) (caddr h))))))


;; (defun maybe-inline (form c1forms &optional last &aux (*in-inline* t))
;;   (let* ((ac (or (inline-asserted (car form))
;; 		 (multiple-value-bind (s k) (find-symbol (symbol-name (car form)) 'lisp) 
;; 				      (when s (eq k :external)))))
;; 	 (ac (when ac (< *space* 3)))
;; 	 (ac (unless (get (car form) 'cmp-no-src-inline) ac))
;; 	 (ac (unless (eq (car form) (cadr *src-inline-recursion*)) ac))
;; ;	 (callees (when ac (si::callees (car form))))
;; 	 (ac (when ac (inline-possible (car form)))));FIXME
;; ;	 (ac (when (and callees (or (eq (car form) 'mapl) (not (member (car form) callees))) (inline-possible (car form))) t)));FIXME
;;     (when ac 
;;       (let ((i 0))
;; 	(mapl (lambda (x) 
;; 		(when (or (eq (car x) (c1t)) (eq (car x) (c1nil))) 
;; 		  (setf (car x) (list (caar x) (copy-info (cadar x)) (caddar x))))
;; 		(setf (info-unused1 (cadar x)) (incf i))) c1forms)
;; 	(when last
;; 	  (when (or (eq last (c1t)) (eq last (c1nil))) 
;; 	    (setf last (list (car last) (copy-info (cadr last)) (caddr last))))
;; 	  (setf (info-unused1 (cadr last)) (incf i))))
;;       (let* ((tpis (nconc (mapcar (lambda (x) (cons (info-type (cadr x)) (ignorable-form x))) c1forms) 
;; 			  (list (when last (cons (info-type (cadr last)) (ignorable-form last))))))
;; 	     (prop (cons (car form) tpis))
;; 	     (h (when *hash-inlines* (gethash prop *prop-hash*))) c1 sz)
;; 	(cond (h 
;; 	       (let* ((f (car h))
;; 		      (ofs (when (eq (car (fourth f)) 'let*) (fourth (fourth f))))
;; 		      (oi (cadr f))(info (make-info))(n (caddr f)) nfs)
;; 		 (setq nfs (mapcar (lambda (x) 
;; 				     (or (car (member (info-unused1 (cadr x)) c1forms
;; 						      :key (lambda (x) (info-unused1 (cadr x)))))
;; 					 (when (and last (= (info-unused1 (cadr x)) (info-unused1 (cadr last))))
;; 					   last)
;; 					 x)) ofs))
;; 		 (assert (= (length nfs) (length ofs)))
;; 		 (assert (eq oi (cadr (fourth f))))
;; 		 (assert (eq (car f) 'inline))
;; 		 (set-vars f)
;; 		 (setf (info-type info) (info-type oi))
;; 		 (dolist (l nfs) (add-info info (cadr l)))
;; 		 (setq c1 (sublis (list (cons oi info) 
;; 					(cons ofs nfs) 
;; 					(cons n (with-output-to-string (s) (princ form s)))) f)
;; 		       sz (cadr h))))
;; 	      ((let ((src (si::function-src (car form)))) 
;; 		 (when src 
;; 		   (let* ((args (if last (butlast (cdr form)) (cdr form)))
;; 			  (la (when last (car (last form))))
;; 			  (src (blla (cadr src) args la (cddr src)))) ;(if (stringp (caddr src)) (cdddr src) (cddr src)))))
;; 		     (assert-safety src) 
;; 		     (let* ((*inline-forms* (if last (mapcar 'cons (cdr form) (append c1forms (list last)))
;; 					      (mapcar 'cons (cdr form) c1forms)))
;; 			    (*src-inline-recursion* (cons (car form) *src-inline-recursion*)))
;; 		       (setq c1 (c1expr `(inline ,form ,src)))
;; 		       (setq sz (c1size c1))
;; 		       (copy-vars c1)
;; 		       (let ((cp (member-if 'closure-p c1forms))
;; 			     (vvp (vv-p (if (eq (car (fourth c1)) 'let*) (cddddr (fourth c1)) c1)))
;; 			     (rec (and (boundp '*recursion-detected*) (eq *recursion-detected* t))))
;; 			 (when cp (cmpnote "not hashing ~s due to closure~%" form))
;; 			 (when vvp (cmpnote "not hashing ~s due to vv objs~%" form))
;; 			 (when rec (cmpnote "not hashing ~s due to recursion~%" form))
;; 			 (setf (gethash `(,(car form) ,@(mapcar 'car tpis)) *tp-prop-hash*) (info-type (cadr c1)))
;; 			 (unless (or cp vvp rec)
;; 			   (setf h (list c1 sz c1forms) (gethash prop *prop-hash*) h)))))))))
;; 	(cond ((and c1
;; 		    (or (< sz (* 1000 (- 3 (max 0 *space*))))
;; 			(member-if (lambda (x) (and (atomic-tp (car x)) (functionp (cadar x)))) tpis)))
;; 	       (cmpnote "inlining ~s ~s~%" form (not (not h)))
;; 	       c1)
;; 	      ((cmpnote "not inlining ~s ~s ~s ~s~%" form sz (* 1000 (- 3 (max 0 *space*))) tpis) nil))))))


;; (defvar *prop-hash* (make-hash-table :test 'equal))

;; (defun maybe-inline (form tps &aux (*in-inline* t))
;;   (let* ((ac (multiple-value-bind (s k) (find-symbol (string (car form)) 'lisp) (when s (eq k :external))))
;; 	 (ac (when ac (zerop *space*)))
;; 	 (ac (when ac (not (member (car form) '(typep warn break error cerror coerce compile-file get-setf-method make-list)))))
;; 	 (ac (when ac (not (gethash (cons (car form) tps) *prop-hash*))))
;; 	 (callees (when ac (si::callees (car form))))
;; 	 (src (when (and callees (not (member (car form) callees)) (inline-possible (car form))) 
;; 		(si::function-src (car form)))))
;;     (when src 
;;       (let ((src (bll (cadr src) (cdr form) (if (stringp (caddr src)) (cdddr src) (cddr src)))))
;; 	(assert-safety src)
;; 	(let* ((c1 (c1expr `(inline ,form ,src)))
;; 	       (sz (c1size c1)))
;; 	  (cond ((or (< sz (* 1000 (- 3 (max 0 *space*))))
;; 		     (member-if (lambda (x) (and (atomic-tp x) (functionp (cadr x)))) tps))
;; 		 (cmpnote "inlining ~s~%" (car form))
;; 		 c1)
;; 		((let ((prop (cons (car form) tps)))
;; 		   (unless (gethash prop *prop-hash*)
;; 		     (setf (gethash prop *prop-hash*) (list (info-type (cadr c1)) sz))
;; 		     nil)))))))))

;; (defun maybe-inline (form env)
;;   (declare (ignore env))
;;   (let ((src (when (inline-possible (car form)) (si::function-src (car form)))))
;;     (if (not src) form 
;; 	(let ((src (bll (cadr src) (cdr form) (if (stringp (caddr src)) (cdddr src) (cddr src)))))
;; 	  (assert-safety src)
;; 	  `(inline ,form ,src)))))

(defun bind-all-vars-int (form nf bindings)
  (cond ((null form)
	 (list bindings (nreverse nf)))
	((consp (car form))
	 (let ((lwf (bind-all-vars-int (cdar form) (list (caar form)) bindings)))
	   (bind-all-vars-int (cdr form) (cons (cadr lwf) nf) (car lwf))))
	(t
	 (let* ((sym (if (symbolp (car form)) (cdr (assoc (car form) bindings)) (car form)))
		(bindings (if sym bindings (cons (cons (car form) (gensym)) bindings)))
		(sym (or sym (cdar bindings))))
	   (bind-all-vars-int (cdr form) (cons sym nf) bindings)))))

(defun bind-all-vars (form)
  (if (atom form) form
    (let ((res (bind-all-vars-int (cdr form) (list (car form)) nil)))
      (if (car res)
	  (list 'let* (mapcar (lambda (x) (list (cdr x) (car x))) (nreverse (car res)))
		(cadr res))
	(cadr res)))))


(defun if-protect-fun-inf (form env)
  (declare (ignore env))
  (cons (car form)
	(cons (cadr form)
	      (cons (bind-all-vars (caddr form))
		    (if (cadddr form) (list (bind-all-vars (cadddr form))))))))
		
;FIXME find a better way to avoid expander recursion
(defconstant +cmp-fn-alist+ '(;(cmp-nthcdr . nthcdr)
			      ;(cmp-nth . nth)
			      (cmp-aref . row-major-aref)
			      (cmp-aset . si::aset1)
			      (cmp-array-dimension . array-dimension)))
(defvar *in-inline* nil)
(defvar *callees* nil)

(defun c1symbol-fun (fname args &aux fd)
  (values
   (cond ((setq fd (get fname 'c1special)) (funcall fd args))
	 ((and (setq fd (get fname 'co1special))
	       (funcall fd fname args)))
	 ((setq fd (c1local-fun fname))
	  (if (eq (car fd) 'call-local)
	      ;; c1local-fun now adds fun-info into (cadr fd), so we need no longer
	      ;; do it explicitly here.  CM 20031030
	      (let* ((info (add-info (make-info :type (info-type (cadr fd)) :sp-change 1) (cadr fd)))
		     (forms (c1args args info)))
		(let ((return-type (get-local-return-type (caddr fd))))
		  (when return-type (setf (info-type info) return-type)))
		(let ((arg-types (get-local-arg-types (caddr fd))))
                       ;;; Add type information to the arguments.
		  (when arg-types
		    (let ((fl nil))
		      (dolist** (form forms)
				(cond ((endp arg-types) (push form fl))
				      (t (push (and-form-type
						(car arg-types) form
						(car args))
					       fl)
					 (unless (eq '* (car arg-types)) (pop arg-types))
					 (pop args))))
		      (setq forms (reverse fl)))))
		(list 'call-local info (cddr fd) forms))
	    (c1expr (cmp-expand-macro fd fname args))))
	 ((let ((fn (get fname 'si::compiler-macro-prop)) (res (cons fname args)))
	    (and fn
		 (not (member fname *notinline*))
		 (let ((fd (funcall fn res nil)));(cmp-eval `(funcall ',fn ',res nil))))
		   (and (not (eq res fd))
			(c1expr fd))))))
	 ((when (and *compiler-auto-proclaim*
		     (not *in-inline*)
		     (not (macro-function fname))
		     (not (eq fname 'comment))
		     (member (first *current-form*) '(defun))
		     (symbolp (second *current-form*))
		     (symbol-package (second *current-form*)))
	    (let ((fname (or (cdr (assoc fname +cmp-fn-alist+)) fname)))
	      (pushnew (cons fname (list (mapcar 'export-type (get-arg-types fname)) (export-type (get-return-type fname))))
		       *callees* :test (lambda (x y) (eq (car x) (car y)))))
	    nil))
	 ((and (get fname 'c1no-side-effects) 
	       (not (member fname '(min max)));FIXME
	       (not (member-if-not 'constantp args)))
	  (c1expr `(quote ,(cmp-eval `(,fname ,@args)))))
	 ((and (setq fd (get fname 'co1))
	       (inline-possible fname)
	       (funcall fd fname args)))
	 ((and (setq fd (get fname 'c1)) (inline-possible fname))
	  (funcall fd args))
	 ((and (setq fd (get fname 'c1g)) (inline-possible fname))
	  (funcall fd fname args))
	 ((and (setq fd (get fname 'c1conditional))
	       (inline-possible fname)
	       (funcall (car fd) args))
	  (funcall (cdr fd) args))
	 ;; record the call info if we get to here
	 ((progn
	    (and (eq (symbol-package fname) (symbol-package 'and))
		 (not (fboundp fname))
		 (cmpwarn "~A (in lisp package) is called as a function--not yet defined"
			  fname))
	    (and *record-call-info* (record-call-info 'record-call-info
						      fname))
	    nil))
	 ;;continue
	 ((setq fd (macro-function fname))
	  (c1expr (cmp-expand-macro fd fname args)))
	 ((and (setq fd (get fname 'si::structure-access))
	       (inline-possible fname)
              ;;; Structure hack.
	       (consp fd)
	       (si:fixnump (cdr fd))
	       (not (endp args))
	       (endp (cdr args)))
	  (case (car fd)
		(vector (c1expr `(elt ,(car args) ,(cdr fd))))
		(list (c1expr `(si:list-nth ,(cdr fd) ,(car args))))
		(t (c1structure-ref1 (car args) (car fd) (cdr fd)))
		)
	  )
	 ((eq fname 'si:|#,|)
	  (cmperr "Sharp-comma-macro was found in a bad place."))
	 (t (let* ((info (make-info :type #t* :sp-change (if (null (get fname 'no-sp-change)) 1 0)))
		   (args (if (and (member fname '(funcall apply))
				  (consp (car args))
				  (eq (caar args) 'quote)
				  (symbolp (cadar args)))
			     `((function ,(cadar args)) ,@(cdr args))
			   args))
		   (forms (c1args args info))) ;; info updated by args here
	      (let* ((return-type (get-return-type 
				   (case fname 
					 ((funcall apply) 
					  (and (consp (car args)) (eq (caar args) 'function) (cadar args))) 
					 (otherwise fname))))
		     (return-type (unless (and (eq (second *current-form*) fname)
					       (not (eq *recursion-detected* 'block))
					       (setq *recursion-detected* t))
				    return-type)))
		(setf (info-type info) return-type))
	      (when (do (p (a (get-arg-types fname) (if (eq '* (car a)) a (cdr a)))
			 n (r args (cdr r))
			   (f forms (cdr f)))
			((or p (endp f) (endp a)) (or p f (and a (not (eq (car a) '*))) 
						      (when (setq forms (nreverse n)) nil)))
			(check-form-type (car a) (car f) (car r))
			(push (and-form-type (or (car a) '*) (car f) (car r)) n)
			(setq p (null (info-type (cadar n)))))
		(setf (info-type info) nil)
		(return-from c1symbol-fun (list 'call-global info fname forms)))
		
	      (when (eq fname 'rplacd)
		(dolist (v *vars*)
		  (when (var-p v) 
		    (when (type>= #tproper-cons (var-type v)) 
		      (do-setq-tp v nil #tcons)))))
	      
	      ;; some functions can have result type deduced from
	      ;; arg types.
	      (multiple-value-bind 
	       (res tp) (maybe-inline (cons fname args) forms)
	       (or res
		   (let* ((tps (mapcar (lambda (x) (coerce-to-one-value (info-type (cadr x)))) forms))
			  (tem (or tp (result-type-from-args fname tps))))
		     (when tem
		       (setf (info-type info) (type-and tem (info-type info))))
		     (list 'call-global info fname forms)))))))))


;; (defun c1symbol-fun (fname args &aux fd)
;;   (values
;;    (cond ((setq fd (get fname 'c1special)) (funcall fd args))
;; 	 ((and (setq fd (get fname 'co1special))
;; 	       (funcall fd fname args)))
;; 	 ((setq fd (c1local-fun fname))
;; 	  (if (eq (car fd) 'call-local)
;; 	      ;; c1local-fun now adds fun-info into (cadr fd), so we need no longer
;; 	      ;; do it explicitly here.  CM 20031030
;; 	      (let* ((info (add-info (make-info :sp-change 1) (cadr fd)))
;; 		     (forms (c1args args info)))
;; 		(let ((return-type (get-local-return-type (caddr fd))))
;; 		  (when return-type (setf (info-type info) return-type)))
;; 		(let ((arg-types (get-local-arg-types (caddr fd))))
;;                        ;;; Add type information to the arguments.
;; 		  (when arg-types
;; 		    (let ((fl nil))
;; 		      (dolist** (form forms)
;; 				(cond ((endp arg-types) (push form fl))
;; 				      (t (push (and-form-type
;; 						(car arg-types) form
;; 						(car args))
;; 					       fl)
;; 					 (unless (eq '* (car arg-types)) (pop arg-types))
;; 					 (pop args))))
;; 		      (setq forms (reverse fl)))))
;; 		(list 'call-local info (cddr fd) forms))
;; 	    (c1expr (cmp-expand-macro fd fname args))))
;; 	 ((let ((fn (get fname 'si::compiler-macro-prop)) (res (cons fname args)))
;; 	    (and fn
;; 		 (not (member fname *notinline*))
;; 		 (let ((fd (funcall fn res nil)));(cmp-eval `(funcall ',fn ',res nil))))
;; 		   (and (not (eq res fd))
;; 			(c1expr fd))))))
;; 	 ((when (and *compiler-auto-proclaim*
;; 		     (not *in-inline*)
;; 		     (not (macro-function fname))
;; 		     (not (eq fname 'comment))
;; 		     (member (first *current-form*) '(defun))
;; 		     (symbolp (second *current-form*))
;; 		     (symbol-package (second *current-form*)))
;; 	    (let ((fname (or (cdr (assoc fname +cmp-fn-alist+)) fname)))
;; 	      (pushnew (cons fname (list (mapcar 'export-type (get-arg-types fname)) (export-type (get-return-type fname))))
;; 		       *callees* :test (lambda (x y) (eq (car x) (car y)))))
;; 	    nil))
;; 	 ((and (get fname 'c1no-side-effects) (not (member-if-not 'constantp args)))
;; 	  (c1expr `(quote ,(cmp-eval `(,fname ,@args)))))
;; 	 ((and (setq fd (get fname 'co1))
;; 	       (inline-possible fname)
;; 	       (funcall fd fname args)))
;; 	 ((and (setq fd (get fname 'c1)) (inline-possible fname))
;; 	  (funcall fd args))
;; 	 ((and (setq fd (get fname 'c1g)) (inline-possible fname))
;; 	  (funcall fd fname args))
;; 	 ((and (setq fd (get fname 'c1conditional))
;; 	       (inline-possible fname)
;; 	       (funcall (car fd) args))
;; 	  (funcall (cdr fd) args))
;; 	 ;; record the call info if we get to here
;; 	 ((progn
;; 	    (and (eq (symbol-package fname) (symbol-package 'and))
;; 		 (not (fboundp fname))
;; 		 (cmpwarn "~A (in lisp package) is called as a function--not yet defined"
;; 			  fname))
;; 	    (and *record-call-info* (record-call-info 'record-call-info
;; 						      fname))
;; 	    nil))
;; 	 ;;continue
;; 	 ((setq fd (macro-function fname))
;; 	  (c1expr (cmp-expand-macro fd fname args)))
;; 	 ((and (setq fd (get fname 'si::structure-access))
;; 	       (inline-possible fname)
;;               ;;; Structure hack.
;; 	       (consp fd)
;; 	       (si:fixnump (cdr fd))
;; 	       (not (endp args))
;; 	       (endp (cdr args)))
;; 	  (case (car fd)
;; 		(vector (c1expr `(elt ,(car args) ,(cdr fd))))
;; 		(list (c1expr `(si:list-nth ,(cdr fd) ,(car args))))
;; 		(t (c1structure-ref1 (car args) (car fd) (cdr fd)))
;; 		)
;; 	  )
;; 	 ((eq fname 'si:|#,|)
;; 	  (cmperr "Sharp-comma-macro was found in a bad place."))
;; 	 (t (let* ((info (make-info :type #t* :sp-change (if (null (get fname 'no-sp-change)) 1 0)))
;; 		   (args (if (and (member fname '(funcall apply))
;; 				  (consp (car args))
;; 				  (eq (caar args) 'quote)
;; 				  (symbolp (cadar args)))
;; 			     `((function ,(cadar args)) ,@(cdr args))
;; 			   args))
;; 		   (forms (c1args args info))) ;; info updated by args here
;; 	      (let* ((return-type (get-return-type 
;; 				   (case fname 
;; 					 ((funcall apply) 
;; 					  (and (consp (car args)) (eq (caar args) 'function) (cadar args))) 
;; 					 (otherwise fname))))
;; 		     (return-type (unless (and (eq (second *current-form*) fname)
;; 					       (not (eq *recursion-detected* 'block))
;; 					       (setq *recursion-detected* t))
;; 				    return-type)))
;; 		(setf (info-type info) return-type))
;; 	      (let ((arg-types (get-arg-types fname)))
;;                      ;;; Add type information to the arguments.
;; 		(when arg-types
;; 		  (do ((fl forms (cdr fl))
;; 		       (fl1 nil)
;; 		       (al args (cdr al)))
;; 		      ((endp fl)
;; 		       (setq forms (nreverse fl1)))
;; 		      (cond ((endp arg-types) (push (car fl) fl1))
;; 			    (t (push (and-form-type (car arg-types)
;; 						    (car fl)
;; 						    (car al))
;; 				     fl1)
;; 			       (unless (eq '* (car arg-types)) (pop arg-types)))))));;FIXME!!!!
;; 	      (let ((arg-types (get fname 'arg-types)))
;;                      ;;; Check argument types.
;; 		(when arg-types
;; 		  (do ((fl forms (cdr fl))
;; 		       (al args (cdr al)))
;; 		      ((or (endp arg-types) (endp fl)))
;; 		      (check-form-type (car arg-types)
;; 				       (car fl) (car al))
;; 		      (pop arg-types))))
;; 	      ;; some functions can have result type deduced from
;; 	      ;; arg types.
;; 	      (let ((tps (mapcar (lambda (x) (coerce-to-one-value (info-type (cadr x)))) forms)))
;; 		(or (maybe-inline (cons fname args) forms)
;; 		    (let ((tem (result-type-from-args fname tps)))
;; 		      (when tem
;; 			(setq tem (type-and tem (info-type info)))
;; 			(setf (info-type info) tem))
;; 		      (when (member-if-not 'identity tps) (setf (info-type info) nil))
;; 		      (list 'call-global info fname forms)))))))))

(defun replace-constant (lis &aux found tem)
  (do ((v lis (cdr v)))
      ((null v)  found)
      (cond ((and (constantp (car v))
		  (or (numberp (setq tem(eval (car v))))
		      (characterp tem)))
	     (setq found t) (setf (car v) tem)))))

(defun remove-doc-string (body)
  (nconc (do (d doc) ((or (not body) (if (stringp (car body)) 
					 (or (endp (cdr body)) doc)
				       (or (not (consp (car body))) (not (eq 'declare (caar body))))))
		      (nreverse d))
	     (let ((x (pop body))) (if (stringp x) (unless doc (push x doc)) (push x d)))) body))
  

(defun blla (l a last body)
  (let (r k rb rv lvp)
    (do ((l l) (a a))
	((not l) `(let* ,(nreverse r) ,@(remove-doc-string body)))
      (cond ((let ((z (member (car l) '(&optional &rest &key &allow-other-keys &aux)))) (when z (setq k z))) (pop l))
	    ((when last (unless a (push (list (setq lvp (gensym)) last) r) (setq last nil))))
	    ((not k) (push (list (pop l) (cond (a (pop a)) (lvp `(pop ,lvp)))) r))
	    ((eq (car k) '&optional)
	     (let ((l (pop l)) (ap a) (a (when a (pop a))))
	       (cond ((consp l) 
		      (when (caddr l) (push (list (caddr l) (cond (ap t) (lvp `(when ,lvp t)))) r))
		      (push (list (car l) (cond (ap a) (lvp `(if ,lvp (pop ,lvp) ,(cadr l))) ((cadr l)))) r))
		     ((push (list l (cond (ap a) (lvp `(pop ,lvp)))) r)))))
	    ((unless rb 
	       (setq rb (mapcar (lambda (x) (car (push (list (gensym) x) r))) a))
	       (when last (push (list (setq lvp (gensym)) last) r) (setq last nil))))
	    ((eq (car k) '&rest)
	     (push (list (setq rv (pop l)) (let ((r (mapcar 'car rb))) (if lvp `(list* ,@r ,lvp) `(list ,@r)))) r))
	    ((eq (car k) '&allow-other-keys))
	    ((eq (car k) '&key)
	     (let* ((l (pop l))
		    (ln (if (consp l) (car l) l))
		    (lb (if (consp ln) (cadr ln) ln))
		    (ln (if (consp ln) (car ln) ln))
		    (lnk (intern (string ln) 'keyword))
		    (v (let (r) (do ((rb rb (cddr rb))) 
				    ((not rb) (nreverse r))
				  (push (list (caar rb) (caadr rb)) r)))))
	       (when (and (consp l) (caddr l)) (push (list (caddr l) t) r))
	       (push (list lb `(cond ,@(mapcar (lambda (x) `((eq ,(car x) ,lnk) ,(cadr x))) v)
				     ,@(when lvp `(((cadr (member ,lnk ,lvp)))))
				     ,@(when (consp l) `((t ,@(when (caddr l) `((setq ,(caddr l) nil))) ,(cadr l)))))) r)))
	    ((eq (car k) '&aux)
	     (let ((l (pop l)))
	       (if (consp l)  (push (list (car l) (cadr l)) r) (push l r))))))))

(defmacro bll (l a body)
  `(blla ,l ,a nil ,body))

(defun c1funcallable-symbol-function (args)
  (let* ((info (make-info :type #tfunction))
	 (nargs (c1args args info)))
    (cond ((atomic-tp (info-type (cadar nargs)))
	   (c1expr `(function ,(let ((val (cadr (info-type (cadar nargs))))) 
				 (if (symbolp val) val (or (si::function-name val) (function-lambda-expression val)))))))
	  ((list 'call-global info 'funcallable-symbol-function nargs)))))
(si::putprop 'funcallable-symbol-function 'c1funcallable-symbol-function 'c1)

(defun c1lambda-fun (lambda-expr args &aux (info (make-info :sp-change 1)) (cle (car lambda-expr)))
  (or (let ((bll (bll cle args (if (stringp (cadr lambda-expr)) (cddr lambda-expr) (cdr lambda-expr)))))
	(when bll (c1expr bll)))
      
      (progn 
	(setq args (c1args args info))
	(setq lambda-expr (c1lambda-expr lambda-expr))
	(add-info info (cadr lambda-expr))
	(list 'call-lambda info lambda-expr args))))

(defun c2expr (form)
  (values
   (if (eq (car form) 'call-global)
       (c2call-global (caddr form) (cadddr form) nil  (info-type (cadr form)))
     (if (or (eq (car form) 'let)
	     (eq (car form) 'let*))
	 (let ((*volatile* (volatile (cadr form))))
	   (declare (special *volatile*))
	   (apply (get (car form) 'c2) (cddr form)))
       (let ((tem (get (car form) 'c2)))
	 (cond (tem (apply tem (cddr form)))
	       ((setq tem (get (car form) 'wholec2))
		(funcall tem form))
	       (t (baboon))))))))

(defun c2funcall-sfun (fn args info &aux  locs (all (cons fn args))) info
  (let ((*inline-blocks* 0))
    (setq locs (get-inline-loc
		(list (make-list (length all) :initial-element t)
		      t #.(flags ans set) 'fcalln-inline) all))
    (unwind-exit locs)
    (close-inline-blocks)))

(defun c2expr* (form)
  (let* ((*exit* (next-label))
         (*unwind-exit* (cons *exit* *unwind-exit*)))
        (c2expr form)
        (wt-label *exit*))
  )

(defun c2expr-top (form top &aux (*vs* 0) (*max-vs* 0) (*level* (1+ *level*))
                                 (*reservation-cmacro* (next-cmacro)))
  (wt-nl "{register object *base" (1- *level*) "=base;")
  (base-used)
  (wt-nl "{register object *base=V" top ";")
  (wt-nl "register object *sup=vs_base+VM" *reservation-cmacro* ";")
  ;;; Dummy assignments for lint
  (wt-nl "base" (1- *level*) "[0]=base" (1- *level*) "[0];")
  (wt-nl "base[0]=base[0];")
  (if *safe-compile*
      (wt-nl "vs_reserve(VM" *reservation-cmacro* ");")
      (wt-nl "vs_check;"))
  (let ((cm *reservation-cmacro*))
    (if (zerop *max-vs*)
	(wt-h "#define VMR" cm "(VMT" cm ") return(VMT" cm ");")
      (wt-h "#define VMR" cm "(VMT" cm ") vs_top=base ; return(VMT" cm ");")))
  (wt-nl) (reset-top)
  (c2expr form)
  (push (cons *reservation-cmacro* *max-vs*) *reservations*)
  (wt-nl "}}")
  )

(defun c2expr-top* (form top)
  (let* ((*exit* (next-label))
         (*unwind-exit* (cons *exit* *unwind-exit*)))
        (c2expr-top form top)
        (wt-label *exit*)))

(defun c1progn (forms &aux (fl nil))
  (cond ((endp forms) (c1nil))
        ((endp (cdr forms)) (c1expr (car forms)))
        ((let ((info (make-info)))
	   (dolist (form forms)
	     (setq form (c1expr form))
	     (push form fl)
	     (add-info info (cadr form)))
	   (setf (info-type info) (info-type (cadar fl)))
	   (list 'progn info (reverse fl))))))
;(defun c1progn (forms &aux (fl nil))
;  (let ((info (make-info)))
;    (dolist (form forms)
;      (setq form (c1expr form))
;      (push form fl)
;      (add-info info (cadr form)))
;    (unless fl (push (c1nil) fl))
;    (setf (info-type info) (info-type (cadar fl)))
;    (list 'progn info (reverse fl))))

;;; Should be deleted.
(defun c1progn* (forms info)
  (setq forms (c1progn forms))
  (add-info info (cadr forms))
  forms)

(defun c2progn (forms)
  ;;; The length of forms may not be less than 1.
  (do ((l forms (cdr l)))
      ((endp (cdr l))
       (c2expr (car l)))
      (declare (object l))
      (let* ((*value-to-go* 'trash)
             (*exit* (next-label))
             (*unwind-exit* (cons *exit* *unwind-exit*)))
            (c2expr (car l))
            (wt-label *exit*)
            ))
  )

(defun c1args (forms info)
  (mapcar #'(lambda (form) (c1expr* form info)) forms))

;;; Structures

(defun c1structure-ref (args)
  (if (and (not *safe-compile*)
	   (not (endp args))
           (not (endp (cdr args)))
           (consp (cadr args))
           (eq (caadr args) 'quote)
           (not (endp (cdadr args)))
           (symbolp (cadadr args))
           (endp (cddadr args))
           (not (endp (cddr args)))
           (si:fixnump (caddr args))
           (endp (cdddr args)))
      (c1structure-ref1 (car args)  (cadadr args) (caddr args))
      (let ((info (make-info)))
        (list 'call-global info 'si:structure-ref (c1args args info)))))

(defun c1structure-ref1 (form name index &aux (info (make-info)))
  ;;; Explicitly called from c1expr and c1structure-ref.
  (cond (*safe-compile* (c1expr `(si::structure-ref ,form ',name ,index)))
	((let* ((sd (get name 'si::s-data))
		(aet-type (aref (si::s-data-raw sd) index))
		(sym (find-symbol (si::string-concatenate
				   (si::s-data-conc-name sd)
				   (car (nth index (si::s-data-slot-descriptions sd))))))
		(tp (if sym (get-return-type sym) '*))
		(tp (type-and tp (nth aet-type +cmp-array-types+)))) 

	   (setf (info-type info) (if (and (eq name 'si::s-data) (= index 2));;FIXME -- this belongs somewhere else.  CM 20050106
				      #t(vector unsigned-char)
				      tp))
	   (list 'structure-ref info
		 (c1expr* form info)
		 (add-symbol name)
		 index sd)))))

(defun coerce-loc-structure-ref (arg type-wanted &aux (form (cdr arg)))
  (let* ((sd (fourth form))
	 (index (caddr form)))
    (cond (sd
	    (let* ((aet-type (aref (si::s-data-raw sd) index))
		   (type (nth aet-type +cmp-array-types+)))
	      (cond ((eq (inline-type (type-filter type)) 'inline)
		     (or (= aet-type +aet-type-object+) (error "bad type ~a" type))))
	      (setf (info-type (car arg)) (type-filter type))
	      (coerce-loc
		      (list (inline-type
			     (type-filter type))
		           (flags)
			    'my-call
			    (list
			     (car
			      (inline-args (list (car form))
					   '(t)))
			     'joe index sd))
		      (type-filter type-wanted)))
		)
	  (t (wfs-error)))))


(defun c2structure-ref (form name-vv index sd
                             &aux (*vs* *vs*) (*inline-blocks* 0))
  (let ((loc (car (inline-args (list form) '(t))))
	(type (nth (aref (si::s-data-raw sd) index) +cmp-array-types+)))
       (unwind-exit
	 (list (inline-type (type-filter type))
			  (flags) 'my-call
			  (list  loc  name-vv
				 index sd))))
  (close-inline-blocks)
  )


(defun my-call (loc name-vv ind sd) name-vv
  (let* ((raw (si::s-data-raw sd))
	 (spos (si::s-data-slot-position sd)))
    (if *compiler-push-events* (wfs-error)
      (wt "STREF("  (aet-c-type (nth (aref raw ind) +cmp-array-types+) )
	  "," loc "," (aref spos ind) ")"))))


(defun c1structure-set (args &aux (info (make-info)))
  (if (and (not (endp args)) (not *safe-compile*)
           (not (endp (cdr args)))
           (consp (cadr args))
           (eq (caadr args) 'quote)
           (not (endp (cdadr args)))
           (symbolp (cadadr args))
           (endp (cddadr args))
           (not (endp (cddr args)))
           (si:fixnump (caddr args))
           (not (endp (cdddr args)))
           (endp (cddddr args)))
      (let ((x (c1expr (car args)))
            (y (c1expr (cadddr args))))
        (add-info info (cadr x))
        (add-info info (cadr y))
        (setf (info-type info) (info-type (cadr y)))
        (list 'structure-set info x
              (add-symbol (cadadr args)) ;;; remove QUOTE.
              (caddr args) y (get (cadadr args) 'si::s-data)))
      (list 'call-global info 'si:structure-set (c1args args info))))


;; The following (side-effects) exists for putting at the end of an
;; argument list to force all previous arguments to be stored in
;; variables, when computing inline-args.


(push '(() t #.(flags ans set) "Ct")  (get 'side-effects  'inline-always))

(defun c2structure-set (x name-vv ind y sd 
                          &aux locs (*vs* *vs*) (*inline-blocks* 0))
  name-vv
  (let* ((raw (si::s-data-raw sd))
  (type (nth (aref raw ind) +cmp-array-types+))
  (spos (si::s-data-slot-position sd))
  (tftype (type-filter type))
  ix iy)

   (setq locs (inline-args
        (list x y (list 'call-global (make-info) 'side-effects nil))
        (if (eq type t) '(t t t)
   `(t ,tftype t))))

  (setq ix (car locs))
  (setq iy (cadr locs))
  (if *safe-compile* (wfs-error))
  (wt-nl "STSET(" (aet-c-type type )","
    ix "," (aref spos ind) ", " iy ");")
  (unwind-exit (list (inline-type tftype) (flags) 'wt-loc (list iy)))
  (close-inline-blocks)
  ))

(defun sv-wrap (x) `(symbol-value ',x))

(defun c1constant-value (val always-p &aux (info (make-info :type (object-type val))))
;							    :referred-array +empty-info-array+
;							    :changed-array +empty-info-array+)))
  (cond
   ((eq val nil) (c1nil))
   ((eq val t) (c1t))
   ((si:fixnump val)
    (list 'LOCATION info (list 'FIXNUM-VALUE (unless (si::seqindp val) (add-object val)) val)))
   ((characterp val)
    (list 'LOCATION info (list 'CHARACTER-VALUE nil (char-code val))))
   ((typep val 'long-float)
    ;; We can't read in long-floats which are too big:
    (let* (sc 
	   (vv 
	    (cond ((= val +inf) (add-object (cons 'si::|#,| `(symbol-value ','+inf))));This cannot be a constant list
		  ((= val -inf) (add-object (cons 'si::|#,| `(symbol-value ','-inf))))
		  ((not (isfinite val)) (add-object (cons 'si::|#,| `(symbol-value ','nan))))
		  ((> (abs val) (/ most-positive-long-float 2))
		   (add-object (cons 'si::|#,| `(* ,(/ val most-positive-long-float) most-positive-long-float))))
		  ((< (abs val) (* least-positive-long-float 1.0d20))
		   (add-object (cons `si::|#,| `(* ,(/ val least-positive-long-float) least-positive-long-float))))
		  ((setq sc t) (add-object val)))))
;      (unless (isfinite val) (setf (info-type info) #tlong-float))
      `(location ,info ,(if sc `(long-float-value ,vv ,val) `(vv ,vv)))))
   ((typep val 'short-float)
    (list 'LOCATION info
          (list 'SHORT-FLOAT-VALUE (add-object val) val)))
   ((typep val #tfcomplex)
    (list 'LOCATION info
          (list 'FCOMPLEX-VALUE (add-object val) val)))
   ((typep val #tdcomplex)
    (list 'LOCATION info
          (list 'DCOMPLEX-VALUE (add-object val) val)))
   ((and (consp val) (eq (car val) 'si::|#,|))
    (setf (info-type info) (object-type (cmp-eval (cdr val))))
    (list 'LOCATION info (list 'VV (add-object val))))
   ((and *compiler-compile* (not *keep-gaz*))
    (setf (info-type info) (object-type val))
    (list 'LOCATION info (list 'VV (add-object (cons 'si::|#,| `(si::nani ,(si::address val)))))))
   ((and (arrayp val) (not (si::staticp val)) (eq (array-element-type val) t)) ;; This must be readable
    (list 'LOCATION info (list 'VV (add-object val))))
   (always-p
    (list 'LOCATION info (list 'VV (add-object val))))))

;; (defun c1constant-value (val always-p)
;;   (cond
;;    ((eq val nil) (c1nil))
;;    ((eq val t) (c1t))
;;    ((si:fixnump val)
;;     (list 'LOCATION (make-info :type (cmp-norm-tp (list 'integer val val))) ;;FIXME -- 1024 should be small fixnum limit
;;           (list 'FIXNUM-VALUE (and (>= (abs val) 1024)(add-object val))
;; 		val)))
;;    ((characterp val)
;;     (list 'LOCATION (make-info :type #tcharacter)
;;           (list 'CHARACTER-VALUE (add-object val) (char-code val))))
;;    ((typep val 'long-float)
;;     ;; We can't read in long-floats which are too big:
;;     (let* (sc 
;; 	   (vv 
;; 	    (cond ((= val +inf) (add-object (cons 'si::|#,| `(symbol-value ','+inf))));This cannot be a constant list
;; 		  ((= val -inf) (add-object (cons 'si::|#,| `(symbol-value ','-inf))))
;; 		  ((not (isfinite val)) (add-object (cons 'si::|#,| `(symbol-value ','nan))))
;; 		  ((> (abs val) (/ most-positive-long-float 2))
;; 		   (add-object (cons 'si::|#,| `(* ,(/ val most-positive-long-float) most-positive-long-float))))
;; 		  ((< (abs val) (* least-positive-long-float 1.0d20))
;; 		   (add-object (cons `si::|#,| `(* ,(/ val least-positive-long-float) least-positive-long-float))))
;; 		  ((setq sc t) (add-object val)))))
;;       `(location ,(make-info :type (cmp-norm-tp (if (isfinite val) `(long-float ,val ,val) 'long-float)))
;; 		 ,(if sc `(long-float-value ,vv ,val) `(vv ,vv)))))
;;    ((typep val 'short-float)
;;     (list 'LOCATION (make-info :type (cmp-norm-tp `(short-float ,val ,val)))
;;           (list 'SHORT-FLOAT-VALUE (add-object val) val)))
;;    ((and (consp val) (eq (car val) 'si::|#,|))
;;     (list 'LOCATION (make-info :type (object-type (cmp-eval (cdr val))))
;;           (list 'VV (add-object val))))
;;    ((and (arrayp val) (not (si::staticp val)) (eq (array-element-type val) t)) ;; This must be readable
;;     (list 'LOCATION (make-info :type (object-type val))
;;           (list 'VV (add-object val))))
;;    (always-p
;;     (list 'LOCATION (make-info :type (if (typep val #t(or number symbol character function)) (cmp-norm-tp `(eql ,val)) (object-type val)));FIXME
;;           (list 'VV (add-object val))))
;;    (t nil)))

(defmacro si::define-compiler-macro (name vl &rest body)
  (declare (optimize (safety 1)))
  (if (is-setf-function name)
      `(progn (si::putprop ',(cadr name)
			   (caddr (si:defmacro* ',(cadr name) ',vl ',body))
			   'si::compiler-macro-prop-setf)
	      ',name)
    `(progn (si:putprop ',name
			(caddr (si:defmacro* ',name ',vl ',body))
			'si::compiler-macro-prop)
	    ',name)))

(defun si::compiler-macro-function (name)
  (if (is-setf-function name)
      (get (cadr name) 'si::compiler-macro-prop-setf)
    (get name 'si::compiler-macro-prop)))

(defun si::undef-compiler-macro (name)
  (if (is-setf-function name)
      (remprop (cadr name) 'si::compiler-macro-prop-setf)
    (remprop name 'si::compiler-macro-prop)))

(defvar *compiler-temps*
        '(tmp0 tmp1 tmp2 tmp3 tmp4 tmp5 tmp6 tmp7 tmp8 tmp9))

(defmacro si:define-inline-function (name vars &body body)
  (let ((temps nil)
        (*compiler-temps* *compiler-temps*))
    (dolist (var vars)
      (if (and (symbolp var)
               (not (member var '(&optional &rest &key &aux))))
          (push (or (pop *compiler-temps*)
                    (gentemp "TMP" (find-package 'compiler)))
                temps)
          (error "The parameter ~s for the inline function ~s is illegal."
                 var name)))
    (let ((binding (cons 'list (mapcar
                                #'(lambda (var temp) `(list ',var ,temp))
                                vars temps))))
      `(progn
         (defun ,name ,vars ,@body)
         (si:define-compiler-macro ,name ,temps
           (list* 'let ,binding ',body))))))

(defun name-to-sd (x &aux sd)
  (or (and (symbolp x) (setq sd (get x 'si::s-data)))
      (error "The structure ~a is undefined." x))
  sd)

;; lay down code for a load time eval constant.
(defun name-sd1 (x)
  (or  (get x 'name-to-sd)
      (setf (get x 'name-sd)
	    `(si::|#,| name-to-sd ',x))))

(defun co1structure-predicate (f args &aux tem)
  (cond ((and (symbolp f)
	      (setq tem (get f 'si::struct-predicate)))
	 (c1expr `(typep ,(car args) ',tem)))))


;;New C ffi
;
(defun strcat (&rest r)
  (declare (:dynamic-extent r))
  (apply 'concatenate 'string (mapcar 'string-downcase r)))

(defmacro defdlfun ((crt name &optional (lib "")) &rest tps)
  (let* ((sym  (mdlsym name lib))
	 (symi (intern (strcat sym "-INLINE") 'compiler))
	 (dls  (strcat "DL" name))
	 (args (mapcar (lambda (x) (declare (ignore x)) (gensym)) tps))
	 (cast (strcat crt "(*)(" 
		       (apply 'strcat (maplist (lambda (x) (strcat (car x) (if (cdr x) "," ")"))) tps)))))
  `(progn
     (mdlsym ,name ,lib)
     (defun ,symi ,args
       (add-dladdress ,dls ',sym)
       (wt "((" ,cast ")" ,dls ")(")
       ,@(maplist (lambda (x y) (let ((p (search "*" (string (car y)))))
				  `(wt ,(if p (strcat "(" (car y) ")") "")
				       ,(car x) 
				       ,(if p "->v.v_self" "")
				       ,(if (cdr x) "," ")")))) args tps))
     (push '(,(mapcar (lambda (x) (get x 'lisp-type)) tps) ,(get crt 'lisp-type) ,(flags rfa) ,symi) 
	   (get ',sym 'inline-always))
     (defun ,sym ,args
       (declare (optimize (safety 1)))
       ,@(mapcar (lambda (x y) `(check-type ,x ,(get y 'lisp-type))) args tps)
       (box ,crt
	  (addr-call (cstr ,cast)
		     (unbox :address (symbol-value ',sym))
		     ,@(mapcar (lambda (x y) `(unbox ,x ,y)) tps args)))))))

(defun c1cstr (args) (list 'location (make-info) (list 'cstr (car args))))
(si::putprop 'cstr 'c1cstr 'c1)
(defun wt-cstr (str) (wt str))
(si::putprop 'cstr 'wt-cstr 'wt-loc)


(defun c1clines (args)
  (list 'clines (make-info :type nil) (with-output-to-string (s) (princ (car args) s))))
(defun c2clines (clines)
  (wt-nl clines))
(si::putprop 'clines 'c1clines 'c1)
(si::putprop 'clines 'c2clines 'c2)

