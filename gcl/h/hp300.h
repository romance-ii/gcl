#define HPUX
#define HP
  
#include "bsd.h"
#undef RUN_PROCESS
#undef WANT_VALLOC
  /* uses sigvector instead of sigvec.   Could alternately
     link with -lbsd */
#define sigvec sigvector  
/* does not have getpagesize() */
#include "mc68k.h"

/*
#define SBRK(n) \
  (printf("sbrk(%x)=%x",n,FIXtemp=sbrk(n)),fflush(stdout),FIXtemp)

#define BRK(n) \
  (printf("brk(%x)=%x",n,FIXtemp=brk(n)),fflush(stdout),FIXtemp)
*/
  
/* #undef SFASL */

  /* since we do brk of the whole thing we use a smaller number */


#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("HP9000-300"); \
                      ADD_FEATURE("MC68020"); \
    ADD_FEATURE("HP-UX");


/*
#define USE_C_EXTENDED_MUL
#define USE_C_EXTENDED_DIV
*/

#define DATA_BEGIN (char *)N_DATADDR(header)

#define RELOC_FILE "rel_hp300.c"

#define	IEEEFLOAT

#define reloc r_info

#define N_RELOFF(hdr) RTEXT_OFFSET(hdr)
#define N_SYMOFF(hdr) LESYM_OFFSET(hdr)
#define N_TXTOFF(hdr) TEXT_OFFSET(hdr)

/* #undef cs_check */

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE real_maxpage = MAXPAGE


/*
#undef INIT_ALLOC
#define INIT_ALLOC 	if (BRK(pagetochar(MAXPAGE)) < 0) \
		error("Can't allocate.  Good-bye!.");
*/

#define SEEK_TO_END_OFILE(fp) \
  do{struct exec header; \
     fseek(fp,0,0); \
     fread(&header, sizeof(header), 1, fp); \
     fseek(fp,RDATA_OFFSET(header)+header.a_drsize,0); \
     }while(0)

/* have the getcwd command */

#define GETCWD

/* note gabor used the att ldirectory... maybe bsd is ok?? */

#undef LD_COMMAND

/*   This is for pre 6.01 hpux, you need to create .stb file
#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command,"ld -o %s -N -x -R %x %s %s.stb %s",  \
           output,start,input, main,ldarg)

*/
  
#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -N -x -A %s -R %x %s %s -o %s", \
       main,start,input,ldarg,output)




/*
#define	SIGNED_CHAR  
#define	REGISTER_VAR
#define	BYTE_ADDRESS
#define	CORE_STARTS_NEAR_0
#undef	DOWN_STACK
#undef	REVERSE_PARAMETER_ORDER
#undef	CC_OPTIMIZES_TEST  
#define	UNIX
#undef	BSD
#define	HPUX
#undef	ATT
#define	ALLOCATE_INCREMENTALLY
#define	ALLOW_FORK

*/

#undef DATA_BEGIN
#define DATA_BEGIN \
  ((char *) (header.a_magic.file_type == SHARE_MAGIC || \
		    header.a_magic.file_type == DEMAND_MAGIC) ? \
		    EXEC_ALIGN(header.a_text) : \
		    header.a_text)

#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	if (header.a_magic.file_type == DEMAND_MAGIC) \
		{filecpy(save, original, EXEC_PAGESIZE - sizeof(header)); \
		   filecpy(save, original, EXEC_ALIGN(header.a_text));} \
        else \
	filecpy(save, original, header.a_text);

#undef COPY_TO_SAVE
#define  COPY_TO_SAVE \
	fseek(save, MODCAL_OFFSET(header), 0); \
	header.a_data = original_data; \
	fseek(original, MODCAL_OFFSET(header), 0); \
	filecpy(save, original,  \
		header.a_pasint+ \
		header.a_lesyms+ \
		header.a_dnttsize+header.a_sltsize+header.a_vtsize+ \
		header.a_trsize+header.a_drsize)

/* use #include <fcntl.h> */

#define HAVE_FCNTL

#define RSYM_AUX "../c/rel_hp300.c"


#define FIX_BSS     sym->n_type = N_BSS; \
	       val = (val + 3) & ~3;

#define PRIVATE_FASLINK

/* Begin for cmpinclude */


/* End for cmpinclude */
