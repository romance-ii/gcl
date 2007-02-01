;(si::use-fast-links nil)
;(setq compiler::*space* 3)

(dolist (l '(listlib predlib arraylib seq seqlib))
  (time (load (compile-file
	       (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")
	       :c-file t :h-file t :data-file t :system-p t))))

(dolist (l '(cmptype cmpeval cmpvar cmpwt cmpif cmplet cmptag cmpinline cmpenv cmplam cmptop
		     cmpbind cmpblock cmpcall cmpcatch cmpflet cmpfun  cmplabel cmploc cmpmap 
		     cmpmulti cmpspecial cmputil  cmpvs cmpmain))
  (time (load (compile-file
	       (concatenate 'string "../cmpnew/gcl_" (string-downcase (string l)) ".lsp")
	       :c-file t :h-file t :data-file t :system-p t))))

(dolist (l '(recompile callhash assert defmacro defstruct describe evalmacros
		       iolib mislib module numlib packlib setf top trace sloop debug info serror))
  (time (compile-file
	 (concatenate 'string "../lsp/gcl_" (string-downcase (string l)) ".lsp")
	 :c-file t :h-file t :data-file t :system-p t)))