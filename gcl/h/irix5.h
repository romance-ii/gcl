#define SGI
#include "att.h"
#include "mips.h"

#define HAVE_SIGACTION
#define SV_ONSTACK SA_ONSTACK


#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SGI"); \
		     ADD_FEATURE("MIPS"); ADD_FEATURE("IRIX5") ; \
		     ADD_FEATURE("IGNORE-UNRESOLVED")  	



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

#define EXTRA_BUFSIZE 8
#define NULL_OR_ON_C_STACK(x) ((((int)x) << 1) <=0)

/* for irix 5.xx */
#define HAVE_ELF

#define OUR_MAX(a,b) (a > b ? a : b)

#define SEEK_TO_END_OFILE(fp)\
 do{ int m; \
     Elf32_Ehdr eheader; \
     Elf32_Shdr shdr;  \
     fseek(fp,0,SEEK_SET);   \
     fread(&eheader,sizeof(eheader),1,fp); \
     fseek(fp,eheader.e_shoff+(eheader.e_shnum -1) \
	   *eheader.e_shentsize,0); \
     fread(&shdr,eheader.e_shentsize,1,fp); \
     fseek(fp,OUR_MAX(shdr.sh_offset+ shdr.sh_size, \
		      eheader.e_shoff+(eheader.e_shnum) \
		      *eheader.e_shentsize) \
		      , SEEK_SET);\
   }while(0)








#ifdef IN_UNIXFSYS
#undef ATT
#define BSD
#endif


     /* #define DBEGIN 0x600000 */
               
/* #define UNIXSAVE "save_sgi4.c" */

/* for irix 5... */

#undef UNIXSAVE
/* #define UNIXSAVE "unexelf.c" */
#define UNIXSAVE "unexelfsgi.c"
#ifdef IN_UNIXSAVE
#define round_up round_up1
#define bss_end core_end
#endif

#define INIT_CORE_END brk(core_end);


#ifdef IN_UNIXFASL
#include <filehdr.h>
#endif


#define UNIXFASL "fasldlsym.c"
#define USE_DLOPEN

#define IS_NOT_SHARED_OBJECT(fhdr,faslstream) \
   (fhdr.f_nscns < 6)
#define LD_SHARED(filename,buf) \
 sprintf(com,"ld -shared %s -ignore_unresolved  -o %s -lc",filename, buf)




#define DO_BEFORE_SAVE \
{ extern int did_a_dynamic_load; if (did_a_dynamic_load) \
    FEerror("Sorry, Cant save an image with dynamically loaded .o files",0);}
			   

#define HAVE_GETDTABLESIZE

/* Begin for cmpinclude */


/* End for cmpinclude */
