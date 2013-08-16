(setq clcs_shadow
 '(CONDITIONS::BREAK
   CONDITIONS::ERROR
   CONDITIONS::CERROR
   CONDITIONS::WARN
   CONDITIONS::CHECK-TYPE
   CONDITIONS::ASSERT
   CONDITIONS::ETYPECASE
   CONDITIONS::CTYPECASE
   CONDITIONS::ECASE
   CONDITIONS::CCASE ))

(setq lisp_unexport
 '(LISP::LAMBDA-BLOCK-CLOSURE
   LISP::BYE
   LISP::QUIT
   LISP::EXIT
   LISP::IEEE-FLOATING-POINT
   LISP::DEFENTRY
   LISP::VOID
   LISP::ALLOCATE-CONTIGUOUS-PAGES
   LISP::UNSIGNED-SHORT
   LISP::DOUBLE
   LISP::BY
   LISP::GBC
   LISP::DEFCFUN
   LISP::SAVE
   LISP::MAXIMUM-CONTIGUOUS-PAGES
   LISP::SPICE
   LISP::DEFLA
   LISP::ALLOCATED-PAGES
   LISP::SUN
   LISP::INT
   LISP::USE-FAST-LINKS
   LISP::CFUN
   LISP::UNSIGNED-CHAR
   LISP::HELP
   LISP::HELP*
   LISP::MACRO
   LISP::*BREAK-ENABLE*
   LISP::CLINES
   LISP::LAMBDA-CLOSURE
   LISP::OBJECT
   LISP::FAT-STRING
   LISP::SIGNED-SHORT
   LISP::MC68020
   LISP::LAMBDA-BLOCK
   LISP::TAG
   LISP::PROCLAMATION
   LISP::ALLOCATED-CONTIGUOUS-PAGES
   LISP::*EVAL-WHEN-COMPILE*
   LISP::SIGNED-CHAR
   LISP::*IGNORE-MAXIMUM-PAGES*
   LISP::*LINK-ARRAY*
   LISP::KCL
   LISP::BSD
   LISP::ALLOCATE-RELOCATABLE-PAGES
   LISP::ALLOCATE
   LISP::UNIX
   LISP::MAXIMUM-ALLOCATABLE-PAGES
   LISP::ALLOCATED-RELOCATABLE-PAGES
   LISP::SYSTEM
   LISP::KYOTO
   LISP::CCLOSURE))

;(dolist (s '(*compile-file-pathname* *compile-file-truename*
;*compile-print* *compile-verbose* *load-pathname* *load-print*
;*load-truename* *print-lines* *print-miser-width*
;*print-pprint-dispatch* *print-right-margin* *read-eval*))
;	(import (list s) "COMMON-LISP"))

;anything in "SYSTEM" which should go in "COMMON-LISP"
;can be added to shadow-system
(setf shadow-system '(system::copy-structure))

(do-external-symbols (s "SYSTEM")
		     (when (member s shadow-system)
		       (shadowing-import (list s) "COMMON-LISP")
		       (shadowing-import (list s) "USER")))
			 

(do-external-symbols (s "LISP")
  (if (not(member s lisp_unexport))
      (progn 
        (import (list s) "COMMON-LISP")
        (import (list s) "USER")) ))

(do-external-symbols (s "PCL")
  (import (list s) "COMMON-LISP")
  (import (list s) "USER"))

;(shadowing-import (list 'pcl::classp) "SYSTEM")
(setf (symbol-function 'si::classp) (symbol-function 'pcl::classp))
(setf (symbol-function 'si::class-of) (symbol-function 'pcl::class-of))
(setf (symbol-function 'si::class-precedence-list) 
	(symbol-function 'pcl::class-precedence-list))
(setf (symbol-function 'si::find-class) 
	(symbol-function 'pcl::find-class))

(do-external-symbols (s "CONDITIONS")
  (if (member s clcs_shadow)
      (progn 
        (shadowing-import (list s) "COMMON-LISP")
        (shadowing-import (list s) "USER"))
      (progn
        (import (list s) "COMMON-LISP")
        (import (list s) "USER"))))

(dolist (s '(*compile-file-pathname* *compile-file-truename*
*compile-print* *compile-verbose* *load-pathname* *load-print*
*load-truename* *print-lines* *print-miser-width*
*print-pprint-dispatch* *print-right-margin* *read-eval*
lisp::arithmetic-error broadcast-stream-streams cell-error
cell-error-name compile compile-file compiler-macro
compiler-macro-function complement concatenated-stream-streams
condition control-error copy-pprint-dispatch copy-structure count
debug define-compiler-macro define-setf-expander define-symbol-macro
defpackage describe describe-object division-by-zero dynamic-extent
echo-stream-input-stream echo-stream-output-stream
ensure-directories-exist fdefinition file-string-length formatter
function-lambda-expression get-setf-expansion hash-table-rehash-size
hash-table-rehash-threshold ignorable interactive-stream-p
load-logical-pathname-translations load-time-value
logical-pathname-translations make-load-form
make-load-form-saving-slots make-method open-stream-p pathname-match-p
pprint-dispatch pprint-exit-if-list-exhausted pprint-fill
pprint-indent pprint-linear pprint-logical-block pprint-newline
pprint-pop pprint-tab pprint-tabular print-not-readable-object
print-unreadable-object readtable-case row-major-aref
set-pprint-dispatch simple-condition-format-control
stream-external-format synonym-stream-symbol
translate-logical-pathname translate-pathname
two-way-stream-input-stream two-way-stream-output-stream
unbound-slot-instance 
upgraded-complex-part-type wild-pathname-p with-compilation-unit
with-condition-restarts with-package-iterator with-standard-io-syntax
 ))
	(shadowing-import (list s) "COMMON-LISP"))

(use-package "ANSI-LOOP" "COMMON-LISP")
(use-package "ANSI-LOOP" "USER")

(do-symbols (s "COMMON-LISP")
  (export (list s) "COMMON-LISP"))
  
(makunbound 'clcs_shadow)
(makunbound 'lisp_unexport)
(makunbound 'shadow-system)
(unintern 'clcs_shadow)
(unintern 'lisp_unexport)
(unintern 'int)
(unintern 'shadow-system)

(push :common-lisp *features*)
(push :ansi-cl *features*)

(rename-package 'common-lisp 'common-lisp '(cl))
(rename-package 'user 'common-lisp-user '(cl-user user))

