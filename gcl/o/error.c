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

	error.c

	Errors
*/

#include "include.h"
#include <varargs.h>
object siSuniversal_error_handler;

static object null_string;

object sSterminal_interrupt;

terminal_interrupt(correctable)
{
    signals_allowed = sig_normal; 
    ifuncall1(sSterminal_interrupt, correctable?Ct:Cnil);
}

object
ihs_function_name(x)
object x;
{
	object y;

	switch (type_of(x)) {
	case t_symbol:
		return(x);

	case t_cons:
		y = x->c.c_car;
		if (y == sLlambda)
			return(sLlambda);
		if (y == sLlambda_closure)
			return(sLlambda_closure);
		if (y == sLlambda_block || y == sSlambda_block_expanded) {
			x = x->c.c_cdr;
			if (type_of(x) != t_cons)
				return(sLlambda_block);
			return(x->c.c_car);
		}
		if (y == sLlambda_block_closure) {
			x = x->c.c_cdr;
			if (type_of(x) != t_cons)
				return(sLlambda_block_closure);
			x = x->c.c_cdr;
			if (type_of(x) != t_cons)
				return(sLlambda_block_closure);
			x = x->c.c_cdr;
			if (type_of(x) != t_cons)
				return(sLlambda_block_closure);
			x = x->c.c_cdr;
			if (type_of(x) != t_cons)
				return(sLlambda_block_closure);
			return(x->c.c_car);
		}
		/* a general special form */
		if (y->s.s_sfdef != NOT_SPECIAL)
		  return y;
		return(Cnil);

	case t_afun:
	case t_closure:
	case t_cfun:
        case t_sfun:
        case t_vfun:
        case t_cclosure:
        case t_gfun:

		return(x->cf.cf_name);

	default:
		return(Cnil);
	}
}

object
ihs_top_function_name(h)
	ihs_ptr h;
{
	object x;


	while (h >= ihs_org) {
		x = ihs_function_name(h->ihs_function);
		if (x != Cnil)
			return(x);
		h--;
	}
	return(Cnil);
}


call_error_handler()
{
	super_funcall(siSuniversal_error_handler);
}



object
Icall_error_handler(error_name,error_format_string,nfmt_args,va_alist)
int nfmt_args;
object error_name,error_format_string;
va_dcl
     /* n is the total number of args passed to this function */
{ object b[20];
  b[0]= error_name;
  b[1]= Cnil;  /* continue format */
  b[2] = ihs_top_function_name(ihs_top);
  b[3] = null_string;  /*continue format arg*/
  b[4] = error_format_string;
  {int i = 0;
   va_list ap;
   va_start(ap);
   while (i++ < nfmt_args)
     { b[i+4]= va_arg(ap,object);
     }
    va_end(ap);
  }
  return IapplyVector(sSuniversal_error_handler,nfmt_args+5,b);
}

DEFUNO("ERROR",object,fLerror,LISP
   ,1,F_ARG_LIMIT,NONE,OO,OO,OO,OO,Lerror,"")(fmt_string,va_alist)
object fmt_string;
va_dcl
{ int n = VFUN_NARGS;
  va_list ap;
  va_start(ap);
  RETURN1(Iapply_fun_n2(sSuniversal_error_handler,5,n-1,
			  sKerror,
			  Cnil,
			  ihs_top_function_name(ihs_top-1),
			  null_string,fmt_string,
		       &ap));
  va_end(ap);
}


DEFUNO("CERROR",object,fLcerror,LISP
   ,2,F_ARG_LIMIT,NONE,OO,OO,OO,OO,Lcerror,"")
     (continue_fmt_string,fmt_string,va_alist)
object continue_fmt_string,fmt_string;
va_dcl
{ int n = VFUN_NARGS;
  va_list ap;
  va_start(ap);
  RETURN1(Iapply_fun_n2(sSuniversal_error_handler,5,n-2,
			  sKerror,
			  Ct,
			  ihs_top_function_name(ihs_top-1),
		       continue_fmt_string,fmt_string,
		       &ap));
  va_end(ap);
}


void
FEerror(s, num, arg1, arg2, arg3, arg4)
char *s;
int num;
object arg1, arg2, arg3, arg4;
{  char *p = s;
  int last = 0;
  int count = 0;

  while (*p) {    if (*p=='~' && last != '~')
		    count ++;
		  last = *p ; p++;}
   VFUN_NARGS = (count == 0 ? 1 : (num > 50 ? count+1 : num+1));

  fLerror(make_simple_string(s),arg1,arg2,arg3,arg4);
  
}



FEwrong_type_argument(type, value)
object type, value;
{Icall_error_handler(sKwrong_type_argument,
		     make_simple_string("~S is not of type ~S."),
		     2,(value),(type));
}

FEtoo_few_arguments(base, top)
object *base, *top;
{    Icall_error_handler(sKtoo_few_arguments,
			 (make_simple_string("~S [or a callee] requires more than ~R argument~:p.")),
			 2,(ihs_top_function_name(ihs_top)),
			 (make_fixnum(top - base)));

}

FEtoo_few_argumentsF(args)
object args;
{Icall_error_handler(sKtoo_few_arguments,
		     make_simple_string("Too few arguments."),
		     2,(ihs_top_function_name(ihs_top)),
		     (args));
}

FEtoo_many_arguments(base, top)
object *base, *top;
{      Icall_error_handler(sKtoo_many_arguments,
			   (make_simple_string("~S [or a callee] requires less than ~R argument~:p.")),
			   2,(ihs_top_function_name(ihs_top)),(make_fixnum(top - base)));
}

FEtoo_many_argumentsF(args)
object args;
{
  Icall_error_handler(sKtoo_many_arguments,
		      make_simple_string("Too many arguments."),0);
}

FEinvalid_macro_call()
{Icall_error_handler(sKinvalid_form,
		     (make_simple_string("Invalid macro call to ~S.")),
		     1,(ihs_top_function_name(ihs_top)));
}

FEunexpected_keyword(key)
object key;
{	if (!keywordp(key))
		not_a_keyword(key);

  Icall_error_handler(sKunexpected_keyword,
		      make_simple_string("~S does not allow the keyword ~S."),
		      2,(ihs_top_function_name(ihs_top)),(key));
		     
}

FEinvalid_form(s, form)
char *s;
object form;
{Icall_error_handler(sKinvalid_form,make_simple_string(s),
		     1,(form));

}

FEunbound_variable(sym)
object sym;
{Icall_error_handler(sKunbound_variable,
		     make_simple_string("The variable ~S is unbound."),
		     1,(sym));
}

FEinvalid_variable(s, obj)
char *s;
object obj;
{Icall_error_handler(sKinvalid_variable,make_simple_string(s),
		     1,(obj));
}

FEundefined_function(fname)
object fname;
{Icall_error_handler(sKundefined_function,
		     make_simple_string("The function ~S is undefined."),
		     1,(fname));
}

FEinvalid_function(obj)
object obj;
{Icall_error_handler(sKinvalid_function,
		     make_simple_string("~S is invalid as a function."),
		     1,(obj));
		     
}


object
CEerror(error_str, cont_str, num, arg1, arg2, arg3, arg4)
char *error_str, *cont_str;
int num;
object arg1, arg2, arg3, arg4;
{
        VFUN_NARGS=num+2; 
        return fLcerror(make_simple_string(cont_str),
			make_simple_string(error_str),
			arg1,arg2,arg3,arg4);
}


/*
	Lisp interface to IHS
*/

ihs_ptr get_ihs_ptr(x)
object x;
{
	ihs_ptr p;

	if (type_of(x) != t_fixnum)
		goto ILLEGAL;
	p = ihs_org + fix(x);
	if (fix(x)==0) return p;
	if (ihs_org <= p && p <= ihs_top)
		return(p);
ILLEGAL:
	FEerror("~S is an illegal ihs index.", 1, x);
}

DEFUNO("IHS-TOP",object,fSihs_top,SI
   ,0,0,NONE,OO,OO,OO,OO,siLihs_top,"")()

{
	/* 0 args */
RETURN1(make_fixnum(ihs_top - ihs_org));
}

DEFUNO("IHS-FUN",object,fSihs_fun,SI
   ,1,1,NONE,OO,OO,OO,OO,siLihs_fun,"")(x0)
object x0;
{
	/* 1 args */
	x0 = get_ihs_ptr(x0)->ihs_function;
	RETURN1(x0);
}

DEFUNO("IHS-VS",object,fSihs_vs,SI
   ,1,1,NONE,OO,OO,OO,OO,siLihs_vs,"")(x0)
object x0;
{
	/* 1 args */
	x0 = make_fixnum(get_ihs_ptr(x0)->ihs_base - vs_org);
	RETURN1(x0);
}

frame_ptr get_frame_ptr(x)
object(x);
{
	frame_ptr p;

	if (type_of(x) != t_fixnum)
		goto ILLEGAL;
	p = frs_org + fix(x);
	if (fix(x)==0) return p;
	if (frs_org <= p && p <= frs_top)
		return(p);
ILLEGAL:
	FEerror("~S is an illegal frs index.", 1, x);
}

DEFUNO("FRS-TOP",object,fSfrs_top,SI
   ,0,0,NONE,OO,OO,OO,OO,siLfrs_top,"")()

{
	/* 0 args */
	RETURN1((make_fixnum(frs_top - frs_org)));
}

DEFUNO("FRS-VS",object,fSfrs_vs,SI
   ,1,1,NONE,OO,OO,OO,OO,siLfrs_vs,"")(x0)
object x0;
{
	/* 1 args */
	x0 = make_fixnum(get_frame_ptr(x0)->frs_lex - vs_org);
	RETURN1(x0);
}

DEFUNO("FRS-BDS",object,fSfrs_bds,SI
   ,1,1,NONE,OO,OO,OO,OO,siLfrs_bds,"")(x0)
object x0;
{
	/* 1 args */
	x0
	= make_fixnum(get_frame_ptr(x0)->frs_bds_top - bds_org);
	RETURN1(x0);
}

DEFUNO("FRS-CLASS",object,fSfrs_class,SI
   ,1,1,NONE,OO,OO,OO,OO,siLfrs_class,"")(x0)
object x0;
{
	enum fr_class c;

	/* 1 args */

	c = get_frame_ptr(x0)->frs_class;
	if (c == FRS_CATCH) x0 = sKcatch;
	else if (c == FRS_PROTECT) x0 = sKprotect;
	else if (c == FRS_CATCHALL) x0 = sKcatchall;
	else FEerror("Unknown frs class was detected.", 0);
	RETURN1(x0);
}

DEFUNO("FRS-TAG",object,fSfrs_tag,SI
   ,1,1,NONE,OO,OO,OO,OO,siLfrs_tag,"")(x0)
object x0;
{
	/* 1 args */
	x0 = get_frame_ptr(x0)->frs_val;
	RETURN1(x0);
}

DEFUNO("FRS-IHS",object,fSfrs_ihs,SI
   ,1,1,NONE,OO,OO,OO,OO,siLfrs_ihs,"")(x0)
object x0;
{
	/* 1 args */
	x0
	= make_fixnum(get_frame_ptr(x0)->frs_ihs - ihs_org);
	RETURN1(x0);
}

bds_ptr get_bds_ptr(x)
object(x);
{
	bds_ptr p;

	if (type_of(x) != t_fixnum)
		goto ILLEGAL;
	p = bds_org + fix(x);
	if (0 == fix(x)) return p;
	if (bds_org <= p && p <= bds_top)
		return(p);
ILLEGAL:
	FEerror("~S is an illegal bds index.", 1, x);
}

DEFUNO("BDS-TOP",object,fSbds_top,SI
   ,0,0,NONE,OO,OO,OO,OO,siLbds_top,"")()

{
	/* 0 args */
	RETURN1((make_fixnum(bds_top - bds_org)));
}

DEFUNO("BDS-VAR",object,fSbds_var,SI
   ,1,1,NONE,OO,OO,OO,OO,siLbds_var,"")(x0)
object x0;
{
	/* 1 args */
	x0 = get_bds_ptr(x0)->bds_sym;
	RETURN1(x0);
}

DEFUNO("BDS-VAL",object,fSbds_val,SI
   ,1,1,NONE,OO,OO,OO,OO,siLbds_val,"")(x0)
object x0;
{
	/* 1 args */
	x0 = get_bds_ptr(x0)->bds_val;
	RETURN1(x0);
}

object *get_vs_ptr(x)
object(x);
{
	object *p;

	if (type_of(x) != t_fixnum)
		goto ILLEGAL;
	p = vs_org + fix(x);
	if (vs_org <= p && p < vs_top)
		return(p);
ILLEGAL:
	FEerror("~S is an illegal vs index.", 1, x);
}

DEFUNO("VS-TOP",object,fSvs_top,SI
   ,0,0,NONE,OO,OO,OO,OO,siLvs_top,"")()
{
	object x;
	/* 0 args */
	x = (make_fixnum(vs_top - vs_org));
	RETURN1(x);
}

DEFUNO("VS",object,fSvs,SI
   ,1,1,NONE,OO,OO,OO,OO,siLvs,"")(x0)
object x0;
{
	/* 1 args */
	x0 = *get_vs_ptr(x0);
	RETURN1(x0);
}

DEFUNO("SCH-FRS-BASE",object,fSsch_frs_base,SI
   ,2,2,NONE,OO,OO,OO,OO,siLsch_frs_base,"") (x0,x1)
object x0,x1;
{
	frame_ptr x;
	ihs_ptr y;

	/* 2 args */
	y = get_ihs_ptr(x1);
	for (x = get_frame_ptr(x0);
	     x <= frs_top && x->frs_ihs < y; 
	     x++);
	if (x > frs_top) x0 = Cnil;
	else x0 = make_fixnum(x - frs_org);

	RETURN1(x0);
}

DEFUNO("INTERNAL-SUPER-GO",object,fSinternal_super_go,SI
   ,3,3,NONE,OO,OO,OO,OO,siLinternal_super_go,"")(tag,x1,x2)
object tag,x1,x2;
{
	frame_ptr fr;

	/* 3 args */

	fr = frs_sch(tag);
	if (fr == NULL)
		FEerror("The tag ~S is missing.", 1, tag);
	if (x2 == Cnil)
		tag = x1;
	else
		tag = MMcons(tag, x1);
	unwind(fr,tag);
	RETURN0 ;
}

DEF_ORDINARY("UNIVERSAL-ERROR-HANDLER",sSuniversal_error_handler,SI
	     ,"Redefined in lisp, this is the function called by the \
internal error handling mechanism. \
 Args:  (error-name correctable function-name \
   continue-format-string error-format-string \
   &rest args)");
DEFUNO("UNIVERSAL-ERROR-HANDLER",object,fSuniversal_error_handler,SI
   ,5,F_ARG_LIMIT,NONE,OO,OO,OO,OO,
       siLuniversal_error_handler,"")(x0,x1,x2,x3,error_fmt_string)
object x0,x1,x2,x3,error_fmt_string;
{
	int i;
	/* 5 args */
	for (i = 0;  i < error_fmt_string->st.st_fillp;  i++)
		putchar(error_fmt_string->st.st_self[i]);
	printf("\nLisp initialization failed.\n");
	exit(0);
	RETURN1(x0);
}

check_arg_failed(n)
int n;
{
  FEerror("Expected ~S args but received ~S args",2,
	 make_fixnum(n),make_fixnum(vs_top-vs_base));
}

too_few_arguments()
{
	FEtoo_few_arguments(vs_base, vs_top);
}

too_many_arguments()
{
	FEtoo_many_arguments(vs_base, vs_top);
}

ck_larg_at_least(n, x)
int n; object x;
{ 	object endp_temp;
	for(; n > 0; n--, x = x->c.c_cdr)
		if(endp(x))
		  FEerror("APPLY sended too few arguments to LAMBDA.", 0);
}

ck_larg_exactly(n, x)
int n; object x;
{ 	object endp_temp;
	for(; n > 0; n--, x = x->c.c_cdr)
		if(endp(x))
		  FEerror("APPLY sended too few arguments to LAMBDA.", 0);
	if(!endp(x)) FEerror("APPLY sended too many arguments to LAMBDA.", 0);
}

invalid_macro_call()
{
	FEinvalid_macro_call();
}

keyword_value_mismatch()
{
	FEerror("Keywords and values do not match.", 0);
}

not_a_keyword(x)
object x;
{
	FEerror("~S is not a keyword.", 1, x);
}

unexpected_keyword(key)
object key;
{
	FEunexpected_keyword(key);
}

object
wrong_type_argument(typ, obj)
object typ, obj;
{
	FEwrong_type_argument(typ, obj);
	/*  no return  */
}

illegal_declare(form)
{
	FEinvalid_form("~S is an illegal declaration form.", form);
}

not_a_string(obj)
object obj;
{ FEwrong_type_argument(sLstring,obj);
}

not_a_string_or_symbol(x)
     object x;
{
  FEerror("~S is not a string or symbol.", 1, x);
}

not_a_symbol(obj)
object obj;
{
	FEinvalid_variable("~S is not a symbol.", obj);
}

not_a_variable(obj)
object obj;
{
	FEinvalid_variable("~S is not a variable.", obj);
}

illegal_index(x, i)
object x, i;
{
	FEerror("~S is an illegal index to ~S.", 2, i, x);
}

void
check_socket(x)
object x;
{

 if (type_of(x) != t_stream || x->sm.sm_mode != smm_socket) 
   FEwrong_type_argument(sSsocket,x);
  
}

void
check_stream(strm)
object strm;
{
if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
}
object
LVerror(va_alist)
     va_dcl
{va_list ap;
 va_start(ap);
 fcall.fun= make_cfun(Lerror,Cnil,Cnil,0,0);
 fcalln_general(ap);
 va_end(ap);
 return Cnil;
}
     
int
vfun_wrong_number_of_args(x)
     object x;
{

  FEerror("Expected ~S args but received ~S args",2,
	 x,make_fixnum(VFUN_NARGS));
}


check_arg_range(n,m)
     int n,m;
{  if (VFUN_NARGS < n)
     Icall_error_handler(
			 sKtoo_few_arguments,
			 make_simple_string("Needed at least ~D args, but received ~d"),
			 2,make_fixnum(n),make_fixnum(VFUN_NARGS));
   else if (VFUN_NARGS > m)
          Icall_error_handler(
			 sKtoo_many_arguments,
			 make_simple_string("Needed no more than ~D args, but received ~d"),
			 2,make_fixnum(m),make_fixnum(VFUN_NARGS));
 }
			 
     
DEF_ORDINARY("TERMINAL-INTERRUPT",sSterminal_interrupt,SI,"");
DEF_ORDINARY("WRONG-TYPE-ARGUMENT",sKwrong_type_argument,KEYWORD,"");
DEF_ORDINARY("TOO-FEW-ARGUMENTS",sKtoo_few_arguments,KEYWORD,"");
DEF_ORDINARY("TOO-MANY-ARGUMENTS",sKtoo_many_arguments,KEYWORD,"");
DEF_ORDINARY("UNEXPECTED-KEYWORD",sKunexpected_keyword,KEYWORD,"");
DEF_ORDINARY("INVALID-FORM",sKinvalid_form,KEYWORD,"");
DEF_ORDINARY("UNBOUND-VARIABLE",sKunbound_variable,KEYWORD,"");
DEF_ORDINARY("INVALID-VARIABLE",sKinvalid_variable,KEYWORD,"");
DEF_ORDINARY("UNDEFINED-FUNCTION",sKundefined_function,KEYWORD,"");
DEF_ORDINARY("INVALID-FUNCTION",sKinvalid_function,KEYWORD,"");
DEF_ORDINARY("CATCH",sKcatch,KEYWORD,"");
DEF_ORDINARY("PROTECT",sKprotect,KEYWORD,"");
DEF_ORDINARY("CATCHALL",sKcatchall,KEYWORD,"");


init_error()
{
	make_function("ERROR", Lerror);
	make_function("CERROR", Lcerror);
	make_si_function("IHS-TOP", siLihs_top);







	null_string = make_simple_string("");
	enter_mark_origin(&null_string);



}
