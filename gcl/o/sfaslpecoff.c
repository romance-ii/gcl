/* 
   Copyright William Schelter. All rights reserved.
   There is a companion file rsym.c which is used to build
   a list of the external symbols in a COFF or A.OUT object file, for
   example saved_kcl.  These are loaded into kcl, and the
   linking is done directly inside kcl.  This saves a good 
   deal of time.   For example a tiny file foo.o with one definition
   can be loaded in .04 seconds.  This is much faster than
   previously possible in kcl.
   The function fasload from unixfasl.c is replaced by the fasload
   in this file.
   this file is included in unixfasl.c
   via #include "../c/sfasl.c\n" 
   */

#define IN_SFASL

#include "gclincl.h"
#include "include.h"

#undef S_DATA

#include "windows.h"
#include "ptable.h"

struct node *find_sym ( PIMAGE_SYMBOL sym, char *name );
int          get_extra_bss ( PIMAGE_SYMBOL sym_table, int length, int start, int *ptr, int bsssize );
void         relocate_symbols ( unsigned int length );
void         set_symbol_address ( PIMAGE_SYMBOL sym, char *string );


IMAGE_RELOCATION relocation_info;

#ifndef MAXPATHLEN
#  define MAXPATHLEN 256
#endif

#define PTABLE_EXTRA 20

#define COFF_SECTIONS 10 /* Numbner of section headers in section header buffer */

#define INVALID_NSCN 64000 /* A number greater than the number of sections ever likely to be read in. */

/* This macro depends on tem being in scope and set up to be SYMNMLEN + 1 characters long. */
#define SYMNMLEN 8
#define SYM_NAME(p) \
    (tem[SYMNMLEN]=0, ((p)->N.Name.Short == 0) ? \
      &my_string_table[(p)->N.Name.Long] : \
      ((p)->N.ShortName[SYMNMLEN-1] ? \
        ( strncpy ( tem, (char *) (p)->N.ShortName,  \
                    SYMNMLEN ), \
          (char *) tem ) : \
        (char *) (p)->N.ShortName ))

/*
 * names of "special" sections
 */
#define _TEXT	    ".text"
#define _DATA	    ".data"
#define _BSS	    ".bss"
#define _STAB	    ".stab"
#define _STABSTR    ".stabstr"
#define _RDATA	    ".rdata"
#define _COMMENT    ".comment"
#define _LIB        ".lib"


#define symbol_table    sfaslp->s_symbol_table
#define start_address   sfaslp->s_start_address
#define my_string_table sfaslp->s_my_string_table
#define extra_bss       sfaslp->s_extra_bss
#define the_start       sfaslp->s_the_start

unsigned int TEXT_NSCN = INVALID_NSCN, DATA_NSCN = INVALID_NSCN,
    BSS_NSCN = INVALID_NSCN, STAB_NSCN = INVALID_NSCN,
    STABSTR_NSCN = INVALID_NSCN, RDATA_NSCN = INVALID_NSCN,
    BIGGEST_NSCN_FOUND = 0;

struct sfasl_info {
    PIMAGE_SYMBOL s_symbol_table;
    char *s_start_address;
    char *s_start_data;
    char *s_start_rdata;
    char *s_start_bss;
    char *s_my_string_table;
    int   s_extra_bss;
    char *s_the_start;
};

struct sfasl_info *sfaslp;

#if 0
#define describe_sym describe_sym1
void describe_sym1 ( int n, int aux_to_go )
{
    char *str;
    char tem[9];
    PIMAGE_SYMBOL sym;
    sym = &symbol_table[n];
    if ( sym->N.Name.Short == 0 ) {
        str = &my_string_table[sym->N.Name.Long];
    } else {
        if ( sym->N.ShortName[SYMNMLEN-1] != 0 ) {
            /* MAKE IT NULL TERMINATED */
            strncpy ( tem, sym->N.ShortName, SYMNMLEN );
            tem[SYMNMLEN] = '\0';
            str = &tem[0];
        } else {
            str = sym->N.ShortName;
        }
    }
    if ( aux_to_go > 0 ) {
        fprintf ( stderr," symbol_table[%3d] (%8x): auxiliary entry (%d to go)\n", n, &symbol_table[n], aux_to_go - 1 ); 
    } else {
        if ( sym->N.Name.Short == 0 ) {
            fprintf ( stderr,
                      "symbol_table[%3d] (%8x) (%22s): "
                      "n_offset %x, n_value %x, n_scnum %d, n_type %d, "
                      "n_sclass %d, n_numaux %d\n",
                      n,
                      &symbol_table[n],
                      str,
                      symbol_table[n].N.Name.Long,
                      symbol_table[n].Value,
                      symbol_table[n].SectionNumber,
                      symbol_table[n].Type,
                      symbol_table[n].StorageClass,
                      symbol_table[n].NumberOfAuxSymbols );
        } else {
            fprintf ( stderr,
                      "symbol_table[%3d] (%8x) (%22s): "
                      "n_value %x, n_scnum %d, n_type %d, "
                      "n_sclass %d, n_numaux %d\n",
                      n,
                      &symbol_table[n],
                      str,
                      symbol_table[n].Value,
                      symbol_table[n].SectionNumber,
                      symbol_table[n].Type,
                      symbol_table[n].StorageClass,
                      symbol_table[n].NumberOfAuxSymbols );
        }
    }
}
#endif

/* This function does the low level relocation. */
void relocate()
{
    char *where = the_start + relocation_info.VirtualAddress;
    
    if ( relocation_info.Type != IMAGE_REL_I386_ABSOLUTE ) {
        switch ( relocation_info.Type ) {
        case IMAGE_REL_I386_DIR32:
            *(int *) where = *( (int *) where ) + 
                symbol_table [ relocation_info.SymbolTableIndex ].Value;
            break;
            
        case IMAGE_REL_I386_REL32:
            /* the following is logical, except the address offset is
               not where the 'where' is but where the 'call' is just
               AFTER the 'where'.
               */
            *(int *) where = symbol_table [relocation_info.SymbolTableIndex ].Value
                - (int) where - sizeof ( int * );
            break;

        default:
            fprintf ( stderr, "%d: unsupported relocation type.\n",
                      relocation_info.Type );
            FEerror ( "The relocation type was unknown\n", 0 );
        }
    }
}

/* Loop through the section headers to determine the index fo each section header
 * This is needed because depending on the compiler flags, different sections
 * can be at different indices, eg if stabs output is not present then .rdata
 * is adjacent to .bss (index 3), rather than after .stabstr (index 6).
 * This will make it easier to handle object files from other compilers than
 * our old friend gcc too, for example Visual C++.
 */
static void work_out_section_indices ( PIMAGE_SECTION_HEADER section )
{
    unsigned int i;

    /* Initialise the global *_NSCN variables to INVALID_NSCN */
    TEXT_NSCN = DATA_NSCN = BSS_NSCN = STAB_NSCN = STABSTR_NSCN = RDATA_NSCN = INVALID_NSCN;
    
    for ( i = 1; i < COFF_SECTIONS; i++ ) {
        if ( strcmp(section[i].Name, _TEXT) == 0 ) {
            TEXT_NSCN = i;
            if ( i > BIGGEST_NSCN_FOUND ) BIGGEST_NSCN_FOUND = i;
        }
        if ( strcmp(section[i].Name, _DATA) == 0 ) {
            DATA_NSCN = i;
            if ( i > BIGGEST_NSCN_FOUND ) BIGGEST_NSCN_FOUND = i;
        }
        if ( strcmp(section[i].Name, _BSS ) == 0 ) {
            BSS_NSCN = i;
            if ( i > BIGGEST_NSCN_FOUND ) BIGGEST_NSCN_FOUND = i;
        }
        if ( strcmp(section[i].Name, _STAB ) == 0 ) {
            STAB_NSCN = i;
            if ( i > BIGGEST_NSCN_FOUND ) BIGGEST_NSCN_FOUND = i;
        }
        if ( strcmp(section[i].Name, _STABSTR) == 0 ) {
            STABSTR_NSCN = i;
            if ( i > BIGGEST_NSCN_FOUND ) BIGGEST_NSCN_FOUND = i;
        }
        if ( strcmp(section[i].Name, _RDATA) == 0 ) {
            RDATA_NSCN = i;
            if ( i > BIGGEST_NSCN_FOUND ) BIGGEST_NSCN_FOUND = i;
        }
    }
}

int fasload ( object faslfile )
{
    long fasl_vector_start;
    struct sfasl_info sfasl_info_buf;
    IMAGE_FILE_HEADER fileheader;
    IMAGE_SECTION_HEADER section[COFF_SECTIONS];
    IMAGE_OPTIONAL_HEADER optional_header;
    int textsize = 0, datasize = 0, bsssize = 0, stabsize = 0,
        stabstrsize = 0, rdatasize = 0, nsyms = 0;
    object memory, data;
    FILE *fp;
    char filename[MAXPATHLEN];
    int i;
    int init_address=0;
    int aux_to_go = 0;
    size_t sections_read = 0;
    object *old_vs_base = vs_base;
    object *old_vs_top = vs_top;

    /* Zero out the COFF section header storage space */    
    memset ( section, 0, COFF_SECTIONS * sizeof ( IMAGE_SECTION_HEADER ) );

    sfaslp = &sfasl_info_buf;

    extra_bss = 0;
    coerce_to_filename ( faslfile, filename );
    faslfile = open_stream (faslfile, smm_input, Cnil, sKerror );
    vs_push ( faslfile );
    fp = faslfile->sm.sm_fp;

    /* Read the object file header */
    if ( !fread ( (char *) &fileheader, sizeof ( IMAGE_FILE_HEADER ), 1, fp ) ) {
        FEerror("Could not get the header",0);
    }
    nsyms = fileheader.NumberOfSymbols;

    /* Read the optional object file header */
    fread ( &optional_header, 1, fileheader.SizeOfOptionalHeader, fp );

    /* Read the object file section headers */
    if ( fileheader.NumberOfSections > ( COFF_SECTIONS - 1 ) ) {
        FEerror("Too many section headers to be read into the static storage space", 0);
    }
    sections_read = fread ( &section[1],
                            sizeof ( IMAGE_SECTION_HEADER ),
                            fileheader.NumberOfSections,
                            fp );
    if ( sections_read != fileheader.NumberOfSections ) {
        fprintf ( stderr, "Could not get the expected number of sections (%d), got %d\n",
		  fileheader.NumberOfSections, sections_read );
	fflush ( stderr );
    }

    /* For platforms which have variable section header offsets/indices,
     * work out the indices. */
    work_out_section_indices ( section );


    /* Check for text section that does not come first - not currently handled. */
    if ( ( INVALID_NSCN != TEXT_NSCN ) && ( TEXT_NSCN != 1 ) ) {
        FEerror ("Can't handle a Text section at other than index 1.",0);
    }

    /* Determine the section sizes used later to allocate storage and to calculate
     * the offsets of the sections once read in. Allow for the possibility
     * of an invalid index, that is, that a section may not be present. */
    if ( INVALID_NSCN != TEXT_NSCN ) {
        textsize = section[TEXT_NSCN].SizeOfRawData;
    }
    if ( INVALID_NSCN != DATA_NSCN ) {
        datasize = section[DATA_NSCN].SizeOfRawData;
    }
    if ( INVALID_NSCN != BSS_NSCN ) {
        bsssize = section[BSS_NSCN].SizeOfRawData;
    }
    if ( INVALID_NSCN != STAB_NSCN ) {
        stabsize = section[STAB_NSCN].SizeOfRawData;
    }
    if ( INVALID_NSCN != STABSTR_NSCN ) {
        stabstrsize = section[STABSTR_NSCN].SizeOfRawData;
    }
    if ( INVALID_NSCN != RDATA_NSCN ) {
        rdatasize = section[RDATA_NSCN].SizeOfRawData;
    }

    /* Allocate space for the symbol table */
    symbol_table =
        (PIMAGE_SYMBOL) OUR_ALLOCA ( sizeof ( IMAGE_SYMBOL ) *
                                     (unsigned int) nsyms );
    memset ( symbol_table, 0, sizeof ( IMAGE_SYMBOL ) * (unsigned int) nsyms );
    /* move the file pointer to the start of the symbol table */
    fseek ( fp, (int) fileheader.PointerToSymbolTable,  0 );

    /* Read the symbol table */
    for (i = 0;  i < nsyms;  i++) {
        fread ( (char *) &symbol_table[i], sizeof ( IMAGE_SYMBOL ), 1, fp );
    }

    {
        int ii=0;
	if ( !fread ( (char *) &ii, sizeof(int), 1, fp ) ) {
            FEerror ( "The string table of this file did not have any length",
                      0 );
        }
        fseek ( fp, -4, 1 ); 
        /* at present the string table is located just after the symbols */
        my_string_table = OUR_ALLOCA ( (unsigned int) ii );
        memset ( my_string_table, 0, ii );
        if ( ii != fread ( my_string_table, 1, ii, fp ) ) {
            FEerror ( "Could not read whole string table", 0 );
	}

#ifdef SEEK_TO_END_OFILE

	SEEK_TO_END_OFILE(fp);

#else

	/* Go to the end of the C compiler generated object data
	   in preparation for loading the GCL fasl data. */
	{
            struct filehdr fileheader;
            int i;
            fseek ( fp, 0, 0 );
            fread ( &fileheader, sizeof ( fileheader ), 1, fp );
            fseek ( fp, fileheader.f_symptr + fileheader.f_nsyms * SYMESZ, 0 );
            fread ( &i, sizeof ( i ), 1, fp );
            fseek ( fp, i - sizeof ( i ), 1 );
            while ( ( i = fgetc ( fp ) ) == 0 );
            ungetc ( i, fp );
	}

#endif

        /* point at the GCL fasl data */
	fasl_vector_start = ftell ( fp );

        if ( ! ( (c_table.ptable) && *(c_table.ptable) ) ) {
            build_symbol_table();
        }

        /* figure out if there is more bss space needed */
	extra_bss = 
            get_extra_bss ( symbol_table,
                            nsyms,
                            datasize + textsize + bsssize +
                            stabsize + stabstrsize + rdatasize,
                            &init_address,
                            bsssize );
	
        /* allocate some memory */
	{
            BEGIN_NO_INTERRUPT;
            memory = alloc_object ( t_cfdata );
            memory->cfd.cfd_self = 0;
            memory->cfd.cfd_start = 0;
            memory->cfd.cfd_size =
                datasize + textsize + bsssize +
                    stabsize + stabstrsize + rdatasize + extra_bss;
            vs_push ( memory );
            the_start = start_address =        
                memory->cfd.cfd_start =	
                    alloc_contblock ( memory->cfd.cfd_size );
            sfaslp->s_start_data  = start_address + textsize;
            sfaslp->s_start_rdata = sfaslp->s_start_data + datasize
                + stabsize + stabstrsize;
            sfaslp->s_start_bss   = sfaslp->s_start_rdata + rdatasize;
            END_NO_INTERRUPT;
        }
	
	/* This currently goes to section 1's raw data so should be fixed. */
	if ( fseek ( fp, section[1].PointerToRawData, 0) < 0 ) {
            FEerror ( "file seek error", 0 );
        }
	SAFE_FREAD ( the_start,
		     textsize + datasize + stabsize + stabstrsize + rdatasize,
		     1, fp );

        /* Relocate the actual loaded text by looking up symbols in c.ptable
	   and adding new externals to that c.table. */
	relocate_symbols ( fileheader.NumberOfSymbols );  
	
        {
            int j = 0;
            for ( j = 1; j <= BIGGEST_NSCN_FOUND ; j++ ) {
                if ( ( j == TEXT_NSCN || j == DATA_NSCN || j == RDATA_NSCN ) &&
		     ( 0 != section[j].NumberOfRelocations ) ) {
                    fseek ( fp, section[j].PointerToRelocations, 0 );
                    if ( j == TEXT_NSCN ) {
                        the_start = memory->cfd.cfd_start;
		    } else {
                        if ( j == DATA_NSCN ) {
                            the_start = sfaslp->s_start_data;
                        } else {
                            if ( j == RDATA_NSCN ) {
                                the_start = sfaslp->s_start_rdata;
                            } else {
                                the_start = 0;
                                FEerror ( "The_start was set to 0.\n", 0 );
                            }
                        }
		    }
                    for ( i=0; i < section[j].NumberOfRelocations; i++ ) {
		        fread ( &relocation_info, sizeof ( IMAGE_RELOCATION ), 1, fp );
                        relocate() ;
                    }
                }
            }
        }

        /* Finished relocation, read in the fasl vector. */
	fseek ( fp, fasl_vector_start, 0 );
        if ( feof ( fp ) ) {
            data = 0;
        } else {
            data = read_fasl_vector ( faslfile );
            vs_push ( data );
	}
	close_stream ( faslfile );

	ALLOCA_FREE ( my_string_table );
	ALLOCA_FREE ( symbol_table );
	call_init ( init_address, memory, data, 0 );
        vs_base = old_vs_base;
	vs_top  = old_vs_top;
        if ( symbol_value ( sLAload_verboseA ) != Cnil ) {
            printf("start address -T %x ", memory->cfd.cfd_start);
        }
	return ( memory->cfd.cfd_size );
    }
}

int get_extra_bss ( PIMAGE_SYMBOL sym_table, int length, int start, int *ptr, int bsssize )
{
    int result = start;
    PIMAGE_SYMBOL end, sym;

    end = sym_table + length;

    for ( sym = sym_table; sym < end; sym++ ) {
        /* The C compiler optimiser sometimes moves object initialisation
           code around. */
        if ( ( *ptr == 0 ) && ( sym->SectionNumber == TEXT_NSCN ) && sym->Value ) {
            char tem [SYMNMLEN+1];
            char *str = SYM_NAME ( sym );
            if ( str[1] == 'i' && str[2] == 'n' && str[3] == 'i' &&
                 str[4] == 't' && str[5] == '_' && str[0] == '_' ) {
                *ptr=  sym->Value ;
            }
        }
        if ( 0 ) {
            /* what we really want is
               if (sym->n_scnum==0 && sym->n_sclass == C_EXT
               && !(bsearch(..in ptable for this symbol)))
               Since this won't allow loading in of a new external array
               char foo[10]  not ok
               static foo[10] ok.
               for the moment we give undefined symbol warning..
               Should really go through the symbols, recording the external addr
               for ones found in ptable, and for the ones not in ptable
               set some flag, and add up the extra_bss required.  Then
               when you have the new memory chunk in hand,
               you could make the pass setting the relative addresses.
               for the ones you flagged last time.
               */
            /* external bss so not included in size of bss for file */
            int val = sym->Value;
            if ( val && c_table.ptable && ( 0 == find_sym ( sym, 0 ) ) ) {
                sym->Value=result;
                result += val;
            }
        }
        
        sym += sym->NumberOfAuxSymbols; 

    }
    return ( result-start );
}



/* Go through the symbol table changing the addresses of the symbols
   to reflect the current cfd_start */
void relocate_symbols ( unsigned int length )
{
    PIMAGE_SYMBOL end, sym;
    unsigned int typ;
    char *str;
    char tem[SYMNMLEN+1];
    int  Value = (int) start_address;
    
    end = symbol_table + length;
    for ( sym = symbol_table; sym < end; sym++ ) {
        typ = sym->SectionNumber;

	if ( typ == TEXT_NSCN || typ == DATA_NSCN ||
	     typ == RDATA_NSCN || typ == BSS_NSCN ) {

            if ( typ == TEXT_NSCN )  Value = (int) start_address;
            if ( typ == DATA_NSCN )  Value = (int) sfaslp->s_start_data;
            if ( typ == RDATA_NSCN ) Value = (int) sfaslp->s_start_rdata;
            if ( typ == BSS_NSCN )   Value = (int) sfaslp->s_start_bss;

            str = SYM_NAME ( sym );
            sym->Value = Value;
            
        } else {
            if ( typ == 0 ) {
                str = SYM_NAME ( sym );
                set_symbol_address ( sym, str );
            } else {
                fprintf ( stderr,
                          "relocate_symbols: am ignoring section number %d (%s)\n",
                          sym->SectionNumber,
                          SYM_NAME ( sym ) );
                fflush ( stderr );
            }
        }
        sym += sym->NumberOfAuxSymbols;
    }
}

/* 
   STEPS:
   1) read in the symbol table from the file,
   2) go through the symbol table, relocating external entries.
   3) for i <=2 go thru the relocation information for this section
   relocating the text.
   4) done.
   */

struct node *find_sym ( PIMAGE_SYMBOL sym, char *name )
{
    char tem[SYMNMLEN+1];
    if ( name == NULL ) {
        name = SYM_NAME ( sym );
    }
    return ( find_sym_ptable ( name ) );
}

void set_symbol_address ( PIMAGE_SYMBOL sym, char *string )
{
    struct node *answ;
    if ( c_table.ptable ) {
        answ = find_sym ( sym, string );
        if ( answ ) {
            sym->Value = answ->address - sym->Value;
            /* for symbols in the local  data,text and bss this gets added
               on when we add the current value */
        } else {
            fprintf ( stdout,"undefined %s symbol", string );
            fflush ( stdout );
        }
    } else {
        FEerror ( "symbol table not loaded", 0 );
    }
}

/* include the machine independent stuff */
#include "sfasli.c"
