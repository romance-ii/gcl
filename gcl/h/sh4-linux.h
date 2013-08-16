#include "linux.h"

#ifdef IN_GBC
/*  #undef MPROTECT_ACTION_FLAGS */
/*  #define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO */
/*  #define GET_FAULT_ADDR(sig,code,sv,a) \ */
/*   ((siginfo_t *)code)->si_addr */
/* the following two files have changed back
   and forth in recent versions of linux...
   Include both if they both exist, otherwise
   include whatever one exists...
   basically one wants the
   struct sigcontext_struct { ... } ;
   so as to get the fault address.
   */

#if !defined(SIGNAL_H_HAS_SIGCONTEXT) && !defined(HAVE_SIGCONTEXT)
#error Need sigcontext on 386 linux
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

#undef MPROTECT_ACTION_FLAGS
#define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO
#define GET_FAULT_ADDR(sig,code,sv,a) ((siginfo_t *)code)->si_addr
/* #define GET_FAULT_ADDR(sig,code,sv,a) ((void *)(((struct sigcontext *)(&code))->cr2)) */
#endif

/*#define NULL_OR_ON_C_STACK(x) ((x)==0 || ((unsigned int)x) > (unsigned int)(pagetochar(MAXPAGE+1)))*/

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SH4"); \
      	             ADD_FEATURE("")


#define	SH4
#define SGC


#ifdef IN_SFASL
#include <sys/mman.h>
#define CLEAR_CACHE {\
   void *p,*pe; \
   p=(void *)((unsigned long)memory->cfd.cfd_start & ~(PAGESIZE-1)); \
   pe=(void *)((unsigned long)(memory->cfd.cfd_start+memory->cfd.cfd_size) & ~(PAGESIZE-1)) + PAGESIZE-1; \
   for (;p<pe;p++) asm __volatile__ ("ocbp @%0\n\t": : "r" (p) : "memory");\
}
#endif
#define RELOC_H "elf32_sh4_reloc.h"
