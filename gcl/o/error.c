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

#include <stdlib.h>
#include "include.h"
object siSuniversal_error_handler;

static object null_string;

object sSterminal_interrupt;

void
terminal_interrupt(int correctable)
{
    signals_allowed = sig_normal; 
    ifuncall1(sSterminal_interrupt, correctable?Ct:Cnil);
}

static object
ihs_function_name(object x)
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

static object
ihs_top_function_name(ihs_ptr h)
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

/* static void */
/* call_error_handler(void) */
/* { */
/* 	super_funcall(siSuniversal_error_handler); */
/* } */



object
Icall_error_handler(object error_name,object error_format_string,int nfmt_args,...)
{ object b[20];
  b[0]= error_name;
  b[1]= Cnil;  /* continue format */
  b[2] = ihs_top_function_name(ihs_top);
  b[3] = null_string;  /*continue format arg*/
  b[4] = error_format_string;
  {int i = 0;
   va_list ap;
   va_start(ap,nfmt_args);
   while (i++ < nfmt_args)
     { b[i+4]= va_arg(ap,object);
     }
    va_end(ap);
  }
  return IapplyVector(sSuniversal_error_handler,nfmt_args+5,b);
}

static object
Icall_continue_error_handler(object error_name,object error_format_string,int nfmt_args,...)
{ object b[20];
  b[0]= error_name;
  b[1]= Ct;  /* continue format */
  b[2] = ihs_top_function_name(ihs_top);
  b[3] = null_string;  /*continue format arg*/
  b[4] = error_format_string;
  {int i = 0;
   va_list ap;
   va_start(ap,nfmt_args);
   while (i++ < nfmt_args)
     { b[i+4]= va_arg(ap,object);
     }
    va_end(ap);
  }
  return IapplyVector(sSuniversal_error_handler,nfmt_args+5,b);
}

DEFUNO_NEW("ERROR",object,fLerror,LISP
       ,1,F_ARG_LIMIT,NONE,OO,OO,OO,OO,void,Lerror,(object fmt_string,...),"")
{ int n = VFUN_NARGS,i=0;
  object b[F_ARG_LIMIT];
  va_list ap;

  b[0]=sKerror;
  b[1]=Cnil;
  b[2]=ihs_top_function_name(ihs_top-1);
  b[3]=null_string;
  b[4]=fmt_string;
  i=4;
  va_start(ap,fmt_string);
  while (--n)
    b[++i]=va_arg(ap,object);
  va_end(ap);
  RETURN1(IapplyVector(sSuniversal_error_handler,++i,b));
/*    RETURN1(Iapply_fun_n2(sSuniversal_error_handler,5,n-1, */
/*  			  sKerror, */
/*  			  Cnil, */
/*  			  ihs_top_function_name(ihs_top-1), */
/*  			  null_string,fmt_string, */
/*  		       &ap)); */
}

DEFUN_NEW("SPECIFIC-ERROR",object,fLspecific_error,LISP
       ,1,F_ARG_LIMIT,NONE,OO,OO,OO,OO,(object error_name,object fmt_string,...),"")
{ int n = VFUN_NARGS,i=0;
  object b[F_ARG_LIMIT];
  va_list ap;

  b[0]=error_name;
  b[1]=Cnil;
  b[2]=ihs_top_function_name(ihs_top-1);
  b[3]=null_string;
  b[4]=fmt_string;
  i=4;
  va_start(ap,fmt_string);
  n--;
  while (--n)
    b[++i]=va_arg(ap,object);
  va_end(ap);
  RETURN1(IapplyVector(sSuniversal_error_handler,++i,b));
}


DEFUN_NEW("SPECIFIC-CORRECTABLE-ERROR",object,fLspecific_correctable_error,LISP
       ,1,F_ARG_LIMIT,NONE,OO,OO,OO,OO,
       (object error_name,object fmt_string,...),"")
{ int n = VFUN_NARGS,i=0;
  object b[F_ARG_LIMIT];
  va_list ap;

  b[0]=error_name;
  b[1]=Ct;
  b[2]=ihs_top_function_name(ihs_top-1);
  b[3]=null_string;
  b[4]=fmt_string;
  i=4;
  va_start(ap,fmt_string);
  n--;
  while (--n)
    b[++i]=va_arg(ap,object);
  va_end(ap);
  RETURN1(IapplyVector(sSuniversal_error_handler,++i,b));
}


DEFUNO_NEW("CERROR",object,fLcerror,LISP
       ,2,F_ARG_LIMIT,NONE,OO,OO,OO,OO,void,Lcerror,(object continue_fmt_string,object fmt_string,...),"")
{ int n = VFUN_NARGS,i=0;
  object b[F_ARG_LIMIT];
  va_list ap;

  b[0]=sKerror;
  b[1]=Cnil;
  b[2]=ihs_top_function_name(ihs_top-1);
  b[3]=null_string;
  b[4]=fmt_string;
  i=4;
  n--;
  va_start(ap,fmt_string);
  while (--n)
    b[++i]=va_arg(ap,object);
  va_end(ap);
  RETURN1(IapplyVector(sSuniversal_error_handler,++i,b));
/*    RETURN1(Iapply_fun_n2(sSuniversal_error_handler,5,n-2, */
/*  			  sKerror, */
/*  			  Ct, */
/*  			  ihs_top_function_name(ihs_top-1), */
/*  		       continue_fmt_string,fmt_string, */
/*  		       &ap)); */
}


/*  void */
/*  FEerror(char *s, int num, object arg1, object arg2, object arg3, object arg4) */
void
FEerror(char *s,int num,...) 
{  
  char *p = s;
  int last = 0;
  int count = 0;
  int i;
  object arg1,arg2,arg3,arg4;
  va_list args;

  while (*p) {    if (*p=='~' && last != '~')
		    count ++;
		  last = *p ; p++;}
  VFUN_NARGS = (count == 0 ? 1 : (num > 50 ? count+1 : num+1));

  arg1=arg2=arg3=arg4=Cnil;
  i=VFUN_NARGS;
  va_start(args,num);
  if (i && --i)
    arg1=va_arg(args,object);
  if (i && --i)
    arg2=va_arg(args,object);
  if (i && --i)
    arg3=va_arg(args,object);
  if (i && --i)
    arg4=va_arg(args,object);
  va_end(args);

  fLerror(make_simple_string(s),arg1,arg2,arg3,arg4);
  
}


void
FEwrong_type_argument(object type, object value)
{Icall_error_handler(sKwrong_type_argument,
		     make_simple_string("~S is not of type ~S."),
		     2,(value),(type));
}

void
FEtoo_few_arguments(object *base, object *top)
{    Icall_error_handler(sKtoo_few_arguments,
			 (make_simple_string("~S [or a callee] requires more than ~R argument~:p.")),
			 2,(ihs_top_function_name(ihs_top)),
			 (make_fixnum(top - base)));

}

void
FEtoo_few_argumentsF(object args)
{Icall_error_handler(sKtoo_few_arguments,
		     make_simple_string("Too few arguments."),
		     2,(ihs_top_function_name(ihs_top)),
		     (args));
}

void
FEtoo_many_arguments(object *base, object *top)
{      Icall_error_handler(sKtoo_many_arguments,
			   (make_simple_string("~S [or a callee] requires less than ~R argument~:p.")),
			   2,(ihs_top_function_name(ihs_top)),(make_fixnum(top - base)));
}

void
FEtoo_many_argumentsF(object args)
{
  Icall_error_handler(sKtoo_many_arguments,
		      make_simple_string("Too many arguments."),0);
}

static void
FEinvalid_macro_call(void)
{Icall_error_handler(sKinvalid_form,
		     (make_simple_string("Invalid macro call to ~S.")),
		     1,(ihs_top_function_name(ihs_top)));
}

void
FEunexpected_keyword(object key)
{/* 	if (!keywordp(key)) */
/* 		not_a_keyword(key); */

  Icall_error_handler(sKunexpected_keyword,
		      make_simple_string("~S does not allow the keyword ~S."),
		      2,(ihs_top_function_name(ihs_top)),(key));
		     
}

void
FEinvalid_form(char *s, object form)
{Icall_error_handler(sKinvalid_form,make_simple_string(s),
		     1,(form));

}

void
FEunbound_variable(object sym)
{Icall_error_handler(sKunbound_variable,
		     make_simple_string("The variable ~S is unbound."),
		     1,(sym));
}

void
FEinvalid_variable(char *s, object obj)
{Icall_error_handler(sKinvalid_variable,make_simple_string(s),
		     1,(obj));
}

void
FEundefined_function(object fname)
{Icall_error_handler(sKundefined_function,
		     make_simple_string("The function ~S is undefined."),
		     1,(fname));
}

void
FEinvalid_function(object obj)
{Icall_error_handler(sKinvalid_function,
		     make_simple_string("~S is invalid as a function."),
		     1,(obj));
		     
}

void
FEpackage_error(object obj,const char *s)
{
  Icall_continue_error_handler(sKpackage_error,
			       make_simple_string("A package error occurred on ~S: ~S."),
			       2,(obj),make_simple_string(s));
}


object
CEerror(char *error_str, char *cont_str, int num, object arg1, object arg2, object arg3, object arg4)
{
        VFUN_NARGS=num+2; 
        return fLcerror(make_simple_string(cont_str),
			make_simple_string(error_str),
			arg1,arg2,arg3,arg4);
}


/*
	Lisp interface to IHS
*/

static ihs_ptr get_ihs_ptr(object x)
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
	return(NULL);
}

DEFUNO_NEW("IHS-TOP",object,fSihs_top,SI
       ,0,0,NONE,OO,OO,OO,OO,static void,siLihs_top,(void),"")

{
	/* 0 args */
RETURN1(make_fixnum(ihs_top - ihs_org));
}

DEFUN_NEW("IHS-FUN",object,fSihs_fun,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0 = get_ihs_ptr(x0)->ihs_function;
	RETURN1(x0);
}

DEFUN_NEW("IHS-VS",object,fSihs_vs,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0 = make_fixnum(get_ihs_ptr(x0)->ihs_base - vs_org);
	RETURN1(x0);
}

static frame_ptr get_frame_ptr(object x)
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
	return NULL;
}

DEFUN_NEW("FRS-TOP",object,fSfrs_top,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")

{
	/* 0 args */
	RETURN1((make_fixnum(frs_top - frs_org)));
}

DEFUN_NEW("FRS-VS",object,fSfrs_vs,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0 = make_fixnum(get_frame_ptr(x0)->frs_lex - vs_org);
	RETURN1(x0);
}

DEFUN_NEW("FRS-BDS",object,fSfrs_bds,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0
	= make_fixnum(get_frame_ptr(x0)->frs_bds_top - bds_org);
	RETURN1(x0);
}

DEFUN_NEW("FRS-CLASS",object,fSfrs_class,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
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

DEFUN_NEW("FRS-TAG",object,fSfrs_tag,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0 = get_frame_ptr(x0)->frs_val;
	RETURN1(x0);
}

DEFUN_NEW("FRS-IHS",object,fSfrs_ihs,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0
	= make_fixnum(get_frame_ptr(x0)->frs_ihs - ihs_org);
	RETURN1(x0);
}

static bds_ptr get_bds_ptr(object x)
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
	return NULL;
}

DEFUN_NEW("BDS-TOP",object,fSbds_top,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")

{
	/* 0 args */
	RETURN1((make_fixnum(bds_top - bds_org)));
}

DEFUN_NEW("BDS-VAR",object,fSbds_var,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0 = get_bds_ptr(x0)->bds_sym;
	RETURN1(x0);
}

DEFUN_NEW("BDS-VAL",object,fSbds_val,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0 = get_bds_ptr(x0)->bds_val;
	RETURN1(x0);
}

static object *get_vs_ptr(object x)
{
	object *p;

	if (type_of(x) != t_fixnum)
		goto ILLEGAL;
	p = vs_org + fix(x);
	if (vs_org <= p && p < vs_top)
		return(p);
ILLEGAL:
	FEerror("~S is an illegal vs index.", 1, x);
	return NULL;
}

DEFUN_NEW("VS-TOP",object,fSvs_top,SI
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	object x;
	/* 0 args */
	x = (make_fixnum(vs_top - vs_org));
	RETURN1(x);
}

DEFUN_NEW("VS",object,fSvs,SI
       ,1,1,NONE,OO,OO,OO,OO,(object x0),"")
{
	/* 1 args */
	x0 = *get_vs_ptr(x0);
	RETURN1(x0);
}

DEFUN_NEW("SCH-FRS-BASE",object,fSsch_frs_base,SI
       ,2,2,NONE,OO,OO,OO,OO,(object x0,object x1),"")
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

DEFUN_NEW("INTERNAL-SUPER-GO",object,fSinternal_super_go,SI
       ,3,3,NONE,OO,OO,OO,OO,(object tag,object x1,object x2),"")
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
DEFUN_NEW("UNIVERSAL-ERROR-HANDLER",object,fSuniversal_error_handler,SI
	   ,5,F_ARG_LIMIT,NONE,OO,OO,OO,OO,(object x0,object x1,object x2,object x3,object error_fmt_string),"")
{
	int i;
	/* 5 args */
	for (i = 0;  i < error_fmt_string->st.st_fillp;  i++)
		putchar(error_fmt_string->st.st_self[i]);
	printf("\nLisp initialization failed.\n");
	exit(0);
	RETURN1(x0);
}

void
check_arg_failed(int n)
{
  if (n<vs_top-vs_base)
    FEtoo_many_arguments(vs_base,vs_top);
  else
    FEtoo_few_arguments(vs_base,vs_top);
}

void
too_few_arguments(void)
{
	FEtoo_few_arguments(vs_base, vs_top);
}

void
too_many_arguments(void)
{
	FEtoo_many_arguments(vs_base, vs_top);
}

void
ck_larg_at_least(int n, object x) {
	for(; n > 0; n--, x = x->c.c_cdr)
		if(endp(x))
		  FEerror("APPLY sent too few arguments to LAMBDA.", 0);
}

void
ck_larg_exactly(int n, object x) {
	for(; n > 0; n--, x = x->c.c_cdr)
		if(endp(x))
		  FEerror("APPLY sent too few arguments to LAMBDA.", 0);
	if(!endp(x)) FEerror("APPLY sent too many arguments to LAMBDA.", 0);
}

void
invalid_macro_call(void)
{
	FEinvalid_macro_call();
}

/* static void */
/* keyword_value_mismatch(void) */
/* { */
/* 	FEerror("Keywords and values do not match.", 0); */
/* } */

/* static void */
/* not_a_keyword(object x) */
/* { */
/* 	FEunexpected_keyword(x); */
/* } */

/* static void */
/* unexpected_keyword(object key) */
/* { */
/* 	FEunexpected_keyword(key); */
/* } */

object
wrong_type_argument(object typ, object obj)
{
	FEwrong_type_argument(typ, obj);
	/*  no return  */
	return(Cnil);
}

void
illegal_declare(object form)
{
	FEinvalid_form("~S is an illegal declaration form.", form);
}

/* static void */
/* not_a_string(object obj) */
/* { FEwrong_type_argument(sLstring,obj); */
/* } */

void
not_a_string_or_symbol(object x)
{
  FEerror("~S is not a string or symbol.", 1, x);
}

void
not_a_symbol(object obj)
{
/* 	FEinvalid_variable("~S is not a symbol.", obj); */
	FEwrong_type_argument(sLsymbol,obj);
}

int
not_a_variable(object obj)
{
	FEinvalid_variable("~S is not a variable.", obj);
	return -1;
}

void
illegal_index(object x, object i)
{
	FEerror("~S is an illegal index to ~S.", 2, i, x);
}

void
check_socket(object x)
{

 if (type_of(x) != t_stream || x->sm.sm_mode != smm_socket) 
   FEwrong_type_argument(sSsocket,x);
  
}

void
check_stream(object strm)
{
if (type_of(strm) != t_stream)
			FEwrong_type_argument(sLstream, strm);
}

/* static object */
/* LVerror(object first,...) */
/* {va_list ap; */
/*  va_start(ap,first); */
/*  fcall.fun= make_cfun(Lerror,Cnil,Cnil,0,0); */
/*  fcalln_general(first,ap); */
/*  va_end(ap); */
/*  return Cnil; */
/* } */
     
void
vfun_wrong_number_of_args(object x)
{

  FEerror("Expected ~S args but received ~S args",2,
	 x,make_fixnum(VFUN_NARGS));
}


void
check_arg_range(int n, int m)
{  
  object x,x1;

  x=make_fixnum(n);
  x1=make_fixnum(VFUN_NARGS);
  if (VFUN_NARGS < n)
    Icall_error_handler(
			sKtoo_few_arguments,
			 make_simple_string("Needed at least ~D args, but received ~d"),
			 2,x,x1);
   else if (VFUN_NARGS > m)
          Icall_error_handler(
			 sKtoo_many_arguments,
			 make_simple_string("Needed no more than ~D args, but received ~d"),
			 2,x,x1);
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
DEF_ORDINARY("PACKAGE-ERROR",sKpackage_error,KEYWORD,"");
DEF_ORDINARY("CATCH",sKcatch,KEYWORD,"");
DEF_ORDINARY("PROTECT",sKprotect,KEYWORD,"");
DEF_ORDINARY("CATCHALL",sKcatchall,KEYWORD,"");


void
gcl_init_error(void)
{
	make_function("ERROR", Lerror);
	make_function("CERROR", Lcerror);
	make_si_function("IHS-TOP", siLihs_top);
	null_string = make_simple_string("");
	enter_mark_origin(&null_string);
}
