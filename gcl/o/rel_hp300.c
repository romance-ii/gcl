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

#undef NSYMS
#define NSYMS(hdr) count_symbols(&hdr,fp)
#ifndef dprintf
#define dprintf(a,b) 
#endif

/* the routines other than relocate are also used in rsym.c */


#ifdef IN_RSYM
#define temp_malloc  malloc
#else

relocate()
{
  char *where;
  {
		unsigned int new_value;
		where = the_start + relocation_info.r_address;
		   switch(relocation_info.r_segment){
		     case RNOOP: goto DONT;
		     case REXT: 
		  		new_value = symbol_table[relocation_info.
							 r_symbolnum].n_value;
				break;
		     case RDATA: 
	   	     case RBSS: 
		     case RTEXT: new_value= (int)start_address; break;
		     default:
			dprintf(relocation_info.r_address = %d, 
				relocation_info.r_address);
			printf(
"\nRel_Info {r_segment = %x, r_symbolnum= %x, r_address = %d} -- Ignored", 
				      relocation_info.r_segment, 
				      relocation_info.r_symbolnum,
				      relocation_info.r_address); 
			fflush(stdout);
			goto DONT;
		};
		switch(relocation_info.r_length){
		   case 0: *( char *)where = new_value + *( char *) where;
			   break;
		   case 1: *( short *)where = new_value + *( short *) where;
			   break;
		   case 2: *( long *)where = new_value + *( long *) where;
			   break;
		}
DONT:	       ;
	      }
}



#ifdef PRIVATE_FASLINK

int
faslink(faslfile, ldargstring)
object faslfile, ldargstring;
{
	struct exec tmpheader, faslheader;

	FILE *fp; TABL *table;
	char filename[MAXPATHLEN];
	char ldargstr[MAXPATHLEN];
	char stbfilename[32];
	char tmpfilename[32];
	char command[MAXPATHLEN * 2];
	char buf[BUFSIZ], *p;
	int i, res;
	object tmpfile, data;
	object *old_vs_base = vs_base;
	object *old_vs_top = vs_top;

	coerce_to_filename(ldargstring, ldargstr);
	coerce_to_filename(faslfile, filename);

/* Print out symbol table */
	sprintf(stbfilename, "/tmp/stb%d", getpid());
	fp = fopen(stbfilename, "w");
	for(i = 0, p = (char *)&tmpheader; i < sizeof(struct exec); i++) 
	   *p++ = '\0';
	tmpheader.a_magic.system_id = HP9000S200_ID;
	tmpheader.a_magic.file_type = RELOC_MAGIC;
	tmpheader.a_stamp = 2;

	fwrite(&tmpheader, sizeof(struct exec), 1, fp);
	table = c_table.ptable;
	for(i = 0; i < c_table.length; i++) {
	   struct nlist_ nbuf; int len;
	   char *string; unsigned int address;
	   string  =(*table)[i].string;
	   address =(*table)[i].address;
	   len = strlen(string);
	   if (((strncmp(string,"_end",  4) == NULL) && (len == 4)) ||
	       ((strncmp(string,"_etext",6) == NULL) && (len == 6)) ||
	       ((strncmp(string,"_edata",6) == NULL) && (len == 6)))
	      continue;
	   nbuf.n_value = address; 
	   nbuf.n_type = N_ABS | N_EXT;
	   nbuf.n_length = len;
	   nbuf.n_almod  = 0;
	   nbuf.n_unused = 0;
	   fwrite(&nbuf,sizeof(nbuf),1,fp);
	   fwrite(string,len,1,fp);
	   tmpheader.a_lesyms += sizeof(struct nlist_) + len;
	}
	fseek(fp,0,0);
	fwrite(&tmpheader, sizeof(struct exec), 1, fp);
	fclose(fp);

	sprintf(tmpfilename, "/tmp/fasl%d", getpid());
	sprintf(command,
		"ld -r -o %s -x %s %s %s -h _edata -h _etext", 
		 tmpfilename,
		 stbfilename,
		 filename,
		 ldargstr);

	if (system(command) != 0)
		FEerror("The linkage editor failed.", 0);

	unlink(stbfilename);

	faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
	vs_push(faslfile);
	fp = faslfile->sm.sm_fp;
	fread(&faslheader, sizeof(faslheader), 1, fp);
	fseek(fp,RDATA_OFFSET(faslheader)+faslheader.a_drsize,0);

	{ FILE *tmpfp;
	  int fpthis,fpend;
	  fpthis = ftell(fp);
	  fseek(fp,0,2);
	  fpend  = ftell(fp);
	  fseek(fp,fpthis,0);
	  tmpfp = fopen(tmpfilename,"a+");
	  fseek(tmpfp,0,2);
	  filecpy(tmpfp,fp,fpend-fpthis);
	  fclose(tmpfp);
	}

	close_stream(faslfile);

	tmpfile = make_simple_string(tmpfilename);
	vs_push(tmpfile);

	res = fasload(tmpfile);

	unlink(tmpfilename);
	vs_base = old_vs_base;
	vs_top = old_vs_top;

	return(res);
}
#endif
#endif


count_symbols(phdr,fp)
struct exec *phdr;
FILE *fp;
{int nsyms,i;
 fseek(fp,(int)(LESYM_OFFSET(*phdr)), 0);
 for(i = phdr->a_lesyms, nsyms = 0; i > 0; nsyms++) {
   struct syment tmp;
   fread((char *)&tmp, SYMESZ, 1, fp); i -= SYMESZ;
   fseek(fp,(int)tmp.n_length,1); i -= tmp.n_length;
 }
 return (nsyms);
}


#define READ_IN_STRING_TABLE(fp,size) \
  read_in_string_table(fp,&fileheader,size,OUR_ALLOCA(size))

char *
read_in_string_table(fp,pfileheader,string_size,buf)
FILE *fp;
struct exec *pfileheader;
int string_size ;
char *buf;

{
  char *p,*ans; 
  int slen,i,j;
  ans=p = buf;
  dprintf( string table leng = %d, string_size);
  fseek(fp,LESYM_OFFSET(*pfileheader),  0);
  for (i = pfileheader->a_lesyms,j=0;  i > 0;  i=i- slen-SYMESZ)
    {
      fseek(fp,SYMESZ, 1);
      slen = symbol_table[j++].n_length;
      fread(p,slen,1,fp);
      *((p)+slen) = '\0';
      dprintf( p  %s , p);
      dprintf( slen  %d,slen);
      
      p += slen + 1;
    }
  return (ans);
}
