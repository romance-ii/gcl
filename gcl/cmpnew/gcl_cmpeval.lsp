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

(import 'si::+array-types+ 'compiler)
(import 'si::+aet-type-object+ 'compiler)

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
                    (or (c1constant-value val nil)
                        (list 'LOCATION (make-info :type (object-type val))
                              (list 'VV (add-constant form))))))
                 (t (c1var form))))
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

(defun wrap-literals (form)
  (cond ((and (consp form) (eq (car form) 'quote))
	 (let ((x (cadr form)))
	   (if (and (symbolp x)
		    (eq :external (cadr (multiple-value-list (find-symbol (symbol-name x) 'lisp)))))
	       form
	     `(load-time-value (si::nani ,(si::address x))))))
	((consp form)
	 (cons (wrap-literals (car form)) (wrap-literals (cdr form))))
	((or (symbolp form) (rationalp form) (characterp form))
	 form)
	(`(load-time-value (si::nani ,(si::address form))))))


(defun c1load-time-value (arg)
  (c1constant-value
   (cons 'si:|#,|
	 (if *compiler-compile*
	     (let ((x (cmp-eval (car arg))))
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
	 (inline-types-function itf)))          ;; car of ii is a function returning match info
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
    (unless (typep (car a ) 'fixnum)
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
  (when (not (eq '* (get f 'return-type))) ;;FIXME  make sure return-type and proclaimed-return-type are in sync
    (let* ((be (get f 'type-propagator))
	   (ba (and be (si::dt-apply be (cons f (mapcar 'coerce-to-one-value args))))));FIXME
      (when ba
	(return-from result-type-from-args ba)))
    (dolist (v '(inline-always inline-unsafe))
      (let* ((w (get f v)))
	(if (and w (symbolp (caar w)) (flag-p (third (car w)) itf))
	    (return-from result-type-from-args (cadr (apply (caar w) args)))
	  (dolist (w w)
	    (fix-opt w)
	    (when (and
		   (flag-p (third w) result-type-from-args)
		   (= (length args) (length (car w)))
		   (do ((a args (cdr a)) (b (car w) (cdr b)))
		       ((null a) t)
		       (unless (and (car a) (car b)
				    (or  (eq (car a) (car b))
					 (type>= (car b) (car a))))
			 (return nil))))
	      (return-from result-type-from-args (second w)))))))))
	

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

(si::putprop '* (function binary-nest) 'si::compiler-macro-prop)
(si::putprop '+ (function binary-nest) 'si::compiler-macro-prop)

(si::putprop 'logand (function binary-nest) 'si::compiler-macro-prop)
(si::putprop 'logior (function binary-nest) 'si::compiler-macro-prop)
(si::putprop 'logxor (function binary-nest) 'si::compiler-macro-prop)

(si::putprop 'max (function binary-nest) 'si::compiler-macro-prop)
(si::putprop 'min (function binary-nest) 'si::compiler-macro-prop)

(si::putprop 'gcd (function binary-nest) 'si::compiler-macro-prop)
(si::putprop 'lcm (function binary-nest) 'si::compiler-macro-prop)

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

(si::putprop '- (function invert-binary-nest) 'si::compiler-macro-prop)
(si::putprop '/ (function invert-binary-nest) 'si::compiler-macro-prop)

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

(si::putprop '> (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop '>= (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop '< (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop '<= (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop '= (function logical-binary-nest) 'si::compiler-macro-prop)

(si::putprop 'char> (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop 'char>= (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop 'char< (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop 'char<= (function logical-binary-nest) 'si::compiler-macro-prop)
(si::putprop 'char= (function logical-binary-nest) 'si::compiler-macro-prop)

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

(si::putprop '/= (function logical-outer-nest) 'si::compiler-macro-prop)
(si::putprop 'char/= (function logical-outer-nest) 'si::compiler-macro-prop)

(setf (symbol-function 'cmp-nthcdr) (symbol-function 'nthcdr))
(defun nthcdr-expander (form env)
  (declare (ignore env))
  (if (= (length form) 3)
      (let* ((non (inlinable-fn (cadr form))) ;;FIXME, we need to centralize things like this
	     (n (if non (cadr form) (gensym))) (l (gensym)))
	`(let (,@(unless non `((,n ,(cadr form)))) (,l ,(caddr form)))
	   (if (typep ,n 'seqind);;FIX typep inference to branch types outside of +type-alist+
	       (cmp-nthcdr ,n ,l)
	     (cmp-nthcdr ,n ,l))))
    form))
(si::putprop 'nthcdr 'nthcdr-expander 'si::compiler-macro-prop)

(setf (symbol-function 'cmp-nth) (symbol-function 'nth))
(defun nth-expander (form env)
  (declare (ignore env))
  `(car (nthcdr ,@(cdr form))))
(si::putprop 'nth 'nth-expander 'si::compiler-macro-prop)

(defun incr-to-plus (form env)
  (declare (ignore env))
  `(+ ,(cadr form) 1))

(defun decr-to-minus (form env)
  (declare (ignore env))
  `(- ,(cadr form) 1))

(si::putprop '1+ (function incr-to-plus) 'si::compiler-macro-prop)
(si::putprop '1- (function decr-to-minus) 'si::compiler-macro-prop)

(defun reverse-expander (form env)
  (declare (ignore env))
  (let ((x (gensym)) (i (gensym)) (s (gensym)))
    `(let ((,s ,(cadr form)))
       (if (typep ,s 'vector)
	   (let ((,x (make-array (length ,s) :element-type (cmp-array-element-type ,s))))
	     (do ((,i 0 (1+ ,i))) ((= ,i (length ,s)) ,x)
		 (declare (seqind ,i))
		 (setf (aref ,x (1- (- (length ,s) ,i))) (aref ,s ,i))))
	 (let (,x)
	   (do ((,s ,s (cdr ,s))) ((endp ,s) ,x)
	       (setq ,x (cons (car ,s) ,x))))))))
(si::putprop 'reverse (function reverse-expander) 'si::compiler-macro-prop)

(defun cmp-vec-length (x)
  (declare (vector x))
  (if (array-has-fill-pointer-p x) (fill-pointer x) (array-dimension x 0)))

(defmacro with-var-form-type ((v f tp) &rest body)
  ``(let ((,,v ,,f))
     ,@(when *compiler-check-args* `((check-type ,,v ,,tp)))
     (let ((,,v ,,v))
       (declare (,,tp ,,v))
       ,,@body)))

(defun elt-expander (form env)
  (declare (ignore env))
  (let ((i (gensym)) (s (gensym)))
    (with-var-form-type 
     (s (cadr form) 'sequence)
     (with-var-form-type 
      (i (caddr form) 'seqind)
      `(if (listp ,s) (nth ,i ,s) (aref ,s ,i))))))
(si::putprop 'elt (function elt-expander) 'si::compiler-macro-prop)


(defun length-expander (form env)
  (declare (ignore env))
  (let ((i (gensym)) (s (gensym)))
    (with-var-form-type (s (cadr form) 'sequence)
     `(the seqind ;FIXME
	  (if (listp ,s)	
	      (do ((,i 0 (1+ ,i)) (,s ,s (cdr ,s))) ((endp ,s) ,i)
		  (declare (seqind ,i)))
	    (let ((,s ,s)) ;;FIXME should be automatic co1typep
	      (cmp-vec-length ,s)))))))
(si::putprop 'length (function length-expander) 'si::compiler-macro-prop)

(defun endp-expander (form env)
  (declare (ignore env))
  (let ((x (gensym)))
    `(let ((,x ,(cadr form)))
       (cond ((not ,x) t);;Cannot infer the type of x below without the t 
	     ,@(when *compiler-check-args* 
		 `(((consp ,x) nil)
		   ((error 'type-error :datum ,x :expected-type 'list))))))));;cannot continue
(si::putprop 'endp (function endp-expander) 'si::compiler-macro-prop)
  
(defun garef (a i l)
  (let ((ff `(aref ,a ,i)))
    (if l `(car ,ff) ff)))

(defun qsl-fun (l p k list)
  (let ((ll (gensym)) (a (gensym)) (fi (gensym)) (ls (gensym)) (lf (gensym)) (rt (gensym))
	(sp (gensym)) (spi (gensym)) (s (gensym)) (ii (gensym)))
    `(let* ((,ll (length ,l))
	    (,a ,(if list `(make-array ,ll) l)));FIXME default?
       ,(when list `(declare ((vector t) ,a)))
       ,(when list `(do ((,fi 0 (1+ ,fi)) (,l ,l (cdr ,l))) ((= ,fi ,ll))
	   (declare (seqind ,fi))
	   (setf (aref ,a ,fi) ,l)))
       (let* ((,ii (make-array 1024 :element-type 'non-negative-fixnum :adjustable t))
	      (,s 2))
	 (declare (seqind ,s) ((vector seqind) ,ii));FIXME (adjust-array
	 (setf (aref ,ii 0) 0 (aref ,ii 1) ,ll)
	 (do () ((= ,s 0))
	     (let* ((,ls (aref ,ii (decf ,s))) (,fi (aref ,ii (decf ,s))))
	       (declare (seqind ,ls ,fi));FIXME setq
	       (do () ((>= ,fi (1- ,ls)))
		   (rotatef ,(garef a fi list) ,(garef a `(+ ,fi (truncate (- ,ls ,fi) 2)) list))
		   (let* ((,spi ,fi)
			  (,sp (funcall ,k ,(garef a spi list))))
		     (declare (seqind ,spi))
		     (do ((,lf ,fi) (,rt ,ls)) ((>= ,lf ,rt))
			 (declare (seqind ,lf ,rt))
			 (do () ((or (>= (incf ,lf) ,rt)
				     (not (funcall ,p (funcall ,k ,(garef a lf list)) ,sp)))))
			 (do () ((or (>= ,lf (decf ,rt)) 
				     (funcall ,p (funcall ,k ,(garef a rt list)) ,sp))))
			 (when (< ,lf ,rt)
			   (rotatef ,(garef a lf list) ,(garef a rt list)))
			 (setq ,spi (1- ,lf)))
		     (rotatef ,(garef a fi list) ,(garef a spi list))
		     (if (< (- ,ls ,spi) (- ,spi ,fi))
			 (let ((,lf (1+ ,spi)))
			   (when (> (- ,ls ,lf) 1)
			     (when (>= ,s (1- (length ,ii)))
			       (setq ,ii (adjust-array ,ii (ash (length ,ii) 1))))
			     (setf (aref ,ii ,s) ,lf (aref ,ii (incf ,s)) ,ls ,s (1+ ,s)))
			   (setq ,ls ,spi))
		       (let ((,rt ,spi))
			 (when (> (- ,rt ,fi) 1)
			   (when (>= ,s (1- (length ,ii)))
			     (setq ,ii (adjust-array ,ii (ash (length ,ii) 1))))
			   (setf (aref ,ii ,s) ,fi (aref ,ii (incf ,s)) ,rt ,s (1+ ,s)))
			 (setq ,fi (1+ ,spi)))))))))
       ,l)))

(defun qsort-expander (form env) ;l p k
  (declare (ignore env))
  (if (or (not (consp (caddr form)))
	  (not (member (caaddr form) '(function lambda quote)))
	  (and (cdddr form) 
	       (or (not (eq :key (cadddr form)))
		   (not (consp (fifth form)))
		   (not (member (car (fifth form)) '(function lambda quote))))))
      form
    (let ((seq (gensym)))
      `(let ((,seq ,(cadr form)))
	 (if (typep ,seq 'vector)
	     (let ((,seq ,seq))
	       (declare (vector ,seq))
	       ,(qsl-fun seq (caddr form) (if (cdddr form) (fifth form) ''identity) nil))
	   (let ((,seq ,seq))
	     (declare (list ,seq))
	     ,(qsl-fun seq (caddr form) (if (cdddr form) (fifth form) ''identity) t)))))))
(si::putprop 'sort (function qsort-expander) 'si::compiler-macro-prop)

(defun mheap (a r b key p)
  (let ((block (gensym)) (j (gensym)) (k (gensym)) (k1 (gensym)) (kk (gensym)) (kk1 (gensym)) (x (gensym)))
    `(block
      ,block
      (do ((,j ,r) (,k (ash ,r 1))) ((>= ,k ,b))
	  (declare (seqind ,j ,k))
	  (let ((,kk (funcall ,key (car (aref ,a ,k)))))
	    (unless (= ,k (1- ,b))
	      (let* ((,k1 (1+ ,k))
		     (,kk1 (funcall ,key (car (aref ,a ,k1)))))
		(when (funcall ,p ,kk ,kk1)
		  (setq ,kk ,kk1 ,k ,k1))))
	    (let ((,x (car (aref ,a ,j))))
	      (if (funcall ,p (funcall ,key ,x) ,kk)
		(setf (car (aref ,a ,j)) (car (aref ,a ,k))
		      (car (aref ,a ,k)) ,x
		      ,j ,k
		      ,k (ash ,j 1))
		  (return-from ,block))))))))

(defconstant +hash-index-type+ (car (resolve-type `(or (integer -1 -1) seqind))))

(defun sort-expander (form env)
  (declare (ignore env))
  (if (or (not (consp (caddr form)))
	  (not (member (caaddr form) '(function lambda quote)))
	  (and (cdddr form) 
	       (or (not (eq :key (cadddr form)))
		   (not (consp (fifth form)))
		   (not (member (car (fifth form)) '(function lambda quote))))))
      form
    (let ((ll (gensym)) (a (gensym)) (i (gensym)) (x (gensym))
	  (seq (gensym)) (pred (caddr form)) (key (if (cdddr form) (fifth form) ''identity)))
      `(let ((,seq ,(cadr form)))
	 (declare (list ,seq))
	 (let* ((,ll (length ,seq))
		(,a (make-array ,ll :element-type t)))
	   (declare ((vector t) ,a)) ;FIXME
	   (do ((,i 0 (1+ ,i)) (,x ,seq (cdr ,x))) ((= ,i ,ll))
	       (declare (seqind ,i))
	       (setf (aref ,a ,i) ,x))
	   (do ((,i (floor ,ll 2) (1- ,i))) ((< ,i 0))
	       (declare (,+hash-index-type+ ,i))
	       ,(mheap a i ll key pred))
	   (do ((,i (1- ,ll) (1- ,i))) ((<= ,i 0))
	       (declare (seqind ,i))
	       (let ((,x (car (aref ,a 0))))
		 (setf (car (aref ,a 0)) (car (aref ,a ,i)) (car (aref ,a ,i)) ,x))
	       ,(mheap a 0 i key pred)))
	 ,seq))))
;(si::putprop 'sort (function sort-expander) 'si::compiler-macro-prop)

(defun identity-expander (form env)
  (declare (ignore env))
  (cadr form))
(si::putprop 'identity (function identity-expander) 'si::compiler-macro-prop)

(defun seqind-wrap (form)
  (if *safe-compile*
      form
    `(the seqind ,form)))

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
(si::putprop 'maphash (function maphash-expander) 'si::compiler-macro-prop)
	
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

(si::putprop 'array-row-major-index (function array-row-major-index-expander) 'si::compiler-macro-prop)

(defmacro with-pulled-array (bindings form &body body)
  `(let ((,(car bindings) (cadr ,form)))
     (let ((,(cadr bindings) (and (consp ,(car bindings)) `((,(gensym) ,,(car bindings))))))
       (let ((,(caddr bindings) (or (caar ,(cadr bindings)) ,(car bindings))))
	 ,@body))))
	

(defun aref-expander (form env)
  (declare (ignore env))
  (with-pulled-array
   (ar lets sym) form
   (let ((isym (gensym)))
     (let ((lets (append lets `((,isym (array-row-major-index ,sym ,@(cddr form)))))))
       (let-wrap lets `(compiler::cmp-aref ,sym ,isym))))))

(si::putprop 'aref (function aref-expander) 'si::compiler-macro-prop)
(si::putprop 'row-major-aref (function aref-expander) 'si::compiler-macro-prop)

(defun aset-expander (form env)
  (declare (ignore env))
  (with-pulled-array
   (ar lets sym) form
   (let ((isym (gensym)))
     (let ((lets (append lets `((,isym (array-row-major-index ,sym ,@(butlast (cddr form))))))))
       (let-wrap lets `(compiler::cmp-aset ,sym ,isym ,(car (last form))))))))

(si::putprop 'si::aset (function aset-expander) 'si::compiler-macro-prop)
;FIXME -- test and install this and svref, CM 20050106
;(si::putprop 'svset (function aset-expander) 'si::compiler-macro-prop)

(defun array-dimension-expander (form env)
  (declare (ignore env))
  (with-pulled-array
   (ar lets sym) form
   (let-wrap lets `(compiler::cmp-array-dimension ,sym ,(caddr form)))))

(si::putprop 'array-dimension (function array-dimension-expander) 'si::compiler-macro-prop)

(defun do-list-search (test list &key (k1 nil k1p) key (item nil itemp) rev (ret nil retp) test-not ((:test foo)))
  (declare (ignore foo))
  (let* ((x (gensym))
	 (rf (if retp `(funcall ,ret ,x) x))
	 (el (if k1p `(funcall ,k1 ,rf) rf))
	 (el (if key `(if ,key (funcall ,key ,el) ,el) el))
	 (tf (if itemp `(funcall ,test ,(if rev el item) ,(if rev item el)) `(funcall ,test ,el)))
	 (tf (if test-not `(not ,tf) tf))
	 (tf (if retp `(and ,rf ,tf) tf))
	 (ef `(or (endp ,x) ,tf)))
	 `(do ((,x ,list (cdr ,x))) (,ef ,rf))))

(defun possible-eq-list-search (item list special-keys &rest r &key rev key (test ''eql testp) (test-not nil test-notp))
  (declare (ignore key rev));FIXME
  (let* ((test (cond ((and testp test-notp) `(or ,test ,test-not ''eql)) (test-notp test-not) (test)))
	 (test (if (and (consp test) (eq (car test) 'function)) `(quote ,(cadr test)) test))
	 (r `(,@special-keys ,@r)))
    (let ((form (apply 'do-list-search test list r)))
      (if (member :item special-keys)
	  `(if (is-eq-test-item-list ,test ,item ,list); (and (eq ,test 'eql) (eql-is-eq ,item ,test ,list))
	       ,(apply 'do-list-search ''eq list r)
	     ,form)
	form))))

(defmacro member-compiler-macro (&whole w &rest args)
  (if (or (< (length args) 2) (do ((r (cddr args) (cddr r))) ((not (and r (keywordp (car r)))) r)))
      w
    (let* ((syms (reduce (lambda (&rest r) 
			   (when r 
			     (if (or (constantp (cadr r))
				     (and (consp (cadr r)) (eq (caadr r) 'lambda))) 
				 (car r) 
			       `(,@(car r) (,(gensym) ,(cadr r))))))
			 args :initial-value nil))
	   (r (mapcar (lambda (x) (cond ((constantp x) x)
					((and (consp x) (eq (car x) 'lambda)) x)
					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
	   (specials (if (member (car w) '(rassoc rassoc-if rassoc-if-not)) '(:k1 'cdr) '(:k1 'car)))
	   (specials (if (member (car w) '(member assoc rassoc)) `(:item ,(car r) ,@specials) specials))
	   (specials (if (member (car w) '(assoc assoc-if assoc-if-not rassoc rassoc-if rassoc-if-not)) 
			 `(:ret 'car ,@specials) specials))
	   (overrides (if (member (car w) '(member-if assoc-if rassoc-if)) `(:test ,(car r))))
	   (overrides (if (member (car w) '(member-if-not assoc-if-not rassoc-if-not)) 
			  `(:test-not ,(car r) ,@overrides) overrides)))
      `(let (,@syms)
	 ,(apply 'possible-eq-list-search (car r) (cadr r) specials `(,@overrides ,@(cddr r)))))))

(si::putprop 'member (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'member-if (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'member-if-not (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'assoc (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'assoc-if (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'assoc-if-not (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'rassoc (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'rassoc-if (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'rassoc-if-not (macro-function 'member-compiler-macro) 'si::compiler-macro-prop)

(defmacro intersection-compiler-macro (&whole w &rest args)
  (if (or (< (length args) 2) (do ((r (cddr args) (cddr r))) ((not (and r (keywordp (car r)))) r)))
      w
    (let* ((syms (reduce (lambda (&rest r) 
			   (when r 
			     (if (inlinable-fn (cadr r))
				 (car r) 
			       `(,@(car r) (,(gensym) ,(cadr r))))))
			 args :initial-value nil))
	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
	   (ks (cadr (member :key r)))
	   (ans (gensym)) (l (gensym)) (z (gensym))
	   (syms `(,@syms ,@(unless (eq (car w) 'subsetp) `((,ans ,(when (eq (car w) 'union) (cadr r))))))))
      `(let* (,@syms)
	 (dolist (,l ,(car r) ,(if (eq (car w) 'subsetp) t ans))
	   (let ((,z (if ,ks (funcall ,ks ,l) ,l)))
	     (,(if (eq (car w) 'intersection) 'when 'unless) (member ,z ,(cadr r) ,@(cddr r)) 
	       ,(if (eq (car w) 'subsetp) `(return nil) `(push ,l ,ans)))))))))
(si::putprop 'intersection (macro-function 'intersection-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'union (macro-function 'intersection-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'set-difference (macro-function 'intersection-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'subsetp (macro-function 'intersection-compiler-macro) 'si::compiler-macro-prop)
	  
(defmacro set-exclusive-or-compiler-macro (&whole w &rest args)
  (if (or (< (length args) 2) (do ((r (cddr args) (cddr r))) ((not (and r (keywordp (car r)))) r)))
      w
    (let* ((syms (reduce (lambda (&rest r) 
			   (when r 
			     (if (inlinable-fn (cadr r))
				 (car r) 
			       `(,@(car r) (,(gensym) ,(cadr r))))))
			 args :initial-value nil))
	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
					((car (rassoc x syms :key 'car :test 'equal))) (x))) args)))
      `(let* (,@syms)
	 (nconc (set-difference ,(car r) ,(cadr r) ,@(cddr r))
		(set-difference ,(cadr r) ,(car r) :rev t ,@(cddr r)))))))
(si::putprop 'set-exclusive-or (macro-function 'set-exclusive-or-compiler-macro) 'si::compiler-macro-prop)

(defmacro mapcar-compiler-macro (&whole w &rest args)
  (if (< (length args) 2) 
      w
    (let* ((syms (unless (inlinable-fn (car args)) `((,(gensym) ,(car args)))))
	   (syms `(,@syms ,@(reduce (lambda (&rest r) 
				      (when r 
					`(,@(car r) (,(gensym) ,(cadr r)))))
				    (cdr args) :initial-value nil)))
	   (r (mapcar (lambda (x) (cond ((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
	   (ans (gensym)) (l (gensym)) (tmp (gensym))
	   (car (member (car w) '(mapcar mapcan mapc)))
	   (fc `(funcall ,(car r) ,@(if car (mapcar (lambda (x) `(car ,x)) (cdr r)) (cdr r))))
	   (accum (member (car w) '(mapcar maplist mapcan mapcon)))
	   (cat (member (car w) '(mapcan mapcon)))
	   (syms `(,@syms ,@(if accum `(,ans ,l) `((,ans ,(cadr r)))))))
      `(let* (,@syms)
	 (do (,@(mapcar (lambda (x) `(,x ,x (cdr ,x))) (cdr r)))
	     ((or ,@(mapcar (lambda (x) `(endp ,x)) (cdr r))) ,ans)
	     ,(cond (cat `(setq ,l (let ((,tmp ,fc))
			      (cond (,l (last (rplacd ,l ,tmp))) ((listp ,tmp) (last (setq ,ans ,tmp))) ((setq ,ans ,tmp))))))
		    (accum `(setq ,l (let ((,tmp (cons ,fc nil)))
			      (if ,l (cdr (rplacd ,l ,tmp)) (setq ,ans ,tmp)))))
		    (fc)))))))
(si::putprop 'mapcar (macro-function 'mapcar-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'maplist (macro-function 'mapcar-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'mapc (macro-function 'mapcar-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'mapl (macro-function 'mapcar-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'mapcan (macro-function 'mapcar-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'mapcon (macro-function 'mapcar-compiler-macro) 'si::compiler-macro-prop)
      
	   
;;start end count position
(defun do-sequence-search (fn vars &key dest newseq sum pos start end count test test-not
			      (item nil itemp) ret k1 (key nil keyp) rev not (iv nil ivp))
  (declare (ignore test not))
  (let* (
	 (gs (mapcar (lambda (x) (list (gensym) x)) vars))

	 (l (gensym))
	 (lf (mapcar (lambda (x) `(length ,x)) vars))
	 (lf (if dest `((if (typep ,dest 'vector) (array-dimension ,dest 0) (length ,dest)) ,@lf) lf))
	 (lf (if end `(,end ,@lf) lf))
	 (lf (if (> (length lf) 1) (cons 'min lf) (car lf)))
	 (lf (if (or pos start end (eq newseq :vector)) lf
		     `(if (or ,@(when dest `((typep ,dest 'vector)))
			      ,@(mapcar (lambda (x) `(typep ,x 'vector)) vars)) ,lf -1)))
	 (lf `((,l ,lf)))
	 (i (gensym))

	 (tf (mapcar (lambda (x) `(if (typep ,(cadr x) 'vector) (aref ,(cadr x) ,i) (car ,(car x)))) gs))
	 (tf (if ret (mapcar (lambda (x) `(funcall ,ret ,x)) tf) tf))
	 (tf (if k1 (mapcar (lambda (x) `(funcall ,k1 ,x)) tf) tf))
	 (tf (if keyp (mapcar (lambda (x) `(funcall ,key ,x)) tf) tf))
	 (first (car (if rev (last tf) tf)))
	 (out (gensym))
	 (lh (gensym))
	 (sv (gensym))
	 (fv (gensym))
	 (p  (gensym))
	 (cv  (gensym))
	 (tmp  (gensym))
	 (tf (if sum (cons sv tf) tf))
	 (tf (if itemp (if (and (not sum) (= (length vars) 1)) (cons item tf) (baboon)) tf))
	 (tf (if rev (nreverse tf) tf))
	 (tf `(funcall ,fn ,@tf))
	 (tf (if test-not `(not ,tf) tf))

	 (tf (if (and sum (not ivp)) (if (= (length vars) 1) `(if ,fv ,tf ,first) (baboon)) tf))

	 (inf (mapcar (lambda (x) 
			`(,(car x) ,(cadr x) (if (typep ,(cadr x) 'vector) ,(car x) (cdr ,(car x))))) gs))
	 (inf `((,i 0 ,@(if (or pos start end (eq newseq :vector)) `((+ ,i 1)) `((if (>= ,l 0) (+ ,i 1) ,i)))) ,@inf))

	 (lf (if (eq newseq :vector) 
		 `(,@lf (,out (make-array ,l 
					  :fill-pointer ,l 
					  :element-type (cmp-array-element-type ,@vars)))) lf))
	 (lf (if (or dest (eq newseq :list))
		 `(,@lf (,p (unless (typep ,dest 'vector) ,dest))) lf))
	 (lf (if sum `(,@lf (,fv ,ivp) (,sv ,iv)) lf))
	 (lf (if count `(,@lf (,cv 0)) lf))
	 (lf (if (eq newseq :list ) `(,@lf ,lh) lf))
	 (inf (if (or dest (eq newseq :list)) 
		  `((,p ,p (if (typep ,dest 'vector) ,p (cdr ,p))) ,@inf) inf))
	 (tf (cond (dest `(cond ((typep ,dest 'vector) (setf (aref ,dest ,i) ,tf) nil)
				((setf (car ,p) ,tf) nil)))
		   ((eq newseq :list) `(and (setq ,p (let ((,tmp (cons ,tf nil))) 
						       (if ,p (cdr (rplacd ,p ,tmp)) 
							 (setq ,lh ,tmp)))) nil))
		   ((eq newseq :vector) `(and (setf (aref ,out ,i) ,tf) nil))
		   (sum `(progn (setq ,sv ,tf ,fv t) nil))
		   (count `(progn (when ,tf (incf ,cv)) nil))
		   (tf)))
	 (tf (if start `(when (>= ,i ,start) ,tf) tf))
	 (tf (if ret `(and (funcall ,ret ,(car vars)) ,tf) tf))
;;FIXME the or problem if possible
	 (ef `(= ,i ,l))
	 (ef (if (or pos start end (eq newseq :vector)) ef `(and (>= ,l 0) ,ef)))
	 (ef `(if ,ef t
		,@(if (or pos start end (eq newseq :vector)) `(,tf)
		    `(,(reduce (lambda (x y) `(if (and (not (typep ,(cadr x) 'vector)) (not ,(car x))) t ,y))
			       `(,@(when dest `((,p ,dest))) ,@gs) :initial-value tf :from-end t)))))
	 (rf (cond (dest dest) 
		   ((eq newseq :list) lh) 
		   ((eq newseq :vector) out) 
		   (sum `(if ,fv ,sv (funcall ,fn)))
		   (count cv) 
		   (pos `(unless (= ,i ,l) ,i))
		   ((if ret `(funcall ,ret ,(caar gs)) (caar gs))))))

    `(let* ,lf  
       ,@(when count `((declare (seqind  ,cv))))
       ,@(when dest
	   `((when (and (typep ,dest 'vector) (array-has-fill-pointer-p ,dest))
	       (setf (fill-pointer ,dest) ,l))))
       (do ,inf (,ef ,rf)(declare (seqind ,i))))))

(defun possible-eq-sequence-search (item seq special-keys &rest r 
					 &key key start end (test ''eql testp) (test-not nil test-notp))
  (declare (ignore key start end testp));FIXME
  (let* ((test (if test-notp test-not test))
	 (test (if (and (consp test) (eq (car test) 'function)) `(quote ,(cadr test)) test))
	 (r `(,@special-keys ,@r)))
    (let ((form (apply 'do-sequence-search test (list seq) r)))
      (if (member :item special-keys)
	  `(if (is-eq-test-item-list ,test ,item ,seq); FIXME
	       ,(apply 'do-sequence-search ''eq (list seq) r)
	     ,form)
	form))))

(defmacro inlinable-fn (a) `(or (constantp ,a) (and (consp ,a) (member (car ,a) '(function lambda)))))

(defconstant +seq-fn-key-list+ 
  '((position . (:item (:pos t)))
    (position-if . (:test (:pos t)))
    (position-if-not . (:test-not (:pos t)))
    (count . (:item (:count t)))
    (count-if . (:test (:count t)))
    (count-if-not . (:test-not (:count t)))))

(defmacro seq-compiler-macro (&whole w &rest args)
  (if (or (< (length args) 2) 
	  (do ((r (cddr args) (cddr r))) 
	      ((not (and r (keywordp (car r)) (not (eq (car r) :from-end)))) r))
	  (every (lambda (x) (member x (cddr args))) '(:test :test-not))
	  (some (lambda (x) (not (inlinable-fn (cadr (member x (cddr args)))))) '(:key :test :test-not)))
      w
    (let* ((syms (reduce (lambda (&rest r) 
			   (when r
			     (if (inlinable-fn (cadr r)) (car r) `(,@(car r) (,(gensym) ,(cadr r))))))
			 args :initial-value nil))
	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
	   (z (cdr (assoc (car w) +seq-fn-key-list+)))
	   (specials `(,@(when (eq (car z) :item) `(:item ,(car r))) ,@(cadr z)))
	   (overrides (unless (eq (car z) :item) `(,(car z) ,(car r))))
	   (form (apply 'possible-eq-sequence-search (car r) (cadr r) specials `(,@overrides ,@(cddr r)))))
      `(let (,@syms)
	 ,@(if (constantp (cadr r)) (list form)
	     `((if (typep ,(cadr r) 'vector)
		   (let ((,(cadr r) ,(cadr r)))
		     (declare (vector ,(cadr r)))
		     ,form)
		 (let ((,(cadr r) ,(cadr r)))
		   (declare (list ,(cadr r)))
		   ,form))))))))
(si::putprop 'position (macro-function 'seq-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'position-if (macro-function 'seq-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'position-if-not (macro-function 'seq-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'count (macro-function 'seq-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'count-if (macro-function 'seq-compiler-macro) 'si::compiler-macro-prop)
(si::putprop 'count-if-not (macro-function 'seq-compiler-macro) 'si::compiler-macro-prop)


(defmacro map-into-compiler-macro (&whole w &rest args)
  (declare (ignore w))
  (let* ((syms (reduce (lambda (&rest r) 
			 (when r 
			   (if (or (constantp (cadr r))
				   (and (consp (cadr r)) (eq (caadr r) 'lambda))) 
			       (car r) 
			     `(,@(car r) (,(gensym) ,(cadr r))))))
		       args :initial-value nil))
	 (r (mapcar (lambda (x) (cond ((constantp x) x)
				      ((and (consp x) (eq (car x) 'lambda)) x)
				      ((car (rassoc x syms :key 'car :test 'equal))) (x))) args)))
    `(let ,syms
       ,(do-sequence-search (cadr r) (cddr r) :dest (car r)))))
(si::putprop 'map-into (macro-function 'compiler::map-into-compiler-macro) 'si::compiler-macro-prop)

(defmacro reduce-compiler-macro (&whole w &rest args)
  (if (or (< (length args) 2) 
	  (do ((r (cddr args) (cddr r))) 
	      ((not (and r (keywordp (car r)) (not (eq (car r) :from-end)))) r))
	  (not (inlinable-fn (cadr (member :key (cddr args))))))
      w
    (let* ((syms (reduce (lambda (&rest r) 
			   (when r (if (inlinable-fn (cadr r)) (car r) `(,@(car r) (,(gensym) ,(cadr r))))))
			 args :initial-value nil))
	   (r (mapcar (lambda (x) (cond ((inlinable-fn x) x)
					((car (rassoc x syms :key 'car :test 'equal))) (x))) args))
	   (form (apply 'do-sequence-search (car r) (list (cadr r)) `( :sum t ,@(substitute :iv :initial-value (cddr args))))))
      `(let ,syms
	 ,@(if (constantp (cadr r)) (list form)
	     `((if (typep ,(cadr r) 'vector)
		   (let ((,(cadr r) ,(cadr r)))
		     (declare (vector ,(cadr r)))
		     ,form)
		 (let ((,(cadr r) ,(cadr r)))
		   (declare (list ,(cadr r)))
		   ,form))))))))
(si::putprop 'reduce (macro-function 'compiler::reduce-compiler-macro) 'si::compiler-macro-prop)


(defun and-compiler-macro (form env)
  (declare (ignore env))
  (cond ((endp (cdr form)))
	((endp (cddr form)) (cadr form))
	(`(if ,(cadr form) ,(and-compiler-macro `(and ,@(cddr form)) nil)))))
(si::putprop 'and 'and-compiler-macro 'si::compiler-macro-prop)
	   
(defun or-compiler-macro (form env)
  (declare (ignore env))
  (cond ((endp (cdr form)) nil)
	((endp (cddr form)) (cadr form))
	((let ((s (gensym))) `(let ((,s ,(cadr form))) (if ,s ,s ,(or-compiler-macro `(or ,@(cddr form)) nil)))))))
(si::putprop 'or 'or-compiler-macro 'si::compiler-macro-prop)

;(defun do-vector-map (fn vars &key (not nil notp))
;  (let ((i (gensym)) (l (gensym)))
;    (let* ((tf `(funcall ,fn ,@(mapcar (lambda (x) `(aref ,x ,i)) vars)))
;	   (tf (if notp `(not ,tf) tf))
;	   (lf (mapcar (lambda (x) `(array-dimension ,x 0)) vars))
;	   (lf (if (= (length lf) 1) lf `(min ,@lf))))
;    `(let ((,l ,lf))
;       (do ((,i 0 (+ ,i 1))) ((or (= ,i ,l) ,tf) (= ,i ,l))
;	   (declare (seqind ,i)) )))))

;(defmacro every-compiler-macro (&whole w &rest args)
;  `(cond ((all-lists ,@(cdr args))
;	  (not (member-if-not ,@args)))
;	 ((all-vectors ,@(cdr args))
;	  ,(do-vector-search (car args) (cdr args) :not t))
;	 ((funcall (function every) ,@args))))
;(si::putprop 'every (macro-function 'every-compiler-macro) 'si::compiler-macro-prop)
	    


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
		
(defun c1symbol-fun (fname args &aux fd)
  (cond ((setq fd (get fname 'c1special)) (funcall fd args))
	((and (setq fd (get fname 'co1special))
	      (funcall fd fname args)))
        ((setq fd (c1local-fun fname))
         (if (eq (car fd) 'call-local)
	     ;; c1local-fun now adds fun-info into (cadr fd), so we need no longer
	     ;; do it explicitly here.  CM 20031030
             (let* ((info (add-info (make-info :sp-change t) (cadr fd)))
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
                                             (pop arg-types)
                                             (pop args))))
                                  (setq forms (reverse fl)))))
                  (list 'call-local info (cddr fd) forms))
             (c1expr (cmp-expand-macro fd fname args))))
	((and (get fname 'c1no-side-effects) (every 'constantp args))
	 (c1expr `(quote ,(cmp-eval `(,fname ,@args)))))
        ((let ((fn (get fname 'si::compiler-macro-prop)) (res (cons fname args)))
	   (and fn
		(let ((fd (cmp-eval `(funcall ',fn ',res nil))))
                 (and (not (eq res fd))
		      (c1expr fd))))))
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
        (t (let* ((info (make-info
			 :sp-change (null (get fname 'no-sp-change))))
		  (args (if (and (member fname '(funcall apply))
				 (and (consp (car args)) (eq (caar args) 'quote) (symbolp (cadar args))))
			    `((function ,(cadar args)) ,@(cdr args))
			  args))
                  (forms (c1args args info))) ;; info updated by args here
	     (let ((return-type (get-return-type fname)))
	       (when return-type
		 (if (or (eq return-type '*) (equal return-type '(*)))
		     (setf return-type nil)
		   (setf (info-type info) return-type))))
	     (let ((arg-types (get-arg-types fname)))
                     ;;; Add type information to the arguments.
	       (when arg-types
		 (do ((fl forms (cdr fl))
		      (fl1 nil)
		      (al args (cdr al)))
		     ((endp fl)
		      (setq forms (reverse fl1)))
		   (cond ((endp arg-types) (push (car fl) fl1))
			 (t (push (and-form-type (car arg-types)
						 (car fl)
						 (car al))
				  fl1)
			    (pop arg-types))))))
	     (let ((arg-types (get fname 'arg-types)))
                     ;;; Check argument types.
	       (when arg-types
		 (do ((fl forms (cdr fl))
		      (al args (cdr al)))
		     ((or (endp arg-types) (endp fl)))
		   (check-form-type (car arg-types)
				    (car fl) (car al))
		   (pop arg-types))))
	     ;; some functions can have result type deduced from
	     ;; arg types.
	     (let ((tem (result-type-from-args fname
					       (mapcar #'(lambda (x) (info-type (cadr x)))
						       forms))))
	       (when tem
		 (setq tem (type-and tem (info-type info)))
		 (setf (info-type info) tem)))
	     (list 'call-global info fname forms)))
        )
  )

;;numbers and character constants may be sometimes used, instead
;;of the variable, eg inside eql

(defun replace-constant (lis &aux found tem)
  (do ((v lis (cdr v)))
      ((null v)  found)
      (cond ((and (constantp (car v))
		  (or (numberp (setq tem(eval (car v))))
		      (characterp tem)))
	     (setq found t) (setf (car v) tem)))))



(defun c1lambda-fun (lambda-expr args &aux (info (make-info :sp-change t)))
  (if (not (intersection '(&optional &rest &key &aux &allow-other-keys) (car lambda-expr)))
      (c1expr
       `(let* (,@(mapcar (lambda (x y) (list x y)) (car lambda-expr)  args))
	  ,@(cdr lambda-expr)))
    (progn 
      (setq args (c1args args info))
      (setq lambda-expr (c1lambda-expr lambda-expr))
      (add-info info (cadr lambda-expr))
      (list 'call-lambda info lambda-expr args))))

(defun c2expr (form)
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
		(t (baboon)))))))

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
        (t (let ((info (make-info)))
                (dolist (form forms)
                        (setq form (c1expr form))
                        (push form fl)
                        (add-info info (cadr form)))
                (setf (info-type info) (info-type (cadar fl)))
                (list 'progn info (reverse fl))
                )))
  )

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
	(t
  (let* ((sd (get name 'si::s-data))
	 (aet-type (aref (si::s-data-raw sd) index))
	 )
    (setf (info-type info) (if (and (eq name 'si::s-data) (= index 2))
			       ;;FIXME -- this belongs somewhere else.  CM 20050106
			       '(vector unsigned-char)
			     (type-filter (nth aet-type +array-types+))))
    (list 'structure-ref info
	  (c1expr* form info)
	  (add-symbol name)
	  index sd)
    
    ))))

(defun coerce-loc-structure-ref (arg type-wanted &aux (form (cdr arg)))
  (let* ((sd (fourth form))
	 (index (caddr form)))
    (cond (sd
	    (let* ((aet-type (aref (si::s-data-raw sd) index))
		   (type (nth aet-type +array-types+)))
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
	(type (nth (aref (si::s-data-raw sd) index) +array-types+)))
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
    (if *safe-compile* (wfs-error)
      (wt "STREF("  (aet-c-type (nth (aref raw ind) +array-types+) )
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
  (type (nth (aref raw ind) +array-types+))
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

(defun c1constant-value (val always-p)
  (cond
   ((eq val nil) (c1nil))
   ((eq val t) (c1t))
   ((si:fixnump val)
    (list 'LOCATION (make-info :type (list 'integer val val)) ;;FIXME -- 1024 should be small fixnum limit
          (list 'FIXNUM-VALUE (and (>= (abs val) 1024)(add-object val))
		val)))
   ((characterp val)
    (list 'LOCATION (make-info :type 'character)
          (list 'CHARACTER-VALUE (add-object val) (char-code val))))
   ((typep val 'long-float)
    ;; We can't read in long-floats which are too big:
    (let (tem x)
      (unless (setq tem (cadr (assoc val *objects*)))
	(cond ((or
		(and (= val (symbol-value '+inf)) (c1expr `(si::|#,| symbol-value '+inf)))
		(and (= val (symbol-value '-inf)) (c1expr `(si::|#,| symbol-value '-inf)))
		(and (not (isfinite val)) (c1expr `(si::|#,| symbol-value 'nan)))
		(and
		 (> (setq x (abs val)) (/ most-positive-long-float 2))
		 (c1expr `(si::|#,| * ,(/ val most-positive-long-float)
			       most-positive-long-float)))
		(and
		 (< x (* least-positive-long-float 1.0d20))
		 (c1expr `(si::|#,| * ,(/ val least-positive-long-float)
			       least-positive-long-float))))
	       (push (list val (setq tem *next-vv*)) *objects*))))
      (list 'LOCATION (make-info :type `(long-float ,val ,val))
	    (list 'LONG-FLOAT-VALUE (or tem (add-object val)) val))))
   ((typep val 'short-float)
    (list 'LOCATION (make-info :type `(short-float ,val ,val))
          (list 'SHORT-FLOAT-VALUE (add-object val) val)))
   ((and (consp val) (eq (car val) 'si::|#,|))
    (list 'LOCATION (make-info :type (object-type (cmp-eval (cdr val))))
          (list 'VV (add-object val))))
   ((and (arrayp val) (not (si::staticp val)) (eq (array-element-type val) t)) ;; This must be readable
    (list 'LOCATION (make-info :type (object-type val))
          (list 'VV (add-object val))))
   (always-p
    (list 'LOCATION (make-info :type (object-type val))
          (list 'VV (add-object val))))
   (t nil)))

(defmacro si::define-compiler-macro (name vl &rest body)
  `(progn (si:putprop ',name
                      (caddr (si:defmacro* ',name ',vl ',body))
                      'si::compiler-macro-prop)
          ',name))  

(defun si::compiler-macro-function (name)
  (get name 'si::compiler-macro-prop))  

(defun si::undef-compiler-macro (name)
  (remprop name 'si::compiler-macro-prop))

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


