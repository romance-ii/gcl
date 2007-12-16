#include <stdarg.h>
#define _VA_LIST_DEFINED

#include <setjmp.h>
#include <stdio.h>

/*  #define	endp(obje)	endp1(obje) */
			   
#define STSET(type,x,i,val)  do{SGC_TOUCH(x);STREF(type,x,i) = (val);} while(0)

typedef float  complex fcomplex;
typedef double complex dcomplex;

#define immnum_lt(x,y) ({int _t=0;object _x=x,_y=y;\
  if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\
    if (_x<_y) _t=1;\
  } else {\
    if (number_compare(_x,_y)<0) _t=1;\
  } _t;})

#define immnum_le(x,y) ({int _t=0;object _x=x,_y=y;\
  if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\
    if (_x<=_y) _t=1;\
  } else {\
    if (number_compare(_x,_y)<=0) _t=1;\
  } _t;})

#define immnum_gt(x,y) ({int _t=0;object _x=x,_y=y;\
  if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\
    if (_x>_y) _t=1;\
  } else {\
    if (number_compare(_x,_y)>0) _t=1;\
  } _t;})

#define immnum_ge(x,y) ({int _t=0;object _x=x,_y=y;\
  if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\
    if (_x>=_y) _t=1;\
  } else {\
    if (number_compare(_x,_y)>=0) _t=1;\
  } _t;})

#define immnum_eq(x,y) ({int _t=0;object _x=x,_y=y;\
  if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\
    if (_x==_y) _t=1;\
  } else {\
    if (number_compare(_x,_y)==0) _t=1;\
  } _t;})

#define immnum_ne(x,y) ({int _t=0;object _x=x,_y=y;\
  if (is_imm_fixnum(_x) && is_imm_fixnum(_y)) {\
    if (_x!=_y) _t=1;\
  } else {\
    if (number_compare(_x,_y)!=0) _t=1;\
  } _t;})

#define immnum_plus(x,y) ({object _x=x,_y=y,_t;\
  if (!is_imm_fixnum(_x) || !is_imm_fixnum(_y) || \
      !is_unmrkd_imm_fixnum(_t=(object)((unsigned long)_x+fix_imm_fixnum(_y))))\
    _t=number_plus(_x,_y);\
  _t;})

#define immnum_minus(x,y) ({object _x=x,_y=y,_t;\
  if (!is_imm_fixnum(_x) || !is_imm_fixnum(_y) || \
      !is_unmrkd_imm_fixnum(_t=(object)((unsigned long)_x-fix_imm_fixnum(_y))))\
    _t=number_minus(_x,_y);\
  _t;})

/*FIXME symmetric immfix range */
#if defined(IM_FIX_BASE)
#define immnum_negate(x) ({object _x=x,_t;\
  if (is_imm_fixnum(_x) && (unsigned long)_x!=IM_FIX_BASE)\
     _t=(object)((unsigned long)make_fixnum(0)-fix_imm_fixnum(_x));\
  else\
    _t=number_negate(_x);\
  _t;})
#else
#define immnum_negate(x) ({object _x=x,_t;_t=number_negate(_x);_t;})
#endif

