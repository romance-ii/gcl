#define	CONVEX
#include "bsd.h"

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("CONVEX");
			       
#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	if (header.a_magic == ZMAGIC) \
		filecpy(save, original, PAGSIZ - sizeof(header)); \
	filecpy(save, original, header.a_text);

#define DATA_BEGIN (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1))



#define	PAGSIZ		0x1000
#define	SEGSIZ		0x1000
#define	TXTRELOC	header.a_torigin


/* Begin for cmpinclude */


/* End for cmpinclude */
