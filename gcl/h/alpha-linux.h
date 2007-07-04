#include "linux.h"

#define MUST_COPY_VA_LIST

#include <ucontext.h>
#undef GET_FAULT_ADDR
#define GET_FAULT_ADDR(sig,code,scp,addr) \
  (char *)((struct ucontext *)scp )->uc_mcontext.sc_traparg_a0

#define SGC
#include <asm/system.h>
#define CLEAR_CACHE imb()
#define SPECIAL_BFD_INCLUDE "sfaslbfd_alpha.c"
#define NOINTDIV
#undef LIBC_EXT
#define LIBC_EXT ".6.1" /*FIXME*/
