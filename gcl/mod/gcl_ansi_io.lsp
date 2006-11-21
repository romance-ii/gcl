(in-package 'lisp)
(export '(pprint-linear
	  pprint-fill
	  pprint-tabular
	  pprint-logical-block
	  pprint-pop pprint-indent pprint-newline pprint-tab 
	  pprint-exit-if-list-exhausted))
(in-package 'si)

;placeholder
(defun pprint-tab (&rest r) nil)

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
  (declare (ignore a))
  (let* ((z (write-to-string x))
	 (z (if (not (listp x)) z
	       (let ((lz (length z)))
		 (if c z (subseq z 1 (1- lz)))))))
    (write-string z s)
    nil))

(defun tabify (ts q &optional r (j ts))
  (cond ((not q) (nreverse r))
	((member (car q) '(#\( #\))) (tabify ts (cdr q) (cons (car q) r) j))
	((eql (car q) #\Space)
	 (let ((z (member #\Space q :test-not 'eql)))
	   (dotimes (i (- j (- (length q) (length z)))) (push #\Space r))
	   (tabify ts z (cons (car q) r))))
	((tabify ts (cdr q) (cons (car q) r) (let ((w (1- j))) (if (= w 0) ts w))))))

(defun pprint-tabular (s x &optional (c t) a (ts 16))
  (declare (ignore a))
  (let* ((z (write-to-string x))
	 (z (if (not (listp x)) z
             (let* ((z (coerce (tabify ts (coerce z 'list)) 'string))
                    (lz (length z)))
              (if c z (subseq z 1 (1- lz)))))))
    (write-string z s)
    nil))

(defun circlep-int (x y)
  (cond ((or (atom x) (atom y)) nil)
	((eq x y) t)
	((eq x (cdr y)) t)
	((atom (cdr y)) nil)
	((circlep-int (cdr x) (cddr y)))))

(defmacro circlep (x) `(and (consp ,x) (circlep-int ,x (cdr ,x))))

(defun pprint-indent (&rest r)   
  (declare (ignore r))
  nil)
(defun pprint-newline (&rest r) 
  (declare (ignore r))
  nil)

(defmacro pprint-logical-block ((s x &key (prefix "") (per-line-prefix "") (suffix "")) &body body)
  (declare (optimize (safety 1)))
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
	 (pprint-indent (&rest r))
	 (pprint-newline 
	  (a &optional (b nil bp)) 
	  (when (eq a :mandatory)
	    (if bp `(write #\Newline :stream ,b)
	      `(write #\Newline))))
	 (pprint-exit-if-list-exhausted
	  nil
	  '(unless ,nx (go ,end)))
	 (ensure-string (x)
	  `(unless (stringp ,x)
	     (error 'type-error :datum ,x :expected-type 'string))))
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
