typedef struct {
  const char *n;
  const void *f;
} Plt;

#include "void.h"

#define join(a_,b_) a_ ## b_
#define Join(a_,b_) join(a_,b_)
#define MY_PLT(a_) {#a_,a_}

int
my_plt(const char *s,unsigned long *v) {

  const char *c;
  Plt mplt[]={
#include "undef.h"
  },*p=mplt,*pe=p+sizeof(mplt)/sizeof(*mplt);

  for (;p<pe;p++) {
    for (c=p->n;*c && *s && *c==*s;c++,s++);
    if (!*c && !*s)
      break;
  }
  if (p==pe)
    return -1;
  *v=(unsigned long)p->f;
  return 0;

}
