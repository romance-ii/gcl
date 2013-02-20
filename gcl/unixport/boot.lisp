(in-package :compiler)(cdebug)

#+pre-gcl
(progn
  (declaim (optimize (safety 3)))
  (unless (fboundp 'logandc2) (defun logandc2 (x y) (boole boole-andc2 x y)))
  (unless (fboundp 'lognot) (defun lognot (x) (boole boole-c1 x 0)))
  (defun mc nil (si::make-anonymous-closure))
;  (compile 'compiler::function-symbol)
;  (mapc 'compile 'si::(funid-sym funid-sym-p funid funid-p funid-to-sym tpi ibb ib <= typep < > >= + - set-array concatenate))
  (mapc 'compile 'si::(listp typep ibb ib <= coerce < > >= + - set-array concatenate mta mtv eql-is-eq))
  (mapc 'compile '(info-p info-ref info-type info-flags info-ch info-ref-ccb info-ref-clb c1constant-value-object))
  (mapc 'compile '(var-p var-name var-kind var-ref var-ref-ccb var-loc var-dt var-type var-mt var-tag var-store))
  (mapc 'compile '(c-array-rank c-array-dim c-array-elttype c-array-eltsize c-array-self c-array-hasfillp))
  (setf (symbol-function 'array-rank) (symbol-function 'c-array-rank)
	(symbol-function 'array-total-size) (symbol-function 'c-array-dim))
  (mapc 'compile '(array-dimension array-row-major-index row-major-aref si::row-major-aset aref si::aset array-has-fill-pointer-p length)))

(in-package :user)

(defun doitf (l dir ld? cmpl?)
  (time (funcall ld? (funcall cmpl? (concatenate 'string "../" dir "/gcl_" (string-downcase (string l)) 
						 (if (eq cmpl? 'compile-file) ".lsp" ""))))))

(defun doit (ld? cmpl?)

  (dolist (l '(s sf c listlib predlib type typep typecase arraylib seq seqlib bnum fle dl rm nr lr sym hash))
    (doitf l "lsp" ld? cmpl?))
  
  (dolist (l '(cmptype cmpeval cmpvar cmpwt cmpif cmplet cmptag cmpinline cmpenv cmplam cmptop
		       cmpbind cmpblock cmpcall cmpcatch cmpflet cmpfun cmplabel cmploc cmpmap 
		       cmpmulti cmpspecial cmputil cmpvs cmpmain))
    (doitf l "cmpnew" ld? cmpl?))
  
  (with-open-file (s "../lsp/gcl_recompile.lsp" :direction :output))
  (dolist (l '(recompile callhash assert defmacro defstruct describe evalmacros sc
			 iolib mislib module numlib packlib setf top trace sloop debug info serror mnum))
    (doitf l "lsp" 'identity cmpl?)))

(doit (if (boundp 'noload) 'identity 'load) 'compile-file)
