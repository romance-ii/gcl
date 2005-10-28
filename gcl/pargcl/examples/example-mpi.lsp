;;; To load and run this example:
;;;          (par-load "example-mpi.lsp")
;;;          (par-find-one-factor-mpi 987654321)

;;;This example finds only one factor of an integer.  This example is kept
;;;  simple, and not intended for the best efficiency.
;;;Note that MPI does not handle bignums, unlike the slave-listener
;;;  and master-slave interface.
;;;Note also that currently, (par-reset) does not interact well, if the MPI
;;;  program crashes.  This is because the slave may still be executing
;;;  your MPI program, and will not behave well when it receives a
;;;  LISP command message.
;;;However, MPI has an advantage over the other APIs, in that the other
;;;  APIs convert an s-exp to a print representation string, send it over
;;;  the network, and then convert it back.  This additional parsing
;;;  might be costly if very large messages are being sent.
;;;For a more compact example that finds all factors, see myfactor.lsp.
;;;  That example uses the higher-level master-slave functions.

;;;For help, try, for example, (help 'MPI:MPI-Recv)
;;;Note that the lisp MPI function have arguments similar to the MPI standard.
;;;  Later arguments may be optional.  Where MPI requires a buf and size
;;;  argument, lisp needs only a buf argument (as a one-dimensional array).
;;;  When a function sets a _small_ value, we prefer to return
;;;  that value.  Hence, (MPI-Comm-rank) => rank
;;;Note that the lisp versions of MPI-Probe and MPI-Recv do not accept
;;;  status arguments.
;;;  Instead, use (MPI:MPI-Status-source) and (MPI:MPI-Status-tag), which
;;;  return most source or tag of most recent MPI-Probe or MPI-Recv.
;;;  Similarly, (MPI:MPI-Get-count 'fixnum) returns count of most
;;;    recent MPI-Probe or MPI-Recv, but datatype argument is required.

;;;Note that MPI requires the use of buffers.
;;;In Lisp, we use static arrays as buffers.  Note that the array
;;;  _MUST_ be static.  Static arrays are never moved by a garbage collector.
;;;  This is in case, during the call from a lisp function to the MPI
;;;  function in C, lisp might relocate the array.  It may be possible
;;;  to lift this restriction in the future.
;;;MPI will guess the type of the MPI buffer from the type of the array
;;;  elements.  See variable *type-lisp-to-mpi* for acceptable element types.
;;;To create the array, we prefer:
;;;  (make-array count :element-type type :fill-pointer t
;;;    :adjustable t :static t)
;;;  Then, it is easy to later extend the array:
;;;  (adjust-array new-count :fill-pointer t :static t)

(defconstant work-tag 1)
(defconstant quit-tag 2)

(defun par-find-one-factor-mpi (x &optional (incr 10000))
    "Produces one factor of argument"
      (par-funcall #'find-one-factor-mpi x incr))

(defun find-one-factor-mpi (num incr)
  (if (= 0 (MPI-Comm-rank))
    (master num incr)
    (worker num incr)))

(defun master (num INCR
		   &aux
		   result
		   next-test-num ; incremented by INCR, and sent to slave
		   (num-slaves (1- (MPI-Comm-size)))
		   (work-buf (make-array 1 :element-type 'fixnum
					 :fill-pointer t
					 :adjustable t :static t)))
  ;; Seed slaves with initial tasks
  (setq next-test-num
	(do ((test-num 2 (+ test-num INCR)) ; try 2 as first candidate factor
	     (slave 1 (1+ slave)))
	  ((or (> slave num-slaves) (> test-num num))
	   (+ test-num INCR))
	  (setf (aref work-buf 0) test-num)
	  (MPI-Send work-buf slave work-tag)))

  ;; Receive a result from any slave and dispatch a new work request
  ;;   until work requests have been exhausted.
  (setq result
	(do ()
            ((>= next-test-num (+ num INCR)) 'no-factor)
	  ;; Could be:  (MPI-Recv work-buf) ; last two args are defaulted.
	  (MPI:MPI-Recv work-buf (MPI:MPI-Any-source) (MPI:MPI-Any-tag))
	  (if (/= (MPI:MPI-Get-count 'fixnum) 1) (error "Internal error"))
	  (if (= (aref work-buf 0) -1) ; if no factor
	      (progn
		(setf (aref work-buf 0) next-test-num)
		(incf next-test-num INCR)
		;; Send new task to source of previous MPI-Recv
		(MPI:MPI-Send work-buf (MPI:MPI-Status-source) work-tag))
	      (return (aref work-buf 0)) ; We found a factor
	    )))

  ;; We're done.  Tell slaves to shut down, and then we do it.
  ;; First, drain remaining messages.
  (do ((slave 2 (1+ slave)))
      ((> slave num-slaves))
    (MPI:MPI-Recv work-buf (MPI:MPI-Any-source) (MPI:MPI-Any-tag))
    (if (and (eq result 'no-factor) (/= (aref work-buf 0) -1))
      (setq result (aref work-buf 0))))
  ;; Second, send quit messages.
  (do ((slave 1 (1+ slave)))
      ((> slave num-slaves))
    (MPI-Send work-buf slave quit-tag))
  ;; If we finalize now, we lose our sockets to the slaves.  Instead,
  ;;   a call to (quit) or (bye) will automatically cause the slaves to exit.
  ;; (MPI:MPI-Finalize)

  ;; Return the answer.
  (if (eq result 'no-factor) (error "Internal error:  factor not found"))
  (if (= result num) 'prime result))

(defun worker (num INCR
		   &aux
	           test-num
	           result
	           (work-buf (make-array 1 :element-type 'fixnum
				           :fill-pointer t
				           :adjustable t :static t)))
  (loop
    (MPI:MPI-Recv work-buf)
    (if (= (MPI:MPI-Status-tag) quit-tag)
      (return))
    (if (/= (MPI:MPI-Get-count 'fixnum) 1)
      (error "Slave: Internal error: wrong count"))
    (if (/= (MPI:MPI-Status-tag) work-tag)
      (error "Internal error:  slave didn't receive quit-tag or work-tag"))
    (setq test-num (aref work-buf 0))
    (setq result
	  (dotimes (j INCR -1) ; return value of -1 means no factor found
	    (if (= (mod num test-num) 0)
	      (return test-num)
	      (incf test-num))))
    (setf (aref work-buf 0) result)
    (MPI:MPI-Send work-buf 0)
    )

  ;; Don't finalize, or else slave will go away.
  ;; (MPI:MPI-Finalize)
)
