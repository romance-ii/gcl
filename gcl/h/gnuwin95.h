#define MP386
#include "att.h"
/* #include "386.h" */
/* #include "fcntl.h" */

#define DBEGIN _dbegin
#define DBEGIN_TY unsigned long
extern DBEGIN_TY _dbegin;



/* define if there is no _cleanup,   do here what needs
   to be done before calling unexec
   */   
#define CLEANUP_CODE \
  setbuf(stdin,0); \
   setbuf(stdout,0);

/* size to use for mallocs done  */
/* #define BABY_MALLOC_SIZE 0x5000 */

#define RECREATE_HEAP recreate_heap1();

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

/* on most machines this will test in one instruction
   if the pointe/r is on the C stack or the 0 pointer
   in winnt our heap starts at DBEGIN
   */
/*  #define NULL_OR_ON_C_STACK(y)\ */
/*      (((unsigned int)(y)) == 0 ||  \ */
/*       (((unsigned int)(y)) < DBEGIN && ((unsigned int)(y)) &0xf000000)) */
/* #define NULL_OR_ON_C_STACK(y) (((void *)(y)) < ((void *)0x400000)) */
     
      


     

#define HAVE_SIGACTION
/* a noop */
#define SA_ONSTACK 0

#define brk(x) printf("not doing break\n");
#include <stdarg.h>     
#include <stdio.h>
#define UNIXSAVE "unexnt.c"

#define MAXPATHLEN 260
#define SEPARATE_SFASL_FILE "sfaslcoff.c"
#define SPECIAL_RSYM "rsym_nt.c"

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
		
#define RUN_PROCESS

#define	IEEEFLOAT
  
#define I386

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("I386"); ADD_FEATURE("WINNT")


/* include some low level routines for maxima */
#define CMAC

#define RELOC_FILE "rel_coff.c"

#undef  LISTEN_FOR_INPUT
#define LISTEN_FOR_INPUT(fp) do { \
  int c = 0; \
  if (((fp)->_r <= 0) && (ioctl((fp)->_file, FIONREAD, &c), c<=0)) \
    return 0; \
} while (0)

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

#include <limits.h>
#include <sys/stat.h>
#define GET_FULL_PATH_SELF(a_) do {\
  char b[20];\
  static char q[PATH_MAX];\
  struct stat ss;\
  if (snprintf(b,sizeof(b),"/proc/%d/exe",getpid())<=0)\
    error("Cannot write proc exe pathname");\
  if (stat(b,&ss)) \
    (a_)=argv[0];\
  else {\
    if (!realpath(b,q)) \
      error("realpath error");\
    (a_)=q;\
  }\
} while(0)

/* Begin for cmpinclude */


/* End for cmpinclude */

