
;; Loading the following causes these non standard symbols in the LISP
;; package, to no longer be automatically exported to packages which
;; use LISP.  For example BYE will no longer be accessible from package
;; USER.   You will need to type (lisp::bye) to quit.   Of course references
;; to BYE before this file was loaded will mean the symbol BYE in the lisp
;; package.

;; Someday this file may be loaded by default in GCL, so you should
;; probably use the LISP:: prefix for these symbols, as protection
;; against that day.

(unexport
 '(LISP::LAMBDA-BLOCK-CLOSURE
   LISP::BYE LISP::QUIT LISP::EXIT LISP::IEEE-FLOATING-POINT
   LISP::DEFENTRY LISP::VOID LISP::ALLOCATE-CONTIGUOUS-PAGES
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
   LISP::CCLOSURE)
 'LISP
 )