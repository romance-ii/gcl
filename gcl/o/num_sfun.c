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

#define IN_NUM_CO

#include "include.h"
#include "num_include.h"

object imag_unit, minus_imag_unit, imag_two;

int
fixnum_expt(int x, int y)
{
	int z;

 	z = 1;
	while (y > 0)
		if (y%2 == 0) {
			x *= x;
			y /= 2;
		} else {
			z *= x;
			--y;
		}
	return(z);
}

static object
number_exp(object x)
{
	double exp(double);

	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
	case t_ratio:
		return(make_longfloat((longfloat)exp(number_to_double(x))));

	case t_shortfloat:
		return(make_shortfloat((shortfloat)exp((double)(sf(x)))));

	case t_longfloat:
		return(make_longfloat(exp(lf(x))));

	case t_complex:
	{
		object y, y1;
		static object number_sin(object x), number_cos(object x);
	        vs_mark;
	
		y = x->cmp.cmp_imag;
		x = x->cmp.cmp_real;
		x = number_exp(x);
		vs_push(x);
		y1 = number_cos(y);
		vs_push(y1);
		y = number_sin(y);
		vs_push(y);
		y = make_complex(y1, y);
		vs_push(y);
		x = number_times(x, y);
		vs_reset;
		return(x);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
number_expt(object x, object y)
{
	enum type tx, ty;
	object z;
	static object number_nlog(object x);
	vs_mark;

	tx = type_of(x);
	ty = type_of(y);
	if (ty == t_fixnum && fix(y) == 0)
		switch (tx) {
		case t_fixnum:  case t_bignum:  case t_ratio:
			return(small_fixnum(1));

		case t_shortfloat:
			return(make_shortfloat((shortfloat)1.0));

		case t_longfloat:
			return(make_longfloat(1.0));

		case t_complex:
			z = number_expt(x->cmp.cmp_real, y);
			vs_push(z);
			z = make_complex(z, small_fixnum(0));
			vs_reset;
			return(z);

		default:
			FEwrong_type_argument(sLnumber, x);
		}
	if (number_zerop(x)) {
		if (!number_plusp(ty==t_complex?y->cmp.cmp_real:y))
			FEerror("Cannot raise zero to the power ~S.", 1, y);
		return(number_times(x, y));
	}
	if (ty == t_fixnum || ty == t_bignum) {
		if (number_minusp(y)) {
			z = number_negate(y);
			vs_push(z);
			z = number_expt(x, z);
			vs_push(z);
			if ((type_of(z)==t_shortfloat && !ISNORMAL(z->SF.SFVAL)) ||
			    (type_of(z)==t_longfloat && !ISNORMAL(z->LF.LFVAL))) {
			  z = number_nlog(x);
			  vs_push(z);
			  z = number_times(z, y);
			  vs_push(z);
			  z = number_exp(z);
			  vs_reset;
			  return(z);
			}
			z = number_divide(small_fixnum(1), z);
			vs_reset;
			return(z);
		}
		z = small_fixnum(1);
		vs_push(z);
		vs_push(Cnil);
		vs_push(Cnil);
		while (number_plusp(y))
			if (number_evenp(y)) {
				x = number_times(x, x);
				vs_top[-1] = x;
				y = integer_divide1(y, small_fixnum(2));
				vs_top[-2] = y;
			} else {
				z = number_times(z, x);
				vs_top[-3] = z;
				y = number_minus(y, small_fixnum(1));
				vs_top[-2] = y;
			}
		vs_reset;
		return(z);
	}
	z = number_nlog(x);
	vs_push(z);
	z = number_times(z, y);
	vs_push(z);
	z = number_exp(z);
	vs_reset;
	return(z);
}

static object
number_nlog(object x)
{
	double log(double);
	object r=Cnil, i=Cnil, a, p;
	static object number_sqrt(object x), number_atan2(object y, object x);
	vs_mark;

	if (type_of(x) == t_complex) {
		r = x->cmp.cmp_real;
		i = x->cmp.cmp_imag;
		goto COMPLEX;
	}
	if (number_zerop(x))
		FEerror("Zero is the logarithmic singularity.", 0);
	if (number_minusp(x)) {
		r = x;
		i = small_fixnum(0);
		goto COMPLEX;
	}
	switch (type_of(x)) {
	case t_fixnum:
	case t_bignum:
	case t_ratio:
		return(make_longfloat(log(number_to_double(x))));

	case t_shortfloat:
		return(make_shortfloat((shortfloat)log((double)(sf(x)))));

	case t_longfloat:
		return(make_longfloat(log(lf(x))));

	default:
		FEwrong_type_argument(sLnumber, x);
	}

COMPLEX:
	a = number_times(r, r);
	vs_push(a);
	p = number_times(i, i);
	vs_push(p);
	a = number_plus(a, p);
	vs_push(a);
	a = number_nlog(a);
	vs_push(a);
	a = number_divide(a, small_fixnum(2));
	vs_push(a);
	p = number_atan2(i, r);
	vs_push(p);
	x = make_complex(a, p);
	vs_reset;
	return(x);
}

static object
number_log(object x, object y)
{
	object z;
	vs_mark;

	if (number_zerop(y))
		FEerror("Zero is the logarithmic singularity.", 0);
	if (number_zerop(x))
		return(number_times(x, y));
	x = number_nlog(x);
	vs_push(x);
	y = number_nlog(y);
	vs_push(y);
	z = number_divide(y, x);
	vs_reset;
	return(z);
}

static object
number_sqrt(object x)
{
	object z;
	double sqrt(double);
	vs_mark;

	if (type_of(x) == t_complex)
		goto COMPLEX;
	if (number_minusp(x))
		goto COMPLEX;
	switch (type_of(x)) {
	case t_fixnum:
	case t_bignum:
	case t_ratio:
		return(make_longfloat(
			(longfloat)sqrt(number_to_double(x))));

	case t_shortfloat:
		return(make_shortfloat((shortfloat)sqrt((double)(sf(x)))));

	case t_longfloat:
		return(make_longfloat(sqrt(lf(x))));

	default:
		FEwrong_type_argument(sLnumber, x);
	}

COMPLEX:
	z = make_ratio(small_fixnum(1), small_fixnum(2));
	vs_push(z);
	z = number_expt(x, z);
	vs_reset;
	return(z);
}

static object
number_atan2(object y, object x)
{
	object z;
	double atan(double), dy, dx, dz=0.0;

	dy = number_to_double(y);
	dx = number_to_double(x);
	if (dx > 0.0)
		if (dy > 0.0)
			dz = atan(dy / dx);
		else if (dy == 0.0)
			dz = 0.0;
		else
			dz = -atan(-dy / dx);
	else if (dx == 0.0)
		if (dy > 0.0)
			dz = PI / 2.0;
		else if (dy == 0.0)
			FEerror("Logarithmic singularity.", 0);
		else
			dz = -PI / 2.0;
	else
		if (dy > 0.0)
			dz = PI - atan(dy / -dx);
		else if (dy == 0.0)
			dz = PI;
		else
			dz = -PI + atan(-dy / -dx);
	if (type_of(x) == t_shortfloat)
	  z = make_shortfloat((shortfloat)dz);
	else
	  z = make_longfloat(dz);
	return(z);
}

static object
number_atan(object y)
{
	object z, z1;
        vs_mark;

	if (type_of(y) == t_complex) {
		z = number_times(imag_unit, y);
		vs_push(z);
		z = one_plus(z);
		vs_push(z);
		z1 = number_times(y, y);
		vs_push(z1);
		z1 = one_plus(z1);
		vs_push(z1);
		z1 = number_sqrt(z1);
		vs_push(z1);
		z = number_divide(z, z1);
		vs_push(z);
		z = number_nlog(z);
		vs_push(z);
		z = number_times(minus_imag_unit, z);
		vs_reset;
		return(z);
	}
	return(number_atan2(y, small_fixnum(1)));
}

static object
number_sin(object x)
{
	double sin(double);

	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
	case t_ratio:
		return(make_longfloat((longfloat)sin(number_to_double(x))));

	case t_shortfloat:
		return(make_shortfloat((shortfloat)sin((double)(sf(x)))));

	case t_longfloat:
		return(make_longfloat(sin(lf(x))));

	case t_complex:
	{
		object	r;
		object	x0, x1, x2;
		vs_mark;

		x0 = number_times(imag_unit, x);
		vs_push(x0);
		x0 = number_exp(x0);
		vs_push(x0);
		x1 = number_times(minus_imag_unit, x);
		vs_push(x1);
		x1 = number_exp(x1);
		vs_push(x1);
		x2 = number_minus(x0, x1);
		vs_push(x2);
		r = number_divide(x2, imag_two);

		vs_reset;
		return(r);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);

	}
}

static object
number_cos(object x)
{
	double cos(double);

	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
	case t_ratio:
		return(make_longfloat((longfloat)cos(number_to_double(x))));

	case t_shortfloat:
		return(make_shortfloat((shortfloat)cos((double)(sf(x)))));

	case t_longfloat:
		return(make_longfloat(cos(lf(x))));

	case t_complex:
	{
		object r;
		object x0, x1, x2;
		vs_mark;

		x0 = number_times(imag_unit, x);
		vs_push(x0);
		x0 = number_exp(x0);
		vs_push(x0);
		x1 = number_times(minus_imag_unit, x);
		vs_push(x1);
		x1 = number_exp(x1);
		vs_push(x1);
		x2 = number_plus(x0, x1);
		vs_push(x2);
		r = number_divide(x2, small_fixnum(2));

		vs_reset;
		return(r);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);

	}
}

static object
number_tan1(object x)
{
	double cos(double);

	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
	case t_ratio:
		return(make_longfloat((longfloat)tan(number_to_double(x))));

	case t_shortfloat:
		return(make_shortfloat((shortfloat)tan((double)(sf(x)))));

	case t_longfloat:
		return(make_longfloat(tan(lf(x))));

	case t_complex:
	{
		object r;
		object x0, x1, x2;
		vs_mark;

		x0 = number_times(imag_two, x);
		vs_push(x0);
		x0 = number_exp(x0);
		vs_push(x0);
		x1 = number_minus(x0,small_fixnum(1));
		vs_push(x1);
		x2 = number_plus(x0,small_fixnum(1));
		vs_push(x2);
		x2 = number_times(x2,imag_unit);
		vs_push(x2);
		r = number_divide(x1, x2);

		vs_reset;
		return(r);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);

	}
}

static object
number_tan(object x)
{
	object r, c;
	vs_mark;

	c = number_cos(x);
	vs_push(c);
	if (number_zerop(c) == TRUE)
		FEerror("Cannot compute the tangent of ~S.", 1, x);
	r = number_tan1(x);
	vs_reset;
	return(r);
}

LFD(Lexp)(void)
{
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = number_exp(vs_base[0]);
}

LFD(Lexpt)(void)
{
	check_arg(2);
	check_type_number(&vs_base[0]);
	check_type_number(&vs_base[1]);
	vs_base[0] = number_expt(vs_base[0], vs_base[1]);
	vs_popp;
}

LFD(Llog)(void)
{
	int narg;
	
	narg = vs_top - vs_base;
	if (narg < 1)
		too_few_arguments();
	else if (narg == 1) {
		check_type_number(&vs_base[0]);
		vs_base[0] = number_nlog(vs_base[0]);
	} else if (narg == 2) {
		check_type_number(&vs_base[0]);
		check_type_number(&vs_base[1]);
		vs_base[0] = number_log(vs_base[1], vs_base[0]);
		vs_popp;
	} else
		too_many_arguments();
}

LFD(Lsqrt)(void)
{
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = number_sqrt(vs_base[0]);
}

LFD(Lsin)(void)
{
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = number_sin(vs_base[0]);
}

LFD(Lcos)(void)
{
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = number_cos(vs_base[0]);
}

LFD(Ltan)(void)
{
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = number_tan(vs_base[0]);
}

LFD(Latan)(void)
{
	int narg;

	narg = vs_top - vs_base;
	if (narg < 1)
		too_few_arguments();
	if (narg == 1) {
		check_type_number(&vs_base[0]);
		vs_base[0] = number_atan(vs_base[0]);
	} else if (narg == 2) {
		check_type_or_rational_float(&vs_base[0]);
		check_type_or_rational_float(&vs_base[1]);
		vs_base[0] = number_atan2(vs_base[0], vs_base[1]);
		vs_popp;
	} else
		too_many_arguments();
}

static void
FFN(siLmodf)(void)
{
  
  object x;
  double d,ip;

  check_arg(1);
  check_type_float(&vs_base[0]);
  x=vs_base[0];
  vs_base=vs_top;
  d=type_of(x) == t_longfloat ? lf(x) : (double)sf(x);
  d=modf(d,&ip);
  vs_push(make_fixnum((int)ip));
  vs_push(type_of(x) == t_longfloat ? make_longfloat(d) : make_shortfloat((shortfloat)d));

}

void
gcl_init_num_sfun(void)
{
	imag_unit
	= make_complex(make_longfloat((longfloat)0.0),
		       make_longfloat((longfloat)1.0));
	enter_mark_origin(&imag_unit);
	minus_imag_unit
	= make_complex(make_longfloat((longfloat)0.0),
		       make_longfloat((longfloat)-1.0));
	enter_mark_origin(&minus_imag_unit);
	imag_two
	= make_complex(make_longfloat((longfloat)0.0),
		       make_longfloat((longfloat)2.0));
	enter_mark_origin(&imag_two);

	make_constant("PI", make_longfloat(PI));

	make_function("EXP", Lexp);
	make_function("EXPT", Lexpt);
	make_function("LOG", Llog);
	make_function("SQRT", Lsqrt);
	make_function("SIN", Lsin);
	make_function("COS", Lcos);
	make_function("TAN", Ltan);
	make_function("ATAN", Latan);
	make_si_function("MODF", siLmodf);
}
