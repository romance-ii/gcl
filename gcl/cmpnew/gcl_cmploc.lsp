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
(si:putprop 'fixnum-loc 'wt-fixnum-loc 'wt-loc)
(si:putprop 'integer-loc 'wt-integer-loc 'wt-loc)
(si:putprop 'character-value 'wt-character-value 'wt-loc)
(si:putprop 'character-loc 'wt-character-loc 'wt-loc)
(si:putprop 'long-float-value 'wt-long-float-value 'wt-loc)
(si:putprop 'long-float-loc 'wt-long-float-loc 'wt-loc)
(si:putprop 'short-float-value 'wt-short-float-value 'wt-loc)
(si:putprop 'short-float-loc 'wt-short-float-loc 'wt-loc)
(si::putprop 'next-var-arg  'wt-next-var-arg 'wt-loc)
(si::putprop 'first-var-arg  'wt-first-var-arg 'wt-loc)

(defun wt-first-var-arg ()
  (wt "first"))

(defun wt-next-var-arg ()
  (wt "va_arg(ap,object)"))

(defun set-loc (loc &aux fd)
  (cond ((eq *value-to-go* 'return) (set-return loc))
        ((eq *value-to-go* 'trash)
         (cond ((and (consp loc)
                     (member (car loc)
                             '(INLINE INLINE-COND INLINE-FIXNUM inline-integer
                               INLINE-CHARACTER INLINE-LONG-FLOAT
                               INLINE-SHORT-FLOAT))
                     (cadr loc))
                (wt-nl "(void)(") (wt-inline t (caddr loc) (cadddr loc))
                (wt ");"))
               ((and (consp loc) (eq (car loc) 'SIMPLE-CALL))
                (wt-nl "(void)" loc ";"))))
        ((eq *value-to-go* 'top)
         (unless (eq loc 'fun-val) (set-top loc)))
        ((eq *value-to-go* 'return-fixnum) (set-return-fixnum loc))
        ((eq *value-to-go* 'return-character) (set-return-character loc))
        ((eq *value-to-go* 'return-long-float) (set-return-long-float loc))
        ((eq *value-to-go* 'return-short-float) (set-return-short-float loc))
        ((or (not (consp *value-to-go*))
             (not (symbolp (car *value-to-go*))))
         (baboon))
        ((setq fd (get (car *value-to-go*) 'set-loc))
         (apply fd loc (cdr *value-to-go*)))
        ((setq fd (get (car *value-to-go*) 'wt-loc))
         (wt-nl) (apply fd (cdr *value-to-go*)) (wt "= " loc ";"))
        (t (baboon)))
  )

(defun wt-loc (loc)
  (cond ((eq loc nil) (wt "Cnil"))
        ((eq loc t) (wt "Ct"))
        ((eq loc 'fun-val) (wt "vs_base[0]"))
        ((or (not (consp loc))
             (not (symbolp (car loc))))
         (baboon))
        (t (let ((fd (get (car loc) 'wt-loc)))
                (when (null fd) (baboon))
                (apply fd (cdr loc)))))
  )

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
        (t (set-top loc)))
  )

(defun set-top (loc)
 (let ((*vs* *vs*))
      (wt-nl) (wt-vs (vs-push)) (wt "= " loc ";")
      (wt-nl "vs_top=(vs_base=base+" (1- *vs*) ")+1;")
      (base-used)))

(defun wt-vs-base (offset) (wt "vs_base[" offset "]"))

(defun wt-car (cvar) (wt "(V" cvar "->c.c_car)"))

(defun wt-cdr (cvar) (wt "(V" cvar "->c.c_cdr)"))

(defun wt-cadr (cvar) (wt "(V" cvar "->c.c_cdr->c.c_car)"))

(defun wt-cvar (cvar &optional type)
  (if type (wt "/* " (symbol-name type) " */"))
  (wt "V" cvar))

(defun wt-vv (vv) (wt "VV[" vv "]"))

(defun wt-fixnum-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) 'FIXNUM))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-FIXNUM))
         (wt "(long)")(wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'fixnum-value))
         (wt "(long)")(wt (caddr loc)))
        ((and (consp loc) (member (car loc) '(INLINE-SHORT-FLOAT
					      INLINE-LONG-FLOAT)))
	 (wt "((long)(")
	 (wt-inline-loc  (caddr loc) (cadddr loc))
	 (wt "))"))
        (t (wt "fix(" loc ")"))))

(defun wt-integer-loc (loc &optional type
			   &aux (avma t)(first (and (consp loc) (car loc))))
  (declare (ignore type))
  (case first
    (inline-fixnum
     (wt "stoi(")
     (wt-inline-loc (caddr loc) (cadddr loc))
     (wt ")"))
    (INLINE-INTEGER (setq avma nil)  (wt-inline-loc (caddr loc) (cadddr loc)))
    (fixnum-value       (wt "stoi(" (caddr loc) ")"))
    (var
     (case (var-kind (cadr loc))
       (integer  (setq avma nil)   (wt "V" (var-loc (cadr loc))))
       (fixnum           (wt "stoi(V" (var-loc (cadr loc))")"))
       (otherwise (wt "otoi(" loc ")"))))
    (otherwise (wt "otoi(" loc ")")))
  (and avma (not *restore-avma*)(wfs-error))
  )
     

(defun fixnum-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) 'FIXNUM))
           (eq (car loc) 'INLINE-FIXNUM)
           (eq (car loc) 'fixnum-value))))

(defun wt-fixnum-value (vv fixnum-value)
  (if vv (wt "VV[" vv "]")
    (wt "small_fixnum(" fixnum-value ")")))
        

(defun wt-character-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) 'CHARACTER))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-CHARACTER))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'CHARACTER-VALUE))
         (wt (caddr loc)))
        (t (wt "char_code(" loc ")"))))

(defun character-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) 'CHARACTER))
           (eq (car loc) 'INLINE-CHARACTER)
           (eq (car loc) 'character-value))))

(defun wt-character-value (vv character-code)
       (declare (ignore character-code))
       (wt "VV[" vv "]"))

(defun wt-long-float-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) 'LONG-FLOAT))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-LONG-FLOAT))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'long-float-value))
         (wt (caddr loc)))
        (t (wt "lf(" loc ")"))))

(defun long-float-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) 'LONG-FLOAT))
           (eq (car loc) 'INLINE-LONG-FLOAT)
           (eq (car loc) 'long-float-value))))

(defun wt-long-float-value (vv long-float-value)
       (declare (ignore long-float-value))
       (wt "VV[" vv "]"))

(defun wt-short-float-loc (loc)
  (cond ((and (consp loc)
              (eq (car loc) 'var)
              (eq (var-kind (cadr loc)) 'SHORT-FLOAT))
         (wt "V" (var-loc (cadr loc))))
        ((and (consp loc) (eq (car loc) 'INLINE-SHORT-FLOAT))
         (wt-inline-loc (caddr loc) (cadddr loc)))
        ((and (consp loc) (eq (car loc) 'short-float-value))
         (wt (caddr loc)))
        (t (wt "sf(" loc ")"))))

(defun short-float-loc-p (loc)
  (and (consp loc)
       (or (and (eq (car loc) 'var)
                (eq (var-kind (cadr loc)) 'SHORT-FLOAT))
           (eq (car loc) 'INLINE-SHORT-FLOAT)
           (eq (car loc) 'short-float-value))))

(defun wt-short-float-value (vv short-float-value)
       (declare (ignore short-float-value))
       (wt "VV[" vv "]"))
