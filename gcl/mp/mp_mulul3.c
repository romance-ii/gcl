
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

/* ulong a,b,y;
   (y = mulul3(a,b,&hiremainder), hiremainder:y == a*b) is TRUE.
*/   
#ifdef USE_WORD_MULUL3

int mulul3(x,y,hiremainder)
     ulong x,y,*hiremainder;
{
  ulong xlo,xhi,ylo,yhi;
  ulong z; TEMPVARS

  xlo=x&65535;xhi=x>>16;ylo=y&65535;yhi=y>>16;
  z=addll(xlo*yhi,xhi*ylo);
  *hiremainder=(overflow)?xhi*yhi+65536+(z>>16):xhi*yhi+(z>>16);
  z=addll(xlo*ylo,(z<<16));*hiremainder+=overflow;
  return z;
}

#else
ulong
mulul3(a,b,h)
unsigned int a,b, *h;
{unsigned int temph,templ,ah,al,i;
 ah=0;
 al=0;
 /* in case the shift by 32 does not zero an unsigned int..
    we separate out the first step.*/
 {if (b & 1)
    {temph=0;templ=a;
     lladd(temph,templ,ah,al);}
    /*    printf("\n%d b=%d a=%d (%d:%d)",i,b,a,ah,al); */
    b=b>>1;
  }
 i=1;
 while(b)
   {if (b & 1)
      {llshift(a,i,temph,templ);
       lladd(temph,templ,ah,al);}
      i++;b=b>>1;
    }
 *h=ah;
 return al;
}
#endif
