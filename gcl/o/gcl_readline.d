/* -*-C-*- */
/*
 Copyright (C) 2000 Tuukka Toivonen <tuukkat AT ee.oulu.fi>

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
	readline.d

	Here we have GNU Readline 4.0 library interface.
*/

#define IN_READLINE
#include "include.h"

#ifdef HAVE_READLINE

/* Here begins GNU Readline support. It was designed for Maxima,
 * but it works with GCL fine too. If you want to include word completion
 * code, define RL_COMPLETION, else undefine it.
 * Todo: context sensitive completion, optional keywords.
 * To support Readline, we define wrappers (emulation) for putc/ungetc.
 * by Tuukka Toivonen <tuukkat AT ee.oulu.fi> 2000-07-25, 2000-10-2.
 */

#define RL_COMPLETION

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#if 1
#include <readline/readline.h>
#include <readline/history.h>
#else
#include <readline.h>
#include <history.h>
#endif

int readline_on = 0;		/* On (1) or off (0) */
static int rl_ungetc_em_char = -1;
static char *rl_putc_em_line = NULL;

#ifdef RL_COMPLETION


/* New completion generator avoids malloc excet where required, and
   dynamically searches current package lists -- 20040102 CM */

/* FIXME -- consider mapping malloc to alloca for this function only */

DEFVAR("*READLINE-PREFIX*",sSAreadline_prefixA,SI,Cnil,"");

static char *
rl_completion_words(const char *text, int state) {

  static int i,len,internal,size,prefl;
  static object package,use,tp,*base,l;
  static const char *ftext,*wtext,*pref;
  
  if (state==0) {
    const char *mch,*fmch,*temp,*temp1,*fpref;
    int fprefl;

    fpref=pref=fmch=NULL;
    fprefl=prefl=0;
    if (type_of(sSAreadline_prefixA->s.s_dbind)==t_string) {
      pref=fpref=sSAreadline_prefixA->s.s_dbind->st.st_self;
      prefl=fprefl=sSAreadline_prefixA->s.s_dbind->st.st_fillp;
      if ((fmch=memchr(fpref,':',fprefl))) {
	pref=fmch[1]==':' ? fmch+2 : fmch+1;
	prefl-=pref-fpref;
      } 
    }

    mch=strchr(text,':');
    if (!mch) {
      temp=fmch;
      temp1=fpref;
    } else  {
      temp=mch;
      temp1=text;
      pref=NULL;
      prefl=0;
    }

    if (!temp) 
      package=sLApackageA->s.s_dbind;
    else {
      if (temp==temp1) 
	package=(temp[1]==':') ? sLApackageA->s.s_dbind : keyword_package;
      else {
	static struct string st;
	set_type_of(&st,t_string);
	st.st_self=(char *)temp1;
	st.st_fillp=st.st_dim=temp-temp1;
	st.st_hasfillp=1;
	package=find_package((object)&st);
      }
    }
    
    package=package ? package : user_package;
    use=package->p.p_uselist;
    internal=temp && temp[1]==':' ? 1 : 0;
    ftext=text;
    wtext=mch ? mch+1 : ftext;
    wtext=*wtext==':' ? wtext+1 : wtext;
    len=strlen(wtext);
    tp=package;
    i=0;
    base=internal ? tp->p.p_internal : tp->p.p_external;
    size=internal ? tp->p.p_internal_size : tp->p.p_external_size;
    l=base[i];

  }

  while (tp && tp != Cnil) {

    while (1) {
      while (consp(l)) {
	struct symbol sym=l->c.c_car->s;
	l=l->c.c_cdr;
	if (pref) {
	  if (sym.s_fillp<prefl ||
	      strncasecmp(pref,sym.s_self,prefl))
	    continue;
	  sym.s_self+=prefl;
	  sym.s_fillp-=prefl;
	}
	if (sym.s_fillp>=len && 
	    !strncasecmp(wtext,sym.s_self,len)) {
	  static char *c;
	  c=malloc((wtext-ftext)+sym.s_fillp+1);
	  memcpy(c,ftext,wtext-ftext);
	  memcpy(c+(wtext-ftext),sym.s_self,sym.s_fillp);
	  c[(wtext-ftext)+sym.s_fillp]=0;
	  return c;
	}
      }
      if (++i==size)
	break;
      l=base[i];
    }      

    tp=use->c.c_car;
    use=use->c.c_cdr;
    base=internal ? tp->p.p_internal : tp->p.p_external;
    size=internal ? tp->p.p_internal_size : tp->p.p_external_size;
    i=0;
    l=base[i];

  }

  return NULL;
  
}

#ifndef HAVE_DECL_RL_COMPLETION_MATCHES
/* readline 4.3 has it, readline 4.1 has completion_matches instead */
#define rl_completion_matches completion_matches
#endif

#ifndef HAVE_RL_COMPENTRY_FUNC_T
/* same here */
typedef char *rl_compentry_func_t(const char *, int);
#endif

#endif

int rl_putc_em(int c, FILE *f) {

  static int allocated_length = 0;
  static int current_length = 0;
  char *old_line;
  
  if (f!=stdout || !isatty(fileno(f)) ) goto tail;
  
  if (c=='\r' || c=='\n') {
    current_length = 0;
    if (allocated_length>0) rl_putc_em_line[0] = 0;
    goto tail;
  }
  
  if (current_length+2 > allocated_length) {
    allocated_length = (current_length+8)*2;
    old_line = rl_putc_em_line;
    rl_putc_em_line = realloc(old_line, allocated_length);
    if (rl_putc_em_line==NULL) {
      free(old_line);
      allocated_length = 0;
      current_length = 0;
      goto tail;
    }
  }
  
  rl_putc_em_line[current_length++] = (unsigned char)c;
  rl_putc_em_line[current_length] = 0;
  
 tail:
  return putc(c, f);

}

int rl_getc_em(FILE *f) {

  static char *line = NULL;
  static int linepos = 0;
  int r;
  
  if (f!=stdin || !isatty(fileno(f)) ) return getc(f);
  
  if (rl_ungetc_em_char!=-1) {
    r = rl_ungetc_em_char;
    rl_ungetc_em_char = -1;
    return r;
  }
  
  if (line==NULL) {
    if (readline_on==1) {
      putc('\r', stdout);
      line = readline(rl_putc_em_line);
      rl_putc_em('\r', stdout);
      if (line==NULL) return *rl_line_buffer=EOF;
      if (line[0] != 0) add_history(line);
    } else {
      return getc(f);
    }
  }
  
  if (line[linepos]==0) {
    free(line);
    line = NULL;
    linepos = 0;
    if (rl_line_buffer) *rl_line_buffer=0;
    return '\n';
  }
  
  return line[linepos++];

}

int rl_ungetc_em(int c, FILE *f) {

  if (f!=stdin || !isatty(fileno(f)) ) return ungetc(c, f);
  rl_ungetc_em_char = ((unsigned char)c);
  return c;

}

static void
FFN(siLreadline_on)() {

  const char *cp;

  if (!isatty(0)) {
    FEerror("GCL is not being run from a terminal", 0);
    return;
  }
  
  if ((cp=getenv("TERM")) && !strcmp(cp,"dumb")) {
    FEerror("Controlling terminal is not readline capable", 0);
    return;
  }

  readline_on=1;
  return;

}

static void
FFN(siLreadline_off)() {

  readline_on=0;
  return;

}

void
gcl_init_readline_function(void) {
  char *cp=getenv("TERM");

  rl_readline_name="GCL";
#ifdef RL_COMPLETION
  rl_completion_entry_function = rl_completion_words;
#endif			
  if (isatty(0) && (!cp || strcmp(cp,"dumb")))
    readline_on=1;

}

void
gcl_init_readline(void) {
  make_si_function("READLINE-ON", siLreadline_on);
  make_si_function("READLINE-OFF", siLreadline_off);
}

#endif /* HAVE_READLINE */
