#include "include.h"


#define CHECK(a,b)\
do{ i++; if (((void *) a) != (void *) b) printf("differed %d %d\n",i, (long ) a - (long) b);}while(0)


     
main()
{object x;
 int i=0;
/* 1 2 */ 
CHECK(&x->s.s_sfdef,&x->c.c_car);
CHECK(&x->s.s_dbind,&x->c.c_cdr); 

/* 3 4 5 6 */
CHECK(&x->s.s_fillp,&x->ust.ust_fillp);
CHECK(&x->v.v_fillp,&x->ust.ust_fillp);
CHECK(&x->st.st_fillp,&x->ust.ust_fillp);
CHECK(&x->bv.bv_fillp,&x->ust.ust_fillp);
 
/* 7 8 9 10 11 12 */
CHECK(&x->st.st_dim,&x->ust.ust_dim);
CHECK(&x->v.v_dim,&x->ust.ust_dim);
CHECK(&x->bv.bv_dim,&x->ust.ust_dim); 
CHECK(&x->a.a_dim,&x->ust.ust_dim);
CHECK(&x->lfa.lfa_dim,&x->ust.ust_dim);
CHECK(&x->sfa.sfa_dim,&x->ust.ust_dim); 
CHECK(&x->fixa.fixa_dim,&x->ust.ust_dim);

CHECK(&x->st.st_self,&x->ust.ust_self);
CHECK(&x->v.v_self,&x->ust.ust_self);
CHECK(&x->bv.bv_self,&x->ust.ust_self); 
CHECK(&x->a.a_self,&x->ust.ust_self);
CHECK(&x->lfa.lfa_self,&x->ust.ust_self);
CHECK(&x->sfa.sfa_self,&x->ust.ust_self); 
CHECK(&x->fixa.fixa_self,&x->ust.ust_self);
CHECK(&x->s.s_self,&x->ust.ust_self);

CHECK(&x->v.v_elttype,&x->a.a_elttype);
 

}


