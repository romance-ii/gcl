/*-*-C-*-*/
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

  hash.d                  06/2005 Update           Boyer & Hunt

For a number of reasons, we have modified this file from its
long-standing form to improve the performance of the Common Lisp
GETHASH and the SETHASH procedures.  These changes extend to the GCL
header file "h/object.h" where we included an additional field.

In the spirit of the comment just above, we have attempted to write
down some observations, comments, and invariants, about the modified
code contained in this file.  The two C-code procedures that were
substantially modified are "gethash" and "sethash", which in turn,
required additional changes to be made in "make_hash_table" and
"extend_hashtable".

  - We never allow a hashtable to become completely full -- no matter
    what the REHASH-THRESHOLD is; we require that there is always at
    least one empty table entry.

*/


#define NEED_MP_H
#include <string.h>
#include <ctype.h>
#include "include.h"


object sLeq;
object sLeql;
object sLequal;
object sLequalp;

object sKsize;
object sKrehash_size;
object sKrehash_threshold;

#define MHSH(a_) ((a_) & ~(1UL<<(sizeof(a_)*CHAR_SIZE-1)))

typedef union {/*FIXME size checks*/
  float f;
  unsigned int ul;
} F2ul;

typedef union {
  double d;
  unsigned int ul[2];
} D2ul;


static ufixnum rtb[256];

#define MASK(n) (~(~0L << (n)))

static ufixnum
ufixhash(ufixnum g) {
  ufixnum i,h;
  for (h=i=0;i<sizeof(g);g>>=CHAR_SIZE,i++)
    h^=rtb[g&MASK(CHAR_SIZE)];
  return h;
}

static ufixnum
uarrhash(void *v,void *ve,uchar off,uchar bits) {

  uchar *c=v,*ce=ve-(bits+(off ? off : CHAR_SIZE)>CHAR_SIZE ? 1 : 0),i;
  ufixnum h=0,*u=v,*ue=u+(ce-c)/sizeof(*u);
  
  if (!off)
    for (;u<ue;) h^=ufixhash(*u++);

  for (c=(void *)u;c+(off ? 1 : 0)<ce;c++)
    h^=rtb[(uchar)(((*c)<<off)|(off ? c[1]>>(CHAR_SIZE*sizeof(*c)-off) : 0))];

  for (i=off;bits--;i=(i+1)%CHAR_SIZE,c=i ? c : c+1)
    h^=rtb[((*c)>>(CHAR_SIZE-1-i))&0x1];

  return h;

}

#define hash_eq1(x) ufixhash((ufixnum)x/sizeof(x))
#define hash_eq(x)  MHSH(hash_eq1(x))


static ufixnum
hash_eql(object x) {

  ufixnum h;

  switch (type_of(x)) {

  case t_fixnum:
    h=ufixhash(fix(x));
    break;

  case t_character:
    h = rtb[char_code(x)];
    break;
    
  case t_bignum:
    { 
      MP_INT *mp = MP(x);
      void *v1=mp->_mp_d,*ve=v1+mpz_size(mp);

      h=uarrhash(v1,ve,0,0);
    }
    break;

  case t_ratio:
    h=hash_eql(x->rat.rat_num) + hash_eql(x->rat.rat_den);
    break;

  case t_shortfloat:  /*FIXME, sizeof int = sizeof float*/
    { 
      F2ul u;
      u.f=sf(x);
      h=ufixhash(u.ul);
    }
    break;
    
  case t_longfloat:
    { 
      D2ul u;
      u.d=lf(x);
      h=ufixhash(u.ul[0])^ufixhash(u.ul[1]);
    }
    break;

  case t_complex:
    h=hash_eql(x->cmp.cmp_real) + hash_eql(x->cmp.cmp_imag);
    break;

  default:
    h=hash_eq1(x);
    break;

  }

  return MHSH(h);

}


#define ihash_equal(a_,b_) ((type_of(a_)==t_symbol && (a_)->s.s_hash) ? (a_)->s.s_hash : ihash_equal1(a_,b_))
ufixnum
ihash_equal1(object x,int depth) {

  enum type tx;
  ufixnum h=0;
  
  cs_check(x);

BEGIN:
  if (depth++<=3)
    switch ((tx=type_of(x))) {
    case t_cons:
      h^=ihash_equal(x->c.c_car,depth)^rtb[abs(depth%(sizeof(rtb)/sizeof(*rtb)))];
      x = x->c.c_cdr;
      goto BEGIN;
      break;
    case t_symbol:
    case t_string:
      h^=uarrhash(x->st.st_self,x->st.st_self+x->st.st_fillp,0,0);
      break;
    case t_package: 
      break;
    case t_bitvector:
      {
	ufixnum l=x->bv.bv_offset+x->bv.bv_fillp;
	void *v1=x->bv.bv_self+x->bv.bv_offset/CHAR_SIZE,*ve=v1+l/CHAR_SIZE+(x->bv.bv_fillp && l%CHAR_SIZE ? 1 : 0);
	h^=uarrhash(v1,ve,x->bv.bv_offset%CHAR_SIZE,x->bv.bv_fillp%CHAR_SIZE);
      }
      break;
    case t_pathname:
      h^=ihash_equal(x->pn.pn_host,depth);
      h^=ihash_equal(x->pn.pn_device,depth);
      h^=ihash_equal(x->pn.pn_directory,depth);
      h^=ihash_equal(x->pn.pn_name,depth);
      h^=ihash_equal(x->pn.pn_type,depth);
      /* version is ignored unless logical host */
      /* if ((type_of(x->pn.pn_host) == t_string) && */
      /* 	  (pathname_lookup(x->pn.pn_host,sSApathname_logicalA) != Cnil)) */
      /* 	h^=ihash_equal(x->pn.pn_version,depth); */
      h^=ihash_equal(x->pn.pn_version,depth);
      break;
    default:
      h^=hash_eql(x);
      break;
    }
  
  return MHSH(h);

}

	
DEFUN("HASH-EQUAL",fixnum,fShash_equal,SI,2,2,NONE,IO,IO,OO,OO,(object x,fixnum depth),"") {
  return ihash_equal(x,depth);
}

#define ihash_equalp(a_,b_) ((type_of(a_)==t_symbol && (a_)->s.s_hash) ? (a_)->s.s_hash : ihash_equalp1(a_,b_))
unsigned long
ihash_equalp1(object x,int depth) {

  enum type tx;
  unsigned long h = 0,j;
  long i;
  
  cs_check(x);

BEGIN:
  if (depth++ <=3)
    switch ((tx=type_of(x))) {
    case t_cons:
      h += ihash_equalp(x->c.c_car,depth);
      x = x->c.c_cdr;
      goto BEGIN;
      break;
    case t_symbol:
      {
	ufixnum len=x->st.st_fillp;
	uchar *s=(void *)x->st.st_self;
	for (;len--;)
	  h^=rtb[toupper(*s++)];
      }
      break;

    case t_package: 
      break;

    case t_string:
    case t_bitvector:
    case t_vector:
      h^=ufixhash(j=x->v.v_fillp);
      j=j>10 ? 10 : j;
      for (i=0;i<j;i++)
	h^=ihash_equalp(aref(x,i),depth);
      break;
			
    case t_array:
      h^=ufixhash(j=x->a.a_rank);
      for (i=0;i<j-1;i++)
	h^=ufixhash(x->a.a_dims[i]);
      j=x->a.a_dim;
      j=j>10 ? 10 : j;
      for (i=0;i<j;i++)
	h^=ihash_equalp(aref(x,i),depth);
      break;
			
    case t_hashtable:
      h^=ufixhash(j=x->ht.ht_nent);
      h^=ufixhash(x->ht.ht_test);
      j=j>10 ? 10 : j;
      for (i=0;i<j;i++)
	if (x->ht.ht_self[i].c_cdr!=OBJNULL)
	  switch (x->ht.ht_test) {
	  case htt_eq:
	    h^=(((unsigned long)x->ht.ht_self[i].c_cdr)>>3) ^
	      ihash_equalp(x->ht.ht_self[i].c_car,depth);
	    break;
	  case htt_eql:
	    h^=hash_eql(x->ht.ht_self[i].c_cdr) ^
	      ihash_equalp(x->ht.ht_self[i].c_car,depth);
	    break;
	  case htt_equal:
	    h^=ihash_equal(x->ht.ht_self[i].c_cdr,depth) ^
	      ihash_equalp(x->ht.ht_self[i].c_car,depth);
	    break;
	  case htt_equalp:
	    h^=ihash_equalp(x->ht.ht_self[i].c_cdr,depth) ^
	      ihash_equalp(x->ht.ht_self[i].c_car,depth);
	    break;
	  }
      break;

    case t_pathname:
      h^=ihash_equalp(x->pn.pn_host,depth);
      h^=ihash_equalp(x->pn.pn_device,depth);
      h^=ihash_equalp(x->pn.pn_directory,depth);
      h^=ihash_equalp(x->pn.pn_name,depth);
      h^=ihash_equalp(x->pn.pn_type,depth);
      /* version is ignored unless logical host */
      if ((type_of(x->pn.pn_host) == t_string) &&
	  (pathname_lookup(x->pn.pn_host,sSApathname_logicalA) != Cnil))
	h^=ihash_equalp(x->pn.pn_version,depth);
      h^=ihash_equalp(x->pn.pn_version,depth);
      break;

    case t_structure:
      {
	unsigned char *s_type;
	struct s_data *def;
	def=S_DATA(x->str.str_def);
	s_type= & SLOT_TYPE(x->str.str_def,0);
	h^=ihash_equalp(def->name,depth);
	for (i=0;i<def->length;i++)
	  if (s_type[i]==aet_object)
	    h^=ihash_equalp(x->str.str_self[i],depth);
	  else
	    h^=ufixhash((long)x->str.str_self[i]);
	break;
      }

    case t_character:
      {
	vs_mark; /*FIXME*/
	object *base=vs_base;
	vs_base=vs_top;
	vs_push(x);
	Lchar_upcase();
	x=vs_base[0];
	vs_base=base;
	vs_reset;
	h^=hash_eql(x);
	break;
      }
      
    case t_fixnum:
    case t_bignum:
    case t_ratio:
    case t_shortfloat:
    case t_longfloat:

      h^=hash_eql(make_longfloat(number_to_double(x)));
      break;

    default:
      h^=hash_eql(x);
      break;
    }
  
  return MHSH(h);

}

	
DEFUN("HASH-EQUALP",object,fShash_equalp,SI,2,2,NONE,OO,IO,OO,OO,(object x,fixnum depth),"") {
  RETURN1(make_fixnum(ihash_equalp(x,depth)));
}

/* 

gethash

Here are conditions on the two inputs, key and hashtable, and the
value returned.

Condition 1.  key may not be OBJNULL.

Definition.  i is an "open" location in hashtable iff its key slot
holds OBJNULL.

Condition 2.  There is an open location in hashtable.

Definition.  i is an "initially open" location in hashtable iff it is
open and furthermore its value slot also holds OBJNULL.

Condition 3.  If there is an entry for key in hashtable, then starting
at the "init_hash_index" location of hashtable for key and searching
to the top of the hashtable, and then wrapping to start the search at
the beginning of the hashtable, will find the entry for key before
encountering an initially open location.  (What this means in practice
is that remhash must set the value field to something other than
OBJNULL, e.g., to NIL.)

Output condition.  If there is an entry in hashtable whose key slot
holds key, then the value returned is the address of that entry.  On
the otherhand, if there is no entry in hashtable whose key slot holds
key, then the value returned is the first open (not necessarily
intially open) slot encounterd starting at the hkey generated for key,
and wrappping if necessary.

*/

struct cons *
gethash(object key, object hashtable) {

  enum httest htest;
  long hsize,j,s,q;
  struct cons *e,*first_objnull=NULL;
  object hkey;
  static struct cons dummy={OBJNULL,OBJNULL};
  
  if (!hashtable->ht.ht_size)
    return &dummy;

  htest = (enum httest)hashtable->ht.ht_test;
  hsize = hashtable->ht.ht_size;

#define eq(x,y) x==y
#define hash_loop(t_,i_)						\
  for (s=i_%hsize,q=hsize,e=first_objnull;s>=0;q=s,s=s?0:-1)		\
    for (j=s;j<q;j++) {							\
      e = &hashtable->ht.ht_self[j];					\
      hkey = e->c_cdr;							\
      if (hkey==OBJNULL) {						\
	if (e->c_car==OBJNULL) return first_objnull ? first_objnull : e; \
	if (!first_objnull) first_objnull=e;				\
      } else if (t_(key,hkey)) return e;				\
    }

  switch (htest) {
  case htt_eq:
    hash_loop(eq,hash_eq(key));
    break;
  case htt_eql:
    hash_loop(eql,hash_eql(key));
    break;
  case htt_equal:
    hash_loop(equal,ihash_equal(key,0));
    break;
  case htt_equalp:
    hash_loop(equalp,ihash_equalp(key,0));
    break;
  default:
    FEerror( "gethash:  Hash table not of type EQ, EQL, or EQUAL." ,0);
    return &dummy;
    break;
  }
  
  return first_objnull ? first_objnull : (FEerror("No free spot in hashtable ~S.", 1, hashtable),&dummy);

}

static void
extend_hashtable(object hashtable) {

  object old;
  fixnum new_size=0,new_max_ent=0,i;
  struct cons *hte;
  
  /* Compute new size for the larger hashtable */
  
  new_size=hashtable->ht.ht_size+1;
  switch (type_of(hashtable->ht.ht_rhsize)) {
  case t_fixnum:
    new_size *= fix(hashtable->ht.ht_rhsize);
    break;
  case t_shortfloat:
    new_size *= sf(hashtable->ht.ht_rhsize);
    break;
  case t_longfloat:
    new_size *= lf(hashtable->ht.ht_rhsize);
    break;
  }
  
  /* Compute the maximum number of entries */
  
  switch (type_of(hashtable->ht.ht_rhthresh)) {
  case t_fixnum:
    new_max_ent = fix(hashtable->ht.ht_rhthresh) + ( new_size - hashtable->ht.ht_size );
    break;
  case t_shortfloat:
    new_max_ent = (fixnum)(( new_size * sf(hashtable->ht.ht_rhthresh)) + 0.5 );
    break;
  case t_longfloat:
    new_max_ent = (fixnum)(( new_size * lf(hashtable->ht.ht_rhthresh)) + 0.5 );
    break;
  }
  
  if (new_max_ent>=new_size || new_max_ent<=0) 
    new_max_ent = new_size - 1;

  {
    BEGIN_NO_INTERRUPT;	
    old = alloc_object(t_hashtable);
    old->ht = hashtable->ht;
    vs_push(old);
    hashtable->ht.ht_self = NULL;
    hashtable->ht.ht_size = new_size;
    if (type_of(hashtable->ht.ht_rhthresh) == t_fixnum)
      hashtable->ht.ht_rhthresh =
	make_fixnum(fix(hashtable->ht.ht_rhthresh) +
		    (new_size - old->ht.ht_size));
    hashtable->ht.ht_self =
      (struct cons *)alloc_relblock(new_size * sizeof(struct cons));
    for (i = 0;  i < new_size;  i++) {
      hashtable->ht.ht_self[i].c_cdr = OBJNULL;
      hashtable->ht.ht_self[i].c_car = OBJNULL;
    }

    for (i=0;i<old->ht.ht_size;i++) 

      if (old->ht.ht_self[i].c_cdr != OBJNULL) {

	hte = gethash(old->ht.ht_self[i].c_cdr, hashtable);
	/* Initially empty, only empty locations. */
	hte->c_cdr = old->ht.ht_self[i].c_cdr;
	hte->c_car = old->ht.ht_self[i].c_car;

      }

    hashtable->ht.ht_nent = old->ht.ht_nent;
    hashtable->ht.ht_max_ent = new_max_ent;
    vs_popp;
    END_NO_INTERRUPT;

  }

}

void
sethash(object key, object hashtable, object value) {

  struct cons *e;
  
  if (hashtable->ht.ht_nent+1>=hashtable->ht.ht_max_ent)
    extend_hashtable(hashtable);

  e = gethash(key, hashtable);
  if (e->c_cdr == OBJNULL)
    hashtable->ht.ht_nent++;
  e->c_cdr = key;
  e->c_car = value;

}
	
/*
static void
print_hash_table (object ht,char *procedure_name) {
  
  printf( "\n%s: \n", procedure_name );
     
  switch (type_of (ht->ht.ht_rhsize)) {
  case t_fixnum:
    printf( "fixnum         ht_rhsize:  %d \n",fix( ht->ht.ht_rhsize));
    break;
  case t_shortfloat:
    printf( "short float    ht_rhsize:  %f \n", sf( ht->ht.ht_rhsize));
    break;
  case t_longfloat:
    printf( "long float     ht_rhsize:  %lf \n",lf( ht->ht.ht_rhsize));
    break;
  default:
    FEerror( "Unknown ht_rhsize type.",0 );
    break;
  }

  switch (type_of (ht->ht.ht_rhthresh)) {
  case t_fixnum:
    printf( "fixnum         ht_rhthresh:  %d \n",fix( ht->ht.ht_rhthresh));
    break;
  case t_shortfloat:
    printf( "short float    ht_rhthresh:  %f \n", sf( ht->ht.ht_rhthresh));
    break;
  case t_longfloat:
    printf( "long float     ht_rhthresh:  %lf \n",lf( ht->ht.ht_rhthresh));
    break;
  default:
    FEerror( "Unknown ht_rhthresh type.",0 );
    break;
  }

  printf( "fixnum       ht_nent:  %d \n",ht->ht.ht_nent );
  printf( "fixnum       ht_size:  %d \n",ht->ht.ht_size );
  printf( "fixnum       ht_test:  %d \n",ht->ht.ht_test );
  printf( "fixnum ht_ht_max_ent:  %d \n",ht->ht.ht_max_ent );

}
*/

DEFUN("MAKE-HASH-TABLE-INT",object,fSmake_hash_table_int,SI,4,4,NONE,OO,OO,OO,OO,
	  (object test,object size,object rehash_size,object rehash_threshold),"") {

  enum httest htt=0;
  fixnum i,max_ent,err;
  object h;

  if (test == sLeq || test == sLeq->s.s_gfdef)
     htt = htt_eq;
  else if (test == sLeql || test == sLeql->s.s_gfdef)
     htt = htt_eql;
  else if (test == sLequal || test == sLequal->s.s_gfdef)
     htt = htt_equal;
  else if (test == sLequalp || test == sLequalp->s.s_gfdef)
     htt = htt_equalp;
  else
     FEerror("~S is an illegal hash-table test function.",1, test);

  if (type_of(size)!=t_fixnum || fix(size)<0)
     FEerror("~S is an illegal hash-table size.", 1, size);

  err=0;
  switch(type_of(rehash_size)) {
  case t_fixnum:
    if (fix(rehash_size)<=0) err=1;
    break;
  case t_shortfloat:
    if (sf(rehash_size)<=1.0) err=1;
    break;
  case t_longfloat:
    if (lf(rehash_size)<=1.0) err=1;
    break;
  default:
    err=1;
  }
  if (err)
     FEerror("~S is an illegal hash-table rehash-size.",1, rehash_size);

  err=0;
  switch(type_of(rehash_threshold)) {
  case t_fixnum:
    max_ent=fix(rehash_threshold);
    if (max_ent<0 || max_ent>fix(size)) err=1;
    break;
  case t_shortfloat:
    max_ent=(fixnum)(sf(rehash_threshold)*fix(size)+0.5);
    if (sf(rehash_threshold)<0.0 || sf(rehash_threshold)>1.0) err=1;
    break;
  case t_longfloat:
    max_ent=(fixnum)(lf(rehash_threshold)*fix(size)+0.5);
    if (lf(rehash_threshold)<0.0 || lf(rehash_threshold)>1.0) err=1;
    break;
  case t_ratio:
    {
      double d=number_to_double(rehash_threshold);
      max_ent=(fixnum)(d*fix(size)+0.5);
      if (d<0.0 || d>1.0) err=1;
      break;
    }
      
  default:
    max_ent = (7 * fix(size)) / 10;  /* Default to 70% */    
    err=1;
    break;
  }
  if (err)
     FEerror("~S is an illegal hash-table rehash-threshold.",1,rehash_threshold);
	 
  {
    BEGIN_NO_INTERRUPT;
    h = alloc_object(t_hashtable);
    h->ht.tt=h->ht.ht_test = (short)htt;
    h->ht.ht_size = fix(size);
    h->ht.ht_rhsize = rehash_size;
    h->ht.ht_rhthresh = rehash_threshold;
    h->ht.ht_nent = 0;
    h->ht.ht_max_ent = max_ent;
    h->ht.ht_self = NULL;
    h->ht.ht_self = (struct cons *)
      alloc_relblock(fix(size) * sizeof(struct cons));
    for(i = 0;  i < fix(size);  i++) {
      h->ht.ht_self[i].c_cdr = OBJNULL;
      h->ht.ht_self[i].c_car = OBJNULL;
    }
    END_NO_INTERRUPT;
  }
  RETURN1(h);
}

@(defun make_hash_table (&key (test sLeql)
			 (size `make_fixnum(1024)`)
			 (rehash_size
			  `make_shortfloat((shortfloat)1.5)`)
			 (rehash_threshold
			  `make_shortfloat((shortfloat)0.7)`)
			 &aux h)
@
  h=FFN(fSmake_hash_table_int)(test,size,rehash_size,rehash_threshold);
  @(return h)
@)

DEFUN("HASH-TABLE-P",object,fLhash_table_p,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_hashtable ? Ct : Cnil);
}

DEFUN("HASH-TABLE-EQ-P",object,fShash_table_eq_p,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_hashtable && x->ht.ht_test==htt_eq ? Ct : Cnil);
}

DEFUN("HASH-TABLE-EQL-P",object,fShash_table_eql_p,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_hashtable && x->ht.ht_test==htt_eql  ? Ct : Cnil);
}

DEFUN("HASH-TABLE-EQUAL-P",object,fShash_table_equal_p,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_hashtable && x->ht.ht_test==htt_equal  ? Ct : Cnil);
}

DEFUN("HASH-TABLE-EQUALP-P",object,fShash_table_equalp_p,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_hashtable && x->ht.ht_test==htt_equalp  ? Ct : Cnil);
}

DEFUN("GETHASH-INT",fixnum,fSgethash_int,SI,2,2,NONE,IO,OO,OO,OO,(object x,object y),"") {
  return (fixnum)gethash(x,y);
}

DEFUNM("GETHASH",object,fLgethash,LISP,2,3,NONE,OO,OO,OO,OO,(object x,object y,...),"") {

  fixnum nargs=INIT_NARGS(2),vals=(fixnum)fcall.valp;
  object *base=vs_top,l=Cnil,f=OBJNULL,z;
  va_list ap;
  struct cons *e;

  check_type_hash_table(&y);
  e=gethash(x,y);
  if (e->c_cdr != OBJNULL)
    RETURN2(e->c_car,Ct);
  else {
    va_start(ap,y);
    z=NEXT_ARG(nargs,ap,l,f,Cnil);
    va_end(ap);
    RETURN2(z,Cnil);
  }

}
  
/* /\* LFD(Lgethash)() *\/ */
/* /\* { *\/ */
/* 	int narg; */
/* 	struct cons *e; */
	
/* 	narg = vs_top - vs_base; */
/* 	if (narg < 2) */
/* 		too_few_arguments(); */
/* 	else if (narg == 2) */
/* 		vs_push(Cnil); */
/* 	else if (narg > 3) */
/* 		too_many_arguments(); */
/* 	check_type_hash_table(&vs_base[1]); */
/* 	e = gethash(vs_base[0], vs_base[1]); */
/* 	if (e->c_cdr != OBJNULL) { */
/* 		vs_base[0] = e->c_car; */
/* 		vs_base[1] = Ct; */
/* 	} else { */
/* 		vs_base[0] = vs_base[2]; */
/* 		vs_base[1] = Cnil; */
/* 	} */
/* 	vs_popp; */
/* } */

DEFUN("GETHASH1",object,fSgethash1,SI,2,2,NONE,OO,OO,OO,OO,(object k,object h),"") {

  struct cons *e;

  check_type_hash_table(&h);
  e = gethash(k,h);
  return e->c_cdr != OBJNULL ? e->c_car : Cnil;

}

DEFUN("HASH-SET",object,fShash_set,SI,3,3,NONE,OO,OO,OO,OO,(object x,object y,object z),"") {
/* LFD(siLhash_set)() */
/* { */
/* 	check_arg(3); */

  check_type_hash_table(&y);
  sethash(x,y,z);
  RETURN1(z);
/* 	vs_base += 2; */
}
 	
DEFUN("REMHASH",object,fLremhash,LISP,2,2,NONE,OO,OO,OO,OO,(object x,object y),"") {

  struct cons *e;
  
  check_type_hash_table(&y);
  e = gethash(x,y);
  if (e->c_cdr != OBJNULL) {
    e->c_cdr = OBJNULL;
    e->c_car = Cnil;
    y->ht.ht_nent--;
    RETURN1(Ct);
  } else
    RETURN1(Cnil);

}

DEFUN("CLRHASH",object,fLclrhash,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {

  int i;
  
  check_type_hash_table(&x);
  for(i = 0; i < x->ht.ht_size; i++) {
    x->ht.ht_self[i].c_cdr = OBJNULL;
    x->ht.ht_self[i].c_car = OBJNULL;
  }
  x->ht.ht_nent = 0;
  RETURN1(x);
}

DEFUN("HASH-TABLE-COUNT",fixnum,fLhash_table_count,LISP,1,1,NONE,IO,OO,OO,OO,(object x),"") {
  
  check_type_hash_table(&x);
  RETURN1(x->ht.ht_nent);
}


DEFUN("SXHASH",fixnum,fLsxhash,LISP,1,1,NONE,IO,OO,OO,OO,(object x),"") {
  /*FIXME 64*/
  RETURN1(ihash_equal(x,0));/*  & 0x7fffffff */
}

DEFUN("MAPHASH",object,fLmaphash,LISP,2,2,NONE,OO,OO,OO,OO,(object x,object y),"") {

  int i;
  
  check_type_hash_table(&y);
  for (i = 0;  i < y->ht.ht_size;  i++) {
    if(y->ht.ht_self[i].c_cdr != OBJNULL)
      ifuncall2(x,y->ht.ht_self[i].c_cdr,y->ht.ht_self[i].c_car);
  }
  RETURN1(Cnil);
}

DEFUNM("NEXT-HASH-TABLE-ENTRY",object,fSnext_hash_table_entry,SI,2,2,NONE,OO,OO,OO,OO,
	   (object table,object ind),"For HASH-TABLE and for index I return three values: NEXT-START, the next KEY and its  VALUE.   NEXT-START will be -1 if there are no more entries, otherwise it will be a value suitable for passing as an index")
{ 
  int i = fix(ind);
  fixnum vals=(fixnum)fcall.valp;
  object *base=vs_top;

  check_type_hash_table(&table);
  if ( i < 0) { FEerror("needs non negative index",0);}
  while ( i <  table->ht.ht_size) {
    if (table->ht.ht_self[i].c_cdr != OBJNULL) {
      RETURN(3,object,make_fixnum(i+1),
	     (RV(table->ht.ht_self[i].c_cdr),
	      RV(table->ht.ht_self[i].c_car)));}
    i++;}
  RETURN(3,object,small_fixnum(-1),(RV(sLnil),RV(sLnil)));

}

DEFUN("NEXT-HASH-TABLE-INDEX",object,fSnext_hash_table_index,SI,2,2,NONE,OO,OO,OO,OO,(object table,object ind),"For HASH-TABLE and for index I return the index of the next valid entry, or -1.") { 

  fixnum i = fix(ind);

  check_type_hash_table(&table);
  if ( i < 0) 
    FEerror("needs non negative index",0);

  while ( i <  table->ht.ht_size) {
    if (table->ht.ht_self[i].c_cdr != OBJNULL)
      return make_fixnum(i);
    i++;}

  return small_fixnum(-1);

}

DEFUN("HASH-ENTRY-BY-INDEX",object,fShash_entry_by_index,SI,2,2,NONE,OO,OO,OO,OO,(object table,object ind),"For HASH-TABLE and for index I return the index of the next valid entry, or -1.") { 

  fixnum i = fix(ind);

  check_type_hash_table(&table);
  if ( i < 0) 
    FEerror("needs non negative index",0);
  if (table->ht.ht_self[i].c_cdr == OBJNULL)
    FEerror("invalid index",0);
  return table->ht.ht_self[i].c_car;

}

DEFUN("HASH-KEY-BY-INDEX",object,fShash_key_by_index,SI,2,2,NONE,OO,OO,OO,OO,(object table,object ind),"For HASH-TABLE and for index I return the index of the next valid key, or -1.") { 

  fixnum i = fix(ind);

  check_type_hash_table(&table);
  if ( i < 0) 
    FEerror("needs non negative index",0);
  if (table->ht.ht_self[i].c_cdr == OBJNULL)
    FEerror("invalid index",0);
  return table->ht.ht_self[i].c_cdr;

}

DEFUN("HASH-TABLE-TEST",object,fLhash_table_test,LISP,1,1,NONE,OO,OO,OO,OO,(object table),
 "Given a HASH-TABLE return a symbol which specifies the function used in its test") 
{ 
  check_type_hash_table(&table);
  switch(table->ht.ht_test) {
     case htt_equalp: RETURN1(sLequalp);
     case htt_equal: RETURN1(sLequal);
     case htt_eq: RETURN1(sLeq);
     case htt_eql: RETURN1(sLeql);
     }
  FEerror("not able to get hash table test for ~a",1,table);
  RETURN1(sLnil);
}

DEFUN("HASH-TABLE-SIZE",object,fLhash_table_size,LISP,1,1,NONE,OO,OO,OO,OO,(object table),"")
{
  check_type_hash_table(&table);
  RETURN1(make_fixnum(table->ht.ht_size));
}

DEFUN("HASH-TABLE-REHASH-SIZE",object,fLhash_table_rehash_size,LISP,1,1,NONE,OO,OO,OO,OO,(object table),"")
{
  check_type_hash_table(&table);
  RETURN1(table->ht.ht_rhsize);
}

DEFUN("EXTEND-HASHTABLE",fixnum,fSextent_hashtable,SI,1,1,NONE,IO,OO,OO,OO,(object table),"") {
  extend_hashtable(table);
  return table->ht.ht_size;
}

DEFUN("HASH-TABLE-REHASH-THRESHOLD",object,fLhash_table_rehash_threshold,LISP,1,1,NONE,OO,OO,OO,OO,(object table),"")
{
  check_type_hash_table(&table);
  RETURN1(table->ht.ht_rhthresh);
}

void
gcl_init_hash() {

  ufixnum i;

  sLeq = make_ordinary("EQ");
  sLeql = make_ordinary("EQL");
  sLequal = make_ordinary("EQUAL");
  sLequalp = make_ordinary("EQUALP");
  sKsize = make_keyword("SIZE");
  sKtest = make_keyword("TEST");
  sKrehash_size = make_keyword("REHASH-SIZE");
  sKrehash_threshold = make_keyword("REHASH-THRESHOLD");
  
  make_function("MAKE-HASH-TABLE", Lmake_hash_table);
  
  {
    object x=find_symbol(make_simple_string("MOST-NEGATIVE-FIXNUM"),find_package(make_simple_string("SI")));
    x=number_negate(x->s.s_dbind);
    for (i=0;i<sizeof(rtb)/sizeof(*rtb);i++) {
      vs_push(x);
      Lrandom();
      rtb[i]=fixint(vs_pop);
    }
  }
/*   make_function("HASH-TABLE-P", Lhash_table_p); */
/*   /\* 	make_function("GETHASH", Lgethash); *\/ */
/*   make_function("REMHASH", Lremhash); */
/*   make_function("MAPHASH", Lmaphash); */
/*   make_function("CLRHASH", Lclrhash); */
/*   make_function("HASH-TABLE-COUNT", Lhash_table_count); */
/*   make_function("SXHASH", Lsxhash); */
  /* 	make_si_sfun("HASH-EQUAL",hash_equal,ARGTYPE2(f_object,f_fixnum) */
  /* 						| RESTYPE(f_object)); */
  /* 	make_si_sfun("HASH-EQUALP",hash_equalp,ARGTYPE2(f_object,f_fixnum) */
  /* 						| RESTYPE(f_object)); */
  /* 	make_si_function("HASH-SET", siLhash_set); */
}

