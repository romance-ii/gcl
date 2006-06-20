/* XStruct-4.c           Hiep Huu Nguyen                         27 Aug 92 */

/* ; Copyright (c) 1994 Hiep Huu Nguyen and The University of Texas at Austin.

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
; See the file dec.copyright for details. */

#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include "include.h"
#define int fixnum
/********* XExtCodes funcions *****/

int  make_XExtCodes (void) {
          return ((int) calloc(1, sizeof(XExtCodes)));
}

int  XExtCodes_first_error(XExtCodes *i)
{
          return(i->first_error);
}

void set_XExtCodes_first_error(XExtCodes *i, int j)
{
          i->first_error = j;
}

int  XExtCodes_first_event(XExtCodes *i)
{
          return(i->first_event);
}

void set_XExtCodes_first_event(XExtCodes *i, int j)
{
          i->first_event = j;
}

int  XExtCodes_major_opcode(XExtCodes *i)
{
          return(i->major_opcode);
}

void set_XExtCodes_major_opcode(XExtCodes *i, int j)
{
          i->major_opcode = j;
}

int  XExtCodes_extension(XExtCodes *i)
{
          return(i->extension);
}

void set_XExtCodes_extension(XExtCodes *i, int j)
{
          i->extension = j;
}


/********* XPixmapFormatValues funcions *****/

int  make_XPixmapFormatValues (void) {
          return ((int) calloc(1, sizeof(XPixmapFormatValues)));
}

int  XPixmapFormatValues_scanline_pad(XPixmapFormatValues *i)
{
          return(i->scanline_pad);
}

void set_XPixmapFormatValues_scanline_pad(XPixmapFormatValues *i, int j)
{
          i->scanline_pad = j;
}

int  XPixmapFormatValues_bits_per_pixel(XPixmapFormatValues *i)
{
          return(i->bits_per_pixel);
}

void set_XPixmapFormatValues_bits_per_pixel(XPixmapFormatValues *i, int j)
{
          i->bits_per_pixel = j;
}

int  XPixmapFormatValues_depth(XPixmapFormatValues *i)
{
          return(i->depth);
}

void set_XPixmapFormatValues_depth(XPixmapFormatValues *i, int j)
{
          i->depth = j;
}


/********* XGCValues funcions *****/

int  make_XGCValues (void) {
          return ((int) calloc(1, sizeof(XGCValues)));
}

char XGCValues_dashes(XGCValues *i)
{
          return(i->dashes);
}

void set_XGCValues_dashes(XGCValues *i, char j)
{
          i->dashes = j;
}

int  XGCValues_dash_offset(XGCValues *i)
{
          return(i->dash_offset);
}

void set_XGCValues_dash_offset(XGCValues *i, int j)
{
          i->dash_offset = j;
}

int  XGCValues_clip_mask(XGCValues *i)
{
          return(i->clip_mask);
}

void set_XGCValues_clip_mask(XGCValues *i, int j)
{
          i->clip_mask = j;
}

int  XGCValues_clip_y_origin(XGCValues *i)
{
          return(i->clip_y_origin);
}

void set_XGCValues_clip_y_origin(XGCValues *i, int j)
{
          i->clip_y_origin = j;
}

int  XGCValues_clip_x_origin(XGCValues *i)
{
          return(i->clip_x_origin);
}

void set_XGCValues_clip_x_origin(XGCValues *i, int j)
{
          i->clip_x_origin = j;
}

int  XGCValues_graphics_exposures(XGCValues *i)
{
          return(i->graphics_exposures);
}

void set_XGCValues_graphics_exposures(XGCValues *i, int j)
{
          i->graphics_exposures = j;
}

int  XGCValues_subwindow_mode(XGCValues *i)
{
          return(i->subwindow_mode);
}

void set_XGCValues_subwindow_mode(XGCValues *i, int j)
{
          i->subwindow_mode = j;
}

int  XGCValues_font(XGCValues *i)
{
          return(i->font);
}

void set_XGCValues_font(XGCValues *i, int j)
{
          i->font = j;
}

int  XGCValues_ts_y_origin(XGCValues *i)
{
          return(i->ts_y_origin);
}

void set_XGCValues_ts_y_origin(XGCValues *i, int j)
{
          i->ts_y_origin = j;
}

int  XGCValues_ts_x_origin(XGCValues *i)
{
          return(i->ts_x_origin);
}

void set_XGCValues_ts_x_origin(XGCValues *i, int j)
{
          i->ts_x_origin = j;
}

int  XGCValues_stipple(XGCValues *i)
{
          return(i->stipple);
}

void set_XGCValues_stipple(XGCValues *i, int j)
{
          i->stipple = j;
}

int  XGCValues_tile(XGCValues *i)
{
          return(i->tile);
}

void set_XGCValues_tile(XGCValues *i, int j)
{
          i->tile = j;
}

int  XGCValues_arc_mode(XGCValues *i)
{
          return(i->arc_mode);
}

void set_XGCValues_arc_mode(XGCValues *i, int j)
{
          i->arc_mode = j;
}

int  XGCValues_fill_rule(XGCValues *i)
{
          return(i->fill_rule);
}

void set_XGCValues_fill_rule(XGCValues *i, int j)
{
          i->fill_rule = j;
}

int  XGCValues_fill_style(XGCValues *i)
{
          return(i->fill_style);
}

void set_XGCValues_fill_style(XGCValues *i, int j)
{
          i->fill_style = j;
}

int  XGCValues_join_style(XGCValues *i)
{
          return(i->join_style);
}

void set_XGCValues_join_style(XGCValues *i, int j)
{
          i->join_style = j;
}

int  XGCValues_cap_style(XGCValues *i)
{
          return(i->cap_style);
}

void set_XGCValues_cap_style(XGCValues *i, int j)
{
          i->cap_style = j;
}

int  XGCValues_line_style(XGCValues *i)
{
          return(i->line_style);
}

void set_XGCValues_line_style(XGCValues *i, int j)
{
          i->line_style = j;
}

int  XGCValues_line_width(XGCValues *i)
{
          return(i->line_width);
}

void set_XGCValues_line_width(XGCValues *i, int j)
{
          i->line_width = j;
}

int  XGCValues_background(XGCValues *i)
{
          return(i->background);
}

void set_XGCValues_background(XGCValues *i, int j)
{
          i->background = j;
}

int  XGCValues_foreground(XGCValues *i)
{
          return(i->foreground);
}

void set_XGCValues_foreground(XGCValues *i, int j)
{
          i->foreground = j;
}

int  XGCValues_plane_mask(XGCValues *i)
{
          return(i->plane_mask);
}

void set_XGCValues_plane_mask(XGCValues *i, int j)
{
          i->plane_mask = j;
}

int  XGCValues_function(XGCValues *i)
{
          return(i->function);
}

void set_XGCValues_function(XGCValues *i, int j)
{
          i->function = j;
}


/********* GC funcions *****

int  make_GC (){
          GC i;
          return ((int) &i);
}

int  GC_values(i)
GC i;
{
          return(i->values);
}

void set_GC_values(i, j)
GC i;
int j;
{
          i->values = j;
}

int  GC_dirty(i)
GC i;
{
          return(i->dirty);
}

void set_GC_dirty(i, j)
GC i;
int j;
{
          i->dirty = j;
}

int  GC_dashes(i)
GC i;
{
          return(i->dashes);
}

void set_GC_dashes(i, j)
GC i;
int j;
{
          i->dashes = j;
}

int  GC_rects(i)
GC i;
{
          return(i->rects);
}

void set_GC_rects(i, j)
GC i;
int j;
{
          i->rects = j;
}

int  GC_gid(i)
GC i;
{
          return(i->gid);
}

void set_GC_gid(i, j)
GC i;
int j;
{
          i->gid = j;
}

int  GC_ext_data(i)
GC i;
{
          return(i->ext_data);
}

void set_GC_ext_data(i, j)
GC i;
int j;
{
          i->ext_data = j;
}

*/

/********* Visual funcions *****/

int  make_Visual (void) {
          return ((int) calloc(1, sizeof(Visual)));
}

int  Visual_map_entries(Visual *i)
{
          return(i->map_entries);
}

void set_Visual_map_entries(Visual *i, int j)
{
          i->map_entries = j;
}

int  Visual_bits_per_rgb(Visual *i)
{
          return(i->bits_per_rgb);
}

void set_Visual_bits_per_rgb(Visual *i, int j)
{
          i->bits_per_rgb = j;
}

int   Visual_blue_mask(Visual *i)
{
          return(i->blue_mask);
}

void set_Visual_blue_mask(Visual *i, int j)
{
          i->blue_mask = j;
}

int  Visual_green_mask(Visual *i)
{
          return(i->green_mask);
}

void set_Visual_green_mask(Visual *i, int j)
{
          i->green_mask = j;
}

int  Visual_red_mask(Visual *i)
{
          return(i->red_mask);
}

void set_Visual_red_mask(Visual *i, int j)
{
          i->red_mask = j;
}

int  Visual_class(Visual *i)
{
          return(i->class);
}

void set_Visual_class(Visual *i, int j)
{
          i->class = j;
}

int  Visual_visualid(Visual *i)
{
          return(i->visualid);
}

void set_Visual_visualid(Visual *i, int j)
{
          i->visualid = j;
}

XExtData *Visual_ext_data(Visual *i)
{
          return(i->ext_data);
}

void set_Visual_ext_data(Visual *i, XExtData *j)
{
          i->ext_data = j;
}


/********* Depth funcions *****/

int  make_Depth (void) {
          return ((int) calloc(1, sizeof(Depth)));
}

Visual *Depth_visuals(Depth *i)
{
          return(i->visuals);
}

void set_Depth_visuals(Depth *i, Visual *j)
{
          i->visuals = j;
}

int  Depth_nvisuals(Depth *i)
{
          return(i->nvisuals);
}

void set_Depth_nvisuals(Depth *i, int j)
{
          i->nvisuals = j;
}

int  Depth_depth(Depth *i)
{
          return(i->depth);
}

void set_Depth_depth(Depth *i, int j)
{
          i->depth = j;
}


/********* Screen funcions *****/

int  make_Screen (void) {
          return ((int) calloc(1, sizeof(Screen)));
}

int  Screen_root_input_mask(Screen *i)
{
          return(i->root_input_mask);
}

void set_Screen_root_input_mask(Screen *i, int j)
{
          i->root_input_mask = j;
}

int  Screen_save_unders(Screen *i)
{
          return(i->save_unders);
}

void set_Screen_save_unders(Screen *i, int j)
{
          i->save_unders = j;
}

int  Screen_backing_store(Screen *i)
{
          return(i->backing_store);
}

void set_Screen_backing_store(Screen *i, int j)
{
          i->backing_store = j;
}

int  Screen_min_maps(Screen *i)
{
          return(i->min_maps);
}

void set_Screen_min_maps(Screen *i, int j)
{
          i->min_maps = j;
}

int  Screen_max_maps(Screen *i)
{
          return(i->max_maps);
}

void set_Screen_max_maps(Screen *i, int j)
{
          i->max_maps = j;
}

int  Screen_black_pixel(Screen *i)
{
          return(i->black_pixel);
}

void set_Screen_black_pixel(Screen *i, int j)
{
          i->black_pixel = j;
}

int  Screen_white_pixel(Screen *i)
{
          return(i->white_pixel);
}

void set_Screen_white_pixel(Screen *i, int j)
{
          i->white_pixel = j;
}

int  Screen_cmap(Screen *i)
{
          return(i->cmap);
}

void set_Screen_cmap(Screen *i, int j)
{
          i->cmap = j;
}

GC  Screen_default_gc(Screen *i)
{
          return(i->default_gc);
}

void set_Screen_default_gc(Screen *i, GC j)
{
          i->default_gc = j;
}

Visual *Screen_root_visual(Screen *i)
{
          return(i->root_visual);
}

void set_Screen_root_visual(Screen *i, Visual *j)
{
          i->root_visual = j;
}

int  Screen_root_depth(Screen *i)
{
          return(i->root_depth);
}

void set_Screen_root_depth(Screen *i, int j)
{
          i->root_depth = j;
}

Depth *Screen_depths(Screen *i)
{
          return(i->depths);
}

void set_Screen_depths(Screen *i, Depth *j)
{
          i->depths = j;
}

int  Screen_ndepths(Screen *i)
{
          return(i->ndepths);
}

void set_Screen_ndepths(Screen *i, int j)
{
          i->ndepths = j;
}

int  Screen_mheight(Screen *i)
{
          return(i->mheight);
}

void set_Screen_mheight(Screen *i, int j)
{
          i->mheight = j;
}

int  Screen_mwidth(Screen *i)
{
          return(i->mwidth);
}

void set_Screen_mwidth(Screen *i, int j)
{
          i->mwidth = j;
}

int  Screen_height(Screen *i)
{
          return(i->height);
}

void set_Screen_height(Screen *i, int j)
{
          i->height = j;
}

int  Screen_width(Screen *i)
{
          return(i->width);
}

void set_Screen_width(Screen *i, int j)
{
          i->width = j;
}

int  Screen_root(Screen *i)
{
          return(i->root);
}

void set_Screen_root(Screen *i, int j)
{
          i->root = j;
}

Display *Screen_display(Screen *i)
{
          return(i->display);
}

void set_Screen_display(Screen *i, Display *j)
{
           i->display = j;
}

XExtData *Screen_ext_data(Screen *i)
{
          return(i->ext_data);
}

void set_Screen_ext_data(Screen *i, XExtData *j)
{
          i->ext_data = j;
}


/********* ScreenFormat funcions *****/

int  make_ScreenFormat (void) {
          return ((int) calloc(1, sizeof(ScreenFormat)));
}

int  ScreenFormat_scanline_pad(ScreenFormat *i)
{
          return(i->scanline_pad);
}

void set_ScreenFormat_scanline_pad(ScreenFormat *i, int j)
{
          i->scanline_pad = j;
}

int  ScreenFormat_bits_per_pixel(ScreenFormat *i)
{
          return(i->bits_per_pixel);
}

void set_ScreenFormat_bits_per_pixel(ScreenFormat *i, int j)
{
          i->bits_per_pixel = j;
}

int  ScreenFormat_depth(ScreenFormat *i)
{
          return(i->depth);
}

void set_ScreenFormat_depth(ScreenFormat *i, int j)
{
          i->depth = j;
}

XExtData *ScreenFormat_ext_data(ScreenFormat *i)
{
          return(i->ext_data);
}

void set_ScreenFormat_ext_data(ScreenFormat *i, XExtData *j)
{
          i->ext_data = j;
}


/********* XSetWindowAttributes funcions *****/

int  make_XSetWindowAttributes (void) {
          return ((int) calloc(1, sizeof(XSetWindowAttributes)));
}

int  XSetWindowAttributes_cursor(XSetWindowAttributes *i)
{
          return(i->cursor);
}

void set_XSetWindowAttributes_cursor(XSetWindowAttributes *i, int j)
{
          i->cursor = j;
}

int  XSetWindowAttributes_colormap(XSetWindowAttributes *i)
{
          return(i->colormap);
}

void set_XSetWindowAttributes_colormap(XSetWindowAttributes *i, int j)
{
          i->colormap = j;
}

int  XSetWindowAttributes_override_redirect(XSetWindowAttributes *i)
{
          return(i->override_redirect);
}

void set_XSetWindowAttributes_override_redirect(XSetWindowAttributes *i, int j)
{
          i->override_redirect = j;
}

int  XSetWindowAttributes_do_not_propagate_mask(XSetWindowAttributes *i)
{
          return(i->do_not_propagate_mask);
}

void set_XSetWindowAttributes_do_not_propagate_mask(XSetWindowAttributes *i, int j)
{
          i->do_not_propagate_mask = j;
}

int  XSetWindowAttributes_event_mask(XSetWindowAttributes *i)
{
          return(i->event_mask);
}

void set_XSetWindowAttributes_event_mask(XSetWindowAttributes *i, int j)
{
          i->event_mask = j;
}

int  XSetWindowAttributes_save_under(XSetWindowAttributes *i)
{
          return(i->save_under);
}

void set_XSetWindowAttributes_save_under(XSetWindowAttributes *i, int j)
{
          i->save_under = j;
}

int  XSetWindowAttributes_backing_pixel(XSetWindowAttributes *i)
{
          return(i->backing_pixel);
}

void set_XSetWindowAttributes_backing_pixel(XSetWindowAttributes *i, int j)
{
          i->backing_pixel = j;
}

int  XSetWindowAttributes_backing_planes(XSetWindowAttributes *i)
{
          return(i->backing_planes);
}

void set_XSetWindowAttributes_backing_planes(XSetWindowAttributes *i, int j)
{
          i->backing_planes = j;
}

int  XSetWindowAttributes_backing_store(XSetWindowAttributes *i)
{
          return(i->backing_store);
}

void set_XSetWindowAttributes_backing_store(XSetWindowAttributes *i, int j)
{
          i->backing_store = j;
}

int  XSetWindowAttributes_win_gravity(XSetWindowAttributes *i)
{
          return(i->win_gravity);
}

void set_XSetWindowAttributes_win_gravity(XSetWindowAttributes *i, int j)
{
          i->win_gravity = j;
}

int  XSetWindowAttributes_bit_gravity(XSetWindowAttributes *i)
{
          return(i->bit_gravity);
}

void set_XSetWindowAttributes_bit_gravity(XSetWindowAttributes *i, int j)
{
          i->bit_gravity = j;
}

int  XSetWindowAttributes_border_pixel(XSetWindowAttributes *i)
{
          return(i->border_pixel);
}

void set_XSetWindowAttributes_border_pixel(XSetWindowAttributes *i, int j)
{
          i->border_pixel = j;
}

int  XSetWindowAttributes_border_pixmap(XSetWindowAttributes *i)
{
          return(i->border_pixmap);
}

void set_XSetWindowAttributes_border_pixmap(XSetWindowAttributes *i, int j)
{
          i->border_pixmap = j;
}

int  XSetWindowAttributes_background_pixel(XSetWindowAttributes *i)
{
          return(i->background_pixel);
}

void set_XSetWindowAttributes_background_pixel(XSetWindowAttributes *i, int j)
{
          i->background_pixel = j;
}

int  XSetWindowAttributes_background_pixmap(XSetWindowAttributes *i)
{
          return(i->background_pixmap);
}

void set_XSetWindowAttributes_background_pixmap(XSetWindowAttributes *i, int j)
{
          i->background_pixmap = j;
}


/********* XWindowAttributes funcions *****/

int  make_XWindowAttributes (void) {
          return ((int) calloc(1, sizeof(XWindowAttributes)));
}

Screen *XWindowAttributes_screen(XWindowAttributes *i)
{
          return(i->screen);
}

void set_XWindowAttributes_screen(XWindowAttributes *i, Screen *j)
{
          i->screen = j;
}

int  XWindowAttributes_override_redirect(XWindowAttributes *i)
{
          return(i->override_redirect);
}

void set_XWindowAttributes_override_redirect(XWindowAttributes *i, int j)
{
          i->override_redirect = j;
}

int  XWindowAttributes_do_not_propagate_mask(XWindowAttributes *i)
{
          return(i->do_not_propagate_mask);
}

void set_XWindowAttributes_do_not_propagate_mask(XWindowAttributes *i, int j)
{
          i->do_not_propagate_mask = j;
}

int  XWindowAttributes_your_event_mask(XWindowAttributes *i)
{
          return(i->your_event_mask);
}

void set_XWindowAttributes_your_event_mask(XWindowAttributes *i, int j)
{
          i->your_event_mask = j;
}

int  XWindowAttributes_all_event_masks(XWindowAttributes *i)
{
          return(i->all_event_masks);
}

void set_XWindowAttributes_all_event_masks(XWindowAttributes *i, int j)
{
          i->all_event_masks = j;
}

int  XWindowAttributes_map_state(XWindowAttributes *i)
{
          return(i->map_state);
}

void set_XWindowAttributes_map_state(XWindowAttributes *i, int j)
{
          i->map_state = j;
}

int  XWindowAttributes_map_installed(XWindowAttributes *i)
{
          return(i->map_installed);
}

void set_XWindowAttributes_map_installed(XWindowAttributes *i, int j)
{
          i->map_installed = j;
}

int  XWindowAttributes_colormap(XWindowAttributes *i)
{
          return(i->colormap);
}

void set_XWindowAttributes_colormap(XWindowAttributes *i, int j)
{
          i->colormap = j;
}

int  XWindowAttributes_save_under(XWindowAttributes *i)
{
          return(i->save_under);
}

void set_XWindowAttributes_save_under(XWindowAttributes *i, int j)
{
          i->save_under = j;
}

int  XWindowAttributes_backing_pixel(XWindowAttributes *i)
{
          return(i->backing_pixel);
}

void set_XWindowAttributes_backing_pixel(XWindowAttributes *i, int j)
{
          i->backing_pixel = j;
}

int  XWindowAttributes_backing_planes(XWindowAttributes *i)
{
          return(i->backing_planes);
}

void set_XWindowAttributes_backing_planes(XWindowAttributes *i, int j)
{
          i->backing_planes = j;
}

int  XWindowAttributes_backing_store(XWindowAttributes *i)
{
          return(i->backing_store);
}

void set_XWindowAttributes_backing_store(XWindowAttributes *i, int j)
{
          i->backing_store = j;
}

int  XWindowAttributes_win_gravity(XWindowAttributes *i)
{
          return(i->win_gravity);
}

void set_XWindowAttributes_win_gravity(XWindowAttributes *i, int j)
{
          i->win_gravity = j;
}

int  XWindowAttributes_bit_gravity(XWindowAttributes *i)
{
          return(i->bit_gravity);
}

void set_XWindowAttributes_bit_gravity(XWindowAttributes *i, int j)
{
          i->bit_gravity = j;
}

int  XWindowAttributes_class(XWindowAttributes *i)
{
          return(i->class);
}

void set_XWindowAttributes_class(XWindowAttributes *i, int j)
{
          i->class = j;
}

int  XWindowAttributes_root(XWindowAttributes *i)
{
          return(i->root);
}

void set_XWindowAttributes_root(XWindowAttributes *i, int j)
{
          i->root = j;
}

Visual *XWindowAttributes_visual(XWindowAttributes *i)
{
          return(i->visual);
}

void set_XWindowAttributes_visual(XWindowAttributes *i, Visual *j)
{
          i->visual = j;
}

int  XWindowAttributes_depth(XWindowAttributes *i)
{
          return(i->depth);
}

void set_XWindowAttributes_depth(XWindowAttributes *i, int j)
{
          i->depth = j;
}

int  XWindowAttributes_border_width(XWindowAttributes *i)
{
          return(i->border_width);
}

void set_XWindowAttributes_border_width(XWindowAttributes *i, int j)
{
          i->border_width = j;
}

int  XWindowAttributes_height(XWindowAttributes *i)
{
          return(i->height);
}

void set_XWindowAttributes_height(XWindowAttributes *i, int j)
{
          i->height = j;
}

int  XWindowAttributes_width(XWindowAttributes *i)
{
          return(i->width);
}

void set_XWindowAttributes_width(XWindowAttributes *i, int j)
{
          i->width = j;
}

int  XWindowAttributes_y(XWindowAttributes *i)
{
          return(i->y);
}

void set_XWindowAttributes_y(XWindowAttributes *i, int j)
{
          i->y = j;
}

int  XWindowAttributes_x(XWindowAttributes *i)
{
          return(i->x);
}

void set_XWindowAttributes_x(XWindowAttributes *i, int j)
{
          i->x = j;
}


/********* XHostAddress funcions *****/

int  make_XHostAddress (void) {
          return ((int) calloc(1, sizeof(XHostAddress)));
}

char *XHostAddress_address(XHostAddress *i)
{
          return(i->address);
}

void set_XHostAddress_address(XHostAddress *i, char *j)
{
          i->address = j;
}

int  XHostAddress_length(XHostAddress *i)
{
          return(i->length);
}

void set_XHostAddress_length(XHostAddress *i, int j)
{
          i->length = j;
}

int  XHostAddress_family(XHostAddress *i)
{
          return(i->family);
}

void set_XHostAddress_family(XHostAddress *i, int j)
{
          i->family = j;
}


/********* XImage funcions *****/

int  make_XImage (void) {
          return ((int) calloc(1, sizeof(XImage)));
}

XPointer XImage_obdata(XImage *i)
{
          return(i->obdata);
}

void set_XImage_obdata(XImage *i, XPointer j)
{
          i->obdata = j;
}

int  XImage_blue_mask(XImage *i)
{
          return(i->blue_mask);
}

void set_XImage_blue_mask(XImage *i, int j)
{
          i->blue_mask = j;
}

int  XImage_green_mask(XImage *i)
{
          return(i->green_mask);
}

void set_XImage_green_mask(XImage *i, int j)
{
          i->green_mask = j;
}

int  XImage_red_mask(XImage *i)
{
          return(i->red_mask);
}

void set_XImage_red_mask(XImage *i, int j)
{
          i->red_mask = j;
}

int  XImage_bits_per_pixel(XImage *i)
{
          return(i->bits_per_pixel);
}

void set_XImage_bits_per_pixel(XImage *i, int j)
{
          i->bits_per_pixel = j;
}

int  XImage_bytes_per_line(XImage *i)
{
          return(i->bytes_per_line);
}

void set_XImage_bytes_per_line(XImage *i, int j)
{
          i->bytes_per_line = j;
}

int  XImage_depth(XImage *i)
{
          return(i->depth);
}

void set_XImage_depth(XImage *i, int j)
{
          i->depth = j;
}

int  XImage_bitmap_pad(XImage *i)
{
          return(i->bitmap_pad);
}

void set_XImage_bitmap_pad(XImage *i, int j)
{
          i->bitmap_pad = j;
}

int  XImage_bitmap_bit_order(XImage *i)
{
          return(i->bitmap_bit_order);
}

void set_XImage_bitmap_bit_order(XImage *i, int j)
{
          i->bitmap_bit_order = j;
}

int  XImage_bitmap_unit(XImage *i)
{
          return(i->bitmap_unit);
}

void set_XImage_bitmap_unit(XImage *i, int j)
{
          i->bitmap_unit = j;
}

int  XImage_byte_order(XImage *i)
{
          return(i->byte_order);
}

void set_XImage_byte_order(XImage *i, int j)
{
          i->byte_order = j;
}

char *XImage_data(XImage *i)
{
          return(i->data);
}

void set_XImage_data(XImage *i, char *j)
{
          i->data = j;
}

int  XImage_format(XImage *i)
{
          return(i->format);
}

void set_XImage_format(XImage *i, int j)
{
          i->format = j;
}

int  XImage_xoffset(XImage *i)
{
          return(i->xoffset);
}

void set_XImage_xoffset(XImage *i, int j)
{
          i->xoffset = j;
}

int  XImage_height(XImage *i)
{
          return(i->height);
}

void set_XImage_height(XImage *i, int j)
{
          i->height = j;
}

int  XImage_width(XImage *i)
{
          return(i->width);
}

void set_XImage_width(XImage *i, int j)
{
          i->width = j;
}


/********* XWindowChanges funcions *****/

int  make_XWindowChanges (void) {
          return ((int) calloc(1, sizeof(XWindowChanges)));
}

int  XWindowChanges_stack_mode(XWindowChanges *i)
{
          return(i->stack_mode);
}

void set_XWindowChanges_stack_mode(XWindowChanges *i, int j)
{
          i->stack_mode = j;
}

int  XWindowChanges_sibling(XWindowChanges *i)
{
          return(i->sibling);
}

void set_XWindowChanges_sibling(XWindowChanges *i, int j)
{
          i->sibling = j;
}

int  XWindowChanges_border_width(XWindowChanges *i)
{
          return(i->border_width);
}

void set_XWindowChanges_border_width(XWindowChanges *i, int j)
{
          i->border_width = j;
}

int  XWindowChanges_height(XWindowChanges *i)
{
          return(i->height);
}

void set_XWindowChanges_height(XWindowChanges *i, int j)
{
          i->height = j;
}

int  XWindowChanges_width(XWindowChanges *i)
{
          return(i->width);
}

void set_XWindowChanges_width(XWindowChanges *i, int j)
{
          i->width = j;
}

int  XWindowChanges_y(XWindowChanges *i)
{
          return(i->y);
}

void set_XWindowChanges_y(XWindowChanges *i, int j)
{
          i->y = j;
}

int  XWindowChanges_x(XWindowChanges *i)
{
          return(i->x);
}

void set_XWindowChanges_x(XWindowChanges *i, int j)
{
          i->x = j;
}


/********* XColor funcions *****/

int  make_XColor (void) {
          return ((int) calloc(1, sizeof(XColor)));
}

char XColor_pad(XColor *i)
{
          return(i->pad);
}

void set_XColor_pad(XColor *i, char j)
{
          i->pad = j;
}

char XColor_flags(XColor *i)
{
          return(i->flags);
}

void set_XColor_flags(XColor *i, char j)
{
          i->flags = j;
}

int  XColor_blue(XColor *i)
{
          return(i->blue);
}

void set_XColor_blue(XColor *i, int j)
{
          i->blue = j;
}

int  XColor_green(XColor *i)
{
          return(i->green);
}

void set_XColor_green(XColor *i, int j)
{
          i->green = j;
}

int  XColor_red(XColor *i)
{
          return(i->red);
}

void set_XColor_red(XColor *i, int j)
{
          i->red = j;
}

int  XColor_pixel(XColor *i)
{
          return(i->pixel);
}

void set_XColor_pixel(XColor *i, int j)
{
          i->pixel = j;
}


/********* XSegment funcions *****/

int  make_XSegment (void) {
          return ((int) calloc(1, sizeof(XSegment)));
}

int  XSegment_y2(XSegment *i)
{
          return(i->y2);
}

void set_XSegment_y2(XSegment *i, int j)
{
          i->y2 = j;
}

int  XSegment_x2(XSegment *i)
{
          return(i->x2);
}

void set_XSegment_x2(XSegment *i, int j)
{
          i->x2 = j;
}

int  XSegment_y1(XSegment *i)
{
          return(i->y1);
}

void set_XSegment_y1(XSegment *i, int j)
{
          i->y1 = j;
}

int  XSegment_x1(XSegment *i)
{
          return(i->x1);
}

void set_XSegment_x1(XSegment *i, int j)
{
          i->x1 = j;
}


/********* XPoint funcions *****/

int  make_XPoint (void) {
          return ((int) calloc(1, sizeof(XPoint)));
}

int  XPoint_y(XPoint *i)
{
          return(i->y);
}

void set_XPoint_y(XPoint *i, int j)
{
          i->y = j;
}

int  XPoint_x(XPoint *i)
{
          return(i->x);
}

void set_XPoint_x(XPoint *i, int j)
{
          i->x = j;
}


/********* XRectangle funcions *****/

int  make_XRectangle (void) {
          return ((int) calloc(1, sizeof(XRectangle)));
}

int  XRectangle_height(XRectangle *i)
{
          return(i->height);
}

void set_XRectangle_height(XRectangle *i, int j)
{
          i->height = j;
}

int  XRectangle_width(XRectangle *i)
{
          return(i->width);
}

void set_XRectangle_width(XRectangle *i, int j)
{
          i->width = j;
}

int  XRectangle_y(XRectangle *i)
{
          return(i->y);
}

void set_XRectangle_y(XRectangle *i, int j)
{
          i->y = j;
}

int  XRectangle_x(XRectangle *i)
{
          return(i->x);
}

void set_XRectangle_x(XRectangle *i, int j)
{
          i->x = j;
}


/********* XArc funcions *****/

int  make_XArc (void) {
          return ((int) calloc(1, sizeof(XArc)));
}

int  XArc_angle2(XArc *i)
{
          return(i->angle2);
}

void set_XArc_angle2(XArc *i, int j)
{
          i->angle2 = j;
}

int  XArc_angle1(XArc *i)
{
          return(i->angle1);
}

void set_XArc_angle1(XArc *i, int j)
{
          i->angle1 = j;
}

int  XArc_height(XArc *i)
{
          return(i->height);
}

void set_XArc_height(XArc *i, int j)
{
          i->height = j;
}

int  XArc_width(XArc *i)
{
          return(i->width);
}

void set_XArc_width(XArc *i, int j)
{
          i->width = j;
}

int  XArc_y(XArc *i)
{
          return(i->y);
}

void set_XArc_y(XArc *i, int j)
{
          i->y = j;
}

int  XArc_x(XArc *i)
{
          return(i->x);
}

void set_XArc_x(XArc *i, int j)
{
          i->x = j;
}


/********* XKeyboardControl funcions *****/

int  make_XKeyboardControl (void) {
          return ((int) calloc(1, sizeof(XKeyboardControl)));
}

int  XKeyboardControl_auto_repeat_mode(XKeyboardControl *i)
{
          return(i->auto_repeat_mode);
}

void set_XKeyboardControl_auto_repeat_mode(XKeyboardControl *i, int j)
{
          i->auto_repeat_mode = j;
}

int  XKeyboardControl_key(XKeyboardControl *i)
{
          return(i->key);
}

void set_XKeyboardControl_key(XKeyboardControl *i, int j)
{
          i->key = j;
}

int  XKeyboardControl_led_mode(XKeyboardControl *i)
{
          return(i->led_mode);
}

void set_XKeyboardControl_led_mode(XKeyboardControl *i, int j)
{
          i->led_mode = j;
}

int  XKeyboardControl_led(XKeyboardControl *i)
{
          return(i->led);
}

void set_XKeyboardControl_led(XKeyboardControl *i, int j)
{
          i->led = j;
}

int  XKeyboardControl_bell_duration(XKeyboardControl *i)
{
          return(i->bell_duration);
}

void set_XKeyboardControl_bell_duration(XKeyboardControl *i, int j)
{
          i->bell_duration = j;
}

int  XKeyboardControl_bell_pitch(XKeyboardControl *i)
{
          return(i->bell_pitch);
}

void set_XKeyboardControl_bell_pitch(XKeyboardControl *i, int j)
{
          i->bell_pitch = j;
}

int  XKeyboardControl_bell_percent(XKeyboardControl *i)
{
          return(i->bell_percent);
}

void set_XKeyboardControl_bell_percent(XKeyboardControl *i, int j)
{
          i->bell_percent = j;
}

int  XKeyboardControl_key_click_percent(XKeyboardControl *i)
{
          return(i->key_click_percent);
}

void set_XKeyboardControl_key_click_percent(XKeyboardControl *i, int j)
{
          i->key_click_percent = j;
}


/********* XKeyboardState funcions *****/

int  make_XKeyboardState (void) {
          return ((int) calloc(1, sizeof(XKeyboardState)));
}

char *XKeyboardState_auto_repeats(XKeyboardState *i)
{
          return(i->auto_repeats);
}

void set_XKeyboardState_auto_repeats(XKeyboardState *i, char *j)
{
          strcpy(i->auto_repeats,  j);
}

int  XKeyboardState_global_auto_repeat(XKeyboardState *i)
{
          return(i->global_auto_repeat);
}

void set_XKeyboardState_global_auto_repeat(XKeyboardState *i, int j)
{
          i->global_auto_repeat = j;
}

int  XKeyboardState_led_mask(XKeyboardState *i)
{
          return(i->led_mask);
}

void set_XKeyboardState_led_mask(XKeyboardState *i, int j)
{
          i->led_mask = j;
}

int  XKeyboardState_bell_duration(XKeyboardState *i)
{
          return(i->bell_duration);
}

void set_XKeyboardState_bell_duration(XKeyboardState *i, int j)
{
          i->bell_duration = j;
}

int  XKeyboardState_bell_pitch(XKeyboardState *i)
{
          return(i->bell_pitch);
}

void set_XKeyboardState_bell_pitch(XKeyboardState *i, int j)
{
          i->bell_pitch = j;
}

int  XKeyboardState_bell_percent(XKeyboardState *i)
{
          return(i->bell_percent);
}

void set_XKeyboardState_bell_percent(XKeyboardState *i, int j)
{
          i->bell_percent = j;
}

int  XKeyboardState_key_click_percent(XKeyboardState *i)
{
          return(i->key_click_percent);
}

void set_XKeyboardState_key_click_percent(XKeyboardState *i, int j)
{
          i->key_click_percent = j;
}


/********* XTimeCoord funcions *****/

int  make_XTimeCoord (void) {
          return ((int) calloc(1, sizeof(XTimeCoord)));
}

int  XTimeCoord_y(XTimeCoord *i)
{
          return(i->y);
}

void set_XTimeCoord_y(XTimeCoord *i, int j)
{
          i->y = j;
}

int  XTimeCoord_x(XTimeCoord *i)
{
          return(i->x);
}

void set_XTimeCoord_x(XTimeCoord *i, int j)
{
          i->x = j;
}

int  XTimeCoord_time(XTimeCoord *i)
{
          return(i->time);
}

void set_XTimeCoord_time(XTimeCoord *i, int j)
{
          i->time = j;
}


/********* XModifierKeymap funcions *****/

int  make_XModifierKeymap (void) {
          return ((int) calloc(1, sizeof(XModifierKeymap)));
}

KeyCode *XModifierKeymap_modifiermap(XModifierKeymap *i)
{
          return(i->modifiermap);
}

void set_XModifierKeymap_modifiermap(XModifierKeymap *i, KeyCode *j)
{
          i->modifiermap = j;
}

int  XModifierKeymap_max_keypermod(XModifierKeymap *i)
{
          return(i->max_keypermod);
}

void set_XModifierKeymap_max_keypermod(XModifierKeymap *i, int j)
{
          i->max_keypermod = j;
}
