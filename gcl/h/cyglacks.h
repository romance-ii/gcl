
#ifndef _CYGLACKS_
#define _CYGLACKS_

extern int _fmode;

#define SYMNMLEN 8
struct syment 
{
  union {
    char n_name[SYMNMLEN];
    struct {
      int n_zeroes;
      int n_offset;
    } n;
  } n;
  DWORD n_value;
  SHORT n_scnum;
  WORD n_type;
  BYTE n_sclass;
  BYTE n_numaux;
};

#define n_zeroes n.n.n_zeroes
#define n_offset n.n.n_offset
#define n_name n.n_name
/* storage class */
#define C_EXT             0x0002 /* IMAGE_SYM_CLASS_EXTERNAL */
/* section number */
#define N_UNDEF           (SHORT)0  /* Symbol is undefined or is common. */

struct filehdr {
  WORD f_magic;	/* magic number			*/
  WORD f_nscns;	/* number of sections		*/
  DWORD f_timdat;	/* time & date stamp		*/
  DWORD f_symptr;	/* file pointer to symtab	*/
  DWORD f_nsyms;	/* number of symtab entries	*/
  WORD f_opthdr;	/* sizeof(optional hdr)		*/
  WORD f_flags;	/* flags			*/
};

struct scnhdr {
  BYTE	s_name[IMAGE_SIZEOF_SHORT_NAME];
  /* section name  */
  DWORD	    s_paddr;	/* physical address, aliased s_nlib */
  DWORD  	s_vaddr;	/* virtual address		*/
  DWORD  	s_size;	/* section size			*/
  DWORD  	s_scnptr;	/* file ptr to raw data for section */
  DWORD  	s_relptr;	/* file ptr to relocation	*/
  DWORD  	s_lnnoptr;	/* file ptr to line numbers	*/
  WORD   	s_nreloc;	/* number of relocation entries	*/
  WORD   	s_nlnno;	/* number of line number entries*/
  DWORD  	s_flags;	/* flags			*/
};





/* IMAGE_REL_I386_ABSOLUTE */
#define R_ABS         0x0000 /* absolute, no relocation is necessary */
/* IMAGE_REL_I386_DIR32 */
#define   R_DIR32  0x0006  /* Direct 32-bit reference to the symbols virtual address */
/* IMAGE_REL_I386_REL32 */
#define R_PCRLONG 0x0014  /* 32-bit reference pc relative  to the symbols virtual address */



/* _IMAGE_RELOCATION */
struct reloc {
  union {
        DWORD   r_vaddr;
        DWORD   r_count;    /* Set to the real count
			       when IMAGE_SCN_LNK_NRELOC_OVFL is set */
    } r;
    DWORD   r_symndx;
    WORD    r_type;
};
#define r_vaddr r.r_vaddr

#endif /* _CYGLACKS_ */

