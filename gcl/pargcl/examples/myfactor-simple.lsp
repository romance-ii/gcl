;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;These functions below are simple examples only.
;;;;;

;;;;This is a naive factorization example based on the sieve of Eratosthenes.
;;;;It is coded for clarity of exposition, and NOT for optimized speed.
;;;;It does just one trial factor per task.
;;;;The first thing any serious implementation would do is bundle
;;;;  a sequence of factor tests as a single task, instead of trying one factor
;;;;  per task.
;;;;
;;;;Typical Usage:
;;;;(par-load "THIS_FILE") ;Assumes all processors see file in same dir
;;;;(par-myfactor 123)
;;;;WARNING:  trace is on;  Don't call this with a large argument, unless
;;;;  you're prepared for lots of printout.

(defun seq-myfactor (num-to-factor)
  "Sequential version of factorization.  The unorthodox code is closer to
   the parallel version, below."
  (let ((num 1)
	(factors nil))
    (loop
     (if (> (incf num) num-to-factor) (return factors))
     (when (= 0 (mod num-to-factor num))
       (loop (if (/= 0 (mod num-to-factor num))
	       (return))
	     (push num factors)
	     (setq num-to-factor (/ num-to-factor num)))))))

(defun par-myfactor (num-to-factor)
  "Parallel version of factorization.  Tests just one number per task."
  (par-funcall #'par-myfactor-helper num-to-factor))
(defun par-myfactor-helper (num-to-factor)
  ;;Note that num-to-factor implicitly becomes part of the shared data,
  ;; Because num-to-factor is modified only by update-shared-data.
  (let ((last-num 1)
	(factors nil));also in shared data, modified only by update-shared-data
    (master-slave :generate-task-input
		  #'(lambda () (if (<= (incf last-num) num-to-factor)
				 last-num ; task
				 NIL)) ; no more tasks
		  :do-task
		  #'(lambda (num)
		      (if (= 0 (mod num-to-factor num)) num nil))
		  :check-task-result
		  #'(lambda (num factor)
		      (cond ((null factor) 'NO-ACTION)	; NO-ACTION
			    ((and factors (< factor (apply #'max factors)))
			     'UPDATE)
			    ((not (up-to-date-p)) 'REDO) ; REDO
			    (t 'UPDATE)))	; UPDATE
		  :update-shared-data
		  #'(lambda (num factor)
		      (loop
		       (if (and factors (< factor (apply #'max factors)))
			 (setq factors  ; remove multiples of factor
			       (delete-if #'(lambda (x) (= 0 (mod x factor)))
					  factors)))
		       (if (/= 0 (mod num-to-factor factor))
			 (return))
		       (push factor factors)
		       (setq num-to-factor (/ num-to-factor factor))))
		  :trace t)
    factors))
