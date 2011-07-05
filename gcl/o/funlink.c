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

/* for pushing item into an array, where item is an address if array-type = t
or a fixnum if array-type = fixnum */

#define SET_ITEM(ar,ind,val) (*((object *)(&((ar)->ust.ust_self[ind]))))= val
static int     
vpush_extend(void *item, object ar) { 
  register int ind;
#ifdef DO_FUNLINK_DEBUG
  fprintf ( stderr, "vpush_extend: item %x, ar %x\n", item, ar );
#endif 
  ind = ar->ust.ust_fillp;  
 AGAIN:
  if (ind < ar->ust.ust_dim) {
    SET_ITEM(ar,ind,item);
    ind += sizeof(void *); 
    return(ar->v.v_fillp = ind);
  } else { 
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
delete_link(void *address, object link_ar) {
  object *ar,*ar_end,*p;
#ifdef DO_FUNLINK_DEBUG
  fprintf ( stderr, "delete_link: address %x, link_ar %x START\n", address, link_ar );
#endif 
  p=0;
  ar = link_ar->v.v_self;
  ar_end = (object *)&(link_ar->ust.ust_self[link_ar->v.v_fillp]);
  while (ar < ar_end) {
    if (*ar && *((void **)*ar)==address) {
      p = (object *) *ar;
      *ar=0;
      *p = *(ar+1);
      number_unlinked++;
    }
    ar=ar+2;
  }
  if (number_unlinked > 40)
    link_ar->v.v_fillp=clean_link_array(link_ar->v.v_self,ar_end);
#ifdef DO_FUNLINK_DEBUG
  fprintf ( stderr, "delete_link: address %x, link_ar %x END\n", address, link_ar );
#endif 
}


DEFUN_NEW("USE-FAST-LINKS",object,fSuse_fast_links,SI,1,2,NONE,OO,OO,OO,OO,(object flag,...),
      "Usage: (use-fast-links {nil,t} &optional fun) turns on or off \
the fast linking depending on FLAG, so that things will either go \
faster, or turns it off so that stack information is kept.  If SYMBOL \
is supplied and FLAG is nil, then this function is deleted from the fast links") {
 object sym;
 va_list ap;
 object *p,*ar,*ar_end;
 object link_ar;
 object fun=Cnil,l=Cnil,f=OBJNULL;
 fixnum n=INIT_NARGS(1);

 va_start(ap,flag);
 sym=NEXT_ARG(n,ap,l,f,Cnil);
 
 if (sLAlink_arrayA==0)
   RETURN1(Cnil);

 link_ar=sLAlink_arrayA->s.s_dbind;
 if (link_ar==Cnil && flag==Cnil) 
   RETURN1(Cnil);

 check_type_array(&link_ar);
 if (type_of(link_ar)!=t_string)
   FEerror("*LINK-ARRAY* must be a string",0);

 ar=link_ar->v.v_self;
 ar_end=(object *)&(link_ar->ust.ust_self[link_ar->v.v_fillp]);

 if (sym==Cnil) {

   if (flag==Cnil) {
     Rset=0;
     while (ar<ar_end) {
      /* set the link variables back to initial state */
       p=(object *)*ar;
       if (p) *p=*++ar; else ar++;
       ar++;
     }
     link_ar->v.v_fillp=0;
   } else
     Rset=1;

 } else {

   if ((type_of(sym)==t_symbol))
     fun=sym->s.s_gfdef;
   else 
     fun=sym;
     /* FEerror("Second arg: ~a must be symbol or closure",0,sym); */

   if (Rset) {

     if (!fun) 
       RETURN1(Cnil);

     switch(type_of(fun)) {
     case t_cfun:
       if (flag==Cnil)
	 delete_link(fun->cf.cf_self,link_ar);
       break;
     case t_function:	
       if (flag==Cnil)
	 delete_link(fun->fun.fun_self,link_ar);
       break;
     default: 
       break;	
     }

   }

 }

 RETURN1(Cnil);

}

object
fSuse_fast_links_2(object flag,object res) {
  VFUN_NARGS=2;
  return FFN(fSuse_fast_links)(flag,res);
}

object
clear_compiler_properties(object sym, object code) { 
  object tem;
  extern object sSclear_compiler_properties;  
  
  if (sSclear_compiler_properties && sSclear_compiler_properties->s.s_gfdef!=OBJNULL)
    if ((sSAinhibit_macro_specialA && sSAinhibit_macro_specialA->s.s_dbind != Cnil) ||
	sym->s.s_sfdef == NOT_SPECIAL)
      (void)ifuncall2(sSclear_compiler_properties,sym,code);
  tem = getf(sym->s.s_plist,sStraced,Cnil);

  VFUN_NARGS=2;
  FFN(fSuse_fast_links)(Cnil,sym);
  return tem!=Cnil ? tem : sym;
  
}


static int
clean_link_array(object *ar, object *ar_end) {
  int i=0;
  object *orig;
#ifdef DO_FUNLINK_DEBUG
  fprintf ( stderr, "clean_link_array: ar %x, ar_end %x START\n", ar, ar_end );
#endif 
  orig=ar;
  number_unlinked=0;
  while(ar<ar_end)
    if(*ar) {
      orig[i++]= *ar++ ;
      orig[i++]= *ar++;
    }
    else ar=ar+2;       
#ifdef DO_FUNLINK_DEBUG
  fprintf ( stderr, "clean_link_array: ar %x, ar_end %x END\n", ar, ar_end );
#endif 
  return(i*sizeof(object *));
}


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

DEFVAR("*FAST-LINK-WARNINGS*",sSAfast_link_warningsA,SI,Cnil,"");

typedef struct {
  ufixnum ma:6;
  ufixnum xa:6;
  ufixnum nv:5;
  ufixnum vv:1;
  ufixnum va:1;
  ufixnum pu:1;
  ufixnum nf:1;
} fw;

typedef union {
  ufixnum i;
  fw f;
} fu;

object
call_proc_new(object sym,ufixnum clp,ufixnum vld,void **link,ufixnum argd,object first,va_list ll) {

  object fun;
  enum type tp;
  ufixnum margs,nargs,fas,do_link,varg,pushed=0,nfargs;
  fixnum vald;
  object *tmp,*x/* ,*p */;
  int i;
  fu u;

  if (type_of(sym)==t_symbol) {
    if (!(fun=sym->s.s_gfdef))
      FEundefined_function(sym);
  } else
    fun=sym;
  check_type_function(&fun);
  tp=type_of(fun);

  u.i=vld;
  
  /* p=0; */
  if (u.f.pu) {
    u.f.ma=vs_top-vs_base;
    u.f.va=u.f.nv=u.f.vv=0;
    /* p=vs_base; */
    pushed=1;
  }
  
  margs=u.f.ma;
  varg=u.f.va;
  nargs=u.f.va ? abs(VFUN_NARGS) : margs;
  nfargs=u.f.va && VFUN_NARGS<0 ? nargs-1 : nargs;
  vald=!u.f.vv ? -(fixnum)u.f.nv : u.f.nv;
  
  x=tmp=(u.f.pu && !fun->fun.fun_argd && VFUN_NARGS>=fun->fun.fun_minarg) ? 
    vs_base : ZALLOCA(nargs*sizeof(object));
  
  if (tmp!=vs_base) {
    if (u.f.pu) 
      memcpy(tmp,vs_base,nargs*sizeof(*tmp));
    else for (i=0;i<nargs;i++)
	   *x++=(i || u.f.nf) ? va_arg(ll,object) : first;
  }

  /*FIXME: Problem here relying on VFUN_NARGS or fcall.fun or FUN_VALP might foil sharing these links in different contexts*/
  /*links currently shared by rt at clp apnarg, so VFUN_NARGS<0 is safe*/
  /*abs(VFUN_NARGS) above is dangerous*/

  fas=do_link=Rset;
  switch(tp) {
  case t_function:
    {
      fixnum neval=fun->fun.fun_neval/* ,nvald=vald */;
      neval=fun->fun.fun_vv ? neval : -neval;
      /* nvald=FUN_VALP ? vald : 0; */
      if (pushed)
	fas=0;
      else if (margs!=fun->fun.fun_minarg) /*margs < fun->fun.fun_minarg*/
      	fas=0;
      else if (u.f.va &&(nfargs<fun->fun.fun_minarg || nfargs>fun->fun.fun_maxarg))/*u.f.va -> varg, xxx*/
	fas=0;
      else if (u.f.va && VFUN_NARGS<0 && fun->fun.fun_minarg==fun->fun.fun_maxarg)/*runtime apply #arg checking omitted in reg fns*/
	fas=0;
      /* else if (u.f.va && VFUN_NARGS<0 && */
      /* 	       (nargs-1<fun->fun.fun_minarg || nargs-1>fun->fun.fun_maxarg))/\*u.f.va -> varg, xxx*\/ */
      /* 	fas=0; */
      /* FIXME: below should be removed?*/
      else if (!varg && (fun->fun.fun_minarg!=fun->fun.fun_maxarg))/*and maybe inverse for error checking*/
	fas=0;
      else if (vald!=neval && (vald<=0 || !neval || neval>vald))/*margs funvalp aggregate across file*//*FIXME check valp*/
	fas=0;
      else if (fun->fun.fun_env!=def_env && !clp)
	fas=0;
      else if (fun->fun.fun_argd!=argd)
	fas=0;
    }
    break;
  default:
    fas=0;
  }

  if (fas!=Rset && sSAfast_link_warningsA->s.s_dbind==Ct) {
    if (tp==t_function)
      fprintf(stderr,"Warning: arg/val mismatch in call to %-.*s (%p) prevents fast linking:\n %lu %lu/%lu %u(%u)  %lu %u  %lu %u  %lu, recompile caller\n",
	      (int)(type_of(sym)==t_symbol ? sym->s.s_fillp : 0),sym->s.s_self,sym,
	      argd,fun->fun.fun_argd,
	      vald,fun->fun.fun_neval,fun->fun.fun_vv,
	      margs,fun->fun.fun_minarg,nargs,fun->fun.fun_maxarg,pushed);
    if (tp==t_cfun)
      fprintf(stderr,"Warning: arg/val mismatch in call to %-.*s (%p) prevents fast linking:is cfun\n",
	      (int)(type_of(sym)==t_symbol ? sym->s.s_fillp : 0),sym->s.s_self,sym);

  }

  if (sSAprofilingA->s.s_dbind!=Cnil)
    sSin_call->s.s_gfdef->fun.fun_self(sym);

  if (fas) {

    if (do_link && link) {
      (void) vpush_extend(link,sLAlink_arrayA->s.s_dbind);
      (void) vpush_extend(*link,sLAlink_arrayA->s.s_dbind);	 
      *link = (void *)fun->fun.fun_self;
    }

    if (sSAprofilingA->s.s_dbind!=Cnil)
      sSout_call->s.s_gfdef->fun.fun_self(fSgettimeofday());
    
    return(c_apply_n(fun->fun.fun_self,x-tmp,tmp));

  } else {
    
    object res;
    register object *base,*old_top;
    enum ftype result_type;
    fixnum larg=0,i;

#define POP_BITS(x_,y_) ({ufixnum _t=x_&((1<<y_)-1);x_>>=y_;_t;})

    result_type=POP_BITS(argd,2);

    if (vald) larg=(fixnum)fcall.valp;

    if (!pushed) {
      
      object y;
      
      vs_base=vs_top; /*???*/

      for (i=0;i<nargs;i++) {
	
	enum ftype typ;

	y=tmp[i];
	
	switch((typ=POP_BITS(argd,2))) {
	case f_fixnum:
	  y=make_fixnum((fixnum)y);
	  break;
	case f_integer:
	  y=make_integer((GEN)y);
	  break;
	default:
	  break;
	}
	
	vs_push(y);
	
      }

      if (u.f.va && VFUN_NARGS<0)
	for (y=*--vs_top;y!=Cnil;y=y->c.c_cdr)
	  vs_push(y->c.c_car);
      
      vs_check;

    }

    base=vs_base;
    old_top=vs_top;
    funcall(fun);
    
    res=vs_base[0];
    if (larg) {
      object *tmp=vs_base+1,*tl=(void *)larg,*tle=tl+abs(vald);/*FIXME avoid if pushed*/
      for (;tl<tle && tmp<vs_top;)
	*tl++=*tmp++;
      if (vald<0)
	for (;tl<tle;)
	  *tl++=Cnil;
      vs_top=tmp>vs_top ? tl-1 : tl;
    } else
      vs_top=base;

    for (;--old_top>=vs_top;) *old_top=Cnil;
    
    switch(result_type) {
    case f_fixnum:
      res=(object)fix(res);
      break;
    case f_integer:
      res=(object)otoi(res);
      break;
    default:
      break;
    }
    
    if (sSAprofilingA->s.s_dbind!=Cnil)
      sSout_call->s.s_gfdef->fun.fun_self(fSgettimeofday());

    return res;
    
  }

}

object
call_proc_cs1(object fun,...) {
  register object res;
  ufixnum vald;
  va_list ap;
  va_start(ap,fun);
  vald=((31<<12)|(1<<17)|(1<<18)|(1<<20));
  res=call_proc_new(fun,1,vald,0,0,0,ap);
  va_end(ap);
  return res;
}


object
call_proc_cs2(object first,...) {
  register object res;
  ufixnum vald;
  va_list ap;
  object fun=fcall.fun;
  va_start(ap,first);
  vald=((31<<12)|(1<<17)|(1<<18));
  res=call_proc_new(fun,1,vald,0,0,first,ap);
  va_end(ap);
  return res;
}


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

/* go from beg+1 below limit setting entries equal to 0 until you
   come to FRESH 0's . */

#define FRESH 40

int
clear_stack(object *beg, object *limit) {
  int i=0;
  while (++beg < limit) {
    if (*beg==0) i++;
    if (i > FRESH) return 0;
    *beg=0;
  } 
  return 0;
}

DEFUN_NEW("SET-MV",object,fSset_mv,SI,2,2,NONE,OI,OO,OO,OO,(ufixnum i, object val),"") {
  if (i >= (sizeof(MVloc)/sizeof(object)))
    FEerror("Bad mv index",0);
  return(MVloc[i]=val);

}


DEFUN_NEW("MV-REF",object,fSmv_ref,SI,1,1,NONE,OI,OO,OO,OO,(ufixnum i),"") {
  object x;
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
gcl_init_links(void) {	
  gcl_init_xdrfuns();
}

