#define MP386
#include "att.h"
#include "386.h"
#undef SFASL
#undef LISTEN_FOR_INPUT
#undef NEED_GETWD

#ifdef IN_UNIXFSYS
#undef ATT
#define BSD
#define GETCWD
#endif

#define UNIXFASL "dummyfasl.c"


/* #define DBEGIN 0x8000000 */

#define	IEEEFLOAT
  
#define I386

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("I386"); ADD_FEATURE("SYSTEM-V")
  
#undef SET_REAL_MAXPAGE  
#define SET_REAL_MAXPAGE \
	real_maxpage= ulimit(3)/PAGESIZE; \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE;  \
  if (sbrk(0) < core_end)  brk(core_end);

/* include some low level routines for maxima */
#define CMAC

#define RELOC_FILE "rel_coff.c"


#define HAVE_ELF
#define SEEK_TO_END_OFILE(fp) \
   do{Elf32_Ehdr bil; \
          fseek((fp),0,0); \
          fread(&bil,1,sizeof(bil),(fp)); \
          fseek((fp),bil.e_shoff+bil.e_shnum*(bil.e_shentsize),0);}while(0)





/* Begin for cmpinclude */


/* End for cmpinclude */
#define UNIXSAVE "unexelf.c"
