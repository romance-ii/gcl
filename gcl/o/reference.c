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

	reference.c

	Reference in Constants and Variables
*/

#include "include.h"

LFD(Lfboundp)(void)
{
	object sym;

	check_arg(1);
	sym = vs_base[0];
	if (type_of(sym) != t_symbol) {
	  if (setf_fn_form(sym)) {
	    vs_base[0]=get(MMcadr(sym),sSsetf_function,Cnil);
	    return;
	  } else
	    not_a_symbol(sym);
	}
	if (sym->s.s_sfdef != NOT_SPECIAL)
		vs_base[0] = Ct;
	else if (sym->s.s_gfdef == OBJNULL)
		vs_base[0]= Cnil;
	else
		vs_base[0]= Ct;
}
/* FIXME find out where this is called and if it needs to handle setf functions */
object
symbol_function(object sym)
{
/*
	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
*/
	if (sym->s.s_sfdef != NOT_SPECIAL || sym->s.s_mflag)
		FEinvalid_function(sym);
	if (sym->s.s_gfdef == OBJNULL)
		FEundefined_function(sym);
	return(sym->s.s_gfdef);
}

/*
	Symbol-function returns
                function-closure		for function
		(macro . function-closure)	for macros
		(special . address)		for special forms.
*/

static void
symbol_function_internal(int allow_setf) {
	object sym;

	check_arg(1);
	sym = vs_base[0];
	if (type_of(sym) != t_symbol) {
	  if (allow_setf && setf_fn_form(sym)) {
	    vs_base[0]=getf(MMcadr(sym)->s.s_plist,sSsetf_function,Cnil);
	    return;
	  } else
		not_a_symbol(sym);
	}
	if (sym->s.s_sfdef != NOT_SPECIAL) {
		vs_push(make_fixnum((long)(sym->s.s_sfdef)));
		vs_base[0] = sLspecial;
		stack_cons();
		return;
	}
	if (sym->s.s_gfdef==OBJNULL)
		FEundefined_function(sym);
	if (sym->s.s_mflag) {
		vs_push(sym->s.s_gfdef);
		vs_base[0] = sLmacro;
		stack_cons();
		return;
	}
	vs_base[0] = sym->s.s_gfdef;
}


LFD(Lsymbol_function)(void)
{
  symbol_function_internal(0);
}
/* FIXME add setf expander for fdefinition */

LFD(Lfdefinition)(void) {

  symbol_function_internal(1);

}  

static void
FFN(Fquote)(object form)
{

	if (endp(form))
		FEtoo_few_argumentsF(form);
	if (!endp(MMcdr(form)))
		FEtoo_many_argumentsF(form);
	vs_base = vs_top;
	vs_push(MMcar(form));
}

static void
FFN(Ffunction)(object form)
{

	object fun;
	object fd;
	if (endp(form))
		FEtoo_few_argumentsF(form);
	if (!endp(MMcdr(form)))
		FEtoo_many_argumentsF(form);
	fun = MMcar(form);
 AGAIN:
	if (type_of(fun) == t_symbol) {
		fd = lex_fd_sch(fun);
		if (MMnull(fd) || MMcadr(fd) != sLfunction)
			if (fun->s.s_gfdef == OBJNULL || fun->s.s_mflag)
				FEundefined_function(fun);
			else {
				vs_base = vs_top;
				vs_push(fun->s.s_gfdef);
			}
		else {
			vs_base = vs_top;
			vs_push(MMcaddr(fd));
		}
	} else if (consp(fun) && MMcar(fun) == sLlambda) {
		vs_base = vs_top;
		vs_push(MMcdr(fun));
		vs_base[0] = MMcons(lex_env[2], vs_base[0]);
		vs_base[0] = MMcons(lex_env[1], vs_base[0]);
		vs_base[0] = MMcons(lex_env[0], vs_base[0]);
		vs_base[0] = MMcons(sLlambda_closure, vs_base[0]);
		{
		  object x=alloc_object(t_ifun);
		  x->ifn.ifn_self=vs_base[0];
		  vs_base[0]=x;
		}
	} else if (setf_fn_form(fun)) {
	        fun=get(MMcadr(fun),sSsetf_function,Cnil);
		if (fun==Cnil)
		  FEundefined_function(fun);
		else if (type_of(fun)==t_symbol)
		  goto AGAIN;
		else vs_base[0]=fun;
	} else
		FEinvalid_function(fun);
}

LFD(Lsymbol_value)(void)
{
	object sym;
	check_arg(1);
	sym = vs_base[0];
	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if (sym->s.s_dbind == OBJNULL)
	  FEunbound_variable(sym);
	else
	  vs_base[0] = sym->s.s_dbind;

}

LFD(Lboundp)(void)
{
	object sym;
	check_arg(1);
	sym=vs_base[0];
	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if (sym->s.s_dbind == OBJNULL)
		vs_base[0] = Cnil;
	else
		vs_base[0] = Ct;
}

LFD(Lmacro_function)(void)
{
	if (vs_top-vs_base<1 || vs_top-vs_base>2)
	  check_arg_failed(1);
	if (type_of(vs_base[0]) != t_symbol)
		not_a_symbol(vs_base[0]);
	if (vs_base[0]->s.s_gfdef != OBJNULL && vs_base[0]->s.s_mflag)
		vs_base[0] = vs_base[0]->s.s_gfdef;
	else
		vs_base[0] = Cnil;
}

LFD(Lspecial_form_p)(void)
{
	check_arg(1);
	if (type_of(vs_base[0]) != t_symbol)
		not_a_symbol(vs_base[0]);
	if (vs_base[0]->s.s_sfdef != NOT_SPECIAL)
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
}

DEFUNO_NEW("LEXICAL-BINDING-ENVIRONMENT",object,fSlexical_binding_environment,SI
	   ,0,0,NONE,OO,OO,OO,OO,void,siLlexical_binding_environment,(void),"") {

  RETURN1(lex_env[0]);

}

DEFUNO_NEW("INTERPRETED-FUNCTION-LAMBDA",object,fSinterpreted_function_lambda,SI
   ,1,1,NONE,OO,OO,OO,OO,void,siLinterpreted_function_lambda,(object x),"")

{

  if (type_of(x)!=t_ifun)
    TYPE_ERROR(x,siLinterpreted_function);
  return x->ifn.ifn_self;

}


void
gcl_init_reference(void)
{
	make_function("SYMBOL-FUNCTION", Lsymbol_function);
	make_function("FDEFINITION", Lfdefinition);
	make_function("FBOUNDP", Lfboundp);
	sLquote=make_special_form("QUOTE", Fquote);
	sLfunction = make_special_form("FUNCTION", Ffunction);
	make_function("SYMBOL-VALUE", Lsymbol_value);
	make_function("BOUNDP", Lboundp);
	make_function("MACRO-FUNCTION", Lmacro_function);
	make_function("SPECIAL-FORM-P", Lspecial_form_p);
	make_function("SPECIAL-OPERATOR-P", Lspecial_form_p);
}

