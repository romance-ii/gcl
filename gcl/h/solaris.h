#define SUN4
  
#include "bsd.h"
#ifdef i386
#define DBEGIN 0x8000000
#define LITTLE_END 
#define NULL_OR_ON_C_STACK(x) (((x)==0) || ((unsigned long) x) < 0x8048000)
#define IS_X86
#else
#include "sparc.h"
#endif


#ifdef __svr4__

/* dont conflict with libnls */
#define shifts gcl_shifts

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
  (code ? ((siginfo_t *)code )->si_addr : (error("no address info"),0))

#define SETUP_SIG_STACK \
{ static stack_t estack ; \
  estack.ss_size = sizeof(estack_buf) ; \
  estack.ss_flags = 0; \
  estack.ss_sp = (char *) &estack_buf[SIG_STACK_SIZE-1]; \
  if (sigaltstack(&estack, (stack_t *)0) < 0) \
               perror("sigaltstack");} \
  
#undef HAVE_AOUT
#define HAVE_AOUT <elf.h>
#define HAVE_ELF
/*  for 2.5 need different one 
#define SEEK_TO_END_OFILE(fp)\
  do {      Elf32_Ehdr eheader; \
	      fseek(fp,0,SEEK_SET); \
		fread(&eheader,sizeof(eheader),1,fp); \
		  fseek(fp,eheader.e_shoff+(eheader.e_shnum)*eheader.e_shentsize,\
			SEEK_SET); \
				    } while(0)
*/
/* Seeking to the end of ELF data is a little messy... */
#define SEEK_TO_END_OFILE(fp)\
  do { \
	long offset = 0, endofelf; int j; \
	Elf32_Ehdr eheader; Elf32_Shdr shdr; \
        fseek(fp, 0, SEEK_SET); \
        fread(&eheader, sizeof(eheader), 1, fp); \
  /* in case the headers themselves come AFTER the actual sections */ \
	endofelf=offset = eheader.e_shoff+ eheader.e_shentsize *eheader.e_shnum;\
        fseek(fp, eheader.e_shoff, SEEK_SET); \
	if ( eheader.e_shentsize != sizeof(Elf32_Shdr) ) \
	  { FEerror("Bad ELF section header size",0); } \
        for ( j = 0; j < eheader.e_shnum; j++ ) \
	  { fread(&shdr,eheader.e_shentsize,1,fp); \
            if ( (shdr.sh_offset > offset) && (shdr.sh_type != SHT_NOBITS) ) \
	      { offset = shdr.sh_offset; endofelf = offset+shdr.sh_size; } \
	  } \
	if ( fseek(fp, endofelf, SEEK_SET) ) \
	    FEerror("Bad ELF file",0); \
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

#ifdef IN_SOCKETS
#include <sys/file.h>
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




/* Begin for cmpinclude */

 /* If can mprotect pages and so selective gc will work */
#define SGC  

/* End for cmpinclude */

/* Sun 4.1 needs to have some cached yp stuff undone at save time */
#ifdef IN_SFASL
#include <sys/types.h>
#include <sys/mman.h>
#ifdef IS_X86     
#include <sys/elf_386.h>
#endif     
/* we have to make the pages executable */
#define CLEAR_CACHE do { unsigned long ps = getpagesize(); \
			 char *beg = (unsigned long )(memory->cfd.cfd_start) & ~(ps-1); \
			 char *end =  ROUND_UP(memory->cfd.cfd_start + \
				          memory->cfd.cfd_size,ps); \
			   mprotect(beg,end-beg,PROT_READ|PROT_WRITE|PROT_EXEC);} while(0)
				   
#endif

#define HAVE_YP_UNBIND



