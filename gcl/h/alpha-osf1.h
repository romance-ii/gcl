
#include "att.h"

#define PAGEWIDTH 12

#define HAVE_FLOAT_H
#define HAVE_AOUT <a.out.h>

/* make the default allocated relblock suitable for pointer alignment */

#define USE_PARI_MULLL

/* #define PLONG_IS_64BIT */


#undef NUMBER_OPEN_FILES
#define NUMBER_OPEN_FILES getdtablesize()


#define ADDITIONAL_FEATURES \
                     ADD_FEATURE("MIPS") ; ADD_FEATURE("DLOPEN"); \
   ADD_FEATURE("LD-NOT-ACCEPT-DATA") ; \
   ADD_FEATURE("POINTER-BIGGER-INT") ; \
   ADD_FEATURE("EXPECT-UNRESOLVED")  	

/* we dont tack on the data file but rather use it */
#define SEEK_TO_END_OFILE(x) fseek(x,0,2)


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

#define RELOC_FILE "rel_coff.c"

#undef SFASL


#undef NEED_GETWD






#ifdef IN_UNIXFSYS
#undef ATT
#define BSD
#endif

#ifdef IN_UNIXTIME
#undef ATT
#define BSD
#endif



/* #define DBEGIN 0x12000000 */
#define TBEGIN 0x10000000
#define NOFREE_ERR

/* #define INT_TO_ADDRESS(x) ((long) x ? (object) (0x100000000 |  (long) x) : (object )0) */
#define INT_TO_ADDRESS(x) ((void *)(long)x)

#define NULL_OR_ON_C_STACK(x) ((long)x < TBEGIN)

#define TEXT_START    TBEGIN
#define DATA_START    DBEGIN
#define UNIXSAVE "unexmips.c"

/* #define UNIXFASL "faslosf.c" */
#define UNIXFASL "fasldlsym.c"
#define USE_DLOPEN
#define MAKE_SHARED_LIB  

/* this is a pretty poor test... */
#define IS_NOT_SHARED_OBJECT(fhdr,faslstream) \
   (fhdr.f_nscns < 8)
#define LD_SHARED(filename,buf) \
 sprintf(com,"ld -shared %s -expect_unresolved '*' -o %s -lc",filename, buf)

#define HAVE_GETDTABLESIZE

#define SIGPROTV SIGBUS
#define GET_FAULT_ADDR(sig,code,sv,a) ((char *) code)
#define MPROTECT_FAIL_VALUE -1

/* void * is not accepted by compiler */
#define NO_VOID_STAR

#undef IF_ALLOCATE_ERR 

#define IF_ALLOCATE_ERR \
	if (core_end != sbrk(0))\
         {int ll;   \
	   if ((ll=(int)(sbrk(0) - core_end))  <= PAGESIZE) \
           {sbrk(PAGESIZE - ll); \
            type_map[page(core_end)] = t_other; \
            heap_end=core_end = sbrk(0); }\
          else  \
        error("Someone allocated my memory!");} \
	if (core_end != (sbrk(PAGESIZE*(n - m))))

#define  DO_BEFORE_SAVE setbuf(stdin,0) ; setbuf(stdout,0) ;setbuf(stderr,0) ;

#define INIT_CORE_END terminal_io->sm.sm_object0->sm.sm_fp = stdin;terminal_io->sm.sm_object1->sm.sm_fp = stdout;


#ifdef IN_NUM_CO
#include <float.h>
#endif

/* Begin for cmpinclude */

#define SYSTEM_SPECIAL_INIT static init_code(){do_init(VV);}

#define plong int

/* #define SGC */


/* End for cmpinclude */

