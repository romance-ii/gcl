
(in-package "TK")

(setq controls '(
		 after exit lower place send tkvars winfo focus option raise tk tkwait wm destroy grab pack selection tkerror update tk_listboxSingleSelect))

(setq widgets '(
		button listbox scale canvas menu scrollbar checkbutton menubutton text entry message  frame   label radiobutton toplevel ))


(defun get-options (com)
  (let ((tem (funcall com "jo" :return 'string))
    (cond ((equal (subseq tem 0 (length s))
		  s)
	   (setq tem (subseq tem (length s)))
	   (setq tem (substitute #\space #\, tem))
	   (setq tem (list-string tem))
	   (setq tem (delete "or" tem :test 'equal))
	   
	   (mapcar #'(lambda (x) (intern (string-upcase x) :keyword)) tem)
	   ))))
