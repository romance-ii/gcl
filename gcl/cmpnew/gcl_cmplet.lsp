;;; CMPLET  Let and Let*.
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
(eval-when (compile)
  (or (fboundp 'write-block-open) (load "cmplet.lsp")))

(si:putprop 'let 'c1let 'c1special)
(si:putprop 'let 'c2let 'c2)
(si:putprop 'let* 'c1let* 'c1special)
(si:putprop 'let* 'c2let* 'c2)

(defun c1let (args &aux (info (make-info))(setjmps *setjmps*)
                        (forms nil) (vars nil) (vnames nil)
                        ss is ts body other-decls
                        (*vars* *vars*))
  (when (endp args) (too-few-args 'let 1 0))

  (multiple-value-setq (body ss ts is other-decls) (c1body (cdr args) nil))

  (c1add-globals ss)

  (dolist** (x (car args))
    (cond ((symbolp x)
           (let ((v (c1make-var x ss is ts)))
                (push x vnames)
                (push v vars)
                (push (default-init (var-type v)) forms)))
          (t (cmpck (not (and (consp x) (or (endp (cdr x)) (endp (cddr x)))))
                    "The variable binding ~s is illegal." x)
             (let ((v (c1make-var (car x) ss is ts)))
                  (push (car x) vnames)
                  (push v vars)
                  (push (if (endp (cdr x))
                            (default-init (var-type v))
                            (and-form-type (var-type v)
                                           (c1expr* (cadr x) info)
                                           (cadr x)))
                        forms)))))

  (dolist* (v (reverse vars)) (push v *vars*))

  (check-vdecl vnames ts is)

  (setq body (c1decl-body other-decls body))

  (add-info info (cadr body))
  (setf (info-type info) (info-type (cadr body)))

  (dolist** (var vars) (check-vref var))


    (or (eql setjmps *setjmps*) (setf (info-volatile info) t))
	(list 'let info (reverse vars) (reverse forms) body)
  )

(defun c2let (vars forms body
                   &aux (block-p nil) (bindings nil) initials
	          
                        (*unwind-exit* *unwind-exit*)
                        (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*))
       (declare (object block-p))

  (do ((vl vars (cdr vl)) (fl forms (cdr fl)) (prev-ss nil))
      ((endp vl))
      (declare (object vl fl))
      (let* ((form (car fl)) (var (car vl))
	    (kind (c2var-kind var)))
           (declare (object form var))
	  (cond (kind  (setf (var-kind var) kind)
		       (setf (var-loc var) (next-cvar)))
		((eq (var-kind var) 'down)
		 (or (si::fixnump (var-loc var)) (wfs-error)))
		(t (setf (var-ref var) (vs-push))))
        (case (var-kind var)
          ((FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT INTEGER)
	   (push (list 'c2expr* (list 'var var nil) form)  initials))
          (otherwise
            (case (car form)
              (LOCATION
               (if (can-be-replaced var body)
                   (progn (setf (var-kind var) 'REPLACED)
                          (setf (var-loc var) (caddr form)))
                   (push (list var (caddr form)) bindings)))
              (VAR
               (let ((var1 (caaddr form)))
                    (declare (object var1))
                    (cond ((or (args-info-changed-vars var1 (cdr fl))
                               (and (member (var-kind var1) '(SPECIAL GLOBAL))
                                    (member (var-name var1) prev-ss)))
                           (push (list 'c2expr*
				       (cond ((eq (var-kind var) 'object)
					      (list 'var var nil))
					     ((eq (var-kind var) 'down)
					      ;(push (list var) bindings)
					      (list 'down (var-loc var)))
					     (t(push (list var) bindings)
					      (list 'vs (var-ref var))))
				       form)initials))
                          ((and (can-be-replaced var body)
                                (member (var-kind var1)
                                        '(LEXICAL REPLACED OBJECT))
                                (null (var-ref-ccb var1))
                                (not (is-changed  var1 (cadr body))))
                           (setf (var-kind var) 'REPLACED)
                           (setf (var-loc var)
                                 (case (var-kind var1)
                                   (LEXICAL (list 'vs (var-ref var1)))
                                   (REPLACED (var-loc var1))
                                   (OBJECT (list 'cvar (var-loc var1)))
                                   (otherwise (baboon)))))
                          (t (push (list var
                                         (list 'var var1 (cadr (caddr form))))
                                   bindings)))))
              (t (push (list 'c2expr*
			     (cond ((eq (var-kind var) 'object)
				    (list 'var var nil))
				   ((eq (var-kind var) 'down)
				    ;(push (list var) bindings)
				    (list 'down (var-loc var)))
				   (t(push (list var) bindings)
				    (list 'vs (var-ref var))))
			     form) initials))
              )))
        (when (eq (var-kind var) 'SPECIAL) (push (var-name var) prev-ss))
        ))

  (setq block-p (write-block-open vars))

  (dolist* (binding (reverse initials))
	   (let ((*value-to-go* (second binding)))
	      (c2expr* (third binding))))
  (dolist* (binding (reverse bindings))
    (if (cdr binding)
        (c2bind-loc (car binding) (cadr binding))
        (c2bind (car binding))))

  (c2expr body)
  (when block-p (wt "}"))
  )

(defun c1let* (args &aux (forms nil) (vars nil) (vnames nil)
		(setjmps *setjmps*)
                    ss is ts body other-decls
                    (info (make-info)) (*vars* *vars*))
  (when (endp args) (too-few-args 'let* 1 0))

  (multiple-value-setq (body ss ts is other-decls) (c1body (cdr args) nil))
  (c1add-globals ss)

  (dolist** (x (car args))
    (cond ((symbolp x)
           (let ((v (c1make-var x ss is ts)))
                (push x vnames)
                (push (default-init (var-type v)) forms)
                (push v vars)
                (push v *vars*)))
          ((not (and (consp x) (or (endp (cdr x)) (endp (cddr x)))))
           (cmperr "The variable binding ~s is illegal." x))
          (t (let ((v (c1make-var (car x) ss is ts)))
                  (push (car x) vnames)
                  (push (if (endp (cdr x))
                            (default-init (var-type v))
                            (and-form-type (var-type v)
                                           (c1expr* (cadr x) info)
                                           (cadr x)))
                        forms)
                  (push v vars)
                  (push v *vars*)))))

  (check-vdecl vnames ts is)
  (setq body (c1decl-body other-decls body))
  (add-info info (cadr body))
  (setf (info-type info) (info-type (cadr body)))
  (dolist** (var vars) (check-vref var))
(or (eql setjmps *setjmps*) (setf (info-volatile info) t))
  (list 'let*  info (reverse vars) (reverse forms) body)
  )

(defun c2let* (vars forms body
                    &aux (block-p nil)
                    (*unwind-exit* *unwind-exit*)
                    (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*))
       (declare (object block-p))


  (do ((vl vars (cdr vl))
       (fl forms (cdr fl)))
      ((endp vl))
      (declare (object vl fl))
      (let* ((form (car fl)) (var (car vl))
	     (kind (c2var-kind var)))
           (declare (object form var))
	  (cond (kind  (setf (var-kind var) kind)
		       (setf (var-loc var) (next-cvar))))
        (if (member (var-kind var)
                    '(FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT INTEGER))
	    nil
            (case (car form)
              (LOCATION
               (cond ((can-be-replaced* var body (cdr fl))
                      (setf (var-kind var) 'REPLACED)
                      (setf (var-loc var) (caddr form)))
		     ((eq (var-kind var) 'object))
		     ((eq (var-kind var) 'down)
		      (or (si::fixnump (var-loc var)) (baboon)))
                     (t (setf (var-ref var) (vs-push))
			)))
              (VAR
               (let ((var1 (caaddr form)))
                    (declare (object var1))
                    (cond ((and (can-be-replaced* var body (cdr fl))
                                (member (var-kind var1)
                                        '(LEXICAL REPLACED OBJECT))
                                (null (var-ref-ccb var1))
                                (not (args-info-changed-vars var1 (cdr fl)))
                                (not (is-changed var1 (cadr body))))
                           (setf (var-kind var) 'REPLACED)
                           (setf (var-loc var)
                                 (case (var-kind var1)
                                   (LEXICAL (list 'vs (var-ref var1)))
                                   (REPLACED (var-loc var1))
                                   (OBJECT (list 'cvar (var-loc var1)))
                                   (t (baboon)))))
			  ((eq (var-kind var)'object))
                          (t (setf (var-ref var) (vs-push))
			     )))
           )
	  ((eq (var-kind var) 'object))    
          (t (setf (var-ref var) (vs-push))
	     )))
        ))

  (setq block-p (write-block-open vars))

  (do ((vl vars (cdr vl))
        (fl forms (cdr fl))
	(var nil) (form nil))
      ((null vl))
      (setq var (car vl))(setq form (car fl))
;      (print (list (var-kind var) (car form)))
      (case
       (var-kind var)
       ((FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT OBJECT  INTEGER)
	(let ((*value-to-go* (list 'var var nil)))
	  (c2expr* form)))
       (REPLACED )
       (t
	(case
    	 (car form)
	 (LOCATION (c2bind-loc var (caddr form)))
	 (VAR (c2bind-loc var (list 'var (caaddr form) (cadr (caddr form)))))
	 (t (c2bind-init var form))))))
	   
  (c2expr body)

  (when block-p (wt "}"))
  )

(defun can-be-replaced (var body)
  (and (or (eq (var-kind var) 'LEXICAL)
	   (and (eq (var-kind var) 'object)
		(< (the fixnum (var-register var))
		   (the fixnum *register-min*))))
       (null (var-ref-ccb var))
       (not (eq (var-loc var) 'clb))
       (not (is-changed var (cadr body)))))

(defun can-be-replaced* (var body forms)
  (and (can-be-replaced var body)
       (dolist** (form forms t)
         (when (is-changed var (cadr form))
               (return nil)))
       ))


(defun write-block-open (vars)
  (let ( block-p)
    (dolist**
     (var vars)
     (let ((kind (var-kind var)))
       (declare (object kind))
       (when (member kind '(FIXNUM CHARACTER LONG-FLOAT SHORT-FLOAT OBJECT
				   INTEGER))
	     (wt-nl)
	     (unless block-p (wt "{") (setq block-p t))
	     (wt-var-decl var)
	     )))
    block-p ))


;; ---------- stack-let for consing on stack ---------

;; Usage:  (stack-let ((a (cons 1 2)) (b (cons 3 4))) (foo a) (print b) 7)
;;  where foo must not keep a copy of `a', since the cons will be formed
;;  on the c stack.

(setf (get 'stack-let 'c1special) 'c1stack-let)

(defmacro stack-let (&rest x) (cons `let x))

(defun c1stack-let (args &aux npairs nums)
  (let ((pairs (car args))
	)
    (dolist (v pairs)
	    (push
	     (cond ((atom v) v)
		   ((let ((var (car v))
			  (val (second v)))
		      (and (consp val)
			   (or (eq (car val) 'cons)
			       (and (eq (car val) 'list)
				    (null (cddr val))
				    (setq val `(cons ,(second val) nil))))
			   (progn
			     (push (next-cvar) nums)
			     `(,var (stack-cons ,(car nums) ,@ (cdr val)))))))
		   (t (cmpwarn "Stack let = regular let for ~a ~a"
			       v (cdr args))
		      v))
	     npairs))
    (let ((result (c1expr (cons 'let (cons (nreverse npairs) (cdr args))))))
      (list 'stack-let (second result) nums result))))

(setf (get 'stack-let 'c2) 'c2stack-let)

(defun c2stack-let (nums form)
  (let ((n (next-cvar)))
    (wt-nl "{Cons_Macro" n ";")
    (c2expr form)
    (wt "}")
    (wt-h
     "#define Cons_Macro" n (format nil " struct cons ~{STcons~a ~^,~};" nums)
     )))

(push '((fixnum t t) t #.(flags) 
	"(STcons#0.t=t_cons,STcons#0.m=0,STcons#0.c_car=(#1),
              STcons#0.c_cdr=(#2),(object)&STcons#0)")
        (get 'stack-cons 'inline-always))    

;; ---------- end stack-let for consing on stack ---------

