#define SUN4
  
#include "bsd.h"
#include "sparc.h"


#ifdef __svr4__
#define UNIXSAVE "unexelf.c"
#ifdef IN_UNIXSAVE
#define round_up round_up1
#define bss_end core_end
#endif
#define ULONG_DEFINED
#undef HAVE_SIGVEC
#define HAVE_SIGACTION
#define SV_ONSTACK SA_ONSTACK

#ifdef IN_GBC
#include <siginfo.h>
#endif

#define GET_FAULT_ADDR(sig,code,scp,addr) \
  (code ? ((siginfo_t *)code )->si_addr : error("no address info"))

#undef HAVE_AOUT
#define HAVE_AOUT <elf.h>
#define HAVE_ELF

#define SEEK_TO_END_OFILE(fp)\
  do {      Elf32_Ehdr eheader; \
	      fseek(fp,0,SEEK_SET); \
		fread(&eheader,sizeof(eheader),1,fp); \
		  fseek(fp,eheader.e_shoff+(eheader.e_shnum)*eheader.e_shentsize,\
			SEEK_SET); \
				    } while(0)




#define USE_ATT_TIME

#define GETCWD

#define SPECIAL_RSYM "rsym_elf.c"
#define SEPARATE_SFASL_FILE "sfaslelf.c"
#ifdef IN_FILE
#include <sys/filio.h>
#endif

#ifdef IN_RUN_PROCESS
#include <sys/sockio.h>
#endif
#endif

#ifndef __svr4__
/* sun release 4.1,4.2 */
#define SA_RESTART 0
#define SA_SIGINFO 0
#endif

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("SUN"); \
      	     ADD_FEATURE("SPARC")


#define SPARC
#define	IEEEFLOAT
  
#define USE_C_EXTENDED_DIV
  
/* setjmp does not lay down the other register windows registers,
   and so we must recurse some to make sure that all registers are
   forced onto the stack.
*/   
#define N_RECURSION_REQD 8
  
#define DATA_BEGIN (char *)N_DATADDR(header)

#define N_RELOFF N_TRELOFF

#define RELOC_FILE "rel_sun4.c"

/* width of page size that can be memorprotected log2(getpagesize()) */
   
#define PAGEWIDTH 12 



#define reloc  reloc_info_sparc

/* in release 4.0 it is SIGSEGV, and release 4.1 it is SIGBUS */


#define INSTALL_MPROTECT_HANDLER \
do {static struct sigaction action; \
      action.sa_handler = memprotect_handler; \
	action.sa_flags = SA_RESTART | SA_SIGINFO; \
	  sigemptyset(&action.sa_mask); sigaddset(&action.sa_mask,SIGINT); \
	    sigaddset(&action.sa_mask,SIGALRM); \
	    sigaction(SIGSEGV,&action,0);	sigaction(SIGBUS,&action,0);} while (0)


#include "sparc.h"

/* Begin for cmpinclude */
 /* #define HAVE_ALLOCA

#ifndef __GNUC__
#include <alloca.h>
#endif
*/
 /* If can mprotect pages and so selective gc will work */
#define SGC  

/* End for cmpinclude */

/* Sun 4.1 needs to have some cached yp stuff undone at save time */

#define HAVE_YP_UNBIND

