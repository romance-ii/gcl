/* XStruct-2.c           Hiep Huu Nguyen                         27 Aug 92 */

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


/********* _XQEvent funcions *****/
#define NEED_EVENTS
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xlibint.h>
#define int long

int  make__XQEvent (void) {
          return ((int) calloc(1, sizeof(_XQEvent)));
}

XEvent _XQEvent_event(i)
_XQEvent* i;
{
          return(i->event);
}

void set__XQEvent_event(i, j)
_XQEvent* i;
XEvent j;
{
          i->event = j;
}

_XQEvent *_XQEvent_next(i)
_XQEvent* i;
{
          return(i->next);
}

void set__XQEvent_next(i, j)
_XQEvent* i;
_XQEvent *j;
{
          i->next = j;
}


/********* XCharStruct funcions *****/

int  make_XCharStruct (void) {
          return ((int) calloc(1, sizeof(XCharStruct)));
}

int  XCharStruct_attributes(XCharStruct *i)
{
          return(i->attributes);
}

void set_XCharStruct_attributes(XCharStruct *i, int j)
{
          i->attributes = j;
}

int  XCharStruct_descent(XCharStruct *i)
{
          return(i->descent);
}

void set_XCharStruct_descent(XCharStruct *i, int j)
{
          i->descent = j;
}

int  XCharStruct_ascent(XCharStruct *i)
{
          return(i->ascent);
}

void set_XCharStruct_ascent(XCharStruct *i, int j)
{
          i->ascent = j;
}

int  XCharStruct_width(XCharStruct *i)
{
          return(i->width);
}

void set_XCharStruct_width(XCharStruct *i, int j)
{
          i->width = j;
}

int  XCharStruct_rbearing(XCharStruct *i)
{
          return(i->rbearing);
}

void set_XCharStruct_rbearing(XCharStruct *i, int j)
{
          i->rbearing = j;
}

int  XCharStruct_lbearing(XCharStruct *i)
{
          return(i->lbearing);
}

void set_XCharStruct_lbearing(XCharStruct *i, int j)
{
          i->lbearing = j;
}


/********* XFontProp funcions *****/

int  make_XFontProp (void) {
          return ((int) calloc(1, sizeof(XFontProp)));
}

int  XFontProp_card32(XFontProp *i)
{
          return(i->card32);
}

void set_XFontProp_card32(XFontProp *i, int j)
{
          i->card32 = j;
}

int  XFontProp_name(XFontProp *i)
{
          return(i->name);
}

void set_XFontProp_name(XFontProp *i, int j)
{
          i->name = j;
}


/********* XFontStruct funcions *****/

int  make_XFontStruct (void) {
          return ((int) calloc(1, sizeof(XFontStruct)));
}

int  XFontStruct_descent(XFontStruct *i)
{
          return(i->descent);
}

void set_XFontStruct_descent(XFontStruct *i, int j)
{
          i->descent = j;
}

int  XFontStruct_ascent(XFontStruct *i)
{
          return(i->ascent);
}

void set_XFontStruct_ascent(XFontStruct *i, int j)
{
          i->ascent = j;
}

XCharStruct *XFontStruct_per_char(XFontStruct *i)
{
          return(i->per_char);
}

void set_XFontStruct_per_char(XFontStruct *i, XCharStruct *j)
{
          i->per_char = j;
}

XCharStruct *XFontStruct_max_bounds(XFontStruct *i)
{
          return(&i->max_bounds);
}
XCharStruct *XFontStruct_min_bounds(XFontStruct *i)
{
          return(&i->min_bounds);
}
void set_XFontStruct_max_bounds(XFontStruct *i, XCharStruct j)
{
          i->max_bounds = j;
}
void set_XFontStruct_min_bounds(XFontStruct *i, XCharStruct j)
{
          i->min_bounds = j;
}

XFontProp *XFontStruct_properties(XFontStruct *i)
{
          return(i->properties);
}

void set_XFontStruct_properties(XFontStruct *i, XFontProp *j)
{
          i->properties = j;
}

int  XFontStruct_n_properties(XFontStruct *i)
{
          return(i->n_properties);
}

void set_XFontStruct_n_properties(XFontStruct *i, int j)
{
          i->n_properties = j;
}

int  XFontStruct_default_char(XFontStruct *i)
{
          return(i->default_char);
}

void set_XFontStruct_default_char(XFontStruct *i, int j)
{
          i->default_char = j;
}

int  XFontStruct_all_chars_exist(XFontStruct *i)
{
          return(i->all_chars_exist);
}

void set_XFontStruct_all_chars_exist(XFontStruct *i, int j)
{
          i->all_chars_exist = j;
}

int  XFontStruct_max_byte1(XFontStruct *i)
{
          return(i->max_byte1);
}

void set_XFontStruct_max_byte1(XFontStruct *i, int j)
{
          i->max_byte1 = j;
}

int  XFontStruct_min_byte1(XFontStruct *i)
{
          return(i->min_byte1);
}

void set_XFontStruct_min_byte1(XFontStruct *i, int j)
{
          i->min_byte1 = j;
}

int  XFontStruct_max_char_or_byte2(XFontStruct *i)
{
          return(i->max_char_or_byte2);
}

void set_XFontStruct_max_char_or_byte2(XFontStruct *i, int j)
{
          i->max_char_or_byte2 = j;
}

int  XFontStruct_min_char_or_byte2(XFontStruct *i)
{
          return(i->min_char_or_byte2);
}

void set_XFontStruct_min_char_or_byte2(XFontStruct *i, int j)
{
          i->min_char_or_byte2 = j;
}

int  XFontStruct_direction(XFontStruct *i)
{
          return(i->direction);
}

void set_XFontStruct_direction(XFontStruct *i, int j)
{
          i->direction = j;
}

int  XFontStruct_fid(XFontStruct *i)
{
          return(i->fid);
}

void set_XFontStruct_fid(XFontStruct *i, int j)
{
          i->fid = j;
}

XExtData * XFontStruct_ext_data(XFontStruct *i)
{
          return(i->ext_data);
}

void set_XFontStruct_ext_data(XFontStruct *i, XExtData *j)
{
          i->ext_data = j;
}


/********* XTextItem funcions *****/

int  make_XTextItem (void) {
          return ((int) calloc(1, sizeof(XTextItem)));
}

int  XTextItem_font(XTextItem *i)
{
          return(i->font);
}

void set_XTextItem_font(XTextItem *i, int j)
{
          i->font = j;
}

int  XTextItem_delta(XTextItem *i)
{
          return(i->delta);
}

void set_XTextItem_delta(XTextItem *i, int j)
{
          i->delta = j;
}

int  XTextItem_nchars(XTextItem *i)
{
          return(i->nchars);
}

void set_XTextItem_nchars(XTextItem *i, int j)
{
          i->nchars = j;
}

char * XTextItem_chars(XTextItem *i)
{
          return(i->chars);
}

void set_XTextItem_chars(XTextItem *i, char *j)
{
          i->chars = j;
}


/********* XChar2b funcions *****/

int  make_XChar2b (void) {
          return ((int) calloc(1, sizeof(XChar2b)));
}

char XChar2b_byte2(XChar2b *i)
{
          return(i->byte2);
}

void set_XChar2b_byte2(XChar2b *i, char j)
{
          i->byte2 = j;
}

char XChar2b_byte1(XChar2b *i)
{
          return(i->byte1);
}

void set_XChar2b_byte1(XChar2b *i, char j)
{
          i->byte1 = j;
}


/********* XTextItem16 funcions *****/

int  make_XTextItem16 (void) {
          return ((int) calloc(1, sizeof(XTextItem16)));
}

int  XTextItem16_font(XTextItem16 *i)
{
          return(i->font);
}

void set_XTextItem16_font(XTextItem16 *i, int j)
{
          i->font = j;
}

int  XTextItem16_delta(XTextItem16 *i)
{
          return(i->delta);
}

void set_XTextItem16_delta(XTextItem16 *i, int j)
{
          i->delta = j;
}

int  XTextItem16_nchars(XTextItem16 *i)
{
          return(i->nchars);
}

void set_XTextItem16_nchars(XTextItem16 *i, int j)
{
          i->nchars = j;
}

XChar2b * XTextItem16_chars(XTextItem16 *i)
{
          return(i->chars);
}

void set_XTextItem16_chars(XTextItem16 *i, XChar2b *j)
{
          i->chars = j;
}


/********* XEDataObject funcions *****/

int  make_XEDataObject (void) {
          return ((int) calloc(1, sizeof(XEDataObject)));
}

XFontStruct *XEDataObject_font(XEDataObject *i)
{
          return(i->font);
}

void set_XEDataObject_font(XEDataObject *i, XFontStruct *j)
{
          i->font = j;
}

ScreenFormat *XEDataObject_pixmap_format(XEDataObject *i)
{
          return(i->pixmap_format);
}

void set_XEDataObject_pixmap_format(XEDataObject *i, ScreenFormat *j)
{
          i->pixmap_format = j;
}

Screen *XEDataObject_screen(XEDataObject *i)
{
          return(i->screen);
}

void set_XEDataObject_screen(XEDataObject *i, Screen *j)
{
          i->screen = j;
}

Visual *XEDataObject_visual(XEDataObject *i)
{
          return(i->visual);
}

void set_XEDataObject_visual(XEDataObject *i, Visual *j)
{
          i->visual = j;
}

GC   XEDataObject_gc(XEDataObject *i)
{
          return(i->gc);
}

void set_XEDataObject_gc(XEDataObject *i, GC j)
{
          i->gc = j;
}


/********* XSizeHints funcions *****/

int  make_XSizeHints (void) {
          return ((int) calloc(1, sizeof(XSizeHints)));
}

int  XSizeHints_win_gravity(XSizeHints *i)
{
          return(i->win_gravity);
}

void set_XSizeHints_win_gravity(XSizeHints *i, int j)
{
          i->win_gravity = j;
}

int  XSizeHints_base_height(XSizeHints *i)
{
          return(i->base_height);
}

void set_XSizeHints_base_height(XSizeHints *i, int j)
{
          i->base_height = j;
}

int  XSizeHints_base_width(XSizeHints *i)
{
          return(i->base_width);
}

void set_XSizeHints_base_width(XSizeHints *i, int j)
{
          i->base_width = j;
}

int  XSizeHints_height_inc(XSizeHints *i)
{
          return(i->height_inc);
}

void set_XSizeHints_height_inc(XSizeHints *i, int j)
{
          i->height_inc = j;
}

int  XSizeHints_width_inc(XSizeHints *i)
{
          return(i->width_inc);
}

void set_XSizeHints_width_inc(XSizeHints *i, int j)
{
          i->width_inc = j;
}

int  XSizeHints_max_height(XSizeHints *i)
{
          return(i->max_height);
}

void set_XSizeHints_max_height(XSizeHints *i, int j)
{
          i->max_height = j;
}

int  XSizeHints_max_width(XSizeHints *i)
{
          return(i->max_width);
}

void set_XSizeHints_max_width(XSizeHints *i, int j)
{
          i->max_width = j;
}

int  XSizeHints_min_height(XSizeHints *i)
{
          return(i->min_height);
}

void set_XSizeHints_min_height(XSizeHints *i, int j)
{
          i->min_height = j;
}

int  XSizeHints_min_width(XSizeHints *i)
{
          return(i->min_width);
}

void set_XSizeHints_min_width(XSizeHints *i, int j)
{
          i->min_width = j;
}

int  XSizeHints_height(XSizeHints *i)
{
          return(i->height);
}

void set_XSizeHints_height(XSizeHints *i, int j)
{
          i->height = j;
}

int  XSizeHints_width(XSizeHints *i)
{
          return(i->width);
}

void set_XSizeHints_width(XSizeHints *i, int j)
{
          i->width = j;
}

int  XSizeHints_y(XSizeHints *i)
{
          return(i->y);
}

void set_XSizeHints_y(XSizeHints *i, int j)
{
          i->y = j;
}

int  XSizeHints_x(XSizeHints *i)
{
          return(i->x);
}

void set_XSizeHints_x(XSizeHints *i, int j)
{
          i->x = j;
}

int  XSizeHints_flags(XSizeHints *i)
{
          return(i->flags);
}

void set_XSizeHints_flags(XSizeHints *i, int j)
{
          i->flags = j;
}


int  XSizeHints_max_aspect_x(XSizeHints *i)
{
          return(i->max_aspect.x);
}

void  set_XSizeHints_max_aspect_x(XSizeHints *i, int j)
{
          i->max_aspect.x = j;
}

int  XSizeHints_max_aspect_y(XSizeHints *i)
{
          return(i->max_aspect.y);
}

void  set_XSizeHints_max_aspect_y(XSizeHints *i, int j)
{
          i->max_aspect.y = j;
}

int  XSizeHints_min_aspect_x(XSizeHints *i)
{
          return(i->min_aspect.x);
}

void  set_XSizeHints_min_aspect_x(XSizeHints *i, int j)
{
          i->min_aspect.x = j;
}


int  XSizeHints_min_aspect_y(XSizeHints *i)
{
          return(i->min_aspect.y);
}

void  set_XSizeHints_min_aspect_y(XSizeHints *i, int j)
{
          i->min_aspect.y = j;
}


/********* XWMHints funcions *****/

int  make_XWMHints (void) {
          return ((int) calloc(1, sizeof(XWMHints)));
}

int  XWMHints_window_group(XWMHints *i)
{
          return(i->window_group);
}

void set_XWMHints_window_group(XWMHints *i, int j)
{
          i->window_group = j;
}

int  XWMHints_icon_mask(XWMHints *i)
{
          return(i->icon_mask);
}

void set_XWMHints_icon_mask(XWMHints *i, int j)
{
          i->icon_mask = j;
}

int  XWMHints_icon_y(XWMHints *i)
{
          return(i->icon_y);
}

void set_XWMHints_icon_y(XWMHints *i, int j)
{
          i->icon_y = j;
}

int  XWMHints_icon_x(XWMHints *i)
{
          return(i->icon_x);
}

void set_XWMHints_icon_x(XWMHints *i, int j)
{
          i->icon_x = j;
}

int  XWMHints_icon_window(XWMHints *i)
{
          return(i->icon_window);
}

void set_XWMHints_icon_window(XWMHints *i, int j)
{
          i->icon_window = j;
}

int  XWMHints_icon_pixmap(XWMHints *i)
{
          return(i->icon_pixmap);
}

void set_XWMHints_icon_pixmap(XWMHints *i, int j)
{
          i->icon_pixmap = j;
}

int  XWMHints_initial_state(XWMHints *i)
{
          return(i->initial_state);
}

void set_XWMHints_initial_state(XWMHints *i, int j)
{
          i->initial_state = j;
}

int  XWMHints_input(XWMHints *i)
{
          return(i->input);
}

void set_XWMHints_input(XWMHints *i, int j)
{
          i->input = j;
}

int  XWMHints_flags(XWMHints *i)
{
          return(i->flags);
}

void set_XWMHints_flags(XWMHints *i, int j)
{
          i->flags = j;
}


/********* XTextProperty funcions *****/

int  make_XTextProperty (void) {
          return ((int) calloc(1, sizeof(XTextProperty)));
}

int  XTextProperty_nitems(XTextProperty *i)
{
          return(i->nitems);
}

void set_XTextProperty_nitems(XTextProperty *i, int j)
{
          i->nitems = j;
}

int  XTextProperty_format(XTextProperty *i)
{
          return(i->format);
}

void set_XTextProperty_format(XTextProperty *i, int j)
{
          i->format = j;
}

int  XTextProperty_encoding(XTextProperty *i)
{
          return(i->encoding);
}

void set_XTextProperty_encoding(XTextProperty *i, int j)
{
          i->encoding = j;
}

unsigned char *XTextProperty_value(XTextProperty *i)
{
          return(i->value);
}

void set_XTextProperty_value(XTextProperty *i, unsigned char *j)
{
          i->value = j;
}


/********* XIconSize funcions *****/

int  make_XIconSize (void) {
          return ((int) calloc(1, sizeof(XIconSize)));
}

int  XIconSize_height_inc(XIconSize *i)
{
          return(i->height_inc);
}

void set_XIconSize_height_inc(XIconSize *i, int j)
{
          i->height_inc = j;
}

int  XIconSize_width_inc(XIconSize *i)
{
          return(i->width_inc);
}

void set_XIconSize_width_inc(XIconSize *i, int j)
{
          i->width_inc = j;
}

int  XIconSize_max_height(XIconSize *i)
{
          return(i->max_height);
}

void set_XIconSize_max_height(XIconSize *i, int j)
{
          i->max_height = j;
}

int  XIconSize_max_width(XIconSize *i)
{
          return(i->max_width);
}

void set_XIconSize_max_width(XIconSize *i, int j)
{
          i->max_width = j;
}

int  XIconSize_min_height(XIconSize *i)
{
          return(i->min_height);
}

void set_XIconSize_min_height(XIconSize *i, int j)
{
          i->min_height = j;
}

int  XIconSize_min_width(XIconSize *i)
{
          return(i->min_width);
}

void set_XIconSize_min_width(XIconSize *i, int j)
{
          i->min_width = j;
}


/********* XClassHint funcions *****/

int  make_XClassHint (void) {
          return ((int) calloc(1, sizeof(XClassHint)));
}

char *XClassHint_res_class(XClassHint *i)
{
          return(i->res_class);
}

void set_XClassHint_res_class(XClassHint *i, char *j)
{
          i->res_class = j;
}

char *XClassHint_res_name(XClassHint *i)
{
          return(i->res_name);
}

void set_XClassHint_res_name(XClassHint *i, char *j)
{
          i->res_name = j;
}


/********* XComposeStatus funcions *****/

int  make_XComposeStatus (void) {
          return ((int) calloc(1, sizeof(XComposeStatus)));
}

int  XComposeStatus_chars_matched(XComposeStatus *i)
{
          return(i->chars_matched);
}

void set_XComposeStatus_chars_matched(XComposeStatus *i, int j)
{
          i->chars_matched = j;
}

XPointer  XComposeStatus_compose_ptr(XComposeStatus *i)
{
          return(i->compose_ptr);
}

void set_XComposeStatus_compose_ptr(XComposeStatus *i, XPointer j)
{
          i->compose_ptr = j;
}


/********* XVisualInfo funcions *****/

int  make_XVisualInfo (void) {
          return ((int) calloc(1, sizeof(XVisualInfo)));
}

int  XVisualInfo_bits_per_rgb(XVisualInfo *i)
{
          return(i->bits_per_rgb);
}

void set_XVisualInfo_bits_per_rgb(XVisualInfo *i, int j)
{
          i->bits_per_rgb = j;
}

int  XVisualInfo_colormap_size(XVisualInfo *i)
{
          return(i->colormap_size);
}

void set_XVisualInfo_colormap_size(XVisualInfo *i, int j)
{
          i->colormap_size = j;
}

int  XVisualInfo_blue_mask(XVisualInfo *i)
{
          return(i->blue_mask);
}

void set_XVisualInfo_blue_mask(XVisualInfo *i, int j)
{
          i->blue_mask = j;
}

int  XVisualInfo_green_mask(XVisualInfo *i)
{
          return(i->green_mask);
}

void set_XVisualInfo_green_mask(XVisualInfo *i, int j)
{
          i->green_mask = j;
}

int  XVisualInfo_red_mask(XVisualInfo *i)
{
          return(i->red_mask);
}

void set_XVisualInfo_red_mask(XVisualInfo *i, int j)
{
          i->red_mask = j;
}

int  XVisualInfo_class(XVisualInfo *i)
{
          return(i->class);
}

void set_XVisualInfo_class(XVisualInfo *i, int j)
{
          i->class = j;
}

int  XVisualInfo_depth(XVisualInfo *i)
{
          return(i->depth);
}

void set_XVisualInfo_depth(XVisualInfo *i, int j)
{
          i->depth = j;
}

int  XVisualInfo_screen(XVisualInfo *i)
{
          return(i->screen);
}

void set_XVisualInfo_screen(XVisualInfo *i, int j)
{
          i->screen = j;
}

int  XVisualInfo_visualid(XVisualInfo *i)
{
          return(i->visualid);
}

void set_XVisualInfo_visualid(XVisualInfo *i, int j)
{
          i->visualid = j;
}

Visual *XVisualInfo_visual(XVisualInfo *i)
{
          return(i->visual);
}

void set_XVisualInfo_visual(XVisualInfo *i, Visual *j)
{
          i->visual = j;
}


/********* XStandardColormap funcions *****/

int  make_XStandardColormap (void) {
          return ((int) calloc(1, sizeof(XStandardColormap)));
}

int  XStandardColormap_killid(XStandardColormap *i)
{
          return(i->killid);
}

void set_XStandardColormap_killid(XStandardColormap *i, int j)
{
          i->killid = j;
}

int  XStandardColormap_visualid(XStandardColormap *i)
{
          return(i->visualid);
}

void set_XStandardColormap_visualid(XStandardColormap *i, int j)
{
          i->visualid = j;
}

int  XStandardColormap_base_pixel(XStandardColormap *i)
{
          return(i->base_pixel);
}

void set_XStandardColormap_base_pixel(XStandardColormap *i, int j)
{
          i->base_pixel = j;
}

int  XStandardColormap_blue_mult(XStandardColormap *i)
{
          return(i->blue_mult);
}

void set_XStandardColormap_blue_mult(XStandardColormap *i, int j)
{
          i->blue_mult = j;
}

int  XStandardColormap_blue_max(XStandardColormap *i)
{
          return(i->blue_max);
}

void set_XStandardColormap_blue_max(XStandardColormap *i, int j)
{
          i->blue_max = j;
}

int  XStandardColormap_green_mult(XStandardColormap *i)
{
          return(i->green_mult);
}

void set_XStandardColormap_green_mult(XStandardColormap *i, int j)
{
          i->green_mult = j;
}

int  XStandardColormap_green_max(XStandardColormap *i)
{
          return(i->green_max);
}

void set_XStandardColormap_green_max(XStandardColormap *i, int j)
{
          i->green_max = j;
}

int  XStandardColormap_red_mult(XStandardColormap *i)
{
          return(i->red_mult);
}

void set_XStandardColormap_red_mult(XStandardColormap *i, int j)
{
          i->red_mult = j;
}

int  XStandardColormap_red_max(XStandardColormap *i)
{
          return(i->red_max);
}

void set_XStandardColormap_red_max(XStandardColormap *i, int j)
{
          i->red_max = j;
}

int  XStandardColormap_colormap(XStandardColormap *i)
{
          return(i->colormap);
}

void set_XStandardColormap_colormap(XStandardColormap *i, int j)
{
          i->colormap = j;
}

