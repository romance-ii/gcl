(in-package 'compiler)
(import 'si::switch)
(import 'sloop::sloop)
(provide "UCALL")

;;ucall is like funcall, except it assumes
;;1) its first arg has an inline-always property.
;;2) the order of evaluation of the remaining args is unimportant.

;;This can be useful when we know that the side effects caused by evaluating
;;the args do not affect the order of evaluation.
;;It also returns an indeterminate value.

(defun c1ucall (args &aux funob (info (compiler::make-info)))
  (setq funob (compiler::c1funob (car args)))
  (compiler::add-info info (cadr funob))
  (list 'ucall info funob (compiler::c1args (cdr args) info))
  )

(defun c2ucall (funob args &aux (*inline-blocks* 0)(*vs* *vs*))
  (let* ((fname (caddr funob))
	(props (car (get fname 'inline-always)))
	new-args
	)
    (or props (error "no inline-always prop"))
    (do ((v args (cdr v))
	 (types (car props) (cdr types)))
	((null v) (setq new-args (nreverse new-args)))
	(setq new-args
	      (append (inline-args (list (car v)) (list (car types)))
		    new-args)))
    (wt-nl)
    (wt-inline-loc (nth 4 props) new-args)
    (wt ";")
    (unwind-exit "Cnil")
    (close-inline-blocks)
    ))


;;Usage (comment "hi there") ; will insert a comment at that point in
;;the program.
(defun c1comment (args)
  (list 'comment (make-info) args))
(defun c2comment (args)
  (let ((string (car args)))
    (if (find #\/ string) (setq string (remove #\/ string)))
    (wt "/* "string " */")))

(defmacro comment (a) a nil)

;;Usage: (tlet (char *) jack ....)
;;--> {char * V1; ...V1..

(defun c1tlet (args &aux  (info (make-info)) (*vars* *vars*))
  (let ((sym (cadr args))
	(type (car args))
	form )
    (let ((var (c1make-var sym nil nil nil)))
      (cond ((subtypep type 'fixnum)
	     (setf (var-type var) 'fixnum)))
      (push var *vars*)
      (setq form (c1expr* (cons 'progn (cddr args)) info))
      (list 'tlet (second form) type var form))))

(defun c2tlet (type var orig &aux (stype type))
  (setf (var-loc var) (next-cvar))
  (or (stringp type) (setq stype (format nil "~(~a~)" type)))
  (setf (var-kind var)
	(cond ((subtypep type 'fixnum)
	       (setf (var-type var) 'fixnum))
	      (t 'object)))
  (if (listp type) (setq stype (string-trim "()" stype)))
  (wt-nl "{"  stype " V" (var-loc var) ";" )
  (c2expr orig)
  (wt "}"))

(si::putprop 'tlet 'c1tlet 'c1special)
(si::putprop 'tlet 'c2tlet 'c2)


(defun c1clet (args)
  (let ((string (car args))
	(form (c1expr (cons 'progn (cdr args)))))
    (list 'clet (second form) string form)))

(defun c2clet (string orig )
  (wt-nl "{" string)
  (c2expr orig)
    (wt "}"))

;;Usage: Takes a STRING and BODY.  Acts like progn
;;on the body, but the c code will have {string . c code for body}
;;Sample (clet "int jack; char *jane;" ....)
(defmacro clet (string &rest body) string `(progn ,@ body))

(si::putprop 'clet 'c1clet 'c1special)
(si::putprop 'clet 'c2clet 'c2)


(si::putprop 'comment 'c1comment 'c1special)
(si::putprop 'comment 'c2comment 'c2)


  


(si::putprop 'ucall 'c1ucall 'c1)
(si::putprop 'ucall 'c2ucall 'c2)



(defmacro def-inline (name args return-type &rest bod)
  (let* ((side-effect-p (if (member (car bod)
				    '(:side-effect nil t))
			    (prog1  (and (car bod) t) (setq bod (cdr bod)))
			  nil))
	 (inline (list args return-type side-effect-p nil (car bod))))
    `(car (push ',inline
		(get ',name 'inline-always)))))




(defmacro defun-inline (name args return-type &rest bod)
  (let* ((sym (gensym))
	 (named-args
	  (nthcdr (- 10 (length args)) '(X9 X8 X7 X6 X5 X4 X3 X2 X1 X0)))
	 (inline (eval `(def-inline ,sym ,args ,return-type ,@ bod))))
    `(progn
       (defun ,name  ,named-args
	 (declare ,@ (sloop for v in named-args for w in args
			    when (not (eq t v))
			    collect (list w v)))
	 (the ,return-type (,sym ,@ named-args)))
       (push  ',inline
	      (get ',name 'inline-always)))))

(defmacro def-ucall (fun args string)
  (let ((sym (gensym)))
    `(progn
    (def-inline ,sym ,args t t ,string)
    (defmacro ,fun (&rest args) `(ucall ',',sym ,@ args)))))

