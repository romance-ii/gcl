#include "include.h"
#include "num_include.h"
#define IN_NEW_INIT
#include "funlink.h"
#define SI 0
#define LISP 1
#define KEYWORD 2

#define NONE 0

/*  void SI_makefun(),LISP_makefun(),error(); */

#define MAKEFUN(pack,string,fname,argd) \
  (pack == SI ? SI_makefun(string,fname,argd) : \
   pack == LISP ? LISP_makefun(string,fname,argd) : \
   error("Bad pack variable in MAKEFUN\n"))

#define MAKESYM(pack,string) \
  (pack == SI ? make_si_ordinary(string) : \
   pack == LISP ? make_ordinary(string) : \
   (error("Bad pack variable in MAKESYM\n"),Cnil))

#undef DEFUN
#define DEFUN(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,doc) \
  {extern ret fname(); \
     MAKEFUN(pack,string,fname,F_ARGD(min,max,flags,ARGTYPES(ret0a0,a12,a34,a56)));}

#undef DEFUNO
#define DEFUNO(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,old,doc) \
  {extern ret fname(); \
     MAKEFUN(pack,string,fname,F_ARGD(min,max,flags,ARGTYPES(ret0a0,a12,a34,a56)));}

/* FIXME, possibly restore old MAKEFUN in place (in NewInit) here 
   when STATIC_FUNCTION_POINTERS not defined */
#undef DEFUN_NEW
#define DEFUN_NEW(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,args,doc) \
  {extern void Mjoin(fname,_init)(); Mjoin(fname,_init)();}

#undef DEFUNO_NEW
#define DEFUNO_NEW(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,oldret,old,args,doc) \
  {extern void Mjoin(fname,_init)();Mjoin(fname,_init)();}

#undef DEFCOMP
#define DEFCOMP(type, fun,doc) Ineed_in_image(fun);


#undef DEFVAR
#define DEFVAR(name,cname,pack,val,doc) \
 { extern object cname; \
   cname = (pack == LISP ? make_special(name,val) : \
	   pack == SI ?  make_si_special(name,val): \
	   (error("Bad pack variable in DEFVAR\n"),(object)0));}

#undef DEFCONST
#define DEFCONST(name,cname,pack,val,doc) \
 { extern object cname; \
   cname = (pack == LISP ? make_constant(name,val) : \
	   pack == SI ?  make_si_constant(name,val): \
	   (error("Bad pack variable in DEFCONST\n"),(object)0));}


#undef DEF_ORDINARY
#define DEF_ORDINARY(name,cname,pack,doc) \
   { extern object cname ; cname = (pack == LISP ? make_ordinary(name) : \
	   pack == SI ?  make_si_ordinary(name): \
	   pack == KEYWORD ?  make_keyword(name):   \
   	   (error("Bad pack variable in DEF_ORDINARY\n"),(object)0));} 


#undef DO_INIT
#define DO_INIT(x) x
  
  

	   
	   
	   

  

  
