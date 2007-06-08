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


#include <string.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <sys/param.h>
#include <time.h>
#ifdef HAVE_AOUT
#include HAVE_AOUT
#endif
#if defined(HAVE_ELF_H)
#include <elf.h>
#elif defined(HAVE_ELF_ABI_H)
#include <elf_abi.h>
#endif

#include "ptable.h"

struct name_list { 
  struct name_list *next;
  char name[1];
};
static struct name_list *loaded_files;

int
fasload(object faslfile) {

  void *dlp ;
  int (*fptr)();
  char buf[MAXPATHLEN],b[MAXPATHLEN],filename[MAXPATHLEN];
  static int count;
  object memory,data,faslstream;
  struct name_list *nl;
  object x;

  bzero(buf,sizeof(buf)); /*GC partial stack hole closing*/
  bzero(b,sizeof(b));
  bzero(filename,sizeof(filename));

  /* this is just to allow reloading in the same file twice.
   */
  coerce_to_filename(truename(faslfile), filename);
  if (!count)
    count=time(0);
  ASSERT(snprintf(buf,sizeof(buf),"/tmp/ufas%dxXXXXXX",count++)>0);
  ASSERT(mkstemp(buf)>=0);

  ASSERT((nl=(void *) malloc(strlen(buf)+1+sizeof(nl))));
  nl->next = loaded_files;
  loaded_files = nl;
  strcpy(nl->name,buf);

  ASSERT(snprintf(b,sizeof(b),"cc -shared %s -o %s",filename,buf)>0);
  ASSERT(!system(b));

  if (!(dlp = dlopen(buf,RTLD_NOW))) {
    fputs(dlerror(),stderr);
    FEerror("Cannot open for dynamic link ~a",1,make_simple_string(faslfile));
  }
  
  x=find_init_name1(buf,0);
  ASSERT(x->st.st_fillp+1<sizeof(b));
  memcpy(b,x->st.st_self,x->st.st_fillp);
  b[x->st.st_fillp]=0;
  if (!(fptr=dlsym(dlp,b))) {
    fputs(dlerror(),stderr);
    FEerror("Cannot lookup ~a in ~a",2,make_simple_string(b),make_simple_string(faslfile));
  }

  faslstream = open_stream(faslfile, smm_input, Cnil, sKerror);
  SEEK_TO_END_OFILE(faslstream->sm.sm_fp);

  data = read_fasl_vector(faslstream);
  memory = alloc_object(t_cfdata);
  memory->cfd.cfd_self = NULL;
  memory->cfd.cfd_start = NULL;
  memory->cfd.cfd_size = 0;
  memory->cfd.cfd_dlist = Cnil;

  if(symbol_value(sLAload_verboseA)!=Cnil)	
    printf(" ;; start address (dynamic) %p ",fptr);

  call_init(0,memory,data,fptr);

  unlink(buf);
  close_stream(faslstream);

  return memory->cfd.cfd_size;

}

void
unlink_loaded_files(void) { 

  while(loaded_files) { 
    unlink(loaded_files->name);
    loaded_files= loaded_files->next;
  }

}
  
#include "sfasli.c"
