#include "linux.h"

/*  #ifdef IN_GBC */
/*  #define GET_FAULT_ADDR(sig,code,sv,a) \ */
/*      ((void *)(*((char ***)(&code)))[17]) */
/*  #endif */

/*#define NULL_OR_ON_C_STACK(x) ((x)==0 || ((unsigned int)x) > (unsigned int)(pagetochar(MAXPAGE+1)))*/

/*  #define ADDITIONAL_FEATURES \ */
/*  		     ADD_FEATURE("BSD386"); \ */
/*        	             ADD_FEATURE("MC68020") */


/*  #define	I386 */
/*  #define SGC */

/*  #define CLEAR_CACHE do {void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; for (;v<ve;v+=32)   asm __volatile__ ("dcbst 0,%0\n\tsync\n\ticbi 0,%0\n\tsync\n\tisync": : "r" (v) : "memory");} while(0) */

#define MUST_COPY_VA_LIST
/* #define NULL_OR_ON_C_STACK(x) ((x)==0 || ((((unsigned long)x) > 0x100000000) && ((unsigned long)x) < 0x120000000)) */
#define NULL_OR_ON_C_STACK(x) (((unsigned long)x) < DBEGIN || ((unsigned long)x) > (unsigned long)(pagetochar(MAXPAGE)))

#undef MPROTECT_ACTION_FLAGS
#define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO
#ifdef IN_GBC
#include <ucontext.h>
#define GET_FAULT_ADDR(sig,code,scp,addr) \
  (char *)((struct ucontext *)scp )->uc_mcontext.sc_traparg_a0
#endif
#define SGC
#include <asm/system.h>
#define CLEAR_CACHE imb()
#define SPECIAL_BFD_INCLUDE "sfaslbfd_alpha.c"
