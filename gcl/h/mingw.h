#define MP386
#define WINDOWSNT
#define MINGW
#define GCL
/* #define filehdr _IMAGE_FILE_HEADER */
#define f_symptr PointerToSymbolTable
#define f_nsyms NumberOfSymbols
#define NO_PWD_H

/* page width, (1 <<PAGEWIDTH) should be a multiple of 2 of
   the native system page width  */

#define PAGEWIDTH 12 

#define MAXPATHLEN 512

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



#include "att.h"
/* #include "386.h" */
/* #include "fcntl.h" */



#define signals_pending *signalsPendingPtr


#undef DBEGIN
#define DBEGIN 0x10000000


/* define if there is no _cleanup,   do here what needs
   to be done before calling unexec
   */   
#define CLEANUP_CODE \
  setbuf(stdin,0); \
   setbuf(stdout,0);

/* size to use for mallocs done  */
/* #define BABY_MALLOC_SIZE 0x5000 */




#define NO_SYS_PARAM_H
#define NO_SYS_TIMES_H

#ifdef IN_UNIXTIME
#undef ATT
#undef BSD

#endif

#undef NEED_GETWD 
#define GETCWD

#define IS_DIR_SEPARATOR(x) ((x=='/')||(x=='\\'))

#ifdef IN_UNIXFSYS
#undef ATT
#define HAVE_RENAME

#endif
/* the result of 'getenv' is malloc'd */
#define FREE_GETENV_RESULT


#define OUR_NSOCKET "winnsocket.c"

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

#ifdef __MSVCRT__
typedef int sigset_t ;
#endif


#define NEED_TO_REINSTALL_SIGNALS 

#ifndef SIGIO
#define SIGIO 23
#endif

/* on most machines this will test in one instruction
   if the pointe/r is on the C stack or the 0 pointer
   in winnt our heap starts at DBEGIN
   */
#define NULL_OR_ON_C_STACK(y)\
    (((unsigned int)(y)) == 0 ||  \
     (((unsigned int)(y)) < DBEGIN && ((unsigned int)(y)) &0xf000000))
     
      
#ifdef IN_FILE
#define HAVE_NSOCKET
#endif

     

/* #define HAVE_SIGACTION */
/* a noop */
#define SETUP_SIG_STACK
#define SV_ONSTACK 0
#define SA_RESTART 0




#define brk(x) printf("not doing break\n");
#include <varargs.h>     
#include <stdio.h>
FILE *fopen_binary(char *name,char *mode);


#define USE_NT_UNEXEC
#ifdef USE_NT_UNEXEC
/* use the slightly older unexec */
#define UNIXSAVE "unexnt.c" 
#define RECREATE_HEAP if (initflag) { recreate_heap1(); \
   terminal_io->sm.sm_object1->sm.sm_fp=stdout; \
   terminal_io->sm.sm_object0->sm.sm_fp=stdin; }

 

#else
#define UNIXSAVE "unexw32.c"
#define RECREATE_HEAP  init_heap();
#endif


#define SPECIAL_RSYM "rsym_nt.c"

#define  RSYM_COMMAND(command,system_directory,kcl_self,tmpfile1) \
    sprintf(command,"rsym %s %s",kcl_self,tmpfile1);

     
#if defined(IN_SFASL) || defined(IN_RSYM)
#undef fopen
FILE *fopen_binary(char *name,char *mode)
{
  char buf[10];
  char *p=buf;
  while (*mode)
    *p++=*mode++;
  *p++='b';
  *p++=0;
  return fopen(name,buf);
}
#endif
     
#define fopen fopen_binary

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
		
#define FCLOSE_SETBUF_OK 


#define	IEEEFLOAT
  
#define I386

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("I386"); ADD_FEATURE("WINNT")
  
#undef SET_REAL_MAXPAGE  
#define SET_REAL_MAXPAGE \
	 init_shared_memory(); real_maxpage=MAXPAGE;




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
	    type_map[i] = t_other; \
	  } \
	  core_end = e; \
	} \
          else  \
        error("Someone allocated my memory!");} \
	if (core_end != (sbrk(PAGESIZE*(n - m))))

  /* allow things like //c at beginning of pathnames, and c:/ */
#define ALLOW_DRIVE_PATH


#define USE_INTERNAL_REAL_TIME_FOR_RUNTIME     

/* Begin for cmpinclude */


/* End for cmpinclude */

