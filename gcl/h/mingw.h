#include <stdio.h>
#include "att.h"

/* bfd support */
#ifdef HAVE_LIBBFD
#  undef SPECIAL_RSYM
#  undef RSYM_COMMAND
#  define SEPARATE_SFASL_FILE "sfaslbfd.c"
#else
#  define SEPARATE_SFASL_FILE "sfaslcoff.c"
#  define SPECIAL_RSYM "rsym_nt.c"
#  define RSYM_COMMAND(command,system_directory,kcl_self,tmpfile1) \
      sprintf(command,"rsym %s %s",kcl_self,tmpfile1);
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

#undef DBEGIN_TY
#define DBEGIN_TY unsigned int
extern DBEGIN_TY _stacktop, _stackbottom, _dbegin;

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
#define GETCWD

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
#if 0
#define SIGIO		23
#endif
#define SIGIO		29

#define OTHER_SIGNALS_HANDLED SIGTERM,SIGKILL,SIGABRT,

#define SIG_BLOCK          0	/* for blocking signals */
#define SIG_UNBLOCK        1	/* for unblocking signals */
#define SIG_SETMASK        2	/* for setting the signal mask */

#define HAVE_SIGPROCMASK
#define NEED_TO_REINSTALL_SIGNALS

/*#define HAVE_SIGACTION*/
#define SV_ONSTACK 0
#define SA_RESTART 0

/* on most machines this will test in one instruction
   if the pointe/r is on the C stack or the 0 pointer
   in winnt our heap starts at DBEGIN
   */
/* #define NULL_OR_ON_C_STACK(y) \ */
/*     (((unsigned int)(y)) == 0 || \ */
/*     (((unsigned int)(y)) > _stacktop && ((unsigned int)(y)) < _stackbottom))      */
/* #define NULL_OR_ON_C_STACK(x) (!(int *)x || ((int *)x>cs_limit && (int *)x<=cs_org)) */
      
#if defined ( IN_FILE ) || defined ( IN_SOCKETS )
#  define HAVE_NSOCKET
#endif

#define brk(x) ;

/* use the slightly older unexec */
#define UNIXSAVE "unexnt.c"
    
#define RECREATE_HEAP { recreate_heap1(); \
     terminal_io->sm.sm_object1->sm.sm_fp=stdout; \
     terminal_io->sm.sm_object0->sm.sm_fp=stdin; \
     init_shared_memory();}

#define HAVE_AOUT "wincoff.h"
/* we dont need to worry about zeroing fp->_base , to prevent  */
 /* must use seek to go to beginning of string table */
/* #define MUST_SEEK_TO_STROFF */
/* #define N_STROFF(hdr)   ((&hdr)->f_symptr+((&hdr)->f_nsyms)*SYMESZ) */

#define TO_NUMBER(ptr,type) (*((type *)(void *)(ptr)))

#define SEEK_TO_END_OFILE(fp) do { struct filehdr fileheader; int i; \
        fseek(fp,0,0) ; \
        fread(&fileheader, sizeof(fileheader), 1, fp); \
	fseek(fp,    fileheader.f_symptr+fileheader.f_nsyms*SYMESZ, 0); \
	fread(&i, sizeof(i), 1, fp); \
	fseek(fp, i - sizeof(i), 1); \
	while ((i = getc(fp)) == 0) \
		; \
        ungetc(i, fp); \
    } while (0)
		
#define	IEEEFLOAT
#define I386

/* include some low level routines for maxima */
#define CMAC

#define RELOC_FILE "rel_coff.c"

/*  FIONREAD not supported */
#undef  LISTEN_FOR_INPUT

/* adjust the start to the offset */
#define ADJUST_RELOC_START(j) \
	the_start = memory->cfd.cfd_start + \
	  (j == DATA_NSCN ? textsize : 0);
	
#define IF_ALLOCATE_ERR \
	if (core_end != sbrk(0))\
         {char * e = sbrk(0); \
	if (e - core_end < 0x10000 ) { \
	  int i; \
	  for (i=page(core_end); i < page(e); i++) { \
	    \
	  } \
	  core_end = e; \
	} \
          else  \
        error("Someone allocated my memory!");} \
	if (core_end != (sbrk(PAGESIZE*(n - m))))

#define USE_INTERNAL_REAL_TIME_FOR_RUNTIME

/* Use this pending test in configure */
#define NO_MKSTEMP

#define DOES_CRLF

extern char *GCLExeName ( void );
#define GET_FULL_PATH_SELF(a_) do {\
   (a_)=GCLExeName();\
} while(0)

n/* Needed if optimiser moves object initialisation code around. */
#define FIND_INIT \
{ if (*ptr==0 && (NTYPE(sym) == TEXT_NSCN) && sym->n_value ) \
  { char tem [9]; \
    char *str; \
    tem[8]='\0'; \
    str=SYM_NAME(sym); \
    dprintf(find init: %s ,str); \
    if ( str[1]=='i' && str[2]=='n' && str[3]=='i' && str[4]=='t' \
                     && str[5]=='_' && str[0]== '_' )  \
	*ptr=  sym->n_value ; \
   else {/* printf("The first data symbol was not the init");*/}  \
 } }

#if 1
#ifdef getc
  #undef getc
#endif

#define getc fgetc
#endif

/* Begin for cmpinclude */


/* End for cmpinclude */

extern int mingwlisten(FILE *);
#undef LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp) do {if (mingwlisten(fp)) return 0;} while (0)

#define socklen_t int

#undef DBEGIN
#define DBEGIN _dbegin

#define NOFREE_ERR
