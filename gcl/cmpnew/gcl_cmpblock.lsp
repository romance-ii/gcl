;; -*-Lisp-*-
;;; CMPBLOCK  Block and Return-from.
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

(si:putprop 'block 'c1block 'c1special)
(si:putprop 'block 'c2block 'c2)

(si:putprop 'return-from 'c1return-from 'c1special)
(si:putprop 'return-from 'c2return-from 'c2)

(defstruct blk
           name			;;; Block name.
           ref			;;; Referenced or not.  T or NIL.
           ref-clb		;;; Cross local function reference.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the vs-address for the
           			;;; block id, or NIL.
           ref-ccb		;;; Cross closure reference.
           			;;; During Pass1, T or NIL.
           			;;; During Pass2, the ccb-vs for the
           			;;; block id, or NIL.
           exit			;;; Where to return.  A label.
           value-to-go		;;; Where the value of the block to go.
           var			;;; The block name holder.  Used only in
           			;;; the error message.
	   type
           )

(si::freeze-defstruct 'blk)

(defvar *blocks* nil)

;;; During Pass 1, *blocks* holds a list of blk objects and the symbols 'CB'
;;; (Closure Boundary) and 'LB' (Level Boundary).  'CB' will be pushed on
;;; *blocks* when the compiler begins to process a closure.  'LB' will be
;;; pushed on *blocks* when *level* is incremented.


(defun ref-blks (form blks)
  (ref-obs form blks 
	   (lambda (x) (setf (blk-ref-ccb x) t))
	   (lambda (x) (setf (blk-ref-clb x) t))
	   (lambda (x) (setf (blk-ref x) t))
	   'blk-name
	   "Blk"
	   (lambda (x &aux (y (pop x))) (when (eq y 'return-from) (cdr x)))))

;; (defun ref-blks1 (form blks &aux (i (cadr form)))
;;   (dolist (blk blks)
;;     (when (member blk (info-bref-ccb i))
;;       (setf (blk-ref-ccb blk) t))
;;     (when (member blk (info-bref-clb i))
;;       (setf (blk-ref-clb blk) t))
;;     (when (member blk (info-bref i))
;;       (setf (blk-ref blk) t))))

;; (defun ref-blks (form blks &optional l)
;;   (cond ((not l) 
;; 	 (cond (*fast-ref* (ref-blks1 form blks))
;; 	       ((let* ((l (list (info-bref (cadr form)) (info-bref-ccb (cadr form)) (info-bref-clb (cadr form))))
;; 		       (l (mapcar (lambda (x) (intersection x blks)) l))
;; 		       (l (mapcar (lambda (y) (mapcar (lambda (x) (cons x nil)) y)) l)))
;; 		  (ref-blks form blks l)
;; 		  (let* (y (x (member-if (lambda (x) (setq y (member nil x :key 'cdr))) l)))
;; 		    (when y
;; 		      (cmpwarn "~s Blk ~s reffed in info but not in form" (length (ldiff l x)) (blk-name (caar y)))))))))
;; 	((atom form))
;; 	((eq (car form) 'return-from)
;; 	 (let* ((bref (cddr form))
;; 		(v (pop bref))
;; 		(clb (pop bref))
;; 		(ccb (car bref)))
;; 	   (when (member v blks)
;; 	     (cond (ccb (setf (blk-ref-ccb v) t) 
;; 			(let* ((x (cadr l))(x (assoc v x)))
;; 			  (if x (rplacd x t) (cmpwarn "ccb Block ~s reffed in form but not in info" (blk-name v)))))
;; 		   (clb (setf (blk-ref-clb v) t)
;; 			(let* ((x (caddr l))(x (assoc v x))) 
;; 			  (if x (rplacd x t) (cmpwarn "clb Block ~s reffed in form but not in info" (blk-name v)))))
;; 		   ((setf (blk-ref v) t)
;; 		    (let* ((x (car l))(x (assoc v x))) 
;; 		      (if x (rplacd x t) (cmpwarn "nil Block ~s reffed in form but not in info" (blk-name v))))))
;; 	     (keyed-cmpnote (list 'blk-ref (blk-name v)) "Block ~s is referred with barrier ~s" (blk-name v) (if ccb 'cb (if clb 'lb))))
;; 	   (ref-blks (cdddr form) blks l)));FIXME?
;; 	(t (ref-blks (car form) blks l) (ref-blks (cdr form) blks l))))

(defvar *c1exit* nil)
(defun c1block (args &aux (info (make-info)))
  (when (endp args) (too-few-args 'block 1 0))
  (cmpck (not (symbolp (car args)))
         "The block name ~s is not a symbol." (car args))
  (let* ((blk (make-blk :name (car args) :ref nil :ref-ccb nil :ref-clb nil :exit *c1exit*))
         (body (let ((*blocks* (cons blk *blocks*))) (c1progn (cdr args)))))
    (add-info info (cadr body))
    (setf (info-type info) (type-or1 (info-type (cadr body)) (blk-type blk)))
    (ref-blks body (list blk))
    (when (or (blk-ref-ccb blk) (blk-ref-clb blk))
      (incf *setjmps*))
    (if (or (blk-ref-ccb blk) (blk-ref-clb blk) (blk-ref blk))
	(list 'block info blk body)
      body)))

;; (defun c1block (args &aux (info (make-info)))
;;   (when (endp args) (too-few-args 'block 1 0))
;;   (cmpck (not (symbolp (car args)))
;;          "The block name ~s is not a symbol." (car args))
;;   (let* ((blk (make-blk :name (car args) :ref nil :ref-ccb nil :ref-clb nil :exit *c1exit*))
;;          (body (let ((*blocks* (cons blk *blocks*))) (c1progn (cdr args)))))
;;     (when (or (blk-ref-ccb blk) (blk-ref-clb blk))
;;       (incf *setjmps*))
;;     (add-info info (cadr body))
;;     (setf (info-type info) (type-or1 (info-type (cadr body)) (blk-type blk)))
;;     (if (or (blk-ref-ccb blk) (blk-ref-clb blk) (blk-ref blk))
;; 	(list 'block info blk body)
;;       body)))

(defun c2block (blk body)
  (cond ((blk-ref-ccb blk) (c2block-ccb blk body))
        ((blk-ref-clb blk) (c2block-clb blk body))
        (t (c2block-local blk body))))

(defun c2block-local (blk body)
  (setf (blk-exit blk) *exit*)
  (setf (blk-value-to-go blk) *value-to-go*)
  (c2expr body))

(defun c2block-clb (blk body &aux (*vs* *vs*))
  (setf (blk-exit blk) *exit*)
  (setf (blk-value-to-go blk) *value-to-go*)
  (setf (blk-ref-clb blk) (vs-push))
  (wt-nl)
  (add-libc "setjmp")
  (setq *frame-used* t)
  (wt-vs (blk-ref-clb blk))
  (wt "=alloc_frame_id();")
  (wt-nl "frs_push(FRS_CATCH,") (wt-vs (blk-ref-clb blk)) (wt ");")
  (wt-nl "if(nlj_active)")
  (wt-nl "{nlj_active=FALSE;frs_pop();")
  (unwind-exit 'fun-val 'jump)
  (wt "}")
  (wt-nl "else{")
  (let ((*unwind-exit* (cons 'frame *unwind-exit*))) (c2expr body))
  (wt-nl "}")
  )

(defun c2block-ccb (blk body &aux (*vs* *vs*) (*clink* *clink*)
                                  (*ccb-vs* *ccb-vs*))
  (setf (blk-exit blk) *exit*)
  (setf (blk-value-to-go blk) *value-to-go*)
  (setf (blk-ref-clb blk) (vs-push))
  (setf (blk-var blk) (add-symbol (blk-name blk)))
  (wt-nl) (wt-vs (blk-ref-clb blk)) (wt "=alloc_frame_id();")
  (wt-nl)
;  (wt-vs (blk-ref-clb blk))
;  (wt "=MMcons(") (wt-vs (blk-ref-clb blk)) (wt ",") (wt-clink) (wt ");")
  (clink (blk-ref-clb blk))
  (setf (blk-ref-ccb blk) (ccb-vs-push))
  (add-libc "setjmp")
  (setq *frame-used* t)
  (wt-nl "frs_push(FRS_CATCH,") (wt-vs* (blk-ref-clb blk)) (wt ");")
  (wt-nl "if(nlj_active)")
  (wt-nl "{nlj_active=FALSE;frs_pop();")
  (unwind-exit 'fun-val 'jump)
  (wt "}")
  (wt-nl "else{")
  (let ((*unwind-exit* (cons 'frame *unwind-exit*))) (c2expr body))
  (wt-nl "}")
  )

(defun c1return-from (args &aux (name (car args)) ccb clb inner)
  (cond ((endp args) (too-few-args 'return-from 1 0))
        ((and (not (endp (cdr args))) (not (endp (cddr args))))
         (too-many-args 'return-from 2 (length args)))
        ((not (symbolp (car args)))
         "The block name ~s is not a symbol." (car args)))
  (dolist (blk *blocks* (cmperr "The block ~s is undefined." name))
    (case blk
	  (cb (setq ccb t inner (or inner 'cb)))
	  (lb (setq clb t inner (or inner 'lb)))
	  (t (when (eq (blk-name blk) name)
	       (let* ((*c1exit* (cons (blk-name blk) (blk-exit blk)))
		      (val (c1expr (cadr args)))
		      (c1fv (when ccb (c1inner-fun-var))))
		 (setf (blk-type blk) (type-or1 (blk-type blk) (info-type (cadr val))))
		 (return (list 'return-from
			       (let ((info (copy-info (cadr val))))
				 (setf (info-type info) nil)
				 (cond (ccb (pushnew blk (info-ref-ccb info)))
				       (clb (pushnew blk (info-ref-clb info)))
				       ((pushnew blk (info-ref info))))
				 (when c1fv (add-info info (cadr c1fv)))
				 info)
			       blk ccb clb c1fv val))))))))

;; (defun c1return-from (args &aux (name (car args)) ccb clb inner)
;;   (cond ((endp args) (too-few-args 'return-from 1 0))
;;         ((and (not (endp (cdr args))) (not (endp (cddr args))))
;;          (too-many-args 'return-from 2 (length args)))
;;         ((not (symbolp (car args)))
;;          "The block name ~s is not a symbol." (car args)))
;;   (dolist (blk *blocks* (cmperr "The block ~s is undefined." name))
;;     (case blk
;; 	  (cb (setq ccb t inner (or inner 'cb)))
;; 	  (lb (setq clb t inner (or inner 'lb)))
;; 	  (t (when (eq (blk-name blk) name)
;; 	       (let* ((*c1exit* (cons (blk-name blk) (blk-exit blk)))
;; 		      (val (c1expr (cadr args)))
;; 		      (c1fv (when ccb (c1inner-fun-var))))
;; 		 (setf (blk-type blk) (type-or1 (blk-type blk) (info-type (cadr val))))
;; 		 (return (list 'return-from
;; 			       (let ((info (copy-info (cadr val))))
;; 				 (setf (info-type info) nil)
;; 				 (pushnew blk (info-blocks info))
;; 				 (when *make-fast-ref*
;; 				   (cond (ccb (pushnew blk (info-vref-ccb info)))
;; 					 (clb (pushnew blk (info-vref-clb info)))
;; 					 ((pushnew blk (info-vref info)))))
;; 				 (when c1fv (add-info info (cadr c1fv)))
;; 				 info)
;; 			       blk ccb clb c1fv val))))))))

;; (defun c1return-from (args &aux (name (car args)) ccb clb inner)
;;   (cond ((endp args) (too-few-args 'return-from 1 0))
;;         ((and (not (endp (cdr args))) (not (endp (cddr args))))
;;          (too-many-args 'return-from 2 (length args)))
;;         ((not (symbolp (car args)))
;;          "The block name ~s is not a symbol." (car args)))
;;   (dolist (blk *blocks* (cmperr "The block ~s is undefined." name))
;;     (case blk
;; 	  (cb (setq ccb t inner (or inner 'cb)))
;; 	  (lb (setq clb t inner (or inner 'lb)))
;; 	  (t (when (eq (blk-name blk) name)
;; 	       (let* ((*c1exit* (cons (blk-name blk) (blk-exit blk)))
;; 		      (val (c1expr (cadr args)))
;; 		      (c1fv (when ccb (c1inner-fun-var))))
;; 		 (setf (blk-type blk) (type-or1 (blk-type blk) (info-type (cadr val))))
;; 		 (return (list 'return-from
;; 			       (let ((info (copy-info (cadr val))))
;; 				 (setf (info-type info) nil)
;; 				 (pushnew blk (info-blocks info))
;; 				 (cond (ccb (pushnew blk (info-bref-ccb info)))
;; 				       (clb (pushnew blk (info-bref-clb info)))
;; 				       ((pushnew blk (info-bref info))))
;; 				 (when c1fv (add-info info (cadr c1fv)))
;; 				 info)
;; 			       blk clb ccb c1fv val))))))))

;; (defun c1return-from (args)
;;   (cond ((endp args) (too-few-args 'return-from 1 0))
;;         ((and (not (endp (cdr args))) (not (endp (cddr args))))
;;          (too-many-args 'return-from 2 (length args)))
;;         ((not (symbolp (car args)))
;;          "The block name ~s is not a symbol." (car args)))
;;   (do ((blks *blocks* (cdr blks))
;;        (name (car args))
;;        ccb clb inner)
;;       ((endp blks)
;;        (cmperr "The block ~s is undefined." name))
;;       (case (car blks)
;;             (cb (setq ccb t inner (or inner 'cb)))
;;             (lb (setq clb t inner (or inner 'lb)))
;;             (t (when (eq (blk-name (car blks)) name)
;; 		 (let* ((blk (car blks))
;; 			(*c1exit* (cons (blk-name (car blks)) (blk-exit (car blks))))
;; 			(val (c1expr (cadr args))))
;; 		   (cond
;; 		    (ccb (ref-inner inner) (setf (blk-ref-ccb blk) t))
;; 		    (clb (setf (blk-ref-clb blk) t))
;; 		    (t (setf (blk-ref blk) t)))
;; 		   (setf (blk-type (car blks)) (type-or1 (blk-type (car blks)) (info-type (cadr val))))
;; 		   (return (list 'return-from
;; 				 (let ((info (copy-info (cadr val))))
;; 				   (setf (info-type info) nil)
;; 				   (pushnew blk (info-blocks info))
;; 				   info)
;; 				 blk clb ccb val))))))))

(defun c2return-from (blk ccb clb c1fv val)
  (declare (ignore c1fv))
  (cond (ccb (c2return-ccb blk val))
        (clb (c2return-clb blk val))
        (t (c2return-local blk val))))

;; (defun c2return-from (blk clb ccb c1fv val)
;;   (declare (ignore c1fv))
;;   (cond (ccb (c2return-ccb blk val))
;;         (clb (c2return-clb blk val))
;;         (t (c2return-local blk val))))

;; (defun c2return-from (blk clb ccb val)
;;   (cond (ccb (c2return-ccb blk val))
;;         (clb (c2return-clb blk val))
;;         (t (c2return-local blk val))))

(defun c2return-local (blk val)
  (let ((*value-to-go* (blk-value-to-go blk))
        (*exit* (blk-exit blk)))
       (c2expr val)))

(defun c2return-clb (blk val)
  (let ((*value-to-go* 'top)) (c2expr* val))
  (wt-nl "unwind(frs_sch(")
  (if (blk-ref-ccb blk) (wt-vs* (blk-ref-clb blk)) (wt-vs (blk-ref-clb blk)))
  (wt "),Cnil);")
  (unwind-exit nil))

(defun c2return-ccb (blk val)
  (wt-nl "{frame_ptr fr;")
  (wt-nl "fr=frs_sch(") (wt-ccb-vs (blk-ref-ccb blk)) (wt ");")
  (wt-nl "if(fr==NULL) FEerror(\"The block ~s is missing.\",1," (vv-str (blk-var blk)) ");")
  (let ((*value-to-go* 'top)) (c2expr* val))
  (wt-nl "unwind(fr,Cnil);}")
  (unwind-exit nil))
