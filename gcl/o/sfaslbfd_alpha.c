/* This file has been modified from the file dldbfd.c in the lush
   source tree.  It is brought into GCL under the terms of the GNU
   General Public License, version 2 or, at the user's option, any
   later version.*/


/*  FIXME -- check that bfd_close frees all this.  Think or a way to
    avoid fragmenting malloc contblocks by redirecting allocations to
    some other space.  CM 20050409*/

/*  FIXME -- synchronize and centralize this with mips file.  CM 20050414*/

extern void *bfd_alloc(bfd *,bfd_size_type);

#define vmaptr(x) ((void*)(unsigned long)(x))
#define ptrvma(x) ((bfd_vma)(unsigned long)(x))

static void *
xballoc(bfd *abfd, size_t n)
{
    void *ans = (void*)bfd_alloc(abfd, n);
    if (!ans)
        FEerror("bfd error: ~S", 1 , bfd_errmsg(bfd_error_no_memory));
    return ans;
}


static asymbol *gpdisp = NULL;
static unsigned long gp;

extern unsigned long _bfd_set_gp_value(bfd *,unsigned long);

static void
check_gp(bfd *b) {

  if (!gp) {
    gp=gpdisp->section->output_section->vma+gpdisp->value;
    _bfd_set_gp_value(b,gp);
  }

}

static bfd_reloc_status_type
(*alphaelf_old_gpdisp_reloc)(bfd *, arelent *, asymbol *, PTR, asection *, bfd *, char **);

static bfd_reloc_status_type
alphaelf_new_gpdisp_reloc (bfd *abfd, 
			   arelent *reloc_entry,
			   asymbol *symbol,
			   PTR data,
			   asection *input_section,
			   bfd *output_bfd,
			   char **error_message) {

  check_gp(abfd);

  return alphaelf_old_gpdisp_reloc(abfd,reloc_entry,symbol,data,input_section,output_bfd,error_message);

}

static bfd_reloc_status_type
alphaelf_new_literal_reloc (bfd *abfd, 
                         arelent *reloc_entry,
                         asymbol *symbol,
                         PTR data,
                         asection *input_section,
                         bfd *output_bfd,
                         char **error_message) {

  int insn;
  bfd_byte *addr;

  addr = (bfd_byte*)(data) + reloc_entry->address;

  insn = bfd_get_32(abfd, addr);
  if (insn & 0x0000ffff)
    return bfd_reloc_notsupported;    

  if (reloc_entry->addend != (reloc_entry->addend & 0x7fff))
    return bfd_reloc_notsupported;        

  /* Plug GOT offset into low 16 bits of instruction */
  insn |= reloc_entry->addend;

  bfd_put_32(abfd, insn, addr);

  return bfd_reloc_ok;
}

static bfd_reloc_status_type
alphaelf_new_hi16_reloc (bfd *abfd, 
                         arelent *reloc_entry,
                         asymbol *symbol,
                         PTR data,
                         asection *input_section,
                         bfd *output_bfd,
                         char **error_message) {

  int loinsn, hiinsn;

  bfd_vma addr = ptrvma(data) + reloc_entry->address;
  bfd_vma value = symbol->section->vma + symbol->value + reloc_entry->addend;

  hiinsn = bfd_get_32(abfd, (bfd_byte*)vmaptr(addr));
  if ((hiinsn & 0xffff))
    return bfd_reloc_notsupported;

  check_gp(abfd);
  value = value - gp;

  loinsn = (value & 0xffff);
  value = (value>>16) + (loinsn&0x8000 ? 1 : 0); 

  hiinsn |= (value & 0xffff);

  bfd_put_32 (abfd, hiinsn, (bfd_byte*)vmaptr(addr));

  return bfd_reloc_ok;

}


static bfd_reloc_status_type
alphaelf_new_lo16_reloc (bfd *abfd, 
                         arelent *reloc_entry,
                         asymbol *symbol,
                         PTR data,
                         asection *input_section,
                         bfd *output_bfd,
                         char **error_message) {

  int insn;

  bfd_vma addr = ptrvma(data) + reloc_entry->address;
  bfd_vma value = symbol->section->vma + symbol->value + reloc_entry->addend;

  insn = bfd_get_32(abfd, (bfd_byte*)vmaptr(addr));
  if ((insn & 0xffff))
    return bfd_reloc_notsupported;

  check_gp(abfd);
  value = value - gp;

  insn |= (value & 0xffff);

  bfd_put_32 (abfd, insn, (bfd_byte*)vmaptr(addr));

  return bfd_reloc_ok;

}

static void
alphaelf_install_patches(bfd *abfd) {

  reloc_howto_type *howto;

  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_ALPHA_GPDISP);
  assert(howto);
  if (howto->special_function != alphaelf_new_gpdisp_reloc) {
    alphaelf_old_gpdisp_reloc=howto->special_function;
    assert(alphaelf_old_gpdisp_reloc);
    howto->special_function = alphaelf_new_gpdisp_reloc;
  }

  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_ALPHA_GPREL_HI16);
  assert(howto);
  if (howto->special_function != alphaelf_new_hi16_reloc)
      howto->special_function = alphaelf_new_hi16_reloc;

  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_ALPHA_GPREL_LO16);
  assert(howto);
  if (howto->special_function != alphaelf_new_lo16_reloc)
      howto->special_function = alphaelf_new_lo16_reloc;

  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_ALPHA_ELF_LITERAL);
  assert(howto);
  if (howto->special_function != alphaelf_new_literal_reloc)
      howto->special_function = alphaelf_new_literal_reloc;

}


/* alphaelf_got_info -- structure containing GOT information */
typedef struct alphaelf_got_info {
  int gotsize;
  asection *sgot;
  struct bfd_hash_table got_table;
  reloc_howto_type *reloc_literal;
  reloc_howto_type *reloc_64;       /* for relocs in got */
} alphaelf_got_info;


/* alphaelf_got_entry -- structure for GOT entries */
typedef struct alphaelf_got_entry {
  struct bfd_hash_entry root;
  arelent *reloc;
  bfd_vma offset;
  int index;
} alphaelf_got_entry;


/* alphaelf_init_got_entry -- initialize got hash table component */
static struct bfd_hash_entry *
alphaelf_init_got_entry(struct bfd_hash_entry *entry,
                       struct bfd_hash_table *table,
                       const char *string) {

  alphaelf_got_entry *ret = (alphaelf_got_entry*)entry;

  if (!ret) {
    ret = (alphaelf_got_entry*)
      bfd_hash_allocate(table, sizeof(alphaelf_got_entry));
    if (!ret)
      FEerror("bfd error:~S",1,bfd_errmsg(bfd_error_no_memory));
  }

  memset(ret, 0, sizeof(alphaelf_got_entry));

  return bfd_hash_newfunc((struct bfd_hash_entry*)ret, table, string);

}


/* alphaelf_init_got_info -- initialize info about got */
static void
alphaelf_init_got_info(bfd *b, 
                      alphaelf_got_info *info) {

  info->sgot = NULL;
  info->gotsize = 0;

  bfd_hash_table_init(&info->got_table, alphaelf_init_got_entry);

  info->reloc_literal = bfd_reloc_type_lookup(b,BFD_RELOC_ALPHA_ELF_LITERAL);
  info->reloc_64 = bfd_reloc_type_lookup(b,BFD_RELOC_64);

}


/* alphaelf_free_got_info -- free got information */
static void
alphaelf_free_got_info(alphaelf_got_info *info) {

  bfd_hash_table_free(&info->got_table);

}


/* alphaelf_got_traverse -- got table traversal function */
static int
alphaelf_got_traverse(struct bfd_hash_entry *ent, void *gcookie) {

  alphaelf_got_entry *gotent = (alphaelf_got_entry*)ent;
  asection *sgot = (asection*)gcookie;

  sgot->relocation[gotent->index] = *gotent->reloc;

  return TRUE;

}


static const char *
msymbol_name(bfd *b,const asymbol *s,unsigned long a) {

  char *n;
  unsigned l;

  if (!(s->flags & BSF_SECTION_SYM))
    return s->name;
  l=strlen(s->name)+17;
  n=xballoc(b,l+1);
  snprintf(n,l,"%s+%016lx",s->name,a);
  return (const char *)n;

}


/* alphaelf_create_got -- create a section for GOT */
static asection *
alphaelf_create_got(bfd *b,asymbol **syms,
                   alphaelf_got_info *info) {

  bfd_vma offset;
  asection *p;
  int i;

  /* Check that there are no GOT section */
  info->sgot = bfd_get_section_by_name(b, ".got");
  assert(!info->sgot);
  
  /* Compute GOT hash table */
  offset = 0;
  for (p=b->sections; p; p=p->next)
    
    if ((p->flags & SEC_ALLOC) && (p->flags & SEC_RELOC)) {
      
      int sz,reloc_count;
      arelent **reloc;
      
      /*  ALPHA native relocs: This section and analogs below have
	  been modified to avoid orelocation in favor of relocation
	  itself.  bfd_canonicalize_reloc reads in the relocation
	  table to the latter as an array and makes a pointer list
	  to it in the supplied argument.  We will call
	  bfd_get_relocated_section_contents, which will call
	  bfd_canonicalize_reloc internally, on all sections,
	  including the new .got section.  If no relocation array
	  exists, this will fail when bfd_cannicalize_reloc attempts
	  to read in the non-existent table.  20050409 CM*/
      
      sz = bfd_get_reloc_upper_bound(b, p);
      assert(sz>0);
      reloc=alloca(sz);
      
      reloc_count = bfd_canonicalize_reloc(b, p, reloc, syms);
      assert(reloc_count>0);
      assert(p->reloc_count==0 || p->reloc_count==reloc_count);
      
      assert(p->relocation);
      
      for (i=0; i<p->reloc_count; i++) {
	
	arelent *reloc = p->relocation+i;
	
	if ((reloc->howto==info->reloc_literal)) {
	  
	  const char *name = msymbol_name(b,*reloc->sym_ptr_ptr,reloc->addend);
	  alphaelf_got_entry *gotent = (alphaelf_got_entry*)
	    bfd_hash_lookup(&info->got_table, name, TRUE, TRUE );
	  
	  if (!gotent->reloc) {
	    
	    gotent->index = info->gotsize;
	    gotent->offset = offset;
	    
	    gotent->reloc = xballoc(b, sizeof(arelent));
	    gotent->reloc->sym_ptr_ptr = reloc->sym_ptr_ptr;
	    gotent->reloc->address = offset;
	    gotent->reloc->addend = reloc->addend;
	    gotent->reloc->howto = info->reloc_64;
	    
	    offset += sizeof(void*);
	    info->gotsize += 1;

	  }
	}
      }
    }
  
  if (offset >= 0x8000)
    FEerror("Too many entries in GOT (GOT full, merci ALPHA)",0);
  
  if (info->gotsize > 0) {
    
    info->sgot = bfd_make_section(b, ".got");
    assert(info->sgot);
    
    info->sgot->flags = SEC_ALLOC|SEC_RELOC|SEC_LOAD;
    
    if (!bfd_set_section_size(b,info->sgot,offset))
      FEerror("Cannot set got section size",0);
    
    if (info->sgot->alignment_power < 4)
      info->sgot->alignment_power = 4;      /* Set GOT relocations */
    
    info->sgot->relocation = xballoc(b, info->gotsize*sizeof(*info->sgot->relocation));
    bfd_hash_traverse(&info->got_table, (void*)alphaelf_got_traverse, info->sgot);
    info->sgot->reloc_count = info->gotsize;
    
  }
  
  return info->sgot;

}


/* alphaelf_fix_relocs -- patches the relocation for GOT */
static void 
alphaelf_fix_relocs(bfd *b,asymbol ** symbols,int symbol_count,
                   alphaelf_got_info *info) {

  int i;
  asymbol **gpdisp_ptr = NULL;
  asection *p;

  /* Make a gpdisp symbol at the top of the .got section */
  gpdisp = xballoc(b, sizeof(*gpdisp));
  gpdisp->value = 0;
  gpdisp->name="gpdisp";
  gpdisp->flags = BSF_LOCAL|BSF_SECTION_SYM;
  gpdisp->section = info->sgot ? info->sgot : bfd_abs_section_ptr;
  gpdisp->udata.p = NULL;
  gp=0;

  if (!info->sgot)
    return;

  gpdisp_ptr = xballoc(b, sizeof(asymbol*));
  *gpdisp_ptr = gpdisp;
  
  /* Iterate on sections and relocations */
  for (p=b->sections; p; p=p->next)
    
    if ((p->flags & SEC_ALLOC) && (p->flags & SEC_RELOC)) {
      
      assert(p->relocation);
      
      for (i=0; i<p->reloc_count; i++) {
	
	arelent *reloc = p->relocation+i;
	
	if (reloc->howto==info->reloc_literal) {
	  
	  const char *name = msymbol_name(b,*reloc->sym_ptr_ptr,reloc->addend);
	  alphaelf_got_entry *gotent = 
	    (alphaelf_got_entry*) bfd_hash_lookup(&info->got_table, name, FALSE, FALSE );
	  
	  assert(gotent);
	  
	  /* ELF_LITERAL relocations will refer
	   * to the GPDISP symbol and have the GOT index
	   * in the addend */
	  
	  reloc->addend = gotent->offset;
	  reloc->sym_ptr_ptr = gpdisp_ptr;
	  
	}

      } 

    }

}

#define SPECIAL_BFD alphaelf_special
/* alphaelf_special -- special processing for alpha elf */
static void
SPECIAL_BFD(bfd *b,asymbol **syms,int nsyms) {

  alphaelf_got_info got_info;

  alphaelf_install_patches(b);
  alphaelf_init_got_info(b, &got_info);
  alphaelf_create_got(b, syms, &got_info);
  alphaelf_fix_relocs(b,syms,nsyms, &got_info);
  alphaelf_free_got_info(&got_info);

}
