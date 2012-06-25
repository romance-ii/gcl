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

(in-package :compiler)

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

(defun readable-val (val)
  (cond ((not (arrayp val)))
	((not (si::staticp val)))))

(defun setq-p (form l) 
  (cond ((eq form l)) ((atom form) nil) ((or (setq-p (car form) l) (setq-p (cdr form) l)))))

(defun atomic-type-constant-value (atp &aux (a (car atp)))
  (when atp
    (typecase 
     a
     ((or function cons array))
     (otherwise (c1constant-value a (when (symbolp a) (symbol-package a)))))))

;; (defun atomic-type-constant-value (atp &aux (a (car atp)))
;;   (when atp
;;     (typecase 
;;      a
;;      ((or function cons array))
;;      (otherwise 
;;       (unless (eq a +opaque+)
;; 	(if (when (symbolp a) (get a 'tmp)) ;FIXME cdr
;; 	    (let ((a (get-var a)))
;; 	      (when a (c1var a)))
;; 	  (c1constant-value a (when (symbolp a) (symbol-package a)))))))))

;; (defun atomic-type-constant-value (atp &aux (a (car atp)))
;;   (when atp
;;     (typecase 
;;      a
;;      ((or function cons array))
;;      (otherwise (c1constant-value a (when (symbolp a) (symbol-package a)))))))

(defun c1expr-avct (res &aux (atp (atomic-tp (info-type (cadr res)))))
  (or (when (ignorable-form res) (atomic-type-constant-value atp)) res))

(defun c1expr (form)
  (setq form (catch *cmperr-tag*
    (cond ((symbolp form)
           (cond ((constantp form) 
		  (let ((val (symbol-value form)))
		    (or 
		     (c1constant-value val nil)
		     `(location ,(make-info :type (object-type val)) (VV ,(add-constant form))))))
;                 ((c1var form))))
                 ((c1expr-avct (c1var form))))) ;FIXME pcl
          ((consp form)
           (let ((fun (car form)))
	     (c1expr-avct (cond ((symbolp fun)
				 (c1symbol-fun form))
				((and (consp fun) (eq (car fun) 'lambda))
				 (c1symbol-fun (cons 'funcall form)))
				((and (consp fun) (eq (car fun) 'si:|#,|))
				 (cmperr "Sharp-comma-macro was found in a bad place."))
				(t (cmperr "The function ~s is illegal." fun))))))
          (t (c1constant-value form t)))))
  (if (eq form '*cmperr-tag*) (c1nil) form))

;; (defun c1expr (form)
;;   (setq form (catch *cmperr-tag*
;;     (cond ((symbolp form)
;;            (cond ((constantp form) 
;; 		  (let ((val (symbol-value form)))
;; 		    (or 
;; 		     (c1constant-value val nil)
;; 		     `(location ,(make-info :type (object-type val)) (VV ,(add-constant form))))))
;;                  ((c1var form))))
;; ;                 ((c1expr-avct (c1var form))))) ;FIXME pcl
;;           ((consp form)
;;            (let ((fun (car form)))
;; 	     (c1expr-avct (cond ((symbolp fun)
;; 				 (c1symbol-fun form))
;; 				((and (consp fun) (eq (car fun) 'lambda))
;; 				 (c1symbol-fun (cons 'funcall form)))
;; 				((and (consp fun) (eq (car fun) 'si:|#,|))
;; 				 (cmperr "Sharp-comma-macro was found in a bad place."))
;; 				(t (cmperr "The function ~s is illegal." fun))))))
;;           (t (c1constant-value form t)))))
;;   (if (eq form '*cmperr-tag*) (c1nil) form))

;; (defun c1expr (form)
;;   (setq form (catch *cmperr-tag*
;;     (cond ((symbolp form)
;;            (cond ((constantp form) 
;; 		  (let ((val (symbol-value form)))
;; 		    (or 
;; 		     (c1constant-value val nil)
;; 		     `(location ,(make-info :type (object-type val)) (VV ,(add-constant form))))))
;;                  ((c1var form))))
;;           ((consp form)
;;            (let* ((fun (car form))
;; 		  (res (cond ((symbolp fun)
;; 			      (c1symbol-fun form))
;; 			     ((and (consp fun) (eq (car fun) 'lambda))
;; 			      (c1symbol-fun (cons 'funcall form)))
;; 			     ((and (consp fun) (eq (car fun) 'si:|#,|))
;; 			      (cmperr "Sharp-comma-macro was found in a bad place."))
;; 			     (t (cmperr "The function ~s is illegal." fun))))
;; 		  (atp (atomic-tp (info-type (cadr res)))))
;; 	     (or (when (ignorable-form res) (atomic-type-constant-value atp)) res)))
;;           (t (c1constant-value form t)))))
;;   (if (eq form '*cmperr-tag*) (c1nil) form))

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

;; (si::putprop 'si::define-structure 'c1define-structure 't1)

;; (defun c1define-structure (arg)
;;   (eval (cons 'si::define-structure arg))
;;   (add-object2 (cons '|#,| (cons 'si::define-structure arg)))
;;   nil)

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
	 (sets-vs-top svt)
	 (normalized-types nt)
	 (apply-arg aa)))                
    (cond ((member flag v :test 'eq)
	   (return-from flags-pos i)))
    (setq i (+ i 1)))
  (error "unknown opt flag"))

(defmacro flag-p (n flag)
  `(logbitp ,(flags-pos  flag)  ,n))

(defmacro flag-or (n flag)
  `(logior ,(ash 1 (flags-pos  flag))  ,n))

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
    (when (listp (car opt))
      (unless (flag-p (caddr opt) nt)
	(setf (car opt) (mapcar 'cmp-norm-tp (car opt))
	      (cadr opt) (cmp-norm-tp (cadr opt))
	      (caddr opt) (logior (caddr opt) (flags nt)))))
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
			 do (output-opt w  sym u)))))))				      
				

(defun result-type-from-args (f args)
  (when (and (or (not *compiler-new-safety*) (member f '(unbox box))));FIXME 
    (let* ((be (get f 'type-propagator))
	   (ba (and be ;(si::dt-apply be (cons f (mapcar 'coerce-to-one-valuea args))))));FIXME
		    (apply be (cons f (mapcar 'coerce-to-one-value args))))));FIXME
      (when ba
	(return-from result-type-from-args (if (atomic-tp ba) ba (cmp-norm-tp ba)))))
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
		       (unless (and (car a) (car b) (type>= (car b) (car a)))
			 (return nil))))
	      (return-from result-type-from-args (second w)))))))))

;; (defun result-type-from-args (f args)
;;   (when (and (or (not *compiler-new-safety*) (member f '(unbox box))));FIXME 
;;     (let* ((be (get f 'type-propagator))
;; 	   (ba (and be ;(si::dt-apply be (cons f (mapcar 'coerce-to-one-valuea args))))));FIXME
;; 		    (apply be (cons f (mapcar 'coerce-to-one-value args))))));FIXME
;;       (when ba
;; 	(return-from result-type-from-args (cmp-norm-tp ba))))
;;     (dolist (v '(inline-always inline-unsafe))
;;       (let* ((w (get f v)))
;; 	(if (and w (symbolp (caar w)) (flag-p (third (car w)) itf))
;; 	    (return-from result-type-from-args (cadr (apply (caar w) args)))
;; 	  (dolist (w w)
;; 	    (fix-opt w)
;; 	    (when (and
;; 		   (flag-p (third w) result-type-from-args)
;; 		   (>= (length args) (- (length (car w)) (length (member '* (car w)))))
;; 		   (do ((a args (cdr a)) 
;; 			(b (car w) (if (and (eq (cadr b) '*) (endp (cddr b))) b (cdr b))))
;; 		       ((null a) t)
;; 		       (unless (and (car a) (car b) (type>= (car b) (car a)))
;; 			 (return nil))))
;; 	      (return-from result-type-from-args (second w)))))))))
	

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
	   (lets (if s lets (cons (list (tmpsym) (car x)) lets)))
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
  `(if ,lets
       (list 'let* ,lets ,form)
     ,form))

(defun binary-nest (form env)
  (declare (ignore env))
  (let ((len (length form)))
    (declare (fixnum len))
    (if (> len 3)
	(let-wrap nil (binary-nest-int form len))
      ;; (multiple-value-bind (form lets) (values form nil);(pull-evals form)
      ;; 	  (let-wrap lets (binary-nest-int form len)))
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
;; (defun funcall-expander (form env &aux x);FIXME inlinable-fn?
;;   (declare (ignore env))
;;   (cond ((and (consp (cadr form)) (eq (caadr form) 'lambda)) (cdr form))
;; 	((and (consp (cadr form)) (eq (caadr form) 'function)
;; 	      (setq x (si::funid-p (cadadr form))))
;; 	 `(,x ,@(cddr form)))
;; 	((constantp (cadr form)) `(,(cmp-eval (cadr form)) ,@(cddr form)))
;; 	(form)))
;; (si::putprop 'funcall 'funcall-expander 'si::compiler-macro-prop)

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

(defvar *rl* `((,#timmfix . 1) 
	       (,#t(and fixnum (not immfix))  . (1+ (caddr #t(immfix))))
	       (,#tbignum . (1+ most-positive-fixnum))
	       (,#tratio . 1/2) 
	       (,#tshort-float . 1.0s0) 
	       (,#tlong-float . 1.0) 
	       (,#t(complex integer) . #c(1 1)) 
	       (,#t(complex ratio) . #c(1/2 1/2))
	       (,#tfcomplex . #c(1.0s0 1)) 
	       (,#tdcomplex . #c(1.0 1)) 
	       (,#tstandard-char . #\a)
	       (,#t(and character (not standard-char)) . #\^a)
	       (,#tstructure . (make-var)) 
	       (,#tpathname . #p".") ;FIXME
	       (,#thash-table-eq . (make-hash-table :test 'eq))
	       (,#thash-table-eql . (make-hash-table :test 'eql))
	       (,#thash-table-equal . (make-hash-table :test 'equal))
	       (,#thash-table-equalp . (make-hash-table :test 'equalp))
	       (,#tpackage . *package*) 
	       (,#tstream . *standard-input*) ;FIXME
	       (,#trandom-state . (make-random-state)) 
	       (,#treadtable . (si::standard-readtable)) 
	       (,#tcompiled-function . (function eq)) ;FIXME old
;	       (,#told-compiled-function . (function si::file-column)) ;FIXME old
;	       (,#tinterpreted-function . (lambda nil nil)) 
	       ,@(mapcar (lambda (x)
			   `(,(cmp-norm-tp `(array ,x (*))) . 
			     (make-array 1 :element-type ',x))) si::+array-types+)
	       ,@(mapcar (lambda (x)
			   `(,(cmp-norm-tp `(and (array ,x *) (not vector))) . 
			     (make-array '(1 1) :element-type ',x))) si::+array-types+)
	       (,#tcons . '(1)) 
	       (,#tnull . nil) 
	       (,#t(member t) . t)
	       (,#tkeyword . :a)
	       (,#t(and symbol (not boolean) (not keyword)) . 'a)))

(defvar *tfns* '(ttn tt31 tt3 tt32 tt33))
(defvar *rls* (mapcar (lambda (x) 
			(cons x 
			      (mapcar (lambda (y) 
					(cons (pop y) (when (and (fboundp x) (compiled-function-p (symbol-function x)))
							(funcall x (eval y))))) *rl*))) *tfns*))



(defvar *rep-lst* `((,#timmfix . 1) 
		    (,#t(and fixnum (not immfix))  . (1+ (caddr #t(immfix))))
		    (,#tbignum . (1+ most-positive-fixnum))
		    (,#tratio . 1/2) 
		    (,#tshort-float . 1.0s0) 
		    (,#tlong-float . 1.0) 
		    (,#t(complex integer) . #c(1 1)) 
		    (,#t(complex ratio) . #c(1/2 1/2))
		    (,#tfcomplex . #c(1.0s0 1)) 
		    (,#tdcomplex . #c(1.0 1)) 
		    (,#tstandard-char . #\a)
		    (,#tnon-standard-base-char . #\Return)
		    (,#tstructure . (make-var)) 
		    (,#tstd-structure . (set-d-tt 1 (make-var))) 
		    (,#tnon-logical-pathname . #p".")
		    (,#tlogical-pathname . (set-d-tt 1 #p"."))
		    (,#thash-table-eq . (make-hash-table :test 'eq))
		    (,#thash-table-eql . (make-hash-table :test 'eql))
		    (,#thash-table-equal . (make-hash-table :test 'equal))
		    (,#thash-table-equalp . (make-hash-table :test 'equalp))
		    (,#tpackage . *package*) 
		    (,#tfile-input-stream . ,(with-open-file (s "/dev/null" :direction :input) s))
		    (,#tfile-output-stream . ,(with-open-file (s "/dev/null" :direction :output) s))
		    (,#tfile-io-stream . ,(with-open-file (s "/dev/null" :direction :io) s))
		    (,#tfile-probe-stream . ,(with-open-file (s "/dev/null" :direction :probe) s))
		    (,#tsynonym-stream . *standard-output*)
		    (,#tbroadcast-stream . ,(make-broadcast-stream))
		    (,#tconcatenated-stream . ,(make-concatenated-stream))
		    (,#ttwo-way-stream . *terminal-io*)
		    (,#techo-stream . ,(make-echo-stream *standard-input* *standard-output*))
		    (,#tstring-input-stream . ,(make-string-input-stream ""))
		    (,#tstring-output-stream . ,(make-string-output-stream));FIXME user defined, socket
		    (,#trandom-state . (make-random-state)) 
		    (,#treadtable . (si::standard-readtable)) 
		    (,#tnon-generic-compiled-function . (function eq))
		    (,#tgeneric-function . (set-d-tt 1 (lambda nil nil)))
		    ,@(mapcar (lambda (x)
				`(,(cmp-norm-tp `(array ,x (*))) . 
				  (make-array 1 :element-type ',x))) si::+array-types+)
		    ,@(mapcar (lambda (x)
				`(,(cmp-norm-tp `(and (array ,x *) (not vector))) . 
				  (make-array '(1 1) :element-type ',x))) si::+array-types+)
		    (,#tlist . '(1)) 
;		    (,#tnull . nil) 
		    (,#t(member t) . t)
		    (,#tkeyword . :a)
		    (,#t(and symbol (not boolean) (not keyword)) . 'a)))

(defvar *rep-lst1* (when (and (fboundp 'tt3) (compiled-function-p #'tt3))
		     (mapcar (lambda (x) (list (car x) (tt3 (eval (cdr x))))) *rep-lst*)))

(defvar *rep-lst2* (when (and (fboundp 'tt32) (compiled-function-p #'tt32))
		     (mapcar (lambda (x) (list (car x) (tt32 (eval (cdr x))))) *rep-lst*)))

(defun duplicates (l &optional res)
  (if (atom l) (remove-duplicates (nreverse res))
    (let ((x (pop l)))
      (duplicates l (if (member x l) (cons x res) res)))))

;(assert (null (duplicates (mapcar 'cadr *rep-lst1*))))

(defvar *hs* nil)

(defun memoize1 (fn tst)
  (let ((h (cdar (push (cons fn (make-hash-table :test tst)) *hs*)))
	(o (symbol-function fn)))
    (setf (get fn 'unmemoize) o)
    (setf (symbol-function fn)
	  (lambda (x) (or (gethash x h) (setf (gethash x h) (funcall o x)))))))

(defun unmemoize1 (fn)
  (setf (symbol-function fn) (get fn 'unmemoize))
  (remprop fn 'unmemoize)
  (setq *hs* (remove fn *hs* :key 'car)))

(defun ints-tt3 (ints &aux (ints (if (listp ints) ints (list ints))))
  (reduce 'type-or1
	  ints :key (lambda (x) (car (rassoc x *rep-lst1* :key 'car))) :initial-value nil))
(memoize1 'ints-tt3 'equal)

(defun ints-tt32 (ints)
  (reduce 'type-or1
	  ints :key (lambda (x) (car (rassoc x *rep-lst2* :key 'car))) :initial-value nil))

(defun make-branch (f ints ttfs)
  (let* ((tp (ints-tt3 ints))
	 (ttfs (remove-if-not (lambda (x) (intersection ints (car x))) ttfs))
	 (b (mapcar (lambda (x) `(,(if (type>= (min-ftp (cadr x)) tp) t
				     `(typep ,f ',(type-and tp (cadr x))))
				  ,@(or (cddr x) (list nil)))) ttfs)))
    (when b `((,ints (infer-tp ,f ,(if (and (= 1 (length b)) (eq t (caar b))) (cadar ttfs) tp) (cond ,@b)))))));FIXME

;; (defun make-branch (f ints ttfs)
;;   (let* ((tp (ints-tt3 ints))
;; 	 (ttfs (remove-if-not (lambda (x) (intersection ints (car x))) ttfs))
;; 	 (b (mapcar (lambda (x) `(,(if (type>= (min-ftp (cadr x)) tp) t
;; 				     `(typep ,f ',(type-and tp (cadr x))))
;; 				  ,@(or (cddr x) (list nil)))) ttfs)))
;;     (when b `((,ints (infer-tp ,f ,tp (cond ,@b)))))))


(defun typecase-compiler-macro2 (form env)
  (declare (ignore env))
  (let* ((x (cadr form))
	 (bind (unless (symbolp x) (list (tmpsym) x)))
	 (f (or (car bind) x))
	 (ff (cddr form))
	 (o (member-if (lambda (x) (or (eq (car x) t) (eq (car x) 'otherwise))) ff))
	 (ff (if o (ldiff ff o) ff))
;	 (o (when o (list (cons t (cdar o)))))
	 (o (list (cons t (cdar o))))
	 (ff (nconc ff o))
	 (ff (mapcar (lambda (x &aux (tp (car x)) y)
		       (if (and (consp tp) (eq (car tp) 'and)
				(setq y (car (member 'satisfies tp :key (lambda (x) (when (listp x) (car x)))))));FIXME fragile
			   (cons (remove y tp) `((when (,(cadr y) ,f) ,@(cdr x)))) x)) ff))
	 (tps (mapcar 'cmp-norm-tp (mapcar 'car ff)))
	 (tps (let (z) (mapcar (lambda (x)
				 (prog1 (type-and x (cmp-norm-tp `(not ,z)))
				   (setq z (type-or1 x z)))) tps)))
	 (t3 (mapcar 'tt3-ints tps))
	 (dups (mapcar (lambda (x y) (remove y x :key 'ints-tt3 :test 'type>=)) t3 tps))
	 (dups (reduce 'union dups :initial-value nil))
	 (ttf (mapcar 'list* t3 tps (mapcar 'cdr ff)))
	 (df (mapcan (lambda (x) (make-branch f (list x) ttf)) dups))
	 (rf (mapcan (lambda (x) (make-branch f (set-difference (car x) dups) (list x))) ttf))
	 (af (nconc df rf))
	 (ob (when (and t3 (not (cdr t3)) (not (cdar t3)) (car t3)) (caar t3)))
	 (res (if ob
		  `(when ,(if (= ob 0) `(tt30 ,f) `(= (tt3 ,f) ,ob)) ,@(cdar af)) 
		`(case (tt3 ,f) ,@af)))
	 (res (if bind `(let (,bind) ,res) res)))
    (when (= (length (reduce 'union t3 :initial-value nil)) (length *rep-lst1*))
      (setf (caar (last af)) 'otherwise))
    res))

;; (defun typecase-compiler-macro2 (form env)
;;   (declare (ignore env))
;;   (let* ((x (cadr form))
;; 	 (bind (unless (symbolp x) (list (tmpsym) x)))
;; 	 (f (or (car bind) x))
;; 	 (ff (cddr form))
;; 	 (o (member-if (lambda (x) (or (eq (car x) t) (eq (car x) 'otherwise))) ff))
;; 	 (ff (if o (ldiff ff o) ff))
;; 	 (o (when o (list (cons t (cdar o)))))
;; 					;		(o (list (cons t (cdar o))))
;; 	 (ff (nconc ff o))
;; 	 (tps (mapcar 'cmp-norm-tp (mapcar 'car ff)))
;; 	 (tps (let (z) (mapcar (lambda (x)
;; 				 (prog1 (type-and x (cmp-norm-tp `(not ,z)))
;; 				   (setq z (type-or1 x z)))) tps)))
;; 	 (t3 (mapcar 'tt3-ints tps))
;; 	 (dups (mapcar (lambda (x y) (remove y x :key 'ints-tt3 :test 'type>=)) t3 tps))
;; 	 (dups (reduce 'union dups :initial-value nil))
;; 	 (ttf (mapcar 'list* t3 ff))
;; 	 (df (mapcan (lambda (x) (make-branch f (list x) ttf)) dups))
;; 	 (rf (mapcan (lambda (x) (make-branch f (set-difference (car x) dups) (list x))) ttf))
;; 	 (af (nconc df rf))
;; 	 (ob (when (and t3 (not (cdr t3)) (not (cdar t3)) (car t3)) (caar t3)))
;; 	 (res (if ob
;; 		  `(when ,(if (= ob 0) `(tt30 ,f) `(= (tt3 ,f) ,ob)) ,@(cdar af)) 
;; 		`(case (tt3 ,f) ,@af)))
;; 	 (res (if bind `(let (,bind) ,res) res)))
;;     (when (= (length (reduce 'union t3 :initial-value nil)) (length *rep-lst1*))
;;       (setf (caar (last af)) 'otherwise))
;;     res))


(defun tps-ints (t1 rl)
  (remove-duplicates (mapcar 'cdr (remove-if-not (lambda (x) (type-and t1 (car x))) rl)) :test '=))

(defun ints-tps (ints rl &aux (ints (if (listp ints) ints (list ints))))
  (reduce 'type-or1
	  (mapcan (lambda (x) (mapcar 'car (remove x rl :key 'cdr :test '/=))) ints)
	  :initial-value nil))

(defun disc (tps fn &aux (rl (cdr (assoc fn *rls*))))
  (let* ((t3 (mapcar (lambda (x) (tps-ints x rl)) tps))
	 (dups (mapcar (lambda (x y) (remove y x :key (lambda (x) (ints-tps x rl)) :test 'type>=)) t3 tps))
	 (dups (reduce 'union dups :initial-value nil))
	 (all (apply 'append t3))
	 (dups (remove-duplicates (nconc (duplicates all) dups) :test '=)))
    (list fn dups t3 (remove-duplicates all :test '=))))


(defun best-type-of (tps)
  (reduce (lambda (y x) (cond ((not y) x)
			      ((and (cadr y) (not (cadr x))) x)
			      ((< (length (fourth x)) (length (fourth y))) x)
			      (y)))
	  (mapcar (lambda (x) (disc tps x)) *tfns*) :initial-value nil))


;; (defun typecase-compiler-macro2 (form env)
;;   (declare (ignore env))
;;   (cond ((not *vars*) form)
;; 	((let* ((x (cadr form))
;; 		(bind (unless (symbolp x) (list (tmpsym) x)))
;; 		(f (or (car bind) x))
;; 		(ft (with-restore-vars (info-type (cadr (c1expr x)))))
;; 		(ff (cddr form))
;; 		(o (member-if (lambda (x) (or (eq (car x) t) (eq (car x) 'otherwise))) ff))
;; 		(ff (if o (ldiff ff o) ff))
;; 		(o (when o (list (cons t (cdar o)))))
;; ;		(o (list (cons t (cdar o))))
;; 		(ff (nconc ff o))
;; 		(tps (mapcar (lambda (x) (type-and ft (cmp-norm-tp x))) (mapcar 'car ff)))
;; 		(tps (let (z) (mapcar (lambda (x)
;; 					(prog1 (type-and x (cmp-norm-tp `(not ,z)))
;; 					  (setq z (type-or1 x z)))) tps)))
;; 		(t3 (mapcar 'tt3-ints tps))
;; 		(dups (duplicates (apply 'append t3)))
;; 		(ttf (mapcar 'list* t3 ff))
;; 		(df (mapcan (lambda (x) (make-branch f (list x) ttf)) dups))
;; 		(rf (mapcan (lambda (x) (make-branch f (set-difference (car x) dups) (list x))) ttf))
;; 		(af (nconc df rf))
;; 		(ob (when (and t3 (not (cdr t3)) (not (cdar t3)) (car t3)) (caar t3)))
;; 		(res (if ob
;; 			 `(when ,(if (= ob 0) `(tt30 ,f) `(= (tt3 ,f) ,ob)) ,@(cdar af)) 
;; 		       `(case (tt3 ,f) ,@af)))
;; 		(res (if bind `(let (,bind) ,res) res)))
;; 	   (when (= (length (reduce 'union t3 :initial-value nil)) (length *rep-lst1*))
;; 	     (setf (caar (last af)) 'otherwise))
;; 	   res))))
(si::putprop 'typecase 'typecase-compiler-macro2 'si::compiler-macro-prop)

(defun tt3-ints (t1)
  (mapcar 'cadr (remove-if-not (lambda (x) (type-and t1 (car x))) *rep-lst1*)))
(memoize1 'tt3-ints 'equal)

(defun tt32-ints (t1)
  (mapcar 'cadr (remove-if-not (lambda (x) (type-and t1 (car x))) *rep-lst2*)))

(defun tt3-type-propagator (f t1)
  (declare (ignore f))
  (cmp-norm-tp (cons 'member (tt3-ints t1))))
(si::putprop 'tt3 'tt3-type-propagator 'type-propagator)    
(defun tt30-type-propagator (f t1)
  (declare (ignore f))
  (cond ((type>= #tlist t1) #t(member t))
	((not (type-and #tlist t1)) #tnull)
	(#tboolean)))
(si::putprop 'tt30 'tt30-type-propagator 'type-propagator)    


;; (defun c1infer-tp (args)
;;   (let* ((x (car (member (pop args) *vars* :key (lambda (x) (when (var-p x) (var-name x))))))
;; 	 (tp (cmp-norm-tp (pop args))))
;;     (with-restore-vars
;;      (do-setq-tp x nil (type-and tp (var-type x)))
;;      (c1expr (car args)))))

(defun c1infer-tp (args)
  (let* ((n (pop args))
	 (v (c1vref n))
	 (x (car v))
	 (tpi (pop args))
	 (tpi (if (atomic-tp tpi) tpi (cmp-norm-tp tpi)))
	 (tp (type-and (var-type x) tpi))
	 (info (make-info))
	 (v1 (c1arg n))
	 (v1 (when (eq (car v1) 'var) (caaddr v1)))
	 (v1 (unless (eq x v1) v1))
	 (res (with-restore-vars
	       (do-setq-tp x nil tp)
	       (c1expr (if v1 `(infer-tp ,v1 ,tp ,(car args)) (car args)))))
	 (ri (cadr res)))
    (add-info info ri)
    (setf (info-type info) (info-type ri))
    `(infer-tp ,info (var ,(make-info) ,v) ,tpi ,res)))

;; (defun c1infer-tp (args)
;;   (let* ((v (c1vref (pop args)))
;; 	 (x (car v))
;; 	 (tpi (cmp-norm-tp (pop args)))
;; 	 (tp (type-and (var-type x) tpi))
;; 	 (info (make-info))
;; 	 (res (with-restore-vars
;; 	       (do-setq-tp x nil tp)
;; 	       (c1expr (car args))))
;; 	 (ri (cadr res)))
;;     (add-info info ri)
;;     (setf (info-type info) (info-type ri))
;;     `(infer-tp ,info (var ,(make-info) ,v) ,tpi ,res)))

;; (defun c1infer-tp (args)
;;   (let* ((v (c1arg (pop args)))
;; 	 (x (caaddr v))
;; 	 (tpi (cmp-norm-tp (pop args)))
;; 	 (tp (type-and (var-type x) tpi))
;; 	 (info (make-info))
;; 	 (res (with-restore-vars
;; 	       (do-setq-tp x nil tp)
;; 	       (c1expr (car args))))
;; 	 (ri (cadr res)))
;;     (add-info info ri)
;;     (setf (info-type info) (info-type ri))
;;     `(infer-tp ,info ,v ,tpi ,res)))

;; (defun c1infer-tp (args)
;;   (let* ((x (car (member (pop args) *vars* :key (lambda (x) (when (var-p x) (var-name x))))))
;; 	 (tpi (cmp-norm-tp (pop args)))
;; 	 (tp (type-and (var-type x) tpi))
;; 	 (info (make-info))
;; 	 (res (with-restore-vars
;; 	       (do-setq-tp x nil tp)
;; 	       (c1expr (car args))))
;; 	 (ri (cadr res)))
;;     (add-info info ri)
;;     (setf (info-type info) (info-type ri))
;;     `(infer-tp ,info ,x ,tpi ,res)))

;; (defun c1infer-tp (args)
;;   (let* ((x (car (member (pop args) *vars* :key (lambda (x) (when (var-p x) (var-name x))))))
;; 	 (tp (type-and (var-type x) (cmp-norm-tp (pop args))))
;; 	 (info (make-info))
;; 	 (res (with-restore-vars
;; 	       (do-setq-tp x nil tp)
;; 	       (c1expr (car args))))
;; 	 (ri (cadr res)))
;;     (add-info info ri)
;;     (setf (info-type info) (info-type ri))
;;     res))

;; (defun c1infer-tp (args)
;;   (let* ((x (car (member (pop args) *vars* :key (lambda (x) (when (var-p x) (var-name x))))))
;; 	 (tp (type-and (var-type x) (cmp-norm-tp (pop args))))
;; 	 (info (make-info))
;; 	 (res (with-restore-vars
;; 	       (do-setq-tp x nil tp)
;; 	       (c1expr (car args))))
;; 	 (ri (cadr res)))
;;     (add-info info ri)
;;     (setf (info-type info) (info-type ri))
;;     res))
(defun c2infer-tp (x tp fm)
  (declare (ignore x tp))
  (c2expr fm))
(si::putprop 'infer-tp 'c1infer-tp 'c1)
(si::putprop 'infer-tp 'c2infer-tp 'c2)












(defconstant +cnum-tp-alist+ `((,#tfixnum . ,(c-type 0))
			       (,#tbignum . ,(c-type (1+ most-positive-fixnum)))
			       (,#tratio  . ,(c-type 1/2))
			       (,#tshort-float . ,(c-type 0.0s0))
			       (,#tlong-float  . ,(c-type 0.0))
			       (,#tfcomplex  . ,(1+ si::c-type-max))
			       (,#tdcomplex  . ,(+ 2 si::c-type-max))
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
			     (lambda (x) 
			       (when (type>= q (car x))
				 (setq q (type-and q (cmp-norm-tp `(not ,(car x))))) t))
			     +cnum-tp-alist+))))
		   (when (or q (not i)) (return form))
		   (push (car f) tp)
		   (if (symbolp x)
		       (push `(,i (setq ,x (the ,(car f) ,x)) ,@z) r)
		     (push `(,i ,@z) r))))))))))

;(si::putprop 'typecase 'typecase-compiler-macro 'si::compiler-macro-prop)


(defconstant +hash-index-type+ #t(or (integer -1 -1) seqind))


(defun identity-expander (form env)
  (declare (ignore env))
  (if (cddr form) form (cadr form)))
(si::putprop 'identity 'identity-expander 'si::compiler-macro-prop)

;; (defun seqind-wrap (form)
;;   (if *safe-compile*
;;       form
;;     `(the seqind ,form)))

(defun fboundp-expander (form env)
  (declare (ignore env))
  `(si::fboundp-sym (si::funid-sym ,(cadr form))))
(si::putprop 'fboundp 'fboundp-expander 'si::compiler-macro-prop)

;; (defun maphash-expander (form env)
;;   (declare (ignore env))
;;   (let ((block (tmpsym))(tag (gensym)) (ind (gensym)) (key (gensym)) (val (gensym)))
;;     `(block 
;;       ,block
;;       (let ((,ind -1))
;; 	(declare (,+hash-index-type+ ,ind))
;; 	(tagbody 
;; 	 ,tag
;; 	 (when (< (setq ,ind (si::next-hash-table-index ,(caddr form) (1+ ,ind))) 0)
;; 	   (return-from ,block))
;; 	 (let ((,key (si::hash-key-by-index ,(caddr form) ,ind))
;; 	       (,val (si::hash-entry-by-index ,(caddr form) ,ind)))
;; 	   (funcall ,(cadr form) ,key ,val))
;; 	 (go ,tag))))))
;; (si::putprop 'maphash 'maphash-expander 'si::compiler-macro-prop)
	
;; (defun array-row-major-index-expander (form env &optional (it 0))
;;   (declare (fixnum it)(ignorable env))
;;   (let ((l (length form)))
;;     (cond ((= l 2) 0)
;; 	  ((= l 3) (seqind-wrap (caddr form)))
;; 	  (t (let ((it (1+ it))
;; 		   (fn (car form))
;; 		   (ar (cadr form))
;; 		   (first (seqind-wrap (caddr form)))
;; 		   (second (seqind-wrap (cadddr form)))
;; 		   (rest (cddddr form)))
;; 	       (array-row-major-index-expander
;; 		`(,fn ,ar ,(seqind-wrap
;; 			    `(+
;; 			      ,(seqind-wrap
;; 				`(* ,first (array-dimension ,ar ,it))) ,second)) ,@rest)
;; 		nil it))))))

;;(si::putprop 'array-row-major-index 'array-row-major-index-expander 'si::compiler-macro-prop)

;; (defmacro with-pulled-array (bindings form &body body) ;FIXME
;;   `(let ((,(car bindings) (cadr ,form)))
;;      (let ((,(cadr bindings) `((,(tmpsym) ,,(car bindings)))))
;;        (let ((,(caddr bindings) (or (caar ,(cadr bindings)) ,(car bindings))))
;; 	 ,@body))))
	

;; (defun aref-expander (form env)
;;   (declare (ignore env))
;;   (with-pulled-array
;;    (ar lets sym) form
;;    (let ((isym (tmpsym)))
;;      (let ((lets (append lets `((,isym (array-row-major-index ,sym ,@(cddr form)))))))
;;        (let-wrap lets `(compiler::cmp-aref ,sym ,isym))))))

;; (si::putprop 'aref 'aref-expander 'si::compiler-macro-prop)
;; (si::putprop 'row-major-aref 'aref-expander 'si::compiler-macro-prop)

;; (defun aset-expander (form env)
;;   (declare (ignore env))
;;   (let ((form (if (eq (car form) 'si::aset-wrap) form 
;; 		(cons (car form) (append (cddr form) (list (cadr form)))))));FIXME
;;     (with-pulled-array
;;      (ar lets sym) form
;;      (let ((isym (tmpsym)))
;;        (let ((lets (append lets `((,isym (array-row-major-index ,sym ,@(butlast (cddr form))))))))
;; 	 (let-wrap lets `(compiler::cmp-aset ,sym ,isym ,(car (last form)))))))))

;; (si::putprop 'si::aset 'aset-expander 'si::compiler-macro-prop)
;; (si::putprop 'si::aset-wrap 'aset-expander 'si::compiler-macro-prop)
;FIXME -- test and install this and svref, CM 20050106
;(si::putprop 'svset 'aset-expander 'si::compiler-macro-prop)

;; (defun array-dimension-expander (form env)
;;   (declare (ignore env))
;;   (with-pulled-array
;;    (ar lets sym) form
;;    (let-wrap lets `(compiler::cmp-array-dimension ,sym ,(caddr form)))))

;;(si::putprop 'array-dimension 'array-dimension-expander 'si::compiler-macro-prop)

(defmacro inlinable-fn (a) 
  `(or (constantp ,a) (and (consp ,a) (member (car ,a) '(function lambda)))))

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
	((cmp-macroexpand `(,(car form) ,(cadr form) (or ,@(cddr form)))))))
(si::putprop 'or 'or-compiler-macro 'si::compiler-macro-prop)

(defvar *basic-inlines* nil)

(defun c1comment (args)
  (list 'comment (make-info :type nil) (with-output-to-string (s) (princ (car args) s))))
(defun c2comment (comment)
  (wt-nl "/*" comment "*/"))
(si::putprop 'comment 'c1comment 'c1)
(si::putprop 'comment 'c2comment 'c2)

(defun assert-safety (form)
  (let* ((l (pop form))(b (pop form)))
    (assert (eq 'let* l))
    (multiple-value-bind
     (doc decl ctps body)
     (parse-body-header form)
     `(,l ,b ,@(when doc `(doc)) 
	  ,@(subst-if `(optimize (safety ,(this-safety-level))) 
		      (lambda (x) (labels ((f (x y) (when (consp x) (eq (car x) y)))) 
					  (or (f x 'safety) (and (f x 'optimize) (f (cadr x) 'safety)))))
		      decl)
	  ,@ctps
	  ,@body))))

;; (defun assert-safety (forms)
;;   (dolist (form (cddr forms))
;;     (cond ((stringp form))
;; 	  ((and (consp form) (eq (car form) 'declare))
;; 	   (dolist (decl (cdr form))
;; 	     (cond ((atom decl))
;; 		   ((when (eq (car decl) 'optimize) (setq decl (cadr decl)) nil))
;; 		   ((eq (car decl) 'safety) (setf (cadr decl) (this-safety-level))))))
;; 	  ((return nil)))))

(defun c1inline (args env inls)
  (let* ((cl (pop args))
	 (fm (pop args))
	 (nargs (under-env env (c1let-* (cdr fm) t inls)))
	 (nm (car cl))
	 (nm (if (symbolp nm) nm (tmpsym)))
	 (s (with-output-to-string (s) (princ cl s))))
    (assert (and (eq (car fm) 'let*) (not args)))
    (cond ((eq (car nargs) 'lit)
	   (setf (fourth nargs) (string-concatenate (fourth nargs) (if *annotate* (string-concatenate "/* " s " */") "")) nargs nargs))
	  ((eq (car nargs) 'var) nargs)
	  ((list 'inline (copy-info (cadr nargs)) nm s nargs)))))

;; (defun c1inline (args env inls)
;;   (let* ((cl (pop args))
;; 	 (fm (pop args))
;; 	 (nargs (under-env env (c1let-* (cdr fm) t inls)))
;; 	 (nm (car cl))
;; 	 (nm (if (symbolp nm) nm (tmpsym)))
;; 	 (s (with-output-to-string (s) (princ cl s))))
;;     (assert (and (eq (car fm) 'let*) (not args)))
;;     (if (member (car nargs) '(lit var))
;; 	(setf (fourth nargs) (string-concatenate (fourth nargs) (if *annotate* (string-concatenate "/* " s " */") "")) nargs nargs)
;;       (list 'inline (copy-info (cadr nargs)) nm s nargs))))

;; (defun c1inline (args env inls)
;;   (let* ((cl (pop args))
;; 	 (fm (pop args))
;; 	 (nargs (under-env env (c1let-* (cdr fm) t inls)))
;; 	 (nm (car cl))
;; 	 (nm (if (symbolp nm) nm (tmpsym)))
;; 	 (s (with-output-to-string (s) (princ cl s))))
;;     (assert (and (eq (car fm) 'let*) (not args)))
;;     (if (eq (car nargs) 'lit)
;; 	(setf (fourth nargs) (string-concatenate (fourth nargs) (if *annotate* (string-concatenate "/* " s " */") "")) nargs nargs)
;;       (list 'inline (copy-info (cadr nargs)) nm s nargs))))

;; (defun c1inline (args env inls)
;;   (let* ((cl (pop args))
;; 	 (fm (pop args))
;; 	 (nargs (under-env env (c1let-* (cdr fm) t inls)))
;; 	 (nm (car cl))
;; 	 (nm (if (symbolp nm) nm (tmpsym))))
;;     (assert (and (eq (car fm) 'let*) (not args)))
;;     (list 'inline (copy-info (cadr nargs)) nm (with-output-to-string (s) (princ cl s)) nargs)))

;; (defun c1inline (args env inls &aux (ce (current-env)))
;;   (let* ((cl (pop args))
;; 	 (fm (pop args))
;; 	 (nargs (under-env env (c1let-* (cdr fm) t ce inls)))
;; 	 (nm (car cl))
;; 	 (nm (if (symbolp nm) nm (tmpsym))))
;;     (assert (and (eq (car fm) 'let*) (not args)))
;;     (list 'inline (copy-info (cadr nargs)) nm (with-output-to-string (s) (princ cl s)) nargs)))

;; (defun c1inline (args)
;;   (let* ((nargs (c1expr (cadr args)))
;; 	 (nm (caar args))
;; 	 (nm (if (symbolp nm) nm (tmpsym))))
;;     (list 'inline (copy-info (cadr nargs)) nm (with-output-to-string (s) (princ (car args) s)) nargs)))

(defvar *annotate* nil)

(defun c2inline (name comment expr)
  (declare (ignore name))
  (when *annotate* (wt-nl "/*" comment "*/"))
  (c2expr expr)
  ;; (let* ((tri (tail-recursion-info name nil expr))
  ;; 	 (tri (when (cdr tri) tri))
  ;; 	 (*unwind-exit* (if tri (cons 'tail-recursion-mark *unwind-exit*) *unwind-exit*)))
  ;;   (c2expr expr))
  (when *annotate* (wt-nl "/* END " comment "*/")))
(si::putprop 'inline 'c1inline 'c1)
(si::putprop 'inline 'c2inline 'c2)

(defun c1size (form)
  (cond ((atom form) 0)
	((1+ (+ (c1size (car form)) (c1size (cdr form)))))))


(defvar *inline-forms* nil)

(defun copy-vars (form)
  (cond ((var-p form) (setf (var-store form) (var-kind form)))
	((consp form) (copy-vars (car form)) (copy-vars (cdr form)))))

(defun set-vars (form)
  (cond ((var-p form) (setf (var-kind form) (var-store form)))
	((consp form) (set-vars (car form)) (set-vars (cdr form)))))

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
;(dolist (l '(typep coerce constantly complement open load delete-package import compile compile-file
;		  error cerror warn break get-setf-method make-list))
;  (si::putprop l t 'cmp-no-src-inline))

(defvar *prop-hash* nil); (make-hash-table :test 'equal))
(defvar *src-inline-recursion* nil)
(defvar *prev-sri* nil)

(defvar *src-hash* (make-hash-table :test 'eq))

(defun src-inlineable (form)
  (let ((n (car form)))
    (and (symbolp n)
	 (not (get n 'cmp-no-src-inline))
	 (fboundp n)
	 (or (gethash n *src-hash*) 
	     (setf (gethash n *src-hash*)
		   (let ((fn (symbol-function n))) (when (functionp fn) (function-lambda-expression fn)))))
	 (or (inline-asserted n)
	     (eq (symbol-package n) (load-time-value (find-package 'c)))
	     (multiple-value-bind (s k) (find-symbol (symbol-name n) 'lisp) 
				  (when (eq n s) (eq k :external)))))))

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
    (when cp (keyed-cmpnote 'inline-hash "not hashing ~s due to closure~%" form))
    (when vvp (keyed-cmpnote 'inline-hash "not hashing ~s due to vv objs~%" form))
    (when rec (keyed-cmpnote 'inline-hash "not hashing ~s due to recursion~%" form))
    (not (or cp vvp rec))))

	   
(defun info-form-alist (o n)
  (mapcan (lambda (o) 
	    (when o
	      (let ((n (car (member (info-unused1 (cadr o)) n :key (lambda (x) (when x (info-unused1 (cadr x))))))))
		(when n (list (cons o n)))))) o))

;; (defun array-replace (x y z)
;;   (do ((i 0 (1+ i))) ((>= i (length x)))
;;     (when (eq y (aref x i))
;;       (setf (aref x i) z))))

;; (defun info-replace-var (x y z)
;;   (array-replace (info-referred-array x) y z)
;;   (array-replace (info-changed-array x) y z))

(defun info-replace-var (x y z)
  (nsubst z y (info-ref x))
  (nsubst z y (info-ch x)))

(defun info-var-match (i v)
  (or (is-referred v i) (is-changed v i)))

(defun collect-matching-vars (ov f)
  (cond ((var-p f) (when (or (member f ov) (list-split (var-aliases f) ov)) (list f)))
	((info-p f) (let (r) 
		      (dolist (ov ov r) 
			(when (info-var-match f ov) (push ov r)))))
	((atom f) nil)
	((nunion (collect-matching-vars ov (car f)) (collect-matching-vars ov (cdr f))))))

(defun collect-matching-info (ov f)
  (cond ((info-p f) (when (member-if (lambda (x) (info-var-match f x)) ov) (list f)))
	((atom f) nil)
	((nunion (collect-matching-info ov (car f)) (collect-matching-info ov (cdr f))))))

(defun fms-fix (f fms)
  (let* ((vv (collect-matching-vars (third f) fms))
	 (ii (collect-matching-info vv fms))
	 (nv (mapcar 'copy-var vv))
	 (a (mapcar 'cons vv nv))
	 (nv (mapc (lambda (x) (setf (var-aliases x) (sublis a (var-aliases x)))) nv))
	 (ni (mapcar 'copy-info ii))
	 (ni (mapc (lambda (x) (mapc (lambda (y z) (info-replace-var x y z)) vv nv)) ni)))
    (sublis (nconc a (mapcar 'cons ii ni)) fms)))
  
(defun get-inline-h (form prop fms)

  (let ((h (when *prop-hash* (gethash prop *prop-hash*))))

    (when h

      (unless (acceptable-inline h form (cddr prop))
	(return-from get-inline-h (cons nil (cdr h))))

      (let* ((f (car h))
	     (fms (fms-fix (fourth f) fms))
	     (al (info-form-alist (car (last h)) fms))
	     (nfs (mapcar 'cdr al))
	     (oi (cadr f))
	     (info (make-info))
	     (al (cons (cons oi info) al))
	     (al (cons (cons (caddr f) (with-output-to-string (s) (princ form s))) al)))

	(set-vars f)
	(setf (info-type info) (info-type oi))
	(dolist (l nfs) (add-info info (cadr l)))

	(cons (sublis al f) (cdr h))))))
  

(defun acceptable-inline (h form tpis)
  (let* ((c1 (car h))
	 (sz (cadr h))
	 (d (and c1
		 (inline-possible (car form))
		 (or (< sz (* 1000 (- 3 (max 0 *space*))))
		     (and (< *space* 3) (member-if (lambda (x) (and (atomic-tp (car x)) (functionp (cadar x)))) tpis))))))
    (if d 
	(keyed-cmpnote 'inline "inlining ~s ~s~%" form (not (not h)))
      (keyed-cmpnote 'inline "not inlining ~s ~s ~s ~s~%" form sz (* 1000 (- 3 (max 0 *space*))) tpis))
    d))


;; (defun fms-callees (fms)
;;   (mapcan
;;    (lambda (x) 
;;      (when (eq (car x) 'function) 
;;        (let ((fun (caaddr x))) 
;; 	 (when (fun-p fun)
;; 	   (cadr (fun-call fun)))))) fms))

;; (defun push-callees (fms)
;;   (let ((fc (fms-callees fms)))
;;     (setq *callees* (nunion *callees* fc :test 'eq :key 'car))))

(defun bind-all-vars-int (form nf bindings)
  (cond ((null form)
	 (list bindings (nreverse nf)))
	((consp (car form))
	 (let ((lwf (bind-all-vars-int (cdar form) (list (caar form)) bindings)))
	   (bind-all-vars-int (cdr form) (cons (cadr lwf) nf) (car lwf))))
	(t
	 (let* ((sym (if (symbolp (car form)) (cdr (assoc (car form) bindings)) (car form)))
		(bindings (if sym bindings (cons (cons (car form) (tmpsym)) bindings)))
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

(defun maybe-reverse-type-prop (dt f)
  (unless (or *safe-compile* (when (consp f) (eq (car f) 'lit)));FIXME push-vbind/c1var copy
    (set-form-type f dt)))

;; (defun maybe-reverse-type-prop (dt f)
;;   (unless *safe-compile*
;;     (set-form-type f dt)))

(defun cll (fn)
  (car (member (sir-name fn) *src-inline-recursion* :key 'caar)))

(defun inline-sym-src (n)
  (and (inline-possible n)
       (or (inline-asserted n)
	   (get n 'consider-inline)
	   (multiple-value-bind (s k) (find-symbol (symbol-name n) :cl) 
				(when (eq n s) (eq k :external))))
       (or (local-fun-src n)
	   (let ((fn (when (fboundp n) (symbol-function n))))
	     (when (functionp fn) 
	       (unless (typep fn 'generic-function)
		 (values (or (gethash fn *src-hash*) (setf (gethash fn *src-hash*) (function-lambda-expression fn))))))))))

;; (defun inline-sym-src (n)
;;   (and (inline-possible n)
;;        (or (inline-asserted n)
;; 	   (eq (symbol-package n) (load-time-value (find-package :c)))
;; 	   (eq (symbol-package n) (load-time-value (find-package :libm)))
;; 	   (eq (symbol-package n) (load-time-value (find-package :libc)))
;; 	   (multiple-value-bind (s k) (find-symbol (symbol-name n) :cl) 
;; 				(when (eq n s) (eq k :external))))
;;        (or (local-fun-src n)
;; 	   (let ((fn (when (fboundp n) (symbol-function n))))
;; 	     (when (functionp fn) 
;; 	       (unless (typep fn 'generic-function)
;; 		 (values (or (gethash fn *src-hash*) (setf (gethash fn *src-hash*) (function-lambda-expression fn))))))))))

;; (defun inline-sym-src (n)
;;   (and (inline-possible n)
;;        (or (inline-asserted n)
;; 	   (eq (symbol-package n) (load-time-value (find-package 'c)))
;; 	   (eq (symbol-package n) (load-time-value (find-package "libm")))
;; 	   (eq (symbol-package n) (load-time-value (find-package "libc")))
;; 	   (multiple-value-bind (s k) (find-symbol (symbol-name n) 'lisp) 
;; 				(when (eq n s) (eq k :external))))
;;        (or (local-fun-src n)
;; 	   (let ((fn (when (fboundp n) (symbol-function n))))
;; 	     (when (functionp fn) (values (function-lambda-expression fn)))))))

;; (defun inline-sym-src (n)
;;   (and (inline-possible n)
;;        (or (inline-asserted n)
;; 	   (eq (symbol-package n) (load-time-value (find-package 'c)))
;; 	   (multiple-value-bind (s k) (find-symbol (symbol-name n) 'lisp) 
;; 				(when (eq n s) (eq k :external))))
;;        (or (local-fun-src n)
;; 	   (gethash n *src-hash*) 
;; 	   (setf (gethash n *src-hash*)
;; 		 (let ((fn (when (fboundp n) (symbol-function n))))
;; 		   (when (functionp fn) (function-lambda-expression fn)))))))

(defun inline-src (fn)
  (unless *compiler-new-safety*
    (when (> *speed* 0)
      (cond ((symbolp fn) (inline-sym-src fn))
	    ((and (consp fn) (eq (car fn) 'lambda)) fn)))))

(defun ttl-tag-src (src &optional (tag (tmpsym)) (block (tmpsym)) &aux (h (pop src)) (ll (pop src)))
  (setf (get tag 'ttl-tag) t)
  (multiple-value-bind
   (doc decls ctps body)
   (parse-body-header src)
   (let* ((aux (member '&aux ll));FIXME centralize with new-defun-args
	  (ll (ldiff ll aux))
	  (regs (mapcar (lambda (x) (cond ((symbolp x) x) ((symbolp (car x)) (car x)) ((cadar x)))) ll))
	  (regs (set-difference regs '(&optional &rest &key &allow-other-keys)))
	  (od (split-decls regs decls))
	  (rd (cons `(declare (optimize (safety ,(decl-safety decls)))) (pop od)))
	  (oc (split-ctps regs ctps))
	  (rc (pop oc))
	  (n (blocked-body-name body))
	  (body (if n (cddar body) body))
	  (n (or n block))
	  (body `(block ,n (tagbody ,tag (return-from ,n (let* ,(cdr aux) ,@(car od) ,@(car oc) ,@body))))))
     `(,h ,ll ,@(when doc (list doc)) ,@rd ,@rc ,body))))

;; (defun ttl-tag-src (src &optional (tag (tmpsym)) (block (tmpsym)) &aux (h (pop src)) (ll (pop src)))
;;   (setf (get tag 'ttl-tag) t)
;;   (multiple-value-bind
;;    (doc decls ctps body)
;;    (parse-body-header src)
;;    (let* ((aux (member '&aux ll));FIXME centralize with new-defun-args
;; 	  (ll (ldiff ll aux))
;; 	  (regs (mapcar (lambda (x) (cond ((symbolp x) x) ((symbolp (car x)) (car x)) ((cadar x)))) ll))
;; 	  (regs (set-difference regs '(&optional &rest &key &allow-other-keys)))
;; 	  (od (split-decls regs decls))
;; 	  (rd (cons `(declare (optimize (safety ,(decl-safety decls)))) (pop od)))
;; 	  (oc (split-ctps regs ctps))
;; 	  (rc (pop oc))
;; 	  (n (blocked-body-name body))
;; 	  (body (if n (cddar body) body))
;; 	  (n (or n block))
;; 	  (body `(block ,n (tagbody ,tag (return-from ,n (let* ,(cdr aux) ,@(car od) ,@(car oc) ,@body))))))
;;      `(,h ,ll ,@(when doc (list doc)) ,@rd ,@rc ,body))))

;; (defun ttl-tag-src (src &optional (tag (tmpsym)) block &aux (h (pop src)) (ll (pop src)))
;;   (setf (get tag 'ttl-tag) t)
;;   (multiple-value-bind
;;    (doc decls ctps body)
;;    (parse-body-header src)
;;    (let* ((aux (member '&aux ll))
;; 	  (ll (ldiff ll aux))
;; 	  (aux (cdr aux))
;; 	  (auxv (mapcar (lambda (x) (if (consp x) (car x) x)) aux))
;; 	  (ad (split-decls auxv decls))
;; 	  (od (cadr ad))
;; 	  (ad (car ad))
;; 	  (ac (split-ctps auxv ctps))
;; 	  (oc (cadr ac))
;; 	  (ac (car ac))
;; 	  (n (blocked-body-name body))
;; 	  (body (if n (cddar body) body))
;; 	  (n (or n block))
;; 	  (body `(block ,n (tagbody ,tag (return-from ,n (let* ,aux ,@ad ,@ac ,@body))))))
;;      `(,h ,ll ,@(when doc (list doc)) ,@od ,@oc ,body))))

(defvar *int* nil)
(defmacro ttm (fn &body body)
  `(let* ((st (get-internal-real-time))
	  (res ,@body)
	  (end (- (get-internal-real-time) st))
	  (dd (or (cdr (assoc ,fn *int*)) (cdar (push (list ,fn 0 0) *int*)))))
     (incf (car dd))
     (incf (cadr dd) end)
     res))
     
(defun mi4 (fn args la src env inls &aux *callees*)
  (let* ((*compiler-check-args* (>= (this-safety-level) 2))
	 (src (assert-safety (blla (cadr src) args la (cddr src)))))
      (c1inline (list (cons fn (append args la)) src) env inls)))

;; (defun mi4 (fn args la src env &aux *callees*)
;;   (let* ((*compiler-check-args* (>= (this-safety-level) 2))
;; 	 (src (blla (cadr src) args la (cddr src))))
;;       (assert-safety src)
;;       (under-env env (c1inline (list (cons fn (append args la)) src)))))

(defun sir-tag (sir)
  (cadar (member-if (lambda (x) (and (eq (caar x) (car sir)) (cadddr x))) 
		    (reverse *src-inline-recursion*))))

(defun discrete-tp (tp)
  (cond ((atomic-tp tp))
	((and (consp tp) (eq (car tp) 'or)) (not (member-if-not 'discrete-tp (cdr tp))))))

(defun bbump-tp (tp)
  (cond ((type>= #t(and seqind (not (integer 0 0))) tp) #t(and seqind (not (integer 0 0))))
	((type>= #tseqind tp) #tseqind)
	((discrete-tp tp) tp)
	((bump-tp tp))))

;; (defun bbump-tp (tp)
;;   (cond ((type>= #tseqind tp) #tseqind)
;; 	((discrete-tp tp) tp)
;; 	((bump-tp tp))))

;; (defun bbump-tp (tp)
;;   (if (type>= #tseqind tp) #tseqind (bump-tp tp)))

(defun cln (x &optional (i 0))
  (if (atom x) i (cln (cdr x) (1+ i))))

(defun tm (ay ax &optional (i 0))
  (cond ((eq ay ax) (< (cln ax) 15))
	((consp ax) (tm ay (cdr ax) (1+ i)))))

(defun arg-types-match (tps sir &optional ctp)
  (if tps
      (and (= (length tps) (length sir));FIXME unroll strategy	       
	   (every (lambda (x y) 
		    (or (type>= x y)
			(and (type>= #tinteger x) (type>= #tinteger y))
			(when ctp 
			  (let ((ax (car (atomic-tp x)))(ay (car (atomic-tp y))))
			    (when (consp ay) ;(setq aax ax aay ay) ;(print (list aax aay))(break)
			      (not 
			       (tm ay ax)
;			       (when (and (consp ax) (<= (length ax) 15)) (tailp ay ax))
			       )))))) tps sir))
    (not (member-if 'atomic-tp sir))))

(defun prev-sir (sir &aux (f (name-sir sir))(tp sir)(n (pop tp))(l (append *src-inline-recursion* *prev-sri*))
		     (p (member n l :key 'caar))(pp (member n (cdr p) :key 'caar)))
  (when p
    (if pp
	(if (or (member f *c1exit*) (not (member-if-not 'atomic-tp tp)))
	    (member-if (lambda (x) (when (eq n (caar x)) (arg-types-match (cdar x) tp t))) p)
;	  t)
	  (let ((tag (sir-tag sir))) (if tag (throw tag nil) t)))
      (arg-types-match (cdaar p) tp))))

;; (defun prev-sir (sir &optional (s (append *src-inline-recursion* *prev-sri*)) (i 0))
;;   (cond ;((not sp) (or (> (length s) 5) (prev-sir sir s)));FIXME
;; 	((atom s) nil)
;; 	((let* ((x (pop s))(x (car x)))
;; 	   (when (eq (car x) (car sir))
;; 	     (or (> (incf i) 15)
;; 		 (if (cdr x)
;; 		     (and (= (length (cdr x)) (length (cdr sir)));FIXME unroll strategy	       
;; 			  (every (lambda (x y) (type<= (bbump-tp x) (bbump-tp y))) (cdr x) (cdr sir)))
;; 		   (not (member-if 'atomic-tp (cdr sir))))))));FIXME all eq
;; 	((prev-sir sir s i))))

;; (defun prev-sir (sir &optional (s (append *src-inline-recursion* *prev-sri*)))
;;   (cond ;((not sp) (or (> (length s) 5) (prev-sir sir s)));FIXME
;; 	((atom s) nil)
;; 	((let* ((x (pop s))(x (car x)))
;; 	   (when (eq (car x) (car sir))
;; 	     (if (cdr x)
;; 		 (and (= (length (cdr x)) (length (cdr sir)));FIXME unroll strategy	       
;; 		      (every (lambda (x y) (type<= (bbump-tp x) (bbump-tp y))) (cdr x) (cdr sir)))
;; 	       (not (member-if 'atomic-tp (cdr sir)))))));FIXME all eq
;; 	((prev-sir sir s))))

(defun maybe-cons-sir (sir tag ttag src env &aux (id (name-sir sir)))
  (cond ((and (eq src (local-fun-src id))
	      (not (let ((*funs* (if env (fourth env) *funs*)))
			 (eq src (local-fun-src id)))))
	 *src-inline-recursion*)
	((cons (list sir tag (cadr src) ttag) *src-inline-recursion*))))

(defun sir-name (id)
  (cond ((local-fun-p id)) ((symbolp id) id) ((tmpsym))))

(defun name-sir (sir &aux (f (car sir)))
  (if (fun-p f)
      (fun-name f)
    f))

(dolist (l '(upgraded-array-element-type row-major-aref row-major-aset si::set-array array-element-type))
  (setf (get l 'consider-inline) t))

(defun maybe-inline-src (fun fms src)
  (when src
    (or
     (not (symbolp fun))
     (inline-asserted fun)
     (not (get fun 'consider-inline))
     (let* ((y (get-arg-types fun))
	    (y (or (car y) #tt))
	    (y (if (eq y '*) #tt y))
	    (x (info-type (cadar fms)))
	    (x (if (eq x #tvector) #tarray x))
	    (x (if (or (type>= #tarray x) (atomic-tp x)) x #tt)));FIXME
       (not (type>= x y))))))

(defun mi3 (fun args la fms ttag envl inls &aux (src (under-env (pop envl) (inline-src fun))) (env (car envl)))
  (when (maybe-inline-src fun fms src)
    (let ((sir (cons (sir-name fun) (mapcar (lambda (x) (when x (info-type (cadr x)))) fms))))
      (unless (prev-sir sir)
	(let* ((tag (tmpsym))
	       (tsrc (ttl-tag-src src tag))
	       (*src-inline-recursion* (maybe-cons-sir sir tag ttag src env)))
	  (with-restore-vars
	   (prog1 (catch tag (mi4 fun args la tsrc env inls))
	     (keep-vars))))))))

;; (defun mi3 (fun args la fms ttag envl inls &aux (src (under-env (pop envl) (inline-src fun))) (env (car envl)))
;;   (when (maybe-inline-src fun fms src)
;;     (let ((sir (cons (sir-name fun) (mapcar (lambda (x) (when x (info-type (cadr x)))) fms))))
;;       (if (prev-sir sir)
;; 	  (let ((tag (sir-tag sir))) (when tag (throw tag nil)))
;; 	(let* ((tag (tmpsym))
;; 	       (tsrc (ttl-tag-src src tag))
;; 	       (*src-inline-recursion* (maybe-cons-sir sir tag ttag src env)))
;; 	  (with-restore-vars
;; 	   (prog1 (catch tag (mi4 fun args la tsrc env inls))
;; 	     (keep-vars))))))))

;; (defun mi3 (fun args la fms ttag envl inls &aux (src (under-env (pop envl) (inline-src fun))) (env (car envl)))
;;   (when src
;;     (let ((sir (cons (sir-name fun) (mapcar (lambda (x) (when x (info-type (cadr x)))) fms))))
;;       (if (prev-sir sir)
;; 	  (let ((tag (sir-tag sir))) (when tag (throw tag nil)))
;; 	(let* ((tag (tmpsym))
;; 	       (tsrc (ttl-tag-src src tag))
;; 	       (*src-inline-recursion* (maybe-cons-sir sir tag ttag src env)))
;; 	  (with-restore-vars
;; 	   (prog1 (catch tag (mi4 fun args la tsrc env inls))
;; 	     (keep-vars))))))))

;; (defun mi3 (fun args la fms ttag envl &aux (src (under-env (pop envl) (inline-src fun))) (env (car envl)))
;;   (when src
;;     (let ((sir (cons (sir-name fun) (mapcar (lambda (x) (when x (info-type (cadr x)))) fms))))
;;       (if (prev-sir sir)
;; 	  (let ((tag (sir-tag sir))) (when tag (throw tag nil)))
;; 	(let* ((tag (tmpsym))
;; 	       (tsrc (ttl-tag-src src tag))
;; 	       (*src-inline-recursion* (maybe-cons-sir sir tag ttag src env)))
;; 	  (with-restore-vars
;; 	   (prog1 (catch tag (mi4 fun args la tsrc env))
;; 	     (keep-vars))))))))

;; (defun mi3 (fun args la fms ttag envl &aux  (src (under-env (pop envl) (inline-src fun))) (env (car envl)))
;;   (when src
;;     (let ((sir (cons (if (symbolp fun) fun (tmpsym))
;; 		     (mapcar (lambda (x) (when x (info-type (cadr x)))) fms))))
;;       (if (prev-sir sir)
;; 	  (let ((tag (sir-tag sir))) (when tag (throw tag nil)))
;; 	(let* ((tag (tmpsym))
;; 	       (tsrc (ttl-tag-src src tag))
;; 	       (*src-inline-recursion* (maybe-cons-sir sir tag ttag src env)))
;; 	  (with-restore-vars
;; 	   (prog1 (catch tag (mi4 fun args la tsrc env))
;; 	     (keep-vars))))))))

;; (defun mod-env (ce e l);FIXME
;;   (if ce (append e l) l))

;; (defun mod-env (ce e l);FIXME
;;   (if ce e l))

(defun mod-env (ce e l);FIXME
  (if ce 
      (progn 
	(dolist (l l) (pushnew l *outer-env*))
	(append (remove-if-not (lambda (x) (or (symbolp x) (is-fun-var x))) (ldiff l e)) e))
    l))

;; (defun mod-env (ce e l);FIXME
;;   (if ce (append (remove-if-not (lambda (x) (or (symbolp x) (is-fun-var x))) (ldiff l e)) e) l))

;; (defun mod-env (ce e l);FIXME
;;   (if ce (append (remove-if (lambda (x) (or (symbolp x) (is-fun-var x))) e) l) l))


;; (defun mod-env (ce e l);FIXME
;;   (let* ((r (if ce (append (remove-if-not (lambda (x) (or (symbolp x) (is-fun-var x))) (ldiff l e)) e) l))
;; 	 ;; (vp (member-if 'var-p l))
;; 	 ;; (ol (when vp (mapcar (lambda (x) (cond ((var-p x) (var-name x)) (x))) l)))
;; 	 ;; (or (when vp (mapcar (lambda (x) (cond ((var-p x) (var-name x)) (x))) r)))
;; 	 ) 
;; ;    (unless (equal or ol) (print ol) (print or))
;;     r))

(defvar *outer-env* nil)

(defmacro under-env (env &rest forms &aux (e (tmpsym)))
  `(let* ((,e ,env)
	  (*outer-env* *outer-env*)
	  (*vars*   (mod-env ,e (pop ,e) *vars*))
	  (*blocks* (mod-env ,e (pop ,e) *blocks*))
	  (*tags*   (mod-env ,e (pop ,e) *tags*))
	  (*funs*   (mod-env ,e (pop ,e) *funs*)))
     ,@forms))

;; (defmacro under-env (env &rest forms &aux (e (tmpsym)))
;;   `(let* ((,e ,env)
;; 	  (*vars*   (mod-env ,e (pop ,e) *vars*))
;; 	  (*blocks* (mod-env ,e (pop ,e) *blocks*))
;; 	  (*tags*   (mod-env ,e (pop ,e) *tags*))
;; 	  (*funs*   (mod-env ,e (pop ,e) *funs*)))
;;      ,@forms))

;; (defmacro under-env (env form &aux (e (tmpsym)))
;;   `(let* ((,e ,env)
;; 	  (*vars*   (mod-env ,e (pop ,e) *vars*))
;; 	  (*blocks* (mod-env ,e (pop ,e) *blocks*))
;; 	  (*tags*   (mod-env ,e (pop ,e) *tags*))
;; 	  (*funs*   (mod-env ,e (pop ,e) *funs*)))
;;      ,form))

;; (defmacro under-env (env form &aux (e (tmpsym)))
;;   `(let* ((,e ,env)
;; 	  (*vars* (if ,e (pop ,e) *vars*))
;; 	  (*blocks* (if ,e (pop ,e) *blocks*))
;; 	  (*tags* (if ,e (pop ,e) *tags*))
;; 	  (*funs* (if ,e (pop ,e) *funs*)))
;;      ,form))

(defun mi2 (fun args la fms envl)
  (let* ((sir (cll fun))
	 (tag (cadr sir))
	 (targs (if la (append args (list la)) args))
	 (inl (mi3 fun args la fms tag envl (mapcar 'cons targs fms))))
    (cond (inl (keyed-cmpnote (list 'inline (if (fun-p fun) (fun-name fun) fun))
			      "inlining ~s ~s ~s" fun (mapcar (lambda (x) (info-type (cadr x))) fms) la)
	   inl)
	  ((and sir (member fun *c1exit*))
	   (keyed-cmpnote (list 'tail-recursion fun) "tail recursive call to ~s replaced with iteration" fun)
	   (c1expr (blla-recur tag (caddr sir) args la))))))

;; (defun mi2 (fun args la fms envl)
;;   (let* ((sir (cll fun))
;; 	 (tag (cadr sir))
;; 	 (targs (if la (append args (list la)) args))
;; 	 (*inline-forms* (mapcar 'cons targs fms))
;; 	 (inl (mi3 fun args la fms tag envl)))
;;     (cond (inl
;; 	   (mapc (lambda (x) (add-info (cadr inl) (cadr x))) fms);FIXME
;; 	   (when (eq (car (fifth inl)) 'let*)
;; 	     (setf (cadr (fifth inl)) (copy-info (cadr inl))))
;; 	   (keyed-cmpnote (list 'inline fun) "inlining ~s ~s ~s" fun args la)
;; 	   inl)
;; 	  ((and sir (member fun *c1exit*))
;; 	   (keyed-cmpnote (list 'tail-recursion fun)
;; 			  "tail recursive call to ~s replaced with iteration" fun)
;; 	   (c1expr (blla-recur tag (caddr sir) args la))))))

;; (defun mi2 (fun args la fms envl)
;;   (let* ((sir (cll fun))
;; 	 (tag (cadr sir))
;; 	 (targs (if la (append args (list la)) args))
;; 	 (*inline-forms* (mapcar 'cons targs fms))
;; 	 (inl (mi3 fun args la fms tag envl)))
;;     (cond (inl
;; 	   (mapc (lambda (x) (add-info (cadr inl) (cadr x))) fms);FIXME
;; 	   (when (eq (car (fifth inl)) 'let*)
;; 	     (setf (cadr (fifth inl)) (copy-info (cadr inl))))
;; 	   (keyed-cmpnote (list 'inline fun) "inlining ~s ~s ~s" fun args la)
;; 	   inl)
;; 	  ((and sir (member fun *c1exit*))
;; 	   (keyed-cmpnote (list 'tail-recursion fun)
;; 			  "tail recursive call to ~s replaced with iteration" fun)
;; 	   (c1expr (blla-recur tag (caddr sir) args la))))))

;(defvar *provisional-inline* nil)
(defun make-c1forms (fn args last info)
  (let* ((at (get-arg-types fn))
	 (nargs (c1args args info))
	 (c1l (when last (c1arg last info)))
	 (nargs (if (when last (not (type>= #tnull (info-type (cadr c1l)))))
		    (progn (add-info info (cadr c1l)) (nconc nargs (list c1l)))
		  nargs))
	 (nat (mapcar (lambda (x) (info-type (cadr x))) nargs))
	 (ss (gethash fn *sigs*));FIXME?
	 (at (if (and ss (not (car ss))) nat at)))

    (mapc (lambda (x) (setf (info-type (cadr x)) (coerce-to-one-value (info-type (cadr x))))) nargs)

    (unless (or last (local-fun-p fn) (eq fn (cadr *current-form*)));FIXME
      (when (do (p ;n
		 (a at (if (eq (car a) '*) a (cdr a)))
		 (r args (cdr r))
		 (f nargs (cdr f)))
		((or p (endp f) (endp a))
		 (or p f (and a (not (eq (car a) '*))))) ; (when (setq nargs (nreverse n)) nil)))
		(check-form-type (car a) (car f) (car r))
					;	      (push (and-form-type (or (car a) '*) (car f) (car r)) n)
		(setq p (when (info-type (cadar f)) (null (info-type (cadar f))))))
	(cmpwarn "inlining of ~a prevented due to argument type mismatch: ~a ~a~%" 
		 fn at nat)
	(setf (info-type info) nil)))

    (do ((a at (if (eq '* (car a)) a (cdr a)))
	 (r args (cdr r))
	 (f nargs (cdr f)))
	((or (endp f) (endp a)) nargs)
	(maybe-reverse-type-prop (car a) (car f)))))

;; (defun make-c1forms (fn args last info)
;;   (let* ((at (get-arg-types fn))
;; 	 (nargs (c1args args info))
;; 	 (c1l (when last (c1expr last)))
;; 	 (nargs (if (when last (not (type>= #tnull (info-type (cadr c1l)))))
;; 		    (progn (add-info info (cadr c1l)) (nconc nargs (list c1l)))
;; 		  nargs))
;; 	 (nat (mapcar (lambda (x) (info-type (cadr x))) nargs))
;; 	 (ss (gethash fn *sigs*));FIXME?
;; 	 (at (if (and ss (not (car ss))) nat at)))

;;     (mapc (lambda (x) (setf (info-type (cadr x)) (coerce-to-one-value (info-type (cadr x))))) nargs)

;;     (unless (or last (local-fun-p fn) (eq fn (cadr *current-form*)));FIXME
;;       (when (do (p ;n
;; 		 (a at (if (eq (car a) '*) a (cdr a)))
;; 		 (r args (cdr r))
;; 		 (f nargs (cdr f)))
;; 		((or p (endp f) (endp a))
;; 		 (or p f (and a (not (eq (car a) '*))))) ; (when (setq nargs (nreverse n)) nil)))
;; 		(check-form-type (car a) (car f) (car r))
;; 					;	      (push (and-form-type (or (car a) '*) (car f) (car r)) n)
;; 		(setq p (when (info-type (cadar f)) (null (info-type (cadar f))))))
;; 	(cmpwarn "inlining of ~a prevented due to argument type mismatch: ~a ~a~%" 
;; 		 fn at nat)
;; 	(setf (info-type info) nil)))

;;     (do ((a at (if (eq '* (car a)) a (cdr a)))
;; 	 (r args (cdr r))
;; 	 (f nargs (cdr f)))
;; 	((or (endp f) (endp a)) nargs)
;; 	(maybe-reverse-type-prop (car a) (car f)))))

;; (defun make-c1forms (fn args last info &aux (*provisional-inline* t))
;;   (let* ((at (get-arg-types fn))
;; 	 (nargs (c1args (append args (when last (list last))) info))
;; 	 (nat (mapcar (lambda (x) (info-type (cadr x))) nargs))
;; 	 (ss (gethash fn *sigs*));FIXME?
;; 	 (at (if (and ss (not (car ss))) nat at)))

;;     (mapc (lambda (x) (setf (info-type (cadr x)) (coerce-to-one-value (info-type (cadr x))))) nargs)

;;     (unless (or (local-fun-p fn) (eq fn (cadr *current-form*)));FIXME
;;       (when (do (p ;n
;; 		 (a at (if (eq (car a) '*) a (cdr a)))
;; 		 (r args (cdr r))
;; 		 (f nargs (cdr f)))
;; 		((or p (endp f) (endp a))
;; 		 (or p f (and a (not (eq (car a) '*))))) ; (when (setq nargs (nreverse n)) nil)))
;; 		(check-form-type (car a) (car f) (car r))
;; 					;	      (push (and-form-type (or (car a) '*) (car f) (car r)) n)
;; 		(setq p (when (info-type (cadar f)) (null (info-type (cadar f))))))
;; 	(cmpwarn "inlining of ~a prevented due to argument type mismatch: ~a ~a~%" 
;; 		 fn at nat)
;; 	(setf (info-type info) nil)))

;;     (do ((a at (if (eq '* (car a)) a (cdr a)))
;; 	 (r args (cdr r))
;; 	 (f nargs (cdr f)))
;; 	((or (endp f) (endp a)) nargs)
;; 	(maybe-reverse-type-prop (car a) (car f)))))

(defun make-ordinary (fn &aux *c1exit*);FIXME *c1exit*
  (let* ((s (tmpsym))(g (tmpsym))
	 (e (c1let-* `(((,s ,g)) (etypecase ,s ((and symbol (not boolean)) (fsf ,s)) (function ,s))) t (list (cons g fn))))
	 (info (make-info)))
    (add-info info (cadr e))
    (list 'ordinary info e)))

;; (defun make-ordinary (fn)
;;   (let* ((s (tmpsym))(g (tmpsym))
;; 	 (e (c1let-* `(((,s ,g)) (etypecase ,s (symbol (fsf ,s)) (function ,s))) t (list (cons g fn))))
;; 	 (info (make-info)))
;;     (add-info info (cadr e))
;;     (list 'ordinary info e)))

;; (defun make-ordinary (fn)
;;   (let* ((s (tmpsym))(g (tmpsym))
;; 	 (e (c1let-* `(((,s ,g)) (etypecase ,s (symbol (fsf ,s)) (function ,s))) t nil (list (cons g fn))))
;; 	 (info (make-info)))
;;     (add-info info (cadr e))
;;     (list 'ordinary info e)))

;; (defun make-ordinary (fn)
;;   (let* ((s (tmpsym))(g (tmpsym))
;; 	 (*inline-forms* (list (cons g fn)))
;; 	 (e (c1expr `(let* ((,s ,g)) (etypecase ,s (symbol (fsf ,s)) (function ,s))))))
;;     (list 'ordinary (cadr e) e)))

;; (defun make-ordinary (fn)
;;   (let* ((s (tmpsym))(g (tmpsym))
;; 	 (*inline-forms* (list (cons g fn)))
;; 	 (e (c1expr `(let* ((,s ,g)) (if (symbolp ,s) (fsf ,s) ,s)))))
;;     (list 'ordinary (cadr e) e)))

;; (defun or-ccb-assignments (fms)
;;   (mapc (lambda (v)
;; 	  (when (var-p v) 
;; 	    (let ((tp (get (var-store v) 'ccb-tp)));FIXME setq tp nil?
;; 	      (when tp
;; 		(do-setq-tp v '(ccb-ref) (type-or1 (var-type v) (get (var-store v) 'ccb-tp)))
;; 		(setf (var-store v) +opaque+))))) *vars*))


(defun or-ccb-assignments (fms)
  (mapc (lambda (x &aux (i (cadr x))) 
	  (mapc (lambda (v)
		  (when (var-p v) 
		    (let ((tp (get (var-store v) 'ccb-tp)));FIXME setq tp nil?
		      (when tp
			(do-setq-tp v '(ccb-ref) (type-or1 (var-type v) (get (var-store v) 'ccb-tp)))
			(setf (var-store v) +opaque+))))) (append (info-ref-ccb i) (info-ref-clb i)))) fms))

(defun mi6 (fn fms)
  (or-ccb-assignments fms)
  (unless (and (symbolp fn) (get fn 'c1no-side-effects))
    (dolist (f fms)
      (when (and (consp f) (eq (car f) 'var))
	(let* ((ft (info-type (cadr f)))
	       (p (when (and ft (type>= #tcons ft)) #tcons))
	       (p (when (and p (type>= #tproper-cons ft)) #tproper-cons)))
	  (when (and p (not (type>= ft p)))
	    (bump-pcons (caaddr f) p)))))))

;; (defun mi6 (fn fms)
;;   (unless (and (symbolp fn) (get fn 'c1no-side-effects))
;;     (dolist (f fms)
;;       (when (and (consp f) (eq (car f) 'var))
;; 	(let* ((ft (info-type (cadr f)))
;; 	       (p (when (and ft (type>= #tcons ft)) #tcons))
;; 	       (p (when (and p (type>= #tproper-cons ft)) #tproper-cons)))
;; 	  (when (and p (not (type>= ft p)))
;; 	    (bump-pcons (caaddr f) p)))))))


(defun mi5 (fn info fms la &aux (ll (when la (list (length fms)))) fd)
  (mi6 fn fms)
  (let ((r (assoc fn *recursion-detected*))) (when r (setf (cdr r) t)))
  (cond	((consp fn) 
	 (let ((ord (make-ordinary fn)))
	   (add-info info (cadr ord))
	   `(,(if la 'apply 'funcall) ,info ,ord ,fms)))
	((setq fd (c1local-fun fn))
	 (add-info info (cadr fd))
	 (setf (info-type info) (if (eq (info-type (cadr fd)) 'boolean) #tboolean (info-type (cadr fd))));FIXME
	 `(call-local ,info ,(nconc (caddr fd) ll) ,(cadddr fd) ,(fifth fd) ,fms));FIXME
	(`(call-global ,info ,fn ,fms nil ,@ll))))

;; (defun mi5 (fn info fms la &aux (ll (when la (list (length fms)))) fd)
;;   (mi6 fn fms)
;;   (when (eq fn (cadr *current-form*)) (setq *recursion-detected* t))
;;   (cond	((consp fn) 
;; 	 (let ((ord (make-ordinary fn)))
;; 	   (add-info info (cadr ord))
;; 	   `(,(if la 'apply 'funcall) ,info ,ord ,fms)))
;; 	((setq fd (c1local-fun fn))
;; 	 (add-info info (cadr fd))
;; 	 (setf (info-type info) (if (eq (info-type (cadr fd)) 'boolean) #tboolean (info-type (cadr fd))));FIXME
;; 	 `(call-local ,info ,(nconc (caddr fd) ll) ,(cadddr fd) ,(fifth fd) ,fms));FIXME
;; 	(`(call-global ,info ,fn ,fms nil ,@ll))))

;; (defun mi5 (fn info fms la 
;; 	       &aux (nlast (when la (type>= #tnull (info-type (cadr (car (last fms)))))))
;; 	       (fms (if nlast (butlast fms) fms))
;; 	       (la (unless nlast la))
;; 	       (ll (when la (list (length fms)))))
;;   (mi6 fn fms)
;;   (when (eq fn (cadr *current-form*)) (setq *recursion-detected* t))
;;   (cond	((consp fn) `(,(if la 'apply 'funcall) ,info ,(make-ordinary fn) ,fms))
;; 	((let ((fd (c1local-fun fn)))
;; 	   (when fd
;; 	     (add-info info (cadr fd))
;; 	     (setf (info-type info) (if (eq (info-type (cadr fd)) 'boolean) #tboolean (info-type (cadr fd))))
;; 	     `(call-local ,info ,(append (caddr fd) ll) ,fms))))
;; 	(`(call-global ,info ,fn ,fms nil ,@ll))))

;; (defun mi5 (fn info fms la &aux (ll (when la (list (length fms)))))
;;   (mi6 fn fms)
;;   (when (eq fn (cadr *current-form*)) (setq *recursion-detected* t))
;;   (cond	((consp fn) `(,(if la 'apply 'funcall) ,info ,(make-ordinary fn) ,fms))
;; 	((let ((fd (c1local-fun fn)))
;; 	   (when fd
;; 	     (add-info info (cadr fd))
;; 	     (setf (info-type info) (if (eq (info-type (cadr fd)) 'boolean) #tboolean (info-type (cadr fd))))
;; 	     `(call-local ,info ,(append (caddr fd) ll) ,fms))))
;; 	(`(call-global ,info ,fn ,fms nil ,@ll))))


(defun type-from-args (fun fms last info &aux x)
  (when (symbolp fun)
    (setf (info-type info) (type-and (or (get-return-type fun) '*) (info-type info)))
    (unless (get fun 'c1no-side-effects)
      (setf (info-flags info) (logior (info-flags info) (iflags side-effects)))));FIXME
  (cond ((setq x (member-if-not 'identity fms :key (lambda (x) (info-type (cadr x)))))
	 (keyed-cmpnote (list fun 'nil-arg)
			"Setting return type on call to ~s to nil due to nil-typed form ~s"
			fun x)
	 (setf (info-type info) nil))
	(last)
	((and (symbolp fun) (not (local-fun-p fun)))
	 (let ((tp (result-type-from-args fun (mapcar (lambda (x) (info-type (cadr x))) fms))))
	   (when tp
	     (setf (info-type info) (type-and (info-type info) tp))))))
  (info-type info))

(defun coerce-ff (ff)
  (coerce-to-funid (car (atomic-tp (info-type (cadr ff))))));(when (member (car ff) '(foo location var)) ))

(defun coerce-to-local-fn (ob)
  (if (functionp ob) ob (local-fun-fn ob)))

(defun ff-env (ff)
  (cond ((not ff) nil)
	((symbolp ff) (ff-env (local-fun-fn ff)))
	((consp ff) (ff-env (car (atomic-tp (info-type (cadr ff))))))
	((functionp ff) (list (fn-get ff 'ce) (fn-get ff 'df))))) 
	
  ;; (let* ((fn (when ff (coerce-to-local-fn (car (atomic-tp (info-type (cadr ff))))))))
  ;;   (when fn
  ;;     (let* ((ce (fn-get fn 'ce))
  ;; 	     (df (fn-get fn 'df)))
  ;; 	(list ce df)))))

;; (defun ff-env (ff)
;;   (when ff
;;     (values (gethash (coerce-to-local-fn (car (atomic-tp (info-type (cadr ff))))) *fun-ev-hash*))))

;; (defun coerce-to-local-fun (ob)
;;   (if (functionp ob) ob (local-fun-fun ob)))

;; (defun ff-env (ff)
;;   (when ff
;;     (gethash (coerce-to-local-fun (car (atomic-tp (info-type (cadr ff))))) *fun-ev-hash*)))
;;   (case (car ff)
;; 	(location (gethash (local-fun-fun (car (atomic-tp (info-type (cadr ff))))) *fun-ev-hash*))
;; 	(foo (gethash (car (atomic-tp (info-type (cadr ff)))) *fun-ev-hash*))))
;  (when (member (car ff) '(foo location)) (gethash (car (atomic-tp (info-type (cadr ff)))) *fun-ev-hash*)))

(defun mi1a (fun args last info &optional ff &aux (*in-inline* t))

  (let* ((otp (info-type info))
	 (fms (make-c1forms fun args last info))
	 (last (when (and last (nth (length args) fms)) last))
	 (tp (type-from-args fun fms last info))
	 (inl (when (or tp (eq otp tp)) (mi2 fun args last fms (ff-env (or ff fun))))))
    (or inl (mi5 (or (when (symbolp fun) fun) ff) info fms last))))

;; (defun mi1a (fun args last info &aux (*in-inline* t))

;;   (let* ((af (member fun '(apply funcall)))
;; 	 (ff (when af (c1arg (pop args) info)))
;; 	 (fun (if ff (coerce-ff ff) fun));FIXME, e.g. when funcall
;; 	 (otp (info-type info))
;; 	 (fms (make-c1forms fun args last info))
;; 	 (last (when (and last (nth (length args) fms)) last))
;; 	 (tp (type-from-args fun fms last info))
;; 	 (inl (when (or tp (eq otp tp)) (mi2 fun args last fms (ff-env (or ff fun))))))
;;     (or inl (mi5 (or (when (symbolp fun) fun) ff) info fms last))))

;; (defun mi1a (fun args last info &aux (*in-inline* t))

;;   (let* ((af (member fun '(apply funcall)))
;; 	 (ff (when af (c1expr (pop args))))
;; 	 (fun (if ff (coerce-ff ff) fun));FIXME, e.g. when funcall
;; 	 (otp (info-type info))
;; 	 (fms (make-c1forms fun args last info))
;; 	 (last (when (and last (nth (length args) fms)) last))
;; 	 (tp (type-from-args fun fms last info))
;; 	 (inl (when (or tp (eq otp tp)) (mi2 fun args last fms (ff-env (or ff fun))))))
;;     (or inl (mi5 (or (when (symbolp fun) fun) ff) info fms last))))

;; (defun mi1a (fun args last info &aux (*in-inline* t) *provisional-inline*)

;;   (let* ((fms (make-c1forms fun args last info))
;; 	 (af (member fun '(apply funcall)))
;; 	 (args (if af (cdr args) args))
;; 	 (ff (when af (pop fms)))
;; 	 (fun (if ff (coerce-ff ff) fun))
;; 	 (tp (type-from-args fun fms last info))
;; 	 (inl (when tp (mi2 fun args last fms (ff-env ff)))))
;;     (or (uui inl) (mi5 (or (when (symbolp fun) fun) (uu ff)) info (uu fms) last))))

;; (defun mi1a (fun args last info &aux (*in-inline* t))

;;   (let* ((fms (make-c1forms fun args last info))
;; 	 (af (member fun '(apply funcall)))
;; 	 (args (if af (cdr args) args))
;; 	 (ff (when af (pop fms)))
;; 	 (fun (if ff (coerce-ff ff) fun))
;; 	 (tp (type-from-args fun fms last info))
;; 	 (inl (when tp (mi2 fun args last fms (ff-env ff)))))
;;     (uu (or inl (mi5 (or (when (symbolp fun) fun) ff) info fms last)))))


(defun unprovfn (w &optional b fun &aux (f (cddr w)) (args (pop f)) (env (caar f)))
  (let ((r (under-env env (c1function args nil b fun))))
    (mapl (lambda (x y) (setf (car x) (car y))) w r)
    (setf (cdddr w) nil)
    w))

;; (defun unprovfn (f &optional b fun &aux (args (pop f)) (env (caar f)))
;;   (under-env env (c1function args nil b fun)))
;; (defun unfoo (f)
;;   (c1function (caddr f) nil (cadddr f)))

(defun current-env nil (list *vars* *blocks* *tags* *funs*))

(defun uui (inl &aux (m inl))
  (when (eq (car m) 'inline)
    (when (eq (car (setq m (car (last m)))) 'let*)
      (uu (fourth m))))
  inl)

(defun uu (f)
  (cond ((atom f) f)
	((eq (car f) 'provfn) (unprovfn f))
	(t (uu (car f)) (uu (cdr f)) f)))

;; (defun uu (f)
;;   (cond ((atom f) f)
;; 	((eq (car f) 'provfn) (unprovfn (cddr f)))
;; 	((setf (car f) (uu (car f)) (cdr f) (uu (cdr f)) f f))))
;; (defun uu (f)
;;   (cond ((atom f) f)
;; 	((eq (car f) 'foo) (unfoo f))
;; 	((let* ((a (car f))(d (cdr f)) (ua (uu a))(ud (uu d)))
;; 	   (if (and (eq a ua) (eq d ud)) f (cons ua ud))))))

(defun mi1 (fn args &optional last ff)
  (let* ((tp (get-return-type fn))
	 (sp (if (when (symbolp fn) (get fn 'no-sp-change)) 0 1))
	 (info (make-info :type tp :sp-change sp))
 	 (res (mi1a fn args last info ff)))
    (when tp 
      (let ((t1 (info-type (cadr res)))(t2 (info-type info)))
	(when (exit-to-fmla-p)
	  (labels ((tb (tp) (type-or1 (when (type-and #tnull tp) #tnull)
				      (when (type-and #t(not null) tp) #t(member t)))))
		  (setq t1 (tb t1) t2 (tb t2))))
	(setf (info-type (cadr res)) (type-and t1 t2))))
    res))

;; (defun mi1 (fn args &optional last)
;;   (let* ((tp (get-return-type fn))
;; 	 (sp (if (get fn 'no-sp-change) 0 1))
;; 	 (info (make-info :type tp :sp-change sp))
;;  	 (res (mi1a fn args last info)))
;;     (when tp 
;;       (let ((t1 (info-type (cadr res)))(t2 (info-type info)))
;; 	(when (exit-to-fmla-p)
;; 	  (labels ((tb (tp) (type-or1 (when (type-and #tnull tp) #tnull)
;; 				      (when (type-and #t(not null) tp) #t(member t)))))
;; 		  (setq t1 (tb t1) t2 (tb t2))))
;; 	(setf (info-type (cadr res)) (type-and t1 t2))))
;;     res))

;; (defun mi1 (fn args &optional last)
;;   (let* ((tp (get-return-type fn))
;; 	 (sp (if (get fn 'no-sp-change) 0 1))
;; 	 (info (make-info :type tp :sp-change sp))
;;  	 (res (mi1a fn args last info)))
;;     (when tp (setf (info-type (cadr res)) (type-and (info-type info) (info-type (cadr res)))));FIXME
;;     res))

;; (defun mi1 (fn args &optional last)
;;   (let* ((tp (get-return-type fn))
;; 	 (sp (if (get fn 'no-sp-change) 0 1))
;; 	 (info (make-info :type tp :sp-change sp))
;; 	 (res (mi1a fn args last info)))
;;     (setf (info-type (cadr res)) (type-and (info-type info) (info-type (cadr res))))
;;     res))

(defun local-fun-p (fname)
  (car (member-if (lambda (x) (when (fun-p x) (eq (fun-name x) fname))) *funs*)))

(defun local-fun-call (id)
  (let* ((fun (local-fun-p id)))
    (when fun (fun-call fun))))

(defun cmp-expand-macro-w (fd x)
  (macroexpand-helper
   (and *record-call-info* (add-macro-callee (car x)))
   `(funcall *macroexpand-hook* ',fd ',x ',*macrolet-env*)
   x))

(defun c1symbol-fun (whole &aux (fname (car whole)) (args (cdr whole)) fd)
  (values
   (cond ((setq fd (get fname 'c1special)) (funcall fd args))
	 ((and (setq fd (get fname 'co1special)) (funcall fd fname args)))
	 ((setq fd (caddar (member fname (cadr *macrolet-env*) :key 'car)))
	  (c1expr (cmp-expand-macro-w fd whole)));FIXME scope level with local funs
	 ((local-fun-p fname) (mi1 fname args))
	 ((let ((fn (get fname 'si::compiler-macro-prop)) (res (cons fname args)))
	    (and fn
		 (not (member fname *notinline*))
		 (let ((fd (funcall fn res nil)));(cmp-eval `(funcall ',fn ',res nil))))
		   (and (not (eq res fd))
			(c1expr fd))))))
	 ((when (and *compiler-auto-proclaim*
;		     (not *in-inline*)
		     (not (macro-function fname))
		     (not (member fname '(comment recur fun-fun fun-valp vfun-nargs)));FIXME
		     (member (first *current-form*) '(defun))
		     (symbolp (second *current-form*))
		     (symbol-package (second *current-form*)))
	    (let ((fname (or (cdr (assoc fname +cmp-fn-alist+)) fname)))
	      (pushnew (cons fname (export-sig (get-sig fname)))
		       *callees* :test 'eq :key 'car))
	    nil))
;	 ((and (get fname 'c1no-side-effects) 
;	       (not (member fname '(min max)));FIXME
;	       (not (member-if-not 'constantp args)))
;	  (c1expr `(quote ,(cmp-eval `(,fname ,@args)))))
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
	 ;; ((progn
	 ;;    (and (eq (symbol-package fname) (symbol-package 'and))
	 ;; 	 (not (fboundp fname))
	 ;; 	 (cmpwarn "~A (in lisp package) is called as a function--not yet defined"
	 ;; 		  fname))
	 ;;    (and *record-call-info* (record-call-info 'record-call-info
	 ;; 					      fname))
	 ;;    nil))
	 ;;continue
	 ((setq fd (macro-function fname))
	  (c1expr (cmp-expand-macro-w fd whole)))
;; 	 ((and nil (setq fd (get fname 'si::structure-access))
;; 	       (inline-possible fname)
;;               ;;; Structure hack.
;; 	       (consp fd)
;; 	       (si:fixnump (cdr fd))
;; 	       (not (endp args))
;; 	       (endp (cdr args)))
;; 	  (case (car fd)
;; 		(vector (c1expr `(elt ,(car args) ,(cdr fd))))
;; ;		(list (c1expr `(si:list-nth ,(cdr fd) ,(car args))))
;; 		(list (c1expr `(let ((c (nthcdr ,(cdr fd) ,(car args)))) (check-type c cons) (car c))))
;; 		(t (c1structure-ref1 (car args) (car fd) (cdr fd)))))
	 ((eq fname 'si:|#,|)
	  (cmperr "Sharp-comma-macro was found in a bad place."))
	 ((mi1 fname args)))))


(defun replace-constant (lis &aux found tem)
  (do ((v lis (cdr v)))
      ((null v)  found)
      (cond ((and (constantp (car v))
		  (or (numberp (setq tem(eval (car v))))
		      (characterp tem)))
	     (setq found t) (setf (car v) tem)))))

;; (defun remove-doc-string (body)
;;   (nconc (do (d doc) ((or (not body) (if (stringp (car body)) 
;; 					 (or (endp (cdr body)) doc)
;; 				       (or (not (consp (car body))) (not (eq 'declare (caar body))))))
;; 		      (nreverse d))
;; 	     (let ((x (pop body))) (if (stringp x) (unless doc (push x doc)) (push x d)))) body))


(defun blla (l a last body &optional n nr f kbb
	       &aux r k lvp np negp ff rr ke tmp nkys post aok bk wv rv keb
	       (l (let ((s (last l))) (if (cdr s) (append (butlast l) (list (car s) '&rest (cdr s))) l)))
	       (l (subst '&rest '&body l))
	       (l (let ((al (member '&aux l))) (append (ldiff l al) (cons (setq ke (tmpsym)) al))))
	       (llk '(&whole &optional &rest &key &allow-other-keys &aux)));FIXME centralize
  (declare (optimize (safety 0)))
  (assert (not (and last n)))
  (labels
   ((vp nil 
	(let* ((v `(va-pop))
	       (v (if f `(cond (,ff (setq ,ff nil) ,f) (,v)) v)))
	  (setq f nil)
	  `(progn (setq ,np (si::number-minus ,np 1)) ,v)))
    (kesrc (nap src &aux (q (extra src)) (nap (unless np nap))) (setq keb t);fixme
	   (cond ((eq k '&key) (when (consp src) `(unless ,aok (when ,(cadr src) ,(badk bk (caddr src))))))
		 ((eq nap t) q)
		 (nap `(when ,nap ,q))))
    (rbb (v srcp src) (push (if srcp (list v src) v) r))
    (dfsrc (src defp) (if defp (na src) src))
    (rb (v src srcp defp) (rbb v srcp (dfsrc src defp)))
    (kb (v src srcp defp &aux (nap (nap))) (when nap (rbb v srcp (kesrc nap (dfsrc src defp)))))
    (bind (targ &optional (src nil srcp) defp &aux (sp (unless (symbolp targ) srcp)) (v (if sp (tmpsym) targ)))
;	FIXME  (funcall (if (eq v ke) #'kb #'rb) v src srcp defp) leads to closures
	  (if (eq v ke) (kb v src srcp defp) (rb v src srcp defp))
	  (when sp (setq r (append (nreverse (cadr (blla targ nil v nil))) r)))
	  v)
    (badll nil (error 'program-error :format-control "Bad lambda list ~s" :format-arguments (list l)))
    (insuf (x) (unless (eq x ke) `(error 'program-error :format-control "Insufficient arguments when binding ~s" :format-arguments (list ',x))))
    (extra (x) `(error 'program-error :format-control "Extra argument ~s" :format-arguments (list ,x)))
    (nokv  (x) `(error 'program-error :format-control "Key ~s missing value" :format-arguments (list ,x)))
    (badk  (x v) `(error 'program-error :format-control "Key ~s ~s not permitted" :format-arguments (list ,x ,v)))
    (bk nil (or bk (setq bk (car (push (tmpsym) r)))))
    (unbnd (l &aux (lc (when (or (eq k '&optional) (eq k '&key)) (consp l))) 
	      (ln (if lc (pop l) l)) (ld (when lc (pop l))) (lp (when lc (car l)))
	      (lc (when (eq k '&key) (consp ln))) (lnn (if lc (pop ln) ln)) (lb (if lc (car ln) ln)))
	   (values lnn lb ld lp))
    ;; (kbind (k m &optional v)
    ;; 	   `(let* ((k ,k) (v (if ,m ,v (if ,(la nil t) ,(la nil 'done) ,(nokv 'k))))) (case k ,@nkys)))
    (post nil
	  (setq nkys (nreverse nkys) kbb (tmpsym))
	  (do (k r (ex a)) ((not ex));FIXME  this is fragile as the binding must be visible to mvars/inls
	      (bind 'k (pop ex))
	      (bind 'v (if ex (pop ex) `(if ,(la nil t) ,(la nil 'done) ,(nokv 'k))))
	      (bind kbb `(case k ,@nkys)))
	  (bind kbb `(do (k v) ((not ,(la nil t))) 
			 (setq k ,(la nil 'done) v (if ,(la nil t) ,(la nil 'done) ,(nokv 'k)))
			 (case k ,@nkys)))
	  (dolist (l (nreverse post)) (apply #'bind l)))
    ;; (post nil
    ;; 	  (setq nkys (nreverse nkys))
    ;; 	  (bind bk
    ;; 		`(progn
    ;; 		   ,@(do (k r (ex a)) ((not ex) (nreverse r))
    ;; 			 (push (kbind (pop ex) (when ex t) (pop ex)) r))
    ;; 		   (do nil ((not ,(la nil t)) ,bk) ,(kbind (la nil 'done) nil))))
    ;; 	  (dolist (l (nreverse post)) (apply #'bind l)))
    (lvp (&optional rv)
	 (cond 
	  (rv (lvp) (when np (bind lvp (rpop rv))))
	  (lvp)
	  (last (bind (setq lvp (tmpsym)) last)) 
	  (n 
	   (when f (bind (setq ff (tmpsym)) t))
	   (bind (setq lvp (tmpsym)))
	   (bind (setq np (tmpsym)) n) 
	   (bind (setq negp (tmpsym)) `(< ,np 0))
	   (bind np `(if ,negp (si::number-minus 0 ,np) ,np))
	   (bind np `(si::number-minus ,np ,nr)))))
    (wcr (x) (when (cdr x) x))
    (la (def &optional p &aux (v (lvp)) (pv (eq p 'done)) (p (unless (eq p 'done) p)) (ff f) (vp (vp)))
	(when p (setq f ff))
	(wcr `(cond ,@(when (unless pv np) `(((and ,negp (= ,np 1) (setq ,lvp ,vp) ,@(unless p `(nil))))))
	       ,@(when np `(((> ,np 0) ,@(unless p (list vp)))))
	       ,@(when v `((,lvp ,@(unless p `((pop ,lvp))))))
	       ,@(when def `((,def))))))
    (na (&optional def) (if a (pop a) (la def)))
    (nap nil (if a t (la nil t)))
    (srr (rv) 
	 (unless (member-if (lambda (x) (and (eq (car x) rv) (eq (cdr x) 'dynamic-extent)))
			    (multiple-value-bind (x y z) (c1body body nil) z));FIXME!
	   (setq rr t)))
    (rpop (rv)
	  (let ((vp (tmpsym))(val (tmpsym)))
	    `(do (,vp ,val) 
		 ((>= 0 ,np) ,lvp)
		 (declare (proper-list ,val) ,@(unless (srr rv) `((:dynamic-extent ,val))))
		 (setq ,val ,(vp)
		       ,val (if (and ,negp (= ,np 0)) ,val (cons ,val nil))
		       ,vp (cond (,vp (rplacd ,vp ,val) ,val) ((setq ,lvp ,val))))))))
   (declare (notinline bind kb rb));FIXME consing, closing la lvp na dfsrc breaks
   (do ((l l)(lk llk))
       ((not l)
	(multiple-value-bind
	 (doc decls ctps body)
	 (parse-body-header body)
	 (declare (ignore doc))
	 (unless rr (when np (push `(declare (:dynamic-extent ,lvp)) decls)))
	 (when post (post))
	 (when keb (push `(declare (ignore ,ke)) decls))
	 (when kbb (push `(declare (ignore ,kbb)) decls))
	 `(let* ,(nreverse r) 
	    ,@decls
	    ,@ctps
	    ,@body)))
       (cond ((setq tmp (member (car l) lk)) (setq lk (cdr tmp) k (pop l)))
	     ((member (car l) llk) (baboon))
	     ((case k
		    (&whole (unless wv (setq k nil) (bind (setq wv (pop l)) (append a last))))
		    ((nil &optional)
		     (multiple-value-bind
		      (ln lb ld lp)
		      (unbnd (pop l))
		      (declare (ignore lb))
		      (when lp (bind lp t))
		      (let* ((ld (if k ld (insuf ln)))(ld (if lp `(progn (setq ,lp nil) ,ld) ld)))
			(bind ln ld t))))
		    (&rest
		     (cond ((not rv)
			    (setq rv (pop l))
			    (setq a (mapcar (lambda (x) (bind (tmpsym) x)) a))
			    (lvp rv)
			    (bind rv (cond ((not a) lvp) (lvp `(list* ,@a ,lvp)) (`(list ,@a)))))
			   ((unless (eq (pop l) ke) (badll)))))
		    ((&allow-other-keys &key)
		     (when (eq k '&allow-other-keys) (setq aok t k '&key))
		     (multiple-value-bind
		      (ln lb ld lp)
		      (unbnd (if aok (pop l) :allow-other-keys))
		      (let* ((lpt (tmpsym))(lbt (tmpsym))(kep (eq ln ke))
			     (lnk (if kep 'otherwise (intern (string ln) 'keyword))))
		       (bind lpt)
		       (bind lbt)
		       (push `(,lnk (unless ,lpt (setq ,lbt v ,lpt t ,@(when kep `(,(bk) k))))) nkys)
		       (if aok (push `(,lb (if ,lpt ,lbt ,ld)) post) (setq aok lbt))
		       (when lp (push `(,lp ,lpt) post)))))
		    (&aux (bind (pop l)))))))))

;; (defun blla (l a last body &optional n nr f &aux r k rb lvp np npp negp rbr ff rr aok ex ke tmp nkys post aok
;; 	       (l (let ((s (last l))) (if (cdr s) (append (butlast l) (list (car s) '&rest (cdr s))) l)))
;; 	       (al (member '&aux l))
;; 	       (l (append (ldiff l al) (cons (setq ke (tmpsym)) al)))
;; 	       (l (let ((q (member '&key l))) (if q (append (ldiff l (cdr q)) (cons 'allow-other-keys (cdr q))) l)))
;; 	       (llk '(&whole &optional &rest &body &key &allow-other-keys &aux)));FIXME centralize
;;   (assert (not (and last n)))
;;   (labels
;;    ((vp nil (let ((v `(va-pop))) 
;; 	      (when f (setq v `(cond (,ff (setq ,ff nil) ,f) (,v)) f nil))
;; 	      v))
;;     (qpop (lvp def) (if def `(if ,lvp (pop ,lvp) ,def) `(pop ,lvp)))
;;     (vpop (np negp lvp &optional def)
;; 	  (let ((q (qpop lvp def))(v (tmpsym))(vv (tmpsym)))
;; 	    `(let (,v ,vv)
;; 	       (when (> ,np 0) 
;; 		 (setq ,v ,(vp) ,np (si::number-minus ,np 1))
;; 		 (if (and ,negp (= ,np 0)) (setq ,lvp ,v) (setq ,vv t)))
;; 	       (if ,vv ,v ,q))))
;;     (lmod (k l) (case k 
;; 		      (&optional 
;; 		       (if (intersection '(&rest &key) l) l
;; 			 (let ((v (member '&aux l)))
;; 			   (append (ldiff l v) (cons (list (setq ks (tmpsym)) nil (setq ke (tmpsym))) v)))))
;; 		      (&key
;; 		       (let ((v (member '&aux l)))
;; 			 (append (cons 'allow-other-keys (ldiff l v)) (cons (setq ks (tmpsym) ke (tmpsym)) v))))
;; 		      (otherwise l)))
;;     (bind (targ src &aux (sp (symbolp targ)) (v (if sp targ (tmpsym))))
;; 	  (push (list v src) r)
;; 	  (unless sp
;; 	    (setq r (append (nreverse (cadr (blla targ nil v nil))) r))))
;;     (insuf (x) `(error 'program-error :format-control "Insufficient arguments when binding ~s" :format-arguments (list ',x)))
;;     (extra (x) `(error 'program-error :format-control "Extra argument ~s" :format-arguments (list ,x)))
;;     (nokv  (x) `(error 'program-error :format-control "Key ~s missing value" :format-arguments (list ,x)))
;;     (badk  (x) `(error 'program-error :format-control "Key ~s not permitted" :format-arguments (list ,x)))
;;     (rpop (np lvp rr)
;; 	  (let ((vp (tmpsym))(val (tmpsym)))
;; 	    `(do (,vp ,val) 
;; 		 ((>= 0 ,np) ,lvp)
;; 		 ,@(unless rr `((declare (:dynamic-extent ,val))))
;; 		 (setq ,val ,(vp)
;; 		       ,val (if (and ,negp (= ,np 1)) ,val (cons ,val nil))
;; 		       ,vp (cond (,vp (rplacd ,vp ,val) ,val) ((setq ,lvp ,val))))
;; 		 (setq ,np (si::number-minus ,np 1))))))

;;    (do ((l l)(a a)(lk llk))
;;        ((not l)
;; 	(multiple-value-bind
;; 	 (doc decls ctps body)
;; 	 (parse-body-header body)
;; 	 (unless rr (when np (push `(declare (:dynamic-extent ,lvp)) decls)))
;; 	 (when ke (push `(declare (ignore ,ke)) decls))
;; ;	 (when ke (push `(check-type ,ke null) ctps))
;; 	 `(let* ,(nreverse r) 
;; 	    ,@(when doc (list doc))
;; 	    ,@decls
;; 	    ,@ctps
;; 	    ,@body)))
;;        (cond ((setq tmp (member (car l) lk)) (setq lk (cdr tmp) k (pop l)))
;; 	     ((member (car l) llk) (baboon))
;; 	     ((eq k '&whole)
;; 	      (bind (pop l) (append a last))
;; 	      (setq k nil))
;; 	     ((when last (unless a (push (list (setq lvp (tmpsym)) last) r) (setq last nil))))
;; 	     ((not k) 
;; 	      (let* ((l (pop l))
;; 		     (kep (eq l ke)))
;; 		(bind l (if a (pop a) `(if ,lvp (pop ,lvp) ,@(unless kep (list (insuf l))))))
;; 		(when kep
;; 		  (push (list ke `(when ,ke ,(extra ke) ,ke)) r))))		
;; 	     ((when n (assert (null a))
;; 		    (setq npp t)
;; 		    (when f (push (list (setq ff (tmpsym)) t) r))
;; 		    (push (setq lvp (tmpsym)) r)
;; 		    (push (list (setq np (tmpsym)) n) r) 
;; 		    (push (list (setq negp (tmpsym)) `(< ,np 0)) r)
;; 		    (push (list np `(if ,negp (si::number-minus 0 ,np) ,np)) r)
;; 		    (push (list np `(si::number-minus ,np ,nr)) r))
;; 	      (setq n nil))
;; 	     ((eq k '&optional)
;; 	      (let* ((l (pop l)) (ap a) (a (when a (pop a)))
;; 		     (ll l)(lc (consp ll))
;; 		     (l (if lc (pop ll) ll))
;; 		     (ld (when lc (pop ll)))
;; 		     (lp (when lc (pop ll))))
;; 		(when lp
;; 		  (bind lp t))
;; 		(let ((ld (if lp `(progn (setq ,lp nil) ,ld) ld)))
;; 		  (bind l (cond (ap a) (np (vpop np negp lvp ld)) (lvp `(if ,lvp (pop ,lvp) ,ld)) (ld))))
;; 		(when (eq l ke)
;; 		  (push (list ke `(when ,ke ,(extra ke) ,ke)) r))))
;; 	     ((when a (let ((v (list (tmpsym) (pop a)))) (push v r) (push v rbr))))
;; 	     ((when rbr (setq rb (nreverse rbr) rbr nil)))
;; 	     ((when (and npp (or (eq k '&body) (eq k '&rest))); (eq k '&key)
;; 		(when (eq k '&rest)
;; 		  (let ((n (car l)))
;; 		    (unless (member-if (lambda (x) (and (eq (car x) n) (eq (cdr x) 'dynamic-extent)))
;; 				       (multiple-value-bind (x y z) (c1body body nil) z));FIXME!
;; 		      (setq rr t))))
;; 		(push (list lvp (rpop np lvp rr)) r)
;; 		(setq npp nil)))
;; 	     ((or (eq k '&rest) (eq k '&body))
;; 	      (let ((l (pop l)))
;; 		(if (eq l ke) (setq ke nil)
;; 		  (bind l (let ((r (mapcar 'car rb))) 
;; 			    (cond ((not r) lvp)
;; 				  (lvp `(list* ,@r ,lvp))
;; 				  (`(list ,@r))))))))
;; 	     ((or (eq k '&key) (eq k '&allow-other-keys))
;; 	      (cond ((eq (car l) ke)
;; 		     (when (eq k '&allow-other-keys) (setq aok t))
;; 		     (push ke r)
;; 		     (push (list ke
;; 				 `(labels ((na nil  ,(if np (vpop np negp lvp) `(when ,lvp (pop ,lvp))))
;; 					   (nap nil ,@(if np `((when (and ,negp (= ,np 1)) (setq ,lvp ,(vp) ,np 0)) (or (> ,np 0) ,lvp)) `(,lvp)))
;; 					   (kbind (k m &optional v &aux (v (if m v (if (nap) (na) ,(nokv 'k)))))
;; 						  (case k ,@nkys (otherwise (unless ,aok (setq ,ke k)))))
;; 					   ,@(when lvp `((kl nil (when (nap) (kbind (na) nil) (kl))))))
;; 					  (declare (inline na nap kbind kl))
;; 					  ,@(do (k r (ex rb)) ((not ex) (nreverse r))
;; 						(push `(kbind ,(cadr (pop ex)) ,(when ex t) ,(cadr (pop ex))) r))
;; 					  ,@(when lvp `((kl)))
;; 					  (unless ,aok ,ke))) r)
;; 		     (push (list ke `(when ,ke ,(badk ke) ,ke)) r)
;; 		     (setq r (append post r))
;; 		     (pop l))
;; 		    ((let* ((l (pop l))
;; 			    (ln (if (consp l) (car l) l))
;; 			    (ld (when (consp l) (cadr l)))
;; 			    (lp (when (consp l) (caddr l)))
;; 			    (lb (if (consp ln) (cadr ln) ln))
;; 			    (lpt (tmpsym))(lbt (tmpsym))
;; 			    (ln (if (consp ln) (car ln) ln))
;; 			    (lnk (intern (string ln) 'keyword)))
;; 		       (push lpt r)
;; 		       (push lbt r)
;; 		       (push `(,lnk (unless ,lpt (setq ,lbt v ,lpt t)) nil) nkys)
;; 		       (if aok (push `(,lb (if ,lpt ,lbt ,ld)) post) (setq aok lbt))
;; 		       (when lp (push `(,lp ,lpt) post))))))
;; 	      ((eq k '&aux) (push (pop l) r))))))

;; (defun blla (l a last body &optional n nr f &aux r k rb lvp np npp negp rbr ff rr
;; 	       (llk '(&optional &rest &key &allow-other-keys &aux)));FIXME centralize
;;   (assert (not (and last n)))
;;   (labels
;;    ((vp nil (let ((v `(va-pop))) 
;; 	      (when f (setq v `(cond (,ff (setq ,ff nil) ,f) (,v)) f nil))
;; 	      v))
;;     (no-call (k v) (when np (push v (get np 'no-call)) (push k (get np 'no-call))))
;;     (qpop (lvp def) (if def `(if ,lvp (pop ,lvp) ,def) `(pop ,lvp)))
;;     (vpop (np negp lvp &optional def)
;; 	  (let ((q (qpop lvp def))(v (tmpsym))(vv (tmpsym)))
;; 	    `(let (,v ,vv)
;; 	       (when (> ,np 0) 
;; 		 (setq ,v ,(vp) ,np (si::number-minus ,np 1))
;; 		 (if (and ,negp (= ,np 0)) (setq ,lvp ,v) (setq ,vv t)))
;; 	       (if ,vv ,v ,q))))
;;     (memql (k l) `(do ((,l ,l (cdr ,l))) ((or (not ,l) (eq (car ,l) ,k)) ,l)))
;;     (rpop (np lvp rr)
;; 	  (let ((vp (tmpsym))(val (tmpsym)))
;; 	    `(do (,vp ,val) 
;; 		 ((>= 0 ,np) ,lvp)
;; 		 ,@(unless rr `((declare (:dynamic-extent ,val))))
;; 		 (setq ,val ,(vp)
;; 		       ,val (if (and ,negp (= ,np 1)) ,val (cons ,val nil))
;; 		       ,vp (cond (,vp (rplacd ,vp ,val) ,val) ((setq ,lvp ,val))))
;; 		 (setq ,np (si::number-minus ,np 1))))))

;;    (do ((l l) (a a))
;;        ((not l) `(let* ,(setq r (nreverse r))
;; 		   ,@(unless rr (when np `((declare (:dynamic-extent ,lvp)))))
;; 		   (declare (ignorable ,@(remove-if 'symbol-package (mapcar (lambda (x) (if (consp x) (car x) x)) r))))
;; 		   ,@(remove-doc-string body)))
;;        (cond ((member (car l) llk) (setq k (pop l)))
;; 	     ((when last (unless a (push (list (setq lvp (tmpsym)) last) r) (setq last nil))))
;; 	     ((not k) (push (list (pop l) (cond (a (pop a)) (lvp `(pop ,lvp)) ((baboon)))) r))
;; 	     ((when n (assert (null a))
;; 		    (setq npp t)
;; 		    (when f (push (list (setq ff (tmpsym)) t) r))
;; 		    (push (setq lvp (tmpsym)) r)
;; 		    (push (list (setq np (tmpsym)) n) r) 
;; 		    (push (list (setq negp (tmpsym)) `(< ,np 0)) r)
;; 		    (push (list np `(if ,negp (si::number-minus 0 ,np) ,np)) r)
;; 		    (push (list np `(si::number-minus ,np ,nr)) r))
;; 	      (setq n nil))
;; 	     ((eq k '&optional)
;; 	      (let* ((l (pop l)) (ap a) (a (when a (pop a)))
;; 		     (ll l)(lc (consp ll))
;; 		     (l (if lc (pop ll) ll))
;; 		     (ld (when lc (pop ll)))
;; 		     (lp (when lc (pop ll))))
;; 		(when lp
;; 		  (no-call k lp)
;; 		  (push (list lp t) r))
;; 		(let ((ld (if lp `(progn (setq ,lp nil) ,ld) ld)))
;; 		  (push (list l 
;; 			      (cond (ap a) 
;; 				    (np (vpop np negp lvp ld))
;; 				    (lvp `(if ,lvp (pop ,lvp) ,ld))
;; 				    (ld))) r))))
;; 	     ((when a (let ((v (list (tmpsym) (pop a)))) (push v r) (push v rbr))))
;; 	     ((when rbr (setq rb (nreverse rbr) rbr nil)))
;; 	     ((when (and npp (or (eq k '&rest) (eq k '&key)))
;; 		(when (eq k '&rest)
;; 		  (let ((n (car l)))
;; 		    (unless (member-if (lambda (x) (and (eq (car x) n) (eq (cdr x) 'dynamic-extent)))
;; 				       (multiple-value-bind (x y z) (c1body body nil) z));FIXME!
;; 		      (setq rr t))))
;; 		(push (list lvp (rpop np lvp rr)) r)
;; 		(setq npp nil)))
;; 	     ((eq k '&rest)
;; 	      (let ((l (pop l)))
;; 		(no-call k l)
;; 		(push (list l
;; 			    (let ((r (mapcar 'car rb))) 
;; 			      (cond ((not r) lvp)
;; 				    (lvp `(list* ,@r ,lvp))
;; 				    (`(list ,@r))))) r)))
;; 	     ((eq k '&allow-other-keys))
;; 	     ((eq k '&key)
;; 	      (let* ((l (pop l))
;; 		     (ln (if (consp l) (car l) l))
;; 		     (ld (when (consp l) (cadr l)))
;; 		     (lp (when (consp l) (caddr l)))
;; 		     (lb (if (consp ln) (cadr ln) ln))
;; 		     (ln (if (consp ln) (car ln) ln))
;; 		     (lnk (intern (string ln) 'keyword))
;; 		     (tv (tmpsym))
;; 		     (v (let (r) (do ((rb rb (cddr rb))) 
;; 				     ((not rb) (nreverse r))
;; 				     (push (list (caar rb) (caadr rb)) r)))))
;; 		(no-call k lb)
;; 		(no-call k lp)
;; 		(when lp (push (list lp (when (or v lvp) t)) r))
;; 		(push (list lb 
;; 			    (if (or v lvp)
;; 				`(let (,tv)
;; 				   (declare (ignorable ,tv))
;; 				   (cond ,@(mapcar (lambda (x)
;; 						     `((eq ,(car x) ,lnk) 
;; 						       ,(or (cadr x) (when lvp `(car ,lvp))))) v)
;; 					 ,@(when lvp `(((setq ,tv ,(memql lnk lvp)) (cadr ,tv))))
;; 					 ,@(when (consp l) `((t ,@(when lp `((setq ,lp nil))) ,ld)))))
;; 			      ld))
;; 		      r)))
;; 	     ((eq k '&aux) (push (pop l) r))))))
  
(defmacro bll (l a body)
  `(blla ,l ,a nil ,body))

(defun c1funcallable-symbol-function (args)
  (let* ((info (make-info :type #tfunction))
	 (nargs (c1args args info)))
    (cond ((atomic-tp (info-type (cadar nargs)))
	   (c1expr `(function ,(coerce-to-funid (cadr (info-type (cadar nargs)))))))
	  ((list 'call-global info 'funcallable-symbol-function nargs)))))
(si::putprop 'funcallable-symbol-function 'c1funcallable-symbol-function 'c1)

;; (defun c1lambda-fun (lambda-expr args)
;;   (c1expr (blla (car lambda-expr) args nil (cdr lambda-expr))))

(defun c2expr (form)
  (values
   (if (eq (car form) 'call-global)
       (c2call-global (caddr form) (cadddr form) nil (info-type (cadr form)) (sixth form))
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

(defun c2expr* (form)
  (let* ((*exit* (next-label))
         (*unwind-exit* (cons *exit* *unwind-exit*)))
        (c2expr form)
        (wt-label *exit*)))

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

;; (defun c1progn (forms &aux (fl nil))
;;   (cond ((endp forms) (c1nil))
;;         ((endp (cdr forms)) (c1expr (car forms)))
;;         ((let ((info (make-info)))
;; 	   (do ((forms forms (cdr forms))) ((not forms))
;; 	       (let* ((*c1exit* (unless (cdr forms) *c1exit*))
;; 		      (form (c1expr (car forms))))
;; 		 (push form fl)
;; 		 (add-info info (cadr form))))
;; 	   (setf (info-type info) (info-type (cadar fl)))
;; 	   (list 'progn info (nreverse fl))))))


(defun truncate-progn-at-nil-return-p (rp forms)
  (when (and rp (not (info-type (cadar rp))))
    (keyed-cmpnote 'nil-return "progn truncated at nil return, eliminating ~s" forms)
    t))

(defun c1progn (forms &aux r rp)
  (cond ((endp forms) (c1nil))
	((endp (cdr forms)) (c1expr (car forms)))
	((let ((info (make-info)))
	   (flet ((collect 
		   (f i) 
		   (setq rp (last (if rp (rplacd rp f) (setq r f))))
		   (add-info info i)))
		 (do ((forms forms (cdr forms))) ((or (not forms) (truncate-progn-at-nil-return-p rp forms)))
		     (let ((form (if (cdr forms) (c1arg (car forms)) (c1expr (car forms)))))
		       (cond ((and (cdr forms) (ignorable-form form)))
			     ((eq (car form) 'progn) (collect (third form) (cadr form)))
			     ((collect (cons form nil) (cadr form))))))
		 (cond ((cdr r)
			(setf (info-type info) (info-type (cadar rp)))
			(list 'progn info r))
		       ((car r))
		       ((c1nil))))))))

;; (defun c1progn (forms &aux r rp)
;;   (cond ((endp forms) (c1nil))
;; 	((endp (cdr forms)) (c1expr (car forms)))
;; 	((let ((info (make-info)))
;; 	   (flet ((collect 
;; 		   (f i) 
;; 		   (setq rp (last (if rp (rplacd rp f) (setq r f))))
;; 		   (add-info info i)))
;; 		 (do ((forms forms (cdr forms))) ((not forms))
;; 		     (let ((form (if (cdr forms) (c1arg (car forms)) (c1expr (car forms)))))
;; 		       (cond ((and (cdr forms) (ignorable-form form)))
;; 			     ((eq (car form) 'progn) (collect (third form) (cadr form)))
;; 			     ((collect (cons form nil) (cadr form))))))
;; 		 (cond ((cdr r)
;; 			(setf (info-type info) (info-type (cadar rp)))
;; 			(list 'progn info r))
;; 		       ((car r))
;; 		       ((c1nil))))))))

;; (defun c1progn (forms &aux r rp)
;;   (cond ((endp forms) (c1nil))
;; 	((endp (cdr forms)) (c1expr (car forms)))
;; 	((let ((info (make-info)))
;; 	   (flet ((collect 
;; 		   (f i) 
;; 		   (setq rp (last (if rp (rplacd rp f) (setq r f))))
;; 		   (add-info info i)))
;; 		 (do ((forms forms (cdr forms))) ((not forms))
;; 		     (let* ((*c1exit* (unless (cdr forms) *c1exit*))
;; 			    (form (c1expr (car forms))))
;; 		       (cond ((and (cdr forms) (ignorable-form form)))
;; 			     ((eq (car form) 'progn) (collect (third form) (cadr form)))
;; 			     ((collect (cons form nil) (cadr form))))))
;; 		 (cond ((cdr r)
;; 			(setf (info-type info) (info-type (cadar rp)))
;; 			(list 'progn info r))
;; 		       ((car r))
;; 		       ((c1nil))))))))

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
       (when l (c2expr (car l))))
      (let* ((*value-to-go* 'trash)
             (*exit* (next-label))
             (*unwind-exit* (cons *exit* *unwind-exit*)))
            (c2expr (car l))
            (wt-label *exit*))))

(defun c1arg (form &optional (info (make-info)) &aux *c1exit*)
  (c1expr* form info))

(defun c1args (forms info)
  (mapcar (lambda (form) (c1arg form info)) forms))

;; (defun c1args (forms info &aux *c1exit*)
;;   (mapcar (lambda (form) (c1expr* form info)) forms))

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
				   (or (si::s-data-conc-name sd) "")
				   (car (nth index (si::s-data-slot-descriptions sd))))))
		(tp (if sym (get-return-type sym) '*))
		(tp (type-and tp (nth aet-type +cmp-array-types+)))) 

	   (setf (info-type info) (if (and (eq name 'si::s-data) (= index 2));;FIXME -- this belongs somewhere else.  CM 20050106
				      #t(vector unsigned-char)
				      tp))
	   (list 'structure-ref info
		 (c1arg form info)
		 (add-symbol name)
		 index sd)))))

;; (defun c1structure-ref1 (form name index &aux (info (make-info)))
;;   ;;; Explicitly called from c1expr and c1structure-ref.
;;   (cond (*safe-compile* (c1expr `(si::structure-ref ,form ',name ,index)))
;; 	((let* ((sd (get name 'si::s-data))
;; 		(aet-type (aref (si::s-data-raw sd) index))
;; 		(sym (find-symbol (si::string-concatenate
;; 				   (or (si::s-data-conc-name sd) "")
;; 				   (car (nth index (si::s-data-slot-descriptions sd))))))
;; 		(tp (if sym (get-return-type sym) '*))
;; 		(tp (type-and tp (nth aet-type +cmp-array-types+)))) 

;; 	   (setf (info-type info) (if (and (eq name 'si::s-data) (= index 2));;FIXME -- this belongs somewhere else.  CM 20050106
;; 				      #t(vector unsigned-char)
;; 				      tp))
;; 	   (list 'structure-ref info
;; 		 (c1expr* form info)
;; 		 (add-symbol name)
;; 		 index sd)))))

(defun coerce-loc-structure-ref (arg type-wanted &aux (form (cdr arg)))
  (let* ((sd (fourth form))
	 (index (caddr form)))
    (cond (sd
	    (let* ((aet-type (aref (si::s-data-raw sd) index))
		   (type (nth aet-type +cmp-array-types+)))
	      (cond ((eq (inline-type (cmp-norm-tp type)) 'inline)
		     (or (= aet-type +aet-type-object+) (error "bad type ~a" type))))
	      (setf (info-type (car arg)) (cmp-norm-tp type))
	      (coerce-loc
		      (list (inline-type
			     (cmp-norm-tp type))
		           (flags)
			    'my-call
			    (list
			     (car
			      (inline-args (list (car form))
					   '(t)))
			     'joe index sd))
		      (cmp-norm-tp type-wanted)))
		)
	  (t (wfs-error)))))


(defun c2structure-ref (form name-vv index sd
                             &aux (*vs* *vs*) (*inline-blocks* 0))
  (let ((loc (car (inline-args (list form) '(t))))
	(type (nth (aref (si::s-data-raw sd) index) +cmp-array-types+)))
       (unwind-exit
	 (list (inline-type (cmp-norm-tp type))
			  (flags) 'my-call
			  (list  loc  name-vv
				 index sd))))
  (close-inline-blocks)
  )

(defun c1str-ref (args)
  (let* ((info (make-info))
	 (nargs (c1args args info)))
    (list* 'str-ref info nargs)))
(setf (get 'str-ref 'c1) 'c1str-ref)

(defun c2str-ref (loc nm off)
  (let* ((nm (car (atomic-tp (info-type (cadr nm)))))
	 (sd (get nm 'si::s-data))
	 (loc (car (inline-args (list loc) '(t))))
	 (off (car (atomic-tp (info-type (cadr off))))))
    (unless (and off sd (not *compiler-push-events*)) (baboon))
    (unwind-exit
     (list (inline-type (nth (aref (si::s-data-raw sd) off) +cmp-array-types+))
	   (flags) 'my-call (list loc nil off sd)))
    (close-inline-blocks)))
(setf (get 'str-ref 'c2) 'c2str-ref)



(defun my-call (loc name-vv ind sd);FIXME get-inline-loc above
  (declare (ignore name-vv))
  (let* ((raw (si::s-data-raw sd))
	 (spos (si::s-data-slot-position sd)))
    (if *compiler-push-events* (wfs-error)
      (wt "STREF("  (aet-c-type (nth (aref raw ind) +cmp-array-types+) )
	  "," loc "," (aref spos ind) ")"))))


(defun c1structure-set (args &aux (info (make-info :flags (iflags side-effects))))
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
      (let ((x (c1arg (car args) info))
            (y (c1arg (cadddr args) info)))
        (setf (info-type info) (info-type (cadr y)))
        (list 'structure-set info x
              (add-symbol (cadadr args)) ;;; remove QUOTE.
              (caddr args) y (get (cadadr args) 'si::s-data)))
      (list 'call-global info 'si:structure-set (c1args args info))))

;; (defun c1structure-set (args &aux (info (make-info :flags (iflags side-effects))))
;;   (if (and (not (endp args)) (not *safe-compile*)
;;            (not (endp (cdr args)))
;;            (consp (cadr args))
;;            (eq (caadr args) 'quote)
;;            (not (endp (cdadr args)))
;;            (symbolp (cadadr args))
;;            (endp (cddadr args))
;;            (not (endp (cddr args)))
;;            (si:fixnump (caddr args))
;;            (not (endp (cdddr args)))
;;            (endp (cddddr args)))
;;       (let ((x (c1expr (car args)))
;;             (y (c1expr (cadddr args))))
;;         (add-info info (cadr x))
;;         (add-info info (cadr y))
;;         (setf (info-type info) (info-type (cadr y)))
;;         (list 'structure-set info x
;;               (add-symbol (cadadr args)) ;;; remove QUOTE.
;;               (caddr args) y (get (cadadr args) 'si::s-data)))
;;       (list 'call-global info 'si:structure-set (c1args args info))))


;; The following (side-effects) exists for putting at the end of an
;; argument list to force all previous arguments to be stored in
;; variables, when computing inline-args.


(push '(() t #.(flags ans set) "Ct")  (get 'side-effects  'inline-always))

(defun c2structure-set (x name-vv ind y sd 
                          &aux locs (*vs* *vs*) (*inline-blocks* 0))
  (declare (ignore name-vv))
  (let* ((raw (si::s-data-raw sd))
  (type (nth (aref raw ind) +cmp-array-types+))
  (spos (si::s-data-slot-position sd))
  (tftype (cmp-norm-tp type))
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

(defun infinite-val-symbol (val)
  (or (car (member val '(+inf -inf nan) :key 'symbol-value))
      (baboon)))

(defun printable-long-float (val)
  (labels ((scl (val s) `(* ,(/ val (symbol-value s)) ,s)))
	  (let ((nval
		 (cond ((not (isfinite val)) `(symbol-value ',(infinite-val-symbol val)))
		       ((> (abs val) (/ most-positive-long-float 2)) (scl val 'most-positive-long-float))
		       ((< 0.0 (abs val) (* least-positive-long-float 1.0d20)) (scl val 'least-positive-long-float)))))
	    (add-object (if nval (cons '|#,| nval) val)))))
  

(defun ltvp (val)
  (when (consp val) (eq (car val) '|#,|)))

(defun c1constant-value-object (val always)
  (typecase
   val
   (char                               `(char-value nil ,val))
   (immfix                             `(fixnum-value nil ,val))
   (character                          `(character-value nil ,(char-code val)))
   (long-float                         `(vv ,(printable-long-float val)))
   ((or fixnum float complex)          `(vv ,(add-object val)))
   (otherwise                          (when (or always
						 (ltvp val)
						 (when (arrayp val) (unless (si::staticp val) (eq (array-element-type val) t))))
					     `(vv ,(add-object val))))))

(defun c1constant-value (val always &aux (val (if (exit-to-fmla-p) (not (not val)) val)))
  (case 
   val
   ((nil) (c1nil))
   ((t)   (c1t))
   (otherwise
    (let ((l (c1constant-value-object val (or always (when *compiler-compile* (not *keep-gaz*))))))
      (when l 
	`(location 
	  ,(make-info :type (or (ltvp val) (object-type val)))
	  ,l))))))

;; (defun c1constant-value (val always-p &aux (val (if (exit-to-fmla-p) (not (not val)) val)))
;;   (cond
;;    ((eq val nil) (c1nil))
;;    ((eq val t) (c1t))
;;    ((typep val 'char)
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'CHAR-VALUE nil val)))
;;    ((si:fixnump val)
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'FIXNUM-VALUE (unless (si::seqindp val) (add-object val)) val)))
;;    ((characterp val)
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'CHARACTER-VALUE nil (char-code val))))
;;    ((typep val 'long-float)
;;     ;; We can't read in long-floats which are too big:
;;     (let* (sc 
;; 	   (vv 
;; 	    (cond ((= val +inf) (add-object (cons 'si::|#,| `(symbol-value ','+inf))));This cannot be a constant list
;; 		  ((= val -inf) (add-object (cons 'si::|#,| `(symbol-value ','-inf))))
;; 		  ((not (isfinite val)) (add-object (cons 'si::|#,| `(symbol-value ','nan))))
;; 		  ((> (abs val) (/ most-positive-long-float 2))
;; 		   (add-object (cons 'si::|#,| `(* ,(/ val most-positive-long-float) most-positive-long-float))))
;; 		  ((< 0.0 (abs val) (* least-positive-long-float 1.0d20))
;; 		   (add-object (cons `si::|#,| `(* ,(/ val least-positive-long-float) least-positive-long-float))))
;; 		  ((setq sc t) (add-object val)))))
;; ;      (unless (isfinite val) (setf (info-type info) #tlong-float))
;;       `(location ,(make-info :type (object-type val)) ,(if sc `(long-float-value ,vv ,val) `(vv ,vv)))))
;;    ((typep val 'short-float)
;;     (list 'LOCATION (make-info :type (object-type val))
;;           (list 'SHORT-FLOAT-VALUE (add-object val) val)))
;;    ((typep val #tfcomplex)
;;     (list 'LOCATION (make-info :type (object-type val))
;;           (list 'FCOMPLEX-VALUE (add-object val) val)))
;;    ((typep val #tdcomplex)
;;     (list 'LOCATION (make-info :type (object-type val))
;;           (list 'DCOMPLEX-VALUE (add-object val) val)))
;;    ((and (consp val) (eq (car val) 'si::|#,|))
;; ;    (setf (info-type info) t);(object-type (cmp-eval (cdr val))))
;;     (list 'LOCATION (make-info :type t) (list 'VV (add-object val))))
;;    ((and *compiler-compile* (not *keep-gaz*))
;; ;    (setf (info-type info) (object-type val))
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'VV (add-object (cons 'si::|#,| `(si::nani ,(si::address val)))))))
;;    ((and (arrayp val) (not (si::staticp val)) (eq (array-element-type val) t)) ;; This must be readable
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'VV (add-object val))))
;;    (always-p
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'VV (add-object val))))))

;; (defun c1constant-value (val always-p); &aux (info (make-info :type (object-type val))))
;; ;							    :referred-array +empty-info-array+
;; ;							    :changed-array +empty-info-array+)))
;;   (cond
;;    ((eq val nil) (c1nil))
;;    ((eq val t) (c1t))
;;    ((typep val 'char)
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'CHAR-VALUE nil val)))
;;    ((si:fixnump val)
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'FIXNUM-VALUE (unless (si::seqindp val) (add-object val)) val)))
;;    ((characterp val)
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'CHARACTER-VALUE nil (char-code val))))
;;    ((typep val 'long-float)
;;     ;; We can't read in long-floats which are too big:
;;     (let* (sc 
;; 	   (vv 
;; 	    (cond ((= val +inf) (add-object (cons 'si::|#,| `(symbol-value ','+inf))));This cannot be a constant list
;; 		  ((= val -inf) (add-object (cons 'si::|#,| `(symbol-value ','-inf))))
;; 		  ((not (isfinite val)) (add-object (cons 'si::|#,| `(symbol-value ','nan))))
;; 		  ((> (abs val) (/ most-positive-long-float 2))
;; 		   (add-object (cons 'si::|#,| `(* ,(/ val most-positive-long-float) most-positive-long-float))))
;; 		  ((< 0.0 (abs val) (* least-positive-long-float 1.0d20))
;; 		   (add-object (cons `si::|#,| `(* ,(/ val least-positive-long-float) least-positive-long-float))))
;; 		  ((setq sc t) (add-object val)))))
;; ;      (unless (isfinite val) (setf (info-type info) #tlong-float))
;;       `(location ,(make-info :type (object-type val)) ,(if sc `(long-float-value ,vv ,val) `(vv ,vv)))))
;;    ((typep val 'short-float)
;;     (list 'LOCATION (make-info :type (object-type val))
;;           (list 'SHORT-FLOAT-VALUE (add-object val) val)))
;;    ((typep val #tfcomplex)
;;     (list 'LOCATION (make-info :type (object-type val))
;;           (list 'FCOMPLEX-VALUE (add-object val) val)))
;;    ((typep val #tdcomplex)
;;     (list 'LOCATION (make-info :type (object-type val))
;;           (list 'DCOMPLEX-VALUE (add-object val) val)))
;;    ((and (consp val) (eq (car val) 'si::|#,|))
;; ;    (setf (info-type info) t);(object-type (cmp-eval (cdr val))))
;;     (list 'LOCATION (make-info :type t) (list 'VV (add-object val))))
;;    ((and *compiler-compile* (not *keep-gaz*))
;; ;    (setf (info-type info) (object-type val))
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'VV (add-object (cons 'si::|#,| `(si::nani ,(si::address val)))))))
;;    ((and (arrayp val) (not (si::staticp val)) (eq (array-element-type val) t)) ;; This must be readable
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'VV (add-object val))))
;;    (always-p
;;     (list 'LOCATION (make-info :type (object-type val)) (list 'VV (add-object val))))))
					;FIXME check readability


(defmacro si::define-compiler-macro (name vl &rest body)
  (declare (optimize (safety 2)))
  (let ((n (si::funid-sym name)))
    `(progn (si:putprop ',n
			,(si::defmacro-lambda (if (eq n name) name (cadr name)) vl body)
			'si::compiler-macro-prop)
	    ',name)))

(defun si::compiler-macro-function (name)
  (let ((name (si::funid-sym name)))
    (get name 'si::compiler-macro-prop)))

(defun si::undef-compiler-macro (name)
  (let ((name (si::funid-sym name)))
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


(defun co1structure-predicate (f args &aux tem)
  (cond ((and (symbolp f)
	      (setq tem (get f 'si::struct-predicate))
	      args (not (cdr args)))
	 (c1expr `(typep ,(car args) ',tem)))))


;;New C ffi
;
(defmacro defdlfun ((crt name &optional (lib "")) &rest tps)
  (flet ((cc (x) (if (consp x) (car x) x)))
  (let* ((sym  (mdlsym name lib))
	 (dls  (strcat "DL" name))
	 (ttps (mapcan (lambda (x) (if (atom x) (list x) (list (list (car x)) (cadr x)))) tps))
	 (args (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) ttps))
	 (cast (apply 'strcat (maplist (lambda (x) (strcat (cc (car x)) (if (cdr x) "," ""))) tps)))
	 (cast (strcat "(" crt "(*)(" cast "))")))
  `(progn
     (mdlsym ,name ,lib)
     (defun ,sym ,args
       (declare (optimize (safety 2)))
       ,@(mapcar (lambda (x y) `(check-type ,x ,(get (cc y) 'lisp-type))) args ttps)
       (cadd-dladdress ,dls ,sym)
       (lit ,crt 
	    ,@(when (eq crt :void) `("("))
	    "(" ,cast "(" ,dls "))("
	    ,@(mapcon (lambda (x y) `((,(cc (car x)) ,(car y))
				      ,(if (cdr x) (if (consp (car x)) "+" ",") ""))) ttps args)
	    ")"
	    ,@(when (eq crt :void) `(",Cnil)"))))))))

(defun c1cadd-dladdress (args)
  (list 'cadd-dladdress (make-info :type #tnull :flags (iflags side-effects)) args))
(defun c2cadd-dladdress (args)
  (apply 'add-dladdress args))
(si::putprop 'cadd-dladdress 'c1cadd-dladdress 'c1)
(si::putprop 'cadd-dladdress 'c2cadd-dladdress 'c2)

(defun c1clines (args)
  (list 'clines (make-info :type nil) (with-output-to-string (s) (princ (car args) s))))
(defun c2clines (clines)
  (wt-nl clines))
(si::putprop 'clines 'c1clines 'c1)
(si::putprop 'clines 'c2clines 'c2)

