#include <sys/personality.h>
#include <syscall.h>
#include <unistd.h>
#include <alloca.h>
#include <errno.h>


if (!getenv("LD_BIND_NOW")) {

  int i;
  char **n;

  for (i=0;envp[i];i++);
  n=alloca((i+2)*sizeof(*n));
  n[i+1]=0;
  n[i--]="LD_BIND_NOW=t";
  for (;i>=0;i--)
    n[i]=envp[i];
#ifdef GCL_GPROF
  gprof_cleanup();
#endif
  errno=0;
  execve(*argv,argv,n);
  printf("execve failure %d\n",errno);
  exit(-1);

}
