/* define where the heap could begin.   Normally should
be the smallest value returned by sbrk().   Underestimating
by 10-20 megabytes is not a problem. */

#define DBEGIN 0


/* the size of the page tables for gcl.  Each page is PAGESIZE which
is usually 4K or 8K bytes.  From 1 to 3 bytes per page are
preallocated in a table at compile time.  this must be a power of 2 if
SGC is enabled.  */

#define MAXPAGE 128*1024
#define VSSIZE 128*1024
#define BDSSIZE 2*1024
#define IHSSIZE 4*1024
#define FRSSIZE 4*1024

#define HOLEPAGE (MAXPAGE/10)

/* check to see if getcwd exists
*/
#define HAVE_GETCWD 0


/* if we dont have USEGETCWD, we will use GETWD unless following defined
*/
#undef HAVE_GETWD


/* no gettimeofday function */

#undef NO_GETTOD

/* define if have <asm/signal.h> */
#undef HAVE_ASM_SIGNAL_H

/* define if have <asm/sigcontext.h> */
#undef HAVE_ASM_SIGCONTEXT_H

/* define if have struct sigcontext in one of above */
#undef HAVE_SIGCONTEXT


/* define if have <sys/ioctl.h> */
#undef HAVE_SYS_IOCTL_H

/* define if we can use the file nsocket.c   */
#undef HAVE_NSOCKET  

#ifndef HAVE_ALLOCA
/* define this if you have alloca */
#undef HAVE_ALLOCA 
#endif


/* define if need alloca.h */
#undef NEED_ALLOCA_H

#ifdef NEED_ALLOCA_H
#include <alloca.h>
#endif


/* define LISTEN_USE_FCNTL  if we can check for input using fcntl */
#undef LISTEN_USE_FCNTL

/* if signal.h alone contains the stuff necessary for sgc */
#undef SIGNAL_H_HAS_SIGCONTEXT


/* define if the profil system call is not defined in libc */
#undef NO_PROFILE 


/* define if the _cleanup() function exists and should be called
   before saving */
/* #define USE_CLEANUP  */


/* define if BIG_ENDIAN or LITTLE_ENDIAN is defined by including
   the standard includes */
/* #define ENDIAN_ALREADY_DEFINED */

/* define if SV_ONSTACK is defined in signal.h */
#undef HAVE_SV_ONSTACK 


/*
   define to be a typical stack address.   We use this to decide
   whether we can use a cheap test for NULL_OR_ON_C_STACK, or whether
   it has to be more complex..

*/

#define CSTACK_ADDRESS 0

/* define if SIGSYS is defined in signal.h */

#undef HAVE_SIGSYS

/* define if SIGEMT is defined in signal.h */

#undef HAVE_SIGEMT


/* define if setenv  is define */
#undef HAVE_SETENV

/* define if putenv  is define */
#undef HAVE_PUTENV


/* define if long long int works to multiply to ints, */

#undef HAVE_LONG_LONG

/* define if want to use GMP */
#undef GMP

/* have a broken version of C compiler which makes bad code for -O4 */
#undef BROKEN_O4_OPT 

/*  See if gettimeofday is declared in the <sys/time.h> header file. */
/*  if not, set the GETTOD_NOT_DECLARED flag so that tclPort.h can */
/*  declare it. */

#undef GETTOD_NOT_DECLARED

#undef HAVE_BSDGETTIMEOFDAY

#undef NO_UNAME

/*  FIONBIO vs. O_NONBLOCK for nonblocking I/O */
#undef USE_FIONBIO

/* readline support */
#undef HAVE_READLINE

/* bfd support */
#undef HAVE_LIBBFD
#undef NEED_CONST
#undef HAVE_BFD_BOOLEAN

#ifdef HAVE_BFD_BOOLEAN
#define MY_BFD_BOOLEAN bfd_boolean
#define MY_BFD_FALSE FALSE
#define MY_BFD_TRUE TRUE
#else
#define MY_BFD_BOOLEAN boolean
#define MY_BFD_FALSE false
#define MY_BFD_TRUE true
#endif
/* isnormal check */
#undef HAVE_ISNORMAL

#undef HAVE_IEEEFP

#ifdef IN_NUM_CO
#ifdef HAVE_ISNORMAL
#define _GNU_SOURCE
#include <math.h>
#define ISNORMAL(a) isnormal(a)
#else
#ifdef HAVE_IEEEFP
#include <ieeefp.h>
#define ISNORMAL(a) (fpclass(a)>=FP_NZERO)
#else
#error "No isnormal found"
#endif
#endif
#endif

#undef HAVE_ISFINITE
#undef HAVE_FINITE

#ifdef NEED_ISFINITE
#ifdef HAVE_ISFINITE
#define _GNU_SOURCE
#include <math.h>
#define ISFINITE(a) isfinite(a)
#else
#ifdef HAVE_FINITE
#include <math.h>
#include <ieeefp.h>
#define ISFINITE(a) finite(a)
#else
#error "No isfinite found"
#endif
#endif
#endif

#undef HAVE_VALUES_H
#undef HAVE_FLOAT_H

#ifdef IN_NUM_CO
#ifdef HAVE_VALUES_H
#include <values.h>
#endif
#ifdef HAVE_FLOAT_H
#include <float.h>
#endif
#endif



/* math.h for definitions in generated C code */
#undef HAVE_MATH_H

#ifdef HAVE_MATH_H
#include <math.h>
#endif

#undef LITTLE_END

#undef PAGEWIDTH

/*  #ifdef PAGEWIDTH */
/*  #undef PAGESIZE */
/*  #define PAGESIZE (1<<PAGEWIDTH) */
/*  #endif */

#undef SIZEOF_LONG

#undef USE_DLOPEN

#define MP_LIMB_BYTES 0

#undef ANSI_COMMON_LISP

#undef __SHORT_LIMB
#undef __LONG_LONG_LIMB

#undef HAVE_JAPI_H

#undef HAVE_XDR
#undef ENDIAN_ALREADY_DEFINED
#undef USE_CLEANUP
#undef SIZEOF_CONTBLOCK

#undef GCL_GPROF
#undef HAVE_DECL_RL_COMPLETION_MATCHES
#undef HAVE_RL_COMPENTRY_FUNC_T
#undef HAVE_GNU_LD
#undef NEED_NONRANDOM_SBRK
