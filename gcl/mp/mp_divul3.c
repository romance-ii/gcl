
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

/*
    ulong low,divisor,h,q;
    if divisor!= 0 and if (hiremainder:low)/divisor (ie q)
        is expressible in 32 bits,
    then
    (h = hiremainder, q = divll(low,divisor),
      h:low == q * divisor + hiremainder && 0<= hiremainder && hiremainder < divisor)
    is TRUE.  
    [the arithmetic is ordinary arithmetic among unsigned 64 bit integers]
    A sufficient criteria for (hiremainder:low)/divisor
         to be expressible in 32 bits,
    is bfffo(divisor)-bfffo(hiremainder) <= 0
    
*/   

#include "include.h"
#include "arith.h"

#define WORD_SIZE 32
/* SHIFT1BIT: shift h and l left by 1 as 64 bits.  We don't care what
  is coming into the bottom word  */

#define shift1bit(h,l) \
  l = (h = h << 1, ( l & (1<<(WORD_SIZE -1)) ? h +=1 : 0), l<<1)

ulong
divul3(x,y,hi)
     ulong x,y,*hi;
{ulong q =0;
 ulong h = *hi,l=x,hibit;
 int count = WORD_SIZE;
/* if (y<=h) printf("error: the quotient will be more than 32 bits"); */
#ifdef QUICK_DIV
 QUICK_DIV(x,y,h,hi)
#endif 
  do { q = q << 1;
     hibit = h & (1 << (WORD_SIZE -1));
     shift1bit(h,l);
     if (hibit || (y <= h))
       { q += 1; h -= y;}
     } while(--count > 0);
 *hi = h;
 return q;
}

