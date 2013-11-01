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


;;;;   iolib.lsp
;;;;
;;;;        The IO library.


;; (in-package 'lisp)

;; (export '(with-open-stream with-input-from-string with-output-to-string parse-integer))
;; (export '(read-from-string))
;; (export '(write-to-string prin1-to-string princ-to-string))
;; (export 'file-string-length)
;; (export 'with-open-file)
;; (export '(y-or-n-p yes-or-no-p))
;; (export 'dribble)
;; (export 'with-standard-io-syntax)
;; (export 'logical-pathname-translations)
;; (export 'load-logical-pathname-translations)
;; (export 'formatter)
;; (export 'pprint-dispatch)
;; (export 'set-pprint-dispatch)
;; (export 'copy-pprint-dispatch)
;; (export 'ensure-directories-exist) ; from ECLS
;; (export 'print-unreadable-object) ; from ECLS
;; (export 'with-compilation-unit)
;; (export '(concatenated-stream-streams 
;; 	  broadcast-stream-streams 
;; 	  two-way-stream-input-stream
;; 	  echo-stream-input-stream
;; 	  two-way-stream-output-stream
;; 	  echo-stream-output-stream
;; 	  synonym-stream-symbol
;; 	  read-byte
;; 	  write-byte
;; 	  read-sequence
;; 	  write-sequence
;; 	  open))

(in-package :system)

(defun concatenated-stream-streams (stream)
  (declare (optimize (safety 2)))
  (check-type stream concatenated-stream)
  (stream-object0 stream))
(defun broadcast-stream-streams (stream)
  (declare (optimize (safety 2)))
  (check-type stream broadcast-stream)
  (stream-object0 stream))
(defun two-way-stream-input-stream (stream)
  (declare (optimize (safety 2)))
  (check-type stream two-way-stream)
  (stream-object0 stream))
(defun echo-stream-input-stream (stream)
  (declare (optimize (safety 2)))
  (check-type stream echo-stream)
  (stream-object0 stream))
(defun two-way-stream-output-stream (stream)
  (declare (optimize (safety 2)))
  (check-type stream two-way-stream)
  (stream-object1 stream))
(defun echo-stream-output-stream (stream)
  (declare (optimize (safety 2)))
  (check-type stream echo-stream)
  (stream-object1 stream))
(defun synonym-stream-symbol (stream)
  (declare (optimize (safety 2)))
  (check-type stream synonym-stream)
  (stream-object0 stream))

(defun maybe-clear-input (&optional (x *standard-input*))
  (cond ((not (typep x 'stream)) nil)
	((typep x 'synonym-stream) (maybe-clear-input (symbol-value (synonym-stream-symbol x))))
	((typep x 'two-way-stream) (maybe-clear-input (two-way-stream-input-stream x)))
	((terminal-input-stream-p x) (clear-input t))))

(defun decl-vars (decls);FIXME complete and centralize
  (remove-duplicates
   (mapcan (lambda (x) 
	     (when (eq (car x) 'declare)
	       (mapcan (lambda (x) (cond ((member (car x) '(type ftype)) (cddr x))
					 ((member (car x) '(optimize)) nil)
					 ((cdr x)))) (cdr x)))) (copy-tree decls))))


(defmacro with-open-stream ((var stream) . body)
;  (declare (optimize (safety 2)))
  (multiple-value-bind 
   (ds b)
   (find-declarations body)
   `(let* (,@(mapcar (lambda (x) (list x x)) (remove var (decl-vars ds)))
	     (,var ,stream))
      ,@ds
      (unwind-protect
	  (progn ,@b)
	(close ,var)))))



(defmacro with-input-from-string ((var string &key index start end) . body)
;  (declare (optimize (safety 2)))
  (multiple-value-bind 
   (ds b)
   (find-declarations body)
   (let ((r (gensym)))
     `(let* (,@(mapcar (lambda (x) (list x x)) (remove var (decl-vars ds)))
	       (,var (make-string-input-stream ,string ,start ,end)))
	,@ds 
	(let ((,r (multiple-value-list (progn ,@b))))
	  ,@(when index `((setf ,index (si:get-string-input-stream-index ,var))))
	  (values-list ,r))))))


(defmacro with-output-to-string ((var &optional string &key element-type) . body)
;  (declare (optimize (safety 2)))
  (multiple-value-bind 
   (ds b)
   (find-declarations body)
   (let ((e (gensym)))
     `(let* (,@(mapcar (lambda (x) (list x x)) (remove var (decl-vars ds)))
	      (,var ,(if string `(make-string-output-stream-from-string ,string) `(make-string-output-stream))))
	,@ds 
	(let (,@(when element-type `((,e ,element-type))));FIXME
	  ,@b
	  ,@(unless string `((get-output-stream-string ,var))))))))


(defun read-from-string (string
                         &optional (eof-error-p t) eof-value
                         &key (start 0) (end nil end-p) preserve-whitespace)
  (declare (optimize (safety 2)))
  (check-type string string)
  (unless end-p (setq end (length string)))
  (let ((stream (make-string-input-stream string start end)))
    (if preserve-whitespace
        (values (read-preserving-whitespace stream eof-error-p eof-value)
                (si:get-string-input-stream-index stream))
        (values (read stream eof-error-p eof-value)
                (si:get-string-input-stream-index stream)))))


(defun write (x &key stream 
		(array            *print-array*)
		(base             *print-base*)
		(case             *print-case*)
		(circle           *print-circle*)
		(escape           *print-escape*)
		(gensym           *print-gensym*)
		(length           *print-length*)
		(level            *print-level*)
		(lines            *print-lines*)
		(miser-width      *print-miser-width*)
		(pprint-dispatch  *print-pprint-dispatch*)
		(pretty           *print-pretty*)
		(radix            *print-radix*)
		(readably         *print-readably*)
		(right-margin     *print-right-margin*))
  (write-int x stream array base case circle escape gensym
	     length level lines miser-width pprint-dispatch
	     pretty radix readably right-margin))

(defun write-to-string (object &rest rest &key
			    ( escape nil escape-supplied-p )
			    ( radix nil radix-supplied-p )
			    ( base nil base-supplied-p )
			    ( circle nil circle-supplied-p )
			    ( pretty nil pretty-supplied-p )
			    ( level nil level-supplied-p )
			    ( length nil length-supplied-p )
			    ( case nil case-supplied-p )
			    ( gensym nil gensym-supplied-p )
			    ( array nil array-supplied-p )
			    ( lines nil lines-supplied-p )
			    ( miser-width nil miser-width-supplied-p )
			    ( pprint-dispatch nil pprint-dispatch-supplied-p )
			    ( readably nil readably-supplied-p )
			    ( right-margin nil right-margin-supplied-p )
                        &aux (stream (make-string-output-stream)))
  (declare (optimize (safety 2)))
  (let*((*print-array*
	  (if array-supplied-p array *print-array*))
	(*print-base*
	  (if base-supplied-p base *print-base*))
	(*print-case*
	  (if case-supplied-p case *print-case*))
	(*print-circle*
	  (if circle-supplied-p circle *print-circle*))
	(*print-escape*
	  (if escape-supplied-p escape *print-escape*))
	(*print-gensym*
	  (if gensym-supplied-p gensym *print-gensym*))
	(*print-length*
	  (if length-supplied-p length *print-length*))
	(*print-level*
	  (if level-supplied-p level *print-level*))
	(*print-lines*
	  (if lines-supplied-p lines *print-lines*))
	(*print-miser-width*
	  (if miser-width-supplied-p miser-width *print-miser-width*))
	(*print-pretty*
	  (if pretty-supplied-p pretty *print-pretty*))
	(*print-radix*
	  (if radix-supplied-p radix *print-radix*))
	(*print-readably*
	  (if readably-supplied-p readably *print-readably*))
	(*print-right-margin*
	  (if right-margin-supplied-p right-margin *print-right-margin*))
	(*print-pprint-dispatch*
	  (if pprint-dispatch-supplied-p pprint-dispatch *print-pprint-dispatch*)))
      (apply #'write object :stream stream rest)
      (get-output-stream-string stream)))

(defun prin1-to-string (object
                        &aux (stream (make-string-output-stream)))
  (declare (optimize (safety 2)))
  (prin1 object stream)
  (get-output-stream-string stream))


(defun princ-to-string (object
                        &aux (stream (make-string-output-stream)))
  (declare (optimize (safety 2)))
  (princ object stream)
  (get-output-stream-string stream))

(defun file-string-length (ostream object)
  (declare (optimize (safety 2)))
  (let ((ostream (if (typep ostream 'broadcast-stream) 
		     (car (last (broadcast-stream-streams ostream)))
		   ostream)))
    (cond ((not ostream) 1)
	  ((subtypep1 (stream-element-type ostream) 'character)
	   (length (let ((*print-escape* nil)) (write-to-string object)))))))

(defmacro with-temp-file ((s pn) (tmp ext) &rest body) 
  (multiple-value-bind
   (doc decls ctps body)
   (parse-body-header body)
   (declare (ignore doc))
   `(let* ((,s (temp-stream ,tmp ,ext)) 
	   (,pn (stream-object1 ,s))) 
      ,@decls
      ,@ctps
      (unwind-protect (progn ,@body) (progn (close ,s) (delete-file ,s))))))

(defmacro with-open-file ((stream . filespec) . body)
;  (declare (optimize (safety 2)))
  (multiple-value-bind 
   (ds b)
   (find-declarations body)
   `(let* (,@(mapcar (lambda (x) (list x x)) (remove stream (decl-vars ds)))
	     (,stream (open ,@filespec)))
      ,@ds 
      (unwind-protect
	  (progn ,@b)
	(if ,stream (close ,stream))))))

(defun pprint-dispatch (obj &optional (table *print-pprint-dispatch*))
  (declare (optimize (safety 2)))
  (let ((fun (si:get-pprint-dispatch obj table)))
    (if fun (values fun t) (values 'si:default-pprint-object nil))))

(setq *print-pprint-dispatch* '(pprint-dispatch . nil))

(defun set-pprint-dispatch (type-spec function &optional
			    (priority 0)
			    (table *print-pprint-dispatch*))
  (declare (optimize (safety 2)))
  (unless (typep priority 'real)
    (error 'type-error :datum priority :expected-type 'real))
  (let ((a (assoc type-spec (cdr table) :test 'equal)))
    (if a (setf (cdr a) (list function priority))
	(rplacd (last table) `((,type-spec ,function ,priority)))))
  nil)

(defun copy-pprint-dispatch (&optional table)
  (declare (optimize (safety 2)))
  (unless table
    (setq table *print-pprint-dispatch*))
  (unless (and (eq (type-of table) 'cons)
  	(eq (car table) 'pprint-dispatch))
    (error 'type-error :datum table :expected-type 'pprint-dispatch))
  (copy-seq table ))

(defun y-or-n-p (&optional string &rest args)
  (do ((reply))
      (nil)
    (when string (format *query-io* "~&~?  (Y or N) " string args))
    (setq reply (read *query-io*))
    (cond ((string-equal (symbol-name reply) "Y")
           (return-from y-or-n-p t))
          ((string-equal (symbol-name reply) "N")
           (return-from y-or-n-p nil)))))


(defun yes-or-no-p (&optional string &rest args)
  (do ((reply))
      (nil)
    (when string (format *query-io* "~&~?  (Yes or No) " string args))
    (setq reply (read *query-io*))
    (cond ((string-equal (symbol-name reply) "YES")
           (return-from yes-or-no-p t))
          ((string-equal (symbol-name reply) "NO")
           (return-from yes-or-no-p nil)))))

(defun sharp-a-reader (stream subchar arg)
  (declare (ignore subchar) (optimize (safety 2)))
  (let ((initial-contents (read stream nil nil t)))
    (unless *read-suppress*
      (do ((i 0 (1+ i))
	   (d nil (cons (length ic) d))
	   (ic initial-contents (if (zerop (length ic)) ic (elt ic 0))))
	  ((>= i arg)
	   (make-array (nreverse d)
		       :initial-contents initial-contents))))))

(set-dispatch-macro-character #\# #\a 'sharp-a-reader)
(set-dispatch-macro-character #\# #\A 'sharp-a-reader)

;; defined in defstruct.lsp
(set-dispatch-macro-character #\# #\s 'sharp-s-reader)
(set-dispatch-macro-character #\# #\S 'sharp-s-reader)

(defvar *dribble-stream* nil)
(defvar *dribble-io* nil)
(defvar *dribble-namestring* nil)
(defvar *dribble-saved-terminal-io* nil)

(defun dribble (&optional (pathname "DRIBBLE.LOG" psp) (f :supersede))
  (declare (optimize (safety 2)))
  (cond ((not psp)
         (when (null *dribble-stream*) (error "Not in dribble."))
         (if (eq *dribble-io* *terminal-io*)
             (setq *terminal-io* *dribble-saved-terminal-io*)
             (warn "*TERMINAL-IO* was rebound while DRIBBLE is on.~%~
                   You may miss some dribble output."))
         (close *dribble-stream*)
         (setq *dribble-stream* nil)
         (format t "~&Finished dribbling to ~A." *dribble-namestring*))
        (*dribble-stream*
         (error "Already in dribble (to ~A)." *dribble-namestring*))
        (t
         (let* ((namestring (namestring pathname))
                (stream (open pathname :direction :output
                                       :if-exists f
                                       :if-does-not-exist :create)))
           (setq *dribble-namestring* namestring
                 *dribble-stream* stream
                 *dribble-saved-terminal-io* *terminal-io*
                 *dribble-io* (make-two-way-stream
                               (make-echo-stream *terminal-io* stream)
                               (make-broadcast-stream *terminal-io* stream))
                 *terminal-io* *dribble-io*)
           (multiple-value-bind (sec min hour day month year)
               (get-decoded-time)
             (format t "~&Starts dribbling to ~A (~d/~d/~d, ~d:~d:~d)."
                     namestring year month day hour min sec))))))

;;; new logical pathname translation
;
;;; examples :
;
;; (setf (logical-pathname-translations "source")
;;       '(("SRC;**;*.*.*" "/home/kraehe/lisp/**/*.*")
;;         ("LIB;**;*.*.*" "/usr/local/lib/**/*.*")
;;         ("BIN;*.*.*" "/usr/local/bin/*.*")))
;
;; (setf (logical-pathname-translations "var")
;;       '(("**;*.*.*" "/var/**/*.*")))
;
;; This is tricky ! Translate a logical pathname into something unix like.
;
;; (setf (logical-pathname-translations "home")
;;       '(("*;**;*.*.*" "~*/**/*.*")))
;
;; Try: (TRUENAME "home:games;zork.exec")

(setq si:*pathname-logical* nil)
(setq si:*pathname-virtual* nil)
(setq si:*pathname-device* nil)

#-(or dos winnt) (setq si:*pathname-resolve* '(:host))
#+(or dos winnt) (setq si:*pathname-resolve* '(:host :device))

(defun map-pathname-translations (key value)
    (if (listp value)
	(mapcar #'(lambda (s) (list
		(if (stringp (car s)) (parse-namestring (car s) key) (car s))
		(if (stringp (cadr s)) (parse-namestring (cadr s)) (cadr s))))
		value)
	value))

(defun map-pathname-searchlist (key value)
    (if (listp value)
	(mapcar #'(lambda (s) (cons
	        (if (stringp (car s)) (parse-namestring (car s) key) (car s))
	        (mapcar #'(lambda (p) 
		        (if (stringp p) (parse-namestring p) p))
		        (cdr s))))
	        value)
	value))

(defun map-search-list (key value)
    (if (listp value)
        (list (cons
	  (make-pathname :host key :directory '(:absolute :wild-inferiors))
	  (mapcar #'(lambda (s)
		(cond
		  ((stringp s)
		    (make-pathname :directory (append
		    	(pathname-directory (parse-namestring s))
			'(:wild-inferiors))))
		  ((eq (type-of s) 'pathname)
		    (make-pathname :directory (append
			(pathname-directory s)
		        '(:wild-inferiors))))
		  (t s)))
	    value)))
      value))

(defun logical-pathname-translations (key)
  (declare (optimize (safety 2)))
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
      (cdr (si:pathname-lookup k si:*pathname-logical*))))

(defun set-logical-pathname-translations (key value)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
    (setq si:*pathname-logical*
	  (si:set-pathname-lookup k si:*pathname-logical* t))
    (setq si:*pathname-logical*
          (si:set-pathname-lookup k si:*pathname-logical* (si::map-pathname-translations k value)))
    (cdr (si:pathname-lookup k si:*pathname-logical*))))

(defsetf logical-pathname-translations si::set-logical-pathname-translations)

(defun virtual-pathname-searchlist (key)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
      (cdr (si:pathname-lookup k si:*pathname-virtual*))))

(defun set-virtual-pathname-searchlist (key value)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
    (setq si:*pathname-virtual*
	  (si:set-pathname-lookup k si:*pathname-virtual* t))
    (setq si:*pathname-virtual*
          (si:set-pathname-lookup k si:*pathname-virtual*
	  (si::map-pathname-searchlist k value)))
    (cdr (si:pathname-lookup k si:*pathname-virtual*))))

(defsetf virtual-pathname-searchlist set-virtual-pathname-searchlist)

(defun device-pathname-searchlist (key)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
      (cdr (si:pathname-lookup k si:*pathname-device*))))

(defun set-device-pathname-searchlist (key value)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
    (setq si:*pathname-device*
	  (si:set-pathname-lookup k si:*pathname-device* t))
    (setq si:*pathname-device*
          (si:set-pathname-lookup k si:*pathname-device*
	  (si::map-pathname-searchlist nil value)))
    (cdr (si:pathname-lookup k si:*pathname-device*))))

(defsetf device-pathname-searchlist set-device-pathname-searchlist)

(defun load-logical-pathname-translations (host)
  (if (endp (cdr (si:pathname-lookup (string-downcase host) si:*pathname-logical*)))
  (let (n p) (block nil
    (setq n (concatenate 'string host "-translations"))
    (setq p (make-pathname :name n :type "lisp" :directory :current))
    (when (probe-file p) (return (load (truename p) :verbose nil)))
#-(or dos winnt)(progn
    (setq n (concatenate 'string "." host "-translations"))
    (setq p (make-pathname :name n :type "lisp"
	      :directory (pathname-directory (user-homedir-pathname))))
    (when (probe-file p) (return (load (truename p) :verbose nil))))
    (setq n (concatenate 'string host "-translations"))
    (setq p (make-pathname :directory
	      (append (pathname-directory SI::*LIB-DIRECTORY*) '("lsp"))
	      :name host :type "translations"))
    (when (probe-file p) (return (load (truename p) :verbose nil)))
    (error "Cannot find host ~S." host)) t) nil))

;; CMUCL look like Search Lists

(defun search-list (key)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
      (cdr (si:pathname-lookup k si:*pathname-virtual*))))

(defun search-list-defined-p (key)
  (if (search-list key) t nil))

(defun clear-search-list (key)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
    (setq si:*pathname-virtual*
	  (si:set-pathname-lookup k si:*pathname-virtual* nil)))
  (search-list key))

(defun set-search-list (key value)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
    (setq si:*pathname-virtual*
	  (si:set-pathname-lookup k si:*pathname-virtual* t))
    (setq si:*pathname-virtual*
          (si:set-pathname-lookup k si:*pathname-virtual*
	  (si::map-search-list k value)))
    (cdr (si:pathname-lookup k si:*pathname-virtual*))))

(defsetf search-list set-search-list)

; simple formatter macro

(defmacro formatter ( control-string )
  (declare (optimize (safety 2)))
  `(progn
     (lambda (*standard-output* &rest arguments)                                
       (let ((*format-unused-args* nil))
	 (apply 'format t ,control-string arguments)
	 *format-unused-args*))))

(defun stream-external-format (s)
  (declare (optimize (safety 1)))
  (check-type s stream)
  :default)

;;; copied from ECL under LGPL by Michael Koehne
;;;    with-standard-io-syntax


(defmacro with-standard-io-syntax (&body body)
  (declare (optimize (safety 2)))
  `(let* ((*package* (find-package :cl-user))
	  (*print-array* t)
	  (*print-base* 10)
	  (*print-case* :upcase)
	  (*print-circle* nil)
	  (*print-escape* t)
	  (*print-gensym* t)
	  (*print-length* nil)
	  (*print-level* nil)
	  (*print-lines* nil)
	  (*print-miser-width* nil)
	  (*print-pprint-dispatch* *print-pprint-dispatch*);FIXME
	  (*print-pretty* nil)
	  (*print-radix* nil)
	  (*print-readably* t)
	  (*print-right-margin* nil)
	  (*read-base* 10)
	  (*read-default-float-format* 'single-float)
	  (*read-eval* t)
	  (*read-suppress* nil)
	  (*readtable* (copy-readtable (si::standard-readtable))));FIXME copy?
     ,@body))

(defmacro print-unreadable-object
	  ((object stream &key type identity) &body body)
  (declare (optimize (safety 2)))
  (let ((q `(princ " " ,stream)))
    `(if *print-readably* 
	 (error 'print-not-readable :object ,object)
       (progn
	 (princ "#<" ,stream)
	 ,@(when type `((prin1 (type-of ,object) ,stream) ,q))
	 ,@body
	 ,@(when identity
	     (let ((z `(princ (address ,object) ,stream)))
	       (if (and (not body) type) (list z) (list q z))))
	 (princ ">" ,stream)
	 nil))))
;     (print-unreadable-object-function ,object ,stream ,type ,identity ,(when body `(lambda nil ,@body)))))

; i know this should be in cmpnew - but its easier here.

(defmacro with-compile-file-syntax (&body body)
  `(let ((*print-radix* nil)
	 (*print-base* 10)
	 (*print-circle* t)
	 (*print-pretty* nil)
	 (*print-level* nil)
	 (*print-length* nil)
	 (*print-case* :downcase)
	 (*print-gensym* t)
	 (*print-array* t)
	 (*print-package* t)
	 (*print-structure* t))
     ,@body))

(defmacro with-compilation-unit (opt &rest body)   
  (declare (optimize (safety 2)))
  (declare (ignore opt)) 
  `(let ((res (multiple-value-list (let ((*disable-recompile* t)) ,@body))))
     (do-recompile nil)
     (values-list res)))

(defun get-byte-stream-nchars (s)
  (check-type s stream)
  (let* ((tp (stream-element-type s))
	 (tp (if (consp tp) (cadr tp) char-length))
	 (nc (ceiling tp char-length)))
    nc))

(defun parse-integer (s &key start end (radix 10) junk-allowed)
  (declare (optimize (safety 1)))
  (parse-integer-int s start end radix junk-allowed))


(defun write-byte (j s)
  (declare (optimize (safety 2)))
  (let ((nc (get-byte-stream-nchars s))
	(ff (1- (expt 2 char-length))))
    (do ((k 0 (1+ k))(i j (ash i (- char-length)))) ((= k nc) j)
	(write-char (code-char (logand i ff)) s))))

(defun read-byte (s &optional (eof-error-p t) eof-value)
  (declare (optimize (safety 2)))
  (let ((nc (get-byte-stream-nchars s)))
    (do ((j 0 (1+ j)) 
	 (i 0 (logior i
	       (ash (char-code (let ((ch (read-char s eof-error-p eof-value)))
				 (if (and (not eof-error-p) (eq ch eof-value))
				     (return-from read-byte ch)
				   ch))) (* j char-length)))))
	((= j nc) i))))


(defun read-sequence (seq strm &key (start 0) (end nil))
  (declare (optimize (safety 2)))
  (check-type seq sequence)
  (check-type start (integer 0))
  (when end (check-type end (integer 0)))
  (let* ((end (or end (length seq)))
	 (seq (if (and (consp seq) (> start 0)) (nthcdr start seq) seq))
	 (tp (stream-element-type strm)))
    (if (eq tp 'character)
	(if (consp seq)
	    (do ((i start (1+ i))(seq seq (cdr seq))) ((= i end) i) 
		(declare (seqind i))
		(setf (car seq) (let ((el (read-char strm nil 'eof)))
				  (if (eq el 'eof) (return i) el))))
	  (do ((i start (1+ i))) ((= i end) i) 
	      (declare (seqind i))
	      (setf (aref seq i) (let ((el (read-char strm nil 'eof)))
				   (if (eq el 'eof) (return i) el)))))
      (if (consp seq)
	  (do ((i start (1+ i))(seq seq (cdr seq))) ((= i end) i) 
	      (declare (seqind i))
	      (setf (car seq) (let ((el (read-byte strm nil 'eof)))
				  (if (eq el 'eof) (return i) el))))
	(do ((i start (1+ i))) ((= i end) i) 
	    (declare (seqind i))
	    (setf (aref seq i) (let ((el (read-byte strm nil 'eof)))
				 (if (eq el 'eof) (return i) el))))))))


(defun write-sequence (seq strm &key (start 0) (end nil))
  (declare (optimize (safety 2)))
  (check-type seq sequence)
  (check-type start (integer 0))
  (when end (check-type end (integer 0)))
  (let* ((end (or end (length seq)))
	 (seq (if (and (consp seq) (> start 0)) (nthcdr start seq) seq))
	 (tp (stream-element-type strm)))
    (if (eq tp 'character)
	(if (consp seq)
	    (do ((i start (1+ i))(seq seq (cdr seq))) ((= i end) i) 
		(declare (seqind i))
		(write-char (car seq) strm))
	  (do ((i start (1+ i))) ((= i end) i) 
	      (declare (seqind i))
	      (write-char (aref seq i) strm)))
      (if (consp seq)
	  (do ((i start (1+ i))(seq seq (cdr seq))) ((= i end) i) 
	      (declare (seqind i))
	      (write-byte (car seq) strm))
	(do ((i start (1+ i))) ((= i end) i) 
	    (declare (seqind i))
	    (write-byte (aref seq i) strm)))))
  seq)

(defun restrict-stream-element-type (tp)
  (cond ((member tp '(unsigned-byte signed-byte)) tp)
	((or (member tp '(character :default)) (si::subtypep1 tp 'character)) 'character)
	((si::subtypep1 tp 'integer) 
	 (let* ((ntp (car (expand-ranges (cmp-norm-tp tp))))
		(min (cadr ntp))(max (caddr ntp))
		(s (if (or (eq min '*) (< min 0)) 'signed-byte 'unsigned-byte))
		(lim (unless (or (eq min '*) (eq max '*)) (max (integer-length min) (integer-length max))))
		(lim (if (and lim (eq s 'signed-byte)) (1+ lim) lim)))
	   (if lim `(,s ,lim) s)))
	((check-type tp (member character integer)))))

(defun open (f &key (direction :input)
	       (element-type 'character etp)
	       (if-exists nil iesp)
	       (if-does-not-exist nil idnesp)
	       (external-format :default))

  (declare (optimize (safety 2)))
  
  (when etp (setq element-type (restrict-stream-element-type element-type)))
  (open-int f direction element-type if-exists iesp if-does-not-exist idnesp external-format))
(defun load (f &rest args)
  (values (apply 'load1 f args)))

(defun ensure-directories-exist (ps &key verbose &aux created)
  (when (wild-pathname-p ps)
    (error 'file-error :pathname ps :format-control "Pathname is wild"))
  (labels ((d (x y &aux (z (ldiff x y)) (p (make-pathname :directory z)))
	      (when (when z (stringp (car (last z))))
		(unless (eq :directory (car (stat p)))
		  (mkdir (namestring p))
		  (setq created t)
		  (when verbose (format *standard-output* "Creating directory ~s~%" p))))
	      (when y (d x (cdr y)))))
    (let ((pd (pathname-directory ps)))
      (d pd (cdr pd)))
    (values ps created)))

#.(let ((g '(:host :device :directory :name :type :version)))
     `(defun wild-pathname-p (pd &optional f &aux (p (pathname pd)))
       (declare (optimize (safety 1)))
       (check-type f (or null (member ,@g)))
       (labels ((w-f (x)
		     (case x
		       ,@(mapcar (lambda (x &aux (f (intern (concatenate 'string "PATHNAME-" (string-upcase x)))))
				   `(,x ,(if (eq x :directory) `(when (member :wild (,f p)) t) `(eq :wild (,f p))))) g))))
	 (if f 
	     (w-f f)
	   (reduce (lambda (z x) (or z (w-f x))) ',g :initial-value nil)))))
