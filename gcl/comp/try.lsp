(in-package "BCOMP" :use '("SLOOP" "LISP"))
(setq *print-pretty* t)
(defun compiler::boole3 (a b c) (boole a b c))
(setq compiler::*cc* (concatenate 'string compiler::*cc* " -I../newh -I../h"))

(let ((*load-verbose* nil))
  (dolist (v '( data defs  macros var  c-pass1 fasdmacros lambda  top top1
		     inline top2 stmt  wr
		     bo1
		     exit
		     defmacro
		     utils  comptype
		     ))
    (si::nload (format nil "~(~a~).lsp" v)))
  (load "opts-base.lsp")
  (let ((u "top2.o"))
  (unless (get 'list 'bcomp-opt)
	  (if (probe-file  u) (load u))
	  (load "lisp-decls.doc")
	  (load "opts.lsp")
	  (if (probe-file U ) (si::nload "top2.lsp"))
	  ))
  (or (fboundp 'do-some-tests) (load "../tests/all-tests.lsp"))
  (load "mangle")
  )

