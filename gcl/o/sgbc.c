/*  Copyright William Schelter. All rights reserved.
    
    Stratified Garbage Collection  (SGC)

    Write protects pages to tell which ones have been written
to recently, for more efficient garbage collection.

*/


#ifdef BSD
/* ulong may have been defined in mp.h but the define is no longer needed */
#undef ulong
#include <sys/mman.h>
#define PROT_READ_WRITE (PROT_READ | PROT_WRITE |PROT_EXEC)
#endif
#ifdef AIX3
#include <sys/vmuser.h>
#define PROT_READ RDONLY
#define  PROT_READ_WRITE UDATAKEY
int mprotect();
#endif

#include <signal.h>

void segmentation_catcher();


#define sgc_mark_pack_list(u)      \
do {register object xtmp = u;  \
 while (xtmp != Cnil) \
   {if (ON_WRITABLE_PAGE(xtmp)) xtmp->d.m = TRUE; \
     sgc_mark_object(xtmp->c.c_car); \
    xtmp=xtmp->c.c_cdr;}}while(0) 


#ifdef SDEBUG
  object sdebug;
joe1(){;}
joe() {;}     
#endif

sgc_mark_cons(x)
object x;
{
  cs_check(x);

	/*  x is already marked.  */

BEGIN:
#ifdef SDEBUG
      if(x==sdebug) joe1();
#endif
      sgc_mark_object(x->c.c_car);
#ifdef OLD
      IF_WRITABLE(x->c.c_car, goto MARK_CAR;);
      goto MARK_CDR;

 MARK_CAR:
   if (x->c.c_car->c.m ==0)
	{if (type_of(x->c.c_car) == t_cons)
	   {
	     x->c.c_car->c.m = TRUE;
	     sgc_mark_cons(x->c.c_car);
	   }
	else
	  sgc_mark_object1(x->c.c_car);}
#endif
 MARK_CDR:  
  x = x->c.c_cdr;
  IF_WRITABLE(x, goto WRITABLE_CDR;);
    return;
 WRITABLE_CDR:
  if (x->d.m) return;
  if (type_of(x) == t_cons) {
		x->c.m = TRUE;
		goto BEGIN;
	}
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
sgc_mark_object1(x)
object x;
{
	int i, j;
	object *p;
	char *cp;
	object y;

	cs_check(x);
BEGIN:
#ifdef SDEBUG
	if (x == OBJNULL || !ON_WRITABLE_PAGE(x))
		return;
	IF_WRITABLE(x,goto OK);
	joe();
#endif 
      OK:
	if (x->d.m)
		return;
#ifdef SDEBUG
	if(x==sdebug) joe1();
#endif
	if (DBEGIN) {
	  if (NULL_OR_ON_C_STACK(x))
	    return;
	} /* otherwise if DBEGIN==0 the IF_WRITABLE test will
	     always fail on x that satisfy (NULL_OR_ON_C_STACK(x))
	     */
	
	x->d.m = TRUE;
	switch (type_of(x)) {
	case t_fixnum:
		break;

	case t_ratio:
		sgc_mark_object(x->rat.rat_num);
		x = x->rat.rat_den;
		IF_WRITABLE(x,if(x->d.m==0) goto BEGIN);

	case t_shortfloat:
		break;

	case t_longfloat:
		break;

	case t_complex:
		sgc_mark_object(x->cmp.cmp_imag);
		x = x->cmp.cmp_real;
		IF_WRITABLE(x,if(x->d.m==0) goto BEGIN);

	case t_character:
		break;

	case t_symbol:
		IF_WRITABLE(x->s.s_plist,if(x->s.s_plist->d.m==0)
			    {x->s.s_plist->d.m=TRUE;
			     sgc_mark_cons(x->s.s_plist);});
		sgc_mark_object(x->s.s_gfdef);
		sgc_mark_object(x->s.s_dbind);
		if (x->s.s_self == NULL)
			break;
		/* to do */
		if ((int)what_to_collect >= (int)t_contiguous) {
			if (inheap(x->s.s_self)) {
				if (what_to_collect == t_contiguous)
					mark_contblock(x->s.s_self,
						       x->s.s_fillp);
			} else  if(SGC_RELBLOCK_P(x->s.s_self))
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
			sgc_mark_object(x->ht.ht_self[i].hte_key);
			sgc_mark_object(x->ht.ht_self[i].hte_value);
		}
		if ((short)what_to_collect >= (short)t_contiguous) {
			if (inheap(x->ht.ht_self)) {
				if (what_to_collect == t_contiguous)
				    mark_contblock((char *)(x->ht.ht_self),
					           j * sizeof(struct htent));
			} else if(SGC_RELBLOCK_P(x->ht.ht_self))
				x->ht.ht_self = (struct htent *)
				copy_relblock((char *)(x->ht.ht_self),
					      j * sizeof(struct htent));
		}
		break;

	case t_array:
		if ((x->a.a_displaced) != Cnil)
		  sgc_mark_displaced_field(x);
		if ((int)what_to_collect >= (int)t_contiguous &&
		    x->a.a_dims != NULL) {
			if (inheap(x->a.a_dims)) {
				if (what_to_collect == t_contiguous)
				    mark_contblock((char *)(x->a.a_dims),
					           sizeof(int)*x->a.a_rank);
			} else  if(SGC_RELBLOCK_P(x->a.a_dims))
				x->a.a_dims = (int *)
				copy_relblock((char *)(x->a.a_dims),
					      sizeof(int)*x->a.a_rank);
		}
		if ((enum aelttype)x->a.a_elttype == aet_ch)
			goto CASE_STRING;
		if ((enum aelttype)x->a.a_elttype == aet_bit)
			goto CASE_BITVECTOR;
		if ((enum aelttype)x->a.a_elttype == aet_object)
			goto CASE_GENERAL;

	CASE_SPECIAL:
		cp = (char *)(x->fixa.fixa_self);
		if (cp == NULL)
			break;
		/* set j to the size in char of the body of the array */
		
		switch((enum aelttype)x->a.a_elttype){
		case aet_lf:
		  j= sizeof(longfloat)*x->lfa.lfa_dim;
		  if (((int)what_to_collect >= (int)t_contiguous) &&
			!(inheap(cp)) && SGC_RELBLOCK_P(x->a.a_self))
		    ROUND_RB_POINTERS_DOUBLE;
		  break;
		case aet_char:
		case aet_uchar:
		  j=sizeof(char)*x->a.a_dim;
		  break;
		case aet_short:
		case aet_ushort:
		  j=sizeof(short)*x->a.a_dim;
		  break;
		default:
		  j=sizeof(fixnum)*x->fixa.fixa_dim;}

		goto COPY;

	CASE_GENERAL:
		p = x->a.a_self;
		if (p == NULL
#ifdef HAVE_ALLOCA
                   || (char *)p >= core_end
#endif  
		    
		    )
			break;
		if (x->a.a_displaced->c.c_car == Cnil)
			for (i = 0, j = x->a.a_dim;  i < j;  i++)
			  if (ON_WRITABLE_PAGE(&p[i]))
				sgc_mark_object(p[i]);
		cp = (char *)p;
		j *= sizeof(object);
	COPY:
		if ((int)what_to_collect >= (int)t_contiguous) {
			if (inheap(cp)) {
				if (what_to_collect == t_contiguous)
					mark_contblock(cp, j);
			}
			else if (!SGC_RELBLOCK_P(cp)) ;
			else if (x->a.a_displaced == Cnil){
#ifdef HAVE_ALLOCA
			  if (cp <= core_end)  /* only if body of array not on C stack */
#endif			  
				x->a.a_self = (object *)copy_relblock(cp, j);}
			else if (x->a.a_displaced->c.c_car == Cnil) {
				i = (int)(object *)copy_relblock(cp, j)
				  - (int)(x->a.a_self);
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
#ifdef SDEBUG
		if (type_map[page(x->big.big_self)] < t_contiguous)
		  {
		    printf("bad body for %x (%x)\n",x,cp);
		    
		  }
#endif
#ifndef GMP
		if ((int)what_to_collect >= (int)t_contiguous) {
		j = x->big.big_length;
		cp = (char *)x->big.big_self;
		if (cp == NULL)
			break;
		if  (j != lg(MP(x))  &&
		      /* we don't bother to zero this register,
			 and its contents may get over written */
		      ! (x ==  big_register_1 &&
			 (int)(cp) <= top &&
			 (int) cp >= bot))
		  
		  printf("bad length 0x%x ",x);
		j = j * sizeof(int);

		if (inheap(cp)) {
		  if (what_to_collect == t_contiguous)
		    mark_contblock(cp, j);
		} else {
		  if (SGC_RELBLOCK_P(cp))
		    x->big.big_self = (plong *)copy_relblock(cp, j);}}
#endif /* no gmp */
#ifndef GMP_USE_MALLOC
		if ((int)what_to_collect >= (int)t_contiguous) {
		  j = MP_ALLOCATED(x);
		  cp = (char *)MP_SELF(x);
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
		    if (SGC_RELBLOCK_P(cp))
		       MP_SELF(x) = (void *) copy_relblock(cp, j);}}
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
		if ((int)what_to_collect >= (int)t_contiguous) {
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

#define W_SIZE (8*sizeof(int))
		j= sizeof(int) *
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
		{object def=x->str.str_def;
		 unsigned char * s_type = &SLOT_TYPE(def,0);
		 unsigned short *s_pos= & SLOT_POS(def,0);
		 for (i = 0, j = S_DATA(def)->length;  i < j;  i++)
		   if (s_type[i]==0 &&
		       ON_WRITABLE_PAGE(& STREF(object,x,s_pos[i]))
		       )
		     sgc_mark_object(STREF(object,x,s_pos[i]));
		 if ((int)what_to_collect >= (int)t_contiguous) {
		     if (inheap(x->str.str_self)) {
		       if (what_to_collect == t_contiguous)
			 mark_contblock((char *)p,
					S_DATA(def)->size);

		     } else if(SGC_RELBLOCK_P(p))
		       x->str.str_self = (object *)
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
			sgc_mark_object(x->sm.sm_object0);
			sgc_mark_object(x->sm.sm_object1);
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

	case t_random:
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
/**/
	if (what_to_collect == t_contiguous)
		mark_contblock((char *)(x->rt.rt_self[i].rte_dtab),
			       RTABSIZE*sizeof(object));
	for (j = 0;  j < RTABSIZE;  j++)
		sgc_mark_object(x->rt.rt_self[i].rte_dtab[j]);
/**/
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

      case t_closure:
       { int i ;
         if (what_to_collect == t_contiguous)
              mark_contblock(x->cc.cc_turbo,x->cc.cc_envdim);
         for (i= 0 ; i < x->cc.cc_envdim ; i++) {
	   sgc_mark_object(x->cc.cc_turbo[i]);}}


	case t_cfun:
        case t_sfun:
        case t_vfun:
        case t_afun:
	case t_gfun:
		sgc_mark_object(x->cf.cf_name);
		sgc_mark_object(x->cf.cf_data);
		break;
		
        case t_cfdata:

	        if (x->cfd.cfd_self != NULL)
		  {int i=x->cfd.cfd_fillp;
		   while(i-- > 0)
		     sgc_mark_object(x->cfd.cfd_self[i]);}
		if (x->cfd.cfd_start == NULL)
			break;
		if (what_to_collect == t_contiguous) {
			if (!MAYBE_DATA_P((x->cfd.cfd_start)) ||
			    get_mark_bit((int *)(x->cfd.cfd_start)))
				break;
			mark_contblock(x->cfd.cfd_start, x->cfd.cfd_size);}
		break;
	case t_cclosure:
		sgc_mark_object(x->cc.cc_name);
		sgc_mark_object(x->cc.cc_env);
                sgc_mark_object(x->cc.cc_data);
		if (what_to_collect == t_contiguous) {
		  if (x->cc.cc_turbo != NULL)
		    mark_contblock((char *)(x->cc.cc_turbo-1),
                                   (1+fix(*(x->cc.cc_turbo-1)))*sizeof(object));
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



sgc_mark_stack_carefully(top,bottom,offset)
int *bottom,*top;
{int p,m,pageoffset;
 object x;
 struct typemanager *tm;
 register int *j;

 /* if either of these happens we are marking the C stack
    and need to use a local */

 if (top==0) top = c_stack_where;
 if (bottom==0) bottom= c_stack_where;

 /* On machines which align local pointers on multiple of 2 rather
    than 4 we need to mark twice
   */

 if (offset) {sgc_mark_stack_carefully((((char *) top) +offset),bottom,0);}
 for (j=top ; j >= bottom ; j--)
   {if (VALID_DATA_ADDRESS_P(*j)
	&& type_map[(p=page(*j))]< (char)t_end)
      {pageoffset=((char *)*j - pagetochar(p));
       tm=tm_of((enum type) type_map[p]);
       x= (object)
	 ((char *)(*j) -
	  ((pageoffset=((char *)*j - pagetochar(p))) %
	   tm->tm_size));
       if ((pageoffset <  (tm->tm_size * tm->tm_nppage))
	   && (m=x->d.m) != FREE)
       {if (m==TRUE) continue;
	  if (m!=0)
	    {fprintf(stdout,
		     "**bad value %d of d.m in gbc page %d skipping mark**"
		     ,m,p);fflush(stdout);
	     continue;
	   };
	  sgc_mark_object(x);}}}}


sgc_mark_phase()
{
	STATIC object *p;
	STATIC int i, j, k, n;
	STATIC struct package *pp;
	STATIC object s, l, *lp;
	STATIC bds_ptr bdp;
	STATIC frame_ptr frp;
	STATIC ihs_ptr ihsp;
	STATIC char *cp;

	sgc_mark_object(Cnil);
	sgc_mark_object(Ct);

	

    /* mark all non recent data on writable pages */
	{int t,i=page(heap_end);
	 struct typemanager *tm;
	 char *p;
	 
	 while (--i >= 0)
	   {if (WRITABLE_PAGE_P(i)
		  && (t=type_map[i]) < (int) t_end);
	   else continue;
	    tm=tm_of(t);
	    p=pagetochar(i);
	    if ( t == t_cons) 
	      for (j = tm->tm_nppage; --j >= 0; p += sizeof(struct cons))
	      {object x = (object) p; 
	       if (SGC_OR_M(x)) continue;
	       if (x->d.t==t_cons) {x->d.m = TRUE; sgc_mark_cons(x);}
	       else
		 sgc_mark_object1(x);
	     }
	    else
	      {int size=tm->tm_size;
	       for (j = tm->tm_nppage; --j >= 0; p += size)
		 {object x = (object) p; 
		  if (SGC_OR_M(x)) continue;
		  sgc_mark_object1(x);
	    }}}}


	sgc_mark_stack_carefully(vs_top-1,vs_org,0);
	clear_stack(vs_top,vs_limit);
	sgc_mark_stack_carefully(MVloc+(sizeof(MVloc)/sizeof(object)),MVloc,0);
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
	{int size;
	 
	 for (pp = pack_pointer;  pp != NULL;  pp = pp->p_link) {
	                size = pp->p_internal_size;
			if (pp->p_internal != NULL)
				for (i = 0;  i < size;  i++)
					sgc_mark_pack_list(pp->p_internal[i]);
			size = pp->p_external_size;
			if (pp->p_external != NULL)
				for (i = 0;  i < size;  i++)
					sgc_mark_pack_list(pp->p_external[i]);
		}}


	mark_c_stack(0,N_RECURSION_REQD,sgc_mark_stack_carefully);

}

sgc_sweep_phase()
{
	STATIC int i, j, k;
	STATIC object x;
	STATIC char *p;
	STATIC int *ip;
	STATIC struct typemanager *tm;
	STATIC object f;
	int size;

	Cnil->s.m = FALSE;
	Ct->s.m = FALSE;

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
		if (!WRITABLE_PAGE_P(i)) continue;
		p = pagetochar(i);
		f = tm->tm_free;
		k = 0;
		size=tm->tm_size;
		if (SGC_PAGE_P(i)) {
		for (j = tm->tm_nppage; --j >= 0;  p += size) {
			x = (object)p;

			if (x->d.m == FREE)
				continue;
			else if (x->d.m) {
				x->d.m = FALSE;
				continue;
			}
			if(x->d.s == SGC_NORMAL)
			  continue;
			
			/* it is ok to free x */
			
#ifdef OLD_DISPLACE
			/* old_displace: from might be free, to not */
			if(x->d.t >=t_array && x->d.t <= t_bitvector)
			  {
			    /*			case t_array:
						case t_vector:
						case t_string:
						case t_bitvector:
						*/			
				if (x->a.a_displaced->c.c_car != Cnil)
				  {undisplace(x);
		 /* The cons x->a.a_displaced cons has been saved,
		    so as to save the pointer to x->a.a_displaced->c.c_car;
		    However any arrays in its cdr, must have been
		    freed, or we would not be freeing x.   To avoid
		    having a cons with trash in the cdr we set the
		    cdr to nil
		    */				    
			     x->a.a_displaced->c.c_cdr = Cnil;}
			}
#endif OLD_DISPLACE
#ifdef GMP_USE_MALLOC			
			if (x->d.t == t_bignum) {
			  mpz_clear(MP(x));
			}
#endif

			SET_LINK(x,f);
			x->d.m = FREE;
			x->d.s = (int)SGC_RECENT;
			f = x;
			k++;
		}
		tm->tm_free = f;
		tm->tm_nfree += k;
	      }
		else /*non sgc_page */
		for (j = tm->tm_nppage; --j >= 0;  p += size) {
			x = (object)p;

			if (x->d.m == TRUE) x->d.m=FALSE;
		}
		  

	NEXT_PAGE:
		;
	}
#ifdef DEBUG
	if (debug) {
		putchar('\n');
		fflush(stdout);
	}
#endif
}


sgc_contblock_sweep_phase()
{
	STATIC int i, j;
	STATIC char *s, *e, *p, *q;
	STATIC struct contblock *cbp;

	cb_pointer = NULL;
	ncb = 0;
	for (i = 0;  i < maxpage;) {
		if (type_map[i] != (int)t_contiguous
		    || !SGC_PAGE_P(i))
		     {
			i++;
			continue;
		}
		for (j = i+1;
		     j < maxpage && type_map[j] == (int)t_contiguous
		     && SGC_PAGE_P(j)
		     ;
		     j++)
			;	
		s = pagetochar(i);
		e = pagetochar(j);
		for (p = s;  p < e;) {
			if (get_mark_bit((int *)p)) {
				p += PTR_ALIGN;
				continue;
			}
			q = p + PTR_ALIGN;
			while (q < e) {
				if (!get_mark_bit((int *)q)) {
					q += PTR_ALIGN;
					continue;
				}
				break;
			}
			insert_contblock(p, q - p);
			p = q + PTR_ALIGN;
		}
		i = j + 1;
	}
#ifdef DEBUG
	if (debug) {
		for (cbp = cb_pointer; cbp != NULL; cbp = cbp->cb_link)
			printf("%d-byte contblock\n", cbp->cb_size);
		fflush(stdout);
	}
#endif
}



#define PAGE_ROUND_UP(adr) \
    ((char *)(PAGESIZE*(((int)(adr)+PAGESIZE -1) >> PAGEWIDTH)))

char *old_rb_start;

#undef tm



#ifdef SDEBUG
sgc_count(yy)
     object yy;
{int count=0;
 object y=yy;
 while(y)
   {count++;
    y=OBJ_LINK(y);}
 printf("[length %x = %d]",yy,count);
 fflush(stdout);
}

#endif
/* count writable pages excluding the hole */
sgc_count_writable(end)
     int end;
{ int j = first_protectable_page -1;
  int count = 0;
  int hp_end= page(heap_end);
  while(j++ < hp_end)
    if (WRITABLE_PAGE_P(j)) count++;
  j= page(rb_start);
  while(j++ < end)
    if (WRITABLE_PAGE_P(j)) count++;
  return count;}


sgc_count_type(t)
     int t;
{int j = first_protectable_page -1;
  int end = page(core_end);
  int count=0;
  while(j++ < end)
    if (type_map[j]==t && SGC_PAGE_P(j))
      count++;
  return count;}





sgc_start()
{int i;
 int np;
 int bug;
 short free_map[MAXPAGE];
 object f, fr[(int)t_end];
 struct typemanager *tm;
 int npages;
 if (sgc_type_map[page((&sgc_type_map[0]))] != SGC_PERM_WRITABLE )
   {perm_writable(&sgc_type_map[0],sizeof(sgc_type_map));
  }
 if (sgc_enabled)
     return 1;
 sgc_type_map[0]=0;
AGAIN:
 i=npages=page(core_end);
 while (i--> 0)
   sgc_type_map[i] = sgc_type_map[i]  & SGC_PERM_WRITABLE ;

 for (i= t_start; i < t_contiguous ; i++)
   if (TM_BASE_TYPE_P(i) && (np=(tm=tm_of(i))->tm_sgc))
     FIND_FREE_PAGES:
     {
       int maxp=0;
       int j;
       int minfree = tm->tm_sgc_minfree;
       int count,tm_sgc;
       bzero(free_map,npages*sizeof(short));
       f = tm->tm_free;
       count=0;
       while (f!=0)
	 {free_map[j=page(f)]++;
	  if (j>=maxp) maxp=j;
#ifdef DEBUG
	  count++;
#endif	  
	  f= OBJ_LINK(f);
	}
#ifdef DEBUG       
       if (count!=tm->tm_nfree)
	 {printf("[Count differed type(%d)nfree= %d in freelist %d]\n"
		 ,tm->tm_type,tm->tm_nfree,
		 count);fflush(stdout);}
#endif       
       for(j=0,count=0; j <= maxp ;j++)
	 {if (free_map[j] >= minfree)
	    {sgc_type_map[j] |= (SGC_PAGE_FLAG | SGC_TEMP_WRITABLE);
	     ++count;
	    if (count >= tm->tm_sgc_max)
	       break; 
	   }}

       /* don't do any more allocations  for this type if saving system */
       if (saving_system) continue;
       
       if (count < tm->tm_sgc)
	 /* try to get some more free pages of type i */
	 { int n = tm->tm_sgc - count;
	   int again=0,nfree = tm->tm_nfree;
	   char *p=alloc_page(n);
	   if (tm->tm_nfree > nfree) again=1;  /* gc freed some objects */
	   while (n-- > 0)
	     {(sgc_enabled=1,add_page_to_freelist(p,tm),sgc_enabled=0);
	      p += PAGESIZE;}
	   if (again) goto FIND_FREE_PAGES;	 }}
  /* Now  allocate the sgc relblock.   We do this as the tail
    end of the ordinary rb.     */  
  {int want;
  char *new;
  tm=tm_of(t_relocatable);
  want =((int) (rb_end - rb_pointer) >> PAGEWIDTH);
  if (want < tm->tm_sgc) want = tm->tm_sgc;
   else { want  = (want < 4 ? want : want -2);}

 FINALE:
  {old_rb_start=rb_start;
   if(!saving_system)
   { new=alloc_relblock(want*PAGESIZE);
     /* the above may cause a gc, shifting the relblock */
     old_rb_start=rb_start;
    new= PAGE_ROUND_UP(new);
    rb_start=rb_pointer=new;
  }}}
   /* the relblock has been allocated */

  /* now move the sgc free lists into place.   alt_free should
     contain the others */

  for (i= t_start; i < t_contiguous ; i++)
    if (TM_BASE_TYPE_P(i)
	&& (np=(tm=tm_of(i))->tm_sgc))
      {object f=tm->tm_free ,x,y,next;
       int count=0;
       x=y=0;

	  while (f!=0)
	    {next=OBJ_LINK(f);
#ifdef SDEBUG	     
	     if (f->d.m!=FREE)
	       printf("Not FREE in freelist f=%d",f);
#endif
	     if (ON_SGC_PAGE(f))
	       { SET_LINK(f,x);
		 f->d.s = SGC_RECENT;
		 x=f;
		 count++;
	       }
	     else
	       {SET_LINK(f,y);
		f->d.s = SGC_NORMAL;
		y=f;}
	     f=next;
	   }
	tm->tm_free = x;
	tm->tm_alt_free = y;
	tm->tm_alt_nfree = tm->tm_nfree - count;
	tm->tm_nfree=count;
     }
   
   /* Whew.   We have now allocated the sgc space
      and modified the tm_table;
      Turn  memory protection on for the pages which are writable.
    */
   memory_protect(1);
   sgc_enabled=1;
  if(sSAnotify_gbcA->s.s_dbind != Cnil)
   {printf("[SGC on]"); fflush(stdout);}

}

sgc_quit()
{ struct typemanager *tm;
  int i,np;
  memory_protect(0);
  if(sSAnotify_gbcA->s.s_dbind != Cnil)
   {printf("[SGC off]"); fflush(stdout);}
  if (sgc_enabled==0) return 0;
  sgc_enabled=0;
  rb_start = old_rb_start;
  for (i= t_start; i < t_contiguous ; i++)
   if (TM_BASE_TYPE_P(i))
     {tm=tm_of(i);
     if (np=tm->tm_sgc)
       {object f,y;
	f=tm->tm_free;
	if (f==0) tm->tm_free=tm->tm_alt_free;
	else
	  /* tack the alt_free onto the end of free */
	  {
#ifdef SDEBUG
	    int count=0;
	    f=tm->tm_free;
	    while(y= (object) F_LINK(f))
	      {if(y->d.s != SGC_RECENT)
		printf("[bad %d]",y);
	       count++; f=y;}

	    count=0;
	    if (f=tm->tm_alt_free)
	      while(y= F_LINK(f))
		{
		  if(y->d.s != SGC_NORMAL)
		    printf("[alt_bad %d]",y);
		  count++; f=y;}
	    
#endif
	    f=tm->tm_free;
	    while(y= (object) F_LINK(f))
	     f=y;
	   F_LINK(f)= (long)(tm->tm_alt_free);
	   }
	/* tm->tm_free has all of the free objects */
	tm->tm_nfree += tm->tm_alt_nfree;
	tm->tm_alt_nfree = 0;
	tm->tm_alt_free = 0;
	
	/* remove the recent flag from any objects on sgc pages */
	{int hp=page(heap_end);
	 int i,j;
	 char t = (char) tm->tm_type;
	 char *p;
           for (i=0 ; i < hp; i++)
	     if (type_map[i]==t && (sgc_type_map[i] & SGC_PAGE_FLAG))
       		for (p= pagetochar(i),j = tm->tm_nppage;
		     j > 0; --j, p += tm->tm_size)
		  {((object) p)->d.s = SGC_NORMAL;}}



      }}
}

void
make_writable(beg,i)
     int beg,i;
{if (i > beg)
   {beg=ROUND_DOWN_PAGE_NO(beg);
    i=ROUND_UP_PAGE_NO(i);
    {int k=beg;
     while(k <i )
       sgc_type_map[k++] |= SGC_TEMP_WRITABLE;
     }
    sgc_mprotect(beg, i-beg, SGC_WRITABLE);
    ;}
}

int debug_fault =0;
int fault_count =0;
extern char etext;
void memprotect_handler();
void
memprotect_handler(sig, code, scp, addr)
          int sig, code;
          struct sigcontext *scp;
          char *addr;     
{int p;
 int j=page_multiple;
 char *faddr;  /* Needed because we must not modify signal handler
		  arguments on the stack! */
#ifdef GET_FAULT_ADDR
  faddr=GET_FAULT_ADDR(sig,code,scp,addr); 
 debug_fault = (int) faddr;
#ifdef DEBUG_MPROTECT
 printf("fault:0x%x [%d] (%d)  ",faddr,page(faddr),faddr >= core_end);
#endif 
 if (faddr >= core_end || (unsigned int)faddr < DBEGIN)
   {if (fault_count > 300) error("fault count too high");
      fault_count ++;
        INSTALL_MPROTECT_HANDLER;
    return;}
#else
 faddr = addr;
#endif 
 p = page(faddr);
 p = ROUND_DOWN_PAGE_NO(p);
 if (p >= first_protectable_page
     && faddr < core_end
     && !(WRITABLE_PAGE_P(p)))
   {/*   CHECK_RANGE(p,1); */
#ifdef DEBUG_MPROTECT
     printf("mprotect(0x%x,0x%x,0x%x)\n",
	    pagetochar(p),page_multiple * PAGESIZE, sbrk(0));
     fflush(stdout);
#endif     
     mprotect(pagetochar(p),page_multiple * PAGESIZE, PROT_READ_WRITE);
    while (--j >= 0)
      sgc_type_map[p+j] = sgc_type_map[p+j] | SGC_TEMP_WRITABLE;

#ifndef BSD
 INSTALL_MPROTECT_HANDLER;
#endif

    return;
  }

#ifndef  BSD
 INSTALL_MPROTECT_HANDLER;
#endif
/* if (SIGSEGV == SIGPROTV) */
 END:
 segmentation_catcher();
 return;
}

sgc_mprotect(pbeg,n,writable)
{ /* CHECK_RANGE(pbeg,n);  */
#ifdef DEBUG_MPROTECT
  printf("prot[%d,%d,(%d),%s]\n",pbeg,pbeg+n,writable & SGC_WRITABLE,
	 (writable  & SGC_WRITABLE ? "writable" : "not writable"));
  printf("mprotect(0x%x,0x%x), sbrk(0)=0x%x\n",
	 pagetochar(pbeg), n * PAGESIZE, sbrk(0));
  fflush(stdout);
#endif  
  if(mprotect(pagetochar(pbeg),n*PAGESIZE,
	     (writable & SGC_WRITABLE ? PROT_READ_WRITE : PROT_READ)))
   FEerror("Couldn't protect",0);}


/* for page numbers from beg below end,
   if one page in a a page_multiple grouping is writable,the
   rest must be */

fix_for_page_multiple(beg,end)
{int i,j;
 char *p;
 int writable;
 beg = ROUND_DOWN_PAGE_NO(beg);
 for (i = beg ; i < end; i = i+ page_multiple){
   p = sgc_type_map + i;
   j = page_multiple;
   writable = ((*p++) & SGC_WRITABLE);
   if (writable)
     /* all pages must be */
     { while (--j)
	 if (((*p++) & SGC_WRITABLE)  == 0)
	   goto FIXIT;}
   else
     { while (--j)
	 if ((*p++) & SGC_WRITABLE ) 
	   goto FIXIT;}
   continue;
 FIXIT:
   j = page_multiple;
   p = sgc_type_map + i;
   while (--j >= 0 )
     { (*p++) |= SGC_WRITABLE;}}}
     

memory_protect(on)
     int on;
{ int i,beg,end= page(core_end);
  int writable=1;
  extern void   install_segmentation_catcher();
  if (first_protectable_page==0)
  {
    for (i=page_multiple; i< maxpage ; i++)
      if (type_map[i]!=t_other)
	break;
      else {
	/* We want page(0) to be non writable since that
	   is the only check for 0 pointer in sgc */
	  sgc_type_map[i] = SGC_PERM_WRITABLE;}
    first_protectable_page= ROUND_DOWN_PAGE_NO(i);}
  if(page_multiple > 1)
    fix_for_page_multiple(first_protectable_page,end);
    /* turning it off */
  if (on==0) {sgc_mprotect((first_protectable_page),
		       (end - first_protectable_page), SGC_WRITABLE);
	      install_segmentation_catcher();
	      return;}
  /* write protect some pages by first write protecting them
     all and then selectively disabling */
/*  sgc_mprotect((first_protectable_page),
		       (end - first_protectable_page), 0);
*/
  INSTALL_MPROTECT_HANDLER;
  beg=first_protectable_page;
  writable = WRITABLE_PAGE_P(beg);
  for (i=beg ; ++i<= end; )
    {int wri = WRITABLE_PAGE_P(i);
     if ((wri==0 && writable)
         || (writable ==0  && wri)
	 || i == end)
       /* it is changing */
       {if (writable)
	  make_writable(beg,i);
	else
	 sgc_mprotect(beg,i-beg,writable);
	writable = wri;
	beg = i;}
   }
}

void
siLsgc_on()
{if (vs_base==vs_top)
   {vs_base[0]=(sgc_enabled ? Ct :Cnil);
    vs_top=vs_base+1; return;}
 check_arg(1);
 if(vs_base[0]==Cnil)
     {sgc_quit();}
 else {sgc_start();}}


/* make permanently writable pages containing pointers p thru p+n-1 */
   
   
void
perm_writable(p,n)
     char *p;
     int n;
{int beg=page(p);
 int end=page(PAGE_ROUND_UP(p+n));
 int i,must_protect=0;
 beg = ROUND_DOWN_PAGE_NO(beg);
 end = ROUND_UP_PAGE_NO(end);
 for (i=beg ; i < end ; i++)
   {if (sgc_enabled & !(WRITABLE_PAGE_P(i))) must_protect = 1;
    sgc_type_map [i] |= SGC_PERM_WRITABLE;}
 if(must_protect) make_writable(beg,end);}



system_error()
{FEerror("System error",0);}



