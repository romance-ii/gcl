/*
(c) Copyright W. Schelter 1988, All rights reserved.
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "include.h"
#include "page.h"

#ifdef HAVE_LIBBFD
#ifdef NEED_CONST
#define CONST const
#endif
#define IN_GCC
#include <bfd.h>
#include <bfdlink.h>
#endif

#define FAT_STRING


enum type what_to_collect;

/* start fasdump stuff */
#include "fasdump.c"



object sSAprofile_arrayA;
#ifdef NO_PROFILE
void
profil(void)
{;}
#endif


#ifndef NO_PROFILE
DEFUN_NEW("PROFILE",object,fSprofile,SI
       ,2,2,NONE,OO,OO,OO,OO,(object start_address,object scale),
       "Sets up profiling with START-ADDRESS and  SCALE where scale is \
  between 0 and 256")
{				/* 2 args */
  
  object ar=sSAprofile_arrayA->s.s_dbind;
  if (type_of(ar)!=t_string)
    FEerror("si:*Profile-array* not a string",0);
  if( type_of(start_address)!=t_fixnum ||   type_of(scale)!=t_fixnum)
    FEerror("Needs start address and scale as args",0);

  profil(!(fix(start_address)*fix(scale)) ? NULL : (void *) (ar->ust.ust_self), (ar->ust.ust_dim),
	 fix(start_address),fix(scale) << 8);
  RETURN1(start_address);
}

#endif
DEFUN_NEW("FUNCTION-START",object,fSfunction_start,SI
       ,1,1,NONE,OO,OO,OO,OO,(object funobj),"")
{/* 1 args */
 if(type_of(funobj)!=t_cfun
    && type_of(funobj)!=t_sfun
    && type_of(funobj)!=t_vfun
    && type_of(funobj)!=t_afun
    && type_of(funobj)!=t_gfun)
    FEerror("not compiled function",0);
 funobj=make_fixnum((long) (funobj->cf.cf_self));
 RETURN1(funobj);
}

/* begin fasl stuff*/
/* this is for windows to not include all of windows.h for this..*/

#include "ptable.h"
#ifdef AIX3
#include <sys/ldr.h>
char *data_load_addr =0;
#endif


#ifdef SPECIAL_RSYM
void
read_special_symbols(symfile)
char *symfile;
{FILE *symin;
 char *symbols;
 int i,jj;
 struct lsymbol_table tab;
#ifdef AIX3
 {char buf[500];
  struct ld_info * ld;
 loadquery(L_GETINFO,buf,sizeof(buf));
  ld = (struct ld_info *)buf;
  data_load_addr = ld->ldinfo_dataorg ;}
#endif  
 if (!(symin=fopen(symfile,"r")))
   {perror(symfile);exit(1);};
 if(!fread((char *)&tab,sizeof(tab),1,symin))
   FEerror("No header",0);
  symbols=malloc(tab.tot_leng);
 c_table.alloc_length=( (PTABLE_EXTRA+ tab.n_symbols));
 (c_table.ptable) = (TABL *) malloc(sizeof(struct node) * c_table.alloc_length);
 if (!(c_table.ptable)) {perror("could not allocate"); exit(1);};
 i=0; c_table.length=tab.n_symbols;
 while(i < tab.n_symbols)
   { fread((char *)&jj,sizeof(int),1,symin);
#ifdef FIX_ADDRESS
     FIX_ADDRESS(jj);
#endif       
     (SYM_ADDRESS(c_table,i))=jj;
     SYM_STRING(c_table,i)=symbols;
 
     while((*(symbols++) =   getc(symin)))
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
 if (symin) fclose(symin);
}

int
node_compare(const void *node1,const void *node2)
{ return(strcmp( ((struct node *)node1)->string,
	         ((struct node *)node2)->string));}



DEFUNO_NEW("READ-EXTERNALS",object,fSread_externals,SI
       ,1,1,NONE,OO,OO,OO,OO,void,siLread_externals,(object x0),"")
{/* 1 args */
 {object x=x0;
  unsigned int n;
  char *str;
  n=x->st.st_fillp;
 check_type_string(&x);
 str=malloc(n+1);
  str[n]=0;
 (void) strncpy(str,x->st.st_self,n);
 read_special_symbols(str);
  /* we sort them since these are used by the sfasl loader too */
 qsort((char*)(c_table.ptable),(int)(c_table.length),sizeof(struct node),node_compare);
  free(str);}
 RETURN1(x0);
}

#endif /* special_rsym */

#define CFUN_LIM 10000

int maxpage;
object sScdefn;

#define CF_FLAG ((unsigned long)1 << (sizeof(long)*8-1)) 

static void
cfuns_to_combined_table(unsigned int n) /* non zero n will ensure new table length */
               
{int ii=0;  
 STATIC int i, j;
 STATIC object x;
 STATIC char *p,*cf_addr;
 STATIC struct typemanager *tm;
 if (! (n || combined_table.ptable)) n=CFUN_LIM;
 if (n && combined_table.alloc_length < n)
   { 
     (combined_table.ptable)=NULL;
     (combined_table.ptable)= (TABL *)malloc(n* sizeof(struct node));
     if(!combined_table.ptable)
       FEerror("unable to allocate",0);
     combined_table.alloc_length=n;}

 for (i = 0;  i < maxpage;  i++) {
   if ((enum type)type_map[i]!=tm_table[(short)t_cfun].tm_type &&
       (enum type)type_map[i]!=tm_table[(short)t_gfun].tm_type &&
       (enum type)type_map[i]!=tm_table[(short)t_sfun].tm_type &&
       (enum type)type_map[i]!=tm_table[(short)t_vfun].tm_type
       )
     continue;
   tm = tm_of((enum type)type_map[i]);
   p = pagetochar(i);
   for (j = tm->tm_nppage; j > 0; --j, p += tm->tm_size) {
     x = (object)p;
     if (type_of(x)!=t_cfun &&
	 type_of(x)!=t_sfun &&
	 type_of(x)!=t_vfun &&
	 type_of(x)!=t_gfun
	 ) continue;
     if ((x->d.m == FREE) || x->cf.cf_self == NULL)
       continue;
	/* the cdefn things are the proclaimed call types. */
     cf_addr=(char * ) ((unsigned long)(x->cf.cf_self));
	
     SYM_ADDRESS(combined_table,ii)=(unsigned long)cf_addr;
     SYM_STRING(combined_table,ii)= (char *)(CF_FLAG | (unsigned long)x) ;
/*       (x->cf.cf_name ? x->cf.cf_name->s.st_self : NULL) ; */
     combined_table.length = ++ii;
     if (ii >= combined_table.alloc_length)
       FEerror("Need a larger combined_table",0);
   }
		
 }
}

static int
address_node_compare(const void *node1, const void *node2)
{unsigned int a1,a2;
 a1=((struct node *)node1)->address;
 a2=((struct node *)node2)->address;
 if (a1> a2) return 1;
 if (a1< a2) return -1;
 return 0;
}
 

#if defined(HAVE_LIBBFD) && ! defined(SPECIAL_RSYM)

static int bfd_update;

static MY_BFD_BOOLEAN
bfd_combined_table_update(struct bfd_link_hash_entry *h,PTR ct) {

  if (ct!=&combined_table)
    return MY_BFD_FALSE;

  if (h->type!=bfd_link_hash_defined)
    return MY_BFD_TRUE;

  if (!h->u.def.section) {
    FEerror("Symbol without section",0);
    return MY_BFD_FALSE;
  }

  if (bfd_update) {
    if (combined_table.length>=combined_table.alloc_length)
      FEerror("combined table overflow", 0);
    
    SYM_ADDRESS(combined_table,combined_table.length)=h->u.def.value+h->u.def.section->vma;
    SYM_STRING(combined_table,combined_table.length)=(char *)h->root.string;
  }

  combined_table.length++;

  return MY_BFD_TRUE;

}
#endif


DEFUN_NEW("SET-UP-COMBINED",object,fSset_up_combined,SI
       ,0,1,NONE,OO,OO,OO,OO,(object first,...),"")
{
  int nargs=VFUN_NARGS;
  unsigned int n;
  object siz;

  if (nargs>=1) 
    siz=first;
  else 
    siz = small_fixnum(0);

  CHECK_ARG_RANGE(0,1);
  n = (unsigned int) fix(siz);
  cfuns_to_combined_table(n);

#if !defined(HAVE_LIBBFD) && !defined(SPECIAL_RSYM)
#error Need either BFD or SPECIAL_RSYM
#endif

#if defined(SPECIAL_RSYM)
  if (c_table.ptable) {

    int j,k;

    if((k=combined_table.length)+c_table.length >=
       combined_table.alloc_length)
      cfuns_to_combined_table(combined_table.length+c_table.length +20);

    for(j = 0; j < c_table.length;) { 
      SYM_ADDRESS(combined_table,k) =SYM_ADDRESS(c_table,j);
      SYM_STRING(combined_table,k) =SYM_STRING(c_table,j);
      k++;
      j++;
    }
    combined_table.length += c_table.length ;}

#else
#if defined(HAVE_LIBBFD)
  if (link_info.hash) {

    bfd_update=0;
    bfd_link_hash_traverse(link_info.hash,
				 bfd_combined_table_update,&combined_table);

    if (combined_table.length >=combined_table.alloc_length)
      cfuns_to_combined_table(combined_table.length);

    bfd_update=1;
    bfd_link_hash_traverse(link_info.hash,
				 bfd_combined_table_update,&combined_table);
    bfd_update=0;

  }
#endif
#endif

  qsort((char*)combined_table.ptable,(int)combined_table.length,
	sizeof(struct node),address_node_compare);
  RETURN1(siz);

}

static int  prof_start;
static int
prof_ind(unsigned int address, int scale)
{address = address - prof_start ;
 if (address > 0) return ((address * scale) >> 8) ;
 return 0;
}

/* sum entries AAR up to DIM entries */
static int
string_sum(register unsigned char *aar, unsigned int dim)
{register unsigned char *endar;
 register unsigned int count = 0;
endar=aar+dim;
 for ( ; aar< endar; aar++)
   count += *aar;
 return count;
}


DEFUN_NEW("DISPLAY-PROFILE",object,fSdisplay_profile,SI
       ,2,2,NONE,OO,OO,OO,OO,(object start_addr,object scal),"")
{if (!combined_table.ptable)
   FEerror("must symbols first",0);
   /* 2 args */
   {unsigned int prev,next,upto,dim,total;
    int j,scale,count;
    unsigned char *ar;
    object obj_ar;
    obj_ar=sSAprofile_arrayA->s.s_dbind;
    if (type_of(obj_ar)!=t_string)
      FEerror("si:*Profile-array* not a string",0);
    ar=obj_ar->ust.ust_self;
    scale=fix(scal);
    prof_start=fix(start_addr);
    vs_top=vs_base;
    dim= (obj_ar->ust.ust_dim);

    total=string_sum(ar,dim);
  
    j=0;
    {int i, finish = combined_table.length-1;
     for(i =0,prev=SYM_ADDRESS(combined_table,i); i< finish;
	 prev=next)
       { ++i;
	 next=SYM_ADDRESS(combined_table,i);
	 if ( prev < prof_start) continue;
	 upto=prof_ind(next,scale);
	 if (upto >= dim) upto=dim;
	 {char *name; unsigned long uname;
	  count=0;
	  for( ; j<upto;j++)
	    count += ar[j];
	  if (count > 0) {
	    name=SYM_STRING(combined_table,i-1);
	    uname = (unsigned long) name;
	    printf("\n%6.2f%% (%5d): ",(100.0*count)/total, count);
	    fflush(stdout);
	    if (CF_FLAG & uname)
	      {if (~CF_FLAG & uname) prin1( ((object) (~CF_FLAG & uname))->cf.cf_name,Cnil);}
	     else if (name ) printf("%s",name);};
	  if (upto==dim) goto TOTALS ;
	  
	}}}
 TOTALS:
  printf("\nTotal ticks %d",total);fflush(stdout);
  }
 RETURN1(start_addr);
}



/* end fasl stuff*/


/* These are some low level hacks to allow determining the address
   of an array body, and to allow jumping to inside the body
   of the array */

DEFUN_NEW("ARRAY-ADRESS",object,fSarray_adress,SI
       ,1,1,NONE,OO,OO,OO,OO,(object array),"")
{/* 1 args */
 array=make_fixnum((long) (&(array->st.st_self[0])));
 RETURN1(array);
}

/* This is some very low level code for hacking invokation of
   m68k instructions in a lisp array.  The index used should be
   a byte index.  So invoke(ar,3) jmps to byte ar+3.
   */

#ifdef CLI

invoke(ar)
char *ar;
{asm("movel a6@(8),a0");
 asm("jmp a0@");
}
/* save regs (2 3 4 5 6 7  10 11 12 13 14) and invoke restoring them */
save_regs_invoke(ar)
char *ar;
{asm("moveml #0x3f3e,sp@-");
 invoke(ar);
 asm("moveml a6@(-44),#0x7cfc");
}

/* DEFUNO_NEW("SAVE-REGS-INVOKE",object,fSsave_regs_invoke,SI
   ,2,2,NONE,OO,OO,OO,OO,void,siLsave_regs_invoke,"",(x0,x1))
object x0,x1;
{int x;
  check_type_integer(&x1);
  x=save_regs_invoke((x0->st.st_self)+fix(x1));
 x0=make_fixnum(x);
 RETURN1(x0);
}
*/

#endif

DEFVAR("*PROFILE-ARRAY*",sSAprofile_arrayA,SI,Cnil,"");
void
init_fat_string(void)
{
 
 make_si_constant("*ASH->>*",(-1==(((int)-1) >> 20))? Ct :Cnil);
#ifdef SFASL
 make_si_function("BUILD-SYMBOL-TABLE",build_symbol_table);
#endif


 init_fasdump();
 
}







