/*
  sample usage:
linux14% cd gcl-2.2
linux14% cd o
linux14% gcc -I../h test_memprotect.c
linux14% a.out
[val=0]
Page violation (sig=b,code=2b,scp=2b,addr=2b,fault_adr=804a005)

Reading pp[5] (addr=804a005) 10
linux14% 
*/

#define IN_GBC
#define NEED_MP_H
#include "include.h"



#ifdef BSD
/* ulong may have been defined in mp.h but the define is no longer needed */
#undef ulong
#include <sys/mman.h>
#define PROT_READ_WRITE (PROT_READ | PROT_WRITE |PROT_EXEC)
#endif
#ifdef AIX3
#include <sys/vmuser.h>
#define PROT_READ RDONLY
#define  PROT_READ_WRITE UDATAKEY
int mprotect();
#endif

#include <signal.h>


char *pp;
int psize;

char *malloc();

#include <asm/signal.h>
#include <asm/sigcontext.h>

void
handler(sig,code,scp,addr)
     int sig,code;
     struct sigcontext *scp;
     char *addr;
{
  struct sigcontext_struct *bil= (void *) & code;
 printf("\nPage violation (sig=%x,code=%x,scp=%x,addr=%x,fault_adr=%x)",sig,code,scp,addr,GET_FAULT_ADDR(sig,code,scp,addr));
  fflush(stdout);
  mprotect(pp, psize, PROT_READ | PROT_WRITE);
  return;
}

main()
{
  char *p;
  int a;
  signal(SIGSEGV, handler);
  signal(SIGBUS, handler); 
  psize = getpagesize();
  p = malloc(3 * psize);
  a = (int)p;
  pp = (char *)( ((a / psize)+ 1) * psize);
  printf("[val=%d]",mprotect(pp, psize, PROT_READ));
  pp[5] = 10;
  printf("\n\nReading pp[5] (addr=%x) %d\n",&pp[5], pp[5]);
  fflush(stdout);
}
