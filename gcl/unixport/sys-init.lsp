(in-package 'si)
(let ((mss (si::string-concatenate *system-directory*
				     "message")))
  (if (probe-file mss)
      (system (format nil "cat ~a " mss))))
