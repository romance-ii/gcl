
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

#include "config.h"
#include "genpari.h"
#include "arith.h"

int dblremsl3(x,y,z)
     int x,y,z;
{ unsigned plong h;
  unsigned plong w;
  if (x>= 0 && y>= 0 && z>0)
     {w = mulul(x,y,h);
      divul(x,z,h);
      return h;}
  else
    { plong save = avma;
      GEN yy = stoi(y);
      GEN xx = stoi(x);
      GEN ans = mulii(xx,yy);
      ans = dvmdii(ans,stoi(z),-1);
      avma = save;
      if (signe(ans) > 0) return ans[2];
      if (signe(ans) < 0) return -ans[2];
      return 0;}
}
  

