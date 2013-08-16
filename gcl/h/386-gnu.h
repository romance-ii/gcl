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
#ifndef SA_SIGINFO
#define GET_FAULT_ADDR(sig,code,sv,a) ((char *)code)
#define SA_SIGINFO 0
#else
#define GET_FAULT_ADDR(sig,code,sv,a) ((siginfo_t *)code)->si_addr
#endif
/* #define GET_FAULT_ADDR(sig,code,sv,a) ((void *)(((struct sigcontext *)(&code))->cr2)) */
#endif

/*#define NULL_OR_ON_C_STACK(x) ((x)==0 || ((unsigned int)x) > (unsigned int)(pagetochar(MAXPAGE+1)))*/

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("BSD386"); \
      	             ADD_FEATURE("MC68020")


#define	I386
#define SGC


#ifdef IN_SFASL
#include <sys/mman.h>
#define CLEAR_CACHE {\
   void *p,*pe; \
   p=(void *)((unsigned long)memory->cfd.cfd_start & ~(PAGESIZE-1)); \
   pe=(void *)((unsigned long)(memory->cfd.cfd_start+memory->cfd.cfd_size) & ~(PAGESIZE-1)) + PAGESIZE-1; \
   if (mprotect(p,pe-p,PROT_READ|PROT_WRITE|PROT_EXEC)) {\
     fprintf(stderr,"%p %p\n",p,pe);\
     perror("");\
     FEerror("Cannot mprotect", 0);\
   }\
}
#endif

#ifndef SA_NOCLDWAIT
#define SA_NOCLDWAIT 0 /*fixme handler does waitpid(-1, ..., WNOHANG)*/
#endif
#define PATH_MAX 4096 /*fixme dynamic*/
#define MAXPATHLEN 4096 /*fixme dynamic*/
#define MAX_BRK 0x70000000 /*GNU Hurd fragmentation bug*/

#define RELOC_H "elf32_i386_reloc.h"
