/*
 * FreeBSD.h for gcl 1.1
 *
 * Ported by Jeffrey Hsu (hsu@freebsd.org).
 *  Looked at previous versions by Hsu, Werkowsksi, Tobin, and Mogart.
 *
 */

#include "bsd.h"

#undef LD_COMMAND
#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -dc -N -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("386BSD");\
                     ADD_FEATURE("FreeBSD");


#define I386
#define	IEEEFLOAT

/* we don't need to worry about zeroing fp->_base, to prevent what??? */
#define FCLOSE_SETBUF_OK 

#undef HAVE_XDR

#define USE_ATT_TIME

#undef LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp) \
do {int c=0;\
  if ((fp)->_r <=0 && (c=0, ioctl((fp)->_file, FIONREAD, &c), c<=0)) \
	return(FALSE);} while(0)

#ifdef IN_GBC
#include <sys/types.h>
#endif

#define DATA_BEGIN (char *) N_DATADDR(header);
#define A_TEXT_OFFSET(x) (sizeof (struct exec))
#define A_TEXT_SEEK(hdr) (N_TXTOFF(hdr) + A_TEXT_OFFSET(hdr))
#define start_of_data() &etext
#define start_of_text() ((char *)(sizeof(struct exec) + getpagesize()))

#define UNIXSAVE "unexec.c"
#ifdef UNIXSAVE 
 extern char etext;
#endif

#define RELOC_FILE "rel_sun3.c"	/* for SFASL - enabled in bsd.h */

#ifdef CLOCKS_PER_SEC
#define HZ CLOCKS_PER_SEC
#else
#define HZ 128
#endif
#define ss_base ss_sp

/* begin for GC */
#define PAGEWIDTH 12		/* i386 sees 4096 byte pages */
/* end for GC */

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

/*
 * The next two defines are for SGC,
 *	one of which needs to go in cmpinclude.h.
 */
#define SIGPROTV SIGBUS

/* Begin for cmpinclude */
#define SGC	/* can mprotect pages and so selective gc will work */

/* End for cmpinclude */

#if defined(IN_UNIXTIME)
# include <time.h>
#endif
