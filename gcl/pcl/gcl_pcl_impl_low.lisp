(in-package :si)
(export '(%structure-name
          %compiled-function-name
          %set-compiled-function-name))
(in-package :pcl)
(eval-when
 (compile eval load)
 (setq  *EVAL-WHEN-COMPILE* t))

(defun %%allocate-instance--class (&aux wrapper slots)
  (let ((i (system:make-structure 'std-instance wrapper slots)))
    (c::set-d-tt 1 i)
    i))

(import '(si::memq) 'pcl)
(defmacro assq (item list) `(assoc ,item ,list :test #'eq))
(defmacro posq (item list) `(position ,item ,list :test #'eq))

(defun printing-random-thing-internal (thing stream)
  (format stream "~O" (si:address thing)))


(defmacro %svref (vector index)
  `(svref (the simple-vector ,vector) (the fixnum ,index)))

(defsetf %svref (vector index) (new-value)
  `(setf (svref (the simple-vector ,vector) (the fixnum ,index))
         ,new-value))

(si::freeze-defstruct 'pcl::std-instance)

(si::freeze-defstruct 'method-call)
(si::freeze-defstruct 'fast-method-call)


(defmacro fmc-funcall (fn pv-cell next-method-call &rest args)
  `(funcall ,fn ,pv-cell ,next-method-call ,@args))

(defun pcl::proclaim-defmethod (x y)
  (declare (ignore y))
  (and (symbolp x)
       (setf (get x 'compiler::proclaimed-closure ) t)))


(import 'si::seqind)


(defun %cclosure-env-nthcdr (n f)
  (c::function-env f n))


(defun cclosurep (x) (typecase x (compiled-function t)))

(defun %cclosure-env (f)
  (declare (inline c::fn-env))
  (compiler::fn-env f))




(defconstant funcallable-instance-closure-size 15)



(defun allocate-funcallable-instance-2 ()
  (let (dummy)
    (lambda (&rest args)
      (declare (ignore args))
      (called-fin-without-function)
      (values-list (make-dummy-list (setq dummy (make-dummy-var)))))))

(defun allocate-funcallable-instance-1 ()
  (let ((fin (allocate-funcallable-instance-2))
	(env (make-list funcallable-instance-closure-size :initial-element nil)))
    (si::set-function-environment fin env)
    (c::set-d-tt 1 fin)
    fin))

(defun funcallable-instance-p (x)
  (si::lit :boolean "fto(" (:object x) ")==" (:fixnum #.(let ((x (lambda nil nil))) (c::set-d-tt 1 x) (compiler::tt3 x)))))
(declaim (inline funcallable-instance-p))




(defun si:%structure-name (x) (si::lit :object "(" (:object x) ")->str.str_def->str.str_self[0]"))
(defun %fboundp (x) (/= 0 (si::address (c::symbol-gfdef x))))
(declaim (inline si:%structure-name %fboundp))



(defun set-function-name-1 (fn new-name ignore)
  (declare (ignore ignore))
  (cond ((compiled-function-p fn)
	 (when (symbolp new-name) (pcl::proclaim-defmethod new-name nil))
	 (setf (si::call-name (c::function-plist fn)) new-name))
        ((and (listp fn)
              (eq (car fn) 'lambda-block))
         (setf (cadr fn) new-name))
        ((and (listp fn)
              (eq (car fn) 'lambda))
         (setf (car fn) 'lambda-block
               (cdr fn) (cons new-name (cdr fn)))))
  fn)

(defun %set-cclosure (r v s)
  (declare (fixnum s))
  (unless (typep r 'compiled-function)
    (error "Bad fn 1"))
  (unless (typep v 'compiled-function)
    (error "Bad fn 1"))
  (si::use-fast-links nil r)
  (progn (compiler::side-effects) (compiler::lit :object (:object r) "->fun.fun_self=" (:object v) "->fun.fun_self"));FIXME
  (c::set-function-minarg (c::function-minarg v) r)
  (c::set-function-maxarg (c::function-maxarg v) r)
  (c::set-function-neval  (c::function-neval v) r)
  (c::set-function-vv     (c::function-vv v) r)
  (c::set-function-data   (c::function-data v) r)
  (c::set-function-plist  (c::function-plist v) r)
  (c::set-function-argd   (c::function-argd v) r)
  (let* ((ve (%cclosure-env v))
	 (l (- (length ve) s))
	 (ve (if (> l 0) (butlast ve l) ve)))
    (maplist (lambda (x y) (setf (car x) (car y))) (%cclosure-env r) ve)))




(defun structure-functions-exist-p ()
  t)

(si:define-compiler-macro structure-instance-p (x)
  (once-only (x)
    `(and (si:structurep ,x)
          (not (eq (si:%structure-name ,x) 'std-instance)))))

(defun structure-type (x)
  (and (si:structurep x)
       (si:%structure-name x)))

(si:define-compiler-macro structure-type (x)
  (once-only (x)
    `(and (si:structurep ,x)
          (si:%structure-name ,x))))


(defun structure-type-included-type-name (type)
  (or (car (gethash type *structure-table*))
      (let ((includes (si::s-data-includes (get type 'si::s-data))))
	(when includes
	  (si::s-data-name includes)))))

(defun structure-type-internal-slotds (type)
   (si::s-data-slot-descriptions (get type 'si::s-data)))

(defun structure-type-slot-description-list (type)
  (or (cdr (gethash type *structure-table*))
      (mapcan (lambda (slotd)
		(when (and slotd (car slotd))
		  (let ((offset (fifth slotd)))
		    (let ((reader (lambda (x) (si:structure-ref1 x offset)))
			  (writer (lambda (v x) (si:structure-set x type offset v))))
		      (let* ((reader-sym 
			      (let ((*package* *the-pcl-package*))
				(intern (format nil "~s SLOT~D" type offset))))
			     (writer-sym (get-setf-function-name reader-sym))
			     (slot-name (first slotd)))
			(setf (symbol-function reader-sym) reader)
			(setf (symbol-function writer-sym) writer)
			(do-standard-defsetf-1 reader-sym)
			(list (list slot-name
				    (find-symbol (concatenate 'string (symbol-name type) "-" (symbol-name slot-name)) 
						 (or (symbol-package type) *package*))
				    reader-sym
				    writer
				    (third slotd)
				    (second slotd))))))))
              (let ((slotds (structure-type-internal-slotds type))
                    (inc (structure-type-included-type-name type)))
                (if inc
                    (nthcdr (length (structure-type-internal-slotds inc)) slotds)
		  slotds)))))

(defun structure-slotd-name (slotd)
  (first slotd))

(defun structure-slotd-accessor-symbol (slotd)
  (second slotd))

(defun structure-slotd-reader-function (slotd)
  (third slotd))

(defun structure-slotd-writer-function (slotd)
  (fourth slotd))

(defun structure-slotd-type (slotd)
  (fifth slotd))

(defun structure-slotd-init-form (slotd)
  (sixth slotd))

(defun renew-sys-files()
  ;; packages:
  (compiler::get-packages "sys-package.lisp")
  (with-open-file (st "sys-package.lisp"
			  :direction :output
			  :if-exists :append)
	(format st "(lisp::in-package \"SI\")
(export '(%structure-name
          %compiled-function-name
          %set-compiled-function-name))
(in-package \"PCL\")
"))

  ;; proclaims
  (compiler::make-all-proclaims "*.fn")
  (with-open-file (st "sys-proclaim.lisp"
		      :direction :output
		      :if-exists :append)
    (format st "~%(IN-PACKAGE \"PCL\")~%")
    (print
     `(dolist (v ',
     
	       (sloop::sloop for v in-package "PCL"
			     when (get v 'compiler::proclaimed-closure)
			     collect v))
	(setf (get v 'compiler::proclaimed-closure) t))
     st)
    (format st "~%")
))

	
		 
