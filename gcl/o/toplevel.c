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

	toplevel.c

	Top-Level Forms and Declarations
*/

#include "include.h"

object sLcompile, sLload, sLeval, sLcompile_tl, sLload_tl, sLexecute;
object sLprogn;


object sLwarn;

object sSAinhibit_macro_specialA;

object sLtypep;

static void
Fdefun(object args)
{

	object name;
	object body, form;

	if (endp(args) || endp(MMcdr(args)))
		FEtoo_few_argumentsF(args);
	if (MMcadr(args) != Cnil && type_of(MMcadr(args)) != t_cons)
		FEerror("~S is an illegal lambda-list.", 1, MMcadr(args));
	name = MMcar(args);
	if (type_of(name) != t_symbol)
		not_a_symbol(name);
	if (name->s.s_sfdef != NOT_SPECIAL) {
		if (name->s.s_mflag) {
			if (symbol_value(sSAinhibit_macro_specialA) != Cnil)
				name->s.s_sfdef = NOT_SPECIAL;
		} else if (symbol_value(sSAinhibit_macro_specialA) != Cnil)
		 FEerror("~S, a special form, cannot be redefined.", 1, name);
	}
	if (name->s.s_hpack == lisp_package &&
	    name->s.s_gfdef != OBJNULL && initflag) {
		vs_push(make_simple_string(
			"~S is being redefined."));
		ifuncall2(sLwarn, vs_head, name);
		vs_popp;
	}
	vs_base = vs_top;
	if (lex_env[0] == Cnil && lex_env[1] == Cnil && lex_env[2] == Cnil) {
		vs_push(MMcons(sLlambda_block, args));
	} else {
		vs_push(MMcons(lex_env[2], args));
		vs_base[0] = MMcons(lex_env[1], vs_base[0]);
		vs_base[0] = MMcons(lex_env[0], vs_base[0]);
		vs_base[0] = MMcons(sLlambda_block_closure, vs_base[0]);
	}
	{object fname =  clear_compiler_properties(name,vs_base[0]);
	 fname->s.s_gfdef = vs_base[0];
	 fname->s.s_mflag = FALSE;}
	vs_base[0] = name;
	for (body = MMcddr(args);  !endp(body);  body = body->c.c_cdr) {
		form = macro_expand(body->c.c_car);
		if (type_of(form) == t_string) {
			if (endp(body->c.c_cdr))
				break;
			vs_push(form);
			name->s.s_plist =
			putf(name->s.s_plist,
			     form,
			     sSfunction_documentation);
			vs_popp;
			break;
		}
		if (type_of(form) != t_cons || form->c.c_car != sLdeclare)
			break;
	}
}
	
static void
siLAmake_special(void)
{
	check_arg(1);
	check_type_symbol(&vs_base[0]);
	if ((enum stype)vs_base[0]->s.s_stype == stp_constant)
		FEerror("~S is a constant.", 1, vs_base[0]);
	vs_base[0]->s.s_stype = (short)stp_special;
}

static void
siLAmake_constant(void)
{
	check_arg(2);
	check_type_symbol(&vs_base[0]);
	if ((enum stype)vs_base[0]->s.s_stype == stp_special)
		FEerror(
		 "The argument ~S to DEFCONSTANT is a special variable.",
		 1, vs_base[0]);
	vs_base[0]->s.s_stype = (short)stp_constant;
	vs_base[0]->s.s_dbind = vs_base[1];
	vs_popp;
}

static void
Feval_when(object arg)
{

	object *base = vs_base;
	object ss;
	bool flag = FALSE;

	if(endp(arg))
		FEtoo_few_argumentsF(arg);
	for (ss = MMcar(arg);  !endp(ss);  ss = MMcdr(ss))
            if ( (MMcar(ss) == sLeval) || (MMcar(ss) == sLexecute) )
			flag = TRUE;
		else if ( MMcar(ss) != sLload && MMcar(ss) != sLcompile &&
                          MMcar(ss) != sLload_tl && MMcar(ss) != sLcompile_tl )
		 FEinvalid_form("~S is an undefined situation for EVAL-WHEN.",
				MMcar(ss));
	if(flag) {
		vs_push(make_cons(sLprogn, MMcdr(arg)));
		eval(vs_head);
	} else {
		vs_base = base;
		vs_top = base+1;
		vs_base[0] = Cnil;
	}
}

static void
Fdeclare(object arg)
{
	FEerror("DECLARE appeared in an invalid position.", 0);
}

static void
Flocally(object body)
{
	object *oldlex = lex_env;

	lex_copy();
	body = find_special(body, NULL, NULL);
	vs_push(body);
	Fprogn(body);
	lex_env = oldlex;
}

static void
Fthe(object args)
{

	object *vs;

	if(endp(args) || endp(MMcdr(args)))
		FEtoo_few_argumentsF(args);
	if(!endp(MMcddr(args)))
		FEtoo_many_argumentsF(args);
	eval(MMcadr(args));
	args = MMcar(args);
	if (type_of(args) == t_cons && MMcar(args) == sLvalues) {
		vs = vs_base;
		for (args=MMcdr(args); !endp(args); args=MMcdr(args), vs++){
			if (vs >= vs_top)
				FEerror("Too many return values.", 0);
			if (ifuncall2(sLtypep, *vs, MMcar(args)) == Cnil)
				FEwrong_type_argument(MMcar(args), *vs);
		}
		if (vs < vs_top)
			FEerror("Too few return values.", 0);
	} else {
		if (ifuncall2(sLtypep, vs_base[0], args) == Cnil)
			FEwrong_type_argument(args, vs_base[0]);
	}
}

DEF_ORDINARY("COMPILE",sLcompile,LISP,"");
DEF_ORDINARY("COMPILE-TOPLEVEL",sLcompile_tl,KEYWORD,"");
DEF_ORDINARY("DECLARE",sLdeclare,LISP,"");
DEF_ORDINARY("EVAL",sLeval,LISP,"");
DEF_ORDINARY("EXECUTE",sLexecute,KEYWORD,"");
DEF_ORDINARY("FUNCTION-DOCUMENTATION",sSfunction_documentation,SI,"");
DEF_ORDINARY("LOAD",sLload,LISP,"");
DEF_ORDINARY("LOAD-TOPLEVEL",sLload_tl,KEYWORD,"");
DEF_ORDINARY("PROGN",sLprogn,LISP,"");
DEF_ORDINARY("TYPEP",sLtypep,LISP,"");
DEF_ORDINARY("VALUES",sLvalues,LISP,"");
DEF_ORDINARY("VARIABLE-DOCUMENTATION",sSvariable_documentation,SI,"");
DEF_ORDINARY("WARN",sLwarn,LISP,"");

void
init_toplevel(void)
{
	make_special_form("DEFUN",Fdefun);
	make_si_function("*MAKE-SPECIAL", siLAmake_special);
	make_si_function("*MAKE-CONSTANT", siLAmake_constant);
	make_special_form("EVAL-WHEN", Feval_when);
	make_special_form("THE", Fthe);
	make_special_form("DECLARE",Fdeclare);
	make_special_form("LOCALLY",Flocally);


}
