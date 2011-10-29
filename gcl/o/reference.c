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

DEFUN_NEW("CFUN-CALL",object,fScfun_call,SI,1,1,NONE,OO,OO,OO,OO,(object fun),"") {
  if (!functionp(fun))
    TYPE_ERROR(fun,sLfunction);
  RETURN1(fun->cf.cf_call);
}

DEFUN_NEW("SET-CFUN-CALL",object,fSset_cfun_call,SI,2,2,NONE,OO,OO,OO,OO,(object call,object fun),"") {
  if (!functionp(fun))
    TYPE_ERROR(fun,sLfunction);
  RETURN1(fun->cf.cf_call=call);
}


DEFUN_NEW("FBOUNDP-SYM",object,fSfboundp_sym,SI,1,1,NONE,OO,OO,OO,OO,(object sym),"") {

  if (type_of(sym) != t_symbol) {
    not_a_symbol(sym);
    RETURN1(Cnil);
  }
  RETURN1(sym->s.s_sfdef!=NOT_SPECIAL || sym->s.s_gfdef ? Ct : Cnil);

}

/* DEFUN_NEW("FBOUNDP-CONS",object,fSfboundp_cons,SI,1,1,NONE,OO,OO,OO,OO,(object sym),"") { */

/*   if (!setf_fn_form(sym)) { */
/*     not_a_symbol(sym);/\*FIXME*\/ */
/*     RETURN1(Cnil); */
/*   } */
/*   RETURN1(get(MMcadr(sym),sSsetf_function,Cnil)==Cnil ? Cnil : Ct); */

/* } */


DEFUN_NEW("FBOUNDP",object,fLfboundp,LISP,1,1,NONE,OO,OO,OO,OO,(object sym),"") {

  if (type_of(sym) != t_symbol)
    sym=ifuncall1(sSfunid_to_sym,sym);
  RETURN1(FFN(fSfboundp_sym)(sym));
/*   else */
/*     RETURN1(FFN(fSfboundp_cons)(sym)); */

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

static object
symbol_function_internal(object sym,int allow_setf) {

  if (allow_setf && type_of(sym)!=t_symbol)
    sym=ifuncall1(sSfunid_to_sym,sym);

  if (type_of(sym)!=t_symbol) {
    
    not_a_symbol(sym);
    return Cnil;

  }

  if (sym->s.s_sfdef != NOT_SPECIAL)
    return make_cons(sLspecial,make_fixnum((long)(sym->s.s_sfdef)));
  
  if (sym->s.s_gfdef==OBJNULL)
    FEundefined_function(sym);
  
  if (sym->s.s_mflag)
    return make_cons(sLmacro,sym->s.s_gfdef);
  
  return sym->s.s_gfdef;
  
}


DEFUN_NEW("SYMBOL-FUNCTION",object,fLsymbol_function,LISP,1,1,NONE,OO,OO,OO,OO,(object sym),"") {

  RETURN1(symbol_function_internal(sym,0));

}
/* FIXME add setf expander for fdefinition */

DEFUN_NEW("FDEFINITION",object,fLfdefinition,LISP,1,1,NONE,OO,OO,OO,OO,(object sym),"") {

  RETURN1(symbol_function_internal(sym,1));

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
		  x->ifn.ifn_name=x->ifn.ifn_call=Cnil;
		  vs_base[0]=x;
		}
	} else {
	        fun=ifuncall1(sSfunid_to_sym,fun);
/* 		if (fun==Cnil) */
/* 		  FEundefined_function(sff); */
		goto AGAIN;
	}
}

DEFUN_NEW("SYMBOL-VALUE",object,fLsymbol_value,LISP,1,1,NONE,OO,OO,OO,OO,(object sym),"") {

  if (type_of(sym) != t_symbol)
    not_a_symbol(sym);
  if (sym->s.s_dbind == OBJNULL)
    FEunbound_variable(sym);
  else
    RETURN1(sym->s.s_dbind);
  RETURN1(Cnil);
}

DEFUN_NEW("BOUNDP",object,fLboundp,LISP,1,1,NONE,OO,OO,OO,OO,(object sym),"") {

  if (type_of(sym) != t_symbol)
    not_a_symbol(sym);
  RETURN1(sym->s.s_dbind == OBJNULL ? Cnil : Ct);

}

/* DEFUN_NEW("MACRO-FUNCTION",object,fLmacro_function,SI,1,2,NONE,OO,OO,OO,OO,(object x,...),"") { */

/*   object  */

LFD(Lmacro_function)(void) {

  object envir;
  object *lex=lex_env;
  object buf[3];
  int n;

  n=vs_top-vs_base;

  if (n== 1) {
    buf[0]=sLnil;
    buf[1]=sLnil;
    buf[2]=sLnil;
  } else if (n==2) {
    envir=vs_base[1];
    buf[0]=car(envir);
    envir=Mcdr(envir);
    buf[1]=car(envir);
    envir=Mcdr(envir);
    buf[2]=car(envir);
  }
  else
    check_arg_range(n,1,2);

  lex_env = buf;
  
  if (type_of(vs_base[0]) != t_symbol)
    not_a_symbol(vs_base[0]);

  vs_base[0]=macro_def_int(vs_base[0]);
  vs_top=vs_base+1;
  lex_env = lex;

}

LFD(Lspecial_operator_p)(void)
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

  RETURN1(list(3,lex_env[0],lex_env[1],lex_env[2]));

}

DEFUN_NEW("LEX-ENV",object,fSlex_env,SI,0,0,NONE,OI,OO,OO,OO,(fixnum i),"") {

  RETURN1(i>=0 && i<=3 ? lex_env[i] : Cnil);

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
/* 	make_function("SYMBOL-FUNCTION", Lsymbol_function); */
/* 	make_function("FDEFINITION", Lfdefinition); */
/* 	make_function("FBOUNDP", Lfboundp); */
	sLquote=make_special_form("QUOTE", Fquote);
	sLfunction = make_special_form("FUNCTION", Ffunction);
/* 	make_function("SYMBOL-VALUE", Lsymbol_value); */
/* 	make_function("BOUNDP", Lboundp); */
	make_function("MACRO-FUNCTION", Lmacro_function);
	/* make_function("SPECIAL-FORM-P", Lspecial_form_p); */
	make_function("SPECIAL-OPERATOR-P", Lspecial_operator_p);
}

