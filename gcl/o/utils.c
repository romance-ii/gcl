#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "include.h"

/* The functions IisProp check the property holds, and return the
 * argument.
 * They may in future allow resetting the argument.
 */

/* object CEerror(char *error_str, char *cont_str, int num, object arg1, */
/* 	       object arg2, object arg3, object arg4); */
object IisSymbol(object f)
{
    if (type_of(f) != t_symbol) 
	FEwrong_type_argument(sLsymbol, f);
    return f;
}

object IisArray(object f)
{
    if (!TS_MEMBER(type_of(f), TS(t_array)
		  | TS(t_vector)
		  | TS(t_bitvector)
		  | TS(t_string)))
	FEwrong_type_argument(sLarray, f);
    return f;
}

object Iis_fixnum(object f)
{
    if (type_of(f) != t_fixnum)
	FEwrong_type_argument(sLfixnum, f);
    return f;
}

/* TODO: needs change in array.c */
/* void Wrong_type_error(char *str, int n, ...) */
/* { */
/*     FEerror("Wrong type error", 0); */
/* } */

/* Apply f to the va_list ap, with an implicit number of args
   passed in VFUN_NARGS */
object Iapply_ap_new(object(*f) ( /* ??? */ ), object first, va_list ap)
{
    int n = VFUN_NARGS;
    object *new;
    COERCE_VA_LIST_NEW(new, first, ap, n);
    return c_apply_n(f, n, new);
}

/* call fun on the n optional args supplied, and set the fcall.nvalues etc
   return the first value */
object Ifuncall_n(object fun, int n, ...)
{
    va_list ap;
    object *new;
    va_start(ap, n);
    {
	COERCE_VA_LIST(new, ap, n);
    }
    va_end(ap);
    return IapplyVector(fun, n, new);
}

/* TODO: check array.c and nfunlink.c */
/* object Icheck_one_type(object x, enum type t) */
/* { */
/*     if (type_of(x) != t) { */
/* 	return CEerror("Expected a ~a ", "Supply right type", 1, */
/* 		       type_name(t), Cnil, Cnil, Cnil); */
/*     } */
/*     return x; */
/* } */

/* TODO: check array.c - 3 differnt tools to signal a type error !!! */
/* object fSincorrect_type(object val, object type) */
/* { */
/*     return CEerror("Got ~a,Expected a ~a", "Supply a new one", 2, val, */
/* 		   type, Cnil, Cnil); */
/* } */

/* Convert a value stack type return to an fcall multiple vaule return
   and return the actual value (or nil if no values);  */
object Ivs_values(void)
{
    int n = fcall.nvalues = vs_top - vs_base;
    object *b = vs_base, *p = &fcall.values[0];
    object res = (n > 0 ? b[0] : sLnil);
    if (n >= sizeof(fcall.values) / sizeof(*fcall.values))
	FEerror("Too many function call values", 0);
    while (--n > 0) {
	*++p = *++b;
    }
    return res;
}

/* Copy STRING to  BUF which has N bytes available.
   If there is not enough space, malloc some */
char *lisp_copy_to_null_terminated(object string, char *buf, int n)
{
    if (type_of(string) != t_string && type_of(string) != t_symbol)
	FEerror("Need to give symbol or string", 0);
    if (string->st.st_fillp + 1 > n) {
	buf = (void *) malloc(string->st.st_fillp + 1);
    }
    bcopy(string->st.st_self, buf, string->st.st_fillp);
    buf[string->st.st_fillp] = 0;
    return buf;
}

/* deleted the following junk : */

/* IisFboundp(object f) */
/* Iapply_ap(object (*f) (/\* ??? *\/), va_list ap) */
/* Iapply_fun_n(object fun,int n,int m,...) { */
/* Iapply_fun_n1(object (*fun)(),int n,int m,...) { */
/* Iapply_fun_n2(object fun,int n,int m,...) { */
/* ImakeStructure(int n, object *p) */
/* Ineed_in_image(object (*foo) (/\* ??? *\/)) */

/* pull them from CVS if in need - they destroy readabilty of code */
