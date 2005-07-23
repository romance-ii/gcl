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

void
zero_divisor(void);

object fixnum_add(fixnum i, fixnum j)
{

  if (i>=0)
   { if (j<= (MOST_POSITIVE_FIX-i))
      { return make_fixnum(i+j);
      }
   MPOP(return,addss,i,j);
   } else { /* i < 0 */
     if ((MOST_NEGATIVE_FIX -i) <= j) {
       return make_fixnum(i+j);
     }
   MPOP(return,addss,i,j);
   }
}
/* return i - j */
object fixnum_sub(fixnum i, fixnum j)
{  

  if (i>=0)
   { if (j >= (i - MOST_POSITIVE_FIX))
      { return make_fixnum(i-j);
      }
   MPOP(return,subss,i,j);
   } else { /* i < 0 */
     if ((MOST_NEGATIVE_FIX -i) <= -j) {
       return make_fixnum(i-j);
     }
   MPOP(return,subss,i,j);
   }
}

object 
fixnum_times(fixnum i, fixnum j) {

  if (i>=0) {
    if (j>=0) {
      if (!i || j<= (MOST_POSITIVE_FIX/i))
	goto FIX;
    } else {
      if (j==-1 || i<= (MOST_NEGATIVE_FIX/j))
	goto FIX;
    }
  } else {
    if (j>=0) {
      if (i==-1 || j<= (MOST_NEGATIVE_FIX/i))
	goto FIX;
    } else {
      if (0<-i && -i<= (MOST_POSITIVE_FIX/-j))
	goto FIX;
    }
  }
  MPOP(return,mulss,i,j);
 FIX:
  return make_fixnum(i*j);
}

/* return i - j */
/* static object */
/* fixnum_times(int i, int j) */
/* { */

/*   MPOP(return,mulss,i,j); */
/* } */

static object
number_to_complex(object x)
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
		return(Cnil);
	}
}

static object
integer_exact_quotient(object x,object y,int in_place) {

  object r;

  if (y==small_fixnum(1) || x==small_fixnum(0))
    return x;

  if (type_of(x)==t_fixnum)  /* no in_place for fixnums as could be small */
    return make_fixnum((type_of(y)==t_fixnum ? fix(x)/fix(y) : -1)); 
  /* Only big dividing a fix is most-negative-fix/abs(most-negative-fix)*/
    
  r=in_place ? x : new_bignum();

  if (type_of(y)==t_fixnum) 
    mpz_divexact_ui(MP(r),MP(x),fix(y));
  else
    mpz_divexact(MP(r),MP(x),MP(y));

  return normalize_big(r);

}

static object
ratio_op_with_cancellation(object a,object b,object c,object d,object (*op)(object,object)) {

  object b0,d0,g,t,g1;
  
  b0=b;
  d0=d;

  g=get_gcd(b,d);
  
  b=integer_exact_quotient(b,g,0); /* Try to handle g==1 case quickly above and keep generic */
  d=integer_exact_quotient(d,g,0);

  t=op(number_times(a,d),number_times(b,c));
  
  g1=get_gcd(t,g);
    
  t=integer_exact_quotient(t,g1,t!=a&&t!=b0&&t!=c&&t!=d0);
  b=integer_exact_quotient(b0,g1,0);

  b=number_times(b,d);
  
  return make_ratio(t,b,1);
  
}


static object
ratio_mult_with_cancellation(object a,object b,object c,object d) {

  object g;
  
  g=get_gcd(a,d);
  
  a=integer_exact_quotient(a,g,0);
  d=integer_exact_quotient(d,g,0);

  g=get_gcd(b,c);
  
  b=integer_exact_quotient(b,g,0);
  c=integer_exact_quotient(c,g,0);

  a=number_times(a,c);
  b=number_times(b,d);

  return make_ratio(a,b,1);
  
}


object
number_plus(object x, object y)
{
	double dx, dy;
	object z;
	switch (type_of(x)) {
	case t_fixnum:
		switch(type_of(y)) {
		case t_fixnum:
		  return fixnum_add(fix(x),fix(y));
		case t_bignum:
		  MPOP(return, addsi,fix(x),MP(y));
		case t_ratio:
		  return ratio_op_with_cancellation(x,small_fixnum(1),
						    y->rat.rat_num,y->rat.rat_den,
						    number_plus);
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
		  return ratio_op_with_cancellation(x,small_fixnum(1),
						    y->rat.rat_num,y->rat.rat_den,
						    number_plus);
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
		  return ratio_op_with_cancellation(x->rat.rat_num,x->rat.rat_den,
						    y,small_fixnum(1),
						    number_plus);
		case t_ratio:
   		  return ratio_op_with_cancellation(x->rat.rat_num,x->rat.rat_den,
						    y->rat.rat_num,y->rat.rat_den,number_plus);
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
		y = number_to_complex(y);
		z = make_complex(number_plus(x->cmp.cmp_real, y->cmp.cmp_real),
				 number_plus(x->cmp.cmp_imag, y->cmp.cmp_imag));
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
one_plus(object x)
{
	double dx;
	object z;

	
	switch (type_of(x)) {

	case t_fixnum:
	  
	  if (fix(x)< MOST_POSITIVE_FIX-1) {
	    return make_fixnum(fix(x)+1);
	  }
	  MPOP(return,addss,1,fix(x));
	case t_bignum:
	  MPOP(return,addsi,1,MP(x));
	case t_ratio:
	  return ratio_op_with_cancellation(x->rat.rat_num,x->rat.rat_den,
					    small_fixnum(1),small_fixnum(1),
					    number_plus);
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
		z = make_complex(one_plus(x->cmp.cmp_real), x->cmp.cmp_imag);
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
number_minus(object x, object y)
{
	double dx, dy;
	object z;

	
	switch (type_of(x)) {

	case t_fixnum:
		switch(type_of(y)) {
		case t_fixnum:
		  MPOP(return,subss,fix(x),fix(y));
		case t_bignum:
		  MPOP(return, subsi,fix(x),MP(y));
		case t_ratio:
		  return ratio_op_with_cancellation(x,small_fixnum(1),
						    y->rat.rat_num,y->rat.rat_den,
						    number_minus);
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
		  return ratio_op_with_cancellation(x,small_fixnum(1),
						    y->rat.rat_num,y->rat.rat_den,
						    number_minus);
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
		  return ratio_op_with_cancellation(x->rat.rat_num,x->rat.rat_den,
						    y,small_fixnum(1),
						    number_minus);
		case t_ratio:
   		  return ratio_op_with_cancellation(x->rat.rat_num,x->rat.rat_den,
						    y->rat.rat_num,y->rat.rat_den,number_minus);
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
		y = number_to_complex(y);
		z = make_complex(number_minus(x->cmp.cmp_real, y->cmp.cmp_real),
				 number_minus(x->cmp.cmp_imag, y->cmp.cmp_imag));
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
one_minus(object x)
{
	double dx;
	object z;
	switch (type_of(x)) {

	case t_fixnum:
	  MPOP(return,addss,fix(x),-1);
	case t_bignum:
	  MPOP(return,addsi,-1,MP(x));
	case t_ratio:
	  return ratio_op_with_cancellation(x->rat.rat_num,x->rat.rat_den,
					    small_fixnum(1),small_fixnum(1),
					    number_minus);
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
		z = make_complex(one_minus(x->cmp.cmp_real), x->cmp.cmp_imag);
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
number_negate(object x)
{
	object	z, z1;

	switch (type_of(x)) {

	case t_fixnum:
		if(fix(x) == MOST_NEGATIVE_FIX)
		  return fixnum_add(1,MOST_POSITIVE_FIX);
		else
		  return(make_fixnum(-fix(x)));
	case t_bignum:
		return big_minus(x);
	case t_ratio:
		z1 = number_negate(x->rat.rat_num);
		z = alloc_object(t_ratio);
		z->rat.rat_num = z1;
		z->rat.rat_den = x->rat.rat_den;
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
		z = make_complex(number_negate(x->cmp.cmp_real),
				 number_negate(x->cmp.cmp_imag));
		return(z);

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
number_times(object x, object y)
{  
	object z;
	double dx, dy;

	if (x==small_fixnum(1))
	  return y;
	if (y==small_fixnum(1))
	  return x;

	switch (type_of(x)) {

	case t_fixnum:
		switch (type_of(y)) {
		case t_fixnum:
		  return fixnum_times(fix(x),fix(y));
/* 		  MPOP(return,mulss,fix(x),fix(y)); */
		case t_bignum:
		  MPOP(return,mulsi,fix(x),MP(y));
		case t_ratio:
		  return ratio_mult_with_cancellation(x,small_fixnum(1),
						      y->rat.rat_num,y->rat.rat_den);
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
		  return ratio_mult_with_cancellation(x,small_fixnum(1),
						      y->rat.rat_num,y->rat.rat_den);
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
		  return ratio_mult_with_cancellation(x->rat.rat_num,x->rat.rat_den,
						      y,small_fixnum(1));
		case t_ratio:
		  return ratio_mult_with_cancellation(x->rat.rat_num,x->rat.rat_den,
						      y->rat.rat_num,y->rat.rat_den);
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
		y = number_to_complex(y);
		z11 = number_times(x->cmp.cmp_real, y->cmp.cmp_real);
		z12 = number_times(x->cmp.cmp_imag, y->cmp.cmp_imag);
		z21 = number_times(x->cmp.cmp_imag, y->cmp.cmp_real);
		z22 = number_times(x->cmp.cmp_real, y->cmp.cmp_imag);
		z1 =  number_minus(z11, z12);
		z2 =  number_plus(z21, z22);
		z = make_complex(z1, z2);
		return(z);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
number_divide(object x, object y)
{
	object z;
	double dx, dy;

	switch (type_of(x)) {

	case t_fixnum:
	case t_bignum:
		switch (type_of(y)) {
		case t_fixnum:
		case t_bignum:
/* 			if(number_zerop(y) == TRUE) */
/* 				zero_divisor(); */
/* 			if (number_minusp(y) == TRUE) { */
/* 				x = number_negate(x); */
/* 				y = number_negate(y); */
/* 			} */
/* 			z = make_ratio(x, y, 0); */
			return(make_ratio(x, y, 0));
		case t_ratio:
			if(number_zerop(y->rat.rat_num))
				zero_divisor();
			return ratio_mult_with_cancellation(x,small_fixnum(1),
							    y->rat.rat_den,y->rat.rat_num);
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
			return ratio_mult_with_cancellation(x->rat.rat_num,x->rat.rat_den,
							    small_fixnum(1),y);
		case t_ratio:
		  return ratio_mult_with_cancellation(x->rat.rat_num,x->rat.rat_den,
						      y->rat.rat_den,y->rat.rat_num);
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
		y = number_to_complex(y);
		z1 = number_times(y->cmp.cmp_real, y->cmp.cmp_real);
		z2 = number_times(y->cmp.cmp_imag, y->cmp.cmp_imag);
		if (number_zerop(z3 = number_plus(z1, z2)))
			zero_divisor();
		z1 = number_times(x->cmp.cmp_real, y->cmp.cmp_real);
		z2 = number_times(x->cmp.cmp_imag, y->cmp.cmp_imag);
		z1 = number_plus(z1, z2);
		z = number_times(x->cmp.cmp_imag, y->cmp.cmp_real);
		z2 = number_times(x->cmp.cmp_real, y->cmp.cmp_imag);
		z2 = number_minus(z, z2);
		z1 = number_divide(z1, z3);
		z2 = number_divide(z2, z3);
		z = make_complex(z1, z2);
		return(z);
	}

	default:
		FEwrong_type_argument(sLnumber, x);
		return(Cnil);
	}
}

object
integer_divide1(object x, object y)
{
	object q, r;

	integer_quotient_remainder_1(x, y, &q, &r);
	return(q);
}

object
get_gcd(object x, object y)
{
	object	r;

	if (x==small_fixnum(1) || y==small_fixnum(1))
	  return small_fixnum(1);

	if (number_minusp(x))
		x = number_negate(x);
	if (number_minusp(y))
		y = number_negate(y);

	if (type_of(x) == t_fixnum && type_of(y) == t_fixnum) {

	  register fixnum i, j, k, t;

	  if (!(i = fix(x)))
	    return y;
	  if (!(j = fix(y)))
	    return x;
	  k=0;
	  while(!(i&0x1) && !(j&0x1)) {
	      k++;
	      i>>=1;
	      j>>=1;
	  }
	  t= i&0x1 ? -j : i>>1; 
	  do {
	    while(!(t&0x1)) t>>=1;
	    if(t>0) i=t; else j=-t;
	    t=i-j;
	  } while (t);
	  return make_fixnum(i<<k);

	}

	if (number_compare(x, y) < 0) {
		r = x;
		x = y;
		y = r;
	}
	if (type_of(y) == t_fixnum) {
	  if (fix(y))
	    return make_fixnum(mpz_gcd_ui(NULL,MP(x),fix(y)));
	  else
	    return(x);
	}

	r=new_bignum();
	mpz_gcd(MP(r),MP(x),MP(y));
	return normalize_big(r);
	  
}

/* (+          )   */
LFD(Lplus)(void)
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

LFD(Lminus)(void)
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

LFD(Ltimes)(void)
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

LFD(Ldivide)(void)
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

LFD(Lone_plus)(void)
{
	
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = one_plus(vs_base[0]);
}

LFD(Lone_minus)(void)
{
	
	check_arg(1);
	check_type_number(&vs_base[0]);
	vs_base[0] = one_minus(vs_base[0]);
}

LFD(Lconjugate)(void)
{
	object	c, i;

	check_arg(1);
	check_type_number(&vs_base[0]);
	c = vs_base[0];
	if (type_of(c) == t_complex) {
		i = number_negate(c->cmp.cmp_imag);
		vs_push(i);
		vs_base[0] = make_complex(c->cmp.cmp_real, i);
		vs_popp;
	}
}

LFD(Lgcd)(void)
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

LFD(Llcm)(void)
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
	  if (number_zerop(vs_base[0]) ||
	      number_zerop(vs_base[i]))
	    vs_base[0]=small_fixnum(0);
	  else {
	    t = number_times(vs_base[0], vs_base[i]);
	    vs_push(t);
	    g = get_gcd(vs_base[0], vs_base[i]);
	    vs_push(g);
	    vs_base[0] = number_divide(t, g);
	    vs_popp;
	    vs_popp;
	  }
	}
	if (number_minusp(vs_base[0]))
		vs_base[0] = number_negate(vs_base[0]);
	vs_top = vs_base+1;
}

void
zero_divisor(void)
{
	FEerror("Zero divisor.", 0);
}

void
gcl_init_num_arith(void)
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
