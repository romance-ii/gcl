#ifndef lsub
#ifndef our_ulong
#define our_ulong unsigned plong
#endif
EXTER our_ulong overflow, hiremainder;
#endif

#define ulong unsigned plong

#ifndef WSIZ
#define WSIZ 32


/*  Notation: if A and B are unsigned 32 bit integers,
    1)  A:B signifies the 64 bit integer A*2^32 + B
    2)  S(A:B) the signed 64 bit integer
    3)  I(x) is a true integer.   If (x) were unsigned then
        I(x) >= 0, otherwise I(x) has the same sign and size as x. 

  */

/* TEMPVARS are variables are used to prevent double evaluation
  of arguments in macros, and also to make sure of the type.
  Be careful about the composition of macros
*/

#define TEMPVARS our_ulong Xtx,Xty,Xtres;
#define TEMPVARS2 our_ulong Xtx;
/*
  our_ulong res,x,y; res = addll(x,y);
        then
   I(overflow:res) == I(x) + I(y);
*/   

#define addll(x,y) \
       (Xtx=(x),Xty=(y), Xtres = Xtx+Xty, \
	     overflow = \
	     (Xtres < Xtx ? 1:0), Xtres)

/*
   our_ulong res,x,y; o = overflow; res = addllx(x,y);
            then
   I(overflow:res) == I(x) + I(y) +I(o).
*/

#ifndef addllx
#define addllx(x,y) \
  (Xtx=(x),Xtres= Xtx + (y), \
   (Xtres < Xtx ? (Xtres += overflow ,overflow=1,Xtres) : \
    (  Xtres += overflow , \
     overflow = (Xtres < overflow ? 1 : 0), \
     Xtres)))
#endif

 /* our_ulong x,y,w,o;
    if we do  o = overflow, res = subll(x,y) then
     I(S(-overflow:res))  == I(x) -I(y);
   */
#ifndef subll
#define subll(x,y) \
  (Xtx=(x),Xty=(y),Xtres= Xtx - Xty, \
     overflow = (Xtx >= Xty ? 0 : 1), Xtres)
#endif

/*  our_ulong x,y,o,res; o = overflow; res= subllx(x,y);
           then
      I(S(-overflow):res) == I(x) - I(y) -I(o) 
    where overflow is in {0,1} at all times.
*/

#ifndef subblx
#define subllx(x,y) \
  (Xtx=(x),Xty=(y),Xtres= Xtx - Xty, Xtres -=overflow, \
   (Xty > Xtx ?  overflow = 1 : \
    Xty < Xtx ?  overflow = 0 : 0), \
   Xtres)
#endif

#define shiftlr(x,y) \
       (Xtx = x,  hiremainder=Xtx<<(32-y),Xtx>>y)

#define shiftl(x,y) \
       (Xtx = x,  hiremainder=Xtx>>(32-y),Xtx<<y)


#define llsub(h1,l1,h,l) \
do{int tem= (int)l - (int) l1; \
     if((UINT)l1> (UINT) l) (UINT) h--; \
   l= (int)l - (int) l1; \
   h=h-h1;\
} while (0) 

/* x is less than WSIZ and it is shifted n bits into hi and lo */

#define llshift(x,n,hi,lo) \
do { hi = x >> (WSIZ - n) ; \
     lo = x << n ; \
  }while (0)

#define UINT unsigned int


	
#define lladd(h1,l1,h,l) \
do {UINT res; res=(UINT)l1+(UINT)l; \
 if ((UINT)res< (UINT)l1 || (UINT)res< (UINT)l) \
   /* overflow */ \
   (h)++;  \
     l=res; \
    h= (UINT)h+(UINT)h1; \
}while (0)


   /* x,y unsigned longs.
     u = x + y  if (u > 2^32)  h = h+1; */
#ifndef add_carry
#define add_carry(x,y,h) \
  (Xtx = (x), Xtres = Xtx +(y), (Xtres < Xtx ? (h++,1):0), Xtres)
#endif
#endif

#ifndef BASE_COUNTER 
#define BASE_COUNTER 0
#endif


#define divll(x,y) divul(x,y,hiremainder)

/*  our_ulong x,y,h, res; hi = rem;  res = divul(x,y,rem)
           then
    I(hi:x) ==  I(y) * I(res) + I(rem)
        and  ( 0 = < rem < y)
*/

#ifndef divul
#define divul(x,y,h) divul3(x,y,&h)
#endif

/*  our_ulong x,y,h, res; res = mulul(x,y,h)
           then
    I(h:res) ==  I(x) * I(y);
*/
#ifndef mulul
#define mulul(x,y,h) mulul3(x,y,&h)
#endif

#ifndef addmul
#define addmul(x,y) \
  (Xtx = hiremainder, Xtres = mulul(x,y,hiremainder),\
   add_carry(Xtx,Xtres,hiremainder))
#endif

#ifdef SET_MACHINE_CARRY
		     
#define ADDLLX(x,y,z) \
  SET_MACHINE_CARRY(overflow); \
  (z) = ADDXCC((x),(y)); \
  SET_OVERFLOW

#define SUBLLX(x,y,z) \
  SET_MACHINE_CARRY(overflow); \
  (z) = SUBXCC((x),(y)); \
  SET_OVERFLOW


#ifdef C_SWITCH_DOESNT_AFFECT_CARRY

#define CASE(i,op) case i: MP_NEXT_UP(zp) = op(MP_NEXT_UP(xp),(MP_NEXT_UP(yp)))

#define QUICK_LOOP(j,op) \
  do{SET_MACHINE_CARRY(overflow); \
  switch(j){ \
  default:  \
    CASE(16,op); \
    CASE(15,op); \
    CASE(14,op); \
    CASE(13,op); \
    CASE(12,op); \
    CASE(11,op); \
    CASE(10,op); \
    CASE(9,op); \
    CASE(8,op); \
    CASE(7,op); \
    CASE(6,op); \
    CASE(5,op); \
    CASE(4,op); \
    CASE(3,op); \
    CASE(2,op); \
    CASE(1,op); \
  case 0: SET_OVERFLOW; j -= 16;}} while (j > 0)

#else
/* The C switch statement changes the machine carry, so
   that we must reset it each time we enter */
  
#define LA(i,op)  L ## op ## i:  MP_NEXT_UP(zp) = \
  op(MP_NEXT_UP(xp),MP_NEXT_UP(yp))
#define CA(i,op) case i: SET_MACHINE_CARRY(overflow);\
  goto L ## op ## i
#define QUICK_LOOP(j,op) \
 do {switch (j) { default: \
 CA(16,op);CA(15,op);CA(14,op);CA(13,op);CA(12,op);CA(11,op);CA(10,op); \
 CA(9,op);CA(8,op);CA(7,op);CA(6,op);CA(5,op);CA(4,op);CA(3,op); \
 CA(2,op);CA(1,op); \
 LA(16,op);LA(15,op);LA(14,op);LA(13,op);LA(12,op);LA(11,op);LA(10,op); \
 LA(9,op);LA(8,op);LA(7,op);LA(6,op);LA(5,op);LA(4,op);LA(3,op);LA(2,op);\
 LA(1,op); \
 SET_OVERFLOW; j -= 16;}} while (j > 0)

 /* end  else C_SWITCH_DOESNT_AFFECT_CARRY */
#endif 

	/* endif don't use machine carry in separate ops */
#endif			 

		     
#ifndef ADDLLX
#define ADDLLX(x,y,z) (z) = addllx((x),(y))
#endif
/* z=x-y-overflow */
#ifndef SUBLLX
#define SUBLLX(x,y,z) (z) = subllx((x),(y))
#endif

#ifndef mulll
#define mulll(x,y) mulul(x,y,hiremainder)
#endif

#ifndef mulul
#define mulul(a,b,h) mulul3(a,b,&h)
#endif

/*  The following macros are for stepping through
    a bignum , after positioning a pointer at the
    high or low word.
*/    

#define MP_START_LOW(u,x,l)  u = (x)+l
#define MP_START_HIGH(u,x,l)  u = (x)+2
#define MP_NEXT_UP(u) (*(--(u)))
#define MP_NEXT_DOWN(u) (*((u)++))
  /* ith word from the least significant */
#define MP_ITH_WORD(u,i,l) (u)[l-i-1]
#define MP_CODE_WORDS 2
/* MP_LOW(x,lgef(x)) is the least significant  word */
#define MP_LOW(x,l) ((x)[(l)-1])
/* most significant word if l is the lgef(x) */  
#define MP_HIGH(x,l) (x)[2]

  /*Some machines will iterate more efficiently with different bottoms
for the iteration.  Eg with gcc and mc68k one can generate the dbra
instruction which is done when i == -1.  The dbra does not alter the
condition code which can be important in a tight loop.  */

#define MP_COUNT_LG(l)  COUNT(l - MP_CODE_WORDS )
  /* i should be the number of counts so if i = COUNT(3)
     WHILE_COUNT(--i) will repeat body 3 times. */
#define  COUNT(l) (l +1+BASE_COUNTER)
#define WHILE_COUNT(l) while (l!=BASE_COUNTER)

extern our_ulong ABS_MOST_NEGS[];
extern our_ulong  MOST_NEGS[];



     
