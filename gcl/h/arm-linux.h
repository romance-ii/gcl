#include "linux.h"

/*  #define CLEAR_CACHE do {\ */
/*    void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \ */
/*    register unsigned long _beg __asm ("a1") = (unsigned long)(v);	\ */
/*    register unsigned long _end __asm ("a2") = (unsigned long)(ve);\ */
/*    register unsigned long _flg __asm ("a3") = 0;			\ */
/*    __asm __volatile ("swi 0x9f0002		@ sys_cacheflush"	\ */
/*	    :  no outputs 					\ */
/*		    : no inputs					\ */
/*		    : "a1");						\*/
/*  } while (0) */

#define CLEAR_CACHE do {\
  void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \
  register unsigned long _beg __asm ("a1") = (unsigned long)(v);	\
  register unsigned long _end __asm ("a2") = (unsigned long)(ve);\
  register unsigned long _flg __asm ("a3") = 0;			\
  __asm __volatile ("swi 0x9f0002		@ sys_cacheflush"	\
		    : "=r" (_beg)				\
		    : "0" (_beg), "r" (_end), "r"(_flg));	\
} while (0)

#ifdef IN_GBC
#undef MPROTECT_ACTION_FLAGS
#define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO
#define GET_FAULT_ADDR(sig,code,sv,a) \
 ((siginfo_t *)code)->si_addr
/*  #define GET_FAULT_ADDR(sig,code,sv,a) \ */
/*      ((void *)(*((char ***)(&code)))[44]) */
#endif

#define SGC
