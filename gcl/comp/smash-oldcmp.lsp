
(dolist (v '((compile-file . bcomp::compile-file1)
	     (proclaim . bcomp::proclaim1)
	     (disassemble . bcomp::disassemble1)))
  (setf (symbol-function (car v)) (symbol-function (cdr v))))

(setq compiler::*cc* (si::concatenate 'string compiler::*cc* " -g "))
