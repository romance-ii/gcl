
(in-package "BCOMP")

(defmacro fdecl (key fd) `(nth ,(position key '(argd flag)) ,fd))

(defun comp-warn (fmt &rest l &aux (*print-length* 3) (*print-level* 3))
  (if *top-form* (format t ";~%~s is being compiled" *top-form*))
  (setq *top-form* nil)
  (format t ";;~%Warning:")
  (apply 'format t fmt l))

(defun comp-error (fmt &rest l &aux (*print-length* 3) (*print-level* 3))
  (setq *hard-error* t)
  (format t "~%Error:")
  (apply 'format t fmt l))

(defun add-prop (symbol-lis prop val)
  (dolist-safe (v symbol-lis)
	       (or (symbolp v) (comp-error "Can't add ~a prop ~a to non symbol ~a" val prop v))
	       (setf (get v prop) val)))

(defun bad-proclamation ()
  (declare (special *procl*))
  (comp-error "The proclamation ~a was illegal." *procl*))


(defun proclaim1 (x &aux ptype body (*procl* x) flag val tem)
  (declare (special *space* *speed*)) 
;; will eventually be proclaim.
  (declare (special *procl*))
  (desetq (ptype . body) x)
  (case ptype
    (optimize (sloop for v in-list body
		 do (cond ((atom v) (setq flag v val 3))
			  (t (desetq (flag val) v)))
		 (or (typep val 'fixnum) (bad-proclamation))
		 (case flag
		   (safety (if (> (the fixnum val) 0) (setq *safety* val)))
		   (space (setq *space* val))
		   (speed (setq *speed* val))
		   (compilation-speed (setq *speed* 0))
		   (t (comp-warn "Unknown optimize quality ~a" flag)))))
    (special  (dolist-safe (v body) (si::*make-special v)))
    (type (desetq (ptype . body) body)
	  (setq ptype (comp-type ptype))
	  (add-prop body 'proclaimed-variable-type ptype)) 
    (function
     (let (name  )
     (desetq (name . body) body)
     (proclaim1 `(ftype (function ,@  body) ,name))))
    (ftype
     (desetq (ptype . body) body)
     (add-prop body 'proclaimed-function-declaration
	       (increment-function-decl ptype nil)))
    (inline
     (add-prop body 'proclaimed-inline t))
    (declaration
     (add-prop body 'proclaimed-declaration t))
    (t (cond ((symbolp ptype)
	      (cond ((setq tem (get ptype 'comp-type))
		     (add-prop body 'proclaimed-variable-type (comp-type ptype)))
		    ((get ptype 'proclaimed-declaration))
		    (t (bad-proclamation))))
	     (t (bad-proclamation))))))

(defun ftype-from-fdecl (fdecl &aux (n (fdecl argd fdecl)))
;; (setq fdecl (get fname 'proclaimed-fun57qction-declaration))
  (when n
    (let ((args (argl-from-argd n))
	  (ret  (ret-from-argd n)))
    `(ftype (function ,args ,ret)))))

(defun describe-fdecl(fdecl)
  (format t "Ftype is ~s, flags are " (ftype-from-fdecl fdecl))
  (print-flag (fdecl flag fdecl)))


(defun promote-arg-type (x)
  (setq x (comp-type x))
  (case x
    (fixnum 'fixnum)
    ((t) t)
;    (short-float 'short-float)
    ((long-float  double-float ) 'double_ptr)
    (t (cond ((subtypep x 'fixnum) 'fixnum)
	     (t t)))))

(defvar *promoted-arg-types* #( t fixnum double_ptr ;short-float
				  )) 
(defun arg-type-code (x)
  (cond ((eq x t) 0)
	((eq x 'fixnum) 1)
	((eq x 'double_ptr) 2)
;	((eq x 'short-float) 3)
	(t (wfs-error) 0)))

(defun increment-function-decl (new-prop old-decl &aux  tem
					 args ret-types retl)
  ;; produce a new function-decl with prop added.
  (setq old-decl (list 0 (if old-decl (second old-decl)
			   #.(flags set ans mv touch-mv)
			   )))
  (cond ((atom new-prop)
	 (case new-prop
	   (inline  (setf (flag-p (fdecl flag old-decl) notinline) nil))
	   (notinline  (setf (flag-p (fdecl flag old-decl) notinline) t))
	   (t (wfs-error)))
	 old-decl)
	((eq (car new-prop) 'function)
	 (desetq (args . ret-types) (cdr new-prop))
	 (tagbody
	  again
	  (cond ((null ret-types) (setq retl '*))
		((atom ret-types) (comp-error "Bad return decl ~a" retl))
		((cdr ret-types) (setq retl '*))
		((eq (setq tem (car ret-types)) '*)(setq retl '*))
		((and (consp tem)
		      (eq (car tem) 'values))
		 (setq ret-types (cdr tem)) (go again))
		(t (setq retl (comp-type tem)))))
	 (setf (car old-decl) (link-descriptor-from-decl args retl))
	 (cond ((not (eq retl '*))
		(setf (flag-p (second old-decl) mv) nil)))
	 old-decl)
	(t (wfs-error))))

(defun function-declaration (v)
  (or (symbolp v) (wfs-error))
  (or (cdr (assoc v *function-decls*))
      (get v 'proclaimed-function-declaration)))


(defun function-return-type (fdat &aux  ret fdecl)
  ;; returns (member *immediate-types*), T, or MV
  ;;    (member *immediate-types*), T, *, (values t t) (values) ..
  (let ((fname (fdata-name fdat)))
    (cond ((and fname (setq fdecl (get fname 'proclaimed-function-declaration)))
	   (setf (fdata-function-declaration fdat) fdecl)
	   (setq ret (ret-from-argd (fdecl argd fdecl)))
	   (cond ((eq ret '*) 'mv)
		 (t ret)))
	  (t 'mv))))

(defun the-list (x &aux (y x))
  (sloop while x
     do (or (consp x) (comp-error "not a list ~a" x))
     (setq x (cdr x)))
  y)




	
		     
		     
	       
	   
	   
	 

  
  
	
  
  
	
