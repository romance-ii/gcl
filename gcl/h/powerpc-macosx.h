/*  GCL config file for Mac OS X v10.2

    To be used with the following configure switches :
        --enable-debug (optional)
        --enable-machine=powerpc-macosx
        --disable-statsysbfd
        --enable-custreloc
    
    Contributed by aurelien.chanudet (at) m4x.org.
*/

#include "bsd.h"

#define DARWIN

/* Mac OS X has its own executable file format (Mach-O).  */
#undef HAVE_AOUT
#undef HAVE_ELF


/** sbrk(2) emulation  */

/* Alternatively, we could use the global variable vm_page_size.  */
#define PAGEWIDTH 12

/* The following value determines the running process heap size.  */
#define BIG_HEAP_SIZE   0x50000000

extern char *mach_mapstart;
extern char *mach_maplimit;
extern char *mach_brkpt;

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE { my_sbrk(0); real_maxpage = (int) mach_maplimit/PAGESIZE; }

#define sbrk my_sbrk
extern char *my_sbrk(int incr);


/** (si::save-system "...") a.k.a. unexec implementation  */

/* The implementation of unexec for GCL is based on Andrew Choi's work for Emacs.
   Previous pioneering implementation of unexec for Mac OS X by Steve Nygard.  */
#define UNIXSAVE		"unexmacosx.c"

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


/** Dynamic loading implementation  */

/* The sfasl{bfd,macosx,macho}.c files are included from sfasl.c.  */
#ifdef HAVE_LIBBFD
#define SEPARATE_SFASL_FILE 	"sfaslbfd.c"
#else
/* Decrepacted, does not provide sufficiently fine grained information.  */
#define SPECIAL_RSYM		"rsym_macosx.c"
#define SEPARATE_SFASL_FILE	"sfaslmacosx.c"
#endif

/* The file has non Mach-O stuff appended.  We need to know where the Mach-O stuff ends.  */
#define SEEK_TO_END_OFILE(fp) seek_to_end_ofile(fp)

/* Processor cache synchronization code.  This is based on powerpc-linux.h (Debian ppc).
   See equivalent code in dyld.  See also vm_msync declared in <mach/vm_maps.h>.  */
#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE								\
do {										\
  void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size;			\
  v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));			\
  for (;v<ve;v+=CLEAR_CACHE_LINE_SIZE)						\
  asm __volatile__								\
    ("dcbst 0,%0\n\tsync\n\ticbi 0,%0\n\tsync\n\tisync": : "r" (v) : "memory");	\
} while(0)


/** Stratified garbage collection implementation  */

/* Mac OS X has sigaction (this is needed in o/usig.c)  */
#define HAVE_SIGACTION

/* make this a noop */
/* #define SETUP_SIG_STACK */

/* Copied from {Net,Free,Open}BSD.h  */
#define HAVE_SIGPROCMASK
#define SIG_STACK_SIZE (SIGSTKSZ/sizeof(double))
#define SETUP_SIG_STACK							\
{ 									\
static struct sigaltstack estack; 					\
if ((estack.ss_sp = malloc(SIGSTKSZ)) == NULL)				\
    perror("malloc");							\
estack.ss_size = SIGSTKSZ;						\
estack.ss_flags = 0;							\
if (sigaltstack(&estack, 0) < 0)					\
    perror("sigaltstack");						\
}

#define INSTALL_SEGMENTATION_CATCHER					\
(void) gcl_signal(SIGSEGV, segmentation_catcher);			\
(void) gcl_signal(SIGBUS, segmentation_catcher)

#define SGC
#define SIGPROTV SIGBUS

/* si_addr not containing the faulting address is a bug in Darwin.
   Work around this by looking at the dar field of the exception state.  */
#define GET_FAULT_ADDR(sig,code,scp,addr) ((char *) (((ucontext_t *) scp)->uc_mcontext->es.dar))


/** Misc stuff  */

#define	IEEEFLOAT
       
/* Mac OS X does not have _fileno as in linux.h. Nor does it have _cnt as in bsd.h.
   Let's see what we can do with this declaration found in {Net,Free,Open}BSD.h.  */
#undef LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp)						\
do {int c=0;								\
  if ((fp)->_r <=0 && (c=0, ioctl((fp)->_file, FIONREAD, &c), c<=0))	\
    return(FALSE);							\
} while(0)

/* We (hopefully) dont need to worry about zeroing fp->_base.  */
#define FCLOSE_SETBUF_OK 

#define GET_FULL_PATH_SELF(a_) 						\
do {									\
extern int _NSGetExecutablePath (char *, unsigned long *); 		\
unsigned long bufsize = 1024;						\
static char buf [1024];							\
static char fub [1024];							\
if (_NSGetExecutablePath (buf, &bufsize) != 0) {			\
    error ("_NSGetExecutablePath failed");				\
}									\
if (realpath (buf, fub) == 0) {						\
    error ("realpath failed");						\
}									\
(a_) = fub;								\
} while (0)
