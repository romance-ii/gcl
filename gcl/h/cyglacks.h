
#ifndef _CYGLACKS_
#define _CYGLACKS_

typedef struct  {
  WORD    Machine;
  WORD    NumberOfSections;
  DWORD   TimeDateStamp;
  DWORD   PointerToSymbolTable;
  DWORD   NumberOfSymbols;
  WORD    SizeOfOptionalHeader;
  WORD    Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

typedef struct  {
  DWORD   VirtualAddress;
  DWORD   Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;


typedef struct  {
  WORD    Magic;
  BYTE    MajorLinkerVersion;
  BYTE    MinorLinkerVersion;
  DWORD   SizeOfCode;
  DWORD   SizeOfInitializedData;
  DWORD   SizeOfUninitializedData;
  DWORD   AddressOfEntryPoint;
  DWORD   BaseOfCode;
  DWORD   BaseOfData;
  /* additional fields for NT */
  DWORD   ImageBase;
  DWORD   SectionAlignment;
  DWORD   FileAlignment;
  WORD    MajorOperatingSystemVersion;
  WORD    MinorOperatingSystemVersion;
  WORD    MajorImageVersion;
  WORD    MinorImageVersion;
  WORD    MajorSubsystemVersion;
  WORD    MinorSubsystemVersion;
  DWORD   Reserved1;
  DWORD   SizeOfImage;
  DWORD   SizeOfHeaders;
  DWORD   CheckSum;
  WORD    Subsystem;
  WORD    DllCharacteristics;
  DWORD   SizeOfStackReserve;
  DWORD   SizeOfStackCommit;
  DWORD   SizeOfHeapReserve;
  DWORD   SizeOfHeapCommit;
  DWORD   LoaderFlags;
  DWORD   NumberOfRvaAndSizes;
  IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER, *PIMAGE_OPTIONAL_HEADER;

typedef struct _IMAGE_NT_HEADERS {
  DWORD Signature;
  IMAGE_FILE_HEADER FileHeader;
  IMAGE_OPTIONAL_HEADER OptionalHeader;
} IMAGE_NT_HEADERS, *PIMAGE_NT_HEADERS;


#define IMAGE_SIZEOF_SHORT_NAME              8
typedef struct _IMAGE_SECTION_HEADER {
  BYTE    Name[IMAGE_SIZEOF_SHORT_NAME];
  union {
    DWORD   PhysicalAddress;
    DWORD   VirtualSize;
  } Misc;
  DWORD   VirtualAddress;
  DWORD   SizeOfRawData;
  DWORD   PointerToRawData;
  DWORD   PointerToRelocations;
  DWORD   PointerToLinenumbers;
  WORD    NumberOfRelocations;
  WORD    NumberOfLinenumbers;
  DWORD   Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;
extern int _fmode;

#if 0  
typedef struct  {      /* DOS .EXE header */
    WORD   e_magic;                     /* Magic number */
    WORD   e_cblp;                      /* Bytes on last page of file */
    WORD   e_cp;                        /* Pages in file */
    WORD   e_crlc;                      /* Relocations */
    WORD   e_cparhdr;                   /* Size of header in paragraphs */
    WORD   e_minalloc;                  /* Minimum extra paragraphs needed */
    WORD   e_maxalloc;                  /* Maximum extra paragraphs needed */
    WORD   e_ss;                        /* Initial (relative) SS value */
    WORD   e_sp;                        /* Initial SP value */
    WORD   e_csum;                      /* Checksum */
    WORD   e_ip;                        /* Initial IP value */
    WORD   e_cs;                        /* Initial (relative) CS value */
    WORD   e_lfarlc;                    /* File address of relocation table */
    WORD   e_ovno;                      /* Overlay number */
    WORD   e_res[4];                    /* Reserved words */
    WORD   e_oemid;                     /* OEM identifier (for e_oeminfo) */
    WORD   e_oeminfo;                   /* OEM information; e_oemid specific */
    WORD   e_res2[10];                  /* Reserved words */
    LONG   e_lfanew;                    /* File address of new exe header */
  } IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;
#endif
#if 0
#define IMAGE_DOS_SIGNATURE                 0x5A4D     /* MZ */
#define IMAGE_NT_SIGNATURE                  0x00004550 /* PE00 */
#endif
#define FIELD_OFFSET(type, field)    ((LONG)&(((type *)0)->field))

#define IMAGE_FIRST_SECTION( ntheader ) ((PIMAGE_SECTION_HEADER)        \
    ((DWORD)ntheader +                                                  \
     FIELD_OFFSET( IMAGE_NT_HEADERS, OptionalHeader ) +                 \
     ((PIMAGE_NT_HEADERS)(ntheader))->FileHeader.SizeOfOptionalHeader   \
    ))
     


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

#define IMAGE_SYM_ABSOLUTE            (SHORT)-1        /* Symbol is an absolute value. */






struct filehdr {
  WORD f_magic;	/* magic number			*/
  WORD f_nscns;	/* number of sections		*/
  DWORD f_timdat;	/* time & date stamp		*/
  DWORD f_symptr;	/* file pointer to symtab	*/
  DWORD f_nsyms;	/* number of symtab entries	*/
  WORD f_opthdr;	/* sizeof(optional hdr)		*/
  WORD f_flags;	/* flags			*/
};

#define IMAGE_SIZEOF_SHORT_NAME              8
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

