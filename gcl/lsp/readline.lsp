(in-package "SI"  )
(defun init-readline () 
					; init Readline word completion list for Gcl
  (if (fboundp 'si::readline-init)
      (let (l)
	(sloop::sloop for v in-package 'lisp do
		      (if (or (boundp v) (fboundp v))
			  (setq l (cons (symbol-name v) l))))
	(sloop::sloop for v in-package 'keyword do
		      (if (or (boundp v) (fboundp v))
			  (setq l (cons (format nil ":~A" v) l))))
	(si::readline-init t "Gcl" 1 l))))
