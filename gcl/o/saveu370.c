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

*/

/*
	unixsave.c
*/


#include <fcntl.h>
#include <filehdr.h>
#include <scnhdr.h>
#ifdef u370
#undef u370
#include <aouthdr.h>

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
		} else if (n > 0) {
			fread(buffer, 1, n, from);
			fwrite(buffer, 1, n, to);
			break;
		} else
			break;
}


memory_save(original_file, save_file)
char *original_file, *save_file;
{	MEM_SAVE_LOCALS;
	struct scnhdr shdrs[15];
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

	/* READ_HEADER; */
        fread(&fileheader, sizeof(fileheader), 1, original); 
	fread(&header, fileheader.f_opthdr, 1, original);
	fread(&shdrs[1],sizeof(sectionheader),fileheader.f_nscns,original);
	data_begin = (char *) shdrs[2].s_paddr;
	data_end = core_end; 
	original_data = header.a_data; 
	header.a_data = data_end - data_begin; 
	diff = header.a_data - original_data; 
	header.a_bss = sbrk(0) - core_end;  
	fileheader.f_symptr += diff;
	fwrite(&fileheader, sizeof(fileheader), 1, save);
	fwrite(&header,fileheader.f_opthdr , 1, save);

	 /* .text */
#define INC_IF(x) if(x) x = x+diff;

	 /* .data */
	INC_IF(shdrs[2].s_size);
	
	 /* .bss */
	shdrs[3].s_paddr += diff;
	shdrs[3].s_vaddr += diff;
	shdrs[3].s_size = header.a_bss; 

	for (n = 1;  n <= fileheader.f_nscns;  n++) {
	  	INC_IF(shdrs[n].s_lnnoptr);
		if(n>=3) {INC_IF(shdrs[n].s_scnptr);}

	};
	fwrite(&shdrs[1],sizeof(sectionheader),fileheader.f_nscns,save);

	filecpy(save,original,shdrs[2].s_scnptr - ftell(save));

	for (n = header.a_data, p = data_begin;  ;  n -= BUFSIZ, p += BUFSIZ)
		if (n > BUFSIZ)
			fwrite(p, BUFSIZ, 1, save);
		else if (n > 0) {
			fwrite(p, 1, n, save);
			break;
		} else
			break;

	fseek(original, original_data, 1);

	COPY_TO_SAVE;

	fclose(original);
	fclose(save);
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
/*
	_exit(0);
*/
	exit(0);
	/*  no return  */
}



#include "page.h"
#undef sbrk
char *sbrk ();
char *
sbrk1(n)
{ char *m1;
  char * m = sbrk(0);
/* printf("Calling sbrk(0x%08x),[cur,rently sbrk(0)=0x%08x,core_end=0x%08x,"
   ,n,m,core_end);
   */
 m1 =  sbrk(n);
 if (core_end && m1!= m)
   { if (m1 < m ||
	 ((int)m1 % PAGESIZE))
	 { error("unexpected sbrk");
	 }
     while ( m < m1)
      {type_map[page(m)] = t_other;
       m += PAGESIZE;
     }
    core_end = m;}
/*  printf("Returning 0x%08x\n",m); */
 return m;}


