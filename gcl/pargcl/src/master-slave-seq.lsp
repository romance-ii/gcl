;;;;This is a version of master-slave that operates master and slave
;;;; both within a single process.
;;;;This makes it easier to debug.  For example, one can use step
;;;; on a routine that would ordinarily reside on a slave.

;;;In more difficult debugging situations, one may run the user code
;;;with master-slave-seq.lsp in a single process (e.g.: in gcl, not pargcl).
;;;In this case, one can use (step ...) to debug routines that would reside
;;;on the slave.  However, the user code should first be modified to
;;;removed any uses of "(master-p)" or other constructs explicitly referring
;;;to a distinct master and slave.

;;  **MASTER**                          *SLAVES*
;;         >generate-task-input --                       
;;                                \                       	
;;                                 \  (task)         	
;;                                  -----------\ 
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
              
;;Lower levels from master-slave that may be called in user program
(proclaim '(ftype (function () fixnum) get-last-source mpi-world-size))
(defun get-last-source () 1)
(defun mpi-world-size () 2)

(defun master-p ()
  "Tests if current process is master."
  (format t
     "~%WARNING: (master-p) called, but only one process in sequential mode~%")
  t)

(proclaim '(type (vector fixnum) *up-to-date-tag*))              
(defvar *up-to-date-tag* (make-array 1 :element-type 'fixnum))
(defun up-to-date-p ()
  "*up-to-date-tag* in master-slave records tag current at time of last
   broadcast;  If tag of most recent message is at least that large,
   this is up-to-date."
  t)
(defun free-msg-buffer (buf) nil)

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
   set-task, check-task-result, update-shared-data are optional"
  (if trace (format t "~%In master-slave~%"))
  (setq *master-slave-time*
	(list (get-internal-run-time) (get-internal-real-time) 0))

  (do ((task-out) (task-in t) (task-action)) ((null task))
    (when (setq task-in
		(if (and (consp task-action)
			 (eq (first task-action) 'continuation))
		    task-action (funcall generate-task-input)))
      (case (setq task-action (funcall check-task-result
				       task-in
				       (setq task-out
					     (funcall do-task task-in))))
      ;;resend to same processor that did task-out.
      ;;IF RESENDING TO SAME PROC., CAN JUST RETURN ?
      ;; AND LET do-task REMEMBER ORIGINAL TASK-IN
      ((? REDO) (error "BUG:  asking for resend in sequential mode"))
      ((nil NO-ACTION) )		; skip update
      ((t UPDATE)			; do update
       ;; else assume task-out is up-to-date
       (when update-shared-data
	 ;;broadcast-tag will cause slave in master-slave
	 ;; mode to recognize update-shared-data request
	 (funcall update-shared-data task-in task-out)))
      (otherwise
       (unless (and (consp task-action) (eq (first task-action) 'continuation))
	       (error ":check-task-result must return one ~
                                          of '(REDO NO-ACTION UPDATE)."))))))

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
          0)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;These are slave-listener functions, really.
;;;;;
(defun send-message (x &rest y) nil)
(defun receive-message (&rest x) nil)
(defun broadcast-message (x) nil)
(defun probe-message (x) nil)
(defmacro par-eval (x) `(eval ,x))
(defmacro par-funcall (x &rest y) `(funcall ,x ,@y))
(defmacro par-load (x) `(load ,x))

(defun autologout (&optional x) nil)
(defun nice (&optional x) "Not implemented in sequential version.")
(defun limit-rss (&optional x) "Not implemented in sequential version.")
