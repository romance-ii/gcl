/*
 Copyright (C) 1994  W. Schelter

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

*/


#ifdef STAND


#define object char *
#define close_stream(a)
#define coerce_to_filename(a,b)
#define FEerror(a,b,c) printf(a)
#define vs_push(a)
#define read_fasl_vector(a) 0;

int test;
char *joey="hi bill";

char *kcl_self,*system_directory;

main(argc,argv)
int argc;
char *argv[];     
{argc;
 kcl_self=argv[2];
 system_directory=argv[3];
 _fmode = O_BINARY;

 fasload(argv[1]);
}

node_compare(node1,node2)
char *node1, *node2;
{ return(strcmp( ((struct node *)node1)->string,
	         ((struct node *)node2)->string));}



read_special_symbols(symfile)
char *symfile;
{FILE *symin;
 char *symbols;
 int i,jj;
 struct lsymbol_table tab;
 if (!(symin=fopen(symfile,"r")))
   {perror(symfile);exit(1);};
 if(!fread((char *)&tab,sizeof(tab),1,symin))
   FEerror("No header",0,0);
 symbols=malloc(tab.tot_leng);
 c_table.alloc_length=( (PTABLE_EXTRA+ tab.n_symbols));
 (c_table.ptable) = (TABL *) malloc(sizeof(struct node) * c_table.alloc_length);
 if (!(c_table.ptable)) {perror("could not allocate"); exit(1);};
 i=0; c_table.length=tab.n_symbols;
 while(i < tab.n_symbols)
   { fread((char *)&jj,sizeof(int),1,symin);
     (SYM_ADDRESS(c_table,i))=jj;
     SYM_STRING(c_table,i)=symbols;
 
     while( *(symbols++) =   getc(symin)) 
       {;}
/*     dprintf( name %s ,  SYM_STRING(c_table,i));
     dprintf( addr %d , jj);
*/
     i++;
   }

 /*
   for(i=0;i< 5;i++)
   {printf("Symbol: %d %s %d \n",i,SYM_STRINGN(c_table,i),
   SYM_ADDRESS(*ptable,i));}
   */
}

#endif  /* STAND */

