#define SGI
#include "att.h"
#include "mips.h"

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SGI"); \
		     ADD_FEATURE("MIPS")

/* #define	mips 1
   The system defines this
 */
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

#define RELOC_FILE "rel_mips.c"

#undef SFASL

#undef NEED_GETWD

#define SEEK_TO_END_OFILE \
       	do{HDRR symhdr; \
	   fp = faslfile->sm.sm_fp;\
           fread(&fileheader, sizeof(fileheader), 1, fp); \
	   fseek(fp, fileheader.f_symptr, 0); \
 	   fread(&symhdr, cbHDRR, 1, fp); \
            fseek(fp, symhdr.cbExtOffset + symhdr.iextMax * cbEXTR, 0);} \
       while(0);


#ifdef IN_UNIXFSYS
#undef ATT
#define BSD
#endif


/* #define DBEGIN 0x600000 */
               
#define UNIXSAVE "save_sgi4.c"
#define UNIXFASL "faslsgi4.c"
#define HAVE_GETDTABLESIZE

/* Begin for cmpinclude */


/* End for cmpinclude */
