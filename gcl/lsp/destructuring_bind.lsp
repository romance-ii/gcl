(in-package 'lisp)

(export '(destructuring-bind))

(in-package 'system)

;(proclaim '(optimize (safety 2) (space 3)))

(defmacro memq (item list) `(member ,item ,list :test #'eq))

(defun make-caxr (n form)
  (if (< n 4)
      `(,(nth n '(car cadr caddr cadddr)) ,form)
      (make-caxr (- n 4) `(cddddr ,form))))

(defun make-cdxr (n form)
  (cond ((zerop n) form)
	((< n 5) `(,(nth n '(identity cdr cddr cdddr cddddr)) ,form))
	(t (make-cdxr (- n 4) `(cddddr ,form)))))
)

(defun extract-declarations (body &optional environment)
  ;;(declare (values documentation declarations body))
  (let (documentation declarations form)
    (when (and (stringp (car body))
	       (cdr body))
      (setq documentation (pop body)))
    (block outer
      (loop
	(when (null body) (return-from outer nil))
	(setq form (car body))
	(when (block inner
		(loop (cond ((not (listp form))
			     (return-from outer nil))
			    ((eq (car form) 'declare)
			     (return-from inner 't))
			    (t
			     (multiple-value-bind (newform macrop)
				  (macroexpand-1 form environment)
			       (if (or (not (eq newform form)) macrop)
				   (setq form newform)
				 (return-from outer nil)))))))
	  (pop body)
	  (dolist (declaration (cdr form))
	    (push declaration declarations)))))
    (values documentation
	    (and declarations `((declare ,.(nreverse declarations))))
	    body)))
(proclaim '(function destructure-internal (t t) *))
(defun destructure (pattern form)
  ;;(declare (values setqs binds))
  (let ((*destructure-vars* ())
	(setqs ()))
    (declare (special *destructure-vars*))
    (setq *destructure-vars* '(destructure-form)
	  setqs (list `(setq destructure-form ,form))
	  form 'destructure-form)
    (values (nconc setqs (nreverse (destructure-internal pattern form)))
	    (delete nil *destructure-vars*))))
(defun destructure-internal (pattern form)
  ;; When we are called, pattern must be a list.  Form should be a symbol
  ;; which we are free to setq containing the value to be destructured.
  ;; Optimizations are performed for the last element of pattern cases.
  ;; we assume that the compiler is smart about gensyms which are bound
  ;; but only for a short period of time.
  (declare (special *destructure-vars*))
  (let ((gensym (gensym))
	(pending-pops 0)
	(var nil)
	(setqs ()))
    (labels
        ((make-pop (var form pop-into)
	   (prog1 
	     (cond ((zerop pending-pops)
		    `(progn ,(and var `(setq ,var (car ,form)))
			    ,(and pop-into `(setq ,pop-into (cdr ,form)))))
		   ((null pop-into)
		    (and var `(setq ,var ,(make-caxr pending-pops form))))
		   (t
		    `(progn (setq ,pop-into ,(make-cdxr pending-pops form))
			    ,(and var `(setq ,var (pop ,pop-into))))))
	     (setq pending-pops 0))))
      (do ((pat pattern (cdr pat)))
	  ((null pat) ())
	(if (symbolp (setq var (car pat)))
	    (progn
	      (unless (memq var '(nil ignore))
			 (push var *destructure-vars*))	      
	      (cond ((null (cdr pat))
		     (push (make-pop var form ()) setqs))
		    ((symbolp (cdr pat))
		     (push (make-pop var form (cdr pat)) setqs)
		     (push (cdr pat) *destructure-vars*)
		     (return ()))
		    ((memq var '(nil ignore)) (incf pending-pops))
		    ((memq (cadr pat) '(nil ignore))
		     (push (make-pop var form ()) setqs)
		     (incf pending-pops 1))
		    (t
		     (push (make-pop var form form) setqs))))
	    (progn
	      (push `(let ((,gensym ()))
		       ,(make-pop gensym
				  form
				  (if (symbolp (cdr pat)) (cdr pat) form))
		       ,@(nreverse
			   (destructure-internal (car pat) gensym)))
		    setqs)
	      (when (symbolp (cdr pat))
		(push (cdr pat) *destructure-vars*)
		(return)))))
      setqs)))
)
(defmacro destructuring-bind (pattern form &body body)
  (multiple-value-bind (ignore declares body)
      (extract-declarations body)
    (declare (ignore ignore))
    (multiple-value-bind (setqs binds)
	(destructure pattern form)
      `(let ,binds
	 ,@declares
	 ,@setqs
	 (progn destructure-form)
	 . ,body))))



;;; end of destructuring-bind code from cmucl.
