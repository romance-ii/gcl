
#include "genpari.h"
#undef K

#undef subis
#define subis(y,x) (x== (1<<31) ? addii(ABS_MOST_NEGS,y) : addsi(-x,y))
GEN subss();

#define INT_FLAG 0x1010000



/* the bit length of each word in bignum representation */
#define BIG_RADIX 32

/* used for gc protecting */
object big_register_1;

object big_minus();
object make_bignum();
object make_integer();
#define big_sign(x) signe(MP(x))
#define set_big_sign(x,sign) setsigne(MP(x),sign)
#define MP(x) ((GEN)((x)->big.big_self))
#define MP_START_LOW(u,x,l)  u = (x)+l
#define MP_START_HIGH(u,x,l)  u = (x)+2
#define MP_NEXT_UP(u) (*(--(u)))
#define MP_NEXT_DOWN(u) (*((u)++))
  /* ith word from the least significant */
#define MP_ITH_WORD(u,i,l) (u)[l-i-1]
#define MP_CODE_WORDS 2
/* MP_LOW(x,lgef(x)) is the least significant  word */
#define MP_LOW(x,l) ((x)[(l)-1])
/* most significant word if l is the lgef(x) */  
#define MP_HIGH(x,l) (x)[2]
#define MP_ONLY_WORD(u) MP_LOW((u),(MP_CODE_WORDS+1))

  
  
  
  
  
  
#define MP_FIRST(x) ((MP(x))[2])
#define MP_SIGN(x) (signe(MP(x)))
#define ZERO_BIG(x) \
  do { 	(x)->big.big_length = 2; \
	(x)->big.big_self = gzero;} while(0)





			   

GEN addss();

#define MPOP(dowith, fun,x1,x2) \
  do{GEN _xgen ; \
     save_avma ; \
     _xgen =fun(x1,x2) ;\
     restore_avma; \
     dowith make_integer(_xgen);  }while(0)


#define MPOP_DEST(where ,fun,x1,x2) \
  do{GEN _xgen ; \
     save_avma ; \
     _xgen =fun(x1,x2) ;\
     restore_avma; \
     gcopy_to_big(_xgen,where);  }while(0)







  



