(in-package 'si)
(or (fboundp 'get-usage) (load "/public/gcl/misc/rusage"))
(gbc-time 0)
(defun cv (x) (/ x (float INTERNAL-TIME-UNITS-PER-SECOND)))
(defvar *all-times* nil)
(defmacro with-timing (&rest forms)
  `(let ((usg0 (get-usage t nil))
	(t1 (gbc-time))
	(t2 (get-internal-run-time))
	(t3 (get-internal-real-time)))
    (prog1 ,@forms
      (setq t1 (- (gbc-time ) t1))
      (setq t2 (-  (get-internal-run-time) t2))
      (setq t3 (-  (get-internal-real-time) t3))
      (let ((usg (get-usage t nil)))
	(let ((ans
	       (format nil
		"Run= ~3,2f Elap= ~3,2f Gc= ~3,2f Fault= ~3d"
		(cv t2) (cv t3) (cv t1)
		(- (|rusage|-|ru_majflt| usg) (|rusage|-|ru_majflt| usg0)))))
	  (push (list ',(car forms) ans ) *all-times*)
	  (print ans))))))


(setq si::*notify-gbc* t)
(allocate 'cons 520 t)
(allocate 'fixnum 40)

(si::sgc-on nil)
(si::allocate-sgc 'symbol 20  30 30)
(si::allocate-sgc 'cons 50  3000 40)

(si::allocate-sgc 'vector 1 10 30)
(si::allocate-sgc 'string 1 10 30)
(gbc nil)
(si::sgc-on t)
(print (in-package "MAXIMA"))
(setq $joe #$expand((x+y+z)^20)$)


(defun test (form)
  (gbc nil)
  (eval form)
  (push (list form 'cons-pages (si::allocated-pages 'cons)) si::*all-times*)
  
  (gbc nil)
  (si::with-timing (sloop for i below 3 do (displa ($factor $joe))))
  )

(test '(si::sgc-on nil))
(test '(si::sgc-on t))
(test '(si::sgc-on nil))
(test '(si::sgc-on t))

(print si::*all-times*)
      
      
    
