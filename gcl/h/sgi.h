#define SGI
#include "bsd.h"
#define USE_ATT_TIME


#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SGI"); \
  		     ADD_FEATURE("SGI3D"); \
		     ADD_FEATURE("MC68020")

#define	MC68020
#define	IEEEFLOAT

#undef   FILECPY_HEADER
#define FILECPY_HEADER \
  	filecpy(save, original, header.a_text);


	/* text relocated; data is page-aligned after the text */
#define DATA_BEGIN (char *)((TXTRELOC+header.a_text+(PAGSIZ-1)) & ~(PAGSIZ-1))

#define	PAGSIZ		4096
#define	TXTRELOC	4096

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE real_maxpage = MAXPAGE 

#define RELOC_FILE "rel_sun3.c"

/* Begin for cmpinclude */


/* End for cmpinclude */
