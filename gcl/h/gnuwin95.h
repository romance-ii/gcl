#define MP386
#define WINDOWSNT
#include "att.h"
/* #include "386.h" */
/* #include "fcntl.h" */

#undef DBEGIN
/* we want finer than config.h */
#define DBEGIN 0x10100000



/* define if there is no _cleanup,   do here what needs
   to be done before calling unexec
   */   
#define CLEANUP_CODE \
  setbuf(stdin,0); \
   setbuf(stdout,0);

/* size to use for mallocs done  */
/* #define BABY_MALLOC_SIZE 0x5000 */

/* #define RECREATE_HEAP if (initflag) recreate_heap(argv[0]); */
#define RECREATE_HEAP if (initflag) recreate_heap1();

#ifdef IN_UNIXTIME
#undef ATT
#define BSD
#endif

#define IS_DIR_SEPARATOR(x) ((x=='/')||(x=='\\'))

#undef NEED_GETWD
#ifdef IN_UNIXFSYS
#undef ATT
#define BSD
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
     
      


     

#define HAVE_SIGACTION
/* a noop */
#define SETUP_SIG_STACK
#define SV_ONSTACK 0
#define SA_RESTART 0




#define brk(x) printf("not doing break\n");
#include <varargs.h>     
#include <stdio.h>
FILE *fopen_binary(char *name,char *mode);
#define UNIXSAVE "unexnt.c"

#define SPECIAL_RSYM "rsym_nt.c"
     
#ifdef IN_SFASL
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
	real_maxpage=MAXPAGE;


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

