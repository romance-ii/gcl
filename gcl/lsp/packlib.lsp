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


(export '(find-all-symbols do-symbols do-external-symbols do-all-symbols with-package-iterator))
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
  (let ((p (gensym)) (i (gensym)) (l (gensym)) (q (gensym))
        (loop (gensym)) (x (gensym))(y (gensym)) (break (gensym)) declaration)
    (multiple-value-setq (declaration body) (find-declarations body))
    `(let ((,p (coerce-to-package ,package)) ,var ,l )
       ,@declaration
       (dolist (,q (cons ,p (package-use-list ,p)) (progn (setq ,var nil) ,result-form))
	       (multiple-value-bind 
		(,y ,x) (package-size ,q)
		(declare (fixnum ,x ,y))
		(if (not (eq ,p ,q)) (setq ,x 0))
		(dotimes (,i (+ ,x ,y))
			 (setq ,l (if (< ,i ,x)
				      (si:package-internal ,q ,i)
				    (si:package-external ,q (- ,i ,x))))
			 ,loop
			 (when (null ,l) (go ,break))
			 (setq ,var (car ,l))
			 (if (or (eq ,q ,p) 
				 (eq :inherited (car (last (multiple-value-list 
							    (find-symbol (symbol-name ,var) ,p))))))
			     (tagbody ,@body))
			 (setq ,l (cdr ,l))
			 (go ,loop)
			 ,break))))))
       

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
		       (tagbody ,@ body))))
	   

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


;(defun apropos (string &optional package)
;  (setq string (string string))
;  (cond (package
;         (do-symbols (symbol package)
;           (when (substringp string (string symbol))
;                 (print-symbol-apropos symbol)))
;         (do ((p (package-use-list package) (cdr p)))
;             ((null p))
;           (do-external-symbols (symbol (car p))
;             (when (substringp string (string symbol))
;                   (print-symbol-apropos symbol)))))
;        (t
;         (do-all-symbols (symbol)
;           (when (substringp string (string symbol))
;                 (print-symbol-apropos symbol)))))
;  (values))


(defun apropos-list (string &optional package &aux list)
  (setq list nil)
  (setq string (string string))
  (cond (package
         (do-symbols (symbol package)
		     (when (substringp string (string symbol))
		       (setq list (cons symbol list))))
         (do ((p (package-use-list package) (cdr p)))
             ((null p))
	     (do-external-symbols (symbol (car p))
				  (when (substringp string (string symbol))
				    (setq list (cons symbol list))))))
        (t
         (do-all-symbols (symbol)
			 (when (substringp string (string symbol))
			   (setq list (cons symbol list))))))
  (stable-sort (delete-duplicates list :test #'eq)
	       #'string< :key #'symbol-name))

(defun apropos (string &optional package)
  (dolist (symbol (apropos-list string package))
    (print-symbol-apropos symbol))
  (values))

(defmacro with-package-iterator ((name plist &rest symbol-types) . body)
  (let ((p (gensym)) (i (gensym)) (l (gensym)) (q (gensym)) (dum (gensym))
        (x (gensym))(y (gensym)) (access (gensym)) declaration)
    (multiple-value-setq (declaration body) (si::find-declarations body))
    (if (null symbol-types)
	(specific-error :too-few-arguments "Symbol type specifiers must be supplied"))
    `(let ((,p (cons t (if (atom ,plist) (list ,plist) ,plist))) (,q nil) (,l nil)
	   (,i -1) (,x 0) (,y 0) (,dum nil) (,access nil))
       (declare (fixnum ,x ,y))
       (flet ((,name () 
		     (tagbody ,name
			      (when (null (setq ,l (cdr ,l)))
				(when (eql (incf ,i) (+ ,x ,y))
				  (when (null (setq ,q (cdr ,q))) 
				    (when (null (setq ,p (cdr ,p)))
				      (return-from ,name nil))
				    (rplaca ,p (coerce-to-package (car ,p)))
				    (setq ,q (list 
					      (si::coerce-to-package (car ,p))))
				    (when (member :inherited (list ,@symbol-types))
				      (rplacd ,q (package-use-list (car ,q)))))
				  (multiple-value-setq (,y ,x) (si::package-size (car ,q)))
				  (when (or (not (member :internal (list ,@symbol-types)))
					    (not (eq (car ,p) (car ,q))))
				    (setq ,x 0))
				  (when (and (not (member :external (list ,@symbol-types)))
					     (eq (car ,p) (car ,q)))
				    (setq ,y 0))
				  (when (zerop (+ ,x ,y)) 
				    (setq ,i -1)
				    (go ,name))
				  (setq ,i 0))
				(setq ,l (if (< ,i ,x)
					     (si::package-internal (car ,q) ,i)
					   (si::package-external (car ,q) (- ,i ,x)))))
			      (when (null ,l)
				(go ,name))
			      (multiple-value-setq (,dum ,access) 
						   (find-symbol 
						    (symbol-name (car ,l)) (car ,p)))
			      (when (and (not (eq ,access :inherited)) 
					 (not (eq (car ,p) (car ,q))))
				(go ,name)))
		     (values 't (car ,l) ,access (car ,p))))
	     ,@declaration
	     ,@body))))

