;;; -*- Mode: Lisp; Syntax: Common-Lisp; Package: "CONDITIONS"; Base: 10 -*-

(IN-PACKAGE "CONDITIONS")

(DEFVAR *HANDLER-CLUSTERS* NIL)

(import 'si::list-of 'conditions)
(import 'si::proper-list 'conditions)
(DEFMACRO HANDLER-BIND (BINDINGS &BODY FORMS)
  (declare (optimize (safety 1)))
  (check-type bindings (list-of proper-list))
  (UNLESS (EVERY #'(LAMBDA (X) (AND (LISTP X) (= (LENGTH X) 2))) BINDINGS)
    (ERROR "Ill-formed handler bindings."))
  `(LET ((*HANDLER-CLUSTERS* (CONS (LIST ,@(MAPCAR #'(LAMBDA (X) `(CONS ',(CAR X) ,(CADR X)))
						   BINDINGS))
				   *HANDLER-CLUSTERS*)))
     ,@FORMS))

(DEFVAR *BREAK-ON-SIGNALS* NIL)

(DEFUN SIGNAL (DATUM &REST ARGUMENTS)
  (declare (optimize (safety 1)))
  (LET ((CONDITION (COERCE-TO-CONDITION DATUM ARGUMENTS 'SIMPLE-CONDITION 'SIGNAL))
        (*HANDLER-CLUSTERS* *HANDLER-CLUSTERS*))
    (IF (TYPEP CONDITION *BREAK-ON-SIGNALS*)
	(BREAK "~A~%Break entered because of *BREAK-ON-SIGNALS*."
	       CONDITION))
    (LOOP (IF (NOT *HANDLER-CLUSTERS*) (RETURN))
          (LET ((CLUSTER (POP *HANDLER-CLUSTERS*)))
	    (DOLIST (HANDLER CLUSTER)
	      (WHEN (TYPEP CONDITION (CAR HANDLER))
		    (FUNCALL (CDR HANDLER) CONDITION)
;		(RETURN NIL) ;?
		))))
    NIL))

;;; COERCE-TO-CONDITION
;;;  Internal routine used in ERROR, CERROR, BREAK, and WARN for parsing the
;;;  hairy argument conventions into a single argument that's directly usable 
;;;  by all the other routines.

(DEFUN COERCE-TO-CONDITION (DATUM ARGUMENTS DEFAULT-TYPE FUNCTION-NAME)
  (COND ((CONDITIONP DATUM)
	 (IF ARGUMENTS
	     (CERROR "Ignore the additional arguments."
		     'SIMPLE-TYPE-ERROR
		     :DATUM ARGUMENTS
		     :EXPECTED-TYPE 'NULL
		     :FORMAT-CONTROL "You may not supply additional arguments ~
				     when giving ~S to ~S."
		     :FORMAT-ARGUMENTS (LIST DATUM FUNCTION-NAME)))
	 DATUM)
        ((OR (SYMBOLP DATUM) (CONDITION-CLASS-P DATUM))
         (APPLY 'MAKE-CONDITION DATUM ARGUMENTS))	 
        ((STRINGP DATUM)
	 (MAKE-CONDITION DEFAULT-TYPE
                         :FORMAT-CONTROL DATUM
                         :FORMAT-ARGUMENTS ARGUMENTS))
	((functionp datum)
	 (MAKE-CONDITION DEFAULT-TYPE
                         :FORMAT-CONTROL DATUM
                         :FORMAT-ARGUMENTS ARGUMENTS))
        (T
         (ERROR 'SIMPLE-TYPE-ERROR
		:DATUM DATUM
		:EXPECTED-TYPE '(OR SYMBOL STRING)
		:FORMAT-CONTROL "Bad argument to ~S: ~S"
		:FORMAT-ARGUMENTS (LIST FUNCTION-NAME DATUM)))))

;; (DEFUN ERROR (DATUM &REST ARGUMENTS)
;;   (LET ((CONDITION (COERCE-TO-CONDITION DATUM ARGUMENTS 'SIMPLE-ERROR 'ERROR)))
;;     (SIGNAL CONDITION)
;;     (INVOKE-DEBUGGER CONDITION)
;;     (throw si::*quit-tag* nil)))

;; (DEFUN CERROR (CONTINUE-STRING DATUM &REST ARGUMENTS)
;;   (WITH-SIMPLE-RESTART (CONTINUE "~A" (APPLY #'FORMAT NIL CONTINUE-STRING ARGUMENTS))
;;     (APPLY #'ERROR DATUM ARGUMENTS))
;;   NIL)

;; (DEFUN BREAK (&OPTIONAL (FORMAT-CONTROL "Break") &REST FORMAT-ARGUMENTS)
;;   (WITH-SIMPLE-RESTART (CONTINUE "Return from BREAK.")
;;     (INVOKE-DEBUGGER
;;       (MAKE-CONDITION 'SIMPLE-CONDITION
;; 		      :FORMAT-CONTROL    FORMAT-CONTROL
;; 		      :FORMAT-ARGUMENTS FORMAT-ARGUMENTS)))
;;   NIL)

(DEFUN WARN (DATUM &REST ARGUMENTS)
  (declare (optimize (safety 1)))
  (LET ((CONDITION
	  (COERCE-TO-CONDITION DATUM ARGUMENTS 'SIMPLE-WARNING 'WARN)))
    (CHECK-TYPE CONDITION WARNING "a warning condition")
    (IF *BREAK-ON-WARNINGS*
	(BREAK "~A~%Break entered because of *BREAK-ON-WARNINGS*."
	       CONDITION))
    (RESTART-CASE (SIGNAL CONDITION)
      (MUFFLE-WARNING ()
	  :REPORT "Skip warning."
	(RETURN-FROM WARN NIL)))
    (FORMAT *ERROR-OUTPUT* "~&Warning:~A~%" CONDITION)
    NIL))

(DEFMACRO HANDLER-CASE (FORM &REST CASES)
  (declare (optimize (safety 1)))
  (check-type cases (list-of proper-list))
  (LET ((NO-ERROR-CLAUSE (ASSOC ':NO-ERROR CASES)))
    (IF NO-ERROR-CLAUSE
	(LET ((NORMAL-RETURN (MAKE-SYMBOL "NORMAL-RETURN"))
	      (ERROR-RETURN  (MAKE-SYMBOL "ERROR-RETURN")))
	  `(BLOCK ,ERROR-RETURN
	     (MULTIPLE-VALUE-CALL #'(LAMBDA ,@(CDR NO-ERROR-CLAUSE))
	       (BLOCK ,NORMAL-RETURN
		 (RETURN-FROM ,ERROR-RETURN
		   (HANDLER-CASE (RETURN-FROM ,NORMAL-RETURN ,FORM)
		     ,@(REMOVE NO-ERROR-CLAUSE CASES)))))))
	(LET ((TAG (GENSYM))
	      (VAR (GENSYM))
	      (ANNOTATED-CASES (MAPCAR #'(LAMBDA (CASE) (CONS (GENSYM) CASE))
				       CASES)))
	  `(BLOCK ,TAG
	     (LET ((,VAR NIL))
	       ,VAR				;ignorable
	       (TAGBODY
		 (HANDLER-BIND ,(MAPCAR #'(LAMBDA (ANNOTATED-CASE)
					    (LIST (CADR ANNOTATED-CASE)
						  `#'(LAMBDA (TEMP)
						       ,@(IF (CADDR ANNOTATED-CASE)
							     `((SETQ ,VAR TEMP)))
						       (GO ,(CAR ANNOTATED-CASE)))))
					ANNOTATED-CASES)
			       (RETURN-FROM ,TAG ,FORM))
		 ,@(MAPCAN #'(LAMBDA (ANNOTATED-CASE)
			       (LIST (CAR ANNOTATED-CASE)
				     (LET ((BODY (CDDDR ANNOTATED-CASE)))
				       `(RETURN-FROM ,TAG
					  ,(COND ((CADDR ANNOTATED-CASE)
						  `(LET ((,(CAADDR ANNOTATED-CASE)
							  ,VAR))
						     ,@BODY))
						 ((NOT (CDR BODY))
						  `(let nil ,(CAR BODY)))
						 (T
						  `(let nil ,@BODY)))))))
			   ANNOTATED-CASES))))))))

(DEFMACRO IGNORE-ERRORS (&REST FORMS)
  (declare (optimize (safety 1)))
  `(HANDLER-CASE (PROGN ,@FORMS)
     (ERROR (CONDITION) (VALUES NIL CONDITION))))

;#+pcl
;(defun conditions::find-class-no-error (object)
;  (ignore-errors (find-class object)))
 
