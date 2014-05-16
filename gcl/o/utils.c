#include <stdarg.h>
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
