#include "include.h"

/* The functions IisProp check the property holds, and return the
   argument.   They may in future allow resetting the argument.
*/

object CEerror();
object
IisSymbol(f)
object f;
{ if (type_of(f) != t_symbol)
   { FEerror("Not a symbol ~s",1,f); }
  return f;
}

object
IisFboundp(f)
     object f;
{ 
  IisSymbol(f);
  if (f->s.s_gfdef ==0)
    { FEerror("Not a fboundp ~s",1,f);}
  return f;
}

object
IisArray(f)
object f;
{ if (TS_MEMBER(type_of(f),
		TS(t_array)
		|TS(t_vector)
		|TS(t_bitvector)
		|TS(t_string)))
    return f;
  else
   { FEerror("Not an array ~s",1,f); return f;
	}	
}

object
Iis_fixnum(f)
     object f;
{ if (type_of(f)==t_fixnum)
    { return f;}
  else
    {  FEerror("Not a fixnum ~s",1,f); return f;
      
    }
}

void Wrong_type_error(str,n,va_alist)
     char *str;
     int n;
     va_dcl
{ FEerror("Wrong type error",0);
}

object
Iapply_ap(f,ap)
/* Apply f to the va_list ap, with an implicit number of args
   passed in VFUN_NARGS */
va_list ap;
object (*f)();
{ int n = VFUN_NARGS;
  object *new;
  COERCE_VA_LIST(new,ap,n);
  return c_apply_n(f,n,ap);
}

object
Ifuncall_n(fun,n,va_alist)
/* call fun on the n optional args supplied, and set the fcall.nvalues etc
   return the first value */
object fun;
int n;
va_dcl
{va_list ap;
 object *new;
 va_start(ap);
 {COERCE_VA_LIST(new,ap,n);
 return IapplyVector(fun,n,new);
 va_end(ap);
}
}



/* For applying FUN to args in VA_LIST, where n are supplied directly
   and the last one is itself a va_list */
object
Iapply_fun_n(fun,n,m,va_alist)
object fun;
int n,m;
va_dcl
{va_list ap1,ap;
 object b[F_ARG_LIMIT];
 int i = 0;
 va_start(ap1);

 while (--n >= 0)
   { b[i++] = va_arg(ap1,object);}
 if (m > 0) {
   ap =	 va_arg(ap1,va_list);
   while (--m >= 0)
     { b[i++] = va_arg(ap,object);}
 }
 return IapplyVector(fun,i,b);
}
 

object
ImakeStructure(n,p)
/* p[0]= structure name , p[1] = 1'st elt,.... p[n-1] = last elt. */ 
int n;
object *p;
{ object * r = vs_top;
  object res;
  if (p+n != r) { FEerror("bad make struct",0);}
  vs_base= p;
  siLmake_structure();
  res = vs_base[0];
  vs_top=p;
  return res;
}

object
Icheck_one_type(x,t)
object x;
enum type t;
{ if (x->d.t != t)
    { return CEerror("Expected a ~a ","Supply right type",1,type_name(t));
    }
  return x;
}


object
fSincorrect_type(val,type)
     object val,type;
{ return CEerror("Got ~a,Expected a ~a","Supply a new one",1,val,type);
}

void
Ineed_in_image(foo)
     object (*foo)();
{;}

/* Convert a value stack type return to an fcall multiple vaule return
   and return the actual value (or nil if no values);  */
object
Ivs_values()
{ int n = fcall.nvalues = vs_top - vs_base;
  object *b = vs_base,*p=&fcall.values[0];
  object res = (n > 0 ? b[0] : sLnil);
  while (--n > 0)
    { *++p= *++b;}
  return res;
}
  
			
void
fatal(s,i1,i2)
     char *s;
     int i1;
     int i2;
{
  fprintf(stderr,s,i1,i2);
  exit(1);
}
  
  
  
/* Copy STRING to  BUF which has N bytes available.
   If there is not enough space, malloc some */
char *
lisp_copy_to_null_terminated(string,buf,n)
     char *buf;
     int n;
     object string;
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
  

