;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Sat Mar  1 14:08:07 2003
;;;; Contains: Tests of HANDLER-CASE

(in-package :cl-test)

(deftest handler-case.1
  (handler-case
   (error "an error")
   (error () t))
  t)

(deftest handler-case.2
  (handler-case
   (error "an error")
   (warning () nil)
   (error () t))
  t)

(deftest handler-case.3
  (handler-case
   (error "an error")
   (error (c) (and (typep c 'error) t))
   (error () 'bad)
   (condition () 'bad2))
  t)

(deftest handler-case.4
  (handler-case
   (error "an error")
   (warning (c) c)
   (error (c) (and (typep c 'error) t))
   (error () 'bad)
   (condition () 'bad2))
  t)

(deftest handler-case.5
  (handler-case
   (error "an error")
   (#.(find-class 'error) (c) (and (typep c 'error) t))
   (error () 'bad))
  t)

(deftest handler-case.6
  (handler-case (values)
		(error () nil)))

(deftest handler-case.7
  (handler-case 'foo (condition () 'bar))
  foo)

(deftest handler-case.8
  (handler-case 'foo (t () 'bar))
  foo)

(deftest handler-case.9
  (handler-case (values 1 2 3 4 5 6 7 8) (condition () nil))
  1 2 3 4 5 6 7 8)

(deftest handler-case.10
  (handler-case
   (error "foo")
   (t () 'good))
  good)

(deftest handler-case.11
  (labels ((%f () (declare (special *c*))
	       (and (typep *c* 'condition) t))
	   (%g ()
	       (let ((*c* nil))
		 (declare (special *c*))
		 (%h)))
	   (%h ()
	    (handler-case
	     (error "foo")
	     (error (*c*) (declare (special *c*))
		    (%f)))))
    (%g))
  t)

(deftest handler-case.12
  (handler-case (error "foo")
		(nil () nil)
		(t (c) (notnot-mv (typep c 'simple-error))))
  t)

(deftest handler-case.13
  (handler-case (error "foo")
		(error (c) (values))))

(deftest handler-case.14
  (handler-case (error "foo")
		(error (c)
		       (values 1 2 3 4 5 6 7 8)))
  1 2 3 4 5 6 7 8)

(deftest handler-case.15
  (handler-case
   (handler-case (error "foo")
		 (warning () 'bad))
   (error () 'good))
  good)

(deftest handler-case.16
  (handler-case
   (handler-case (error "foo")
		 (error () 'good))
   (error () 'bad))
  good)

(deftest handler-case.17
  (let ((i 0))
    (values
     (handler-case
      (handler-case (error "foo")
		    (error () (incf i) (error "bar")))
      (error () 'good))
     i))
  good 1)

(deftest handler-case.18
  (let ((i 0))
    (values
     (handler-case
      (handler-case (error "foo")
		    (error (c) (incf i) (error c)))
      (error () 'good))
     i))
  good 1)

(deftest handler-case.19
  (handler-case
   (error "foo")
   (error (c)
	  ;; Test that declarations can go here
	  (declare (optimize (safety 3)))
	  (declare (type condition c))
	  (declare (ignore c))
	  t))
  t)

(deftest handler-case.20
  (handler-case
   10
   (:no-error (x) (+ x 3)))
  13)

(deftest handler-case.21
  (handler-case
   (values)
   (:no-error () 'foo))
  foo)

(deftest handler-case.22
  (handler-case
   (values 1 2 3 4 5)
   (:no-error (a b c d e) (list e d c b a)))
  (5 4 3 2 1))

(deftest handler-case.23
  (classify-error
   (handler-case
    (values 1 2)
    (:no-error (x) x)))
  program-error)

(deftest handler-case.24
  (classify-error
   (handler-case
    (values)
    (:no-error (x) x)))
  program-error)

(deftest handler-case.25
  (handler-case
   (handler-case
    (values)
    (error () 'bad)
    (:no-error () (error "foo")))
   (error () 'good))
  good)









