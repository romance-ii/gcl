
#ifdef __GNUC__
/* so have assembler macros */

/* divul
   rem=hl; f=divul(x,y,rem);
         then
   hl:x == f*y + rem  is true */

#define divul(x,y,hiremainder) \
({ulong __x =(x),__y=(y); \
  asm volatile("divul %3,%1:%0" \
     :"=d" (__x),"=d" (hiremainder) \
     :"0" (__x),"dmn"(__y),"1" (hiremainder) );  \
   __x;})


/*    mulul is a macro:
    f = mulul(a,b,h) <--> h:f  == a*b
*/

#define mulul(x,y,hiremainder) \
({ulong __x =(x),__y=(y); \
  asm volatile("mulul %3,%1:%0" \
     :"=d" (__x),"=d" (hiremainder) \
     :"0" (__x),"dmn"(__y),"1" (hiremainder) );  \
   __x;})


  /* add_carry: add X and Y  adding 1 to H if there was overflow
     H is presumed to be small enough not to overflow 
     */
#define ZERO 0
/* note we have to pass the dummy arg (__res) to addxl asm,
   to force that addition to take first */
#define add_carry(x,y,h) \
({ulong __res ; \
  __res = (x) + (y); \
     asm volatile("addxl %2,%0" \
  :"=d" (h): "0" (h) , "d" (ZERO),"d" (__res)); \
    __res;})


  /* SET_MACHINE_CARRYSet the machine carry flag
     if  overflow = 1 other wise clear it.
   */

#define SET_MACHINE_CARRY(overflow) \
  asm volatile("addl #-1,%0" : "=d" (overflow) : "0" (overflow))


  /* SET_OVERFLOW Set the overflow = the current carry code
     Note that machine loads and mov's should not affect
     the carry code. 
   */

#define SET_OVERFLOW \
  asm volatile("clrl %0\n\taddxl %0,%0" \
  : "=d" (overflow))

/* x - y */
#define SUBXCC(xp,yp)\
({unsigned plong _res;  asm volatile("subxl %2,%0" \
  :"=d" (_res): "0" (xp) , "d" (yp)); _res;})

#define ADDXCC(xp,yp)\
({unsigned plong _res;  asm volatile("addxl %2,%0" \
  :"=d" (_res): "0" (xp) , "d" (yp)); _res;})

/* The 'X' bit of the condition code won't be
   affected by computing the jump label */

#define C_SWITCH_DOESNT_AFFECT_CARRY

/* index of the first non zero bit numbering from left */

#define bfffo(x) \
({ulong _res;  asm ("bfffo %1{#0:#0},%0" : "=d" (_res): "rm" (x)); _res;})

#define NEED_MULUL3
#define NEED_DIVUL3

     
#else  /* not gcc */

#endif
     


  
#define BASE_COUNTER -1   
