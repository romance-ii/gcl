;;; MAKE_UFUN  Makes Ufun list for user-defined functions.
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

(defvar gazonk (make-package 'symbol-table :use nil))
(defvar eof (cons nil nil))
(defvar *Ufun-out*)

(defvar *str* (make-array 128 :element-type 'string-char :fill-pointer 0))

(defun make-Ufun (in-files &key (out-file "Ufun_list.lsp"))
  (with-open-file (*Ufun-out* out-file :direction :output)
    (print '(in-package "COMPILER") *Ufun-out*)
    (dolist (file in-files)
      (with-open-file (in (merge-pathnames file #".lsp"))
        (loop (when (eq (setq form (read in nil eof)) eof) (return))
              (do-form form))))))

(defun do-form (form)
    (when (consp form)
        (case (car form)
          (defun
           (let ((*package* (find-package 'compiler)))
                (print `(si:putprop
                         ',(cadr form)
                         ,(get-cname (cadr form))
                         'Ufun)
                       *Ufun-out*))
           (eval form))
          (progn (mapc #'do-form (cdr form)))
          (eval-when
           (if (member 'load (cadr form))
               (mapc #'do-form (cddr form))
               (if (member 'compile (cadr form))
                   (mapc #'eval (cddr form)))))
          (t
           (if (macro-function (car form))
               (do-form (macroexpand-1 form))
               (eval form))))))

(defun get-cname (symbol &aux (name (symbol-name symbol)))
  (setf (fill-pointer *str*) 0)
  (vector-push #\U *str*)
  (dotimes (n (length name))
           (let ((char (schar name n)))
                (cond ((alphanumericp char)
                       (vector-push (char-downcase char) *str*))
                      ((char= char #\-) (vector-push #\_ *str*))
                      ((char= char #\*) (vector-push #\A *str*))
                      )))
  (multiple-value-bind (foo flag) (find-symbol *str* 'symbol-table)
    (unless flag
            ;(setq foo (intern (copy-seq *str*) 'symbol-table))
            (setq foo (intern *str* 'symbol-table))
            ;(set foo nil)
            (return-from get-cname *str*))
    (gensym *str*)
    (gensym 0)
    (loop
     (setq name (symbol-name (gensym)))
     (multiple-value-bind (foo flag1)
                          (intern name 'symbol-table)
                          (unless flag1
                                  ;(set foo nil)
                                  (return-from get-cname name)))))
  )
