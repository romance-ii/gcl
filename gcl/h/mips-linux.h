#include "linux.h"

#define SGC

#include <asm/cachectl.h>
int cacheflush(void *,int,int);
#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE do {void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \
                        v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));\
                        cacheflush(v,ve-v,BCACHE);\
                    } while(0)
#define SPECIAL_BFD_INCLUDE "sfaslbfd_mips.c"
