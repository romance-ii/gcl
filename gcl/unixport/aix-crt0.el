(setq case-replace nil)
(setq case-fold-search nil)
(insert-file "/lib/crt0.o")
(if buffer-read-only (toggle-read-only))
(replace-string "mcount" "Mcount")
(write-file "./aix_crt0.o")

