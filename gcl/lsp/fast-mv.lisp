(in-package 'compiler)

;; Author W. Schelter

;; Using fast-values in place of values, and fast-multiple-setq
;; allow functions to still be declared to have only 1 value, while
;; in effect returning several.   This allows a great speed up in
;; returning extra values.   Eventually we may incorporate this system
;; to allow similar code to be put out where multiple values are proclaimed
;; for the function.

;; The primitives set-mv and  mv-ref provide access to 10 storage places
;; directly by address, without the indirection of going through an array
;; or symbol.

;; Sample usage:

;;(proclaim '(function goo-fast-mv () t))
;;(proclaim '(function foo-fast-mv (t) t))
;;
;;(defun foo-fast-mv (n)
;;  (let (x y z)
;;   (sloop for i below n
;;	 do (fast-multiple-value-setq (x y z) (goo-fast-mv)))
;;  (list x y z)))
;;
;;(defun goo-fast-mv  () (fast-values 1 2 7))

(defmacro fast-values (a &rest l)
  (or (< (length l) 10) (error "too many values"))
  `(prog1 ,a ,@ (sloop::sloop for v in l
		       for i below 10
		       collect `(si::set-mv ,i ,v))))

(defmacro fast-multiple-value-setq ((x &rest l) form)
  (or (< (length l) 10) (error "too many values"))
  `(prog1 (setq ,x ,form)
     ,@ (sloop::sloop for i below 10
	       for v in l
	       collect `(setq ,v (si::mv-ref ,i)))))

