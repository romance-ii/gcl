/* mpz_mul -- Multiply two integers.

Copyright (C) 1991, 1993, 1994, 1996, 2000 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#include <stdio.h> /* for NULL */
#include "gmp.h"
#include "gmp-impl.h"
#ifdef BERKELEY_MP
#include "mp.h"
#endif

#ifndef BERKELEY_MP
void
#if __STDC__
mpz_mul (mpz_ptr w, mpz_srcptr u, mpz_srcptr v)
#else
mpz_mul (w, u, v)
     mpz_ptr w;
     mpz_srcptr u;
     mpz_srcptr v;
#endif
#else /* BERKELEY_MP */
void
#if __STDC__
mult (mpz_srcptr u, mpz_srcptr v, mpz_ptr w)
#else
mult (u, v, w)
     mpz_srcptr u;
     mpz_srcptr v;
     mpz_ptr w;
#endif
#endif /* BERKELEY_MP */
{
  mp_size_t usize = u->_mp_size;
  mp_size_t vsize = v->_mp_size;
  mp_size_t wsize;
  mp_size_t sign_product;
  mp_ptr up, vp;
  mp_ptr wp;
  mp_ptr free_me = NULL;
  size_t free_me_size;
  mp_limb_t cy_limb;
  TMP_DECL (marker);

  TMP_MARK (marker);
  sign_product = usize ^ vsize;
  usize = ABS (usize);
  vsize = ABS (vsize);

  if (usize < vsize)
    {
      /* Swap U and V.  */
      {const __mpz_struct *t = u; u = v; v = t;}
      {mp_size_t t = usize; usize = vsize; vsize = t;}
    }

  /* we keep referring to w->_mp_d or u->_mp_d instead
     of 'wp = w->_mp_d' until after any 'malloc' allocations are done.
     The reason is that if there is an intervening function call
     which causes a 'malloc' then the value of w->_mp_d may change
     during a garbage collection.

     Note that if you have references which do NOT span function calls
     then the c compiler knows how to eliminate multiple memory
     references.   So the cost is minimal.

  */
     
  /* Ensure W has space enough to store the result.  */
  wsize = usize + vsize;
  if (w->_mp_alloc < wsize)
    {
      if (w->_mp_d == u->_mp_d || w->_mp_d == v->_mp_d)
	{
	  free_me = w->_mp_d;
	  free_me_size = w->_mp_alloc;
	}
      else
	(*_mp_free_func) (w->_mp_d, w->_mp_alloc * BYTES_PER_MP_LIMB);

      w->_mp_d  = (mp_ptr) (*_mp_allocate_func) (wsize * BYTES_PER_MP_LIMB);
      w->_mp_alloc = wsize;  /* keep consistent state in case allocate_func
				looks at all mpz_t's  (eg gcl during garbage
				collection)*/
      /* safe to set these now */
      up = u->_mp_d;
      vp = v->_mp_d;
    }
  else
    {
      /* Make U and V not overlap with W.  */
      up = u->_mp_d;
      vp = v->_mp_d;
      if (w->_mp_d == up)
	{
	  /* W and U are identical.  Allocate temporary space for U.  */
	  up = (mp_ptr) TMP_ALLOC (usize * BYTES_PER_MP_LIMB);
	  /* Is V identical too?  Keep it identical with U.  */
	  if (w->_mp_d == vp)
	    vp = up;
	  /* Copy to the temporary space.  */
	  MPN_COPY (up, w->_mp_d, usize);
	}
      else if (w->_mp_d == vp)
	{
	  /* W and V are identical.  Allocate temporary space for V.  */
	  vp = (mp_ptr) TMP_ALLOC (vsize * BYTES_PER_MP_LIMB);
	  /* Copy to the temporary space.  */
	  MPN_COPY (vp, w->_mp_d, vsize);
	}
    }

  if (vsize == 0)
    {
      wsize = 0;
    }
  else
    {
      cy_limb = mpn_mul (w->_mp_d, up, usize, vp, vsize);
      wsize = usize + vsize;
      wsize -= cy_limb == 0;
    }

  w->_mp_size = sign_product < 0 ? -wsize : wsize;
  if (free_me != NULL)
    (*_mp_free_func) (free_me, free_me_size * BYTES_PER_MP_LIMB);
  TMP_FREE (marker);
}
