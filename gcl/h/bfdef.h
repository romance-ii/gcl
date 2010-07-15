#include "compbas2.h"
#include "funlink.h"

extern object sLvalues,sLinteger,sLfixnum,big_fixnum1,big_fixnum2,big_fixnum3,big_fixnum4,big_fixnum5;

#define ENSURE_MP(a_,b_) \
  if (type_of(a_)==t_fixnum) {\
  mpz_set_si(MP(Join(big_fixnum,b_)),fix(a_));\
  a_=Join(big_fixnum,b_);\
  }

#define K_bbb_b OO
#define K_bbb_f OI
#define K_bb_b OO
#define K_bb_f OI
#define K_fb_b IO
#define K_fb_f II
#define K_fbb_b IO
#define K_fbb_f II
#define K_m_b OO
#define K_m_f OI
#define K_b_b OO
#define K_f_b IO
#define K_b_f OI
#define K_f_f II
#define KK1(a_,b_) Join(K_,Join(a_,Join(_,b_)))

#define Q11(a_,b_) KK1(a_,b_)
#define Q21(a_,b_) OO
#define Q31(a_,b_) OO
#define Q41(a_,b_) OO
#define Q12(a_,b_,c_) KK1(a_,b_)
#define Q22(a_,b_,c_) KK1(c_,b)
#define Q32(a_,b_,c_) OO
#define Q42(a_,b_,c_) OO
#define Q13(a_,b_,c_,d_) KK1(a_,b_)
#define Q23(a_,b_,c_,d_) KK1(c_,d_)
#define Q33(a_,b_,c_,d_) OO
#define Q43(a_,b_,c_,d_) OO
#define Q14(a_,b_,c_,d_,e_) KK1(a_,b_)
#define Q24(a_,b_,c_,d_,e_) KK1(c_,d_)
#define Q34(a_,b_,c_,d_,e_) KK1(e_,b)
#define Q44(a_,b_,c_,d_,e_) OO

#define D_fb   fixnum
#define D_fbb  fixnum
#define D_bb   object
#define D_bbb  object
#define D_m    object
#define D_b    object
#define D_f    fixnum
#define D0(a_) Join(D_,a_)
#define D1(a_) D0(a_) x
#define D2(a_,b_) D1(a_),D0(b_) y
#define D3(a_,b_,c_) D2(a_,b_),D0(c_) z
#define D4(a_,b_,c_,d_) D3(a_,b_,c_),D0(d_) w

#define R1(a_) D0(a_)

#define EE(a_,b_)
#define E_b ENSURE_MP
#define E_f EE
#define E1(a_) Join(E_,a_)(x,1);
#define E2(a_,b_) E1(a_) Join(E_,b_)(y,2)
#define E3(a_,b_,c_) E2(a_,b_) Join(E_,c_)(z,3)
#define E4(a_,b_,c_,d_) E3(a_,b_,c_) Join(E_,d_)(w,4)

/* #define AA_m object *vals=(object *)fcall.valp,*base=vs_top,u=new_bignum(),v=new_bignum() */
/* #define AA_b object u=new_bignum() */
#define AA_bbb object *vals=(object *)fcall.valp,*base=vs_top,u=big_fixnum3,v=big_fixnum4,v2=big_fixnum5
#define AA_bb object *vals=(object *)fcall.valp,*base=vs_top,u=big_fixnum4,v=big_fixnum5
#define AA_fb fixnum u;object *vals=(object *)fcall.valp,*base=vs_top,v=big_fixnum4
#define AA_fbb fixnum u;object *vals=(object *)fcall.valp,*base=vs_top,v=big_fixnum4,v2=big_fixnum5
#define AA_m object *vals=(object *)fcall.valp,*base=vs_top,u=big_fixnum4,v=big_fixnum5
#define AA_b object u=big_fixnum4
#define AA_f fixnum u
#define AA1(a_) Join(AA_,a_)

#define C_b MP
#define C_f
#define C1(a_) Join(C_,a_)(x)
#define C2(a_,b_) C1(a_),Join(C_,b_)(y)
#define C3(a_,b_,c_) C2(a_,b_),Join(C_,c_)(z)
#define C4(a_,b_,c_,d_) C3(a_,b_,c_),Join(C_,d_)(w)

#define CC_bbb MP(u),MP(v),MP(v2),
#define CC_bb  MP(u),MP(v),
#define CC_fb  MP(v),
#define CC_fbb MP(v),MP(v2),
#define CC_m   MP(u),MP(v),
#define CC_b   MP(u),
#define CC_f
#define CC1(r_) Join(CC_,r_)

#define W_bbb
#define W_bb
#define W_fb  u=
#define W_fbb u=
#define W_m
#define W_b
#define W_f   u=

/* #define Z_m normalize_big(u),normalize_big(v) */
/* #define Z_b normalize_big(u) */
#define Z_bbb maybe_replace_big(u),maybe_replace_big(v),maybe_replace_big(v2)
#define Z_bb  maybe_replace_big(u),maybe_replace_big(v)
#define Z_fb  u,maybe_replace_big(v)
#define Z_fbb u,maybe_replace_big(v),maybe_replace_big(v2)
#define Z_m   maybe_replace_big(u),maybe_replace_big(v)
#define Z_b   maybe_replace_big(u)
#define Z_f   u

#define PT_bb MMcons(sLvalues,MMcons(sLinteger,MMcons(sLinteger,Cnil)))
#define PT_fb MMcons(sLvalues,MMcons(sLfixnum,MMcons(sLinteger,Cnil)))
#define PT_fbb MMcons(sLvalues,MMcons(sLfixnum,MMcons(sLinteger,MMcons(sLinteger,Cnil))))
#define PT_bbb MMcons(sLvalues,MMcons(sLinteger,MMcons(sLinteger,MMcons(sLinteger,Cnil))))
#define PT_m MMcons(sLvalues,MMcons(sLinteger,MMcons(sLinteger,Cnil)))
#define PT_b sLinteger
#define PT_f sLfixnum
#define PT(a_) Join(PT_,a_)
#define PT1(a_) MMcons(Join(PT_,a_),Cnil)
#define PT2(a_,b_) MMcons(PT1(a_),PT1(b_))
#define PT3(a_,b_,c_) MMcons(PT1(a_),PT2(b_,c_))
#define PT4(a_,b_,c_,d_) MMcons(PT1(a_),PT3(b_,c_,d_))

#define HH_bbb(a_...) RETURN3(a_)
#define HH_bb(a_...)  RETURN2(a_)
#define HH_fb(a_...)  RETURN2I(a_)
#define HH_fbb(a_...) RETURN3I(a_)
#define HH_m(a_...)   RETURN2(a_)
#define HH_b(a_...)   RETURN1(a_)
#define HH_f(a_...)   RETURN1(a_)

#define BF(n_,b_,r_,a_...)\
  DEFUNB_NEW("mpz_" #b_,R1(r_),Join(fSmpz_,b_),\
            GMP,n_,n_,NONE,Join(Q1,n_)(r_,a_),Join(Q2,n_)(r_,a_),Join(Q3,n_)(r_,a_),Join(Q4,n_)(r_,a_),\
	     (Join(D,n_)(a_)),PT(r_),"") { \
\
  AA1(r_);\
\
  Join(E,n_)(a_);\
  Join(W_,r_) Join(m__gmpz_,b_)(CC1(r_)Join(C,n_)(a_));\
  Join(HH_,r_)(Join(Z_,r_));\
\
}
