#define HPUX
#define HPUX_SOM
#define HP
  
#include "bsd.h"
#undef RUN_PROCESS
#undef WANT_VALLOC
/* uses sigvector instead of sigvec.   Could alternately
     link with -lbsd */
#define sigvec sigvector  

/* does not have getpagesize() */

/*
#define SBRK(n) \
  (printf("sbrk(%x)=%x",n,FIXtemp=sbrk(n)),fflush(stdout),FIXtemp)

#define BRK(n) \
  (printf("brk(%x)=%x",n,FIXtemp=brk(n)),fflush(stdout),FIXtemp)
*/
  
#undef SFASL
#define UNIXFASL "faslhp800.c"


#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("HP9000-800"); \
                      ADD_FEATURE("MC68020"); \
    ADD_FEATURE("HP-UX");


/*
#define USE_C_EXTENDED_MUL
#define USE_C_EXTENDED_DIV
*/

#define DATA_BEGIN (char *)N_DATADDR(header)

#define RELOC_FILE "rel_hp300.c"

#define	IEEEFLOAT

#define reloc r_info

#define N_RELOFF(hdr) RTEXT_OFFSET(hdr)
#define N_SYMOFF(hdr) LESYM_OFFSET(hdr)
#define N_TXTOFF(hdr) TEXT_OFFSET(hdr)

/* #undef cs_check */

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE real_maxpage = MAXPAGE


/*
#undef INIT_ALLOC
#define INIT_ALLOC 	if (BRK(pagetochar(MAXPAGE)) < 0) \
		error("Can't allocate.  Good-bye!.");
*/

#define HAVE_AOUT <a.out.h>
#define exec header
#define SEEK_TO_END_OFILE(fp) \
  do{struct header hdr; \
     fseek(fp,0,0); \
     fread(&hdr, sizeof(hdr), 1, fp); \
     fseek(fp,hdr.som_length,0); \
     }while(0)

/* have the getcwd command */

#define GETCWD

/* note gabor used the att ldirectory... maybe bsd is ok?? */

#undef LD_COMMAND

#define OBSOLETE_LD_COMMAND(command,main,start,input,ldarg,output) \
   { char buf[50];  int i; \
     char *b = &buf[sizeof(buf)]; \
     char *pp=input; \
     *--b = 0; \
     for(i=strlen(pp)-3; i >= 0 ; i--) \
       if (pp[i]!='/') { *(--b) = pp[i];} \
          else break; \
  sprintf(command,\
     " if ld -d -a archive -s -e init_code -A %s -R %x -D0x%x %s %s -o %s /lib/dyncall.o ; then true; \
      else ld -d -a archive -s -e init_%s -A %s -R %x -D0x%x %s %s -o %s /lib/dyncall.o ;fi", \
       main,start,start + data_off, input,ldarg,output, \
       b, \
       main,start,start + data_off, input,ldarg,output);}


#define LD_COMMAND(command,main,start,input,ldarg,output) \
{ char buf[50];  int i; \
     char *b = &buf[sizeof(buf)]; \
     char *pp=input; \
     *--b = 0; \
     for(i=strlen(pp)-3; i >= 0 ; i--) \
       if (pp[i]!='/') { *(--b) = pp[i];} \
          else break; \
  sprintf(command,\
     " if nm %s | fgrep init_code > /dev/null ; then ld -d -a archive -s -e init_code -A %s -R %x -D0x%x %s %s -o %s /lib/dyncall.o 2>/dev/null ; exit 0  ; fi; \
       if nm %s | fgrep init_%s > /dev/null ; then ld -d -a archive -s -e init_%s -A %s -R %x -D0x%x %s %s -o %s /lib/dyncall.o 2> /dev/null ; exit 0 ;fi ;  exit 1 ; ", \
	  input, \
       main,start,start + data_off, input,ldarg,output, \
       input,b,b, \
       main,start,start + data_off, input,ldarg,output);}

/*  This is ok but does not do the init_filename case 
#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command,\
	  "ld -d -a archive -s -e init_code -A %s -R %x -D0x%x %s %s -o %s", \
       main,start,start + data_off, input,ldarg,output)
*/



/*
#define	SIGNED_CHAR  
#define	REGISTER_VAR
#define	BYTE_ADDRESS
#define	CORE_STARTS_NEAR_0
#undef	DOWN_STACK
#undef	REVERSE_PARAMETER_ORDER
#undef	CC_OPTIMIZES_TEST  
#define	UNIX
#undef	BSD
#define	HPUX
#undef	ATT
#define	ALLOCATE_INCREMENTALLY
#define	ALLOW_FORK

*/


/* use #include <fcntl.h> */

#define HAVE_FCNTL

#define RSYM_AUX "../c/rel_hp300.c"


#define FIX_BSS     sym->n_type = N_BSS; \
	       val = (val + 3) & ~3;


/* the following 2 cause duplicate defs so we redefine them.. */

#define calloc xxcalloc
#define cfree xxcfree



/* Begin for cmpinclude */


/* End for cmpinclude */



/* For listen LISTEN_FOR_INPUT in stdio.h */
#define _file __fileL
#define _cnt __cnt

/* #define DBEGIN 0x40000000   */


#define NULL_OR_ON_C_STACK(x) (x == 0 ||   ((unsigned int) x) >=0x70000000)

#define UNIXSAVE "unexhp9k800.c"

