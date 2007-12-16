;;; -*- Mode: Lisp; Syntax: Common-Lisp; Package: "CONDITIONS"; Base: 10 -*-

(in-package "CONDITIONS" :USE '("LISP" #+(and clos (not pcl)) "CLOS" #+pcl "PCL"))


(eval-when (compile load eval)
	   (when (fboundp 'remove-clcs-symbols)
	     (remove-clcs-symbols)))

;DEFINE-CONDITION
;MAKE-CONDITION
;condition printing
;(define-condition CONDITION ...)
;CONDITIONP
;CONDITION-CLASS-P
;SIMPLE-CONDITION-P
;SIMPLE-CONDITION-CLASS-P


(eval-when (compile load eval)
	   (defvar *condition-class-list* nil)) ; list of (class-name initarg1 type1...)

(defun slot-sym (base slot)
  (values (intern (concatenate 'string (string base) "-" (string slot)))))

(defun coerce-to-fn (x y)
  (cond ((stringp x) `(lambda (c s) (declare (ignore c)) (write-string ,x s)))
	((symbolp x) x)
	((atom x) nil)
	((eq (car x) 'lambda) x)
	((stringp (car x))
	 `(lambda (c s) 
	    (declare (ignorable c))
	    (call-next-method)
	    (format s ,(car x) ,@(mapcar (lambda (st) `(if (slot-boundp c ',st) (,(slot-sym y st) c) 'unbound)) (cdr x)))))))

(defun default-report (x)
  `(lambda (c s) (call-next-method) (format s "~s " ',x)))

(DEFMACRO DEFINE-CONDITION (NAME PARENT-LIST SLOT-SPECS &REST OPTIONS)
  (unless (or parent-list (eq name 'condition))
	  (setq parent-list (list 'condition)))
  (let* ((REPORT-FUNCTION nil)
	 (DEFAULT-INITARGS nil)
	 (DOCUMENTATION nil))
    (DO ((O OPTIONS (CDR O)))
	((NULL O))
      (LET ((OPTION (CAR O)))
	(CASE (CAR OPTION)
	  (:REPORT (SETQ REPORT-FUNCTION (coerce-to-fn (cadr option) name)))
	  (:DEFAULT-INITARGS (SETQ DEFAULT-INITARGS OPTION)) 
	  (:DOCUMENTATION (SETQ DOCUMENTATION (CADR OPTION)))
	  (OTHERWISE (CERROR "Ignore this DEFINE-CONDITION option."
			     "Invalid DEFINE-CONDITION option: ~S" OPTION)))))
    `(progn
       (eval-when (compile)
	 (setq pcl::*defclass-times* '(compile load eval)))
       ,(if default-initargs
       `(defclass ,name ,parent-list ,slot-specs ,default-initargs)
       `(defclass ,name ,parent-list ,slot-specs))
       (eval-when (compile load eval)
	 (pushnew '(,name ,parent-list
		    ,@(mapcan (lambda (slot-spec)
				  (let* ((ia (and (consp slot-spec) (getf (cdr slot-spec) ':initarg))))
				    (when ia
				      (list
				       (cons ia
					     (or (getf (cdr slot-spec) ':type)
						 t))))))
		       SLOT-SPECS))
		  *condition-class-list*)
	 (setf (get ',name 'si::s-data) nil)
;	 (setf (get ',name 'documentation) ',documentation)
	 )
      ,@(when REPORT-FUNCTION
	   `((DEFMETHOD PRINT-OBJECT ((X ,NAME) STREAM)
	       (IF *PRINT-ESCAPE*
		   (CALL-NEXT-METHOD)
		   (,REPORT-FUNCTION X STREAM)))))
      ',NAME)))

(eval-when (compile load eval)
(define-condition condition ()
  ())

(defmethod pcl::make-load-form ((object condition) &optional env)
  (declare (ignore env))
  (error "~@<Default ~s method for ~s called.~@>"
	 'pcl::make-load-form object))

(when (fboundp 'pcl::proclaim-incompatible-superclasses)
  (mapc
   'pcl::proclaim-incompatible-superclasses
   '((condition pcl::metaobject)))))

(defun conditionp (object)
  (typep object 'condition))

(DEFMETHOD PRINT-OBJECT ((X condition) STREAM)
  (IF *PRINT-ESCAPE* 
      (FORMAT STREAM "#<~S.~D>" (class-name (class-of x)) (UNIQUE-ID x))
      (FORMAT STREAM "~A: " (TYPE-OF x))))

(defvar *condition-class* (find-class 'condition))

(defun condition-class-p (TYPE)
  (when (symbolp TYPE)
    (setq TYPE (find-class TYPE)))
  (and (typep TYPE 'standard-class)
       (member *condition-class* 
	       (pcl::class-precedence-list
		  type))))

(DEFUN MAKE-CONDITION (TYPE &REST SLOT-INITIALIZATIONS)
  (let ((tp (car (si::resolve-type type))))
    (when (and (consp tp) (eq (car tp) 'or))
      (return-from make-condition (apply 'make-condition (cadr tp) slot-initializations)))
    (unless (condition-class-p tp)
      (ERROR 'SIMPLE-TYPE-ERROR
	     :DATUM TYPE
	     :EXPECTED-TYPE '(SATISFIES condition-class-p)
	     :FORMAT-CONTROL "Not a condition type: ~S"
	     :FORMAT-ARGUMENTS (LIST TYPE)))
    (apply 'make-instance tp SLOT-INITIALIZATIONS)))

