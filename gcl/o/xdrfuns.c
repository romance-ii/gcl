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

*/

#ifdef HAVE_XDR

#ifdef AIX3
#include <sys/select.h>
#endif
#include <rpc/rpc.h>

extern short aet_sizes[];
static object
FFN(siGxdr_open)(f)
     object f;
{ XDR *xdrs;
  object ar= alloc_simple_string(sizeof(XDR));
  array_allocself(ar,1,0);
  xdrs= (XDR *) ar->a.a_self;
  if (f->sm.sm_fp == 0) FEerror("stream not ok for xdr io",0);
  xdrstdio_create(xdrs, f->sm.sm_fp,
		  (f->sm.sm_mode == smm_input ?  XDR_DECODE :
		   f->sm.sm_mode == smm_output ?  XDR_ENCODE :
		   (FEerror("stream not input or output",0),XDR_ENCODE)))
		   ;
  return ar;
}

static object
FFN(siGxdr_write)(object str,object elt) {

  XDR *xdrp= (XDR *) str->ust.ust_self;
  xdrproc_t e;

  switch (type_of(elt)) {
  case t_fixnum:
    if(!xdr_long(xdrp,&fix(elt))) goto error;
    break;
  case t_longfloat:
    if(!xdr_double(xdrp,&lf(elt))) goto error;
    break;
  case t_shortfloat:
    if(!xdr_float(xdrp,&sf(elt))) goto error;
    break;
  case t_vector:
    
    switch(elt->v.v_elttype) {
    case aet_lf:
      e=(xdrproc_t)xdr_double;
      break;
    case aet_sf:
      e=(xdrproc_t)xdr_float;
      break;
    case aet_fix:
      e=(xdrproc_t)xdr_long;
      break;
    case aet_short:
      e=(xdrproc_t)xdr_short;
      break;
    default:
      FEerror("unsupported xdr size",0);
      goto error;
      break;
    }
    if(!xdr_array(xdrp,(char **)&elt->v.v_self,
		  &elt->v.v_fillp,
		  elt->v.v_dim,
		  aet_sizes[elt->v.v_elttype],
		  e))
      goto error;
    break;
  default:
    FEerror("unsupported xdr ~a",1,elt);
    break;
  }
  return elt;
 error:
  FEerror("bad xdr read",0);
  return elt;
}

static object
FFN(siGxdr_read)(object str,object elt) {

  XDR *xdrp= (XDR *) str->ust.ust_self;
  xdrproc_t e;

  switch (type_of(elt)) { 
  case t_fixnum:
    {fixnum l;
    if(!xdr_long(xdrp,&l)) goto error;
    return make_fixnum(l);}
    break;
  case t_longfloat:
    {double x;
    if(!xdr_double(xdrp,&x)) goto error;
    return make_longfloat(x);}
  case t_shortfloat:
    {float x;
    if(!xdr_float(xdrp,&x)) goto error;
    return make_shortfloat(x);}
  case t_vector:
    switch(elt->v.v_elttype) {
    case aet_lf:
      e=(xdrproc_t)xdr_double;
      break;
    case aet_sf:
      e=(xdrproc_t)xdr_float;
      break;
    case aet_fix:
      e=(xdrproc_t)xdr_long;
      break;
    case aet_short:
      e=(xdrproc_t)xdr_short;
      break;
    default:
      FEerror("unsupported xdr size",0);
      goto error;
      break;
    }

    if(!xdr_array(xdrp,(char **)&elt->v.v_self,
		  &elt->v.v_fillp,
		  elt->v.v_dim,
		  aet_sizes[elt->v.v_elttype],
		  e))
      goto error;
    return elt;
    break;
  default:
    FEerror("unsupported xdr ~a",1,elt);
    return elt;
    break;
  }
 error:
  FEerror("bad xdr read",0);
  return elt;
}
static void
gcl_init_xdrfuns()
{ make_si_sfun("XDR-WRITE",siGxdr_write,
	       ARGTYPE2(f_object,f_object)|RESTYPE(f_object));

  make_si_sfun("XDR-READ",siGxdr_read,
	       ARGTYPE2(f_object,f_object)|RESTYPE(f_object));
  make_si_sfun("XDR-OPEN",siGxdr_open,
	       ARGTYPE1(f_object)|RESTYPE(f_object));
  
}
#else
static void gcl_init_xdrfuns(void) {;}
#endif     
