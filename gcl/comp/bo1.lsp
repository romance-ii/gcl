(in-package "BCOMP")
(defvar *space* 0)


(defmacro once-only (((v val) . res) &body body)
  (cond (res `(once-only ((,v,val)) (once-only ,res ,@ body)))
	((and (consp val) (or (eq (car val) 'function)(eq (car val) 'quote)))
	 `(symbol-macrolet ((,v ,val)) ,@ body))
	(t (let ((w (gensym)))
	     `(let ((,w ,val))
		(symbol-macrolet ((,v ,w))
				 ,@ body))))))

(defun get-test (x &aux item lis res key fn)
    (when (<= *space*  0)
      (desetq (item lis . res) (cdr x))
      (cond (res
	     (desetq (key fn . res) res)
	     (cond ((or  res
			(not (eq key :test))
			(not (and (consp fn)
				  (member (car fn) '(quote function)))))
		    nil)
		   (t (cadr fn))))
	    (t 'eql))))

(setf (get 'assoc 'bo1) 'bo1-assoc)
(defun bo1-assoc (x where &aux fn ) where
  (when  (setq fn (get-test x))
    `(funcall #'(lambda (item lis)
		  (sloop for v in lis
		     when (funcall #',fn (car v) item)
		     do (return v)))
	      ,@ (cdr x))))

(setf (get 'member 'bo1) 'bo1-member)
(defun bo1-member (x where &aux fn  ) where
  (when  (setq fn (get-test x))
    `(funcall #'(lambda (item lis)
		  (sloop for v on lis
		     when (funcall #',fn (car v) item)
		     do (return v)))
	      ,@ (cdr x))))

(setf (get 'get 'bo1) 'bo1-get)
(defun bo1-get (x where) where
  (when (and (= *safety* 0) (< *space* 2))
    `(funcall #'(lambda (plis key &optional dflt)
		 (setq plis (symbol-plist plis))
		 (loop (cond ((null plis) (return dflt))
			     ((eq (car plis) key)(return (cadr plis)))
			     (t (setq plis (cddr plis))))))
	      ,@ (cdr x))))

(setf (get 'mapcar 'bo1) 'bo1-mapcar)
(setf (get 'mapc 'bo1) 'bo1-mapcar)
(setf (get 'mapcan 'bo1) 'bo1-mapcar)
(defun bo1-mapcar (x where &aux fn l coll) where
  (when (and (= *safety* 0) (< *space* 2))
    (desetq (fn l) (cdr x))
    (setq coll (cdr (assoc (car x) '((mapcar . collect) (mapc . do)
				     (mapcan . nconc)))))
    (cond ((cdddr x) nil)
	  ((and (consp fn) (member (car fn) '(quote function)))
	   `(funcall #'(lambda (lis)
			 (sloop for v in lis ,coll (funcall ,fn v)))
		     ,@ (cddr x)))
	  (t `(funcall #'(lambda (fn lis)
			   (if (symbolp fn) (setq fn (symbol-function fn)))
			   (sloop for v in lis ,coll (funcall fn v)))
		       ,@ (cdr x))))))

(setf (get 'funcall 'bo1) 'bo1-funcall)
(defun bo1-funcall (x where &aux fn  tem args ll w binds) where
  (desetq (fn . args)  (cdr x))
  (cond  ((and (consp fn)
	       (or (eq (car fn) 'quote)
		   (eq (car fn) 'function))
	       (consp (cdr fn))
	       (setq tem (cadr fn))
	       (symbolp tem))
	  `(,(cadr fn) ,@ args))
	 (tem
	  (cond ((and (consp tem) (eq (car tem) 'lambda))
		 (desetq (ll) (cdr tem))
		 (setq ll (decode-ll ll))
		 (cond ((and   (null (ll &key ll))
				   (null (ll &rest ll))
				   (null (ll &aux ll)))
			(sloop for v in (ll &required ll)
			   do (desetq (w) args)
			   (setq args (cdr args))
			   (push (list v w)  binds))
			(sloop for v in (ll &optional ll)
			   do
			   (cond (args
				  (or (consp args)  (comp-error "bad arglist in ~a " x))
				  (push (list (car v) (pop args)) binds))
				 (t (push (list (car v) (cadr v)) binds)))
			   (cond ((caddr v)
				  (push (list (caddr v)
					      (not (null args)))
					binds))))
			`(let ,(nreverse binds)
			   ,@ (cddr tem)))))))
	 (t  nil)))

(setf (get 'typep 'b1.5) 'b1.5-typep)
(defun b1.5-typep (x where &aux (cd (third x))
		     (args (call-data-arglist cd)))
  where
  (let ((rt (result-type (nth 0 args)))
	(typ  (nth 1 args)))
    (cond ((and (consp typ)
		(eq (car typ) 'dv)
	        (subtypep rt (THIRD typ)))
	   (get-object t)))))

(defmacro dotimes ((var form &optional (val nil)) &rest body
                                                  &aux (temp (gensym)))
  `(do* ((,temp ,form) (,var 0 (1+ ,var)))
        ((>= ,var ,temp) ,val)
     ,@ (cond ((typep form 'fixnum)
	       `((declare (fixnum ,temp ,var)))))
        ,@body))

(defmacro psetq (&optional var val &rest l &aux sets types  decls binds)
  (cond ((null var) nil)
	((null l) `(setq ,var ,val))
	(t (loop
	    (push `(,(gensym) ,val) binds)
	    (push var sets)
	    (push (caar binds) sets)
	    (push `(type (type-of ,var) ,(caar binds)) types) 
	    (or l  (return nil))
	    (desetq (var val) l) (setq l (cddr l)))
	   `(let ,(nreverse binds)
	      (declare ,@ types)
	      (setq  ,@(nreverse sets))))))

;;
;;- Local variables:
;;- mode:lisp
;;- version-control:t
;;- End:




