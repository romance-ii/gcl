(in-package 'lisp)
(export '(pprint-linear pprint-fill pprint-tabular pprint-logical-block))
(in-package 'si)


(defun pprint-linear (s x &optional (c t) a) 
  (let* ((z (write-to-string x))
	 (z (if (not (listp x)) z
	       (let ((lz (length z)))
		 (if (and *print-right-margin*
			  (< 1 *print-right-margin* (if c lz (- lz 2))))
		     (let ((*print-right-margin* 1))
		       (return-from pprint-linear (pprint-linear s x c a))))
		 (if c z (subseq z 1 (1- lz)))))))
    (write-string z s)
    nil))

(defun pprint-fill (s x &optional (c t) a)
  (let* ((z (write-to-string x))
	 (z (if (not (listp x)) z
	       (let ((lz (length z)))
		 (if c z (subseq z 1 (1- lz)))))))
    (write-string z s)
    nil))

(defun pprint-tabular (s x &optional (c t) a ts)
  (let* ((z (substitute #\Tab #\Space (write-to-string x)))
	 (z (if (not (listp x)) z
	       (let ((lz (length z)))
		 (if c z (subseq z 1 (1- lz)))))))
    (write-string z s)
    nil))

(defun circlep-int (x y z)
  (let ((dz (cdr z)))
    (cond ((null dz) nil)
	  ((eq y dz) t)
	  ((eq y z) (circlep-int x x dz))
	  (t (circlep-int x (cdr y) z)))))

(defmacro circlep (x) `(and (consp ,x) (circlep-int ,x ,x ,x)))

(defmacro pprint-logical-block ((s x &key (prefix "") (per-line-prefix "") (suffix "")) &body body)
  (let ((nx (gensym)) (xx (gensym)) (count (gensym)) (end (gensym)) (eprefix (gensym))
	(epprefix (gensym)) (esuffix (gensym)) (very-end (gensym)))
    `(let ((,count 0) (,nx ,x))
       (macrolet
	((pprint-pop
	  nil
	  '(let ((,xx
		  (cond
		   ((not (listp ,nx)) (write-string ". " ,s) (write ,nx :stream ,s) nil)
		   ((and *print-length* (>= ,count *print-length*)) (write-string "..." ,s))
		   ((and (/= 0 ,count) (circlep ,nx)) (let ((*print-circle* t)) (write ,nx :stream ,s) nil))
		   (t ,nx))))
	     (unless (eq ,xx ,nx) (go ,end))
	     (incf ,count)
	     (pop ,nx)))
	 (pprint-exit-if-list-exhausted
	  nil
	  '(unless ,nx (go ,end)))
	 (ensure-string (x)
	  `(unless (stringp ,x)
	     (specific-error :wrong-type-argument "~S is not of type ~S." ,x 'string))))
	(let ((,eprefix ,prefix)
	      (,esuffix ,suffix)
	      (,epprefix ,per-line-prefix))
	  (ensure-string ,eprefix)
	  (ensure-string ,epprefix)
	  (ensure-string ,esuffix)
	  (let ((si::*print-line-prefix* ,epprefix)
		(si::*prin-level* (1+ si::*prin-level*)))
	    (tagbody
	     (unless (listp ,nx) (write ,nx :stream ,s) (go ,very-end))
	     (when (and *print-level* (> si::*prin-level* *print-level*)) (write-string "#" ,s) (go ,very-end))
	     (when (stringp ,eprefix) (write-string ,eprefix ,s))
	     ,@body
	     ,end
	     (when (stringp ,esuffix) (write-string ,esuffix ,s))
	     ,very-end
	     )))))))
