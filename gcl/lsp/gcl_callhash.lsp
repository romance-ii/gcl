;; -*-Lisp-*-

(in-package :si);FIXME this belongs in :compiler

(export '(*split-files* *sig-discovery* export-call-struct compress-fle))

(defstruct (call (:type list) (:constructor make-call))
  sig callees src file props name)
(defvar *needs-recompile* nil);(make-array 10 :fill-pointer 0 :adjustable t))
(defvar *us* nil)
(defvar *cmr* nil)
(defvar *keep-state* nil)
(defvar *rfns* nil)
(defvar *sfns* nil)
(defvar *split-files* nil)
(defvar *sig-discovery* nil)

;; (defun add-hash (fn sig callees src file &optional props &aux ar cm)
;;   (cond ((not (eq *boot* t))
;; 	 (setq *pahl* (cons `(add-hash ',fn ',sig ',callees ,src ,file ,props) *pahl*))
;; 	 (unless (or (not (and 
;; 			   (setq *us* (find-symbol "UNIQUE-SIGS" (find-package "COMPILER")))
;; 			   (fboundp *us*)))
;; 		     *boot*)
;; ;	   (setq *boot* 'add-hash) 
;; 	   (let ((*package* (find-package "SI")))
;; 	     (defstruct (call (:type list)
;; 			      (:constructor make-call))
;; 			      sig callees src file props name)
;; 	     (defvar *needs-recompile* nil);(make-array 10 :fill-pointer 0 :adjustable t))
;; 	     (defvar *us* nil)
;; 	     (defvar *cmr* nil)
;; 	     (defvar *keep-state* nil)
;; 	     (defvar *rfns* nil)
;; 	     (defvar *sfns* nil)
;; 	     (defvar *split-files* nil)
;; 	     (defvar *sig-discovery* nil)
;; 	     (setq *tmp-dir* (get-temp-dir)))
;; 	     (setq *boot* t)
;; 	     (mapc 'eval (nreverse *pahl*))
;; 	     (setq *pahl* nil)))
;; 	((let* ((sig (when sig (funcall *us* sig)))
;; 		(h (call fn t :sig sig)))
;; 	   (when (symbolp fn)
;; 	     (let ((x (get fn 'state-function)))
;; 	       (when (and x (not (eq x *keep-state*)));(member-if (lambda (y) (not (eq (car y) x))) callees))
;; 		 (break-state fn x))))
;; 	   (when sig
;; 	     (unless (eq sig (call-sig h))
;; 	       (when (symbolp fn)
;; 		 (when (call-sig h)
;; 		   (dolist (l (get fn 'callers))
;; 		     (unless (eq l fn)
;; 		       (add-recompile l fn (call-sig h) sig)))))
;; 	       (setf (call-sig h) sig)))
;; 	   (when (symbolp fn) (setf (call-name h) fn))
;; 	   (when src (setf (call-src h) src))
;; 	   (when file (unless (call-file h) (setf (call-file h) file)));FIXME gazonk check
;; 	   (when props (setf (call-props h) props))
;; 	   (dolist (l callees (progn (when cm (pushnew fn *cmr* :test 'eq))
;; 				     (unless ar (when (and sig callees) (remove-recompile fn)));fixme
;; 				     h))
;; 	     (let ((fe (car l)))
;; 	       (unless (member fe (call-callees h) :test 'eq)
;; 		 (push fe (call-callees h))
;; 		 (setq cm (symbolp fn)))
;; 	       (when (symbolp fn)
;; 		 (let* ((ns (cdr l))
;; 			(ns (when ns (funcall *us* ns)))
;; 			(h (call fe))
;; 			(os (when h (call-sig h))))
;; 		   (pushnew fn (get fe 'callers) :test 'eq)
;; 		   (unless (or (eq fn fe) (not os) (eq ns os))
;; 		     (add-recompile fn fe os ns)
;; 		     (setq ar t))))))))))

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

;; (defvar *uniq-sigs* (make-hash-table :test 'equal))
;; (defun uniq-sigs (sig)
;;   (or (gethash sig *uniq-sigs*) (setf (gethash sig *uniq-sigs*) sig)))

(defun export-call-struct (l)
  `(make-function-plist ',(ex-sig (pop l))  ',(mapcar 'car (pop l))  ,(apply 'compress-fle (pop l))  ,(pop l) ,(car l)))

(defun add-recompile (fn why assumed-sig actual-sig)
  (let* ((q (car (member fn *needs-recompile* :key 'car))))
    (if q
	(setf (cadr q) why (caddr q) assumed-sig (cadddr q) actual-sig)
      (push (list fn  why assumed-sig actual-sig) *needs-recompile*))))

(defun remove-recompile (fn)
  (setq *needs-recompile* (remove fn *needs-recompile* :key 'car)))

(defun clear-compiler-properties (sym code)
  (cond ((not code))
	((eq (symbol-to-function sym) code))
	((let ((h (call sym)))
	   (remove-recompile sym)
	   (when h
	     (dolist (l (call-callees h))
	       (setf (get l 'callers) (delete sym (get l 'callers)))))

	   (let ((x (get sym 'state-function)))
	     (when (and x (not (eq x *keep-state*)))
	       (break-state sym x)))

	   (let ((new (call code t :sig (when h (call-sig h)))))
	     
	     (let ((nr (member code *needs-recompile* :key (lambda (x) (symbol-to-function x)))))
	       (when nr (add-recompile sym (cadr nr) (caddr nr) (cadddr nr))))
	     (when h
	       (let ((ns (call-sig new)))
		 (unless (eq ns (call-sig h))
		   (dolist (l (get sym 'callers))
		     (add-recompile l sym (call-sig h) ns)))))
	     (dolist (l (call-callees new)) 
	       (pushnew sym (get l 'callers) :test 'eq)))))))

;; (defun clear-compiler-properties (sym code)
;;   (cond ((not (eq *boot* t)) (push `(clear-compiler-properties ',sym nil) *pahl*))
;;	((not code))
;; 	((eq (symbol-to-function sym) code))
;; 	((let ((h (call sym)))
	   
;; 	   (when h
;; 	     (dolist (l (call-callees h))
;; 	       (setf (get l 'callers) (delete sym (get l 'callers)))))

;; 	   (let ((x (get sym 'state-function)))
;; 	     (when (and x (not (eq x *keep-state*)))
;; 	       (break-state sym x)))

;; 	   (let ((new (call code t :sig (when h (call-sig h)))))
	     
;; 	     (let ((nr (member code *needs-recompile* :key (lambda (x) (symbol-to-function x)))))
;; 	       (when nr (add-recompile sym (cadr nr) (caddr nr) (cadddr nr))))
;; 	     (when h
;; 	       (let ((ns (call-sig new)))
;; 		 (unless (eq ns (call-sig h))
;; 		   (dolist (l (get sym 'callers))
;; 		     (add-recompile l sym (call-sig h) ns)))))
;; 	     (dolist (l (call-callees new)) 
;; 	       (pushnew sym (get l 'callers) :test 'eq)))))))

(defun clr-call nil 
  (setq *needs-recompile* nil))

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
	      (let ((file (file l))) (when file (pushnew file files :test 'string=))))
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
