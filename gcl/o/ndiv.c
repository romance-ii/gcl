/*
 Copyright (C) 1994  W. Schelter

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

*/


/* author: William F. Schelter
   The following is an implementation of extended_div in C suitable
   for a machine which can do 32 bit arithmetic.
   The assembler output could be optimized, so that carry tests
   were read from the condition codes
*/   

#include "arith.h"

/* #define ESTIMATE_LOG_QUOTIENT(x,l,d) estimate_logq(x,l,d) */
#define ESTIMATE_LOG_QUOTIENT(x,l,d) 31

/*
int  
estimate_logq(x,l,div)
unsigned int x,div,l;
{ unsigned int logq,w;
  if (x==0) {w=0;x=l;} else {w=WSIZ;}
  for(logq=0; logq < WSIZ ; logq+=1)
    if ((div << logq) >= x)
      break;
  return 31;
  return logq+w;}

*/


extended_div(divisor,dh,dl,q,r)
unsigned int dh,dl , divisor, *q, *r;
{   unsigned int Rh,Rl,temph,templ;
    unsigned int Q;
    int iter;
#ifdef DEBUG 
    char *op;
#endif 
    Rh=dh;
    Rl=dl;

    /*  if (dh) printf("\n(di %d %d %d ",divisor,dh,dl); */

    NORMALIZE(Rh,Rl);
    Q=0;
    if (dh==0)
      {*q=dl/divisor; *r=dl%divisor;
       return;}
#ifdef DEBUG 
    printf("\n%d (Q %d %d) (R %d %d) %s" , -1,0,Q,Rh,Rl,"begin");
#endif 
    for (iter=ESTIMATE_LOG_QUOTIENT(dh,dl,divisor); iter >=0 ; iter-= 1)
      {
	/* assert(Q*divisor+R ==dividend); */
	lshift(divisor,iter,temph,templ);
	if ((int)Rh>=0)
	  {lsub(temph,templ,Rh,Rl);
#ifdef DEBUG
	   op="add";
#endif    
	   /*    lshift(1,iter,temph,templ);
		 ladd(temph,templ,Qh,Ql);
		 */    
	   /*     ladd(0,(1<<iter),Qh,Ql); */
	   Q=Q+ (1<<iter);
	 }
	else
	  {
#ifdef DEBUG        
	    op="sub"; 
#endif
	    ladd(temph,templ,Rh,Rl);
	    /*      lshift(1,iter,temph,templ);
		    lsub(temph,templ,Qh,Ql);
		    */      
	    /*      lsub(0,(1<<iter),Qh,Ql); */
	    Q=Q- (1<<iter);
	  }
#ifdef DEBUG           
	printf("\n%d (Q %d %d) (R %d %d) %s" , iter,0,Q,Rh,Rl,op);
#endif   
      }
    /* if (((int)Rl)< 0) {Ql--;Rl=Rl+divisor;} */
    if (((int)Rl)< 0) {Q--;Rl=Rl+divisor;} 
    KCLNORMALIZE(Rh,Rl);     
    *q=Q;
    /* *q=Ql; */
    *r=Rl;
    /* printf("%d %d)",*q,*r); 
       fflush(stdout); */
  } 

#ifndef VSSIZE
try(h,d, h1,l1, qp, rp)
unsigned int d, h, h1,l1,*qp, *rp;
{
extended_div (l1,h,d,qp,rp);
}
#endif




