;; Warn of some slow calls.
(in-package 'compiler)

;; slow if the result type is type T
(dolist (v '(+ * / mod - float 1- 1+))
  (setf (get v 'slow-test)
	#'(lambda (name x) (or (null x)  (eql (cadar x) t)))))

;; slow if the first arg is type T
(dolist (v '(aref si::aset < <= > >=))
  (setf (get v 'slow-test)
	#'(lambda (name x) (or (null x) (eql (caar x) t)))))

(dolist (v '(typep))
  (setf (get v 'slow-test)
	#'(lambda (name x) (null x))))


;; turn the compiler expressions back into something vaguely
;; readable.
(defun lispify (x)
   (let ((tem  (car x)))
     (cond ((equal tem 'var)
	    (var-name (car (third x))))
	   ((eq tem 'call-global)
	    (cons (third x)
		  (mapcar 'lispify (fourth x))))
	   ((eq tem 'fixnum-value)
	    (third x))
	   ((eq tem 'location)
	    (lispify (third x)))
	   (t x))))

(eval-when (load eval)
 (trace (get-inline-info :entry nil
        :entrycond nil
        :exitcond
        (and (not (equal (car values) nil))
	     (let ((s (get (car si::arglist) 'slow-test)))
	       (and s (funcall s (car si::arglist) (car values))))
	     (progn
	       (cmpwarn "Slow code: ~a: "
		  (cons (car si::arglist)
			(mapcar 'lispify (second si::arglist))))
	       (format t " ~a --> ~a~%"
		       (mapcar #'(lambda (form) (info-type (cadr form)))
			       (second si::arglist))
		       (third si::arglist)))
	     nil)))
)	   