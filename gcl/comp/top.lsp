(in-package "BCOMP")

(eval-when (compile eval load)

(defparameter *comp-vars* '(*c-output* *h-output* *lsp-input* *data-output*
				       *next-vv*
				       *data*
				       *data-table*
				       *hard-error*
				       *top-form*
				       *top-forms*
				       ))
(proclaim (cons 'special *comp-vars*))
)

(defun get-output-pathname (ext)
  (declare (special input-pathname ))
  (setq input-pathname (pathname input-pathname))
  (let ((dir (pathname-directory *default-pathname-defaults*)))
    (make-pathname :directory
		   (or (pathname-directory input-pathname)
		       dir)
		   :name
		   (pathname-name input-pathname)
		   :type 
		   ext)))

(defvar *safety* 0
  ;; the safety level set by proclaim '(optimize (safety n))
  )
(defvar *speed* 3
  ;; the desired speed level of the final code.  The higher the
  ;; speed the slower the compilation, but the faster the code runs.
  )
(proclaim '(fixnum *safety* *space* *speed*))

(defun open-out (ext flag)
  (if (streamp flag) flag
    (open (get-output-pathname ext) :direction :output)))

(defun compile-file1  (input-pathname
		       &key output-file (load nil) (message-file nil) 
		       system-p (c-debug t)
		       (c-file t) (h-file t)( data-file t)
		       (o-file t)
		       &aux (*package* *package*)
		       (*readtable* *readtable*))
  (declare (special input-pathname output-file c-debug))
  message-file system-p
  (progv *comp-vars* '#. (make-list (length *comp-vars*))
	 (unwind-protect
	     (progn
	       (setq *data-table* (make-hash-table :test 'eql))
	       (setq *data* (list (make-array 50 :fill-pointer 0 )))
	       (setq *lsp-input* (open input-pathname))

	       (execute-pass-1)

	       (setq *c-output* (open-out "c" c-file))
	       (setq *h-output* (open-out "h" h-file))
	       (setq *data-output* (open-out "data" data-file))

	       (execute-pass-2)

	       (compile-and-add-data-file o-file)
	       (let ((out (get-output-pathname "o")))
		 (and output-file
		      (rename-file out output-file))
		 (if load (load out))
		 out)
	       
	       
	       )
	   
	   ;; unwind protect forms:
	   (flet ((maybe-delete (f flag)
				(cond ((and (streamp f)
					    (not (eq f flag)))
				       (close f)
				       (if (not flag)
					   (delete-file (pathname f)))))))
	     (maybe-delete *c-output* c-file)
	     (maybe-delete *h-output* h-file)
	     (maybe-delete *data-output* data-file)
	     (if (streamp *lsp-input*) (close *lsp-input*))
	     ))))
       
	     
	     
	  

  