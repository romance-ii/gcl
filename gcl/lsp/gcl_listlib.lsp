;; -*-Lisp-*-
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


;;;;    listlib.lsp
;;;;
;;;;                        list manipulating routines

; Rewritten 11 Feb 1993 by William Schelter and Gordon Novak to use iteration
; rather than recursion, as needed for large data sets.


(in-package 'lisp)
(export '(endp nthcdr last butlast nbutlast ldiff tailp list-length make-list 
	       rest acons pairlis copy-list copy-alist nconc nreconc nth first
	       second third fourth fifth sixth seventh eighth ninth tenth copy-tree
	       tree-equal mapl mapcar maplist mapc mapcan mapcon append revappend 
	       member member-if member-if-not adjoin adjoin-if adjoin-if-not assoc
	       assoc-if assoc-if-not rassoc rassoc-if rassoc-if-not subst subst-if
	       subst-if-not nsubst nsubst-if nsubst-if-not sublis nsublis intersection
	       nintersection union nunion set-difference nset-difference set-exclusive-or
	       nset-exclusive-or subsetp nth-value))

(in-package 'system)

(eval-when
 (compile eval)
	   
 (defmacro comp-key (key) 
   `(if (eq ,key #'identity) 0 1))
 
 (defmacro do-key (key n x) 
   (let ((xx (gens x)))
     `(let ((,xx ,x)) (case ,n (0 ,xx) (otherwise (funcall ,key ,xx))))))
 
 (defmacro comp-test (test test-not) 
   `(+ (if ,test-not 1 0)
       (let ((,test ,test))
	 (if (eq ,test #'eq) 0
	   (if (eq ,test #'eql) 2
	     (if (eq ,test #'equal) 4
	       (if (eq ,test #'equalp) 6 
		 (if (eq ,test #'funcall) 8 10))))))))
 
 (defmacro do-test (test nn x y) 
   (let ((n (gens nn))(nx (gens x))(ny (gens y)))
     `(let* ((,n ,nn)(,nx ,x)(,ny ,y))
	(case ,n 
	      (0 (eq ,nx ,ny))
	      (1 (not (eq ,nx ,ny)))
	      (2 (eql ,nx ,ny))
	      (3 (not (eql ,nx ,ny)))
	      (4 (equal ,nx ,ny))
	      (5 (not (equal ,nx ,ny)))
	      (6 (equalp ,nx ,ny))
	      (7 (not (equalp ,nx ,ny)))
	      (8 (funcall ,nx ,ny))
	      (9 (not (funcall ,nx ,ny)))
	      (10 (funcall ,test ,nx ,ny))
	      (otherwise (not (funcall ,test ,nx ,ny)))))))
 
 
 (defmacro bump-test (nn i) 
   (let ((n (gens nn)))
     `(let ((,n ,nn))
	(case ,n 
	      (2 (if (eql-is-eq ,i) 0 ,n))
	      (3 (if (eql-is-eq ,i) 1 ,n))
	      (4 (if (equal-is-eq ,i) 0 ,n))
	      (5 (if (equal-is-eq ,i) 1 ,n))
	      (6 (if (equalp-is-eq ,i) 0 ,n))
	      (7 (if (equalp-is-eq ,i) 1 ,n))
	      (otherwise ,n)))))
 
 (defmacro bump-test-list (n l) 
   `(case ,n 
	  (2 (if (member-if-not 'eql-is-eq ,l) ,n 0))
	  (3 (if (member-if-not 'eql-is-eq ,l) ,n 1))
	  (4 (if (member-if-not 'equal-is-eq ,l) ,n 0))
	  (5 (if (member-if-not 'equal-is-eq ,l) ,n 1))
	  (6 (if (member-if-not 'equalp-is-eq ,l) ,n 0))
	  (7 (if (member-if-not 'equalp-is-eq ,l) ,n 1))
	  (otherwise ,n)))
 
 (defconstant +list-ll+ '(&key key test test-not))
 
 (defmacro deflist (n (il list ifp plp) &body body)
   `(progn
      (defun ,n ,(append `(,@il ,list) +list-ll+)
	(declare (optimize (safety 2)))
	,@(when plp `((check-type ,list proper-list)))
	(and test test-not (error "both test and test not supplied"))
	(let* ((key (or key #'identity))(key (if (functionp key) key (funcallable-symbol-function key)))
	       (key-comp  (comp-key key))
	       (test (or test test-not #'eql))
	       (test (if (functionp test) test (funcallable-symbol-function test)))
	       (test-comp (comp-test test test-not))
	       (test-comp (bump-test test-comp ,(car (last il)))))
	  ,@body))
      ,@(when ifp
	  `((defun ,(intern (string-concatenate (string n) "-IF")) 
	      ,(append `(,@il ,list) +list-ll+)
	      (declare (optimize (safety 2))(ignore test test-not))
	      (,n ,@il ,list :test 'funcall :key key))
	    (defun ,(intern (string-concatenate (string n) "-IF-NOT")) 
	      ,(append `(,@il ,list) +list-ll+)
	      (declare (optimize (safety 2)) (ignore test test-not))
	      (,n ,@il ,list :test-not 'funcall :key key))))))
 
 (defmacro defllist (n (l1 l2 plp) &body body)
   `(progn
      (defun ,n ,(append `(,l1 ,l2) +list-ll+)
	(declare (optimize (safety 2)))
	(check-type ,l1 proper-list)
	,@(when plp `((check-type ,l2 proper-list)))
	(let* ((key (or key #'identity))(key (if (functionp key) key (funcallable-symbol-function key)))
	       (key-comp  (comp-key key)))
	  ,@body))))
 (defmacro collect (r rp form)
   `(let ((tmp ,form))
      (setq ,rp (cond (,rp (rplacd ,rp tmp) tmp) ((setq ,r tmp))))))
 
 (defmacro cons-length (x)
   (declare (optimize (safety 2)))
   `(let ((,x ,x))
      (if (not ,x) 0
	(do ((i 1 (1+ i))(s ,x (cdr s))(f (cdr ,x) (cddr f)))
	    ((>= i array-dimension-limit) (- array-dimension-limit))
	    (cond ((eq s f) (return i))
		  ((endp f) (return (1+ (- (+ i i)))))
		  ((endp (cdr f)) (return (- (+ i i))))))))))

(defun endp (x)
  (declare (optimize (safety 2)))
  (check-type x list)
  (not x))

(defun nthcdr (n x)
  (declare (optimize (safety 2)))
  (check-type n (integer 0))
  (check-type x list)
  (when x
    (let ((n (cond ((<= n array-dimension-limit) n) 
		   ((let ((j (cons-length x))) (when (> j 0) (mod n j))))
		   ((return-from nthcdr nil)))))
      (do ((x x (cdr x))(n n (1- n))) ((or (<= n 0) (endp x)) x)))))

(defun last (x &optional (n 1));FIXME check for circle
  (declare (optimize (safety 2)))
  (check-type x list)
  (check-type n (integer 0))
  (let* ((n (min array-dimension-limit n))
	 (w (cond ((= n 1) (cdr x))
		  ((do ((n n (1- n))(w x (cdr w))) ((<= n 0) w)
		       (unless (consp w) (return-from last x)))))))
    (do ((x x (cdr x)) (w w (cdr w)))
	((atom w) x))))

(defun butlast (x &optional (n 1));FIXME check for circle
  (declare (optimize (safety 2)))
  (check-type x list)
  (check-type n (integer 0))
  (let* ((n (min array-dimension-limit n))
	 (w (cond ((= n 1) (cdr x))
		  ((do ((n n (1- n))(w x (cdr w))) ((<= n 0) w)
		       (unless (consp w) (return-from butlast nil)))))))
    (do (r rp (x x (cdr x)) (w w (cdr w)))
	((atom w) r)
	(let ((tmp (cons (car x) nil))) (collect r rp tmp)))))

(defun nbutlast (x &optional (n 1));FIXME check for circle
  (declare (optimize (safety 2)))
  (check-type x list)
  (check-type n (integer 0))
  (let* ((n (min array-dimension-limit n))
	 (w (cond ((= n 1) (cdr x))
		  ((do ((n n (1- n))(w x (cdr w))) ((<= n 0) w)
		       (unless (consp w) (return-from nbutlast nil)))))))
    (do ((r x) (rp nil x) (x x (cdr x)) (w w (cdr w)))
	((atom w) (when rp (rplacd rp nil) r)))))

(defun ldiff (l tl &aux (test #'eql))
  (declare (optimize (safety 2)))
  (check-type l list)
  (do (r rp (tc (bump-test (comp-test test nil) tl)) (l l (cdr l))) 
      ((cond ((do-test test tc l tl)) ((atom l) (when rp (rplacd rp l)))) r)
      (let ((tmp (cons (car l) nil))) (collect r rp tmp))))

(defun tailp (tl l &aux (test #'eql))
  (declare (optimize (safety 2)))
  (check-type l list)
  (do (r (tc (bump-test (comp-test test nil) tl)) (l l (cdr l))) 
      ((cond ((setq r (do-test test tc l tl))) ((atom l))) r)))
	   
(defun list-length (l)
  (declare (optimize (safety 2)))
  (check-type l list)
  (cond ((endp l) 0) 
	((endp (setq l (cdr l))) 1)
	((endp (setq l (cdr l))) 2)
	((endp (setq l (cdr l))) 3)
	((endp (setq l (cdr l))) 4)
	((let ((x (cons-length l)))
	   (when (<= x 0) (+ 4 (- x)))))))

(defun make-list (n &key initial-element)
  (declare (optimize (safety 2)))
  (check-type n seqind)
  (do (r (n n (1- n))) ((<= n 0) r)
      (push initial-element r)))

(defun rest (l)
  (declare (optimize (safety 2)))
  (check-type l list)
  (cdr l))

(defun acons (key datum alist)
  (declare (optimize (safety 2)))
  (cons (cons key datum) alist))

(defun pairlis (k d &optional a)
  (declare (optimize (safety 2)))
  (check-type k proper-list)
  (check-type d proper-list)
  (do ((k k (cdr k)) (d d (cdr d)) (a a (acons (car k) (car d) a)))
      ((or (endp k) (endp d)) a)))

(defun copy-list (l)
  (declare (optimize (safety 2)))
  (check-type l list)
  (do (r rp (l l (cdr l))) ((atom l) (when rp (rplacd rp l)) r)
      (let ((tmp (cons (car l) nil))) (collect r rp tmp))))

(defun copy-alist (l)
  (declare (optimize (safety 2)))
  (check-type l proper-list)
  (do (r rp (l l (cdr l))) ((endp l) r)
      (let ((tmp (cons (let ((e (car l))) (cond ((consp e) (cons (car e) (cdr e))) (e))) nil))) 
	(collect r rp tmp))))

(defun nconc (&rest l)
  (declare (optimize (safety 2)) (:dynamic-extent l))
  (do (r rp (l l (cdr l)))
      ((endp l) r)
      (let ((it (car l)))
	(if rp (rplacd rp it) (setq r it))
	(when (and (cdr l) (consp it)) (setq rp (last it))))))

(defun nreconc (list tail)
  (declare (optimize (safety 2)))
  (check-type list proper-list)
  (do (cdp (p tail)(pp list)) ((endp pp) p)
      (setq cdp (cdr pp) p (rplacd pp p) pp cdp)))

(defun nth (n x)
  (declare (optimize (safety 2)))
  (check-type n (integer 0))
  (check-type x list)
  (car (nthcdr n x)))

(defun first (x)   (declare (optimize (safety 2))) (check-type x list) (car x))
(defun second (x)  (declare (optimize (safety 2))) (check-type x list) (cadr x))
(defun third (x)   (declare (optimize (safety 2))) (check-type x list) (caddr x))
(defun fourth (x)  (declare (optimize (safety 2))) (check-type x list) (cadddr x))
(defun fifth (x)   (declare (optimize (safety 2))) (check-type x list) (car (cddddr x)))
(defun sixth (x)   (declare (optimize (safety 2))) (check-type x list) (cadr (cddddr x)))
(defun seventh (x) (declare (optimize (safety 2))) (check-type x list) (caddr (cddddr x)))
(defun eighth (x)  (declare (optimize (safety 2))) (check-type x list) (cadddr (cddddr x)))
(defun ninth (x)   (declare (optimize (safety 2))) (check-type x list) (car (cddddr (cddddr x))))
(defun tenth (x)   (declare (optimize (safety 2))) (check-type x list) (cadr (cddddr (cddddr x))))

; Courtesy Paul Dietz
(defmacro nth-value (n expr)
  (declare (optimize (safety 2)))
  `(nth ,n (multiple-value-list ,expr)))

(defun copy-tree (tr)
  (declare (optimize (safety 2)))
  (do (st cs a (g (load-time-value (gensym)))) (nil)
      (declare (:dynamic-extent st cs))
      (cond ((atom tr)
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setq a (pop cs) st (cdr st) tr (cons a tr)))
	     (unless cs (return tr))
	     (setf (car cs) tr tr (cdar st)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(deflist member ((item) list t t)
  (do ((list list (cdr list)))
      ((endp list))
      (when (do-test test test-comp item (do-key key key-comp (car list)))
	(return list))))

(deflist adjoin ((oitem) olist nil t)
  (do ((list olist (cdr list))(item (do-key key key-comp oitem)))
      ((endp list) (cons oitem olist))
      (when (do-test test test-comp item (do-key key key-comp (car list)))
	(return olist))))

(deflist assoc ((item) list t t)
  (do ((list list (cdr list))) 
      ((endp list))
      (let ((c (car list)))
	(check-type c list)
	(when c
	  (when (do-test test test-comp item (do-key key key-comp (car c)))
	    (return c))))))

(deflist rassoc ((item) list t t)
  (do ((list list (cdr list))) 
      ((endp list))
      (let ((c (car list)))
	(check-type c list)
	(when c
	  (when (do-test test test-comp item (do-key key key-comp (cdr c)))
	    (return c))))))

(defun tree-equal (tr1 tr2 &key test test-not)
  (declare (optimize (safety 2)))
  (and test test-not (error "both test and test not supplied"))
  (let* ((test (or test test-not #'eql))
	 (test (if (functionp test) test (funcallable-symbol-function test)))
	 (test-comp (comp-test test test-not)))
    (do (st1 cs1 st2 (g (load-time-value (gensym)))) (nil)
	(declare (:dynamic-extent st1 cs1 st2))
	(cond ((and (atom tr1) (consp tr2)) (return nil))
	      ((and (consp tr1) (atom tr2)) (return nil))
	      ((atom tr1)
	       (unless (do-test test test-comp tr1 tr2) (return nil))
	       (do nil ((or (not cs1) (eq g (car cs1))))
		   (setq cs1 (cdr cs1) tr1 (pop st1) tr2 (pop st2)))
	       (unless cs1 (return t))
	       (setf (car cs1) tr1 tr1 (cdar st1) tr2 (cdar st2)))
	      ((setq st1 (cons tr1 st1) cs1 (cons g cs1) tr1 (car tr1) 
		     st2 (cons tr2 st2) tr2 (car tr2)))))))

(deflist subst ((n o) tr t nil)
  (do (st cs a c rep (g (load-time-value (gensym)))) (nil)
      (declare (:dynamic-extent st cs))
      (setq rep (do-test test test-comp o (do-key key key-comp tr)))
      (cond ((or rep (atom tr))
	     (setq tr (if rep n tr))
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setq a (pop cs) c (pop st) tr (if (and (eq a (car c)) (eq tr (cdr c))) c (cons a tr))))
	     (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(deflist nsubst ((n o) tr t nil)
  (do (st cs rep (g (load-time-value (gensym)))) (nil)
      (declare (:dynamic-extent st cs))
      (setq rep (do-test test test-comp o (do-key key key-comp tr)))
      (cond ((or rep (atom tr))
	     (setq tr (if rep n tr))
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setf (caar st) (pop cs) (cdar st) tr tr (pop st)))
	     (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(defllist sublis (al tr nil)
  (do (st cs a c rep (g (load-time-value (gensym)))) (nil)
      (declare (:dynamic-extent st cs))
      (setq rep (assoc (do-key key key-comp tr) al :test test :test-not test-not))
      (cond ((or rep (atom tr))
	     (setq tr (if rep (cdr rep) tr))
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setq a (pop cs) c (pop st) tr (if (and (eq a (car c)) (eq tr (cdr c))) c (cons a tr))))
	     (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(defllist nsublis (al tr nil)
  (do (st cs rep (g (load-time-value (gensym)))) (nil)
      (declare (:dynamic-extent st cs))
      (setq rep (assoc (do-key key key-comp tr) al :test test :test-not test-not))
      (cond ((or rep (atom tr))
	     (setq tr (if rep (cdr rep) tr))
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setf (caar st) (pop cs) (cdar st) tr tr (pop st)))
	     (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(defllist intersection (l1 l2 t)
  (do (r (l1 l1 (cdr l1)))
      ((endp l1) r)
      (let ((oitem (car l1)))
	(when (member (do-key key key-comp oitem) l2 :test test :test-not test-not :key key)
	  (push oitem r)))))

(defllist nintersection (l1 l2 t)
  (do (r rp (l1 l1 (cdr l1)))
      ((endp l1) (when rp (rplacd rp nil)) r)
      (when (member (do-key key key-comp (car l1)) l2 :test test :test-not test-not :key key)
	(collect r rp l1))))

(defllist union (l1 l2 t)
  (do ((r l2) (l1 l1 (cdr l1)))
      ((endp l1) r)
      (let* ((oitem (car l1)))
	(unless (member (do-key key key-comp oitem) l2 :test test :test-not test-not :key key)
	  (push oitem r)))))

(defllist nunion (l1 l2 t)
  (do (r rp (l1 l1 (cdr l1)))
      ((endp l1) (when rp (rplacd rp l2)) (or r l2))
      (unless (member (do-key key key-comp (car l1)) l2 :test test :test-not test-not :key key)
	(collect r rp l1))))


(defllist set-difference (l1 l2 t)
  (do (r (l1 l1 (cdr l1)))
      ((endp l1) r)
      (let* ((oitem (car l1)))
	(unless (member (do-key key key-comp oitem) l2 :test test :test-not test-not :key key)
	  (push oitem r)))))

(defllist nset-difference (l1 l2 t)
  (do (r rp (l1 l1 (cdr l1)))
      ((endp l1) (when rp (rplacd rp nil)) r)
      (unless (member (do-key key key-comp (car l1)) l2 :test test :test-not test-not :key key)
	(collect r rp l1))))

(defllist set-exclusive-or (l1 l2 t)
  (do (r (rr (copy-list l2)) (l1 l1 (cdr l1)))
      ((endp l1) (nconc r rr))
      (do (p (oitem (car l1))(c2 l2 (cdr c2)))
	    ((not (setq c2 (member (do-key key key-comp oitem) c2 :test test :test-not test-not :key key)))
	     (unless p (push oitem r)))
	    (do ((xp nil (or xp f)) f (x rr (cdr x))) ((not x) (setq rr f p t));FIXME delete type precedence
		(if (eq (car x) (car c2)) (when xp (setq xp (rplacd xp (cdr x)))) (setq f (or f x) xp (cdr xp)))))))

(defllist nset-exclusive-or (l1 l2 t)
  (do (r rp (rr (copy-list l2)) (l1 l1 (cdr l1)))
      ((endp l1) (when rp (rplacd rp rr)) (or r rr))
      (do (p (c2 l2 (cdr c2)))
	    ((not (setq c2 (member (do-key key key-comp (car l1)) c2 :test test :test-not test-not :key key)))
	     (unless p (collect r rp l1)))
	    (do ((xp nil (or xp f)) f (x rr (cdr x))) ((not x) (setq rr f p t));FIXME delete type precedence
		(if (eq (car x) (car c2)) (when xp (setq xp (rplacd xp (cdr x)))) (setq f (or f x) xp (cdr xp)))))))

(defllist subsetp (l1 l2 t)
  (do ((l1 l1 (cdr l1)))
      ((endp l1) t)
      (unless (member (do-key key key-comp (car l1)) l2 :test test :test-not test-not :key key)
	(return nil))))


(defun mapl (f l1 &rest l)
  (declare (optimize (safety 2))(:dynamic-extent l))
  (check-type l1 proper-list)
  (do ((r l1) (l1 l1 (cdr l1)) (l l (mapl (lambda (x) (setf (car x) (cdar x))) l)))
      ((or (endp l1) (member-if 'endp l)) r)
      (apply f l1 l)))

(defun mapcar (f l1 &rest l)
  (declare (optimize (safety 2))(:dynamic-extent l))
  (check-type l1 proper-list)
  (do (r rp (vals (make-list (list-length l))))
      ((or (endp l1) (member-if 'endp l)) r)
      (declare (:dynamic-extent vals))
      (do ((v vals (cdr v))(l l (cdr l))) ((endp l)) (setf (car v) (pop (car l))))
      (let ((tmp (cons (apply f (pop l1) vals) nil))) 
	(collect r rp tmp))))

(defun maplist (f l1 &rest l)
  (declare (optimize (safety 2))(:dynamic-extent l))
  (check-type l1 proper-list)
  (do (r rp (l1 l1 (cdr l1)) (l l (mapl (lambda (x) (setf (car x) (cdar x))) l)))
      ((or (endp l1) (member-if 'endp l)) r)
      (let ((tmp (cons (apply f l1 l) nil))) 
	(collect r rp tmp))))

(defun mapc (f l1 &rest l)
  (declare (optimize (safety 2))(:dynamic-extent l))
  (check-type l1 proper-list)
  (do ((r l1) (vals (make-list (list-length l))))
      ((or (endp l1) (member-if 'endp l)) r)
      (declare (:dynamic-extent vals))
      (do ((v vals (cdr v))(l l (cdr l))) ((endp l)) (setf (car v) (pop (car l))))
      (apply f (pop l1) vals)))

(defun mapcan (f l1 &rest l)
  (declare (optimize (safety 2))(:dynamic-extent l))
  (check-type l1 proper-list)
  (do (r rp (vals (make-list (list-length l))))
      ((or (endp l1) (member-if 'endp l)) r)
      (declare (:dynamic-extent vals))
      (do ((v vals (cdr v))(l l (cdr l))) ((endp l)) (setf (car v) (pop (car l))))
      (let ((tmp (apply f (pop l1) vals)))
	(if rp (rplacd rp tmp) (setq r tmp))
	(when (consp tmp) (setq rp (last tmp))))))


(defun mapcon (f l1 &rest l)
  (declare (optimize (safety 2))(:dynamic-extent l))
  (check-type l1 proper-list)
  (do (r rp (l1 l1 (cdr l1)) (l l (mapl (lambda (x) (setf (car x) (cdar x))) l)))
      ((or (endp l1) (member-if 'endp l)) r)
      (let ((tmp (apply f l1 l)))
	(if rp (rplacd rp tmp) (setq r tmp))
	(when (consp tmp) (setq rp (last tmp))))))


(defun append (&rest l)
  (declare (optimize (safety 2))(:dynamic-extent l))
  (do (r rp (l l (cdr l))) ((endp (cdr l)) (cond (rp (rplacd rp (car l)) r) ((car l))))
      (do ((c (car l) (cdr c))) ((endp c))
	  (let ((tmp (cons (car c) nil))) (collect r rp tmp)))))

(defun revappend (list tail)
  (declare (optimize (safety 2)))
  (check-type list proper-list)
  (do (cdp (p tail)(pp list)) ((endp pp) p)
      (setq cdp (cdr pp) p (cons (car pp) p) pp cdp)))

