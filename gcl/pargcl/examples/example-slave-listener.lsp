;;; To load and run this example:
;;;          (par-load "example-slave-listener.lsp")
;;;          (par-find-one-factor-sl 987654323567843)

;;;This example finds only one factor of an integer.  This example is kept
;;;  simple, and not intended for the best efficiency.
;;;It uses the slave-listener interface:  send-message, receive-message
;;;Some other useful slave-listener functions are:
;;;  flush-all-messages, par-reset, par-load, par-eval, par-funcall

;;;For a more compact example that finds all factors, see myfactor.lsp.
;;;  That example uses the higher-level master-slave functions.

(defun par-find-one-factor-sl (x &optional (incr 10000))
    "Produces one factor of argument"
      (par-funcall #'par-find-one-factor-sl-helper x incr))

(defun par-find-one-factor-sl-helper (num incr)
  (if (= 0 (MPI-Comm-rank))
    (master-sl num incr)
    (worker-sl num incr)))

(defun master-sl (num INCR
		   &aux
		   result
		   next-test-num ; incremented by INCR, and sent to slave
		   (num-slaves (1- (MPI-Comm-size))))
  ;; Seed slaves with initial tasks
  (setq next-test-num
	(do ((test-num 2 (+ test-num INCR)) ; try 2 as first candidate factor
	     (slave 1 (1+ slave)))
	  ((or (> slave num-slaves) (> test-num num))
	   (+ test-num INCR))
	  (send-message test-num slave)))

  ;; Receive a result from any slave and dispatch a new work request
  ;;   until work requests have been exhausted.
  (setq result
	(do ((recvd))
            ((>= next-test-num (+ num INCR)) 'no-factor)
	  ;; Alternatively, Could be: (receive-message (MPI-Any-source))
	  (setq recvd (receive-message))
	  (if (= recvd -1) ; if no factor
	      (progn
		(setf recvd next-test-num)
		(incf next-test-num INCR)
		;; Send new task to source of previous MPI-Recv
		(send-message recvd (MPI:MPI-Status-source)))
	      (return recvd) ; We found a factor
	    )))

  ;; We're done.  Tell slaves to shut down, and then we do it.
  ;; First, drain remaining messages.
  (do ((slave 2 (1+ slave))
       (tmp))
      ((> slave num-slaves))
    (setq tmp (receive-message))
    (if (and (eq result 'no-factor) (/= tmp -1))
      (setq result tmp)))
  ;; Second, send quit messages.
  (do ((slave 1 (1+ slave)))
      ((> slave num-slaves))
    (send-message -1 slave)) ; -1 tells slave to quit

  ;; Return the answer.
  (if (eq result 'no-factor) (error "Internal error:  factor not found"))
  (if (= result num) 'prime result))

(defun worker-sl (num INCR &aux test-num result)
  (loop
    (setq test-num (receive-message 0))
    (if (= test-num -1)
      (return))
    (setq result
	  (dotimes (j INCR -1) ; return value of -1 means no factor found
	    (if (= (mod num test-num) 0)
	      (return test-num)
	      (incf test-num))))
    (send-message result 0)
    )
)
