
#include "include.h"
#define CHECK(a,b) \
do{ i++; if ((void *) a != (void *) b) printf("differed %d\n",i);}while(0)

main()
{object x;
 int i=0;
CHECK(&x->s.s_self,&x->ust.ust_self);
CHECK(&x->s.s_fillp,&x->ust.ust_fillp);
CHECK(&x->v.v_fillp,&x->ust.ust_fillp);
CHECK(&x->v.v_dim,&x->ust.ust_dim);
CHECK(&x->cfn.,&x->ust.ust_dim); 
}
