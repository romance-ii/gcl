
/* amazingly the only instructions which the mips seems to have for overflow
 is add and sub which signal:
 	       Integer overflow			SIGTRAP	    BRK_OVERFLOW
 on overflow.   Of course that is much too expensive.
 Their div instruction does only  32 by 32 bit divide.
*/

	       

#ifdef __GNUC__
/* so have assembler macros */
/*    mulul is a macro:
    f = mulul(a,b,h) <--> h:f  == a*b
*/

#define mulul(x,y,hiremainder) \
({ulong __x =(x),__y=(y),__res; \
  asm volatile("multu %2,%3\n\tmflo %0\n\tmfhi %1" \
     :"=r" (__res),"=r" (hiremainder) \
     :"r" (__x),"r"(__y));  \
   __res;})


  /* add_carry: add X and Y  adding 1 to H if there was overflow
     H is presumed to be small enough not to overflow 
     */
     
#else  /* not gcc */


#endif
     


  
#define BASE_COUNTER -1   
