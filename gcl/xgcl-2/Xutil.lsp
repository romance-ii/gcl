(in-package :XLIB)
; Xutil.lsp      modified by Hiep Huu Nguyen                    27 Aug 92

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

;; $XConsortium: Xutil.h,v 11.58 89/12/12 20:15:40 jim Exp $ */

;;**********************************************************
;;Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts,
;;and the Massachusetts Institute of Technology, Cambridge, Massachusetts.

;;modified by Hiep H Nguyen 28 Jul 91

;;                        All Rights Reserved

;;Permission to use, copy, modify, and distribute this software and its 
;;documentation for any purpose and without fee is hereby granted, 
;;provided that the above copyright notice appear in all copies and that
;;both that copyright notice and this permission notice appear in 
;;supporting documentation, and that the names of Digital or MIT not be
;;used in advertising or publicity pertaining to distribution of the
;;software without specific, written prior permission.  

;;DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
;;ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
;;DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
;;ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
;;WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
;;ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
;;SOFTWARE.

;;*****************************************************************

;; 
;; * Bitmask returned by XParseGeometry().  Each bit tells if the corresponding)
;; * value (x, y, width, height) was found in the parsed string.)
 
(defconstant NoValue		0000)
(defconstant XValue  	0001)
(defconstant YValue		0002)
(defconstant WidthValue  	0004)
(defconstant HeightValue  	0008)
(defconstant AllValues 	15)
(defconstant XNegative 	16)
(defconstant YNegative 	32)

;;
 ;; The next block of definitions are for window manager properties that
 ;; clients and applications use for communication.
 

;; flags argument in size hints 
(defconstant USPosition	(expt 2  0) ) ;; user specified x, y 
(defconstant USSize		(expt 2  1) ) ;; user specified width, height 

(defconstant PPosition	(expt 2  2) ) ;; program specified position 
(defconstant PSize		(expt 2  3) ) ;; program specified size 
(defconstant PMinSize	(expt 2  4) ) ;; program specified minimum size 
(defconstant PMaxSize	(expt 2  5) ) ;; program specified maximum size 
(defconstant PResizeInc	(expt 2  6) ) ;; program specified resize increments 
(defconstant PAspect		(expt 2  7) ) ;; program specified min and max aspect ratios 
(defconstant PBaseSize	(expt 2  8) ) ;; program specified base for incrementing 
(defconstant PWinGravity	(expt 2  9) ) ;; program specified window gravity 

;; obsolete 
(defconstant PAllHints (+ PPosition PSize PMinSize PMaxSize PResizeInc PAspect))

;; definition for flags of XWMHints 

(defconstant InputHint 		(expt 2  0))
(defconstant StateHint 		(expt 2  1))
(defconstant IconPixmapHint		(expt 2  2))
(defconstant IconWindowHint		(expt 2  3))
(defconstant IconPositionHint 	(expt 2  4))
(defconstant IconMaskHint		(expt 2  5))
(defconstant WindowGroupHint		(expt 2  6))
(defconstant AllHints ( + InputHint StateHint IconPixmapHint IconWindowHint 
IconPositionHint IconMaskHint WindowGroupHint))

;; definitions for initial window state 
(defconstant WithdrawnState 0	) ;; for windows that are not mapped 
(defconstant NormalState 1	) ;; most applications want to start this way 
(defconstant IconicState 3	) ;; application wants to start as an icon 

;;
 ;; Obsolete states no longer defined by ICCCM
 
(defconstant DontCareState 0	) ;; don't know or care 
(defconstant ZoomState 2	) ;; application wants to start zoomed 
(defconstant InactiveState 4	) ;; application believes it is seldom used; 
			 ;; some wm's may put it on inactive menu 


 
;;
 ;; opaque reference to Region data type 
 
;;typedef struct _XRegion *Region; 

;; Return values from XRectInRegion() 
 
(defconstant RectangleOut 0)
(defconstant RectangleIn  1)
(defconstant RectanglePart 2)
 

(defconstant VisualNoMask		0)
(defconstant VisualIDMask 		1)
(defconstant VisualScreenMask	2)
(defconstant VisualDepthMask		4)
(defconstant VisualClassMask		8)
(defconstant VisualRedMaskMask	16)
(defconstant VisualGreenMaskMask	32)
(defconstant VisualBlueMaskMask	64)
(defconstant VisualColormapSizeMask	128)
(defconstant VisualBitsPerRGBMask	256)
(defconstant VisualAllMask		511)

(defconstant ReleaseByFreeingColormap 1) ;; for killid field above 


;;
;; return codes for XReadBitmapFile and XWriteBitmapFile
 
(defconstant BitmapSuccess		0)
(defconstant BitmapOpenFailed 	1)
(defconstant BitmapFileInvalid 	2)
(defconstant BitmapNoMemory		3)
;;
 ;; Declare the routines that don't return int.
 

;; ***************************************************************
;; *
;; * Context Management
;; *
;; ***************************************************************


;; Associative lookup table return codes 

(defconstant XCSUCCESS 0	) ;; No error. 
(defconstant XCNOMEM   1    ) ;; Out of memory 
(defconstant XCNOENT   2    ) ;; No entry in table 

;;typedef int XContext;


(defentry XSaveContext(

    int 	;; display 
    int		;; w 
    int		;; context 
     int 	;; data 

)( int "XSaveContext"))



(defentry XFindContext(

    int 	;; display 
    int		;; w 
    int		;; context 
    int 	;; data_return 

)( int "XFindContext"))



(defentry XDeleteContext(

    int 	;; display 
    int		;; w 
    int		;; context 

)( int "XDeleteContext"))




(defentry  XGetWMHints(

    int 	;; display 
    int		;; w 		      

)( int  "XGetWMHints"))


(defentry XCreateRegion(

;;    void

)( int "XCreateRegion"))


(defentry XPolygonRegion(

    int 	;; points 
    int			;; n 
    int			;; fill_rule 

)( int "XPolygonRegion"))



(defentry  XGetVisualInfo(

    int 	;; display 
    int		;; vinfo_mask 
    int ;; vinfo_template 
    int 	;; nitems_return 

)( int  "XGetVisualInfo"))

;; Allocation routines for properties that may get longer 


(defentry  XAllocSizeHints (

;;    void

)( int  "XAllocSizeHints" ))


(defentry  XAllocStandardColormap (

;;    void

)( int  "XAllocStandardColormap" ))


(defentry  XAllocWMHints (

;;    void

)( int  "XAllocWMHints" ))


(defentry  XAllocClassHint (

;;    void

)( int  "XAllocClassHint" ))


(defentry  XAllocIconSize (

;;    void

)( int  "XAllocIconSize" ))

;; ICCCM routines for data structures defined in this file 


(defentry XGetWMSizeHints(

    int 	;; display 
    int		;; w 
    int 	;; hints_return 
    int 	;; supplied_return 
    int		;; property 

)( int "XGetWMSizeHints"))


(defentry XGetWMNormalHints(

    int 	;; display 
    int		;; w 
    int 	;; hints_return 
    int 	;; supplied_return  

)( int "XGetWMNormalHints"))


(defentry XGetRGBColormaps(

    int 	;; display 
    int		;; w 
    int  ;; stdcmap_return 
    int 	;; count_return 
    int		;; property 

)( int "XGetRGBColormaps"))


(defentry XGetTextProperty(

    int 	;; display 
    int		;; window 
    int ;; text_prop_return 
    int		;; property 

)( int "XGetTextProperty"))


(defentry XGetWMName(

    int 	;; display 
    int		;; w 
    int ;; text_prop_return 

)( int "XGetWMName"))


(defentry XGetWMIconName(

    int 	;; display 
    int		;; w 
    int ;; text_prop_return 

)( int "XGetWMIconName"))


(defentry XGetWMClientMachine(

    int 	;; display 
    int		;; w 
    int ;; text_prop_return 

)( int "XGetWMClientMachine"))


(defentry XSetWMProperties(

    int 	;; display 
    int		;; w 
    int ;; window_name 
    int ;; icon_name 
    int 	;; argv 
    int			;; argc 
    int 	;; normal_hints 
    int 	;; wm_hints 
    int 	;; class_hints 

)( void "XSetWMProperties"))


(defentry XSetWMSizeHints(

    int 	;; display 
    int		;; w 
    int 	;; hints 
    int		;; property 

)( void "XSetWMSizeHints"))


(defentry XSetWMNormalHints(

    int 	;; display 
    int		;; w 
    int 	;; hints 

)( void "XSetWMNormalHints"))


(defentry XSetRGBColormaps(

    int 	;; display 
    int		;; w 
    int ;; stdcmaps 
    int			;; count 
    int		;; property 

)( void "XSetRGBColormaps"))


(defentry XSetTextProperty(

    int 	;; display 
    int		;; w 
    int ;; text_prop 
    int		;; property 

)( void "XSetTextProperty"))


(defentry XSetWMName(

    int 	;; display 
    int		;; w 
    int ;; text_prop 

)( void "XSetWMName"))


(defentry XSetWMIconName(

    int 	;; display 
    int		;; w 
    int ;; text_prop 

)( void "XSetWMIconName"))


(defentry XSetWMClientMachine(

    int 	;; display 
    int		;; w 
    int ;; text_prop 

)( void "XSetWMClientMachine"))


(defentry XStringListToTextProperty(

    int 	;; list 
    int			;; count 
    int ;; text_prop_return 

)( int "XStringListToTextProperty"))


(defentry XTextPropertyToStringList(

    int ;; text_prop 
    int 		;; list_return 
    int 	;; count_return 

)( int "XTextPropertyToStringList"))

;; The following declarations are alphabetized. 



(defentry XClipBox(

    int		;; r 
    int 	;; rect_return 

)( void "XClipBox"))



(defentry XDestroyRegion(

    int		;; r 

)( void "XDestroyRegion"))



(defentry XEmptyRegion(

    int		;; r 

)( void "XEmptyRegion"))



(defentry XEqualRegion(

    int		;; r1 
    int		;; r2 

)( void "XEqualRegion"))



(defentry XGetClassHint(

    int 	;; display 
    int		;; w 
    int 	;; class_hints_return 

)( int "XGetClassHint"))



(defentry XGetIconSizes(

    int 	;; display 
    int		;; w 
    int 		;; size_list_return 
    int 	;; count_return 

)( int "XGetIconSizes"))



(defentry XGetNormalHints(

    int 	;; display 
    int		;; w 
    int 	;; hints_return 

)( int "XGetNormalHints"))



(defentry XGetSizeHints(

    int 	;; display 
    int		;; w 
    int 	;; hints_return 
    int		;; property 

)( int "XGetSizeHints"))



(defentry XGetStandardColormap(

    int 	;; display 
    int		;; w 
    int ;; colormap_return 
    int		;; property 			    

)( int "XGetStandardColormap"))



(defentry XGetZoomHints(

    int 	;; display 
    int		;; w 
    int 	;; zhints_return 

)( int "XGetZoomHints"))



(defentry XIntersectRegion(

    int		;; sra 
    int		;; srb 
    int		;; dr_return 

)( void "XIntersectRegion"))



(defentry XLookupString(

    int 	;; event_struct 
    object		;; buffer_return 
    int			;; bytes_buffer 
    int 	;; keysym_return 
    int ;; int_in_out 

)( int "XLookupString"))



(defentry XMatchVisualInfo(

    int 	;; display 
    int			;; screen 
    int			;; depth 
    int			;; class 
    int ;; vinfo_return 

)( int "XMatchVisualInfo"))



(defentry XOffsetRegion(

    int		;; r 
    int			;; dx 
    int			;; dy 

)( void "XOffsetRegion"))



(defentry XPointInRegion(

    int		;; r 
    int			;; x 
    int			;; y 

)( int "XPointInRegion"))



(defentry XPolygonRegion(

    int 	;; points 
    int			;; n 
    int			;; fill_rule 

)( int "XPolygonRegion"))



(defentry XRectInRegion(

    int		;; r 
    int			;; x 
    int			;; y 
     int	;; width 
     int	;; height 

)( int "XRectInRegion"))



(defentry XSetClassHint(

    int 	;; display 
    int		;; w 
    int 	;; class_hints 

)( void "XSetClassHint"))



(defentry XSetIconSizes(

    int 	;; display 
    int		;; w 
    int 	;; size_list 
    int			;; count     

)( void "XSetIconSizes"))



(defentry XSetNormalHints(

    int 	;; display 
    int		;; w 
    int 	;; hints 

)( void "XSetNormalHints"))



(defentry XSetSizeHints(

    int 	;; display 
    int		;; w 
    int 	;; hints 
    int		;; property 

)( void "XSetSizeHints"))



(defentry XSetStandardProperties(

    int 	;; display 
    int		;; w 
     object		;; window_name 
     object		;; icon_name 
    int		;; icon_pixmap 
    int 	;; argv 
    int			;; argc 
    int 	;; hints 

)( void "XSetStandardProperties"))



(defentry XSetWMHints(

    int 	;; display 
    int		;; w 
    int 	;; wm_hints 

)( void "XSetWMHints"))



(defentry XSetRegion(

    int 	;; display 
    int			;; gc 
    int		;; r 

)( void "XSetRegion"))



(defentry XSetStandardColormap(

    int 	;; display 
    int		;; w 
    int ;; colormap 
    int		;; property 

)( void "XSetStandardColormap"))



(defentry XSetZoomHints(

    int 	;; display 
    int		;; w 
    int 	;; zhints 

)( void "XSetZoomHints"))



(defentry XShrinkRegion(

    int		;; r 
    int			;; dx 
    int			;; dy 

)( void "XShrinkRegion"))



(defentry XSubtractRegion(

    int		;; sra 
    int		;; srb 
    int		;; dr_return 

)( void "XSubtractRegion"))



(defentry XUnionRectWithRegion(

    int 	;; rectangle 
    int		;; src_region 
    int		;; dest_region_return 

)( void "XUnionRectWithRegion"))



(defentry XUnionRegion(

    int		;; sra 
    int		;; srb 
    int		;; dr_return 

)( void "XUnionRegion"))



(defentry XWMGeometry(

    int 	;; display 
    int			;; screen_number 
     object		;; user_geometry 
     object		;; default_geometry 
     int	;; border_width 
    int 	;; hints 
    int 	;; x_return 
    int 	;; y_return 
    int 	;; width_return 
    int 	;; height_return 
    int 	;; gravity_return 

)( int "XWMGeometry"))



(defentry XXorRegion(

    int		;; sra 
    int		;; srb 
    int		;; dr_return 

)( void "XXorRegion"))
;;
 ;; These macros are used to give some sugar to the image routines so that
 ;; naive people are more comfortable with them.
 
(defentry XDestroyImage(int) (int "XDestroyImage"))
(defentry XGetPixel(int int int) (int "XGetPixel" ))
(defentry XPutPixel(int int int int) ( int "XPutPixel"))
(defentry XSubImage(int  int int int int) (int  "XSubImage"))
(defentry XAddPixel(int  int) (int  "XAddPixel"))
;;
 ;; Keysym macros, used on Keysyms to test for classes of symbols

(defentry IsKeypadKey(int)  (int "IsKeypadKey"))

(defentry IsCursorKey(int) (int "IsCursorKey"))

(defentry IsPFKey(int) (int "IsPFKey"))

(defentry  IsFunctionKey(int) (int "IsFunctionKey"))

(defentry IsMiscFunctionKey(int)  (int "IsMiscFunctionKey"))

(defentry IsModifierKey(int) (int "IsModifierKey"))
(defentry XUniqueContext() (int  "XUniqueContext"))
(defentry  XStringToContext(object) (int  "XStringToContext"))

