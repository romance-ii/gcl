;;-*-Lisp-*-
;;; CMPLOC  Set-loc and Wt-loc.
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

(defvar *value-to-go*)
(defvar *values-to-go* nil)
(defvar *multiple-value-exit-label* nil)

;;; Valid locations are:
;;;	NIL
;;;	T
;;;	'FUN-VAL'
;;;	( 'VS' vs-address )
;;;	( 'VS*' vs-address )
;;;	( 'CCB-VS' ccb-vs )
;;;	( 'VAR' var-object ccb )
;;;	( 'VV' vv-index )
;;;	( 'CVAR' cvar )
;;;	( 'INLINE' side-effect-p fun/string locs )
;;;	( 'INLINE-COND' side-effect-p fun/string locs )
;;;	( 'INLINE-FIXNUM' side-effect-p fun/string locs )
;;;	( 'INLINE-CHARACTER' side-effect-p fun/string locs )
;;;	( 'INLINE-LONG-FLOAT' side-effect-p fun/string locs )
;;;	( 'INLINE-SHORT-FLOAT' side-effect-p fun/string locs )
;;;	( 'SIMPLE-CALL {   SYMLISPCALL-NO-EVENT
;;;   	                 | LISPCALL-NO-EVENT
;;;   	                 | SYMLISPCALL
;;;   	                 | LISPCALL }
;;;		vs-index number-of-arguments [ vv-index ] )
;;;	( 'VS-BASE' offset )
;;;	( 'CAR' cvar )
;;;	( 'CADR' cvar )
;;;	( 'SYMBOL-FUNCTION' vv-index )
;;;	( 'MAKE-CCLOSURE' cfun cllink )
;;;	( 'FIXNUM-VALUE' vv-index fixnum-value )
;;;	( 'FIXNUM-LOC' loc )
;;;	( 'CHARACTER-VALUE' vv-index character-code )
;;;	( 'CHARACTER-LOC' loc )
;;;	( 'LONG-FLOAT-VALUE' vv-index long-float-value )
;;;	( 'LONG-FLOAT-LOC' loc )
;;;	( 'SHORT-FLOAT-VALUE' vv-index short-float-value )
;;;	( 'SHORT-FLOAT-LOC' loc )


;;; Valid *value-to-go* locations are:
;;;
;;;	'RETURN'	The value is returned from the current function.
;;;	'RETURN-FIXNUM'
;;;	'RETURN-CHARACTER'
;;;	'RETURN-LONG-FLOAT'
;;;	'RETURN-SHORT-FLOAT'
;;;	'RETURN-OBJECT
;;;	'TRASH'		The value may be thrown away.
;;;	'TOP'		The value should be set at the top of vs as if it were
;;;			a resulted value of a function call.
;;;	( 'VS' vs-address )
;;;	( 'VS*' vs-address )
;;;	( 'CCB-VS' ccb-vs )
;;;	( 'VAR' var-object ccb )
;;;	( 'JUMP-TRUE' label )
;;;	( 'JUMP-FALSE' label )
;;;	( 'BDS-BIND' vv-index )
;;;	( 'PUSH-CATCH-FRAME' )
;;;	( 'DBIND' symbol-name-vv )

(si:putprop 'cvar 'wt-cvar 'wt-loc)
(si:putprop 'vv 'wt-vv 'wt-loc)
(si:putprop 'car 'wt-car 'wt-loc)
(si:putprop 'cdr 'wt-cdr 'wt-loc)
(si:putprop 'cadr 'wt-cadr 'wt-loc)
(si:putprop 'vs-base 'wt-vs-base 'wt-loc)
(si:putprop 'fixnum-value 'wt-fixnum-value 'wt-loc)
(si:putprop 'vs-address 'wt-vs-address 'wt-loc)
(si:putprop 'fixnum-loc 'wt-fixnum-loc 'wt-loc)
(si:putprop 'integer-loc 'wt-integer-loc 'wt-loc)
(si:putprop 'character-value 'wt-character-value 'wt-loc)
(si:putprop 'character-loc 'wt-character-loc 'wt-loc)
(si:putprop 'long-float-value 'wt-long-float-value 'wt-loc)
(si:putprop 'long-float-loc 'wt-long-float-loc 'wt-loc)
(si:putprop 'short-float-value 'wt-short-float-value 'wt-loc)
(si:putprop 'short-float-loc 'wt-short-float-loc 'wt-loc)
(si:putprop 'fcomplex-value 'wt-fcomplex-value 'wt-loc)
(si:putprop 'fcomplex-loc 'wt-fcomplex-loc 'wt-loc)
(si:putprop 'dcomplex-value 'wt-dcomplex-value 'wt-loc)
(si:putprop 'dcomplex-loc 'wt-dcomplex-loc 'wt-loc)
(si::putprop 'next-var-arg  'wt-next-var-arg 'wt-loc)
(si::putprop 'first-var-arg  'wt-first-var-arg 'wt-loc)

(defun wt-first-var-arg ()
  (wt "first"))

(defun wt-next-var-arg ()
  (wt "va_arg(ap,object)"))

(defun multiple-values-p ()
  (and (consp *value-to-go*) (consp (car *value-to-go*))))

(defvar *extend-vs-top*)

(defun set-loc (loc &aux fd)
  (cond ((eq *value-to-go* 'return) (set-return loc))
        ((eq *value-to-go* 'trash)
         (cond ((and (consp loc)
                     (rassoc (car loc) +inline-types-alist+)
                     (cadr loc))
                (wt-nl "(void)(") (wt-inline t (caddr loc) (cadddr loc))
                (wt ");"))
               ((and (consp loc) (eq (car loc) 'SIMPLE-CALL))
                (wt-nl "(void)" loc ";"))))
        ((eq *value-to-go* 'top)
         (unless (eq loc 'fun-val) (set-top loc)))
	((multiple-values-p)
	 (let ((*values-to-go* *value-to-go*) *extend-vs-top*)
	   (do ((loc loc nil)) ((null *values-to-go*))
	       (let ((*value-to-go* (pop *values-to-go*)))
		 (set-loc loc)))
	   (when *mvb-vals* 
	     (wt-nl)
	     (when (and *extend-vs-top* (> (var-space *mv-var*) 0))
	       (let ((l (var-loc *mv-var*)))
		 (wt-nl "for (vs_top=vs_top<V" l "? V" l ": vs_top;vs_top<V" l "+" (var-space *mv-var*) ";) *vs_top++=Cnil;")))
	     (reset-top)
	     (wt-nl "vals_set=1;"))))
        ((setq fd (cdr (assoc *value-to-go* +set-return-alist+))) (values (funcall fd loc)))
        ((or (not (consp *value-to-go*))
             (not (symbolp (car *value-to-go*))))
         (baboon))
        ((setq fd (get (car *value-to-go*) 'set-loc))
         (values (apply fd loc (cdr *value-to-go*))))
        ((setq fd (get (car *value-to-go*) 'wt-loc))
         (wt-nl) (apply fd (cdr *value-to-go*)) (wt "= " loc ";"))
        (t (baboon))))

(defun wt-loc (loc)
  (cond ((eq loc nil) (wt "Cnil"))
        ((eq loc t) (wt "Ct"))
        ((eq loc 'fun-val) 
	 (wt "({register object _z=vs_base[0];" )
	 (when (and *values-to-go* *mv-var*) 
	   (wt "register object *_x=vs_base+1,"
	       "*_y=(object *)V" (var-loc *mv-var*) ";"
	       "if (!_y) vs_top=base; else if (vs_top<_x) vs_top=_y-1; else {for(;_x<vs_top;) *_y++=*_x++;vs_top=_y;}")
	   (base-used)
	   (unless (boundp '*extend-vs-top*) (baboon))
	   (setq *extend-vs-top* t *values-to-go* nil))
	 (wt "_z;})"))
        ((or (not (consp loc))
             (not (symbolp (car loc))))
         (baboon))
        (t (let ((fd (get (car loc) 'wt-loc)))
                (when (null fd) (baboon))
                (values (apply fd (cdr loc)))))))

(defun set-return (loc)
  (cond ((eq loc 'fun-val))
        ((and (consp loc) (eq (car loc) 'vs) (= (caadr loc) *level*))
         (wt-nl "vs_top=(vs_base=base+" (cdadr loc) ")+1;")
         (base-used))
        ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) 'LEXICAL)
              (not (var-ref-ccb (cadr loc)))
              (eql (car (var-ref (cadr loc))) *level*))
         (wt-nl "vs_top=(vs_base=base+" (cdr (var-ref (cadr loc))) ")+1;")
         (base-used))
        ((set-top loc))))

(defun set-top (loc)
  (let ((vs-mark *vs*) (*vs* *vs*))
    (wt-nl) (wt-vs (vs-push)) (wt "= " loc ";")
    (if (and (consp loc) (rassoc (car loc) +inline-types-alist+) (flag-p (cadr loc) sets-vs-top))
	(wt-nl "vs_base=base+" vs-mark ";");;callee sets vs_top; obsolete ???
      (wt-nl "vs_top=(vs_base=base+" vs-mark ")+" (- *vs* vs-mark) ";"))
    (base-used)))

(defun wt-vs-base (offset) (wt "vs_base[" offset "]"))

(defun wt-car (cvar) (wt "(V" cvar "->c.c_car)"))

(defun wt-cdr (cvar) (wt "(V" cvar "->c.c_cdr)"))

(defun wt-cadr (cvar) (wt "(V" cvar "->c.c_cdr->c.c_car)"))

(defun wt-cvar (cvar &optional type)
  (if type (wt "/* " (symbol-name type) " */"))
  (wt "V" cvar))

(defun vv-str (vv) (si::string-concatenate "((object)VV[" (write-to-string vv) "])"))

(defun wt-vv (vv) (wt (vv-str vv)))

(defun wt-fixnum-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) #tfixnum))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc)
	      (member (car loc) +number-inlines+))
         (wt "(fixnum)")(wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'fixnum-value))
         (wt "(fixnum)")
	 (cond ((= (caddr loc) most-negative-fixnum) (wt "(" (1+ most-negative-fixnum) "- 1)"))
	       ((wt (caddr loc)))))
	((and (consp loc) (eq (car loc) 'vs-address));????
	 (wt loc))
        (t (wt (if *safe-compile* "fixint(" "fix(") loc ")"))))

(defun wt-integer-loc (loc  &aux (avma t)(first (and (consp loc) (car loc))))
  (case first
    (inline-fixnum
     (wt "stoi(")
     (wt-inline-loc (caddr loc) (cadddr loc))
     (wt ")"))
    (INLINE-INTEGER (setq avma nil)  (wt-inline-loc (caddr loc) (cadddr loc)))
    (fixnum-value       (wt "stoi(" (caddr loc) ")"))
    (var
     (cond
       ((eq (var-kind (cadr loc)) #tinteger)  (setq avma nil)   (wt "V" (var-loc (cadr loc))))
       ((eq (var-kind (cadr loc)) #tfixnum)   (wt "stoi(V" (var-loc (cadr loc))")"))
       ((wt "otoi(" loc ")"))))
    (otherwise (wt "otoi(" loc ")")))
;  (and avma (not *restore-avma*)(wfs-error))
  )
     

(defun fixnum-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) #tfixnum))
           (eq (car loc) 'INLINE-FIXNUM)
           (eq (car loc) 'fixnum-value))))

(defun wt-fixnum-value (vv fixnum-value)
  (if vv (wt (vv-str vv))
    (wt "make_fixnum(" fixnum-value ")")))
        
(defun wt-vs-address (v i)
  (wt v "+" i))

(defun wt-character-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) #tcharacter))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-CHARACTER))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'CHARACTER-VALUE))
         (wt (caddr loc)))
        (t (wt "char_code(" loc ")"))))

(defun character-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) #tcharacter))
           (eq (car loc) 'INLINE-CHARACTER)
           (eq (car loc) 'character-value))))

(defun wt-character-value (vv character-code)
  (if vv (wt (vv-str vv))
    (wt "code_char(" character-code ")")))

(defun wt-long-float-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) #tlong-float))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-LONG-FLOAT))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'long-float-value))
         (wt (caddr loc)))
        (t (wt "lf(" loc ")"))))

(defun long-float-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) #tlong-float))
           (eq (car loc) 'INLINE-LONG-FLOAT)
           (eq (car loc) 'long-float-value))))

(defun wt-long-float-value (vv long-float-value)
       (declare (ignore long-float-value))
       (wt (vv-str vv)))

(defun wt-short-float-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) #tshort-float))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-SHORT-FLOAT))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'short-float-value))
         (wt (caddr loc)))
        (t (wt "sf(" loc ")"))))

(defun short-float-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) #tshort-float))
           (eq (car loc) 'INLINE-SHORT-FLOAT)
           (eq (car loc) 'short-float-value))))

(defun wt-short-float-value (vv short-float-value)
       (declare (ignore short-float-value))
       (wt (vv-str vv)))

(defun wt-fcomplex-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) #tfcomplex))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-FCOMPLEX))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'fcomplex-value))
         (wt (caddr loc)))
        (t (wt "sfc(" loc ")"))))

(defun fcomplex-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) #tfcomplex))
           (eq (car loc) 'INLINE-FCOMPLEX)
           (eq (car loc) 'fcomplex-value))))

(defun wt-fcomplex-value (vv fcomplex-value)
       (declare (ignore fcomplex-value))
       (wt (vv-str vv)))

(defun wt-dcomplex-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) #tdcomplex))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-DCOMPLEX))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'dcomplex-value))
         (wt (caddr loc)))
        (t (wt "lfc(" loc ")"))))

(defun dcomplex-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) #tdcomplex))
           (eq (car loc) 'INLINE-DCOMPLEX)
           (eq (car loc) 'dcomplex-value))))

(defun wt-dcomplex-value (vv dcomplex-value)
       (declare (ignore dcomplex-value))
       (wt (vv-str vv)))
