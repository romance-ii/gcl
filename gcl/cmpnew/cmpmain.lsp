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


(in-package 'compiler)


(export '(*compile-print* *compile-verbose*))

#+linux   (push :ld-not-accept-data  *features*)
(defvar *compiler-in-use* nil)
(defvar *compiler-input*)
(defvar *compiler-output1*)
(defvar *compiler-output2*)
(defvar *compiler-output-data*)
(defvar *compiler-output-i*)

(defvar *error-p* nil)

(defvar *compile-print* nil)
(defvar *compile-verbose* t)
(defvar *cmpinclude* "<cmpinclude.h>")
;;If the following is a string, then it is inserted instead of
;; the include file cmpinclude.h, EXCEPT for system-p calls.
(defvar *cmpinclude-string* t)


;; Let the user write dump c-file etc to  /dev/null.
(defun get-output-pathname (file ext name &optional (dir (pathname-directory *default-pathname-defaults*)))
  (cond #+unix
	((equal file "/dev/null") (pathname file))
	#+aix3
	((and (equal name "float")
	      (equal ext "h"))
	 (get-output-pathname file ext "Float" ))
	(t
	  (make-pathname :directory (or (and (not (null file))
					     (not (eq file t))
					     (pathname-directory file))
					dir)
			 :name (or (and (not (null file))
					(not (eq file t))
					(pathname-name file))
				   name)
			 :type ext))))

#+unix
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

;;  (list section-length split-file-names next-section-start-file-position)
;;  Many c compilers cannot handle the large C files resulting from large lisp files.
;;  If *split-files* is a number then, separate compilations for sections
;;  *split-files* long, with the 
;;  will be performed for separate chunks of the lisp files.
(defvar *split-files* nil)  ;; if 

(defun check-end (form eof)
  (cond  ((eq form eof)
	  (setf (third *split-files*) nil))
	 ((> (file-position *compiler-input*)
	     (car *split-files*))
	  (setf (third *split-files*)(file-position *compiler-input*)))))
	  

(defun compile-file  (&rest args
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
			    tem)
  (loop 
   (compiler::init-env)
   (setq tem (apply 'compiler::compile-file1 args))
   (cond ((atom *split-files*)(return tem))
	 ((and (consp *split-files*)
	       (null (third *split-files*)))
	  (let ((gaz (let ((*DEFAULT-PATHNAME-DEFAULTS* (car args)))
			    			    (gazonk-name)))
		(*readtable* (si::standard-readtable)))
	    (setq gaz (get-output-pathname gaz "lsp" (car args)))
	    (with-open-file (st gaz :direction :output)
	      (print
	       `(eval-when (load eval)
			   (dolist (v ',(nreverse (second *split-files*)))
				   (load (merge-pathnames v si::*load-pathname*))))
	       st))
	    (setq *split-files* nil)
	    (or (member :output-file args)
		(setq args (append args (list :output-file (car args)))))
	    (return 
	     (prog1 (apply 'compile-file gaz (cdr args))
	       (delete-file gaz)))
	    ))
	 (t nil))
   (if (consp *split-files*)
       (setf (car *split-files*) (+ (third *split-files*) section-length)))
   ))


(defun compile-file1 (input-pathname
                      &key (output-file input-pathname)
                           #+aosvs (fasl-file t)
                           #+unix (o-file t)
                           (c-file nil)
                           (h-file nil)
                           (data-file nil)
			   (c-debug nil)
                           #+aosvs (ob-file nil)
                           (system-p nil)
			   (print nil)
                           (load nil)
                      &aux (*standard-output* *standard-output*)
                           (*error-output* *error-output*)
                           (*compiler-in-use* *compiler-in-use*)
			   (*c-debug* c-debug)
			   (*compile-print* (or print *compile-print*))
                           (*package* *package*)
			   (*DEFAULT-PATHNAME-DEFAULTS* #"")
			   (*data* (list (make-array 50 :fill-pointer 0
						     :adjustable t
						     )
					 nil ;inits
					 nil
					 ))
			   *init-name* 	
			   (*fasd-data* *fasd-data*)
                           (*error-count* 0))
  (declare (special *c-debug* *init-name* system-p))

  (cond (*compiler-in-use*
         (format t "~&The compiler was called recursively.~%~
Cannot compile ~a.~%"
                 (namestring (merge-pathnames input-pathname #".lsp")))
         (setq *error-p* t)
         (return-from compile-file1 (values)))
        (t (setq *error-p* nil)
           (setq *compiler-in-use* t)))  

  (unless (probe-file (merge-pathnames input-pathname #".lsp"))
    (format t "~&The source file ~a is not found.~%"
            (namestring (merge-pathnames input-pathname #".lsp")))
    (setq *error-p* t)
    (return-from compile-file1 (values)))

  (when *compile-verbose*
    (format t "~&Compiling ~a.~%"
            (namestring (merge-pathnames input-pathname #".lsp"))))

  (and *record-call-info* (clear-call-table))

  (with-open-file
          (*compiler-input* (merge-pathnames input-pathname #".lsp"))


    (cond ((numberp *split-files*)
	   (if (< (file-length *compiler-input*) *split-files*)
	       (setq *split-files* nil)
	     ;;*split-files* = ( section-length split-file-names next-section-start-file-position
	     ;;                           package-ops)
	     (setq *split-files* (list *split-files* nil 0 nil)))))

    (cond ((consp *split-files*)
	   (file-position *compiler-input* (third *split-files*))
	   (setq output-file
		 (make-pathname :directory (pathname-directory output-file)
				:name (format nil "~a~a"
					      (length (second *split-files*))
					      (pathname-name (pathname output-file)))
				:type "o"))
	   
	   (push (pathname-name output-file)   (second *split-files*))
	   ))
	   
    
	 
    
  (let* ((eof (cons nil nil))
         (dir (or (and (not (null output-file))
                       (pathname-directory output-file))
                  (pathname-directory input-pathname)))
         (name (or (and (not (null output-file))
                        (pathname-name output-file))
                   (pathname-name input-pathname)))
         #+aosvs (fasl-pathname (get-output-pathname fasl-file "fasl" name dir))
         #+unix (o-pathname (get-output-pathname o-file "o" name dir))
         (c-pathname (get-output-pathname c-file "c" name dir))
         (h-pathname (get-output-pathname h-file "h" name dir))
         (data-pathname (get-output-pathname data-file "data" name dir))
	 (i-pathname  (get-output-pathname data-file "i" name dir))
         #+aosvs (ob-pathname (get-output-pathname ob-file "ob" name dir))
         )
    (declare (special dir name ))

    (init-env)

    (and (boundp 'si::*gcl-version*)
	 (not system-p)
	 (add-init `(si::warn-version ,si::*gcl-version* ,si::*gcl-major-version*)))

    (when (probe-file #+unix "./cmpinit.lsp" #+aosvs "=cmpinit.lsp")
      (load #+unix "./cmpinit.lsp" #+aosvs "=cmpinit.lsp"
            :verbose *compile-verbose*))

    (with-open-file (*compiler-output-data*
                     #+unix data-pathname #+aosvs fasl-pathname
                     :direction :output)
    (progn 
      (setq *fasd-data*      		      
	    (cond  ((if system-p (eq *fasd-data* :system-p)
		      *fasd-data*)
		    (list
		     (si::open-fasd *compiler-output-data* :output nil nil)
		     ;(si::open-fasd *compiler-output-i* :output nil nil)
		     ))))

      (wt-data-begin)

      (let* ((rtb *readtable*)
               (prev (and (eq (get-macro-character #\# rtb)
                              (get-macro-character
                                #\# (si:standard-readtable)))
                          (get-dispatch-macro-character #\# #\, rtb))))
          (if (and prev (eq prev (get-dispatch-macro-character
                                   #\# #\, (si:standard-readtable))))
              (set-dispatch-macro-character #\# #\,
                'si:sharp-comma-reader-for-compiler rtb)
              (setq prev nil))
	  
	  ;; t1expr the package ops again..
	  (if (consp *split-files*)
	      (dolist (v (fourth *split-files*)) (t1expr v)))
          (unwind-protect
            (do ((form (read *compiler-input* nil eof)
                       (read *compiler-input* nil eof))
		 (load-flag (or (eq :defaults *eval-when-defaults*)
				(member 'load *eval-when-defaults*))))
                (nil)
              (cond
	       ((eq form eof))
	       (load-flag (t1expr form))
	       ((maybe-eval nil form)))
	      (cond
	       ((and *split-files* (check-end form eof))
		(setf (fourth *split-files*) (reverse (third *data*)))
		(return nil))
	       ((eq form eof) (return nil)))
	      )
	    

            (when prev (set-dispatch-macro-character #\# #\, prev rtb)))))

     	(setq *init-name*
	      (substitute #\_ #\-
			  (if system-p	
			      #-aosvs (pathname-name input-pathname)
			      #+aosvs (string-downcase
				       (pathname-name input-pathname))
			      "code")))

      (when (zerop *error-count*)
        (when *compile-verbose* (format t "~&End of Pass 1.  ~%"))
        (compiler-pass2 c-pathname h-pathname system-p ))
	

      (wt-data-end)

      ) ;;; *compiler-output-data* closed.

    (init-env)

    (if (zerop *error-count*)

        #+aosvs
        (progn
          (when *compile-verbose* (format t "~&End of Pass 2.  ~%"))
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
                        (unless ob-file (delete-file ob-pathname))
                        (when *compile-verbose*
                              (print-compiler-info)
                              (format t "~&Finished compiling ~a.~%" (namestring output-file))
			      ))
                       (t (format t "~&Your C compiler failed to compile the intermediate file.~%")
                          (setq *error-p* t))))
                (*compile-verbose*
                 (print-compiler-info)
                 (format t "~&Finished compiling ~a.~%" (namestring output-file)
			 )))
          (unless c-file (delete-file c-pathname))
          (unless h-file (delete-file h-pathname))
          (unless fasl-file (delete-file fasl-pathname)))

        #+unix
        (progn
          (when *compile-verbose* (format t "~&End of Pass 2.  ~%"))
	  (cond (*record-call-info*
		 (dump-fn-data (get-output-pathname output-file "fn" name dir))))
          (cond (o-file
                 (compiler-cc c-pathname o-pathname  )
                 (cond ((probe-file o-pathname)
                        (compiler-build o-pathname data-pathname)
                        (when load (load o-pathname))
                       (when *compile-verbose*
                              (print-compiler-info)
                              (format t "~&Finished compiling ~a.~%" (namestring output-file)
				      )))
                       (t 
                          (format t "~&Your C compiler failed to compile the intermediate file.~%")
                          (setq *error-p* t))))
                 (*compile-verbose*
                  (print-compiler-info)
                  (format t "~&Finished compiling ~a.~%" (namestring output-file)
			  )))
          (unless c-file (delete-file c-pathname))
          (unless h-file (delete-file h-pathname))
          (unless (or data-file #+ld-not-accept-data t system-p) (delete-file data-pathname))
	  o-pathname)

        (progn
          (when (probe-file c-pathname) (delete-file c-pathname))
          (when (probe-file h-pathname) (delete-file h-pathname))
          #+aosvs
          (when (probe-file fasl-pathname) (delete-file fasl-pathname))
          #+unix
          (when (probe-file data-pathname) (delete-file data-pathname))
          (format t "~&No FASL generated.~%")
          (setq *error-p* t)
	  (values)
	  ))))))

(defun gazonk-name ( &aux tem)
  (dotimes (i 1000)
	   (unless (probe-file (setq tem (merge-pathnames (format nil "gazonk~d.lsp" i))))
		  (return-from gazonk-name (pathname tem))))
  (error "1000 gazonk names used already!"))

(defun prin1-cmp (form strm)
  (let ((*compiler-output-data* strm)
	(*fasd-data* nil))
    (wt-data1 form)  ;; this binds all the print stuff
    ))


(defun compile (name &optional def &aux tem gaz (*default-pathname-defaults* #"."))
  (cond ((not(symbolp name)) (error "Must be a name"))
	((and (consp def)
	      (member (car def) '(lambda )))
	 (or name (setf name 'cmp-anon))
	 (setf (symbol-function name)
	       def)
	 (compile name))
	(def (error "def not a lambda expression"))
	((setq tem(macro-function name))
	 (setf (symbol-function 'cmp-anon) tem)
	 (compile 'cmp-anon)
	 (setf (macro-function name) (macro-function name))
	 name)
	((and (setq tem (symbol-function name))
	      (consp tem))
	 (let ((na (if (symbol-package name) name 'cmp-anon)))
	   (with-open-file
	       (st (setq gaz (gazonk-name)) :direction :output)
	     (prin1-cmp `(defun ,na ,@ (ecase (car tem)
					 (lambda (cdr tem))
					 (lambda-block (cddr tem))
					 ))       st))
	   (let ((fi (compile-file gaz)))
	     (load fi)
	     (delete-file fi)
	     (delete-file gaz)
	     (or (eq na name) (setf (symbol-function name) (symbol-function na)))
	     (symbol-function name)
	     )))
	(t (error "can't compile ~a" name))))

(defun disassemble (name &aux tem form)
  (cond ((and (consp name)
	      (eq (car name) 'lambda))
	 (eval `(defun cmp-anon ,@ (cdr name)))
	 (disassemble 'cmp-anon))
	((not(symbolp name)) (error "Not a lambda or a name"))
	((setq tem(macro-function name))
	 (setf (symbol-function 'cmp-tmp-macro) tem)
	 (disassemble 'cmp-tmp-macro)
	 (setf (macro-function name) (macro-function name))
	 name)
	((and (setq tem (symbol-function name))
	      (consp tem)
	      (eq (car tem) 'lambda-block))
	 (with-open-file
	     (st (setq gaz (gazonk-name)) :direction :output)
	   (prin1-cmp `(defun ,name ,@ (cddr tem))       st))
	 (let ((fi (compile-file gaz :h-file t
				  :system-p 'disassemble
				 :data-file t :o-file nil)))
	   (with-open-file (st (get-output-pathname gaz "data" gaz ))
	     (si::copy-stream st *standard-output*)(delete-file st))
	   (with-open-file (st (get-output-pathname gaz "h" gaz ))
	     (si::copy-stream st *standard-output*)(delete-file st))
	   (delete-file gaz)
	   ))
	(t (error "can't disassemble ~a" name))))
	 

(defun compiler-pass2 (c-pathname h-pathname system-p )
  (with-open-file (st c-pathname :direction :output)
    (let ((*compiler-output1* (if (eq system-p 'disassemble) *standard-output*
				st)))
      (declare (special *compiler-output1*))
    (with-open-file (*compiler-output2* h-pathname :direction :output)
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
      (if system-p
	  (wt
	   "

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif
"))

      (terpri *compiler-output1*)
      ;; write ctl-z at end to make sure preprocessor stops!
      #+dos (write-char (code-char 26) *compiler-output1*)
      (terpri *compiler-output2*)))))

#+aosvs
(defun compiler-cc (c-pathname ob-pathname)
  (process "cc.pr" ; or ":usr:dgc:cc.pr"
           (format nil "cc/opt=~d/noextl/e=@null/o=~a,~a"
                   *speed* (namestring ob-pathname) (namestring c-pathname))
           :block t :ioc t)
  (when (string/= (princ (last-termination-message)) "") (terpri)))

(defvar *cc* "cc")

(defvar *use-buggy* nil)

(defun  compiler-command (&rest args &aux na )
  (declare (special *c-debug*))
  (setq na  (namestring
	      (make-pathname :name
			     (pathname-name (first args))
			     :type (pathname-type(first args)))))
  (format nil #-dos "(cd ~a ;~a ~a ~@[~*-O ~]-c -I. ~a ~a)"
		 #+dos "~a ~a ~@[~*-O ~]-c -I. ~a ~a"
	          
		#-dos (let ((dir 	 (pathname-directory (first args))))
		   (cond (dir (namestring (make-pathname :directory dir)))
			 (t ".")))
		*cc*
                 (if (and (boundp '*c-debug*) *c-debug*) " -g " "")
		 (if (or (= *speed* 2) (= *speed* 3)) t nil)
		  na
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
			    
		    #+bsd "-w"
		    #-(or aix3 bsd irix3) " 2> /dev/null ")
		  
		 
		 ))
        
#+unix
(defun compiler-cc (c-pathname o-pathname  )
  #+e15
  (let ((C (namestring
            (make-pathname
             :directory (pathname-directory c-pathname)
             :name (pathname-name c-pathname)
             :type "C")))
        (H (namestring
            (make-pathname
             :directory (pathname-directory h-pathname)
             :name (pathname-name h-pathname)
             :type "H"))))
    (system (format nil "mv ~A ~A" (namestring c-pathname) C))
    (system (format nil "mv ~A ~A" (namestring h-pathname) H))
    (system (format nil "~Atrans < ~A > ~A"
              (namestring si:*system-directory*) C (namestring c-pathname)))
    (system (format nil "~Atrans < ~A > ~A"
              (namestring si:*system-directory*) H (namestring h-pathname)))
    (delete-file C)
    (delete-file H))

  (safe-system
    (format
     nil
     (prog1
	 #+irix5 (compiler-command c-pathname o-pathname )
	 #+vax "~a ~@[~*-O ~]-S -I. -w ~a ; as -J -W -o ~A ~A"
	 #+(or system-v e15 dgux sgi ) "~a ~@[~*-O ~]-c -I. ~a 2> /dev/null"
	(compiler-command c-pathname o-pathname ))
     *cc*
     (if (or (= *speed* 2) (= *speed* 3)) t nil)
            (namestring c-pathname)
             (namestring o-pathname)
  
            ))
  
  #+dont_need
  (let ((cname (pathname-name c-pathname))
        (odir (pathname-directory o-pathname))
        (oname (pathname-name o-pathname)))
    (unless (and (equalp (truename "./")
                         (truename (make-pathname :directory odir)))
                 (equal cname oname))
            (safe-system
             (format nil "mv ~A.o ~A" cname (namestring o-pathname))))))

#+unix
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
  (format t "~&OPTIMIZE levels: Safety=~d~:[ (No runtime error checking)~;~], Space=~d, Speed=~d~%"
          (cond ((null *compiler-check-args*) 0)
                ((null *safe-compile*) 1)
                ((null *compiler-push-events*) 2)
                (t 3))
          *safe-compile* *space* *speed*))

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

