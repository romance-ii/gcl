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

	frame.h

	frame stack and non-local jump
*/


/*  IHS	Invocation History Stack  */

typedef struct invocation_history {
  object ihs_function;
  object *ihs_base;
} *ihs_ptr;

EXTER ihs_ptr ihs_org,ihs_limit,ihs_top;

#define	ihs_check if (ihs_top >= ihs_limit) ihs_overflow()

#define ihs_push(function)  do {\
        if (++ihs_top>=ihs_limit) ihs_overflow();\
	ihs_top->ihs_function = (function);  \
	ihs_top->ihs_base = vs_base;} while (0)
#define ihs_push_base(function,base)  do {\
        if (++ihs_top>=ihs_limit) ihs_overflow();\
	ihs_top->ihs_function = (function);  \
	ihs_top->ihs_base = base;} while (0)

#define ihs_pop() ihs_top--


#define make_nil_block()  \
{  \
	object x;  \
  \
	lex_copy();  \
	x = alloc_frame_id();  \
	vs_push(x);  \
	lex_block_bind(Cnil, x);  \
	vs_popp;  \
	frs_push(FRS_CATCH, x);  \
}


/*  Frame Stack  */

enum fr_class {
  FRS_CATCH,			/* for catch,block,tabbody */
  FRS_CATCHALL,                 /* for catchall */
  FRS_PROTECT                	/* for protect-all */
};

EXTER int in_signal_handler;
typedef struct frame {
	jmp_buf		frs_jmpbuf;
	object		*frs_lex;
	bds_ptr		frs_bds_top;
	char 	        frs_class;
	char            frs_in_signal_handler;
	object		frs_val;
	ihs_ptr		frs_ihs;
} *frame_ptr;

#define	alloc_frame_id()	alloc_object(t_spice)

/*
frs_class |            frs_value                 |  frs_prev
----------+--------------------------------------+--------------
CATCH     | frame-id, i.e.                       |
	  |    throw-tag,                        |
	  |    block-id (uninterned symbol), or  | value of ihs_top
	  |    tagbody-id (uninterned symbol)    | when the frame
----------+--------------------------------------| was pushed
CATCHALL  |               NIL                    |
----------+--------------------------------------|
PROTECT   |               NIL                    |
----------------------------------------------------------------
*/


EXTER frame_ptr frs_org,frs_start,frs_limit,frs_top;

#define frs_push(class, val)  do {\
        if (++frs_top >= frs_limit)  frs_overflow();  \
	frs_top->frs_lex = lex_env;\
	frs_top->frs_bds_top = bds_top;  \
	frs_top->frs_class = (class);  \
	frs_top->frs_in_signal_handler = in_signal_handler;  \
	frs_top->frs_val = (val);  \
	frs_top->frs_ihs = ihs_top;  \
        setjmp(frs_top->frs_jmpbuf); \
	} while (0)

#define frs_pop() frs_top--


/*  global variables used during non-local jump  */

EXTER bool nlj_active;		/* true during non-local jump */
EXTER frame_ptr nlj_fr;		/* frame to return  */
EXTER object nlj_tag;		/* throw-tag, block-id, or */
				/* (tagbody-id . label).   */


