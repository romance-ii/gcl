/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
*/


/* whether to use prototypes or not */
#ifdef __STDC__
#define P__(x) x
#else
#define P__(x)
#endif



#ifdef __GNUC__
#ifndef alloca
#define alloca __builtin_alloca
#endif
#endif

#ifdef UNIX
#define	isalphanum(x)	isalnum(x)
#endif

#ifdef IN_MAIN
#define EXTER
#else
#define EXTER extern 
#endif

#if defined(GMP) || defined(NEED_MP_H)
#endif



