/*
 * FreeBSD.h for gcl
 *
 * Ported by Mark Murray
 *  Looked at previous versions by Hsu, Werkowsksi, Tobin, and Mogart.
 *
 */

#ifndef __ELF__
#error FreeBSD systems use ELF
#endif

#if defined(__i386__)
#define __ELF_NATIVE_CLASS 32
#endif
#if defined(__alpha__) || defined(__sparc64__) || defined(__ia64__)
#define __ELF_NATIVE_CLASS 64
#endif

#if !defined(ElfW)
#define ElfW(a) Mjoin(Elf,Mjoin(__ELF_NATIVE_CLASS,Mjoin(_,a)))
#endif
#define ELFW(a) Mjoin(ELF,Mjoin(__ELF_NATIVE_CLASS,Mjoin(_,a)))
 
#include "linux.h"

#if defined(__i386__)
#define I386
#endif

#define ADDITIONAL_FEATURES					\
		     ADD_FEATURE("386BSD");			\
                     ADD_FEATURE("FreeBSD");

#define USE_ATT_TIME

#undef LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp)					\
do {								\
	int c = 0;						\
								\
	if (							\
		(fp)->_r <= 0 &&				\
		    (ioctl((fp)->_file, FIONREAD, &c), c <= 0)	\
	)							\
		return(FALSE);					\
} while (0)

#ifdef IN_GBC
#include <sys/types.h>
#endif

#if defined(IN_UNIXTIME)
# include <time.h>
#endif

/*#define UNEXEC_USE_MAP_PRIVATE*/
#define UNIXSAVE "unexelf.c"

#ifdef CLOCKS_PER_SEC
#define HZ CLOCKS_PER_SEC
#else
#define HZ 128
#endif
/* #define ss_base ss_sp */

/* begin for GC */
#define PAGEWIDTH 12		/* i386 sees 4096 byte pages */
/* end for GC */

#define HAVE_SIGPROCMASK
#define SIG_STACK_SIZE (SIGSTKSZ/sizeof(double))

#undef SETUP_SIG_STACK
#define SETUP_SIG_STACK {					\
	static struct sigaltstack estack;			\
	if (estack.ss_sp == NULL &&				\
	    (estack.ss_sp = malloc(SIGSTKSZ)) == NULL)		\
		perror("malloc");				\
	estack.ss_size = SIGSTKSZ;				\
	estack.ss_flags = 0;					\
	if (sigaltstack(&estack, 0) < 0)			\
		perror("sigaltstack");				\
}

#undef INSTALL_SEGMENTATION_CATCHER
#define INSTALL_SEGMENTATION_CATCHER				\
  	 (void) gcl_signal(SIGSEGV, segmentation_catcher);	\
  	 (void) gcl_signal(SIGBUS, segmentation_catcher)

/*
 * The next two defines are for SGC,
 *	one of which needs to go in cmpinclude.h.
 */
#define SIGPROTV SIGBUS

#ifdef IN_GBC
#undef MPROTECT_ACTION_FLAGS
#define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO
#define GET_FAULT_ADDR(sig,code,sv,a) \
 ((siginfo_t *)code)->si_addr
/*  #define GET_FAULT_ADDR(sig,code,sv,a) \ */
/*      ((void *)(*((char ***)(&code)))[44]) */
#endif

/* Begin for cmpinclude */
#define SGC	/* can mprotect pages and so selective gc will work */
/* End for cmpinclude */
