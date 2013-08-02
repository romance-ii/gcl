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


;; (in-package 'lisp)
;; (export '(endp nthcdr last butlast nbutlast ldiff tailp list-length make-list 
;; 	       rest acons pairlis copy-list copy-alist nconc nreconc nth first
;; 	       second third fourth fifth sixth seventh eighth ninth tenth copy-tree
;; 	       tree-equal mapl mapcar maplist mapc mapcan mapcon append revappend 
;; 	       member member-if member-if-not adjoin adjoin-if adjoin-if-not assoc
;; 	       assoc-if assoc-if-not rassoc rassoc-if rassoc-if-not subst subst-if
;; 	       subst-if-not nsubst nsubst-if nsubst-if-not sublis nsublis intersection
;; 	       nintersection union nunion set-difference nset-difference set-exclusive-or
;; 	       nset-exclusive-or subsetp nth-value))

(in-package :system)

(eval-when
 (compile eval)
 
 (defmacro defktn (fn ll &rest args &aux (a (member '&aux ll))(ll (ldiff ll a)))
   `(progn
      (defun ,fn (,@ll &key test test-not key &aux ,@(cdr a)
		       (kf (when key (coerce key 'function)))
		       (tf (when test (coerce test 'function)))
		       (tnf (when test-not (coerce test-not 'function))))
	(declare (optimize (safety 1)))
	(check-type ,(cadr ll) proper-list)
	(check-type key (or null function-designator))
	(check-type test (or null function-designator))
	(check-type test-not (or null function-designator))
	,@(sublis '((key . kf)(test . tf)(test-not . tnf)) args))
      ,@(let* ((s (gensym))(ts (gensym))
	       (x `(defun ,s 
		     (fd list &key key)
		     (declare (optimize (safety 1)))
		     (check-type fd function-designator)
		     (check-type list proper-list)
		     (check-type key (or null function-designator))
		     (,fn (coerce fd 'function) list ,ts 'funcall :key key))))
	  (list (sublis `((,s . ,(intern (concatenate 'string (string fn) "-IF")))(,ts . :test)) x)
		(sublis `((,s . ,(intern (concatenate 'string (string fn) "-IF-NOT")))(,ts . :test-not)) x)))))
 
 (defmacro defnfn (n ll &rest body &aux (a (member '&aux ll))(ll (ldiff ll a)))
   `(defun ,n ,(append ll `(&key test test-not key &aux ,@(cdr a)
				 (kf (when key (coerce key 'function)))
				 (tf (when test (coerce test 'function)))
				 (tnf (when test-not (coerce test-not 'function)))))  
      (declare (optimize (safety 1)))
      ,@(mapcar (lambda (x) `(check-type ,x proper-list)) ll)
      (check-type key (or null function-designator))
      (check-type test (or null function-designator))
      (check-type test-not (or null function-designator))
      ,@(sublis '((key . kf)(test . tf)(test-not . tnf)) body)))
 
 (defmacro comp-key (key) 
   `(if (eq ,key #'identity) 0 1))
 
 (defmacro do-key (key n x) 
   (let ((xx (sgen)))
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
   (let ((n (sgen))(nx (sgen))(ny (sgen)))
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
   (let ((n (sgen)))
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



(defun mapl (fd list &rest r &aux (fun (coerce fd 'function)))
  (declare (optimize (safety 1))(:dynamic-extent r)(notinline make-list));FIXME
  (check-type fd function-designator)
  (check-type list proper-list)
  (let ((q (when r (make-list (length r)))))
    (declare (:dynamic-extent q))
    (labels ((a-cons (x) (check-type x list) (or x (return-from mapl list)))
	     (lmap (f x h) (cond (x (funcall f x) (lmap f (cdr x) h)) (h)))
	     (last nil (lmap (lambda (x) (rplaca x (if r (a-cons (pop r)) (a-cons (cdar x))))) q q)))
	    (lmap (lambda (x) (apply fun x (last))) list list))))

;; (defun mapl (fd list &rest r &aux (fun (coerce fd 'function)))
;;   (declare (optimize (safety 1))(:dynamic-extent r)(notinline make-list));FIXME
;;   (check-type fd function-designator)
;;   (check-type list proper-list)
;;   (let ((q (when r (make-list (length r)))))
;;     (declare (:dynamic-extent q))
;;     (labels ((a-cons (x) (check-type x list) (or x (return-from mapl list)))
;; 	     (lmap (f x) (when x (funcall f x) (lmap f (cdr x))))
;; 	     (last nil (lmap (lambda (x) (rplaca x (if r (a-cons (pop r)) (a-cons (cdar x))))) q) q))
;; 	    (lmap (lambda (x) (apply fun x (last))) list) list)))


(defun mapc (fd list &rest r &aux (fun (coerce fd 'function)))
  (declare (optimize (safety 1))(:dynamic-extent r))
  (check-type fd function-designator)
  (check-type list proper-list)
  (let ((q (when r (make-list (length r)))))
    (declare (:dynamic-extent q))
    (apply 'mapl (lambda (x &rest r) (apply fun (car x) (mapl (lambda (x) (setf (car x) (car (pop r)))) q))) list r)))


(defun mapcar (fd list &rest r &aux (fun (coerce fd 'function)) res rp)
  (declare (optimize (safety 1))(:dynamic-extent r))
  (check-type fd function-designator)
  (check-type list proper-list)
  (apply 'mapc (lambda (x &rest z &aux (tem (cons (apply fun x z) nil)))
		 (setq rp (if rp (cdr (rplacd rp tem)) (setq res tem)))) list r)
  res)

(defun mapcan (fd list &rest r &aux (fun (coerce fd 'function)) res rp)
  (declare (optimize (safety 1))(:dynamic-extent r))
  (check-type fd function-designator)
  (check-type list proper-list)
  (apply 'mapc (lambda (x &rest z &aux (tem (apply fun x z)))
		 (if rp (rplacd rp tem) (setq res tem))
		 (when (consp tem) (setq rp (last tem)))) list r)
  res)

(defun maplist (fd list &rest r &aux (fun (coerce fd 'function)) res rp)
  (declare (optimize (safety 1))(:dynamic-extent r))
  (check-type fd function-designator)
  (check-type list proper-list)
  (apply 'mapl (lambda (x &rest z &aux (tem (cons (apply fun x z) nil)))
		 (setq rp (if rp (cdr (rplacd rp tem)) (setq res tem)))) list r)
  res)

(defun mapcon(fd list &rest r &aux (fun (coerce fd 'function)) res rp)
  (declare (optimize (safety 1))(:dynamic-extent r))
  (check-type fd function-designator)
  (check-type list proper-list)
  (apply 'mapl (lambda (x &rest z &aux (tem (apply fun x z)))
		 (if rp (rplacd rp tem) (setq res tem))
		 (when (consp tem) (setq rp (last tem)))) list r)
  res)



(defktn member (item list &aux (tx (tp8 item)))
  (unless (mapl (lambda (x &aux (k (car x))(k (if key (funcall key k) k))) 
		  (when (cond (test (funcall test item k)) (test-not (not (funcall test-not item k))) ((eql-with-tx item k tx)))
		    (return-from member x))) list)))

(defktn adjoin (item list)
  (if (member (if key (funcall key item) item) list :key key :test test :test-not test-not)
      list
    (cons item list)))

(defktn assoc (item list &aux (tx (tp8 item)))
  (unless (mapc (lambda (x) (check-type x list)
		  (when x
		    (let* ((k (car x))(k (if key (funcall key k) k)))
		      (when (cond (test (funcall test item k)) (test-not (not (funcall test-not item k))) ((eql-with-tx item k tx)))
			(return-from assoc x))))) list)))


(defktn rassoc (item list &aux (tx (tp8 item)))
  (unless (mapc (lambda (x) (check-type x list)
		  (when x
		    (let* ((k (cdr x))(k (if key (funcall key k) k)))
		      (when (cond (test (funcall test item k)) (test-not (not (funcall test-not item k))) ((eql-with-tx item k tx)))
			(return-from rassoc x))))) list)))

(defnfn intersection (l1 l2)
  (mapcan (lambda (x) 
	    (when (member (if key (funcall key x) x) l2 :test test :test-not test-not :key key)
	      (cons x nil))) l1))

(defnfn union (l1 l2 &aux rp)
  (prog1 (or (mapcan (lambda (x) 
		       (unless (member (if key (funcall key x) x) l2 :test test :test-not test-not :key key)
			 (setq rp (cons x nil)))) l1) l2)
    (when rp (rplacd rp l2))))


(defnfn set-difference (l1 l2)
  (mapcan (lambda (x) 
	    (unless (member (if key (funcall key x) x) l2 :test test :test-not test-not :key key)
	      (cons x nil))) l1))

(defnfn set-exclusive-or (l1 l2 &aux rp (rr (copy-list l2)))
  (prog1 (or (mapcan (lambda (x &aux (k (if key (funcall key x) x))) 
		       (if (member k l2 :test test :test-not test-not :key key)
			   (unless (setq rr (delete k rr :test test :test-not test-not :key key)))
			 (setq rp (cons x nil)))) l1) rr)
    (when rp (rplacd rp rr))))

     
(defnfn nintersection (l1 l2 &aux r rp)
  (mapl (lambda (x &aux (k (car x))) 
	  (when (member (if key (funcall key k) k) l2 :test test :test-not test-not :key key)
	    (if rp (rplacd rp x) (setq r x))(setq rp x))) l1)
  (when rp (rplacd rp nil))
  r)

(defnfn nunion (l1 l2 &aux r rp)
  (mapl (lambda (x &aux (k (car x))) 
	  (unless (member (if key (funcall key k) k) l2 :test test :test-not test-not :key key)
	    (if rp (rplacd rp x) (setq r x))(setq rp x))) l1)
  (when rp (rplacd rp l2))
  (or r l2))

(defnfn nset-difference (l1 l2 &aux r rp)
  (mapl (lambda (x &aux (k (car x))) 
	  (unless (member (if key (funcall key k) k) l2 :test test :test-not test-not :key key)
	    (if rp (rplacd rp x) (setq r x))(setq rp x))) l1)
  (when rp (rplacd rp nil))
  r)


(defnfn nset-exclusive-or (l1 l2 &aux r rp (rr (copy-list l2)))
  (mapl (lambda (x &aux (k (car x))(k (if key (funcall key k) k))) 
	    (if (member k l2 :test test :test-not test-not :key key)
		(unless (setq rr (delete k rr :test test :test-not test-not :key key)))
	      (progn (if rp (rplacd rp x) (setq r x))(setq rp x)))) l1)
  (when rp (rplacd rp rr))
  (or r rr))
  

(defnfn subsetp (l1 l2)
  (mapc (lambda (x) 
	  (unless (member (if key (funcall key x) x) l2 :test test :test-not test-not :key key)
	    (return-from subsetp nil))) l1) t)


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
  (declare (optimize (safety 2)) (ignorable test))
  (check-type l list)
  (do (r rp (tc (bump-test (comp-test test nil) tl)) (l l (cdr l))) 
      ((cond ((do-test test tc l tl)) ((atom l) (when rp (rplacd rp l)))) r)
      (let ((tmp (cons (car l) nil))) (collect r rp tmp))))

(defun tailp (tl l &aux (test #'eql))
  (declare (optimize (safety 2)) (ignorable test))
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
  (declare (optimize (safety 1)))
  (check-type k proper-list)
  (check-type d proper-list)
  (mapc (lambda (x y) (setq a (acons x y a))) k d)
  a)

(defun copy-list (l)
  (declare (optimize (safety 2)))
  (check-type l list)
  (do (r rp (l l (cdr l))) ((atom l) (when rp (rplacd rp l)) r)
      (let ((tmp (cons (car l) nil))) (collect r rp tmp))))

(defun copy-alist (l)
  (declare (optimize (safety 1)))
  (check-type l proper-list)
  (maplist (lambda (x &aux (e (car x))) (if (consp e) (cons (car e) (cdr e)) e)) l))


;; (defun copy-alist (l)
;;   (declare (optimize (safety 2)))
;;   (check-type l proper-list)
;;   (do (r rp (l l (cdr l))) ((endp l) r)
;;       (let ((tmp (cons (let ((e (car l))) (cond ((consp e) (cons (car e) (cdr e))) (e))) nil))) 
;; 	(collect r rp tmp))))

(defun nconc (&rest l &aux r rp)
  (declare (:dynamic-extent l))
  (mapl (lambda (l &aux (it (car l)))
	  (if rp (rplacd rp it) (setq r it))
	  (when (and (cdr l) (consp it)) (setq rp (last it)))) l)
  r)
	

;; (defun nconc (&rest l)
;;   (declare (optimize (safety 2)) (:dynamic-extent l))
;;   (do (r rp (l l (cdr l)))
;;       ((endp l) r)
;;       (let ((it (car l)))
;; 	(if rp (rplacd rp it) (setq r it))
;; 	(when (and (cdr l) (consp it)) (setq rp (last it))))))

(defun nreconc (list tail &aux r)
  (declare (optimize (safety 1)))
  (check-type list proper-list)
  (mapl (lambda (x) (when r (setq tail (rplacd r tail))) (setq r x)) list)
  (if r (rplacd r tail) tail))

;; (defun nreconc (list tail)
;;   (declare (optimize (safety 2)))
;;   (check-type list proper-list)
;;   (do (cdp (p tail)(pp list)) ((endp pp) p)
;;       (setq cdp (cdr pp) p (rplacd pp p) pp cdp)))

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
  (do (st cs a (g (sgen))) (nil)
      (declare (:dynamic-extent st cs))
      (cond ((atom tr)
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setq a (pop cs) st (cdr st) tr (cons a tr)))
	     (unless cs (return tr))
	     (setf (car cs) tr tr (cdar st)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(defun tree-equal (tr1 tr2 &key test test-not)
  (declare (optimize (safety 2)))
  (and test test-not (error "both test and test not supplied"))
  (let* ((test (or test test-not #'eql))
	 (test (if (functionp test) test (funcallable-symbol-function test)))
	 (test-comp (comp-test test test-not)))
    (do (st1 cs1 st2 (g (sgen))) (nil)
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
  (do (st cs a c rep (g (sgen))) (nil)
      (declare (:dynamic-extent st cs))
      (setq rep (do-test test test-comp o (do-key key key-comp tr)))
      (cond ((or rep (atom tr))
	     (setq tr (if rep n tr))
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setq a (pop cs) c (pop st) tr (if (and (eq a (car c)) (eq tr (cdr c))) c (cons a tr))))
	     (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(deflist nsubst ((n o) tr t nil)
  (do (st cs rep (g (sgen))) (nil)
      (declare (:dynamic-extent st cs))
      (setq rep (do-test test test-comp o (do-key key key-comp tr)))
      (cond ((or rep (atom tr))
	     (setq tr (if rep n tr))
	     (do nil ((or (not cs) (eq g (car cs))))
		 (setf (caar st) (pop cs) (cdar st) tr tr (pop st)))
	     (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	    ((setq st (cons tr st) cs (cons g cs) tr (car tr))))))

(defllist sublis (al tr nil)
  (or (unless al tr)
      (do (st cs a c rep (g (sgen))) (nil)
	(declare (:dynamic-extent st cs))
	(setq rep (assoc (do-key key key-comp tr) al :test test :test-not test-not))
	(cond ((or rep (atom tr))
	       (setq tr (if rep (cdr rep) tr))
	       (do nil ((or (not cs) (eq g (car cs))))
		 (setq a (pop cs) c (pop st) tr (if (and (eq a (car c)) (eq tr (cdr c))) c (cons a tr))))
	       (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	      ((setq st (cons tr st) cs (cons g cs) tr (car tr)))))))
  
(defllist nsublis (al tr nil)
  (or (unless al tr)
      (do (st cs rep (g (sgen))) (nil)
	(declare (:dynamic-extent st cs))
	(setq rep (assoc (do-key key key-comp tr) al :test test :test-not test-not))
	(cond ((or rep (atom tr))
	       (setq tr (if rep (cdr rep) tr))
	       (do nil ((or (not cs) (eq g (car cs))))
		 (setf (caar st) (pop cs) (cdar st) tr tr (pop st)))
	       (if cs (setf (car cs) tr tr (cdar st)) (return tr)))
	      ((setq st (cons tr st) cs (cons g cs) tr (car tr)))))))

(defun append (&rest l &aux r rp)
  (declare (:dynamic-extent l))
  (mapl (lambda (x &aux (y (car x)))
	  (declare (optimize (safety 2)))
	  (if (cdr x)
	      (mapc (lambda (x) (collect r rp (cons x nil))) y)
	    (collect r rp y))) l) r)

(defun revappend (list tail)
  (declare (optimize (safety 1)))
  (check-type list proper-list)
  (mapc (lambda (x) (setq tail (cons x tail))) list)
  tail)

;; (defun revappend (list tail)
;;   (declare (optimize (safety 2)))
;;   (check-type list proper-list)
;;   (do (cdp (p tail)(pp list)) ((endp pp) p)
;;       (setq cdp (cdr pp) p (cons (car pp) p) pp cdp)))

(defun not (x)
  (if x nil t))

(defun null (x)
  (if x nil t))

(defun get-properties (p i &aux s)
  (declare (optimize (safety 1)));FIXME, safety 2 and no check-type loses signature info
  (check-type p proper-list)
  (check-type i proper-list)
  (cond ((endp p) (values nil nil nil))
	((member (setq s (car p)) i :test 'eq) (values s (cadr p) p))
	((endp (setq s (cdr p))) (error "Bad plist"))
	(t (get-properties (cdr s) i))))

(defun rplaca (x y)
  (declare (optimize (safety 1)))
  (check-type x cons)
  (c-set-cons-car x y)
  x)

(defun rplacd (x y)
  (declare (optimize (safety 1)))
  (check-type x cons)
  (c-set-cons-cdr x y)
  x)

;(defun listp (x) (typep x 'list));(typecase x (list t)))
(defun consp (x) (when x (listp x)))
(defun atom (x) (not (consp x)))

(defun getf (l i &optional d &aux s)
  (declare (optimize (safety 1)))
  (check-type l proper-list)
  (cond ((endp l) d) 
	((eq (car l) i) (cadr l)) 
	((endp (setq s (cdr l))) (error "Bad plist"))
	((getf (cdr s) i d))))

(defun identity (x) x)
