/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
	alloc.c
	IMPLEMENTATION-DEPENDENT
*/

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#include "include.h"
#include "page.h"

static int
t_from_type(object);

/* DEFVAR("*AFTER-GBC-HOOK*",sSAafter_gbc_hookA,SI,sLnil,""); */
DEFVAR("*IGNORE-MAXIMUM-PAGES*",sSAignore_maximum_pagesA,SI,sLt,"");
#define IGNORE_MAX_PAGES (sSAignore_maximum_pagesA ==0 || sSAignore_maximum_pagesA->s.s_dbind !=sLnil) 


#ifdef DEBUG_SBRK
int debug;
char *
sbrk1(n)
     int n;
{char *ans;
 if (debug){
   printf("\n{sbrk(%d)",n);
   fflush(stdout);}
 ans= (char *)sbrk(n);
 if (debug){
   printf("->[0x%x]", ans);
   fflush(stdout);
   printf("core_end=0x%x,sbrk(0)=0x%x}",core_end,sbrk(0));
   fflush(stdout);}
 return ans;
}
#define sbrk sbrk1
#endif /* DEBUG_SBRK */

long starting_hole_div=10;
long starting_relb_div=20;
long new_holepage;
long resv_pages=40;

void *stack_alloc_start=NULL,*stack_alloc_end=NULL;

#ifdef BSD
#include <sys/time.h>
#include <sys/resource.h>
#ifdef RLIMIT_STACK
struct rlimit data_rlimit;
#endif
#endif

inline void
add_page_to_contblock_list(void *p,fixnum m) {
 
  struct pageinfo *pp=pageinfo(p);

  bzero(pp,sizeof(*pp));
  pp->type=t_contiguous;
  pp->in_use=m;
  massert(pp->in_use==m);
  pp->magic=PAGE_MAGIC;
  
  if (contblock_list_head==NULL)
    contblock_list_tail=contblock_list_head=p;
  else if (pp > contblock_list_tail) {
    contblock_list_tail->next=p;
    contblock_list_tail=p;
  }
  
  bzero(pagetochar(page(pp)),CB_DATA_START(pp)-(void *)pagetochar(page(pp)));
#ifdef SGC
  if (sgc_enabled && tm_table[t_contiguous].tm_sgc) {
    memset(CB_SGCF_START(pp),-1,CB_DATA_START(pp)-CB_SGCF_START(pp));
    pp->sgc_flags=SGC_PAGE_FLAG;
    }
#endif
  
  ncbpage+=m;
  insert_contblock(CB_DATA_START(pp),CB_DATA_END(pp)-CB_DATA_START(pp));

}

int
icomp(const void *v1,const void *v2) {
  const fixnum *f1=v1,*f2=v2;
  return *f1<*f2 ? -1 : *f1==*f2 ? 0 : +1;
}

inline void
maybe_reallocate_page(struct typemanager *ntm,ufixnum count) {

  void **y,**n;
  fixnum *pp,*pp1,*ppe,yp;
  struct typemanager *tm;
  fixnum i,j,e[t_end];
  struct pageinfo *v;

  massert(pp1=pp=alloca(count*sizeof(*pp1)));
  ppe=pp1+count;

  for (v=cell_list_head;v && pp<ppe;v=v->next) {

    if (v->type>=t_end ||
	(tm=tm_of(v->type))==ntm ||
#ifdef SGC
	(sgc_enabled && tm->tm_sgc && v->sgc_flags!=SGC_PAGE_FLAG) ||
#endif
	v->in_use)
      continue;

    count--;
    *pp++=page(v);

  }

#define NEXT_LINK(a_) (void *)&((struct freelist *)*(a_))->f_link
#define FREE_PAGE_P(yp_) bsearch(&(yp_),pp1,ppe-pp1,sizeof(*pp1),icomp)

  ppe=pp;
  bzero(e,sizeof(e));
  for (pp=pp1;pp<ppe;pp++)
    e[pagetoinfo(*pp)->type]++;
  for (i=0;i<sizeof(e)/sizeof(*e);i++) {
    if (!e[i]) continue;
    tm=tm_of(i);
    tm->tm_nfree-=(j=tm->tm_nppage*e[i]);
    tm->tm_npage-=e[i];
    set_tm_maxpage(tm,tm->tm_maxpage-e[i]);
    set_tm_maxpage(ntm,ntm->tm_maxpage+e[i]);
    for (y=(void *)&tm->tm_free;*y!=OBJNULL && j;) {
      for (;*y!=OBJNULL && (yp=page(*y)) && !FREE_PAGE_P(yp);y=NEXT_LINK(y));
      if (*y!=OBJNULL) {
	for (n=NEXT_LINK(y),j--;*n!=OBJNULL && (yp=page(*n)) && FREE_PAGE_P(yp);n=NEXT_LINK(n),j--);
	*y=*n;
      }
    }
    massert(!j);
  }

  for (pp=pp1;pp<ppe;pp++) {
    struct pageinfo *pn=pagetoinfo(*pp)->next;
    add_page_to_freelist(pagetochar(*pp),ntm);
    pagetoinfo(*pp)->next=pn;
  }
      
}


int reserve_pages_for_signal_handler=30;

/* If  (n >= 0 ) return pointer to n pages starting at heap end,
   These must come from the hole, so if that is exhausted you have
   to gc and move the hole.
   if  (n < 0) return pointer to n pages starting at heap end,
   but don't worry about the hole.   Basically just make sure
   the space is available from the Operating system.
   If not in_signal_handler then try to keep a minimum of
   reserve_pages_for_signal_handler pages on hand in the hole
 */
inline void *
alloc_page(long n) {

  void *e=heap_end;
  fixnum d,m;
#ifdef SGC
  int in_sgc=sgc_enabled;
#endif
  if (n>=0) {

    if (n>(holepage - (in_signal_handler? 0 :
		       available_pages-n<=reserve_pages_for_signal_handler ? 0 : 
		       reserve_pages_for_signal_handler))) {


      if (in_signal_handler) {
	fprintf(stderr,"Cant do relocatable gc in signal handler. \
Try to allocate more space to save for allocation during signals: \
eg to add 20 more do (si::set-hole-size %ld %d)\n...start over ", 
		new_holepage, 20+ reserve_pages_for_signal_handler); fflush(stderr); exit(1);
      }


      d=available_pages-n;
      d*=0.2;
      d=d<0.01*real_maxpage ? available_pages-n : d;
      d=d<0 ? 0 : d;
      d=new_holepage<d ? new_holepage : d;
      
      holepage = d + n;

#ifdef SGC
      if (in_sgc) sgc_quit();
#endif

      GBC(t_relocatable);
      tm_table[t_relocatable].tm_adjgbccnt--;/* hole overrun is not a call for more relocatable */


#ifdef SGC
      /* starting sgc can use up some pages
	 and may move heap end, so start over
      */
      if (in_sgc) {
	sgc_start();
	return alloc_page(n);
      }
#endif
    }

    holepage -= n;

    if (heap_end==core_end) {
      /* can happen when mallocs occur before rel block set up..*/
      sbrk(PAGESIZE*n);
      core_end+=PAGESIZE*n;
    }

    heap_end+=PAGESIZE*n;

    return(e);

  }

  /* n < 0 , then this says ensure there are -n pages
     starting at heap_end, and return pointer to heap_end */
  n=-n;
  m=(core_end-heap_end)/PAGESIZE;

  if (n<=m)
    return(e);

  IF_ALLOCATE_ERR error("Can't allocate.  Good-bye!");

  core_end+=PAGESIZE*(n-m);

  return(e);

}


#define MAX(a_,b_) ({fixnum _a=(a_),_b=(b_);_a<_b ? _b : _a;})
#define MIN(a_,b_) ({fixnum _a=(a_),_b=(b_);_a<_b ? _a : _b;})

struct pageinfo *cell_list_head=NULL,*cell_list_tail=NULL;;

inline fixnum
set_tm_maxpage(struct typemanager *tm,fixnum n) {
  
  fixnum r=tm->tm_type==t_relocatable,j=tm->tm_maxpage,z=(n-j)*(r ? 2 : 1);
  if (z>available_pages) return 0;
  available_pages-=z;
  tm->tm_adjgbccnt*=((double)j)/n;
  tm->tm_maxpage=n;
  return n;
}
  

inline void
add_page_to_freelist(char *p, struct typemanager *tm) {

  short t,size;
  long i=tm->tm_nppage,fw;
  object x,f;
  struct pageinfo *pp;

 t=tm->tm_type;

 size=tm->tm_size;
 f=tm->tm_free;
 pp=pageinfo(p);
 bzero(pp,sizeof(*pp));
 pp->type=t;
 pp->magic=PAGE_MAGIC;

 if (cell_list_head==NULL) 
   cell_list_tail=cell_list_head=pp;
 else if (pp > cell_list_tail) {
   cell_list_tail->next=pp;
   cell_list_tail=pp;
 }

 x= (object)pagetochar(page(p));
 /* set_type_of(x,t); */
 make_free(x);

#ifdef SGC

 if (sgc_enabled && tm->tm_sgc)
   pp->sgc_flags=SGC_PAGE_FLAG;
 if (pp->type!=t_cons)
   x->d.s=(sgc_enabled && tm->tm_sgc) ? SGC_RECENT : SGC_NORMAL;

 /* array headers must be always writable, since a write to the
    body does not touch the header.   It may be desirable if there
    are many arrays in a system to make the headers not writable,
    but just SGC_TOUCH the header each time you write to it.   this
    is what is done with t_structure */
  if (t==(tm_of(t_array)->tm_type))
    pp->sgc_flags|=SGC_PERM_WRITABLE;
   
#endif 

 fw= *(fixnum *)x;
 while (--i >= 0) {
   *(fixnum *)x=fw;
   SET_LINK(x,f);
   f=x;
   x= (object) ((char *)x + size);
 }

 tm->tm_free=f;
 tm->tm_nfree += tm->tm_nppage;
 tm->tm_npage++;

}

object
type_name(int t) {
  return make_simple_string(tm_table[(int)t].tm_name+1);
}


static fixnum
grow_linear(fixnum old, fixnum fract, fixnum grow_min, fixnum grow_max,fixnum max_delt) {
  
  fixnum delt;

  delt=(old*(fract ? fract : 50))/100;

  delt= (grow_min && delt < grow_min ? grow_min:
	 grow_max && delt > grow_max ? grow_max:
	 delt);

  delt=delt>max_delt ? max_delt : delt;

  return old + delt;

}

/* GCL's traditional garbage collecting algorithm placed heavy emphasis
   on conserving memory.  Maximum page allocations of each object type
   were only increased when the objects in use after GBC exceeded a
   certain percentage threshold of the current maximum.  This allowed
   a situation in which a growing heap would experience significant
   performance degradation due to GBC runs triggered by types making
   only temporary allocations -- the rate of GBC calls would be
   constant while the cost for each GBC would grow with the size of
   the heap.

   We implement here a strategy designed to approximately optimize the
   product of the total GBC call rate times the cost or time taken for
   each GBC.  The rate is approximated from the actual gbccounts so
   far experienced, while the cost is taken to be simply proportional
   to the heap size at present.  This can be further tuned by taking
   into account the number of pointers in each object type in the
   future, but at present objects of several different types but
   having the same size are grouped together in the type manager
   table, so this step becomes more involved.

   After each GBC, we calculate the maximum of the function
   (gbc_rate_other_types + gbc_rate_this_type *
   current_maxpage/new_maxpage)*(sum_all_maxpages-current_maxpage+new_maxpage).
   If the benefit in the product from adopting the new_maxpage is
   greater than 5%, we adopt it, and adjust the gbccount for the new
   basis.  Corrections are put in place for small GBC counts, and the
   possibility that GBC calls of only a single type are ever
   triggered, in which case the optimum new_maxpage would diverge in
   the simple analysis above.

   20040403 CM */

DEFVAR("*OPTIMIZE-MAXIMUM-PAGES*",sSAoptimize_maximum_pagesA,SI,sLt,"");
#define OPTIMIZE_MAX_PAGES (sSAoptimize_maximum_pagesA ==0 || sSAoptimize_maximum_pagesA->s.s_dbind !=sLnil) 
DEFVAR("*NOTIFY-OPTIMIZE-MAXIMUM-PAGES*",sSAnotify_optimize_maximum_pagesA,SI,sLnil,"");
#define MMAX_PG(a_) (a_)->tm_maxpage
inline long
opt_maxpage(struct typemanager *my_tm) {

  double x=0.0,y=0.0,z,r;
  long mmax_page;
  struct typemanager *tm,*tme;
  long mro=0,tro=0;

#ifdef HAVE_SYSCONF_PHYS_PAGES
  if (page(heap_end)-first_data_page+nrbpage>=phys_pages)
    return 0;
#endif

  if (page(core_end)>0.8*real_maxpage)
    return 0;

  for (tm=tm_table,tme=tm+sizeof(tm_table)/sizeof(*tm_table);tm<tme;tm++) {
    x+=tm->tm_adjgbccnt;
    y+=MMAX_PG(tm);
  }
  mmax_page=MMAX_PG(my_tm);
#if 0
  if (sgc_enabled) {
    y-=(tro=sgc_count_read_only_type(-1));
    mmax_page-=(mro=sgc_count_read_only_type(my_tm->tm_type));
  }
#endif

  z=my_tm->tm_adjgbccnt-1;
  z/=(1+x-0.9*my_tm->tm_adjgbccnt);
  z*=(y-mmax_page)*mmax_page;
  z=sqrt(z);
  z=z-mmax_page>available_pages ? mmax_page+available_pages : z;
  my_tm->tm_opt_maxpage=(long)z>my_tm->tm_opt_maxpage ? (long)z : my_tm->tm_opt_maxpage;

  if (z<=mmax_page)
    return 0;

  r=((x-my_tm->tm_adjgbccnt)+ my_tm->tm_adjgbccnt*mmax_page/z)*(y-mmax_page+z);
  r/=x*y;
  if (sSAnotify_optimize_maximum_pagesA->s.s_dbind!=sLnil)
    printf("[type %u max %lu(%lu) opt %lu   y %lu(%lu) gbcrat %f sav %f]\n",
	   my_tm->tm_type,mmax_page,mro,(long)z,(long)y,tro,(my_tm->tm_adjgbccnt-1)/(1+x-0.9*my_tm->tm_adjgbccnt),r);
  return r<=0.95 && set_tm_maxpage(my_tm,z+mro) ? 1 : 0;

}

static object
exhausted_report(enum type t,struct typemanager *tm) {

  available_pages+=resv_pages;
  resv_pages=0;
  vs_push(type_name(t));
  vs_push(make_fixnum(tm->tm_npage));
  CEerror("The storage for ~A is exhausted.~%\
Currently, ~D pages are allocated.~%	     \
Use ALLOCATE to expand the space.",
	  "Continues execution.",
	  2, vs_top[-2], vs_top[-1], Cnil, Cnil);

  vs_popp;
  vs_popp;

  return alloc_object(t);

}

#ifdef SGC
#define TOTAL_THIS_TYPE(tm) (tm->tm_nppage * (sgc_enabled ? sgc_count_type(tm->tm_type) : tm->tm_npage))
#else
#define TOTAL_THIS_TYPE(tm) (tm->tm_nppage * tm->tm_npage)
#endif
bool prefer_low_mem_contblock=FALSE;

inline void *
alloc_from_freelist(struct typemanager *tm,fixnum n) {

  void *p,*v,*vp;
  struct contblock **cbpp;
  fixnum i;

  switch (tm->tm_type) {

  case t_contiguous:
    for (cbpp= &cb_pointer,v=(void *)-1,vp=NULL; (*cbpp)!=NULL; cbpp= &(*cbpp)->cb_link)
      if ((*cbpp)->cb_size >= n) {
	if (!prefer_low_mem_contblock) {
	  vp=cbpp;
	  break;
	} else if ((void *)(*cbpp)<v) {
	  v=*cbpp;
	  vp=cbpp;
	}
      }
    if (vp) {
      cbpp=vp;
      p=(void *)(*cbpp);
      i=(*cbpp)->cb_size-n;
      *cbpp=(*cbpp)->cb_link;
      --ncb;
      insert_contblock(p+n,i);
      return(p);
    }
    break;

  case t_relocatable:
    if (rb_limit-rb_pointer>=n)
      return ((rb_pointer+=n)-n);
    break;

  default:
    if ((p=tm->tm_free)!=OBJNULL) {
      tm->tm_free = OBJ_LINK(p);
      tm->tm_nfree--;
      return(p);
    }
    break;
  }

  return NULL;

}

static inline void
grow_linear1(struct typemanager *tm) {
  
  fixnum maxgro=resv_pages ? available_pages : 0;

  if (tm->tm_type==t_relocatable) maxgro>>=1;

  set_tm_maxpage(tm,grow_linear(tm->tm_npage,tm->tm_growth_percent,tm->tm_min_grow, tm->tm_max_grow,maxgro));

}

static inline int
too_full_p(struct typemanager *tm) {

  fixnum j,k,pf=tm->tm_percent_free ? tm->tm_percent_free : 30;
  struct contblock *cbp;
  struct pageinfo *pi;

  switch (tm->tm_type) {
  case t_relocatable:
    return 100*(rb_limit-rb_pointer)<pf*(rb_limit-rb_start);
    break;
  case t_contiguous:
    for (cbp=cb_pointer,k=0;cbp;cbp=cbp->cb_link) k+=cbp->cb_size;
    for (pi=contblock_list_head,j=0;pi;pi=pi->next)
#ifdef SGC
      if (!sgc_enabled || pi->sgc_flags&SGC_PAGE_FLAG)
#endif
	j+=pi->in_use;
    return 100*k<pf*j*PAGESIZE;
    break;
  default:
    return 100*tm->tm_nfree<pf*TOTAL_THIS_TYPE(tm);
    break;
  }

}

inline void *
alloc_after_gc(struct typemanager *tm,fixnum n) {

  if (tm->tm_npage+tpage(tm,n)>=tm->tm_maxpage) {

    switch (jmp_gmp) {
    case 0: /* not in gmp call*/
      GBC(tm->tm_type);
      break;
    case 1: /* non-in-place gmp call*/
      longjmp(gmp_jmp,tm->tm_type);
      break;
    case -1: /* in-place gmp call */
      jmp_gmp=-tm->tm_type;
      break;
    default:
      break;
    }

    if (IGNORE_MAX_PAGES && too_full_p(tm))
      grow_linear1(tm);

    return alloc_from_freelist(tm,n);

  } else

    return NULL;

}

struct pageinfo *contblock_list_head=NULL,*contblock_list_tail=NULL;

inline void
add_pages(struct typemanager *tm,fixnum m) {

  switch (tm->tm_type) {
  case t_contiguous:

    add_page_to_contblock_list(alloc_page(m),m);

    break;

  case t_relocatable:

    nrbpage+=m;
    rb_end=heap_end+(holepage+nrbpage)*PAGESIZE;
    rb_limit=rb_end-2*RB_GETA;

    alloc_page(-(nrbpage+holepage));

    break;

  default:

    {
      void *p=alloc_page(m),*pe=p+m*PAGESIZE;
      for (;p<pe;p+=PAGESIZE)
	add_page_to_freelist(p,tm);
    }

    break;

  }

}

inline void *
alloc_after_adding_pages(struct typemanager *tm,fixnum n) {
  
  fixnum m=tpage(tm,n);

  if (tm->tm_npage+m>tm->tm_maxpage) {

    if (!IGNORE_MAX_PAGES) return NULL;

    grow_linear1(tm);

    if (tm->tm_npage+m>tm->tm_maxpage && !set_tm_maxpage(tm,tm->tm_npage+m))
      return NULL;

  }

  m=tm->tm_maxpage-tm->tm_npage;
  add_pages(tm,m);

  return alloc_from_freelist(tm,n);

}

inline void *
alloc_after_reclaiming_pages(struct typemanager *tm,fixnum n) {

  fixnum m=tpage(tm,n),reloc_min;

  if (tm->tm_type>=t_end) return NULL;

  reloc_min=npage(rb_pointer-REAL_RB_START);

  if (m<2*(nrbpage-reloc_min)) {

    set_tm_maxpage(tm_table+t_relocatable,reloc_min);
    nrbpage=reloc_min;

    GBC(t_relocatable);
    tm_table[t_relocatable].tm_adjgbccnt--;

    return alloc_after_adding_pages(tm,n);

  }

  maybe_reallocate_page(tm,tm->tm_percent_free*tm->tm_npage);

  return alloc_from_freelist(tm,n);

}

inline void *alloc_mem(struct typemanager *,fixnum);

#ifdef SGC
inline void *
alloc_after_turning_off_sgc(struct typemanager *tm,fixnum n) {

  if (!sgc_enabled) return NULL;
  sgc_quit();
  return alloc_mem(tm,n);

}
#endif

inline void *
alloc_mem(struct typemanager *tm,fixnum n) {

  void *p;

  CHECK_INTERRUPT;

  if ((p=(void *)maybe_alloc_on_stack(n,tm->tm_type))!=(void *)OBJNULL)
    return p;
  if ((p=alloc_from_freelist(tm,n)))
    return p;
  if ((p=alloc_after_gc(tm,n)))
    return p;
  if ((p=alloc_after_adding_pages(tm,n)))
    return p;
#ifdef SGC
  if ((p=alloc_after_turning_off_sgc(tm,n)))
    return p;
#endif
  if ((p=alloc_after_reclaiming_pages(tm,n)))
    return p;
  return exhausted_report(tm->tm_type,tm);
}

inline object
alloc_object(enum type t)  {

  object obj;
  struct typemanager *tm=tm_of(t);
  
  obj=alloc_mem(tm,tm->tm_size);
  set_type_of(obj,t);
  
  pageinfo(obj)->in_use++;

  return(obj);
  
}

inline void *
alloc_contblock(size_t n) {
  return alloc_mem(tm_of(t_contiguous),ROUND_UP_PTR_CONT(n));
}

inline void *
alloc_relblock(size_t n) {

  return alloc_mem(tm_of(t_relocatable),ROUND_UP_PTR(n));

}


inline object
make_cons(object a,object d) {

  static struct typemanager *tm=tm_table+t_cons;/*FIXME*/
  object obj=alloc_mem(tm,tm->tm_size);

 /* set_type_of(obj,t_cons); */
  obj->c.c_car = a;
  obj->c.c_cdr = d;

  pageinfo(obj)->in_use++;

  return(obj);

}



inline object on_stack_cons(object x, object y)
{object p = (object) alloca_val;
 /* set_type_of(p,t_cons); */
 p->c.c_car=x;
 p->c.c_cdr=y;
 return p;
}


DEFUNM("ALLOCATED",object,fSallocated,SI,1,1,NONE,OO,OO,OO,OO,(object typ),"") { 

  struct typemanager *tm=(&tm_table[t_from_type(typ)]);
  fixnum vals=(fixnum)fcall.valp;
  object *base=vs_top;

  tm = & tm_table[tm->tm_type];
  if (tm->tm_type == t_relocatable) {
    tm->tm_npage = (rb_end-rb_start)/PAGESIZE;
    tm->tm_nfree = rb_end -rb_pointer;
  } else if (tm->tm_type == t_contiguous) { 
    int cbfree =0;
    struct contblock **cbpp;
    for(cbpp= &cb_pointer; (*cbpp)!=NULL; cbpp= &(*cbpp)->cb_link)
      cbfree += (*cbpp)->cb_size ;
    tm->tm_nfree = cbfree;
  }
  
  RETURN(6,object,make_fixnum(tm->tm_nfree),
	    (RV(make_fixnum(tm->tm_npage)),
	     RV(make_fixnum(tm->tm_maxpage)),
	     RV(make_fixnum(tm->tm_nppage)),
	     RV(make_fixnum(tm->tm_gbccount)),
	     RV(make_fixnum(tm->tm_npage*tm->tm_nppage-tm->tm_nfree))));
}
 
#define IN_CONTBLOCK_P(p,pi) ((void *)p>=(void *)pi && (void *)p<(void *)pi+pi->in_use*PAGESIZE)

/* SGC cont pages: explicit free calls can come at any time, and we
   must make sure to add the newly deallocated block to the right
   list.  CM 20030827*/
#ifdef SGC
void
insert_maybe_sgc_contblock(char *p,int s) {

  struct contblock *tmp_cb_pointer;
  struct pageinfo *pi;

  for (pi=contblock_list_head;pi && !IN_CONTBLOCK_P(p,pi);pi=pi->next);
  massert(pi);

  if (sgc_enabled && ! (pi->sgc_flags&SGC_PAGE_FLAG)) {
    tmp_cb_pointer=cb_pointer;
    cb_pointer=old_cb_pointer;
    sgc_enabled=0;
    insert_contblock(p,s);
    sgc_enabled=1;
    old_cb_pointer=cb_pointer;
    cb_pointer=tmp_cb_pointer;
  } else
    insert_contblock(p,s);

}
#endif

#ifdef SGC_CONT_DEBUG
extern void overlap_check(struct contblock *,struct contblock *);
#endif

void
insert_contblock(char *p, int s) {

  struct contblock **cbpp, *cbp;
  
  /* SGC cont pages: This used to return when s<CBMINSIZE, but we need
     to be able to sweep small (e.g. bignum) contblocks.  FIXME:
     should never be called with s<=0 to begin with.  CM 20030827*/
  if (s<=0)
    return;
  ncb++;
  cbp = (struct contblock *)p;
  /* SGC cont pages: allocated sizes may not be zero mod CPTR_SIZE,
     e.g. string fillp, but alloc_contblock rounded up the allocation
     like this, which we follow here.  CM 20030827 */
  cbp->cb_size = ROUND_UP_PTR_CONT(s);

  for (cbpp=&cb_pointer;*cbpp;) {
    if ((void *)(*cbpp)+(*cbpp)->cb_size==(void *)cbp) {
      /* printf("Merge contblock %p %d %p %d\n",cbp,cbp->cb_size,*cbpp,(*cbpp)->cb_size); */
      /* fflush(stdout); */
      (*cbpp)->cb_size+=cbp->cb_size;
      cbp=*cbpp;
      *cbpp=(*cbpp)->cb_link;
    } else if ((void *)(*cbpp)==(void *)cbp+cbp->cb_size) {
      /* printf("Merge contblock %p %d %p %d\n",cbp,cbp->cb_size,*cbpp,(*cbpp)->cb_size); */
      /* fflush(stdout); */
      cbp->cb_size+=(*cbpp)->cb_size;
      *cbpp=(*cbpp)->cb_link;
    } else
      cbpp=&(*cbpp)->cb_link;
  }
  s=cbp->cb_size;
  
  for (cbpp = &cb_pointer;  *cbpp;  cbpp = &((*cbpp)->cb_link))
    if ((*cbpp)->cb_size >= s) {
#ifdef SGC_CONT_DEBUG
      if (*cbpp==cbp) {
	fprintf(stderr,"Trying to install a circle at %p\n",cbp);
	exit(1);
      }
      if (sgc_enabled) 
	overlap_check(old_cb_pointer,cb_pointer);
#endif
      cbp->cb_link = *cbpp;
      *cbpp = cbp;
#ifdef SGC_CONT_DEBUG
      if (sgc_enabled) 
	overlap_check(old_cb_pointer,cb_pointer);
#endif
      return;
    }
  cbp->cb_link = NULL;
  *cbpp = cbp;
#ifdef SGC_CONT_DEBUG
  if (sgc_enabled) 
    overlap_check(old_cb_pointer,cb_pointer);
#endif

}

/* Add a tm_distinct field to prevent page type sharing if desired.
   Not used now, as its never desirable from an efficiency point of
   view, and as the only known place one must separate is cons and
   fixnum, which are of different sizes unless PTR_ALIGN is set too
   high (e.g. 16 on a 32bit machine).  See the ordering of init_tm
   calls for these types below -- reversing would wind up merging the
   types with the current algorithm.  CM 20030827 */

static void
init_tm(enum type t, char *name, int elsize, int nelts, int sgc,int distinct) {

  int i, j;
  int maxpage;
  fixnum lu;
  /* round up to next number of pages */

  lu=elsize;
  if (NOT_OBJECT_ALIGNED(lu))
    error("structure size is not properly aligned");

  maxpage = (((nelts * elsize) + PAGESIZE -1)/PAGESIZE);
  tm_table[(int)t].tm_name = name;
  j=-1;
  if (!distinct)
    for (i = 0;  i < t_end;  i++)
      if (tm_table[i].tm_size != 0 &&
	  tm_table[i].tm_size >= elsize &&
	  !tm_table[i].tm_distinct &&
	  (j < 0 || tm_table[j].tm_size > tm_table[i].tm_size))
	j = i;
  if (j >= 0) {
    tm_table[(int)t].tm_type = (enum type)j;
    set_tm_maxpage(tm_table+j,tm_table[j].tm_maxpage+maxpage);
#ifdef SGC		
    tm_table[j].tm_sgc += sgc;
#endif
    return;
  }
  tm_table[(int)t].tm_type = t;
  tm_table[(int)t].tm_size = elsize ? ROUND_UP_PTR(elsize) : 1;
  tm_table[(int)t].tm_nppage = (PAGESIZE-sizeof(struct pageinfo))/tm_table[(int)t].tm_size;
  tm_table[(int)t].tm_free = OBJNULL;
  tm_table[(int)t].tm_nfree = 0;
  /* tm_table[(int)t].tm_nused = 0; */
  /*tm_table[(int)t].tm_npage = 0; */  /* dont zero nrbpage.. */
  set_tm_maxpage(tm_table+t,maxpage);
  tm_table[(int)t].tm_gbccount = 0;
  tm_table[(int)t].tm_adjgbccnt = 0;
  tm_table[(int)t].tm_opt_maxpage = 0;
  tm_table[(int)t].tm_distinct=distinct;

#ifdef SGC	
  tm_table[(int)t].tm_sgc = sgc;
  tm_table[(int)t].tm_sgc_max = 3000;
  tm_table[(int)t].tm_sgc_minfree = (0.4 * tm_table[(int)t].tm_nppage);
#endif
  
}

/* FIXME this is a work-around for the special MacOSX memory
   initialization sequence, which sets heap_end, traditionally
   initialized in gcl_init_alloc.  Mac and windows have non-std
   sbrk-emulating memory subsystems, and their internals need to be
   homogenized and integrated into the traditional unix sequence for
   simplicity.  set_maxpage is overloaded, and the positioning of its
   call is too fragile.  20050115 CM*/
static int gcl_alloc_initialized;

void
set_maxpage(void) {

  /* This is run in init.  Various initializations including getting
     maxpage are here */ 
#ifdef SGC

  massert(getpagesize()<=PAGESIZE);

  if (gcl_alloc_initialized) {
    extern long maxpage;
    maxpage=page(heap_end);
    memory_protect(sgc_enabled ? 1 : 0);
  }
#endif
  
  update_real_maxpage();

}

#ifdef GCL_GPROF
static unsigned long textstart,textend,textpage;
static void init_textpage() {

  extern void *GCL_GPROF_START;
  unsigned long s=(unsigned long)GCL_GPROF_START;

  textstart=(unsigned long)&GCL_GPROF_START;
  textend=(unsigned long)&etext;
  if (s<textend && (textstart>textend || s>textstart))
    textstart=s;

  textpage=2*(textend-textstart)/PAGESIZE;
  
}
#endif

void
gcl_init_alloc(void) {

#ifdef GCL_GPROF
  init_textpage();
#endif
  
  if (gcl_alloc_initialized) return;
  
  
#ifdef BSD
#ifdef RLIMIT_STACK
 {

   struct rlimit rl;

   getrlimit(RLIMIT_DATA, &rl);
   if (rl.rlim_cur != RLIM_INFINITY &&
       (rl.rlim_max == RLIM_INFINITY ||
	rl.rlim_max > rl.rlim_cur)) {
     rl.rlim_cur = rl.rlim_max;
    setrlimit(RLIMIT_DATA, &rl);
   }

 }
#endif	
#endif

#ifdef INIT_ALLOC  
  INIT_ALLOC;
#endif  

  data_start=heap_end;
  first_data_page=page(data_start);
  
  set_maxpage();
  
  holepage=new_holepage;

#ifdef GCL_GPROF
  if (holepage<textpage)
     holepage=textpage;
#endif

  /* Unused (at present) tm_distinct flag added.  Note that if cons
     and fixnum share page types, errors will be introduced.

     Gave each page type at least some sgc pages by default.  Of
     course changeable by allocate-sgc.  CM 20030827 */

  init_tm(t_cons, ".CONS", sizeof(struct cons), 65536 ,50,0 );
  init_tm(t_fixnum, "NFIXNUM",
	  sizeof(struct fixnum_struct), 8192,20,0);
  init_tm(t_structure, "SSTRUCTURE", sizeof(struct structure), 5461,1,0 );
  /* init_tm(t_ifun, "iIFUN", sizeof(struct ifun), 4096,1,0  ); */
  /* init_tm(t_cfun, "fCFUN", sizeof(struct cfun), 4096,1,0  ); */
  init_tm(t_string, "\"STRING", sizeof(struct string), 5461,1,0  );
  init_tm(t_array, "aARRAY", sizeof(struct array), 4681,1,0 );
  init_tm(t_symbol, "|SYMBOL", sizeof(struct symbol), 3640,1,0 );
  init_tm(t_bignum, "BBIGNUM", sizeof(struct bignum), 2730,1,0 );
  init_tm(t_ratio, "RRATIONAL", sizeof(struct ratio), 170,1,0 );
  init_tm(t_shortfloat, "FSHORT-FLOAT",
	  sizeof(struct shortfloat_struct), 256 ,1,0);
  init_tm(t_longfloat, "LLONG-FLOAT",
	  sizeof(struct longfloat_struct), 170 ,1,0);
  init_tm(t_complex, "CCOMPLEX", sizeof(struct ocomplex), 170 ,1,0);
  init_tm(t_character,"#CHARACTER",sizeof(struct character), 256 ,1,0);
  init_tm(t_package, ":PACKAGE", sizeof(struct package), 2*PAGESIZE / sizeof(struct package),1,0);
  init_tm(t_hashtable, "hHASH-TABLE", sizeof(struct hashtable), 78,1,0 );
  init_tm(t_vector, "vVECTOR", sizeof(struct vector), 146 ,1,0);
  init_tm(t_bitvector, "bBIT-VECTOR", sizeof(struct bitvector), 73 ,1,0);
  init_tm(t_stream, "sSTREAM", sizeof(struct stream), 78 ,1,0);
  init_tm(t_random, "$RANDOM-STATE", sizeof(struct random), 256 ,1,0);
  init_tm(t_readtable, "rREADTABLE", sizeof(struct readtable), 256 ,1,0);
  init_tm(t_pathname, "pPATHNAME", sizeof(struct pathname), 73 ,1,0);
  init_tm(t_function, "xFUNCTION", sizeof(struct function), 85 ,1,0);
  init_tm(t_cfdata, "cCFDATA", sizeof(struct cfdata), 102 ,1,0);
  init_tm(t_spice, "!SPICE", sizeof(struct spice), 4096 ,1,0);
  init_tm(t_relocatable, "%RELOCATABLE-BLOCKS", 0,0,20,1);
  init_tm(t_contiguous, "_CONTIGUOUS-BLOCKS", 0,0,20,1);
  
  
  ncb = 0;
  ncbpage = 0;
  set_tm_maxpage(tm_table+t_contiguous,19);
#ifdef GCL_GPROF
  if (maxcbpage<textpage)
    set_tm_maxpage(tm_table+t_contiguous,textpage);
#endif

  nrbpage=0;

#ifdef __linux__
  /* Some versions of the Linux startup code are broken.
     For these, the first call to sbrk() fails, but
     subsequent calls are o.k.
  */
  if ( (long)sbrk(0) == -1 )
    {
      if ( (long)sbrk(0) == -1 )
	{
	  fputs("FATAL Linux sbrk() error\n", stderr);
	  exit(1);
	}
      fputs("WARNING: Non-fatal Linux sbrk() error\n", stderr);
    }
#endif

  alloc_page(-(holepage + nrbpage));
  
  rb_start = rb_pointer = heap_end + PAGESIZE*holepage;
  rb_end = rb_start + PAGESIZE*nrbpage;
  rb_limit = rb_end - 2*RB_GETA;
#ifdef SGC	
  tm_table[(int)t_relocatable].tm_sgc = 50;
#endif
  
#ifndef DONT_NEED_MALLOC	
  
  {
    extern object malloc_list;
    malloc_list = Cnil;
    enter_mark_origin(&malloc_list);
  }
#endif	
  
  gcl_alloc_initialized=1;
  
}

DEFUN("STATICP",object,fSstaticp,SI,1,1,NONE,OO,OO,OO,OO,(object x),"Tell if the string or vector is static") 
{ RETURN1((inheap(x->ust.ust_self) ? sLt : sLnil));
}

/* static void */
/* cant_get_a_type(void) { */
/*   FEerror("Can't get a type.", 0); */
/* } */

static int
t_from_type(object type) {
 
  int i;
  check_type_or_symbol_string(&type);
  for (i= t_start ; i < t_other ; i++)
    {struct typemanager *tm = &tm_table[i];
    if(tm->tm_name &&
       0==strncmp((tm->tm_name)+1,type->st.st_self,type->st.st_fillp)
       )
      return i;}
  FEerror("Unrecognized type",0);
  return i;

}
/* When sgc is enabled the TYPE should have at least MIN pages of sgc type,
   and at most MAX of them.   Each page should be FREE_PERCENT free
   when the sgc is turned on.  FREE_PERCENT is an integer between 0 and 100. 
   */

DEFUN("ALLOCATE-SGC",object,fSallocate_sgc,SI
      ,4,4,NONE,OO,II,II,OO,(object type,fixnum min,fixnum max,fixnum free_percent),"") {

  int t=t_from_type(type);
  struct typemanager *tm;
  object res,x,x1,x2;
  tm=tm_of(t);
  x=make_fixnum(tm->tm_sgc);
  x1=make_fixnum(tm->tm_sgc_max);
  x2=make_fixnum((100*tm->tm_sgc_minfree)/tm->tm_nppage);
  res= list(3,x,x1,x2);
  
  if(min<0 || max< min || free_percent < 0 || free_percent > 100)
    goto END;
  tm->tm_sgc_max=max;
  tm->tm_sgc=min;
  tm->tm_sgc_minfree= (tm->tm_nppage *free_percent) /100;
      END:
  RETURN1(res);

}

/* Growth of TYPE will be by at least MIN pages and at most MAX pages.
   It will try to grow PERCENT of the current pages.
   */
DEFUN("ALLOCATE-GROWTH",object,fSallocate_growth,SI,5,5,NONE,OO,II,II,OO,
      (object type,fixnum min,fixnum max,fixnum percent,fixnum percent_free),"")
{int  t=t_from_type(type);
 struct typemanager *tm=tm_of(t);
 object res,x,x1,x2,x3;
 x=make_fixnum(tm->tm_min_grow);
 x1=make_fixnum(tm->tm_max_grow);
 x2=make_fixnum(tm->tm_growth_percent);
 x3=make_fixnum(tm->tm_percent_free);
 res= list(4,x,x1,x2,x3);
 
 if(min<0 || max< min || min > 3000 || percent < 0 || percent > 500 
    || percent_free <0 || percent_free > 100
    )
    goto END;
 tm->tm_max_grow=max;
 tm->tm_min_grow=min;
 tm->tm_growth_percent=percent;
 tm->tm_percent_free=percent_free;
 END:
 RETURN1(res);
}



DEFUN("ALLOCATE-CONTIGUOUS-PAGES",object,fSallocate_contiguous_pages,SI
	  ,1,2,NONE,OI,OO,OO,OO,(fixnum npages,...),"") {

  object really_do,l=Cnil,f=OBJNULL;
  va_list ap;
  fixnum nargs=INIT_NARGS(1);
  
  va_start(ap,npages);
  really_do=NEXT_ARG(nargs,ap,l,f,Cnil);
  va_end(ap);

  if  (npages  < 0)
    FEerror("Allocate requires positive argument.", 0);
  if (ncbpage > npages)
    npages=ncbpage;
  if (!set_tm_maxpage(tm_table+t_contiguous,npages))
    FEerror("Can't allocate ~D pages for contiguous blocks.", 1, make_fixnum(npages));
  if (really_do == Cnil) 
    RETURN1(Ct);
  add_pages(tm_of(t_contiguous),npages - ncbpage);

  RETURN1(make_fixnum(npages));

}


DEFUN("ALLOCATED-CONTIGUOUS-PAGES",object,fSallocated_contiguous_pages,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	/* 0 args */
	RETURN1((make_fixnum(ncbpage)));
}

DEFUN("MAXIMUM-CONTIGUOUS-PAGES",object,fSmaximum_contiguous_pages,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	/* 0 args */
	RETURN1((make_fixnum(maxcbpage)));
}


DEFUN("ALLOCATE-RELOCATABLE-PAGES",object,fSallocate_relocatable_pages,SI,1,2,NONE,OI,OO,OO,OO,(fixnum npages,...),"") {

  object really_do,l=Cnil,f=OBJNULL;
  va_list ap;
  fixnum nargs=INIT_NARGS(1);
  
  va_start(ap,npages);
  really_do=NEXT_ARG(nargs,ap,l,f,Cnil);
  va_end(ap);
    
  if (npages  <= 0)
    FEerror("Requires positive arg",0);
  if (npages<nrbpage) npages=nrbpage;
  if (!set_tm_maxpage(tm_table+t_relocatable,npages))
    FEerror("Can't set the limit for relocatable blocks to ~D.", 1, make_fixnum(npages));
  if (really_do == Cnil) 
    RETURN1(Ct);
  add_pages(tm_of(t_relocatable),npages - nrbpage);
  RETURN1(make_fixnum(npages));

}

DEFUN("ALLOCATE",object,fSallocate,SI
	  ,2,3,NONE,OO,IO,OO,OO,(object type,fixnum npages,...),"") {

  object really_do,l=Cnil,f=OBJNULL;
  va_list ap;
  struct typemanager *tm;
  int t;
  fixnum nargs=INIT_NARGS(2);
  
  va_start(ap,npages);
  really_do=NEXT_ARG(nargs,ap,l,f,Cnil);
  va_end(ap);
  
  t= t_from_type(type);
  if (t == t_contiguous) 
    RETURN1(FUNCALL(2,FFN(fSallocate_contiguous_pages)(npages,really_do)));
  else if (t==t_relocatable) 
    RETURN1(FUNCALL(2,FFN(fSallocate_relocatable_pages)(npages,really_do)));


  if  (npages <= 0)
    FEerror("Allocate takes positive argument.", 1,make_fixnum(npages));
  tm = tm_of(t);
  if (tm->tm_npage > npages) {npages=tm->tm_npage;}
  if (!set_tm_maxpage(tm,npages))
    FEerror("Can't allocate ~D pages for ~A.", 2, make_fixnum(npages), (make_simple_string(tm->tm_name+1)));
  if (really_do == Cnil)
    RETURN1(Ct);
  add_pages(tm,npages - tm->tm_npage);
  RETURN1(make_fixnum(npages));

}

DEFUN("ALLOCATED-RELOCATABLE-PAGES",object,fSallocated_relocatable_pages,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {
  /* 0 args */
  RETURN1(make_fixnum(nrbpage));
}

DEFUN("GET-HOLE-SIZE",object,fSget_hole_size,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {
  /* 0 args */
  RETURN1((make_fixnum(new_holepage)));
}


#ifdef GCL_GPROF

static unsigned long start,end,gprof_on;
static void *initial_monstartup_pointer;
bool capture_gprof_array=1;
object gprof_array=Cnil;

void
gprof_cleanup(void) {

  extern void _mcleanup(void);

  if (initial_monstartup_pointer) {
    _mcleanup();
    gprof_array=Cnil;
    gprof_on=0;
  }

  if (gprof_on) {

    char b[PATH_MAX],b1[PATH_MAX];

    if (!getcwd(b,sizeof(b)))
      FEerror("Cannot get working directory", 0);
    if (chdir(P_tmpdir))
      FEerror("Cannot change directory to tmpdir", 0);
    _mcleanup();
    if (snprintf(b1,sizeof(b1),"gmon.out.%u",getpid())<=0)
      FEerror("Cannot write temporary gmon filename", 0);
    if (rename("gmon.out",b1))
      FEerror("Cannot rename gmon.out",0);
    if (chdir(b))
      FEerror("Cannot restore working directory", 0);
    gprof_on=0;

  }

}
    
 

DEFUN("GPROF-START",object,fSgprof_start,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
  extern void monstartup(unsigned long,unsigned long);
  extern void *GCL_GPROF_START;
  static int n;

  if (!gprof_on) {
    start=start ? start : textstart;
    end=end ? end : textend;
    capture_gprof_array=1;
    monstartup(start,end);
    gprof_on=1;
    if (!n && atexit(gprof_cleanup)) {
      FEerror("Cannot setup gprof_cleanup on exit", 0);
      n=1;
    }
  }

  return Cnil;

}

DEFUN("GPROF-SET",object,fSgprof_set,SI
       ,2,2,NONE,OI,IO,OO,OO,(fixnum dstart,fixnum dend),"")
{

  start=dstart;
  end=dend;

  return Cnil;

}

DEFUN("GPROF-QUIT",object,fSgprof_quit,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
  extern void _mcleanup(void);
  char b[PATH_MAX],b1[PATH_MAX];
  FILE *pp;
  unsigned n;

  if (!gprof_on)
    return Cnil;

  if (!getcwd(b,sizeof(b)))
    FEerror("Cannot get working directory", 0);
  if (chdir(P_tmpdir))
    FEerror("Cannot change directory to tmpdir", 0);
  _mcleanup();
  gprof_array=Cnil;
  if (snprintf(b1,sizeof(b1),"gprof %s",kcl_self)<=0)
    FEerror("Cannot write gprof command line", 0);
  if (!(pp=popen(b1,"r")))
    FEerror("Cannot open gprof pipe", 0);
  while ((n=fread(b1,1,sizeof(b1),pp)))
    if (!fwrite(b1,1,n,stdout))
      FEerror("Cannot write gprof output",0);
  if (pclose(pp)<0)
    FEerror("Cannot close gprof pipe", 0);
  if (chdir(b))
    FEerror("Cannot restore working directory", 0);
  gprof_on=0;

  return Cnil;

}

#endif

DEFUN("SET-STARTING-HOLE-DIVISOR",fixnum,fSset_starting_hole_divisor,SI,1,1,NONE,II,OO,OO,OO,(fixnum div),"") {
  if (div>0 && div <100)
    starting_hole_div=div;
  return starting_hole_div;
}
  
DEFUN("SET-STARTING-RELBLOCK-DIVISOR",fixnum,fSset_starting_hole_divisor,SI,1,1,NONE,II,OO,OO,OO,(fixnum div),"") {
  if (div>0 && div <100)
    starting_relb_div=div;
  return starting_relb_div;
}
  
DEFUN("SET-HOLE-SIZE",object,fSset_hole_size,SI,1,2,NONE,OI,IO,OO,OO,(fixnum npages,...),"") {

  printf("This function is obsolete -- use SET-STARTING-HOLE-DIVISOR instead\n");

  RETURN2(make_fixnum(new_holepage),make_fixnum(reserve_pages_for_signal_handler));

}


void
gcl_init_alloc_function(void) {
}

object malloc_list;

#ifndef DONT_NEED_MALLOC

/*
	UNIX malloc simulator.

	Used by
		getwd, popen, etc.
*/



/*  If this is defined, substitute the fast gnu malloc for the slower
    version below.   If you have many calls to malloc this is worth
    your while.   I have only tested it slightly under 4.3Bsd.   There
    the difference in a test run with 120K mallocs and frees,
    was 29 seconds to 1.9 seconds */
    
#ifdef GNU_MALLOC
#include "malloc.c"
#else

/* a very young malloc may use this simple baby malloc, for the init
 code before we even get to main.c.  If this is not defined, then
 malloc will try to run the init code which will work on many machines
 but some such as WindowsNT under cygwin need this.
 
 */
#ifdef BABY_MALLOC_SIZE

/* by giving an initialization, make it not be in bss, since
   bss may not get loaded until main is reached.  We may
   not even know our own name at this stage. */
static char baby_malloc_data[BABY_MALLOC_SIZE]={1,0};
static char *last_baby= baby_malloc_data;

static char *baby_malloc(n)
     int n;
{
  char *res= last_baby;
  int m;
  n = ROUND_UP_PTR(n);
   m = n+ sizeof(int);
  if ((res +m-baby_malloc_data) > sizeof(baby_malloc_data))
    {
     printf("failed in baby malloc");
     exit(1);
    }
  last_baby += m;
  *((int *)res)=n;
  return res+sizeof(int);
}
#endif

/*  #ifdef HAVE_LIBBFD */

/*  int in_bfd_init=0; */

/* configure size, static init ? */
/*  static char bfd_buf[32768]; */
/*  static char *bfd_buf_p=bfd_buf; */

/*  static void * */
/*  bfd_malloc(int n) { */

/*    char *c; */

/*    c=bfd_buf_p; */
/*    n+=7; */
/*    n>>=3; */
/*    n<<=3; */
/*    if (c+n>bfd_buf+sizeof(bfd_buf)) { */
/*      fprintf(stderr,"Not enough space in bfd_buf %d %d\n",n,sizeof(bfd_buf)-(bfd_buf_p-bfd_buf)); */
/*      exit(1); */
/*    } */
/*    bfd_buf_p+=n; */
/*    return (void *)c; */

/*  } */
/*  #endif */

void *
malloc(size_t size) {

  static int in_malloc;

  if (in_malloc)
    return NULL;
  in_malloc=1;

  if (!GBC_enable) {

#ifdef BABY_MALLOC_SIZE
    in_malloc=0;
    return baby_malloc(size);
#else	

    if (!initflag)
      gcl_init_alloc();
#ifdef RECREATE_HEAP
    else RECREATE_HEAP
#endif

#endif	

  }      

  CHECK_INTERRUPT;

  malloc_list = make_cons(Cnil, malloc_list);
  
  malloc_list->c.c_car = alloc_simple_string(size);
  
  malloc_list->c.c_car->st.st_self = alloc_contblock(size);
  
  /* FIXME: this is just to handle clean freeing of the
     monstartup memory allocated automatically on raw image
     startup.  In saved images, monstartup memory is only
     allocated with gprof-start. 20040804 CM*/
#ifdef GCL_GPROF
  if (!initflag && size>(textend-textstart) && !initial_monstartup_pointer) 
    initial_monstartup_pointer=malloc_list->c.c_car->st.st_self;
  if (gprof_array==Cnil && capture_gprof_array && size>(textend-textstart)) {
    gprof_array=malloc_list->c.c_car;
    capture_gprof_array=0;
  }
#endif
  
  in_malloc=0;
  return(malloc_list->c.c_car->st.st_self);

}


void
free(void *ptr)
#ifndef NO_VOID_STAR
      
#else
      
#endif  
      
{
  object *p,pp;
	if (ptr == 0)
	  return;
#ifdef BABY_MALLOC_SIZE
	if ((void *)ptr < (void *) &baby_malloc_data[sizeof(baby_malloc_data)])
	  return;
#endif	
	for (p = &malloc_list,pp=*p; pp && !endp(pp);  p = &((pp)->c.c_cdr),pp=Scdr(pp))
		if ((pp)->c.c_car->st.st_self == ptr) {
/* SGC contblock pages: Its possible this is on an old page CM 20030827 */
#ifdef SGC
 			insert_maybe_sgc_contblock((pp)->c.c_car->st.st_self,
						   (pp)->c.c_car->st.st_dim);
#else
 			insert_contblock((pp)->c.c_car->st.st_self,
					 (pp)->c.c_car->st.st_dim);
#endif
			(pp)->c.c_car->st.st_self = NULL;
			*p = Scdr(pp);
#ifdef GCL_GPROF
			if (initial_monstartup_pointer==ptr) {
			  initial_monstartup_pointer=NULL;
			  if (core_end-heap_end>=sizeof(ptr))
			    *(void **)heap_end=ptr;
			}
#endif
			return ;
		}
#ifdef NOFREE_ERR
	return ;
#else	
	if (raw_image==FALSE || core_end-heap_end<sizeof(ptr) || ptr!=*(void **)heap_end) {
	  static void *old_ptr;
	  if (old_ptr==ptr) return;
	  old_ptr=ptr;
	  FEerror("free(3) error.",0);
	}
	return;
#endif	
}

void *
realloc(void *ptr, size_t size) {

  object x;
  int i, j;
  /* was allocated by baby_malloc */
#ifdef BABY_MALLOC_SIZE	
  if (ptr >= (void*)baby_malloc_data && ptr - (void*)baby_malloc_data <BABY_MALLOC_SIZE)
    {
      int dim = ((int *)ptr)[-1];
      if (dim > size)
	return ptr;
      else
	{  char *new= malloc(size);
	bcopy(ptr,new,dim);
	return new;
	}
      
    }
#endif /*  BABY_MALLOC_SIZE	 */
  
  
  if(ptr == NULL) return malloc(size);
  for (x = malloc_list;  !endp(x);  x = x->c.c_cdr)
    if (x->c.c_car->st.st_self == ptr) {
      x = x->c.c_car;
      if (x->st.st_dim >= size) {
	x->st.st_fillp = size;
	return(ptr);
      } else {
	j = x->st.st_dim;
	x->st.st_self = alloc_contblock(size);
	x->st.st_fillp = x->st.st_dim = size;
	for (i = 0;  i < size;  i++)
	  x->st.st_self[i] = ((char *)ptr)[i];
/* SGC contblock pages: Its possible this is on an old page CM 20030827 */
#ifdef SGC
 	insert_maybe_sgc_contblock(ptr, j);
#else
 	insert_contblock(ptr, j);
#endif
	return(x->st.st_self);
      }
    }
  FEerror("realloc(3) error.", 0);

  return NULL;

}

#endif /* gnumalloc */


void *
calloc(size_t nelem, size_t elsize)
{
	char *ptr;
	long i;

	ptr = malloc(i = nelem*elsize);
	while (--i >= 0)
		ptr[i] = 0;
	return(ptr);
}


void
cfree(void *ptr) {
  free(ptr);
}

#endif


#ifndef GNUMALLOC
static void *
memalign(size_t align,size_t size) { 
  object x = alloc_simple_string(size);
  x->st.st_self = ALLOC_ALIGNED(alloc_contblock,size,align);
  malloc_list = make_cons(x, malloc_list);
  return x->st.st_self;
}
#ifdef WANT_VALLOC
void *
valloc(size_t size)
{ return memalign(getpagesize(),size);}
#endif

#endif
