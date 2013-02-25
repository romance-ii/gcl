;; -*-Lisp-*-

(in-package :si);FIXME this belongs in :compiler

(export '(*split-files* *sig-discovery* export-call-struct compress-fle))

(defstruct (call (:type list) (:constructor make-call))
  sig callees src file props name)
(defvar *cmr* nil)
(defvar *keep-state* nil)
(defvar *sig-discovery* nil)
(defvar *split-files* nil)

(defun break-state (sym x)
  (format t "Breaking state function ~s due to definition of ~s~%" x sym)
  (let ((o (old-src x)))
    (mapc (lambda (x) (remprop x 'state-function)) (car o))
    (mapc (lambda (x y) (unless (eq sym x) (eval `(defun ,x ,@(cdr y))))) (car o) (cadr o))
    (mapc (lambda (y) (push y *cmr*) (add-recompile y 'state-function (sig x) nil)) (car o)) 
    (fmakunbound x)
    (unintern x)))

(defconstant +et+ (mapcar (lambda (x) (cons (cmp-norm-tp x) x)) 
			  '(list cons proper-list proper-sequence sequence boolean null true array vector number immfix bfix bignum integer
				 ratio short-float long-float float real number pathname hash-table function)))

(defun ex-type (tp) (or (cdr (assoc tp +et+)) tp))
(defun ex-sig (sig) (list (mapcar 'ex-type (car sig)) (ex-type (cadr sig))))
(defun unex-type (tp) (or (car (rassoc tp +et+)) tp))
(defun unex-sig (sig) (list (mapcar 'unex-type (car sig)) (unex-type (cadr sig))))

(defun export-call-struct (l)
  `(apply 'make-function-plist ',(ex-sig (pop l)) ',(pop l) ,(apply 'compress-fle (pop l)) ',l))

(defvar *sig-discovery-props* nil)

(defun symbol-function-plist (sym &aux (fun (symbol-to-function sym)))
  (when fun (c-function-plist fun)))

(defun sym-plist (sym)
  (or (cdr (assoc sym *sig-discovery-props*)) (symbol-function-plist sym)))
				  
(defun needs-recompile (sym)
  (let* ((plist (sym-plist sym))
	 (sig (pop plist))
	 (callees (car plist)))
    (mapc (lambda (x &aux (s (car x)) (cmp-sig (cdr x))(act-sig (sig s))) 
	    (unless (eq sym s)
	      (when act-sig
		(unless (eq cmp-sig act-sig)
		  (return-from needs-recompile (list (list sym s cmp-sig act-sig))))))) callees)
    nil))

(defun same-file-all-callees (x y fn)
;  (let ((z (remove-if-not (lambda (x) (equal (file x) fn)) (callees x)))) ;FIXME remove inline
  (let (z)
    (dolist (l (callees x))
      (when (equal fn (file l));FIXME eq
	(push l z)))
    (do ((l (set-difference z y) (cdr l))
	 (r (union z y) (same-file-all-callees (car l) r fn)))
	((endp l) r))))

(defun same-file-all-callers (x y fn)
;  (let ((z (remove-if-not (lambda (x) (equal (file x) fn)) (callers x))));FIXME remove inline
  (let (z)
    (dolist (l (callers x))
      (when (equal fn (file l));FIXME eq
	(push l z)))
    (do ((l (set-difference z y) (cdr l))
	 (r (union z y) (same-file-all-callers (car l) r fn)))
	((endp l) r))))

;; (defun all-callees (x y)
;;   (let ((z (gethash x *ach*)))
;;     (if z (union z y)
;;       (let ((z (call-callees (gethash x *call-hash-table*))))
;; 	(do ((l (set-difference z y) (cdr l))
;; 	     (r (union z y) (all-callees (car l) r)))
;; 	    ((endp l) 
;; 	     (unless (intersection z y) (setf (gethash x *ach*) (set-difference r y)))
;; 	     r))))))

;; (defun all-callers (x y)
;;   (let ((z (gethash x *acr*)))
;;     (if z (union z y)
;;       (let ((z (call-callers (gethash x *call-hash-table*))))
;; 	(do ((l (set-difference z y) (cdr l))
;; 	     (r (union z y) (all-callers (car l) r)))
;; 	    ((endp l) 
;; 	     (unless (intersection z y) (setf (gethash x *acr*) (set-difference r y)))
;; 	     r))))))

(defun nsyms (n &optional syms)
  (declare (seqind n))
  (cond ((= n 0) (nreverse syms))
	((nsyms (1- n) (cons (gensym) syms)))))

(defun max-types (sigs &optional res)
  (cond ((not res) (max-types (cdr sigs) (ldiff (caar sigs) (member '* (caar sigs)))))
	((not sigs) res)
	((max-types (cdr sigs) 
		    (let ((z (ldiff (caar sigs) (member '* (caar sigs)))))
		      (append
		       (mapcar (lambda (x y) (or (not (equal x y)) x)) z res)
		     (early-nthcdr (length z) res)))))))

(defun early-nthcdr (i x)
  (declare (seqind i))
  (cond ((= 0 i) x)
	((early-nthcdr (1- i) (cdr x)))))

(defun old-src (stfn &optional src syms sts srcs)
  (cond (stfn (old-src nil (function-src stfn) syms sts srcs))
	((atom src) nil)
	((eq (car src) 'labels)
	 (list (mapcar 'car (cadr src)) 
	       (mapcar (lambda (x) (if (eq (caadr x) 'funcall) (cadadr x) (caadr x))) (cddr (caddr src)))))
	((or (old-src stfn (car src) syms sts srcs) (old-src stfn (cdr src) syms sts srcs)))))

(defun lambda-vars (ll)
  (remove '&optional (mapcar (lambda (x) (if (consp x) (car x) x)) ll)))

(defun inlinef (n syms sts fns)
    (unless (member-if (lambda (x) (intersection '(&rest &key &aux &allow-other-keys) (cadr x))) fns)
      (let* ((lsst (1- (length sts)))
	     (tps (max-types (mapcar 'sig syms)))
	     (min (reduce 
		   'min 
		   (mapcar (lambda (x) (length (ldiff (cadr x) (member '&optional (cadr x))))) fns)
		   :initial-value 64));FIXME
	     (max (reduce 'max (mapcar (lambda (x) (length (lambda-vars (cadr x)))) fns) :initial-value 0))
	     (reqs (nsyms min))
	     (opts (nsyms (- max min)))
	     (ll (append reqs (when (> max min) (cons '&optional opts))))
	     (all (reverse (append reqs opts))))
	`(defun ,n ,(cons 'state ll)
	   (declare (fixnum state) ,@(mapcar 'list tps reqs))
	   ,@(let (d (z (cddr (car fns)))) 
	       (when (stringp (car z)) (pop z))
	       (do nil ((or (not z) (not (consp (car z))) (not (eq (caar z) 'declare))) (nreverse d)) 
		   (let ((q (pop z)))
		     (when (and (consp (cadr q)) (eq 'optimize (caadr q))) 
		       (push q d)))))

	   (labels
	    ,(mapcan (lambda (x y z)
		       `((,x ,(cadr y) (,n ,z ,@(lambda-vars (cadr y)))))) syms fns sts)
	    (case state
		  ,@(mapcar
		     (lambda (x y)
		       `(,(if (= x lsst) 'otherwise x) 
			 (funcall ,y ,@(reverse (early-nthcdr (- max (length (lambda-vars (cadr y)))) all)))))
		     sts fns)))))))

(defun sig (x) (let ((h (call x))) (when h (call-sig h))))
(defun props (x) (let ((h (call x))) (when h (call-props h))))
(defun src (x) (let ((h (call x))) (when h (call-src h))))
(defun file (x) (let ((h (call x))) (when h (call-file h))))
(defun name (x) (let ((h (call x))) (when h (call-name h))))
(defun callees (x) (let ((h (call x))) (when h (call-callees h))))
(defun callers (x) (get x 'callers))

;; (defun *s (x) 
;;   (let ((p (find-package x)))
;;     (remove-if-not
;;      (lambda (y) (eq (symbol-package y) p)) 
;;      (let (r) 
;;        (maphash (lambda (x y) (when (eq '* (cadr (call-sig y))) (push x r))) *call-hash-table*)
;;        r))))

(defun mutual-recursion-peers (sym)
  (unless (or (get sym 'state-function) (get sym 'mutual-recursion-group))
    (let ((y (sig sym)))
      (when (eq '* (cadr y))
	(let ((e (same-file-all-callees sym nil (file sym)))
	      (r (same-file-all-callers sym nil (file sym))))
	  (remove-if-not
	   (lambda (x) 
	     (and (eq (symbol-package x) (symbol-package sym))
		  (let ((h (call x)))
		    (when h (eq '* (cadr (call-sig h)))))))
	   (intersection e r)))))))

;(defun mutual-recursion-peers (sym)
;  (unless (or (get sym 'state-function) (get sym 'mutual-recursion-group))
;    (let ((y (sig sym)))
;      (when (eq '* (cadr y)) 
;	(let* ((e (same-file-all-callees sym nil (file sym)))
;	       (r (same-file-all-callers sym nil (file sym)))
;	       (i (intersection e r))
;	       (i1 (remove-if-not (lambda (x) (get x 'mutual-recursion-group)) i))
;	       (i2 (set-difference i i1))
;	       (i (remove-duplicates (union (mapcan (lambda (x) (list (get x 'mutual-recursion-group))) i1) i2))))
;	  (mapc (lambda (x) (break-state x x)) i1)
;	  (remove-if-not (lambda (x) (eq '* (cadr (sig x)))) i))))))

;	  (remove-if (lambda (x) (get x 'mutual-recursion-group))
;		     (remove-if-not (lambda (x) (eq '* (cadr (sig x)))) i)))))))

(defun convert-to-state (sym)
  (let ((syms (mutual-recursion-peers sym)))
    (when (and (remove sym syms) (member sym syms))
      (let* ((fns (mapcar 'function-src syms))
	     (n (intern (symbol-name (gensym (symbol-name sym))) (symbol-package sym)))
	     (*keep-state* n)
	     (sts (let (sts) (dotimes (i (length syms) (nreverse sts)) (push i sts))))
	     (ns (inlinef n syms sts fns)))
	(when ns
	  (eval ns)
	  (mapc (lambda (x y z) (let ((z (cadr z))) (eval `(defun ,x ,z (,n ,y ,@(lambda-vars z)))))) syms sts fns)
	  (mapc (lambda (x) (putprop x n 'state-function)) syms)
	  (dolist (l syms) (add-hash l nil (list (list n)) nil nil))
	  (putprop n syms 'mutual-recursion-group)
	  (add-recompile n 'mutual-recursion nil nil)
	  n)))))
    
(defun temp-prefix nil
  (concatenate 'string
	       *tmp-dir*
	       "gazonk_"
	       (write-to-string (let ((p (getpid))) (if (>= p 0) p (- p))))
	       "_"));FIXME

(defun compiler-state-fns nil
  (let ((p (find-package "COMPILER")))
    (when p
      (do-symbols 
       (s p)
       (when (member s *cmr*)
	 (let* ((x (convert-to-state s))(*keep-state* x))
	   (when x
	     (compile x)
	     (mapc 'compile (get x 'mutual-recursion-group)))))))))

(defun dead-code (ps &aux r)
  (let ((p (find-package ps)))
    (when p
      (do-symbols
       (s p r)
       (when (fboundp s)
	 (unless (macro-function s)
	   (multiple-value-bind
	    (s k)
	    (find-symbol (symbol-name s) p)
	    (when (eq k :internal)
	      (unless (get s 'callers)
		(push s r))))))))))


(defun do-recomp (&aux r *sig-discovery-props* *compile-verbose*)
  (labels ((d (&aux (*sig-discovery* t)) (when (mapc (lambda (x) (compile (car x))) (mapcan 'needs-recompile r)) (d))))
	  (do-all-symbols (s) (push s r))(d)
	  (let* ((fl (remove-duplicates (mapcar (lambda (x) (file (car x))) *sig-discovery-props*) :test 'string=))
		 (fl (set-difference fl '("pcl" "clcs_install") :test (lambda (x y) (search y x)))))
	    (make-package :user :use '(:cl-user))
	    (make-package :lisp :use '(:cl))
	    (compiler::cdebug)
	    (mapc 'compile-file (remove nil fl)))))

(defun do-recompile (&optional (pn nil pnp))

  (unless *disable-recompile*

    (let ((*disable-recompile* t) rfns)

      (do nil ((and (not *cmr*) (= (length *needs-recompile*) 0)) (setq rfns (nreverse rfns)))

	  (when (= 0 (length *needs-recompile*)) 
	    (if (and pnp (not pn)) 
		(setq *cmr* nil);no new file in which to place the generated state functions
	      (do nil ((not *cmr*)) (convert-to-state (pop *cmr*)))))

	  (unless (= 0 (length *needs-recompile*))

	    (sort *needs-recompile*
		  (lambda (x y) (member (car x) (callees (car y)))))

	    (map nil (lambda (fn)
		       (when (eq (cadr fn) 'mutual-recursion)
			 (format t "Mutual recursion detected: ~s, recompiling ~s~%" 
				 (get (car fn) 'mutual-recursion-group) (car fn)))) *needs-recompile*)

	    (format t "Pass1 signature discovery on ~s functions ...~%" (length *needs-recompile*))

	    (let (fns)

	      (dolist (i *needs-recompile*)
		(let ((fn (car i)))
		  (pushnew fn rfns)
		  (push fn fns)))

	      (let ((*sig-discovery* t)(*compile-verbose* nil)) 
		(dolist (fn (nreverse fns))
		  (compile fn))))))

      (if (and pnp (not pn))

	  (let (files);FIXME mutual-recursion fns somewhere
	    (dolist (l rfns)
	      (let ((file (file l))) 
		(when file
		  (unless (or (search "pcl_boot" file);FIXME
			      (search "cmpmain" file)
			      (search "clcs_install" file))
		    (pushnew file files :test 'string=)))))
	    (when files (format t "Updating original source files ~s~%" files))
	    (dolist (l files)
	      (when (probe-file l) (compile-file l :system-p t :c-file t :h-file t :data-file t))))
	
	(when rfns
	  (with-temp-file
	      (s tpn) ((temp-prefix) "lsp")
	      (declare (ignore tpn))
	      (unless pnp (setq pn s))
	      (format t "Compiling and loading new source in ~s~%" pn)
	      (with-open-file 
	       (f pn :direction :output :if-exists :append :if-does-not-exist :create)
	       (with-compile-file-syntax
		(dolist (l rfns)
		  (prin1 `(defun ,l ,@(cdr (function-src l))) f)
		  (dolist (p '(state-function mutual-recursion-group))
		    (let ((x (get l p)))
		      (when x 
			(prin1 `(putprop ',l ',x ',p) f)))))
		(prin1 `(setq *cmr* nil) f)))
	      
	      (let* ((*split-files* 100000)
		     (o (compile-file pn :system-p t :c-file t :h-file t :data-file t)))
		(unless pnp (load o)))))))))
