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
	print.d
*/


#include "include.h"

#define LINE_LENGTH line_length
int  line_length = 72;

#ifndef WRITEC_NEWLINE
#define  WRITEC_NEWLINE(strm) (writec_stream('\n',strm))
#endif

#define	to_be_escaped(c) \
	(standard_readtable->rt.rt_self[(c)&0377].rte_chattrib \
	 != cat_constituent || \
	 isLower((c)&0377) || (c) == ':')


#define	mod(x)		((x)%Q_SIZE)


#define queue printStructBufp->p_queue
#define indent_stack printStructBufp->p_indent_stack
#define qh printStructBufp->p_qh
#define qt printStructBufp->p_qt
#define qc printStructBufp->p_qc
#define isp printStructBufp->p_isp
#define iisp printStructBufp->p_iisp


object sSAprint_packageA;
object sSAprint_structureA;


/* bool RPINcircle; ??typo?? */



#define	write_ch	(*write_ch_fun)


#define	MARK		0400
#define	UNMARK		0401
#define	SET_INDENT	0402
#define	INDENT		0403
#define	INDENT1		0404
#define	INDENT2		0405

extern object coerce_stream(object,int);

writec_queue(c)
int c;
{
	if (qc >= Q_SIZE)
		flush_queue(FALSE);
	if (qc >= Q_SIZE)
		FEerror("Can't pretty-print.", 0);
	queue[qt] = c;
	qt = mod(qt+1);
	qc++;
}

flush_queue(force)
{
	int c, i, j, k, l, i0;

BEGIN:
	while (qc > 0) {
		c = queue[qh];
		if (c == MARK)
			goto DO_MARK;
		else if (c == UNMARK)
			isp -= 2;
		else if (c == SET_INDENT)
			indent_stack[isp] = file_column(PRINTstream);
		else if (c == INDENT) {
			goto DO_INDENT;
		} else if (c == INDENT1) {
			i = file_column(PRINTstream)-indent_stack[isp];
			if (i < 8 && indent_stack[isp] < LINE_LENGTH/2) {
				writec_stream(' ', PRINTstream);
				indent_stack[isp]
				= file_column(PRINTstream);
			} else {
				if (indent_stack[isp] < LINE_LENGTH/2) {
					indent_stack[isp]
					= indent_stack[isp-1] + 4;
				}
				goto DO_INDENT;
			}
		} else if (c == INDENT2) {
			indent_stack[isp] = indent_stack[isp-1] + 2;
			goto PUT_INDENT;
		} else if (c < 0400)
			writec_stream(c, PRINTstream);
		qh = mod(qh+1);
		--qc;
	}
	return;

DO_MARK:
	k = LINE_LENGTH - 1 - file_column(PRINTstream);
	for (i = 1, j = 0, l = 1;  l > 0 && i < qc && j < k;  i++) {
		c = queue[mod(qh + i)];
		if (c == MARK)
			l++;
		else if (c == UNMARK)
			--l;
		else if (c == INDENT || c == INDENT1 || c == INDENT2)
			j++;
		else if (c < 0400)
			j++;
	}
	if (l == 0)
		goto FLUSH;
	if (i == qc && !force)
		return;
	qh = mod(qh+1);
	--qc;
	if (++isp >= IS_SIZE-1)
		FEerror("Can't pretty-print.", 0);
	indent_stack[isp++] = file_column(PRINTstream);
	indent_stack[isp] = indent_stack[isp-1];
	goto BEGIN;

DO_INDENT:
	if (iisp > isp)
		goto PUT_INDENT;
	k = LINE_LENGTH - 1 - file_column(PRINTstream);
	for (i0 = 0, i = 1, j = 0, l = 1;  i < qc && j < k;  i++) {
		c = queue[mod(qh + i)];
		if (c == MARK)
			l++;
		else if (c == UNMARK) {
			if (--l == 0)
				goto FLUSH;
		} else if (c == SET_INDENT) {
			if (l == 1)
				break;
		} else if (c == INDENT) {
			if (l == 1)
				i0 = i;
			j++;
		} else if (c == INDENT1) {
			if (l == 1)
				break;
			j++;
		} else if (c == INDENT2) {
			if (l == 1) {
				i0 = i;
				break;
			}
			j++;
		} else if (c < 0400)
			j++;
	}
	if (i == qc && !force)
		return;
	if (i0 == 0)
		goto PUT_INDENT;
	i = i0;
	goto FLUSH;

PUT_INDENT:
	qh = mod(qh+1);
	--qc;
	
        WRITEC_NEWLINE(PRINTstream);
	for (i = indent_stack[isp];  i > 0;  --i)
		writec_stream(' ', PRINTstream);
	iisp = isp;
	goto BEGIN;

FLUSH:
	for (j = 0;  j < i;  j++) {
		c = queue[qh];
		if (c == INDENT || c == INDENT1 || c == INDENT2)
			writec_stream(' ', PRINTstream);
		else if (c < 0400)
			writec_stream(c, PRINTstream);
		qh = mod(qh+1);
		--qc;
	}
	goto BEGIN;
}

writec_PRINTstream(c)
int c;
{
	if (c == INDENT || c == INDENT1)
		writec_stream(' ', PRINTstream);
	else if (c < 0400)
		writec_stream(c, PRINTstream);
}

write_str(s)
char *s;
{
	while (*s != '\0')
		write_ch(*s++);
}

write_decimal(i)
int i;
{
	if (i == 0) {
		write_ch('0');
		return;
	}
	write_decimal1(i);
}

write_decimal1(i)
int i;
{
	if (i == 0)
		return;
	write_decimal1(i/10);
	write_ch(i%10 + '0');
}

write_addr(x)
object x;
{
	int i, j, k;

	i = (int)x;
	for (j = 28;  j >= 0;  j -= 4) {
		k = (i>>j) & 0xf;
		if (k < 10)
			write_ch('0' + k);
		else
			write_ch('a' + k - 10);
	}
}

write_base()
{
	if (PRINTbase == 2)
		write_str("#b");
	else if (PRINTbase == 8)
		write_str("#o");
	else if (PRINTbase == 16)
		write_str("#x");
	else if (PRINTbase >= 10) {
		write_ch('#');
		write_ch(PRINTbase/10+'0');
		write_ch(PRINTbase%10+'0');
		write_ch('r');
	} else {
		write_ch('#');
		write_ch(PRINTbase+'0');
		write_ch('r');
	}
}

/* The floating point precision required to make the most-positive-long-float
   printed expression readable.   If this is too small, then the rounded
   off fraction, may be too big to read */

#ifndef FPRC 
#define FPRC 16
#endif

object sSAprint_nansA;

edit_double(n, d, sp, s, ep)
int n;
double d;
char *s;
int *sp;
int *ep;
{
	char *p, buff[FPRC + 9];
	int i;

#ifdef IEEEFLOAT
	if ((*((int *)&d +HIND) & 0x7ff00000) == 0x7ff00000)
           {if (sSAprint_nansA->s.s_dbind !=Cnil)
	      {sprintf(s, "%e",d);
	       *sp = 2;
	       return;
	     }
	   else
		FEerror("Can't print a non-number.",
			0);}
	else
		sprintf(buff, "%*.*e",FPRC+8,FPRC, d);
	if (buff[FPRC+3] != 'e') {
		sprintf(buff, "%*.*e",FPRC+7,FPRC,d);
		*ep = (buff[FPRC+5]-'0')*10 + (buff[FPRC+6]-'0');
	} else
		*ep = (buff[FPRC+5]-'0')*100 +
		  (buff[FPRC+6]-'0')*10 + (buff[FPRC+7]-'0');
	*sp = 1;
	if (buff[0] == '-')
		*sp *= -1;
#else
	sprintf(buff, "%*.*e",FPRC+7,FPRC, d);
	/*  "-D.MMMMMMMMMMMMMMMe+EE"  */
	/*   0123456789012345678901   */
	*sp = 1;
	if (buff[0] == '-')
		*sp *= -1;
	*ep = (buff[FPRC+5]-'0')*10 + (buff[FPRC+6]-'0');
#endif

	if (buff[FPRC+4] == '-')
		*ep *= -1;
	buff[2] = buff[1];
	p = buff + 2;
	if (n < FPRC+1) {
		if (p[n] >= '5') {
			for (i = n - 1;  i >= 0;  --i)
				if (p[i] == '9')
					p[i] = '0';
				else {
					p[i]++;
					break;
				}
			if (i < 0) {
				*--p = '1';
				(*ep)++;
			}
		}
		for (i = 0;  i < n;  i++)
			s[i] = p[i];
	} else {
		for (i = 0;  i < FPRC+1;  i++)
			s[i] = p[i];
		for (;  i < n;  i++)
			s[i] = '0';
	}
	s[n] = '\0';
}

write_double(d, e, shortp)
double d;
int e;
bool shortp;
{
	int sign;
	char buff[FPRC+5];
	int exp;
	int i;
	int n = FPRC+1;

	if (shortp)
		n = 7;
	edit_double(n, d, &sign, buff, &exp);
	if (sign==2) {write_str("#<");
		      write_str(buff);
		      write_ch('>');
		      return;
		    }
	if (sign < 0)
		write_ch('-');
	if (-3 <= exp && exp < 7) {
		if (exp < 0) {
			write_ch('0');
			write_ch('.');
			exp = (-exp) - 1;
			for (i = 0;  i < exp;  i++)
				write_ch('0');
			for (;  n > 0;  --n)
				if (buff[n-1] != '0')
					break;
			if (exp == 0 && n == 0)
				n = 1;
			for (i = 0;  i < n;  i++)
				write_ch(buff[i]);
		} else {
			exp++;
			for (i = 0;  i < exp;  i++)
				if (i < n)
					write_ch(buff[i]);
				else
					write_ch('0');
			write_ch('.');
			if (i < n)
				write_ch(buff[i]);
			else
				write_ch('0');
			i++;
			for (;  n > i;  --n)
				if (buff[n-1] != '0')
					break;
			for (;  i < n;  i++)
				write_ch(buff[i]);
		}
		exp = 0;
	} else {
		write_ch(buff[0]);
		write_ch('.');
		write_ch(buff[1]);
		for (;  n > 2;  --n)
			if (buff[n-1] != '0')
				break;
		for (i = 2;  i < n;  i++)
			write_ch(buff[i]);
	}
	if (exp == 0 && e == 0)
		return;
	if (e == 0)
		e = 'E';
	write_ch(e);
	if (exp < 0) {
		write_ch('-');
		exp *= -1;
	}
	write_decimal(exp);
}

call_structure_print_function(x, level)
object x;
int level;
{
	int i;
	bool eflag;
	bds_ptr old_bds_top;

	int (*wf)() = write_ch_fun;

	object *vt = PRINTvs_top;
	object *vl = PRINTvs_limit;
	bool e = PRINTescape;
	bool r = PRINTradix;
	int b = PRINTbase;
	bool c = PRINTcircle;
	bool p = PRINTpretty;
	int lv = PRINTlevel;
	int ln = PRINTlength;
	bool g = PRINTgensym;
	bool a = PRINTarray;

/*
	short oq[Q_SIZE];
*/
	short ois[IS_SIZE];

	int oqh;
	int oqt;
	int oqc;
	int oisp;
	int oiisp;

ONCE_MORE:
	if (interrupt_flag) {
		interrupt_flag = FALSE;
#ifdef UNIX
		alarm(0);
#endif
		terminal_interrupt(TRUE);
		goto ONCE_MORE;
	}

	if (PRINTpretty)
		flush_queue(TRUE);

	oqh = qh;
	oqt = qt;
	oqc = qc;
	oisp = isp;
	oiisp = iisp;

/*	No need to save the queue, since it is flushed.
	for (i = 0;  i < Q_SIZE;  i++)
		oq[i] = queue[i];
*/
	if (PRINTpretty)
	for (i = 0;  i <= isp;  i++)
		ois[i] = indent_stack[i];

	vs_push(PRINTstream);
	vs_push(PRINTcase);

	vs_push(make_fixnum(level));

	old_bds_top = bds_top;
	bds_bind(sLAprint_escapeA, PRINTescape?Ct:Cnil);
	bds_bind(sLAprint_radixA, PRINTradix?Ct:Cnil);
	bds_bind(sLAprint_baseA, make_fixnum(PRINTbase));
	bds_bind(sLAprint_circleA, PRINTcircle?Ct:Cnil);
	bds_bind(sLAprint_prettyA, PRINTpretty?Ct:Cnil);
	bds_bind(sLAprint_levelA, PRINTlevel<0?Cnil:make_fixnum(PRINTlevel));
	bds_bind(sLAprint_lengthA, PRINTlength<0?Cnil:make_fixnum(PRINTlength));
	bds_bind(sLAprint_gensymA, PRINTgensym?Ct:Cnil);
	bds_bind(sLAprint_arrayA, PRINTarray?Ct:Cnil);
	bds_bind(sLAprint_caseA, PRINTcase);

	frs_push(FRS_PROTECT, Cnil);
	if (nlj_active) {
		eflag = TRUE;
		goto L;
	}

	ifuncall3(S_DATA(x->str.str_def)->print_function,
		  x, PRINTstream, vs_head);
	vs_pop;
	eflag = FALSE;

L:
	frs_pop();
	bds_unwind(old_bds_top);

/*
	for (i = 0;  i < Q_SIZE;  i++)
		queue[i] = oq[i];
*/
	if (PRINTpretty)
	for (i = 0;  i <= oisp;  i++)
		indent_stack[i] = ois[i];

	iisp = oiisp;
	isp = oisp;
	qc = oqc;
	qt = oqt;
	qh = oqh;

	PRINTcase = vs_pop;
	PRINTstream = vs_pop;
	PRINTarray = a;
	PRINTgensym = g;
	PRINTlength = ln;
	PRINTlevel = lv;
	PRINTpretty = p;
	PRINTcircle = c;
	PRINTbase = b;
	PRINTradix = r;
	PRINTescape = e;
	PRINTvs_limit = vl;
	PRINTvs_top = vt;

	write_ch_fun = wf;

	if (eflag) {
		nlj_active = FALSE;
		unwind(nlj_fr, nlj_tag);
	}
}
object copy_big();

write_object(x, level)
object x;
int level;
{
	object r, y;
	int i, j, k,lw;
	object *vp;

	cs_check(x);

	if (x == OBJNULL) {
		write_str("#<OBJNULL>");
		return;
	}
	if (x->d.m == FREE) {
		write_str("#<FREE OBJECT ");
		write_addr(x);
		write_str(">");
		return;
	}

	switch (type_of(x)) {

	case t_fixnum:
	{
		object *vsp;

		if (PRINTradix && PRINTbase != 10)
			write_base();
		i = fix(x);
		if (i == 0) {
			write_ch('0');
			if (PRINTradix && PRINTbase == 10)
				write_ch('.');
			break;
		}
		if (i < 0) {
			write_ch('-');
			if (i == MOST_NEG_FIXNUM) {
				x = fixnum_add(1,(MOST_POSITIVE_FIXNUM));
				vs_push(x);
				i = PRINTradix;
				PRINTradix = FALSE;
				write_object(x, level);
				PRINTradix = i;
				vs_pop;
				if (PRINTradix && PRINTbase == 10)
					write_ch('.');
				break;
			}
			i = -i;
		}
		vsp = vs_top;
		for (vsp = vs_top;  i != 0;  i /= PRINTbase)
			vs_push(code_char(digit_weight(i%PRINTbase,
						       PRINTbase)));
		while (vs_top > vsp)
			write_ch(char_code((vs_pop)));
		if (PRINTradix && PRINTbase == 10)
			write_ch('.');
		break;
	}

	case t_bignum:
	{
		if (PRINTradix && PRINTbase != 10)
			write_base();
		i = big_sign(x);
		if (i == 0) {
			write_ch('0');
			if (PRINTradix && PRINTbase == 10)
				write_ch('.');
			break;
		}
		{ object s = coerce_big_to_string(x,PRINTbase);
                  int i=0;
                  while (i<s->ust.ust_fillp) { write_ch(s->ust.ust_self[i++]); }
                 } 
		if (PRINTradix && PRINTbase == 10)
			write_ch('.');
		break;
	}

	case t_ratio:
		if (PRINTradix) {
			write_base();
			PRINTradix = FALSE;
			write_object(x->rat.rat_num, level);
			write_ch('/');
			write_object(x->rat.rat_den, level);
			PRINTradix = TRUE;
		} else {
			write_object(x->rat.rat_num, level);
			write_ch('/');
			write_object(x->rat.rat_den, level);
		}
		break;

	case t_shortfloat:
		r = symbol_value(sLAread_default_float_formatA);
		if (r == sLshort_float)
			write_double((double)sf(x), 0, TRUE);
		else
			write_double((double)sf(x), 'S', TRUE);
		break;

	case t_longfloat:
		r = symbol_value(sLAread_default_float_formatA);
		if (r == sLsingle_float ||
		    r == sLlong_float || r == sLdouble_float)
			write_double(lf(x), 0, FALSE);
		else
			write_double(lf(x), 'F', FALSE);
		break;

	case t_complex:
		write_str("#C(");
		write_object(x->cmp.cmp_real, level);
		write_ch(' ');
		write_object(x->cmp.cmp_imag, level);
		write_ch(')');
		break;

	case t_character:
		if (!PRINTescape) {
			write_ch(char_code(x));
			break;
		}
		write_str("#\\");
		switch (char_code(x)) {
		case '\r':
			write_str("Return");
			break;

		case ' ':
			write_str("Space");
			break;

		case '\177':
			write_str("Rubout");
			break;

		case '\f':
			write_str("Page");
			break;

		case '\t':
			write_str("Tab");
			break;

		case '\b':
			write_str("Backspace");
			break;

		case '\n':
			write_str("Newline");
			break;

		default:
			if (char_code(x) & 0200) {
				write_ch('\\');
				i = char_code(x);
				write_ch(((i>>6)&7) + '0');
				write_ch(((i>>3)&7) + '0');
				write_ch(((i>>0)&7) + '0');
			} else if (char_code(x) < 040) {
				write_ch('^');
				write_ch(char_code(x) + 0100);
			} else
				write_ch(char_code(x));
			break;
		}
		break;

	case t_symbol:
		if (!PRINTescape) {
			for (lw = 0,i = 0;  i < x->s.s_fillp;  i++) {
				j = x->s.s_self[i];
				if (isUpper(j)) {
                                    if (PRINTcase == sKdowncase ||
                                        PRINTcase == sKcapitalize && i!=lw)
                                          j += 'a' - 'A';
                                 } else if (!isLower(j))
                                         lw = i + 1;
                                  write_ch(j);

			}
			break;
		}
		if (x->s.s_hpack == Cnil) {
		    if (PRINTcircle) {
			for (vp = PRINTvs_top;  vp < PRINTvs_limit;  vp += 2)
			    if (x == *vp) {
				if (vp[1] != Cnil) {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('#');
				    return;
				} else {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('=');
				    vp[1] = Ct;
				}
			    }
		    }
		    if (PRINTgensym)
			write_str("#:");
		} else if (x->s.s_hpack == keyword_package)
			write_ch(':');
		else if (PRINTpackage||find_symbol(x,current_package())!=x
			 || intern_flag == 0)
		  {
			k = 0;
			for (i = 0;
			     i < x->s.s_hpack->p.p_name->st.st_fillp;
			     i++) {
				j = x->s.s_hpack->p.p_name
				    ->st.st_self[i];
				if (to_be_escaped(j))
					k++;
			}
			if (k > 0)
				write_ch('|');
		     for (lw = 0, i = 0;	
			     i < x->s.s_hpack->p.p_name->st.st_fillp;
			     i++) {
				j = x->s.s_hpack->p.p_name
				    ->st.st_self[i];
 				if (j == '|' || j == '\\')
					write_ch('\\');
                                 if (k == 0) {
                                         if (isUpper(j)) {
                                                 if (PRINTcase == sKdowncase ||
                                                     PRINTcase == sKcapitalize && i!=lw)
                                                 j += 'a' - 'A';
                                         } else if (!isLower(j))
                                                 lw = i + 1;
                                 }
				write_ch(j);
			}
			if (k > 0)
				write_ch('|');
			if (find_symbol(x, x->s.s_hpack) != x)
				error("can't print symbol");
			if (PRINTpackage || intern_flag == INTERNAL)
				write_str("::");
			else if (intern_flag == EXTERNAL)
				write_ch(':');
			else
			FEerror("Pathological symbol --- cannot print.", 0);
		}
		k = 0;
		if (potential_number_p(x, PRINTbase))
			k++;
		for (i = 0;  i < x->s.s_fillp;  i++) {
			j = x->s.s_self[i];
			if (to_be_escaped(j))
				k++;
		}
		for (i = 0;  i < x->s.s_fillp;  i++)
			if (x->s.s_self[i] != '.')
				goto NOT_DOT;
		k++;

	NOT_DOT:			
		if (k > 0)
			write_ch('|');
                 for (lw = 0, i = 0;  i < x->s.s_fillp;  i++) {
			j = x->s.s_self[i];
 			if (j == '|' || j == '\\')
				write_ch('\\');
                         if (k == 0) {
                                 if (isUpper(j)) {
                                         if (PRINTcase == sKdowncase ||
                                             PRINTcase == sKcapitalize && i != lw)
                                             j += 'a' - 'A';
                                 } else if (!isLower(j))
                                         lw = i + 1;
                         }
			write_ch(j);
		}
		if (k > 0)
			write_ch('|');
		break;

	case t_array:
	{
		int subscripts[ARANKLIM];
		int n, m;

		if (!PRINTarray) {
			write_str("#<array ");
			write_addr(x);
			write_str(">");
			break;
		}
		if (PRINTcircle) {
			for (vp = PRINTvs_top;  vp < PRINTvs_limit;  vp += 2)
			    if (x == *vp) {
				if (vp[1] != Cnil) {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('#');
				    return;
				} else {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('=');
				    vp[1] = Ct;
				    break;
				}
			    }
		}
		if (PRINTlevel >= 0 && level >= PRINTlevel) {
			write_ch('#');
			break;
		}
		n = x->a.a_rank;
		write_ch('#');
		write_decimal(n);
		write_ch('A');
		if (PRINTlevel >= 0 && level+n >= PRINTlevel)
			n = PRINTlevel - level;
		for (i = 0;  i < n;  i++)
			subscripts[i] = 0;
		m = 0;
		j = 0;
		for (;;) {
			for (i = j;  i < n;  i++) {
				if (subscripts[i] == 0) {
					write_ch(MARK);
					write_ch('(');
					write_ch(SET_INDENT);
					if (x->a.a_dims[i] == 0) {
						write_ch(')');
						write_ch(UNMARK);
						j = i-1;
						k = 0;
						goto INC;
					}
				}
				if (subscripts[i] > 0)
					write_ch(INDENT);
				if (PRINTlength >= 0 &&
				    subscripts[i] >= PRINTlength) {
					write_str("...)");
					write_ch(UNMARK);
					k=x->a.a_dims[i]-subscripts[i];
					subscripts[i] = 0;
					for (j = i+1;  j < n;  j++)
						k *= x->a.a_dims[j];
					j = i-1;
					goto INC;
				}
			}
			if (n == x->a.a_rank) {
				vs_push(aref(x, m));
				write_object(vs_head, level+n);
				vs_pop;
			} else
				write_ch('#');
			j = n-1;
			k = 1;

		INC:
			while (j >= 0) {
				if (++subscripts[j] < x->a.a_dims[j])
					break;
				subscripts[j] = 0;
				write_ch(')');
				write_ch(UNMARK);
				--j;
			}
			if (j < 0)
				break;
			m += k;
		}
		break;
	}

	case t_vector:
		if (!PRINTarray) {
			write_str("#<vector ");
			write_addr(x);
			write_str(">");
			break;
		}
		if (PRINTcircle) {
			for (vp = PRINTvs_top;  vp < PRINTvs_limit;  vp += 2)
			    if (x == *vp) {
				if (vp[1] != Cnil) {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('#');
				    return;
				} else {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('=');
				    vp[1] = Ct;
				    break;
				}
			    }
		}
		if (PRINTlevel >= 0 && level >= PRINTlevel) {
			write_ch('#');
			break;
		}
		write_ch('#');
		write_ch(MARK);
		write_ch('(');
		write_ch(SET_INDENT);
		if (x->v.v_fillp > 0) {
			if (PRINTlength == 0) {
				write_str("...)");
				write_ch(UNMARK);
				break;
			}
			vs_push(aref(x, 0));
			write_object(vs_head, level+1);
			vs_pop;
			for (i = 1;  i < x->v.v_fillp;  i++) {
				write_ch(INDENT);
				if (PRINTlength>=0 && i>=PRINTlength){
					write_str("...");
					break;
				}
				vs_push(aref(x, i));
				write_object(vs_head, level+1);
				vs_pop;
			}
		}
		write_ch(')');
		write_ch(UNMARK);
		break;

	case t_string:
		if (!PRINTescape) {
			for (i = 0;  i < x->st.st_fillp;  i++)
				write_ch(x->st.st_self[i]);
			break;
		}
		write_ch('"');
		for (i = 0;  i < x->st.st_fillp;  i++) {
			if (x->st.st_self[i] == '"' ||
			    x->st.st_self[i] == '\\')
				write_ch('\\');
			write_ch(x->st.st_self[i]);
		}
		write_ch('"');
		break;

	case t_bitvector:
		if (!PRINTarray) {
			write_str("#<bit-vector ");
			write_addr(x);
			write_str(">");
			break;
		}
		write_str("#*");
		for (i = 0;  i < x->bv.bv_fillp;  i++)
			if (x->bv.bv_self[i/8] & (0200 >> i%8))
				write_ch('1');
			else
				write_ch('0');
		break;

	case t_cons:
		if (x->c.c_car == siSsharp_comma) {
			write_str("#.");
			write_object(x->c.c_cdr, level);
			break;
		}
		if (PRINTcircle) {
			for (vp = PRINTvs_top;  vp < PRINTvs_limit;  vp += 2)
			    if (x == *vp) {
				if (vp[1] != Cnil) {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('#');
				    return;
				} else {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('=');
				    vp[1] = Ct;
				    break;
				}
			    }
		}
                if (PRINTpretty) {
		if (x->c.c_car == sLquote &&
		    type_of(x->c.c_cdr) == t_cons &&
		    x->c.c_cdr->c.c_cdr == Cnil) {
			write_ch('\'');
			write_object(x->c.c_cdr->c.c_car, level);
			break;
		}
		if (x->c.c_car == sLfunction &&
		    type_of(x->c.c_cdr) == t_cons &&
		    x->c.c_cdr->c.c_cdr == Cnil) {
			write_ch('#');
			write_ch('\'');
			write_object(x->c.c_cdr->c.c_car, level);
			break;
		}
                }
		if (PRINTlevel >= 0 && level >= PRINTlevel) {
			write_ch('#');
			break;
		}
		write_ch(MARK);
		write_ch('(');
		write_ch(SET_INDENT);
		if (PRINTpretty && x->c.c_car != OBJNULL &&
		    type_of(x->c.c_car) == t_symbol &&
		    (r = getf(x->c.c_car->s.s_plist,
		              sSpretty_print_format, Cnil)) != Cnil)
			goto PRETTY_PRINT_FORMAT;
		for (i = 0;  ;  i++) {
			if (PRINTlength >= 0 && i >= PRINTlength) {
				write_str("...");
				break;
			}
			y = x->c.c_car;
			x = x->c.c_cdr;
			write_object(y, level+1);
			if (type_of(x) != t_cons) {
				if (x != Cnil) {
					write_ch(INDENT);
					write_str(". ");
					write_object(x, level);
				}
				break;
			}
			if (PRINTcircle) {
			  for (vp = PRINTvs_top; vp < PRINTvs_limit; vp += 2)
			    if (x == *vp) {
				if (vp[1] != Cnil) {
				    write_str(" . #");
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('#');
				    goto RIGHT_PAREN;
				} else {
				    write_ch(INDENT);
				    write_str(". ");
				    write_object(x, level);
				    goto RIGHT_PAREN;
				}
			    }
			}
			if (i == 0 && y != OBJNULL && type_of(y) == t_symbol)
				write_ch(INDENT1);
			else
				write_ch(INDENT);
		}

	RIGHT_PAREN:
		write_ch(')');
		write_ch(UNMARK);
		break;

	PRETTY_PRINT_FORMAT:
		j = fixint(r);
		for (i = 0;  ;  i++) {
			if (PRINTlength >= 0 && i >= PRINTlength) {
				write_str("...");
				break;
			}
			y = x->c.c_car;
			x = x->c.c_cdr;
			if (i <= j && y == Cnil)
				write_str("()");
			else
				write_object(y, level+1);
			if (type_of(x) != t_cons) {
				if (x != Cnil) {
					write_ch(INDENT);
					write_str(". ");
					write_object(x, level);
				}
				break;
			}
			if (i >= j)
				write_ch(INDENT2);
			else if (i == 0)
				write_ch(INDENT1);
			else
				write_ch(INDENT);
		}
		goto RIGHT_PAREN;

	case t_package:
		write_str("#<");
		write_object(x->p.p_name, level);
 		write_str(" package>");
		break;

	case t_hashtable:
		write_str("#<hash-table ");
		write_addr(x);
		write_str(">");
		break;

	case t_stream:
		switch (x->sm.sm_mode) {
		case smm_input:
			write_str("#<input stream ");
			write_object(x->sm.sm_object1, level);
			write_ch('>');
			break;

		case smm_output:
			write_str("#<output stream ");
			write_object(x->sm.sm_object1, level);
			write_ch('>');
			break;

		case smm_io:
			write_str("#<io stream ");
			write_object(x->sm.sm_object1, level);
			write_ch('>');
			break;

		case smm_socket:
			write_str("#<socket stream ");
			write_object(x->sm.sm_object0, level);
			write_ch('>');
			break;


		case smm_probe:
			write_str("#<probe stream ");
			write_object(x->sm.sm_object1, level);
			write_ch('>');
			break;

		case smm_synonym:
			write_str("#<synonym stream to ");
			write_object(x->sm.sm_object0, level);
			write_ch('>');
			break;

		case smm_broadcast:
			write_str("#<broadcast stream ");
			write_addr(x);
			write_str(">");
			break;

		case smm_concatenated:
			write_str("#<concatenated stream ");
			write_addr(x);
			write_str(">");
			break;

		case smm_two_way:
			write_str("#<two-way stream ");
			write_addr(x);
			write_str(">");
			break;

		case smm_echo:
			write_str("#<echo stream ");
			write_addr(x);
			write_str(">");
			break;

		case smm_string_input:
			write_str("#<string-input stream from \"");
			y = x->sm.sm_object0;
			j = y->st.st_fillp;
			for (i = 0;  i < j && i < 16;  i++)
				write_ch(y->st.st_self[i]);
			if (j > 16)
				write_str("...");
			write_str("\">");
			break;
#ifdef USER_DEFINED_STREAMS
	        case smm_user_defined:
			write_str("#<use-define stream");
			write_addr(x);
			write_str(">");
			break;
#endif

		case smm_string_output:
			write_str("#<string-output stream ");
			write_addr(x);
			write_str(">");
			break;

		default:
			error("illegal stream mode");
		}
		break;

	case t_random:
		write_str("#$");
		y = alloc_object(t_fixnum);
		fix(y) = x->rnd.rnd_value;
		vs_push(y);
		write_object(y, level);
		vs_pop;
		break;

	case t_structure:
		if (PRINTcircle) {
			for (vp = PRINTvs_top;  vp < PRINTvs_limit;  vp += 2)
			    if (x == *vp) {
				if (vp[1] != Cnil) {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('#');
				    return;
				} else {
				    write_ch('#');
				    write_decimal((vp-PRINTvs_top)/2);
				    write_ch('=');
				    vp[1] = Ct;
				    break;
				}
			    }
		}
		if (PRINTlevel >= 0 && level >= PRINTlevel) {
			write_ch('#');
			break;
		}
		if (type_of(x->str.str_def) != t_structure)
			FEwrong_type_argument(sLstructure, x->str.str_def);
		if (PRINTstructure ||
			S_DATA(x->str.str_def)->print_function == Cnil)
			  {	
			write_str("#S");
			x = structure_to_list(x);
			vs_push(x);
			write_object(x, level);
			vs_pop;
			break;
		}
		call_structure_print_function(x, level);
		break;

	case t_readtable:
		write_str("#<readtable ");
		write_addr(x);
		write_str(">");
		break;

	case t_pathname:
		if (1 || PRINTescape) {
			write_ch('#');
			write_ch('p');
			vs_push(namestring(x));
			write_object(vs_head, level);
			vs_pop;
		} else {
			write_str("#<pathname ");
			write_addr(x);
			write_str(">");
		}
		break;
	case t_sfun:
	case t_gfun:
	case t_vfun:
        case t_afun:	
	case t_cfun:
		write_str("#<compiled-function ");
		if (x->cf.cf_name != Cnil)
			write_object(x->cf.cf_name, level);
		else
			write_addr(x);
		write_str(">");
		break;

	case t_closure:
	case t_cclosure:
		write_str("#<compiled-closure ");
		if (x->cc.cc_name != Cnil)
			write_object(x->cc.cc_name, level);
		else
			write_addr(x);
		write_str(">");
		break;

	case t_spice:
		write_str("#<\100");
		for (i = 28;  i >= 0;  i -= 4) {
			j = ((int)x >> i) & 0xf;
			if (j < 10)
				write_ch('0' + j);
			else
				write_ch('A' + (j - 10));
		}
		write_ch('>');
		break;

	default:
		error("illegal type --- cannot print");
	}
}

char travel_push_type[32]; 

travel_push_object(x)
object x;
{
	enum type t;
	int i;
	object *vp;

	cs_check(x);

BEGIN:
	t = type_of(x);
	if(travel_push_type[(int)t]==0) return;
	if(t==t_symbol && x->s.s_hpack != Cnil) return;

	for (vp = PRINTvs_top;  vp < vs_top;  vp += 2)
		if (x == *vp) {
			if (vp[1] != Cnil)
				return;
			vp[1] = Ct;
			return;
		}
	vs_check_push(x);
	vs_check_push(Cnil);
	if (t == t_array && (enum aelttype)x->a.a_elttype == aet_object)
		for (i = 0;  i < x->a.a_dim;  i++)
			travel_push_object(x->a.a_self[i]);
	else if (t == t_vector && (enum aelttype)x->v.v_elttype == aet_object)
		for (i = 0;  i < x->v.v_fillp;  i++)
			travel_push_object(x->v.v_self[i]);
	else if (t == t_cons) {
		travel_push_object(x->c.c_car);
		x = x->c.c_cdr;
		goto BEGIN;
	} else if (t == t_structure) {
		for (i = 0;  i < S_DATA(x->str.str_def)->length;  i++)
		  travel_push_object(structure_ref(x,x->str.str_def,i));
	}
}



setupPRINTcircle(x,dogensyms)
     object x;
     int dogensyms;
{  object *vp,*vq;
   travel_push_type[(int)t_symbol]=dogensyms;
   travel_push_type[(int)t_array]=
       (travel_push_type[(int)t_vector]=PRINTarray);
   travel_push_object(x);
   for (vp = vq = PRINTvs_top;  vp < vs_top;  vp += 2)
     if (vp[1] != Cnil) {
       vq[0] = vp[0];
       vq[1] = Cnil;
       vq += 2;
     }
   PRINTvs_limit = vs_top = vq;
 }

setupPRINTdefault(x)
object x;
{
	object y;
	object *vp, *vq;

	PRINTvs_top = vs_top;
	PRINTstream = symbol_value(sLAstandard_outputA);
	if (type_of(PRINTstream) != t_stream) {
		sLAstandard_outputA->s.s_dbind
		= symbol_value(sLAterminal_ioA);
		vs_push(PRINTstream);
		FEwrong_type_argument(sLstream, PRINTstream);
	}
	PRINTescape = symbol_value(sLAprint_escapeA) != Cnil;
	PRINTpretty = symbol_value(sLAprint_prettyA) != Cnil;
	PRINTcircle = symbol_value(sLAprint_circleA) != Cnil;
	y = symbol_value(sLAprint_baseA);
	if (type_of(y) != t_fixnum || fix(y) < 2 || fix(y) > 36) {
		sLAprint_baseA->s.s_dbind = make_fixnum(10);
		vs_push(y);
		FEerror("~S is an illegal PRINT-BASE.", 1, y);
	} else
		PRINTbase = fix(y);
	PRINTradix = symbol_value(sLAprint_radixA) != Cnil;
	PRINTcase = symbol_value(sLAprint_caseA);
	if (PRINTcase != sKupcase && PRINTcase != sKdowncase &&
	    PRINTcase != sKcapitalize) {
		sLAprint_caseA->s.s_dbind = sKdowncase;
		vs_push(PRINTcase);
		FEerror("~S is an illegal PRINT-CASE.", 1, PRINTcase);
	}
	PRINTgensym = symbol_value(sLAprint_gensymA) != Cnil;
	y = symbol_value(sLAprint_levelA);
	if (y == Cnil)
		PRINTlevel = -1;
	else if (type_of(y) != t_fixnum || fix(y) < 0) {
		sLAprint_levelA->s.s_dbind = Cnil;
		vs_push(y);
		FEerror("~S is an illegal PRINT-LEVEL.", 1, y);
	} else
		PRINTlevel = fix(y);
	y = symbol_value(sLAprint_lengthA);
	if (y == Cnil)
		PRINTlength = -1;
	else if (type_of(y) != t_fixnum || fix(y) < 0) {
		sLAprint_lengthA->s.s_dbind = Cnil;
		vs_push(y);
		FEerror("~S is an illegal PRINT-LENGTH.", 1, y);
	} else
		PRINTlength = fix(y);
	PRINTarray = symbol_value(sLAprint_arrayA) != Cnil;
	if (PRINTcircle) setupPRINTcircle(x,1);
	if (PRINTpretty) {
		qh = qt = qc = 0;
		isp = iisp = 0;
		indent_stack[0] = 0;
		write_ch_fun = writec_queue;
	} else
		write_ch_fun = writec_PRINTstream;
	PRINTpackage = symbol_value(sSAprint_packageA) != Cnil;
	PRINTstructure = symbol_value(sSAprint_structureA) != Cnil;
}

cleanupPRINT()
{
	vs_top = PRINTvs_top;
	if (PRINTpretty)
		flush_queue(TRUE);
}

write_object_by_default(x)
object x;
{
	SETUP_PRINT_DEFAULT(x);
	write_object(x, 0);
	flush_stream(PRINTstream);
	CLEANUP_PRINT_DEFAULT;
}

terpri_by_default()
{
	PRINTstream = symbol_value(sLAstandard_outputA);
	if (type_of(PRINTstream) != t_stream)
		FEwrong_type_argument(sLstream, PRINTstream);
        WRITEC_NEWLINE(PRINTstream);
}

bool
potential_number_p(strng, base)
object strng;
int base;
{
	int i, l, c, dc;
	char *s;

	l = strng->st.st_fillp;
	if (l == 0)
		return(FALSE);
	s = strng->st.st_self;
	dc = 0;
	c = s[0];
	if (digitp(c, base) >= 0)
		dc++;
	else if (c != '+' && c != '-' && c != '^' && c != '_')
		return(FALSE);
	if (s[l-1] == '+' || s[l-1] == '-')
		return(FALSE);
	for (i = 1;  i < l;  i++) {
		c = s[i];
		if (digitp(c, base) >= 0) {
			dc++;
			continue;
		}
		if (c != '+' && c != '-' && c != '/' && c != '.' &&
		    c != '^' && c != '_' &&
		    c != 'e' && c != 'E' &&
		    c != 's' && c != 'S' && c != 'l' && c != 'L')
			return(FALSE);
	}
	if (dc == 0)
		return(FALSE);
	return(TRUE);
}
@(defun write (x
	       &key ((:stream strm) Cnil)
		    (escape `symbol_value(sLAprint_escapeA)`)
		    (radix `symbol_value(sLAprint_radixA)`)
		    (base `symbol_value(sLAprint_baseA)`)
		    (circle `symbol_value(sLAprint_circleA)`)
		    (pretty `symbol_value(sLAprint_prettyA)`)
		    (level `symbol_value(sLAprint_levelA)`)
		    (length `symbol_value(sLAprint_lengthA)`)
		    ((:case cas) `symbol_value(sLAprint_caseA)`)
		    (gensym `symbol_value(sLAprint_gensymA)`)
		    (array `symbol_value(sLAprint_arrayA)`))
	object *vp, *vq;
        struct printStruct printStructBuf; 
        struct printStruct *old_printStructBufp = printStructBufp;  
@

	printStructBufp = &printStructBuf; 
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	if (type_of(strm) != t_stream)
		FEerror("~S is not a stream.", 1, strm);
	PRINTvs_top = vs_top;
	PRINTstream = strm;
	PRINTescape = escape != Cnil;
	PRINTpretty = pretty != Cnil;
	PRINTcircle = circle != Cnil;
	if (type_of(base)!=t_fixnum || fix((base))<2 || fix((base))>36)
		FEerror("~S is an illegal PRINT-BASE.", 1, base);
	else
		PRINTbase = fix((base));
	PRINTradix = radix != Cnil;
	PRINTcase = cas;
	if (PRINTcase != sKupcase && PRINTcase != sKdowncase &&
	    PRINTcase != sKcapitalize)
		FEerror("~S is an illegal PRINT-CASE.", 1, cas);
	PRINTgensym = gensym != Cnil;
	if (level == Cnil)
		PRINTlevel = -1;
	else if (type_of(level) != t_fixnum || fix((level)) < 0)
		FEerror("~S is an illegal PRINT-LEVEL.", 1, level);
	else
		PRINTlevel = fix((level));
	if (length == Cnil)
		PRINTlength = -1;
	else if (type_of(length) != t_fixnum || fix((length)) < 0)
		FEerror("~S is an illegal PRINT-LENGTH.", 1, length);
	else
		PRINTlength = fix((length));
	PRINTarray = array != Cnil;
	if (PRINTcircle) setupPRINTcircle(x,1);
	if (PRINTpretty) {
		qh = qt = qc = 0;
		isp = iisp = 0;
		indent_stack[0] = 0;
		write_ch_fun = writec_queue;
	} else
		write_ch_fun = writec_PRINTstream;
	PRINTpackage = symbol_value(sSAprint_packageA) != Cnil;
	PRINTstructure = symbol_value(sSAprint_structureA) != Cnil;
	write_object(x, 0);
	CLEANUP_PRINT_DEFAULT;
	flush_stream(PRINTstream);
	@(return x)
@)

@(defun prin1 (obj &optional strm)
@
	prin1(obj, strm);
	@(return obj)
@)

@(defun print (obj &optional strm)
@
	print(obj, strm);
	@(return obj)
@)

@(defun pprint (obj &optional strm)
@
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_stream(&strm);
        WRITEC_NEWLINE(strm);
	{SETUP_PRINT_DEFAULT(obj);
	PRINTstream = strm;
	PRINTescape = TRUE;
	PRINTpretty = TRUE;
	qh = qt = qc = 0;
	isp = iisp = 0;
	indent_stack[0] = 0;
	write_ch_fun = writec_queue;
	write_object(obj, 0);
	CLEANUP_PRINT_DEFAULT;
	flush_stream(strm);}
	@(return)
@)

@(defun princ (obj &optional strm)
@
	princ(obj, strm);
	@(return obj)
@)

@(defun write_char (c &optional strm)
@
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_character(&c);
	check_type_stream(&strm);
	writec_stream(char_code(c), strm);
/*
	flush_stream(strm);
*/
	@(return c)
@)

@(defun write_string (strng &o strm &k start end)
	int s, e, i;
@
	get_string_start_end(strng, start, end, &s, &e);
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_string(&strng);
	check_type_stream(&strm);
	for (i = s;  i < e;  i++)
		writec_stream(strng->st.st_self[i], strm);
	flush_stream(strm);
	@(return strng)
@)

@(defun write_line (strng &o strm &k start end)
	int s, e, i;
@
	get_string_start_end(strng, start, end, &s, &e);
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_string(&strng);
	check_type_stream(&strm);
	for (i = s;  i < e;  i++)
		writec_stream(strng->st.st_self[i], strm);
	WRITEC_NEWLINE(strm);
	flush_stream(strm);
	@(return strng)
@)

@(defun terpri (&optional strm)
@
	terpri(strm);
	@(return Cnil)
@)

@(defun fresh_line (&optional strm)
@
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
        /* we need to get the real output stream, if possible */
        {object tmp=coerce_stream(strm,1);
           if(tmp != Cnil) strm = tmp ;
         else 
          check_type_stream(&strm);
         }
	if (file_column(strm) == 0)
		@(return Cnil)
        WRITEC_NEWLINE(strm);
	flush_stream(strm);
	@(return Ct)
@)

@(defun finish_output (&o strm)
@
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_stream(&strm);
	flush_stream(strm);
	@(return Cnil)
@)

@(defun force_output (&o strm)
@
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_stream(&strm);
	flush_stream(strm);
	@(return Cnil)
@)

@(defun clear_output (&o strm)
@
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_stream(&strm);
	@(return Cnil)
@)

@(defun write_byte (integer binary_output_stream)
@
	if (type_of(integer) != t_fixnum)
		FEerror("~S is not a byte.", 1, integer);
	check_type_stream(&binary_output_stream);
	writec_stream(fix(integer), binary_output_stream);
	@(return integer)
@)

DEF_ORDINARY("UPCASE",sKupcase,KEYWORD,"");
DEF_ORDINARY("DOWNCASE",sKdowncase,KEYWORD,"");
DEF_ORDINARY("CAPITALIZE",sKcapitalize,KEYWORD,"");
DEF_ORDINARY("STREAM",sKstream,KEYWORD,"");
DEF_ORDINARY("ESCAPE",sKescape,KEYWORD,"");
DEF_ORDINARY("PRETTY",sKpretty,KEYWORD,"");
DEF_ORDINARY("CIRCLE",sKcircle,KEYWORD,"");
DEF_ORDINARY("BASE",sKbase,KEYWORD,"");
DEF_ORDINARY("RADIX",sKradix,KEYWORD,"");
DEF_ORDINARY("CASE",sKcase,KEYWORD,"");
DEF_ORDINARY("GENSYM",sKgensym,KEYWORD,"");
DEF_ORDINARY("LEVEL",sKlevel,KEYWORD,"");
DEF_ORDINARY("LENGTH",sKlength,KEYWORD,"");
DEF_ORDINARY("ARRAY",sKarray,KEYWORD,"");
DEFVAR("*PRINT-ESCAPE*",sLAprint_escapeA,LISP,Ct,"");
DEFVAR("*PRINT-PRETTY*",sLAprint_prettyA,LISP,Ct,"");
DEFVAR("*PRINT-CIRCLE*",sLAprint_circleA,LISP,Cnil,"");
DEFVAR("*PRINT-BASE*",sLAprint_baseA,LISP,make_fixnum(10),"");
DEFVAR("*PRINT-RADIX*",sLAprint_radixA,LISP,Cnil,"");
DEFVAR("*PRINT-CASE*",sLAprint_caseA,LISP,sKupcase,"");
DEFVAR("*PRINT-GENSYM*",sLAprint_gensymA,LISP,Ct,"");
DEFVAR("*PRINT-LEVEL*",sLAprint_levelA,LISP,Cnil,"");
DEFVAR("*PRINT-LENGTH*",sLAprint_lengthA,LISP,Cnil,"");
DEFVAR("*PRINT-ARRAY*",sLAprint_arrayA,LISP,Ct,"");
DEFVAR("*PRINT-PACKAGE*",sSAprint_packageA,SI,Cnil,"");
DEFVAR("*PRINT-STRUCTURE*",sSAprint_structureA,SI,Cnil,"");
DEF_ORDINARY("PRETTY-PRINT-FORMAT",sSpretty_print_format,SI,"");

init_print()
{

        travel_push_type[(int)t_array]=1;
	travel_push_type[(int)t_vector]=1;
	travel_push_type[(int)t_structure]=1;
	travel_push_type[(int) t_cons]=1;
	if(sizeof(travel_push_type) < (int) t_other)
	  error("travel_push_size to small see print.d");

	PRINTstream = Cnil;
	enter_mark_origin(&PRINTstream);
	PRINTescape = TRUE;
	PRINTpretty = FALSE;
	PRINTcircle = FALSE;
	PRINTbase = 10;
	PRINTradix = FALSE;
	PRINTcase = sKupcase;
	enter_mark_origin(&PRINTcase);
	PRINTgensym = TRUE;
	PRINTlevel = -1;
	PRINTlength = -1;
	PRINTarray = FALSE;

	write_ch_fun = writec_PRINTstream;
}

object
princ(obj, strm)
object obj, strm;
{
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	if (type_of(strm) != t_stream)
		FEerror("~S is not a stream.", 1, strm);
	if (obj == OBJNULL)
		goto SIMPLE_CASE;
	switch (type_of(obj)) {
	case t_symbol:
		PRINTcase = symbol_value(sLAprint_caseA);
		PRINTpackage = symbol_value(sSAprint_packageA) != Cnil;

	SIMPLE_CASE:
	case t_string:
	case t_character:
		PRINTstream = strm;
		PRINTescape = FALSE;
		write_ch_fun = writec_PRINTstream;
		write_object(obj, 0);
		break;

	default:
		{SETUP_PRINT_DEFAULT(obj);
		PRINTstream = strm;
		PRINTescape = FALSE;
		write_object(obj, 0);
		CLEANUP_PRINT_DEFAULT;}
		break;
	}
	return(obj);
}

object
prin1(obj, strm)
object obj, strm;
{
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	if (type_of(strm) != t_stream)
		FEerror("~S is not a stream.", 1, strm);
	if (obj == OBJNULL)
		goto SIMPLE_CASE;
	switch (type_of(obj)) {
	SIMPLE_CASE:
	case t_string:
	case t_character:
		PRINTstream = strm;
		PRINTescape = TRUE;
		write_ch_fun = writec_PRINTstream;
		write_object(obj, 0);
		break;

	default:
		{SETUP_PRINT_DEFAULT(obj);
		PRINTstream = strm;
		PRINTescape = TRUE;
		write_object(obj, 0);
		CLEANUP_PRINT_DEFAULT;}
		break;
	}
	flush_stream(strm);
	return(obj);
}

object
print(obj, strm)
object obj, strm;
{
	terpri(strm);
	prin1(obj,strm);
	princ(code_char(' '),strm);
	return(obj);
}

object
terpri(strm)
object strm;
{
	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	if (type_of(strm) != t_stream)
		FEerror("~S is not a stream.", 1, strm);
        WRITEC_NEWLINE(strm);
	flush_stream(strm);
	return(Cnil);
}

write_string(strng, strm)
object strng, strm;
{
	int i;

	if (strm == Cnil)
		strm = symbol_value(sLAstandard_outputA);
	else if (strm == Ct)
		strm = symbol_value(sLAterminal_ioA);
	check_type_string(&strng);
	check_type_stream(&strm);
	for (i = 0;  i < strng->st.st_fillp;  i++)
		writec_stream(strng->st.st_self[i], strm);
	flush_stream(strm);
}

/*
	THE ULTRA-SPECIAL-DINNER-SERVICE OPTIMIZATION
*/
princ_str(s, sym)
char *s;
object sym;
{
	sym = symbol_value(sym);
	if (sym == Cnil)
		sym = symbol_value(sLAstandard_outputA);
	else if (sym == Ct)
		sym = symbol_value(sLAterminal_ioA);
	check_type_stream(&sym);
	writestr_stream(s, sym);
}

princ_char(c, sym)
int c;
object sym;
{
	sym = symbol_value(sym);
	if (sym == Cnil)
 		sym = symbol_value(sLAstandard_outputA);
	else if (sym == Ct)
		sym = symbol_value(sLAterminal_ioA);
	check_type_stream(&sym);
	if (c == '\n')
           {WRITEC_NEWLINE(sym);
	    flush_stream(sym);}
	else
	writec_stream(c, sym);

}


pp(x)
object x;
{
princ(x,Cnil);
flush_stream(symbol_value(sLAstandard_outputA));
}

set_line_length(n)
int n;
{
  return line_length = n;
}

DEFVAR("*PRINT-NANS*",sSAprint_nansA,SI,Cnil,"");

init_print_function()
{
	make_function("WRITE", Lwrite);
	make_function("PRIN1", Lprin1);
	make_function("PRINT", Lprint);
	make_function("PPRINT", Lpprint);
	make_function("PRINC", Lprinc);

	make_function("WRITE-CHAR", Lwrite_char);
	make_function("WRITE-STRING", Lwrite_string);
	make_function("WRITE-LINE", Lwrite_line);
	make_function("TERPRI", Lterpri);
	make_function("FRESH-LINE", Lfresh_line);
	make_function("FINISH-OUTPUT", Lfinish_output);
	make_function("FORCE-OUTPUT", Lforce_output);
	make_function("CLEAR-OUTPUT", Lclear_output);
	make_function("WRITE-BYTE", Lwrite_byte);
        make_si_sfun("SET-LINE-LENGTH",set_line_length,ARGTYPE1(f_fixnum)
		| RESTYPE(f_fixnum));
}





