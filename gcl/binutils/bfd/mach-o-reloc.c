
/* Written by Aurelien Chanudet <aurelien.chanudet(at)m4x.org>.  */

enum bfd_mach_o_rtype {

  PPC_RELOC_VANILLA 		     = 0,
  PPC_RELOC_PAIR 		     = 1,
  PPC_RELOC_BR14 		     = 2,
  PPC_RELOC_BR24 		     = 3,
  PPC_RELOC_HI16 		     = 4,  /* expects a pair */
  PPC_RELOC_LO16 		     = 5,  /* expects a pair */
  PPC_RELOC_HA16 		     = 6,  /* expects a pair */
  PPC_RELOC_LO14 		     = 7,  /* expects a pair */
  PPC_RELOC_SECTDIFF 		     = 8,  /* expects a pair */
  PPC_RELOC_PB_LA_PTR 		     = 9,
  PPC_RELOC_HI16_SECTDIFF 	     = 10, /* expects a pair */
  PPC_RELOC_LO16_SECTDIFF 	     = 11, /* expects a pair */	
  PPC_RELOC_HA16_SECTDIFF 	     = 12, /* expects a pair */
  PPC_RELOC_JBSR 		     = 13, /* expects a pair */
  PPC_RELOC_LO14_SECTDIFF            = 14, /* expects a pair */

  PPC_RELOC_NONE		     = 255

};

/* Entries not suffixed by "PCREL" are expected to be absolute.  Note, however,
   that the canonicalization routine does not require this.  This means that adding
   a new pc-rel entry is as simple as adding the corresponding entries below, as
   well as in the howto table.  The canonicalization routine should happily cope
   with this.  */

enum bfd_reloc_code_real_type {

  BFD_MACH_O_PPC_RELOC_NONE            = 0,
  
  BFD_MACH_O_PPC_RELOC_VANILLA_0       = 1,
  BFD_MACH_O_PPC_RELOC_VANILLA_1       = 2,
  BFD_MACH_O_PPC_RELOC_VANILLA_2       = 3,
  BFD_MACH_O_PPC_RELOC_BR14            = 4,
  BFD_MACH_O_PPC_RELOC_BR14_PCREL      = 5,
  BFD_MACH_O_PPC_RELOC_BR24            = 6,
  BFD_MACH_O_PPC_RELOC_BR24_PCREL      = 7,
  BFD_MACH_O_PPC_RELOC_HI16            = 8,
  BFD_MACH_O_PPC_RELOC_LO16            = 9,
  BFD_MACH_O_PPC_RELOC_HA16            = 10,
  BFD_MACH_O_PPC_RELOC_LO14            = 11,
  BFD_MACH_O_PPC_RELOC_SECTDIFF        = 12,
  BFD_MACH_O_PPC_RELOC_PB_LA_PTR       = 13,
  BFD_MACH_O_PPC_RELOC_HI16_SECTDIFF   = 14,
  BFD_MACH_O_PPC_RELOC_LO16_SECTDIFF   = 15,
  BFD_MACH_O_PPC_RELOC_HA16_SECTDIFF   = 16,
  BFD_MACH_O_PPC_RELOC_LO14_SECTDIFF   = 17,
  BFD_MACH_O_PPC_RELOC_JBSR            = 18

};

#define BFD_MACH_O_R_ABS	0
#define BFD_MACH_O_R_SCATTERED	0x80000000

struct relocation_info
{
   long         r_address;      /* offset in the sect to what is being relocated */
  unsigned int r_symbolnum:24,  /* symbol index if r_extern == 1
			           or section ordinal if r_extern == 0 */
                r_pcrel:1,      /* was relocated pc relative already */
                r_length:2,     /* 0=byte, 1=word, 2=long */
                r_extern:1,     /* does not include value of sym referenced */
                r_type:4;       /* if not 0, machine specific relocation type */
};

struct scattered_relocation_info
{
#ifdef __BIG_ENDIAN__
   unsigned int r_scattered:1,  /* 1=scattered, 0=non-scattered (see above) */
                r_pcrel:1,      /* was relocated pc relative already */
                r_length:2,     /* 0=byte, 1=word, 2=long */
                r_type:4,       /* if not 0, machine specific relocation type */
                r_address:24;   /* offset in the sect to what is being relocated */
   long         r_value;        /* the value the item to be relocated is
				   referring to	(without any offset added) */
#endif /* __BIG_ENDIAN__ */
#ifdef __LITTLE_ENDIAN__
   unsigned int
                r_address:24,   /* offset in the sect to what is being relocated */
                r_type:4,       /* if not 0, machine specific relocation type */
                r_length:2,     /* 0=byte, 1=word, 2=long */
                r_pcrel:1,      /* was relocated pc relative already */
                r_scattered:1;  /* 1=scattered, 0=non-scattered (see above) */
   long         r_value;        /* the value the item to be relocated is
				   referring to (without any offset added) */
#endif /* __LITTLE_ENDIAN__ */
};

/* A pointer to this structure is cast to a asymbol **, so the
   layout of this structure must not be changed, or else carelessly.  */

typedef struct {
  
  /* Reference to the address from which to substract.  */
  asymbol *minuend;

  /* Reference to the address to substract.  */
  asymbol *subtrahend;

  /* Offset to the relocatable item referring to subtrahend.  */
  bfd_vma address;

} bfd_mach_o_sectdiff;

long
bfd_mach_o_get_reloc_upper_bound PARAMS ((bfd *, asection *));

reloc_howto_type *
bfd_mach_o_bfd_reloc_type_lookup PARAMS ((bfd *abfd, bfd_reloc_code_real_type));

static boolean
bfd_mach_o_slurp_relocation_entries PARAMS ((bfd *, asection *, bfd_size_type,
arelent *, asymbol **, unsigned *, PTR, struct relocation_info *));

static boolean
bfd_mach_o_slurp_reloc_table PARAMS ((bfd *, asection *, asymbol **, boolean));

long
bfd_mach_o_canonicalize_reloc PARAMS ((bfd *, asection *, arelent **, asymbol **));

static bfd_reloc_status_type
bfd_mach_o_sectdiff_reloc PARAMS ((bfd *, arelent *, asymbol *, PTR, asection *,
bfd *, char **));

boolean
bfd_mach_o_get_indirect_section_contents PARAMS ((bfd *, struct bfd_link_info *,
sec_ptr, bfd_byte *, asymbol **));

asection *
bfd_mach_o_craft_fp_branch_islands PARAMS ((bfd *));

boolean
bfd_mach_o_inject_fp_branch_islands PARAMS ((bfd *, asection *, asymbol **));

bfd_byte *
bfd_mach_o_bfd_get_relocated_section_contents PARAMS ((bfd *,
struct bfd_link_info *, struct bfd_link_order *, bfd_byte *data,
boolean relocateable, asymbol **symbols));

reloc_howto_type reloc_howto_table [] = {
    
  /* This reloc does nothing.  */
    
  /* 0 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_NONE,		/* type */
        0,					/* right_shift */
        2,					/* size */
        32,					/* bitsize */
        false,					/* pc_relative */
        0,					/* bitpos */
        complain_overflow_dont,			/* complain_overflow */
        NULL,					/* special_function */
        "(this reloc does nothing)",		/* name */
        false,					/* partial_inplace */
        0,					/* src_mask */
        0,					/* dst_mask */
        false					/* pcrel_offset */
	),
    
  /* 1 */
  HOWTO(
	BFD_MACH_O_PPC_RELOC_VANILLA_0,	     	/* type */
        0,                                   	/* right_shift */
        0,                                   	/* size, 0=byte */
        8,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_bitfield,          	/* complain_overflow */
        NULL,                        		/* special_function */
        "BFD_MACH_O_PPC_RELOC_VANILLA_0",       /* name */
        false,                               	/* partial_inplace */
        0,                                   	/* src_mask */
        0xffffffff,                          	/* dst_mask */
        false					/* pcrel_offset */
	),

  /* 2 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_VANILLA_1,	     	/* type */
        0,                                   	/* right_shift */
        1,                                   	/* size, 1=word */
        16,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_bitfield,          	/* complain_overflow */
        NULL,                        		/* special_function */
        "BFD_MACH_O_PPC_RELOC_VANILLA_1",       /* name */
        false,                               	/* partial_inplace */
        0,                                   	/* src_mask */
        0xffffffff,                          	/* dst_mask */
        false					/* pcrel_offset */
	),

  /* 3 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_VANILLA_2,	     	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size, 2=long */
        32,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_dont,          	/* complain_overflow */
        NULL,                        		/* special_function */
        "BFD_MACH_O_PPC_RELOC_VANILLA_2",       /* name */
        false,                               	/* partial_inplace */
        0,                                   	/* src_mask */
        0xffffffff,                          	/* dst_mask */
        false					/* pcrel_offset */
	),
   
  /* bnel and other such instructions can accommodate up to 16 bits.
     The lower two bits must be zero.  We don't check that, we just clear them.  */

  /* 4 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_BR14,	     	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        16,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_unsigned,          	/* complain_overflow */
        NULL,                        		/* special_function */
        "BFD_MACH_O_PPC_RELOC_BR14",            /* name */
        false,                               	/* partial_inplace */
        0,                                   	/* src_mask */
        0xfffc,                          	/* dst_mask */
        false					/* pcrel_offset */
	),
    
  /* 5 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_BR14_PCREL,       	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        16,                                  	/* bitsize */
        true,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_signed,          	/* complain_overflow */
        NULL,		                        /* special_function */
        "BFD_MACH_O_PPC_RELOC_BR14_PCREL",      /* name */
        false,                               	/* partial_inplace */
        0,                                   	/* src_mask */
        0xfffc,                          	/* dst_mask */
        true					/* pcrel_offset */
	),
  
  /* bl and other such instructions can accommodate up to 26 bits.
     The lower two bits must be zero.  We don't check that, we just clear them.
     Note that the Apple linker is more restrictive in its overflow check.  */

  /* 6 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_BR24,	     	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        26,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_unsigned,          	/* complain_overflow */
        NULL,		                        /* special_function */
        "BFD_MACH_O_PPC_RELOC_BR24",            /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0x03fffffc,                          	/* dst_mask */
        false					/* pcrel_offset */
	),
    
  /* 7 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_BR24_PCREL,     	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        26,                                  	/* bitsize */
        true,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_signed,          	/* complain_overflow */
        NULL,		                        /* special_function */
        "BFD_MACH_O_PPC_RELOC_BR24_PCREL",      /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0x03fffffc,                          	/* dst_mask */
        true					/* pcrel_offset */
	),

  /* The instruction contains the high 16 bits of a relocatable expression.
     The next relocation entry must be a PPC_RELOC_PAIR specifying the low
     16 bits of the expression in the low 16 bits or the r_value field.  */
    
  /* 8 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_HI16,	     	/* type */
        16,                                   	/* right_shift */
        2,                                   	/* size */
        16,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_dont,          	/* complain_overflow */
        NULL,                        		/* special_function */
        "BFD_MACH_O_PPC_RELOC_HI16",            /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0xffff,                          	/* dst_mask */
        false					/* pcrel_offset */
	),
    
  /* The instruction contains the low 16 bits of an address.  The next entry
     must be a PPC_RELOC_PAIR specifying the high 16 bits of the expression
     in the low (_not_ the high) 16 bits of the r_value field.  */
    
  /* 9 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_LO16,	     	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        16,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_dont,          	/* complain_overflow */
        NULL,                       		/* special_function */
        "BFD_MACH_O_PPC_RELOC_LO16",            /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0xffff,                          	/* dst_mask */
        false					/* pcrel_offset */
	),
    
  /* 10 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_HA16,     	        /* type */
        16,                                   	/* right_shift */
        2,                                   	/* size */
        16,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_dont,          	/* complain_overflow */
        NULL,                                   /* special_function */
        "BFD_MACH_O_PPC_RELOC_HA16",            /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0xffff,                          	/* dst_mask */
        false					/* pcrel_offset */
	),

  /* The lower two bits must be zero.  We don't check that, we just clear them.
     Used in 64-bit load/store instructions.  */

  /* 11 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_LO14,	     	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        16,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_dont,          	/* complain_overflow */
        NULL,                       		/* special_function */
        "BFD_MACH_O_PPC_RELOC_LO14",            /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0xfffc,                          	/* dst_mask */
        false					/* pcrel_offset */
	),

  /* 12 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_SECTDIFF,     	/* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        32,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_dont,          	/* complain_overflow */
        NULL,                                   /* special_function */
        "BFD_MACH_O_PPC_RELOC_SECTDIFF",        /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0xffffffff,                          	/* dst_mask */
        false					/* pcrel_offset */
	),

  /* This is always a scattered relocation entry. The r_value field contains the
     non-prebound value of the lazy pointer.  Set by the static link editor for
     use by the dynamic link editor.  Just ignore them.  */
  
  /* 13 */
  HOWTO(
        BFD_MACH_O_PPC_RELOC_PB_LA_PTR,         /* type */
        0,                                   	/* right_shift */
        2,                                   	/* size */
        32,                                  	/* bitsize */
        false,                                	/* pc_relative */
        0,                                   	/* bitpos */
        complain_overflow_dont,          	/* complain_overflow */
        NULL,                                   /* special_function */
        "BFD_MACH_O_PPC_RELOC_PB_LA_PTR",       /* name */
        false,                               	/* partial_inplace */
        0,                             		/* src_mask */
        0,                          	        /* dst_mask */
        false					/* pcrel_offset */
	),
    
  /* 14 */
  HOWTO(
	BFD_MACH_O_PPC_RELOC_HI16_SECTDIFF,     /* type */
	16,                                     /* right_shift */
	2,                                      /* size */
	16,                                     /* bitsize */
	false,                                  /* pc_relative */
	0,                                      /* bitpos */
	complain_overflow_dont,                 /* complain_overflow */
	bfd_mach_o_sectdiff_reloc,              /* special_function */
	"BFD_MACH_O_PPC_RELOC_HI16_SECTDIFF",   /* name */
	false,                                  /* partial_inplace */
	0,                                      /* src_mask */
	0xffff,                                 /* dst_mask */
	false                                   /* pcrel_offset */
	),
    
  /* 15 */
  HOWTO(
	BFD_MACH_O_PPC_RELOC_LO16_SECTDIFF,     /* type */
	0,                                      /* right_shift */
	2,                                      /* size */
	16,                                     /* bitsize */
	false,                                  /* pc_relative */
	0,                                      /* bitpos */
	complain_overflow_dont,                 /* complain_overflow */
	bfd_mach_o_sectdiff_reloc,              /* special_function */
	"BFD_MACH_O_PPC_RELOC_LO16_SECTDIFF",   /* name */
	false,                                  /* partial_inplace */
	0,                                      /* src_mask */
	0xffff,                                 /* dst_mask */
	false                                   /* pcrel_offset */
	),

  /* 16 */
  HOWTO(
	BFD_MACH_O_PPC_RELOC_HA16_SECTDIFF,     /* type */
	16,                                     /* right_shift */
	2,                                      /* size */
	16,                                     /* bitsize */
	false,                                  /* pc_relative */
	0,                                      /* bitpos */
	complain_overflow_dont,                 /* complain_overflow */
	bfd_mach_o_sectdiff_reloc,              /* special_function */
	"BFD_MACH_O_PPC_RELOC_HI16_SECTDIFF",   /* name */
	false,                                  /* partial_inplace */
	0,                                      /* src_mask */
	0xffff,                                 /* dst_mask */
	false                                   /* pcrel_offset */
	),

  /* 17 */
  HOWTO(
	BFD_MACH_O_PPC_RELOC_LO14_SECTDIFF,     /* type */
	0,                                      /* right_shift */
	2,                                      /* size */
	16,                                     /* bitsize */
	false,                                  /* pc_relative */
	0,                                      /* bitpos */
	complain_overflow_dont,                 /* complain_overflow */
	bfd_mach_o_sectdiff_reloc,              /* special_function */
	"BFD_MACH_O_PPC_RELOC_LO14_SECTDIFF",   /* name */
	false,                                  /* partial_inplace */
	0,                                      /* src_mask */
	0xfffc,                                 /* dst_mask */
	false                                   /* pcrel_offset */
	),

  /* The jbsr instruction is assembled to the branch island. For
     now, don't bother testing if the target can be reached directly.  */
  
  /* 18 */
  HOWTO(
	BFD_MACH_O_PPC_RELOC_JBSR,              /* type */
	0,                                      /* right_shift */
	2,                                      /* size */
	26,                                     /* bitsize */
	false,                                  /* pc_relative */
	0,                                      /* bitpos */
	complain_overflow_dont,                 /* complain_overflow */
	NULL,                                   /* special_function */
	"BFD_MACH_O_PPC_RELOC_JBSR",            /* name */
	false,                                  /* partial_inplace */
	0,                                      /* src_mask */
	0,                                      /* dst_mask */
	false                                   /* pcrel_offset */
	)

};

static reloc_howto_type *to_howto [] = {

  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_VANILLA_2],
  NULL,
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_BR14],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_BR24],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_HI16],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_LO16],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_HA16],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_LO14],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_SECTDIFF],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_PB_LA_PTR],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_HI16_SECTDIFF],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_LO16_SECTDIFF],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_HA16_SECTDIFF],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_JBSR],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_LO14_SECTDIFF],

  NULL,
  NULL,
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_BR14_PCREL],
  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_BR24_PCREL],
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL

};

bfd_mach_o_section *
bfd_mach_o_nsection_containing PARAMS ((bfd *, bfd_vma));

bfd_mach_o_section *
bfd_mach_o_nsection_for_asection PARAMS ((bfd *, asection *));

/* Special function to handle SECTDIFF reloc types.  */

bfd_reloc_status_type
bfd_mach_o_sectdiff_reloc (
    bfd *abfd ATTRIBUTE_UNUSED,
    arelent *reloc_entry,
    asymbol *symbol ATTRIBUTE_UNUSED,
    PTR data ATTRIBUTE_UNUSED,
    asection *input_section, 
    bfd *output_bfd ATTRIBUTE_UNUSED,
    char **error_message ATTRIBUTE_UNUSED
) {
    bfd_mach_o_sectdiff *sectdiff;
    
    if (output_bfd != NULL)
    {
        reloc_entry->address += input_section->output_offset;
        return bfd_reloc_ok;
    }
 
    sectdiff = (bfd_mach_o_sectdiff *) reloc_entry->sym_ptr_ptr;
    
    reloc_entry->addend -= sectdiff->subtrahend->section->output_section->vma;
    reloc_entry->addend -= sectdiff->address;

    return bfd_reloc_continue;
}

long
bfd_mach_o_get_reloc_upper_bound (bfd *abfd ATTRIBUTE_UNUSED, asection *asect)
{
  /* +1 to accommodate a trailing NULL */
  return (asect->reloc_count + 1) * sizeof (arelent *);
}

/* Return the native section containing the supplied address.  */

bfd_mach_o_section *
bfd_mach_o_nsection_containing (bfd * abfd, bfd_vma r_value)
{
  bfd_mach_o_data_struct *mdata = abfd->tdata.mach_o_data;
  bfd_mach_o_section *sectp;
  unsigned long i;

  for (i=0 ; i < mdata->nsects ; i++)
    {
      sectp = mdata->sections[i];
      if (r_value >= sectp->addr && r_value < sectp->addr + sectp->size) {
	return mdata->sections[i];
      }
    }
  
  fprintf (stderr, "error: no section containing address %lx\n", r_value);
  abort ();
  
  return NULL;
}

reloc_howto_type *
bfd_mach_o_bfd_reloc_type_lookup (abfd, code)
     bfd *abfd ATTRIBUTE_UNUSED;
     bfd_reloc_code_real_type code;
{
  if (code <= BFD_MACH_O_PPC_RELOC_JBSR) {
    return reloc_howto_table + code;
  } else {
    return NULL;
  }
}

/* Return the native section corresponding to the supplied BFD section.
   For now, this is an error if no match is found. */

bfd_mach_o_section *
bfd_mach_o_nsection_for_asection (bfd *abfd, asection *asect)
{
  bfd_mach_o_data_struct *mdata = abfd->tdata.mach_o_data;
  unsigned long i;

  for (i=0 ; i < mdata->nsects ; i++)
    {
      if (asect == mdata->sections[i]->bfdsection) {
	return mdata->sections[i];
      }
    }

  fprintf (stderr, "internal error: no native section for supplied section");
  abort ();
 
  return NULL;
}

/*
bfd_mach_o_compar_ist_idx (const void *a, const void *b)
{
    unsigned long x = ((bfd_mach_o_ist_helper_struct *) a)->x;
    unsigned long y = ((bfd_mach_o_ist_helper_struct *) b)->x;

    return (int) x - (int) y;
}

boolean
bfd_mach_o_la_sym_idx (bfd *abfd, asection *asect, bfd_vma offset, unsigned long *idx)
{
    bfd_mach_o_section *sectp;
    bfd_mach_o_data_struct *mdata = abfd->tdata.mach_o_data;
    bfd_mach_o_ist *ist = mdata->ist;
    unsigned long start, nmemb;
    bfd_mach_o_ist_helper_struct *match, key;
    
    if (!ist || (sectp = bfd_mach_o_native_section_for_asection (mdata, asect)) == NULL)
        return false;
    
    if ((sectp->flags & SECTION_TYPE) != BFD_MACH_O_S_LAZY_SYMBOL_POINTERS)
        return false;
    
    start = sectp->reserved1;
    nmemb = sectp->size / sizeof (unsigned long);
    key.x = offset / sizeof (unsigned long) + start;
    
    match = (bfd_mach_o_ist_helper_struct *) bsearch (
        &key, ist->raw_ist + start, nmemb, sizeof (bfd_mach_o_ist_helper_struct), ist_comparator_x);
    
    if (match && (start <= match->x) && (match->x < (start + nmemb)))
    {
        if (idx) *idx = match->y;
        return true;
    }
    
    return false;
}
*/

/* This function does the actual job of converting Mach-O relocs to BFD internal relocs.  */

static boolean
bfd_mach_o_slurp_relocation_entries (abfd, asect, reloc_count, relent, symbols,
				     num_pairs, sectbase, native_reloc)
     bfd *abfd;
     asection *asect;
     bfd_size_type reloc_count;
     arelent *relent;
     asymbol **symbols;
     unsigned *num_pairs;
     PTR sectbase;
     struct relocation_info *native_reloc;
{
  struct relocation_info *stop;
  bfd_size_type octets;
  
  (*num_pairs) = 0;
  
  for (stop = (native_reloc + reloc_count) ;
       native_reloc < stop ;
       native_reloc++, relent++)
    {
      unsigned r_scattered;
      unsigned r_pcrel;
      unsigned r_length;
      unsigned r_type;
      unsigned r_address;
      unsigned r_value;
      unsigned r_symbolnum;
      unsigned r_extern;
	
      bfd_vma other_half = 0;
      bfd_vma pair_r_value;
      bfd_vma value = 0;

      bfd_mach_o_section *target_section;
	
      /* The address of a normal BFD reloc is always section relative, and
	 the address of a dynamic reloc is absolute.  The convention is the
	 same for Mach-O but we're not concerned in dynamic relocs for now.  */
        
      if (native_reloc->r_address & BFD_MACH_O_R_SCATTERED)
	{
	  bfd_mach_o_data_struct *mdata = abfd->tdata.mach_o_data;
	  struct scattered_relocation_info *sri;
	    
	  sri = (struct scattered_relocation_info *) native_reloc;

	  r_scattered = 1;
	  r_extern = 0;
	    
	  r_pcrel = sri->r_pcrel;
	  r_length = sri->r_length;
	  r_type = sri->r_type;
	  r_address = sri->r_address;
	  r_value = sri->r_value;
	    
	  target_section = NULL;

	  for (r_symbolnum = 0 ; r_symbolnum < mdata->nsects ; r_symbolnum++)
	    {
	      bfd_mach_o_section *sectp = mdata->sections[r_symbolnum];
		
	      if (r_value >= sectp->addr && r_value < sectp->addr + sectp->size)
		{
		  r_symbolnum += 1; /* Section numbering starts at 1.  */
		  target_section = sectp;
		  break;
		}
	    }

	  /* The edge case where the last address past
	     the end of the section is referenced.  */
	    
	  if (target_section == NULL)
	    {
	      for (r_symbolnum = 0 ; r_symbolnum < mdata->nsects ; r_symbolnum++)
		{
		  bfd_mach_o_section *sectp = mdata->sections[r_symbolnum];

		  if (r_value == sectp->addr + sectp->size)
		    {
		      r_symbolnum += 1; /* Section numbering starts at 1.  */
		      target_section = sectp;
		      break;
		    }
		}
	    }

	  if (target_section == NULL)
	    {
	      if (r_type != PPC_RELOC_PAIR)
		{
		  fprintf (stderr,
			   "error: scattered relocation entry missing section\n");
		  return false;
		}
	      else
		{
		  fprintf (stderr, "warning: stray relocation entry, ignoring\n");
		  continue;
		}
	    }
	    
	  relent->sym_ptr_ptr = (target_section->bfdsection)->symbol_ptr_ptr;
	}
      else
	{
	  /* Describe an item in the file that uses
	     an	address that needs to be updated.  */
	    
	  bfd_mach_o_data_struct *mdata = abfd->tdata.mach_o_data;
	    
	  r_scattered = 0;
	  r_value = 0;
	    
	  r_address = native_reloc->r_address;
	  r_pcrel = native_reloc->r_pcrel;
	  r_length = native_reloc->r_length;
	  r_extern = native_reloc->r_extern;
	  r_symbolnum = native_reloc->r_symbolnum;
	  r_type = native_reloc->r_type;
	    
	  target_section = NULL;
	    
	  if (r_extern)
	    {
	      if (r_symbolnum < abfd->symcount)
		{
		  asymbol **asym_ptr = symbols + r_symbolnum;

		  /* Make sure that this symbol was not
		     created to point to a section.  */
		  
		  BFD_ASSERT (((*asym_ptr)->flags & BSF_SECTION_SYM) == 0);
		    
		  /* To be used in an external relocation entry,
		     a symbol must be undefined.  */
		  
		  /* BFD_ASSERT (bfd_is_und_section ((*asym_ptr)->section)); */
		    
		  relent->sym_ptr_ptr = asym_ptr;
		}
	      else
		{
		  fprintf (stderr, "error: "
			   "symbol index out of bounds in external reloc\n");
		  return false;
		}
	    }
	  else if (r_symbolnum == 0 /* = BFD_MACH_O_R_ABS */)
	    {
	      relent->sym_ptr_ptr = bfd_abs_section_ptr->symbol_ptr_ptr;
	    }
	  else if (r_symbolnum <= mdata->nsects)
	    {
	      /* r_symbolnum is a section ordinal.  */
	      target_section = mdata->sections[r_symbolnum - 1];
	      relent->sym_ptr_ptr = (target_section->bfdsection)->symbol_ptr_ptr;
	    }
	  else
	    {
	      fprintf (stderr, "error: bad section ordinal in local reloc\n");
	      return false;
	    }
	}

      if (r_type == PPC_RELOC_PAIR)
	{
	  fprintf (stderr, "warning: "
		   "stray PPC_RELOC_PAIR relocation entry, ignoring\n");
	  continue;
	}

      if (r_address >= bfd_mach_o_nsection_for_asection (abfd, asect)->size)
	{
	  fprintf (stderr, "error: bad relocation offset\n");
	  return false;
	}

      relent->addend = 0;
      relent->address = r_address;
      pair_r_value = 0;

      /* See if this relocation expects a pair and parse it if so. */

      if (r_type == PPC_RELOC_HI16 ||
	  r_type == PPC_RELOC_LO16 ||
	  r_type == PPC_RELOC_HA16 ||
	  r_type == PPC_RELOC_LO14 ||
	  r_type == PPC_RELOC_JBSR)
	{
	  struct scattered_relocation_info *srip = NULL;
	  struct relocation_info *rip = NULL;
	  enum bfd_mach_o_rtype pair_r_type = PPC_RELOC_NONE;
	    
	  if (++native_reloc < stop)
	    {
	      if (native_reloc->r_address & BFD_MACH_O_R_SCATTERED)
		{
		  srip = (struct scattered_relocation_info *) native_reloc;

		  if (r_type == PPC_RELOC_JBSR) {
		    other_half = srip->r_address;
		  } else {
		    other_half = srip->r_address & 0xffff;
		  }

		  pair_r_type = (enum bfd_mach_o_rtype) srip->r_type;
		}
	      else
		{
		  rip = (struct relocation_info *) native_reloc;

		  if (r_type == PPC_RELOC_JBSR) {
		    other_half = rip->r_address;
		  } else {
		    other_half = rip->r_address & 0xffff;
		  }

		  pair_r_type = (enum bfd_mach_o_rtype) rip->r_type;
		}
	    }

	  if ((srip == NULL && rip == NULL) || pair_r_type != PPC_RELOC_PAIR)
	    {
	      fprintf (stderr, "error: "
		       "reloc entry missing following associated pair entry\n");
	      return false;
	    } 

	  (*num_pairs) += 1;
	}
      else if (r_type == PPC_RELOC_SECTDIFF ||
	       r_type == PPC_RELOC_HI16_SECTDIFF ||
	       r_type == PPC_RELOC_LO16_SECTDIFF ||
	       r_type == PPC_RELOC_HA16_SECTDIFF ||
	       r_type == PPC_RELOC_LO14_SECTDIFF)
	{
	  struct scattered_relocation_info *srip = NULL;
	  enum bfd_mach_o_rtype pair_r_type = PPC_RELOC_NONE;
	    
	  if (r_scattered != 1)
	    {
	      fprintf (stderr, "error: SECTDIFF type reloc not scattered\n");
	      return false;
	    }

	  if (++native_reloc < stop)
	    {
	      if (native_reloc->r_address & BFD_MACH_O_R_SCATTERED)
		{
		  srip = (struct scattered_relocation_info *) native_reloc;
		    
		  /* FIX-ME : What about srip->r_address & 0xffff here ?  */
		  other_half = srip->r_address;
		  BFD_ASSERT ((other_half & 0xffff) == other_half);

		  pair_r_value = srip->r_value;
		    
		  pair_r_type = (enum bfd_mach_o_rtype) srip->r_type;
		}
	    }

	  if (srip == NULL || pair_r_type != PPC_RELOC_PAIR)
	    {
	      fprintf (stderr, "error: "
		       "reloc entry missing following associated pair entry\n");
	      return false;
	    }

	  (*num_pairs) += 1;
	}

      octets = relent->address * bfd_octets_per_byte (abfd);
	
      if (r_type == PPC_RELOC_VANILLA || r_type == PPC_RELOC_SECTDIFF)
	{	      
	  switch (r_length)
	    {
	    case 0:
	      value = bfd_get_8 (abfd, (bfd_byte *) sectbase + octets);
	      break;
		  
	    case 1:
	      value = bfd_get_16 (abfd, (bfd_byte *) sectbase + octets);
	      break;

	    case 2:
	      value = bfd_get_32 (abfd, (bfd_byte *) sectbase + octets);
	      break;

	    default:
	      fprintf (stderr, "error: "
		       "bad r_length in vanilla/sectdiff entry\n");
	      break;
	    }
	}
      else
	{
	  bfd_vma instruction = bfd_get_32 (abfd, (bfd_byte *) sectbase + octets);
	    
	  switch (r_type)
	    {
	    case PPC_RELOC_HI16:
	    case PPC_RELOC_HI16_SECTDIFF:
	      value = ((instruction & 0xffff) << 16) | other_half;
	      break;

	    case PPC_RELOC_LO16:
	    case PPC_RELOC_LO16_SECTDIFF:
	      value = (other_half << 16) | (instruction & 0xffff);
	      break;
	       
	    case PPC_RELOC_HA16:
	    case PPC_RELOC_HA16_SECTDIFF:
	      if (other_half & 0x8000) {
		value = ((instruction & 0xffff) << 16) + (0xffff0000 | other_half);
	      } else {
		value = ((instruction & 0xffff) << 16) + other_half;
	      }
	      break;
		
	    case PPC_RELOC_LO14:
	    case PPC_RELOC_LO14_SECTDIFF:
	      value = (other_half << 16) | (instruction & 0xfffc);
	      break;
		
	    case PPC_RELOC_BR24:
	      value = instruction & 0x03fffffc;
	      if (value & 0x02000000) value |= 0xfc000000;
	      break;

	    case PPC_RELOC_BR14:
	      value = instruction & 0xfffc;
	      if (value & 0x8000) value |= 0xffff0000;
	      break;
		
	    case PPC_RELOC_JBSR:
	      value = other_half;
	      break;
		
	    default:
	      fprintf (stderr, "error: unknown relocation entry\n");
	      return false;
	    }
	}

    
      if ((*relent->sym_ptr_ptr)->flags & BSF_SECTION_SYM)
	{
	  bfd_vma target, target_base;
	
	  if (r_pcrel)
	    {
	      bfd_mach_o_section *sectp =
		bfd_mach_o_nsection_for_asection (abfd, asect);
	      target = sectp->addr + r_address + value;
	    }
	  else
	    {
	      target = value + pair_r_value;
	    }

	  if (!bfd_is_abs_section ((*relent->sym_ptr_ptr)->section))
	    {
	      bfd_mach_o_section *sectp =
		bfd_mach_o_nsection_containing (abfd, target);
	      BFD_ASSERT (sectp == target_section);
	      target_base = target_section->addr;
	    }
	  else
	    {
	      target_base = 0;
	    }

	  relent->addend += (target - target_base);
	}
      else
	{
	  if (r_pcrel)
	    {
	      relent->addend += relent->address;
	      relent->addend += value;
	    }
	  else
	    {
	      relent->addend += value;
	    }
	}

      /* Modify relent->sym_ptr_ptr in order to
	 handle section difference relocation.  */
    
      if (r_type == PPC_RELOC_SECTDIFF ||
	  r_type == PPC_RELOC_HI16_SECTDIFF ||
	  r_type == PPC_RELOC_LO16_SECTDIFF ||
	  r_type == PPC_RELOC_HA16_SECTDIFF ||
	  r_type == PPC_RELOC_LO14_SECTDIFF)
	{
	  bfd_mach_o_sectdiff *sectdiff = (bfd_mach_o_sectdiff *)
	    bfd_alloc (abfd, sizeof (bfd_mach_o_sectdiff));
	  bfd_mach_o_section *sectp;
	
	  sectdiff->minuend = *(relent->sym_ptr_ptr);
	  BFD_ASSERT (sectdiff->minuend->flags & BSF_SECTION_SYM);

	  sectp = bfd_mach_o_nsection_containing (abfd, pair_r_value);
	  sectdiff->subtrahend = *(sectp->bfdsection->symbol_ptr_ptr);

	  sectdiff->address = pair_r_value - sectp->addr;

	  relent->sym_ptr_ptr = (asymbol **) sectdiff;
	}

      if (r_type == PPC_RELOC_HA16 || r_type == PPC_RELOC_HA16_SECTDIFF)
	{
	  /* We won't be using the low 16 bits, so trashing them does not
	     matter.  The trick:  (ha + 0x10000) + lo == ha + (0xffff0000 | lo)
	     for all lo such as (lo & 0x8000) != 0.  */
	  relent->addend += 0x8000;
	}

      /* Finally, pick up the correct reloc_howto_table entry for this reloc.  */

      relent->howto = NULL;
      
      if ((r_type + (PPC_RELOC_LO14_SECTDIFF+1) * r_pcrel) < sizeof (to_howto))
	{
	  relent->howto =
	    to_howto [r_type + (PPC_RELOC_LO14_SECTDIFF+1) * r_pcrel];
	
	  if (relent->howto ==
	      & reloc_howto_table [BFD_MACH_O_PPC_RELOC_VANILLA_2])
	    switch (r_length)
	      {
	      case 0:
		relent->howto =
		  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_VANILLA_0];
		break;
		
	      case 1:
		relent->howto =
		  & reloc_howto_table [BFD_MACH_O_PPC_RELOC_VANILLA_1];
		break;
	      }
	}

      if (relent->howto == NULL)
	{
	  fprintf (stderr, "warning: unsupported relocation entry\n");
	  return false;
	}   
    }
 
  return true;
}

static boolean
bfd_mach_o_slurp_reloc_table (abfd, asect, symbols, dynamic)
     bfd *abfd;
     asection *asect;
     asymbol **symbols;
     boolean dynamic ATTRIBUTE_UNUSED;
{
  PTR relbuf = NULL;
  PTR secbuf = NULL;
  PTR sectbase;
  struct relocation_info *relbase;
  bfd_size_type reloc_count;
  bfd_size_type reloc_size;
  bfd_size_type amt;
  arelent *relents;
  unsigned num_pairs = 0;
  boolean rtn;
  
  if (asect->relocation != NULL)
    return true;

  reloc_count = asect->reloc_count;
  
  if (reloc_count == 0 || asect->_raw_size == 0)
    return true;
  
  amt = reloc_count * sizeof (arelent);
  relents = (arelent *) bfd_alloc (abfd, amt);

  if (relents == NULL)
    return false;
  
  reloc_size = reloc_count * sizeof (struct relocation_info);
  
  if ((abfd->flags & BFD_IN_MEMORY) == 0)
    {
      relbuf = (PTR) bfd_malloc (reloc_size);
        
      if (relbuf == NULL)
        return false;
      
      if (bfd_seek (abfd, asect->rel_filepos, SEEK_SET) != 0 ||
	  bfd_bread (relbuf, reloc_size, abfd) != reloc_size)
	{
	  free (relbuf);
	  return false;
	}
      
      relbase = (struct relocation_info *) relbuf;
      
      if (asect->flags & SEC_IN_MEMORY)
        {
	  /* Don't read it in memory if it's already there.  */
	  sectbase = (PTR) asect->contents;
        }
      else
        {
	  secbuf = (PTR) bfd_malloc (asect->_raw_size);
	  
          if (secbuf == NULL)
	    {
	      free (relbuf);
	      return false;
	    }
            
	  if (bfd_seek (abfd, asect->filepos, SEEK_SET) != 0 ||
	      bfd_bread (secbuf, asect->_raw_size, abfd) != asect->_raw_size)
	    {
	      free (relbuf);
	      free (secbuf);
	      return false;
	    }
            
	  sectbase = secbuf;
        }
    }
  else
    {
      struct bfd_in_memory *b = (struct bfd_in_memory *) abfd->iostream;
        
      if (asect->rel_filepos + reloc_size > b->size)
	{
	  bfd_set_error (bfd_error_file_truncated);
	  return false;
	}
        
      if (asect->filepos + asect->_raw_size > b->size)
	{
	  bfd_set_error (bfd_error_file_truncated);
	  return false;
	}
      
      relbase = (struct relocation_info *) (b->buffer + asect->rel_filepos);
        
      sectbase = (PTR) (b->buffer + asect->filepos);
    }

  rtn = bfd_mach_o_slurp_relocation_entries (abfd, asect, reloc_count,
					     relents, symbols, &num_pairs,
					     sectbase, relbase);
  
  if (rtn)
    {
      asect->relocation = relents;

   /* PPC_RELOC_PAIR relocation entries are not real relocation entries.  */
      asect->reloc_count -= num_pairs;
    }

  if (relbuf != NULL)
    free (relbuf);
  
  if (secbuf != NULL)
    free (secbuf);
  
  return rtn;
}

/* Craft a section large enough to accommodate `count' branch islands.  */

asection *
bfd_mach_o_craft_fp_branch_islands (bfd *abfd)
{
  asection *asect;
  arelent *relocation;
  unsigned char *contents;
   
  asect = bfd_make_section_anyway (abfd, "LC_SEGMENT.__TEXT.__branch_islands");
  if (asect == NULL)
    return NULL;
  
  relocation = (arelent *) bfd_alloc (abfd, sizeof (arelent) * 4);
  if (relocation == NULL)
    return NULL;

  relocation[0].address = 0;
  relocation[0].addend = 0;
  relocation[0].howto = bfd_reloc_type_lookup (abfd, BFD_MACH_O_PPC_RELOC_HI16);

  relocation[1].address = 4;
  relocation[1].addend = 0;
  relocation[1].howto = bfd_reloc_type_lookup (abfd, BFD_MACH_O_PPC_RELOC_LO16);
  
  relocation[2].address = 16;
  relocation[2].addend = 0;
  relocation[2].howto = bfd_reloc_type_lookup (abfd, BFD_MACH_O_PPC_RELOC_HI16);

  relocation[3].address = 20;
  relocation[3].addend = 0;
  relocation[3].howto = bfd_reloc_type_lookup (abfd, BFD_MACH_O_PPC_RELOC_LO16);

  contents = (unsigned char *) bfd_alloc (abfd, 32);
  if (contents == NULL)
    return NULL;

  bfd_put_32 (abfd, 0x3d800000, contents +  0);  /* lis   r12,0x0     */
  bfd_put_32 (abfd, 0x618c0000, contents +  4);  /* ori   r12,r12,0x0 */
  bfd_put_32 (abfd, 0x7d8903a6, contents +  8);  /* mtctr r12         */
  bfd_put_32 (abfd, 0x4e800420, contents + 12);  /* bctr              */

  bfd_put_32 (abfd, 0x3d800000, contents + 16);
  bfd_put_32 (abfd, 0x618c0000, contents + 20);
  bfd_put_32 (abfd, 0x7d8903a6, contents + 24);
  bfd_put_32 (abfd, 0x4e800420, contents + 28);

  asect->flags = SEC_ALLOC | SEC_LOAD | SEC_RELOC | SEC_CODE
    | SEC_HAS_CONTENTS | SEC_IN_MEMORY | SEC_LINKER_CREATED;

  asect->_cooked_size = 32;
  asect->_raw_size = 32;

  asect->alignment_power = 2;

  asect->relocation = relocation;
  asect->reloc_count = 4;

  asect->contents = contents;

  return asect;
}

boolean
bfd_mach_o_inject_fp_branch_islands (abfd, branch_islands, symbols)
     bfd *abfd;
     asection *branch_islands;
     asymbol **symbols;
{
  asymbol **symbol_hdl, **saveFP_hdl, **restFP_hdl;
  unsigned int i;

  if (branch_islands == NULL)
    return false;
  
  symbol_hdl = symbols + abfd->symcount;
  saveFP_hdl = restFP_hdl = NULL;

  for (i = abfd->symcount ; --i != (unsigned int) -1 ; )
    {
      --symbol_hdl;
      
      if ((*symbol_hdl)->name && !strcmp ((*symbol_hdl)->name, "saveFP")) {
	saveFP_hdl = symbol_hdl;
      } else if ((*symbol_hdl)->name && !strcmp ((*symbol_hdl)->name, "restFP")) {
	restFP_hdl = symbol_hdl;
      }

      if (saveFP_hdl != NULL && restFP_hdl != NULL)
	{
	  asymbol *saveFP_new, *restFP_new, **sym_ptr_ptr;
	  
	  saveFP_new = bfd_make_empty_symbol (abfd);
	  restFP_new = bfd_make_empty_symbol (abfd);

	  if (saveFP_new == NULL || restFP_new == NULL)
	    return false;
	  
	  saveFP_new->section = restFP_new->section = branch_islands;

	  saveFP_new->flags = restFP_new->flags = BSF_LOCAL /*| BSF_SECTION_SYM*/;

	  saveFP_new->name = strdup ("saveFP_stub");
	  restFP_new->name = strdup ("restFP_stub");
	  
	  saveFP_new->value = 0;
	  restFP_new->value = 16;

	  sym_ptr_ptr = (asymbol **) bfd_alloc (abfd, sizeof (asymbol *) * 2);
	  if (sym_ptr_ptr == NULL)
	    return false;
	  
	  sym_ptr_ptr[0] = *saveFP_hdl;
	  sym_ptr_ptr[1] = *restFP_hdl;
	  
	  branch_islands->relocation[0].sym_ptr_ptr = sym_ptr_ptr;
	  branch_islands->relocation[1].sym_ptr_ptr = sym_ptr_ptr;
	  branch_islands->relocation[2].sym_ptr_ptr = sym_ptr_ptr+1;
	  branch_islands->relocation[3].sym_ptr_ptr = sym_ptr_ptr+1;
	  
	  *saveFP_hdl = saveFP_new;
	  *restFP_hdl = restFP_new;
	  
	  break;
	}
    }

  if (saveFP_hdl == NULL && restFP_hdl == NULL)
    {
      branch_islands->reloc_count = 0; /* Just cancel relocation.  */
    }

  return true;
}

long
bfd_mach_o_canonicalize_reloc (abfd, asect, relptr, symbols)
     bfd *abfd;
     asection *asect;
     arelent **relptr;
     asymbol **symbols;
{
    arelent *tblptr;
    unsigned i;
    
    if (!bfd_mach_o_slurp_reloc_table (abfd, asect, symbols, false))
        return -1;
    
    tblptr = asect->relocation;
    for (i=0 ; i < asect->reloc_count ; i++)
        *relptr++ = tblptr++;
    
    *relptr = NULL;
    
    return asect->reloc_count;
}

boolean
bfd_mach_o_get_indirect_section_contents (abfd, link_info, section, data, symbols)
     bfd *abfd;
     struct bfd_link_info *link_info;
     sec_ptr section;
     bfd_byte *data;
     asymbol **symbols;
{
  bfd_mach_o_data_struct *mdata = abfd->tdata.mach_o_data;
  bfd_mach_o_ist *ist = mdata->ist;
  bfd_mach_o_section *sectp;
  bfd_mach_o_ist_entry *e;
  unsigned long i, nmemb;
  bfd_vma offset;
  
  sectp = bfd_mach_o_nsection_for_asection (abfd, section);
  
  if (ist == NULL ||
      (sectp->flags & BFD_MACH_O_S_LAZY_SYMBOL_POINTERS) == 0 ||
      (sectp->flags & BFD_MACH_O_S_NON_LAZY_SYMBOL_POINTERS) == 0)
    {
      bfd_set_error (bfd_error_invalid_operation);
      return (false);
    }

  e = ist->raw_ist + sectp->reserved1;
  nmemb = sectp->size / 4;
  offset = 0;

  for (i=0 ; i < nmemb ; i++, e++)
    {
      if (e->st_idx < abfd->symcount)
	{
	  asymbol *asym = *(symbols + e->st_idx);
	  struct bfd_link_hash_entry *hashp;
	  
	  hashp = bfd_link_hash_lookup (link_info->hash, asym->name, false, false, true);
      
	  if (hashp != NULL && hashp->type == bfd_link_hash_defined)
	    {
	      bfd_vma value = hashp->u.def.value + hashp->u.def.section->vma;
	      /* FIX-ME : bfd_vma value =
		 hashp->u.def.value + hashp->u.def.section->output_section->vma; */
	      bfd_put_32 (abfd, value, data + offset);
	    }
	  else if (!bfd_is_und_section (asym->section))
	    {
	      /* This symbol is locally defined, as a matter of fact.  */
	      bfd_vma value;
	      if (asym->section->output_section != NULL)
		value = asym->value + asym->section->output_section->vma;
	      else {
		BFD_ASSERT (asym->section->output_section != NULL);
		value = asym->value + asym->section->vma;
	      }
	      BFD_ASSERT (value != 0);
	      bfd_put_32 (abfd, value, data + offset);
	    }
	  else 
	    {
	      fprintf (stderr, "Error binding section %s: "
		       "symbol %s is undefined\n", section->name, asym->name);
	      return (false);
	    }
	}
      else
	{
	  fprintf (stderr, "Error binding section %s: "
		   "symbol out of bounds\n", section->name);
	  return (false);
	}

      offset += 4;
    }

  return (true);
}

bfd_byte *
bfd_mach_o_bfd_get_relocated_section_contents (
    bfd *abfd,
    struct bfd_link_info *link_info,
    struct bfd_link_order *link_order,
    bfd_byte *data,
    boolean relocateable,
    asymbol **symbols
) {
  bfd_mach_o_data_struct *mdata = abfd->tdata.mach_o_data;
  asection *asect = link_order->u.indirect.section;
  bfd_mach_o_section *sectp = NULL;
  unsigned long i;
  
  for (i=0 ; i < mdata->nsects ; i++)
    {
      if (mdata->sections[i]->bfdsection == asect) {
	sectp = mdata->sections[i];
	break;
      }
    }
  
  if ((sectp != NULL) &&
      (((sectp->flags & SECTION_TYPE) == BFD_MACH_O_S_LAZY_SYMBOL_POINTERS) ||
       ((sectp->flags & SECTION_TYPE) == BFD_MACH_O_S_NON_LAZY_SYMBOL_POINTERS)))
    {
      if (!bfd_mach_o_get_indirect_section_contents (abfd, link_info, asect,
						     data, symbols))
	return NULL;

      return data;
    }
  else
    {
      return bfd_generic_get_relocated_section_contents (abfd, link_info,
							 link_order, data,
							 relocateable, symbols);
    }
}
