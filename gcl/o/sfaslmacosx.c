/*

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

/* Kinda primitive and temporary support for fasloading on Mac OS X
   Aurelien Chanudet (aurelienDOTchanudetATm4xDOTorg) */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <time.h>

#include <mach/mach.h>
#include <mach-o/loader.h>
#include <mach-o/dyld.h>
#include <mach-o/nlist.h>

#include "ptable.h"

static void sfasl_error (char *format, ...)
{
    va_list ap;
    
    va_start (ap, format);
    fprintf (stderr, "fasload: ");
    vfprintf (stderr, format, ap);
    fprintf (stderr, "\n");
    va_end (ap);
    exit (1);
}

/* TODO : update to reflect the improvements of Mach-O */

int seek_to_end_ofile (FILE *fp)
{
    struct mach_header mach_header;
    char *hdrbuf;
    struct load_command *load_command;
    struct segment_command *segment_command;
    struct section *section;
    struct symtab_command *symtab_command;
    struct symseg_command *symseg_command;
    int len, cmd, seg;
    int end_sec, end_ofile;
    
  #ifdef DEBUG
    fprintf(stderr,"seeking to end of Mach-O file\n");
  #endif
    
    end_ofile = 0;
    fseek(fp, 0L, 0);
    len = fread((char *)&mach_header, sizeof(struct mach_header), 1, fp);
    if (len == 1 && mach_header.magic == MH_MAGIC) {
     /* hdrbuf = (char *)malloc(mach_header.sizeofcmds); */
        hdrbuf = (char *)alloca(mach_header.sizeofcmds);
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
     /* free(hdrbuf); */
	fseek(fp, end_ofile, 0);
	return 1;
    }
    return 0;
}

void get_init_name (object faslfile, char *init_fun)
{
    object path = coerce_to_pathname (faslfile);
    char *p;
  
    strcpy (init_fun,"init_");
    coerce_to_filename (path->pn.pn_name,init_fun+5);
  
    p = init_fun +5;
  
    while(*p) {
        if (*p == '-') *p = '_';
        p++;
    }
}

typedef int (*func) ();

func prepare_bundle (object faslfile, char *filename)
{
    NSObjectFileImage image;
    NSModule module;
    NSSymbol nssym;
    int (*fptr) ();
    
    unsigned long i, n, image_count;
    unsigned long vmaddr_slide;
    struct mach_header *header;
    unsigned long vmsize = 0;
    struct load_command *lc;
    
    extern void mark_region (unsigned long address, unsigned long size);
    
    if (NSCreateObjectFileImageFromFile (filename , &image) != NSObjectFileImageSuccess) {
        sfasl_error ("cannot create object file image\n");
    }
    
    if (!(module = NSLinkModule (image, filename, NSLINKMODULE_OPTION_RETURN_ON_ERROR))) {
        sfasl_error ("cannot link bundle\n");
    }
    
    if (!(nssym = NSLookupSymbolInModule (module, "_init_code")))
    {
        char init_fun [201];
        
        init_fun[0] = '_';
        get_init_name (faslfile, &init_fun[1]);
        
        if (!(nssym = NSLookupSymbolInModule (module, init_fun))) {
            sfasl_error ("cannot retrieve entry point symbol in bundle\n");
        }
    }
    
    if (!(fptr = (int (*) ()) NSAddressOfSymbol(nssym))) {
        sfasl_error ("cannot retrieve entry point address\n");
    }
    
    if (!_dyld_present ()) {
        sfasl_error ("how can _dyld_present return false at this point !?\n");
    }
    
    image_count = _dyld_image_count ();
    
    for (n=0 ; n < image_count ; n++) {
        if (strstr (filename, _dyld_get_image_name (n)))
        {
            vmaddr_slide = _dyld_get_image_vmaddr_slide (n);
            header = _dyld_get_image_header (n);
            
            lc = (struct load_command *) (header + 1);
            
            for (i=0 ; i < header->ncmds ; i++) {
                if (lc->cmd == LC_SEGMENT) {
                    vmsize += ((struct segment_command *) lc)->vmsize;
                }
                lc = (struct load_command *) ((char *) lc + lc->cmdsize);
            }
            
            break;
        }
    }
    
    mark_region (vmaddr_slide, vmsize);
    
    return (fptr);
}

int fasload (object faslfile)
{
    object faslstream;
    object memory;
    object data;
    
    int (*fptr) ();
    
    char filename [MAXPATHLEN];
    char tmpfile [MAXPATHLEN];
    
    char cmd [256];
    
    coerce_to_filename (truename (faslfile), filename);
    
    snprintf (tmpfile, sizeof(tmpfile), "/tmp/fasload%lx.so", time(0));

    mkstemp (tmpfile);
    symlink (filename, tmpfile);
    
    faslstream = open_stream (faslfile, smm_input, Cnil, sKerror);
    
    /* we could do a -flat_namespace build */
    snprintf (cmd, sizeof(cmd),
        "gcc -bind_at_load -bundle -bundle_loader %s %s -o %s", kcl_self, filename, tmpfile);
    
    if (system (cmd) != 0) {
        sfasl_error ("cannot execute command: `%s'\n", cmd);
    }
    
    fptr = prepare_bundle (faslfile, tmpfile);
    
    seek_to_end_ofile (faslstream->sm.sm_fp);
    data = read_fasl_vector(faslstream);
    
    memory = alloc_object(t_cfdata);
    memory->cfd.cfd_self = NULL;
    memory->cfd.cfd_start = NULL;
    memory->cfd.cfd_size = 0;
    
    if (symbol_value (sLAload_verboseA) != Cnil)	
        printf (" start address (dynamic) %p ",fptr);
    
    call_init (0, memory, data, fptr);
    
    unlink (tmpfile);
    
    return memory->cfd.cfd_size;
}

void unlink_loaded_files () {

}

#include "sfasli.c"
