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
	int i,j,k;
	char **n,**a;
	void *v;
	for (i=j=0;argv[i];i++)
	  j+=strlen(argv[i])+1;
	for (k=0;envp[k];k++)
	  j+=strlen(envp[k])+1;
	j+=(i+k+3)*sizeof(char *);
	if ((v=sbrk(j))==(void *)-1) {
	  printf("Cannot brk environment space\n");
	  exit(-1);
	}
	a=v;
	v=a+i+1;
	n=v;
	v=n+k+2;
	for (i=0;argv[i];i++) {
	  a[i]=v;
	  strcpy(v,argv[i]);
	  v+=strlen(v)+1;
	}
	a[i]=0;
	for (k=0;envp[k];k++) {
	  n[k]=v;
	  strcpy(v,envp[k]);
	  v+=strlen(v)+1;
	}
	n[k]="GCL_UNRANDOMIZE=t";
	n[k+1]=0;
#ifdef GCL_GPROF
	gprof_cleanup();
#endif
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
