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


DEFUN_NEW("STRING-MATCH",object,fSstring_match,SI,2,4,NONE,OO,OI,IO,OO,(object pattern,object string,...),
      "Match regexp PATTERN in STRING starting in string starting at START \
and ending at END.  Return -1 if match not found, otherwise \
return the start index  of the first matchs.  The variable \
*MATCH-DATA* will be set to a fixnum array of sufficient size to hold \
the matches, to be obtained with match-beginning and match-end. \
If it already contains such an array, then the contents of it will \
be over written.   \
")
{  int nargs=VFUN_NARGS;
   static char buf[400];
   static char case_fold;
   static regexp *compiled_regexp;
   int len;
   int start;
   int end;
   va_list ap;
   object v = sSAmatch_dataA->s.s_dbind;

   { va_start(ap,string);
     if (nargs>=3) start=va_arg(ap,fixnum);else goto LDEFAULT3;
     if (nargs>=4) end=va_arg(ap,fixnum);else goto LDEFAULT4;
     goto LEND_VARARG;
   LDEFAULT3: start = 0;
   LDEFAULT4: end = string->st.st_fillp;
   LEND_VARARG: va_end(ap);}
   if (type_of(v) != t_vector
       || v->v.v_elttype != aet_fix
       || v->v.v_dim < (NSUBEXP *2))
     v= sSAmatch_dataA->s.s_dbind =
       fSmake_vector1_1((NSUBEXP *2),aet_fix,sLnil);
   if (type_of(string)!= t_string && type_of(string)!=t_symbol)
        not_a_string_or_symbol(string);
   if (type_of(pattern)!= t_string && type_of(pattern)!=t_symbol)
             not_a_string_or_symbol(string);

   if (start < 0
       || end > string->st.st_fillp
       || start > end)
     FEerror("Bad start or end",0);
   len = pattern->ust.ust_fillp;
   if (len==0) {
     /* trivial case of empty pattern */
     int i = 0;
     while (i< NSUBEXP) {
     v->fixa.fixa_self[i] = (i== 0? 0 : -1);
     v->fixa.fixa_self[NSUBEXP+ i] = (i== 0? 0 : -1);
     i++;
       };
     RETURN1(make_fixnum(0));
   }
   {BEGIN_NO_INTERRUPT;
    case_fold_search = (sSAcase_fold_searchA->s.s_dbind != sLnil);
    if ( case_fold != case_fold_search
	|| bcmp(pattern->ust.ust_self,buf,len) != 0
	|| len != strlen(buf))
      { char *tmp = (sizeof(buf) >= len-1 ? buf :(char *) malloc(len+1)) ;
	case_fold = case_fold_search;
	bcopy(pattern->st.st_self,tmp,len);
	tmp[len]=0;
	if (compiled_regexp) {free((void *)compiled_regexp);
			      compiled_regexp = 0;}
	compiled_regexp = regcomp(tmp);
	if (tmp!=buf) free(tmp);
      }
    if (compiled_regexp ==0) {END_NO_INTERRUPT;RETURN1(make_fixnum(-1));}
    { char *str = string->st.st_self;
      char save_c = str[end];
      int ans;
      if (&(str[end])  == (void *)core_end 
	  || &(str[end]) == (void *)compiled_regexp)
	{
	  /* these are just about impossible, and should be the only
	     situations where it is not safe to alter str[end]
	     during the running of regexec...
	     */
	  str = (char *)malloc(string->st.st_fillp+1);
	  bcopy(string->st.st_self, str, string->st.st_fillp);}
      str[end]=0;
      ans = regexec(compiled_regexp,str+start,str,end - start);
      str[end] = save_c;
      if (str!=string->st.st_self) free(str);
      if (ans == 0 ) {END_NO_INTERRUPT;RETURN1(make_fixnum(-1));}
      {int i = -1;
       regexp *r=compiled_regexp;
       while (++i < NSUBEXP)
	 { char *p = r->startp[i] ;
	   v->fixa.fixa_self[i] = (p == 0 ? -1 : p - str);
	   p = r->endp[i] ;
	   v->fixa.fixa_self[NSUBEXP+ i] = (p == 0 ? -1 : p - str);}
       END_NO_INTERRUPT;
       RETURN1(make_fixnum(v->fixa.fixa_self[0]));
     }}
  }}		  
	

