/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
	unixtime.c
*/

#define IN_UNIXTIME

#include "include.h"
#include <sys/types.h>
#ifdef UNIX
/* all we want from this is HZ the number of clock ticks per second
which is usually 60 maybe 100 or something else. */
#undef PAGESIZE
#ifndef NO_SYS_PARAM_H
#include <sys/param.h>
#endif
#endif
#ifndef HZ
#define HZ 60
#endif

#define HZ1 (HZ > 100 ? 100 : HZ)

#ifdef USE_ATT_TIME
#undef BSD
#define ATT
#endif
#ifdef MINGW
#include <sys/timeb.h>
#endif

#ifdef BSD
#include <sys/timeb.h>
#ifndef NO_SYS_TIMES_H
#include <sys/times.h>
#endif
#include <sys/time.h>
static struct timeb beginning;
#endif

#ifdef ATT
#include <sys/times.h>
long beginning;
#endif

runtime()
{

#ifdef USE_INTERNAL_REAL_TIME_FOR_RUNTIME
    return fLget_internal_real_time();
#else	
	{
	  struct tms buf;
	  times(&buf);
	  return(buf.tms_utime);
	}
#endif
}

object
unix_time_to_universal_time(i)
int i;
{
	object x;
	vs_mark;

	vs_push(make_fixnum(24*60*60));
	vs_push(make_fixnum(70*365+17));
	x = number_times(vs_top[-1], vs_top[-2]);
	vs_push(x);
	vs_push(make_fixnum(i));
	x = number_plus(vs_top[-1], vs_top[-2]);
	vs_reset;
	return(x);
}

DEFUNO("GET-UNIVERSAL-TIME",object,fLget_universal_time,LISP
   ,0,0,NONE,OO,OO,OO,OO,Lget_universal_time,"")()
{
	/* 0 args */
	RETURN1(unix_time_to_universal_time(time(0)));
}

Lsleep()
{
	object z;
	
	check_arg(1);
	check_type_or_rational_float(&vs_base[0]);
	if (number_minusp(vs_base[0]) == TRUE)
		FEerror("~S is not a non-negative number.", 1, vs_base[0]);
	Lround();
	z = vs_base[0];
	if (type_of(z) == t_fixnum)
		sleep(fix(z));
	else
		for(;;)
			sleep(1000);
	vs_top = vs_base;
	vs_push(Cnil);
}

Lget_internal_run_time()
{

#ifdef USE_INTERNAL_REAL_TIME_FOR_RUNTIME
        vs_push(make_fixnum(fLget_internal_real_time()));
	return;
#else
	struct tms buf;

	check_arg(0);
	times(&buf);
	vs_push(make_fixnum(buf.tms_utime));
	vs_push(make_fixnum(buf.tms_cutime));

#endif	
	
}


DEFUN("GET-INTERNAL-REAL-TIME",int,fLget_internal_real_time,LISP,0,0,NONE,IO,OO,OO,OO,"Run time relative to beginning")
     ()
{
#ifdef MINGW
  static struct timeb t0;
  struct timeb t;
    if (t0.time == 0) ftime(&t0);
    ftime(&t);
    return (t.time - t0.time)*HZ1 + ((t.millitm)*HZ1)/1000;

#endif  
#ifdef BSD
	static struct timeval begin_tzp;
	struct timeval tzp;
	if (begin_tzp.tv_sec==0)
	  gettimeofday(&begin_tzp,0);
	gettimeofday(&tzp,0);
/* the value returned will be relative to the first time this is called,
   plus the fraction of a second.  We must make it relative, so this
   will only wrap if the process lasts longer than 818 days
   */
	return ((tzp.tv_sec-begin_tzp.tv_sec)*HZ1
			    + ((tzp.tv_usec)*HZ1)/1000000);
#endif
#ifdef ATT
	return ((time(0) - beginning)*HZ1);
#endif
}

DEFVAR("*DEFAULT-TIME-ZONE*",sSAdefault_time_zoneA,SI,make_fixnum(TIME_ZONE),"");

init_unixtime()
{
#ifdef MINGW

#endif  
#ifdef BSD
	ftime(&beginning);
#endif
#ifdef ATT
	beginning = time(0);
#endif

	make_constant("INTERNAL-TIME-UNITS-PER-SECOND", make_fixnum(HZ1));

	make_function("SLEEP", Lsleep);
	make_function("GET-INTERNAL-RUN-TIME", Lget_internal_run_time);
}
