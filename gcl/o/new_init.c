#include "make-init.h"
NewInit(){

DEFUNO("BYE",int,fLbye,LISP
   ,0,1,0 ,II,OO,OO,OO,Lby,"")
DEFUNO("IDENTITY",object,fLidentity,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lidentity,"")
DEFUNO("LISP-IMPLEMENTATION-VERSION",object,fLlisp_implementation_version,LISP
   ,0,0,0 ,OO,OO,OO,OO,Llisp_implementation_version,"")
DEFVAR("*LISP-MAXPAGES*",sSAlisp_maxpagesA,SI,make_fixnum(real_maxpage),"")
DEFVAR("*SYSTEM-DIRECTORY*",sSAsystem_directoryA,SI,make_simple_string(system_directory),"")
DEFVAR("*MULTIPLY-STACKS*",sSAmultiply_stacksA,SI,((object)&Cnil_body) ,"")
DEF_ORDINARY("TOP-LEVEL",sStop_level,SI,"")
DEFVAR("*COMMAND-ARGS*",sSAcommand_argsA,SI,((object)&Cnil_body)  ,"")
DEFVAR("*AFTER-GBC-HOOK*",sSAafter_gbc_hookA,SI,((object)&Cnil_body)  ,"")
DEFVAR("*IGNORE-MAXIMUM-PAGES*",sSAignore_maximum_pagesA,SI,((object)&Ct_body)  ,"")
DEFUN("ALLOCATED",object,fSallocated,SI
   ,2,2,0 ,OO,OO,OO,OO,"")
DEFUN("RESET-NUMBER-USED",object,fSreset_number_used,SI,0,1,0 ,OO,OO,OO,OO,"")
DEFUN("STATICP",object,fSstaticp,SI,1,1,0 ,OO,OO,OO,OO,"Tell if the string or vector is static")
DEFUNO("ALLOCATE",object,fSallocate,SI
   ,2,3,0 ,OO,IO,OO,OO,siLallocate,"")
DEFUN("ALLOCATE-SGC",object,fSallocate_sgc,SI
   ,4,4,0 ,OO,II,II,OO,"")
DEFUN("ALLOCATE-GROWTH",object,fSallocate_growth,SI,5,5,0 ,OO,II,II,OO,"")
DEFUNO("ALLOCATE-CONTIGUOUS-PAGES",object,fSallocate_contiguous_pages,SI
   ,1,2,0 ,OI,OO,OO,OO,siLalloc_contpage,"")
DEFUNO("ALLOCATED-CONTIGUOUS-PAGES",object,fSallocated_contiguous_pages,SI
   ,0,0,0 ,OO,OO,OO,OO,siLncbpage,"")
DEFUNO("MAXIMUM-CONTIGUOUS-PAGES",object,fSmaximum_contiguous_pages,SI
   ,0,0,0 ,OO,OO,OO,OO,siLmaxcbpage,"")
DEFUNO("ALLOCATE-RELOCATABLE-PAGES",object,fSallocate_relocatable_pages,SI
   ,1,2,0 ,OI,OO,OO,OO,siLalloc_relpage,"")
DEFUNO("ALLOCATED-RELOCATABLE-PAGES",object,fSallocated_relocatable_pages,SI
   ,0,0,0 ,OO,OO,OO,OO,siLnrbpage,"")
DEFUNO("GET-HOLE-SIZE",object,fSget_hole_size,SI
   ,0,0,0 ,OO,OO,OO,OO,siLget_hole_size,"")
DEFUNO("SET-HOLE-SIZE",object,fSset_hole_size,SI
   ,1,2,0 ,OI,IO,OO,OO,siLset_hole_size,"")
DEFUNO("GBC",object,fLgbc,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lgbc,"")
DEFVAR("*NOTIFY-GBC*",sSAnotify_gbcA,SI,((object)&Cnil_body) ,"")
DEFVAR("*GBC-MESSAGE*",sSAgbc_messageA,SI,((object)&Cnil_body) ,"")
DEF_ORDINARY("COMMON",sLcommon,LISP,"")
DEF_ORDINARY("NULL",sLnull,LISP,"")
DEF_ORDINARY("CONS",sLcons,LISP,"")
DEF_ORDINARY("LIST",sLlist,LISP,"")
DEF_ORDINARY("SYMBOL",sLsymbol,LISP,"")
DEF_ORDINARY("ARRAY",sLarray,LISP,"")
DEF_ORDINARY("VECTOR",sLvector,LISP,"")
DEF_ORDINARY("BIT-VECTOR",sLbit_vector,LISP,"")
DEF_ORDINARY("STRING",sLstring,LISP,"")
DEF_ORDINARY("SEQUENCE",sLsequence,LISP,"")
DEF_ORDINARY("SIMPLE-ARRAY",sLsimple_array,LISP,"")
DEF_ORDINARY("SIMPLE-VECTOR",sLsimple_vector,LISP,"")
DEF_ORDINARY("SIMPLE-BIT-VECTOR",sLsimple_bit_vector,LISP,"")
DEF_ORDINARY("SIMPLE-STRING",sLsimple_string,LISP,"")
DEF_ORDINARY("FUNCTION",sLfunction,LISP,"")
DEF_ORDINARY("COMPILED-FUNCTION",sLcompiled_function,LISP,"")
DEF_ORDINARY("PATHNAME",sLpathname,LISP,"")
DEF_ORDINARY("CHARACTER",sLcharacter,LISP,"")
DEF_ORDINARY("NUMBER",sLnumber,LISP,"")
DEF_ORDINARY("RATIONAL",sLrational,LISP,"")
DEF_ORDINARY("FLOAT",sLfloat,LISP,"")
DEF_ORDINARY("STRING-CHAR",sLstring_char,LISP,"")
DEF_ORDINARY("INTEGER",sLinteger,LISP,"")
DEF_ORDINARY("RATIO",sLratio,LISP,"")
DEF_ORDINARY("SHORT-FLOAT",sLshort_float,LISP,"")
DEF_ORDINARY("STANDARD-CHAR",sLstandard_char,LISP,"")
DEF_ORDINARY("FIXNUM",sLfixnum,LISP,"")
DEF_ORDINARY("COMPLEX",sLcomplex,LISP,"")
DEF_ORDINARY("SINGLE-FLOAT",sLsingle_float,LISP,"")
DEF_ORDINARY("PACKAGE",sLpackage,LISP,"")
DEF_ORDINARY("BIGNUM",sLbignum,LISP,"")
DEF_ORDINARY("RANDOM-STATE",sLrandom_state,LISP,"")
DEF_ORDINARY("DOUBLE-FLOAT",sLdouble_float,LISP,"")
DEF_ORDINARY("STREAM",sLstream,LISP,"")
DEF_ORDINARY("BIT",sLbit,LISP,"")
DEF_ORDINARY("READTABLE",sLreadtable,LISP,"")
DEF_ORDINARY("LONG-FLOAT",sLlong_float,LISP,"")
DEF_ORDINARY("HASH-TABLE",sLhash_table,LISP,"")
DEF_ORDINARY("KEYWORD",sLkeyword,LISP,"")
DEF_ORDINARY("STRUCTURE",sLstructure,LISP,"")
DEF_ORDINARY("SATISFIES",sLsatisfies,LISP,"")
DEF_ORDINARY("MEMBER",sLmember,LISP,"")
DEF_ORDINARY("NOT",sLnot,LISP,"")
DEF_ORDINARY("OR",sLor,LISP,"")
DEF_ORDINARY("AND",sLand,LISP,"")
DEF_ORDINARY("VALUES",sLvalues,LISP,"")
DEF_ORDINARY("MOD",sLmod,LISP,"")
DEF_ORDINARY("SIGNED-BYTE",sLsigned_byte,LISP,"")
DEF_ORDINARY("UNSIGNED-BYTE",sLunsigned_byte,LISP,"")
DEF_ORDINARY("SIGNED-CHAR",sLsigned_char,LISP,"")
DEF_ORDINARY("UNSIGNED-CHAR",sLunsigned_char,LISP,"")
DEF_ORDINARY("SIGNED-SHORT",sLsigned_short,LISP,"")
DEF_ORDINARY("UNSIGNED-SHORT",sLunsigned_short,LISP,"")
DEF_ORDINARY("*",sLA,LISP,"")
DEF_ORDINARY("PLUSP",sLplusp,LISP,"")
DEFCONST("CHAR-SIZE",sSchar_size,SI,(object)(small_fixnum_table+ 1024 +( 8  )) ,"Size in bits of a character")
DEFCONST("SHORT-SIZE",sSshort_size,SI,(object)(small_fixnum_table+ 1024 +( 8 *sizeof(short) )) ,"Size in bits of a short integer")
DEFUNO("FUNCALL",object,fLfuncall,LISP
   ,1,63 ,0 ,OO,OO,OO,OO,Lfuncall,"")
DEFUNO("APPLY",object,fLapply,LISP
   ,2,63 ,0 ,OO,OO,OO,OO,Lapply,"")
DEFUNO("EVAL",object,fLeval,LISP
   ,1,1,0 ,OO,OO,OO,OO,Leval,"")
DEFUNO("CONSTANTP",object,fLconstantp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lconstantp,"")
DEF_ORDINARY("LAMBDA-BLOCK-EXPANDED",sSlambda_block_expanded,SI,"")
DEFVAR("*BREAK-POINTS*",sSAbreak_pointsA,SI,((object)&Cnil_body) ,"")
DEFVAR("*BREAK-STEP*",sSAbreak_stepA,SI,((object)&Cnil_body) ,"")
DEFUNO("MACROEXPAND",object,fLmacroexpand,LISP
   ,1,2,0 ,OO,OO,OO,OO,Lmacroexpand,"")
DEF_ORDINARY("FUNCALL",sLfuncall,LISP,"")
DEFVAR("*MACROEXPAND-HOOK*",sLAmacroexpand_hookA,LISP,sLfuncall,"")
DEF_ORDINARY("DEFMACRO*",sSdefmacroA,SI,"")
DEFVAR("*INHIBIT-MACRO-SPECIAL*",sSAinhibit_macro_specialA,SI,((object)&Cnil_body) ,"")
DEFUN("NULL",object,fLnot,LISP
   ,1,1,0 ,OO,OO,OO,OO,"")
DEFUNO("NOT",object,fLnot,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lnull,"")
DEFUNO("SYMBOLP",object,fLsymbolp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lsymbolp,"")
DEFUNO("ATOM",object,fLatom  ,LISP
   ,1,1,0 ,OO,OO,OO,OO,Latom  ,"")
DEFUNO("CONSP",object,fLconsp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lconsp,"")
DEFUNO("LISTP",object,fLlistp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Llistp,"")
DEFUNO("NUMBERP",object,fLnumberp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lnumberp,"")
DEFUNO("INTEGERP",object,fLintegerp ,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lintegerp ,"")
DEFUNO("RATIONALP",object,fLrationalp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lrationalp,"")
DEFUN("REALP",object,fLrealp,LISP
   ,1,1,0 ,OO,OO,OO,OO,"")
DEFUNO("FLOATP",object,fLfloatp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lfloatp,"")
DEFUNO("COMPLEXP",object,fLcomplexp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lcomplexp,"")
DEFUNO("CHARACTERP",object,fLcharacterp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lcharacterp,"")
DEFUNO("STRINGP",object,fLstringp ,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lstringp ,"")
DEFUNO("BIT-VECTOR-P",object,fLbit_vector_p,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lbit_vector_p,"")
DEFUNO("VECTORP",object,fLvectorp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lvectorp,"")
DEFUNO("SIMPLE-STRING-P",object,fLsimple_string_p,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lsimple_string_p,"")
DEFUNO("SIMPLE-BIT-VECTOR-P",object,fLsimple_bit_vector_p ,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lsimple_bit_vector_p ,"")
DEFUNO("SIMPLE-VECTOR-P",object,fLsimple_vector_p ,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lsimple_vector_p ,"")
DEFUNO("ARRAYP",object,fLarrayp ,LISP
   ,1,1,0 ,OO,OO,OO,OO,Larrayp ,"")
DEFUNO("PACKAGEP",object,fLpackagep ,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lpackagep ,"")
DEFUNO("FUNCTIONP",object,fLfunctionp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lfunctionp,"")
DEFUNO("COMPILED-FUNCTION-P",object,fLcompiled_function_p,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lcompiled_function_p,"")
DEFUNO("COMMONP",object,fLcommonp,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lcommonp,"")
DEFUNO("EQ",object,fLeq,LISP
   ,2,2,0 ,OO,OO,OO,OO,Leq,"")
DEFUNO("EQL",object,fLeql,LISP
   ,2,2,0 ,OO,OO,OO,OO,Leql,"")
DEFUNO("EQUAL",object,fLequal,LISP
   ,2,2,0 ,OO,OO,OO,OO,Lequal,"")
DEFUNO("EQUALP",object,fLequalp,LISP
   ,2,2,0 ,OO,OO,OO,OO,Lequalp,"")
DEFUNO("CONTAINS-SHARP-COMMA",object,fScontains_sharp_comma,SI
   ,1,1,0 ,OO,OO,OO,OO,siLcontains_sharp_comma,"")
DEFUNO("SPICEP",object,fSspicep  ,SI
   ,1,1,0 ,OO,OO,OO,OO,siLspicep  ,"")
DEFUNO("FIXNUMP",object,fSfixnump,SI
   ,1,1,0 ,OO,OO,OO,OO,siLfixnump,"")
DEFUNO("SET",object,fLset,LISP
   ,2,2,0 ,OO,OO,OO,OO,Lset,"")
DEFUNO("FSET",object,fSfset,SI
   ,2,2,0 ,OO,OO,OO,OO,siLfset,"")
DEFUNO("MAKUNBOUND",object,fLmakunbound,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lmakunbound,"")
DEFUNO("FMAKUNBOUND",object,fLfmakunbound,LISP
   ,1,1,0 ,OO,OO,OO,OO,Lfmakunbound,"")
DEF_ORDINARY("CLEAR-COMPILER-PROPERTIES",sSclear_compiler_properties,SI,"")
DEFUNO("CLEAR-COMPILER-PROPERTIES",object,fSclear_compiler_properties,SI
   ,2,2,0 ,OO,OO,OO,OO,siLclear_compiler_properties,"")
DEF_ORDINARY("AREF",sLaref,LISP,"")
DEF_ORDINARY("CAR",sLcar,LISP,"")
DEF_ORDINARY("CDR",sLcdr,LISP,"")
DEF_ORDINARY("CHAR",sLchar,LISP,"")
DEF_ORDINARY("DECF",sLdecf,LISP,"")
DEF_ORDINARY("ELT",sLelt,LISP,"")
DEF_ORDINARY("FILL-POINTER",sLfill_pointer,LISP,"")
DEF_ORDINARY("GET",sLget,LISP,"")
DEF_ORDINARY("GETHASH",sLgethash,LISP,"")
DEF_ORDINARY("INCF",sLincf,LISP,"")
DEF_ORDINARY("POP",sLpop,LISP,"")
DEF_ORDINARY("PUSH",sLpush,LISP,"")
DEF_ORDINARY("SCHAR",sLschar,LISP,"")
DEF_ORDINARY("SETF",sLsetf,LISP,"")
DEF_ORDINARY("SETF-LAMBDA",sSsetf_lambda,SI,"")
DEF_ORDINARY("STRUCTURE-ACCESS",sSstructure_access,SI,"")
DEF_ORDINARY("SVREF",sLsvref,LISP,"")
DEF_ORDINARY("TRACED",sStraced,SI,"")
DEF_ORDINARY("VECTOR",sLvector,LISP,"")
DEF_ORDINARY("ALLOW-OTHER-KEYS",sKallow_other_keys,KEYWORD,"")
DEFUNO("ERROR-SET",object,fSerror_set,SI
   ,1,1,0 ,OO,OO,OO,OO,siLerror_set,
       "Evaluates the FORM in the null environment.  If the evaluation of the FORM has successfully completed, SI:ERROR-SET returns NIL as the first value and the result of the evaluation as the rest of the values.  If, in the course of the evaluation, a non-local jump from the FORM is atempted, SI:ERROR-SET traps the jump and returns the corresponding jump tag as its value.")
DEFUNO("MC",object,fSmc,SI
   ,2,2,0 ,OO,OO,OO,OO,siLmc,"")
DEFUNO("MFSFUN",object,fSmfsfun,SI
   ,3,3,0 ,OO,OO,OO,OO,siLmfsfun,"")
DEFUNO("MFVFUN",object,fSmfvfun,SI
   ,3,3,0 ,OO,OO,OO,OO,siLmfvfun,"")
DEFUNO("MFVFUN-KEY",object,fSmfvfun_key,SI
   ,4,4,0 ,OO,OO,OO,OO,siLmfvfun_key,"")
DEFUNO("MF",object,fSmf,SI
   ,2,2,0 ,OO,OO,OO,OO,siLmf,"")
DEFUNO("MM",object,fSmm,SI
   ,2,2,0 ,OO,OO,OO,OO,siLmm,"")
DEFUNO("COMPILED-FUNCTION-NAME",object,fScompiled_function_name,SI
   ,1,1,0 ,OO,OO,OO,OO,siLcompiled_function_name,"")
DEFUNO("TURBO-CLOSURE",object,fSturbo_closure,SI
   ,1,1,0 ,OO,OO,OO,OO,siLturbo_closure,"")
DEFUNO("SPECIALP",object,fSspecialp,SI
   ,1,1,0 ,OO,OO,OO,OO,siLspecialp,"")
DEF_ORDINARY("DEBUG",sSdebug,SI,"")
DEFUNO("DEFVAR1",object,fSdefvar1,SI
   ,2,3,0 ,OO,OO,OO,OO,siLdefvar1,"")
DEFUNO("DEBUG",object,fSdebug,SI
   ,2,2,0 ,OO,OO,OO,OO,siLdebug,"")
DEFUNO("SETVV",object,fSsetvv,SI
   ,2,2,0 ,OO,OO,OO,OO,siLsetvv,"")
DEF_ORDINARY("%MEMORY",sSPmemory,SI,"")
DEF_ORDINARY("%INIT",sSPinit,SI,"")
DEF_ORDINARY("EXTERNAL",sKexternal,KEYWORD,"")
DEF_ORDINARY("INHERITED",sKinherited,KEYWORD,"")
DEF_ORDINARY("INTERNAL",sKinternal,KEYWORD,"")
DEF_ORDINARY("NICKNAMES",sKnicknames,KEYWORD,"")
DEF_ORDINARY("USE",sKuse,KEYWORD,"")
DEFVAR("*PACKAGE*",sLApackageA,LISP,lisp_package,"")
DEFUN("ALLOCATE-BIGGER-FIXNUM-RANGE",object,fSallocate_bigger_fixnum_range,
      SI,2,2,0 ,OI,IO,OO,OO,"")
DEFUNO("CMOD",object,fScmod,SI
   ,1,1,0 ,OO,OO,OO,OO,siLcmod,"")
DEFUNO("CPLUS",object,fScplus,SI
   ,2,2,0 ,OO,OO,OO,OO,siLcplus,"")
DEFUNO("CTIMES",object,fSctimes,SI
   ,2,2,0 ,OO,OO,OO,OO,siLctimes,"")
DEFUNO("CDIFFERENCE",object,fScdifference,SI
   ,2,2,0 ,OO,OO,OO,OO,siLcdifference,"")
DEFUNO("NTH",object,fLnth,LISP,2,2,NONE,OI,OO,OO,OO,Lnth,"")
DEFUN("FIRST",object,fLfirst,LISP,0,0,NONE,OO,OO,OO,OO,"")
DEFUNO("SECOND",object,fLsecond,LISP,1,1,NONE,OO,OO,OO,OO,Lsecond,"")
DEFUNO("THIRD",object,fLthird,LISP,1,1,NONE,OO,OO,OO,OO,Lthird,"")
DEFUNO("FOURTH",object,fLfourth,LISP,1,1,NONE,OO,OO,OO,OO,Lfourth,"")
DEFUNO("FIFTH",object,fLfifth,LISP,1,1,NONE,OO,OO,OO,OO,Lfifth,"")
DEFUNO("SIXTH",object,fLsixth,LISP,1,1,NONE,OO,OO,OO,OO,Lsixth,"")
DEFUNO("SEVENTH",object,fLseventh,LISP,1,1,NONE,OO,OO,OO,OO,Lseventh,"")
DEFUNO("EIGHTH",object,fLeighth,LISP,1,1,NONE,OO,OO,OO,OO,Leighth,"")
DEFUNO("NINTH",object,fLninth,LISP,1,1,NONE,OO,OO,OO,OO,Lninth,"")
DEFUNO("TENTH",object,fLtenth,LISP,1,1,NONE,OO,OO,OO,OO,Ltenth,"")
DEFUN("NEXT-HASH-TABLE-ENTRY",object,fSnext_hash_table_entry,SI,2,2,NONE,OO,OO,OO,OO,"For HASH-TABLE and for index I return three values: NEXT-START, the next KEY and its  VALUE.   NEXT-START will be -1 if there are no more entries, otherwise it will be a value suitable for passing as an index")
DEFUN("HASH-TABLE-TEST",object,fLhash_table_test,LISP,1,1,NONE,OO,OO,OO,OO,
 "Given a HASH-TABLE return a symbol which specifies the function used in its test")
DEFUN("HASH-TABLE-SIZE",int,fLhash_table_size,LISP,1,1,NONE,IO,OO,OO,OO,"")
DEFCONST("ARRAY-RANK-LIMIT", sLarray_rank_limit, LISP,
	 make_fixnum(63 ),"")
DEFCONST("ARRAY-DIMENSION-LIMIT", sLarray_dimension_limit,
	 LISP, make_fixnum(MOST_POSITIVE_FIX),"")
DEFCONST("ARRAY-TOTAL-SIZE-LIMIT", sLarray_total_size_limit,
	 LISP, sLarray_dimension_limit,"")
DEF_ORDINARY("BIT",sLbit,LISP,"")
DEFUNO("AREF", object, fLaref, LISP, 1, 63 ,
       0 , OO, II, II, II,Laref,"")
DEFUN("SVREF", object, fLsvref, LISP, 2, 2,
      (1 << F_caller_sets_one_val) , OO, IO, OO,OO,
      "For array X and index I it returns (aref x i) ")
DEFUN("AREF1", object, fSaref1, SI, 2, 2,
      0 , OO, IO, OO,OO,
      "For array X and index I it returns (aref x i) as if x were 1 dimensional, even though its rank may be bigger than 1")
DEFUN("ASET1", object, fSaset1, SI, 3, 3, 0 , OO, IO, OO,OO,"")
DEFUNO("ASET", object, fSaset, SI, 1, 63 , 0 , OO,
       OO, OO, OO,siLaset,"")
DEFUNO("SVSET", object, fSsvset, SI, 3, 3, 0 , OO, IO, OO,
       OO,siLsvset,"")
DEFUN("MAKE-VECTOR1",object,fSmake_vector1,SI,3,8,0 ,OI,
      IO,OO,OO,"")
DEFUN("GET-AELTTYPE",enum aelttype,fSget_aelttype,SI,1,1,0 ,IO,OO,OO,OO,"")
DEFUNO("MAKE-VECTOR",object,fSmake_vector,SI,7,8,0 ,
       OO,OO,OO,OO,siLmake_vector,"")
DEFUN("MAKE-ARRAY1",object,fSmake_array1,SI,6,6,
      0 ,OI,OO,OI,OO,"")
DEFUN("COPY-ARRAY-PORTION",object,fScopy_array_portion,SI,4,
      5,0 ,OO,OI,II,OO,
   "Copy elements from X to Y starting at x[i1] to x[i2] and doing N1 elements if N1 is supplied otherwise, doing the length of X - I1 elements.  If the types of the arrays are not the same, this has implementation dependent results.")
DEFUNO("FILL-POINTER-SET",int,fSfill_pointer_set,SI,2,2,
       0 ,IO,IO,OO,OO,siLfill_pointer_set,"")
DEFUNO("FILL-POINTER",int,fLfill_pointer,LISP,1,1,0 ,IO,
       OO,OO,OO,Lfill_pointer,"")
DEFUN("ARRAY-HAS-FILL-POINTER-P",object,
      fLarray_has_fill_pointer_p,LISP,1,1,0 ,OO,OO,OO,OO,"")
DEFUNO("ARRAY-ELEMENT-TYPE",object,fLarray_element_type,
       LISP,1,1,0 ,OO,OO,OO,OO,Larray_element_type,"")
DEFUNO("ADJUSTABLE-ARRAY-P",object,fLadjustable_array_p,
       LISP,1,1,0 ,OO,OO,OO,OO,Ladjustable_array_p,"")
DEFUNO("DISPLACED-ARRAY-P",object,fSdisplaced_array_p,SI,1,
       1,0 ,OO,OO,OO,OO,siLdisplaced_array_p,"")
DEFUNO("ARRAY-RANK",int,fLarray_rank,LISP,1,1,0 ,IO,OO,OO,
       OO,Larray_rank,"")
DEFUNO("ARRAY-DIMENSION",int,fLarray_dimension,LISP,2,2,
       0 ,IO,IO,OO,OO,Larray_dimension,"")
DEFUNO("REPLACE-ARRAY",object,fSreplace_array,SI,2,2,0 ,
       OO,OO,OO,OO,siLreplace_array,"")
DEFUNO("ARRAY-TOTAL-SIZE",int,fLarray_total_size,LISP,1,1,
       0 ,IO,OO,OO,OO,Larray_total_size,"")
DEFUNO("ASET-BY-CURSOR",object,fSaset_by_cursor,SI,3,3,
       0 ,OO,OO,OO,OO,siLaset_by_cursor,"")
DEFVAR("*MATCH-DATA*",sSAmatch_dataA,SI,((object)&Cnil_body)  ,"")
DEFVAR("*CASE-FOLD-SEARCH*",sSAcase_fold_searchA,SI,((object)&Cnil_body)  ,
       "Non nil means that a string-match should ignore case")
DEFUN("MATCH-BEGINNING",int,fSmatch_beginning,SI,1,1,0 ,II,OO,OO,OO,
   "Returns the beginning of the I'th match from the previous STRING-MATCH, where the 0th is for the whole regexp and the subsequent ones match parenthetical expressions.  -1 is returned if there is no match, or if the *match-data* vector is not a fixnum array.")
DEFUN("MATCH-END",int,fSmatch_end,SI,1,1,0 ,II,OO,OO,OO,
   "Returns the end of the I'th match from the previous STRING-MATCH")
DEFUN("STRING-MATCH",int,fSstring_match,SI,2,4,0 ,IO,OI,IO,OO,
      "Match regexp PATTERN in STRING starting in string starting at START and ending at END.  Return -1 if match not found, otherwise return the start index  of the first matchs.  The variable *MATCH-DATA* will be set to a fixnum array of sufficient size to hold the matches, to be obtained with match-beginning and match-end. If it already contains such an array, then the contents of it will be over written.   ")
DEF_ORDINARY("S-DATA",sSs_data,SI,"")
DEF_ORDINARY("COMPILE",sLcompile,LISP,"")
DEF_ORDINARY("DECLARE",sLdeclare,LISP,"")
DEF_ORDINARY("EVAL",sLeval,LISP,"")
DEF_ORDINARY("EVAL",sLeval,LISP,"")
DEF_ORDINARY("FUNCTION-DOCUMENTATION",sSfunction_documentation,SI,"")
DEF_ORDINARY("LOAD",sLload,LISP,"")
DEF_ORDINARY("PROGN",sLprogn,LISP,"")
DEF_ORDINARY("TYPEP",sLtypep,LISP,"")
DEF_ORDINARY("VALUES",sLvalues,LISP,"")
DEF_ORDINARY("VARIABLE-DOCUMENTATION",sSvariable_documentation,SI,"")
DEF_ORDINARY("WARN",sLwarn,LISP,"")
DEFVAR("*ALLOW-GZIPPED-FILE*",sSAallow_gzipped_fileA,SI,sLnil,"")
DEF_ORDINARY("MYADDR",sKmyaddr,KEYWORD,"")
DEF_ORDINARY("MYPORT",sKmyport,KEYWORD,"")
DEF_ORDINARY("ASYNC",sKasync,KEYWORD,"")
DEF_ORDINARY("HOST",sKhost,KEYWORD,"")
DEF_ORDINARY("SERVER",sKserver,KEYWORD,"")
DEF_ORDINARY("SOCKET",sSsocket,SI,"")
DEFVAR("*STANDARD-INPUT*",sLAstandard_inputA,LISP,(init_file(),standard_io),"")
DEFVAR("*STANDARD-OUTPUT*",sLAstandard_outputA,LISP,standard_io,"")
DEFVAR("*ERROR-OUTPUT*",sLAerror_outputA,LISP,standard_io,"")
DEFVAR("*TERMINAL-IO*",sLAterminal_ioA,LISP,terminal_io,"")
DEFVAR("*QUERY-IO*",sLAquery_ioA,LISP,
    (standard_io->sm.sm_object0 = sLAterminal_ioA,
        standard_io),"")
DEFVAR("*DEBUG-IO*",sLAdebug_ioA,LISP,standard_io,"")
DEFVAR("*TRACE-OUTPUT*",sLAtrace_outputA,LISP,standard_io,"")
DEFVAR("*IGNORE-EOF-ON-TERMINAL-IO*",sSAignore_eof_on_terminal_ioA,SI,Cnil,"")
DEFVAR("*LOAD-PATHNAME*",sSAload_pathnameA,SI,Cnil,"")
DEFVAR("*LOAD-VERBOSE*",sLAload_verboseA,LISP,Ct,"")
DEF_ORDINARY("ABORT",sKabort,KEYWORD,"")
DEF_ORDINARY("APPEND",sKappend,KEYWORD,"")
DEF_ORDINARY("CREATE",sKcreate,KEYWORD,"")
DEF_ORDINARY("DEFAULT",sKdefault,KEYWORD,"")
DEF_ORDINARY("DIRECTION",sKdirection,KEYWORD,"")
DEF_ORDINARY("ELEMENT-TYPE",sKelement_type,KEYWORD,"")
DEF_ORDINARY("ERROR",sKerror,KEYWORD,"")
DEF_ORDINARY("IF-DOES-NOT-EXIST",sKif_does_not_exist,KEYWORD,"")
DEF_ORDINARY("IF-EXISTS",sKif_exists,KEYWORD,"")
DEF_ORDINARY("INPUT",sKinput,KEYWORD,"")
DEF_ORDINARY("IO",sKio,KEYWORD,"")
DEF_ORDINARY("NEW-VERSION",sKnew_version,KEYWORD,"")
DEF_ORDINARY("OUTPUT",sKoutput,KEYWORD,"")
DEF_ORDINARY("OVERWRITE",sKoverwrite,KEYWORD,"")
DEF_ORDINARY("PRINT",sKprint,KEYWORD,"")
DEF_ORDINARY("PROBE",sKprobe,KEYWORD,"")
DEF_ORDINARY("RENAME",sKrename,KEYWORD,"")
DEF_ORDINARY("RENAME-AND-DELETE",sKrename_and_delete,KEYWORD,"")
DEF_ORDINARY("SET-DEFAULT-PATHNAME",sKset_default_pathname,KEYWORD,"")
DEF_ORDINARY("SUPERSEDE",sKsupersede,KEYWORD,"")
DEF_ORDINARY("VERBOSE",sKverbose,KEYWORD,"")
DEFVAR("*READ-DEFAULT-FLOAT-FORMAT*",sLAread_default_float_formatA,
   LISP,sLsingle_float,"")
DEFVAR("*READ-BASE*",sLAread_baseA,LISP,make_fixnum(10),"")
DEFVAR("*READ-SUPPRESS*",sLAread_suppressA,LISP,Cnil,"")
DEF_ORDINARY("Y",sSY,SI,"")
DEF_ORDINARY("YB",sSYB,SI,"")
DEF_ORDINARY("YZ",sSYZ,SI,"")
DEF_ORDINARY("LIST*",sLlistA,LISP,"")
DEF_ORDINARY("APPEND",sLappend,LISP,"")
DEF_ORDINARY("NCONC",sLnconc,LISP,"")
DEF_ORDINARY("APPLY",sLapply,LISP,"")
DEF_ORDINARY("VECTOR",sLvector,LISP,"")
DO_MARK:

DO_INDENT:

DEF_ORDINARY("UPCASE",sKupcase,KEYWORD,"")
DEF_ORDINARY("DOWNCASE",sKdowncase,KEYWORD,"")
DEF_ORDINARY("CAPITALIZE",sKcapitalize,KEYWORD,"")
DEF_ORDINARY("STREAM",sKstream,KEYWORD,"")
DEF_ORDINARY("ESCAPE",sKescape,KEYWORD,"")
DEF_ORDINARY("PRETTY",sKpretty,KEYWORD,"")
DEF_ORDINARY("CIRCLE",sKcircle,KEYWORD,"")
DEF_ORDINARY("BASE",sKbase,KEYWORD,"")
DEF_ORDINARY("RADIX",sKradix,KEYWORD,"")
DEF_ORDINARY("CASE",sKcase,KEYWORD,"")
DEF_ORDINARY("GENSYM",sKgensym,KEYWORD,"")
DEF_ORDINARY("LEVEL",sKlevel,KEYWORD,"")
DEF_ORDINARY("LENGTH",sKlength,KEYWORD,"")
DEF_ORDINARY("ARRAY",sKarray,KEYWORD,"")
DEFVAR("*PRINT-ESCAPE*",sLAprint_escapeA,LISP,Ct,"")
DEFVAR("*PRINT-PRETTY*",sLAprint_prettyA,LISP,Ct,"")
DEFVAR("*PRINT-CIRCLE*",sLAprint_circleA,LISP,Cnil,"")
DEFVAR("*PRINT-BASE*",sLAprint_baseA,LISP,make_fixnum(10),"")
DEFVAR("*PRINT-RADIX*",sLAprint_radixA,LISP,Cnil,"")
DEFVAR("*PRINT-CASE*",sLAprint_caseA,LISP,sKupcase,"")
DEFVAR("*PRINT-GENSYM*",sLAprint_gensymA,LISP,Ct,"")
DEFVAR("*PRINT-LEVEL*",sLAprint_levelA,LISP,Cnil,"")
DEFVAR("*PRINT-LENGTH*",sLAprint_lengthA,LISP,Cnil,"")
DEFVAR("*PRINT-ARRAY*",sLAprint_arrayA,LISP,Ct,"")
DEFVAR("*PRINT-PACKAGE*",sSAprint_packageA,SI,Cnil,"")
DEFVAR("*PRINT-STRUCTURE*",sSAprint_structureA,SI,Cnil,"")
DEF_ORDINARY("PRETTY-PRINT-FORMAT",sSpretty_print_format,SI,"")
DEFVAR("*PRINT-NANS*",sSAprint_nansA,SI,Cnil,"")
DEFUNO("FORMAT",object,fLformat,LISP
   ,2,((1<< 6 ) -1) ,0 ,OO,OO,OO,OO,Lformat,"")
DEFVAR("*INDENT-FORMATTED-OUTPUT*",sSAindent_formatted_outputA,SI,((object)&Cnil_body) ,"")
DEFUNO("DELETE-FILE",object,fLdelete_file,LISP
   ,1,1,0 ,OO,OO,OO,OO,Ldelete_file,"")
DEFUNO("ERROR",object,fLerror,LISP
   ,1,((1<< 6 ) -1) ,0 ,OO,OO,OO,OO,Lerror,"")
DEFUNO("CERROR",object,fLcerror,LISP
   ,2,((1<< 6 ) -1) ,0 ,OO,OO,OO,OO,Lcerror,"")
DEFUNO("IHS-TOP",object,fSihs_top,SI
   ,0,0,0 ,OO,OO,OO,OO,siLihs_top,"")
DEFUNO("IHS-FUN",object,fSihs_fun,SI
   ,1,1,0 ,OO,OO,OO,OO,siLihs_fun,"")
DEFUNO("IHS-VS",object,fSihs_vs,SI
   ,1,1,0 ,OO,OO,OO,OO,siLihs_vs,"")
DEFUNO("FRS-TOP",object,fSfrs_top,SI
   ,0,0,0 ,OO,OO,OO,OO,siLfrs_top,"")
DEFUNO("FRS-VS",object,fSfrs_vs,SI
   ,1,1,0 ,OO,OO,OO,OO,siLfrs_vs,"")
DEFUNO("FRS-BDS",object,fSfrs_bds,SI
   ,1,1,0 ,OO,OO,OO,OO,siLfrs_bds,"")
DEFUNO("FRS-CLASS",object,fSfrs_class,SI
   ,1,1,0 ,OO,OO,OO,OO,siLfrs_class,"")
DEFUNO("FRS-TAG",object,fSfrs_tag,SI
   ,1,1,0 ,OO,OO,OO,OO,siLfrs_tag,"")
DEFUNO("FRS-IHS",object,fSfrs_ihs,SI
   ,1,1,0 ,OO,OO,OO,OO,siLfrs_ihs,"")
DEFUNO("BDS-TOP",object,fSbds_top,SI
   ,0,0,0 ,OO,OO,OO,OO,siLbds_top,"")
DEFUNO("BDS-VAR",object,fSbds_var,SI
   ,1,1,0 ,OO,OO,OO,OO,siLbds_var,"")
DEFUNO("BDS-VAL",object,fSbds_val,SI
   ,1,1,0 ,OO,OO,OO,OO,siLbds_val,"")
DEFUNO("VS-TOP",object,fSvs_top,SI
   ,0,0,0 ,OO,OO,OO,OO,siLvs_top,"")
DEFUNO("VS",object,fSvs,SI
   ,1,1,0 ,OO,OO,OO,OO,siLvs,"")
DEFUNO("SCH-FRS-BASE",object,fSsch_frs_base,SI
   ,2,2,0 ,OO,OO,OO,OO,siLsch_frs_base,"")
DEFUNO("INTERNAL-SUPER-GO",object,fSinternal_super_go,SI
   ,3,3,0 ,OO,OO,OO,OO,siLinternal_super_go,"")
DEF_ORDINARY("UNIVERSAL-ERROR-HANDLER",sSuniversal_error_handler,SI
	     ,"Redefined in lisp, this is the function called by the internal error handling mechanism.  Args:  (error-name correctable function-name    continue-format-string error-format-string    &rest args)")
DEFUNO("UNIVERSAL-ERROR-HANDLER",object,fSuniversal_error_handler,SI
   ,5,((1<< 6 ) -1) ,0 ,OO,OO,OO,OO,
       siLuniversal_error_handler,"")
DEF_ORDINARY("TERMINAL-INTERRUPT",sSterminal_interrupt,SI,"")
DEF_ORDINARY("WRONG-TYPE-ARGUMENT",sKwrong_type_argument,KEYWORD,"")
DEF_ORDINARY("TOO-FEW-ARGUMENTS",sKtoo_few_arguments,KEYWORD,"")
DEF_ORDINARY("TOO-MANY-ARGUMENTS",sKtoo_many_arguments,KEYWORD,"")
DEF_ORDINARY("UNEXPECTED-KEYWORD",sKunexpected_keyword,KEYWORD,"")
DEF_ORDINARY("INVALID-FORM",sKinvalid_form,KEYWORD,"")
DEF_ORDINARY("UNBOUND-VARIABLE",sKunbound_variable,KEYWORD,"")
DEF_ORDINARY("INVALID-VARIABLE",sKinvalid_variable,KEYWORD,"")
DEF_ORDINARY("UNDEFINED-FUNCTION",sKundefined_function,KEYWORD,"")
DEF_ORDINARY("INVALID-FUNCTION",sKinvalid_function,KEYWORD,"")
DEF_ORDINARY("CATCH",sKcatch,KEYWORD,"")
DEF_ORDINARY("PROTECT",sKprotect,KEYWORD,"")
DEF_ORDINARY("CATCHALL",sKcatchall,KEYWORD,"")
DEFUNO("GET-UNIVERSAL-TIME",object,fLget_universal_time,LISP
   ,0,0,0 ,OO,OO,OO,OO,Lget_universal_time,"")
DEFUN("GET-INTERNAL-REAL-TIME",int,fLget_internal_real_time,LISP,0,0,0 ,IO,OO,OO,OO,"Run time relative to beginning")
DEFVAR("*DEFAULT-TIME-ZONE*",sSAdefault_time_zoneA,SI,make_fixnum((-9) ),"")
DEFUN("GETPID",int,fSgetpid,SI,0,0,0 ,IO,OO,OO,OO,
      "getpid  returns  the  process  ID  of the current process")
DEFUN("USE-FAST-LINKS",object,fSuse_fast_links,SI,1,2,0 ,OO,OO,OO,OO,

      "Usage: (use-fast-links {nil,t} &optional fun) turns on or off the fast linking depending on FLAG, so that things will either go faster, or turns it off so that stack information is kept.  If SYMBOL is supplied and FLAG is nil, then this function is deleted from the fast links")
DEF_ORDINARY("CDEFN",sScdefn,SI,"")
DEFVAR("*LINK-ARRAY*",sLAlink_arrayA,LISP,((object)&Cnil_body) ,"")
DEFUNO("FUNCTION-START",object,fSfunction_start,SI
   ,1,1,0 ,OO,OO,OO,OO,siLfunction_start,"")
DEFUNO("READ-EXTERNALS",object,fSread_externals,SI
   ,1,1,0 ,OO,OO,OO,OO,siLread_externals,"")
DEFUNO("SET-UP-COMBINED",object,fSset_up_combined,SI
   ,0,1,0 ,OO,OO,OO,OO,siLset_up_combined,"")
DEFUNO("DISPLAY-PROFILE",object,fSdisplay_profile,SI
   ,2,2,0 ,OO,OO,OO,OO,siLdisplay_profile,"")
DEFUNO("ARRAY-ADRESS",object,fSarray_adress,SI
   ,1,1,0 ,OO,OO,OO,OO,siLarray_adress,"")
DEFVAR("*PROFILE-ARRAY*",sSAprofile_arrayA,SI,((object)&Cnil_body) ,"")
DEFVAR("*INTERRUPT-ENABLE*",sSAinterrupt_enableA,SI,((object)&Ct_body)  ,"")
DEF_ORDINARY("SIGUSR1-INTERRUPT",sSsigusr1_interrupt,SI,"")
DEF_ORDINARY("SIGIO-INTERRUPT",sSsigio_interrupt,SI,"")
DO_INIT(init_safety();)

DEFUN("SIGNAL-SAFETY-REQUIRED",int,sSsignal_safety_required,SI,2,2,
      0 ,II,IO,OO,OO,
      "Set the safety level required for handling SIGNO to SAFETY, or if SAFETY is negative just return the current safety level for that signal number.  Value of 1 means allow interrupt at any place not specifically marked in the code as bad, and value of 2 means allow it only in very SAFE places.")
DEFUN("ALLOW-SIGNAL",int,fSallow_signal,SI,1,1,0 ,II,OO,OO,OO,
      "Install the default signal handler on signal N")
DEFUN("INITFUN",object,fSinitfun,SI,3,63 ,0 ,OO,OO,OO,OO,
      "Store a compiled function on SYMBOL whose body is in the VV array at INDEX, and whose argd descriptor is ARGD.  If more arguments IND1, IND2,.. are supplied these are indices in the VV array for the environment of this closure.")
DEFUN("INITMACRO",object,fSinitmacro,SI,3,63 ,0 ,OO,OO,OO,OO,
      "Like INITFUN, but makes then sets the 'macro' flag on this symbol")
DEFUN("SET-KEY-STRUCT",object,fSset_key_struct,SI,1,1,0 ,OO,OO,OO,OO,
      "Called inside the loader.  The keystruct is set up in the file with    indexes rather than the actual entries.  We change these indices to    the objects")
DEFUN("INVOKE",object,fSinvoke,SI,1,63 ,0 ,OO,OO,OO,OO,
      "Invoke a C function whose body is at INDEX in the VV array")
DEFUN("OPEN-NAMED-SOCKET",object,fSopen_named_socket,SI,1,1,0 ,OI,OO,OO,OO,
"Open a socket on PORT and return (cons fd portname) where file descriptor is a small fixnum which is the write file descriptor for the socket.  If PORT is zero do automatic allocation of port")
DEFUN("CLOSE-FD",object,fSclose_fd,SI,1,1,0 ,OI,OO,OO,OO,
      "Close the file descriptor FD")
DEFUN("CLOSE-SD",object,fSclose_sfd,SI,1,1,0 ,OO,OO,OO,OO,
      "Close the socket connection sfd")
DEFUN("ACCEPT-SOCKET-CONNECTION",object,fSaccept_socket_connection,
      SI,1,1,0 ,OO,OO,OO,OO,
      "Given a NAMED_SOCKET it waits for a connection on this and returns (list* named_socket fd name1) when one is established")
DEFUN("HOSTNAME-TO-HOSTID",object,fShostname_to_hostid,SI,1,1,
      0 ,OO,OO,OO,OO,"")
DEFUN("GETHOSTNAME",object,fSgethostname,SI,0,0,0 ,OO,OO,OO,OO,
      "Returns HOSTNAME of the local host")
DEFUN("HOSTID-TO-HOSTNAME",object,fShostid_to_hostname,SI,
      1,10,0 ,OO,OO,OO,OO,"")
DEFUN("CHECK-FD-FOR-INPUT",int,fScheck_fd_for_input,
      SI,2,2,0 ,II,IO,OO,OO,

"Check FD a file descriptor for data to read, waiting TIMEOUT clicks for data to become available.  Here there are INTERNAL-TIME-UNITS-PER-SECOND in one second.  Return is 1 if data available on FD, 0 if timeout reached and -1 if failed.")
DEFUN("CLEAR-CONNECTION",int,fSclear_connection,SI,1,1,0 ,II,OO,OO,OO,
      "Read on FD until nothing left to read.  Return number of bytes read")
DEFUN("CONNECTION-STATE-FD",int,fSconnection_state_fd,SI,1,1,0 ,IO,OO,OO,OO,"")
DEFUN("OUR-WRITE",int,fSour_write,SI,3,3,0 ,IO,OI,OO,OO,"")
DEFUN("OUR-READ-WITH-OFFSET",int,fSour_read_with_offset,SI,5,5,0 ,
      IO,OI,II,OO,
      "Read from STATE-FD into string BUFFER putting data at OFFSET and reading NBYTES, waiting for TIMEOUT before failing")
DEFUN("PRINT-TO-STRING1",object,fSprint_to_string1,SI,3,3,0 ,OO,OO,OO,OO,
      "Print to STRING the object X according to CODE.   The string must have fill pointer, and this will be advanced.")
DEFUN("SET-SIGIO-FOR-FD",object,fSset_sigio_for_fd,SI,1,1,0 ,OI,OO,OO,OO,"")
DEFUN("RESET-STRING-INPUT-STREAM",object,fSreset_string_input_stream,SI,4,4,0 ,OO,OI,IO,OO,
      "Reuse a string output STREAM by setting its output to STRING and positioning the ouput/input to start at START and end at END")
DEFUN("CHECK-STATE-INPUT",int ,fScheck_state_input,SI,2,2,0 ,IO,IO,OO,OO,
      "")
DEFUN("CLEAR-CONNECTION-STATE",int,fSclear_connection_state,
      SI,1,1,0 ,IO,OO,OO,OO,
      "Read on FD until nothing left to read.  Return number of bytes read")
DEFUN("GETPEERNAME",object,fSgetpeername,SI,1,1,0 ,OO,OO,OO,OO,
 "Return a list of three elements: the address, the hostname and the port for the other end of the socket.  If hostname is not available it will be equal to the address.  Invalid on server sockets. Return NIL on failure.")
DEFUN("GETSOCKNAME",object,fSgetsockname,SI,1,1,0 ,OO,OO,OO,OO,
 "Return a list of three elements: the address, the hostname and the port for the socket.  If hostname is not available it will be equal to the address. Return NIL on failure. ")
DEFUN("SET-BLOCKING",int,fSset_blocking,SI,2,2,0 ,IO,OO,OO,OO,
      "Set blocking on if MODE is T otherwise off.  Return 0 if succeeds. Otherwise the error number.")}
