#define MP386
#include "att.h"
#include "386.h"


#define	IEEEFLOAT
  
#define I386

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("I386"); ADD_FEATURE("SYSTEM-V")
  
#undef SET_REAL_MAXPAGE  
#define SET_REAL_MAXPAGE \
	real_maxpage= ulimit(3)/PAGESIZE; \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE;

/* include some low level routines for maxima */
#define CMAC

#define RELOC_FILE "rel_coff.c"

/*  FIONREAD not supported */
#undef  LISTEN_FOR_INPUT

/* Begin for cmpinclude */


/* End for cmpinclude */
