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

#define IN_UNIXFASL
#include "include.h"

#ifdef UNIXFASL
#include UNIXFASL
#else

#ifdef HAVE_AOUT
#undef BSD
#undef ATT
#define BSD
#include HAVE_AOUT
#endif

#ifdef COFF_ENCAPSULATE
#undef BSD
#undef ATT
#define BSD
#include "a.out.encap.h"
#endif

#ifdef ATT
#include <filehdr.h>
#include <scnhdr.h>
#include <syms.h>
#endif

#ifdef E15
#include <a.out.h>
#define exec		bhdr
#define a_text		tsize
#define a_data		dsize
#define a_bss		bsize
#define a_syms		ssize
#define a_trsize	rtsize
#define a_drsize	rdsize
#endif

#ifdef BSD
#define	textsize	header.a_text
#define	datasize	header.a_data
#define	bsssize		header.a_bss
#ifdef COFF_ENCAPSULATE
#define	textstart	sizeof(header) +sizeof(struct coffheader)
#else
#define	textstart	sizeof(header)
#endif
#define	newbsssize	newheader.a_bss
#endif

#ifndef HEADER_SEEK
#define HEADER_SEEK
#endif

#ifndef MAXPATHLEN
#  define	MAXPATHLEN	1024
#endif

#ifndef SFASL
int
fasload(faslfile)
object faslfile;
{

#ifdef BSD
	struct exec header, newheader;
#endif	

#ifdef ATT
	struct filehdr fileheader;
	struct scnhdr sectionheader;
	int textsize, datasize, bsssize;
	int textstart;
#endif

#ifdef E15
	struct exec header;
#define	textsize	header.a_text
#define	datasize	header.a_data
#define	bsssize		header.a_bss
#define	textstart	sizeof(header)
#endif

	object memory, data, tempfile;
	FILE *fp;
	char filename[MAXPATHLEN];
	char tempfilename[32];
	char command[MAXPATHLEN * 2];
	int i;
	object *old_vs_base = vs_base;
	object *old_vs_top = vs_top;
#ifdef IBMRT

#endif

	coerce_to_filename(faslfile, filename);

	faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
	vs_push(faslfile);
	fp = faslfile->sm.sm_fp;
	/* seek to beginning of the header */

	HEADER_SEEK(fp);

#ifdef BSD
	fread(&header, sizeof(header), 1, fp);
#endif
#ifdef ATT
	fread(&fileheader, sizeof(fileheader), 1, fp);
#ifdef S3000
        if(fileheader.f_opthdr != 0) fseek(fp,fileheader.f_opthdr,1);
#endif
	fread(&sectionheader, sizeof(sectionheader), 1, fp);
	textsize = sectionheader.s_size;
	textstart = sectionheader.s_scnptr;
	fread(&sectionheader, sizeof(sectionheader), 1, fp);
	datasize = sectionheader.s_size;
	fread(&sectionheader, sizeof(sectionheader), 1, fp);
	if (strcmp(sectionheader.s_name, ".bss") == 0)
		bsssize = sectionheader.s_size;
	else
		bsssize = 0;
#endif
#ifdef E15
	fread(&header, sizeof(header), 1, fp);
#endif

	memory = alloc_object(t_cfdata);
	memory->cfd.cfd_self = NULL;
	memory->cfd.cfd_start = NULL;
	memory->cfd.cfd_size = textsize + datasize + bsssize;
	vs_push(memory);
	/* If the file is smaller than the space asked for, typically the file
	   is an invalid object file */
	if (file_len(fp)*4 < memory->cfd.cfd_size)
	  FEerror("Invalid object file stream: ~a",1,faslfile);
	memory->cfd.cfd_start = ALLOC_ALIGNED(alloc_contblock,
					      memory->cfd.cfd_size,sizeof(double));

#ifdef SEEK_TO_END_OFILE
SEEK_TO_END_OFILE(fp);
#else
#ifdef BSD
	fseek(fp,
	      header.a_text+header.a_data+
	      header.a_syms+header.a_trsize+header.a_drsize,
	      1);
	fread(&i, sizeof(i), 1, fp);
	fseek(fp, i - sizeof(i), 1);
#endif

#ifdef ATT
	fseek(fp,
	      fileheader.f_symptr + SYMESZ*fileheader.f_nsyms,
	      0);
	fread(&i, sizeof(i), 1, fp);
	fseek(fp, i - sizeof(i), 1);
	while ((i = getc(fp)) == 0)
		;
	ungetc(i, fp);
#endif

#ifdef E15
	fseek(fp,
	      header.a_text+header.a_data+
	      header.a_syms+header.a_trsize+header.a_drsize,
	      1);
#endif
#endif
	data = read_fasl_vector(faslfile);
	vs_push(data);
	close_stream(faslfile);

	sprintf(tempfilename, "/tmp/fasltemp%d", getpid());

AGAIN:

#ifdef BSD
	LD_COMMAND(command,
		kcl_self,
		memory->cfd.cfd_start,
		filename,
		" ",
		tempfilename);
	 if(symbol_value(sLAload_verboseA)!=Cnil)		
        printf("start address -T %x ",memory->cfd.cfd_start);
#endif
#ifdef ATT
	coerce_to_filename(symbol_value(sSAsystem_directoryA),
			   system_directory);
	sprintf(command,
		"%sild %s %d %s %s",
		system_directory,
		kcl_self,
		memory->cfd.cfd_start,
		filename,
		tempfilename);
#endif
#ifdef E15
	coerce_to_filename(symbol_value(sSAsystem_directoryA),
			   system_directory);
	sprintf(command,
		"%sild %s %d %s %s",
		system_directory,
		kcl_self,
		memory->cfd.cfd_start,
		filename,
		tempfilename);
#endif

	if (system(command) != 0)
		FEerror("The linkage editor failed.", 0);

	tempfile = make_simple_string(tempfilename);
	vs_push(tempfile);
	tempfile = open_stream(tempfile, smm_input, Cnil, sKerror);
	vs_push(tempfile);
	fp = tempfile->sm.sm_fp;

	HEADER_SEEK(fp);

#ifdef BSD
	fread(&newheader, sizeof(header), 1, fp);
	if (newbsssize != bsssize) {
		insert_contblock(memory->cfd.cfd_start, memory->cfd.cfd_size);
		bsssize = newbsssize;
		memory->cfd.cfd_start = NULL;
		memory->cfd.cfd_size = textsize + datasize + bsssize;
		memory->cfd.cfd_start = ALLOC_ALIGNED(alloc_contblock,memory->cfd.cfd_size,
						     sizeof( double));
		close_stream(tempfile);
		unlink(tempfilename);
		goto AGAIN;
	}
#endif

	if (fseek(fp, textstart, 0) < 0)
		error("file seek error");

	fread(memory->cfd.cfd_start, textsize + datasize, 1, fp);

	close_stream(tempfile);

	unlink(tempfilename);

	call_init(0,memory,data,0);
	
	vs_base = old_vs_base;
	vs_top = old_vs_top;

	return(memory->cfd.cfd_size);
}
#endif /* ifndef SFASL */

#ifndef __svr4__
#ifdef BSD

#define FASLINK
#ifndef PRIVATE_FASLINK

static int
faslink(object faslfile, object ldargstring)
{
#if defined(__linux__) && defined(__ELF__)
  FEerror("faslink() not supported for ELF yet",0);
  return 0;
#else
	struct exec header, faslheader;
	object memory, data, tempfile;
	FILE *fp;
	char filename[MAXPATHLEN];
	char ldargstr[MAXPATHLEN];
	char tempfilename[32];
	char command[MAXPATHLEN * 2];
	char buf[BUFSIZ];
	int i;
	object *old_vs_base = vs_base;
	object *old_vs_top = vs_top;

	coerce_to_filename(ldargstring, ldargstr);
	coerce_to_filename(faslfile, filename);

	sprintf(tempfilename, "/tmp/fasltemp%d", getpid());
	LD_COMMAND(command,
		kcl_self,
		(int)core_end,
		filename,
		ldargstr,
		tempfilename);

	if (system(command) != 0)
		FEerror("The linkage editor failed.", 0);

	fp = fopen(tempfilename, "r");
	setbuf(fp, buf);
	fread(&header, sizeof(header), 1, fp);
	{BEGIN_NO_INTERRUPT;
	memory = alloc_object(t_cfdata);
	memory->cfd.cfd_self=0;
	memory->cfd.cfd_start = NULL;
	memory->cfd.cfd_size = textsize + datasize + bsssize;
	vs_push(memory);
	memory->cfd.cfd_start = ALLOC_ALIGNED(alloc_contblock,
					      memory->cfd.cfd_size,
					      sizeof(double));
	END_NO_INTERRUPT;}
	fclose(fp);

	faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
	vs_push(faslfile);
#ifdef SEEK_TO_END_OFILE
SEEK_TO_END_OFILE(faslfile->sm.sm_fp);
#else  
	fp = faslfile->sm.sm_fp;
	fread(&faslheader, sizeof(faslheader), 1, fp);
	fseek(fp,
	      faslheader.a_text+faslheader.a_data+
	      faslheader.a_syms+faslheader.a_trsize+faslheader.a_drsize,
	      1);
	fread(&i, sizeof(i), 1, fp);
	fseek(fp, i - sizeof(i), 1);
#endif
	data = read_fasl_vector(faslfile);
	vs_push(data);
	close_stream(faslfile);
        LD_COMMAND(command,
		   kcl_self,
		   memory->cfd.cfd_start,
		   filename,
		   ldargstr,
		   tempfilename);
	 if(symbol_value(sLAload_verboseA)!=Cnil)	
        printf("start address -T %x ",memory->cfd.cfd_start);
	if (system(command) != 0)
		FEerror("The linkage editor failed.", 0);

	tempfile = make_simple_string(tempfilename);
	vs_push(tempfile);
	tempfile = open_stream(tempfile, smm_input, Cnil, sKerror);
	vs_push(tempfile);
	fp = tempfile->sm.sm_fp;

	if (fseek(fp, textstart, 0) < 0)
		error("file seek error");

	fread(memory->cfd.cfd_start, textsize + datasize, 1, fp);

	close_stream(tempfile);

	unlink(tempfilename);

	call_init(0,memory,data,0);

	vs_base = old_vs_base;
	vs_top = old_vs_top;

	return(memory->cfd.cfd_size);
#endif
}

#endif

static void
FFN(siLfaslink)(void)
{
	bds_ptr old_bds_top;
	int i;
	object package;

	check_arg(2);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	check_type_string(&vs_base[1]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_base[0]->pn.pn_type = FASL_string;
	vs_base[0] = namestring(vs_base[0]);
	package = symbol_value(sLApackageA);
	old_bds_top = bds_top;
	bds_bind(sLApackageA, package);
	i = faslink(vs_base[0], vs_base[1]);
	bds_unwind(old_bds_top);
	vs_top = vs_base;
	vs_push(make_fixnum(i));
}

#endif
#endif/*  svr4 */
#endif /* UNIXFASL */

void
gcl_init_unixfasl(void)
{
#ifdef FASLINK
	make_si_function("FASLINK", siLfaslink);
#endif
}
