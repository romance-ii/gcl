
#ifdef __GNUC__
/* so have assembler macros */
/* Normally gcc for the 386 only allows 4 operands to an asm,
however we need 5 for divul.    You can easily make gcc accept
more by changing one line in genconfig.c and then recompiling gcc

  printf ("\n#define MAX_RECOG_OPERANDS %d\n", max_recog_operands_flag + 3);

*/  
/* divul
   rem=hl; f=divul(x,y,rem);
         then
   hl:x == f*y + rem  is true */

#define divul(x,y,hiremainder) \
({ulong __x =(x),__y=(y); \
  asm volatile("divl %3" \
     :"=a" (__x),"=d" (hiremainder) \
     :"0" (__x),"rm"(__y),"1" (hiremainder) );  \
   __x;})


/*    mulul is a macro:
    f = mulul(a,b,h) <--> h:f  == a*b
*/

#define mulul(x,y,hiremainder) \
({ulong __x =(x),__y=(y); \
  asm volatile("mull %3" \
     :"=a" (__x),"=d" (hiremainder) \
     :"0" (__x),"rm"(__y));  \
   __x;})


  /* add_carry: add X and Y  adding 1 to H if there was overflow
     H is presumed to be small enough not to overflow 
     */

#define add_carry(x,y,h) \
({ulong __res ; \
     asm volatile("addl %4,%1\n\tadcl $0,%0" \
  :"=rm,rm" (h),"=r,m" (__res): "0,0" (h),"1,1" (x),"rmn,r"(y)); \
    __res;})


  /* SET_MACHINE_CARRYSet the machine carry flag
     if  overflow = 1 other wise clear it.
   */

#define SET_MACHINE_CARRY(overflow) \
  asm volatile("addl $-1,%0" : "=r" (overflow) : "0" (overflow))


  /* SET_OVERFLOW Set the overflow = the current carry code
     Note that machine loads and mov's should not affect
     the carry code. 
   */

#define SET_OVERFLOW \
  asm volatile("movl $0,%0\n\tadcl $0,%0" \
  : "=rm" (overflow))

/* x - y */
#define SUBXCC(xp,yp)\
({unsigned long _res;  asm volatile("sbbl %2,%0" \
  :"=r,rm" (_res): "0,0" (xp) , "rm,r" (yp)); _res;})

#define ADDXCC(xp,yp)\
({unsigned long _res;  asm volatile("adcl %2,%0" \
  :"=r,m" (_res): "0,0" (xp) , "rm,r" (yp)); _res;})

/* index of the first non zero bit numbering from left */
/* don't think there is an instruction.
#define bfffo(x) \
({ulong _res;  asm ("bfffo %1{#0:#0},%0" : "=r" (_res): "rm" (x)); _res;})
*/

#define NEED_MULUL3
#define NEED_DIVUL3
     
#else  /* not gcc */

#endif
     


  
#define BASE_COUNTER 0
