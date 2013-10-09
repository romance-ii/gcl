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

