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
	symbol.d
*/

#include <string.h>
#include "include.h"

object siSpname;

set_up_string_register(s)
char *s;
{
	string_register->st.st_fillp =
	string_register->st.st_dim = strlen(s);
	string_register->st.st_self = s;
}

object
make_symbol(st)
object st;
{
	object x;
	int i;
	{BEGIN_NO_INTERRUPT;	
	x = alloc_object(t_symbol);
	x->s.s_dbind = OBJNULL;
	x->s.s_sfdef = NOT_SPECIAL;
	x->s.s_fillp = st->st.st_fillp;
	x->s.s_self = NULL;
	x->s.s_gfdef = OBJNULL;
	x->s.s_plist = Cnil;
	x->s.s_hpack = Cnil;
	x->s.s_stype = (short)stp_ordinary;
	x->s.s_mflag = FALSE;
	vs_push(x);
	if (initflag==0 && st->st.st_self < heap_end)
		x->s.s_self = st->st.st_self;		
	else {
		x->s.s_self = alloc_relblock(x->s.s_fillp);
		for (i = 0;  i < x->s.s_fillp;  i++)
			x->s.s_self[i] = st->st.st_self[i];
	}
	END_NO_INTERRUPT;}	
	return(vs_pop);
}

/*
	Make_ordinary(s) makes an ordinary symbol from C string s
	and interns it in lisp package as an external symbol.
*/

#define P_EXTERNAL(x,j) ((x)->p.p_external[(j) % (x)->p.p_external_size])


object
make_ordinary(s)
char *s;
{
	int i, j;
	object x, l, *ep;
	vs_mark;

	set_up_string_register(s);
	j = pack_hash(string_register);
	ep = &P_EXTERNAL(lisp_package,j);
	for (l = *ep;  type_of(l) == t_cons;  l = l->c.c_cdr)
		if (string_eq(l->c.c_car, string_register))
			return(l->c.c_car);
	x = make_symbol(string_register);
	vs_push(x);
	x->s.s_hpack = lisp_package;
	*ep = make_cons(x, *ep);
	lisp_package->p.p_external_fp ++;
	vs_reset;
	return(x);
}

/*
	Make_special(s, v) makes a special variable from C string s
	with initial value v in lisp package.
*/
object
make_special(s, v)
char *s;
object v;
{
	object x;

	x = make_ordinary(s);
	x->s.s_stype = (short)stp_special;
	x->s.s_dbind = v;
	return(x);
}

/*
	Make_constant(s, v) makes a constant from C string s
	with constant value v in lisp package.
*/
object
make_constant(s, v)
char *s;
object v;
{
	object x;

	x = make_ordinary(s);
	x->s.s_stype = (short)stp_constant;
	x->s.s_dbind = v;
	return(x);
}

/*
	Make_si_ordinary(s) makes an ordinary symbol from C string s
	and interns it in system package as an external symbol.
	It assumes that the (only) package used by system is lisp.
*/



object
make_si_ordinary(s)
char *s;
{
	int i, j;
	object x, l, *ep;
	vs_mark;

	set_up_string_register(s);
	j = pack_hash(string_register);
	ep = & P_EXTERNAL(system_package,j);
	for (l = *ep;  type_of(l) == t_cons;  l = l->c.c_cdr)
		if (string_eq(l->c.c_car, string_register))
			return(l->c.c_car);
	for (l =  P_EXTERNAL(lisp_package,j);
	     type_of(l) == t_cons;
	     l = l->c.c_cdr)
		if (string_eq(l->c.c_car, string_register))
		    error("name conflict --- can't make_si_ordinary");
	x = make_symbol(string_register);
	vs_push(x);
	x->s.s_hpack = system_package;
	system_package->p.p_external_fp ++;
	*ep = make_cons(x, *ep);
	vs_reset;
	return(x);
}

/*
	Make_si_special(s, v) makes a special variable from C string s
	with initial value v in system package.
*/
object
make_si_special(s, v)
char *s;
object v;
{
	object x;

	x = make_si_ordinary(s);
	x->s.s_stype = (short)stp_special;
	x->s.s_dbind = v;
	return(x);
}

/*
	Make_si_constant(s, v) makes a constant from C string s
	with constant value v in system package.
*/
object
make_si_constant(s, v)
char *s;
object v;
{
	object x;

	x = make_si_ordinary(s);
	x->s.s_stype = (short)stp_constant;
	x->s.s_dbind = v;
	return(x);
}

/*
	Make_keyword(s) makes a keyword from C string s.
*/
object
make_keyword(s)
char *s;
{
	int i, j;
	object x, l, *ep;
	vs_mark;

	set_up_string_register(s);
	j = pack_hash(string_register);
	ep = &P_EXTERNAL(keyword_package,j);
	for (l = *ep;  type_of(l) == t_cons;  l = l->c.c_cdr)
		if (string_eq(l->c.c_car, string_register))
			return(l->c.c_car);
	x = make_symbol(string_register);
	vs_push(x);
	x->s.s_hpack = keyword_package;
	x->s.s_stype = (short)stp_constant;
	x->s.s_dbind = x;
	*ep = make_cons(x, *ep);
	keyword_package->p.p_external_fp ++;
	vs_reset;
	return(x);
}

object
symbol_value(s)
object s;
{
/*
	if (type_of(s) != t_symbol)
		FEinvalid_variable("~S is not a symbol.", s);
*/
	if (s->s.s_dbind == OBJNULL)
		FEunbound_variable(s);
	return(s->s.s_dbind);
}

object
getf(place, indicator, deflt)
object place, indicator, deflt;
{

	object l;
#define cendp(obj) ((type_of(obj)!=t_cons))
	for (l = place;  !cendp(l);  l = l->c.c_cdr->c.c_cdr) {
		if (cendp(l->c.c_cdr))
			break;
		if (l->c.c_car == indicator)
			return(l->c.c_cdr->c.c_car);
	}
	if(l==Cnil) return deflt;
	FEerror("Bad plist ~a",1,place);	
}

object
get(s, p, d)
object s, p;
{
	if (type_of(s) != t_symbol)
		not_a_symbol(s);
	return(getf(s->s.s_plist, p, d));
}

/*
	Putf(p, v, i) puts value v for property i to property list p
	and returns the resulting property list.
*/
object
putf(p, v, i)
object p, v, i;
{
	object endp_temp;

	object l, l0 = p;
	vs_mark;

	for (l = p;  !cendp(l);  l = l->c.c_cdr->c.c_cdr) {
		if (cendp(l->c.c_cdr))
			break;
		if (l->c.c_car == i) {
			l->c.c_cdr->c.c_car = v;
			return(p);
		}
	}
        if(l!=Cnil) FEerror("Bad plist ~a",1,p);
	l = make_cons(v, p);
	vs_push(l);
	l = make_cons(i, l);
	vs_reset;
	return(l);
}

object
putprop(s, v, p)
object s, v, p;
{
	if (type_of(s) != t_symbol)
		not_a_symbol(s);
	s->s.s_plist = putf(s->s.s_plist, v, p);
	return(v);
}


/* done in the right order for efficient setf.. */
object
sputprop(s, p, v)
object s, v, p;
{
	if (type_of(s) != t_symbol)
		not_a_symbol(s);
	s->s.s_plist = putf(s->s.s_plist, v, p);
	return(v);
}


/*
	Remf(p, i) removes property i
	from the property list pointed by p,
	which is a pointer to an object.
	The returned value of remf(p, i) is:

		TRUE	if the property existed
		FALSE	otherwise.
*/
bool
remf(p, i)
object *p, i;
{
	object endp_temp;

	object l0 = *p;

	for(;  !endp(*p);  p = &(*p)->c.c_cdr->c.c_cdr) {
		if (endp((*p)->c.c_cdr))
			odd_plist(l0);
		if ((*p)->c.c_car == i) {
			*p = (*p)->c.c_cdr->c.c_cdr;
			return(TRUE);
		}
	}
	return(FALSE);
}

object
remprop(s, p)
object s, p;
{
	if (type_of(s) != t_symbol)
		not_a_symbol(s);
	if (remf(&s->s.s_plist, p))
		return(Ct);
	else
		return(Cnil);
}

bool
keywordp(s)
object s;
{
	return(type_of(s) == t_symbol && s->s.s_hpack == keyword_package);
/*
	if (type_of(s) != t_symbol) {
		vs_push(s);
		check_type_symbol(&vs_head);
		vs_pop;
	}
	if (s->s.s_hpack == OBJNULL)
		return(FALSE);
	return(s->s.s_hpack == keyword_package);
*/
}

@(defun get (sym indicator &optional deflt)
@
	check_type_symbol(&sym);
	@(return `getf(sym->s.s_plist, indicator, deflt)`)
@)

Lremprop()
{
	check_arg(2);

	check_type_symbol(&vs_base[0]);
	if (remf(&vs_base[0]->s.s_plist, vs_base[1]))
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
	vs_pop;
}

Lsymbol_plist()
{
	check_arg(1);

	check_type_symbol(&vs_base[0]);
	vs_base[0] = vs_base[0]->s.s_plist;
}

@(defun getf (place indicator &optional deflt)
@
	@(return `getf(place, indicator, deflt)`)
@)

@(defun get_properties (place indicator_list)
	object l, m;
	object endp_temp;

@
	for (l = place;  !endp(l);  l = l->c.c_cdr->c.c_cdr) {
		if (endp(l->c.c_cdr))
			odd_plist(place);
		for (m = indicator_list;  !endp(m);  m = m->c.c_cdr)
			if (l->c.c_car == m->c.c_car)
				@(return `l->c.c_car`
					 `l->c.c_cdr->c.c_car`
					 l)
	}
	@(return Cnil Cnil Cnil)
@)


object
symbol_name(x)
object x;
{
object y;
 if (type_of(x)!=t_symbol) FEerror("Takes a symbol ~a",1,x);
  for (y=x->s.s_plist; type_of(y)==t_cons ; y=y->c.c_cdr->c.c_cdr)
   {if(y->c.c_car==siSpname) return(y->c.c_cdr->c.c_car);}
   {BEGIN_NO_INTERRUPT;		
    y = alloc_simple_string(x->s.s_fillp);
    vs_push(y);
   if (x->s.s_self < heap_end)
		y->st.st_self = x->s.s_self;
	else {int i;
		y->st.st_self = alloc_relblock(x->s.s_fillp);
		for (i = 0;  i < x->s.s_fillp;  i++)
			y->st.st_self[i] = x->s.s_self[i];
	}
   x->s.s_plist = putf(x->s.s_plist, y, siSpname);
	vs_pop;
   END_NO_INTERRUPT;	}	
    return(y);
}

Lsymbol_name()
{
	check_arg(1);
        vs_base[0]=symbol_name(vs_base[0]);
}

Lmake_symbol()
{
	check_arg(1);

	check_type_string(&vs_base[0]);
	vs_base[0] = make_symbol(vs_base[0]);
}

@(defun copy_symbol (sym &optional cp &aux x)
@
	check_type_symbol(&sym);
	x = make_symbol(sym);
	if (cp == Cnil)
		@(return x)
	x->s.s_stype = sym->s.s_stype;
	x->s.s_dbind = sym->s.s_dbind;
	x->s.s_mflag = sym->s.s_mflag;
	x->s.s_gfdef = sym->s.s_gfdef;
	x->s.s_plist = copy_list(sym->s.s_plist);
	@(return x)
@)

@(defun gensym (&optional (x gensym_prefix) &aux sym)
	int i, j;
@
	if (type_of(x) == t_string)
		gensym_prefix = x;
	else {
		check_type_non_negative_integer(&x);
		if (type_of(x) == t_fixnum)
			gensym_counter = fix(x);
		else
			gensym_counter = 0;
			/*  incorrect implementation  */
	}
	for (j = gensym_counter, i = 0;  j > 0;  j /= 10)
		i++;
	if (i == 0)
		i++;
	i += gensym_prefix->st.st_fillp;
	set_up_string_register("");
	sym = make_symbol(string_register);
	{BEGIN_NO_INTERRUPT;	
	sym->s.s_fillp = i;
	sym->s.s_self = alloc_relblock(i);
	for (j = 0;  j < gensym_prefix->st.st_fillp;  j++)
		sym->s.s_self[j] = gensym_prefix->st.st_self[j];
	if ((j = gensym_counter) == 0)
		sym->s.s_self[--i] = '0';
	else
		for (;  j > 0;  j /= 10)
			sym->s.s_self[--i] = j%10 + '0';
	gensym_counter++;
	END_NO_INTERRUPT;}	
	@(return sym)
@)

@(defun gentemp (&optional (prefix gentemp_prefix)
			   (pack `current_package()`)
		 &aux smbl)
	int i, j;
@
	check_type_string(&prefix);
	check_type_package(&pack);
/*
	gentemp_counter = 0;
*/
ONCE_MORE:
	for (j = gentemp_counter, i = 0;  j > 0;  j /= 10)
		i++;
	if (i == 0)
		i++;
	i += prefix->st.st_fillp;
	set_up_string_register("");
	{BEGIN_NO_INTERRUPT;	
	string_register->st.st_fillp = string_register->st.st_dim = i;
	string_register->st.st_self = alloc_relblock(i);
	for (j = 0;  j < prefix->st.st_fillp;  j++)
		string_register->st.st_self[j] = prefix->st.st_self[j];
	if ((j = gentemp_counter) == 0)
		string_register->st.st_self[--i] = '0';
	else
		for (;  j > 0;  j /= 10)
			string_register->st.st_self[--i] = j%10 + '0';
	gentemp_counter++;
	smbl = intern(string_register, pack);
	if (intern_flag != 0)
		goto ONCE_MORE;
	END_NO_INTERRUPT;}	
	@(return smbl)
@)

Lsymbol_package()
{
	check_arg(1);

	check_type_symbol(&vs_base[0]);
	vs_base[0] = vs_base[0]->s.s_hpack;
}

Lkeywordp()
{
	check_arg(1);

	if (type_of(vs_base[0]) == t_symbol && keywordp(vs_base[0]))
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
}

/*
	(SI:PUT-F plist value indicator)
	returns the new property list with value for property indicator.
	It will be used in SETF for GETF.
*/
siLput_f()
{
	check_arg(3);

	vs_base[0] = putf(vs_base[0], vs_base[1], vs_base[2]);
	vs_top = vs_base+1;
}

/*
	(SI:REM-F plist indicator) returns two values:

		* the new property list
		  in which property indcator is removed

		* T	if really removed
		  NIL	otherwise.

	It will be used for macro REMF.
*/
siLrem_f()
{
	check_arg(2);

	if (remf(&vs_base[0], vs_base[1]))
		vs_base[1] = Ct;
	else
		vs_base[1] = Cnil;
}

siLset_symbol_plist()
{
	check_arg(2);

	check_type_symbol(&vs_base[0]);
	vs_base[0]->s.s_plist = vs_base[1];
	vs_base[0] = vs_base[1];
	vs_pop;
}

siLputprop()
{
	check_arg(3);

	check_type_symbol(&vs_base[0]);
	vs_base[0]->s.s_plist
	= putf(vs_base[0]->s.s_plist, vs_base[1], vs_base[2]);
	vs_base[0] = vs_base[1];
	vs_top = vs_base+1;
}


odd_plist(place)
object place;
{
	FEerror("The length of the property-list ~S is odd.", 1, place);
}


init_symbol()
{
	string_register = alloc_simple_string(0);
	gensym_prefix = make_simple_string("G");
	gensym_counter = 0;
	gentemp_prefix = make_simple_string("T");
	gentemp_counter = 0;
	token = alloc_simple_string(INITIAL_TOKEN_LENGTH);
	token->st.st_fillp = 0;
	token->st.st_self = alloc_contblock(INITIAL_TOKEN_LENGTH);
	token->st.st_hasfillp = TRUE;
	token->st.st_adjustable = TRUE;

	enter_mark_origin(&string_register);
	enter_mark_origin(&gensym_prefix);
	enter_mark_origin(&gentemp_prefix);
	enter_mark_origin(&token);
}

init_symbol_function()
{
	make_function("GET", Lget);
	make_function("REMPROP", Lremprop);
	make_function("SYMBOL-PLIST", Lsymbol_plist);
	make_function("GETF", Lgetf);
	make_function("GET-PROPERTIES", Lget_properties);
	make_function("SYMBOL-NAME", Lsymbol_name);
	make_function("MAKE-SYMBOL", Lmake_symbol);
	make_function("COPY-SYMBOL", Lcopy_symbol);
	make_function("GENSYM", Lgensym);
	make_function("GENTEMP", Lgentemp);
	make_function("SYMBOL-PACKAGE", Lsymbol_package);
	make_function("KEYWORDP", Lkeywordp);

	make_si_function("PUT-F", siLput_f);
	make_si_function("REM-F", siLrem_f);
	make_si_function("SET-SYMBOL-PLIST", siLset_symbol_plist);

	make_si_function("PUTPROP", siLputprop);
	make_si_sfun("SPUTPROP",sputprop,3);


	siSpname = make_si_ordinary("PNAME");
	enter_mark_origin(&siSpname);
}
