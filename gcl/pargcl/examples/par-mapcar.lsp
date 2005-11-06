;;; To load and run this example:
;;;          (par-load "par-mapcar.lsp")
;;;          (par-mapcar #'sqrt '(1 2 3 4 5 6 7 8 9 10))

;;;This example generalizes mapcar to the obvious parallel version.
;;;  It computes on each element of the list using the next processor,
;;;  and then returns a list of the answers.
;;;It uses the master-slave interface:  master-slave
;;;For more details on how to use master-slave, see:
;;;  docs/MANUAL, and see http://www.ccs.neu.edu/home/gene/topc.html
;;;  for the C/C++ version of this facility.

(defun par-mapcar (fnc list &aux (i -1) result)
  (par-funcall #'par-mapcar-helper fnc list))
(defun par-mapcar-helper (fnc list &aux (i -1) result)
  (if (master-p)
      (setq result (make-array (length list))))
  (master-slave
    :generate-task-input #'(lambda () (incf i) (if (< i (length list)) i nil))
    :do-task             #'(lambda (j) (funcall fnc (nth j list)))
    :check-task-result   #'(lambda (task-in task-out)
			     (setf (aref result task-in) task-out)
			     'NO-ACTION)
    :trace nil)
  (if (master-p) (coerce result 'list) nil)
)
