#define ATT
#define RIOS
#define AIX
#define AIX3  
#include "att.h"

#define USE_ULONG_
  
#define ADDITIONAL_FEATURES \
               ADD_FEATURE("AIX");\
               ADD_FEATURE("AIX3");\
                 ADD_FEATURE("RIOS");\
               ADD_FEATURE("BUGGY-CC"); 

/*  These are supplied in rios_ics.s
#define USE_C_EXTENDED_DIV
#define USE_C_EXTENDED_MUL
*/

#define	IBMRT
#define	IEEEFLOAT

#undef SET_REAL_MAXPAGE

#define SET_REAL_MAXPAGE \
        real_maxpage= ulimit(3)/PAGESIZE; \
        if ((real_maxpage > MAXPAGE) || (ulimit(3) < 0)) \
                real_maxpage = MAXPAGE;


char *sdebug;
#define IF_ALLOCATE_ERR \
	if (core_end != sbrk(0))\
         {int ll;   \
	   if ((ll=(int)(sbrk(0) - core_end))  < PAGESIZE) \
           {sbrk(PAGESIZE - ll); \
            type_map[page(core_end)] = t_other; \
            core_end = sbrk(0); }\
          else  \
        error("Someone allocated my memory!");} \
	if (core_end != (sdebug=sbrk(PAGESIZE*(n - m))))



#define N_DATADDR(header)
#define DATA_BEGIN (char *)header.a_dbase

#define PAGEWIDTH 12
  
/* I don't know why all the bsd versions are subtracting this off
   I thought the header.a_text was the actual size of the text
   not including the header */

#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)
/* smallest address data can occur */
     /* #define DBEGIN  0x20000000 */
#define FIX_ADDRESS(jj) \
  do {int del = (int) data_load_addr - DBEGIN; \
   if (del && (0x20000000 & jj)) jj += del; \
   {unsigned short x ;  fread(&x,sizeof(short),1,symin); \
      SYM_TC_OFF(c_table,i) = x;} \
   } while(0)

/*
#define SYM_EXTERNAL_P(sym) (((sym)->n_sclass & (~N_SECT)) == C_EXT)
#define SYM_UNDEF_P(sym) (((sym)->n_sclass & N_SECT) ==  N_UNDF)
*/


#define N_SECTION(sym) (((struct syment *)sym)->n_scnum)
			

#define N_TYPE N_SECT  

/* the header is regared as part of the text */

#define N_RELOFF(header) A_TRELPOS(header)
#define SYMNMLEN 8
/* aix3
#define TEXT_NSCN 2
#define DATA_NSCN 4
#define BSS_NSCN 5
*/
/* aix4 */
#define TEXT_NSCN 1
#define DATA_NSCN 2
#define BSS_NSCN 3



  /* in aix we must use the pointer to the constant pool for the init_code,
     not the actual pointer to the code.  */

#define CALL_INIT \
{ FUNC at=(FUNC)(init_address + memory->cfd.cfd_start ); \
  if (at==0 || *(char **)at!= memory->cfd.cfd_start) \
    FEerror("init code constant pool bad"); \
  (*at)(memory->cfd.cfd_start, memory->cfd.cfd_size, data);} 

  /* find the first symbol in the data section:
     It should begin with with "_init_" and correspond to the
     beginning of the pcp pool for the init function..*/
/* #define DATA_NSCN  4 */
    /* the section number of the data section : text,pad,data,...*/

#define FIND_INIT \
 { if (*ptr==0 && (N_SECTION(sym) == DATA_NSCN ) && \
       ((sym)->n_sclass  == C_EXT) &&\
       sym->n_value ) \
  { char tem [9]; \
    char *str=SYM_NAME(sym); \
     dprintf(find init: %s ,str); \
  if (str[0]=='i'    && str[1]=='n'  && str[2]=='i' && str[3]== 't' \
      && str[4]=='_' &&  str[strlen(str)-1] !='X')  \
	*ptr=  sym->n_value ; \
   else {/* printf("The first data symbol was not the init"); */}    \
 }} 

  
#define RELOC_FILE "rel_rios.c"

#define GETCWD
  /* the system defines a different getwd */
#define getwd ourgetwd
  
/* these two symbols are too long for the rt pl8cc compiler */
  
#define check_type_or_pathname_string_symbol_stream  check_type_or_path_or_strm
#define check_type_or_Pathname_string_symbol check_type_or_path_sym
#define TSor_pathname_string_symbol_stream  TSor_path_string_sym_strm  
#define check_type_or_symbol_string_package check_type_or_sym_str_pack  


#ifdef IN_UNIXFSYS
#define BSD
#undef NEED_GETWD
#undef ATT
#endif

#define NOFREE_ERR
/* #define UNIXSAVE "saveaix3.c" */
#define UNIXSAVE "unexaix.c"


#define ISCOFF(x) (x==479)
/* Should really use this */
/*
#define TEXT_NSCN (fileheader.f_opthdr > 28 ? header.o_sntext : 1)
#define DATA_NSCN (fileheader.f_opthdr > 28 ? header.o_sndata : 2)
#define BSS_NSCN (fileheader.f_opthdr > 28 ? header.o_snbss : 3)
*/


#define SYM_EXTERNAL_P(sym) ((sym)->n_sclass  == C_EXT)

#define EXT_and_TEXT_BSS_DAT(p) \
 ( SYM_EXTERNAL_P(p) && \
  ((p)->n_scnum ==  TEXT_NSCN || (p)->n_scnum ==  BSS_NSCN  || \
  (p)->n_scnum ==  DATA_NSCN ))

#define CLEAR_CACHE do{extern system(),myics(); myics();\
			 system("true"); \
			   if (*next_toc_addresses_to_relocate) \
			     printf("did not relocate all toc addresses"); \
		     }while(0);



/* Begin for cmpinclude */

#ifdef __GNUC__
# define alloca __builtin_alloca
#else
#pragma alloca
#endif


/* make signals stay installed, not lapse every time the
   signal is sent */
#define signal sigset



/* NOTE: If you don't have the system call mprotect DON'T
   define this.
   I have added it to my own kernel.
   */


/* If you define this you must make available mprotect system call
for the kernel.   See aix3_mprotect directory.
*/
/* #define SGC
#define GET_FAULT_ADDR(x,y,c,d) getfault()
*/

#define QUICK_DIV(x,y,h,hi)\
 if ((int)y > 0 && y > h << 1) \
   {return divsl3(x,y,hi);}


/* _setjmp and _longjmp exist on bsd and are more efficient
   and handle the C stack which is all we need. [I think!]
   
 */
/*
#define setjmp _setjmp
#define longjmp _longjmp
*/

/* setjmp only lets you jump in one direction
   upwards in address
*/   
#define SETJMP_ONE_DIRECTION


/* End for cmpinclude */


  /* if there is no input there return false */
#define LISTEN_FOR_INPUT(fp) \
  if((fp)->_cnt <=0 && (c=0,ioctl((fp)->_file, FIONREAD, &c),c<=0)) \
     return 0

 /* have sys/ioctl.h */
#define HAVE_IOCTL
#define HAVE_SIGACTION
  
#define HAVE_XDR
  
#define SHARP_EQ_CONTEXT_SIZE 1024
#undef VSSIZE
#define VSSIZE 81520


#define INSTALL_SEGMENTATION_CATCHER \
        sigstack(&estack,0); \
        (void) gcl_signal(SIGSEGV,segmentation_catcher);

#if defined(IN_SOCKETS) || defined(IN_GUIS)
#include <sys/select.h>
#undef bzero
#define bzero(b,len) memset(b,0,len)
#endif

/* test a memory address  */
#define NULL_OR_ON_C_STACK(x) ( x == 0 || (((unsigned int) x) >= 0x2f000000 )) 
                                             


