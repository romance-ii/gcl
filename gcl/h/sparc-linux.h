#define BSD386
#include "bsd.h"

#include <sys/types.h>

#ifdef __ELF__
/* #if ! defined(IN_UNIXFASL) */
#undef HAVE_AOUT
#define HAVE_AOUT <elf.h>
#define HAVE_ELF

/* Seeking to the end of ELF data is a little messy... */
#define SEEK_TO_END_OFILE(fp)\
  do { \
	long offset = 0, endofelf; int j; \
	Elf32_Ehdr eheader; Elf32_Shdr shdr; \
        fseek(fp, 0, SEEK_SET); \
        fread(&eheader, sizeof(eheader), 1, fp); \
  /* in case the headers themselves come AFTER the actual sections */ \
	endofelf=offset = eheader.e_shoff+ eheader.e_shentsize *eheader.e_shnum;\
        fseek(fp, eheader.e_shoff, SEEK_SET); \
	if ( eheader.e_shentsize != sizeof(Elf32_Shdr) ) \
	  { FEerror("Bad ELF section header size",0); } \
        for ( j = 0; j < eheader.e_shnum; j++ ) \
	  { fread(&shdr,eheader.e_shentsize,1,fp); \
            if ( (shdr.sh_offset > offset) && (shdr.sh_type != SHT_NOBITS) ) \
	      { offset = shdr.sh_offset; endofelf = offset+shdr.sh_size; } \
	  } \
	if ( fseek(fp, endofelf, SEEK_SET) ) \
	    FEerror("Bad ELF file",0); \
      } while(0)


#ifdef IN_GBC
/* Based upon sun4.h */
#define INSTALL_MPROTECT_HANDLER \
do {static struct sigaction action; \
      action.sa_handler = memprotect_handler; \
      action.sa_flags = SA_RESTART; \
      action.sa_restorer = 0; \
      sigemptyset(&action.sa_mask); \
      sigaddset(&action.sa_mask,SIGINT); \
      sigaddset(&action.sa_mask,SIGALRM); \
      sigaction(SIGSEGV,&action,0); \
      sigaction(SIGBUS,&action,0);} while (0)

#include <asm/sigcontext.h>
/*#define GET_FAULT_ADDR(sig,code,sv,a) \
    ((void *)(((struct sigcontext_struct *)(&code))->sigc_pc))*/
#endif

#define ELF_TEXT_BASE 0x10000


#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE do { struct rlimit data_rlimit; \
			       real_maxpage = MAXPAGE ;\
     	getrlimit(RLIMIT_DATA, &data_rlimit); \
	real_maxpage = ((unsigned int)&etext/PAGESIZE \
			+ data_rlimit.rlim_cur/PAGESIZE - ELF_TEXT_BASE/PAGESIZE); \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE ; } while(0)

#define SPECIAL_RSYM "rsym_elf.c"
#define SEPARATE_SFASL_FILE "sfaslelf.c"

#define UNIXSAVE "unexelf.c"
/* end ELF */
#else
#define RELOC_FILE "rel_sun3.c"
#define UNIXSAVE "unexec.c"

#define start_of_data() &etext
#define start_of_text() ( (char *) 0 )
#define A_TEXT_OFFSET(hdr) (N_MAGIC(hdr) == QMAGIC ? sizeof (struct exec) : 0)
#define A_TEXT_SEEK(hdr) (N_TXTOFF(hdr) + A_TEXT_OFFSET(hdr))
#define ADJUST_EXEC_HEADER \
  unexec_text_start = N_TXTADDR(ohdr) + A_TEXT_OFFSET(ohdr)

#endif




/* #include "386.h" */
#undef HAVE_SIGVEC
/* #define NEED_TO_REINSTALL_SIGNALS */
#define HAVE_SIGACTION
/* make this a noop */
#define SETUP_SIG_STACK
#define SV_ONSTACK 0

/* unblock signals m and n, and set val to signal_mask(m) | signal_mask(n)
   if they were set */
#define SIG_UNBLOCK_SIGNALS(val,m,n) \
    current_mask = sigblock(0);  \
    sigsetmask(~(sigmask(m)) & ~(sigmask(n)) & current_mask); \
    result = (current_mask & sigmask(m) ? signal_mask(m) : 0) \
      | (current_mask & sigmask(n) ? signal_mask(n) : 0);

#undef RUN_PROCESS

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SUN"); \
      	     ADD_FEATURE("SPARC")


#define	SPARC
#define	IEEEFLOAT
       

/* Pages on Linux are 4096 bytes. */
#ifdef PAGEWIDTH
#error PAGEWIDTH definition conflict
#endif
/*#define PAGEWIDTH       12*/      /*  page width  */
#define PAGEWIDTH       13      /*  page width  */


#undef HAVE_XDR

#ifdef IN_UNIXSAVE
#include <linux/user.h> 
#endif

#define USE_ULONG_

/*   How to check for input */
#undef LISTEN_FOR_INPUT

#define LISTEN_FOR_INPUT(fp) \
do { int c = 0; \
  if(((fp)->_IO_read_ptr >= (fp)->_IO_read_end) \
     && (ioctl((fp)->_fileno, FIONREAD, &c),c<=0)) \
     return 0;} while (0)

/* we dont need to worry about zeroing fp->_base , to prevent  */
#define FCLOSE_SETBUF_OK 

/* #define DATA_BEGIN((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1)); */
#define DATA_BEGIN (char *)(char *)N_DATADDR(header);

/*
#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	if (header.a_magic == ZMAGIC) \
		filecpy(save, original, PAGSIZ - sizeof(header)); \
	filecpy(save, original, header.a_text);
*/


#define BIG_ENDIAN

#define	PAGSIZ		(NBPG)
#define	SEGSIZ		(NBPG * CLSIZE)
#define	TXTRELOC	0

#define USE_DIRENT
#define GETPATHNAME
#define PATHNAME_CACHE	10


/* try out the gnu malloc */
/* #define GNU_MALLOC */

#define INSTALL_SEGMENTATION_CATCHER \
  	 (void) signal(SIGSEGV,segmentation_catcher)
/* if you are in an early version of linux without SIGBUS, uncomment
   the next line */
/* #define SIGBUS SIGSEGV */
/*#define SIGSYS SIGSEGV*/
/*#define SIGEMT SIGSEGV*/


/* get the fileno of a FILE* */
#define FILENO(x) fileno(x)

#define ULONG_DEFINED
#define NO_PROFILE



#undef LD_COMMAND
#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -S -N -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)

#define SET_SESSION_ID() (setpgrp() ? -1 : 0)

#include "sparc.h"


/* NOTE: The following text will be automatically included in a
   constructed file cmpinclude.h */
/* Begin for cmpinclude */

/* NOTE: If you don't have the system call mprotect DON'T
   define this, or if you dont know what to define for
   GET_FAULT_ADDR above.
   All Linux ELF systems should have mprotect. */
#ifdef __ELF__
/* #define SGC */
#endif

/* _setjmp and _longjmp exist on bsd and are more efficient
   and handle the C stack which is all we need. [I think!]
 */

/* End for cmpinclude */
