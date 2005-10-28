;;;;;These examples use a simple sieve algorithm for factoring.
;;;;;Their purpose is to illustrate the master-slave architecture.

;;; sequential version (single processor)
(defun seq-myfactor (x)
  (do ((sqrt (ceiling (sqrt x)))
       (curr 1))
      ((>= curr sqrt) 'prime)
    (if (dotimes (j 1000 nil)
          (if (= (mod x (incf curr)) 0) (return 'done)))
      (return curr))))


;;; parallel version
;;; NOTE:  In the next version, the read - eval - print loop, may
;;;        become a    read - par-eval - print   loop.
;;;        For now, call:
;;;          (par-load "myfactor.lsp")
;;;          (par-myfactor 987654321)
;;;        See also "example-master-slave.lsp" for a simpler version
;;;          that computes only one factor.

;;This version finds all factors
;;Note that (up-to-date-p) insures that if other slaves found smaller
;; factors, those will have been registered first.
(defun par-myfactor (x &optional (incr 1000))
  "Produces all factors of argument"
  (par-funcall #'par-myfactor-aux x incr))
(defun par-myfactor-aux (x incr)
  (let ((sqrt (ceiling (sqrt x)))
        (curr 1) (answer nil))
    (master-slave :generate-task-input  ; executed on master => curr
		  #'(lambda ()
		      (and (< curr sqrt) (prog1 curr (incf curr incr))))
		  ;; curr sent to slave
                  :do-task
		  #'(lambda (curr)  ; executed on slave => result
		      (dotimes (j incr nil)
			(if (= (mod x (incf curr)) 0)
			    (return curr))))
		  ;; curr from slave sent to master as result 
                  :check-task-result ; executed on master
		  #'(lambda (result)
		      (if result
			  (if (up-to-date-p)
			      ;; more factors in [curr+1..curr+incr]?
			      (progn (decf curr incr) 'UPDATE)
			    'REDO) ; re-try current computation
			'NO-ACTION))
		  ;; update answer on all processors if UPDATE action above
		  :update-shared-data ; executed on master and all slaves
		  #'(lambda (result)
		      (setq x (/ x result))
		      (setq sqrt (ceiling (sqrt x)))
		      (push result answer))
                  :trace t) ; optionally trace messages
    (if (> x 1) (push x answer))
    (or answer 'prime)))

;;;could also use continuation and *last*

;;Add check that new factors are prime (by making sure all factors up to
;; sqrt of new number have already been checked)
