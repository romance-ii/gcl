;(si::use-fast-links nil)
;(setq compiler::*space* 3)

#+pre-gcl(progn
	   (declaim (optimize (safety 3)))
	   (setf (symbol-plist 'union) nil (symbol-plist 'set-difference) nil))

(dolist (l '(c listlib predlib arraylib seq seqlib bnum))
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
		       iolib mislib module numlib mnum packlib setf top trace sloop debug info serror))
  (time (compile-file
	 (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")
	 :c-file t :h-file t :data-file t :system-p t)))
