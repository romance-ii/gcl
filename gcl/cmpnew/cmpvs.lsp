;;; CMPVS  Value stack manager.
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

(si:putprop 'vs 'set-vs 'set-loc)
(si:putprop 'vs 'wt-vs 'wt-loc)
(si:putprop 'vs* 'wt-vs* 'wt-loc)
(si:putprop 'ccb-vs 'wt-ccb-vs 'wt-loc)

(defvar *vs* 0)
(defvar *max-vs* 0)
(defvar *clink* nil)
(defvar *ccb-vs* 0)
(defvar *initial-ccb-vs*)
(defvar *level* 0)

;;; *vs* holds the offset of the current vs-top.
;;; *max-vs* holds the maximum offset so far.
;;; *clink* holds NIL or the vs-address of the last ccb object.
;;; *ccb-vs* holds the top of the level 0 vs.
;;; *initial-ccb-vs* holds the value of *ccb-vs* when Pass 2 began to process
;;; a local (possibly closure) function.
;;; *level* holds the current function level.  *level* is 0 for a top-level
;;; function.

(defun vs-push ()
  (prog1 (cons *level* *vs*)
         (incf *vs*)
         (setq *max-vs* (max *vs* *max-vs*))))

(defun set-vs (loc vs)
  (unless (and (consp loc)
               (eq (car loc) 'vs)
               (equal (cadr loc) vs))
          (wt-nl)
          (wt-vs vs)
          (wt "= " loc ";")))

(defun wt-vs (vs)
  (cond ((eq (car vs) 'cvar)
	 (wt "V" (second vs)))
	((eq (car vs) 'cs)
	 (setq *vcs-used* t)
	 (wt "Vcs[" (cdr vs) "]"))
	(t
	 (if (= (car vs) *level*)
	     (wt "base[" (cdr vs) "]")
	   (wt "base" (car vs) "[" (cdr vs) "]")))))

(defun wt-vs* (vs)
  (wt "(" )(wt-vs vs) (wt "->c.c_car)"))

(defun wt-ccb-vs (ccb-vs)
  (wt "(base0[" (- *initial-ccb-vs* ccb-vs) "]->c.c_car)"))

(defun clink (vs) (setq *clink* vs))

(defun wt-clink (&optional (clink *clink*))
  (if (null clink) (wt "Cnil") (wt-vs clink)))

(defun ccb-vs-push () (incf *ccb-vs*))


(defun cvs-push ()
  (prog1 (cons 'cs *cs*)
    (incf *cs*)
    ))


(defun wt-list (l)
  (do ((v l (cdr v)))
      ((null v))
      (wt (car v))
      (or (null (cdr v)) (wt ","))))

