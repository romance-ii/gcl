#define SUN3
#include "bsd.h"
#include "mc68k.h"
#define PAGEWIDTH 12
  
#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SUN"); \
      	     ADD_FEATURE("MC68020")


#define	MC68020
#define	IEEEFLOAT


#define DATA_BEGIN (char *)N_DATADDR(header)


/* in release 4.0 it is SIGSEGV, and release 4.1 it is SIGBUS */
#define INSTALL_MPROTECT_HANDLER (signal(SIGSEGV, memprotect_handler),\
				  signal(SIGBUS, memprotect_handler))

#define RELOC_FILE "rel_sun3.c"


/* Begin for cmpinclude */

#ifdef __GNUC__
#undef __BUILTIN_VA_ARG_INCR
#endif

#define SGC

/* End for cmpinclude */


/* Sun 4.1 needs to have some cached yp stuff undone at save time */

#define HAVE_YP_UNBIND
