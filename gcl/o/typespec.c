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
	typespec.c

	type specifier routines
*/

#define NEED_MP_H
#include "include.h"




/* object sLkeyword; */


/* void */
/* check_type_integer(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_fixnum && t != t_bignum) */
/* 		*p = wrong_type_argument(sLinteger, *p); */
/* } */

/* void */
/* check_type_non_negative_integer(object *p) */
/* { */
/* 	enum type t; */

/* 	for (;;) { */
/* 		t = type_of(*p); */
/* 		if (t == t_fixnum) { */
/* 			if (fix((*p)) >= 0) */
/* 				break; */
/* 		} else if (t == t_bignum) { */
/* 			if (big_sign((*p)) >= 0) */
/* 				break; */
/* 		} */
/* 		*p = wrong_type_argument(TSnon_negative_integer, *p); */
/* 	} */
/* } */

/* void */
/* check_type_rational(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_fixnum && */
/* 	       t != t_bignum && t != t_ratio) */
/* 		*p = wrong_type_argument(sLrational, *p); */
/* } */

/* void */
/* check_type_float(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_shortfloat && t != t_longfloat) */
/* 		*p = wrong_type_argument(sLfloat, *p); */
/* } */





/* static void */
/* check_type_or_integer_float(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_fixnum && t != t_bignum && */
/* 	       t != t_shortfloat && t != t_longfloat) */
/* 		*p = wrong_type_argument(TSor_integer_float, *p); */
/* } */





/* void */
/* check_type_or_rational_float(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_fixnum && t != t_bignum && */
/* 	       t != t_ratio && t != t_shortfloat && t != t_longfloat) */
/* 		*p = wrong_type_argument(TSor_rational_float, *p); */
/* } */

/* void */
/* check_type_number(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_fixnum && t != t_bignum && */
/* 	       t != t_ratio && t != t_shortfloat && t != t_longfloat && */
/* 	       t != t_complex) */
/* 		*p = wrong_type_argument(sLnumber, *p); */
/* } */





/* static void */
/* check_type_bit(object *p) */
/* { */
/* 	while (type_of(*p) != t_fixnum || */
/* 	       (fix((*p)) != 0 && fix((*p)) != 1)) */
/* 		*p = wrong_type_argument(sLbit, *p); */
/* } */




/* void */
/* check_type_character(object *p) */
/* { */
/* 	while (type_of(*p) != t_character) */
/* 		*p = wrong_type_argument(sLcharacter, *p); */
/* } */

/* void */
/* check_type_symbol(object *p) */
/* { */
/* 	while (type_of(*p) != t_symbol) */
/* 		*p = wrong_type_argument(sLsymbol, *p); */
/* } */

/* void */
/* check_type_or_symbol_string(object *p) */
/* { */
/* 	while (type_of(*p) != t_symbol && type_of(*p) != t_string) */
/* 		*p = wrong_type_argument(TSor_symbol_string, *p); */
/* } */

/* void */
/* check_type_or_string_symbol(object *p) */
/* { */
/* 	while (type_of(*p) != t_symbol && type_of(*p) != t_string) */
/* 		*p = wrong_type_argument(TSor_string_symbol, *p); */
/* } */





/* static void */
/* check_type_or_symbol_string_package(object *p) */
/* { */
/* 	while (type_of(*p) != t_symbol && */
/* 	       type_of(*p) != t_string && */
/* 	       type_of(*p) != t_package) */
/* 		*p = wrong_type_argument(TSor_symbol_string_package, */
/*  					   *p); */
/* } */





/* void */
/* check_type_package(object *p) */
/* { */
/* 	while (type_of(*p) != t_package) */
/* 		*p = wrong_type_argument(sLpackage, *p); */
/* } */

/* void */
/* check_type_string(object *p) */
/* { */
/* 	while (type_of(*p) != t_string) */
/* 		*p = wrong_type_argument(sLstring, *p); */
/* } */





/* static void */
/* check_type_bit_vector(object *p) */
/* { */
/* 	while (type_of(*p) != t_bitvector) */
/* 		*p = wrong_type_argument(sLbit_vector, *p); */
/* } */





/* void */
/* check_type_cons(object *p) */
/* { */
/* 	while (!consp(*p)) */
/* 		*p = wrong_type_argument(sLcons, *p); */
/* } */

/* void */
/* check_type_stream(object *p) */
/* { */
/* 	while (type_of(*p) != t_stream) */
/* 		*p = wrong_type_argument(sLstream, *p); */
/* } */

/* /\* Thankfully we can do this bit of non-lispy c stuff since we pass by reference. FIXME*\/ */
/* void */
/* check_type_readtable_no_default(object *p) { */
  
/*   if (type_of(*p) != t_readtable) */
/*     *p = wrong_type_argument(sLreadtable, *p); */

/* } */

/* void */
/* check_type_readtable(object *p) { */
  
/*   if (*p==Cnil) */
/*     *p=standard_readtable; */
/*   check_type_readtable_no_default(p); */

/* } */

/* #ifdef UNIX */
/* void */
/* check_type_or_Pathname_string_symbol(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_pathname && */
/* 	       t != t_string && t != t_symbol) */
/* 		*p = wrong_type_argument( */
/* 			TSor_pathname_string_symbol, *p); */
/* } */
/* #endif */

/* void */
/* check_type_or_pathname_string_symbol_stream(object *p) */
/* { */
/* 	enum type t; */

/* 	while ((t = type_of(*p)) != t_pathname && */
/* 	       t != t_string && t != t_symbol && t != t_stream) */
/* 		*p = wrong_type_argument( */
/* 			TSor_pathname_string_symbol_stream, *p); */
/* } */

/* void */
/* check_type_random_state(object *p) */
/* { */
/* 	while (type_of(*p) != t_random) */
/* 		*p = wrong_type_argument(sLrandom_state, *p); */
/* } */

/* void */
/* check_type_hash_table(object *p) */
/* { */
/* 	while (type_of(*p) != t_hashtable) */
/* 		*p = wrong_type_argument(sLhash_table, *p); */
/* } */

/* void */
/* check_type_array(object *p) */
/* { */
/* BEGIN: */
/* 	switch (type_of(*p)) { */
/* 	case t_array: */
/* 	case t_vector: */
/* 	case t_string: */
/* 	case t_bitvector: */
/* 		return; */

/* 	default: */
/* 		*p = wrong_type_argument(sLarray, *p); */
/* 		goto BEGIN; */
/* 	} */
/* } */




/* static void */
/* check_type_vector(object *p) */
/* { */
/* BEGIN: */
/* 	switch (type_of(*p)) { */
/* 	case t_vector: */
/* 	case t_string: */
/* 	case t_bitvector: */
/* 		return; */

/* 	default: */
/* 		*p = wrong_type_argument(sLvector, *p); */
/* 		goto BEGIN; */
/* 	} */
/* } */

enum type t_vtype;
int vtypep_fn(object x) {return type_of(x)==t_vtype;}

void
Check_type(object *x,int (*p)(object),object n) {

  object s1,s2;

  s1=make_simple_string("Supply a new value");
  s2=make_simple_string("~S is not of type ~S.");
  for (;!p(*x);*x=Ieval1(read_object(sLAstandard_inputA->s.s_dbind)))
    Icall_continue_error_handler(s1,sKwrong_type_argument,s2,2,*p,n);

}

/* void */
/* check_type(object x, int t) */
/* {if (type_of(x) !=t) */
/*    FEerror("~s is not a ~a",2, */
/* 	   x,make_simple_string(tm_table[t].tm_name +1)); */
/* } */
   

DEF_ORDINARY("PROCLAIMED-ARG-TYPES",sSproclaimed_arg_types,SI,"");
DEF_ORDINARY("PROCLAIMED-RETURN-TYPE",sSproclaimed_return_type,SI,"");
DEF_ORDINARY("PROCLAIMED-FUNCTION",sSproclaimed_function,SI,"");

DEFUN_NEW("TYPE-OF-C",object,siLtype_of_c,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  fixnum i;
  
  switch (type_of(x)) {
  case t_fixnum:
    i=fix(x);
    RETURN1(!i || i==1 ? sLbit : (i>0 ? sLnon_negative_fixnum : sLfixnum));
    break;

  case t_bignum:
    x = big_sign(x)<0 ? sLbignum : sLnon_negative_bignum;
    break;
    
  case t_ratio:
    x = sLratio;
    break;
    
  case t_shortfloat:
    x = sLshort_float;
    break;
    
  case t_longfloat:
    x = sLlong_float;
    break;
    
  case t_complex:
    x = sLcomplex;
    break;
    
  case t_character:
    if (char_font(x) != 0
	|| char_bits(x) != 0)
      x = sLcharacter;
    else {
      i = char_code(x);
      if ((' ' <= i && i < '\177') || i == '\n')
	x = sLstandard_char;
      else
	x = sLbase_char;
    }
    break;
    
  case t_symbol:
    if (x==Cnil)
      x = sLnull;
    else if (x==Ct)
      x=sLboolean;
    else if (x->s.s_hpack == keyword_package)
      x = sLkeyword;
    else
      x = sLsymbol;
    break;
    
  case t_package:
    x = sLpackage;
    break;
    
  case t_cons:
    x = sLcons;
    break;
    
  case t_hashtable:
    x = sLhash_table;
    break;
    
  case t_array:
    x = sLarray;
    break;
    
  case t_vector:
    x = sLvector;
    break;
    
  case t_string:
    x = sLstring;
    break;
    
  case t_bitvector:
    x = sLbit_vector;
    break;
    
  case t_structure:
    
    x = S_DATA(x->str.str_def)->name;
    break;
    
  case t_stream:
#ifdef ANSI_COMMON_LISP
    if ((x->sm.sm_mode == smm_input) ||
	(x->sm.sm_mode == smm_output) ||
	(x->sm.sm_mode == smm_probe) ||
	(x->sm.sm_mode == smm_io))
      x = sLfile_stream;
    else if ((x->sm.sm_mode == smm_string_input) ||
	  (x->sm.sm_mode == smm_string_output))
	x = sLstring_stream;
    else if (x->sm.sm_mode == smm_synonym)
      x = sLsynonym_stream;
    else if (x->sm.sm_mode == smm_broadcast)
      x = sLbroadcast_stream;
    else if (x->sm.sm_mode == smm_concatenated)
      x = sLconcatenated_stream;
    else if (x->sm.sm_mode == smm_two_way)
      x = sLtwo_way_stream;
    else if (x->sm.sm_mode == smm_echo)
      x = sLecho_stream;
    else 
#ifdef USER_DEFINED_STREAMS
    if (x->sm.sm_mode == (int)smm_user_defined)
      x= x->sm.sm_object1->str.str_self[8];
    else
#endif
#endif
      x = sLstream;
    break;
    
  case t_readtable:
    x = sLreadtable;
    break;
    
  case t_pathname:
    if (pathname_lookup(x->pn.pn_host,sSApathname_logicalA->s.s_dbind)!=Cnil)
      x = sLlogical_pathname;
    else
      x = sLpathname;
    break;
    
  case t_random:
    x = sLrandom_state;
    break;
    
  case t_function:	
  case t_cfun:
    x = sLcompiled_function;
    break;
    
  case t_ifun:
    x=siLinterpreted_function;
    break;
    
  default:
    error("not a lisp data object");
  }
  RETURN1(x);
}

DEF_ORDINARY("IN-CALL",sSin_call,SI,"");
DEF_ORDINARY("OUT-CALL",sSout_call,SI,"");
DEFVAR("*PROFILING*",sSAprofilingA,SI,sLnil,"");
DEF_ORDINARY("FLOOR",sLfloor,LISP,"");
DEF_ORDINARY("CEILING",sLceiling,LISP,"");
DEF_ORDINARY("TRUNCATE",sLtruncate,LISP,"");
DEF_ORDINARY("EXP",sLexp,LISP,"");
DEF_ORDINARY("/",sLD,LISP,"");
DEF_ORDINARY("COMMON",sLcommon,LISP,"");
DEF_ORDINARY("NULL",sLnull,LISP,"");
DEF_ORDINARY("CONS",sLcons,LISP,"");
DEF_ORDINARY("LIST",sLlist,LISP,"");
DEF_ORDINARY("PROPER-LIST",siLproper_list,SI,"");
DEF_ORDINARY("SYMBOL",sLsymbol,LISP,"");
DEF_ORDINARY("ARRAY",sLarray,LISP,"");
DEF_ORDINARY("VECTOR",sLvector,LISP,"");
DEF_ORDINARY("BIT-VECTOR",sLbit_vector,LISP,"");
DEF_ORDINARY("STRING",sLstring,LISP,"");
DEF_ORDINARY("SEQUENCE",sLsequence,LISP,"");
DEF_ORDINARY("SIMPLE-ARRAY",sLsimple_array,LISP,"");
DEF_ORDINARY("SIMPLE-VECTOR",sLsimple_vector,LISP,"");
DEF_ORDINARY("SIMPLE-BIT-VECTOR",sLsimple_bit_vector,LISP,"");
DEF_ORDINARY("SIMPLE-STRING",sLsimple_string,LISP,"");
DEF_ORDINARY("FUNCTION",sLfunction,LISP,"");
DEF_ORDINARY("FUNCTION-IDENTIFIER",sLfunction_identifier,LISP,"");
DEF_ORDINARY("COMPILED-FUNCTION",sLcompiled_function,LISP,"");
DEF_ORDINARY("INTERPRETED-FUNCTION",siLinterpreted_function,SI,"");
DEF_ORDINARY("PATHNAME",sLpathname,LISP,"");
DEF_ORDINARY("CHARACTER",sLcharacter,LISP,"");
DEF_ORDINARY("NUMBER",sLnumber,LISP,"");
DEF_ORDINARY("RATIONAL",sLrational,LISP,"");
DEF_ORDINARY("REAL",sLreal,LISP,"");
DEF_ORDINARY("FLOAT",sLfloat,LISP,"");
DEF_ORDINARY("INTEGER",sLinteger,LISP,"");
DEF_ORDINARY("RATIO",sLratio,LISP,"");
DEF_ORDINARY("SHORT-FLOAT",sLshort_float,LISP,"");
DEF_ORDINARY("STANDARD-CHAR",sLstandard_char,LISP,"");
DEF_ORDINARY("BOOLEAN",sLboolean,LISP,"");

DEF_ORDINARY("SEQIND",sLseqind,LISP,"");
DEF_ORDINARY("RNKIND",sLrnkind,LISP,"");

DEF_ORDINARY("CHAR",sLchar,LISP,"");
DEF_ORDINARY("NON-NEGATIVE-CHAR",sLnon_negative_char,LISP,"");
DEF_ORDINARY("NEGATIVE-CHAR",sLnegative_char,LISP,"");
DEF_ORDINARY("SIGNED-CHAR",sLsigned_char,LISP,"");
DEF_ORDINARY("UNSIGNED-CHAR",sLunsigned_char,LISP,"");

DEF_ORDINARY("SHORT",sLshort,LISP,"");
DEF_ORDINARY("NON-NEGATIVE-SHORT",sLnon_negative_short,LISP,"");
DEF_ORDINARY("NEGATIVE-SHORT",sLnegative_short,LISP,"");
DEF_ORDINARY("SIGNED-SHORT",sLsigned_short,LISP,"");
DEF_ORDINARY("UNSIGNED-SHORT",sLunsigned_short,LISP,"");

DEF_ORDINARY("NON-NEGATIVE-INT",sLnon_negative_int,LISP,"");
DEF_ORDINARY("NEGATIVE-INT",sLnegative_int,LISP,"");
DEF_ORDINARY("SIGNED-INT",sLsigned_int,LISP,"");
DEF_ORDINARY("UNSIGNED-INT",sLunsigned_int,LISP,"");

DEF_ORDINARY("FIXNUM",sLfixnum,LISP,"");
DEF_ORDINARY("NON-NEGATIVE-FIXNUM",sLnon_negative_fixnum,LISP,"");
DEF_ORDINARY("NEGATIVE-FIXNUM",sLnegative_fixnum,LISP,"");
DEF_ORDINARY("NON-NEGATIVE-BIGNUM",sLnon_negative_bignum,LISP,"");
DEF_ORDINARY("NEGATIVE-BIGNUM",sLnegative_bignum,LISP,"");
DEF_ORDINARY("SIGNED-FIXNUM",sLsigned_fixnum,LISP,"");
DEF_ORDINARY("UNSIGNED-FIXNUM",sLunsigned_fixnum,LISP,"");

DEF_ORDINARY("LFIXNUM",sLlfixnum,LISP,"");
DEF_ORDINARY("NON-NEGATIVE-LFIXNUM",sLnon_negative_lfixnum,LISP,"");
DEF_ORDINARY("NEGATIVE-LFIXNUM",sLnegative_lfixnum,LISP,"");
DEF_ORDINARY("SIGNED-LFIXNUM",sLsigned_lfixnum,LISP,"");
DEF_ORDINARY("UNSIGNED-LFIXNUM",sLunsigned_lfixnum,LISP,"");

DEF_ORDINARY("COMPLEX",sLcomplex,LISP,"");
DEF_ORDINARY("SINGLE-FLOAT",sLsingle_float,LISP,"");
DEF_ORDINARY("PACKAGE",sLpackage,LISP,"");
DEF_ORDINARY("BIGNUM",sLbignum,LISP,"");
DEF_ORDINARY("RANDOM-STATE",sLrandom_state,LISP,"");
DEF_ORDINARY("DOUBLE-FLOAT",sLdouble_float,LISP,"");
DEF_ORDINARY("STREAM",sLstream,LISP,"");
DEF_ORDINARY("BIT",sLbit,LISP,"");
DEF_ORDINARY("READTABLE",sLreadtable,LISP,"");
DEF_ORDINARY("LONG-FLOAT",sLlong_float,LISP,"");
DEF_ORDINARY("HASH-TABLE",sLhash_table,LISP,"");
DEF_ORDINARY("KEYWORD",sLkeyword,LISP,"");
DEF_ORDINARY("STRUCTURE",sLstructure,LISP,"");
DEF_ORDINARY("SATISFIES",sLsatisfies,LISP,"");
DEF_ORDINARY("MEMBER",sLmember,LISP,"");
DEF_ORDINARY("NOT",sLnot,LISP,"");
DEF_ORDINARY("OR",sLor,LISP,"");
DEF_ORDINARY("AND",sLand,LISP,"");
DEF_ORDINARY("VALUES",sLvalues,LISP,"");
DEF_ORDINARY("MOD",sLmod,LISP,"");
DEF_ORDINARY("SIGNED-BYTE",sLsigned_byte,LISP,"");
DEF_ORDINARY("UNSIGNED-BYTE",sLunsigned_byte,LISP,"");
DEF_ORDINARY("SIGNED-SHORT",sLsigned_short,LISP,"");
DEF_ORDINARY("UNSIGNED-SHORT",sLunsigned_short,LISP,"");
DEF_ORDINARY("*",sLA,LISP,"");
DEF_ORDINARY("PLUSP",sLplusp,LISP,"");
DEF_ORDINARY("FILE-STREAM",sLfile_stream,LISP,"");
DEF_ORDINARY("INPUT-STREAM",sLinput_stream,SI,"");
DEF_ORDINARY("OUTPUT-STREAM",sLoutput_stream,SI,"");


/* logical pathnames exist even in non ansi gcl */
DEF_ORDINARY("LOGICAL-PATHNAME",sLlogical_pathname,LISP,"");

DEF_ORDINARY("BASE-CHAR",sLbase_char,LISP,"");



DEF_ORDINARY("CONDITION",sLcondition,LISP,"");
DEF_ORDINARY("SERIOUS-CONDITION",sLserious_condition,LISP,"");
DEF_ORDINARY("SIMPLE-CONDITION",sLsimple_condition,LISP,"");

DEF_ORDINARY("ERROR",sLerror,LISP,"");
DEF_ORDINARY("SIMPLE-ERROR",sLsimple_error,LISP,"");
DEF_ORDINARY("FORMAT-CONTROL",sKformat_control,KEYWORD,"");
DEF_ORDINARY("FORMAT-ARGUMENTS",sKformat_arguments,KEYWORD,"");

DEF_ORDINARY("TYPE-ERROR",sLtype_error,LISP,"");
DEF_ORDINARY("DATUM",sKdatum,KEYWORD,"");
DEF_ORDINARY("EXPECTED-TYPE",sKexpected_type,KEYWORD,"");
DEF_ORDINARY("SIMPLE-TYPE-ERROR",sLsimple_type_error,LISP,"");

DEF_ORDINARY("PROGRAM-ERROR",sLprogram_error,LISP,"");
DEF_ORDINARY("CONTROL-ERROR",sLcontrol_error,LISP,"");
DEF_ORDINARY("PACKAGE-ERROR",sLpackage_error,LISP,"");
DEF_ORDINARY("PACKAGE",sKpackage,KEYWORD,"");

DEF_ORDINARY("STREAM-ERROR",sLstream_error,LISP,"");
DEF_ORDINARY("STREAM",sKstream,KEYWORD,"");
DEF_ORDINARY("END-OF-FILE",sLend_of_file,LISP,"");

DEF_ORDINARY("FILE-ERROR",sLfile_error,LISP,"");
DEF_ORDINARY("PATHNAME",sKpathname,KEYWORD,"");

DEF_ORDINARY("CELL-ERROR",sLcell_error,LISP,"");
DEF_ORDINARY("NAME",sKname,KEYWORD,"");
DEF_ORDINARY("UNBOUND-SLOT",sLunbound_slot,LISP,"");
DEF_ORDINARY("UNBOUND-VARIABLE",sLunbound_variable,LISP,"");
DEF_ORDINARY("UNDEFINED-FUNCTION",sLundefined_function,LISP,"");

DEF_ORDINARY("ARITHMETIC-ERROR",sLarithmetic_error,LISP,"");
DEF_ORDINARY("OPERATION",sKoperation,KEYWORD,"");
DEF_ORDINARY("OPERANDS",sKoperands,KEYWORD,"");
DEF_ORDINARY("DIVISION-BY-ZERO",sLdivision_by_zero,LISP,"");
DEF_ORDINARY("FLOATING-POINT-OVERFLOW",sLfloating_point_overflow,LISP,"");
DEF_ORDINARY("FLOATING-POINT-UNDERFLOW",sLfloating_point_underflow,LISP,"");
DEF_ORDINARY("FLOATING-POINT-INEXACT",sLfloating_point_inexact,LISP,"");
DEF_ORDINARY("FLOATING-POINT-INVALID-OPERATION",sLfloating_point_invalid_operation,LISP,"");

DEF_ORDINARY("PARSE-ERROR",sLparse_error,LISP,"");

DEF_ORDINARY("PRINT-NOT-READABLE",sLprint_not_readable,LISP,"");

DEF_ORDINARY("READER-ERROR",sLreader_error,LISP,"");
DEF_ORDINARY("PATHNAME-ERROR",sLpathname_error,LISP,"");

DEF_ORDINARY("STORAGE-CONDITION",sLstorage_condition,LISP,"");

DEF_ORDINARY("WARNING",sLwarning,LISP,"");
DEF_ORDINARY("SIMPLE-WARNING",sLsimple_warning,LISP,"");
DEF_ORDINARY("STYLE-WARNING",sLstyle_warning,LISP,"");
#ifdef ANSI_COMMON_LISP
/* New ansi types */
DEF_ORDINARY("METHOD-COMBINATION",sLmethod_combination,LISP,"");
/* DEF_ORDINARY("ARITHMETIC-ERROR",sLarithmetic_error,LISP,""); */
DEF_ORDINARY("BASE-STRING",sLbase_string,LISP,"");
DEF_ORDINARY("BROADCAST-STREAM",sLbroadcast_stream,LISP,"");
DEF_ORDINARY("BUILT-IN-CLASS",sLbuilt_in_class,LISP,"");
/* DEF_ORDINARY("CELL-ERROR",sLcell_error,LISP,""); */
DEF_ORDINARY("CLASS",sLclass,LISP,"");
DEF_ORDINARY("CONCATENATED-STREAM",sLconcatenated_stream,LISP,"");
/* DEF_ORDINARY("CONDITION",sLcondition,LISP,""); */
/* DEF_ORDINARY("SERIOUS-CONDITION",sLserious_condition,LISP,""); */
/* DEF_ORDINARY("SIMPLE-CONDITION",sLsimple_condition,LISP,""); */
/* DEF_ORDINARY("DIVISION-BY-ZERO",sLdivision_by_zero,LISP,""); */
DEF_ORDINARY("ECHO-STREAM",sLecho_stream,LISP,"");
/* DEF_ORDINARY("END-OF-FILE",sLend_of_file,LISP,""); */
/* DEF_ORDINARY("CONTROL-ERROR",sLcontrol_error,LISP,""); */
DEF_ORDINARY("EXTENDED-CHAR",sLextended_char,LISP,"");
/* DEF_ORDINARY("FILE-ERROR",sLfile_error,LISP,""); */
/* DEF_ORDINARY("FLOATING-POINT-INEXACT",sLfloating_point_inexact,LISP,""); */
/* DEF_ORDINARY("FLOATING-POINT-INVALID-OPERATION",sLfloating_point_invalid_operation,LISP,""); */
/* DEF_ORDINARY("FLOATING-POINT-OVERFLOW",sLfloating_point_overflow,LISP,""); */
/* DEF_ORDINARY("FLOATING-POINT-UNDERFLOW",sLfloating_point_underflow,LISP,""); */
DEF_ORDINARY("GENERIC-FUNCTION",sLgeneric_function,LISP,"");
DEF_ORDINARY("METHOD",sLmethod,LISP,"");
/* FIXME -- need this for types in predlib.lsp, why can't we use the keyword sKpackage_error ? */
/* DEF_ORDINARY("PACKAGE-ERROR",sLpackage_error,LISP,""); */
/* DEF_ORDINARY("PARSE-ERROR",sLparse_error,LISP,""); */
/* DEF_ORDINARY("PRINT-NOT-READABLE",sLprint_not_readable,LISP,""); */
/* DEF_ORDINARY("PROGRAM-ERROR",sLprogram_error,LISP,""); */
/* DEF_ORDINARY("READER-ERROR",sLreader_error,LISP,""); */
DEF_ORDINARY("SIMPLE-BASE-STRING",sLsimple_base_string,LISP,"");
/* DEF_ORDINARY("SIMPLE-TYPE-ERROR",sLsimple_type_error,LISP,""); */
/* DEF_ORDINARY("SIMPLE-WARNING",sLsimple_warning,LISP,""); */
DEF_ORDINARY("STANDARD-CLASS",sLstandard_class,LISP,"");
DEF_ORDINARY("STANDARD-GENERIC-FUNCTION",sLstandard_generic_function,LISP,"");
DEF_ORDINARY("STANDARD-METHOD",sLstandard_method,LISP,"");
DEF_ORDINARY("STANDARD-OBJECT",sLstandard_object,LISP,"");
/* DEF_ORDINARY("STORAGE-CONDITION",sLstorage_condition,LISP,""); */
/* DEF_ORDINARY("STREAM-ERROR",sLstream_error,LISP,""); */
DEF_ORDINARY("STRING-STREAM",sLstring_stream,LISP,"");
DEF_ORDINARY("STRUCTURE-CLASS",sLstructure_class,LISP,"");
DEF_ORDINARY("STRUCTURE-OBJECT",sLstructure_object,LISP,"");
/* DEF_ORDINARY("STYLE-WARNING",sLstyle_warning,LISP,""); */
DEF_ORDINARY("SYNONYM-STREAM",sLsynonym_stream,LISP,"");
DEF_ORDINARY("TWO-WAY-STREAM",sLtwo_way_stream,LISP,"");
/* DEF_ORDINARY("UNBOUND-SLOT",sLunbound_slot,LISP,""); */
/* DEF_ORDINARY("UNBOUND-VARIABLE",sLunbound_variable,LISP,""); */
/* DEF_ORDINARY("UNDEFINED-FUNCTION",sLundefined_function,LISP,""); */
/* DEF_ORDINARY("WARNING",sLwarning,LISP,""); */
DEF_ORDINARY("DYNAMIC-EXTENT",sLdynamic_extent,LISP,"");
#endif

DEFCONST("CHAR-LENGTH",   sSchar_length,   SI,small_fixnum(CHAR_SIZE),
	 "Size in bits of a character");
DEFCONST("SHORT-LENGTH",  sSshort_length,  SI,small_fixnum(CHAR_SIZE*sizeof(short)),
	 "Size in bits of a short integer");
DEFCONST("INT-LENGTH", sSint_length, SI,small_fixnum(CHAR_SIZE*sizeof(int)),
	 "Size in bits of an int");
DEFCONST("FIXNUM-LENGTH", sSfixnum_length, SI,small_fixnum(CHAR_SIZE*sizeof(fixnum)),
	 "Size in bits of a fixnum");
DEFCONST("LFIXNUM-LENGTH",sSlfixnum_length,SI,small_fixnum(CHAR_SIZE*sizeof(lfixnum)),
	 "Size in bits of a long fixnum");

void     
gcl_init_typespec(void) {
}

void
gcl_init_typespec_function(void) {
  TSor_symbol_string
    = make_cons(sLor, make_cons(sLsymbol, make_cons(sLstring, Cnil)));
  enter_mark_origin(&TSor_symbol_string);
  TSor_string_symbol
    = make_cons(sLor, make_cons(sLstring, make_cons(sLsymbol, Cnil)));
  enter_mark_origin(&TSor_string_symbol);
  TSor_symbol_string_package
    = make_cons(sLor,
		make_cons(sLsymbol,
			  make_cons(sLstring,
				    make_cons(sLpackage, Cnil))));
  enter_mark_origin(&TSor_symbol_string_package);
  
  TSnon_negative_integer
    = make_cons(sLinteger,
		make_cons(make_fixnum(0), make_cons(sLA, Cnil)));
  enter_mark_origin(&TSnon_negative_integer);
  TSpositive_number = make_cons(sLsatisfies, make_cons(sLplusp, Cnil));
  enter_mark_origin(&TSpositive_number);
  TSor_integer_float
    = make_cons(sLor, make_cons(sLinteger, make_cons(sLfloat, Cnil)));
  enter_mark_origin(&TSor_integer_float);
  TSor_rational_float
    = make_cons(sLor, make_cons(sLrational, make_cons(sLfloat, Cnil)));
  enter_mark_origin(&TSor_rational_float);
#ifdef UNIX
  TSor_pathname_string_symbol
    = make_cons(sLor,
		make_cons(sLpathname,
			  make_cons(sLstring,
				    make_cons(sLsymbol,
					      Cnil))));
  enter_mark_origin(&TSor_pathname_string_symbol);
#endif
  TSor_pathname_string_symbol_stream
    = make_cons(sLor,
		make_cons(sLpathname,
			  make_cons(sLstring,
				    make_cons(sLsymbol,
					      make_cons(sLstream,
							Cnil)))));
  enter_mark_origin(&TSor_pathname_string_symbol_stream);
  
}				
