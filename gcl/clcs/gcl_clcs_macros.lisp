;;; -*- Mode: Lisp; Syntax: Common-Lisp; Package: "CONDITIONS"; Base: 10 -*-

(IN-PACKAGE "CONDITIONS")

(EVAL-WHEN (EVAL COMPILE LOAD)

(DEFUN ACCUMULATE-CASES (MACRO-NAME CASES LIST-IS-ATOM-P)
  (DO ((L '())
       (C CASES (CDR C)))
      ((NULL C) (NREVERSE L))
      (check-type (car c) cons)
      (LET ((KEYS (CAAR C)))
	   (COND ((ATOM KEYS)
		  (COND ((NULL KEYS))
			((MEMBER KEYS '(OTHERWISE T))
			 (IF (NOT (MEMBER MACRO-NAME '( ECASE CCASE ETYPECASE CTYPECASE)))
			     (ERROR "OTHERWISE is not allowed in ~S expressions." MACRO-NAME))
			   (PUSH (LIST KEYS) L))
			(T (PUSH KEYS L))))
		 (LIST-IS-ATOM-P
		  (PUSH KEYS L))
		 (T (DOLIST (KEY KEYS) (PUSH KEY L)))))))
);NEHW-LAVE

;(DEFUN ESCAPE-SPECIAL-CASES (CASES)
;  (DO ((L '())
;       (C CASES (CDR C)))
;      ((NULL C) (NREVERSE L))
;      (LET ((KEYS (CAAR C)))
;	   (COND ((ATOM KEYS)
;		  (COND ((NULL KEYS))
;			((MEMBER KEYS '(OTHERWISE T))
;			  (PUSH (CONS (LIST KEYS) (CDR (CAR C))) L))
;			(T (PUSH (CONS KEYS (CDR (CAR C))) L))))
;		 (T
;		  (PUSH (CONS KEYS (CDR (CAR C))) L))))))

(DEFUN ESCAPE-SPECIAL-CASES-REPLACE (CASES)
  (DO ((C CASES (CDR C)))
      ((NULL C) CASES)
      (LET ((KEYS (CAAR C)))
	   (IF (MEMBER KEYS '(OTHERWISE T))
	       (RPLACA (CAR C) (LIST KEYS))))))

(DEFMACRO ECASE (KEYFORM &REST CASES)
  (declare (optimize (safety 1)))
  (LET ((KEYS (ACCUMULATE-CASES 'ECASE CASES NIL))
	(NCASES (ESCAPE-SPECIAL-CASES-REPLACE CASES))
	(VAR (GENSYM)))
    `(LET ((,VAR ,KEYFORM))
       (CASE ,VAR
	 ,@NCASES
	 (OTHERWISE
	   (ERROR 'CASE-FAILURE :NAME 'ECASE
		  		:DATUM ,VAR
				:EXPECTED-TYPE '(MEMBER ,@KEYS)
				:POSSIBILITIES ',KEYS))))))

(DEFMACRO CCASE (KEYPLACE &REST CASES)
  (declare (optimize (safety 1)))
  (LET ((KEYS (ACCUMULATE-CASES 'CCASE CASES NIL))
	(NCASES (ESCAPE-SPECIAL-CASES-REPLACE CASES))
	(TAG1 (GENSYM))
	(TAG2 (GENSYM)))
    `(BLOCK ,TAG1
       (TAGBODY ,TAG2
	 (RETURN-FROM ,TAG1
	   (CASE ,KEYPLACE
	     ,@NCASES
	     (OTHERWISE
	       (RESTART-CASE (ERROR 'CASE-FAILURE
				    :NAME 'CCASE
				    :DATUM ,KEYPLACE
				    :EXPECTED-TYPE '(MEMBER ,@KEYS)
				    :POSSIBILITIES ',KEYS)
		 (STORE-VALUE (VALUE)
		     :REPORT (LAMBDA (STREAM)
			       (FORMAT STREAM "Supply a new value of ~S."
				       ',KEYPLACE))
		     :INTERACTIVE READ-EVALUATED-FORM
		   (SETF ,KEYPLACE VALUE)
		   (GO ,TAG2))))))))))

(DEFMACRO ETYPECASE (KEYFORM &REST CASES)
  (declare (optimize (safety 1)))
  (LET ((TYPES (ACCUMULATE-CASES 'ETYPECASE CASES T))
	(VAR (GENSYM)))
    `(LET ((,VAR ,KEYFORM))
       (TYPECASE ,VAR
	 ,@CASES
	 (OTHERWISE
	   (ERROR 'CASE-FAILURE :NAME 'ETYPECASE
		  		:DATUM ,VAR
				:EXPECTED-TYPE '(OR ,@TYPES)
				:POSSIBILITIES ',TYPES))))))

(DEFMACRO CTYPECASE (KEYPLACE &REST CASES)
  (declare (optimize (safety 1)))
  (LET ((TYPES (ACCUMULATE-CASES 'CTYPECASE CASES T))
	(TAG1 (GENSYM))
	(TAG2 (GENSYM)))
    `(BLOCK ,TAG1
       (TAGBODY ,TAG2
	 (RETURN-FROM ,TAG1
	   (TYPECASE ,KEYPLACE
	     ,@CASES
	     (OTHERWISE
	       (RESTART-CASE (ERROR 'CASE-FAILURE
				    :NAME 'CTYPECASE
				    :DATUM ,KEYPLACE
				    :EXPECTED-TYPE '(OR ,@TYPES)
				    :POSSIBILITIES ',TYPES)
		 (STORE-VALUE (VALUE)
		     :REPORT (LAMBDA (STREAM)
			       (FORMAT STREAM "Supply a new value of ~S."
				       ',KEYPLACE))
		     :INTERACTIVE READ-EVALUATED-FORM
		   (SETF ,KEYPLACE VALUE)
		   (GO ,TAG2))))))))))

(DEFUN ASSERT-REPORT (NAMES STREAM)
  (FORMAT STREAM "Retry assertion")
  (IF NAMES
      (FORMAT STREAM " with new value~P for ~{~S~^, ~}."
	      (LENGTH NAMES) NAMES)
      (FORMAT STREAM ".")))

(DEFUN ASSERT-PROMPT (NAME VALUE)
  (COND ((Y-OR-N-P "The old value of ~S is ~S.~
		  ~%Do you want to supply a new value? "
		   NAME VALUE)
	 (FORMAT *QUERY-IO* "~&Type a form to be evaluated:~%")
	 (FLET ((READ-IT () (EVAL (READ *QUERY-IO*))))
	   (IF (SYMBOLP NAME) ;Help user debug lexical variables
	       (PROGV (LIST NAME) (LIST VALUE) (READ-IT))
	       (READ-IT))))
	(T VALUE)))

(DEFUN SIMPLE-ASSERTION-FAILURE (ASSERTION)
  (ERROR 'SIMPLE-TYPE-ERROR
	 :DATUM ASSERTION
	 :EXPECTED-TYPE '(not null)			; This needs some work in next revision. -kmp
	 :FORMAT-CONTROL "The assertion ~S failed."
	 :FORMAT-ARGUMENTS (LIST ASSERTION)))

(DEFMACRO ASSERT (TEST-FORM &OPTIONAL PLACES DATUM &REST ARGUMENTS)
  (declare (optimize (safety 1)))
  (LET ((TAG (GENSYM)))
    `(TAGBODY ,TAG
       (UNLESS ,TEST-FORM
	 (RESTART-CASE ,(IF DATUM
			    `(ERROR ,DATUM ,@ARGUMENTS)
			    `(SIMPLE-ASSERTION-FAILURE ',TEST-FORM))
	   (CONTINUE ()
	       :REPORT (LAMBDA (STREAM) (ASSERT-REPORT ',PLACES STREAM))
	     ,@(MAPCAR #'(LAMBDA (PLACE)
			   `(SETF ,PLACE (ASSERT-PROMPT ',PLACE ,PLACE)))
		       PLACES)
             (GO ,TAG)))))))

(DEFUN READ-EVALUATED-FORM ()
  (FORMAT *QUERY-IO* "~&Type a form to be evaluated:~%")
  (LIST (EVAL (READ *QUERY-IO*))))

(defun check-type-internal (symbol value type &optional type-string)
  (tagbody
   tag
   (if (typep value type) (return-from check-type-internal value)
     (restart-case 
      (error 'type-error :datum value :expected-type (or type-string type)
	     :format-control "The value ~:@(~S~) is not ~A. (bound to variable ~:@(~S~))"
	     :format-arguments (list value (or type-string type) symbol))
      (store-value (v)
		   :report (lambda (stream)
				   (format stream "supply a new value of ~s." symbol))
		   :interactive read-evaluated-form
		   (setq value v)
		   (go tag))))))

(DEFMACRO CHECK-TYPE (PLACE TYPE &OPTIONAL TYPE-STRING)
  (declare (optimize (safety 1)))
  `(unless (typep ,place ',type) (setf ,place (check-type-internal ',place ,place ',type ',type-string)) nil))
