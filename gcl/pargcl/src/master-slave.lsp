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

;;Main function:  master-slave
;;  parametrized functions:  generate-task-input, do-task, check-task-result,
;;                           update-shared-data
;;    check-task-result returns:  t, nil, ?, or continuation
;;    or equivalently:  UPDATE, NO-ACTION, REDO, (CONTINUATION . ...)
;;Auxiliary variable:  *master-slave-time* (set at end)
;;Auxiliary functions:  master-p, up-to-date-p, result-task,
;;                      par-reset, par-eval, par-call

;;  **MASTER**                          *SLAVES*
;;         >generate-task-input --                       
;;                                \                       	
;;                                 \   (task)         	
;;                                  ------------\ 
;;                                              V
;;                                            do-task
;;                   /-------------------------/   ^
;;                  V  	                       	  / 
;;     check-task-result--if "?" (REDO)------------/  
;;      |        \                       	    
;;      |         \                                 
;;    if NIL   	   \            	 
;;     (NO-ACTION)  \           	 
;;      |	     if t (UPDATE)
;;      V                  \             
;;                          \ 
;;                           \          
;;      update-shared-data<---+------------------->update-shared-data
;;     	       	  	    
              	
(require "slave-listener")
#-mpi   (error "This version doesn't include MPI.")
#+mpi   (use-package '("MPI"))

;;HACK: DO IT RIGHT LATER
(proclaim '(special pending))
;;;;NOTE:  when slave no longer responds, we try to write it off and re-assign
;;;;   his task.  However, this doesn't work in MPICH, because
;;;;   a process was waiting on the sockets for a message using select()
;;;;   in .../mpich/mpid/ch_p4/p4-1.4/lib/p4_sock_util.c:net_recv()
;;;;   When a slave is killed, recv() reads 0 char's, signalling eof,
;;;;   discovers that FD_ISSET() fails.
;;;;   p4 then calls p4_error with message:
;;;;     net_recv read:  probable EOF on socket:
;;;;   and p4_error tries to shut down all sockets, and signal INT to
;;;;   all processes.  Could patch net_recv() or p4_error().
(defconstant DEAD-SLAVE (list 'dead-slave))
(defconstant NO-TAG -1)
(defconstant CYCLES-BEFORE-DEAD 20)
(defconstant CYCLES-BEFORE-UNDEAD 200) ; must be mult. of CYCLES-BEFORE-DEAD

#|
;;; Evaluate commands from tty on master and all slaves **STILL BUGGY**
(when (= (mpi-comm-rank) 0)
  (defun broadcast-all-commands (boolean)
    (if boolean
      ;;BUG when user enters #+kcl ... at top level.
      (setq *evalhook*
	#'(lambda (form env)
	    ;;catch si::*quit-tag* because GCL removes *evalhook* after error
	    ;; Only the eval of read-eval-print loop should be invoked here
	    (broadcast-message form)
	    ;;(print form)(print env)
	    (let ((x (catch #+kcl si::*quit-tag* #-kcl '(nil)
			    (let ((*evalhook* nil))
			      (multiple-value-list (eval form))))))
	      #+kcl (if (eq (first x) si::*quit-tag*)
		      (setf (first x) "RETURNING"))
	      (values-list x))))
      (setq *evalhook* nil)))
)
|#
;;;par-eval and par-funcall useful ONLY if *broadcast-all-commands-p* is nil
(defun par-eval (s-exp)
  "(par-eval EXP) like (eval EXP), but on all processors; no reply from slaves"
  (unless (master-p)
    (error "Can only be executed on master."))
  (if (mpi-iprobe)
    (error "Pending messages from a slave.  Call (par-reset) to flush."))
  (broadcast-message s-exp)
  (if (stringp s-exp)
    (eval (read-from-string s-exp))
    (eval s-exp)))
(defmacro par-funcall (fnc &rest args)
 "(par-funcall FNC ARG1 ...) like (funcall FNC ARG1 ...) but on all processors
  no reply from slaves"
  `(par-eval `(funcall ,',fnc
		       ,@(mapcar #'(lambda (x) `(quote ,x)) (list ,@args)))))
(defmacro par-load (file)
 "(par-load file) like (load file) but on all processors; no reply from slaves"
  `(par-eval '(load (truename ,file))))
(defun par-reset ()
  "Resets master and slaves."
  (when (master-p) ;; (broadcast-message "#.(abort)") in CLTL2
    #-kcl (broadcast-message '(quote %%mpi-internal-slave-escape%%))
    #+kcl (broadcast-message "#.(throw si::*quit-tag* 'done)")
    (loop
     ;;WOULD LIKE TO DO THIS IN ENVIRONMENT CATCHING ALL ERRORS.
     (if (mpi-iprobe) (receive-message) (return)))))
(defun master-p ()
  "Tests if current process is master."
  (= (MPI-Comm-rank) 0))

(proclaim '(type (vector fixnum) *up-to-date-tag*))              
(defvar *up-to-date-tag* (make-array 1 :element-type 'fixnum))
;;If this were called from interpreter, could be macro (less overhead)
(defun up-to-date-p ()
  "*up-to-date-tag* in master-slave records tag current at time of last
   broadcast;  If tag of most recent message is at least that large,
   this is up-to-date."
  (>= (get-last-tag) (aref *up-to-date-tag* 0)))
(defmacro result-task ()
  "Returns task corresponding to most recent result (most recent message)
   returned."
  `(aref pending (get-last-tag)))

;;;broadcast-tag defined in slave-listener.lsp
(when (< broadcast-tag 1000)
  (warn "broadcast-tag set very low:  ~d.~%" broadcast-tag))

(defmacro send-task (task dest &optional (trace nil))
  "utility for master-slave"
  `(let ((task ,task) (dest ,dest))
     (incf curr-tag)
     ;;SHOULD CHANGE broadcast-tag TO RESULT OF MPI ENVIRONMENT
     (if (>= curr-tag broadcast-tag) (setf curr-tag 0))
     ;;This could be DEAD-SLAVE
     (if (and (aref pending curr-tag)
	      (not (eq (aref pending curr-tag) DEAD-SLAVE)))
       (error "Previous task appears to not yet have completed:~%~a~%"
	      (aref pending curr-tag)))
     (setf (aref pending curr-tag) task)
     (setf (aref slave-tags dest) curr-tag)
     ,@(if trace `((if ,trace (format t "TRACE: -> ~d: ~s~%" dest task))))
     (decf num-free-processors)
     (send-message task dest curr-tag)))

(defvar *master-slave-time* (list 0 0 0)
  "list of 3 elements: real time, run time, (in ms.) and per cent, for last
   execution of master-slave")
(defvar *master-slave-trace* nil
  "If no :trace keyword specified for master-slave, uses this default.
   If non-nil and used, traces all messages inside function, master-slave")
;;SHOULD PROBABLY gensym LOCAL VAR'S OF master-slave
(defun master-slave (&key generate-task-input set-task do-task
		     check-task-result update-shared-data buffer-size
		     (trace *master-slave-trace*))
  "If keywords are lambda functions, can inherit lexical var's;
   do-task executes on slave, update-shared-data on slave and master,
   and everything else on master, only; buffer-size is optional number.
   set-task, check-task-result, update-shared-data are optional.
   This is based on the TOP-C model for C/C++.
   See http://www.ccs.neu.edu/home/gene/topc.html"
  (declare (special *msg-buf*)) ; defined in slave-listener.lsp
  (let ((old-buffer-size (array-dimension (get '*msg-buf* 'character) 0)))
     (if trace (format t "~%In master-slave~%"))
     (when buffer-size (adjust-array (get '*msg-buf* 'character) buffer-size
				     :static t))
     (setq *master-slave-time*
	   (list (get-internal-run-time) (get-internal-real-time) 0))
     (if (= (MPI-Comm-rank) 0)		; if master
       (let* ((task) (curr-tag -1)
	      (num-slaves (1- (MPI-World-size)))
	      (slave-tags (make-array (1+ num-slaves) :element-type 'fixnum
				      :initial-element NO-TAG))
	      (num-free-processors num-slaves)
	      (free-processors
	       (let ((result nil))
		 (dotimes (i num-slaves (nreverse result))
		   (push (1+ i) result))))
	      (dead-processors nil) ; processors no longer responding
	      (pending (make-array (min (MPI-attr-get MPI-TAG-UB) 1000000)))
              (reassigned-tasks nil))
	 (declare (fixnum curr-tag up-to-date-tag num-slaves
			  num-free-processors))
	 (declare (type (vector t) pending))
	 (declare (type (vector fixnum) slave-tags))
	 (setf (aref *up-to-date-tag* 0) 0)
	 (unless (setq task (funcall generate-task-input))
	   (error "First task was NIL."))
	 (dolist (i free-processors)
	   (send-message '(quote %%mpi-internal-slave-confirm%%) i))
	 (dolist (i free-processors)
	   (unless (eq (receive-message) 'mpi-slave-confirmed)
	     (par-reset)
	     (error "master-slave function not running on all slaves.~%~
                     Quit from here, and use (par-eval '<your command>).")))
	 (send-task task (pop free-processors) trace)
	 (loop
	  (if (and trace reassigned-tasks)
              (format t "TRACE: Recycling task ~d from dead slave.~%"
                      (first reassigned-tasks)))
	  (do () ; Send some tasks
	      ((not (and free-processors
			 (setq task (or (pop reassigned-tasks)
					(funcall generate-task-input))))))
	    (send-task task (pop free-processors) trace))
	  (when (= num-free-processors num-slaves) (return)) ; no task, no pending
	  (let ((result (receive-message))) ; Get a result
	    (if trace
	      (format t "TRACE: ~d ->: ~s~%" (MPI-Status-source) result))
	    (if (eq (result-task) DEAD-SLAVE)
	      (progn
		(setq result nil)
		(if trace
		  (format t "DEAD SLAVE tried to return result.  Killed.~%")))
	      (progn ; BETTER TO DELAY THIS AND DO ONLY IF NEEDED (a la TOP-C)
		(setq free-processors           ; free-processors is FIFO queue
		      (nconc free-processors (list (MPI-status-source))))
		(incf num-free-processors)))
	    (setf (aref slave-tags (MPI-status-source)) NO-TAG)
	    (when result
	      (block try-result
		(let ((task-result
		       (if check-task-result
			 (funcall check-task-result result) t)))
		  (if (and (consp task-result)
			   (eq (first task-result) 'continuation))
		    ;;ask same processor to extend computation
		    (progn (setf (aref pending (get-last-tag)) nil)
			   (send-task task-result
				      (first (last free-processors)) trace)
			   (setf free-processors (nbutlast free-processors))
			   (return-from try-result)) ; skip update
		    (case task-result
		      ;;REDO:  resend to same processor that did result.
		      ;;IF RESENDING TO SAME PROC., CAN JUST RETURN ?
		      ;; AND LET do-task REMEMBER ORIGINAL TASK
		      ((? REDO) (send-task (aref pending (get-last-tag))
				    (first (last free-processors)) trace)
			 (setf free-processors (nbutlast free-processors))
			 ;;(get-last-tag) is set for last REC'D msg, only
			 (setf (aref pending (get-last-tag)) nil)
			 (return-from try-result)) ; skip update
		      ((nil NO-ACTION)		; NO-ACTION
		       (setf (aref pending (get-last-tag)) nil)
		       (return-from try-result)) ; skip update
		      ((t UPDATE)		; UPDATE
		       ;; else assume result is up-to-date
		       (setf (aref pending (get-last-tag)) nil)
		       (when update-shared-data
			 ;;broadcast-tag will cause slave in master-slave
			 ;; mode to recognize update-shared-data request
			 (progn (broadcast-message result)
				(funcall update-shared-data result)))
		       (when set-task (funcall set-task result))
		       (setf (aref *up-to-date-tag* 0) curr-tag))
		      (otherwise (error ":check-task-result must return one ~
                                          of '(REDO NO-ACTION UPDATE)."))))))))
	  (when (= (mod (get-last-tag)
                        (the fixnum (* CYCLES-BEFORE-DEAD num-slaves))) 0)
	    (unless (= (rem CYCLES-BEFORE-UNDEAD CYCLES-BEFORE-DEAD))
	      (error "CYCLES-BEFORE-UNDEAD must be multiple ~
                      of CYCLES-BEFORE-DEAD."))
	    ;; Retry dead slaves, in case working again.
	    (when (= (mod (get-last-tag)
			  (the fixnum (* CYCLES-BEFORE-UNDEAD num-slaves))) 0)
	      (if (and trace dead-processors)
		       (format t "~d killed slaves being resuscitated.~%"
			       (length dead-processors)))
	      (incf num-slaves (length dead-processors))
	      (incf num-free-processors (length dead-processors))
	      (setq free-processors (nconc free-processors dead-processors))
	      (setq dead-processors nil))
	   ;; Test for dead slaves, and kill them
	   (let ((old-tag (max (- curr-tag (the fixnum
                                   (* CYCLES-BEFORE-DEAD
                                      (+ num-slaves (length dead-processors)))))
                               0)))
	     (declare (fixnum old-tag))
	     (dotimes (i (length slave-tags))
	       (when (and (/= (aref slave-tags i) NO-TAG)
			  (< (aref slave-tags i) old-tag))
		 (if trace
                   (format t "TRACE: Slave ~d not responding after ~d cycles.  ~
			      Killing it.~%"
			    (* CYCLES-BEFORE-DEAD
                               (+ num-slaves (length dead-processors)))))
		 (decf num-slaves)
                 (push (aref pending (aref slave-tags i)) reassigned-tasks)
		 (setf (aref pending (aref slave-tags i)) DEAD-SLAVE)
		 (setf (aref slave-tags i) NO-TAG)
		 (push i dead-processors))))
	   )) ; resume loop
	 ;;THIS ASSUMES SLAVE IS ALSO RUNNING (master-slave ...)
	 ;; mpi::... required, since reader would otherwise put in curr package
	 (broadcast-message "#.(throw 'mpi::done 'done)"))
       (let ((result))			; else this is a slave
	 (catch 'mpi::done
	   (loop
	    (setq result (receive-message 0))
	    (if (equal result '(quote %%mpi-internal-slave-escape%%)) (return))
	    (if (equal result '(quote %%mpi-internal-slave-confirm%%))
	      (send-message 'mpi-slave-confirmed 0 (get-last-tag))
	      (if (/= (get-last-tag) (the fixnum broadcast-tag))
		(send-message (funcall do-task result) 0 (get-last-tag)) ;reply
		(when update-shared-data ; broadcast doesn't require reply
		    (funcall update-shared-data result))))))))
     (when buffer-size
       (adjust-array (get '*msg-buf* 'character) old-buffer-size :static t))
     (setf (first *master-slave-time*)
	   (- (get-internal-run-time) (first *master-slave-time*)))
     (setf (second *master-slave-time*)
	   (- (get-internal-real-time) (second *master-slave-time*)))
     (setq *master-slave-time*
	   (mapcar #'(lambda (x) (/ (* 1000.0 x) 60.0)) *master-slave-time*))
     (setf (third *master-slave-time*)
           (if (> (second *master-slave-time*) 0)
             (* 100 (/ (first *master-slave-time*)
                       (second *master-slave-time*)))
             0))))
