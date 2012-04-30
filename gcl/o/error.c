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

/* static object null_string; */

object sSterminal_interrupt;

void
assert_error(const char *a,unsigned l,const char *f,const char *n) {

  if (initflag)
    FEerror("The assertion ~a on line ~a of ~a in function ~a failed",4,
	    make_simple_string(a),make_fixnum(l),
	    make_simple_string(f),make_simple_string(n));
  else {
    fprintf(stderr,"The assertion %s on line %d of %s in function %s failed",a,l,f,n);
    exit(-1);
  }

}

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

	/* case t_ifun: */
	/*   x=x->ifn.ifn_self; */
	/*   /\*pass through*\/ */
	case t_cons:
		y = x->c.c_car;
		if (y == sLlambda)
			return(sLlambda);
		if (y == sLlambda_closure)
			return(sLlambda_closure);
		if (y == sLlambda_block || y == sSlambda_block_expanded) {
			x = x->c.c_cdr;
			if (!consp(x))
				return(sLlambda_block);
			return(x->c.c_car);
		}
		if (y == sLlambda_block_closure) {
			x = x->c.c_cdr;
			if (!consp(x))
				return(sLlambda_block_closure);
			x = x->c.c_cdr;
			if (!consp(x))
				return(sLlambda_block_closure);
			x = x->c.c_cdr;
			if (!consp(x))
				return(sLlambda_block_closure);
			x = x->c.c_cdr;
			if (!consp(x))
				return(sLlambda_block_closure);
			return(x->c.c_car);
		}
		/* a general special form */
		if (y->s.s_sfdef != NOT_SPECIAL)
		  return y;
		return(Cnil);

	/* case t_cfun: */

	/* 	return(x->cf.cf_name); */

        case t_function:

		return(Cnil);

	default:
		return(Cnil);
	}
}

object
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

object
Icall_gen_error_handler(object ci,object cs,object en,object es,ufixnum n,...) { 

  object *b;
  ufixnum i;
  va_list ap;

  n+=5;
  b=ZALLOCA(n*sizeof(*b));
  b[0]= en;
  b[1]= ci; 
  b[2] = ihs_top_function_name(ihs_top);
  b[3] = cs;
  b[4] = es;
   
  va_start(ap,n);
  for (i=5;i<n;i++)
    b[i]= va_arg(ap,object);
  va_end(ap);

  return funcall_vec(sSuniversal_error_handler,n,b);

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

DEFUN("IHS-TOP",object,fSihs_top,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {
  fixnum i=ihs_top-ihs_org;
  for (;i>=0 && type_of(ihs_org[i].ihs_function)==t_function && 
	 ihs_org[i].ihs_function->fun.fun_self==FFN(fSihs_top);i--);
  RETURN1(make_fixnum(i));
}

DEFUN("IHS-FUN",object,fSihs_fun,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0 = get_ihs_ptr(x0)->ihs_function;
  RETURN1(x0);
}

DEFUN("IHS-VS",object,fSihs_vs,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0 = make_fixnum(get_ihs_ptr(x0)->ihs_base - vs_org);
  RETURN1(x0);
}

static frame_ptr get_frame_ptr(object x) {

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

DEFUN("FRS-TOP",object,fSfrs_top,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {
  RETURN1((make_fixnum(frs_top - frs_org)));
}

DEFUN("FRS-VS",object,fSfrs_vs,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0 = make_fixnum(get_frame_ptr(x0)->frs_lex - vs_org);
  RETURN1(x0);
}

DEFUN("FRS-BDS",object,fSfrs_bds,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0=make_fixnum(get_frame_ptr(x0)->frs_bds_top - bds_org);
  RETURN1(x0);
}

DEFUN("FRS-CLASS",object,fSfrs_class,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {

  enum fr_class c;

  c = get_frame_ptr(x0)->frs_class;
  if (c == FRS_CATCH) x0 = sKcatch;
  else if (c == FRS_PROTECT) x0 = sKprotect;
  else if (c == FRS_CATCHALL) x0 = sKcatchall;
  else FEerror("Unknown frs class was detected.", 0);
  RETURN1(x0);

}

DEFUN("FRS-TAG",object,fSfrs_tag,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0 = get_frame_ptr(x0)->frs_val;
  RETURN1(x0);
}

DEFUN("FRS-IHS",object,fSfrs_ihs,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0=make_fixnum(get_frame_ptr(x0)->frs_ihs - ihs_org);
  RETURN1(x0);
}

static bds_ptr get_bds_ptr(object x) {

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

DEFUN("BDS-TOP",object,fSbds_top,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {
  RETURN1((make_fixnum(bds_top - bds_org)));
}

DEFUN("BDS-VAR",object,fSbds_var,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0 = get_bds_ptr(x0)->bds_sym;
  RETURN1(x0);
}

DEFUN("BDS-VAL",object,fSbds_val,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0 = get_bds_ptr(x0)->bds_val;
  RETURN1(x0);
}

static object *get_vs_ptr(object x) {

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

DEFUN("VS-TOP",object,fSvs_top,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {
  object x;
  x = (make_fixnum(vs_top - vs_org));
  RETURN1(x);
}

DEFUN("VS",object,fSvs,SI,1,1,NONE,OO,OO,OO,OO,(object x0),"") {
  x0 = *get_vs_ptr(x0);
  RETURN1(x0);
}

DEFUN("SCH-FRS-BASE",object,fSsch_frs_base,SI,2,2,NONE,OO,OO,OO,OO,(object x0,object x1),"") {

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

DEFUNM("INTERNAL-SUPER-GO",object,fSinternal_super_go,SI,3,3,NONE,OO,OO,OO,OO,(object tag,object x1,object x2),"") {
  frame_ptr fr;
  fixnum vals=(fixnum)fcall.valp;
  
  fr = frs_sch(tag);
  if (fr == NULL)
    FEerror("The tag ~S is missing.", 1, tag);
  if (x2 == Cnil)
    tag = x1;
  else
    tag = MMcons(tag, x1);
  unwind(fr,tag);
  RETURN0;

}

DEF_ORDINARY("UNIVERSAL-ERROR-HANDLER",sSuniversal_error_handler,SI
	     ,"Redefined in lisp, this is the function called by the \
               internal error handling mechanism. \
               Args:  (error-name correctable function-name \
                       continue-format-string error-format-string \
                       &rest args)");
DEFUN("UNIVERSAL-ERROR-HANDLER",object,fSuniversal_error_handler,SI
	   ,1,F_ARG_LIMIT,NONE,OO,OO,OO,OO,
	  (object x0,object x1,object x2,object x3,object x4,
	   object error_fmt_string,...),"") {

  va_list ap;
  object z,l,f;
  ufixnum n;

  /* 5 args */
  princ(x0,Cnil);
  putchar(' ');
  princ(x1,Cnil);
  putchar(' ');
  princ(x2,Cnil);
  putchar(' ');
  princ(x3,Cnil);
  putchar(' ');
  princ(x4,Cnil);
  putchar(' ');
  princ(error_fmt_string,Cnil);
  putchar(' ');
  va_start(ap,error_fmt_string);
  for (n=VFUN_NARGS,l=Cnil,f=OBJNULL;(z=NEXT_ARG(n,ap,l,f,(object)0));)
    princ(z,Cnil);
  flush_stream(symbol_value(sLAstandard_outputA));
  va_end(ap);
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


void
check_arg_range(fixnum nargs,int n, int m) {  
  
  if (nargs < n)
    FEwrong_no_args("Need at least ~D argument(s).",make_fixnum(n));
  else if (nargs > m)
    FEwrong_no_args("Need no more than ~D argument(s).",make_fixnum(m));

 }
			 
     
DEF_ORDINARY("TERMINAL-INTERRUPT",sSterminal_interrupt,SI,"");
DEF_ORDINARY("WRONG-TYPE-ARGUMENT",sKwrong_type_argument,KEYWORD,"");
DEF_ORDINARY("CONTROL-ERROR",sKcontrol_error,KEYWORD,"");
DEF_ORDINARY("PROGRAM-ERROR",sKprogram_error,KEYWORD,"");
DEF_ORDINARY("TOO-FEW-ARGUMENTS",sKtoo_few_arguments,KEYWORD,"");
DEF_ORDINARY("TOO-MANY-ARGUMENTS",sKtoo_many_arguments,KEYWORD,"");
DEF_ORDINARY("UNEXPECTED-KEYWORD",sKunexpected_keyword,KEYWORD,"");
DEF_ORDINARY("INVALID-FORM",sKinvalid_form,KEYWORD,"");
DEF_ORDINARY("UNBOUND-VARIABLE",sKunbound_variable,KEYWORD,"");
DEF_ORDINARY("INVALID-VARIABLE",sKinvalid_variable,KEYWORD,"");
DEF_ORDINARY("UNDEFINED-FUNCTION",sKundefined_function,KEYWORD,"");
DEF_ORDINARY("INVALID-FUNCTION",sKinvalid_function,KEYWORD,"");
DEF_ORDINARY("PACKAGE-ERROR",sKpackage_error,KEYWORD,"");
DEF_ORDINARY("PARSE-ERROR",sKparse_error,KEYWORD,"");
DEF_ORDINARY("READER-ERROR",sKreader_error,KEYWORD,"");
DEF_ORDINARY("CATCH",sKcatch,KEYWORD,"");
DEF_ORDINARY("PROTECT",sKprotect,KEYWORD,"");
DEF_ORDINARY("CATCHALL",sKcatchall,KEYWORD,"");


void
gcl_init_error(void)
{
/* 	make_function("ERROR", Lerror); */
/* 	make_function("CERROR", Lcerror); */
/* 	make_si_function("IHS-TOP", siLihs_top); */
	null_string = make_simple_string("");
	enter_mark_origin(&null_string);
}
