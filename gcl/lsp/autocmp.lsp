;;SAMPLE USAGE:
;;(def-autocomp foo (a b) (+ a b))
;;(def-autocomp goo (a b) (- a b))
;;
;;(foo 3 4) ==> 7 (after compiling foo and goo together..)
;;
;;Note:  Might want to have a *use-count* which only compiles
;;after *use-count* gets above say 10.  Thus it would only compile
;;the set of *new-definitions* when there were more than 10.
;;Would need to change the following slightly. Instead of storing the defun
;;store the lambda form, and have the autocomp do an apply of the lambda
;;form while incrementing the *use-count*.  This is probably much better,
;;since the *use-count* much more accurately reflects the cost of not compiling
;;This code is obsolete before being used!!  But I have to go now..

(require "SLOOP")
(use-package "SLOOP")


(defvar *new-definitions* nil)

(defun compile-new-definitions (name)
  (and name
       (or (member name *new-definitions*)
	   (error "~a is not in  *new-definitions*" name)))
  (let ((lisp-file "cmptemp.lisp")(o-file "cmptemp.o"))
    ;;in case somehow order matters..
    (setq *new-definitions* (nreverse *new-definitions*))
    (with-open-file (st lisp-file :direction :output)
		    (sloop for v in *new-definitions*
			   do (princ (get v 'new-definition) st)))
    (compile-file lisp-file :output-file o-file)
    (load o-file)
    (setq *new-definitions* nil)))

(defun autocomp (name args)
  (compile-new-definitions name)
  (apply name args))

(defmacro def-autocomp (fun args &rest body)
  (let ((defn (list* 'defun fun args body)))
  `(progn (push ',fun *new-definitions*)
	  (setf (get ',fun 'new-definition) ',defn)
	  (defun ,fun (&rest args)
	    (autocomp ',fun args)))))
	  





