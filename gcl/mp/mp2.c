
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~									~*/
/*~		       OPERATIONS DE BASE (NOYAU)			~*/
/*~             Functions which can be efficient in plain C             ~*/
/*~									~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


#include "config.h"
#include "genpari.h"
#include "arith.h"

/* -2147483648 */

unsigned plong MOST_NEGS[3]={0x01ff0003, 0xff000003,1<<31};

/* +2147483648 */

unsigned plong ABS_MOST_NEGS[3]={0x01ff0003, 0x01000003,1<<31};


GEN stoi(x)
     plong x;
{
  GEN y;
  
  if(!x) return gzero;
  y=cgeti(3);
  if(x>0) {y[1]=0x1000003;y[2]=x;}
  else{y[1]=0xff000003;y[2]= -x;}
  return y;
}


GEN cgetg(x,y)
     plong x,y;
{
  unsigned plong p1;
  GEN z;
  
  p1=avma-(((unsigned short)x)<<2);if(p1<bot) err(errpile);
  avma=p1;z=(GEN)p1;z[0]=0x10000+x+(y<<24);
  return z;
}


GEN cgeti(x)
     plong x;
{
  unsigned plong p1;
  GEN z;
  
  p1=avma-4*x;if(p1<bot) err(errpile);
  avma=p1;z=(GEN)p1;z[0]=0x1010000+x;
  return z;
}


GEN icopy(x)
     GEN x;
{
  GEN y;
  plong lx=lgef(x),i;
  
  y=cgeti(lx);
  for(i=1;i<lx;i++) y[i]=x[i];
  return y;
}


GEN negi(x)
     GEN x;
{
  plong s=signe(x);
  GEN y;
  
  if(!s) return gzero;
  y=icopy(x);setsigne(y,-s);
  return y;
}


GEN absi(x)
     GEN x;
{
  GEN y;
  plong s=signe(x);
  
  if(!s) return gzero;
  y=icopy(x);setsigne(y,1);return y;
}


plong itos(x)
     GEN x;
{
  plong s=signe(x),p2;
  unsigned plong p1;
  
  if(!s) return 0;
  if(lgef(x)>3) err(affer2);
  p1=x[2];if(p1>=0x80000000) err(affer2);
  p2=(s>0)?p1:(-((plong)p1));return p2;
}


void affsi(s,x)
     plong s;
     GEN x;
{
  plong lx;
  
  if(!s) {x[1]=2;return;}
  lx=lg(x);if(lx<3) err(affer1);
  if(s>0) {x[1]=0x1000003;x[2]=s;}
  else { s = -s;
	 if (s < 0) /* s = -2^31 */
	   { if(lx<4) err(affer1);
	     x[1]=0xff000004;
	     x[2]= 0;
	     x[3]= 1;
	   }
	   else 
	     {x[1]=0xff000003;x[2]= s;}
  }
}


void affii(x,y)
     GEN x,y;
{
  plong lx=lgef(x),i;
  
  if(x==y) return;
  if(lg(y)<lx) err(affer3);
  for(i=1;i<lx;i++) y[i]=x[i];
}


GEN shifts(x,y)
     plong x,y;
{
  plong t[3];
  
  if(!x) return gzero;
  t[0]=0x1010003;
  if(x>0) {t[1]=0x1000003;t[2]=x;}
  else {t[1]=0xff000003;t[2]= -x;}
  return shifti(t,y);
}


GEN shifti(x,n)
     GEN x;
     plong n;
{ 
  plong lx=lgef(x),i,s=signe(x),d,m,p1,p2,k;
  GEN y; TEMPVARS2
  ulong hiremainder;
  
  if(!s) return gzero;
  if(!n) return icopy(x);
  if(n>0)
    {
      d=n>>5;m=n&31;
      if(m)
	{
	  p1=shiftl(x[2],m);p2=hiremainder;k=0;
	  if(p2)
	    {
	      y=cgeti(lx+d+1);for(i=lx+1;i<=lx+d;i++) y[i]=0;
	      for(i=lx;i>=4;i--) {y[i]=shiftl(x[i-1],m)+k;k=hiremainder;}
	      y[3]=p1+k;y[2]=p2;
	    }
	  else
	    {
	      y=cgeti(lx+d);for(i=lx;i<lx+d;i++) y[i]=0;
	      for(i=lx-1;i>=3;i--) {y[i]=shiftl(x[i],m)+k;k=hiremainder;}
	      y[2]=p1+k;
	    }
	}
      else
	{
	  y=cgeti(lx+d);for(i=lx;i<lx+d;i++) y[i]=0;
	  for(i=lx-1;i>=2;i--) y[i]=x[i];
	}
    }
  else
    {
      n= -n;d=n>>5;m=n&31;if(lx<d+3) return gzero;
      if(!m)
	{
	  y=cgeti(lx-d);for(i=2;i<lx-d;i++) y[i]=x[i];
	}
      else 
	{
	  m=32-m;d++;
	  p1=shiftl(x[2],m);
	  if(hiremainder)
	    {
	      y=cgeti(lx-d+1);y[2]=hiremainder;
	      for(i=3;i<=lx-d;i++)
		{
		  p2=shiftl(x[i],m);y[i]=p1+hiremainder;p1=p2;
		}
	    }
	  else
	    {
	      if(lx==d+2) return gzero;
	      y=cgeti(lx-d);
	      for(i=3;i<=lx-d;i++) 
		{
		  p2=shiftl(x[i],m);y[i-1]=p1+hiremainder;p1=p2;
		}
	    }
	}
    }   
  y[1]=y[0];setsigne(y,s);return y;
}


GEN mptrunc(x)
     GEN x;
{
  plong e,i,s,lx=lg(x),p1,p2,m;
  unsigned plong d; TEMPVARS2
  GEN y;ulong hiremainder;
  
  if(typ(x)==1) return icopy(x);
  s=signe(x);if(!s) return gzero;
  e=expo(x);if(e<0) return gzero;
  d=e>>5;m=e&31;if(d>=lx-2) err(truer2);
  y=cgeti(d+3);y[1]=y[0];setsigne(y,s);
  if(m==31) for(i=2;i<=d+2;i++) y[i]=x[i];
  else
    {
      m++;p1=0;
      for(i=2;i<=d+2;i++)
	{
	  p2=shiftl(x[i],m);y[i]=hiremainder+p1;p1=p2;
	}
    }
  return y;
}


GEN mpent(x)
     GEN x;
{
  plong e,i,lx=lg(x),m,f,p1,p2;
  unsigned plong d;ulong hiremainder;
  GEN y,z; TEMPVARS2
  
  if(typ(x)==1) return icopy(x);
  if(signe(x)>=0) return mptrunc(x);
  e=expo(x);if(e<0) {y=cgeti(3);y[2]=1;y[1]=0xff000003;return y;}
  d=e>>5;m=e&31;if(d>=lx-2) err(truer2);
  y=cgeti(d+3);y[1]=0xff000003+d;
  if(m==31) 
    {
      for(i=2;i<=d+2;i++) y[i]=x[i];
      while((i<lx)&&(!x[i])) i++;
      f=(i<lx);
    }    
  else
    {
      m++;p1=0;
      for(i=2;i<=d+2;i++)
	{
	  p2=shiftl(x[i],m);y[i]=hiremainder+p1;p1=p2;
	}
      if(p1) f=1;
      else
	{
	  while((i<lx)&&(!x[i])) i++;
	  f=(i<lx);
	}
    }
  if(f)
    {
      for(i=d+2;(i>=2)&&(y[i]==0xffffffff);i--) y[i]=0;
      if(i>=2) y[i]++;
      else
	{
	  z=y;y=cgeti(1);*y=(*z)+1;y[1]=z[1]+1;
	}
    }
  return y;
}


int cmpsi(x,y)
     plong x;
     GEN y;
{
  ulong p;
  
  if(!x) return -signe(y);
  if(x>0)
    {
      if(signe(y)<=0) return 1;
      if(lgef(y)>3) return -1;
      p=y[2];if(p==x) return 0;
      return (p<(ulong)x) ? 1 : -1;
    }
  else
    {  /* x <= 0 */
      if(signe(y)>=0) return -1;
      if(lgef(y)>3)
	{ if (-x < 0)
	    { /* x = -2^31 */
	      if (lgef(y)==4 &&
		  y[2] == 0 &&
		  y[3] == 1)
		return 0;
	    else
	      return 1;}}
      p=y[2];if(p== -x) return 0;
      return (p<(ulong)(-x)) ? -1 : 1;
    }
}


int cmpii(x,y)
     GEN x,y;
{
  plong sx=signe(x),sy=signe(y),lx,ly,i;
  
  if(sx<sy) return -1;
  if(sx>sy) return 1;
  if(!sx) return 0;
  lx=lgef(x);ly=lgef(y);
  if(lx>ly) return sx;
  if(lx<ly) return -sx;
  for(i=2;(i<lx)&&(x[i]==y[i]);i++);
  if(i==lx) return 0;
  return ((ulong)x[i]>(ulong)y[i]) ? sx : -sx;
}


GEN addss(x,y)
     plong x,y;
{
  plong t[3];
  
  if(!x) return stoi(y);
  t[0]=0x1010003;
  if(x>0) {t[1]=0x1000003;t[2]=x;} else {t[1]=0xff000003;t[2]= -x;}
  return addsi(y,t);
}


GEN subii(x,y)
     GEN x,y;
{
  plong s=signe(y);
  GEN z;
  
  if(x==y) return gzero;
  setsigne(y,-s);z=addii(x,y);setsigne(y,s);
  return z;
}


GEN subsi(x,y)
     plong x;
     GEN y;
{
  plong s=signe(y);
  GEN z;
  
  setsigne(y,-s);z=addsi(x,y);setsigne(y,s);return z;
}


GEN subss(x,y)
     plong x,y;
{
  if (y == (1<<31))
    return addsi(x,ABS_MOST_NEGS);
  return addss(-y,x);
}


GEN convi(x)
     GEN x;
{
  plong lx,av=avma,lz;
  GEN z,p1,p2;  
  
  if(!signe(x))
    {
      z=cgeti(3);z[1]= -1;z[2]=0;avma=av;return z+3;
    }
  p1=absi(x);lx=lgef(p1);lz=((lx-2)*15)/14+3;z=cgeti(lz);z[1]= -1;
  for(p2=z+2;signe(p1);p2++) *p2=divisii(p1,1000000000,p1);
  avma=av;return p2;
}



void mulsii(x,y,z)
     plong x;
     GEN y,z;
{
  plong av=avma;
  GEN p1;
  
  p1=mulsi(x,y);affii(p1,z);avma=av;
}


void addsii(x,y,z)
     plong x;
     GEN y,z;
{
  plong av=avma;
  GEN p1;
  
  p1=addsi(x,y);affii(p1,z);avma=av;
}


plong divisii(x,y,z)
     plong y;
     GEN x,z;
{
  plong av=avma,k;
  GEN p1;
  
  p1=divis(x,y);affii(p1,z);avma=av;
  k=hiremainder;return k;
}


plong vals(x)
     plong x;
{
  unsigned short int y,z;
  int s;

  if(!x) return -1;
  y=x;if(!y) {s=16;y=((ulong)x)>>16;} else s=0;
  z=y&255;if(!z) {s+=8;z=y>>8;}
  y=z&15;if(!y) {s+=4;y=z>>4;}
  z=y&3;if(!z) {s+=2;z=y>>2;}
  return (z&1) ? s : s+1;
}


plong vali(x)
     GEN x;
{
  plong i,lx=lgef(x);
  
  if(!signe(x)) return -1;
  for(i=lx-1;(i>=2)&&(!x[i]);i--);
  return ((lx-1-i)<<5)+vals(x[i]);
}

GEN dvmdss(x,y,z)
     plong x,y;
     GEN *z;
{
  GEN p1;

  p1=divss(x,y);*z=stoi(hiremainder);
  return p1;
}


GEN dvmdsi(x,y,z)
     plong x;
     GEN y,*z;
{
  GEN p1;
  p1=divsi(x,y);*z=stoi(hiremainder);
  return p1;
}


GEN dvmdis(x,y,z)
     plong y;
     GEN x,*z;
{
  GEN p1;
  p1=divis(x,y);*z=stoi(hiremainder);
  return p1;
}


GEN ressi(x,y)
     plong x;
     GEN y;
{ 
  divsi(x,y);return stoi(hiremainder);
}


GEN modsi(x,y)
     plong x;
     GEN y;
{
  plong s;
  GEN p1;
  
  divsi(x,y);
  if(!hiremainder) return gzero;
  if(x>0) return stoi(hiremainder);
  else
    {
      s=signe(y);setsigne(y,1);p1=addsi(hiremainder,y);
      setsigne(y,s);return p1;
    }
}


GEN modis(x,y)
     plong y;
     GEN x;
{ 
  divis(x,y);if(!hiremainder) return gzero;
  return (signe(x)>0) ? stoi(hiremainder) : stoi(abs(y)+hiremainder);
}


GEN resis(x,y)
     plong y;
     GEN x;
{ 
  divis(x,y);return stoi(hiremainder);
}


GEN modii(x,y)
     GEN x,y;
{
  plong av=avma,tetpil;
  GEN p1;

  p1=dvmdii(x,y,-1);
  if(signe(p1)>=0) return p1;
  tetpil=avma;p1=(signe(y)>0) ? addii(p1,y) : subii(p1,y);
  return gerepile(av,tetpil,p1);
}

int
mpdivis(x,y,z)
     GEN x,y,z;
{
  plong av=avma;
  GEN p1,p2;

  p1=dvmdii(x,y,&p2);
  if(signe(p2)) {avma=av;return 0;}
  affii(p1,z);avma=av;return 1;
}

int
divise(x,y)
     GEN x,y;
{
  plong av=avma;
  GEN p1;

  p1=dvmdii(x,y,-1);avma=av;
  return signe(p1) ? 0 : 1;
}


GEN gerepile(l,p,q)
	GEN l,p,q;

{
  plong av,declg,tl;
  GEN ll,pp,l1,l2,l3;

  declg=(plong)l-(plong)p;if(declg<=0) return q;
  for(ll=l,pp=p;pp>(GEN)avma;) *--ll= *--pp;
  av=(plong)ll;
  while((ll<l)||((ll==l)&&(plong)q))
  {
    l2=ll+lontyp[tl=typ(ll)];
    if(tl==10) {l3=ll+lgef(ll);ll+=lg(ll);if(l3>ll) l3=l2;}
    else {ll+=lg(ll);l3=ll;} 
    for(;l2<l3;l2++) 
/*    for(;l2<ll;l2++) */
      {
	l1=(GEN)(*l2);
	if((l1<l)&&(l1>=(GEN)avma))
	  {
	    if(l1<p) *l2+=declg;
	    else
	      if(ll<=l) err(gerper);
	  }
      }
  }
  if((!((plong)q))||((q<p)&&(q>=(GEN)avma)))
  {
    avma=av;return q+(declg>>2);
  }
  else {avma=av;return q;}
}


void cgiv(x)
     GEN x;
{
  plong p;

  if((p=pere(x))==255) return;
  if((x!=(GEN)avma)||(p>1)) {setpere(x,p-1);return;}
  do x+=lg(x);while(!pere(x));
  avma=(plong)x;
  return;
}
