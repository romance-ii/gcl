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

#include "include.h"

DEFUN("NULL",object,fLnot,LISP
   ,1,1,NONE,OO,OO,OO,OO,"")();

DEFUNO("NOT",object,fLnot,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lnull,"")(x0)
object x0;
{
    /* 1 args */

	if (x0 == Cnil)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO("SYMBOLP",object,fLsymbolp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lsymbolp,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) == t_symbol)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO("ATOM",object,fLatom  ,LISP
   ,1,1,NONE,OO,OO,OO,OO,Latom  ,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) != t_cons)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO("CONSP",object,fLconsp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lconsp,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) == t_cons)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO("LISTP",object,fLlistp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Llistp,"")(x0)
object x0;
{
	/* 1 args */

	if (x0 == Cnil || type_of(x0) == t_cons)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO("NUMBERP",object,fLnumberp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lnumberp,"")(x0)
object x0;
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

DEFUNO("INTEGERP",object,fLintegerp ,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lintegerp ,"")(x0)
object x0;
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

DEFUNO("RATIONALP",object,fLrationalp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lrationalp,"")(x0)
object x0;
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


DEFUN("REALP",object,fLrealp,LISP
   ,1,1,NONE,OO,OO,OO,OO,"")(x0)
object x0;
{
	enum type t;
	t = type_of(x0);

        RETURN1((TS_MEMBER(t,TS(t_fixnum)| TS(t_bignum)| TS(t_ratio)|
			   TS(t_longfloat)| TS(t_shortfloat))
		 ? Ct : Cnil));

}




DEFUNO("FLOATP",object,fLfloatp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lfloatp,"")(x0)
object x0;
{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_longfloat || t == t_shortfloat)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("COMPLEXP",object,fLcomplexp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lcomplexp,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) == t_complex)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("CHARACTERP",object,fLcharacterp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lcharacterp,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) == t_character)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("STRINGP",object,fLstringp ,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lstringp ,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) == t_string)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("BIT-VECTOR-P",object,fLbit_vector_p,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lbit_vector_p,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) == t_bitvector)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("VECTORP",object,fLvectorp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lvectorp,"")(x0)
object x0;
{
	enum type t;
	/* 1 args */

	t = type_of(x0);
	if (t == t_vector || t == t_string || t == t_bitvector)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("SIMPLE-STRING-P",object,fLsimple_string_p,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lsimple_string_p,"")(x0)
object x0;
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

DEFUNO("SIMPLE-BIT-VECTOR-P",object,fLsimple_bit_vector_p ,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lsimple_bit_vector_p ,"")(x0)
object x0;
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

DEFUNO("SIMPLE-VECTOR-P",object,fLsimple_vector_p ,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lsimple_vector_p ,"")(x0)
object x0;
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

DEFUNO("ARRAYP",object,fLarrayp ,LISP
   ,1,1,NONE,OO,OO,OO,OO,Larrayp ,"")(x0)
object x0;
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

DEFUNO("PACKAGEP",object,fLpackagep ,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lpackagep ,"")(x0)
object x0;
{
	/* 1 args */

	if (type_of(x0) == t_package)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("FUNCTIONP",object,fLfunctionp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lfunctionp,"")(x0)
object x0;
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

DEFUNO("COMPILED-FUNCTION-P",object,fLcompiled_function_p,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lcompiled_function_p,"")(x0)
object x0;
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

DEFUNO("COMMONP",object,fLcommonp,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lcommonp,"")(x0)
object x0;
{
	/* 1 args */;

	if (type_of(x0) != t_spice)
		x0 = Ct;
	else
		x0 = Cnil;
RETURN1(x0);}

DEFUNO("EQ",object,fLeq,LISP
   ,2,2,NONE,OO,OO,OO,OO,Leq,"")(x0,x1)
object x0,x1;
{
  /* 2 args */

  if (x0 == x1)
    x0 = Ct;
  else
    x0 = Cnil;
	
  RETURN1(x0)
    ;}

bool
eql(x, y)
object x, y;
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
		if (big_compare((struct bignum *)x,
				(struct bignum *)y) == 0)
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
	}
	return(FALSE);
}

DEFUNO("EQL",object,fLeql,LISP
   ,2,2,NONE,OO,OO,OO,OO,Leql,"")(x0,x1)
object x0,x1;
{
	/* 2 args */

	if (eql(x0, x1))
		x0 = Ct;
	else
		x0 = Cnil;
	
RETURN1(x0);}

bool

equal(x, y)
register object x;
#ifdef UNIX   /* in non unix case cs_check want's an address */
register
#endif
object y;
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

	}
	return(eql(x,y));
}

DEFUNO("EQUAL",object,fLequal,LISP
   ,2,2,NONE,OO,OO,OO,OO,Lequal,"")(x0,x1)
object x0,x1;
{
	/* 2 args */

	if (equal(x0, x1))
		x0 = Ct;
	else
		x0 = Cnil;
	vs_pop;
	RETURN1(x0);
}

bool
equalp(x, y)
object x, y;
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
		   if (! (*s_pos & (sizeof(object)-1)))
		    switch(s_type[i]){
		    case aet_lf:
		     if(STREF(longfloat,x,*s_pos) != STREF(longfloat,y,*s_pos))
			return(FALSE);
		      break;
		    case aet_sf:
		     if(STREF(shortfloat,x,*s_pos)!=STREF(shortfloat,y,*s_pos))
			return(FALSE);
		      break;
		    default:
		      if(STREF(int,x,*s_pos)!=STREF(int,y,*s_pos))
			return(FALSE);
		      break;}}
		return(TRUE);
	}}

	case t_pathname:
		return(equal(x, y));
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
				vs_pop;
				vs_pop;
				return(FALSE);
			}
		}
		vs_pop;
		vs_pop;
		return(TRUE);
	}
}

DEFUNO("EQUALP",object,fLequalp,LISP
   ,2,2,NONE,OO,OO,OO,OO,Lequalp,"")(x0,x1)
object x0,x1;
{
	/* 2 args */

	if (equalp(x0, x1))
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

Fand(args)
object args;
{
	object endp_temp;

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

For(args)
object args;
{
	object endp_temp;

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
contains_sharp_comma(x)
object x;
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

DEFUNO("CONTAINS-SHARP-COMMA",object,fScontains_sharp_comma,SI
   ,1,1,NONE,OO,OO,OO,OO,siLcontains_sharp_comma,"")(x0)
object x0;
{
	/* 1 args */

	if (contains_sharp_comma(x0))
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO("SPICEP",object,fSspicep  ,SI
   ,1,1,NONE,OO,OO,OO,OO,siLspicep  ,"")(x0)
object x0;
{
	/* 1 args */
	if (type_of(x0) == t_spice)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

DEFUNO("FIXNUMP",object,fSfixnump,SI
   ,1,1,NONE,OO,OO,OO,OO,siLfixnump,"")(x0)
object x0;
{
	/* 1 args */
	if (type_of(x0) == t_fixnum)
		x0 = Ct;
	else
		x0 = Cnil;
	RETURN1(x0);
}

init_predicate_function()
{

	make_special_form("AND",Fand);
	make_special_form("OR",For);



}
