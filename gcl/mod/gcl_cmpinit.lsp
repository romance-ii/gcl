(proclaim '(optimize (safety 2) (space 3)))

(setq compiler::*eval-when-defaults* '(compile eval load))
(or (fboundp 'si::get-&environment) (load "defmacro.lsp"))
;(or (get 'si::s-data 'si::s-data)
;    (progn (load "../lsp/setf.lsp") (load "../lsp/defstruct.lsp")))
(if (probe-file "sys-proclaim.lisp")(load "sys-proclaim.lisp"))



;;;;;
