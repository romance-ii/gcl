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
	Comparisons on numbers
*/
#define NEED_MP_H
#include "include.h"
#include "num_include.h"

/*
	The value of number_compare(x, y) is

		-1	if	x < y
		0	if	x = y
		1	if	x > y.

	If x or y is complex, 0 or 1 is returned.
*/
int
number_compare(object x, object y)
{
	int i;
	double dx, dy=0.0;
	vs_mark;

	switch (type_of(x)) {

	case t_fixnum:
		switch (type_of(y)) {
		case t_fixnum:
			if (fix(x) < fix(y))
				return(-1);
			else if (fix(x) == fix(y))
				return(0);
			else
				return(1);
		case t_bignum:
			i = big_sign(y);
			if (i < 0)
				return(1);
			else
				return(-1);
		case t_ratio:
			x = number_times(x, y->rat.rat_den);
			y = y->rat.rat_num;
			vs_push(x);
			i = number_compare(x, y);
			vs_reset;
			return(i);
		case t_shortfloat:
			dx = (double)(fix(x));
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dx = (double)(fix(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto Y_COMPLEX;
		default:
			wrong_type_argument(sLnumber, y);
		}

	case t_bignum:
		switch (type_of(y)) {
		case t_fixnum:
			i = big_sign(x);
			if (i < 0)
				return(-1);
			else
				return(1);
		case t_bignum:
			 return cmpii(MP(x),MP(y));
		case t_ratio:
			x = number_times(x, y->rat.rat_den);
			y = y->rat.rat_num;
			vs_push(x);
			i = number_compare(x, y);
			vs_reset;
			return(i);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto Y_COMPLEX;
		default:
			wrong_type_argument(sLnumber, y);
		}

	case t_ratio:
		switch (type_of(y)) {
		case t_fixnum:
		case t_bignum:
			y = number_times(y, x->rat.rat_den);
			x = x->rat.rat_num;
			vs_push(y);
			i = number_compare(x, y);
			vs_reset;
			return(i);
		case t_ratio:
			vs_push(number_times(x->rat.rat_num,y->rat.rat_den));
			vs_push(number_times(y->rat.rat_num,x->rat.rat_den));
			i = number_compare(vs_top[-2], vs_top[-1]);
			vs_reset;
			return(i);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto Y_COMPLEX;
		default:
			wrong_type_argument(sLnumber, y);
		}

	case t_shortfloat:
		dx = (double)(sf(x));
		goto LONGFLOAT0;

	case t_longfloat:
		dx = lf(x);
	LONGFLOAT0:
		switch (type_of(y)) {
		case t_fixnum:
			dy = (double)(fix(y));
			goto LONGFLOAT;
		case t_bignum:
		case t_ratio:
			dy = number_to_double(y);
			goto LONGFLOAT;
		case t_shortfloat:
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto Y_COMPLEX;
		default:
		  break;
		}
	LONGFLOAT:
		if (dx == dy)
			return(0);
		else if (dx < dy)
			return(-1);
		else
			return(1);

	Y_COMPLEX:
		if (number_zerop(y->cmp.cmp_imag))
			if (number_compare(x, y->cmp.cmp_real) == 0)
				return(0);
			else
				return(1);
		else
			return(1);

	case t_complex:
	  if (type_of(y) != t_complex) {
	    if (number_zerop(x->cmp.cmp_imag))
	      if (number_compare(x->cmp.cmp_real, y) == 0)
		return(0);
	      else
		return(1);
	    else
	      return(1);
	  }
	  if (number_compare(x->cmp.cmp_real, y->cmp.cmp_real) == 0 &&
	      number_compare(x->cmp.cmp_imag, y->cmp.cmp_imag) == 0 )
	    return(0);
	  else
	    return(1);

	default:
		FEwrong_type_argument(sLnumber, x);
		return(0);
	}
}

void
Lall_the_same(void)
{
	int narg, i;

	narg = vs_top - vs_base;
	if (narg == 0)
		too_few_arguments();
	for (i = 0; i < narg; i++)
		check_type_number(&vs_base[i]);
	for (i = 1; i < narg; i++)
		if (number_compare(vs_base[i-1], vs_base[i]) != 0) {
			vs_top = vs_base+1;
			vs_base[0] = Cnil;
			return;
		}
	vs_top = vs_base+1;
	vs_base[0] = Ct;
}

void
Lall_different(void)
{
	int narg, i, j;

	narg = vs_top - vs_base;
	if (narg == 0)
		too_few_arguments();
	else if (narg == 1) {
		vs_base[0] = Ct;
		return;
	}
	for (i = 0; i < narg; i++)
		check_type_number(&vs_base[i]);
	for(i = 1; i < narg; i++)
		for(j = 0; j < i; j++)
			if (number_compare(vs_base[j], vs_base[i]) == 0) {
				vs_top = vs_base+1;
				vs_base[0] = Cnil;
				return;
			}
	vs_top = vs_base+1;
	vs_base[0] = Ct;
}

static void
Lnumber_compare(int s, int t)
{
	int narg, i;

	narg = vs_top - vs_base;
	if (narg == 0)
		too_few_arguments();
	for (i = 0; i < narg; i++)
		check_type_or_rational_float(&vs_base[i]);
	for (i = 1; i < narg; i++)
		if (s*number_compare(vs_base[i], vs_base[i-1]) < t) {
			vs_top = vs_base+1;
			vs_base[0] = Cnil;
			return;
		}
	vs_top = vs_base+1;
	vs_base[0] = Ct;
}

void Lmonotonically_increasing(void) { Lnumber_compare( 1, 1); }
void Lmonotonically_decreasing(void) { Lnumber_compare(-1, 1); }
void Lmonotonically_nondecreasing(void) { Lnumber_compare( 1, 0); }
void Lmonotonically_nonincreasing(void) { Lnumber_compare(-1, 0); }

void
Lmax(void)
{
	object max;
	int narg, i;
	
	narg = vs_top - vs_base;
	if (narg == 0)
		too_few_arguments();
	for (i = 0;  i < narg;  i++)
		check_type_or_rational_float(&vs_base[i]);
	for (i = 1, max = vs_base[0];  i < narg;  i++)
		if (number_compare(max, vs_base[i]) < 0)
			max = vs_base[i];
	vs_top = vs_base+1;
	vs_base[0] = max;
}

void
Lmin(void)
{
	object min;
	int narg, i;
	
	narg = vs_top - vs_base;
	if (narg == 0)
		too_few_arguments();
	for (i = 0;  i < narg;  i++)
		check_type_or_rational_float(&vs_base[i]);
	for (i = 1, min = vs_base[0];  i < narg;  i++)
		if (number_compare(min, vs_base[i]) > 0)
			min = vs_base[i];
	vs_top = vs_base+1;
	vs_base[0] = min;
}

void
gcl_init_num_comp(void)
{
	make_function("=", Lall_the_same);
	make_function("/=", Lall_different);
	make_function("<", Lmonotonically_increasing);
	make_function(">", Lmonotonically_decreasing);
	make_function("<=", Lmonotonically_nondecreasing);
	make_function(">=", Lmonotonically_nonincreasing);
	make_function("MAX", Lmax);
	make_function("MIN", Lmin);
}
