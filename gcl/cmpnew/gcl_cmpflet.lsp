;;; CMPFLET  Flet, Labels, and Macrolet.
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

(si:putprop 'flet 'c1flet 'c1special)
(si:putprop 'flet 'c2flet 'c2)
(si:putprop 'labels 'c1labels 'c1special)
(si:putprop 'labels 'c2labels 'c2)
(si:putprop 'macrolet 'c1macrolet 'c1special)
;;; c2macrolet is not defined, because MACROLET is replaced by PROGN
;;; during Pass 1.
(si:putprop 'call-local 'c2call-local 'c2)

(defstruct fun
           name			;;; Function name.
           ref			;;; Referenced or not.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the vs-address for the
           			;;; function closure, or NIL.
           ref-ccb		;;; Cross closure reference.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the vs-address for the
           			;;; function closure, or NIL.
           cfun			;;; The cfun for the function.
           level		;;; The level of the function.

	   info                 ;;; fun-info;  CM, 20031008
	                        ;;; collect info structure when processing
	                        ;;; function lambda list in flet and labels
	                        ;;; and pass upwards to call-local and call-global
	                        ;;; to determine more accurately when
	                        ;;; args-info-changed-vars should prevent certain
	                        ;;; inlining
	                        ;;; examples: (defun foo (a) (flet ((%f8 nil (setq a 0)))
	                        ;;;     (let ((v9 a)) (- (%f8) v9))))
	                        ;;;           (defun foo (a) (flet ((%f8 nil (setq a 2)))
                                ;;;     (* a (%f8))))
           )

(defvar *funs* nil)

;;; During Pass 1, *funs* holds a list of fun objects, local macro definitions
;;; and the symbol 'CB' (Closure Boundary).  'CB' will be pushed on *funs*
;;; when the compiler begins to process a closure.  A local macro definition
;;; is a list ( macro-name expansion-function).

(defun c1flet (args &aux body ss ts is other-decl info
                         (defs1 nil) (local-funs nil) (closures nil) (*info* (copy-info *info*)))
  (when (endp args) (too-few-args 'flet 1 0))

  (let ((*funs* *funs*))
    (dolist** (def (car args))
	      (cmpck (or (endp def)
			 (not (symbolp (car def)))
			 (endp (cdr def)))
		     "The function definition ~s is illegal." def)
	      (let ((fun (make-fun :name (car def) :ref nil :ref-ccb nil :info (make-info :sp-change t))))
		(push fun *funs*)
		(push (list fun (cdr def)) defs1)))

    (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
    
    (let ((*vars* *vars*))
      (c1add-globals ss)
      (check-vdecl nil ts is)
      (setq body (c1decl-body other-decl body)))

    (setq info (copy-info (cadr body))))
  
  (dolist* (def (reverse defs1))
	   (when (fun-ref-ccb (car def))
	     (let ((*vars* (cons 'cb *vars*))
		   (*funs* (cons 'cb *funs*))
		   (*blocks* (cons 'cb *blocks*))
		   (*tags* (cons 'cb *tags*)))
               (let ((lam (c1lambda-expr (cadr def) (fun-name (car def)))))
		 (add-info info (cadr lam))
		 ;; fun-info, CM 20031008  accumulate local function info, particularly changed-vars,
		 ;; and pass upwards to call-local and call-global to prevent certain inlining in inline-args
		 ;; via args-info-changed-vars		 
		 (add-info (fun-info (car def)) (cadr lam))
		 (push (list (car def) lam) closures))))

	   (when (fun-ref (car def))
	     (let ((*blocks* (cons 'lb *blocks*))
		   (*tags* (cons 'lb *tags*))
		   (*vars* (cons 'lb *vars*)))
               (let ((lam (c1lambda-expr (cadr def) (fun-name (car def)))))
		 (add-info info (cadr lam))
		 ;; fun-info, CM 20031008  accumulate local function info, particularly changed-vars,
		 ;; and pass upwards to call-local and call-global to prevent certain inlining in inline-args
		 ;; via args-info-changed-vars		 
		 (add-info (fun-info (car def)) (cadr lam))
		 (push (list (car def) lam) local-funs))))

	   (when (or (fun-ref (car def)) (fun-ref-ccb (car def)))
	     (setf (fun-cfun (car def)) (next-cfun))))

  ;; fun-info, CM 20031008  accumulate local function info, particularly changed-vars,
  ;; and pass upwards to call-local and call-global to prevent certain inlining in inline-args
  ;; via args-info-changed-vars		 
  ;;
  ;; walk body a second time to incorporate changed variable info from local function
  ;; lambda lists

  (let ((*funs* *funs*))
    (dolist* (def defs1)
	     (push (car def) *funs*))
    
    (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
    
    (let ((*vars* *vars*))
      (c1add-globals ss)
      (check-vdecl nil ts is)
      (setq body (c1decl-body other-decl body)))

    ;; Apparently this is not scricttly necessary, just changes to body
    (add-info info (cadr body)))
  
  (if (or local-funs closures)
      (list 'flet info (reverse local-funs) (reverse closures) body)
      body))

(defun c2flet (local-funs closures body
               &aux (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*))

  (dolist** (def local-funs)
    (setf (fun-level (car def)) *level*)
    ;; Append *initial-ccb-vs* here and use it to initialize *initial-ccb-vs* when writing
    ;; the code for this function.  Local functions, unlike closures, get an envinment
    ;; level with the *initial-ccb-vs* at this point, and *ccb-vs* can be further incremented
    ;; here, in c2tagbody-ccb, and in c2block-ccb.  CM 20031130
    (push (list nil *clink* *ccb-vs* (car def) (cadr def) *initial-ccb-vs*) *local-funs*))

  ;;; Setup closures.
  (dolist** (def closures)
    (push (list 'closure
                (if (null *clink*) nil (cons 0 0))
                *ccb-vs* (car def) (cadr def))
          *local-funs*)
    (push (car def) *closures*)
    (let ((fun (car def)))
         (declare (object fun))
         (setf (fun-ref fun) (vs-push))
         (wt-nl)
         (wt-vs (fun-ref fun))
         (wt "=make_cclosure_new(LC" (fun-cfun fun) ",Cnil,") (wt-clink)
         (wt ",Cdata);")
         (wt-nl)
         (wt-vs (fun-ref fun))
         (wt "=MMcons(") (wt-vs (fun-ref fun)) (wt ",") (wt-clink) (wt ");")
         (clink (fun-ref fun))
         (setf (fun-ref-ccb fun) (ccb-vs-push))
         ))

  (c2expr body)
  )

(defun c1labels (args &aux body ss ts is other-decl info
                      (defs1 nil) (local-funs nil) (closures nil)
                      (fnames nil) (processed-flag nil) (*funs* *funs*) (*info* (copy-info *info*)))
  (when (endp args) (too-few-args 'labels 1 0))

  ;;; bind local-functions
  (dolist** (def (car args))
    (cmpck (or (endp def) (not (symbolp (car def))) (endp (cdr def)))
           "The local function definition ~s is illegal." def)
    (cmpck (member (car def) fnames)
           "The function ~s was already defined." (car def))
    (push (car def) fnames)
    (let ((fun (make-fun :name (car def) :ref nil :ref-ccb nil :info (make-info :sp-change t))))
         (push fun *funs*)
         (push (list fun nil nil (cdr def)) defs1)))

  (setq defs1 (reverse defs1))

  ;;; Now DEFS1 holds ( { ( fun-object NIL NIL body ) }* ).

  (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  (let ((*vars* *vars*))
       (c1add-globals ss)
       (check-vdecl nil ts is)
       (setq body (c1decl-body other-decl body)))
  (setq info (copy-info (cadr body)))

  (block local-process
    (loop
     (setq processed-flag nil)
     (dolist** (def defs1)
       (when (and (fun-ref (car def))		;;; referred locally and
                  (null (cadr def)))		;;; not processed yet
         (setq processed-flag t)
         (setf (cadr def) t)
         (let ((*blocks* (cons 'lb *blocks*))
               (*tags* (cons 'lb *tags*))
               (*vars* (cons 'lb *vars*)))
              (let ((lam (c1lambda-expr (cadddr def) (fun-name (car def)))))
                   (add-info info (cadr lam))
		   ;; fun-info, CM 20031008  accumulate local function info, particularly changed-vars,
		   ;; and pass upwards to call-local and call-global to prevent certain inlining in inline-args
		   ;; via args-info-changed-vars		 
		   (add-info (fun-info (car def)) (cadr lam))
                   (push (list (car def) lam) local-funs)))))
     (unless processed-flag (return-from local-process))
     )) ;;; end local process

  (block closure-process
    (loop
     (setq processed-flag nil)
     (dolist** (def defs1)
       (when (and (fun-ref-ccb (car def))	; referred across closure
                  (null (caddr def)))		; and not processed
         (setq processed-flag t)
         (setf (caddr def) t)
         (let ((*vars* (cons 'cb *vars*))
               (*funs* (cons 'cb *funs*))
               (*blocks* (cons 'cb *blocks*))
               (*tags* (cons 'cb *tags*)))
              (let ((lam (c1lambda-expr (cadddr def) (fun-name (car def)))))
                   (add-info info (cadr lam))
		   ;; fun-info, CM 20031008  accumulate local function info, particularly changed-vars,
		   ;; and pass upwards to call-local and call-global to prevent certain inlining in inline-args
		   ;; via args-info-changed-vars		 
		   (add-info (fun-info (car def)) (cadr lam))
                   (push (list (car def) lam) closures))))
       )
     (unless processed-flag (return-from closure-process))
     )) ;;; end closure process

  (dolist** (def defs1)
    (when (or (fun-ref (car def)) (fun-ref-ccb (car def)))
          (setf (fun-cfun (car def)) (next-cfun))))

  ;; fun-info, CM 20031008  accumulate local function info, particularly changed-vars,
  ;; and pass upwards to call-local and call-global to prevent certain inlining in inline-args
  ;; via args-info-changed-vars		 
  ;;
  ;; walk body a second time to gather info in labels lambda lists

  (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  (let ((*vars* *vars*))
    (c1add-globals ss)
    (check-vdecl nil ts is)
    (setq body (c1decl-body other-decl body)))
  (add-info info (cadr body))

  (if (or local-funs closures)
      (list 'labels info (reverse local-funs) (reverse closures) body)
      body))

(defun c2labels (local-funs closures body &aux (*vs* *vs*) (*clink* *clink*) (*ccb-vs* *ccb-vs*))

  ;;; Prepare for cross-referencing closures.
  (dolist** (def closures)
    (let ((fun (car def)))
         (declare (object fun))
         (setf (fun-ref fun) (vs-push))
         (wt-nl)
         (wt-vs (fun-ref fun))
         (wt "=MMcons(Cnil,") (wt-clink) (wt ");")
         (clink (fun-ref fun))
         (setf (fun-ref-ccb fun) (ccb-vs-push))
    ))

  (dolist** (def local-funs)
    (setf (fun-level (car def)) *level*)
    ;; Append *initial-ccb-vs* here and use it to initialize *initial-ccb-vs* when writing
    ;; the code for this function.  Local functions, unlike closures, get an envinment
    ;; level with the *initial-ccb-vs* at this point, and *ccb-vs* can be further incremented
    ;; here, in c2tagbody-ccb, and in c2block-ccb.  CM 20031130
    (push (list nil *clink* *ccb-vs* (car def) (cadr def) *initial-ccb-vs*) *local-funs*))

  ;;; Then make closures.
  (dolist** (def closures)
    (push (list 'closure (if (null *clink*) nil (cons 0 0))
                *ccb-vs* (car def) (cadr def))
          *local-funs*)
    (push (car def) *closures*)
    (wt-nl)
    (wt-vs* (fun-ref (car def)))
    (wt "=make_cclosure_new(LC" (fun-cfun (car def)) ",Cnil,") (wt-clink)
    (wt ",Cdata);")
    )

  ;;; now the body of flet

  (c2expr body)
  )

(defun c1macrolet (args &aux body ss ts is other-decl
                        (*funs* *funs*) (*vars* *vars*))
  (when (endp args) (too-few-args 'macrolet 1 0))
  (dolist** (def (car args))
    (cmpck (or (endp def) (not (symbolp (car def))) (endp (cdr def)))
           "The macro definition ~s is illegal." def)
    (push (list (car def)
                (caddr (si:defmacro* (car def) (cadr def) (cddr def))))
          *funs*))
  (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  (c1add-globals ss)
  (check-vdecl nil ts is)
  (c1decl-body other-decl body)
  )

(defun c1local-fun (fname &aux (ccb nil))
  (declare (object ccb))
  (dolist* (fun *funs* nil)
    (cond ((eq fun 'CB) (setq ccb t))
          ((consp fun)
           (when (eq (car fun) fname) (return (cadr fun))))
          ((eq (fun-name fun) fname)
           (if ccb
               (setf (fun-ref-ccb fun) t)
               (setf (fun-ref fun) t))
	   ;; Add fun-info here at the bottom of the call-local processing tree
	   ;; FIXME -- understand why special variable *info* is used in certain
	   ;; cases and copy-info in othes.
	   ;; This extends local call arg side-effect protection (via args-info-changed-vars)
	   ;; through c1funob to other call methods than previously supported c1symbol-fun,
	   ;; e.g. c1multiple-value-call, etc.  CM 20031030
	   (add-info *info* (fun-info fun))
	   (return (list 'call-local *info* fun ccb))))))

(defun sch-local-fun (fname)
  ;;; Returns fun-ob for the local function (not locat macro) named FNAME,
  ;;; if any.  Otherwise, returns FNAME itself.
  (dolist* (fun *funs* fname)
    (when (and (not (eq fun 'CB))
               (not (consp fun))
               (eq (fun-name fun) fname))
          (return fun)))
  )

(defun c1local-closure (fname &aux (ccb nil))
  (declare (object ccb))
  ;;; Called only from C1FUNCTION.
  (dolist* (fun *funs* nil)
    (cond ((eq fun 'CB) (setq ccb t))
          ((consp fun)
           (when (eq (car fun) fname) (return (cadr fun))))
          ((eq (fun-name fun) fname)
           (setf (fun-ref-ccb fun) t)
	   ;; Add fun-info here at the bottom of the call-local processing tree
	   ;; FIXME -- understand why special variable *info* is used in certain
	   ;; cases and copy-info in othes.
	   ;; This extends local call arg side-effect protection (via args-info-changed-vars)
	   ;; through c1funob to other call methods than previously supported c1symbol-fun,
	   ;; e.g. c1multiple-value-call, etc.  CM 20031030
	   (add-info *info* (fun-info fun))
	   (return (list 'call-local *info* fun ccb))))))

(defun c2call-local (fd args &aux (*vs* *vs*))
  ;;; FD is a list ( fun-object ccb ).
  (cond
   ((cadr fd)
    (push-args args)
    (wt-nl "cclosure_call(") (wt-ccb-vs (fun-ref-ccb (car fd))) (wt ");"))
   ((and (listp args)
         *do-tail-recursion*
         *tail-recursion-info*
         (eq (car *tail-recursion-info*) (car fd))
         (eq *exit* 'RETURN)
         (tail-recursion-possible)
         (= (length args) (length (cdr *tail-recursion-info*))))
    (let* ((*value-to-go* 'trash)
           (*exit* (next-label))
           (*unwind-exit* (cons *exit* *unwind-exit*)))
          (c2psetq (mapcar #'(lambda (v) (list v nil))
                           (cdr *tail-recursion-info*))
                   args)
          (wt-label *exit*))
    (unwind-no-exit 'tail-recursion-mark)
    (wt-nl "goto TTL;")
    (cmpnote "Tail-recursive call of ~s was replaced by iteration."
             (fun-name (car fd))))
   (t (push-args args)
      (wt-nl "L" (fun-cfun (car fd)) "(")
      (dotimes** (n (fun-level (car fd))) (wt "base" n ","))
      (wt "base")
      (unless (= (fun-level (car fd)) *level*) (wt (fun-level (car fd))))
      (wt ");")
      (base-used)))
  (unwind-exit 'fun-val)
  )

