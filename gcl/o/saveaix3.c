/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


(c) Copyright William F. Schelter.
  
*/
/*
	unixsave.c
*/
#ifndef UNIX
#include "include.h"
#endif

#include <fcntl.h>
#include <filehdr.h>
#include <aouthdr.h>
#include <scnhdr.h>
filecpy(to, from, n)
FILE *to, *from;
register int n;
{
	char buffer[BUFSIZ];
	for (;;)
		if (n > BUFSIZ) {
			fread(buffer, BUFSIZ, 1, from);
			fwrite(buffer, BUFSIZ, 1, to);
			n -= BUFSIZ;
		} 
		else if (n > 0) {
			fread(buffer, 1, n, from);
			fwrite(buffer, 1, n, to);
			break;
		} 
		else
			break;
}
#include <sys/ldr.h>
#include <loader.h>
char *__start;
memory_save(original_file, save_file)
char *original_file, *save_file;
{     /*   MEM_SAVE_LOCALS; */ 
    struct filehdr Eheader;
    struct aouthdr header;
    struct scnhdr  shdrs[15];
    int stsize;
    int textsize=0;
    int after_data;
    int orig_data_scnptr;
    int orig_debug_scnptr;

    char *data_begin, *data_end;
    int original_data;
    FILE *original, *save;
    register int n;
    register char *p;
    extern char *sbrk();

    fclose(stdin);
    original = fopen(original_file, "r");
    if (stdin != original || original->_file != 0) {
      fprintf(stderr, "Can't open the original file.\n");
      exit(1);
    }
    setbuf(original, stdin_buf);
    fclose(stdout);
    unlink(save_file);
    n = open(save_file, O_CREAT|O_WRONLY, 0777);
    if (n != 1 || (save = fdopen(n, "w")) != stdout) {
      fprintf(stderr, "Can't open the save file.\n");
      exit(1);
    }
    setbuf(save, stdout_buf);
    /*	READ_HEADER; */
    fread(&Eheader, sizeof(Eheader), 1, original);
    fread(&header, sizeof(header), 1, original);
    data_begin= 0x20000800;
    {
      char buf[500];
      struct ld_info * ld;
      loadquery(L_GETINFO,buf,sizeof(buf));
      ld = (struct ld_info *)buf;
      data_begin = ld->ldinfo_dataorg ;
    }

    /* 	header.data_start = data_begin; */

    data_end = core_end;
    original_data = header.dsize;
    header.dsize = data_end - data_begin;
    header.bsize = 0;
    {
      int j,i = Eheader.f_nscns;
      int diff;
      fread(shdrs +1 ,i,sizeof(struct scnhdr),original);
      orig_data_scnptr = shdrs[header.o_sndata].s_scnptr;
      orig_debug_scnptr = shdrs[8].s_scnptr;
      diff = header.a_data - original_data
	- shdrs[header.o_snbss + 1].s_size;
      after_data = shdrs[header.o_snbss +2].s_scnptr;
      Eheader.f_symptr += diff;
      fwrite(&Eheader, sizeof(Eheader), 1, save);
      fwrite(&header, sizeof(header), 1, save);
      shdrs[header.o_snbss ].s_size = 0;
      shdrs[header.o_snbss +1 ].s_size = 0;
      /* ex**pect no more than 15 sections, and pad after data */
      if (strcmp(".pad",shdrs[header.o_snbss + 1].s_name)
	  || i >= 15)
	perror("unexpected format of object file");
      shdrs[header.o_sndata ].s_size = header.a_data;
      /*       shdrs[header.o_sndata].s_paddr = data_begin;
	       shdrs[header.o_sndata].s_vaddr = data_begin;
	       */
      for (j=1; j<= i; j++)
#define ADJUST(x) if(x) (x) = (x) + diff       	 	 	  
	{
	  ADJUST(shdrs[j].s_lnnoptr);
	  ADJUST(shdrs[j].s_relptr);
	}
      for (j= header.o_sndata +1 ; j<= i; j++)
	{
	  ADJUST(shdrs[j].s_scnptr);
	  ADJUST(shdrs[j].s_vaddr);
	  ADJUST(shdrs[j].s_paddr);
	}
      fwrite(shdrs +1  ,i,sizeof(struct scnhdr),save);


      /*	FILECPY_HEADER; */
      filecpy(save, original,
	      shdrs[header.o_sndata].s_scnptr
	      - sizeof(header)-sizeof(Eheader) - i*sizeof(struct scnhdr));

      j= ftell(save);
      j= ftell(original);
      for (n = header.a_data, p = data_begin;  ;  n -= BUFSIZ, p += BUFSIZ)
	if (n > BUFSIZ)
	  fwrite(p, BUFSIZ, 1, save);
	else if (n > 0) {
	  fwrite(p, 1, n, save);
	  break;
	} 
	else
	  break;
      fseek(original, original_data, 1);
      fseek(original, after_data, 0);

      /* now positioned at the loader section */
      {
	struct ldhdr *ldheader;
	struct ldrel * ldreloc_info,*p;
	char *space;
	space = (char *)  sbrk(shdrs[header.o_snloader].s_size + 0x2000);
	ldheader =  (struct ldhdr *) space;
	fread(space,1,shdrs[header.o_snloader].s_size,original);
	ldreloc_info = (struct ldrel *)
	  (space + sizeof(struct ldhdr) + LDSYMSZ * ldheader->l_nsyms);
	i =  sizeof(struct ldhdr) + LDSYMSZ * (ldheader->l_nsyms);
	for(p=ldreloc_info,i=0;  i< ldheader->l_nreloc ; i++,p++)
	  { 
	    if (p->l_rsecnm == header.o_snbss)
	      (p->l_rsecnm = header.o_sndata);
	    if (p->l_symndx == 2) /* make bss be data */
	      (p->l_symndx = 1);
	  }
	/*	     p->l_vaddr += data_begin; */
	fwrite(ldheader, 1, shdrs[header.o_snloader].s_size,save);
	/* unrelocate */
	{
	  int j1 = ftell(save);
	  int j2= ftell(original);
	  int off=0;
	  fseek(original,orig_data_scnptr,0);
	  fseek(save,shdrs[header.o_sndata].s_scnptr,0);
	  for(p=ldreloc_info,i=0;  i< ldheader->l_nreloc ; i++,p++)
	    if (p->l_rsecnm == header.o_sndata)
	      {
		int x,pos1,y;
		int d = p->l_vaddr - off;
		if (d)
		  {
		    fseek(save,d,1);
		    fseek(original,d,1);
		    off += d;
		  }
		pos1 = ftell(original);
		pos1 = ftell(save);
		fread(&x,1,sizeof(int),original);
		y = x;
		if (p->l_symndx ==0)
		  { 
		    int w =  *((int *)&__start);
		    x = ((*(int *)(data_begin+off)));
		    x = x + header.text_start ;
		    x = x - w ;
		  }
		if  (p->l_symndx ==1 || p->l_symndx ==2)
		  {
		    x = ((*(int *)(data_begin + off)) - (int) data_begin);
		  }
		fwrite(&x,1,sizeof(int),save);
		off += sizeof(int);
	      }
	  fseek(save,j1,0);
	  fseek(original,j2,0);

	}
      }

      sbrk(- (shdrs[header.o_snloader].s_size+ 0x2000));
      filecpy(save,original,Eheader.f_symptr - ftell(save));
      /* now at the beginning of the sym table */
      {
	struct syment symbol;
	struct syment *sym = &symbol;
	int naux;
	int nsyms = Eheader.f_nsyms;
	while (--nsyms >= 0)
	  {
	    fread(&symbol,1,SYMESZ,original);
	    fwrite(&symbol,1,SYMESZ,save);
	    naux= sym->n_numaux;
	    nsyms = nsyms - naux;
	    if (ISFCN(sym->n_type)
		&& (naux >= 2))
	      { 
		fread(&symbol,1,SYMESZ,original);
		(((union auxent *)(sym))->x_sym.x_fcnary.x_fcn.x_lnnoptr) += diff;
		fwrite(&symbol,1,SYMESZ,save);
		filecpy(save,original,SYMESZ*(naux -1));
	      }
	    else
	      filecpy(save,original,SYMESZ*(naux));
	  }
      }


      COPY_TO_SAVE;
      fclose(original);
      fclose(save);
    }
  }
Lsave()
{
	char filename[256];
	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	coerce_to_filename(vs_base[0], filename);
	_cleanup();
	/*
	{
		FILE *p;
		int nfile;
		nfile = NUMBER_OPEN_FILES;
		for (p = &_iob[3];  p < &_iob[nfile];  p++)
			fclose(p);
	}
*/
	memory_save(kcl_self, filename);
	_exit(0);
	/*
	exit(0);
*/
	/*  no return  */
}

