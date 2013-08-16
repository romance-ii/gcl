#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define massert(a_) if (!(a_)) msys_err(l,#a_,__LINE__,__FILE__,__FUNCTION__)

static int
msys_err(FILE *l,const char *a,unsigned n,const char *f,const char *fn) {

  if (l) {								
    fprintf(l,"The assertion %s on line %d of %s in function %s failed", a,n,f,fn);
    fflush(l);
    fclose(l);
  }

  exit(-1);

}

int
main(int argc,char * argv[]) {

#ifdef _WIN32
  return 0;
#else

  char b[4096];
  FILE *f,*l=NULL;
  char *n=argv[2],*t=argv[3],*ln=argc>4 ? argv[4] : NULL,c,c1;
  int r=0;

  if (fork()) return 0;

  if (chdir(argv[1])) exit(-1);

  if (ln)
    l=fopen(ln,"w");

  massert(f=fopen(n,"w"));
  massert(fprintf(f,"%c\n",c=c1='0')==2);
  massert(!fclose(f));
  
  for (;;usleep(10000)) {

    massert(f=fopen(n,"r"));
    c=fgetc(f);
    massert(!fclose(f));

    if (c==EOF) {
      if (l)
	fclose(l);
      exit(0);
    }

    if (c==c1) 
      continue;

    massert(f=fopen(n,"r"));
    massert(fgets(b,sizeof(b),f)==b);
    massert(!fclose(f));

    r=system(b);

    if (l) {
      fprintf(l,"%d %s\n",r,b);
      fflush(l);
    }

    massert(f=fopen(t,"w"));
    massert(fprintf(f,"%d\n",r)>0);
    massert(!fclose(f));

    massert(f=fopen(t,"r"));
    c1=fgetc(f);
    massert(!fclose(f));

    massert(!rename(t,n));

  }

  return 0;

#endif

}
