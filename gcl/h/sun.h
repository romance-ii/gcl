#define SUN
/* You probably want  a more specific include than this eg sun2r3,sun4,... */
  
#include "bsd.h"


#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SUN"); \
      	     ADD_FEATURE("MC68020")

#define	MC68K
#define	IEEEFLOAT


#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	if (header.a_magic == ZMAGIC) \
		filecpy(save, original, PAGSIZ - sizeof(header)); \
	filecpy(save, original, header.a_text);

#define DATA_BEGIN (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1))





/* Begin for cmpinclude */


/* End for cmpinclude */
