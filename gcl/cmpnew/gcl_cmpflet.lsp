;; -*-Lisp-*-
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
	   (call (make-list 5))
	   vv
           src c1 prov)

(defun local-fun-fun (id)
  (let* ((fun (local-fun-p id)))
    (when fun (car (atomic-tp (info-type (cadr (fun-prov fun))))))))

;; (defun local-fun-src (id)
;;   (let ((fun (local-fun-fun id)));FUN-SRC?
;;     (when fun (function-lambda-expression fun))))

(defun local-fun-src (id)
  (let ((fun (local-fun-p id)))
    (when fun (fun-src fun))))

(si::freeze-defstruct 'fun)

(defvar *funs* nil)

;;; During Pass 1, *funs* holds a list of fun objects, local macro definitions
;;; and the symbol 'CB' (Closure Boundary).  'CB' will be pushed on *funs*
;;; when the compiler begins to process a closure.  A local macro definition
;;; is a list ( macro-name expansion-function).

(defvar *restore-vars-env* nil)
(defmacro with-restore-vars (&rest body)
  (let ((rv (tmpsym)))
    `(let (,rv)
       (flet ((keep-vars nil (setq ,rv *restore-vars*))
	      (pop-restore-vars 
	       nil
	       (cond (,rv
		      (dolist (l ,rv)
			(when (member (car l) *restore-vars-env*)
			  (pushnew l *restore-vars* :key 'car))))
		     ((do (l) ((not (setq l (pop *restore-vars*)))) 
			  (let ((v (pop l))(tp (car l)))
			    (keyed-cmpnote (list (var-name v) 'type-propagation 'type)
					   "Restoring var type on ~s from ~s to ~s"
					   (var-name v) (var-type v) tp)
			  (setf (var-type v) tp)))))))
	     (let (*restore-vars* (*restore-vars-env* *vars*))
	       (unwind-protect 
		   (progn ,@body)
		 (pop-restore-vars)))))))

;; (defmacro with-restore-vars (&rest body); `(progn ,@body))
;;   `(let (*restore-vars* (*restore-vars-env* *vars*))
;;      (flet ((pop-restore-vars 
;; 	     nil
;; 	     (do (l) ((not (setq l (pop *restore-vars*)))) 
;; 		 (setf (var-type (car l)) (cadr l)))))
;; 	   (unwind-protect (progn ,@body)
;; 	     (pop-restore-vars)))))

(defun ref-environment (&aux inner)
  (dolist (fun *funs*)
    (when (or (eq fun 'cb) (eq fun 'lb))
      (setq inner (or inner fun))))
  (when (eq inner 'cb)
    (ref-inner inner)))

(defun process-local-fun (b fun def tp)
  (let* ((name (fun-name fun))
	 (lam (do-fun name (cons name (cdr def)) (fun-call fun) (member fun *funs*) b))
	 (cvs (let (r) (do-referred (v (cadr lam)) (when (and (var-p v) (var-cbb v)) (push v r))) r))
	 (res (list fun lam))
	 (l (si::interpreted-function-lambda (cadr tp))))

    (ref-environment)
    (setf (fun-cfun fun) (next-cfun))
    (setf (cadr l) cvs)
    (add-info (fun-info fun) (cadr lam));FIXME copy-info?
    (setf (info-type (fun-info fun)) (cadar (fun-call fun)))
    (setf (info-type (cadr lam)) tp)
    res))


(defun c1flet-labels (labels args &aux body ss ts is other-decl (info (make-info))
			     defs1 fnames (ofuns *funs*) (*funs* *funs*))

  (when (endp args) (too-few-args 'flet 1 0))

  (dolist (def (car args) (setq defs1 (nreverse defs1)));FIXME double eval
    (let* ((x (car def))(y (si::funid-sym x))) (unless (eq x y) (setq def (cons y (cdr def)))))
    (cmpck (or (endp def) (endp (cdr def))) "The function definition ~s is illegal." def)
    (when labels
      (cmpck (member (car def) fnames) "The function ~s was already defined." (car def))
      (push (car def) fnames))
    (let ((fun (make-fun :name (car def) :src (si::block-lambda (cadr def) (car def) (cddr def))
			 :info (make-info :type nil :sp-change 1))))
      (push fun *funs*)
      (push (list fun (cdr def)) defs1)))
  

  (let ((*funs* (if labels *funs* ofuns)))
    (mapc (lambda (x) 
	    (setf (fun-prov (car x)) (c1function (list (fun-src (car x))) t))) defs1))
  
  (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  
  (c1add-globals ss)
  (check-vdecl nil ts is)
  (setq body (c1decl-body other-decl body))
  
  (mapc (lambda (x) (add-info info (fun-info (car x)))) defs1)
  (add-info info (cadr body))
  (setf (info-type info) (info-type (cadr body)))

  (let ((funs (mapcar 'car defs1)))
    (list (if labels 'labels 'flet) info 
	  (mapcar (lambda (x) (caddr (fun-c1 x))) (remove-if-not 'fun-ref funs))
	  (mapcar (lambda (x) (caddr (fun-c1 x))) (remove-if-not 'fun-ref-ccb funs))
	  body)))

(defun c1flet (args)
  (c1flet-labels nil args))

(defun c2flet-labels (labels local-funs closures body
			     &aux (*vs* *vs*) (oclink *clink*) (*clink* *clink*) 
			     (occb-vs *ccb-vs*) (*ccb-vs* *ccb-vs*))

  (dolist (def closures)
    (let ((fun (car def)))
      (setf (fun-ref fun) (vs-push))
      (clink (fun-ref fun))
      (setf (fun-ref-ccb fun) (ccb-vs-push))))
    
  (let ((*clink*  (if labels *clink*  oclink))
	(*ccb-vs* (if labels *ccb-vs* occb-vs)))

    (dolist (def local-funs)
      (setf (fun-level (car def)) *level*)
      (push (list nil *clink* *ccb-vs* (car def) (cadr def) *initial-ccb-vs*) *local-funs*))
    
    (when (or local-funs closures) (base-used));fixme
    
    (dolist (def closures)
      
      (push (list 'closure (if (null *clink*) nil (cons 0 0)) *ccb-vs* (car def) (cadr def)) *local-funs*)
      
      (let* ((fun (car def))
	     (cl (fun-call fun))
	     (sig (car cl))
	     (at (car sig))
	     (rt (cadr sig)))
	
	(wt-nl)
	(wt-vs* (fun-ref fun))
	(wt "=")
	(wt-make-cclosure (fun-cfun fun) (fun-name fun) 
			  (1+ *next-vv*) (new-proclaimed-argd at rt) (argsizes at rt (xa (cadr def))) *clink*)
	(wt ";")
	(wt-nl)
	
	(push-data-incf nil)
	(add-init
	 `(si::setvv ,*next-vv*
		     (let ((si::f #'(lambda nil nil)))
		       (si::add-hash si::f ,@(mapcar (lambda (x) `',x) (cons (export-sig (car cl)) (cdr cl))))
		       (si::call si::f))) t))))

  (c2expr body))

(defun c2flet (local-funs closures body)
  (c2flet-labels nil local-funs closures body))

(defun c1labels (args)
  (c1flet-labels t args))

(defun c2labels (local-funs closures body)
  (c2flet-labels t local-funs closures body))

(defvar *macrolet-env* nil)

(defun c1macrolet (args &aux body ss ts is other-decl env
                        (*funs* *funs*) (*vars* *vars*) (*macrolet-env* *macrolet-env*))
  (when (endp args) (too-few-args 'macrolet 1 0))
  (dolist (def (car args))
    (let* ((x (car def))(y (si::funid-sym x))) (unless (eq x y) (setq def (cons y (cdr def)))))
    (cmpck (or (endp def) (endp (cdr def)))
           "The macro definition ~s is illegal." def)
    (let* ((n (car def))
	   (b (si::interpreted-function-lambda (caddr (si:defmacro* n (cadr def) (cddr def))))))
      (push (list n 'macro b) env)))
  (when env (setq *macrolet-env* (list nil (append (cadr *macrolet-env*) (nreverse env)) nil)))
  (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  (c1add-globals ss)
  (check-vdecl nil ts is)
  (c1decl-body other-decl body))

(defun ref-inner (b)
  (when (eq b 'cb)
    (let* ((bv (member b *vars*))
	   (fv (member-if 'is-fun-var *vars*)))
      (when fv 
	(when (tailp bv fv)
	  (setf (var-ref (car fv)) t))))))

(defvar *local-fun-recursion* nil)
(defun c1local-fun (fname &aux ccb prev inner)
  (dolist (fun *funs*)
    (cond ((eq fun 'cb) (setq ccb t inner (or inner 'cb)))
	  ((eq fun 'lb) (setq inner (or inner 'lb)))
          ((eq (fun-name fun) fname)
	   (cond (ccb (ref-inner inner) (setf prev (fun-ref-ccb fun) (fun-ref-ccb fun) t))
		 ((setf prev (fun-ref fun) (fun-ref fun) t)))
	   (unless prev
	     (unless (member fname *local-fun-recursion*)
	       (let* ((*local-fun-recursion* (cons fname *local-fun-recursion*)))
		 (setf (fun-c1 fun) (unfoo (fun-prov fun) (if ccb 'cb 'lb) fun)))))
	   (setf (info-type (fun-info fun)) (cadar (fun-call fun)))
	   (return (list 'call-local (fun-info fun) (list fun ccb)))))))

(defun sch-local-fun (fname)
  ;;; Returns fun-ob for the local function (not locat macro) named FNAME,
  ;;; if any.  Otherwise, returns FNAME itself.
  (dolist (fun *funs* fname)
    (when (and (not (eq fun 'CB))
               (not (consp fun))
               (eq (fun-name fun) fname))
          (return fun))))

(defun make-inline-arg-str (sig &optional (lev -1))
  (let* ((inl (let (r) (dotimes (i (1+ lev) r) (push i r))))
	 (inl (mapcar (lambda (x) (strcat "base" (write-to-string x))) inl))
	 (inl (if (= lev *level*) (cons "base" (cdr inl)) inl))
	 (va (member '* (car sig)))
	 (inl (dotimes (i (- (length (car sig)) (if va 1 0)) inl) 
		(push (strcat "#" (write-to-string i)) inl)))
	 (inl (if va (cons "#?" inl) inl))
	 (inl (nreverse inl)))
    (apply 'strcat (mapcon 
		    (lambda (x) 
		      (if (and (cdr x) (not (equal (cadr x) "#?")))
			  (list (car x) ",") (list (car x)))) inl))))

(defun vfun-wrap (x sig &optional clp (ref-ccb (when clp (baboon))))
  (let ((mv (not (single-type-p (cadr sig))))
	(va (member '* (car sig))))
  (concatenate 'string "(" 
	       (if clp (strcat "fcall.fun=" (ccb-vs-str ref-ccb) ",") "")
	       (if mv "FUN_VALP=(fixnum)#v," "")
	       (if va "VFUN_NARGS= #n   ," "") x ")")))

(defun make-local-inline (fd)
  (let* ((fun (pop fd))
	 (clp (pop fd))
	 (ap  (pop fd))
	 (sig (car (fun-call fun)))
	 (sig (list (mapcar  (lambda (x) (link-rt x nil)) (car sig)) (link-rt (cadr sig) nil)))
	 (mv (not (single-type-p (cadr sig))))
	 (nm (c-function-name "L" (fun-cfun fun) (fun-name fun)))
	 (nm (if clp (strcat (ccb-vs-str (fun-ref-ccb fun)) "->fun.fun_self") nm))
	 (inl (g0 nm sig ap (if clp -1 (fun-level fun)))))
    `(,(car sig) ,(cadr sig) 
      ,(if mv (flags rfa svt) (flags rfa))
      ,inl)))

(defun c2call-local (fd args &aux (*vs* *vs*))
  (let ((*inline-blocks* 0))
    (unwind-exit (get-inline-loc (make-local-inline fd) args))
    (close-inline-blocks)))

