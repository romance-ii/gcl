
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~									~*/
/*~		       OPERATIONS DE BASE (NOYAU)			~*/
/*~									~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*   This file was modified by W. Schelter to be suitable for optimization
     and inlining of assembler for maximum speed
 */

#include "config.h"
#include "genpari.h"
#include "arith.h"

GEN   mulsi(x,y)
     plong x;
     GEN y;
{ TEMPVARS
  plong s=signe(y),ly=lgef(y),i;
  GEN z,zp,yp; ulong hiremainder;
  
  if((!x)||(!s)) return gzero;
  if(x<0) {s= -s;
	   x= -x;
	   if (x < 0) /* -2^31 */
	     {return mulii(stoi(1<<31),y);}
	 }
  z=cgeti(ly+1);
  hiremainder=0;
  MP_START_LOW(yp,y,ly);    MP_START_LOW(zp,z,ly+1);
  i = MP_COUNT_LG(ly);
  WHILE_COUNT(--i) { MP_NEXT_UP(zp) = addmul(x,MP_NEXT_UP(yp));}
  if(hiremainder) {MP_NEXT_UP(zp)=hiremainder;
		   setlgef(z,ly+1);}
  else {avma+=4;z[1]=z[0]-1;z++;setlgef(z,ly);}
  setsigne(z,s);return z;
}

int expi(x)
     GEN x;
{
  plong lx=x[1]&0xffff;
  
  return lx==2 ? -8388608 : ((lx-2)<<5)-bfffo(x[2])-1;
}

GEN addsi(x,y)
     plong x;
     GEN y;
{
  plong sx,sy,ly,p,i;
  ulong overflow;  
  GEN z; TEMPVARS

  
  if(!x) return icopy(y);
  sy=signe(y);if(!sy) return stoi(x);
  if(x<0) {sx= -1;
	   x= -x;
	   if (x < 0)  /* x=-2^31 */
	     return addii(MOST_NEGS,y);
	 } else sx=1;
  ly=lgef(y);
  if(sx==sy)
    {
      p=addll(x,y[ly-1]);
      if(overflow)
	{
	  z=cgeti(ly+1);z[ly]=p;
	  for(i=ly-1;(i>2)&&(y[i-1]==0xffffffff);i--) z[i]=0;
	  if(i>2)
	    {
	      z[i]=y[i-1]+1;i--;while(i>=3) {z[i]=y[i-1];i--;}
	      z[2]=z[1]=z[0]-1;z++;avma+=4;
	    }
	  else {z[2]=1;z[1]=z[0];}
	}
      else
	{
	  z=cgeti(ly);z[ly-1]=p;for(i=1;i<ly-1;i++) z[i]=y[i];
	}
      setsigne(z,sx);
    }
  else
    {
      if(ly==3)
	{
	  if((ulong)y[2]>(ulong)x)
	    {
	      z=cgeti(3);z[1]=(sy<<24)+3;z[2]=y[2]-x;return z;
	    }
	  if(y[2]==x) return gzero;
	  z=cgeti(3);z[1]=((-sy)<<24)+3;z[2]=x-y[2];return z;
	}
      p=subll(y[ly-1],x);
      if(overflow)
	{
	  z=cgeti(ly);z[ly-1]=p;
	  for(i=ly-2;!(y[i]);i--) z[i]=0xffffffff;
	  z[i]=y[i]-1;
	  if((i>2)||z[i]) {i--;for(;i>=1;i--) z[i]=y[i];}
	  else
	    {
	      z[2]=z[1]=z[0]-1;z++;avma+=4;setsigne(z,sy);
	    }
	}
      else
	{
	  z=cgeti(ly);z[ly-1]=p;for(i=1;i<ly-1;i++) z[i]=y[i];
	}    
    }
  return z;
}

GEN addii(x,y)
     GEN x,y;
{
  plong sx,sy,sz,lx,ly,i,j,p;
  GEN z,xp,yp,zp,xpp,xhigh; TEMPVARS
  ulong overflow;  
  lx = lgef(x);
  ly = lgef(y);
  if (lx< ly) {z=x;x=y;y=z; sx=lx; lx=ly; ly=sx;} 
       /* lx>=ly so sx==0 ==> sy==0 */
  
  if (0 == (sy=signe(y))) return icopy(x);
  sx = signe(x);

  if(sx==sy)
    {
      z=cgeti(lx+1);overflow=0;
      MP_START_LOW(zp,z,lx+1);
      MP_START_LOW(xp,x,lx);
      MP_START_LOW(yp,y,ly);

#ifdef QUICK_LOOP
       i = ly - 2;
      QUICK_LOOP(i,ADDXCC);
#else      
      i = MP_COUNT_LG(ly);
      WHILE_COUNT(--i)
	{ADDLLX(MP_NEXT_UP(xp),MP_NEXT_UP(yp),MP_NEXT_UP(zp));}
#endif

     
      if(overflow)
	{  GEN xhigh = &MP_HIGH(x,lx);
	 again:	   
	  { GEN xpp = &MP_NEXT_UP(xp);
	   if (xpp >= xhigh)
	     { if (*xpp == 0xffffffff)
		    { MP_NEXT_UP(zp)=0;
		      goto again;}
		  
	     else
	       { MP_NEXT_UP(zp) = *xpp + 1;
		 while ((xpp = &MP_NEXT_UP(xp)) >= xhigh)
		   { MP_NEXT_UP(zp) = *xpp ;}
		 z[1]=z[0]-1;z[2]=x[1];z++;avma+=4;}}
	   else {z[2]=1;z[1]=x[1]+1;}
	}}
      else
	{ j = COUNT(lx - ly);
	    WHILE_COUNT( --j)
	      { MP_NEXT_UP(zp) = MP_NEXT_UP(xp);}
	  z[1]=z[0]-1;z[2]=x[1];z++;avma+=4;
	}
    }
  else
    {
      if(lx==ly)
	/* we have to compare x and y */
	{ j = MP_COUNT_LG(lx);
	  MP_START_HIGH(xp,x,lx);
	  MP_START_HIGH(yp,y,lx);
	  WHILE_COUNT(--j)
	    { ulong tx = MP_NEXT_DOWN(xp);
	      ulong ty = MP_NEXT_DOWN(yp);
	      if ( ty > tx)
		{z=x;x=y;y=z;sz=sx;sx=sy;sy=sz;
		 goto DIFFER;}
	      else
		if ( tx > ty)
		  {goto DIFFER;}}
	  SAME:	 return gzero;  
	DIFFER:;
	}
      
      z=cgeti(lx);overflow=0;
      MP_START_LOW(xp,x,lx);MP_START_LOW(yp,y,ly);MP_START_LOW(zp,z,lx);
      i = MP_COUNT_LG(ly);

#ifdef QUICK_LOOP
       i = ly - 2;
      QUICK_LOOP(i,SUBXCC);
#else      
      i = MP_COUNT_LG(ly);
      WHILE_COUNT(--i)
	{SUBLLX(MP_NEXT_UP(xp),MP_NEXT_UP(yp),MP_NEXT_UP(zp));}
#endif
      
      if(overflow)
	{ ulong tx ;  
	  while((tx=MP_NEXT_UP(xp)) == 0)
	    MP_NEXT_UP(zp) = 0xffffffff;
	  if (xp >= (xhigh = &MP_HIGH(x,lx)))
	    { MP_NEXT_UP(zp) = tx -1;
	      while ((xpp = &MP_NEXT_UP(xp)) >= xhigh)
		{ MP_NEXT_UP(zp) = *xpp;}}
	}
      else
	{ i = COUNT(lx - ly);
	  WHILE_COUNT(--i)
	    MP_NEXT_UP(zp) = MP_NEXT_UP(xp);
	}
      if(z[2]) z[1]=x[1];
      else
	{ zp = &z[3];
	  while (*zp ==0){zp++;}  /* x was != y by above */
	  zp -= 2;
	  i = zp - z;
	  zp[1] = (zp[0] = z[0]-i);
	  z = zp;
	  setsigne(z,sx);
	  avma+=(i<<2);
	}
    }
  return z;
}      

GEN mulss(x,y)
     plong x,y;
{
  plong s,p1;
  GEN z; ulong hiremainder;
  
  if((!x)||(!y)) return gzero;
  s=1;
  if(x<0)
    {s= -1;
     x= -x;
     if (x<0)
       return mulsi(y,stoi(x));
   }
  if(y<0) {s= -s;
	   y= -y;
	   if(y<0)
	     return mulsi((s > 0 ? x : -x),ABS_MOST_NEGS);
	 }
  p1=mulll(x,y);
  if(hiremainder) {z=cgeti(4);z[2]=hiremainder;z[3]=p1;}
  else {z=cgeti(3);z[2]=p1;}
  z[1]=z[0];setsigne(z,s);return z;
}


GEN mulii(x,y)
     GEN x,y;
{
  plong i,j,lx=lgef(x),ly=lgef(y),sx,sy,lz,p1,p2;
  GEN z; TEMPVARS
    
    GEN zz,yy,zp,xx;
  GEN ylow;
 ulong hiremainder; 
  ulong overflow;
  
  sx=signe(x);if(!sx) return gzero;
  sy=signe(y);if(!sy) return gzero;
  if(sy<0) sx= -sx;
  if(lx>ly) {z=x;x=y;y=z;lz=lx;lx=ly;ly=lz;}
  lz=lx+ly-2;if(lz>=0x10000) err(muler1);
  z=cgeti(lz);z[1]=z[0];setsigne(z,sx);

  MP_START_LOW(xx,x,lx);
  p1 = MP_NEXT_UP(xx);

  hiremainder=0;
  i = COUNT(ly-2);
  MP_START_LOW(yy,y,ly);
  MP_START_LOW(zz,z,lz);

  WHILE_COUNT (--i)
    { MP_NEXT_UP(zz) = addmul(p1,MP_NEXT_UP(yy));}

  MP_NEXT_UP(zz) = hiremainder;

  /* restart zz one above bottom */ 
  MP_START_LOW(zz,z,lz); 
  
  MP_START_LOW(ylow,y,ly);
  ly  = COUNT(ly - MP_CODE_WORDS);
  lx -= MP_CODE_WORDS;
  while (--lx > 0)		/* one less iteration first term of x, already used */
    { plong tem;
      register plong p11;
      p11 = MP_NEXT_UP(xx);
      i = ly;
      yy = ylow;
      zp = &MP_NEXT_UP(zz);    /* *zp = second from low word of z first time through */
      tem = 0;
      /* ZerO is just a 68k kludge to getit to keep 0 in a reg during this loop*/
#undef ZERO
#define ZERO ZerO
      {  int ZerO = 0; 
      WHILE_COUNT(--i)
	{ p2 = MP_NEXT_UP(yy);
	  p2 = mulul(p2,p11,hiremainder);
  	  MP_NEXT_UP(zp);
	  p2 = add_carry(p2,*zp,hiremainder);
	  p2 = add_carry(p2,tem,hiremainder);
	  *zp = p2;
	  tem = hiremainder;
	}
       }
      MP_NEXT_UP(zp) = hiremainder;

#undef ZERO
#define ZERO 0

    }
  if(!MP_HIGH(z,lz))
    {				/* shift header one along  decreasing lg and lgef */
      z[2]=z[1]-1;z[1]=z[0]-1;z++;avma+=4;
    }
  return z;
}

GEN confrac(x)
     GEN x;
{
  plong lx=lg(x),ex= -expo(x)-1,ex1,av=avma,ly,ey;
  plong lr,nbdec,k,i,j; ulong hiremainder;
  GEN y,res; TEMPVARS
  
  ey=((lx-2)<<5)+ex;ly=(ey+63)>>5;y=cgeti(ly);ex1=ex>>5; /* 95 dans mp.s faux? */
  for(i=0;i<ex1;i++) y[i]=0;
  ex&=31;
  if(!ex) for(j=2;j<lx;j++) y[i++]=x[j];
  else
    {
      k=0;
      for(j=2;j<lx;j++) {y[i++]=shiftlr(x[j],ex)+k;k=hiremainder;}
      y[ly-2]=k;
    }
  y[ly-1]=0;
  nbdec=ey*0.30103+1;lr=(nbdec+17)/9;res=cgeti(lr);
  *res=nbdec;
  for(j=1;j<lr;j++)
    {
      hiremainder=0;
      for(i=ly-1;i>=0;i--) y[i]=addmul(y[i],1000000000);
      res[j]=hiremainder;
    }
  avma=av;return res;
}

/* x/y : uses hiremainder for return */
GEN divss(x,y)
     plong x,y;
{
  plong p1; 
  
  if(!y) err(diver1);
  if (x == (1<<31))
    return divis(stoi(x),y);
  hiremainder=0;p1=divll((ulong)abs(x),(ulong)abs(y));
  if(y<0) {hiremainder= -((plong)hiremainder);p1= -p1;}
  if(x<0) p1= -p1;
  return stoi(p1);
}

GEN modss(x,y)
     plong x,y;
{
  plong y1; ulong hiremainder;
  
  if(!y) err(moder1);
  if (x == (1<<31))
    return modis(stoi(x),y);
  hiremainder=0;divll(abs(x),y1=abs(y));
  if(!hiremainder) return gzero;
  return (((plong)hiremainder)<0) ? stoi(y1-hiremainder) : stoi(hiremainder);
}

GEN resss(x,y)
     plong x,y;
{ ulong hiremainder;
  if(!y) err(reser1);
  hiremainder=0;divll(abs(x),abs(y));
  return (y<0) ? stoi(-((plong)hiremainder)) : stoi(hiremainder);
}

/* uses hiremainder for return */
GEN divsi(x,y)
     plong x;
     GEN y;
{ 
  plong s=signe(y),ly=lgef(y),p1;

  if(!s) err(diver2);
  if((!x)||(ly>3)||(y[2]<0)) {hiremainder=x;return gzero;}
  if (x== 1<<31)
    return divii(stoi(x),y);
  hiremainder=0;p1=divll(abs(x),y[2]);
  if(signe(y)<0) {hiremainder= -((plong)hiremainder);p1= -p1;}
  if(x<0) p1= -p1;
  return stoi(p1);
}

/* this uses the GLOBAL hiremainder to return its remainder
   We cannot make it a local.
 */
GEN divis(y,x)
     plong x;
     GEN y;
{ ulong hi;
  plong s=signe(y),ly=lgef(y),i,d;
  GEN z;
  
  if(!x) err(diver4);
  if(!s) {hiremainder=0;return gzero;}
  if(x<0) {s= -s;x= -x;
	   if (x < 0)
	     return divii(y,stoi(x));
	 } 
  if((ulong)x>(ulong)y[2])
    {
      if(ly==3) {hiremainder=itos(y);return gzero;}
      else {z=cgeti(ly-1);d=1;hi=y[2];}
    }
  else {z=cgeti(ly);d=0;hi=0;}
  for(i=d+2;i<ly;i++) z[i-d]=divul(y[i],x,hi);
  z[1]=z[0];setsigne(z,s);
  hiremainder= (s < 0 ? -((plong)hi) : hi) ;
  return z;
}

/*
#       entree : x pointe sur i2 de type I (dividende)              
#                y pointe sur i1 de type I (diviseur)               
#                z  contient un pointeur sur le reste si l'on       
#                veut a la fois q et r, 0 si l'on ne veut que le    
#                quotient, -1 si l'on ne veut que le reste          
#       sortie : resultat est  q si celui-ci est attendu, et sinon r 
#                r. z  pointe sur r si q et r sont attendus
#                (toutes les zones sont creees)                     
#       remarque : il s'agit de la 'fausse division' ; le reste est 
#                 du signe du dividende                             
*/

GEN dvmdii(x,y,z)
     GEN x,y,*z;
{
  plong av,lx,ly,lz,i,j,dec,sh,k,k1,sx=signe(x),sy=signe(y);
  plong saux,k3,k4,av1,flk4;
  ulong si,qp;
  GEN p1,p2,p3,p4,xp,p1p,p2p,pp; TEMPVARS
  ulong hiremainder,overflow;
  
  if(!sy) err(dvmer1);
  if(!sx)
    {
      if(((plong)z==0xffffffff)||((plong)z==0)) return gzero;
      *z=gzero;return gzero;
    }
  lx=lgef(x);ly=lgef(y);lz=lx-ly;
  if(lz<0)
    {
      if((plong)z==0xffffffff) return icopy(x);
      if(z==0) return gzero;
      *z=icopy(x);return gzero;
    }
  av=avma;if(sx<0) sy= -sy;
  if(ly==3)
    { int lgp1;
      si=y[2];
      MP_START_HIGH(xp,x,lx);
      if (si > (ulong)MP_HIGH(x,lx))
	{ lgp1=lx-1; hiremainder= MP_NEXT_DOWN(xp);}
      else { lgp1=lx; hiremainder=0;}
      p1 = cgeti(lgp1); i = MP_COUNT_LG(lgp1);
      MP_START_HIGH(p1p,p1,lgp1);
      WHILE_COUNT(--i) { MP_NEXT_DOWN(p1p) = divll(MP_NEXT_DOWN(xp),si);}

      if((plong)z==0xffffffff)
	{
	  avma=av;if(!hiremainder) return gzero;
	  p2=cgeti(3);p2[1]=(sx<<24)+3;p2[2]=hiremainder;return p2;
	}
      if(lgp1!= 2) {p1[1]=p1[0];setsigne(p1,sy);} else {avma=av;p1=gzero;}
      if(z==0) return p1;
      if(!hiremainder) *z=gzero;
      else {p2=cgeti(3);p2[1]=(sx<<24)+3;p2[2]=hiremainder;*z=p2;}
      return p1;
    }
  else
    {
      p1=cgeti(lx);
      sh=bfffo(y[2]);
      if(sh)
	{ GEN p2p,yp;
	  MP_START_HIGH(yp,y,ly);
	  p2=cgeti(ly);
	  k=shiftl(MP_NEXT_DOWN(yp),sh);
	  MP_START_HIGH(p2p,p2,ly);
	  i = MP_COUNT_LG(ly-1);
	  WHILE_COUNT(--i)
	    {
	      k1=shiftl(MP_NEXT_DOWN(yp),sh);
	      MP_NEXT_DOWN(p2p) = k + hiremainder;
	      k = k1;
	    }
	  MP_NEXT_DOWN(p2p) = k ; k=0;

	  MP_START_HIGH(xp,x,lx);
	  MP_START_HIGH(p1p,p1,lx);
	  MP_NEXT_UP(p1p) ;    /* yes go out of range !! */
	  i = MP_COUNT_LG(lx);
	  WHILE_COUNT (--i)
	    { k1 = shiftl(MP_NEXT_DOWN(xp),sh);
	      MP_NEXT_DOWN(p1p) = k + hiremainder; k = k1;
	    }
	  MP_NEXT_DOWN(p1p) = k;
	}
      else {
	MP_START_HIGH(xp,x,lx);
	MP_START_HIGH(p1p,p1,lx);
	MP_NEXT_UP(p1p) ;    /* yes go out of range !! */
	MP_NEXT_DOWN(p1p) = 0;
	j = MP_COUNT_LG(lx);
	WHILE_COUNT (-- j)
	  { MP_NEXT_DOWN(p1p) = MP_NEXT_DOWN(xp);}
	p2 = y;}
      si=p2[2];saux=p2[3];
      MP_START_HIGH(p1p,p1,lx); MP_NEXT_UP(p1p) ; /* out of bound */
      i = COUNT(lz+1);
      WHILE_COUNT(--i)       

	{ GEN pp;
	  if(MP_NEXT_DOWN(p1p)==si) 
	    {  /* Using fact that next_down does post increment */
	    qp=0xffffffff;k=addll(si,*p1p);    
						
	    }
	  else
	    {
	      hiremainder=p1p[-1];qp=divll(*p1p,si);
	      overflow=0;k=hiremainder;
	    }
	  if(!overflow)
	    {
/*	      k1=mulll(qp,saux);k3=subll(k1,p1p[1]);k+=overflow;
	      flk4=((ulong)hiremainder>(ulong)k);k4=subll(hiremainder,k);
	      while(flk4) {qp--;k3=subll(k3,saux);
			   k4-=overflow;flk4=((ulong)k4>(ulong)si);
			   k4=subll(k4,si);}
*/
	      k1=mulll(qp,saux);k3=subll(k1,p1p[1]);
	      k4=subllx(hiremainder,k);
	      while((!overflow)&&k4) {qp--;k3=subll(k3,saux);k4=subllx(k4,si);}
	      
	    }
	  hiremainder=0;

	  j = MP_COUNT_LG(ly);
	  MP_START_LOW(pp,p1p,ly-2);
	  MP_START_LOW(p2p,p2,ly);
	  WHILE_COUNT(--j) 	  
	    { GEN ppp;
	      k1=addmul(qp,MP_NEXT_UP(p2p));
	      ppp = &MP_NEXT_UP(pp);
	      *ppp =subll(*ppp,k1);hiremainder+=overflow;
	    }
	  if((ulong)p1p[-1]<(ulong)hiremainder)
	    {
	      overflow=0;qp--;
	      j = MP_COUNT_LG(ly);
	      MP_START_LOW(pp,p1p,ly-2);
	      MP_START_LOW(p2p,p2,ly);
	      WHILE_COUNT(--j){ GEN ppp = &MP_NEXT_UP(pp);
				ADDLLX(*ppp,MP_NEXT_UP(p2p),*ppp);}

	    }
	  p1p[-1] = qp;
	}
      av1=avma;
      if((plong)z!=0xffffffff)
	{ulong lgp3 = lz + 2;
	 MP_START_LOW(p1p,p1,lgp3);
	 if (p1[1]) {lgp3++;}
	   else if (lz==0) sy=0;
	 p3 = cgeti(lgp3);
	 MP_START_LOW(pp,p3,lgp3);
	 j = MP_COUNT_LG(lgp3);
	 WHILE_COUNT(--j)
	   {MP_NEXT_UP(pp) = MP_NEXT_UP(p1p) ;}
	 if(lgp3<3) {p3[1]=2;} else {p3[1]=p3[0];setsigne(p3,sy);}
	}
      if(z!=0)
	{
	  for(j=lz+2;(j<lx)&&(!p1[j]);j++);
	  if(j==lx) p4=icopy(gzero);
	  else
	    {
	      p4=cgeti(lx-j+2);p4[1]=p4[0];
	      if(!sh) for(i=2;j<lx;j++,i++) p4[i]=p1[j];
	      else
		{
		  hiremainder=0;k1=shiftlr(p1[j++],sh);k=hiremainder;
		  if(k1) {p4[2]=k1;dec=1;} else
		    {p4[1]=p4[0]-1;p4++;avma+=4;p4[1]=p4[0];dec=0;}
		  for(i=2+dec;j<lx;j++,i++)
		    {
		      p4[i]=shiftlr(p1[j],sh)+k;k=hiremainder;
		    }
		}
	      setsigne(p4,sx);
	    }
	}
      if((plong)z==0xffffffff) return gerepile(av,av1,p4);
      if((plong)z==0) return gerepile(av,av1,p3);
      dec=lpile(av,av1,0)>>2;*z=p4+dec;return p3+dec;	  
    }
}
/* machines which provide an inline version of mulul need
 to provide a function for calls where that inlining can't take place
 */
#ifdef NEED_MULUL3
ulong
mulul3(a,b,c)
   ulong a,b,*c;
{ return mulul(a,b,*c);}
#endif

#ifdef NEED_DIVUL3
ulong
divul3(a,b,c)
   ulong a,b,*c;
{ return divul(a,b,*c);}
#endif

/*
;;- Local variables:
;;- version-control:t
;;- End:
*/
