#include "bsd.h"

#ifndef __ELF__
#error Linux systems use ELF
#endif

#undef HAVE_AOUT
/* #define HAVE_AOUT <elf.h> */
#define HAVE_ELF

/* Seeking to the end of ELF data is a little messy... */
#include <link.h>
#define SEEK_TO_END_OFILE(fp)\
  do { \
	long offset = 0, endofelf; int j; \
	ElfW(Ehdr) eheader; ElfW(Shdr) shdr; \
        fseek(fp, 0, SEEK_SET); \
        massert(1==fread(&eheader, sizeof(eheader), 1, fp));	      \
  /* in case the headers themselves come AFTER the actual sections */ \
	endofelf=offset = eheader.e_shoff+ eheader.e_shentsize *eheader.e_shnum;\
        fseek(fp, eheader.e_shoff, SEEK_SET); \
	if ( eheader.e_shentsize != sizeof(ElfW(Shdr)) ) \
	  { FEerror("Bad ELF section header size",0); } \
        for ( j = 0; j < eheader.e_shnum; j++ ) \
	  { massert(1==fread(&shdr,eheader.e_shentsize,1,fp));		\
            if ( (shdr.sh_offset > offset) && (shdr.sh_type != SHT_NOBITS) ) \
	      { offset = shdr.sh_offset; endofelf = offset+shdr.sh_size; } \
	  } \
	if ( fseek(fp, endofelf, SEEK_SET) ) \
	    FEerror("Bad ELF file",0); \
      } while(0)


#define GET_FAULT_ADDR(sig,code,sv,a) ((siginfo_t *)code)->si_addr
#define MPROTECT_ACTION_FLAGS SA_RESTART | SA_ONSTACK | SA_SIGINFO
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

#undef SETUP_SIG_STACK

#define ELF_TEXT_BASE  DBEGIN

/* #undef SET_REAL_MAXPAGE */
/* #define SET_REAL_MAXPAGE do { struct rlimit data_rlimit; \ */
/*                               extern char etext; \ */
/* 			       real_maxpage = MAXPAGE ;\ */
/*      	getrlimit(RLIMIT_DATA, &data_rlimit); \ */
/* 	real_maxpage = ((unsigned long)&etext/PAGESIZE \ */
/* 			+ data_rlimit.rlim_cur/PAGESIZE - ELF_TEXT_BASE/PAGESIZE); \ */
/* 	if (real_maxpage > MAXPAGE) \ */
/* 		real_maxpage = MAXPAGE ; } while(0) */

#ifdef USE_DLOPEN
#define SPECIAL_RSYM "rsym_elf.c"
#define SEPARATE_SFASL_FILE "fasldlsym.c"
#else
#ifdef HAVE_LIBBFD
#define SEPARATE_SFASL_FILE "sfaslbfd.c"
#else
/* #if !defined(__i386__) && !defined(__sparc__) */
/* #error Can only do non-bfd relocs for i386 and sparc */
/* #endif */
#define SPECIAL_RSYM "rsym_elf.c"
#define SEPARATE_SFASL_FILE "sfaslelf.c"
#endif
#endif

#define UNEXEC_USE_MAP_PRIVATE
#define UNIXSAVE "unexelf.c"

#undef HAVE_SIGVEC
#define HAVE_SIGACTION
#ifndef HAVE_SV_ONSTACK
#define SV_ONSTACK 0
#endif

/* unblock signals m and n, and set val to signal_mask(m) | signal_mask(n)
   if they were set */
/* #define SIG_UNBLOCK_SIGNALS(val,m,n) \ */
/*     current_mask = sigblock(0);  \ */
/*     sigsetmask(~(sigmask(m)) & ~(sigmask(n)) & current_mask); \ */
/*     result = (current_mask & sigmask(m) ? signal_mask(m) : 0) \ */
/*       | (current_mask & sigmask(n) ? signal_mask(n) : 0); */
#define HAVE_SIGPROCMASK

#define RUN_PROCESS

#define	IEEEFLOAT
       
#ifndef HAVE_XDR /*FIXME configure*/
#define HAVE_XDR
#endif

#define USE_ULONG_

/*   How to check for input */
#undef LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp) \
do { int c = 0; \
  if((((FILE *)fp)->_IO_read_ptr >= ((FILE *)fp)->_IO_read_end)	\
     && (ioctl(((FILE *)fp)->_fileno, FIONREAD, &c),c<=0))	\
     return 0;} while (0)

/* #define DATA_BEGIN((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1)); */
#define DATA_BEGIN (char *)(char *)N_DATADDR(header);

#define	PAGSIZ		(NBPG)
#define	SEGSIZ		(NBPG * CLSIZE)
#define	TXTRELOC	0

#define USE_DIRENT
#define GETPATHNAME
#define PATHNAME_CACHE	10

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
