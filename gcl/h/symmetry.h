/* Machine-specific header declarations for Sequent Symmetry/DYNIX-3.0.12+ */
/* by Marion Hakanson <hakanson@cse.ogi.edu>, Oregon Graduate Institute.   */
/* $Id$ */

extern char etext;

#define SEQ
#define SEQUENT
#define SYMMETRY
#define I386
#include "bsd.h"
#undef	SFASL
/* the symmetry has non standard sigvec.
could change main.c or alternately:

+ #ifdef SEQUENT
+   vec.sv_onstack = (signo == SIGSEGV || signo == SIGBUS);
+ #else  
    vec.sv_flags =  (signo == SIGSEGV || signo == SIGBUS ? SV_ONSTACK : 0);
  #endif  
*/   
#undef HAVE_SIGVEC

/* what would be in h/include.h, and not in h/bsd.h */
#define	IEEEFLOAT

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SEQ"); \
		     ADD_FEATURE("SEQUENT"); \
		     ADD_FEATURE("SYMMETRY"); \
		     ADD_FEATURE("I386");


#define	TXTRELOC	N_ADDRADJ(header)	/* from a.out.h */

#define DATA_BEGIN (char *)(N_DATAOFF(header) + N_ADDRADJ(header));

/* width of page size that can be memory protected log2(getpagesize()) */
/* Also used in h/object.h to declare PAGESIZE, as used in h/bsd.h,
   as well as in much of the memory allocation code.  This ensures
   that the sbrk() boundary is on an even page, for creating a proper
   executable image. */
   
#define PAGEWIDTH 12 

#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	filecpy(save, original, header.a_text \
				- N_ADDRADJ(header) \
				- sizeof(header));

/* Begin for cmpinclude */


/* End for cmpinclude */
