;; -*-Lisp-*-
;;; CMPMAIN  Compiler main program.
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


;;;		**** Caution ****
;;;	This file is machine/OS dependant.
;;;		*****************


(in-package :compiler)


(export '(*compile-print* *compile-verbose* *compile-file-truename* *compile-file-pathname*))

;;; This had been true with Linux 1.2.13 a.out or even older
;;; #+linux   (push :ld-not-accept-data  *features*)
;;; its now a bug preventing the :linux feature.


(defvar *compiler-in-use* nil)
(defvar *compiler-compile* nil)
(defvar *compiler-input*)
(defvar *compiler-output1*)
(defvar *compiler-output2*)
(defvar *compiler-output-data*)
(defvar *compiler-output-i*)

(defvar *error-p* nil)

(defvar *compile-print* nil)
(defvar *compile-verbose* t)
(defvar *cmpinclude* "\"cmpinclude.h\"")
;;If the following is a string, then it is inserted instead of
;; the include file cmpinclude.h, EXCEPT for system-p calls.
(defvar *cmpinclude-string* t)
(defvar *compiler-default-type* #p".lsp")
(defvar *compiler-normal-type* #p".lsp")
(defvar *compile-file-truename* nil)
(defvar *compile-file-pathname* nil)


(defun compiler-default-type (pname) 
  "Set the default file extension (type) for compilable file names."
  (setf *compiler-default-type* (if (pathnamep pname)
				    pname
				  (make-pathname :type (string-left-trim "." pname)))))

(defun compiler-reset-type ()
  "Set the default file extension (type) to <.lsp>."
  (compiler-default-type *compiler-normal-type*))

;; Let the user write dump c-file etc to  /dev/null.
(defun get-output-pathname (file ext name &optional 
				 (dir (pathname-directory *default-pathname-defaults*))
				 (device (pathname-device *default-pathname-defaults*)))
  (cond ((equal file "/dev/null") (pathname file))
	#+aix3
	((and (equal name "float")
	      (equal ext "h"))
	 (get-output-pathname file ext "Float" ))
	((let ((lf (and file (not (eq file t)))))
	   (let ((device (if lf (pathname-device file) device))
		 (dir (if lf (pathname-directory file) dir))
		 (name (if lf (pathname-name file) name)))
	     (make-pathname :device device :directory dir :name name :type ext))))))


(defun safe-system (string)
 (multiple-value-bind
  (code result) (system string)
    (unless (and (zerop code) (zerop result))
      (cerror "Continues anyway."
              "(SYSTEM ~S) returned a non-zero value ~D."
              string
              result)
      (setq *error-p* t))
    (values result)))

;; If this is t we use fasd-data on all but system-p files.   If it
;; is :system-p we use it on all files.   If nil use it on none.
(defvar *fasd-data* t)
(defvar *data* nil)
(defvar *default-system-p* nil)
(defvar *default-c-file* nil)
(defvar *default-h-file* nil)
(defvar *default-data-file* nil)
(defvar *keep-gaz* nil)

;;  (list section-length split-file-names next-section-start-file-position)
;;  Many c compilers cannot handle the large C files resulting from large lisp files.
;;  If *split-files* is a number then, separate compilations for sections
;;  *split-files* long, with the 
;;  will be performed for separate chunks of the lisp files.
;(defvar *split-files* nil)  ;; if 

(defvar *lsp-ext* (make-pathname :type "lsp"))

(defvar *o-ext* (make-pathname  :type "o"))

(defvar *sigs* (make-hash-table :test 'eq))
(defvar *new-sigs-in-file* nil)

(defun set-first-sig (x y)
  (unless (gethash x *sigs*) (setf (gethash x *sigs*) y)))

(defun setup-sigs nil
  (clrhash *sigs*)
  (mapc (lambda (x) (set-first-sig (car x) (cdr x))
	  (mapc (lambda (x) (set-first-sig (car x) (list (cdr x) nil nil nil nil nil))) (caddr x))) si::*sig-discovery-props*))

(defun compile-file  (filename &rest args
			    &aux (*print-pretty* nil)
			    (*package* *package*) (*split-files* *split-files*)
			    (*PRINT-CIRCLE* NIL)
			    (*PRINT-RADIX* NIL)
			    (*PRINT-ARRAY* T)
			    (*PRINT-LEVEL* NIL)
			    (*PRINT-PRETTY* T)
			    (*PRINT-LENGTH* NIL)
			    (*PRINT-GENSYM* T)
			    (*PRINT-CASE* :UPCASE)
			    (*PRINT-BASE* 10)
			    (*PRINT-ESCAPE* T)
			    (section-length *split-files*)
			    tem warnings failures
			    (*compile-file-pathname* (merge-pathnames filename *lsp-ext*))
			    (*compile-file-truename* (truename *compile-file-pathname*)))

  (loop 

   (setup-sigs)
;   (clrhash *sigs*)
;   (purge-member-types)

   (do nil ((not (eq (setq tem (let (*new-sigs-in-file*) (apply 'compile-file1 filename args))) 'again))))

   (cond ((atom *split-files*)(return (values (when tem (truename tem)) warnings failures)))
	 ((and (consp *split-files*) (null (third *split-files*)))
	  (let* ((gaz (gazonk-name))
		 (*readtable* (si::standard-readtable)))
	    (with-open-file 
	     (st gaz :direction :output)
	     (print `(eval-when (load eval)
				(dolist (v ',(nreverse (second *split-files*)))
				  (load (merge-pathnames v si::*load-pathname*))))
		    st))
	    (setq *split-files* nil)
	    (unless (member :output-file args)
		(setq args (append args (list :output-file (merge-pathnames (make-pathname :type "o") (pathname filename))))))
	    (return 
	     (let ((tem (apply 'compile-file gaz args)))
	       (unless *keep-gaz* (delete-file gaz))
	       (values (when tem (truename tem)) warnings failures))))))
   (if (consp *split-files*)
       (setf (car *split-files*) (+ (third *split-files*) section-length)))))

(defvar *init-name*)
(defvar *c-debug* nil)
(defun compile-file1 (input-pathname
                      &key (output-file (merge-pathnames *o-ext* input-pathname))
                           (o-file t)
                           (c-file *default-c-file*)
                           (h-file *default-h-file*)
                           (data-file *default-data-file*)
			   (c-debug nil)
                           #+aosvs (ob-file nil)
                           (system-p *default-system-p*)
			   (print *compile-print*)
			   (verbose *compile-verbose*)
                           (load nil)
                      &aux (*standard-output* *standard-output*)
                           (*error-output* *error-output*)
                           (*compiler-in-use* *compiler-in-use*)
			   (*c-debug* c-debug)
			   (*compile-print* print)
			   (*compile-verbose* verbose)
                           (*package* *package*)
			   (*DEFAULT-PATHNAME-DEFAULTS* #"")
			   (*data* (list (make-array 50 :fill-pointer 0 :adjustable t) nil nil nil))
			   (*fasd-data* *fasd-data*)
                           (*error-count* 0))
;  (declare (special *c-debug* system-p))

  (when input-pathname
    (setq input-pathname (si:search-local-pathname input-pathname)))
  (when output-file
    (setq output-file (si:search-local-pathname output-file)))
  
  (cond (*compiler-in-use*
         (format t "~&The compiler was called recursively.~%~
Cannot compile ~a.~%" (namestring (merge-pathnames input-pathname *compiler-default-type*)))
         (setq *error-p* t)
         (return-from compile-file1 (values)))
        (t (setq *error-p* nil)
           (setq *compiler-in-use* t)))  
  
  (unless (probe-file (merge-pathnames input-pathname *compiler-default-type*))
    (format t "~&The source file ~a is not found.~%" (namestring (merge-pathnames input-pathname *compiler-default-type*)))
    (setq *error-p* t)
    (return-from compile-file1 (values)))
  
  (when *compile-verbose*
    (format t "~&;; Compiling ~a.~%" (namestring (merge-pathnames input-pathname *compiler-default-type*))))
  
  (and *record-call-info* (clear-call-table))
  
  (with-open-file
   (*compiler-input* (merge-pathnames input-pathname *compiler-default-type*))
   
   (when (numberp *split-files*)
     (setq *split-files* (unless (< (file-length *compiler-input*) *split-files*) (list *split-files* nil 0 nil))))
   
   (when (consp *split-files*)
     (file-position *compiler-input* (third *split-files*))
     (setq output-file
	   (make-pathname :device (pathname-device output-file)
			  :directory (pathname-directory output-file)
			  :name (format nil "~a~a"
					(pathname-name (pathname output-file))
					(length (second *split-files*)))
			  :type "o")))
   
   (let* ((eof (cons nil nil))
	  (dir    (or (unless (null output-file) (pathname-directory output-file)) (pathname-directory input-pathname)))
	  (name   (or (unless (null output-file) (pathname-name output-file)) (pathname-name input-pathname)))
	  (tp     (or (unless (null output-file) (pathname-type output-file)) "o"))
	  (device (or (unless (null output-file) (pathname-device output-file)) (pathname-device input-pathname)))
	  (o-pathname (get-output-pathname o-file tp name dir device))
	  (c-pathname (get-output-pathname c-file "c" name dir device))
	  (h-pathname (get-output-pathname h-file "h" name dir device))
	  (data-pathname (get-output-pathname data-file "data" name dir device))
	  #+aosvs (ob-pathname (get-output-pathname ob-file "ob" name dir device)))
     (declare (special dir name ));FIXME
     
     (init-env)
     
     (and (boundp 'si::*gcl-version*)
	  (not system-p)
	  (add-init `(si::warn-version ,si::*gcl-major-version*
				       ,si::*gcl-minor-version*
				       ,si::*gcl-extra-version*)))
     
     (when (probe-file "./gcl_cmpinit.lsp")
       (load  "./gcl_cmpinit.lsp" :verbose *compile-verbose*))
     
     (with-open-file 
      (*compiler-output-data* data-pathname :direction :output)
      
      (setq *fasd-data*      		      
	    (when (if system-p (eq *fasd-data* :system-p) *fasd-data*)
	      (list (si::open-fasd *compiler-output-data* :output nil nil))))
      
      (wt-data-begin)
      
      (if *compiler-compile*
	  (t1expr *compiler-compile*)
	(let* ((rtb *readtable*)
	       (prev (when (eq (get-macro-character #\# rtb)
			       (get-macro-character #\# (si:standard-readtable)))
		       (get-dispatch-macro-character #\# #\, rtb))))
	  
	  (when (and prev (eq prev (get-dispatch-macro-character #\# #\, (si:standard-readtable))))
	    (set-dispatch-macro-character #\# #\, 'si:sharp-comma-reader-for-compiler rtb)
	    (setq prev nil))
	  
	  ;; t1expr the package ops again..
	  (when (consp *split-files*) (dolist (v (fourth *split-files*)) (t1expr v)))
	  
	  (unwind-protect
	      (do ((form (read *compiler-input* nil eof) (read *compiler-input* nil eof))
		   (load-flag (or (eq :defaults *eval-when-defaults*)
				  (list-split '(load :load-toplevel) *eval-when-defaults*))))
		  (nil)
		  
		  (unless (eq form eof)
		    (if load-flag
			(t1expr form)
		      (maybe-eval nil form)))
		  
		  (when (or (eq form eof) (and *split-files* (> (file-position *compiler-input*) (car *split-files*))))
		    
		    (when *new-sigs-in-file*
		      (keyed-cmpnote 
		       (list 'signatures (car *new-sigs-in-file*))
		       "Caller ~s appears after callee ~s,~%   whose sig changed from ~s to ~s, restart pass1~%"
		       (car *new-sigs-in-file*) (cadr *new-sigs-in-file*) (caddr *new-sigs-in-file*)
		       (cadddr *new-sigs-in-file*))
		      (return-from compile-file1 'again))
		    
		    (when *split-files*
		      (push (pathname-name output-file) (second *split-files*))
		      (setf (third *split-files*) (unless (eq form eof) (file-position *compiler-input*)))
		      (setf (fourth *split-files*) (reverse (third *data*))))
		    
		    (return nil)))
	    
	    (when prev (set-dispatch-macro-character #\# #\, prev rtb)))))
      
      (when *sig-discovery* (return-from compile-file1 (values)))

      (with-open-file (s output-file :if-does-not-exist :create))
      (setq *init-name* (init-name output-file system-p))
      
      (when (zerop *error-count*)
	(when *compile-verbose* (format t "~&;; End of Pass 1.  ~%"))
	(compiler-pass2 c-pathname h-pathname system-p ))
      
      
      (wt-data-end)) ;;; *compiler-output-data* closed.
     
     (init-env)
     
     (if (zerop *error-count*)
	 
	 #+aosvs
       (progn
	 (when *compile-verbose* (format t "~&;; End of Pass 2.  ~%"))
	 (when data-file
	   (with-open-file (in fasl-pathname)
			   (with-open-file (out data-pathname :direction :output)
					   (si:copy-stream in out))))
	 (cond ((or fasl-file ob-file)
		(compiler-cc c-pathname ob-pathname)
		(cond ((probe-file ob-pathname)
		       (when fasl-file
			 (compiler-build ob-pathname fasl-pathname)
			 (when load (load fasl-pathname)))
		       (unless (or *keep-gaz* ob-file) (delete-file ob-pathname))
		       (when *compile-verbose*
			 (print-compiler-info)
			 (format t "~&;; Finished compiling ~a.~%" (namestring output-file))
			 ))
		      (t (format t "~&Your C compiler failed to compile the intermediate file.~%")
			 (setq *error-p* t))))
	       (*compile-verbose*
		(print-compiler-info)
		(format t "~&;; Finished compiling ~a.~%" (namestring output-file)
			)))
	 (unless c-file (delete-file c-pathname))
	 (unless h-file (delete-file h-pathname))
	 (unless fasl-file (delete-file fasl-pathname)))
       
       
       (progn
	 (when *compile-verbose* (format t "~&;; End of Pass 2.  ~%"))
	 (cond (*record-call-info*
		(dump-fn-data (get-output-pathname output-file "fn" name dir device))))
	 (cond (o-file
		(compiler-cc c-pathname o-pathname  )
		(cond ((probe-file o-pathname)
		       (compiler-build o-pathname data-pathname)
		       (when load (load o-pathname))
                       (when *compile-verbose*
			 (print-compiler-info)
			 (format t "~&;; Finished compiling ~a.~%" (namestring output-file))))
		      (t 
		       (format t "~&Your C compiler failed to compile the intermediate file.~%")
		       (setq *error-p* t))))
	       (*compile-verbose*
		(print-compiler-info)
		(format t "~&;; Finished compiling ~a.~%" (namestring output-file)
			)))
	 (unless c-file (delete-file c-pathname))
	 (unless h-file (delete-file h-pathname))
	 (unless (or data-file #+ld-not-accept-data t system-p) (delete-file data-pathname))
	 (when o-file o-pathname))
       
       (progn
	 (when (probe-file c-pathname) (delete-file c-pathname))
	 (when (probe-file h-pathname) (delete-file h-pathname))
	 (when (probe-file data-pathname) (delete-file data-pathname))
	 (format t "~&No FASL generated.~%")
	 (setq *error-p* t)
	 (values))))))

(defun gazonk-name ()
  (dotimes (i 1000)
    (let ((tem (merge-pathnames 
		(format nil "~agazonk_~d_~d.lsp" (if (boundp '*tmp-dir*) *tmp-dir* "") (abs (si::getpid)) i))))
      (unless (probe-file tem)
	(return-from gazonk-name (pathname tem)))))
  (error "1000 gazonk names used already!"))

(defun prin1-cmp (form strm)
  (let ((*compiler-output-data* strm)
	(*fasd-data* nil))
    (wt-data1 form)  ;; this binds all the print stuff
    ))

(defun fun-env (name)
  (let ((fun (when (fboundp name) (or (macro-function name) (symbol-function name)))))
    (multiple-value-bind
	    (src clo blk)
	    (function-lambda-expression fun)
	    (declare (ignore src blk))
	    (mapcar 'cadr clo))))

    ;; (cond ((si::interpreted-function-p fun) 
    ;; 	   (multiple-value-bind
    ;; 	    (src clo blk)
    ;; 	    (function-lambda-expression fun)
    ;; 	    (declare (ignore src blk))
    ;; 	    (mapcar 'cadr clo)))
    ;; 	  ((compiled-function-p fun) (c::function-env fun 0)))))


(defun get-named-form (name)
  (when (fboundp name) 
    (let* ((mac (macro-function name))
	   (na (if (symbol-package name) name 'cmp-anon))
	   (fun (or mac (symbol-function name))))
      (multiple-value-bind
       (lam clo) 
       (function-lambda-expression fun)
       (let ((form `(,(if mac 'defmacro 'defun) ,(if mac (cons 'macro na) na) ,(cadr lam) ,@(cddr lam))))
;       (let ((form `(,(if mac 'defmacro 'defun) ,na ,(cadr lam) ,@(cddr lam))))
	 (values (if clo 
		     (let ((f (tmpsym))(v (tmpsym))(o (tmpsym)))
		       `(let* (,@(mapcar (lambda (x) (list (car x) `(tmpsym))) (reverse clo))
			       (,o (fun-env ',name));FIXME share structure
			       (,v ,form)
			       (,f (c-symbol-gfdef ,v)))
			  (si::set-function-environment ,f ,o)
			  ,v)) form) na))))))

(defun compile (name &optional def &aux na tem gaz (*default-pathname-defaults* #"."))
  
  (when (eq name 'cmp-anon)
;    (remhash name si::*call-hash-table*)
    (dolist (l '(proclaimed-function proclaimed-arg-types proclaimed-return-type))
      (remprop name l)))

  (cond ((not (symbolp name)) (error "Must be a name"))
	((and (consp def) (eq (car def) 'lambda));(or (si::interpreted-function-p def) );FIXME
	 (compile nil (coerce def 'function)))
	((functionp def)
	 (or name (setf name 'cmp-anon))
	 (setf (symbol-function name) def)
	 (compile name))
	(def (error "def not a lambda expression"))
	 ;; FIXME -- support warnings-p and failures-p.  CM 20041119
	((multiple-value-setq (tem na) (get-named-form name))
	 (let (warnings failures)
	   (unless (and (fboundp 'si::init-cmp-anon) (or (si::init-cmp-anon) (fmakunbound 'si::init-cmp-anon)))
	     (with-open-file
	      (st (setq gaz (gazonk-name)) :direction :output))
	     (multiple-value-bind 
	      (fn w f)
	      (let ((*compiler-compile* tem))
		(compile-file gaz))
	      (when fn 
		(load fn)
		(unless *keep-gaz* (delete-file fn)))
	      (setq warnings w failures f))
	     (unless *keep-gaz* (delete-file gaz)))
	   (unless (eq na name) (setf (symbol-function name) (symbol-function na)))
	   (when *tmp-pack*
	     (delete-package *tmp-pack*)
	     (setq *tmp-pack* nil))
	   (values (symbol-function name) warnings failures)))
	(t (error "can't compile ~a" name))))


(defvar *codes* '((lambda (x) (code-char x))
		  (lambda (x) (char-code x))
		  (lambda (x y) (+ x y))
		  (lambda (x y) (declare (seqind x y)) (+ x y))
		  (lambda (x y) (- x y))
		  (lambda (x y) (declare (seqind x y)) (- x y))
		  (lambda (x) (- x))
		  (lambda (x) (declare (seqind x)) (- x))
		  (lambda (x y) (member x y))
		  (lambda (x y) (declare (symbol x)) (member x y))
		  (lambda (f x) (mapl f x))
		  (lambda (x) (mapc (lambda (x) (1+ x)) x))
		  (lambda (x) (coerce x 'function))
		  (lambda (x) (declare (function x)) (coerce x 'function))
		  (lambda (x) (declare (symbol x)) (coerce x 'function))
		  (lambda (x y) (eq x y))
		  (lambda (x y) (eql x y))
		  (lambda (x y) (declare (symbol x)) (eql x y))
		  (lambda (x y) (declare (fixnum x)) (eql x y))
		  (lambda (x y) (declare (symbol x) (fixnum x)) (eql x y))))


(defun code-size (f)
  (let* ((x (with-output-to-string 
	     (s)
	     (let ((*standard-output* s))
	       (disassemble f))))
	 (b (string-match #v"\n[0-9a-f]* <[^>\n]*>:" x))
	 (e (string-match #v"\n[0-9a-f]* <[^>\n]*>:" x (match-end 0)))
	 (x (subseq x b e))(i 0)(zb 0)(ze 0))
    (do nil ((>= 0 (string-match #v"\n *\([0-9a-f]*\):" x i))) (setq zb (match-beginning 1) ze (match-end 1) i (match-end 0)))
    (let ((*read-base* 16)) (read-from-string (subseq x zb ze)))))

(defun vec-to-list (x)
  (typecase
   x
   (string (if (find-if-not 'standard-char-p x) "fasl code" x))
   (vector (vec-to-list (coerce x 'list)))
   (cons (let ((a (vec-to-list (car x)))(d (vec-to-list (cdr x))))
	   (if (and (eq a (car x)) (eq d (cdr x))) x (cons a d))))
   (otherwise x)))

(defun disassemble (name &optional (asm t) file &aux tem)
  (check-type name (or function function-identifier))
  (cond ((and (consp name)
	      (eq (car name) 'lambda))
	 (dolist (l '(proclaimed-function proclaimed-return-type proclaimed-arg-types))
	   (remprop 'cmp-anon l))
;	 (remhash 'cmp-anon si::*call-hash-table*)
	 (eval `(defun cmp-anon ,@ (cdr name)))
	 (disassemble 'cmp-anon asm file))
	((not(symbolp name)) (princ "Not a lambda or a name") nil)
	((setq tem (get-named-form name))
	 (let ((gaz (gazonk-name))(*compiler-compile* (unless file tem)))
	   (with-open-file
	     (st gaz :direction :output)
	     (prin1-cmp tem st))
	   (let (*fasd-data*)
	     (compile-file gaz 
			   :h-file t 
			   :c-file t
			   :data-file t
			   :o-file t))
	   (let ((cn (get-output-pathname gaz "c" gaz ))
		 (dn (get-output-pathname gaz "data" gaz ))
		 (hn (get-output-pathname gaz "h" gaz ))
		 (on (get-output-pathname gaz "o" gaz )))
	     (with-open-file (st cn)
			     (do () ((let ((a (read-line st)))
				       (when (>= (si::string-match 
						  #v"gazonk_[0-9]*_[0-9]*.h" a) 0)
					 (format t "~%~d~%" a)
					 a))))
			     (si::copy-stream st *standard-output*))
	     (with-open-file (st dn)
			     (princ
			      (let (f) (do nil ((eq 'eof (car (push (read st nil 'eof) f))) 
						(vec-to-list (nreverse (cdr f))))))))
;			     (si::copy-stream st *standard-output*))
	     (with-open-file (st hn)
			     (si::copy-stream st *standard-output*))
	     (when asm (si::copy-stream (open (concatenate 'string "|objdump --source " (namestring on)))
					*standard-output*))
	     (delete-file cn)
	     (delete-file dn)
	     (delete-file hn)
	     (delete-file on)
	     (unless *keep-gaz* (delete-file gaz))
	     nil)))
	((princ name) nil))) ;(error "can't disassemble ~a" name)


(defun compiler-pass2 (c-pathname h-pathname system-p
				  &aux 
				  (ci *cmpinclude*)
				  (ci (when (stringp ci) (subseq ci 1 (1- (length ci)))))
				  (ci (concatenate 'string si::*system-directory* "../h/" ci))
				  (system-p (when (or (eq system-p 'disassemble) (probe-file ci)) system-p)))
  (declare (special *init-name*))
  (with-open-file (st c-pathname :direction :output)
    (let ((*compiler-output1* (if (eq system-p 'disassemble) *standard-output* st)))
      (declare (special *compiler-output1*))
    (with-open-file 
     (*compiler-output2* h-pathname :direction :output)
      (cond ((and 
	      (stringp *cmpinclude-string*)
	      (not system-p)
	      (si::fwrite *cmpinclude-string* 0
			  (length *cmpinclude-string*) *compiler-output1*)))
	    (t (wt-nl1 "#include " *cmpinclude*)))
      (wt-nl1 "#include \""
	      (namestring
	        (make-pathname :name
	          (pathname-name h-pathname)
	           :type (pathname-type h-pathname)))

              #+aosvs (string-downcase (namestring h-pathname))
              "\"")

      (catch *cmperr-tag* (ctop-write *init-name*))
      (when system-p
	(wt-nl "")
	(wt-nl "#ifdef SYSTEM_SPECIAL_INIT")
	(wt-nl "SYSTEM_SPECIAL_INIT")
	(wt-nl "#endif"))

      (terpri *compiler-output1*)
      ;; write ctl-z at end to make sure preprocessor stops!
      #+dos (write-char (code-char 26) *compiler-output1*)
      (terpri *compiler-output2*)))))


(defvar *cc* "cc")
(defvar *ld* "ld")
(defvar *ld-libs* "ld-libs")
(defvar *opt-three* "")
(defvar *opt-two* "")
(defvar *init-lsp* "init-lsp")

(defvar *use-buggy* nil)

(defun  compiler-command (&rest args )
  (declare (special *c-debug*))

  #+(or dos winnt)
  (format nil "~a -I~a ~a ~a -c -w ~s -o ~s"
	  *cc*
	  (concatenate 'string si::*system-directory* "../h")
	  (if (and (boundp '*c-debug*) *c-debug*) " -g " "")
	  (case *speed*
		(3 *opt-three* )
		(2 *opt-two*) 
		(t ""))	
	  (namestring (make-pathname  :type "c" :defaults (first args)))
	  (namestring (make-pathname  :type "o" :defaults (first args)))
	  )
  
  #-(or dos winnt)
  (format nil  "~a -I~a ~a ~a -c ~a -o ~a ~a"
	  *cc*
	  (concatenate 'string si::*system-directory* "../h")
	  (if (and (boundp '*c-debug*) *c-debug*) " -g " "")
	  (case *speed*
		(3 *opt-three* )
		(2 *opt-two*) 
		(t ""))	
	  (namestring (first args))
	  (namestring (second args))
	  (prog1
	      #+aix3
	    (format nil " -w ;ar x /lib/libc.a fsavres.o  ; ar qc XXXfsave fsavres.o ; echo init_~a > XXexp ; mv  ~a  XXX~a ; ld -r -D-1 -bexport:XXexp -bgc XXX~a -o ~a XXXfsave ; rm -f XXX~a XXexp XXXfsave fsavres.o"
		    *init-name*
		    (setq na (namestring (get-output-pathname na "o" nil)))
		    na na na na na)
	    #+(or dlopen irix5)
	     (if (not system-p)
		 (format nil
			 " -w ; mv ~a XX~a ; ld  ~a -shared XX~a  -o ~a -lc ; rm -f XX~a"  
			 (setq na (namestring (get-output-pathname na "o" nil)))			    na
			 #+ignore-unresolved "-ignore_unresolved"
			 #+expect-unresolved "-expect_unresolved '*'"
			 na na na))	
	     
	     #+bsd ""	;	     #+bsd "-w"
	     #-(or aix3 bsd irix3) " 2> /dev/null ")))


; Windows short form paths may contain tilde (~) which conflicts with
; format directives.
#+winnt (defun prep-win-path-acc ( s acc)
  (let ((pos (search "\~" s)))
    (if pos
      (let ((start (subseq s 0 (1+ pos)))
            (finish (subseq s (1+ pos))))
        (prep-win-path-acc finish (concatenate 'string acc start "~")))
      (concatenate 'string acc s))))
#+winnt (defun prep-win-path ( s ) (prep-win-path-acc s ""))        

(defun compiler-cc (c-pathname o-pathname  )
  (safe-system
   (or 
;    #+winnt (prep-win-path (compiler-command c-pathname o-pathname))
    #+(or vax system-v e15 dgux sgi) 
    (format
     nil
     (prog1
	 #+vax "~a ~@[~*-O ~]-S -I. -w ~a ; as -J -W -o ~A ~A"
	 #-vax "~a ~@[~*-O ~]-c -I. ~a 2> /dev/null"
	 )
     *cc*
     (if (or (= *speed* 2) (= *speed* 3)) t nil)
     (namestring c-pathname)
     (namestring o-pathname))
    (compiler-command c-pathname o-pathname)))
  
  #+dont_need
  (let ((cname (pathname-name c-pathname))
        (odir (pathname-directory o-pathname))
        (oname (pathname-name o-pathname)))
    (unless (and (equalp (truename "./")
                         (truename (make-pathname :directory odir)))
                 (equal cname oname))
	(rename-file (make-pathname :name cname :type "o")
        	                  o-pathname)
)))


(defun compiler-build (o-pathname data-pathname)
  #+(and system-v (not e15))
  (safe-system (format nil "echo \"\\000\\000\\000\\000\" >> ~A"
                       (namestring o-pathname)))
    #+(or hp-ux sun sgi)
    (with-open-file (o-file
		    (namestring o-pathname)
		    :direction :output
		    :if-exists :append)
      ; we could do a safe-system, but forking is slow on the Iris
    #+(or hp-ux (and sgi (not irix5)))
    (dotimes (i 12)
      (write-char #\^@ o-file))
    #+sun  ; we could do a safe-system, but forking is slow on the Iris
    (dolist (v '(0 0 4 16 0 0 0 0))
	      (write-byte v o-file))

    )
  #-ld-not-accept-data  
  (when (probe-file o-pathname)
     (nconc-files o-pathname data-pathname)
    #+never
    (safe-system (format nil
			 "cat ~a  >> ~A"
			 (namestring data-pathname)
			 (namestring o-pathname)))))

(defun print-compiler-info ()
  (format t "~&;; OPTIMIZE levels: Safety=~d~:[ (No runtime error checking)~;~], Space=~d, Speed=~d, (Debug quality ignored)~%"
          (cond ((null *compiler-check-args*) 0)
                ((null *safe-compile*) 1)
                ((null *compiler-new-safety*) 2)
                ((null *compiler-push-events*) 3)
                (t 4))
          *safe-compile* *space* *speed* *debug*))

(defun nconc-files (a b)
  (let* ((n 256)
	 (tem (make-string n))
	 (m 0))
    (with-open-file (st-a a :direction :output :if-exists :append)
      (with-open-file (st-b b )
	(sloop::sloop
	   do (setq m (si::fread tem 0 n st-b))
	   while (and m (> m 0))
	   do (si::fwrite tem 0 m st-a))))))

#+dos
(progn
(defun directory (x &aux ans)
  (let* ((pa (pathname x))
	 (temp "XXDIR")
	 tem
	 (name (pathname-name pa)))
    (setq pa (make-pathname :directory (pathname-directory pa)
			    :name (or (pathname-name pa) :wild)
			    :type (pathname-type pa)))
    (setq name (namestring pa))
    (system (format nil "ls -d ~a > ~a" name temp))
    (with-open-file (st temp)
	    (loop (setq tem (read-line st nil nil))
		  (if (and tem (setq tem (probe-file tem)))
		      (push tem ans) (return))))
    ans))

(defvar *old-compile-file* #'compile-file) 
(defun compile-file (f &rest l)
  (let* ((p (pathname f)) dir pwd)
    (setq dir (pathname-directory p))
    (when dir
	  (setq dir (namestring (make-pathname :directory dir
					       :name ".")))
	  (setq pwd (namestring (truename ".")))
	  )
    (unwind-protect
	(progn (if dir (si::chdir dir))
	       (apply *old-compile-file* f l))
      (if pwd (si::chdir pwd)))))

(defun user-homedir-pathname ()
  (or (si::getenv "HOME") "/"))

)

;
;  These functions are added to build custom images requiring
;  the loading of binary objects on systems relocating with dlopen.
;

(defun make-user-init (files outn)

  (let* ((c (pathname outn))
	 (c (merge-pathnames c (make-pathname :directory '(:current))))
	 (o (merge-pathnames (make-pathname :type "o") c))
	 (c (merge-pathnames (make-pathname :type "c") c)))
  
  (with-open-file (st c :direction :output)
		  (format st "#include ~a~%~%" *cmpinclude*)

		  (format st "#define load2(a) do {")
		  (format st "printf(\"Loading %s...\\n\",(a));")
		  (format st "load(a);")
		  (format st "printf(\"Finished %s...\\n\",(a));} while(0)~%~%")

		  (let ((p nil))
		    (dolist (tem files)
		      (when (equal (pathname-type tem) "o")
			(let ((tem (namestring tem)))
			  (push (list (si::find-init-name tem) tem) p))))

		    (setq p (nreverse p))

		    (dolist (tem p)
		      (format st "extern void ~a(void);~%" (car tem)))
		    (format st "~%")

		    (format st "typedef struct {void (*fn)(void);char *s;} Fnlst;~%")
		    (format st "#define NF ~a~%" (length p))
		    (format st "static Fnlst my_fnlst[NF]={")
		    (dolist (tem p)
		      (when (not (eq tem (car p)))
			(format st ",~%"))
		      (format st "{~a,\"~a\"}" (car tem) (cadr tem)))
		    (format st "};~%~%")
		    
		    (format st "static int user_init_run;~%")
		    (format st "#define my_load(a_,b_) {if (!user_init_run && (a_) && (b_)) gcl_init_or_load1((a_),(b_));(a_)=0;(b_)=0;}~%~%")
                    
		    (format st "object user_init(void) {~%")
		    (format st "user_init_run=1;~%")
		    (dolist (tem files)
		      (let ((tem (namestring tem)))
			    (cond ((equal (cadr (car p)) tem)
				   (format st "gcl_init_or_load1(~a,\"~a\");~%"
					   (car (car p)) tem)
				   (setq p (cdr p)))
				  (t 
				   (format st "load2(\"~a\");~%" tem)))))
		    (format st "return Cnil;}~%~%")

		    (format st "int user_match(const char *s,int n) {~%")
		    (format st "  Fnlst *f;~%")
		    (format st "  for (f=my_fnlst;f<my_fnlst+NF;f++){~%")
		    (format st "     if (f->s && !strncmp(s,f->s,n)) {~%")
		    (format st "        my_load(f->fn,f->s);~%")
		    (format st "        return 1;~%")
		    (format st "     }~%")
		    (format st "  }~%")
		    (format st "  return 0;~%")
		    (format st "}~%~%")))
		    
  (compiler-cc c o)
  (delete-file c)

  o))

(defun mysub (str it new)
  (declare (string str it new));FIXME
  (let ((x (search it str)))
    (cond ((not x) str)
	  ((si::string-concatenate (subseq str 0 x) new (mysub (subseq str (+ x (length it))) it new))))))
 
(defun link (files image &optional post extra-libs (run-user-init t))
  (let* ((ui (make-user-init files "user-init"))
	 (raw (pathname image))
	 (init (merge-pathnames (make-pathname
				 :name (concatenate 'string "init_" (pathname-name raw))
				 :type "lsp") raw))
	 #-winnt (raw (merge-pathnames raw (make-pathname :directory (list :current))))
	 (raw (merge-pathnames (make-pathname
				:name (concatenate 'string "raw_" (pathname-name raw)))
			       raw))
	 (map (merge-pathnames (make-pathname
				:name (concatenate 'string (pathname-name raw) "_map")) raw))
	 #+winnt (raw (merge-pathnames (make-pathname :type "exe") raw)))

    (with-open-file (st (namestring map) :direction :output))
    (when (= 0 (system
		(format nil "~a ~a ~a ~a -L~a ~a ~a ~a"
			*ld* 
			(namestring raw)
			(namestring ui)
			(let ((sfiles ""))
			  (dolist (tem files)
			    (if (equal (pathname-type tem) "o")
				(setq sfiles (concatenate 'string sfiles " " (namestring tem)))))
			  sfiles) 
			si::*system-directory*
			#+gnu-ld (format nil "-Wl,-Map ~a" (namestring map)) #-gnu-ld ""
			(let* ((par (namestring (make-pathname :directory '(:parent))))
			       (i (concatenate 'string " " par))
			       (j (concatenate 'string " " si::*system-directory* par)))
			  (mysub *ld-libs* i j))
			(if (stringp extra-libs) extra-libs ""))))
      (delete-file ui)
      (with-open-file (st init :direction :output)
		      (unless run-user-init
			(format st "(fmakunbound 'si::user-init)~%"))
		      (format st "(setq si::*no-init* '(")
		      (dolist (tem files)
			(format st " \"~a\"" (pathname-name tem)))
		      (format st "))~%")
		      (with-open-file (st1 
				       (format nil "~a~a" si::*system-directory* *init-lsp*))
				      (si::copy-stream st1 st))
		      (if (stringp post) (format st "~a~%" post))
		      (format st "(setq si::*optimize-maximum-pages* ~s si::*disable-recompile* ~s)(si::use-fast-links t)" si::*optimize-maximum-pages* si::*disable-recompile*)
		      (format st "(si::save-system \"~a\")~%" (namestring image)))
      (when (= 0 (system (format nil "~a ~a < ~a" 
				 (namestring raw)
				 si::*system-directory*
				 (namestring init))))
	(delete-file raw)
	(delete-file init)
	image))))

(defun cdebug (&optional a) 
  (setq *default-system-p* t *default-c-file* t *default-data-file* t *default-h-file* t *keep-gaz* a *annotate* a))

