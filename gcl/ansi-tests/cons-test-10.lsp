;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Sat Mar 28 07:37:21 1998
;;;; Contains: Testing of CL Features related to "CONS", part 10

(in-package :cl-test)

(declaim (optimize (safety 3)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; last

(deftest last.1
  (last nil)
  nil)

(deftest last.2
  (last (copy-tree '(a b)))
  (b))

(deftest last.3
  (last (copy-tree '(a b . c)))
  (b . c))

(deftest last.4
  (last (copy-tree '(a b c d)) 0)
  nil)

(deftest last.5
  (last (copy-tree '(a b c d)) 1)
  (d))

(deftest last.6
  (last (copy-tree '(a b c d)) 2)
  (c d))

(deftest last.7
  (last (copy-tree '(a b c d)) 5)
  (a b c d))

(deftest last.8
  (last (cons 'a 'b) 0)
  b)

(deftest last.9
  (last (cons 'a 'b) 1)
  (a . b))

(deftest last.10
  (last (cons 'a 'b) 2)
  (a . b))

(deftest last.order.1
  (let ((i 0) x y)
    (values
     (last (progn (setf x (incf i)) (list 'a 'b 'c 'd))
	   (setf y (incf i)))
     i x y))
  (c d) 2 1 2)

(deftest last.order.2
  (let ((i 0))
    (values (last (progn (incf i) (list 'a 'b 'c 'd))) i))
  (d) 1)

(deftest last.error.1
  (classify-error (last (list 'a 'b 'c) -1))
  type-error)

(deftest last.error.2
  (classify-error (last (list 'a 'b 'c) 'a))
  type-error)

(deftest last.error.3
  (classify-error (last (list 'a 'b 'c) 10.0))
  type-error)

(deftest last.error.4
  (classify-error (last (list 'a 'b 'c) -10.0))
  type-error)

(deftest last.error.5
  (classify-error (last (list 'a 'b 'c) #\w))
  type-error)

(deftest last.error.6
  (classify-error (last))
  program-error)

(deftest last.error.7
  (classify-error (last '(a b c) 2 nil))
  program-error)

(deftest last.error.8
  (classify-error (locally (last (list 'a 'b 'c) 'a) t))
  type-error)
