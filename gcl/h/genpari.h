
#ifndef FIRSTWORD
#include        <setjmp.h>
#endif
/*
#include        <signal.h>
#include        <stdio.h>
#include        <string.h>
#include        <math.h>
#include        <malloc.h>
#include        <ctype.h>
#include        <sys/time.h>
#include        <sys/file.h>
#include        <sys/resource.h>
*/
#ifndef plong
#define plong int
#endif

#ifndef EXTER
#define EXTER extern
#endif

#ifdef AIX3
#define ulong ulong_
#endif

#define ulong our_ulong
#include "gencom.h"
#include "erreurs.h"
#include "genport.h"

extern ulong ABS_MOST_NEGS[];
extern ulong MOST_NEGS[];
#undef ulong
#define our_ulong unsigned plong


GEN addii();
GEN icopy();
GEN divss();
GEN rcopy();

/* EXTER int in_saved_avma ; */










