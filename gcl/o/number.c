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
	number.c
	IMPLEMENTATION-DEPENDENT

	This file creates some implementation dependent constants.
*/

#define IN_NUM_CO

#include "include.h"
#include "num_include.h"


long
fixint(object x)
{
	if (type_of(x) != t_fixnum)
		FEwrong_type_argument(sLfixnum, x);
	return(fix(x));
}

int
fixnnint(object x)
{
	if (type_of(x) != t_fixnum || fix(x) < 0)
		FEerror("~S is not a non-negative fixnum.", 1, x);
	return(fix(x));
}
#if 0
object small_fixnum ( int i ) {
#include <assert.h>    
    assert ( ( -SMALL_FIXNUM_LIMIT <= i ) && ( i < SMALL_FIXNUM_LIMIT ) ); 
    (object) small_fixnum_table + SMALL_FIXNUM_LIMIT + i;
}
#endif

#define BIGGER_FIXNUM_RANGE

#ifdef BIGGER_FIXNUM_RANGE
struct {int min,max;} bigger_fixnums;

struct fixnum_struct *bigger_fixnum_table;
DEFUN_NEW("ALLOCATE-BIGGER-FIXNUM-RANGE",object,fSallocate_bigger_fixnum_range,
      SI,2,2,NONE,OI,IO,OO,OO,(fixnum min,fixnum max),"") 
{ int j; 
  if (min <= max); else {FEerror("Need Min < Max",0);}
  bigger_fixnum_table= (void *) malloc(sizeof(struct fixnum_struct)*
				       (max - min));
  
  for (j=min ; j < max ; j=j+1)
    { 		bigger_fixnum_table[j - min].t
		= (short)t_fixnum;
		bigger_fixnum_table[j - min].FIXVAL = j;
	      }
  bigger_fixnums.min=min;
  bigger_fixnums.max=max;
  
  return Ct;
}
#endif



object
make_fixnum1(long i)
{
	object x;

	/* In a macro now */
/* 	if (-SMALL_FIXNUM_LIMIT <= i && i < SMALL_FIXNUM_LIMIT) */
/* 		return(small_fixnum(i)); */
#ifdef BIGGER_FIXNUM_RANGE
	if (bigger_fixnum_table)
	  { if (i >= bigger_fixnums.min
		&& i < bigger_fixnums.max)
	      return (object)(bigger_fixnum_table +(i -bigger_fixnums.min));
	  }
#endif	
	      
	x = alloc_object(t_fixnum);	    
	fix(x) = i;
	return(x);
}

object
make_ratio(object num, object den)
{
	object g, r, integer_divide1(object x, object y), get_gcd(object x, object y);
	vs_mark;

	if (number_zerop(den))
		FEerror("Zero denominator.", 0);
	if (number_zerop(num))
		return(small_fixnum(0));
	if (type_of(den) == t_fixnum && fix(den) == 1)
		return(num);
	if (number_minusp(den)) {
		num = number_negate(num);
		vs_push(num);
		den = number_negate(den);
		vs_push(den);
	}
	g = get_gcd(num, den);
	vs_push(g);
	num = integer_divide1(num, g);
	vs_push(num);
	den = integer_divide1(den, g);
	vs_push(den);
	if(type_of(den) == t_fixnum && fix(den) == 1) {
		vs_reset;
		return(num);
	}
	if(type_of(den) == t_fixnum && fix(den) == -1) {
		num = number_negate(num);
		vs_reset;
		return(num);
	}
	r = alloc_object(t_ratio);
	r->rat.rat_num = num;
	r->rat.rat_den = den;
	vs_reset;
	return(r);
}

object
make_shortfloat(double f)
{
	object x;

	if (f == (shortfloat)0.0)
		return(shortfloat_zero);
	x = alloc_object(t_shortfloat);
	sf(x) = (shortfloat)f;
	return(x);
}

object
make_longfloat(longfloat f)
{
	object x;

	if (f == (longfloat)0.0)
		return(longfloat_zero);
	x = alloc_object(t_longfloat);
	lf(x) = f;
	return(x);
}

object
make_complex(object r, object i)
{
	object c;
	vs_mark;

	switch (type_of(r)) {
	case t_fixnum:
	case t_bignum:
	case t_ratio:
		switch (type_of(i)) {
		case t_fixnum:
			if (fix(i) == 0)
				return(r);
			break;
		case t_shortfloat:
			r = make_shortfloat((shortfloat)number_to_double(r));
			vs_push(r);
			break;
		case t_longfloat:
			r = make_longfloat(number_to_double(r));
			vs_push(r);
			break;
		default:
		  break;
		}
		break;
	case t_shortfloat:
		switch (type_of(i)) {
		case t_fixnum:
		case t_bignum:
		case t_ratio:
			i = make_shortfloat((shortfloat)number_to_double(i));
			vs_push(i);
			break;
		case t_longfloat:
			r = make_longfloat((double)(sf(r)));
			vs_push(r);
			break;
		default:
		  break;
		}
		break;
	case t_longfloat:
		switch (type_of(i)) {
		case t_fixnum:
		case t_bignum:
		case t_ratio:
		case t_shortfloat:
			i = make_longfloat(number_to_double(i));
			vs_push(i);
			break;
		default:
		  break;
		}
		break;
	default:
	  break;
	}			
	c = alloc_object(t_complex);
	c->cmp.cmp_real = r;
	c->cmp.cmp_imag = i;
	vs_reset;
	return(c);
}

double
number_to_double(object x)
{
	switch(type_of(x)) {
	case t_fixnum:
		return((double)(fix(x)));

	case t_bignum:
		return(big_to_double(/*  (struct bignum *) */x));

	case t_ratio:
	  
	  {
	    double dx,dy;
	    object xx,yy;
	    
	    for (xx=x->rat.rat_num,yy=x->rat.rat_den,dx=number_to_double(xx),dy=number_to_double(yy);
		 dx && dy && (!ISNORMAL(dx) || !ISNORMAL(dy));) {

	      if (ISNORMAL(dx))
		dx*=0.5;
	      else {
		xx=integer_divide1(xx,small_fixnum(2));
		dx=number_to_double(xx);
	      }

	      if (ISNORMAL(dy))
		dy*=0.5;
	      else {
		yy=integer_divide1(yy,small_fixnum(2));
		dy=number_to_double(yy);
	      }

	    }

	    return dx/dy;
	  }

	case t_shortfloat:
		return((double)(sf(x)));

	case t_longfloat:
		return(lf(x));

	default:
		wrong_type_argument(TSor_rational_float, x);
		return(0.0);
	}
}

void
init_number(void)
{
	int i;

	for (i = -SMALL_FIXNUM_LIMIT;  i < SMALL_FIXNUM_LIMIT;  i++) {
		small_fixnum_table[i + SMALL_FIXNUM_LIMIT].t
		= (short)t_fixnum;
		small_fixnum_table[i + SMALL_FIXNUM_LIMIT].FIXVAL = i;
	}

	shortfloat_zero = alloc_object(t_shortfloat);
	sf(shortfloat_zero) = (shortfloat)0.0;
	longfloat_zero = alloc_object(t_longfloat);
	lf(longfloat_zero) = (longfloat)0.0;
	enter_mark_origin(&shortfloat_zero);
	enter_mark_origin(&longfloat_zero);

  	make_constant("MOST-POSITIVE-FIXNUM",
		      make_fixnum(MOST_POSITIVE_FIX));
	make_constant("MOST-NEGATIVE-FIXNUM",
		      make_fixnum(MOST_NEGATIVE_FIX));

	init_big();
	init_num_pred();
	init_num_comp();
	init_num_arith();
	init_num_co();
	init_num_log();
	init_num_sfun();
	init_num_rand();
}
