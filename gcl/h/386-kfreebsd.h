#include "linux.h"

#ifdef IN_GBC
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
#endif

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

#define RELOC_H "elf32_i386_reloc.h"

#ifndef HAVE_SYSCONF_PHYS_PAGES
#error need SYSCONF_PHYS_PAGES to set real_maxpage
#endif
#define BRK_DOES_NOT_GUARANTEE_ALLOCATION
