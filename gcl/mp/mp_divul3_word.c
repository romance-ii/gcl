
/*          Copyright (C) 1994 W. Schelter

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU library general public
license along with GCL; see the file COPYING.  If not, write to the
Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include "include.h"
#include "arith.h"



our_ulong
divul3(x,y,hi)
     our_ulong x,y,*hi;
{
#define HIBIT 0x80000000
#define HIMASK 0xffff0000
#define LOMASK 0xffff
#define HIWORD(a) (a >> 16)
/* si le compilateur est bugge, il faut mettre (a >> 16) & LOMASK) */
#define LOWORD(a) (a & LOMASK)
#define GLUE(hi, lo) ((hi << 16) + lo)
#define SPLIT(a, b, c) b = HIWORD(a); c = LOWORD(a)
 
    our_ulong v1, v2, u3, u4, q1, q2, aux, aux1, aux2,hiremainder=*hi;
    int k;
    
    for(k = 0; !(y & HIBIT); k++)
        {
            hiremainder <<= 1;
            if (x & HIBIT) hiremainder++;
            x <<= 1;
            y <<= 1;
        }
        
    SPLIT(y, v1, v2);
    SPLIT(x, u3, u4);
    
    q1 = hiremainder / v1; if (q1 & HIMASK) q1 = LOMASK;
    hiremainder -= q1 * v1;
    aux = v2 * q1;
again:
    SPLIT(aux, aux1, aux2);
    if (aux2 > u3) aux1++;
    if (aux1 > hiremainder) {q1--; hiremainder += v1; aux -= v2; goto again;}
    u3 -= aux2;
    hiremainder -= aux1;
    hiremainder <<= 16; hiremainder += u3 & LOMASK;
    
    q2 = hiremainder / v1; if (q2 & HIMASK) q2 = LOMASK;
    hiremainder -= q2 * v1;
    aux = v2 * q2;
again2:
    SPLIT(aux, aux1, aux2);
    if (aux2 > u4) aux1++;
    if (aux1 > hiremainder) {q2--; hiremainder += v1; aux -= v2; goto again2;}
    u4 -= aux2;
    hiremainder -= aux1;
    hiremainder <<= 16; hiremainder += u4 & LOMASK;
    hiremainder >>= k;
    *hi = hiremainder;
    return GLUE(q1, q2);
}



