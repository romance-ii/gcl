#define SGI
#include "att.h"

#undef NUMBER_OPEN_FILES
#define NUMBER_OPEN_FILES getdtablesize()


#define ADDITIONAL_FEATURES \
                     ADD_FEATURE("MIPS")

/* #define      mips 1
   The system defines this
 */
#define IEEEFLOAT

/* The exponent and most signif are in the second word for doubles */
#define LITTLE_END

#undef   FILECPY_HEADER
#define FILECPY_HEADER \
        filecpy(save, original, header.a_text);


        /* text relocated; data is page-aligned after the text */
#define DATA_BEGIN (char *)((TXTRELOC+header.a_text+(PAGSIZ-1)) & ~(PAGSIZ-1))

#define PAGSIZ          4096
#define TXTRELOC        4096

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



#define NOFREE_ERR

#define UNIXSAVE "savedec31.c"
#define UNIXFASL "faslsgi4.c"

#define HAVE_GETDTABLESIZE

#define SIGPROTV SIGBUS
#define GET_FAULT_ADDR(sig,code,sv,a) ((char *) code)
#define MPROTECT_FAIL_VALUE -1

/* void * is not accepted by compiler */
#define NO_VOID_STAR

/* Begin for cmpinclude */


/* #define SGC */


/* End for cmpinclude */

