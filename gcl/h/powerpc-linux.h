#include "linux.h"

#ifdef IN_GBC
#undef MPROTECT_ACTION_FLAGS
#define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO
#define GET_FAULT_ADDR(sig,code,sv,a) \
 ((siginfo_t *)code)->si_addr
#endif

#define SGC

#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE do {void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \
                        v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));\
                        for (;v<ve;v+=CLEAR_CACHE_LINE_SIZE) \
                           asm __volatile__ ("dcbst 0,%0\n\tsync\n\ticbi 0,%0\n\tsync\n\tisync": : "r" (v) : "memory");\
                        } while(0)
