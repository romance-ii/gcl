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
	list.d

	list manipulating routines
*/

#include "include.h"

static int reverse_comparison;

#define TARG1(a,b) (reverse_comparison ? (b) : (a))
#define TARG2(a,b) (reverse_comparison ? (a) : (b))

object sKinitial_element;

#define	TEST(x)		(*tf)(x)

#define	saveTEST  \
	object old_test_function = test_function;  \
	object old_item_compared = item_compared;  \
	bool (*old_tf)() = tf;  \
	object old_key_function = key_function;  \
	object (*old_kf)() = kf;  \
	VOL bool eflag = FALSE

#define	protectTEST  \
	frs_push(FRS_PROTECT, Cnil);  \
	if (nlj_active) {  \
		eflag = TRUE;  \
		goto L;  \
	}

#define	restoreTEST  \
L:  \
	frs_pop();  \
	test_function = old_test_function;  \
	item_compared = old_item_compared;  \
	tf = old_tf;  \
	key_function = old_key_function;  \
	kf = old_kf;  \
	if (eflag) {  \
		nlj_active = FALSE;  \
		unwind(nlj_fr, nlj_tag);  \
	}

static bool
test_compare(x)
object x;
{
	object b;

	vs_push((*kf)(x));
	b = ifuncall2(test_function, 
		TARG1(item_compared, vs_head),
		TARG2(item_compared, vs_head));
	vs_popp;
	return(b != Cnil);
}

static bool
test_compare_not(x)
object x;
{
	object b;

	vs_push((*kf)(x));
	b = ifuncall2(test_function, 
		TARG1(item_compared, vs_head),
		TARG2(item_compared, vs_head));
	vs_popp;
	return(b == Cnil);
}

static bool
test_eql(x)
object x;
{
	return(eql(item_compared, (*kf)(x)));
}

static object
apply_key_function(x)
object x;
{
	return(ifuncall1(key_function, x));
}

static object
identity(x)
object x;
{
	return(x);
}

static void
setupTEST(item, test, test_not, key)
object item, test, test_not, key;
{
	item_compared = item;
	if (test != Cnil) {
		if (test_not != Cnil)
		    FEerror("Both :TEST and :TEST-NOT are specified.", 0);
		test_function = test;
		tf = test_compare;
	} else if (test_not != Cnil) {
		test_function = test_not;
		tf = test_compare_not;
	} else
		tf = test_eql;
	if (key != Cnil) {
		key_function = key;
		kf = apply_key_function;
	} else
		kf = identity;
}

#define	PREDICATE(f, f_if, f_if_not, n)  \
LFD(f_if)()  \
{  \
	if (vs_top - vs_base < n)  \
		too_few_arguments();  \
	vs_push(sKtest);  \
	vs_push(sLfuncall);  \
	f();  \
}  \
\
LFD(f_if_not)()  \
{  \
	if (vs_top - vs_base < n)  \
		too_few_arguments();  \
	vs_push(sKtest_not);  \
	vs_push(sLfuncall);  \
	f();  \
}

/* static bool
endp1(x)
object x;
{

	if (type_of(x) == t_cons)
		return(FALSE);
	else * if (x == Cnil) *
		return(TRUE);
	vs_push(x);
	FEwrong_type_argument(sLlist, x);
	return(FALSE);
}*/

object
car(x)
object x;
{
	if (x == Cnil)
		return(x);
	if (type_of(x) == t_cons)
		return(x->c.c_car);
	FEwrong_type_argument(sLlist, x);
	return(Cnil);
}

object
cdr(x)
object x;
{
	if (x == Cnil)
		return(x);
	if (type_of(x) == t_cons)
		return(x->c.c_cdr);
	FEwrong_type_argument(sLlist, x);
	return(Cnil);
}

object
kar(x)
object x;
{
	if (type_of(x) == t_cons)
		return(x->c.c_car);
	FEwrong_type_argument(sLcons, x);
	return(Cnil);
}

/* static object
kdr(x)
object x;
{
	if (type_of(x) == t_cons)
		return(x->c.c_cdr);
	FEwrong_type_argument(sLcons, x);
	return(Cnil);
}*/

void
stack_cons(void)
{
	object c;

	c = alloc_object(t_cons);
	c->c.c_cdr = vs_pop;
	c->c.c_car = vs_pop;
	*vs_top++ = c;
}

/*static object on_stack_list_vector(n,ap)
     int n;
     va_list ap;
{object res=(object) alloca_val;
 struct cons *p;
 object x;
 p=(struct cons *) res;
 if (n<=0) return Cnil;
 TOP:
 p->t = (int)t_cons;
 p->m=FALSE;
 p->c_car= va_arg(ap,object);
 if (--n == 0)
   {p->c_cdr = Cnil;
    return res;}
 else
   { x= (object) p;
     x->c.c_cdr= (object) ( ++p);}
 goto TOP;
}*/

object on_stack_list_vector_new(int n,object first,va_list ap)
{object res=(object) alloca_val;
 struct cons *p;
 object x;
 int jj=0;
 p=(struct cons *) res;
 if (n<=0) return Cnil;
 TOP:
 p->t = (int)t_cons;
 p->m=FALSE;
 p->c_car= jj ? va_arg(ap,object) : first;
 jj=1;
 if (--n == 0)
   {p->c_cdr = Cnil;
    return res;}
 else
   { x= (object) p;
     x->c.c_cdr= (object) ( ++p);}
 goto TOP;
}

/* static object list_vector(n,ap)
     int n;
     va_list ap;
{object ans,*p;
 
 if (n == 0) return Cnil;
 ans = make_cons(va_arg(ap,object),Cnil);
 p = & (ans->c.c_cdr); 
 while (--n > 0)
   { *p = make_cons(va_arg(ap,object),Cnil);
     p = & ((*p)->c.c_cdr);
   }
 return ans;
}*/

object list_vector_new(int n,object first,va_list ap)
{object ans,*p;
 
 if (n == 0) return Cnil;
 ans = make_cons(first,Cnil);
 p = & (ans->c.c_cdr); 
 while (--n > 0)
   { *p = make_cons(va_arg(ap,object),Cnil);
     p = & ((*p)->c.c_cdr);
   }
 return ans;}

   
/* clean this up */
/* static object on_stack_list(int n, ...)
{va_list ap;
 object res;
 va_start(ap,n);
 res=on_stack_list_vector(n,ap);
 va_end(ap);
 return res;
}*/

   

object list(int n,...)
{ va_list ap;
  struct typemanager *tm=(&tm_table[(int)t_cons]);
  va_start(ap,n);
  CHECK_INTERRUPT;
  if (tm->tm_nfree < n )
     {
	object *p = vs_top;

	vs_push(Cnil);
	while(--n>=0)
	  { *p=make_cons(va_arg(ap,object),Cnil);
	    p= &((*p)->c.c_cdr);
	  }
	return(vs_pop);
     }
  else
    {BEGIN_NO_INTERRUPT;
    {int i=0;
    object tail=tm->tm_free;
    object lis;
    tm->tm_nfree -= n;
    tm->tm_nused += n;
    n=n-1;
    lis=tail;
    while (1)
      {if (i < n)
       tail->c.c_cdr=OBJ_LINK(tail);
       else {tm->tm_free=OBJ_LINK(tail);
	     tail->d.t = (int)t_cons;
	     tail->d.m = FALSE;
	     tail->c.c_car=va_arg(ap,object); 
	     tail->c.c_cdr=Cnil;
	     goto END_INTER ;
	   }
       /* these could be one instruction*/
       tail->d.t = (int)t_cons;
       tail->d.m=FALSE;
       tail->c.c_car=va_arg(ap,object);
       tail=tail->c.c_cdr;
       i++;}
   END_INTER: END_NO_INTERRUPT;
  va_end(ap);
  return lis;}}	

}

object listA(int n, ...)
{       va_list ap;
	object *p = vs_top;
	va_start(ap,n);
	vs_push(Cnil);
	while(--n>0)
	  { *p=make_cons(va_arg(ap,object),Cnil);
	    p= &((*p)->c.c_cdr);
	  }
	*p=va_arg(ap,object);
	va_end(ap);
	return(vs_pop);
}

static bool
tree_equal(x, y)
object x, y;
{
	cs_check(x);

BEGIN:
	if (type_of(x) == t_cons)
		if (type_of(y) == t_cons)
			if (tree_equal(x->c.c_car, y->c.c_car)) {
				x = x->c.c_cdr;
				y = y->c.c_cdr;
				goto BEGIN;
			} else
				return(FALSE);
		else
			return(FALSE);
	else {
		item_compared = x;
		if (TEST(y))
			return(TRUE);
		else
			return(FALSE);
	}
}

object
append(x, y)
object x, y;
{
	object z;

	if (endp(x))
		return(y);
	z = make_cons(Cnil, Cnil);
	vs_push(z);
	for (;;) {
		z->c.c_car = x->c.c_car;
		x = x->c.c_cdr;
		if (endp(x))
			break;
		z->c.c_cdr = make_cons(Cnil, Cnil);
		z = z->c.c_cdr;
	}
	z->c.c_cdr = y;
	return(vs_pop);
}

/*
	Copy_list(x) copies list x.
*/
object
copy_list(x)
object x;
{
	object y;

	if (type_of(x) != t_cons)
		return(x);
	y = make_cons(x->c.c_car, Cnil);
	vs_push(y);
	for (x = x->c.c_cdr; type_of(x) == t_cons; x = x->c.c_cdr) {
		y->c.c_cdr = make_cons(x->c.c_car, Cnil);
		y = y->c.c_cdr;
	}
	y->c.c_cdr = x;
	return(vs_pop);
}

/*
	Copy_alist(x) copies alist x.
*/
static object
copy_alist(x)
object x;
{
	object y;

	if (endp(x))
		return(Cnil);
	y = make_cons(Cnil, Cnil);
	vs_push(y);
	for (;;) {
		y->c.c_car = make_cons(car(x->c.c_car), cdr(x->c.c_car));
		x = x->c.c_cdr;
		if (endp(x))
			break;
		y->c.c_cdr = make_cons(Cnil, Cnil);
		y = y->c.c_cdr;
	}
	return(vs_pop);
}

/*
	Copy_tree(x) copies tree x
	and pushes the result onto vs.
*/
static void
copy_tree(x)
object x;
{
	cs_check(x);

	if (type_of(x) == t_cons) {
		copy_tree(x->c.c_car);
		copy_tree(x->c.c_cdr);
		stack_cons();
	} else
		vs_check_push(x);
}

/*
	Subst(new, tree) pushes
	the result of substituting new in tree
	onto vs.
*/
static void
subst(new, tree)
object new, tree;
{
	cs_check(new);

	if (TEST(tree))
		vs_check_push(new);
	else if (type_of(tree) == t_cons) {
		subst(new, tree->c.c_car);
		subst(new, tree->c.c_cdr);
		stack_cons();
	} else
		vs_check_push(tree);
}

/*
	Nsubst(new, treep) stores
	the result of nsubstituting new in *treep
	to *treep.
*/
static void
nsubst(new, treep)
object new, *treep;
{
	cs_check(new);

	if (TEST(*treep))
		*treep = new;
	else if (type_of(*treep) == t_cons) {
		nsubst(new, &(*treep)->c.c_car);
		nsubst(new, &(*treep)->c.c_cdr);
	}
}

/*
	Sublis(alist, tree) pushes
	result of substituting tree by alist
	onto vs.
*/
static void
sublis(alist, tree)
object alist, tree;
{
	object x;
	cs_check(alist);


	for (x = alist;  !endp(x);  x = x->c.c_cdr) {
		item_compared = car(x->c.c_car);
		if (TEST(tree)) {
			vs_check_push(cdr(x->c.c_car));
			return;
		}
	}
	if (type_of(tree) == t_cons) {
		sublis(alist, tree->c.c_car);
		sublis(alist, tree->c.c_cdr);
		stack_cons();
	} else
		vs_check_push(tree);
}

/*
	Nsublis(alist, treep) stores
	the result of substiting *treep by alist
	to *treep.
*/
static void
nsublis(alist, treep)
object alist, *treep;
{
	object x;

	cs_check(alist);


	for (x = alist;  !endp(x);  x = x->c.c_cdr) {
		item_compared = car(x->c.c_car);
		if (TEST(*treep)) {
			*treep = x->c.c_car->c.c_cdr;
			return;
		}
	}
	if (type_of(*treep) == t_cons) {
		nsublis(alist, &(*treep)->c.c_car);
		nsublis(alist, &(*treep)->c.c_cdr);
	}
}

LFD(Lcar)()
{
	check_arg(1);

	if (type_of(vs_base[0]) == t_cons || vs_base[0] == Cnil)
		vs_base[0] = vs_base[0]->c.c_car;
	else
		FEwrong_type_argument(sLlist, vs_base[0]);
}

LFD(Lcdr)()
{
	check_arg(1);

	if (type_of(vs_base[0]) == t_cons || vs_base[0] == Cnil)
		vs_base[0] = vs_base[0]->c.c_cdr;
	else
		FEwrong_type_argument(sLlist, vs_base[0]);
}
	
object caar(x) object x;    {  return(car(car(x)));  }
object cadr(x) object x;    {  return(car(cdr(x)));  }
object cdar(x) object x;    {  return(cdr(car(x)));  }
object cddr(x) object x;    {  return(cdr(cdr(x)));  }
object caaar(x) object x;   {  return(car(car(car(x))));  }
object caadr(x) object x;   {  return(car(car(cdr(x))));  }
object cadar(x) object x;   {  return(car(cdr(car(x))));  }
object caddr(x) object x;   {  return(car(cdr(cdr(x))));  }
object cdaar(x) object x;   {  return(cdr(car(car(x))));  }
object cdadr(x) object x;   {  return(cdr(car(cdr(x))));  }
object cddar(x) object x;   {  return(cdr(cdr(car(x))));  }
object cdddr(x) object x;   {  return(cdr(cdr(cdr(x))));  }
object caaaar(x) object x;  {  return(car(car(car(car(x)))));  }
object caaadr(x) object x;  {  return(car(car(car(cdr(x)))));  }
object caadar(x) object x;  {  return(car(car(cdr(car(x)))));  }
object caaddr(x) object x;  {  return(car(car(cdr(cdr(x)))));  }
object cadaar(x) object x;  {  return(car(cdr(car(car(x)))));  }
object cadadr(x) object x;  {  return(car(cdr(car(cdr(x)))));  }
object caddar(x) object x;  {  return(car(cdr(cdr(car(x)))));  }
object cadddr(x) object x;  {  return(car(cdr(cdr(cdr(x)))));  }
object cdaaar(x) object x;  {  return(cdr(car(car(car(x)))));  }
object cdaadr(x) object x;  {  return(cdr(car(car(cdr(x)))));  }
object cdadar(x) object x;  {  return(cdr(car(cdr(car(x)))));  }
object cdaddr(x) object x;  {  return(cdr(car(cdr(cdr(x)))));  }
object cddaar(x) object x;  {  return(cdr(cdr(car(car(x)))));  }
object cddadr(x) object x;  {  return(cdr(cdr(car(cdr(x)))));  }
object cdddar(x) object x;  {  return(cdr(cdr(cdr(car(x)))));  }
object cddddr(x) object x;  {  return(cdr(cdr(cdr(cdr(x)))));  }

LFD(Lcaar)(){  check_arg(1);  vs_base[0] = car(car(vs_base[0]));  }
LFD(Lcadr)(){  check_arg(1);  vs_base[0] = car(cdr(vs_base[0]));  }
LFD(Lcdar)(){  check_arg(1);  vs_base[0] = cdr(car(vs_base[0]));  }
LFD(Lcddr)(){  check_arg(1);  vs_base[0] = cdr(cdr(vs_base[0]));  }
LFD(Lcaaar)(){  check_arg(1);  vs_base[0] = car(car(car(vs_base[0])));  }
LFD(Lcaadr)(){  check_arg(1);  vs_base[0] = car(car(cdr(vs_base[0])));  }
LFD(Lcadar)(){  check_arg(1);  vs_base[0] = car(cdr(car(vs_base[0])));  }
LFD(Lcaddr)(){  check_arg(1);  vs_base[0] = car(cdr(cdr(vs_base[0])));  }
LFD(Lcdaar)(){  check_arg(1);  vs_base[0] = cdr(car(car(vs_base[0])));  }
LFD(Lcdadr)(){  check_arg(1);  vs_base[0] = cdr(car(cdr(vs_base[0])));  }
LFD(Lcddar)(){  check_arg(1);  vs_base[0] = cdr(cdr(car(vs_base[0])));  }
LFD(Lcdddr)(){  check_arg(1);  vs_base[0] = cdr(cdr(cdr(vs_base[0])));  }
LFD(Lcaaaar)(){check_arg(1); vs_base[0] = car(car(car(car(vs_base[0]))));}
LFD(Lcaaadr)(){check_arg(1); vs_base[0] = car(car(car(cdr(vs_base[0]))));}
LFD(Lcaadar)(){check_arg(1); vs_base[0] = car(car(cdr(car(vs_base[0]))));}
LFD(Lcaaddr)(){check_arg(1); vs_base[0] = car(car(cdr(cdr(vs_base[0]))));}
LFD(Lcadaar)(){check_arg(1); vs_base[0] = car(cdr(car(car(vs_base[0]))));}
LFD(Lcadadr)(){check_arg(1); vs_base[0] = car(cdr(car(cdr(vs_base[0]))));}
LFD(Lcaddar)(){check_arg(1); vs_base[0] = car(cdr(cdr(car(vs_base[0]))));}
LFD(Lcadddr)(){check_arg(1); vs_base[0] = car(cdr(cdr(cdr(vs_base[0]))));}
LFD(Lcdaaar)(){check_arg(1); vs_base[0] = cdr(car(car(car(vs_base[0]))));}
LFD(Lcdaadr)(){check_arg(1); vs_base[0] = cdr(car(car(cdr(vs_base[0]))));}
LFD(Lcdadar)(){check_arg(1); vs_base[0] = cdr(car(cdr(car(vs_base[0]))));}
LFD(Lcdaddr)(){check_arg(1); vs_base[0] = cdr(car(cdr(cdr(vs_base[0]))));}
LFD(Lcddaar)(){check_arg(1); vs_base[0] = cdr(cdr(car(car(vs_base[0]))));}
LFD(Lcddadr)(){check_arg(1); vs_base[0] = cdr(cdr(car(cdr(vs_base[0]))));}
LFD(Lcdddar)(){check_arg(1); vs_base[0] = cdr(cdr(cdr(car(vs_base[0]))));}
LFD(Lcddddr)(){check_arg(1); vs_base[0] = cdr(cdr(cdr(cdr(vs_base[0]))));}

DEFUNO_NEW("NTH",object,fLnth,LISP,2,2,NONE,OI,OO,OO,OO,void,Lnth,(fixnum index,object list),"")
{ object x = list;
  if (index < 0)
    FEerror("Negative index: ~D.", 1, make_fixnum(index));
  while (1)
    {if (type_of(x)==t_cons)
       { if (index == 0)
	   RETURN1(Mcar(x));
	 else {x = Mcdr(x); index--;}}
      else if (x == sLnil) RETURN1(sLnil);
      else FEwrong_type_argument(sLlist, list);}
}   
#ifdef STATIC_FUNCTION_POINTERS
object
fLnth(fixnum index,object list) {
	return FFN(fLnth)(index,list);
}
#endif

DEFUN_NEW("FIRST",object,fLfirst,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"") 
{ RETURN1(car(x)) ;}

DEFUN_NEW("SECOND",object,fLsecond,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(1,x);}
DEFUN_NEW("THIRD",object,fLthird,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(2,x);}
DEFUN_NEW("FOURTH",object,fLfourth,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(3,x);}
DEFUN_NEW("FIFTH",object,fLfifth,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(4,x);}
DEFUN_NEW("SIXTH",object,fLsixth,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(5,x);}
DEFUN_NEW("SEVENTH",object,fLseventh,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(6,x);}
DEFUN_NEW("EIGHTH",object,fLeighth,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(7,x);}
DEFUN_NEW("NINTH",object,fLninth,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(8,x);}
DEFUN_NEW("TENTH",object,fLtenth,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ return fLnth(9,x);}

LFD(Lcons)()
{
	object x;

	check_arg(2);
	x = alloc_object(t_cons);
	x->c.c_car = vs_base[0];
	x->c.c_cdr = vs_base[1];
	vs_base[0] = x;
	vs_popp;
}

@(defun tree_equal (x y &key test test_not)
        saveTEST;
@
	protectTEST;	
	setupTEST(Cnil, test, test_not, Cnil);
        x=(tree_equal(x, y) ? Ct : Cnil);
        restoreTEST;
        @(return x) 
@)

LFD(Lendp)()
{

	check_arg(1);

	if (vs_base[0] == Cnil) {
		vs_base[0] = Ct;
		return;
	}
	if (type_of(vs_base[0]) == t_cons) {
		vs_base[0] = Cnil;
		return;
	}
	FEwrong_type_argument(sLlist, vs_base[0]);
}

LFD(Llist_length)()
{
	int n;
	object fast, slow;
	check_arg(1);
	n = 0;
	fast = slow = vs_base[0];
	for (;;) {
		if (endp(fast)) {
			vs_base[0] = make_fixnum(n);
			return;
		}
		if (endp(fast->c.c_cdr)) {
			vs_base[0] = make_fixnum(n + 1);
			return;
		}
		if (fast == slow && n > 0) {
			vs_base[0] = Cnil;
			return;
		}
		n += 2;
		fast = fast->c.c_cdr->c.c_cdr;
		slow = slow->c.c_cdr;
	}
}


object
nth(int n, object x) {

	if (n < 0) {
		vs_push(make_fixnum(n));
		FEerror("Negative index: ~D.", 1, vs_head);
	}
	while (n-- > 0)
		if (endp(x)) {
			return(Cnil);
		} else
			x = x->c.c_cdr;
	if (endp(x))
		return(Cnil);
	else
		return(x->c.c_car);
}

LFD(Lnthcdr)()
{
	check_arg(2);
	vs_base[0] = nthcdr(fixint(vs_base[0]), vs_base[1]);
	vs_popp;
}

object
nthcdr(int n, object x) {

	if (n < 0) {
		vs_push(make_fixnum(n));
		FEwrong_type_argument(sLpositive_fixnum, vs_head);
	}
	while (n-- > 0)
		if (endp_prop(x)) {
			return(Cnil);
		} else
			x = x->c.c_cdr;
	return(x);
}

LFD(Llast)() {
	object t;
	int n;

	n=vs_top-vs_base;
	if (n<1)
		FEtoo_few_arguments(vs_base,vs_top);
	if (n>2)
		FEtoo_many_arguments(vs_base,vs_top);
	if (endp(vs_base[0]))
		return;
	if (n==2) {
		if (type_of(vs_base[1])!=t_fixnum || (n=fix(vs_base[1]))<0)
			FEwrong_type_argument(sLpositive_fixnum,vs_base[1]);
		vs_popp;
	}	

	if (!n)
		while (type_of(vs_base[0]) == t_cons)
			vs_base[0]=vs_base[0]->c.c_cdr;
	else {
		t=vs_base[0];
		while (type_of(vs_base[0]->c.c_cdr) == t_cons && --n)
			vs_base[0] = vs_base[0]->c.c_cdr;
		while (type_of(vs_base[0]->c.c_cdr) == t_cons) {
			t=t->c.c_cdr;
			vs_base[0] = vs_base[0]->c.c_cdr;
		}
		vs_base[0]=t;
	}

}

LFD(Llist)()
{
	vs_push(Cnil);
	while (vs_top > vs_base + 1)
		stack_cons();
}

LFD(LlistA)()
{
	if (vs_top == vs_base)
		too_few_arguments();
	while (vs_top > vs_base + 1)
		stack_cons();
}
static object copy_off_stack_tree(x)
object x;
{object *p;
 p = &x;
 TOP:
 if (type_of(*p) ==t_cons)
   { if(!inheap(*p))
       *p=make_cons(copy_off_stack_tree((*p)->c.c_car),(*p)->c.c_cdr);
   else
     (*p)->c.c_car = copy_off_stack_tree((*p)->c.c_car);
     p = &((*p)->c.c_cdr);
     goto TOP;}
 return x;
}

        
 
object on_stack_make_list(n)
int n;
{ object res=(object) alloca_val;
 struct cons *p = (struct cons *)res;
 if (n<=0) return Cnil;
  TOP:
 p->t = (int)t_cons;
 p->m=FALSE;
 p->c_car=Cnil;
 if (--n == 0)
   {p->c_cdr = Cnil;
    return res;}
 else
   {object  x= (object) p;
     x->c.c_cdr= (object) ( ++p);}
 goto TOP;
}

object make_list(n)
int n;
{object x =Cnil ;
  while (n-- > 0)
    x = make_cons(Cnil, x);
 return x;}

@(defun make_list (size &key initial_element &aux x)
	int i;
@
	check_type_non_negative_integer(&size);
	if (type_of(size) != t_fixnum)
		FEerror("Cannot make a list of the size ~D.", 1, size);
	i = fix(size);
	while (i-- > 0)
		x = make_cons(initial_element, x);
	@(return x)
@)

LFD(Lappend)()
{
	object x;

	if (vs_top == vs_base) {
		vs_push(Cnil);
		return;
	}
	while (vs_top > vs_base + 1) {
		x = append(vs_top[-2], vs_top[-1]);
		vs_top[-2] = x;
		vs_popp;
	}
}

LFD(Lcopy_list)()
{
	check_arg(1);
	vs_base[0] = copy_list(vs_base[0]);
}

LFD(Lcopy_alist)()
{
	check_arg(1);
	vs_base[0] = copy_alist(vs_base[0]);
}

LFD(Lcopy_tree)()
{
	check_arg(1);
	copy_tree(vs_base[0]);
	vs_base[0] = vs_pop;
}

LFD(Lrevappend)() {
	object x, y;

	check_arg(2);
	y = vs_pop;
	for (x = vs_base[0];  !endp(x);  x = x->c.c_cdr) {
		vs_push(x->c.c_car);
		vs_push(y);
		stack_cons();
		y = vs_pop;
	}
	vs_base[0] = y;
}

object
nconc(object x, object y) {
	object x1;

	if (endp(x))
		return(y);
	for (x1 = x;  !endp(x1->c.c_cdr);  x1 = x1->c.c_cdr)
		;
	x1->c.c_cdr = y;
	return(x);
}

LFD(Lnconc)() {
	object x, l, m=Cnil;
        int i, narg;
	
	narg = vs_top - vs_base - 1;
	if (narg < 0) { vs_push(Cnil); return; }
	x = Cnil;
	for (i = 0;  i < narg;  i++) {
		l = vs_base[i];
		if (endp(l))
			continue;
		if (x == Cnil)
			x = m = l;
		else {
			m->c.c_cdr = l;
			m = l;
		}
		for (;  type_of(m->c.c_cdr)==t_cons;  m = m->c.c_cdr);
	}
	if (x == Cnil) vs_base[0] = vs_top[-1];
	else {
		m->c.c_cdr = vs_top[-1];
		vs_base[0] = x;
	}
	vs_top = vs_base+1;
}

LFD(Lreconc)() {
	object x, y, z;

	check_arg(2);
	y = vs_pop;
	for (x = vs_base[0];  !endp_prop(x);) {
		z = x;
		x = x->c.c_cdr;
		z->c.c_cdr = y;
		y = z;
	}
	vs_base[0] = y;
}

@(defun butlast (lis &optional (nn `make_fixnum(1)`))
	int i;
@
	check_type_non_negative_integer(&nn);
	if (type_of(nn) != t_fixnum)
		@(return Cnil)
	for (i = 0;  !endp(lis) && fix_dot(lis)==lis;  i++, lis = lis->c.c_cdr)
		vs_check_push(lis->c.c_car);
	if (i <= fix((nn))) {
		vs_top -= i;
		@(return Cnil)
	}
	vs_top -= fix((nn));
	i -= fix((nn));
	vs_push(Cnil);
	while (i-- > 0)
		stack_cons();
	lis = vs_pop;
	@(return lis)
@)

@(defun nbutlast (lis &optional (nn `make_fixnum(1)`))
	int i;
	object x;
@
	check_type_non_negative_integer(&nn);
	if (type_of(nn) != t_fixnum)
		@(return Cnil)
	for (i = 0, x = lis;  !endp(x) && fix_dot(x)==x;  i++, x = x->c.c_cdr)
		;
	if (i <= fix((nn)))
		@(return Cnil)
	for (i -= fix((nn)), x = lis;  --i > 0;  x = x->c.c_cdr)
		;
	x->c.c_cdr = Cnil;
	@(return lis)
@)

LFD(Lldiff)() {
	int i;
	object x;

	check_arg(2);
	for (i = 0, x = vs_base[0];  !endp(x);  i++, x = x->c.c_cdr)
/*		if (dot_list_eq(x,vs_base[1]))*/
		if (eql(fix_dot(x),vs_base[1]))
			break;
		else
			vs_check_push(x->c.c_car);
        if (proper_list(x))
		vs_push(Cnil);
	else
		i--;
	while (i-- > 0)
		stack_cons();
	vs_base[0] = vs_pop;
	vs_popp;
}

LFD(Lrplaca)()
{
	check_arg(2);
	check_type_cons(&vs_base[0]);
	take_care(vs_base[1]);
	vs_base[0]->c.c_car = vs_base[1];
	vs_popp;
}

LFD(Lrplacd)()
{
	check_arg(2);
	check_type_cons(&vs_base[0]);
	vs_base[0]->c.c_cdr = vs_base[1];
	vs_popp;
}

@(defun subst (new old tree &key test test_not key)
	saveTEST;
@
	protectTEST;
	setupTEST(old, test, test_not, key);
	subst(new, tree);
	tree = vs_pop;
	restoreTEST;
	@(return tree)
@)

PREDICATE(Lsubst,Lsubst_if,Lsubst_if_not, 3)


@(defun nsubst (new old tree &key test test_not key)
	saveTEST;
@
	protectTEST;
	setupTEST(old, test, test_not, key);
	nsubst(new, &tree);
	restoreTEST;
	@(return tree)
@)

PREDICATE(Lnsubst,Lnsubst_if,Lnsubst_if_not, 3)

object
sublis1(alist,tree,tst)
     object alist,tree;
     bool (*tst)();
{object v;
 for (v=alist ; v!=Cnil; v=v->c.c_cdr)
   { if ((*tst)(v->c.c_car->c.c_car ,tree))
       return(v->c.c_car->c.c_cdr);}
 if (type_of(tree)==t_cons)
   {object ntree=make_cons(sublis1(alist,tree->c.c_car,tst),
			   tree->c.c_cdr);
    ntree->c.c_cdr=sublis1(alist,ntree->c.c_cdr,tst);
    return ntree;
  }
  return tree;
}

/* static int
eq(x,y)
object x,y;
{return (x==y);}*/

void
check_alist(alist)
     object alist;
{object v;
   for (v=alist ; !endp(v) ; v=v->c.c_cdr)
   {if (type_of(v->c.c_car) != t_cons
         && v->c.c_car != Cnil)
 FEerror("Not alist",0);}
 return ;
}
 

@(defun sublis (alist tree &key test test_not key)

        saveTEST;
@  
	protectTEST;
	setupTEST(Cnil, test, test_not, key);
	sublis(alist, tree);
	tree = vs_pop;
	restoreTEST;
	@(return tree)
@)

@(defun nsublis (alist tree &key test test_not key)
	saveTEST;
@
	protectTEST;
	setupTEST(Cnil, test, test_not, key);
	nsublis(alist, &tree);
	restoreTEST;
	@(return tree)
@)

@(defun member (item list &key test test_not key)
	saveTEST;

@
	protectTEST;
	setupTEST(item, test, test_not, key);
	while (!endp_prop(list)) {
		if (TEST(list->c.c_car))
			goto L;
		list = list->c.c_cdr;
	}
	restoreTEST;
	@(return list)
@)

PREDICATE(Lmember,Lmember_if,Lmember_if_not, 2)

@(static defun member1 (item list &key test test_not key rev)
	saveTEST;
@
	protectTEST;
	if (key != Cnil)
		item = ifuncall1(key, item);
	if (rev != Cnil)
		reverse_comparison=1;
	setupTEST(item, test, test_not, key);
	while (!endp(list)) {
		if (TEST(list->c.c_car))
			goto L;
		list = list->c.c_cdr;
	}
	restoreTEST;
	reverse_comparison=0;
	@(return list)
@)

LFD(Ltailp)() {
	object x;

	check_arg(2);
	for (x = vs_base[1];  !endp(x);  x = x->c.c_cdr)
		if (eql(fix_dot(x),vs_base[0])) {
			vs_base[0] = Ct;
			vs_popp;
			return;
		}
	if (eql(x,vs_base[0])) 
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
	vs_popp;
	return;
}

LFD(Ladjoin)()
{
	object *base = vs_base, *top = vs_top;

	if (vs_top - vs_base < 2)
		too_few_arguments();
	while (vs_base < top)
		vs_push(*vs_base++);
	FFN(Lmember1)();
	if (vs_base[0] == Cnil)
		base[1] = make_cons(base[0], base[1]);
	vs_base = base+1;
	vs_top = base+2;
}

LFD(Lacons)()
{
	check_arg(3);

	vs_base[0] = make_cons(vs_base[0], vs_base[1]);
	vs_base[0] = make_cons(vs_base[0], vs_base[2]);
	vs_top -= 2;
}

@(defun pairlis (keys data &optional a_list)
	object *vp, k, d;
@
	vp = vs_top + 1;
	k = keys;
	d = data;
	while (!endp(k)) {
		if (endp(d))
		 FEerror(
		  "The keys ~S and the data ~S are not of the same length",
		  2, keys, data);
		vs_check_push(make_cons(k->c.c_car, d->c.c_car));
		k = k->c.c_cdr;
		d = d->c.c_cdr;
	}
	if (!endp(d))
	    FEerror("The keys ~S and the data ~S are not of the same length",
		    2, keys, data);
	vs_push(a_list);
	while (vs_top > vp)
		stack_cons();
	@(return `vp[-1]`)
@)

@(static defun assoc_or_rassoc (item a_list &key test test_not key)
	saveTEST;
@
	protectTEST;
	setupTEST(item, test, test_not, key);
	while (!endp(a_list)) {
		if (TEST((*car_or_cdr)(a_list->c.c_car)) &&
                    a_list->c.c_car != Cnil) {
			a_list = a_list->c.c_car;
			goto L;
		}
		a_list = a_list->c.c_cdr;
	}
	restoreTEST;
	@(return a_list)
@)

LFD(Lassoc)() { car_or_cdr = car; FFN(Lassoc_or_rassoc)(); }
LFD(Lrassoc)() { car_or_cdr = cdr; FFN(Lassoc_or_rassoc)(); }

static bool true_or_false;

@(static defun assoc_or_rassoc_predicate (predicate a_list &key key)
	object x;
@
	while (!endp(a_list)) {
		if (a_list->c.c_car!=Cnil) {
			x=(*car_or_cdr)(a_list->c.c_car);
			if (key!=Cnil)
				x=ifuncall1(key,x);
			if ((ifuncall1(predicate,x) != Cnil) == true_or_false) 
				@(return `a_list->c.c_car`)
		}
		a_list = a_list->c.c_cdr;
	}
	@(return a_list)
@)

LFD(Lassoc_if)() { car_or_cdr = car; true_or_false = TRUE; FFN(Lassoc_or_rassoc_predicate)(); }
LFD(Lassoc_if_not)() { car_or_cdr = car; true_or_false = FALSE; FFN(Lassoc_or_rassoc_predicate)(); }
LFD(Lrassoc_if)() { car_or_cdr = cdr; true_or_false = TRUE; FFN(Lassoc_or_rassoc_predicate)(); }
LFD(Lrassoc_if_not)() { car_or_cdr = cdr; true_or_false = FALSE; FFN(Lassoc_or_rassoc_predicate)(); }

bool
member_eq(x, l)
object x, l;
{

	for (;  type_of(l) == t_cons;  l = l->c.c_cdr)
		if (x == l->c.c_car)
			return(TRUE);
	return(FALSE);
}

static void
FFN(siLmemq)()
{
	object x, l;

	check_arg(2);

	x = vs_base[0];
	l = vs_base[1];

	for (;  type_of(l) == t_cons;  l = l->c.c_cdr)
		if (x == l->c.c_car) {
			vs_base[0] = l;
			vs_popp;
			return;
		}
	
	vs_base[0] = Cnil;
	vs_popp;
}

void
delete_eq(x, lp)
object x, *lp;
{
	for (;  type_of(*lp) == t_cons;  lp = &(*lp)->c.c_cdr)
		if ((*lp)->c.c_car == x) {
			*lp = (*lp)->c.c_cdr;
			return;
		}
}

void
gcl_init_list_function()
{

	sKtest = make_keyword("TEST");
	sKtest_not = make_keyword("TEST-NOT");
	sKkey = make_keyword("KEY");
	sKrev = make_keyword("REV");

	sKinitial_element = make_keyword("INITIAL-ELEMENT");

	make_function("CAR", Lcar);
	make_function("CDR", Lcdr);

	make_function("CAAR", Lcaar);
	make_function("CADR", Lcadr);
	make_function("CDAR", Lcdar);
	make_function("CDDR", Lcddr);
	make_function("CAAAR", Lcaaar);
	make_function("CAADR", Lcaadr);
	make_function("CADAR", Lcadar);
	make_function("CADDR", Lcaddr);
	make_function("CDAAR", Lcdaar);
	make_function("CDADR", Lcdadr);
	make_function("CDDAR", Lcddar);
	make_function("CDDDR", Lcdddr);
	make_function("CAAAAR", Lcaaaar);
	make_function("CAAADR", Lcaaadr);
	make_function("CAADAR", Lcaadar);
	make_function("CAADDR", Lcaaddr);
	make_function("CADAAR", Lcadaar);
	make_function("CADADR", Lcadadr);
	make_function("CADDAR", Lcaddar);
	make_function("CADDDR", Lcadddr);
	make_function("CDAAAR", Lcdaaar);
	make_function("CDAADR", Lcdaadr);
	make_function("CDADAR", Lcdadar);
	make_function("CDADDR", Lcdaddr);
	make_function("CDDAAR", Lcddaar);
	make_function("CDDADR", Lcddadr);
	make_function("CDDDAR", Lcdddar);
	make_function("CDDDDR", Lcddddr);

	make_function("CONS", Lcons);
	make_function("TREE-EQUAL", Ltree_equal);
	make_function("ENDP", Lendp);
	make_function("LIST-LENGTH", Llist_length);


	make_function("REST", Lcdr);
	make_function("NTHCDR", Lnthcdr);
	make_function("LAST", Llast);
	make_function("LIST", Llist);
	make_function("LIST*", LlistA);
	make_function("MAKE-LIST", Lmake_list);
	make_function("APPEND", Lappend);
	make_function("COPY-LIST", Lcopy_list);
	make_function("COPY-ALIST", Lcopy_alist);
	make_function("COPY-TREE", Lcopy_tree);
	make_function("REVAPPEND", Lrevappend);
	make_function("NCONC", Lnconc);
	make_function("NRECONC", Lreconc);

	make_function("BUTLAST", Lbutlast);
	make_function("NBUTLAST", Lnbutlast);
	make_function("LDIFF", Lldiff);
	make_function("RPLACA", Lrplaca);
	make_function("RPLACD", Lrplacd);
	make_function("SUBST", Lsubst);
	make_function("SUBST-IF", Lsubst_if);
	make_function("SUBST-IF-NOT", Lsubst_if_not);
	make_function("NSUBST", Lnsubst);
	make_function("NSUBST-IF", Lnsubst_if);
	make_function("NSUBST-IF-NOT", Lnsubst_if_not);
	make_function("SUBLIS", Lsublis);
	make_function("NSUBLIS", Lnsublis);
	make_function("MEMBER", Lmember);
	make_function("MEMBER-IF", Lmember_if);
	make_function("MEMBER-IF-NOT", Lmember_if_not);
	make_si_function("MEMBER1", Lmember1);
	make_function("TAILP", Ltailp);
	make_function("ADJOIN", Ladjoin);

	make_function("ACONS", Lacons);
	make_function("PAIRLIS", Lpairlis);
	make_function("ASSOC", Lassoc);
	make_function("ASSOC-IF", Lassoc_if);
	make_function("ASSOC-IF-NOT", Lassoc_if_not);
	make_function("RASSOC", Lrassoc);
	make_function("RASSOC-IF", Lrassoc_if);
	make_function("RASSOC-IF-NOT", Lrassoc_if_not);

	make_si_function("MEMQ", siLmemq);

}
