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
	sequence.d

	sequence routines
*/

#include "include.h"

#undef endp

#define	endp(obje)	((enum type)((endp_temp = (obje))->d.t) == t_cons ? \
			 FALSE : endp_temp == Cnil ? TRUE : \
			 (FEwrong_type_argument(sLlist, endp_temp),FALSE))

object endp_temp;

/*
	I know the following name is not good.
*/
object
alloc_simple_vector(l, aet)
int l;
enum aelttype aet;
{
	object x;

	x = alloc_object(t_vector);
	x->v.v_hasfillp = FALSE;
	x->v.v_adjustable = FALSE;
	x->v.v_displaced = Cnil;
	x->v.v_dim = x->v.v_fillp = l;
	x->v.v_self = NULL;
	x->v.v_elttype = (short)aet;
	return(x);
}

object
alloc_simple_bitvector(l)
int l;
{
	object x;

	x = alloc_object(t_bitvector);
	x->bv.bv_hasfillp = FALSE;
	x->bv.bv_adjustable = FALSE;
	x->bv.bv_displaced = Cnil;
	x->bv.bv_dim = x->bv.bv_fillp = l;
	x->bv.bv_offset = 0;
	x->bv.bv_self = NULL;
        x->bv.bv_elttype = aet_bit;
	return(x);
}

LFD(Lelt)()
{
	check_arg(2);
	vs_base[0] = elt(vs_base[0], fixint(vs_base[1]));
	vs_popp;
}

object
elt(seq, index)
object seq;
int index;
{
	object endp_temp;

	int i;
	object l;

	if (index < 0) {
		vs_push(make_fixnum(index));
		FEwrong_type_argument(sLpositive_fixnum, vs_head);
	}
	switch (type_of(seq)) {
	case t_cons:
		for (i = index, l = seq;  i > 0;  --i)
			if (endp(l))
				goto E;
			else
				l = l->c.c_cdr;
		if (endp(l))
			goto E;
		return(l->c.c_car);

	case t_vector:
	case t_bitvector:
		if (index >= seq->v.v_fillp)
			goto E;
		return(aref(seq, index));

	case t_string:
		if (index >= seq->st.st_fillp)
			goto E;
		return(code_char(seq->ust.ust_self[index]));

	default:
		if (seq == Cnil) goto E;
		FEwrong_type_argument(sLsequence, seq);
	}

E:
	vs_push(make_fixnum(index));
	/* FIXME message should indicate out of range */
	Icall_error_handler(sKwrong_type_argument,
		     make_simple_string("The index, ~S, is too large."),
		     1,vs_head);
	return(Cnil);
}

LFD(siLelt_set)()
{
	check_arg(3);
	vs_base[0] = elt_set(vs_base[0], fixint(vs_base[1]), vs_base[2]);
	vs_popp;
	vs_popp;
}

object
elt_set(seq, index, val)
object seq;
int index;
object val;
{
	object endp_temp;

	int i;
	object l;

	if (index < 0) {
		vs_push(make_fixnum(index));
		FEwrong_type_argument(sLpositive_fixnum, vs_head);
	}
	switch (type_of(seq)) {
	case t_cons:
		for (i = index, l = seq;  i > 0;  --i)
			if (endp(l))
				goto E;
			else
				l = l->c.c_cdr;
		if (endp(l))
			goto E;
		return(l->c.c_car = val);

	case t_vector:
	case t_bitvector:
		if (index >= seq->v.v_fillp)
			goto E;
		return(aset(seq, index, val));

	case t_string:
		if (index >= seq->st.st_fillp)
			goto E;
		if (type_of(val) != t_character)
			FEwrong_type_argument(sLcharacter, val);
		seq->st.st_self[index] = val->ch.ch_code;
		return(val);

	default:
		if (seq == Cnil) goto E;
		FEwrong_type_argument(sLsequence, seq);
	}

E:
	vs_push(make_fixnum(index));
	/* FIXME error message should indicate value out of range */
	FEwrong_type_argument(sLpositive_fixnum, vs_head);
	return(Cnil);	
}

@(defun subseq (sequence start &optional end &aux x)
	int s, e;
	int i, j;
@
	s = fixnnint(start);
	if (end == Cnil)
		e = -1;
	else
		e = fixnnint(end);
	switch (type_of(sequence)) {
	case t_symbol:
		if (sequence == Cnil) {
			if (s > 0)
				goto ILLEGAL_START_END;
			if (e > 0)
				goto ILLEGAL_START_END;
			@(return Cnil)
		}
		FEwrong_type_argument(sLsequence, sequence);

	case t_cons:
		if (e >= 0)
			if ((e -= s) < 0)
				goto ILLEGAL_START_END;
		while (s-- > 0) {
			if (type_of(sequence) != t_cons)
				goto ILLEGAL_START_END;
			sequence = sequence->c.c_cdr;
		}
		if (e < 0)
			@(return `copy_list(sequence)`)
		for (i = 0;  i < e;  i++) {
			if (type_of(sequence) != t_cons)
				goto ILLEGAL_START_END;
			vs_check_push(sequence->c.c_car);
			sequence = sequence->c.c_cdr;
		}
		vs_push(Cnil);
		while (e-- > 0)
			stack_cons();
		x = vs_pop;
		@(return x)

	case t_vector:
		if (s > sequence->v.v_fillp)
			goto ILLEGAL_START_END;
		if (e < 0)
			e = sequence->v.v_fillp;
		else if (e < s || e > sequence->v.v_fillp)
			goto ILLEGAL_START_END;
		x = alloc_simple_vector(e - s, sequence->v.v_elttype);
		array_allocself(x, FALSE,0);
		switch (sequence->v.v_elttype) {
		case aet_object:
		case aet_fix:
		case aet_sf:
			for (i = s, j = 0;  i < e;  i++, j++)
				x->v.v_self[j] = sequence->v.v_self[i];
			break;

		case aet_lf:
			for (i = s, j = 0;  i < e;  i++, j++)
				x->lfa.lfa_self[j] =
				sequence->lfa.lfa_self[i];
			break;

		case aet_short:
		case aet_ushort:
			for (i = s, j = 0;  i < e;  i++, j++)
				USHORT_GCL(x, j) = USHORT_GCL(sequence, i);
			break;
		case aet_char:
		case aet_uchar:
			for (i = s, j = 0;  i < e;  i++, j++)	
			  x->st.st_self[j] = sequence->st.st_self[i];
			break;
	
		}
		@(return x)


	case t_string:
		if (s > sequence->st.st_fillp)
			goto ILLEGAL_START_END;
		if (e < 0)
			e = sequence->st.st_fillp;
		else if (e < s || e > sequence->st.st_fillp)
			goto ILLEGAL_START_END;
	       {BEGIN_NO_INTERRUPT;	
		x = alloc_simple_string(e - s);
		x->st.st_self = alloc_relblock(e - s);
		END_NO_INTERRUPT;}
		for (i = s, j = 0;  i < e;  i++, j++)
			x->st.st_self[j] = sequence->st.st_self[i];
		@(return x)

	case t_bitvector:
		if (s > sequence->bv.bv_fillp)
			goto ILLEGAL_START_END;
		if (e < 0)
			e = sequence->bv.bv_fillp;
		else if (e < s || e > sequence->bv.bv_fillp)
			goto ILLEGAL_START_END;
		{BEGIN_NO_INTERRUPT;
		x = alloc_simple_bitvector(e - s);
		x->bv.bv_self = alloc_relblock((e-s+7)/8);
		s += sequence->bv.bv_offset;
		e += sequence->bv.bv_offset;
		for (i = s, j = 0;  i < e;  i++, j++)
			if (sequence->bv.bv_self[i/8]&(0200>>i%8))
				x->bv.bv_self[j/8]
				|= 0200>>j%8;
			else
				x->bv.bv_self[j/8]
				&= ~(0200>>j%8);
		END_NO_INTERRUPT;}
		@(return x)

	default:
		FEwrong_type_argument(sLsequence, vs_base[0]);
	}

ILLEGAL_START_END:
	FEerror("~S and ~S are illegal as :START and :END~%\
for the sequence ~S.", 3, start, end, sequence);
@)

LFD(Lcopy_seq)()
{
	check_arg(1);
	vs_push(small_fixnum(0));
	Lsubseq();
}

int
length(x)
object x;
{
	int i;

	switch (type_of(x)) {
	case t_symbol:
		if (x == Cnil)
			return(0);
		FEwrong_type_argument(sLsequence, x);
		return(0);
	case t_cons:

#define cendp(obj) ((type_of(obj)!=t_cons))
		for (i = 0;  !cendp(x);  i++, x = x->c.c_cdr)
			;
		if (x==Cnil) return(i);
		FEwrong_type_argument(sLlist,x);
		return(0);


	case t_vector:
	case t_string:
	case t_bitvector:
		return(x->v.v_fillp);

	default:
		FEwrong_type_argument(sLsequence, x);
		return(0);
	}
}

LFD(Llength)()
{
	check_arg(1);
	vs_base[0] = make_fixnum(length(vs_base[0]));
}

LFD(Lreverse)()
{
	check_arg(1);
	vs_base[0] = reverse(vs_base[0]);
}

object
reverse(seq)
object seq;
{
	object endp_temp;

	object x, y, *v;
	int i, j, k;

	switch (type_of(seq)) {
	case t_symbol:
		if (seq == Cnil)
			return(Cnil);
		FEwrong_type_argument(sLsequence, seq);

	case t_cons:
		v = vs_top;
		vs_push(Cnil);
		for (x = seq;  !endp(x);  x = x->c.c_cdr)
			*v = make_cons(x->c.c_car, *v);
		return(vs_pop);

	case t_vector:
		x = seq;
		k = x->v.v_fillp;
		y = alloc_simple_vector(k, x->v.v_elttype);
		vs_push(y);
		array_allocself(y, FALSE,0);
		switch (x->v.v_elttype) {
		case aet_object:
		case aet_fix:
		case aet_sf:
			for (j = k - 1, i = 0;  j >=0;  --j, i++)
				y->v.v_self[j] = x->v.v_self[i];
			break;

		case aet_lf:
			for (j = k - 1, i = 0;  j >=0;  --j, i++)
				y->lfa.lfa_self[j] = x->lfa.lfa_self[i];
			break;

		case aet_short:
		case aet_ushort:
			for (j = k - 1, i = 0;  j >=0;  --j, i++)
				USHORT_GCL(y, j) = USHORT_GCL(x, i);
			break;
		case aet_char:
		case aet_uchar:
		    goto TYPE_STRING;
		}
		return(vs_pop);

	case t_string:
		x = seq;
		{BEGIN_NO_INTERRUPT;
		y = alloc_simple_string(x->st.st_fillp);
		TYPE_STRING:
		vs_push(y);
		y->st.st_self
		= alloc_relblock(x->st.st_fillp);
		for (j = x->st.st_fillp - 1, i = 0;  j >=0;  --j, i++)
			y->st.st_self[j] = x->st.st_self[i];
		END_NO_INTERRUPT;}
		return(vs_pop);

	case t_bitvector:
		x = seq;
		{BEGIN_NO_INTERRUPT;	
		y = alloc_simple_bitvector(x->bv.bv_fillp);
		vs_push(y);
		y->bv.bv_self
		= alloc_relblock((x->bv.bv_fillp+7)/8);
		for (j = x->bv.bv_fillp - 1, i = x->bv.bv_offset;
		     j >=0;
		     --j, i++)
			if (x->bv.bv_self[i/8]&(0200>>i%8))
				y->bv.bv_self[j/8] |= 0200>>j%8;
			else
				y->bv.bv_self[j/8] &= ~(0200>>j%8);
		END_NO_INTERRUPT;}	
		return(vs_pop);

	default:
		FEwrong_type_argument(sLsequence, seq);
		return(Cnil);
	}
}

LFD(Lnreverse)()
{
	check_arg(1);
	vs_base[0] = nreverse(vs_base[0]);
}

object
nreverse(seq)
object seq;
{
	object endp_temp;

	object x, y, z;
	int i, j, k;

	switch (type_of(seq)) {
	case t_symbol:
		if (seq == Cnil)
			return(Cnil);
		FEwrong_type_argument(sLsequence, seq);

	case t_cons:
		for (x = Cnil, y = seq;  !endp(y->c.c_cdr);) {
			z = y;
			y = y->c.c_cdr;
			z->c.c_cdr = x;
			x = z;
		}
		y->c.c_cdr = x;
		return(y);

	case t_vector:
		x = seq;
		k = x->v.v_fillp;
		switch (x->v.v_elttype) {
		case aet_object:
		case aet_fix:
		case aet_sf:
			for (i = 0, j = k - 1;  i < j;  i++, --j) {
				y = x->v.v_self[i];
				x->v.v_self[i] = x->v.v_self[j];
				x->v.v_self[j] = y;
			}
			return(seq);

		case aet_lf:
			for (i = 0, j = k - 1;  i < j;  i++, --j) {
				longfloat y;
				y = x->lfa.lfa_self[i];
				x->lfa.lfa_self[i] = x->lfa.lfa_self[j];
				x->lfa.lfa_self[j] = y;
			}
			return(seq);

		case aet_short:
		case aet_ushort:
			for (i = 0, j = k - 1;  i < j;  i++, --j) {
				unsigned short y;
				y = USHORT_GCL(x, i);
				USHORT_GCL(x, i) = USHORT_GCL(x, j);
				USHORT_GCL(x, y) = y;
			}
			return(seq);
		case aet_char:
		case aet_uchar:
		    goto TYPE_STRING;
		}

	case t_string:
		x = seq;
	TYPE_STRING:	
		for (i = 0, j = x->st.st_fillp - 1;  i < j;  i++, --j) {
			k = x->st.st_self[i];
			x->st.st_self[i] = x->st.st_self[j];
			x->st.st_self[j] = k;
		}
		return(seq);

	case t_bitvector:
		x = seq;
		for (i = x->bv.bv_offset,
		     j = x->bv.bv_fillp + x->bv.bv_offset - 1;
		     i < j;
		     i++, --j) {
			k = x->bv.bv_self[i/8]&(0200>>i%8);
			if (x->bv.bv_self[j/8]&(0200>>j%8))
				x->bv.bv_self[i/8]
				|= 0200>>i%8;
			else
				x->bv.bv_self[i/8]
				&= ~(0200>>i%8);
			if (k)
				x->bv.bv_self[j/8]
				|= 0200>>j%8;
			else
				x->bv.bv_self[j/8]
				&= ~(0200>>j%8);
		}
		return(seq);

	default:
		FEwrong_type_argument(sLsequence, seq);
		return(Cnil);
	}
}


void
gcl_init_sequence_function()
{
	make_function("ELT", Lelt);
	make_si_function("ELT-SET", siLelt_set);
	make_function("SUBSEQ", Lsubseq);
	make_function("COPY-SEQ", Lcopy_seq);
	make_function("LENGTH", Llength);
	make_function("REVERSE", Lreverse);
	make_function("NREVERSE", Lnreverse);
}
