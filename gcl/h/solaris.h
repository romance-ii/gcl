#define __ELF__
#define ElfW(a) Elf32_ ## a

#include "linux.h"

#ifdef IN_GBC
#undef MPROTECT_ACTION_FLAGS
#define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO
#define GET_FAULT_ADDR(sig,code,sv,a) \
 ((siginfo_t *)code)->si_addr
/*  #define GET_FAULT_ADDR(sig,code,sv,a) \ */
/*      ((void *)(*((char ***)(&code)))[44]) */
#endif

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SUN"); \
      	             ADD_FEATURE("SPARC")

#define	SPARC
#define SGC

#define PTR_ALIGN 8

#undef LISTEN_FOR_INPUT
#undef SIG_UNBLOCK_SIGNALS
#define NO_SYSTEM_TIME_ZONE
