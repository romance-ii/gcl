(in-package 'compiler)

(eval-when
 (compile) 

 (defun foo-reader (stream subchar)
   (declare (ignore subchar) (optimize (safety 2)))
   (let ((x (read-delimited-list #\} stream)))
     (let (zz z r) 
       (mapc (lambda (x) 
	       (cond ((member x '(|enum| |struct| |unsigned|)) (setq zz x))
		     ((not z) (setq z (if zz (list zz x) x)))
		     ((integerp x) (setq r (cons (list z (cadar r) x) (cdr r))))
		     ((eq x '|;|) (setq z nil zz nil))
		     ((push (list z x) r)))) x) 
       (nreverse r))))
 
 (defun |;-reader| (stream subchar)
   (declare (ignore stream subchar) (optimize (safety 2)))
   '|;|)
 
 
 
 (defun readtable-h nil
   (setf (readtable-case *readtable*) :preserve)
   (set-macro-character #\{ 'foo-reader)
   (set-macro-character #\; '|;-reader|)
   (set-syntax-from-char #\# #\;)
   (set-syntax-from-char #\} #\))
   (dolist (l (coerce ":|,.()" 'list))
     (set-syntax-from-char l #\Space)))
 
 (defun get-com (f &aux x com td (*readtable* (copy-readtable)))
   
   (readtable-h)
   (with-input-from-string
    (s (si::file-to-string f))
    (do ((y nil x)(z nil y)) 
	((eq 'eof (setq x (read s nil 'eof))) 
	 (unless (and com td) (error "h read error"))
	 (list com td))
	(when (and (member z '(|struct| |union|)) (consp x)) 
	  (push (list z y x) com))
	(when (eq x '|typedef|) 
	  (push (read-delimited-list #\; s) td)))))
 
 (defun td (k l)
   (let* ((kn (when (symbolp k) (symbol-name k)))
	  (kk (when kn (find-symbol (string-upcase kn) 'keyword)))
	  (kk (when (get kk 'lisp-type) kk))
	  (x (car (member k l :key (lambda (x) (car (last x)))))))
     (cond (kk)
	   ((not x) k)
	   ((eq (car x) '|unsigned|) (cons (td (cadr x) l) (car x)))
	   ((not (cddr x)) (td (car x) l))
	   (x))))
 
 (defun slist nil
   
   (let* ((com (get-com "../h/cmpinclude.h"))
	  (td (cadr com))
	  (com (car com))
	  (u (car (member-if (lambda (x) (and (eq (car x) '|union|) (eq (cadr x) '|lispunion|))) com))))
     (mapcar (lambda (x) 
	       (let ((y (car (member-if (lambda (z) 
					  (and (eq (caar x) (car z)) (eq (cadar x) (cadr z)))) com)))) 
		 (list (car x) (cadr x)
		       (mapcar (lambda (z) (cons (td (car z) td) (cdr z))) (caddr y))))) (caddr u))))
 
 (defun ft (x)
   (let* ((x (symbol-name x))
	  (u (search "_" x))
	  (x (if u (subseq x 0 u) x))
	  (x (find-symbol (string-upcase x) 'compiler)))
     (unless (type>= (cmp-norm-tp x) '*) x)))
 
 (defun csd (b sn x)
   (let* ((z (car x))
	  (ct (consp z))
	  (y (when ct (cdr z)))
	  (z (if ct (car z) z)))
     (when (keywordp z)
       (unless (eq (cadr x) '|pad|)
	 (let* ((e (string (cadr x)))
		(s (when (eql #\* (aref e 0)) `(i)))
		(e (if s (subseq e 1) e))
		(es (search "_" e))
		(ee (if es (subseq e (1+ es)) e))
		(n (intern (string-upcase (strcat (symbol-name b) "-" ee)) 'c))
		(ns (intern (string-upcase (strcat "set-" n)) 'c))
		(f `(el ,z x (cstr ,(string sn)) (cstr ,e) ,@s))
		(fp f)
		(i (third x))
		(tt1 (when i (if y `(integer 0 (,(ash 1 i)))
			       `(integer ,(- (ash 1 (1- i))) (,(ash 1 (1- i)))))))
		(tt1 (or tt1 (get z 'lisp-type)))
		(f (if tt1 `(the ,tt1 ,f) f))
		(fs (sublis (list (cons fp `(set-el y ,@(cdr fp)))) f))
		(v (member e '("FIXVAL" "LFVAL" "SFVAL" "CODE") :test 'equal))
		(fs (unless v fs));could be an immediate fixnum, unsettable
		(f (if v `x f)));use default coersion
	   `(progn (eval-when (compile load eval) (remprop ',n 'compiler::lfun))
		   (defun ,n (x ,@s) 
		     (declare (optimize (safety 2)))
		     ,@(when s `((declare (seqind i))))
		     (check-type x ,b)
		     ,f)
		   ,@(when fs
		       `((defun ,ns (y x ,@s) 
			   (declare (optimize (safety 2)) (ignorable y))
			   ,@(when s `((declare (seqind i))))
			   (check-type x ,b)
			   ,@(when tt1 `((check-type y ,tt1)))
			   ,fs)))))))))
 
 (defun cs (def)
   (let ((b (ft (cadar def))))
     (when b
       (let* ((sn (cadr def))
	      (def (caddr def))
	      (def (if (eq 'CONS b) def (nthcdr 7 def))))
	 `(progn
	    ,@(mapcar (lambda (x) (csd b sn x)) def))))))
 
 (defmacro bar nil
   `(progn
      ,@(remove-if-not 'identity (mapcar 'cs (slist))))))
 
(bar)
