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

(make-package :XLIB)
(in-package :XLIB)
(sys::use-package '(:lisp :system :sys))

(defvar *files* '( "Xlib"
      "Xutil"
      "X"
      "XAtom"
      "defentry-events"
      "Xstruct"
      "XStruct-l-3"
      "general"
      "keysymdef"
      "X10"
      "Xinit"
      "dwtrans"
      "sysinit"
      ))


(defun compile-xgcl()
  (mapcar #'(lambda (x)
              (compile-file (format nil "~a.lsp" x) :system-p t)) *files*)
  )


(defun load-xgcl()
  (mapcar #'(lambda (x) (load (format nil "~a.o" x))) *files*))










