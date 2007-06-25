;; -*-Lisp-*-

(in-package 'lisp)

(export '(function-lambda-expression))

(in-package 'si)

(*make-special '*pahl*)
(*make-special '*boot*)
(*make-special '*tmp-dir*)
(eval-when (load eval)
	   (setq *pahl* nil)
	   (setq *boot* nil))

(defun add-hash (fn sig callees src file)
  (cond ((not (eq *boot* t))
	 (setq *pahl* (cons `(add-hash ',fn ',sig ',callees ,src ,file) *pahl*))
	 (unless (or (not (fboundp 'make-s-data)) (not (let ((s (find-symbol "UNIQUE-SIGS" (find-package "COMPILER")))) 
							 (and s (fboundp s)))) *boot*)
	   (setq *boot* 'add-hash) 
	   (let ((*package* (find-package "SI")))
	     (defstruct (call (:copier copy-call)
			      (:predicate call-p)
			      (:constructor make-call))
			      sig callees callers src file)
	     (defvar *call-hash-table* (make-hash-table :test 'eq))
	     (defvar *needs-recompile* (make-array 10 :fill-pointer 0 :adjustable t))
	     (defvar %memory)
	     (defvar %init)
	     (defvar *cmr* nil)
	     (defvar *rfns* nil)
	     (defvar *sfns* nil)
	     (defvar *split-files* nil)
	     (defvar *sig-discovery* nil)
;	     (defvar *unique-sigs* (make-hash-table :test 'equal))
	     (defvar *us* (find-symbol "UNIQUE-SIGS" (find-package "COMPILER")))
;	     (assert (and *us* (fboundp *us*)))
	     (setq *tmp-dir* (get-temp-dir))
	     (setq *boot* t)
	     (mapc 'eval (nreverse *pahl*))
	     (setq *pahl* nil))))
	((let* ((sig (when sig (funcall *us* sig)))
		(h (or (gethash fn *call-hash-table*)
		       (setf (gethash fn *call-hash-table*) (make-call :sig sig)))))
	   (let ((x (get fn 'state-function)))
	     (when (and x (some (lambda (y) (not (eq (car y) x))) callees))
	       (break-state fn x)))
	   (procl fn sig)
	   (when sig
	     (unless (eq sig (call-sig h))
		 (dolist (l (call-callers h))
		   (unless (eq l fn)
		     (add-recompile l fn (call-sig h) sig)))
		 (setf (call-sig h) sig)))
	   (when src (setf (call-src h) src))
	   (when file (unless (call-file h) (setf (call-file h) file)))
	   (let (ar cm)
	     (dolist (l callees (progn (when cm (pushnew fn *cmr* :test 'eq))
				       (unless ar (when (and sig callees) (remove-recompile fn)))));fixme
	       (unless (member (car l) (call-callees h) :test 'eq)
		 (push (car l) (call-callees h))
		 (setq cm t))
	       (let* ((ns (cdr l))
		      (ns (when ns (funcall *us* ns)))
		      (h (or (gethash (car l) *call-hash-table*)
			     (setf (gethash (car l) *call-hash-table*) (make-call :sig ns :callers (list fn)))))
		      (os (call-sig h)))
		 (pushnew fn (call-callers h) :test 'eq)
		 (unless (or (eq fn (car l)) (not os) (eq ns os))
		   (add-recompile fn (car l) ns os)
		   (setq ar t)))))))))

(defun procl (fn sig)
  (when sig 
;    (unless (eq (cadr sig) '*) 
      (putprop fn t 'proclaimed-function)
      ;)
    (putprop fn (car sig) 'proclaimed-arg-types)
    (putprop fn (cadr sig) 'proclaimed-return-type)))

(defun break-state (sym x)
  (format t "Breaking state function ~s due to definition of ~s~%" x sym)
  (let ((o (old-src x)))
    (mapc (lambda (x) (remprop x 'state-function)) (car o))
    (mapc (lambda (x y) (unless (eq sym x) (eval `(defun ,x ,@(cdr y))))) (car o) (cadr o))
    (mapc (lambda (y) (push y *cmr*) (add-recompile y 'state-function (sig x) nil)) (car o)) 
    (fmakunbound x)
    (remhash x *call-hash-table*)
    (unintern x)))

(defun clear-compiler-properties (sym code)
  (cond ((not (eq *boot* t))
	 (push `(clear-compiler-properties ',sym nil) *pahl*))
	((let ((h (or (gethash sym *call-hash-table*) 
		      (setf (gethash sym *call-hash-table*) (make-call)))))

	   (dolist (l (call-callees h))
	     (let ((l (gethash l *call-hash-table*)))
	       (setf (call-callers l) (delete sym (call-callers l)))))

	   (unless (and (compiled-function-p code) (eq (function-name code) sym))
	     (let ((x (get sym 'state-function)))
	       (when x
		 (break-state sym x))))

	   (let (new)
	     (maphash (lambda (x y) 
			(when (and (fboundp x) (eq (symbol-function x) code) (call-src y))
			  (setq new x))) *call-hash-table*)
	     (cond (new
		    (let ((nr (find new *needs-recompile* :key 'car)))
		      (when nr (add-recompile sym (cadr nr) (caddr nr) (cadddr nr))))
		    (setq new (gethash new *call-hash-table*))
		    (let ((ns (call-sig new)))
		      (unless (eq ns (call-sig h))
			(dolist (l (call-callers h))
			  (add-recompile l sym (call-sig h) ns)))
		      (setf (call-sig h) ns)
		      (procl sym ns))
		    (dolist (l (call-callees new)) 
		      (pushnew sym (call-callers (gethash l *call-hash-table*))))
		    (setf (call-callees h) (call-callees new) (call-src h) (call-src new) (call-file h) (call-file new)))
		   ((progn
		      (remove-recompile sym)
		      (let ((ns (if (and (compiled-function-p code) (not (eq (function-name code) sym))
					 (fboundp sym) (compiled-function-p (symbol-function sym)) 
					 (not (eq (symbol-function sym) code)))
				    (let ((s '((*) *))) (pushnew sym *sfns*)(funcall *us* s))
				  (call-sig h))))
			(unless (eq ns (call-sig h))
			  (dolist (l (call-callers h))
			    (add-recompile l sym (call-sig h) ns)))
			(setf (call-sig h) ns)
			(procl sym ns))
		      (setf (call-callees h) nil (call-src h) nil (call-file h) nil)))))))))

(defun add-recompile (fn why assumed-sig actual-sig)
  (unless (find fn *needs-recompile* :key 'car)
    (vector-push-extend (list fn why assumed-sig actual-sig) *needs-recompile*)
    nil))

(defun remove-recompile (fn)
  (let ((p (position fn *needs-recompile* :key 'car)))
    (when p
      (decf (fill-pointer *needs-recompile*))
      (do ((i p (1+ i))) ((>= i (length *needs-recompile*)))
	(setf (aref *needs-recompile* i) (aref *needs-recompile* (1+ i)))))))

(defun clr-call nil 
  (clrhash *call-hash-table*)
  (setf (fill-pointer *needs-recompile*) 0))


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
	 (r (union z y) (same-file-all-callees (car l) r fn)))
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

(defun block-lambda (ll block body)
  (let* ((z body)
	 (decls (let (d) (do nil ((or (not z) (and (not (stringp (car z))) 
						   (or (not (consp (car z))) (not (eq (caar z) 'declare))))) (nreverse d))
			      (push (pop z) d))))
	 (ctps (let (d) (do nil ((or (not z) (not (consp (car z))) (not (eq (caar z) 'check-type))) (nreverse d))
			     (push (pop z) d))))
	 (rest z))
  `(lambda ,ll ,@decls ,@ctps (block ,block ,@rest))))
       

(defun function-lambda-expression (y) 
  (let ((x (typecase y
	    (interpreted-function (interpreted-function-lambda y))
	    (compiled-function (function-src (function-name y)))
	    (otherwise nil))))
    (case (car x)
	  (lambda (values x nil (function-name y)))
	  (lambda-block (values (block-lambda (caddr x) (cadr x) (cdddr x)) nil (cadr x)))
	  (lambda-closure (values (cons 'lambda (cddr (cddr x)))  (not (not (cadr x)))  (function-name y)))
	  (lambda-block-closure (values (block-lambda (caddr (cdddr x)) (cadr (cdddr x)) (cddr (cddr (cddr x)))) 
					(not (not (cadr x))) (fifth x)))
	  (otherwise (values nil t nil)))))

(defun compress-src (src)
  (let* ((w (make-string-output-stream))
	 (ss (si::open-fasd w :output nil nil)))
    (si::find-sharing-top src (aref ss 1))
    (si::write-fasd-top src ss)
    (si::close-fasd ss)
    (get-output-stream-string w)))

(defun function-src (sym)
  (or
   (let* ((h (gethash sym *call-hash-table*))
	  (fas (when h (call-src h))))
     (when fas
       (let* ((ss (open-fasd (make-string-input-stream fas) :input 'eof nil))
	      (out (read-fasd-top ss)))
	 (close-fasd ss)
	 out)))
   (and (fboundp sym) (typep (symbol-function sym) 'interpreted-function) (function-lambda-expression (symbol-function sym)))))

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
	((eq (car src) 'macrolet)
	 (list (mapcar 'car (cadr src)) 
	       (mapcar (lambda (x) (if (eq (caadr x) 'funcall) (cadadr x) (caadr x))) (cddr (caddr src)))))
	((or (old-src stfn (car src) syms sts srcs) (old-src stfn (cdr src) syms sts srcs)))))

(defun lambda-vars (ll)
  (remove '&optional (mapcar (lambda (x) (if (consp x) (car x) x)) ll)))

(defun inlinef (n syms sts fns)
    (unless (some (lambda (x) (intersection '(&rest &key &aux &allow-other-keys) (cadr x))) fns)
      (let* ((lsst (1- (length sts)))
	     (tps (max-types (mapcar 'sig syms)))
	     (min (reduce 'min (mapcar (lambda (x) 
					 (let* ((ll (cadr x))) 
					   (- (length ll) (length (member '&optional ll))))) fns)
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
	   (macrolet ,(mapcan (lambda (x y z) `((,x ,(cadr y) `(,',n ,,z ,,@(lambda-vars (cadr y)))))) syms fns sts)
		     (case state
			   ,@(mapcar (lambda (x y)
				       `(,(if (= x lsst) 'otherwise x) 
					 (funcall ,y ,@(reverse 
							(early-nthcdr 
							 (- max (length (lambda-vars (cadr y))))
							 all))))) sts fns)))))))

(defun sig (x) (let ((h (gethash x *call-hash-table*))) (when h (call-sig h))))
(defun src (x) (let ((h (gethash x *call-hash-table*))) (when h (call-src h))))
(defun file (x) (let ((h (gethash x *call-hash-table*))) (when h (call-file h))))
(defun callees (x) (let ((h (gethash x *call-hash-table*))) (when h (call-callees h))))
(defun callers (x) (let ((h (gethash x *call-hash-table*))) (when h (call-callers h))))
(defun *s (x) 
  (let ((p (find-package x)))
    (remove-if-not
     (lambda (y) (eq (symbol-package y) p)) 
     (let (r) 
       (maphash (lambda (x y) (when (eq '* (cadr (call-sig y))) (push x r))) *call-hash-table*)
       r))))

(defun mutual-recursion-peers (sym)
  (unless (or (get sym 'state-function) (get sym 'mutual-recursion-group))
    (let ((y (sig sym)))
      (when (eq '* (cadr y))
	(let ((e (same-file-all-callees sym nil (file sym)))
	      (r (same-file-all-callers sym nil (file sym))))
	  (remove-if-not (lambda (x) (and (eq (symbol-package x) (symbol-package sym))
					  (let ((h (gethash x *call-hash-table*)))
					    (and h (call-src h) (eq '* (cadr (call-sig h)))))))
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
	     (sts (let (sts) (dotimes (i (length syms) (nreverse sts)) (push i sts))))
	     (ns (inlinef n syms sts fns)))
	(when ns
	  (mapc (lambda (x y z) (let ((z (cadr z))) (eval `(defun ,x ,z (,n ,y ,@(lambda-vars z)))))) syms sts fns)
	  (mapc (lambda (x) (putprop x n 'state-function)) syms)
	  (eval ns)
	  (dolist (l syms) (add-hash l nil (list (list n)) nil nil))
	  (putprop n syms 'mutual-recursion-group)
	  (add-recompile n 'mutual-recursion nil nil)
	  n)))))
    
(defun temp-prefix nil
  (si::string-concatenate *tmp-dir* "gazonk_" (write-to-string (abs (getpid))) "_"));FIXME

(defun recompile (fn)
  (with-temp-file 
      (s tpn) ((temp-prefix) "lsp")
      (let ((*print-radix* nil)
	    (*print-base* 10)
	    (*print-circle* t)
	    (*print-pretty* nil)
	    (*print-level* nil)
	    (*print-length* nil)
	    (*print-case* :downcase)
	    (*print-gensym* t)
	    (*print-array* t)
	    (si::*print-package* t)
	    (si::*print-structure* t))
	(let* ((src (function-src fn)))
	  (if src (prin1 `(defun ,fn ,@(cdr src)) s)
	    (remove-recompile fn))
	  (let ((o (compile-file tpn)))
	    (load o)
	    (delete-file o))))))

(defun get-temp-dir ()
  (dolist (x `(,@(mapcar 'si::getenv '("TMPDIR" "TMP" "TEMP")) "/tmp" ""))
    (when x
      (let* ((x (pathname x))
	     (x (if (pathname-name x) x 
		  (merge-pathnames
		   (make-pathname :directory (butlast (pathname-directory x)) 
				  :name (car (last (pathname-directory x))))
		   x))))
	(when (stat x) 
	  (return-from 
	   get-temp-dir 
	   (namestring 
	    (make-pathname 
	     :device (pathname-device x)
	     :directory (when (or (pathname-directory x) (pathname-name x))
			  (append (pathname-directory x) (list (pathname-name x))))))))))))

(defun do-recompile (&optional (pn nil pnp))

  (unless *disable-recompile*

    (let ((*disable-recompile* t) rfns)

      (do nil ((and (not *cmr*) (= (length *needs-recompile*) 0)) (setq rfns (nreverse rfns)))

	  (when (= 0 (length *needs-recompile*)) (do nil ((not *cmr*)) (convert-to-state (pop *cmr*))))

	  (unless (= 0 (length *needs-recompile*))

	    (sort *needs-recompile*
		  (lambda (x y) (member (car x) (callees (car y)))))

	    (map nil (lambda (fn)
		       (when (eq (cadr fn) 'mutual-recursion)
			 (format t "Mutual recursion detected: ~s, recompiling ~s~%" 
				 (get (car fn) 'mutual-recursion-group) (car fn)))) *needs-recompile*)

	    (format t "Pass1 signature discovery on ~s functions ...~%" (length *needs-recompile*))

	    (let (fns)
	      (dotimes (i (length *needs-recompile*)) 
		(let ((fn (car (aref *needs-recompile* i))))
		(pushnew fn rfns)
		(push fn fns)))

	      (let ((*sig-discovery* t)(*compile-verbose* nil)) 
		(dolist (fn (nreverse fns))
		  (if (eq (function-name (symbol-function fn)) fn)
		      (compile fn)
		    (progn
		      (format t "skipping ~s~%" fn)
		      (remove-recompile fn))))))))

      (if (and pnp (not pn))

	  (let (files)
	    (dolist (l rfns)
	      (let ((file (file l))) (when file (pushnew file files :test 'string=))))
	    (format t "Updating original source files ~s~%" files)
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

;; (defun do-recompile (&optional pn)
;;   (unless *disable-recompile*
;;     (let ((*disable-recompile* t))
;;       (when (= 0 (length *needs-recompile*)) (do nil ((not *cmr*)) (convert-to-state (pop *cmr*))))
;;       (unless (= 0 (length *needs-recompile*))
;; 	(sort *needs-recompile*
;; 	      (lambda (x y) (member (car x) (callees (car y)))))
;; 	(map nil (lambda (fn)
;; 		   (cond ((eq (cadr fn) 'mutual-recursion)
;; 			  (format t "Mutual recursion detected: ~s, recompiling ~s~%" 
;; 				  (get (car fn) 'mutual-recursion-group) (car fn)))
;; 			 ((format t "Callee ~s sigchange ~s to ~s, recompiling ~s~%" 
;; 			   (cadr fn) (caddr fn) (cadddr fn) (car fn))))) *needs-recompile*)
;; 	(with-temp-file 
;; 	    (s tpn) ((temp-prefix) "lsp")
;; 	    (let ((*print-radix* nil)
;; 		  (*print-base* 10)
;; 		  (*print-circle* t)
;; 		  (*print-pretty* nil)
;; 		  (*print-level* nil)
;; 		  (*print-length* nil)
;; 		  (*print-case* :downcase)
;; 		  (*print-gensym* t)
;; 		  (*print-array* t)
;; 		  (si::*print-package* t)
;; 		  (si::*print-structure* t))
;; 	      (dotimes (i (length *needs-recompile*))
;; 		(let* ((fn (car (aref *needs-recompile* i)))
;; 		       (src (function-src fn)))
;; 		  (when pn (push fn *rfns*))
;; 		  (cond (src 
;; 			   (prin1 `(defun ,fn ,@(cdr src)) s)
;; 			   (dolist (l '(state-function mutual-recursion-group))
;; 			     (let ((x (get fn l)))
;; 			       (when x 
;; 				 (prin1 `(putprop ',fn ',x ',l) s)))))
;; 			((remove-recompile fn))))))
;; 	    (let* ((*split-files* 100000)(*sig-discovery* t));(o (compile-file tpn)))
;; 	      (compile-file tpn)
;; 	      ;(load o)
;; ;	      (mapcar 'delete-file (directory (merge-pathnames (pathname (string-concatenate (pathname-name o) "*")) o)))
;; ))))
;;     (cond ((or *cmr* (> (length *needs-recompile*) 0)) (do-recompile pn))
;; 	  (pn 
;; 	   (with-open-file 
;; 	    (f pn :direction :output :if-exists :append :if-does-not-exist :create)
;; 	    (let ((*print-radix* nil)
;; 		  (*print-base* 10)
;; 		  (*print-circle* t)
;; 		  (*print-pretty* nil)
;; 		  (*print-level* nil)
;; 		  (*print-length* nil)
;; 		  (*print-case* :downcase)
;; 		  (*print-gensym* t)
;; 		  (*print-array* t)
;; 		  (si::*print-package* t)
;; 		  (si::*print-structure* t))
;; 	      (setq *rfns* (delete-duplicates (nreverse *rfns*)))
;; 	      (do (l) ((not (setq l (pop *rfns*))))
;; 		(prin1 `(defun ,l ,@(cdr (function-src l))) f)
;; 		(dolist (p '(state-function mutual-recursion-group))
;; 		  (let ((x (get l p)))
;; 		    (when x 
;; 		      (prin1 `(putprop ',l ',x ',p) f)))))
;; 	      (prin1 `(setq *cmr* nil) f)))
;; 	   (let ((*split-files* 100000)) (compile-file pn :system-p t :c-file t :h-file t :data-file t))))))


;FIXME!!!
;(defun is-eq-test-item-list (x y z w)
;  (format t "Should never be called ~s ~s ~s ~s~%" x y z w))

(defun cmp-vec-length (x)
  (declare (vector x))
  (if (array-has-fill-pointer-p x) (fill-pointer x) (array-dimension x 0)))



(defun mdlsym (str &optional (n "" np))
  (let* ((pk (or (find-package "LIB") (make-package "LIB")))
	 (ns (if np (pathname-name n) n)))
    (or (let* ((pp (find-symbol ns pk))
	       (pp (when pp (find-package pp))))
	  (when pp (find-symbol str pp)))
	(let* ((k (dlopen n))
	       (ad (dlsym k str))
	       (p (pathname-name (dladdr ad)))
	       (psym (intern p pk))
	       (nsym (intern ns pk))
	       (npk (or (find-package nsym)
			(if (eq nsym psym) (make-package nsym :use '(lisp)) 
			  (make-package nsym :nicknames (list psym) :use '(lisp)))))
	       (sym (and (shadow str npk) (intern str npk))))
	  (export (list psym nsym) pk)
	  (export sym npk)
	  (setf (symbol-value psym) k (symbol-value nsym) k (symbol-value sym) ad)
	  sym))))

(defun eval-feature (x)
  (cond ((atom x)
         (member x *features*))
        ((eq (car x) :and)
         (dolist (x (cdr x) t) (unless (eval-feature x) (return nil))))
        ((eq (car x) :or)
         (dolist (x (cdr x) nil) (when (eval-feature x) (return t))))
        ((eq (car x) :not)
	 (not (eval-feature (cadr x))))
	(t (error "~S is not a feature expression." x))))

(defun sharp-+-reader (stream subchar arg)
  (declare (ignore subchar arg))
  (if (eval-feature (let ((*read-suppress* nil) 
			  (*read-base* 10.)
			  (*package* (load-time-value (find-package 'keyword))))
		      (read stream t nil t)))
      (values (read stream t nil t))
      (let ((*read-suppress* t)) (read stream t nil t) (values))))

(set-dispatch-macro-character #\# #\+ 'sharp-+-reader)
(set-dispatch-macro-character #\# #\+ 'sharp-+-reader
                              (si::standard-readtable))

(defun sharp---reader (stream subchar arg)
  (declare (ignore subchar arg))
  (if (eval-feature (let ((*read-suppress* nil)
			  (*read-base* 10.)
			  (*package* (load-time-value (find-package 'keyword))))
                         (read stream t nil t)))
      (let ((*read-suppress* t)) (read stream t nil t) (values))
      (values (read stream t nil t))))

(set-dispatch-macro-character #\# #\- 'sharp---reader)
(set-dispatch-macro-character #\# #\- 'sharp---reader
                              (si::standard-readtable))


(defun lib-name (p)
  (string-concatenate p ".so" (if (string= "libc" p) 
				  #+(or alpha ia64) ".6.1"
				  #-(or alpha ia64) ".6" "")))
				  
(defun mdl (n p vad)
  (let* ((sym (mdlsym n (lib-name p)))
	 (ad (symbol-value sym))
	 (adp (aref %init vad)))
    (dladdr-set adp ad)
    (dllist-push %memory sym adp)))

