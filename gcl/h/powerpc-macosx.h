/* GCL config file for Mac OS X v10.2 (aurelienDOTchanudetATm4xDOTorg) */

/* ./configure --enable-debug --enable-machine=powerpc-macosx --enable-dlopen=no
	--enable-statsysbfd=no --enable-dynsysbfd=no --enable-custreloc=yes */

#include "bsd.h"

#define DARWIN

/* Mac OS X has its own executable file format (Mach-O). */
#undef HAVE_AOUT
#undef HAVE_ELF

/* #undef WANT_VALLOC */
/* #define DONT_NEED_MALLOC */
/* #define GNU_MALLOC */

/* correct value for ppc (we should detect this automatically) */
/* alternatively, we could use the global variable vm_page_size */
#define PAGEWIDTH 12
/* correct value for i386 */
/* #define PAGEWIDTH 13 */

/* The following value determines the running process size. */
#define BIG_HEAP_SIZE   0x50000000

/* based on NeXT32-m68k.h */
#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE \
  { extern int mach_maplimit; my_sbrk(0); real_maxpage = mach_maplimit/PAGESIZE; }

#define sbrk my_sbrk
extern char *my_sbrk(int incr);

/* The implementation of unexec for GCL is based on Andrew Choi's work
   for Emacs. Previous pioneering implementation of unexec for Mac OS X
   by Steve Nygard. */
#define UNIXSAVE		"unexmacosx.c"

/* sfaslbfd.c is included from sfasl.c */
#ifdef HAVE_LIBBFD
#define SEPARATE_SFASL_FILE 	"sfaslbfd.c"
#else
/* #ifdef USE_DLOPEN */
#define SPECIAL_RSYM		"rsym_macosx.c"
/* #define SEPARATE_SFASL_FILE 	"fasldlsym.c" */
#define SEPARATE_SFASL_FILE	"sfaslmacosx.c"
#endif

/* Mac OS X has sigaction (this is needed in o/usig.c),  */
#define HAVE_SIGACTION
/* and we have sigvec too but this is defined in bsd.h. */

/* make this a noop */
/* #define SETUP_SIG_STACK */

/* copied from {Net,Free,Open}BSD.h */
#define HAVE_SIGPROCMASK
#define SIG_STACK_SIZE (SIGSTKSZ/sizeof(double))
#define SETUP_SIG_STACK \
{ \
	static struct sigaltstack estack; \
	if ((estack.ss_sp = malloc(SIGSTKSZ)) == NULL) \
	  perror("malloc"); \
	estack.ss_size = SIGSTKSZ; \
	estack.ss_flags = 0; \
	if (sigaltstack(&estack, 0) < 0) \
	  perror("sigaltstack"); \
}

#define INSTALL_SEGMENTATION_CATCHER \
(void) gcl_signal(SIGSEGV, segmentation_catcher); \
(void) gcl_signal(SIGBUS, segmentation_catcher)

#define	IEEEFLOAT
       
/* how to check for input */
/* Mac OS X does not have _fileno as in linux.h. Nor does it have _cnt as in bsd.h. */
/* Let us see what we can do with this declaration found in {Net,Free,Open}BSD.h.  */
#undef LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp) \
do {int c=0;\
  if ((fp)->_r <=0 && (c=0, ioctl((fp)->_file, FIONREAD, &c), c<=0))\
    return(FALSE);\
} while(0)

/* (I hope) we dont need to worry about zeroing fp->_base */
#define FCLOSE_SETBUF_OK 


/** enable stratified garbage collection */

#define SGC

/*
#define INSTALL_MPROTECT_HANDLER \
do { \
     struct sigaction sact; \
     sigfillset(&(sact.sa_mask)); \
     sact.sa_flags = SA_SIGINFO; \
     sact.sa_sigaction = (void (*)()) memprotect_handler; \
     sigaction (SIGSEGV, &sact, 0); \
     sigaction (SIGBUS, &sact, 0); \
} while (0);
*/

#define SIGPROTV SIGBUS

/* si_addr not containing the faulting address is a bug in Darwin */
/* work around this bug by looking at the dar field of the exception state */
#define GET_FAULT_ADDR(sig,code,scp,addr) ((char *) (((ucontext_t *) scp)->uc_mcontext->es.dar))


/** cache synchronization code */

/* This is based on powerpc-linux.h.  See equivalent code in dyld. */

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

#undef malloc
#define malloc my_malloc

#undef free
#define free my_free

#undef realloc
#define realloc my_realloc

#undef valloc
#define valloc my_valloc

#undef calloc
#define calloc my_calloc

