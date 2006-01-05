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

/* $Xorg: X10.h,v 1.3 2000/08/17 19:46:42 cpqbld Exp $ */
/* 
 * 
Copyright 1985, 1986, 1987, 1998 The Open Group

All Rights Reserved.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.
 *
 * The X Window System is a Trademark of The Open Group.
 *
 */


/*
 *	X10.h - Header definition and support file for the C subroutine
 *	interface library for V10 support routines.
 */
#ifndef _X10_H_
#define _X10_H_

/* Used in XDraw and XDrawFilled */

typedef struct {
	short x, y;
	unsigned short flags;
} Vertex;

/* The meanings of the flag bits.  If the bit is 1 the predicate is true */

#define VertexRelative		0x0001		/* else absolute */
#define VertexDontDraw		0x0002		/* else draw */
#define VertexCurved		0x0004		/* else straight */
#define VertexStartClosed	0x0008		/* else not */
#define VertexEndClosed		0x0010		/* else not */
/*#define VertexDrawLastPoint	0x0020 	*/      /* else don't */	

/*
The VertexDrawLastPoint option has not been implemented in XDraw and 
XDrawFilled so it shouldn't be defined. 
*/

/*
 * XAssoc - Associations used in the XAssocTable data structure.  The 
 * associations are used as circular queue entries in the association table
 * which is contains an array of circular queues (buckets).
 */
typedef struct _XAssoc {
	struct _XAssoc *next;	/* Next object in this bucket. */
	struct _XAssoc *prev;	/* Previous obejct in this bucket. */
	Display *display;	/* Display which ownes the id. */
	XID x_id;		/* X Window System id. */
	char *data;		/* Pointer to untyped memory. */
} XAssoc;

/* 
 * XAssocTable - X Window System id to data structure pointer association
 * table.  An XAssocTable is a hash table whose buckets are circular
 * queues of XAssoc's.  The XAssocTable is constructed from an array of
 * XAssoc's which are the circular queue headers (bucket headers).  
 * An XAssocTable consists an XAssoc pointer that points to the first
 * bucket in the bucket array and an integer that indicates the number
 * of buckets in the array.
 */
typedef struct {
    XAssoc *buckets;		/* Pointer to first bucket in bucket array.*/
    int size;			/* Table size (number of buckets). */
} XAssocTable;

XAssocTable *XCreateAssocTable();
char *XLookUpAssoc();

#endif /* _X10_H_ */
/* #include <X11/X10.h> */


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
