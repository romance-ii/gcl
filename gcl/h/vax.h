extern char etext;


#define VAX
#include "bsd.h"
#undef SFASL

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("VAX");


#define DATA_BEGIN (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1));

#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	if (header.a_magic == ZMAGIC) \
		filecpy(save, original, PAGSIZ - sizeof(header)); \
	filecpy(save, original, header.a_text);


#define	PAGSIZ		1024
#define	SEGSIZ		1024
#define	TXTRELOC	0


/* Begin for cmpinclude */


/* End for cmpinclude */
