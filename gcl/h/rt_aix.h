#define ATT
#define RT
#ifndef AIX
#define AIX
#endif
#include "att.h"
#define HAVE_AOUT <a.out.h>


#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("IBMRT"); \
               ADD_FEATURE("AIX");\
               ADD_FEATURE("BUGGY-CC"); \
      	     ADD_FEATURE("RT")

#define USE_C_EXTENDED_DIV
#define USE_C_EXTENDED_MUL

#define	IBMRT
#define	IEEEFLOAT

#undef SET_REAL_MAXPAGE
#define SET_REAL_MAXPAGE \
	real_maxpage= ulimit(3)/PAGESIZE; \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE;

#define N_DATADDR(header) 
#define DATA_BEGIN (char *)header.a_dbase

  
#undef  MEM_SAVE_LOCALS

#define MEM_SAVE_LOCALS	\
  struct exec header;\
  int stsize

#undef READ_HEADER
#define READ_HEADER 	fread(&header, sizeof(header), 1, original); \
	data_begin=DATA_BEGIN; \
	data_end = core_end; \
	original_data = header.a_data; \
	header.a_data = data_end - data_begin; \
	header.a_bss = 0; \
        if (header.a_flags & A_HDREXT) printf("extended header"); \
  	fwrite(&header, sizeof(header), 1, save);

/* I don't know why all the bsd versions are subtracting this off
   I thought the header.a_text was the actual size of the text
   not including the header */

#undef FILECPY_HEADER 
#define FILECPY_HEADER \
	filecpy(save, original, header.a_text - sizeof(header));

#undef COPY_TO_SAVE
#define  COPY_TO_SAVE \
  filecpy(save, original, header.a_syms+header.a_trsize+header.a_drsize +header.a_lnums); \
  fread(&stsize, sizeof(stsize), 1, original); \
  fwrite(&stsize, sizeof(stsize), 1, save); \
filecpy(save, original, stsize - sizeof(stsize))


#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)
/* smallest address data can occur */
     /* #define DBEGIN  0x20000000 */
  
#define SYM_EXTERNAL_P(sym) (((sym)->n_sclass & (~N_SECT)) == C_EXT)
#define SYM_UNDEF_P(sym) (((sym)->n_sclass & N_SECT) ==  N_UNDF)
#define NUM_AUX(sym) ((sym)->n_numaux) 
#define SYM_NAME(p) SYM_NAME1((struct syment *)(p)) 
#define SYM_NAME1(p) \
  (((p)->_n._n_n._n_zeroes == 0) ? \
	    &my_string_table[(p)->_n._n_n._n_offset] : \
               ((p)->_n._n_name[SYMNMLEN -1] ? \
				 (strncpy(tem,(p)->_n._n_name,  \
					   SYMNMLEN), \
				  (char *)tem) : \
				  (p)->_n._n_name ))

              /* the section like N_ABS,N_TEXT,.. */
#define N_SECTION(sym) (((struct syment *)sym)->n_sclass & N_SECT )
#define N_TYPE N_SECT  

/* the header is regared as part of the text */
#define N_RELOFF(header) A_TRELPOS(header)
#define N_SYMOFF(header) A_SYMPOS(header)
#define N_TXTOFF(header) A_TEXTPOS(header)
#define SYMNMLEN 8
  
#define EXT_and_TEXT_BSS_DAT(p) \
   ((SYM_EXTERNAL_P(p)) && ((N_SECTION(p) == N_TEXT) || \
			(N_SECTION(p) == N_DATA) || \
			(N_SECTION(p) == N_BSS)))

#define N_BADMAG(x) BADMAG(x)
  /* the beginning of the string table: first long will be size of string
     table */
#define N_STROFF(x) A_NAMEPOS(x)

#define MUST_SEEK_TO_STROFF

  /* in aix we must use the pointer to the constant pool for the init_code,
     not the actual pointer to the code.  */

/*   this is no longer valid 
#define VERIFY_INIT \
  if (at==0 || *(char **)at!= memory->cfd.cfd_start) \
    FEerror("init code constant pool bad"); 
*/
  /* find the first symbol in the data section:
     It should begin with with "_init_" and correspond to the
     beginning of the pcp pool for the init function..*/
#define FIND_INIT \
{ if (*ptr==0 && (N_SECTION(sym) == N_DATA) && sym->n_value ) \
  { char tem [9]; \
    char *str=SYM_NAME(sym); \
     dprintf(find init: %s ,str); \
  if (str[1]=='i'    && str[2]=='n'  && str[3]=='i' && str[4]== 't' \
      && str[5]=='_' && str[0]== '_' &&  str[strlen(str)-1] !='X')  \
	*ptr=  sym->n_value ; \
   else {/* printf("The first data symbol was not the init");*/}  \
 }}
  
#define RELOC_FILE "rel_aix.c"

#define GETCWD
  /* the system defines a different getwd */
#define getwd ourgetwd
  
/* these two symbols are too long for the rt pl8cc compiler */
  
#define check_type_or_pathname_string_symbol_stream  check_type_or_path_or_strm
#define check_type_or_Pathname_string_symbol check_type_or_path_sym
#define TSor_pathname_string_symbol_stream  TSor_path_string_sym_strm  
#define check_type_or_symbol_string_package check_type_or_sym_str_pack  


/* If free is likely to be called multiple times on the same block
   (in contravention of ANSI C) by system functions, don't break on
   such an error */

#define NOFREE_ERR

/* Begin for cmpinclude */


/* End for cmpinclude */
