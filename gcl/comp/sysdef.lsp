(in-package "BCOMP" :use '("LISP" "SLOOP"))
(setq compiler::*cc* (concatenate 'string compiler::*cc* " -I../newh -I../h"))
(setf macros '(defmacro data defs  macros wr))
(require "MAKE" "../lsp/make.lisp")
(setf files '( var c-pass1 fasdmacros lambda  top top1
		   bo1
		   inline top2 stmt  exit
		     mangle
		     utils  comptype))
(proclaim '(optimize (speed 0)))
(setf (get :bcomp :make) 
      `((:serial  ,@ macros)
	,@ files
	(:progn   (unless (get 'list 'bcomp-opt)
			  (load "lisp-decls.doc")
			  (load "opts.lsp"))
		  (load "opts-base.lsp")
		      )
	(:depends ,files ,macros)))
(setf (get :bcomp :source-path) "foo.lsp")
(setf (get :bcomp :object-path) "foo.o")


