/*
 Copyright (C) 1994  W. Schelter

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

*/

#include "include.h"
#include "funlink.h"

     
int Rset;

#define COSF(x) (bill.f = x , (object )(bill.p))

#define COERCE_F_TYPE(val, in_type,out_type)  \
  (in_type == out_type \
	 ? val \
	 :in_type == F_int \
	 ?(out_type == F_object ? make_fixnum((long)val) :\
	   out_type == F_double_ptr \
	   ?(object) (void *)  & lf(make_longfloat((double)(long) val)) \
	   :out_type == F_shortfloat? COSF((float)(long)val) \
	   :(object) 0 ) \
	 :in_type == F_object \
	 ?(out_type == F_int ? (object)(void *) Mfix(val) \
	   :out_type == F_double_ptr ? (object)(void *) & lf(val)\
	   :out_type == F_shortfloat? COSF(Msf(val)) \
	   :(object) 0)\
	 :in_type == F_double_ptr \
    	 ?(out_type == F_int ? (object)(void *)(long)*(double *)(void *)val \
	   :out_type == F_object ? make_longfloat(*(double *)(void *)val) \
	   :out_type == F_shortfloat? COSF(*(double *)(void *)val) \
	   :(object) 0) \
         :in_type == F_shortfloat \
    	 ?(out_type == F_int ? (object)(bill.p = val, (long) bill.f) \
	   :out_type == F_object ? make_shortfloat((bill.p=val,(double)(bill.f))) \
	   :out_type == F_double_ptr ? (object)(void *) \
	         &lf(make_longfloat((bill.p = val,bill.f))) \
	   :(object) 0) \
   :(object)0)

union {int i;
       float f;
       double d;
       void * p;
     } bill;


/*  static object coerce_df(object x) */
/*  {if (type_of(x)==t_longfloat) return x; */
/*   if (type_of(x)==t_shortfloat) return make_longfloat(Msf(x)); */
/*   FEerror("Not of float type ~a" ,1,x); */
/*   return Cnil; */
/*  } */

 

/* static object */
/* Icall_proc(object fun_name, int link_desk, object (**link_loc) (/\* ??? *\/), va_list ap) */
/* { object fun,res; */
/*   object (*fn)(); */
/*   int nargs; */
/*   unsigned int fargd ; */
   /* used for laying out a call
      in the bad case.   This could be static, but it would
      need gcprotecting, and saving at interrupts.
    */
/*   object vec [64]; */
/*   if (type_of(fun_name)!=t_symbol || fun_name->s.s_gfdef ==0 */
/*       ) */
/*     fun_name = IisFboundp(fun_name); */
/*   if (fun_name->s.s_sfdef != NOT_SPECIAL || fun_name->s.s_mflag) */
/*     FEinvalid_function(fun_name); */
/*   fun = fun_name->s.s_gfdef; */
/*   if (Rset == 0 || */
/*       !( type_of(fun)==t_afun || type_of(fun)==t_closure)) */
/*     goto GENERAL; */
/*   fn = (void *)  fun->sfn.sfn_self; */
/*   fargd =  fun->sfn.sfn_argd; */
/*   if ( (F_ARG_FLAGS(fargd) & F_ARG_FLAGS(link_desk)) == F_ARG_FLAGS(fargd) */
/*       && F_MIN_ARGS(fargd) <= F_MIN_ARGS(link_desk) */
/*       && F_MAX_ARGS(fargd) >= F_MIN_ARGS(link_desk) */
/*       && F_TYPES(fargd) == F_TYPES(link_desk)) */
/*     {				/\* do the link *\/ */
/*       (void) vpush_extend(link_loc,sLAlink_arrayA->s.s_dbind);  */
/*       (void) vpush_extend(*link_loc,sLAlink_arrayA->s.s_dbind); */
/*       *link_loc = fn;} */
  /* make this call */

  /* figure out the true number of args passed */
/*   nargs = (F_ARG_FLAGS_P(link_desk,F_requires_nargs) ? */
/* 	   F_NARGS(VFUN_NARGS) : F_NARGS(link_desk)); */
/*   {unsigned int  atypes = (F_TYPES(link_desk) >> F_TYPE_WIDTH); */
/*    unsigned int  ftypes = (F_TYPES(fargd) >> F_TYPE_WIDTH); */
/*    int i; */
/*    object *new ; */
/*    if (atypes==ftypes) */
/*      { */
/* #ifdef MUST_COPY_VA_LIST */
/*        new = vec; */
/*        for (i=0; i < nargs ; i++) new[i] = va_arg(ap,object); */
/* #else */
/*      new = (object *) ap; */
/* #endif        */
/*      } */
/*    else */
/*      { new = vec; */
/*        for (i = 0; i < nargs ; i++, atypes >>= F_TYPE_WIDTH, */
/* 	    ftypes >>= F_TYPE_WIDTH) */
/* 	 { int atyp = atypes & MASK_RANGE(0,F_TYPE_WIDTH); */
/* 	   int ftyp = ftypes & MASK_RANGE(0,F_TYPE_WIDTH); */
/* 	   object next = va_arg(ap,object); */
/* 	   new [i] = COERCE_F_TYPE(next, atyp ,ftyp); */
/* 	 }} */
/*    res = c_apply_n(fn,nargs,new); */
/*    { int lret_type = F_TYPES(link_desk) & MASK_RANGE(0,F_TYPE_WIDTH); */
/*      int fret_type = F_TYPES(fargd) & MASK_RANGE(0,F_TYPE_WIDTH); */
/*      return  COERCE_F_TYPE(res,fret_type,lret_type); */
/*    }} */

/*    GENERAL: */
  /* figure out the true number of args passed */
/*   nargs = (F_ARG_FLAGS_P(link_desk,F_requires_nargs) ? */
/* 	   F_NARGS(VFUN_NARGS) : F_NARGS(link_desk)); */
  
/*   { int atypes,i,restype; */
/*     object res; */
/*     object *base = vs_top; */
/* #define DEBUG */
/* #ifdef DEBUG */
/*     bds_ptr oldbd = bds_top; */
/*     frame_ptr oldctl = frs_top; */
/* #endif     */
    
/*     restype = F_RESULT_TYPE(link_desk); */
/*     atypes = F_TYPES(link_desk)>> F_TYPE_WIDTH; */

/*     vs_top+= nargs; */
/*     for (i=0; i < nargs ; i++, atypes >>= F_TYPE_WIDTH) */
/*       { object next = va_arg(ap,object); */
/* 	int atyp = atypes & MASK_RANGE(0,F_TYPE_WIDTH); */
/* 	base[i] = COERCE_F_TYPE(next,atyp,F_object);} */
/*     res = IapplyVector(fun,nargs,base); */
/*     vs_top = base; */
/*     res = COERCE_F_TYPE(res,F_object,restype); */
/* #ifdef DEBUG */
/*     if (oldctl != frs_top || oldbd  != bds_top) */
/*       FEerror("compiler error ? ",0 ); */
/* #endif       */
/*     return res; */
/* }} */

/* for making a link which calls a function returning a double
   
 */

/* static float */
/* Icall_proc_float(object fun_name, int link_desk, object (**link_loc) (/\* ??? *\/), va_list ap) */
/* { object val; */
/*   val = Icall_proc(fun_name,link_desk,link_loc,ap); */
/*   { union { void *p; */
/* 	    float f;} bil; */
/*     bil.p = val; */
/*     return bil.f;} */
/* } */

object
IapplyVector(object fun, int nargs, object *base)
                      
               
/* Call FUN a lisp objectect on NARGS which are loaded into an array
   starting at BASE.  This pushes on the CallHist, and puts the args onto
   the arg stack, so that debuggers may examine them.  It sets
   fcall.nvalues appropriately. */
{ object res,*abase;
  int i;
  object *oldtop = vs_top;
  unsigned int  atypes;
  if (oldtop == base) vs_top += nargs;
  else
    { object *b = base;
      int n = nargs;
      base = vs_top; vs_top +=n;
      while (--n>=0) { base[n] = b[n];}}
  vs_check;
  switch(type_of(fun)) {
  case t_closure:
  case t_afun:
    ihs_push_base(fun,base);
    ihs_check;
    VFUN_NARGS=nargs;
    fcall.fun = fun;
    if (nargs < F_MIN_ARGS(fun->sfn.sfn_argd))
      FEtoo_few_arguments(base,vs_top);
    if (nargs > F_MAX_ARGS(fun->sfn.sfn_argd) && F_MAX_ARGS(fun->sfn.sfn_argd))
      FEtoo_many_arguments(base,vs_top);
    atypes = F_TYPES(fun->sfn.sfn_argd) >> F_TYPE_WIDTH;
    if (atypes==0) {abase = base;}
    else { abase = vs_top;
	   for (i=0; i < nargs ; i++, atypes >>= F_TYPE_WIDTH)
	     { object next = base[i];
	       int atyp = atypes & MASK_RANGE(0,F_TYPE_WIDTH);
	       if (atyp == F_object)
		 next = next;
	       else if (atyp == F_int)
		 { ASSURE_TYPE(next,t_fixnum);
		   next = COERCE_F_TYPE(next,F_object,F_int);}
	       else if (atyp == F_shortfloat)
		 { ASSURE_TYPE(next,t_shortfloat);
		   next = COERCE_F_TYPE(next,F_object,F_shortfloat);}
	       else if (atyp == F_double_ptr)
		 { ASSURE_TYPE(next,t_longfloat);
		   next = COERCE_F_TYPE(next,F_object,F_double_ptr);}
	       else {FEerror("cant get here!",0);}
	       vs_push(next);}

	 }
    res = c_apply_n(fun->sfn.sfn_self,nargs,abase);
    res = COERCE_F_TYPE(res,F_RESULT_TYPE(fun->sfn.sfn_argd),F_object);
    if (F_ARG_FLAGS_P(fun->sfn.sfn_argd,F_caller_sets_one_val))
      { fcall.nvalues = 1;}
    vs_top = oldtop;
    ihs_pop();
    return res;
    break;
  default:
    vs_base = base;
    funcall(fun);
    fcall.nvalues = vs_top - vs_base;
    {int i = fcall.nvalues ;
     object *p = vs_top;
     object *b = &fcall.values[i];
     vs_top = oldtop;
     if (i == 0)
       return sLnil;
     while(--i > 0) *(--b) =  *(--p);}
    return vs_base[0];
    break;
  }
}
    
/* use the following to define functions passing on the value stack,
   from ones on the C stack.
Laref()
{
Iinvoke_c_function_from_value_stack(fLaref,F_ARGD(2,2,0,ARGTYPES(oo,io,oo,oo)));
  return;
}
   
*/   
void
Iinvoke_c_function_from_value_stack(object (*f)(), int fargd)
{ 
  int atypes = F_TYPES(fargd)>> F_TYPE_WIDTH;
  object *base = vs_base;
  int i;
  int nargs = vs_top - vs_base;

  object x[64],res;
  int min,max;
  min = F_MIN_ARGS(fargd);
  max = F_MAX_ARGS(fargd);
  if (nargs < min || nargs > max)
    { FEerror("Wrong number of args",0);
    }
  for (i=0; i < nargs ; i++, atypes >>= F_TYPE_WIDTH)
    { object next = base[i];
      int atyp = atypes & MASK_RANGE(0,F_TYPE_WIDTH);
      if (atyp == F_object)
	x[i] = next;
      else if (atyp == F_int)
	  { ASSURE_TYPE(next,t_fixnum);
	    x[i] = COERCE_F_TYPE(next,F_object,F_int);}
      else if (atyp == F_shortfloat)
	  { ASSURE_TYPE(next,t_shortfloat);
	    x[i] = COERCE_F_TYPE(next,F_object,F_shortfloat);}
      else if (atyp == F_double_ptr)
	  { ASSURE_TYPE(next,t_longfloat);
	    x[i] = COERCE_F_TYPE(next,F_object,F_double_ptr);}
      else {FEerror("cant get here!",0);}}
  VFUN_NARGS = nargs;
  res = c_apply_n(f,nargs,x);
  res = COERCE_F_TYPE(res,F_RESULT_TYPE(fargd),F_object);
  base[0]=res;
  if (F_ARG_FLAGS_P(fargd,F_caller_sets_one_val))
    {   vs_top=base+ 1;
      }
  else
    { vs_top=base + fcall.nvalues;
      { int nn = fcall.nvalues;
	while (--nn > 0)
	  { base[nn] = fcall.values[nn];
	  }
      }
    }
  vs_base=base;
  return;
} 

#define TYPE_STRING(i) (i == F_object ? "object" : i == F_int ?  "int" : i == F_double_ptr ? "double ptr" : "unknown")

/* static int */
/* print_fargd(int fargd) */
/* { int i; */
/*   int nargs = 7; */
/*   unsigned int  ftypes = (F_TYPES(fargd) >> F_TYPE_WIDTH); */

/*   printf("minargs=%d,maxargs=%d, arg_types=(",F_MIN_ARGS(fargd), */
/* 	 F_MAX_ARGS(fargd)); */
/*   for (i = 0; i < F_MAX_ARGS(fargd) ; i++, ftypes >>= F_TYPE_WIDTH) */
/*     {int ftyp = ftypes & MASK_RANGE(0,F_TYPE_WIDTH); */
/*      printf(" %s,",TYPE_STRING(ftyp)); */
/*      if (i >= nargs) { printf("...object..");  break;} */
/*    } */
/*   printf(") result_type=%s\n",TYPE_STRING(F_RESULT_TYPE(fargd))); */
/*   fflush(stdout); */
/*   return 0; */
/* } */
     
  
  
