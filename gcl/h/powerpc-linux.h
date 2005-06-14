#include "linux.h"

#define SGC

#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE do {void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \
                        v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));\
                        for (;v<ve;v+=CLEAR_CACHE_LINE_SIZE) \
                           asm __volatile__ ("dcbst 0,%0\n\tsync\n\ticbi 0,%0\n\tsync\n\tisync": : "r" (v) : "memory");\
                        } while(0)
