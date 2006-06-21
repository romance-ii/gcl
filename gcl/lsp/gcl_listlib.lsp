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

(export '(union nunion intersection nintersection
          set-difference nset-difference set-exclusive-or nset-exclusive-or
          subsetp nth-value nth nthcdr first second third fourth fifth sixth
	  seventh eighth ninth tenth))

(in-package 'system)

(defun key-list (key test test-not &aux tem)
  (when test-not (push test-not tem) (push :test-not tem))
  (when test (push test tem) (push :test tem))
  (when key (push key tem) (push :key tem))
  tem)

(defmacro do-list1-x (x match action return &optional action1)
  (let ((z (gensym)) (kl (gensym)))
  `(let* ((,kl (key-list key test test-not)))
     (cond (,kl
	    (do ((,x list1 (cdr ,x))) ((endp ,x) ,@return)
		(let ((,z (if key (funcall key (car ,x)) (car ,x))))
		  (,match (apply 'member ,z list2 ,kl)
			  ,action ,@action1))))
	   ((or (every 'eql-is-eq (the list list2)) ;;FIXME
		(every 'eql-is-eq (the list list1)))
	    (do ((,x list1 (cdr ,x))) ((endp ,x) ,@return)
		(,match (member (car ,x) list2 :test 'eq)
			,action ,@action1)))
	   ((do ((,x list1 (cdr ,x))) ((endp ,x) ,@return)
		(,match (member (car ,x) list2)
			,action ,@action1)))))))

(defun intersection (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let (ans)
    (do-list1-x x when (push (car x) ans) (ans))))

(defun nintersection (list1 list2 &key test test-not key) 
  (declare (optimize (safety 1)))
  (let (ans last) 
    (do-list1-x x when
		(setq last (if last (cdr (rplacd last x)) (setq ans x)))
		((when last (rplacd last nil)) ans))))

(defun union (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let ((ans list2))
    (do-list1-x x unless (push (car x) ans) (ans))))

(defun nunion (list1 list2 &key test test-not key) 
  (declare (optimize (safety 1)))
  (let (ans last) 
    (do-list1-x x unless 
		(setq last (if last (cdr (rplacd last x)) (setq ans x)))
		((when last (rplacd last list2)) (or ans list2)))))

(defun set-difference (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let (ans)
    (do-list1-x x unless (push (car x) ans) (ans))))

(defun nset-difference (list1 list2 &key test test-not key) 
  (declare (optimize (safety 1)))
  (let (ans last) 
    (do-list1-x x unless 
		(setq last (if last (cdr (rplacd last x)) (setq ans x)))
		((when last (rplacd last nil)) ans))))


(defun set-difference-rev (list1 list2 &key (test 'eql testp) test-not key)
  (declare (optimize (safety 1)))
  (let (ans
	(test (if (and test-not (not testp)) test-not test)))
    (dolist (x list1 ans)
      (unless (dolist (y list2 nil)
		(let ((w (if key (funcall key x) x))
		      (z (if key (funcall key y) y)))
		  (when (let ((q (funcall test z w))) 
			  (if test-not (not q) q))
		    (return t))))
	(push x ans)))))

(defun set-exclusive-or (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let ((kl (key-list key test test-not)))
    (nconc 
     (apply 'set-difference list1 list2 kl)
     (apply 'set-difference-rev list2 list1 kl))))


(defun nset-difference-rev (list1 list2 &key (test 'eql testp) test-not key)
  (declare (optimize (safety 1)))
  (let (ans last
	(test (if (and test-not (not testp)) test-not test)))
    (do ((x list1 (cdr x)))
	((endp x) (when last (rplacd last nil)) ans)
	(unless (dolist (y list2 nil)
		  (let ((w (if key (funcall key (car x)) (car x)))
			(z (if key (funcall key y) y)))
		    (when (let ((q (funcall test z w))) 
			    (if test-not (not q) q))
		      (return t))))
	  (setq last (if last (cdr (rplacd last x)) (setq ans x)))))))

(defun nset-exclusive-or (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let (ans last ians ilast)
    (do-list1-x x if 
		(setq ilast (if ilast (cdr (rplacd ilast x)) (setq ians x)))
		((when ilast (rplacd ilast nil))
		 (let ((z (apply 'nset-difference-rev list2 ians 
				 (key-list key test test-not))))
		  (when last (rplacd last z)) 
		  (or ans z)))
		((setq last (if last (cdr (rplacd last x)) (setq ans x)))))))

(defun subsetp (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (do-list1-x x unless (return nil) (t)))

(defun copy-tree (x) 
  (declare (optimize (safety 1)))
  (if (consp x)
      (copy-tree-int x nil nil)
    x))

(defun copy-list (x) 
  (declare (optimize (safety 1)))
  (check-type x list)
  (copy-list-int x nil nil))

(defun copy-list-int (x f l) 
  (cond ((atom x) (when l (rplacd l x)) f)
	((let ((c (cons (car x) nil)))
	   (copy-list-int (cdr x) (or f c) (if l (cdr (rplacd l c)) c))))))

(defun copy-tree-int (x f l) 
  (cond ((atom x) (when l (rplacd l x)) f)
	((let* ((cx (if (atom (car x)) (car x) (copy-tree-int (car x) nil nil)))
		(c (cons cx nil)))
	   (copy-tree-int (cdr x) (or f c) (if l (cdr (rplacd l c)) c))))))

(defun smallnthcdr (n x)
  (declare (seqind n))
  (cond ((= n 0) x)
	((atom x) (when x (check-type x list)))
	((smallnthcdr (1- n) (cdr x)))))

(defun bignthcdr (n i s f) 
  (declare (seqind i))
  (cond ((eq s f) (smallnthcdr (mod n i) s))
	((atom f) (when f (check-type f list)))
	((atom (cdr f)) (when (cdr f) (check-type (cdr f) list)))
	((bignthcdr n (1+ i) (cdr s) (cddr f)))))

(defun nthcdr (n x)
  (declare (optimize (safety 1)))
  (cond ((check-type n (integer 0)))
	((< n array-dimension-limit) (smallnthcdr n x))
	((atom x) (when x (check-type x list)))
	((atom (cdr x)) (when (cdr x) (check-type (cdr x) list)))
	((bignthcdr n 1 (cdr x) (cddr x)))))

(defun nth (n x)
  (declare (optimize (safety 2)));prevent unsafe inline of nthcdr
  (car (nthcdr n x)))

(defun first (x) (declare (optimize (safety 1))) (nth 0 x)) 
(defun second (x) (declare (optimize (safety 1))) (nth 1 x)) 
(defun third (x) (declare (optimize (safety 1))) (nth 2 x)) 
(defun fourth (x) (declare (optimize (safety 1))) (nth 3 x)) 
(defun fifth (x) (declare (optimize (safety 1))) (nth 4 x)) 
(defun sixth (x) (declare (optimize (safety 1))) (nth 5 x)) 
(defun seventh (x) (declare (optimize (safety 1))) (nth 6 x)) 
(defun eighth (x) (declare (optimize (safety 1))) (nth 7 x)) 
(defun ninth (x) (declare (optimize (safety 1))) (nth 8 x)) 
(defun tenth (x) (declare (optimize (safety 1))) (nth 9 x)) 

; Courtesy Paul Dietz
(defmacro nth-value (n expr)
  (declare (optimize (safety 1)))
  `(nth ,n (multiple-value-list ,expr)))
;(defmacro nth-value (n form)
;  `(multiple-value-bind ,(make-list (+ n 1) :initial-element 'a) ,form  a))
