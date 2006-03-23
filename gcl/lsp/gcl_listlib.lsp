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
          subsetp nth-value nth nthcdr first second third fourth fifth sixth seventh eighth ninth tenth))

(in-package 'system)

(defun key-list (key test test-not &aux tem)
  (when test-not (push test-not tem) (push :test-not tem))
  (when test (push test tem) (push :test tem))
  (when key (push key tem) (push :key tem))
  tem)



(defun intersection (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let (ans
	(kl (key-list key test test-not)))
    (if kl
	(dolist (x list1 ans)
	  (let ((z (if key (funcall key x) x)))
	    (when (apply 'member z list2 kl)
	      (push x ans))))
      (dolist (x list1 ans)
	  (when (member x list2)
	    (push x ans))))))

(defun union (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let ((ans list2)
	(kl (key-list key test test-not)))
    (if kl
	(dolist (x list1 ans)
	  (let ((z (if key (funcall key x) x)))
	    (unless (apply 'member z list2 kl)
	      (push x ans))))
      (dolist (x list1 ans)
	  (unless (member x list2)
	    (push x ans))))))

(defun set-difference (list1 list2 &key test test-not key)
  (declare (optimize (safety 1)))
  (let (ans
	(kl (key-list key test test-not)))
    (if kl
	(dolist (x list1 ans)
	  (let ((z (if key (funcall key x) x)))
	    (unless (apply 'member z list2 kl)
	      (push x ans))))
      (dolist (x list1 ans)
	  (unless (member x list2)
	    (push x ans))))))

(defun set-difference-rev (list1 list2 &key (test 'eql testp) test-not key)
  (declare (optimize (safety 1)))
  (let (ans
	(test (if (and test-not (not testp)) test-not test)))
    (dolist (x list1 ans)
      (unless (dolist (y list2 nil)
		(let ((w (if key (funcall key x) x))
		      (z (if key (funcall key y) y)))
		  (when (let ((q (funcall test z w))) (if test-not (not q) q))
		    (return t))))
	(push x ans)))))

(defun set-exclusive-or (list1 list2 &key test test-not key)
  (let ((kl (key-list key test test-not)))
    (nconc (apply 'set-difference list1 list2 kl)
	   (apply 'set-difference-rev list2 list1 kl))))

(defun nintersection (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last nil)) (return first))
    (or (consp x)
	(specific-error :wrong-type-argument "~S is not of type ~S." x 'list))
    (if (apply #'member1 (car x) list2 (key-list key test test-not))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )

(defun nunion (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last list2)) (return (or first list2)))
    (or (consp x) 
	(specific-error :wrong-type-argument "~S is not of type ~S." x 'list))
    (if (not (apply #'member1 (car x) list2 (key-list key test test-not)))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )
(defun nset-difference (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last nil)) (return first))
    (or (consp x)
	(specific-error :wrong-type-argument "~S is not of type ~S." x 'list))
    (if (not (apply #'member1 (car x) list2 (key-list key test test-not)))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )
(defun nset-difference-rev (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last nil)) (return first))
    (or (consp x)
	(specific-error :wrong-type-argument "~S is not of type ~S." x 'list))
    (if (not (apply #'member1 (car x) list2 :rev t (key-list key test test-not)))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )

;(defun set-exclusive-or (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (append (apply #'set-difference list1 list2 rest)
;          (apply #'set-difference list2 list1 rest)))


(defun nset-exclusive-or (list1 list2 &key test test-not key &aux first last fint lint)
  (do ((x list1 (cdr x)))
      ((null x) (if lint (rplacd lint nil))
                (if last
		    (progn (rplacd last
				   (apply #'nset-difference-rev list2 fint (key-list key test test-not)))
			   (return first))
		    (return (apply #'nset-difference-rev list2 fint (key-list key test test-not)))))
    (or (consp x)
	(specific-error :wrong-type-argument "~S is not of type ~S." x 'list))
    (if (apply #'member1 (car x) list2 (key-list key test test-not))
	(progn (if lint (rplacd lint x)
		        (setq fint x))
	       (setq lint x))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )

(defun subsetp (list1 list2 &key test test-not key)
  (do ((l list1 (cdr l)))
      ((null l) t)
    (or (consp l)
	(specific-error :wrong-type-argument "~S is not of type ~S." l 'list))
    (if (not (apply #'member1 (car l) list2 (key-list key test test-not))) (return nil))))

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
  (declare (optimize (safety 1)))
  (car (nthcdr n x)))
(defun first (x) 
  (declare (optimize (safety 1)))
  (car x))
(defun second (x) 
  (declare (optimize (safety 1)))
  (cadr x))
(defun third (x) 
  (declare (optimize (safety 1)))
  (caddr x))
(defun fourth (x) 
  (declare (optimize (safety 1)))
  (cadddr x))
(defun fifth (x) 
  (declare (optimize (safety 1)))
  (car (cddddr x)))
(defun sixth (x) 
  (declare (optimize (safety 1)))
  (cadr (cddddr x)))
(defun seventh (x) 
  (declare (optimize (safety 1)))
  (caddr (cddddr x)))
(defun eighth (x) 
  (declare (optimize (safety 1)))
  (cadddr (cddddr x)))
(defun ninth (x) 
  (declare (optimize (safety 1)))
  (car (cddddr (cddddr x))))
(defun tenth (x) 
  (declare (optimize (safety 1)))
  (cadr (cddddr (cddddr x))))

; Courtesy Paul Dietz
(defmacro nth-value (n expr)
  (declare (optimize (safety 1)))
  `(nth ,n (multiple-value-list ,expr)))
;(defmacro nth-value (n form)
;  `(multiple-value-bind ,(make-list (+ n 1) :initial-element 'a) ,form  a))
