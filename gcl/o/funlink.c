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

static int
clean_link_array(object *,object *);

object sScdefn;
typedef object (*object_func)();

static int     
vpush_extend(void *,object);

object sLAlink_arrayA;
int Rset = 0;

/* cleanup link */
void
call_or_link(object sym, void **link )
{
    object fun;
    fun = sym->s.s_gfdef;
#ifdef DO_FUNLINK_DEBUG
    fprintf ( stderr, "call_or_link: fun %x START\n", fun );
#endif 
    if (fun == OBJNULL) {
        FEinvalid_function(sym);
#ifdef DO_FUNLINK_DEBUG
        fprintf ( stderr, "call_or_link: fun %x ERROR END\n", fun );
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
        fprintf ( stderr, "call_or_link: fun %x END 1\n", fun );
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
#if 1
            fprintf ( stderr, "call_or_link: cf %x\n", fun->cf );
            fprintf ( stderr, "call_or_link: cf_name %x\n", fun->cf.cf_name );
            fprintf ( stderr, "call_or_link: cf_data %x\n", fun->cf.cf_data );
            fprintf ( stderr, "call_or_link: cf_self %x\n", fun->cf.cf_self );
            fflush ( stderr );
            fprintf ( stderr, "call_or_link: staddr %x\n", fun->cf.cf_name->st.st_self );
            fprintf ( stderr, "call_or_link: ststring %s\n", fun->cf.cf_name->st.st_self );
            fflush ( stderr );
#endif         
            ( *(void (*)()) (fun->cf.cf_self)) ();
        } else {
            funcall(fun);
        }
    }
#ifdef DO_FUNLINK_DEBUG
    fprintf ( stderr, "call_or_link: fun %x END 2\n", fun );
#endif 
}

void
call_or_link_closure ( object sym, void **link, void **ptr )
{
    object fun;
#ifdef DO_FUNLINK_DEBUG
    fprintf ( stderr, "call_or_link_closure: START sym %x, link %x, *link %x, ptr %x, *ptr %x, sym->s.s_gfdef (fun) %x\n", sym, link, *link, ptr, *ptr, sym->s.s_gfdef );
#endif 
    fun = sym->s.s_gfdef;
    if (fun == OBJNULL) {
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
	    fprintf ( stderr, "call_or_link_closure: About to set *ptr %x to %x (after vpush_extend 1), sym->s.s_self %s (%d chars long)\n", *ptr, fun->cc.cc_turbo, sym->s.s_self, sym->s.s_fillp );
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
	    fprintf ( stderr, "call_or_link_closure: About to set *link %x to %x and execute it (after vpush_extend 2), sym->s %x, sym->s.s_self %s (%d chars long)\n", *link, fun->cf.cf_self, sym->s, sym->s.s_self, sym->s.s_fillp );
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
  if (link_ar->v.v_elttype != aet_ch)
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

object
c_apply_n(object (*fn)(), int n, object *x)
{object res=Cnil;
#ifdef DO_FUNLINK_DEBUG_1
    fprintf ( stderr, "c_apply_n: n %d, x %x START\n", n, x );
#endif 
 switch(n){
    case 0:  res=LCAST(fn)();break;
    case 1:  res=LCAST(fn)(x[0]);break;
    case 2:  res=LCAST(fn)(x[0],x[1]);break;
    case 3:  res=LCAST(fn)(x[0],x[1],x[2]);break;
    case 4:  res=LCAST(fn)(x[0],x[1],x[2],x[3]);break;
    case 5:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4]);break;
    case 6:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5]);break;
    case 7:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6]);break;
    case 8:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7]);break;
    case 9:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8]);break;
    case 10:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9]);break;
    case 11:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10]);break;
    case 12:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11]);break;
    case 13:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12]);break;
    case 14:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13]);break;
    case 15:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14]);break;
    case 16:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15]);break;
    case 17:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16]);break;
    case 18:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17]);break;
    case 19:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18]);break;
    case 20:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19]);break;
    case 21:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20]);break;
    case 22:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21]);break;
    case 23:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22]);break;
    case 24:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23]);break;
    case 25:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24]);break;
    case 26:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25]);break;
    case 27:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26]);break;
    case 28:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27]);break;
    case 29:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28]);break;
    case 30:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29]);break;
    case 31:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30]);break;
    case 32:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31]);break;
    case 33:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32]);break;
    case 34:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33]);break;
    case 35:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34]);break;
    case 36:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35]);break;
    case 37:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36]);break;
    case 38:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37]);break;
    case 39:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38]);break;
    case 40:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39]);break;
    case 41:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40]);break;
    case 42:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41]);break;
    case 43:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42]);break;
    case 44:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43]);break;
    case 45:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44]);break;
    case 46:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45]);break;
    case 47:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46]);break;
    case 48:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47]);break;
    case 49:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48]);break;
    case 50:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49]);break;
    case 51:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50]);break;
    case 52:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51]);break;
    case 53:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52]);break;
    case 54:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53]);break;
    case 55:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54]);break;
    case 56:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55]);break;
    case 57:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56]);break;
    case 58:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57]);break;
    case 59:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58]);break;
    case 60:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59]);break;
    case 61:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60]);break;
    case 62:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60],x[61]);break;
    case 63:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60],x[61],x[62]);break;
    case 64:  res=LCAST(fn)(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],
         x[8],x[9],x[10],x[11],x[12],x[13],x[14],
         x[15],x[16],x[17],x[18],x[19],x[20],x[21],
         x[22],x[23],x[24],x[25],x[26],x[27],x[28],
         x[29],x[30],x[31],x[32],x[33],x[34],x[35],
         x[36],x[37],x[38],x[39],x[40],x[41],x[42],
         x[43],x[44],x[45],x[46],x[47],x[48],x[49],
         x[50],x[51],x[52],x[53],x[54],x[55],x[56],
         x[57],x[58],x[59],x[60],x[61],x[62],x[63]);break;
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
call_proc(object sym, void **link, int argd, va_list ll)
{object fun;
 int nargs;
#ifdef DO_FUNLINK_DEBUG_1
    fprintf ( stderr, "call_proc: sym %x START\n", sym );
#endif 
 check_type_symbol(&sym);
 fun=sym->s.s_gfdef;
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
     if(type_of(sym)==t_symbol) fun = symbol_function(sym);
     else fun = sym;
     vs_base= (base =   vs_top);
     if (fun == OBJNULL) FEinvalid_function(sym);
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
		       make_fixnum(va_arg(ll,fixnum))));
	     i++;}}
    }

     vs_check;
     
     funcall(fun);
      vs_top=base;
	/* vs_base=oldbase;
      The caller won't expect us to restore these.  */
     return((result_type==f_object? vs_base[0] : (object)fix(vs_base[0])));
   }
}


/* static object call_vproc(object sym, void *link, va_list ll) */
/* {return call_proc(sym,link,VFUN_NARGS | VFUN_NARG_BIT,ll);} */

/* For ANSI C stdarg */

object
call_proc_new(object sym, void **link, int argd, object first, va_list ll)
{object fun;
 int nargs;
#ifdef DO_FUNLINK_DEBUG_1
    fprintf ( stderr, "call_proc_new: sym %x START\n", sym );
#endif 
 check_type_symbol(&sym);
 fun=sym->s.s_gfdef;
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
     if(type_of(sym)==t_symbol) fun = symbol_function(sym);
     else fun = sym;
     vs_base= (base =   vs_top);
     if (fun == OBJNULL) FEinvalid_function(sym);
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
	    else {
	      long _yy;
	      _yy=i ? va_arg(ll,fixnum) : (fixnum)first;
	      _xx=make_fixnum(_yy);
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
     return((result_type==f_object? vs_base[0] : (object)fix(vs_base[0])));
   }
}


object call_vproc_new(object sym, void *link, object first,va_list ll)
{return call_proc_new(sym,link,VFUN_NARGS | VFUN_NARG_BIT,first,ll);}

static object
mcall_proc0(object sym,void *link,int argd,...) 
{
  object res;
  va_list ap;

  va_start(ap,argd);
  res=call_proc(sym,link,argd,ap);
  va_end(ap);

  return res;

}

object
call_proc0(object sym, void *link)
{return mcall_proc0(sym,link,0);}

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

