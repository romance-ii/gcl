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
make_cfun(void (*self)(), object name, object data, char *start, int size) {

   if (data && type_of(data)==t_cfdata) { 
     data->cfd.cfd_start=start;  
     data->cfd.cfd_size=size; 
   } else if (size) FEerror("Bad call to make_cfun",0); 

   return fSinit_function(list(6,Cnil,Cnil,make_fixnum((fixnum)self),Cnil,Cnil,name),
			  (void *)fSeval_src,data,Cnil,-1,0,(((1<<6)-1)<<6)|(((1<<5)-1)<<12)|(1<<17)); 

}

DEFUN("CFDL",object,fScfdl,SI,0,0,NONE,OO,OO,OO,OO,(void),"") {

  struct typemanager *tm=tm_of(t_cfdata);
  int j;
  object x;
  void *p;
  struct pageinfo *v;

  for (v=cell_list_head;v;v=v->next) {
    if (tm!=tm_of(v->type))
      continue;
    for (p=pagetochar(page(v)),j=tm->tm_nppage;j>0;--j,p+=tm->tm_size) {
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
    
DEFUN("DLSYM",object,fSdlsym,SI,2,2,NONE,OI,OO,OO,OO,(fixnum h,object name),"") {

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

DEFUN("DLADDR",object,fSdladdr,SI,1,1,NONE,OI,OO,OO,OO,(fixnum ad),"") {

  Dl_info info;
  unsigned long u;
  const char *c;

  dlerror();
  dladdr((void *)ad,&info);
  if (dlerror())
    FEerror("dladdr lookup failure on ~s",1,make_fixnum(ad));
  u=(unsigned long)info.dli_fbase;
  c=info.dli_fname;
  if (u>=(ufixnum)data_start && u<(unsigned long)core_end)
    c="";

  RETURN1(coerce_to_pathname(make_simple_string(c)));

}

DEFUN("DLOPEN",object,fSdlopen,SI,1,1,NONE,OO,OO,OO,OO,(object name),"") {

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

DEFUN("DLADDR-SET",object,fSdladdr_set,SI,2,2,NONE,OI,IO,OO,OO,(fixnum adp,fixnum ad),"") {

  *(void **)adp=(void *)ad;
  RETURN1(Cnil);

}

DEFUN("DLLIST-PUSH",object,fSdllist_push,SI,3,3,NONE,OO,OI,OO,OO,(object cfd,object sym,fixnum adp),"") {

  cfd->cfd.cfd_dlist=MMcons(MMcons(sym,make_fixnum(adp)),cfd->cfd.cfd_dlist);
  RETURN1(Cnil);

}

static object MFnew(object sym, void (*self)(), object data)
{
	object cf;

	if (type_of(sym) != t_symbol)
		not_a_symbol(sym);
	if (sym->s.s_sfdef != NOT_SPECIAL && sym->s.s_mflag)
		sym->s.s_sfdef = NOT_SPECIAL;
	cf=make_cfun(self,sym,data,NULL,0);
	/* cf = alloc_object(t_cfun); */
	/* cf->cf.cf_self = self; */
	/* cf->cf.cf_name = sym; */
	/* cf->cf.cf_call = Cnil; */
	/* cf->cf.cf_data = data; */
	sym = clear_compiler_properties(sym,cf);
 	sym->s.s_gfdef = cf;
	sym->s.s_mflag = FALSE;
	return sym;
}

DEFUN("MF",object,fSmf,SI
   ,2,2,NONE,OO,OO,OO,OO,(object name,object addr),"")

{ /* 2 args */
  MFnew(name,PADDR(addr),sSPmemory->s.s_dbind);
  RETURN1(name);
}



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
	cf=make_cfun(self,sym,data,start,size);
	/* cf = alloc_object(t_cfun); */
	/* cf->cf.cf_self = self; */
	/* cf->cf.cf_name = sym; */
	/* cf->cf.cf_call = Cnil; */
	/* cf->cf.cf_data = data; */
	/* data->cfd.cfd_start=start;  */
	/* data->cfd.cfd_size=size; */
	sym = 	clear_compiler_properties(sym,cf);
	sym->s.s_gfdef = cf;
	sym->s.s_sfdef = NOT_SPECIAL;
	sym->s.s_mflag = TRUE;
	return sym;
}

DEFUN("MM",object,fSmm,SI
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
	if (x->s.s_gfdef!=OBJNULL) {
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
make_si_function_internal(char *s, void (*f)())
{
	object x;
	vs_mark;

	x = make_si_ordinary(s);
	if (x->s.s_gfdef!=OBJNULL) {
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
make_special_form_internal(char *s,void *f)
{
	object x;
	x = make_ordinary(s);
	x->s.s_sfdef = (fixnum)f;
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

DEFUN("COMPILED-FUNCTION-NAME",object,fScompiled_function_name,SI
   ,1,1,NONE,OO,OO,OO,OO,(object fun),"")

{
	/* 1 args */
	switch(type_of(fun)) {
	case t_function:
	  fun=Cnil;
	  break;
	/* case t_cfun: */
	/*   fun = fun->cf.cf_name; */
	/*   break; */
	default:
	  FEerror("~S is not a compiled-function.", 1, fun);
	}RETURN1(fun);
}

void
gcl_init_cfun(void) {
}
