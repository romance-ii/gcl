#include "include.h"
#include "num_include.h"
#define IN_NEW_INIT
#include "funlink.h"
#define SI 0
#define LISP 1
#define KEYWORD 2

#define NONE 0

void SI_makefun(),LISP_makefun(),error();

#define MAKEFUN(pack,string,fname,argd) \
  (pack == SI ? SI_makefun : pack == LISP ? LISP_makefun : error)(string,fname,argd)

#undef DEFUN
#define DEFUN(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,doc) \
  {extern ret fname(); \
     MAKEFUN(pack,string,fname,F_ARGD(min,max,flags,ARGTYPES(ret0a0,a12,a34,a56)));}

#undef DEFUNO
#define DEFUNO(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,old,doc) \
  {extern ret fname(); \
     MAKEFUN(pack,string,fname,F_ARGD(min,max,flags,ARGTYPES(ret0a0,a12,a34,a56)));}

#undef DEFCOMP
#define DEFCOMP(type, fun,doc) Ineed_in_image(fun);


#undef DEFVAR
#define DEFVAR(name,cname,pack,val,doc) \
 { extern object cname; \
   cname = (pack == LISP ? make_special(name,val) : \
	   pack == SI ?  make_si_special(name,val): \
	   (error(name,val),(object)0));}

#undef DEFCONST
#define DEFCONST(name,cname,pack,val,doc) \
 { extern object cname; \
   cname = (pack == LISP ? make_constant(name,val) : \
	   pack == SI ?  make_si_constant(name,val): \
	   (error(name,val),(object)0));}


#undef DEF_ORDINARY
#define DEF_ORDINARY(name,cname,pack,doc) \
   { extern object cname ; cname = (pack == LISP ? make_ordinary(name) : \
	   pack == SI ?  make_si_ordinary(name): \
	   pack == KEYWORD ?  make_keyword(name):   \
   	   (error(name),(object)0));} 


#undef DO_INIT
#define DO_INIT(x) x
  
  

	   
	   
	   

  

  
