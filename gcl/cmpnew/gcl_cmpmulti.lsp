;; -*-Lisp-*-
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


(in-package :compiler)

(si:putprop 'multiple-value-call 'c1multiple-value-call 'c1special)
(si:putprop 'multiple-value-call 'c2multiple-value-call 'c2)
(si:putprop 'multiple-value-prog1 'c1multiple-value-prog1 'c1special)
(si:putprop 'multiple-value-prog1 'c2multiple-value-prog1 'c2)
(si:putprop 'values 'c1values 'c1)
(si:putprop 'values 'c2values 'c2)
(si:putprop 'multiple-value-bind 'c1multiple-value-bind 'c1)
(si:putprop 'multiple-value-bind 'c2multiple-value-bind 'c2)

(defun nval (x)
  (cond ;((type>= #t(returns-exactly) x) 0)
	((single-type-p x) 1)
	((consp x) (1- (length x)))))

(defun c1multiple-value-call (args)
  (when (endp args) (too-few-args 'multiple-value-call 1 0))
  (let* ((info (make-info))
	 (nargs (c1args args info))
	 (tps (mapcar (lambda (x) (info-type (cadr x))) (cdr nargs))))
    (cond ((endp (cdr args)) (c1funcall args))
	  ((and (not (member-if-not 'nval tps))
		(inline-possible 'multiple-value-bind))
	   (let* ((n (reduce '+ (mapcar 'nval tps)))
		  (syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) (make-list n)))
		  (r syms))
	     (c1expr
	      (reduce (lambda (x y) 
			(cond ((= 1 (length (car x)))
			       `(let ((,(caar x) ,(cadr x))) ,y))
			      (`(multiple-value-bind ,@x ,y))))
		      (mapcar (lambda (x y) (let* ((n (nval x)) syms)
					      (dotimes (i n) (push (pop r) syms))
					      (list (nreverse syms) y))) tps (cdr args))
		      :from-end t :initial-value `(funcall ,(car args) ,@syms)))))
	  ((list 'multiple-value-call info (pop nargs) nargs)))))

;; (defun c1multiple-value-call (args)
;;   (when (endp args) (too-few-args 'multiple-value-call 1 0))
;;   (let* ((nargs (c1args (cdr args) (make-info)))
;; 	 (tps (mapcar (lambda (x) (info-type (cadr x))) nargs)))
;;     (cond ((endp (cdr args)) (c1funcall args))
;; 	  ((and (not (member-if-not 'nval tps))
;; 		(inline-possible 'multiple-value-bind))
;; 	   (let* ((n (reduce '+ (mapcar 'nval tps)))
;; 		  (syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) (make-list n)))
;; 		  (r syms))
;; 	     (c1expr
;; 	      (reduce (lambda (x y) 
;; 			(cond ((= 1 (length (car x)))
;; 			       `(let ((,(caar x) ,(cadr x))) ,y))
;; 			      (`(multiple-value-bind ,@x ,y))))
;; 		      (mapcar (lambda (x y) (let* ((n (nval x)) syms)
;; 					      (dotimes (i n) (push (pop r) syms))
;; 					      (list (nreverse syms) y))) tps (cdr args))
;; 		      :from-end t :initial-value `(funcall ,(car args) ,@syms)))))
;; 	  ((let* ((info (make-info))
;; 		  (nargs (c1args args info)))
;; 	     (list 'multiple-value-call info (pop nargs) nargs))))))

(defun c2multiple-value-call (funob forms &aux (*vs* *vs*) (loc (list 'vs (vs-push))) top sup)

  (let ((*value-to-go* loc))
    (c2expr* funob))
  
  (cond ((endp (cdr forms))
         (let ((*value-to-go* 'top)) (c2expr* (car forms))))
        ((setq top (cs-push t t))
         (setq sup (cs-push t t))
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
	 (dolist (form forms)
	   (let ((*value-to-go* 'top)
		 (*unwind-exit* (cons (cons 'sup sup) *unwind-exit*)))
	     (c2expr-top* form top))
	   (wt-nl "while(vs_base<vs_top)")
	   (wt-nl "{V" top "[0]=vs_base[0];V" top "++;vs_base++;}"))
         (wt-nl "vs_base=base+" *vs* ";vs_top=V" top ";sup=V" sup ";")))
	
  (if *compiler-push-events*
      (wt-nl "super_funcall(" loc ");")
    (if *super-funcall*
	(funcall *super-funcall* loc)
      (wt-nl "super_funcall_no_event(" loc ");")))
  (unwind-exit 'fun-val)

  (when (cdr forms)
    (wt "}")))

;; (defun c2multiple-value-call (funob forms &aux (*vs* *vs*) loc top sup)
;;   (cond ((endp (cdr forms))
;;          (setq loc (save-funob funob))
;;          (let ((*value-to-go* 'top)) (c2expr* (car forms)))
;;          (c2funcall funob 'args-pushed loc))
;;         (t
;;          (setq top (cs-push t t))
;;          (setq sup (cs-push t t))
;;          (setq loc (save-funob funob))
;;          (base-used)
;; 	 ;; Add (sup .var) handling in unwind-exit -- in
;; 	 ;; c2multiple-value-prog1 and c2-multiple-value-call, apparently
;; 	 ;; alone, c2expr-top is used to evaluate arguments, presumably to
;; 	 ;; preserve certain states of the value stack for the purposes of
;; 	 ;; retrieving the final results.  c2exprt-top rebinds sup, and
;; 	 ;; vs_top in turn to the new sup, causing non-local exits to lose
;; 	 ;; the true top of the stack vital for subsequent function
;; 	 ;; evaluations.  We unwind this stack supremum variable change here
;; 	 ;; when necessary.  CM 20040301
;;          (wt-nl "{object *V" top "=base+" *vs* ",*V" sup "=sup;")
;; 	 (dolist (form forms)
;; 	   (let ((*value-to-go* 'top)
;; 		 (*unwind-exit* (cons (cons 'sup sup) *unwind-exit*)))
;; 	     (c2expr-top* form top))
;; 	   (wt-nl "while(vs_base<vs_top)")
;; 	   (wt-nl "{V" top "[0]=vs_base[0];V" top "++;vs_base++;}"))
;;          (wt-nl "vs_base=base+" *vs* ";vs_top=V" top ";sup=V" sup ";")
;;          (c2funcall funob 'args-pushed loc)
;;          (wt "}"))))

(defun c1multiple-value-prog1 (args &aux (info (make-info)) form)
  (when (endp args) (too-few-args 'multiple-value-prog1 1 0))
  (setq form (c1arg (car args) info))
  (let ((tp (info-type (cadr form))))
    (cond ((single-type-p tp) (let ((s (tmpsym))) (c1expr `(let ((,s ,(car args))) ,@(cdr args) ,s))))
	  ((and (consp tp) (eq (car tp) 'returns-exactly))
	   (let ((syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) (cdr tp))))
	     (c1expr `(multiple-value-bind (,@syms) ,(car args) ,@(cdr args) (values ,@syms)))))
	  (t 
	   (setq args (c1args (cdr args) info))
	   (setf (info-type info) (info-type (cadr form)))
	   (list 'multiple-value-prog1 info form args)))))

;; (defun c1multiple-value-prog1 (args &aux (info (make-info)) form)
;;   (when (endp args) (too-few-args 'multiple-value-prog1 1 0))
;;   (setq form (c1expr* (car args) info))
;;   (let ((tp (info-type (cadr form))))
;;     (cond ((single-type-p tp) (let ((s (tmpsym))) (c1expr `(let ((,s ,(car args))) ,@(cdr args) ,s))))
;; 	  ((and (consp tp) (eq (car tp) 'returns-exactly))
;; 	   (let ((syms (mapcar (lambda (x) (declare (ignore x)) (tmpsym)) (cdr tp))))
;; 	     (c1expr `(multiple-value-bind (,@syms) ,(car args) ,@(cdr args) (values ,@syms)))))
;; 	  (t 
;; 	   (setq args (c1args (cdr args) info))
;; 	   (setf (info-type info) (info-type (cadr form)))
;; 	   (list 'multiple-value-prog1 info form args)))))

;; We may record information here when *value-to-go* = 'top
(defvar *top-data* nil)

(defun c2multiple-value-prog1 (form forms &aux (base (cs-push t t))
				               (top (cs-push t t))
					       (sup (cs-push t t))
					       top-data)
  (let ((*value-to-go* 'top)
	*top-data*)
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
  (setq *sup-used* t)
  (wt-nl "vs_base=V" top ";")
  (dolist** (form forms)
	    (let ((*value-to-go* 'trash)
		  (*unwind-exit* (cons (cons 'sup sup) *unwind-exit*)))
	      (c2expr-top* form top)))
  (wt-nl "vs_base=V" base ";vs_top=V" top ";sup=V" sup ";}")
  (unwind-exit 'fun-val nil (if top-data (car top-data))))

(defun c1values (args &aux (info (make-info)))
  (let ((a (mapcar (lambda (x) (c1expr* x info)) args)))
    (setf (info-type info)
	  (cmp-norm-tp 
	   (cons 'returns-exactly
		 (mapcar (lambda (x) (coerce-to-one-value (info-type (cadr x)))) a))))
    (list 'values info a)))

;; (defun c1values (args &aux (info (make-info)))
;;       (cond ((and args (not (cdr args)))
;; 	     (let ((nargs (c1args args info)))
;; 	       (if (type>= t (info-type (cadar nargs)))
;; 		   (c1expr (car args))
;; 		 (c1expr (let ((s (tmpsym))) `(let ((,s ,(car args))) ,s))))))
;; 	    (t  
;; 	     (setq args (c1args args info))
;; 	     (setf (info-type info) 
;; 		   (cmp-norm-tp 
;; 		    (cons 'returns-exactly
;; 			  (mapcar (lambda (x) (coerce-to-one-value (info-type (cadr x)))) args))))
;; 	     (list 'values info args))))

(defun c2values (forms)
  (if *mv-var*
    (let* ((*inline-blocks* 0)
	   (types (mapcar (lambda (x) (let ((x (coerce-to-one-value (info-type (cadr x))))) (if (type>= #tboolean x) t x))) forms))
	   (i 0)
	   (s (mapcar (lambda (x &aux (x (when x (write-to-string (incf i))))) (strcat "@" x "(#" x ")@")) (cdr forms)))
	   (s (strcat "({" (apply 'strcat s) "#0;})"))
	   (s (cons s (mapcar 'inline-type (cdr types))))
	   (in (list (inline-type (car types)) (flags) s (inline-args forms types))))
      (unwind-exit in nil (cons 'values (length forms)))
      (close-inline-blocks))
   (prog1 (c2expr (or (car forms) (c1nil)))
	  (let ((*value-to-go* 'trash))
	    (dolist (f (cdr forms)) (c2expr f))))))

;; (defun c2values (forms)
;;   (if *mv-var*
;;     (let* ((*inline-blocks* 0)
;; 	   (types (mapcar (lambda (x) (let ((x (info-type (cadr x)))) (if (type>= #tboolean x) t x))) forms))
;; 	   (i 0)
;; 	   (s (mapcar (lambda (x &aux (x (when x (write-to-string (incf i))))) (strcat "@" x "(#" x ")@")) (cdr forms)))
;; 	   (s (strcat "({" (apply 'strcat s) "#0;})"))
;; 	   (s (cons s (mapcar 'inline-type (cdr types))))
;; 	   (in (list (inline-type (car types)) (flags) s (inline-args forms types))))
;;       (unwind-exit in nil (cons 'values (length forms)))
;;       (close-inline-blocks))
;;    (c2expr (car forms))))

;; (defun c2values (forms &aux (base *vs*) (*vs* *vs*))
;;   (when (and (eq *value-to-go* 'return-object)
;; 	     (cdr forms)
;; 	     (consp *current-form*)
;; 	     (eq 'defun (car *current-form*))
;; 	     (single-type-p (get-return-type (cadr *current-form*))))
;;     (cmpwarn "Trying to return multiple values. ~%;But ~a was proclaimed to have single value.~%;Only first one will assured."
;; 	     (cadr *current-form*)))
  
;;   (cond 
;;    (*mv-var*
;;     (let* ((*inline-blocks* 0)
;; 	   (types (mapcar (lambda (x) (let ((x (info-type (cadr x)))) (if (type>= #tboolean x) t x))) forms))
;; 	   (in (list (inline-type (car types))
;; 		     (flags)
;; 		     (list* (si::string-concatenate 
;; 			     "({"
;; 			     (apply 'si::string-concatenate
;; 				    (let ((i 0)) 
;; 				      (mapcan (lambda (x) (declare (ignore x))
;; 						(let ((s (write-to-string (incf i))))
;; 						  (list (si::string-concatenate "@" s "(#" s ")@")))) (cdr forms))))
;; 			     "#0;})")
;; 			    (mapcar 'inline-type (cdr types)))
;; 		    (inline-args forms types))))
;;       (unwind-exit in nil (cons 'values (length forms)))
;;       (close-inline-blocks)
;;       (return-from c2values nil)))
;;    ((null forms)
;;     (wt-nl "vs_base=vs_top=base+" base ";")
;;     (base-used)
;;     (wt-nl "vs_base[0]=Cnil;"))
;;    (t
;;     (dolist** (form forms)
;; 	      (let ((*value-to-go* (list 'vs (vs-push)))) (c2expr* form)));FIXME
;;     (wt-nl "vs_top=(vs_base=base+" base ")+" (- *vs* base) ";")
;;     (base-used)))
;;   (unwind-exit 'fun-val nil (cons 'values (length forms))))


(defun multiple-value-check (vrefs form)
  (and (cdr vrefs)
       (eq (car form) 'call-global)
       (let ((fname (third form)))
	 (cond ((and (symbolp fname)
		     (single-type-p (get-return-type fname)))
		(cmpwarn "~A was proclaimed to have only one return value. ~%;But you appear to want multiple values." fname))))))
		
(defun c1multiple-value-bind (args &aux (info (make-info))
                                   (vars nil) (vnames nil) init-form
                                   ss is ts body other-decls
                                   (*vars* *vars*))
  (when (or (endp args) (endp (cdr args)))
    (too-few-args 'multiple-value-bind 2 (length args)))

  (when (and (caar args) (not (cdar args)))
    (return-from c1multiple-value-bind
		 (c1expr `(let ((,(caar args) ,(cadr args))) ,@(cddr args)))))

  (multiple-value-setq (body ss ts is other-decls) (c1body (cddr args) nil))

  (dolist (s (car args))
    (let ((v (c1make-var s ss is ts)))
      (push s vnames)
      (push v vars)))

  (c1add-globals (set-difference ss vnames))

  (setq init-form (c1arg (cadr args) info))

  (setq vars (nreverse vars))
  (let* ((tp (info-type (second init-form)))
	 (tp (cond ((not tp) tp)
		   ((single-type-p tp) (list tp))
		   ((eq tp '*) (make-list (length vars) :initial-element t))
		   ((cdr tp)))))
    (do ((v vars (cdr v)) (t1 tp (cdr t1)))
	((not v))
	(set-var-init-type (car v) (or (car t1) #tnull))))

  (dolist* (v vars) (push-var v init-form))

  (check-vdecl vnames ts is)

  (setq body (c1decl-body other-decls body))

  (add-info info (cadr body))
  (setf (info-type info) (info-type (cadr body)))

  (ref-vars body vars)
  (dolist** (var vars) (check-vref var))

  (list 'multiple-value-bind info vars init-form body))

;; (defun c1multiple-value-bind (args &aux (info (make-info))
;;                                    (vars nil) (vnames nil) init-form
;;                                    ss is ts body other-decls
;;                                    (*vars* *vars*))
;;   (when (or (endp args) (endp (cdr args)))
;;     (too-few-args 'multiple-value-bind 2 (length args)))

;;   (when (and (caar args) (not (cdar args)))
;;     (return-from c1multiple-value-bind
;; 		 (c1expr `(let ((,(caar args) ,(cadr args))) ,@(cddr args)))))

;;   (multiple-value-setq (body ss ts is other-decls) (c1body (cddr args) nil))

;;   (dolist (s (car args))
;;     (let ((v (c1make-var s ss is ts)))
;;       (push s vnames)
;;       (push v vars)))

;;   (c1add-globals (set-difference ss vnames))

;;   (setq init-form (c1arg (cadr args) info))

;;   (setq vars (nreverse vars))
;;   (let* ((tp (info-type (second init-form)))
;; 	 (tp (cond ((not tp) tp)
;; 		   ((single-type-p tp) (list tp))
;; 		   ((eq tp '*) (make-list (length vars) :initial-element t))
;; 		   ((cdr tp)))))
;;     (do ((v vars (cdr v)) (t1 tp (cdr t1)))
;; 	((not v))
;; 	(set-var-init-type (car v) (or (car t1) #tnull))))

;;   (dolist* (v vars) (push v *vars*))

;;   (check-vdecl vnames ts is)

;;   (setq body (c1decl-body other-decls body))

;;   (add-info info (cadr body))
;;   (setf (info-type info) (info-type (cadr body)))

;;   (ref-vars body vars)
;;   (dolist** (var vars) (check-vref var))

;;   (list 'multiple-value-bind info vars init-form body))

;; (defun c1multiple-value-bind (args &aux (info (make-info))
;;                                    (vars nil) (vnames nil) init-form
;;                                    ss is ts body other-decls
;;                                    (*vars* *vars*))
;;   (when (or (endp args) (endp (cdr args)))
;;     (too-few-args 'multiple-value-bind 2 (length args)))

;;   (when (and (caar args) (not (cdar args)))
;;     (return-from c1multiple-value-bind
;; 		 (c1expr `(let ((,(caar args) ,(cadr args))) ,@(cddr args)))))

;;   (multiple-value-setq (body ss ts is other-decls) (c1body (cddr args) nil))

;;   (dolist (s (car args))
;;     (let ((v (c1make-var s ss is ts)))
;;       (push s vnames)
;;       (push v vars)))

;;   (c1add-globals (set-difference ss vnames))

;;   (let (*c1exit*) (setq init-form (c1expr* (cadr args) info)))

;;   (setq vars (nreverse vars))
;;   (let* ((tp (info-type (second init-form)))
;; 	 (tp (cond ((not tp) tp)
;; 		   ((single-type-p tp) (list tp))
;; 		   ((eq tp '*) (make-list (length vars) :initial-element t))
;; 		   ((cdr tp)))))
;;     (do ((v vars (cdr v)) (t1 tp (cdr t1)))
;; 	((not v))
;; 	(set-var-init-type (car v) (or (car t1) #tnull))))

;;   (dolist* (v vars) (push v *vars*))

;;   (check-vdecl vnames ts is)

;;   (setq body (c1decl-body other-decls body))

;;   (add-info info (cadr body))
;;   (setf (info-type info) (info-type (cadr body)))

;;   (ref-vars body vars)
;;   (dolist** (var vars) (check-vref var))

;;   (list 'multiple-value-bind info vars init-form body))

;; (defun c1multiple-value-bind (args &aux (info (make-info))
;;                                    (vars nil) (vnames nil) init-form
;;                                    ss is ts body other-decls
;;                                    (*vars* *vars*))
;;   (when (or (endp args) (endp (cdr args)))
;;     (too-few-args 'multiple-value-bind 2 (length args)))

;;   (when (and (caar args) (not (cdar args)))
;;     (return-from c1multiple-value-bind
;; 		 (c1expr `(let ((,(caar args) ,(cadr args))) ,@(cddr args)))))

;;   (multiple-value-setq (body ss ts is other-decls) (c1body (cddr args) nil))

;;   (dolist (s (car args))
;;     (let ((v (c1make-var s ss is ts)))
;;       (push s vnames)
;;       (push v vars)))

;;   (c1add-globals (set-difference ss vnames))

;;   (let (*c1exit*) (setq init-form (c1expr* (cadr args) info)))

;;   (setq vars (nreverse vars))
;;   (let* ((tp (info-type (second init-form)))
;; 	 (tp (cond ((not tp) tp)
;; 		   ((single-type-p tp) (list tp))
;; 		   ((eq tp '*) (make-list (length vars) :initial-element t))
;; 		   ((cdr tp)))))
;;     (do ((v vars (cdr v)) (t1 tp (cdr t1)))
;; 	((not v))
;; 	(set-var-init-type (car v) (or (car t1) #tnull))))

;;   (dolist* (v vars) (push v *vars*))

;;   (check-vdecl vnames ts is)

;;   (setq body (c1decl-body other-decls body))

;;   (add-info info (cadr body))
;;   (setf (info-type info) (info-type (cadr body)))

;;   (dolist** (var vars) (check-vref var))

;;   (list 'multiple-value-bind info vars init-form body))

(defun max-stack-space (form)
  (cond ((atom form) 0)
	((info-p (car form)) (max (abs (vald (info-type (car form)))) (max-stack-space (cdr form))))
	((max (max-stack-space (car form)) (max-stack-space (cdr form))))))

(defun stack-space (form)
  (let* ((tp (info-type (cadr form)))
	 (vd (vald tp)))
    (cond ((< vd 0) (- vd))
	  ((eq tp #t(returns-exactly)) 0))))

(defvar *mvb-vals* nil)

(defvar *vals-set* nil)
(defun c2multiple-value-bind (vars init-form body
				   &aux (labels nil)
				   (*unwind-exit* *unwind-exit*)
				   (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*)
				   top-data lbs)

  (multiple-value-check vars init-form)

  (let* ((mv (make-var :type #tfixnum :kind 'lexical :loc (cs-push #tfixnum t)))
	 (nv (1- (length vars)))
	 (ns1 (stack-space init-form))
	 (ns (max nv (or ns1 (max-stack-space init-form))))
	 (*mvb-vals* t)
	 *vals-set*)
    (setf (var-kind mv) (c2var-kind mv) (var-space mv) nv (var-known-init mv) (or ns1 -1))
    (setq lbs
	  (mapcar (lambda (x)
		    (let ((kind (c2var-kind x))(f (eq x (car vars))))
		      (if kind (setf (var-kind x) (if f kind 'object)
				     (var-loc x) (cs-push (if f (var-type x) t) t))
			(setf (var-ref x) (vs-push) x (cs-push (if f (var-type x) t) t)))))
		  vars))
;    (wt-nl "{")
;    (wt-nl "int vals_set=0;")
    (when vars
	(wt-nl "register " (rep-type (var-type (car vars))) " V" (car lbs) ";")
	(wt-nl "object V" (var-loc mv) "[" ns "];"))
    (let ((i -1)) (mapc (lambda (x) (wt-nl "#define V" x " V" (var-loc mv) "[" (incf i) "]")) (cdr lbs)))
    (wt-nl);FIXME
    (dotimes (i (1+ (length vars))) (push (next-label) labels))
    
    (wt-nl "{")
    ;; (wt-nl "int vals_set=0;")
    (let ((*mv-var* mv)
	  (*value-to-go* (or (mapcar (lambda (x) (list 'cvar x)) lbs) 'trash))
	  *top-data*)
      (c2expr* init-form)
      (setq top-data *top-data*))
    
    (and *record-call-info* (record-call-info nil (car top-data)))

    (when lbs (unless *vals-set* (baboon)))

    ;; (wt-nl "if (!vals_set) {")

    ;; (setq labels (nreverse labels))
    ;; (do ((lb lbs (cdr lb))
    ;; 	 (lab labels (cdr lab)))
    ;; 	((endp lb)(reset-top)(wt-go (car lab)))
    ;;   (wt-nl "if(vs_base>=vs_top){")
    ;;   (reset-top)
    ;;   (wt-go (car lab)) 
    ;;   (wt "}")
    ;;   (set-cvar '(vs-base 0) (car lb))
    ;;   (when (cdr lb)
    ;; 	(wt-nl "vs_base++;")))
	   
    ;; (do ((lb lbs (cdr lb))
    ;; 	 (lab labels (cdr lab)))
    ;; 	((endp lb)(wt-label (car lab)))
    ;;   (wt-label (car lab))
    ;;   (set-cvar nil (car lb)))

    ;; (wt-nl "}}")

    (do ((vs vars (cdr vs)) (lb lbs (cdr lb)))
	((endp vs))
	(when (member (var-kind (car vs)) '(lexical special down))
	  (c2bind-loc (car vs) (list 'cvar (car lb))))))
  
  (c2expr body)
  (mapc (lambda (x) (wt-nl "#undef V" x)) (cdr lbs))
  (wt-nl "")
  (wt-nl "}"))

;; (defun c2multiple-value-bind (vars init-form body
;; 				   &aux (labels nil)
;; 				   (*unwind-exit* *unwind-exit*)
;; 				   (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*)
;; 				   top-data lbs)

;;   (multiple-value-check vars init-form)

;;   (let* ((mv (make-var :type #tfixnum :kind 'lexical :loc (cs-push #tfixnum t)))
;; 	 (nv (1- (length vars)))
;; 	 (ns1 (stack-space init-form))
;; 	 (ns (max nv (or ns1 (max-stack-space init-form))))
;; 	 (*mvb-vals* t))
;;     (setf (var-kind mv) (c2var-kind mv) (var-space mv) nv (var-known-init mv) (or ns1 -1))
;;     (setq lbs
;; 	  (mapcar (lambda (x)
;; 		    (let ((kind (c2var-kind x))(f (eq x (car vars))))
;; 		      (if kind (setf (var-kind x) (if f kind 'object)
;; 				     (var-loc x) (cs-push (if f (var-type x) t) t))
;; 			(setf (var-ref x) (vs-push) x (cs-push (if f (var-type x) t) t)))))
;; 		  vars))
;;     (wt-nl "{")
;; ;    (wt-nl "int vals_set=0;")
;;     (when vars
;; 	(wt-nl "register " (rep-type (var-type (car vars))) " V" (car lbs) ";")
;; 	(wt-nl "object V" (var-loc mv) "[" ns "];"))
;;     (let ((i -1)) (mapc (lambda (x) (wt-nl "#define V" x " V" (var-loc mv) "[" (incf i) "]")) (cdr lbs)))
;;     (wt-nl);FIXME
;;     (dotimes (i (1+ (length vars))) (push (next-label) labels))
    
;;     (wt-nl "{")
;;     (wt-nl "int vals_set=0;")
;;     (let ((*mv-var* mv)
;; 	  (*value-to-go* (or (mapcar (lambda (x) (list 'cvar x)) lbs) 'trash))
;; 	  *top-data*)
;;       (c2expr* init-form)
;;       (setq top-data *top-data*))
    
;;     (and *record-call-info* (record-call-info nil (car top-data)))

;;     (wt-nl "if (!vals_set) {")

;;     (setq labels (nreverse labels))
;;     (do ((lb lbs (cdr lb))
;; 	 (lab labels (cdr lab)))
;; 	((endp lb)(reset-top)(wt-go (car lab)))
;;       (wt-nl "if(vs_base>=vs_top){")
;;       (reset-top)
;;       (wt-go (car lab)) 
;;       (wt "}")
;;       (set-cvar '(vs-base 0) (car lb))
;;       (when (cdr lb)
;; 	(wt-nl "vs_base++;")))
	   
;;     (do ((lb lbs (cdr lb))
;; 	 (lab labels (cdr lab)))
;; 	((endp lb)(wt-label (car lab)))
;;       (wt-label (car lab))
;;       (set-cvar nil (car lb)))

;;     (wt-nl "}}")

;;     (do ((vs vars (cdr vs)) (lb lbs (cdr lb)))
;; 	((endp vs))
;; 	(when (member (var-kind (car vs)) '(lexical special down))
;; 	  (c2bind-loc (car vs) (list 'cvar (car lb))))))
  
;;   (c2expr body)
;;   (mapc (lambda (x) (wt-nl "#undef V" x)) (cdr lbs))
;;   (wt-nl "")
;;   (wt-nl "}"))
