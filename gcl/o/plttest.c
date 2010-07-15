#include <unistd.h>
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
#include <math.h>
#include <complex.h>

#include "config.h"

/*  We try here to compile in function addresses to which it is known
    that the compiler will make *direct* reference.  20040308 CM */

#ifndef DARWIN
extern int _mcount();
#define mmcount _mcount
extern void sincos(double,double *,double *);
#endif

int
main(int argc,char * argv[],char *envp[]) {

  FILE *f=NULL;
  char ch=0;
  jmp_buf env;
  double d=0.1;
  long l;
  unsigned long ul;
  double complex dc;

  sscanf(argv[1],"%lf",&d);
  bzero(&env,sizeof(env));
  memset(&env,0,sizeof(env));
  
  ul=*(unsigned long *)envp;
  ul=ul%(ul>>(ul & 0x3));
  l=*(long *)argv;
  l=l%(l<<(l & 0x7));
  l/=ul/l;
  l/=((long)ul)/l;

  l=__builtin_clzl(l);
  l=__builtin_ctzl(l);
  l=__builtin_popcountl(l);
  l=__builtin_parityl(l);
  l=__builtin_ffsl(l);

  ch=getc(f);
  ch&=putc(ch,f);
  ch&=feof(f);

  f=fdopen(l,"r");
  l=read(l,&l,sizeof(l));
  l=write(l,&l,sizeof(l));

#ifndef DARWIN
  ch&=mmcount();
#endif

  setjmp(env);

  d=cos(d);
  d=sin(d);
#ifndef DARWIN
  sincos(d,&d,&d);
#endif
  d=tan(d);
  dc=d+d*I;
  dc*=dc;
  d=creal(dc);

  d=acos(d);
  d=asin(d);
  d=atan(d);

  d=cosh(d);
  d=sinh(d);
  d=tanh(d);

#ifndef _WIN32
  d=acosh(d);
  d=asinh(d);
  d=atanh(d);
#endif

  d=exp(d);
  d=log(d);
#ifdef __i386__/*FIXME*/
  d=logl(d);
#endif

  d=sqrt(d);
  
  return ul & l & ((unsigned long)d) & ch;

}
