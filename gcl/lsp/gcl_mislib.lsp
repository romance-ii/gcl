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


;;;; This file is IMPLEMENTATION-DEPENDENT.


(in-package 'lisp)


(export 'time)
(export 'nth-value)
(export '(decode-universal-time encode-universal-time compile-file-pathname complement constantly))


(in-package 'system)


(proclaim '(optimize (safety 2) (space 3)))


(defmacro time (form)
  (let ((real-start (gensym)) (real-end (gensym)) (gbc-time-start (gensym))
	(gbc-time (gensym)) (x (gensym)) (run-start (gensym)) (run-end (gensym))
	(child-run-start (gensym)) (child-run-end (gensym)))
  `(let (,real-start ,real-end (,gbc-time-start (si::gbc-time)) ,gbc-time ,x)
     (setq ,real-start (get-internal-real-time))
     (multiple-value-bind (,run-start ,child-run-start) (get-internal-run-time)
       (si::gbc-time 0)
       (setq ,x (multiple-value-list ,form))
       (setq ,gbc-time (si::gbc-time))
       (si::gbc-time (+ ,gbc-time-start ,gbc-time))
       (multiple-value-bind (,run-end ,child-run-end) (get-internal-run-time)
	 (setq ,real-end (get-internal-real-time))
	 (fresh-line *trace-output*)
	 (format *trace-output*
		 "real time       : ~10,3F secs~%~
                  run-gbc time    : ~10,3F secs~%~
                  child run time  : ~10,3F secs~%~
                  gbc time        : ~10,3F secs~%"
		 (/ (- ,real-end ,real-start) internal-time-units-per-second)
		 (/ (- (- ,run-end ,run-start) ,gbc-time) internal-time-units-per-second)
		 (/ (- ,child-run-end ,child-run-start) internal-time-units-per-second)
		 (/ ,gbc-time internal-time-units-per-second))))
       (values-list ,x))))


(defconstant month-days-list '(31 28 31 30 31 30 31 31 30 31 30 31))
(defconstant seconds-per-day #.(* 24 3600))

(defun leap-year-p (y)
  (and (zerop (mod y 4))
       (or (not (zerop (mod y 100))) (zerop (mod y 400)))))

(defun number-of-days-from-1900 (y)
  (let ((y1 (1- y)))
    (+ (* (- y 1900) 365)
       (floor y1 4) (- (floor y1 100)) (floor y1 400)
       -460)))

(defun decode-universal-time (ut &optional (tz *default-time-zone*))
  (let (sec min h d m y dow)
    (decf ut (* tz 3600))
    (multiple-value-setq (d ut) (floor ut seconds-per-day))
    (setq dow (mod d 7))
    (multiple-value-setq (h ut) (floor ut 3600))
    (multiple-value-setq (min sec) (floor ut 60))
    (setq y (+ 1900 (floor d 366)))  ; Guess!
    (do ((x))
        ((< (setq x (- d (number-of-days-from-1900 y)))
            (if (leap-year-p y) 366 365))
         (setq d (1+ x)))
      (incf y))
    (when (leap-year-p y)
          (when (= d 60)
                (return-from decode-universal-time
                             (values sec min h 29 2 y dow nil tz)))
          (when (> d 60) (decf d)))
    (do ((l month-days-list (cdr l)))
        ((<= d (car l)) (setq m (- 13 (length l))))
      (decf d (car l)))
    (values sec min h d m y dow nil tz)))

(defun encode-universal-time (sec min h d m y
                              &optional (tz *default-time-zone*))
  (incf h tz)
  (when (<= 0 y 99)
        (multiple-value-bind (sec min h d m y1 dow dstp tz)
            (get-decoded-time)
          (declare (ignore sec min h d m dow dstp tz))
          (incf y (- y1 (mod y1 100)))
          (cond ((< (- y y1) -50) (incf y 100))
                ((>= (- y y1) 50) (decf y 100)))))
  (unless (and (leap-year-p y) (> m 2)) (decf d 1))
  (+ (* (apply #'+ d (number-of-days-from-1900 y)
               (butlast month-days-list (- 13 m)))
        seconds-per-day)
     (* h 3600) (* min 60) sec))

; Courtesy Paul Dietz
(defmacro nth-value (n expr)
  `(nth ,n (multiple-value-list ,expr)))
(defun compile-file-pathname (pathname)
(make-pathname :defaults pathname :type "o"))
(defun constantly (x)
#'(lambda (&rest args)
(declare (ignore args) (dynamic-extent args))
x))
(defun complement (fn)
#'(lambda (&rest args) (not (apply fn args))))

(defun default-system-banner ()
  (let (gpled-modules)
    (dolist (l '(:unexec :bfd :readline))
      (when (member l *features*)
	(push l gpled-modules)))
    (format nil "GCL (GNU Common Lisp)  ~a.~a.~a ~a   ~a~%~a~%~a ~a~%~a~%~a~%~%~a~%" 
	    *gcl-major-version* *gcl-minor-version* *gcl-extra-version*
	    (if (member :ansi-cl *features*) "ANSI" "CLtL1")
	    (si::gcl-compile-time)
	    "Source License: LGPL(gcl,gmp), GPL(unexec,bfd)"
	    "Binary License: "
	    (if gpled-modules (format nil "GPL due to GPL'ed components: ~a" gpled-modules)
	      "LGPL")
	    "Modifications of this banner must retain notice of a compatible license"
	    "Dedicated to the memory of W. Schelter"
	    "Use (help) to get some basic information on how to use GCL.")))

 (defun lisp-implementation-version nil
   (format nil "GCL ~a.~a.~a"
	   si::*gcl-major-version*
	   si::*gcl-minor-version*
	   si::*gcl-extra-version*))

(defun objlt (x y)
  (declare (object x y))
  (let ((x (si::address x)) (y (si::address y)))
    (declare (fixnum x y))
    (if (< y 0)
	(if (< x 0) (< x y) t)
      (if (< x 0) nil (< x y)))))
