#include "bsd.h"

#ifndef __ELF__
#error Linux systems use ELF
#endif

#undef HAVE_AOUT
#define HAVE_AOUT <elf.h>
#define HAVE_ELF

/* Seeking to the end of ELF data is a little messy... */
#include <link.h>
#define SEEK_TO_END_OFILE(fp)\
  do { \
	long offset = 0, endofelf; int j; \
	ElfW(Ehdr) eheader; ElfW(Shdr) shdr; \
        fseek(fp, 0, SEEK_SET); \
        fread(&eheader, sizeof(eheader), 1, fp); \
  /* in case the headers themselves come AFTER the actual sections */ \
	endofelf=offset = eheader.e_shoff+ eheader.e_shentsize *eheader.e_shnum;\
        fseek(fp, eheader.e_shoff, SEEK_SET); \
	if ( eheader.e_shentsize != sizeof(ElfW(Shdr)) ) \
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
#define MPROTECT_ACTION_FLAGS SA_RESTART
#define INSTALL_MPROTECT_HANDLER \
do {static struct sigaction action; \
      action.sa_handler = (void *)memprotect_handler; \
      action.sa_flags = MPROTECT_ACTION_FLAGS; \
      /*action.sa_restorer = 0;*/ \
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

#endif

#define ELF_TEXT_BASE  DBEGIN

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE do { struct rlimit data_rlimit; \
                              extern char etext; \
			       real_maxpage = MAXPAGE ;\
     	getrlimit(RLIMIT_DATA, &data_rlimit); \
	real_maxpage = ((unsigned int)&etext/PAGESIZE \
			+ data_rlimit.rlim_cur/PAGESIZE - ELF_TEXT_BASE/PAGESIZE); \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE ; } while(0)

#ifdef USE_DLOPEN
#define SPECIAL_RSYM "rsym_elf.c"
#define SEPARATE_SFASL_FILE "fasldlsym.c"
#else
#ifdef HAVE_LIBBFD
#define SEPARATE_SFASL_FILE "sfaslbfd.c"
#else
#if !defined(__i386__) && !defined(__sparc__)
#error Can only do non-bfd relocs for i386 and sparc
#endif
#define SPECIAL_RSYM "rsym_elf.c"
#define SEPARATE_SFASL_FILE "sfaslelf.c"
#endif
#endif

#define UNEXEC_USE_MAP_PRIVATE
#define UNIXSAVE "unexelf.c"

#undef HAVE_SIGVEC
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

#define	IEEEFLOAT
       
#define HAVE_XDR

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

#define	PAGSIZ		(NBPG)
#define	SEGSIZ		(NBPG * CLSIZE)
#define	TXTRELOC	0

#define USE_DIRENT
#define GETPATHNAME
#define PATHNAME_CACHE	10


#define INSTALL_SEGMENTATION_CATCHER \
  	 (void) signal(SIGSEGV,segmentation_catcher)


/* get the fileno of a FILE* */
#define FILENO(x) fileno(x)

#define ULONG_DEFINED

#undef LD_COMMAND
#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -S -N -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)

#define SET_SESSION_ID() (setpgrp() ? -1 : 0)

#define CLEANUP_CODE \
  setbuf(stdin,0); \
   setbuf(stdout,0);

#define INIT_CORE_END terminal_io->sm.sm_object0->sm.sm_fp = stdin;terminal_io->sm.sm_object1->sm.sm_fp = stdout;

#include <limits.h>
#include <sys/stat.h>
#define GET_FULL_PATH_SELF(a_) do {\
 char b[20];\
 static char q[PATH_MAX];\
 struct stat ss;\
 if (snprintf(b,sizeof(b),"/proc/%d/exe",getpid())<=0)\
   error("Cannot write proc exe pathname");\
 if (stat(b,&ss)) \
   (a_)=argv[0];\
 else {\
   if (!realpath(b,q)) \
     error("realpath error");\
   (a_)=q;\
 }\
} while(0)
