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
	cfun.c
*/

#include "include.h"
#include <dlfcn.h>
#include "page.h"

#define dcheck_vs do{if (vs_base < vs_org || vs_top < vs_org) error("bad vs");} while (0)
#define dcheck_type(a,b) check_type(a,b) ; dcheck_vs 

#define PADDR(i) ((void *)(long)(sSPinit->s.s_dbind->v.v_self[fix(i)]))
object sSPinit,sSPmemory;

object
make_cfun(void (*self)(), object name, object data, char *start, int size)
{
	object cf;

	cf = alloc_object(t_cfun);
	cf->cf.cf_self = self;
	cf->cf.cf_name = name;
	cf->cf.cf_data = data;
	if(data && type_of(data)==t_cfdata)
	  { data->cfd.cfd_start=start; 
	    data->cfd.cfd_size=size;}
	  else if(size) FEerror("Bad call to make_cfun",0);
	return(cf);
}
object
make_sfun(object name, object (*self)(), int argd, object data,fixnum nval) {
  object sfn;
       
  sfn = alloc_object(t_sfun);
  if(argd >15) set_type_of(sfn,t_gfun);
  sfn->sfn.sfn_self = self;
  sfn->sfn.sfn_name = name;
  sfn->sfn.sfn_data = data;
  sfn->sfn.sfn_argd = argd  | (nval ? MVRET_BIT : 0);
  sfn->sfn.sfn_nval=  nval;
  return(sfn);

}

#define VFUN_MIN_ARGS(argd) (argd & 0xff)
#define VFUN_MV_BITS(argd)  ((argd) >> 8)
#define VFUN_MAX_ARGS(argd) ((argd) >> 16)

static object
make_vfun(object name, object (*self)(), int argd, object data,fixnum nval)
{object vfn;
       
	vfn = alloc_object(t_vfun);
	vfn->vfn.vfn_self = self;
	vfn->vfn.vfn_name = name;
	vfn->vfn.vfn_minargs = VFUN_MIN_ARGS(argd);
        vfn->vfn.vfn_mv      = VFUN_MV_BITS (argd);
        vfn->vfn.vfn_maxargs = VFUN_MAX_ARGS(argd);
        vfn->vfn.vfn_data = data;
        vfn->vfn.vfn_nval = nval;
/* 	if (nval) set_type_of(vfn,t_gfun); */
	return(vfn);
}

void
turbo_closure(object fun)
{
  object l,*block;
  int n;

/*   if(fun->cc.cc_turbo==NULL) */
  if(1)
    {BEGIN_NO_INTERRUPT;
     for (n = 0, l = fun->cc.cc_env;  !endp(l);  n++, l = l->c.c_cdr);
    {
     block= AR_ALLOC(alloc_contblock,(1+n),object);
     *block=make_fixnum(n);
     fun->cc.cc_turbo = block+1; /* equivalent to &block[1] */
     for (n = 0, l = fun->cc.cc_env;  !endp(l);  n++, l = l->c.c_cdr)
       fun->cc.cc_turbo[n] = l;}
      END_NO_INTERRUPT;
   }
}

DEFUN_NEW("TURBO-CLOSURE",object,fSturbo_closure,SI
   ,1,1,NONE,OO,OO,OO,OO,(object funobj),"")

{
	/* 1 args */
	if (type_of(funobj) == t_cclosure)
		turbo_closure(funobj);
	RETURN1(funobj);
}



object
make_cclosure_new(void (*self)(), object name, object env, object data)
{
	object cc;

	cc = alloc_object(t_cclosure);
	cc->cc.cc_self = self;
	cc->cc.cc_name = name;
	cc->cc.cc_env = env;
	cc->cc.cc_data = data;
	cc->cc.cc_turbo = NULL;
	turbo_closure(cc);
	return(cc);
}


/* object */
/* make_cclosure(void (*self)(), object name, object env, object data, char *start, int size) */
/* { */
/* 	if(data && type_of(data)==t_cfdata) */
/* 	  { data->cfd.cfd_start=start;  */
/* 	    data->cfd.cfd_size=size;} */
/* 	  else if(size) FEerror("Bad call to make_cclosure",0); */
/* 	return make_cclosure_new(self,name,env,data); */

/* } */


DEFUN_NEW("MC",object,fSmc,SI
   ,2,2,NONE,OO,OO,OO,OO,(object name,object address),"") 
{ /* 2 args */
  dcheck_type(name,t_symbol);
  dcheck_type(address,t_fixnum);
  dcheck_type(sSPmemory->s.s_dbind,t_cfdata);
  name=make_cclosure_new(PADDR(address),name,Cnil,
			 sSPmemory->s.s_dbind);
  RETURN1(name);
}

DEFUN_NEW("CFDL",object,fScfdl,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {

  struct typemanager *tm=tm_of(t_cfdata);
  extern long maxpage;
  unsigned long i;
  int j;
  object x;
  void *p;
  for (i=0;i<maxpage;i++) {
    if (tm!=tm_of(type_map[i]))
      continue;
    for (p=pagetochar(i),j=tm->tm_nppage;j>0;--j,p+=tm->tm_size) {
      x=(object)p;
      if (type_of(x)!=t_cfdata || is_marked_or_free(x))
	continue;
      for (x=x->cfd.cfd_dlist;x!=Cnil;x=x->c.c_cdr) {
	fixnum j=fix(x->c.c_car->c.c_cdr),k=fix(x->c.c_car->c.c_car->s.s_dbind);
	if (*(fixnum *)j!=k)
	  *(fixnum *)j=k;
      }
    }
  }
  RETURN1(Cnil);
}
    
DEFUN_NEW("DLSYM",object,fSdlsym,SI,2,2,NONE,OI,OO,OO,OO,(fixnum h,object name),"") {

  char ch,*er;
  void *ad;

  dlerror();
  ch=name->st.st_self[name->st.st_fillp];
  name->st.st_self[name->st.st_fillp]=0;
  if (h) {
    ad=dlsym((void *)h,name->st.st_self);
    if (!dlerror()) {
      name->st.st_self[name->st.st_fillp]=ch;
      RETURN1(make_fixnum((fixnum)ad));
    }
  }
  ad=dlsym(RTLD_DEFAULT,name->st.st_self);
  if ((er=dlerror()))
    FEerror("dlsym lookup failure on ~s: ~s",2,name,make_simple_string(er));
  name->st.st_self[name->st.st_fillp]=ch;
  RETURN1(make_fixnum((fixnum)ad));

}

DEFUN_NEW("DLADDR",object,fSdladdr,SI,1,1,NONE,OI,OO,OO,OO,(fixnum ad),"") {

  Dl_info info;
  unsigned long u;
  const char *c;

  dlerror();
  dladdr((void *)ad,&info);
  if (dlerror())
    FEerror("dladdr lookup failure on ~s",1,make_fixnum(ad));
  u=(unsigned)info.dli_fbase;
  c=info.dli_fname;
  if (u>=DBEGIN && u<(unsigned long)core_end)
    c="";

  RETURN1(coerce_to_pathname(make_simple_string(c)));

}

DEFUN_NEW("DLOPEN",object,fSdlopen,SI,1,1,NONE,OO,OO,OO,OO,(object name),"") {

  char ch;
  void *v;

  dlerror();
  ch=name->st.st_self[name->st.st_fillp];
  name->st.st_self[name->st.st_fillp]=0;
  v=dlopen(name->st.st_fillp ? name->st.st_self : 0,RTLD_LAZY|RTLD_GLOBAL);
  name->st.st_self[name->st.st_fillp]=ch;
  if (dlerror())
    FEerror("dlopen faiure on ~s",1,name);
  
  RETURN1(make_fixnum((fixnum)v));

}

DEFUN_NEW("DLADDR-SET",object,fSdladdr_set,SI,2,2,NONE,OI,IO,OO,OO,(fixnum adp,fixnum ad),"") {

  *(void **)adp=(void *)ad;
  RETURN1(Cnil);

}

DEFUN_NEW("DLLIST-PUSH",object,fSdllist_push,SI,3,3,NONE,OO,OI,OO,OO,(object cfd,object sym,fixnum adp),"") {

  cfd->cfd.cfd_dlist=MMcons(MMcons(sym,make_fixnum(adp)),cfd->cfd.cfd_dlist);
  RETURN1(Cnil);

}

static object
MFsfun(object sym, object (*self)(), int argd, object data,fixnum nval)
{object sfn;
 if (type_of(sym)!=t_symbol) not_a_symbol(sym);
 if (sym->s.s_sfdef != NOT_SPECIAL && sym->s.s_mflag)
   sym->s.s_sfdef = NOT_SPECIAL;
 sfn = make_sfun(sym,self,argd,data,nval);
 sym = clear_compiler_properties(sym,sfn);
 sym->s.s_gfdef = sfn;
 sym->s.s_mflag = FALSE;
 return sym;
}

DEFUN_NEW("MFSFUN",object,fSmfsfun,SI
   ,4,4,NONE,OO,OO,OO,OO,(object name,object address,object argd,object nval),"") 
{ /* 3 args */
  dcheck_type(address,t_fixnum);
  dcheck_type(argd,t_fixnum);
  dcheck_type(nval,t_fixnum);
  return MFsfun(name,PADDR(address),fix(argd),sSPmemory->s.s_dbind,fix(nval));RETURN1(name);
}


static object
MFvfun(object sym, object (*self)(), int argd, object data,fixnum nval)
{object vfn;
 if (type_of(sym)!=t_symbol) not_a_symbol(sym);
 if (sym->s.s_sfdef != NOT_SPECIAL && sym->s.s_mflag)
   sym->s.s_sfdef = NOT_SPECIAL;
 dcheck_type(data,t_cfdata);
 vfn = make_vfun(sym,self,argd,data,nval);
 sym = clear_compiler_properties(sym,vfn);
 sym->s.s_gfdef = vfn;
 sym->s.s_mflag = FALSE;
 return sym;
}

DEFUN_NEW("MFVFUN",object,fSmfvfun,SI
   ,4,4,NONE,OO,OO,OO,OO,(object name,object address,object argd,object nval),"")

{ 
  dcheck_type(argd,t_fixnum);
  dcheck_type(nval,t_fixnum);
  MFvfun(name,PADDR(address),fix(argd),sSPmemory->s.s_dbind,fix(nval));
  RETURN1(name);
}



static object
MFvfun_key(object sym, object (*self)(), int argd, object data, struct key *keys,fixnum nval)
{if (data) set_key_struct(keys,data);
 return MFvfun(sym,self,argd,data,nval);
}

DEFUN_NEW("MFVFUN-KEY",object,fSmfvfun_key,SI
   ,5,5,NONE,OO,OO,OO,OO,(object symbol,object address,object argd,object keys,object nval),"") 
{ /* 4 args */
  dcheck_type(argd,t_fixnum);
  dcheck_type(nval,t_fixnum);
 MFvfun_key(symbol,PADDR(address),fix(argd),sSPmemory->s.s_dbind,PADDR(keys),fix(nval));
 RETURN1(symbol);
}


static object MFnew(object sym, void (*self)(), object data)
{
	object cf;

	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if (sym->s.s_sfdef != NOT_SPECIAL && sym->s.s_mflag)
		sym->s.s_sfdef = NOT_SPECIAL;
	cf = alloc_object(t_cfun);
	cf->cf.cf_self = self;
	cf->cf.cf_name = sym;
	cf->cf.cf_data = data;
	sym = clear_compiler_properties(sym,cf);
 	sym->s.s_gfdef = cf;
	sym->s.s_mflag = FALSE;
	return sym;
}

DEFUN_NEW("MF",object,fSmf,SI
   ,2,2,NONE,OO,OO,OO,OO,(object name,object addr),"")

{ /* 2 args */
  MFnew(name,PADDR(addr),sSPmemory->s.s_dbind);
  RETURN1(name);
}


/* static object */
/* MF(object sym, void (*self)(), char *start, int size, object data) */
/* { if(data && type_of(data)==t_cfdata) */
/* 	  { data->cfd.cfd_start=start;  */
/* 	    data->cfd.cfd_size=size;} */
/* 	  else if(size) FEerror("Bad call to make_cfun",0); */
/*   return(MFnew(sym,self,data)); */
/* } */

static object
MM(object sym, void (*self)(), char *start, int size, object data)
{
	object cf;

	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if (sym->s.s_sfdef != NOT_SPECIAL)
	  if (symbol_value(sSAinhibit_macro_specialA) != Cnil)
	    sym->s.s_sfdef = NOT_SPECIAL;

/*  && sym->s.s_mflag) */
/* 		sym->s.s_sfdef = NOT_SPECIAL; */
	cf = alloc_object(t_cfun);
	cf->cf.cf_self = self;
	cf->cf.cf_name = sym;
	cf->cf.cf_data = data;
	data->cfd.cfd_start=start; 
	data->cfd.cfd_size=size;
	sym = 	clear_compiler_properties(sym,cf);
	sym->s.s_gfdef = cf;
	sym->s.s_mflag = TRUE;
	return sym;
}

DEFUN_NEW("MM",object,fSmm,SI
   ,2,2,NONE,OO,OO,OO,OO,(object name,object addr),"")

{ /* 2 args */
  MM(name,PADDR(addr),
    /* bit wasteful to pass these in just to be reset to themselves..*/
    sSPmemory->s.s_dbind->cfd.cfd_start,
    sSPmemory->s.s_dbind->cfd.cfd_size,
    sSPmemory->s.s_dbind
     );RETURN1(name);
}

  

object
make_function_internal(char *s, void (*f)())
{
	object x;
	vs_mark;

	x = make_ordinary(s);
	if (x->s.s_gfdef) {
	  printf("Skipping redefinition of %-.*s\n",(int)x->st.st_fillp,x->st.st_self);
	  return(x);
	}
	vs_push(x);
	x->s.s_gfdef = make_cfun(f, x, Cnil, NULL, 0);
	x->s.s_mflag = FALSE;
	vs_reset;
	return(x);
}

object
make_si_sfun_internal(char *s, object (*f) (), int argd) {  
  object x= make_si_ordinary(s);
  x->s.s_gfdef = make_sfun( x,f,argd,Cnil,0);
  x->s.s_mflag = FALSE;
  return(x);
}

/* static object */
/* make_si_vfun1(char *s, object (*f)(), int argd) */
/* {  object x= make_si_ordinary(s); */
/*    x->s.s_gfdef = make_vfun( x,f,argd, Cnil); */
/*    x->s.s_mflag = FALSE; */
/*    return(x); */
/* } */


object
make_si_function_internal(char *s, void (*f)())
{
	object x;
	vs_mark;

	x = make_si_ordinary(s);
	if (x->s.s_gfdef) {
	  printf("Skipping redefinition of %-.*s\n",(int)x->st.st_fillp,x->st.st_self);
	  return(x);
	}
	vs_push(x);
	x->s.s_gfdef = make_cfun(f, x, Cnil, NULL, 0);
	x->s.s_mflag = FALSE;
	vs_reset;
	return(x);
}




object
make_special_form_internal(char *s, void (*f)())
{
	object x;
	x = make_ordinary(s);
	x->s.s_sfdef = f;
	return(x);
}

object
make_macro_internal(char *s, void (*f)())
{
	object x;
	x = make_ordinary(s);
	x->s.s_gfdef = make_cfun(f, x, Cnil, NULL, 0);
	x->s.s_mflag=TRUE;
	return(x);
}

DEFUN_NEW("COMPILED-FUNCTION-NAME",object,fScompiled_function_name,SI
   ,1,1,NONE,OO,OO,OO,OO,(object fun),"")

{
	/* 1 args */
	switch(type_of(fun)) {
	case t_cfun:
	case t_afun:
	case t_closure:
	case t_sfun:
	case t_vfun:
	case t_cclosure:
	case t_gfun:
	  fun = fun->cf.cf_name;
	  break;
	default:
	  FEerror("~S is not a compiled-function.", 1, fun);
	}RETURN1(fun);
}

void
gcl_init_cfun(void) {}
