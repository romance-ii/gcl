#include "linux.h"

#ifdef IN_GBC
/*  #undef MPROTECT_ACTION_FLAGS */
/*  #define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO */
/*  #define GET_FAULT_ADDR(sig,code,sv,a) \ */
/*   ((siginfo_t *)code)->si_addr */
#define GET_FAULT_ADDR(sig,code,sv,a) \
  ((siginfo_t *)code )->si_addr
#endif

/*#define NULL_OR_ON_C_STACK(x) ((x)==0 || ((unsigned int)x) > (unsigned int)(pagetochar(MAXPAGE+1)))*/

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("BSD386"); \
      	             ADD_FEATURE("MC68020")


#define	I386
#define SGC

/* Apparently stack pointers can be 4 byte aligned, at least &argc -- CM */
#define C_GC_OFFSET 4

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
