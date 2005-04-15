/* This file has been modified from the file dldbfd.c in the lush
   source tree.  It is brought into GCL under the terms of the GNU
   General Public License, version 2 or, at the user's option, any
   later version.*/


/*  FIXME -- check that bfd_close frees all this.  Think or a way to
    avoid fragmenting malloc contblocks by redirecting allocations to
    some other space.  CM 20050409*/
extern void *bfd_alloc(bfd *,bfd_size_type);

#define vmaptr(x) ((void*)(unsigned long)(x))
#define ptrvma(x) ((bfd_vma)(unsigned long)(x))

static void *
xballoc(bfd *abfd, size_t n) {

  void *ans = (void*)bfd_alloc(abfd, n);

  if (!ans)
    FEerror("bfd error: ~S", 1 , bfd_errmsg(bfd_error_no_memory));
  return ans;

}


static bfd_reloc_status_type
(*mipself_old_lo16_reloc) (bfd *abfd,
                           arelent *reloc_entry,
                           asymbol *symbol,
                           PTR data,
                           asection *input_section,
                           bfd *output_bfd,
                           char **error_message) = NULL;

static bfd_reloc_status_type
(*mipself_old_hi16_reloc) (bfd *abfd,
                           arelent *reloc_entry,
                           asymbol *symbol,
                           PTR data,
                           asection *input_section,
                           bfd *output_bfd,
                           char **error_message) = NULL;



/* mipself_gpdisp_hiaddr, mipself_gpdisp_value --
   static variables for setting gp_disp */
static bfd_vma mipself_gpdisp_value = 0;
static bfd_vma mipself_gpdisp_hiaddr = 0;


/* mipself_new_{lo16,hi16,gprel32}_reloc --
   new reloc functions patching the bogus BFD functions */
static bfd_reloc_status_type
mipself_new_hi16_reloc (bfd *abfd,
                        arelent *reloc_entry,
                        asymbol *symbol,
                        PTR data,
                        asection *input_section,
                        bfd *output_bfd,
                        char **error_message) {

  if (output_bfd)
    return bfd_reloc_notsupported;    

  /* Test if symbol is '_gp_disp' because it changes everything */
  if (!strcmp(symbol->name, "_gp_disp"))  {

    mipself_gpdisp_hiaddr = ptrvma(data) + reloc_entry->address;
    mipself_gpdisp_value = symbol->section->vma + symbol->value;
    
    /* Assume no addend for simplicity*/
    if (reloc_entry->addend)
      return bfd_reloc_notsupported;
    
    return bfd_reloc_ok;
    
  }
  /* Regular procedure */
  return (*mipself_old_hi16_reloc)(abfd, reloc_entry, symbol,
                                   data, input_section, 
                                   output_bfd, error_message);
}

static bfd_reloc_status_type
mipself_new_lo16_reloc (bfd *abfd,
                        arelent *reloc_entry,
                        asymbol *symbol,
                        PTR data,
                        asection *input_section,
                        bfd *output_bfd,
                        char **error_message) {

  if (output_bfd)
    return bfd_reloc_notsupported;    

  /* Test if symbol is '_gp_disp' because it changes everything */

  if(!strcmp(symbol->name, "_gp_disp")) {
    
    int loinsn, hiinsn;
    
    bfd_vma loaddr = ptrvma(data) + reloc_entry->address;
    bfd_vma value = symbol->section->vma + symbol->value;
    
    assert(value == mipself_gpdisp_value);
    
    /* Assume no addend for simplicity*/
    if (reloc_entry->addend)
      return bfd_reloc_notsupported;
    
    /* Get instructions */
    loinsn = bfd_get_32(abfd, (bfd_byte*)vmaptr(loaddr));
    hiinsn = bfd_get_32(abfd, (bfd_byte*)vmaptr(mipself_gpdisp_hiaddr));
    
    if ((loinsn & 0xffff) || (hiinsn & 0xffff))
      return bfd_reloc_notsupported;
    /* Patch instructions (taking care of sign extension on the low 16 bits) */
    
    value = value - mipself_gpdisp_hiaddr;
    loinsn |= (value & 0xffff);
    
    value = (value>>16) + (loinsn&0x8000 ? 1 : 0); 
    hiinsn |= (value & 0xffff);
    
    bfd_put_32 (abfd, hiinsn, (bfd_byte*)vmaptr(mipself_gpdisp_hiaddr));
    bfd_put_32 (abfd, loinsn, (bfd_byte*)vmaptr(loaddr));
    
    return bfd_reloc_ok;
    
  }
  /* Regular procedure */
  return (*mipself_old_lo16_reloc)(abfd, reloc_entry, symbol,
                                   data, input_section, 
                                   output_bfd, error_message);
}

static bfd_reloc_status_type
mipself_new_call16_reloc (bfd *abfd, 
                         arelent *reloc_entry,
                         asymbol *symbol,
                         PTR data,
                         asection *input_section,
                         bfd *output_bfd,
                         char **error_message) {

  /* This should only happen with GPDISP symbol */
  int insn;
  bfd_byte *addr;

  /* Plug GOT offset into low 16 bits of instruction */
  addr = (bfd_byte*)(data) + reloc_entry->address;
  insn = bfd_get_32(abfd, addr);

  if (insn & 0x0000ffff)
    return bfd_reloc_notsupported;    

  if (reloc_entry->addend != (reloc_entry->addend & 0x7fff))
    return bfd_reloc_notsupported;        

  insn |= reloc_entry->addend;

  bfd_put_32(abfd, insn, addr);

  return bfd_reloc_ok;

}

static bfd_reloc_status_type
mipself_new_got16_reloc (bfd *abfd, 
                         arelent *reloc_entry,
                         asymbol *symbol,
                         PTR data,
                         asection *input_section,
                         bfd *output_bfd,
                         char **error_message) {

  int insn;
  bfd_byte *addr;

  /* If symbol is '_gp_disp' same as CALL16 */
  if (!strcmp(symbol->name,"_gp_disp"))
    return mipself_new_call16_reloc(abfd, reloc_entry, symbol,
                                    data, input_section, 
                                    output_bfd, error_message);
  /* We have now a brain damaged GOT16/LO16 sequence 
     These happen when a GOT16 reloc points to a section symbol.
     This is used to access static objects (PIC) by first giving an
     offset to a GOT entry pointing the right 64kb page (GOT16) and
     a 16 bit displacement (LO16). We prefer patching the code
     into a non PIC sequence similar to HI16/LO16 sequences. */
  addr = (bfd_byte*)(data) + reloc_entry->address;
  insn = bfd_get_32(abfd, addr);

  /* Transform 'LW Rn, off(GP)' into 'LUI Rn, off' */
  if ((insn & 0xffe00000) != 0x8f800000)
    return bfd_reloc_notsupported;    

  insn &= ~0xffe00000;
  insn |=  0x3c000000;

  bfd_put_32(abfd, insn, addr);

  /* We can then process it as HI16 */
  return (*mipself_old_hi16_reloc)(abfd, reloc_entry, symbol,
                                   data, input_section, 
                                   output_bfd, error_message);

}


/* mipself_install_patches -- install patches into BFD */

static void
mipself_install_patches(bfd *abfd) {

  reloc_howto_type *howto;

  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_HI16_S);
  assert(howto);
  if (howto->special_function != mipself_new_hi16_reloc) {

    mipself_old_hi16_reloc = howto->special_function;
    howto->special_function = mipself_new_hi16_reloc;
    assert(mipself_old_hi16_reloc);

  }

  /* LO16 */
  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_LO16);
  assert(howto);
  if (howto->special_function != mipself_new_lo16_reloc)  {

    mipself_old_lo16_reloc = howto->special_function;
    howto->special_function = mipself_new_lo16_reloc;
    assert(mipself_old_lo16_reloc);

  }

  /* GOT16 */
  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_MIPS_GOT16);
  assert(howto);
  howto->special_function = mipself_new_got16_reloc;  

  /* CALL16 */
  howto = bfd_reloc_type_lookup(abfd,BFD_RELOC_MIPS_CALL16);
  assert(howto);
  howto->special_function = mipself_new_call16_reloc;  

}


/* mipself_got_info -- structure containing GOT information */
typedef struct mipself_got_info {
  int gotsize;
  asection *sgot;
  struct bfd_hash_table got_table;
  reloc_howto_type *reloc_got16;
  reloc_howto_type *reloc_call16;
  reloc_howto_type *reloc_32;       /* for relocs in got */
} mipself_got_info;


/* mipself_got_entry -- structure for GOT entries */
typedef struct mipself_got_entry {
  struct bfd_hash_entry root;
  arelent *reloc;
  bfd_vma offset;
  int index;
} mipself_got_entry;


/* mipself_init_got_entry -- initialize got hash table component */
static struct bfd_hash_entry *
mipself_init_got_entry(struct bfd_hash_entry *entry,
                       struct bfd_hash_table *table,
                       const char *string) {

  mipself_got_entry *ret = (mipself_got_entry*)entry;

  if (!ret) {

    ret = (mipself_got_entry*)
      bfd_hash_allocate(table, sizeof(mipself_got_entry));
    if (!ret)
      FEerror("bfd error:~S",1,bfd_errmsg(bfd_error_no_memory));

  }

  memset(ret, 0, sizeof(mipself_got_entry));

  return bfd_hash_newfunc((struct bfd_hash_entry*)ret, table, string);

}


/* mipself_init_got_info -- initialize info about got */
static void
mipself_init_got_info(bfd *b, 
                      mipself_got_info *info) {

  /* Create GOT hash table */
  info->sgot = NULL;
  info->gotsize = 0;

  bfd_hash_table_init(&info->got_table, mipself_init_got_entry);

  /* Identify pertinent howto information */
  info->reloc_got16 = bfd_reloc_type_lookup(b,BFD_RELOC_MIPS_GOT16);
  info->reloc_call16 = bfd_reloc_type_lookup(b,BFD_RELOC_MIPS_CALL16);
  info->reloc_32 = bfd_reloc_type_lookup(b,BFD_RELOC_32);

}


/* mipself_free_got_info -- free got information */
static void
mipself_free_got_info(mipself_got_info *info) {

  bfd_hash_table_free(&info->got_table);

}


/* mipself_got_traverse -- got table traversal function */
static int
mipself_got_traverse(struct bfd_hash_entry *ent, void *gcookie) {

  mipself_got_entry *gotent = (mipself_got_entry*)ent;
  asection *sgot = (asection*)gcookie;

  sgot->relocation[gotent->index] = *gotent->reloc;

  return TRUE;

}


/* mipself_create_got -- create a section for GOT */
static asection *
mipself_create_got(bfd *b,asymbol **syms,
                   mipself_got_info *info) {

  asection *sgot;
  bfd_vma offset;
  asection *p;
  int i;

  /* Check that there are no GOT section */
  sgot = bfd_get_section_by_name(b, ".got");
  assert(!sgot);

  /* Compute GOT hash table */
  offset = 0;
  for (p=b->sections; p; p=p->next)

    if ((p->flags & SEC_ALLOC) && (p->flags & SEC_RELOC)) {

      int storage_needed,reloc_count;
      arelent **reloc;

      /*  MIPS native relocs: This section and analogs below have
	  been modified to avoid orelocation in favor of relocation
	  itself.  bfd_canonicalize_reloc reads in the relocation
	  table to the latter as an array and makes a pointer list
	  to it in the supplied argument.  We will call
	  bfd_get_relocated_section_contents, which will call
	  bfd_canonicalize_reloc internally, on all sections,
	  including the new .got section.  If no relocation array
	  exists, this will fail when bfd_cannicalize_reloc attempts
	  to read in the non-existent table.  20050409 CM*/
      
      
      storage_needed = bfd_get_reloc_upper_bound(b, p);
      assert(storage_needed>0);
      reloc=alloca(storage_needed);

      reloc_count = bfd_canonicalize_reloc(b, p, reloc, syms);
      assert(reloc_count>0);
      assert(p->reloc_count==0 || p->reloc_count==reloc_count);

      assert(p->relocation);

      for (i=0; i<p->reloc_count; i++) {

	arelent *reloc = p->relocation+i;
	asymbol *symbol = *(reloc->sym_ptr_ptr);
	if ((reloc->howto==info->reloc_call16) 
	    || ((reloc->howto==info->reloc_got16) 
		&& !(symbol->flags & BSF_SECTION_SYM))) {

	  /* Search entry in GOT table */
	  const char *name = (*reloc->sym_ptr_ptr)->name;
	  mipself_got_entry *gotent = 
	    (mipself_got_entry*) bfd_hash_lookup(&info->got_table, name, TRUE, TRUE );

	  if (!gotent->reloc) {

	    /* Compute offset */
	    gotent->index = info->gotsize;
	    gotent->offset = offset;

	    gotent->reloc = xballoc(b, sizeof(arelent));
	    gotent->reloc->sym_ptr_ptr = reloc->sym_ptr_ptr;
	    gotent->reloc->address = offset;
	    gotent->reloc->addend = 0;
	    gotent->reloc->howto = info->reloc_32;

	    /* Increment GOT offset */
	    offset += sizeof(void*);
	    info->gotsize += 1;

	  }

	}

      }

    }

  /* Check GOT size */
  if (offset >= 0x8000)
    FEerror("Too many entries in GOT (GOT full, merci MIPS)",0);

  /* Create GOT if necessary */
  if (info->gotsize > 0) {

    sgot = bfd_make_section(b, ".got");
    assert(sgot);
    sgot->flags = SEC_ALLOC|SEC_RELOC|SEC_LOAD;
    
    /* MIPS native relocs: we need _raw_size set here too -- this is
       the generic way to do it, avoiding structure element name changes,
       etc.*/
    
    if (!bfd_set_section_size(b,sgot,offset))
      FEerror("Cannot set got section size",0);

    if (sgot->alignment_power < 4)
      sgot->alignment_power = 4;      /* Set GOT relocations */

    sgot->relocation = xballoc(b, info->gotsize*sizeof(*sgot->relocation));
    bfd_hash_traverse(&info->got_table, (void*)mipself_got_traverse, sgot);
    sgot->reloc_count = info->gotsize;

  }

  /* return GOT section if any */
  info->sgot = sgot;
  return sgot;

}


/* mipself_fix_relocs -- patches the relocation for GOT */
static void 
mipself_fix_relocs(bfd *b,asymbol ** symbols,int symbol_count,
                   mipself_got_info *info) {

  int i;
  asymbol *gpdisp = NULL;
  asymbol **gpdisp_ptr = NULL;
  asection *p;

  /* Locate and patch gpdisp symbol */
  for (i=0; i<symbol_count; i++)

    if (!strcmp(symbols[i]->name, "_gp_disp")) {

      gpdisp = symbols[i];
      gpdisp->value = 0;
      gpdisp->flags = BSF_LOCAL|BSF_SECTION_SYM;
      gpdisp->section = info->sgot ? info->sgot : bfd_abs_section_ptr;
      gpdisp->udata.p = NULL;
      break;
    }

  if (!info->sgot)
    return;

  if (!gpdisp)
    FEerror("Found GOT relocations but no symbol '_gp_disp'",0);
  
  /* Prepare pointer to gpdisp to patch got relocs */
  gpdisp_ptr = xballoc(b, sizeof(asymbol*));
  *gpdisp_ptr = gpdisp;
  
  /* Iterate on sections and relocations */
  for (p=b->sections; p; p=p->next) 

    if ((p->flags & SEC_ALLOC) && (p->flags & SEC_RELOC)) {
      
      assert(p->relocation);

      for (i=0; i<p->reloc_count; i++) {
	
	arelent *reloc = p->relocation+i;
	asymbol *symbol = *reloc->sym_ptr_ptr;

	if ((reloc->howto==info->reloc_call16) 
	    || ((reloc->howto==info->reloc_got16) 
		&& !(symbol->flags & BSF_SECTION_SYM))) {

	  /* Find GOT entry */
	  mipself_got_entry *gotent = (mipself_got_entry*)
	    bfd_hash_lookup(&info->got_table, symbol->name, FALSE, FALSE );
	  assert(gotent);

	  /* Addend should be null */
	  if (reloc->addend)
	    FEerror("Non zero addend in GOT16/CALL16 relocation",0);

	  /* GOT16 and CALL16 relocations will refer
	   * to the GPDISP symbol and have the GOT index
	   * in the addend */
	  reloc->addend = gotent->offset;
	  reloc->sym_ptr_ptr = gpdisp_ptr;

	}
	
      } 

    }

}

/* mipself_special -- special processing for mips elf */
#define SPECIAL_BFD mipself_special
static void
SPECIAL_BFD(bfd *b,asymbol **syms,int nsyms) {

  mipself_got_info got_info;
  mipself_install_patches(b);
  mipself_init_got_info(b, &got_info);
  mipself_create_got(b, syms, &got_info);
  mipself_fix_relocs(b,syms,nsyms, &got_info);
  mipself_free_got_info(&got_info);

}
