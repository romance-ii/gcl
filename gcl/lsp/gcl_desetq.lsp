



(defun desetq-consp-check (val)
  (or (consp val) (error "~a is not a cons" val)))

(defun desetq1 (form val)
  (cond ((symbolp form)
	 (cond (form			;(push form *desetq-binds*)
		`(setf ,form ,val))))
	((consp form)
	 `(progn
	    (desetq-consp-check ,val)
	    ,(desetq1 (car form) `(car ,val))
	    ,@ (if (consp (cdr form))
		   (list(desetq1 (cdr form) `(cdr ,val)))
		 (and (cdr form) `((setf ,(cdr form) (cdr ,val)))))))
	(t (error ""))))


(defmacro desetq (form val)
  (cond ((atom val) (desetq1 form val))
	(t (let ((value (gensym)))
	     `(let ((,value ,val)) , (desetq1 form value))))))
