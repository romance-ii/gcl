;(proclaim '(optimize (safety 2) (space 3)))

(setq compiler::*eval-when-defaults* '(compile eval load))
(setq compiler::*compile-ordinaries* t)
(if (probe-file "sys-proclaim.lisp")(load "sys-proclaim.lisp"))

;;;;;
