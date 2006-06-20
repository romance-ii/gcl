/* Events.c           Hiep Huu Nguyen                         27 Aug 92 */

/*; Copyright (c) 1994 Hiep Huu Nguyen and The University of Texas at Austin.

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
#include <X11/Xlib.h>

#include "include.h"
#define int fixnum
/********* XKeyEvent funcions *****/

int  make_XKeyEvent (void) {
          return ((int) calloc(1, sizeof(XKeyEvent)));
}

int  XKeyEvent_same_screen(XKeyEvent *i)
{
          return(i->same_screen);
}

void set_XKeyEvent_same_screen(XKeyEvent *i, int j)
{
          i->same_screen = j;
}

int  XKeyEvent_keycode(XKeyEvent *i)
{
          return(i->keycode);
}

void set_XKeyEvent_keycode(XKeyEvent *i, int j)
{
          i->keycode = j;
}

int  XKeyEvent_state(XKeyEvent *i)
{
          return(i->state);
}

void set_XKeyEvent_state(XKeyEvent *i, int j)
{
          i->state = j;
}

int  XKeyEvent_y_root(XKeyEvent *i)
{
          return(i->y_root);
}

void set_XKeyEvent_y_root(XKeyEvent *i, int j)
{
          i->y_root = j;
}

int  XKeyEvent_x_root(XKeyEvent *i)
{
          return(i->x_root);
}

void set_XKeyEvent_x_root(XKeyEvent *i, int j)
{
          i->x_root = j;
}

int  XKeyEvent_y(XKeyEvent *i)
{
          return(i->y);
}

void set_XKeyEvent_y(XKeyEvent *i, int j)
{
          i->y = j;
}

int  XKeyEvent_x(XKeyEvent *i)
{
          return(i->x);
}

void set_XKeyEvent_x(XKeyEvent *i, int j)
{
          i->x = j;
}

int  XKeyEvent_time(XKeyEvent *i)
{
          return(i->time);
}

void set_XKeyEvent_time(XKeyEvent *i, int j)
{
          i->time = j;
}

int  XKeyEvent_subwindow(XKeyEvent *i)
{
          return(i->subwindow);
}

void set_XKeyEvent_subwindow(XKeyEvent *i, int j)
{
          i->subwindow = j;
}

int  XKeyEvent_root(XKeyEvent *i)
{
          return(i->root);
}

void set_XKeyEvent_root(XKeyEvent *i, int j)
{
          i->root = j;
}

int  XKeyEvent_window(XKeyEvent *i)
{
          return(i->window);
}

void set_XKeyEvent_window(XKeyEvent *i, int j)
{
          i->window = j;
}

Display *XKeyEvent_display(XKeyEvent *i)
{
          return(i->display);
}

void set_XKeyEvent_display(XKeyEvent *i, Display *j)
{
          i->display = j;
}

int  XKeyEvent_send_event(XKeyEvent *i)
{
          return(i->send_event);
}

void set_XKeyEvent_send_event(XKeyEvent *i, int j)
{
          i->send_event = j;
}

int  XKeyEvent_serial(XKeyEvent *i)
{
          return(i->serial);
}

void set_XKeyEvent_serial(XKeyEvent *i, int j)
{
          i->serial = j;
}

int  XKeyEvent_type(XKeyEvent *i)
{
          return(i->type);
}

void set_XKeyEvent_type(XKeyEvent *i, int j)
{
          i->type = j;
}


/********* XButtonEvent funcions *****/

int  make_XButtonEvent (void) {
          return ((int) calloc(1, sizeof(XButtonEvent)));
}

int  XButtonEvent_same_screen(XButtonEvent *i)
{
          return(i->same_screen);
}

void set_XButtonEvent_same_screen(XButtonEvent *i, int j)
{
          i->same_screen = j;
}

int  XButtonEvent_button(XButtonEvent *i)
{
          return(i->button);
}

void set_XButtonEvent_button(XButtonEvent *i, int j)
{
          i->button = j;
}

int  XButtonEvent_state(XButtonEvent *i)
{
          return(i->state);
}

void set_XButtonEvent_state(XButtonEvent *i, int j)
{
          i->state = j;
}

int  XButtonEvent_y_root(XButtonEvent *i)
{
          return(i->y_root);
}

void set_XButtonEvent_y_root(XButtonEvent *i, int j)
{
          i->y_root = j;
}

int  XButtonEvent_x_root(XButtonEvent *i)
{
          return(i->x_root);
}

void set_XButtonEvent_x_root(XButtonEvent *i, int j)
{
          i->x_root = j;
}

int  XButtonEvent_y(XButtonEvent *i)
{
          return(i->y);
}

void set_XButtonEvent_y(XButtonEvent *i, int j)
{
          i->y = j;
}

int  XButtonEvent_x(XButtonEvent *i)
{
          return(i->x);
}

void set_XButtonEvent_x(XButtonEvent *i, int j)
{
          i->x = j;
}

int  XButtonEvent_time(XButtonEvent *i)
{
          return(i->time);
}

void set_XButtonEvent_time(XButtonEvent *i, int j)
{
          i->time = j;
}

int  XButtonEvent_subwindow(XButtonEvent *i)
{
          return(i->subwindow);
}

void set_XButtonEvent_subwindow(XButtonEvent *i, int j)
{
          i->subwindow = j;
}

int  XButtonEvent_root(XButtonEvent *i)
{
          return(i->root);
}

void set_XButtonEvent_root(XButtonEvent *i, int j)
{
          i->root = j;
}

int  XButtonEvent_window(XButtonEvent *i)
{
          return(i->window);
}

void set_XButtonEvent_window(XButtonEvent *i, int j)
{
          i->window = j;
}

Display *XButtonEvent_display(XButtonEvent *i)
{
          return(i->display);
}

void set_XButtonEvent_display(XButtonEvent *i, Display *j)
{
          i->display = j;
}

int  XButtonEvent_send_event(XButtonEvent *i)
{
          return(i->send_event);
}

void set_XButtonEvent_send_event(XButtonEvent *i, int j)
{
          i->send_event = j;
}

int  XButtonEvent_serial(XButtonEvent *i)
{
          return(i->serial);
}

void set_XButtonEvent_serial(XButtonEvent *i, int j)
{
          i->serial = j;
}

int  XButtonEvent_type(XButtonEvent *i)
{
          return(i->type);
}

void set_XButtonEvent_type(XButtonEvent *i, int j)
{
          i->type = j;
}


/********* XMotionEvent funcions *****/

int  make_XMotionEvent (void) {
          return ((int) calloc(1, sizeof(XMotionEvent)));
}

int  XMotionEvent_same_screen(XMotionEvent *i)
{
          return(i->same_screen);
}

void set_XMotionEvent_same_screen(XMotionEvent *i, int j)
{
          i->same_screen = j;
}

char XMotionEvent_is_hint(XMotionEvent *i)
{
          return(i->is_hint);
}

void set_XMotionEvent_is_hint(XMotionEvent *i, char j)
{
          i->is_hint = j;
}

int  XMotionEvent_state(XMotionEvent *i)
{
          return(i->state);
}

void set_XMotionEvent_state(XMotionEvent *i, int j)
{
          i->state = j;
}

int  XMotionEvent_y_root(XMotionEvent *i)
{
          return(i->y_root);
}

void set_XMotionEvent_y_root(XMotionEvent *i, int j)
{
          i->y_root = j;
}

int  XMotionEvent_x_root(XMotionEvent *i)
{
          return(i->x_root);
}

void set_XMotionEvent_x_root(XMotionEvent *i, int j)
{
          i->x_root = j;
}

int  XMotionEvent_y(XMotionEvent *i)
{
          return(i->y);
}

void set_XMotionEvent_y(XMotionEvent *i, int j)
{
          i->y = j;
}

int  XMotionEvent_x(XMotionEvent *i)
{
          return(i->x);
}

void set_XMotionEvent_x(XMotionEvent *i, int j)
{
          i->x = j;
}

int  XMotionEvent_time(XMotionEvent *i)
{
          return(i->time);
}

void set_XMotionEvent_time(XMotionEvent *i, int j)
{
          i->time = j;
}

int  XMotionEvent_subwindow(XMotionEvent *i)
{
          return(i->subwindow);
}

void set_XMotionEvent_subwindow(XMotionEvent *i, int j)
{
          i->subwindow = j;
}

int  XMotionEvent_root(XMotionEvent *i)
{
          return(i->root);
}

void set_XMotionEvent_root(XMotionEvent *i, int j)
{
          i->root = j;
}

int  XMotionEvent_window(XMotionEvent *i)
{
          return(i->window);
}

void set_XMotionEvent_window(XMotionEvent *i, int j)
{
          i->window = j;
}

Display *XMotionEvent_display(XMotionEvent *i)
{
          return(i->display);
}

void set_XMotionEvent_display(XMotionEvent *i, Display *j)
{
          i->display = j;
}

int  XMotionEvent_send_event(XMotionEvent *i)
{
          return(i->send_event);
}

void set_XMotionEvent_send_event(XMotionEvent *i, int j)
{
          i->send_event = j;
}

int  XMotionEvent_serial(XMotionEvent *i)
{
          return(i->serial);
}

void set_XMotionEvent_serial(XMotionEvent *i, int j)
{
          i->serial = j;
}

int  XMotionEvent_type(XMotionEvent *i)
{
          return(i->type);
}

void set_XMotionEvent_type(XMotionEvent *i, int j)
{
          i->type = j;
}


/********* XCrossingEvent funcions *****/

int  make_XCrossingEvent (void) {
          return ((int) calloc(1, sizeof(XCrossingEvent)));
}

int  XCrossingEvent_state(XCrossingEvent *i)
{
          return(i->state);
}

void set_XCrossingEvent_state(XCrossingEvent *i, int j)
{
          i->state = j;
}

int  XCrossingEvent_focus(XCrossingEvent *i)
{
          return(i->focus);
}

void set_XCrossingEvent_focus(XCrossingEvent *i, int j)
{
          i->focus = j;
}

int  XCrossingEvent_same_screen(XCrossingEvent *i)
{
          return(i->same_screen);
}

void set_XCrossingEvent_same_screen(XCrossingEvent *i, int j)
{
          i->same_screen = j;
}

int  XCrossingEvent_detail(XCrossingEvent *i)
{
          return(i->detail);
}

void set_XCrossingEvent_detail(XCrossingEvent *i, int j)
{
          i->detail = j;
}

int  XCrossingEvent_mode(XCrossingEvent *i)
{
          return(i->mode);
}

void set_XCrossingEvent_mode(XCrossingEvent *i, int j)
{
          i->mode = j;
}

int  XCrossingEvent_y_root(XCrossingEvent *i)
{
          return(i->y_root);
}

void set_XCrossingEvent_y_root(XCrossingEvent *i, int j)
{
          i->y_root = j;
}

int  XCrossingEvent_x_root(XCrossingEvent *i)
{
          return(i->x_root);
}

void set_XCrossingEvent_x_root(XCrossingEvent *i, int j)
{
          i->x_root = j;
}

int  XCrossingEvent_y(XCrossingEvent *i)
{
          return(i->y);
}

void set_XCrossingEvent_y(XCrossingEvent *i, int j)
{
          i->y = j;
}

int  XCrossingEvent_x(XCrossingEvent *i)
{
          return(i->x);
}

void set_XCrossingEvent_x(XCrossingEvent *i, int j)
{
          i->x = j;
}

int  XCrossingEvent_time(XCrossingEvent *i)
{
          return(i->time);
}

void set_XCrossingEvent_time(XCrossingEvent *i, int j)
{
          i->time = j;
}

int  XCrossingEvent_subwindow(XCrossingEvent *i)
{
          return(i->subwindow);
}

void set_XCrossingEvent_subwindow(XCrossingEvent *i, int j)
{
          i->subwindow = j;
}

int  XCrossingEvent_root(XCrossingEvent *i)
{
          return(i->root);
}

void set_XCrossingEvent_root(XCrossingEvent *i, int j)
{
          i->root = j;
}

int  XCrossingEvent_window(XCrossingEvent *i)
{
          return(i->window);
}

void set_XCrossingEvent_window(XCrossingEvent *i, int j)
{
          i->window = j;
}

Display *XCrossingEvent_display(XCrossingEvent *i)
{
          return(i->display);
}

void set_XCrossingEvent_display(XCrossingEvent *i, Display *j)
{
          i->display = j;
}

int  XCrossingEvent_send_event(XCrossingEvent *i)
{
          return(i->send_event);
}

void set_XCrossingEvent_send_event(XCrossingEvent *i, int j)
{
          i->send_event = j;
}

int  XCrossingEvent_serial(XCrossingEvent *i)
{
          return(i->serial);
}

void set_XCrossingEvent_serial(XCrossingEvent *i, int j)
{
          i->serial = j;
}

int  XCrossingEvent_type(XCrossingEvent *i)
{
          return(i->type);
}

void set_XCrossingEvent_type(XCrossingEvent *i, int j)
{
          i->type = j;
}


/********* XFocusChangeEvent funcions *****/

int  make_XFocusChangeEvent (void) {
          return ((int) calloc(1, sizeof(XFocusChangeEvent)));
}

int  XFocusChangeEvent_detail(XFocusChangeEvent *i)
{
          return(i->detail);
}

void set_XFocusChangeEvent_detail(XFocusChangeEvent *i, int j)
{
          i->detail = j;
}

int  XFocusChangeEvent_mode(XFocusChangeEvent *i)
{
          return(i->mode);
}

void set_XFocusChangeEvent_mode(XFocusChangeEvent *i, int j)
{
          i->mode = j;
}

int  XFocusChangeEvent_window(XFocusChangeEvent *i)
{
          return(i->window);
}

void set_XFocusChangeEvent_window(XFocusChangeEvent *i, int j)
{
          i->window = j;
}

Display *XFocusChangeEvent_display(XFocusChangeEvent *i)
{
          return(i->display);
}

void set_XFocusChangeEvent_display(XFocusChangeEvent *i, Display *j)
{
          i->display = j;
}

int  XFocusChangeEvent_send_event(XFocusChangeEvent *i)
{
          return(i->send_event);
}

void set_XFocusChangeEvent_send_event(XFocusChangeEvent *i, int j)
{
          i->send_event = j;
}

int  XFocusChangeEvent_serial(XFocusChangeEvent *i)
{
          return(i->serial);
}

void set_XFocusChangeEvent_serial(XFocusChangeEvent *i, int j)
{
          i->serial = j;
}

int  XFocusChangeEvent_type(XFocusChangeEvent *i)
{
          return(i->type);
}

void set_XFocusChangeEvent_type(XFocusChangeEvent *i, int j)
{
          i->type = j;
}


/********* XKeymapEvent funcions *****/

int  make_XKeymapEvent (void) {
          return ((int) calloc(1, sizeof(XKeymapEvent)));
}

char* XKeymapEvent_key_vector(XKeymapEvent *i)
{
          return(i->key_vector);
}
int  XKeymapEvent_window(XKeymapEvent *i)
{
          return(i->window);
}

void set_XKeymapEvent_window(XKeymapEvent *i, int j)
{
          i->window = j;
}

Display * XKeymapEvent_display(XKeymapEvent *i)
{
          return(i->display);
}

void set_XKeymapEvent_display(XKeymapEvent *i, Display *j)
{
          i->display = j;
}

int  XKeymapEvent_send_event(XKeymapEvent *i)
{
          return(i->send_event);
}

void set_XKeymapEvent_send_event(XKeymapEvent *i, int j)
{
          i->send_event = j;
}

int  XKeymapEvent_serial(XKeymapEvent *i)
{
          return(i->serial);
}

void set_XKeymapEvent_serial(XKeymapEvent *i, int j)
{
          i->serial = j;
}

int  XKeymapEvent_type(XKeymapEvent *i)
{
          return(i->type);
}

void set_XKeymapEvent_type(XKeymapEvent *i, int j)
{
          i->type = j;
}


/********* XExposeEvent funcions *****/

int  make_XExposeEvent (void) {
          return ((int) calloc(1, sizeof(XExposeEvent)));
}

int  XExposeEvent_count(XExposeEvent *i)
{
          return(i->count);
}

void set_XExposeEvent_count(XExposeEvent *i, int j)
{
          i->count = j;
}

int  XExposeEvent_height(XExposeEvent *i)
{
          return(i->height);
}

void set_XExposeEvent_height(XExposeEvent *i, int j)
{
          i->height = j;
}

int  XExposeEvent_width(XExposeEvent *i)
{
          return(i->width);
}

void set_XExposeEvent_width(XExposeEvent *i, int j)
{
          i->width = j;
}

int  XExposeEvent_y(XExposeEvent *i)
{
          return(i->y);
}

void set_XExposeEvent_y(XExposeEvent *i, int j)
{
          i->y = j;
}

int  XExposeEvent_x(XExposeEvent *i)
{
          return(i->x);
}

void set_XExposeEvent_x(XExposeEvent *i, int j)
{
          i->x = j;
}

int  XExposeEvent_window(XExposeEvent *i)
{
          return(i->window);
}

void set_XExposeEvent_window(XExposeEvent *i, int j)
{
          i->window = j;
}

Display *XExposeEvent_display(XExposeEvent *i)
{
          return(i->display);
}

void set_XExposeEvent_display(XExposeEvent *i, Display *j)
{
          i->display = j;
}

int  XExposeEvent_send_event(XExposeEvent *i)
{
          return(i->send_event);
}

void set_XExposeEvent_send_event(XExposeEvent *i, int j)
{
          i->send_event = j;
}

int  XExposeEvent_serial(XExposeEvent *i)
{
          return(i->serial);
}

void set_XExposeEvent_serial(XExposeEvent *i, int j)
{
          i->serial = j;
}

int  XExposeEvent_type(XExposeEvent *i)
{
          return(i->type);
}

void set_XExposeEvent_type(XExposeEvent *i, int j)
{
          i->type = j;
}


/********* XGraphicsExposeEvent funcions *****/

int  make_XGraphicsExposeEvent (void) {
          return ((int) calloc(1, sizeof(XGraphicsExposeEvent)));
}

int  XGraphicsExposeEvent_minor_code(XGraphicsExposeEvent *i)
{
          return(i->minor_code);
}

void set_XGraphicsExposeEvent_minor_code(XGraphicsExposeEvent *i, int j)
{
          i->minor_code = j;
}

int  XGraphicsExposeEvent_major_code(XGraphicsExposeEvent *i)
{
          return(i->major_code);
}

void set_XGraphicsExposeEvent_major_code(XGraphicsExposeEvent *i, int j)
{
          i->major_code = j;
}

int  XGraphicsExposeEvent_count(XGraphicsExposeEvent *i)
{
          return(i->count);
}

void set_XGraphicsExposeEvent_count(XGraphicsExposeEvent *i, int j)
{
          i->count = j;
}

int  XGraphicsExposeEvent_height(XGraphicsExposeEvent *i)
{
          return(i->height);
}

void set_XGraphicsExposeEvent_height(XGraphicsExposeEvent *i, int j)
{
          i->height = j;
}

int  XGraphicsExposeEvent_width(XGraphicsExposeEvent *i)
{
          return(i->width);
}

void set_XGraphicsExposeEvent_width(XGraphicsExposeEvent *i, int j)
{
          i->width = j;
}

int  XGraphicsExposeEvent_y(XGraphicsExposeEvent *i)
{
          return(i->y);
}

void set_XGraphicsExposeEvent_y(XGraphicsExposeEvent *i, int j)
{
          i->y = j;
}

int  XGraphicsExposeEvent_x(XGraphicsExposeEvent *i)
{
          return(i->x);
}

void set_XGraphicsExposeEvent_x(XGraphicsExposeEvent *i, int j)
{
          i->x = j;
}

Drawable XGraphicsExposeEvent_drawable(XGraphicsExposeEvent *i)
{
          return(i->drawable);
}

void set_XGraphicsExposeEvent_drawable(XGraphicsExposeEvent *i, Drawable j)
{
          i->drawable = j;
}

Display * XGraphicsExposeEvent_display(XGraphicsExposeEvent *i)
{
          return(i->display);
}

void set_XGraphicsExposeEvent_display(XGraphicsExposeEvent *i, Display *j)
{
          i->display = j;
}

int  XGraphicsExposeEvent_send_event(XGraphicsExposeEvent *i)
{
          return(i->send_event);
}

void set_XGraphicsExposeEvent_send_event(XGraphicsExposeEvent *i, int j)
{
          i->send_event = j;
}

int  XGraphicsExposeEvent_serial(XGraphicsExposeEvent *i)
{
          return(i->serial);
}

void set_XGraphicsExposeEvent_serial(XGraphicsExposeEvent *i, int j)
{
          i->serial = j;
}

int  XGraphicsExposeEvent_type(XGraphicsExposeEvent *i)
{
          return(i->type);
}

void set_XGraphicsExposeEvent_type(XGraphicsExposeEvent *i, int j)
{
          i->type = j;
}


/********* XNoExposeEvent funcions *****/

int  make_XNoExposeEvent (void) {
          return ((int) calloc(1, sizeof(XNoExposeEvent)));
}

int  XNoExposeEvent_minor_code(XNoExposeEvent *i)
{
          return(i->minor_code);
}

void set_XNoExposeEvent_minor_code(XNoExposeEvent *i, int j)
{
          i->minor_code = j;
}

int  XNoExposeEvent_major_code(XNoExposeEvent *i)
{
          return(i->major_code);
}

void set_XNoExposeEvent_major_code(XNoExposeEvent *i, int j)
{
          i->major_code = j;
}

Drawable XNoExposeEvent_drawable(XNoExposeEvent *i)
{
          return(i->drawable);
}

void set_XNoExposeEvent_drawable(XNoExposeEvent *i, Drawable j)
{
          i->drawable = j;
}

Display *XNoExposeEvent_display(XNoExposeEvent *i)
{
          return(i->display);
}

void set_XNoExposeEvent_display(XNoExposeEvent *i, Display *j)
{
          i->display = j;
}

int  XNoExposeEvent_send_event(XNoExposeEvent *i)
{
          return(i->send_event);
}

void set_XNoExposeEvent_send_event(XNoExposeEvent *i, int j)
{
          i->send_event = j;
}

int  XNoExposeEvent_serial(XNoExposeEvent *i)
{
          return(i->serial);
}

void set_XNoExposeEvent_serial(XNoExposeEvent *i, int j)
{
          i->serial = j;
}

int  XNoExposeEvent_type(XNoExposeEvent *i)
{
          return(i->type);
}

void set_XNoExposeEvent_type(XNoExposeEvent *i, int j)
{
          i->type = j;
}


/********* XVisibilityEvent funcions *****/

int  make_XVisibilityEvent (void) {
          return ((int) calloc(1, sizeof(XVisibilityEvent)));
}

int  XVisibilityEvent_state(XVisibilityEvent *i)
{
          return(i->state);
}

void set_XVisibilityEvent_state(XVisibilityEvent *i, int j)
{
          i->state = j;
}

int  XVisibilityEvent_window(XVisibilityEvent *i)
{
          return(i->window);
}

void set_XVisibilityEvent_window(XVisibilityEvent *i, int j)
{
          i->window = j;
}

Display *XVisibilityEvent_display(XVisibilityEvent *i)
{
          return(i->display);
}

void set_XVisibilityEvent_display(XVisibilityEvent *i, Display *j)
{
          i->display = j;
}

int  XVisibilityEvent_send_event(XVisibilityEvent *i)
{
          return(i->send_event);
}

void set_XVisibilityEvent_send_event(XVisibilityEvent *i, int j)
{
          i->send_event = j;
}

int  XVisibilityEvent_serial(XVisibilityEvent *i)
{
          return(i->serial);
}

void set_XVisibilityEvent_serial(XVisibilityEvent *i, int j)
{
          i->serial = j;
}

int  XVisibilityEvent_type(XVisibilityEvent *i)
{
          return(i->type);
}

void set_XVisibilityEvent_type(XVisibilityEvent *i, int j)
{
          i->type = j;
}


/********* XCreateWindowEvent funcions *****/

int  make_XCreateWindowEvent (void) {
          return ((int) calloc(1, sizeof(XCreateWindowEvent)));
}

int  XCreateWindowEvent_override_redirect(XCreateWindowEvent *i)
{
          return(i->override_redirect);
}

void set_XCreateWindowEvent_override_redirect(XCreateWindowEvent *i, int j)
{
          i->override_redirect = j;
}

int  XCreateWindowEvent_border_width(XCreateWindowEvent *i)
{
          return(i->border_width);
}

void set_XCreateWindowEvent_border_width(XCreateWindowEvent *i, int j)
{
          i->border_width = j;
}

int  XCreateWindowEvent_height(XCreateWindowEvent *i)
{
          return(i->height);
}

void set_XCreateWindowEvent_height(XCreateWindowEvent *i, int j)
{
          i->height = j;
}

int  XCreateWindowEvent_width(XCreateWindowEvent *i)
{
          return(i->width);
}

void set_XCreateWindowEvent_width(XCreateWindowEvent *i, int j)
{
          i->width = j;
}

int  XCreateWindowEvent_y(XCreateWindowEvent *i)
{
          return(i->y);
}

void set_XCreateWindowEvent_y(XCreateWindowEvent *i, int j)
{
          i->y = j;
}

int  XCreateWindowEvent_x(XCreateWindowEvent *i)
{
          return(i->x);
}

void set_XCreateWindowEvent_x(XCreateWindowEvent *i, int j)
{
          i->x = j;
}

int  XCreateWindowEvent_window(XCreateWindowEvent *i)
{
          return(i->window);
}

void set_XCreateWindowEvent_window(XCreateWindowEvent *i, int j)
{
          i->window = j;
}

int  XCreateWindowEvent_parent(XCreateWindowEvent *i)
{
          return(i->parent);
}

void set_XCreateWindowEvent_parent(XCreateWindowEvent *i, int j)
{
          i->parent = j;
}

Display *XCreateWindowEvent_display(XCreateWindowEvent *i)
{
          return(i->display);
}

void set_XCreateWindowEvent_display(XCreateWindowEvent *i, Display *j)
{
          i->display = j;
}

int  XCreateWindowEvent_send_event(XCreateWindowEvent *i)
{
          return(i->send_event);
}

void set_XCreateWindowEvent_send_event(XCreateWindowEvent *i, int j)
{
          i->send_event = j;
}

int  XCreateWindowEvent_serial(XCreateWindowEvent *i)
{
          return(i->serial);
}

void set_XCreateWindowEvent_serial(XCreateWindowEvent *i, int j)
{
          i->serial = j;
}

int  XCreateWindowEvent_type(XCreateWindowEvent *i)
{
          return(i->type);
}

void set_XCreateWindowEvent_type(XCreateWindowEvent *i, int j)
{
          i->type = j;
}


/********* XDestroyWindowEvent funcions *****/

int  make_XDestroyWindowEvent (void) {
          return ((int) calloc(1, sizeof(XDestroyWindowEvent)));
}

int  XDestroyWindowEvent_window(XDestroyWindowEvent *i)
{
          return(i->window);
}

void set_XDestroyWindowEvent_window(XDestroyWindowEvent *i, int j)
{
          i->window = j;
}

int  XDestroyWindowEvent_event(XDestroyWindowEvent *i)
{
          return(i->event);
}

void set_XDestroyWindowEvent_event(XDestroyWindowEvent *i, int j)
{
          i->event = j;
}

Display *XDestroyWindowEvent_display(XDestroyWindowEvent *i)
{
          return(i->display);
}

void set_XDestroyWindowEvent_display(XDestroyWindowEvent *i, Display *j)
{
          i->display = j;
}

int  XDestroyWindowEvent_send_event(XDestroyWindowEvent *i)
{
          return(i->send_event);
}

void set_XDestroyWindowEvent_send_event(XDestroyWindowEvent *i, int j)
{
          i->send_event = j;
}

int  XDestroyWindowEvent_serial(XDestroyWindowEvent *i)
{
          return(i->serial);
}

void set_XDestroyWindowEvent_serial(XDestroyWindowEvent *i, int j)
{
          i->serial = j;
}

int  XDestroyWindowEvent_type(XDestroyWindowEvent *i)
{
          return(i->type);
}

void set_XDestroyWindowEvent_type(XDestroyWindowEvent *i, int j)
{
          i->type = j;
}


/********* XUnmapEvent funcions *****/

int  make_XUnmapEvent (void) {
          return ((int) calloc(1, sizeof(XUnmapEvent)));
}

int  XUnmapEvent_from_configure(XUnmapEvent *i)
{
          return(i->from_configure);
}

void set_XUnmapEvent_from_configure(XUnmapEvent *i, int j)
{
          i->from_configure = j;
}

int  XUnmapEvent_window(XUnmapEvent *i)
{
          return(i->window);
}

void set_XUnmapEvent_window(XUnmapEvent *i, int j)
{
          i->window = j;
}

int  XUnmapEvent_event(XUnmapEvent *i)
{
          return(i->event);
}

void set_XUnmapEvent_event(XUnmapEvent *i, int j)
{
          i->event = j;
}

Display *XUnmapEvent_display(XUnmapEvent *i)
{
          return(i->display);
}

void set_XUnmapEvent_display(XUnmapEvent *i, Display *j)
{
          i->display = j;
}

int  XUnmapEvent_send_event(XUnmapEvent *i)
{
          return(i->send_event);
}

void set_XUnmapEvent_send_event(XUnmapEvent *i, int j)
{
          i->send_event = j;
}

int  XUnmapEvent_serial(XUnmapEvent *i)
{
          return(i->serial);
}

void set_XUnmapEvent_serial(XUnmapEvent *i, int j)
{
          i->serial = j;
}

int  XUnmapEvent_type(XUnmapEvent *i)
{
          return(i->type);
}

void set_XUnmapEvent_type(XUnmapEvent *i, int j)
{
          i->type = j;
}


/********* XMapEvent funcions *****/

int  make_XMapEvent (void) {
          return ((int) calloc(1, sizeof(XMapEvent)));
}

int  XMapEvent_override_redirect(XMapEvent *i)
{
          return(i->override_redirect);
}

void set_XMapEvent_override_redirect(XMapEvent *i, int j)
{
          i->override_redirect = j;
}

int  XMapEvent_window(XMapEvent *i)
{
          return(i->window);
}

void set_XMapEvent_window(XMapEvent *i, int j)
{
          i->window = j;
}

int  XMapEvent_event(XMapEvent *i)
{
          return(i->event);
}

void set_XMapEvent_event(XMapEvent *i, int j)
{
          i->event = j;
}

Display *XMapEvent_display(XMapEvent *i)
{
          return(i->display);
}

void set_XMapEvent_display(XMapEvent *i, Display *j)
{
          i->display = j;
}

int  XMapEvent_send_event(XMapEvent *i)
{
          return(i->send_event);
}

void set_XMapEvent_send_event(XMapEvent *i, int j)
{
          i->send_event = j;
}

int  XMapEvent_serial(XMapEvent *i)
{
          return(i->serial);
}

void set_XMapEvent_serial(XMapEvent *i, int j)
{
          i->serial = j;
}

int  XMapEvent_type(XMapEvent *i)
{
          return(i->type);
}

void set_XMapEvent_type(XMapEvent *i, int j)
{
          i->type = j;
}


/********* XMapRequestEvent funcions *****/

int  make_XMapRequestEvent (void) {
          return ((int) calloc(1, sizeof(XMapRequestEvent)));
}

int  XMapRequestEvent_window(XMapRequestEvent *i)
{
          return(i->window);
}

void set_XMapRequestEvent_window(XMapRequestEvent *i, int j)
{
          i->window = j;
}

int  XMapRequestEvent_parent(XMapRequestEvent *i)
{
          return(i->parent);
}

void set_XMapRequestEvent_parent(XMapRequestEvent *i, int j)
{
          i->parent = j;
}

Display *XMapRequestEvent_display(XMapRequestEvent *i)
{
          return(i->display);
}

void set_XMapRequestEvent_display(XMapRequestEvent *i, Display *j)
{
          i->display = j;
}

int  XMapRequestEvent_send_event(XMapRequestEvent *i)
{
          return(i->send_event);
}

void set_XMapRequestEvent_send_event(XMapRequestEvent *i, int j)
{
          i->send_event = j;
}

int  XMapRequestEvent_serial(XMapRequestEvent *i)
{
          return(i->serial);
}

void set_XMapRequestEvent_serial(XMapRequestEvent *i, int j)
{
          i->serial = j;
}

int  XMapRequestEvent_type(XMapRequestEvent *i)
{
          return(i->type);
}

void set_XMapRequestEvent_type(XMapRequestEvent *i, int j)
{
          i->type = j;
}


/********* XReparentEvent funcions *****/

int  make_XReparentEvent (void) {
          return ((int) calloc(1, sizeof(XReparentEvent)));
}

int  XReparentEvent_override_redirect(XReparentEvent *i)
{
          return(i->override_redirect);
}

void set_XReparentEvent_override_redirect(XReparentEvent *i, int j)
{
          i->override_redirect = j;
}

int  XReparentEvent_y(XReparentEvent *i)
{
          return(i->y);
}

void set_XReparentEvent_y(XReparentEvent *i, int j)
{
          i->y = j;
}

int  XReparentEvent_x(XReparentEvent *i)
{
          return(i->x);
}

void set_XReparentEvent_x(XReparentEvent *i, int j)
{
          i->x = j;
}

int  XReparentEvent_parent(XReparentEvent *i)
{
          return(i->parent);
}

void set_XReparentEvent_parent(XReparentEvent *i, int j)
{
          i->parent = j;
}

int  XReparentEvent_window(XReparentEvent *i)
{
          return(i->window);
}

void set_XReparentEvent_window(XReparentEvent *i, int j)
{
          i->window = j;
}

int  XReparentEvent_event(XReparentEvent *i)
{
          return(i->event);
}

void set_XReparentEvent_event(XReparentEvent *i, int j)
{
          i->event = j;
}

Display *XReparentEvent_display(XReparentEvent *i)
{
          return(i->display);
}

void set_XReparentEvent_display(XReparentEvent *i, Display *j)
{
          i->display = j;
}

int  XReparentEvent_send_event(XReparentEvent *i)
{
          return(i->send_event);
}

void set_XReparentEvent_send_event(XReparentEvent *i, int j)
{
          i->send_event = j;
}

int  XReparentEvent_serial(XReparentEvent *i)
{
          return(i->serial);
}

void set_XReparentEvent_serial(XReparentEvent *i, int j)
{
          i->serial = j;
}

int  XReparentEvent_type(XReparentEvent *i)
{
          return(i->type);
}

void set_XReparentEvent_type(XReparentEvent *i, int j)
{
          i->type = j;
}


/********* XConfigureEvent funcions *****/

int  make_XConfigureEvent (void) {
          return ((int) calloc(1, sizeof(XConfigureEvent)));
}

int  XConfigureEvent_override_redirect(XConfigureEvent *i)
{
          return(i->override_redirect);
}

void set_XConfigureEvent_override_redirect(XConfigureEvent *i, int j)
{
          i->override_redirect = j;
}

int  XConfigureEvent_above(XConfigureEvent *i)
{
          return(i->above);
}

void set_XConfigureEvent_above(XConfigureEvent *i, int j)
{
          i->above = j;
}

int  XConfigureEvent_border_width(XConfigureEvent *i)
{
          return(i->border_width);
}

void set_XConfigureEvent_border_width(XConfigureEvent *i, int j)
{
          i->border_width = j;
}

int  XConfigureEvent_height(XConfigureEvent *i)
{
          return(i->height);
}

void set_XConfigureEvent_height(XConfigureEvent *i, int j)
{
          i->height = j;
}

int  XConfigureEvent_width(XConfigureEvent *i)
{
          return(i->width);
}

void set_XConfigureEvent_width(XConfigureEvent *i, int j)
{
          i->width = j;
}

int  XConfigureEvent_y(XConfigureEvent *i)
{
          return(i->y);
}

void set_XConfigureEvent_y(XConfigureEvent *i, int j)
{
          i->y = j;
}

int  XConfigureEvent_x(XConfigureEvent *i)
{
          return(i->x);
}

void set_XConfigureEvent_x(XConfigureEvent *i, int j)
{
          i->x = j;
}

int  XConfigureEvent_window(XConfigureEvent *i)
{
          return(i->window);
}

void set_XConfigureEvent_window(XConfigureEvent *i, int j)
{
          i->window = j;
}

int  XConfigureEvent_event(XConfigureEvent *i)
{
          return(i->event);
}

void set_XConfigureEvent_event(XConfigureEvent *i, int j)
{
          i->event = j;
}

Display *XConfigureEvent_display(XConfigureEvent *i)
{
          return(i->display);
}

void set_XConfigureEvent_display(XConfigureEvent *i, Display *j)
{
          i->display = j;
}

int  XConfigureEvent_send_event(XConfigureEvent *i)
{
          return(i->send_event);
}

void set_XConfigureEvent_send_event(XConfigureEvent *i, int j)
{
          i->send_event = j;
}

int  XConfigureEvent_serial(XConfigureEvent *i)
{
          return(i->serial);
}

void set_XConfigureEvent_serial(XConfigureEvent *i, int j)
{
          i->serial = j;
}

int  XConfigureEvent_type(XConfigureEvent *i)
{
          return(i->type);
}

void set_XConfigureEvent_type(XConfigureEvent *i, int j)
{
          i->type = j;
}


/********* XGravityEvent funcions *****/

int  make_XGravityEvent (void) {
          return ((int) calloc(1, sizeof(XGravityEvent)));
}

int  XGravityEvent_y(XGravityEvent *i)
{
          return(i->y);
}

void set_XGravityEvent_y(XGravityEvent *i, int j)
{
          i->y = j;
}

int  XGravityEvent_x(XGravityEvent *i)
{
          return(i->x);
}

void set_XGravityEvent_x(XGravityEvent *i, int j)
{
          i->x = j;
}

int  XGravityEvent_window(XGravityEvent *i)
{
          return(i->window);
}

void set_XGravityEvent_window(XGravityEvent *i, int j)
{
          i->window = j;
}

int  XGravityEvent_event(XGravityEvent *i)
{
          return(i->event);
}

void set_XGravityEvent_event(XGravityEvent *i, int j)
{
          i->event = j;
}

Display *XGravityEvent_display(XGravityEvent *i)
{
          return(i->display);
}

void set_XGravityEvent_display(XGravityEvent *i, Display *j)
{
          i->display = j;
}

int  XGravityEvent_send_event(XGravityEvent *i)
{
          return(i->send_event);
}

void set_XGravityEvent_send_event(XGravityEvent *i, int j)
{
          i->send_event = j;
}

int  XGravityEvent_serial(XGravityEvent *i)
{
          return(i->serial);
}

void set_XGravityEvent_serial(XGravityEvent *i, int j)
{
          i->serial = j;
}

int  XGravityEvent_type(XGravityEvent *i)
{
          return(i->type);
}

void set_XGravityEvent_type(XGravityEvent *i, int j)
{
          i->type = j;
}


/********* XResizeRequestEvent funcions *****/

int  make_XResizeRequestEvent (void) {
          return ((int) calloc(1, sizeof(XResizeRequestEvent)));
}

int  XResizeRequestEvent_height(XResizeRequestEvent *i)
{
          return(i->height);
}

void set_XResizeRequestEvent_height(XResizeRequestEvent *i, int j)
{
          i->height = j;
}

int  XResizeRequestEvent_width(XResizeRequestEvent *i)
{
          return(i->width);
}

void set_XResizeRequestEvent_width(XResizeRequestEvent *i, int j)
{
          i->width = j;
}

int  XResizeRequestEvent_window(XResizeRequestEvent *i)
{
          return(i->window);
}

void set_XResizeRequestEvent_window(XResizeRequestEvent *i, int j)
{
          i->window = j;
}

Display *XResizeRequestEvent_display(XResizeRequestEvent *i)
{
          return(i->display);
}

void set_XResizeRequestEvent_display(XResizeRequestEvent *i, Display *j)
{
          i->display = j;
}

int  XResizeRequestEvent_send_event(XResizeRequestEvent *i)
{
          return(i->send_event);
}

void set_XResizeRequestEvent_send_event(XResizeRequestEvent *i, int j)
{
          i->send_event = j;
}

int  XResizeRequestEvent_serial(XResizeRequestEvent *i)
{
          return(i->serial);
}

void set_XResizeRequestEvent_serial(XResizeRequestEvent *i, int j)
{
          i->serial = j;
}

int  XResizeRequestEvent_type(XResizeRequestEvent *i)
{
          return(i->type);
}

void set_XResizeRequestEvent_type(XResizeRequestEvent *i, int j)
{
          i->type = j;
}


/********* XConfigureRequestEvent funcions *****/

int  make_XConfigureRequestEvent (void) {
          return ((int) calloc(1, sizeof(XConfigureRequestEvent)));
}

int  XConfigureRequestEvent_value_mask(XConfigureRequestEvent *i)
{
          return(i->value_mask);
}

void set_XConfigureRequestEvent_value_mask(XConfigureRequestEvent *i, int j)
{
          i->value_mask = j;
}

int  XConfigureRequestEvent_detail(XConfigureRequestEvent *i)
{
          return(i->detail);
}

void set_XConfigureRequestEvent_detail(XConfigureRequestEvent *i, int j)
{
          i->detail = j;
}

int  XConfigureRequestEvent_above(XConfigureRequestEvent *i)
{
          return(i->above);
}

void set_XConfigureRequestEvent_above(XConfigureRequestEvent *i, int j)
{
          i->above = j;
}

int  XConfigureRequestEvent_border_width(XConfigureRequestEvent *i)
{
          return(i->border_width);
}

void set_XConfigureRequestEvent_border_width(XConfigureRequestEvent *i, int j)
{
          i->border_width = j;
}

int  XConfigureRequestEvent_height(XConfigureRequestEvent *i)
{
          return(i->height);
}

void set_XConfigureRequestEvent_height(XConfigureRequestEvent *i, int j)
{
          i->height = j;
}

int  XConfigureRequestEvent_width(XConfigureRequestEvent *i)
{
          return(i->width);
}

void set_XConfigureRequestEvent_width(XConfigureRequestEvent *i, int j)
{
          i->width = j;
}

int  XConfigureRequestEvent_y(XConfigureRequestEvent *i)
{
          return(i->y);
}

void set_XConfigureRequestEvent_y(XConfigureRequestEvent *i, int j)
{
          i->y = j;
}

int  XConfigureRequestEvent_x(XConfigureRequestEvent *i)
{
          return(i->x);
}

void set_XConfigureRequestEvent_x(XConfigureRequestEvent *i, int j)
{
          i->x = j;
}

int  XConfigureRequestEvent_window(XConfigureRequestEvent *i)
{
          return(i->window);
}

void set_XConfigureRequestEvent_window(XConfigureRequestEvent *i, int j)
{
          i->window = j;
}

int  XConfigureRequestEvent_parent(XConfigureRequestEvent *i)
{
          return(i->parent);
}

void set_XConfigureRequestEvent_parent(XConfigureRequestEvent *i, int j)
{
          i->parent = j;
}

Display *XConfigureRequestEvent_display(XConfigureRequestEvent *i)
{
          return(i->display);
}

void set_XConfigureRequestEvent_display(XConfigureRequestEvent *i, Display *j)
{
          i->display = j;
}

int  XConfigureRequestEvent_send_event(XConfigureRequestEvent *i)
{
          return(i->send_event);
}

void set_XConfigureRequestEvent_send_event(XConfigureRequestEvent *i, int j)
{
          i->send_event = j;
}

int  XConfigureRequestEvent_serial(XConfigureRequestEvent *i)
{
          return(i->serial);
}

void set_XConfigureRequestEvent_serial(XConfigureRequestEvent *i, int j)
{
          i->serial = j;
}

int  XConfigureRequestEvent_type(XConfigureRequestEvent *i)
{
          return(i->type);
}

void set_XConfigureRequestEvent_type(XConfigureRequestEvent *i, int j)
{
          i->type = j;
}


/********* XCirculateEvent funcions *****/

int  make_XCirculateEvent (void) {
          return ((int) calloc(1, sizeof(XCirculateEvent)));
}

int  XCirculateEvent_place(XCirculateEvent *i)
{
          return(i->place);
}

void set_XCirculateEvent_place(XCirculateEvent *i, int j)
{
          i->place = j;
}

int  XCirculateEvent_window(XCirculateEvent *i)
{
          return(i->window);
}

void set_XCirculateEvent_window(XCirculateEvent *i, int j)
{
          i->window = j;
}

int  XCirculateEvent_event(XCirculateEvent *i)
{
          return(i->event);
}

void set_XCirculateEvent_event(XCirculateEvent *i, int j)
{
          i->event = j;
}

Display *XCirculateEvent_display(XCirculateEvent *i)
{
          return(i->display);
}

void set_XCirculateEvent_display(XCirculateEvent *i, Display *j)
{
          i->display = j;
}

int  XCirculateEvent_send_event(XCirculateEvent *i)
{
          return(i->send_event);
}

void set_XCirculateEvent_send_event(XCirculateEvent *i, int j)
{
          i->send_event = j;
}

int  XCirculateEvent_serial(XCirculateEvent *i)
{
          return(i->serial);
}

void set_XCirculateEvent_serial(XCirculateEvent *i, int j)
{
          i->serial = j;
}

int  XCirculateEvent_type(XCirculateEvent *i)
{
          return(i->type);
}

void set_XCirculateEvent_type(XCirculateEvent *i, int j)
{
          i->type = j;
}


/********* XCirculateRequestEvent funcions *****/

int  make_XCirculateRequestEvent (void) {
          return ((int) calloc(1, sizeof(XCirculateRequestEvent)));
}

int  XCirculateRequestEvent_place(XCirculateRequestEvent *i)
{
          return(i->place);
}

void set_XCirculateRequestEvent_place(XCirculateRequestEvent *i, int j)
{
          i->place = j;
}

int  XCirculateRequestEvent_window(XCirculateRequestEvent *i)
{
          return(i->window);
}

void set_XCirculateRequestEvent_window(XCirculateRequestEvent *i, int j)
{
          i->window = j;
}

int  XCirculateRequestEvent_parent(XCirculateRequestEvent *i)
{
          return(i->parent);
}

void set_XCirculateRequestEvent_parent(XCirculateRequestEvent *i, int j)
{
          i->parent = j;
}

Display *XCirculateRequestEvent_display(XCirculateRequestEvent *i)
{
          return(i->display);
}

void set_XCirculateRequestEvent_display(XCirculateRequestEvent *i, Display *j)
{
          i->display = j;
}

int  XCirculateRequestEvent_send_event(XCirculateRequestEvent *i)
{
          return(i->send_event);
}

void set_XCirculateRequestEvent_send_event(XCirculateRequestEvent *i, int j)
{
          i->send_event = j;
}

int  XCirculateRequestEvent_serial(XCirculateRequestEvent *i)
{
          return(i->serial);
}

void set_XCirculateRequestEvent_serial(XCirculateRequestEvent *i, int j)
{
          i->serial = j;
}

int  XCirculateRequestEvent_type(XCirculateRequestEvent *i)
{
          return(i->type);
}

void set_XCirculateRequestEvent_type(XCirculateRequestEvent *i, int j)
{
          i->type = j;
}


/********* XPropertyEvent funcions *****/

int  make_XPropertyEvent (void) {
          return ((int) calloc(1, sizeof(XPropertyEvent)));
}

int  XPropertyEvent_state(XPropertyEvent *i)
{
          return(i->state);
}

void set_XPropertyEvent_state(XPropertyEvent *i, int j)
{
          i->state = j;
}

int  XPropertyEvent_time(XPropertyEvent *i)
{
          return(i->time);
}

void set_XPropertyEvent_time(XPropertyEvent *i, int j)
{
          i->time = j;
}

int  XPropertyEvent_atom(XPropertyEvent *i)
{
          return(i->atom);
}

void set_XPropertyEvent_atom(XPropertyEvent *i, int j)
{
          i->atom = j;
}

int  XPropertyEvent_window(XPropertyEvent *i)
{
          return(i->window);
}

void set_XPropertyEvent_window(XPropertyEvent *i, int j)
{
          i->window = j;
}

Display *XPropertyEvent_display(XPropertyEvent *i)
{
          return(i->display);
}

void set_XPropertyEvent_display(XPropertyEvent *i, Display *j)
{
          i->display = j;
}

int  XPropertyEvent_send_event(XPropertyEvent *i)
{
          return(i->send_event);
}

void set_XPropertyEvent_send_event(XPropertyEvent *i, int j)
{
          i->send_event = j;
}

int  XPropertyEvent_serial(XPropertyEvent *i)
{
          return(i->serial);
}

void set_XPropertyEvent_serial(XPropertyEvent *i, int j)
{
          i->serial = j;
}

int  XPropertyEvent_type(XPropertyEvent *i)
{
          return(i->type);
}

void set_XPropertyEvent_type(XPropertyEvent *i, int j)
{
          i->type = j;
}


/********* XSelectionClearEvent funcions *****/

int  make_XSelectionClearEvent (void) {
          return ((int) calloc(1, sizeof(XSelectionClearEvent)));
}

int  XSelectionClearEvent_time(XSelectionClearEvent *i)
{
          return(i->time);
}

void set_XSelectionClearEvent_time(XSelectionClearEvent *i, int j)
{
          i->time = j;
}

int  XSelectionClearEvent_selection(XSelectionClearEvent *i)
{
          return(i->selection);
}

void set_XSelectionClearEvent_selection(XSelectionClearEvent *i, int j)
{
          i->selection = j;
}

int  XSelectionClearEvent_window(XSelectionClearEvent *i)
{
          return(i->window);
}

void set_XSelectionClearEvent_window(XSelectionClearEvent *i, int j)
{
          i->window = j;
}

Display *XSelectionClearEvent_display(XSelectionClearEvent *i)
{
          return(i->display);
}

void set_XSelectionClearEvent_display(XSelectionClearEvent *i, Display *j)
{
          i->display = j;
}

int  XSelectionClearEvent_send_event(XSelectionClearEvent *i)
{
          return(i->send_event);
}

void set_XSelectionClearEvent_send_event(XSelectionClearEvent *i, int j)
{
          i->send_event = j;
}

int  XSelectionClearEvent_serial(XSelectionClearEvent *i)
{
          return(i->serial);
}

void set_XSelectionClearEvent_serial(XSelectionClearEvent *i, int j)
{
          i->serial = j;
}

int  XSelectionClearEvent_type(XSelectionClearEvent *i)
{
          return(i->type);
}

void set_XSelectionClearEvent_type(XSelectionClearEvent *i, int j)
{
          i->type = j;
}


/********* XSelectionRequestEvent funcions *****/

int  make_XSelectionRequestEvent (void) {
          return ((int) calloc(1, sizeof(XSelectionRequestEvent)));
}

int  XSelectionRequestEvent_time(XSelectionRequestEvent *i)
{
          return(i->time);
}

void set_XSelectionRequestEvent_time(XSelectionRequestEvent *i, int j)
{
          i->time = j;
}

int  XSelectionRequestEvent_property(XSelectionRequestEvent *i)
{
          return(i->property);
}

void set_XSelectionRequestEvent_property(XSelectionRequestEvent *i, int j)
{
          i->property = j;
}

int  XSelectionRequestEvent_target(XSelectionRequestEvent *i)
{
          return(i->target);
}

void set_XSelectionRequestEvent_target(XSelectionRequestEvent *i, int j)
{
          i->target = j;
}

int  XSelectionRequestEvent_selection(XSelectionRequestEvent *i)
{
          return(i->selection);
}

void set_XSelectionRequestEvent_selection(XSelectionRequestEvent *i, int j)
{
          i->selection = j;
}

int  XSelectionRequestEvent_requestor(XSelectionRequestEvent *i)
{
          return(i->requestor);
}

void set_XSelectionRequestEvent_requestor(XSelectionRequestEvent *i, int j)
{
          i->requestor = j;
}

int  XSelectionRequestEvent_owner(XSelectionRequestEvent *i)
{
          return(i->owner);
}

void set_XSelectionRequestEvent_owner(XSelectionRequestEvent *i, int j)
{
          i->owner = j;
}

Display *XSelectionRequestEvent_display(XSelectionRequestEvent *i)
{
          return(i->display);
}

void set_XSelectionRequestEvent_display(XSelectionRequestEvent *i, Display *j)
{
          i->display = j;
}

int  XSelectionRequestEvent_send_event(XSelectionRequestEvent *i)
{
          return(i->send_event);
}

void set_XSelectionRequestEvent_send_event(XSelectionRequestEvent *i, int j)
{
          i->send_event = j;
}

int  XSelectionRequestEvent_serial(XSelectionRequestEvent *i)
{
          return(i->serial);
}

void set_XSelectionRequestEvent_serial(XSelectionRequestEvent *i, int j)
{
          i->serial = j;
}

int  XSelectionRequestEvent_type(XSelectionRequestEvent *i)
{
          return(i->type);
}

void set_XSelectionRequestEvent_type(XSelectionRequestEvent *i, int j)
{
          i->type = j;
}


/********* XSelectionEvent funcions *****/

int  make_XSelectionEvent (void) {
          return ((int) calloc(1, sizeof(XSelectionEvent)));
}

int  XSelectionEvent_time(XSelectionEvent *i)
{
          return(i->time);
}

void set_XSelectionEvent_time(XSelectionEvent *i, int j)
{
          i->time = j;
}

int  XSelectionEvent_property(XSelectionEvent *i)
{
          return(i->property);
}

void set_XSelectionEvent_property(XSelectionEvent *i, int j)
{
          i->property = j;
}

int  XSelectionEvent_target(XSelectionEvent *i)
{
          return(i->target);
}

void set_XSelectionEvent_target(XSelectionEvent *i, int j)
{
          i->target = j;
}

int  XSelectionEvent_selection(XSelectionEvent *i)
{
          return(i->selection);
}

void set_XSelectionEvent_selection(XSelectionEvent *i, int j)
{
          i->selection = j;
}

int  XSelectionEvent_requestor(XSelectionEvent *i)
{
          return(i->requestor);
}

void set_XSelectionEvent_requestor(XSelectionEvent *i, int j)
{
          i->requestor = j;
}

Display *XSelectionEvent_display(XSelectionEvent *i)
{
          return(i->display);
}

void set_XSelectionEvent_display(XSelectionEvent *i, Display *j)
{
          i->display = j;
}

int  XSelectionEvent_send_event(XSelectionEvent *i)
{
          return(i->send_event);
}

void set_XSelectionEvent_send_event(XSelectionEvent *i, int j)
{
          i->send_event = j;
}

int  XSelectionEvent_serial(XSelectionEvent *i)
{
          return(i->serial);
}

void set_XSelectionEvent_serial(XSelectionEvent *i, int j)
{
          i->serial = j;
}

int  XSelectionEvent_type(XSelectionEvent *i)
{
          return(i->type);
}

void set_XSelectionEvent_type(XSelectionEvent *i, int j)
{
          i->type = j;
}


/********* XColormapEvent funcions *****/

int  make_XColormapEvent (void) {
          return ((int) calloc(1, sizeof(XColormapEvent)));
}

int  XColormapEvent_state(XColormapEvent *i)
{
          return(i->state);
}

void set_XColormapEvent_state(XColormapEvent *i, int j)
{
          i->state = j;
}

int  XColormapEvent_new(XColormapEvent *i)
{
          return(i->new);
}

void set_XColormapEvent_new(XColormapEvent *i, int j)
{
          i->new = j;
}

int  XColormapEvent_colormap(XColormapEvent *i)
{
          return(i->colormap);
}

void set_XColormapEvent_colormap(XColormapEvent *i, int j)
{
          i->colormap = j;
}

int  XColormapEvent_window(XColormapEvent *i)
{
          return(i->window);
}

void set_XColormapEvent_window(XColormapEvent *i, int j)
{
          i->window = j;
}

Display *XColormapEvent_display(XColormapEvent *i)
{
          return(i->display);
}

void set_XColormapEvent_display(XColormapEvent *i, Display *j)
{
          i->display = j;
}

int  XColormapEvent_send_event(XColormapEvent *i)
{
          return(i->send_event);
}

void set_XColormapEvent_send_event(XColormapEvent *i, int j)
{
          i->send_event = j;
}

int  XColormapEvent_serial(XColormapEvent *i)
{
          return(i->serial);
}

void set_XColormapEvent_serial(XColormapEvent *i, int j)
{
          i->serial = j;
}

int  XColormapEvent_type(XColormapEvent *i)
{
          return(i->type);
}

void set_XColormapEvent_type(XColormapEvent *i, int j)
{
          i->type = j;
}


/********* XClientMessageEvent funcions *****/

int  make_XClientMessageEvent (void) {
          return ((int) calloc(1, sizeof(XClientMessageEvent)));
}

int  XClientMessageEvent_format(XClientMessageEvent *i)
{
          return(i->format);
}

void set_XClientMessageEvent_format(XClientMessageEvent *i, int j)
{
          i->format = j;
}

int  XClientMessageEvent_message_type(XClientMessageEvent *i)
{
          return(i->message_type);
}

void set_XClientMessageEvent_message_type(XClientMessageEvent *i, int j)
{
          i->message_type = j;
}


int  XClientMessageEvent_window(XClientMessageEvent *i)
{
          return(i->window);
}

void set_XClientMessageEvent_window(XClientMessageEvent *i, int j)
{
          i->window = j;
}

Display *XClientMessageEvent_display(XClientMessageEvent *i)
{
          return(i->display);
}

void set_XClientMessageEvent_display(XClientMessageEvent *i, Display *j)
{
          i->display = j;
}

int  XClientMessageEvent_send_event(XClientMessageEvent *i)
{
          return(i->send_event);
}

void set_XClientMessageEvent_send_event(XClientMessageEvent *i, int j)
{
          i->send_event = j;
}

int  XClientMessageEvent_serial(XClientMessageEvent *i)
{
          return(i->serial);
}

void set_XClientMessageEvent_serial(XClientMessageEvent *i, int j)
{
          i->serial = j;
}

int  XClientMessageEvent_type(XClientMessageEvent *i)
{
          return(i->type);
}

void set_XClientMessageEvent_type(XClientMessageEvent *i, int j)
{
          i->type = j;
}


/********* XMappingEvent funcions *****/

int  make_XMappingEvent (void) {
          return ((int) calloc(1, sizeof(XMappingEvent)));
}

int  XMappingEvent_count(XMappingEvent *i)
{
          return(i->count);
}

void set_XMappingEvent_count(XMappingEvent *i, int j)
{
          i->count = j;
}

int XMappingEvent_first_keycode(XMappingEvent *i)
{
          return(i->first_keycode);
}

void set_XMappingEvent_first_keycode(XMappingEvent *i, int j)
{
          i->first_keycode = j;
}

int  XMappingEvent_request(XMappingEvent *i)
{
          return(i->request);
}

void set_XMappingEvent_request(XMappingEvent *i, int j)
{
          i->request = j;
}

int  XMappingEvent_window(XMappingEvent *i)
{
          return(i->window);
}

void set_XMappingEvent_window(XMappingEvent *i, int j)
{
          i->window = j;
}

Display *XMappingEvent_display(XMappingEvent *i)
{
          return(i->display);
}

void set_XMappingEvent_display(XMappingEvent *i, Display *j)
{
          i->display = j;
}

int  XMappingEvent_send_event(XMappingEvent *i)
{
          return(i->send_event);
}

void set_XMappingEvent_send_event(XMappingEvent *i, int j)
{
          i->send_event = j;
}

int  XMappingEvent_serial(XMappingEvent *i)
{
          return(i->serial);
}

void set_XMappingEvent_serial(XMappingEvent *i, int j)
{
          i->serial = j;
}

int  XMappingEvent_type(XMappingEvent *i)
{
          return(i->type);
}

void set_XMappingEvent_type(XMappingEvent *i, int j)
{
          i->type = j;
}


/********* XErrorEvent funcions *****/

int  make_XErrorEvent (void) {
          return ((int) calloc(1, sizeof(XErrorEvent)));
}

char XErrorEvent_minor_code(XErrorEvent *i)
{
          return(i->minor_code);
}

void set_XErrorEvent_minor_code(XErrorEvent *i, char j)
{
          i->minor_code = j;
}

char XErrorEvent_request_code(XErrorEvent *i)
{
          return(i->request_code);
}

void set_XErrorEvent_request_code(XErrorEvent *i, char j)
{
          i->request_code = j;
}

char XErrorEvent_error_code(XErrorEvent *i)
{
          return(i->error_code);
}

void set_XErrorEvent_error_code(XErrorEvent *i, char j)
{
          i->error_code = j;
}

int  XErrorEvent_serial(XErrorEvent *i)
{
          return(i->serial);
}

void set_XErrorEvent_serial(XErrorEvent *i, int j)
{
          i->serial = j;
}

int  XErrorEvent_resourceid(XErrorEvent *i)
{
          return(i->resourceid);
}

void set_XErrorEvent_resourceid(XErrorEvent *i, int j)
{
          i->resourceid = j;
}

Display *XErrorEvent_display(XErrorEvent *i)
{
          return(i->display);
}

void set_XErrorEvent_display(XErrorEvent *i, Display *j)
{
          i->display = j;
}

int  XErrorEvent_type(XErrorEvent *i)
{
          return(i->type);
}

void set_XErrorEvent_type(XErrorEvent *i, int j)
{
          i->type = j;
}


/********* XAnyEvent funcions *****/

int  make_XAnyEvent (void) {
          return ((int) calloc(1, sizeof(XAnyEvent)));
}

int  XAnyEvent_window(XAnyEvent *i)
{
          return(i->window);
}

void set_XAnyEvent_window(XAnyEvent *i, int j)
{
          i->window = j;
}

Display *XAnyEvent_display(XAnyEvent *i)
{
          return(i->display);
}

void set_XAnyEvent_display(XAnyEvent *i, Display *j)
{
          i->display = j;
}

int  XAnyEvent_send_event(XAnyEvent *i)
{
          return(i->send_event);
}

void set_XAnyEvent_send_event(XAnyEvent *i, int j)
{
          i->send_event = j;
}

int  XAnyEvent_serial(XAnyEvent *i)
{
          return(i->serial);
}

void set_XAnyEvent_serial(XAnyEvent *i, int j)
{
          i->serial = j;
}

int  XAnyEvent_type(XAnyEvent *i)
{
          return(i->type);
}

void set_XAnyEvent_type(XAnyEvent *i, int j)
{
          i->type = j;
}


/********* XEvent funcions *****/

int  make_XEvent (void) {
          return ((int) calloc(1, sizeof(XEvent)));
}
