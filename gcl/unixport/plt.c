#include <string.h>
#include <stdlib.h>

typedef struct {
  const char *n;
  unsigned long ad;
} Plt;

#define join(a_,b_) a_ ## b_
#define Join(a_,b_) join(a_,b_)
#define MY_PLT(a_) {#a_,a_}

static int
pltcomp(const void *v1,const void *v2) {
  const Plt *p1=v1,*p2=v2;

  return strcmp(p1->n,p2->n);

}

int
my_plt(const char *s,unsigned long *v) {

  Plt mplt[]={
#include "plt.h"
  },*p=mplt,*pe=p+sizeof(mplt)/sizeof(*mplt),tp;

  tp.n=s;
  if (!(p=bsearch(&tp,p,pe-p,sizeof(*p),pltcomp)))
    return -1;
  *v=p->ad;
  return 0;

}
