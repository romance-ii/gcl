/* for the 4d */

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



/* When MACHINE is S3000, use fcntl.h */
#ifdef ATT
#include <fcntl.h>
#include <unistd.h>
#else
#include <sys/file.h>
#endif


#ifdef BSD
#include <a.out.h>
#endif

#ifdef VAX
#define	PAGSIZ		1024
#define	SEGSIZ		1024
#define	TXTRELOC	0
#endif

#ifdef ISI



#endif

#ifdef SEQ


#endif

#ifdef NEWS
#define	TXTRELOC	0
#endif

#ifdef IBMRT



#endif

#ifdef ATT
#include <filehdr.h>
#include <aouthdr.h>
#include <scnhdr.h>
#include <syms.h>
#define exec		aouthdr
#define a_text		tsize
#define a_data		dsize
#define a_bss		bsize
#endif

#ifdef E15
#include <a.out.h>
extern	etext;
#define exec		bhdr
#define a_text		tsize
#define a_data		dsize
#define a_bss		bsize
#define a_syms		ssize
#define a_trsize	rtsize
#define a_drsize	rdsize
#define	SEGSIZ		(128*1024)
#define	TXTRELOC	(1024*1024)
#endif

#ifndef mips
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
#endif

memory_save(original_file, save_file)
char *original_file, *save_file;
{

#ifdef BSD
	struct exec header;
	int stsize;
#endif
#ifdef ATT
#ifdef mips
	struct {
	  struct filehdr filehdr;
	  struct aouthdr aouthdr;
	  struct scnhdr 
	    text_section,
	    init_section,
	    rdata_section,
	    data_section,
	    lit8_section,
	    lit4_section,
	    sdata_section,
	    sbss_section,
	    bss_section;
	} hdrs;
	struct filehdr *pfilehdr;
	struct aouthdr *paouthdr;
	struct scnhdr *pscnhdr;
	char buf[BUFSIZ];
	HDRR symhdr;
	int fptr, nbytes, pagesize;
#define setbuf(stream,buf)
#else
	struct filehdr fileheader;
	struct exec header;
#endif /* mips */
	int diff;
#endif
#ifdef E15
	struct exec header;
#endif

	char *data_begin, *data_end;
	int original_data;
	FILE *original, *save;
	register int n;
	register char *p;
	extern void *sbrk();

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

#ifdef BSD
	fread(&header, sizeof(header), 1, original);

#ifdef VAX
	data_begin
	= (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1));
#endif
#ifdef SUN
	data_begin
	= (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1));
#endif
#ifdef SUN2R3
	data_begin = (char *)N_DATADDR(header);
#endif
#ifdef SUN3
	data_begin = (char *)N_DATADDR(header);
#endif
#ifdef NEWS
	data_begin
	= (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1));
#endif
#ifdef ISI


#endif
#ifdef SEQ


#endif
#ifdef IBMRT


#endif

	data_end = core_end;
	original_data = header.a_data;
	header.a_data = data_end - data_begin;
	header.a_bss = 0;
	fwrite(&header, sizeof(header), 1, save);

#ifdef VAX
	if (header.a_magic == ZMAGIC)
		filecpy(save, original, PAGSIZ - sizeof(header));
	filecpy(save, original, header.a_text);
#endif
#ifdef SUN
	if (header.a_magic == ZMAGIC)
		filecpy(save, original, PAGSIZ - sizeof(header));
	filecpy(save, original, header.a_text);
#endif
#ifdef SUN2R3
	filecpy(save, original, header.a_text - sizeof(header));
#endif
#ifdef SUN3
	filecpy(save, original, header.a_text - sizeof(header));
#endif
#ifdef NEWS
	if (header.a_magic == ZMAGIC)
		filecpy(save, original, PAGSIZ - sizeof(header));
	filecpy(save, original, header.a_text);
#endif
#ifdef ISI




#endif
#ifdef SEQ


#endif
#ifdef IBMRT



#endif
#endif

#ifdef ATT
#ifdef mips
# define NSCNS 4
	read(0, (char*)&hdrs.filehdr, FILHSZ + AOUTHSZ);
	pfilehdr = (struct filehdr*)hdrs.aouthdr.text_start;
	paouthdr = (struct aouthdr*)((long)pfilehdr + FILHSZ);
	pscnhdr  = (struct scnhdr*)((long)paouthdr + AOUTHSZ);

	pagesize = getpagesize();

	hdrs.aouthdr.dsize = 
	  ((long)core_end - hdrs.aouthdr.data_start + pagesize - 1)
	    & ~(pagesize - 1);
	hdrs.aouthdr.bss_start = 
	  hdrs.aouthdr.data_start + hdrs.aouthdr.dsize;
	hdrs.aouthdr.bsize = 0;

	hdrs.filehdr.f_nscns  = NSCNS;
	hdrs.filehdr.f_timdat = time(NULL);
	hdrs.filehdr.f_symptr = hdrs.aouthdr.tsize + hdrs.aouthdr.dsize;

	bcopy((char*)pscnhdr, (char*)&hdrs.text_section, NSCNS * SCNHSZ);
	hdrs.data_section.s_size = hdrs.aouthdr.dsize 
	  - hdrs.rdata_section.s_size;
	bzero((char*)&hdrs.lit8_section,
	      sizeof hdrs - FILHSZ - AOUTHSZ - NSCNS * SCNHSZ);
	fptr = write(1, &hdrs, AOUTHSZ + FILHSZ + pfilehdr->f_nscns * SCNHSZ);

	p = (char*)hdrs.aouthdr.text_start + fptr;
	n = hdrs.aouthdr.tsize - fptr;
	nbytes = pagesize - fptr;
	write(1, p, nbytes);
	p += nbytes;
	n -= nbytes;
	while ( n > pagesize ) {
	  write(1, p, pagesize);
	  p += pagesize;
	  n -= pagesize;
	}
	if ( n )
	  write(1, p, n);

	lseek(1, hdrs.rdata_section.s_scnptr, SEEK_SET);
	p = (char*)hdrs.aouthdr.data_start;
	n = hdrs.aouthdr.dsize;
	while ( n > pagesize ) {
	  write(1, p, pagesize);
	  p += pagesize;
	  n -= pagesize;
	}
	if ( n ) 
	  write(1, p, n);

	lseek(0, pfilehdr->f_symptr, SEEK_SET);
	diff = hdrs.filehdr.f_symptr - pfilehdr->f_symptr;
	read(0, &symhdr, cbHDRR);
#ifndef __STDC__
#define adjust(field)if(symhdr.cb/**/field/**/Offset)symhdr.cb/**/field/**/Offset+= diff
#else
#define adjust(field)if(symhdr.cb##field##Offset)symhdr.cb##field##Offset+= diff
#endif
	adjust(Line);
	adjust(Dn);
	adjust(Pd);
	adjust(Sym);
	adjust(Opt);
	adjust(Aux);
	adjust(Ss);
	adjust(SsExt);
	adjust(Fd);
	adjust(Rfd);
	adjust(Ext);
#undef adjust
	write(1, &symhdr, cbHDRR);
	while ( (n = read(0, buf, sizeof buf)) > 0 )
	  write(1, buf, n);
#else
	fread(&fileheader, sizeof(fileheader), 1, original);
	fread(&header, sizeof(header), 1, original);
	data_begin = (char *)header.data_start;
	data_end = core_end;
	original_data = header.a_data;
	header.a_data = data_end - data_begin;
	diff = header.a_data - original_data;
	header.a_bss = sbrk(0) - core_end;
	fileheader.f_symptr += diff;
	fwrite(&fileheader, sizeof(fileheader), 1, save);
	fwrite(&header, sizeof(header), 1, save);
	fread(&sectionheader, sizeof(sectionheader), 1, original);
	if (sectionheader.s_lnnoptr)
		sectionheader.s_lnnoptr += diff;
	fwrite(&sectionheader, sizeof(sectionheader), 1, save);
	fread(&sectionheader, sizeof(sectionheader), 1, original);
	sectionheader.s_size += diff;
	if (sectionheader.s_lnnoptr)
		sectionheader.s_lnnoptr += diff;
	fwrite(&sectionheader, sizeof(sectionheader), 1, save);
	fread(&sectionheader, sizeof(sectionheader), 1, original);
	sectionheader.s_paddr += diff;
	sectionheader.s_vaddr += diff;
	sectionheader.s_size = header.a_bss;
#ifdef S3000
        if (sectionheader.s_scnptr)
                sectionheader.s_scnptr += diff;
#endif
	if (sectionheader.s_lnnoptr)
		sectionheader.s_lnnoptr += diff;
	fwrite(&sectionheader, sizeof(sectionheader), 1, save);
	for (n = 4;  n <= fileheader.f_nscns;  n++) {
		fread(&sectionheader, sizeof(sectionheader), 1, original);
		if (sectionheader.s_scnptr)
			sectionheader.s_scnptr += diff;
		if (sectionheader.s_lnnoptr)
			sectionheader.s_lnnoptr += diff;
		fwrite(&sectionheader, sizeof(sectionheader), 1, save);
	}
	filecpy(save, original, header.a_text);
#endif /* mips */
#endif 

#ifdef E15
	fread(&header, sizeof(header), 1, original);
	if (header.fmagic != NMAGIC)
		data_begin
		= (char *)(TXTRELOC+header.a_text);
	else
		data_begin
		= (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1));
	data_end = core_end;
	original_data = header.a_data;
	header.a_data = data_end - data_begin;
	header.a_bss = sbrk(0) - core_end;
	fwrite(&header, sizeof(header), 1, save);
	filecpy(save, original, header.a_text);
#endif

#ifndef mips
	for (n = header.a_data, p = data_begin;  ;  n -= BUFSIZ, p += BUFSIZ)
		if (n > BUFSIZ)
			fwrite(p, BUFSIZ, 1, save);
		else if (n > 0) {
			fwrite(p, 1, n, save);
			break;
		} else
			break;

	fseek(original, original_data, 1);

#ifdef BSD
	filecpy(save, original, header.a_syms+header.a_trsize+header.a_drsize);
	fread(&stsize, sizeof(stsize), 1, original);
	fwrite(&stsize, sizeof(stsize), 1, save);
	filecpy(save, original, stsize - sizeof(stsize));
#endif

#ifdef ATT
	for (;;) {
		n = getc(original);
		if (feof(original))
			break;
		putc(n, save);
	}
#endif

#ifdef E15
	filecpy(save, original, header.a_syms+header.a_trsize+header.a_drsize);
#endif
#endif /* !mips */
	fclose(original);
	fclose(save);
}

Lsave()
{
	char filename[256];

	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	coerce_to_filename(vs_base[0], filename);
/*
	_cleanup();
*/
	{
		FILE *p;
		int nfile;

#ifdef HAVE_GETDTABLESIZE
		nfile = getdtablesize();
#else
		nfile = _NFILE;
#endif
		for (p = &__iob[3];  p < &__iob[nfile];  p++)
			fclose(p);
	}
	memory_save(kcl_self, filename);
/*
	_exit(0);
*/
	exit(0);
	/*  no return  */
}


#ifdef ISI










#endif
