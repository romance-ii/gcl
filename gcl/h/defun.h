#define ARG_LIMIT 63

#define ARG_LIMIT 63
#ifndef DONT_DEFINE_DEFUN
#define DEFUN(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,doc) EXTER ret fname();

#define DEFUNO(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,old,doc) \
EXTER ret fname ();

#define DEFUN_NEW(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,args,doc) EXTER ret fname args;

#define DEFUNO_NEW(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,oldret,old,args,doc) \
EXTER ret fname args;


#define DO_INIT(x)   
#define DEFUNL DEFUN
  /* these are needed to be linked in to be called by incrementally
   loaded code */
#define DEFCOMP(type,fun,doc) type fun();
#define DEFCONST DEFVAR
#define DEFVAR(string,name,pack,val,doc) EXTER object name;
#define DEF_ORDINARY(string,name,package,doc) EXTER object name;

#endif






