(in-package "BCOMP")

(eval-when (load eval compile)

(defvar *let-bindings* nil)

(defvar *pending-action* nil)


(defun find-declarations (body &aux decls doc bod)
  (do ((v body (cdr v)))
      (())
    (or (consp v) (return nil))
    (cond ((and (consp (car v)) (eq (caar v) 'declare))
	   (push (car v) decls))
	  ((stringp (car v))(if doc (return (setq bod v)) (setq doc (car v))))
	  (t (setq bod v)(return nil))))
  (values (if doc (cons doc decls) decls) bod))


(defun parse-mll (argl whole top
		       &aux  u    (pos 0) key-list key-test)
  ;; parse a macro lambda list  ARGL, where WHOLE is a variable bound
  ;; to the whole list we gradually cdr down WHOLE
  ;; This is called recursively by add-binding, whenever the item to be
  ;; bound is not a symbol.
  (declare (fixnum pos)) 
  (when (eq (car argl) '&whole)
    (or (consp (cdr argl)) (macro-arg-error '&whole))
    (setq u (cadr argl))
    (add-binding u whole)
    (setq argl (cddr argl)))
  (if top (push `(setq ,whole (cdr ,whole)) *pending-action*))
  
  (do ()
      ((atom argl)
       (cond (key-test
	      (setf (third key-test) `(quote , key-list))))
       (when argl
	 (if (>= pos 2)  (macro-arg-error '&rest))
         ;;  ` . body'  at the end is the same as `&rest body'
	 (add-binding argl whole)))
    (let ((x (car argl)))
      (case x
	;; The lambda list keywords must appear in the following order (with ommissions).
	;; We have deleted the &environment and &whole at this point.
	;; pos 1 &optional, 2 &rest &body, 3 &key, 4 &allow-other-keys, 5 &aux
	(&optional
	 (when (>= pos 1) (macro-arg-error x))
	 (setq pos 1))
	((&rest &body)
	 (if (>= pos 2) (macro-arg-error x))
	 (setq argl (cdr argl))
	 (if (consp  argl) nil (macro-arg-error x))
	 (add-binding (car argl) whole)
	 (setq pos 2)
	 )
	(&key
	 (if (>= pos 3)  (macro-arg-error x))
	 (setq key-test `(dont-allow-other-keys ,whole nil))
	 (push key-test *pending-action*)
	 (setq pos 3))
	(&allow-other-keys
	 (if (or (< pos 3) (>= pos 4)) (macro-arg-error x))
	 (setf (car key-test) 'progn key-test nil)
	 (setq pos 4))
	(&aux
	 (if (>= pos 5) (macro-arg-error x))
	 (setq pos 5))
	(t
	 (cond
	  ((= pos 5)			;&aux
	   (let ((var x) (val nil))
	     (cond ((atom x))
		   (t (or (consp (cdr x)) (macro-arg-error '&aux))
					;(or (cddr x) (macro-arg-error '&aux))
		      (setq var (car x) val (cadr x))))
	     (or (symbolp var) (macro-arg-error '&aux)) 
	     (add-binding var val)))
	  ((= pos 4)
	   (macro-arg-error '&allow-other-keys))
	  ((= pos 3)			; &key
	   (let (var val supplied-p keyword dont-intern)
	     (cond
	      ((atom x) (setq var x keyword x))
	      (t (setq var (car x))
		 (cond ((symbolp var)
			(setq keyword var))
		       ((consp var)
			(setq dont-intern t)
			(if (consp (cdr var)) nil (macro-arg-error '&key))
			(setq keyword (car var) var (cadr var))
			(if (symbolp keyword) nil (macro-arg-error '&key)))
		       (t (macro-arg-error '&key)))
		 (cond ((consp (cdr x))
			(setq val (cadr x))
			(cond ((consp (cddr x))
			       (setq supplied-p (caddr x))))))))
	     (or dont-intern (setq keyword (intern (symbol-name keyword) 'keyword)))
	     (push keyword key-list)
	     (let ((key-val (gensym)))
	       (add-binding  key-val `(getf ,whole  ',keyword  'not-found))
	       (add-binding var `(if (eq ,key-val 'not-found) ,val ,key-val))
	       (if supplied-p
		   (add-binding supplied-p `(not (eq ,key-val 'not-found)))))))
	  ((= pos 2)
	   ;; they duplicated an &rest arg eg `&rest a b'
	   (macro-arg-error '&rest))
	  ((= pos 1)			; &optional
	   (let (var val supplied-p)
	     (cond ((atom x) (setq var x))
		   ((consp (cdr x))
		    (setq var (car x) val (cadr x))
		    (if (consp (cddr x))
			(setq supplied-p (caddr x))))
		   (t (macro-arg-error x)))
	     (add-binding var `(cond ((consp ,whole)
				      ,@(if supplied-p `((setq ,supplied-p t)))
				      (prog1 (car ,whole)
					(setq ,whole (cdr ,whole))))
				     (t ,val)))))
	  ((= pos 0)			;&required arg
	   (let ((last-arg (or (null (cdr argl))
			       (and (consp (cdr argl))
				    (eq (car argl) '&aux)))))
	     (add-binding x
			  `(cond ((consp ,whole)
				  ,(if last-arg
				       `(if (cdr ,whole)
					    (too-many-arguments-to-macro)
					  (car , whole))
				     `(car ,whole)))
				 (t (too-few-arguments-to-macro))))
	     (or last-arg (push `(setq ,whole (cdr ,whole))
				*pending-action*))
	     
	     ))))))
    (pop argl)))

(defun too-many-arguments-to-macro()
  (error "Too many arguments to a macro or destructuring bind"))

(defun too-few-arguments-to-macro()
  (error "Too few arguments to a macro or destructuring bind"))

(defun add-binding (v val)
  (when *pending-action* (setq val `(progn ,@ (reverse *pending-action*) ,val))
	(setq *pending-action* nil))
  (cond ((symbolp v)
	 (push (list v val) *let-bindings*))
	((consp v)
	 (let ((sub-whole (gensym)))
	   (push `(,sub-whole ,val) *let-bindings*)
	   (parse-mll v  sub-whole nil)))
	(t (error "Bad lambda list entry  ~a" v))))

(defun parse-macro (name lambda-list body &optional env &aux envir whole)
  ;; process a macro function body, laying out code for destructuring the
  ;; lambda-list.   An implicit block with NAME is placed around the body.
  ;; The resulting lambda expression is a function of two arguments, suitable
  ;; for calling as a macroexpander.
  env
  (let (*let-bindings* *pending-action*)
    (do ((v lambda-list (cdr v)) (res nil))
	(())
      (if (atom v) (return nil))
      (cond ((eq (car v) '&environment)
	     (if (consp (cdr v)) nil (macro-arg-error '&environment))
	     (setq envir (cadr v))
	     (setf lambda-list (nconc (nreverse res) (cddr v)))
	     (return nil))
	    (t (push (car v) res))))
    (if envir nil (setq envir (gensym)))
    (setq whole (gensym))
    (parse-mll lambda-list whole t)
    `(function (lambda (,whole ,envir)
		 ,envir
		 (block ,name
			(let* ,(nreverse *let-bindings*)
			  ,@ body))))
    ))

(defun macro-arg-error (x)
  (error "Incorrect position or duplication of ~a arg in macro lambda list" x))

(defun dont-allow-other-keys(arglist allowed-keys)
  ;; Make sure arglist doesn't contain other keys.
  (do ((v arglist))
      ((null v))
    (cond ((consp v)
	   (if (consp (cdr v)) nil (error "Odd number of keyword args"))
	   (if (and (eq (car v) :allow-other-keys)
		    (cadr v))
	       (return nil))
	   (if (member (car v) allowed-keys :test 'eq) nil
	     (error "~s is not among the permitted keys ~s" (car v) allowed-keys))
	   (setq v (cddr v)))
	  (t (error "The keyword args end in an atom ~a instead of NIL" v)))))

(defun mset (sym fun) (setf (symbol-function sym) (cons 'macro fun)))

;(defmacro defmacro (name ll &body body))
(setf (macro-function 'defmacro)
      #'(lambda (bod env &aux ll body name)
	  (setf bod (cdr bod))
	  (or (consp bod) (too-few-arguments-to-macro))
	  (setq name (car bod) bod (cdr bod))
	  (or (consp bod) (too-few-arguments-to-macro))
	  (setq ll (car bod) body (cdr bod))
	  (let ((doc (car (find-declarations body)))
		(def `(eval-when (compile eval load)
			(mset ',name
			    ,(parse-macro name ll  body t)))))
	    (when (stringp doc)
	      (setq def `(progn ,def
				(setf (get ',name 'si::function-documentation)
				      ,doc))))
	    def))) 


(defmacro destructuring-bind (lambda-list expr &body body)
  (let ((whole (gensym))
	*let-bindings* *pending-action*)
    (parse-mll lambda-list whole nil)
    `(let* ((,whole ,expr)
	    ,@ (nreverse *let-bindings*))
       ,@ body)))
)
#+test
(progn

(defmacro1 billy (a b &key ((:u bil) 0 sup) sil &allow-other-keys)
  `(billy-list ,a ,b ,sil ,bil,sup ,a))

(defmacro1 mwith ((st . open-args)  &body body)
  `(let (,st (open ,@ open-args))
     (unwind-protect
	 (progn ,@ body)
       (close ,st))))

(defmacro1 joe ((st a) y) `(joe-flat ,st,a,y))
(defmacro jo2 ((a b &key c d) &body body)
  (list 'hi a b c d body))
(jo2 (1 2 :c 3 ) 4 6)

(mwith (st "foo" :direction :input) (read-char st))
(billy 1 2 :sil 1 :u 4 :james 1)
(joe (1 2) 3)
)




	 

  
  