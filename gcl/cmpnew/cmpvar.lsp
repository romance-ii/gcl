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
  (type t)	;;; Type of the variable.
  (register 0)  ;;; If greater than specified am't this goes into register.
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
       (cmpck (constantp name) "The constant ~s is being bound." name)

       (cond ((or (member name specials) (si:specialp name))
              (setf (var-kind var) 'SPECIAL)
              (setf (var-loc var) (add-symbol name))
              (cond ((setq x (assoc name types))
                     (setf (var-type var) (cdr x)))
                    ((setq x (get name 'cmp-type))
                     (setf (var-type var) x)))
              (setq *special-binding* t))
             (t
	      (dolist** (v types)
			(cond ((eq (car v) name)
			       (case (cdr v)
				     (object (setf (var-loc var) 'object))
				     (register
				      (setf (var-register var)
					    (+ (var-register var) 100)))
				     (t (setf (var-type var) (cdr v)))))))
	      (and (boundp '*c-gc*) *c-gc*
		   (or (null (var-type var))
		       (eq t (var-type var)))
		   (setf (var-loc var) 'object))
              (setf (var-kind var) 'LEXICAL)))
       (when (member name ignores) (setf (var-ref var) 'IGNORE))
       var)
  )

(defun check-vref (var)
  (when (and (eq (var-kind var) 'LEXICAL)
             (not (var-ref var)) ;;; This field may be IGNORE.
             (not (var-ref-ccb var)))
        (cmpwarn "The variable ~s is not used." (var-name var))))

(defun c1var (name)
  (let ((info (make-info))
        (vref (c1vref name)))
       (push (car vref) (info-referred-vars info))
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
               (declare (object type))
               (cond ((type>= 'fixnum type) 'FIXNUM)
		     ((type>= 'integer type) 'INTEGER)
                     ((type>= 'CHARACTER type) 'CHARACTER)
                     ((type>= 'long-float type) 'LONG-FLOAT)
                     ((type>= 'short-float type) 'SHORT-FLOAT)
                     ((and (boundp '*c-gc*) *c-gc* 'OBJECT))
		     (t nil))))
      nil)
  )

(defun c2var (vref) (unwind-exit (cons 'var vref) nil 'single-value))

(defun c2location (loc) (unwind-exit loc nil 'single-value))


(defun check-downward (vars &aux no-down )
  (dolist (v *local-functions*)
	  (cond ((eq (car v) 'function)
		 (setq no-down t)
		 (dolist (w *local-functions*)
			 (cond ((eq (car w) 'downward-function)
				(setf (car w) 'function))))
		 (return nil))))
  (setq *local-functions* nil)
  (cond (no-down
	(dolist (var vars)
		(if (eq (var-kind var) 'down)
		    (setf (var-kind var) 'lexical))))))


(defun assign-down-vars(vars cfun inside &aux (ind 0) )
  (dolist (var vars)
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
        (t (case (var-kind var)
                 (FIXNUM (when (zerop *space*) (wt "CMP"))
                         (wt "make_fixnum"))
		 (INTEGER (wt "make_integer")) 
                 (CHARACTER (wt "code_char"))
                 (LONG-FLOAT (wt "make_longfloat"))
                 (SHORT-FLOAT (wt "make_shortfloat"))
                 (OBJECT)
                 (t (baboon)))
           (wt "(V" (var-loc var) ")"))
        ))

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
	    (INTEGER
	     (let ((first (and (consp loc) (car loc)))
		   (n (var-loc var)))
	       (case first
		 (inline-fixnum
		  (wt-nl "ISETQ_FIX(V"n",V"n"alloc,")
		  (wt-inline-loc (caddr loc) (cadddr loc)))
		 (fixnum-value (wt-nl "ISETQ_FIX(V"n",V"n"alloc,"(caddr loc)))

		 (var
		  (case (var-kind (cadr loc))
		    (integer (wt "SETQ_II(V"n",V"n"alloc,V" (var-loc (cadr loc))))
		    (fixnum  (wt "ISETQ_FIX(V"n",V"n"alloc,V" (var-loc (cadr loc))))
		    (otherwise (wt "SETQ_IO(V"n",V"n"alloc,"loc ))))
		 (vs (wt "SETQ_IO(V"n",V"n"alloc,"loc ))
		 (otherwise
		  (let ((*inline-blocks* 0) (*restore-avma* *restore-avma*))
		    (save-avma '(nil integer))
		    (wt-nl "SETQ_II(V"n",V" n"alloc,")
		    (wt-integer-loc loc  (cons 'set-var var))
		    (wt ");")
		    (close-inline-blocks))
		  (return-from set-var nil))
		  )
	       (wt ");")))
            (t
             (wt-nl "V" (var-loc var) "= ")
             (case (var-kind var)
                   (FIXNUM (wt-fixnum-loc loc))
                   (CHARACTER (wt-character-loc loc))
                   (LONG-FLOAT (wt-long-float-loc loc))
                   (SHORT-FLOAT (wt-short-float-loc loc))
                   (OBJECT (wt-loc loc))
                   (t (baboon)))
             (wt ";"))
            )))

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

(defun c1setq1 (name form &aux (info (make-info)) type form1 name1)
  (cmpck (not (symbolp name)) "The variable ~s is not a symbol." name)
  (cmpck (constantp name) "The constant ~s is being assigned a value." name)
  (setq name1 (c1vref name))
  (push (car name1) (info-changed-vars info))
  (setq form1 (c1expr form))
  (add-info info (cadr form1))
  (setq type (type-and (var-type (car name1)) (info-type (cadr form1))))
  (when (null type)
        (cmpwarn "Type mismatches between ~s and ~s." name form))
  (unless (eq type (info-type (cadr form1)))
    (let ((info1 (copy-info (cadr form1))))
         (setf (info-type info1) type)
         (setq form1 (list* (car form1) info1 (cddr form1)))))
  (setf (info-type info) type)
  (list 'setq info name1 form1)
  )

(defun c2setq (vref form)
  (let ((*value-to-go* (cons 'var vref))) (c2expr* form))
  (case (car form)
        (LOCATION (c2location (caddr form)))
        (otherwise (unwind-exit (cons 'var vref))))
  )

(defun c1progv (args &aux symbols values (info (make-info)))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'progv 2 (length args)))
  (setq symbols (c1expr* (car args) info))
  (setq values (c1expr* (cadr args) info))
  (list 'progv info symbols values (c1progn* (cddr args) info))
  )

(defun c2progv (symbols values body
                &aux (cvar (next-cvar))
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
             (type (type-and (var-type (car vref))
                             (info-type (cadr form)))))
            (unless (equal type (info-type (cadr form)))
              (let ((info1 (copy-info (cadr form))))
                   (setf (info-type info1) type)
                   (setq form (list* (car form) info1 (cddr form)))))
            (push vref vrefs)
            (push form forms)
            (push (car vref) (info-changed-vars info))
            (add-info info (cadar forms)))
      )
  (list 'psetq info (reverse vrefs) (reverse forms))
  )

(defun c2psetq (vrefs forms &aux (*vs* *vs*) (saves nil) (blocks 0))
  (dolist** (vref vrefs)
    (if (or (args-info-changed-vars (car vref) (cdr forms))
            (args-info-referred-vars (car vref) (cdr forms)))
        (case (caar forms)
          (LOCATION (push (cons vref (caddar forms)) saves))
          (otherwise
            (if (member (var-kind (car vref))
                        '(FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT OBJECT))
                (let* ((kind (var-kind (car vref)))
                       (cvar (next-cvar))
                       (temp (list 'var (make-var :kind kind :loc cvar) nil)))
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
	   (cond ((eq (var-kind var) 'integer)(wt "IDECL(")))
	   (wt *volatile* (register var) (rep-type (var-kind var))
	       "V" n )
	   (if (eql (var-kind var) 'integer) (wt ",V"n"space,V"n"alloc)"))
	   (wt ";")))
        (t (wfs-error))))
