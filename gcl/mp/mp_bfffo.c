

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
     double i; ulong x;
        index of the first non zero bit numbering from left 
      Bit position measured from most significant end
      to the first non zero bit of x
     if (x == 2^i) bfffo(x) == (31 - truncate(i))
       else if (x==0) 32

     [truncate (i) chops off the decimal places]
     
     bfffo(0) == 32
     bfffo(1) == 31
     bfffo(2) == 30
     bfffo(3) == 30
     bfffo(4) == 29
     bfffo(5) == 29
     ..
     
*/  

#include "include.h"

#ifndef bfffo
int bfffo(x)
     unsigned plong x;
{
  int sc;
  static int tabshi[16]={4,3,2,2,1,1,1,1,0,0,0,0,0,0,0,0};

  if(x&(0xffff0000)) sc=0;else {sc=16;x<<=16;}
  if(!(x&(0xff000000))) {sc+=8;x<<=8;}
  if(x&(0xf0000000)) x>>=28;else {sc+=4;x>>=24;}
  sc+=tabshi[x];return sc;
}

#else
static dummy () {;}
#endif





