;;;-*- Mode: Lisp; Syntax: Common-lisp; Package: user -*- 

(in-package :bench :use '(:lisp #-pcl :clos))

#+(and kcl pcl)
(eval-when (compile load eval)
  (shadowing-import 'pcl::dotimes)
)

#+pcl
(eval-when (compile load eval) (pcl::use-package-pcl))

#-cmu
(defmacro declaim (arg)
  `(proclaim ',arg))

;;;Here are a few homebrew benchmarks for testing out Lisp performance.
;;; BENCH-THIS-LISP: benchmarks for common lisp.
;;; BENCH-THIS-CLOS: benchmarks for CLOS.
;;; BENCH-FLAVORS:    ditto for Symbolics flavors.
;;; BE SURE TO CHANGE THE PACKAGE DEFINITION TO GET THE CLOS + LISP 
;;; YOU WANT TO TEST.
;;;
;;;Each benchmark is reported as operations per second.  Without-interrupts is
;;;  used, so the scheduler isn't supposed to get in the way.  Accuracy is 
;;;  generally between one and five percent.
;;;
;;;Elapsed time is measured using get-internal-run-time.  Because the accuracy
;;;  of this number is fairly crude, it is important to use a large number of 
;;;  iterations to get an accurate benchmark.  The function median-time may
;;;  complain to you if you didn't pick enough iterations.
;;;
;;;July 1992.  Watch out!  In some cases the instruction being timed will be
;;;  optimized away by a clever compiler.  Beware of benchmarks that are
;;;  nearly as fast as *speed-of-empty-loop*.
;;;
;;;Thanks to Ken Anderson for much of this code.
;;;
;;; jeff morrill
;;; jmorrill@bbn.com

#+Genera
(eval-when (compile load eval)
  (import '(clos-internals::allocate-instance)))

(declaim (optimize (speed 3) (safety 1) (space 0) 
		   #+lucid (compilation-speed 0)))

;;;*********************************************************************

(deftype positive-integer () '(integer 0 *))
(deftype positive-fixnum () '(and fixnum positive-integer))

(defun repeat (fn n)
  (declare (type function fn) (type positive-integer n))
  (multiple-value-bind (ngroups last)
      (floor n most-positive-fixnum)
    (declare (type positive-fixnum ngroups last))
    (dotimes (i ngroups)
      (declare (type positive-fixnum i))
      (dotimes (j most-positive-fixnum)
	(declare (fixnum j))
	(funcall fn)))
    (dotimes (j last)
      (declare (type positive-fixnum j))
      (funcall fn)))
  n)

;; Most compilers other than KCL have optimizers that make this technique
;; unreliable for simple forms.
(eval-when (compile load eval)
(declaim (fixnum *simple-repeat-count* *simple-iteration-count*
		 *total-simple-iterations*))
(defparameter *simple-repeat-count* #-kcl 1 #+kcl 10)
(defparameter *simple-iteration-count* #-kcl 1 #+kcl 10)
(defparameter *total-simple-iterations*
  (* *simple-repeat-count* *simple-iteration-count*))
)

(defmacro simple-repeat (form)
  (if (eql *simple-iteration-count* 1)
      form
      (let ((result (make-symbol "RESULT")))
	`(let ((,result nil))
	   (dotimes (.i. ,*simple-iteration-count* ,result)
	     (declare (fixnum .i.))
	     ,@(let ((forms nil))
	         (dotimes (i *simple-repeat-count* forms)
		   (push `(setq ,result ,form) forms))))))))

(defvar *use-gc-p* t)
(defvar *estimated-bytes-per-call* 0)
(defvar *bytes-per-word* 4)
(declaim (type (and (integer 0 *) fixnum)
	       *bytes-per-word* *estimated-bytes-per-call*))

(defmacro with-optional-gc-control (&body body)
  `(let (#+cmu 
	 (ext:*bytes-consed-between-gcs*
	  (if *use-gc-p*
	      (+ ext:*bytes-consed-between-gcs*
		 (* *estimated-bytes-per-call* n))
	      ext:*bytes-consed-between-gcs*)))
     ,@body))

(declaim (single-float *min-time* *one-percent-of-min-time*))

(defvar *min-time* (max 1.0 (/ 400.0 (float internal-time-units-per-second)))
  "At least 2 orders of magnitude larger than our time resolution.")

(defparameter *one-percent-of-min-time* (* *min-time* 0.01))

(defvar *elapsed-time-result*)

(defun elapsed-time (function n)
  "Returns the time (seconds) it takes to call function n times."
  (declare (type function function) (integer n))
  (when (and *use-gc-p* (plusp *estimated-bytes-per-call*))
    #+cmu (lisp::gc nil))
  (let ((start-time (get-internal-run-time)))
    (setq *elapsed-time-result* (repeat function n))
    (let ((end-time (get-internal-run-time)))
      (/ (float (abs (- end-time start-time)))
	 (float internal-time-units-per-second)))))

(defmacro without-interruption (&body forms)
  #+genera `(scl:without-interrupts ,@forms)
  #+lucid `(lcl::with-scheduling-inhibited ,@forms)
  #+allegro `(excl:without-interrupts ,@forms)
  #+(and (not genera) (not lucid) (not allegro)) `(progn ,@forms))

(declaim (type (function (t function &optional fixnum t) single-float) 
	       median-time-internal))

(defvar *warn-if-too-fast-p* nil)

(defun median-time-internal (form function n &optional (I 5) 
				  (warn-p *warn-if-too-fast-p*))
  "Return the median time it takes to evaluate form."
  ;; I: number of samples to take.
  (declare (type function function) (fixnum i))
  (without-interruption
    (funcall function)
    (let ((results nil))
      (dotimes (ignore I)
	(declare (fixnum ignore))
	(let ((time (elapsed-time function n)))
	  (declare (single-float time))
	  (when (and (< time *min-time*) warn-p)
	    (format t "~% Warning.  Evaluating ~S took only ~S seconds.~
                          ~% You should probably use more iterations." 
		    form time))
	  (push time results)))
      (nth (truncate I 2) (sort results #'<)))))

(defmacro median-time (form n &optional (I 5) 
			    (warn-p *warn-if-too-fast-p*))
  "Return the median time it takes to evaluate form n times."
  ;; I: number of samples to take.
  `(median-time-internal 
    ',form
    #'(lambda () (simple-repeat ,form))
    (ceiling ,n ,*total-simple-iterations*)
    ,i 
    ,warn-p))

#+debug
(defun test () (median-time (sleep 1.0) 5))


;;;*********************************************************************

;;; OPERATIONS-PER-SECOND actually does the work of computing a benchmark.  
;;; The amount of time it takes to execute the form N times is recorded, 
;;; minus the time it takes to execute the empty loop.  OP/S = N/time.  
;;; This quantity is recomputed five times and the median value is returned.  
;;; Variance in the numbers increases when memory is being allocated (cons, 
;;; make-instance, etc).

(declaim (type (function (t function &optional fixnum integer) single-float)
	       time-form-internal))

(defun time-form-internal (form function &optional (i 5) (default 100))
  (declare (integer default) (fixnum i))
  (with-optional-gc-control
    (let ((time (median-time-internal form function default i nil)))
      (declare (single-float time))
      (loop (when (> time *one-percent-of-min-time*)
	      (return nil))
	    (setq default (* default 10))
	    (setq time (median-time-internal form function default i nil)))
      (when (< time *min-time*)
	(setq default (ceiling default (/ time *min-time*)))
	(setq time (median-time-internal form function default i nil)))
      (/ time (float default)))))

(defmacro time-form (form &optional (i 5))
  `(/ (time-form-internal ',form #'(lambda () (simple-repeat ,form)) ,i)
      ,(float *total-simple-iterations*)))

(defun compute-speed-of-empty-loop () (time-form nil))

(declaim (single-float *speed-of-empty-loop*))
(defparameter *speed-of-empty-loop* (compute-speed-of-empty-loop))

(format t "~%Empty loops per second: ~40T~8,3E~%" 
	(/ 1.0 *speed-of-empty-loop*))

(defmacro operations-per-second (form &optional (i 5))
  "Return the number of times FORM can evaluate in one second."
  `(/ 1.0 (- (time-form ,form ,i) *speed-of-empty-loop*)))

(defmacro defun-timer (name args &body body)
  `(defun ,name ,args
     ,@body))	 

(defmacro bench (pretty-name name)
  `(progn
     (format t "~%~A: " ,pretty-name) (force-output)
     (format t "~40T~8,3E" (,name))))

;;;****************************************************************************

;;;BENCH-THIS-LISP

;#+bench-this-lisp
(progn

(defun-timer Nmult ()
  (let ((a 2.1))
    (operations-per-second (* a a))))

(defun-timer Nadd ()
  (let ((a 2.1))
    (operations-per-second (+ a a)))) 

(defun square (x) (* x x))

(defun-timer funcall-1 ()
  ;; inlined
  (let ((x 2.1))
    (operations-per-second (funcall #'(lambda (a) (* a a)) x))))

(defun f1 (n) n)

(defun-timer funcall-2 ()
  (let ((f #'f1) 
	(x 2.1))
    (operations-per-second (funcall f x))))

(defun-timer funcall-3 ()
  (let ((x 2.1))
    (operations-per-second (f1 x))))

(defun-timer funcall-4 ()
  (let ((x 2.1))
    (operations-per-second (funcall #'square x))))

(defun-timer funcall-5 ()
  (let ((x 2.1)
	(f #'square))
    (let ((g #'(lambda (x) 
		 (operations-per-second (funcall f x)))))
      (funcall g x))))

(defun-timer Nsetf ()
  (let ((array (make-array 15)))
    (operations-per-second (setf (aref array 5) t))))

(defun-timer Nsymeval () (operations-per-second (eval T)))

(defun-timer Repeatuations () (operations-per-second (eval '(* 2.1 2.1))))

(defun-timer n-cons () (let ((a 1)) (operations-per-second (cons a a))))

(defvar *object* t)
(defun-timer nspecial () (operations-per-second (null *object*)))

(defun-timer nlexical () 
  (let ((o t))
    (operations-per-second (null o))))

(defun-timer nfree () 
  (let ((o t))
    (let ((g #'(lambda ()
		 #+genera (declare (sys:downward-function))
		 (operations-per-second (null o)))))
      (funcall g))))

(defun-timer nfree2 () 
  (let ((o t))
    (let ((g #'(lambda ()
		 (let ((f #'(lambda ()
			      #+genera (declare (sys:downward-function))
			      (operations-per-second (null o)))))
		   (funcall f)))))
      (funcall g))))

(defun-timer ncompilations ()
  (let ((lambda-expression
	  '(lambda (bar) (let ((baz t)) (if baz (cons bar nil))))))
    (operations-per-second (compile 'bob lambda-expression))))

(defun bench-this-lisp ()
  (bench "(* 2.1 2.1)" nmult)
  (bench "(+ 2.1 2.1)" nadd)
  (bench "funcall & (* 2.1 2.1)" funcall-3)
  (bench "special reference" nspecial)
  (bench "lexical reference" nlexical)
  ;;  (bench "ivar reference" n-ivar-ref)
  (bench "(setf (aref array 5) t)" nsetf)
  (bench "(funcall lexical-f x)" funcall-2)
  (bench "(f x)" funcall-3) 
  ;;  (Bench "(eval t)" nsymeval)
  ;;  (bench "(eval '(* 2.1 2.1))" repeatuations)
  ;;  (bench "(cons 1 2)" n-cons)
  ;;  (bench "compile simple function" ncompilations)
  )

;(bench-this-lisp)
)

;;;**************************************************************

#+genera
(progn
  
(scl:defflavor bar (a b) ()
  :initable-instance-variables
  :writable-instance-variables)

(scl:defflavor frob (c) (bar)
  :initable-instance-variables
  :writable-instance-variables)

(scl:defmethod (hop bar) ()
  a)

(scl:defmethod (set-hop bar) ()
  (setq a n))

(scl:defmethod (nohop bar) ()
  5)

(defun n-ivar-ref ()
  (let ((i (scl:make-instance 'bar :a 0 :b 0)))
    (ivar-ref i N)))

(scl:defmethod (ivar-ref bar) ()
  (operations-per-second b))


(defun-timer Ninstances ()
  (operations-per-second (flavor:make-instance 'bar)))

(defun-timer n-svref ()
  (let ((instance (flavor:make-instance 'bar :a 1)))
    (operations-per-second (scl:symbol-value-in-instance instance 'a))))
(defun-timer n-hop ()
  (let ((instance (flavor:make-instance 'bar :a 1)))
    (operations-per-second (hop instance))))
(defun-timer n-gf ()
  (let ((instance (flavor:make-instance 'bar :a 1)))
    (operations-per-second (nohop instance))))
(defun-timer n-set-hop ()
  (let ((instance (flavor:make-instance 'bar :a 1)))
    (operations-per-second (set-hop instance))))
(defun-timer n-type-of ()
  (let ((instance (flavor:make-instance 'bar)))
    (operations-per-second (flavor::%instance-flavor instance))))

(defun-timer n-bar-b ()
  (let ((instance (flavor:make-instance 'bar :a 0 :b 0)))
    (operations-per-second (bar-b instance))))

(defun-timer n-frob-bar-b ()
  (let ((instance (flavor:make-instance 'frob :a 0 :b 0)))
    (operations-per-second (bar-b instance))))

(defun bench-flavors ()
  (bench "flavor:make-instance (2 slots)" ninstances)
  (bench "flavor:symbol-value-in-instance" n-svref)
  (bench "1 method, 1 dispatch" n-gf)
  (bench "slot symbol in method (access)" n-hop)
  (bench "slot symbol in method (modify)" n-hop)
  (bench "slot accessor bar" n-bar-b)
  (bench "slot accessor frob" n-frob-bar-b) 
  (bench "instance-flavor" n-type-of))

) ; end of #+genera

;;;**************************************************************

;;;BENCH-THIS-CLOS
;;; (evolved from Ken Anderson's tests of Symbolics CLOS)

#+pcl
(let ((*default-pathname-defaults* pcl::*pcl-directory*))
  (load "bench-precompile"))

(defmethod strange ((x t)) t)			; default method
(defmethod area ((x number)) 'green)		; builtin class

(defclass point
	  ()
    ((x :initform 0 :accessor x :initarg :x)
     (y :initform 0 :accessor y :initarg :y)))

(defmethod color ((thing point)) 'red)
(defmethod address ((thing point)) 'boston)
(defmethod area ((thing point)) 0)
(defmethod move-to ((p1 point) (p2 point)) 0)

(defmethod x-offset ((thing point))
  (with-slots (x y) thing x))

(defmethod set-x-offset ((thing point) new-x)
  (with-slots (x y) thing (setq x new-x)))

(defclass box
	  (point)
    ((width :initform 10 :accessor width :initarg :width)
     (height :initform 10 :accessor height :initarg :height)))

(defmethod area ((thing box)) 0)
(defmethod move-to ((box box) (point point)) 0)
(defmethod address :around ((thing box)) (call-next-method))	

(defvar p (make-instance 'point))
(defvar b (make-instance 'box))

(defun-timer n-strange () (operations-per-second (strange 5)))
(defun-timer n-accesses ()
  (operations-per-second (x p)))
(defun-timer n-color ()
  (operations-per-second (color p)))
(defun-timer n-call-next-method ()
  (let ((p b))
    (operations-per-second (address p))))
(defun-timer n-area-1 ()
  (operations-per-second (area p)))
(defun-timer n-area-2 ()
  (operations-per-second (area 5)))
(defun-timer n-move-1 ()
  (operations-per-second (move-to p p)))
(defun-timer n-move-2 ()
  (let ((x p) (y b))
    (operations-per-second (move-to x y))))
(defun-timer n-off ()
  (operations-per-second (x-offset p)))
(defun-timer n-setoff ()
  (operations-per-second (set-x-offset p 500)))
(defun-timer n-slot-value ()
  (operations-per-second (slot-value p 'x)))

(defun-timer n-class-of-1 ()
  (operations-per-second (class-of p)))
#| ; cmucl can't compile this.
(defun-timer n-class-of-2 ()
  (operations-per-second (class-of 5)))
|#
(defvar nco2 5)
(defun-timer n-class-of-2 ()
  (operations-per-second (class-of nco2)))

(defvar *size-of-point* (* *bytes-per-word* 8))

(defun-timer n-alloc ()
  (let ((*estimated-bytes-per-call* *size-of-point*)
	(c (find-class 'point)))
    (operations-per-second (allocate-instance c))))

(defun-timer n-make ()
  (let ((*estimated-bytes-per-call* *size-of-point*))
    (operations-per-second (make-instance 'point))))

(defun-timer n-make-initargs ()
  (let ((*estimated-bytes-per-call* (+ *size-of-point* 
				       (* *bytes-per-word* 4))))
    (operations-per-second (make-instance 'point :x 0 :y 5))))

(defun-timer n-make-variable-initargs ()
  (let ((*estimated-bytes-per-call* (+ *size-of-point* 
				       (* *bytes-per-word* 4)))
	(x 0) (y 5))
    (operations-per-second (make-instance 'point :x x :y y))))

#+pcl
(#+pcl pcl::expanding-make-instance-top-level #-pcl progn

(defun-timer n-make1 ()
  (let ((*estimated-bytes-per-call* *size-of-point*))
    (operations-per-second (make-instance 'point))))

(defun-timer n-make-initargs1 ()
  (let ((*estimated-bytes-per-call* (+ *size-of-point* 
				       (* *bytes-per-word* 4))))
    (operations-per-second (make-instance 'point :x 0 :y 5))))

(defun-timer n-make-variable-initargs1 ()
  (let ((*estimated-bytes-per-call* (+ *size-of-point* 
				       (* *bytes-per-word* 4)))
	(x 0) (y 5))
    (operations-per-second (make-instance 'point :x x :y y))))

)

#+pcl
(defun compile-and-load-file-if-newer (file &rest other-files)
  #-cmu (declare (ignore other-files))
  #-cmu (load (compile-file (make-pathname :defaults file :type "lisp")))
  #+cmu ; uses compile-file-pathname
  (labels ((type-fwd (file &optional type)
	     (let ((path (if type
			     (make-pathname :defaults file :type type)
			     file)))
	       (if (probe-file path)
		   (file-write-date path)
		   0)))
	   (fwd (file)
	     (max (type-fwd file "lisp")
		  (type-fwd (compile-file-pathname file)))))
  (let ((other-fwd 0))
    (dolist (other other-files)
      (setq other-fwd (max other-fwd (fwd (merge-pathnames other)))))
    (setq file (merge-pathnames file))
    (when (< (type-fwd (compile-file-pathname file))
	     (max (type-fwd file "lisp") other-fwd))
      (compile-file file)
      (load file)))))

#+pcl
(let ((*default-pathname-defaults* pcl::*pcl-directory*))
  (compile-and-load-file-if-newer "bench-precompile" "bench"))

#+(and lucid (not pcl))
(lcl::precompile-generic-functions)

(defun bench-this-clos ()
  (bench "1 default method" n-strange)
  (bench "1 dispatch, 1 method" n-color)
  (bench "1 dispatch, :around + primary" n-call-next-method)
  (bench "1 dispatch, 3 methods, instance" n-area-1)
  (bench "1 dispatch, 3 methods, noninstance" n-area-2)
  (bench "2 dispatch, 2 methods" n-move-1)
  (bench "slot reader method" n-accesses)
  (bench "with-slots (1 access)" n-off)
  (bench "with-slots (1 modify)" n-setoff)
  (bench "naked slot-value" n-slot-value)
  (bench "class-of instance" n-class-of-1)
  (bench "class-of noninstance" n-class-of-2)
  (bench "allocate-instance (2 slots)" n-alloc)
    
  (let ((two-c-i #-pcl "make-instance (2 constant initargs)"
		 #+pcl "make-instance (2 initargs)"))
    (let ((opt #+(and pcl (not cmu)) "" 
	       #+(and pcl cmu) " (opt)"
	       #-pcl ""))
      (flet ((c (s) (concatenate 'string s opt)))
	(bench (c "make-instance (2 slots)") n-make)
	(bench (c two-c-i) n-make-initargs)
	#-pcl
	(bench (c "make-instance (2 variable initargs)")
	       n-make-variable-initargs)))

    #+(and pcl (not cmu))
    (let ((opt " (opt)"))
      (flet ((c (s) (concatenate 'string s opt)))
	(bench (c "make-instance (2 slots)") n-make1)
	(bench (c two-c-i) n-make-initargs1)
	#-pcl
	(bench (c "make-instance (2 variable initargs)")
	       n-make-variable-initargs1)))))

(bench-this-clos)
