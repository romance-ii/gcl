/* general-c.c           Hiep Huu Nguyen                         27 Aug 92 */

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
#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/X10.h>


int char_array(size)
int size;
{
  return ((int) calloc (size, sizeof(char)));
}

char char_pos (array, pos)
char* array;
int pos;
{
  return (array[pos]);
}


int int_array(size)
int size;
{
  return ((int) calloc (size, sizeof(int)));
}



int int_pos (array, pos)
int* array;
int pos;
{
  return (array[pos]);
}


void set_char_array (array, pos, val)
char* array;
int pos;
char val;
{
array[pos] = val;
}

void set_int_array (array, pos, val)
int* array;
int pos;
int val;
{
array[pos] = val;
}




int vertex_array (size)
int size;
{
  return ((int) calloc (size, sizeof(Vertex)));

}

int vertex_pos_x (array, pos)
Vertex* array;
int pos;
{
  return ((int) array[pos].x);
}

int vertex_pos_y (array, pos)
Vertex* array;
int pos;
{
  return ((int) array[pos].y);
}

int vertex_pos_flag (array, pos)
Vertex* array;
int pos;
{
  return ((int) array[pos].flags);
}




void set_vertex_array (array, pos, x, y, flag)
Vertex* array;
int pos;
int x, y;
int flag;
{
  array[pos].x = x; 
  array[pos].y = y;
  array[pos].flags = flag;

}
