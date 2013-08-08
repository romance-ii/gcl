#include "include.h"

DEFUN("SHARP-EQ-READER",object,fSsharp_eq_reader,SI,3,3,NONE,OO,OO,OO,OO,(object s,object ch,object ind),"") {

  object x,res;

  if (READsuppress) return Cnil;
  if (ind==Cnil) FEerror("The #= readmacro requires an argument.", 0);
  for (x=sSAsharp_eq_contextA->s.s_dbind;type_of(x)==t_cons && !(eql(x->c.c_car->c.c_car,ind));x=x->c.c_cdr);
  if (x!=Cnil) FEerror("Duplicate definitions for #~D=.",1,ind);
  x=x->c.c_car;
  sSAsharp_eq_contextA->s.s_dbind=MMcons((x=MMcons(ind,MMcons(Cnil,OBJNULL))),sSAsharp_eq_contextA->s.s_dbind);
  res=x->c.c_cdr->c.c_car=read_object(s);
  if (res==x->c.c_cdr->c.c_cdr)
    FEerror("#~D# is defined by itself.",1,x->c.c_car);
  return res;
}

DEFUN("SHARP-SHARP-READER",object,fSsharp_sharp_reader,SI,3,3,NONE,OO,OO,OO,OO,(object s,object ch,object ind),"") {

  object x;

  if (READsuppress) return Cnil;
  if (ind==Cnil) FEerror("The ## readmacro requires an argument.", 0);
  for (x=sSAsharp_eq_contextA->s.s_dbind;type_of(x)==t_cons && !(eql(x->c.c_car->c.c_car,ind));x=x->c.c_cdr);
  if (x==Cnil) FEerror("#~D# is undefined.",1,ind);
  x=x->c.c_car;
  if (x->c.c_cdr->c.c_cdr==OBJNULL)
    x->c.c_cdr->c.c_cdr=alloc_object(t_spice);
  return x->c.c_cdr->c.c_cdr;
}


DEFUN("PATCH-SHARP",object,fSpatch_sharp,SI,1,1,NONE,OO,OO,OO,OO,(object x),"") {

  int i,j;
  object y,p;
  
  switch (type_of(x)) {

  case t_spice:
    for (y=sSAsharp_eq_contextA->s.s_dbind;type_of(y)==t_cons && y->c.c_car->c.c_cdr->c.c_cdr!=x;y=y->c.c_cdr);
    return y->c.c_car->c.c_cdr->c.c_car;
    break;

  case t_cons:
    y=x;
    do {
      y->c.c_car=FFN(fSpatch_sharp)(y->c.c_car);
      p=y;
      y=y->c.c_cdr;
    } while (type_of(y)==t_cons);
    p->c.c_cdr=FFN(fSpatch_sharp)(p->c.c_cdr);
    break;
    
  case t_vector:
    if ((enum aelttype)x->v.v_elttype==aet_object)
      for (i=0;i<x->v.v_fillp;i++)
	x->v.v_self[i]=FFN(fSpatch_sharp)(x->v.v_self[i]);
    break;

  case t_array:
    if ((enum aelttype)x->a.a_elttype==aet_object) {
      for (i=0,j=1;i<x->a.a_rank;i++)
	j*=x->a.a_dims[i];
      for (i=0;i<j;i++)
	x->a.a_self[i]=FFN(fSpatch_sharp)(x->a.a_self[i]);
    }
    break;

  case t_structure:
    y=x->str.str_def;
    i=S_DATA(y)->length;
    while (i-->0)
      structure_set(x,y,i,FFN(fSpatch_sharp)(structure_ref(x,y,i)));
    break;
    
  default:
    break;

  }

  return(x);

}

DEFUN("TP0",fixnum,fStp0,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp0(x);}
DEFUN("TP1",fixnum,fStp1,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp1(x);}
DEFUN("TP2",fixnum,fStp2,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp2(x);}
DEFUN("TP3",fixnum,fStp3,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp3(x);}
DEFUN("TP4",fixnum,fStp4,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp4(x);}
DEFUN("TP5",fixnum,fStp5,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp5(x);}
DEFUN("TP6",fixnum,fStp6,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp6(x);}
DEFUN("TP7",fixnum,fStp7,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp7(x);}
DEFUN("TP8",fixnum,fStp8,SI,1,1,NONE,IO,OO,OO,OO,(object x),"") {return tp8(x);}

DEFUN("C-OBJECT-==",object,fSc_object_eq,SI,2,2,NONE,OO,OO,OO,OO,(object x,object y),"") {
  RETURN1(x==y?Ct:Cnil);
}
DEFUN("C-FIXNUM-==",object,fSc_fixnum_eq,SI,2,2,NONE,OI,IO,OO,OO,(fixnum x,fixnum y),"") {
  RETURN1(x==y?Ct:Cnil);
}
DEFUN("C-FLOAT-==",object,fSc_float_eq,SI,2,2,NONE,OO,OO,OO,OO,(object x,object y),"") {
  check_type(x,t_shortfloat);
  check_type(y,t_shortfloat);
  RETURN1(sf(x)==sf(y)?Ct:Cnil);
}
DEFUN("C-DOUBLE-==",object,fSc_double_eq,SI,2,2,NONE,OO,OO,OO,OO,(object x,object y),"") {
  check_type(x,t_longfloat);
  check_type(y,t_longfloat);
  RETURN1(lf(x)==lf(y)?Ct:Cnil);
}
DEFUN("C-FCOMPLEX-==",object,fSc_fcomplex_eq,SI,2,2,NONE,OO,OO,OO,OO,(object x,object y),"") {
  check_type(x,t_complex);
  check_type(y,t_complex);
  check_type(x->cmp.cmp_real,t_shortfloat);
  check_type(y->cmp.cmp_real,t_shortfloat);
  RETURN1(sfc(x)==sfc(y)?Ct:Cnil);
}
DEFUN("C-DCOMPLEX-==",object,fSc_dcomplex_eq,SI,2,2,NONE,OO,OO,OO,OO,(object x,object y),"") {
  check_type(x,t_complex);
  check_type(y,t_complex);
  check_type(x->cmp.cmp_real,t_longfloat);
  check_type(y->cmp.cmp_real,t_longfloat);
  RETURN1(lfc(x)==lfc(y)?Ct:Cnil);
}

DEFUN("C+",fixnum,fScp,SI,2,2,NONE,II,IO,OO,OO,(fixnum x,fixnum y),"") {
  RETURN1(x+y);
}
DEFUN("&",fixnum,fSand,SI,2,2,NONE,II,IO,OO,OO,(fixnum x,fixnum y),"") {
  RETURN1(x&y);
}
DEFUN("|",fixnum,fSor,SI,2,2,NONE,II,IO,OO,OO,(fixnum x,fixnum y),"") {
  RETURN1(x|y);
}
DEFUN("^",fixnum,fSxor,SI,2,2,NONE,II,IO,OO,OO,(fixnum x,fixnum y),"") {
  RETURN1(x^y);
}
DEFUN("~",fixnum,fSnot,SI,1,1,NONE,II,OO,OO,OO,(fixnum x),"") {
  RETURN1(~x);
}
DEFUN("<<",fixnum,fSlshft,SI,2,2,NONE,II,IO,OO,OO,(fixnum x,fixnum y),"") {
  RETURN1(x<<y);
}
DEFUN(">>",fixnum,fSrshft,SI,2,2,NONE,II,IO,OO,OO,(fixnum x,fixnum y),"") {
  RETURN1(x>>y);
}


#ifndef NO_BOOT_H
#include "boot.h"
#endif
