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
#include "include.h"


/* the following in line definitions seem to be twice as fast (at
least on mc68020) as going to the assembly function calls in bitop.c so
since this is more portable and faster lets use them --W. Schelter
These assume that DBEGIN is divisible by 32, or else we should have
#define Shamt(x) (((((int) x -DBEGIN) >> 2) & ~(~0 << 5)))
*/ 

#define Shamt(x) (((((int) x) >> 2) & ~(~0 << 5)))
#define Madr(x) (mark_table+((((int) x) - ((int)DBEGIN)) >> (7)))
#define get_mark_bit(x) (*(Madr(x)) >> Shamt(x) & 1)
#define set_mark_bit(x) ((*(Madr(x))) |= (1 << Shamt(x)))

#ifdef KCLOVM
void mark_all_stacks();
bool ovm_process_created; 
#endif


bool saving_system;
static int gc_time = -1;
static int gc_start = 0;
int runtime();
int sgc_enabled=0;
int  first_protectable_page =0;



char *copy_relblock();

#include "page.h"


#ifdef MV


#endif


int real_maxpage;
int new_holepage;

#define	available_pages	\
	(real_maxpage-page(heap_end)-new_holepage-2*nrbpage-real_maxpage/32)

struct apage {
	char apage_self[PAGESIZE];
};

int maxpage;

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

#define	symbol_marked(x)	((x)->d.m)

object *mark_origin[MARK_ORIGIN_MAX];
int mark_origin_max;

struct {
	object	*mob_addr;	/*  mark origin block address  */
	int	mob_size;	/*  mark origin block size  */
} mark_origin_block[MARK_ORIGIN_BLOCK_MAX];
int mark_origin_block_max;

int *mark_table;

enum type what_to_collect;



void
enter_mark_origin(p)
object *p;
{
	if (mark_origin_max >= MARK_ORIGIN_MAX)
		error("too many mark origins");
#ifdef SGC
	sgc_type_map[page(p)] |= SGC_PERM_WRITABLE ;
#endif	
	mark_origin[mark_origin_max++] = p;
}

enter_mark_origin_block(p, n)
object *p;
int n;
{
	if (mark_origin_block_max >= MARK_ORIGIN_BLOCK_MAX)
		error("too many mark origin blocks");
	mark_origin_block[mark_origin_block_max].mob_addr = p;
	mark_origin_block[mark_origin_block_max++].mob_size = n;
}

mark_cons(x)
object x;
{
  cs_check(x);

	/*  x is already marked.  */

BEGIN:  
	if (NULL_OR_ON_C_STACK(x->c.c_car)) goto MARK_CDR;
	if (type_of(x->c.c_car) == t_cons) {
		if (x->c.c_car->c.m)
			;
		else {
			x->c.c_car->c.m = TRUE;
			mark_cons(x->c.c_car);
		}
	} else
		mark_object(x->c.c_car);
MARK_CDR:  
	x = x->c.c_cdr;
	if (NULL_OR_ON_C_STACK(x))
		return;
	if (type_of(x) == t_cons) {
		if (x->c.m)
			return;
		x->c.m = TRUE;
		goto BEGIN;
	}
	if (x == Cnil)
		return;
	mark_object(x);
}

/* Whenever two arrays are linked together by displacement,
   if one is live, the other will be made live */
#define mark_displaced_field(ar) mark_object(ar->a.a_displaced)

mark_object(x)
object x;
{
	int i, j;
	object *p;
	char *cp;
	object y;

	cs_check(x);
BEGIN:
	/* if the body of x is in the c stack, its elements
	   are marked anyway by the c stack mark carefully, and
	   if this x is somehow hanging around in a cons that
	   should be dead, we dont want to mark it. -wfs
	   */

	if (NULL_OR_ON_C_STACK(x))
		return;
	if (x->d.m)
		return;
	x->d.m = TRUE;
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
				x->ht.ht_self = (struct htent *)
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
					           sizeof(int)*x->a.a_rank);
			} else
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
#define  ROUND_RB_POINTERS_DOUBLE \
{int tem =  ((long)rb_pointer1) & (sizeof(double)-1); \
   if (tem) \
     { rb_pointer +=  (sizeof(double) - tem); \
       rb_pointer1 +=  (sizeof(double) - tem); \
     }}
		case aet_lf:
		  j= sizeof(longfloat)*x->lfa.lfa_dim;
	          if (((int)what_to_collect >= (int)t_contiguous) &&
			!(inheap(cp))) ROUND_RB_POINTERS_DOUBLE;
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
				mark_object(p[i]);
		cp = (char *)p;
		j *= sizeof(object);
	COPY:
		if ((int)what_to_collect >= (int)t_contiguous) {
			if (inheap(cp)) {
				if (what_to_collect == t_contiguous)
					mark_contblock(cp, j);
			} else if (x->a.a_displaced == Cnil) {
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
		      MP_SELF(x) = (void *) copy_relblock(cp, j);}}
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

#define W_SIZE (8*sizeof(int))
		j= sizeof(int) *
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
		   if (s_type[i]==0) mark_object(STREF(object,x,s_pos[i]));
		 if ((int)what_to_collect >= (int)t_contiguous) {
		     if (inheap(x->str.str_self)) {
		       if (what_to_collect == t_contiguous)
			 mark_contblock((char *)p,
					S_DATA(def)->size);

		     } else
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

	case t_random:
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

        case t_closure:
       { int i ;
         if (what_to_collect == t_contiguous)
              mark_contblock(x->cc.cc_turbo,x->cc.cc_envdim);
         for (i= 0 ; i < x->cc.cc_envdim ; i++) {
	   mark_object(x->cc.cc_turbo[i]);}}

	case t_cfun:
        case t_sfun:
        case t_vfun:
        case t_afun:
	case t_gfun:	
		mark_object(x->cf.cf_name);
		mark_object(x->cf.cf_data);
		break;
		
        case t_cfdata:

	        if (x->cfd.cfd_self != NULL)
		  {int i=x->cfd.cfd_fillp;
		   while(i-- > 0)
		     mark_object(x->cfd.cfd_self[i]);}
		if (x->cfd.cfd_start == NULL)
			break;
		if (what_to_collect == t_contiguous) {
			if (!MAYBE_DATA_P((x->cfd.cfd_start)) ||
			    get_mark_bit((int *)(x->cfd.cfd_start)))
				break;
			mark_contblock(x->cfd.cfd_start, x->cfd.cfd_size);}
		break;
	case t_cclosure:
		mark_object(x->cc.cc_name);
		mark_object(x->cc.cc_env);
                mark_object(x->cc.cc_data);
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

static int *c_stack_where;

mark_stack_carefully(top,bottom,offset)
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

 if (offset) {mark_stack_carefully((((char *) top) +offset),bottom,0);}
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
	  mark_object(x);}}}}


mark_phase()
{
	STATIC object *p;
	STATIC int i, j, k, n;
	STATIC struct package *pp;
	STATIC object s, l, *lp;
	STATIC bds_ptr bdp;
	STATIC frame_ptr frp;
	STATIC ihs_ptr ihsp;
	STATIC char *cp;

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
		mark_object(pp);
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

mark_c_stack(env1,n,fn)
     jmp_buf *env1;
     int n;
     int (*fn)();
{jmp_buf env;
 int where;
 if (n== N_RECURSION_REQD)
   { c_stack_where = (int *) (void *) &env;}
 if (n > 0 )
   {  setjmp(env);
      mark_c_stack(env,n - 1,fn);}
 else
   {
	 
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

}

 


sweep_phase()
{
	STATIC int i, j, k;
	STATIC object x;
	STATIC char *p;
	STATIC int *ip;
	STATIC struct typemanager *tm;
	STATIC object f;

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
		p = pagetochar(i);
		f = tm->tm_free;
		k = 0;
		for (j = tm->tm_nppage; j > 0; --j, p += tm->tm_size) {
			x = (object)p;
			if (x->d.m == FREE)
				continue;
			else if (x->d.m) {
				x->d.m = FALSE;
				continue;
			}
			/*   Since we now mark forwards and backwards on displaced
			     arrays, this is not necessary.
			switch (x->d.t) {
			case t_array:
			case t_vector:
			case t_string:
			case t_bitvector:
				if (x->a.a_displaced->c.c_car != Cnil)
				  {undisplace(x);
				 }
			}
			*/
/*			((struct freelist *)x)->f_link = f; */

#ifdef GMP_USE_MALLOC
			if (x->d.t == t_bignum) {
			  mpz_clear(MP(x));
			}
#endif
			SET_LINK(x,f);
			x->d.m = FREE;
			f = x;
			k++;
		}
		tm->tm_free = f;
		tm->tm_nfree += k;

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

contblock_sweep_phase()
{
	STATIC int i, j;
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


int (*GBC_enter_hook)() = NULL;
int (*GBC_exit_hook)() = NULL;
char *old_rb_start;
GBC(t)
enum type t;
{
	int i, j;
	struct apage *pp, *qq;
	int in_sgc = sgc_enabled;
	int where ;
#ifdef DEBUG
	int tm;
#endif
	
	if (in_signal_handler && t == t_relocatable)
	  error("cant gc relocatable in signal handler");

	if (GBC_enter_hook != NULL)
		(*GBC_enter_hook)();

	if (!GBC_enable)
             error("GBC is not enabled");
	interrupt_enable = FALSE;

	if (saving_system)
		{t = t_contiguous; gc_time = -1;
		 if(sgc_enabled) sgc_quit();

	       }


#ifdef DEBUG
	debug = symbol_value(sSAgbc_messageA) != Cnil;
#endif

	what_to_collect = t;

	tm_table[(int)t].tm_gbccount++;

#ifdef DEBUG
	if (debug || (sSAnotify_gbcA->s.s_dbind != Cnil)) {

	  if (gc_time < 0) gc_time=0;
	  printf("[%s for %d %s pages..",
		 (sgc_enabled ? "SGC" : "GC"),
		 (sgc_enabled ? sgc_count_type(t) : tm_of(t)->tm_npage),
		 (tm_table[(int)t].tm_name)+1);
#ifdef SGC
	  if(sgc_enabled)
	    printf("(%d writable)..",sgc_count_writable(page(core_end)));
#endif	  
	  fflush(stdout);
	}
#endif
        if (gc_time >=0) {gc_start=runtime();}

	maxpage = page(heap_end);

	if ((int)t >= (int)t_contiguous) {
		j = maxpage*(PAGESIZE/(sizeof(int)*sizeof(int)*CHAR_SIZE)) ;
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
		if (sgc_enabled ==0 && holepage < new_holepage)
			holepage = new_holepage;

		i = rb_pointer - (sgc_enabled ? old_rb_start : rb_start);

		if (nrbpage > (real_maxpage-page(heap_end)
		               -holepage-real_maxpage/32)/2) {
			if (i > nrbpage*PAGESIZE)
				error("Can't allocate.  Good-bye!.");
			else
				nrbpage =
				(real_maxpage-page(heap_end)
				 -holepage-real_maxpage/32)/2;
		}

		if (saving_system)
			rb_start = heap_end;
		else
		  if (sgc_enabled==0)
		    {rb_start = heap_end + PAGESIZE*holepage;}

		rb_end = heap_end + (holepage + nrbpage) *PAGESIZE;

		if (rb_start < rb_pointer)
			rb_start1 = (char *)
			((int)(rb_pointer + PAGESIZE-1) & -PAGESIZE);
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

		mark_table = (int *)(rb_start1 + i);

		if (rb_end < (char *)&mark_table[j])
			i = (char *)&mark_table[j] - heap_end;
		else
			i = rb_end - heap_end;
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
                  make_writable(page(rb_start),
                                (rb_pointer-rb_start + PAGESIZE - 1)/PAGESIZE);

#endif		
		rb_limit = rb_end - 2*RB_GETA;

	}

#ifdef DEBUG
	if (debug) {
		for (i = 0, j = 0;  i < (int)t_end;  i++) {
			if (tm_table[i].tm_type == (enum type)i) {
			    printf("%13s: %8d used %8d free %4d/%d pages\n",
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
		printf("contblock: %d blocks %d pages\n", ncb, ncbpage);
		printf("hole: %d pages\n", holepage);
		printf("relblock: %d bytes used %d bytes free %d pages\n",
		       rb_pointer - rb_start, rb_end - rb_pointer, nrbpage);
		printf("GBC ended\n");
		fflush(stdout);
	}
#endif

	interrupt_enable = TRUE;

	if (saving_system) {
		j = (rb_pointer-rb_start+PAGESIZE-1) / PAGESIZE;

		heap_end += PAGESIZE*j;

		/* When the program is re-loaded, the system initialization
		   code may use malloc() before main() begins.  This
		   happens in Linux.  We need to allow some heap expansion
		   space for this.  One page is enough for Linux.
		   Bill Metzenthen May95.
		   */
		if ( core_end < heap_end + PAGESIZE )
		  {
		    fprintf(stderr,
			    "Not enough memory available for saved image\n");
		    exit(1);
		  }
		core_end = heap_end + PAGESIZE;

		for (i = 0;  i < maxpage;  i++)
			if ((enum type)type_map[i] == t_contiguous)
				type_map[i] = (char)t_other;
		cb_pointer = NULL;
		maxcbpage -= ncbpage;
		if (maxcbpage < 100)
		  maxcbpage = 100;
		ncbpage = 0;
		ncb = 0;

                 /* hmm.... why is this test necessary.*/
		if (sgc_enabled==0) {holepage = new_holepage;
                                     nrbpage = INIT_NRBPAGE;}

		if (nrbpage < 0)
			error("no relocatable pages left");

		rb_start = heap_end + PAGESIZE*holepage;
		rb_end = rb_start + PAGESIZE*nrbpage;
		rb_limit = rb_end - 2*RB_GETA;
		rb_pointer = rb_start;
	}

	if (GBC_exit_hook != NULL)
		(*GBC_exit_hook)();


	if (in_sgc && sgc_enabled==0)
	  sgc_start();

        if(gc_time>=0) {gc_time=gc_time+(gc_start=(runtime()-gc_start));}

	if (sSAnotify_gbcA->s.s_dbind != Cnil) {

	  fprintf(stdout, "(T=%d).GC finished]\n",
		  gc_start
		  );
		fflush(stdout);
	}


	CHECK_INTERRUPT;
}

siLroom_report()
{
	int i;

	check_arg(0);

/*
	GBC(t_contiguous);
*/

	vs_check_push(make_fixnum(real_maxpage));
	vs_push(make_fixnum(available_pages));
	vs_push(make_fixnum(ncbpage));
	vs_push(make_fixnum(maxcbpage));
	vs_push(make_fixnum(ncb));
	vs_push(make_fixnum(cbgbccount));
	vs_push(make_fixnum(holepage));
	vs_push(make_fixnum(rb_pointer - rb_start));
	vs_push(make_fixnum(rb_end - rb_pointer));
	vs_push(make_fixnum(nrbpage));
	vs_push(make_fixnum(rbgbccount));
	for (i = 0;  i < (int)t_end;  i++) {
		if (tm_table[i].tm_type == (enum type)i) {
			vs_check_push(make_fixnum(TM_NUSED(tm_table[i])));
			vs_push(make_fixnum(tm_table[i].tm_nfree));
			vs_push(make_fixnum(tm_table[i].tm_npage));
			vs_push(make_fixnum(tm_table[i].tm_maxpage));
			vs_push(make_fixnum(tm_table[i].tm_gbccount));
		} else {
			vs_check_push(Cnil);
			vs_push(make_fixnum(tm_table[i].tm_type));
			vs_push(Cnil);
			vs_push(Cnil);
			vs_push(Cnil);
		}
	}
}

siLreset_gbc_count()
{
	int i;

	check_arg(0);

	for (i = 0;  i < (int)t_other;  i++)
		tm_table[i].tm_gbccount = 0;
}

/* copy S bytes starting at P to beyond rb_pointer1 (temporarily)
 but return a pointer to where this will be copied back to,
 when gc is done.  alignment of rb_pointer is kept at a multiple
 of sizeof(char *);
 */
      
char *
copy_relblock(p, s)
char *p;
int s;
{ char *res = rb_pointer;
  char *q = rb_pointer1;
  s = ROUND_UP_PTR(s);
  rb_pointer += s;
  rb_pointer1 += s;
  
  while (--s >= 0)
    { *q++ = *p++;}

  return res;
}

  
mark_contblock(p, s)
char *p;
int s;
{
	STATIC char *q;
	STATIC int *x, *y;

	if (!MAYBE_DATA_P(p) || (enum type)type_map[page(p)] != t_contiguous)
		return;
	q = p + s;
	x = (int *)ROUND_DOWN_PTR(p);
	y = (int *)ROUND_UP_PTR(q);
	for (;  x < y;  x++)
		set_mark_bit(x);
}

DEFUNO("GBC",object,fLgbc,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lgbc,"")(x0)
object x0;
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

siLgbc_time()
{if (vs_top>vs_base)
   gc_time=fix(vs_base[0]);
 else
   {vs_base[0]=make_fixnum(gc_time);
    vs_top=vs_base+1;}
}

#ifdef SGC
#include "sgbc.c"
#endif

DEFVAR("*NOTIFY-GBC*",sSAnotify_gbcA,SI,Cnil,"");
#ifdef DEBUG
DEFVAR("*GBC-MESSAGE*",sSAgbc_messageA,SI,Cnil,"");
#endif

init_GBC()
{
	make_si_function("ROOM-REPORT", siLroom_report);
	make_si_function("RESET-GBC-COUNT", siLreset_gbc_count);
	make_si_function("GBC-TIME",siLgbc_time);





#ifdef SGC
	/* we use that maxpage is a power of 2 in this
	   case, to quickly be able to look in our table */ 
	{int i ;
	 for(i=1 ; i< 32 ; i++)
	   {if (MAXPAGE == (1 <<i))
	      goto ok;}
	 perror("MAXPAGE is not a power of 2.  Recompile");
	 exit(1);
       ok:;}
	make_si_function("SGC-ON",siLsgc_on);
#endif	
}

