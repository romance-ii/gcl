;; -*-Lisp-*-
;; CMPFUN  Library functions.
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


(in-package :compiler)

(si:putprop 'princ 'c1princ 'c1)
(si:putprop 'princ 'c2princ 'c2)
(si:putprop 'terpri 'c1terpri 'c1)

(si:putprop 'apply 'c1apply 'c1)
(si:putprop 'apply 'c2apply 'c2)
(si:putprop 'funcall 'c1funcall 'c1)

;; (si:putprop 'rplaca 'c1rplaca 'c1)
;; (si:putprop 'rplaca 'c2rplaca 'c2)
;; (si:putprop 'rplacd 'c1rplacd 'c1)
;; (si:putprop 'rplacd 'c2rplacd 'c2)

;(dolist (l '(si::memq 
;	     member member-i member-if-not
;	     assoc assoc-i assoc-if-not
;	     rassoc rassoc-i rassoc-if-not
;	     intersection set-difference set-exclusive-or subsetp union))
;  (si::putprop l (intern (concatenate 'string "C1" (symbol-name l))) 'c1))

;(si:putprop 'si::memq 'c1memq 'c1)
;(si:putprop 'member 'c1member 'c1)
;(si:putprop 'member-if 'c1member-if 'c1)
;(si:putprop 'member-if-not 'c1member-if-not 'c1)
;(si:putprop 'member!2 'c2member!2 'c2)
;(si:putprop 'assoc 'c1assoc 'c1)
;(si:putprop 'rassoc 'c1rassoc 'c1)
;(si:putprop 'set-difference 'c1set-difference 'c1)
;(si:putprop 'assoc!2 'c2assoc!2 'c2)


(si:putprop 'get 'c1get 'c1)
(si:putprop 'get 'c2get 'c2)

;(si:putprop 'nth '(c1nth-condition . c1nth) 'c1conditional)
;(si:putprop 'nthcdr '(c1nthcdr-condition . c1nthcdr) 'c1conditional)
;(si:putprop 'cmp-nthcdr '(c1nthcdr-condition . c1nthcdr) 'c1conditional)
;(si:putprop 'si:rplaca-nthcdr 'c1rplaca-nthcdr 'c1)
;(si:putprop 'si:list-nth 'c1list-nth 'c1)
;(si:putprop 'list-nth-immediate 'c2list-nth-immediate 'c2)

(defvar *princ-string-limit* 80)

(defun c1princ (args &aux stream (info (make-info :flags (iflags side-effects))))
  (when (endp args) (too-few-args 'princ 1 0))
  (unless (or (endp (cdr args)) (endp (cddr args)))
          (too-many-args 'princ 2 (length args)))
  (setq stream (if (endp (cdr args))
                   (c1nil)
                   (c1arg (cadr args) info)))
  (if (and (or (and (stringp (car args))
                    (<= (length (car args)) *princ-string-limit*))
               (characterp (car args)))
           (or (endp (cdr args))
               (and (eq (car stream) 'var)
                    (member (var-kind (caaddr stream)) '(GLOBAL SPECIAL)))))
      (list 'princ info (car args)
            (if (endp (cdr args)) nil (var-loc (caaddr stream)))
            stream)
      (list 'call-global info 'princ
            (list (c1arg (car args) info) stream))))

;; (defun c1princ (args &aux stream (info (make-info :flags (iflags side-effects))))
;;   (when (endp args) (too-few-args 'princ 1 0))
;;   (unless (or (endp (cdr args)) (endp (cddr args)))
;;           (too-many-args 'princ 2 (length args)))
;;   (setq stream (if (endp (cdr args))
;;                    (c1nil)
;;                    (c1expr* (cadr args) info)))
;;   (if (and (or (and (stringp (car args))
;;                     (<= (length (car args)) *princ-string-limit*))
;;                (characterp (car args)))
;;            (or (endp (cdr args))
;;                (and (eq (car stream) 'var)
;;                     (member (var-kind (caaddr stream)) '(GLOBAL SPECIAL)))))
;;       (list 'princ info (car args)
;;             (if (endp (cdr args)) nil (var-loc (caaddr stream)))
;;             stream)
;;       (list 'call-global info 'princ
;;             (list (c1expr* (car args) info) stream))))

(defun c2princ (string vv-index stream)
  (cond ((eq *value-to-go* 'trash)
         (cond ((characterp string)
                (wt-nl "princ_char(" (char-code string))
                (if (null vv-index) (wt ",Cnil") (wt "," (vv-str vv-index)))
                (wt ");"))
               ((= (length string) 1)
                (wt-nl "princ_char(" (char-code (aref string 0)))
                (if (null vv-index) (wt ",Cnil") (wt "," (vv-str vv-index)))
                (wt ");"))
               (t
                (wt-nl "princ_str(\"")
                (dotimes** (n (length string))
                  (let ((char (schar string n)))
                       (cond ((char= char #\\) (wt "\\\\"))
                             ((char= char #\") (wt "\\\""))
                             ((char= char #\Newline) (wt "\\n"))
                             ((char= char #\Return) (wt "\\r"))
                             (t (wt char)))))
                (wt "\",")
                (if (null vv-index) (wt "Cnil") (wt "" (vv-str vv-index)))
                (wt ");")))
         (unwind-exit nil))
        ((eql string #\Newline) (c2call-global 'terpri (list stream) nil t))
        (t (c2call-global
            'princ
            (list (list 'LOCATION
                        (make-info :type (cmp-norm-tp (if (characterp string) 'character 'string)))
                        (list 'VV (add-object string)))
                  stream) nil t))))

(defun c1terpri (args &aux stream (info (make-info :flags (iflags side-effects))))
  (unless (or (endp args) (endp (cdr args)))
          (too-many-args 'terpri 1 (length args)))
  (setq stream (if (endp args)
                   (c1nil)
                   (c1arg (car args) info)))
  (if (or (endp args)
          (and (eq (car stream) 'var)
               (member (var-kind (caaddr stream)) '(GLOBAL SPECIAL))))
      (list 'princ info #\Newline
            (if (endp args) nil (var-loc (caaddr stream)))
            stream)
      (list 'call-global info 'terpri (list stream))))

;; (defun c1terpri (args &aux stream (info (make-info :flags (iflags side-effects))))
;;   (unless (or (endp args) (endp (cdr args)))
;;           (too-many-args 'terpri 1 (length args)))
;;   (setq stream (if (endp args)
;;                    (c1nil)
;;                    (c1expr* (car args) info)))
;;   (if (or (endp args)
;;           (and (eq (car stream) 'var)
;;                (member (var-kind (caaddr stream)) '(GLOBAL SPECIAL))))
;;       (list 'princ info #\Newline
;;             (if (endp args) nil (var-loc (caaddr stream)))
;;             stream)
;;       (list 'call-global info 'terpri (list stream))))


(defconstant +list5+ (cmp-norm-tp (reduce (lambda (y x) `(or null (cons t ,y))) (make-list 5) :initial-value 'null)))

(defun last-unroll (fn ll tp l &optional (s (tmpsym)) (c (gensym))
		       (bind `( (,s ,l) (,c 0))) fm (n 0) new 
		       (args (mapcar 'car ll)))
  (let* ((fm (if (type-and #tnull tp) 
		 (cons `(,n (funcall ',fn ,@args ,@(reverse new))) fm) fm))
	 (tp (cdr-propagator 'cdr (type-and #t(not null) tp))))
      (if tp
	  (let* ((ns (tmpsym))
		 (bind (cons (list ns `(when ,s (incf ,c) (car ,s))) bind))
		 (bind (if (type>= #tnull tp) bind (cons `(,s (cdr ,s)) bind))))
	    (last-unroll fn ll tp l s c bind fm (1+ n) (cons ns new) args))
	(let ((bind (nreverse bind))(fm (nreverse fm)))
	  `(let* ,(append ll bind)
	     (case ,(caar bind)
		   ,@fm))))))


(defun c2apply (funob args)
  (unless (eq 'ordinary (car funob)) (baboon))
  (let* ((fn (caddr funob))
	 (all (cons fn args))
	 (*inline-blocks* 0))
    (setq *sup-used* t)
    (unwind-exit
     (get-inline-loc
      (list (make-list (length all) :initial-element t)
	    '* #.(flags ans set svt) 
	    "({fixnum _v=(fixnum)#v;object _z,_f=(#0),_l=(#1),_ll=_l;
        object _x4=Cnil,_x3=Cnil,_x2=Cnil,_x1=Cnil,_x0=Cnil;
        char _m=(#n-2),_q=_f->fun.fun_minarg>_m ? _f->fun.fun_minarg-_m : 0;
        char _n=Rset && !_f->fun.fun_argd ? _q : -1;
        fcall.fun=_f;FUN_VALP=_v;VFUN_NARGS=-(#n-1);
        switch (_n) {
          case 5: if (_l==Cnil) {_n=-1;break;} _x4=_l->c.c_car;_l=_l->c.c_cdr;
          case 4: if (_l==Cnil) {_n=-1;break;} _x3=_l->c.c_car;_l=_l->c.c_cdr;
          case 3: if (_l==Cnil) {_n=-1;break;} _x2=_l->c.c_car;_l=_l->c.c_cdr;
          case 2: if (_l==Cnil) {_n=-1;break;} _x1=_l->c.c_car;_l=_l->c.c_cdr;
          case 1: if (_l==Cnil) {_n=-1;break;} _x0=_l->c.c_car;_l=_l->c.c_cdr;
          case 0: if (_n+_m==_f->fun.fun_maxarg && _l!=Cnil) _n=-1; else VFUN_NARGS-=_n;
          default: break;
        }
        switch (_n) {
          case 5:  _z=_f->fun.fun_self(#*_x4,_x3,_x2,_x1,_x0,_l);break;
          case 4:  _z=_f->fun.fun_self(#*_x3,_x2,_x1,_x0,_l);break;
          case 3:  _z=_f->fun.fun_self(#*_x2,_x1,_x0,_l);break;
          case 2:  _z=_f->fun.fun_self(#*_x1,_x0,_l);break;
          case 1:  _z=_f->fun.fun_self(#*_x0,_l);break;
          case 0:  _z=_f->fun.fun_self(#*_l);break;
          default: _z=call_proc_cs2(#*_ll);break;
        }
        if (!(_f)->fun.fun_neval) vs_top=_v ? (object *)_v : sup;_z;})")
      (list* (car all) (car (last all)) (butlast (cdr all)))))
    (close-inline-blocks)))

(defun c1apply-optimize (info requireds rest body args
                              &aux (vl nil) (fl nil))
  (do ()
      ((or (endp (cdr args)) (endp requireds)))
      (push (pop requireds) vl)
      (push (pop args) fl))

  (cond ((cdr args)	;;; REQUIREDS is NIL.
         (cmpck (null rest)
                "APPLY passes too many arguments to LAMBDA expression.")
         (push rest vl)
         (push (list 'call-global info 'list* args) fl)
         (list 'let info (reverse vl) (reverse fl) body))
        (requireds	;;; ARGS is singleton.
         (let ((temp (make-var :kind 'LEXICAL :ref t)))
              (push temp vl)
              (push (car args) fl)
              (list 'let info (reverse vl) (reverse fl)
                    (list 'apply-optimize
                          (cadr body) temp requireds rest body))))
        (rest (push rest vl)
              (push (car args) fl)
              (list 'let info (reverse vl) (reverse fl) body))
        (t
         (let ((temp (make-var :kind 'LEXICAL :ref t)))
              (push temp vl)
              (push (car args) fl)
              (list 'let info (reverse vl) (reverse fl)
                    (list 'apply-optimize
                          (cadr body) temp requireds rest body))))
        )
  )

(defun fn-bind (form args)
  (if (or (symbolp (car args)) (constantp (car args))) form
    (let ((s (tmpsym)));sgen?
      `(let ((,s ,(pop args))) (,(car form) ,s ,@args)))))

(define-compiler-macro funcall (&whole form &rest args) (fn-bind form args))
(define-compiler-macro apply (&whole form &rest args) (fn-bind form args))

(defun c1apply (args)
  (when (or (endp args) (endp (cdr args)))
    (too-few-args 'apply 2 (length args)))
  (let* ((ff (c1arg (pop args)))
	 (fid (coerce-ff ff)))
    (if (eq fid 'funcall) (c1apply args) (mi1 fid (butlast args) (car (last args)) ff))))
	
(defun c1funcall (args)
  (when (endp args) (too-few-args 'funcall 1 0))
  (let* ((ff (c1arg (pop args)))
	 (fid (coerce-ff ff)))
    (case fid (funcall (c1funcall args))(apply (c1apply args)) (otherwise (mi1 fid args nil ff)))))

;; (defun c1funcall-apply (args &optional last)
;;   (mi1 (if last 'apply 'funcall) args (car last)))

;; (defun c1funcall (args)
;;   (when (endp args) (too-few-args 'funcall 1 0))
;;   (c1funcall-apply args))

;; (defun c1apply (args)
;;   (when (or (endp args) (endp (cdr args)))
;;     (too-few-args 'apply 2 (length args)))
;;   (let* ((last (last args))
;; 	 (args (ldiff args last)))
;;     (c1funcall-apply args last)))


(defmacro eq-subtp (x y)  ;FIXME axe mult values
  (let ((s (tmpsym)))
    `(let ((,s (type>= ,y ,x)))
       (values ,s (or ,s (type>= (cmp-norm-tp `(not ,,y)) x))))))

(defun eql-is-eq-tp (x)
  (eq-subtp x #teql-is-eq-tp))

(defun equal-is-eq-tp (x)
  (eq-subtp x #tequal-is-eq-tp))

(defun equalp-is-eq-tp (x)
  (eq-subtp x #tequalp-is-eq-tp))

(defun do-eq-et-al (fn args)
  (let* ((tf (cadr (test-to-tf fn)))
	 (info (make-info :type #tboolean))
	 (nargs (c1args args info)))
    (let ((r (list 'call-global info (if (when tf 
					   (or (funcall tf (info-type (cadar nargs)))
					       (funcall tf (info-type (cadadr nargs)))))
					 'eq fn) nargs)))
      (cond ((not (type-and (info-type (cadar nargs)) (info-type (cadadr nargs))))
	     (c1nil))
	    ((and (atomic-tp (info-type (cadar nargs)))
		  (atomic-tp (info-type (cadadr nargs)))
		  (cond ((eq (caddr r) 'eq) 
			 (eql-is-eq (cadr (info-type (cadar nargs)))))
			((eq (caddr r) 'eql))))
	     (c1expr (ignorable-pivot 
		      (car args) 
		      (ignorable-pivot 
		       (cadr args) 
		       (type>= (info-type (cadar nargs)) (info-type (cadadr nargs)))))))
	    (r)))))
	   
(dolist (l `(eq eql equal equalp))
  (si::putprop l 'do-eq-et-al 'c1g))

(defun num-type-bounds (t1)
  (let ((i 1) j)
    (mapcar (lambda (x) 
	      (setq j i i (- i)
		    x (if (atom x) x 
			(+ (car x) (* j least-positive-long-float))))) (cdr t1))))
  
(defun ntrr (x y)
  (and x y
       (list (and (car x) (car y))
	     (and (cadr x) (cadr y) (eq (car x) (car y))))))

(defun dntrr (l)
  (reduce 'ntrr (cdr l) :initial-value (car l)))

(defun num-type-rel (fn t1 t2 &optional s)
  (let ((nop (car (rassoc fn '((>= . <) (> . <=) (= . /=)))))
	(rfn (cdr (assoc  fn '((>= . >) (> . >=))))))
    (cond (nop (let ((q (num-type-rel nop t1 t2))) 
		 (list (and (not (car q)) (cadr q)) (cadr q))))
	  ((and (consp t1) (eq (car t1) 'or))
	   (dntrr (mapcar (lambda (x) (num-type-rel fn x t2)) (cdr t1))))
	  ((and (consp t2) (eq (car t2) 'or))
	   (dntrr (mapcar (lambda (x) (num-type-rel fn t1 x)) (cdr t2))))
	  ((eq fn '=) (cond ((not (and t1 t2)) (list nil t))
			    ;; ((and (type>= #tcomplex t1) (not (type-and #tcomplex t2)))
			    ;;  (unless (type-and (cadr t1) (type-and t2 #t(real 0.0 0.0)))
			    ;;    (list nil t)))
			    ;; ((and (type>= #tcomplex t2) (not (type-and #tcomplex t1)))
			    ;;  (unless (type-and (cadr t2) (type-and t1 #t(real 0.0 0.0)))
			    ;;    (list nil t)))
			    ((let ((x (num-type-rel '>= t1 t2))(y (num-type-rel '>= t2 t1)))
			       (list (and (car x) (car y)) (and (cadr x) (cadr y)))))))
	  ((not s) (let ((f (num-type-rel fn t1 t2 t)))
		     (list f (or f (num-type-rel rfn t2 t1 t)))))
	  ((not (and t1 t2)) nil)
	  ((and (type>= #treal t1) (type>= #treal t2))
	   (let ((t1 (car  (num-type-bounds t1)))
		 (t2 (cadr (num-type-bounds t2))))
	     (and (numberp t1) (numberp t2) (values (funcall fn t1 t2))))))))


(defun do-num-relations (fn args)
  (let* ((info (make-info :type #tboolean))
	 (nargs (c1args args info))
	 (t1 (and (car args) (info-type (cadar nargs))))
	 (t2 (and (cadr args) (info-type (cadadr nargs))))
	 (fn (or (cdr (assoc fn '((si::=2 . =)(si::/=2 . /=)(si::>=2 . >=)
				  (si::>2 . >)(si::<2 . <)(si::<=2 . <=))))
		 fn))
	 (r (and t1 t2 (num-type-rel fn t1 t2))))
    (cond ((cddr args) (list 'call-global info fn nargs))
	  ((or (car r) (cadr r)) (c1expr (ignorable-pivot (car args) (ignorable-pivot (cadr args) (when (car r) t)))))
	  ((list 'call-global info fn nargs)))))

(dolist (l `(>= > < <= = /=))
  (si::putprop l 'do-num-relations 'c1g))

(dolist (l `(eq eql equal equalp > >= < <= = /= length + - / * min max;FIXME get a good list here
		car cdr caar cadr cdar cddr caaar caadr cadar cdaar caddr cdadr cddar cdddr 
		caaaar caaadr caadar cadaar cdaaar caaddr cadadr cdaadr caddar cdadar cddaar
		cadddr cdaddr cddadr cdddar cddddr logand lognot logior logxor c-type complex-real
		complex-imag ratio-numerator ratio-denominator cnum-type si::number-plus si::number-minus
		si::number-times si::number-divide ;FIXME more
		,@(mapcar (lambda (x) (cdr x)) (remove-if-not (lambda (x) (symbolp (cdr x))) +cmp-type-alist+))))
  (si::putprop l t 'c1no-side-effects))

(setf (get 'cons 'c1no-side-effects) t)
(setf (get 'make-list 'c1no-side-effects) t)
(setf (get 'si::make-vector 'c1no-side-effects) t)


;;bound type comparisons
;; only boolean eval const args



;;FIXME rewrite elim mv
(defun list-tp-test (tf lt &optional ic &aux aet)
  (cond 
   ((setq aet (aref-propagator 'list-tp-test lt))
     (let ((z (funcall tf aet))) (values z z)));;FIXME second value meaning
   ((eq lt #tnull) (let ((z (funcall tf lt))) (values z z)))
   ((or (atom lt) (not (eq (car lt) 'cons)))
    (let ((z (and ic (funcall tf lt)))) (values z z)))
   (t 
    (unless (caddr lt) (return-from list-tp-test (values nil t)))
    (multiple-value-bind 
     (m1 f1) (funcall tf (cadr lt))
     (multiple-value-bind 
      (m2 f2) (list-tp-test tf (caddr lt) t)
      (values (and m1 m2) (or f1 f2)))))))
					;	((and ic (list-tp-test tf (car lt))))))
					;	(t (values nil nil))))

(defun test-to-tf (test)
  (let ((test (if (constantp test) (cmp-eval test) test)))
    (cond ((member test `(eql ,#'eql)) '(eql-is-eq eql-is-eq-tp))
	  ((member test `(equal ,#'equal)) '(equal-is-eq equal-is-eq-tp))
	  ((member test `(equalp ,#'equalp)) '(equalp-is-eq equalp-is-eq-tp)))))

;; (defun is-eq-test-item-list (test item list rest)
;;   (declare (ignore list rest))
;;   (let ((tf (car (test-to-tf test))))
;;     (and tf (funcall tf item))))
	
;; (defun c1is-eq-test-item-list (args)
;;   (let* ((ltf (test-to-tf (car args)))
;; 	 (tf (cadr ltf))
;; 	 (info (make-info)))
;;     (if (not tf) 
;; 	(c1nil)
;;       (let ((nargs (c1args (cdr args) info)))
;; 	(multiple-value-bind 
;; 	 (m1 f1) (funcall tf (info-type (cadar nargs)))
;; 	 (multiple-value-bind 
;; 	  (m2 f2) (list-tp-test tf (info-type (cadadr nargs)))
;; 	  (declare (ignore f2))
;; 	  (let ((m2 (or m2 
;; 			(let* ((ret (and (constantp (cadddr args)) (cadr (member :ret (cmp-eval (cadddr args))))))
;; 			       (k1  (when ret (cadr (member :k1  (cadddr args))))))
;; 			  (when (constantp k1)
;; 			    (when (constantp (caddr args)) 
;; 			      (let ((z (cmp-eval (caddr args))))
;; 				(not (member-if-not (car ltf) (if k1 (mapcar (cmp-eval k1) z) z))))))))))
;; 	    (cond ((or m1 m2) (c1t))
;; 		  (f1 (c1nil))
;; 		  ((let ((info (make-info))) 
;; 		     (list 'call-global info (car ltf) (c1args (list (cadr args)) info))))))))))))
;; (si::putprop 'is-eq-test-item-list 'c1is-eq-test-item-list 'c1)

(defun do-predicate (fn args)
  (let* ((info (make-info :type #tboolean))
	 (nargs (c1args args info))
	 (tp (car (rassoc fn +cmp-type-alist+))))
    (when (cdr args) (baboon))
    (let ((at (nil-to-t (coerce-to-one-value (info-type (cadar nargs))))))
      (cond ((type>= tp at) (c1expr (ignorable-pivot (car args) t)))
	    ((not (type-and at tp)) (c1expr (ignorable-pivot (car args) nil)))
	    ((list 'call-global info fn nargs))))))
;(dolist (l +cmp-type-alist+) 
;  (when (symbolp (cdr l)) 
;    (si::putprop (cdr l) 'do-predicate 'c1g)))

;(defun c1or (args)
;  (cond ((null args) (c1expr nil))
;	((constantp (car args)) (let ((na (cmp-eval (car args)))) (if na (c1expr na) (c1or (cdr args)))))
;	((null (cdr args)) (c1expr (car args)))
;	((macro-function 'or) (c1expr (cmp-macroexpand `(or ,@args))))
;	((let ((info (make-info))) (list 'call-global info 'or (c1args args info))))))
;(si::putprop 'or 'c1or 'c1)

;; (defun c1array-element-type (args)
;;   (let* ((info (make-info))
;; 	 (nargs (c1args args info))
;; 	 (vt (info-type (cadar nargs)))
;; 	 (vt (if (type>= #tarray vt) (si::sequence-type-element-type-int vt) 'error))
;; 	 (vt (if (eq '* vt) 'error vt)))
;;     (cond ((not (eq 'error vt))
;; 	   (c1expr `(quote ,vt)))
;; 	  ((list 'call-global info 'array-element-type nargs)))))
;; (si::putprop 'array-element-type 'c1array-element-type 'c1)

(defun cons-type-length (type)
  (cond ((and (consp type) (eq (car type) 'cons)) (the seqind (+ 1 (cons-type-length (caddr type)))))
	(0)))

;; (defmacro one-int-tp (tp)
;;   `(and (consp ,tp) (eq (car ,tp) 'integer) (cadr ,tp) (eq (cadr ,tp) (caddr ,tp)) `((,(cadr ,tp)))))

;; (defun c1make-array (args)
;;   (let* ((info (make-info))
;; 	 (nargs (c1args args info)))
;;     (let* ((eltp (position :element-type args))
;; 	   (eltp (when eltp (nth (1+ eltp) nargs)))
;; 	   (eltp (when eltp (info-type (second eltp))))
;; 	   (eltp (when eltp (when (atomic-tp eltp) `(,(cadr eltp)))))
;; 	   (eltp (or eltp  `(*))))
;;       (let ((szf (let ((st (cmp-norm-tp (info-type (cadar nargs)))))
;; 		   (cond ((and (constantp (car args)) 
;; 			       (let ((v (cmp-eval (car args)))) 
;; 				 (list (if (listp v) v (list v))))))
;; 			 ((one-int-tp st))
;; 			 ((not (type-and #tlist (nil-to-t st))) `((*)))
;; 			 ((and (eq (caar nargs) 'call-global) (eq (caddar nargs) 'list))
;; 			  `(,(mapcar (lambda (x) (let ((tp (cmp-norm-tp (info-type (cadr x))))) 
;; 						   (or (caar (one-int-tp tp)) `*)))
;; 				     (fourth (car nargs)))))
;; 			 (`(*))))))
;; 	(setf (info-type info) (cmp-norm-tp `(array ,@eltp ,@szf)))
;; 	(list 'call-global info 'make-array nargs)))))
;(si::putprop 'make-array 'c1make-array 'c1)

;(defun all-type (types type)
;  (if (null types) 
;      (values t nil)
;    (let ((m (subtypep (car types) type))
;	  (f (subtypep type (car types))))
;      (multiple-value-bind 
;       (m1 f1)(all-type (cdr types) type)
;        (values (and m m1) (or (and (not m) (not f)) f1))))))
    
;(defun all-type-check (fn type pred args)
;  (let* ((info (make-info))
;	(nargs (c1args args info)))
;    (multiple-value-bind 
;     (m f) (all-type (mapcar (lambda (x) (info-type (cadr x))) nargs) type)
;     (cond (m (c1expr t))
;	   (f (c1expr nil))
;	   ((c1expr (reduce (lambda (x y) `(and ,x (,pred ,y))) args :initial-value t)))))))

;(defun all-lists (args)
;  (every 'listp args))
;(defun c1all-lists (args)
;  (all-type-check 'all-lists 'list 'listp args))
;(si::putprop 'all-lists 'c1all-lists 'c1)
;(defun all-vectors (args)
;  (every 'vectorp args))
;(defun c1all-vectors (args)
;  (all-type-check 'all-vectors 'vector 'vectorp args))
;(si::putprop 'all-vectors 'c1all-vectors 'c1)

;; (defun boole3 (a b c)  (boole a b c))
;; (si:putprop 'boole '(c1boole-condition . c1boole3) 'c1conditional)

;; (defun c1boole-condition (args)
;;    (and (not (endp (cddr args)))
;; 	(endp (cdddr args))
;;         (inline-boole3-string (car args))))

;; (defun c1boole3 (args)
;;   (c1expr (cons 'boole3 args)))

;; (defun inline-boole3 (&rest args)
;;   (let ((boole-op-arg (second (car args))))
;;     (or (eq (car boole-op-arg) 'fixnum-value) (error "must be constant"))
;;     (let ((string (inline-boole3-string  (third boole-op-arg))))
;;       (or string (error "should not get here boole opt"))
;;       (wt-inline-loc string (cdr args)))))

;; (defun inline-boole3-string (op-code)
;;   (and (constantp op-code) (setq op-code (eval op-code)))
;;   (case op-code
;; 	(#. boole-andc1 "((~(#0)) &   (#1) )")
;; 	(#. boole-andc2 "(  (#0)  & (~(#1)))")
;; 	(#. boole-nor   "(~((#0)  |   (#1)))")
;; 	(#. boole-orc1  "((~(#0)) |   (#1) )")
;; 	(#. boole-orc2  "(  (#0)  | (~(#1)))")
;; 	(#. boole-nand  "(~((#0)  &   (#1)))")
;; 	(#. boole-eqv	"(~((#0)  ^   (#1)))")
;; 	(#. boole-and   "(  (#0)  &   (#1))")
;; 	(#. boole-xor   "(  (#0)  ^   (#1))")
;; 	(#. boole-ior   "(  (#0)  |   (#1))")))
 
;(si:putprop 'ash '(c1ash-condition . c1ash) 'c1conditional)

;(defconstant itop (integer-length most-positive-fixnum))
;(defconstant ibot (- itop))

;(defun c1ash-condition (args)
;  (let ((shamt (second args)))
;    (or (typep shamt `(integer ,ibot ,itop))
;	(and (consp shamt)
;	     (eq (car  shamt) 'the)
;	     (let ((type (cadr  shamt)))
;	        (type>= `(integer ,ibot ,itop) type))))))

;(defun c1ash (args)
;  (let  ((shamt (second args))fun)
;    (cond ((constantp shamt) (setq shamt (eval shamt))
;	   (or (si:fixnump shamt) (error "integer shift only"))
;	   (cond ((< shamt 0) (setq fun 'shift>> ))
;		 ((>= shamt 0) (setq fun 'shift<<))))
;	  (t (let ((type (second shamt)))
;	       ;;it had to be a (the type..)
;	       (cond ((type>= `(integer 0 ,itop) type)
;		      (setq fun 'shift<< ))
;		     ((type>= `(integer ,ibot 0) type)
;		      (setq fun 'shift>> ))
;		     (t (error "should not get here")))
;	       )))
;    (c1expr (cons fun args))))
;(defun shift>> (a b) (ash a  b))
;(defun shift<< (a b) (ash a  b))
;(si:putprop 'ash '(c1ash-condition . c1ash)  'c1conditional)
;; (si:putprop 'shift>> "Lash" 'lfun)
;; (si:putprop 'shift<< "Lash" 'lfun)

;; (si:putprop 'length 'c1length 'c1)

;; (defun c1length (args &aux (info (make-info)))
;;   (setf (info-type info) #tseqind)
;;   (cond ((and (consp (car args))
;; 	      (eq (caar args) 'symbol-name)
;; 	      (let ((args1 (cdr (car args))))
;; 		(and args1 (not (cddr args1))
;; 		     (list 'call-global info 'symbol-length
;; 			   (c1args args1 info))))))
;; 	(t  (setq args (c1args args info))
;; 	    (list 'call-global info 'length args ))))


(defun c1get (args &aux (info (make-info)))

  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'get 2 (length args)))
  (when (and (not (endp (cddr args))) (not (endp (cdddr args))))
        (too-many-args 'get 3 (length args)))
  (list 'get info (c1args args info)))

(defun c2get (args)
  (if *safe-compile*
      (c2call-global 'get args nil t)
      (let ((*vs* *vs*) (*inline-blocks* 0) (pl (cs-push t t)))
           (setq args (inline-args args (if (cddr args) '(t t t) '(t t))))
           (wt-nl "{object V" pl" =(" (car args) ")->s.s_plist;")
           (wt-nl " object ind= " (cadr args) ";")
           (wt-nl "while(V" pl "!=Cnil){")
           (wt-nl "if(V" pl "->c.c_car==ind){")
           (unwind-exit (list 'CADR pl) 'jump)
           (wt-nl "}else V" pl "=V" pl "->c.c_cdr->c.c_cdr;}")
           (unwind-exit (if (cddr args) (caddr args) nil))
           (wt "}")
           (close-inline-blocks)))
  )

(defun co1eql (f args)
  (declare (ignore f))
  (or (and (cdr args) (not *safe-compile*))
      (return-from co1eql nil))
  (cond ((replace-constant args)
	 (cond ((characterp (second args))
		(setq args (reverse args))))
	 (cond ((characterp (car args))
		(let ((c (tmpsym)))
		  (c1expr
		   `(let ((,c ,(second args)))
		      (declare (type ,(result-type (second args))
				     ,c))
		      (and (typep ,c 'character)
			   (= (char-code ,(car args))
			      (the fixnum
				   (char-code
				    (the character
					 ,c)))
			      ))))))))))


	 
(si::putprop 'eql 'co1eql 'co1)		    

(defvar *frozen-defstructs* nil)

;; Return the most particular type we can EASILY obtain
;; from x.  
(defun result-type (x)
  (cond ((symbolp x)
	 (info-type (cadr (c1arg x))))
	((constantp x)
	 (cmp-norm-tp (type-of x)))
	((and (consp x) (eq (car x) 'the))
	 (cmp-norm-tp (second x)))
	(t t)))

;; (defun result-type (x)
;;   (cond ((symbolp x)
;; 	 (let ((tem (c1expr x)))
;; 	   (info-type (second tem))))
;; 	((constantp x)
;; 	 (cmp-norm-tp (type-of x)))
;; 	((and (consp x) (eq (car x) 'the))
;; 	 (cmp-norm-tp (second x)))
;; 	(t t)))

;(defun result-type (x)
;  (info-type (cadr (c1expr x))))

;; (defun lit-eval (form)
;;   (cond ((atom form) form)
;; 	((eq (car form) 'quote) (cadr form))
;; 	((cmp-eval form))))


(defun cgss (f)
  (cond ((null f))
	((symbolp f) (unless (or (eq f +opaque+) (get f 'tmp)) f))
	((atom f))
	((and (cgss (car f)) (cgss (cdr f))) f)))

;; this is going the wrong way.  want to go up..
(defun struct-type-opt (x sd)
  (let ((s (tmpsym))
	(included (get-included (si::s-data-name sd))))
    `(let ((,s ,x))
       (and
	 (structurep ,s)
	 ,(cond ((< (length included) 3)
		 `(or ,@
		      (mapcar #'(lambda (x)
				  `(eq (si::structure-def ,s)
				       ,(name-sd1 x)))
			      included)))
		(t `(si::structure-subtype-p ,s
					    ,(name-sd1
					       (si::s-data-name sd)))))))))

(defun get-included (name)
  (let ((sd (get name 'si::s-data)))
    (cons (si::s-data-name sd)
	  (mapcan 'get-included
		  (si::s-data-included sd)))))
  
(defun co1schar (f args)
  (declare (ignore f))
  (and (listp (car args)) (not *safe-compile*)
	(cdr args)
	(eq (caar args) 'symbol-name)
	(c1expr `(aref (the string ,(second (car args)))
			,(second args)))))

(si::putprop 'schar 'co1schar 'co1)

(si::putprop 'cons 'co1cons 'co1)
;; turn repetitious cons's into a list*

(defun cons-to-lista (x)
  (let ((tem  (last x)))
    (cond 
	((and (consp tem)
	      (consp (car tem))
	      (eq (caar tem) 'cons)
	      (eql (length (cdar tem)) 2)
	      (cons-to-lista (append (butlast x) (cdar tem)))))
	(t x))))
    	 

(defun co1cons (f args)
  (declare (ignore f))
  (let ((tem (and (eql (length args) 2) (cons-to-lista args))))
    (and tem (not (eq tem args))
	 (c1expr  (if (equal '(nil) (last tem))
		     (cons 'list (butlast tem))
		     (cons 'list* tem))))))

;; I don't feel it is good to replace the list call, but rather
;; usually better the other way around.  We removed c1list
;; because of possible feedback.

;; (defun c1nth-condition (args)
;;        (and (not (endp args))
;;             (not (endp (cdr args)))
;;             (endp (cddr args))
;;             (numberp (car args))
;;             (<= 0 (car args) 7)))

;; (defun c1nth (args)
;;        (c1expr (case (car args)
;;                      (0 (cons 'car (cdr args)))
;;                      (1 (cons 'cadr (cdr args)))
;;                      (2 (cons 'caddr (cdr args)))
;;                      (3 (cons 'cadddr (cdr args)))
;;                      (4 (list 'car (cons 'cddddr (cdr args))))
;;                      (5 (list 'cadr (cons 'cddddr (cdr args))))
;;                      (6 (list 'caddr (cons 'cddddr (cdr args))))
;;                      (7 (list 'cadddr (cons 'cddddr (cdr args))))
;;                      )))

;; (defun c1nthcdr-condition (args)
;;        (and (not (endp args))
;;             (not (endp (cdr args)))
;;             (endp (cddr args))
;;             (numberp (car args))
;;             (<= 0 (car args) 7)))

;; (defun c1nthcdr (args)
;;        (c1expr (case (car args)
;;                      (0 (cadr args))
;;                      (1 (cons 'cdr (cdr args)))
;;                      (2 (cons 'cddr (cdr args)))
;;                      (3 (cons 'cdddr (cdr args)))
;;                      (4 (cons 'cddddr (cdr args)))
;;                      (5 (list 'cdr (cons 'cddddr (cdr args))))
;;                      (6 (list 'cddr (cons 'cddddr (cdr args))))
;;                      (7 (list 'cdddr (cons 'cddddr (cdr args))))
;;                      )))

;; (defun c1rplaca-nthcdr (args &aux (info (make-info)))
;;   (when (or (endp args) (endp (cdr args)) (endp (cddr args)))
;;         (too-few-args 'si:rplaca-nthcdr 3 (length args)))
;;   (unless (endp (cdddr args))
;;           (too-few-args 'si:rplaca-nthcdr 3 (length args)))
;;   (if (and (numberp (cadr args)) (<= 0 (cadr args) 10))
;;       (let  ((x (tmpsym))(y (tmpsym)))
;; 	(c1expr
;; 	 `(let ((,x ,(car args))
;; 		(,y ,(third args)))
;; 	    (setf ,x (nthcdr ,(cadr args) ,x))
;; 	    (setf (car ,x) ,y)
;; 	    ,y)))
;;       (list 'call-global info 'si:rplaca-nthcdr (c1args args info))))


;; Facilities for faster reading and writing from file streams.
;; You must declare the stream to be :in-file
;; or :out-file

(si::putprop 'read-byte 'co1read-byte 'co1)
(si::putprop 'read-char 'co1read-char 'co1)
(si::putprop 'write-byte 'co1write-byte 'co1)
(si::putprop 'write-char 'co1write-char 'co1)



(defun fast-read (args read-fun)
  (cond
    ((and (not *safe-compile*)
	  (< *space* 2)
	  (null (second args))
	  (boundp 'si::*eof*))
     (cond
       ((atom (car args))
	(or (car args) (setq args (cons '*standard-input* (cdr args))))
	(let ((stream (car args))
	      (eof (third args)))
	  `(let ((ans 0))
	     (declare (fixnum  ans))
	     (cond ((fp-okp ,stream)
		    (setq ans  (sgetc1 ,stream))
		    (cond ((and (eql ans ,si::*eof*)
				(sfeof  ,stream))
			   ,eof)
			  (,(if (eq read-fun 'read-char1) '(code-char ans) 'ans))))
		   ((,read-fun ,stream  ,eof))
		   ))))
       (`(let ((.strm. ,(car args)))
	   (declare (type ,(result-type (car args)) .strm.))
	     ,(fast-read (cons '.strm. (cdr args)) read-fun)))))))

(defun co1read-byte (f args &aux tem) f
  (let* ((s (tmpsym))(nargs (cons s (cdr args))))
  (cond ((setq tem (fast-read nargs 'read-byte1))
	 (let ((*space* 10))		;prevent recursion!
	   (c1expr `(let ((,s ,(car args))) 
		      (if (= 1 (si::get-byte-stream-nchars ,s)) ,tem ,(cons f nargs)))))))))

(defun co1read-char (f args &aux tem)
  (declare (ignore f))
  (cond ((setq tem (fast-read args 'read-char1))
	 (let ((*space* 10))		;prevent recursion!
	   (c1expr tem)))))    

(defun cfast-write (args write-fun tp)
  (when (and (not *safe-compile*)
	     (< *space* 2)
	     (boundp 'si::*eof*))
    (let* ((stream (second args))(stream (or stream '*standard-output*)))
      (if (atom stream)
	  (let ((ch (tmpsym))) 
	    `(let ((,ch ,(car args)))
	       (if (and (fp-okp ,stream) (typep ,ch ',tp)) (sputc ,ch ,stream) (,write-fun ,ch ,stream))
	       ,ch))
	(let ((str (tmpsym)))
	  `(let ((,str ,stream))
	     (declare (type ,(result-type stream) ,str))
	     ,(cfast-write (list (car args) str) write-fun tp)))))))


(defun co1write-byte (f args)
  (declare (ignore f))
  (let ((tem (cfast-write args 'write-byte 'fixnum)))
    (when tem 
      (let ((*space* 10))
	(c1expr tem)))))


(defun co1write-char (f args)
  (declare (ignore f))
  (let* ((tem (cfast-write args 'write-char 'character)))
    (when tem 
      (let ((*space* 10))
	(c1expr tem)))))

;; (defun co1write-byte (f args) f
;;   (let ((tem (cfast-write args 'write-byte)))
;;     (if tem (let ((*space* 10))
;; 	      (c1expr
;; 		`(let ((.ch ,(car args)))
;; 		   (declare (fixnum .ch))
;; 		   ,tem
;; 		   ,(if (atom (car args)) (car args) '.ch)))))))

;; (defun co1write-char (f args) f
;;   (let ((tem (cfast-write args 'write-char)))
;;     (if tem (let ((*space* 10))
;; 	      (c1expr
;; 		`(let ((.ch ,(car args)))
;; 		   (declare (character .ch))
;; 		   ,tem
;; 		   ,(if (atom (car args)) (car args) '.ch)))))))



(defun aet-c-type (type)
  (or (cdr (assoc type +c-type-string-alist+)) (baboon)))


(si:putprop 'vector-push 'co1vector-push 'co1)
(si:putprop 'vector-push-extend 'co1vector-push 'co1)
(defun co1vector-push (f args) f
  (unless
   (or *safe-compile*
       (> *space* 3)
       (null (cdr args))
       )
   (let ((*space* 10))
     (c1expr
       (let ((val (tmpsym)) (v (tmpsym)) (i (tmpsym)) (dim (tmpsym)))
	`(let* ((,val ,(car args))
		(,v ,(second args))
		(,i (fill-pointer ,v))
		(,dim (array-total-size ,v)))
	   (declare (fixnum ,i ,dim))
	   (declare (type ,(result-type (second args)) ,v))
	   (declare (type ,(result-type (car args)) ,val))
	   (cond ((< ,i ,dim)
		  (the fixnum (si::fill-pointer-set ,v (the fixnum (+ 1 ,i))))
		  (si::aset ,val ,v ,i)
		  ,i)
		 (t ,(cond ((eq f 'vector-push-extend)
			    `(vector-push-extend ,val
						 ,v ,@(cddr args))))))))))))

(defun constant-fold-p (x)
  (cond ((constantp x) t)
	((atom  x) nil)
	((eq (car x) 'the)
	 (constant-fold-p (third x)))
	((and 
	      (symbolp (car x))
	      (eq (get (car x) 'co1)
		  'co1constant-fold))
	 (dolist (w (cdr x))
		 (or (constant-fold-p w)
		     (return-from constant-fold-p nil)))
	 t)
	(t nil)))

(defun co1constant-fold (f args )
  (cond ((and (fboundp f)
	      (dolist (v args t)
		      (or (constant-fold-p v)
			  (return-from co1constant-fold nil))))
	 (c1expr (cmp-eval (cons f args))))))


(si::putprop 'do 'co1special-fix-decl 'co1special)
(si::putprop 'do* 'co1special-fix-decl 'co1special)
(si::putprop 'prog 'co1special-fix-decl 'co1special)
(si::putprop 'prog* 'co1special-fix-decl 'co1special)

(defun co1special-fix-decl (f args)
  (flet ((fixup (forms &aux decls )
	  (block nil
		 (tagbody
		  top
		  (or (consp forms) (go end))
		  (let ((tem (car forms)))
		    (if (and (consp tem)
			     (setq tem  (cmp-macroexpand tem))
			     (eq (car tem) 'declare))
			(progn (push tem decls) (pop forms))
		      (go end)))
		      (go top)
	      		; all decls made explicit.
		      end
		     (return  (nconc (nreverse decls) forms))))))
	(c1expr
	  (cmp-macroexpand
	    (case f
	      ((do do*) `(,f ,(car args)
			     ,(second args)
			     ,@ (fixup (cddr args))))
	      ((prog prog*)
	       `(,f ,(car args)
		    ,@ (fixup (cdr args)))))))))


  
;; end new		  

;; (defun c1cons-car-cdr (car args &aux z)
;;   (let* ((x (when (symbolp (car args))
;; 	      (let ((v (car (member (car args) *vars* :key (lambda (x) (when (var-p x) (var-name x)))))))
;; 		(list v (var-ref v) (var-ref-ccb v) (var-loc v)))))
;; 	 (info (make-info))
;; 	 (nargs (c1args args info))
;; 	 (tp (info-type (cadar nargs)))
;; 	 (ntp (or (if car (car-propagator 'car tp) (cdr-propagator 'cdr tp)) t))
;; 	 (antp (atomic-tp ntp)))
;;     (cond ((and nil antp (ignorable-form (car nargs)) (setq z (c1constant-value (car antp) nil)))
;; 	   (when x
;; 	     (let ((v (pop x))) 
;; 	       (setf (var-ref v) (pop x) (var-ref-ccb v) (pop x) (var-loc v) (car x))))
;; 	   z)
;; 	  (t (setf (info-type info) ntp) 
;; 	     (list 'call-global info (if car 'si::cons-car 'si::cons-cdr) nargs nil nil)))));FIXME

;; (defun c1cons-car (args)
;;   (c1cons-car-cdr t args))
;; (defun c1cons-cdr (args)
;;   (c1cons-car-cdr nil args))
;; (setf (get 'si::cons-car 'c1) 'c1cons-car)	 
;; (setf (get 'si::cons-cdr 'c1) 'c1cons-cdr)

(defun narg-list-type (nargs &optional dot)
  (let* ((y (mapcar (lambda (x &aux (atp (atomic-tp (info-type (cadr x)))))
		     (cond ;((get-vbind x))
			   (atp (car atp));FIXME
			   ((get-vbind x))
			   (+opaque+))) nargs)))
;    (when dot (setf (cdr (last y 2)) (car (last y)))) ;FIXME bump-pcons -- get rid of pcons entirely
    (let ((s (when dot (car (last y))))(tp (info-type (cadar (last nargs)))));FIXME
      (cond ((when s (type>= #tproper-list tp)) #tproper-cons)
	    ((when s (type-and #tnull tp)) #tcons)
	    (t (when dot (setf (cdr (last y 2)) (car (last y)))) (object-type y))))))

;; (defun narg-list-type (nargs &optional dot)
;;   (let* ((y (mapcar (lambda (x &aux (atp (atomic-tp (info-type (cadr x)))))
;; 		     (cond ;((get-vbind x))
;; 			   (atp (car atp));FIXME
;; 			   ((get-vbind x))
;; 			   (+opaque+))) nargs)))
;; ;    (when dot (setf (cdr (last y 2)) (car (last y)))) ;FIXME bump-pcons -- get rid of pcons entirely
;;     (let ((s (when dot (car (last y))))(tp (info-type (cadar (last nargs)))));FIXME
;;       (cond ((when s (type>= #tproper-list tp)) #tproper-cons)
;; 	    ((when s (type-and #tnull tp)) #tcons)
;; 	    (t (when dot (setf (cdr (last y 2)) (car (last y)))) `(member ,y))))))

(defun c1list (args)
  (let* ((info (make-info))
	 (nargs (c1args args info)))
    (cond ((not nargs) (c1nil))
	  ((setf (info-type info) (narg-list-type nargs))
	   `(call-global ,info list ,nargs)))))

;; (defun c1list (args)
;;   (let* ((info (make-info))
;; 	 (nargs (c1args args info)))
;;     (setf (info-type info) (cond ((not args) #tnull)
;; 				 ((< (length args) *cdr-limit*)
;; 				  (cmp-norm-tp
;; 				   (reduce (lambda (y x)
;; 					     (declare (ignore x))
;; 					     `(cons t ,y)) args :initial-value 'null)))
;; 				 (#tproper-cons)));FIXME
;;     (list 'call-global info 'list nargs)))
(si::putprop 'list 'c1list 'c1)
      
(defun c1list* (args)
  (let* ((info (make-info))
	 (nargs (c1args args info)))
    (cond ((not nargs) (c1nil))
	  ((not (cdr nargs)) (car nargs))
	  ((setf (info-type info) (narg-list-type nargs t))
	   `(call-global ,info ,(if (cddr nargs) 'list* 'cons) ,nargs)))))

;; (defun c1list* (args)
;;   (let* ((info (make-info))
;; 	 (nargs (c1args args info)))
;;     (setf (info-type info) (cond ((not nargs) #tnull) ((not (cdr nargs)) (info-type (cadar nargs))) 
;; 				 ((type>= #tproper-list (info-type (cadar (last nargs)))) #tproper-cons)
;; 				 (#tcons)));FIXME
;;     (list 'call-global info 'list* nargs)))
(si::putprop 'list* 'c1list* 'c1)
(si::putprop 'cons  'c1list* 'c1)
      
;; (defun c1append (args)
;;   (let* ((info (make-info))
;; 	 (nargs (c1args args info)))
;;     (setf (info-type info) (cond ((not nargs) #tnull) ((not (cdr nargs)) (info-type (cadar nargs))) 
;; 				 ((type>= #tproper-list (info-type (cadar (last nargs)))) #tproper-cons)
;; 				 (#tcons)));FIXME
;;     (list 'call-global info 'append nargs)))
;; (si::putprop 'append 'c1append 'c1)
      
;; (defun c1list-nth (args &aux (info (make-info)))
;;   (when (or (endp args) (endp (cdr args)))
;;         (too-few-args 'si:rplaca-nthcdr 2 (length args)))
;;   (unless (endp (cddr args))
;;           (too-few-args 'si:rplaca-nthcdr 2 (length args)))
;;   (if (and (numberp (car args)) (<= 0 (car args) 10))
;;       (list 'list-nth-immediate info
;;             (car args)
;;             (c1args (list (cadr args)) info))
;;       (list 'call-global info 'si:list-nth (c1args args info))))

;; (defun c2list-nth-immediate (index args &aux (l (cs-push t t))
;;                                              (*vs* *vs*) (*inline-blocks* 0))
;;   (setq args (inline-args args '(t t)))
;;   (wt-nl "{object V" l "= ")
;;   (if *safe-compile*
;;       (progn
;;        (dotimes** (i index) (wt "cdr("))
;;        (wt (car args))
;;        (dotimes** (i index) (wt ")"))
;;        (wt ";")
;;        (wt-nl "if((!consp(V" l ")) && (" (car args) "!= Cnil))")
;;        (wt-nl " FEwrong_type_argument(Scons,V" l ");")
;;        )
;;       (progn
;;        (wt-nl (car args))
;;        (dotimes** (i index) (wt-nl "->c.c_cdr"))
;;        (wt ";")))
;;   (unwind-exit (list 'CAR l))
;;   (wt "}")
;;   (close-inline-blocks))
