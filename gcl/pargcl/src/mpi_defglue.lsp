;;(in-package "MPI")
(provide "mpi_defglue")

(defmacro defglue (&rest params &aux lisp-fnc lisp-glue c-glue c-fnc doc-string
			 (tmp (reverse params)))
  "(defglue <lisp-fnc> lisp-glue c-glue <c-fnc> <doc-string>); <..> = optional
   lisp-fnc = (fnc args body); lisp-glue = (fnc ,@args);
   c-glue = ((type \"name\") (type arg1) ...); c-fnc = (\"fnc-call\");
   doc-string = \"string\""
  (when (stringp (first tmp))
    (setq doc-string (pop tmp)))
  (when (stringp (first (first tmp)))
    (setq c-fnc (pop tmp)))
  (setq c-glue (pop tmp)) ; always present
  (setq lisp-glue (pop tmp)) ; always present
  (setq lisp-fnc (pop tmp))
  `(progn
     ,@(if lisp-fnc `((defun ,(fnc-name lisp-fnc) ,(fnc-args lisp-fnc)
			,@(fnc-body lisp-fnc)
			,lisp-glue)))
     ,@(if doc-string `((setf
			 (documentation
			  ',(fnc-name (or lisp-fnc lisp-glue)) 'function)
			 ,doc-string)))
     ,@(if c-fnc ; must define type of c-glue before defentry for C compiler
	 `((Clines
	    ,@(c-header c-glue)
	    ,@(c-body c-fnc)))
	 (unless (eq 'int (decl-type (fnc-name c-glue)))
	   (format *error-output* "WARNING:  need extern for ~a."
		   (fnc-name c-glue)))) ; must return NIL for macro
     (defentry ,(fnc-name lisp-glue) ,(mapcar #'first (rest c-glue))
       ,(fnc-name c-glue))
     ',(fnc-name (or lisp-fnc lisp-glue))))
(defmacro fnc-name (fnc) `(first ,fnc))
(defmacro fnc-args (fnc) `(second ,fnc))
(defmacro fnc-body (fnc) `(cddr ,fnc))
(defun symbol-to-c-string (symbol)
  (if (stringp symbol) symbol (string-downcase (string symbol))))
(defmacro decl-type (decl) `(first ,decl))
(defmacro decl-ident (decl) `(second ,decl))
(defun c-header (c-glue &aux c-args c-decls)
  (dolist (decl (reverse (rest c-glue)) (pop c-args))
    (push (symbol-to-c-string (decl-ident decl)) c-args)
    (push ", " c-args))
  (dolist (decl (reverse (rest c-glue)))
    (push (concatenate 'string (symbol-to-c-string (decl-type decl))
		       " " (symbol-to-c-string (decl-ident decl)) ";")
	  c-decls))
  (cons (apply #'concatenate 'string
	       `("static " ,(symbol-to-c-string (decl-type (fnc-name c-glue)))
		 " " ,(decl-ident (fnc-name c-glue)) "(" ,@c-args ")"))
	c-decls))
(defun c-body (c-fnc &aux c-stmts)
  (dolist (stmt c-fnc)
    (push (concatenate 'string " " stmt
		       (if (char= #\; (aref stmt (1- (length stmt)))) "" ";"))
	  c-stmts))
  (setq c-stmts (nreverse (cons "}" c-stmts)))
  (setf (aref (first c-stmts) 0) #\{)
  c-stmts)
