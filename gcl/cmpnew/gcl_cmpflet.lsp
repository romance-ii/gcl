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


(in-package :compiler)

(si:putprop 'flet 'c1flet 'c1special)
(si:putprop 'flet 'c2flet 'c2)
(si:putprop 'labels 'c1labels 'c1special)
(si:putprop 'labels 'c2labels 'c2)
(si:putprop 'macrolet 'c1macrolet 'c1special)
;;; c2macrolet is not defined, because MACROLET is replaced by PROGN
;;; during Pass 1.
(si:putprop 'call-local 'c2call-local 'c2)

(defstruct (fun (:print-function (lambda (x s i) (s-print 'fun (fun-name x) (si::address x) s))))
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
	   vv src c1 c1cb fn)

(defun local-fun-fn (id)
  (let* ((fun (local-fun-p id)))
    (when fun (fun-fn fun))))

;; (defun local-fun-fun (id)
;;   (let* ((fun (local-fun-p id)))
;;     (when fun (car (atomic-tp (info-type (cadr (fun-prov fun))))))))

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
(defmacro with-restore-vars (&rest body &aux (rv (sgen "WRV-"))(wns (sgen "WRVW-")))
  `(let (,rv (,wns *warning-note-stack*))
     (declare (ignorable ,rv))
     (flet ((keep-vars nil (setq ,rv *restore-vars* ,wns *warning-note-stack*))
	    (pop-restore-vars 
	     nil
	     (setq *warning-note-stack* ,wns)
	     (mapc (lambda (l &aux (v (pop l))(tp (pop l))(st (car l))) 
		     (keyed-cmpnote (list (var-name v) 'type-propagation 'type)
				    "Restoring var type on ~s from ~s to ~s"
				    (var-name v) (var-type v) tp)
		     (setf (var-type v) tp (var-store v) st)) (ldiff *restore-vars* ,rv))))
	   (prog1
	       (let (*restore-vars* (*restore-vars-env* *vars*))
		 (unwind-protect 
		     (progn ,@body)
		   (pop-restore-vars)))
	     (mapc (lambda (l) (when (member (car l) *restore-vars-env*) (pushnew l *restore-vars* :key 'car))) ,rv)))))

;; (defmacro with-restore-vars (&rest body &aux (rv (sgen "WRV-")))
;;   `(let (,rv)
;;      (declare (ignorable ,rv))
;;      (flet ((keep-vars nil (setq ,rv *restore-vars*))
;; 	    (pop-restore-vars 
;; 	     nil
;; 	     (mapc (lambda (l &aux (v (pop l))(tp (pop l))(st (car l))) 
;; 		     (keyed-cmpnote (list (var-name v) 'type-propagation 'type)
;; 				    "Restoring var type on ~s from ~s to ~s"
;; 				    (var-name v) (var-type v) tp)
;; 		     (setf (var-type v) tp (var-store v) st)) (ldiff *restore-vars* ,rv))))
;; 	   (prog1
;; 	       (let (*restore-vars* (*restore-vars-env* *vars*))
;; 		 (unwind-protect 
;; 		     (progn ,@body)
;; 		   (pop-restore-vars)))
;; 	     (mapc (lambda (l) (when (member (car l) *restore-vars-env*) (pushnew l *restore-vars* :key 'car))) ,rv)))))

;; (defmacro with-restore-vars (&rest body);FIXME var-flags
;;   (let ((rv (tmpsym)))
;;     `(let (,rv)
;;        (declare (ignorable ,rv))
;;        (flet ((keep-vars nil (setq ,rv *restore-vars*))
;; 	      (pop-restore-vars 
;; 	       nil
;; 	       (cond (,rv
;; 		      (dolist (l ,rv)
;; 			(when (member (car l) *restore-vars-env*)
;; 			  (pushnew l *restore-vars* :key 'car))))
;; 		     ((do (l) ((not (setq l (pop *restore-vars*)))) 
;; 			  (let ((v (pop l))(tp (pop l))(st (car l)))
;; 			    (keyed-cmpnote (list (var-name v) 'type-propagation 'type)
;; 					   "Restoring var type on ~s from ~s to ~s"
;; 					   (var-name v) (var-type v) tp)
;; 			  (setf (var-type v) tp (var-store v) st)))))))
;; 	     (let (*restore-vars* (*restore-vars-env* *vars*))
;; 	       (unwind-protect 
;; 		   (progn ,@body)
;; 		 (pop-restore-vars)))))))


;; (defmacro with-restore-vars (&rest body &aux (rv (load-time-value (gensym "WRV-")))(rrv (load-time-value (gensym "WRV-"))));FIXME var-flags
;;   `(let (,rrv ,rv)
;;      (declare (ignorable ,rv ,rrv))
;;      (flet ((keep-vars nil (setq ,rv *restore-vars*))
;; 	    (pop-restore-vars 
;; 	     nil
;; 	     (mapc (lambda (l &aux (v (pop l))(tp (pop l))(st (car l))) 
;; 		     (keyed-cmpnote (list (var-name v) 'type-propagation 'type)
;; 				    "Restoring var type on ~s from ~s to ~s"
;; 				    (var-name v) (var-type v) tp)
;; 		     (setf (var-type v) tp (var-store v) st)) (ldiff ,rrv ,rv))
;; 	     (mapc (lambda (l) (pushnew l *restore-vars* :key 'car)) ,rv)))
;; 	   (unwind-protect 
;; 	       (let (*restore-vars* (*restore-vars-env* *vars*))
;; 		 (prog1 (progn ,@body)
;; 		   (setq ,rrv *restore-vars*)))
;; 	     (pop-restore-vars)))))
;;)



;; (defmacro with-restore-vars (&rest body)
;;   (let ((rv (tmpsym)))
;;     `(let (,rv)
;;        (declare (ignorable ,rv))
;;        (flet ((keep-vars nil (setq ,rv *restore-vars*))
;; 	      (pop-restore-vars 
;; 	       nil
;; 	       (cond (,rv
;; 		      (dolist (l ,rv)
;; 			(when (member (car l) *restore-vars-env*)
;; 			  (pushnew l *restore-vars* :key 'car))))
;; 		     ((do (l) ((not (setq l (pop *restore-vars*)))) 
;; 			  (let ((v (pop l))(tp (car l)))
;; 			    (keyed-cmpnote (list (var-name v) 'type-propagation 'type)
;; 					   "Restoring var type on ~s from ~s to ~s"
;; 					   (var-name v) (var-type v) tp)
;; 			  (setf (var-type v) tp)))))))
;; 	     (let (*restore-vars* (*restore-vars-env* *vars*))
;; 	       (unwind-protect 
;; 		   (progn ,@body)
;; 		 (pop-restore-vars)))))))

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

;; (defun process-local-fun-env (env b fun src tp)
;;   (under-env env (process-local-fun b fun src tp)))

(defun bump-closure-lam-sig (lam)
  (flet ((nt (x) (type-or1 x #tt)))
	(mapc (lambda (x) (setf (var-type x) (nt (var-type x)))) (caaddr lam))
	(let ((i (cadar (last lam))))
	  (setf (info-type i) (nt (info-type i))))
	(lam-e-to-sig lam)))

(defun process-local-fun (b fun def tp)
  (let* ((name (fun-name fun))
	 (lam (do-fun name (cons name (cdr def)) (fun-call fun) (member fun *funs*) b))
	 (res (list fun lam)))

    ;closures almost always called anonymously which will be slow unless argd is 0
    (when (fun-c1cb fun) (setf (car (fun-call fun)) (bump-closure-lam-sig lam)))

    (ref-environment);FIXME?
    (setf (fun-cfun fun) (next-cfun))
    (add-info (fun-info fun) (cadr lam));FIXME copy-info?
    (setf (info-type (fun-info fun)) (cadar (fun-call fun)))
    (setf (info-type (cadr lam)) tp)
    res))

;; (defun process-local-fun (b fun def tp)
;;   (let* ((name (fun-name fun))
;; 	 (lam (do-fun name (cons name (cdr def)) (fun-call fun) (member fun *funs*) b))
;; ;	 (cvs (let (r) (do-referred (v (cadr lam)) (when (and (var-p v) (var-cbb v)) (push v r))) r))
;; 	 (res (list fun lam))
;; ;	 (l (si::interpreted-function-lambda (cadr tp)))
;; 	 )

;;     ;closures almost always called anonymously which will be slow unless argd is 0
;;     (when (or (eq b 'cb) (fun-ref-ccb fun)) (setf (car (fun-call fun)) (bump-closure-lam-sig lam)))

;;     (ref-environment)
;;     (setf (fun-cfun fun) (next-cfun))
;; ;    (setf (cadr l) cvs)
;;     (add-info (fun-info fun) (cadr lam));FIXME copy-info?
;;     (setf (info-type (fun-info fun)) (cadar (fun-call fun)))
;;     (setf (info-type (cadr lam)) tp)
;;     res))


(defun ref-funs (form funs)
  (ref-obs form funs 
	   (lambda (x) (setf (fun-ref-ccb x) t))
	   (lambda (x))
	   (lambda (x) (setf (fun-ref x) t))
	   'fun-name
	   "Fun"
	   (lambda (x &aux (y (pop x))) (when (eq y 'call-local) (butlast (cadr x))))))

;; (defun ref-funs1 (form funs &aux (i (cadr form)))
;;   (dolist (fun funs)
;;     (when (member fun (info-fref-ccb i))
;;       (setf (fun-ref-ccb fun) t))
;;     (when (member fun (info-fref i))
;;       (setf (fun-ref fun) t))))

;; (defun ref-funs (form funs &optional l)
;;   (cond ((not l) 
;; 	 (cond (*fast-ref* (ref-funs1 form funs))
;; 	       ((let* ((l (list (info-fref (cadr form)) (info-fref-ccb (cadr form))))
;; 		       (l (mapcar (lambda (x) (intersection x funs)) l))
;; 		       (l (mapcar (lambda (y) (mapcar (lambda (x) (cons x nil)) y)) l)))
;; 		  (ref-funs form funs l)
;; 		  (let* (y (x (member-if (lambda (x) (setq y (member nil x :key 'cdr))) l)))
;; 		    (when y
;; 		      (cmpwarn "~s Fun ~s reffed in info but not in form" (length (ldiff l x)) (var-name (caar y)))))))))
;; 	((atom form))
;; 	((eq (car form) 'call-local)
;; 	 (let* ((fref (caddr form))
;; 		(f (pop fref))
;; 		(ccb (car fref)))
;; 	   (when (member f funs)
;; 	     (if ccb (setf (fun-ref-ccb f) t) (setf (fun-ref f) t))
;; 	     (let* ((x (if ccb (cadr l) (car l)))(x (assoc f x)))
;; 	       (if x (rplacd x t) (cmpwarn "~a Fun ~s reffed in form but not in info" (if ccb "ccb" "nil") (fun-name f))))
;; 	     (keyed-cmpnote (list 'fun-ref (fun-name f)) "Fun ~s is referred with barrier ~s" (fun-name f) (when ccb 'cb)))
;; 	   (ref-funs (cdddr form) funs l)))
;; 	(t (ref-funs (car form) funs l) (ref-funs (cdr form) funs l))))

(defun c1flet-labels (labels args &aux body ss ts is other-decl (info (make-info))
			     defs1 fnames (ofuns *funs*) (*funs* *funs*))

  (when (endp args) (too-few-args 'flet 1 0))

  (dolist (def (car args) (setq defs1 (nreverse defs1)))
    (let* ((x (car def))(y (si::funid-sym x))) (unless (eq x y) (setq def (cons y (cdr def)))))
    (cmpck (or (endp def) (endp (cdr def))) "The function definition ~s is illegal." def)
    (when labels
      (cmpck (member (car def) fnames) "The function ~s was already defined." (car def))
      (push (car def) fnames))
    (let* ((src (si::block-lambda (cadr def) (car def) (cddr def)))
	   (fun (make-fun :name (car def) :src src :info (make-info :type nil :sp-change 1))))
      (push fun *funs*)
      (push (list fun (cdr def)) defs1)))
  
  (let ((*funs* (if labels *funs* ofuns)))
;    (mapc (lambda (x &aux (x (car x))) (setf (fun-fn x) (afe (cons 'df (current-env)) (mf (fun-name x))))) defs1))
    (mapc (lambda (x &aux (x (car x))) (setf (fun-fn x) (mf (fun-name x)))) defs1))

  (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  
  (c1add-globals ss)
  (check-vdecl nil ts is)
  (setq body (c1decl-body other-decl body))
  
  (let ((nf (mapcar 'car defs1)))
    (ref-funs body nf)
    (when labels
      (do (fun) ((not (setq fun (car (member-if (lambda (x) (or (fun-ref x) (fun-ref-ccb x))) nf)))))
	  (setq nf (remove fun nf))
	  (when (fun-ref fun)
	    (ref-funs (fun-c1 fun) nf))
	  (when (fun-ref-ccb fun)
	    (ref-funs (fun-c1cb fun) nf)))))

  (add-info info (cadr body))
  (setf (info-type info) (info-type (cadr body)))

  (let* ((funs (mapcar 'car defs1))
	 (fns (mapcar (lambda (x) (caddr (fun-c1   x))) (remove-if-not 'fun-ref funs)))
	 (cls (mapcar (lambda (x) (caddr (fun-c1cb x))) (remove-if-not 'fun-ref-ccb funs))))
    (if (or fns cls)
	(list (if labels 'labels 'flet) info fns cls body)
      body)))

;; (defun c1flet-labels (labels args &aux body ss ts is other-decl (info (make-info))
;; 			     defs1 fnames (ofuns *funs*) (*funs* *funs*))

;;   (when (endp args) (too-few-args 'flet 1 0))

;;   (dolist (def (car args) (setq defs1 (nreverse defs1)))
;;     (let* ((x (car def))(y (si::funid-sym x))) (unless (eq x y) (setq def (cons y (cdr def)))))
;;     (cmpck (or (endp def) (endp (cdr def))) "The function definition ~s is illegal." def)
;;     (when labels
;;       (cmpck (member (car def) fnames) "The function ~s was already defined." (car def))
;;       (push (car def) fnames))
;;     (let* ((src (si::block-lambda (cadr def) (car def) (cddr def)))
;; 	   (fun (make-fun :name (car def) :src src :info (make-info :type nil :sp-change 1))))
;;       (push fun *funs*)
;;       (push (list fun (cdr def)) defs1)))
  
;;   (let ((*funs* (if labels *funs* ofuns)))
;; ;    (mapc (lambda (x &aux (x (car x))) (setf (fun-fn x) (afe (cons 'df (current-env)) (mf (fun-name x))))) defs1))
;;     (mapc (lambda (x &aux (x (car x))) (setf (fun-fn x) (mf (fun-name x)))) defs1))

;;   (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  
;;   (c1add-globals ss)
;;   (check-vdecl nil ts is)
;;   (setq body (c1decl-body other-decl body))
  
;;   (let ((nf (mapcar 'car defs1)))
;;     (ref-funs body nf)
;;     (when labels
;;       (do (fun) ((not (setq fun (car (member-if (lambda (x) (or (fun-ref x) (fun-ref-ccb x))) nf)))))
;; 	  (setq nf (remove fun nf))
;; 	  (when (fun-ref fun)
;; 	    (ref-funs (fun-c1 fun) nf))
;; 	  (when (fun-ref-ccb fun)
;; 	    (ref-funs (fun-c1cb fun) nf)))))

;;   (add-info info (cadr body))
;;   (setf (info-type info) (info-type (cadr body)))

;;   (let ((funs (mapcar 'car defs1)))
;;     (list (if labels 'labels 'flet) info 
;; 	  (mapcar (lambda (x) (caddr (fun-c1   x))) (remove-if-not 'fun-ref funs))
;; 	  (mapcar (lambda (x) (caddr (fun-c1cb x))) (remove-if-not 'fun-ref-ccb funs))
;; 	  body)))

;; (defun c1flet-labels (labels args &aux body ss ts is other-decl (info (make-info))
;; 			     defs1 fnames (ofuns *funs*) (*funs* *funs*))

;;   (when (endp args) (too-few-args 'flet 1 0))

;;   (dolist (def (car args) (setq defs1 (nreverse defs1)))
;;     (let* ((x (car def))(y (si::funid-sym x))) (unless (eq x y) (setq def (cons y (cdr def)))))
;;     (cmpck (or (endp def) (endp (cdr def))) "The function definition ~s is illegal." def)
;;     (when labels
;;       (cmpck (member (car def) fnames) "The function ~s was already defined." (car def))
;;       (push (car def) fnames))
;;     (let* ((src (si::block-lambda (cadr def) (car def) (cddr def)))
;; 	   (fun (make-fun :name (car def) :src src :info (make-info :type nil :sp-change 1) :fn (funid-to-fn (car def)))))
;;       (push fun *funs*)
;;       (push (list fun (cdr def)) defs1)))
  
;;   (let ((*funs* (if labels *funs* ofuns)))
;;     (mapc (lambda (x &aux (x (car x)))
;; 	    (setf (fun-c1 x) (c1function (list (fun-src x)) t)
;; 		  (fun-c1cb x) (copy-list (fun-c1 x)))) defs1))
  
;;   (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  
;;   (c1add-globals ss)
;;   (check-vdecl nil ts is)
;;   (setq body (c1decl-body other-decl body))
  
;;   (mapc (lambda (x) (add-info info (fun-info (car x)))) defs1)
;;   (add-info info (cadr body))
;;   (setf (info-type info) (info-type (cadr body)))

;;   (let ((funs (mapcar 'car defs1)))
;;     (list (if labels 'labels 'flet) info 
;; 	  (mapcar (lambda (x) (caddr (fun-c1 x))) (remove-if-not 'fun-ref funs))
;; 	  (mapcar (lambda (x) (caddr (fun-c1cb x))) (remove-if-not 'fun-ref-ccb funs))
;; 	  body)))

;; (defun c1flet-labels (labels args &aux body ss ts is other-decl (info (make-info))
;; 			     defs1 fnames (ofuns *funs*) (*funs* *funs*))

;;   (when (endp args) (too-few-args 'flet 1 0))

;;   (dolist (def (car args) (setq defs1 (nreverse defs1)))
;;     (let* ((x (car def))(y (si::funid-sym x))) (unless (eq x y) (setq def (cons y (cdr def)))))
;;     (cmpck (or (endp def) (endp (cdr def))) "The function definition ~s is illegal." def)
;;     (when labels
;;       (cmpck (member (car def) fnames) "The function ~s was already defined." (car def))
;;       (push (car def) fnames))
;;     (let* ((src (si::block-lambda (cadr def) (car def) (cddr def)))
;; 	   (fun (make-fun :name (car def) :src src :info (make-info :type nil :sp-change 1) :fn (funid-to-fn src))))
;;       (push fun *funs*)
;;       (push (list fun (cdr def)) defs1)))
  
;;   (let ((*funs* (if labels *funs* ofuns)))
;;     (mapc (lambda (x &aux (x (car x))) (setf (fun-prov x) (c1function (list (fun-src x)) t))) defs1))
;; ;    (mapc (lambda (x) (setf (fun-denv (car x)) (current-env))) defs1))
  
;;   (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  
;;   (c1add-globals ss)
;;   (check-vdecl nil ts is)
;;   (setq body (c1decl-body other-decl body))
  
;;   (mapc (lambda (x) (add-info info (fun-info (car x)))) defs1)
;;   (add-info info (cadr body))
;;   (setf (info-type info) (info-type (cadr body)))

;;   (let ((funs (mapcar 'car defs1)))
;;     (list (if labels 'labels 'flet) info 
;; 	  (mapcar 'fun-c1 (remove-if-not 'fun-ref funs))
;; 	  (mapcar 'fun-c1cb (remove-if-not 'fun-ref-ccb funs))
;; 	  body)))


(defun c1flet (args)
  (c1flet-labels nil args))

(defun export-call (l)
  (list* (export-sig (pop l)) (pop l) (apply 'compress-fle (pop l)) l))

(defun c2flet-labels (labels local-funs closures body
			     &aux (*vs* *vs*) (oclink *clink*) (*clink* *clink*) 
			     (occb-vs *ccb-vs*) (*ccb-vs* *ccb-vs*))

  (mapc (lambda (def &aux (fun (car def)))
	  (setf (fun-ref fun) (vs-push))
	  (clink (fun-ref fun))
	  (setf (fun-ref-ccb fun) (ccb-vs-push))) closures)

  (mapc (lambda (def &aux (fun (car def)))
	  (when (eq (fun-ref fun) t) (setf (fun-ref fun) (vs-push)))) local-funs)
  
  (let ((*clink*  (if labels *clink*  oclink))
	(*ccb-vs* (if labels *ccb-vs* occb-vs)))

    (mapc (lambda (def &aux (fun (pop def)))
	    (setf (fun-level fun) *level*)
	    (push (list nil *clink* *ccb-vs* fun (car def) *initial-ccb-vs*) *local-funs*)) local-funs)
    
    (when (or local-funs closures) (base-used));fixme
    
    (dolist (def closures)
      
      (let* ((fun (pop def))
	     (lam (car def))
	     (cl (fun-call fun))
	     (sig (car cl))
	     (at (car sig))
	     (rt (cadr sig)))
	
	(push (list 'closure (if (null *clink*) nil (cons 0 0)) *ccb-vs* fun lam) *local-funs*)
      
	(wt-nl)
	(wt-vs* (fun-ref fun))
	(wt "=")

	(setf (fun-vv fun) 
	      (cons '|#,| `(let ((si::f #'(lambda nil nil)))
			     (si::add-hash si::f ,@(mapcar (lambda (x) `',x) (export-call cl)))
			     (si::call si::f))))

	(wt-make-cclosure (fun-cfun fun) (fun-name fun) 
			  (fun-vv fun) (new-proclaimed-argd at rt) (argsizes at rt (xa lam)) *clink*)
	(wt ";")
	(wt-nl))))

  (c2expr body))

;; (defun c2flet-labels (labels local-funs closures body
;; 			     &aux (*vs* *vs*) (oclink *clink*) (*clink* *clink*) 
;; 			     (occb-vs *ccb-vs*) (*ccb-vs* *ccb-vs*))

;;   (mapc (lambda (def &aux (fun (car def)))
;; 	  (setf (fun-ref fun) (vs-push))
;; 	  (clink (fun-ref fun))
;; 	  (setf (fun-ref-ccb fun) (ccb-vs-push))) closures)

;;   (mapc (lambda (def &aux (fun (car def)))
;; 	  (when (eq (fun-ref fun) t) (setf (fun-ref fun) (vs-push)))) local-funs)
  
;;   (let ((*clink*  (if labels *clink*  oclink))
;; 	(*ccb-vs* (if labels *ccb-vs* occb-vs)))

;;     (mapc (lambda (def &aux (fun (pop def)))
;; 	    (setf (fun-level fun) *level*)
;; 	    (push (list nil *clink* *ccb-vs* fun (car def) *initial-ccb-vs*) *local-funs*)) local-funs)
    
;;     (when (or local-funs closures) (base-used));fixme
    
;;     (dolist (def closures)
      
;;       (let* ((fun (pop def))
;; 	     (lam (car def))
;; 	     (cl (fun-call fun))
;; 	     (sig (car cl))
;; 	     (at (car sig))
;; 	     (rt (cadr sig)))
	
;; 	(push (list 'closure (if (null *clink*) nil (cons 0 0)) *ccb-vs* fun lam) *local-funs*)
      
;; 	(wt-nl)
;; 	(wt-vs* (fun-ref fun))
;; 	(wt "=")
;; 	(wt-make-cclosure (fun-cfun fun) (fun-name fun) 
;; 			  (1+ *next-vv*) (new-proclaimed-argd at rt) (argsizes at rt (xa lam)) *clink*)
;; 	(wt ";")
;; 	(wt-nl)
	
;; 	(push-data-incf nil)
;; 	(add-init
;; 	 `(si::setvv ,*next-vv*
;; 		     (let ((si::f #'(lambda nil nil)))
;; 		       (si::add-hash si::f ,@(mapcar (lambda (x) `',x) (export-call cl)))
;; 		       (si::call si::f))) t))))

;;   (c2expr body))

;; (defun c2flet-labels (labels local-funs closures body
;; 			     &aux (*vs* *vs*) (oclink *clink*) (*clink* *clink*) 
;; 			     (occb-vs *ccb-vs*) (*ccb-vs* *ccb-vs*))

;;   (dolist (def closures)
;;     (let ((fun (car def)))
;;       (setf (fun-ref fun) (vs-push))
;;       (clink (fun-ref fun))
;;       (setf (fun-ref-ccb fun) (ccb-vs-push))))
    
;;   (let ((*clink*  (if labels *clink*  oclink))
;; 	(*ccb-vs* (if labels *ccb-vs* occb-vs)))

;;     (dolist (def local-funs)
;;       (setf (fun-level (car def)) *level*)
;;       (push (list nil *clink* *ccb-vs* (car def) (cadr def) *initial-ccb-vs*) *local-funs*))
    
;;     (when (or local-funs closures) (base-used));fixme
    
;;     (dolist (def closures)
      
;;       (push (list 'closure (if (null *clink*) nil (cons 0 0)) *ccb-vs* (car def) (cadr def)) *local-funs*)
      
;;       (let* ((fun (car def))
;; 	     (cl (fun-call fun))
;; 	     (sig (car cl))
;; 	     (at (car sig))
;; 	     (rt (cadr sig)))
	
;; 	(wt-nl)
;; 	(wt-vs* (fun-ref fun))
;; 	(wt "=")
;; 	(wt-make-cclosure (fun-cfun fun) (fun-name fun) 
;; 			  (1+ *next-vv*) (new-proclaimed-argd at rt) (argsizes at rt (xa (cadr def))) *clink*)
;; 	(wt ";")
;; 	(wt-nl)
	
;; 	(push-data-incf nil)
;; 	(add-init
;; 	 `(si::setvv ,*next-vv*
;; 		     (let ((si::f #'(lambda nil nil)))
;; 		       (si::add-hash si::f ,@(mapcar (lambda (x) `',x) (cons (export-sig (car cl)) (cdr cl))))
;; 		       (si::call si::f))) t))))

;;   (c2expr body))

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
	   (b (si::defmacro-lambda n (cadr def) (cddr def))))
      (push (list n 'macro b) env)))
  (when env (setq *macrolet-env* (list nil (append (cadr *macrolet-env*) (nreverse env)) nil)))
  (multiple-value-setq (body ss ts is other-decl) (c1body (cdr args) t))
  (c1add-globals ss)
  (check-vdecl nil ts is)
  (c1decl-body other-decl body))

(defun ref-inner (b)
  (when (eq b 'cb)
    (let* ((bv (member b *vars*))
	   (fv (member-if 'is-fun-var (nreverse (ldiff *vars* bv)))))
      (when fv 
	(setf (var-ref (car fv)) t)))))
;; (defun ref-inner (b)
;;   (when (eq b 'cb)
;;     (let* ((bv (member b *vars*))
;; 	   (fv (member-if 'is-fun-var *vars*)))
;;       (when fv 
;; 	(when (tailp bv fv)
;; 	  (setf (var-ref (car fv)) t))))))

;(defvar *local-fun-recursion* nil)
;; (defun c1local-fun (fname &aux ccb prev inner)
;;   (dolist (fun *funs*)
;;     (cond ((eq fun 'cb) (setq ccb t inner (or inner 'cb)))
;; 	  ((eq fun 'lb) (setq inner (or inner 'lb)))
;;           ((eq (fun-name fun) fname)
;; 	   (cond (ccb (ref-inner inner) (setf prev (fun-ref-ccb fun) (fun-ref-ccb fun) t))
;; 		 ((setf prev (fun-ref fun) (fun-ref fun) t)))
;; 	   (unless prev
;; 	     (unless (member fname *local-fun-recursion*)
;; 	       (let* ((*local-fun-recursion* (cons fname *local-fun-recursion*)))
;; 		 (setf (fun-c1 fun) (unfoo (fun-prov fun) (if ccb 'cb 'lb) fun)))))
;; 	   (setf (info-type (fun-info fun)) (cadar (fun-call fun)))
;; 	   (return (list 'call-local (fun-info fun) (list fun ccb)))))))

;; (defun make-fun-c1 (fun b env &optional osig)
;;   (let* ((res (under-env env (c1function (list (fun-src fun) b fun))))
;; 	 (sig (car (fun-call fun))))
;;     (if (and (is-referred fun (cadr res)) (not (eq (cadr osig) (cadr sig))))
;; 	(make-fun-c1 fun b env sig))
;;     res))

;; (defmacro make-local-fun (c1 b f env)
;;   `(progn
;;      (unless (,c1 ,f) (setf (,c1 ,f) t (,c1 ,f) (make-fun-c1 ,f ',b ,env)))
;;      (when (listp (,c1 ,f)) (,c1 ,f))))

(defvar *force-fun-c1* nil)
(defvar *fun-stack* nil)
;FIXME clean and think
(defun make-fun-c1 (fun ccb env &optional osig
			&aux (c1 (if ccb (fun-c1cb fun) (fun-c1 fun))) tmp (*fun-stack* (cons (cons fun ccb) *fun-stack*)))

  (labels ((set                 (fun val)      (if ccb (setf (fun-c1cb fun) val) (setf (fun-c1 fun) val)))
	   (ifunp               (key pred l)   (car (member-if (lambda (x) (when (fun-p x) (funcall pred x (funcall key x)))) l)))
	   (ifunm               (pred i)       (or  (ifunp 'fun-c1 pred (info-ref i)) (ifunp 'fun-c1cb pred (info-ref-ccb i))))
	   (calls-blocked-fun-p (fun i)        (ifunm (lambda (x y) (unless (eq x fun) (eq y t))) i))
	   (unfinished-p        (fun i)        (ifunm (lambda (x y) (not y)) i))
	   (blocked-above       nil            (member-if (lambda (x &aux (y (pop x))) (eq t (if x (fun-c1cb y) (fun-c1 y)))) (cdr *fun-stack*))))
;	   (recursive-p         (fun i)        (ifunm (lambda (x y) (when y (eq x fun))) i)))
	  
	  (cond ((eq c1 t) 
		 (keyed-cmpnote (list (fun-name fun) 'recursion) "recursive call to local fun ~s" (fun-name fun))
		 nil)
		((unless osig c1))
		((let* ((c1 (or c1 (set fun t)))
			(res (under-env env (c1function (list (fun-src fun)) (if ccb 'cb 'lb) fun)))
			(i (cadr res))
			(sig (car (fun-call fun))))
		   (cond ((setq tmp (calls-blocked-fun-p fun i))
			  (keyed-cmpnote (list (fun-name fun) 'recursion) "local fun ~s calls unfinalized funs ~s" (fun-name fun) tmp)
			  (set fun nil))
			 ((setq tmp (unfinished-p fun i))
			  (cond ((blocked-above)
				 (keyed-cmpnote (list (fun-name fun) 'recursion) "setting unfinished fun ~s to nil, ufun ~s" (fun-name fun) tmp)
				 (set fun nil))
				((eq c1 t)
				 (keyed-cmpnote (list (fun-name fun) 'recursion) "reprocessing unfinished local fun ~s: ~s" (fun-name fun) tmp)
				 (set fun res)
				 (make-fun-c1 fun ccb env sig))
				((set fun res) )))
			 ;; ((when (recursive-p fun i) (not (eq (cadr osig) (cadr sig))));FIXME bump?
			 ;;  (keyed-cmpnote (list (fun-name fun) 'recursion) "reprocessing recursive local fun ~s: ~s ~s" (fun-name fun) osig sig)
			 ;;  (set fun res)
			 ;;  (make-fun-c1 fun ccb env sig))
			 ((set fun res))))))))

;; (defun make-fun-c1 (fun ccb env &optional osig
;; 			&aux (c1 (if ccb (fun-c1cb fun) (fun-c1 fun))) tmp (*fun-stack* (cons (cons fun ccb) *fun-stack*)))

;;   (labels ((set                 (fun val)      (if ccb (setf (fun-c1cb fun) val) (setf (fun-c1 fun) val)))
;; 	   (ifunp               (key pred l)   (car (member-if (lambda (x) (when (fun-p x) (funcall pred x (funcall key x)))) l)))
;; 	   (ifunm               (pred i)       (or  (ifunp 'fun-c1 pred (info-ref i)) (ifunp 'fun-c1cb pred (info-ref-ccb i))))
;; 	   (calls-blocked-fun-p (fun i)        (ifunm (lambda (x y) (unless (eq x fun) (eq y t))) i))
;; 	   (unfinished-p        (fun i)        (ifunm (lambda (x y) (not y)) i))
;; 	   (blocked-above       nil            (member-if (lambda (x &aux (y (pop x))) (eq t (if x (fun-c1cb y) (fun-c1 y)))) (cdr *fun-stack*)))
;; 	   (recursive-p         (fun i)        (ifunm (lambda (x y) (when y (eq x fun))) i)))
	  
;; 	  (cond ((eq c1 t) 
;; 		 (keyed-cmpnote (list (fun-name fun) 'recursion) "recursive call to local fun ~s" (fun-name fun))
;; 		 nil)
;; 		((unless osig c1))
;; 		((let* ((c1 (or c1 (set fun t)))
;; 			(res (under-env env (c1function (list (fun-src fun)) (if ccb 'cb 'lb) fun)))
;; 			(i (cadr res))
;; 			(sig (car (fun-call fun))))
;; 		   (cond ((setq tmp (calls-blocked-fun-p fun i))
;; 			  (keyed-cmpnote (list (fun-name fun) 'recursion) "local fun ~s calls unfinalized funs ~s" (fun-name fun) tmp)
;; 			  (set fun nil))
;; 			 ((setq tmp (unfinished-p fun i))
;; 			  (cond ((blocked-above)
;; 				 (keyed-cmpnote (list (fun-name fun) 'recursion) "setting unfinished fun ~s to nil, ufun ~s" (fun-name fun) tmp)
;; 				 (set fun nil))
;; 				((eq c1 t)
;; 				 (keyed-cmpnote (list (fun-name fun) 'recursion) "reprocessing unfinished local fun ~s: ~s" (fun-name fun) tmp)
;; 				 (set fun res)
;; 				 (make-fun-c1 fun ccb env sig))
;; 				((set fun res) )))
;; 			 ((when (recursive-p fun i) (not (eq (cadr osig) (cadr sig))));FIXME bump?
;; 			  (keyed-cmpnote (list (fun-name fun) 'recursion) "reprocessing recursive local fun ~s: ~s ~s" (fun-name fun) osig sig)
;; 			  (set fun res)
;; 			  (make-fun-c1 fun ccb env sig))
;; 			 ((set fun res))))))))

;; (defun make-fun-c1 (fun ccb env &optional osig &aux (c1 (if ccb (fun-c1cb fun) (fun-c1 fun))))

;;   (labels ((set                 (fun val)          (if ccb (setf (fun-c1cb fun) val) (setf (fun-c1 fun) val)))
;; 	   (ifunp               (key pred l)       (member-if (lambda (x) (when (fun-p x) (funcall pred x (funcall key x)))) l))
;; 	   (ifunm               (pred i)           (or  (ifunp 'fun-c1 pred (info-ref i)) (ifunp 'fun-c1cb pred (info-ref-ccb i))))
;; 	   (calls-blocked-fun-p (fun i)            (ifunm (lambda (x y) (unless (eq x fun) (eq y t))) i))
;; 	   (recursive-p         (fun i)            (ifunm (lambda (x y) (or (not y) (eq x fun))) i)))

;; 	  (cond ((eq c1 t) 
;; 		 (keyed-cmpnote (list (fun-name fun) 'recursion) "recursive call to local fun ~s" (fun-name fun))
;; 		 nil)
;; 		((unless osig c1) c1)
;; 		((let* ((c1 (or c1 (set fun t)))
;; 			(res (under-env env (c1function (list (fun-src fun)) (if ccb 'cb 'lb) fun)))
;; 			(i (cadr res))
;; 			(sig (car (fun-call fun))))
;; 		   (declare (ignore c1));FIXME
;; 		   (cond ((calls-blocked-fun-p fun i) 
;; 			  (keyed-cmpnote (list (fun-name fun) 'recursion) "local fun ~s calls unfinalized funs" (fun-name fun))
;; 			  (set fun nil))
;; 			 ((when (recursive-p fun i) (not (eq (cadr osig) (cadr sig))));FIXME bump?
;; 			  (set fun res)
;; 			  (keyed-cmpnote (list (fun-name fun) 'recursion) "reprocessing recursive local fun ~s: ~s ~s" (fun-name fun) osig sig)
;; 			  (make-fun-c1 fun ccb env sig))
;; 			 ((set fun res))))))))

;; (defun make-fun-c1 (fun ccb env &optional osig &aux (c1 (if ccb (fun-c1cb fun) (fun-c1 fun))))

;;   (labels ((set                 (fun val)          (if ccb (setf (fun-c1cb fun) val) (setf (fun-c1 fun) val)))
;; 	   (ifunp               (key pred fun l)   (member-if (lambda (x) (when (fun-p x) (funcall pred x (funcall key x) fun))) l))
;; 	   (ifunm               (pred fun i)       (or  (ifunp 'fun-c1 pred fun (info-ref i)) (ifunp 'fun-c1cb pred fun (info-ref-ccb i))))
;; ;	   (calls-blocked-fun-p (fun i)            (ifunm (lambda (x y) (unless (eq x fun) (eq y t))) i)) FIXME
;; 	   (calls-blocked-fun-p (fun i)            (ifunm (lambda (x y z) (unless (eq x z) (eq y t))) fun i))
;; 	   (recursive-p         (fun i)            (ifunm (lambda (x y z) (or (not y) (eq x z))) fun i)))

;; 	  (cond ((eq c1 t) 
;; 		 (keyed-cmpnote (list (fun-name fun) 'recursion) "recursive call to local fun ~s" (fun-name fun))
;; 		 nil)
;; 		((unless osig c1) c1)
;; 		((let* ((c1 (or c1 (set fun t)))
;; 			(res (under-env env (c1function (list (fun-src fun)) (if ccb 'cb 'lb) fun)))
;; 			(i (cadr res))
;; 			(sig (car (fun-call fun))))
;; 		   (declare (ignore c1));FIXME
;; 		   (cond ((calls-blocked-fun-p fun i) 
;; 			  (keyed-cmpnote (list (fun-name fun) 'recursion) "local fun ~s calls unfinalized funs" (fun-name fun))
;; 			  (set fun nil))
;; 			 ((when (recursive-p fun i) (not (eq (cadr osig) (cadr sig))));FIXME bump?
;; 			  (set fun res)
;; 			  (keyed-cmpnote (list (fun-name fun) 'recursion) "reprocessing recursive local fun ~s: ~s ~s" (fun-name fun) osig sig)
;; 			  (make-fun-c1 fun ccb env sig))
;; 			 ((set fun res))))))))

(defun c1local-fun (fname &optional cl &aux ccb inner)
  (dolist (fun *funs*)
    (cond ((not (fun-p fun)) (setq ccb (or (eq fun 'cb) ccb) inner (or inner fun)))
	  ((eq (fun-name fun) fname)
	   (let* ((cl (or ccb cl))
		  (env (fn-get (fun-fn fun) 'df))
		  (fm (make-fun-c1 fun cl env))
		  (lam (cadr (caddr fm)))
		  (info (if lam (copy-info (cadr lam)) (make-info)))
		  (c1fv (when ccb (c1inner-fun-var))));FIXME fm
	     (setf (info-type info) (cadar (fun-call fun)));FIXME
	     (if cl (pushnew fun (info-ref-ccb info)) (pushnew fun (info-ref info)))
	     (when c1fv (add-info info (cadr c1fv)))
	     (return (list 'call-local info (list fun cl ccb) c1fv lam)))))))

;; (defun c1local-fun (fname &optional cl &aux ccb inner)
;;   (dolist (fun *funs*)
;;     (cond ((not (fun-p fun)) (setq ccb (or (eq fun 'cb) ccb) inner (or inner fun)))
;; 	  ((eq (fun-name fun) fname)
;; 	   (let* ((cl (or ccb cl))
;; 		  (env (fn-get (fun-fn fun) 'df))
;; 		  (fm (if cl (make-local-fun fun-c1cb cb fun env) (make-local-fun fun-c1 lb fun env)))
;; 		  (lam (cadr (caddr fm)))
;; 		  (info (if lam (copy-info (cadr lam)) (make-info)))
;; 		  (c1fv (when ccb (c1inner-fun-var))));FIXME fm
;; 	     (setf (info-type info) (cadar (fun-call fun)));FIXME
;; 	     (if cl (pushnew fun (info-ref-ccb info)) (pushnew fun (info-ref info)))
;; 	     (when c1fv (add-info info (cadr c1fv)))
;; 	     (return (list 'call-local info (list fun cl ccb) c1fv lam)))))))

;; (defun c1local-fun (fname &optional cl &aux ccb inner)
;;   (dolist (fun *funs*)
;;     (cond ((not (fun-p fun)) (setq ccb (or (eq fun 'cb) ccb) inner (or inner fun)))
;; 	  ((eq (fun-name fun) fname)
;; 	   (let* ((cl (or ccb cl))
;; 		  (env (fn-get (fun-fn fun) 'df))
;; 		  (fm (if cl (make-local-fun fun-c1cb cb fun env) (make-local-fun fun-c1 lb fun env)))
;; 		  (lam (cadr (caddr fm)))
;; 		  (info (if lam (copy-info (cadr lam)) (make-info)))
;; 		  (c1fv (when ccb (c1inner-fun-var))));FIXME fm
;; 	     (setf (info-type info) (cadar (fun-call fun)));FIXME
;; 	     (if cl (pushnew fun (info-fref-ccb info)) (pushnew fun (info-fref info)))
;; 	     (when c1fv (add-info info (cadr c1fv)))
;; 	     (return (list 'call-local info (list fun cl ccb) c1fv lam)))))))

;; (defun c1local-fun (fname &optional cl &aux ccb inner)
;;   (macrolet ((pf (fun ref c1 b) 
;; 		 `(unless (,ref ,fun) 
;; 		    (setf (,ref ,fun) t)
;; 		    (when (eq (car (,c1 ,fun)) 'provfn)
;; 		      (unprovfn (,c1 ,fun) ,b ,fun)))))
;; 	    (dolist (fun *funs*)
;; 	      (cond ((not (fun-p fun)) (setq ccb (or (eq fun 'cb) ccb) inner (or inner fun)))
;; 		    ((eq (fun-name fun) fname)
;; 		     (cond ((or ccb cl)
;; 			    (ref-inner inner) 
;; 			    (pf fun fun-ref-ccb fun-c1cb 'cb))
;; 			   ((pf fun fun-ref fun-c1 'lb)))
;; 		     (setf (info-type (fun-info fun)) (cadar (fun-call fun)))
;; 		     (return (list 'call-local (fun-info fun) (list fun ccb))))))))

;; (defun c1local-fun (fname &optional cl &aux ccb inner)
;;   (macrolet ((pf (fun ref c1 b &aux (s (tmpsym))) 
;; 		 `(let ((,s (fun-prov ,fun)))
;; 		    (unless (,ref ,fun) 
;; 		      (setf (,ref ,fun) t
;; 			    (,c1 ,fun) (process-local-fun-env (fourth ,s) ,b ,fun (fun-src ,fun) (info-type (cadr ,s))))))))
;; 	    (dolist (fun *funs*)
;; 	      (cond ((not (fun-p fun)) (setq ccb (or (eq fun 'cb) ccb) inner (or inner fun)))
;; 		    ((eq (fun-name fun) fname)
;; 		     (cond ((or ccb cl)
;; 			    (ref-inner inner) 
;; 			    (pf fun fun-ref-ccb fun-c1cb 'cb))
;; 			   ((pf fun fun-ref fun-c1 'lb)))
;; 		     (setf (info-type (fun-info fun)) (cadar (fun-call fun)))
;; 		     (return (list 'call-local (fun-info fun) (list fun ccb))))))))


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

(defun vfun-wrap (x sig clp &optional ap &aux (ap (when ap (1- ap))))
  (let* ((mv (not (single-type-p (cadr sig))))
	 (va (member '* (car sig)))
	 (nreg (length (ldiffn (car sig) va))))
    (ms "(" 
	(when clp  (concatenate 'string "fcall.fun=" clp  ","))
	(when mv "FUN_VALP=(fixnum)#v,")
	(when va "VFUN_NARGS=")
	(when (and va ap) "-")
	(when va "#n")
	(when (and va ap (< ap nreg)) (- ap nreg))
	(when va ",") x ")")))

;; (defun vfun-wrap (x sig clp)
;;   (let ((mv (not (single-type-p (cadr sig))))
;; 	(va (member '* (car sig))))
;;   (concatenate 'string "(" 
;; 	       (if clp  (concatenate 'string "fcall.fun=" clp  ",") "")
;; 	       (if mv "FUN_VALP=(fixnum)#v," "")
;; 	       (if va "VFUN_NARGS= #n   ," "") x ")")))

(defun make-local-inline (fd)
  (let* ((fun (pop fd))
	 (clp (pop fd))
	 (ap  (cadr fd))
	 (sig (car (fun-call fun)))
	 (sig (list (mapcar  (lambda (x) (link-rt x nil)) (car sig)) (link-rt (cadr sig) nil)))
	 (mv (not (single-type-p (cadr sig))))
	 (nm (c-function-name "L" (fun-cfun fun) (fun-name fun)))
	 (clp (when clp (ccb-vs-str (fun-ref-ccb fun))))
	 (nm (if clp (ms clp "->fun.fun_self") nm))
	 (inl (g1 clp nm sig ap clp (if clp -1 (fun-level fun)))))
    `(,(car sig) ,(cadr sig) 
      ,(if mv (flags rfa svt) (flags rfa))
      ,inl)))

;; (defun make-local-inline (fd)
;;   (let* ((fun (pop fd))
;; 	 (clp (pop fd))
;; 	 (ap  (cadr fd))
;; 	 (sig (car (fun-call fun)))
;; 	 (sig (list (mapcar  (lambda (x) (link-rt x nil)) (car sig)) (link-rt (cadr sig) nil)))
;; 	 (mv (not (single-type-p (cadr sig))))
;; 	 (nm (c-function-name "L" (fun-cfun fun) (fun-name fun)))
;; 	 (clp (when clp (ccb-vs-str (fun-ref-ccb fun))))
;; 	 (nm (if clp (ms clp "->fun.fun_self") nm))
;; 	 (inl (g1 clp nm sig ap clp (if clp -1 (fun-level fun)))))
;;     `(,(car sig) ,(cadr sig) 
;;       ,(if mv (flags rfa svt) (flags rfa))
;;       ,inl)))

;; (defun make-local-inline (fd)
;;   (let* ((fun (pop fd))
;; 	 (clp (pop fd))
;; 	 (ap  (pop fd))
;; 	 (sig (car (fun-call fun)))
;; 	 (sig (list (mapcar  (lambda (x) (link-rt x nil)) (car sig)) (link-rt (cadr sig) nil)))
;; 	 (mv (not (single-type-p (cadr sig))))
;; 	 (nm (c-function-name "L" (fun-cfun fun) (fun-name fun)))
;; 	 (clp (when clp (ccb-vs-str (fun-ref-ccb fun))))
;; 	 (nm (if clp (ms clp "->fun.fun_self") nm))
;; 	 (inl (g1 clp nm sig ap clp (if clp -1 (fun-level fun)))))
;;     `(,(car sig) ,(cadr sig) 
;;       ,(if mv (flags rfa svt) (flags rfa))
;;       ,inl)))

;; (defun make-local-inline (fd)
;;   (let* ((fun (pop fd))
;; 	 (clp (pop fd))
;; 	 (ap  (pop fd))
;; 	 (sig (car (fun-call fun)))
;; 	 (sig (list (mapcar  (lambda (x) (link-rt x nil)) (car sig)) (link-rt (cadr sig) nil)))
;; 	 (mv (not (single-type-p (cadr sig))))
;; 	 (nm (c-function-name "L" (fun-cfun fun) (fun-name fun)))
;; 	 (nm (if clp (strcat (ccb-vs-str (fun-ref-ccb fun)) "->fun.fun_self") nm))
;; 	 (inl (g0 nm sig ap (when clp (ccb-vs-str (fun-ref-ccb fun))) (if clp -1 (fun-level fun)))))
;;     `(,(car sig) ,(cadr sig) 
;;       ,(if mv (flags rfa svt) (flags rfa))
;;       ,inl)))

(defun c2call-local (fd c1fv lam args &aux (*vs* *vs*))
  (declare (ignore lam c1fv))
  (let ((*inline-blocks* 0))
    (unwind-exit (get-inline-loc (make-local-inline fd) args))
    (close-inline-blocks)))

;; (defun c2call-local (fd args &aux (*vs* *vs*))
;;   (let ((*inline-blocks* 0))
;;     (unwind-exit (get-inline-loc (make-local-inline fd) args))
;;     (close-inline-blocks)))

