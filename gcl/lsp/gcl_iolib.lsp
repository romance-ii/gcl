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


(in-package 'lisp)

(export '(with-open-stream with-input-from-string with-output-to-string))
(export '(read-from-string))
(export '(write-to-string prin1-to-string princ-to-string))
(export 'file-string-length)
(export 'with-open-file)
(export '(y-or-n-p yes-or-no-p))
(export 'dribble)
(export 'with-standard-io-syntax)
(export 'logical-pathname-translations)
(export 'load-logical-pathname-translations)
(export 'formatter)
(export 'pprint-dispatch)
(export 'set-pprint-dispatch)
(export 'copy-pprint-dispatch)
(export 'ensure-directories-exist) ; from ECLS
(export 'print-unreadable-object) ; from ECLS
(export 'with-compilation-unit)

(in-package 'system)


(proclaim '(optimize (safety 2) (space 3)))


(defmacro with-open-stream ((var stream) . body)
  (multiple-value-bind (ds b)
      (find-declarations body)
    `(let ((,var ,stream))
       ,@ds
       (unwind-protect
         (progn ,@b)
         (close ,var)))))


(defmacro with-input-from-string ((var string &key index start end) . body)
  (if index
      (multiple-value-bind (ds b)
          (find-declarations body)
        `(let ((,var (make-string-input-stream ,string ,start ,end)))
           ,@ds
           (unwind-protect
             (progn ,@b)
             (setf ,index (si:get-string-input-stream-index ,var)))))
      `(let ((,var (make-string-input-stream ,string ,start ,end)))
         ,@body)))


(defmacro with-output-to-string ((var &optional string) . body)
  (if string
      `(let ((,var (make-string-output-stream-from-string ,string)))
         ,@body)
      `(let ((,var (make-string-output-stream)))
         ,@body
         (get-output-stream-string ,var))))
        

(defun read-from-string (string
                         &optional (eof-error-p t) eof-value
                         &key (start 0) (end (length string))
                              preserve-whitespace)
  (let ((stream (make-string-input-stream string start end)))
    (if preserve-whitespace
        (values (read-preserving-whitespace stream eof-error-p eof-value)
                (si:get-string-input-stream-index stream))
        (values (read stream eof-error-p eof-value)
                (si:get-string-input-stream-index stream)))))


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
   (prin1 object stream)
   (get-output-stream-string stream))


(defun princ-to-string (object
                        &aux (stream (make-string-output-stream)))
  (princ object stream)
  (get-output-stream-string stream))

(defun file-string-length (ostream object)
  (if (subtypep (stream-element-type ostream) 'character)
    (let ((sstream (make-string-output-stream)))
      (write object :stream sstream)
      (length (get-output-stream-string sstream)))
    nil))

(defmacro with-open-file ((stream . filespec) . body)
  (multiple-value-bind (ds b)
      (find-declarations body)
    `(let ((,stream (open ,@filespec)))
       ,@ds
       (unwind-protect
         (progn ,@b)
         (if ,stream (close ,stream))))))

(defun pprint-dispatch (obj &optional (table *print-pprint-dispatch*))
  (let ((fun (si:get-pprint-dispatch obj table)))
    (if fun (values fun t) (values 'si:default-pprint-object nil))))

(setq *print-pprint-dispatch* '(pprint-dispatch . nil))

(defun set-pprint-dispatch (type-spec function &optional
			    (priority 0)
			    (table *print-pprint-dispatch*))
  (unless (typep priority 'real)
    (specific-error :wrong-type-argument "~S is not of type ~S." priority 'real))
  (let ((a (assoc type-spec (cdr table) :test 'equal)))
    (if a (setf (cdr a) (list function priority))
	(rplacd (last table) `((,type-spec ,function ,priority)))))
  nil)

(defun copy-pprint-dispatch (&optional table)
  (unless table
    (setq table *print-pprint-dispatch*))
  (unless (and (eq (type-of table) 'cons)
  	(eq (car table) 'pprint-dispatch))
    (specific-error :wrong-type-argument "~S is not of type ~S."
    	table 'pprint-dispatch))
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
  (declare (ignore subchar))
  (let ((initial-contents (read stream nil nil t)))
    (if *read-suppress*
        nil
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

;;; ensure-directories-exist 

(defun ensure-directories-exist (pathspec &key verbose)
  (flet ((pop-path 
	  (p) 
	  (if (pathname-name p) p
	    (let* ((pd (pathname-directory p))
		   (kl (if (keywordp (car (last pd))) 0 1)))
	      (merge-pathnames 
	       (make-pathname :directory (butlast pd kl)
			      :name (last pd kl)) 
	       p)))))
	(let* ((path (pathname pathspec))
	       (dir (make-pathname :host (pathname-host path)
				   :device (pathname-device path)
				   :directory (pathname-directory path)))
	       (created nil)
	       trans walk newdir)
	  (when (and (pathname-directory path)
		     (not (directory (pop-path dir))))
	    (setq trans (pathname-directory (translate-logical-pathname dir)))
	    (setq walk (list (car trans)))
	    (dolist (step (cdr trans))
	      (nconc walk (list step))
	      (setq newdir (make-pathname :directory walk))
	      (when (not (directory (pop-path newdir)))
		(si:mkdir newdir)
		(when verbose (format t "~&Directory ~A created.~%" newdir))))
	    (setq created t))
	  (values pathspec created))))

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
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
      (cdr (si:pathname-lookup k si:*pathname-logical*))))

(defun set-logical-pathname-translations (key value)
  (let ((k (if (stringp key) (string-right-trim ":" (string-downcase key)) key)))
    (setq si:*pathname-logical*
	  (si:set-pathname-lookup k si:*pathname-logical* t))
    (setq si:*pathname-logical*
          (si:set-pathname-lookup k si:*pathname-logical* 
          (si::map-pathname-translations k value)))
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
  (if (endp (cdr (si:pathname-lookup (string-downcase host)
				     si:*pathname-logical*)))
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
  `(progn
  #'(lambda (*standard-output* &rest arguments)                                
            (apply #'format t ,control-string arguments) )))

;;; copied from ECL under LGPL by Michael Koehne
;;;    with-standard-io-syntax

(defmacro with-standard-io-syntax (&body body)
  "Syntax: ({forms}*)
The forms of the body are executed in a print environment that corresponds to
the one defined in the ANSI standard. *print-base* is 10, *print-array* is t,
*package* is \"CL-USER\", etc."
  `(let*((*package* (find-package :cl-user))
	 (*print-array* t) ;; print-array -> core dampft
	 (*print-base* 10)
	 (*print-case* :upcase)
	 (*print-circle* nil)
	 (*print-escape* t)
	 (*print-gensym* t)
	 (*print-length* nil)
	 (*print-level* nil)
	 (*print-lines* nil)
	 (*print-miser-width* nil)
	 (*print-pretty* nil)
	 (*print-radix* nil)
	 (*print-readably* t)
	 (*print-right-margin* nil)
	 (*read-base* 10)
	 (*read-default-float-format* 'single-float)
	 (*read-eval* t)
	 (*read-suppress* nil)
	 (*readtable* (copy-readtable (si::standard-readtable))))
    ,@body))

; and again from ECLS

(defun print-unreadable-object-function (object stream type identity function)
  (declare (:dynamic-extent function))
  (princ "#<" stream)
  (when type
    (prin1 (type-of object) stream))
  (when (and type function) (princ " " stream))
  (when function (funcall function))
  (when (and (or type function) identity) (princ " " stream))
  ; (when identity (princ (si:pointer object) stream))
  (princ ">" stream)
  nil)
  
(defmacro print-unreadable-object
	  ((object stream &key type identity) &body body)
  (if body
      `(flet ((.print-unreadable-object-body. () ,@body))
	 (si::print-unreadable-object-function
	   ,object ,stream ,type ,identity #'.print-unreadable-object-body.))
    `(si::print-unreadable-object-function ,object ,stream ,type ,identity nil)))

; i know this should be in cmpnew - but its easier here.

(defmacro with-compilation-unit (opt &rest body) (declare (ignore opt)) `(progn ,@body))

