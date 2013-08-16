#define mjoin(a_,b_) a_ ## b_
#define Mjoin(a_,b_) mjoin(a_,b_)

#include "arth.h"

#define LM(a_) AM(AT(SIZEOF_LONG,8),a_)
#if SIZEOF_LONG == 4
#define LL 2
#elif SIZEOF_LONG == 8
#define LL 3
#else
#error "unknown SIZEOF_LONG"
#endif 
#define POW AM(PAGEWIDTH,AP(LL,1))

struct pageinfo {
  unsigned long type:6;
  unsigned long magic:7;
  unsigned long sgc_flags:2;
  unsigned long in_use:LM(15);
  struct pageinfo *next;
};
  
#ifndef WORDS_BIGENDIAN

#define FIRSTWORD ufixnum    e:1,m:1,f:1,s:1,tt:4,t:5,st:3,w:LM(16)
#define FSTPWORD  ufixnum emfs:4,            tp:9,    st:3,w:LM(16)
#define MARKWORD  ufixnum    e:1,   mf:2,s:1,tt:4,t:5,x:LM(13)
#define SGCMWORD  ufixnum    e:1,mfs:3,      tt:4,t:5,x:LM(13)
#define TYPEWORD  ufixnum  emf:3,        s:1,tt:4,t:5,x:LM(13)
#define FUNWORD   ufixnum    e:1,m:1,f:1,s:1,tt:4,t:5,fun_minarg:6,fun_maxarg:6,fun_neval:5,fun_vv:1,y:LM(31)

#else

#define FIRSTWORD ufixnum w:LM(16),st:3,t:5,tt:4,s:1,f:1,m:1,e:1
#define FSTPWORD  ufixnum w:LM(16),st:3,tp:9,             emfs:4
#define MARKWORD  ufixnum x:LM(13),     t:5,tt:4,s:1,   mf:2,e:1
#define SGCMWORD  ufixnum x:LM(13),     t:5,tt:4,      mfs:3,e:1
#define TYPEWORD  ufixnum x:LM(13),     t:5,tt:4,s:1,      emf:3
#define FUNWORD   ufixnum y:LM(31),fun_vv:1,fun_neval:5,fun_maxarg:6,fun_minarg:6,t:5,tt:4,s:1,f:1,m:1,e:1

#endif

