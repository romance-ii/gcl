;;-*-Lisp-*-
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

(defmacro is-setf-function (name)
  `(and (consp ,name) (eq (car ,name) 'setf) 
	(consp (cdr ,name)) (symbolp (cadr ,name))
	(null (cddr ,name))))

;;; Pass 1 generates the internal form
;;;	( id  info-object . rest )
;;; for each form encountered.

;;;  Change changed-vars and referrred-vars slots in info structure to arrays
;;;  for dramatic compilation speed improvements when the number of variables
;;;  are large, as occurs at present in running the random-int-form tester.
;;;  20040320 CM

(defmacro mia (x y) `(si::make-vector t ,x t ,y nil nil nil nil))
(defmacro eql-not-nil (x y) `(and ,x (eql ,x ,y)))

(defvar +empty-info-array+ (make-array 0 :fill-pointer 0));FIXME cannot read constant arrays

(defstruct (info (:copier old-copy-info)) ;(:constructor old-make-info))
  (type t)		    ;;; Type of the form.
  (sp-change 0   :type bit) ;;; Whether execution of the form may change the value of a special variable *VS*.
  (volatile  0   :type bit) ;;; whether there is a possible setjmp
  (unused    0   :type char)
  (unused1   0   :type char)
  (changed-array +empty-info-array+ :type (vector t));(mia 10 0))     ;;; List of var-objects changed by the form. 
  (referred-array +empty-info-array+ :type (vector t)));(mia 10 0)))	 ;;; List of var-objects referred in the form.

(defun copy-array (array)
  (declare ((vector t) array))
  (cond ((eq +empty-info-array+ array) array)
	((let ((new-array (mia (the fixnum (array-total-size array)) (length array))))
	   (declare ((vector t) new-array))
	   (do ((i 0 (1+ i))) ((>= i (length array)) new-array)
	       (declare (fixnum i))
	       (setf (aref new-array i) (aref array i)))))))

(defun copy-info (info)
  (let ((new-info (old-copy-info info)))
    (setf (info-referred-array new-info)
	  (copy-array (info-referred-array info)))
    (setf (info-changed-array new-info)
	  (copy-array (info-changed-array info)))    
    new-info))

;; (defun make-info (&rest args)
;;   (let ((z (member :type args)))
;;     (if z (apply 'old-make-info (mapcar (lambda (x) (if (eq x (cadr z)) (cmp-norm-tp x) x)) args))
;;       (apply 'old-make-info args))))

(defconstant +c1nil+ (list 'LOCATION (make-info :type (object-type nil)) nil))
(defmacro c1nil () `+c1nil+)
(defconstant +c1t+ (list 'LOCATION (make-info :type (object-type t)) t))
(defmacro c1t () `+c1t+)

(defun bsearchleq (x a i j le)
  (declare ((vector t) a) (seqind i j))
  (when (= i j)
    (return-from bsearchleq (if (or le (and (< i (length a)) (eq x (aref a i)))) i (length a))))
  (let* ((k (+ i (ash (- j i) -1)))
	 (y (aref a k)))
    (cond ((si::objlt x y)
	   (bsearchleq x a i k le))
	  ((eq x y) k)
	  ((bsearchleq x a (1+ k) j le)))))

(defun push-array (x ar s lin)
  (declare  ((vector t) ar) (seqind s) (ignore lin))
  (let ((j (bsearchleq x ar s (length ar) t)))
    (when (and (< j (length ar)) (eq (aref ar j) x))
	(return-from push-array -1))
    (let ((ar (cond ((= (length ar) (array-total-size ar)) (adjust-array ar (* 2 (length ar))))
		    (ar))))
      (declare ((vector t) ar))
      (do ((i (length ar) (1- i))) ((<= i j))
	  (declare (seqind i))
	  (setf (aref ar i) (aref ar (1- i))))
      (setf (aref ar j) x)
      (setf (fill-pointer ar)  (1+ (length ar)))
      j)))


(defmacro do-array ((v oar) &rest body)
  (let ((count (gensym)) (ar (gensym)))
    `(let* ((,ar ,oar))
       (declare ((vector t) ,ar))
       (do ((,count 0 (1+ ,count))) ((eql ,count (length ,ar)))
	 (declare (fixnum ,count))
	 (let ((,v (aref ,ar ,count)))
	   ,@body)))))

(defmacro in-array (v ar)
  `(< (bsearchleq ,v ,ar 0 (length ,ar) nil) (length ,ar)))

(defmacro adjustable-array (array)
  `(if (eq ,array +empty-info-array+) (setf ,array (mia 10 0)) ,array))

(defmacro do-referred ((v info) &rest body)
  `(do-array (,v (info-referred-array ,info)) ,@body))
(defmacro do-changed ((v info) &rest body)
  `(do-array (,v (info-changed-array ,info)) ,@body))
(defmacro is-referred (var info)
  `(in-array ,var (info-referred-array ,info)))
(defmacro is-changed (var info)
  `(in-array ,var (info-changed-array ,info)))
(defmacro push-referred (var info)
  `(push-array ,var (adjustable-array (info-referred-array ,info)) 0 nil))
(defmacro push-changed (var info)
  `(push-array ,var (adjustable-array (info-changed-array ,info)) 0 nil))
(defmacro push-referred-with-start (var info s lin)
  `(push-array ,var (adjustable-array (info-referred-array ,info)) ,s ,lin))
(defmacro push-changed-with-start (var info s lin)
  `(push-array ,var (adjustable-array (info-changed-array ,info)) ,s ,lin))
(defmacro changed-length (info)
  `(length (info-changed-array ,info)))
(defmacro referred-length (info)
  `(length (info-referred-array ,info)))


(defvar *info* (make-info))

(defun mlin (x y)
  (declare (fixnum x y))
  (when (<= y 3)
    (return-from mlin nil))
  (let ((ly
	 (do ((tl y (ash tl -1)) (k -1 (1+ k))) ((eql tl 0) k)
	   (declare (fixnum k tl)))))
    (declare (fixnum ly))
    (let ((lyr (the fixnum (truncate y (the fixnum (1- ly))))))
      (declare (fixnum lyr))
      (> x (the fixnum (1+ lyr))))))

(defun add-info (to-info from-info)
  ;; Allow nil from-info without error CM 20031030
  (unless from-info
    (return-from add-info to-info))
  (let* ((s 0)
	 (lin)); (mlin (changed-length from-info) (changed-length to-info))))
    (declare (fixnum s) (object lin))
    (do-changed (v from-info)
		(when (member v *vars*);(member (var-name v) *vars* :key (lambda (x) (when (var-p x) (var-name x))))
		  (let ((res (push-changed-with-start v to-info s lin)))
		    (declare (fixnum res))
		    (when (>= res 0)
		      (setq s (the fixnum (1+ res))))))))
  (let* ((s 0)
	 (lin)); (mlin (referred-length from-info) (referred-length to-info))))
    (declare (fixnum s) (object lin))
    (do-referred (v from-info)
		(when (member v *vars*);(member (var-name v) *vars* :key (lambda (x) (when (var-p x) (var-name x))))
		  (let ((res (push-referred-with-start v to-info s lin)))
		    (declare (fixnum res))
		    (when (>= res 0)
		      (setq s (the fixnum (1+ res))))))))
  (when (/= (info-sp-change from-info) 0)
    (setf (info-sp-change to-info) 1))
  ;; Return to-info, CM 20031030
  to-info)

;; (defun add-info (to-info from-info)
;;   ;; Allow nil from-info without error CM 20031030
;;   (unless from-info
;;     (return-from add-info to-info))
;;   (let* ((s 0)
;; 	 (lin)); (mlin (changed-length from-info) (changed-length to-info))))
;;     (declare (fixnum s) (object lin))
;;     (do-changed (v from-info)
;; 		(when (member (var-name v) *vars* :key (lambda (x) (when (var-p x) (var-name x))))
;; 		  (let ((res (push-changed-with-start v to-info s lin)))
;; 		    (declare (fixnum res))
;; 		    (when (>= res 0)
;; 		      (setq s (the fixnum (1+ res))))))))
;;   (let* ((s 0)
;; 	 (lin)); (mlin (referred-length from-info) (referred-length to-info))))
;;     (declare (fixnum s) (object lin))
;;     (do-referred (v from-info)
;; 		(when (member (var-name v) *vars* :key (lambda (x) (when (var-p x) (var-name x))))
;; 		  (let ((res (push-referred-with-start v to-info s lin)))
;; 		    (declare (fixnum res))
;; 		    (when (>= res 0)
;; 		      (setq s (the fixnum (1+ res))))))))
;;   (when (/= (info-sp-change from-info) 0)
;;     (setf (info-sp-change to-info) 1))
;;   ;; Return to-info, CM 20031030
;;   to-info)

(defun args-info-changed-vars (var forms)
  (if (member (var-kind var) +c-local-var-types+)
      (dolist** (form forms)
		(when (is-changed var (cadr form))
		  (return-from args-info-changed-vars t)))
    (case (var-kind var)
	  ((LEXICAL OBJECT)
	   (dolist** (form forms)
		     (when (is-changed var (cadr form))
		       (return-from args-info-changed-vars t))))
	  (REPLACED nil)
	  (t (dolist** (form forms nil)
		       (when (or (is-changed var (cadr form))
				 (/= (info-sp-change (cadr form)) 0))
			 (return-from args-info-changed-vars t)))))))

;; Variable references in arguments can also be via replaced variables
;; (see gcl_cmplet.lsp) It appears that this is not necessary when
;; checking for changed variables, as matches would appear to require
;; that the variable not be replaced.  It might be better to provide a
;; new slot in the var structure to point to the variable by which one
;; is replaced -- one would need to consider chains in such a case.
;; Here we match on the C variable reference, which should be complete.
;; 20040306 CM

(defun var-rep-loc (x)
  (and
   (eq (var-kind x) 'replaced)
   (consp (var-loc x)) ;; may not be necessary, but vars can also be replaced to 'locations
                       ;; see gcl_cmplet.lsp
   (cadr (var-loc x))))

(defun is-rep-referred (var info)
  (let ((rx (var-rep-loc var)))
    (do-referred (v info)
     (let ((ry (var-rep-loc v)))
       (when (or (eql-not-nil (var-loc var) ry)
		 (eql-not-nil (var-loc v) rx)
		 (eql-not-nil rx ry))
	 (return-from is-rep-referred t))))))

(defun args-info-referred-vars (var forms)
  (if (member (var-kind var) +c-local-var-types+)
      (dolist** (form forms nil)
		(when (or (is-referred var (cadr form))
			  (is-rep-referred var (cadr form)))
		  (return-from args-info-referred-vars t)))
    (case (var-kind var)
	  ((LEXICAL REPLACED OBJECT)
	   (dolist** (form forms nil)
		     (when (or (is-referred var (cadr form))
			       (is-rep-referred var (cadr form)))
		       (return-from args-info-referred-vars t))))
	  (t (dolist** (form forms nil)
		       (when (or (is-referred var (cadr form))
				 (is-rep-referred var (cadr form))
				 (/= (info-sp-change (cadr form)) 0))
			 (return-from args-info-referred-vars t)))))))

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

(defun inc-inline-blocks()
  (cond ((consp *inline-blocks*)
	 (incf (car *inline-blocks*)))
	(t (incf *inline-blocks*))))

(defun inline-args (forms types &optional fun &aux (locs nil) ii)
  (do ((forms forms (cdr forms))
       (types types (cdr types)))
      ((endp forms) (reverse locs))
      (declare (object forms types))
      (let ((form (car forms))
            (type (car types)))
        (declare (object form type))
	(let ((type (adj-cnum-tp type (info-type (cadr form)))))
        (case (car form)
              (LOCATION (push (coerce-loc (caddr form) type) locs))
              (VAR
	       (cond ((args-info-changed-vars (caaddr form) (cdr forms))
		      (cond ((and (member (var-kind (caaddr form)) +c-local-var-types+)
				  (eq type (var-kind (caaddr form))))
			     (let* ((cvar (cs-push type t))(*value-to-go* `(cvar ,cvar)))
			       (wt-nl "{" (rep-type type) "V" cvar "= V"
				      (var-loc (caaddr form)) ";")
			       (push (list 'cvar cvar 'inline-args) locs)
			       (inc-inline-blocks)))
			    ((let* ((temp (wt-c-push type))(*value-to-go* temp))
			       (wt-nl temp "= ")
			       (wt-var (caaddr form) (cadr (caddr form)))
			       (wt ";")
			       (push (coerce-loc temp type) locs)))))
		     ((and (member (var-kind (caaddr form)) +c-local-var-types+)
			   (not (eq type (var-kind (caaddr form)))))
		      (let* ((temp (cs-push type))(*value-to-go* `(cvar ,temp)))
			(wt-nl "V" temp " = "
			       (coerce-loc (cons 'var (caddr form)) type) ";")
			(push (list 'cvar temp) locs)))
		     ((push (coerce-loc (cons 'VAR (caddr form)) type)
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
                              (and (member (cadr ii) +c-local-var-types+)
                                   (not (eq type (cadr ii)))))
			  (let* ((temp (cs-push type))(*value-to-go* `(cvar ,temp)))
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
			       (let ((*value-to-go* `(cvar ,cvar))) (wt-loc loc)))
			      (t (setq cvar (cs-push type t))
				 (wt-nl "{" (rep-type type) "V" cvar "= ")
				 (let ((*value-to-go* `(cvar ,cvar)))
				   (funcall (or (cdr (assoc (promoted-c-type type) +wt-loc-alist+)) 'wt-loc) loc))
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
		       (cond ((not *c-gc*) (list 'vs (vs-push)))
			     ((eq type t) (list 'cvar (cs-push)))
			     ((list 'var
				    (make-var :type type :loc (cs-push type)
					      :kind (or (car (member (promoted-c-type type) +c-local-var-types+)) 'object))
				    nil)))))
		   (let ((*value-to-go* temp))
		     (c2expr* form)
		     (push (coerce-loc temp type) locs)))))))))

(defun coerce-loc (loc type)
  (let ((tl (cdr (assoc (promoted-c-type type) +coersion-alist+))))
    (if tl (list tl loc) loc)))

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
              (let* ((loc (car l)) (loc1 loc) 
		     (coersion (and (consp loc) (cdr (rassoc (car loc) +coersion-alist+))))
		     (loc (if coersion (cadr loc) loc))); remove coersion
                (cond
                 ((and (consp loc)
		       (rassoc (car loc) +inline-types-alist+)
		       (or (member (car loc) '(inline inline-cond))
			   (flag-p (cadr loc) allocates-new-storage)
			   (flag-p (cadr loc) side-effect-p)))
                  (wt-nl "{")
                  (inc-inline-blocks) ;;FIXME -- make sure not losing specificity in coersion
		  (let* ((ck (or (car (rassoc coersion +coersion-alist+)) 'object))
			 (cvar (cs-push ck t)))
                    (push (list 'CVAR cvar) locs1)
		    (unless ck (baboon))
		    (wt (rep-type ck) "V" cvar "= ")
		    (funcall (cdr (assoc ck +wt-loc-alist+)) loc))
                  (wt ";"))
                 (t (push loc1 locs1))))
              (push (car l) locs1)))))

  (let ((others (and (stringp fun) (not (single-type-p (cadr ii))) (not (type>= (cadr ii) '*))
		     (mapcar 'inline-type (cddadr ii)))))
    (list (inline-type (cadr ii))
	  (caddr ii)
	  (if others (cons fun others) fun)
	  locs
	  ))
  )

(defun inline-type (type)
  (or (cdr (assoc (promoted-c-type type) +inline-types-alist+)) 'inline))

(defun get-inline-info (fname args return-type &aux x ii)
;  (and  (fast-link-proclaimed-type-p fname args)
;        (add-fast-link fname return-type args))
  (setq args (mapcar #'(lambda (form) (info-type (cadr form))) args))
  (when (if *safe-compile*
            (setq x (get fname 'inline-safe))
            (setq x (get fname 'inline-unsafe)))
        (dolist** (y x nil)
          (when (setq ii (inline-type-matches fname y args return-type))
                (return-from get-inline-info ii))))
  (when (setq x (get fname 'inline-always))
        (dolist** (y x)
          (when (setq ii (inline-type-matches fname y args return-type))
                (return-from get-inline-info ii))))

  (when  (fast-link-proclaimed-type-p fname args)
    (add-fast-link fname return-type args))

  (dolist* (x *inline-functions*)
	(when (and (eq (car x) fname)
		   (setq ii (inline-type-matches fname (cdr x) args return-type)))
	              (return-from get-inline-info ii)))
  ;; ( n . string , function ) or string , function
  
  (when (and (setq x (get fname 'vfun))
	     (if (and (consp x) (typep (car x) #tfixnum))
		 (prog1 (>= (length args)  (car x)) (setq x (cdr x)))
	       t))
	(return-from get-inline-info
		     (list (make-list (length args) :initial-element t)
			   t (flags allocates-new-storage side-effect-p)
			   #'(lambda (&rest l)
			       (wt "(VFUN_NARGS="(length l) ",")
			       (wt-inline-loc x l)
			       (wt ")")))))
  nil)

(defun adj-cnum-tp (tp ref)
  (if (and (type>= #tcnum tp) (not (type>= #tcnum (promoted-c-type tp))))
      (let ((pr (promoted-c-type ref)))
	(when (and (type>= #tcnum pr) (type>= tp ref)) ref))
    tp))

(defun inline-type-matches (fname inline-info arg-types return-type
                                        &aux (rts nil))
  (declare (ignore fname))

  (unless (si::fixnump (third inline-info))
    (fix-opt inline-info))
  ;;         FIXME -- the idea here is that an inline might want to
  ;;         force the coersion of certain arguments, notably fixnums,
  ;;         in certain circumstances.  This is already done
  ;;         elsewhere when the function is actually called, i.e. not
  ;;         inlined, and this logic should be centralized there.  CM 20050106
  (when (flag-p (third inline-info) itf)
    (let ((restp (apply (car inline-info) arg-types)))
      (return-from inline-type-matches (when restp `(,(car restp) ,(cadr restp) ,@(cddr inline-info))))))
;  (if (member 'integer (car inline-info) :key (lambda (x) (if (consp x) (car x) x)) :test #'eq)
;      (return-from inline-type-matches nil))
  (let ((rt (adj-cnum-tp (cmp-norm-tp (cadr inline-info)) return-type)))
    (if (and (type>= rt return-type);FIXME nil return-type
	     (let ((types (mapcar 'cmp-norm-tp (car inline-info)))(last t))
	       (dolist** (arg-type arg-types (or (equal types '(*))
						 (endp types)))
			 (when (endp types) (return nil))
			 (cond ((equal types '(*))
				(setq types `(,last *))))
			 (let ((arg-type (coerce-to-one-value arg-type)))
			   (cond ((let ((tp (adj-cnum-tp (car types) arg-type)))
				    (when (and arg-type (type>= tp arg-type))
				      (push tp rts))))
				 ((return nil))))
			 (setq last (pop types)))))
      (cons (nreverse rts) (cons rt (cddr inline-info))))))

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
                         (and (member (var-kind (caaddr form)) +c-local-var-types+)
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
                         (and (member (cadr ii) +c-local-var-types+)
                              (not (eq (car types) (cadr ii))))
                         (need-to-protect (cadddr form) (car ii)))
                     (return t))))
              (structure-ref
               (when (need-to-protect (list (caddr form)) '(t))
                     (return t)))
              (t (return t)))))
  )

(defun wt-c-push (&optional type)
  (cond (*c-gc* (inc-inline-blocks)
		(let ((tem (cs-push type t)))
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
(si:putprop 'inline-dcomplex 'wt-inline-dcomplex 'wt-loc)
(si:putprop 'inline-fcomplex 'wt-inline-fcomplex 'wt-loc)

(defun wt-inline-loc (fun locs &aux (i 0) (max -2) (maxv 0))
  (declare (fixnum i max maxv))
  (let* ((others (and (consp fun) (stringp (car fun)) (cdr fun)))
	 (fun (if (and (consp fun) (stringp (car fun))) (car fun) fun)))
    (cond ((stringp fun)
	   (when (char= (char (the string fun) 0) #\@)
	     (setq i 1)
	     (do ()
		 ((char= (char (the string fun) i) #\;) (incf i))
               (incf i)))
	   (do ((size (length (the string fun))))
	       ((>= i size))
	       (declare (fixnum size))
	       (let ((char (char (the string fun) i)))
		 (declare (character char))
		 (cond ((char= char #\#)
			(let ((ch (char (the string fun) (the fixnum (1+ i))))
			      (n 0))
			  (cond ((eql ch #\*)
				 (if (and (>= max -1)
					  (< (1+ max) (length locs)))
				     (wt ","))
				 (do ((v  (nthcdr (max 0 (1+ max)) locs) (cdr v)))
				     ((null v))
				     (wt-loc (car v))
				     (if (cdr v) (wt ","))))
				((eql ch #\-)
				 (unless (and (> (length fun) (1+ (incf i)))
					      (eql (setq ch (char (the string fun) (1+ i))) #\1))
				   (baboon))
				 (setq max -1)
				 (wt-fixnum-loc (cond ((eq *value-to-go* 'top) (list 'vs-address "base" (cdr (vs-push))))
						      ((and (not (eq *value-to-go* 'return))
							    (not (rassoc *value-to-go* +return-alist+))
							    (not *values-to-go*))
						       (list 'fixnum-value nil 0))
						      (*mv-var*
						       (cond ((>= (var-known-init *mv-var*) 0)
							      (setq *values-to-go* 
								    (nthcdr (var-known-init *mv-var*) *values-to-go*)))
							     (t
							      (unless (boundp '*extend-vs-top*) (baboon))
							      (setq *extend-vs-top* t *values-to-go* nil)))
						       (list 'var *mv-var* nil))
						      ((list 'vs-address "base" (cdr (vs-push)))))))
				 ((digit-char-p ch 10)
				  (setq n (- (char-code ch)
					     (char-code #\0)))
				  (when (and
					 (> (length fun) (+ i 2))
					 (progn (setq ch (char (the string fun) (+ i 2)))
						(digit-char-p ch)))
				    (setq n (+ (* n 10)
					       (- (char-code ch)
						  (char-code #\0))))
				    (incf i))
				  (cond ((>= n max) (setq  max n)))
				  (wt-loc (nth n locs)))))
			  (incf i 2))
			((char= char #\@);FIXME better error checking
			 (let* ((n (- (char-code (char fun (1+ i))) #.(char-code #\1)))
				(n (if (digit-char-p (char fun (+ i 2))) 
				       (+ (* 10 (1+ n)) (- (char-code (char fun (1+ (incf i)))) #.(char-code #\1))) n))
				(pos (position #\@ fun :start (+ i 2)))
				(new-fun (subseq fun (+ i 2) pos))
				(*value-to-go* (or (nth n *values-to-go*)
						   (and (member *value-to-go* '(top return))
							(list 'vs (vs-push)))
						   'trash))
				(*values-to-go* nil))
			   (set-loc (list (nth n others) (flags) new-fun locs))
			   (setf maxv (max maxv (1+ n)))
			   (setf i (1+ pos))))
                        (t
                         (princ char *compiler-output1*)
                         (incf i)))))
	   (setq *values-to-go* (nthcdr maxv *values-to-go*)))
	  ((values (apply fun locs))))))

(defun wt-inline (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt-inline-loc fun locs))

(defun wt-inline-cond (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "(") (wt-inline-loc fun locs) (wt "?Ct:Cnil)"))

(defun wt-inline-fixnum (side-effectp fun locs)
  (declare (ignore side-effectp))
  (when (zerop *space*) (wt "CMP"))
  (wt "make_fixnum(") (wt-inline-loc fun locs) (wt ")"))

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

(defun wt-inline-fcomplex (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "make_fcomplex(") (wt-inline-loc fun locs) (wt ")"))

(defun wt-inline-dcomplex (side-effectp fun locs)
  (declare (ignore side-effectp))
  (wt "make_dcomplex(") (wt-inline-loc fun locs) (wt ")"))

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

(defmacro can-allocate-on-stack ()
  `(and (consp *value-to-go*)
	(eq (car *value-to-go*) 'var)
	(/= (var-dynamic (second *value-to-go*)) 0)))

;; (defun list-inline (&rest x &aux (n (length x)))
;;   (let ((tem (can-allocate-on-stack)))
;;     (if tem
;; 	(wt "(ALLOCA_CONS(" n "),ON_STACK_LIST(" n)
;;       (wt "list(" (length x)))
;;     (dolist (loc x) (wt #\, loc))
;;     (wt #\))
;;     (if tem (wt #\)))))

(defun wt-stack-list* (x l &optional n (st "Cnil") (lst "Cnil"))
  (let ((z (or n (length x))))
    (wt-nl "!" z "? Cnil : (alloca_val=alloca((" z ")*sizeof(struct cons)+sizeof(object)),");FIXME double eval
    (wt-nl "({object _b=(void *)alloca_val;if (((unsigned long)_b)&sizeof(_b)) _b++;")
    (wt-nl "{register struct cons *_p=(void *)_b;")
    (cond (n (wt-nl "{struct cons *_e=_p+(" n "-1);")
	     (wt-nl "for (;_p<_e;_p++) {_p->c_car=" st ";_p->c_cdr=(object)(_p+1);}}")
	     (wt-nl "_p->c_car=" lst ";_p->c_cdr=Cnil;}_b;}))"))
	  ((dolist (x x (wt-nl "_p[-1].c_cdr=" l ";}_b;}))"))
	     (wt-nl "_p->c_car=" x ";_p->c_cdr=(object)(_p+1);_p++;"))))))

(defun list-inline (&rest x)
  (cond ((can-allocate-on-stack) (wt-stack-list* x nil))
	((endp (cdr x)) (wt "make_cons(" (car x) ",Cnil)"))
	(t 
	 (wt "list(" (length x))
	 (dolist (loc x (wt #\))) (wt #\, loc)))))

(defun list*-inline (&rest x)
  (if (can-allocate-on-stack)
      (wt-stack-list* (butlast x) (car (last x)))
    (case (length x)
	  (1 (wt (car x)))
	  (2 (wt "make_cons(" (car x) "," (cadr x) ")"))
	  (otherwise
	   (wt "listA(" (length x)) (dolist (loc x) (wt #\, loc)) (wt #\))))))
  
(defun make-list-inline (n)
  (if (can-allocate-on-stack)
      (wt-stack-list* nil nil n)
    (wt "make_list(" n ")")))

(defun cons-inline (x y)
  (if (can-allocate-on-stack) 
      (wt-stack-list* (list x) y)
    (wt "make_cons(" x "," y ")")))

;;FIXME -- All the var and C type code, e.g. var-type and var-kind, needs much centralization.
;;         20050106 CM.
;; (defun c-cast (aet)
;;   (case aet
;;     (signed-char "char")
;;     ((bit character unsigned-char non-negative-char) "unsigned char")
;;     (signed-short "short")
;;     ((non-negative-short unsigned-short) "unsigned short")
;;     (signed-int "int")
;;     ((non-negative-int unsigned-int) "unsigned int")
;;     ((signed-fixnum fixnum #tnon-negative-fixnum) "fixnum")
;;     ((unsigned-fixnum ) "object") ;FIXME
;;     (short-float "float")
;;     (long-float "double")
;;     ((t object) "object")
;;     (otherwise (baboon))))
(defun c-cast (aet)
  (or (cdr (assoc aet +c-type-string-alist+)) (baboon)))



;;FIXME -- This set of inlining/type-propagation work makes use of
;;three types of functions per compiled function -- an expander as a
;;compiler-macro, a type propagator, and an (optional) inliner.
;;Traditionally, these tasks were divided among the c1 and c2
;;functions.  The compiler-macros effectively run at a pre-pass1
;;level, enabling simplifications which allow auto-declaration of
;;constant bindings at the lisp level.  This seems logically distinct
;;from the role of the c1 functions, which is promaliry to produce the
;;call tree forms, and so should probably stay.  The type propagator
;;functions are partially redundant with the rfa inliner types,
;;arg-types/return-types in the plist, and
;;proclaimed-arg-types/proclaimed-return-types in the plist.  One
;;cannot, however, enumerate all the bounded integer range propagation
;;information in the older type facilities.  Unlike the latter,
;;however, it appears difficult to automate the generation of such
;;propagator functions from the function definitions themselves,
;;making the overhead of this facility quite large.  The existing
;;inliner records have two difficulties vis a vis inliner functions --
;;1) their functionality is overloaded, producing (lisp) variable type
;;information in result-type-from-args and C type (e.g. var-kind)
;;coersion information in inline-type-matches, and 2) enumerating all
;;the possibilites at a minimum does not scale well, e.g. with the
;;array types.  Still, to go forward efficiently, we are in need of a
;;centralized means of producing the expander, propagator, and inliner
;;from the function definitions themselves.  CM 20050106.
(defun aref-propagator (fn x &rest inds)
  (declare (ignore fn inds))
  (let* ((x (cmp-norm-tp x)))
    (cmp-norm-tp 
     (and (consp x) (member (car x) '(array simple-array))
	  (and (not (eq (cadr x) '*)) (upgraded-array-element-type (nil-to-t (cadr x))))))))

(defun var-array-type (a)
  (when (consp a)
    (cond ((eq (car a) 'var) (var-type (cadr a)))
	  ((eq (car a) 'VV) 
	   (object-type (or (cdr (aref (car *data*) (cadr a)))
			    (cmp-eval (car (rassoc (cadr a) *constants* :key 'car))))))
	  ((eq (car a)  'cvar)
	   (or (cdr (assoc (cadr a) *c-vars*))
	       (car (rassoc (cadr a) *c-vars*)))))))

(setf (symbol-function 'cmp-aref) (symbol-function 'row-major-aref))

(defmacro wt-bv-index (a i)
 `(wt "(((" ,a ")->bv.bv_offset) + " ,i ")"))

(defmacro wt-bv-shift (a i)
  `(progn
     (wt #+clx-little-endian "(7-" "(")
     (wt-bv-index ,a ,i)
     (wt "&0x7)" #+clx-little-endian ")")))

(defun cmp-aref-inline-types (&rest r)
  (let ((art (type-and #tarray (car r))))
    (let ((aet (aref-propagator 'cmp-aref art)))
      (if aet
	  `((,(cmp-norm-tp art) ,#tseqind) ,aet)
	`((t ,#tseqind) t)))))

(defun cmp-aref-inline (a i)
  (let ((at (nil-to-t (type-and #tarray (var-array-type a)))))
    (let ((aet (aref-propagator 'cmp-aref at)))
      (if aet
	  (if (eq aet #tbit) 
	      (progn
		(wt  "(((" (c-cast aet) " *)(" a ")->bv.bv_self)[")
		(wt-bv-index a i)
		(wt ">>3]>>")
		(wt-bv-shift a i) 
		(wt "&0x1)"))
	    (wt  "((" (c-cast aet) " *)(" a ")->v.v_self)[" i "]"))
	(if *safe-compile*
	    (wt "fLrow_major_aref(" a "," i ")")
	  (wt "((" a ")->v.v_elttype==aet_object ? (" a ")->v.v_self[" i "] : fLrow_major_aref(" a "," i "))"))))))
  
  
(setf (symbol-function 'cmp-aset) (symbol-function 'si::aset1))

(defun cmp-aset-inline-types (&rest r)
  (let ((art (type-and #tarray (car r))))
    (let ((aet (aref-propagator 'cmp-aset art)))
      (if aet
	  `((,(cmp-norm-tp art) ,#tseqind ,aet) ,aet)
	`((t ,#tseqind t) t)))))


	       

(defun cmp-aset-inline (a i j)
  (let ((at (nil-to-t (type-and #tarray (var-array-type a)))))
    (let ((aet (aref-propagator 'cmp-aset at)))
      (if aet
	  (if (eq aet #tbit) 
	      (progn 
		(wt  "(" j " ? (((" (c-cast aet) " *)(" a ")->bv.bv_self)[")
		(wt-bv-index a i)
		(wt ">>3]|=(1<<")
		(wt-bv-shift a i)
		(wt ")) : (((" (c-cast aet) " *)(" a ")->bv.bv_self)[")
		(wt-bv-index a i)
		(wt ">>3]&=~(1<<")
		(wt-bv-shift a i) 
		(wt ")))"))
	    (wt  "(((" (c-cast aet) " *)(" a ")->v.v_self)[" i "]=" j ")"))
	(wt "fSaset1(" a "," i "," j ")")))))
  
  
(setf (symbol-function 'cmp-array-dimension) (symbol-function 'array-dimension))
;(proclaim '(ftype (function (t rnkind) seqind) cmp-array-dimension))
(defun cmp-array-dimension-inline-types (&rest r)
  (if (aref-propagator 'cmp-array-dimension (type-and #tarray (car r)))
      `((,(cmp-norm-tp (car r)) ,#trnkind) ,#tseqind)
    `((t ,#trnkind) ,#tseqind)))


;;FIXME lose the normalize-type
(defun cmp-array-dimension-inline (a i)
  (let ((at (nil-to-t (type-and #tarray (var-array-type a)))))
    (let ((aet (and (consp at) (member (car at) '(array simple-array)))))
      (cond ((and (not *safe-compile*) (not aet))
	     (wt "fixint(fLarray_dimension(" a "," i "))"))
	    ((and aet (consp (third at)) (= (length (third at)) 1))
	     (wt "(" a ")->v.v_dim"))
	    ((and (constantp i) (> i 0))
	     (wt "(" a ")->a.a_dims[(" i ")]"))
	    ((wt "(type_of(" a ")==t_array ? (" a ")->a.a_dims[(" i ")] : (" a ")->v.v_dim)"))))))

;;; Borrowed from LFUN_LIST.LSP

(defun defsysfun (fname cname-string arg-types return-type
                        never-change-special-var-p predicate)
  ;;; The value NIL for each parameter except for fname means "not known".
  (when cname-string (si:putprop fname cname-string 'Lfun))
  (when arg-types
        (si:putprop fname (mapcar 'cmp-norm-tp arg-types) 'arg-types))

  (when return-type
	(let ((rt (function-return-type (if (atom return-type) (list return-type) return-type))))
	  (or  (consp rt) (setq rt (list rt)))
	(si:putprop fname (type-filter rt) 'return-type)))
  (when never-change-special-var-p (si:putprop fname t 'no-sp-change))
  (when predicate (si:putprop fname t 'predicate)))

;; ;;FIXME -- This function needs expansion on centralization.  CM 20050106
;; (defun promoted-c-type (type)
;;   (let ((type (coerce-to-one-value type)))
;;     (let ((ct (if (eq type 'object) type;FIXME!!!
;; 		(when type (car (member type
;; ;			   '(signed-char signed-short fixnum integer)
;; ;			   '(signed-char unsigned-char signed-short unsigned-short fixnum integer)
;; 			   `(,#tboolean ,@+c-local-var-types+)
;; 			   :test 'type<=))))))
;;       (cond (ct)
;; ;	    ((eq type 'boolean))
;; 	    (type)))))
;; ;      (or ct type))))
;; ;      (if (integer-typep type)
;; ;	(cond ;((subtypep type 'signed-char) 'signed-char)
;; ;	 ((subtypep type 'fixnum) 'fixnum)
;; ;	 ((subtypep type 'integer) 'integer)
;; ;	 (t  (error "Cannot promote type ~S to C type~%" type)))
;; ;      type)))

(defun default-init (type)
  (let ((type (promoted-c-type type)))
    (when (member type +c-local-var-types+)
      (cmpwarn "The default value of NIL is not ~S." type)))
  (c1nil))
