
(defun try ()
  (interactive)
  (goto-char (point-min))
  (if (looking-at "#") (insert ";;"))
  (grab-variables)
  (goto-char (point-min))
  
  (do-replacements '(("\n\\([ \t]*\\)#" "\n\\1;;")
		     ("catch {destroy $w}"
		      "(if (winfo :exists w) (destroy w))")
		     ("\\[tk colormodel [$]w\\] == \"color\""
		      "equal (tk :colormodel w) \"color\"")
		     ))
  (goto-char (point-min))
  (replace-proc)
  (goto-char (point-min))
  (replace-if)
  (goto-char (point-min))
  
  (separate-lines)
  (goto-char (point-min))
  (replace-keywords)
  (do-replacements '(("@[$]tk_library\\([^ \t\n]+\\)"
		      "\"@\" : *tk-library* : \"\\1\"")))
  (goto-char (point-min))

  (replace-$-in-string)
  (goto-char (point-min))
  (do-replacements *replacements*)
  (goto-char (point-min))
  (do-replacements '(( "[$]\\([a-z0-9A-Z]+\\)\\([)} \n]\\)" "\\1\\2")))
  (do-replacements
   '(( " \\([0-9][0-9.]*[cmpi]\\)" " \"\\1\"")
     ("\\(:create\\|:tag\\|:add\\|:scan\\:select\\:mark\\) \\([a-z]\\)"
      "\\1 :\\2")
;		     (":add \\([a-z]\\)" ":add '\\1")
		     
     ))

  (do-replacements '(("\\([ \t]\\)[.]\\([a-z0-9A-Z.]*\\)" "\\1'.\\2")
		     ("'[.] " "'|.| ")
		     ("((conc " "(funcall (conc "))
		   t)
  )
  
(defun grab-variables ()
  (let (tem)
    (setq the-variables nil)
    (while (re-search-forward "[$]\\([a-zA-Z0-9]+\\)" nil t)
      (setq tem (buffer-substring (match-beginning 1) (match-end 1)))
      (or (member tem the-variables)
	  (setq the-variables (cons tem the-variables))))))

(defun separate-lines ()
  (interactive)
  (while (re-search-forward  "\n[ \t]*[^;#() \n]" nil t)
    (forward-char -1)
    (cond ((or (looking-at "}")
	       (looking-at "for")))
	  (t
					;    (forward-sexp -1)
	   (insert "(")
	   (re-search-forward "[^\\]\n" nil t)
	   (forward-char -1)(insert ")")
	   ))))

(defun replace-keywords ()
  (interactive)
  (while (re-search-forward "\\([ \t]\\)-\\([a-zA-Z]\\)" nil t)
    (replace-match "\\1:\\2")
    (forward-sexp 1)
    (skip-chars-forward " ")
    (cond ((looking-at "[a-z]")
	   (insert "\"")(forward-sexp 1)
	   (insert "\""))))
  (goto-char (point-min))
  (while (re-search-forward "(\\([^ ]+\\)" nil t)
    (let ((tem (buffer-substring (match-beginning 1)(match-end 0))))
;      (message (princ tem)) (sit-for 1) 
      (cond ((equal tem "defun")(forward-line 1)(beginning-of-line))
	    ((member tem '("defun" "set")))
	    (t
	     (skip-chars-forward " ")
	     (cond ((looking-at "[a-z]")
		    (insert ":"))))))))


(defvar the-variables nil)


(defun replace-$-in-string ()
  (interactive)
  (let (tem beg (end (make-marker )))
  (while
      (re-search-forward "\\([^\\]\\)[$]\\([a-zA-Z0-9]+\\)" nil t)
      (forward-char -1)
      (cond ((in-a-string)
	     (goto-char this-string-began )
	     (setq beg (point))
	     (insert "(tk-conc ")
	     (setq beg (point))
	     (forward-sexp 1)
	     (set-marker end  (point))
	     (insert ")")
	     (goto-char beg)
	     (while
		 (re-search-forward "\\([^\\]\\)[$]\\([a-zA-Z0-9]+\\)" end t)
	       (replace-match "\\1\" \\2 \""))
	     (goto-char (- beg 2))
	     (while (re-search-forward " \"\"" end t)
	       (replace-match ""))
	     (set-marker end nil)
	     ))
      
      )))

	   
	 
  
  
  

(defun change-{-to-paren ()
  (interactive)
  (let (end)
  (cond ((search-forward "{" nil t)
	 (forward-char -1)
	 (let ((p (point)))
	   (forward-sexp 1)
	   (delete-region (- (point) 1)(point))
	   (insert ")")
	   (setq end (point))
	   (goto-char p)
	   (delete-region p (+ p 1))
	   (insert "("))
	 (goto-char end)
	t))))


(defun in-a-string ()
  (interactive)
  (save-excursion
  (save-match-data
    (let ((p (point)) (c 0))
      (beginning-of-line)
      (while (re-search-forward "[^\\]\"" p t)
	(setq this-string-began (+ 1 (match-beginning 0)))
	(setq c (+ c 1)))
      (eql 1 (mod c 2))))))
      

(defun replace-proc ()
  (interactive)
  (while (re-search-forward "[ \t\n]\\(proc\\) " nil t)
    (goto-char (match-beginning 1))
    (delete-region (match-beginning 1)
		   (match-end 0))
    (insert "(defun ")
    (forward-sexp 1)
    (skip-chars-forward " \n\t")
    (cond
     ((looking-at "{{")
      (change-{-to-paren)
      (forward-sexp -1)
      (forward-char 1)
      (insert "&optional ")
      (change-{-to-paren))
     ((looking-at "{")
      (change-{-to-paren)))
    (change-{-to-paren)
    (forward-sexp -1)
    (delete-char 1)))

(defun replace-if ()
  (interactive)
  (while (re-search-forward "[ \t\n]\\(if\\) " nil t)
    (goto-char (match-beginning 1))
    (delete-region (match-beginning 1)
		   (match-end 0))
    (insert "(if ")
    (skip-chars-forward " \n\t")
    (cond
     ((looking-at "{")
      (change-{-to-paren)))
    (skip-chars-forward " \n\t")
    (cond
     ((looking-at "{")
      (change-{-to-paren)
      (save-excursion
      (forward-sexp -1)
      (forward-char 1) (insert "progn "))))
    (skip-chars-forward " \n\t")
    (cond
     ((looking-at "else")
      (replace-match ";;else \n")
      (skip-chars-forward " \n\t")
      (cond
       ((looking-at "{")
	(change-{-to-paren)
	(save-excursion
	  (forward-sexp -1)
	  (forward-char 1) (insert "progn "))))
      (insert ")")
      ))))
    
(setq *replacements*
      '(
	("[$]\\([a-zA-Z0-9]+\\)[.][$]\\([a-zA-Z0-9]+\\)[.]\\([a-z0-9A-Z.]+\\)"
	 "(conc \\1 '|.| \\2 '.\\3)")
	("[$]\\([a-zA-Z0-9]+\\)[.][$]\\([a-zA-Z0-9)]+\\)"
	 "(conc \\1 '|.| \\2)")
	("[$]\\([a-zA-Z0-9]+\\)[.]\\([a-z0-9A-Z.)]+\\)" "(conc \\1 '.\\2\)")
	("\\(<[a-z0-9A-Z---]+>\\)"  "\"\\1\"")
	("[[]expr \\([a-z$A-Z0-9]+\\)\\([ ]*[+---*][ ]*\\)\\([a-z$A-Z0-9]+\\)\\]"
	 "(\\2 \\1 \\3)")
	("[[]expr \\([a-z$A-Z0-9]+\\)\\]"     "\\1")
	("($\\([a-z0-9A-Z]+\\)[.]\\([a-z0-9A-Z.]+\\)" "(funcall (conc \\1 '.\\2)")
	("($\\([a-z0-9A-Z]+\\)" "(funcall \\1")
	("[[]$\\([a-z0-9A-Z]+\\)\\([^]]+\\)\\]" "(funcall \\1\\2)")
	("[{]$\\([a-z0-9A-Z]+\\)\\([^}]+\\)\\}" "(funcall \\1\\2)")
	("[\\]\n" "\n")
	("\n\\([ \t]*\\)#" "\n\\1;")
	("(set " "(setq ")
	("tk_menuBar" "tk-menu-bar")
	("@\\([$a-zA-Z0-9]+\\),\\([$a-zA-Z0-9]+\\)" "(aT \\1 \\2)")
	("\\(:variable\\)[ ]+\"\\([a-zA-Z0-9]+\\)\"" "\\1 '\\2")
	("\\(:textvariable\\)[ ]+\"\\([a-zA-Z0-9]+\\)\"" "\\1 '\\2")
	(":font -" ":font :")
	(":create \\([a-z]+\\)" ":create \"\\1\"")
	))


(defun do-replacements (lis &optional not-in-string)
  (let (x)
    (while lis
      (setq x (car lis)) (setq lis (cdr lis))
      (goto-char (point-min))
      (while (re-search-forward (nth 0 x) nil t)
	(and not-in-string
	     (progn (forward-char -1)
		    (not (in-a-string))))
	(replace-match (nth 1 x) t)))))

			      
  
