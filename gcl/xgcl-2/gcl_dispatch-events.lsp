(in-package :XLIB)
; dispatch-events.lsp         Hiep Huu Nguyen                      27 Aug 92

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


;;have to make each type have it's own eventlist
;;and eventmask
(defun dispatch-events ()
  (setq *exit* nil)
  (mapcar #'(lambda (x)
	      (Xsync x 1))
	   *display-list*)
  (do ((window nil)
       (call-back-fn nil)
       (type nil))
    (*exit*)
    (dolist (a-display *display-list*)
      (unless  (= (XPending a-display) 0)
	(XNextEvent a-display *default-event*)
	(setq type (XAnyEvent-type  *default-event*))
	(setq window
	      (gethash (XAnyEvent-window  *default-event*)
		       *window-table*))
	(setq call-back-fns 
	      (rest (assoc type (slot-value window 'eventlist))))
	(if call-back-fns
	    (dolist (call-back-fn call-back-fns)
	      (eval `(,call-back-fn ',window))))))))
	      
	    
