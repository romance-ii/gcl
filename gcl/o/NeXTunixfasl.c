/*
 * FASL loader using rld() for NeXT
 *
 * Written by Noritake YONEZAWA (yonezawa@lsi.tmg.nec.co.jp)
 * February 14, 1992
 * 
 * Modified by Noritake YONEZAWA (yonezawa@lsi.tmg.nec.co.jp)
 * May 1, 1995
 * June 5, 1995
 * June 6, 1995
 */

#include <mach/mach.h>
#include <mach-o/loader.h>
#include <mach-o/rld.h>

#include <ar.h>
#include <nlist.h>
#include <sys/types.h>
#include <sys/file.h>
#include <strings.h>

static unsigned long object_size, object_start;

static unsigned long
my_address_func(size, headers_size)
    unsigned long       size;
    unsigned long	headers_size;
{
    return (object_start =
	    (unsigned long)alloc_contblock(object_size = size + headers_size));
}

static void
load_mach_o(filename)
    char               *filename;
{
    FILE               *fp;
    struct mach_header  header;
    char               *hdrbuf;
    struct load_command *load_command;
    struct segment_command *segment_command;
    struct section     *section;
    int                 len, cmd, seg;

    if ((fp = fopen(filename, "r")) == NULL)
	FEerror("Can't read Mach-O object file", 0);
    len = fread((char *)&header, sizeof(struct mach_header), 1, fp);
    if (len == 1 && header.magic == MH_MAGIC) {
	hdrbuf = (char *)malloc(header.sizeofcmds);
	len = fread(hdrbuf, header.sizeofcmds, 1, fp);
	if (len != 1)
	    FEerror("failure reading Mach-O load commands", 0);
	load_command = (struct load_command *) hdrbuf;
	for (cmd = 0; cmd < header.ncmds; ++cmd) {
	    if (load_command->cmd == LC_SEGMENT) {
		segment_command = (struct segment_command *) load_command;
		section = (struct section *) ((char *)(segment_command + 1));
		for (seg = 0; seg < segment_command->nsects; ++seg, ++section) {
		    if (section->size != 0 && section->offset != 0) {
#ifdef DEBUG
			fprintf(stderr, "section: %s, addr: 0x%08x, size: %d\n",
			   section->sectname, section->addr, section->size);
			fflush(stderr);
#endif
			fseek(fp, section->offset, 0);
			fread((char *)section->addr, section->size, 1, fp);
		    }
		}
	    }
	    load_command = (struct load_command *)
	      ((char *)load_command + load_command->cmdsize);
	}
	free(hdrbuf);
    }
    (void)fclose(fp);
}

int
seek_to_end_ofile(fp)
    FILE               *fp;
{
    struct mach_header  mach_header;
    char               *hdrbuf;
    struct load_command *load_command;
    struct segment_command *segment_command;
    struct section     *section;
    struct symtab_command *symtab_command;
    struct symseg_command *symseg_command;
    int                 len, cmd, seg;
    int                 end_sec, end_ofile;

    end_ofile = 0;
    fseek(fp, 0L, 0);
    len = fread((char *)&mach_header, sizeof(struct mach_header), 1, fp);
    if (len == 1 && mach_header.magic == MH_MAGIC) {
	hdrbuf = (char *)malloc(mach_header.sizeofcmds);
	len = fread(hdrbuf, mach_header.sizeofcmds, 1, fp);
	if (len != 1) {
	    fprintf(stderr, "seek_to_end_ofile(): failure reading Mach-O load commands\n");
	    return 0;
	}
	load_command = (struct load_command *) hdrbuf;
	for (cmd = 0; cmd < mach_header.ncmds; ++cmd) {
	    switch (load_command->cmd) {
	    case LC_SEGMENT:
		segment_command = (struct segment_command *) load_command;
		section = (struct section *) ((char *)(segment_command + 1));
		for (seg = 0; seg < segment_command->nsects; ++seg, ++section) {
		    end_sec = section->offset + section->size;
		    if (end_sec > end_ofile)
			end_ofile = end_sec;
		}
		break;
	    case LC_SYMTAB:
		symtab_command = (struct symtab_command *) load_command;
		end_sec = symtab_command->symoff + symtab_command->nsyms * sizeof(struct nlist);
		if (end_sec > end_ofile)
		    end_ofile = end_sec;
		end_sec = symtab_command->stroff + symtab_command->strsize;
		if (end_sec > end_ofile)
		    end_ofile = end_sec;
		break;
	    case LC_SYMSEG:
		symseg_command = (struct symseg_command *) load_command;
		end_sec = symseg_command->offset + symseg_command->size;
		if (end_sec > end_ofile)
		    end_ofile = end_sec;
		break;
	    }
	    load_command = (struct load_command *)
	      ((char *)load_command + load_command->cmdsize);
	}
	free(hdrbuf);
	fseek(fp, end_ofile, 0);
	return 1;
    }
    return 0;
}

static char        *library_search_path[] =
{"/lib", "/usr/lib", "/usr/local/lib", NULL};

#define strdup(string)	strcpy((char *)malloc(strlen(string)+1),(string))

static char        *
expand_library_filename(filename)
    char               *filename;
{
    int                 fd;
    char              **dir;
    char                libname[256];
    char                fullname[256];

    if (filename[0] == '-' && filename[1] == 'l') {
	filename++;
	filename++;
	strcpy(libname, "lib");
	strcat(libname, filename);
	strcat(libname, ".a");
	for (dir = library_search_path; *dir; dir++) {
	    strcpy(fullname, *dir);
	    strcat(fullname, "/");
	    strcat(fullname, libname);
#ifdef DEBUG
	    fprintf(stderr, "%s\n", fullname);
	    fflush(stderr);
#endif
	    if ((fd = open(fullname, O_RDONLY, 0)) > 0) {
		close(fd);
		return (strdup(fullname));
	    }
	}
	return (strdup(libname));
    }
    return (strdup(filename));
}

static char       **
make_ofile_list(faslfile, argstr)
    char               *faslfile, *argstr;
{
    char                filename[256];
    char               *dst;
    int                 i;
    char              **ofile_list;

    ofile_list = (char **)calloc(1, sizeof(char *));
    ofile_list[0] = strdup(faslfile);
    i = 1;
    if (argstr != NULL) {
	for (;; i++) {
	    while ((*argstr == ' ') && (*argstr != '\0'))
		argstr++;
	    if (*argstr == '\0')
		break;
	    dst = filename;
	    while ((*argstr != ' ') && (*argstr != '\0'))
		*dst++ = *argstr++;
	    *dst = '\0';
	    ofile_list = (char **)realloc((void *)ofile_list,
					  (i + 1) * sizeof(char *));
	    ofile_list[i] = expand_library_filename(filename);
	}
    }
    ofile_list = (char **)realloc((void *)ofile_list, (i + 1) * sizeof(char *));
    ofile_list[i] = NULL;
    return (ofile_list);
}

static void
free_ofile_list(ofile_list)
    char              **ofile_list;
{
    int                 i;

    for (i = 1;; i++) {
	if (ofile_list[i] == NULL)
	    break;
	(void)free(ofile_list[i]);
    }
    (void)free(ofile_list);
}

#ifdef DEBUG
static void
print_ofile_list(ofile_list)
    char              **ofile_list;
{
    int                 i;

    if (ofile_list == NULL)
	return;
    fprintf(stderr, "ofiles: ");
    for (i = 0;; i++) {
	if (ofile_list[i] == NULL)
	    break;
	fprintf(stderr, "(%s)", ofile_list[i]);
    }
    fprintf(stderr, "\n");
    fflush(stderr);
}

#endif

int
fasload(pathname)
    object              pathname;
{
    FILE               *fp;
    object             *old_vs_base = vs_base;
    object             *old_vs_top = vs_top;
    object              memory;
    object              fasl_data;
    object              stream;
    char                entryname[100];
    char                filename[256];
    char                tempfilename[40];
    char              **ofiles;
    NXStream           *err_stream;
    void                (*entry) ();
    struct mach_header *hdr;

    stream = open_stream(pathname, smm_input, Cnil, sKerror);
    fp = stream->sm.sm_fp;

    seek_to_end_ofile(fp);
    fasl_data = read_fasl_vector(stream);
    vs_push(fasl_data);

    pathname = coerce_to_pathname(stream);
    coerce_to_filename(stream, filename);

    if ((err_stream = NXOpenFile(fileno(stderr), NX_WRITEONLY)) == 0)
	FEerror("NXOpenFile() failed", 0);

    sprintf(tempfilename, "/tmp/fasltemp%d", getpid());
    rld_address_func(my_address_func);
    ofiles = make_ofile_list(filename, NULL);
#ifdef DEBUG
    print_ofile_list(ofiles);
#endif
    if (!rld_load(err_stream, &hdr, ofiles, tempfilename)) {
	free_ofile_list(ofiles);
	NXFlush(err_stream);
	NXClose(err_stream);
	FEerror("rld_load() failed", 0);
    }
    free_ofile_list(ofiles);
    load_mach_o(tempfilename);
    unlink(tempfilename);

    strcpy(entryname, "_init_code");
    if (!rld_lookup(err_stream, entryname, (unsigned long *)&entry)) {
	strcpy(entryname, "_init_");
	bcopy(pathname->pn.pn_name->st.st_self,
	      entryname + 6, pathname->pn.pn_name->st.st_fillp);
	entryname[6 + pathname->pn.pn_name->st.st_fillp] = 0;
	if (!rld_lookup(err_stream, entryname, (unsigned long *)&entry)) {
	    NXFlush(err_stream);
	    NXClose(err_stream);
	    FEerror("Can't find init code", 0);
	}
    }
    (void)rld_unload_all(err_stream, 0);
    NXFlush(err_stream);
    NXClose(err_stream);


#ifdef DEBUG
    {
	extern char        *mach_brkpt, *mach_maplimit, *core_end;

	fprintf(stderr, "mach_brkpt    : 0x%08x\n", mach_brkpt);
	fprintf(stderr, "mach_maplimit : 0x%08x\n", mach_maplimit);
	fprintf(stderr, "core_end      : 0x%08x\n", core_end);
	fprintf(stderr, "hdr           : 0x%08x\n", hdr);
	fprintf(stderr, "object_start  : 0x%08x\n", object_start);
	fprintf(stderr, "object_size   : %d\n", object_size);
	fprintf(stderr, "&%s   : 0x%08x\n", entryname, entry);
	fflush(stderr);
    }
#endif

    memory = alloc_object(t_cfdata);
    memory->cfd.cfd_self = 0;
    memory->cfd.cfd_fillp = 0;
    memory->cfd.cfd_size = object_size;
    memory->cfd.cfd_start = (char *)object_start;
    vs_push(memory);

#ifdef CLEAR_CACHE
    CLEAR_CACHE;
#endif
    call_init(entry - object_start, memory, fasl_data,0);

    if (symbol_value(sLAload_verboseA) != Cnil)
	printf("start address -T 0x%08x ", entry);

    vs_base = old_vs_base;
    vs_top = old_vs_top;
    close_stream(stream);
    return object_size;
}

int
faslink(pathname, ldargstring)
    object              pathname, ldargstring;
{
    FILE               *fp;
    object             *old_vs_base = vs_base;
    object             *old_vs_top = vs_top;
    object              memory;
    object              fasl_data;
    object              stream;
    char                entryname[100];
    char                filename[256];
    char                ldargstr[256];
    char                tempfilename[40];
    char              **ofiles;
    NXStream           *err_stream;
    void                (*entry) ();
    struct mach_header *hdr;

    stream = open_stream(pathname, smm_input, Cnil, sKerror);
    fp = stream->sm.sm_fp;

    seek_to_end_ofile(fp);
    fasl_data = read_fasl_vector(stream);
    vs_push(fasl_data);

    pathname = coerce_to_pathname(stream);
    coerce_to_filename(stream, filename);
    coerce_to_filename(ldargstring, ldargstr);

    if ((err_stream = NXOpenFile(fileno(stderr), NX_WRITEONLY)) == 0)
	FEerror("NXOpenFile() failed", 0);

    sprintf(tempfilename, "/tmp/fasltemp%d", getpid());
    rld_address_func(my_address_func);
    ofiles = make_ofile_list(filename, ldargstr);
#ifdef DEBUG
    print_ofile_list(ofiles);
#endif
    if (!rld_load(err_stream, &hdr, ofiles, tempfilename)) {
	free_ofile_list(ofiles);
	NXFlush(err_stream);
	NXClose(err_stream);
	FEerror("rld_load() failed", 0);
    }
    free_ofile_list(ofiles);
    load_mach_o(tempfilename);
    unlink(tempfilename);

    strcpy(entryname, "_init_code");
    if (!rld_lookup(err_stream, entryname, (unsigned long *)&entry)) {
	strcpy(entryname, "_init_");
	bcopy(pathname->pn.pn_name->st.st_self,
	      entryname + 6, pathname->pn.pn_name->st.st_fillp);
	entryname[6 + pathname->pn.pn_name->st.st_fillp] = 0;
	if (!rld_lookup(err_stream, entryname, (unsigned long *)&entry)) {
	    NXFlush(err_stream);
	    NXClose(err_stream);
	    FEerror("Can't find init code", 0);
	}
    }
    (void)rld_unload_all(err_stream, 0);
    NXFlush(err_stream);
    NXClose(err_stream);


#ifdef DEBUG
    {
	extern char        *mach_brkpt, *mach_maplimit, *core_end;

	fprintf(stderr, "mach_brkpt    : 0x%08x\n", mach_brkpt);
	fprintf(stderr, "mach_maplimit : 0x%08x\n", mach_maplimit);
	fprintf(stderr, "core_end      : 0x%08x\n", core_end);
	fprintf(stderr, "hdr           : 0x%08x\n", hdr);
	fprintf(stderr, "object_start  : 0x%08x\n", object_start);
	fprintf(stderr, "object_size   : %d\n", object_size);
	fprintf(stderr, "&%s   : 0x%08x\n", entryname, entry);
	fflush(stderr);
    }
#endif

    memory = alloc_object(t_cfdata);
    memory->cfd.cfd_self = 0;
    memory->cfd.cfd_fillp = 0;
    memory->cfd.cfd_size = object_size;
    memory->cfd.cfd_start = (char *)object_start;
    vs_push(memory);

#ifdef CLEAR_CACHE
    CLEAR_CACHE;
#endif
    call_init(entry - object_start, memory, fasl_data,0);

    if (symbol_value(sLAload_verboseA) != Cnil)
	printf("start address -T 0x%08x \n", entry);

    vs_base = old_vs_base;
    vs_top = old_vs_top;
    close_stream(stream);
    return object_size;
}

siLfaslink()
{
    bds_ptr             old_bds_top;
    int                 i;
    object              package;

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

#define FASLINK
