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
	num_co.c
	IMPLEMENTATION-DEPENDENT

	This file contains those functions
	that know the representation of floating-point numbers.
*/	
#define IN_NUM_CO

#define NEED_MP_H

#include "include.h"
#include "num_include.h"

object plus_half, minus_half;

#ifdef CONVEX
#define VAX
#endif

#ifdef VAX
/*
	radix = 2

	SEEEEEEEEHHHHHHH	The redundant most significant fraction bit
	HHHHHHHHHHHHHHHH	is not expressed.
	LLLLLLLLLLLLLLLL
	LLLLLLLLLLLLLLLL
*/
#endif
#ifdef IBMRT








#endif
#ifdef IEEEFLOAT
#ifdef NS32K







#else
/*
	radix = 2

	SEEEEEEEEEEEHHHHHHHHHHHHHHHHHHHH	The redundant most
	LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL	significant fraction bit
						is not expressed.
*/
#endif
#endif
#ifdef MV






#endif
#ifdef S3000
/*
	radix = 16

	SEEEEEEEHHHHHHHHHHHHHHHHHHHHHHHH
	LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
*/
#endif
void
integer_decode_double(double d, int *hp, int *lp, int *ep, int *sp)
{
	int h, l;

	if (d == 0.0) {
		*hp = *lp = 0;
		*ep = 0;
		*sp = 1;
		return;
	}
#ifdef NS32K


#else
	h = *((int *)(&d) + HIND);
	l = *((int *)(&d) + LIND);
#endif
#ifdef VAX
	*ep = ((h >> 7) & 0xff) - 128 - 56;
	h = ((h >> 15) & 0x1fffe) | (((h & 0x7f) | 0x80) << 17);
	l = ((l >> 16) & 0xffff) | (l << 16);
	/* is this right!!!! I don't believe it --wfs */
	h = h >> 1;
#endif
#ifdef IEEEFLOAT
	if (ISNORMAL(d)) {
	  *ep = ((h & 0x7ff00000) >> 20) - 1022 - 53;
	  h = ((h & 0x000fffff) | 0x00100000);
	} else {
	  *ep = ((h & 0x7fe00000) >> 20) - 1022 - 53 + 1;
	  h = (h & 0x001fffff);
	}
#endif
#ifdef S3000
	*ep = ((h & 0x7f000000) >> 24) - 64 - 14;
	h = (h & 0x00ffffff);
#endif
	if (32-BIG_RADIX)
	  /* shift for making bignum */
	  { h = h << (32-BIG_RADIX) ; 
	    h |= ((l & (-1 << (32-BIG_RADIX))) >> (32-BIG_RADIX));
	    l &=  ~(-1 << (32-BIG_RADIX));
	  }
	*hp = h;
	*lp = l;
	*sp = (d > 0.0 ? 1 : -1);
}

#ifdef VAX
/*
	radix = 2

	SEEEEEEEEMMMMMMM	The redundant most significant fraction bit
	MMMMMMMMMMMMMMMM	is not expressed.
*/
#endif
#ifdef IBMRT






#endif
#ifdef IEEEFLOAT
/*
	radix = 2

	SEEEEEEEEMMMMMMMMMMMMMMMMMMMMMMM	The redundant most
						significant fraction bit
						is not expressed.
*/
#endif
#ifdef MV





#endif
#ifdef S3000
/*
	radix = 16

	SEEEEEEEMMMMMMMMMMMMMMMMMMMMMMMM
*/
#endif
void
integer_decode_float(double d, int *mp, int *ep, int *sp)
{
	float f;
	int m;

	f = d;
	if (f == 0.0) {
		*mp = 0;
		*ep = 0;
		*sp = 1;
		return;
	}
	m = *(int *)(&f);
#ifdef VAX
	*ep = ((m >> 7) & 0xff) - 128 - 24;
	*mp = ((m >> 16) & 0xffff) | (((m & 0x7f) | 0x80) << 16);
#endif
#ifdef IBMRT


#endif
#ifdef IEEEFLOAT
	if (ISNORMAL(f)) {
	  *ep = ((m & 0x7f800000) >> 23) - 126 - 24;
	  *mp = (m & 0x007fffff) | 0x00800000;
	} else {
	  *ep = ((m & 0x7f000000) >> 23) - 126 - 24 + 1;
	  *mp = m & 0x00ffffff;
	}
#endif
#ifdef MV


#endif
#ifdef S3000
	*ep = ((m & 0x7f000000) >> 24) - 64 - 6;
	*mp = m & 0x00ffffff;
#endif
	*sp = (f > 0.0 ? 1 : -1);
}

int
double_exponent(double d)
{
	if (d == 0.0)
		return(0);
#ifdef VAX
	return(((*(int *)(&d) >> 7) & 0xff) - 128);
#endif
#ifdef IBMRT

#endif
#ifdef IEEEFLOAT
#ifdef NS32K

#else
	return((((*((int *)(&d) + HIND)) & 0x7ff00000) >> 20) - 1022);
#endif
#endif
#ifdef MV

#endif
#ifdef S3000
	return(((*(int *)(&d) & 0x7f000000) >> 24) - 64);
#endif
}

double
set_exponent(double d, int e)
{
	double dummy;

	if (d == 0.0)
		return(0.0);
	*((int *)(&d) + HIND)
#ifdef VAX
	= *(int *)(&d) & 0xffff807f | ((e + 128) << 7) & 0x7f80;
#endif
#ifdef IBMRT

#endif
#ifdef IEEEFLOAT
#ifdef NS32K

#else
	= (*((int *)(&d) + HIND) & 0x800fffff) | (((e + 1022) << 20) & 0x7ff00000);
#endif
#endif
#ifdef MV

#endif
#ifdef S3000
	= *(int *)(&d) & 0x80ffffff | ((e + 64) << 24) & 0x7f000000;
#endif
	dummy = d*d;
	return(d);
}


object
double_to_integer(double d)
{
	int h, l, e, s;
	object x;
	object shift_integer(object x, int w);
	vs_mark;

	if (d == 0.0)
		return(small_fixnum(0));
	integer_decode_double(d, &h, &l, &e, &s);
#ifdef VAX
	if (e <= -BIG_RADIX) {
		h >>= (-e) - BIG_RADIX;
#endif
#ifdef IBMRT


#endif
#ifdef IEEEFLOAT
	if (e <= -BIG_RADIX) {
		e = (-e) - BIG_RADIX;
		if (e >= BIG_RADIX)
			return(small_fixnum(0));
		h >>= e;
#endif
#ifdef MV


#endif
#ifdef S3000
	if (e <= -8) {
		h >>= 4*(-e) - BIG_RADIX;
#endif
		return(make_fixnum(s*h));
	}
	if (h != 0)
		x = bignum2(h, l);
	else
		x = make_fixnum(l);
	vs_push(x);
#ifdef VAX
	x = shift_integer(x, e);
#endif
#ifdef IBMRT

#endif
#ifdef IEEEFLOAT
	x = shift_integer(x, e);
#endif
#ifdef MV

#endif
#ifdef S3000
	x = shift_integer(x, 4*e);
#endif
	if (s < 0) {
		vs_push(x);
		x = number_negate(x);
	}
	vs_reset;
	return(x);
}

object
num_remainder(object x, object y, object q)
{
	object z;

	z = number_times(q, y);
	vs_push(z);
	z = number_minus(x, z);
	vs_popp;
	return(z);
}

/* Coerce X to single-float if one arg,
   otherwise coerce to same float type as second arg */

void
Lfloat(void)
{
	double	d;
	int narg;
	object	x;
	enum type t=t_other;

	narg = vs_top - vs_base;
	if (narg < 1)
		too_few_arguments();
	else if (narg > 2)
		too_many_arguments();
	if (narg == 2) {
		check_type_float(&vs_base[1]);
		t = type_of(vs_base[1]);
	}
	x = vs_base[0];
	switch (type_of(x)) {
	case t_fixnum:
		if (narg > 1 && t == t_shortfloat)
		  x = make_shortfloat((shortfloat)(fix(x)));
		else
		  x = make_longfloat((double)(fix(x)));
		break;

	case t_bignum:
	case t_ratio:
		d = number_to_double(x);
		if (narg > 1 && t == t_shortfloat)
		  x = make_shortfloat((shortfloat)d);
		else
		  x = make_longfloat(d);		
		break;

	case t_shortfloat:
		if (narg > 1 && t == t_shortfloat);
		  else
		    x = make_longfloat((double)(sf(x)));
		break;

	case t_longfloat:
		if (narg > 1 && t == t_shortfloat)
			x = make_shortfloat((shortfloat)(lf(x)));
		break;

	default:
		FEwrong_type_argument(TSor_rational_float, x);
	}
	vs_base = vs_top;
	vs_push(x);
}

void
Lnumerator(void)
{
	check_arg(1);
	check_type_rational(&vs_base[0]);
	if (type_of(vs_base[0]) == t_ratio)
		vs_base[0] = vs_base[0]->rat.rat_num;
}

void
Ldenominator(void)
{
	check_arg(1);
	check_type_rational(&vs_base[0]);
	if (type_of(vs_base[0]) == t_ratio)
		vs_base[0] = vs_base[0]->rat.rat_den;
	else
		vs_base[0] = small_fixnum(1);
}

void
Lfloor(void)
{
	object x, y, q, q1;
	double d;
	int n;
	object one_minus(object x);

	n = vs_top - vs_base;
	if (n == 0)
		too_few_arguments();
	if (n > 1)
		goto TWO_ARG;
	x = vs_base[0];
	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
		vs_push(small_fixnum(0));
		return;

	case t_ratio:
		q = x;
		y = small_fixnum(1);
		goto RATIO;

	case t_shortfloat:
		d = (double)(sf(x));
		q1 = double_to_integer(d);
		d -= number_to_double(q1);
		if (sf(x) < 0.0 && d != 0.0) {
			vs_push(q1);
			q1 = one_minus(q1);
			d += 1.0;
		}
		vs_base = vs_top;
		vs_push(q1);
		vs_push(make_shortfloat((shortfloat)d));
		return;

	case t_longfloat:
		d = lf(x);
		q1 = double_to_integer(d);
		d -= number_to_double(q1);
		if (lf(x) < 0.0 && d != 0.0) {
			vs_push(q1);
			q1 = one_minus(q1);
			d += 1.0;
		}
		vs_base = vs_top;
		vs_push(q1);
		vs_push(make_longfloat(d));
		return;

	default:
		FEwrong_type_argument(TSor_rational_float, x);
	}

TWO_ARG:
	if (n > 2)
		too_many_arguments();
	x = vs_base[0];
	y = vs_base[1];
	if ((type_of(x) == t_fixnum || type_of(x) == t_bignum) &&
	    (type_of(y) == t_fixnum || type_of(y) == t_bignum)) {
		vs_base = vs_top;
		if (number_zerop(x)) {
			vs_push(small_fixnum(0));
			vs_push(small_fixnum(0));
			return;
		}
		vs_push(Cnil);
		vs_push(Cnil);
		integer_quotient_remainder_1(x, y, &vs_base[0], &vs_base[1]);
		if (number_minusp(x) ? number_plusp(y) : number_minusp(y)) {
			if (number_zerop(vs_base[1]))
				return;
			vs_base[0] = one_minus(vs_base[0]);
			vs_base[1] = number_plus(vs_base[1], y);
		}
		return;
	}
	check_type_or_rational_float(&vs_base[0]);
	check_type_or_rational_float(&vs_base[1]);
	q = number_divide(x, y);
	vs_push(q);
	switch (type_of(q)) {
	case t_fixnum:
	case t_bignum:
		vs_base = vs_top;
		vs_push(q);
		vs_push(small_fixnum(0));
		break;
	
	case t_ratio:
	RATIO:
		q1 = integer_divide1(q->rat.rat_num, q->rat.rat_den);
		if (number_minusp(q)) {
			vs_push(q1);
			q1 = one_minus(q1);
		} else
			q1 = q1;
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;

	case t_shortfloat:
	case t_longfloat:
		q1 = double_to_integer(number_to_double(q));
		if (number_minusp(q) && number_compare(q, q1)) {
			vs_push(q1);
			q1 = one_minus(q1);
		} else
			q1 = q1;
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;
	default:
	  break;
	}
}

void
Lceiling(void)
{
	object x, y, q, q1;
	double d;
	int n;
	object one_plus(object x);

	n = vs_top - vs_base;
	if (n == 0)
		too_few_arguments();
	if (n > 1)
		goto TWO_ARG;
	x = vs_base[0];
	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
		vs_push(small_fixnum(0));
		return;

	case t_ratio:
		q = x;
		y = small_fixnum(1);
		goto RATIO;		

	case t_shortfloat:
		d = (double)(sf(x));
		q1 = double_to_integer(d);
		d -= number_to_double(q1);
		if (sf(x) > 0.0 && d != 0.0) {
			vs_push(q1);
			q1 = one_plus(q1);
			d -= 1.0;
		}
		vs_base = vs_top;
		vs_push(q1);
		vs_push(make_shortfloat((shortfloat)d));
		return;

	case t_longfloat:
		d = lf(x);
		q1 = double_to_integer(d);
		d -= number_to_double(q1);
		if (lf(x) > 0.0 && d != 0.0) {
			vs_push(q1);
			q1 = one_plus(q1);
			d -= 1.0;
		}
		vs_base = vs_top;
		vs_push(q1);
		vs_push(make_longfloat(d));
		return;

	default:
		FEwrong_type_argument(TSor_rational_float, x);
	}

TWO_ARG:
	if (n > 2)
		too_many_arguments();
	x = vs_base[0];
	y = vs_base[1];
	if ((type_of(x) == t_fixnum || type_of(x) == t_bignum) &&
	    (type_of(y) == t_fixnum || type_of(y) == t_bignum)) {
		vs_base = vs_top;
		if (number_zerop(x)) {
			vs_push(small_fixnum(0));
			vs_push(small_fixnum(0));
			return;
		}
		vs_push(Cnil);
		vs_push(Cnil);
		integer_quotient_remainder_1(x, y, &vs_base[0], &vs_base[1]);
		if (number_plusp(x) ? number_plusp(y) : number_minusp(y)) {
			if (number_zerop(vs_base[1]))
				return;
			vs_base[0] = one_plus(vs_base[0]);
			vs_base[1] = number_minus(vs_base[1], y);
		}
		return;
	}
	check_type_or_rational_float(&vs_base[0]);
	check_type_or_rational_float(&vs_base[1]);
	q = number_divide(x, y);
	vs_push(q);
	switch (type_of(q)) {
	case t_fixnum:
	case t_bignum:
		vs_base = vs_top;
		vs_push(q);
		vs_push(small_fixnum(0));
		break;
	
	case t_ratio:
	RATIO:
		q1 = integer_divide1(q->rat.rat_num, q->rat.rat_den);
		if (number_plusp(q)) {
			vs_push(q1);
			q1 = one_plus(q1);
		} else
			q1 = q1;
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;

	case t_shortfloat:
	case t_longfloat:
		q1 = double_to_integer(number_to_double(q));
		if (number_plusp(q) && number_compare(q, q1)) {
			vs_push(q1);
			q1 = one_plus(q1);
		} else
			q1 = q1;
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;
	default:
	  break;
	}
}

void
Ltruncate(void)
{
	object x, y, q, q1;
	int n;

	n = vs_top - vs_base;
	if (n == 0)
		too_few_arguments();
	if (n > 1)
		goto TWO_ARG;
	x = vs_base[0];
	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
		vs_push(small_fixnum(0));
		return;

	case t_ratio:
		q1 = integer_divide1(x->rat.rat_num, x->rat.rat_den);
		vs_base = vs_top;
		vs_push(q1);
		vs_push(number_minus(x, q1));
		return;

	case t_shortfloat:
		q1 = double_to_integer((double)(sf(x)));
		vs_base = vs_top;
		vs_push(q1);
		vs_push(number_minus(x, q1));
		return;

	case t_longfloat:
		q1 = double_to_integer(lf(x));
		vs_base = vs_top;
		vs_push(q1);
		vs_push(number_minus(x, q1));
		return;

	default:
		FEwrong_type_argument(TSor_rational_float, x);
	}

TWO_ARG:
	if (n > 2)
		too_many_arguments();
	x = vs_base[0];
	y = vs_base[1];
	if ((type_of(x) == t_fixnum || type_of(x) == t_bignum) &&
	    (type_of(y) == t_fixnum || type_of(y) == t_bignum)) {
		integer_quotient_remainder_1(x, y, &vs_base[0], &vs_base[1]);
		return;
	}
	check_type_or_rational_float(&vs_base[0]);
	check_type_or_rational_float(&vs_base[1]);
	q = number_divide(x, y);
	vs_push(q);
	switch (type_of(q)) {
	case t_fixnum:
	case t_bignum:
		vs_base = vs_top;
		vs_push(q);
		vs_push(small_fixnum(0));
		break;
	
	case t_ratio:
		q1 = integer_divide1(q->rat.rat_num, q->rat.rat_den);
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;

	case t_shortfloat:
	case t_longfloat:
		q1 = double_to_integer(number_to_double(q));
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;
	default:
	  break;
	}
}

void
Lround(void)
{
	object x, y, q, q1, r;
	double d;
	int n, c;
	object one_plus(object x), one_minus(object x);

	n = vs_top - vs_base;
	if (n == 0)
		too_few_arguments();
	if (n > 1)
		goto TWO_ARG;
	x = vs_base[0];
	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
		vs_push(small_fixnum(0));
		return;

	case t_ratio:
		q = x;
		y = small_fixnum(1);
		goto RATIO;

	case t_shortfloat:
		d = (double)(sf(x));
		if (d >= 0.0)
			q = double_to_integer(d + 0.5);
		else
			q = double_to_integer(d - 0.5);
		d -= number_to_double(q);
		if (d == 0.5 && number_oddp(q)) {
			vs_push(q);
			q = one_plus(q);
			d = -0.5;
		}
		if (d == -0.5 && number_oddp(q)) {
			vs_push(q);
			q = one_minus(q);
			d = 0.5;
		}
		vs_base = vs_top;
		vs_push(q);
		vs_push(make_shortfloat((shortfloat)d));
		return;

	case t_longfloat:
		d = lf(x);
		if (d >= 0.0)
			q = double_to_integer(d + 0.5);
		else
			q = double_to_integer(d - 0.5);
		d -= number_to_double(q);
		if (d == 0.5 && number_oddp(q)) {
			vs_push(q);
			q = one_plus(q);
			d = -0.5;
		}
		if (d == -0.5 && number_oddp(q)) {
			vs_push(q);
			q = one_minus(q);
			d = 0.5;
		}
		vs_base = vs_top;
		vs_push(q);
		vs_push(make_longfloat(d));
		return;

	default:
		FEwrong_type_argument(TSor_rational_float, x);
	}

TWO_ARG:
	if (n > 2)
		too_many_arguments();
	x = vs_base[0];
	y = vs_base[1];
	check_type_or_rational_float(&vs_base[0]);
	check_type_or_rational_float(&vs_base[1]);
	q = number_divide(x, y);
	vs_push(q);
	switch (type_of(q)) {
	case t_fixnum:
	case t_bignum:
		vs_base = vs_top;
		vs_push(q);
		vs_push(small_fixnum(0));
		break;
	
	case t_ratio:
	RATIO:
		q1 = integer_divide1(q->rat.rat_num, q->rat.rat_den);
		vs_push(q1);
		r = number_minus(q, q1);
		vs_push(r);
		if ((c = number_compare(r, plus_half)) > 0 ||
		    (c == 0 && number_oddp(q1)))
			q1 = one_plus(q1);
		if ((c = number_compare(r, minus_half)) < 0 ||
		    (c == 0 && number_oddp(q1)))
			q1 = one_minus(q1);
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;

	case t_shortfloat:
	case t_longfloat:
		d = number_to_double(q);
		if (d >= 0.0)
			q1 = double_to_integer(d + 0.5);
		else
			q1 = double_to_integer(d - 0.5);
		d -= number_to_double(q1);
		if (d == 0.5 && number_oddp(q1)) {
			vs_push(q1);
			q1 = one_plus(q1);
		}
		if (d == -0.5 && number_oddp(q1)) {
			vs_push(q1);
			q1 = one_minus(q1);
		}
		vs_base = vs_top;
		vs_push(q1);
		vs_push(num_remainder(x, y, q1));
		return;
	default:
	  break;
	}
}

void
Lmod(void)
{
	check_arg(2);
	Lfloor();
	vs_base++;
}

void
Lrem(void)
{
	check_arg(2);
	Ltruncate();
	vs_base++;
}


void
Ldecode_float(void)
{
	object x;
	double d;
	int e, s;

	check_arg(1);
	check_type_float(&vs_base[0]);
	x = vs_base[0];
	if (type_of(x) == t_shortfloat)
		d = sf(x);
	else
		d = lf(x);
	if (d >= 0.0)
		s = 1;
	else {
		d = -d;
		s = -1;
	}
	e = double_exponent(d);
	d = set_exponent(d, 0);
	vs_top = vs_base;
	if (type_of(x) == t_shortfloat) {
		vs_push(make_shortfloat((shortfloat)d));
		vs_push(make_fixnum(e));
		vs_push(make_shortfloat((shortfloat)s));
	} else {
		vs_push(make_longfloat(d));
		vs_push(make_fixnum(e));
		vs_push(make_longfloat((double)s));
	}
}

void
Lscale_float(void)
{
	object x;
	double d;
	int e, k=0;

	check_arg(2);
	check_type_float(&vs_base[0]);
	x = vs_base[0];
	if (type_of(vs_base[1]) == t_fixnum)
		k = fix(vs_base[1]);
	else
		FEerror("~S is an illegal exponent.", 1, vs_base[1]);
	if (type_of(x) == t_shortfloat)
		d = sf(x);
	else
		d = lf(x);
	e = double_exponent(d) + k;
#ifdef VAX
	if (e <= -128 || e >= 128)
#endif
#ifdef IBMRT

#endif
#ifdef IEEEFLOAT
	if ((type_of(x) == t_shortfloat && (e <= -126 || e >= 130)) ||
	    (type_of(x) == t_longfloat && (e <= -1022 || e >= 1026)))
#endif
#ifdef MV

#endif
#ifdef S3000
	if (e < -64 || e >= 64)
#endif
		FEerror("~S is an illegal exponent.", 1, vs_base[1]);
	d = set_exponent(d, e);
	vs_popp;
	if (type_of(x) == t_shortfloat)
		vs_base[0] = make_shortfloat((shortfloat)d);
	else
		vs_base[0] = make_longfloat(d);
}

void
Lfloat_radix(void)
{
	check_arg(1);
	check_type_float(&vs_base[0]);
#ifdef VAX
	vs_base[0] = small_fixnum(2);
#endif
#ifdef IBMRT

#endif
#ifdef IEEEFLOAT
	vs_base[0] = small_fixnum(2);
#endif
#ifdef MV

#endif
#ifdef S3000
	vs_base[0] = small_fixnum(16);
#endif
}

void
Lfloat_sign(void)
{
	object x;
	int narg;
	double d, f;

	narg = vs_top - vs_base;
	if (narg < 1)
		too_few_arguments();
	else if (narg > 2)
		too_many_arguments();
	check_type_float(&vs_base[0]);
	x = vs_base[0];
	if (type_of(x) == t_shortfloat)
		d = sf(x);
	else
		d = lf(x);
	if (narg == 1)
		f = 1.0;
	else {
		check_type_float(&vs_base[1]);
		x = vs_base[1];
		if (type_of(x) == t_shortfloat)
			f = sf(x);
		else
			f = lf(x);
		if (f < 0.0)
			f = -f;
	}
	if (d < 0.0)
		f = -f;
	vs_top = vs_base;
	if (type_of(x) == t_shortfloat)
		vs_push(make_shortfloat((shortfloat)f));
	else
		vs_push(make_longfloat(f));
}

void
Lfloat_digits(void)
{
	check_arg(1);
	check_type_float(&vs_base[0]);
	if (type_of(vs_base[0]) == t_shortfloat)
		vs_base[0] = small_fixnum(24);
	else
		vs_base[0] = small_fixnum(53);
}

void
Lfloat_precision(void)
{
	object x;

	check_arg(1);
	check_type_float(&vs_base[0]);
	x = vs_base[0];
	if (type_of(x) == t_shortfloat)
		if (sf(x) == 0.0)
			vs_base[0] = small_fixnum(0);
		else
			vs_base[0] = small_fixnum(24);
	else
		if (lf(x) == 0.0)
			vs_base[0] = small_fixnum(0);
		else
#ifdef VAX
			vs_base[0] = small_fixnum(53);
#endif
#ifdef IBMRT

#endif
#ifdef IEEEFLOAT
			vs_base[0] = small_fixnum(53);
#endif
#ifdef MV

#endif
#ifdef S3000
			vs_base[0] = small_fixnum(53);
#endif
}

void
Linteger_decode_float(void)
{
	object x;
	int h, l, e, s;

	check_arg(1);
	check_type_float(&vs_base[0]);
	x = vs_base[0];
	vs_base = vs_top;
	if (type_of(x) == t_longfloat) {
		integer_decode_double(lf(x), &h, &l, &e, &s);
		if (h != 0)
			vs_push(bignum2(h, l));
		else
			vs_push(make_fixnum(l));
		vs_push(make_fixnum(e));
		vs_push(make_fixnum(s));
	} else {
		integer_decode_float((double)(sf(x)), &h, &e, &s);
		vs_push(make_fixnum(h));
		vs_push(make_fixnum(e));
		vs_push(make_fixnum(s));
	}
}

void
Lcomplex(void)
{
	object	r, i;
	int narg;

	narg = vs_top - vs_base;
	if (narg < 1)
		too_few_arguments();
	if (narg > 2)
		too_many_arguments();
	check_type_or_rational_float(&vs_base[0]);
	r = vs_base[0];
	if (narg == 1)
		i = small_fixnum(0);
	else {
		check_type_or_rational_float(&vs_base[1]);
		i = vs_base[1];
	}
	vs_top = vs_base;
	vs_push(make_complex(r, i));
}

void
Lrealpart(void)
{
	object	x;

	check_arg(1);
	check_type_number(&vs_base[0]);
	x = vs_base[0];
	if (type_of(x) == t_complex)
		vs_base[0] = x->cmp.cmp_real;
}

void
Limagpart(void)
{
	object x;

	check_arg(1);
	check_type_number(&vs_base[0]);
	x = vs_base[0];
	switch (type_of(x)) {
	case t_fixnum:
	case t_bignum:
	case t_ratio:
		vs_base[0] = small_fixnum(0);
		break;
	case t_shortfloat:
		vs_base[0] = shortfloat_zero;
		break;
	case t_longfloat:
		vs_base[0] = longfloat_zero;
		break;
	case t_complex:
		vs_base[0] = x->cmp.cmp_imag;
		break;
	default:
	  break;
	}
}

static float sf1,sf2;
static int sf_eql(void)
{return(sf1==sf2);}



int lf_eqlp(double *p, double *q);
#define LF_EQL(a,b) (lf1=a,lf2=b,lf_eqlp(&lf1,&lf2))
#define SF_EQL(a,b) (sf1=a,sf2=b,sf_eql())

void  _assure_in_memory (void *p);

#define FMEM(f) _assure_in_memory(&f)

#ifdef IEEEFLOAT
/* from ieee754.h */

typedef union {
  float f;
  
  /* This is the IEEE 754 single-precision format.  */
  struct float_bits
  {
#ifndef LITTLE_END
    unsigned int negative:1;
    unsigned int exponent:8;
    unsigned int mantissa:23;
#else				/* Big endian.  */
    unsigned int mantissa:23;
    unsigned int exponent:8;
    unsigned int negative:1;
#endif				/* Little endian.  */
  } ieee;
} IEEE_float;
  
typedef union  {

  double d;
  
  /* This is the IEEE 754 double-precision format.  */
  struct double_bits
  {
#ifndef LITTLE_END
    unsigned int negative:1;
    unsigned int exponent:11;
    /* Together these comprise the mantissa.  */
    unsigned int mantissa0:20;
    unsigned int mantissa1:32;
#else				/* Big endian.  */
    /* # if	__FLOAT_WORD_ORDER == BIG_ENDIAN */
    /*     unsigned int mantissa0:20; */
    /*     unsigned int exponent:11; */
    /*     unsigned int negative:1; */
    /*     unsigned int mantissa1:32; */
    /* # else */
    /* Together these comprise the mantissa.  */
    unsigned int mantissa1:32;
    unsigned int mantissa0:20;
    unsigned int exponent:11;
    unsigned int negative:1;
    /* # endif */
#endif				/* Little endian.  */
  } ieee;
} IEEE_double;
  

#endif



void
init_num_co(void)
{
	float smallest_float, smallest_norm_float, biggest_float;
	double smallest_double, smallest_norm_double, biggest_double;
	float float_epsilon, float_negative_epsilon;
	double double_epsilon, double_negative_epsilon;
	double lf1,lf2;



#ifdef VAX
	l[0] = 0x80;
	l[1] = 0;
	smallest_float = *(float *)l;
	smallest_double = *(double *)l;
#endif

#ifdef IEEEFLOAT
#ifdef NS32K





#else

	((int *) &smallest_float)[0]= 1;
	((int *) &smallest_double)[HIND] = 0;
	((int *) &smallest_double)[LIND] = 1;

#endif
#endif

#ifdef MV




#endif

#ifdef S3000
	l[0] = 0x00100000;
	l[1] = 0;
	smallest_float = *(float *)l;
	smallest_double = *(double *)l;
#endif

#ifdef VAX
	l[0] = 0xffff7fff;
	l[1] = 0xffffffff;
	biggest_float = *(float *)l;
	biggest_double = *(double *)l;
#endif

#ifdef IBMRT




#endif

#ifdef IEEEFLOAT
#ifdef NS32K





#else

	((int *) &biggest_float)[0]= 0x7f7fffff;
	((int *) &biggest_double)[HIND] = 0x7fefffff;
	((int *) &biggest_double)[LIND] = 0xffffffff;

#ifdef BAD_FPCHIP
 /* &&&& I am adding junk values to get past debugging */
        biggest_float = 1.0e37;
        smallest_float = 1.0e-37;
        biggest_double = 1.0e308;
        smallest_double = 1.0e-308;
        printf("\n Used fake values for float max and mins ");
#endif
#endif
#endif

#if defined(S3000) && ~defined(DBL_MAX_10_EXP)
	l[0] = 0x7fffffff;
	l[1] = 0xffffffff;
	l[0] = 0x7fffffff;
	l[1] = 0xffffffff;
	biggest_float = *(float *)l;
	biggest_float = *(float *)l;
	biggest_float = *(float *)l;
	biggest_float = 0.0;
	biggest_float = biggest_float + 1.0;
	biggest_float = biggest_float + 2.0;
	biggest_float = *(float *)l;
	biggest_float = *(float *)l;
	strcmp("I don't like", "DATA GENERAL.");
	biggest_float = *(float *)l;
	biggest_double = *(double *)l;
	biggest_double = *(double *)l;
	biggest_double = *(double *)l;
	biggest_double = 0.0;
	biggest_double = biggest_double + 1.0;
	biggest_double = biggest_double + 2.0;
	biggest_double = *(double *)l;
	biggest_double = *(double *)l;
	strcmp("I don't like", "DATA GENERAL.");
	biggest_double = *(double *)l;
#endif


#ifdef DBL_MAX_10_EXP
	biggest_double = DBL_MAX;
	smallest_norm_double = DBL_MIN;
	smallest_norm_float = FLT_MIN;
	biggest_float = FLT_MAX;
#endif
	
	
#ifdef IEEEFLOAT
 { 
   IEEE_float ief;
   IEEE_double ied;

   if (sizeof(ief)!=sizeof(ief.f))
     FEerror("Bad ieee float definition\n");
   if (sizeof(ied)!=sizeof(ied.d))
     FEerror("Bad ieee float definition\n");

   for (float_epsilon=ief.f=1.0,ief.ieee.mantissa=1;
	FMEM(ief.f),!SF_EQL((float)(1.0+ief.f),(float)1.0);
	float_epsilon=ief.f,ief.ieee.exponent--);

   for (float_negative_epsilon=ief.f=1.0,ief.ieee.mantissa=1;
	FMEM(ief.f),!SF_EQL((float)(1.0-ief.f),(float)1.0);
	float_negative_epsilon=ief.f,ief.ieee.exponent--);

   for (double_epsilon=ied.d=1.0,ied.ieee.mantissa1=1;
	FMEM(ied.d),!LF_EQL((1.0+ied.d),1.0);
	double_epsilon=ied.d,ied.ieee.exponent--);
   /* FIXME double calculations end one iteration too early */
   double_epsilon=ied.d;

   for (double_negative_epsilon=ied.d=1.0,ied.ieee.mantissa1=1;
	FMEM(ied.d),!LF_EQL((1.0-ied.d),1.0);
	double_negative_epsilon=ied.d,ied.ieee.exponent--);
   double_negative_epsilon=ied.d;

 }
#else

 /* We want the smallest number not satisfying something,
    and so we go quickly down, and then back up.  We have
    to use a function call for test, since in line code may keep
    too much precision, while the usual lisp eql,is not
    in line.
    We use SMALL as a multiple to come back up by.
    We use FMEM(double_negative_epsilon)
    to force the quantity into memory by taking its address
    and then passing it to a function.
 */
 
#define SMALL 1.05	
	for (float_epsilon = 1.0;
	     FMEM(float_epsilon),!SF_EQL((float)(1.0 + float_epsilon),(float)1.0);
	     float_epsilon /= 2.0)
		;
	while(SF_EQL((float)(1.0 + float_epsilon),(float)1.0))
	  { FMEM(float_epsilon); float_epsilon=float_epsilon*SMALL;}
	for (float_negative_epsilon = 1.0;
	    FMEM(float_negative_epsilon), !SF_EQL((float)(1.0 - float_negative_epsilon) ,(float)1.0);
	     float_negative_epsilon /= 2.0)
		;
	while(SF_EQL((float)(1.0 - float_negative_epsilon) ,(float)1.0))
	  float_negative_epsilon=float_negative_epsilon*SMALL;
	for (double_epsilon = 1.0;
	     FMEM(double_epsilon), !(LF_EQL(1.0 + double_epsilon, 1.0));
	     double_epsilon /= 2.0)
		;
	while((LF_EQL(1.0 + double_epsilon, 1.0)))
	  double_epsilon=double_epsilon*SMALL;
	  ;
	for (double_negative_epsilon = 1.0;
	   FMEM(double_negative_epsilon),
	       !LF_EQL(1.0 - double_negative_epsilon , 1.0);
	     double_negative_epsilon /= 2.0)
		;
	while(LF_EQL(1.0 - double_negative_epsilon , 1.0))
	  double_negative_epsilon=double_negative_epsilon*SMALL;
	  ;
#endif

	make_constant("MOST-POSITIVE-SHORT-FLOAT",
		      make_shortfloat(biggest_float));
	make_constant("LEAST-POSITIVE-SHORT-FLOAT",
		      make_shortfloat(smallest_float));
	make_constant("LEAST-NEGATIVE-SHORT-FLOAT",
		      make_shortfloat(-smallest_float));
	make_constant("MOST-NEGATIVE-SHORT-FLOAT",
		      make_shortfloat(-biggest_float));

	make_constant("MOST-POSITIVE-SINGLE-FLOAT",
		      make_longfloat(biggest_double));
	make_constant("LEAST-POSITIVE-SINGLE-FLOAT",
		      make_longfloat(smallest_double));
	make_constant("LEAST-NEGATIVE-SINGLE-FLOAT",
		      make_longfloat(-smallest_double));
	make_constant("MOST-NEGATIVE-SINGLE-FLOAT",
		      make_longfloat(-biggest_double));

	make_constant("MOST-POSITIVE-DOUBLE-FLOAT",
		      make_longfloat(biggest_double));
	make_constant("LEAST-POSITIVE-DOUBLE-FLOAT",
		      make_longfloat(smallest_double));
	make_constant("LEAST-NEGATIVE-DOUBLE-FLOAT",
		      make_longfloat(-smallest_double));
	make_constant("MOST-NEGATIVE-DOUBLE-FLOAT",
		      make_longfloat(-biggest_double));

	make_constant("MOST-POSITIVE-LONG-FLOAT",
		      make_longfloat(biggest_double));
	make_constant("LEAST-POSITIVE-LONG-FLOAT",
		      make_longfloat(smallest_double));
	make_constant("LEAST-NEGATIVE-LONG-FLOAT",
		      make_longfloat(-smallest_double));
	make_constant("MOST-NEGATIVE-LONG-FLOAT",
		      make_longfloat(-biggest_double));

	make_constant("SHORT-FLOAT-EPSILON",
		      make_shortfloat(float_epsilon));
	make_constant("SINGLE-FLOAT-EPSILON",
		      make_longfloat(double_epsilon));
	make_constant("DOUBLE-FLOAT-EPSILON",
		      make_longfloat(double_epsilon));
	make_constant("LONG-FLOAT-EPSILON",
		      make_longfloat(double_epsilon));

	make_constant("SHORT-FLOAT-NEGATIVE-EPSILON",
		      make_shortfloat(float_negative_epsilon));
	make_constant("SINGLE-FLOAT-NEGATIVE-EPSILON",
		      make_longfloat(double_negative_epsilon));
	make_constant("DOUBLE-FLOAT-NEGATIVE-EPSILON",
		      make_longfloat(double_negative_epsilon));
	make_constant("LONG-FLOAT-NEGATIVE-EPSILON",
		      make_longfloat(double_negative_epsilon));

	/* Normalized constants added, CM */
	make_constant("LEAST-POSITIVE-NORMALIZED-SHORT-FLOAT",
		      make_shortfloat(smallest_norm_float));
	make_constant("LEAST-NEGATIVE-NORMALIZED-SHORT-FLOAT",
		      make_shortfloat(-smallest_norm_float));
	make_constant("LEAST-POSITIVE-NORMALIZED-SINGLE-FLOAT",
		      make_longfloat(smallest_norm_double));
	make_constant("LEAST-NEGATIVE-NORMALIZED-SINGLE-FLOAT",
		      make_longfloat(-smallest_norm_double));
	make_constant("LEAST-POSITIVE-NORMALIZED-DOUBLE-FLOAT",
		      make_longfloat(smallest_norm_double));
	make_constant("LEAST-NEGATIVE-NORMALIZED-DOUBLE-FLOAT",
		      make_longfloat(-smallest_norm_double));
	make_constant("LEAST-POSITIVE-NORMALIZED-LONG-FLOAT",
		      make_longfloat(smallest_norm_double));
	make_constant("LEAST-NEGATIVE-NORMALIZED-LONG-FLOAT",
		      make_longfloat(-smallest_norm_double));

	plus_half = make_ratio(small_fixnum(1), small_fixnum(2));
	enter_mark_origin(&plus_half);

	minus_half = make_ratio(small_fixnum(-1), small_fixnum(2));
	enter_mark_origin(&minus_half);

	make_function("FLOAT", Lfloat);
	make_function("NUMERATOR", Lnumerator);
	make_function("DENOMINATOR", Ldenominator);
	make_function("FLOOR", Lfloor);
	make_function("CEILING", Lceiling);
	make_function("TRUNCATE", Ltruncate);
	make_function("ROUND", Lround);
	make_function("MOD", Lmod);
	make_function("REM", Lrem);
	make_function("DECODE-FLOAT", Ldecode_float);
	make_function("SCALE-FLOAT", Lscale_float);
	make_function("FLOAT-RADIX", Lfloat_radix);
	make_function("FLOAT-SIGN", Lfloat_sign);
	make_function("FLOAT-DIGITS", Lfloat_digits);
	make_function("FLOAT-PRECISION", Lfloat_precision);
	make_function("INTEGER-DECODE-FLOAT", Linteger_decode_float);
	make_function("COMPLEX", Lcomplex);
	make_function("REALPART", Lrealpart);
	make_function("IMAGPART", Limagpart);
}
