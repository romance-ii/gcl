
#include <varargs.h>
#include <setjmp.h>
#include <stdio.h>

#define	endp(obje)	endp1(obje)
#define STSET(type,x,i,val)  do{SGC_TOUCH(x);STREF(type,x,i) = (val);} while(0)


