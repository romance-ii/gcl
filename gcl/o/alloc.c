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


DEFVAR("*AFTER-GBC-HOOK*",sSAafter_gbc_hookA,SI,sLnil,"");
DEFVAR("*IGNORE-MAXIMUM-PAGES*",sSAignore_maximum_pagesA,SI,sLt,"");
#define IGNORE_MAX_PAGES (sSAignore_maximum_pagesA ==0 || sSAignore_maximum_pagesA->s.s_dbind !=sLnil) 

static void call_after_gbc_hook(int t);

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

long real_maxpage = MAXPAGE;
long new_holepage;

#define	available_pages	\
	(real_maxpage-page(heap_end)-new_holepage-2*nrbpage-real_maxpage/32)


/*  #ifdef UNIX */
/*  extern char *sbrk(int n); */
/*  #endif */

#ifdef BSD
#include <sys/time.h>
#include <sys/resource.h>
#ifdef RLIMIT_STACK
struct rlimit data_rlimit;
#endif
/* extern char etext; */
#endif

int reserve_pages_for_signal_handler =30;

/* If  (n >= 0 ) return pointer to n pages starting at heap end,
   These must come from the hole, so if that is exhausted you have
   to gc and move the hole.
   if  (n < 0) return pointer to n pages starting at heap end,
   but don't worry about the hole.   Basically just make sure
   the space is available from the Operating system.
   If not in_signal_handler then try to keep a minimum of
   reserve_pages_for_signal_handler pages on hand in the hole
 */
char *
alloc_page(int n)
{
	char *e;
	int m;
	e = heap_end;
	if (n >= 0) {
		if (n >=
		    (holepage - (in_signal_handler? 0 :
				 reserve_pages_for_signal_handler
				)))
		    {
			holepage = new_holepage + n;

			{
#ifdef SGC
			  int in_sgc=sgc_enabled;
			 if (in_sgc) sgc_quit();
#endif
			if(in_signal_handler)
			  {fprintf(stderr,
				   "Cant do relocatable gc in signal handler. \
Try to allocate more space to save for allocation during signals: \
eg to add 20 more do (si::set-hole-size %ld %d)\n...start over ", new_holepage, 20+ reserve_pages_for_signal_handler); fflush(stderr); exit(1);}

			GBC(t_relocatable);
#ifdef SGC
			if (in_sgc)
			  {sgc_start();
			   /* starting sgc can use up some pages
			      and may move heap end, so start over
			    */
			   return alloc_page(n);}
#endif
		       }
		}
		holepage -= n;
		if (heap_end == core_end)
		  /* can happen when mallocs occur before rel block set up..*/
		  { sbrk(PAGESIZE*n) ;
		    core_end += PAGESIZE*n;
		  }
		heap_end += PAGESIZE*n;
		return(e);
	}
     else
       /* n < 0 , then this says ensure there are -n pages
	  starting at heap_end, and return pointer to heap_end */
      {
	n = -n;
	m = (core_end - heap_end)/PAGESIZE;
	if (n <= m)
		return(e);

	IF_ALLOCATE_ERR error("Can't allocate.  Good-bye!");
#ifdef SGC
	if (sgc_enabled)
	  make_writable(page(core_end),page(core_end)+n-m);
#endif	
	core_end += PAGESIZE*(n - m);
	return(e);}
}

void
add_page_to_freelist(char *p, struct typemanager *tm)
{short t,size;
 int i=tm->tm_nppage,fw;
 object x,f;
 t=tm->tm_type;
#ifdef SGC
 {
   int nn=page(p);
   if (sgc_enabled) {
     if (!WRITABLE_PAGE_P(nn)) 
       make_writable(nn,nn+1);
   }
 }
#endif
 type_map[page(p)]= t;
 size=tm->tm_size;
 f=tm->tm_free;
 x= (object)p;
 x->d.t=t;
 x->d.m=FREE;
#ifdef SGC
 if (sgc_enabled && tm->tm_sgc)
   {x->d.s=SGC_RECENT;
    sgc_type_map[page(x)] = (SGC_PAGE_FLAG | SGC_TEMP_WRITABLE);}
 else x->d.s = SGC_NORMAL;
 
 /* array headers must be always writable, since a write to the
    body does not touch the header.   It may be desirable if there
    are many arrays in a system to make the headers not writable,
    but just SGC_TOUCH the header each time you write to it.   this
    is what is done with t_structure */
  if (t== (tm_of(t_array)->tm_type))
   sgc_type_map[page(x)] |= SGC_PERM_WRITABLE;
   
#endif 
 fw= *(int *)x;
 while (--i >= 0)
   { *(int *)x=fw;
     SET_LINK(x,f);
     f=x;
     x= (object) ((char *)x + size);
   }
 tm->tm_free=f;
 tm->tm_nfree += tm->tm_nppage;
 tm->tm_npage++;
}

object
type_name(int t)
{ return make_simple_string(tm_table[(int)t].tm_name+1);}


static void
call_after_gbc_hook(t)
{ if (sSAafter_gbc_hookA && sSAafter_gbc_hookA->s.s_dbind!= Cnil)
    { set_up_string_register(tm_table[(int)t].tm_name+1);
      ifuncall1(sSAafter_gbc_hookA->s.s_dbind,intern(string_register,system_package));
    }
}

/* #define PERCENT_FREE(tm)  ((tm->tm_percent_free ? tm->tm_percent_free : 10)/100.0) */
#define PERCENT_FREE(tm)  ((tm->tm_percent_free ? tm->tm_percent_free : 30)/100.0)

static int
grow_linear(int old, int fract, int grow_min, int grow_max) {
  
  int delt;
  if (fract==0) 
    fract=50;
  if (grow_min==0) 
    grow_min=1;
  if (grow_max==0) 
/*     grow_max=1000; */
    grow_max=0.1*MAXPAGE;

  delt=(old*fract)/100;
  delt= (delt < grow_min ? grow_min:
	 delt > grow_max ? grow_max:
	 delt);

  return old + delt;

}


object
alloc_object(enum type t)
{
	 object obj;
	 struct typemanager *tm;
	 char *p;

ONCE_MORE:
	tm = tm_of(t);

        CHECK_INTERRUPT;	 

	obj = tm->tm_free;
	if (obj == OBJNULL) {
		if (tm->tm_npage >= tm->tm_maxpage)
			goto CALL_GBC;
		if (available_pages < 1) {
		  if (sSAignore_maximum_pagesA) {
			sSAignore_maximum_pagesA->s.s_dbind = Cnil;
			goto CALL_GBC;
		      }
		}
		p = alloc_page(1);
		add_page_to_freelist(p,tm);
		obj = tm->tm_free;
		if (tm->tm_npage >= tm->tm_maxpage)
			goto CALL_GBC;
	}
	tm->tm_free = OBJ_LINK(obj);
	--(tm->tm_nfree);
	(tm->tm_nused)++;
	obj->d.t = (short)t;
	obj->d.m = FALSE;
	return(obj);
#ifdef SGC
#define TOTAL_THIS_TYPE(tm) \
	(tm->tm_nppage * (sgc_enabled ? sgc_count_type(tm->tm_type) : tm->tm_npage))
#else
#define TOTAL_THIS_TYPE(tm) \
	(tm->tm_nppage * tm->tm_npage)
#endif
CALL_GBC:
	GBC(tm->tm_type);
	if (tm->tm_nfree == 0 ||
	    ((float)tm->tm_nfree)  <   (PERCENT_FREE(tm) * TOTAL_THIS_TYPE(tm)))
		goto EXHAUSTED;
	call_after_gbc_hook(t);
	goto ONCE_MORE;

EXHAUSTED:
	if (IGNORE_MAX_PAGES) {
		tm->tm_maxpage =
		    grow_linear(tm->tm_maxpage,tm->tm_growth_percent,
				tm->tm_min_grow,tm->tm_max_grow);
		call_after_gbc_hook(t);
		goto ONCE_MORE;
	}
	GBC_enable = FALSE;
	vs_push(type_name(t));
	vs_push(make_fixnum(tm->tm_npage));
	GBC_enable = TRUE;
	CEerror("The storage for ~A is exhausted.~%\
Currently, ~D pages are allocated.~%\
Use ALLOCATE to expand the space.",
		"Continues execution.",
		2, vs_top[-2], vs_top[-1], Cnil, Cnil);
	vs_popp;
	vs_popp;
	call_after_gbc_hook(t);
	goto ONCE_MORE;
}

object
make_cons(object a, object d)
{
	 object obj;
	 char *p;
	struct typemanager *tm=(&tm_table[(int)t_cons]);

ONCE_MORE:
        CHECK_INTERRUPT;
	obj = tm->tm_free;
	if (obj == OBJNULL) {
		if (tm->tm_npage >= tm->tm_maxpage)
			goto CALL_GBC;
		if (available_pages < 1) {
		   if(sSAignore_maximum_pagesA) {
			sSAignore_maximum_pagesA->s.s_dbind = Cnil;
			goto CALL_GBC;
		      }
		}
		p = alloc_page(1);
		add_page_to_freelist(p,tm);
		obj = tm->tm_free ;
		if (tm->tm_npage >= tm->tm_maxpage)
			goto CALL_GBC;
	}
	tm->tm_free = OBJ_LINK(obj);
	--(tm->tm_nfree);
	(tm->tm_nused)++;
	obj->c.t = (short)t_cons;
	obj->c.m = FALSE;
	obj->c.c_car = a;
	obj->c.c_cdr = d;
	return(obj);

CALL_GBC:
	GBC(t_cons);
	if (tm->tm_nfree == 0 ||
	    (float)tm->tm_nfree   <  PERCENT_FREE(tm) * TOTAL_THIS_TYPE(tm))
		goto EXHAUSTED;
	call_after_gbc_hook(t_cons);
	goto ONCE_MORE;

EXHAUSTED:
	if (IGNORE_MAX_PAGES) {
	  tm->tm_maxpage =
	    grow_linear(tm->tm_maxpage,tm->tm_growth_percent,
			tm->tm_min_grow,tm->tm_max_grow);
	  call_after_gbc_hook(t_cons);
	  goto ONCE_MORE;
	}
	GBC_enable = FALSE;
	vs_push(make_fixnum(tm->tm_npage));
	GBC_enable = TRUE;
	CEerror("The storage for CONS is exhausted.~%\
Currently, ~D pages are allocated.~%\
Use ALLOCATE to expand the space.",
		"Continues execution.",
		1, vs_top[-1],Cnil,Cnil,Cnil);
	vs_popp;
	call_after_gbc_hook(t_cons);
	goto ONCE_MORE;
#undef	tm
}


object on_stack_cons(object x, object y)
{object p = (object) alloca_val;
 p->c.t= (short)t_cons;
 p->c.m=FALSE;
 p->c.c_car=x;
 p->c.c_cdr=y;
 return p;
}


DEFUN_NEW("ALLOCATED",object,fSallocated,SI,1,1,NONE,OO,OO,OO,OO,(object typ),"")
{ struct typemanager *tm=(&tm_table[t_from_type(typ)]);
  tm = & tm_table[tm->tm_type];
  if (tm->tm_type == t_relocatable)
    { tm->tm_npage = (rb_end-rb_start)/PAGESIZE;
      tm->tm_nfree = rb_end -rb_pointer;
    }
  else if (tm->tm_type == t_contiguous)
    { int cbfree =0;
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
	     RV(make_fixnum(tm->tm_nused))
	     ));
}
 
DEFUN_NEW("RESET-NUMBER-USED",object,fSreset_number_used,SI,0,1,NONE,OO,OO,OO,OO,(object typ),"")
{int i;
 if (VFUN_NARGS == 1)
   { tm_table[t_from_type(typ)].tm_nused = 0;}
 else
 for (i=0; i <= t_relocatable ; i++)
   { tm_table[i].tm_nused = 0;}
  RETURN1(sLnil);
}


void *
alloc_contblock(size_t n) {
	 char *p;
	 struct contblock **cbpp;
	 int i;
	 int m;
	 bool g;


/*
	printf("allocating %d-byte contiguous block...\n", n);
*/
	 /* SGC cont pages: contiguous pointers must be aligned at
	    CPTR_ALIGN, no smaller than sizeof (struct contblock).
	    Here we allocate a bigger block, and rely on the fact that
	    allocate_page returns pointers appropriately aligned,
	    being also aligned on page boundaries.  Protection against
	    a too small contblock was aforded before by a minimum
	    contblock size enforced by CBMINSIZE in insert_contblock.
	    However, this leads to a leak when many small cont blocks
	    are allocated, e.g. with bignums, so is now removed.  CM
	    20030827 */

	g = FALSE;
	n = ROUND_UP_PTR_CONT(n);

ONCE_MORE:
	 CHECK_INTERRUPT;
	for(cbpp= &cb_pointer; (*cbpp)!=NULL; cbpp= &(*cbpp)->cb_link)
		if ((*cbpp)->cb_size >= n) {
			p = (char *)(*cbpp);
			i = (*cbpp)->cb_size - n;
			*cbpp = (*cbpp)->cb_link;
			--ncb;
			insert_contblock(p+n, i);
			return(p);
		}
	m = (n + PAGESIZE - 1)/PAGESIZE;
       if(sSAignore_maximum_pagesA) {
	if (ncbpage + m > maxcbpage || available_pages < m) {
		if (available_pages < m)
			sSAignore_maximum_pagesA->s.s_dbind = Cnil;
		if (!g) {
			GBC(t_contiguous);
			g = TRUE;
			call_after_gbc_hook(t_contiguous);
			goto ONCE_MORE;
		}
		if (IGNORE_MAX_PAGES)
		  {struct typemanager *tm = &tm_table[(int)t_contiguous];
		   maxcbpage=grow_linear(maxcbpage,tm->tm_growth_percent,
			      tm->tm_min_grow, tm->tm_max_grow);
			g = FALSE;
			call_after_gbc_hook(t_contiguous);
			goto ONCE_MORE;
		}
		vs_push(make_fixnum(ncbpage));
		CEerror("Contiguous blocks exhausted.~%\
Currently, ~D pages are allocated.~%\
Use ALLOCATE-CONTIGUOUS-PAGES to expand the space.",
			"Continues execution.", 1, vs_head,Cnil,Cnil,Cnil);
		vs_popp;
		g = FALSE;
		call_after_gbc_hook(t_contiguous);
		goto ONCE_MORE;
	}
      }
	p = alloc_page(m);

	for (i = 0;  i < m;  i++) {
		type_map[page(p) + i] = (char)t_contiguous;

		/* SGC cont pages: Before this point, GCL never marked contiguous
		   pages for SGC, causing no contiguous pages to be
		   swept when SGC was on.  Here we follow the behavior
		   for other pages in add_to_freelist. CM 20030827  */
#ifdef SGC
		if (SGC_CONT_ENABLED)
		  sgc_type_map[page(p)+i]|= SGC_PAGE_FLAG;
#endif
	}
	ncbpage += m;
	insert_contblock(p+n, PAGESIZE*m - n);
	return(p);
}

/* SGC cont pages: explicit free calls can come at any time, and we
   must make sure to add the newly deallocated block to the right
   list.  CM 20030827*/
#ifdef SGC
void
insert_maybe_sgc_contblock(char *p,int s) {

  struct contblock *tmp_cb_pointer;

  if (SGC_CONT_ENABLED && ! SGC_PAGE_P(page(p))) {
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

void *
alloc_relblock(size_t n) {

	 char *p;
	 bool g;

	int i;

/*
	printf("allocating %d-byte relocatable block...\n", n);
*/

	g = FALSE;
	n = ROUND_UP_PTR(n);

ONCE_MORE:
        CHECK_INTERRUPT;

	if (rb_limit - rb_pointer < n) {
		if (!g && in_signal_handler == 0) {
			GBC(t_relocatable);
			g = TRUE;
			{ float f1 = (float)(rb_limit - rb_pointer),
				f2 = (float)(rb_limit - rb_start);

				if ((float)f1 < PERCENT_FREE(tm_of(t_relocatable)) * f2) 
				;
			else
			  {	call_after_gbc_hook(t_relocatable);
				goto ONCE_MORE;
					      }}
		}
		if (IGNORE_MAX_PAGES)
		  {struct typemanager *tm = &tm_table[(int)t_relocatable];
		   nrbpage=grow_linear(i=nrbpage,tm->tm_growth_percent,
			      tm->tm_min_grow, tm->tm_max_grow);
		   if (available_pages < 0)
		     nrbpage = i;
		   else {
			  rb_end +=  (PAGESIZE* (nrbpage -i));
			  rb_limit = rb_end - 2*RB_GETA;
			  if (page(rb_end) - page(heap_end) !=
			      holepage + nrbpage)
			    FEerror("bad rb_end",0);
			  alloc_page(-( nrbpage + holepage));
			  g = FALSE;
			  call_after_gbc_hook(t_relocatable);
			  goto ONCE_MORE;
			}
		}
		if (rb_limit > rb_end - 2*RB_GETA)
			error("relocatable blocks exhausted");
		rb_limit += RB_GETA;
		vs_push(make_fixnum(nrbpage));
		CEerror("Relocatable blocks exhausted.~%\
Currently, ~D pages are allocated.~%\
Use ALLOCATE-RELOCATABLE-PAGES to expand the space.",
			"Continues execution.", 1, vs_head,Cnil,Cnil,Cnil);
		vs_popp;
		g = FALSE;
		call_after_gbc_hook(t_relocatable);
		goto ONCE_MORE;
	}
	p = rb_pointer;
	rb_pointer += n;
	return(p);
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
  /* round up to next number of pages */
  maxpage = (((nelts * elsize) + PAGESIZE -1)/PAGESIZE);
  tm_table[(int)t].tm_name = name;
  j=-1;
  if (!distinct)
    for (i = 0;  i < (int)t_end;  i++)
      if (tm_table[i].tm_size != 0 &&
	  tm_table[i].tm_size >= elsize &&
	  !tm_table[i].tm_distinct &&
	  (j < 0 || tm_table[j].tm_size > tm_table[i].tm_size))
	j = i;
  if (j >= 0) {
    tm_table[(int)t].tm_type = (enum type)j;
    tm_table[j].tm_maxpage += maxpage;
#ifdef SGC		
    tm_table[j].tm_sgc += sgc;
#endif
    return;
  }
  tm_table[(int)t].tm_type = t;
  tm_table[(int)t].tm_size = ROUND_UP_PTR(elsize);
  tm_table[(int)t].tm_nppage = PAGESIZE/ROUND_UP_PTR(elsize);
  tm_table[(int)t].tm_free = OBJNULL;
  tm_table[(int)t].tm_nfree = 0;
  tm_table[(int)t].tm_nused = 0;
  /*tm_table[(int)t].tm_npage = 0; */  /* dont zero nrbpage.. */
  tm_table[(int)t].tm_maxpage = maxpage;
  tm_table[(int)t].tm_gbccount = 0;
  tm_table[(int)t].tm_distinct=distinct;
#ifdef SGC	
  tm_table[(int)t].tm_sgc = sgc;
  tm_table[(int)t].tm_sgc_max = 3000;
  tm_table[(int)t].tm_sgc_minfree = (int)
    (0.4 * tm_table[(int)t].tm_nppage);
#endif
  
}

void
set_maxpage(void) {

  /* This is run in init.  Various initializations including getting
     maxpage are here */ 
#ifdef SGC
  page_multiple=getpagesize()/PAGESIZE;
  if (page_multiple==0) error("PAGESIZE must be factor of getpagesize()");
  if (sgc_enabled)
    {memory_protect(1);}
  if (~(-MAXPAGE) != MAXPAGE-1) error("MAXPAGE must be power of 2");
  if (core_end)
    bzero(&sgc_type_map[ page(core_end)],MAXPAGE- page(core_end));
#else
  page_multiple=1;
#endif
  
  SET_REAL_MAXPAGE;

}


void
gcl_init_alloc(void) {

  int i;
  static int initialized;
#ifdef GCL_GPROF
   extern void *_start;
   unsigned textpage=2*((void *)&etext-(void *)&_start)/PAGESIZE;
#endif
  
  if (initialized) return;
  initialized=1;
  
  
#ifndef DONT_NEED_MALLOC	
  
  {
    extern object malloc_list;
    malloc_list = Cnil;
    enter_mark_origin(&malloc_list);
  }
#endif	
  
  holepage = INIT_HOLEPAGE;
#ifdef GCL_GPROF
  if (holepage<textpage)
     holepage=textpage;
#endif

  new_holepage = HOLEPAGE;
  nrbpage = INIT_NRBPAGE;
  
  set_maxpage();
  
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

#ifdef INIT_ALLOC  
  INIT_ALLOC;
#endif  
  
  alloc_page(-(holepage + nrbpage));
  
  rb_start = rb_pointer = heap_end + PAGESIZE*holepage;
  rb_end = rb_start + PAGESIZE*nrbpage;
  rb_limit = rb_end - 2*RB_GETA;
#ifdef SGC	
  tm_table[(int)t_relocatable].tm_sgc = 50;
#endif
  
  for (i = 0;  i < MAXPAGE;  i++)
    type_map[i] = (char)t_other;
  
  /* Unused (at present) tm_distinct flag added.  Note that if cons
     and fixnum share page types, errors will be introduced.

     Gave each page type at least some sgc pages by default.  Of
     course changeable by allocate-sgc.  CM 20030827 */

  init_tm(t_fixnum, "NFIXNUM",
	  sizeof(struct fixnum_struct), 8192,20,0);
  init_tm(t_cons, ".CONS", sizeof(struct cons), 65536 ,50,0 );
  init_tm(t_structure, "SSTRUCTURE", sizeof(struct structure), 5461,1,0 );
  init_tm(t_cfun, "fCFUN", sizeof(struct cfun), 4096,1,0  );
  init_tm(t_sfun, "gSFUN", sizeof(struct sfun),409,1,0 );
  init_tm(t_string, "\"STRING", sizeof(struct string), 5461,1,0  );
  init_tm(t_array, "aARRAY", sizeof(struct array), 4681,1,0 );
  init_tm(t_symbol, "|SYMBOL", sizeof(struct symbol), 3640,1,0 );
  init_tm(t_bignum, "BBIGNUM", sizeof(struct bignum), 2730,1,0 );
  init_tm(t_ratio, "RRATIONAL", sizeof(struct ratio), 170,1,0 );
  init_tm(t_shortfloat, "FSHORT-FLOAT",
	  sizeof(struct shortfloat_struct), 256 ,1,0);
  init_tm(t_longfloat, "LLONG-FLOAT",
	  sizeof(struct longfloat_struct), 170 ,1,0);
  init_tm(t_complex, "CCOMPLEX", sizeof(struct complex), 170 ,1,0);
  init_tm(t_character,"#CHARACTER",sizeof(struct character), 256 ,1,0);
  init_tm(t_package, ":PACKAGE", sizeof(struct package), 2*PAGESIZE / sizeof(struct package),1,0);
  init_tm(t_hashtable, "hHASH-TABLE", sizeof(struct hashtable), 78,1,0 );
  init_tm(t_vector, "vVECTOR", sizeof(struct vector), 146 ,1,0);
  init_tm(t_bitvector, "bBIT-VECTOR", sizeof(struct bitvector), 73 ,1,0);
  init_tm(t_stream, "sSTREAM", sizeof(struct stream), 78 ,1,0);
  init_tm(t_random, "$RANDOM-STATE", sizeof(struct random), 256 ,1,0);
  init_tm(t_readtable, "rREADTABLE", sizeof(struct readtable), 256 ,1,0);
  init_tm(t_pathname, "pPATHNAME", sizeof(struct pathname), 73 ,1,0);
  init_tm(t_cclosure, "cCCLOSURE", sizeof(struct cclosure), 85 ,1,0);
  init_tm(t_closure, "cCLOSURE", sizeof(struct cclosure), 85 ,1,0);
  init_tm(t_vfun, "VVFUN", sizeof(struct vfun), 102 ,1,0);
  init_tm(t_gfun, "gGFUN", sizeof(struct sfun), 0 ,1,0);
  init_tm(t_afun, "AAFUN", sizeof(struct sfun), 0 ,1,0);
  init_tm(t_cfdata, "cCFDATA", sizeof(struct cfdata), 102 ,1,0);
  init_tm(t_spice, "!SPICE", sizeof(struct spice), 4096 ,1,0);
  init_tm(t_relocatable, "%RELOCATABLE-BLOCKS", 1000,0,20,0);
  init_tm(t_contiguous, "_CONTIGUOUS-BLOCKS", 1001,0,20,0);
  tm_table[t_relocatable].tm_nppage = PAGESIZE;
  tm_table[t_contiguous].tm_nppage = PAGESIZE;
  
  
  ncb = 0;
  ncbpage = 0;
  maxcbpage = 512;
#ifdef GCL_GPROF
  if (maxcbpage<textpage)
     maxcbpage=textpage;
#endif
  
}

DEFUN_NEW("STATICP",object,fSstaticp,SI,1,1,NONE,OO,OO,OO,OO,(object x),"Tell if the string or vector is static") 
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
  for (i= (int)t_start ; i < (int)t_other ; i++)
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

DEFUN_NEW("ALLOCATE-SGC",object,fSallocate_sgc,SI
      ,4,4,NONE,OO,II,II,OO,(object type,fixnum min,fixnum max,fixnum free_percent),"") {

  int t=t_from_type(type);
  struct typemanager *tm;
  object res,x,x1,x2;
  tm=tm_of(t);
  x=make_fixnum(tm->tm_sgc);
  x1=make_fixnum(tm->tm_sgc_max);
  x2=make_fixnum((100*tm->tm_sgc_minfree)/tm->tm_nppage);
  res= list(3,x,x1,x2);
  
  if(min<0 || max< min || min > 3000 || free_percent < 0 || free_percent > 100)
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
DEFUN_NEW("ALLOCATE-GROWTH",object,fSallocate_growth,SI,5,5,NONE,OO,II,II,OO,
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
 tm->tm_growth_percent= percent;
 tm->tm_percent_free= percent_free;
 END:
 RETURN1(res);
}



DEFUN_NEW("ALLOCATE-CONTIGUOUS-PAGES",object,fSallocate_contiguous_pages,SI
       ,1,2,NONE,OI,OO,OO,OO,(fixnum npages,...),"")
{

  int nargs=VFUN_NARGS,i,m;
  object really_do;
  va_list ap;
  char *p=NULL;
  
  really_do=Cnil;
  if (nargs>=2) {
    va_start(ap,npages);
    really_do=va_arg(ap,object);
    va_end(ap);
  }
  
  CHECK_ARG_RANGE(1,2);
  if  (npages  < 0)
    FEerror("Allocate requires positive argument.", 0);
  if (ncbpage > npages) { 
    printf("Allocate contiguous %ld: %d already there pages",npages,ncbpage);
    npages=ncbpage;
  }
  maxcbpage = npages;
  if (really_do == Cnil) 
    RETURN1(Ct);
  m = maxcbpage - ncbpage;
  if (available_pages < m || (p = alloc_page(m)) == NULL)
    FEerror("Can't allocate ~D pages for contiguous blocks.",
	    1, make_fixnum(npages));

  for (i = 0;  i < m;  i++) {
    type_map[page(p + PAGESIZE*i)] = (char)t_contiguous;
    /* SGC cont pages: Before this point, GCL never marked contiguous
       pages for SGC, causing no contiguous pages to be
       swept when SGC was on.  Here we follow the behavior
       for other pages in add_to_freelist. CM 20030827  */
#ifdef SGC
    if (SGC_CONT_ENABLED)
      sgc_type_map[page(p)+i]|= SGC_PAGE_FLAG;
#endif
  }

  ncbpage += m;
  insert_contblock(p, PAGESIZE*m);
  RETURN1(Ct);

}


DEFUN_NEW("ALLOCATED-CONTIGUOUS-PAGES",object,fSallocated_contiguous_pages,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	/* 0 args */
	RETURN1((make_fixnum(ncbpage)));
}

DEFUN_NEW("MAXIMUM-CONTIGUOUS-PAGES",object,fSmaximum_contiguous_pages,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	/* 0 args */
	RETURN1((make_fixnum(maxcbpage)));
}


DEFUN_NEW("ALLOCATE-RELOCATABLE-PAGES",object,fSallocate_relocatable_pages,SI
       ,1,2,NONE,OI,OO,OO,OO,(fixnum npages,...),"")
{

  int nargs=VFUN_NARGS;
  object really_do;
  va_list ap;
  
  really_do=Cnil;
  if (nargs>=2) {
    va_start(ap,npages);
    really_do=va_arg(ap,object);
    va_end(ap);
  }
    
  CHECK_ARG_RANGE(1,2);
  if (npages  <= 0)
    FEerror("Requires positive arg",0);
  if ((nrbpage > npages && rb_pointer >= rb_start + PAGESIZE*npages - 2*RB_GETA)
      || 2*npages > real_maxpage-page(heap_end)-new_holepage-real_maxpage/32)
    FEerror("Can't set the limit for relocatable blocks to ~D.",
	    1, make_fixnum(npages));
  rb_end += (npages-nrbpage)*PAGESIZE;
  nrbpage = npages;
  rb_limit = rb_end - 2*RB_GETA;
  alloc_page(-(holepage + nrbpage));
  vs_top = vs_base;
  vs_push(Ct);
  RETURN1(make_fixnum(npages));

}

DEFUN_NEW("ALLOCATE",object,fSallocate,SI
       ,2,3,NONE,OO,IO,OO,OO,(object type,fixnum npages,...),"")
{

  int nargs=VFUN_NARGS;
  object really_do;
  va_list ap;
  struct typemanager *tm;
  char *pp=NULL;
  int t;
  
  really_do=Cnil;
  if (nargs>=3) {
    va_start(ap,npages);
    really_do=va_arg(ap,object);
    va_end(ap);
  }
  
  CHECK_ARG_RANGE(2,3);
  t= t_from_type(type);
  if  (npages <= 0)
    FEerror("Allocate takes positive argument.", 1,
			make_fixnum(npages));
  tm = tm_of(t);
  if (tm->tm_npage > npages) {npages=tm->tm_npage;}
  tm->tm_maxpage = npages;
  if (really_do != Cnil &&
      tm->tm_maxpage > tm->tm_npage)
    goto ALLOCATE;

  RETURN1(Ct);
  
       ALLOCATE:
  if (t == t_contiguous) 
    FUNCALL(2,FFN(fSallocate_contiguous_pages)(npages,really_do));
  
  else
    if (t==t_relocatable) 
      FUNCALL(2,FFN(fSallocate_relocatable_pages)(npages,really_do));
    else {
      
      if (available_pages < tm->tm_maxpage - tm->tm_npage ||
	  (pp = alloc_page(tm->tm_maxpage - tm->tm_npage)) == NULL) {
	FEerror("Can't allocate ~D pages for ~A.", 2,
		make_fixnum(npages), (make_simple_string(tm->tm_name+1)));
      }
      for (;  tm->tm_npage < tm->tm_maxpage;  pp += PAGESIZE)
	add_page_to_freelist(pp,tm);}
  
  RETURN1(Ct);

}

DEFUN_NEW("ALLOCATED-RELOCATABLE-PAGES",object,fSallocated_relocatable_pages,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	/* 0 args */
	RETURN1(make_fixnum(nrbpage));
}

DEFUN_NEW("GET-HOLE-SIZE",object,fSget_hole_size,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	/* 0 args */
	RETURN1((make_fixnum(new_holepage)));
}


#ifdef GCL_GPROF

static unsigned long start,end,gprof_on;

DEFUN_NEW("GPROF-START",object,fSgprof_start,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
  extern void monstartup(unsigned long,unsigned long);
  extern void *_start;

  if (!gprof_on) {
    start=start ? start : (unsigned long)&_start;
    end=end ? end : (unsigned long)core_end;
    monstartup(start,end);
    gprof_on=1;
  }

  return Cnil;

}

DEFUN_NEW("GPROF-SET",object,fSgprof_set,SI
       ,2,2,NONE,OI,IO,OO,OO,(fixnum dstart,fixnum dend),"")
{

  start=dstart;
  end=dend;

  return Cnil;

}

DEFUN_NEW("GPROF-QUIT",object,fSgprof_quit,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
  extern void _mcleanup(void);
  char b[PATH_MAX],b1[PATH_MAX];
  FILE *pp;
  unsigned n;

  if (!gprof_on)
    return Cnil;

  if (!getwd(b))
    FEerror("Cannot get working directory", 0);
  if (chdir(P_tmpdir))
    FEerror("Cannot change directory to tmpdir", 0);
  _mcleanup();
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

DEFUN_NEW("SET-HOLE-SIZE",object,fSset_hole_size,SI
       ,1,2,NONE,OI,IO,OO,OO,(fixnum npages,...),"")
{

  int nargs=VFUN_NARGS;
  int reserve;
  va_list ap;

  reserve=30;
  if (nargs>=2) {
    va_start(ap,npages);
    reserve=va_arg(ap,fixnum);
    va_end(ap);
  }
  
  if (npages < 1 ||
      npages > real_maxpage - page(heap_end)
      - 2*nrbpage - real_maxpage/32)
    FEerror("Illegal value for the hole size.", 0);
  new_holepage = npages;
  if (VFUN_NARGS ==2)
    {
      if (reserve <0 || reserve > new_holepage)
	FEerror("Illegal value for the hole size.", 0);
      reserve_pages_for_signal_handler = reserve;}
  
  RETURN2(make_fixnum(npages),
	  make_fixnum(reserve_pages_for_signal_handler));

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
        object x;
	
/*  #ifdef HAVE_LIBBFD */
/*  	if (in_bfd_init) */
/*  	  return bfd_malloc(size); */
/*  #endif */

#ifdef BABY_MALLOC_SIZE
	if (GBC_enable == 0) return baby_malloc(size);
#else	
	if (GBC_enable==0) {
	   if ( initflag ==0)
	     gcl_init_alloc();
	   else {
#ifdef	     RECREATE_HEAP
	     	RECREATE_HEAP
#endif
		;
	   }
	}

#endif	
      

	x = alloc_simple_string(size);

	x->st.st_self = alloc_contblock(size);
#ifdef SGC
	perm_writable(x->st.st_self,size);
#endif
	malloc_list = make_cons(x, malloc_list);

	return(x->st.st_self);
}


void
free(void *ptr)
#ifndef NO_VOID_STAR
      
#else
      
#endif  
      
{
	object *p;
	if (ptr == 0)
	  return;
#ifdef BABY_MALLOC_SIZE
	if ((void *)ptr < (void *) &baby_malloc_data[sizeof(baby_malloc_data)])
	  return;
#endif	
	for (p = &malloc_list; *p && !endp(*p);  p = &((*p)->c.c_cdr))
		if ((*p)->c.c_car->st.st_self == ptr) {
/* SGC contblock pages: Its possible this is on an old page CM 20030827 */
#ifdef SGC
 			insert_maybe_sgc_contblock((*p)->c.c_car->st.st_self,
						   (*p)->c.c_car->st.st_dim);
#else
 			insert_contblock((*p)->c.c_car->st.st_self,
					 (*p)->c.c_car->st.st_dim);
#endif
			(*p)->c.c_car->st.st_self = NULL;
			*p = (*p)->c.c_cdr;
			return ;
		}
#ifdef NOFREE_ERR
	return ;
#else	
	FEerror("free(3) error.",0);
	return;
#endif	
}

void *
realloc(void *ptr, size_t size) {

  object x;
  int i, j;
  /* was allocated by baby_malloc */
#ifdef BABY_MALLOC_SIZE	
  if (ptr >= baby_malloc_data && ptr -baby_malloc_data <BABY_MALLOC_SIZE)
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
	int i;

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
