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

#include "include.h"


#define ARRAY_DIMENSION_LIMIT MOST_POSITIVE_FIXNUM

DEFCONST("ARRAY-RANK-LIMIT", sLarray_rank_limit, LISP,
	 make_fixnum(ARRAY_RANK_LIMIT),"");

DEFCONST("ARRAY-DIMENSION-LIMIT", sLarray_dimension_limit,
	 LISP, make_fixnum(MOST_POSITIVE_FIX),"");
DEFCONST("ARRAY-TOTAL-SIZE-LIMIT", sLarray_total_size_limit,
	 LISP, sLarray_dimension_limit,"");

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

DEFUNO("AREF", object, fLaref, LISP, 1, ARRAY_RANK_LIMIT,
       NONE, OO, II, II, II,Laref,"")
(x, i, va_alist)
  object x;
  int i;
  va_dcl
{ int n = VFUN_NARGS;
  int i1;
  va_list ap;
  if (type_of(x) == t_array)
    {int m ;
     unsigned int k;
     int rank = n - 1; 
     if (x->a.a_rank != rank)
       FEerror(" ~a has wrong rank",1,x);
     if (rank == 1) return fSaref1(x,i);
     if (rank == 0) return fSaref1(x,0);
     va_start(ap);
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
	       { k = va_arg(ap,int);}
	     else {object x = va_arg(ap,object);
		   check_type(x,t_fixnum);
		   k = Mfix(x);}
	  
	   }
	 else break;}
     va_end(ap);
     return fSaref1(x,i1);
   }
  if (n > 2)
    { FEerror("Too many args (~a) to aref",1,make_fixnum(n));}
  return fSaref1(x,i);

}

int
fScheck_bounds_bounds(x, i)
  object x;
  int i;
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

DEFUN("SVREF", object, fLsvref, LISP, 2, 2,
      ONE_VAL, OO, IO, OO,OO,
      "For array X and index I it returns (aref x i) ")
     (x, i)
     object x;
     unsigned int i;
{
 if (type_of(x)==t_vector
     && (enum aelttype)x->v.v_elttype == aet_object
     && x->v.v_dim > i)
   RETURN1(x->v.v_self[i]);
 if (x->v.v_dim > i) illegal_index(x,make_fixnum(i));
 FEerror("Bad simple vector ~a",1,x);
}
    
DEFUN("AREF1", object, fSaref1, SI, 2, 2,
      NONE, OO, IO, OO,OO,
      "For array X and index I it returns (aref x i) as if x were \
1 dimensional, even though its rank may be bigger than 1")
(x, i)
  object x;
  int i;
{
  switch (type_of(x)) {
  case t_array:
  case t_vector:
  case t_bitvector:
    if (x->v.v_dim <= (unsigned int)i)
      i = fScheck_bounds_bounds(x, i);
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
      return make_longfloat(x->sfa.sfa_self[i]);
    case aet_lf:
      return make_longfloat(x->lfa.lfa_self[i]);
    case aet_char:
      return make_fixnum(x->st.st_self[i]);
    case aet_uchar:
      return make_fixnum(x->ust.ust_self[i]);
    case aet_short:
      return make_fixnum(SHORT(x, i));
    case aet_ushort:
      return make_fixnum(USHORT(x, i));

    default:
      FEerror("unknown array type",0);
    }
  case t_string:
    if (x->v.v_dim <= i)
      i = fScheck_bounds_bounds(x, i);
    return code_char(x->st.st_self[i]);
  default:
    FEerror("not an array",0);

    ;
  }
}

DEFUN("ASET1", object, fSaset1, SI, 3, 3, NONE, OO, IO, OO,OO,"")
(x, i,val)
  object x;
  int i;
  object val;
{
  switch (type_of(x)) {
  case t_array:
  case t_vector:
  case t_bitvector:
    if (x->v.v_dim <= i)
      i = fScheck_bounds_bounds(x, i);
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
      SHORT(x, i) = Mfix(val);
      break;
    case aet_ushort:
      ASSURE_TYPE(val,t_fixnum);
      USHORT(x, i) = Mfix(val);
      break;
    default:
      FEerror("unknown array type",0);
    }
    break;
  case t_string:
    if (x->v.v_dim <= i)
      i = fScheck_bounds_bounds(x, i);
    ASSURE_TYPE(val,t_character);
    x->st.st_self[i] = char_code(val);
    break;
  default:
    FEerror("not an array",0);
  }
  return val;
}

DEFUNO("ASET", object, fSaset, SI, 1, ARG_LIMIT, NONE, OO,
       OO, OO, OO,siLaset,"")
 (x,ii,y, va_alist)
  object x,y;
  object ii;
  va_dcl
{ int i1;
  int n = VFUN_NARGS;
  int i;
  va_list ap;
  if (type_of(x) == t_array)
    {int m ;
     unsigned int k;
     int rank = n - 2; 
     if (x->a.a_rank != rank)
       FEerror(" ~a has wrong rank",1,x);
     if (rank == 0) return fSaset1(x,0,ii);
     ASSURE_TYPE(ii,t_fixnum);
     i = fix(ii);
     if (rank == 1)
       return fSaset1(x,i,y);
     va_start(ap);
     m = 0;
     k = i;
     /* index into 1 dimensional array body */
     i1 = 0;
     rank-- ;
     while(1) 
       {
	 if (k >= x->a.a_dims[m])
	   FEerror("Index number  ~a: ~a to array is out of bounds",
		   2,make_fixnum (m),make_fixnum(k));
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
   }
  else 
    { ASSURE_TYPE(ii,t_fixnum);
     i1 = fix(ii);
      }
  return fSaset1(x,i1,y);
   
}

DEFUNO("SVSET", object, fSsvset, SI, 3, 3, NONE, OO, IO, OO,
       OO,siLsvset,"")
     (x,i,val)
     object x,val;
     int i;
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


DEFUN("MAKE-VECTOR1",object,fSmake_vector1,SI,3,8,NONE,OI,
      IO,OO,OO,"")
  (n,elt_type,staticp,va_alist)
int n;int elt_type;object staticp;va_dcl 
{ 
    int  displaced_index_offset;
    int Inargs = VFUN_NARGS - 3;
    va_list Iap;object fillp;object initial_element;object displaced_to;object V9;
    object V10,V11,V12,V13,V14;
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
	va_start(Iap);
	fillp=va_arg(Iap,object);
	if (fillp == Cnil)
	  {x->v.v_hasfillp = 0;
	   x->v.v_fillp = n;
	 }
	else 
	  if(type_of(fillp) == t_fixnum)
	  {	
	    x->v.v_fillp = Mfix(fillp);
	    if (x->v.v_fillp > n) FEerror("bad fillp",0);
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
static int DFLT_aet_fix = 0  ;		
static short DFLT_aet_short = 0;
static shortfloat DFLT_aet_sf = 0.0;
static longfloat DFLT_aet_lf = 0.0;	
static object Iname_t = sLt;
static struct { char * dflt; object *namep;} aet_types[] =
{   (char *)	&DFLT_aet_object,	&Iname_t,	/*  t  */
    (char *)	&DFLT_aet_ch, &sLstring_char,/*  string-char  */
    (char *)	&DFLT_aet_fix, &sLbit,		/*  bit  */
    (char *)	&DFLT_aet_fix,	&sLfixnum, 	/*  fixnum  */
    (char *)	&DFLT_aet_sf, &sLshort_float,			/*  short-float  */
    (char *)	&DFLT_aet_lf, &sLlong_float,	/*  long-float  */
    (char *)	&DFLT_aet_char,&sLsigned_char,               /* signed char */
    (char *)    &DFLT_aet_char,&sLunsigned_char,               /* unsigned char */
    (char *)	&DFLT_aet_short,&sLsigned_short,              /* signed short */
    (char *)	&DFLT_aet_short, &sLunsigned_short    /*  unsigned short   */
	};

DEFUN("GET-AELTTYPE",enum aelttype,fSget_aelttype,SI,1,1,NONE,IO,OO,OO,OO,"")
     (x)
object x;
{ int i;
  for (i=0 ; i <   aet_last ; i++)
    if (x == * aet_types[i].namep)
      return (enum aelttype) i;
  if (x == sLlong_float || x == sLsingle_float || x == sLdouble_float)
    return aet_lf;
  return aet_object;
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
DEFUNO("MAKE-VECTOR",object,fSmake_vector,SI,7,8,NONE,
       OO,OO,OO,OO,siLmake_vector,"")(x0,x1,x2,x3,x4,x5,x6,va_alist)
object x0,x1,x2,x3,x4,x5,x6;
va_dcl
{int narg=VFUN_NARGS;
 object initial_elt;
 va_list ap;
 object x;
 {va_start(ap);
 if (narg>=8) initial_elt=va_arg(ap,object);else goto LDEFAULT8;
 goto LEND_VARARG;
 LDEFAULT8: initial_elt = Cnil ;
 LEND_VARARG: va_end(ap);}

  /* 8 args */

  VFUN_NARGS = 8;
  x = fSmake_vector1(Mfix(x1),  /* n */
		     fSget_aelttype(x0), /*aelt type */
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

DEFUN("MAKE-ARRAY1",object,fSmake_array1,SI,6,6,
      NONE,OI,OO,OI,OO,"")
  (elt_type,staticp,initial_element,displaced_to, displaced_index_offset,
   dimensions)
 int elt_type;
 object staticp,initial_element,displaced_to;
 int displaced_index_offset;
 object dimensions;
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

/*  DEFUNO("ARRAY-DISPLACEMENT1",object,fSarray_displacement,SI,1,1, */
/*        NONE,OO,OO,OO,OO,siLarray_displacement,"") */
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

void
Larray_displacement(void) {

  object array,a;
  int s,n;

  BEGIN_NO_INTERRUPT;

  n = vs_top - vs_base;
  if (n != 1)
    FEerror("Wrong number of arguments",0);
  array = vs_base[0];
  vs_base=vs_top;

  if (type_of(array)!=t_array && type_of(array)!=t_vector)
    FEerror("Argument is not an array",0);
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

displace(from_array,dest_array,offset)
     object from_array,dest_array;
     int offset;
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
    


enum aelttype
Iarray_element_type(x)
     object x;
{enum aelttype t;
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

Idisplace_array(from,to,displaced_index_offset)
     object from,to;
     int displaced_index_offset;
{
  enum aelttype t1,t2;
  object tail;
  t1 = Iarray_element_type(from);
  t2 = Iarray_element_type(to);
  if (t1 != t2)
    FEerror("Attempt to displace arrays of one type to arrays of another type",0);
  if (to->a.a_dim > from->a.a_dim - displaced_index_offset)
    FEerror("To array not large enough for displacement",0);
  {BEGIN_NO_INTERRUPT;
   from->a.a_displaced = make_cons(to,Cnil);
   if (to->a.a_displaced == Cnil)
     to->a.a_displaced = make_cons(Cnil,Cnil);
   DISPLACED_FROM(to) = make_cons(from,DISPLACED_FROM(to));
       
   if (t1 == aet_bit) {
     displaced_index_offset += BV_OFFSET(to);
     from->bv.bv_self = to->bv.bv_self + displaced_index_offset/BV_BITS;
     SET_BV_OFFSET(from, displaced_index_offset%BV_BITS);
   }
   else
     from->st.st_self = ARRAY_BODY_PTR(to,displaced_index_offset);
   END_NO_INTERRUPT;
 }

}

/* add diff to body of x and arrays diisplaced to it */

adjust_displaced(x, diff)
object x;
int diff;
{
	if (x->ust.ust_self != NULL)
		x->ust.ust_self = (char *)((int)(x->a.a_self) + diff);
	for (x = Mcdr(x->ust.ust_displaced);  x != Cnil;  x = Mcdr(x))
		adjust_displaced(Mcar(x), diff);
}




   /* RAW_AET_PTR returns a pointer to something of raw type obtained from X
      suitable for using GSET for an array of elt type TYP.
      If x is the null pointer, return a default for that array element
      type.
      */

char *
raw_aet_ptr(x,typ)
     short typ;
     object x;
{  /* doubles are the largest raw type */
  static double u;
  if (x==Cnil) return aet_types[typ].dflt;
  switch (typ){
#define STORE_TYPED(pl,type,val) *((type *) pl) = (type) val; break;
  case aet_object: STORE_TYPED(&u,object,x);
  case aet_ch:     STORE_TYPED(&u,char, char_code(x));
  case aet_bit:    STORE_TYPED(&u,fixnum, -Mfix(x));
  case aet_fix:    STORE_TYPED(&u,fixnum, Mfix(x));
  case aet_sf:     STORE_TYPED(&u,shortfloat, Msf(x));
  case aet_lf:     STORE_TYPED(&u,longfloat, Mlf(x));
  case aet_char:   STORE_TYPED(&u, char, Mfix(x));
  case aet_uchar:  STORE_TYPED(&u, unsigned char, Mfix(x));
  case aet_short:  STORE_TYPED(&u, short, Mfix(x));
  case aet_ushort: STORE_TYPED(&u,unsigned short,Mfix(x));
  default: FEerror("bad elttype",0);
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

gset(p1,val,n,typ)
     char *p1,*val;
     int n;
     int typ;
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

DEFUN("COPY-ARRAY-PORTION",object,fScopy_array_portion,SI,4,
      5,NONE,OO,OI,II,OO,
   "Copy elements from X to Y starting at x[i1] to x[i2] and doing N1 \
elements if N1 is supplied otherwise, doing the length of X - I1 \
elements.  If the types of the arrays are not the same, this has \
implementation dependent results.")
     (x,y,i1,i2,n1)
     object x,y; int i1,i2,n1;
{ enum aelttype typ1=Iarray_element_type(x);
  enum aelttype typ2=Iarray_element_type(y);
  int nc;
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
	       { fSaset1(y,i2+n1-rest,(fSaref1(x,i1+n1-rest)));
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
   
array_allocself(x, staticp, dflt)
object x,dflt;
int staticp;
{
	int i, d,n;
	char *(*fun)(),*tmp_alloc;
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
	}
	if(dflt!=0) gset(x->st.st_self,raw_aet_ptr(dflt,typ),n,typ);
      }
	
}

DEFUNO("FILL-POINTER-SET",int,fSfill_pointer_set,SI,2,2,
       NONE,IO,IO,OO,OO,siLfill_pointer_set,"")
     (x,i)
     object x;
     int i;
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
    return i;
  
  no_fillp:
	FEerror("~a does not have a fill pointer",1,x);

  return 0;
}

DEFUNO("FILL-POINTER",int,fLfill_pointer,LISP,1,1,NONE,IO,
       OO,OO,OO,Lfill_pointer,"")
     (x)
     object x;
{
  if (!(TS_MEMBER(type_of(x),TS(t_vector)|
		    TS(t_bitvector)|
		    TS(t_string))))
    goto no_fillp;
  if (x->v.v_hasfillp == 0)
    { goto no_fillp;}
  return x->v.v_fillp ;

 no_fillp:
  FEerror("~a does not have a fill pointer",1,x);
  return 0;
} 

DEFUN("ARRAY-HAS-FILL-POINTER-P",object,
      fLarray_has_fill_pointer_p,LISP,1,1,NONE,OO,OO,OO,OO,"")
     (x)
     object x;
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


	
/* DEFUN("MAKE-ARRAY-INTERNAL",object,fSmake_array_internal,SI,0,0,NONE,OO,OO,OO,OO)
 (element_type,adjustable,displaced_to,displaced_index_offset,static,initial_element,dimensions)
  object element_type,adjustable,displaced_to,displaced_index_offset,static,initial_element,dimensions;
     
*/

DEFUNO("ARRAY-ELEMENT-TYPE",object,fLarray_element_type,
       LISP,1,1,NONE,OO,OO,OO,OO,Larray_element_type,"")
     (x)
     object x;
{ enum aelttype t;
  t = Iarray_element_type(x);
  return * aet_types[(int)t].namep;
}

DEFUNO("ADJUSTABLE-ARRAY-P",object,fLadjustable_array_p,
       LISP,1,1,NONE,OO,OO,OO,OO,Ladjustable_array_p,"")
     (x)
     object x;
{ return sLt;
}

DEFUNO("DISPLACED-ARRAY-P",object,fSdisplaced_array_p,SI,1,
       1,NONE,OO,OO,OO,OO,siLdisplaced_array_p,"")
     (x)
     object x;
{ IisArray(x);
  return (x->a.a_displaced == Cnil ? Cnil : sLt);
}

DEFUNO("ARRAY-RANK",int,fLarray_rank,LISP,1,1,NONE,IO,OO,OO,
       OO,Larray_rank,"")
     (x)
     object x;
{ if (type_of(x) == t_array)
    return x->a.a_rank;
  IisArray(x);
  return 1;
}

DEFUNO("ARRAY-DIMENSION",int,fLarray_dimension,LISP,2,2,
       NONE,IO,IO,OO,OO,Larray_dimension,"")
     (x,i)
     object x; int i;
{ 
  if (type_of(x) == t_array)
   {  if ((unsigned int)i >= x->a.a_rank)
	FEerror("Index ~a out of bounds for array-dimension",1
		,make_fixnum(i));
      else { return x->a.a_dims[i];}}
   IisArray(x);
   return x->v.v_dim;
}

Icheck_displaced(displaced_list,ar,dim)
     object displaced_list,ar;
     int dim;
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
Iundisplace(ar)
object ar;
{ object *p,x; 
  
  if ((x = DISPLACED_TO(ar)) == Cnil ||
      ar->a.a_displaced->d.m == FREE)
    return;
  {BEGIN_NO_INTERRUPT;
   DISPLACED_TO(ar) = Cnil;
   p = &(DISPLACED_FROM(x)) ;
   /* walk through the displaced from list and delete AR */
   while(1)
     { if ((*p)->d.m == FREE
	   || *p == Cnil)
	goto retur;
	 if((Mcar(*p) == ar))
	 { *p = Mcdr(*p);
	   goto retur;}
	 p = &(Mcdr(*p));
       }
 retur:
   END_NO_INTERRUPT;
   return;
 }
}

DEFUNO("REPLACE-ARRAY",object,fSreplace_array,SI,2,2,NONE,
       OO,OO,OO,OO,siLreplace_array,"")
 (old,new)
     object old,new;
{ struct dummy fw ;
  fw = old->d;

  old = IisArray(old);
  
  if (TYPE_OF(old) != TYPE_OF(new)
      || (TYPE_OF(old) == t_array && old->a.a_rank != new->a.a_rank))
    { FAIL:
	FEerror("Cannot do array replacement ~a by ~a",2,old,new);
      }
  { int offset = new->ust.ust_self  - old->ust.ust_self;
    object old_list = DISPLACED_FROM(old);
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

DEFUNO("ARRAY-TOTAL-SIZE",int,fLarray_total_size,LISP,1,1,
       NONE,IO,OO,OO,OO,Larray_total_size,"")
     (x)
     object x;
{ x = IisArray(x);
  return x->a.a_dim;
}


DEFUNO("ASET-BY-CURSOR",object,fSaset_by_cursor,SI,3,3,
       NONE,OO,OO,OO,OO,siLaset_by_cursor,"")(array,val,cursor)
object array,val,cursor;
{
 	object endp_temp;
	object x;
	int i;
	object ind[ARRAY_RANK_LIMIT];
	/* 3 args */
	ind[0]=array;
	if (cursor==sLnil) {fSaset1(array,0,val); RETURN1(array);}
	ind[1]=MMcar(cursor);
	i = 2;
	for (x = MMcdr(cursor);  !endp(x);  x = MMcdr(x))
	  { ind[i++] = MMcar(x);}
	ind[i]=val;
	VFUN_NARGS=i+1;
	c_apply_n(fSaset,i+1,ind);
	RETURN1(array);
}

void
init_array_function(void) {
  make_function("ARRAY-DISPLACEMENT", Larray_displacement);
}
     



