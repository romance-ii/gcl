#include <setjmp.h>
#include <stdio.h>
#include <math.h>

/*  We try here to compile in function addresses to which it is known
    that the compiler will make *direct* reference.  20040308 CM */


int main() {

  FILE *f=NULL;
  char ch;
  jmp_buf env;
  double d=0.1;

  ch=getc(f);
  putc(ch,f);

  setjmp(env);

  cos(d);
  sin(d);
  tan(d);

  acos(d);
  asin(d);
  atan(d);

  cosh(d);
  sinh(d);
  tanh(d);

  acosh(d);
  asinh(d);
  atanh(d);

  exp(d);
  log(d);
  
  return 0;

}
