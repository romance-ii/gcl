

#define IN_INIT_PARI

#define NEED_MP_H
#ifndef STANDALONE
#include "include.h"
#endif

#ifdef GMP
init_pari()
{
  ;
}
#else
GEN     gnil,gzero,gun,gdeux,ghalf,gi;
plong    lontyp[30]={0,0x10000,0x10000,1,1,1,1,2,1,0,2,2,1,1,1,0,1,1,1,1};
unsigned plong hiremainder,overflow;

#ifdef STANDALONE
#define FEerror printf
#define make_si_sfun(a,b,c) 
#endif

#define INITIAL_PARI_STACK 400
char initial_pari_stack[400];

our_ulong bot= (our_ulong) initial_pari_stack;
our_ulong top = (our_ulong)(initial_pari_stack+INITIAL_PARI_STACK);
/* not initted */
our_ulong avma= 0;


void
err(s)
     int s;
{ switch (s) {
 case errpile:
  FEerror("Out of bignum stack space, (si::MULTIPLY-BIGNUM-STACK n) to grow",0);
 case dvmer1:
 case diver4:
 case diver2:
 case diver1:
  FEerror("Divide by zero",0);
 case muler1:
  FEerror("Multiply overflow",0);
 case moder1:
  FEerror("Mod by 0",0);
 default:
      FEerror("Integer Arithmetic error",0);
}}




multiply_bignum_stack(n)
     int n;
{ int parisize = n* (top - bot);
  in_saved_avma = 0;
  if (n> 1) 
    { if (bot != (our_ulong)initial_pari_stack) free(bot);
      set_pari_stack(parisize);
    }
  return parisize;
}
  
set_pari_stack(parisize)
     int parisize;
{
  bot=(plong)malloc(parisize);
  top = avma = bot + parisize;
}


init_pari()
{
  if (avma==0)
    { 
	make_si_sfun("MULTIPLY-BIGNUM-STACK",multiply_bignum_stack,
		     ARGTYPE1(f_fixnum) | RESTYPE(f_fixnum));
	avma = top;
      }
 /* room for the permanent things */
 
  gnil = cgeti(2);gnil[1]=2; setpere(gnil,255);
  gzero = cgeti(2);gzero[1]=2; setpere(gzero, 255);
  gun = stoi(1); setpere(gun, 255);
  gdeux = stoi(2); setpere(gdeux, 255);
  ghalf = cgetg(3,4);ghalf[1]=un;ghalf[2]=deux; setpere(ghalf, 255);
  gi = cgetg(3,6); gi[1] = zero; gi[2] = un; setpere(gi, 255);

  /* set_pari_stack(BIGNUM_STACK_SIZE);*/
 }



#endif
