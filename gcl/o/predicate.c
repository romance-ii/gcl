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
#include "include.h"

DEFUNO_NEW("NULL",object,fLnull,LISP
	  ,1,1,NONE,OO,OO,OO,OO,void,Lnull,(object x0),"")
{
    /* 1 args */

	if (x0 == Cnil)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUN_NEW("NOT",object,fLnot,LISP
   ,1,1,NONE,OO,OO,OO,OO,(object x0),"")

{
    /* 1 args */

	if (x0 == Cnil)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO_NEW("SYMBOLP",object,fLsymbolp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lsymbolp,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_symbol)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO_NEW("ATOM",object,fLatom  ,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Latom,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) != t_cons)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO_NEW("CONSP",object,fLconsp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lconsp,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_cons)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO_NEW("LISTP",object,fLlistp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Llistp,(object x0),"")

{
	/* 1 args */

	if (x0 == Cnil || type_of(x0) == t_cons)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO_NEW("NUMBERP",object,fLnumberp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lnumberp,(object x0),"")

{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_fixnum || t == t_bignum || t == t_ratio ||
	    t == t_shortfloat || t == t_longfloat ||
	    t == t_complex)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO_NEW("INTEGERP",object,fLintegerp ,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lintegerp,(object x0),"")

{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_fixnum || t == t_bignum)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUN_NEW("RATIONALP",object,fLrationalp,LISP
   ,1,1,NONE,OO,OO,OO,OO,(object x0),"")

{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_fixnum || t == t_bignum || t == t_ratio)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}


DEFUN_NEW("REALP",object,fLrealp,LISP
   ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	enum type t;
	t = type_of(x0);

        RETURN1((TS_MEMBER(t,TS(t_fixnum)| TS(t_bignum)| TS(t_ratio)|
			   TS(t_longfloat)| TS(t_shortfloat))
		 ? Ct : Cnil));

}




DEFUNO_NEW("FLOATP",object,fLfloatp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lfloatp,(object x0),"")

{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_longfloat || t == t_shortfloat)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("COMPLEXP",object,fLcomplexp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lcomplexp,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_complex)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("CHARACTERP",object,fLcharacterp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lcharacterp,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_character)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("STRINGP",object,fLstringp ,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lstringp,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_string)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("BIT-VECTOR-P",object,fLbit_vector_p,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lbit_vector_p,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_bitvector)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("VECTORP",object,fLvectorp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lvectorp,(object x0),"")

{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_vector || t == t_string || t == t_bitvector)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("SIMPLE-STRING-P",object,fLsimple_string_p,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lsimple_string_p,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_string &&
/*	    !x0->st.st_adjustable && */
	    !x0->st.st_hasfillp &&
	    x0->st.st_displaced->c.c_car == Cnil)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("SIMPLE-BIT-VECTOR-P",object,fLsimple_bit_vector_p ,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lsimple_bit_vector_p ,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_bitvector &&
	    /*	    !x0->bv.bv_adjustable && */
	    !x0->bv.bv_hasfillp &&
	    x0->bv.bv_displaced->c.c_car == Cnil)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("SIMPLE-VECTOR-P",object,fLsimple_vector_p ,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lsimple_vector_p ,(object x0),"")

{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_vector &&
/*	    !x0->v.v_adjustable && */
	    !x0->v.v_hasfillp &&
	    x0->v.v_displaced->c.c_car == Cnil &&
	    (enum aelttype)x0->v.v_elttype == aet_object)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("ARRAYP",object,fLarrayp ,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Larrayp,(object x0),"")

{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_array ||
	    t == t_vector || t == t_string || t == t_bitvector)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("PACKAGEP",object,fLpackagep ,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lpackagep ,(object x0),"")

{
	/* 1 args */

	if (type_of(x0) == t_package)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("FUNCTIONP",object,fLfunctionp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lfunctionp,(object x0),"")

{
	enum type t;
	object x;

	/* 1 args */
	t = type_of(x0);
	if (t == t_cfun || t == t_cclosure || t == t_sfun || t == t_gfun
	    || t == t_closure|| t == t_afun
	    || t == t_vfun)
		x0 = Ct;
	else if (t == t_symbol) {
		if (x0->s.s_gfdef != OBJNULL &&
		    x0->s.s_mflag == FALSE)
			x0 = Ct;
		else
			x0 = Cnil;
	} else if (t == t_cons) {
		x = x0->c.c_car;
		if (x == sLlambda || x == sLlambda_block ||
		    x == sSlambda_block_expanded ||
		    x == sLlambda_closure || x == sLlambda_block_closure)
			x0 = Ct;
		else
			x0 = Cnil;
	} else
		x0 = Cnil;
RETURN1(x0);}
#ifdef STATIC_FUNCTION_POINTERS
object
fLfunctionp(object x) {
  return FFN(fLfunctionp)(x);
}
#endif


DEFUNO_NEW("COMPILED-FUNCTION-P",object,fLcompiled_function_p,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lcompiled_function_p,(object x0),"")

{
	/* 1 args */;

	if (type_of(x0) == t_cfun ||
	    type_of(x0) == t_cclosure  ||
	    type_of(x0) == t_sfun   ||
	    type_of(x0) == t_gfun ||
	    type_of(x0) == t_afun ||
	    type_of(x0) == t_closure ||
	    type_of(x0) == t_vfun
	    
	    
	    )
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("COMMONP",object,fLcommonp,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lcommonp,(object x0),"")

{
	/* 1 args */;

	if (type_of(x0) != t_spice)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO_NEW("EQ",object,fLeq,LISP
   ,2,2,NONE,OO,OO,OO,OO,void,Leq,(object x0,object x1),"")

{
  /* 2 args */

  if (x0 == x1)
    x0 = Ct;
  else
    x0 = Cnil;
	
  RETURN1(x0)
    ;}

bool
eql(object x, object y)
{
	enum type t;

	if (x == y)
		return(TRUE);
	if ((t = type_of(x)) != type_of(y))
		return(FALSE);
	switch (t) {

	case t_fixnum:
		if (fix(x) == fix(y))
			return(TRUE);
		else
			return(FALSE);

	case t_bignum:
		if (big_compare(x,y) == 0)
			return(TRUE);
		else
			return(FALSE);

	case t_ratio:
		if (eql(x->rat.rat_num, y->rat.rat_num) &&
		    eql(x->rat.rat_den, y->rat.rat_den))
			return(TRUE);
		else
			return(FALSE);

	case t_shortfloat:
		if (sf(x) == sf(y))
			return(TRUE);
		else
			return(FALSE);

	case t_longfloat:
		if (lf(x) == lf(y))
			return(TRUE);
		else
			return(FALSE);

	case t_complex:
		if (eql(x->cmp.cmp_real, y->cmp.cmp_real) &&
		    eql(x->cmp.cmp_imag, y->cmp.cmp_imag))
			return(TRUE);
		else
			return(FALSE);

	case t_character:
		if (char_code(x) == char_code(y) &&
		    char_bits(x) == char_bits(y) &&
		    char_font(x) == char_font(y))
			return(TRUE);
		else
			return(FALSE);
	default:
	  break;
	}
	return(FALSE);
}

DEFUNO_NEW("EQL",object,fLeql,LISP
   ,2,2,NONE,OO,OO,OO,OO,void,Leql,(object x0,object x1),"")

{
	/* 2 args */

	if (eql(x0, x1))
		x0 = Ct;
	else
		x0 = Cnil;
	
RETURN1(x0);}

bool

equal(register object x, register object y)
                  
#ifdef UNIX   /* in non unix case cs_check want's an address */
        
#endif
         
{
register enum type t;

	cs_check(y);

BEGIN:
	if ((t = type_of(x)) != type_of(y))
		return(FALSE);
	if (x==y)
		return(TRUE);
	switch (t) {

	case t_cons:
		if (!equal(x->c.c_car, y->c.c_car))
			return(FALSE);
		x = x->c.c_cdr;
		y = y->c.c_cdr;
		goto BEGIN;

        case t_structure:
	case t_symbol: 
	case t_vector:
        case t_array:
		return FALSE;

	case t_fixnum :
	return(fix(x)==fix(y));
	case t_shortfloat:
	return(x->SF.SFVAL==y->SF.SFVAL);
	case t_longfloat:
	return(x->LF.LFVAL==y->LF.LFVAL);

 	case t_string:
	  return(string_eq(x, y));

	case t_bitvector:
	{
		int i, ox, oy;

		if (x->bv.bv_fillp != y->bv.bv_fillp)
			return(FALSE);
		ox = BV_OFFSET(x);
		oy = BV_OFFSET(y);
		for (i = 0;  i < x->bv.bv_fillp;  i++)
			if((x->bv.bv_self[(i+ox)/8] & (0200>>(i+ox)%8))
			 !=(y->bv.bv_self[(i+oy)/8] & (0200>>(i+oy)%8)))
				return(FALSE);
		return(TRUE);
	}

	case t_pathname:
#ifdef UNIX
		if (equal(x->pn.pn_host, y->pn.pn_host) &&
		    equal(x->pn.pn_device, y->pn.pn_device) &&
		    equal(x->pn.pn_directory, y->pn.pn_directory) &&
		    equal(x->pn.pn_name, y->pn.pn_name) &&
		    equal(x->pn.pn_type, y->pn.pn_type) &&
		    equal(x->pn.pn_version, y->pn.pn_version))
#endif
			return(TRUE);
		else
			return(FALSE);

	default:
	  break;
	}
	return(eql(x,y));
}

DEFUNO_NEW("EQUAL",object,fLequal,LISP
   ,2,2,NONE,OO,OO,OO,OO,void,Lequal,(object x0,object x1),"")

{
	/* 2 args */

	if (equal(x0, x1))
		x0 = Ct;
	else
		x0 = Cnil;
	vs_popp;
	RETURN1(x0);
}

bool
equalp(object x, object y)
{
	enum type tx, ty;
	int j;

	cs_check(x);

BEGIN:
	if (eql(x, y))
		return(TRUE);
	tx = type_of(x);
	ty = type_of(y);

	switch (tx) {
	case t_fixnum:
	case t_bignum:
	case t_ratio:
	case t_shortfloat:
	case t_longfloat:
	case t_complex:
		if (ty == t_fixnum || ty == t_bignum || ty == t_ratio ||
		    ty == t_shortfloat || ty == t_longfloat ||
		    ty == t_complex)
			return(!number_compare(x, y));
		else
			return(FALSE);

	case t_vector:
	case t_string:
	case t_bitvector:
		if (ty == t_vector || ty == t_string || ty == t_bitvector)
			{ j = x->v.v_fillp;
			  if (j != y->v.v_fillp)
			    return FALSE;
			  goto ARRAY;}
		else
			return(FALSE);

	case t_array:
		if (ty == t_array && x->a.a_rank == y->a.a_rank)
		  { if (x->a.a_rank > 1)
		     {int i=0;
		      for (i=0; i< x->a.a_rank; i++)
			{if (x->a.a_dims[i]!=y->a.a_dims[i])
			   return(FALSE);}}
		    if (x->a.a_dim != y->a.a_dim)
		      return(FALSE);
		    j=x->a.a_dim;
		    goto ARRAY;}
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

	case t_cons:
		if (!equalp(x->c.c_car, y->c.c_car))
			return(FALSE);
		x = x->c.c_cdr;
		y = y->c.c_cdr;
		goto BEGIN;

	case t_structure:
		{
		int i;
		if (x->str.str_def != y->str.str_def)
			return(FALSE);
		{int leng= S_DATA(x->str.str_def)->length;
		 unsigned char *s_type= & SLOT_TYPE(x->str.str_def,0);
		 unsigned short *s_pos= & SLOT_POS(x->str.str_def,0);
		for (i = 0;  i < leng;  i++,s_pos++)
		 {if (s_type[i]==0)
		   {if (!equalp(STREF(object,x,*s_pos),STREF(object,y,*s_pos)))
		       return FALSE;}
		  else
/* 		   if (! (*s_pos & (sizeof(object)-1))) */
		    switch(s_type[i]){
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
		      break;}}
		return(TRUE);
	}}

	case t_pathname:
		return(equal(x, y));
	default:
	  break;
	}
	return(FALSE);

ARRAY:

	{
		int i;

		vs_push(Cnil);
		vs_push(Cnil);
		for (i = 0;  i < j;  i++) {
			vs_top[-2] = aref(x, i);
			vs_top[-1] = aref(y, i);
			if (!equalp(vs_top[-2], vs_top[-1])) {
				vs_popp;
				vs_popp;
				return(FALSE);
			}
		}
		vs_popp;
		vs_popp;
		return(TRUE);
	}
}

DEFUNO_NEW("EQUALP",object,fLequalp,LISP
   ,2,2,NONE,OO,OO,OO,OO,void,Lequalp,(object x0,object x1),"")

{
	/* 2 args */

	if (equalp(x0, x1))
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

static void
FFN(Fand)(object args)
{

	object *top = vs_top;

	if (endp(args)) {
		vs_base = vs_top;
		vs_push(Ct);
		return;
	}
	while (!endp(MMcdr(args))) {
		eval(MMcar(args));
		if (vs_base[0] == Cnil) {
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
FFN(For)(object args)
{

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
contains_sharp_comma(object x)
{
	enum type tx;

	cs_check(x);

BEGIN:
	tx = type_of(x);
	if (tx == t_complex)
		return(contains_sharp_comma(x->cmp.cmp_real) ||
		       contains_sharp_comma(x->cmp.cmp_imag));
	if (tx == t_vector)
	{
		int i;
	   if (x->v.v_elttype == aet_object)
		for (i = 0;  i < x->v.v_fillp;  i++)
			if (contains_sharp_comma(x->v.v_self[i]))
				return(TRUE);
		return(FALSE);
	}
	if (tx == t_cons) {
		if (x->c.c_car == siSsharp_comma)
			return(TRUE);
		if (contains_sharp_comma(x->c.c_car))
			return(TRUE);
		x = x->c.c_cdr;
		goto BEGIN;
	}
	if (tx == t_array)
	{
		int i, j;
	   if (x->a.a_elttype == aet_object) {
		for (i = 0, j = 1;  i < x->a.a_rank;  i++)
			j *= x->a.a_dims[i];
		for (i = 0;  i < j;  i++)
			if (contains_sharp_comma(x->a.a_self[i]))
				return(TRUE);
	      }
		return(FALSE);
	}
	if (tx == t_structure)
		return(TRUE);		/*  Oh, my god!  */
	return(FALSE);
}

DEFUN_NEW("CONTAINS-SHARP-COMMA",object,fScontains_sharp_comma,SI
   ,1,1,NONE,OO,OO,OO,OO,(object x0),"")

{
	/* 1 args */

	if (contains_sharp_comma(x0))
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUN_NEW("SPICEP",object,fSspicep  ,SI
   ,1,1,NONE,OO,OO,OO,OO,(object x0),"")

{
	/* 1 args */
	if (type_of(x0) == t_spice)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUN_NEW("FIXNUMP",object,fSfixnump,SI
   ,1,1,NONE,OO,OO,OO,OO,(object x0),"")

{
	/* 1 args */
	if (type_of(x0) == t_fixnum)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

void
gcl_init_predicate_function(void)
{

	sLand=make_special_form("AND",Fand);
	sLor=make_special_form("OR",For);



}
