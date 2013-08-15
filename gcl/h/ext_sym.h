
 
#ifdef HAVE_AOUT 
#undef BSD
#undef ATT
#define BSD  
#include HAVE_AOUT 
#endif

#ifdef _WIN32
#define TEXT_NSCN 1
#define DATA_NSCN 2
#define BSS_NSCN 3
#endif

#ifdef AIX3
#include <a.out.h>
#endif

#ifdef COFF_ENCAPSULATE
#undef BSD
#undef ATT
#define BSD
#include "a.out.encap.h"
#endif

#include "ptable.h"

#ifdef ATT
#define COFF
#ifndef TEXT_NSCN
#define TEXT_NSCN 1
#define DATA_NSCN 2
#define BSS_NSCN 3
#endif
#endif


#ifdef ATT
#include <filehdr.h>
#include <scnhdr.h>
#include <syms.h>
/* is aouthdr.h one always here on sysv
   Interactive systems needs it now at least.   I am not sure if
   the others used to include this...
 */
#include <aouthdr.h>
#define MAXPATHLEN 200
#define N_BADMAG(x)  !(ISCOFF(x.f_magic))
#define N_SYMOFF(x) (x).f_symptr
#define NSYMS(x) (x).f_nsyms  
#include <reloc.h>
#endif




#define RDONLY "r"
 
#ifdef BSD
#define filehdr exec
#ifndef AIX
#ifndef reloc  
#define reloc relocation_info
#endif
#endif
#define NSYMS(f) ((unsigned int )((f).a_syms/(sizeof(struct nlist))))

#ifndef AIX
#define syment nlist
#endif

#ifndef SYMESZ  
#define SYMESZ (sizeof(struct nlist))
#endif

#ifndef  SYMNMLEN
  /* no symbols are directly in the table */
#define SYMNMLEN 0  
#endif

#ifndef  EXT_and_TEXT_BSS_DAT
#define EXT_and_TEXT_BSS_DAT(p) (((p)->n_type & N_EXT) && \
  ((p)->n_type & (N_TEXT | N_DATA | N_BSS)))
#endif

#ifndef SYM_NAME
#define SYM_NAME(x) (my_string_table+(x)->n_un.n_strx)
#endif

#ifndef NUM_AUX  
#define NUM_AUX(p) 0
#endif  

#ifndef N_RELOFF  
#define N_RELOFF(p) (N_TXTOFF(p) +(p).a_text+(p).a_data )
#endif

#define NTYPE(sym) ((sym)->n_type & N_TYPE)

#ifndef N_SECTION
#define N_SECTION(sym) (sym->n_type & N_TYPE & ~N_EXT)
#endif 

#define N_UNDEF N_UNDF
#endif /*end bsd */

#ifdef HPUX
#define nlist nlist_
#undef syment
struct syment {
	long	n_value;
	unsigned char	n_type;
	unsigned char	n_length;
	short	n_almod;
	short	n_unused;
	union { long n_strx;} n_un;
};

#endif /* Hp */

#ifdef COFF /* sys v */
#ifndef EXT_and_TEXT_BSS_DAT
#define EXT_and_TEXT_BSS_DAT(p) \
 ((1 <= (p)->n_scnum) && ((p)->n_scnum <= 3 ) && (p)->n_sclass == C_EXT)
#endif
#define NUM_AUX(p) (p)->n_numaux
#define N_TXTOFF(p)  section[1].s_scnptr
#define SYM_NAME(p) \
  (((p)->n_zeroes == 0) ? \
	    &my_string_table[(p)->n_offset] : \
               ((p)->n_name[SYMNMLEN -1] ? \
				 (strncpy(tem,(p)->n_name,  \
					   SYMNMLEN), \
				  (char *)tem) : \
				  (p)->n_name ))
	     
#define NTYPE(sym) (sym)->n_scnum

#endif /* COFF */



