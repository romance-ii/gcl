/*  Use this to build an executable rsym,
which will grab only the external symbols from an object file,
and put them in a simple format: (cf ext_sym.h) 

This information will be used for relocation. 

to compile use cc -g rsym.c -o rsym  -I../h
*/
 

#define BSD


#include <stdio.h>
#include <a.out.h>
#include "ext_sym.h"


/* our defs */

#define TABLE_SIZE 3


#ifdef DEBUG
int debug =1;
#define dprintf(s,ar) if(debug) { printf(" ( s )",ar) ; fflush(stdout);}
#else
int debug =0;
#define dprintf(s,ar) 
#endif

struct exec my_header; 
struct syment *my_symbol_table;
char *my_string_table;
char *start_address;



/*  this program will get the external symbols from a file writing
them out to a file together with their addresses */

void get_myself();

main(argc,argv)
int argc ;
char *argv[];
{
if (argc!=3) {perror("bad arg count");fflush(stdout);exit(1);}

get_myself(argv[1]);
 output_externals(argv[2]);
  }

void
get_myself(filename)
char *filename;
{
	int i;
	LDFILE *ldptr;
	extern char *malloc();
        
	ldptr = ldopen(filename, RDONLY);
	
	if (ldptr == NULL) {
		fprintf(stderr, "Can't open %s\n", filename);
		exit(1);
	}
	ftell(ldptr);
	fread(&my_header,sizeof(struct exec),1,ldptr);
	if(N_BADMAG(my_header)){fprintf(stderr,"Bad magic %s",filename);
				exit(1);};

	if(fseek(ldptr,(int)N_SYMOFF(my_header),0))
	  {fprintf(stderr,"seek error");
					       exit(1);}
       
	my_symbol_table
	= (struct syment *)malloc(sizeof(struct syment) * NSYMS(my_header));
	/*
	sizeof(struct syment) and SYMESZ are not always the same.
	*/
	for (i = 0;  i < NSYMS(my_header);  i++)
		FREAD(&my_symbol_table[i], SYMESZ, 1, ldptr);
	/*
	If the string table is not empty,
	its length is stored after the symbol table,
	This is not described in the manual, and may change in the future.
	*/
	/* fseek(ldptr,N_STROFF(my_header),0);
	   strings follow symbol table! */

	if (FREAD(&i, 4, 1, ldptr) > 0)	{
		my_string_table = malloc(i);
                if(debug)
		  {printf(" i is %d Fseek %d ",i,FSEEK(ldptr,i-1,1));
		   printf(" Fseek back %d ",FSEEK(ldptr,1-i,1));};
		FSEEK(ldptr, -4, 1);
		if(i!=(FREAD(my_string_table, 1, i, ldptr)))
		  {dprintf( i was %d ,i);
		   perror("rsym could not read bad string table") ;
		   exit(1);}

	}
	else {fprintf(stderr,"Error: There is no string table \n");
		     exit(1);}

	ldclose(ldptr);
}

int
output_externals(outfile)
char *outfile;
{FILE *symout;
 char *name;
 struct lsymbol_table tab;
 char out[4];
 char tem[SYMNMLEN+1];
 struct syment *p, *end;
tem[SYMNMLEN]=0;
tab.n_symbols=0;tab.tot_leng=0;
 symout=fopen(outfile,"w");
 if (!symout)
   {perror(outfile); exit(1);};
 fseek(symout,sizeof(struct lsymbol_table),0);
 end = my_symbol_table + NSYMS(my_header);
 for (p = my_symbol_table; p < end; p++)	{
   /*
     Is the following check enough?
     */
   if EXT_and_TEXT_BSS_DAT(p)
     { name= SYM_NAME(p);
       {int i=0;
      dprintf(tab.n_symbols %d , tab.n_symbols);
      tab.n_symbols++;
      fwrite(&(p->n_value),sizeof(int),1,symout);
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
   dprintf( index , (int) (p - my_symbol_table)  / sizeof(struct syment));
   p = p + NUM_AUX(p); }
 }
 fseek(symout,0,0);
 fwrite(&tab,sizeof(tab),1,symout);
 fclose(symout);
 return 0;
 }

