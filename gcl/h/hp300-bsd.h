#define HP300_BSD
#include "bsd.h"
#include "mc68k.h"

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("HP300"); \
      	     ADD_FEATURE("MC68020")


#define	MC68020
#define	IEEEFLOAT




#define DATA_BEGIN (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1));

#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	if (header.a_magic == ZMAGIC) \
		filecpy(save, original, PAGSIZ - sizeof(header)); \
	filecpy(save, original, header.a_text);


#define RELOC_FILE "rel_sun3.c"


#include <machine/machparam.h>
#undef LITTLE_END

#define	PAGSIZ		(NBPG)
#define	SEGSIZ		(NBPG * CLSIZE)
#define	TXTRELOC	0

#define USE_DIRENT
#define GETPATHNAME
#define PATHNAME_CACHE	10

#define HZ		60
/* try out the gnu malloc */
/* #define GNU_MALLOC */

#define SIGPROTV SIGBUS
/* In my implementation I have put the address in code
   Doubtless this will change in Xinu code.
   
 */
#define GET_FAULT_ADDR(sig,code,sv,a) ((char *) code)

#define INSTALL_SEGMENTATION_CATCHER \
  	 (void) signal(SIGSEGV,segmentation_catcher); \
  	 (void) signal(SIGBUS,segmentation_catcher)




/* Begin for cmpinclude */


/* NOTE: If you don't have the system call mprotect DON'T
   define this.
   I have added it to my own kernel.
   */
   
#define SGC

/* _setjmp and _longjmp exist on bsd and are more efficient
   and handle the C stack which is all we need. [I think!]
   
 */

#define setjmp _setjmp
#define longjmp _longjmp

/* End for cmpinclude */


