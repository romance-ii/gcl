
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

/* #include "include.h" */
#include "config.h"
/* #include "cmpinclude.h"   */
/* #include "genpari.h" */
#include "arith.h"
object make_integer();  


static unsigned plong small_pos_int[3]={0x1000003,0x01000003,0};
static unsigned plong small_neg_int[3]={0x1000003,0xff000003,0};
static unsigned plong s4_neg_int[4]={0x1000004,0xff000004,1,0};

object
fplus(a,b)
     int a,b;
{ int z ;
  int x;
  if (a >= 0)
   { if (b >= 0)
       { x = a + b;
	 if (x == 0) return small_fixnum(0);
	 small_pos_int[2]=x;
	 return make_integer(small_pos_int);
       }
     else
       { /* b neg */
	 x = a + b;
	 return make_fixnum(x);
       }}
  else
    { /* a neg */
      if (b >= 0)
	{ x = a + b;
	  return make_fixnum(x);}
      else
	{ /* both neg */
	    { unsigned plong Xtx,Xty,overflow,Xtres;
	      Xtres = addll(-a,-b);
	      if (overflow)
		{ 
		  s4_neg_int[3]=Xtres;
		  return make_integer(s4_neg_int);}
	      else
		{ small_neg_int[2]=Xtres;
		  return make_integer(small_neg_int);}
	    }}}
}


object
fminus(a,b)
     int a,b;
{ int z ;
  int x;
  if (a >= 0)
   { if (b >= 0)
       { x = a - b;
	 return make_fixnum(x);
       }
     else
       { /* b neg */
	 x = a - b;
	 if (x==0) return small_fixnum(0);
	 small_pos_int[2]=x;
	 return make_integer(small_pos_int);
       }}
  else
    { /* a neg */
      if (b <= 0)
	{ x = a - b;
	  return make_fixnum(x);}
      else
	{  /* b positive */
	    { unsigned plong Xtx,Xty,overflow,Xtres;
	      unsigned plong t[4];
	      Xtres = addll(-a,b);
	      if (overflow)
		{ s4_neg_int[3]=Xtres;
		  return make_integer(s4_neg_int);}
	      else
		{ small_neg_int[2]=Xtres;
		  return make_integer(small_neg_int);}
	    }}}
}
