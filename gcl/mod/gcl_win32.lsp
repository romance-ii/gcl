;(eval-when (compile load)
;	   (make-package :WIN32-PRIMITIVES :nicknames '(:WIN32PR) :use '(LISP)))
;(eval-when (compile)
	   (in-package :WIN32-PRIMITIVES)
;)

(clines "#include <windows.h>")

(defentry loadlibrary ( string ) ( int "LoadLibrary" ))
(defentry freelibrary ( int )    ( int "FreeLibrary" ))
