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

	assignment.c

	Assignment
*/

#include "include.h"

static object
setf(object,object);

object sLsetf;

object sLget;
object sLgetf;
object sLaref;
object sLsvref;
object sLelt;
object sLchar;
object sLschar;
object sLfill_pointer;
object sLgethash;
object sLcar;
object sLcdr;

object sLpush;
object sLpop;
object sLincf;
object sLdecf;

object sSstructure_access;
object sSsetf_lambda;



object sSclear_compiler_properties;

object sLwarn;

object sSAinhibit_macro_specialA;

void
setq(object sym, object val)
{
	object vd;
	enum stype type;

	if(type_of(sym) != t_symbol)
		not_a_symbol(sym);
	type = (enum stype)sym->s.s_stype;
	if(type == stp_special)
		sym->s.s_dbind = val;
	else
	if (type == stp_constant)
		FEinvalid_variable("Cannot assign to the constant ~S.", sym);
	else {
		vd = lex_var_sch(sym);
		if(MMnull(vd) || endp(MMcdr(vd)))
			sym->s.s_dbind = val;
		else
			MMcadr(vd) = val;
	}
}

static void
Fsetq(object form)
{
	object ans;
	if (endp(form)) {
		vs_base = vs_top;
		vs_push(Cnil);
	} else {
		object *top = vs_top;
		do {
			vs_top = top;
			if (endp(MMcdr(form)))
			FEinvalid_form("No value for ~S.", form->c.c_car);
			setq(MMcar(form),ans=Ieval(MMcadr(form)));
			form = MMcddr(form);
		} while (!endp(form));
		top[0]=ans;
		vs_base=top;
		vs_top= top+1;
	}
}

static void
Fpsetq(object arg)
{
	object *old_top = vs_top;
	object *top;
	object argsv = arg;
	for (top = old_top;  !endp(arg);  arg = MMcddr(arg), top++) {
		if(endp(MMcdr(arg)))
			FEinvalid_form("No value for ~S.", arg->c.c_car);
		
		top[0] = Ieval(MMcadr(arg));
		vs_top = top + 1;
	}
	for (arg = argsv, top = old_top; !endp(arg); arg = MMcddr(arg), top++)
		setq(MMcar(arg),top[0]);
	vs_base = vs_top = old_top;
	vs_push(Cnil);
}

DEFUNO_NEW("SET",object,fLset,LISP
   ,2,2,NONE,OO,OO,OO,OO,void,Lset,(object symbol,object value),"")

{
	/* 2 args */
	if (type_of(symbol) != t_symbol)
		not_a_symbol(symbol);
	if ((enum stype)symbol->s.s_stype == stp_constant)
		FEinvalid_variable("Cannot assign to the constant ~S.",
				   symbol);
	symbol->s.s_dbind = value;
	RETURN1(value);
}

DEFUNO_NEW("FSET",object,fSfset,SI
   ,2,2,NONE,OO,OO,OO,OO,void,siLfset,(object sym,object function),"")

{
	/* 2 args */
	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if (sym->s.s_sfdef != NOT_SPECIAL) {
		if (sym->s.s_mflag) {
			if (symbol_value(sSAinhibit_macro_specialA) != Cnil)
				sym->s.s_sfdef = NOT_SPECIAL;
		} else if (symbol_value(sSAinhibit_macro_specialA) != Cnil)
			FEerror("~S, a special form, cannot be redefined.",
				1, sym);
	}
	sym = clear_compiler_properties(sym,function);
	if (sym->s.s_hpack == lisp_package &&
	    sym->s.s_gfdef != OBJNULL && initflag) {
		ifuncall2(sLwarn,make_simple_string("~S is being redefined."),
			 sym);
	}
	if (type_of(function) == t_cfun ||
	    type_of(function) == t_sfun ||
	    type_of(function) == t_vfun ||
	    type_of(function) == t_gfun ||
	    type_of(function) == t_cclosure||
	    type_of(function) == t_closure ||
	    type_of(function) == t_afun 
	    ) {
		sym->s.s_gfdef = function;
		sym->s.s_mflag = FALSE;
	} else if (car(function) == sLspecial)
		FEerror("Cannot define a special form.", 0);
	else if (function->c.c_car == sLmacro) {
		sym->s.s_gfdef = function->c.c_cdr;
		sym->s.s_mflag = TRUE;
	} else {
		sym->s.s_gfdef = function;
		sym->s.s_mflag = FALSE;
	}

	RETURN1(function);
}

static void
Fmultiple_value_setq(object form)
{
	object vars;
	int n, i;

	if (endp(form) || endp(form->c.c_cdr) ||
	    !endp(form->c.c_cdr->c.c_cdr))
	    FEinvalid_form("~S is an illegal argument to MULTIPLE-VALUE-SETQ",
			   form);
	vars = form->c.c_car;

	fcall.values[0]=Ieval(form->c.c_cdr->c.c_car);
	n = fcall.nvalues;
	
	for (i = 0;  !endp(vars);  i++, vars = vars->c.c_cdr)
		if (i < n)
			setq(vars->c.c_car, fcall.values[i]);
		else
			setq(vars->c.c_car, Cnil);
	vs_base[0]=fcall.values[0];
	vs_top = vs_base+1;
}

DEFUNO_NEW("MAKUNBOUND",object,fLmakunbound,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lmakunbound,(object sym),"")

{
	/* 1 args */
	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if ((enum stype)sym->s.s_stype == stp_constant)
		FEinvalid_variable("Cannot unbind the constant ~S.",
				   sym);
	sym->s.s_dbind = OBJNULL;
	RETURN1(sym);
}

object sStraced;

DEFUNO_NEW("FMAKUNBOUND",object,fLfmakunbound,LISP
   ,1,1,NONE,OO,OO,OO,OO,void,Lfmakunbound,(object sym),"")

{
	/* 1 args */
	if(type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if (sym->s.s_sfdef != NOT_SPECIAL) {
		if (sym->s.s_mflag) {
			if (symbol_value(sSAinhibit_macro_specialA) != Cnil)
				sym->s.s_sfdef = NOT_SPECIAL;
		} else if (symbol_value(sSAinhibit_macro_specialA) != Cnil)
			FEerror("~S, a special form, cannot be redefined.",
				1, sym);
	}
	remf(&(sym->s.s_plist),sStraced);
	clear_compiler_properties(sym,Cnil);
	if (sym->s.s_hpack == lisp_package &&
	    sym->s.s_gfdef != OBJNULL && initflag) {
		ifuncall2(sLwarn, make_simple_string(
			"~S is being redefined."), sym);
	}
	sym->s.s_gfdef = OBJNULL;
	sym->s.s_mflag = FALSE;
	RETURN1(sym);
}

static void
Fsetf(object form)
{
	object result,*t,*t1;
	if (endp(form)) {
		vs_base = vs_top;
		vs_push(Cnil);
	} else {
		object *top = vs_top;
		do {
			vs_top = top;
			if (endp(MMcdr(form)))
			FEinvalid_form("No value for ~S.", form->c.c_car);
			result = setf(MMcar(form), MMcadr(form));
			form = MMcddr(form);
		} while (!endp(form));
		t=vs_base;
		t1=vs_top;
		vs_top = vs_base = top;
		for (;t<t1;t++)
		  vs_push(*t);

	}
}

#define	eval_push(form)  \
{  \
	object *old_top = vs_top;  \
  \
	*old_top = Ieval(form);  \
	vs_top = old_top + 1;  \
}

static object
setf(object place, object form)
{
	object fun;
	object *vs = vs_top;
	void (*f)();
	object args;
	object x,result,y;
	int i;
/*  	extern void siLaset(void); */
/*  	extern void siLsvset(void); */
	extern void siLelt_set();
	extern void siLchar_set();
/*  	extern void siLfill_pointer_set(void); */
	extern void siLhash_set();

	if (type_of(place) != t_cons) {
		setq(place, result=Ieval(form));
		vs_top=vs_base+1;
		return result;
	}
	fun = place->c.c_car;
	if (type_of(fun) != t_symbol)
		goto OTHERWISE;
	args = place->c.c_cdr;
	if (fun == sLget) {
	  object sym,val;
	  sym = Ieval(car(args));
	  val = Ieval(form);
	  return (putprop(sym,val,Ieval(car(Mcdr(args))))); 
	}
	if (fun == sLgetf) 
	  Ieval(Mcaddr(args));
	if (fun == sLaref) { f = siLaset; goto EVAL; }
	if (fun == sLsvref) { f = siLsvset; goto EVAL; }
	if (fun == sLelt) { f = siLelt_set; goto EVAL; }
	if (fun == sLchar) { f = siLchar_set; goto EVAL; }
	if (fun == sLschar) { f = siLchar_set; goto EVAL; }
	if (fun == sLfill_pointer) { f = siLfill_pointer_set; goto EVAL; }
	if (fun == sLgethash) { f = siLhash_set; goto EVAL; }
	if (fun == sLcar) {
		x = Ieval(Mcar(args));
		result = Ieval(form);
		if (type_of(x) != t_cons)
			FEerror("~S is not a cons.", 1, x);
		Mcar(x) = result;
		return result;
	}
	if (fun == sLcdr) {
		x = Ieval(Mcar(args));
		result = Ieval(form);
		if (type_of(x) != t_cons)
			FEerror("~S is not a cons.", 1, x);
		Mcdr(x) = result;
		return result;
	}

	x = getf(fun->s.s_plist, sSstructure_access, Cnil);
	if (x == Cnil || type_of(x) != t_cons)
		goto OTHERWISE;
	if (getf(fun->s.s_plist, sSsetf_lambda, Cnil) == Cnil)
		goto OTHERWISE;
	if (type_of(x->c.c_cdr) != t_fixnum)
		goto OTHERWISE;
	i = fix(x->c.c_cdr);
/*
	if (i < 0)
		goto OTHERWISE;
*/
	x = x->c.c_car;
	y = Ieval(Mcar(args));
	result = Ieval(form);
	if (x == sLvector) {
		if (type_of(y) != t_vector || i >= y->v.v_fillp)
			goto OTHERWISE;
		y->v.v_self[i] = result;
	} else if (x == sLlist) {
		for (x = y;  i > 0;  --i)
			x = cdr(x);
		if (type_of(x) != t_cons)
			goto OTHERWISE;
		x->c.c_car = result;
	} else {
		structure_set(y, x, i, result);
	}
	return result;

EVAL:
	for (;  !endp(args);  args = args->c.c_cdr) {
		eval_push(args->c.c_car);
	}
	eval_push(form);
	vs_base = vs;
	(*f)();
	return vs_base[0];

OTHERWISE:
	vs_base = vs_top;
	vs_push(sLsetf);
	vs_push(place);
	vs_push(form);
	result=vs_top[-1];
	vs_push(Cnil);
	stack_cons();
	stack_cons();
	stack_cons();
/***/
#define VS_PUSH_ENV \
	if(lex_env[1]){ \
	  vs_push(list(3,lex_env[0],lex_env[1],lex_env[2]));} \
	else {vs_push(Cnil);}
        VS_PUSH_ENV ;
/***/
	if (!sLsetf->s.s_mflag || sLsetf->s.s_gfdef == OBJNULL)
		FEerror("Where is SETF?", 0);
	funcall(sLsetf->s.s_gfdef);
	return Ieval(vs_base[0]);
}

static void
Fpush(object form)
{
	object var;
	
	if (endp(form) || endp(MMcdr(form)))
		FEtoo_few_argumentsF(form);
	if (!endp(MMcddr(form)))
		FEtoo_many_argumentsF(form);
	var = MMcadr(form);
	if (type_of(var) != t_cons) {
		eval(MMcar(form));
		form = vs_base[0];
		eval(var);
		vs_base[0] = MMcons(form, vs_base[0]);
		setq(var, vs_base[0]);
		return;
	}
	vs_base = vs_top;
	vs_push(sLpush);
	vs_push(form);
	stack_cons();
/***/
         VS_PUSH_ENV ;
/***/
	if (!sLpush->s.s_mflag || sLpush->s.s_gfdef == OBJNULL)
		FEerror("Where is PUSH?", 0);
	funcall(sLpush->s.s_gfdef);
	eval(vs_base[0]);
}

static void
Fpop(object form)
{
	object var;

	if (endp(form))
		FEtoo_few_argumentsF(form);
	if (!endp(MMcdr(form)))
		FEtoo_many_argumentsF(form);
	var = MMcar(form);
	if (type_of(var) != t_cons) {
		eval(var);
		setq(var, cdr(vs_base[0]));
		vs_base[0] = car(vs_base[0]);
		return;
	}
	vs_base = vs_top;
	vs_push(sLpop);
	vs_push(form);
	stack_cons();
/***/
	VS_PUSH_ENV ;
/***/
	if (!sLpop->s.s_mflag || sLpop->s.s_gfdef == OBJNULL)
		FEerror("Where is POP?", 0);
	funcall(sLpop->s.s_gfdef);
	eval(vs_base[0]);
}

static void
Fincf(object form)
{
	object var;
	object one_plus(object x), number_plus(object x, object y);

	if (endp(form))
		FEtoo_few_argumentsF(form);
	if (!endp(MMcdr(form)) && !endp(MMcddr(form)))
		FEtoo_many_argumentsF(form);
	var = MMcar(form);
	if (type_of(var) != t_cons) {
		if (endp(MMcdr(form))) {
			eval(var);
			vs_base[0] = one_plus(vs_base[0]);
			setq(var, vs_base[0]);
			return;
		}
		eval(MMcadr(form));
		form = vs_base[0];
		eval(var);
		vs_base[0] = number_plus(vs_base[0], form);
		setq(var, vs_base[0]);
		return;
	}
	vs_base = vs_top;
	vs_push(sLincf);
	vs_push(form);
	stack_cons();
/***/
	VS_PUSH_ENV ;
/***/
	if (!sLincf->s.s_mflag || sLincf->s.s_gfdef == OBJNULL)
		FEerror("Where is INCF?", 0);
	funcall(sLincf->s.s_gfdef);
	eval(vs_base[0]);
}

static void
Fdecf(object form)
{
	object var;
	object one_minus(object x), number_minus(object x, object y);

	if (endp(form))
		FEtoo_few_argumentsF(form);
	if (!endp(MMcdr(form)) && !endp(MMcddr(form)))
		FEtoo_many_argumentsF(form);
	var = MMcar(form);
	if (type_of(var) != t_cons) {
		if (endp(MMcdr(form))) {
			eval(var);
			vs_base[0] = one_minus(vs_base[0]);
			setq(var, vs_base[0]);
			return;
		}
		eval(MMcadr(form));
		form = vs_base[0];
		eval(var);
		vs_base[0] = number_minus(vs_base[0], form);
		setq(var, vs_base[0]);
		return;
	}
	vs_base = vs_top;
	vs_push(sLdecf);
	vs_push(form);
	stack_cons();
/***/
	VS_PUSH_ENV ;
/***/
	if (!sLdecf->s.s_mflag || sLdecf->s.s_gfdef == OBJNULL)
		FEerror("Where is DECF?", 0);
	funcall(sLdecf->s.s_gfdef);
	eval(vs_base[0]);
}


object
clear_compiler_properties(object sym, object code)
{ object tem;
  VFUN_NARGS=2; fSuse_fast_links(Cnil,sym);
  tem = getf(sym->s.s_plist,sStraced,Cnil);
  if (sSAinhibit_macro_specialA && sSAinhibit_macro_specialA->s.s_dbind != Cnil)
    (void)ifuncall2(sSclear_compiler_properties, sym,code);
  if (tem != Cnil) return tem;
  return sym;
  
}

DEF_ORDINARY("CLEAR-COMPILER-PROPERTIES",sSclear_compiler_properties,SI,"");

DEFUN_NEW("CLEAR-COMPILER-PROPERTIES",object,fSclear_compiler_properties,SI
   ,2,2,NONE,OO,OO,OO,OO,(object x0,object x1),"")

{
	/* 2 args */
  RETURN1(Cnil);
}

DEF_ORDINARY("AREF",sLaref,LISP,"");
DEF_ORDINARY("CAR",sLcar,LISP,"");
DEF_ORDINARY("CDR",sLcdr,LISP,"");
DEF_ORDINARY("CHAR",sLchar,LISP,"");
DEF_ORDINARY("DECF",sLdecf,LISP,"");
DEF_ORDINARY("ELT",sLelt,LISP,"");
DEF_ORDINARY("FILL-POINTER",sLfill_pointer,LISP,"");
DEF_ORDINARY("GET",sLget,LISP,"");
DEF_ORDINARY("GETF",sLgetf,LISP,"");
DEF_ORDINARY("GETHASH",sLgethash,LISP,"");
DEF_ORDINARY("INCF",sLincf,LISP,"");
DEF_ORDINARY("POP",sLpop,LISP,"");
DEF_ORDINARY("PUSH",sLpush,LISP,"");
DEF_ORDINARY("SCHAR",sLschar,LISP,"");
DEF_ORDINARY("SETF",sLsetf,LISP,"");
DEF_ORDINARY("SETF-LAMBDA",sSsetf_lambda,SI,"");
DEF_ORDINARY("STRUCTURE-ACCESS",sSstructure_access,SI,"");
DEF_ORDINARY("SVREF",sLsvref,LISP,"");
DEF_ORDINARY("TRACED",sStraced,SI,"");
DEF_ORDINARY("VECTOR",sLvector,LISP,"");

void
gcl_init_assignment(void)
{
	make_special_form("SETQ", Fsetq);
	make_special_form("PSETQ", Fpsetq);
	make_special_form("MULTIPLE-VALUE-SETQ", Fmultiple_value_setq);
	make_special_form("SETF", Fsetf);
	make_special_form("PUSH", Fpush);
	make_special_form("POP", Fpop);
	make_special_form("INCF", Fincf);
	make_special_form("DECF", Fdecf);

}
