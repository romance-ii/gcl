/*
Copyright William Schelter. All rights reserved.

  Use this to build an executable rsym,
which will grab only the external symbols from an object file,
and put them in a simple format: (cf ext_sym.h) 

This information will be used for relocation. 

to compile use cc rsym.c -o rsym  -I../h
*/

#include <stdlib.h>
#include <string.h>
#ifdef __linux__
/* Needed these to get it working with Linux.  Bill Metzenthen 23 May 95 */
#define IN_RSYM 1
#include <stdio.h>

#define SYMNMLEN 0

#ifndef NUM_AUX  
#define NUM_AUX(p) 0
#endif  
#endif

#include "ext_sym.h"


#include <elf.h>
ElfW(Phdr) pheader;
ElfW(Ehdr) eheader;
ElfW(Sym) *symbol_table;
int text_index,data_index,bss_index,sbss_index;
#undef SYM_NAME
#undef EXT_and_TEXT_BSS_DAT
/* #define mjoin(a,b) a ## b */
/* #define Mjoin(a,b) mjoin(a,b) */
#define ELFW(a) Mjoin(ELF,Mjoin(__ELF_NATIVE_CLASS,Mjoin(_,a)))

int nsyms;
char *my_string_table;
char *start_address;
int symbol_index;

static void get_myself(char *);

#ifdef RSYM_AUX
#include RSYM_AUX
#endif

/* our defs */

#define TABLE_SIZE 3


#ifdef DEBUG
int debug =1;
#undef dprintf
#define dprintf(s,ar) if(debug) { printf(" ( s )",ar) ; fflush(stdout);}
#else
int debug =0;
#define dprintf(s,ar) 
#endif




/*  this program will get the external symbols from a file writing
them out to a file together with their addresses */
static char *outfile;
int
output_externals(char *);

int
main(argc,argv,envp)
int argc ;
char *argv[],*envp[];
{
  if (argc!=3) {perror("bad arg count");
		fflush(stdout);
		exit(1);}
#ifdef SET_BINARY_MODE
  SET_BINARY_MODE
#endif    
  get_myself(argv[1]);
  output_externals(outfile=argv[2]);
  return 0;
}
#define SECTION_H(k) section_headers[k]
char *section_names;
ElfW(Shdr) *section_headers;

int
get_section_number(name)
   char *name;
     
{int k ;
 for (k = 1; k < eheader.e_shnum;
      k++)
   {
     if (!strcmp (section_names + SECTION_H(k).sh_name,
		  name))
       return k;
   }
 if (strcmp(".sbss",name))
   fprintf(stderr,"could not find section %s\n", name);
 return -1;
}


char *
get_section(fp,name)
     FILE *fp;
     char *name;
{ int shndx;
  char *ans;
  if (strcmp(name,".shstrtab") == 0)
    shndx = eheader.e_shstrndx;
  else
    shndx = get_section_number(name);
  { 
      fseek(fp,SECTION_H(shndx).sh_offset,SEEK_SET);
      ans = malloc(SECTION_H(shndx).sh_size);
      fread(ans,SECTION_H(shndx).sh_size,1,fp);
      return ans;
    }
}    
	    
	    

static void
get_myself(filename)
char *filename;
{
	unsigned int i;
	FILE *fp;
	int symsize;
	
        
	fp = fopen(filename, RDONLY);
	
	if (fp == NULL) {
		fprintf(stderr, "Can't open %s\n", filename);
		exit(1);
	}

	fread(&eheader,sizeof(eheader),1,fp);
	fseek(fp,eheader.e_ehsize,SEEK_SET);
	fread(&pheader,sizeof(pheader),1,fp);

	if(ELFMAG0 != eheader.e_ident[0]){
	  fprintf(stderr,"Bad magic %s",filename);
	  exit(1);};

	section_headers = (void *)malloc(sizeof(ElfW(Shdr))*
				 (1+ eheader.e_shnum));
	fseek(fp,eheader.e_shoff,0);
	for (i=0 ; i< eheader.e_shnum ; i++)
	  fread(&section_headers[i],eheader.e_shentsize,1,fp);
				 
	section_names = get_section(fp,".shstrtab");
	symbol_index = get_section_number(".symtab");
	symsize = SECTION_H(symbol_index).sh_entsize;
	nsyms= SECTION_H(symbol_index).sh_size/symsize;
	symbol_table
	= (void *) malloc(sizeof(ElfW(Sym)) * nsyms);
	/*
	sizeof(struct syment) and SYMESZ are not always the same.
	*/

	if(fseek(fp,(int)SECTION_H(symbol_index).sh_offset,0))
	  {fprintf(stderr,"seek error");
					       exit(1);}

	for (i = 0;  i < nsyms;  i++)
		fread((char *)&symbol_table[i], symsize, 1, fp);

	my_string_table = get_section(fp,".strtab");
	text_index = get_section_number(".text");
	bss_index = get_section_number(".bss");
	sbss_index = get_section_number(".sbss");
	data_index = get_section_number(".data");
	
	fclose(fp);
}

struct lsymbol_table tab;

#define EXT_and_TEXT_BSS_DAT(p) (((ELFW(ST_BIND)(p->st_info) == STB_GLOBAL) \
				  || (ELFW(ST_BIND)(p->st_info) == STB_WEAK) \
				  ) \
				 && \
				 (p->st_shndx == text_index \
				  || p->st_shndx == data_index\
				  || p->st_shndx == bss_index \
				  || p->st_shndx == sbss_index \
				  || p->st_shndx == SHN_UNDEF \
				  ))
#define SYM_NAME(p) my_string_table+(p->st_name)
#define STRUCT_SYMENT ElfW(Sym)
#define n_value st_value  
				 
				 
int
output_externals(out)
char *out;
{FILE *symout;
 char *name;
 char tem[SYMNMLEN+1];
 STRUCT_SYMENT  *p, *end;
 tem[SYMNMLEN]=0;
 tab.n_symbols=0;
 tab.tot_leng=0;
 symout=fopen(out,"wr");
 if (!symout)
   {perror(out); exit(1);};
 fseek(symout,sizeof(struct lsymbol_table),0);
 end = symbol_table + nsyms;
 for (p = symbol_table; p < end; p++)	{
   /*
     Is the following check enough?
     */
   if (EXT_and_TEXT_BSS_DAT(p))
     { name= SYM_NAME(p);
    
            /* turn __setjmp@@GLIB* to __setjmp
	       since GLIB2.0 likes to tack on the @@GLIB to
	       certain symbols .. but the names in the .o
	       files to be loaded do NOT have this tacked on.
	     */
     if (name ) {
       char *tmp;
       tmp=index(name,'@') ;
       if (name 
	   && tmp
	   && tmp[1]=='@'
	   /* also do translation for similar libc, like solaris, where symbol is */
	   /* e.g. setjmp@@SYSVABI_1.3 */
/*  	   && tmp[2]=='G' */
/*  	   && tmp[3]=='L' */
/*  	   && tmp[4]=='I' */
	   )
	 *tmp=0;      
     }

       { dprintf(tab.n_symbols %d , tab.n_symbols);
	 tab.n_symbols++;
	 {unsigned long i = (p->n_value);
#ifdef AIX3
	  if (p->n_scnum == TEXT_NSCN)
	    i = i + 0x10000e00;
	  else
	    i += DBEGIN;
	    
	  /* leave space for the toc entry. */

#endif	  
	  fwrite((char *)&i,sizeof(i),1,symout);}
#ifdef AIX3	 
	  {short j=0;   fwrite((char *)&j,sizeof(short),1,symout);}
#endif	   
	 dprintf( p->n_value %d , p->n_value);
	 dprintf( name %s , name);
	 while(tab.tot_leng++,*name)
	   putc(*name++,symout); 
	 putc(0,symout);
	 /*      fprintf(symout,name);
		 fprintf(symout," %d  ", p->n_value); 
		 */
       };
       dprintf(  NUM_AUX(p) %d ,  NUM_AUX(p));
       dprintf( index , (int) (p - symbol_table)  / sizeof(STRUCT_SYMENT));
       p = p + NUM_AUX(p); }
 }
 fseek(symout,0,0);
 fwrite(&tab,sizeof(tab),1,symout);
 fclose(symout);
#ifdef AIX3
 add_tc_offsets(outfile);
#endif 

 return 0;
}
