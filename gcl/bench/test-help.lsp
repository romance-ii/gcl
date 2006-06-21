(defvar *repeats* '(("destru" 4)("destru-mod" 4)("fprint" 4)("fread" 4)
		    ("stak" 4)("takr" 4)("tprint" 4)))


(defun do-test (file output &optional (n 1 given) &aux tem)
  (if (and (not given)
	   (setq tem (assoc file *repeats* :test 'equalp)))
      (setq n (second tem)))
  (or (eql n 1) (format t "..Using ~a repeats" n))
  (load file)
  (let ((pos (position #\- file))
	(orig file))
    (if pos (setq file (subseq file 0 pos)))
    (let ((command (intern (string-upcase (format nil "TEST~a" file)))))
	(let ((start    (get-internal-run-time)))
	  (dotimes (i n) (funcall command))
	  (setq start (- (get-internal-run-time) start))
	  (setq start (/ (float start) n))
	  (with-open-file
	    (st output :direction :output :if-exists :append)
	    (format st "~%~:@(~a~)~,12t~,3f"
		    orig
		    (/ start (float internal-time-units-per-second)))
	    (force-output st)
	    )))))

	  
		  