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
#if 0

static char **completion_list = NULL;
static int case_sensitivity = 0;	/* 0 = case sensitive */
					/* 1 = complete to lower case */
					/* 2 = complete to upper case */

/* Generator function for command completion.  STATE lets us know whether
   to start from scratch; without any state (i.e. STATE == 0), then we
   start at the top of the list. */
static char *rl_completion_words(char *text, int state) {
	static int list_index, len;
	char *name;

	/* If this is a new word to complete, initialize now.  This includes
	  saving the length of TEXT for efficiency, and initializing the index
	  variable to 0. */
	if (state==0) {
		list_index = 0;
		len = strlen(text);
	}

	/* Return the next name which partially matches from the command list. */
	while (completion_list!=NULL && (name=completion_list[list_index])!=NULL) {
		list_index++;
		if ( (case_sensitivity==0) ?
			(strncmp(name, text, len)==0) :
			(strncasecmp(name, text, len)==0) ) return strdup(name);
	}

	/* If no names matched, then return NULL. */
	return NULL;
}

#endif

/* New completion generator avoids malloc excet where required, and
   dynamically searches current package lists -- 20040102 CM */

/* FIXME -- consider mapping malloc to alloca for this function only */

DEFVAR("*READLINE-PREFIX*",sSAreadline_prefixA,SI,Cnil,"");

static char *rl_completion_words_new(char *text, int state) {
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
	struct string s;/* ={t_string,0,0,0,1,0,OBJNULL,1,0,(char *)temp1,temp-temp1}; */
	set_type_of(&s,t_string);
	s.st_self=(char *)temp1;
	s.st_fillp=s.st_dim=temp-temp1;
	s.st_hasfillp=1;
	package=find_package((object)&s);
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
      while (type_of(l)==t_cons) {
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

/* Attempt to complete on the contents of TEXT.  START and END bound the
   region of rl_line_buffer that contains the word to complete.  TEXT is
   the word to complete.  We can use the entire contents of rl_line_buffer
   in case we want to do some simple parsing.  Return the array of matches,
   or NULL if there aren't any. */
/* extern char **rl_completion_matches(char *,char *(*)(char *,int)); */
static char **rl_completion(char *text, int start, int end) {
	return rl_completion_matches(text, (rl_compentry_func_t *)rl_completion_words_new);
}
#endif

int rl_putc_em(int c, FILE *f) {
	static int allocated_length = 0;
	static int current_length = 0;
	char *old_line;

	if (f!=stdout || !isatty(fileno(f)) || !readline_on) goto tail;

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
	
	if (f!=stdin || !isatty(fileno(f))) return getc(f);
	
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


/* readline support now initialized automatically -- 20040102 CM */
#if 0

static int qsort_compare(const void *a, const void *b) {
	const char *ac = *((const char **)a);
	const char *bc = *((const char **)b);
	return strcmp(ac, bc);
}

/* Usage: 
 * (si::READLINE-INIT <onoff> <progname> <case> <wordlist>)
 * Where
 *	onoff: T or NIL. T enables Readline support, NIL disables.
 *		When disabled, uses normal getc calls to read input.
 *	progname: STRING. Program name for Readline. This is used to specify
 *		program specific key binding in ~/.inputrc. For more
 *		information about .inputrc, read Readline documentation.
 *	case: 0, 1 or 2. Defines how different cases in word completion
 *		are handled.
 *		0 = case sensitive completion.
 *		1 = case insensitive completion. Everything completed to lower case.
 *		2 = case insensitive completion. Everything completed to upper case.
 *	wordlist: LIST of STRINGs. These are the candidate words for completion.
 *		NIL disables word completion.
 * Examples:
 * (si::READLINE-INIT nil nil nil nil)		; Disable Readline
 * (si::READLINE-INIT t "Gcl" 1 '("first" "second" "third" "rest"))
 */

/* Should this return void or what? Should input args be void? */
static void
FFN(siLreadline_init)() {
	object on_or_off;
	object program_name;
	object case_type;
	object word_list;

	object con, word;
	char **charp;
	int words, i, j;
	char c,*cp;

	if (!isatty(0))
	   return;

	if ((cp=getenv("TERM")) && !strcmp(cp,"dumb"))
	   return;

	check_arg(4);

	on_or_off    = vs_base[0];
	program_name = vs_base[1];
	case_type    = vs_base[2];
	word_list    = vs_base[3];

	if (on_or_off==Cnil) {
		/* Disable Readline support */
		readline_on = 0;
	} else {
		/* Enable Readline support */
		readline_on = 1;

		if (type_of(program_name)==t_string) {

			static char *mrln;

			if (mrln)
				free(mrln);
			mrln = malloc(program_name->st.st_fillp+1);
			if (!mrln) FEerror("Out of memory.", 0); 
			for (i=0; i<program_name->st.st_fillp; i++)
				mrln[i] = program_name->ust.ust_self[i];
			mrln[i] = 0;
			rl_readline_name=mrln;
			rl_initialize();
		} else {
			FEerror("~S is not a string.", 1, program_name);
		}

		if (type_of(case_type)==t_fixnum) {
			i = fix(case_type);
			if (i<0 || i>2) FEerror("Case sensitivity must be between 0 and 2", 0);
			case_sensitivity = i;
		} else {
			FEerror("~S is not a fixnum.", 1, case_type);
		}

		if (type_of(word_list)==t_cons || word_list==Cnil) {
#ifdef RL_COMPLETION
			/* First count the number of completion words and check their type */
			words = 0;
			for (con=word_list; con!=Cnil; con=con->c.c_cdr) {
				word = con->c.c_car;
				if (type_of(word)!=t_string)
					FEerror("Completion list ~S contains non-strings.", 1, word_list);
				words++;
			}

			/* Free old list */
			if (completion_list!=NULL) {
				for (charp=completion_list; *charp!=NULL; charp++)
					free(*charp);
				free(completion_list);
			}

			/* Set up the new completion list */
			completion_list = malloc(sizeof(*completion_list) * (words+1));
			if (completion_list==NULL) FEerror("Out of memory.", 0);
			for (con=word_list,i=0; con!=Cnil; con=con->c.c_cdr,i++) {
				word = con->c.c_car;
				completion_list[i] = malloc(sizeof(char) * (word->st.st_fillp+1));
				if (completion_list[i]==NULL) FEerror("Out of memory.", 0);
				for (j=0; j<word->st.st_fillp; j++) {	
					c = word->ust.ust_self[j];
					if (case_sensitivity!=0) 
						c = (case_sensitivity==1) ? tolower(c) : toupper(c);
					(completion_list[i])[j] = c;
				}
				(completion_list[i])[j] = 0;
			}
			completion_list[i] = NULL;

			/* Sort the completion list */
			qsort(completion_list, words, sizeof(*completion_list), &qsort_compare);
#endif
		} else {
			FEerror("~S is not a list.", 1, word_list);
			/* or maybe use FEwrong_type_argument(...); */
		}
	}
}
#endif


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
  static int n;
  char *pn="GCL",*cp=getenv("TERM");
  rl_readline_name=pn;
#ifdef RL_COMPLETION
	rl_attempted_completion_function = (CPPFunction *)rl_completion;
#endif			
  if (isatty(0) && (!cp || strcmp(cp,"dumb")))
    readline_on=1;
  if (!n) {
    make_si_function("READLINE-ON", siLreadline_on);
    make_si_function("READLINE-OFF", siLreadline_off);
    n=1;
  }
}

#endif /* HAVE_READLINE */
