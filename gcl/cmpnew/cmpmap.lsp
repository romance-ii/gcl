;;; CMPMAP  Map functions.
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

(si:putprop 'mapcar 'c1mapcar 'c1)
(si:putprop 'maplist 'c1maplist 'c1)
(si:putprop 'mapcar 'c2mapcar 'c2)
(si:putprop 'mapc 'c1mapc 'c1)
(si:putprop 'mapl 'c1mapl 'c1)
(si:putprop 'mapc 'c2mapc 'c2)
(si:putprop 'mapcan 'c1mapcan 'c1)
(si:putprop 'mapcon 'c1mapcon 'c1)
(si:putprop 'mapcan 'c2mapcan 'c2)

(defun c1mapcar (args) (c1map-functions 'mapcar t args))
(defun c1maplist (args) (c1map-functions 'mapcar nil args))
(defun c1mapc (args) (c1map-functions 'mapc t args))
(defun c1mapl (args) (c1map-functions 'mapc nil args))
(defun c1mapcan (args) (c1map-functions 'mapcan t args))
(defun c1mapcon (args) (c1map-functions 'mapcan nil args))

(defun c1map-functions (name car-p args &aux funob info)
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'map-function 2 (length args)))
  (setq funob (c1funob (car args)))
  (setq info (copy-info (cadr funob)))
  (list name info funob car-p (c1args (cdr args) info))
  )

(defun c2mapcar (funob car-p args &aux (*vs* *vs*) (*inline-blocks* 0))
  (let ((label (next-label*))
        (value-loc (list 'VS (vs-push)))
        (handy (list 'CVAR (next-cvar)))
        (handies (mapcar #'(lambda (x) (declare (ignore x))
                                   (list 'CVAR (next-cvar)))
                         args))
        save
        )
       (setq save (save-funob funob))
;       (setq args (inline-args args
;                               (make-list (length args) :initial-element t)))
       (setq args (push-changed-vars
                   (inline-args args (make-list (length args)
                                                :initial-element t))
                   funob))
       (wt-nl "{object " handy ";")
       (dolist** (loc handies)
         (wt-nl "object " loc "= " (car args) ";")
         (pop args))
       (cond (*safe-compile*
              (wt-nl "if(endp(" (car handies) ")")
              (dolist** (loc (cdr handies)) (wt "||endp(" loc ")"))
              (wt "){"))
             (t
              (wt-nl "if(" (car handies) "==Cnil")
              (dolist** (loc (cdr handies)) (wt "||" loc "==Cnil"))
              (wt "){")))
       (unwind-exit nil 'jump)
       (wt "}")
       (wt-nl value-loc "=" handy "=MMcons(Cnil,Cnil);")
       (wt-label label)
       (let* ((*value-to-go* (list 'CAR (cadr handy)))
              (*exit* (next-label))
              (*unwind-exit* (cons *exit* *unwind-exit*)))
             (c2funcall funob
               (if car-p
                   (mapcar
                    #'(lambda (loc)
                              (list 'LOCATION *info* (list 'CAR (cadr loc))))
                    handies)
                   (mapcar #'(lambda (loc) (list 'LOCATION *info* loc))
                           handies))
               save)
             (wt-label *exit*))
       (cond (*safe-compile*
	      (wt-nl (car handies) "=MMcdr(" (car handies) ");")
              (dolist** (loc (cdr handies))
			(wt-nl loc "=MMcdr(" loc ");"))
              (wt-nl "if(endp(" (car handies)  ")")
              (dolist** (loc (cdr handies))
                        (wt "||endp(" loc ")"))
              (wt "){"))
             (t
              (wt-nl "if((" (car handies) "=MMcdr(" (car handies) "))==Cnil")
              (dolist** (loc (cdr handies))
                        (wt "||(" loc "=MMcdr(" loc "))==Cnil"))
              (wt "){")))
       (unwind-exit value-loc 'jump)
       (wt "}")
       (wt-nl handy "=MMcdr(" handy ")=MMcons(Cnil,Cnil);")
       (wt-nl) (wt-go label)
       (wt "}")
       (close-inline-blocks)
       )
  )

(defun c2mapc (funob car-p args &aux (*vs* *vs*) (*inline-blocks* 0))
  (let ((label (next-label*))
        value-loc
        (handies (mapcar #'(lambda (x) (declare (ignore x))
                                   (list 'CVAR (next-cvar)))
                         args))
        save
        )
       (setq save (save-funob funob))
;       (setq args (inline-args args
;                               (make-list (length args) :initial-element t)))
       (setq args (push-changed-vars
                   (inline-args args (make-list (length args)
                                                :initial-element t))
                   funob))
       (setq value-loc (car args))
       (wt-nl "{")
       (dolist** (loc handies)
                 (wt-nl "object " loc "= " (car args) ";")
                 (pop args))
       (cond (*safe-compile*
              (wt-nl "if(endp(" (car handies) ")")
              (dolist** (loc (cdr handies)) (wt "||endp(" loc ")"))
              (wt "){"))
             (t
              (wt-nl "if(" (car handies) "==Cnil")
              (dolist** (loc (cdr handies)) (wt "||" loc "==Cnil"))
              (wt "){")))
       (unwind-exit nil 'jump)
       (wt "}")
       (wt-label label)
       (let* ((*value-to-go* 'trash)
              (*exit* (next-label))
              (*unwind-exit* (cons *exit* *unwind-exit*)))
             (c2funcall funob
               (if car-p
                   (mapcar
                    #'(lambda (loc)
                              (list 'LOCATION *info* (list 'CAR (cadr loc))))
                    handies)
                   (mapcar #'(lambda (loc) (list 'LOCATION *info* loc))
                           handies))
               save)
             (wt-label *exit*))
       (cond (*safe-compile*
	      (wt-nl (car handies) "=MMcdr(" (car handies) ");")
              (dolist** (loc (cdr handies))
			(wt-nl loc "=MMcdr(" loc ");"))
              (wt-nl "if(endp(" (car handies)  ")")
              (dolist** (loc (cdr handies))
                        (wt "||endp(" loc ")"))
              (wt "){"))
             (t
              (wt-nl "if((" (car handies) "=MMcdr(" (car handies) "))==Cnil")
              (dolist** (loc (cdr handies))
                        (wt "||(" loc "=MMcdr(" loc "))==Cnil"))
              (wt "){")))
       (unwind-exit value-loc 'jump)
       (wt "}")
       (wt-nl) (wt-go label)
       (wt "}")
       (close-inline-blocks)
       )
  )

(defun c2mapcan (funob car-p args &aux (*vs* *vs*) (*inline-blocks* 0))
  (let ((label (next-label*))
        (value-loc (list 'VS (vs-push)))
        (handy (list 'CVAR (next-cvar)))
        (handies (mapcar #'(lambda (x) (declare (ignore x))
                                   (list 'CVAR (next-cvar)))
                         args))
        save
        )
       (setq save (save-funob funob))
;       (setq args (inline-args args
;                               (make-list (length args) :initial-element t)))
       (setq args (push-changed-vars
                   (inline-args args (make-list (length args)
                                                :initial-element t))
                   funob))
       (wt-nl "{object " handy ";")
       (dolist** (loc handies)
                 (wt-nl "object " loc "= " (car args) ";")
                 (pop args))
       (cond (*safe-compile*
              (wt-nl "if(endp(" (car handies) ")")
              (dolist** (loc (cdr handies)) (wt "||endp(" loc ")"))
              (wt "){"))
             (t
              (wt-nl "if(" (car handies) "==Cnil")
              (dolist** (loc (cdr handies)) (wt "||" loc "==Cnil"))
              (wt "){")))
       (unwind-exit nil 'jump)
       (wt "}")
       (wt-nl value-loc "=" handy "=MMcons(Cnil,Cnil);")
       (wt-label label)
       (let* ((*value-to-go* (list 'cdr (cadr handy)))
              (*exit* (next-label))
              (*unwind-exit* (cons *exit* *unwind-exit*))
              )
             (c2funcall funob
               (if car-p
                   (mapcar
                    #'(lambda (loc)
                              (list 'LOCATION *info* (list 'CAR (cadr loc))))
                    handies)
                   (mapcar #'(lambda (loc) (list 'LOCATION *info* loc))
                           handies))
               save)
             (wt-label *exit*))
       (cond
        (*safe-compile*
         (wt-nl "{object cdr_" handy "=MMcdr(" handy ");while(!endp(cdr_" handy ")) {cdr_" handy "=MMcdr(cdr_" handy ");" handy "=MMcdr(" handy ");}}")
          (wt-nl (car handies) "=MMcdr(" (car handies) ");")
          (dolist** (loc (cdr handies))
		    (wt-nl loc "=MMcdr(" loc ");"))
          (wt-nl "if(endp(" (car handies)  ")")
          (dolist** (loc (cdr handies))
                    (wt "||endp(" loc ")"))
         (wt "){"))
        (t
         (wt-nl "while(MMcdr(" handy ")!=Cnil)" handy "=MMcdr(" handy ");")
         (wt-nl "if((" (car handies) "=MMcdr(" (car handies) "))==Cnil")
         (dolist** (loc (cdr handies))
                   (wt "||(" loc "=MMcdr(" loc "))==Cnil"))
         (wt "){")))
       (wt-nl value-loc "=" value-loc "->c.c_cdr;")
       (unwind-exit value-loc 'jump)
       (wt "}")
       (wt-nl) (wt-go label)
       (wt "}")
       (close-inline-blocks)
       )
  )


(defun push-changed-vars (locs funob &aux (locs1 nil) (forms (list funob)))
  (dolist (loc locs (reverse locs1))
          (if (and (consp loc)
                   (eq (car loc) 'VAR)
                   (args-info-changed-vars (cadr loc) forms))
              (let ((temp (list 'VS (vs-push))))
                   (wt-nl temp "= " loc ";")
                   (push temp locs1))
              (push loc locs1))))

