#define SUN3
#include "bsd.h"
#include "mc68k.h"

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SUN"); \
      	     ADD_FEATURE("MC68020")


#define	MC68020
#define	IEEEFLOAT


#define DATA_BEGIN (char *)N_DATADDR(header)

#define RELOC_FILE "rel_sun3.c"


/* Begin for cmpinclude */


/* End for cmpinclude */


