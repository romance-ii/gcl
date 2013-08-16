#include <string.h>

#include "windows.h"

typedef unsigned char  uc;
typedef unsigned short us;
typedef unsigned long  ul;

struct filehdr {
  us f_magic;	/* magic number			*/
  us f_nscns;	/* number of sections		*/
  ul f_timdat;	/* time & date stamp		*/
  ul f_ptrsym;	/* file pointer to symtab	*/
  ul f_symnum;	/* number of symtab entries	*/
  us f_opthdr;	/* sizeof(optional hdr)		*/
  us f_flags;	/* flags			*/
};

struct opthdr {
  us h_magic;
  uc h_mlv;
  uc h_nlv;
  ul h_tsize;
  ul h_dsize;
  ul h_bsize;
  ul h_maddr;
  ul h_tbase;
  ul h_dbase;           /* = high 32 bits of ibase for PE32+, magic 0x20b*/
  ul h_ibase;
};

struct scnhdr {
  uc	s_name[8];      /* section name  */
  ul	s_paddr;	/* physical address, aliased s_nlib */
  ul  	s_vaddr;	/* virtual address		*/
  ul  	s_size;	        /* section size			*/
  ul  	s_scnptr;	/* file ptr to raw data for section */
  ul  	s_relptr;	/* file ptr to relocation	*/
  ul  	s_lnnoptr;	/* file ptr to line numbers	*/
  us   	s_nreloc;	/* number of relocation entries	*/
  us   	s_nlnno;	/* number of line number entries*/
  ul  	s_flags;	/* flags			*/
};
#define SEC_CODE 0x20
#define SEC_DATA 0x40
#define SEC_BSS  0x80
#define ALLOC_SEC(sec) (sec->s_flags&(SEC_CODE|SEC_DATA|SEC_BSS))
#define  LOAD_SEC(sec) (sec->s_flags&(SEC_CODE|SEC_DATA))

#define STOP(s_,op_) ({char *_s=s_,_c=_s[8];_s[8]=0;op_;_s[8]=_c;})

struct reloc {
  union {
        ul   r_vaddr;
        ul   r_count;    /* Set to the real count when IMAGE_SCN_LNK_NRELOC_OVFL is set */
    } r;
    ul    r_symndx;
    us    r_type;
} __attribute__ ((packed));
#define R_ABS         0x0000  /* absolute, no relocation is necessary */
#define R_DIR32       0x0006  /* Direct 32-bit reference to the symbols virtual address */
#define R_PCRLONG     0x0014  /* 32-bit reference pc relative  to the symbols virtual address */

struct syment {
  union {
    char n_name[8];
    struct {
      int n_zeroes;
      int n_offset;
    } n;
  } n;
  ul    n_value;
  short n_scnum;
  us    n_type;
  uc    n_sclass;
  uc    n_numaux;
} __attribute__ ((packed));


static int
ovchk(ul v,ul m) {

  m|=m>>1;
  v&=m;

  return (!v || v==m);

}

static int
store_val(ul *w,ul m,ul v) {

  massert(ovchk(v,~m));
  *w=(v&m)|(*w&~m);

  return 0;

}

static int
add_val(ul *w,ul m,ul v) {

  return store_val(w,m,v+(*w&m));

}


static void
relocate(struct scnhdr *sec,struct reloc *rel,struct syment *sym) {

  ul *where=(void *)(sec->s_paddr+rel->r.r_vaddr);

  switch(rel->r_type) {

  case R_ABS:
    break;

  case R_DIR32:
    add_val(where,~0L,sym->n_value);
    /* *where+=sym->n_value; */
    break;

  case R_PCRLONG:
    store_val(where,~0L,sym->n_value-(ul)(where+1));
    /* *where=sym->n_value-(ul)(where+1); */
    break;

  default:
    fprintf(stdout, "%d: unsupported relocation type.", rel->r_type);
    FEerror("The relocation type was unknown",0);

  }

}


static void
find_init_address(struct syment *sym,struct syment *sye,ul *ptr,char *st1) {

  for(;sym<sye;sym++) {

    if (*ptr==0 && sym->n_scnum == 1 && sym->n_value)
      if (!strncmp(sym->n.n.n_zeroes ? sym->n.n_name : st1+sym->n.n.n_offset,"_init_",6))
	*ptr=sym->n_value;

    sym += (sym)->n_numaux;

  }

}    

static void
relocate_symbols(struct syment *sym,struct syment *sye,struct scnhdr *sec1,char *st1) {

  struct node *answ;

  for (;sym<sye;sym++) {

    if (sym->n_scnum>0)
      sym->n_value = sec1[sym->n_scnum-1].s_paddr;

    else if (!sym->n_scnum) {

      if (sym->n.n.n_zeroes)
	STOP(sym->n.n_name,answ=find_sym_ptable(sym->n.n_name));
      else
	answ=find_sym_ptable(st1+sym->n.n.n_offset);

      if (answ) sym->n_value=answ->address;

    }

    sym += (sym)->n_numaux;

  }

}

static object
load_memory(struct scnhdr *sec1,struct scnhdr *sece,void *st) {

  object memory;
  struct scnhdr *sec;
  ul sz;

  BEGIN_NO_INTERRUPT;

  for (sec=sec1,sz=0;sec<sece;sz+=sec->s_size,sec++)
    if (ALLOC_SEC(sec))
      sec->s_paddr=sz;

  memory = alloc_object(t_cfdata);
  memory->cfd.cfd_size=sz;
  memory->cfd.cfd_self=0;
  memory->cfd.cfd_start=0;
  memory->cfd.cfd_start=alloc_contblock(sz);

  for (sec=sec1;sec<sece;sec++) {
    sec->s_paddr+=(ul)memory->cfd.cfd_start;
    if (LOAD_SEC(sec))
      memcpy((void *)sec->s_paddr,st+sec->s_scnptr,sec->s_size);
  }

  END_NO_INTERRUPT;

  return memory;

}

static int
load_self_symbols() {

  FILE *f;
  void *v1,*v,*ve;
  struct filehdr *fhp;
  struct syment *sy1,*sye,*sym;
  struct scnhdr *sec1,*sec,*sece;
  struct opthdr *h;
  struct node *a;
  char *st1,*st;
  ul ns,sl,jj;

  massert(f=fopen(kcl_self,"r"));
  massert(v1=get_mmap(f,&ve));

  v=v1+*(ul *)(v1+0x3c);
  massert(!memcmp("PE\0\0",v,4));

  fhp=v+4;
  h=(void *)(fhp+1);
  massert(h->h_magic==0x10b || h->h_magic==0x20b);
  massert(h->h_magic==0x10b || !h->h_dbase); /*We cannot handle a 64bit load address*/

  sec1=(void *)(fhp+1)+fhp->f_opthdr;
  sece=sec1+fhp->f_nscns;

  sy1=v1+fhp->f_ptrsym;
  sye=sy1+fhp->f_symnum;

  st1=(char *)sye;

  for (ns=sl=0,sym=sy1;sym<sye;sym++) {

    if (sym->n_sclass!=2 || sym->n_scnum<1)
      continue;
    
    ns++;

    if (sym->n.n.n_zeroes)
      STOP(sym->n.n_name,sl+=strlen(sym->n.n_name)+1);
    else
      sl+=strlen(st1+sym->n.n.n_offset)+1;
  
    sym+=sym->n_numaux;

  }

  c_table.alloc_length=c_table.length=ns;
  assert(c_table.ptable=malloc(sizeof(*c_table.ptable)*c_table.alloc_length));
  assert(st=malloc(sl));

  for (a=c_table.ptable,sym=sy1;sym<sye;sym++) {

    if (sym->n_sclass!=2 || sym->n_scnum<1)
      continue;

    if (sym->n.n.n_zeroes)
      STOP(sym->n.n_name,strcpy(st,sym->n.n_name));
    else
      strcpy(st,st1+sym->n.n.n_offset);
    
    sec=sec1+sym->n_scnum-1;
    jj=sym->n_value+sec->s_vaddr+h->h_ibase;
    
#ifdef FIX_ADDRESS
    FIX_ADDRESS(jj);
#endif       
    
    a->address=jj;
    a->string=st;

    a++;
    st+=strlen(st)+1;
    sym+=sym->n_numaux;
    
  }

  qsort(c_table.ptable,c_table.length,sizeof(*c_table.ptable),node_compare);

  massert(!un_mmap(v1,ve));
  massert(!fclose(f));

  return 0;

}

int
seek_to_end_ofile(FILE *fp) {

  void *st,*ve;
  struct filehdr *fhp;
  struct scnhdr *sec1,*sece;
  struct syment *sy1,*sye;
  const char *st1,*ste;
  int i;

  massert(st=get_mmap(fp,&ve));

  fhp=st;
  sec1=(void *)(fhp+1)+fhp->f_opthdr;
  sece=sec1+fhp->f_nscns;
  sy1=st+fhp->f_ptrsym;
  sye=sy1+fhp->f_symnum;
  st1=(void *)sye;
  ste=st1+*(ul *)st1;

  fseek(fp,(void *)ste-st,0);
  while (!(i=getc(fp)));
  ungetc(i, fp);

  massert(!un_mmap(st,ve));

  return 0;

}

object
find_init_string(const char *s) {

  FILE *f;
  struct filehdr *fhp;
  struct scnhdr *sec1,*sece;
  struct syment *sy1,*sym,*sye;
  char *st1,*ste;
  void *st,*est;
  object o;

  massert(f=fopen(s,"r"));
  massert(st=get_mmap(f,&est));

  fhp=st;
  sec1=(void *)(fhp+1)+fhp->f_opthdr;
  sece=sec1+fhp->f_nscns;
  sy1=st+fhp->f_ptrsym;
  sye=sy1+fhp->f_symnum;
  st1=(void *)sye;
  ste=st1+*(ul *)st1;

  for (sym=sy1;sym<sye;sym++) {

    s=sym->n.n.n_zeroes ? sym->n.n_name : st1+sym->n.n.n_offset;
    
    if (!strncmp(s,"_init_",6)) {
      if (sym->n.n.n_zeroes)
	STOP((char *)s,o=make_simple_string(s));
      else
	o=make_simple_string(s);
      massert(!un_mmap(st,&est));
      massert(!fclose(f));
      return o;
    }

  }

  massert(!un_mmap(st,&est));
  massert(!fclose(f));
  massert(!"init not found");

  return NULL;

}  

int
fasload(object faslfile) {

  struct filehdr *fhp;
  struct scnhdr *sec1,*sec,*sece;
  struct syment *sy1,*sye;
  struct reloc *rel,*rele;
  object memory, data;
  FILE *fp;
  char filename[MAXPATHLEN],*st1,*ste;
  int i;
  ul init_address=0;
  void *st,*est;

  coerce_to_filename(faslfile, filename);
  faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
  fp = faslfile->sm.sm_fp;

  massert(st=get_mmap(fp,&est));

  fhp=st;
  sec1=(void *)(fhp+1)+fhp->f_opthdr;
  sece=sec1+fhp->f_nscns;
  sy1=st+fhp->f_ptrsym;
  sye=sy1+fhp->f_symnum;
  st1=(void *)sye;
  ste=st1+*(ul *)st1;

  find_init_address(sy1,sye,&init_address,st1);
	
  memory=load_memory(sec1,sece,st);

  relocate_symbols(sy1,sye,sec1,st1);  
	
  for (sec=sec1;sec<sece;sec++)
    if (sec->s_flags&0xe0)
      for (rel=st+sec->s_relptr,rele=rel+sec->s_nreloc;rel<rele;rel++)
	relocate(sec,rel,sy1+rel->r_symndx);
  
  fseek(fp,(void *)ste-st,0);
  while ((i = getc(fp)) == 0);
  ungetc(i, fp);
  data = read_fasl_vector(faslfile);

  massert(!un_mmap(st,est));
  close_stream(faslfile);

#ifdef CLEAR_CACHE
  CLEAR_CACHE;
#endif

  call_init(init_address,memory,data,0);
	
  if(symbol_value(sLAload_verboseA)!=Cnil)
    printf("start address -T %p ", memory->cfd.cfd_start);

  return(memory->cfd.cfd_size);

}

#include "sfasli.c"
