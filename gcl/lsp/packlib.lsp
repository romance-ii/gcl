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


;;;;    packlib.lsp
;;;;
;;;;                    package routines


(in-package 'lisp)


(export '(find-all-symbols do-symbols do-external-symbols do-all-symbols))
(export '(apropos apropos-list))


(in-package 'system)


(proclaim '(optimize (safety 2) (space 3)))


(defmacro coerce-to-package (p)
  (if (eq p '*package*)
      p
      (let ((g (gensym)))
        `(let ((,g ,p))
           (if (packagep ,g)
               ,g
               (find-package (string ,g)))))))

(defun find-all-symbols (string-or-symbol)
  (when (symbolp string-or-symbol)
        (setq string-or-symbol (symbol-name string-or-symbol)))
  (mapcan #'(lambda (p)
              (multiple-value-bind (s i)
                  (find-symbol string-or-symbol p)
                (if (or (eq i :internal) (eq i :external))
                    (list s)
                    nil)))
          (list-all-packages)))


(defmacro do-symbols ((var &optional (package '*package*) (result-form nil))
                      . body)
  (let ((p (gensym)) (i (gensym)) (l (gensym))
        (loop (gensym)) (x (gensym))(y (gensym)) (break (gensym)) declaration)
    (multiple-value-setq (declaration body) (find-declarations body))
    `(let ((,p (coerce-to-package ,package)) ,var ,l)
       ,@declaration
       (multiple-value-bind (,y ,x)
	    (package-size ,p)
            (declare (fixnum ,x ,y))
       (dotimes (,i (+ ,x ,y) (progn (setq ,var nil) ,result-form))
         (setq ,l (if (< ,i ,x)
                      (si:package-internal ,p ,i)
                      (si:package-external ,p (- ,i ,x))))
       ,loop
         (when (null ,l) (go ,break))
         (setq ,var (car ,l))
         ,@body
         (setq ,l (cdr ,l))
         (go ,loop)
       ,break)))))
       

(defmacro do-external-symbols
          ((var &optional (package '*package*) (result-form nil)) . body)
  (let ((p (gensym)) (i (gensym)) (l (gensym))
        (loop (gensym)) (break (gensym)) declaration)
    (multiple-value-setq (declaration body)
                         (find-declarations body))
    `(let ((,p (coerce-to-package ,package)) ,var ,l)
       
       ,@declaration
       (dotimes (,i (package-size ,p) (progn (setq ,var nil) ,result-form))
         (setq ,l (si:package-external ,p ,i))
       ,loop
         (when (null ,l) (go ,break))
         (setq ,var (car ,l))
         ,@body
         (setq ,l (cdr ,l))
         (go ,loop)
       ,break))))

(defmacro do-all-symbols((var &optional (result-form nil)) . body)
  `(dolist (.v (list-all-packages) ,result-form)
	   (do-symbols (,var .v)
		       ,@ body)))
	   

(defun substringp (sub str)
  (do ((i (- (length str) (length sub)))
       (l (length sub))
       (j 0 (1+ j)))
      ((> j i) nil)
    (when (string-equal sub str :start2 j :end2 (+ j l))
          (return t))))


(defun print-symbol-apropos (symbol)
  (prin1 symbol)
  (when (fboundp symbol)
        (if (special-form-p symbol)
            (princ "  Special form")
            (if (macro-function symbol)
                (princ "  Macro")
                (princ "  Function"))))
  (when (boundp symbol)
        (if (constantp symbol)
            (princ "  Constant: ")
            (princ "  has value: "))
        (prin1 (symbol-value symbol)))
  (terpri))


(defun apropos (string &optional package)
  (setq string (string string))
  (cond (package
         (do-symbols (symbol package)
           (when (substringp string (string symbol))
                 (print-symbol-apropos symbol)))
         (do ((p (package-use-list package) (cdr p)))
             ((null p))
           (do-external-symbols (symbol (car p))
             (when (substringp string (string symbol))
                   (print-symbol-apropos symbol)))))
        (t
         (do-all-symbols (symbol)
           (when (substringp string (string symbol))
                 (print-symbol-apropos symbol)))))
  (values))


(defun apropos-list (string &optional package &aux list)
  (setq list nil)
  (setq string (string string))
  (cond (package
         (do-symbols (symbol package)
           (when (substringp string (string symbol))
                 (setq list (cons symbol list))))
         (do ((p (package-use-list package) (cdr p)))
             ((null p))
           (do-symbols (symbol (car p))
             (when (substringp string (string symbol))
                   (setq list (cons symbol list))))))
        (t
         (do-all-symbols (symbol)
           (when (substringp string (string symbol))
                 (setq list (cons symbol list))))))
  list)

