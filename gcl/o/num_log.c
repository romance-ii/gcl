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
	Logical operations on number
*/
#define NEED_MP_H
#include "include.h"
#include "num_include.h"

/*
	x : fixnum or bignum (may be not normalized)
	y : integer
   returns
	fixnum or bignum ( not normalized )
*/

object big_log_op();

object
log_op(op)
int (*op)();
{
	object x;
	int	narg, i, j;
	

	narg = vs_top - vs_base;
	if (narg < 2) too_few_arguments();
	i = narg;
	while(--i >= 0)
		if (type_of(vs_base[i]) == t_bignum) goto BIG_OP;
	j = fix(vs_base[0]);
	i = 1;
	while (i < narg) {
		j = (*op)(j, fix(vs_base[i]));
		i++;
	}
	return(make_fixnum(j));

BIG_OP:
	x = (object)copy_to_big(vs_base[0]);
	vs_push(x);
	i = 1;
	{save_avma;
	while (i < narg) {
		x = (object)big_log_op(x, vs_base[i], op);
		i++;
	}
	 restore_avma;}
	x = normalize_big_to_object(x);
	vs_pop;
	return(x);
}
/*
	big_log_op(x, y, op) performs the logical operation op onto
	x and y, and return the result in x destructively.

	
*/

void minimize_lg(x)
GEN x;
{int j,i,lgx = lgef(x);
 GEN u = x+2;
 i = lgx;
 i -= 2;
 while (-- i >= 0)
   { if (*u++) break;
   }
 j = lgx -i -3;
 if (j)
   { GEN v = x+2;
     GEN w = v + j;
     GEN lim = x+lgx;
     while (w<lim)
       {*v++ = *w++;}
     setlgef(x,(i+3));}
 if (i==-1) setsigne(x,0);
}


/* Fix this.   Should be destructive into x0.
   It is for the benefit of log_op;
   Maybe write an mp version, and then do it.
*/   

GEN
complementi(x)
     GEN x;
{int l = lgef(x);
 GEN u = cgeti(l);
 unsigned plong * v ;
 unsigned plong *w ;

 MP_START_LOW(w,(unsigned plong *)x,l);
 MP_START_LOW(v,(unsigned plong *)u,l);
 setlgef(u,l);
 setsigne(u,1);
 l -= MP_CODE_WORDS;
 {unsigned int next=0;
  while (--l >=0)
    { unsigned int last = MP_NEXT_UP(w);
      MP_NEXT_UP(v) = next - last ;
       if (last > next)
	 { next -= 1 ;}}
  return u;}}
 
object big_log_op(x0,y0,op)
object x0,y0;
 plong (*op)();     
{ int leadx,leady;
  int result_length;
  int lgx,lgy;
  GEN x,y,u,up,result;
  save_avma;
  x = MP(x0);
  y = (type_of(y0)==t_bignum ? MP(y0) : stoi(fix(y0)));
  leadx = signe(x);
  lgx=lgef(x);
  if (leadx < 0)
    x = complementi(x);
  else leadx = 0;

  lgy = lgef(y);
  leady = signe(y);
  if (leady < 0)
    y=complementi(y);
  else leady = 0;
  result_length = (lgx > lgy ? lgx : lgy);
  u = result = cgeti(result_length);
  setlgef(result,result_length);
  MP_START_LOW(u,u,result_length);
  result_length -= MP_CODE_WORDS;

  x += lgx;
  y += lgy;
  lgx -= MP_CODE_WORDS;
  lgy -= MP_CODE_WORDS;

  while (--lgx >= 0)
    { if (--lgy >= 0)
	{ MP_NEXT_UP(u) = (*op)(MP_NEXT_UP(x),MP_NEXT_UP(y));}
    else MP_NEXT_UP(u) = (*op)(MP_NEXT_UP(x),leady);
      }
  /*  lgx is now 0 */
  while (--lgy >= 0)
    {  MP_NEXT_UP(u) = (*op)(leadx,MP_NEXT_UP(y));}
  {int leadresult = (*op)(leadx,leady);
   if (leadresult < 0)
     { result = complementi(result);
       setsigne(result,-1);}
   else setsigne(result,1);}
  minimize_lg(result);
  restore_avma;
  gcopy_to_big(result,x0);
  return x0;
}
   

int
ior_op(i, j)
int	i, j;
{
	return(i | j);
}

int
xor_op(i, j)
int	i, j;
{
	return(i ^ j);
}

int
and_op(i, j)
int	i, j;
{
	return(i & j);
}

int
eqv_op(i, j)
int	i, j;
{
	return(~(i ^ j));
}

int
nand_op(i, j)
int	i, j;
{
	return(~(i & j));
}

int
nor_op(i, j)
int	i, j;
{
	return(~(i | j));
}

int
andc1_op(i, j)
int	i, j;
{
	return((~i) & j);
}

int
andc2_op(i, j)
int	i, j;
{
	return(i & (~j));
}

int
orc1_op(i, j)
int	i, j;
{
	return((~i) | j);
}

int
orc2_op(i, j)
int	i, j;
{
	return(i | (~j));
}

b_clr_op(i, j)
int	i, j;
{
	return(0);
}

b_set_op(i, j)
int	i, j;
{
	return(-1);
}

b_1_op(i, j)
int	i, j;
{
	return(i);
}

b_2_op(i, j)
int	i, j;
{
	return(j);
}

b_c1_op(i, j)
int	i, j;
{
	return(~i);
}

b_c2_op(i, j)
int	i, j;
{
	return(~j);
}

int
big_bitp(x, p)
object	x;
int	p;
{ GEN u = MP(x);
  int ans ;
  int i = p /32;
  if (signe(u) < 0)
    {  save_avma;
       u = complementi(u);
       restore_avma;
   }
  if (i < lgef(u) -MP_CODE_WORDS)
    { ans = ((MP_ITH_WORD(u,i,lgef(u))) & (1 << p%32));}
  else if (big_sign(x) < 0) ans = 1;
  else ans = 0;
  return ans;
}

int
fix_bitp(x, p)
object	x;
int	p;
{
	if (p > 30)		/* fix = sign + bit0-30 */
		if (fix(x) < 0)
			return(1);
		else
			return(0);
	return((fix(x) >> p) & 1);
}	

int
count_int_bits(x)
int	x;
{
	int	i, count;

	count = 0;
	for (i=0; i <= 31; i++) count += ((x >> i) & 1);
	return(count);
}

int
count_bits(x)
object	x;
{
	int	i, count, sign;

	if (type_of(x) == t_fixnum) {
		i = fix(x);
		if (i < 0) i = ~i;
		count = count_int_bits(i);
	} else if (type_of(x) == t_bignum)
	  { save_avma;
	    GEN u = MP(x);
	    if (signe(u) < 0)
	      { u = subsi(-1,u);}
	    count = 0;
	    {int leng = lgef(u);
	     MP_START_LOW(u,u,leng);
	     leng -= MP_CODE_WORDS;
	     while (--leng >= 0)
	       { count += count_int_bits(MP_NEXT_UP(u));}}
	    restore_avma;
	  }
	  else
		FEwrong_type_argument(sLinteger, x);
	return(count);
}

/*
	double_shift(h, l, w, hp, lp) shifts the int h & l ( 31 bits)
	w bits to left ( w > 0) or to right ( w < 0).
	result is returned in *hp and *lp.
*/

object
shift_integer(x, w)
object	x;
int	w;
{ GEN u ;
  
  if (type_of(x) == t_fixnum)
    { if (w <= 0)
	{ w = -w;
	  if (w >= WSIZ) return small_fixnum(0);
	  else
	return make_fixnum (fix(x) >> (w));}
      MPOP(return, shifti,stoi(fix(x)),w);
    }
  else
    if (type_of(x) == t_bignum)
      MPOP(return, shifti,MP(x),w);
  else
    	FEwrong_type_argument(sLinteger, x);
    
}
  
int
int_bit_length(i)
int	i;
{
	int	count, j;

	count = 0;
	for (j = 0; j <= 31 ; j++)
		if (((i >> j) & 1) == 1) count = j + 1;
	return(count);
}



Llogior()
{
	object  x;
	int	narg, i;
	int	ior_op();

	narg = vs_top - vs_base;
	for (i = 0; i < narg; i++)
		check_type_integer(&vs_base[i]);
	if (narg == 0) {
		vs_top = vs_base;
		vs_push(small_fixnum(0));
		return;
	}
	if (narg == 1)
		return;
	x = log_op(ior_op);
	vs_top = vs_base;
	vs_push(x);
}

Llogxor()
{
	object  x;
	int	narg, i;
	int	xor_op();

	narg = vs_top - vs_base;
	for (i = 0; i < narg; i++)
		check_type_integer(&vs_base[i]);
	if (narg == 0) {
		vs_top = vs_base;
		vs_push(small_fixnum(0));
		return;
	}
	if (narg == 1) return;
	x = log_op(xor_op);
	vs_top = vs_base;
	vs_push(x);
}

Llogand()
{
	object  x;
	int	narg, i;
	int	and_op();

	narg = vs_top - vs_base;
	for (i = 0; i < narg; i++)
		check_type_integer(&vs_base[i]);
	if (narg == 0) {
		vs_top = vs_base;
		vs_push(small_fixnum(-1));
		return;
	}
	if (narg == 1) return;
	x = log_op(and_op);
	vs_top = vs_base;
	vs_push(x);
}

Llogeqv()
{
	object  x;
	int	narg, i;
	int	eqv_op();

	narg = vs_top - vs_base;
	for (i = 0; i < narg; i++)
		check_type_integer(&vs_base[i]);
	if (narg == 0) {
		vs_top = vs_base;
		vs_push(small_fixnum(-1));
		return;
	}
	if (narg == 1) return;
	x = log_op(eqv_op);
	vs_top = vs_base;
	vs_push(x);
}

Lboole()
{
	object  x;
	object	o, r;
	int	(*op)();

	check_arg(3);
	check_type_integer(&vs_base[0]);
	check_type_integer(&vs_base[1]);
	check_type_integer(&vs_base[2]);
	o = vs_base[0];
	switch(fixint(o)) {
		case BOOLCLR:	op = b_clr_op;	break;
		case BOOLSET:	op = b_set_op;	break;
		case BOOL1:	op = b_1_op;	break;
		case BOOL2:	op = b_2_op;	break;
		case BOOLC1:	op = b_c1_op;	break;
		case BOOLC2:	op = b_c2_op;	break;
		case BOOLAND:	op = and_op;	break;
		case BOOLIOR:	op = ior_op;	break;
		case BOOLXOR:	op = xor_op;	break;
		case BOOLEQV:	op = eqv_op;	break;
		case BOOLNAND:	op = nand_op;	break;
		case BOOLNOR:	op = nor_op;	break;
		case BOOLANDC1:	op = andc1_op;	break;
		case BOOLANDC2:	op = andc2_op;	break;
		case BOOLORC1:	op = orc1_op;	break;
		case BOOLORC2:	op = orc2_op;	break;
		default:
			FEerror("~S is an invalid logical operator.",
				1, o);
	}
	vs_base++;
	x = log_op(op);
	vs_base--;
	vs_top = vs_base;
	vs_push(x);
}

Llogbitp()
{
	object	x, p;
	int	i;

	check_arg(2);
	check_type_integer(&vs_base[0]);
	check_type_integer(&vs_base[1]);
	p = vs_base[0];
	x = vs_base[1];
	if (type_of(p) == t_fixnum)
		if (type_of(x) == t_fixnum)
			i = fix_bitp(x, fix(p));
		else
			i = big_bitp(x, fix(p));
	else if (big_sign(p) < 0)
			i = 0;
		/*
		   bit position represented by bignum is out of
		   our address space. So, result is returned
		   according to sign of integer.
		*/

	else if (type_of(x) == t_fixnum)
		if (fix(x) < 0)
			i = 1;
		else
			i = 0;
	else if (big_sign(x) < 0)
			i = 1;
		else
			i = 0;

	vs_top = vs_base;
	if (i)
		vs_push(Ct);
	else
		vs_push(Cnil);
}

Lash()
{
	object	r, x, y;
	int	w, sign_x;

	check_arg(2);
        check_type_integer(&vs_base[0]);
	check_type_integer(&vs_base[1]);
	x = vs_base[0];
	y = vs_base[1];
	if (type_of(y) == t_fixnum) {
		w = fix(y);
		r = shift_integer(x, w);
	} else if (type_of(y) == t_bignum)
		goto LARGE_SHIFT;
	else
		;
	goto BYE;

	/*
	bit position represented by bignum is probably
	out of our address space. So, result is returned
	according to sign of integer.
	*/
LARGE_SHIFT:
	if (type_of(x) == t_fixnum)
		if (fix(x) > 0)
			sign_x = 1;
		else if (fix(x) == 0)
			sign_x = 0;
		else
			sign_x = -1;
	else
		sign_x = big_sign(x);
	if (big_sign(y) < 0)
		if (sign_x < 0)
			r = small_fixnum(-1);
		else
			r = small_fixnum(0);
	else if (sign_x == 0)
		r = small_fixnum(0);
	else
		FEerror("Insufficient memory.", 0);

BYE:
	vs_top = vs_base;
	vs_push(r);
}

Llogcount()
{
	object	x;
	int	i;

	check_arg(1);
	check_type_integer(&vs_base[0]);
	x = vs_base[0];
	i = count_bits(x);
	vs_top = vs_base;
	vs_push(make_fixnum(i));
}

Linteger_length()
{
	object	x;
	int	count, cell, i;

	check_arg(1);
	x = vs_base[0];
	if (type_of(x) == t_fixnum) {
		i = fix(x);
		if (i < 0) i = ~i;
		count = int_bit_length(i);
	} else if (type_of(x) == t_bignum) 
	  { GEN w,u = MP(x);
	    int l = lg(u);
	    our_ulong high;
	    w = u;
	    MP_START_HIGH(u,u,l);
	    high = MP_NEXT_DOWN(u);
	    count = int_bit_length(high) ;
	    
	    l -= MP_CODE_WORDS;
	    
	    if (signe(w) < 0 &&
		high == (1 << (count -1)))
	      /* in the case of -(1<< n)
		 it is one less */
	      { int ll = l;
		int nzero = 0;
		while (--ll > 0)
		  { if (MP_NEXT_DOWN(u))
		      {nzero= 1; break;}}
		if (nzero == 0) --count ;}
		
	    count +=               32* (l - 1);
	  }
	else
	      	FEwrong_type_argument(sLinteger, x);
	vs_top = vs_base;
	vs_push(make_fixnum(count));
}

#define W_SIZE (8*sizeof(int))
object
bitand(a,b,c)
     object a,b,c;
{ int d= a->bv.bv_fillp;
  int *ap,*bp,*cp;
  d=(d+W_SIZE-1)/W_SIZE;
  ap= (int *)(a->bv.bv_self);
  bp= (int *)(b->bv.bv_self);
  cp= (int *)(c->bv.bv_self);
  while (--d >= 0)
    { *cp++ = *bp++ & *ap++;
    }
  return c;
}

object
bitior(a,b,c)
     object a,b,c;
{ int *ap,*cp,*bp, d= a->bv.bv_fillp;
  d=(d+W_SIZE-1)/W_SIZE;
   ap= (int *)((a->bv.bv_self));
   bp= (int *)(b->bv.bv_self);
   cp= (int *)(c->bv.bv_self);
  while (--d >= 0)
    { *cp++ = *bp++ | *ap++;
    }
  return c;
}

/* Note in order to be equal we assume that the part above the
   fill pointer is 0 up to the next word */

bvequal(a,b)
     object a,b;
{ int *ap,*bp, d= a->bv.bv_fillp;
  d=(d+W_SIZE-1)/W_SIZE;
 ap= (int *)(a->bv.bv_self);
 bp= (int *)(b->bv.bv_self);
  while (--d >= 0)
    { if (*ap++ != *bp++) return 1;
    }
  return 0;
}

  


init_num_log()
{
	int siLbit_array_op();

	make_constant("BOOLE-CLR", make_fixnum(BOOLCLR));
	make_constant("BOOLE-SET", make_fixnum(BOOLSET));
	make_constant("BOOLE-1", make_fixnum(BOOL1));
	make_constant("BOOLE-2", make_fixnum(BOOL2));
	make_constant("BOOLE-C1", make_fixnum(BOOLC1));
	make_constant("BOOLE-C2", make_fixnum(BOOLC2));
	make_constant("BOOLE-AND", make_fixnum(BOOLAND));
	make_constant("BOOLE-IOR", make_fixnum(BOOLIOR));
	make_constant("BOOLE-XOR", make_fixnum(BOOLXOR));
	make_constant("BOOLE-EQV", make_fixnum(BOOLEQV));
	make_constant("BOOLE-NAND", make_fixnum(BOOLNAND));
	make_constant("BOOLE-NOR", make_fixnum(BOOLNOR));
	make_constant("BOOLE-ANDC1", make_fixnum(BOOLANDC1));
	make_constant("BOOLE-ANDC2", make_fixnum(BOOLANDC2));
	make_constant("BOOLE-ORC1", make_fixnum(BOOLORC1));
	make_constant("BOOLE-ORC2", make_fixnum(BOOLORC2));

	make_function("LOGIOR", Llogior);
	make_function("LOGXOR", Llogxor);
	make_function("LOGAND", Llogand);
	make_function("LOGEQV", Llogeqv);
	make_function("BOOLE", Lboole);
	make_function("LOGBITP", Llogbitp);
	make_function("ASH", Lash);
	make_function("LOGCOUNT", Llogcount);
	make_function("INTEGER-LENGTH", Linteger_length);

	sLbit = make_ordinary("BIT");
	make_si_function("BIT-ARRAY-OP", siLbit_array_op);
}


siLbit_array_op()
{
	int i, j, n, d;
	object  o, x, y, r, r0;
	int (*op)();
	bool replace = FALSE;
	int xi, yi, ri;
	char *xp, *yp, *rp;
	int xo, yo, ro;
	object *base = vs_base;

	check_arg(4);
	o = vs_base[0];
	x = vs_base[1];
	y = vs_base[2];
	r = vs_base[3];
	if (type_of(x) == t_bitvector) {
		d = x->bv.bv_dim;
		xp = x->bv.bv_self;
		xo = BV_OFFSET(x);
		if (type_of(y) != t_bitvector)
			goto ERROR;
		if (d != y->bv.bv_dim)
			goto ERROR;
		yp = y->bv.bv_self;
		yo = BV_OFFSET(y);
		if (r == Ct)
			r = x;
		if (r != Cnil) {
			if (type_of(r) != t_bitvector)
				goto ERROR;
			if (r->bv.bv_dim != d)
				goto ERROR;
			i = (r->bv.bv_self - xp)*8 + (BV_OFFSET(r) - xo);
			if (i > 0 && i < d || i < 0 && -i < d) {
				r0 = r;
				r = Cnil;
				replace = TRUE;
				goto L1;
			}
			i = (r->bv.bv_self - yp)*8 + (BV_OFFSET(r) - yo);
			if (i > 0 && i < d || i < 0 && -i < d) {
				r0 = r;
				r = Cnil;
				replace = TRUE;
			}
		}
	L1:
		if (r == Cnil) {
			vs_base = vs_top;
			vs_push(sLbit);
			vs_push(make_fixnum(d));
			vs_push(Cnil);
			vs_push(Cnil);
			vs_push(Cnil);
			vs_push(Cnil);
			vs_push(Cnil);
			siLmake_vector();
			r = vs_base[0];
		}
	} else {
		if (type_of(x) != t_array)
			goto ERROR;
		if ((enum aelttype)x->a.a_elttype != aet_bit)
			goto ERROR;
		d = x->a.a_dim;
		xp = x->bv.bv_self;
		xo = BV_OFFSET(x);
		if (type_of(y) != t_array)
			goto ERROR;
		if ((enum aelttype)y->a.a_elttype != aet_bit)
			goto ERROR;
		if (x->a.a_rank != y->a.a_rank)
			goto ERROR;
		yp = y->bv.bv_self;
		yo = BV_OFFSET(y);
		for (i = 0;  i < x->a.a_rank;  i++)
			if (x->a.a_dims[i] != y->a.a_dims[i])
				goto ERROR;
		if (r == Ct)
			r = x;
		if (r != Cnil) {
			if (type_of(r) != t_array)
				goto ERROR;
			if ((enum aelttype)r->a.a_elttype != aet_bit)
				goto ERROR;
			if (r->a.a_rank != x->a.a_rank)
				goto ERROR;
			for (i = 0;  i < x->a.a_rank;  i++)
				if (r->a.a_dims[i] != x->a.a_dims[i])
					goto ERROR;
			i = (r->bv.bv_self - xp)*8 + (BV_OFFSET(r) - xo);
			if (i > 0 && i < d || i < 0 && -i < d) {
				r0 = r;
				r = Cnil;
				replace = TRUE;
				goto L2;
			} 
			i = (r->bv.bv_self - yp)*8 + (BV_OFFSET(r) - yo);
			if (i > 0 && i < d || i < 0 && -i < d) {
				r0 = r;
				r = Cnil;
				replace = TRUE;
			}
		}
	L2:
		if (r == Cnil) {
		  object b[F_ARG_LIMIT];
		  for (i = 0;  i < x->a.a_rank;  i++)
		    b[i] = (make_fixnum(x->a.a_dims[i]));
		  r=Iapply_fun_n(fSmake_array1,5,x->a.a_rank,
			       aet_bit,
			       Cnil,
			       small_fixnum(0),
			       Cnil,
			       Cnil,
				 b);
		}
	}
	rp = r->bv.bv_self;
	ro = BV_OFFSET(r);
	switch(fixint(o)) {
		case BOOLCLR:	op = b_clr_op;	break;
		case BOOLSET:	op = b_set_op;	break;
		case BOOL1:	op = b_1_op;	break;
		case BOOL2:	op = b_2_op;	break;
		case BOOLC1:	op = b_c1_op;	break;
		case BOOLC2:	op = b_c2_op;	break;
		case BOOLAND:	op = and_op;	break;
		case BOOLIOR:	op = ior_op;	break;
		case BOOLXOR:	op = xor_op;	break;
		case BOOLEQV:	op = eqv_op;	break;
		case BOOLNAND:	op = nand_op;	break;
		case BOOLNOR:	op = nor_op;	break;
		case BOOLANDC1:	op = andc1_op;	break;
		case BOOLANDC2:	op = andc2_op;	break;
		case BOOLORC1:	op = orc1_op;	break;
		case BOOLORC2:	op = orc2_op;	break;
		default:
			FEerror("~S is an invalid logical operator.", 1, o);
	}

#define	set_high(place, nbits, value) \
	((place)=((place)&~(-0400>>(nbits))|(value)&(-0400>>(nbits))))

#define	set_low(place, nbits, value) \
	((place)=((place)&(-0400>>(8-(nbits)))|(value)&~(-0400>>(8-(nbits)))))

#define	extract_byte(integer, pointer, index, offset) \
	(integer) = (pointer)[(index)+1] & 0377; \
	(integer) = ((pointer)[index]<<(offset))|((integer)>>(8-(offset)))

#define	store_byte(pointer, index, offset, value) \
	set_low((pointer)[index], 8-(offset), (value)>>(offset)); \
	set_high((pointer)[(index)+1], offset, (value)<<(8-(offset)))

	if (xo == 0 && yo == 0 && ro == 0) {
		for (n = d/8, i = 0;  i < n;  i++)
			rp[i] = (*op)(xp[i], yp[i]);
		if ((j = d%8) > 0)
			set_high(rp[n], j, (*op)(xp[n], yp[n]));
		if (!replace) {
			vs_top = vs_base = base;
			vs_push(r);
			return;
		}
	} else {
		for (n = d/8, i = 0;  i <= n;  i++) {
			extract_byte(xi, xp, i, xo);
			extract_byte(yi, yp, i, yo);
			if (i == n) {
				if ((j = d%8) == 0)
					break;
				extract_byte(ri, rp, n, ro);
				set_high(ri, j, (*op)(xi, yi));
			} else
				ri = (*op)(xi, yi);
			store_byte(rp, i, ro, ri);
		}
		if (!replace) {
			vs_top = vs_base = base;
			vs_push(r);
			return;
		}
	}
	rp = r0->bv.bv_self;
	ro = BV_OFFSET(r0);
	for (n = d/8, i = 0;  i <= n;  i++) {
		if (i == n) {
			if ((j = d%8) == 0)
				break;
			extract_byte(ri, rp, n, ro);
			set_high(ri, j, r->bv.bv_self[n]);
		} else
			ri = r->bv.bv_self[i];
		store_byte(rp, i, ro, ri);
	}
	vs_top = vs_base = base;
	vs_push(r0);
	return;

ERROR:
	FEerror("Illegal arguments for bit-array operation.", 0);
}
