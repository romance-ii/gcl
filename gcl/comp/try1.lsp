(setq *load-verbose* nil)
(defun compiler::boole3 (a b c) (boole a b c))
(load "sysdef.lsp")
(make::make :bcomp)
(load "smash-oldcmp.lsp")

(setq *load-verbose* t)

