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
          (eval (return-from c1eval-when (c1progn (cdr args))))
          ((load compile))
          (otherwise
           (cmperr "The situation ~s is illegal." situation))))
  )

(defun c1declare (args)
  (cmperr "The declaration ~s was found in a bad place." (cons 'declare args))
  )

(defun c1the (args &aux info form type)
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'the 2 (length args)))
  (unless (endp (cddr args))
          (too-many-args 'the 2 (length args)))
  (setq form (c1expr (cadr args)))
  (setq info (copy-info (cadr form)))
  (setq type (type-and (type-filter (car args)) (info-type info)))
  (when (null type)
        (cmpwarn "Type mismatch was found in ~s." (cons 'the args)))
  (setf (info-type info) type)
  (list* (car form) info (cddr form))
  )

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

(defun c1function (args &aux fd)
  (when (endp args) (too-few-args 'function 1 0))
  (unless (endp (cdr args)) (too-many-args 'function 1 (length args)))
  (let ((fun (car args)))
       (cond ((symbolp fun)
              (cond ((and (setq fd (c1local-closure fun))
                          (eq (car fd) 'call-local))
                     (list 'function *info* fd))
                    (t (let ((info (make-info
                                    :sp-change
                                    (null (get fun 'no-sp-change)))))
                            (list 'function info (list 'call-global info fun))
                            ))))
             ((and (consp fun) (eq (car fun) 'lambda))
              (cmpck (endp (cdr fun))
                     "The lambda expression ~s is illegal." fun)
              (let ((*vars* (cons 'cb *vars*))
                    (*funs* (cons 'cb *funs*))
                    (*blocks* (cons 'cb *blocks*))
                    (*tags* (cons 'cb *tags*)))
                   (setq fun (c1lambda-expr (cdr fun)))
                   (list 'function (cadr fun) fun)))
             (t (cmperr "The function ~s is illegal." fun))))
  )

(defun c2function (funob)
  (case (car funob)
        (call-global
         (unwind-exit (list 'symbol-function (add-symbol (caddr funob)))))
        (call-local
         (if (cadddr funob)
             (unwind-exit (list 'ccb-vs (fun-ref-ccb (caddr funob))))
             (unwind-exit (list 'vs* (fun-ref (caddr funob))))))
        (t
         ;;; Lambda closure.
         (let ((fun (make-fun :name 'closure :cfun (next-cfun))))
              (push (list 'closure (if (null *clink*) nil (cons 0 0))
                          *ccb-vs* fun funob)
                    *local-funs*)
              (push fun *closures*)
	      (cond (*clink*
		     (unwind-exit (list 'make-cclosure (fun-cfun fun) *clink*)))
		    (t (push-data-incf nil)
		       (add-init `(si::setvv ,*next-vv*
					     (si::mc nil ,(add-address  "&LC"
									(fun-cfun fun))))
				 t) 
		       (unwind-exit (list 'vv *next-vv*)))))
             ))
  )

(si:putprop 'symbol-function 'wt-symbol-function 'wt-loc)
(si:putprop 'make-cclosure 'wt-make-cclosure 'wt-loc)

(defun wt-symbol-function (vv)
       (if *safe-compile*
           (wt "symbol_function(VV[" vv "])")
           (wt "(VV[" vv "]->s.s_gfdef)")))

(defun wt-make-cclosure (cfun clink)
       (wt-nl "make_cclosure_new(LC" cfun ",Cnil,")
       (wt-clink clink)
       (wt ",Cdata)"))

