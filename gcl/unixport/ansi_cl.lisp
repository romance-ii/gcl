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

(do-external-symbols (s "LISP")
  (if (not(member s lisp_unexport))
      (progn 
        (import (list s) "COMMON-LISP")
        (import (list s) "USER")) ))

(do-external-symbols (s "PCL")
  (import (list s) "COMMON-LISP")
  (import (list s) "USER"))

(do-external-symbols (s "CONDITIONS")
  (if (member s clcs_shadow)
      (progn 
        (shadowing-import (list s) "COMMON-LISP")
        (shadowing-import (list s) "USER"))
      (progn
        (import (list s) "COMMON-LISP")
        (import (list s) "USER"))))

(use-package "ANSI-LOOP" "COMMON-LISP")
(use-package "ANSI-LOOP" "USER")

(do-symbols (s "COMMON-LISP")
  (export (list s) "COMMON-LISP"))
  
(makunbound 'clcs_shadow)
(makunbound 'lisp_unexport)
(unintern 'clcs_shadow)
(unintern 'lisp_unexport)
(unintern 'int)

(push ':ansi-cl *features*)

(rename-package 'common-lisp 'common-lisp '(cl))
(rename-package 'user 'common-lisp-user '(cl-user user))

(si::save-system "saved_ansi_gcl")

