#include "linux.h"

#ifdef IN_GBC
/* GET_FAULT_ADDR is a bit complicated to implement on m68k, because the fault
   address can't be found directly in the sigcontext. One has to look at the
   CPU frame, and that one is different for each CPU.
   */
/* the following two files have changed back
   and forth in recent versions of linux...
   Include both if they both exist, otherwise
   include whatever one exists...
   basically one wants the
   struct sigcontext_struct { ... } ;
   so as to get the fault address.
   */

#if !defined(SIGNAL_H_HAS_SIGCONTEXT) && !defined(HAVE_SIGCONTEXT)
#error Need sigcontext on linux, at least in some architectures
#else
#include <signal.h>
#ifndef SIGNAL_H_HAS_SIGCONTEXT
#ifdef  HAVE_ASM_SIGCONTEXT_H     
#include <asm/sigcontext.h>
#endif
#ifdef  HAVE_ASM_SIGNAL_H          
#include <asm/signal.h>
#endif
#endif     
#endif

#define GET_FAULT_ADDR(sig,code,sv,a) \
    ({\
	struct sigcontext *scp1 = (struct sigcontext *)(sv); \
	int format = (scp1->sc_formatvec >> 12) & 0xf; \
	unsigned long *framedata = (unsigned long *)(scp1 + 1); \
	unsigned long ea; \
	if (format == 0xa || format == 0xb) \
			/* 68020/030 */	\
          ea = framedata[2]; \
	else if (format == 7) \
			/* 68040 */ \
          ea = framedata[3]; \
	else if (format == 4) {	\
			/* 68060 */ \
          ea = framedata[0]; \
          if (framedata[1] & 0x08000000) \
			/* correct addr on misaligned access */ \
            ea = (ea+4095)&(~4095); \
	} \
        else {\
           FEerror("Unknown m68k cpu",0);\
           ea=0;\
        } \
	(char *)ea; })
#endif

#define NULL_OR_ON_C_STACK(x) ( x == 0 || (((unsigned int) x) >= 0xe0000000 )) 

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("BSD386"); \
         	     ADD_FEATURE("MC68020")



#define	M68K
#define SGC

#include <asm/cachectl.h>
int cacheflush(void *,int,int,int);
#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE do {void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \
                        v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));\
                        cacheflush(v,FLUSH_SCOPE_PAGE,FLUSH_CACHE_BOTH,ve-v);\
                    } while(0)
