
#ifndef _GNU_SOURCE
#include <varargs.h>
#else
#include <stdarg.h>
#define _VA_LIST_DEFINED
#endif
#include <setjmp.h>
#include <stdio.h>

#define	endp(obje)	endp1(obje)
#define STSET(type,x,i,val)  do{SGC_TOUCH(x);STREF(type,x,i) = (val);} while(0)


