(in-package :XLIB)
; general.lsp         Hiep Huu Nguyen                      27 Aug 92

; Copyright (c) 1994 Hiep Huu Nguyen and The University of Texas at Austin.

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

(defentry free (int) (void free))
(defentry calloc(int int) (int calloc))
(defentry char-array (int) (int char_array))
(defentry char-pos (int int) (char char_pos))
(defentry int-array (int) (int int_array))
(defentry int-pos (int int) (int int_pos))
(defentry set-char-array (int int char) (void set_char_array))
(defentry set-int-array (int int int) (void set_int_array))

;;from mark ring's function
;; General routines.
(defCfun "object  get_c_string(s) object s;" 0
  " return( s->st.st_self);"
  )
(defentry get_c_string_2 (object) (object get_c_string))

;; make sure string is null terminated

(defentry get-c-string (object) (object "(object)object_to_string"))


;; General routines.
(defCfun "object lisp_string(a_string, c_string ) object a_string; int  c_string; " 0
  "int len = strlen(c_string);"
  "a_string->st.st_dim = len;"
  "a_string->st.st_fillp = len;"
  "a_string->st.st_self = c_string;"
  "return(a_string);"
  )

(defentry  lisp-string-2 (object int ) (object lisp_string))
(defun lisp-string (a-string )
  (lisp-string-2 "" a-string ))

;;modified from mark ring's function
;; General routines.
(defCfun "int   get_st_point(s) object s;" 0
  " return((int) s->st.st_self);"
  )
(defentry get-st-point2 (object) (int get_c_string))

;; make sure string is null terminated
(defun  get-st-point (string)
  ( get-st-point2 (concatenate 'string string "")))

(defentry vertex-array (int) (int vertex_array))
(defentry vertex-pos-x (int int) (int vertex_pos_x))
(defentry vertex-pos-y (int int) (int vertex_pos_y))
(defentry vertex-pos-flag (int int) (int vertex_pos_flag))
(defentry set-vertex-array (int int int int int) (void set_vertex_array))
;(defentry Xdraw (int int int int int) (int "XDraw"))
;(defentry Xdrawfilled (int int int int int) (int "XDrawFilled"))

