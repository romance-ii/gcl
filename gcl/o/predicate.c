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
	predicate.c

	predicates
*/

#include <stdlib.h>
#include <string.h>
#include "include.h"

DEFUN("NULL",object,fLnull,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(x==Cnil ? Ct : Cnil);
}

DEFUN("NOT",object,fLnot,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(x==Cnil ? Ct : Cnil);
}

DEFUN("SYMBOLP",object,fLsymbolp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_symbol ? Ct : Cnil);
}

DEFUN("ATOM",object,fLatom,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(!consp(x) ? Ct : Cnil);
}

DEFUN("CONSP",object,fLconsp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(consp(x) ? Ct : Cnil);
}

DEFUN("LISTP",object,fLlistp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(listp(x) ? Ct : Cnil);
}

DEFUN("NUMBERP",object,fLnumberp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(numberp(x) ? Ct : Cnil);
}

DEFUN("INTEGERP",object,fLintegerp ,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(integerp(x) ? Ct : Cnil);
}

DEFUN("RATIONALP",object,fLrationalp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(rationalp(x) ? Ct : Cnil);
}

DEFUN("REALP",object,fLrealp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(realp(x) ? Ct : Cnil);
}

DEFUN("FLOATP",object,fLfloatp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(floatp(x) ? Ct : Cnil);}

DEFUN("COMPLEXP",object,fLcomplexp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_complex ? Ct : Cnil);
}

DEFUN("CHARACTERP",object,fLcharacterp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_character ? Ct : Cnil);
}

DEFUN("STRINGP",object,fLstringp ,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_string ? Ct : Cnil);
}

DEFUN("BIT-VECTOR-P",object,fLbit_vector_p,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_bitvector ? Ct : Cnil);
}

DEFUN("VECTORP",object,fLvectorp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(vectorp(x) ? Ct : Cnil);
}

DEFUN("SIMPLE-STRING-P",object,fLsimple_string_p,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(FFN(fLstringp)(x));
}

DEFUN("SIMPLE-BIT-VECTOR-P",object,fLsimple_bit_vector_p,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(FFN(fLbit_vector_p)(x));
}

DEFUN("SIMPLE-VECTOR-P",object,fLsimple_vector_p,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(FFN(fLvectorp)(x)==Ct && (enum aelttype)x->v.v_elttype==aet_object ? Ct : Cnil);
}

DEFUN("ARRAYP",object,fLarrayp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(arrayp(x) ? Ct : Cnil);
}

DEFUN("PACKAGEP",object,fLpackagep,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_package ? Ct : Cnil);
}

DEFUN("FUNCTIONP",object,fLfunctionp,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(functionp(x) ? Ct : Cnil);
}

#ifdef STATIC_FUNCTION_POINTERS
object
fLfunctionp(object x) {
  return FFN(fLfunctionp)(x);
}
#endif

DEFUN("LOGICAL-PATHNAME-P",object,fSlogical_pathname_p,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_pathname && pathname_lookup(x->pn.pn_host,sSApathname_logicalA->s.s_dbind)!=Cnil ? Ct : Cnil);
}

DEFUN("COMPILED-FUNCTION-P",object,fLcompiled_function_p,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_function ? Ct : Cnil);
}

DEFUN("GENERIC-FUNCTION-P",object,fSgeneric_function_p,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x)==t_function && x->d.tt==1 ? Ct : Cnil);
}
DEFUN("SET-D-TT",object,fSset_d_tt_p,SI,2,2,NONE,OI,OO,OO,OO,(fixnum x,object y),"") {
  y->d.tt=x;
  RETURN1(y);
}


DEFUN("COMMONP",object,fScommonp,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(type_of(x) != t_spice ? Ct : Cnil);
}

DEFUN("EQ",object,fLeq,LISP,2,2,NONE,OO,OO,OO,OO,(object x0,object x1),"") {
  RETURN1(x0==x1 ? Ct : Cnil);
}

#define eqlm(x,y) \
\
  case t_fixnum:\
    return (fix(x)==fix(y)) ? TRUE : FALSE;\
\
  case t_bignum:\
    return big_compare(x,y) ? FALSE : TRUE;\
\
  case t_ratio:\
    return (eql(x->rat.rat_num,y->rat.rat_num) &&\
	    eql(x->rat.rat_den,y->rat.rat_den)) ? TRUE : FALSE;\
\
  case t_shortfloat:\
    return sf(x)==sf(y) ? TRUE : FALSE;\
\
  case t_longfloat:\
    return lf(x)==lf(y) ? TRUE : FALSE;\
\
  case t_complex:\
    return (eql(x->cmp.cmp_real,y->cmp.cmp_real) &&\
	    eql(x->cmp.cmp_imag,y->cmp.cmp_imag)) ? TRUE : FALSE;\
\
  default:\
    return FALSE;

bool
eql1(register object x,register object y) {

  /*x and y are not == and not Cnil and not immfix*/

  if (valid_cdr(x)||valid_cdr(y)||x->d.t!=y->d.t) return FALSE;
  
  switch (x->d.t) {

    eqlm(x,y);

  }

}

/*for sublis1-inline*/
bool
oeql(object x,object y) {
  return eql(x,y) ? TRUE : FALSE;
}

DEFUN("EQL",object,fLeql,LISP,2,2,NONE,OO,OO,OO,OO,(object x0,object x1),"") {
  RETURN1(eql(x0,x1) ? Ct : Cnil);
}


bool
equal1(register object x, register object y) {

  /*x and y are not == and not Cnil and not immfix*/

  if (valid_cdr(x)) return valid_cdr(y)&&equal(x->c.c_car,y->c.c_car)&&equal(x->c.c_cdr,y->c.c_cdr);

  if (valid_cdr(y)) return FALSE;
  
  if (x->d.t!=y->d.t)
    return FALSE;
  
  switch(x->d.t) {

  case t_string:
    return(string_eq(x, y));
    
  case t_bitvector:
    {
      fixnum i, ox, oy;
      
      if (x->bv.bv_fillp != y->bv.bv_fillp)
	return(FALSE);
      ox = BV_OFFSET(x);
      oy = BV_OFFSET(y);
      for (i = 0;  i < x->bv.bv_fillp;  i++)
	if(((x->bv.bv_self[(i+ox)/8] & (0200>>(i+ox)%8)) ? 1 : 0)
	   !=((y->bv.bv_self[(i+oy)/8] & (0200>>(i+oy)%8)) ? 1 : 0))
	  return(FALSE);
      return(TRUE);
    }
    
  case t_pathname:
    if (equal(x->pn.pn_host, y->pn.pn_host) &&
	equal(x->pn.pn_device, y->pn.pn_device) &&
	equal(x->pn.pn_directory, y->pn.pn_directory) &&
	equal(x->pn.pn_name, y->pn.pn_name) &&
	equal(x->pn.pn_type, y->pn.pn_type) &&
	equal(x->pn.pn_version, y->pn.pn_version))
      return(TRUE);
    else
      return(FALSE);

    eqlm(x,y);

  }

}

DEFUN("EQUAL",object,fLequal,LISP,2,2,NONE,OO,OO,OO,OO,(object x0,object x1),"") {
  RETURN1(equal(x0, x1) ? Ct : Cnil);
}

/*for sublis1-inline*/
bool
oequal(object x,object y) {
  return equal(x,y) ? TRUE : FALSE;
}

bool
equalp1(register object x, register object y) {

  enum type tx,ty;
  fixnum j;
  
  /*x and y are not == and not Cnil*/

  if (listp(x)) return listp(y)&&equalp(x->c.c_car,y->c.c_car)&&equalp(x->c.c_cdr,y->c.c_cdr);
    
  if (listp(y)) return FALSE;

  tx=is_imm_fixnum(x) ? t_fixnum : x->d.t;
  ty=is_imm_fixnum(y) ? t_fixnum : y->d.t;

  switch(tx) {

  case t_fixnum:
  case t_bignum:
  case t_ratio:
  case t_shortfloat:
  case t_longfloat:
  case t_complex:
    if (ty==t_fixnum||ty==t_bignum||ty==t_ratio ||
	ty==t_shortfloat||ty==t_longfloat ||
	ty==t_complex)
      return(!number_compare(x, y));
    else
      return(FALSE);
    
  case t_vector:
  case t_string:
  case t_bitvector:
    if (ty==t_vector||ty==t_string||ty==t_bitvector) {
      j = x->v.v_fillp;
      if (j != y->v.v_fillp)
	return FALSE;
      goto ARRAY;
    }
    else
      return(FALSE);
    
  case t_array:
    if (ty==t_array && x->a.a_rank==y->a.a_rank) { 
      if (x->a.a_rank > 1) {
	fixnum i;
	for (i=0; i< x->a.a_rank; i++) {
	  if (x->a.a_dims[i]!=y->a.a_dims[i])
	    return(FALSE);
	}
      }
      if (x->a.a_dim != y->a.a_dim)
	return(FALSE);
      j=x->a.a_dim;
      goto ARRAY;
    }
    else
      return(FALSE);

  default:
    break;
  }
  
  if (tx != ty)
    return(FALSE);
  
  switch (tx) {

  case t_character:
    return(char_equal(x, y));
    
  case t_structure:
    {
      fixnum i;
      if (x->str.str_def != y->str.str_def)
	return(FALSE);
      {
	fixnum leng= S_DATA(x->str.str_def)->length;
	unsigned char *s_type= & SLOT_TYPE(x->str.str_def,0);
	unsigned short *s_pos= & SLOT_POS(x->str.str_def,0);
	for (i = 0;  i < leng;  i++,s_pos++) {
	  if (s_type[i]==aet_object) {
	    if (!equalp(STREF(object,x,*s_pos),STREF(object,y,*s_pos)))
	      return FALSE;
	  }
	  else
	    /* 		   if (! (*s_pos & (sizeof(object)-1))) */
	    switch(s_type[i]) {
	    case aet_lf:
	      if((! (*s_pos & (sizeof(longfloat)-1))) &&
		 STREF(longfloat,x,*s_pos) != STREF(longfloat,y,*s_pos))
		return(FALSE);
	      break;
	    case aet_sf:
	      if((! (*s_pos & (sizeof(shortfloat)-1))) &&
		 STREF(shortfloat,x,*s_pos)!=STREF(shortfloat,y,*s_pos))
		return(FALSE);
	      break;
	    default:
	      if((! (*s_pos & (sizeof(fixnum)-1))) &&
		 STREF(fixnum,x,*s_pos)!=STREF(fixnum,y,*s_pos))
		return(FALSE);
	    break;
	    }
	}
	return(TRUE);
      }
    }
    
  case t_hashtable:
    {
      unsigned i;
      struct cons *e;

      if (x->ht.ht_nent!=y->ht.ht_nent)
	return(FALSE);
      if (x->ht.ht_test!=y->ht.ht_test)
	return(FALSE);
      for (i=0;i<x->ht.ht_size;i++) {
	if (x->ht.ht_self[i].c_cdr==OBJNULL)
	  continue;
	if ((e=gethash(x->ht.ht_self[i].c_cdr,y))->c_cdr==OBJNULL
	   ||!equalp(x->ht.ht_self[i].c_car,e->c_car))
	  return(FALSE);
      }
      return(TRUE);
      break;
    }

  case t_pathname:
    return(equal(x, y));

  case t_random:
    return(x->rnd.rnd_state._mp_seed->_mp_alloc==y->rnd.rnd_state._mp_seed->_mp_alloc &&
	   !memcmp(x->rnd.rnd_state._mp_seed->_mp_d,y->rnd.rnd_state._mp_seed->_mp_d,
		   x->rnd.rnd_state._mp_seed->_mp_alloc*sizeof(*x->rnd.rnd_state._mp_seed->_mp_d)));
  default:
    return(FALSE);

  }
  
  
 ARRAY:
  
  {
    fixnum i;
    
    for (i = 0;  i < j;  i++)
      if (!equalp(aref(x, i), aref(y, i)))
	return(FALSE);
    return(TRUE);
  }

}

/*for sublis1-inline*/
bool 
oequalp(object x,object y) {
  return equalp(x,y) ? TRUE : FALSE;
}

DEFUN("EQUALP",object,fLequalp,LISP,2,2,NONE,OO,OO,OO,OO,(object x0,object x1),"") {
  RETURN1(equalp(x0,x1) ? Ct : Cnil);
}


static void
FFN(Fand)(object args) {

  object *top = vs_top;
  
  if (endp(args)) {
    vs_base = vs_top;
    vs_push(Ct);
    return;
  }
  while (!endp(MMcdr(args))) {
    eval(MMcar(args));
    if (vs_base[0]==Cnil) {
      vs_base = vs_top = top;
      vs_push(Cnil);
      return;
    }
    vs_top = top;
    args = MMcdr(args);
  }
  eval(MMcar(args));
}

static void
FFN(For)(object args) {

  object *top = vs_top;
  
  if (endp(args)) {
    vs_base = vs_top;
    vs_push(Cnil);
    return;
  }
  while (!endp(MMcdr(args))) {
    eval(MMcar(args));
    if (vs_base[0] != Cnil) {
      top[0] = vs_base[0];
      vs_base = top;
      vs_top = top+1;
      return;
    }
    vs_top = top;
    args = MMcdr(args);
  }
  eval(MMcar(args));
}

/*
	Contains_sharp_comma returns TRUE, iff the argument contains
	a cons whose car is si:|#,| or a STRUCTURE.
	Refer to the compiler about this magic.
*/
bool
contains_sharp_comma(object x) {

  enum type tx;
  
  cs_check(x);
  
 BEGIN:
  tx = type_of(x);
  if (tx==t_complex)
    return(contains_sharp_comma(x->cmp.cmp_real) ||
	   contains_sharp_comma(x->cmp.cmp_imag));
  if (tx==t_vector)
    {
      int i;
      if (x->v.v_elttype==aet_object)
	for (i = 0;  i < x->v.v_fillp;  i++)
	  if (contains_sharp_comma(x->v.v_self[i]))
	    return(TRUE);
      return(FALSE);
    }
  if (tx==t_cons) {
    if (x->c.c_car==siSsharp_comma)
      return(TRUE);
    if (contains_sharp_comma(x->c.c_car))
      return(TRUE);
    x = x->c.c_cdr;
    goto BEGIN;
  }
  if (tx==t_array)
    {
      int i, j;
      if (x->a.a_elttype==aet_object) {
	for (i = 0, j = 1;  i < x->a.a_rank;  i++)
	  j *= x->a.a_dims[i];
	for (i = 0;  i < j;  i++)
	  if (contains_sharp_comma(x->a.a_self[i]))
	    return(TRUE);
      }
      return(FALSE);
    }
  if (tx==t_structure)
    return(TRUE);		/*  Oh, my god!  */
  return(FALSE);

}

DEFUN("CONTAINS-SHARP-COMMA",object,fScontains_sharp_comma,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  RETURN1(contains_sharp_comma(x0) ? Ct : Cnil);
}

DEFUN("SPICEP",object,fSspicep,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  RETURN1(type_of(x0)==t_spice ? Ct : Cnil);
}

DEFUN("FIXNUMP",object,fSfixnump,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  RETURN1(type_of(x0)==t_fixnum ? Ct : Cnil);
}

void
gcl_init_predicate_function(void) {
  sLand=make_special_form("AND",Fand);
  sLor=make_special_form("OR",For);
}
