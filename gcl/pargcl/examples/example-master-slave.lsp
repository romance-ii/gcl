;;; To load and run this example:
;;;          (par-load "example-master-slave.lsp")
;;;          (par-find-one-factor-ms 987654323567843)

;;;This example finds only one factor of an integer.  This example is kept
;;;  simple, and not intended for the best efficiency.
;;;It uses the master-slave interface:  master-slave
;;;See myfactor.lsp for an example that computes all factors.
;;;For more details on how to use master-slave, see:
;;;  docs/MANUAL, and see http://www.ccs.neu.edu/home/gene/topc.html
;;;  for the C/C++ version of this facility.

(defun par-find-one-factor-ms (x &optional (incr 10000))
    "Produces one factor of argument"
      (par-funcall #'par-find-one-factor-ms-helper x incr))

(defun par-find-one-factor-ms-helper (num INCR)
  (let ((sqrt (ceiling (sqrt num)))
        (curr 1) (answer nil))
    (master-slave :generate-task-input
		  #'(lambda () (and (not answer)
				    (< curr sqrt)
				    (prog1 curr (incf curr INCR))))
                  :do-task
		  #'(lambda (curr)
		      (dotimes (j INCR nil)
			(if (= (mod num (incf curr)) 0)
			    (return curr))))
                  :check-task-result
		  #'(lambda (curr task-output)
		      (when task-output
			;;(min .. ..) in case 2 slaves find diff. factors
			(setq answer (if answer (min answer task-output)
				       task-output)))
		      'NO-ACTION)
                  :trace t) ; optionally trace messages
    (or answer 'prime)))
