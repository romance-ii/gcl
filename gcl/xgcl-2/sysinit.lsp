; Copyright (c) 1994 William F. Schelter

; See the files gnu.license and dec.copyright .

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 1, or (at your option)
; any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

; Some of the files that interface to the Xlib are adapted from DEC/MIT files.
; See the file dec.copyright for details.

(in-package :XLIB)

;; This file is used for defining the C function user_init, to run the
;; initialization code from a list of files in *files*.   These files
;; should have been compiled with (compile-file "foo.lsp" :system-p t)
;; and have been linked into the image.   It presumes the .o files
;; are in the current directory, and the files *files* are in the proper
;; order to be loaded.

;;define a function USER::USER-INIT, which will run the init code for a set
;;of files which are linked into an image.

(clines "#define init_or_load(fn,file) do {extern void fn(void); gcl_init_or_load1(fn,file);}  while(0)")
(clines "static void")
(clines "load1(char *x) {")
(clines "printf(\"loading %s\\n\",x);")
(clines "fflush(stdout);")
(clines "load(x);")
(clines "}")

#.  
(let ((files  *files*))
    (declare (special object-path))
    (with-open-file (st "maxobjs" :direction :output)
    `(progn
       (clines "object user_init() {")
       (clines "load1(\"../xgcl-2/sysdef.lisp\");")
     ,@(sloop::sloop for x  in files
	for f  = (substitute #\_ #\-  x)
	for ff =  (namestring (truename (format nil "~a.o" x)))
	do (princ ff st) (princ " " st)
	collect
	`(clines ,(Format nil "init_or_load(init_~a,\"~a\");" f ff))
	finally (terpri st)
	))
    
    ))

(clines "return Cnil;}")

;; invoke this to initialize maxima.

;; make this if you dont want the invocation done automatically.
;(defentry user::user-init () "user_init")


  
  
