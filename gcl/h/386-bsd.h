/*
  386-bsd.h 

  Hacked September/93 by Paul F. Werkowsksi for 386BSD.
  Tested on i486 EISA 16MB hardware/386BSD 0.1 + PatchKit 0.2.4
  * gcc-2.3.3
  * SGC enabled (big performance win but needs a small kernel hack)
  * Files in September-16-92-Systems.tar (PCL clcs loop clx) compile & run.
   CLUE also compiles and runs. 16 MB insufficient memory to compile CLIO.

  Hacked November/93 by Werkowski for FreeBSD. Essentially no changes
  except to use 'unexlin.c' instead of 'unixsave.c'. FreeBSD 1.0.2 has
  (at this time 17-Nov-93) a bug in stdio that needs repair before this will
  work - otherwise use libc.a from 386bsd pk2.4.
  The 'bug' is that vfprintf prints out a 0l0 as '           0e+00' while
  gcl edit_double in print.d expects something like ' 0.00000000000e+00'.
*/

#include "bsd.h"
/*#include "386.h" /* NOT if you want this to work on 386bsd!!!*/

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("386BSD");


#define	I386			/* ?? this is apparently not used anywhere */
#define	IEEEFLOAT

#undef HAVE_XDR

#define USE_ATT_TIME

/* begin listen for input */
#undef LISTEN_FOR_INPUT		/* default in bsd.h is loser in 386bsd */
#if 1				/* Required for CLX to work correctly  */
#if defined IN_FILE
#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stdio.h>
#endif
#define LISTEN_FOR_INPUT(fp) \
{\
  int fd = (fp)->_file;\
  static struct timeval tv = {0,0};\
  static fd_set rmask; FD_ZERO(&rmask); FD_SET(fd,&rmask);\
  select(fd+1,&rmask,NULL,NULL,&tv);\
  return (FD_ISSET(fd,&rmask));\
}
#endif
/* end listen for input */

/* we dont need to worry about zeroing fp->_base , to prevent  */
#define FCLOSE_SETBUF_OK 

#define DATA_BEGIN (char *)N_DATADDR(header);
#define UNIXSAVE "unexlin.c"

#define RELOC_FILE "rel_sun3.c"	/* for SFASL - enabled in bsd.h */

#define LITTLE_END		/* also in <machine/endian.h> */
#if 0				/* are these relics? */
#define USE_DIRENT
#define GETPATHNAME
#define PATHNAME_CACHE	10	/* ??? */
#endif

#define HZ		60

/* this for GC */

/* #define PAGEWIDTH 12		/* i386 sees 4096 byte pages */
/* try out the gnu malloc */
#if 1				/* (conflict with PAGEWIDTH != 11) */
#define GNU_MALLOC		/* works if PAGEWIDTH==11 */
#define GNUMALLOC
#endif

#if 0				/* wont work, but need to patch
				 realloc to return something if ptr is null */
#define DONT_NEED_MALLOC
#endif

#define INSTALL_SEGMENTATION_CATCHER \
  	 (void) signal(SIGSEGV,segmentation_catcher); \
  	 (void) signal(SIGBUS,segmentation_catcher)

/* Begin for cmpinclude */

#define WANT_SGC

#ifdef WANT_SGC			/* begin defines for SGC */
/*
  SGC is a performance winner for large applications as it doesn't
  run the entire image through the pager during collection. SGC requires
  the 'mprotect' function.

  Need Jeffrey Hsu's kernel patch for signal handlers.  Should be in
FreeBSD versions later than 1.0.2.

  Also need to add
#include <sys/types.h> before
#include <sys/mman.h> in c/sgc.c

  Also - the above handler conflicts with use of '(un)catch-bad-signals'
  You may want to modify unixint.c to account for SGC use.

*/
#define SGC
#define SIGPROTV SIGBUS
#endif				/* end of SGC mods */

/* _setjmp and _longjmp exist on bsd and are more efficient
   and handle the C stack which is all we need. [I think!]
*/
#define setjmp _setjmp
#define longjmp _longjmp


