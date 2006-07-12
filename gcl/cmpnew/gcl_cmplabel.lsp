;;-*-Lisp-*-
;;; CMPLABEL  Exit manager.
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

(defvar *last-label* 0)
(defvar *exit*)
(defvar *unwind-exit*)
(defvar *record-call-info* nil)

;;; *last-label* holds the label# of the last used label.
;;; *exit* holds an 'exit', which is
;;;	( label# . ref-flag ) or one of RETURNs (i.e. RETURN, RETURN-FIXNUM,
;;;	RETURN-CHARACTER, RETURN-LONG-FLOAT, RETURN-SHORT-FLOAT, or
;;;	RETURN-OBJECT).
;;; *unwind-exit* holds a list consisting of:
;;;	( label# . ref-flag ), one of RETURNs, TAIL-RECURSION-MARK, FRAME,
;;;	JUMP, BDS-BIND (each pushed for a single special binding), and
;;;	cvar (which holds the bind stack pointer used to unbind).

(defmacro next-label () `(cons (incf *last-label*) nil))

(defmacro next-label* () `(cons (incf *last-label*) t))

(defmacro wt-label (label)
  `(when (cdr ,label) (wt-nl "goto T" (car ,label) ";")(wt-nl1 "T" (car ,label) ":;")))

(defmacro wt-go (label)
  `(progn (rplacd ,label t) (wt "goto T" (car ,label) ";")))


(defvar *restore-avma* nil)

(defun unwind-bds (bds-cvar bds-bind)
       (when (consp *inline-blocks*) (wt-nl "restore_avma; "))
       (when bds-cvar (wt-nl "bds_unwind(V" bds-cvar ");"))
       (dotimes* (n bds-bind) (wt-nl "bds_unwind1;")))

(defun unwind-exit (loc &optional (jump-p nil) fname
                        &aux (*vs* *vs*) (bds-cvar nil) (bds-bind 0) type.wt)
  (declare (fixnum bds-bind))
  (and *record-call-info* (record-call-info loc fname))
  (when (and (eq loc 'fun-val)
	     (not (multiple-values-p))
	     (not *mv-var*)
             (not (eq *value-to-go* 'return))
             (not (eq *value-to-go* 'top)))
	(wt-nl) (reset-top))
  (cond ((and (consp *value-to-go*) (eq (car *value-to-go*) 'jump-true))
         (set-jump-true loc (cadr *value-to-go*))
         (when (eq loc t) (return-from unwind-exit)))
        ((and (consp *value-to-go*) (eq (car *value-to-go*) 'jump-false))
         (set-jump-false loc (cadr *value-to-go*))
         (when (null loc) (return-from unwind-exit))))
  (dolist* (ue *unwind-exit* (baboon))
   (cond
    ((consp ue)
     (cond ((eq ue *exit*)
	    (cond ((and (consp *value-to-go*)
			(or (eq (car *value-to-go*) 'jump-true)
			    (eq (car *value-to-go*) 'jump-false)))
		   (unwind-bds bds-cvar bds-bind))
		  (t
		   (if (or bds-cvar   (plusp bds-bind))
                          ;;; Save the value if LOC may possibly refer
                          ;;; to special binding.
		       (if (and (consp loc)
				(or (and (eq (car loc) 'var)
					 (member (var-kind (cadr loc))
						 '(SPECIAL GLOBAL)))
				    (eq (car loc) 'SIMPLE-CALL)
				    (rassoc (car loc) +inline-types-alist+)))
			   (cond ((and (consp *value-to-go*)
				       (eq (car *value-to-go*) 'vs))
				  (set-loc loc)
				  (unwind-bds bds-cvar bds-bind))
				 (t (let
					((temp (list 'cvar (cs-push))))
				      (let ((*value-to-go* temp))
					(set-loc loc))
				      (unwind-bds bds-cvar bds-bind)
				      (set-loc temp))))
			 (progn (unwind-bds bds-cvar bds-bind)
				(set-loc loc)))
		     (set-loc loc))))

	    (when jump-p
	      (when (consp *inline-blocks*) (wt-nl "restore_avma; "))
	      (wt-nl) (wt-go *exit*))
	    (return))
	   ;; Add (sup .var) handling in unwind-exit -- in
	   ;; c2multiple-value-prog1 and c2-multiple-value-call, apparently
	   ;; alone, c2expr-top is used to evaluate arguments, presumably to
	   ;; preserve certain states of the value stack for the purposes of
	   ;; retrieving the final results.  c2exprt-top rebinds sup, and
	   ;; vs_top in turn to the new sup, causing non-local exits to lose
	   ;; the true top of the stack vital for subsequent function
	   ;; evaluations.  We unwind this stack supremum variable change here
	   ;; when necessary.  CM 20040301
	   ((eq (car ue) 'sup)
	    (when (and ;; If we've pushed the sup, we've always reset vs_top, as we're
		       ;; using c2expr-top{*}.  Regardless then of whether we are
		       ;; explicitly unwinding a fun-val, we must reset the top, unless
		       ;; unless returning, when we rely on the returning code to leave
		       ;; the stack in the correct state, regardless of loc being a fun-val
		       ;; or otherwise.  We might need to reset when returning and loc is not
		       ;; fun-val, but this appears doubtful.  20040306 CM
		       ;; (eq loc 'fun-val)
		       (not (eq *value-to-go* 'return))
		       (not (rassoc *value-to-go* +return-alist+))
		       (not (eq *value-to-go* 'top)))
	      (wt-nl "sup=V" (cdr ue) ";")
	      (wt-nl)
	      (reset-top)))
	   (t (setq jump-p t))))
    ((numberp ue) (setq bds-cvar ue bds-bind 0))
    ((eq ue 'bds-bind) (incf bds-bind))
    ((eq ue 'return)
     (when (eq *exit* 'return)
              ;;; *VALUE-TO-GO* must be either *RETURN* or *TRASH*.
       (set-loc loc)
       (unwind-bds bds-cvar bds-bind)
       (wt-nl "return;")
       (return))
        ;;; Never reached
     )
    ((eq ue 'frame)
     (when (and (consp loc) (or (eq (car loc) 'simple-call) (rassoc (car loc) +inline-types-alist+)))
       (cond ((and (consp *value-to-go*)
		   (eq (car *value-to-go*) 'vs))
	      (set-loc loc)
	      (setq loc *value-to-go*))
	     (t (let ((*value-to-go* (if *c-gc* (list 'cvar (cs-push))
				       (list 'vs (vs-push)))))
		  (set-loc loc)
		  (setq loc *value-to-go*)))))
     ;;baboon if didn't go through above?
     (wt-nl "frs_pop();"))
    ((eq ue 'tail-recursion-mark))
    ((eq ue 'jump) (setq jump-p t))
    ((setq type.wt (assoc (car (rassoc ue +return-alist+)) +wt-loc-alist+))
     (or (eq *exit* ue) (wfs-error))
     (cond ((and *mv-var*
		 (eq loc 'fun-val))
	    (let ((x (cs-push t t))(z (cs-push t t))(w (cs-push t t))(q (cs-push (car type.wt) t)))
	      (wt-nl "{register " (rep-type (car type.wt)) "V" q ";")
	      (wt-nl " object *V" x "=(object *)V" (var-loc *mv-var*) ";")
	      (set-cvar '(vs-base 0) q)
	      (wt-nl "if (V" x ") {")
	      (wt-nl "register object *V" z "=vs_base+1,*V" w "=vs_top;")
	      (wt-nl "for(;V" z "<V" w ";) *V" x "++=*V" z "++;")
	      (wt-nl "vs_top=V" x ";")
	      (wt-nl "} else vs_top=base;")
	      (unwind-bds bds-cvar bds-bind)
	      (wt-nl "return(V" q ");}")))
	   (*mv-var*
	    (let* ((nv (cond ((and (consp fname) (eq (car fname) 'values)) (1- (cdr fname)))
			     ((let ((rt (get-return-type fname)))
				(and (consp rt) (member (car rt) '(values returns-exactly)) (- (length rt) 2))))
			     (0)))
		   (fv (cs-push (car type.wt) t))
		   (lbs (mapcar (lambda (x) (declare (ignore x)) (cs-push t t)) (make-list nv)))
		   (*value-to-go* (mapcar (lambda (x) (list 'cvar x)) (cons fv lbs))))
	      (wt-nl "{" (rep-type (car type.wt)) "V" fv ";")
	      (wt-nl "if (V" (var-loc *mv-var*) ") {")
	      (let ((i -1)) (mapc (lambda (x) (wt-nl "#define V" x " ((object *)V" (var-loc *mv-var*) ")[" (incf i) "]")) lbs))
	      (set-loc loc)
	      (mapc (lambda (x) (wt-nl "#undef V" x)) lbs)
	      (unless (and (consp loc) (integerp (cadr loc)) (flag-p (cadr loc) sets-vs-top))
		(wt-nl "vs_top=((object *)V" (var-loc *mv-var*) ")+" nv ";"))
	      (wt-nl "} else {")
	      (let ((*value-to-go* (list 'cvar fv)))
		(set-loc loc))
	      (wt-nl "}")
	      (unwind-bds bds-cvar bds-bind)
	      (wt-nl "return(" (if (equal (rep-type (car type.wt)) "long ") "(object)" "") "V" fv ");}")))
	   ((let ((cvar (cs-push (car type.wt) t)))
	      (wt-nl "{" (rep-type (car type.wt)) "V" cvar " = ")
	      (funcall (cdr type.wt) loc)
	      (wt ";")
	      (unwind-bds bds-cvar bds-bind)
	      (cond ((and *mv-var* (consp fname) (eq (car fname) 'values)) (wt "return"))
		    ((wt "VMR" *reservation-cmacro*)))
	      (wt-nl "(" (if (equal (rep-type (car type.wt)) "long ") "(object)" "") 
		       "V" cvar ");}"))))
     (return))
    (t (baboon))
       ;;; Never reached
    )))

(defun unwind-no-exit (exit &aux (bds-cvar nil) (bds-bind 0))
  (declare (fixnum bds-bind))
  (dolist* (ue *unwind-exit* (baboon))
    (cond
       ((consp ue)
        (when (eq ue exit)
              (unwind-bds bds-cvar bds-bind)
              (return))
	;; Add (sup .var) handling in unwind-exit -- in
	;; c2multiple-value-prog1 and c2-multiple-value-call, apparently
	;; alone, c2expr-top is used to evaluate arguments, presumably to
	;; preserve certain states of the value stack for the purposes of
	;; retrieving the final results.  c2exprt-top rebinds sup, and
	;; vs_top in turn to the new sup, causing non-local exits to lose
	;; the true top of the stack vital for subsequent function
	;; evaluations.  We unwind this stack supremum variable change here
	;; when necessary.  CM 20040301
	(when (eq (car ue) 'sup)
	  (wt-nl "sup=V" (cdr ue) ";")
	  (wt-nl)
	  (reset-top)))
       ((numberp ue) (setq bds-cvar ue bds-bind 0))
       ((eq ue 'bds-bind) (incf bds-bind))
       ((or (eq ue 'return) (rassoc ue +return-alist+))
        (cond ((eq exit ue) (unwind-bds bds-cvar bds-bind)
                            (return))
              (t (baboon)))
        ;;; Never reached
        )
       ((eq ue 'frame) (wt-nl "frs_pop();"))
       ((eq ue 'tail-recursion-mark)
        (cond ((eq exit 'tail-recursion-mark) (unwind-bds bds-cvar bds-bind)
                                              (return))
              (t (baboon)))
        ;;; Never reached
        )
       ((eq ue 'jump))
       (t (baboon))
       ;;; Never reached
       ))
  )

;;; Tail-recursion optimization for a function F is possible only if
;;;	1. the value of *DO-TAIL-RECURSION* is non-nil (this is default),
;;;	2. F receives only required parameters, and
;;;	3. no required parameter of F is enclosed in a closure.
;;;
;;; A recursive call (F e1 ... en) may be replaced by a loop only if
;;;	1. F is not declared as NOTINLINE,
;;;	2. n is equal to the number of required parameters of F,
;;;	3. the form is a normal function call (i.e. the arguments are
;;;	   pushed on the stack,
;;;	4. (F e1 ... en) is not surrounded by a form that causes dynamic
;;;	   binding (such as LET, LET*, PROGV),
;;;	5. (F e1 ... en) is not surrounded by a form that that pushes a frame
;;;	   onto the frame-stack (such as BLOCK and TAGBODY whose tags are
;;;	   enclosed in a closure, and CATCH),

(defun tail-recursion-possible ()
  (dolist* (ue *unwind-exit* (baboon))
    (cond ((eq ue 'tail-recursion-mark) (return t))
          ((or (numberp ue) (eq ue 'bds-bind) (eq ue 'frame))
           (return nil))
          ((or (consp ue) (eq ue 'jump)))
          (t (baboon)))))
