;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Sat Mar  6 11:47:55 2004
;;;; Contains: Tests of symbol printing

(in-package :cl-test)

;;; Symbol printing when escaping is off

(defun print.symbol.fn (sym case *print-case* expected)
  (setf (readtable-case *readtable*) case)
  (let ((str (with-output-to-string (s) (princ sym s))))
    (or (equalt str expected)
	(list str expected))))

(deftest print.symbol.1
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|XYZ| :upcase :upcase "XYZ")
	(%p '|XYZ| :upcase :downcase "xyz")
	(%p '|XYZ| :upcase :capitalize "Xyz")
	(%p '|XYZ| :downcase :upcase "XYZ")
	(%p '|XYZ| :downcase :downcase "XYZ")
	(%p '|XYZ| :downcase :capitalize "XYZ")
	(%p '|XYZ| :preserve :upcase "XYZ")
	(%p '|XYZ| :preserve :downcase "XYZ")
	(%p '|XYZ| :preserve :capitalize "XYZ")
	(%p '|XYZ| :invert :upcase "xyz")
	(%p '|XYZ| :invert :downcase "xyz")
	(%p '|XYZ| :invert :capitalize "xyz")))))
  t t t t t t t t t t t t)

(deftest print.symbol.2
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|xyz| :upcase :upcase "xyz")
	(%p '|xyz| :upcase :downcase "xyz")
	(%p '|xyz| :upcase :capitalize "xyz")
	(%p '|xyz| :downcase :upcase "XYZ")
	(%p '|xyz| :downcase :downcase "xyz")
	(%p '|xyz| :downcase :capitalize "Xyz")
	(%p '|xyz| :preserve :upcase "xyz")
	(%p '|xyz| :preserve :downcase "xyz")
	(%p '|xyz| :preserve :capitalize "xyz")
	(%p '|xyz| :invert :upcase "XYZ")
	(%p '|xyz| :invert :downcase "XYZ")
	(%p '|xyz| :invert :capitalize "XYZ")))))
  t t t t t t t t t t t t)

(deftest print.symbol.3
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|Xyz| :upcase :upcase "Xyz")
	(%p '|Xyz| :upcase :downcase "xyz")
	(%p '|Xyz| :upcase :capitalize "Xyz")
	(%p '|Xyz| :downcase :upcase "XYZ")
	(%p '|Xyz| :downcase :downcase "Xyz")
	(%p '|Xyz| :downcase :capitalize "Xyz")
	(%p '|Xyz| :preserve :upcase "Xyz")
	(%p '|Xyz| :preserve :downcase "Xyz")
	(%p '|Xyz| :preserve :capitalize "Xyz")
	(%p '|Xyz| :invert :upcase "Xyz")
	(%p '|Xyz| :invert :downcase "Xyz")
	(%p '|Xyz| :invert :capitalize "Xyz")))))
  t t t t t t t t t t t t)

(deftest print.symbol.4
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|xYZ| :upcase :upcase "xYZ")
	(%p '|xYZ| :upcase :downcase "xyz")
	(%p '|xYZ| :upcase :capitalize "xyz")
	(%p '|xYZ| :downcase :upcase "XYZ")
	(%p '|xYZ| :downcase :downcase "xYZ")
	(%p '|xYZ| :downcase :capitalize "XYZ")
	(%p '|xYZ| :preserve :upcase "xYZ")
	(%p '|xYZ| :preserve :downcase "xYZ")
	(%p '|xYZ| :preserve :capitalize "xYZ")
	(%p '|xYZ| :invert :upcase "xYZ")
	(%p '|xYZ| :invert :downcase "xYZ")
	(%p '|xYZ| :invert :capitalize "xYZ")))))
  t t t t t t t t t t t t)

(deftest print.symbol.5
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|X1Z| :upcase :upcase "X1Z")
	(%p '|X1Z| :upcase :downcase "x1z")
	(%p '|X1Z| :upcase :capitalize "X1z")
	(%p '|X1Z| :downcase :upcase "X1Z")
	(%p '|X1Z| :downcase :downcase "X1Z")
	(%p '|X1Z| :downcase :capitalize "X1Z")
	(%p '|X1Z| :preserve :upcase "X1Z")
	(%p '|X1Z| :preserve :downcase "X1Z")
	(%p '|X1Z| :preserve :capitalize "X1Z")
	(%p '|X1Z| :invert :upcase "x1z")
	(%p '|X1Z| :invert :downcase "x1z")
	(%p '|X1Z| :invert :capitalize "x1z")))))
  t t t t t t t t t t t t)

(deftest print.symbol.6
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|x1z| :upcase :upcase "x1z")
	(%p '|x1z| :upcase :downcase "x1z")
	(%p '|x1z| :upcase :capitalize "x1z")
	(%p '|x1z| :downcase :upcase "X1Z")
	(%p '|x1z| :downcase :downcase "x1z")
	(%p '|x1z| :downcase :capitalize "X1z")
	(%p '|x1z| :preserve :upcase "x1z")
	(%p '|x1z| :preserve :downcase "x1z")
	(%p '|x1z| :preserve :capitalize "x1z")
	(%p '|x1z| :invert :upcase "X1Z")
	(%p '|x1z| :invert :downcase "X1Z")
	(%p '|x1z| :invert :capitalize "X1Z")))))
  t t t t t t t t t t t t)

(deftest print.symbol.7
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|X1z| :upcase :upcase "X1z")
	(%p '|X1z| :upcase :downcase "x1z")
	(%p '|X1z| :upcase :capitalize "X1z")
	(%p '|X1z| :downcase :upcase "X1Z")
	(%p '|X1z| :downcase :downcase "X1z")
	(%p '|X1z| :downcase :capitalize "X1z")
	(%p '|X1z| :preserve :upcase "X1z")
	(%p '|X1z| :preserve :downcase "X1z")
	(%p '|X1z| :preserve :capitalize "X1z")
	(%p '|X1z| :invert :upcase "X1z")
	(%p '|X1z| :invert :downcase "X1z")
	(%p '|X1z| :invert :capitalize "X1z")))))
  t t t t t t t t t t t t)

(deftest print.symbol.8
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|x1Z| :upcase :upcase "x1Z")
	(%p '|x1Z| :upcase :downcase "x1z")
	(%p '|x1Z| :upcase :capitalize "x1z")
	(%p '|x1Z| :downcase :upcase "X1Z")
	(%p '|x1Z| :downcase :downcase "x1Z")
	(%p '|x1Z| :downcase :capitalize "X1Z")
	(%p '|x1Z| :preserve :upcase "x1Z")
	(%p '|x1Z| :preserve :downcase "x1Z")
	(%p '|x1Z| :preserve :capitalize "x1Z")
	(%p '|x1Z| :invert :upcase "x1Z")
	(%p '|x1Z| :invert :downcase "x1Z")
	(%p '|x1Z| :invert :capitalize "x1Z")))))
  t t t t t t t t t t t t)

(deftest print.symbol.9
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|X Z| :upcase :upcase "X Z")
	(%p '|X Z| :upcase :downcase "x z")
	(%p '|X Z| :upcase :capitalize "X Z")
	(%p '|X Z| :downcase :upcase "X Z")
	(%p '|X Z| :downcase :downcase "X Z")
	(%p '|X Z| :downcase :capitalize "X Z")
	(%p '|X Z| :preserve :upcase "X Z")
	(%p '|X Z| :preserve :downcase "X Z")
	(%p '|X Z| :preserve :capitalize "X Z")
	(%p '|X Z| :invert :upcase "x z")
	(%p '|X Z| :invert :downcase "x z")
	(%p '|X Z| :invert :capitalize "x z")))))
  t t t t t t t t t t t t)

(deftest print.symbol.10
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|x z| :upcase :upcase "x z")
	(%p '|x z| :upcase :downcase "x z")
	(%p '|x z| :upcase :capitalize "x z")
	(%p '|x z| :downcase :upcase "X Z")
	(%p '|x z| :downcase :downcase "x z")
	(%p '|x z| :downcase :capitalize "X Z")
	(%p '|x z| :preserve :upcase "x z")
	(%p '|x z| :preserve :downcase "x z")
	(%p '|x z| :preserve :capitalize "x z")
	(%p '|x z| :invert :upcase "X Z")
	(%p '|x z| :invert :downcase "X Z")
	(%p '|x z| :invert :capitalize "X Z")))))
  t t t t t t t t t t t t)

(deftest print.symbol.11
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|X z| :upcase :upcase "X z")
	(%p '|X z| :upcase :downcase "x z")
	(%p '|X z| :upcase :capitalize "X z")
	(%p '|X z| :downcase :upcase "X Z")
	(%p '|X z| :downcase :downcase "X z")
	(%p '|X z| :downcase :capitalize "X Z")
	(%p '|X z| :preserve :upcase "X z")
	(%p '|X z| :preserve :downcase "X z")
	(%p '|X z| :preserve :capitalize "X z")
	(%p '|X z| :invert :upcase "X z")
	(%p '|X z| :invert :downcase "X z")
	(%p '|X z| :invert :capitalize "X z")))))
  t t t t t t t t t t t t)

(deftest print.symbol.12
  (with-standard-io-syntax
   (let ((*print-readably* nil)
	 (*readtable* (copy-readtable nil)))
     (flet ((%p (&rest args) (apply #'print.symbol.fn args)))
       (values
	(%p '|x Z| :upcase :upcase "x Z")
	(%p '|x Z| :upcase :downcase "x z")
	(%p '|x Z| :upcase :capitalize "x Z")
	(%p '|x Z| :downcase :upcase "X Z")
	(%p '|x Z| :downcase :downcase "x Z")
	(%p '|x Z| :downcase :capitalize "X Z")
	(%p '|x Z| :preserve :upcase "x Z")
	(%p '|x Z| :preserve :downcase "x Z")
	(%p '|x Z| :preserve :capitalize "x Z")
	(%p '|x Z| :invert :upcase "x Z")
	(%p '|x Z| :invert :downcase "x Z")
	(%p '|x Z| :invert :capitalize "x Z")))))
  t t t t t t t t t t t t)

;;; Randomized printing tests

(deftest print.symbol.random.1
  (let ((pkg-name "PRINT-SYMBOL-TEST-PACKAGE"))
    (when (find-package pkg-name)
      (delete-package pkg-name))
    (prog1
	(let ((*package* (make-package pkg-name)))
	  (loop for c across +standard-chars+
		nconc
		(loop repeat 50
		      nconc (randomly-check-readability (intern (string c))))))
;;      (delete-package pkg-name)
      ))
  nil)

(deftest print.symbol.random.2
  (let ((pkg-name "PRINT-SYMBOL-TEST-PACKAGE"))
    (when (find-package pkg-name)
      (delete-package pkg-name))
    (prog1
	(let ((*package* (make-package pkg-name))
	      (count 0))
	  (loop for c1 = (random-from-seq +standard-chars+)
		for c2 = (random-from-seq +standard-chars+)
		for string = (concatenate 'string (string c1) (string c2))
		for result = (randomly-check-readability (intern string))
		for tries from 1 to 10000
		when result do (incf count)
		nconc result
		when (= count 10)
		collect	(format nil "... ~A out of ~A, stopping test ..."
				count tries)
		while (< count 10)))
      ;; (delete-package pkg-name)
      ))
  nil)

(deftest print.symbol.random.3
  (let ((result nil) (count 0) (tries 0))
    (let ((pkg-name "PRINT-SYMBOL-TEST-PACKAGE"))
      (when (find-package pkg-name)
	(delete-package pkg-name)))
    (block done
      (do-all-symbols (s)
	(when (symbol-package s)
	  (incf tries)
	  (let ((problem (randomly-check-readability s)))
	    (when problem
	      (setf result (nconc problem result))
	      (when (= (incf count) 10)
		(push (format nil "... ~A out of ~A, stopping test ..."
			      count tries)
		      result)
		(return-from done)))))))
    (reverse result))
  nil)

(deftest print.symbol.random.4
  (let ((result nil) (count 0) (tries 0))
    (let ((pkg-name "PRINT-SYMBOL-TEST-PACKAGE"))
      (when (find-package pkg-name)
	(delete-package pkg-name)))
    (block done
      (do-all-symbols (s)
	(when (symbol-package s)
	  (incf tries)
	  (let ((problem
		 (let ((*package* (symbol-package s)))
		   (randomly-check-readability s))))
	    (when problem
	      (setf result (nconc problem result))
	      (when (= (incf count) 10)
		(push (format nil "... ~A out of ~A, stopping test ..."
			      count tries)
		      result)
		(return-from done)))))))
    (reverse result))
  nil)

;;;; Tests of printing with escaping enabled

