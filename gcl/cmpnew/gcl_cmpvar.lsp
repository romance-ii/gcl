;;-*-Lisp-*-
;;; CMPVAR  Variables.
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

(si:putprop 'var 'c2var 'c2)
(si:putprop 'location 'c2location 'c2)
(si:putprop 'setq 'c1setq 'c1special)
(si:putprop 'setq 'c2setq 'c2)
(si:putprop 'progv 'c1progv 'c1special)
(si:putprop 'progv 'c2progv 'c2)
(si:putprop 'psetq 'c1psetq 'c1)
(si:putprop 'psetq 'c2psetq 'c2)

(si:putprop 'var 'set-var 'set-loc)
(si:putprop 'var 'wt-var 'wt-loc)

(defstruct var
  name		;;; Variable name.
  kind		;;; One of LEXICAL, SPECIAL, GLOBAL, REPLACED, FIXNUM,
  		;;; CHARACTER, LONG-FLOAT, SHORT-FLOAT, and OBJECT.
  ref		;;; Referenced or not.
  		;;; During Pass1, T, NIL, or IGNORE.
  		;;; During Pass2, the vs-address for the variable.
  ref-ccb	;;; Cross closure reference.
  		;;; During Pass1, T or NIL.
  		;;; During Pass2, the ccb-vs for the variable, or NIL.
  loc		;;; For SPECIAL and GLOBAL, the vv-index for variable name.
		;;; For others, this field is used to indicate whether
		;;; to be allocated on the value-stack: OBJECT means
		;;; the variable is declared as OBJECT, and CLB means
		;;; the variable is referenced across Level Boundary and thus
		;;; cannot be allocated on the C stack.  Note that OBJECT is
		;;; set during variable binding and CLB is set when the
		;;; variable is used later, and therefore CLB may supersede
		;;; OBJECT.
  		;;; For REPLACED, the actual location of the variable.
  		;;; For FIXNUM, CHARACTER, LONG-FLOAT, SHORT-FLOAT, and
  		;;; OBJECT, the cvar for the C variable that holds the value.
  		;;; Not used for LEXICAL.
  (dt t)	;;; Declared Type of the variable.
  (type t)	;;; Current Type of the variable.
  (mt t)	;;; Maximum type of the life of this binding
  tag           ;;; Inner tag (to binding) being analyzed if any
  (register 0 :type unsigned-short)  ;;; If greater than specified am't this goes into register.
  (dynamic 0 :type unsigned-short)   ;;; If variable is declared dynamic-extent
  )

;;; A special binding creates a var object with the kind field SPECIAL,
;;; whereas a special declaration without binding creates a var object with
;;; the kind field GLOBAL.  Thus a reference to GLOBAL may need to make sure
;;; that the variable has a value.

(defvar *vars* nil)
(defvar *register-min* 4) ;criteria for putting in register.
(defvar *undefined-vars* nil)
(defvar *special-binding* nil)

;;; During Pass 1, *vars* holds a list of var objects and the symbols 'CB'
;;; (Closure Boundary) and 'LB' (Level Boundary).  'CB' will be pushed on
;;; *vars* when the compiler begins to process a closure.  'LB' will be pushed
;;; on *vars* when *level* is incremented.
;;; *GLOBALS* holds a list of var objects for those variables that are
;;; not defined.  This list is used only to suppress duplicated warnings when
;;; undefined variables are detected.

(defun c1make-var (name specials ignores types &aux x)

  (let ((var (make-var :name name)))

    (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
    (cmpck (constantp name)     "The constant ~s is being bound." name)
    
    (dolist** 
     (v types)
     (when (eq (car v) name)
       (case (cdr v)
	     (object (setf (var-loc var) 'object))
	     (register (setf (var-register var) (+ (var-register var) 100)))
	     (dynamic-extent  (setf (var-dynamic var) 1))
	     (t (setf (var-type var) (nil-to-t (type-and (var-type var) (cdr v))))))))
    
    (cond ((or (member name specials) (si:specialp name))
	   (setf (var-kind var) 'SPECIAL)
	   (setf (var-loc var) (add-symbol name))
	   (when (and (not (assoc name types)) (setq x (get name 'cmp-type)))
	     (setf (var-type var) x))
              (setq *special-binding* t))
	  (t
	   (and (boundp '*c-gc*) *c-gc*
		(or (null (var-type var))
		    (eq t (var-type var)))
		(setf (var-loc var) 'object))
	   (setf (var-kind var) 'LEXICAL)))
    (let ((ign (member name ignores)))
      (when ign
	(setf (var-ref var) (if (eq (cadr ign) 'ignorable) 'IGNORABLE 'IGNORE))))
    
    (setf (var-mt var) (var-type var))
    (setf (var-dt var) (var-type var))
    var))

(defun check-vref (var)
  (when (and (eq (var-kind var) 'LEXICAL)
             (not (var-ref var)) ;;; This field may be IGNORE.
             (not (var-ref-ccb var)))
;	     (every (lambda (x) (or (not (var-p x)) (not (t-to-nil (var-tag x))))) *vars*))
        (cmpwarn "The variable ~s is not used." (var-name var))))

(defun c1var (name)
  (let ((info (make-info))
        (vref (c1vref name)))
       (push-referred (car vref) info)
       (setf (info-type info) (var-type (car vref)))
       (list 'var info vref))
  )

;;; A variable reference (vref for short) is a pair
;;;	( var-object  ccb-reference )

(defun c1vref (name &aux (ccb nil) (clb nil))
       (declare (object ccb clb))
  (dolist* (var *vars*
               (let ((var (sch-global name)))
                    (unless var
                      (unless (si:specialp name) (undefined-variable name))
                      (setq var (make-var :name name
                                          :kind 'GLOBAL
                                          :loc (add-symbol name)
                                          :type (or (get name 'cmp-type) t)
                                          ))
                      (push var *undefined-vars*))
                    (list var ccb)))
      (cond ((eq var 'cb) (setq ccb t))
            ((eq var 'lb) (setq clb t))
            ((eq (var-name var) name)
             (when (eq (var-ref var) 'IGNORE)
                   (cmpwarn "The ignored variable ~s is used." name)
                   (setf (var-ref var) t))
             (cond (ccb (setf (var-ref-ccb var) t))
                   (clb (when (eq (var-kind var) 'lexical)
                              (setf (var-loc var) 'clb))
                        (setf (var-ref var) t))
                   (t (setf (var-ref var) t)
		      (setf (var-register var)
			    (the fixnum (+ 1 (the fixnum (var-register var)))))
		      ))
             (return-from c1vref (list var ccb)))))
  )

(defun c2var-kind (var)
  (if (and (eq (var-kind var) 'LEXICAL)
           (not (var-ref-ccb var))
           (not (eq (var-loc var) 'clb)))
      (if (eq (var-loc var) 'OBJECT)
          'OBJECT
          (let ((type (var-type var)))
               (cond ((car (member type +c-local-var-types+ :test 'type<=)))
                     ((and (boundp '*c-gc*) *c-gc* 'OBJECT))
		     (t nil))))
      nil)
  )

(defun c2var (vref) (unwind-exit (cons 'var vref) nil 'single-value))

(defun c2location (loc) (unwind-exit loc nil 'single-value))


(defun check-downward (info &aux no-down )
  (dolist (v *local-functions*)
	  (cond ((eq (car v) 'function)
		 (setq no-down t)
		 (dolist (w *local-functions*)
			 (cond ((eq (car w) 'downward-function)
				(setf (car w) 'function))))
		 (return nil))))
  (setq *local-functions* nil)
  (cond (no-down
	(do-referred (var info)
		(if (eq (var-kind var) 'down)
		    (setf (var-kind var) 'lexical))))))


(defun assign-down-vars (info cfun inside &aux (ind 0) )
  (do-referred (var info)
	  (cond ((eq (var-kind var) 'down)
		 ;;don't do twice since this list may have duplicates.
		 (cond ((integerp (var-loc var) )
			;(or (integerp (var-ref var)) (print var))
			(setq ind (max ind (1+ (var-loc var))))
			(setf (var-ref var) (var-loc var)) ;delete later
			)
		       ;((integerp (var-loc var)) (break "bil"))
		       (t (setf (var-ref var) ind) ;delete later
			  (setf (var-loc var) ind)
			  (setf ind (+ ind 1)))))))
  (cond ((> ind 0)   
	 ;;(wt-nl "object Dbase[" ind "];")
	 (cond ((eq inside 't3defun)
		(wt-nl "object base0[" ind "];")))
					;DCnames gets defined at end whe
	 (push 'dcnames *downward-closures*)
	 (wt-nl "DCnames"cfun  "")))
  ind)

(si::putprop 'down   'wt-down 'wt-loc)

(defun wt-down (n)
  (or (si::fixnump n) (wfs-error))
  (wt "base0[" n "]"))

(defconstant +wt-c-var-alist+ `((,#tfixnum ."make_fixnum")
				(,#tinteger ."make_integer") 
				(,#tcharacter  ."code_char")
				(,#tlong-float  ."make_longfloat")
				(,#tshort-float ."make_shortfloat")
				(object . "")))


(defun wt-var (var ccb)
  (case (var-kind var)
        (LEXICAL (cond (ccb (wt-ccb-vs (var-ref-ccb var)))
                       ((var-ref-ccb var) (wt-vs* (var-ref var)))
		       ((and (eq t (var-ref var)) 
			     (si:fixnump (var-loc var))
			     *c-gc*
			     (eq t (var-type var)))
			(setf (var-kind var) 'object)
			(wt-var var ccb))
                       (t (wt-vs (var-ref var)))))
        (SPECIAL (wt "(VV[" (var-loc var) "]->s.s_dbind)"))
        (REPLACED (wt (var-loc var)))
	(DOWN  (wt-down (var-loc var)))
        (GLOBAL (if *safe-compile*
                    (wt "symbol_value(VV[" (var-loc var) "])")
                    (wt "(VV[" (var-loc var) "]->s.s_dbind)")))
        (t (let ((z (cdr (assoc (var-kind var) +wt-c-var-alist+))))
	     (unless z (baboon))
	     (when (and (eq #tfixnum (var-kind var)) (zerop *space*)) 
	       (wt "CMP"))
	     (wt z)
           (wt "(V" (var-loc var) ")")))
        ))

;; When setting bignums across setjmps, cannot use alloca as longjmp
;; restores the C stack.  FIXME -- only need malloc when reading variable
;; outside frame.  CM 20031201
(defmacro bignum-expansion-storage ()
  `(if (and (boundp '*unwind-exit*) (member 'frame *unwind-exit*))
       "gcl_gmp_alloc"
     "alloca"))

(defun set-var (loc var ccb)
  (unless (and (consp loc)
               (eq (car loc) 'var)
               (eq (cadr loc) var)
               (eq (caddr loc) ccb))
          (case (var-kind var)
            (LEXICAL (wt-nl)
                     (cond (ccb (wt-ccb-vs (var-ref-ccb var)))
                           ((var-ref-ccb var) (wt-vs* (var-ref var)))
                           (t (wt-vs (var-ref var))))
                     (wt "= " loc ";"))
            (SPECIAL (wt-nl "(VV[" (var-loc var) "]->s.s_dbind)= " loc ";"))
            (GLOBAL
             (if *safe-compile*
                 (wt-nl "setq(VV[" (var-loc var) "]," loc ");")
                 (wt-nl "(VV[" (var-loc var) "]->s.s_dbind)= " loc ";")))
	    (DOWN
	      (wt-nl "") (wt-down (var-loc var))
	      (wt "=" loc ";"))
            (t
	     (cond ((eq (var-kind var) #tinteger)
		    (let ((first (and (consp loc) (car loc)))
			  (n (var-loc var)))
		      (case first
			(inline-fixnum
			 (wt-nl "ISETQ_FIX(V"n",V"n"alloc,")
			 (wt-inline-loc (caddr loc) (cadddr loc)))
			(fixnum-value (wt-nl "ISETQ_FIX(V"n",V"n"alloc,"(caddr loc)))
			(var
			 (cond 
			  ((eq (var-kind (cadr loc)) #tinteger) 
			   (wt "SETQ_II(V"n",V"n"alloc,V" (var-loc (cadr loc)) "," (bignum-expansion-storage)))
			  ((eq (var-kind (cadr loc)) #tfixnum)  
			   (wt "ISETQ_FIX(V"n",V"n"alloc,V" (var-loc (cadr loc))))
			  ((wt "SETQ_IO(V"n",V"n"alloc,"loc "," (bignum-expansion-storage)))))
			(vs (wt "SETQ_IO(V"n",V"n"alloc,"loc ","
				(bignum-expansion-storage)))
			(otherwise
			 (let ((*inline-blocks* 0) (*restore-avma* *restore-avma*))
			   (save-avma '(nil integer))
			   (wt-nl "SETQ_II(V"n",V" n"alloc,")
			   (wt-integer-loc loc)
			   (wt "," (bignum-expansion-storage) ");")
			   (close-inline-blocks))
			 (return-from set-var nil)))
		      (wt ");")))
		   (t 
		    (wt-nl "V" (var-loc var) "= ")
		    (funcall (or (cdr (assoc (var-kind var) +wt-loc-alist+)) (baboon)) loc)
		    (wt ";")))))))

(defun sch-global (name)
  (dolist* (var *undefined-vars* nil)
    (when (eq (var-name var) name) (return-from sch-global var))))

(defun c1add-globals (globals)
  (dolist** (name globals)
    (push (make-var :name name
                    :kind 'GLOBAL
                    :loc (add-symbol name)
                    :type (let ((x (get name 'cmp-type))) (if x x t))
                    )
          *vars*))
  )

(defun c1setq (args)
  (cond ((endp args) (c1nil))
        ((endp (cdr args)) (too-few-args 'setq 2 1))
        ((endp (cddr args)) (c1setq1 (car args) (cadr args)))
        (t
         (do ((pairs args (cddr pairs))
              (forms nil))
             ((endp pairs) (c1expr (cons 'progn (reverse forms))))
             (declare (object pairs))
             (cmpck (endp (cdr pairs))
                    "No form was given for the value of ~s." (car pairs))
             (push (list 'setq (car pairs) (cadr pairs)) forms)
             )))
  )


(defun do-setq-tp (v form t1)
  (when (eq (var-kind v) 'lexical)
    (setq t1 (coerce-to-one-value t1))
    (let* ((tp (type-and (var-dt v) t1)))
      (unless (or tp (not (and (var-dt v) t1)))
	(cmpwarn "Type mismatches between ~s/~s and ~s/~s." (var-name v) (var-dt v) form t1))
      (when (boundp '*restore-vars*) 
	(unless (member v *restore-vars* :key 'car)
	  (push (list v (var-type v)) *restore-vars*)))
      (setf (var-type v) tp)
      (unless (type>= (var-mt v) tp)
	(setf (var-mt v) (type-or1 (var-mt v) tp))
	(when (var-tag v)
	  (let* ((nmt (car (member (var-mt v) +useful-c-types+ :test 'type<=)))
		 (nmt (type-and nmt (var-dt v))))
	    (setf (var-mt v) nmt))
	  (throw (var-tag v) v))))))

(defun set-form-type (form type)
  (let* ((it (coerce-to-one-value (info-type (cadr form))))
	 (nt (type-and type it)))
    (unless (or nt (not (and type it)))
      (cmpwarn "Type mismatch: ~s ~s~%" it type))
    (setf (info-type (cadr form)) nt)
    (case (car form)
	  ((let let*) (set-form-type (car (last form)) type))
	  (progn (set-form-type (car (last (third form))) type))
	  (if 
	    (let ((tt (type-and type (coerce-to-one-value (info-type (cadr (fourth form))))))
		  (ft (type-and type (coerce-to-one-value (info-type (cadr (fifth form)))))))
	      (unless tt
		(set-form-type (fifth form) type)
		(setf (car form) 'progn (cadr form) (cadr (fifth form)) (caddr form) (list (fifth form)) (cdddr form) nil))
	      (unless ft
		(set-form-type (fourth form) type)
		(setf (car form) 'progn (cadr form) (cadr (fourth form)) (caddr form) (list (fourth form)) (cdddr form) nil)))))))

(defun c1setq1 (name form &aux (info (make-info)) type form1 name1)
  (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
  (cmpck (constantp name) "The constant ~s is being assigned a value." name)
  (setq name1 (c1vref name))
  (push-changed (car name1) info)
  (setq form1 (c1expr form))
  (add-info info (cadr form1))
  
  (do-setq-tp (car name1) form (info-type (cadr form1)))
  (setq type (var-type (car name1)))

  (unless (eq type (info-type (cadr form1)))
    (let ((info1 (copy-info (cadr form1))))
         (setf (info-type info1) type)
         (setq form1 (list* (car form1) info1 (cddr form1)))))

;  (setf (info-type info) type)
  (set-form-type form1 type)
  (list 'setq info name1 form1))

(defun c2setq (vref form)
  (let ((*value-to-go* (cons 'var vref))) (c2expr* form))
  (case (car form)
        (LOCATION (c2location (caddr form)))
        (otherwise (unwind-exit (cons 'var vref)))))

(defun c1progv (args &aux symbols values (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'progv 2 (length args)))
  (setq symbols (c1expr* (car args) info))
  (setq values (c1expr* (cadr args) info))
  (list 'progv info symbols values (c1progn* (cddr args) info))
  )

(defun c2progv (symbols values body
                &aux (cvar (cs-push t t))
                     (*unwind-exit* *unwind-exit*))

  (wt-nl "{object symbols,values;")
  (wt-nl "bds_ptr V" cvar "=bds_top;")
  (push cvar *unwind-exit*)

  (let ((*vs* *vs*))
       (let ((*value-to-go* (list 'vs (vs-push))))
            (c2expr* symbols)
            (wt-nl "symbols= " *value-to-go* ";"))

       (let ((*value-to-go* (list 'vs (vs-push))))
            (c2expr* values)
            (wt-nl "values= " *value-to-go* ";"))

       (wt-nl "while(!endp(symbols)){")
       (when *safe-compile*
             (wt-nl "if(type_of(MMcar(symbols))!=t_symbol)")
             (wt-nl
              "FEinvalid_variable(\"~s is not a symbol.\",MMcar(symbols));"))
       (wt-nl "if(endp(values))bds_bind(MMcar(symbols),OBJNULL);")
       (wt-nl "else{bds_bind(MMcar(symbols),MMcar(values));")
       (wt-nl "values=MMcdr(values);}")
       (wt-nl "symbols=MMcdr(symbols);}")
       )
  (c2expr body)
  (wt "}")
  )

(defun c1psetq (args &aux (vrefs nil) (forms nil)
                          (info (make-info :type '(member nil))))
  (do ((l args (cddr l)))
      ((endp l))
      (declare (object l))
      (cmpck (not (symbolp (car l)))
             "The variable ~s is not a symbol." (car l))
      (cmpck (constantp (car l))
             "The constant ~s is being assigned a value." (car l))
      (cmpck (endp (cdr l))
             "No form was given for the value of ~s." (car l))
      (let* ((vref (c1vref (car l)))
             (form (c1expr (cadr l)))
             (type (type-and (var-dt (car vref)) (info-type (cadr form)))))

	(do-setq-tp (car vref) (cadr l) (info-type (cadr form)))
	(setq type (var-type (car vref)))

	(unless (equal type (info-type (cadr form)))
	  (set-form-type form type))
;	  (let ((info1 (copy-info (cadr form))))
;	    (setf (info-type info1) type)
;	    (setq form (list* (car form) info1 (cddr form)))))
	(push vref vrefs)
	(push form forms)
	(push-changed (car vref) info)
	(add-info info (cadar forms))))
  (list 'psetq info (reverse vrefs) (reverse forms)))

(defun c2psetq (vrefs forms &aux (*vs* *vs*) (saves nil) (blocks 0))
  (dolist** (vref vrefs)
    (if (or (args-info-changed-vars (car vref) (cdr forms))
            (args-info-referred-vars (car vref) (cdr forms)))
        (case (caar forms)
          (LOCATION (push (cons vref (caddar forms)) saves))
          (otherwise
            (if (assoc (var-kind (car vref)) +return-alist+)
                (let* ((kind (var-kind (car vref)))
                       (cvar (cs-push (var-type (car vref)) t))
                       (temp (list 'var (make-var :kind kind :type (var-type (car vref)) :loc cvar) nil)))
                  (wt-nl "{" *volatile* (rep-type kind) "V" cvar ";")
                  (incf blocks)
                  (let ((*value-to-go* temp)) (c2expr* (car forms)))
                  (push (cons vref temp) saves))
                (let ((*value-to-go* (list 'vs (vs-push))))
                  (c2expr* (car forms))
                  (push (cons vref *value-to-go*) saves)))))
        (let ((*value-to-go* (cons 'var vref))) (c2expr* (car forms))))
    (pop forms))
  (dolist** (save saves) (set-var (cdr save) (caar save) (cadar save)))
  (dotimes (i blocks) (wt "}"))
  (unwind-exit nil)
  )
(defun wt-var-decl (var)
  (cond ((var-p var)
	 (let ((n (var-loc var)))
	   (cond ((eq (var-kind var) #tinteger)(wt "IDECL(")))
	   (wt *volatile* (register var) (rep-type (var-kind var))
	       "V" n )
	   (if (eql (var-kind var) #tinteger) (wt ",V"n"space,V"n"alloc)"))
	   (wt ";")))
        (t (wfs-error))))
