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
  GBC.c
  IMPLEMENTATION-DEPENDENT
*/

#define	DEBUG

#define IN_GBC
#define NEED_MP_H
#include <string.h>
#include <stdlib.h>
#include "include.h"
#include "page.h"


#ifdef SGC
static void
sgc_contblock_sweep_phase(void);

static void
sgc_sweep_phase(void);

static void
sgc_mark_phase(void);

static int
sgc_count_writable(int);

#endif

static void
mark_c_stack(jmp_buf, int, void (*)(void *,void *,int));

static void
mark_contblock(void *, fixnum);

static void
mark_object(object);


/* the following in line definitions seem to be twice as fast (at
   least on mc68020) as going to the assembly function calls in bitop.c so
   since this is more portable and faster lets use them --W. Schelter
   These assume that DBEGIN is divisible by 32, or else we should have
   #define Shamt(x) (((((int) x -DBEGIN) >> 2) & ~(~0 << 5)))
*/ 
#define BBITS_CHAR 3

#if SIZEOF_LONG == 4
#define BBYTES_LONG 2
#elif SIZEOF_LONG == 8
#define BBYTES_LONG 3
#else
#error Do not recognize SIZEOF_LONG
#endif

#if CPTR_ALIGN == 8
#define BBYTES_CONTBLOCK 3
#elif CPTR_ALIGN == 16
#define BBYTES_CONTBLOCK 4
#else
#error Do not recognize CPTR_ALIGN
#endif

#define BBITS_LONG (BBYTES_LONG+BBITS_CHAR)
#define BCHARS_TABLE (BBITS_LONG+BBYTES_CONTBLOCK)

#define Shamt(x) (((((unsigned long) x) >> BBYTES_CONTBLOCK) & ~(~0 << BBITS_LONG)))
#define Madr(x) (mark_table+((((unsigned long) x) - ((unsigned long)DBEGIN)) >> (BCHARS_TABLE)))
#define get_mark_bit(x) (*(Madr(x)) >> Shamt(x) & 1)
#define set_mark_bit(x) ((*(Madr(x))) |= ((unsigned long)1 << Shamt(x)))

/*  #define Shamt(x) (((((long) x) >> 3) & ~(~0 << 6))) */
/*  #define Madr(x) (mark_table+((((long) x) - ((long)DBEGIN)) >> (9))) */
/*  #define get_mark_bit(x) (*(Madr(x)) >> Shamt(x) & 1) */
/*  #define set_mark_bit(x) ((*(Madr(x))) |= ((unsigned long)1 << Shamt(x))) */

#ifdef KCLOVM
void mark_all_stacks();
bool ovm_process_created; 
#endif


static int gc_time         = -1;
static int gc_start        = 0;
static int gc_recursive    = 0;
#ifdef SGC
int sgc_enabled=0;
#endif
long first_protectable_page = 0;

int runtime(void);

static void *copy_relblock(char *p, ufixnum s);

extern bool saving_system;
extern long real_maxpage;
extern long new_holepage;

/* #define	available_pages	\ */
/* 	(real_maxpage-page(heap_end)-(new_holepage>=holepage ? new_holepage : holepage)-2*nrbpage-real_maxpage/32) */

struct apage {
  char apage_self[PAGESIZE];
};

long maxpage;

object sSAnotify_gbcA;

#ifdef DEBUG
bool debug;
object sSAgbc_messageA;
#endif

#define	MARK_ORIGIN_MAX		300
#define	MARK_ORIGIN_BLOCK_MAX	20

#ifdef AV
/*
  See bitop.c.
*/
#endif
#ifdef MV














#endif

object *mark_origin[MARK_ORIGIN_MAX];
int mark_origin_max;

struct {
  object	*mob_addr;	/*  mark origin block address  */
  int	mob_size;	/*  mark origin block size  */
} mark_origin_block[MARK_ORIGIN_BLOCK_MAX];
int mark_origin_block_max;

/* must be a long * to match with SIZEOF_LONG usage above*/
long *mark_table;

enum type what_to_collect;



void
enter_mark_origin(object *p)
{
/*   if (np>=MAXPAGE) */
/*     error("Address supplied to enter_mar_origin out of range"); */
  if (mark_origin_max >= MARK_ORIGIN_MAX)
    error("too many mark origins");
#ifdef SGC
 {
   unsigned long np=page(p);
   if (np<MAXPAGE)
     sgc_type_map[np] |= SGC_PERM_WRITABLE ;
 }
#endif	
  mark_origin[mark_origin_max++] = p;
}

/* static void */
/* enter_mark_origin_block(object *p, int n) { */
/*   if (mark_origin_block_max >= MARK_ORIGIN_BLOCK_MAX) */
/*     error("too many mark origin blocks"); */
/*   mark_origin_block[mark_origin_block_max].mob_addr = p; */
/*   mark_origin_block[mark_origin_block_max++].mob_size = n; */
/* } */

static void *mcsh,*mcsl;

static void
mark_cons(object x) {
  
  cs_check(x);
  
#if CSTACK_DIRECTION == -1
  if (mcsl>(void *)&x)
#else
  if (mcsl<(void *)&x)
#endif
    mcsl=&x;

  /*  x is already marked.  */
  
 BEGIN:  
  if (NULL_OR_ON_C_STACK(x->c.c_car)) goto MARK_CDR;
  if (consp(x->c.c_car)) {
    if (is_marked_or_free(x->c.c_car))
      ;
    else {
      mark(x->c.c_car);
      mark_cons(x->c.c_car);
    }
  } else
    mark_object(x->c.c_car);
 MARK_CDR:  
  if (NULL_OR_ON_C_STACK(x->c.c_cdr))
    return;
  x = Scdr(x);
  if (consp(x)) {
    if (is_marked_or_free(x))
      return;
    mark(x);
    goto BEGIN;
  }
  if (x == Cnil)
    return;
  mark_object(x);
}

/* Whenever two arrays are linked together by displacement,
   if one is live, the other will be made live */
#define mark_displaced_field(ar) mark_object(ar->a.a_displaced)

static void
mark_object(object x) {
  
  fixnum i,j;
  object *p;
  void *cp;
  
  cs_check(x);
#if CSTACK_DIRECTION == -1
  if (mcsl>(void *)&cp)
#else
  if (mcsl<(void *)&cp)
#endif
    mcsl=&cp;

 BEGIN:
  /* if the body of x is in the c stack, its elements
     are marked anyway by the c stack mark carefully, and
     if this x is somehow hanging around in a cons that
     should be dead, we dont want to mark it. -wfs
  */
  
  if (NULL_OR_ON_C_STACK(x))
    return;
  if (is_marked_or_free(x))
    return;
  mark(x);
  switch (type_of(x)) {
  case t_fixnum:
    break;
    
  case t_ratio:
    mark_object(x->rat.rat_num);
    x = x->rat.rat_den;
    goto BEGIN;
    
  case t_shortfloat:
    break;
    
  case t_longfloat:
    break;
    
  case t_complex:
    mark_object(x->cmp.cmp_imag);
    x = x->cmp.cmp_real;
    goto BEGIN;
    
  case t_character:
    break;
    
  case t_symbol:
    mark_object(x->s.s_plist);
    mark_object(x->s.s_gfdef);
    mark_object(x->s.s_dbind);
    if (x->s.s_hpack!=Cnil && x->s.s_hpack->p.p_name==Cnil) {
      x->s.s_hpack=Cnil;
      x->s.tt=0;
    }
/*       mark_object(x->s.s_hpack); */
    if (x->s.s_self == NULL)
      break;
    if ((int)what_to_collect >= (int)t_contiguous) {
      if (inheap(x->s.s_self)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(x->s.s_self,
			 x->s.s_fillp);
      } else
	x->s.s_self =
	  copy_relblock(x->s.s_self, x->s.s_fillp);
    }
    break;
    
  case t_package:
    mark_object(x->p.p_name);
    mark_object(x->p.p_nicknames);
    mark_object(x->p.p_shadowings);
    mark_object(x->p.p_uselist);
    mark_object(x->p.p_usedbylist);
    if (what_to_collect != t_contiguous)
      break;
    if (x->p.p_internal != NULL)
      mark_contblock((char *)(x->p.p_internal),
		     x->p.p_internal_size*sizeof(object));
    if (x->p.p_external != NULL)
      mark_contblock((char *)(x->p.p_external),
		     x->p.p_external_size*sizeof(object));
    break;
    
  case t_cons:
    /*
      mark_object(x->c.c_car);
      x = x->c.c_cdr;
      goto BEGIN;
    */
    mark_cons(x);
    break;
    
  case t_hashtable:
    mark_object(x->ht.ht_rhsize);
    mark_object(x->ht.ht_rhthresh);
    if (x->ht.ht_self == NULL)
      break;
    for (i = 0, j = x->ht.ht_size;  i < j;  i++) {
      mark_object(x->ht.ht_self[i].hte_key);
      mark_object(x->ht.ht_self[i].hte_value);
    }
    if ((short)what_to_collect >= (short)t_contiguous) {
      if (inheap(x->ht.ht_self)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock((char *)(x->ht.ht_self),
			 j * sizeof(struct htent));
      } else
	x->ht.ht_self =
	  copy_relblock((char *)(x->ht.ht_self),
			j * sizeof(struct htent));
    }
    break;
    
  case t_array:
    if ((x->a.a_displaced) != Cnil)
      mark_displaced_field(x);
    if ((int)what_to_collect >= (int)t_contiguous &&
	x->a.a_dims != NULL) {
      if (inheap(x->a.a_dims)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock((char *)(x->a.a_dims),
			 sizeof(fixnum)*x->a.a_rank);
      } else
	x->a.a_dims =
	  copy_relblock((char *)(x->a.a_dims),
			sizeof(fixnum)*x->a.a_rank);
    }
    if ((enum aelttype)x->a.a_elttype == aet_ch)
      goto CASE_STRING;
    if ((enum aelttype)x->a.a_elttype == aet_bit)
      goto CASE_BITVECTOR;
    if ((enum aelttype)x->a.a_elttype == aet_object)
      goto CASE_GENERAL;
    
  CASE_SPECIAL:
    cp = x->a.a_self;
    if (cp == NULL)
      break;
    /* set j to the size in char of the body of the array */
    
    switch((enum aelttype)x->a.a_elttype){
#define  ROUND_RB_POINTERS_DOUBLE \
{int tem =  ((long)rb_pointer1) & (sizeof(double)-1); \
   if (tem) \
     { rb_pointer +=  (sizeof(double) - tem); \
       rb_pointer1 +=  (sizeof(double) - tem); \
     }}
    case aet_lf:
      j= sizeof(longfloat)*x->a.a_dim;
      if (((int)what_to_collect >= (int)t_contiguous) &&
	  !(inheap(cp))) ROUND_RB_POINTERS_DOUBLE;
      break;
    case aet_char:
    case aet_uchar:
    case aet_nnchar:
      j=sizeof(char)*x->a.a_dim;
      break;
    case aet_short:
    case aet_ushort:
    case aet_nnshort:
      j=sizeof(short)*x->a.a_dim;
      break;
    case aet_int:
    case aet_uint:
    case aet_nnint:
      j=sizeof(int)*x->a.a_dim;
      break;
    default:
      j=sizeof(fixnum)*x->a.a_dim;}
    
    goto COPY;
    
  CASE_GENERAL:
    p = x->a.a_self;
    if (p == NULL
#ifdef HAVE_ALLOCA
	|| (char *)p >= core_end
#endif  
	)
      break;
    j=0;
    if (x->a.a_displaced->c.c_car == Cnil)
      for (i = 0, j = x->a.a_dim;  i < j;  i++)
	mark_object(p[i]);
    cp = p;
    j *= sizeof(object);
  COPY:
    if ((int)what_to_collect >= (int)t_contiguous) {
      if (inheap(cp)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(cp, j);
      } else if (x->a.a_displaced == Cnil) {
#ifdef HAVE_ALLOCA
	if (!NULL_OR_ON_C_STACK(cp))  /* only if body of array not on C stack */
#endif			  
	  x->a.a_self = copy_relblock(cp, j);}
      else if (x->a.a_displaced->c.c_car == Cnil) {
	i = (long)copy_relblock(cp, j)
	  - (long)(x->a.a_self);
	adjust_displaced(x, i);
      }
    }
    break;
    
  case t_vector:
    if ((x->v.v_displaced) != Cnil)
      mark_displaced_field(x);
    if ((enum aelttype)x->v.v_elttype == aet_object)
      goto CASE_GENERAL;
    else
      goto CASE_SPECIAL;
    
  case t_bignum:
#ifdef SDEBUG
    if (type_map[page(x->big.big_self)] < t_contiguous)
      {
	printf("bad body for %x (%x)\n",x,cp);
	
      }
#endif 		
#ifndef GMP_USE_MALLOC
    if ((int)what_to_collect >= (int)t_contiguous) {
      j = MP_ALLOCATED(x);
      cp = MP_SELF(x);
      if (cp == 0)
	break;
#ifdef PARI
      if (j != lg(MP(x))  &&
	  /* we don't bother to zero this register,
	     and its contents may get over written */
	  ! (x == big_register_1 &&
	     (int)(cp) <= top &&
	     (int) cp >= bot))
	printf("bad length 0x%x ",x);
#endif
      j = j * MP_LIMB_SIZE;
      if (inheap(cp)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(cp, j);
      } else{
	MP_SELF(x) = copy_relblock(cp, j);}}
#endif /* not GMP_USE_MALLOC */
    break;
    
  CASE_STRING:
  case t_string:
    if ((x->st.st_displaced) != Cnil)
      mark_displaced_field(x);
    j = x->st.st_dim;
    cp = x->st.st_self;
    if (cp == NULL)
      break;
  COPY_STRING:
    if ((int)what_to_collect >= (int)t_contiguous) {
      if (inheap(cp)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(cp, j);
      } else if (x->st.st_displaced == Cnil)
	x->st.st_self = copy_relblock(cp, j);
      else if (x->st.st_displaced->c.c_car == Cnil) {
	i = copy_relblock(cp, j) - cp;
	adjust_displaced(x, i);
      }
    }
    break;
    
  CASE_BITVECTOR:
  case t_bitvector:
    if ((x->bv.bv_displaced) != Cnil)
      mark_displaced_field(x);
    /* We make bitvectors multiple of sizeof(int) in size allocated
       Assume 8 = number of bits in char */
    
#define W_SIZE (CHAR_SIZE*sizeof(fixnum))
    j= sizeof(fixnum) *
      ((BV_OFFSET(x) + x->bv.bv_dim + W_SIZE -1)/W_SIZE);
    cp = x->bv.bv_self;
    if (cp == NULL)
      break;
    goto COPY_STRING;
    
  case t_structure:
    mark_object(x->str.str_def);
    p = x->str.str_self;
    if (p == NULL)
      break;
    {object def=x->str.str_def;
    unsigned char * s_type = &SLOT_TYPE(def,0);
    unsigned short *s_pos= & SLOT_POS(def,0);
    for (i = 0, j = S_DATA(def)->length;  i < j;  i++)
      if (s_type[i]==aet_object) mark_object(STREF(object,x,s_pos[i]));
    if ((int)what_to_collect >= (int)t_contiguous) {
      if (inheap(x->str.str_self)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock((char *)p,
			 S_DATA(def)->size);
	
      } else
	x->str.str_self =
	  copy_relblock((char *)p, S_DATA(def)->size);
    }}
    break;
    
  case t_stream:
    switch (x->sm.sm_mode) {
    case smm_input:
    case smm_output:
    case smm_io:
    case smm_socket:  
    case smm_probe:
      mark_object(x->sm.sm_object0);
      mark_object(x->sm.sm_object1);
      if (saving_system)
	{FILE *fp = x->sm.sm_fp;
	if (fp != 0 && fp != stdin && fp !=stdout
	    )
	  {fclose(fp);
	  x->sm.sm_fp=0;
	  }}
      else
	if (what_to_collect == t_contiguous &&
	    x->sm.sm_fp &&
	    x->sm.sm_buffer)
	  mark_contblock(x->sm.sm_buffer, BUFSIZ);
      break;
      
    case smm_synonym:
      mark_object(x->sm.sm_object0);
      break;
      
    case smm_broadcast:
    case smm_concatenated:
      mark_object(x->sm.sm_object0);
      break;
      
    case smm_two_way:
    case smm_echo:
      mark_object(x->sm.sm_object0);
      mark_object(x->sm.sm_object1);
      break;
      
    case smm_string_input:
    case smm_string_output:
      mark_object(x->sm.sm_object0);
      break;
#ifdef USER_DEFINED_STREAMS
    case smm_user_defined:
      mark_object(x->sm.sm_object0);
      mark_object(x->sm.sm_object1);
      break;
#endif
    default:
      error("mark stream botch");
    }
    break;

#define MARK_CP(a_,b_) {fixnum _t=(b_);if (inheap(a_)) {\
                           if (what_to_collect == t_contiguous) mark_contblock((void *)(a_),_t);\
                        } else (a_)=copy_relblock((void *)(a_),_t);}

#define MARK_MP(a_) {if ((a_)->_mp_d) \
                        MARK_CP((a_)->_mp_d,(a_)->_mp_alloc*MP_LIMB_SIZE);}

  case t_random:
    if ((int)what_to_collect >= (int)t_contiguous) {
      MARK_MP(x->rnd.rnd_state._mp_seed);
#if __GNU_MP_VERSION < 4 || (__GNU_MP_VERSION  == 4 && __GNU_MP_VERSION_MINOR < 2)
      if (x->rnd.rnd_state._mp_algdata._mp_lc) {
	MARK_MP(x->rnd.rnd_state._mp_algdata._mp_lc->_mp_a);
	if (!x->rnd.rnd_state._mp_algdata._mp_lc->_mp_m2exp) MARK_MP(x->rnd.rnd_state._mp_algdata._mp_lc->_mp_m);
	MARK_CP(x->rnd.rnd_state._mp_algdata._mp_lc,sizeof(*x->rnd.rnd_state._mp_algdata._mp_lc));
      }
#endif
    }
    break;
    
  case t_readtable:
    if (x->rt.rt_self == NULL)
      break;
    if (what_to_collect == t_contiguous)
      mark_contblock((char *)(x->rt.rt_self),
		     RTABSIZE*sizeof(struct rtent));
    for (i = 0;  i < RTABSIZE;  i++) {
      mark_object(x->rt.rt_self[i].rte_macro);
      if (x->rt.rt_self[i].rte_dtab != NULL) {
	/**/
	if (what_to_collect == t_contiguous)
	  mark_contblock((char *)(x->rt.rt_self[i].rte_dtab),
			 RTABSIZE*sizeof(object));
	for (j = 0;  j < RTABSIZE;  j++)
	  mark_object(x->rt.rt_self[i].rte_dtab[j]);
	/**/
      }
    }
    break;
    
  case t_pathname:
    mark_object(x->pn.pn_host);
    mark_object(x->pn.pn_device);
    mark_object(x->pn.pn_directory);
    mark_object(x->pn.pn_name);
    mark_object(x->pn.pn_type);
    mark_object(x->pn.pn_version);
    break;
    
  /* case t_cfun: */
  /*   mark_object(x->cf.cf_name); */
  /*   mark_object(x->cf.cf_call); */
  /*   mark_object(x->cf.cf_data); */
  /*   break; */

  case t_function:	
    mark_object(x->fun.fun_data);
    mark_object(x->fun.fun_plist);
    if (x->fun.fun_env != def_env) {
      mark_object(x->fun.fun_env[0]);
      if (what_to_collect >= t_contiguous) {
	object *p=x->fun.fun_env-1;
	ufixnum n=*(ufixnum *)p;
	p=copy_relblock((char *)p,n*sizeof(object));
	x->fun.fun_env=p+1;
      }
    }
    break;


  /* case t_ifun: */
  /*   mark_object(x->ifn.ifn_name); */
  /*   mark_object(x->ifn.ifn_call); */
  /*   mark_object(x->ifn.ifn_self); */
  /*   break; */

  case t_cfdata:
    
    mark_object(x->cfd.cfd_dlist);
    if (x->cfd.cfd_self != NULL)
      {int i=x->cfd.cfd_fillp;
      while(i-- > 0)
	mark_object(x->cfd.cfd_self[i]);}
    if (x->cfd.cfd_start == NULL)
      break;
    if (what_to_collect == t_contiguous) {
      if (!MAYBE_DATA_P((x->cfd.cfd_start)) ||
	  get_mark_bit(x->cfd.cfd_start))
	break;
      mark_contblock(x->cfd.cfd_start, x->cfd.cfd_size);}
    break;
  case t_spice:
    break;
  default:
#ifdef DEBUG
    if (debug)
      printf("\ttype = %d\n", type_of(x));
#endif
    error("mark botch");
  }
}

static long *c_stack_where;

static void
mark_stack_carefully(void *topv, void *bottomv, int offset) {

  long pageoffset;
  unsigned long p;
  object x;
  struct typemanager *tm;
  register long *j;
  long *top = (long *) topv, *bottom = (long *) bottomv;
  
  /* if either of these happens we are marking the C stack
     and need to use a local */
  
  if (top==0) top = c_stack_where;
  if (bottom==0) bottom= c_stack_where;
  
  /* On machines which align local pointers on multiple of 2 rather
     than 4 we need to mark twice
  */
  
  if (offset) 
    mark_stack_carefully ( (((char *) top) +offset), bottom, 0 );

  for (j=top ; j >= bottom ; j--) {
    if (VALID_DATA_ADDRESS_P(*j)
	&& type_map[(p=page(*j))]< (char)t_end) {
      pageoffset=((char *)*j - pagetochar(p));
      tm=tm_of((enum type) type_map[p]);
      x= (object)
	((char *)(*j) -
	 ((pageoffset=((char *)*j - pagetochar(p))) %
	  tm->tm_size));
      if ((pageoffset <  (tm->tm_size * tm->tm_nppage))
	  && !is_marked_or_free(x)) {
	mark_object(x);
      }
    }
  }
}


static void
mark_phase(void) {

  STATIC int i, j;
  STATIC struct package *pp;
  STATIC bds_ptr bdp;
  STATIC frame_ptr frp;
  STATIC ihs_ptr ihsp;
  
  mark_object(Cnil);
  mark_object(Ct);
  
  mark_stack_carefully(vs_top-1,vs_org,0);
  clear_stack(vs_top,vs_limit);
  mark_stack_carefully(MVloc+(sizeof(MVloc)/sizeof(object)),MVloc,0);
  /* 
     for (p = vs_org;  p < vs_top;  p++) {
     if (p && (inheap(*p)))
     mark_object(*p);
     }
  */
#ifdef DEBUG
  if (debug) {
    printf("value stack marked\n");
    fflush(stdout);
  }
#endif
  
  for (bdp = bds_org;  bdp<=bds_top;  bdp++) {
    mark_object(bdp->bds_sym);
    mark_object(bdp->bds_val);
  }
  
  for (frp = frs_org;  frp <= frs_top;  frp++)
    mark_object(frp->frs_val);
  
  for (ihsp = ihs_org;  ihsp <= ihs_top;  ihsp++)
    mark_object(ihsp->ihs_function);
  
  for (i = 0;  i < mark_origin_max;  i++)
    mark_object(*mark_origin[i]);
  for (i = 0;  i < mark_origin_block_max;  i++)
    for (j = 0;  j < mark_origin_block[i].mob_size;  j++)
      mark_object(mark_origin_block[i].mob_addr[j]);
  
  for (pp = pack_pointer;  pp != NULL;  pp = pp->p_link)
    mark_object((object)pp);
#ifdef KCLOVM
  if (ovm_process_created)
    mark_all_stacks();
#endif
  
#ifdef DEBUG
  if (debug) {
    printf("symbol navigation\n");
    fflush(stdout);
  }
#endif
  
  /*
    if (what_to_collect != t_symbol &&
    (int)what_to_collect < (int)t_contiguous) {
  */
  
  {int size;
  
  for (pp = pack_pointer;  pp != NULL;  pp = pp->p_link) {
    size = pp->p_internal_size;
    if (pp->p_internal != NULL)
      for (i = 0;  i < size;  i++)
	mark_object(pp->p_internal[i]);
    size = pp->p_external_size;
    if (pp->p_external != NULL)
      for (i = 0;  i < size;  i++)
	mark_object(pp->p_external[i]);
  }}
  
  /* mark the c stack */
#ifndef N_RECURSION_REQD
#define N_RECURSION_REQD 2
#endif
  mark_c_stack(0,N_RECURSION_REQD,mark_stack_carefully);
  
}

#if defined(__ia64__)
	asm("        .text");
	asm("        .psr abi64");
	asm("        .psr lsb");
	asm("        .lsb");
	asm("");
	asm("        .text");
	asm("        .align 16");
	asm("        .global GC_save_regs_in_stack");
	asm("        .proc GC_save_regs_in_stack");
	asm("GC_save_regs_in_stack:");
	asm("        .body");
	asm("        flushrs");
	asm("        ;;");
	asm("        mov r8=ar.bsp");
	asm("        br.ret.sptk.few rp");
	asm("        .endp GC_save_regs_in_stack");

void * GC_save_regs_in_stack();
#endif

#if defined(__hppa__) /* Courtesy of Lamont Jones */
/* the calling sequence */
struct regs {
	void *callee_saves[16];
};
void hppa_save_regs(struct regs);

/* the code */

	asm(".code");
	asm(".export hppa_save_regs, entry");
	asm(".proc");
	asm(".callinfo");
	asm(".label	hppa_save_regs");
	asm(".entry");

	asm("stw	%r3,0(%arg0)");
	asm("stw	%r4,4(%arg0)");
	asm("stw	%r5,8(%arg0)");
	asm("stw	%r6,12(%arg0)");
	asm("stw	%r7,16(%arg0)");
	asm("stw	%r8,20(%arg0)");
	asm("stw	%r9,24(%arg0)");
	asm("stw	%r10,28(%arg0)");
	asm("stw	%r11,32(%arg0)");
	asm("stw	%r12,36(%arg0)");
	asm("stw	%r13,40(%arg0)");
	asm("stw	%r14,44(%arg0)");
	asm("stw	%r15,48(%arg0)");
	asm("stw	%r16,52(%arg0)");
	asm("stw	%r17,56(%arg0)");
	asm("bv	0(%rp)");
	asm("stw	%r18,60(%arg0)");

	asm(".exit");
	asm(".procend");
	asm(".end");
#endif

static void
mark_c_stack(jmp_buf env1, int n, void (*fn)(void *,void *,int)) {

#if defined(__hppa__)
  struct regs hppa_regs;
#endif
  jmp_buf env;
  int where;
  if (!n)/* (n== N_RECURSION_REQD) */
    c_stack_where = (long *) (void *) &env;
  if (n > 0 ) {  
#if defined(__hppa__)
    hppa_save_regs(hppa_regs);
#else    
    setjmp(env);
#endif
    mark_c_stack(env,n - 1,fn);
  } else {
      
    /* If the locals of type object in a C function could be
       aligned other than on multiples of sizeof (char *)
       then define this.  At the moment 2 is the only other
       legitimate value besides 0 */
    
#ifndef C_GC_OFFSET
#define C_GC_OFFSET 0
#endif
    if (&where > cs_org)
      (*fn)(0,cs_org,C_GC_OFFSET);
    else
      (*fn)(cs_org,0,C_GC_OFFSET);}
  
#if defined(__ia64__)
    {
/*        extern void * __libc_ia64_register_backing_store_base; */
       void * bst=GC_save_regs_in_stack();
/*        void * bsb=__libc_ia64_register_backing_store_base; */
       void * bsb=cs_org2;

       if (bsb>bst)
          (*fn)(bsb,bst,C_GC_OFFSET);
       else
          (*fn)(bst,bsb,C_GC_OFFSET);
       
    }
#endif

}

static void
sweep_phase(void) {

  STATIC long i, j, k;
  STATIC object x;
  STATIC char *p;
  STATIC struct typemanager *tm;
  STATIC object f;
  
  unmark(Cnil);
  unmark(Ct);
  
#ifdef DEBUG
  if (debug)
    printf("type map\n");
#endif
  for (i = 0;  i < maxpage;  i++) {
    if (type_map[i] == (int)t_contiguous) {
      if (debug) {
	printf("-");
	/*
	  fflush(stdout);
	*/
	continue;
      }
    }
    if (type_map[i] >= (int)t_end)
      continue;
    
    tm = tm_of((enum type)type_map[i]);
    
    /*
      general sweeper
    */
    
#ifdef DEBUG
    if (debug) {
      printf("%c", tm->tm_name[0]);
      /*
	fflush(stdout);
      */
    }
#endif
    p = pagetochar(i);
    f = tm->tm_free;
    k = 0;
    for (j = tm->tm_nppage; j > 0; --j, p += tm->tm_size) {
      x = (object)p;
      if (is_free(x))
	continue;
      else if (is_marked(x)) {
	unmark(x);
	continue;
      }
      
#ifdef GMP_USE_MALLOC
      if (type_of(x) == t_bignum) {
	mpz_clear(MP(x));
      }
#endif
      SET_LINK(x,f);
      make_free(x);
      f = x;
      k++;
    }
    tm->tm_free = f;
    tm->tm_nfree += k;
    
  }
#ifdef DEBUG
  if (debug) {
    putchar('\n');
    fflush(stdout);
  }
#endif
}

static void
contblock_sweep_phase(void) {

  STATIC long i, j;
  STATIC char *s, *e, *p, *q;
  STATIC struct contblock *cbp;
  
  cb_pointer = NULL;
  ncb = 0;
  for (i = 0;  i < maxpage;) {
    if (type_map[i] != (int)t_contiguous) {
      i++;
      continue;
    }
    for (j = i+1;
	 j < maxpage && type_map[j] == (int)t_contiguous;
	 j++)
      ;	
    s = pagetochar(i);
    e = pagetochar(j);
    for (p = s;  p < e;) {
      if (get_mark_bit(p)) {
	/* SGC cont pages: cont blocks must be no smaller than
	   sizeof(struct contblock), and must not have a sweep
	   granularity greater than this amount (e.g. CPTR_ALIGN) if
	   contblock leaks are to be avoided.  Used to be aligned at
	   PTR_ALIGN. CM 20030827 */
	p += CPTR_ALIGN;
	continue;
      }
      q = p + CPTR_ALIGN;
      while (q < e) {
	if (!get_mark_bit(q)) {
	  q += CPTR_ALIGN;
	  continue;
	}
	break;
      }
      insert_contblock(p, q - p);
      p = q + CPTR_ALIGN;
    }
    i = j + 1;
  }
#ifdef DEBUG
  if (debug) {
    for (cbp = cb_pointer; cbp != NULL; cbp = cbp->cb_link)
      printf("%ld-byte contblock\n", cbp->cb_size);
    fflush(stdout);
  }
#endif
}


int (*GBC_enter_hook)() = NULL;
int (*GBC_exit_hook)() = NULL;
char *old_rb_start;

#define OPTIMIZE_MAX_PAGES (sSAoptimize_maximum_pagesA ==0 || sSAoptimize_maximum_pagesA->s.s_dbind !=sLnil) 
#define IGNORE_MAX_PAGES (sSAignore_maximum_pagesA ==0 || sSAignore_maximum_pagesA->s.s_dbind !=sLnil) 

DEFVAR("*AFTER-GBC-HOOK*",sSAafter_gbc_hookA,SI,sLnil,"");

static struct symbol in_agbchs;
static object in_agbch=(object)&in_agbchs;
static void
call_after_gbc_hook(t) { 

  if (sSAafter_gbc_hookA && sSAafter_gbc_hookA->s.s_dbind!= Cnil) { 
    bds_ptr old_bds_top = bds_top;
    bds_bind(in_agbch,Ct);
    set_up_string_register(tm_table[(int)t].tm_name+1);
    ifuncall1(sSAafter_gbc_hookA->s.s_dbind,intern(string_register,system_package));
    bds_unwind(old_bds_top);
  }
  
}

void
GBC(enum type t) {

  long i, j;
  struct apage *pp, *qq;
#ifdef SGC
  int in_sgc = sgc_enabled;
#endif
#ifdef DEBUG
  int tm=0;
#endif

  if (in_agbch->s.s_dbind==Ct)
    return;
  
  mcsl=mcsh=&tm;

  if (in_signal_handler && t == t_relocatable)
    error("cant gc relocatable in signal handler");
  
  if (GBC_enter_hook != NULL)
    (*GBC_enter_hook)();
  
  if (!GBC_enable)
    error("GBC is not enabled");
  interrupt_enable = FALSE;
  
  if (saving_system)
    {t = t_contiguous; gc_time = -1;
#ifdef SGC
    if(sgc_enabled) sgc_quit();
#endif    
    }


#ifdef DEBUG
  debug = symbol_value(sSAgbc_messageA) != Cnil;
#endif
  
  what_to_collect = t;
  
  tm_table[(int)t].tm_gbccount++;
  tm_table[(int)t].tm_adjgbccnt++;
  
#ifdef DEBUG
  if (debug || (sSAnotify_gbcA->s.s_dbind != Cnil)) {
    
    if (gc_time < 0) gc_time=0;
#ifdef SGC
    printf("[%s for %ld %s pages..",
	   (sgc_enabled ? "SGC" : "GC"),
	   (sgc_enabled ? sgc_count_type(t) : tm_of(t)->tm_npage),
	   (tm_table[(int)t].tm_name)+1);
#else
    printf("[%s for %ld %s pages..",
	   ("GC"),
	   (tm_of(t)->tm_npage),
	   (tm_table[(int)t].tm_name)+1);
#endif
#ifdef SGC
    if(sgc_enabled)
      printf("(%d writable)..",sgc_count_writable(page(core_end)));
#endif	  
    fflush(stdout);
  }
#endif
  if (gc_time >=0 && !gc_recursive++) {gc_start=runtime();}
  
  maxpage = page(heap_end);
  
  if ((int)t >= (int)t_contiguous) {
    j = maxpage*(PAGESIZE/(CPTR_ALIGN*SIZEOF_LONG*CHAR_SIZE)) ;
    /*
      (PAGESIZE / sizeof(int)) = x * (sizeof(int)*CHAR_SIZE)
      eg if PAGESIZE = 2048  x=16
      1 page = 512 long word
      512 bit = 16 long word
    */
    
    if (t == t_relocatable)
      j = 0;
    /* if in sgc we don't need more pages below hole
       just more relocatable or cleaning it */
#ifdef SGC
    if (sgc_enabled==0) 
#endif
      if (holepage < new_holepage)
	holepage = new_holepage;
    
#ifdef SGC
    i = rb_pointer - (sgc_enabled ? old_rb_start : rb_start);
#else
    i = rb_pointer - rb_start;
#endif    

    if (nrbpage > (real_maxpage-page(heap_end)
		   -holepage-real_maxpage/32)/2) {
      if (i > nrbpage*PAGESIZE)
	error("Can't allocate.  Good-bye!.");
      else
	nrbpage =
	  (real_maxpage-page(heap_end)
	   -holepage-real_maxpage/32)/2;
    }
    
/*     if (saving_system) */
/*       rb_start = heap_end+PAGESIZE; */
/*     else */
#ifdef SGC
      if (sgc_enabled==0)
#endif
	{if (saving_system)
	  rb_start = heap_end+PAGESIZE;
	else
	  rb_start = heap_end + PAGESIZE*holepage;}
    
    rb_end = heap_end + (holepage + nrbpage) *PAGESIZE;
    
    if (rb_start < rb_pointer)
      rb_start1 = (char *)
	((long)(rb_pointer + PAGESIZE-1) & -(unsigned long)PAGESIZE);
    else
      rb_start1 = rb_start;
    
    /* as we walk through marking data, we replace the
       relocatable pointers
       in objects by the rb_pointer, advance that
       by the size, and copy the actual
       data there to rb_pointer1, and advance it by the size
       at the end [rb_start1,rb_pointer1] is copied
       to [rb_start,rb_pointer]
    */
    rb_pointer = rb_start;  /* where the new relblock will start */
    rb_pointer1 = rb_start1;/* where we will copy it to during gc*/
    
    mark_table = (long *)(rb_start1 + i);
    
    if (rb_end < (char *)&mark_table[j])
      i = (char *)&mark_table[j] - heap_end;
    else
      i = rb_end - heap_end;

    if (i+heap_end>MAXCORE && !j) {
      i=MAXCORE-heap_end;
      printf("Warning: attempting tight relocatable GC\n");
    }
    alloc_page(-(i + PAGESIZE - 1)/PAGESIZE);
    
    for (i = 0;  i < j; i++)
      mark_table[i] = 0;
  }
  
#ifdef DEBUG
  if (debug) {
    printf("mark phase\n");
    fflush(stdout);
    tm = runtime();
  }
#endif
#ifdef SGC
  if(sgc_enabled)
    { if (t < t_end && tm_of(t)->tm_sgc == 0)
      {sgc_quit();
      if (sSAnotify_gbcA->s.s_dbind != Cnil)
	{fprintf(stdout, " (doing full gc)");
	fflush(stdout);}
      mark_phase();}
    else
      sgc_mark_phase();}
  else
#endif	
    mark_phase();
#ifdef DEBUG
  if (debug) {
    printf("mark ended (%d)\n", runtime() - tm);
    fflush(stdout);
  }
#endif
  
#ifdef DEBUG
  if (debug) {
    printf("sweep phase\n");
    fflush(stdout);
    tm = runtime();
  }
#endif
#ifdef SGC
  if(sgc_enabled)
    sgc_sweep_phase();
  else
#endif	
    sweep_phase();
#ifdef DEBUG
  if (debug) {
    printf("sweep ended (%d)\n", runtime() - tm);
    fflush(stdout);
  }
#endif
  
  if (t == t_contiguous) {
#ifdef DEBUG
    if (debug) {
      printf("contblock sweep phase\n");
      fflush(stdout);
      tm = runtime();
    }
#endif
    
#ifdef SGC
    if (sgc_enabled)
      sgc_contblock_sweep_phase();
    else
#endif
      contblock_sweep_phase();
#ifdef DEBUG
    if (debug)
      printf("contblock sweep ended (%d)\n",
	     runtime() - tm);
#endif
  }
  
  if ((int)t >= (int)t_contiguous) {
    
    if (rb_start < rb_start1) {
      j = (rb_pointer-rb_start + PAGESIZE - 1)/PAGESIZE;
      pp = (struct apage *)rb_start;
      qq = (struct apage *)rb_start1;
      for (i = 0;  i < j;  i++)
	*pp++ = *qq++;
    }
    
#ifdef SGC
    /* we don't know which pages have relblock on them */
    if(sgc_enabled)
      make_writable(page(rb_start),page(rb_pointer+PAGESIZE-1));
    
#endif		
    rb_limit = rb_end - 2*RB_GETA;
    
  }
  
#ifdef DEBUG
  if (debug) {
    for (i = 0, j = 0;  i < (int)t_end;  i++) {
      if (tm_table[i].tm_type == (enum type)i) {
	printf("%13s: %8ld used %8ld free %4ld/%ld pages\n",
	       tm_table[i].tm_name,
	       TM_NUSED(tm_table[i]),
	       tm_table[i].tm_nfree,
	       tm_table[i].tm_npage,
	       tm_table[i].tm_maxpage);
	j += tm_table[i].tm_npage;
      } else
	printf("%13s: linked to %s\n",
	       tm_table[i].tm_name,
	       tm_table[(int)tm_table[i].tm_type].tm_name);
    }
    printf("contblock: %ld blocks %ld pages\n", ncb, ncbpage);
    printf("hole: %ld pages\n", holepage);
    printf("relblock: %ld bytes used %ld bytes free %ld pages\n",
	   (long)(rb_pointer - rb_start), (long)(rb_end - rb_pointer), nrbpage);
    printf("GBC ended\n");
    fflush(stdout);
  }
#endif
  
  interrupt_enable = TRUE;
  
#ifdef SGC
  if (in_sgc && sgc_enabled==0)
    sgc_start();
#endif
  
  if (saving_system) {
    /*FIXME::Someday figure out why we can't leave the relocatable area in place across a save*/
    char *end=(char *)(PAGESIZE*(((unsigned long)rb_pointer+PAGESIZE-1)/PAGESIZE));

/*     j = (rb_pointer-rb_start+PAGESIZE-1) / PAGESIZE; */
  
/*     heap_end += PAGESIZE*j; */
    
    /* When the program is re-loaded, the system initialization
       code may use malloc() before main() begins.  This
       happens in Linux.  We need to allow some heap expansion
       space for this.  One page is enough for Linux.
       Bill Metzenthen May95.
    */
    if ( core_end < end + PAGESIZE )
      {
	fprintf(stderr,
		"Not enough memory available for saved image\n");
	exit(1);
      }
    core_end = end + PAGESIZE;
    {
      unsigned long old_new_holepage=new_holepage;
      new_holepage=CORE_PAGES/HOLEDIV;
      if (available_pages<1) new_holepage=old_new_holepage;
    }

    /*Leave?*/
    for (i=page(rb_start);i<page(heap_end);i++)
      type_map[i]=t_contiguous;
    
/*     for (i = 0;  i < maxpage;  i++) */
/*       if ((enum type)type_map[i] == t_contiguous) */
/* 	type_map[i] = (char)t_other; */
/*     cb_pointer = NULL; */
/*     maxcbpage -= ncbpage; */
/*     if (maxcbpage < 100) */
/*       maxcbpage = 100; */
/*     ncbpage = 0; */
/*     ncb = 0; */
    
    /* hmm.... why is this test necessary.*/
/* #ifdef SGC */
/*     if (sgc_enabled==0)  */
/* #endif */
      {holepage = 1;
      rb_limit=end+PAGESIZE;
      rb_end=rb_limit+2*RB_GETA;
      rb_end=rb_end>core_end ? core_end : rb_end;}
/*       nrbpage = (rb_end-rb_start)/PAGESIZE;} */
    
    if (nrbpage < 0)
      error("no relocatable pages left");
    
/*     rb_start = heap_end + PAGESIZE*holepage; */
/*     rb_end = rb_start + PAGESIZE*nrbpage; */
/*     rb_limit = rb_end - 2*RB_GETA; */
/*     rb_pointer = rb_start; */

/*     for (i=page(rb_start);i<page(rb_end);i++) */
/*       type_map[i]=t_relocatable; */

  }
  
  if (GBC_exit_hook != NULL)
    (*GBC_exit_hook)();
  
  if(gc_time>=0 && !--gc_recursive) {gc_time=gc_time+(gc_start=(runtime()-gc_start));}
  
  if (sSAnotify_gbcA->s.s_dbind != Cnil) {
    
    if (gc_recursive)
      fprintf(stdout, "(T=...).GC finished]\n");
    else
      fprintf(stdout, "(T=%d).GC finished]\n",gc_start);
    fflush(stdout);

  }
  
  {
    extern int hole_overrun;

    if (!hole_overrun && IGNORE_MAX_PAGES && OPTIMIZE_MAX_PAGES)
      opt_maxpage(tm_table+t);

  }

  ZALLOCA(abs(mcsl-mcsh));
  
  CHECK_INTERRUPT;

  call_after_gbc_hook(t);

}

static void
FFN(siLheap_report)(void) {

  int i;
  
  check_arg(0);
  
  vs_check_push(make_fixnum(sizeof(fixnum)*CHAR_SIZE));
  vs_push(make_fixnum(PAGESIZE));
  vs_push(make_fixnum(DBEGIN));
  vs_push(make_fixnum(DBEGIN+(MAXPAGE<<PAGEWIDTH)));
  vs_push(make_fixnum(SHARED_LIB_HEAP_CEILING));
  i=sizeof(fixnum)*CHAR_SIZE-2;
  i=1<<i;
  vs_push(make_fixnum(((unsigned long)cs_base+i-1)&-i));
  vs_push(make_fixnum(abs(cs_base-cs_org)));
  vs_push(make_fixnum((CSTACK_DIRECTION+1)>>1));
  vs_push(make_fixnum(CSTACK_ALIGNMENT));
  vs_push(make_fixnum(CSSIZE));
#if defined(IM_FIX_BASE) && defined(IM_FIX_LIM)
  vs_push(make_fixnum(IM_FIX_BASE));
  vs_push(make_fixnum(IM_FIX_LIM));
#else  
  vs_push(make_fixnum(0));
  vs_push(make_fixnum(0));
#endif

}  


DEFUN("ROOM-REPORT",object,fSroom_report,SI
	  ,0,0,NONE,OO,OO,OO,OO,(void),"") {
/* static void */
/* FFN(siLroom_report)(void) { */

  int i;
  object x;
  
  /*
    GBC(t_contiguous);
  */
  x=Cnil;
  x=make_cons(make_fixnum(real_maxpage),x);
  x=make_cons(make_fixnum(available_pages),x);
  x=make_cons(make_fixnum(ncbpage),x);
  x=make_cons(make_fixnum(maxcbpage),x);
  x=make_cons(make_fixnum(ncb),x);
  x=make_cons(make_fixnum(cbgbccount),x);
  x=make_cons(make_fixnum(holepage),x);
  x=make_cons(make_fixnum(rb_pointer - rb_start),x);
  x=make_cons(make_fixnum(rb_end - rb_pointer),x);
  x=make_cons(make_fixnum(nrbpage),x);
  x=make_cons(make_fixnum(rbgbccount),x);
  for (i = 0;  i < (int)t_end;  i++) {
    x=make_cons(make_simple_string(tm_table[i].tm_name+1),x);
    if (tm_table[i].tm_type == (enum type)i) {
      x=make_cons(make_fixnum(TM_NUSED(tm_table[i])),x);
      x=make_cons(make_fixnum(tm_table[i].tm_nfree+tm_table[i].tm_alt_nfree),x);
      x=make_cons(make_fixnum(tm_table[i].tm_npage),x);
      x=make_cons(make_fixnum(tm_table[i].tm_maxpage),x);
      x=make_cons(make_fixnum(tm_table[i].tm_gbccount),x);
      x=make_cons(make_fixnum(tm_table[i].tm_size/sizeof(fixnum)),x);
    } else {
      x=make_cons(Cnil,x);
      x=make_cons(make_simple_string(tm_of(i)->tm_name+1),x);
      x=make_cons(Cnil,x);
      x=make_cons(Cnil,x);
      x=make_cons(Cnil,x);
      x=make_cons(Cnil,x);
    }
  }
  RETURN1(nreverse(x));

}

static void
FFN(siLreset_gbc_count)(void) {

  int i;
  
  check_arg(0);
  
  for (i = 0;  i < (int)t_other;  i++)
    tm_table[i].tm_gbccount = tm_table[i].tm_adjgbccnt = tm_table[i].tm_opt_maxpage = 0;
}

/* copy S bytes starting at P to beyond rb_pointer1 (temporarily)
   but return a pointer to where this will be copied back to,
   when gc is done.  alignment of rb_pointer is kept at a multiple
   of sizeof(char *);
*/

static void *
copy_relblock(char *p, ufixnum s) { 
  
  char *res = rb_pointer;
  char *q = rb_pointer1;

  s = ROUND_UP_PTR(s);
  rb_pointer += s;
  rb_pointer1 += s;
  if (rb_pointer1>core_end)
    error("not enough room to gc relblock");
 
  while (s-- > 0)
    *q++ = *p++;
 
  return res;

}


static void
mark_contblock(void *p, fixnum s) {

  STATIC char *q;
  STATIC char *x, *y;
  long np=page(p);
  
  if (!MAYBE_DATA_P(p) || np >= MAXPAGE || (enum type)type_map[page(p)] != t_contiguous)
    return;
  q = p + s;
  /* SGC cont pages: contblock pages must be no smaller than
     sizeof(struct contblock).  CM 20030827 */
  x = (char *)ROUND_DOWN_PTR_CONT(p);
  y = (char *)ROUND_UP_PTR_CONT(q);
  for (;  x < y;  x+=CPTR_ALIGN)
    set_mark_bit(x);
}

DEFUN("GBC",object,fSgbc,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"")

{
  /* 1 args */
  
  if (x0 == Ct)
    GBC(t_contiguous);
  else if (x0 == Cnil)
    GBC(t_cons);
  else
    { x0 = small_fixnum(1);	GBC(t_relocatable);}
  RETURN1(x0);
}

static void
FFN(siLgbc_time)(void) {
  if (vs_top>vs_base)
    gc_time=fix(vs_base[0]);
  else {
    vs_base[0]=make_fixnum(gc_time);
    vs_top=vs_base+1;
  }
}

#ifdef SGC
#include "sgbc.c"
#endif

DEFVAR("*NOTIFY-GBC*",sSAnotify_gbcA,SI,Cnil,"");
#ifdef DEBUG
DEFVAR("*GBC-MESSAGE*",sSAgbc_messageA,SI,Cnil,"");
#endif

void
gcl_init_GBC(void) {

/*   make_si_function("ROOM-REPORT", siLroom_report); */
  make_si_function("HEAP-REPORT", siLheap_report);
  make_si_function("RESET-GBC-COUNT", siLreset_gbc_count);
  make_si_function("GBC-TIME",siLgbc_time);
#ifdef SGC
  make_si_function("SGC-ON",siLsgc_on);
#endif
}
