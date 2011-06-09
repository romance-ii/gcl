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



#ifdef HAVE_BFD_BOOLEAN
#define MY_BFD_BOOLEAN bfd_boolean
#define MY_BFD_FALSE FALSE
#define MY_BFD_TRUE TRUE
#else
#define MY_BFD_BOOLEAN int
#define MY_BFD_FALSE 0
#define MY_BFD_TRUE 1
#endif

#ifdef IN_NUM_CO
#ifdef HAVE_ISNORMAL
#define ISNORMAL(a) isnormal(a)
#else
#ifdef HAVE_IEEEFP
#define ISNORMAL(a) (fpclass(a)>=FP_NZERO)
#else
#define ISNORMAL(a) ((sizeof (a) == sizeof (float)) ? \
       gcl_isnormal_float(a) : \
       gcl_isnormal_double(a))
#endif
#endif
#endif

#ifdef NEED_ISFINITE
#ifdef HAVE_ISFINITE
#define ISFINITE(a) isfinite(a)
#else
#ifdef HAVE_FINITE
#define ISFINITE(a) finite(a)
#else
#error "No isfinite found"
#endif
#endif
#endif

#ifdef IN_NUM_CO
#ifdef HAVE_VALUES_H
#endif
#ifdef HAVE_FLOAT_H
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




