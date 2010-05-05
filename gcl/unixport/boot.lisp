;(si::use-fast-links nil)
;(setq compiler::*space* 3)

#+pre-gcl(unless (fboundp 'logandc2) (defun logandc2 (x y) (boole boole-andc2 x y)))
(in-package 'compiler)
#+pre-gcl
(progn
  (defun tt3 (x) (lit :fixnum (cstr "fto(") (unbox :object x) (cstr ")")))
  (si::putprop 'tt3 t 'cmp-inline)
  (defun tt30 (x) (lit :boolean (cstr "!fto0(") (unbox :object x) (cstr ")")))
  (si::putprop 'tt30 t 'cmp-inline)
  (dolist (l '(add-info analyze-regs analyze-regs1 tt3 tt30 length))
    (compile l))
  (setq *rep-lst1* (mapcar (lambda (x) (list (car x) (tt3 (eval (cdr x))))) *rep-lst*)))
(in-package 'user)

(dolist (l '(cp2))
  (time (load (compile-file
	       (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")
	       :c-file t :h-file t :data-file t :system-p t))))

#+pre-gcl(declaim (optimize (safety 3)))

(dolist (l '(c listlib predlib arraylib seq seqlib bnum fle dl rm nr lr2 sym hash))
  (time (load (compile-file
	       (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")
	       :c-file t :h-file t :data-file t :system-p t))))

(dolist (l '(cmptype cmpeval cmpvar cmpwt cmpif cmplet cmptag cmpinline cmpenv cmplam cmptop
		     cmpbind cmpblock cmpcall cmpcatch cmpflet cmpfun  cmplabel cmploc cmpmap 
		     cmpmulti cmpspecial cmputil  cmpvs cmpmain))
  (time (load (compile-file
	       (concatenate 'string "../cmpnew/gcl_" (string-downcase (string l)) ".lsp")
	       :c-file t :h-file t :data-file t :system-p t))))

(with-open-file (s "../lsp/gcl_recompile.lsp" :direction :output))
(dolist (l '(recompile callhash assert defmacro defstruct describe evalmacros sc
		       iolib mislib module numlib packlib setf top trace sloop debug info serror))
  (time (compile-file
	 (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")
	 :c-file t :h-file t :data-file t :system-p t)))

(declaim (optimize (safety 0)))
(dolist (l '(mnum))
  (time (compile-file
	 (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")
	 :c-file t :h-file t :data-file t :system-p t)))