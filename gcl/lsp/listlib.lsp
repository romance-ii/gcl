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
          subsetp))

(in-package 'system)

(eval-when (compile)
  (proclaim '(optimize (safety 0) (space 3)))
  )

(defun key-list (key test test-not &aux (tem nil))
  (when key (push :key tem) (push key tem))
  (when test (push :test tem) (push test tem))
  (when test-not (push :test-not tem) (push test-not tem))
  (nreverse tem))

;(defun union (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (cond ((null list1) list2)
;        ((apply #'member1 (car list1) list2 rest)
;         (apply #'union (cdr list1) list2 rest))
;        (t
;         (cons (car list1)
;               (apply #'union (cdr list1) list2 rest)))))
(defun union (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last list2)) (return (or first list2)))
    (or (consp x) (error "UNION not passed a list"))
    (if (not (apply #'member1 (car x) list2 (key-list key test test-not)))
	(if last (progn (rplacd last (cons (car x) nil))
			(setq last (cdr last)))
	         (progn (setq first (cons (car x) nil))
			(setq last first)))) ) )

;(defun nunion (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (cond ((null list1) list2)
;        ((apply #'member1 (car list1) list2 rest)
;         (apply #'nunion (cdr list1) list2 rest))
;        (t
;         (rplacd list1
;                 (apply #'nunion (cdr list1) list2 rest)))))
(defun nunion (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last list2)) (return (or first list2)))
    (or (consp x) (error "NUNION not passed a list"))
    (if (not (apply #'member1 (car x) list2 (key-list key test test-not)))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )

;(defun intersection (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (cond ((null list1) nil)
;        ((apply #'member1 (car list1) list2 rest)
;         (cons (car list1)
;               (apply #'intersection (cdr list1) list2 rest)))
;        (t (apply #'intersection (cdr list1) list2 rest))))

;; all functions in this file should be written as follows:
;; Besides being non recursive, it allows compilation on safety 0
(defun intersection (list1 list2 &key test test-not key &aux ans)
  (do ((x list1 (cdr x)))
      ((null x) (return ans))
    (or (consp x) (error "INTERSECTION not passed a list"))
    (if (apply #'member1 (car x) list2 (key-list key test test-not))
        (setq ans (cons (car x) ans))))
  )

;(defun nintersection (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (cond ((null list1) nil)
;        ((apply #'member1 (car list1) list2 rest)
;         (rplacd list1
;                 (apply #'nintersection (cdr list1) list2 rest)))
;        (t (apply #'nintersection (cdr list1) list2 rest))))
(defun nintersection (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last nil)) (return first))
    (or (consp x) (error "NINTERSECTION not passed a list"))
    (if (apply #'member1 (car x) list2 (key-list key test test-not))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )

;(defun set-difference (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (cond ((null list1) nil)
;        ((not (apply #'member1 (car list1) list2 rest))
;         (cons (car list1)
;               (apply #'set-difference (cdr list1) list2 rest)))
;        (t (apply #'set-difference (cdr list1) list2 rest))))
(defun set-difference (list1 list2 &key test test-not key &aux ans)
  (do ((x list1 (cdr x)))
      ((null x) (return ans))
    (or (consp x) (error "SET-DIFFERENCE not passed a list"))
    (if (not (apply #'member1 (car x) list2 (key-list key test test-not)))
        (setq ans (cons (car x) ans))))  )
(defun set-difference-rev (list1 list2 &key test test-not key &aux ans)
  (do ((x list1 (cdr x)))
      ((null x) (return ans))
    (or (consp x) (error "SET-DIFFERENCE not passed a list"))
    (if (not (apply #'member1 (car x) list2 :rev t (key-list key test test-not)))
        (setq ans (cons (car x) ans))))  )

;(defun nset-difference (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (cond ((null list1) nil)
;        ((not (apply #'member1 (car list1) list2 rest))
;         (rplacd list1
;                 (apply #'nset-difference (cdr list1) list2 rest)))
;        (t (apply #'nset-difference (cdr list1) list2 rest))))
(defun nset-difference (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last nil)) (return first))
    (or (consp x) (error "NSET-DIFFERENCE not passed a list"))
    (if (not (apply #'member1 (car x) list2 (key-list key test test-not)))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )
(defun nset-difference-rev (list1 list2 &key test test-not key &aux first last)
  (do ((x list1 (cdr x)))
      ((null x) (if last (rplacd last nil)) (return first))
    (or (consp x) (error "NSET-DIFFERENCE not passed a list"))
    (if (not (apply #'member1 (car x) list2 :rev t (key-list key test test-not)))
	(progn (if last (rplacd last x)
		        (setq first x))
	       (setq last x))) ) )

;(defun set-exclusive-or (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (append (apply #'set-difference list1 list2 rest)
;          (apply #'set-difference list2 list1 rest)))
(defun set-exclusive-or (list1 list2 &key test test-not key)
  (nconc (apply #'set-difference list1 list2 (key-list key test test-not))
         (apply #'set-difference-rev list2 list1 (key-list key test test-not))))

;(defun nset-exclusive-or (list1 list2 &rest rest &key test test-not key)
;  (declare (ignore test test-not key))
;  (nconc (apply #'set-difference list1 list2 rest)
;         (apply #'nset-difference list2 list1 rest)))
(defun nset-exclusive-or (list1 list2 &key test test-not key &aux first last fint lint)
  (do ((x list1 (cdr x)))
      ((null x) (if lint (rplacd lint nil))
                (if last
		    (progn (rplacd last
				   (apply #'nset-difference-rev list2 fint (key-list key test test-not)))
			   (return first))
		    (return (apply #'nset-difference-rev list2 fint (key-list key test test-not)))))
    (or (consp x) (error "NSET-EXCLUSIVE-OR not passed a list"))
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
    (or (consp l) (error "SUBSETP not passed a list"))
    (if (not (apply #'member1 (car l) list2 (key-list key test test-not))) (return nil))))


