#define NEED_MP_H
#ifndef FIRSTWORD
#include "include.h"
#endif

#include "arith.h"  



/* I believe the instructions used here are ok for 68010.. */

#ifdef MC68K
#define MC68020
#endif
  
/* static for gnuwin95 the save routine is not saving statics... */

object *gclModulus;
#define FIXNUMP(x) (type_of(x)==t_fixnum)

/* Note: the gclModulus is guaranteed > 0 */

#define FIX_MOD(X,MOD) {register int MOD_2; \
			     if (X > (MOD_2=(MOD >>1))) X=X-MOD; else \
			       if (X < -MOD_2)  X=X+MOD;}



#define MYmake_fixnum(doto,x) \
  {register int CMPt1; \
   doto \
   ((((CMPt1=(x))+1024)&-2048)==0?small_fixnum(CMPt1):make_fixnum(CMPt1));}



object ctimes(),cplus(),cdifference(),cmod();



/* if hi < 0 this is taken to be the two's complement expression of
   a bignum  */
object
signed_bignum2(hi,lo)
     int hi,lo;
{ 
  GEN w;
  object result;
  plong u[4];
  u[0] = 0x01010004;
  u[1] = 0x01010004;
  u[2] = 0;
  u[3] = 0;
  
  if (hi < 0)
      { setsigne(u,-1);
	if (lo > 0) /* no borrow */
	 { lo = -lo;
	   hi = -hi;}
       else {hi -= 1;
	     hi = -hi;}
     }
  else
    if (hi > 0)
      {setsigne(u,1);
     }
  else /*hi==0 */
    { setsigne(u,1);
      setlgef(u,3);
      MP_LOW(u,3) = lo;
      result = make_integer(u);
      setlgef(u,4);
      return result;}
  /* its length 4 */
  MP_START_LOW(w,u,4);
  MP_NEXT_UP(w) = lo;
  MP_NEXT_UP(w) = hi;
  return(make_integer(u));
}
  
  
  
  	 
	  

#ifdef MC68020
/*    
int
dblrem(m,n,mod)
int m,n,mod;
{ asm("movl a6@(8),d1");
  asm("mulsl a6@(12),d0:d1");
  asm("divsl a6@(16),d0:d1");
}
*/
#endif

object make_integer();  

unsigned plong small_pos_int[3]={0x1000003,0x01000003,0};
unsigned plong small_neg_int[3]={0x1000003,0xff000003,0};
unsigned plong s4_neg_int[4]={0x1000004,0xff000004,1,0};



object
fplus(a,b)
     int a,b;
{ int z ;
  int x;
  if (a >= 0)
   { if (b >= 0)
       { x = a + b;
	 if (x == 0) return small_fixnum(0);
	 small_pos_int[2]=x;
	 return make_integer(small_pos_int);
       }
     else
       { /* b neg */
	 x = a + b;
	 MYmake_fixnum(return,x);
       }}
  else
    { /* a neg */
      if (b >= 0)
	{ x = a + b;
	  MYmake_fixnum(return,x);
	}
      else
	{ /* both neg */
	    { unsigned plong Xtx,Xty,overflow,Xtres;
	      Xtres = addll(-a,-b);
	      if (overflow)
		{ 
		  s4_neg_int[3]=Xtres;
		  return make_integer(s4_neg_int);}
	      else
		{ small_neg_int[2]=Xtres;
		  return make_integer(small_neg_int);}
	    }}}
}


object
fminus(a,b)
     int a,b;
{ int z ;
  int x;
  if (a >= 0)
   { if (b >= 0)
       { x = a - b;
	 MYmake_fixnum(return,x);
     }
     else
       { /* b neg */
	 x = a - b;
	 if (x==0) return small_fixnum(0);
	 small_pos_int[2]=x;
	 return make_integer(small_pos_int);
       }}
  else
    { /* a neg */
      if (b <= 0)
	{ x = a - b;
	  MYmake_fixnum(return,x);
	}
      else
	{  /* b positive */
	    { unsigned plong Xtx,Xty,overflow,Xtres;
	      unsigned plong t[4];
	      Xtres = addll(-a,b);
	      if (overflow)
		{ s4_neg_int[3]=Xtres;
		  return make_integer(s4_neg_int);}
	      else
		{ small_neg_int[2]=Xtres;
		  return make_integer(small_neg_int);}
	    }}}
}
 	  
#define our_minus(a,b) ((FIXNUMP(a)&&FIXNUMP(b))?fminus(fix(a),fix(b)): \
			number_minus(a,b))
#define our_plus(a,b) ((FIXNUMP(a)&&FIXNUMP(b))?fplus(fix(a),fix(b)): \
			number_plus(a,b))
#define our_times(a,b) number_times(a,b)

int
dblrem(a,b,mod)
int a,b,mod;
{int h,l,sign;
 if (a<0) 
   {a= -a; sign= (b<0)? (b= -b,1) :-1;}
 else { sign= (b<0) ? (b= -b,-1) : 1;}

 l = mulul(a,b,h);
 b = divul(l,mod,h);
 return ((sign<0) ? -h :h);}


object	  
cmod(x)
object x;
{register object mod = *gclModulus;
 if (mod==Cnil) return(x);
else
 if((type_of(mod)==t_fixnum && type_of(x)==t_fixnum))
    {register int xx,mm;
     mm=fix(mod);
     if (mm==2) {xx= (fix(x) & 1); return(small_fixnum(xx));}
     xx=(fix(x)%mm);
     FIX_MOD(xx,mm);
     MYmake_fixnum(return,xx);
   }
 else
   {object qp,rp,mod2;
    int compare;
    integer_quotient_remainder_1(x,mod,&qp,&rp);
    mod2=shift_integer(mod,-1);
    compare = number_compare(rp,small_fixnum(0));
    if (compare >= 0)
      {compare=number_compare(rp,mod2);
       if (compare > 0) rp=number_minus(rp,mod);}
    else
      if (number_compare(number_negate(mod2), rp) > 0)
	{rp = number_plus(rp,mod);}
    return rp;}}


#define MOST_POSITIVE_FIX (((unsigned int) (~0) ) /2)
#define SMALL_MODULUS_P(mod) (FIXNUMP(mod) && (fix(mod) < (MOST_POSITIVE_FIX)/2))
object
ctimes(a,b)
object a,b;
{object mod = *gclModulus;
 if (FIXNUMP(mod))
     {register int res, m ;
      res=dblrem(fix(a),fix(b),m=fix(mod));
      FIX_MOD(res,m);
      MYmake_fixnum(return,res);}
else if (mod==Cnil)
  { return(our_times(a,b));}
return cmod(number_times(a,b));}


object
cdifference(a,b)
object a,b;
{object mod = *gclModulus;
 if (SMALL_MODULUS_P(mod))
   {register int res,m;
    res=((fix(a)-fix(b))%(m=fix(mod)));
    FIX_MOD(res,m);
    MYmake_fixnum(return,res);}
 else if (mod==Cnil)
     return (our_minus(a,b));
 else return(cmod(number_minus(a,b)));}

object
cplus(a,b)
object a,b;
{object mod = *gclModulus;
 if (SMALL_MODULUS_P(mod))
   {register int res,m;
    res=((fix(a)+fix(b))%(m=fix(mod)));
    FIX_MOD(res,m);
    MYmake_fixnum(return,res);}
 else
   if (mod==Cnil)
     return (our_plus(a,b));
 else
   return(cmod(number_plus(a,b)));}


DEFUNO("CMOD",object,fScmod,SI
   ,1,1,NONE,OO,OO,OO,OO,siLcmod,"")(num)
object num;
{/* 1 args */
 num=cmod(num);
 RETURN1(num);
}


DEFUNO("CPLUS",object,fScplus,SI
   ,2,2,NONE,OO,OO,OO,OO,siLcplus,"")(x0,x1)
object x0,x1;
{ /* 2 args */
 x0 = cplus(x0,x1);
 RETURN1( x0 );
}


DEFUNO("CTIMES",object,fSctimes,SI
   ,2,2,NONE,OO,OO,OO,OO,siLctimes,"")(x0,x1)
object x0,x1;
{
 /* 2 args */
 x0=ctimes(x0,x1);
 RETURN1(x0);
}


DEFUNO("CDIFFERENCE",object,fScdifference,SI
   ,2,2,NONE,OO,OO,OO,OO,siLcdifference,"")(x0,x1)
object x0,x1;
{ /* 2 args */
 x0=cdifference(x0,x1);
 RETURN1(x0);
}

object 
memq(a,b)
register object a,b;
{while (1)
    {if ((a==b->c.c_car)||b==Cnil) return b;
    b=b->c.c_cdr;}}


     
init_cmac()
{
/* add_symbol("ctimes",&ctimes,"cplus",&cplus,"cdifference",&cdifference,"cmod",
 &cmod, 0); */
gclModulus = (&((make_si_special("MODULUS",Cnil))->s.s_dbind));
make_si_function("CMOD",siLcmod);
make_si_function("CPLUS",siLcplus);
make_si_function("CTIMES",siLctimes);
make_si_function("CDIFFERENCE",siLcdifference);

}
