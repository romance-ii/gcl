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

#include "ptable.h"

typedef int (*func) ();

/* Externalize the command line used to build loadable object files (a.k.a. bundles).  */
object sSAmacosx_ldcmdA = 0L;

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

/* static void get_init_name (object faslfile, char *init_fun) */
/* { */
/*     object path = coerce_to_pathname (faslfile); */
/*     char *p; */
  
/*     strcpy (init_fun, "_init_"); */
/*     coerce_to_filename (path->pn.pn_name, init_fun + 6); */
  
/*     for (p = init_fun + 6 ; *p ; p++) */
/*       if (*p == '-') *p = '_'; */
/* } */

static NSSymbol
get_init_sym(NSModule module,object ff) {

  static object inf;
  struct string st;
  object x;
  char ib[MAXPATHLEN+1];
  NSSymbol v;

  if (!inf) {

    object x;
    struct string st;
    st.t=t_string;
    st.st_self="COMPILER";
    st.st_dim=st.st_fillp=strlen(st.st_self);
    if ((x=find_package((object)&st))==Cnil)
      sfasl_error("Cannot find compiler package\n");
    st.st_self="INIT-NAME";
    st.st_dim=st.st_fillp=strlen(st.st_self);
    if ((inf=find_symbol((object)&st,x))==Cnil) {
      inf=NULL;
      sfasl_error("Cannot find function COMPILER::INIT-NAME\n");
    }
    
  }

  st.t=t_string;
  st.st_self=ff->st.st_self;
  st.st_dim=st.st_fillp=ff->st.st_dim;
  x=ifuncall1(inf,(object)&st);
  if (x->d.t!=t_string)
    sfasl_error("INIT-NAME error\n");
  assert(snprintf(ib,sizeof(ib),"_init_%-.*s",x->st.st_dim,x->st.st_self)>0);

  if (!(v=NSLookupSymbolInModule(module, ib))) {
    x=ifuncall2(inf,(object)&st,Ct);
    if (x->d.t!=t_string)
      sfasl_error("INIT-NAME error\n");
    assert(snprintf(ib,sizeof(ib),"_init_%-.*s",x->st.st_dim,x->st.st_self)>0);
    if (!(v=NSLookupSymbolInModule(module, ib)))
      sfasl_error("Cannot lookup init-name\n");
  }

  return v;

}

static func prepare_bundle (object faslfile, char *filename)
{
    NSObjectFileImage image;
    NSModule module;
    NSSymbol nssym;
    int (*fptr) ();
    
    unsigned long n;
    unsigned long vmsize = 0;
    unsigned long vmaddr_slide = 0;
    unsigned long base_addr = (unsigned long) -1;
    
    extern void mark_region (unsigned long address, unsigned long size);
    
    if (NSCreateObjectFileImageFromFile (filename , &image) != NSObjectFileImageSuccess) {
        sfasl_error ("cannot create object file image\n");
    }
    
    if (!(module = NSLinkModule (image, filename, NSLINKMODULE_OPTION_RETURN_ON_ERROR |
				 NSLINKMODULE_OPTION_PRIVATE | NSLINKMODULE_OPTION_BINDNOW))) {
        sfasl_error ("cannot link bundle\n");
    }
    
    nssym=get_init_sym(module,faslfile);
/*     if (!(nssym = NSLookupSymbolInModule (module, "_init_code"))) */
/*     { */
/*         char init_fun [256]; */
        
/*         get_init_name (faslfile, init_fun); */
        
/*         if (!(nssym = NSLookupSymbolInModule (module, init_fun))) { */
/*             sfasl_error ("cannot retrieve entry point symbol in bundle\n"); */
/*         } */
/*     } */
    
    if (!(fptr = (int (*) ()) NSAddressOfSymbol (nssym))) {
        sfasl_error ("cannot retrieve entry point address\n");
    }
    
    for (n = _dyld_image_count () ; --n != (unsigned long) -1 ; )
    {
        if (strstr (filename, _dyld_get_image_name (n)))
        {
            struct mach_header *mh = _dyld_get_image_header (n);
            struct load_command *lc = (struct load_command *) (mh+1);
            unsigned long i;
	    
            vmsize = 0;
	    
            for (i=0 ; i < mh->ncmds ; i++) {
                if (lc->cmd == LC_SEGMENT) {
                    if (base_addr == (unsigned long) -1) {
                        base_addr = ((struct segment_command *) lc)->vmaddr;
                    }
                vmsize += ((struct segment_command *) lc)->vmsize;
                }
                lc = (struct load_command *) ((char *) lc + lc->cmdsize);
            }
	    
            vmaddr_slide = _dyld_get_image_vmaddr_slide (n);
	    
            break;
        }
    }
    
    if (base_addr != (unsigned long) -1) {
        mark_region (vmaddr_slide - base_addr, vmsize);
    } else {
        sfasl_error ("could not retrieve newly created bundle image\n");
    }

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
    
    static int count = 0;
    
    static char ldfmt [] = "gcc -bind_at_load -bundle -bundle_loader %s -o %s %s";

    char fmt [MAXPATHLEN];
    
    extern int seek_to_end_ofile (FILE *);
    
    if (count == 0) {
     /* DEFVAR ("*MACOSX-LDCMD*",sSAmacosx_ldcmdA,LISP,make_simple_string(ldfmt),""); */
        sSAmacosx_ldcmdA = make_special ("*MACOSX-LDCMD*", make_simple_string (ldfmt));
        count = time (0);
    }
    
    coerce_to_filename (truename (faslfile), filename);
    
    snprintf (tmpfile, sizeof (tmpfile), "/tmp/ufas%dx.so", count++);

    mkstemp (tmpfile);
    symlink (filename, tmpfile);
    
    faslstream = open_stream (faslfile, smm_input, Cnil, sKerror);
    
    /* I guess the program will crash if a dumped image is ever dynamically relinked against
       a version of a shared library different from the one used at the time the bundle got
       loaded (if the bundle makes reference to this shared library).  To avoid this, we
       would need all external bundle calls to be indirected through the loader image stubs. */

    coerce_to_filename (symbol_value (sSAmacosx_ldcmdA), fmt);
    
    snprintf (cmd, sizeof(cmd), fmt, kcl_self, tmpfile, filename);
    
    if (system (cmd) != 0) {
        sfasl_error ("cannot execute command `%s'\n", cmd);
    }
    
    fptr = prepare_bundle (faslfile, tmpfile);
    
    if (seek_to_end_ofile (faslstream->sm.sm_fp) != 1) {
        sfasl_error ("error seeking to end of object file");
    }

    data = read_fasl_vector (faslstream);
    
    close_stream (faslstream);
    
    memory = alloc_object (t_cfdata);
    memory->cfd.cfd_self = NULL;
    memory->cfd.cfd_start = NULL;
    memory->cfd.cfd_size = 0;
    
    if (symbol_value (sLAload_verboseA) != Cnil)	
        printf (" start address (dynamic) %p ", fptr);
    
    call_init (0, memory, data, fptr);
    
    unlink (tmpfile);
    
    return memory->cfd.cfd_size;
}

void unlink_loaded_files () {

}

#include "sfasli.c"
