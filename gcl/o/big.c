  /* Copyright William F. Schelter 1991
   Bignum routines.


   
num_arith.c: add_int_big
num_arith.c: big_minus
num_arith.c: big_plus
num_arith.c: big_quotient_remainder
num_arith.c: big_sign
num_arith.c: big_times
num_arith.c: complement_big
num_arith.c: copy_big
num_arith.c: div_int_big
num_arith.c: mul_int_big
num_arith.c: normalize_big
num_arith.c: normalize_big_to_object
num_arith.c: stretch_big
num_arith.c: sub_int_big
num_comp.c: big_compare
num_comp.c: big_sign
num_log.c: big_sign
num_log.c: copy_to_big
num_log.c: normalize_big
num_log.c: normalize_big_to_object
num_log.c: stretch_big
num_pred.c: big_sign
number.c: big_to_double
predicate.c: big_compare
typespec.c: big_sign
print.d: big_minus
print.d: big_sign
print.d: big_zerop
print.d: copy_big
print.d: div_int_big
read.d: add_int_big
read.d: big_to_double
read.d: complement_big
read.d: mul_int_big
read.d: normalize_big
read.d: normalize_big_to_object

 */

#define remainder gclremainder
#define NEED_MP_H
#include "include.h"

static char* (*gcl_gmp_allocfun)() = alloc_contblock;

DEFUN("SET-GMP-ALLOCATE-RELOCATABLE",object,fSset_gmp_allocate_relocatable,SI,1,1,NONE,OO,OO,OO,OO,
      "Set the allocation to be relocatble ")(flag)
     object flag;
{
  if (flag == Ct) {
    gcl_gmp_allocfun = alloc_relblock;
  } else {
    gcl_gmp_allocfun = alloc_contblock;
  }
  RETURN1(flag);
}

#ifdef GMP
#include "gmp_big.c"
#else
#include "pari_big.c"
#endif



int big_sign(x)
     object x;
{
  return BIG_SIGN(x);
}

void set_big_sign(x,sign)
     object x;
     int sign;
{
  SET_BIG_SIGN(x,sign);
}

void zero_big(x)
     object x;
{
  ZERO_BIG(x);
}


#ifndef HAVE_MP_COERCE_TO_STRING

double digitsPerBit[37]={ 0,0,
1.0, /* 2 */
0.6309297535714574, /* 3 */
0.5, /* 4 */
0.4306765580733931, /* 5 */
0.3868528072345416, /* 6 */
0.3562071871080222, /* 7 */
0.3333333333333334, /* 8 */
0.3154648767857287, /* 9 */
0.3010299956639811, /* 10 */
0.2890648263178878, /* 11 */
0.2789429456511298, /* 12 */
0.2702381544273197, /* 13 */
0.2626495350371936, /* 14 */
0.2559580248098155, /* 15 */
0.25, /* 16 */
0.244650542118226, /* 17 */
0.2398124665681315, /* 18 */
0.2354089133666382, /* 19 */
0.2313782131597592, /* 20 */
0.227670248696953, /* 21 */
0.2242438242175754, /* 22 */
0.2210647294575037, /* 23 */
0.2181042919855316, /* 24 */
0.2153382790366965, /* 25 */
0.2127460535533632, /* 26 */
0.2103099178571525, /* 27 */
0.2080145976765095, /* 28 */
0.2058468324604345, /* 29 */
0.2037950470905062, /* 30 */
0.2018490865820999, /* 31 */
0.2, /* 32 */
0.1982398631705605, /* 33 */
0.1965616322328226, /* 34 */
0.1949590218937863, /* 35 */
0.1934264036172708, /* 36 */
};

object
coerce_big_to_string(x,printbase)
     int printbase;
     object x;
{ int i;
 int sign=big_sign(x);
 object b;
 int size = (int)((ceil(MP_SIZE_IN_BASE2(MP(x))* digitsPerBit[printbase]))+.01);
 char *q,*p = alloca(size+5);
 q=p;
 if(sign<=0) {
   *q++ = '-';
   b=big_minus(x);
 } else {
   b=copy_big(x);
 }
 while (!big_zerop(b))
   *q++=digit_weight(div_int_big(printbase, b),printbase);
 *q++=0;
  object ans = alloc_simple_string(q-p);
  ans->ust.ust_self=alloc_relblock(ans->ust.ust_dim);
  bcopy(ans->ust.ust_self,p,ans->ust.ust_dim);
  ans->ust.ust_fillp=ans->ust.ust_dim-1;
  return ans;
}

#endif
