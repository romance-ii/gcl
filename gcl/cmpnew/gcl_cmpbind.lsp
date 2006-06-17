;;-*-Lisp-*-
;;; CMPBIND  Variable Binding.
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

(si:putprop 'bds-bind 'set-bds-bind 'set-loc)

;;; Those functions that call the following binding functions should
;;; rebind the special variables,
;;; *vs*, *clink*, *ccb-vs*, and *unwind-exit*.

(defun c2bind (var)
  (case (var-kind var)
        (LEXICAL
         (when (var-ref-ccb var)
               (wt-nl)
               (wt-vs (var-ref var))
               (wt "=MMcons(") (wt-vs (var-ref var))
               (wt ",") (wt-clink) (wt ");")
               (clink (var-ref var))
               (setf (var-ref-ccb var) (ccb-vs-push))))
        (SPECIAL
         (wt-nl "bds_bind(VV[" (var-loc var) "],") (wt-vs (var-ref var))
         (wt ");")
         (push 'bds-bind *unwind-exit*))
	(DOWN
	  (cond ((integerp (var-loc var))
		 (wt-nl "base0[" (var-loc var) "]=")
		 (wt-vs (var-ref var))
		 (wt ";"))
		(t (wfs-error))))
        (t
	 (cond ((eq (var-kind var) #tinteger)
		(wt-nl "SETQ_IO(V" (var-loc var)","
		       "V" (var-loc var)"alloc,")
		(wt "(") (wt-vs (var-ref var)) (wt "),")
		(wt (bignum-expansion-storage) ");"))
	       (t 
		(wt-nl "V" (var-loc var) "=")
		(cond ;FIXME
		 ((eq (var-kind var) 'OBJECT))
		 ((eq (var-kind var) #tfixnum) (wt "fix"))
		 ((eq (var-kind var) #tcharacter) (wt "char_code"))
		 ((eq (var-kind var) #tlong-float) (wt "lf"))
		 ((eq (var-kind var) #tshort-float) (wt "sf"))
		 ((baboon)))
		(wt "(") (wt-vs (var-ref var)) (wt ");"))))))

(defun c2bind-loc (var loc)
  (case (var-kind var)
        (LEXICAL
         (cond ((var-ref-ccb var)
                (wt-nl)
                (wt-vs (var-ref var))
                (wt "=MMcons(" loc ",") (wt-clink) (wt ");")
                (clink (var-ref var))
                (setf (var-ref-ccb var) (ccb-vs-push)))
               (t
                (wt-nl) (wt-vs (var-ref var)) (wt "= " loc ";"))))
        (SPECIAL
         (wt-nl "bds_bind(VV[" (var-loc var) "]," loc ");")
         (push 'bds-bind *unwind-exit*))

        (DOWN
	  (wt-nl "base0[" (var-loc var) "]=" loc ";"))
        (t
	 (cond ((eq (var-kind var) #tinteger)
		(let ((*inline-blocks* 0) (*restore-avma* *restore-avma*))
		  (save-avma '(nil integer))
		  (wt-nl "V" (var-loc var) "= ")
		  (wt-integer-loc loc)
		  (wt ";")
		  (close-inline-blocks)))
	       (t
		(wt-nl "V" (var-loc var) "= ")
		(let ((wtf (cdr (assoc (var-kind var) +wt-loc-alist+))))
		  (unless wtf (baboon))
		  (funcall wtf loc))
		(wt ";"))))))

(defun c2bind-init (var init)
  (case (var-kind var)
        (LEXICAL
         (cond ((var-ref-ccb var)
                (let ((loc (list 'vs (var-ref var))))
                     (let ((*value-to-go* loc))
                          (c2expr* init))
                     (wt-nl loc "=MMcons(" loc ",") (wt-clink *clink*)
                     (wt ");"))
                (clink (var-ref var))
                (setf (var-ref-ccb var) (ccb-vs-push)))
               (t
                (let ((*value-to-go* (list 'vs (var-ref var))))
                     (c2expr* init)))))
        (SPECIAL
         (let ((*value-to-go* (list 'bds-bind (var-loc var))))
              (c2expr* init))
         (push 'bds-bind *unwind-exit*))
	(DOWN
	  (let ((*value-to-go* (list 'down (var-loc var))))
	    (c2expr* init)))
	(t 
	 (unless (assoc (var-kind var) +wt-loc-alist+)
	   (baboon))
         (let ((*value-to-go* (list 'var var nil)))
	   (c2expr* init)))))

(defun set-bds-bind (loc vv)
       (wt-nl "bds_bind(VV[" vv "]," loc ");"))
