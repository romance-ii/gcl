;;; CMPMULT  Multiple-value-call and Multiple-value-prog1.
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

(si:putprop 'multiple-value-call 'c1multiple-value-call 'c1special)
(si:putprop 'multiple-value-call 'c2multiple-value-call 'c2)
(si:putprop 'multiple-value-prog1 'c1multiple-value-prog1 'c1special)
(si:putprop 'multiple-value-prog1 'c2multiple-value-prog1 'c2)
(si:putprop 'values 'c1values 'c1)
(si:putprop 'values 'c2values 'c2)
(si:putprop 'multiple-value-setq 'c1multiple-value-setq 'c1)
(si:putprop 'multiple-value-setq 'c2multiple-value-setq 'c2)
(si:putprop 'multiple-value-bind 'c1multiple-value-bind 'c1)
(si:putprop 'multiple-value-bind 'c2multiple-value-bind 'c2)

(defun c1multiple-value-call (args &aux info funob)
  (when (endp args) (too-few-args 'multiple-value-call 1 0))
  (cond ((endp (cdr args)) (c1funcall args))
        (t (setq funob (c1funob (car args)))
           (setq info (copy-info (cadr funob)))
           (setq args (c1args (cdr args) info))
           (list 'multiple-value-call info funob args)))
  )

(defun c2multiple-value-call (funob forms &aux (*vs* *vs*) loc top sup)
  (cond ((endp (cdr forms))
         (setq loc (save-funob funob))
         (let ((*value-to-go* 'top)) (c2expr* (car forms)))
         (c2funcall funob 'args-pushed loc))
        (t
         (setq top (next-cvar))
         (setq sup (next-cvar))
         (setq loc (save-funob funob))
         (base-used)
	 ;; Add (sup .var) handling in unwind-exit -- in
	 ;; c2multiple-value-prog1 and c2-multiple-value-call, apparently
	 ;; alone, c2expr-top is used to evaluate arguments, presumably to
	 ;; preserve certain states of the value stack for the purposes of
	 ;; retrieving the final results.  c2exprt-top rebinds sup, and
	 ;; vs_top in turn to the new sup, causing non-local exits to lose
	 ;; the true top of the stack vital for subsequent function
	 ;; evaluations.  We unwind this stack supremum variable change here
	 ;; when necessary.  CM 20040301
         (wt-nl "{object *V" top "=base+" *vs* ",*V" sup "=sup;")
	 (dolist** (form forms)
		   (let ((*value-to-go* 'top)
			 (*unwind-exit* (cons (cons 'sup sup) *unwind-exit*)))
		     (c2expr-top* form top))
		   (wt-nl "while(vs_base<vs_top)")
		   (wt-nl "{V" top "[0]=vs_base[0];V" top "++;vs_base++;}"))
         (wt-nl "vs_base=base+" *vs* ";vs_top=V" top ";sup=V" sup ";")
         (c2funcall funob 'args-pushed loc)
         (wt "}")))
  )

(defun c1multiple-value-prog1 (args &aux (info (make-info)) form)
  (when (endp args) (too-few-args 'multiple-value-prog1 1 0))
  (setq form (c1expr* (car args) info))
  (setq args (c1args (cdr args) info))
  (list 'multiple-value-prog1 info form args)
  )
;; We may record information here when *value-to-go* = 'top
(defvar *top-data* nil)

(defun c2multiple-value-prog1 (form forms &aux (base (next-cvar))
				               (top (next-cvar))
					       (sup (next-cvar))
					       top-data)
  (let ((*value-to-go* 'top)
	*top-data* )
    (c2expr* form)
    (setq top-data *top-data*))
  ;; Add (sup .var) handling in unwind-exit -- in
  ;; c2multiple-value-prog1 and c2-multiple-value-call, apparently
  ;; alone, c2expr-top is used to evaluate arguments, presumably to
  ;; preserve certain states of the value stack for the purposes of
  ;; retrieving the final results.  c2exprt-top rebinds sup, and
  ;; vs_top in turn to the new sup, causing non-local exits to lose
  ;; the true top of the stack vital for subsequent function
  ;; evaluations.  We unwind this stack supremum variable change here
  ;; when necessary.  CM 20040301
  (wt-nl "{object *V" top "=vs_top,*V" base "=vs_base,*V" sup "=sup;")
  (wt-nl "vs_base=V" top ";")
  (dolist** (form forms)
	    (let ((*value-to-go* 'trash)
		  (*unwind-exit* (cons (cons 'sup sup) *unwind-exit*)))
	      (c2expr-top* form top)))
  (wt-nl "vs_base=V" base ";vs_top=V" top ";sup=V" sup ";}")
  (unwind-exit 'fun-val nil (if top-data (car top-data)))
  )

(defun c1values (args &aux (info (make-info)))
      (cond ((and args (not (cdr args))
		  (or (not (consp (car args)))
		      (and (symbolp (caar args))
			   (let ((tem (get-return-type (caar args))))
			     (and tem
				  (or (atom tem)
				      (and (consp tem)
					   (null (cdr tem))
					   (not (eq '* (car tem))))))))))
	     ;;the compiler put in unnecessary code
	     ;;if we just had say (values nil)
	     ;; so if we know there's one value only:
	     (c1expr (car args)))
	    (t  (setq args (c1args args info))
              (list 'values info args))))

(defun c2values (forms &aux (base *vs*) (*vs* *vs*))
     (cond ((and (eq *value-to-go* 'return-object)
		 (cdr forms)
		 (consp *current-form*)
		 (eq 'defun (car *current-form*)))
		(cmpwarn "Trying to return multiple values. ~%;But ~a was proclaimed to have single value.~%;Only first one will assured."
			 (cadr *current-form*))))

  (cond ((null forms)
         (wt-nl "vs_base=vs_top=base+" base ";")
         (base-used)
         (wt-nl "vs_base[0]=Cnil;"))
        (t
         (dolist** (form forms)
           (let ((*value-to-go* (list 'vs (vs-push)))) (c2expr* form)))
         (wt-nl "vs_top=(vs_base=base+" base ")+" (- *vs* base) ";")
         (base-used)))
  (unwind-exit 'fun-val nil (cons 'values (length forms))))

(defun c1multiple-value-setq (args &aux (info (make-info)) (vrefs nil))
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'multiple-value-setq 2 0))
  (unless (endp (cddr args))
          (too-many-args 'multiple-value-setq 2 (length args)))
  (dolist (var (car args))
          (cmpck (not (symbolp var)) "The variable ~s is not a symbol." var)
          (cmpck (constantp var)
                 "The constant ~s is being assigned a value." var)
          (setq var (c1vref var))
          (push var vrefs)
          (push (car var) (info-changed-vars info))
          )
  (list 'multiple-value-setq info (reverse vrefs) (c1expr* (cadr args) info))
  )


(defun multiple-value-check (vrefs form)
  (and (cdr vrefs)
       (eq (car form) 'call-global)
       (let ((fname (third form)))
	 (cond ((and (symbolp fname)
		     (let ((tem (get fname 'proclaimed-return-type)))
		       (and tem
			    ;; proclaimed to have 1 arg:
			    (consp tem)
			    (not (equal tem '(*)))
			    (null (cdr tem)))))
		(cmpwarn "~A was proclaimed to have only one return value. ~%;But you appear to want multiple values." fname))))))
		
(defun c2multiple-value-setq (vrefs form &aux top-data)
    (multiple-value-check vrefs form)
  (let ((*value-to-go* 'top)*top-data*)
    (c2expr* form) (setq top-data *top-data*))
  (and *record-call-info* (record-call-info nil (car top-data)))
  (do ((vs vrefs (cdr vs)))
      ((endp vs))
      (declare (object vs))
      (let ((vref (car vs)))
           (declare (object vref))
           (wt-nl "if(vs_base<vs_top){")
           (set-var 'fun-val (car vref) (cadr vref))
           (unless (endp (cdr vs)) (wt-nl "vs_base++;"))
           (wt-nl "}else{") (set-var nil (car vref) (cadr vref))
           (wt "}"))
      )
  (cond ((null vrefs)
         (wt-nl "if(vs_base=vs_top){vs_base[0]=Cnil;vs_top=vs_base+1;}")
         (unwind-exit 'fun-val))
        (t (unless (eq *exit* 'return) (wt-nl) (reset-top))
           (unwind-exit (cons 'var (car vrefs)))))
  )

(defun c1multiple-value-bind (args &aux (info (make-info))
                                   (vars nil) (vnames nil) init-form
                                   ss is ts body other-decls
                                   (*vars* *vars*))
  (when (or (endp args) (endp (cdr args)))
    (too-few-args 'multiple-value-bind 2 (length args)))

  (multiple-value-setq (body ss ts is other-decls) (c1body (cddr args) nil))

  (c1add-globals ss)

  (dolist** (s (car args))
    (let ((v (c1make-var s ss is ts)))
      (push s vnames)
      (push v vars)))

  (setq init-form (c1expr* (cadr args) info))

  (dolist* (v (reverse vars)) (push v *vars*))

  (check-vdecl vnames ts is)

  (setq body (c1decl-body other-decls body))

  (add-info info (cadr body))
  (setf (info-type info) (info-type (cadr body)))

  (dolist** (var vars) (check-vref var))

  (list 'multiple-value-bind info (reverse vars) init-form body)
  )


(defun c2multiple-value-bind (vars init-form body
                   &aux (block-p nil) (labels nil)
                        (*unwind-exit* *unwind-exit*)
                        (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*)
			top-data)
       (declare (object block-p))
    (multiple-value-check vars init-form)

  (dolist** (var vars)
    (let ((kind (c2var-kind var)))
         (declare (object kind))
      (if kind
          (let ((cvar (next-cvar)))
            (setf (var-kind var) kind)
            (setf (var-loc var) cvar)
            (wt-nl)
            (unless block-p (wt "{") (setq block-p t))
	    (wt-var-decl var)
	    )
          (setf (var-ref var) (vs-push)))))

  (let ((*value-to-go* 'top) *top-data*)
    (c2expr* init-form) (setq top-data *top-data*))
  (and *record-call-info* (record-call-info nil (car top-data)))
  (let ((*clink* *clink*)
        (*unwind-exit* *unwind-exit*)
        (*ccb-vs* *ccb-vs*))
    (do ((vs vars (cdr vs)))
        ((endp vs))
        (declare (object vs))
      (push (next-label) labels)
      (wt-nl "if(vs_base>=vs_top){")
      (reset-top)
      (wt-go (car labels)) (wt "}")
      (c2bind-loc (car vs) '(vs-base 0))
      (unless (endp (cdr vs)) (wt-nl "vs_base++;"))))

  (wt-nl) (reset-top)

  (let ((label (next-label)))
    (wt-nl) (wt-go label)

    (setq labels (reverse labels))

    (dolist** (v vars)
      (wt-label (car labels))
      (pop labels)
      (c2bind-loc v nil))

    (wt-label label))

  (c2expr body)
  (when block-p (wt "}"))
  )
