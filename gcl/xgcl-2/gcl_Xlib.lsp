(in-package :XLIB)
; Xlib.lsp         Hiep Huu Nguyen                      27 Aug 92

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

;;typedef unsigned long XID) ;

;;typedef XID Window) ;
;;typedef XID Drawable) ;
;;typedef XID Font) ;
;;typedef XID Pixmap) ;
;;typedef XID Cursor) ;
;;typedef XID Colormap) ;
;;typedef XID GContext) ;
;;typedef XID KeySym) ;

;;typedef unsigned long Mask) ;

;;typedef unsigned long Atom) ;

;;typedef unsigned long VisualID) ;

;;typedef unsigned long Time) ;

;;typedef unsigned char KeyCode) ;

(defconstant  True 1)
(defconstant  False 0)

(defconstant  QueuedAlready 0)
(defconstant  QueuedAfterReading 1)
(defconstant  QueuedAfterFlush 2)


(defentry XLoadQueryFont(

    int		;; display 
    object		;; name 

)( int  "XLoadQueryFont"))



(defentry  XQueryFont(

    int		;; display 
    int			;; font_ID 

)( int  "XQueryFont"))




(defentry  XGetMotionEvents(

    int		;; display 
    int		;; w 
    int		;; start 
    int		;; stop 
    int		;; nevents_return 

)( int  "XGetMotionEvents"))



(defentry  XDeleteModifiermapEntry(

    int	;; modmap 

    int		;; keycode_entry 

    int			;; modifier 

)( int  "XDeleteModifiermapEntry"))



(defentry  XGetModifierMapping(

    int		;; display 

)( 	int "XGetModifierMapping"))



(defentry  XInsertModifiermapEntry(

    int	;; modmap 

    int		;; keycode_entry 

    int			;; modifier     

)( 	int  "XInsertModifiermapEntry"))



(defentry  XNewModifiermap(

    int			;; max_keys_per_mod 

)( int  "XNewModifiermap"))



(defentry  XCreateImage(

    int		;; display 
    int		;; visual 
     int	;; depth 
    int			;; format 
    int			;; offset 
   object		;; data 
     int	;; width 
     int	;; height 
    int			;; bitmap_pad 
    int			;; bytes_per_line 

)( int  "XCreateImage"))


(defentry  XGetImage(

    int		;; display 
    int		;; d 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 
     int	;; plane_mask 
    int			;; format 

)( int  "XGetImage"))


(defentry  XGetSubImage(

    int		;; display 
    int		;; d 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 
     int	;; plane_mask 
    int			;; format 
    int 	;; dest_image 
    int			;; dest_x 
    int			;; dest_y 

)( int "XGetSubImage"))

;;Window  X function declarations.
 


(defentry  XOpenDisplay(

    object		;; display_name 

)( int  "XOpenDisplay"))



(defentry XrmInitialize(

;;    void

)( void "XrmInitialize"))



(defentry  XFetchBytes(

    int		;; display 
    int		;; nbytes_return 

)( int  "XFetchBytes"))


(defentry  XFetchBuffer(

    int		;; display 
    int		;; nbytes_return 
    int			;; buffer 

)( int  "XFetchBuffer"))


(defentry  XGetAtomName(

    int		;; display 
    int		;; atom 

)( int  "XGetAtomName"))


(defentry  XGetDefault(

    int		;; display 
    object		;; program 
    object		;; option 		  

)( int  "XGetDefault"))


(defentry  XDisplayName(

    object		;; string 

)( int  "XDisplayName"))


(defentry  XKeysymToString(

    int		;; keysym 

)( int  "XKeysymToString"))




(defentry XInternAtom(

    int		;; display 
    object		;; atom_name 
    int		;; only_if_exists 		 

)( int "XInternAtom"))


(defentry XCopyColormapAndFree(

    int		;; display 
    int		;; colormap 

)( int "XCopyColormapAndFree"))


(defentry XCreateColormap(

    int		;; display 
    int		;; w 
    int		;; visual 
    int			;; alloc 			 

)( int "XCreateColormap"))


(defentry XCreatePixmapCursor(

    int		;; display 
    int		;; source 
    int		;; mask 
    int		;; foreground_color 
    int		;; background_color 
     int	;; x 
     int	;; y 			   

)( int "XCreatePixmapCursor"))


(defentry XCreateGlyphCursor(

    int		;; display 
    int		;; source_font 
    int		;; mask_font 
     int	;; source_char 
     int	;; mask_char 
    int		;; foreground_color 
    int		;; background_color 

)( int "XCreateGlyphCursor"))


(defentry XCreateFontCursor(

    int		;; display 
     int	;; shape 

)( int "XCreateFontCursor"))


(defentry XLoadFont(

    int		;; display 
    object		;; name 

)( int "XLoadFont"))


(defentry XCreateGC(

    int		;; display 
    int		;; d 
     int	;; valuemask 
    int		;; values 

)( int "XCreateGC"))


(defentry XGContextFromGC(

    int			;; gc 

)( int "XGContextFromGC"))


(defentry XCreatePixmap(

    int		;; display 
    int		;; d 
     int	;; width 
     int	;; height 
     int	;; depth 		        

)( int "XCreatePixmap"))


(defentry XCreateBitmapFromData(

    int		;; display 
    int		;; d 
    object		;; data 
     int	;; width 
     int	;; height 

)( int "XCreateBitmapFromData"))


(defentry XCreatePixmapFromBitmapData(

    int		;; display 
    int		;; d 
   object		;; data 
     int	;; width 
     int	;; height 
     int	;; fg 
     int	;; bg 
     int	;; depth 

)( int "XCreatePixmapFromBitmapData"))


(defentry XCreateSimpleWindow(

    int		;; display 
    int		;; parent 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 
     int	;; border_width 
     int	;; border 
     int	;; background 

)( int "XCreateSimpleWindow"))


(defentry XGetSelectionOwner(

    int		;; display 
    int		;; selection 

)( int "XGetSelectionOwner"))


(defentry XCreateWindow(

    int		;; display 
    int		;; parent 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 
     int	;; border_width 
    int			;; depth 
     int	;; class 
    int		;; visual 
     int	;; valuemask 
    int	;; attributes 

)( int "XCreateWindow")) 


(defentry  XListInstalledColormaps(

    int		;; display 
    int		;; w 
    int		;; num_return 

)( int  "XListInstalledColormaps"))


(defentry XListFonts(

    int		;; display 
    object		;; pattern 
    int			;; maxnames 
    int		;; actual_count_return 

)( int "XListFonts"))


(defentry XListFontsWithInfo(

    int		;; display 
    object		;; pattern 
    int			;; maxnames 
    int		;; count_return 
    int		;; info_return 

)( int "XListFontsWithInfo"))


(defentry XGetFontPath(

    int		;; display 
    int		;; npaths_return 

)( int "XGetFontPath"))


(defentry XListExtensions(

    int		;; display 
    int		;; nextensions_return 

)( int "XListExtensions"))


(defentry  XListProperties(

    int		;; display 
    int		;; w 
    int		;; num_prop_return 

)( int  "XListProperties"))


(defentry XListHosts(

    int		;; display 
    int		;; nhosts_return 
    int		;; state_return 

)( int "XListHosts"))


(defentry XKeycodeToKeysym(

    int		;; display 

    int		;; int 

    int			;; index 

)( int "XKeycodeToKeysym"))


(defentry XLookupKeysym(

    int		;; key_event 
    int			;; index 

)( int "XLookupKeysym"))


(defentry  XGetKeyboardMapping(

    int		;; display 

    int		;; first_keycode

    int			;; keycode_count 
    int		;; keysyms_per_keycode_return 

)( int  "XGetKeyboardMapping"))


(defentry XStringToKeysym(

    object		;; string 

)( int "XStringToKeysym"))


(defentry XMaxRequestSize(

    int		;; display 

)( int "XMaxRequestSize"))


(defentry XResourceManagerString(

    int		;; display 

)( int "XResourceManagerString"))


(defentry XDisplayMotionBufferSize(

    int		;; display 

)( int "XDisplayMotionBufferSize"))


(defentry XVisualIDFromVisual(

    int		;; visual 

)( int "XVisualIDFromVisual"))

;; routines for dealing with extensions 



(defentry  XInitExtension(

    int		;; display 
    object		;; name 

)( int  "XInitExtension"))



(defentry  XAddExtension(

    int		;; display 

)( int  "XAddExtension"))


(defentry  XFindOnExtensionList(

    int		;; structure 
    int			;; number 

)( int  "XFindOnExtensionList"))



;;;fix


(defentry XEHeadOfExtensionList(

    int	;;object 

)( int "XEHeadOfExtensionList"))

;; these are routines for which there are also macros 


(defentry XRootWindow(

    int		;; display 
    int			;; screen_number 

)( int "XRootWindow"))


(defentry XDefaultRootWindow(

    int		;; display 

)( int "XDefaultRootWindow"))


(defentry XRootWindowOfScreen(

    int		;; screen 

)( int "XRootWindowOfScreen"))


(defentry  XDefaultVisual(

    int		;; display 
    int			;; screen_number 

)( int  "XDefaultVisual"))


(defentry  XDefaultVisualOfScreen(

    int		;; screen 

)( int  "XDefaultVisualOfScreen"))


(defentry XDefaultGC(

    int		;; display 
    int			;; screen_number 

)( int "XDefaultGC"))


(defentry XDefaultGCOfScreen(

    int		;; screen 

)( int "XDefaultGCOfScreen"))


(defentry XBlackPixel(

    int		;; display 
    int			;; screen_number 

)( int "XBlackPixel"))


(defentry XWhitePixel(

    int		;; display 
    int			;; screen_number 

)( int "XWhitePixel"))


(defentry XAllPlanes(

;;    void

)( int "XAllPlanes"))


(defentry XBlackPixelOfScreen(

    int		;; screen 

)( int "XBlackPixelOfScreen"))


(defentry XWhitePixelOfScreen(

    int		;; screen 

)( int "XWhitePixelOfScreen"))


(defentry XNextRequest(

    int		;; display 

)( int "XNextRequest"))


(defentry XLastKnownRequestProcessed(

    int		;; display 

)( int "XLastKnownRequestProcessed"))


(defentry  XServerVendor(

    int		;; display 

)( int  "XServerVendor"))


(defentry  XDisplayString(

    int		;; display 

)( int  "XDisplayString"))


(defentry XDefaultColormap(

    int		;; display 
    int			;; screen_number 

)( int "XDefaultColormap"))


(defentry XDefaultColormapOfScreen(

    int		;; screen 

)( int "XDefaultColormapOfScreen"))


(defentry  XDisplayOfScreen(

    int		;; screen 

)( int  "XDisplayOfScreen"))


(defentry  XScreenOfDisplay(

    int		;; display 
    int			;; screen_number 

)( int  "XScreenOfDisplay"))


(defentry  XDefaultScreenOfDisplay(

    int		;; display 

)( int  "XDefaultScreenOfDisplay"))


(defentry XEventMaskOfScreen(

    int		;; screen 

)( int "XEventMaskOfScreen"))



(defentry XScreenNumberOfScreen(

    int		;; screen 

)( int "XScreenNumberOfScreen"))



(defentry XSetErrorHandler (

    int	;; handler 

)( int "XSetErrorHandler" ))


;;fix


(defentry XSetIOErrorHandler (

    int	;; handler 

)( int "XSetIOErrorHandler" ))




(defentry XListPixmapFormats(

    int		;; display 
    int		;; count_return 

)( int "XListPixmapFormats"))


(defentry  XListDepths(

    int		;; display 
    int			;; screen_number 
    int		;; count_return 

)( int  "XListDepths"))

;; ICCCM routines for things that don't require special include files; 
;; other declarations are given in Xutil.h                             


(defentry XReconfigureWMWindow(

    int		;; display 
    int		;; w 
    int			;; screen_number 
     int	;; mask 
    int		;; changes 

)( int "XReconfigureWMWindow"))



(defentry XGetWMProtocols(

    int		;; display 
    int		;; w 
    int		;; protocols_return 
    int		;; count_return 

)( int "XGetWMProtocols"))


(defentry XSetWMProtocols(

    int		;; display 
    int		;; w 
    int		;; protocols 
    int			;; count 

)( int "XSetWMProtocols"))


(defentry XIconifyWindow(

    int		;; display 
    int		;; w 
    int			;; screen_number 

)( int "XIconifyWindow"))


(defentry XWithdrawWindow(

    int		;; display 
    int		;; w 
    int			;; screen_number 

)( int "XWithdrawWindow"))

;;;fix


(defentry XGetCommand(

    int		;; display 
    int		;; w 
   int 		;; argv_return 
    int		;; argc_return 

)( int "XGetCommand"))


(defentry XGetWMColormapWindows(

    int		;; display 
    int		;; w 
    int		;; windows_return 
    int		;; count_return 

)( int "XGetWMColormapWindows"))


(defentry XSetWMColormapWindows(

    int		;; display 
    int		;; w 
    int		;; colormap_windows 
    int			;; count 

)( int "XSetWMColormapWindows"))


(defentry XFreeStringList(

   int 	;; list 

)( void "XFreeStringList"))


(defentry XSetTransientForHint(

    int		;; display 
    int		;; w 
    int		;; prop_window 

)( void "XSetTransientForHint"))

;; The following are given in alphabetical order 



(defentry XActivateScreenSaver(

    int		;; display 

)( void "XActivateScreenSaver"))



(defentry XAddHost(

    int		;; display 
    int	;; host 

)( void "XAddHost"))



(defentry XAddHosts(

    int		;; display 
    int		;; hosts 
    int			;; num_hosts     

)( void "XAddHosts"))



(defentry XAddToExtensionList(

    int	;; structure 
    int		;; ext_data 

)( void "XAddToExtensionList"))



(defentry XAddToSaveSet(

    int		;; display 
    int		;; w 

)( void "XAddToSaveSet"))



(defentry XAllocColor(

    int		;; display 
    int		;; colormap 
    int		;; screen_in_out 

)( int "XAllocColor"))

;;;fix


(defentry XAllocColorCells(

    int		;; display 
    int		;; colormap 
    int	        ;; contig 
     int ;; plane_masks_return 
     int	;; nplanes 
     int ;; pixels_return 
     int 	;; npixels 

)( int "XAllocColorCells"))



(defentry XAllocColorPlanes(

    int		;; display 
    int		;; colormap 
    int		;; contig 
     int ;; pixels_return 
    int			;; ncolors 
    int			;; nreds 
    int			;; ngreens 
    int			;; nblues 
     int ;; rmask_return 
     int ;; gmask_return 
     int ;; bmask_return 

)( int "XAllocColorPlanes"))



(defentry XAllocNamedColor(

    int		;; display 
    int		;; colormap 
    object		;; color_name 
    int		;; screen_def_return 
    int		;; exact_def_return 

)( int "XAllocNamedColor"))



(defentry XAllowEvents(

    int		;; display 
    int			;; event_mode 
    int		;; time

)( void "XAllowEvents"))



(defentry XAutoRepeatOff(

    int		;; display 

)( void "XAutoRepeatOff"))



(defentry XAutoRepeatOn(

    int		;; display 

)( void "XAutoRepeatOn"))



(defentry XBell(

    int		;; display 
    int			;; percent 

)( void "XBell"))



(defentry XBitmapBitOrder(

    int		;; display 

)( int "XBitmapBitOrder"))



(defentry XBitmapPad(

    int		;; display 

)( int "XBitmapPad"))



(defentry XBitmapUnit(

    int		;; display 

)( int "XBitmapUnit"))



(defentry XCellsOfScreen(

    int		;; screen 

)( int "XCellsOfScreen"))



(defentry XChangeActivePointerGrab(

    int		;; display 
     int	;; event_mask 
    int		;; cursor 
    int		;; time

)( void "XChangeActivePointerGrab"))



(defentry XChangeGC(

    int		;; display 
    int			;; gc 
     int	;; valuemask 
    int		;; values 

)( void "XChangeGC"))



(defentry XChangeKeyboardControl(

    int		;; display 
     int	;; value_mask 
    int 	;; values 

)( void "XChangeKeyboardControl"))



(defentry XChangeKeyboardMapping(

    int		;; display 
    int			;; first_keycode 
    int			;; keysyms_per_keycode 
    int			;; keysyms 
    int			;; num_codes 

)( void "XChangeKeyboardMapping"))



(defentry XChangePointerControl(

    int		;; display 
    int		;; do_accel 
    int		;; do_threshold 
    int			;; accel_numerator 
    int			;; accel_denominator 
    int			;; threshold 

)( void "XChangePointerControl"))



(defentry XChangeProperty(

    int		;; display 
    int		;; w 
    int		;; property 
    int		;; type 
    int			;; format 
    int			;; mode 
    int 	;; data 
    int			;; nelements 

)( void "XChangeProperty"))



(defentry XChangeSaveSet(

    int		;; display 
    int		;; w 
    int			;; change_mode 

)( void "XChangeSaveSet"))



(defentry XChangeWindowAttributes(

    int		;; display 
    int		;; w 
     int	;; valuemask 
    int ;; attributes 

)( void "XChangeWindowAttributes"))



(defentry XCheckMaskEvent(

    int		;; display 
    int		;; event_mask 
    int		;; event_return 

)( int "XCheckMaskEvent"))



(defentry XCheckTypedEvent(

    int		;; display 
    int			;; event_type 
    int		;; event_return 

)( int "XCheckTypedEvent"))



(defentry XCheckTypedWindowEvent(

    int		;; display 
    int		;; w 
    int			;; event_type 
    int		;; event_return 

)( int "XCheckTypedWindowEvent"))



(defentry XCheckWindowEvent(

    int		;; display 
    int		;; w 
    int		;; event_mask 
    int		;; event_return 

)( int "XCheckWindowEvent"))



(defentry XCirculateSubwindows(

    int		;; display 
    int		;; w 
    int			;; direction 

)( void "XCirculateSubwindows"))



(defentry XCirculateSubwindowsDown(

    int		;; display 
    int		;; w 

)( void "XCirculateSubwindowsDown"))



(defentry XCirculateSubwindowsUp(

    int		;; display 
    int		;; w 

)( void "XCirculateSubwindowsUp"))



(defentry XClearArea(

    int		;; display 
    int		;; w 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 
    int		;; exposures 

)( void "XClearArea"))



(defentry XClearWindow(

    int		;; display 
    int		;; w 

)( void "XClearWindow"))



(defentry XCloseDisplay(

    int		;; display 

)( void "XCloseDisplay"))



(defentry XConfigureWindow(

    int		;; display 
    int		;; w 
     int	;; value_mask 
    int ;; values 		 

)( void "XConfigureWindow"))



(defentry XConnectionNumber(

    int		;; display 

)( int "XConnectionNumber"))



(defentry XConvertSelection(

    int		;; display 
    int		;; selection 
    int 		;; target 
    int		;; property 
    int		;; requestor 
    int		;; time

)( void "XConvertSelection"))



(defentry XCopyArea(

    int		;; display 
    int		;; src 
    int		;; dest 
    int			;; gc 
    int			;; src_x 
    int			;; src_y 
     int	;; width 
     int	;; height 
    int			;; dest_x 
    int			;; dest_y 

)( void "XCopyArea"))



(defentry XCopyGC(

    int		;; display 
    int			;; src 
     int	;; valuemask 
    int			;; dest 

)( void "XCopyGC"))



(defentry XCopyPlane(

    int		;; display 
    int		;; src 
    int		;; dest 
    int			;; gc 
    int			;; src_x 
    int			;; src_y 
     int	;; width 
     int	;; height 
    int			;; dest_x 
    int			;; dest_y 
     int	;; plane 

)( void "XCopyPlane"))



(defentry XDefaultDepth(

    int		;; display 
    int			;; screen_number 

)( int "XDefaultDepth"))



(defentry XDefaultDepthOfScreen(

    int		;; screen 

)( int "XDefaultDepthOfScreen"))



(defentry XDefaultScreen(

    int		;; display 

)( int "XDefaultScreen"))



(defentry XDefineCursor(

    int		;; display 
    int		;; w 
    int		;; cursor 

)( void "XDefineCursor"))



(defentry XDeleteProperty(

    int		;; display 
    int		;; w 
    int		;; property 

)( void "XDeleteProperty"))



(defentry XDestroyWindow(

    int		;; display 
    int		;; w 

)( void "XDestroyWindow"))



(defentry XDestroySubwindows(

    int		;; display 
    int		;; w 

)( void "XDestroySubwindows"))



(defentry XDoesBackingStore(

    int		;; screen     

)( int "XDoesBackingStore"))



(defentry XDoesSaveUnders(

    int		;; screen 

)( int "XDoesSaveUnders"))



(defentry XDisableAccessControl(

    int		;; display 

)( void "XDisableAccessControl"))




(defentry XDisplayCells(

    int		;; display 
    int			;; screen_number 

)( int "XDisplayCells"))



(defentry XDisplayHeight(

    int		;; display 
    int			;; screen_number 

)( int "XDisplayHeight"))



(defentry XDisplayHeightMM(

    int		;; display 
    int			;; screen_number 

)( int "XDisplayHeightMM"))



(defentry XDisplayKeycodes(

    int		;; display 
    int		;; min_keycodes_return 
    int		;; max_keycodes_return 

)( void "XDisplayKeycodes"))



(defentry XDisplayPlanes(

    int		;; display 
    int			;; screen_number 

)( int "XDisplayPlanes"))



(defentry XDisplayWidth(

    int		;; display 
    int			;; screen_number 

)( int "XDisplayWidth"))



(defentry XDisplayWidthMM(

    int		;; display 
    int			;; screen_number 

)( int "XDisplayWidthMM"))



(defentry XDrawArc(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 
    int			;; angle1 
    int			;; angle2 

)( void "XDrawArc"))



(defentry XDrawArcs(

    int		;; display 
    int		;; d 
    int			;; gc 
    int 	;; arcs 
    int			;; narcs 

)( void "XDrawArcs"))



(defentry XDrawImageString(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
    object		;; string 
    int			;; length 

)( void "XDrawImageString"))



(defentry XDrawImageString16(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
     int	;; string 
    int			;; length 

)( void "XDrawImageString16"))



(defentry XDrawLine(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x1 
    int			;; x2 
    int			;; y1 
    int			;; y2 

)( void "XDrawLine"))



(defentry XDrawLines(

    int		;; display 
    int		;; d 
    int			;; gc 
    int		;; points 
    int			;; npoints 
    int			;; mode 

)( void "XDrawLines"))



(defentry XDrawPoint(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 

)( void "XDrawPoint"))



(defentry XDrawPoints(

    int		;; display 
    int		;; d 
    int			;; gc 
    int		;; points 
    int			;; npoints 
    int			;; mode 

)( void "XDrawPoints"))



(defentry XDrawRectangle(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 

)( void "XDrawRectangle"))



(defentry XDrawRectangles(

    int		;; display 
    int		;; d 
    int			;; gc 
    int 	;; rectangles 
    int			;; nrectangles 

)( void "XDrawRectangles"))



(defentry XDrawSegments(

    int		;; display 
    int		;; d 
    int			;; gc 
    int 	;; segments 
    int			;; nsegments 

)( void "XDrawSegments"))



(defentry XDrawString(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
    object		;; string 
    int			;; length 

)( void "XDrawString"))



(defentry XDrawString16(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
     int	;; string 
    int			;; length 

)( void "XDrawString16"))



(defentry XDrawText(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
    int 	;; items 
    int			;; nitems 

)( void "XDrawText"))



(defentry XDrawText16(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
    int ;; items 
    int			;; nitems 

)( void "XDrawText16"))



(defentry XEnableAccessControl(

    int		;; display 

)( void "XEnableAccessControl"))



(defentry XEventsQueued(

    int		;; display 
    int			;; mode 

)( int "XEventsQueued"))



(defentry XFetchName(

    int		;; display 
    int		;; w 
   int 	;; window_name_return 

)( int "XFetchName"))



(defentry XFillArc(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 
    int			;; angle1 
    int			;; angle2 

)( void "XFillArc"))



(defentry XFillArcs(

    int		;; display 
    int		;; d 
    int			;; gc 
    int 	;; arcs 
    int			;; narcs 

)( void "XFillArcs"))



(defentry XFillPolygon(

    int		;; display 
    int		;; d 
    int			;; gc 
    int		;; points 
    int			;; npoints 
    int			;; shape 
    int			;; mode 

)( void "XFillPolygon"))



(defentry XFillRectangle(

    int		;; display 
    int		;; d 
    int			;; gc 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 

)( void "XFillRectangle"))



(defentry XFillRectangles(

    int		;; display 
    int		;; d 
    int			;; gc 
    int 	;; rectangles 
    int			;; nrectangles 

)( void "XFillRectangles"))



(defentry XFlush(

    int		;; display 

)( void "XFlush"))



(defentry XForceScreenSaver(

    int		;; display 
    int			;; mode 

)( void "XForceScreenSaver"))



(defentry XFree(

   object		;; data 

)( void "XFree"))



(defentry XFreeColormap(

    int		;; display 
    int		;; colormap 

)( void "XFreeColormap"))



(defentry XFreeColors(

    int		;; display 
    int		;; colormap 
     int ;; pixels 
    int			;; npixels 
     int	;; planes 

)( void "XFreeColors"))



(defentry XFreeCursor(

    int		;; display 
    int		;; cursor 

)( void "XFreeCursor"))



(defentry XFreeExtensionList(

   int 	;; list     

)( void "XFreeExtensionList"))



(defentry XFreeFont(

    int		;; display 
    int	;; font_struct 

)( void "XFreeFont"))



(defentry XFreeFontInfo(

   int 	;; names 
    int	;; free_info 
    int			;; actual_count 

)( void "XFreeFontInfo"))



(defentry XFreeFontNames(

   int 	;; list 

)( void "XFreeFontNames"))



(defentry XFreeFontPath(

   int 	;; list 

)( void "XFreeFontPath"))



(defentry XFreeGC(

    int		;; display 
    int			;; gc 

)( void "XFreeGC"))



(defentry XFreeModifiermap(

    int	;; modmap 

)( void "XFreeModifiermap"))



(defentry XFreePixmap(

    int		;; display 
    int		;; int 

)( void "XFreePixmap"))



(defentry XGeometry(

    int		;; display 
    int			;; screen 
    object		;; position 
    object		;; default_position 
     int	;; bwidth 
     int	;; fwidth 
     int	;; fheight 
    int			;; xadder 
    int			;; yadder 
    int		;; x_return 
    int		;; y_return 
    int		;; width_return 
    int		;; height_return 

)( int "XGeometry"))



(defentry XGetErrorDatabaseText(

    int		;; display 
    object		;; name 
    object		;; message 
    object		;; default_string 
   object		;; buffer_return 
    int			;; length 

)( void "XGetErrorDatabaseText"))



(defentry XGetErrorText(

    int		;; display 
    int			;; code 
   object		;; buffer_return 
    int			;; length 

)( void "XGetErrorText"))



(defentry XGetFontProperty(

    int	;; font_struct 
    int		;; atom 
     int ;; value_return 

)( int "XGetFontProperty"))



(defentry XGetGCValues(

    int		;; display 
    int			;; gc 
     int	;; valuemask 
    int 	;; values_return 

)( int "XGetGCValues"))



(defentry XGetGeometry(

    int		;; display 
    int		;; d 
    int		;; root_return 
    int		;; x_return 
    int		;; y_return 
     int	;; width_return 
     int	;; height_return 
     int	;; border_width_return 
     int	;; depth_return 

)( int "XGetGeometry"))



(defentry XGetIconName(

    int		;; display 
    int		;; w 
   int 	;; icon_name_return 

)( int "XGetIconName"))



(defentry XGetInputFocus(

    int		;; display 
    int		;; focus_return 
    int		;; revert_to_return 

)( void "XGetInputFocus"))



(defentry XGetKeyboardControl(

    int		;; display 
    int ;; values_return 

)( void "XGetKeyboardControl"))



(defentry XGetPointerControl(

    int		;; display 
    int		;; accel_numerator_return 
    int		;; accel_denominator_return 
    int		;; threshold_return 

)( void "XGetPointerControl"))



(defentry XGetPointerMapping(

    int		;; display 
    object	;; map_return 
    int			;; nmap 

)( int "XGetPointerMapping"))



(defentry XGetScreenSaver(

    int		;; display 
    int		;; intout_return 
    int		;; interval_return 
    int		;; prefer_blanking_return 
    int		;; allow_exposures_return 

)( void "XGetScreenSaver"))



(defentry XGetTransientForHint(

    int		;; display 
    int		;; w 
    int		;; prop_window_return 

)( int "XGetTransientForHint"))



(defentry XGetWindowProperty(

    int		;; display 
    int		;; w 
    int		;; property 
    int		;; int_offset 
    int		;; int_length 
    int		;; delete 
    int		;; req_type 
    int 	;; actual_type_return 
    int		;; actual_format_return 
     int ;; nitems_return 
     int ;; bytes_after_return 
    int ;; prop_return 

)( int "XGetWindowProperty"))



(defentry XGetWindowAttributes(

    int		;; display 
    int		;; w 
    int ;; Window_attributes_return 

)( int "XGetWindowAttributes"))



(defentry XGrabButton(

    int		;; display 
     int	;; button 
     int	;; modifiers 
    int		;; grab_window 
    int		;; owner_events 
     int	;; event_mask 
    int			;; pointer_mode 
    int			;; keyboard_mode 
    int		;; confine_to 
    int		;; cursor 

)( void "XGrabButton"))



(defentry XGrabKey(

    int		;; display 
    int			;; keycode
     int	;; modifiers 
    int		;; grab_window 
    int		;; owner_events 
    int			;; pointer_mode 
    int			;; keyboard_mode 

)( void "XGrabKey"))



(defentry XGrabKeyboard(

    int		;; display 
    int		;; grab_window 
    int		;; owner_events 
    int			;; pointer_mode 
    int			;; keyboard_mode 
    int		;; int 

)( int "XGrabKeyboard"))



(defentry XGrabPointer(

    int		;; display 
    int		;; grab_window 
    int		;; owner_events 
     int	;; event_mask 
    int			;; pointer_mode 
    int			;; keyboard_mode 
    int		;; confine_to 
    int		;; cursor 
    int		;; int 

)( int "XGrabPointer"))



(defentry XGrabServer(

    int		;; display 

)( void "XGrabServer"))



(defentry XHeightMMOfScreen(

    int		;; screen 

)( int "XHeightMMOfScreen"))



(defentry XHeightOfScreen(

    int		;; screen 

)( int "XHeightOfScreen"))



(defentry XImageByteOrder(

    int		;; display 

)( int "XImageByteOrder"))



(defentry XInstallColormap(

    int		;; display 
    int		;; colormap 

)( void "XInstallColormap"))



(defentry XKeysymToKeycode(

    int		;; display 
    int		;; keysym 

)( int "XKeysymToKeycode"))



(defentry XKillClient(

    int		;; display 
    int			;; resource 

)( void "XKillClient"))



(defentry XLastKnownRequestProcessed(

    int		;; display 

)( int "XLastKnownRequestProcessed"))



(defentry XLookupColor(

    int		;; display 
    int		;; colormap 
    object		;; color_name 
    int		;; exact_def_return 
    int		;; screen_def_return 

)( int "XLookupColor"))



(defentry XLowerWindow(

    int		;; display 
    int		;; w 

)( void "XLowerWindow"))



(defentry XMapRaised(

    int		;; display 
    int		;; w 

)( void "XMapRaised"))



(defentry XMapSubwindows(

    int		;; display 
    int		;; w 

)( void "XMapSubwindows"))



(defentry XMapWindow(

    int		;; display 
    int		;; w 

)( void "XMapWindow"))



(defentry XMaskEvent(

    int		;; display 
    int		;; event_mask 
    int		;; event_return 

)( void "XMaskEvent"))



(defentry XMaxCmapsOfScreen(

    int		;; screen 

)( int "XMaxCmapsOfScreen"))



(defentry XMinCmapsOfScreen(

    int		;; screen 

)( int "XMinCmapsOfScreen"))



(defentry XMoveResizeWindow(

    int		;; display 
    int		;; w 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 

)( void "XMoveResizeWindow"))



(defentry XMoveWindow(

    int		;; display 
    int		;; w 
    int			;; x 
    int			;; y 

)( void "XMoveWindow"))



(defentry XNextEvent(

    int		;; display 
    int		;; event_return 

)( void "XNextEvent"))



(defentry XNoOp(

    int		;; display 

)( void "XNoOp"))



(defentry XParseColor(

    int		;; display 
    int		;; colormap 
    object		;; spec 
    int		;; exact_def_return 

)( int "XParseColor"))



(defentry XParseGeometry(

    object		;; parsestring 
    int		;; x_return 
    int		;; y_return 
     int	;; width_return 
     int	;; height_return 

)( int "XParseGeometry"))



(defentry XPeekEvent(

    int		;; display 
    int		;; event_return 

)( void "XPeekEvent"))




(defentry XPending(

    int		;; display 

)( int "XPending"))



(defentry XPlanesOfScreen(

    int		;; screen 
    

)( int "XPlanesOfScreen"))



(defentry XProtocolRevision(

    int		;; display 

)( int "XProtocolRevision"))



(defentry XProtocolVersion(

    int		;; display 

)( int "XProtocolVersion"))




(defentry XPutBackEvent(

    int		;; display 
    int		;; event 

)( void "XPutBackEvent"))



(defentry XPutImage(

    int		;; display 
    int		;; d 
    int			;; gc 
    int 	;; image 
    int			;; src_x 
    int			;; src_y 
    int			;; dest_x 
    int			;; dest_y 
     int	;; width 
     int	;; height 	  

)( void "XPutImage"))



(defentry XQLength(

    int		;; display 

)( int "XQLength"))



(defentry XQueryBestCursor(

    int		;; display 
    int		;; d 
     int        ;; width 
     int	;; height 
     int	;; width_return 
     int	;; height_return 

)( int "XQueryBestCursor"))



(defentry XQueryBestSize(

    int		;; display 
    int			;; class 
    int		;; which_screen 
     int	;; width 
     int	;; height 
     int	;; width_return 
     int	;; height_return 

)( int "XQueryBestSize"))



(defentry XQueryBestStipple(

    int		;; display 
    int		;; which_screen 
     int	;; width 
     int	;; height 
     int	;; width_return 
     int	;; height_return 

)( int "XQueryBestStipple"))



(defentry XQueryBestTile(

    int		;; display 
    int		;; which_screen 
     int	;; width 
     int	;; height 
     int	;; width_return 
     int	;; height_return 

)( int "XQueryBestTile"))



(defentry XQueryColor(

    int		;; display 
    int		;; colormap 
    int		;; def_in_out 

)( void "XQueryColor"))



(defentry XQueryColors(

    int		;; display 
    int		;; colormap 
    int		;; defs_in_out 
    int			;; ncolors 

)( void "XQueryColors"))



(defentry XQueryExtension(

    int		;; display 
    object		;; name 
    int		;; major_opcode_return 
    int		;; first_event_return 
    int		;; first_error_return 

)( int "XQueryExtension"))


;;fix
(defentry XQueryKeymap(

    int		;; display 
    int		;; keys_return 

)( void "XQueryKeymap"))



(defentry XQueryPointer(

    int		;; display 
    int		;; w 
    int		;; root_return 
    int		;; child_return 
    int		;; root_x_return 
    int		;; root_y_return 
    int		;; win_x_return 
    int		;; win_y_return 
     int       ;; mask_return 

)( int "XQueryPointer"))



(defentry XQueryTextExtents(

    int		;; display 
    int			;; font_ID 
    object		;; string 
    int			;; nchars 
    int		;; direction_return 
    int		;; font_ascent_return 
    int		;; font_descent_return 
    int	;; overall_return     

)( void "XQueryTextExtents"))



(defentry XQueryTextExtents16(

    int		;; display 
    int			;; font_ID 
     int	;; string 
    int			;; nchars 
    int		;; direction_return 
    int		;; font_ascent_return 
    int		;; font_descent_return 
    int	;; overall_return 

)( void "XQueryTextExtents16"))



(defentry XQueryTree(

    int		;; display 
    int		;; w 
    int		;; root_return 
    int		;; parent_return 
    int		;; children_return 
     int	;; nchildren_return 

)( int "XQueryTree"))



(defentry XRaiseWindow(

    int		;; display 
    int		;; w 

)( void "XRaiseWindow"))



(defentry XReadBitmapFile(

    int		;; display 
    int 		;; d 
    object		;; filename 
     int	;; width_return 
     int	;; height_return 
    int		;; bitmap_return 
    int		;; x_hot_return 
    int		;; y_hot_return 

)( int "XReadBitmapFile"))



(defentry XRebindKeysym(

    int		;; display 
    int		;; keysym 
    int		;; list 
    int			;; mod_count 
     object	;; string 
    int			;; bytes_string 

)( void "XRebindKeysym"))



(defentry XRecolorCursor(

    int		;; display 
    int		;; cursor 
    int		;; foreground_color 
    int		;; background_color 

)( void "XRecolorCursor"))



(defentry XRefreshKeyboardMapping(

    int	;; event_map     

)( void "XRefreshKeyboardMapping"))



(defentry XRemoveFromSaveSet(

    int		;; display 
    int		;; w 

)( void "XRemoveFromSaveSet"))



(defentry XRemoveHost(

    int		;; display 
    int ;; host 

)( void "XRemoveHost"))



(defentry XRemoveHosts(

    int		;; display 
    int	;; hosts 
    int			;; num_hosts 

)( void "XRemoveHosts"))



(defentry XReparentWindow(

    int		;; display 
    int		;; w 
    int		;; parent 
    int			;; x 
    int			;; y 

)( void "XReparentWindow"))



(defentry XResetScreenSaver(

    int		;; display 

)( void "XResetScreenSaver"))



(defentry XResizeWindow(

    int		;; display 
    int		;; w 
     int	;; width 
     int	;; height 

)( void "XResizeWindow"))



(defentry XRestackWindows(

    int		;; display 
    int		;; windows 
    int			;; nwindows 

)( void "XRestackWindows"))



(defentry XRotateBuffers(

    int		;; display 
    int			;; rotate 

)( void "XRotateBuffers"))



(defentry XRotateWindowProperties(

    int		;; display 
    int		;; w 
    int 	;; properties 
    int			;; num_prop 
    int			;; npositions 

)( void "XRotateWindowProperties"))



(defentry XScreenCount(

    int		;; display 

)( int "XScreenCount"))



(defentry XSelectInput(

    int		;; display 
    int		;; w 
    int		;; event_mask 

)( void "XSelectInput"))



(defentry XSendEvent(

    int		;; display 
    int		;; w 
    int		;; propagate 
    int		;; event_mask 
    int		;; event_send 

)( int "XSendEvent"))



(defentry XSetAccessControl(

    int		;; display 
    int			;; mode 

)( void "XSetAccessControl"))



(defentry XSetArcMode(

    int		;; display 
    int			;; gc 
    int			;; arc_mode 

)( void "XSetArcMode"))



(defentry XSetBackground(

    int		;; display 
    int			;; gc 
     int	;; background 

)( void "XSetBackground"))



(defentry XSetClipMask(

    int		;; display 
    int			;; gc 
    int		;; int 

)( void "XSetClipMask"))



(defentry XSetClipOrigin(

    int		;; display 
    int			;; gc 
    int			;; clip_x_origin 
    int			;; clip_y_origin 

)( void "XSetClipOrigin"))



(defentry XSetClipRectangles(

    int		;; display 
    int			;; gc 
    int			;; clip_x_origin 
    int			;; clip_y_origin 
    int			;; rectangles 
    int			;; n 
    int			;; ordering 

)( void "XSetClipRectangles"))



(defentry XSetCloseDownMode(

    int		;; display 
    int			;; close_mode 

)( void "XSetCloseDownMode"))



(defentry XSetCommand(

    int		;; display 
    int		;; w 
   int 	;; argv 
    int			;; argc 

)( void "XSetCommand"))



(defentry XSetDashes(

    int		;; display 
    int			;; gc 
    int			;; dash_offset 
    object		;; dash_list 
    int			;; n 

)( void "XSetDashes"))



(defentry XSetFillRule(

    int		;; display 
    int			;; gc 
    int			;; fill_rule 

)( void "XSetFillRule"))



(defentry XSetFillStyle(

    int		;; display 
    int			;; gc 
    int			;; fill_style 

)( void "XSetFillStyle"))



(defentry XSetFont(

    int		;; display 
    int			;; gc 
    int		;; font 

)( void "XSetFont"))



(defentry XSetFontPath(

    int		;; display 
   int 	;; directories 
    int			;; ndirs 	     

)( void "XSetFontPath"))



(defentry XSetForeground(

    int		;; display 
    int			;; gc 
     int	;; foreground 

)( void "XSetForeground"))



(defentry XSetFunction(

    int		;; display 
    int			;; gc 
    int			;; function 

)( void "XSetFunction"))



(defentry XSetGraphicsExposures(

    int		;; display 
    int			;; gc 
    int		;; graphics_exposures 

)( void "XSetGraphicsExposures"))



(defentry XSetIconName(

    int		;; display 
    int		;; w 
    object		;; icon_name 

)( void "XSetIconName"))



(defentry XSetInputFocus(

    int		;; display 
    int		;; focus 
    int			;; revert_to 
    int		;; int 

)( void "XSetInputFocus"))



(defentry XSetLineAttributes(

    int		;; display 
    int			;; gc 
     int	;; line_width 
    int			;; line_style 
    int			;; cap_style 
    int			;; join_style 

)( void "XSetLineAttributes"))



(defentry XSetModifierMapping(

    int		;; display 
    int	;; modmap 

)( int "XSetModifierMapping"))



(defentry XSetPlaneMask(

    int		;; display 
    int			;; gc 
     int	;; plane_mask 

)( void "XSetPlaneMask"))



(defentry XSetPointerMapping(

    int		;; display 
     object	;; map 
    int			;; nmap 

)( int "XSetPointerMapping"))



(defentry XSetScreenSaver(

    int		;; display 
    int			;; intout 
    int			;; interval 
    int			;; prefer_blanking 
    int			;; allow_exposures 

)( void "XSetScreenSaver"))



(defentry XSetSelectionOwner(

    int		;; display 
    int	        ;; selection 
    int		;; owner 
    int		;; int 

)( void "XSetSelectionOwner"))



(defentry XSetState(

    int		;; display 
    int			;; gc 
     int 	;; foreground 
     int	;; background 
    int			;; function 
     int	;; plane_mask 

)( void "XSetState"))



(defentry XSetStipple(

    int		;; display 
    int			;; gc 
    int		;; stipple 

)( void "XSetStipple"))



(defentry XSetSubwindowMode(

    int		;; display 
    int			;; gc 
    int			;; subwindow_mode 

)( void "XSetSubwindowMode"))



(defentry XSetTSOrigin(

    int		;; display 
    int			;; gc 
    int			;; ts_x_origin 
    int			;; ts_y_origin 

)( void "XSetTSOrigin"))



(defentry XSetTile(

    int		;; display 
    int			;; gc 
    int		;; tile 

)( void "XSetTile"))



(defentry XSetWindowBackground(

    int		;; display 
    int		;; w 
     int	;; background_pixel 

)( void "XSetWindowBackground"))



(defentry XSetWindowBackgroundPixmap(

    int		;; display 
    int		;; w 
    int		;; background_pixmap 

)( void "XSetWindowBackgroundPixmap"))



(defentry XSetWindowBorder(

    int		;; display 
    int		;; w 
     int	;; border_pixel 

)( void "XSetWindowBorder"))



(defentry XSetWindowBorderPixmap(

    int		;; display 
    int		;; w 
    int		;; border_pixmap

)( void "XSetWindowBorderPixmap"))



(defentry XSetWindowBorderWidth(

    int		;; display 
    int		;; w 
     int	;; width 

)( void "XSetWindowBorderWidth"))



(defentry XSetWindowColormap(

    int		;; display 
    int		;; w 
    int		;; colormap 

)( void "XSetWindowColormap"))



(defentry XStoreBuffer(

    int		;; display 
    object		;; bytes 
    int			;; nbytes 
    int			;; buffer 

)( void "XStoreBuffer"))



(defentry XStoreBytes(

    int		;; display 
    object		;; bytes 
    int			;; nbytes 

)( void "XStoreBytes"))



(defentry XStoreColor(

    int		;; display 
    int		;; colormap 
    int		;; color 

)( void "XStoreColor"))



(defentry XStoreColors(

    int		;; display 
    int		;; colormap 
    int		;; color 
    int			;; ncolors 

)( void "XStoreColors"))



(defentry XStoreName(

    int		;; display 
    int		;; w 
    object		;; window_name 

)( void "XStoreName"))



(defentry XStoreNamedColor(

    int		;; display 
    int		;; colormap 
    object		;; color 
     int	;; pixel 
    int			;; flags 

)( void "XStoreNamedColor"))



(defentry XSync(

    int		;; display 
    int		;; discard 

)( void "XSync"))



(defentry XTextExtents(

    int	;; font_struct 
    object		;; string 
    int			;; nchars 
    int		;; direction_return 
    int		;; font_ascent_return 
    int		;; font_descent_return 
    int	;; overall_return 

)( void "XTextExtents"))



(defentry XTextExtents16(

    int	;; font_struct 
     int	;; string 
    int			;; nchars 
    int		;; direction_return 
    int		;; font_ascent_return 
    int		;; font_descent_return 
    int	;; overall_return 

)( void "XTextExtents16"))



(defentry XTextWidth(

    int	;; font_struct 
    object		;; string 
    int			;; count 

)( int "XTextWidth"))



(defentry XTextWidth16(

    int	;; font_struct 
    int		;; string 
    int			;; count 

)( int "XTextWidth16"))



(defentry XTranslateCoordinates(

    int		;; display 
    int		;; src_w 
    int		;; dest_w 
    int		;; src_x 
    int		;; src_y 
    int		;; dest_x_return 
    int		;; dest_y_return 
    int		;; child_return 

)( int "XTranslateCoordinates"))



(defentry XUndefineCursor(

    int		;; display 
    int		;; w 

)( void "XUndefineCursor"))



(defentry XUngrabButton(

    int		;; display 
     int	;; button 
     int	;; modifiers 
    int		;; grab_window 

)( void "XUngrabButton"))



(defentry XUngrabKey(

    int		;; display 
    int		;; keycode
     int	;; modifiers 
    int		;; grab_window 

)( void "XUngrabKey"))



(defentry XUngrabKeyboard(

    int		;; display 
    int		;; int 

)( void "XUngrabKeyboard"))



(defentry XUngrabPointer(

    int		;; display 
    int		;; int 

)( void "XUngrabPointer"))



(defentry XUngrabServer(

    int		;; display 

)( void "XUngrabServer"))



(defentry XUninstallColormap(

    int		;; display 
    int		;; colormap 

)( void "XUninstallColormap"))



(defentry XUnloadFont(

    int		;; display 
    int	;; font 

)( void "XUnloadFont"))



(defentry XUnmapSubwindows(

    int		;; display 
    int		;; w 

)( void "XUnmapSubwindows"))



(defentry XUnmapWindow(

    int		;; display 
    int		;; w 

)( void "XUnmapWindow"))



(defentry XVendorRelease(

    int		;; display 

)( int "XVendorRelease"))



(defentry XWarpPointer(

    int		;; display 
    int		;; src_w 
    int		;; dest_w 
    int			;; src_x 
    int			;; src_y 
     int	;; src_width 
     int	;; src_height 
    int			;; dest_x 
    int			;; dest_y 	     

)( void "XWarpPointer"))



(defentry XWidthMMOfScreen(

    int		;; screen 

)( int "XWidthMMOfScreen"))



(defentry XWidthOfScreen(

    int		;; screen 

)( int "XWidthOfScreen"))



(defentry XWindowEvent(

    int		;; display 
    int		;; w 
    int		;; event_mask 
    int		;; event_return 

)( void "XWindowEvent"))



(defentry XWriteBitmapFile(

    int		;; display 
    object		;; filename 
    int		;; bitmap 
     int	;; width 
     int	;; height 
    int			;; x_hot 
    int			;; y_hot 		     

)( int "XWriteBitmapFile"))



;;;;;;;;;problems




;;(defentry int (int Synchronize(

;;    int		;; display 
;;    int		;; onoff 

;;))()())
;;(defentry int (int SetAfterFunction(

;;    int		;; display 
;;    int (int  ( int			;; display 
;;            )		;; procedure 

;;))()())					


;;(defentry void XPeekIfEvent(

;;    int		;; display 
;;    int		;; event_return 
;;    int (int  ( int		;; display 
;;               int		;; event 
;;              object		;; arg 
;;             )		;; predicate 
;;   object		;; arg 

;;)())

;;(defentry int XCheckIfEvent(

;;    int		;; display 
;;    int		;; event_return 
;;    int (int  ( int			;; display 
;;               int			;; event 
;;              object			;; arg 
;;             )		;; predicate 
;;   object		;; arg 

;;)())

;;(defentry void XIfEvent(

;;    int		;; display 
;;    int		;; event_return 
;;    int (int  ( int			;; display 
;;               int			;; event 
;;              object			;; arg 
;;             )		;; predicate 
;;   object		;; arg 

;;)())
