(in-package :XLIB)
; XStruct-l-3.lsp        modified by Hiep Huu Nguyen                27 Aug 92

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




;;;;;; XExtCodes funcions ;;;;;;

(defentry make-XExtCodes () ( int  "make_XExtCodes" ))
(defentry XExtCodes-first_error (int) ( int "XExtCodes_first_error" ))
(defentry set-XExtCodes-first_error (int int) ( void "set_XExtCodes_first_error" ))
(defentry XExtCodes-first_event (int) ( int "XExtCodes_first_event" ))
(defentry set-XExtCodes-first_event (int int) ( void "set_XExtCodes_first_event" ))
(defentry XExtCodes-major_opcode (int) ( int "XExtCodes_major_opcode" ))
(defentry set-XExtCodes-major_opcode (int int) ( void "set_XExtCodes_major_opcode" ))
(defentry XExtCodes-extension (int) ( int "XExtCodes_extension" ))
(defentry set-XExtCodes-extension (int int) ( void "set_XExtCodes_extension" ))


;;;;;; XPixmapFormatValues funcions ;;;;;;

(defentry make-XPixmapFormatValues () ( int  "make_XPixmapFormatValues" ))
(defentry XPixmapFormatValues-scanline_pad (int) ( int "XPixmapFormatValues_scanline_pad" ))
(defentry set-XPixmapFormatValues-scanline_pad (int int) ( void "set_XPixmapFormatValues_scanline_pad" ))
(defentry XPixmapFormatValues-bits_per_pixel (int) ( int "XPixmapFormatValues_bits_per_pixel" ))
(defentry set-XPixmapFormatValues-bits_per_pixel (int int) ( void "set_XPixmapFormatValues_bits_per_pixel" ))
(defentry XPixmapFormatValues-depth (int) ( int "XPixmapFormatValues_depth" ))
(defentry set-XPixmapFormatValues-depth (int int) ( void "set_XPixmapFormatValues_depth" ))


;;;;;; XGCValues funcions ;;;;;;

(defentry make-XGCValues () ( int  "make_XGCValues" ))
(defentry XGCValues-dashes (int) ( char "XGCValues_dashes" ))
(defentry set-XGCValues-dashes (int char) ( void "set_XGCValues_dashes" ))
(defentry XGCValues-dash_offset (int) ( int "XGCValues_dash_offset" ))
(defentry set-XGCValues-dash_offset (int int) ( void "set_XGCValues_dash_offset" ))
(defentry XGCValues-clip_mask (int) ( int "XGCValues_clip_mask" ))
(defentry set-XGCValues-clip_mask (int int) ( void "set_XGCValues_clip_mask" ))
(defentry XGCValues-clip_y_origin (int) ( int "XGCValues_clip_y_origin" ))
(defentry set-XGCValues-clip_y_origin (int int) ( void "set_XGCValues_clip_y_origin" ))
(defentry XGCValues-clip_x_origin (int) ( int "XGCValues_clip_x_origin" ))
(defentry set-XGCValues-clip_x_origin (int int) ( void "set_XGCValues_clip_x_origin" ))
(defentry XGCValues-graphics_exposures (int) ( int "XGCValues_graphics_exposures" ))
(defentry set-XGCValues-graphics_exposures (int int) ( void "set_XGCValues_graphics_exposures" ))
(defentry XGCValues-subwindow_mode (int) ( int "XGCValues_subwindow_mode" ))
(defentry set-XGCValues-subwindow_mode (int int) ( void "set_XGCValues_subwindow_mode" ))
(defentry XGCValues-font (int) ( int "XGCValues_font" ))
(defentry set-XGCValues-font (int int) ( void "set_XGCValues_font" ))
(defentry XGCValues-ts_y_origin (int) ( int "XGCValues_ts_y_origin" ))
(defentry set-XGCValues-ts_y_origin (int int) ( void "set_XGCValues_ts_y_origin" ))
(defentry XGCValues-ts_x_origin (int) ( int "XGCValues_ts_x_origin" ))
(defentry set-XGCValues-ts_x_origin (int int) ( void "set_XGCValues_ts_x_origin" ))
(defentry XGCValues-stipple (int) ( int "XGCValues_stipple" ))
(defentry set-XGCValues-stipple (int int) ( void "set_XGCValues_stipple" ))
(defentry XGCValues-tile (int) ( int "XGCValues_tile" ))
(defentry set-XGCValues-tile (int int) ( void "set_XGCValues_tile" ))
(defentry XGCValues-arc_mode (int) ( int "XGCValues_arc_mode" ))
(defentry set-XGCValues-arc_mode (int int) ( void "set_XGCValues_arc_mode" ))
(defentry XGCValues-fill_rule (int) ( int "XGCValues_fill_rule" ))
(defentry set-XGCValues-fill_rule (int int) ( void "set_XGCValues_fill_rule" ))
(defentry XGCValues-fill_style (int) ( int "XGCValues_fill_style" ))
(defentry set-XGCValues-fill_style (int int) ( void "set_XGCValues_fill_style" ))
(defentry XGCValues-join_style (int) ( int "XGCValues_join_style" ))
(defentry set-XGCValues-join_style (int int) ( void "set_XGCValues_join_style" ))
(defentry XGCValues-cap_style (int) ( int "XGCValues_cap_style" ))
(defentry set-XGCValues-cap_style (int int) ( void "set_XGCValues_cap_style" ))
(defentry XGCValues-line_style (int) ( int "XGCValues_line_style" ))
(defentry set-XGCValues-line_style (int int) ( void "set_XGCValues_line_style" ))
(defentry XGCValues-line_width (int) ( int "XGCValues_line_width" ))
(defentry set-XGCValues-line_width (int int) ( void "set_XGCValues_line_width" ))
(defentry XGCValues-background (int) ( int "XGCValues_background" ))
(defentry set-XGCValues-background (int int) ( void "set_XGCValues_background" ))
(defentry XGCValues-foreground (int) ( int "XGCValues_foreground" ))
(defentry set-XGCValues-foreground (int int) ( void "set_XGCValues_foreground" ))
(defentry XGCValues-plane_mask (int) ( int "XGCValues_plane_mask" ))
(defentry set-XGCValues-plane_mask (int int) ( void "set_XGCValues_plane_mask" ))
(defentry XGCValues-function (int) ( int "XGCValues_function" ))
(defentry set-XGCValues-function (int int) ( void "set_XGCValues_function" ))


;;;;;; *GC funcions ;;;;;;

;;(defentry make-*GC () ( int  "make_*GC" ))
;;(defentry *GC-values (int) ( int "*GC_values" ))
;;(defentry set-*GC-values (int int) ( void "set_*GC_values" ))
;;(defentry *GC-dirty (int) ( int "*GC_dirty" ))
;;(defentry set-*GC-dirty (int int) ( void "set_*GC_dirty" ))
;;(defentry *GC-dashes (int) ( int "*GC_dashes" ))
;;(defentry set-*GC-dashes (int int) ( void "set_*GC_dashes" ))
;;(defentry *GC-rects (int) ( int "*GC_rects" ))
;;(defentry set-*GC-rects (int int) ( void "set_*GC_rects" ))
;;(defentry *GC-gid (int) ( int "*GC_gid" ))
;;(defentry set-*GC-gid (int int) ( void "set_*GC_gid" ))
;;(defentry *GC-ext_data (int) ( int "*GC_ext_data" ))
;;(defentry set-*GC-ext_data (int int) ( void "set_*GC_ext_data" ))


;;;;;; Visual funcions ;;;;;;

(defentry make-Visual () ( int  "make_Visual" ))
(defentry Visual-map_entries (int) ( int "Visual_map_entries" ))
(defentry set-Visual-map_entries (int int) ( void "set_Visual_map_entries" ))
(defentry Visual-bits_per_rgb (int) ( int "Visual_bits_per_rgb" ))
(defentry set-Visual-bits_per_rgb (int int) ( void "set_Visual_bits_per_rgb" ))
(defentry Visual-blue_mask (int) ( int "Visual_blue_mask" ))
(defentry set-Visual-blue_mask (int int) ( void "set_Visual_blue_mask" ))
(defentry Visual-green_mask (int) ( int "Visual_green_mask" ))
(defentry set-Visual-green_mask (int int) ( void "set_Visual_green_mask" ))
(defentry Visual-red_mask (int) ( int "Visual_red_mask" ))
(defentry set-Visual-red_mask (int int) ( void "set_Visual_red_mask" ))
(defentry Visual-class (int) ( int "Visual_class" ))
(defentry set-Visual-class (int int) ( void "set_Visual_class" ))
(defentry Visual-visualid (int) ( int "Visual_visualid" ))
(defentry set-Visual-visualid (int int) ( void "set_Visual_visualid" ))
(defentry Visual-ext_data (int) ( int "Visual_ext_data" ))
(defentry set-Visual-ext_data (int int) ( void "set_Visual_ext_data" ))


;;;;;; Depth funcions ;;;;;;

(defentry make-Depth () ( int  "make_Depth" ))
(defentry Depth-visuals (int) ( int "Depth_visuals" ))
(defentry set-Depth-visuals (int int) ( void "set_Depth_visuals" ))
(defentry Depth-nvisuals (int) ( int "Depth_nvisuals" ))
(defentry set-Depth-nvisuals (int int) ( void "set_Depth_nvisuals" ))
(defentry Depth-depth (int) ( int "Depth_depth" ))
(defentry set-Depth-depth (int int) ( void "set_Depth_depth" ))


;;;;;; Screen funcions ;;;;;;

(defentry make-Screen () ( int  "make_Screen" ))
(defentry Screen-root_input_mask (int) ( int "Screen_root_input_mask" ))
(defentry set-Screen-root_input_mask (int int) ( void "set_Screen_root_input_mask" ))
(defentry Screen-save_unders (int) ( int "Screen_save_unders" ))
(defentry set-Screen-save_unders (int int) ( void "set_Screen_save_unders" ))
(defentry Screen-backing_store (int) ( int "Screen_backing_store" ))
(defentry set-Screen-backing_store (int int) ( void "set_Screen_backing_store" ))
(defentry Screen-min_maps (int) ( int "Screen_min_maps" ))
(defentry set-Screen-min_maps (int int) ( void "set_Screen_min_maps" ))
(defentry Screen-max_maps (int) ( int "Screen_max_maps" ))
(defentry set-Screen-max_maps (int int) ( void "set_Screen_max_maps" ))
(defentry Screen-black_pixel (int) ( int "Screen_black_pixel" ))
(defentry set-Screen-black_pixel (int int) ( void "set_Screen_black_pixel" ))
(defentry Screen-white_pixel (int) ( int "Screen_white_pixel" ))
(defentry set-Screen-white_pixel (int int) ( void "set_Screen_white_pixel" ))
(defentry Screen-cmap (int) ( int "Screen_cmap" ))
(defentry set-Screen-cmap (int int) ( void "set_Screen_cmap" ))
(defentry Screen-default_gc (int) ( int "Screen_default_gc" ))
(defentry set-Screen-default_gc (int int) ( void "set_Screen_default_gc" ))
(defentry Screen-root_visual (int) ( int "Screen_root_visual" ))
(defentry set-Screen-root_visual (int int) ( void "set_Screen_root_visual" ))
(defentry Screen-root_depth (int) ( int "Screen_root_depth" ))
(defentry set-Screen-root_depth (int int) ( void "set_Screen_root_depth" ))
(defentry Screen-depths (int) ( int "Screen_depths" ))
(defentry set-Screen-depths (int int) ( void "set_Screen_depths" ))
(defentry Screen-ndepths (int) ( int "Screen_ndepths" ))
(defentry set-Screen-ndepths (int int) ( void "set_Screen_ndepths" ))
(defentry Screen-mheight (int) ( int "Screen_mheight" ))
(defentry set-Screen-mheight (int int) ( void "set_Screen_mheight" ))
(defentry Screen-mwidth (int) ( int "Screen_mwidth" ))
(defentry set-Screen-mwidth (int int) ( void "set_Screen_mwidth" ))
(defentry Screen-height (int) ( int "Screen_height" ))
(defentry set-Screen-height (int int) ( void "set_Screen_height" ))
(defentry Screen-width (int) ( int "Screen_width" ))
(defentry set-Screen-width (int int) ( void "set_Screen_width" ))
(defentry Screen-root (int) ( int "Screen_root" ))
(defentry set-Screen-root (int int) ( void "set_Screen_root" ))
(defentry Screen-display (int) ( int "Screen_display" ))
(defentry set-Screen-display (int int) ( void "set_Screen_display" ))
(defentry Screen-ext_data (int) ( int "Screen_ext_data" ))
(defentry set-Screen-ext_data (int int) ( void "set_Screen_ext_data" ))


;;;;;; ScreenFormat funcions ;;;;;;

(defentry make-ScreenFormat () ( int  "make_ScreenFormat" ))
(defentry ScreenFormat-scanline_pad (int) ( int "ScreenFormat_scanline_pad" ))
(defentry set-ScreenFormat-scanline_pad (int int) ( void "set_ScreenFormat_scanline_pad" ))
(defentry ScreenFormat-bits_per_pixel (int) ( int "ScreenFormat_bits_per_pixel" ))
(defentry set-ScreenFormat-bits_per_pixel (int int) ( void "set_ScreenFormat_bits_per_pixel" ))
(defentry ScreenFormat-depth (int) ( int "ScreenFormat_depth" ))
(defentry set-ScreenFormat-depth (int int) ( void "set_ScreenFormat_depth" ))
(defentry ScreenFormat-ext_data (int) ( int "ScreenFormat_ext_data" ))
(defentry set-ScreenFormat-ext_data (int int) ( void "set_ScreenFormat_ext_data" ))


;;;;;; XSetWindowAttributes funcions ;;;;;;

(defentry make-XSetWindowAttributes () ( int  "make_XSetWindowAttributes" ))
(defentry XSetWindowAttributes-cursor (int) ( int "XSetWindowAttributes_cursor" ))
(defentry set-XSetWindowAttributes-cursor (int int) ( void "set_XSetWindowAttributes_cursor" ))
(defentry XSetWindowAttributes-colormap (int) ( int "XSetWindowAttributes_colormap" ))
(defentry set-XSetWindowAttributes-colormap (int int) ( void "set_XSetWindowAttributes_colormap" ))
(defentry XSetWindowAttributes-override_redirect (int) ( int "XSetWindowAttributes_override_redirect" ))
(defentry set-XSetWindowAttributes-override_redirect (int int) ( void "set_XSetWindowAttributes_override_redirect" ))
(defentry XSetWindowAttributes-do_not_propagate_mask (int) ( int "XSetWindowAttributes_do_not_propagate_mask" ))
(defentry set-XSetWindowAttributes-do_not_propagate_mask (int int) ( void "set_XSetWindowAttributes_do_not_propagate_mask" ))
(defentry XSetWindowAttributes-event_mask (int) ( int "XSetWindowAttributes_event_mask" ))
(defentry set-XSetWindowAttributes-event_mask (int int) ( void "set_XSetWindowAttributes_event_mask" ))
(defentry XSetWindowAttributes-save_under (int) ( int "XSetWindowAttributes_save_under" ))
(defentry set-XSetWindowAttributes-save_under (int int) ( void "set_XSetWindowAttributes_save_under" ))
(defentry XSetWindowAttributes-backing_pixel (int) ( int "XSetWindowAttributes_backing_pixel" ))
(defentry set-XSetWindowAttributes-backing_pixel (int int) ( void "set_XSetWindowAttributes_backing_pixel" ))
(defentry XSetWindowAttributes-backing_planes (int) ( int "XSetWindowAttributes_backing_planes" ))
(defentry set-XSetWindowAttributes-backing_planes (int int) ( void "set_XSetWindowAttributes_backing_planes" ))
(defentry XSetWindowAttributes-backing_store (int) ( int "XSetWindowAttributes_backing_store" ))
(defentry set-XSetWindowAttributes-backing_store (int int) ( void "set_XSetWindowAttributes_backing_store" ))
(defentry XSetWindowAttributes-win_gravity (int) ( int "XSetWindowAttributes_win_gravity" ))
(defentry set-XSetWindowAttributes-win_gravity (int int) ( void "set_XSetWindowAttributes_win_gravity" ))
(defentry XSetWindowAttributes-bit_gravity (int) ( int "XSetWindowAttributes_bit_gravity" ))
(defentry set-XSetWindowAttributes-bit_gravity (int int) ( void "set_XSetWindowAttributes_bit_gravity" ))
(defentry XSetWindowAttributes-border_pixel (int) ( int "XSetWindowAttributes_border_pixel" ))
(defentry set-XSetWindowAttributes-border_pixel (int int) ( void "set_XSetWindowAttributes_border_pixel" ))
(defentry XSetWindowAttributes-border_pixmap (int) ( int "XSetWindowAttributes_border_pixmap" ))
(defentry set-XSetWindowAttributes-border_pixmap (int int) ( void "set_XSetWindowAttributes_border_pixmap" ))
(defentry XSetWindowAttributes-background_pixel (int) ( int "XSetWindowAttributes_background_pixel" ))
(defentry set-XSetWindowAttributes-background_pixel (int int) ( void "set_XSetWindowAttributes_background_pixel" ))
(defentry XSetWindowAttributes-background_pixmap (int) ( int "XSetWindowAttributes_background_pixmap" ))
(defentry set-XSetWindowAttributes-background_pixmap (int int) ( void "set_XSetWindowAttributes_background_pixmap" ))


;;;;;; XWindowAttributes funcions ;;;;;;

(defentry make-XWindowAttributes () ( int  "make_XWindowAttributes" ))
(defentry XWindowAttributes-screen (int) ( int "XWindowAttributes_screen" ))
(defentry set-XWindowAttributes-screen (int int) ( void "set_XWindowAttributes_screen" ))
(defentry XWindowAttributes-override_redirect (int) ( int "XWindowAttributes_override_redirect" ))
(defentry set-XWindowAttributes-override_redirect (int int) ( void "set_XWindowAttributes_override_redirect" ))
(defentry XWindowAttributes-do_not_propagate_mask (int) ( int "XWindowAttributes_do_not_propagate_mask" ))
(defentry set-XWindowAttributes-do_not_propagate_mask (int int) ( void "set_XWindowAttributes_do_not_propagate_mask" ))
(defentry XWindowAttributes-your_event_mask (int) ( int "XWindowAttributes_your_event_mask" ))
(defentry set-XWindowAttributes-your_event_mask (int int) ( void "set_XWindowAttributes_your_event_mask" ))
(defentry XWindowAttributes-all_event_masks (int) ( int "XWindowAttributes_all_event_masks" ))
(defentry set-XWindowAttributes-all_event_masks (int int) ( void "set_XWindowAttributes_all_event_masks" ))
(defentry XWindowAttributes-map_state (int) ( int "XWindowAttributes_map_state" ))
(defentry set-XWindowAttributes-map_state (int int) ( void "set_XWindowAttributes_map_state" ))
(defentry XWindowAttributes-map_installed (int) ( int "XWindowAttributes_map_installed" ))
(defentry set-XWindowAttributes-map_installed (int int) ( void "set_XWindowAttributes_map_installed" ))
(defentry XWindowAttributes-colormap (int) ( int "XWindowAttributes_colormap" ))
(defentry set-XWindowAttributes-colormap (int int) ( void "set_XWindowAttributes_colormap" ))
(defentry XWindowAttributes-save_under (int) ( int "XWindowAttributes_save_under" ))
(defentry set-XWindowAttributes-save_under (int int) ( void "set_XWindowAttributes_save_under" ))
(defentry XWindowAttributes-backing_pixel (int) ( int "XWindowAttributes_backing_pixel" ))
(defentry set-XWindowAttributes-backing_pixel (int int) ( void "set_XWindowAttributes_backing_pixel" ))
(defentry XWindowAttributes-backing_planes (int) ( int "XWindowAttributes_backing_planes" ))
(defentry set-XWindowAttributes-backing_planes (int int) ( void "set_XWindowAttributes_backing_planes" ))
(defentry XWindowAttributes-backing_store (int) ( int "XWindowAttributes_backing_store" ))
(defentry set-XWindowAttributes-backing_store (int int) ( void "set_XWindowAttributes_backing_store" ))
(defentry XWindowAttributes-win_gravity (int) ( int "XWindowAttributes_win_gravity" ))
(defentry set-XWindowAttributes-win_gravity (int int) ( void "set_XWindowAttributes_win_gravity" ))
(defentry XWindowAttributes-bit_gravity (int) ( int "XWindowAttributes_bit_gravity" ))
(defentry set-XWindowAttributes-bit_gravity (int int) ( void "set_XWindowAttributes_bit_gravity" ))
(defentry XWindowAttributes-class (int) ( int "XWindowAttributes_class" ))
(defentry set-XWindowAttributes-class (int int) ( void "set_XWindowAttributes_class" ))
(defentry XWindowAttributes-root (int) ( int "XWindowAttributes_root" ))
(defentry set-XWindowAttributes-root (int int) ( void "set_XWindowAttributes_root" ))
(defentry XWindowAttributes-visual (int) ( int "XWindowAttributes_visual" ))
(defentry set-XWindowAttributes-visual (int int) ( void "set_XWindowAttributes_visual" ))
(defentry XWindowAttributes-depth (int) ( int "XWindowAttributes_depth" ))
(defentry set-XWindowAttributes-depth (int int) ( void "set_XWindowAttributes_depth" ))
(defentry XWindowAttributes-border_width (int) ( int "XWindowAttributes_border_width" ))
(defentry set-XWindowAttributes-border_width (int int) ( void "set_XWindowAttributes_border_width" ))
(defentry XWindowAttributes-height (int) ( int "XWindowAttributes_height" ))
(defentry set-XWindowAttributes-height (int int) ( void "set_XWindowAttributes_height" ))
(defentry XWindowAttributes-width (int) ( int "XWindowAttributes_width" ))
(defentry set-XWindowAttributes-width (int int) ( void "set_XWindowAttributes_width" ))
(defentry XWindowAttributes-y (int) ( int "XWindowAttributes_y" ))
(defentry set-XWindowAttributes-y (int int) ( void "set_XWindowAttributes_y" ))
(defentry XWindowAttributes-x (int) ( int "XWindowAttributes_x" ))
(defentry set-XWindowAttributes-x (int int) ( void "set_XWindowAttributes_x" ))


;;;;;; XHostAddress funcions ;;;;;;

(defentry make-XHostAddress () ( int  "make_XHostAddress" ))
(defentry XHostAddress-address (int) ( int "XHostAddress_address" ))
(defentry set-XHostAddress-address (int int) ( void "set_XHostAddress_address" ))
(defentry XHostAddress-length (int) ( int "XHostAddress_length" ))
(defentry set-XHostAddress-length (int int) ( void "set_XHostAddress_length" ))
(defentry XHostAddress-family (int) ( int "XHostAddress_family" ))
(defentry set-XHostAddress-family (int int) ( void "set_XHostAddress_family" ))


;;;;;; XImage funcions ;;;;;;

(defentry make-XImage () ( int  "make_XImage" ))
;;(defentry XImage-f (int) ( int "XImage_f" ))
;;(defentry set-XImage-f (int int) ( void "set_XImage_f" ))
(defentry XImage-obdata (int) ( int "XImage_obdata" ))
(defentry set-XImage-obdata (int int) ( void "set_XImage_obdata" ))
(defentry XImage-blue_mask (int) ( int "XImage_blue_mask" ))
(defentry set-XImage-blue_mask (int int) ( void "set_XImage_blue_mask" ))
(defentry XImage-green_mask (int) ( int "XImage_green_mask" ))
(defentry set-XImage-green_mask (int int) ( void "set_XImage_green_mask" ))
(defentry XImage-red_mask (int) ( int "XImage_red_mask" ))
(defentry set-XImage-red_mask (int int) ( void "set_XImage_red_mask" ))
(defentry XImage-bits_per_pixel (int) ( int "XImage_bits_per_pixel" ))
(defentry set-XImage-bits_per_pixel (int int) ( void "set_XImage_bits_per_pixel" ))
(defentry XImage-bytes_per_line (int) ( int "XImage_bytes_per_line" ))
(defentry set-XImage-bytes_per_line (int int) ( void "set_XImage_bytes_per_line" ))
(defentry XImage-depth (int) ( int "XImage_depth" ))
(defentry set-XImage-depth (int int) ( void "set_XImage_depth" ))
(defentry XImage-bitmap_pad (int) ( int "XImage_bitmap_pad" ))
(defentry set-XImage-bitmap_pad (int int) ( void "set_XImage_bitmap_pad" ))
(defentry XImage-bitmap_bit_order (int) ( int "XImage_bitmap_bit_order" ))
(defentry set-XImage-bitmap_bit_order (int int) ( void "set_XImage_bitmap_bit_order" ))
(defentry XImage-bitmap_unit (int) ( int "XImage_bitmap_unit" ))
(defentry set-XImage-bitmap_unit (int int) ( void "set_XImage_bitmap_unit" ))
(defentry XImage-byte_order (int) ( int "XImage_byte_order" ))
(defentry set-XImage-byte_order (int int) ( void "set_XImage_byte_order" ))
(defentry XImage-data (int) ( int "XImage_data" ))
(defentry set-XImage-data (int int) ( void "set_XImage_data" ))
(defentry XImage-format (int) ( int "XImage_format" ))
(defentry set-XImage-format (int int) ( void "set_XImage_format" ))
(defentry XImage-xoffset (int) ( int "XImage_xoffset" ))
(defentry set-XImage-xoffset (int int) ( void "set_XImage_xoffset" ))
(defentry XImage-height (int) ( int "XImage_height" ))
(defentry set-XImage-height (int int) ( void "set_XImage_height" ))
(defentry XImage-width (int) ( int "XImage_width" ))
(defentry set-XImage-width (int int) ( void "set_XImage_width" ))


;;;;;; XWindowChanges funcions ;;;;;;

(defentry make-XWindowChanges () ( int  "make_XWindowChanges" ))
(defentry XWindowChanges-stack_mode (int) ( int "XWindowChanges_stack_mode" ))
(defentry set-XWindowChanges-stack_mode (int int) ( void "set_XWindowChanges_stack_mode" ))
(defentry XWindowChanges-sibling (int) ( int "XWindowChanges_sibling" ))
(defentry set-XWindowChanges-sibling (int int) ( void "set_XWindowChanges_sibling" ))
(defentry XWindowChanges-border_width (int) ( int "XWindowChanges_border_width" ))
(defentry set-XWindowChanges-border_width (int int) ( void "set_XWindowChanges_border_width" ))
(defentry XWindowChanges-height (int) ( int "XWindowChanges_height" ))
(defentry set-XWindowChanges-height (int int) ( void "set_XWindowChanges_height" ))
(defentry XWindowChanges-width (int) ( int "XWindowChanges_width" ))
(defentry set-XWindowChanges-width (int int) ( void "set_XWindowChanges_width" ))
(defentry XWindowChanges-y (int) ( int "XWindowChanges_y" ))
(defentry set-XWindowChanges-y (int int) ( void "set_XWindowChanges_y" ))
(defentry XWindowChanges-x (int) ( int "XWindowChanges_x" ))
(defentry set-XWindowChanges-x (int int) ( void "set_XWindowChanges_x" ))


;;;;;; XColor funcions ;;;;;;

(defentry make-XColor () ( int  "make_XColor" ))
(defentry XColor-pad (int) ( char "XColor_pad" ))
(defentry set-XColor-pad (int char) ( void "set_XColor_pad" ))
(defentry XColor-flags (int) ( char "XColor_flags" ))
(defentry set-XColor-flags (int char) ( void "set_XColor_flags" ))
(defentry XColor-blue (int) ( int "XColor_blue" ))
(defentry set-XColor-blue (int int) ( void "set_XColor_blue" ))
(defentry XColor-green (int) ( int "XColor_green" ))
(defentry set-XColor-green (int int) ( void "set_XColor_green" ))
(defentry XColor-red (int) ( int "XColor_red" ))
(defentry set-XColor-red (int int) ( void "set_XColor_red" ))
(defentry XColor-pixel (int) ( int "XColor_pixel" ))
(defentry set-XColor-pixel (int int) ( void "set_XColor_pixel" ))


;;;;;; XSegment funcions ;;;;;;

(defentry make-XSegment () ( int  "make_XSegment" ))
(defentry XSegment-y2 (int) ( int "XSegment_y2" ))
(defentry set-XSegment-y2 (int int) ( void "set_XSegment_y2" ))
(defentry XSegment-x2 (int) ( int "XSegment_x2" ))
(defentry set-XSegment-x2 (int int) ( void "set_XSegment_x2" ))
(defentry XSegment-y1 (int) ( int "XSegment_y1" ))
(defentry set-XSegment-y1 (int int) ( void "set_XSegment_y1" ))
(defentry XSegment-x1 (int) ( int "XSegment_x1" ))
(defentry set-XSegment-x1 (int int) ( void "set_XSegment_x1" ))


;;;;;; XPoint funcions ;;;;;;

(defentry make-XPoint () ( int  "make_XPoint" ))
(defentry XPoint-y (int) ( int "XPoint_y" ))
(defentry set-XPoint-y (int int) ( void "set_XPoint_y" ))
(defentry XPoint-x (int) ( int "XPoint_x" ))
(defentry set-XPoint-x (int int) ( void "set_XPoint_x" ))


;;;;;; XRectangle funcions ;;;;;;

(defentry make-XRectangle () ( int  "make_XRectangle" ))
(defentry XRectangle-height (int) ( int "XRectangle_height" ))
(defentry set-XRectangle-height (int int) ( void "set_XRectangle_height" ))
(defentry XRectangle-width (int) ( int "XRectangle_width" ))
(defentry set-XRectangle-width (int int) ( void "set_XRectangle_width" ))
(defentry XRectangle-y (int) ( int "XRectangle_y" ))
(defentry set-XRectangle-y (int int) ( void "set_XRectangle_y" ))
(defentry XRectangle-x (int) ( int "XRectangle_x" ))
(defentry set-XRectangle-x (int int) ( void "set_XRectangle_x" ))


;;;;;; XArc funcions ;;;;;;

(defentry make-XArc () ( int  "make_XArc" ))
(defentry XArc-angle2 (int) ( int "XArc_angle2" ))
(defentry set-XArc-angle2 (int int) ( void "set_XArc_angle2" ))
(defentry XArc-angle1 (int) ( int "XArc_angle1" ))
(defentry set-XArc-angle1 (int int) ( void "set_XArc_angle1" ))
(defentry XArc-height (int) ( int "XArc_height" ))
(defentry set-XArc-height (int int) ( void "set_XArc_height" ))
(defentry XArc-width (int) ( int "XArc_width" ))
(defentry set-XArc-width (int int) ( void "set_XArc_width" ))
(defentry XArc-y (int) ( int "XArc_y" ))
(defentry set-XArc-y (int int) ( void "set_XArc_y" ))
(defentry XArc-x (int) ( int "XArc_x" ))
(defentry set-XArc-x (int int) ( void "set_XArc_x" ))


;;;;;; XKeyboardControl funcions ;;;;;;

(defentry make-XKeyboardControl () ( int  "make_XKeyboardControl" ))
(defentry XKeyboardControl-auto_repeat_mode (int) ( int "XKeyboardControl_auto_repeat_mode" ))
;;(defentry set-XKeyboardControl-auto_repeat_mode (int int) ( void "set_XKeyboardControl_auto_repeat_mode" ))
(defentry XKeyboardControl-key (int) ( int "XKeyboardControl_key" ))
(defentry set-XKeyboardControl-key (int int) ( void "set_XKeyboardControl_key" ))
(defentry XKeyboardControl-led_mode (int) ( int "XKeyboardControl_led_mode" ))
(defentry set-XKeyboardControl-led_mode (int int) ( void "set_XKeyboardControl_led_mode" ))
(defentry XKeyboardControl-led (int) ( int "XKeyboardControl_led" ))
(defentry set-XKeyboardControl-led (int int) ( void "set_XKeyboardControl_led" ))
(defentry XKeyboardControl-bell_duration (int) ( int "XKeyboardControl_bell_duration" ))
(defentry set-XKeyboardControl-bell_duration (int int) ( void "set_XKeyboardControl_bell_duration" ))
(defentry XKeyboardControl-bell_pitch (int) ( int "XKeyboardControl_bell_pitch" ))
(defentry set-XKeyboardControl-bell_pitch (int int) ( void "set_XKeyboardControl_bell_pitch" ))
(defentry XKeyboardControl-bell_percent (int) ( int "XKeyboardControl_bell_percent" ))
(defentry set-XKeyboardControl-bell_percent (int int) ( void "set_XKeyboardControl_bell_percent" ))
(defentry XKeyboardControl-key_click_percent (int) ( int "XKeyboardControl_key_click_percent" ))
(defentry set-XKeyboardControl-key_click_percent (int int) ( void "set_XKeyboardControl_key_click_percent" ))


;;;;;; XKeyboardState funcions ;;;;;;

(defentry make-XKeyboardState () ( int  "make_XKeyboardState" ))
(defentry XKeyboardState-auto_repeats (int) ( int "XKeyboardState_auto_repeats" ))
(defentry set-XKeyboardState-auto_repeats (int object) ( void "set_XKeyboardState_auto_repeats" ))
(defentry XKeyboardState-global_auto_repeat (int) ( int "XKeyboardState_global_auto_repeat" ))
(defentry set-XKeyboardState-global_auto_repeat (int int) ( void "set_XKeyboardState_global_auto_repeat" ))
(defentry XKeyboardState-led_mask (int) ( int "XKeyboardState_led_mask" ))
(defentry set-XKeyboardState-led_mask (int int) ( void "set_XKeyboardState_led_mask" ))
(defentry XKeyboardState-bell_duration (int) ( int "XKeyboardState_bell_duration" ))
(defentry set-XKeyboardState-bell_duration (int int) ( void "set_XKeyboardState_bell_duration" ))
(defentry XKeyboardState-bell_pitch (int) ( int "XKeyboardState_bell_pitch" ))
(defentry set-XKeyboardState-bell_pitch (int int) ( void "set_XKeyboardState_bell_pitch" ))
(defentry XKeyboardState-bell_percent (int) ( int "XKeyboardState_bell_percent" ))
(defentry set-XKeyboardState-bell_percent (int int) ( void "set_XKeyboardState_bell_percent" ))
(defentry XKeyboardState-key_click_percent (int) ( int "XKeyboardState_key_click_percent" ))
(defentry set-XKeyboardState-key_click_percent (int int) ( void "set_XKeyboardState_key_click_percent" ))


;;;;;; XTimeCoord funcions ;;;;;;

(defentry make-XTimeCoord () ( int  "make_XTimeCoord" ))
(defentry XTimeCoord-y (int) ( int "XTimeCoord_y" ))
(defentry set-XTimeCoord-y (int int) ( void "set_XTimeCoord_y" ))
(defentry XTimeCoord-x (int) ( int "XTimeCoord_x" ))
(defentry set-XTimeCoord-x (int int) ( void "set_XTimeCoord_x" ))
(defentry XTimeCoord-time (int) ( int "XTimeCoord_time" ))
(defentry set-XTimeCoord-time (int int) ( void "set_XTimeCoord_time" ))


;;;;;; XModifierKeymap funcions ;;;;;;

(defentry make-XModifierKeymap () ( int  "make_XModifierKeymap" ))
(defentry XModifierKeymap-modifiermap (int) ( int "XModifierKeymap_modifiermap" ))
(defentry set-XModifierKeymap-modifiermap (int int) ( void "set_XModifierKeymap_modifiermap" ))
(defentry XModifierKeymap-max_keypermod (int) ( int "XModifierKeymap_max_keypermod" ))
(defentry set-XModifierKeymap-max_keypermod (int int) ( void "set_XModifierKeymap_max_keypermod" ))
