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
	Random numbers
*/

#include <time.h>

#include "include.h"
#include "num_include.h"

#ifdef AOSVS

#endif

static object
rando(object x, object rs)
{
	enum type tx;
	object z;
	double d;
	
	tx = type_of(x);
	if (number_compare(x, small_fixnum(0)) != 1)
		FEwrong_type_argument(TSpositive_number, x);
	d = (double)(rs->rnd.rnd_value>>1) / (4294967296.0/2.0);
	d = number_to_double(x) * d;
	if (tx == t_fixnum) {
		z = make_fixnum((int)d);
		return(z);
	} else if (tx == t_bignum) {
		z = double_to_integer(d);
		return(z);
	} else if (tx == t_shortfloat) {
		z = alloc_object(t_shortfloat);
		sf(z) = (float)d;
		return(z);
	} else if (tx == t_longfloat) {
		z = alloc_object(t_longfloat);
		lf(z) = d;
		return(z);
	} else {
		FEerror("~S is not an integer nor a floating-point number.",
			1, x);
		return(Cnil);
	}
}

static object
make_random_state(object rs)
{
        object z;
#ifdef AOSVS

#endif

	if (rs == Cnil) {
		z = alloc_object(t_random);
		z->rnd.rnd_value = symbol_value(Vrandom_state)->rnd.rnd_value;
		return(z);
	} else if (rs == Ct) {
		z = alloc_object(t_random);
#ifdef UNIX
		z->rnd.rnd_value = time(0);
#endif
#ifdef AOSVS




#endif
		return(z);
	} else if (type_of(rs) != t_random) {
   		FEwrong_type_argument(sLrandom_state, rs);
		return(Cnil);
	} else {
		z =alloc_object(t_random);
		z->rnd.rnd_value = rs->rnd.rnd_value;
		return(z);
	}
}

static void
advance_random_state(object rs)
{
	rs->rnd.rnd_value
	= rs->rnd.rnd_value
	+ (rs->rnd.rnd_value<<2)
	+ (rs->rnd.rnd_value<<17)
	+ (rs->rnd.rnd_value<<27);
}


LFD(Lrandom)(void)
{
	int j;
        object x;
	
	j = vs_top - vs_base;
	if (j == 1)
		vs_push(symbol_value(Vrandom_state));
	check_arg(2);
	check_type_random_state(&vs_base[1]);
	advance_random_state(vs_base[1]);
	x = rando(vs_base[0], vs_base[1]);
	vs_top = vs_base;
	vs_push(x);
}

LFD(Lmake_random_state)(void)
{
	int j;
	object x;

	j = vs_top - vs_base;
	if (j == 0)
		vs_push(Cnil);
	check_arg(1);
	x = make_random_state(vs_head);
	vs_top = vs_base;
	vs_push(x);
}

LFD(Lrandom_state_p)(void)
{
	check_arg(1);
	if (type_of(vs_pop) == t_random)
		vs_push(Ct);
	else
		vs_push(Cnil);
}

void
gcl_init_num_rand(void)
{
        Vrandom_state = make_special("*RANDOM-STATE*",
				     make_random_state(Ct));

	make_function("RANDOM", Lrandom);
	make_function("MAKE-RANDOM-STATE", Lmake_random_state);
	make_function("RANDOM-STATE-P", Lrandom_state_p);
}
