(in-package :XLIB)
; Xstruct.lsp         Hiep Huu Nguyen                      27 Aug 92

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




;;;;;; _XQEvent funcions ;;;;;;

(defentry make-_XQEvent () ( int  "make__XQEvent" ))
(defentry _XQEvent-event (int) ( int "_XQEvent_event" ))
(defentry set-_XQEvent-event (int int) ( void "set__XQEvent_event" ))
(defentry _XQEvent-next (int) ( int "_XQEvent_next" ))
(defentry set-_XQEvent-next (int int) ( void "set__XQEvent_next" ))


;;;;;; XCharStruct funcions ;;;;;;

(defentry make-XCharStruct () ( int  "make_XCharStruct" ))
(defentry XCharStruct-attributes (int) ( int "XCharStruct_attributes" ))
(defentry set-XCharStruct-attributes (int int) ( void "set_XCharStruct_attributes" ))
(defentry XCharStruct-descent (int) ( int "XCharStruct_descent" ))
(defentry set-XCharStruct-descent (int int) ( void "set_XCharStruct_descent" ))
(defentry XCharStruct-ascent (int) ( int "XCharStruct_ascent" ))
(defentry set-XCharStruct-ascent (int int) ( void "set_XCharStruct_ascent" ))
(defentry XCharStruct-width (int) ( int "XCharStruct_width" ))
(defentry set-XCharStruct-width (int int) ( void "set_XCharStruct_width" ))
(defentry XCharStruct-rbearing (int) ( int "XCharStruct_rbearing" ))
(defentry set-XCharStruct-rbearing (int int) ( void "set_XCharStruct_rbearing" ))
(defentry XCharStruct-lbearing (int) ( int "XCharStruct_lbearing" ))
(defentry set-XCharStruct-lbearing (int int) ( void "set_XCharStruct_lbearing" ))


;;;;;; XFontProp funcions ;;;;;;

(defentry make-XFontProp () ( int  "make_XFontProp" ))
(defentry XFontProp-card32 (int) ( int "XFontProp_card32" ))
(defentry set-XFontProp-card32 (int int) ( void "set_XFontProp_card32" ))
(defentry XFontProp-name (int) ( int "XFontProp_name" ))
(defentry set-XFontProp-name (int int) ( void "set_XFontProp_name" ))


;;;;;; XFontStruct funcions ;;;;;;

(defentry make-XFontStruct () ( int  "make_XFontStruct" ))
(defentry XFontStruct-descent (int) ( int "XFontStruct_descent" ))
(defentry set-XFontStruct-descent (int int) ( void "set_XFontStruct_descent" ))
(defentry XFontStruct-ascent (int) ( int "XFontStruct_ascent" ))
(defentry set-XFontStruct-ascent (int int) ( void "set_XFontStruct_ascent" ))
(defentry XFontStruct-per_char (int) ( int "XFontStruct_per_char" ))
(defentry set-XFontStruct-per_char (int int) ( void "set_XFontStruct_per_char" ))
(defentry XFontStruct-max_bounds (int) ( int "XFontStruct_max_bounds" ))
(defentry set-XFontStruct-max_bounds (int int) ( void "set_XFontStruct_max_bounds" ))
(defentry XFontStruct-min_bounds (int) ( int "XFontStruct_min_bounds" ))
(defentry set-XFontStruct-min_bounds (int int) ( void "set_XFontStruct_min_bounds" ))
(defentry XFontStruct-properties (int) ( int "XFontStruct_properties" ))
(defentry set-XFontStruct-properties (int int) ( void "set_XFontStruct_properties" ))
(defentry XFontStruct-n_properties (int) ( int "XFontStruct_n_properties" ))
(defentry set-XFontStruct-n_properties (int int) ( void "set_XFontStruct_n_properties" ))
(defentry XFontStruct-default_char (int) ( int "XFontStruct_default_char" ))
(defentry set-XFontStruct-default_char (int int) ( void "set_XFontStruct_default_char" ))
(defentry XFontStruct-all_chars_exist (int) ( int "XFontStruct_all_chars_exist" ))
(defentry set-XFontStruct-all_chars_exist (int int) ( void "set_XFontStruct_all_chars_exist" ))
(defentry XFontStruct-max_byte1 (int) ( int "XFontStruct_max_byte1" ))
(defentry set-XFontStruct-max_byte1 (int int) ( void "set_XFontStruct_max_byte1" ))
(defentry XFontStruct-min_byte1 (int) ( int "XFontStruct_min_byte1" ))
(defentry set-XFontStruct-min_byte1 (int int) ( void "set_XFontStruct_min_byte1" ))
(defentry XFontStruct-max_char_or_byte2 (int) ( int "XFontStruct_max_char_or_byte2" ))
(defentry set-XFontStruct-max_char_or_byte2 (int int) ( void "set_XFontStruct_max_char_or_byte2" ))
(defentry XFontStruct-min_char_or_byte2 (int) ( int "XFontStruct_min_char_or_byte2" ))
(defentry set-XFontStruct-min_char_or_byte2 (int int) ( void "set_XFontStruct_min_char_or_byte2" ))
(defentry XFontStruct-direction (int) ( int "XFontStruct_direction" ))
(defentry set-XFontStruct-direction (int int) ( void "set_XFontStruct_direction" ))
(defentry XFontStruct-fid (int) ( int "XFontStruct_fid" ))
(defentry set-XFontStruct-fid (int int) ( void "set_XFontStruct_fid" ))
(defentry XFontStruct-ext_data (int) ( int "XFontStruct_ext_data" ))
(defentry set-XFontStruct-ext_data (int int) ( void "set_XFontStruct_ext_data" ))


;;;;;; XTextItem funcions ;;;;;;

(defentry make-XTextItem () ( int  "make_XTextItem" ))
(defentry XTextItem-font (int) ( int "XTextItem_font" ))
(defentry set-XTextItem-font (int int) ( void "set_XTextItem_font" ))
(defentry XTextItem-delta (int) ( int "XTextItem_delta" ))
(defentry set-XTextItem-delta (int int) ( void "set_XTextItem_delta" ))
(defentry XTextItem-nchars (int) ( int "XTextItem_nchars" ))
(defentry set-XTextItem-nchars (int int) ( void "set_XTextItem_nchars" ))
(defentry XTextItem-chars (int) ( int "XTextItem_chars" ))
(defentry set-XTextItem-chars (int int) ( void "set_XTextItem_chars" ))


;;;;;; XChar2b funcions ;;;;;;

(defentry make-XChar2b () ( int  "make_XChar2b" ))
(defentry XChar2b-byte2 (int) ( char "XChar2b_byte2" ))
(defentry set-XChar2b-byte2 (int char) ( void "set_XChar2b_byte2" ))
(defentry XChar2b-byte1 (int) ( char "XChar2b_byte1" ))
(defentry set-XChar2b-byte1 (int char) ( void "set_XChar2b_byte1" ))


;;;;;; XTextItem16 funcions ;;;;;;

(defentry make-XTextItem16 () ( int  "make_XTextItem16" ))
(defentry XTextItem16-font (int) ( int "XTextItem16_font" ))
(defentry set-XTextItem16-font (int int) ( void "set_XTextItem16_font" ))
(defentry XTextItem16-delta (int) ( int "XTextItem16_delta" ))
(defentry set-XTextItem16-delta (int int) ( void "set_XTextItem16_delta" ))
(defentry XTextItem16-nchars (int) ( int "XTextItem16_nchars" ))
(defentry set-XTextItem16-nchars (int int) ( void "set_XTextItem16_nchars" ))
(defentry XTextItem16-chars (int) ( int "XTextItem16_chars" ))
(defentry set-XTextItem16-chars (int int) ( void "set_XTextItem16_chars" ))


;;;;;; XEDataObject funcions ;;;;;;

(defentry make-XEDataObject () ( int  "make_XEDataObject" ))
(defentry XEDataObject-font (int) ( int "XEDataObject_font" ))
(defentry set-XEDataObject-font (int int) ( void "set_XEDataObject_font" ))
(defentry XEDataObject-pixmap_format (int) ( int "XEDataObject_pixmap_format" ))
(defentry set-XEDataObject-pixmap_format (int int) ( void "set_XEDataObject_pixmap_format" ))
(defentry XEDataObject-screen (int) ( int "XEDataObject_screen" ))
(defentry set-XEDataObject-screen (int int) ( void "set_XEDataObject_screen" ))
(defentry XEDataObject-visual (int) ( int "XEDataObject_visual" ))
(defentry set-XEDataObject-visual (int int) ( void "set_XEDataObject_visual" ))
(defentry XEDataObject-gc (int) ( int "XEDataObject_gc" ))
(defentry set-XEDataObject-gc (int int) ( void "set_XEDataObject_gc" ))


;;;;;; XSizeHints funcions ;;;;;;

(defentry make-XSizeHints () ( int  "make_XSizeHints" ))
(defentry XSizeHints-win_gravity (int) ( int "XSizeHints_win_gravity" ))
(defentry set-XSizeHints-win_gravity (int int) ( void "set_XSizeHints_win_gravity" ))
(defentry XSizeHints-base_height (int) ( int "XSizeHints_base_height" ))
(defentry set-XSizeHints-base_height (int int) ( void "set_XSizeHints_base_height" ))
(defentry XSizeHints-base_width (int) ( int "XSizeHints_base_width" ))
(defentry set-XSizeHints-base_width (int int) ( void "set_XSizeHints_base_width" ))

(defentry XSizeHints-max_aspect_x (int) ( int "XSizeHints_max_aspect_x" ))
(defentry set-XSizeHints-max_aspect_x (int int) ( void "set_XSizeHints_max_aspect_x" ))
(defentry XSizeHints-max_aspect_y (int) ( int "XSizeHints_max_aspect_y" ))
(defentry set-XSizeHints-max_aspect_y (int int) ( void "set_XSizeHints_max_aspect_y" ))
(defentry XSizeHints-min_aspect_x (int) ( int "XSizeHints_min_aspect_x" ))
(defentry set-XSizeHints-min_aspect_x (int int) ( void "set_XSizeHints_min_aspect_x" ))
(defentry XSizeHints-min_aspect_y (int) ( int "XSizeHints_min_aspect_y" ))
(defentry set-XSizeHints-min_aspect_y (int int) ( void "set_XSizeHints_min_aspect_y" ))

(defentry XSizeHints-height_inc (int) ( int "XSizeHints_height_inc" ))
(defentry set-XSizeHints-height_inc (int int) ( void "set_XSizeHints_height_inc" ))
(defentry XSizeHints-width_inc (int) ( int "XSizeHints_width_inc" ))
(defentry set-XSizeHints-width_inc (int int) ( void "set_XSizeHints_width_inc" ))
(defentry XSizeHints-max_height (int) ( int "XSizeHints_max_height" ))
(defentry set-XSizeHints-max_height (int int) ( void "set_XSizeHints_max_height" ))
(defentry XSizeHints-max_width (int) ( int "XSizeHints_max_width" ))
(defentry set-XSizeHints-max_width (int int) ( void "set_XSizeHints_max_width" ))
(defentry XSizeHints-min_height (int) ( int "XSizeHints_min_height" ))
(defentry set-XSizeHints-min_height (int int) ( void "set_XSizeHints_min_height" ))
(defentry XSizeHints-min_width (int) ( int "XSizeHints_min_width" ))
(defentry set-XSizeHints-min_width (int int) ( void "set_XSizeHints_min_width" ))
(defentry XSizeHints-height (int) ( int "XSizeHints_height" ))
(defentry set-XSizeHints-height (int int) ( void "set_XSizeHints_height" ))
(defentry XSizeHints-width (int) ( int "XSizeHints_width" ))
(defentry set-XSizeHints-width (int int) ( void "set_XSizeHints_width" ))
(defentry XSizeHints-y (int) ( int "XSizeHints_y" ))
(defentry set-XSizeHints-y (int int) ( void "set_XSizeHints_y" ))
(defentry XSizeHints-x (int) ( int "XSizeHints_x" ))
(defentry set-XSizeHints-x (int int) ( void "set_XSizeHints_x" ))
(defentry XSizeHints-flags (int) ( int "XSizeHints_flags" ))
(defentry set-XSizeHints-flags (int int) ( void "set_XSizeHints_flags" ))


;;;;;; XWMHints funcions ;;;;;;

(defentry make-XWMHints () ( int  "make_XWMHints" ))
(defentry XWMHints-window_group (int) ( int "XWMHints_window_group" ))
(defentry set-XWMHints-window_group (int int) ( void "set_XWMHints_window_group" ))
(defentry XWMHints-icon_mask (int) ( int "XWMHints_icon_mask" ))
(defentry set-XWMHints-icon_mask (int int) ( void "set_XWMHints_icon_mask" ))
(defentry XWMHints-icon_y (int) ( int "XWMHints_icon_y" ))
(defentry set-XWMHints-icon_y (int int) ( void "set_XWMHints_icon_y" ))
(defentry XWMHints-icon_x (int) ( int "XWMHints_icon_x" ))
(defentry set-XWMHints-icon_x (int int) ( void "set_XWMHints_icon_x" ))
(defentry XWMHints-icon_window (int) ( int "XWMHints_icon_window" ))
(defentry set-XWMHints-icon_window (int int) ( void "set_XWMHints_icon_window" ))
(defentry XWMHints-icon_pixmap (int) ( int "XWMHints_icon_pixmap" ))
(defentry set-XWMHints-icon_pixmap (int int) ( void "set_XWMHints_icon_pixmap" ))
(defentry XWMHints-initial_state (int) ( int "XWMHints_initial_state" ))
(defentry set-XWMHints-initial_state (int int) ( void "set_XWMHints_initial_state" ))
(defentry XWMHints-input (int) ( int "XWMHints_input" ))
(defentry set-XWMHints-input (int int) ( void "set_XWMHints_input" ))
(defentry XWMHints-flags (int) ( int "XWMHints_flags" ))
(defentry set-XWMHints-flags (int int) ( void "set_XWMHints_flags" ))


;;;;;; XTextProperty funcions ;;;;;;

(defentry make-XTextProperty () ( int  "make_XTextProperty" ))
(defentry XTextProperty-nitems (int) ( int "XTextProperty_nitems" ))
(defentry set-XTextProperty-nitems (int int) ( void "set_XTextProperty_nitems" ))
(defentry XTextProperty-format (int) ( int "XTextProperty_format" ))
(defentry set-XTextProperty-format (int int) ( void "set_XTextProperty_format" ))
(defentry XTextProperty-encoding (int) ( int "XTextProperty_encoding" ))
(defentry set-XTextProperty-encoding (int int) ( void "set_XTextProperty_encoding" ))
(defentry XTextProperty-value (int) ( int "XTextProperty_value" ))
(defentry set-XTextProperty-value (int int) ( void "set_XTextProperty_value" ))


;;;;;; XIconSize funcions ;;;;;;

(defentry make-XIconSize () ( int  "make_XIconSize" ))
(defentry XIconSize-height_inc (int) ( int "XIconSize_height_inc" ))
(defentry set-XIconSize-height_inc (int int) ( void "set_XIconSize_height_inc" ))
(defentry XIconSize-width_inc (int) ( int "XIconSize_width_inc" ))
(defentry set-XIconSize-width_inc (int int) ( void "set_XIconSize_width_inc" ))
(defentry XIconSize-max_height (int) ( int "XIconSize_max_height" ))
(defentry set-XIconSize-max_height (int int) ( void "set_XIconSize_max_height" ))
(defentry XIconSize-max_width (int) ( int "XIconSize_max_width" ))
(defentry set-XIconSize-max_width (int int) ( void "set_XIconSize_max_width" ))
(defentry XIconSize-min_height (int) ( int "XIconSize_min_height" ))
(defentry set-XIconSize-min_height (int int) ( void "set_XIconSize_min_height" ))
(defentry XIconSize-min_width (int) ( int "XIconSize_min_width" ))
(defentry set-XIconSize-min_width (int int) ( void "set_XIconSize_min_width" ))


;;;;;; XClassHint funcions ;;;;;;

(defentry make-XClassHint () ( int  "make_XClassHint" ))
(defentry XClassHint-res_class (int) ( int "XClassHint_res_class" ))
(defentry set-XClassHint-res_class (int int) ( void "set_XClassHint_res_class" ))
(defentry XClassHint-res_name (int) ( int "XClassHint_res_name" ))
(defentry set-XClassHint-res_name (int int) ( void "set_XClassHint_res_name" ))


;;;;;; XComposeStatus funcions ;;;;;;

(defentry make-XComposeStatus () ( int  "make_XComposeStatus" ))
(defentry XComposeStatus-chars_matched (int) ( int "XComposeStatus_chars_matched" ))
(defentry set-XComposeStatus-chars_matched (int int) ( void "set_XComposeStatus_chars_matched" ))
(defentry XComposeStatus-compose_ptr (int) ( int "XComposeStatus_compose_ptr" ))
(defentry set-XComposeStatus-compose_ptr (int int) ( void "set_XComposeStatus_compose_ptr" ))


;;;;;; XVisualInfo funcions ;;;;;;

(defentry make-XVisualInfo () ( int  "make_XVisualInfo" ))
(defentry XVisualInfo-bits_per_rgb (int) ( int "XVisualInfo_bits_per_rgb" ))
(defentry set-XVisualInfo-bits_per_rgb (int int) ( void "set_XVisualInfo_bits_per_rgb" ))
(defentry XVisualInfo-colormap_size (int) ( int "XVisualInfo_colormap_size" ))
(defentry set-XVisualInfo-colormap_size (int int) ( void "set_XVisualInfo_colormap_size" ))
(defentry XVisualInfo-blue_mask (int) ( int "XVisualInfo_blue_mask" ))
(defentry set-XVisualInfo-blue_mask (int int) ( void "set_XVisualInfo_blue_mask" ))
(defentry XVisualInfo-green_mask (int) ( int "XVisualInfo_green_mask" ))
(defentry set-XVisualInfo-green_mask (int int) ( void "set_XVisualInfo_green_mask" ))
(defentry XVisualInfo-red_mask (int) ( int "XVisualInfo_red_mask" ))
(defentry set-XVisualInfo-red_mask (int int) ( void "set_XVisualInfo_red_mask" ))
(defentry XVisualInfo-class (int) ( int "XVisualInfo_class" ))
(defentry set-XVisualInfo-class (int int) ( void "set_XVisualInfo_class" ))
(defentry XVisualInfo-depth (int) ( int "XVisualInfo_depth" ))
(defentry set-XVisualInfo-depth (int int) ( void "set_XVisualInfo_depth" ))
(defentry XVisualInfo-screen (int) ( int "XVisualInfo_screen" ))
(defentry set-XVisualInfo-screen (int int) ( void "set_XVisualInfo_screen" ))
(defentry XVisualInfo-visualid (int) ( int "XVisualInfo_visualid" ))
(defentry set-XVisualInfo-visualid (int int) ( void "set_XVisualInfo_visualid" ))
(defentry XVisualInfo-visual (int) ( int "XVisualInfo_visual" ))
(defentry set-XVisualInfo-visual (int int) ( void "set_XVisualInfo_visual" ))


;;;;;; XStandardColormap funcions ;;;;;;

(defentry make-XStandardColormap () ( int  "make_XStandardColormap" ))
(defentry XStandardColormap-killid (int) ( int "XStandardColormap_killid" ))
(defentry set-XStandardColormap-killid (int int) ( void "set_XStandardColormap_killid" ))
(defentry XStandardColormap-visualid (int) ( int "XStandardColormap_visualid" ))
(defentry set-XStandardColormap-visualid (int int) ( void "set_XStandardColormap_visualid" ))
(defentry XStandardColormap-base_pixel (int) ( int "XStandardColormap_base_pixel" ))
(defentry set-XStandardColormap-base_pixel (int int) ( void "set_XStandardColormap_base_pixel" ))
(defentry XStandardColormap-blue_mult (int) ( int "XStandardColormap_blue_mult" ))
(defentry set-XStandardColormap-blue_mult (int int) ( void "set_XStandardColormap_blue_mult" ))
(defentry XStandardColormap-blue_max (int) ( int "XStandardColormap_blue_max" ))
(defentry set-XStandardColormap-blue_max (int int) ( void "set_XStandardColormap_blue_max" ))
(defentry XStandardColormap-green_mult (int) ( int "XStandardColormap_green_mult" ))
(defentry set-XStandardColormap-green_mult (int int) ( void "set_XStandardColormap_green_mult" ))
(defentry XStandardColormap-green_max (int) ( int "XStandardColormap_green_max" ))
(defentry set-XStandardColormap-green_max (int int) ( void "set_XStandardColormap_green_max" ))
(defentry XStandardColormap-red_mult (int) ( int "XStandardColormap_red_mult" ))
(defentry set-XStandardColormap-red_mult (int int) ( void "set_XStandardColormap_red_mult" ))
(defentry XStandardColormap-red_max (int) ( int "XStandardColormap_red_max" ))
(defentry set-XStandardColormap-red_max (int int) ( void "set_XStandardColormap_red_max" ))
(defentry XStandardColormap-colormap (int) ( int "XStandardColormap_colormap" ))
(defentry set-XStandardColormap-colormap (int int) ( void "set_XStandardColormap_colormap" ))
