/*
 Copyright (C) 1994 W. Schelter

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
#include "include.h"
#include "page.h"

#undef STATIC
#define regerror gcl_regerror
static void
gcl_regerror(char *s)
{ 
  FEerror("Regexp Error: ~a",1,make_simple_string(s));
}
#undef endp
#include "regexp.c"
#define check_string(x) \
	if (type_of(x) != t_string) \
		not_a_string(x)


DEFVAR("*MATCH-DATA*",sSAmatch_dataA,SI,sLnil,"");
DEFVAR("*CASE-FOLD-SEARCH*",sSAcase_fold_searchA,SI,sLnil,
       "Non nil means that a string-match should ignore case");

DEFUN_NEW("MATCH-BEGINNING",object,fSmatch_beginning,SI,1,1,NONE,OI,OO,OO,OO,(fixnum i),
   "Returns the beginning of the I'th match from the previous STRING-MATCH, \
where the 0th is for the whole regexp and the subsequent ones match parenthetical expressions.  -1 is returned if there is no match, or if the *match-data* \
vector is not a fixnum array.")
{ object v = sSAmatch_dataA->s.s_dbind;
  if (type_of(v)==t_vector
      && (v->v.v_elttype == aet_fix))
  RETURN1(make_fixnum(sSAmatch_dataA->s.s_dbind->fixa.fixa_self[i]));
  RETURN1(make_fixnum(-1));
}

DEFUN_NEW("MATCH-END",object,fSmatch_end,SI,1,1,NONE,OI,OO,OO,OO,(fixnum i),
   "Returns the end of the I'th match from the previous STRING-MATCH")
{ object v = sSAmatch_dataA->s.s_dbind;
  if (type_of(v)==t_vector
      && (v->v.v_elttype == aet_fix))
  RETURN1(make_fixnum(sSAmatch_dataA->s.s_dbind->fixa.fixa_self[i+NSUBEXP]));
  RETURN1(make_fixnum(-1));
}

DEFUN_NEW("COMPILE-REGEXP",object,fScompile_regexp,SI,1,1,NONE,OO,OO,OO,OO,(object p),
	  "Provide handle to export pre-compiled regexp's to string-match") {

  char *tmp;
  object res;

  if (type_of(p)!= t_string && type_of(p)!=t_symbol)
    not_a_string_or_symbol(p);
  
  if (!(tmp=alloca(p->st.st_fillp+1)))
    FEerror("out of C stack",0);
  memcpy(tmp,p->st.st_self,p->st.st_fillp);
  tmp[p->st.st_fillp]=0;

  res=alloc_object(t_vector);
  res->v.v_displaced=Cnil;
  res->v.v_hasfillp=1;
  res->v.v_elttype=aet_uchar;
  res->v.v_adjustable=0;
  res->v.v_offset=0;
  if (!(res->v.v_self=(void *)regcomp(tmp,&res->v.v_dim)))
    FEerror("regcomp failure",0);
  res->v.v_fillp=res->v.v_dim;

  RETURN1(res);

}


DEFUN_NEW("STRING-MATCH",object,fSstring_match,SI,2,4,NONE,OO,OI,IO,OO,(object pattern,object string,...),
      "Match regexp PATTERN in STRING starting in string starting at START \
and ending at END.  Return -1 if match not found, otherwise \
return the start index  of the first matchs.  The variable \
*MATCH-DATA* will be set to a fixnum array of sufficient size to hold \
the matches, to be obtained with match-beginning and match-end. \
If it already contains such an array, then the contents of it will \
be over written.   \
") {  

  int i,ans,nargs=VFUN_NARGS,len,start,end;
  static char buf[400],case_fold;
  static regexp *saved_compiled_regexp;
  va_list ap;
  object v = sSAmatch_dataA->s.s_dbind;
  char **pp,*str,save_c=0;
  unsigned np;

  if (type_of(pattern)!= t_string && type_of(pattern)!=t_symbol &&
      (type_of(pattern)!=t_vector || pattern->v.v_elttype!=aet_uchar))
    FEerror("~S is not a regexp pattern", 1 , pattern);
  if (type_of(string)!= t_string && type_of(string)!=t_symbol)
    not_a_string_or_symbol(string);
  
  if (type_of(v) != t_vector || v->v.v_elttype != aet_fix || v->v.v_dim < NSUBEXP*2)
    v=sSAmatch_dataA->s.s_dbind=fSmake_vector1_1((NSUBEXP *2),aet_fix,sLnil);
  
  start=0;
  end=string->st.st_fillp;
  if (nargs>2) {
    va_start(ap,string);
    start=va_arg(ap,fixnum);
    if (nargs>3)
      end=va_arg(ap,fixnum);
    va_end(ap);
  }
  if (start < 0 || end > string->st.st_fillp || start > end)
     FEerror("Bad start or end",0);

  len=pattern->ust.ust_fillp;
   if (len==0) {
     /* trivial case of empty pattern */
     for (i=0;i<NSUBEXP;i++) 
       v->fixa.fixa_self[i]=i ? -1 : 0;
     memcpy(v->fixa.fixa_self+NSUBEXP,v->fixa.fixa_self,NSUBEXP*sizeof(*v->fixa.fixa_self));
     RETURN1(make_fixnum(0));
   }

   {

     regexp *compiled_regexp=saved_compiled_regexp;

     BEGIN_NO_INTERRUPT;

     case_fold_search = sSAcase_fold_searchA->s.s_dbind != sLnil ? 1 : 0;
     
     if (type_of(pattern)==t_vector)
       
       compiled_regexp=(void *)pattern->ust.ust_self;

     else if (case_fold != case_fold_search || len != strlen(buf) || memcmp(pattern->ust.ust_self,buf,len)) 

       compiled_regexp=saved_compiled_regexp=(regexp *)fScompile_regexp(pattern)->v.v_self;


     str=string->st.st_self;
     np=page(str);
     if (np>=MAXPAGE || (type_map[np] != t_contiguous && type_map[np] != t_relocatable) ||
	 str+end==(void *)core_end || str+end==(void *)compiled_regexp) {

       if (!(str=alloca(string->st.st_fillp+1)))
	 FEerror("Cannot allocate memory on C stack",0);
       memcpy(str,string->st.st_self,string->st.st_fillp);

     } else
       save_c=str[end];
     str[end]=0;

     ans = regexec(compiled_regexp,str+start,str,end-start);

     str[end] = save_c;

     if (!ans ) {
       END_NO_INTERRUPT;
       RETURN1(make_fixnum(-1));
     }

     pp=compiled_regexp->startp;
     for (i=0;i<NSUBEXP;i++,pp++)
       v->fixa.fixa_self[i]=*pp ? *pp-str : -1;
     pp=compiled_regexp->endp;
     for (;i<2*NSUBEXP;i++,pp++)
       v->fixa.fixa_self[i]=*pp ? *pp-str : -1;

     END_NO_INTERRUPT;
     RETURN1(make_fixnum(v->fixa.fixa_self[0]));

   }

}
	

