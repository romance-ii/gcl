
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
/*
   (h = hiremainder, y = addmul(a,b), hiremainder:y == a*b + h) is true
*/

int addmul(x,y)
     ulong x,y;
{
  ulong xlo,xhi,ylo,yhi;
  ulong z,z2; TEMPVARS

  xlo=x&65535;xhi=x>>16;ylo=y&65535;yhi=y>>16;
  z=addll(xlo*yhi,xhi*ylo);
  z2=(overflow)?xhi*yhi+65536+(z>>16):xhi*yhi+(z>>16);
  z=addll(xlo*ylo,(z<<16));z2+=overflow;
  z=addll(z,hiremainder);hiremainder=z2+overflow;
  return z;
}

