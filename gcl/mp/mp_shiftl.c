
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

typedef unsigned plong ulong;
ulong hiremainder,overflow;

int shiftl(x,y)
     ulong x,y;
{
  hiremainder=x>>(32-y);return (x<<y);
}

int shiftlr(x,y)
     ulong x,y;
{
  hiremainder=x<<(32-y);return (x>>y);
}
