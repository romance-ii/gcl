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
	Arithmetic operations
*/
#define NEED_MP_H
#include "include.h"

#include "num_include.h"

object
bignum2(most, least)
int most, least;
{ static  plong u [4] 
   = {0x01010004 ,0x01010004, 0,0};
  GEN w;
  int l;
  if(most) {setlgef(u,4),l=4;}
    else {l=3; setlgef(u,3);}
  MP_START_LOW(w,u,l);
  MP_NEXT_UP(w) = least;
  if (most) MP_NEXT_UP(w) = most;
 return  make_integer(u);
}

object
fixnum_times(i, j)
int i, j;
{ MPOP(return,mulss,i,j);
}

object
number_to_complex(x)
object x;
{
	object z;

	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
	case t_ratio:
	case t_shortfloat:
	case t_longfloat:
		z = alloc_object(t_complex);
		z->cmp.cmp_real = x;
		z->cmp.cmp_imag = small_fixnum(0);
		return(z);

	case t_complex:
		return(x);

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

object
number_plus(x, y)
object x, y;
{
	int i, j, k;
	double dx, dy;
	object z, z1;
	vs_mark;
	
	switch (type_of(x)) {

	case t_fixnum:
		switch(type_of(y)) {
		case t_fixnum:
		  MPOP(return, addss,fix(x),fix(y));
		case t_bignum:
		  MPOP(return, addsi,fix(x),MP(y));
		case t_ratio:
			vs_push(number_times(x, y->rat.rat_den));
			z = number_plus(vs_top[-1], y->rat.rat_num);
			vs_push(z);
			z = make_ratio(z, y->rat.rat_den);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = (double)(fix(x));
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = (double)(fix(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_bignum:
		switch (type_of(y)) {
		case t_fixnum:
		  MPOP(return,addsi,fix(y),MP(x)); 
		case t_bignum:
		  MPOP(return,addii,MP(y),MP(x)); 
		case t_ratio:
			vs_push(number_times(x, y->rat.rat_den));
			z = number_plus(vs_top[-1], y->rat.rat_num);
			vs_push(z);
			z = make_ratio(z, y->rat.rat_den);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_ratio:
		switch (type_of(y)) {
		case t_fixnum:
		case t_bignum:
			vs_push(number_times(x->rat.rat_den, y));
			z = number_plus(x->rat.rat_num, vs_top[-1]);
			vs_push(z);
			z = make_ratio(z, x->rat.rat_den);
			vs_reset;
			return(z);
		case t_ratio:
			vs_push(number_times(x->rat.rat_num,y->rat.rat_den));
			vs_push(number_times(x->rat.rat_den,y->rat.rat_num));
			z = number_plus(vs_top[-2], vs_top[-1]);
			vs_push(z);
			vs_push(number_times(x->rat.rat_den,y->rat.rat_den));
			z = make_ratio(z, vs_top[-1]);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_shortfloat:
		switch (type_of(y)) {
		case t_fixnum:
			dx = (double)(sf(x));
			dy = (double)(fix(y));
			goto SHORTFLOAT;
		case t_shortfloat:
			dx = (double)(sf(x));
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = (double)(sf(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dx = (double)(sf(x));
			dy = number_to_double(y);
			goto SHORTFLOAT;
		}
	SHORTFLOAT:
		z = alloc_object(t_shortfloat);
		sf(z) = (shortfloat)(dx + dy);
		return(z);

	case t_longfloat:
		dx = lf(x);
		switch (type_of(y)) {
		case t_fixnum:
			dy = (double)(fix(y));
			goto LONGFLOAT;
		case t_shortfloat:
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dy = number_to_double(y);
			goto LONGFLOAT;
		}
	LONGFLOAT:
		z = alloc_object(t_longfloat);
		lf(z) = dx + dy;
		return(z);

	case t_complex:
	COMPLEX:
		x = number_to_complex(x);
		vs_push(x);
		y = number_to_complex(y);
		vs_push(y);
		vs_push(number_plus(x->cmp.cmp_real, y->cmp.cmp_real));
		vs_push(number_plus(x->cmp.cmp_imag, y->cmp.cmp_imag));
		z = make_complex(vs_top[-2], vs_top[-1]);
		vs_reset;
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

object
one_plus(x)
object x;
{
	int i;
	double dx;
	object z, z1;
	vs_mark;
	
	switch (type_of(x)) {

	case t_fixnum:
	  MPOP(return, addss,1,fix(x));
	case t_bignum:
	  MPOP(return, addsi,1,MP(x));
	case t_ratio:
		z = number_plus(x->rat.rat_num, x->rat.rat_den);
		vs_push(z);
		z = make_ratio(z, x->rat.rat_den);
		vs_reset;
		return(z);

	case t_shortfloat:
		dx = (double)(sf(x));
		z = alloc_object(t_shortfloat);
		sf(z) = (shortfloat)(dx + 1.0);
		return(z);

	case t_longfloat:
		dx = lf(x);
		z = alloc_object(t_longfloat);
		lf(z) = dx + 1.0;
		return(z);

	case t_complex:
	COMPLEX:
		vs_push(one_plus(x->cmp.cmp_real));
		z = make_complex(vs_top[-1], x->cmp.cmp_imag);
		vs_reset;
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

object
number_minus(x, y)
object x, y;
{
	int i, j, k;
	double dx, dy;
	object z, z1;
	vs_mark;
	
	switch (type_of(x)) {

	case t_fixnum:
		switch(type_of(y)) {
#define MOST_NEG_FIXNUM (1 << 31)		  
		case t_fixnum:
		  MPOP(return,subss,fix(x),fix(y));
		case t_bignum:
		  MPOP(return, subsi,fix(x),MP(y));
		case t_ratio:
			vs_push(number_times(x, y->rat.rat_den));
			z = number_minus(vs_top[-1], y->rat.rat_num);
			vs_push(z);
			z = make_ratio(z, y->rat.rat_den);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = (double)(fix(x));
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = (double)(fix(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_bignum:
		switch (type_of(y)) {
		case t_fixnum:
		  MPOP(return,subis,MP(x),fix(y));
		case t_bignum:
		  MPOP(return,subii,MP(x),MP(y));
		case t_ratio:
			vs_push(number_times(x, y->rat.rat_den));
			z = number_minus(vs_top[-1], y->rat.rat_num);
			vs_push(z);
			z = make_ratio(z, y->rat.rat_den);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_ratio:
		switch (type_of(y)) {
		case t_fixnum:
		case t_bignum:
			vs_push(number_times(x->rat.rat_den, y));
			z = number_minus(x->rat.rat_num, vs_top[-1]);
			vs_push(z);
			z = make_ratio(z, x->rat.rat_den);
			vs_reset;
			return(z);
		case t_ratio:
			vs_push(number_times(x->rat.rat_num,y->rat.rat_den));
			vs_push(number_times(x->rat.rat_den,y->rat.rat_num));
			z = number_minus(vs_top[-2], vs_top[-1]);
			vs_push(z);
			vs_push(number_times(x->rat.rat_den,y->rat.rat_den));
			z = make_ratio(z, vs_top[-1]);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_shortfloat:
		switch (type_of(y)) {
		case t_fixnum:
			dx = (double)(sf(x));
			dy = (double)(fix(y));
			goto SHORTFLOAT;
		case t_shortfloat:
			dx = (double)(sf(x));
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = (double)(sf(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dx = (double)(sf(x));
			dy = number_to_double(y);
			goto SHORTFLOAT;
		}
	SHORTFLOAT:
		z = alloc_object(t_shortfloat);
		sf(z) = (shortfloat)(dx - dy);
		return(z);

	case t_longfloat:
		dx = lf(x);
		switch (type_of(y)) {
		case t_fixnum:
			dy = (double)(fix(y));
			goto LONGFLOAT;
		case t_shortfloat:
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dy = number_to_double(y);
		}
	LONGFLOAT:
		z = alloc_object(t_longfloat);
		lf(z) = dx - dy;
		return(z);

	case t_complex:
	COMPLEX:
		x = number_to_complex(x);
		vs_push(x);
		y = number_to_complex(y);
		vs_push(y);
		vs_push(number_minus(x->cmp.cmp_real, y->cmp.cmp_real));
		vs_push(number_minus(x->cmp.cmp_imag, y->cmp.cmp_imag));
		z = make_complex(vs_top[-2], vs_top[-1]);
		vs_reset;
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

object
one_minus(x)
object x;
{
	int i;
	double dx;
	object z, z1;
	vs_mark;
	
	switch (type_of(x)) {

	case t_fixnum:
	  MPOP(return,addss,fix(x),-1);
	case t_bignum:
	  MPOP(return,addsi,-1,MP(x));
	case t_ratio:
		z = number_minus(x->rat.rat_num, x->rat.rat_den);
		vs_push(z);
		z = make_ratio(z, x->rat.rat_den);
		vs_reset;
		return(z);

	case t_shortfloat:
		dx = (double)(sf(x));
		z = alloc_object(t_shortfloat);
		sf(z) = (shortfloat)(dx - 1.0);
		return(z);

	case t_longfloat:
		dx = lf(x);
		z = alloc_object(t_longfloat);
		lf(z) = dx - 1.0;
		return(z);

	case t_complex:
	COMPLEX:
		vs_push(one_minus(x->cmp.cmp_real));
		z = make_complex(vs_top[-1], x->cmp.cmp_imag);
		vs_reset;
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

object
number_negate(x)
object x;
{
	object	z, z1;
	vs_mark;

	switch (type_of(x)) {

	case t_fixnum:
		if(fix(x) == MOST_NEGATIVE_FIX)
		  return make_bignum(ABS_MOST_NEGS);
		else
		  return(make_fixnum(-fix(x)));
	case t_bignum:
		return big_minus(x);
	case t_ratio:
		z1 = number_negate(x->rat.rat_num);
		vs_push(z1);
		z = alloc_object(t_ratio);
		z->rat.rat_num = z1;
		z->rat.rat_den = x->rat.rat_den;
		vs_reset;
		return(z);

	case t_shortfloat:
		z = alloc_object(t_shortfloat);
		sf(z) = -sf(x);
		return(z);

	case t_longfloat:
		z = alloc_object(t_longfloat);
		lf(z) = -lf(x);
		return(z);

	case t_complex:
		vs_push(number_negate(x->cmp.cmp_real));
		vs_push(number_negate(x->cmp.cmp_imag));
		z = make_complex(vs_top[-2], vs_top[-1]);
		vs_reset;
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

object
number_times(x, y)
object x, y;
{
	object z;
	double dx, dy;
	vs_mark;

	switch (type_of(x)) {

	case t_fixnum:
		switch (type_of(y)) {
		case t_fixnum:
		  MPOP(return,mulss,fix(x),fix(y));
		case t_bignum:
		  MPOP(return,mulsi,fix(x),MP(y));
		case t_ratio:
			vs_push(number_times(x, y->rat.rat_num));
			z = make_ratio(vs_top[-1], y->rat.rat_den);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = (double)(fix(x));
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = (double)(fix(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_bignum:
		switch (type_of(y)) {
		case t_fixnum:
 		  MPOP(return,mulsi,fix(y),MP(x));

		case t_bignum:
		  MPOP(return,mulii,MP(y),MP(x));
		case t_ratio:
			vs_push(number_times(x, y->rat.rat_num));
			z = make_ratio(vs_top[-1], y->rat.rat_den);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_ratio:
		switch (type_of(y)) {
		case t_fixnum:
		case t_bignum:
			vs_push(number_times(x->rat.rat_num, y));
			z = make_ratio(vs_top[-1], x->rat.rat_den);
			vs_reset;
			return(z);
		case t_ratio:
			vs_push(number_times(x->rat.rat_num,y->rat.rat_num));
			vs_push(number_times(x->rat.rat_den,y->rat.rat_den));
			z = make_ratio(vs_top[-2], vs_top[-1]);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_shortfloat:
		switch (type_of(y)) {
		case t_fixnum:
			dx = (double)(sf(x));
			dy = (double)(fix(y));
			goto SHORTFLOAT;
		case t_shortfloat:
			dx = (double)(sf(x));
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = (double)(sf(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dx = (double)(sf(x));
			dy = number_to_double(y);
			break;
		}
	SHORTFLOAT:
		z = alloc_object(t_shortfloat);
		sf(z) = (shortfloat)(dx * dy);
		return(z);

	case t_longfloat:
		dx = lf(x);
		switch (type_of(y)) {
		case t_fixnum:
			dy = (double)(fix(y));
			goto LONGFLOAT;
		case t_shortfloat:
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dy = number_to_double(y);
		}
	LONGFLOAT:
		z = alloc_object(t_longfloat);
		lf(z) = dx * dy;
		return(z);

	case t_complex:
	COMPLEX:
	{
		object z1, z2, z11, z12, z21, z22;

		x = number_to_complex(x);
		vs_push(x);
		y = number_to_complex(y);
		vs_push(y);
		z11 = number_times(x->cmp.cmp_real, y->cmp.cmp_real);
		vs_push(z11);
		z12 = number_times(x->cmp.cmp_imag, y->cmp.cmp_imag);
		vs_push(z12);
		z21 = number_times(x->cmp.cmp_imag, y->cmp.cmp_real);
		vs_push(z21);
		z22 = number_times(x->cmp.cmp_real, y->cmp.cmp_imag);
		vs_push(z22);
		z1 =  number_minus(z11, z12);
		vs_push(z1);
		z2 =  number_plus(z21, z22);
		vs_push(z2);
		z = make_complex(z1, z2);
		vs_reset;
		return(z);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

object
number_divide(x, y)
object x, y;
{
	object z;
	double dx, dy;
	vs_mark;

	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
		switch (type_of(y)) {
		case t_fixnum:
		case t_bignum:
			if(number_zerop(y) == TRUE)
				zero_divisor();
			if (number_minusp(y) == TRUE) {
				x = number_negate(x);
				vs_push(x);
				y = number_negate(y);
				vs_push(y);
			}
			z = make_ratio(x, y);
			vs_reset;
			return(z);
		case t_ratio:
			if(number_zerop(y->rat.rat_num))
				zero_divisor();
			vs_push(number_times(x, y->rat.rat_den));
			z = make_ratio(vs_top[-1], y->rat.rat_num);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_ratio:
		switch (type_of(y)) {
		case t_fixnum:
		case t_bignum:
			if (number_zerop(y))
				zero_divisor();
			vs_push(number_times(x->rat.rat_den, y));
			z = make_ratio(x->rat.rat_num, vs_top[-1]);
			vs_reset;
			return(z);
		case t_ratio:
			vs_push(number_times(x->rat.rat_num,y->rat.rat_den));
			vs_push(number_times(x->rat.rat_den,y->rat.rat_num));
			z = make_ratio(vs_top[-2], vs_top[-1]);
			vs_reset;
			return(z);
		case t_shortfloat:
			dx = number_to_double(x);
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = number_to_double(x);
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			FEwrong_type_argument(sLnumber, y);
		}

	case t_shortfloat:
		switch (type_of(y)) {
		case t_fixnum:
			dx = (double)(sf(x));
			dy = (double)(fix(y));
			goto SHORTFLOAT;
		case t_shortfloat:
			dx = (double)(sf(x));
			dy = (double)(sf(y));
			goto SHORTFLOAT;
		case t_longfloat:
			dx = (double)(sf(x));
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dx = (double)(sf(x));
			dy = number_to_double(y);
			goto LONGFLOAT;
		}
	SHORTFLOAT:
		z = alloc_object(t_shortfloat);
		if (dy == 0.0)
			zero_divisor();
		sf(z) = (shortfloat)(dx / dy);
		return(z);


	case t_longfloat:
		dx = lf(x);
		switch (type_of(y)) {
		case t_fixnum:
			dy = (double)(fix(y));
			goto LONGFLOAT;
		case t_shortfloat:
			dy = (double)(sf(y));
			goto LONGFLOAT;
		case t_longfloat:
			dy = lf(y);
			goto LONGFLOAT;
		case t_complex:
			goto COMPLEX;
		default:
			dy = number_to_double(y);
		}
	LONGFLOAT:
		z = alloc_object(t_longfloat);
		if (dy == 0.0)
			zero_divisor();
		lf(z) = dx / dy;
		return(z);

	case t_complex:
	COMPLEX:
	{
		object z1, z2, z3;

		x = number_to_complex(x);
		vs_push(x);
		y = number_to_complex(y);
		vs_push(y);
		z1 = number_times(y->cmp.cmp_real, y->cmp.cmp_real);
		vs_push(z1);
		z2 = number_times(y->cmp.cmp_imag, y->cmp.cmp_imag);
		vs_push(z2);
		if (number_zerop(z3 = number_plus(z1, z2)))
			zero_divisor();
		vs_push(z3);
		z1 = number_times(x->cmp.cmp_real, y->cmp.cmp_real);
		vs_push(z1);
		z2 = number_times(x->cmp.cmp_imag, y->cmp.cmp_imag);
		vs_push(z2);
		z1 = number_plus(z1, z2);
		vs_push(z1);
		z = number_times(x->cmp.cmp_imag, y->cmp.cmp_real);
		vs_push(z);
		z2 = number_times(x->cmp.cmp_real, y->cmp.cmp_imag);
		vs_push(z2);
		z2 = number_minus(z, z2);
		vs_push(z2);
		z1 = number_divide(z1, z3);
		vs_push(z1);
		z2 = number_divide(z2, z3);
		vs_push(z2);
		z = make_complex(z1, z2);
		vs_reset;
		return(z);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
	}
}

integer_quotient_remainder_1(x, y, qp, rp)
object x, y;
object *qp, *rp;
{  GEN res,quot,x0,y0;
  save_avma;
  if (type_of(x)==t_fixnum) x0 = stoi(fix(x));
   else x0=MP(x); 
  if (type_of(y)==t_fixnum) y0 = stoi(fix(y));
   else y0=MP(y);
  res = dvmdii(x0,y0,&quot);
  restore_avma;
  *qp = make_integer(res);
  *rp = make_integer(quot);
  return;
 }
      

/* old
integer_quotient_remainder_1(x, y, qp, rp)
object x, y;
object *qp, *rp;
{
	enum type tx, ty;
	int i, j, q, r;
	vs_mark;
		
	tx = type_of(x);
	ty = type_of(y);
	if (tx == t_fixnum) {
 		if (ty == t_fixnum) {
			if (fix(y) == 0)
				zero_divisor();
			if (fix(y) == MOST_NEGATIVE_FIX)
				if (fix(x) == MOST_NEGATIVE_FIX) {
					*qp = small_fixnum(1);
					*rp = small_fixnum(0);
					return;
				} else {
					*qp = small_fixnum(0);
					*rp = x;
					return;
				}
			if (fix(x) == MOST_NEGATIVE_FIX) {
				if (fix(y) == 1) {
					*qp = x;
					*rp = small_fixnum(0);
					return;
				}
				if (fix(y) == -1) {
					*qp = bignum2(1, 0);
					*rp = small_fixnum(0);
					return;
				}
				if (fix(y) > 0) {
					extended_div(fix(y), 1, 0,
						     &q, &r);
					*qp = make_fixnum(-q);
					vs_push(*qp);
					*rp = make_fixnum(-r);
					vs_reset;
					return;
				} else {
					extended_div(-fix(y), 1, 0,
						     &q, &r);
					*qp = make_fixnum(q);
					vs_push(*qp);
					*rp = make_fixnum(-r);
					vs_reset;
					return;
				}
			}
			*qp = make_fixnum(fix(x) / fix(y));
			vs_push(*qp);
			*rp = make_fixnum(fix(x) % fix(y));
			vs_reset;
			return;
		}
		if (ty == t_bignum) {
			if (fix(x) == MOST_NEGATIVE_FIX &&
			    MP(y)[2] == MOST_NEGATIVE_FIX &&
			    lgef(MP(y)) == 1 &&
			    signe(MP(y)) < 0)
			  {
				*qp = small_fixnum(-1);
				*rp = small_fixnum(0);
				return;
			      }
			*qp = small_fixnum(0);
			*rp = x;
			return;
		} else
			FEwrong_type_argument(sLinteger, y);
	}
	if (tx == t_bignum) {
		if (ty == t_fixnum)
		  { 
		     MPOP(*qp = ,divis,MP(x),fix(y));
		     *rp = make_fixnum(hiremainder);
		     return;
		   }
		else
		  if (ty == t_bignum)
#define Dvmdii(a,b) dvmdii(a,b,&p1)
		    {GEN p1;
		     MPOP(*qp = ,dvmdii,MP(x),MP(y));
		     *rp = make_integer(p1);
		     return;}
		else
			FEwrong_type_argument(sLinteger, y);
	}
	FEwrong_type_argument(sLinteger, x);
}
*/

object
integer_divide1(x, y)
object x, y;
{
	object q, r;

	integer_quotient_remainder_1(x, y, &q, &r);
	return(q);
}

object
get_gcd(x, y)
object	x, y;
{
	int	i, j, k;
	object	q, r;
	vs_mark;

	if (number_minusp(x))
		x = number_negate(x);
	vs_push(x);
	if (number_minusp(y))
		y = number_negate(y);
	vs_push(y);

L:
	if (type_of(x) == t_fixnum && type_of(y) == t_fixnum) {
		i = fix(x);
		j = fix(y);
LL:
		if (i < j) {
			k = i;
			i = j;
			j = k;
		}
		if (j == 0) {
			vs_reset;
			return(make_fixnum(i));
		}
		k = i % j;
		i = j;
		j = k;
		goto LL;
	}

	if (number_compare(x, y) < 0) {
		r = x;
		x = y;
		y = r;
	}
	if (type_of(y) == t_fixnum && fix(y) == 0) {
		vs_reset;
		return(x);
	}
	integer_quotient_remainder_1(x, y, &q, &r);
	vs_top[-2] = x = y;
	vs_top[-1] = y = r;
	goto L;
}

/* (+          )   */
Lplus()
{
        int i, j;
	
	j = vs_top - vs_base;
	if (j == 0) {
		vs_push(small_fixnum(0));
		return;
	}
	for (i = 0;  i < j;  i++)
		check_type_number(&vs_base[i]);
	for (i = 1;  i < j;  i++)
		vs_base[0] = number_plus(vs_base[0], vs_base[i]);
	vs_top = vs_base+1;
}

Lminus()
{
	int i, j;

	j = vs_top - vs_base;
	if (j == 0)
		too_few_arguments();
	for (i = 0; i < j ; i++)
		check_type_number(&vs_base[i]);
	if (j == 1) {
		vs_base[0] = number_negate(vs_base[0]);
		return;
	}
	for (i = 1;  i < j;  i++)
		vs_base[0] = number_minus(vs_base[0], vs_base[i]);
	vs_top = vs_base+1;
}

Ltimes()
{
	int i, j;

	j = vs_top - vs_base;
	if (j == 0) {
		vs_push(small_fixnum(1));
		return;
	}
	for (i = 0;  i < j;  i++)
		check_type_number(&vs_base[i]);
	for (i = 1;  i < j;  i++)
		vs_base[0] = number_times(vs_base[0], vs_base[i]);
	vs_top = vs_base+1;
}

Ldivide()
{
	int i, j;

	j = vs_top - vs_base;
	if (j == 0)
		too_few_arguments();
	for(i = 0;  i < j;  i++)
		check_type_number(&vs_base[i]);
	if (j == 1) {
		vs_base[0] = number_divide(small_fixnum(1), vs_base[0]);
		return;
	}
	for (i = 1; i < j; i++)
		vs_base[0] = number_divide(vs_base[0], vs_base[i]);
	vs_top = vs_base+1;
}

Lone_plus()
{
	object x;
	
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = one_plus(vs_base[0]);
}

Lone_minus()
{
	object x;
	
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = one_minus(vs_base[0]);
}

Lconjugate()
{
	object	c, i;

	check_arg(1);
	check_type_number(&vs_base[0]);
	c = vs_base[0];
	if (type_of(c) == t_complex) {
		i = number_negate(c->cmp.cmp_imag);
		vs_push(i);
		vs_base[0] = make_complex(c->cmp.cmp_real, i);
		vs_pop;
	}
}

Lgcd()
{
	int i, narg;

	narg = vs_top - vs_base;
	if (narg == 0) {
		vs_push(small_fixnum(0));
		return;
	}
	for (i = 0;  i < narg;  i++)
		check_type_integer(&vs_base[i]);
	if (narg == 1) {
		if (number_minusp(vs_base[0]))
			vs_base[0] = number_negate(vs_base[0]);
		return;
	}
	for (i = 1;  i < narg;  i++)
		vs_base[0] = get_gcd(vs_base[0], vs_base[i]);
	vs_top = vs_base+1;
}

Llcm()
{
	object t, g;
	int i, narg;

	narg = vs_top - vs_base;
	if (narg == 0)
		too_few_arguments();
	for (i = 0;  i < narg;  i++)
		check_type_integer(&vs_base[i]);
	if (narg == 1) {
		if (number_minusp(vs_base[0]))
			vs_base[0] = number_negate(vs_base[0]);
		return;
	}
	for (i = 1;  i < narg;  i++) {
		t = number_times(vs_base[0], vs_base[i]);
		vs_push(t);
		g = get_gcd(vs_base[0], vs_base[i]);
		vs_push(g);
		vs_base[0] = number_divide(t, g);
		vs_pop;
		vs_pop;
	}
	if (number_minusp(vs_base[0]))
		vs_base[0] = number_negate(vs_base[0]);
	vs_top = vs_base+1;
}

zero_divisor()
{
	FEerror("Zero divisor.", 0);
}

init_num_arith()
{
	make_function("+", Lplus);
	make_function("-", Lminus);
	make_function("*", Ltimes);
	make_function("/", Ldivide);
	make_function("1+", Lone_plus);
	make_function("1-", Lone_minus);
	make_function("CONJUGATE", Lconjugate);
	make_function("GCD", Lgcd);
	make_function("LCM", Llcm);
}
