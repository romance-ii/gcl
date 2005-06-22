/*  Copyright William Schelter. All rights reserved.
Fast linking method for kcl by W. Schelter University of Texas
   Note there are also changes to 
 cmpcall.lsp and cmptop.lsp */


#include <stdlib.h>
#include <string.h>
#include "include.h"
#include "sfun_argd.h"
#include "page.h"

#if 0
#define DO_FUNLINK_DEBUG
#endif

#ifdef DO_FUNLINK_DEBUG
void print_lisp_string ( char *boilerplate, object s )
{
    if ( s && s->st.s_fillp && s->st.st_self ) {
        int last = s->st.s_fillp;
        int i;
        fprintf ( stderr, "%s", boilerplate ); 
        for (i = 0;  (i < last) && (i < 30);  i++) {
            fputc ( s->st.st_self[i], stderr );
        }
        fputc ( '\n', stderr );
    } else {
        fprintf ( stderr, "Object %x not a string or empty\n", s );
    }
}
#endif

static int
clean_link_array(object *,object *);

object sScdefn;
typedef object (*object_func)();

static int     
vpush_extend(void *,object);

object sLAlink_arrayA;
int Rset = 0;

void
call_or_link(object sym,int setf,void **link) {

  object fun = setf ? get(sym,sSsetf_function,OBJNULL) : sym->s.s_gfdef;
#ifdef DO_FUNLINK_DEBUG
  fprintf ( stderr, "call_or_link: fun %x START for function ", fun );
  print_lisp_string ( "name: ", fun->cf.cf_name );
#endif 
  if (fun == OBJNULL || sym->s.s_sfdef != NOT_SPECIAL || sym->s.s_mflag) {
    FEinvalid_function(sym);
#ifdef DO_FUNLINK_DEBUG
    fprintf ( stderr, "call_or_link: fun %x Invalid function EXIT\n", fun );
#endif 
    return;
  }

  if ( type_of ( fun ) == t_cclosure && (fun->cc.cc_turbo) ) {
    if ( Rset ==0 ) {
      MMccall ( fun, fun->cc.cc_turbo );
    } else {
      (*(fun)->cf.cf_self)(fun->cc.cc_turbo);
    }
#ifdef DO_FUNLINK_DEBUG
    fprintf ( stderr, "call_or_link: fun %x EXIT POINT 1 closure and turbo branch\n", fun );
#endif 
    return;
  }
  if ( Rset == 0 ) {
    funcall(fun);
  } else {
    if ( type_of(fun) == t_cfun ) {
      (void) vpush_extend ( link,sLAlink_arrayA->s.s_dbind );
      (void) vpush_extend ( *link,sLAlink_arrayA->s.s_dbind );	 
      *link = (void *) (fun->cf.cf_self);
#ifdef DO_FUNLINK_DEBUG
      fprintf ( stderr, "call_or_link: fun %x, fun->cf %x (cf_name %x, cf_data %x, cf_self %x), ",
		fun, fun->cf, fun->cf.cf_name, fun->cf.cf_data, fun->cf.cf_self );
      fflush ( stderr );
      print_lisp_string ( "name: ", fun->cf.cf_name );
      fflush ( stderr );
#endif         
      ( *(void (*)()) (fun->cf.cf_self)) ();
    } else {
      funcall(fun);
    }
  }
#ifdef DO_FUNLINK_DEBUG
  fprintf ( stderr, "call_or_link: fun %x EXIT POINT 2\n", fun );
#endif 
  
}


void
call_or_link_closure ( object sym, int setf, void **link, void **ptr )
{
    object fun = setf ? get(sym,sSsetf_function,OBJNULL) : sym->s.s_gfdef;
#ifdef DO_FUNLINK_DEBUG
    fprintf ( stderr, "call_or_link_closure: START sym %x, link %x, *link %x, ptr %x, *ptr %x, sym->s.s_gfdef (fun) %x ",
              sym, link, *link, ptr, *ptr, fun );
    print_lisp_string ( "Function name: ", fun->cf.cf_name );
#endif 
    if (fun == OBJNULL || sym->s.s_sfdef != NOT_SPECIAL || sym->s.s_mflag) {
#ifdef DO_FUNLINK_DEBUG
        fprintf ( stderr, "call_or_link_closure: fun %x ERROR END\n", fun );
#endif 
        FEinvalid_function(sym);
        return;
    }
    if ( type_of ( fun ) == t_cclosure && ( fun->cc.cc_turbo ) ) {
        if ( Rset ) {
            (void) vpush_extend ( link, sLAlink_arrayA->s.s_dbind );
            (void) vpush_extend ( *link, sLAlink_arrayA->s.s_dbind );
#ifdef DO_FUNLINK_DEBUG
	    fprintf ( stderr, "call_or_link_closure: About to change %x to %x at ptr %x, %x to %x at %x, then MMccall fun (after t_cclosure vpush_extend)", *ptr, fun->cc.cc_turbo, ptr, *link, fun->cf.cf_self, link );
            print_lisp_string ( ": ", fun->cf.cf_name );
#endif 
            *ptr = (void *) ( fun->cc.cc_turbo );
            *link = (void *) ( fun->cf.cf_self );
            MMccall (fun, fun->cc.cc_turbo);
        } else {
            MMccall ( fun, fun->cc.cc_turbo );
        }
#ifdef DO_FUNLINK_DEBUG
        fprintf ( stderr, "call_or_link_closure: fun %x END 1\n", fun );
#endif 
        return;
    }
    if ( Rset == 0 ) {
        funcall ( fun );
    } else {
        /* can't do this if invoking foo(a) is illegal when foo is not defined
           to take any arguments.   In the majority of C's this is legal */
        
        if ( type_of ( fun ) == t_cfun ) {
            (void) vpush_extend ( link, sLAlink_arrayA->s.s_dbind );
            (void) vpush_extend ( *link, sLAlink_arrayA->s.s_dbind );	 
#ifdef DO_FUNLINK_DEBUG
	    fprintf ( stderr, "call_or_link_closure: About to change *link %x to %x at link %x and execute it (after t_cfun vpush_extend), sym->s %x, sym->s.s_self %s (%d chars long)\n", *link, fun->cf.cf_self, link, sym->s, sym->s.s_self, sym->s.s_fillp );
#endif 
            *link = (void *) (fun->cf.cf_self);
            ( *(void (*)()) (fun->cf.cf_self) ) ();
        } else {
            funcall(fun);
        }
    }
#ifdef DO_FUNLINK_DEBUG
    fprintf ( stderr, "call_or_link_closure: fun %x END 2\n", fun );
#endif 
}

/* for pushing item into an array, where item is an address if array-type = t
or a fixnum if array-type = fixnum */

#define SET_ITEM(ar,ind,val) (*((object *)(&((ar)->ust.ust_self[ind]))))= val
static int     
vpush_extend(void *item, object ar)
{ register int ind;
#ifdef DO_FUNLINK_DEBUG
 fprintf ( stderr, "vpush_extend: item %x, ar %x\n", item, ar );
#endif 
 ind = ar->ust.ust_fillp;  
 AGAIN:
  if (ind < ar->ust.ust_dim)
   {SET_ITEM(ar,ind,item);
    ind += sizeof(void *); 
    return(ar->v.v_fillp = ind);}
       else
    { 
      int newdim= ROUND_UP_PTR((2 + (int) (1.3 * ind)));
      unsigned char *newself;
      newself = (void *)alloc_relblock(newdim);
      bcopy(ar->ust.ust_self,newself,ind);
      ar->ust.ust_dim=newdim;
      ar->ust.ust_self=newself;
      goto AGAIN;
    }
#ifdef DO_FUNLINK_DEBUG_1
 fprintf ( stderr, "vpush_extend: item %x, ar %x END\n", item, ar );
#endif 
}


/* if we unlink a bunch of functions, this will mean there are some
   holes in the link array, and we should probably go through it and
   push them back  */
static int number_unlinked=0;

static void
delete_link(void *address, object link_ar)
{object *ar,*ar_end,*p;
#ifdef DO_FUNLINK_DEBUG
 fprintf ( stderr, "delete_link: address %x, link_ar %x START\n", address, link_ar );
#endif 
 p=0;
 ar = link_ar->v.v_self;
 ar_end = (object *)&(link_ar->ust.ust_self[link_ar->v.v_fillp]);
 while (ar < ar_end)
   { if (*ar && *((void **)*ar)==address)
       { p = (object *) *ar;
	 *ar=0;
	 *p = *(ar+1);
	 number_unlinked++;}
     ar=ar+2;}
 if (number_unlinked > 40)
   link_ar->v.v_fillp=
     clean_link_array(link_ar->v.v_self,ar_end);
#ifdef DO_FUNLINK_DEBUG
 fprintf ( stderr, "delete_link: address %x, link_ar %x END\n", address, link_ar );
#endif 
}


DEFUN_NEW("USE-FAST-LINKS",object,fSuse_fast_links,SI,1,2,NONE,OO,OO,OO,OO,(object flag,...),
      "Usage: (use-fast-links {nil,t} &optional fun) turns on or off \
the fast linking depending on FLAG, so that things will either go \
faster, or turns it off so that stack information is kept.  If SYMBOL \
is supplied and FLAG is nil, then this function is deleted from the fast links")
{int n = VFUN_NARGS;
 object sym;
 va_list ap;
 object *p,*ar,*ar_end;
 object link_ar;
 object fun=Cnil;

{ va_start(ap,flag);
 if (n>=2) sym=va_arg(ap,object);else goto LDEFAULT2;
 goto LEND_VARARG;
 LDEFAULT2: sym = Cnil ;
 LEND_VARARG: va_end(ap);}

  if (sLAlink_arrayA ==0)    RETURN1(Cnil);
  link_ar = sLAlink_arrayA->s.s_dbind;
  if (link_ar==Cnil && flag==Cnil) RETURN1(Cnil);
  check_type_array(&link_ar);
  if (type_of(link_ar) != t_string)
  { FEerror("*LINK-ARRAY* must be a string",0);}
  ar = link_ar->v.v_self;
  ar_end = (object *)&(link_ar->ust.ust_self[link_ar->v.v_fillp]);
 switch (n)
      {
  case 1:
   if (flag==Cnil)
    { Rset=0;
     while ( ar < ar_end)
      /* set the link variables back to initial state */
	 { 
	    p = (object *) *ar;
	    if (p) *p = (ar++, *ar); else ar++;
	   ar++;
	 }
    link_ar->v.v_fillp = 0;
    }
  else
    { Rset=1;}
    break;
  case 2:

   if ((type_of(sym)==t_symbol))
     fun = sym->s.s_gfdef;
   else
     if (type_of(sym)==t_cclosure)
       fun = sym;
   else {FEerror("Second arg: ~a must be symbol or closure",0,sym);
       }
   if(Rset)
     {
      if(!fun) RETURN1(Cnil);
      switch(type_of(fun)){
      case t_cfun:
      case t_sfun:
      case t_vfun:	
      case t_gfun:
      case t_cclosure:
      case t_closure:
      case t_afun:
	delete_link(fun->cf.cf_self,link_ar);
	/* becoming obsolete 
	 y=getf(sym->s.s_plist,sScdefn,Cnil);
	 if (y!=Cnil)
	   delete_link(fix(y),link_ar);
	   */

      break;
       default: 
        /* no link for uncompiled functions*/
        break;	
    }
  }
    break;
  default:
    FEerror("Usage: (use-fast-links {nil,t} &optional fun)",0);
}
  RETURN1(Cnil);
}
object
fSuse_fast_links_2(object flag,object res) {
  VFUN_NARGS=2;
  return FFN(fSuse_fast_links)(flag,res);
}

object
clear_compiler_properties(object sym, object code)
{ object tem;
  extern object sSclear_compiler_properties;  
  VFUN_NARGS=2; FFN(fSuse_fast_links)(Cnil,sym);
  tem = getf(sym->s.s_plist,sStraced,Cnil);
  if (sSAinhibit_macro_specialA && sSAinhibit_macro_specialA->s.s_dbind != Cnil)
    (void)ifuncall2(sSclear_compiler_properties, sym,code);
  if (tem != Cnil) return tem;
  return sym;
  
}


static int
clean_link_array(object *ar, object *ar_end)
{int i=0;
 object *orig;
#ifdef DO_FUNLINK_DEBUG
 fprintf ( stderr, "clean_link_array: ar %x, ar_end %x START\n", ar, ar_end );
#endif 
 orig=ar;
 number_unlinked=0;
  while( ar<ar_end)
   {if(*ar)
      {orig[i++]= *ar++ ;
	 orig[i++]= *ar++;
       }
   else ar=ar+2;       
    }
#ifdef DO_FUNLINK_DEBUG
 fprintf ( stderr, "clean_link_array: ar %x, ar_end %x END\n", ar, ar_end );
#endif 
 return(i*sizeof(object *));
 }

/* This is a temporary workaround.  m68k cannot find the result 
   of a function returning long when invoked via a function pointer
   declared as a function returning a pointer, in this case, an 
   object.  A proper fix will require rewriting sections of the lisp
   compiler to separate the calling procedures for functions returning
   an object from functions returning a long.  CM  20020801 */
/*  #if defined(__mc68020__) */
/*  #define LCAST(a) (object)(*(long(*)())a) */
/*  #else */
#define LCAST(a) (*a)
/*  #endif */

static object c_apply_n0(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n0(object (*fn)(),object *x,object y,object z) {
  return fn();
}

static object c_apply_n1(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n1(object (*fn)(),object *x,object y,object z) {
  return fn(x[0]);
}

static object c_apply_n2(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n2(object (*fn)(),object *x,object y,object z) {
  return fn(x[0],x[1]);
}

static object c_apply_n3(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n3(object (*fn)(),object *x,object y,object z) {
  return fn(x[0],x[1],x[2]);
}

static object c_apply_n4(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n4(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3]);

}

static object c_apply_n5(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n5(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4]);

}

static object c_apply_n6(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n6(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5]);

}

static object c_apply_n7(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n7(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6]);

}

static object c_apply_n8(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n8(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7]);

}

static object c_apply_n9(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n9(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8]);

}

static object c_apply_n10(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n10(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9]);

}

static object c_apply_n11(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n11(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10]);

}

static object c_apply_n12(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n12(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11]);

}

static object c_apply_n13(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n13(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12]);

}

static object c_apply_n14(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n14(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13]);

}

static object c_apply_n15(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n15(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14]);

}

static object c_apply_n16(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n16(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15]);

}

static object c_apply_n17(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n17(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16]);

}

static object c_apply_n18(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n18(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17]);

}

static object c_apply_n19(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n19(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18]);

}

static object c_apply_n20(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n20(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19]);

}

static object c_apply_n21(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n21(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20]);

}

static object c_apply_n22(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n22(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21]);

}

static object c_apply_n23(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n23(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22]);

}

static object c_apply_n24(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n24(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23]);

}

static object c_apply_n25(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n25(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24]);

}

static object c_apply_n26(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n26(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25]);

}

static object c_apply_n27(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n27(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26]);

}

static object c_apply_n28(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n28(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27]);

}

static object c_apply_n29(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n29(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28]);

}

static object c_apply_n30(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n30(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29]);

}

static object c_apply_n31(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n31(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30]);

}

static object c_apply_n32(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n32(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31]);

}

static object c_apply_n33(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n33(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32]);

}

static object c_apply_n34(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n34(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33]);

}

static object c_apply_n35(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n35(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34]);

}

static object c_apply_n36(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n36(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35]);

}

static object c_apply_n37(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n37(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36]);

}

static object c_apply_n38(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n38(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37]);

}

static object c_apply_n39(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n39(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38]);

}

static object c_apply_n40(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n40(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39]);

}

static object c_apply_n41(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n41(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40]);

}

static object c_apply_n42(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n42(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41]);

}

static object c_apply_n43(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n43(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42]);

}

static object c_apply_n44(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n44(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43]);

}

static object c_apply_n45(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n45(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44]);

}

static object c_apply_n46(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n46(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45]);

}

static object c_apply_n47(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n47(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46]);

}

static object c_apply_n48(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n48(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47]);

}

static object c_apply_n49(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n49(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48]);

}

static object c_apply_n50(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n50(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49]);

}

static object c_apply_n51(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n51(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50]);

}

static object c_apply_n52(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n52(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51]);

}

static object c_apply_n53(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n53(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52]);

}

static object c_apply_n54(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n54(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53]);

}

static object c_apply_n55(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n55(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54]);

}

static object c_apply_n56(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n56(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55]);

}

static object c_apply_n57(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n57(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56]);

}

static object c_apply_n58(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n58(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57]);

}

static object c_apply_n59(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n59(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58]);

}

static object c_apply_n60(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n60(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59]);

}

static object c_apply_n61(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n61(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60]);

}

static object c_apply_n62(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n62(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60],x[61]);

}

static object c_apply_n63(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n63(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60],x[61],x[62]);

}

static object c_apply_n64(object (*)(),object *,object,object) __attribute__ ((noinline));
static object
c_apply_n64(object (*fn)(),object *x,object y,object z) {

  return fn(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60],x[61],x[62],x[63]);

}

#define CASE_N(a,b,c) case c : return Mjoin(c_apply_n,c)(a,b,OBJNULL,OBJNULL);break

object
c_apply_n(object (*fn)(), int n, object *x)
{object res=Cnil;
/*  clear_c_stack(&res-4*(n+16)); */
 switch(n){
    CASE_N(fn,x,0);
    CASE_N(fn,x,1);
    CASE_N(fn,x,2);
    CASE_N(fn,x,3);
    CASE_N(fn,x,4);
    CASE_N(fn,x,5);
    CASE_N(fn,x,6);
    CASE_N(fn,x,7);
    CASE_N(fn,x,8);
    CASE_N(fn,x,9);
    CASE_N(fn,x,10);
    CASE_N(fn,x,11);
    CASE_N(fn,x,12);
    CASE_N(fn,x,13);
    CASE_N(fn,x,14);
    CASE_N(fn,x,15);
    CASE_N(fn,x,16);
    CASE_N(fn,x,17);
    CASE_N(fn,x,18);
    CASE_N(fn,x,19);
    CASE_N(fn,x,20);
    CASE_N(fn,x,21);
    CASE_N(fn,x,22);
    CASE_N(fn,x,23);
    CASE_N(fn,x,24);
    CASE_N(fn,x,25);
    CASE_N(fn,x,26);
    CASE_N(fn,x,27);
    CASE_N(fn,x,28);
    CASE_N(fn,x,29);
    CASE_N(fn,x,30);
    CASE_N(fn,x,31);
    CASE_N(fn,x,32);
    CASE_N(fn,x,33);
    CASE_N(fn,x,34);
    CASE_N(fn,x,35);
    CASE_N(fn,x,36);
    CASE_N(fn,x,37);
    CASE_N(fn,x,38);
    CASE_N(fn,x,39);
    CASE_N(fn,x,40);
    CASE_N(fn,x,41);
    CASE_N(fn,x,42);
    CASE_N(fn,x,43);
    CASE_N(fn,x,44);
    CASE_N(fn,x,45);
    CASE_N(fn,x,46);
    CASE_N(fn,x,47);
    CASE_N(fn,x,48);
    CASE_N(fn,x,49);
    CASE_N(fn,x,50);
    CASE_N(fn,x,51);
    CASE_N(fn,x,52);
    CASE_N(fn,x,53);
    CASE_N(fn,x,54);
    CASE_N(fn,x,55);
    CASE_N(fn,x,56);
    CASE_N(fn,x,57);
    CASE_N(fn,x,58);
    CASE_N(fn,x,59);
    CASE_N(fn,x,60);
    CASE_N(fn,x,61);
    CASE_N(fn,x,62);
    CASE_N(fn,x,63);
    CASE_N(fn,x,64);
    default: FEerror("Exceeded call-arguments-limit ",0);
  } 

#ifdef DO_FUNLINK_DEBUG_1
    fprintf ( stderr, "c_apply_n: res %x END\n", n, res );
#endif 
 return res;
}
  
/* Used for calling cfunctions which take object args, and return object 
value.  This function is called by the static lnk function in the reference
file */

static object
call_proc(object sym, int setf, void **link, int argd, va_list ll)
{object fun;
 int nargs;
#ifdef DO_FUNLINK_DEBUG_1
    fprintf ( stderr, "call_proc: sym %x START\n", sym );
#endif 
 check_type_symbol(&sym);
 fun = setf ? get(sym,sSsetf_function,OBJNULL) : sym->s.s_gfdef;
 if (fun && (type_of(fun)==t_sfun
	     || type_of(fun)==t_gfun
	     || type_of(fun)== t_vfun)
	     && Rset) /* the && Rset is to allow tracing */
   {object (*fn)();
    fn = fun->sfn.sfn_self;
    if (type_of(fun)==t_vfun)
      { /* argd=VFUN_NARGS; */ /*remove this! */
	nargs=SFUN_NARGS(argd);
	if (nargs < fun->vfn.vfn_minargs || nargs > fun->vfn.vfn_maxargs
	    || (argd & (SFUN_ARG_TYPE_MASK | SFUN_RETURN_MASK)))
	 goto WRONG_ARGS;
	if ((VFUN_NARG_BIT & argd) == 0)
	 /* don't link */
	 { 
	   VFUN_NARGS = nargs;
	   goto   AFTER_LINK;
	 }
      }
    else /* t_gfun,t_sfun */
      { nargs= SFUN_NARGS(argd);
	if ((argd & (~VFUN_NARG_BIT)) != fun->sfn.sfn_argd) 
	WRONG_ARGS:    
	  FEerror("Arg or result mismatch in call to  ~s",1,sym);
      }
   
    (void) vpush_extend(link,sLAlink_arrayA->s.s_dbind);
    (void) vpush_extend(*link,sLAlink_arrayA->s.s_dbind);	 
    *link = (void *)fn;
  AFTER_LINK:	
 
    if (nargs < 10) 
    /* code below presumes sizeof(int) == sizeof(object)
       Should probably not bother special casing the < 10 args
     */
      {object x0,x1,x2,x3,x4,x5,x6,x7,x8,x9;    
       if (nargs-- > 0)
	 x0=va_arg(ll,object);
       else
	 {return(LCAST(fn)());}
       if (nargs-- > 0)
	 x1=va_arg(ll,object);
       else
	 { return(LCAST(fn)(x0));}
       if (nargs-- > 0)
	 x2=va_arg(ll,object);
       else
	 {return(LCAST(fn)(x0,x1));}
       if (nargs-- > 0)  x3=va_arg(ll,object);
       else
	 return(LCAST(fn)(x0,x1,x2));
       if (nargs-- > 0)  x4=va_arg(ll,object);
       else
	 return(LCAST(fn)(x0,x1,x2,x3));
       if (nargs-- > 0)  x5=va_arg(ll,object);
       else
	 return(LCAST(fn)(x0,x1,x2,x3,x4));
       if (nargs-- > 0)  x6=va_arg(ll,object);
       else
	 return(LCAST(fn)(x0,x1,x2,x3,x4,x5));
       if (nargs-- > 0)  x7=va_arg(ll,object);
       else
	 return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6));
       if (nargs-- > 0)  x8=va_arg(ll,object);
       else
	 return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6,x7));
       if (nargs-- > 0)  x9=va_arg(ll,object);
       else
	 return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6,x7,x8));
       return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9));
 
     }
  else {object *new;
	COERCE_VA_LIST(new,ll,nargs);
	return(c_apply_n(fn,nargs,new));}
  }
 else				/* there is no cdefn property */
/* regular_call: */
   { 
     object fun;
     register object *base;
     enum ftype result_type;
     /* we check they are valid functions before calling this */
     if(type_of(sym)==t_symbol) fun =  setf ? get(sym,sSsetf_function,OBJNULL) : symbol_function(sym);
     else fun = sym;
     vs_base= (base =   vs_top);
     if (fun == OBJNULL || sym->s.s_sfdef != NOT_SPECIAL || sym->s.s_mflag) FEinvalid_function(sym);
     /* push the args */
/*     if (type_of(fun)==t_vfun) argd=fcall.argd; */ /*remove this! */
     nargs=SFUN_NARGS(argd);
     result_type=SFUN_RETURN_TYPE(argd);
     SFUN_START_ARG_TYPES(argd);
     {int i=0;
      if (argd==0)
	{while(i < nargs)
	    {vs_push(va_arg(ll,object));
	     i++;}}
      else
	{while(i < nargs)
	    {enum ftype typ=SFUN_NEXT_TYPE(argd);
	      vs_push((typ==f_object? va_arg(ll,object):
		       (typ==f_fixnum ? make_fixnum(va_arg(ll,fixnum)) :
			make_integer(va_arg(ll,GEN)))));
	     i++;}}
    }

     vs_check;
     
     funcall(fun);
      vs_top=base;
	/* vs_base=oldbase;
      The caller won't expect us to restore these.  */
     return((result_type==f_object? vs_base[0] : (result_type==f_fixnum ? (object)fix(vs_base[0]) : (object)otoi(vs_base[0]))));
   }
}


/* static object call_vproc(object sym, void *link, va_list ll) */
/* {return call_proc(sym,link,VFUN_NARGS | VFUN_NARG_BIT,ll);} */

/* For ANSI C stdarg */

object
call_proc_new(object sym, int setf,void **link, int argd, object first, va_list ll)
{object fun;
 int nargs;
#ifdef DO_FUNLINK_DEBUG_1
    fprintf ( stderr, "call_proc_new: sym %x START\n", sym );
#endif 
 check_type_symbol(&sym);
 fun = setf ? get(sym,sSsetf_function,OBJNULL) : sym->s.s_gfdef;
 if (fun && (type_of(fun)==t_sfun
	     || type_of(fun)==t_gfun
	     || type_of(fun)== t_vfun)
     && Rset) /* the && Rset is to allow tracing */
   {object (*fn)();
   fn = fun->sfn.sfn_self;
   if (type_of(fun)==t_vfun)
     { /* argd=VFUN_NARGS; */ /*remove this! */
       nargs=SFUN_NARGS(argd);
       if (nargs < fun->vfn.vfn_minargs || nargs > fun->vfn.vfn_maxargs
	   || (argd & (SFUN_ARG_TYPE_MASK | SFUN_RETURN_MASK)))
	 goto WRONG_ARGS;
       if ((VFUN_NARG_BIT & argd) == 0)
	 /* don't link */
	 { 
	   VFUN_NARGS = nargs;
	   goto   AFTER_LINK;
	 }
     }
   else /* t_gfun,t_sfun */
     { nargs= SFUN_NARGS(argd);
     if ((argd & (~VFUN_NARG_BIT)) != fun->sfn.sfn_argd) 
       WRONG_ARGS:    
     FEerror("Arg or result mismatch in call to  ~s",1,sym);
     }
   
   (void) vpush_extend(link,sLAlink_arrayA->s.s_dbind);
   (void) vpush_extend(*link,sLAlink_arrayA->s.s_dbind);	 
   *link = (void *)fn;
   AFTER_LINK:	
   
   if (nargs < 10) 
     /* code below presumes sizeof(int) == sizeof(object)
	Should probably not bother special casing the < 10 args
     */
     {object x0,x1,x2,x3,x4,x5,x6,x7,x8,x9;    
     if (nargs-- > 0)
       /* 	 x0=va_arg(ll,object); */
       x0=first;
     else
       {return(LCAST(fn)());}
     if (nargs-- > 0)
       x1=va_arg(ll,object);
     else
       { return(LCAST(fn)(x0));}
     if (nargs-- > 0)
       x2=va_arg(ll,object);
     else
       {return(LCAST(fn)(x0,x1));}
     if (nargs-- > 0)  x3=va_arg(ll,object);
     else
       return(LCAST(fn)(x0,x1,x2));
     if (nargs-- > 0)  x4=va_arg(ll,object);
     else
       return(LCAST(fn)(x0,x1,x2,x3));
     if (nargs-- > 0)  x5=va_arg(ll,object);
     else
       return(LCAST(fn)(x0,x1,x2,x3,x4));
     if (nargs-- > 0)  x6=va_arg(ll,object);
     else
       return(LCAST(fn)(x0,x1,x2,x3,x4,x5));
     if (nargs-- > 0)  x7=va_arg(ll,object);
     else
       return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6));
     if (nargs-- > 0)  x8=va_arg(ll,object);
     else
       return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6,x7));
     if (nargs-- > 0)  x9=va_arg(ll,object);
     else
       return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6,x7,x8));
     return(LCAST(fn)(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9));
     
     }
   else {
     object *new;
     COERCE_VA_LIST_NEW(new,first,ll,nargs);
     return(c_apply_n(fn,nargs,new));}
   }
 else				/* there is no cdefn property */
   /* regular_call: */
   { 
     object fun;
     register object *base;
     enum ftype result_type;
     /* we check they are valid functions before calling this */
     if(type_of(sym)==t_symbol)  fun = setf ? get(sym,sSsetf_function,OBJNULL) : symbol_function(sym);
     else fun = sym;
     vs_base= (base =   vs_top);
     if (fun == OBJNULL || sym->s.s_sfdef != NOT_SPECIAL || sym->s.s_mflag) FEinvalid_function(sym);
     /* push the args */
/*     if (type_of(fun)==t_vfun) argd=fcall.argd; */ /*remove this! */
     nargs=SFUN_NARGS(argd);
     result_type=SFUN_RETURN_TYPE(argd);
     SFUN_START_ARG_TYPES(argd);
     {int i=0;
      if (argd==0)
	{while(i < nargs)
	    {vs_push(i ? va_arg(ll,object) : first);
	     i++;}}
      else
	{
	  while(i < nargs) {
	    enum ftype typ=SFUN_NEXT_TYPE(argd);
	    object _xx;
	    if (typ==f_object)
	      _xx=i ? va_arg(ll,object) : first;
	    else if (typ==f_fixnum) {
	      fixnum _yy;
	      _yy=i ? va_arg(ll,fixnum) : (fixnum)first;
	      _xx=make_fixnum(_yy);
	    } else {
	      GEN _yy;
	      _yy=i ? va_arg(ll,GEN) : (GEN)first;
	      _xx=make_integer(_yy);
	    }
	    vs_push(_xx);
	    i++;
	  }
	}
    }

     vs_check;
     
     funcall(fun);
     vs_top=base;
     /* vs_base=oldbase;
	The caller won't expect us to restore these.  */
     return((result_type==f_object? vs_base[0] : (result_type==f_fixnum ? (object)fix(vs_base[0]) : (object)otoi(vs_base[0]))));
   }
}


object call_vproc_new(object sym, int setf,void *link, object first,va_list ll)
{return call_proc_new(sym,setf,link,VFUN_NARGS | VFUN_NARG_BIT,first,ll);}

static object
mcall_proc0(object sym,int setf,void *link,int argd,...) 
{
  object res;
  va_list ap;

  va_start(ap,argd);
  res=call_proc(sym,setf,link,argd,ap);
  va_end(ap);

  return res;

}

object
call_proc0(object sym, int setf,void *link)
{return mcall_proc0(sym,setf,link,0);}

#if 0
object
call_proc1(object sym,void *link,...)
{  va_list ll;
   va_start(ll,link);
return (call_proc(sym,link,1,ll));
    va_end(ll);
}

object
call_proc2(object sym,object link,...)
{ va_list ll;
   va_start(ll,link);
   return (call_proc(sym,link,2,ll));
    va_end(ll);
}
  
#endif

   

object
ifuncall(object sym,int n,...)
{ va_list ap;
  int i;
  object *old_vs_base;
  object *old_vs_top;
  object x;
  old_vs_base = vs_base;
  old_vs_top = vs_top;
  vs_base = old_vs_top;
  vs_top=old_vs_top+n;
  vs_check;
  va_start(ap,n);
  for(i=0;i<n;i++)
    old_vs_top[i]= va_arg(ap,object);
  va_end(ap);
  if (type_of(sym->s.s_gfdef)==t_cfun)
    (*(sym->s.s_gfdef)->cf.cf_self)();
  else  super_funcall(sym);
  x = vs_base[0];
  vs_top = old_vs_top;
  vs_base = old_vs_base;
  return(x);
}


/* static object */
/* imfuncall(object sym,int n,...) */
/* { va_list ap; */
/*   int i; */
/*   object *old_vs_top; */
/*   old_vs_top = vs_top; */
/*   vs_base = old_vs_top; */
/*   vs_top=old_vs_top+n; */
/*   vs_check; */
/*   va_start(ap,n); */
/*   for(i=0;i<n;i++) */
/*     old_vs_top[i]= va_arg(ap,object); */
/*   va_end(ap); */
/*   if (type_of(sym->s.s_gfdef)==t_cfun) */
/*     (*(sym->s.s_gfdef)->cf.cf_self)(); */
/*   else  super_funcall(sym); */
/*   return(vs_base[0]); */
/* } */

/* go from beg+1 below limit setting entries equal to 0 until you
   come to FRESH 0's . */

#define FRESH 40

int
clear_stack(object *beg, object *limit)
{int i=0;
 while (++beg < limit)
  {if (*beg==0) i++;
   if (i > FRESH) return 0;
   ;*beg=0;} return 0;}

static object
FFN(set_mv)(int i, object val)
{ if (i >= (sizeof(MVloc)/sizeof(object)))
     FEerror("Bad mv index",0);
  return(MVloc[i]=val);
}


static object
FFN(mv_ref)(unsigned int i)
{ object x;
  if (i >= (sizeof(MVloc)/sizeof(object)))
     FEerror("Bad mv index",0);
  x = MVloc[i];
  if (x == 0)
      FEerror("Null value",0);
  return x;
}


#include "xdrfuns.c"

DEF_ORDINARY("CDEFN",sScdefn,SI,"");
DEFVAR("*LINK-ARRAY*",sLAlink_arrayA,LISP,Cnil,"");

void
gcl_init_links(void)
{	

	make_si_sfun("SET-MV",set_mv, ARGTYPE2(f_fixnum,f_object) |
		     RESTYPE(f_object));
	make_si_sfun("MV-REF",mv_ref, ARGTYPE1(f_fixnum) | RESTYPE(f_object));
	gcl_init_xdrfuns();
	      }

