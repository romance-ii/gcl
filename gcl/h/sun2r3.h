#include "bsd.h"

#define SUN2R3
#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SUN"); \
      	     ADD_FEATURE("MC68K")

  
#define	MC68K
#define	IEEEFLOAT

#define DATA_BEGIN (char *)N_DATADDR(header)
/* Begin for cmpinclude */


/* End for cmpinclude */
