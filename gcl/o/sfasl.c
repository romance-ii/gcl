
/* 
Copyright William Schelter. All rights reserved.
There is a companion file rsym.c which is used to build
a list of the external symbols in a COFF or A.OUT object file, for
example saved_kcl.  These are loaded into kcl, and the
linking is done directly inside kcl.  This saves a good 
deal of time.   For example a tiny file foo.o with one definition
can be loaded in .04 seconds.  This is much faster than
previously possible in kcl.
The function fasload from unixfasl.c is replaced by the fasload
in this file.
this file is included in unixfasl.c
via #include "../c/sfasl.c" 
*/


/* for testing in standalone manner define STAND
 You may then compile this file cc -g -DSTAND -DDEBUG -I../hn
 a.out /tmp/foo.o /public/gcl/unixport/saved_kcl /public/gcl/unixport/
 will write a /tmp/sfasltest file
 which you can use comp to compare with one produced by ld.
 */

#define IN_SFASL

/*  #ifdef STAND */
/*  #include "config.h" */
/*  #include "gclincl.h" */
/*  #define OUR_ALLOCA alloca */
/*  #include <stdio.h> */
/*  #include "mdefs.h" */

/*  #else */
#include "include.h"
#undef S_DATA
/*  #endif */

#ifdef SEPARATE_SFASL_FILE
#include SEPARATE_SFASL_FILE
#else

#include <varargs.h>
#include "ext_sym.h"
struct node * find_sym();
int node_compare();
char *malloc();
char *bsearch();

struct reloc relocation_info;
/* next 5 static after debug */

int debug;

#ifdef DEBUG
#define debug sfasldebug
int sfasldebug=0;
#define dprintf(s,ar) if(debug) { printf(" ( s )",ar) ; fflush(stdout);}
#define STAT

#else /* end debug */
#define dprintf(s,ar) 
#define STAT static
#endif

#ifndef MAXPATHLEN
#define MAXPATHLEN 256
#endif
#define PTABLE_EXTRA 20

struct sfasl_info {
 struct syment *s_symbol_table;
 char *s_start_address;
 char *s_start_data;
 char *s_my_string_table;
 int s_extra_bss;
 char *s_the_start;

};
struct sfasl_info *sfaslp;

#define symbol_table sfaslp->s_symbol_table
#define start_address sfaslp->s_start_address
#define my_string_table sfaslp->s_my_string_table
#define extra_bss sfaslp->s_extra_bss
#define the_start sfaslp->s_the_start


#ifndef describe_sym
#define describe_sym(a)
#endif

#ifdef STAND
#include "rel_stand.c"
#endif

/* begin reloc_file */
#include RELOC_FILE

/* end reloc_file */

int
fasload(faslfile)
object faslfile;
{       long fasl_vector_start;
	struct filehdr fileheader;
	int init_done = 0;
	struct sfasl_info sfasl_info_buf;
#ifdef COFF
	struct scnhdr sectionheader;
        struct scnhdr section[10];
	struct aouthdr header;
#endif
	int textsize, datasize, bsssize,nsyms;
	int string_size=0;

	object memory, data;
	FILE *fp;
	char filename[MAXPATHLEN];
	int i;
	int init_address=0;
#ifndef STAND	
	object *old_vs_base = vs_base;
	object *old_vs_top = vs_top;
#endif
	sfaslp = &sfasl_info_buf;

	extra_bss=0;
#ifdef STAND
	strcpy(filename,faslfile);
	fp=fopen(filename,"r");
#else
	coerce_to_filename(faslfile, filename);
	faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
	vs_push(faslfile);
	fp = faslfile->sm.sm_fp;
#endif	

	HEADER_SEEK(fp);
	if(!fread((char *)&fileheader, sizeof(struct filehdr), 1, fp))
	  FEerror("Could not get the header",0,0);
	nsyms = NSYMS(fileheader);
#ifdef COFF

#ifdef AIX3
	setup_for_aix_load();
#endif	

	fread(&header,1,fileheader.f_opthdr,fp);

	fread(&section[1],fileheader.f_nscns,sizeof (struct  scnhdr),fp);
	textsize = section[TEXT_NSCN].s_size;
	datasize = section[DATA_NSCN].s_size; 
	if (strcmp(section[BSS_NSCN].s_name, ".bss") == 0)
	  bsssize=section[BSS_NSCN].s_size; 
	else     bsssize=section[BSS_NSCN].s_size = 0;
#endif

#ifdef BSD
	textsize=fileheader.a_text;
	datasize=fileheader.a_data;
	bsssize=fileheader.a_bss;
#endif
	symbol_table =
	  (struct syment *) OUR_ALLOCA(sizeof(struct syment)*
					(unsigned int)nsyms);
	fseek(fp,(int)( N_SYMOFF(fileheader)),  0);
	{
	for (i = 0;  i < nsyms;  i++)
	  { fread((char *)&symbol_table[i], SYMESZ, 1, fp);
	    dprintf( symbol table %d , i);
	    if (debug) describe_sym(i);
	    dprintf( at %d , &symbol_table[i]);
#ifdef HPUX
	    symbol_table[i].n_un.n_strx = string_size;
	    dprintf(string_size %d, string_size);
	    string_size += symbol_table[i].n_length + 1;
	    fseek(fp,(int)symbol_table[i].n_length,1);
#endif
	  }
       }
/*	
on MP386
The sizeof(struct syment) = 20, while only SYMESZ =18. So we had to read
one at a time.
fread((char *)symbol_table, SYMESZ*fileheader.f_nsyms,1,fp);
*/

#ifdef READ_IN_STRING_TABLE

my_string_table=READ_IN_STRING_TABLE(fp,string_size);

#else  
#ifdef MUST_SEEK_TO_STROFF
  fseek(fp,N_STROFF(fileheader),0);
#endif	
  {int ii=0;
	if (!fread((char *)&ii,sizeof(int),1,fp))
          {FEerror("The string table of this file did not have any length",0,
		   0);}
	    fseek(fp,-4,1);
	    /* at present the string table is located just after the symbols */
	    my_string_table=OUR_ALLOCA((unsigned int)ii);
	    dprintf( string table leng = %d, ii);

	    if(ii!=fread(my_string_table,1,ii,fp))
	      FEerror("Could not read whole string table",0,0) ;
	}
#endif	
#ifdef SEEK_TO_END_OFILE
SEEK_TO_END_OFILE(fp);	
#else	
 	while ((i = getc(fp)) == 0)
		;
	ungetc(i, fp);
#endif
	
	fasl_vector_start=ftell(fp);

   if (!((c_table.ptable) && *(c_table.ptable)))
     build_symbol_table();

/* figure out if there is more bss space needed */
	extra_bss=get_extra_bss(symbol_table,nsyms,datasize+textsize+bsssize,
				&init_address,bsssize);
	
/* allocate some memory */
#ifndef STAND	
	{BEGIN_NO_INTERRUPT;
	memory = alloc_object(t_cfdata);
	memory->cfd.cfd_self = 0;
	memory->cfd.cfd_start = 0;
	memory->cfd.cfd_size = datasize+textsize+bsssize + extra_bss;
	vs_push(memory);
        the_start=start_address=        
	 memory->cfd.cfd_start =	
	 alloc_contblock(memory->cfd.cfd_size);
	sfaslp->s_start_data = start_address + textsize;
	 END_NO_INTERRUPT;
       }
#else
	the_start=start_address
	  = malloc(datasize+textsize+bsssize + extra_bss + 0x80000);
	the_start=start_address= (char *)(
	   0x1000* ((((int)the_start + 0x70000) + 0x1000)/0x1000));
	sfaslp->s_start_data = start_address + textsize;	
	
#endif

	dprintf( code size %d , datasize+textsize+bsssize + extra_bss);
	if (fseek(fp,N_TXTOFF(fileheader) ,0) < 0)
		FEerror("file seek error",0,0);
	fread(the_start, textsize + datasize, 1, fp);
	dprintf(read into memory text +data %d bytes, textsize + datasize);
/* relocate the actual loaded text  */

        dprintf( the_start %x, the_start);

	/* record which symbols are used */
  
#ifdef SYM_USED
  {int j=0;
     for(j=1; j< BSS_NSCN ; j++)
       { dprintf( relocating section %d \n,j);
	if (section[j].s_nreloc) fseek(fp,section[j].s_relptr,0);
        for(i=0; i < section[j].s_nreloc; i++)
	  { struct syment *sym;
	    fread(&relocation_info, RELSZ, 1, fp);
	    sym = & symbol_table[relocation_info.r_symndx];
	    if (TC_SYMBOL_P(sym))
	      SYM_USED(sym) = 1;
        }}}
#endif


	/* this looks up symbols in c.ptable and also adds new externals to
	   that c.table */
	relocate_symbols(NSYMS(fileheader));  
	
#ifdef COFF
  {int j=0;
     for(j=1; j< BSS_NSCN ; j++)
       { dprintf( relocating section %d \n,j);
	if (section[j].s_nreloc) fseek(fp,section[j].s_relptr,0);
#ifdef ADJUST_RELOC_START
ADJUST_RELOC_START(j)
#endif  
        for(i=0; i < section[j].s_nreloc; i++)
	  /* RELSZ = sizeof(relocation_info) */
	  {fread(&relocation_info, RELSZ, 1, fp);
           dprintf(relocating %d,i);
	   relocate();};
        }};
#endif
#ifdef BSD
	 fseek(fp,N_RELOFF(fileheader),0);
	{int nrel = (fileheader.a_trsize/sizeof(struct reloc));
	 for (i=0; i < nrel; i++)
	   {fread((char *)&relocation_info, sizeof(struct reloc),
			1, fp);
		  dprintf(relocating %d,i);
		  relocate();
		}
	}
#ifdef N_DRELOFF
	 fseek (fp, N_DRELOFF(fileheader), 0);
#endif
	 {int nrel = (fileheader.a_drsize/sizeof(struct reloc));
	  the_start += fileheader.a_text;
	 for (i=0; i < nrel; i++)

	   {fread((char *)&relocation_info, sizeof(struct reloc),
			1, fp);
		  dprintf(relocating %d,i);
		  relocate();
		}
       }
#endif

/* end of relocation */
       dprintf( END OF RELOCATION \n,0);
       dprintf( invoking init function at %x, start_address)
       dprintf( textsize is %x,textsize);
       dprintf( datasize is %x,datasize);

/* read in the fasl vector */
	fseek(fp,fasl_vector_start,0);
        if (feof(fp))
	  {data=0;}
         else{
	data = read_fasl_vector(faslfile);
	vs_push(data);
#ifdef COFF
  	 dprintf( read fasl now symbols %d , fileheader.f_nsyms);
#endif
	}
	close_stream(faslfile);

/*
 {
	int fd;

	fd = creat ("xsgcl.bits", 0777);
	write (fd, memory->cfd.cfd_start, textsize + datasize);
	close (fd);

	fd = open ("xsl2.bits", 0);
	read (fd, memory->cfd.cfd_start, memory->cfd.cfd_size);
	close (fd);
 }
*/

#ifndef STAND
	ALLOCA_FREE(my_string_table);
	ALLOCA_FREE(symbol_table);


#ifdef CLEAR_CACHE
	CLEAR_CACHE;
#endif
	call_init(init_address,memory,data,0);
	
        vs_base = old_vs_base;
	vs_top = old_vs_top;
       if(symbol_value(sLAload_verboseA)!=Cnil)
        printf("start address -T %x ",memory->cfd.cfd_start);
	return(memory->cfd.cfd_size);
#endif
	{FILE *out;
	 out=fopen("/tmp/sfasltest","w");
	 fwrite((char *)&fileheader, sizeof(struct filehdr), 1, out);
	 fwrite(start_address,sizeof(char),datasize+textsize,out);
	 fclose(out);}
	 printf("\n(start %x)\n",start_address);

}

		   
get_extra_bss(sym_table,length,start,ptr,bsssize)
int length,bsssize;
struct syment *sym_table;
int *ptr;   /* store init address offset here */
{int result = start;
 int next_bss =  start - bsssize;
 struct syment *end,*sym;
 char tem[SYMNMLEN +1];
 end =sym_table + length;
 for(sym=sym_table; sym < end; sym++)
   {
     
#ifdef FIND_INIT
FIND_INIT
#endif

#ifdef AIX3
 /* we later go through the relocation entries making this 1
    for symbols used */
#ifdef SYM_USED 
 if(TC_SYMBOL_P(sym))
   {SYM_USED(sym) = 0;}
#endif
 
 /* fix up the external refer to _ptrgl to be local ref */
 if (sym->n_scnum == 0 &&
     strcmp(sym->n_name,"_ptrgl")==0)
   {struct syment* s =
      get_symbol("._ptrgl",TEXT_NSCN,sym_table,length);
    if (s ==0) FEerror("bad glue",0,0);
    sym->n_value = next_bss ;
    ptrgl_offset = next_bss;
    ptrgl_text = s->n_value;
    next_bss += 0xc;
    sym->n_scnum = DATA_NSCN;
    ((union auxent *)(sym+1))->x_csect.x_scnlen = 0xc;

  }

     if(sym->n_scnum != BSS_NSCN) goto NEXT;
     if(SYM_EXTERNAL_P(sym))
       {int val=sym->n_value;
	struct node joe;
	if (val && c_table.ptable)
	  {struct node *answ;
	   answ= find_sym(sym,0);
           if(answ)
	     {sym->n_value = answ->address ;
	      sym->n_scnum = N_UNDEF;
	      val= ((union auxent *)(sym+1))->x_csect.x_scnlen;
	      result -= val;
	      goto NEXT;
	    }}
      }
 /* reallocate the bss space */
 if (sym->n_value == 0)
   {result += ((union auxent *)(sym+1))->x_csect.x_scnlen;}
 sym->n_value = next_bss;
 next_bss += ((union auxent *)(sym+1))->x_csect.x_scnlen;
 NEXT:
 ;
     /* end aix3 */
#endif
	  

  
#ifdef BSD
     tem; /* ignored */
     if(SYM_EXTERNAL_P(sym) && SYM_UNDEF_P(sym))
#endif
#ifdef COFF
     if(0)
     /* what we really want is
	if (sym->n_scnum==0 && sym->n_sclass == C_EXT
	                    && !(bsearch(..in ptable for this symbol)))
	Since this won't allow loading in of a new external array
	char foo[10]  not ok
	static foo[10] ok.
	for the moment we give undefined symbol warning..
	Should really go through the symbols, recording the external addr
	for ones found in ptable, and for the ones not in ptable
	set some flag, and add up the extra_bss required.  Then
	when you have the new memory chunk in hand,
	you could make the pass setting the relative addresses.
	for the ones you flagged last time.
    */
#endif
       /* external bss so not included in size of bss for file */
       {int val=sym->n_value;
	if (val && c_table.ptable
	    && (0== find_sym(sym,0)))
	   { sym->n_value=result;
	     result += val;}}
     
     sym += NUM_AUX(sym); 

   }
 return (result-start);
}
 


/* go through the symbol table changing the addresses of the symbols
to reflect the current cfd_start */



relocate_symbols(length)
unsigned int length;
{struct syment *end,*sym;
 unsigned int typ;
 char *str;
 char tem[SYMNMLEN +1];
 tem[SYMNMLEN]=0;
 end =symbol_table + length;
 for(sym=symbol_table; sym < end; sym++) {
    typ=NTYPE(sym);
#ifdef BSD
#ifdef N_STAB    
    if (N_STAB & sym->n_type) continue;/* skip: It  is for dbx only */
#endif    
    typ=N_SECTION(sym);
/* if(sym->n_type  &  N_EXT) should add the symbol name,
   so it would be accessible by future loads  */
#endif
   switch (typ)	{
#ifdef BSD
   case N_ABS : case N_TEXT: case N_DATA: case N_BSS:
#endif
#ifdef COFF
#ifdef  WINDOWSNT
   case TEXT_NSCN:
     sym->n_value = (int)start_address;
     break;
   case DATA_NSCN:
     sym->n_value = (int)sfaslp->s_start_data;
     break;
   case BSS_NSCN: 
    if (strcmp(".bss",SYM_NAME(sym))!= 0)
      printf("dont do bss %s",SYM_NAME(sym));
#else
   case TEXT_NSCN : case DATA_NSCN: case BSS_NSCN :
#endif     
#endif
     str=SYM_NAME(sym);
     dprintf( for sym %s ,str)
     dprintf( new value will be start %x, start_address);

#ifdef AIX3 
     if(N_SECTION(sym) == DATA_NSCN
	&& NUM_AUX(sym) 
	&& allocate_toc(sym))
       break;
#endif     
       sym->n_value = (int)start_address;
     break;
   case  N_UNDEF:
     str=SYM_NAME(sym);
     dprintf( undef symbol %s ,str);	
     dprintf( symbol diff %d , sym - symbol_table);
     describe_sym(sym-symbol_table);
     set_symbol_address(sym,str);
     describe_sym(sym-symbol_table);
     break;
   default:
#ifdef COFF
     dprintf(am ignoring a scnum %d,(sym->n_scnum));
#endif
     break;
   }
   sym += NUM_AUX(sym);
 }
}

/* 
STEPS:
1) read in the symbol table from the file,
2) go through the symbol table, relocating external entries.
3) for i <=2 go thru the relocation information for this section
 relocating the text.
4) done.
*/

struct node *
find_sym(sym,name)
  struct syment *sym;
   char *name;
{ char tem[SYMNMLEN +1];
  tem [SYMNMLEN] = 0;
  if (name==0) name = SYM_NAME(sym);
  return find_sym_ptable(name);}

set_symbol_address(sym,string)
struct syment *sym;
char *string;
{struct node *answ;
 if (c_table.ptable)
    {
     dprintf(string %s, string);
    answ = find_sym(sym,string);
     dprintf(answ %d , (answ ? answ->address : -1));
    if(answ)
     {
#ifdef COFF
#ifdef _AIX370
     if (NTYPE(sym) == N_UNDEF)   
       sym->n_value = answ->address;
     else 
#endif 
      sym->n_value = answ->address -sym->n_value;
      /* for symbols in the local  data,text and bss this gets added
	 on when we add the current value */
#endif
#ifdef BSD
      /* the old value of sym->n_value is the length of the common area
	 starting at this address */
      sym->n_value = answ->address;
#endif
#ifdef AIX3
     fix_undef_toc_address(answ,sym,string);
#endif
      
}      
     else
      {
/*
#ifdef BSD
	{char *name;
	 name=malloc(1+strlen(string));
	 strcpy(name,string);
	 sym->n_value = sym->n_value + (unsigned int) the_start;
	 add_symbol(name,sym->n_value,NULL);
       }
#endif
*/
	 fprintf(stdout,"undefined %s symbol",string)
	  ;fflush(stdout);
	 
   }}

    else{FEerror("symbol table not loaded",0,0);}}

/* include the machine independent stuff */
#include "sfasli.c"


#ifdef DEBUG
print_name(p)
     struct syment *p;
{char tem[10],*name;
 name=SYM_NAME(p);
 name=   (((p)->_n._n_n._n_zeroes == 0) ? 
	    &my_string_table[(p)->_n._n_n._n_offset] :
               ((p)->_n._n_name[SYMNMLEN -1] ? 
				 (strncpy(tem,(p)->_n._n_name,  
					   SYMNMLEN), 
				  (char *)tem) : 
				  (p)->_n._n_name ));

 printf("(name:|%s|)",name);
 printf("(sclass 0x%x)",p->n_sclass);
  printf("(external_p 0x%x)",SYM_EXTERNAL_P(p));
 printf("(n_type 0x%x)",p->n_type);
 printf("(n_value 0x%x)",p->n_value);
 printf("(numaux 0x%x)\n",NUM_AUX(p));
 fflush(stdout);
}
#endif

#endif /* SEPARATE_SFASL_FILE */
