(in-package :s)

(eval-when
 (eval compile) 
  
 (defun sferr (&rest r) (print r))

 (defun foo-reader (stream subchar)
   (declare (ignore subchar) (optimize (safety 2)))
   (let ((x (read-delimited-list #\} stream)))
     (let (zz z r) 
       (mapc #'(lambda (x) 
	       (cond ((member x '(|enum| |union| |struct| |unsigned|)) (setq zz x))
		     ((not z) (setq z (if zz (list zz x) x)))
		     ((integerp x) (setq r (cons (list z (cadar r) x) (cdr r))))
		     ((eq x '|;|) (setq z nil zz nil))
		     ((push (list z x) r)))) x) 
       (nreverse r))))
 
 (defun |;-reader| (stream subchar)
   (declare (ignore stream subchar) (optimize (safety 2)))
   '|;|)
 
 (defun readtable-h nil
   (si:set-readtable-case *readtable* :preserve)
   (set-macro-character #\{ 'foo-reader)
   (set-macro-character #\; '|;-reader|)
   (set-syntax-from-char #\# #\;)
   (set-syntax-from-char #\} #\))
   (dolist (l '(#\: #\| #\, #\. #\( #\)))
     (set-syntax-from-char l #\Space)))
 
 (defun get-com (f &aux x com td (*readtable* (copy-readtable)))
   
   (readtable-h)
   (let ((s (si::open-int f :input 'character nil nil nil nil :default)))
    (do ((y nil x)(z nil y)) 
	((eq 'eof (setq x (read s nil 'eof))) 
	 (unless (and com td) (sferr "h read error" x))
	 (list com td))
	(when (and (member z '(|struct| |union|)) (consp x)) 
	  (push (list z y x) com))
	(when (eq x '|typedef|) 
	  (push (read-delimited-list #\; s) td)))))
 
 (defun td (k l)
   (let* ((kn (when (symbolp k) (string-upcase (symbol-name k))))
	  (kk (when kn (mktp kn)))
	  (kk (when kk (intern kn :keyword)))
	  (x (car (member k l :key #'(lambda (x) (car (last x)))))))
     (cond (kk)
	   ((not x) k)
	   ((eq (car x) '|unsigned|) (cons (td (cadr x) l) (car x)))
	   ((not (cddr x)) (td (car x) l))
	   (x))))
 
 (defun mrin (f x &key key)
   (mapcan 'identity (maplist #'(lambda (x) (when (funcall f (funcall key (car x))) (list (car x)))) x)))

 (defun slist nil
   
   (let* ((com (get-com "../h/cmpinclude.h"))
	  (td (cadr com))
	  (com (car com))
	  (u (car (member-if #'(lambda (x) (and (eq (car x) '|union|) (eq (cadr x) '|lispunion|))) com)))
	  (u (mrin 'consp (caddr u) :key 'car)))
     (mapcar #'(lambda (x) 
	       (let ((y (car (member-if #'(lambda (z) 
					  (when (consp (car x))
					    (and  (eq (caar x) (car z)) (eq (cadar x) (cadr z))))) com)))) 
		 (list (car x) (cadr x)
		       (mapcar #'(lambda (z) (cons (td (car z) td) (cdr z))) (caddr y))))) u)))
 
 (defun bz (x) (ash 1 (+ x 3)))
 (defun ks (k &aux (x (or (cadr (assoc k +ks+)) +fl+))) (bz x))
 
 (defun bs (y &aux (w y)(k (pop y))(k (if (consp k) (car k) k)))
   (or (cadr y) (ks k)))
 
 (defun sb (c z &aux (q (load-time-value (mapcar 'bz '(0 1 2 3))))) ;FIXME dcomplex +kss+
   (or (car (member (+ (mod c (car q)) z) q :test '<=))
       (sferr "boo" c z)))
 
 (defun cmp-norm-tpp (x) x)

 (defun mtpp (k y &aux (zz (car y))(z (if (consp zz) (car zz) zz))(u (when (consp zz) (eq (cdr zz) '|unsigned|))))
   (cond ((caddr y) (unless u (sferr "bar" k y)) (cmp-norm-tpp `(unsigned-byte ,(1+ (caddr y)))))
	 ((when (keywordp z) (eq k :object)) (mktp z));(get z 'lisp-type))
	 ((mktp k));((get k 'lisp-type))
	 (t)))
 
 (defun pp (y &aux (n (string (cadr y)))) (when (eql #\* (aref n 0)) (list :fixnum (intern (subseq n 1)))))
 
 (defun m& (x m) (if m `(& ,x ,m) x))
 (defun m<< (x s) (if (zerop s) x `(<< ,x ,s)))
 (defun m>> (x s) (if (zerop s) x `(>> ,x ,s)))
 (defun m\| (x m) (if m `(\| ,x ,m) x))
 (defun mm (m) (if (zerop (logand (ash 1 (1- fixnum-length)) m)) m (- m (ash 1 fixnum-length))))
 (defun m+ (a o) (if (zerop o) a `(c+ ,a ,o)))
 
 
 (defun gk (b y &aux (k (car y))(k (if (consp k) (car k) k)))
   (cond ((< b (ks k)) (or (car (rassoc b +ks+ :key #'(lambda (x) (bz (car x))))) (baboon)))
	 ((car (assoc k +ks+)))
	 ((keywordp k) :object)
	 (:fixnum)))
 
(defun mktp (z &aux (z (string-upcase z))) (or (find-symbol z :cl) (get (find-symbol z :keyword) 'lisp-type)))

(defun btp (z) (or (cmp-norm-tpp (mktp z)) t))

(defun idefun (args &aux (n (pop args)))
  `(progn
     (defun ,n ,@args)
     (si::putprop ',n t 'compiler::cmp-inline)
     (export ',n)))

(defun afn (n tp body &optional ytp) 
  (idefun `(,n (x ,@(when ytp `(y))) 
	       (declare (optimize (safety 1)))
	       ,@(unless (eq tp t) `((check-type x ,tp))),@(when ytp `((check-type y ,ytp)))
	       ,@body)))

 (defun gbe (f tp o s sz b a)  `((the ,tp ,(m& (m>> `(,f ,a ,o nil nil) s) (when (< (+ s sz) b) (mm (1- (ash 1 sz))))))))
 (defun sbe (f    o s sz b a) 
   `((,f ,a ,o t ,(m\| (m<< 'y s) (when (< sz b) `(& (,f ,a ,o nil nil) ,(~ (mm (ash (1- (ash 1 sz)) s))))))) y))
 
 (defun fnk (k) (intern (string-concatenate "*" (string k))))
 
 (defun mnn (r z f) (intern (string-upcase (string-concatenate r z "-" f))))

 (defun strcat (&rest r) (apply 'si::string-concatenate (mapcar 'string-downcase r)))

 (defun mn (z p f &aux (f (strcat f))) (list (mnn "C-" z f) (mnn "C-SET-" z f)))
 
 (defun afn2 (z p c sz y &aux (b (sb c sz))(k (gk b y))(f (fnk k))(rtp (mtpp k y))(tp (btp z))(nl (mn z p (cadr y))))
   (multiple-value-bind
    (o s)
    (truncate c b)
    (multiple-value-bind
     (bo s)
     (truncate s 8)
     (let ((a (m+ `(address x) bo)))
       (list (afn (pop nl) tp (gbe f rtp o s sz b a))
	     (afn (car nl) tp (sbe f o s sz b a) rtp))))))
 
 (defun nmf (x y &aux (p (strcat (cadr x) "_"))(f (strcat (cadr y)))(s (string= p (subseq f 0 (min (length f) (length p))))))
   (when s (rplaca (cdr y) (intern (subseq f (length p)))) t))

 (defun fp (c x y) 
   (cond ((nmf x y) x)
	 ((< c fixnum-length) (cons '(|struct| |t|) (cons '|t| (cddr x))))))
 
 (defun mrd (x &key test key)
   (mapcan 'identity
	  (maplist #'(lambda (x) (unless (member (funcall key (car x)) (cdr x) :test test :key key) (list (car x)))) x)))

 (defun macc nil 
   (mrd
    (mapcan #'(lambda (x &aux (c 0))
	      (mapcan #'(lambda (y &aux (y (or (pp y) y))(sz (bs y))(c (prog1 c (incf c sz)))(x (fp c x y)))
			(when x `((,(cadar x) ,(cadr x) ,c ,sz ,y)))) (caddr x))) (slist)) :test 'equal :key 'cddr)))

#.`(progn ,@(mapcan #'(lambda (x) (apply 'afn2 x)) (macc)))


;;FIXME these automatic, *c-stdesig-sdself, etc.
#.(idefun `(stdesig-self (s i) 
			 (declare (optimize (safety 1)))
			 (check-type i seqind)
			 (*char (c-stdesig-sdself s) i nil nil)))
#.(idefun `(set-stdesig-self (s i j) 
			     (declare (optimize (safety 1)))
			     (check-type i seqind)
			     (check-type j seqind)
			     (*char (c-stdesig-sdself s) i t j)))
#.(idefun `(function-env (fun i) 
			 (declare (optimize (safety 1)))
			 (check-type i seqind)
			 (*object (c-function-env fun) i nil nil)))
#.(idefun `(package-internal (p i) 
			     (declare (optimize (safety 1)))
			     (check-type i seqind)
			     (*object (c-package-internal p) i nil nil)))
#.(idefun `(package-external (p i) 
			     (declare (optimize (safety 1)))
			     (check-type i seqind)
			     (*object (c-package-external p) i nil nil)))
#.(idefun `(hashtable-self (h i) 
			   (declare (optimize (safety 1)))
			   (check-type i seqind)
			   (c+ (c-hashtable-self h) (<< i #.(integer-length (/ si::fixnum-length si::char-length))))))
#.(idefun `(array-dims (s i) 
		       (declare (optimize (safety 1)))
		       (check-type i seqind)
		       (the seqind (*fixnum (c-array-dims s) i nil nil))))
#.(idefun `(set-array-dims (s i j)
			   (declare (optimize (safety 1)))
			   (check-type i seqind)
			   (check-type j seqind)
			   (the seqind (*fixnum (c-array-dims s) i t j))))



;; #.(idefun `(funcallable-symbol-p 
;; 	    (s)
;; 	    (and (symbolp s)
;; 		 (/= (si::address (c-symbol-gfdef s)) 0)
;; 		 (= (c-symbol-mflag s) 0)
;; 		 (= (c-symbol-sfdef s) (si::address nil)))))

;; #.(idefun `(fsf
;; 	    (s)
;; 	    (declare (optimize (safety 1)))
;; 	    (assert (funcallable-symbol-p s));  (check-type s funcallable-symbol); FIXME
;; 	    (the function (c-symbol-gfdef s))));FIXME
