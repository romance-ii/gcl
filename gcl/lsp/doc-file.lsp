(defun doc-file (file packages)
;;Write FILE of doc strings for all symbols in PACKAGES
;;This file is suitable for use with the find-doc function.
  #+kcl
  (and (member 'lisp packages)
       (not (documentation 'setq 'function))
       (load (format nil "~a../lsp/setdoc.lsp" si::*system-directory*)))
  (with-open-file (st file :direction :output)
   (sloop:sloop
    for v in packages
    do (setq v (if (packagep v) (package-name v) v))
    do (sloop:sloop
	for w in-package v
	when  (setq doc (documentation w 'function))
	do (format st "F~a~%~ain ~a package:~a" w
		   (cond ((special-form-p w) "Special Form ")
			 ((functionp w) "Function ")
			 ((macro-function w) "Macro ")
			 (t ""))
		   v
		   doc)
	when (setq doc (documentation w 'variable))
	do (format st "V~a~%Variable in ~a package:~a" w v doc)
	))))
