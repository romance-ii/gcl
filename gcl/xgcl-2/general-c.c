/* general-c.c           Hiep Huu Nguyen   27 Aug 92; 24 Jan 06 */

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

/* 24 Jan 06: edited by G. Novak to remove vertex_array functions,
              remove includes, change function arg lists to new form */
#include <stdlib.h>
#define int long
int char_array(int size)
{
  return ((int) calloc (size, sizeof(char)));
}

char char_pos (char* array, int pos)
{
  return (array[pos]);
}

void set_char_array (char* array, int pos, char val)
{
array[pos] = val;
}

int int_array(int size)
{
  return ((int) calloc (size, sizeof(int)));
}

int int_pos (int* array, int pos)
{
  return (array[pos]);
}

void set_int_array (int* array, int pos, int val)
{
array[pos] = val;
}

