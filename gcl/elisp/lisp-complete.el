;; By Bill Schelter;
;; Completion on forms in the buffer.   Does either a line or an sexp. 


(defvar  part-prompt 2)

(defun lisp-complete ()
  (interactive )
  (let ((point (point)) new str)
  (save-excursion
    (re-search-backward shell-prompt-pattern nil t)
    (goto-char (match-end 0))
    (cond ((= (char-after (- (point) 1)) ?  )
	   (setq part-prompt 2))
	  (t (setq part-prompt 1)))
    (setq str (buffer-substring (- (point) part-prompt) point))
    (setq new (lisp-complete1 str point))
    )
  (cond (new
	 (delete-region (- point (length str) (- part-prompt)) point)
	 (goto-char (+  part-prompt point))
	 (insert new)))))


(defun lisp-complete1 (str point )
  (let ((not-yet t) at end found)
    (while not-yet
      (cond ((search-backward str nil t)
	     (setq at (point))
	     (setq end (save-excursion (end-of-line) (point)))
	     (goto-char point)
	     (setq not-yet
		   (not (y-or-n-p   (buffer-substring at end))))
	     (cond (not-yet     (goto-char at))
		   (t (setq at (+  part-prompt at))
		      (setq found
		    (save-excursion (buffer-substring
		      at
		      (progn (goto-char at)
			     (max (save-excursion (end-of-line) (point))
				  (save-excursion (forward-sexp 1)(point)))
			     )))))))
	    (t (message "Not found") (setq not-yet nil)
	       )
	    ))

        found
    ))

(provide 'lisp-complete)

  
	  
	  
    

