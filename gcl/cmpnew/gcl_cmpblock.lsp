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


(in-package 'compiler)

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
           )

(defvar *blocks* nil)

;;; During Pass 1, *blocks* holds a list of blk objects and the symbols 'CB'
;;; (Closure Boundary) and 'LB' (Level Boundary).  'CB' will be pushed on
;;; *blocks* when the compiler begins to process a closure.  'LB' will be
;;; pushed on *blocks* when *level* is incremented.

(defun c1block (args)
  (when (endp args) (too-few-args 'block 1 0))
  (cmpck (not (symbolp (car args)))
         "The block name ~s is not a symbol." (car args))
  (let* ((blk (make-blk :name (car args) :ref nil :ref-ccb nil :ref-clb nil))
         (*blocks* (cons blk *blocks*))
         (body (c1progn (cdr args))))
  (if (or (blk-ref-ccb blk) (blk-ref-clb blk))
   (incf *setjmps*))

        (if (or (blk-ref-ccb blk) (blk-ref-clb blk) (blk-ref blk))
            (list 'block (reset-info-type (cadr body)) blk body)
            body))
  )

(defun c2block (blk body)
  (cond ((blk-ref-ccb blk) (c2block-ccb blk body))
        ((blk-ref-clb blk) (c2block-clb blk body))
        (t (c2block-local blk body))))

(defun c2block-local (blk body)
  (setf (blk-exit blk) *exit*)
  (setf (blk-value-to-go blk) *value-to-go*)
  (c2expr body)
  )

(defun c2block-clb (blk body &aux (*vs* *vs*))
  (setf (blk-exit blk) *exit*)
  (setf (blk-value-to-go blk) *value-to-go*)
  (setf (blk-ref-clb blk) (vs-push))
  (wt-nl)
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
  (wt-nl) (wt-vs (blk-ref-clb blk))
  (wt "=MMcons(") (wt-vs (blk-ref-clb blk)) (wt ",") (wt-clink) (wt ");")
  (clink (blk-ref-clb blk))
  (setf (blk-ref-ccb blk) (ccb-vs-push))
  (wt-nl "frs_push(FRS_CATCH,") (wt-vs* (blk-ref-clb blk)) (wt ");")
  (wt-nl "if(nlj_active)")
  (wt-nl "{nlj_active=FALSE;frs_pop();")
  (unwind-exit 'fun-val 'jump)
  (wt "}")
  (wt-nl "else{")
  (let ((*unwind-exit* (cons 'frame *unwind-exit*))) (c2expr body))
  (wt-nl "}")
  )

(defun c1return-from (args)
  (cond ((endp args) (too-few-args 'return-from 1 0))
        ((and (not (endp (cdr args))) (not (endp (cddr args))))
         (too-many-args 'return-from 2 (length args)))
        ((not (symbolp (car args)))
         "The block name ~s is not a symbol." (car args)))
  (do ((blks *blocks* (cdr blks))
       (name (car args))
       (ccb nil) (clb nil))
      ((endp blks)
       (cmperr "The block ~s is undefined." name))
      (declare (object name ccb clb))
      (case (car blks)
            (cb (setq ccb t))
            (lb (setq clb t))
            (t (when (eq (blk-name (car blks)) name)
                     (let ((val (c1expr (cadr args)))
                           (blk (car blks)))
                          (cond
                           (ccb (setf (blk-ref-ccb blk) t))
                           (clb (setf (blk-ref-clb blk) t))
                           (t (setf (blk-ref blk) t)))
                          (return (list 'return-from
                                        (reset-info-type (cadr val))
                                        blk clb ccb val)))))))
  )

(defun c2return-from (blk clb ccb val)
  (cond (ccb (c2return-ccb blk val))
        (clb (c2return-clb blk val))
        (t (c2return-local blk val))))

(defun c2return-local (blk val)
  (let ((*value-to-go* (blk-value-to-go blk))
        (*exit* (blk-exit blk)))
       (c2expr val))
  )

(defun c2return-clb (blk val)
  (let ((*value-to-go* 'top)) (c2expr* val))
  (wt-nl "unwind(frs_sch(")
  (if (blk-ref-ccb blk) (wt-vs* (blk-ref-clb blk)) (wt-vs (blk-ref-clb blk)))
  (wt "),Cnil);")
  )

(defun c2return-ccb (blk val)
  (wt-nl "{frame_ptr fr;")
  (wt-nl "fr=frs_sch(") (wt-ccb-vs (blk-ref-ccb blk)) (wt ");")
  (wt-nl "if(fr==NULL) FEerror(\"The block ~s is missing.\",1,VV["
         (blk-var blk) "]);")
  (let ((*value-to-go* 'top)) (c2expr* val))
  (wt-nl "unwind(fr,Cnil);}")
  )
