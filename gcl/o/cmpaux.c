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

	cmpaux.c
*/

#include <sys/types.h>
#include <sys/stat.h>
     
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#define NEED_MP_H
#include "include.h"
#define dcheck_type(a,b) check_type(a,b)

#include "page.h"

DEFUN("SPECIALP",object,fSspecialp,SI,1,1,NONE,OO,OO,OO,OO,(object sym),"") {
  RETURN1((type_of(sym) == t_symbol && (enum stype)sym->s.s_stype == stp_special) ? Ct : Cnil);
}

DEFUN("BIG-TO-DOUBLE",object,fSbig_to_double,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  if (type_of(x)!=t_bignum)
    TYPE_ERROR(x,sLbignum);
  RETURN1(make_longfloat(big_to_double(x)));
}

DEFUN("LONG-TO-SHORT",object,fSlong_to_short,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  if (type_of(x)!=t_longfloat)
    TYPE_ERROR(x,sLlong_float);
  RETURN1(make_shortfloat((float)lf(x)));
}

DEFUN("COMPLEX-REAL",object,fScomplex_real,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  if (type_of(x)!=t_complex)
    TYPE_ERROR(x,sLcomplex);
  RETURN1(x->cmp.cmp_real);
}

DEFUN("COMPLEX-IMAG",object,fScomplex_imag,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  if (type_of(x)!=t_complex)
    TYPE_ERROR(x,sLcomplex);
  RETURN1(x->cmp.cmp_imag);
}

DEFUN("RATIO-NUMERATOR",object,fSratio_numerator,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  if (type_of(x)!=t_ratio)
    TYPE_ERROR(x,sLratio);
  RETURN1(x->rat.rat_num);
}

DEFUN("RATIO-DENOMINATOR",object,fSratio_denominator,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  if (type_of(x)!=t_ratio)
    TYPE_ERROR(x,sLratio);
  RETURN1(x->rat.rat_den);
}

DEFUN("C-TYPE",object,fSc_type,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {
  RETURN1(make_fixnum(type_of(x)));
}
DEFCONST("C-TYPE-MAX", sSc_type_max,SI,make_fixnum(t_end-1),"");

DEF_ORDINARY("DEBUGGER",sSdebugger,SI,"");

DEFUN("DEFVAR1",object,fSdefvar1,SI
	  ,2,3,NONE,OO,OO,OO,OO,(object sym,object val,...),"") {

  object doc,l=Cnil,f=OBJNULL;
  va_list ap;
  fixnum n=INIT_NARGS(2);
  
  va_start(ap,val);
  doc=NEXT_ARG(n,ap,l,f,Cnil);
  va_end(ap);
  
  if (sym->s.s_dbind==OBJNULL && n>1)
    sym->s.s_dbind= val;
  sym->s.s_stype=(short)stp_special;
  if (n>2)
    putprop(sym,doc,sSvariable_documentation);
  RETURN1(sym);
}


DEFUN("DEBUGGER",object,fSdebugger,SI
       ,2,2,NONE,OO,OO,OO,OO,(object sym,object val),"")
{ /* 2 args */
  putprop(sym,val,sSdebugger);
  RETURN1(sym);
}


DEFUN("SETVV",object,fSsetvv,SI
       ,2,2,NONE,OO,OO,OO,OO,(object index,object val),"")
{ /* 2 args */
  if(type_of(sSPmemory->s.s_dbind)==t_cfdata)
  sSPmemory->s.s_dbind->cfd.cfd_self[fix(index)]=val;
  else FEerror("setvv called outside %init",0);
  RETURN1(index);
}

DEFVAR("%MEMORY",sSPmemory,SI,OBJNULL,"");
DEFVAR("%INIT",sSPinit,SI,OBJNULL,"");

/* void Lidentity(void); */
void
gcl_init_cmpaux(void)
{


	/* real one defined in predlib.lsp, need this for bootstrap */
/* 	make_si_function("WARN-VERSION",Lidentity); */
	
}

  
/* Now inlined directly by optimizer  */
/* int */
/* ifloor(int x, int y) */
/* { */
/*   if (y == 0) { */
/*     FEerror("Zero divizor", 0); */
/*     return 0; */
/*   } */
/*   if (y > 0) { */
/*     if (x >= 0) */
/*       return(x/y); */
/*     else */
      /* FIXME, deal with possible overflow here*/
/*       return(-((-x-1))/y-1); */
/*   } */
/*   if (x >= 0) */
      /* FIXME, deal with possible overflow here*/
/*     return(-((x-1)/(-y))-1); */
/*   else */
/*     return((-x)/(-y)); */
/* } */

/* int */
/* imod(int x, int y) */
/* { */
/*   return(x - ifloor(x, y)*y); */
/* } */

/* static void */
/* set_VV(object *, int, object); */

/* static void */
/* set_VV_data(object *VV, int n, object data, char *start, int size) */
/* {set_VV(VV,n,data); */
/*  data->cfd.cfd_start=start; */
/*  data->cfd.cfd_size = size; */
/* } */

/* static void */
/* set_VV(object *VV, int n, object data) */
/* { */
/* 	object *p, *q; */

/* 	p = VV; */
/* 	q = data->v.v_self; */
/* 	while (n-- > 0) */
/* 		*p++ = *q++; */
/* 	data->cfd.cfd_self = VV; */
/* } */

/*
	Conversions to C
*/


dcomplex
object_to_dcomplex(object x) {
  
  dcomplex d=0;
  
  switch(type_of(x)) {
  case t_fixnum:
    d=fix(x);
    break;
  case t_bignum:
    d=mpz_get_si(MP(x));
    break;
  case t_character:
    d=char_code(x);
    break;
  case t_ratio:
    d=number_to_double(x);
    break;
  case t_shortfloat:
    d=sf(x);
    break;
  case t_longfloat:
    d=lf(x);
    break;
  case t_complex:
    d=(double)object_to_dcomplex(x->cmp.cmp_real)+I*(double)object_to_dcomplex(x->cmp.cmp_imag);
    break;
  default:
    FEcannot_coerce(sLfloat,x);
    break;
  }
  
  return d;
  
}


void *
object_to_pointer(object x) {
  
  void *d=0;
  
  switch(type_of(x)) {
  case t_vector:
  case t_bitvector:
  case t_symbol:
  case t_string:
  case t_array:
  case t_character:
    d=x->v.v_self;
    break;
  default:
    FEcannot_coerce(sLfloat,x);
    break;
  }
  
  return d;
  
}


char
object_to_char(object x)
{
	int c=0;
 	switch (type_of(x)) {
	case t_fixnum:
		c = fix(x);  break;
	case t_bignum:
	  {
	    fixnum fx;
	    fx=mpz_get_si(MP(x));
	    c=fx&0xff;
	    break;
	  }
	case t_character:
		c = char_code(x);  break;
	default:
		FEcannot_coerce(sLcharacter,x);
	}
	return(c);
}

int
object_to_int(object x)
{
	int i=0;

	switch (type_of(x)) {
	case t_character:
		i = char_code(x);  break;
	case t_fixnum:
		i = fix(x);  break;
	case t_bignum:
	  i = number_to_double(x);
	  break;
	case t_ratio:
		i = number_to_double(x);  break;
	case t_shortfloat:
		i = sf(x);  break;
	case t_longfloat:
		i = lf(x);  break;
	default:
		FEcannot_coerce(sLinteger,x);
	}
	return(i);
}

fixnum
object_to_fixnum(object x)
{
	fixnum i=0;

	switch (type_of(x)) {
	case t_character:
	  i = char_code(x);  break;
	case t_fixnum:
	  i = fix(x);  break;
	case t_bignum:
	  i = FFN(fSmpz_get_si(x)); break;
	  break;
	case t_ratio:
	  i = number_to_double(x);  break;
	case t_shortfloat:
	  i = sf(x);  break;
	case t_longfloat:
	  i = lf(x);  break;
	default:
	  FEcannot_coerce(sLinteger,x);
	}
	return(i);
}

fixnum object_to_long(object x) {return object_to_fixnum(x);}
fixnum object_to_short(object x) {return object_to_fixnum(x);}


float 
object_to_float(object x) 
{ 
	float f=0.0; 

	switch (type_of(x)) { 
	case t_character: 
		f = char_code(x);  break; 
	case t_fixnum: 
		f = fix(x);  break; 
	case t_bignum: 
	case t_ratio: 
		f = number_to_double(x);  break; 
	case t_shortfloat: 
		f = sf(x);  break; 
	case t_longfloat: 
		f = lf(x);  break; 
	default: 
		FEcannot_coerce(sLfloat,x);
	} 
	return(f); 
} 

object
make_fcomplex(fcomplex x) {

  object r,i,y;
  r=make_shortfloat(creal(x));
  i=make_shortfloat(cimag(x));
  y=alloc_object(t_complex);
  y->cmp.cmp_real=r;
  y->cmp.cmp_imag=i;
  y->cmp.tt=2;/*FIXME centralize*/
  return y;
}

fcomplex 
object_to_fcomplex(object x) 
{ 
	fcomplex f=0.0; 

	switch (type_of(x)) { 
	case t_character: 
		f = char_code(x);  break; 
	case t_fixnum: 
		f = fix(x);  break; 
	case t_bignum: 
	case t_ratio: 
		f = number_to_double(x);  break; 
	case t_shortfloat: 
		f = sf(x);  break; 
	case t_longfloat: 
		f = lf(x);  break; 
	case t_complex: 
		f = object_to_float(x->cmp.cmp_real)+object_to_float(x->cmp.cmp_imag)*I;  break; 
	default: 
		FEcannot_coerce(sLfloat,x);
	} 
	return(f); 
} 

object
make_dcomplex(dcomplex x) {

  object r,i,y;
  r=make_longfloat(creal(x));
  i=make_longfloat(cimag(x));
  y=alloc_object(t_complex);
  y->cmp.cmp_real=r;
  y->cmp.cmp_imag=i;
  y->cmp.tt=3;/*FIXME centralize*/
  return y;
}

dcomplex 
object_to_dcomplex1(object x) 
{ 
	dcomplex f=0.0; 

	switch (type_of(x)) { 
	case t_character: 
		f = char_code(x);  break; 
	case t_fixnum: 
		f = fix(x);  break; 
	case t_bignum: 
	case t_ratio: 
		f = number_to_double(x);  break; 
	case t_shortfloat: 
		f = sf(x);  break; 
	case t_longfloat: 
		f = lf(x);  break; 
	case t_complex: 
		f = object_to_double(x->cmp.cmp_real)+I*object_to_double(x->cmp.cmp_imag);  break; 
	default: 
		FEcannot_coerce(sLfloat,x);
	} 
	return(f); 
} 

double 
object_to_double(object x) 
{ 
	double d=0.0; 

	switch (type_of(x)) { 
	case t_character: 
		d = char_code(x);  break; 
	case t_fixnum: 
		d = fix(x);  break; 
	case t_bignum: 
	case t_ratio: 
		d = number_to_double(x);  break; 
	case t_shortfloat: 
		d = sf(x);  break; 
	case t_longfloat: 
		d = lf(x);  break; 
	default: 
		FEcannot_coerce(sLdouble_float,x);
	} 
	return(d); 
} 

/* this may allocate storage.  The user can prevent this
   by providing a string will fillpointer < length and
   have a null character in the fillpointer position. */

char *
object_to_string(object x) { 

  unsigned int leng;
  char *res;

  if (type_of(x)!=t_string) FEwrong_type_argument(sLstring,x);
  leng= x->st.st_fillp;
  /* user has thoughtfully provided a null terminated string ! */
  if (leng > 0 && leng < x->st.st_dim && x->st.st_self[leng]==0)
    return x->st.st_self;

  if (x->st.st_dim == leng && leng % sizeof(object) && MAYBE_DATA_P(x->st.st_self)) {
    x->st.st_self[leng] = 0;
    return x->st.st_self;
  }  
  
  res=malloc(leng+1);
  bcopy(x->st.st_self,res,leng);
  res[leng]=0;
  return res;

}

void
call_init(int init_address, object memory, object fasl_vec, FUNC fptr)
{object form;
 FUNC at;
/* #ifdef CLEAR_CACHE */
/*  static int n; */
/*  static sigset_t ss; */

/*  if (!n) { */
/*      struct sigaction sa={{(void *)sigh},{{0}},SA_RESTART|SA_SIGINFO,NULL}; */

/*      sigaction(SIGILL,&sa,NULL); */
/*      sigemptyset(&ss); */
/*      sigaddset(&ss,SIGILL); */
/*      sigprocmask(SIG_BLOCK,&ss,NULL); */
/*      n=1; */
/*  } */
/* #endif */


  check_type(fasl_vec,t_vector);
  form=(fasl_vec->v.v_self[fasl_vec->v.v_fillp -1]);

 if (fptr) at = fptr;
  else 
 at=(FUNC)(memory->cfd.cfd_start+ init_address );
 
#ifdef VERIFY_INIT
 VERIFY_INIT
#endif
   
 if (consp(form) &&
     form->c.c_car == sSPinit)
   {bds_bind(sSPinit,fasl_vec);
    bds_bind(sSPmemory,memory);
/* #ifdef CLEAR_CACHE */
/*     sigprocmask(SIG_UNBLOCK,&ss,NULL); */
/* #endif */
    (*at)();
/* #ifdef CLEAR_CACHE */
/*     sigprocmask(SIG_BLOCK,&ss,NULL); */
/* #endif */
    bds_unwind1;
    bds_unwind1;
  }
 else
   /* old style three arg init, with all init being done by C code. */
   {memory->cfd.cfd_self = fasl_vec->v.v_self;
    memory->cfd.cfd_fillp = fasl_vec->v.v_fillp;
/* #ifdef CLEAR_CACHE */
/*     sigprocmask(SIG_UNBLOCK,&ss,NULL); */
/* #endif */
    (*at)(memory->cfd.cfd_start, memory->cfd.cfd_size, memory);
/* #ifdef CLEAR_CACHE */
/*     sigprocmask(SIG_BLOCK,&ss,NULL); */
/* #endif */
}}

/* statVV is the address of some static storage, which is used by the
   cfunctions to refer to global variables,..
   Initially it holds a number of addresses.   We also have sSPmemory->s.s_dbind
   which points to a vector  of lisp constants.   We switch the
   fn addresses and lisp constants.   We follow this convoluted path,
   since we don't wish to have a separate block of data space allocated
   in the object module simply to temporarily have access to the
   actual function addresses during load. 

   */

void
do_init(object *statVV)
{object fasl_vec=sSPinit->s.s_dbind;
 object data = sSPmemory->s.s_dbind;
 {object *p,*q,y;
  int n=fasl_vec->v.v_fillp -1;
  int i;
  object form;
  check_type(fasl_vec,t_vector);
  form = fasl_vec->v.v_self[n];
  dcheck_type(form,t_cons);  


  /* switch SPinit to point to a vector of function addresses */
     
  fasl_vec->v.tt=fasl_vec->v.v_elttype = aet_fix;
  fasl_vec->v.v_eltsize = elt_size(aet_fix);
  fasl_vec->v.v_defrank=1;
  fasl_vec->v.v_dim *= (sizeof(object)/sizeof(fixnum));
  fasl_vec->v.v_fillp *= (sizeof(object)/sizeof(fixnum));
  
  /* swap the entries */
  p = fasl_vec->v.v_self;

  q = statVV;
  for (i=0; i<=n ; i++)
    {  y = *p;
     *p++ = *q;
     *q++ = y;
     }
  
  data->cfd.cfd_self = statVV;
  data->cfd.cfd_fillp= n+1;
  statVV[n] = data;
  

  /* So now the fasl_vec is a fixnum array, containing random addresses of c
     functions and other stuff from the compiled code.
     data is what it wants to be for the init
  */
  /* Now we can run the forms f1 f2 in form= (%init f1 f2 ...) */

  form=form->c.c_cdr;
  {object *top=vs_top;
   
   for(i=0 ; i< form->v.v_fillp; i++)
     { 
       eval(form->v.v_self[i]);
       vs_top=top;
     }
 }
}}

#ifdef DOS
#define PATH_LIM 8
#define TYPE_LIM 3
char *
fix_path_string_dos(s)
char *s;
{char buf[200];
 char *p=s,*q=buf;
 int i=PATH_LIM;	
 while(*p)
  {
   if (IS_DIR_SEPARATOR(*p)) i=PATH_LIM;
    else if (*p == '.') i = TYPE_LIM;
    else i--;
   if (i>=0) *q++ = *p;
   p++;}
 *q = 0;
 strcpy(s,buf);
 return s;
}
	
#endif

void
gcl_init_or_load1(void (*fn)(void),const char *file)
{int n=strlen(file);
 if (file[n-1]=='o')
   { object memory;
     object fasl_data;
     file=FIX_PATH_STRING(file);

     memory=alloc_object(t_cfdata);
     memory->cfd.cfd_self=0;
     memory->cfd.cfd_fillp=0;
     memory->cfd.cfd_size = 0;
     printf("Initializing %s\n",file); fflush(stdout);
     memory->cfd.cfd_start= (char *)fn;
     memory->cfd.cfd_dlist=Cnil;
     fasl_data = read_fasl_data(file);
     call_init(0,memory,fasl_data,0);
  }
 else
  {printf("loading %s\n",file); fflush(stdout);  load(file);}
}

DEFUN("INIT-CMP-ANON", object, fSinit_cmp_anon, SI, 0, 0,
       NONE, OO, OO, OO,OO,(void),
      "Initialize previously compiled and linked anonymous function from the \
.text section of the running executable.  This function is inherently \
dangerous, and is meant as a work-around to facilitate the production \
of an ansi GCL image on systems which must currently link using \
dlopen.  On such systems, it is imposible to compile and load \
anonymous functions as part of the initialization sequence of the lisp \
image, as is done in pcl, and preserve that function across a \
save-system call.  The approach here is to provide a flag to GCL's \
compile function which will direct the algorithm to forgo \
recompilation and loading in favor of initialization via this \
function.")
{

  int i;

  i=gcl_init_cmp_anon();
  if (i<0) 
    FEerror("No such anonymous function",0);

  return i ? Cnil : Ct;

}

object
find_init_name1(char *s,unsigned len) {
#ifdef _WIN32

  char *tmp;

  if (len) {
    tmp=alloca(len+1);
    memcpy(tmp,s,len);
    tmp[len]=0;
  } else
    tmp=s;

  return find_init_string(tmp);

#else    
  struct stat ss;
  char *tmp,*q;
  FILE *f;

  if (len) {
    tmp=alloca(len+1);
    memcpy(tmp,s,len);
    tmp[len]=0;
  } else
    tmp=s;
  if (stat(tmp,&ss))
    FEerror("File ~a does not exist",1,make_simple_string(tmp));
  if (!(f=fopen(tmp,"rb")))
    FEerror("Cannot open ~a for binary reading",1,make_simple_string(tmp));
  tmp=alloca(ss.st_size+1);
  if (fread(tmp,1,ss.st_size,f)!=ss.st_size)
    FEerror("Error reading binary file",0);
  fclose(f);
  for (s=tmp;s<tmp+ss.st_size && strncmp(s,"init_",5);q=strstr(s+1,"init_"),s=q ? q : s+strlen(s)+1);
  if (strncmp(s,"init_",5))
    FEerror("Init name not found",0);
  return make_simple_string(s);
#endif  /* _WIN32 */

}
 

DEFUN("FIND-INIT-NAME", object, fSfind_init_name, SI, 1, 1,
	  NONE, OO, OO, OO,OO,(object namestring),"") 
{

  check_type_string(&namestring);
  return find_init_name1(namestring->st.st_self,namestring->st.st_dim);

}

