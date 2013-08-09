;;; -*- Mode: Lisp; Syntax: Common-Lisp; Package: "CONDITIONS"; Base: 10 -*-

(IN-PACKAGE :CONDITIONS)

;;; Unique Ids

(DEFVAR *UNIQUE-ID-TABLE* (MAKE-HASH-TABLE))
(DEFVAR *UNIQUE-ID-COUNT* -1)

(DEFUN UNIQUE-ID (OBJ)
  "Generates a unique integer ID for its argument."
  (OR (GETHASH OBJ *UNIQUE-ID-TABLE*)
      (SETF (GETHASH OBJ *UNIQUE-ID-TABLE*) (INCF *UNIQUE-ID-COUNT*))))

;;; Miscellaneous Utilities

(EVAL-WHEN (EVAL COMPILE LOAD)

(DEFUN PARSE-KEYWORD-PAIRS (LIST KEYS)
  (DO ((L LIST (CDDR L))
       (K '() (LIST* (CADR L) (CAR L) K)))
      ((OR (NULL L) (NOT (MEMBER (CAR L) KEYS)))
       (VALUES (NREVERSE K) L))))

(DEFMACRO WITH-KEYWORD-PAIRS ((NAMES EXPRESSION &OPTIONAL KEYWORDS-VAR) &BODY FORMS)
  (LET ((TEMP (MEMBER '&REST NAMES)))
    (UNLESS (= (LENGTH TEMP) 2) (ERROR "&REST keyword is ~:[missing~;misplaced~]." TEMP))
    (LET ((KEY-VARS (LDIFF NAMES TEMP))
          (KEY-VAR (OR KEYWORDS-VAR (GENSYM)))
          (REST-VAR (CADR TEMP)))
      (LET ((KEYWORDS (MAPCAR #'(LAMBDA (X) (INTERN (STRING X) (FIND-PACKAGE "KEYWORD")))
			      KEY-VARS)))
        `(MULTIPLE-VALUE-BIND (,KEY-VAR ,REST-VAR)
             (PARSE-KEYWORD-PAIRS ,EXPRESSION ',KEYWORDS)
           (LET ,(MAPCAR #'(LAMBDA (VAR KEYWORD) `(,VAR (GETF ,KEY-VAR ,KEYWORD)))
                                 KEY-VARS KEYWORDS)
             ,@FORMS))))))

);NEHW-LAVE

;;; Restarts

(DEFVAR *RESTART-CLUSTERS* '())
;;;  An ALIST (condition . restarts) which records the restarts currently
;;; associated with Condition.
;;;
(defvar *condition-restarts* ())


(DEFUN COMPUTE-RESTARTS (&optional condition)
;  #+kcl (nconc (mapcan #'copy-list *RESTART-CLUSTERS*) (kcl-top-restarts))
;  #-kcl (mapcan #'copy-list *RESTART-CLUSTERS*))
  (let ((associated ())
	(other ()))
    (dolist (alist *condition-restarts*)
      (if (eq (car alist) condition)
	  (setq associated (cdr alist))
	  (setq other (append (cdr alist) other))))
    (let ((res '()))
      (dolist (restart-cluster *restart-clusters*)
	(dolist (restart restart-cluster)
	  (when (and (or (not condition)
			 (member restart associated)
			 (not (member restart other)))
		     (funcall (restart-test-function restart) condition))
	    (push restart res))))
      (nconc (nreverse res) (kcl-top-restarts)))))
;      (nreverse res))))

(defmacro with-condition-restarts (condition-form restarts-form &body body)
  "WITH-CONDITION-RESTARTS Condition-Form Restarts-Form Form*
   Evaluates the Forms in a dynamic environment where the restarts in the list
   Restarts-Form are associated with the condition returned by Condition-Form.
   This allows FIND-RESTART, etc., to recognize restarts that are not related
   to the error currently being debugged.  See also RESTART-CASE."
  (declare (optimize (safety 1)))
  (let ((n-cond (gensym)))
    `(let ((*condition-restarts*
	    (cons (let ((,n-cond ,condition-form))
		    (cons ,n-cond
			  (append ,restarts-form
				  (cdr (assoc ,n-cond *condition-restarts*)))))
		  *condition-restarts*)))
       ,@body)))

(DEFUN RESTART-PRINT (RESTART STREAM DEPTH)
  (DECLARE (IGNORE DEPTH))
  (IF *PRINT-ESCAPE*
      (FORMAT STREAM "#<~S.~D>" (TYPE-OF RESTART) (UNIQUE-ID RESTART))
      (RESTART-REPORT RESTART STREAM)))

(DEFSTRUCT (RESTART (:PRINT-FUNCTION RESTART-PRINT))
  NAME
  FUNCTION
  REPORT-FUNCTION
  INTERACTIVE-FUNCTION
  (test-function #'(lambda (cond) (declare (ignore cond)) t)))

#+kcl
(progn
(defvar *kcl-top-restarts* nil)

(defun make-kcl-top-restart (quit-tag)
  (make-restart :name 'gcl-top-restart
		:function (lambda () (throw (car (list quit-tag)) quit-tag))
		:report-function 
		#'(lambda (stream) 
		    (let ((b-l (if (eq quit-tag si::*quit-tag*)
				   si::*break-level*
				   (car (or (find quit-tag si::*quit-tags*
						  :key #'cdr)
					    '(:not-found))))))
		      (cond ((eq b-l :not-found)
			     (format stream "Return to ? level."))
			    ((null b-l)
			     (format stream "Return to top level."))
			    (t
			     (format stream "Return to break level ~D."
				     (length b-l))))))
		:interactive-function nil))

(defun find-kcl-top-restart (quit-tag)
  (cdr (or (assoc quit-tag *kcl-top-restarts*)
	   (car (push (cons quit-tag (make-kcl-top-restart quit-tag))
		      *kcl-top-restarts*)))))

(defun kcl-top-restarts ()
  (let* ((old-tags (mapcan (lambda (e) (when (cdr e) (list (cdr e)))) si::*quit-tags*))
	 (tags (if si::*quit-tag* (cons si::*quit-tag* old-tags) old-tags))
	 (restarts (mapcar 'find-kcl-top-restart tags)))
    (setq *kcl-top-restarts* (mapcar 'cons tags restarts))
    restarts)))  

(DEFUN RESTART-REPORT (RESTART STREAM)
  (FUNCALL (OR (RESTART-REPORT-FUNCTION RESTART)
               (LET ((NAME (RESTART-NAME RESTART)))
		 #'(LAMBDA (STREAM)
		     (IF NAME (FORMAT STREAM "~S" NAME)
			      (FORMAT STREAM "~S" RESTART)))))
           STREAM))

(DEFMACRO RESTART-BIND (BINDINGS &BODY FORMS)
  (declare (optimize (safety 2)))
  `(LET ((*RESTART-CLUSTERS* (CONS (LIST ,@(MAPCAR #'(LAMBDA (BINDING)
						       `(MAKE-RESTART
							  :NAME     ',(CAR BINDING)
							  :FUNCTION ,(CADR BINDING)
							  ,@(CDDR BINDING)))
						   BINDINGS))
				   *RESTART-CLUSTERS*)))
     ,@FORMS))

(DEFUN FIND-RESTART (NAME &optional condition)
  (let ((rl (compute-restarts condition)))
    (dolist (restart rl)
      (when (or (eq restart name) (eq (restart-name restart) name))
	(return-from find-restart restart)))))
;  (declare (ignore condition))
;  (DOLIST (RESTART-CLUSTER *RESTART-CLUSTERS*)
;    (DOLIST (RESTART RESTART-CLUSTER)
;      (WHEN (OR (EQ RESTART NAME) (EQ (RESTART-NAME RESTART) NAME))
;	(RETURN-FROM FIND-RESTART RESTART))))
;  #+kcl 
;  (let ((RESTART-CLUSTER (kcl-top-restarts)))
;    (DOLIST (RESTART RESTART-CLUSTER)
;      (WHEN (OR (EQ RESTART NAME) (EQ (RESTART-NAME RESTART) NAME))
;	(RETURN-FROM FIND-RESTART RESTART)))))
  
(DEFUN INVOKE-RESTART (RESTART &REST VALUES)
  (LET ((REAL-RESTART (OR (FIND-RESTART RESTART)
			  (error 'control-error :format-control "Restart ~S is not active." :format-arguments (list restart)))))
       (APPLY (RESTART-FUNCTION REAL-RESTART) VALUES)))

(DEFUN INVOKE-RESTART-INTERACTIVELY (RESTART)
  (LET ((REAL-RESTART (OR (FIND-RESTART RESTART)
			  (ERROR "Restart ~S is not active." RESTART))))
    (APPLY (RESTART-FUNCTION REAL-RESTART)
	   (LET ((INTERACTIVE-FUNCTION
		   (RESTART-INTERACTIVE-FUNCTION REAL-RESTART)))
	     (IF INTERACTIVE-FUNCTION
		 (FUNCALL INTERACTIVE-FUNCTION)
		 '())))))

(eval-when (compile load eval)
;;; Wrap the restart-case expression in a with-condition-restarts if
;;; appropriate.  Gross, but it's what the book seems to say...
;;;
(defmacro once-only (specs &body body)
  "Once-Only ({(Var Value-Expression)}*) Form*
  Create a Let* which evaluates each Value-Expression, binding a temporary
  variable to the result, and wrapping the Let* around the result of the
  evaluation of Body.  Within the body, each Var is bound to the corresponding
  temporary variable."
  (LABELS ((FROB (SPECS BODY)
           (IF (NULL SPECS)
               `(PROGN ,@BODY)
               (LET ((SPEC (FIRST SPECS)))
                 (WHEN (/= (LENGTH SPEC) 2)
                   (ERROR "Malformed Once-Only binding spec: ~S." SPEC))
                 (LET ((NAME (FIRST SPEC)) (EXP-TEMP (GENSYM)))
                   `(LET ((,EXP-TEMP ,(SECOND SPEC)) (,NAME (GENSYM "OO-")))
                      `(LET ((,,NAME ,,EXP-TEMP))
                         ,,(FROB (REST SPECS) BODY))))))))
  (FROB SPECS BODY))))

(defun munge-restart-case-expression (expression data env)
  (declare (ignorable data))
  (let ((exp (macroexpand expression env)))
    (if (consp exp)
	(let* ((name (car exp))
	       (args (if (eq name 'cerror) (cddr exp) (cdr exp))))
	  (cond ((member name '(error cerror))
		 (once-only ((n-cond `(si::process-error
				       ,(first args)
				       (list ,@(rest args))
				       ',name
				       ',(case name
					       (warn 'simple-warning)
					       (signal 'simple-condition)
					       (t 'simple-error)))))
			    `(with-condition-restarts
			      ,n-cond (car *restart-clusters*)
;			      (list ,@(mapcar (lambda (da) `(find-restart ',(nth 0 da)))
;					      data))
			      ,(if (eq name 'cerror)
				   `(cerror ,(second expression) ,n-cond)
				 `(,name ,n-cond)))))
		((member name '(signal warn))
		 (once-only ((n-cond `(coerce-to-condition
				       ,(first args)
				       (list ,@(rest args))
				       ',(case name
					       (warn 'simple-warning)
					       (signal 'simple-condition)
					       (t 'simple-error))
				       ',name)))
			    `(with-condition-restarts
			      ,n-cond (car *restart-clusters*)
;			      (list ,@(mapcar (lambda (da) `(find-restart ',(nth 0 da)))
;					      data))
			      ,(if (eq name 'cerror)
				   `(cerror ,(second expression) ,n-cond)
				 `(,name ,n-cond)))))
	      (expression)))
      expression)))

(DEFMACRO RESTART-CASE (EXPRESSION &BODY CLAUSES &environment env)
  (declare (optimize (safety 2)))
  (FLET ((TRANSFORM-KEYWORDS (&KEY REPORT INTERACTIVE TEST)
	   (LET ((RESULT '()))
	     (WHEN REPORT
	       (SETQ RESULT (LIST* (IF (STRINGP REPORT)
				       `#'(LAMBDA (STREAM)
					    (WRITE-STRING ,REPORT STREAM))
				       `#',REPORT)
				   :REPORT-FUNCTION
				   RESULT)))
	     (WHEN INTERACTIVE
	       (SETQ RESULT (LIST* `#',INTERACTIVE
				   :INTERACTIVE-FUNCTION
				   RESULT)))
	     (when test
	       (setq result (list* `#',test
				   :test-function
				   result)))
	     (NREVERSE RESULT))))
    (LET ((BLOCK-TAG (GENSYM))
	  (TEMP-VAR  (GENSYM))
	  (DATA
	    (MAPCAR #'(LAMBDA (CLAUSE)
			(WITH-KEYWORD-PAIRS ((REPORT INTERACTIVE TEST &REST FORMS)
					     (CDDR CLAUSE))
			  (LIST (CAR CLAUSE)			   ;Name=0
				(GENSYM)			   ;Tag=1
				(TRANSFORM-KEYWORDS :REPORT REPORT ;Keywords=2
						    :INTERACTIVE INTERACTIVE
						    :TEST TEST)
				(CADR CLAUSE)			   ;BVL=3
				FORMS)))			   ;Body=4
		    CLAUSES)))
      `(BLOCK ,BLOCK-TAG
	 (LET ((,TEMP-VAR NIL))
	   (TAGBODY
	     (RESTART-BIND
	       ,(MAPCAR #'(LAMBDA (DATUM)
			    (LET ((NAME (NTH 0 DATUM))
				  (TAG  (NTH 1 DATUM))
				  (KEYS (NTH 2 DATUM)))
			      `(,NAME #'(LAMBDA (&REST TEMP)
					  #+LISPM (SETQ TEMP (COPY-LIST TEMP))
					  (SETQ ,TEMP-VAR TEMP)
					  (GO ,TAG))
				,@KEYS)))
			DATA)
	       (RETURN-FROM ,BLOCK-TAG ,(munge-restart-case-expression EXPRESSION data env)))
	     ,@(MAPCAN #'(LAMBDA (DATUM)
			   (LET ((TAG  (NTH 1 DATUM))
				 (BVL  (NTH 3 DATUM))
				 (BODY (NTH 4 DATUM)))
			     (LIST TAG
				   `(RETURN-FROM ,BLOCK-TAG
				      (APPLY #'(LAMBDA ,BVL ,@BODY)
					     ,TEMP-VAR)))))
		       DATA)))))))

(DEFMACRO WITH-SIMPLE-RESTART ((RESTART-NAME FORMAT-CONTROL
					     &REST FORMAT-ARGUMENTS)
			       &BODY FORMS)
  (declare (optimize (safety 1)))
  `(RESTART-CASE (PROGN ,@FORMS)
     (,RESTART-NAME ()
        :REPORT (LAMBDA (STREAM)
		  (FORMAT STREAM ,FORMAT-CONTROL ,@FORMAT-ARGUMENTS))
      (VALUES NIL T))))

;(DEFUN ABORT          (&optional condition)      (INVOKE-RESTART (find-restart 'ABORT condition))
;       			      (ERROR 'ABORT-FAILURE))
;(DEFUN CONTINUE       ()      (INVOKE-RESTART 'CONTINUE))
;(DEFUN MUFFLE-WARNING ()      (INVOKE-RESTART 'MUFFLE-WARNING))
;(DEFUN STORE-VALUE    (VALUE) (INVOKE-RESTART 'STORE-VALUE VALUE))
;(DEFUN USE-VALUE      (VALUE) (INVOKE-RESTART 'USE-VALUE   VALUE))

;;; ABORT signals an error in case there was a restart named abort that did
;;; not tranfer control dynamically.  This could happen with RESTART-BIND.
;;;
(defun abort (&optional condition)
  "Transfers control to a restart named abort, signalling a control-error if
   none exists."
  (invoke-restart (find-restart 'abort condition))
  (error 'abort-failure))


(defun muffle-warning (&optional condition)
  "Transfers control to a restart named muffle-warning, signalling a
   control-error if none exists."
  (invoke-restart (find-restart 'muffle-warning condition)))


;;; DEFINE-NIL-RETURNING-RESTART finds the restart before invoking it to keep
;;; INVOKE-RESTART from signalling a control-error condition.
;;;
(defmacro define-nil-returning-restart (name args doc)
  (let ((restart (gensym)))
  `(defun ,name (,@args &optional condition)
     ,doc
     (declare (optimize (safety 1)))
     (let ((,restart (find-restart ',name condition))) (when ,restart (invoke-restart ,restart ,@args))))))

(define-nil-returning-restart continue ()
  "Transfer control to a restart named continue, returning nil if none exists.")

(define-nil-returning-restart store-value (value)
  "Transfer control and value to a restart named store-value, returning nil if
   none exists.")

(define-nil-returning-restart use-value (value)
  "Transfer control and value to a restart named use-value, returning nil if
   none exists.")
