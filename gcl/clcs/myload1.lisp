(load (merge-pathnames "../clcs/clcs_macros.lisp" system:*system-directory*))

(in-package "CONDITIONS")

(defvar *shadowed-symbols1* 
  '(ASSERT ETYPECASE CTYPECASE ECASE CCASE))

(defun install-symbol (real clcs)
  (unless (get real 'definition-before-clcs)
    (setf (get real 'definition-before-clcs)
	  (symbol-function real)))
  (unless (eq (symbol-function real)
	      (symbol-function clcs))	       
    (setf (symbol-function real)
	  (symbol-function clcs))))

(defun revert-symbol (real)
  (when (and (get real 'definition-before-clcs)
	     (not (eq (symbol-function real)
		      (get real 'definition-before-clcs))))
    (setf (symbol-function real)
	  (get real 'definition-before-clcs))))

(defvar *clcs-redefinitions1*
  (nconc (mapcar #'(lambda (symbol)
		     (list (intern (symbol-name symbol) "LISP") symbol))
		 *shadowed-symbols1*)
	 '()))

(defun install-clcs-symbols ()
  (dolist (r *clcs-redefinitions1*)
    (install-symbol (first r) (second r)))
  nil)

(defun revert-clcs-symbols ()
  (dolist (r (reverse *clcs-redefinitions1*))
    (revert-symbol (first r)))
  nil)

(install-clcs-symbols)
