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


/* make sure we do allocate aligned for double */
/* actually I understand that ld -A wants alignment on
   the page.  ie multiple of 0x1000
*/   

#define ALIGN 12
char *
alloc_contblock_aligned(size)
int size;
{
   char *tmp_alloc = ALLOC_ALIGNED(alloc_contblock,size,(1<<12));
   bzero(tmp_alloc, size);
   return(tmp_alloc);
 }

#define alloc_contblock alloc_contblock_aligned



#ifdef BSD
#include <a.out.h>
#endif

#ifdef ATT
#ifdef mips
#include <unistd.h>
#include <aouthdr.h>
#endif
#include <filehdr.h>
#include <scnhdr.h>
#include <syms.h>
#endif



#define	MAXPATHLEN	1024



#ifdef HAVE_ELF
#include <elf.h>
#endif


int
fasload(faslfile)
object faslfile;
{

#ifdef BSD
	struct exec header, newheader;
#define	textsize	header.a_text
#define	datasize	header.a_data
#define	bsssize		header.a_bss
#define	textstart	sizeof(header)
#define	newbsssize	newheader.a_bss
#endif

#ifdef ATT
	struct filehdr fileheader;
	struct scnhdr sectionheader;
#ifdef mips
	struct aouthdr aouthdr, newaouthdr;
	HDRR symhdr;
# define textsize	aouthdr.tsize
# define datasize	aouthdr.dsize
# define bsssize	aouthdr.bsize
# define textstart	sectionheader.s_scnptr
# define newdatasize	newaouthdr.dsize
# define newbsssize	newaouthdr.bsize
#else
	int textsize, datasize, bsssize;
	int textstart;
#endif /* mips */
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

#ifdef BSD
	fread(&header, sizeof(header), 1, fp);
#endif
#ifdef ATT
	fread(&fileheader, sizeof(fileheader), 1, fp);
#ifdef mips
	fread(&aouthdr, AOUTHSZ, 1, fp);
#else
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
#endif /* mips */
#endif
#ifdef E15
	fread(&header, sizeof(header), 1, fp);
#endif

	memory = alloc_object(t_cfdata);
	memory->cfd.cfd_self = NULL;
	memory->cfd.cfd_start = NULL;
	memory->cfd.cfd_size = textsize + datasize + bsssize;
#ifdef mips
#define MIPS_ROUND 0xC	
	memory->cfd.cfd_size += MIPS_ROUND; /* room for 'ld' to round text upward */
#endif
	vs_push(memory);
	memory->cfd.cfd_start = alloc_contblock(memory->cfd.cfd_size);

#ifdef BSD
	fseek(fp,
	      header.a_text+header.a_data+
	      header.a_syms+header.a_trsize+header.a_drsize,
	      1);
	fread(&i, sizeof(i), 1, fp);
	fseek(fp, i - sizeof(i), 1);
#endif

#ifdef SYSTYPE_SVR4
       SEEK_TO_END_OFILE(fp);
#else	
#ifdef ATT
#ifdef mips
	fseek(fp, fileheader.f_symptr, SEEK_SET);
	fread(&symhdr, cbHDRR, 1, fp);
	fseek(fp, symhdr.cbExtOffset + symhdr.iextMax * cbEXTR, SEEK_SET);
#else
	fseek(fp,
	      fileheader.f_symptr + SYMESZ*fileheader.f_nsyms,
	      0);
	fread(&i, sizeof(i), 1, fp);
	fseek(fp, i - sizeof(i), 1);
	while ((i = getc(fp)) == 0)
		;
	ungetc(i, fp);
#endif /* mips */
#endif
#endif

	data = read_fasl_vector(faslfile);
	vs_push(data);
	close_stream(faslfile);

	sprintf(tempfilename, "/tmp/fasltemp%d", getpid());

AGAIN:

#ifdef BSD
	sprintf(command,
		"ld -d -N -x -A %s -T %x %s -o %s",
		kcl_self,
		memory->cfd.cfd_start,
		filename,
		tempfilename);
#endif
#ifdef ATT
#ifdef mips
	sprintf(command,
		"ld -s -A %s -N -T %x %s -o %s",
		kcl_self,
		(long)memory->cfd.cfd_start+SCNROUND-1&~(SCNROUND-1),
		filename,
		tempfilename);
#else
	coerce_to_filename(symbol_value(sSAsystem_directoryA),
			   system_directory);
	sprintf(command,
		"%sild %s %d %s %s",
		system_directory,
		kcl_self,
		memory->cfd.cfd_start,
		filename,
		tempfilename);
#endif /* mips */
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

#ifdef BSD
	fread(&newheader, sizeof(header), 1, fp);
	if (newbsssize != bsssize) {
		insert_contblock(memory->cfd.cfd_start, memory->cfd.cfd_size);
		bsssize = newbsssize;
		memory->cfd.cfd_start = NULL;
		memory->cfd.cfd_size = textsize + datasize + bsssize;
		memory->cfd.cfd_start = alloc_contblock(memory->cfd.cfd_size);
		close_stream(tempfile, TRUE);
		unlink(tempfilename);
		goto AGAIN;
	}
#endif
#ifdef mips
	fseek(fp, FILHSZ, SEEK_CUR);
	fread(&newaouthdr, AOUTHSZ, 1, fp);
	if (newdatasize + newbsssize > datasize + bsssize) {
		insert_contblock(memory->cfd.cfd_start, memory->cfd.cfd_size);
		datasize = newdatasize;
		bsssize = newbsssize;
		memory->cfd.cfd_start = NULL;
		memory->cfd.cfd_size = textsize + datasize + bsssize + MIPS_ROUND;
		memory->cfd.cfd_start = alloc_contblock(memory->cfd.cfd_size);
		close_stream(tempfile);
		unlink(tempfilename);
		goto AGAIN;
	}
	fread(&sectionheader, sizeof sectionheader, 1, fp);
#endif
	if (fseek(fp, textstart, 0) < 0)
		error("file seek error");
#ifdef mips
	printf("start address -T %x ",memory->cfd.cfd_start);
	bzero(memory->cfd.cfd_start, MIPS_ROUND);
	fread((void *)sectionheader.s_vaddr, textsize + datasize, 1, fp);
#else
	fread(memory->cfd.cfd_start, textsize + datasize, 1, fp);
#endif
	close_stream(tempfile);

	unlink(tempfilename);

	call_init(0,memory,data,0);

	vs_base = old_vs_base;
	vs_top = old_vs_top;

	return(memory->cfd.cfd_size);
}

#if defined BSD || defined mips

int
faslink(faslfile, ldargstring)
object faslfile, ldargstring;
{
#ifdef mips
	struct filehdr faslheader;
	struct aouthdr aouthdr;
	struct scnhdr sectionheader;
	HDRR symhdr;
#define ldcmdfmt	"ld -s -A %s -N -T %x %s %s -o %s"
#else
	struct exec header, faslheader;
#define	textsize	header.a_text
#define	datasize	header.a_data
#define	bsssize		header.a_bss
#define	textstart	sizeof(header)
#define ldcmdfmt	"ld -d -N -x -A %s -T %x %s %s -o %s"
#endif

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
#ifdef IBMRT

#endif

	coerce_to_filename(ldargstring, ldargstr);
	coerce_to_filename(faslfile, filename);

	sprintf(tempfilename, "/tmp/fasltemp%d", getpid());

	sprintf(command,
		ldcmdfmt,
		kcl_self,
		(int)core_end,
		filename,
		ldargstr,
		tempfilename);

	if (system(command) != 0)
		FEerror("The linkage editor failed.", 0);

	fp = fopen(tempfilename, "r");
	setbuf(fp, buf);
#ifdef mips
	fseek(fp, FILHSZ, SEEK_CUR);
	fread(&aouthdr, AOUTHSZ, 1, fp);
#else
	fread(&header, sizeof(header), 1, fp);
#endif
	memory = alloc_object(t_cfdata);
	memory->cfd.cfd_self = NULL;
	memory->cfd.cfd_start = NULL;
	memory->cfd.cfd_size = textsize + datasize + bsssize;
#ifdef mips
	memory->cfd.cfd_size += MIPS_ROUND;
#endif
	vs_push(memory);
	memory->cfd.cfd_start = alloc_contblock(memory->cfd.cfd_size);
	fclose(fp);

	faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
	vs_push(faslfile);
	fp = faslfile->sm.sm_fp;
	fread(&faslheader, sizeof(faslheader), 1, fp);
#ifdef mips
	fseek(fp, AOUTHSZ, SEEK_CUR);
	fread(&sectionheader, SCNHSZ, 1, fp);
	fseek(fp, faslheader.f_symptr, SEEK_SET);
	fread(&symhdr, cbHDRR, 1, fp);
	fseek(fp, symhdr.cbExtOffset + symhdr.iextMax * cbEXTR, SEEK_SET);
#else
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

	sprintf(command,
		ldcmdfmt,
		kcl_self,
#ifdef mips
		(long)memory->cfd.cfd_start+SCNROUND-1&~(SCNROUND-1),
#else
		memory->cfd.cfd_start,
#endif
		filename,
		ldargstr,
		tempfilename);

	if (system(command) != 0)
		FEerror("The linkage editor failed.", 0);

	tempfile = make_simple_string(tempfilename);
	vs_push(tempfile);
	tempfile = open_stream(tempfile, smm_input, Cnil, sKerror);
	vs_push(tempfile);
	fp = tempfile->sm.sm_fp;

#ifdef mips
	fseek(fp, FILHSZ, SEEK_CUR);
	fread(&aouthdr, AOUTHSZ, 1, fp);
	fread(&sectionheader, sizeof sectionheader, 1, fp);
#endif

	if (fseek(fp, textstart, 0) < 0)
		error("file seek error");
#ifdef mips
	printf("start address -T %x ",memory->cfd.cfd_start);
	bzero(memory->cfd.cfd_start, MIPS_ROUND);
	fread((void *)sectionheader.s_vaddr, textsize + datasize, 1, fp);
#else
	fread(memory->cfd.cfd_start, textsize + datasize, 1, fp);
#endif
	close_stream(tempfile);

	unlink(tempfilename);

	call_init(0,memory,data,0);

	vs_base = old_vs_base;
	vs_top = old_vs_top;

	return(memory->cfd.cfd_size);
}

siLfaslink()
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

#define FASLINK
