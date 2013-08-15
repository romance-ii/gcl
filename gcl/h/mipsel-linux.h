#include "linux.h"

#define SGC

#include <asm/cachectl.h>
int cacheflush(void *,int,int);
#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE do {void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \
                        v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));\
                        cacheflush(v,ve-v,BCACHE);\
                    } while(0)


#if SIZEOF_LONG==4
#define RELOC_H "elf32_mips_reloc.h"
#define SPECIAL_RELOC_H "elf32_mips_reloc_special.h"
#else
#define RELOC_H "elf64_mips_reloc.h"
#define SPECIAL_RELOC_H "elf64_mips_reloc_special.h"
#endif

/*Remove when .MIPS.stubs are replaced with callable .plt entries*/
#define LD_BIND_NOW

