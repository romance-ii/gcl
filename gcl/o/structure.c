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
	structure.c

	structure interface
*/

#include <string.h>
#include "include.h"


#define COERCE_DEF(x) if (type_of(x)==t_symbol) \
  x=getf(x->s.s_plist,sSs_data,Cnil)

#define check_type_structure(x) \
  if(type_of((x))!=t_structure) \
    FEwrong_type_argument(sLstructure,(x)) 


static bool
structure_subtypep(object x, object y)
{ if (x==y) return 1;
  if (type_of(x)!= t_structure
      || type_of(y)!=t_structure)
    FEerror("bad call to structure_subtypep",0);
  {if (S_DATA(y)->included == Cnil) return 0;
   while ((x=S_DATA(x)->includes) != Cnil)
     { if (x==y) return 1;}
   return 0;
 }}

static void
bad_raw_type(void)
{     	  FEerror("Bad raw struct type",0);}


object
structure_ref(object x, object name, int i)
{unsigned short *s_pos;
 COERCE_DEF(name);
 if (type_of(x) != t_structure ||
     (type_of(name)!=t_structure) ||
     !structure_subtypep(x->str.str_def, name))
   FEwrong_type_argument((type_of(name)==t_structure ?
			  S_DATA(name)->name : name),
			 x);
 s_pos = &SLOT_POS(x->str.str_def,0);
 switch((SLOT_TYPE(x->str.str_def,i)))
   {
   case aet_object: return(STREF(object,x,s_pos[i]));
   case aet_fix:  return(make_fixnum((STREF(fixnum,x,s_pos[i]))));
   case aet_ch:  return(code_char(STREF(char,x,s_pos[i])));
   case aet_bit:
   case aet_char: return(small_fixnum(STREF(char,x,s_pos[i])));
   case aet_sf: return(make_shortfloat(STREF(shortfloat,x,s_pos[i])));
   case aet_lf: return(make_longfloat(STREF(longfloat,x,s_pos[i])));
   case aet_uchar: return(small_fixnum(STREF(unsigned char,x,s_pos[i])));
   case aet_ushort: return(make_fixnum(STREF(unsigned short,x,s_pos[i])));
   case aet_short: return(make_fixnum(STREF(short,x,s_pos[i])));
   default:
     bad_raw_type();
     return 0;
   }}


static void
siLstructure_ref1(void)
{object x=vs_base[0];
 int n=fix(vs_base[1]);
 object def;
 check_type_structure(x);
 def=x->str.str_def;
 if(n>= S_DATA(def)->length)
   FEerror("Structure ref out of bounds",0);
 vs_base[0]=structure_ref(x,x->str.str_def,n);
 vs_top=vs_base+1;
}

 
 


object
structure_set(object x, object name, int i, object v)
{unsigned short *s_pos;
 
 COERCE_DEF(name);
 if (type_of(x) != t_structure ||
     type_of(name) != t_structure ||
     !structure_subtypep(x->str.str_def, name))
   FEwrong_type_argument((type_of(name)==t_structure ?
			  S_DATA(name)->name : name)
			 , x);

#ifdef SGC
 /* make sure the structure header is on a writable page */
 if (x->d.m) FEerror("bad gc field",0); else  x->d.m = 0;
#endif   
 
 s_pos= & SLOT_POS(x->str.str_def,0);
 switch(SLOT_TYPE(x->str.str_def,i)){
   
   case aet_object: STREF(object,x,s_pos[i])=v; break;
   case aet_fix:  (STREF(fixnum,x,s_pos[i]))=fix(v); break;
   case aet_ch:  STREF(char,x,s_pos[i])=char_code(v); break;
   case aet_bit:
   case aet_char: STREF(char,x,s_pos[i])=fix(v); break;
   case aet_sf: STREF(shortfloat,x,s_pos[i])=sf(v); break;
   case aet_lf: STREF(longfloat,x,s_pos[i])=lf(v); break;
   case aet_uchar: STREF(unsigned char,x,s_pos[i])=fix(v); break;
   case aet_ushort: STREF(unsigned short,x,s_pos[i])=fix(v); break;
   case aet_short: STREF(short,x,s_pos[i])=fix(v); break;
 default:
   bad_raw_type();

   }
 return(v);
}

static void
siLstructure_subtype_p(void)
{object x,y;
 check_arg(2);
 x=vs_base[0];
 y=vs_base[1];
 if (type_of(x)!=t_structure)
   {vs_base[0]=Cnil; goto BOTTOM;}
 x=x->str.str_def;
 COERCE_DEF(y);
 if (structure_subtypep(x,y)) vs_base[0]=Ct;
 else vs_base[0]=Cnil;
 BOTTOM:
 vs_top=vs_base+1;
}
 
     

object
structure_to_list(object x)
{

	object *p, s;
	struct s_data *def=S_DATA(x->str.str_def);
	int i, n;
	
	s = def->slot_descriptions;
	vs_push(def->name);
	vs_push(Cnil);
	p = &vs_head;
	for (i=0, n=def->length;  !endp(s)&&i<n;  s=s->c.c_cdr, i++) {
		*p = make_cons(car(s->c.c_car), Cnil);
		p = &((*p)->c.c_cdr);
		*p = make_cons(structure_ref(x,x->str.str_def,i), Cnil);
		p = &((*p)->c.c_cdr);
	}
	stack_cons();
	return(vs_pop);
}

void
siLmake_structure(void)
{
  object x,name,*base;
  struct s_data *def=NULL;
  int narg, i,size;
  base=vs_base;
  if ((narg = vs_top - base) == 0)
    too_few_arguments();
  {BEGIN_NO_INTERRUPT;
  x = alloc_object(t_structure);
  name=base[0];
  COERCE_DEF(name);
  if (type_of(name)!=t_structure  ||
      (def=S_DATA(name))->length != --narg)
    FEerror("Bad make_structure args for type ~a",1,
	    base[0]);
  x->str.str_def = name;
  x->str.str_self = NULL;
  size=S_DATA(name)->size;
  base[0] = x;
  x->str.str_self = (object *)
    (def->staticp == Cnil ? alloc_relblock(size)
     : alloc_contblock(size));
  /* There may be holes in the structure.
     We want them zero, so that equal can work better.
     */
  if (S_DATA(name)->has_holes != Cnil)
    bzero(x->str.str_self,size);
  {unsigned char *s_type;
   unsigned short *s_pos;
   s_pos= (&SLOT_POS(x->str.str_def,0));
   s_type = (&(SLOT_TYPE(x->str.str_def,0)));
   base=base+1;
   for (i = 0;  i < narg;  i++)
     {object v=base[i];
      switch(s_type[i]){
	     
      case aet_object: STREF(object,x,s_pos[i])=v; break;
      case aet_fix:  (STREF(fixnum,x,s_pos[i]))=fix(v); break;
      case aet_ch:  STREF(char,x,s_pos[i])=char_code(v); break;
      case aet_bit:
      case aet_char: STREF(char,x,s_pos[i])=fix(v); break;
      case aet_sf: STREF(shortfloat,x,s_pos[i])=sf(v); break;
      case aet_lf: STREF(longfloat,x,s_pos[i])=lf(v); break;
      case aet_uchar: STREF(unsigned char,x,s_pos[i])=fix(v); break;
      case aet_ushort: STREF(unsigned short,x,s_pos[i])=fix(v); break;
      case aet_short: STREF(short,x,s_pos[i])=fix(v); break;
      default:
	bad_raw_type();

      }}
   vs_top = base;
   vs_base=base-1;
  END_NO_INTERRUPT;}
 }
}

static void
siLcopy_structure(void)
{
	object x, y;
	struct s_data *def;

	check_arg(1);
/*  	if (vs_top-vs_base < 1) too_few_arguments(); */
	x = vs_base[0];
	check_type_structure(x);
	{BEGIN_NO_INTERRUPT;
	vs_base[0] = y = alloc_object(t_structure);
	def=S_DATA(y->str.str_def = x->str.str_def);
	y->str.str_self = NULL;
	y->str.str_self = (object *)alloc_relblock(def->size);
	bcopy(x->str.str_self,y->str.str_self,def->size);
	vs_top=vs_base+1;
        END_NO_INTERRUPT;}
}

void
siLstructure_name(void)
{
	check_arg(1);
	check_type_structure(vs_base[0]);
	vs_base[0] = S_DATA(vs_base[0]->str.str_def)->name;
}

void
siLstructure_ref(void)
{
	check_arg(3);
	vs_base[0]=structure_ref(vs_base[0],vs_base[1],fix(vs_base[2]));
	vs_top=vs_base+1;
}

void
siLstructure_set(void)
{
	check_arg(4);
	structure_set(vs_base[0],vs_base[1],fix(vs_base[2]),vs_base[3]);
	vs_base = vs_top-1;
}

void
siLstructurep(void)
{
	check_arg(1);
	if (type_of(vs_base[0]) == t_structure)
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
}

void
siLrplaca_nthcdr(void)
{

/*
	Used in DEFSETF forms generated by DEFSTRUCT.
	(si:rplaca-nthcdr x i v) is equivalent to 
	(progn (rplaca (nthcdr i x) v) v).
*/
	int i;
	object l;

	check_arg(3);
	if (type_of(vs_base[1]) != t_fixnum || fix(vs_base[1]) < 0)
		FEerror("~S is not a non-negative fixnum.", 1, vs_base[1]);
	if (type_of(vs_base[0]) != t_cons)
		FEerror("~S is not a cons.", 1, vs_base[0]);

	for (i = fix(vs_base[1]), l = vs_base[0];  i > 0; --i) {
		l = l->c.c_cdr;
		if (endp(l))
			FEerror("The offset ~S is too big.", 1, vs_base[1]);
	}
	take_care(vs_base[2]);
	l->c.c_car = vs_base[2];
	vs_base = vs_base + 2;
}

void
siLlist_nth(void)
{

/*
	Used in structure access functions generated by DEFSTRUCT.
	si:list-nth is similar to nth except that
	(si:list-nth i x) is error if the length of the list x is less than i.
*/
	int i;
	object l;

	check_arg(2);
	if (type_of(vs_base[0]) != t_fixnum || fix(vs_base[0]) < 0)
		FEerror("~S is not a non-negative fixnum.", 1, vs_base[0]);
	if (type_of(vs_base[1]) != t_cons)
		FEerror("~S is not a cons.", 1, vs_base[1]);

	for (i = fix(vs_base[0]), l = vs_base[1];  i > 0; --i) {
		l = l->c.c_cdr;
		if (endp(l))
			FEerror("The offset ~S is too big.", 1, vs_base[0]);
	}

	vs_base[0] = l->c.c_car;
	vs_popp;
}


static void
siLmake_s_data_structure(void)
{object x,y,raw,*base;
 int i;
 check_arg(5);
 x=vs_base[0];
 base=vs_base;
 raw=vs_base[1];
 y=alloc_object(t_structure);
 y->str.str_def=y;
 y->str.str_self = (object *)( x->v.v_self);
 S_DATA(y)->name  =sSs_data;
 S_DATA(y)->length=(raw->v.v_dim);
 S_DATA(y)->raw   =raw;
 for(i=3; i<raw->v.v_dim; i++)
   y->str.str_self[i]=Cnil;
 S_DATA(y)->slot_position=base[2];
 S_DATA(y)->slot_descriptions=base[3];
 S_DATA(y)->staticp=base[4];
 S_DATA(y)->size = (raw->v.v_dim)*sizeof(object);
 vs_base[0]=y;
 vs_top=vs_base+1;
}

static void
siLstructure_def(void)
{check_arg(1);
 check_type_structure(vs_base[0]);
  vs_base[0]=vs_base[0]->str.str_def;
}

short aet_sizes [] = {
sizeof(object),  /* aet_object  t  */
sizeof(char),  /* aet_ch  string-char  */
sizeof(char),  /* aet_bit  bit  */
sizeof(fixnum),  /* aet_fix  fixnum  */
sizeof(float),  /* aet_sf  short-float  */
sizeof(double),  /* aet_lf  long-float  */
sizeof(char),  /* aet_char  signed char */
sizeof(char),  /* aet_uchar  unsigned char */
sizeof(short),  /* aet_short  signed short */
sizeof(short)  /* aet_ushort  unsigned short   */
};

  



static void
siLsize_of(void)
{ object x= vs_base[0];
  int i;
  i= aet_sizes[fix(fSget_aelttype(x))];
  vs_base[0]=make_fixnum(i);
}
  
static void
siLaet_type(void)
{vs_base[0]=fSget_aelttype(vs_base[0]);}


/* Return N such that something of type ARG can be aligned on
   an address which is a multiple of N */


static void
siLalignment(void)
{struct {double x; int y; double z;
	 float x1; int y1; float z1;}
 joe;
 joe.z=3.0;
 
 if (vs_base[0]==sLlong_float)
   {vs_base[0]=make_fixnum((long)&joe.z- (long)&joe.y); return;}
 else
   if (vs_base[0]==sLshort_float)
     {vs_base[0]=make_fixnum((long)&(joe.z1)-(long)&(joe.y1)); return;}
   else
     {siLsize_of();}
}
   
 
DEF_ORDINARY("S-DATA",sSs_data,SI,"");

void
init_structure_function(void)
{


	make_si_function("MAKE-STRUCTURE", siLmake_structure);
	make_si_function("MAKE-S-DATA-STRUCTURE",siLmake_s_data_structure);
	make_si_function("COPY-STRUCTURE", siLcopy_structure);
	make_si_function("STRUCTURE-NAME", siLstructure_name);
	make_si_function("STRUCTURE-REF", siLstructure_ref);
	make_si_function("STRUCTURE-DEF", siLstructure_def);
	make_si_function("STRUCTURE-REF1", siLstructure_ref1);
	make_si_function("STRUCTURE-SET", siLstructure_set);
	make_si_function("STRUCTUREP", siLstructurep);
	make_si_function("SIZE-OF", siLsize_of);
	make_si_function("ALIGNMENT",siLalignment);
	make_si_function("STRUCTURE-SUBTYPE-P",siLstructure_subtype_p);
	make_si_function("RPLACA-NTHCDR", siLrplaca_nthcdr);
	make_si_function("LIST-NTH", siLlist_nth);
	make_si_function("AET-TYPE",siLaet_type);
}
