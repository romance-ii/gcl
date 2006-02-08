#include <stdio.h>
#include <limits.h>
#include <sys/param.h>

#ifdef getc
  #undef getc
#endif
#define getc fgetc

#include "att.h"

/* bfd support */
#ifdef HAVE_LIBBFD
#  undef SPECIAL_RSYM
#  undef RSYM_COMMAND
#  define SEPARATE_SFASL_FILE "sfaslbfd.c"
#else
#  define SPECIAL_RSYM "rsym_nt.c"
#  undef RSYM_COMMAND
#  undef SEPARATE_SFASL_FILE
#endif

/* Stratified garbage collection - need mprotect() (at least) */
/*#define SGC*/

#define MP386
#define GCL

/* #define filehdr _IMAGE_FILE_HEADER */
#define RUN_PROCESS

#define f_symptr PointerToSymbolTable
#define f_nsyms NumberOfSymbols
#define NO_PWD_H


/* Maxima won't build if default used.
 * Temporary hack until better understanding of cause. */

#ifdef MAXPATHLEN
#  undef MAXPATHLEN
#endif
#define MAXPATHLEN (PATH_MAX*2)

/* alter pathToAlter to fit in with the Clibrary of the system.
   and report error using name 'x' if you cant do it.
   The result in pathToAlter should be less
*/   
#define FIX_FILENAME(x,pathToAlter) fix_filename(x,pathToAlter)

#define MEMORY_SAVE(self,filename) \
  do { char buf[MAXPATHLEN]; \
       strcpy(buf,self); \
       fix_filename(Cnil,buf); \
       memory_save(buf,filename); \
       } while (0)

#define signals_pending *signalsPendingPtr

/* define if there is no _cleanup,   do here what needs
   to be done before calling unexec
   */

#define CLEANUP_CODE \
  setbuf(stdin,0); \
  setbuf(stdout,0);

#define NO_SYS_PARAM_H
#define NO_SYS_TIMES_H

#ifdef IN_UNIXTIME
#  undef ATT
#  undef BSD
#endif

#undef NEED_GETWD 

#define IS_DIR_SEPARATOR(x) ((x=='/')||(x=='\\'))

#ifdef IN_UNIXFSYS
#  undef ATT
#  define HAVE_RENAME
#endif

#define SIGBUS		 7
#ifndef SIGKILL
#define SIGKILL          9
#endif
#define SIGUSR1		10
#define SIGUSR2		12
#define SIGPIPE		13
#define SIGALRM		14
#define SIGIO		29

#define OTHER_SIGNALS_HANDLED SIGTERM,SIGKILL,SIGABRT,

#define SIG_BLOCK          0	/* for blocking signals */
#define SIG_UNBLOCK        1	/* for unblocking signals */
#define SIG_SETMASK        2	/* for setting the signal mask */

#define HAVE_SIGPROCMASK
#define NEED_TO_REINSTALL_SIGNALS

#define SETUP_SIG_STACK
#define SV_ONSTACK 0
#define SA_RESTART 0

/* on most machines this will test in one instruction
   if the pointe/r is on the C stack or the 0 pointer
   in winnt our heap starts at DBEGIN
   */
#define NULL_OR_ON_C_STACK(y) \
    (((unsigned long) (y)) <= cs_org || ((unsigned long) (y)) > (unsigned long) core_end)

#if defined ( IN_FILE ) || defined ( IN_SOCKETS )
#  define HAVE_NSOCKET
#endif

#define brk(x) ;

/* use the slightly older unexec */
#define UNIXSAVE "unexnt.c"
    
#define RECREATE_HEAP if (initflag) { recreate_heap1(); \
     terminal_io->sm.sm_object1->sm.sm_fp=stdout; \
     terminal_io->sm.sm_object0->sm.sm_fp=stdin; }

#define HAVE_AOUT "wincoff.h"

#define TO_NUMBER(ptr,type) (*((type *)(void *)(ptr)))

#define FCLOSE_SETBUF_OK 
#define	IEEEFLOAT
#define I386
#define ADDITIONAL_FEATURES \
	 ADD_FEATURE("I386"); \
         ADD_FEATURE("WINNT"); \
         ADD_FEATURE("MINGW32");

#undef SET_REAL_MAXPAGE  
#define SET_REAL_MAXPAGE real_maxpage=MAXPAGE;

/* include some low level routines for maxima */
#define CMAC

/*  FIONREAD not supported */
#undef  LISTEN_FOR_INPUT

/* adjust the start to the offset */
#define ADJUST_RELOC_START(j) \
	the_start = memory->cfd.cfd_start + \
	  (j == DATA_NSCN ? textsize : 0);

#define SEEK_TO_END_OFILE(fp) do {  IMAGE_FILE_HEADER fileheader; int i; \
        fseek ( fp, 0, 0 ) ; \
        fread ( &fileheader, sizeof ( IMAGE_FILE_HEADER ), 1, fp ); \
	fseek ( fp, fileheader.PointerToSymbolTable + fileheader.NumberOfSymbols * sizeof ( IMAGE_SYMBOL ) , 0); \
	fread ( &i, sizeof ( i ), 1, fp ); \
	fseek ( fp, i - sizeof ( i ), 1 ); \
	while ( ( i = fgetc(fp) ) == 0 ) \
		; \
        ungetc ( i, fp ); \
    } while (0)
	
#define IF_ALLOCATE_ERR \
	if (core_end != sbrk(0))\
         {char * e = sbrk(0); \
	if (e - core_end < 0x10000 ) { \
	  int i; \
	  for (i=page(core_end); i < page(e); i++) { \
	    type_map[i] = t_other; \
	  } \
	  core_end = e; \
	} \
          else  \
        error("Someone allocated my memory!");} \
	if (core_end != (sbrk(PAGESIZE*(n - m))))

#define USE_INTERNAL_REAL_TIME_FOR_RUNTIME

/* Use this pending test in configure */
#define NO_MKSTEMP

/* #define WRITEC_NEWLINE(strm) (writec_stream('\r',strm),\ */
/*                          writec_stream('\n', strm)) */

#define DOES_CRLF

extern char *GCLExeName ( void );
#define GET_FULL_PATH_SELF(a_) do {\
   (a_)=GCLExeName();\
} while(0)

/* #define INSTALL_SEGMENTATION_CATCHER \
   (void) signal(SIGSEGV,segmentation_catcher) */

#define MAXCORE ((char *)((unsigned long)DBEGIN+(unsigned long)(MAXPAGE-1)*PAGESIZE))

/* This must be done to ensure that nothing is done until virtual memory is initialised for the
 * windows signals hack. */
extern int is_shared_memory_initialised;
#define CHECK_INTERRUPT if ( is_shared_memory_initialised && signals_pending ) raise_pending_signals(sig_safe)

#undef alloca
/*#define alloca(x) __builtin_alloca((x))*/

/* Begin for cmpinclude */


/* End for cmpinclude */
