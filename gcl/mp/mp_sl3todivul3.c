
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

#define ulong unsigned plong
#define shift1BitRight(h,l) \
  (l = l >> 1 , (h & 1 ? l = l | (1 << (WORD_SIZE -1))   : 0),  h = h >> 1)

#define shift2BitRight(h,l) \
  (l = l >> 2 , (h & 3 ? l = l | ((h & 3) << (WORD_SIZE -2))   : 0),  h = h >> 2)

#define addll(x,y) \
       (Xtx=(x),Xty=(y), Xtres = Xtx+Xty, \
	     (Xtres < Xtx ? overflow = 1 :0), Xtres)

/* the following defines divul3 in terms of divsl3.
 */   
   

#define WORD_SIZE 32
divul3(x, y, hi)
	ulong           x, y, *hi;
{
	ulong           q = 0,Xtx,Xty,Xtres,addy,overflow;
	ulong           h = *hi, l = x, hibit;
	ulong           dd;
	/* if (y<=h) printf("error: the quotient will be more than 32 bits"); */
	
	if ((int) y > 0) {
		dd = y >> 1;
		if (dd <= h) {
			unsigned int    ll = l;
			shift1BitRight(h, ll);
			q = divsl3(ll, y, &h);
			h = h + h + (l & 1);
			q = q + q;
			if (h >= y) {
				q++;
				h -= y;
			}
			*hi = h;
			return q;
		} else {
			return divsl3(x, y, hi);
		}
	}
	/* negative */
	{
		ulong           ll;
		ulong           rem;
		ll = l;
		shift2BitRight(h, ll);
		dd = y >> 1;
		q = divsl3(ll, dd, &h);
		rem = h + h;
		overflow = 0;
		rem = addll(rem, rem);
		rem += l & 3;
		q = q + q;
		addy = 0;
		if (y & 1) {
		  if (overflow==0 && rem < q)
		    { addy = 1;
		      rem = addll(rem, y);
		      if (overflow==0 && rem < q)
			{ addy = 2;
			  rem +=y;
			}
		    }
   		  if (q > rem ) overflow = 0;
		  rem -= q;
		}
		if (addy > 0)
		  { q -= addy; }
		else
		  { if (overflow || (rem >= y))
		      { rem -= y;
			q++;
		      }
		  }
			
		*hi = rem;
		return q;
	}
}


/*
 ;;- Local variables:
 ;;- mode:c
 ;;- version-control:t
 ;;- End: 

 */
