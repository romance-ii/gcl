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
#define fto(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end<<4 : \
      ({union fstp _c=_x->fstp;(_c.f<IM_FIX_BASE)*(_c.f&1)*_c.t.tp;});})

#define fto2(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end : \
      ({union fstp _c=_x->fstp;(_c.f<IM_FIX_BASE)*(_c.f&1)*_x->d.t;});})

#define fto1(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end : \
      ({union fstp _c=_x->fstp;((_c.f<IM_FIX_BASE)*(_c.f&1)*_c.t.tp)+(_x==Cnil)*(t_symbol<<4+3);});})

#define fto3(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end : \
      ({union fstp _c=_x->fstp;((_c.f<IM_FIX_BASE)*(_c.f&1)*_c.t.tp)+(_x==Cnil)*t_symbol;});})

#define fto0(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? 1 : \
      ({union fstp _c=_x->fstp;(_c.f<IM_FIX_BASE)*(_c.f&1);});})




/*FIXME <<4*/
#define tpo0(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE);})

#define tpo1(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? 2 : \
      ({union fstp _c=_x->fstp;(_c.f<IM_FIX_BASE)*(_c.f&1);});})

#define tpo2(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? 3 : \
      ({union fstp _c=_x->fstp;(_c.f<IM_FIX_BASE)*(_c.f&1)*2+(_x==Cnil);});})

#define tpo3(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_fixnum : \
      ({union fstp _c=_x->fstp;(_c.f<IM_FIX_BASE)*(_c.f&1)*_x->d.t;});})

#define tpo4(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_fixnum : \
      ({union fstp _c=_x->fstp;((_c.f<IM_FIX_BASE)*(_c.f&1)*_x->d.t)+(_x==Cnil)*t_symbol;});})

#define tpo5(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? (t_fixnum<<4)+1 : \
      ({union fstp _c=_x->fstp;(_c.f<IM_FIX_BASE)*(_c.f&1)*_c.t.tp;});})

#define tpo6(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? (t_fixnum<<4)+1 : \
      ({union fstp _c=_x->fstp;((_c.f<IM_FIX_BASE)*(_c.f&1)*_c.t.tp)+(_x==Cnil)*((t_symbol<<4)+3);});})





#define tp0(x) (((ufixnum)x)>=IM_FIX_BASE)

#define tp1(x) (x==Cnil)

#define tp2(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? 2 : \
      ({union fstp _c=_x->fstp;_x->d.e && _c.f<IM_FIX_BASE;});})

#define tp3(x) ({object _x=x;_x==Cnil ? 2 :\
    ((((ufixnum)_x)>=IM_FIX_BASE) ? 3 :\
     ({union fstp _c=_x->fstp;_x->d.e && _c.f<IM_FIX_BASE;}));})

#define tp4(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_fixnum :\
      ({union fstp _c=_x->fstp;_x->d.e && _c.f<IM_FIX_BASE ? _x->d.t : 0;});})

#define tp5(x) ({object _x=x;_x==Cnil ? t_symbol :\
    ((((ufixnum)_x)>=IM_FIX_BASE) ? t_fixnum :\
     ({union fstp _c=_x->fstp;_x->d.e && _c.f<IM_FIX_BASE ? _x->d.t : 0;}));})


#define tp6(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? (t_fixnum<<4)+1 :\
      ({union fstp _c=_x->fstp;_x->d.e && _c.f<IM_FIX_BASE ? _c.t.tp : 0;});})

#define tp7(x) ({object _x=x;_x==Cnil ? (t_symbol<<4)+3 :\
      ((((ufixnum)_x)>=IM_FIX_BASE) ? (t_fixnum<<4)+1 :\
       ({union fstp _c=_x->fstp;_x->d.e && _c.f<IM_FIX_BASE ? _c.t.tp : 0;}));})

#define tp8(x) ({object _x=x;(((ufixnum)_x)>=IM_FIX_BASE) ? t_end :\
      ({union fstp _c=_x->fstp;_x->d.e && _c.f<IM_FIX_BASE ? _x->d.t : t_end;})-1;})


/* #define immnum_comp(x,y,c) (fimf(((ufixnum)x)&((ufixnum)y)) ? (x c y) : (number_compare(x,y) c 0)) */
#define immnum_comp(x,y,c) ({register object _x=x,_y=y;\
      fimf(((ufixnum)_x)&((ufixnum)_y)) ? (_x c _y) : (number_compare(_x,_y) c 0);})/*FIXME? comparisons with marked immfix*/
#define immnum_lt(x,y) immnum_comp(x,y,<)
#define immnum_le(x,y) immnum_comp(x,y,<=)
#define immnum_eq(x,y) immnum_comp(x,y,==)
#define immnum_ne(x,y) immnum_comp(x,y,!=)
#define immnum_gt(x,y) immnum_comp(x,y,>)
#define immnum_ge(x,y) immnum_comp(x,y,>=)

/* #define tand(_x,_y,_z) fimf((((ufixnum)_x)&((ufixnum)_y))|(IM_FIX_LIM&((ufixnum)_z))) */
/* #define tand(_x,_z) fimf(((ufixnum)_x)&((ufixnum)_z)) */
#define tand(_x,_z) fimf(((((ufixnum)_x)&((ufixnum)_z))|(IM_FIX_LIM&((ufixnum)_z))))

#define immnum_plus(x,y) \
  ({object _x=x,_y=y,_z=(object)(((ufixnum)_x)+((ufixnum)_y)-fimoff);tand(_x,_z) ? _z : number_plus(_x,_y);})

#define immnum_minus(x,y) \
  ({object _x=x,_y=y,_z=(object)(((ufixnum)_x)-((ufixnum)_y)+fimoff);tand(_x,_z) ? _z : number_minus(_x,_y);})

#define immnum_negate(x) \
  ({object _x=x,_z=(object)((fimoff<<1)-((ufixnum)_x));fimf(_z) ? _z : number_negate(_x);})

/* #define immnum_lt(x,y) ({int _t=0;object _x=x,_y=y;\ */
/*   if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\ */
/*     if (_x<_y) _t=1;\ */
/*   } else {\ */
/*     if (number_compare(_x,_y)<0) _t=1;\ */
/*   } _t;}) */

/* #define immnum_le(x,y) ({int _t=0;object _x=x,_y=y;\ */
/*   if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\ */
/*     if (_x<=_y) _t=1;\ */
/*   } else {\ */
/*     if (number_compare(_x,_y)<=0) _t=1;\ */
/*   } _t;}) */

/* #define immnum_gt(x,y) ({int _t=0;object _x=x,_y=y;\ */
/*   if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\ */
/*     if (_x>_y) _t=1;\ */
/*   } else {\ */
/*     if (number_compare(_x,_y)>0) _t=1;\ */
/*   } _t;}) */

/* #define immnum_ge(x,y) ({int _t=0;object _x=x,_y=y;\ */
/*   if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\ */
/*     if (_x>=_y) _t=1;\ */
/*   } else {\ */
/*     if (number_compare(_x,_y)>=0) _t=1;\ */
/*   } _t;}) */

/* #define immnum_eq(x,y) ({int _t=0;object _x=x,_y=y;\ */
/*   if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\ */
/*     if (_x==_y) _t=1;\ */
/*   } else {\ */
/*     if (number_compare(_x,_y)==0) _t=1;\ */
/*   } _t;}) */

/* #define immnum_ne(x,y) ({int _t=0;object _x=x,_y=y;\ */
/*   if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\ */
/*     if (_x!=_y) _t=1;\ */
/*   } else {\ */
/*     if (number_compare(_x,_y)!=0) _t=1;\ */
/*   } _t;}) */

/* #define immnum_plus(x,y) ({object _x=x,_y=y,_t;\ */
/*   if (!is_imm_fixnum(_x) || !is_imm_fixnum(_y) || \ */
/*       !is_unmrkd_imm_fixnum(_t=(object)((unsigned long)_x+fix_imm_fixnum(_y))))\ */
/*     _t=number_plus(_x,_y);\ */
/*   _t;}) */

/* #define immnum_minus(x,y) ({object _x=x,_y=y,_t;\ */
/*   if (!is_imm_fixnum(_x) || !is_imm_fixnum(_y) || \ */
/*       !is_unmrkd_imm_fixnum(_t=(object)((unsigned long)_x-fix_imm_fixnum(_y))))\ */
/*     _t=number_minus(_x,_y);\ */
/*   _t;}) */

/* /\*FIXME symmetric immfix range *\/ */
/* #if defined(IM_FIX_BASE) */
/* #define immnum_negate(x) ({object _x=x,_t;\ */
/*   if (is_imm_fixnum(_x) && (unsigned long)_x!=IM_FIX_BASE)\ */
/*      _t=(object)((unsigned long)make_fixnum(0)-fix_imm_fixnum(_x));\ */
/*   else\ */
/*     _t=number_negate(_x);\ */
/*   _t;}) */
/* #else */
/* #define immnum_negate(x) ({object _x=x,_t;_t=number_negate(_x);_t;}) */
/* #endif */


