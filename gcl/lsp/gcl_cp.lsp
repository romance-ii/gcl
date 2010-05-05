;(in-package 'compiler)

(eval-when
 (compile) 

 (defun foo-reader (stream subchar)
   (declare (ignore subchar) (optimize (safety 2)))
   (let ((x (read-delimited-list #\} stream)))
     (let (zz z r) 
       (mapc (lambda (x) 
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
	  (kk (when (get kk 'compiler::lisp-type) kk))
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
	  (u (car (member-if (lambda (x) (and (eq (car x) '|union|) (eq (cadr x) '|lispunion|))) com)))
	  (u (remove-if-not 'consp (caddr u) :key 'car)))
     (mapcar (lambda (x) 
	       (let ((y (car (member-if (lambda (z) 
					  (when (consp (car x))
					    (and  (eq (caar x) (car z)) (eq (cadar x) (cadr z))))) com)))) 
		 (list (car x) (cadr x)
		       (mapcar (lambda (z) (cons (td (car z) td) (cdr z))) (caddr y))))) u)))
 
 (defun ft (x)
   (let* ((x (symbol-name x))
	  (u (search "_" x))
	  (x (if u (subseq x 0 u) x))
	  (x (find-symbol (string-upcase x) 'compiler)))
     (unless (compiler::type>= (compiler::cmp-norm-tp x) '*) x)))
 
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
		(n (intern (string-upcase (compiler::strcat (symbol-name b) "-" ee)) 'c))
		(ns (intern (string-upcase (compiler::strcat "set-" n)) 'c))
		(zz (if (member z '(:integer :real :plist :pack :string :structure :keyword :direl :symbol)) :object z))
		(ss (concatenate 'string "->"  (string sn) "." (string e) (if s "[" "")))
		(f `(compiler::lit ,zz (compiler::unbox :object x) (compiler::cstr ,ss) 
				   ,@(when s `((compiler::unbox :fixnum i)(compiler::cstr "]")))));FIXME
		(fp f)
		(i (third x))
		(tt1 (when i (if y `(integer 0 (,(ash 1 i)))
			       `(integer ,(- (ash 1 (1- i))) (,(ash 1 (1- i)))))))
		(tt1 (or tt1 (get z 'compiler::lisp-type)))
		(f (if tt1 `(the ,tt1 ,f) f))
		(fs (sublis
		     (list (cons fp (append `(compiler::lit ,zz (compiler::cstr "("))
					    (cddr fp)
					    `((compiler::cstr "=")(compiler::unbox ,zz y)(compiler::cstr ")"))))) f))
		(v (member e '("FIXVAL" "LFVAL" "SFVAL" "CODE") :test 'equal))
		(fs (unless v fs));could be an immediate fixnum, unsettable
		(f (if v `x f)));use default coersion
	   `(progn (eval-when (compile load eval) (remprop ',n 'compiler::lfun))
		   (defun ,n (x ,@s) 
		     (declare (optimize (safety 1)))
		     ,@(when s `((declare (seqind i))))
		     (check-type x ,b)
		     ,f)
		   ,@(when fs
		       `((defun ,ns (y x ,@s) 
			   (declare (optimize (safety 1)) (ignorable y))
			   ,@(when s `((declare (seqind i))))
			   (check-type x ,b)
			   ,@(when tt1 `((check-type y ,tt1)))
			   ,fs)))))))))
 
 (defun cs (def d)
   (let ((b (ft (cadar def))))
     (when b
       (let* ((sn (cadr def))
	      (def (caddr def))
;	      (def (set-difference def d :test 'equal));No early set-difference FIXME
	      (def (remove-if (lambda (x) (member x d :test 'equal)) def)))
	 `(progn
	    ,@(mapcar (lambda (x) (csd b sn x)) def))))))
 
 (defmacro bar nil
   `(progn
      ,@(let* ((s (slist))
	       (d (caddar (member '(|struct| |dummy|) s :test 'equal :key 'car))))
	  (remove-if-not 'identity (mapcar (lambda (x) (cs x d)) s))))))
 
(bar)

(in-package 'compiler)

(defun c::hashtable-self (x i)
  (declare (optimize (safety 1)))
  (declare (seqind i))
  (check-type x hash-table)
  (the fixnum;FIXME
       (lit :fixnum (cstr "(fixnum)(") (unbox :object x) 
	    (cstr "->ht.ht_self+") (unbox :fixnum i) (cstr ")"))))

(defun c::gethash-int (x y)
  (declare (optimize (safety 1)))
  (check-type y hash-table)
  (the fixnum;FIXME
       (lit :fixnum (cstr "(fixnum)gethash(") (unbox :object x) (cstr ",") (unbox :object y) (cstr ")"))))

(defun c::sxhash-int (x)
  (declare (optimize (safety 1)))
  (the fixnum;FIXME
       (lit :fixnum (cstr "ihash_equal1(") (unbox :object x) (cstr ",0)"))))

(defun c::close-int (x)
  (declare (optimize (safety 1)))
  (check-type x stream)
  (the fixnum;FIXME
       (lit :fixnum (cstr "(close_stream(") (unbox :object x) (cstr "),1)"))))

(defun c::read-object-non-recursive (x)
  (declare (optimize (safety 1)))
  (check-type x stream)
  (lit :object (cstr "read_object_non_recursive(") (unbox :object x) (cstr ")")))

(defun c::read-object-recursive (x)
  (declare (optimize (safety 1)))
  (check-type x stream)
  (lit :object (cstr "read_object_non_recursive(") (unbox :object x) (cstr ")")))

(defun c::htent-value (x)
  (declare (optimize (safety 1)))
  (check-type x fixnum)
  (lit :object (cstr "((struct htent *)" ) (unbox :fixnum x) (cstr ")->hte_value")))

(defun c::htent-key (x)
  (declare (optimize (safety 1)))
  (check-type x fixnum)
  (lit :object (cstr "((struct htent *)" ) (unbox :fixnum x) (cstr ")->hte_key")))

(defun c::set-htent-value (y x)
  (declare (optimize (safety 1)))
  (check-type x fixnum)
  (lit :object (cstr "((struct htent *)" ) (unbox :fixnum x) (cstr ")->hte_value=")
       (unbox :object y)))

(defun c::set-htent-key (y x)
  (declare (optimize (safety 1)))
  (check-type x fixnum)
  (lit :object (cstr "((struct htent *)" ) (unbox :fixnum x) (cstr ")->hte_key=")
       (unbox :object y)))


(defun sf (s)
  (declare (optimize (safety 1)))
  (check-type s symbol)
  (or (let ((x (c::symbol-sfdef s)))
	(unless (= x (si::address nil)) (cons 'special x)))
      (let ((x (c::symbol-gfdef s)))
	(when (= 0 (si::address x))
	  (error 'undefined-function s))
	(if (= (c::symbol-mflag s) 0) x (cons 'macro x)))))

(defun funcallable-symbol-p (s)
  (and (symbolp s)
       (/= (si::address (c::symbol-gfdef s)) 0)
       (= (c::symbol-mflag s) 0)
       (= (c::symbol-sfdef s) (si::address nil))))
(setf (get 'funcallable-symbol-p 'cmp-inline) t)

(defun fsf (s)
  (declare (optimize (safety 1)))
  (check-type s funcallable-symbol)
  (the function (c::symbol-gfdef s)));FIXME
(setf (get 'fsf 'cmp-inline) t)

(defun tt3 (x) (lit :fixnum (cstr "fto(") (unbox :object x) (cstr ")")))
(si::putprop 'tt3 t 'cmp-inline)
(defun tt30 (x) (lit :boolean (cstr "!fto0(") (unbox :object x) (cstr ")")))
(si::putprop 'tt30 t 'cmp-inline)

(defun fn-env (x) ;FIXME expose pointers above, rename function type to type-spec
  (declare (optimize (safety 1)))
  (typecase x
   (new-compiled-function
    (let ((a (lit :fixnum (cstr "(fixnum)") (unbox :object x) (cstr "->fun.fun_env"))))
      (unless (= 0 a)
	(c::function-env x 0))))))

;; (defun fboundp (funid)
;;   (declare (optimize (safety 1)))
;;   (check-type funid funid-sym)
;;   (let ((sym (funid-sym funid)))
;;     (or (special-form-p sym)
;; 	(/= 0 (si::address (c::symbol-gfdef sym))))))
;; (deftype fbound nil `(and symbol (satisfies fboundp)))
;; (setf (get 'fbound 'si::type-predicate) 'fboundp)
;; (setf (get 'fboundp 'si::predicate-type) 'fbound)


;; (defun special-form-p (sym)
;;   (declare (optimize (safety 1)))
;;   (check-type sym symbol)
;;   (/= (si::address nil) (c::symbol-sfdef sym)))
;; (deftype special-form nil `(satisfies special-form-p))

;; (defun global-macro-p (sym)
;;   (declare (optimize (safety 1)))
;;   (check-type sym symbol)
;;   (/= 0 (c::symbol-mflag sym)))
;; (deftype global-macro nil `(satisfies global-macro-p))

;; (defun symbol-function1 (s)
;;   (declare (optimize (safety 1)))
;;   (check-type s symbol)
;;   (typecase
;;    s
;;    (special-form (cons 'special (c::symbol-sfdef s)))
;;    (global-macro (cons 'macro   (c::symbol-gfdef s)))
;;    (otherwise (unless (fboundp s) (error 'undefined-function s)) (c::symbol-gfdef s))))
		 
;;   (or (let ((x (c::symbol-sfdef s)))
;; 	(unless (= x (si::address nil)) (cons 'special x)))
;;       (let ((x (c::symbol-gfdef s)))
;; 	(when (= 0 (si::address x))
;; 	  (error 'undefined-function s))
;; 	(if (= (c::symbol-mflag s) 0) x (cons 'macro x)))))
