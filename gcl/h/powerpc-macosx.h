/* GCL config file for MacOS X v10.2 (aurelien.chanudetATm4xDOTorg) */

#include "bsd.h"

#define DARWIN

/* MacOS X has its own executable file format (Mach-O). */
#undef HAVE_AOUT
#undef HAVE_ELF

#undef WANT_VALLOC
#define DONT_NEED_MALLOC

/* move this to configure */
#define HAVE_UNISTD_H

/* FIX-ME : check value is correct (differs for ppc and i386) */
#define PAGEWIDTH 12

/* The following value determines the running process size. */
/* I've no idea whatsoever if this value is appropriate.    */
#define BIG_HEAP_SIZE   0x1000000

/* based on NeXT32-m68k.h */
#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE \
  { extern int mach_maplimit; sbrk(0); real_maxpage = mach_maplimit/PAGESIZE; }

#define sbrk my_sbrk
extern char * my_sbrk(int incr);

/* The code for unexec is based on Christian Swinehart's work for Emacs,
   which in turn is based on Apple's patches to work with the Mach-O format. */
#define UNIXSAVE	"unexdyld.c"

#undef SFASL

#ifdef USE_DLOPEN
/* #define SPECIAL_RSYM	 rsym_dyld.c  */
/* #define UNIXFASL 	"fasldlsym.c" */
#define SPECIAL_RSYM
#define UNIXFASL	"fasldyld.c"
#else
#define UNIXFASL	"fasldyld.c"
#endif

/* MacOS X has sigaction (this is needed in o/usig.c),  */
#define HAVE_SIGACTION
/* and we have sigvec too but this is defined in bsd.h. */

/* make this a noop */
#define SETUP_SIG_STACK
/* FIX-ME : configure doesnt detect SV_ONSTACK */

#define	IEEEFLOAT
       
/* how to check for input */
/* MacOS X does not have _fileno as in linux.h. Nor does it have _cnt as in bsd.h. */
/* Let us see what we can do with this declaration found in {Net,Open,Free}BSD.h.  */
#undef LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp) \
do {int c=0;\
  if ((fp)->_r <=0 && (c=0, ioctl((fp)->_file, FIONREAD, &c), c<=0))\
    return(FALSE);\
} while(0)

/* (I hope) we dont need to worry about zeroing fp->_base */
#define FCLOSE_SETBUF_OK 

/* #define or #undef this to your taste */
/* #define SGC */
#undef SGC

/* This is based on powerpc-linux.h. */
#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE \
do {\
  void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size;\
  v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));\
  for (;v<ve;v+=CLEAR_CACHE_LINE_SIZE)\
  asm __volatile__\
    ("dcbst 0,%0\n\tsync\n\ticbi 0,%0\n\tsync\n\tisync": : "r" (v) : "memory");\
} while(0)

#define SEEK_TO_END_OFILE(fp) seek_to_end_ofile(fp)
/* extern int seek_to_end_ofile(FILE *fp); */
