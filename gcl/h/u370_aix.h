/* Copyright William Schelter. All rights reserved. (1990) */

#define ATT
#define U370_AIX  

/*
..  additional piece, which probably belongs in a "README" somewhere, is that
AIX/370 installers should use the latest (update U401215) C compiler, which
for some inscrutable reason was hidden when installed ("ls /lib/hc*@" is 
the key to finding it). The symptom for not doing this is that compiling
some of the generated .c files may take hours rather than seconds (!).
*/

/*  Possible change necessary to c/sfasl.c
    mckenney@rpi.edu reports the following change necessary
    for c/sfasl.c.    I (wfs) compiled all of scratchpad (800 files)
    and ran many tests without it.   I don't have a machine here to
    test on, so I am leaving it out till I get confirmation that it is
    necessary (I hate to mung up c/sfasl.c any more than it is)

*** c/sfasl.c~	Mon Aug 13 21:36:52 1990
--- c/sfasl.c	Fri Dec 14 16:25:57 1990
***************
*** 589,594 ****
--- 589,599 ----
      if(answ)
       {
  #ifdef COFF
+ #ifdef _AIX370
+     if (NTYPE(sym) == N_UNDEF)   
+       sym->n_value = answ->address;
+     else 
+ #endif 

*/  

#include "att.h"
/* #define HAVE_AOUT */

#define EXTERN_N_VALUE_IS_SIZE



#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("U370_AIX"); \
               ADD_FEATURE("AIX");\
               ADD_FEATURE("BUGGY-CC");

/*
#define USE_C_EXTENDED_DIV
#define USE_C_EXTENDED_MUL
*/

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE \
	real_maxpage= ulimit(3)/PAGESIZE; \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE;

#define N_DATADDR(header) 
#define DATA_BEGIN (char *)header.a_dbase


/* I don't know why all the bsd versions are subtracting this off
   I thought the header.a_text was the actual size of the text
   not including the header */


#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)
/* smallest address data can occur */
     /* #define DBEGIN  0x200000 */
  

#define SYM_UNDEF_P(sym) (((sym)->n_sclass & N_SECT) ==  N_UNDF)

              /* the section like N_ABS,N_TEXT,.. */

/* #define N_TYPE N_SECT   */

/* the header is regared as part of the text */
#define N_RELOFF(header) A_TRELPOS(header)

#define SYMNMLEN 8
#define BIG_ENDIAN 

#define USE_C_EXTENDED_DIV
#define USE_C_EXTENDED_MUL


  /* the beginning of the string table: first long will be size of string
     table */

#define ISCOFF(x) (((x) == I386MAGIC) \
 		|| ((x) == U370ROMAGIC) \
 		|| ((x) == U370WRMAGIC) \
 		|| ((x) == XA370ROMAGIC) \
 		|| ((x) == XA370WRMAGIC) \
 		)


#define RELOC_FILE "rel_u370aix.c"

#define GETCWD
  /* the system defines a different getwd */
#define getwd ourgetwd

#ifdef IN_UNIXFSYS
#endif

#ifdef IN_NUM_CO
#include <float.h>
#define S3000
#endif
#undef IEEEFLOAT

  
/* these two symbols are too long for the rt pl8cc compiler */
  
#define check_type_or_pathname_string_symbol_stream  check_type_or_path_or_strm
#define check_type_or_Pathname_string_symbol check_type_or_path_sym
#define TSor_pathname_string_symbol_stream  TSor_path_string_sym_strm  
#define check_type_or_symbol_string_package check_type_or_sym_str_pack  
#define siLmake_string_output_stream_from_string siLma_str_from_string
#define SYM_EXTERNAL_P(p) ((p)->n_sclass == C_EXT)

#undef IF_ALLOCATE_ERR


/* the u370 likes to allocate a little extra at startup
   via its own call to sbrk (not malloc)
  */

char *sdebug;
#define IF_ALLOCATE_ERR \
	if (core_end != sbrk(0))\
         {int ll;   \
	   if ((ll=(int)(sbrk(0) - core_end))  < PAGESIZE) \
           {sbrk(PAGESIZE - ll); \
            \
            core_end = sbrk(0); }\
          else  \
        error("Someone allocated my memory!");} \
	if (core_end != (sdebug=sbrk(PAGESIZE*(n - m))))



#define FIND_INIT \
{ if (*ptr==0 && (sym->n_scnum == TEXT_NSCN ) && sym->n_value ) \
  { char tem [9]; \
    char *str=SYM_NAME(sym); \
     dprintf(find init: %s ,str); \
  if (str[1]=='i'    && str[2]=='n'  && str[3]=='i' && str[4]== 't' \
      && str[5]=='_' && str[0]== '_' &&  str[strlen(str)-1] !='X')  \
	*ptr=  sym->n_value ; \
   else {/* printf("The first data symbol was not the init");*/}  \
 }}


/*  The system sbrk is not quite right in that it skips some times.
    so we define one in rel_u370aix.c
*/    
  
#define sbrk sbrk1
extern char * sbrk1();

#define UNIXSAVE "saveu370.c"

/* fool the metaware compiler bug.   This should be removed
when they fix it
{ SAFE_INC(big->c.c_car,l) ;
   if (big->c.c_car < 0) ..
     was branching incorrectly in case the two positives added to a negative
*/
#define SAFE_INC(u,amt) do{volatile unsigned int xTmp = u; xTmp += amt; u = (int) xTmp;}while(0)
#define SAFE_DEC(u,amt) do{volatile unsigned int xTmp = u; xTmp -= amt; u = (int) xTmp;}while(0)

/* #define HAVE_XDR */


/* Begin for cmpinclude */


/* End for cmpinclude */


    
