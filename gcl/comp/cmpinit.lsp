
(proclaim '(optimize (safety 2)(speed 0)))
(in-package "BCOMP")
(Use-package '("LISP" "SLOOP"))
(or (get 'call-data 'si::s-data) (load "defs.lsp"))
(or (macro-function 'dolist-safe)(load "macros.lsp"))
(or (si::specialp '*top-form*) (load "top.lsp"))
(or (si::specialp '*next-data*) (load "top2.lsp"))
(or (si::specialp '*C-OUTPUT*) (load "top.lsp"))
(or (si::specialp '*function-decls*)(load "top1.lsp"))
(or (si::specialp '*immediate-types*) (load "comptype.lsp"))
(or (fboundp 'flags-pos) (load "inline.lsp"))
(or (si::specialp '*value*)(Load "stmt.lsp"))
(or (si::specialp ' *PROMOTED-ARG-TYPES*) (load "utils.lsp"))


