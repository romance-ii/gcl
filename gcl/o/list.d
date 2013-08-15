/* -*-C-*- */
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
#include "num_include.h"
#include "page.h"


object
car(x)
object x;
{
	if (x == Cnil)
		return(x);
	if (consp(x))
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
	if (consp(x))
		return(x->c.c_cdr);
	FEwrong_type_argument(sLlist, x);
	return(Cnil);
}


object on_stack_list_vector_new(fixnum n,object first,va_list ap)
{object res=(object) alloca_val;
 struct cons *p;
 object x;
 int jj=0;
 p=(struct cons *) res;
 if (n<=0) return Cnil;
 TOP:
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

object on_stack_list(fixnum n,...) {
  object x,first;
  va_list ap;
  va_start(ap,n);
  first=va_arg(ap,object);
  x=on_stack_list_vector_new(n,first,ap);
  va_end(ap);
  return x;
}


object list_vector_new(fixnum n,object first,va_list ap)
{object ans,*p;
 
 if (n == 0) return Cnil;
 ans = make_cons(first,Cnil);
 p = & (ans->c.c_cdr); 
 while (--n > 0)
   { *p = make_cons(va_arg(ap,object),Cnil);
     p = & ((*p)->c.c_cdr);
   }
 return ans;}


   
object listqA(fixnum a,fixnum n,va_list ap) { 

  struct typemanager *tm=(&tm_table[(int)t_cons]);
  object tail=tm->tm_free,lis=tail;

  if (n<=0) return Cnil;

  CHECK_INTERRUPT;
  if (stack_alloc_start || tm->tm_nfree < n )  {
    
    object *p = vs_top;
    
    vs_push(Cnil);
    while(--n>=0)
      { *p=make_cons(va_arg(ap,object),Cnil);
      p= &((*p)->c.c_cdr);
      }
    if (a) 
      *p=va_arg(ap,object);
    return(vs_pop);

  }

   
  {

    BEGIN_NO_INTERRUPT;

    tm->tm_nfree -= n;
    while (--n) {
      pageinfo(tail)->in_use++;
      tail->c.c_cdr=OBJ_LINK(tail);
      tail->c.c_car=va_arg(ap,object); 
      tail=tail->c.c_cdr;
    }
    tm->tm_free=OBJ_LINK(tail);
    pageinfo(tail)->in_use++;
    tail->c.c_car=va_arg(ap,object); 
    tail->c.c_cdr=a ? va_arg(ap,object) : Cnil;
    
    END_NO_INTERRUPT;
    return lis;
    
  }

}

object list(fixnum n,...) { 

  va_list ap;
  object lis;

  va_start(ap,n);
  lis=listqA(0,n,ap);
  va_end(ap);
  return lis;

}

object listA(fixnum n,...) { 

  va_list ap;
  object lis;

  va_start(ap,n);
  lis=listqA(1,n-1,ap);
  va_end(ap);
  return lis;

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

object
copy_list(x)
object x;
{
	object y;

	if (!consp(x))
		return(x);
	y = make_cons(x->c.c_car, Cnil);
	vs_push(y);
	for (x = x->c.c_cdr; consp(x); x = x->c.c_cdr) {
		y->c.c_cdr = make_cons(x->c.c_car, Cnil);
		y = y->c.c_cdr;
	}
	y->c.c_cdr = x;
	return(vs_pop);
}


DEFUN("CONS",object,fLcons,LISP,2,2,NONE,OO,OO,OO,OO,(object a,object d),"") {

  object x=alloc_object(t_cons);
  x->c.c_car=a;
  x->c.c_cdr=d;
  RETURN1(x);

}

object
make_list(fixnum n) {
  object x =Cnil ;
  while (n-- > 0)
    x = make_cons(Cnil, x);
  return x;
}

#ifndef LISP_BOOT

DEFUN("SET-DIFFERENCE-EQ",object,fSset_difference_eq,SI,2,8,NONE,OO,OO,OO,OO,
	  (object x,object y,...),"") { 
  object z=Cnil,yy;
  for (;x!=Cnil;x=x->c.c_cdr) {
    for (yy=y;yy!=Cnil && x->c.c_car!=yy->c.c_car;yy=yy->c.c_cdr);
    if (yy==Cnil)
      z=MMcons(x->c.c_car,z);
  }
  RETURN1(z);

}

DEFUN("UNION-EQ",object,fSunion_eq,SI,2,8,NONE,OO,OO,OO,OO,
	  (object x,object y,...),"") { 
  object z=y,yy;
  for (;x!=Cnil;x=x->c.c_cdr) {
    for (yy=z;yy!=Cnil && x->c.c_car!=yy->c.c_car;yy=yy->c.c_cdr);
    if (yy==Cnil)
      z=MMcons(x->c.c_car,z);
  }
  RETURN1(z);

}

DEFUN("NUNION-EQ",object,fSnunion_eq,SI,2,8,NONE,OO,OO,OO,OO,
	  (object x,object y,...),"") { 
  object z=Cnil,zp=z,yy;
  for (;x!=Cnil;x=x->c.c_cdr) {
    for (yy=y;yy!=Cnil && x->c.c_car!=yy->c.c_car;yy=yy->c.c_cdr);
    if (yy==Cnil) {
      if (zp!=Cnil) zp->c.c_cdr=x; else z=x;
      zp=x;
    }
  }
  if (zp!=Cnil) zp->c.c_cdr=y;
  RETURN1(z!=Cnil ? z : y);

}

DEFUN("INTERSECTION-EQ",object,fSintersection_eq,SI,2,8,NONE,OO,OO,OO,OO,
	  (object x,object y,...),"") { 
  object z=Cnil,yy;
  for (;x!=Cnil;x=x->c.c_cdr) {
    for (yy=y;yy!=Cnil && x->c.c_car!=yy->c.c_car;yy=yy->c.c_cdr);
    if (yy!=Cnil)
      z=MMcons(x->c.c_car,z);
  }
  RETURN1(z);

}

#endif

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

        
 
object on_stack_make_list(n)
fixnum n;
{ object res=(object) alloca_val;
 struct cons *p = (struct cons *)res;
 if (n<=0) return Cnil;
  TOP:
 p->c_car=Cnil;
 if (--n == 0)
   {p->c_cdr = Cnil;
    return res;}
 else
   {object  x= (object) p;
     x->c.c_cdr= (object) ( ++p);}
 goto TOP;
}


DEFUN("RPLACA",object,fLrplaca,LISP,2,2,NONE,OO,OO,OO,OO,(object o,object c),"") {

  check_type_cons(&o);
  o->c.c_car = c;
  RETURN1(o);

}

DEFUN("RPLACD",object,fLrplacd,LISP,2,2,NONE,OO,OO,OO,OO,(object o,object d),"") {

  check_type_cons(&o);
  o->c.c_cdr = d;
  RETURN1(o);

}

 
void
check_proper_list(alist)
object alist;
{
    object v;
    /*
    if (alist == Cnil)
	 FEwrong_type_argument(sLlist, alist);
    */
    for (v=alist ; consp(v) ; v=v->c.c_cdr);
    if (v != Cnil)
      TYPE_ERROR(alist,siLproper_list);
}


DEFUN("PROPER-LISTP",object,fSproper_listp,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") { 
  check_proper_list(x);
  RETURN1(Ct);
}


bool
member_eq(x, l)
object x, l;
{

	for (;  consp(l);  l = l->c.c_cdr)
		if (x == l->c.c_car)
			return(TRUE);
	return(FALSE);
}

void
delete_eq(x, lp)
object x, *lp;
{
	for (;  consp(*lp);  lp = &(*lp)->c.c_cdr)
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

	sKinitial_element = make_keyword("INITIAL-ELEMENT");

	make_function("LIST", Llist);
	make_function("LIST*", LlistA);

}
