
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


double
__adddf3 (a, b)
     double a, b;
{
  return a + b;
}

double
__floatsidf (a)
     int a;
{
  return (double) a;
}
#ifndef __GO32__
int
__fixdfsi (a)
     double a;
{
  return (int) a;
}
#endif

double
__muldf3 (a, b)
     double a, b;
{
  return a * b;
}


