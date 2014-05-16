#include "arith.h"

extended_mul(a,b,c,h,l)
unsigned int a,b,c, *h, *l;
{unsigned int temph,templ,ah,al,i;
 ah=0;
 al=0;
 /* in case the shift by 32 does not zero an unsigned int..
  we separate out the first step.*/
 {if (b & 1)
      {temph=0;templ=a;
       ladd(temph,templ,ah,al);}
/*    printf("\n%d b=%d a=%d (%d:%d)",i,b,a,ah,al); */
    b=b>>1;
}
i=1;
 while(b)
   {if (b & 1)
      {lshift(a,i,temph,templ);
       ladd(temph,templ,ah,al);}
     i++;b=b>>1;
     }
 ladd(0,c,ah,al);
  KCLNORMALIZE(ah,al);
   *h=ah;*l=al;
}

#ifndef VSSIZE
try(h,d, h1,l1, qp, rp)
unsigned int d, h, h1,l1,*qp, *rp;
{
extended_mul (h,d,h1,qp,rp);
}
#endif

    
 
