/* -*-C-*- */
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
	pathname.d
	IMPLEMENTATION-DEPENTENT

	This file contains those functions that interpret namestrings.
*/

/* hacked by Michael Koehne (c) GNU LGPL
 *           kraehe (at) copyleft.de
 *	     Sun May 30 20:59:49 CEST 2004
 *
 * beware of new bugs^h^h^h^h features !
 *
 * feed them to http://www.copyleft.de/gecko/
 * or enjoy     http://www.copyleft.de/lisp/
 * for other Lisp code 
 *
 * many thanks to pfdietz, piso and many other people in #lisp. This hack
 * would never been possible without the regression test and their help.
 * ------------------------------------------------------------------------- */

#include "include.h"
#include <strings.h>
#include <string.h>

DEFVAR("*PATHNAME-RESOLVE*",sSApathname_resolveA,SI,Cnil,
	"list of enableing keyword for pathname resolver");
DEFVAR("*PATHNAME-LOGICAL*",sSApathname_logicalA,SI,Cnil,
	"pathname logical hostname translation assoc");
DEFVAR("*PATHNAME-VIRTUAL*",sSApathname_virtualA,SI,Cnil,
	"pathname virtual hostname translation assoc");
DEFVAR("*PATHNAME-DEVICE*",sSApathname_deviceA,SI,Cnil,
	"pathname device hostname translation assoc");
DEFVAR("*PATHNAME-EXPAND*",sSApathname_expandA,SI,Cnil,
	"pathname logical hostname translation assoc");
DEFVAR("*PATHNAME-ERROR*",sSApathname_errorA,SI,Cnil,
	"pathname last error pathname");

#ifdef ANSI_COMMON_LISP
static object pathKansi; /* this should better be in main.c ! */
#endif

object expand_pathname(o)
object o;
{	
	object n,p;
	if (type_of(o) == t_pathname) {
	    vs_mark;
	    n=make_cons(Cnil,Cnil); p=n;
	    vs_push(n);
	    if (o->pn.pn_device != Cnil) {
		p->c.c_cdr=make_cons(sKdevice,Cnil); p=p->c.c_cdr;
		p->c.c_cdr=make_cons(o->pn.pn_device,Cnil); p=p->c.c_cdr;
	    }
	    if (o->pn.pn_host != Cnil) {
		p->c.c_cdr=make_cons(sKhost,Cnil); p=p->c.c_cdr;
		p->c.c_cdr=make_cons(o->pn.pn_host,Cnil); p=p->c.c_cdr;
	    }
	    if (o->pn.pn_directory != Cnil) {
		p->c.c_cdr=make_cons(sKdirectory,Cnil); p=p->c.c_cdr;
		p->c.c_cdr=make_cons(o->pn.pn_directory,Cnil); p=p->c.c_cdr;
	    }
	    if (o->pn.pn_name != Cnil) {
		p->c.c_cdr=make_cons(sKname,Cnil); p=p->c.c_cdr;
		p->c.c_cdr=make_cons(o->pn.pn_name,Cnil); p=p->c.c_cdr;
	    }
	    if (o->pn.pn_type != Cnil) {
		p->c.c_cdr=make_cons(sKtype,Cnil); p=p->c.c_cdr;
		p->c.c_cdr=make_cons(o->pn.pn_type,Cnil); p=p->c.c_cdr;
	    }
	    if (o->pn.pn_version != Cnil) {
		p->c.c_cdr=make_cons(sKversion,Cnil); p=p->c.c_cdr;
		p->c.c_cdr=make_cons(o->pn.pn_version,Cnil); p=p->c.c_cdr;
	    }
	    n=n->c.c_cdr;
	    vs_reset;
	} else {
	    n=o;
	}
	return n;
}

object
file_error(str,obj)
char *str;
object obj;
{
	object e;
        vs_mark;

	sSApathname_errorA->s.s_dbind=obj;
	e= (symbol_value(sSApathname_expandA) == Cnil) ?
	    obj : expand_pathname(obj);
        vs_push(e);
	PATHNAME_ERROR(e,str,1,e);
	vs_reset;
	return Cnil;
}

object
file_type_error(str,obj,typ)
char *str;
object obj,typ;
{
	object e;
        vs_mark;

	e= (symbol_value(sSApathname_expandA) == Cnil) ?
	    obj : expand_pathname(obj);
        vs_push(e);
	TYPE_ERROR(e,typ);
	vs_reset;
	return Cnil;
}

/*
 * pathname_resolve
 *   lookup the SI:*PATHNAME-RESOLVE* variable, if I need to
 *   show :host, :device or :version.
 *
 * examples:
 * (setq SI:*PATHNAME-RESOLVE* :host)             ;;; show host on Unix
 * (setq SI:*PATHNAME-RESOLVE* :device)           ;;; show device on DOS
 * (setq SI:*PATHNAME-RESOLVE* '(:host :device))  ;;; show host and device
 *
 * this variable is also used by Ldirectory from unixfsys and mingfile.
 *
 * pathname_resolve
 *   query SI:*PATHNAME-RESOLVE* and return 0 or 1
 */

int
pathname_resolve(key)
object key;
{
	object o=symbol_value(sSApathname_resolveA);
	if (o == key) return 1;
	while (consp(o)) {
	    if (o->c.c_car==key) return 1;
	    o=o->c.c_cdr;
	}
	return 0;
}

/*
 * get_pathname_lookup
 *  a poor mens assoc - easier to call than assoc from inline C
 *
 *  returns (ASSOC item a_list :TEST 'EQUAL)
 */

static object
get_pathname_lookup(item,a_list)
object item,a_list;
{
	if ((item == Cnil) || (a_list == Cnil))
	    return Cnil;

	if (type_of(a_list) == t_symbol)
	    a_list = symbol_value(a_list);

	while ((a_list != Cnil) &&
	       (consp(a_list)) &&
	        !endp(a_list))
	    if ((type_of(item) == t_string) &&
	    	(a_list->c.c_car != Cnil) &&
		(consp(a_list->c.c_car)) &&
		(type_of(a_list->c.c_car->c.c_car) == t_string) &&
		(string_equal(item, a_list->c.c_car->c.c_car) == TRUE))
		    return(a_list->c.c_car);
	    else
	    if ((a_list->c.c_car != Cnil) &&
		(consp(a_list->c.c_car)) &&
		(type_of(a_list->c.c_car->c.c_car) == type_of(item)) &&
		equal(item,a_list->c.c_car->c.c_car))
		    return(a_list->c.c_car);
	    else
		    a_list = a_list->c.c_cdr;
	
	return Cnil;
}

object
pathname_lookup(item,a_list)
object item,a_list;
{
     object r;
     r=get_pathname_lookup(item,a_list);
     if (consp(r)) return r->c.c_cdr;
     return Cnil;
}

@(defun pathname_lookup (item a_list)
@
	@(return `get_pathname_lookup(item,a_list)`)
@)

/*
 * set_pathname_lookup
 *  defsetf hook for poor mans assoc
 *
 *  returns new a_list
 */

object
set_pathname_lookup(item,a_list,value)
object item,a_list,value;
{
	object l;
	vs_mark;

	if (item == Cnil) 
	    return Cnil;

	if (consp(a_list)) {
	    l=get_pathname_lookup(item,a_list);
	    if (consp(l)) {
		l->c.c_cdr = value;
		return(a_list);
	    }
	}

	vs_push(make_cons(item,value));
	l=make_cons(vs_head,a_list);
	vs_reset;
	return l;
}

@(defun set_pathname_lookup (item a_list value)
@
	@(return `set_pathname_lookup(item,a_list,value)`)
@)

/*
 * pathname_case_word
 *   checks if a word is a string convert if :case :common.
 *
 * vs_push and return symbol or new string
 */

object
pathname_case_word(wrd, casekey)
object wrd, casekey;
{
	object x=wrd;

#ifdef ANSI_COMMON_LISP

	int seen_lower=0;
	int seen_upper=0;
	int i;

	if (type_of(wrd) == t_string) {
	    for (i=0; i<wrd->st.st_fillp; i++) {
		if (isupper(wrd->st.st_self[i])) seen_upper=1;
		if (islower(wrd->st.st_self[i])) seen_lower=1;
	    }
	    if (casekey == sKcommon) {
		if (seen_lower != seen_upper) {
		    x=copy_simple_string(wrd);
		    for (i=0; i<wrd->st.st_fillp; i++) {
			if (isupper(wrd->st.st_self[i]))
			    x->st.st_self[i]=tolower(x->st.st_self[i]);
			else
			if (islower(wrd->st.st_self[i]))
			    x->st.st_self[i]=toupper(x->st.st_self[i]);
		    }
		}
	    } else
	    if (casekey == sKdowncase) {
		if ((seen_lower != seen_upper) || pathname_resolve(pathKansi))
		{   x=copy_simple_string(wrd);
		    for (i=0; i<wrd->st.st_fillp; i++)
			if (isupper(wrd->st.st_self[i]))
			    x->st.st_self[i]=tolower(x->st.st_self[i]);
	    	}
	    }
	}
#endif	

	vs_push(x); /* make-pathname will vs_reset later */
	return(x);
}

/*
 * make_pathname
 *   creates a new object of t_pathname.
 *   checks case and constrains directory to t_cons
 * 
 * vs_mark; vs_push lot of junk; vs_reset; return new pathname
 */

void
constrain_pathname(x)
object x;
{
        object d,t,l;
	int start,count,lhost=0;
	vs_mark;

	if (type_of(x) != t_pathname) {
	    FEwrong_type_argument(sLpathname,x);
	    return;
	}
	if (pathname_resolve(sKhost) &&
	    (type_of(x->pn.pn_host) == t_string) &&
	    (pathname_lookup(x->pn.pn_host,sSApathname_logicalA) != Cnil)) {
	    if (x->pn.pn_device==Cnil)
	        x->pn.pn_device=sKunspecific;
	    else
	    if (x->pn.pn_device!=sKunspecific)
		file_error("Invalid device in pathname ~S.",x);
	    lhost=1;
	} 


	if ((type_of(x->pn.pn_directory) == t_string) ||
	    (x->pn.pn_directory == sKwild) ||
	    (x->pn.pn_directory == sKwildinf)) {
	    vs_push(make_cons(x->pn.pn_directory,Cnil));
	    x->pn.pn_directory=make_cons(sKabsolute,vs_head);
	    vs_popp;
	} else
	if ((x->pn.pn_directory == sKroot) ||
	    (x->pn.pn_directory == sKhome) ||
	    (x->pn.pn_directory == sKabsolute) ||
	    (x->pn.pn_directory == sKcurrent) ||
	    (x->pn.pn_directory == sKrelative) ||
	    (x->pn.pn_directory == sKup) ||
	    (x->pn.pn_directory == sKback) ||
	    (x->pn.pn_directory == sKparent)) {
	    vs_push(make_cons(x->pn.pn_directory,Cnil));
	    x->pn.pn_directory=vs_head;
	    vs_popp;
	} else 
	if ((x->pn.pn_directory != Cnil) &&
	    (x->pn.pn_directory != sKunspecific) &&
	    (!consp(x->pn.pn_directory))) {
	    file_error("Invalid directory in pathname ~S.",x);
	    return;
	}
	if ((consp(x->pn.pn_host)) &&
	    (x->pn.pn_host->c.c_cdr == Cnil))
	    x->pn.pn_host=x->pn.pn_host->c.c_car;
	if ((consp(x->pn.pn_device)) &&
	    (x->pn.pn_device->c.c_cdr == Cnil))
	    x->pn.pn_device=x->pn.pn_device->c.c_car;
	if ((consp(x->pn.pn_name)) &&
	    (x->pn.pn_name->c.c_cdr == Cnil))
	    x->pn.pn_name=x->pn.pn_name->c.c_car;
	if ((consp(x->pn.pn_type)) &&
	    (x->pn.pn_type->c.c_cdr == Cnil))
	    x->pn.pn_type=x->pn.pn_type->c.c_car;
	if ((consp(x->pn.pn_version)) &&
	    (x->pn.pn_version->c.c_cdr == Cnil))
	    x->pn.pn_version=x->pn.pn_version->c.c_car;

	if ((x->pn.pn_host != Cnil) &&
	    (x->pn.pn_host != sKunspecific) &&
	    (x->pn.pn_host != sKwild) &&
	    (type_of(x->pn.pn_host) != t_string)) {
	    file_error("Invalid host in pathname ~S.",x);
	    return;
	}
	if ((x->pn.pn_device != Cnil) &&
	    (x->pn.pn_device != sKunspecific) &&
	    (x->pn.pn_device != sKwild) &&
	    (type_of(x->pn.pn_device) != t_string)) {
	    file_error("Invalid device in pathname ~S.",x);
	    return;
	}
	if ((x->pn.pn_name != Cnil) &&
	    (x->pn.pn_name != sKunspecific) &&
	    (x->pn.pn_name != sKwild) &&
	    (type_of(x->pn.pn_name) != t_string)) {
	    file_error("Invalid name in pathname ~S.",x);
	    return;
	}
	if ((x->pn.pn_type != Cnil) &&
	    (x->pn.pn_type != sKunspecific) &&
	    (x->pn.pn_type != sKwild) &&
	    (type_of(x->pn.pn_type) != t_string)) {
	    file_error("Invalid name in pathname ~S.",x);
	    return;
	}
	if ((x->pn.pn_version != Cnil) &&
	    (x->pn.pn_version != sKunspecific) &&
	    (x->pn.pn_version != sKwild) &&
	    (x->pn.pn_version != sKnewest) &&
	    (type_of(x->pn.pn_version) != t_fixnum) &&
	    (type_of(x->pn.pn_version) != t_string)) {
	    file_error("Invalid version in pathname ~S.",x);
	    return;
	}
	d=x->pn.pn_directory;
	start=1; count=-1; l=Cnil;
	while (consp(d)) {
	    t=d->c.c_car;

	    if (start && (t==sKrelative))
	        count=-1;
	    else
	    if (start && (t==sKabsolute))
	        count=0;
	    else
	    if (start && (!lhost) && ((t==sKroot) || (t==sKhome)))
	        count=0;
	    else
	    if ((l != sKwildinf) && ((t==sKwild) || (t==sKwildinf)))
	        count=0;
	    else
	    if (count && (!lhost) && (t==sKback))
	       count=count>0 ? count-1 : count;
	    else
	    if (count && (!lhost) && ((t==sKup) || (t==sKparent)))
	       count=count>0 ? count-1 : count;
	    else
	    if (type_of(t) == t_string)
	       count=count>=0 ? count+1 : count;
	    else
	    if ((t!=sKcurrent) || lhost)
		file_error("Invalid directory in pathname ~S.",x);

	    l=t;
	    d=d->c.c_cdr;
	    start=0;
	}
	vs_reset;
}

void
wrap_pathname(x)
object x;
{
	object d,l;
	int f;

	constrain_pathname(x);

	f=1; d=x->pn.pn_directory; l=Cnil;
	while (consp(d)) {
	    if ((l != Cnil) &&
		(d->c.c_car == sKcurrent)) {
		    l->c.c_cdr = d->c.c_cdr;
		    d=d->c.c_cdr;
	    } else {
		l=d;
		d=d->c.c_cdr;
	    }
	}

	while (f) {
	    f=0; d=x->pn.pn_directory; l=Cnil;
	    while (consp(d)) {
		if ((l ==Cnil) &&
		    (consp(d->c.c_cdr)) &&
		    (d->c.c_cdr->c.c_car == sKback) &&
		    (d->c.c_car != sKback) &&
		    (d->c.c_car != sKup) &&
		    (d->c.c_car != sKparent) &&
		    (d->c.c_car != sKcurrent)) {
			x->pn.pn_directory = d->c.c_cdr->c.c_cdr;
			d=Cnil;
			f=1; /* do it again */
		} else
		if ((l != Cnil) &&
		    (consp(d->c.c_cdr)) &&
		    (d->c.c_cdr->c.c_car == sKback) &&
		    (d->c.c_car != sKback) &&
		    (d->c.c_car != sKup) &&
		    (d->c.c_car != sKparent) &&
		    (d->c.c_car != sKcurrent)) {
			l->c.c_cdr = d->c.c_cdr->c.c_cdr;
			d=Cnil;
			f=1; /* do it again */
		} else {
		    l=d;
		    d=d->c.c_cdr;
		}
	    }
	}

	d=x->pn.pn_directory; 
	while (consp(d)) {
	    if ((d->c.c_car == sKback) || (d->c.c_car == sKparent))
	        d->c.c_car = sKup;
	    d=d->c.c_cdr;
	}
}

object
make_pathname(host, device, directory, name, type, version, casekey)
object host, device, directory, name, type, version, casekey;
{
	object x,y,z;
	int common_case=(casekey == sKcommon);
	vs_mark;

	x = alloc_object(t_pathname);
	vs_push(x);

	x->pn.pn_host = host;
	x->pn.pn_device = device;
	x->pn.pn_directory = directory;
	x->pn.pn_name = name;
	x->pn.pn_type = type;
	x->pn.pn_version = version;

	constrain_pathname(x);

	if (common_case) {
	    x->pn.pn_host = pathname_case_word(host,sKcommon);
	    x->pn.pn_device = pathname_case_word(device,sKcommon);

	    if (consp(x->pn.pn_directory)) {
		z = x->pn.pn_directory;
		vs_push(z);
		y = make_cons( pathname_case_word(z->c.c_car,sKcommon), Cnil);
		x->pn.pn_directory=y;
		for (z = z->c.c_cdr; consp(z); z = z->c.c_cdr) {
		    y->c.c_cdr = make_cons(
			pathname_case_word(z->c.c_car,sKcommon), Cnil);
		    y = y->c.c_cdr;
		}
		y->c.c_cdr = pathname_case_word(z,sKcommon);
		vs_popp;
	    } 

	    x->pn.pn_name = pathname_case_word(name,sKcommon);
	    x->pn.pn_type = pathname_case_word(type,sKcommon);
	    x->pn.pn_version = pathname_case_word(version,sKcommon);
	}
	
	vs_reset;
	return(x);
}

/*
 * parse_namestring_check
 *   looks ahead for a character
 *
 * return string length or -1 if not found
 */

static int
parse_namestring_check(s,start,end,c,restrict)
object s;
int start, end;
char c;
int restrict;
{	
  int i;
	for (i=start; (s->st.st_self[i]!=c) && (i<end); i++) {
	    if ((restrict==':') &&
	    	!( isalnum(s->st.st_self[i]) || (s->st.st_self[i]=='-') || (s->st.st_self[i]=='.') ))
	    	return -2;
#ifdef ANSI
	    if ((restrict==';') && pathname_resolve(pathKansi) &&
	    	!( isalnum(s->st.st_self[i]) || (s->st.st_self[i]=='-') ||
		     (s->st.st_self[i]=='*') || (s->st.st_self[i]=='?') ))
	    	return -2;
#endif
	}
	return ((i<end) && (s->st.st_self[i]==c)) ? i : -1;
}

/*
 * parse_namestring_make
 *   creates a word for parse_namestring
 *
 * vs_push and return new word
 */

static object
parse_namestring_make(s,start,end)
object s;
int start, end;
{
	int i,j;
	object x;
	for (i=0,j=start; (j<end) && (i<token->st.st_dim);)
	    token->st.st_self[i++] = s->st.st_self[j++];
	token->st.st_fillp = i;
	x=copy_simple_string(token);
	vs_push(x); /* parse_namestring will vs_reset later */
	if (j != end)
	    return(file_error("Token Overrun at ~S.", x));
	return(x);
}

/*
 * parse_namestring_key
 *   checks the namestring object for known keys
 *   realm and assume tell what to do on the object
 *
 * might silently drop the old object - return old string or new keyword
 */

static object
parse_namestring_key(o,realm,assume)
object o,realm;
int assume;
{
	object x=o;
	if (type_of(o) == t_string) {
	    if (realm == sKdirectory) {
		if ((o->st.st_fillp == 2) && !strncmp(o->st.st_self,"**",2))
		    x=sKwildinf;
		if (assume != ';') {
		    if ((o->st.st_fillp == 3) && !strncmp(o->st.st_self,"...",3))
			x=sKback;
		    else
		    if ((o->st.st_fillp == 2) && !strncmp(o->st.st_self,"..",2))
			x=sKup;
		    else
		    if ((o->st.st_fillp == 1) && (o->st.st_self[0]=='.'))
			x=sKcurrent;
		    else
		    if ((o->st.st_fillp == 1) && (o->st.st_self[0]=='~'))
			x=sKhome;
		}
	    } else
	    if (realm == sKversion) {
		if ((o->st.st_fillp == 6) && !strncasecmp(o->st.st_self,"newest",6))
		    x=sKnewest;
	    }
	    if ((o->st.st_fillp == 1) && (o->st.st_self[0]=='*'))
		    x= ((realm == sKhost) || (realm == sKdevice)) ?
			sKunspecific : sKwild;
	}
	return(x);
}

/*
 * parse_namestring
 *   parses a namestring - trying varios forms like :
 *
 *  source:HOME;KRAEHE;LISP;FOO.LISP           source is host    CLHS like
 *  c:/home/kraehe/lisp/foo.lisp               c is a device     DOS like
 *  source:/home/kraehe/lisp/foo.lisp          source is a host  Unix like
 *
 * vs_mark; vs_push some junk; vs_reset and return new string object
 */

static object
parse_namestring(s, defhost, defaults, start, end, ep)
object s, defhost, defaults;
int start, end, *ep;
{
	int i, j;
	object host=Cnil, device=Cnil, directory=Cnil,
	       name=Cnil, type=Cnil,   version=Cnil;
	object x=Cnil,dirend=Cnil;
	int assume=0;
	int relative=0;
	int name_type_key=0;
	vs_mark; /* only push stack - but dont'nt use it */

	if (type_of(s) != t_string)
	    return(file_type_error("Cannot coerce ~S to a ~S.", s, sLpathname));

	*ep=end;

	for (;isspace(s->st.st_self[start]) && (start<end); start++);
	for (;(start<end) && isspace(s->st.st_self[end-1]); end--);

	i=start;

	/* try on host or device */
	if ((j=parse_namestring_check(s,i,end,':',':')) >= 0) {
	    x=Cnil;
	    if (j>i) {
		x=parse_namestring_make(s,i,j);
		if (pathname_lookup(x,sSApathname_logicalA) != Cnil) {
		    assume=';';
		    host = pathname_case_word(x,sKdowncase);
		    device = sKunspecific;
		} else
		if (pathname_lookup(x,sSApathname_virtualA) != Cnil) {
		    assume='/';
		    host = pathname_case_word(x,sKdowncase);
		    device = Cnil;
		} else
		if (pathname_lookup(x,sSApathname_deviceA) != Cnil) {
		    assume='/';
		    device = pathname_case_word(x,sKdowncase);
		    host = Cnil;
		} else
		if (j-i==1) {
		    assume='/';
		    device = pathname_case_word(x,sKdowncase);
		    host=Cnil;
		} else {
		    assume='/';
		    host = pathname_case_word(x,sKdowncase);
		    device=Cnil;
		}
	    }
	    i=j+1;
	} else {
	    x = Cnil;
	    if (defhost != Cnil)
	       x = defhost;
	    else
	    if ((defaults != Cnil) && (defaults->pn.pn_host != Cnil))
	       x = defaults->pn.pn_host;

	    if (x != Cnil) {
		if (pathname_lookup(x,sSApathname_logicalA) != Cnil) {
		    assume=';';
		    host = pathname_case_word(x,sKdowncase);
		    device = sKunspecific;
		} else {
		    assume='/';
		    host = pathname_case_word(x,sKdowncase);
		    device = Cnil;
		}
	    }
	}

	while (i<end) {
	    /* try on unix like directories */
	    if ((assume != ';') &&
	        ((j=parse_namestring_check(s,i,end,'/',0)) >= 0)) {
		assume='/';
		x=Cnil;
		if (j>i) {
		    x=parse_namestring_make(s,i,j);
		    x=parse_namestring_key(x,sKdirectory,assume);
		}
		if ((directory == Cnil) && (x==Cnil)) {
		    directory=make_cons(sKabsolute,Cnil);
		    vs_push(directory); /* vs_push the list */
		    dirend=directory;
		} else
		if ((directory == Cnil) && (x!=Cnil)) {
		    directory=make_cons(x,Cnil);
		    vs_push(directory); /* vs_push the list */
		    dirend=directory;
		} else
		if ((directory != Cnil) && (x!=Cnil)) {
		    dirend->c.c_cdr=make_cons(x,Cnil);
		    dirend=dirend->c.c_cdr;
		} else
		    return(file_error("Invalid blank component in namestring ~S.", s));
		i=j+1;
	    } else

	    /* try on lisp like directories */
	    if ((assume != '/') &&
	    	((j=parse_namestring_check(s,i,end,';',';')) >= 0)) {
		assume=';';
		x=Cnil;
		if (j>i) {
		    x=parse_namestring_make(s,i,j);
		    x=pathname_case_word(x,sKdowncase);
		    x=parse_namestring_key(x,sKdirectory,assume);
		}
		if ((directory == Cnil) && (x==Cnil)) {
		    if (relative)
			return(file_error("Invalid blank component in namestring ~S.", s));
		    relative=1;
		} else
		if ((directory == Cnil) && (x!=Cnil)) {
		    if (relative) {
			directory=make_cons(x,Cnil);
			dirend=directory;
		    	relative=0;
		    } else {
			directory=make_cons(sKabsolute,Cnil);
			directory->c.c_cdr=make_cons(x,Cnil);
			dirend=directory->c.c_cdr;
		    }
		} else
		if ((directory != Cnil) && (x!=Cnil)) {
		    dirend->c.c_cdr=make_cons(x,Cnil);
		    dirend=dirend->c.c_cdr;
		} else
		    return(file_error("Invalid blank component in namestring ~S.", s));
		i=j+1;
	    } else

	    /* try on special cases */
	    if ((assume!=';') && (
	        ((end-i==1) && !strncmp(s->st.st_self+i,"~",1) && (directory == Cnil)) ||
	        ((end-i==1) && !strncmp(s->st.st_self+i,".",1)) ||
	        ((end-i==2) && !strncmp(s->st.st_self+i,"..",2)) ||
	        ((end-i==3) && !strncmp(s->st.st_self+i,"...",3)))) {
		x=parse_namestring_make(s,i,end);
		x=parse_namestring_key(x,sKdirectory,'/');
		if (directory == Cnil) {
		    directory=make_cons(x,Cnil);
		    vs_push(directory); /* vs_push the list */
		    dirend=directory;
		} else {
		    dirend->c.c_cdr=make_cons(x,Cnil);
		    dirend=dirend->c.c_cdr;
		}
		assume='/';
		i=end;
	    } else {

	    /* try on name, type and version */
	        j=parse_namestring_check(s,i,end,'.',assume);
		if ((j==-2) && (assume == ';'))
		    return(file_error("Invalid character in logical pathname namestring ~S.", s));
		if ((j==-1) || ((assume != ';') && (name_type_key==1)))
		    j=end;
		x=Cnil;
		if (j>i) {
		    x=parse_namestring_make(s,i,j);
		    if (assume == ';')
			x=pathname_case_word(x,sKdowncase);
		    switch (name_type_key++) {
		    case 0:
			name=parse_namestring_key(x,sKname,assume);
			if (j+1==end)
			    type=parse_namestring_make(s,j+1,end);
			break;
		    case 1:
			type=parse_namestring_key(x,sKtype,assume);
			break;
		    case 2:
			version=parse_namestring_key(x,sKversion,assume);
			break;
		    default:
			return(file_error("Invalid component in namestring ~S.", s));
		    }
		} else
		    name_type_key++;
		i=j+1;
	    }
	}

	x = make_pathname(host, device, directory, name, type, version, Cnil);
	vs_reset; /* release all that junk */
	return(x);
}

/*
 * coerce_to_pathname
 *   coerce a string, symbol, stream, pathname into a pathname
 *
 */

object
coerce_to_pathname(x)
object x;
{
	object y=x;
	object n;
	int e;
	vs_mark;
	vs_push(y);
	while (x != Cnil) {
	    switch (type_of(x)) {

	    case t_symbol:
	    	x=copy_simple_string(x);
		vs_push(x);
	    	x=pathname_case_word(x,sKdowncase);
		vs_head=x;

	    case t_string:
		n = parse_namestring(x, Cnil, Cnil, 0, x->st.st_fillp, &e);
		if ((n == OBJNULL) || (e != x->st.st_fillp))
		    n = Cnil;
		x = n;
	    case t_pathname:
	    	vs_reset;
		return(x);

	    case t_stream:
		switch (x->sm.sm_mode) {
		    case smm_input:
		    case smm_output:
		    case smm_probe:
		    case smm_io:
			/* The file was stored in sm.sm_object1. */
			x = x->sm.sm_object1;
			break;

		    case smm_synonym:
			/* The file was stored in sybol of sm.sm_object0. */
			x = symbol_value(x->sm.sm_object0);
			break;

		    default:
			x = Cnil;
		}
		break;

	    default:
	        x=Cnil;
	    }
	}
	file_type_error("Cannot coerce ~S to a ~S.", y, sLpathname);
	vs_reset;
	return(Cnil);
}

static object
default_device(host)
object host;
{
	if (pathname_resolve(sKhost) && (type_of(host) == t_string))
	    return(pathname_lookup(host,sSApathname_logicalA) != Cnil ?
	        sKunspecific : Cnil);
	
	return(Cnil);
}

/*
 * merge_pathnames
 *   merges pathname, defaults and default_version
 *
 * vs_mark; vs_push; vs_reset; return new pathname
 */

object
merge_pathnames(path, defaults, default_version)
object path, defaults, default_version;
{
	object host=Cnil, device=Cnil, directory=Cnil,
	       name=Cnil, type=Cnil, version=Cnil;
	object x;
	vs_mark;

	if (path->pn.pn_host != Cnil)
		host = path->pn.pn_host;
	else
		host = defaults->pn.pn_host;

	if (path->pn.pn_device != Cnil)
	    device = path->pn.pn_device;
	else
	if (path->pn.pn_host == Cnil)
	    device = defaults->pn.pn_device;
	else
	if ((defaults->pn.pn_host != Cnil) &&
	    (type_of(path->pn.pn_host) == t_string) &&
	    (type_of(defaults->pn.pn_host) == t_string) &&
	    (string_equal(path->pn.pn_host, defaults->pn.pn_host) == TRUE))
		device = defaults->pn.pn_device;
	else
		device = default_device(path->pn.pn_host);

	if (path->pn.pn_name == Cnil) {
		name = defaults->pn.pn_name;
		if (path->pn.pn_version != Cnil)
		    version = path->pn.pn_version;
		else
		if (defaults->pn.pn_version != Cnil)
		    version = defaults->pn.pn_version;
		else
		    version = default_version;
	} else {
		name = path->pn.pn_name;
		if (path->pn.pn_version != Cnil)
		    version = path->pn.pn_version;
		else
		    version = default_version;
	}
	if (path->pn.pn_type == Cnil)
		type = defaults->pn.pn_type;
	else
		type = path->pn.pn_type;

	if (defaults->pn.pn_directory==Cnil ||
	   ((consp(path->pn.pn_directory)) &&
	    ((path->pn.pn_directory->c.c_car==sKroot) ||
	     (path->pn.pn_directory->c.c_car==sKabsolute) ||
	     (path->pn.pn_directory->c.c_car==sKhome) ||
	     (path->pn.pn_directory->c.c_car==sKcurrent) ||
	     ((type_of(path->pn.pn_directory->c.c_car)==t_string) &&
	      (path->pn.pn_directory->c.c_car->st.st_self[0] == '~')))))
		directory=path->pn.pn_directory;
	else
	if ((path->pn.pn_directory==Cnil) ||
	   ((consp(path->pn.pn_directory)) &&
	    (path->pn.pn_directory->c.c_car==sKrelative) &&
	    (path->pn.pn_directory->c.c_cdr==Cnil)))
		directory=defaults->pn.pn_directory;
	else /* barf before merging junk */
	if (!consp(path->pn.pn_directory))
		file_error("Invalid pathname component ~S.", path->pn.pn_directory);
	else /* barf before merging junk */
	if (!consp(defaults->pn.pn_directory))
		file_error("Invalid pathname component ~S.", defaults->pn.pn_directory);
	else /* read: Roger Kehr vs. Bruno Haible
	    (or a b b) is the same as (or a b), so
	    (MERGE-PATHNAMES (MERGE-PATHNAMES a b) b) 
	    and (MERGE-PATHNAMES a b) should be the same */
	if (
#ifdef ANSI_COMMON_LISP
	    (!pathname_resolve(pathKansi)) &&
#endif
	   ((defaults->pn.pn_directory->c.c_car==sKrelative) ||
	    (defaults->pn.pn_directory->c.c_car==sKup) ||
	    (defaults->pn.pn_directory->c.c_car==sKparent) ||
	    (defaults->pn.pn_directory->c.c_car==sKback) ||
	    ((type_of(defaults->pn.pn_directory->c.c_car)==t_string) &&
	     (defaults->pn.pn_directory->c.c_car->st.st_self[0] != '~'))))
		directory=path->pn.pn_directory;
	else
	if (path->pn.pn_directory->c.c_car==sKrelative) {
		directory=append(defaults->pn.pn_directory,
			path->pn.pn_directory->c.c_cdr);
		vs_push(directory);
	} else {
		directory=append(defaults->pn.pn_directory,
			path->pn.pn_directory);
		vs_push(directory);
	}

	x=make_pathname(host,device,directory,name,type,version, Cnil);
	vs_reset;
	return(x);
}

/*
 * Namestring(x) converts a pathname to a namestring.
 *   creates a new namestring at token space
 *   ignores :device or :host depending on *PATHNAME-RESOLVE*
 *   ignores :version on non logical hosts depending on *PATHNAME-RESOLVE*
 *
 * return new string
 */

void namestring_add_char(c)
char c;
{
    if (token->st.st_fillp < token->st.st_dim)
	token->st.st_self[token->st.st_fillp++] = c;
    else {
	object x=copy_simple_string(token);
	vs_push(x); 
	file_error("Token overrun at ~S.", x);
	return;
    }
}

static void namestring_add_string(s)
char *s;
{   while (*s) namestring_add_char(*s++);
}

void namestring_add_word(s,casekey)
object s;
object casekey;
{
    int j=0;

    if (s == sKwild)
	namestring_add_char('*');
    else
    if (s == sKwildinf)
	namestring_add_string("**");
    else
    if ((s == sKrelative) || (s == sKcurrent))
	namestring_add_char('.');
    else
    if ((s == sKparent) || (s == sKup))
	namestring_add_string("..");
    else
    if (s == sKback)
	namestring_add_string("...");
    else
    if (s == sKhome)
	namestring_add_char('~');
    else
    if (s == sKnewest)
	namestring_add_string(casekey == sKcommon ? "NEWEST" : "newest");
    else
    if (type_of(s) == t_string) {
	if (casekey == sKcommon)
	    s=pathname_case_word(s,casekey);
	while (j<s->st.st_fillp)
	    namestring_add_char(s->st.st_self[j++]);
    } else
    if ((s != Cnil) || (s != sKunspecific))
	file_error("Invalid pathname component ~S.", s);
}

object
namestring(x)
object x;
{
	object l, y;
	int flag_host=0;
	vs_mark;

	if (type_of(x) != t_pathname)
	    file_type_error("Cannot coerce ~S to a ~S.", x, sLpathname);

	token->st.st_fillp=0;

	if (pathname_resolve(sKhost)) {
  	    l = x->pn.pn_host;
  	    y = x->pn.pn_device;
	    if ((l!=Cnil) && (l!=sKunspecific) &&
	        (y!=Cnil) && (y!=sKunspecific))
		    return(file_error("Invalid device in pathname ~S.", x));

	    if (type_of(l) == t_string) {
		if (pathname_lookup(l,sSApathname_logicalA) != Cnil) {
		    namestring_add_word(l,sKcommon);
		    namestring_add_char(':');
		    flag_host=1;
		} else {
		    namestring_add_word(l,sKlocal);
		    namestring_add_char(':');
		    flag_host=0;
		} 
	    } else
	    if ((l!=Cnil) && (l!=sKunspecific))
		return(file_error("Invalid host in pathname ~S.",x));
	}

	if (pathname_resolve(sKdevice)) {
	    l = x->pn.pn_device;
	    if (type_of(l) == t_string) {
		namestring_add_word(l,sKlocal);
		namestring_add_char(':');
	    } else
	    if ((l!=Cnil) && (l!=sKunspecific))
		return(file_error("Invalid device in pathname ~S.", x));
	}

  	l = x->pn.pn_directory;
	if (consp(l)) {
	    y = l->c.c_car;
	    if ((y == sKroot) || (y == sKabsolute)) {
		    if (!flag_host)
			namestring_add_char('/');
		    l = l->c.c_cdr;
	    } else if (y == sKrelative) {
		    if (flag_host)
			namestring_add_char(';');
		    l = l->c.c_cdr;
	    } else
	    if (flag_host)
		namestring_add_char(';');

	    while (!endp(l)) {
		    y = l->c.c_car;
		    if ((y == sKcurrent) || (y == sKparent) ||
		        (y == sKup) || (y == sKback) || (y == sKhome)) {
			if (flag_host)
			    return(file_error("Invalid directory in logical pathname ~S.",x));
			namestring_add_word(y,flag_host ? sKcommon : sKlocal);
		    } else
		    if ((y == sKwild) || (y == sKwildinf) ||
		        (type_of(y) == t_string))
			namestring_add_word(y,flag_host ? sKcommon : sKlocal);
		    else  
			return(file_error("Invalid directory in pathname ~S.",x));
		    namestring_add_char(flag_host ? ';' : '/');
		    l = l->c.c_cdr;
	    }
	} else
	if ((l != Cnil)  && (l != sKunspecific))
	    return(file_error("Invalid directory in pathname ~S.",x));

	y = x->pn.pn_name;
	if ((y == sKwild) || (type_of(y) == t_string))
	    namestring_add_word(y,flag_host ? sKcommon : sKlocal);
	else
	if ((y != Cnil) && (y != sKunspecific))
	    return(file_error("Invalid name in pathname ~S.", x));

	y = x->pn.pn_type;
	if ((y == sKwild) || (type_of(y) == t_string)) {
	    namestring_add_char('.');
	    namestring_add_word(y,flag_host ? sKcommon : sKlocal);
	} else
	if ((y != Cnil) && (y != sKunspecific))
	    return(file_error("Invalid type in pathname ~S.", x));

	if (flag_host) {
	    y = x->pn.pn_version;
	    if ((y == sKnewest) || (y == sKwild) || (type_of(y) == t_string)) {
		namestring_add_char('.');
		namestring_add_word(y,flag_host ? sKcommon : sKlocal);
	    } else
	    if ((y != Cnil) && (y != sKunspecific))
		return(file_error("Invalid version in pathname ~S.", x));
	}

#ifdef FIX_FILENAME
	/* ugly broken OS dependency in old GCL - I hope nobody needs it ! */
	if (token->st.st_fillp > MAXPATHLEN-1)
	    return(file_error("Pathname ~S is to long for your filesystem.", x));
	/*  token->st.st_fillp = MAXPATHLEN-1; */
#endif
	y=copy_simple_string(token);
	vs_reset;
	return(y);
}

object
coerce_to_namestring(y)
object y;
{
    object x=y;

    while(x != Cnil) {
	switch (type_of(x)) {
	case t_symbol:
		x=symbol_name(x);
		vs_push(x);
	    	x=pathname_case_word(x,sKdowncase);
		vs_popp;

	case t_string:
		return(x);

	case t_pathname:
		return(namestring(x));

	case t_stream:
		switch (x->sm.sm_mode) {
		case smm_input:
		case smm_output:
		case smm_probe:
		case smm_io:
			x = x->sm.sm_object1;
			break;

		case smm_synonym:
			x = symbol_value(x->sm.sm_object0);
			break;

		default:
			x = Cnil;
		}
		break;

	default:
		x = Cnil;
	}
    }
    return(file_type_error("Cannot coerce ~S to a ~S namestring.", y, sLpathname));
}

object
coerce_to_local_namestring(pathname)
object pathname;
{
    object namestring,*vs_ret;
    vs_mark; /* wash my fur, but dont make me wet */

    namestring=Cnil;
    vs_push(namestring);
    vs_ret=vs_top-1;
    check_type_or_pathname_string_symbol_stream(&pathname);
    pathname = coerce_to_pathname(pathname);
    vs_push(pathname);
    pathname = make_pathname(
        pathname->pn.pn_host,
	pathname->pn.pn_device,
        /* pathname_resolve(sKhost) ? pathname->pn.pn_host : Cnil, */
	/* pathname_resolve(sKdevice) ? pathname->pn.pn_device : Cnil, */
	pathname->pn.pn_directory,
	pathname->pn.pn_name,
	pathname->pn.pn_type,
	Cnil, Cnil);
    vs_push(pathname);
    if (1) {/* pathname_resolve(sKhost)) { */
	if (type_of(pathname->pn.pn_host) == t_string) {
	    pathname = search_local_pathname(pathname,32);
	    vs_push(pathname);
	}
	if (pathname->pn.pn_host == sKunspecific)
	    pathname->pn.pn_host = Cnil;
	if (pathname->pn.pn_host != Cnil)
	    file_error("Invalid host in pathname ~S.",pathname);
    }
    if (1 && /* pathname_resolve(sKdevice) && */
	(type_of(pathname->pn.pn_device) == t_string) &&
	(consp(pathname_lookup(pathname->pn.pn_device,sSApathname_deviceA)))) {
	    pathname = search_local_pathname(pathname,32);
	    vs_push(pathname);
    }
    wrap_pathname(pathname);
    namestring = coerce_to_namestring(pathname);
    *vs_ret = namestring;
    vs_reset;
    return namestring;
}

LFD(Lpathname)(void)
{
        check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
}

LFD(Lwrap_pathname)(void)
{
	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	wrap_pathname(vs_base[0]);
}

object
parse_namestring_obj(x,host,defaults,start,end,eep)
object x,host,defaults,start,end;
int *eep;
{
	int s, e;
	object y = Cnil;
	vs_mark;
	*eep=0;

	while ((x != Cnil) && (y == Cnil)) {
	    switch (type_of(x)) {
	    case t_symbol:
	        x = copy_simple_string(x);
		vs_push(x);
	    case t_string:
		get_string_start_end(x, start, end, &s, &e);
		y = parse_namestring(x, host, defaults, s, e, eep);
		vs_push(y);
		if (y == OBJNULL) {
		    vs_reset;
		    return Cnil;
		}
		break;

	    case t_pathname:
		y = x;
		break;

	    case t_stream:
		switch (x->sm.sm_mode) {
		case smm_input:
		case smm_output:
		case smm_probe:
		case smm_io:
			x = x->sm.sm_object1;
			break;

		case smm_synonym:
			x = symbol_value(x->sm.sm_object0);
			break;

		default:
		    file_type_error("Cannot parse the namestring stream ~S to a ~S.", x, sLpathname);
		    x=Cnil;
		}

	    default:
		 file_type_error("Cannot parse the namestring thing ~S to a ~S.", x, sLpathname);
		 x=Cnil;
	    }
	}
	if (y == Cnil) {
	    vs_reset;
	    return y;
	}
	if (type_of(y) != t_pathname) {
	    file_type_error("Cannot parse the namestring thing ~S to a ~S.", x, sLpathname);
	    vs_reset;
	    return Cnil;
	}
	if (         (host != Cnil)          && (host != sKunspecific) &&
	    (y->pn.pn_host != Cnil) && (y->pn.pn_host != sKunspecific)) {
	    check_type_or_symbol_string(&host);
	    check_type_or_symbol_string(&y->pn.pn_host);
	    if (string_equal(host, y->pn.pn_host)==FALSE) {
		file_error("The pathname ~S does not match the host.", y);
		vs_reset;
		return Cnil;
	    }
	}
	vs_reset;
	return y;
}

@(defun parse_namestring (thing
	&o host
	   (defaults `symbol_value(Vdefault_pathname_defaults)`)
	&k start end junk_allowed
	&a x l)
	int ee;
@
	check_type_or_pathname_string_symbol_stream(&thing);
	check_type_or_pathname_string_symbol_stream(&defaults);
	defaults = coerce_to_pathname(defaults);
	x = thing;
	x = parse_namestring_obj(x,host,defaults,start,end,&ee);
	l = make_fixnum(ee);
	@(return x l)
@)

@(defun merge_pathnames (path
	&o (defaults `symbol_value(Vdefault_pathname_defaults)`)
 	   (default_version sKnewest))
	int path_is_stream;
@
	path_is_stream=type_of(path)==t_stream;
	check_type_or_pathname_string_symbol_stream(&path);
	path = coerce_to_pathname(path);
	if ((defaults != Ct) && (defaults != Cnil) && !path_is_stream) {
	    check_type_or_pathname_string_symbol_stream(&defaults);
	    defaults = coerce_to_pathname(defaults);
            path = merge_pathnames(path, defaults, default_version);
	    wrap_pathname(path);
	}
	else
	if (defaults == Ct)
	    wrap_pathname(path);
	@(return path)
@)

@(defun make_pathname (&key
        (host `Cnil` host_supplied_p)
	(device `Cnil` device_supplied_p)
	(directory `Cnil` directory_supplied_p)
	(name `Cnil` name_supplied_p)
	(type `Cnil` type_supplied_p)
	(version `Cnil` version_supplied_p)
	(case `Cnil`)
	(defaults `Ct`)
	&aux x)
@
	x = make_pathname(host, device, directory, name, type, version, case);
	
	if ( defaults == Ct ) {
		defaults = symbol_value ( Vdefault_pathname_defaults );
		defaults = coerce_to_pathname ( defaults );
		defaults = make_pathname ( defaults->pn.pn_host,
				default_device(defaults->pn.pn_host),
				Cnil, Cnil, Cnil, Cnil, Cnil);
		x = merge_pathnames(x, defaults, Cnil);
	} else
	if ( defaults != Cnil ) {
		defaults = coerce_to_pathname(defaults);
		x = merge_pathnames(x, defaults, Cnil);
		wrap_pathname(x);
	}
        if (directory_supplied_p && consp(directory) && directory->c.c_car==sKrelative) 
           x->pn.pn_directory=directory;/* merge pathnames swallows some :relative*/
#ifdef ANSI_COMMON_LISP
	if ((defaults != Cnil) && !pathname_resolve(pathKansi)) {
#else
	if (defaults != Cnil) {
#endif
	    if ((host == Cnil) && (host_supplied_p)) x->pn.pn_host = host;
	    if ((device == Cnil) && (device_supplied_p)) x->pn.pn_device = device;
	    if ((directory == Cnil) && (directory_supplied_p)) x->pn.pn_directory = directory;
	    if ((name == Cnil) && (name_supplied_p)) x->pn.pn_name = name;
	    if ((type == Cnil) && (type_supplied_p)) x->pn.pn_type = type;
	    if ((version == Cnil) && (version_supplied_p)) x->pn.pn_version = version;
	}

	@(return x)
@)

LFD(Lpathnamep)(void)
{
	check_arg(1);

	if (type_of(vs_base[0]) == t_pathname)
		vs_base[0] = Ct;
	else
		vs_base[0] = Cnil;
}

@(defun pathname_host (pathname &key
	(case `Cnil`)
	&aux x)
	vs_mark;
@
	check_type_or_pathname_string_symbol_stream(&pathname);
	x = coerce_to_pathname(pathname);
	x = x->pn.pn_host;
	if (case == sKcommon)
	    x=pathname_case_word(x,sKcommon);
	vs_reset;
	@(return x)
@)

@(defun pathname_device (pathname &key
	(case `Cnil`)
	&aux x)
	vs_mark;
@
	check_type_or_pathname_string_symbol_stream(&pathname);
	x = coerce_to_pathname(pathname);
	x = x->pn.pn_device;
	if (case == sKcommon)
	    x=pathname_case_word(x,sKcommon);
	vs_reset;
	@(return x)
@)

@(defun pathname_directory (pathname &key
	(case `Cnil`)
	&aux x)
	object y,z;
	vs_mark;
@
	check_type_or_pathname_string_symbol_stream(&pathname);
	x = coerce_to_pathname(pathname);
	x = x->pn.pn_directory;
	if (case == sKcommon) {
	    if (type_of(x) == t_string)
		x=pathname_case_word(x,sKcommon);
	    else
	    if (consp(x)) {
		z = x;
		y = make_cons( pathname_case_word(z->c.c_car,sKcommon), Cnil);
		x = y;
		vs_push(y);
		for (z = z->c.c_cdr; consp(z); z = z->c.c_cdr) {
		    y->c.c_cdr = make_cons(
			pathname_case_word(z->c.c_car,sKcommon), Cnil);
		    y = y->c.c_cdr;
		}
		y->c.c_cdr = pathname_case_word(z,sKcommon);
	    } 
	}
	vs_reset;
	@(return x)
@)

@(defun pathname_name (pathname &key
	(case `Cnil`)
	&aux x)
	vs_mark;
@
	check_type_or_pathname_string_symbol_stream(&pathname);
	x = coerce_to_pathname(pathname);
	x = x->pn.pn_name;
	if (case == sKcommon)
	    x=pathname_case_word(x,sKcommon);
	vs_reset;
	@(return x)
@)

@(defun pathname_type (pathname &key
	(case `Cnil`)
	&aux x)
	vs_mark;
@
	check_type_or_pathname_string_symbol_stream(&pathname);
	x = coerce_to_pathname(pathname);
	x = x->pn.pn_type;
	if (case == sKcommon)
	    x=pathname_case_word(x,sKcommon);
	vs_reset;
	@(return x)
@)

LFD(Lpathname_version)(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_base[0] = vs_base[0]->pn.pn_version;
}

LFD(Lnamestring)(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_namestring(vs_base[0]);
}

LFD(Lfile_namestring)(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_base[0] = make_pathname(Cnil, Cnil, Cnil,
		        vs_base[0]->pn.pn_name,
		        vs_base[0]->pn.pn_type,
		        vs_base[0]->pn.pn_version,
			Cnil);
	vs_base[0] = namestring(vs_base[0]);
}

LFD(Ldirectory_namestring)(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_base[0] = make_pathname(Cnil, Cnil,
		        vs_base[0]->pn.pn_directory,
		        Cnil, Cnil, Cnil, Cnil);
	vs_base[0] = namestring(vs_base[0]);
}

LFD(Lhost_namestring)(void)
{
	check_arg(1);

	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	vs_base[0] = coerce_to_pathname(vs_base[0]);
	vs_base[0] = vs_base[0]->pn.pn_host;
	if (vs_base[0] == Cnil || vs_base[0] == sKwild)
		vs_base[0] = make_simple_string("");
}

@(defun enough_namestring (path
	&o (defaults `symbol_value(Vdefault_pathname_defaults)`))
@
	check_type_or_pathname_string_symbol_stream(&path);
	check_type_or_pathname_string_symbol_stream(&defaults);
	defaults = coerce_to_pathname(defaults);
	path = coerce_to_pathname(path);

	if (path->pn.pn_host == sKunspecific) path->pn.pn_host = Cnil;
	if (path->pn.pn_device == sKunspecific) path->pn.pn_device = Cnil;
	if (path->pn.pn_directory == sKunspecific) path->pn.pn_directory = Cnil;
	if (path->pn.pn_name == sKunspecific) path->pn.pn_name = Cnil;
	if (path->pn.pn_type == sKunspecific) path->pn.pn_type = Cnil;
	if (path->pn.pn_version == sKunspecific) path->pn.pn_version = Cnil;

	if (defaults->pn.pn_host == sKunspecific) defaults->pn.pn_host = Cnil;
	if (defaults->pn.pn_device == sKunspecific) defaults->pn.pn_device = Cnil;
	if (defaults->pn.pn_directory == sKunspecific) defaults->pn.pn_directory = Cnil;
	if (defaults->pn.pn_name == sKunspecific) defaults->pn.pn_name = Cnil;
	if (defaults->pn.pn_type == sKunspecific) defaults->pn.pn_type = Cnil;
	if (defaults->pn.pn_version == sKunspecific) defaults->pn.pn_version = Cnil;

	if ((consp(path->pn.pn_directory)) &&
	    (consp(defaults->pn.pn_directory)) &&
	    ((path->pn.pn_directory->c.c_car==sKroot) ||
	     (path->pn.pn_directory->c.c_car==sKabsolute) ||
	     (path->pn.pn_directory->c.c_car==sKhome) ||
	     (path->pn.pn_directory->c.c_car==sKcurrent) ||
	     ((type_of(path->pn.pn_directory->c.c_car)==t_string) &&
	      (path->pn.pn_directory->c.c_car->st.st_self[0] == '~')))) {
	    object dir=path->pn.pn_directory;
	    object def=defaults->pn.pn_directory;
	    while ((consp(dir)) && (consp(def)) &&
		     equalp(dir->c.c_car,def->c.c_car)) {
		     	dir=dir->c.c_cdr;
		     	def=def->c.c_cdr;
	    }
	    path = make_pathname(
		equalp(path->pn.pn_host, defaults->pn.pn_host) ?
		Cnil : path->pn.pn_host,
		equalp(path->pn.pn_device, defaults->pn.pn_device) ?
		Cnil : path->pn.pn_device,
		def==Cnil ?
		dir : path->pn.pn_directory,
		equalp(path->pn.pn_name, defaults->pn.pn_name) ?
		Cnil : path->pn.pn_name,
		equalp(path->pn.pn_type, defaults->pn.pn_type) ?
		Cnil : path->pn.pn_type,
		equalp(path->pn.pn_version, defaults->pn.pn_version) ?
		Cnil : path->pn.pn_version);
	} else
	    path = make_pathname(
		equalp(path->pn.pn_host, defaults->pn.pn_host) ?
		Cnil : path->pn.pn_host,
		equalp(path->pn.pn_device, defaults->pn.pn_device) ?
		Cnil : path->pn.pn_device,
		equalp(path->pn.pn_directory, defaults->pn.pn_directory) ?
		Cnil : path->pn.pn_directory,
		equalp(path->pn.pn_name, defaults->pn.pn_name) ?
		Cnil : path->pn.pn_name,
		equalp(path->pn.pn_type, defaults->pn.pn_type) ?
		Cnil : path->pn.pn_type,
		equalp(path->pn.pn_version, defaults->pn.pn_version) ?
		Cnil : path->pn.pn_version);

	@(return `namestring(path)`)
@)

/*
 * wild_component_p
 *   checks a pathname component
 *
 * return 0 or 1
 */

static int
wild_component_p(o)
object o;
{
	int i;

	if (o == Cnil)
	    return 0;
        while (consp(o)) {
	    if (wild_component_p(o->c.c_car))
	        return 1;
	    o=o->c.c_cdr;
	}
	if (o == Cnil)
	    return 0;
	if ((o == sKwild) || (o == sKwildinf))
	    return 1;
	if (type_of(o) == t_string)
	    for (i=0; i<o->st.st_fillp; i++)
		if ((o->st.st_self[i]=='*') || (o->st.st_self[i]=='?'))
		    return 1;

	return 0;
}

/*
 * pathstring_match_add
 *   add a match to the list of matches
 *
 * returns (cons token build)
 */

static object
pathstring_match_add(build,t)
object build,t;
{
    if (t==token)
        t=vs_push(copy_simple_string(t));
    if (build->c.c_car == sKstart) 
        build->c.c_car = t;
    else {
	build=make_cons(t,build);
	vs_push(build);
    } 

    return(build);
}

/*
 * pathstring_match_range
 *   match to ranged strings
 *
 * build starts as Cnil to become t_cons while building build
 * or Ct to return true without building.
 * building will need vs_mark/vs_reset to clean garbage.
 *
 * return build or Cnil
 */

static object
pathstring_match_range(object s,int ss,int sl,object p,int ps,int pl,object build) {

  int next,try;
  object r;
  
  while ((sl > 0) && s->st.st_self[ss]) {

    if ((pl <= 0) || !p->st.st_self[ps])
      return Cnil;
    
    if ((p->st.st_self[ps] == '*') || 
	((p->st.st_self[ps] == '?') && 
	 (s->st.st_self[ss] != '*'))) {

      if ((pl == 1) && 
	  ((p->st.st_self[ps] == '*') ||
	   ((p->st.st_self[ps] == '?') && (s->st.st_self[ss] != '*') && (sl == 1)))) {

	if (consp(build)) {
	  unsigned t=0;
	  while ((sl > 0) && s->st.st_self[ss]) {
	    token->st.st_self[t++]=s->st.st_self[ss++]; sl--;
	  }
	  token->st.st_fillp=t;
	  build=pathstring_match_add(build,token);
	}
	return build;
      }
      next = ps+1;
      try = (p->st.st_self[ps] == '*') ? ss : ss+1;
      while ((ss+sl-try>0) && s->st.st_self[try]) {
	if (((s->st.st_self[try] == p->st.st_self[next]) || 
	     (p->st.st_self[next] == '?') || (p->st.st_self[next] == '*')) &&
	    ((r=pathstring_match_range(s,try,sl-try,p,next,pl-1,build))!=Cnil)) {
	  if (consp(r)) {
	    unsigned t=0;
	    while ((sl > 0) && (ss<try) && s->st.st_self[ss]) {
	      token->st.st_self[t++]=s->st.st_self[ss++]; sl--;
	    }
	    token->st.st_fillp=t;
	    build=pathstring_match_add(r,token);
	  }
	  return build;
	}
	
	if (p->st.st_self[ps] == '*')
	  try++;
	else
	  return Cnil;
      }
      return Cnil;
    }
    if (s->st.st_self[ss] == p->st.st_self[ps]) {
      ss++, ps++, sl--, pl--;
    } else
      return Cnil;
  }
  if ((p->st.st_self[ps] == '*') && (pl == 1)) {
    if (consp(build)) {
      token->st.st_fillp=0;
      build=pathstring_match_add(build,token);
    }
    return build;
  }
  return (pl == 0) ? build : Cnil;
}

/*
 * pathobject_match_p
 *   checks two pathes to match
 *   patches a 3rd object if its a cons
 */

static object
pathobject_match_p(s,m,b)
object s,m,b;
{
	object r;

	if ((m == sKwild) || (m == sKwildinf))
	    r = consp(b) ? pathstring_match_add(b,s) : b;
	else
	if ((s == m) || (m == sKunspecific) || (m == Cnil) ||
	   ((m == sKnewest) && ((s == Cnil) ||
	       (s == sKunspecific) || (s == sKwild))))
	    r = b;
	else
	if ((type_of(s) == t_string) && (type_of(m) == t_string))
	    r = pathstring_match_range(s,0, s->st.st_fillp,
	    			       m,0, m->st.st_fillp,
				       b);
	else
	    r = Cnil;

	return r;
}

static object
pathlist_match_p(s,m,b)
object s,m,b;
{
	while ((consp(s)) && (consp(m))) {
	    if (pathobject_match_p(s->c.c_car,m->c.c_car,Ct) == Cnil)
		return Cnil;
	    if (m->c.c_car == sKwildinf) {
	        object next,try,r,t;
		try = s;
		next = m->c.c_cdr;
		if (next == Cnil) {
		    r = b;
		    if (consp(b)) {
			t = make_cons(Cnil,Cnil);
			vs_push(t);
			r = pathstring_match_add(r,t);
			while (consp(s)) {
			    if (t->c.c_car == Cnil)
			        t->c.c_car = s->c.c_car;
		            else {
			        t->c.c_cdr = make_cons(s->c.c_car,Cnil);
				t = t->c.c_cdr;
			    }
			    s = s->c.c_cdr;
			}
		    }
		    return r;
		}
	        while (consp(try)) {
		    if ((pathobject_match_p(try->c.c_car,next->c.c_car,Ct) != Cnil) &&
			((r=pathlist_match_p(try,next,b))!= Cnil)) {
			    if (consp(r)) {
				t = make_cons(Cnil,Cnil);
				vs_push(t);
				r = pathstring_match_add(r,t);
				while ((consp(s)) && (s != try)) {
				    if (t->c.c_car == Cnil)
					t->c.c_car = s->c.c_car;
				    else {
					t->c.c_cdr = make_cons(s->c.c_car,Cnil);
					t = t->c.c_cdr;
				    }
				    s = s->c.c_cdr;
				}
			    }
			    return r;
		    }
		    try=try->c.c_cdr;
		}
		return Cnil;
	    } else
	    if (wild_component_p(m->c.c_car)) {
		b=pathlist_match_p(s->c.c_cdr,m->c.c_cdr,b);
		if (b!=Cnil)
		    b=pathobject_match_p(s->c.c_car,m->c.c_car,b);
		return b;
	    }
	    m=m->c.c_cdr;
	    s=s->c.c_cdr;
	}
	if ((s==Cnil) && (m->c.c_car == sKwildinf) && (m->c.c_cdr == Cnil)) {
	    vs_push(make_cons(Cnil,Cnil));
	    b = pathstring_match_add(b,vs_head);
	    return b;
	}

	return ((s==Cnil) && (m==Cnil)) ? b : Cnil;
}

static object
pathdirect_match_p(s,m,b)
object s,m,b;
{
	if (((s==Cnil) || (s==sKunspecific)) &&
#ifdef ANSI_COMMON_LISP
	    (!pathname_resolve(pathKansi)) &&
#endif
	    (consp(m))) {
	    if ((m->c.c_car == sKabsolute) ||
		 (m->c.c_car == sKrelative))
		    m=m->c.c_cdr;
	    if ((consp(m)) &&
	        (m->c.c_car == sKwildinf) &&
		(m->c.c_cdr == Cnil)) {
		    vs_push(make_cons(Cnil,Cnil));
		    b = pathstring_match_add(b,vs_head);
		    return b;
	    }
	}
	if ((consp(s)) && (consp(m))) {
	    /* skip relative/absolute */
#ifdef ANSI_COMMON_LISP
	    if (!pathname_resolve(pathKansi)) {
#endif
		if ((s->c.c_car == sKabsolute) || (s->c.c_car == sKrelative))
		    s=s->c.c_cdr;
		if ((m->c.c_car == sKabsolute) || (m->c.c_car == sKrelative))
		    m=m->c.c_cdr;
#ifdef ANSI_COMMON_LISP
	    } else {
		if (s->c.c_car == sKrelative) s=s->c.c_cdr;
		if (m->c.c_car == sKrelative) m=m->c.c_cdr;
	    }
#endif
	    
	    /* do the real thing - run into recursion */
	    return pathlist_match_p(s,m,b);
	}

        /* directory must be t_cons */
	return Cnil;
}

@(defun pathobject_match_p (s m)
@
	@(return `pathobject_match_p(s,m,Ct)`)
@)

@(defun pathobject_match_t (s m)
        object x;
	vs_mark;
@
	x=make_cons(sKstart,Cnil);
	vs_push(x);
	x=pathobject_match_p(s,m,x);
	if ((consp(x)) && (x->c.c_car == sKstart))
	    x=Ct;
	vs_reset;

	@(return x)
@)

/*
 * pathname_match_p
 *   returns T if pathname matches wildcard
 */

object pathname_match_p(s,m,b)
object s,m,b;
{
	object x = Ct;
	vs_mark;

	check_type_or_pathname_string_symbol_stream(&s);
	check_type_or_pathname_string_symbol_stream(&m);
	s = coerce_to_pathname(s); vs_push(s);
	m = coerce_to_pathname(m); vs_push(m);

	x=b;
	if ((x != Cnil) && (m->pn.pn_version != Cnil))
	    x=pathobject_match_p(s->pn.pn_version,m->pn.pn_version,x);
	if ((x != Cnil) && (m->pn.pn_type != Cnil))
	    x=pathobject_match_p(s->pn.pn_type,m->pn.pn_type,x);
	if ((x != Cnil) && (m->pn.pn_name != Cnil))
	    x=pathobject_match_p(s->pn.pn_name,m->pn.pn_name,x);
	if ((x != Cnil) && (m->pn.pn_directory != Cnil))
	    x=pathdirect_match_p(s->pn.pn_directory,m->pn.pn_directory,x);
	if ((x != Cnil) && (m->pn.pn_device != Cnil))
	    x=pathobject_match_p(s->pn.pn_device,m->pn.pn_device,x);
	if ((x != Cnil) && (m->pn.pn_host != Cnil))
	    x=pathobject_match_p(s->pn.pn_host,m->pn.pn_host,x);

	vs_reset;
	return x;
}

@(defun pathname_match_p (s m)
@
	@(return `pathname_match_p(s,m,Ct)`)
@)

@(defun pathname_match_t (s m)
        object x;
	vs_mark;
@
	x=make_cons(sKstart,Cnil);
	vs_push(x);
	x=pathname_match_p(s,m,x);
	if ((consp(x)) && (x->c.c_car == sKstart))
	    x=Ct;
	vs_reset;

	@(return x)
@)

object pathobject_patch(s,xa)
object s,*xa;
{
	int i,j;
	unsigned t;
	object p;
	t=0;


	if (s == sKwild) {
	    if ((consp(*xa)) &&
		(type_of((*xa)->c.c_car)==t_string)) {
		p=(*xa)->c.c_car;
		for (j=0;j<p->st.st_fillp; j++)
		    token->st.st_self[t++]=p->st.st_self[j];
		p=(*xa)->c.c_cdr;
		*xa=p;
	    } else
	    if ((consp(*xa)) &&
		(type_of((*xa)->c.c_car)==t_symbol)) {
		p=*xa;
		(*xa)=(*xa)->c.c_cdr;
		return p->c.c_car;
            } else
	    if (*xa == Cnil)
		return Cnil;
	    else
		FEerror("Invalid wild pathobject_patch ~S for sKwild",1,*xa);
	} else
	if (type_of(s) == t_string) {
	    for (i=0; i<s->st.st_fillp; i++) {
	    	if ((s->st.st_self[i]!='*') && (s->st.st_self[i]!='?'))
		    token->st.st_self[t++]=s->st.st_self[i];
		else
		if ((consp(*xa)) &&
		    (type_of((*xa)->c.c_car)==t_string)) {
		    p=(*xa)->c.c_car;
		    for (j=0;j<p->st.st_fillp; j++)
			token->st.st_self[t++]=p->st.st_self[j];
		    p=(*xa)->c.c_cdr;
		    *xa=p;
		} else
		if (*xa != Cnil)
		    FEerror("Invalid wild pathobject_patch ~S for wild",1,*xa);
	    }
	} else
	    FEerror("Invalid wild pathobject_patch ~S string",1,s);
        token->st.st_fillp=t;

	p=copy_simple_string(token);
	vs_push(p);
	return p;
}

object
translate_pathname(s,m,p)
object s,m,p;
{
        object r,t,x,y,z;
	vs_mark;

	check_type_or_pathname_string_symbol_stream(&s);
	check_type_or_pathname_string_symbol_stream(&m);
	check_type_or_pathname_string_symbol_stream(&p);
	s = coerce_to_pathname(s); vs_push(s);
	m = coerce_to_pathname(m); vs_push(m);
	p = coerce_to_pathname(p); vs_push(p);

	x=make_cons(sKstart,Cnil);
	vs_push(x);
	x=pathname_match_p(s,m,x);
	if ((consp(x)) && (x->c.c_car == sKstart))
	    x=Ct;
	vs_push(x);

	if (consp(x)) {
	    r = make_pathname(Cnil,Cnil,Cnil,Cnil,Cnil,Cnil,Cnil);
	    vs_push(r);

	    if (p->pn.pn_host == Cnil)
		r->pn.pn_host = Cnil;
	    else
	    if (wild_component_p(p->pn.pn_host))
		r->pn.pn_host = pathobject_patch(p->pn.pn_host,&x);
	    else
		r->pn.pn_host = p->pn.pn_host;
	    
	    if (p->pn.pn_device == Cnil)
		r->pn.pn_device = Cnil;
	    else
	    if (wild_component_p(p->pn.pn_device))
		r->pn.pn_device = pathobject_patch(p->pn.pn_device,&x);
	    else
		r->pn.pn_device = p->pn.pn_device;

	    if (p->pn.pn_directory == Cnil)
		r->pn.pn_directory = s->pn.pn_directory;
	    else
	    if (wild_component_p(m->pn.pn_directory)) {
		y=p->pn.pn_directory;
		z=Cnil;
		while (consp(y)) {
		    if (y->c.c_car == sKwildinf) {
			if (consp(x)) {
			    t = x->c.c_car;
			    if ((!consp(t)) && (t!=Cnil) && (t!=sKunspecific))
				FEerror("Invalid wild pathobject_patch ~S for sKwildinf",1,t);
			    if ((t->c.c_car != Cnil) && (t!=sKunspecific))
			    while (consp(t)) {
				if (z == Cnil) {
				    z = make_cons(t->c.c_car,Cnil);
				    r->pn.pn_directory=z;
				} else {
				    z->c.c_cdr=make_cons(t->c.c_car,Cnil);
				    z=z->c.c_cdr;
				}
				t=t->c.c_cdr;
			    }
			    x=x->c.c_cdr;
			} else
			if ((x!=Cnil) || (x!=sKunspecific))
			    FEerror("Invalid wild pathobject_patch ~S for sKwildinf",1,x);
		    } else {
			if (wild_component_p(y->c.c_car))
			    t = pathobject_patch(y->c.c_car,&x);
			else
			    t = y->c.c_car;
			if (z == Cnil) {
			    z = make_cons(t,Cnil);
			    r->pn.pn_directory=z;
			} else {
			    z->c.c_cdr=make_cons(t,Cnil);
			    z=z->c.c_cdr;
			}
		    }
		    y=y->c.c_cdr;
		}
	    } else
		r->pn.pn_directory = p->pn.pn_directory;

	    if (p->pn.pn_name == Cnil)
		r->pn.pn_name = s->pn.pn_name;
	    else
	    if (wild_component_p(p->pn.pn_name))
		r->pn.pn_name = pathobject_patch(p->pn.pn_name,&x);
	    else
		r->pn.pn_name = p->pn.pn_name;

	    if (p->pn.pn_type == Cnil)
		r->pn.pn_type = s->pn.pn_type;
	    else
	    if (wild_component_p(p->pn.pn_type))
		r->pn.pn_type = pathobject_patch(p->pn.pn_type,&x);
	    else
		r->pn.pn_type = p->pn.pn_type;

	    if (p->pn.pn_version == Cnil)
		r->pn.pn_version = s->pn.pn_version;
	    else
	    if (wild_component_p(p->pn.pn_version))
		r->pn.pn_version = pathobject_patch(p->pn.pn_version,&x);
	    else
		r->pn.pn_version = p->pn.pn_version;
	} else
	if (x == Ct)
	    r = vs_push(make_pathname(
		    p->pn.pn_host,
		    p->pn.pn_device,
		    p->pn.pn_directory == Cnil ?
			s->pn.pn_directory : p->pn.pn_directory,
		    p->pn.pn_name == Cnil ? s->pn.pn_name : p->pn.pn_name,
		    p->pn.pn_type == Cnil ? s->pn.pn_type : p->pn.pn_type,
		    p->pn.pn_version == Cnil ?
			s->pn.pn_version : p->pn.pn_version,
		    Cnil));
	else
	    r = Cnil;

	if (r != Cnil)
	    constrain_pathname(r);

	vs_reset;
	return r;
}

@(defun translate_pathname (s m p &key)
@
	@(return `translate_pathname(s,m,p)`)
@)

object
translate_logical_pathname(path,c)
object path;
{
	object l,r,s;
	vs_mark;

	check_type_or_pathname_string_symbol_stream(&path);
	s = coerce_to_pathname(path); vs_push(s);

	if (--c<=0)
 	    return(file_error("Translate logical pathname ~S recursion stop.",s));
	
	/* NIL and :unspecific are real host */
	if ((s->pn.pn_host == Cnil) || (s->pn.pn_host == sKunspecific) ||
	    (pathname_lookup(s->pn.pn_host,sSApathname_virtualA) != Cnil)) {
	    vs_reset;
            return path;
	}

	if ((l = pathname_lookup(s->pn.pn_host,sSApathname_logicalA)) == Cnil)
	    return(file_error("Invalid host in logical pathname ~S.",s));

	while (consp(l)) {
	    if ((consp(l->c.c_car)) &&
	    	(consp(l->c.c_car->c.c_cdr)) &&
	        ((r=translate_pathname(s,l->c.c_car->c.c_car,
		    l->c.c_car->c.c_cdr->c.c_car)) != Cnil)) {
		vs_push(r);
		r=translate_logical_pathname(r,c);
		vs_reset;
		return r;
		}
	    l=l->c.c_cdr;
	}

	vs_reset;
	return(file_error("No translation matches ~S.",s));
}

@(defun translate_logical_pathname (s &key)
@
	@(return `translate_logical_pathname(s,32)`)
@)

object
search_local_pathname(path,c)
object path;
{
	object l,r,s,w,p;
	vs_mark;

	check_type_or_pathname_string_symbol_stream(&path);
	s = coerce_to_pathname(path); vs_push(s);

	if (--c<=0)
 	    return(file_error("Search local pathname ~S recursion stop.",s));
	
	/* NIL and :unspecific are real devices and host */
	if (((s->pn.pn_host == Cnil) || (s->pn.pn_host == sKunspecific)) &&
	    ((s->pn.pn_device == Cnil) || (s->pn.pn_device == sKunspecific))) {
	    vs_reset;
            return path;
	}
	/* a device lookup of true or nil means a real device - only cons are translated */
	if ((s->pn.pn_device != Cnil) && (s->pn.pn_device != sKunspecific)) {
	    if (!consp(l=pathname_lookup(s->pn.pn_device,sSApathname_deviceA))) {
		vs_reset;
		return path;
	    } 
	} else {
	    if (consp(pathname_lookup(s->pn.pn_host,sSApathname_logicalA))) {
	        vs_push(r=translate_logical_pathname(path,c));
		r=search_local_pathname(r,c);
		vs_reset;
		return r;
	    } else
	    if (!consp(l=pathname_lookup(s->pn.pn_host,sSApathname_virtualA))) {
		if (l == Ct) {
		    r=make_pathname(Cnil,Cnil,
			s->pn.pn_directory,
			s->pn.pn_name,
			s->pn.pn_type,
			Cnil,Cnil);
		    vs_reset;
		    return r;
		} else
		    return(file_error("No translation matches ~S.",s));
	    }
	}

	while (consp(l)) {
	    if ((consp(l->c.c_car)) &&
	    	(consp(l->c.c_car->c.c_cdr)) &&
	        ((r=translate_pathname(s,l->c.c_car->c.c_car,
		    l->c.c_car->c.c_cdr->c.c_car)) != Cnil)) {
		w=l->c.c_car->c.c_cdr->c.c_cdr;
		if ((consp(w)) &&
		    ((s->pn.pn_name != Cnil) || (s->pn.pn_type != Cnil))) {
		    vs_push(r);
		    if (!file_exists(r)) {
			while (consp(w)) {
			    p=translate_pathname(s,l->c.c_car->c.c_car,w->c.c_car);
			    if (type_of(p) == t_pathname) {
				vs_push(p);
				if (file_exists(p)) {
				    vs_reset;
				    return p;
				}
			    }
			    w=w->c.c_cdr;
			}
		    }
		}
		vs_reset;
		return r;
	    }
	    l=l->c.c_cdr;
	}

	vs_reset;
	return(file_error("No translation matches ~S.",s));
}

@(defun search_local_pathname (s &key)
@
	s=search_local_pathname(s,32);
	if (type_of(s)==t_pathname) {
	    s=make_pathname(
		s->pn.pn_host,s->pn.pn_device,s->pn.pn_directory,
		s->pn.pn_name,s->pn.pn_type,s->pn.pn_version, Cnil);
	    wrap_pathname(s);
	}
	@(return s)
@)


@(defun logical_pathname (s)
  enum type tp;
@

  {
    vs_mark;
    vs_push(s);
    
    tp=type_of(s);
    if (tp!=t_pathname &&
	tp!=t_string &&
	tp!=t_symbol &&
	tp!=t_stream) {
      wrong_type_argument(TSor_pathname_string_symbol_stream, s);
      s=Cnil;
      
    } else {
      
      s = coerce_to_pathname(s); 
      vs_push(s);
      
      if ((s->pn.pn_host == Cnil) || (s->pn.pn_host == sKunspecific)) {
	file_type_error("Pathname ~S is not a ~S.",s, sLlogical_pathname);
	s=Cnil;
      } else
	if ((s->pn.pn_device != Cnil) && (s->pn.pn_device != sKunspecific)) {
	  file_type_error("Pathname ~S is not a ~S.",s, sLlogical_pathname);
	  s=Cnil;
	} else
	  if (pathname_lookup(s->pn.pn_host,sSApathname_logicalA) == Cnil) {
	    file_type_error("Pathname ~S is not a ~S.",s, sLlogical_pathname);
	    s=Cnil;
	  } else
	    s->pn.pn_device = sKunspecific; /*FIXME side effect*/
    }

    s->d.tt=1;
    vs_reset;
  }
  @(return s)

@)


void
gcl_init_pathname(void)
{
	Vdefault_pathname_defaults =
	make_special("*DEFAULT-PATHNAME-DEFAULTS*",
		     make_pathname(Cnil, Cnil, Cnil, Cnil, Cnil, Cnil, Cnil));

	sKwild = make_keyword("WILD");
	sKwildinf = make_keyword("WILD-INFERIORS");
	sKnewest = make_keyword("NEWEST");

	sKstart = make_keyword("START");
	sKend = make_keyword("END");
	sKjunk_allowed = make_keyword("JUNK-ALLOWED");

	sKhost = make_keyword("HOST");
	sKdevice = make_keyword("DEVICE");
	sKdirectory = make_keyword("DIRECTORY");
	sKname = make_keyword("NAME");
	sKtype = make_keyword("TYPE");
	sKversion = make_keyword("VERSION");
	sKdefaults = make_keyword("DEFAULTS");

	sKroot = make_keyword("ROOT");
	sKcurrent = make_keyword("CURRENT");
	sKparent = make_keyword("PARENT");
	sKabsolute = make_keyword("ABSOLUTE");
	sKrelative = make_keyword("RELATIVE");
	sKup = make_keyword("UP");
	sKback = make_keyword("BACK");
        sKlocal = make_keyword("LOCAL");
        sKcommon = make_keyword("COMMON");
        sKunspecific = make_keyword("UNSPECIFIC");
	sKhome = make_keyword("HOME");
        sKpathname_error = make_keyword("PATHNAME-ERROR");
#ifdef ANSI_COMMON_LISP
	pathKansi = make_keyword("ANSI");
#endif
}

void
gcl_init_pathname_function()
{
	make_function("PATHNAME", Lpathname);
	make_function("PARSE-NAMESTRING", Lparse_namestring);
	make_function("MERGE-PATHNAMES", Lmerge_pathnames);
	make_function("MAKE-PATHNAME", Lmake_pathname);
	make_function("PATHNAMEP", Lpathnamep);
	make_function("PATHNAME-HOST", Lpathname_host);
	make_function("PATHNAME-DEVICE", Lpathname_device);
	make_function("PATHNAME-DIRECTORY", Lpathname_directory);
	make_function("PATHNAME-NAME", Lpathname_name);
	make_function("PATHNAME-TYPE", Lpathname_type);
	make_function("PATHNAME-VERSION", Lpathname_version);
	make_function("NAMESTRING", Lnamestring);
	make_function("FILE-NAMESTRING", Lfile_namestring);
	make_function("DIRECTORY-NAMESTRING", Ldirectory_namestring);
	make_function("HOST-NAMESTRING", Lhost_namestring);
	make_function("ENOUGH-NAMESTRING", Lenough_namestring);
	make_function("PATHNAME-MATCH-P", Lpathname_match_p);
	make_function("TRANSLATE-PATHNAME", Ltranslate_pathname);
	make_function("TRANSLATE-LOGICAL-PATHNAME", Ltranslate_logical_pathname);
	make_function("LOGICAL-PATHNAME", Llogical_pathname);
/* 	make_function("LOGICAL-PATHNAME-P", Llogical_pathname_p); */

	make_si_function("WRAP-PATHNAME", Lwrap_pathname);
	make_si_function("SEARCH-LOCAL-PATHNAME", Lsearch_local_pathname);
	make_si_function("PATHNAME-LOOKUP", Lpathname_lookup);
	make_si_function("SET-PATHNAME-LOOKUP", Lset_pathname_lookup);
	make_si_function("PATHOBJECT-MATCH-P", Lpathobject_match_p);
	make_si_function("PATHOBJECT-MATCH-T", Lpathobject_match_t);
	make_si_function("PATHNAME-MATCH-T", Lpathname_match_t);
}
