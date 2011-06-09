;; -*-Lisp-*-
;;; CMPSPECIAL  Miscellaneous special forms.
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

(si:putprop 'quote 'c1quote 'c1special)
(si:putprop 'function 'c1function 'c1special)
(si:putprop 'function 'c2function 'c2)
(si:putprop 'the 'c1the 'c1special)
(si:putprop 'eval-when 'c1eval-when 'c1special)
(si:putprop 'declare 'c1declare 'c1special)
(si:putprop 'compiler-let 'c1compiler-let 'c1special)
(si:putprop 'compiler-let 'c2compiler-let 'c2)

(defun c1quote (args)
  (when (endp args) (too-few-args 'quote 1 0))
  (unless (endp (cdr args)) (too-many-args 'quote 1 (length args)))
  (c1constant-value (car args) t)
  )

(defun c1eval-when (args)
  (when (endp args) (too-few-args 'eval-when 1 0))
  (dolist** (situation (car args) (c1nil))
    (case situation
          ((eval :execute) (return-from c1eval-when (c1progn (cdr args))))
          ((load compile :load-toplevel :compile-toplevel))
          (otherwise
           (cmperr "The situation ~s is illegal." situation))))
  )

(defun c1declare (args)
  (cmperr "The declaration ~s was found in a bad place." (cons 'declare args)))

(defun c1the (args &aux info form type dtype)
  (when (or (endp args) (endp (cdr args)))
    (too-few-args 'the 2 (length args)))
  (unless (endp (cddr args))
    (too-many-args 'the 2 (length args)))
  (setq form (c1expr (cadr args)))
  (setq info (copy-info (cadr form)))
  (setq dtype (max-vtp (car args)))
  (when *compiler-new-safety* (setq dtype t))
  (when (eq dtype #tboolean) 
    (unless (type>= dtype (info-type info))
      (return-from c1the (c1expr `(when ,(cadr args) t)))))
  (setq type (type-and dtype (info-type info)))
  (when (null type)
    (when (eq (car form) 'var)
      (let* ((v (car (third form)))
	     (tg (t-to-nil (var-tag v))))
	(when tg
	  (unless (type>= (var-mt v) dtype)
	    (setf (var-mt v) (type-or1 (var-mt v) dtype))
	    (let* ((nmt (bump-tp (var-mt v)))
		   (nmt (type-and nmt (var-dt v))))
	      (setf (var-mt v) nmt))
	    (pushnew v *tvc*)
	    (when (member (var-tag v) *catch-tags*) (throw (var-tag v) v))))))
    (setq type dtype)
    (unless (not (and dtype (info-type info)))
      (cmpwarn "Type mismatch was found in ~s.~%Modifying type ~s to ~s."
	       (cons 'the args) (info-type info) type)))

  (setq form (list* (car form) info (cddr form)))
  (if (type>= #tboolean dtype) (setf (info-type (cadr form)) type) (set-form-type form type))
;  (setf (info-type info) type)
  form)

(defun c1compiler-let (args &aux (symbols nil) (values nil))
  (when (endp args) (too-few-args 'compiler-let 1 0))
  (dolist** (spec (car args))
    (cond ((consp spec)
           (cmpck (not (and (symbolp (car spec))
                            (or (endp (cdr spec))
                                (endp (cddr spec)))))
                  "The variable binding ~s is illegal." spec)
           (push (car spec) symbols)
           (push (if (endp (cdr spec)) nil (eval (cadr spec))) values))
          ((symbolp spec)
           (push spec symbols)
           (push nil values))
          (t (cmperr "The variable binding ~s is illegal." spec))))
  (setq symbols (reverse symbols))
  (setq values (reverse values))
  (setq args (progv symbols values (c1progn (cdr args))))
  (list 'compiler-let (cadr args) symbols values args)
  )

(defun c2compiler-let (symbols values body)
  (progv symbols values (c2expr body)))

(defvar *fun-id-hash* (make-hash-table :test 'eq))
(defvar *fun-ev-hash* (make-hash-table :test 'eq))
(defvar *fun-tp-hash* (make-hash-table :test 'eq))

(defun funid-to-fn1 (funid)
  (cond ((symbolp funid)
	 (cond ((local-fun-fn funid))
	       ((when (fboundp funid) (symbol-function funid)))
	       (funid (cmp-eval `(function (lambda (&rest r) 
					     (declare (:dynamic-extent r))
					     (apply ',funid r)))))))
	((cmp-eval `(function ,funid)))))

(defun funid-to-fn (funid)
  (let ((fn (funid-to-fn1 funid)))
    (setf (gethash fn *fun-id-hash*) funid)
    fn))

;; (defun funid-to-fun1 (id)
;;   (cond ((let ((id (si::funid-sym-p id)))
;; 	   (cond ((local-fun-fun id))
;; 		 ((when (fboundp id) (symbol-function id)))
;; 		 (id (cmp-eval `(function (lambda (&rest r) 
;; 					    (declare (:dynamic-extent r))
;; 					    (apply ',id r))))))))
;; 	((functionp id) id)
;; 	((cmp-eval `(function ,id)))))

;; (defun funid-to-fun (id)
;;   (let ((fun (funid-to-fun1 id)))
;;     (setf (gethash fun *fun-id-hash*) id)
;;     fun))

(defun portable-closure-src (fn)
  (let* ((lam (when (si::interpreted-function-p fn) (si::interpreted-function-lambda fn)))
	 (src (when lam (function-lambda-expression fn)))
	 (p (car (member-if-not 
		 (lambda (x) 
		   (eq x (car (member (var-name x) *vars* :key (lambda (x) (when (var-p x) (var-name x)))))))
		 (cadr lam)))))
    (if p (keyed-cmpnote '(closure inline)
			 "Not inlining ~s due to redefinition of closure variable ~s." src (var-name p))
      src)))

(defun coerce-to-funid (fn)
  (cond ((symbolp fn) fn)
	((not (functionp fn)) nil)
	((gethash fn *fun-id-hash*))
	((si::function-name fn))
	((portable-closure-src fn))))

(defun find-special-var (l f)
  (cond ((atom l) nil)
	((eq (car l) 'block) nil)
	((eq (car l) 'let*)
	 (car (member-if f (third l))))
	((or (find-special-var (car l) f) (find-special-var (cdr l) f)))))


(defun is-narg-le (l)
  (find-special-var l 'is-narg-var))

(defun mv-var (l)
  (find-special-var l 'is-mv-var))

(defun fun-var (l)
  (find-special-var l 'is-fun-var))

(defun export-sig (sig)
  `((,@(mapcar 'export-type (car sig))) ,(export-type (cadr sig))))

(defun lam-e-to-sig (l &aux (args (caddr l)) (regs (car args)) (narg (is-narg-le l))
		       (first (is-first-var (car regs))) (regs (if first (cdr regs) regs)))
  `((,@(mapcar 'var-type regs)
	  ,@(when (or narg (member-if 'identity (cdr args))) `(*)))
	,(info-type (cadar (last l)))))

(defun compress-fle (l y z)
  (let* ((fname (pop l))
	 (fname (or z fname))
	 (args  (pop l))
	 (w   (make-string-output-stream))
	 (ss  (si::open-fasd w :output nil nil))
	 (out (pd fname args l))
	 (out (if y `(lambda-closure ,y nil nil ,@(cdr out)) out)))
    (si::find-sharing-top out (aref ss 1))
    (si::write-fasd-top out ss)
    (si::close-fasd ss)
    (get-output-stream-string w)))

(defun fn-to-src (l)
  (multiple-value-bind
   (l y z)
   (function-lambda-expression l)
   (compress-fle l y z)))

(defun process-local-fun-env (env b f fun tp)
  (under-env env (process-local-fun b f fun tp)))

(defun fun-def-env (fn)
  (let ((fun (car (member-if (lambda (x) (when (fun-p x) (eq (fun-fn x) fn))) *funs*))))
    (if fun
	(fun-denv fun)
      (current-env))))

(defun c1function (args &optional (provisional *provisional-inline*) b f)

  (when (endp args) (too-few-args 'function 1 0))
  (unless (endp (cdr args)) (too-many-args 'function 1 (length args)))
  
  (let* ((funid (si::funid (car args)))
	 (fn (funid-to-fn funid))
	 (tp (if fn `(member ,fn) #tfunction))  ; intentionally unnormalized
	 (info (make-info :type tp)))
    (cond (provisional
	   (or (gethash fn *fun-tp-hash*)
	       (setf (gethash fn *fun-tp-hash*)
		     (list 'provfn info args
			   (setf (gethash fn *fun-ev-hash*) (list (current-env) (fun-def-env fn)))))))
	  ((symbolp funid)
	   (let ((fd (c1local-fun funid t)))
	     (unless fd
	       (setf (info-sp-change info) (if (null (get funid 'no-sp-change)) 1 0)))
	     (list 'function info (or fd (list 'call-global info funid)))))

	  ((let ((r (process-local-fun (or b 'cb) (or f (make-fun :name 'lambda :src funid :info (make-info :type '*))) funid tp)))
	     (add-info info (cadadr r))
	     (setf (info-flags info) (logandc2 (info-flags info) (iflags side-effects)))
	     `(function ,info ,r))))))

;; (defun c1function (args &optional (provisional *provisional-inline*) env)

;;   (when (endp args) (too-few-args 'function 1 0))
;;   (unless (endp (cdr args)) (too-many-args 'function 1 (length args)))
  
;;   (let* ((fun (car args))
;; 	 (fid (si::funid-sym-p fun))
;; 	 (fn (funid-to-fun (or fid fun)))
;; 	 (tp (if fn `(member ,fn) #tfunction))  ; intentionally unnormalized
;; 	 (info (make-info :type tp)))
;;     (cond (provisional
;; 	   (or (gethash fn *fun-tp-hash*)
;; 	       (setf (gethash fn *fun-tp-hash*)
;; 		     (list 'foo info args
;; 			   (setf (gethash fn *fun-ev-hash*) (list *vars* *blocks* *tags* *funs*))))))
;; 	  (fid
;; 	   (let ((fd (c1local-fun fid t)))
;; 	     (unless fd
;; 	       (setf (info-sp-change info) (if (null (get fid 'no-sp-change)) 1 0)))
;; 	     (list 'function info (or fd (list 'call-global info fid)))))

;; 	  ((and (consp fun) (eq (car fun) 'lambda))
;; 	   (cmpck (endp (cdr fun)) "The lambda expression ~s is illegal." fun)
;; 	   (let ((r (process-local-fun-env env 'cb (make-fun :name 'lambda :src fun :info (make-info :type '*)) fun tp)))
;; 	     (add-info info (cadadr r))
;; 	     (setf (info-flags info) (logandc2 (info-flags info) (iflags side-effects)))
;; 	     `(function ,info ,r)))
;; 	  ((cmperr "The function ~s is illegal." fun)))))

;; (defun c1function (args &optional (provisional *provisional-inline*) b f)

;;   (when (endp args) (too-few-args 'function 1 0))
;;   (unless (endp (cdr args)) (too-many-args 'function 1 (length args)))
  
;;   (let* ((fun (car args))
;; 	 (fid (si::funid-sym-p fun))
;; ;	 (ff (car (member fun *funs* :key (lambda (x) (when (fun-p x) (fun-src x))))))
;; ;	 (fid (if ff (fun-name ff) fid))
;; 	 (fn (funid-to-fun (or fid fun)))
;; 	 (tp (if fn `(member ,fn) #tfunction))
;; 	 (info (make-info :type tp)))
;;     (cond (provisional
;; 	   (or (gethash fn *fun-tp-hash*);FIXME?
;; 	       (setf (gethash fn *fun-tp-hash*)
;; 		     (list 'foo info args
;; 			   (setf (gethash fn *fun-ev-hash*) (list *vars* *blocks* *tags* *funs*))))))
;; 	  (fid
;; 	   (let ((fd (c1local-fun fid)))
;; 	     (unless fd
;; 	       (setf (info-sp-change info) (if (null (get fid 'no-sp-change)) 1 0)))
;; 	     (list 'function info (or fd (list 'call-global info fid)))))
;; 	  ((and (consp fun) (eq (car fun) 'lambda))
;; 	   (cmpck (endp (cdr fun)) "The lambda expression ~s is illegal." fun)
;; 	   (let ((r (process-local-fun 
;; 		     (or b 'cb)
;; 		     (or f 
;; ;			 (car (member ff *funs* :key (lambda (x) (when (fun-p x) (fun-src x)))))
;; 			 (make-fun :name 'lambda :src fun :info (make-info :type '*))) fun tp)))
;; 	     (add-info info (cadadr r))
;; 	     (setf (info-flags info) (logandc2 (info-flags info) (iflags side-effects)))
;; 	     `(function ,info ,r)))
;; 	  ((cmperr "The function ~s is illegal." fun)))))

(defun c2function (funob);FIXME
  (case (car funob)
        (call-global
         (unwind-exit (list 'symbol-function (add-symbol (caddr funob)))))
        (call-local
	 (let* ((funob (caddr funob))
		(fun (pop funob)))
	   (if (car funob)
	       (unwind-exit (list 'ccb-vs (fun-ref-ccb fun)))
	     (unwind-exit (list 'vs* (fun-ref fun))))))
        (otherwise
	 (let* ((fun (pop funob))
		(funob (car funob))
		(cl (fun-call fun))
		(sig (pop cl))
		(cle (pop cl))
		(at (mapcar (lambda (x) (global-type-bump (cmp-norm-tp x))) (car sig)));FIXME
		(rt (global-type-bump (cmp-norm-tp (cadr sig))));FIXME Check not needed for local funs
		(ha (mapcar (lambda (x) `',x) (cons sig (cons cle cl))))
		(clc `(let ((si::f #'(lambda nil nil)))
			(si::add-hash si::f ,@ha)
			(si::call si::f))))
	   
	   (pushnew (list 'closure (if (null *clink*) nil (cons 0 0)) *ccb-vs* fun funob)
		    *local-funs* :key 'fourth)
	   
	   (cond (*clink*
		  (unwind-exit (list 'make-cclosure (fun-cfun fun) (fun-name fun) 
				     (or (fun-vv fun) (1+ *next-vv*))
				     (new-proclaimed-argd at rt) (argsizes at rt (xa funob))
				     *clink*))
		  (unless (fun-vv fun)
		    (push-data-incf nil)
		    (setf (fun-vv fun) *next-vv*)
		    (add-init `(si::setvv ,(fun-vv fun) ,clc) t)))
		 (t  
		  (unless (fun-vv fun)
		    (push-data-incf nil)
		    (setf (fun-vv fun) *next-vv*)
		    (add-init
		     `(si::setvv ,(fun-vv fun)
				 (si::init-function 
				  ,clc
				  ,(add-address (c-function-name "&LC" (fun-cfun fun) (fun-name fun)))
				  nil nil
				  -1 ,(new-proclaimed-argd at rt) ,(argsizes at rt (xa funob)))) t))
		  (unwind-exit (list 'vv (fun-vv fun)))))))))

(si:putprop 'symbol-function 'wt-symbol-function 'wt-loc)
(si:putprop 'make-cclosure 'wt-make-cclosure 'wt-loc)

(defun wt-symbol-function (vv)
  (if *safe-compile*
      (wt "symbol_function(" (vv-str vv) ")")
    (wt "(" (vv-str vv) "->s.s_gfdef)")))

(defun wt-make-cclosure (cfun fname call argd sizes args)
  (declare (ignore args))
  (wt "fSinit_function(")
  (wt-vv call)
  (wt ",(void *)" (c-function-name "LC" cfun fname) ",Cdata,")
  (wt-clink)
  (wt ",-1," argd "," sizes ")"))

