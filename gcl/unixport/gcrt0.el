(setq case-replace nil)
(setq case-fold-search nil)
(find-file "gcrt0.o")
(replace-string " start" " Start")
(goto-char (point-min))
(replace-string "_environ " "_Environ ")
(write-file "gcrt0-mod.o")


