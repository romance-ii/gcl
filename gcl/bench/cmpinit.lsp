(in-package 'compiler)
(defun delete-substring (sub string)
  (let ((tem (search sub string)))
    (cond (tem (concatenate 'string
			 (subseq string 0 tem)
			 (subseq string (+ tem  (length sub)) )))
	  (t string))))

(when (and (boundp 'compiler::*cc*)
	   (setq compiler::*cc*
		 (delete-substring "-msoft-float" compiler::*cc*))))


;(load "/public/akcl/cmpnew/cmpmain.lsp")
;(load "/public/akcl/cmpnew/cmptop.lsp")




