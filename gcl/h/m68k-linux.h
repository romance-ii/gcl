/* #define GMP */
#define BSD386
#include "bsd.h"


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

/* the following two files have changed back
   and forth in recent versions of linux...
   Include both if they both exist, otherwise
   include whatever one exists...
   basically one wants the
   struct sigcontext_struct { ... } ;
   so as to get the fault address.
   */

#ifdef   SIGNAL_H_HAS_SIGCONTEXT
#include <signal.h>
#else     
#ifdef HAVE_ASM_SIGCONTEXT_H     
#include <asm/sigcontext.h>
#endif
#ifdef HAVE_ASM_SIGNAL_H          
#include <asm/signal.h>
#endif
#ifdef HAVE_SIGCONTEXT
#define sigcontext_struct sigcontext
#endif
#endif     


/* GET_FAULT_ADDR is a bit complicated to implement on m68k, because the fault
   address can't be found directly in the sigcontext. One has to look at the
   CPU frame, and that one is different for each CPU.
   */
#define GET_FAULT_ADDR(sig,code,sv,a) \
    ({	\
	struct sigcontext *scp = (struct sigcontext *)(sv); \
	int format = (scp->sc_formatvec >> 12) & 0xf; \
	unsigned long *framedata = (unsigned long *)(scp + 1); \
	unsigned long ea; \
	if (format == 0xa || format == 0xb) \
			/* 68020/030 */	\
          ea = framedata[2]; \
	else if (format == 7) \
			/* 68040 */ \
          ea = framedata[3]; \
	else if (format == 4) {	\
			/* 68060 */ \
          ea = framedata[0]; \
          if (framedata[1] & 0x08000000) \
			/* correct addr on misaligned access */ \
            ea = (ea+4095)&(~4095); \
	} \
	ea; })
#endif


/* is #define ELF_TEXT_BASE 0x8000000   on current linux */
#define ELF_TEXT_BASE  DBEGIN

/* on some linux x86 machines the C stack starts in positive number
   range, however since we might compile on one and run on another
   we will have to do this:
*/   
#define NULL_OR_ON_C_STACK(x) ( x == 0 || (((unsigned int) x) >= 0xe0000000 )) 

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE do { struct rlimit data_rlimit; \
                               extern char etext; \
			       real_maxpage = MAXPAGE ;\
     	getrlimit(RLIMIT_DATA, &data_rlimit); \
			real_maxpage = ((unsigned int)&etext/PAGESIZE \
			+ data_rlimit.rlim_cur/PAGESIZE - ELF_TEXT_BASE/PAGESIZE); \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE ; } while(0)

#define SPECIAL_RSYM "rsym_elf.c"
#define SEPARATE_SFASL_FILE "sfaslelf.c"

#define UNEXEC_USE_MAP_PRIVATE
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
#ifndef HAVE_SV_ONSTACK
#define SV_ONSTACK 0
#endif

/* unblock signals m and n, and set val to signal_mask(m) | signal_mask(n)
   if they were set */
#define SIG_UNBLOCK_SIGNALS(val,m,n) \
    current_mask = sigblock(0);  \
    sigsetmask(~(sigmask(m)) & ~(sigmask(n)) & current_mask); \
    result = (current_mask & sigmask(m) ? signal_mask(m) : 0) \
      | (current_mask & sigmask(n) ? signal_mask(n) : 0);

#undef RUN_PROCESS

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("BSD386"); \
      	     ADD_FEATURE("MC68020")


#define	M68K
#define	IEEEFLOAT
       

/* Pages on Linux are 4096 bytes. */
#ifdef PAGEWIDTH
#error PAGEWIDTH definition conflict
#endif
#define PAGEWIDTH       12      /*  page width  */


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


#define LITTLE_END

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
#ifndef HAVE_SIGSYS
#define SIGSYS SIGSEGV
#endif

#ifndef HAVE_SIGEMT
#define SIGEMT SIGSEGV
#endif


/* get the fileno of a FILE* */
#define FILENO(x) fileno(x)

#define ULONG_DEFINED
/* #define NO_PROFILE */



#undef LD_COMMAND
#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -S -N -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)

#define SET_SESSION_ID() (setpgrp() ? -1 : 0)




/* NOTE: The following text will be automatically included in a
   constructed file cmpinclude.h */
/* Begin for cmpinclude */


/* NOTE: If you don't have the system call mprotect DON'T
   define this.
   All Linux ELF systems should have mprotect. */
#ifdef __ELF__
#define SGC
#endif

/* _setjmp and _longjmp exist on bsd and are more efficient
   and handle the C stack which is all we need. [I think!]
 */

/* End for cmpinclude */
/* define if there is no _cleanup,   do here what needs
   to be done before calling unexec
   */   
#define CLEANUP_CODE \
  setbuf(stdin,0); \
   setbuf(stdout,0);

/* the following will try to make sure that the stdin and stdout are
set correctly on startup after a save */


#define INIT_CORE_END terminal_io->sm.sm_object0->sm.sm_fp = stdin;terminal_io->sm.sm_object1->sm.sm_fp = stdout;


