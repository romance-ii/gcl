/*
 Copyright (C) 1994  W. Schelter

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

#include <stdlib.h>
#include <string.h>
#include "include.h"

static void
displace(object, object, int);

static enum aelttype
Iarray_element_type(object);


/*  #define ARRAY_DIMENSION_LIMIT MOST_POSITIVE_FIXNUM */

DEFCONST("ARRAY-RANK-LIMIT", sLarray_rank_limit, LISP,
	 make_fixnum(ARRAY_RANK_LIMIT),"");

DEFCONST("ARRAY-DIMENSION-LIMIT", sLarray_dimension_limit,
	 LISP, make_fixnum(MOST_POSITIVE_FIX),"");
DEFCONST("ARRAY-TOTAL-SIZE-LIMIT", sLarray_total_size_limit,
	 LISP, make_fixnum(MOST_POSITIVE_FIX),"");

DEF_ORDINARY("BIT",sLbit,LISP,"");

/* number of bits in  unit of storage of x->bv.bv_self[0] */

#define BV_BITS 8

#define BITREF(x,i) \
  ((((1 << (BV_BITS -1)) >> (i % BV_BITS)) & (x->bv.bv_self[i/BV_BITS])) \
   ? 1 : 0)

#define SET_BITREF(x,i) \
  (x->bv.bv_self[i/BV_BITS]) |= ((1 << (BV_BITS -1)) >> (i % BV_BITS))
#define CLEAR_BITREF(x,i) \
  (x->bv.bv_self[i/BV_BITS]) &= ~(((1 << (BV_BITS -1)) >> (i % BV_BITS)))

extern short aet_sizes[];

#define ARRAY_BODY_PTR(ar,n) \
  (void *)(ar->ust.ust_self + aet_sizes[Iarray_element_type(ar)]*n)

#define N_FIXNUM_ARGS 6

DEFUNO_NEW("AREF", object, fLaref, LISP, 1, ARRAY_RANK_LIMIT,
       NONE, OO, II, II, II,void,Laref,(object x,fixnum i, ...),"")
{ int n = VFUN_NARGS;
  int i1;
  va_list ap;
  if (type_of(x) == t_array)
    {int m ;
     unsigned int k;
     int rank = n - 1; 
     if (x->a.a_rank != rank)
       FEerror(" ~a has wrong rank",1,x);
     if (rank == 1) return fLrow_major_aref(x,i);
     if (rank == 0) return fLrow_major_aref(x,0);
     va_start(ap,i);
     m = 0;
     k = i;
     /* index into 1 dimensional array */
     i1 = 0;
     rank-- ;
     while(1) 
       {
	 if ( k >= x->a.a_dims[m])
	   FEerror("Index ~a to array is too large",1,make_fixnum (m));
	 i1 += k;
	 m ++;
	 if (m <= rank)
	   { i1 = i1 * x->a.a_dims[m];
	     if (m < N_FIXNUM_ARGS)
	       { k = va_arg(ap,fixnum);}
	     else {object x = va_arg(ap,object);
		   check_type(x,t_fixnum);
		   k = Mfix(x);}
	  
	   }
	 else break;}
     va_end(ap);
     return fLrow_major_aref(x,i1);
   }
  if (n > 2)
    { FEerror("Too many args (~a) to aref",1,make_fixnum(n));}
  return fLrow_major_aref(x,i);

}

static void
fScheck_bounds_bounds(object x, int i)
{
  switch (type_of(x)) {
  case t_array:
  case t_vector:
  case t_bitvector:
  case t_string:
    if ((unsigned int) i >= x->a.a_dim)
    FEerror("Array index ~a out of bounds for ~a", 2,  make_fixnum(i),x);
  default:
    FEerror("not an array",0);
  }
}

DEFUNO_NEW("SVREF", object, fLsvref, LISP, 2, 2,
      ONE_VAL, OO, IO, OO,OO,void,Lsvref,(object x,ufixnum i),
      "For array X and index I it returns (aref x i) ")
{
 if (type_of(x)==t_vector
     && (enum aelttype)x->v.v_elttype == aet_object
     && x->v.v_dim > i)
   RETURN1(x->v.v_self[i]);
 if (x->v.v_dim > i) illegal_index(x,make_fixnum(i));
 FEerror("Bad simple vector ~a",1,x);
 return(Cnil);
}
    
DEFUN_NEW("ROW-MAJOR-AREF", object, fLrow_major_aref, LISP, 2, 2,
       NONE, OO, IO, OO,OO,(object x,fixnum i),
      "For array X and index I it returns (aref x i) as if x were \
1 dimensional, even though its rank may be bigger than 1")
{
  switch (type_of(x)) {
  case t_array:
  case t_vector:
  case t_bitvector:
    if (x->v.v_dim <= (unsigned int)i)
      /*  i =  */fScheck_bounds_bounds(x, i);
    switch (x->v.v_elttype) {
    case aet_object:
      return x->v.v_self[i];
    case aet_ch:
      return code_char(x->st.st_self[i]);
    case aet_bit:
      i += BV_OFFSET(x);
      return make_fixnum(BITREF(x, i));
    case aet_fix:
      return make_fixnum(x->fixa.fixa_self[i]);
    case aet_sf:
      return make_shortfloat(x->sfa.sfa_self[i]);
    case aet_lf:
      return make_longfloat(x->lfa.lfa_self[i]);
    case aet_char:
      return small_fixnum(x->st.st_self[i]);
    case aet_uchar:
      return small_fixnum(x->ust.ust_self[i]);
    case aet_short:
      return make_fixnum(SHORT_GCL(x, i));
    case aet_ushort:
      return make_fixnum(USHORT_GCL(x, i));

    default:
      FEerror("unknown array type",0);
    }
  case t_string:
    if (x->v.v_dim <= i)
      /*  i =  */fScheck_bounds_bounds(x, i);
    return code_char(x->st.st_self[i]);
  default:
    FEerror("not an array",0);
    return(Cnil);
  }
}

object
aset1(object x,fixnum i,object val) {
  return fSaset1(x,i,val);
}

DEFUN_NEW("ASET1", object, fSaset1, SI, 3, 3, NONE, OO, IO, OO,OO,(object x, fixnum i,object val),"")
{
  switch (type_of(x)) {
  case t_array:
  case t_vector:
  case t_bitvector:
    if (x->v.v_dim <= i)
      /*  i =  */fScheck_bounds_bounds(x, i);
    switch (x->v.v_elttype) {
    case aet_object:
      x->v.v_self[i] = val;
      break;
    case aet_ch:
      ASSURE_TYPE(val,t_character);
      x->st.st_self[i] = char_code(val);
      break;
    case aet_bit:
      i +=  BV_OFFSET(x);
    AGAIN_BIT: 
      ASSURE_TYPE(val,t_fixnum);
      {int v = Mfix(val);
       if (v == 0) CLEAR_BITREF(x,i);
       else if (v == 1) SET_BITREF(x,i);
       else {val= fSincorrect_type(val,sLbit);
	     goto AGAIN_BIT;}
       break;}
    case aet_fix:
      ASSURE_TYPE(val,t_fixnum);
      (x->fixa.fixa_self[i]) = Mfix(val);
      break;
    case aet_sf:
      ASSURE_TYPE(val,t_shortfloat);
      (x->sfa.sfa_self[i]) = Msf(val);
      break;
    case aet_lf:
      ASSURE_TYPE(val,t_longfloat);
      (x->lfa.lfa_self[i]) = Mlf(val);
      break;
    case aet_char:
      ASSURE_TYPE(val,t_fixnum);
      x->st.st_self[i] = Mfix(val);
      break;
    case aet_uchar:
      ASSURE_TYPE(val,t_fixnum);
      (x->ust.ust_self[i])= Mfix(val);
      break;
    case aet_short:
      ASSURE_TYPE(val,t_fixnum);
      SHORT_GCL(x, i) = Mfix(val);
      break;
    case aet_ushort:
      ASSURE_TYPE(val,t_fixnum);
      USHORT_GCL(x, i) = Mfix(val);
      break;
    default:
      FEerror("unknown array type",0);
    }
    break;
  case t_string:
    if (x->v.v_dim <= i)
      /*  i =  */fScheck_bounds_bounds(x, i);
    ASSURE_TYPE(val,t_character);
    x->st.st_self[i] = char_code(val);
    break;
  default:
    FEerror("not an array",0);
  }
  return val;
}

DEFUNO_NEW("ASET", object, fSaset, SI, 1, ARG_LIMIT, NONE, OO,
       IO, OO, OO,void,siLaset,(object x,fixnum i,object y, ...),"")
{ int i1;
  int n = VFUN_NARGS;
  va_list ap;
  if (type_of(x) == t_array)
    {int m ;
     unsigned int k;
     int rank = n - 2; 
     if (x->a.a_rank != rank)
       FEerror(" ~a has wrong rank",1,x);
     if (rank == 0) return fSaset1(x,0,make_fixnum(i));
/*      ASSURE_TYPE(ii,t_fixnum); */
/*      i = fix(ii); */
     if (rank == 1)
       return fSaset1(x,i,y);
     va_start(ap,y);
     m = 0;
     k = i;
     /* index into 1 dimensional array body */
     i1 = 0;
     rank-- ;
     while(1) 
       {
	 if (k >= x->a.a_dims[m]) {
	   object x,x1;
	   x=make_fixnum(m);
	   x1=make_fixnum(k);
	   FEerror("Index number  ~a: ~a to array is out of bounds",
		   2,x,x1);
	 }
	 i1 += k;
	 if (m < rank)
	   {object u;
	    if (m == 0)
	      { u = y;}
	    else
	      { u = va_arg(ap,object);}
	    check_type(u,t_fixnum);
	    k = Mfix(u);
	    m++ ;
	    i1 = i1 * x->a.a_dims[m];

	  }
	 else
	   { y = va_arg(ap,object);
	     break ;}
       }
     va_end(ap);
     return fSaset1(x,i1,y);
   }
  else 
    { 
/*       ASSURE_TYPE(ii,t_fixnum); */
      return fSaset1(x,i,y);
    }
   
}

DEFUNO_NEW("SVSET", object, fSsvset, SI, 3, 3, NONE, OO, IO, OO,
       OO,void,siLsvset,(object x,fixnum i,object val),"")
{ if (TYPE_OF(x) != t_vector
      || DISPLACED_TO(x) != Cnil)
    Wrong_type_error("simple array",0);
  if (i > x->v.v_dim)
    { FEerror("out of bounds",0);
    }
  return x->v.v_self[i] = val;
}
  
/*
(proclaim '(ftype (function (fixnum fixnum t  *)) make-vector1))
(defun make-vector1 (n elt-type staticp &optional fillp initial-element
		     displaced-to (displaced-index-offset  0))
  (declare (fixnum n elt-type displaced-index-offset))
*/ 


DEFUN_NEW("MAKE-VECTOR1",object,fSmake_vector1,SI,3,8,NONE,OI,
      IO,OO,OO,(fixnum n,fixnum elt_type,object staticp,...),"")
  
{ 
    int displaced_index_offset=0;
    int Inargs = VFUN_NARGS - 3;
    va_list Iap;object fillp;object initial_element;object displaced_to;object V9;
    Inargs = VFUN_NARGS - 3 ;
    { object x;
      BEGIN_NO_INTERRUPT;
      switch(elt_type) {
      case aet_ch:
	x = alloc_object(t_string);
	x->ust.ust_adjustable=1;
	goto a_string;
	break;
      case aet_bit:
	x = alloc_object(t_bitvector);
	x->v.v_elttype = elt_type;
	x->v.v_adjustable=1;
	break;
      default:
	x = alloc_object(t_vector);}
      x->v.v_elttype = elt_type;
      x->v.v_adjustable=1;
    a_string:
      x->v.v_dim = n;
      x->v.v_self = 0;
      x->v.v_displaced = Cnil;
	  
      if( --Inargs < 0)goto LA1;
      else {
	va_start(Iap,staticp);
	fillp=va_arg(Iap,object);
	if (fillp == Cnil)
	  {x->v.v_hasfillp = 0;
	   x->v.v_fillp = n;
	 }
	else 
	  if(type_of(fillp) == t_fixnum)
	  {	
	    x->v.v_fillp = Mfix(fillp);
	    if (x->v.v_fillp > n || x->v.v_fillp < 0) FEerror("bad fillp",0);
	    x->v.v_hasfillp = 1;
	  }
	else
	  {
	    x->v.v_fillp = n;
	    x->v.v_hasfillp = 1;
	  }

      }

      if( --Inargs < 0)goto LA2;
      else {
	initial_element=va_arg(Iap,object);}

      if( --Inargs < 0)goto LA4;
      else {
	displaced_to=va_arg(Iap,object);}

      if( --Inargs < 0)goto LA5;
      else {
	V9=va_arg(Iap,object);
	if (displaced_to != Cnil)
	  { 
	  ASSURE_TYPE(V9,t_fixnum);
	  displaced_index_offset=Mfix(V9);}}
      goto LA6;

    LA1: 
      x->v.v_hasfillp = 0;
      x->v.v_fillp = n;  
    LA2: 
      initial_element=Cnil;
    LA4: 
      displaced_to=Cnil;
    LA5: 
      displaced_index_offset= 0;
    LA6:
      va_end(Iap);
      { if (displaced_to == Cnil)
	  array_allocself(x,staticp!=Cnil,initial_element);
	else { displace(x,displaced_to,displaced_index_offset);}
	END_NO_INTERRUPT;

	return x;
      }
    }
  }



static object DFLT_aet_object = Cnil;	
static char DFLT_aet_ch = ' ';
static char DFLT_aet_char = 0; 
static fixnum DFLT_aet_fix = 0  ;		
static short DFLT_aet_short = 0;
static shortfloat DFLT_aet_sf = 0.0;
static longfloat DFLT_aet_lf = 0.0;	
static object Iname_t = sLt;
static struct { char * dflt; object *namep;} aet_types[] =
{   {(char *)	&DFLT_aet_object,	&Iname_t,},	/*  t  */
    {(char *)	&DFLT_aet_ch, &sLstring_char,},/*  string-char  */
    {(char *)	&DFLT_aet_fix, &sLbit,},		/*  bit  */
    {(char *)	&DFLT_aet_fix,	&sLfixnum,}, 	/*  fixnum  */
    {(char *)	&DFLT_aet_sf, &sLshort_float,},			/*  short-float  */
    {(char *)	&DFLT_aet_lf, &sLlong_float,},	/*  long-float  */
    {(char *)	&DFLT_aet_char,&sLsigned_char,},               /* signed char */
    {(char *)    &DFLT_aet_char,&sLunsigned_char,},               /* unsigned char */
    {(char *)	&DFLT_aet_short,&sLsigned_short,},              /* signed short */
    {(char *)	&DFLT_aet_short, &sLunsigned_short},    /*  unsigned short   */
	};

DEFUN_NEW("GET-AELTTYPE",object,fSget_aelttype,SI,1,1,NONE,OO,OO,OO,OO,(object x),"")
{ int i;
  for (i=0 ; i <   aet_last ; i++)
    if (x == * aet_types[i].namep)
      return make_fixnum((enum aelttype) i);
  if (x == sLlong_float || x == sLsingle_float || x == sLdouble_float)
    return make_fixnum(aet_lf);
  return make_fixnum(aet_object);
}

/* backward compatibility only:
   	(si:make-vector element-type 0
	dimension 1
	adjustable 2
	fill-pointer 3
	displaced-to 4
	displaced-index-offset 5
	static 6 &optional initial-element)
*/
DEFUNO_NEW("MAKE-VECTOR",object,fSmake_vector,SI,7,8,NONE,
       OO,OO,OO,OO,void,siLmake_vector,(object x0,object x1,object x2,object x3,object x4,object x5,object x6,...),"")
{int narg=VFUN_NARGS;
 object initial_elt;
 va_list ap;
 object x;
 {va_start(ap,x6);
 if (narg>=8) initial_elt=va_arg(ap,object);else goto LDEFAULT8;
 goto LEND_VARARG;
 LDEFAULT8: initial_elt = Cnil ;
 LEND_VARARG: va_end(ap);}

  /* 8 args */

  VFUN_NARGS = 8;
  x = fSmake_vector1(Mfix(x1),  /* n */
		     fix(fSget_aelttype(x0)), /*aelt type */
		     x6, /* staticp */
		     x3, /* fillp */ 
		     initial_elt, /* initial element */
		     x4,       /*displaced to */
		     x5);       /* displaced-index offset */
  x0 = x;
  RETURN1(x0);
}

/*
(proclaim '(ftype (function (fixnum t  *)) make-array1))
(defun make-array1 ( elt-type staticp  initial-element
		     displaced-to displaced-index-offset &optional dim1 dim2 .. )
  (declare (fixnum n elt-type displaced-index-offset))
*/

DEFUN_NEW("MAKE-ARRAY1",object,fSmake_array1,SI,6,6,
      NONE,OI,OO,OI,OO,
      (fixnum elt_type,object staticp,object initial_element,object displaced_to,fixnum displaced_index_offset,
       object dimensions),"")
{   
  int rank = length(dimensions);
  { object x,v;
    char *tmp_alloc;
    int dim =1,i; 
    BEGIN_NO_INTERRUPT;
    x = alloc_object(t_array);
    x->a.a_elttype = elt_type;
    x->a.a_self = 0;
    x->a.a_rank = rank;
    x->a.a_displaced = Cnil;
    x->a.a_dims = AR_ALLOC(alloc_relblock,rank,int);
    i = 0;
    v = dimensions;
    while (i < rank)
      { x->a.a_dims[i] = FIX_CHECK(Mcar(v));
	if (x->a.a_dims[i] < 0)
	  { FEerror("Dimension must be non negative",0);}
	dim *= x->a.a_dims[i++];
	v = Mcdr(v);}
    x->a.a_dim = dim;
    x->a.a_adjustable = 1;
    { if (displaced_to == Cnil)
	array_allocself(x,staticp!=Cnil,initial_element);
    else { displace(x,displaced_to,displaced_index_offset);}
      END_NO_INTERRUPT;
	return x;
      }
 }}

/*
(proclaim '(ftype (function (object t  *)) array-displacement1))
(defun array-displacement1 ( array )
*/

/*  DEFUNO_NEW("ARRAY-DISPLACEMENT1",object,fSarray_displacement,SI,1,1, */
/*        NONE,OO,OO,OO,OO,void,siLarray_displacement,"") */
/*       (object array) { */

/*    object a; */
/*    int s,n; */

/*    BEGIN_NO_INTERRUPT; */
/*    if (type_of(array)!=t_array && type_of(array)!=t_vector) */
/*      FEerror("Argument is not an array",0); */
/*    a=array->a.a_displaced->c.c_car; */
/*    if (a==Cnil) { */
/*      END_NO_INTERRUPT; */
/*      return make_cons(Cnil,make_fixnum(0)); */
/*    } */
/*    s=aet_sizes[Iarray_element_type(a)]; */
/*    n=(void *)array->a.a_self-(void *)a->a.a_self; */
/*    if (n%s) */
/*      FEerror("Array is displaced by fractional elements",0); */
/*    END_NO_INTERRUPT; */
/*    return make_cons(a,make_fixnum(n/s)); */

/*  } */

static void
Larray_displacement(void) {

  object array,a;
  int s,n;

  BEGIN_NO_INTERRUPT;

  n = vs_top - vs_base;
  if (n < 1)
    FEtoo_few_arguments(vs_base,vs_top);
  if (n > 1)
    FEtoo_many_arguments(vs_base,vs_top);
  array = vs_base[0];
  vs_base=vs_top;

/*   if (type_of(array)!=t_array && type_of(array)!=t_vector && */
/*       type_of(array)!=t_bitvector && type_of(array)!=t_string) */
/*     FEwrong_type_argument(sLarray,array); */
  IisArray(array);
  a=array->a.a_displaced->c.c_car;

  if (a==Cnil) {

    vs_push(Cnil);
    vs_push(make_fixnum(0));
    END_NO_INTERRUPT;

    return;

  }

  s=aet_sizes[Iarray_element_type(a)];
  n=(void *)array->a.a_self-(void *)a->a.a_self;
  if (n%s)
    FEerror("Array is displaced by fractional elements",0);

  vs_push(a);
  vs_push(make_fixnum(n/s));
  END_NO_INTERRUPT;

  return;

}

/*
  For the X->a.a_displaced field, the CAR is an array which X
  's body is displaced to (ie body of X is part of Another array)
  and the (CDR) is the LIST of arrays whose bodies are displaced
  to X
 (setq a (make-array 2 :displaced-to (setq b (make-array 4 ))))
                ;{  A->displ = (B), B->displ=(nil A)}
(setq w (make-array 3))   ;; w->displaced= (nil y u) 
(setq y (make-array 2 :displaced-to  w))  ;; y->displaced=(w z z2)
(setq u (make-array 2 :displaced-to w))   ;; u->displaced = (w)
(setq z (make-array 2 :displaced-to y))   ;; z->displaced = (y)
(setq z2 (make-array 2 :displaced-to y))  ;; z2->displaced= (y)
*/

static void
displace(object from_array, object dest_array, int offset)
{
  enum aelttype typ;
  IisArray(from_array);
  IisArray(dest_array);
  typ =Iarray_element_type(from_array);
  if (typ != Iarray_element_type(dest_array))
    { Wrong_type_error("same element type",0);
    }
  if (offset + from_array->a.a_dim > dest_array->a.a_dim)
    { FEerror("Destination array too small to hold other array",0);
    }
  /* ensure that we have a cons */
  if (dest_array->a.a_displaced == Cnil)
    { dest_array->a.a_displaced = list(2,Cnil,from_array);}
  else
    Mcdr(dest_array->a.a_displaced) = make_cons(from_array,
					    Mcdr(dest_array->a.a_displaced));
  from_array->a.a_displaced = make_cons(dest_array,sLnil);

  /* now set the actual body of from_array to be the address
    of body in dest_array.  If it is a bit array, this cannot carry the
    offset information, since the body is only recorded as multiples of
    BV_BITS
  */
  
    
  if (typ == aet_bit)
    { offset += BV_OFFSET(dest_array);
      from_array->bv.bv_self = dest_array->bv.bv_self + offset/BV_BITS;
      SET_BV_OFFSET(from_array,offset % BV_BITS);
    }
  else
    from_array->a.a_self = ARRAY_BODY_PTR(dest_array,offset);
  
}
    


static enum aelttype
Iarray_element_type(object x)
{enum aelttype t=aet_last;
  switch(TYPE_OF(x))
    { case t_array:
	 t = (enum aelttype) x->a.a_elttype;
	 break;
       case t_vector:
	 t = (enum aelttype) x->v.v_elttype;
	 break;
       case t_bitvector:
	 t = aet_bit;
	 break;
       case t_string:
	 t = aet_ch;
	 break;
       default:
	 FEerror("Not an array ~a ",1,x);
       }
  return t;
}

   /* Make the body of FROM array point to the body of TO
      at the  DISPLACED_INDEX_OFFSET
      */

/* static void */
/* Idisplace_array(object from, object to, int displaced_index_offset) */
/* { */
/*   enum aelttype t1,t2; */
/*   t1 = Iarray_element_type(from); */
/*   t2 = Iarray_element_type(to); */
/*   if (t1 != t2) */
/*     FEerror("Attempt to displace arrays of one type to arrays of another type",0); */
/*   if (to->a.a_dim > from->a.a_dim - displaced_index_offset) */
/*     FEerror("To array not large enough for displacement",0); */
/*   {BEGIN_NO_INTERRUPT; */
/*    from->a.a_displaced = make_cons(to,Cnil); */
/*    if (to->a.a_displaced == Cnil) */
/*      to->a.a_displaced = make_cons(Cnil,Cnil); */
/*    DISPLACED_FROM(to) = make_cons(from,DISPLACED_FROM(to)); */
       
/*    if (t1 == aet_bit) { */
/*      displaced_index_offset += BV_OFFSET(to); */
/*      from->bv.bv_self = to->bv.bv_self + displaced_index_offset/BV_BITS; */
/*      SET_BV_OFFSET(from, displaced_index_offset%BV_BITS); */
/*    } */
/*    else */
/*      from->st.st_self = ARRAY_BODY_PTR(to,displaced_index_offset); */
/*    END_NO_INTERRUPT; */
/*  } */

/* } */

/* add diff to body of x and arrays diisplaced to it */

void
adjust_displaced(object x, int diff)
{
	if (x->ust.ust_self != NULL)
		x->ust.ust_self = (char *)((long)(x->a.a_self) + diff);
	for (x = Mcdr(x->ust.ust_displaced);  x != Cnil;  x = Mcdr(x))
		adjust_displaced(Mcar(x), diff);
}




   /* RAW_AET_PTR returns a pointer to something of raw type obtained from X
      suitable for using GSET for an array of elt type TYP.
      If x is the null pointer, return a default for that array element
      type.
      */

static char *
raw_aet_ptr(object x, short int typ)
{  /* doubles are the largest raw type */

  static union{
    object o;char c;fixnum i;shortfloat f;longfloat d;
    unsigned char uc;short s;unsigned short us;} u;

  if (x==Cnil) 
    return aet_types[typ].dflt;

  switch (typ){
/* #define STORE_TYPED(pl,type,val) *((type *) pl) = (type) val; break; */
  case aet_object: 
    /* STORE_TYPED(&u,object,x); */
    u.o=x;
    break;
  case aet_ch:     
    /* STORE_TYPED(&u,char, char_code(x)); */
    u.c=char_code(x);
    break;
  case aet_bit:    
    /* STORE_TYPED(&u,fixnum, -Mfix(x)); */
    u.i=-Mfix(x);
    break;
  case aet_fix:    
    /* STORE_TYPED(&u,fixnum, Mfix(x)); */
    u.i=Mfix(x);
    break;
  case aet_sf:     
    /* STORE_TYPED(&u,shortfloat, Msf(x)); */
    u.f=Msf(x);
    break;
  case aet_lf:     
    /* STORE_TYPED(&u,longfloat, Mlf(x)); */
    u.d=Mlf(x);
    break;
  case aet_char:   
    /* STORE_TYPED(&u, char, Mfix(x)); */
    u.c=(char)Mfix(x);
    break;
  case aet_uchar:  
    /* STORE_TYPED(&u, unsigned char, Mfix(x)); */
    u.uc=(unsigned char)Mfix(x);
    break;
  case aet_short:  
    /* STORE_TYPED(&u, short, Mfix(x)); */
    u.s=(short)Mfix(x);
    break;
  case aet_ushort: 
    /* STORE_TYPED(&u,unsigned short,Mfix(x)); */
    u.us=(unsigned short)Mfix(x);
    break;
  default: 
    FEerror("bad elttype",0);
    break;
  }
  return (char *)&u;
}


     /* GSET copies into array ptr P1, the value
	pointed to by the ptr VAL into the next N slots.  The
	array type is typ.  If VAL is the null ptr, use
	the default for that element type
	NOTE: for type aet_bit n is the number of Words
	ie (nbits +WSIZE-1)/WSIZE and the words are set.
	*/     

void
gset(void *p1, void *val, int n, int typ)
{ if (val==0)
    val = aet_types[typ].dflt;
    switch (typ){

#define GSET(p,n,typ,val) {typ x = *((typ *) val); GSET1(p,n,typ,x)}
#define GSET1(p,n,typ,val) while (n-- > 0) \
      { *((typ *) p) = val; \
	  p = p + sizeof(typ); \
	  } break;

    case aet_object: GSET(p1,n,object,val);
    case aet_ch:     GSET(p1,n,char,val);
      /* Note n is number of fixnum WORDS for bit */
    case aet_bit:    GSET(p1,n,fixnum,val);
    case aet_fix:    GSET(p1,n,fixnum,val);
    case aet_sf:     GSET(p1,n,shortfloat,val);
    case aet_lf:     GSET(p1,n,longfloat,val);
    case aet_char:   GSET(p1,n,char,val);
    case aet_uchar:  GSET(p1,n,unsigned char,val);
    case aet_short:  GSET(p1,n,short,val);
    case aet_ushort: GSET(p1,n,unsigned short,val);
    default:         FEerror("bad elttype",0);
    }
  }


#define W_SIZE (BV_BITS*sizeof(fixnum))    

  /*
   */

DEFUN_NEW("COPY-ARRAY-PORTION",object,fScopy_array_portion,SI,4,
      5,NONE,OO,OI,IO,OO,(object x,object y,fixnum i1,fixnum i2,object n1o),
   "Copy elements from X to Y starting at x[i1] to x[i2] and doing N1 \
elements if N1 is supplied otherwise, doing the length of X - I1 \
elements.  If the types of the arrays are not the same, this has \
implementation dependent results.")
{ enum aelttype typ1=Iarray_element_type(x);
  enum aelttype typ2=Iarray_element_type(y);
  int n1=fix(n1o),nc;
  if (VFUN_NARGS==4)
    { n1 = x->v.v_dim - i1;}
  if (typ1==aet_bit)
    {if (i1 % CHAR_SIZE)
     badcopy:
       FEerror("Bit copies only if aligned",0);
    else
      {int rest=n1%CHAR_SIZE;
       if (rest!=0 )
	 {if (typ2!=aet_bit)
	    goto badcopy;
	    {while(rest> 0)
	       { fSaset1(y,i2+n1-rest,(fLrow_major_aref(x,i1+n1-rest)));
		 rest--;}
	     }}
       i1=i1/CHAR_SIZE ;
       n1=n1/CHAR_SIZE;
       typ1=aet_char;
     }};
  if (typ2==aet_bit)
    {if (i2 % CHAR_SIZE)
       goto badcopy;
       i2=i2/CHAR_SIZE ;}
  if ((typ1 ==aet_object ||
       typ2  ==aet_object) && typ1 != typ2)
    FEerror("Can't copy between different array types",0);
  nc=n1 * aet_sizes[(int)typ1];
  if (i1+n1 > x->a.a_dim
      || ((y->a.a_dim - i2) *aet_sizes[(int)typ2]) < nc)
    FEerror("Copy  out of bounds",0);
  bcopy(x->ust.ust_self + (i1*aet_sizes[(int)typ1]),
	y->ust.ust_self + (i2*aet_sizes[(int)typ2]),
	nc);
  return x;
}

/* X is the header of an array.  This supplies the body which
   will not be relocatable if STATICP.  If DFLT is 0, do not
   initialize (the caller promises to reset these before the
   next gc!).   If DFLT == Cnil then initialize to default type
   for this array type.   Otherwise DFLT is an object and its
   value is used to init the array */
   
void
array_allocself(object x, int staticp, object dflt)
{
	int n;
	void *(*fun)(size_t),*tmp_alloc;
	enum aelttype typ;
	fun = (staticp ? alloc_contblock : alloc_relblock);
	{  /* this must be called from within no interrupt code */
	n = x->a.a_dim;
	typ = Iarray_element_type(x);
	switch (typ) {
	case aet_object:
		x->a.a_self = AR_ALLOC(*fun,n,object);
		break;
	case aet_ch:
	case aet_char:
        case aet_uchar:
		x->st.st_self = AR_ALLOC(*fun,n,char);
		break;
        case aet_short:
        case aet_ushort:
		x->ust.ust_self = (unsigned char *) AR_ALLOC(*fun,n,short);
		break;
	case aet_bit:
		n = (n+W_SIZE-1)/W_SIZE;
		SET_BV_OFFSET(x,0);
	case aet_fix:
		x->fixa.fixa_self = AR_ALLOC(*fun,n,fixnum);
		break;
	case aet_sf:
		x->sfa.sfa_self = AR_ALLOC(*fun,n,shortfloat);
		break;
	case aet_lf:
		x->lfa.lfa_self = AR_ALLOC(*fun,n,longfloat);
		break;
	default:
	  break;
	}
	if(dflt!=0) gset(x->st.st_self,raw_aet_ptr(dflt,typ),n,typ);
      }
	
}

DEFUNO_NEW("FILL-POINTER-SET",object,fSfill_pointer_set,SI,2,2,
       NONE,OO,IO,OO,OO,void,siLfill_pointer_set,(object x,fixnum i),"")
{

    if (!(TS_MEMBER(type_of(x),TS(t_vector)|
		    TS(t_bitvector)|
		    TS(t_string))))
      goto no_fillp;
    if (x->v.v_hasfillp == 0)
      { goto no_fillp;}
    if (i < 0 || i > x->a.a_dim)
      { FEerror("~a is not suitable for a fill pointer for ~a",2,make_fixnum(i),x);}
    x->v.v_fillp = i;
    return make_fixnum(i);
  
  no_fillp:
	FEerror("~a does not have a fill pointer",1,x);

  return make_fixnum(0);
}

DEFUNO_NEW("FILL-POINTER",object,fLfill_pointer,LISP,1,1,NONE,OO,
       OO,OO,OO,void,Lfill_pointer,(object x),"")
{
  if (!(TS_MEMBER(type_of(x),TS(t_vector)|
		    TS(t_bitvector)|
		    TS(t_string))))
    goto no_fillp;
  if (x->v.v_hasfillp == 0)
    { goto no_fillp;}
  return make_fixnum(x->v.v_fillp) ;

 no_fillp:
  FEwrong_type_argument(sLvector,x);
  return make_fixnum(0);
} 

DEFUN_NEW("ARRAY-HAS-FILL-POINTER-P",object,
      fLarray_has_fill_pointer_p,LISP,1,1,NONE,OO,OO,OO,OO,(object x),"")
{
  if (TS_MEMBER(type_of(x),TS(t_vector)|
		    TS(t_bitvector)|
		    TS(t_string)))
    return (x->v.v_hasfillp == 0 ? Cnil : sLt);
  else
    if (TYPE_OF(x) == t_array)
      { return Cnil;}
  else IisArray(x);
  return Cnil;
}


	
/* DEFUN_NEW("MAKE-ARRAY-INTERNAL",object,fSmake_array_internal,SI,0,0,NONE,OO,OO,OO,OO)
 (element_type,adjustable,displaced_to,displaced_index_offset,static,initial_element,dimensions)
  object element_type,adjustable,displaced_to,displaced_index_offset,static,initial_element,dimensions;
     
*/

DEFUNO_NEW("ARRAY-ELEMENT-TYPE",object,fLarray_element_type,
       LISP,1,1,NONE,OO,OO,OO,OO,void,Larray_element_type,(object x),"")
{ enum aelttype t;
  t = Iarray_element_type(x);
  return * aet_types[(int)t].namep;
}

DEFUNO_NEW("ADJUSTABLE-ARRAY-P",object,fLadjustable_array_p,
       LISP,1,1,NONE,OO,OO,OO,OO,void,Ladjustable_array_p,(object x),"")
{ 
  IisArray(x);
  return sLt;
}

DEFUNO_NEW("DISPLACED-ARRAY-P",object,fSdisplaced_array_p,SI,1,
       1,NONE,OO,OO,OO,OO,void,siLdisplaced_array_p,(object x),"")
{ IisArray(x);
  return (x->a.a_displaced == Cnil ? Cnil : sLt);
}

DEFUNO_NEW("ARRAY-RANK",object,fLarray_rank,LISP,1,1,NONE,OO,OO,OO,
       OO,void,Larray_rank,(object x),"")
{ if (type_of(x) == t_array)
    return make_fixnum(x->a.a_rank);
  IisArray(x);
  return make_fixnum(1);
}

DEFUNO_NEW("ARRAY-DIMENSION",object,fLarray_dimension,LISP,2,2,
       NONE,OO,IO,OO,OO,void,Larray_dimension,(object x,fixnum i),"")
{ 
  if (type_of(x) == t_array)
   {  if ((unsigned int)i >= x->a.a_rank)
	FEerror("Index ~a out of bounds for array-dimension",1
		,make_fixnum(i));
      else { return make_fixnum(x->a.a_dims[i]);}}
   IisArray(x);
   return make_fixnum(x->v.v_dim);
}

static void
Icheck_displaced(object displaced_list, object ar, int dim)
{ 
  while (displaced_list!=Cnil)
    { object u = Mcar(displaced_list);
      if (u->a.a_self == NULL) continue;
      if ((Iarray_element_type(u) == aet_bit &&
	   (u->bv.bv_self - ar->bv.bv_self)*BV_BITS +u->bv.bv_dim -dim
	    + BV_OFFSET(u) - BV_OFFSET(ar) > 0)
	  || (ARRAY_BODY_PTR(u,u->a.a_dim) > ARRAY_BODY_PTR(ar,dim)))
	FEerror("Bad displacement",0);
      Icheck_displaced(DISPLACED_FROM(u),ar,dim);
      displaced_list = Mcdr(displaced_list);
    }
}

/*
 (setq a (make-array 2 :displaced-to (setq b (make-array 4 ))))
        {  A->displ = (B), B->displ=(nil A)}
(setq w (make-array 3))   ;; w->displaced= (nil y u) 
(setq y (make-array 2 :displaced-to  w))  ;; y->displaced=(w z z2)
(setq u (make-array 2 :displaced-to w))   ;; u->displaced = (w)
(setq z (make-array 2 :displaced-to y))   ;; z->displaced = (y)
(setq z2 (make-array 2 :displaced-to y))  ;; z2->displaced= (y)


  Destroy the displacement from AR
  
  */
/* static void */
/* Iundisplace(object ar) */
/* { object *p,x;  */
  
/*   if ((x = DISPLACED_TO(ar)) == Cnil || */
/*       ar->a.a_displaced->d.m == FREE) */
/*     return; */
/*   {BEGIN_NO_INTERRUPT; */
/*    DISPLACED_TO(ar) = Cnil; */
/*    p = &(DISPLACED_FROM(x)) ; */
   /* walk through the displaced from list and delete AR */
/*    while(1) */
/*      { if ((*p)->d.m == FREE */
/* 	   || *p == Cnil) */
/* 	goto retur; */
/* 	 if((Mcar(*p) == ar)) */
/* 	 { *p = Mcdr(*p); */
/* 	   goto retur;} */
/* 	 p = &(Mcdr(*p)); */
/*        } */
/*  retur: */
/*    END_NO_INTERRUPT; */
/*    return; */
/*  } */
/* } */

DEFUNO_NEW("REPLACE-ARRAY",object,fSreplace_array,SI,2,2,NONE,
       OO,OO,OO,OO,void,siLreplace_array,(object old,object new),"")
{ struct dummy fw ;
  fw = old->d;

  old = IisArray(old);
  
  if (TYPE_OF(old) != TYPE_OF(new)
      || (TYPE_OF(old) == t_array && old->a.a_rank != new->a.a_rank))
    { 
	FEerror("Cannot do array replacement ~a by ~a",2,old,new);
      }
  { int offset = new->ust.ust_self  - old->ust.ust_self;
    object displaced = make_cons(DISPLACED_TO(new),DISPLACED_FROM(old));
    Icheck_displaced(DISPLACED_FROM(old),old,new->a.a_dim);
    adjust_displaced(old,offset);
/*    Iundisplace(old); */
    if (TYPE_OF(old) == t_vector && old->v.v_hasfillp)
      { new->v.v_hasfillp = 1;
	new->v.v_fillp = old->v.v_fillp;}
    if (TYPE_OF(old) == t_string)
      old->st = new->st;
    else
      old->a = new ->a;
    
    /* prevent having two arrays with the same body--which are not related
       that would cause the gc to try to copy both arrays and there might
       not be enough space. */
    new->a.a_dim = 0;
    new->a.a_self = 0;
    old->d = fw;
    old->a.a_displaced = displaced;
  }
  return old;
}

DEFUN_NEW("ARRAY-TOTAL-SIZE",object,fLarray_total_size,LISP,1,1,
       NONE,OO,OO,OO,OO,(object x),"")
{ x = IisArray(x);
  return make_fixnum(x->a.a_dim);
}




DEFUN_NEW("ASET-BY-CURSOR",object,fSaset_by_cursor,SI,3,3,
       NONE,OO,OO,OO,OO,(object array,object val,object cursor),"")
{
	object x;
	int i;
	object ind[ARRAY_RANK_LIMIT];
	/* 3 args */
	ind[0]=array;
	if (cursor==sLnil) {fSaset1(array,0,val); RETURN1(array);}
	ind[1]=MMcar(cursor);
	ASSURE_TYPE(ind[1],t_fixnum);
	i = 2;
	for (x = MMcdr(cursor);  !endp(x);  x = MMcdr(x))
	  { ind[i++] = MMcar(x);}
	ind[i]=val;
	VFUN_NARGS=i+1;

	/* FIXME do this with C macros */
	switch(i+1){
	case 3:  (*fSaset)(ind[0],fix(ind[1]),ind[2]);break;
	case 4:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3]);break;
	case 5:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4]);break;
	case 6:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5]);break;
	case 7:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6]);break;
	case 8:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7]);break;
	case 9:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
			       ind[8]);break;
	case 10:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9]);break;
	case 11:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10]);break;
	case 12:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11]);break;
	case 13:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12]);break;
	case 14:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13]);break;
	case 15:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14]);break;
	case 16:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15]);break;
	case 17:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16]);break;
	case 18:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17]);break;
	case 19:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18]);break;
	case 20:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19]);break;
	case 21:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20]);break;
	case 22:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21]);break;
	case 23:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22]);break;
	case 24:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23]);break;
	case 25:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24]);break;
	case 26:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25]);break;
	case 27:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26]);break;
	case 28:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27]);break;
	case 29:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28]);break;
	case 30:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29]);break;
	case 31:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30]);break;
	case 32:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31]);break;
	case 33:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32]);break;
	case 34:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33]);break;
	case 35:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34]);break;
	case 36:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35]);break;
	case 37:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36]);break;
	case 38:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37]);break;
	case 39:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38]);break;
	case 40:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39]);break;
	case 41:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40]);break;
	case 42:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41]);break;
	case 43:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42]);break;
	case 44:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43]);break;
	case 45:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44]);break;
	case 46:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45]);break;
	case 47:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46]);break;
	case 48:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47]);break;
	case 49:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48]);break;
	case 50:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49]);break;
	case 51:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50]);break;
	case 52:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51]);break;
	case 53:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52]);break;
	case 54:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53]);break;
	case 55:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54]);break;
	case 56:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55]);break;
	case 57:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56]);break;
	case 58:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56],
				ind[57]);break;
	case 59:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56],
				ind[57],ind[58]);break;
	case 60:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56],
				ind[57],ind[58],ind[59]);break;
	case 61:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56],
				ind[57],ind[58],ind[59],ind[60]);break;
	case 62:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56],
				ind[57],ind[58],ind[59],ind[60],ind[61]);break;
	case 63:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56],
				ind[57],ind[58],ind[59],ind[60],ind[61],ind[62]);break;
	case 64:  (*fSaset)(ind[0],fix(ind[1]),ind[2],ind[3],ind[4],ind[5],ind[6],ind[7],
				ind[8],ind[9],ind[10],ind[11],ind[12],ind[13],ind[14],
				ind[15],ind[16],ind[17],ind[18],ind[19],ind[20],ind[21],
				ind[22],ind[23],ind[24],ind[25],ind[26],ind[27],ind[28],
				ind[29],ind[30],ind[31],ind[32],ind[33],ind[34],ind[35],
				ind[36],ind[37],ind[38],ind[39],ind[40],ind[41],ind[42],
				ind[43],ind[44],ind[45],ind[46],ind[47],ind[48],ind[49],
				ind[50],ind[51],ind[52],ind[53],ind[54],ind[55],ind[56],
				ind[57],ind[58],ind[59],ind[60],ind[61],ind[62],ind[63]);break;
	default: FEerror("Exceeded call-arguments-limit ",0);
	} 
	
	RETURN1(array);
}

void
gcl_init_array_function(void) {
  make_function("ARRAY-DISPLACEMENT", Larray_displacement);
}
     



