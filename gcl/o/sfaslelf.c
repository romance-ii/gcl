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


#ifndef __linux__
#define ELF_TARGET_SPARC 1
#endif

/* #include "include.h" */
#include "ext_sym.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>


#include <elf.h>

#include "gclincl.h"
#ifdef HAVE_LIBBFD
#include <bfd.h>
#endif

#ifdef STAND
#include "include.h"

#define FEerror(a...) do {fprintf(stderr,##a);exit(1);} while (0)
#endif

static void relocate_symbols(Elf32_Sym *sym,int nsyms,int nscns, int *init_address_ptr);
static void relocate(Elf32_Sym *symbol_table,Elf32_Rela
*reloc_info,Elf32_Word sh_type);


#ifdef STAND
char *kcl_self,*system_directory;
main(argc,argv)
     char *argv[];
{char *file ;
 file = argv[1];
 kcl_self = argv[2];
 system_directory = argv[3];
/*   _fmode = O_BINARY; */
 fasload(file);
 return 0;
}

node_compare(node1,node2)
char *node1, *node2;
{ return(strcmp( ((struct node *)node1)->string,
	         ((struct node *)node2)->string));}



read_special_symbols(symfile)
char *symfile;
{FILE *symin;
 char *symbols;
 int i,jj;
 struct lsymbol_table tab;
 if (!(symin=fopen(symfile,"r")))
   {perror(symfile);exit(1);};
 if(!fread((char *)&tab,sizeof(tab),1,symin))
   FEerror("No header",0,0);
 symbols=malloc(tab.tot_leng);
 c_table.alloc_length=( (PTABLE_EXTRA+ tab.n_symbols));
 (c_table.ptable) = (TABL *) malloc(sizeof(struct node) * c_table.alloc_length);
 if (!(c_table.ptable)) {perror("could not allocate"); exit(1);};
 i=0; c_table.length=tab.n_symbols;
 while(i < tab.n_symbols)
   { fread((char *)&jj,sizeof(int),1,symin);
     (SYM_ADDRESS(c_table,i))=jj;
     SYM_STRING(c_table,i)=symbols;
 
     while( *(symbols++) =   getc(symin)) 
       {;}
/*     dprintf( name %s ,  SYM_STRING(c_table,i));
     dprintf( addr %d , jj);
*/
     i++;
   }

 /*
   for(i=0;i< 5;i++)
   {printf("Symbol: %d %s %d \n",i,SYM_STRINGN(c_table,i),
   SYM_ADDRESS(*ptable,i));}
   */
}

#endif

static Elf32_Ehdr *file_h;
static Elf32_Shdr *section_h;

static struct sect *section;
static char *string_table;
static char *section_names;
static int text_index;
struct sect {int start;
      };

static int symsize;

char *the_start,*start_address;


#define SECTION_H(n) \
     (*(Elf32_Shdr *) ((char *) section_h + file_h->e_shentsize * (n)))


/* align for power of two n */
static void *
round_up(address,n)
     unsigned int address,n;
{
 return  (void *)((address + n -1) & ~(n-1)) ;
}
#define ROUND_UP(a,b) round_up(a,b) 

int use_mmap;


fasload(faslfile)
     object faslfile;
{  FILE *fp;
   object data;
   char filename[256];
   Elf32_Shdr *shp;
   int file;
   struct stat stat_buf;
#ifndef STAND
   object     * old_vs_base =   vs_base ;
   object     * old_vs_top =   vs_top ;
#endif
   int symtab_index,j;
   int nsyms;
   int init_address=-1;
   int extra_bss=0;
   object memory;
   caddr_t base;

   int current = 0,max_align = 0;
   struct sect section_org[40];
   Elf32_Sym *symbol_table;

   section = section_org;

#ifdef STAND
   strcpy(filename,(char *)faslfile);
   fp=fopen(filename,RDONLY);
#else
   coerce_to_filename(faslfile, filename);
   faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
   fp = faslfile->sm.sm_fp;
#endif	

       
   file = fileno(fp);

   if (fstat (file, &stat_buf) == -1)
     FEerror ("Can't fstat(~a): errno %d\n", 1,faslfile);


   if (use_mmap) {
     base = mmap (0, stat_buf.st_size,PROT_READ|PROT_WRITE, MAP_PRIVATE, file, 0); } else {

   base = malloc(stat_buf.st_size);
   fread(base,1,stat_buf.st_size,fp);
   fseek(fp,0,SEEK_CUR);
     }

   

   if (base == (caddr_t) -1)
     FEerror ("Can't mmap(~a):",1,faslfile);

   file_h = (Elf32_Ehdr *) base;

   section_h = (Elf32_Shdr *) ((char *) base + file_h->e_shoff);

   /* The file has non-ELF stuff appended.  We need to know
      where the ELF stuff ends.  To do this we must look at all
      sections because there is no guaranteed order in an ELF
      file.
      */
  
   section_names = (char *) base
     + SECTION_H(file_h->e_shstrndx).sh_offset;

   symtab_index = get_section_number(".symtab");
   text_index = get_section_number(".text");

   /* calculate how much room is needed to align all the sections
    appropriately, and at what offsets they will be read in, presuming
    that the begin of the memory is aligned on max_align */
   for (j=1 ; j <  file_h->e_shnum ; j++)
      { 
	if ((SECTION_H(j).sh_flags & SHF_ALLOC)
	    && (SECTION_H(j).sh_type == SHT_PROGBITS
		|| SECTION_H(j).sh_type == SHT_NOBITS)
		)

	  { if (SECTION_H(j).sh_addralign > max_align)
	      max_align = SECTION_H(j).sh_addralign;
	    current = (int) ROUND_UP(current,SECTION_H(j).sh_addralign);
	    section[j].start = current;
	    current += SECTION_H(j).sh_size;
	  }
	else section[j].start=0;
      }
	    
   
   shp = &SECTION_H(symtab_index);
   symbol_table = (void *) base + shp->sh_offset;
   nsyms = shp->sh_size/shp->sh_entsize;
   symsize = shp->sh_entsize;

   string_table = base + SECTION_H(get_section_number(".strtab")).sh_offset;

   /* seek to end of old file */
   SEEK_TO_END_OFILE(fp);

   if (!((c_table.ptable) && *(c_table.ptable)))
     build_symbol_table();

   extra_bss = 0;


#ifndef STAND
   memory = alloc_object(t_cfdata);
   memory->cfd.cfd_self = 0;
   memory->cfd.cfd_start = 0;
   memory->cfd.cfd_size = current + (max_align > sizeof(char *) ?
				     max_align :0);
   
   the_start=start_address=        
     memory->cfd.cfd_start =	
       alloc_contblock(memory->cfd.cfd_size);
#else
   memory=(object)malloc(sizeof(*memory));
   memory->cfd.cfd_self = 0;
   memory->cfd.cfd_start = 0;
   memory->cfd.cfd_size = current + (max_align > sizeof(char *) ?
				     max_align :0);
   the_start=start_address=memory->cfd.cfd_start=
     malloc(memory->cfd.cfd_size + 0x80000);
   the_start=start_address= (char *)(0x1000 * 
				     ((((int)the_start + 0x70000) + 0x1000)/0x1000));
#endif

    /* make sure the memory is aligned */
   start_address = ROUND_UP(start_address,max_align);
   memory->cfd.cfd_size = memory->cfd.cfd_size - (start_address - the_start);
   memory->cfd.cfd_start = start_address;	

   for (j=1 ; j <  file_h->e_shnum ; j++)
      { if ((SECTION_H(j).sh_flags & SHF_ALLOC)
	    && (SECTION_H(j).sh_type == SHT_PROGBITS
		))
	  { 
	    bcopy(base + SECTION_H(j).sh_offset,start_address + section[j].start,
		  SECTION_H(j).sh_size);
	  }
      }
   
   relocate_symbols(symbol_table,nsyms,file_h->e_shnum,&init_address);
   if (init_address < 0)
     { FEerror(0,"Init address not found ");
     }

   { int rel_stab_index = -1;
     int j=0;
     for (j=1 ; j <  file_h->e_shnum ; j++)
       {
	 shp = &SECTION_H(j); 
	 if ((shp->sh_type == SHT_RELA || shp->sh_type == SHT_REL) &&
	     shp->sh_info<file_h->e_shnum &&
	     (SECTION_H(shp->sh_info).sh_flags & SHF_ALLOC))
	   {
	     int index_to_relocate = shp->sh_info;
	     if (symtab_index != shp->sh_link)
	       FEerror("unexpected symbol table used");
	     the_start = start_address + section[index_to_relocate].start;
	   }
/*  	 else if (shp->sh_type == SHT_REL */
/*  	     && (SECTION_H(shp->sh_info).sh_flags & SHF_ALLOC)) */
/*  	   { */
/*  	     int index_to_relocate = shp->sh_info; */
/*  	     if (symtab_index != shp->sh_link) */
/*  	       FEerror("unexpected symbol table used"); */
/*  	     the_start = start_address + section[index_to_relocate].start; */
/*  	   } */
	 
	 else if ( (shp->sh_type == SHT_REL) || (shp->sh_type == SHT_RELA) )
	   {  if (get_section_number(".rel.stab") == j)
	         continue;
	     FEerror("unknown rel type");
	   }
	 else
	   continue;
	 {
	   int k=0;
	   char *rel = (char *) base +   shp->sh_offset;
	   for (k= 0; k< shp->sh_size ; k+= shp->sh_entsize) 
	     relocate(symbol_table,(Elf32_Rela *)(rel + k),shp->sh_type);
	 }
       }
   }

#ifdef STAND
   {FILE *out;char pad=0;
   out=fopen("/tmp/sfasltest","wb");
   for (j=1 ; j <  file_h->e_shnum ; j++)
     if ((SECTION_H(j).sh_flags & SHF_ALLOC) && (SECTION_H(j).sh_type == SHT_PROGBITS))
       memcpy(base+SECTION_H(j).sh_offset,start_address+section[j].start,SECTION_H(j).sh_size);
   fwrite((char *)base, stat_buf.st_size, 1, out);
   fclose(out);}
   printf("\n(start %x)\n",start_address);
#else   

   SEEK_TO_END_OFILE(fp);

   /*   init_address += section[text_index].start ; */
   
   if (feof(fp))
     data=0;
   else
   /* after hear any of the 'static' variables must not be
      referred to any more */
     data = read_fasl_vector(faslfile);

  if (use_mmap) 
   munmap(base, stat_buf.st_size);
   else
   free(base);
  
  close_stream(faslfile);

#ifdef CLEAR_CACHE
   CLEAR_CACHE;
#endif

   call_init(init_address,memory,data,0);
	
   vs_base = old_vs_base;
   vs_top = old_vs_top;

   if(symbol_value(sLAload_verboseA)!=Cnil)
     printf("start address -T %x ",memory->cfd.cfd_start);
   return(memory->cfd.cfd_size);

#endif /* STAND */

 }


get_section_number(name)
     char *name;
     
{int k ;
 for (k = 1; k < file_h->e_shnum;
      k++)
   {
     if (!strcmp (section_names + SECTION_H(k).sh_name,
		  name))
       return k;
   }
/* fprintf(stderr,"could not find section %s\n", name); */
 return 0;
}

static void
relocate_symbols(sym,nsyms,nscns,init_address_ptr)
 Elf32_Sym *sym;
 int nsyms;
 int nscns;
 int *init_address_ptr; /* offset of init_address */
{  int siz = symsize;
  while (--nsyms >= 0)
    { switch(ELF32_ST_BIND(sym->st_info))
	{ case STB_LOCAL:
	    if (sym->st_shndx == SHN_ABS || sym->st_shndx >= nscns) break;
	
	    if ((SECTION_H(sym->st_shndx).sh_flags & SHF_ALLOC) == 0)
	      {
		switch (SECTION_H(sym->st_shndx).sh_type)
		  {
		  case SHT_NULL:
		  case SHT_PROGBITS:
		  case SHT_NOTE:
		  case SHT_STRTAB:
		    /* These occur in Linux.
		       Ignore symbols for such sections. */
		    break;
		  default:
		    printf("[unknown rel secn %d type=%d]",
			   sym->st_shndx,
			   SECTION_H(sym->st_shndx).sh_type);
		  }
	      }
	    else
	      sym->st_value += (int) (start_address + section[sym->st_shndx].start); 
	    break;
	  case STB_GLOBAL:
	 if (sym->st_shndx == SHN_UNDEF
	     || sym->st_shndx == SHN_COMMON
	     )
	   {  set_symbol_address(sym,string_table + sym->st_name);
	    }
	    else
	      if (sym->st_shndx == text_index &&
		  bcmp("init_",string_table + sym->st_name,4) == 0)
		{
		  *init_address_ptr = sym->st_value;

		  }
	    else	
	      {printf("[unknown global sym %s]",string_table + sym->st_name);}
	    break;
	  default:
	    {printf("[unknown bind type %s]",ELF32_ST_BIND(sym->st_info));}
	  }
      sym = (void *)sym + siz;
    }
}


#ifdef HAVE_LIBBFD

typedef struct {
  unsigned int type;
  reloc_howto_type *h;
} mtbl;

int in_bfd_init=0;

static void
do_bfd_reloc(unsigned int oc,unsigned int val,
	     unsigned int *where) {

  static bfd *dum;
  static reloc_howto_type * m[BFD_RELOC_UNUSED];
  reloc_howto_type *h;

  if (!m[0]) {

    bfd_reloc_code_real_type t;

    in_bfd_init=1;

    bfd_init();

    if (!(dum=bfd_openr("/dev/null",NULL)))
      FEerror("Cannot open dummy bfd\n");

    for (t=BFD_RELOC_UNUSED;t>_dummy_first_bfd_reloc_code_real;t--) 
      if ((h=bfd_reloc_type_lookup(dum,t)))
	m[h->type]=h;
      
    in_bfd_init=0;

  }

  if (oc>=BFD_RELOC_UNUSED || !m[oc])
    FEerror("Cannot lookup type %u\n",oc);
  h=m[oc];

  if (h->pc_relative)
    val-=(unsigned int)where;

  val>>=h->rightshift;
  val<<=h->bitpos;
/*    *where = ( (*where & ~h->dst_mask) |  */
/*  	     (((*where & h->src_mask) +  val) & h->dst_mask)); */

#define DOIT(x) \
  x = ( (x & ~h->dst_mask) | (((x & h->src_mask) +  val) & h->dst_mask))

  switch (h->size) {
  case 0:
    {
      char x = bfd_get_8 (dum, (char *) where);
      DOIT (x);
      bfd_put_8 (dum, x, (unsigned char *) where);
    }
    break;

  case 1:
    {
      short x = bfd_get_16 (dum, (bfd_byte *) where);
      DOIT (x);
      bfd_put_16 (dum, (bfd_vma) x, (unsigned char *) where);
    }
    break;
  case 2:
    {
      long x = bfd_get_32 (dum, (bfd_byte *) where);
      DOIT (x);
      bfd_put_32 (dum, (bfd_vma) x, (bfd_byte *) where);
    }
    break;
  case -2:
    {
      long x = bfd_get_32 (dum, (bfd_byte *) where);
      val = -val;
      DOIT (x);
      bfd_put_32 (dum, (bfd_vma) x, (bfd_byte *) where);
    }
    break;
    
  case -1:
    {
      long x = bfd_get_16 (dum, (bfd_byte *) where);
      val = -val;
      DOIT (x);
      bfd_put_16 (dum, (bfd_vma) x, (bfd_byte *) where);
    }
    break;
    
  case 3:
    /* Do nothing */
    break;
    
  case 4:
#ifdef BFD64
    {
      bfd_vma x = bfd_get_64 (dum, (bfd_byte *) where);
      DOIT (x);
      bfd_put_64 (dum, x, (bfd_byte *) where);
    }
#else
    FEerror("Bad howto size %u\n",h->size);
    /*        abort (); */
#endif
    break;
  default:
    FEerror("Bad howto size %u\n",h->size);
    break;
  }
  
}

#endif /* HAVE_LIBBFD */

static void
relocate(symbol_table,reloc_info,sh_type)
Elf32_Rela *reloc_info;
Elf32_Sym *symbol_table;
Elf32_Word sh_type;
{
  char *where ;
  {
    unsigned int new_value;
    unsigned int a,b,p,s,val;

    if (sh_type == SHT_RELA)
      a = reloc_info->r_addend;
    else if (sh_type == SHT_REL)
      a = 0;
    else
      FEerror("relocate() error: unknown sh_type in ELF object");
    b = (unsigned int) the_start;
    s = symbol_table[ELF32_R_SYM(reloc_info->r_info)].st_value;
/*      printf("Doing %s\n",string_table + symbol_table[ELF32_R_SYM(reloc_info->r_info)].st_name); */
    where = the_start + reloc_info->r_offset;
    p = (unsigned int) where;


#define MASK(n) (~(~0 << (n)))
#define STORE_VAL(where, mask, val) \
    *(unsigned int *)where = ((val & mask) | ((*(unsigned int *)where) & ~mask))
#define ADD_VAL(where, mask, val) \
    *(unsigned int *)where += ((val & mask) | ((*(unsigned int *)where) & ~mask))

#ifdef HAVE_LIBBFD
    do_bfd_reloc(ELF32_R_TYPE(reloc_info->r_info),s+a,(unsigned int *)where);
#else
    switch(ELF32_R_TYPE(reloc_info->r_info)){
#if (defined(__svr4__) || defined(__linux__)) && defined(__i386__)
    case     R_386_NONE:
      FEerror("Unsupported ELF type R_386_NONE");
      break;

    case     R_386_32:
      val = (s+a);
      ADD_VAL(where,~0,val);
      break;

    case     R_386_PC32:
      val = (s+a) - (unsigned int)where /* - 4 */;
      ADD_VAL(where,~0,val);
      break;

    case     R_386_GOT32:
      FEerror("Unsupported ELF type R_386_GOY32");
      break;

    case     R_386_PLT32:
      FEerror("Unsupported ELF type R_386_PLT32");
      break;

    case     R_386_COPY:
      FEerror("Unsupported ELF type R_386_COPY");
      break;

    case     R_386_GLOB_DAT:
      FEerror("Unsupported ELF type R_386_GLOB_DAT");
      break;

    case     R_386_JMP_SLOT:
      FEerror("Unsupported ELF type R_386_JMP_SLOT");
      break;

    case     R_386_RELATIVE:
      FEerror("Unsupported ELF type R_386_RELATIVE");
      break;

    case     R_386_GOTOFF:
      FEerror("Unsupported ELF type R_386_GOTOFF");
      break;

    case     R_386_GOTPC:
      FEerror("Unsupported ELF type R_386_GOTPC");
      break;

#ifdef R_386_NUM
    case     R_386_NUM:
      FEerror("Unsupported ELF type R_386_NUM");
      break;
#endif

#else /*  (defined(__svr4__) || defined(__linux__)) && defined(__i386__) */
    case     R_SPARC_WDISP30:
      /* v-disp30*/
      val=(s+a-p) >> 2;
      STORE_VAL(where,MASK(30),val);
      break;
	
    case R_SPARC_HI22:
      /* t-sim22 */
      val = (s+a)>>10;
      STORE_VAL(where,MASK(22),val);
      break;

    case R_SPARC_32:
      /*    */
      val = (s+a) ;
      STORE_VAL(where,~0,val);
      break;
      
    case R_SPARC_UA32:
      /*    */
      val = (s+a) ;
      STORE_VAL(where,0xffffffff,val);
      break;

    case R_SPARC_LO10:
	/* T-simm13 */
      val = (s+a) & MASK(10);
      *(short *)(where +2) |= val;
      break;
#endif /*  (defined(__svr4__) || defined(__linux__)) && defined(__i386__) */
    default:
      printf("(non supported relocation type %d)\n",
	     ELF32_R_TYPE(reloc_info->r_info));
    }
#endif /* HAVE_LIBBFD */
  }
}

 

#include "sfasli.c"

set_symbol_address(sym,string)
Elf32_Sym *sym;
char *string;
{
  struct node *answ;
  if (c_table.ptable)
    {
      answ = find_sym_ptable(string);
      if(answ)
	{
	  /* the old value of sym->n_value is the length of the common area
	     starting at this address */
	  sym->st_value = answ->address;
	}
      else
	{ 
	  fprintf(stdout,"symbol \"%s\" is not in base image",string);
	  fflush(stdout);
	}
    }
  else{FEerror("symbol table not loaded",0,0);}
}

#define STRUCT_SYMENT Elf32_Sym

/* dont try to add extra bss stuff here.   It is not really
common so other files can't reference it, so we really
should use static.
*/

get_extra_bss(symbol_table,length,start,ptr,bsssize)
int length,bsssize,start;
STRUCT_SYMENT *symbol_table;
int *ptr;   /* store init address offset here */
{ return 0;
}


