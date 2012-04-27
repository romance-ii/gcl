#+pre-gcl(unless (fboundp 'logandc2) (defun logandc2 (x y) (boole boole-andc2 x y)))
(in-package 'compiler)
#+pre-gcl
(progn
  (defun mc nil (si::make-anonymous-closure))
  (defun tt3 (x) (lit :fixnum "fto(" (:object x) ")"))
  (si::putprop 'tt3 t 'cmp-inline)
  (defun tt30 (x) (lit :boolean "!fto0(" (:object x) ")"))
  (si::putprop 'tt30 t 'cmp-inline)
  (compile 'tt3)
  (compile 'tt30)
  (setq *rep-lst1* (mapcar (lambda (x) (list (car x) (tt3 (eval (cdr x))))) *rep-lst*))
  (dolist (l '(add-info analyze-regs length array-dimension ; analyze-regs1
			array-row-major-index row-major-aref si::row-major-aset aref si::aset nreverse reverse))
    (compile l)))
(in-package 'user)

(compiler::cdebug)

(dolist (l '(cp));c::>= object_to_dcomplex prob at safety 3
  (time (load (compile-file (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")))))

#+pre-gcl(declaim (optimize (safety 3)))

(dolist (l '(c listlib predlib arraylib seq seqlib bnum fle dl rm nr lr sym hash))
  (time (load (compile-file (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")))))

(dolist (l '(cmptype cmpeval cmpvar cmpwt cmpif cmplet cmptag cmpinline cmpenv cmplam cmptop
		     cmpbind cmpblock cmpcall cmpcatch cmpflet cmpfun cmplabel cmploc cmpmap 
		     cmpmulti cmpspecial cmputil cmpvs cmpmain))
  (time (load (compile-file (concatenate 'string "../cmpnew/gcl_" (string-downcase (string l)) ".lsp")))))

(with-open-file (s "../lsp/gcl_recompile.lsp" :direction :output))
(dolist (l '(recompile callhash assert defmacro defstruct describe evalmacros sc
		       iolib mislib module numlib packlib setf top trace sloop debug info serror))
  (time (compile-file (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp"))))

(dolist (l '(mnum))
  (time (compile-file (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp"))))