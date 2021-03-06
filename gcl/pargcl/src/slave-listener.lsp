;;;; Copyright (c) Gene Cooperman, 1994-2005

;; This file is part of ParGCL.
;;
;; ParGCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;;
;; ParGCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
;; License for more details.
;;
;; You should have received a copy of the GNU Library General Public License
;; along with ParGCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

;;;; A remote process is set up for each one specified in your procgroup file.
;;;; Available commands:
;;;; (send-message <lisp-expr> <optional dest = 1>)
;;;; (broadcast-message <lisp-expr>) ; no reply message
;;;; (receive-message <optional source = (MPI-Any-source)>)
;;;; (send-receive-message <lisp-expr> <optional dest = 1>)
;;;; (free-msg-buffer <buf>) ; optimization for greater efficiency, only
;;;;                         ; frees message buffer for re-use in next MPI-recv
;;;; (probe-message <optional source = (MPI-Any-source)>)
;;;; (flush-all-messages)  ; flush all commands pending by slaves
;;;; (bye) modified to also delete remote processes
;;;; (get-last-source) ; not needed, but can be useful in special cases
;;;; (get-last-tag)    ; not needed, but can be useful in special cases
;;;; ---
;;;; It works to call (send-message ... 1) n times, and then call
;;;;   (receive-message 1) n times, although this may be less efficient.
;;;; Commands sent to the same processor, are evaluated in sequence.
;;;; ---
;;;; Send/receive/probe commands also accept optional tag with obvious default
;;;; CAUTION:  If you add the optional tag parameter to send-message,
;;;; note that the slave-listener does not reply if tag = broadcast-tag
;;;; Also, tags larger than broadcast-tag are interpreted as (vector fixnum)
;;;; or (vector float), and use the corresponding MPI data types.

(provide "slave-listener")

#-mpi	(error "This version doesn't include MPI.")
#+mpi   (use-package '("MPI"))

(defconstant broadcast-tag 10000)
(defconstant next-datatype-tag (the fixnum (1+ broadcast-tag)))
(defmacro get-last-tag ()
  "send-message changes user tag; This converts back to original user tag"
  `(the fixnum (rem (MPI-status-tag) next-datatype-tag)))
(defmacro get-last-datatype ()
  "interprets tag to indicate type of message;
   0 = character; 1 = fixnum; 2 = float; (corresponds to MPI_type[] in C)"
  `(values (the fixnum (truncate (MPI-status-tag) next-datatype-tag))))
(defmacro get-last-count ()
  "count of message last received or last probed"
  `(the fixnum (MPI-Get-count (get-last-datatype))))
;;This is a function, not a macro, because it's called only by user, and
;; not by system.
(defun get-last-source ()
  "source of last message (corresponding to (MPI-comm-rank) )"
  (MPI-status-source))

;;This buffer is lengthened if longer messages are encountered.
(defvar *msg-buf* nil
  "Symbol has property list with element-type of vector as property,
   and vector as value.  :fill-pointer, :adjustable, and :static all set to T.
   :static t is essential.  A pointer to its body gets passed to MPI,
   which can call malloc, calling GCL's GBC.  So, the pointer must not move.
   (adjust-array ... :static t) must repeat :static t; bug in GCL-2.1 & lower")
(setf (get '*msg-buf* 'character)
      (make-array 256 :element-type 'character :fill-pointer t :adjustable t
		  :static t))
(defun free-msg-buffer (buf)
  "end-user-callable: frees message buffer for reuse by slave-listener
   Saves having the slave-listener generate a new buffer"
  (if (typep buf 'vector)
    ;;Should we also verify :adjustable t, :static t, :fill-pointer t ?
    (case (array-element-type buf)
      (#.(array-element-type
	  (make-array 2 :element-type 'fixnum :fill-pointer t
		      :adjustable t :static t))
       (setf (get '*msg-buf* 'fixnum) buf))
      (#.(array-element-type
	  (make-array 2 :element-type 'float :fill-pointer t
		      :adjustable t :static t))
       (setf (get '*msg-buf* 'float) buf))
      (#.(array-element-type
	  (make-array 2 :element-type 'character :fill-pointer t
		      :adjustable t :static t))
       (setf (get '*msg-buf* 'character) buf))
      (otherwise (error "buffer with elements of unknown type")))
    (error "buffer is not of type vector")))
(defun send-message (message &optional (dest (if (= (mpi-comm-rank) 0) 1 0))
			     (tag 0)
			     &aux (string-buf (get '*msg-buf* 'character)))
  "Master side:  Each send-message must have a later receive-message
   Slave side:  Each send-message must have a previous receive-message
   If message is already a string, we assume this is a print representation
    of the lisp expression (i.e.: the lisp expression is what's
    contained in the string)"
  ;;Sending to self is allowed unless we don't have pthreads.
  ;;(if (= dest (MPI-Comm-Rank)) (error "Can't send command to myself."))
  (if (>= tag next-datatype-tag)
    (error "On processor ~d: tag (~d) >= next-datatype-tag (~d)"
	   (MPI-comm-rank) tag next-datatype-tag))
  ;;NIL ==> THIS CODE NOT YET STABLE.
  (if (and t (vectorp message))   ; (vector fixnum/float) to be sent directly
    (let ((x (array-element-type message)))
      (cond ((eq x 'character) nil); skip subtypep computation (freq. case)
	    ((subtypep x 'fixnum) (incf tag next-datatype-tag))
	    ((subtypep x 'float) (incf tag #.(* 2 next-datatype-tag))))))
  (unless (or (stringp message)		; string assumed to be print rep.
	      (and (vectorp message)	; (vector fixnum) to be sent directly?
		   ;;THIS PART NOT YET STABLE.  SET TO nil WHEN STABLE.
		   t
		   (let ((x (array-element-type message)))
		     (and (not (eq x 'character)) ; skip subtypep computation
			  (or (subtypep x 'fixnum)
			      (subtypep x 'float))))))
    (setf (fill-pointer string-buf) 0)
    ;; SHOULD ALSO HANDLE CASE WHEN message IS STRING:
    (if (= 0 dest) (setq message (eval message))); No slave to eval this.
    ;; (write 3) CAUSES BUG IN gcl-2
    ;; At this time, bug seems to go away if there was previously an error,
    ;;  or if init.lsp (any or no contents) was in the startup directory
    (with-output-to-string (stream string-buf)
      (if (or (string-equal (lisp-implementation-version) "GCL-2-0")
      	      (string-equal (lisp-implementation-version) "GCL-2-1"))
	;;bug patch for gcl-2.0 and gcl-2.1
	(let ((*print-circle* nil) (*print-array* t) (*print-escape* t)
	      (*print-level* nil) (*print-length* nil))
	  (format stream "~s" message))
	(write message :stream stream :escape t :level nil :length nil
	       :array t
	       ;;Would like to make this t, but stack can then blow up
	       ;; for large lists, at least in akcl
	       :circle nil)))
    (setq message (fix-read-write-consistency string-buf)))
  ;;IF MESSAGE NOT STATIC, need to copy to static *msg-buf* of right length
  (unless (staticp message)
    (let ((msg-len (* (length message)
		     (rest (assoc (array-element-type message)
			   ;; Most common sizeof, but could break on some CPU''
			     '((character . 1) (fixnum . 4) (float . 4)))))))
      (declare (fixnum msg-len))
      (if (> msg-len (length string-buf))
	(adjust-array string-buf msg-len :static t))
      (copy-mpi-buffer message string-buf msg-len)
      (setf (fill-pointer string-buf) msg-len)
      (setq message string-buf)))
  (MPI-Send message dest tag)
  nil)

(defun fix-read-write-consistency (str &aux preamble-begin preamble-end end)
  "Change #<compiled-function ...> and #<interpreted-function ...> to #'...
   Works solely by modifying str argument"
  (setq preamble-begin (si:string-match "#<[a-z]*-function " str))
  (if (= preamble-begin -1) (return-from fix-read-write-consistency str))
  ;; CHANGE:  '#<...>   ==>   #<...>
  ;;   since later,  #<...> become #'(lambda (...) ...)
  ;; Presumably, other special functions, besides "quote" could also be a problem.
  (if (and (> preamble-begin 0) (eq (aref str (- preamble-begin 1)) #\'))
      (setf (aref str (- preamble-begin 1)) #\space))
  (setq preamble-end (si:match-end 0))
  (fix-read-write-consistency
    (make-array (- (length str) preamble-end)
		:element-type (array-element-type str)
		:displaced-to str
		:displaced-index-offset preamble-end))
  (multiple-value-bind (expr expr-end)
                       (read-from-string str t nil :start preamble-end)
    (loop (if (memq (aref str (- expr-end 1)) '(#\tab #\newline #\space))
	    (decf expr-end)
	    (return)))
    (when (eq #\> (aref str (1- expr-end))) ; when: #<compiled-function mapcar>
      (decf expr-end)
      (setq expr (read-from-string str t nil :start preamble-end :end expr-end)))
    (setq end (1+ (si:string-match ">" str expr-end))) ; start at expr-end
    ;; fill with spaces following '#' of '#<...>'
    (fill str #\space :start (+ preamble-begin 1) :end end)
    (setf (aref str (+ preamble-begin 1)) #\' ) ; #<   ==>   #'
    (with-output-to-string (stream
			     (make-array (- (length str) preamble-begin 2)
					 :fill-pointer 0
					 :element-type (array-element-type str)
					 :displaced-to str
				 :displaced-index-offset (+ preamble-begin 2)))
      (write (cond ((not (listp expr)) expr)
		   ;; (lambda-block (x) (+ x 1)) =>
		   ((eq (first expr) 'lambda-block)
		    (list 'lambda (third expr)
			  (list* 'block (second expr) (cdddr expr))))
		   ;; (lambda-closure () () () (x) (+ x 1)) =>
		   ((eq (first expr) 'lambda-closure)
		    (cons 'lambda (cddddr expr))))
	     ;; :circle t okay; body of fnc shouldn't be so large to blow stack
	     :stream stream :escape t :level nil :length nil :array t :circle t
	     )))
  str)

(defun receive-message (&optional (source (MPI-Any-source)) (tag (MPI-Any-tag))
			     &aux (datatype -10) (type-enum -1) (type NIL)
			     (count 0) (buf NIL))
  "Master side:  Each send-message must have a previous receive-message
   Slave side:  Each send-message must have a later receive-message"
  (declare (fixnum datatype count type-enum))
  (MPI-Probe source tag)
  (setq type-enum (get-last-datatype))
  (setq count (get-last-count))
  (setq type (car (rassoc type-enum MPI::*type-lisp-to-mpi*)))
  (unless type (error "receive-message:  incorrect datatype"))
  (if (get '*msg-buf* type)
    (progn (if (> count (array-dimension (get '*msg-buf* type) 0))
	     (setq buf (adjust-array (get '*msg-buf* type) count
				     ;;BUG:
				     ;;GCL-2.2 not recognizing :fill-pointer t
				     :fill-pointer t :static t))
	     (setq buf (get '*msg-buf* type)))
	   (setf (fill-pointer buf) count))
    (setq buf (make-array count :element-type type :fill-pointer t
			  :adjustable t :static t)))
  ;;Set source and in case they used to be MPI-ANY-SOURCE or MPI-ANY-TAG
  ;;Then rely on non-overtaking messages to insure that MPI-Recv
  ;;   sees the same message as MPI-Probe
  (setq source (MPI-Status-source))
  (setq tag (MPI-Status-tag))
  (MPI-Recv buf source tag)
  (unless (and (= type-enum (get-last-datatype)) (= count (get-last-count)))
    (error "receive-message:  MPI-Recv didn't agree with MPI-Probe"))
  ;; (format t "remote ~d:  ~a~%" (MPI-Status-Source) buf)
  (if (eq type 'character)
    ;; slave-listener keeps (get '*msg-buf* 'character)
    (values (read-from-string buf))
    (progn (setf (get '*msg-buf* type) nil) ; user keeps (get '*msg-buf* type)
	   buf)))

(defun send-receive-message (message &optional (dest 1) (tag 0))
  "Equivalent to send-message followed by receive-message from same destination"
  (send-message message dest tag)
  (receive-message dest))

(defun broadcast-message (command)
  "Can only be called by master (rank 0);  Equivalent to (send-message command)
   to each slave, except that no slave sends back a return message"
  (unless (= (MPI-Comm-rank) 0) (error "Only master can broadcast."))
  (dotimes (i (MPI-world-size))
    (unless (= i 0)
      (send-message command i broadcast-tag))))

(defvar system::*error-msg* "unknown error")

(defun slave (&aux expr (tag -1))
  "Internal to slave-listener.  This is read-message/eval/send-message
   loop on the slave"
  (declare (fixnum tag))
  (loop
   (setq expr (receive-message 0))
   ;; get tag now, since (eval expr) may send more messages
   (setq tag (get-last-tag))
   (setq expr (catch si::*quit-tag* (eval expr)))
   (unless (= tag broadcast-tag)	; don't reply to broadcast
     (when (eq expr si::*quit-tag*)
       (setq expr `(cerror "Type :r to resume"
			   "Rec'd error from processor ~d: ~%  ~s"
			   ,(MPI-comm-rank) ,system::*error-msg*)))
     (send-message
      (if (and (consp expr) (eq 'cerror (first expr))) ; if an error
	(format nil "#.~s" expr) ; Cause evaluation in master.
	(if (stringp expr)
	  ;;send-message converts s-exp to string if it's not yet a string,
	  ;;  and receive-message converts a string back to an s-exp.
	  ;;  So, if we really want to send a string, quote it inside another
	  ;;  string first.
	  (format nil "~s" expr)
	  expr))		 ; else normal expr
      0 tag))))

;;;; ONLY THE MASTER NEEDS THESE

(defun probe-message (&optional (source (MPI-Any-source)))
  "probes for messages from SOURCE.  If no arg, messages from any source."
  (MPI-Iprobe source))

(defun flush-all-messages (&aux (count 0))
  "flushes pending messages from slaves; returns number messages flushed"
  (unless (= (MPI-Comm-rank) 0) (error "Only master can flush messages."))
  (loop
    (if (not (MPI-Iprobe)) (return count))
    (MPI-Recv (get '*msg-buf* 'character) (MPI-Any-source))
    (incf count)))

;;shadow bye with version to kill slaves
(eval-when (load eval compile)
  (shadow 'lisp::bye 'user)
  (shadow 'lisp::by 'user)
  (shadow 'lisp::quit 'user)
)
(defun user::bye () ; shadow bye to delete other processes before exiting
  (when (MPI-Initialized)
    (when (= (MPI-Comm-rank) 0)
      ;; Escape from master slave mode
      ;; (broadcast-message "#.(abort)") in CLTL2
      #-kcl (broadcast-message '(quote %%mpi-internal-slave-escape%%))
      #+kcl (broadcast-message "#.(throw si::*quit-tag* 'done)")
      (dotimes (i (MPI-World-size))
        (unless (= i 0)
          (send-message '(progn (MPI-Finalize) (lisp::bye)) i)))
      ;;(format nil "slave process ~d terminating.~%" (MPI-Comm-rank))
    )
    (MPI-Finalize))
  (lisp::bye))
(setf (symbol-function 'user::by) (symbol-function 'user::bye))
(setf (symbol-function 'user::quit) (symbol-function 'user::bye))


;;;; ENOUGH DEFINITIONS; START THE BALL ROLLING


(defun MPI::init-slave-listener ()
  "This is set to si::*top-level-hook*, and executes at startup of ParGCL."

(setq si::*system-banner* (si::default-system-banner))
(if (= (MPI-comm-rank) 0)
    (progn (format t si::*system-banner*)
	   (format t "~%This is ParGCL, ~a.~%" si::pargcl-version-string)
	   (format t "See pargcl/doc/MANUAL and pargcl/examples ~
		      for usage tips.~%~%")))

;;;For debugging:
;;; (let ((args nil))
;;;   (dotimes (i (si:argc) (print (nreverse args))) (push (si:argv i) args)))
(setq MPI::curr-dir
      ;; Note that bash and some other shells may not set "PWD" when
      ;;  invoking from command line
      #-aix (or (si:getenv "PWD") (truename *default-pathname-defaults*))
      #+aix (truename *default-pathname-defaults*))

(format t "Process of rank ~d initialized on processor ~a.~%" (MPI-Comm-rank)
	(or (si:gethostname)
	    #+kcl(si:getenv "HOST") #+kcl(si:getenv "HOSTNAME")
	    (machine-instance)))
;;(print (cons (system "hostname") (truename *default-pathname-defaults*)))

;;If we failed above (maybe due to missing procgroup), then exit.
(when (not (MPI-initialized))
  (format t "slave-listener.lsp:  MPI failed to initialize.~%  ~
            If procgroup file missing, copy file~%      ~
                ~a/../bin/procgroup~%  ~
	     to current directory, modify it as desired, and restart ParGCL.~% ~
	     Alternatively, invoke:  pargcl -p4pg PATH-TO-PROCGROUP~%~
	     ... Exiting.~%" si::pargcl-src)
  (quit))

;;Set slave directory to same as master directory:
(when (= (MPI-comm-rank) 0)
  ;;chdir prev. set to dir where saved_pargcl made
  (si:chdir MPI::curr-dir)
  ;;SHOULD INCLUDE WARNING MESSAGE TO USE ABSOLUTE PATH
  ;;  IN CASE CHDIR FAILS ON SLAVES
  #+kcl (broadcast-message `(si:chdir ,MPI::curr-dir))
  #-kcl (broadcast-message `(setq *DEFAULT-PATHNAME-DEFAULTS* ,MPI::curr-dir))

  ;;Wait until last slave replied before master goes on to print banner
  (send-message 0 (1- (mpi-world-size)))
  (receive-message)
  (terpri)
)

;; MAYBE PUT THIS IN master-slave.lsp, for after mpi-init ??
;; ELSE it should go in master-slave loop.
#|
;;; Evaluate commands from tty on master and all slaves
(when (= (mpi-comm-rank) 0)
  (defvar *broadcast-all-commands-p* t)
  (setq system::*old-eval* (symbol-function 'eval))
  (defun eval (x)
    (if *broadcast-all-commands-p*
      ;; Only the first eval of read-eval-print loop can be invoked here
      (let ((*broadcast-all-commands-p* nil))
	(declare (special *broadcast-all-commands-p*))
	(par-eval x))
      (funcall system::*old-eval* x))))
|#

(if (= (MPI-Comm-rank) 0)
  (progn nil
	 ;; (format t "~%master ready!!~%~%")
	 )
  (progn
    #+kcl (setq system::*break-enable* nil) ; from lsp/top.lsp
    (unless (boundp 'system::*old-break-level*)
      (setq system::*old-break-level* (symbol-function 'system::break-level)))
    (defun system::break-level (at &optional (env nil env-p))
      (setq system::*error-msg* (if (stringp at) at "unknown error"))
      (format t "Error on MPI processor ~d~%" (MPI-comm-rank))
      (apply system::*old-break-level*
	     (if env-p (list at env) (list at))))
    ;; (format t "~%slave ready!!~%~%")
    (slave)))			; slave loops waiting for command
)
