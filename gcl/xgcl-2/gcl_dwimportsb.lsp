; dwimportsb.lsp       Gordon S. Novak Jr.              11 Sep 06

; Copyright (c) 2006 Gordon S. Novak Jr. and The University of Texas at Austin.

; This file imports symbols of the XGCL package; these symbols may be
; needed by a hard-core user of the Xlib functions.

; See the file gnu.license .

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

; This file imports symbols from the dwindow.lsp file (in XLIB: package)
; to the current package (such as the :USER package).
; This will allow the dwindow.lsp functions to be called by just their
; names and without any package qualifier.

; This file should be loaded immediately after starting Lisp:
; If Lisp has seen any of these symbols, loading this file will cause an error.

(dolist (x '(xlib::XRecolorCursor
xlib::XFlush xlib::XUnMapWindow xlib::XClearWindow xlib::XMapWindow
xlib::XTextWidth xlib::XOpenDisplay xlib::XdefaultScreen xlib::XRootWindow
xlib::XBlackPixel xlib::XWhitePixel xlib::XDefaultGC xlib::XDefaultColormap
xlib::make-XsetWindowAttributes xlib::set-XsetWindowAttributes-backing_store
xlib::set-XsetWindowAttributes-save_under xlib::make-XWindowAttributes
xlib::make-XsizeHints xlib::make-XEvent xlib::make-XGCValues
xlib::XQueryPointer xlib::XCreateSimpleWindow xlib::XsetStandardProperties
xlib::XCreateGC xlib::CWSaveUnder xlib::CWBackingStore
xlib::XloadQueryFont xlib::XsetFont xlib::XGetGCValues
xlib::XGCValues-foreground xlib::XsetForeground xlib::XGCValues-Background
xlib::XsetBackground xlib::XGCValues-function xlib::XCreateFontCursor
xlib::XDefineCursor xlib::XGetGeometry
xlib::Xsync xlib::XsetFunction xlib::GXxor xlib::GXcopy
xlib::XsetLineAttributes xlib::LineSolid xlib::CapButt xlib::JoinMiter
xlib::XDrawLine xlib::XdrawArc xlib::XClearArea xlib::XCopyArea
xlib::XFillRectangle xlib::XdrawImageString xlib::XTextExtents
xlib::XDestroyWindow xlib::XFreeGC xlib::XMoveWindow xlib::Xsync
xlib::Xselectinput xlib::ButtonPressMask xlib::PointerMotionMask
xlib::XNextEvent xlib::XAnyEvent-type xlib::XAnyEvent-window
xlib::MotionNotify xlib::ButtonPress
xlib::XMotionEvent-x xlib::XMotionEvent-y xlib::XButtonEvent-button
xlib::XAnyEvent-window
xlib::XButtonEvent-button xlib::XWindowAttributes-map_state
xlib::ISUnmapped xlib::XPending
xlib::Expose xlib::XAllocColor xlib::XColor-Pixel xlib::XFreeColors
xlib::KeyPressMask xlib::KeyReleaseMask xlib::KeyRelease
xlib::KeyPress xlib::ButtonPress xlib::XDisplayKeycodes
xlib::XGetKeyboardMapping
xlib::XFree xlib::XK_Shift_R xlib::XK_Shift_L xlib::XK_Control_L
xlib::XK_Control_R xlib::XK_Alt_R xlib::XK_Alt_L xlib::XK_Return
xlib::XK_Tab xlib::XK_BackSpace xlib::get-c-string xlib::int-pos
xlib::fixnum-array xlib::int-array xlib::fixnum-pos
xlib::set-xsizehints-x xlib::set-xsizehints-y xlib::set-xsizehints-width
xlib::set-xsizehints-height xlib::set-xsizehints-flags xlib::set-foreground
xlib::set-background xlib::set-font
xlib::set-cursor xlib::set-line-width xlib::set-line-attr
xlib::set-Xcolor-red xlib::set-Xcolor-green xlib::set-Xcolor-blue
xlib::WhenMapped xlib::Psize xlib::Pposition xlib::CWSaveUnder
xlib::CWBackingStore xlib::NoSymbol
xlib::leavewindowmask xlib::buttonreleasemask xlib::exposuremask
xlib::GCForeground xlib::GCBackground xlib::GCFunction
xlib::None xlib::Xfontstruct-fid xlib::XChangeWindowAttributes
xlib::XGetWindowAttributes lisp::null xlib::Make-Xcolor
 )) (import x) )
