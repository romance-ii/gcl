;; sun release 4  getrusage interface.  (constructed using structs.lsp)
(in-package 'si)
(DEFSTRUCT (|rusage| (:static t))
    (|ru_utime.tv_sec| 0 :TYPE FIXNUM)
    (|ru_utime.tv_usec| 0 :TYPE FIXNUM)
    (|ru_stime.tv_sec| 0 :TYPE FIXNUM)
    (|ru_stime.tv_usec| 0 :TYPE FIXNUM)
    (|ru_maxrss| 0 :TYPE FIXNUM)
    (|ru_ixrss| 0 :TYPE FIXNUM)
    (|ru_idrss| 0 :TYPE FIXNUM)
    (|ru_isrss| 0 :TYPE FIXNUM)
    (|ru_minflt| 0 :TYPE FIXNUM)
    (|ru_majflt| 0 :TYPE FIXNUM)
    (|ru_nswap| 0 :TYPE FIXNUM)
    (|ru_inblock| 0 :TYPE FIXNUM)
    (|ru_oublock| 0 :TYPE FIXNUM)
    (|ru_msgsnd| 0 :TYPE FIXNUM)
    (|ru_msgrcv| 0 :TYPE FIXNUM)
    (|ru_nsignals| 0 :TYPE FIXNUM)
    (|ru_nvcsw| 0 :TYPE FIXNUM)
    (|ru_nivcsw| 0 :TYPE FIXNUM))
(clines "static mygetrusage(x,y) int x; object y;{return getrusage(x,y->str.str_self);}")
(defentry GETRUSAGE1 (int object) (int "mygetrusage"))

(defun get-usage (self usage)
  (or (typep usage '|rusage|) (setq usage (make-|rusage|)))
  (getrusage1 (if self 0 -1) usage)
  usage)
	      
(defmacro with-change-displayed (form)
  `(let ((.beg (get-usage t nil)))
    (prog1 ,form
    (let ((.end (get-usage t nil)))
      (let ((sd (s-data-slot-descriptions (get '|rusage| 's-data))))
	(sloop for i from 0
	       for v in(s-data-slot-descriptions (get '|rusage| 's-data))
	       for dif =
	       (-   (structure-ref1 .end i )  (structure-ref1 .beg i ) )
	       when (not (zerop dif))
	       do(print (list (car v) dif))))))))
			   
	  
    

