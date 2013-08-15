#include <sys/personality.h>
#include <syscall.h>
#include <unistd.h>
#include <string.h>
#include <alloca.h>
#include <errno.h>


{
  errno=0;

  {

    long pers = personality(0xffffffffUL);
    long flag = ADDR_NO_RANDOMIZE;

    if (sizeof(long)==4) flag|=ADDR_LIMIT_3GB|ADDR_COMPAT_LAYOUT;

    if (pers==-1) {printf("personality failure %d\n",errno);exit(-1);}
    if ((pers & flag)!=flag && !getenv("GCL_UNRANDOMIZE")) {
      errno=0;
      if (personality(pers | flag) != -1 && (personality(0xffffffffUL) & flag)==flag) {
	int i;
	char **n,**a;
	extern int *cs_org;
	cs_org=(void *)&flag;/*get right stack for potential gc in malloc*/
	for (i=0;envp[i];i++);
	n=malloc((i+2)*sizeof(*n));
	n[i+1]=0;
	n[i--]="GCL_UNRANDOMIZE=t";
	for (;i>=0;i--)
	  n[i]=strdup(envp[i]);
#ifdef GCL_GPROF
	gprof_cleanup();
#endif
	for (i=0;argv[i];i++);a=malloc((i+1)*sizeof(*argv));for (i=0;argv[i];i++) a[i]=strdup(argv[i]);a[i]=0;
	errno=0;
	execve(*a,a,n);
	printf("execve failure %d\n",errno);
	exit(-1);
      } else {
	printf("personality change failure %d\n",errno);
	exit(-1);
      }
    }
  }
}
