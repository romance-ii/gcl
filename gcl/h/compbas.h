#include <stdarg.h>
#define _VA_LIST_DEFINED

#include <setjmp.h>
#include <stdio.h>

/*  #define	endp(obje)	endp1(obje) */
			   
#define STSET(type,x,i,val)  do{SGC_TOUCH(x);STREF(type,x,i) = (val);} while(0)

#ifndef HAVE_MATH_H
#error Need math.h
#endif
#include <math.h>

#ifndef HAVE_COMPLEX_H
#error Need complex.h
#endif
#include <complex.h>

#ifdef HAVE_ALLOCA_H /*FIXME check if this is truly optional*/
#include <alloca.h>
#endif

typedef float  complex fcomplex;
typedef double complex dcomplex;

#ifdef IM_FIX_BASE
#define fimf(a) ((((ufixnum)a)&(IM_FIX_BASE+IM_FIX_LIM))==IM_FIX_BASE)
#define fimoff  (IM_FIX_BASE+(IM_FIX_LIM>>1))
#define fimb    IM_FIX_BASE
#else
#define fimf(a) 0
#define fimoff  0
#define fimb    0
#endif

/*FIXME*/
#define fto(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end<<4 : (_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->fstp.tp;})

#define fto2(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end : (_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->d.t;})

#define fto1(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end : \
                ((_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->fstp.tp)+(_x==Cnil)*(t_symbol<<4+3);})

#define fto3(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end : \
                ((_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->fstp.tp)+(_x==Cnil)*t_symbol;})

#define fto0(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? 1 : (_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1);})




/*FIXME <<4*/
#define tpo0(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE);})

#define tpo1(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? 2 : (_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1);})

#define tpo2(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? 3 : (_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*2+(_x==Cnil);})

#define tpo3(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_fixnum : (_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->d.t;})

#define tpo4(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_fixnum : \
                ((_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->d.t)+(_x==Cnil)*t_symbol;})

#define tpo5(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? (t_fixnum<<4)+1 : (_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->fstp.tp;})

#define tpo6(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? (t_fixnum<<4)+1 : \
                ((_x->ff.ff<IM_FIX_BASE)*(_x->ff.ff&1)*_x->fstp.tp)+(_x==Cnil)*((t_symbol<<4)+3);})





#define tp0(x) is_imm_fixnum(x)/*(((ufixnum)x)>=IM_FIX_BASE)*/

#define tp1(x) (x==Cnil)

#define tp2(x) ({object _x=x;is_imm_fixnum(_x) ? 2 : _x->d.e && !is_imm_fixnum(_x->ff.ff);})/*(((ufixnum)_x)>=IM_FIX_BASE)*/

#define tp3(x) ({object _x=x;_x==Cnil ? 2 : (is_imm_fixnum(_x) ? 3 : _x->d.e && !is_imm_fixnum(_x->ff.ff));})

#define tp4(x) ({object _x=x;is_imm_fixnum(_x) ? t_fixnum : _x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->d.t : 0;})

#define tp5(x) ({object _x=x;_x==Cnil ? t_symbol : (is_imm_fixnum(_x) ? t_fixnum : (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->d.t : 0));})


#define tp6(x) ({object _x=x;is_imm_fixnum(_x) ? (t_fixnum<<4)+1 : (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->fstp.tp : 0);})

#define tp7(x) ({object _x=x;_x==Cnil ? (t_symbol<<4)+3 :\
      (is_imm_fixnum(_x) ? (t_fixnum<<4)+1 :\
       (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->fstp.tp : 0));})

#define tp8(x) ({object _x=x;(is_imm_fixnum(_x) ? 0 :  \
			      (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? \
			       (_x->d.t<t_complex ? x->d.t :		\
				(_x->d.t==t_complex&&x->d.tt<2 ? x->d.t :		\
				 (_x->d.t==t_complex ? x->d.t+x->d.tt-1 : \
				  0))) : 0));})/*FIXME*/

#if defined (LOW_SHFT)

#define LOW_IM_FIX (1L<<(LOW_SHFT-1))

#define immnum_comp(x,y,c) ({register object _x=x,_y=y;\
      is_unmrkd_imm_fixnum(_x)&&is_unmrkd_imm_fixnum(_y) ? ((fixnum)_x c (fixnum)_y) : (number_compare(_x,_y) c 0);})
#define immnum_plus(x,y) \
  ({object _x=x,_y=y,_z=((object)((fixnum)_x+(fixnum)_y));is_unmrkd_imm_fixnum(_z) ? _z : number_plus(_x,_y);})
#define immnum_minus(x,y)						\
   ({object _xx=x,_yy=y;is_unmrkd_imm_fixnum(_yy) ? immnum_plus(_xx,((object)(-(fixnum)_yy))) : number_minus(_xx,_yy);}) 
#define immnum_negate(x) \
  ({object _x=x;is_unmrkd_imm_fixnum(_x)&&_x!=(object)(-LOW_IM_FIX) ? ((object)-(fixnum)_x) : number_negate(_x);})
#define immnum_times(x,y) \
  ({object _x=x,_y=y;is_unmrkd_imm_fixnum(_x)&&is_unmrkd_imm_fixnum(_y) ? make_fixnum((fixnum)_x*(fixnum)_y) : number_times(_x,_y);})

#define immnum_ior(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(fix(_x)|fix(_y)) : fS2logior(_x,_y);})
#define immnum_and(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(fix(_x)&fix(_y)) : fS2logand(_x,_y);})
#define immnum_xor(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(fix(_x)^fix(_y)) : fS2logxor(_x,_y);})
#define immnum_not(x) \
  ({object _x=x;is_imm_fixnum(_x) ? make_fixnum(~fix(_x)) : fS1lognot(_x);})




#else
/* #define immnum_comp(x,y,c) (fimf(((ufixnum)x)&((ufixnum)y)) ? (x c y) : (number_compare(x,y) c 0)) */
#define immnum_comp(x,y,c) ({register object _x=x,_y=y;\
      is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? (_x c _y) : (number_compare(_x,_y) c 0);})/*FIXME? comparisons with marked immfix*/

#define immnum_plus(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(((ufixnum)_x)+((ufixnum)_y)-(fimoff<<1)) : number_plus(_x,_y);})
#define immnum_minus(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(((ufixnum)_x)-((ufixnum)_y)) : number_minus(_x,_y);})
#define immnum_negate(x) \
  ({object _x=x;is_imm_fixnum(_x) ? make_fixnum((fimoff)-((ufixnum)_x)) : number_negate(_x);})


#define immnum_ior(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(fix(_x)|fix(_y)) : fS2logior(_x,_y);})
#define immnum_and(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(fix(_x)&fix(_y)) : fS2logand(_x,_y);})
#define immnum_xor(x,y) \
  ({object _x=x,_y=y;is_imm_fixnum(_x)&&is_imm_fixnum(_y) ? make_fixnum(fix(_x)^fix(_y)) : fS2logxor(_x,_y);})
#define immnum_not(x) \
  ({object _x=x;is_imm_fixnum(_x) ? make_fixnum(~fix(_x)) : fS1lognot(_x);})


/* /\* #define immnum_plus(x,y) \ */
/*   ({object _x=x,_y=y,_z=(object)(((ufixnum)_x)+((ufixnum)_y)-fimoff);tand(_x,_z) ? _z : number_plus(_x,_y);}) */

/* #define immnum_minus(x,y) \ */
/*   ({object _x=x,_y=y,_z=(object)(((ufixnum)_x)-((ufixnum)_y)+fimoff);tand(_x,_z) ? _z : number_minus(_x,_y);}) */

/* #define immnum_negate(x) \ */
/*   ({object _x=x,_z=(object)((fimoff<<1)-((ufixnum)_x));fimf(_z) ? _z : number_negate(_x);}) */

#endif
#define immnum_lt(x,y) immnum_comp(x,y,<)
#define immnum_le(x,y) immnum_comp(x,y,<=)
#define immnum_eq(x,y) immnum_comp(x,y,==)
#define immnum_ne(x,y) immnum_comp(x,y,!=)
#define immnum_gt(x,y) immnum_comp(x,y,>)
#define immnum_ge(x,y) immnum_comp(x,y,>=)
