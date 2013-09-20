/*  Copyright William Schelter. All rights reserved.
    
    Stratified Garbage Collection  (SGC)
    
    Write protects pages to tell which ones have been written
    to recently, for more efficient garbage collection.
    
*/

static void
sgc_mark_object1(object);

static void
sgc_mprotect(long, long, int);


#ifdef BSD
/* ulong may have been defined in mp.h but the define is no longer needed */
#undef ulong
#include <sys/mman.h>
#define PROT_READ_WRITE_EXEC (PROT_READ | PROT_WRITE |PROT_EXEC)
#define PROT_READ_EXEC (PROT_READ|PROT_EXEC)
#endif
#ifdef AIX3
#include <sys/vmuser.h>
#define PROT_READ_EXEC RDONLY /*FIXME*/
#define  PROT_READ_WRITE_EXEC UDATAKEY
int mprotect();
#endif

#ifdef __MINGW32__
#include <windows.h>
#define PROT_READ_WRITE_EXEC PAGE_EXECUTE_READWRITE
#define PROT_READ_EXEC PAGE_READONLY /*FIXME*/

int gclmprotect ( void *addr, size_t len, int prot ) {
    int old, rv;
    rv = VirtualProtect ( (LPVOID) addr, len, prot, &old );
    if ( 0 == rv ) {
        fprintf ( stderr, "mprotect: VirtualProtect %x %d %d failed\n", addr, len, prot );
        rv = -1;
    } else {
        rv =0;
    }    
    return (rv);
}
/* Avoid clash with libgcc's mprotect */
#define mprotect gclmprotect

#endif

#if defined(DARWIN)
#include <sys/ucontext.h>
#endif

#include <signal.h>

/*  void segmentation_catcher(void); */


#define sgc_mark_pack_list(u)      \
do {register object xtmp = u;  \
 while (xtmp != Cnil) \
   {if (ON_WRITABLE_PAGE(xtmp)) {mark(xtmp);}	\
     sgc_mark_object(xtmp->c.c_car); \
     xtmp=Scdr(xtmp);}}while(0) 


#ifdef SDEBUG
object sdebug;
joe1(){;}
joe() {;}     
#endif

static void *mcsh,*mcsl;
extern int cstack_dir;

static void
sgc_mark_cons(object x) {
  
  object d;

  cs_check(x);
  
  if (cstack_dir==-1 ? mcsl>(void *)&x : mcsl<(void *)&x)
    mcsl=&x;

  do {
    d=x->c.c_cdr;
    mark(x);
    sgc_mark_object(x->c.c_car);
    x=d;
    if (!IS_WRITABLE(page(x)) || is_marked_or_free(x))
      return;
  } while (type_of(x)==t_cons);
  sgc_mark_object1(x);

}

/* Whenever two arrays are linked together by displacement,
   if one is live, the other will be made live */
#define sgc_mark_displaced_field(ar) sgc_mark_object(ar->a.a_displaced)


/* structures and arrays of type t, need to be marked if their
   bodies are not write protected even if the headers are.
   So we should keep these on pages particular to them.
   Actually we will change structure sets to touch the structure
   header, that way we won't have to keep the headers in memory.
   This takes only 1.47 as opposed to 1.33 microseconds per set.
*/
static void
sgc_mark_object1(object x) {

  fixnum i,j;
  object *p;
  void *cp;
  enum type tp;
  
  cs_check(x);

  if (cstack_dir==-1 ? mcsl>(void *)&cp : mcsl<(void *)&cp)
    mcsl=&cp;

 BEGIN:
#ifdef SDEBUG
  if (x == OBJNULL || !ON_WRITABLE_PAGE(x))
    return;
  IF_WRITABLE(x,goto OK);
  joe();
 OK:
#endif 
  if (is_marked_or_free(x))
    return;
#ifdef SDEBUG
  if(x==sdebug) joe1();
#endif
  
  if ((tp=type_of(x))==t_cons) {
    sgc_mark_cons(x);
    return;
  }

  mark(x);
  switch (tp) {
  case t_fixnum:
    break;
    
  case t_ratio:
    sgc_mark_object(x->rat.rat_num);
    x = x->rat.rat_den;
    IF_WRITABLE(x,if(!is_marked_or_free(x)) goto BEGIN);
    
  case t_shortfloat:
    break;
    
  case t_longfloat:
    break;
    
  case t_complex:
    sgc_mark_object(x->cmp.cmp_imag);
    x = x->cmp.cmp_real;
    IF_WRITABLE(x,if(!is_marked_or_free(x)) goto BEGIN);
    
  case t_character:
    break;
    
  case t_symbol:
    IF_WRITABLE(x->s.s_plist,if(!is_marked_or_free(x->s.s_plist))
    {/* mark(x->s.s_plist); */
    sgc_mark_cons(x->s.s_plist);});
    sgc_mark_object(x->s.s_gfdef);
    sgc_mark_object(x->s.s_dbind);
    if (x->s.s_hpack!=Cnil && x->s.s_hpack->p.p_name==Cnil) {
      x->s.s_hpack=Cnil;
      x->s.tt=0;
    }
/*       sgc_mark_object(x->s.s_hpack); */
    if (x->s.s_self == NULL)
      break;
    /* to do */
    if (what_to_collect >= t_contiguous) {
      if (inheap(x->s.s_self)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(x->s.s_self,
			 x->s.s_fillp);
      } else if(SGC_RELBLOCK_P(x->s.s_self))
	x->s.s_self =
	  copy_relblock(x->s.s_self, x->s.s_fillp);
    }
    break;
    
  case t_package:
    sgc_mark_object(x->p.p_name);
    sgc_mark_object(x->p.p_nicknames);
    sgc_mark_object(x->p.p_shadowings);
    sgc_mark_object(x->p.p_uselist);
    sgc_mark_object(x->p.p_usedbylist);
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
      sgc_mark_object(x->c.c_car);
      x = x->c.c_cdr;
      goto BEGIN;
    */
    sgc_mark_cons(x);
    break;
    
  case t_hashtable:
    sgc_mark_object(x->ht.ht_rhsize);
    sgc_mark_object(x->ht.ht_rhthresh);
    if (x->ht.ht_self == NULL)
      break;
    for (i = 0, j = x->ht.ht_size;  i < j;  i++) {
      if (ON_WRITABLE_PAGE(&x->ht.ht_self[i])) {
	sgc_mark_object(x->ht.ht_self[i].c_cdr);
	sgc_mark_object(x->ht.ht_self[i].c_car);
      }
    }
    if ((short)what_to_collect >= (short)t_contiguous) {
      if (inheap(x->ht.ht_self)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock((char *)(x->ht.ht_self),
			 j * sizeof(struct cons));
      } else if(SGC_RELBLOCK_P(x->ht.ht_self))
	x->ht.ht_self =
	  copy_relblock((char *)(x->ht.ht_self),
			j * sizeof(struct cons));
    }
    break;
    
  case t_array:
    if ((x->a.a_displaced) != Cnil)
      sgc_mark_displaced_field(x);
    if (what_to_collect >= t_contiguous &&
	x->a.a_dims != NULL) {
      if (inheap(x->a.a_dims)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock((char *)(x->a.a_dims),
			 sizeof(fixnum)*x->a.a_rank);
      } else  if(SGC_RELBLOCK_P(x->a.a_dims))
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
    case aet_lf:
      j= sizeof(longfloat)*x->a.a_dim;
      if ((what_to_collect >= t_contiguous) &&
	  !(inheap(cp)) && SGC_RELBLOCK_P(x->a.a_self))
	ROUND_RB_POINTERS_DOUBLE;
      break;
    case aet_nnchar:
    case aet_char:
    case aet_uchar:
      j=sizeof(char)*x->a.a_dim;
      break;
    case aet_nnshort:
    case aet_short:
    case aet_ushort:
      j=sizeof(short)*x->a.a_dim;
      break;
    case aet_nnint:
    case aet_int:
    case aet_uint:
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
	if (ON_WRITABLE_PAGE(&p[i]))
	  sgc_mark_object(p[i]);
    cp = p;
    j *= sizeof(object);
  COPY:
    if (what_to_collect >= t_contiguous) {
      if (inheap(cp)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(cp, j);
      } else if (!SGC_RELBLOCK_P(cp)) 
	;
      else if (x->a.a_displaced == Cnil) {
#ifdef HAVE_ALLOCA
	if (!NULL_OR_ON_C_STACK(cp))  /* only if body of array not on C stack */
#endif			  
	  x->a.a_self = copy_relblock(cp, j);
      }
      else if (x->a.a_displaced->c.c_car == Cnil) {
	i = (long)copy_relblock(cp, j)
	  - (long)(x->a.a_self);
	adjust_displaced(x, i);
      }
    }
    break;
    
  case t_vector:
    if ((x->v.v_displaced) != Cnil)
      sgc_mark_displaced_field(x);
    if ((enum aelttype)x->v.v_elttype == aet_object)
      goto CASE_GENERAL;
    else
      goto CASE_SPECIAL;
    
  case t_bignum:
/* #ifndef GMP */
/*     if ((int)what_to_collect >= (int)t_contiguous) { */
/*       j = x->big.big_length; */
/*       cp = (char *)x->big.big_self; */
/*       if (cp == NULL) */
/* 	break; */
/*       if  (j != lg(MP(x))  && */
	   /* we don't bother to zero this register,
	      and its contents may get over written */
/* 	   ! (x ==  big_register_1 && */
/* 	      (int)(cp) <= top && */
/* 	      (int) cp >= bot)) */
	
/* 	printf("bad length 0x%x ",x); */
/*       j = j * sizeof(int); */
      
/*       if (inheap(cp)) { */
/* 	if (what_to_collect == t_contiguous) */
/* 	  mark_contblock(cp, j); */
/*       } else { */
/* 	if (SGC_RELBLOCK_P(cp)) */
/* 	  x->big.big_self = (plong *)copy_relblock(cp, j);}} */
/* #endif */ /* no gmp */
#ifndef GMP_USE_MALLOC
    if (what_to_collect >= t_contiguous) {
      j = MP_ALLOCATED(x);
      cp = MP_SELF(x);
      if (cp == 0)
	break;
/* #ifdef PARI */
/*       if (j != lg(MP(x))  && */
	  /* we don't bother to zero this register,
	     and its contents may get over written */
/* 	  ! (x == big_register_1 && */
/* 	     (int)(cp) <= top && */
/* 	     (int) cp >= bot)) */
/* 	printf("bad length 0x%x ",x); */
/* #endif */
      j = j * MP_LIMB_SIZE;
      if (inheap(cp)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(cp, j);
      } else 
	if (SGC_RELBLOCK_P(cp))
	  MP_SELF(x) = copy_relblock(cp, j);
    }
#endif /* not GMP_USE_MALLOC */
    break;
    
    
  CASE_STRING:
  case t_string:
    if ((x->st.st_displaced) != Cnil)
      sgc_mark_displaced_field(x);
    j = x->st.st_dim;
    cp = x->st.st_self;
    if (cp == NULL)
      break;
    
  COPY_STRING:
    if (what_to_collect >= t_contiguous) {
      if (inheap(cp)) {
	if (what_to_collect == t_contiguous)
	  mark_contblock(cp, j);
      }
      else if (!SGC_RELBLOCK_P(cp)) ;
      else if (x->st.st_displaced == Cnil)
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
      sgc_mark_displaced_field(x);
    /* We make bitvectors multiple of sizeof(int) in size allocated
       Assume 8 = number of bits in char */
    
    j= sizeof(fixnum) *
      ((BV_OFFSET(x) + x->bv.bv_dim + W_SIZE -1)/W_SIZE);
    cp = x->bv.bv_self;
    if (cp == NULL)
      break;
    goto COPY_STRING;
    
  case t_structure:
    sgc_mark_object(x->str.str_def);
    p = x->str.str_self;
    if (p == NULL)
      break;
    {
      object def=x->str.str_def;
      unsigned char  *s_type = &SLOT_TYPE(def,0);
      unsigned short *s_pos  = &SLOT_POS (def,0);
      for (i = 0, j = S_DATA(def)->length;  i < j;  i++)
	if (s_type[i]==aet_object && ON_WRITABLE_PAGE(&STREF(object,x,s_pos[i])))
	  sgc_mark_object(STREF(object,x,s_pos[i]));
      if (what_to_collect >= t_contiguous) {
	if (inheap(x->str.str_self)) {
	  if (what_to_collect == t_contiguous)
	    mark_contblock((char *)p,
			   S_DATA(def)->size);
	  
	} else if(SGC_RELBLOCK_P(p))
	  x->str.str_self =
	    copy_relblock((char *)p, S_DATA(def)->size);
      }
    }
    break;
    
  case t_stream:
    switch (x->sm.sm_mode) {
    case smm_input:
    case smm_output:
    case smm_io:
    case smm_socket:  
    case smm_probe:
      sgc_mark_object(x->sm.sm_object0);
      sgc_mark_object(x->sm.sm_object1);
      if (saving_system) {
	FILE *fp = x->sm.sm_fp;
	if (fp != 0 && fp != stdin && fp !=stdout) {
	  fclose(fp);
	  x->sm.sm_fp=0;
	}
      }
      else
	if (what_to_collect == t_contiguous &&
	    x->sm.sm_fp &&
	    x->sm.sm_buffer)
	  mark_contblock(x->sm.sm_buffer, BUFSIZ);
      break;
      
    case smm_synonym:
      sgc_mark_object(x->sm.sm_object0);
      break;
      
    case smm_broadcast:
    case smm_concatenated:
      sgc_mark_object(x->sm.sm_object0);
      break;
      
    case smm_two_way:
    case smm_echo:
      sgc_mark_object(x->sm.sm_object0);
      sgc_mark_object(x->sm.sm_object1);
      break;
      
    case smm_string_input:
    case smm_string_output:
      sgc_mark_object(x->sm.sm_object0);
      break;
#ifdef USER_DEFINED_STREAMS
    case smm_user_defined:
      sgc_mark_object(x->sm.sm_object0);
      sgc_mark_object(x->sm.sm_object1);
      break;
#endif
    default:
      error("mark stream botch");
    }
    break;
    
    /*FIXME: centralize this*/
    /*FIXME: SGC_CONTBLOCK_P? */
#define SGC_MARK_CP(a_,b_) {fixnum _t=(b_);if (inheap((a_))) {\
                              if (what_to_collect == t_contiguous) mark_contblock((void *)(a_),_t);\
                           } else if (SGC_RELBLOCK_P((a_))) (a_)=copy_relblock((void *)(a_),_t);}

#define SGC_MARK_MP(a_) {if ((a_)->_mp_d) \
                           SGC_MARK_CP((a_)->_mp_d,(a_)->_mp_alloc*MP_LIMB_SIZE);}

  case t_random:
    if ((int)what_to_collect >= (int)t_contiguous) {
      SGC_MARK_MP(x->rnd.rnd_state._mp_seed);
#if __GNU_MP_VERSION < 4 || (__GNU_MP_VERSION == 4 && __GNU_MP_VERSION_MINOR < 2)
      if (x->rnd.rnd_state._mp_algdata._mp_lc) {
	SGC_MARK_MP(x->rnd.rnd_state._mp_algdata._mp_lc->_mp_a);
	if (!x->rnd.rnd_state._mp_algdata._mp_lc->_mp_m2exp) SGC_MARK_MP(x->rnd.rnd_state._mp_algdata._mp_lc->_mp_m);
	SGC_MARK_CP(x->rnd.rnd_state._mp_algdata._mp_lc,sizeof(*x->rnd.rnd_state._mp_algdata._mp_lc));
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
      sgc_mark_object(x->rt.rt_self[i].rte_macro);
      if (x->rt.rt_self[i].rte_dtab != NULL) {
	if (what_to_collect == t_contiguous)
	  mark_contblock((char *)(x->rt.rt_self[i].rte_dtab),
			 RTABSIZE*sizeof(object));
	for (j = 0;  j < RTABSIZE;  j++)
	  sgc_mark_object(x->rt.rt_self[i].rte_dtab[j]);
      }
    }
    break;
    
  case t_pathname:
    sgc_mark_object(x->pn.pn_host);
    sgc_mark_object(x->pn.pn_device);
    sgc_mark_object(x->pn.pn_directory);
    sgc_mark_object(x->pn.pn_name);
    sgc_mark_object(x->pn.pn_type);
    sgc_mark_object(x->pn.pn_version);
    break;
    
  /* case t_cfun: */
  /*   sgc_mark_object(x->cf.cf_name); */
  /*   sgc_mark_object(x->cf.cf_data); */
  /*   sgc_mark_object(x->cf.cf_call); */
  /*   break; */
    
  case t_function:	
    sgc_mark_object(x->fun.fun_data);
    sgc_mark_object(x->fun.fun_plist);
    if (x->fun.fun_env != def_env && x->fun.fun_env != src_env) {
      sgc_mark_object(x->fun.fun_env[0]);
      if (what_to_collect >= t_contiguous) {
	object *p=x->fun.fun_env-1;
	if(SGC_RELBLOCK_P(p)) {
	  ufixnum n=*(ufixnum *)p;
	  p=copy_relblock((char *)p,n);
	  x->fun.fun_env=p+1;
	}
      }
    }
    break;
    
  case t_cfdata:
    
    sgc_mark_object(x->cfd.cfd_dlist);
    if (x->cfd.cfd_self != NULL) {
      int i=x->cfd.cfd_fillp;
      while(i-- > 0)
	sgc_mark_object(x->cfd.cfd_self[i]);
    }
    if (x->cfd.cfd_start == NULL)
      break;
    if (what_to_collect == t_contiguous) {
      if (!MAYBE_DATA_P((x->cfd.cfd_start)) ||
	  get_mark_bit(get_pageinfo(x->cfd.cfd_start),x->cfd.cfd_start))
	break;
      mark_contblock(x->cfd.cfd_start, x->cfd.cfd_size);
      mark_link_array(x->cfd.cfd_start,x->cfd.cfd_start+x->cfd.cfd_size);
    }
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

static void
sgc_mark_phase(void) {

  STATIC fixnum i, j;
  STATIC struct package *pp;
  STATIC bds_ptr bdp;
  STATIC frame_ptr frp;
  STATIC ihs_ptr ihsp;
  STATIC struct pageinfo *v;
  
  sgc_mark_object(Cnil->s.s_plist);
  sgc_mark_object(Ct->s.s_plist);
  
  /* mark all non recent data on writable pages */
  {
    long t,i=page(heap_end);
    struct typemanager *tm;
    char *p;
    
    for (v=cell_list_head;v;v=v->next) {
      i=page(v);
      if (!WRITABLE_PAGE_P(i)) continue;

      t=v->type;
      tm=tm_of(t);
      p=pagetochar(i);
      for (j = tm->tm_nppage; --j >= 0; p += tm->tm_size) {
	object x = (object) p; 
	if (SGC_OR_M(x)) continue;
	sgc_mark_object1(x);
      }
    }
  }
  
  for (v=contblock_list_head;v;v=v->next)
    if (WRITABLE_PAGE_P(page(v))) {
      struct contblock *c=CB_DATA_START(v),*ce=CB_DATA_END(v),**cbpp;
      for (;c<ce;c++)
	if (!get_sgc_bit(v,c)) {
	  for (cbpp=&cb_pointer;*cbpp && (c<*cbpp || (void *)c>=(void *)(*cbpp)+(*cbpp)->cb_size);cbpp=&(*cbpp)->cb_link);
	  if (!*cbpp)
	    set_mark_bit(v,c);
	}
    }
	    
  mark_stack_carefully(vs_top-1,vs_org,0);
  /* clear_stack(vs_top,vs_limit); */
  mark_stack_carefully(MVloc+(sizeof(MVloc)/sizeof(object)),MVloc,0);
  /* 
     for (p = vs_org;  p < vs_top;  p++) {
     if (p && (inheap(*p)))
     sgc_mark_object(*p);
     }
  */
#ifdef DEBUG
  if (debug) {
    printf("value stack marked\n");
    fflush(stdout);
  }
#endif
  
  for (bdp = bds_org;  bdp<=bds_top;  bdp++) {
    sgc_mark_object(bdp->bds_sym);
    sgc_mark_object(bdp->bds_val);
  }
  
  for (frp = frs_org;  frp <= frs_top;  frp++)
    sgc_mark_object(frp->frs_val);
  
  for (ihsp = ihs_org;  ihsp <= ihs_top;  ihsp++)
    sgc_mark_object(ihsp->ihs_function);
  
  for (i = 0;  i < mark_origin_max;  i++)
    sgc_mark_object(*mark_origin[i]);
  for (i = 0;  i < mark_origin_block_max;  i++)
    for (j = 0;  j < mark_origin_block[i].mob_size;  j++)
      sgc_mark_object(mark_origin_block[i].mob_addr[j]);
  
  for (pp = pack_pointer;  pp != NULL;  pp = pp->p_link)
    sgc_mark_object((object)pp);
#ifdef KCLOVM
  if (ovm_process_created)
    sgc_mark_all_stacks();
#endif
  
#ifdef DEBUG
  if (debug) {
    printf("symbol navigation\n");
    fflush(stdout);
  }
#endif	
  {
    int size;
  
    for (pp = pack_pointer;  pp != NULL;  pp = pp->p_link) {
      size = pp->p_internal_size;
      if (pp->p_internal != NULL)
	for (i = 0;  i < size;  i++)
	  sgc_mark_pack_list(pp->p_internal[i]);
      size = pp->p_external_size;
      if (pp->p_external != NULL)
	for (i = 0;  i < size;  i++)
	  sgc_mark_pack_list(pp->p_external[i]);
    }
  }
  
  mark_c_stack(0,N_RECURSION_REQD,mark_stack_carefully);
  
}

static void
sgc_sweep_phase(void) {
  STATIC long i, j, k;
  STATIC object x;
  STATIC char *p;
  STATIC struct typemanager *tm;
  STATIC object f;
  int size;
  STATIC struct pageinfo *v;
  
#ifdef DEBUG
  if (debug)
    printf("type map\n");
#endif
  for (v=cell_list_head;v;v=v->next) {
    enum type tp=v->type;

    i=page(v);

    if (tp == t_contiguous) {
      if (debug) {
	printf("-");
	continue;
      }
    }
    if (tp >= t_end)
      continue;
    
    tm = tm_of((enum type)tp);
    
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
    if (!WRITABLE_PAGE_P(i)) 
      continue;
    p = pagetochar(i);
    f = tm->tm_free;
    k = 0;
    size=tm->tm_size;
    if (v->sgc_flags&SGC_PAGE_FLAG) {/*(SGC_PAGE_P(i))*/
      for (j = tm->tm_nppage; --j >= 0;  p += size) {
	x = (object)p;
	
	if (is_free(x))
	  continue;
	else if (is_marked(x)) {
	  unmark(x);
	  continue;
	}
	if (pageinfo(x)->type!=t_cons && x->d.s == SGC_NORMAL)
	  continue;
	
	/* it is ok to free x */
	
#ifdef OLD_DISPLACE
	/* old_displace: from might be free, to not */
	if(type_of(x) >=t_array && type_of(x) <= t_bitvector) {
	  /*			case t_array:
				case t_vector:
				case t_string:
				case t_bitvector:
	  */			
	  if (x->a.a_displaced->c.c_car != Cnil) {
	    undisplace(x);
	    /* The cons x->a.a_displaced cons has been saved,
	       so as to save the pointer to x->a.a_displaced->c.c_car;
	       However any arrays in its cdr, must have been
	       freed, or we would not be freeing x.   To avoid
	       having a cons with trash in the cdr we set the
	       cdr to nil
	    */				    
	    x->a.a_displaced->c.c_cdr = Cnil;
	  }
	}
#endif /* OLD_DISPLACE */
#ifdef GMP_USE_MALLOC			
	if (type_of(x) == t_bignum) 
	  mpz_clear(MP(x));
#endif
	
	SET_LINK(x,f);
	make_free(x);
	if (pagetoinfo(i)->type!=t_cons) x->d.s = SGC_RECENT;
	f = x;
	k++;
      }
      tm->tm_free = f;
      tm->tm_nfree += k;
      pagetoinfo(i)->in_use-=k;
    }
    else /*non sgc_page */
      for (j = tm->tm_nppage; --j >= 0;  p += size) {
	x = (object)p;
	if (is_marked(x) && !is_free(x)) {unmark(x);}
      }
    
  }
#ifdef DEBUG
  if (debug) {
    putchar('\n');
    fflush(stdout);
  }
#endif
}


static void
sgc_contblock_sweep_phase(void) {

  STATIC char *s, *e, *p, *q;
  STATIC struct contblock *cbp;
  STATIC struct pageinfo *v;
  
  cb_pointer = NULL;
  ncb = 0;
  for (v=contblock_list_head;v;v=v->next) {

    if (!(v->sgc_flags&SGC_PAGE_FLAG)) continue;

    s=CB_DATA_START(v);
    e=CB_DATA_END(v);

    for (p = s;  p < e;) {
      if (get_mark_bit(v,p)) {
	/* SGC cont pages: cont blocks must be no smaller than
	   sizeof(struct contblock), and must not have a sweep
	   granularity greater than this amount (e.g. CPTR_SIZE) if
	   contblock leaks are to be avoided.  Used to be aligned at
	   PTR_ALIGN. CM 20030827 */
	p += CPTR_SIZE;
	continue;
      }
      q = p + CPTR_SIZE;
      while (q < e) {
	if (!get_mark_bit(v,q)) {
	  q += CPTR_SIZE;
	  continue;
	}
	break;
      }
      insert_contblock(p, q - p);
      p = q + CPTR_SIZE;
    }

    bzero(CB_MARK_START(v),CB_SGCF_START(v)-CB_MARK_START(v));

  }
#ifdef DEBUG
  if (debug) {
    for (cbp = cb_pointer; cbp != NULL; cbp = cbp->cb_link)
      printf("%ld-byte contblock\n", cbp->cb_size);
    fflush(stdout);
  }
#endif
}



#define PAGE_ROUND_UP(adr) \
    ((char *)(PAGESIZE*(((long)(adr)+PAGESIZE -1) >> PAGEWIDTH)))

/* char *old_rb_start; */

#undef tm

#ifdef SDEBUG
sgc_count(object yy) {
  fixnum count=0;
  object y=yy;
  while(y)
    {count++;
    y=OBJ_LINK(y);}
  printf("[length %x = %d]",yy,count);
  fflush(stdout);
}

#endif

fixnum writable_pages=0;

/* count writable pages excluding the hole */
static fixnum
sgc_count_writable(void) { 

  return page(core_end)-page(rb_start)+writable_pages-(page(old_rb_start)-page(heap_end));

}


fixnum
sgc_count_type(int t) {

  if (t==t_relocatable)
    return page(rb_limit)-page(rb_start);
  else
    return tm_of(t)->tm_npage-tm_of(t)->tm_alt_npage;

}

#ifdef SGC_CONT_DEBUG

void
pcb(struct contblock *p) {
  for (;p;p=p->cb_link)
    printf("%p %d\n",p,p->cb_size);
}

void
overlap_check(struct contblock *t1,struct contblock *t2) {

  struct contblock *p;

  for (;t1;t1=t1->cb_link) {

    if (!inheap(t1)) {
      fprintf(stderr,"%p not in heap\n",t1);
      exit(1);
    }

    for (p=t2;p;p=p->cb_link) {

      if (!inheap(p)) {
	fprintf(stderr,"%p not in heap\n",t1);
	exit(1);
      }

      if ((p<=t1 && (void *)p+p->cb_size>(void *)t1) ||
	  (t1<=p && (void *)t1+t1->cb_size>(void *)p)) {
	fprintf(stderr,"Overlap %u %p  %u %p\n",t1->cb_size,t1,p->cb_size,p);
	exit(1);
      }
      
      if (p==p->cb_link) {
	fprintf(stderr,"circle detected at %p\n",p);
	exit(1);
      }

    }
	
    if (t1==t1->cb_link) {
      fprintf(stderr,"circle detected at %p\n",t1);
      exit(1);
    }

  }

}

void
tcc(struct contblock *t) {

  for (;t;t=t->cb_link) {

    if (!inheap(t)) {
      fprintf(stderr,"%p not in heap\n",t);
      break;
    }

    fprintf(stderr,"%u at %p\n",t->cb_size,t);

    if (t==t->cb_link) {
      fprintf(stderr,"circle detected at %p\n",t);
      break;
    }

  }

}

#endif	  

typedef enum {memprotect_none,memprotect_cannot_protect,memprotect_sigaction,
	      memprotect_bad_return,memprotect_no_signal,
	      memprotect_multiple_invocations,memprotect_no_restart,
	      memprotect_bad_fault_address,memprotect_success} memprotect_enum;
static volatile memprotect_enum memprotect_result;
static int memprotect_handler_invocations,memprotect_print_enable;
static void *memprotect_test_address;

#define MEM_ERR_CASE(a_) \
  case a_: \
    fprintf(stderr,"The SGC segfault recovery test failed with %s, SGC disabled\n",#a_); \
    break

static void
memprotect_print(void) {

  if (!memprotect_print_enable)
    return;

  switch(memprotect_result) {
  case memprotect_none: case memprotect_success:
    break;

    MEM_ERR_CASE(memprotect_cannot_protect);
    MEM_ERR_CASE(memprotect_sigaction);
    MEM_ERR_CASE(memprotect_bad_return);
    MEM_ERR_CASE(memprotect_no_signal);
    MEM_ERR_CASE(memprotect_no_restart);
    MEM_ERR_CASE(memprotect_bad_fault_address);
    MEM_ERR_CASE(memprotect_multiple_invocations);

  }

}


static void
memprotect_handler_test(int sig, long code, void *scp, char *addr) {

  char *faddr;
  faddr=GET_FAULT_ADDR(sig,code,scp,addr); 

  if (memprotect_handler_invocations) {
    memprotect_result=memprotect_multiple_invocations;
    exit(-1);
  }
  memprotect_handler_invocations=1;
  if (faddr!=memprotect_test_address)
    memprotect_result=memprotect_bad_fault_address;
  else
    memprotect_result=memprotect_none;
  mprotect(memprotect_test_address,PAGESIZE,PROT_READ_WRITE_EXEC);

}

static int
memprotect_test(void) {

  char *b1,*b2;
  unsigned long p=PAGESIZE;
  struct sigaction sa,sao,saob;

  if (memprotect_result!=memprotect_none)
    return memprotect_result!=memprotect_success;
  if (atexit(memprotect_print)) {
    fprintf(stderr,"Cannot setup memprotect_print on exit\n");
    exit(-1);
  }

  if (!(b1=alloca(2*p))) {
    memprotect_result=memprotect_cannot_protect;
    return -1;
  }

  if (!(b2=alloca(p))) {
    memprotect_result=memprotect_cannot_protect;
    return -1;
  }

  memset(b1,32,2*p);
  memset(b2,0,p);
  memprotect_test_address=(void *)(((unsigned long)b1+p-1) & ~(p-1));
  sa.sa_sigaction=(void *)memprotect_handler_test;
  sa.sa_flags=MPROTECT_ACTION_FLAGS;
  if (sigaction(SIGSEGV,&sa,&sao)) {
    memprotect_result=memprotect_sigaction;
    return -1;
  }
  if (sigaction(SIGBUS,&sa,&saob)) {
    sigaction(SIGSEGV,&sao,NULL);
    memprotect_result=memprotect_sigaction;
    return -1;
  }
  { /* mips kernel bug test -- SIGBUS with no faddr when floating point is emulated. */
    float *f1=(void *)memprotect_test_address,*f2=(void *)b2,*f1e=f1+p/sizeof(*f1);
  
    if (mprotect(memprotect_test_address,p,PROT_READ_EXEC)) {
      memprotect_result=memprotect_cannot_protect;
      return -1;
    }
    memprotect_result=memprotect_bad_return;
    for (;f1<f1e;) *f1++=*f2;
    if (memprotect_result==memprotect_bad_return)
      memprotect_result=memprotect_no_signal;
    if (memprotect_result!=memprotect_none) {
      sigaction(SIGSEGV,&sao,NULL);
      sigaction(SIGBUS,&saob,NULL);
      return -1;
    }
    memprotect_handler_invocations=0;

  }
  if (mprotect(memprotect_test_address,p,PROT_READ_EXEC)) {
    memprotect_result=memprotect_cannot_protect;
    return -1;
  }
  memprotect_result=memprotect_bad_return;
  memset(memprotect_test_address,0,p);
  if (memprotect_result==memprotect_bad_return)
    memprotect_result=memprotect_no_signal;
  if (memprotect_result!=memprotect_none) {
    sigaction(SIGSEGV,&sao,NULL);
    sigaction(SIGBUS,&saob,NULL);
    return -1;
  }
  if (memcmp(memprotect_test_address,b2,p)) {
    memprotect_result=memprotect_no_restart;
    sigaction(SIGSEGV,&sao,NULL);
    sigaction(SIGBUS,&saob,NULL);
    return -1;
  }
  memprotect_result=memprotect_success;
  sigaction(SIGSEGV,&sao,NULL);
  sigaction(SIGBUS,&saob,NULL);
  return 0;

}

static int
do_memprotect_test(void) {

  int rc=0;

  memprotect_print_enable=1;
  if (memprotect_test()) {
    memprotect_print();
    if (sgc_enabled)
      sgc_quit();
    rc=-1;
  }
  memprotect_print_enable=0;
  return rc;

}

void
memprotect_test_reset(void) {

  memprotect_result=memprotect_none;
  memprotect_handler_invocations=0;
  memprotect_test_address=NULL;

  if (sgc_enabled)
    do_memprotect_test();

}

#define MMIN(a,b) ({long _a=a,_b=b;_a<_b ? _a : _b;})
#define MMAX(a,b) ({long _a=a,_b=b;_a>_b ? _a : _b;})
/* If opt_maxpage is set, don't lose balancing information gained thus
   far if we are triggered 'artificially' via a hole overrun. FIXME --
   try to allocate a small working set with the right proportions
   later on. 20040804 CM*/
#define WSGC(tm) ({struct typemanager *_tm=tm;long _t=MMAX(MMIN(_tm->tm_opt_maxpage,_tm->tm_npage),_tm->tm_sgc);_t*scale;})
/* If opt_maxpage is set, add full pages to the sgc set if needed
   too. 20040804 CM*/
#define FSGC(tm) (tm->tm_type==t_cons ? tm->tm_nppage : (tm->tm_opt_maxpage ? 0 : tm->tm_sgc_minfree))

DEFVAR("*WRITABLE*",sSAwritableA,SI,Cnil,"");

unsigned char *wrimap=NULL;

int
sgc_start(void) {

  long i,count,minfree,allocate_more_pages=!saving_system && 10*available_pages>2*(real_maxpage-first_data_page);
  long np;
  struct typemanager *tm;
  struct pageinfo *v;
  object omp=sSAoptimize_maximum_pagesA->s.s_dbind;
  double tmp,scale;

  sSAoptimize_maximum_pagesA->s.s_dbind=Cnil;
  
  if (memprotect_result!=memprotect_success && do_memprotect_test())
    return 0;

  if (sgc_enabled)
    return 1;

  /* Reset maxpage statistics if not invoked automatically on a hole
     overrun. 20040804 CM*/
  /* if (!hole_overrun) { */
  /*   vs_mark; */
  /*   object *old_vs_base=vs_base; */
  /*   vs_base=vs_top; */
  /*   FFN(siLreset_gbc_count)(); */
  /*   vs_base=old_vs_base; */
  /*   vs_reset; */
  /* } */

  for (i=t_start,scale=1.0,tmp=0.0;i<t_other;i++)
    if (TM_BASE_TYPE_P(i))
      tmp+=WSGC(tm_of(i));
  tmp+=WSGC(tm_of(t_relocatable));
  scale=tmp>available_pages/10 ? (float)available_pages/(10*tmp) : 1.0;

  for (i= t_start; i < t_contiguous ; i++) {
    
    if (!TM_BASE_TYPE_P(i) || !(np=(tm=tm_of(i))->tm_sgc)) continue;

    minfree = FSGC(tm) > 0 ? FSGC(tm) : 1;
    count=0;

  FIND_FREE_PAGES:

    for (v=cell_list_head;v && (count<MMAX(tm->tm_sgc_max,WSGC(tm)));v=v->next) {

      if (v->type!=i || tm->tm_nppage-v->in_use<minfree) continue;

      v->sgc_flags|=SGC_PAGE_FLAG;
      count++;

    }

    if (count<WSGC(tm) && !FSGC(tm)) 
      for (v=cell_list_head;v && (count<MMAX(tm->tm_sgc_max,WSGC(tm)));v=v->next) {

	if (v->type!=i || tm->tm_nppage!=v->in_use) continue;
	
	v->sgc_flags|=SGC_PAGE_FLAG;
	count++;
	if (count >= MMAX(tm->tm_sgc_max,WSGC(tm)))
	  break; 
      }

    /* don't do any more allocations  for this type if saving system */
    if (!allocate_more_pages) 
      continue;
    
    if (count < WSGC(tm)) {
      /* try to get some more free pages of type i */
      long n = WSGC(tm) - count;
      long again=0,nfree = tm->tm_nfree;
      char *p=alloc_page(n);
      if (tm->tm_nfree > nfree) again=1;  /* gc freed some objects */
      while (n-- > 0) {
	/* (sgc_enabled=1,add_page_to_freelist(p,tm),sgc_enabled=0); */
	(add_page_to_freelist(p,tm));
	p += PAGESIZE;
      }
      if (again) 
	goto FIND_FREE_PAGES;	 
    }

  }


/* SGC cont pages: Here we implement the contblock page division into
   SGC and non-SGC types.  Unlike the other types, we need *whole*
   free pages for contblock SGC, as there is no persistent data
   element (e.g. .m) on an allocated block itself which can indicate
   its live status.  If anything on a page which is to be marked
   read-only points to a live object on an SGC cont page, it will
   never be marked and will be erroneously swept.  It is also possible
   for dead objects to unnecessarily mark dead regions on SGC pages
   and delay sweeping until the pointing type is GC'ed if SGC is
   turned off for the pointing type, e.g. tm_sgc=0. (This was so by
   default for a number of types, including bignums, and has now been
   corrected in gcl_init_alloc in alloc.c.) We can't get around this
   AFAICT, as old data on (writable) SGC pages must be marked lest it
   is lost, and (old) data on now writable non-SGC pages might point
   to live regions on SGC pages, yet might not themselves be reachable
   from the mark origin through an unbroken chain of writable pages.
   In any case, the possibility of a lot of garbage marks on contblock
   pages, especially when the blocks are small as in bignums, makes
   necessary the sweeping of minimal contblocks to prevent leaks. CM
   20030827 */

  {

    void *p=NULL,*pe;
    struct pageinfo *pi;
    fixnum i,j,count=0;
    struct contblock **cbpp;
    
    tm=tm_of(t_contiguous);

    for (pi=contblock_list_head;pi && count<WSGC(tm);pi=pi->next) {

      p=CB_DATA_START(pi);
      pe=CB_DATA_END(pi);

      for (cbpp=&cb_pointer,j=0;*cbpp;cbpp=&(*cbpp)->cb_link)
	if ((void*)*cbpp>=p && (void *)*cbpp<pe)
	  j+=(*cbpp)->cb_size;

      if (j*tm->tm_nppage<FSGC(tm)*(CB_DATA_END(pi)-CB_DATA_START(pi))) continue;

      pi->sgc_flags=SGC_PAGE_FLAG;
      count+=pi->in_use;

    }
    i=allocate_more_pages ? WSGC(tm) : (saving_system ? 1 : 0);
    
    if (i>count) {
      /* SGC cont pages: allocate more if necessary, dumping possible
	 GBC freed pages onto the old contblock list.  CM 20030827*/
      unsigned long z=(i-count)+1;
      void *old_contblock_list_tail=contblock_list_tail;

      if (maxcbpage<ncbpage+z)
	massert(set_tm_maxpage(tm_table+t_contiguous,ncbpage+z));

      add_pages(tm_table+t_contiguous,z);

      massert(old_contblock_list_tail!=contblock_list_tail);

      contblock_list_tail->sgc_flags=SGC_PAGE_FLAG;

    }

  }

  /* Now  allocate the sgc relblock.   We do this as the tail
     end of the ordinary rb.     */  
  {
    char *new;
    tm=tm_of(t_relocatable);
    
    {
      old_rb_start=rb_start;
      if(((unsigned long)WSGC(tm)) && allocate_more_pages) {
	new=alloc_relblock(((unsigned long)WSGC(tm))*PAGESIZE);
	/* the above may cause a gc, shifting the relblock */
	old_rb_start=rb_start;
	new= PAGE_ROUND_UP(new);
      } else new=PAGE_ROUND_UP(rb_pointer);
      rb_start=rb_pointer=new;
    }
  }
  /* the relblock has been allocated */
  
  sSAwritableA->s.s_dbind=fSmake_vector(sLbit,(page(rb_start)-first_data_page),Ct,Cnil,Cnil,0,Cnil,Cnil);
  wrimap=(void *)sSAwritableA->s.s_dbind->v.v_self;

  /* now move the sgc free lists into place.   alt_free should
     contain the others */
  for (i= t_start; i < t_contiguous ; i++)
    if (TM_BASE_TYPE_P(i) && (np=(tm=tm_of(i))->tm_sgc)) {
      object f=tm->tm_free ,x,y,next;
      fixnum count=0;
      x=y=0;
      
      while (f!=0) {
	next=OBJ_LINK(f);
#ifdef SDEBUG	     
	if (!is_free(f))
	  printf("Not FREE in freelist f=%d",f);
#endif
	if (pageinfo(f)->sgc_flags&SGC_PAGE_FLAG) {
	  SET_LINK(f,x);
	  if (pageinfo(f)->type!=t_cons) f->d.s = SGC_RECENT;
	  x=f;
	  count++;
	} else {
	  SET_LINK(f,y);
 	  if (pageinfo(f)->type!=t_cons) f->d.s = SGC_NORMAL;
	  y=f;
	}
	f=next;
      }
      tm->tm_free = x;
      tm->tm_alt_free = y;
      tm->tm_alt_nfree = tm->tm_nfree - count;
      tm->tm_nfree=count;
    }

  {

    struct pageinfo *pi;

    {

      struct contblock *new_cb_pointer=NULL,*tmp_cb_pointer=NULL,**cbpp;
      void *p=NULL,*pe;
      struct pageinfo *pi;

      for (pi=contblock_list_head;pi;pi=pi->next) {
	
	if (pi->sgc_flags!=SGC_PAGE_FLAG) continue;
	
	p=CB_DATA_START(pi);
	pe=p+CB_DATA_SIZE(pi->in_use);
	
	for (cbpp=&cb_pointer;*cbpp;)
	  if ((void *)*cbpp>=p && (void *)*cbpp<pe) {
	    struct contblock *c1=*cbpp,*c,*ce=(void *)c1+(*cbpp)->cb_size;
	    void *l=(*cbpp)->cb_link;
	    for (c=c1;c<ce;c++)
	      set_sgc_bit(pi,c);
	    tmp_cb_pointer=cb_pointer;
	    cb_pointer=new_cb_pointer;
	    insert_contblock((void *)c1,(void *)ce-(void *)c1);
	    new_cb_pointer=cb_pointer;
	    cb_pointer=tmp_cb_pointer;
	    *cbpp=l;
	  } else
	    cbpp=&(*cbpp)->cb_link;

      }
      
      /* SGC contblock pages: switch to new free SGC contblock list. CM
	 20030827 */
      old_cb_pointer=cb_pointer;
      cb_pointer=new_cb_pointer;
      
#ifdef SGC_CONT_DEBUG
      overlap_check(old_cb_pointer,cb_pointer);
#endif
    }

    for (i=t_start;i<t_other;i++)
      tm_of(i)->tm_alt_npage=0;
    writable_pages=0;

    for (pi=cell_list_head;pi;pi=pi->next) {
      void *v,*ve;
      if (pi->sgc_flags&SGC_WRITABLE)
	SET_WRITABLE(page(pi));
      else
	tm_of(pi->type)->tm_alt_npage++;
#ifndef NO_SETBUF /*FIXME, implement restartable getc with read in readc_stream*/
      if (pi->type!=(tm=tm_of(t_stream))->tm_type) continue;
      for (v=pagetochar(page(pi)),ve=v+tm->tm_nppage*tm->tm_size;v<ve;v+=tm->tm_size) {
	object x=v;
	if (type_of(x)!=t_stream || is_free(x)) continue;
	if (x->sm.sm_buffer) 
	  for (i=page(x->sm.sm_buffer);i<=page(x->sm.sm_buffer+BUFSIZ-1);i++)
	    SET_WRITABLE(i);
      }
#endif
    }
    for (pi=contblock_list_head;pi;pi=pi->next)/*FIXME*/
      if (pi->sgc_flags&SGC_WRITABLE)
	for (i=0;i<pi->in_use;i++)
	  SET_WRITABLE(page(pi)+i);
      else
	tm_of(t_contiguous)->tm_alt_npage+=pi->in_use;
    for (i=page(heap_end);i<page(old_rb_start);i++)
	SET_WRITABLE(i);
    tm_of(t_relocatable)->tm_alt_npage=page(rb_start)-page(old_rb_start);
    for (i=page(rb_start);i<page(core_end);i++)
	SET_WRITABLE(i);

    fault_pages=0;

  }

  /* Whew.   We have now allocated the sgc space
     and modified the tm_table;
     Turn  memory protection on for the pages which are writable.
  */
  memory_protect(1);
  sgc_enabled=1;
  if (sSAnotify_gbcA->s.s_dbind != Cnil) {
    printf("[SGC on]"); 
    fflush(stdout);
  }

  sSAoptimize_maximum_pagesA->s.s_dbind=omp;

  return 1;
  
}

int
sgc_quit(void) { 

  struct typemanager *tm;
  struct contblock *tmp_cb_pointer,*next;
  unsigned long i,j,np;
  char *p;
  struct pageinfo *v;

  memory_protect(0);

  if(sSAnotify_gbcA->s.s_dbind != Cnil) 
    printf("[SGC off]"); fflush(stdout);

  if (sgc_enabled==0) 
    return 0;

  sSAwritableA->s.s_dbind=Cnil;
  wrimap=NULL;

  sgc_enabled=0;
  rb_start = old_rb_start;

  /* SGC cont pages: restore contblocks, each tmp_cb_pointer coming
     from the new list is guaranteed not to be on the old. Need to
     grab 'next' before insert_contblock writes is.  CM 20030827 */

  if (old_cb_pointer) {
#ifdef SGC_CONT_DEBUG
    overlap_check(old_cb_pointer,cb_pointer);
#endif
    tmp_cb_pointer=cb_pointer;
    cb_pointer=old_cb_pointer;
    for (;tmp_cb_pointer;  tmp_cb_pointer=next) {
      next=tmp_cb_pointer->cb_link;
      insert_contblock((void *)tmp_cb_pointer,tmp_cb_pointer->cb_size);
    }
  }

  for (i= t_start; i < t_contiguous ; i++)
    
    if (TM_BASE_TYPE_P(i) && (np=(tm=tm_of(i))->tm_sgc)) {
      
      object f,y;
      
      f=tm->tm_free;
      if (f==0) 
	tm->tm_free=tm->tm_alt_free;
      else {
	/* tack the alt_free onto the end of free */
#ifdef SDEBUG
	fixnum count=0;
	f=tm->tm_free;
	while(y= (object) F_LINK(f)) {
	  if(y->d.s != SGC_RECENT)
	    printf("[bad %d]",y);
	  count++; f=y;
	}
	
	count=0;
	if (f=tm->tm_alt_free)
	  while(y= F_LINK(f)) {
	    if(y->d.s != SGC_NORMAL)
	      printf("[alt_bad %d]",y);
	    count++; f=y;
	  }
	
#endif
	f=tm->tm_free;
	while((y= (object) F_LINK(f)))
	  f=y;
	F_LINK(f)= (long)(tm->tm_alt_free);
      }
      /* tm->tm_free has all of the free objects */
      tm->tm_nfree += tm->tm_alt_nfree;
      tm->tm_alt_nfree = 0;
      tm->tm_alt_free = 0;
      
    }

  /*FIXME*/
  /* remove the recent flag from any objects on sgc pages */
  for (v=cell_list_head;v;v=v->next) 
    if (v->type==(tm=tm_of(v->type))->tm_type && v->type!=t_cons && v->sgc_flags & SGC_PAGE_FLAG)
      for (p=pagetochar(page(v)),j=tm->tm_nppage;j>0;--j,p+=tm->tm_size)
	((object) p)->d.s=SGC_NORMAL;

  for (v=contblock_list_head;v;v=v->next) 
    if (v->sgc_flags&SGC_PAGE_FLAG) 
      bzero(CB_SGCF_START(v),CB_DATA_START(v)-CB_SGCF_START(v));
  
  {
    struct pageinfo *pi;
    for (pi=cell_list_head;pi;pi=pi->next)
      pi->sgc_flags&=SGC_PERM_WRITABLE;
    for (pi=contblock_list_head;pi;pi=pi->next)
      pi->sgc_flags&=SGC_PERM_WRITABLE;
  }
  
  return 0;
  
}

fixnum debug_fault =0;
fixnum fault_count =0;
extern char etext;
static void
memprotect_handler(int sig, long code, void *scp, char *addr) {
  
  unsigned long p;
  void *faddr;  /* Needed because we must not modify signal handler
		   arguments on the stack! */
#ifdef GET_FAULT_ADDR
  faddr=GET_FAULT_ADDR(sig,code,scp,addr); 
  debug_fault = (long) faddr;
#ifdef DEBUG_MPROTECT
  printf("fault:0x%x [%d] (%d)  ",faddr,page(faddr),faddr >= core_end);
#endif 
/*   if (faddr >= core_end || (unsigned long)faddr < DBEGIN) { */
/*     if (fault_count > 300) error("fault count too high"); */
/*     fault_count ++; */
/*     INSTALL_MPROTECT_HANDLER; */
/*     return; */
/*   } */
#else
  faddr = addr;
#endif 
  p = page(faddr);
  /* p = ROUND_DOWN_PAGE_NO(p); */
  if (p >= first_protectable_page
      && faddr < (void *)core_end
      && !(WRITABLE_PAGE_P(p))) {
    /*   CHECK_RANGE(p,1); */
#ifdef DEBUG_MPROTECT
    printf("mprotect(0x%x,0x%x,0x%x)\n",
	   pagetoinfo(p),PAGESIZE, sbrk(0));
    fflush(stdout);
#endif     
    
#ifndef BSD
    INSTALL_MPROTECT_HANDLER;
#endif

    mprotect(pagetoinfo(p),PAGESIZE,PROT_READ_WRITE_EXEC);
    SET_WRITABLE(p);
    fault_pages++;

    return;

  }
  
#ifndef  BSD
  INSTALL_MPROTECT_HANDLER;
#endif

  segmentation_catcher(sig,code,scp,addr);

}

static void
sgc_mprotect(long pbeg, long n, int writable) {
  /* CHECK_RANGE(pbeg,n);  */
#ifdef DEBUG_MPROTECT
  printf("prot[%d,%d,(%d),%s]\n",pbeg,pbeg+n,writable & SGC_WRITABLE,
	 (writable  & SGC_WRITABLE ? "writable" : "not writable"));
  printf("mprotect(0x%x,0x%x), sbrk(0)=0x%x\n",
	 pagetoinfo(pbeg), n * PAGESIZE, sbrk(0));
  fflush(stdout);
#endif  
  if(mprotect(pagetoinfo(pbeg),n*PAGESIZE,
	      (writable & SGC_WRITABLE ? PROT_READ_WRITE_EXEC : PROT_READ_EXEC)))
    FEerror("Couldn't protect",0);
}



void
memory_protect(int on) {

  unsigned long i,beg,end= page(core_end);
  int writable=1;
  extern void install_segmentation_catcher(void);


  first_protectable_page=first_data_page;

  /* turning it off */
  if (on==0) {
    sgc_mprotect(first_protectable_page,end-first_protectable_page,SGC_WRITABLE);
    install_segmentation_catcher();
    return;
  }

  INSTALL_MPROTECT_HANDLER;

  beg=first_protectable_page;
  writable = IS_WRITABLE(beg);
  for (i=beg ; ++i<= end; ) {

    if (writable==IS_WRITABLE(i) && i<=end) continue;

    sgc_mprotect(beg,i-beg,writable);
    writable=1-writable;
    beg=i;

  }

}

static void
FFN(siLsgc_on)(void) {

  if (vs_base==vs_top) {
    vs_base[0]=(sgc_enabled ? Ct :Cnil);
    vs_top=vs_base+1; return;
  }
  check_arg(1);
  if(vs_base[0]==Cnil) 
    sgc_quit();
  else 
    vs_base[0]=sgc_start() ? Ct : Cnil;
}

void
system_error(void) {
  FEerror("System error",0);
}
