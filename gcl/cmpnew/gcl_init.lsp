(defun lcs1 (file)
       (compile-file file
                     :c-file t :h-file t :data-file t :ob-file t
                     :system-p t))
