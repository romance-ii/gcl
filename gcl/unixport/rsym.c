/*
Copyright William Schelter. All rights reserved.

  Use this to build an executable rsym,
which will grab only the external symbols from an object file,
and put them in a simple format: (cf ext_sym.h) 

This information will be used for relocation. 

to compile use cc rsym.c -o rsym  -I../h
*/

#define IN_RSYM 1
#include <stdio.h>
#include "include.h"

#ifdef SPECIAL_RSYM
#include SPECIAL_RSYM
#else


/* #include "mdefs.h" */
#include "ext_sym.h"



#ifdef ATT
/* #include <ldfcn.h> */
#endif

struct filehdr my_header;
int nsyms;
struct syment *symbol_table;
char *my_string_table;
char *start_address;

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

main(argc,argv)
int argc ;
char *argv[];
{
  if (argc!=3) {perror("bad arg count");
		fflush(stdout);
		exit(1);}
#ifdef SET_BINARY_MODE
  SET_BINARY_MODE
#endif    
  get_myself(argv[1]);
  output_externals(outfile=argv[2]);
  exit(0);
  }

get_myself(filename)
char *filename;
{
	unsigned int i;
	FILE *fp;
	int string_size=0;
	extern char *malloc();
        
	fp = fopen(filename, RDONLY);
	
	if (fp == NULL) {
		fprintf(stderr, "Can't open %s\n", filename);
		exit(1);
	}

	HEADER_SEEK(fp);
	fread((char *)&my_header,sizeof(struct filehdr),1,fp);
	if(N_BADMAG(my_header)){
	  fprintf(stderr,"Bad magic %s",filename);
	  exit(1);};

	nsyms=NSYMS(my_header);
	symbol_table
	= (struct syment *)malloc(sizeof(struct syment) * nsyms);
	/*
	sizeof(struct syment) and SYMESZ are not always the same.
	*/

	if(fseek(fp,(int)(N_SYMOFF(my_header)),0))
	  {fprintf(stderr,"seek error");
					       exit(1);}

	for (i = 0;  i < nsyms;  i++)
#ifdef HPUX
	{	
		fread((char *)&symbol_table[i], SYMESZ, 1, fp);
		dprintf(string_size %d,string_size);
		symbol_table[i].n_un.n_strx = string_size;
		string_size += symbol_table[i].n_length + 1;
		fseek(fp,symbol_table[i].n_length,1);
	      }
#else	
		fread((char *)&symbol_table[i], SYMESZ, 1, fp);
#endif
	/*
	If the string table is not empty,
	its length is stored after the symbol table,
	This is not described in the manual, and may change in the future.
	*/
	/* fseek(fp,N_STROFF(my_header),0);
	   strings follow symbol table! */
#ifndef HPUX
#ifdef N_STROFF
	fseek(fp,N_STROFF(my_header),0);
#endif	
	if (fread((char *)&string_size, 4, 1, fp) > 0)	{
		my_string_table = malloc(string_size);
                if(debug)
		  {printf(" string_size is %d fseek %d ",string_size,fseek(fp,string_size-1,1));
		   printf(" fseek back %d ",fseek(fp,1-string_size,1));};
		fseek(fp, -4, 1);
		if(string_size!=(fread(my_string_table, 1, string_size, fp)))
		  {dprintf( string_size was %d ,string_size);
		   perror("rsym could not read bad string table") ;
		   exit(1);}

	}
	else {fprintf(stderr,"Error: There is no string table \n");
		     exit(1);}
#else	
{
		char *p; 
		int slen;
		p = my_string_table=malloc((unsigned int)string_size);
		dprintf( string table leng = %d, string_size);
		fseek(fp,(int)( LESYM_OFFSET(my_header)),  0);
		for (i = 0;  i < nsyms; i++)
		{
			fseek(fp,SYMESZ, 1);
			slen = symbol_table[i].n_length;
			dprintf( slen = %d,slen);
			fread(p,slen,1,fp);
			*((p)+slen) = '\0';
			dprintf( p = %s,p );
			dprintf(symbol_table[i].n_type %d,
				symbol_table[i].n_type);
			p += symbol_table[i].n_length + 1;
		}
	}
#endif
	fclose(fp);
}

struct lsymbol_table tab;


output_externals(out)
char *out;
{FILE *symout;
 char *name;
 char tem[SYMNMLEN+1];
 struct syment *p, *end;
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
       { dprintf(tab.n_symbols %d , tab.n_symbols);
	 tab.n_symbols++;
	 {int i = (p->n_value);
#ifdef AIX3
	  if (p->n_scnum == TEXT_NSCN)
	    i = i + 0x10000e00;
	  else
	    i += DBEGIN;
	    
	  /* leave space for the toc entry. */

#endif	  
	  fwrite((char *)&i,sizeof(int),1,symout);}
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
       dprintf( index , (int) (p - symbol_table)  / sizeof(struct syment));
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

#ifdef AIX3
int node_compare();

struct node *
find_sym(sym,name)
  struct syment *sym;
   char *name;
{ char tem[SYMNMLEN +1];
  tem [SYMNMLEN] = 0;
  if (name==0) name = SYM_NAME(sym);
  {struct node joe;
   joe.string=name;
   return (struct node *)
     bsearch((char *)(&joe),(char*) (c_table.ptable),
			 c_table.length,
			 sizeof(struct node), node_compare);
 }}



add_tc_offsets(out)
char *out;
{FILE *symin;
  char *symbols;
 char *name;
 int i,jj;
 symin=fopen(out ,"r");
 if(!symin)
   perror("can't open");

 if(!fread((char *)&tab,sizeof(tab),1,symin))
   perror("No header");
 symbols=malloc(tab.tot_leng);
 c_table.alloc_length=( (PTABLE_EXTRA+ tab.n_symbols));
 (c_table.ptable) = (TABL *) malloc(sizeof(struct node) * c_table.alloc_length);
 if (!(c_table.ptable)) {perror("could not allocate"); exit(1);};
 i=0; c_table.length=tab.n_symbols;
 while(i < tab.n_symbols)
   {unsigned short tc_off;
     fread((char *)&jj,sizeof(int),1,symin);
     fread((char *)&tc_off,sizeof(short),1,symin);
     SYM_TC_OFF(c_table,i) = tc_off;
     (SYM_ADDRESS(c_table,i))=jj;
     SYM_STRING(c_table,i)=symbols;
      while( *(symbols++) =   getc(symin)) 
       {;}
     dprintf( "(name %s ",  SYM_STRING(c_table,i));
     dprintf( "addr %x )"  , jj);

     i++;
   }
 qsort((char*)(c_table.ptable),(int)(c_table.length),
       sizeof(struct node),node_compare);
 {struct syment *sym, *end = symbol_table + nsyms;
  char tem[SYMNMLEN+1];
  int toc_anchor =0;
  tem[SYMNMLEN]=0;
  for (sym=symbol_table ; sym < end ; sym = sym +1+ NUM_AUX(sym))
    {if( sym->n_scnum != DATA_NSCN
	  || NUM_AUX(sym)  == 0) continue;
      if (toc_anchor == 0
	  && ((union auxent *)(sym+1))->x_csect.x_smclas == XMC_TC0)
	{toc_anchor = sym->n_value;
	 continue;}
      if (((union auxent *)(sym+1))->x_csect.x_smclas == XMC_TC)
      { struct node joe;
	  struct node *answ;
	  name = SYM_NAME(sym);
	  joe.string = name;
	  answ = (struct node *)
	    bsearch((char *)(&joe),(char*) (c_table.ptable),
		   c_table.length,
		   sizeof(struct node), node_compare);
	  if (answ == 0) continue;
	  if(toc_anchor ==0) {printf("TC symbol before tco: %s,",name); continue;}
	  answ->tc_offset = (sym->n_value - toc_anchor);
	}}

  /* fix ptrgl to point to the one in the data section for shorter
     branches */
  
  {struct node *a=find_sym(0,"myptrgl");
   if (a == 0 ) printf("couldn't find ptrgl");
   else 
     {a->string[0]= '.';
      a->string[1]= '_';
      a->tc_offset = 0;}
 }
  

  fclose(symin);
  symin=fopen(out,"w");
  if(symin==0) perror("can't open");
  fwrite(&tab,sizeof(tab),1,symin);
  fseek(symin,sizeof(tab),0);
  {int i,j;
   unsigned short k;
   for (i=0 ; i < tab.n_symbols ; i++)
     {k = SYM_TC_OFF(c_table,i);
      j= SYM_ADDRESS(c_table,i);
     fwrite((char *)&j,sizeof(int),1,symin);
     fwrite((char *)&k,sizeof(short),1,symin);
     name = SYM_STRING(c_table,i);
      while(*name)
	{putc(*name,symin); *name++;} 
      putc(0,symin);
    }}}
 fclose(symin);
}


node_compare(node1,node2)
struct node *node1, *node2;
{ return(strcmp(node1->string, node2->string));}

#endif /*aix3 */

#endif /* SPECIAL_RSYM */
