/*
 Copyright (C) 1994 W. Schelter

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

/* for testing in standalone manner define STAND
 You may then compile this file cc -g -DSTAND -DDEBUG -I../hn
 a.out /tmp/foo.o /public/gcl/unixport/saved_kcl /public/gcl/unixport/
 will write a /tmp/sfasltest file
 which you can use comp to compare with one produced by ld.
 */

#if defined(SPECIAL_RSYM) || !defined(HAVE_LIBBFD)
#error Cannot use bfd fasloading with SPECIAL_RSYM/without HAVE_LIBBFD  defined
#endif

#ifdef HAVE_LIBBFD
#ifdef NEED_CONST
#define CONST const
#endif
#define IN_GCC
#include <bfd.h>
#include <bfdlink.h>
#endif


#include "ext_sym.h"
#include "gclincl.h"
#include <string.h>



/* align for power of two n */
static void *
round_up(void *address, unsigned long n)
{
 return  (void *)(((unsigned long)address + n -1) & ~(n-1)) ;
}
#define ROUND_UP(a,b) round_up(a,b) 


static MY_BFD_BOOLEAN
madd_archive_element (struct bfd_link_info * link_info,
		       bfd *abfd,
		       const char *name) {

return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
mmultiple_definition (struct bfd_link_info * link_info,
		      const char *name,
		      bfd *obfd,
		      asection *osec,
		      bfd_vma oval,
		      bfd *nbfd,
		      asection *nsec,
		      bfd_vma nval) {

return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
mmultiple_common (struct bfd_link_info * link_info,
		  const char *name,
		  bfd *obfd,
		  enum bfd_link_hash_type otype,
		  bfd_vma osize,
		  bfd *nbfd,
		  enum bfd_link_hash_type ntype,
		  bfd_vma nsize) {

return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
madd_to_set (struct bfd_link_info * link_info,
	     struct bfd_link_hash_entry *entry,
	     bfd_reloc_code_real_type reloc,
	     bfd *abfd, asection *sec, bfd_vma value) {

return MY_BFD_FALSE;

}

static  MY_BFD_BOOLEAN 
mconstructor (struct bfd_link_info * link_info,MY_BFD_BOOLEAN constructor,
	      const char *name, bfd *abfd, asection *sec,
	      bfd_vma value) {

return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
mwarning (struct bfd_link_info * link_info,
	  const char *warning, const char *symbol,
	  bfd *abfd, asection *section,
	  bfd_vma address) {

return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
mundefined_symbol (struct bfd_link_info * link_info,
		   const char *name, bfd *abfd,
		   asection *section,
		   bfd_vma address,
		   MY_BFD_BOOLEAN fatal) {

  printf("%s is undefined\n",name);
  return MY_BFD_FALSE;
}

static MY_BFD_BOOLEAN
mreloc_overflow (struct bfd_link_info * link_info,
		 const char *name,
		 const char *reloc_name, bfd_vma addend,
		 bfd *abfd, asection *section,
		 bfd_vma address) {

  printf("reloc for %s is overflowing\n",name);
  return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
mreloc_dangerous (struct bfd_link_info * link_info,
		  const char *message,
		  bfd *abfd, asection *section,
		  bfd_vma address) {

  printf("reloc is dangerous %s\n",message);
  return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
munattached_reloc (struct bfd_link_info * link_info,
		   const char *name,
		   bfd *abfd, asection *section,
		   bfd_vma address) {

return MY_BFD_FALSE;

}

static MY_BFD_BOOLEAN
mnotice (struct bfd_link_info * link_info, const char *name,
	 bfd *abfd, asection *section, bfd_vma address) {

return MY_BFD_FALSE;

}

static bfd *bself;


int
fasload(object faslfile) {

  object data;
  char filename[256];
  int init_address=-1;
  object memory;
  int max_align=0;
  void *current;
  unsigned long curr_size;
  object *old_vs_base=vs_base;
  object *old_vs_top=vs_top;
  static int nbfd;
  bfd *b;
  bfd_error_type myerr;
  unsigned u,v;
  asymbol **q;
  asection *s;
  void * the_start,*start_address,*m;
  static union lispunion dum;
  static struct bfd_link_callbacks link_callbacks;
  static struct bfd_link_order link_order;
  
  if (!nbfd) {

    nbfd=1;

    dum.sm.t=t_stream;
    dum.sm.sm_mode=smm_input;
    dum.sm.sm_object0=dum.sm.sm_object1=OBJNULL;

    link_callbacks.add_archive_element=madd_archive_element;
    link_callbacks.multiple_definition=mmultiple_definition;
    link_callbacks.multiple_common=mmultiple_common;
    link_callbacks.add_to_set=madd_to_set;
    link_callbacks.constructor=mconstructor;
    link_callbacks.warning=mwarning;
    link_callbacks.undefined_symbol=mundefined_symbol;
    link_callbacks.reloc_overflow=mreloc_overflow;
    link_callbacks.reloc_dangerous=mreloc_dangerous;
    link_callbacks.unattached_reloc=munattached_reloc;
    link_callbacks.notice=mnotice;
    link_info.callbacks=&link_callbacks;

    link_order.type=bfd_indirect_link_order;

  }
  
  coerce_to_filename(faslfile, filename);

  if (!(b=bfd_openr(filename,0)))
    FEerror("Cannot open bfd",0);
  if ((myerr=bfd_get_error()) && myerr!=3) 
    FEerror("Unknown bfd error code on openr",0);
  if (!bfd_check_format(b,bfd_object))
    FEerror("Unknown bfd format",0);
  if ((myerr=bfd_get_error()) && myerr!=3)
    FEerror("Unknown bfd error code on check_format",0);
  bfd_set_error(0);

  current=NULL;
  for (s=b->sections;s;s=s->next) {

    s->owner=b;
    s->output_section=(s->flags & SEC_ALLOC) ? s : b->sections;
    s->output_offset=0;

    if (!(s->flags & SEC_ALLOC))
      continue;

    if (max_align<s->alignment_power)
      max_align=s->alignment_power;

    current=round_up(current,1<<s->alignment_power);

    current+=s->_raw_size;

  }
  curr_size=(unsigned long)current;
  max_align=1<<max_align;

  memory = alloc_object(t_cfdata);
  memory->cfd.cfd_self = 0;
  memory->cfd.cfd_start = 0;
  memory->cfd.cfd_size = curr_size + (max_align > sizeof(char *) ? max_align :0);
  
  memory->cfd.cfd_start=alloc_contblock(memory->cfd.cfd_size);
  the_start=start_address=memory->cfd.cfd_start;
  
  start_address = ROUND_UP(start_address,max_align);
  memory->cfd.cfd_size = memory->cfd.cfd_size - (start_address - the_start);
  memory->cfd.cfd_start = (void *)start_address;	

  for (m=start_address,s=b->sections;s;s=s->next) {

    if (!(s->flags & SEC_ALLOC))
      continue;

    m=round_up(m,1<<s->alignment_power);
    s->output_section->vma=(unsigned long)m;
    m+=s->_raw_size;
	     
  }

  if ((u=bfd_get_symtab_upper_bound(b))<0)
    FEerror("Cannot get symtab uppoer bound",0);
  q=(asymbol **)alloca(u);
  if ((v=bfd_canonicalize_symtab(b,q))<0)
    FEerror("cannot canonicalize symtab",0);
  for (u=0;u<v;u++) {

    struct bfd_link_hash_entry *h;

    if (!strncmp("init_",q[u]->name,5)) {
      init_address=q[u]->value;
      continue;
    }

    if (!(h=bfd_link_hash_lookup(link_info.hash,q[u]->name,MY_BFD_FALSE,MY_BFD_FALSE,MY_BFD_TRUE))) 
      continue;

    if (h->type!=bfd_link_hash_defined) 
      FEerror("Undefined symbol ~S",1,make_simple_string(q[u]->name));
      
    if (h->u.def.section) {
      q[u]->value=h->u.def.value+h->u.def.section->vma;
      q[u]->flags|=BSF_WEAK;
    } else 
      FEerror("Symbol without section",0);

  }

#ifndef HAVE_ALLOCA
#error Cannot use bfd relocations without alloca at present
#endif
  /* We have to do this  to avoid the possibility that 
     bfd_get_relocated_section_contents will run GBC via its alloc, thereby 
     write protecting the pages of memory->cfd again and causing bfd reads of 
     the section contents to return an error code after a 'stratified' segfault */
 {
   void *v=alloca(memory->cfd.cfd_size);
   
   if (!v)
     FEerror("Cannot alloca for bfd",0);

   for (s=b->sections;s;s=s->next) {
     
     if (!(s->flags & SEC_LOAD))
       continue;
     
     link_order.u.indirect.section=s;
     
     if (!bfd_get_relocated_section_contents(b,&link_info,&link_order,
					     v,0,q)) 
       FEerror("Cannot get relocated section contents\n",0);

     memcpy((void *)(unsigned long)s->output_section->vma,v,s->_raw_size);
     
   }
 }
   
  dum.sm.sm_fp=b->iostream;

  /* Find a way of doing this in bfd -- use this for now.  Unfortunately, 
     we're not always at file end after reading in the sections -- CM */
  SEEK_TO_END_OFILE(dum.sm.sm_fp);

  if (feof(dum.sm.sm_fp))
    data=0;
  else
    data = read_fasl_vector(&dum);
  
  bfd_close(b);

#ifdef CLEAR_CACHE
  CLEAR_CACHE;
#endif
  
  call_init(init_address,memory,data,0);
  
  vs_base=old_vs_base;
  vs_top=old_vs_top;
  
  if(symbol_value(sLAload_verboseA)!=Cnil)
    printf("start address -T %p ",memory->cfd.cfd_start);

  return memory->cfd.cfd_size;

 }

#include "sfasli.c"

