#include "linux.h"

#ifdef IN_GBC
/*  #undef MPROTECT_ACTION_FLAGS */
/*  #define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO */
/*  #define GET_FAULT_ADDR(sig,code,sv,a) \ */
/*   ((siginfo_t *)code)->si_addr */
#define GET_FAULT_ADDR(sig,code,sv,a) \
    ((void *)(((struct sigcontext_struct *)(&code))->cr2))
#endif

/*#define NULL_OR_ON_C_STACK(x) ((x)==0 || ((unsigned int)x) > (unsigned int)(pagetochar(MAXPAGE+1)))*/

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("BSD386"); \
      	             ADD_FEATURE("MC68020")


#define	I386
#define SGC
