#define NEED_MP_H
#ifndef FIRSTWORD
#include "include.h"
#endif

/*  #include "arith.h"   */



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



/*  #define MYmake_fixnum(doto,x) \ */
/*    {register int CMPt1; \ */
/*     doto \ */
/*     ((((CMPt1=(x))+1024)&-2048)==0?small_fixnum(CMPt1):make_fixnum(CMPt1));} */



object ctimes(),cplus(),cdifference(),cmod();
	  
object make_integer();  
 	  
#define our_minus(a,b) ((FIXNUMP(a)&&FIXNUMP(b))?fixnum_sub(fix(a),fix(b)): \
			number_minus(a,b))
#define our_plus(a,b) ((FIXNUMP(a)&&FIXNUMP(b))?fixnum_add(fix(a),fix(b)): \
			number_plus(a,b))
#define our_times(a,b) number_times(a,b)


#ifdef HAVE_LONG_LONG
dblrem(a,b,mod)
int a,b,mod;
{
  return  (((long long int)a*(long long int)b)%(long long int) mod);
}
#else

int
dblrem(a,b,mod)
int a,b,mod;
{int h,l,sign;
 if (a<0) 
   {a= -a; sign= (b<0)? (b= -b,1) :-1;}
 else { sign= (b<0) ? (b= -b,-1) : 1;}
 { mp_limb_t ar[2],q[2],aa;
 aa = a;
  ar[1]=mpn_mul_1(ar,&aa,1,b);
  h = mpn_divrem_1(&q,0,ar,2,mod);
 return ((sign<0) ? -h :h);
 }
}
#endif

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
