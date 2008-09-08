;; -*-Lisp-*-
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


;;;;	evalmacros.lsp


(in-package "LISP")

(export '(defvar defparameter defconstant memq define-symbol-macro import delete-package))

(in-package "SYSTEM")


;(eval-when (compile) (proclaim '(optimize (safety 2) (space 3))))
;(eval-when (compile) (proclaim '(optimize (safety 2))))
;(eval-when (eval compile) (defun si:clear-compiler-properties (symbol code)))
(eval-when (eval compile) (setq si:*inhibit-macro-special* nil))


(defmacro defvar (var &optional (form nil form-sp) doc-string)
  (declare (optimize (safety 2)))
  `(progn (si:*make-special ',var)
	  ,(if doc-string
	       `(si:putprop ',var ,doc-string 'variable-documentation))
	  ,(if form-sp
	       `(or (boundp ',var)
		    (setq ,var ,form)))
	  ',var)
	  )

(defmacro defparameter (var form &optional doc-string)
  (declare (optimize (safety 2)))
  (if doc-string
      `(progn (si:*make-special ',var)
              (si:putprop ',var ,doc-string 'variable-documentation)
              (setq ,var ,form)
              ',var)
      `(progn (si:*make-special ',var)
              (setq ,var ,form)
              ',var)))

(defmacro defconstant (var form &optional doc-string)
  (declare (optimize (safety 2)))
  (if doc-string
      `(progn (si:*make-constant ',var ,form)
              (si:putprop ',var ,doc-string 'variable-documentation)
              ',var)
      `(progn (si:*make-constant ',var ,form)
              ',var)))


;;; Each of the following macros is also defined as a special form.
;;; Thus their names need not be exported.

(defmacro and (&rest forms)
  (declare (optimize (safety 2)))
  (if (endp forms)
      t
      (let ((x (reverse forms)))
           (do ((forms (cdr x) (cdr forms))
                (form (car x) `(if ,(car forms) ,form)))
               ((endp forms) form)))))

(defmacro or (&rest forms)
  (declare (optimize (safety 2)))
  (unless (endp forms)
    (let ((x (reverse forms)))
      (do ((forms (cdr x) (cdr forms)) (gs)
	   (form (car x)
		 (if (or (constantp (car forms)) (symbolp (car forms)))
		     (let ((temp (car forms)))
		       `(if ,temp ,temp ,form))
		   (let ((temp (if gs gs (setq gs (gensym)))))
		     `(let ((,temp ,(car forms)))
			(if ,temp ,temp ,form))))))
               ((endp forms) form)))))

(defmacro locally (&rest body)   (declare (optimize (safety 2))) `(let () ,@body))

(defmacro loop (&rest body &aux (tag (gensym)))
  (declare (optimize (safety 2)))
  `(block nil (tagbody ,tag (progn ,@body) (go ,tag))))

(defun import (s &optional (p *package*))
  (import-internal s p)
  t)

(defun delete-package (p)
  (the boolean (values (delete-package-internal p))))

(import 'while #+ansi-cl 'cl-user #-ansi-cl 'user)
(defmacro while (test &rest forms)
  (declare (optimize (safety 2)))
 `(loop (unless ,test (return)) ,@forms))


(defun setf-sym (funid)
  (values       
   (intern (si::string-concatenate
	    (let ((x (symbol-package funid))) (if x (package-name x) ""))
	    "::"
	    (symbol-name funid))
	   (load-time-value (or (find-package 'setf) (make-package 'setf))))))

(defmacro funid-sym (funid)
  (let ((s (gensym)))
    `(let ((,s ,funid))
       (etypecase
	,s
	(symbol ,s)
	((cons (member setf) (cons symbol null)) (setf-sym (cadr ,s)))))))

(defmacro funid-sym-p (funid)
  (let ((s (gensym)))
    `(let ((,s ,funid))
       (typecase
	,s
	(symbol ,s)
	((cons (member setf) (cons symbol null)) (setf-sym (cadr ,s)))))))

(defmacro funid (funid)
  (let ((s (gensym)))
    `(let ((,s ,funid))
       (etypecase
	,s
	(symbol ,s)
	((cons (member lambda) t) ,s)
	((cons (member setf) (cons symbol null)) (setf-sym (cadr ,s)))))))

(defmacro funid-p (funid)
  (let ((s (gensym)))
    `(let ((,s ,funid))
       (typecase
	,s
	(symbol ,s)
	((cons (member lambda) t) ,s)
	((cons (member setf) (cons symbol null)) (setf-sym (cadr ,s)))))))

(defun funid-to-sym (funid)
  (funid-sym funid))

;;   (cond ((symbolp funid) funid)
;; 	((and (listp funid) (eq (car funid) 'setf)
;; 	      (setq funid (cdr funid)) (not (cdr funid))
;; 	      (symbolp (setq funid (car funid))))
;; 	(values       
;; 	 (intern (si::string-concatenate
;; 		  (let ((x (symbol-package funid))) (if x (package-name x) ""))
;; 		  "::"
;; 		  (symbol-name funid))
;; 		 (load-time-value (or (find-package 'setf) (make-package 'setf))))))))

(defmacro defmacro (name vl &rest body &aux whole)
  (declare (optimize (safety 2)))

  (cond ((listp vl))
        ((symbolp vl) (setq vl (list '&rest vl)))
        ((error "The defmacro-lambda-list ~s is not a list." vl)))

  (cond ((and (listp vl) (eq (car vl) '&whole))
	 (setq whole (cadr vl)) (setq vl (cddr vl)))
	((setq whole (gensym))))  

  (multiple-value-bind
   (doc decls body)
   (find-doc body nil)

  (multiple-value-bind
   (vl env)
   (get-&environment vl)

   (let* ((envp env)
	  (env (or env (gensym)))
	  (*dl* `(&aux ,env ,whole))
	  *key-check* *arg-check*
	  (ppn (dm-vl vl whole t)))

     (dolist (kc *key-check*)
       (push `(unless (getf ,(car kc) :allow-other-keys);FIXME order?
		(do ((vl ,(car kc) (cddr vl)))
		    ((endp vl))
		    (unless (member (car vl) ',(cons :allow-other-keys (cdr kc)))
		      (dm-key-not-allowed (car vl)))))
	     body))

     (dolist (ac *arg-check*)
       (push `(when ,(dm-nth-cdr (cdr ac) (car ac)) (dm-too-many-arguments)) body))
     (unless envp (push `(declare (ignore ,env)) decls))
     `(si:define-macro 
	 ',name 
	 (list ',doc ',ppn (lambda ,(reverse *dl*) ,@decls (block ,name ,@body))))))))

(defmacro define-symbol-macro (sym exp) 
  (declare (optimize (safety 2)) (ignore sym exp)) nil);FIXME placeholder

(defmacro defun (name lambda-list &rest body)
  (declare (optimize (safety 2)))
  (multiple-value-bind (doc decl body)
       (find-doc body nil)
       (let* ((rs (funid-sym name))
	      (bn (if (eq rs name) name (cadr name))))
	 `(progn ,@(when doc `((setf (get ',rs 'function-documentation) ,doc)))
		 (setf (symbol-function ',rs) 
		       (lambda ,lambda-list ,@decl (block ,bn ,@body)))
		 ',name))))
  
; assignment

(defun gens (x)
  (declare (ignorable x))
  (gensym))
;  (if (and (symbolp x) (not (constantp x)) (not (specialp x))) x (gensym)))
;    (if (and (consp x) (eq (car x) 'the) (symbolp (caddr x))) (gens (caddr x))
;      (gensym))))

(defmacro psetq (&rest args)
  (declare (optimize (safety 2)))
   (do ((l args (cddr l))
        (forms nil)
        (bindings nil))
       ((endp l) (list* 'let* (nreverse bindings) (nreverse (cons nil forms))))
       (let ((sym (gens (cadr l)))):data-
            (push (list sym (cadr l)) bindings)
            (push (list 'setq (car l) sym) forms))))

; conditionals

(defmacro cond (&rest clauses &aux (form nil))
  (declare (optimize (safety 2)))
  (let ((x (reverse clauses)))
    (dolist (l x form)
      (cond ((endp (cdr l))
	     (setq form (cond ((eq l (car x)) `(values ,(car l)))
			      (`(or ,(car l) ,form)))))
	    ((let ((c (car l)))
	       (when (constantp c) (cond ((symbolp c) (symbol-value c)) ;fixme constant-eval
					 ((when (consp c) (eq (car c) 'quote)) (cadr c)) (t))))
	     (setq form (if (endp (cddr l)) (cadr l) `(progn ,@(cdr l)))))
	    ((setq form `(if ,(car l) ,(if (endp (cddr l)) (cadr l) `(progn ,@(cdr l))) ,form)))))))

(defmacro when (pred &rest body)
  (declare (optimize (safety 2)))
  `(if ,pred (progn ,@body)))

(defmacro unless (pred &rest body)
  (declare (optimize (safety 2)))
  `(if (not ,pred) (progn ,@body)))

; program feature

(defmacro prog (vl &rest body &aux (decl nil))
  (declare (optimize (safety 2)))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare)))
       `(block nil (let ,vl ,@decl (tagbody ,@body)))
       )
      (push (car body) decl)
      (pop body))
  )

(defmacro prog* (vl &rest body &aux (decl nil))
  (declare (optimize (safety 2)))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare)))
       `(block nil (let* ,vl ,@decl (tagbody ,@body)))
       )
      (push (car body) decl)
      (pop body))
  )

; sequencing

(defmacro prog1 (first &rest body &aux (sym (gens first)))
  (declare (optimize (safety 2)))
  `(let ((,sym ,first)) ,@body ,sym))

(defmacro prog2 (first second &rest body &aux (sym (gens second)))
  (declare (optimize (safety 2)))
  `(progn ,first (let ((,sym ,second)) ,@body ,sym)))

; multiple values

(defmacro multiple-value-list (form)
  (declare (optimize (safety 2)))
  `(multiple-value-call 'list ,form))

(defun multiple-value-setq-expander (vars form)
  (let ((syms (mapcar (lambda (x) (declare (ignore x)) (gensym)) (or vars (list nil)))))
    `(multiple-value-bind ,syms ,form (setq ,@(mapcan 'list vars syms)) ,(car syms))))

(defmacro multiple-value-setq (vars form)
  (declare (optimize (safety 2)))
  (multiple-value-setq-expander vars form))
;;   (do ((vl vars (cdr vl))
;;        (sym (gensym))
;;        (forms nil))
;;       ((endp vl) `(let ((,sym (multiple-value-list ,form))) (prog1 ,@(nreverse forms))))
;;       (push `(setq ,@(when forms `(,sym (cdr ,sym))) ,(car vl) (car ,sym)) forms)))

(defmacro multiple-value-bind (vars form &rest body)
  (declare (optimize (safety 2)))
  (do ((vl vars (cdr vl))
       (sym (gensym))
       (bind nil))
      ((endp vl) `(let* ((,sym (multiple-value-list ,form)) ,@(nreverse bind))
                        ,@body))
      (push `(,(car vl) (car ,sym)) bind)
      (unless (endp (cdr vl)) (push `(,sym (cdr ,sym)) bind))))

(defmacro do (control (test . result) &rest body
              &aux (decl nil) (label (gensym)) (vl nil) (step nil))
  (declare (optimize (safety 2)))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare))))
      (push (car body) decl)
      (pop body))
  (dolist (c control)
    (declare (object c))
    (if (symbolp  c) (setq c (list c)))
    (push (list (car c) (cadr c)) vl)
    (unless (endp (cddr c))
      (push (car c) step)
      (push (caddr c) step)))
  `(block nil
          (let ,(reverse vl)
	    ,@decl
	    (tagbody
	     ,label (if (not ,test)
			(progn 
			  (tagbody ,@body)
			  (psetq ,@(reverse step))
			  (go ,label))
		      (return (progn ,@result)))))))

(defmacro do* (control (test . result) &rest body
               &aux (decl nil) (label (gensym)) (vl nil) (step nil))
  (declare (optimize (safety 2)))
  (do ()
      ((or (endp body)
           (not (consp (car body)))
           (not (eq (caar body) 'declare))))
      (push (car body) decl)
      (pop body))
  (dolist (c control)
          (declare (object c))
    (if(symbolp  c) (setq c (list c)))
        (push (list (car c) (cadr c)) vl)
    (unless (endp (cddr c))
            (push (car c) step)
            (push (caddr c) step)))
  `(block nil
          (let* ,(reverse vl)
                ,@decl
                (tagbody
                 ,label (if (not ,test)
			    (progn 
			      (tagbody ,@body)
			      (setq ,@(reverse step))
			      (go ,label))
			  (return (progn ,@result)))))))

(defmacro case (keyform &rest clauses &aux (form nil) (key (gens keyform)))
  (declare (optimize (safety 2)))
  (dolist (clause (reverse clauses) `(let ((,key ,keyform)) ,form))
          (declare (object clause))
    (cond ((or (eq (car clause) 't) (eq (car clause) 'otherwise))
           (setq form `(progn ,@(cdr clause))))
          ((consp (car clause))
           (setq form `(if (or ,@(mapcar (lambda (x) `(eql ,key ',x)) (car clause)));(member ,key ',(car clause))
                           (progn ,@(cdr clause))
                           ,form)))
          ((car clause)
           (setq form `(if (eql ,key ',(car clause))
                           (progn ,@(cdr clause))
                           ,form))))))


(defmacro return (&optional (val nil))   (declare (optimize (safety 2))) `(return-from nil ,val))

(defmacro dolist ((var form &optional (val nil)) &rest body
                                                 &aux (temp (gensym)))
  (declare (optimize (safety 2)))
  `(do* ((,temp ,form (cdr ,temp))
	 (,var (car ,temp) (car ,temp)))
	((endp ,temp) ,val)
	,@body))

;; In principle, a more complete job could be done here by trying to
;; capture fixnum type declarations from the surrounding context or
;; environment, or from within the compiler's internal structures at
;; compile time.  See gcl-devel archives for examples.  This
;; implementation relies on the fact that the gcc optimizer will
;; eliminate the bignum branch if the supplied form is a symbol
;; declared to be fixnum, as the comparison of a long integer variable
;; with most-positive-fixnum is then vacuous.  Care must be taken in
;; making comparisons with most-negative-fixnum, as the C environment
;; appears to treat this as positive or negative depending on the sign
;; of the other argument in the comparison, apparently to symmetrize
;; the long integer range.  20040403 CM.
(defmacro dotimes ((var form &optional (val nil)) &rest body)
  (declare (optimize (safety 2)))
  `(block 
    nil
    ,(cond
       ((symbolp form)
	(let ((temp (gens form)))
	  `(cond ((< ,form 0)
		  (let ((,var 0))
		    (declare (fixnum ,var) (ignorable ,var))
		    ,val))
		 ((<= ,form most-positive-fixnum)
		  (let ((,temp ,form))
		    (declare (fixnum ,temp))
		    (do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
			 (declare (fixnum ,var))
			 ,@body)))
		 ((let ((,temp ,form))
		    (do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
			 ,@body))))))
       ((constantp form)
	(cond ((< form 0)
	       `(let ((,var 0))
		  (declare (fixnum ,var) (ignorable ,var))
		  ,val))
	      ((<= form most-positive-fixnum)
	       `(do* ((,var 0 (1+ ,var))) ((>= ,var ,form) ,val)
		     (declare (fixnum ,var))
		     ,@body))
	      (`(do* ((,var 0 (1+ ,var))) ((>= ,var ,form) ,val)
		     ,@body))))
       ((let ((temp (gens form)))
	  `(let ((,temp ,form))
	     (cond ((< ,temp 0)
		    (let ((,var 0))
		      (declare (fixnum ,var) (ignorable ,var))
		      ,val))
		   ((<= ,temp most-positive-fixnum)
		    (let ((,temp ,temp))
		      (declare (fixnum ,temp))
		      (do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
			   (declare (fixnum ,var))
			   ,@body)))
		   ((do* ((,var 0 (1+ ,var))) ((>= ,var ,temp) ,val)
			 ,@body)))))))))


(defmacro declaim (&rest l)
  (declare (optimize (safety 2)))
 `(eval-when (compile eval load)
	     ,@(mapcar #'(lambda (x) `(proclaim ',x)) l)))

(defmacro lambda ( &rest l)   (declare (optimize (safety 2))) `(function (lambda ,@l)))

(defmacro memq (a b) `(member ,a ,b :test 'eq))

;;FIXME should come from DEFUNO_NEW
;(proclaim '(ftype (function (t fixnum) fixnum) si::select-read))
;(proclaim '(ftype (function () t) si::fork))
;(proclaim '(ftype (function (t) t) fib si::kill))

(defmacro background (form) 
  (let ((x (gensym))) 
    `(let ((,x (si::fork))) 
       (if (eql 0 (car ,x)) 
	   (progn (si::write-pointer-object ,form ,x)(bye)) 
	 ,x))))

(defmacro with-read-values ((i r b) (forms timeout) &body body)
  (let* ((m (gensym))
	 (j (gensym))
	 (k (gensym))
	 (p (gensym))
	 (pbl (length forms))
	 (pbm (1- (ash 1 pbl))))
  `(let* ((,m ,pbm)
	  (,b (list ,@(mapcar (lambda (x) `(background ,x)) forms))))
     (declare ((integer 0 ,pbm) ,m))
     (unwind-protect
	 (do nil ((= ,m 0))
	     (let ((,p (si::select-read ,b ,timeout)));;FAILURE code here on 0 return
	       (declare ((integer 0 ,pbm) ,p))
	       (do ((,i 0 (1+ ,i))(,j 1 (ash ,j 1)) (,k ,b (cdr ,k))) 
		   ((= ,i ,pbl) (setq ,m (logandc2 ,m ,p)))
		   (declare ((integer 0 ,pbl) ,i) ((integer 1 ,(1+ pbm)) ,j))
		   (when (/= 0 (logand ,j ,p))
		     (let ((,r (si::read-pointer-object (car ,k))))
		       ,@body)))))
       (dolist (,b ,b (cdr ,b)) (si::kill ,b 0))))))
  
(defmacro p-let (bindings &body body) 
  (let* ((i (gensym)) (r (gensym)) (c (gensym))
	 (pb (remove-if 'atom bindings)))
  `(let* (,@(mapcar 'car pb) ,@(remove-if 'consp bindings))
     (with-read-values 
      (,i ,r ,c) (,(mapcar 'cadr pb) -1)
      (case ,i
	    ,@(let ((g -1)) 
		(mapcar (lambda (x) `(,(incf g) (setq ,(car x) ,r))) pb))))
     ,@body)))

(defmacro p-and (&rest forms) 
  (let* ((i (gensym)) (r (gensym)) (c (gensym)) (top (gensym)))
    `(block ,top
       (with-read-values 
	(,i ,r ,c) (,forms -1)
	(unless ,r
	  (dolist (,c ,c) (si::kill ,c 0))
	  (return-from ,top nil)))
       t)))

(defmacro p-or (&rest forms) 
  (let* ((i (gensym)) (r (gensym)) (c (gensym)) (top (gensym)))
    `(block ,top
       (with-read-values 
	(,i ,r ,c) (,forms -1)
	(when ,r
	  (dolist (,c ,c) (si::kill ,c 0))
	  (return-from ,top t)))
       nil)))
