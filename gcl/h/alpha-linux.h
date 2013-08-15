#include "linux.h"

#define MUST_COPY_VA_LIST

#include <ucontext.h>
#undef GET_FAULT_ADDR
#define GET_FAULT_ADDR(sig,code,scp,addr) \
  (char *)((struct ucontext *)scp )->uc_mcontext.sc_traparg_a0

#define SGC

#define RELOC_H "elf64_alpha_reloc.h"
#define SPECIAL_RELOC_H "elf64_alpha_reloc_special.h"
#define PAL_imb		134
#define imb() \
__asm__ __volatile__ ("call_pal %0 #imb" : : "i" (PAL_imb) : "memory")
#define CLEAR_CACHE imb()
