(in-package 'si)

;; by William F. Schelter

;; Conveniently and economically make operators which declare the type
;; and result of numerical operations.  For example (def-op f+ fixnum +)
;; defines a macro f+ which will give optimal code for calling + on
;; several fixnum args expecting a fixnum result.

;; Details:
;; Note these will be macros and cannot be `funcalled'.  If you add the
;; feature :debug, then code to check the types of the arguments and
;; result will be inserted, and generic operations will be used.  This is
;; useful for checking that you did not insert the wrong type
;; declarations.  The code will continue running if *dbreak* is nil,
;; returning the correct result but printing out the type mismatch, as
;; well as the actual args given so that you may more easily locate the
;; bad call in the editor.

;; It is economical, beause all the macros defined are just variations
;; of one closure, and so code is not duplicated.

;; Sample usage (with :debug in *features*):
;; The call will generate warning messages if the args or result are bad.

;; (defun foo (x a) (f+ (* 2 x) a))
;; SYSTEM>(foo 7.0 9)

;; Bad call (F+ (* 2 X) A) types:(LONG-FLOAT FIXNUM)
;; 23.0

;; Without debug (f+ a b c) becomes
;; (the fixnum (+ (the fixnum a) (the fixnum
;;                                      (+ (the fixnum b) (the fixnum c)))))
;; which is painful to write by hand, but which will give the best code.


(defmacro def-op (name type op &optional return-type)
	    `(setf (macro-function ',name) (make-operation ',type ',op
							   ',return-type)))

(defun make-operation (.type .op .return)
  (or .return (setf .return .type))
  #'(lambda (bod env) env
      (sloop for v in (cdr bod)
	     when (eq t .type) collect v into body
	     else
	     collect `(the , .type ,v) into body
	     finally (setq body `(, .op ,@ body))
	     (return
	     (if (eq t .return) body
	       `(the , .return ,body))))))

#+debug
(progn
  ;; Enable this to insert type error checking code.
(defvar *dbreak* t)
(defun callchk-type (lis old na typ sho return-type &aux result)
  (setq result (apply old lis))
  (or (and (sloop for v in lis
		  always (typep v typ))
	   (or (null return-type) (typep result return-type)))
      (format t "~%Bad call ~a types:~a" (cons na sho)
	      (sloop:sloop for v in lis collect (type-of v)))
      (and *dbreak* (break "hi")))
  result)

;; debug version:	 
(defmacro def-op (name type old &optional return-type)
  `(defmacro ,name (&rest l)
     `(callchk-type (list ,@ l) ',',old ',',name ',',type ',l ',',return-type 
		     )))
)

(def-op f+ fixnum +)
(def-op f* fixnum *)
(def-op f- fixnum -)
(def-op +$ double-float +)
(def-op *$ double-float *)
(def-op -$ double-float -)
(def-op 1-$ double-float 1-)
(def-op 1+$ double-float 1+)
(def-op f1- fixnum 1-)
(def-op f1+ fixnum 1+)
(def-op //$ double-float quot)
(def-op ^ fixnum expt)
(def-op ^$ double-float expt)
(def-op f> fixnum > t)
(def-op f< fixnum <  t)
(def-op f= fixnum = t)
(def-op lsh fixnum ash)
(def-op fixnum-remainder fixnum rem)

