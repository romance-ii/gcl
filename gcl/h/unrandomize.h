#include <sys/personality.h>
#include <syscall.h>
#include <unistd.h>
#include <alloca.h>

{

  long pers = personality(0xffffffffUL);
  if (!(pers & ADDR_NO_RANDOMIZE) && !getenv("GCL_UNRANDOMIZE"))
    if (personality(pers | ADDR_NO_RANDOMIZE) != -1 && personality(0xffffffffUL) & ADDR_NO_RANDOMIZE) {
      int i;
      char **n;
      for (i=0;envp[i];i++);
      n=alloca((i+2)*sizeof(*n));
      n[i+1]=0;
      n[i--]="GCL_UNRANDOMIZE=t";
      for (;i>=0;i--)
	n[i]=envp[i];
#ifdef GCL_GPROF
      gprof_cleanup();
#endif
      execve(*argv,argv,n);    
    }

}
