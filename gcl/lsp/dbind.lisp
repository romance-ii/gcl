(in-package 'si)

;(defun joe ()
;  (dbind ((a) b) (foo) (print (list a b))))

(defmacro destructuring-bind
  (al val &body body &aux  *dl* (*key-check* nil)
		    (*arg-check* nil) (sym (gensym)))
  (dm-vl al sym t)
  `(compiler::stack-let
     ((,sym (cons nil ,val)))
     (let* (,@ (nreverse *dl*))
       ,@body)))


