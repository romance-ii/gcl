

#ifdef __GNUC__
/* have assembler macros */

#define add_carry(x,y,h) \
({ ulong __res,__x =(x),__y=(y); \
  asm volatile(  \
"addcc %2,%3,%0
\taddx %1,%%g0,%1"\
 : "=r" (__res),"=r" (h) \
 : "r" (__x) , "rn" (__y),"1" (h) ); \
   __res;})


  /* SET_MACHINE_CARRY Set the machine carry flag
       if  overflow = 1 otherwise clear it.
   */

#define SET_MACHINE_CARRY(overflow) \
 asm volatile("subcc %%g0,%0,%%g0" \
	      : :"r" (overflow))

  /* SET_OVERFLOW Set the overflow = the current carry code
     Note that machine loads and mov's should not affect
     the carry code. 
   */

#define SET_OVERFLOW \
  asm volatile("addx %%g0,%%g0,%0" \
  : "=r" (overflow))

#define ADDXCC(u,v) \
 ({ulong res;  asm("addxcc %1,%2,%0" \
  : "=r" (res): \
  "r" (u),"r" (v)); res;})
#define SUBXCC(u,v) \
 ({ulong res;  asm("subxcc %1,%2,%0" \
  : "=r" (res): \
  "r" (u),"r" (v)); res;})

/* get a copy of mulul3 included for when inlining not there */
#define NEED_MULUL3

#define mulul(a,b,__hi) \
({unsigned plong __x=(a),__y=(b); \
   asm(" 
        or      %0,%3,%%o4      
        mov     %0,%%y
        andncc  %%o4,0xfff,%%g0
        be      2f
        andcc   %%g0,%%g0,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%%g0,%%o4
        tst     %3
        bl,a    1f
        add     %%o4,%0,%%o4
1:      mov     %%o4,%1
        b       3f 
        rd      %%y,%0
2:      clr     %1
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%3,%%o4
        mulscc  %%o4,%%g0,%%o4
        rd      %%y,%%o5
        sll     %%o4,12,%%o4
        srl     %%o5,20,%%o5
        or      %%o5,%%o4,%0
3:       
"  \
  : "=r" (__x),"=&r" (__hi): \
    "0" (__x),"r" (__y): \
     "%o4","%o5"); __x;})    /* "y" should be hear in that it is munged */
/* the above '=&r' indicates that the register for _hi may NOT be the
same reg as used by __y.*/



#else  /* no __GNUC__ */


#endif
 
