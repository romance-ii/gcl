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

static int readline_on = 0;		/* On (1) or off (0) */
static int rl_ungetc_em_char = -1;
static unsigned char *rl_putc_em_line = NULL;

#ifdef RL_COMPLETION

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

/* Attempt to complete on the contents of TEXT.  START and END bound the
   region of rl_line_buffer that contains the word to complete.  TEXT is
   the word to complete.  We can use the entire contents of rl_line_buffer
   in case we want to do some simple parsing.  Return the array of matches,
   or NULL if there aren't any. */
extern char **completion_matches(char *,char *(*)(char *,int));
static char **rl_completion(char *text, int start, int end) {
	return completion_matches(text, rl_completion_words);
}
#endif

int rl_getc_em(FILE *f) {
	static unsigned char *line = NULL;
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
			if (line==NULL) return EOF;
			if (line[0] != 0) add_history(line);
		} else {
			return getc(f);
		}
	}

	if (line[linepos]==0) {
		free(line);
		line = NULL;
		linepos = 0;
		return '\n';
	}

	return line[linepos++];
}

int rl_ungetc_em(int c, FILE *f) {
	if (f!=stdin || !isatty(fileno(f)) ) return ungetc(c, f);
	rl_ungetc_em_char = ((unsigned char)c);
	return c;
}

int rl_putc_em(int c, FILE *f) {
	static int allocated_length = 0;
	static int current_length = 0;
	unsigned char *old_line;

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

void
gcl_init_readline_function(void) {
	rl_readline_name = NULL;
#ifdef RL_COMPLETION
	rl_attempted_completion_function = (CPPFunction *)rl_completion;
#endif			
	make_si_function("READLINE-INIT", siLreadline_init); 
}

#endif /* HAVE_READLINE */
