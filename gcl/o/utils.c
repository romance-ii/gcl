#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "include.h"

/* The functions IisProp check the property holds, and return the
   argument.   They may in future allow resetting the argument.
*/

object CEerror(char *error_str, char *cont_str, int num, object arg1, object arg2, object arg3, object arg4);
object
IisSymbol(object f)
{ if (type_of(f) != t_symbol)
   { FEerror("Not a symbol ~s",1,f); }
  return f;
}

/* object */
/* IisFboundp(object f) */
/* {  */
/*   IisSymbol(f); */
/*   if (f->s.s_gfdef ==0) */
/*     { FEerror("Not a fboundp ~s",1,f);} */
/*   return f; */
/* } */

object
IisArray(object f)
{ if (TS_MEMBER(type_of(f),
		TS(t_array)
		|TS(t_vector)
		|TS(t_bitvector)
		|TS(t_string)))
    return f;
  else
   { FEwrong_type_argument(sLarray,f); return f;
	}	
}

object
Iis_fixnum(object f)
{ if (type_of(f)==t_fixnum)
    { return f;}
  else
    {  FEerror("Not a fixnum ~s",1,f); return f;
      
    }
}

void Wrong_type_error(char *str,int n,...) {
  FEerror("Wrong type error",0);
}

/* static object */
/* Iapply_ap(object (*f) (/\* ??? *\/), va_list ap) */
/* Apply f to the va_list ap, with an implicit number of args
   passed in VFUN_NARGS */
           
              
/* { int n = VFUN_NARGS; */
/*   object *new; */
/*   COERCE_VA_LIST(new,ap,n); */
/*   return c_apply_n(f,n,new); */
/* } */

object
Iapply_ap_new(object (*f) (/* ??? */), object first, va_list ap)
/* Apply f to the va_list ap, with an implicit number of args
   passed in VFUN_NARGS */
           
              
{ int n = VFUN_NARGS;
  object *new;
  COERCE_VA_LIST_NEW(new,first,ap,n);
  return c_apply_n(f,n,new);
}

object
Ifuncall_n(object fun,int n,...) {
/* call fun on the n optional args supplied, and set the fcall.nvalues etc
   return the first value */
  va_list ap;
  object *new;
  va_start(ap,n);
  {
    COERCE_VA_LIST(new,ap,n);
  }
  va_end(ap);
  return IapplyVector(fun,n,new);
}



/* For applying FUN to args in VA_LIST, where n are supplied directly
   and the last one is itself a va_list */
/*  object */
/*  Iapply_fun_n(object fun,int n,int m,...) { */

/*    va_list ap1,ap; */
/*    object b[F_ARG_LIMIT]; */
/*    int i = 0; */

/*    va_start(ap1,m); */
  
/*    while (--n >= 0) */
/*      { b[i++] = va_arg(ap1,object);} */
/*    if (m > 0) { */
/*      ap =	 va_arg(ap1,va_list); */
/*      while (--m >= 0) */
/*        { b[i++] = va_arg(ap,object);} */
/*    } */

/*    va_end(ap1); */

/*    return IapplyVector(fun,i,b); */

/*  } */
 


/* For applying FUN to args in VA_LIST, where n are supplied directly
   and the last one is itself a va_list */
/* object */
/* Iapply_fun_n1(object (*fun)(),int n,int m,...) { */

/*   va_list ap; */
/*   object b[F_ARG_LIMIT],*bb; */
/*   int i = 0; */

/*   va_start(ap,m); */

/*   while (--n >= 0) {  */
/*     b[i++] = va_arg(ap,object);} */
/*   if (m > 0) { */
/*     bb = va_arg(ap,object *); */
/*     while (--m >= 0) */
/*       b[i++] = *bb++; */
/*   } */

/*   va_end(ap); */

/*  return IapplyVector(make_sfun(Cnil,fun,i,Cnil),i,b); */
/* } */
 
/* For applying FUN to args in VA_LIST, where n are supplied directly
   and the last one is itself a va_list */
/*  object */
/*  Iapply_fun_n2(object fun,int n,int m,...) { */

/*    va_list ap,*app; */
/*    object b[F_ARG_LIMIT]; */
/*    int i = 0; */

/*    va_start(ap,m); */

/*    while (--n >= 0) {  */
/*      b[i++] = va_arg(ap,object);} */
/*    if (m > 0) { */
/*      app = va_arg(ap,va_list *); */
/*      while (--m >= 0) */
/*        b[i++] = va_arg(*app,object); */
/*    } */

/*    va_end(ap); */

/*   return IapplyVector(fun,i,b); */
/*  } */
 

/* static object */
/* ImakeStructure(int n, object *p) */
/* p[0]= structure name , p[1] = 1'st elt,.... p[n-1] = last elt. */ 
      
          
/* { object * r = vs_top; */
/*   object res; */
/*   if (p+n != r) { FEerror("bad make struct",0);} */
/*   vs_base= p; */
/*   siLmake_structure(); */
/*   res = vs_base[0]; */
/*   vs_top=p; */
/*   return res; */
/* } */

object
Icheck_one_type(object x, enum type t)
{ if (x->d.t != t)
    { return CEerror("Expected a ~a ","Supply right type",1,type_name(t),Cnil,Cnil,Cnil);
    }
  return x;
}


object
fSincorrect_type(object val, object type)
{ return CEerror("Got ~a,Expected a ~a","Supply a new one",1,val,type,Cnil,Cnil);
}

/* static void */
/* Ineed_in_image(object (*foo) (/\* ??? *\/)) */
/* {;} */

/* Convert a value stack type return to an fcall multiple vaule return
   and return the actual value (or nil if no values);  */
object
Ivs_values(void)
{ int n = fcall.nvalues = vs_top - vs_base;
  object *b = vs_base,*p=&fcall.values[0];
  object res = (n > 0 ? b[0] : sLnil);
  if (n>=sizeof(fcall.values)/sizeof(*fcall.values))
    FEerror("Too many function call values",0);
  while (--n > 0)
    { *++p= *++b;}
  return res;
}
  
			
/* static void */
/* fatal(char *s, int i1, int i2) */
/* { */
/*   fprintf(stderr,s,i1,i2); */
/*   exit(1); */
/* } */
  
  
  
/* Copy STRING to  BUF which has N bytes available.
   If there is not enough space, malloc some */
char *
lisp_copy_to_null_terminated(object string, char *buf, int n)
{ if(type_of(string) != t_string
      && type_of(string) != t_symbol)
    FEerror("Need to give symbol or string",0);
  if (string->st.st_fillp +1 > n)
    { buf= (void *)malloc(string->st.st_fillp +1);
    }
  bcopy(string->st.st_self,buf,string->st.st_fillp);
  buf[string->st.st_fillp] = 0;
  return buf;
}
  

