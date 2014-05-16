#include <sys/types.h>
extern char end;

static caddr_t curbrk = &end;
caddr_t sbrk(int n);

void *
sbrk(int n) { 
  int res;
  if (n==0) return curbrk;
  { 
    void * x=curbrk;
    char *p;
    p=curbrk;
    p=p+n;
    res = brk(p);
    
    if (res==-1) error("can't set brk");
    else curbrk = p;
    return (x);
  }
}






