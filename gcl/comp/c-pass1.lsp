(in-package "BCOMP")
(setf (get 'call-set-mv 'b1) 'b1-call-set-mv)
(defun b1-call-set-mv (x where &aux form) where
  (desetq (nil  form) x)
  `(call-set-mv #.(make-desk t) 
		 ,(b1-walk form 'call-set-mv)))


(setf (get 'multiple-value-bind 'b1) 'b1-multiple-value-bind)
(defun b1-multiple-value-bind(x where &aux vars form body )
  (desetq (nil vars form . body) x)
  (b1-walk
	`(progn
	   (call-set-mv , form)
	   (let ,
	       (sloop for v in vars
		  for i from 0
		  collect `(,v (nth-mv ,i )))
		  ,@ body))
	where))

(setf (get 'multiple-value-setq 'b1) 'b1-multiple-value-setq)
(defun b1-multiple-value-setq(x where &aux vars form body  gens)
  (desetq (nil vars form . body) x)
  (setq gens (sloop for v in-list vars collect (gensym)))
  (b1-walk
	`(multiple-value-bind ,gens ,form
	   (setq ,@ (sloop for v in vars for w in gens collect v collect w))
	   ,@ body) where ))

(setf (get 'multiple-value-list 'b1) 'b1-multiple-value-list)
(defun b1-multiple-value-list(x where &aux  form )
  (desetq (nil form ) x)
  (b1-walk `(progn (call-set-mv ,form)
		   (list-mv))
	   where))


;; replace this by storage allocation in c stack of n*multiple-value-limit
;; and then copy into this storage at each stage.   Then c_apply_n
;; which funcalls a vector.
(setf (get 'multiple-value-call 'b1) 'b1-multiple-value-call)
(defun b1-multiple-value-call(x where &aux   bod fun )
  (desetq (nil fun . bod) x)
  (b1-walk
    `(apply ,fun
	    (nconc  ,@ (sloop for v in-list bod
		 collect `(the dynamic-extent (multiple-value-list ,v)))))

  where
  ))

(setf (get 'multiple-value-prog1 'b1) 'b1-multiple-value-prog1)
(defun b1-multiple-value-prog1(x where &aux  form  bod (sym (gensym )))
  (desetq (nil form . bod) x)
  (b1-walk
   `(let ((,sym  (multiple-value-list ,form)))
      (declare (dynamic-extent ,sym))
      ,@ bod
      (apply #'values ,sym))
   where))

 







