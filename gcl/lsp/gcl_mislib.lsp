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


;;;; This file is IMPLEMENTATION-DEPENDENT.


;(in-package 'lisp)


;(export 'time)
;(export '(reset-sys-paths
;	  decode-universal-time
;	  encode-universal-time compile-file-pathname complement constantly))


(in-package :system)

(export '(funcallable-symbol-function));FIXME fsf

(defmacro time (form)
  (declare (optimize (safety 2)))
  (let ((real-start (gensym)) (real-end (gensym)) (gbc-time-start (gensym))
	(gbc-time (gensym)) (x (gensym)) (run-start (gensym)) (run-end (gensym))
	(child-run-start (gensym)) (child-run-end (gensym)))
  `(let (,real-start ,real-end (,gbc-time-start (si::gbc-time)) ,gbc-time ,x)
     (setq ,real-start (get-internal-real-time))
     (multiple-value-bind (,run-start ,child-run-start) (get-internal-run-times)
       (si::gbc-time 0)
       (setq ,x (multiple-value-list ,form))
       (setq ,gbc-time (si::gbc-time))
       (si::gbc-time (+ ,gbc-time-start ,gbc-time))
       (multiple-value-bind (,run-end ,child-run-end) (get-internal-run-times)
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

(defconstant seconds-per-day #.(* 24 3600))

(defun leap-year-p (y)
  (and (zerop (mod y 4))
       (or (not (zerop (mod y 100))) (zerop (mod y 400)))))

(defun number-of-days-from-1900 (y)
  (let ((y1 (1- y)))
    (+ (* (- y 1900) 365)
       (floor y1 4) (- (floor y1 100)) (floor y1 400)
       -460)))

(eval-when
 (compile eval)
 (defmacro mmd (n &optional lp 
		  &aux (l '(31 28 31 30 31 30 31 31 30 31 30 31))
		  (l (if lp (cons (pop l) (cons (1+ (pop l)) l)) l))(r 0)(s (mapcar (lambda (x) (incf r x)) l)))
  `(defconstant ,n (make-array ,(length s) :element-type '(integer ,(car s) ,(car (last s))) :initial-contents ',s))))
       
(mmd +md+)
(mmd +lmd+ t)

(defun decode-universal-time (ut &optional (tz (current-timezone) tzp) 
				 &aux (dstp (unless tzp (current-dstp))) (ut (- ut (* tz 3600))))
  (declare (optimize (safety 2)))
  (check-type ut (integer 0))
  (check-type tz rational)
  (multiple-value-bind
   (d ut) (floor ut seconds-per-day)
   (let* ((dow (mod d 7))(y (+ 1900 (floor d 366))))
     (labels ((l (y dd &aux (lyp (leap-year-p y))(td (if lyp 366 365))(x (- d dd)))
		 (if (< x td) (values (1+ x) y lyp) (l (1+ y) (+ dd td)))))
	     (multiple-value-bind
	      (d y lyp) (l y (number-of-days-from-1900 y))
	      (let* ((l (if lyp +lmd+ +md+))
		     (m (position d l :test '<=))
		     (d (if (> m 0) (- d (aref l (1- m))) d)))
		(multiple-value-bind
		 (h ut) (floor ut 3600)
		 (multiple-value-bind
		  (min sec) (floor ut 60)
		  (values sec min h d (1+ m) y dow dstp tz)))))))))

(defun encode-universal-time (sec min h d m y &optional (tz (current-timezone)))
  (declare (optimize (safety 2)))
  (check-type sec (integer 0 59))
  (check-type min (integer 0 59))
  (check-type h (integer 0 23))
  (check-type d (integer 1 31))
  (check-type m (integer 1 12))
  (check-type y (integer 1900))
  (check-type tz rational)
  (when (<= 0 y 99)
    (multiple-value-bind
     (sec min h d m y1 dow dstp tz) (get-decoded-time)
     (declare (ignore sec min h d m dow dstp tz))
     (incf y (- y1 (mod y1 100)))
     (cond ((< (- y y1) -50) (incf y 100))
	   ((>= (- y y1) 50) (decf y 100)))))
  (+ (* (+ (1- d) (number-of-days-from-1900 y) (if (> m 1) (aref (if (leap-year-p y) +lmd+ +md+) (- m 2)) 0))
        seconds-per-day)
     (* (+ h tz) 3600) (* min 60) sec))

; Courtesy Paul Dietz
(defun compile-file-pathname (pathname)
  (declare (optimize (safety 2)))
  (make-pathname :defaults pathname :type "o"))
(defun constantly (x)
  (declare (optimize (safety 2)))
  (lambda (&rest args)
    (declare (ignore args) (dynamic-extent args))
    x))
(defun complement (fn)
  (declare (optimize (safety 2)))
  (lambda (&rest args) (not (apply fn args))))

 (defun lisp-implementation-version nil
   (declare (optimize (safety 2)))
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

(defun reset-sys-paths (s)
  (declare (string s))
  (setq si::*lib-directory* s)
  (setq si::*system-directory* (si::string-concatenate s "unixport/"))
  (let (nl)
    (dolist (l '("cmpnew/" "gcl-tk/" "lsp/" "xgcl-2/"))
      (push (si::string-concatenate s l) nl))
    (setq si::*load-path* nl))
  nil)

(defun heaprep nil
  
  (let ((f (list
	    "word size:            ~a bits~%"
	    "page size:            ~a bytes~%"
	    "heap start:           0x~x~%"
	    "heap max :            0x~x~%"
	    "shared library start: 0x~x~%"
	    "cstack start:         0x~x~%"
	    "cstack mark offset:   ~a bytes~%"
	    "cstack direction:     ~[downward~;upward~;~]~%"
	    "cstack alignment:     ~a bytes~%"
	    "cstack max:           ~a bytes~%"
	    "immfix start:         0x~x~%"
	    "immfix size:          ~a fixnums~%"))
	(v (multiple-value-list (si::heap-report))))
    
    (do ((v v (cdr v)) (f f (cdr f))) ((not (car v)))
	(format t (car f) 
		(let ((x (car v))) 
		  (cond ((>= x 0) x) 
			((+ x (* 2 (1+ most-positive-fixnum))))))))))

(defun room (&optional x)
  (let ((l (multiple-value-list (si:room-report)))
        maxpage leftpage ncbpage maxcbpage ncb cbgbccount npage maxnpage
        rbused rbfree nrbpage maxrbpage
        info-list link-alist)
    (setq maxpage (nth 0 l) leftpage (nth 1 l)
          ncbpage (nth 2 l) maxcbpage (nth 3 l) ncb (nth 4 l)
          cbgbccount (nth 5 l)
          holepage (nth 6 l)
          rbused (nth 7 l) rbfree (nth 8 l) nrbpage (nth 9 l)
	  maxrbpage (nth 10 l)
          rbgbccount (nth 11 l)
          l (nthcdr 12 l))
    (do ((l l (nthcdr 5 l))
         (tl *type-list* (cdr tl))
         (j 0 (+ j (if (nth 3 l) (nth 3 l) 0)))
         (i 0 (+ i (if (nth 2 l) (nth 2 l) 0))))
        ((null l) (setq npage i maxnpage j))
      (let ((typename (car tl))
            (nused (nth 0 l))
            (nfree (nth 1 l))
            (npage (nth 2 l))
            (maxpage (nth 3 l))
            (gbccount (nth 4 l)))
        (if nused
            (push (list typename npage maxpage
                        (if (zerop (+ nused nfree))
                            0
                            (/ nused 0.01 (+ nused nfree)))
                        (if (zerop gbccount) nil gbccount))
                  info-list)
            (let ((a (assoc (nth nfree *type-list*) link-alist)))
                 (if a
                     (nconc a (list typename))
                     (push (list (nth nfree *type-list*) typename)
                           link-alist))))))
    (terpri)
    (dolist (info (reverse info-list))
      (apply #'format t "~8D/~D~19T~6,1F%~@[~8D~]~35T~{~A~^ ~}"
             (append (cdr info)
                     (if  (assoc (car info) link-alist)
                          (list (assoc (car info) link-alist))
                          (list (list (car info))))))
      (terpri)
      )
    (terpri)
    (format t "~8D/~D~26T~@[~8D~]~35Tcontiguous (~D blocks)~%"
            ncbpage maxcbpage (if (zerop cbgbccount) nil cbgbccount) ncb)
    (format t "~9T~D~35Thole~%" holepage)
    (format t "~8D/~D~19T~6,1F%~@[~8D~]~35Trelocatable~%~%"
            nrbpage maxrbpage (/ rbused 0.01 (+ rbused rbfree))
            (if (zerop rbgbccount) nil rbgbccount))
    (format t "~10D pages for cells~%~%" npage)
    (format t "~10D total pages in core~%" (+ npage ncbpage nrbpage))
    (format t "~10D current core maximum pages~%" (+ maxnpage maxcbpage maxrbpage))
    (format t "~10D pages reserved for gc~%" maxrbpage)
    (format t "~10D pages available for adding to core~%" leftpage)
    (format t "~10D pages reserved for core exhaustion~%~%" (- maxpage (+ maxnpage maxcbpage (ash maxrbpage 1) leftpage)))
    (format t "~10D maximum pages~%" maxpage)
    (values)
    )

 (when x
  (format t "~%~%")
  (format t "Key:~%~%WS: words per struct~%UP: allocated pages~%MP: maximum pages~%FI: fraction of cells in use on allocated pages~%GC: number of gc triggers allocating this type~%~%")
  (heaprep))

 (values))


(defvar *call-stack* nil)
(defvar *prof-list* nil)
(defvar *profiling* nil)
(defun in-call (sym)
  (when *profiling*
    (push (cons sym (gettimeofday)) *call-stack*)))
(defun out-call (tm)
  (when *call-stack*
    (let* ((r (pop *call-stack*))
	   (tm (- tm (cdr r)))
	   (e (car (member (caar *call-stack*) (pushnew (list (caar *call-stack*)) *prof-list* :key 'car) :key 'car)))
	   (f (car (member (car r) (pushnew (list* (car r) 0 0) (cdr e) :key 'car) :key 'car))))
      (setf (cadr f) (+ tm (cadr f)) (cddr f) (1+ (cddr f))))))
(defun prof (v)
  (print-prof)
  (setq *call-stack* nil *prof-list* nil *profiling* v))
(defun print-prof nil
  (dolist (l *prof-list*)
    (setf (cdr l) (sort (cdr l) (lambda (x y) (> (cadr x) (cadr y))))))
  (setq *prof-list* (sort *prof-list* (lambda (x y) (> (reduce (lambda (y x) (+ y (cadr x))) (cdr x) :initial-value 0)
						       (reduce (lambda (y x) (+ y (cadr x))) (cdr y) :initial-value 0)))))
  (print *prof-list*))
