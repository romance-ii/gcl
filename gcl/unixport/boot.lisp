(in-package 'compiler)(cdebug)

#+pre-gcl
(progn
  (unless (fboundp 'logandc2) (defun logandc2 (x y) (boole boole-andc2 x y)))
  (unless (fboundp 'lognot) (defun lognot (x) (boole boole-c1 x 0)))
  (defun mc nil (si::make-anonymous-closure))
  (defun tt3 (x) (lit :fixnum "fto(" (:object x) ")"))
  (si::putprop 'tt3 t 'cmp-inline)
  (defun tt30 (x) (lit :boolean "!fto0(" (:object x) ")"))
  (si::putprop 'tt30 t 'cmp-inline)
  (compile 'tt3)
  (compile 'tt30)
  (setq *rep-lst1* (mapcar (lambda (x) (list (car x) (tt3 (eval (cdr x))))) *rep-lst*))
  (mapc 'compile '(c-array-rank c-array-dim c-array-elttype c-array-eltsize c-array-self c-array-hasfillp))
  (setf (symbol-function 'array-rank) (symbol-function 'c-array-rank)
	(symbol-function 'array-total-size) (symbol-function 'c-array-dim))
  (mapc 'compile '(array-dimension array-row-major-index row-major-aref si::row-major-aset aref si::aset array-has-fill-pointer-p length)))

(in-package 'user)

(defun doitf (l dir ld?)
  (time (funcall ld? (compile-file (concatenate 'string "../" dir "/gcl_" (string-downcase (string l)) ".lsp")))))

(defun doit (ld?)

  ;; (dolist (l '(cp));c::>= object_to_dcomplex prob at safety 3
  ;;   (doitf l "lsp" ld?))
  
  #+pre-gcl(declaim (optimize (safety 3)))
  
  (dolist (l '(s sf c listlib predlib arraylib seq seqlib bnum fle dl rm nr lr sym hash))
    (doitf l "lsp" ld?))
  
  (dolist (l '(cmptype cmpeval cmpvar cmpwt cmpif cmplet cmptag cmpinline cmpenv cmplam cmptop
		       cmpbind cmpblock cmpcall cmpcatch cmpflet cmpfun cmplabel cmploc cmpmap 
		       cmpmulti cmpspecial cmputil cmpvs cmpmain))
    (doitf l "cmpnew" ld?))
  
  (with-open-file (s "../lsp/gcl_recompile.lsp" :direction :output))
  (dolist (l '(recompile callhash assert defmacro defstruct describe evalmacros sc
			 iolib mislib module numlib packlib setf top trace sloop debug info serror mnum))
    (doitf l "lsp" 'identity)))

(doit (if (boundp 'noload) 'identity 'load))
