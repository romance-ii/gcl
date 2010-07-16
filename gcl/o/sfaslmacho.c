#include <alloca.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mach/mach.h>
#include <mach-o/loader.h>
#include <mach-o/reloc.h>
#ifdef __ppc__
#include <mach-o/ppc/reloc.h>
#endif
#include <mach-o/nlist.h>
#include <mach-o/getsect.h>

#include "ptable.h"

#include "sfasli.c"

typedef unsigned long ul;

#define massert(a_) if (!(a_)) FEerror("The assertion ~a on line ~a of ~a in function ~a failed",4,\
                    make_simple_string(#a_),make_fixnum(__LINE__),\
                    make_simple_string(__FILE__),make_simple_string(__FUNCTION__))

static int
parse_file(void *v1,
	   struct section **sec1,struct section **sece,
	   struct nlist **n1,struct nlist **ne,
	   char **st1,ul **io1,
	   ul *s,ul *ma,ul *p) {
 
  struct mach_header *mh;
  struct load_command *lc;
  struct symtab_command *sym=NULL;
  struct dysymtab_command *dsym=NULL;
  struct segment_command *seg;
  struct section *sec;
  ul i,a,fl;
  void *v=v1;

  mh=v;
  v+=sizeof(*mh);
  
  for (i=0,*sec1=NULL,*s=*ma=*p=0;(lc=v) && i<mh->ncmds;i++,v+=lc->cmdsize)
    
    switch(lc->cmd) {
      
    case LC_SEGMENT:
      
      massert(!*sec1);
      
      for (seg=v,*sec1=sec=(void *)(seg+1),*sece=*sec1+seg->nsects;sec<*sece;sec++) {
	
	a=sec->addr+sec->size;
	*s=*s<a ? a : *s;

	a=(1<<sec->align)-1;
	/* *s=(*s+a) & ~a; */
	/* *s+=sec->size; */
	if (*ma<a) *ma=a;

	fl=sec->flags&SECTION_TYPE;
	if (fl==S_NON_LAZY_SYMBOL_POINTERS || fl==S_LAZY_SYMBOL_POINTERS)
	  *p+=sec->size*sizeof(struct relocation_info)/sizeof(void *);
	
      }
      break;
    case LC_SYMTAB:
      massert(!sym);
      sym=v;
      *n1=v1+sym->symoff;
      *ne=*n1+sym->nsyms;
      *st1=v1+sym->stroff;
      break;
    case LC_DYSYMTAB:
      massert(!dsym);
      dsym=v;
      *io1=v1+dsym->indirectsymoff;
      break;
    }
  
  return 0;

}

static int
relocate_symbols(struct nlist *n1,struct nlist *ne,char *st1,ul start) {

  struct nlist *n;
  struct node *nd;

  for (n=n1;n<ne;n++) 
    
    if (n->n_sect) 
      n->n_value+=start; 
    else if ((nd=find_sym_ptable(st1+n->n_un.n_strx))) 
      n->n_value=nd->address; 

  return 0;
  
}

static int
maybe_gen_fake_relocs(void *v1,struct section *sec,void **p,ul *io1) {

  ul fl=sec->flags&SECTION_TYPE,*io;
  struct relocation_info *ri,*re;
  struct scattered_relocation_info *sri;

  if (fl!=S_NON_LAZY_SYMBOL_POINTERS && fl!=S_LAZY_SYMBOL_POINTERS)
    return 0;

  sec->nreloc=sec->size/sizeof(void *);
  sec->reloff=*p-v1;
  ri=*p;
  re=ri+sec->nreloc;
  *p=re;

  io1+=sec->reserved1;
  for (io=io1;ri<re;ri++,io++) {
    
    ri->r_symbolnum=*io;
    ri->r_extern=1;
    ri->r_address=(io-io1)*sizeof(void *);
    ri->r_type=GENERIC_RELOC_VANILLA;
    ri->r_pcrel=0;
    sri=(void *)ri;
    sri->r_scattered=0;
    
  }
  
  return 0;

}

/*sectdiff relocs automatically relative and local*/
static int
skip_sectdiffs(struct relocation_info **rip) {

  struct relocation_info *ri=*rip;
  struct scattered_relocation_info *sri=(void *)ri;

  if (!sri->r_scattered)
    return 0;

  switch(sri->r_type) {
#if defined (__ppc__)
  case PPC_RELOC_SECTDIFF:
  case PPC_RELOC_HI16_SECTDIFF:
  case PPC_RELOC_LO16_SECTDIFF:
  case PPC_RELOC_HA16_SECTDIFF:
  case PPC_RELOC_LO14_SECTDIFF:
  case PPC_RELOC_LOCAL_SECTDIFF:
#else	  
  case GENERIC_RELOC_LOCAL_SECTDIFF:
  case GENERIC_RELOC_SECTDIFF:
#endif
    (*rip)++;
    return 1;
    break;
  default:
      FEerror("Unknown trampoline reloc type",0);
    break;
  }
  
  return 0;

}

/*redirect trampolines gcc-4.0 gives no reloc for stub sections on x86 only*/
static int
maybe_redirect_trampoline(struct relocation_info *ri,
			  ul val,ul rela,
			  struct section *sec1,ul *io1) {

  struct section *js=sec1+ri->r_symbolnum-1;
  ul o;

  if (ri->r_extern)
    return 0;

  if ((js->flags&SECTION_TYPE)!=S_SYMBOL_STUBS)
    return 0;

#ifdef __ppc__
  if (ri->r_type==PPC_RELOC_JBSR)
    o=ri[1].r_address;
#else
  if (ri->r_type==GENERIC_RELOC_VANILLA)
    o=val;
#endif
  else FEerror("Unknown trampoline reloc type",0);
  
  if (ri->r_pcrel) o+=rela;
  o-=js->addr;
  
  massert(!(o%js->reserved2));
  o/=js->reserved2;
  massert(o>=0 && o<js->size/js->reserved2);
  
  ri->r_symbolnum=io1[js->reserved1+o];
  ri->r_extern=1;
  
  return 0;
  
}

static int
relocate(struct relocation_info **rip,ul *q,
	 ul val,ul start,ul rel,
	 struct nlist *n1) {

  struct relocation_info *ri=*rip;
  ul a=ri->r_extern ? n1[ri->r_symbolnum].n_value : 0;

  switch(ri->r_type) {
    
#ifdef __ppc__
  case PPC_RELOC_VANILLA:

    val+=a ? a : start;
    if (ri->r_pcrel) val-=rel;
    *q=val;

    break;

  case PPC_RELOC_JBSR:
    if (ri->r_extern) {

      ul b=0xfc000000;
      
      if (!(a & b)) 
	val=(val&b)|a|0x3;
      else if (!((a-=(ul)q) & b)) 
	val=(val&b)|a|0x1;
      
      *q=val;
      
    }
    (*rip)++;
    break;

#else

  case GENERIC_RELOC_VANILLA:
    
    val=a ? a : val+start;
    if (ri->r_pcrel) val-=rel;
    *q=val;
    
    break;

#endif

  default:
    FEerror("Unknown reloc type\n",0);
    break;
    
  }

  return 0;
  
}  

static int
relocate_section(void *v1,void *d1,
		 struct section *sec1,struct nlist *n1,ul *io1,
		 void *d,struct section *sec) {

  struct relocation_info *ri,*re;
  ul *q,val,rel,start=(ul)d1;

  massert(sec->addr-sec1->addr==d-d1);

  for (ri=v1+sec->reloff,re=ri+sec->nreloc;ri<re;ri++) {
      
    if (skip_sectdiffs(&ri))
      continue;

    q=d+ri->r_address;
    val=*q;
    rel=(ul)(q+1);

    maybe_redirect_trampoline(ri,val,rel-start,sec1,io1);

    /*relative structure preserved*/
    if (!ri->r_extern && ri->r_pcrel)
      continue;
    
    relocate(&ri,q,val,start,rel,n1);
    
  }
  
  return 0;
  
}


static int
relocate_sections(void *v1,void *d1,struct section *sec1,struct section *sece,
		  void **p,ul *io1,struct nlist *n1) {

  ul a;
  struct section *sec;
  void *d;

  for (d=d1,sec=sec1;sec<sece;d+=sec->size,sec++) {
    
    if ((sec->flags&SECTION_TYPE)==S_ZEROFILL) {
      d-=sec->size;
      continue;
    }

    a=(1<<sec->align)-1;
    
    d=(void *)(((ul)d+a) & ~a);
    memcpy(d,v1+sec->offset,sec->size);
    
    maybe_gen_fake_relocs(v1,sec,p,io1);

    relocate_section(v1,d1,sec1,n1,io1,d,sec);

  }

  return 0;

}

int
fasload(object faslfile) {

  FILE *fp;
  object data;
  char filename[256];
  long init_address=-1;
  object memory;
  void *v1,*v,*ve,*d1,*p;
  struct stat ss;
  int l;
  struct section *sec1,*sece;
  struct nlist *n1,*n,*ne;
  char *st1;
  ul s=0,ma=0,*io1,rls;

  coerce_to_filename(faslfile, filename);
  faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
  fp = faslfile->sm.sm_fp;
  l=fileno(fp);

  stat(filename,&ss);
  v=v1=mmap(0,ss.st_size,PROT_READ|PROT_WRITE,MAP_PRIVATE,l,0);
  ve=v1+ss.st_size;

  parse_file(v1,&sec1,&sece,&n1,&ne,&st1,&io1,&s,&ma,&rls);

  memory = alloc_object(t_cfdata);
  memory->cfd.cfd_self = 0;
  memory->cfd.cfd_start = 0;
  memory->cfd.cfd_size = s;
  
  ma=ma>sizeof(char *)-1 ? ma : 0;
  d1=alloc_contblock(memory->cfd.cfd_size+ma);
  d1=(void *)(((ul)d1+ma) & ~ma);
  memory->cfd.cfd_start=d1;

  massert(p=alloca(rls));
  
  relocate_symbols(n1,ne,st1,(ul)d1);

  relocate_sections(v1,d1,sec1,sece,&p,io1,n1);

  SEEK_TO_END_OFILE(fp);
  data = feof(fp) ? 0 : read_fasl_vector(faslfile);
  
#ifdef CLEAR_CACHE
  CLEAR_CACHE;
#endif
  
  for (n=n1;n<ne && strncmp("_init",st1+n->n_un.n_strx,5);n++);
  massert(n<ne);
  init_address=n->n_value-(ul)d1;
  
  munmap(v1,ve-v1);
  close_stream(faslfile);
  
  call_init(init_address,memory,data,0);
  
  if(symbol_value(sLAload_verboseA)!=Cnil)
    printf("start address -T %p ",memory->cfd.cfd_start);
  
  return(memory->cfd.cfd_size);

 }

