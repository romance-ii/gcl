;;; CMPINLINE  Open coding optimizer.
;;;
;; Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

;; This file is part of GNU Common Lisp, herein referred to as GCL
;;
;; GCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;; 
;; GCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
;; License for more details.
;; 
;; You should have received a copy of the GNU Library General Public License 
;; along with GCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


(in-package 'compiler)

;;; Pass 1 generates the internal form
;;;	( id  info-object . rest )
;;; for each form encountered.

 (defstruct info
  (changed-vars nil)	;;; List of var-objects changed by the form.
  (referred-vars nil)	;;; List of var-objects referred in the form.
  (type t)		;;; Type of the form.
  (sp-change nil)	;;; Whether execution of the form may change
			;;; the value of a special variable *VS*.
  (volatile nil)	;;; whether there is a possible setjmp
  )

(defvar *info* (make-info))

(defun add-info (to-info from-info)
  (setf (info-changed-vars to-info)
        (append (info-changed-vars from-info)
                (info-changed-vars to-info)))
  (setf (info-referred-vars to-info)
        (append (info-referred-vars from-info)
                (info-referred-vars to-info)))
  (when (info-sp-change from-info)
        (setf (info-sp-change to-info) t))
  )

(defun args-info-changed-vars (var forms)
  (case (var-kind var)
        ((LEXICAL FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT OBJECT)
         (dolist** (form forms)
           (when (member var (info-changed-vars (cadr form)))
                 (return-from args-info-changed-vars t))))
        (REPLACED nil)
        (t (dolist** (form forms nil)
             (when (or (member var (info-changed-vars (cadr form)))
                       (info-sp-change (cadr form)))
                   (return-from args-info-changed-vars t)))))
  )

(defun args-info-referred-vars (var forms)
  (case (var-kind var)
        ((LEXICAL REPLACED FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT OBJECT)
         (dolist** (form forms nil)
           (when (member var (info-referred-vars (cadr form)))
                 (return-from args-info-referred-vars t))))
        (t (dolist** (form forms nil)
             (when (or (member var (info-referred-vars (cadr form)))
                       (info-sp-change (cadr form)))
                   (return-from args-info-referred-vars t))))
        ))

;;; Valid property names for open coded functions are:
;;;  INLINE
;;;  INLINE-SAFE	safe-compile only
;;;  INLINE-UNSAFE	non-safe-compile only
;;;
;;; Each property is a list of 'inline-info's, where each inline-info is:
;;; ( types { type | boolean } side-effect new-object { string | function } ).
;;;
;;; For each open-codable function, open coding will occur only if there exits
;;; an appropriate property with the argument types equal to 'types' and with
;;; the return-type equal to 'type'.  The third element
;;; is T if and only if side effects may occur by the call of the function.
;;; Even if *VALUE-TO-GO* is TRASH, open code for such a function with side
;;; effects must be included in the compiled code.
;;; The forth element is T if and only if the result value is a new Lisp
;;; object, i.e., it must be explicitly protected against GBC.

(defvar *inline-functions* nil)
(defvar *inline-blocks* 0)
;;; *inline-functions* holds:
;;;	(...( function-name . inline-info )...)
;;;
;;; *inline-blocks* holds the number of temporary cvars used to save
;;; intermediate results during evaluation of inlined function calls.
;;; This variable is used to close up blocks introduced to declare static
;;; c variables.

(defvar *special-types* '(FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT integer))

(defun inc-inline-blocks()
  (cond ((consp *inline-blocks*)
	 (incf (car *inline-blocks*)))
	(t (incf *inline-blocks*))))

(defun inline-args (forms types &optional fun &aux (locs nil) ii)
  (let ((arg-side-effects (args-cause-side-effect forms)))
  (do ((forms forms (cdr forms))
       (types types (cdr types)))
      ((endp forms) (reverse locs))
      (declare (object forms types))
      (let ((form (car forms))
            (type (car types)))
        (declare (object form type))
        (case (car form)
              (LOCATION (push (coerce-loc (caddr form) type) locs))
              (VAR
               (cond ((args-info-changed-vars (caaddr form) (cdr forms))
                      (cond ((and (member (var-kind (caaddr form))
                                         *special-types*)
                                  (eq type (var-kind (caaddr form))))
                             (let ((cvar (next-cvar)))
                               (wt-nl "{" (rep-type type) "V" cvar "= V"
                                      (var-loc (caaddr form)) ";")
                               (push (list 'cvar cvar 'inline-args) locs)
                               (inc-inline-blocks)))
                            (t 
                             (let ((temp (wt-c-push)))
                               (wt-nl temp "= ")
                               (wt-var (caaddr form) (cadr (caddr form)))
                               (wt ";")
                               (push (coerce-loc temp type) locs)))))
                     ((or arg-side-effects
			  (and (member (var-kind (caaddr form))
				       '(FIXNUM LONG-FLOAT SHORT-FLOAT INTEGER))
			       (not (eq type (var-kind (caaddr form))))))
		      (let ((temp (cs-push type)))
			(wt-nl "V" temp " = "
			       (coerce-loc (cons 'var (caddr form)) type) ";")
			(push (list 'cvar temp) locs))
		      )
                     (t (push (coerce-loc (cons 'VAR (caddr form)) type)
                              locs))))
              (CALL-GLOBAL
               (if (let ((fname (caddr form)))
		     (and (inline-possible fname)
			  (setq ii (get-inline-info
				    fname (cadddr form)
				    (info-type (cadr form))))
			  (progn  (save-avma ii) t)))
                   (let ((loc (get-inline-loc ii (cadddr form))))
                        (cond
                         ((or (and (flag-p (caddr ii) ans)(not *c-gc*))
						; returns new object
                              (and (member (cadr ii)
                                           '(FIXNUM LONG-FLOAT SHORT-FLOAT))
                                   (not (eq type (cadr ii)))))
			  (let ((temp (cs-push type)))
			    (wt-nl "V" temp " = " (coerce-loc loc type) ";")
			    (push (list 'cvar temp) locs))
			 )
                         ((or (need-to-protect (cdr forms) (cdr types))
			      ;;if either new form or side effect,
			      ;;we don't want double evaluation
			      (and (flag-p (caddr ii) allocates-new-storage)
				   (or (null fun)
				       ;; Any fun such as list,list* which
				       ;; does not cause side effects or
				       ;; do double eval (ie not "@..")
				       ;; could go here.
				       (not
					 (si::memq
					   fun '(list-inline list*-inline)))))
			      (flag-p (caddr ii) is)
                              (and (flag-p (caddr ii) set) ; side-effectp
                                   (not (null (cdr forms)))))
			  (let (cvar)
			    (cond
			      ((eq type t)
			       (setq cvar (cs-push))
			       (wt-nl "V" cvar "= ")
			       (wt-loc loc))
			      (t (setq cvar (next-cvar))
				 (wt-nl "{" (rep-type type) "V" cvar "= ")
				 (case type
				   (fixnum (wt-fixnum-loc loc))
				   (integer (wt-integer-loc loc 'inline-args))
				   (character (wt-character-loc loc))
				   (long-float (wt-long-float-loc loc))
				   (short-float (wt-short-float-loc loc))
				   (otherwise (wt-loc loc)))
				 (inc-inline-blocks)))
			    (wt ";")
                            (push (list 'cvar cvar 'inline-args) locs)
                            ))
                         (t (push (coerce-loc loc type) locs))))
                   (let ((temp (if *c-gc* (list 'cvar (cs-push)) (list 'vs (vs-push)))))
                        (let ((*value-to-go* temp)) (c2expr* form))
                        (push (coerce-loc temp type) locs))))
              (structure-ref
               (push (coerce-loc-structure-ref (cdr form) type)
                     locs))
              (SETQ
               (let ((vref (caddr form))
                     (form1 (cadddr form)))
                 (let ((*value-to-go* (cons 'var vref))) (c2expr* form1))
                 (cond ((eq (car form1) 'LOCATION)
                        (push (coerce-loc (caddr form1) type) locs))
                       (t
			 (setq forms (list* form
                                             (list 'VAR (cadr form) vref)
                                             (cdr forms)))
			 ;; want (setq types (list* type type (cdr  types)))
			 ;; but type is first of types
                          (setq types (list* type  types))))))
              (t (let
		     ((temp
		       (cond (*c-gc*
			      (cond ((eq type t)
				     (list 'cvar (cs-push)))
				    (t (push (cons type (next-cvar)) *c-vars*)
				       (list 'var
					     (make-var
					      :type type
					      :kind
					      (if (member type
							  *special-types*)
						  type 'object)
						       :loc (cdar *c-vars*))
					     nil
					     ))))
			     (t  (list 'vs (vs-push))))))
		   (let ((*value-to-go* temp))
		     (c2expr* form)
		     (push (coerce-loc temp type) locs))))))))
  )

(defun coerce-loc (loc type)
  (case type
        (fixnum (list 'FIXNUM-LOC loc))
	(integer (list 'integer-loc loc ))
        (character (list 'CHARACTER-LOC loc))
        (long-float (list 'LONG-FLOAT-LOC loc))
        (short-float (list 'SHORT-FLOAT-LOC loc))
        (t loc)))

(defun get-inline-loc (ii args &aux (fun (car (cdddr ii))) locs)
  ;;; Those functions that use GET-INLINE-LOC must rebind the variable *VS*.
 (setq locs (inline-args args (car ii) fun))
  (when (and (stringp fun) (char= (char (the string fun) 0) #\@))
    (let ((i 1) (saves nil))
         (declare (fixnum i))
      (do ((char (char (the string fun) i)
                 (char (the string fun) i)))
          ((char= char #\;) (incf i))
          (declare (character char))
          (push (the fixnum (- (char-code char) #.(char-code #\0))) saves)
          (incf i))
      (do ((l locs (cdr l))
           (n 0 (1+ n))
           (locs1 nil))
          ((endp l) (setq locs (reverse locs1)))
          (declare (fixnum n) (object l))
          (if (member n saves)
              (let* ((loc1 (car l)) (loc loc1) (coersion nil))
                    (declare (object loc loc1))
                (when (and (consp loc1)
                           (member (car loc1)
                                   '(FIXNUM-LOC integer-loc CHARACTER-LOC
                                     LONG-FLOAT-LOC SHORT-FLOAT-LOC)))
                      (setq coersion (car loc1))
                      (setq loc (cadr loc1))  ; remove coersion
                      )
                (cond
                 ((and (consp loc)
		       (or
			 (member (car loc) 
                                    '(INLINE INLINE-COND))
			 (and 	 (member (car loc)
					 '(
					   INLINE-FIXNUM inline-integer
					   INLINE-CHARACTER INLINE-LONG-FLOAT
					   INLINE-SHORT-FLOAT))
				 (or (flag-p (cadr loc) allocates-new-storage)
				     (flag-p (cadr loc) side-effect-p))
	                            )))
                  (wt-nl "{")
                  (inc-inline-blocks)
                  (let ((cvar (next-cvar)))
                    (push (list 'CVAR cvar) locs1)
                    (case coersion
                     ((nil) (wt "object V" cvar "= ") (wt-loc loc1))
                     (FIXNUM-LOC (wt "int V" cvar "= ") (wt-fixnum-loc loc))
		     (integer-loc (wt "GEN V" cvar "= ") (wt-integer-loc loc
									 'get-inline-locs))
                     (CHARACTER-LOC
                      (wt "unsigned char V" cvar "= ") (wt-character-loc loc))
                     (LONG-FLOAT-LOC
                      (wt "double V" cvar "= ") (wt-long-float-loc loc))
                     (SHORT-FLOAT-LOC
                      (wt "float V" cvar "= ") (wt-short-float-loc loc))
                     (t (baboon))))
                  (wt ";")
                  )
                 (t (push loc1 locs1))))
              (push (car l) locs1)))))
  (list (inline-type (cadr ii))
        (caddr ii)
        fun
        locs)
  )
(defvar *inline-types*
  '((boolean . INLINE-COND)
    (fixnum . INLINE-FIXNUM)
    (character . INLINE-CHARACTER)
    (long-float . INLINE-LONG-FLOAT)
    (short-float . INLINE-SHORT-FLOAT)
    (integer . INLINE-INTEGER)
    (t . INLINE)))

(defun inline-type (type)
  (or (cdr (assoc type *inline-types*)) 'inline))

(defun get-inline-info (fname args return-type &aux x ii)
  (and  (fast-link-proclaimed-type-p fname args)
        (add-fast-link fname return-type args))
  (setq args (mapcar #'(lambda (form) (info-type (cadr form))) args))
  (when (if *safe-compile*
            (setq x (get fname 'inline-safe))
            (setq x (get fname 'inline-unsafe)))
        (dolist** (y x nil)
          (when (setq ii (inline-type-matches y args return-type))
                (return-from get-inline-info ii))))
  (when (setq x (get fname 'inline-always))
        (dolist** (y x)
          (when (setq ii (inline-type-matches y args return-type))
                (return-from get-inline-info ii))))
  (dolist* (x *inline-functions*)
	(when (and (eq (car x) fname)
		   (setq ii (inline-type-matches (cdr x) args return-type)))
	              (return-from get-inline-info ii)))
  ;; ( n . string , function ) or string , function
  
  (when (and (setq x (get fname 'vfun))
	     (if (and (consp x) (typep (car x) 'fixnum))
		 (prog1 (>= (length args)  (car x)) (setq x (cdr x)))
	       t))
	(return-from get-inline-info
		     (list (make-list (length args) :initial-element t)
			   t (flags allocates-new-storage side-effect-p)
			   #'(lambda (&rest l)
			       (wt "(VFUN_NARGS="(length l) ",")
			       (wt-inline-loc x l)
			       (wt ")")))))
  nil
  )

(defun inline-type-matches (inline-info arg-types return-type
                                        &aux (rts nil))
  (if (not (typep (third inline-info) 'fixnum))
      (fix-opt inline-info))
  (if (member 'integer (car inline-info))
      (return-from inline-type-matches nil))
  (if (and (let ((types (car inline-info)))
                (declare (object types))
                (dolist** (arg-type arg-types (or (equal types '(*))
						  (endp types)))
	                (when (endp types) (return nil))
		  (cond ((equal types '(*))
			 (setq types '(t *))))
                  (cond ((eq (car types) 'fixnum-float)
                         (cond ((type>= 'fixnum arg-type)
                                (push 'fixnum rts))
                               ((type>= 'long-float arg-type)
                                (push 'long-float rts))
                               ((type>= 'short-float arg-type)
                                (push 'short-float rts))
                               (t (return nil))))
                        ((type>= (car types) arg-type)
                         (push (car types) rts))
                        (t (return nil)))
                  (pop types)))
	   (type>= (cadr inline-info) return-type))
       (cons (reverse rts) (cdr inline-info))
      nil)
  )

(defun need-to-protect (forms types &aux ii)
  (do ((forms forms (cdr forms))
       (types types (cdr types)))
      ((endp forms) nil)
      (declare (object forms types))
      (let ((form (car forms)))
        (declare (object form))
        (case (car form)
              (LOCATION)
              (VAR
               (when (or (args-info-changed-vars (caaddr form) (cdr forms))
                         (and (member (var-kind (caaddr form))
                                      '(FIXNUM LONG-FLOAT SHORT-FLOAT))
                              (not (eq (car types)
                                       (var-kind (caaddr form))))))
                     (return t)))
              (CALL-GLOBAL
               (let ((fname (caddr form)))
                    (declare (object fname))
                    (when
                     (or (not (inline-possible fname))
                         (null (setq ii (get-inline-info
                                         fname (cadddr form)
                                         (info-type (cadr form)))))
			 (flag-p (caddr ii) allocates-new-storage)
			 (flag-p (caddr ii) set)
			 (flag-p (caddr ii) is)
                         (and (member (cadr ii)
                                      '(fixnum long-float short-float))
                              (not (eq (car types) (cadr ii))))
                         (need-to-protect (cadddr form) (car ii)))
                     (return t))))
              (structure-ref
               (when (need-to-protect (list (caddr form)) '(t))
                     (return t)))
              (t (return t)))))
  )

(defun wt-c-push ()
  (cond (*c-gc* (inc-inline-blocks)
		(let ((tem (next-cvar)))
		  (wt "{" *volatile* "object V" tem ";")
		  (list 'cvar tem)))
	(t (list 'VS (vs-push)))))

(defun close-inline-blocks ( &aux (bl *inline-blocks*))
  (when (consp bl)
    (if (eql (cdr bl) 'restore-avma) (wt "restore_avma;"))
    (setq bl (car bl)))
  (dotimes** (i bl) (wt "}")))

(si:putprop 'inline 'wt-inline 'wt-loc)
(si:putprop 'inline-cond 'wt-inline-cond 'wt-loc)
(si:putprop 'inline-fixnum 'wt-inline-fixnum 'wt-loc)
(si:putprop 'inline-integer 'wt-inline-integer 'wt-loc)
(si:putprop 'inline-character 'wt-inline-character 'wt-loc)
(si:putprop 'inline-long-float 'wt-inline-long-float 'wt-loc)
(si:putprop 'inline-short-float 'wt-inline-short-float 'wt-loc)

(defun wt-inline-loc (fun locs &aux (i 0) (max -1))
       (declare (fixnum i max))
  (cond ((stringp fun)
         (when (char= (char (the string fun) 0) #\@)
           (setq i 1)
           (do ()
               ((char= (char (the string fun) i) #\;) (incf i))
               (incf i)))
         (do ((size (length (the string fun))))
             ((>= i size))
             (declare (fixnum size ))
             (let ((char (char (the string fun) i)))
                  (declare (character char))
                  (cond ((char= char #\#)
			 (let ((ch  (char (the string fun)
                                                        (the fixnum (1+ i))))
			       (n 0))
			   (cond ((eql ch #\*)
				  (if (and (>= max 0)
					   (< (1+ max) (length locs)))
				      (wt ","))
				  (do ((v  (nthcdr (1+ max) locs) (cdr v)))
				      ((null v))
				      (wt-loc (car v))
				      (if (cdr v) (wt ","))))
				 ((digit-char-p ch 10)
				  (setq n (- (char-code ch)
					     (char-code #\0)))
				  (when (and
					 (> (length fun) (+ i 2))
					 (progn (setq ch (char (the string fun)
							(+ i 2)))
					 (digit-char-p ch)))
					(setq n (+ (* n 10)
						   (- (char-code ch)
						      (char-code #\0))))
					(incf i))
				  (cond ((>= n max) (setq  max n)))
				  (wt-loc (nth n locs)))))
                         (incf i 2))
                        (t
                         (princ char *compiler-output1*)
                         (incf i)))))
         )
        (t (apply fun locs))))

(defun wt-inline (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt-inline-loc fun locs))

(defun wt-inline-cond (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "(") (wt-inline-loc fun locs) (wt "?Ct:Cnil)"))

(defun wt-inline-fixnum (side-effectp fun locs)
  (declare (ignore side-effectp))
  (when (zerop *space*) (wt "CMP"))
  (wt "make_fixnum((long)") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-integer (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "make_integer(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-character (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "code_char(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-long-float (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "make_longfloat(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-short-float (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "make_shortfloat(") (wt-inline-loc fun locs) (wt ")"))

(defun args-cause-side-effect (forms &aux ii)
  (dolist** (form forms nil)
    (case (car form)
          ((LOCATION VAR structure-ref))
          (CALL-GLOBAL
           (let ((fname (caddr form)))
                (declare (object fname))
                (unless (and (inline-possible fname)
                             (setq ii (get-inline-info
                                       fname (cadddr form)
                                       (info-type (cadr form))))
			     (progn (fix-opt ii)
				    (not (flag-p (caddr ii) side-effect-p)))
                                  )
                        (return t))))
          (otherwise (return t)))))

;;; Borrowed from CMPOPT.LSP

(defun list-inline (&rest x &aux tem (n (length x)))
   (cond ((setq tem
		(and (consp *value-to-go*)
		     (eq (car *value-to-go*) 'var)
		     (eq (var-type (second *value-to-go*)) :dynamic-extent)))
	  (wt "(ALLOCA_CONS(" n "),ON_STACK_LIST(" n))
	 (t (wt "list(" (length x))))
   (dolist (loc x) (wt #\, loc))
   (wt #\))
   (if tem (wt #\)))
)


(defun list*-inline (&rest x)
  (case (length x)
        (1 (wt (car x)))
        (2 (wt "make_cons(" (car x) "," (cadr x) ")"))
        (otherwise
         (wt "listA(" (length x)) (dolist (loc x) (wt #\, loc)) (wt #\)))))

;;; Borrowed from LFUN_LIST.LSP

(defun defsysfun (fname cname-string arg-types return-type
                        never-change-special-var-p predicate)
  ;;; The value NIL for each parameter except for fname means "not known".
  (when cname-string (si:putprop fname cname-string 'Lfun))
  (when arg-types
        (si:putprop fname (mapcar #'(lambda (x)
				      (if (eq x '*) '* (type-filter x)))
				      arg-types) 'arg-types))

  (when return-type
	(let ((rt (function-return-type (if (atom return-type)
					    (list return-type)
					  return-type))))
	  (or  (consp rt) (setq rt (list rt)))
	(si:putprop fname (if (null (cdr rt)) (car rt) (cons 'values rt))
				'return-type)))
  (when never-change-special-var-p (si:putprop fname t 'no-sp-change))
  (when predicate (si:putprop fname t 'predicate))
  )

