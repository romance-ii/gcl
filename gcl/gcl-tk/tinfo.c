

/* NOTE: If you don't have the system call mprotect DON'T
   define this.
   All Linux ELF systems should have mprotect. */
#ifdef __ELF__
#define SGC
#endif

/* _setjmp and _longjmp exist on bsd and are more efficient
   and handle the C stack which is all we need. [I think!]
 */


#define EXTER extern
/* h/gclincl.h.  Generated automatically by configure.  */


/* define where the heap could begin.   Normally should
be the smallest value returned by sbrk().   Underestimating
by 10-20 megabytes is not a problem. */

#define DBEGIN 0x8000000 /* where data begins */


/* the size of the page tables for gcl.  Each page is PAGESIZE which
is usually 4K or 8K bytes.  From 1 to 3 bytes per page are
preallocated in a table at compile time.  this must be a power of 2 if
SGC is enabled.  */

#define MAXPAGE 32*1024


/* check to see if getcwd exists
*/
#define HAVE_GETCWD 1


/* if we dont have USEGETCWD, we will use GETWD unless following defined
*/
#define HAVE_GETWD 1


/* no gettimeofday function */

/* #undef NO_GETTOD */

/* define if have <asm/signal.h> */
#define HAVE_ASM_SIGNAL_H 1

/* define if have <asm/sigcontext.h> */
#define HAVE_ASM_SIGCONTEXT_H 1

/* define if have struct sigcontext in one of above */
/* #undef HAVE_SIGCONTEXT */


/* define if have <sys/ioctl.h> */
#define HAVE_SYS_IOCTL_H 1

/* define if we can use the file nsocket.c   */
#define HAVE_NSOCKET 1  

#ifndef HAVE_ALLOCA
/* define this if you have alloca */
#define HAVE_ALLOCA 1 
#endif


/* define if need alloca.h */
/* #undef NEED_ALLOCA_H */

#ifdef NEED_ALLOCA_H
#include <alloca.h>
#endif


/* define LISTEN_USE_FCNTL  if we can check for input using fcntl */
#define LISTEN_USE_FCNTL 1

/* if signal.h alone contains the stuff necessary for sgc */
#define SIGNAL_H_HAS_SIGCONTEXT 1


/* define if the profil system call is not defined in libc */
#define NO_PROFILE 1 


/* define if the _cleanup() function exists and should be called
   before saving */
/* #define USE_CLEANUP  */


/* define if BIG_ENDIAN or LITTLE_ENDIAN is defined by including
   the standard includes */
/* #define ENDIAN_ALREADY_DEFINED */

/* define if SV_ONSTACK is defined in signal.h */
#define HAVE_SV_ONSTACK 1 


/*
   define to be a typical stack address.   We use this to decide
   whether we can use a cheap test for NULL_OR_ON_C_STACK, or whether
   it has to be more complex..

*/

#define CSTACK_ADDRESS -1073743836 

/* define if SIGSYS is defined in signal.h */

#define HAVE_SIGSYS 1

/* define if SIGEMT is defined in signal.h */

/* #undef HAVE_SIGEMT */



#include <varargs.h>
#include <setjmp.h>
#include <stdio.h>

#define	endp(obje)	endp1(obje)
#define STSET(type,x,i,val)  do{SGC_TOUCH(x);STREF(type,x,i) = (val);} while(0)


#ifndef NEW_LISP
#define t_doublefloat t_longfloat
#endif

enum type {
  t_cons,
  t_start = 0,
  t_fixnum,
  t_bignum,
  t_ratio,
  t_shortfloat,
  t_doublefloat,
  t_complex,
  t_character,
  t_symbol,
  t_package,
  t_hashtable,
  t_array,
  t_vector,
  t_string,
  t_bitvector,
  t_structure,
  t_stream,
  t_random,
  t_readtable,
  t_pathname,
  t_cfun,
  t_cclosure,
  t_sfun,
  t_gfun,
  t_vfun,
  t_afun,
  t_closure,
  t_cfdata,
  t_spice,
  t_end,
  t_contiguous,
  t_relocatable,
  t_other
};


enum signals_allowed_values {
  sig_none,
  sig_normal,
  sig_try_to_delay,
  sig_safe,
  sig_at_read,
  sig_use_signals_allowed_value

};

  
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
	object.h
*/

/*
	Some system constants.
*/

#define	TRUE		1	/*  boolean true value  */
#define	FALSE		0	/*  boolean false value  */

#define FIRSTWORD unsigned char  t,flag; char s,m

#define	NBPP		4	/*  number of bytes per pointer  */

#ifndef PAGEWIDTH
#define	PAGEWIDTH	11	/*  page width  */
#endif
				/*  log2(PAGESIZE)  */
#define	PAGESIZE	(1 << PAGEWIDTH)	/*  page size in bytes  */


#define	CHCODELIM	256	/*  character code limit  */
				/*  ASCII character set  */
#define	CHFONTLIM	1	/*  character font limit  */
#define	CHBITSLIM	1	/*  character bits limit  */
#define	CHCODEFLEN	8	/*  character code field length  */
#define	CHFONTFLEN	0	/*  character font field length  */
#define	CHBITSFLEN      0	/*  character bits field length  */

#define	PHTABSIZE	512	/*  number of entries  */
				/*  in the package hash table  */

#define	ARANKLIM	64	/*  array rank limit  */

#define	RTABSIZE	CHCODELIM
				/*  read table size  */

#define	CBMINSIZE	64	/*  contiguous block minimal size  */

#ifndef CHAR_SIZE
#define CHAR_SIZE        8     /* number of bits in a char */
#endif

typedef int bool;
typedef int fixnum;
typedef float shortfloat;
typedef double longfloat;
typedef unsigned short fatchar;

#ifndef plong
#define plong int
#endif


#define SIGNED_CHAR(x) (((char ) -1) < (char )0 ? (char) x \
		  : (x >= (1<<(CHAR_SIZE-1)) ? \
		     x - (((int)(1<<(CHAR_SIZE-1))) << 1) \
		     : (char ) x))


/*
	Definition of the type of LISP objects.
*/
typedef union lispunion *object;

typedef union int_object iobject;
union int_object {object o; int i;};

/*
	OBJect NULL value.
	It should not coincide with any legal object value.
*/
#define	OBJNULL		((object)NULL)

/*
	Definition of each implementation type.
*/

struct fixnum_struct {
		FIRSTWORD;
	fixnum	FIXVAL;		/*  fixnum value  */
};
#define	Mfix(obje)	(obje)->FIX.FIXVAL
#define fix(x) Mfix(x)

#define	SMALL_FIXNUM_LIMIT	1024

EXTER
struct fixnum_struct small_fixnum_table[2*SMALL_FIXNUM_LIMIT];

#define	small_fixnum(i)  \
	(object)(small_fixnum_table+SMALL_FIXNUM_LIMIT+(i))

struct shortfloat_struct {
			FIRSTWORD;
	shortfloat	SFVAL;	/*  shortfloat value  */
};
#define	Msf(obje)	(obje)->SF.SFVAL
#define sf(x) Msf(x)

struct longfloat_struct {
			FIRSTWORD;
	longfloat	LFVAL;	/*  longfloat value  */
};
#define	Mlf(obje)	(obje)->LF.LFVAL
#define lf(x) Mlf(x)

struct bignum {
			FIRSTWORD;
	plong             *big_self;	/*  bignum body  */
	int		big_length;	/*  bignum length  */
};

struct ratio {
		FIRSTWORD;
	object	rat_den;	/*  denominator  */
				/*  must be an integer  */
	object	rat_num;	/*  numerator  */
				/*  must be an integer  */
};

struct complex {
		FIRSTWORD;
	object	cmp_real;	/*  real part  */
				/*  must be a number  */
	object	cmp_imag;	/*  imaginary part  */
				/*  must be a number  */
};

struct character {
			FIRSTWORD;
	unsigned short	ch_code;	/*  code  */
	unsigned char	ch_font;	/*  font  */
	unsigned char	ch_bits;	/*  bits  */
};



EXTER 
struct character character_table1[256+128];
#define character_table (character_table1+128)
#define	code_char(c)		(object)(character_table+(c))
#define	char_code(obje)		(obje)->ch.ch_code
#define	char_font(obje)		(obje)->ch.ch_font
#define	char_bits(obje)		(obje)->ch.ch_bits

enum stype {			/*  symbol type  */
	stp_ordinary,		/*  ordinary  */
	stp_constant,		/*  constant  */
        stp_special		/*  special  */
};

#define	Cnil			((object)&Cnil_body)
#define	Ct			((object)&Ct_body)
#define sLnil Cnil
#define sLt Ct

#define	NOT_SPECIAL		((int (*)())Cnil)
#define	s_fillp		st_fillp
#define	s_self		st_self

struct symbol {
		FIRSTWORD;
	object	s_dbind;	/*  dynamic binding  */
	int	(*s_sfdef)();	/*  special form definition  */
				/*  This field coincides with c_car  */
	char	*s_self;	/*  print name  */
				/*  These fields coincide with  */
				/*  st_fillp and st_self.  */
	int	s_fillp;	/*  print name length  */

	object	s_gfdef;        /*  global function definition  */
				/*  For a macro,  */
				/*  its expansion function  */
				/*  is to be stored.  */
	object	s_plist;	/*  property list  */
	object	s_hpack;	/*  home package  */
				/*  Cnil for uninterned symbols  */
	short	s_stype;	/*  symbol type  */
				/*  of enum stype  */
	short	s_mflag;	/*  macro flag  */
};
EXTER 
struct symbol Cnil_body, Ct_body;

struct package {
		FIRSTWORD;
	object	p_name;		/*  package name  */
				/*  a string  */
	object	p_nicknames;	/*  nicknames  */
				/*  list of strings  */
	object	p_shadowings;	/*  shadowing symbol list  */
	object	p_uselist;	/*  use-list of packages  */
	object	p_usedbylist;	/*  used-by-list of packages  */
	object	*p_internal;	/*  hashtable for internal symbols  */
	object	*p_external;	/*  hashtable for external symbols  */
	int p_internal_size;    /* size of internal hash table*/
	int p_external_size;     /* size of external hash table */
	int p_internal_fp;       /* [rough] number of symbols */
        int p_external_fp;    /* [rough]  number of symbols */
	struct package
		*p_link;	/*  package link  */
};

/*
	The values returned by intern and find_symbol.
	File_symbol may return 0.
*/
#define	INTERNAL	1
#define	EXTERNAL	2
#define	INHERITED	3

/*
	All the packages are linked through p_link.
*/
EXTER struct package *pack_pointer;	/*  package pointer  */

struct cons {
		FIRSTWORD;
	object	c_cdr;		/*  cdr  */
	object	c_car;		/*  car  */
};

enum httest {			/*  hash table key test function  */
	htt_eq,			/*  eq  */
	htt_eql,		/*  eql  */
	htt_equal		/*  equal  */
};

struct htent {			/*  hash table entry  */
	object	hte_key;	/*  key  */
	object	hte_value;	/*  value  */
};

struct hashtable {		/*  hash table header  */
		FIRSTWORD;
	struct htent
		*ht_self;	/*  pointer to the hash table  */
	object	ht_rhsize;	/*  rehash size  */
	object	ht_rhthresh;	/*  rehash threshold  */
	int	ht_nent;	/*  number of entries  */
	int	ht_size;	/*  hash table size  */
	short	ht_test;	/*  key test function  */
				/*  of enum httest  */
};

enum aelttype {			/*  array element type  */
	aet_object,		/*  t  */
	aet_ch,			/*  string-char  */
	aet_bit,		/*  bit  */
	aet_fix,		/*  fixnum  */
	aet_sf,			/*  short-float  */
	aet_lf,			/*  plong-float  */
	aet_char,               /* signed char */
        aet_uchar,               /* unsigned char */
	aet_short,              /* signed short */
	aet_ushort,             /*  unsigned short   */
	aet_last
	  };

struct array {			/*  array header  */
		FIRSTWORD;
	object	a_displaced;	/*  displaced  */
	short	a_rank;		/*  array rank  */
	short	a_elttype;	/*  element type  */
	object	*a_self;	/*  pointer to the array  */
	short	a_adjustable;	/*  adjustable flag  */
	short	a_offset;	/*  bitvector offset  */
	int	a_dim;		/*  dimension  */
	int	*a_dims;	/*  table of dimensions  */

};



struct vector {			/*  vector header  */
		FIRSTWORD;
	object	v_displaced;	/*  displaced  */
	short	v_hasfillp;	/*  has-fill-pointer flag  */
	short	v_elttype;	/*  element type  */
		
	object	*v_self;	/*  pointer to the vector  */
	int	v_fillp;	/*  fill pointer  */
				/*  For simple vectors,  */
				/*  v_fillp is equal to v_dim.  */
	int	v_dim;		/*  dimension  */
	short	v_adjustable;	/*  adjustable flag  */
	short	v_offset;	/*  not used  */
};

struct string {			/*  string header  */
		FIRSTWORD;
	object	st_displaced;	/*  displaced  */
	short	st_hasfillp;	/*  has-fill-pointer flag  */
	short	st_adjustable;	/*  adjustable flag  */
	char	*st_self;	/*  pointer to the string  */
	int	st_fillp;	/*  fill pointer  */
				/*  For simple strings,  */
				/*  st_fillp is equal to st_dim.  */
	int	st_dim;		/*  dimension  */
				/*  string length  */

};

struct ustring {
		FIRSTWORD;
	object	ust_displaced;
	short	ust_hasfillp;
	short	ust_adjustable;		
	unsigned char *ust_self;
	int	ust_fillp;

	int	ust_dim;


};

#define USHORT(x,i) (((unsigned short *)(x)->ust.ust_self)[i])
#define SHORT(x,i) ((( short *)(x)->ust.ust_self)[i])

#define BV_OFFSET(x) ((type_of(x)==t_bitvector ? x->bv.bv_offset : \
		       type_of(x)== t_array ? x->a.a_offset : abort(),0))

#define SET_BV_OFFSET(x,val) ((type_of(x)==t_bitvector ? x->bv.bv_offset = val : \
		       type_of(x)== t_array ? x->a.a_offset=val : abort(),0))


		       

struct bitvector {		/*  bitvector header  */
		FIRSTWORD;
	object	bv_displaced;	/*  displaced  */
	short	bv_hasfillp;	/*  has-fill-pointer flag  */
	short	bv_elttype;	/*  not used  */
	char	*bv_self;	/*  pointer to the bitvector  */
	int	bv_fillp;	/*  fill pointer  */
				/*  For simple bitvectors,  */
				/*  st_fillp is equal to st_dim.  */
	int	bv_dim;		/*  dimension  */
				/*  number of bits  */
	short	bv_adjustable;	/*  adjustable flag  */
	short	bv_offset;	/*  bitvector offset  */
				/*  the position of the first bit  */
				/*  in the first byte  */
};

struct fixarray {		/*  fixnum array header  */
		FIRSTWORD;
	object	fixa_displaced;	/*  displaced  */
	short	fixa_rank;	/*  array rank  */
	short	fixa_elttype;	/*  element type  */
	fixnum	*fixa_self;	/*  pointer to the array  */
	short	fixa_adjustable;/*  adjustable flag  */
	short	fixa_offset;	/*  not used  */
	int	fixa_dim;	/*  dimension  */
	int	*fixa_dims;	/*  table of dimensions  */

};

struct sfarray {		/*  short-float array header  */
		FIRSTWORD;
	object	sfa_displaced;	/*  displaced  */
	short	sfa_rank;	/*  array rank  */
	short	sfa_elttype;	/*  element type  */
	shortfloat
		*sfa_self;	/*  pointer to the array  */
	short	sfa_adjustable;	/*  adjustable flag  */
	short	sfa_offset;	/*  not used  */
	int	sfa_dim;	/*  dimension  */

	int	*sfa_dims;	/*  table of dimensions  */



};

struct lfarray {		/*  plong-float array header  */
		FIRSTWORD;
	object	lfa_displaced;	/*  displaced  */
	short	lfa_rank;	/*  array rank  */
	short	lfa_elttype;	/*  element type  */
	longfloat
		*lfa_self;	/*  pointer to the array  */
	short	lfa_adjustable;	/*  adjustable flag  */
	short	lfa_offset;	/*  not used  */
	int	lfa_dim;		/*  dimension  */
	int	*lfa_dims;	/*  table of dimensions  */


};

struct structure {		/*  structure header  */
		FIRSTWORD;
	object	str_def;	/*  structure definition (a structure)  */
	object	*str_self;	/*  structure self  */
};

struct s_data {object name;
	       int length;
	       object raw;
	       object included;
	       object includes;
	       object staticp;
	       object print_function;
	       object slot_descriptions;
	       object slot_position;
	       int    size;
	       object has_holes;
	     };

#define S_DATA(x) ((struct s_data *)((x)->str.str_self))
#define SLOT_TYPE(def,i) (((S_DATA(def))->raw->ust.ust_self[i]))
#define SLOT_POS(def,i) USHORT(S_DATA(def)->slot_position,i)
#define STREF(type,x,i) (*((type *)(((char *)((x)->str.str_self))+(i))))



enum smmode {			/*  stream mode  */
	smm_input,		/*  input  */
	smm_output,		/*  output  */
	smm_io,			/*  input-output  */
	smm_probe,		/*  probe  */
	smm_synonym,		/*  synonym  */
	smm_broadcast,		/*  broadcast  */
	smm_concatenated,	/*  concatenated  */
	smm_two_way,		/*  two way  */
	smm_echo,		/*  echo  */
	smm_string_input,	/*  string input  */
	smm_string_output,	/*  string output  */
	smm_user_defined,        /*  for user defined */
	smm_socket		/*  Socket stream  */
};

/* for any stream that takes writec_char, directly (not two_way or echo)
   ie. 	 smm_output,smm_io, smm_string_output, smm_socket
 */
#define STREAM_FILE_COLUMN(str) ((str)->sm.sm_int1)

/* for smm_echo */
#define ECHO_STREAM_N_UNREAD(strm) ((strm)->sm.sm_int0)

/* file fd for socket */
#define SOCKET_STREAM_FD(strm) ((strm)->sm.sm_fd)
#define SOCKET_STREAM_BUFFER(strm) ((strm)->sm.sm_object1)

/*  for     smm_string_input  */
#define STRING_INPUT_STREAM_NEXT(strm) ((strm)->sm.sm_int0)
#define STRING_INPUT_STREAM_END(strm) ((strm)->sm.sm_int1)

/* for smm_two_way and smm_echo */
#define STREAM_OUTPUT_STREAM(strm) ((strm)->sm.sm_object1)
#define STREAM_INPUT_STREAM(strm) ((strm)->sm.sm_object0)

/* for smm_string_{input,output} */
#define STRING_STREAM_STRING(strm) ((strm)->sm.sm_object0)

struct stream {
		FIRSTWORD;
	FILE	*sm_fp;		/*  file pointer  */
	object	sm_object0;	/*  some object  */
	object	sm_object1;	/*  some object */
	int	sm_int0;	/*  some int  */
	int	sm_int1;	/*  column for input or output, stream */
	char  	*sm_buffer;     /*  ptr to BUFSIZE block of storage */
	char	sm_mode;	/*  stream mode  */
        unsigned char    sm_flags;         /* flags from gcl_sm_flags */
        short sm_fd;         /* stream fd */
     
};
/* flags */
#define GET_STREAM_FLAG(strm,name) ((strm)->sm.sm_flags & (1<<(name)))
#define SET_STREAM_FLAG(strm,name,val) (val ? \
                     	((strm)->sm.sm_flags |= (1<<(name))) : \
			((strm)->sm.sm_flags &= ~(1<<(name)))) 

#define GCL_MODE_BLOCKING 1
#define GCL_MODE_NON_BLOCKING 0
#define GCL_TCP_ASYNC 1
     
enum gcl_sm_flags {
  gcl_sm_blocking=1,
  gcl_sm_tcp_async,
  gcl_sm_input,
  gcl_sm_output,
  gcl_sm_had_error
  
  
};
  
#ifdef BSD
#ifdef SUN3
#define	BASEFF		(unsigned char *)0xffffffff
#else
#define	BASEFF		(char *)0xffffffff
#endif
#endif

#ifdef ATT
#define	BASEFF		(unsigned char *)0xffffffff
#endif

#ifdef E15
#define	BASEFF		(unsigned char *)0xffffffff
#endif

#ifdef MV


#endif

struct random {
			FIRSTWORD;
	unsigned	rnd_value;	/*  random state value  */
};

enum chattrib {			/*  character attribute  */
	cat_whitespace,		/*  whitespace  */
	cat_terminating,	/*  terminating macro  */
	cat_non_terminating,	/*  non-terminating macro  */
	cat_single_escape,	/*  single-escape  */
	cat_multiple_escape,	/*  multiple-escape  */
	cat_constituent		/*  constituent  */
};

struct rtent {				/*  read table entry  */
	enum chattrib	rte_chattrib;	/*  character attribute  */
	object		rte_macro;	/*  macro function  */
	object		*rte_dtab;	/*  pointer to the  */
					/*  dispatch table  */
					/*  NULL for  */
					/*  non-dispatching  */
					/*  macro character, or  */
					/*  non-macro character  */
};

struct readtable {			/*  read table  */
			FIRSTWORD;
	struct rtent	*rt_self;	/*  read table itself  */
};

struct pathname {
		FIRSTWORD;
	object	pn_host;	/*  host  */
	object	pn_device;	/*  device  */
	object	pn_directory;	/*  directory  */
	object	pn_name;	/*  name  */
	object	pn_type;	/*  type  */
	object	pn_version;	/*  version  */
};

struct cfun {			/*  compiled function header  */
		FIRSTWORD;
	object	cf_name;	/*  compiled function name  */
	int	(*cf_self)();	/*  entry address  */
	object	cf_data;	/*  data the function uses  */
				/*  for GBC  */
};

struct cclosure {		/*  compiled closure header  */
		FIRSTWORD;
	object	cc_name;	/*  compiled closure name  */
	int	(*cc_self)();	/*  entry address  */
	object	cc_env;		/*  environment  */
	object	cc_data;	/*  data the closure uses  */
				/*  for GBC  */
	int cc_envdim;
	object	*cc_turbo;	/*  turbo charger */
};

struct closure {
	FIRSTWORD; 
	object	cl_name;       /* name */
	object	(*cl_self)();  /* C start address of code */
	object	cl_data;       /* To object holding VV vector */
	int cl_argd;           /* description of args + number */
	int cl_envdim;         /* length of the environment vector */
	object *cl_env;        /* environment vector referenced by cl_self()*/
};

struct sfun {
		FIRSTWORD; 
	object	sfn_name;       /* name */
	object	(*sfn_self)();  /* C start address of code */
	object	sfn_data;       /* To object holding VV vector */
	int sfn_argd;           /* description of args + number */

	      };

struct vfun {
		FIRSTWORD; 
	object	vfn_name;       /* name */
	int	(*vfn_self)();  /* C start address of code */
	object	vfn_data;       /* To object holding VV data */
	unsigned short vfn_minargs; /* Min args and where varargs start */
	unsigned short vfn_maxargs;    /* Max number of args */
	      };
struct cfdata {
     FIRSTWORD;
     char *cfd_start;             /* beginning of contblock for fun */
     int cfd_size;              /* size of contblock */
     int cfd_fillp;             /* size of self */
     object *cfd_self;          /* body */
   };

struct spice {
		FIRSTWORD;
	int	spc_dummy;
};

/*
	dummy type
*/
struct dummy {
	FIRSTWORD;
};

/*
	Definition of lispunion.
*/
union lispunion {
	struct fixnum_struct
			FIX;	/*  fixnum  */
	struct bignum	big;	/*  bignum  */
	struct ratio	rat;	/*  ratio  */
	struct shortfloat_struct
			SF;	/*  short floating-point number  */
	struct longfloat_struct
			LF;	/*  plong floating-point number  */
	struct complex	cmp;	/*  complex number  */
	struct character
			ch;	/*  character  */
	struct symbol	s;	/*  symbol  */
	struct package	p;	/*  package  */
	struct cons	c;	/*  cons  */
	struct hashtable
			ht;	/*  hash table  */
	struct array	a;	/*  array  */
	struct vector	v;	/*  vector  */
	struct string	st;	/*  string  */
	struct ustring	ust;
	struct bitvector
			bv;	/*  bit-vector  */
	struct structure
			str;	/*  structure  */
	struct stream	sm;	/*  stream  */
	struct random	rnd;	/*  random-states  */
	struct readtable
			rt;	/*  read table  */
	struct pathname	pn;	/*  path name  */
	struct cfun	cf;	/*  compiled function  uses value stack] */
	struct cclosure	cc;	/*  compiled closure  uses value stack */
	struct closure	cl;	/*  compiled closure  uses c stack */
	struct sfun     sfn;    /*  simple function */
	struct vfun     vfn;    /*  function with variable number of args */
	struct cfdata   cfd;    /* compiled fun data */
	struct spice	spc;	/*  spice  */

	struct dummy	d;	/*  dummy  */

	struct fixarray	fixa;	/*  fixnum array  */
	struct sfarray	sfa;	/*  short-float array  */
	struct lfarray	lfa;	/*  plong-float array  */
};

#define address_int unsigned int

/*
	The struct of free lists.
*/
struct freelist {
	FIRSTWORD;
	address_int f_link;
};
#ifndef INT_TO_ADDRESS
#define INT_TO_ADDRESS(x) ((object )(long )x)
#endif

#define F_LINK(x) ((struct freelist *)(long) x)->f_link
#define FL_LINK F_LINK
#define SET_LINK(x,val) F_LINK(x) = (address_int) (val)
#define OBJ_LINK(x) ((object) INT_TO_ADDRESS(F_LINK(x)))

#define	FREE	(-1)		/*  free object  */

/*
	Type_of.
*/
#define	type_of(obje)	((enum type)(((object)(obje))->d.t))

/*
	Storage manager for each type.
*/
struct typemanager {
	enum type
		tm_type;	/*  type  */
	short	tm_size;	/*  element size in bytes  */
	short   tm_nppage;	/*  number per page  */
	object	tm_free;	/*  free list  */
				/*  Note that it is of type object.  */
	int	tm_nfree;	/*  number of free elements  */
	int	tm_nused;	/*  number of elements used  */
	int	tm_npage;	/*  number of pages  */
	int	tm_maxpage;	/*  maximum number of pages  */
	char	*tm_name;	/*  type name  */
	int	tm_gbccount;	/*  GBC count  */
	object  tm_alt_free;    /*  Alternate free list (swap with tm_free) */
	int     tm_alt_nfree;   /*  Alternate nfree (length of nfree) */
	short   tm_sgc;         /*  this type has at least this many
				    sgc pages */
	short   tm_sgc_minfree;   /* number free on a page to qualify for
				    being an sgc page */
	short   tm_sgc_max;     /* max on sgc pages */
	short   tm_min_grow;    /* min amount to grow when growing */
	short   tm_max_grow;    /* max amount to grow when growing */
	short   tm_growth_percent;  /* percent to increase maxpages */
	short   tm_percent_free;  /* percent which must be free after a gc for this type */

};


/*
	The table of type managers.
*/
EXTER struct typemanager tm_table[ 32  /* (int) t_relocatable */];

#define	tm_of(t)	(&(tm_table[(int)tm_table[(int)(t)].tm_type]))

/*
	Contiguous block header.
*/
struct contblock {		/*  contiguous block header  */
	int	cb_size;	/*  size in bytes  */
	struct contblock
		*cb_link;	/*  contiguous block link  */
};

/*
	The pointer to the contiguous blocks.
*/
EXTER struct contblock *cb_pointer;	/*  contblock pointer  */

/*
	Variables for memory management.
*/
EXTER int ncb;			/*  number of contblocks  */
/* int ncbpage;			  number of contblock pages  */
#define ncbpage tm_table[t_contiguous].tm_npage
#define maxcbpage   tm_table[t_contiguous].tm_maxpage
#define cbgbccount tm_table[t_relocatable].tm_gbccount  
  

/* int maxcbpage; maximum number of contblock pages  */
EXTER 
int holepage;			/*  hole pages  */
#define nrbpage tm_table[t_relocatable].tm_npage
#define rbgbccount tm_table[t_relocatable].tm_gbccount
/* int nrbpage;			  number of relblock pages  */
  

EXTER 
char *rb_start;			/*  relblock start  */
EXTER char *rb_end;			/*  relblock end  */
EXTER char *rb_limit;			/*  relblock limit  */
EXTER char *rb_pointer;		/*  relblock pointer  */
EXTER char *rb_start1;		/*  relblock start in copy space  */
EXTER char *rb_pointer1;		/*  relblock pointer in copy space  */

EXTER char *heap_end;			/*  heap end  */
EXTER char *core_end;			/*  core end  */
EXTER 
char *tmp_alloc;

/* make f allocate enough extra, so that we can round
   up, the address given to an even multiple.   Special
   case of size == 0 , in which case we just want an aligned
   number in the address range
   */

#define ALLOC_ALIGNED(f, size,align) \
  (align <= sizeof(plong) ? (char *)((f)(size)) : \
   (tmp_alloc = (char *)((f)(size+(size ?(align)-1 : 0)))+(align)-1 , \
   (char *)(align * (((unsigned int)tmp_alloc)/align))))
#define AR_ALLOC(f,n,type) (type *) \
  (ALLOC_ALIGNED(f,(n)*sizeof(type),sizeof(type)))


#ifndef HOLEPAGE
#define	HOLEPAGE	128
#endif


#define	INIT_HOLEPAGE	150
#define	INIT_NRBPAGE	50
#define	RB_GETA		512


#ifdef AV
#define	STATIC	register
#endif
#ifdef MV

#endif

#define	TIME_ZONE	(-9)
EXTER 
int FIXtemp;

/*  For IEEEFLOAT, the double may have exponent in the second word
(little endian) or first word.*/

#if defined(I386) || defined(LITTLE_END)
#define HIND 1  /* (int) of double where the exponent and most signif is */
#define LIND 0  /* low part of a double */
#else /* big endian */
#define HIND 0
#define LIND 1
#endif
#ifndef VOL
#define VOL
#endif


#define	isUpper(xxx)	(((xxx)&0200) == 0 && isupper(xxx))
#define	isLower(xxx)	(((xxx)&0200) == 0 && islower(xxx))
#define	isDigit(xxx)	(((xxx)&0200) == 0 && isdigit(xxx))
enum ftype {f_object,f_fixnum};
EXTER 
char *alloca_val;
/*          ...xx|xx|xxxx|xxxx|   
		     ret  Narg     */

/*    a9a8a7a6a5a4a3a4a3a2a1a0rrrrnnnnnnnn
         ai=argtype(i)         ret   nargs
 */
#define SFUN_NARGS(x) (x & 0xff) /* 8 bits */
#define RESTYPE(x) (x<<8)   /* 3 bits */
   /* set if the VFUN_NARGS = m ; has been set correctly */
#define VFUN_NARG_BIT (1 <<11) 
#define ARGTYPE(i,x) ((x) <<(12+(i*2)))
#define ARGTYPE1(x)  (1 | ARGTYPE(0,x))
#define ARGTYPE2(x,y) (2 | ARGTYPE(0,x)  | ARGTYPE(1,y))
#define ARGTYPE3(x,y,z) (3 | ARGTYPE(0,x) | ARGTYPE(1,y) | ARGTYPE(2,z))

object make_si_sfun();
EXTER object MVloc[10];

/* Set new to be an (object *) whose [i]'th elmt is the
   ith elmnt in a va_list
   if 
   ((vl[0] == va_arg(ap,object)) ||
    (vl[1] == va_arg(ap,object)) || .. vl[n-1] == va_arg(ap,object))
   you may set
   #define DONT_COPY_VA_LIST
   In recent versions of gcc, i think the builtin_alist stuff does not
   allow setting this.
 */
#ifdef DONT_COPY_VA_LIST
#define COERCE_VA_LIST(new,vl,n) new = (object *) (vl)
#else
#define COERCE_VA_LIST(new,vl,n) \
 object Xxvl[65]; \
 {int i; \
  new=Xxvl; \
  if (n >= 65) FEerror("Too plong vl"); \
  for (i=0 ; i < (n); i++) new[i]=va_arg(vl,object);}
#endif
#define make_si_vfun(s,f,min,max) \
  make_si_vfun1(s,f,min | (max << 8))

/* Number of args supplied to a variable arg t_vfun
 Used by the C function to set optionals */

struct call_data { object fun;
		     int argd;
		     int nvalues;
		   object    values[20];
		   double double_return;
		 };
EXTER struct call_data fcall;

#define  VFUN_NARGS fcall.argd
#define RETURN2(x,y) do{object _x = (void *) x; \
			  fcall.values[2]=y;fcall.nvalues=2; \
			  return (x) ;} while(0)
#define RETURN1(x) do{fcall.nvalues=1; return (x) ;} while(0)
#define RETURN0  do{fcall.nvalues=0; return Cnil ;} while(0)

#define RV(x) (*_p++ = x)

#define RETURNI(n,val1,listvals) RETURN(n,int,val1,listvals)
#define RETURNO(n,val1,listvals) RETURN(n,object,val1,listvals)

/* eg: RETURN(3,object,val1,(RV(val2),RV(val3))) */
#define RETURN(n,typ,val1,listvals) \
   do{typ _val1 = val1; object *_p=&fcall.values[1]; listvals; fcall.nvalues= n; return _val1;}while(0)
/* #define CALL(n,form) (VFUN_NARGS=n,form) */

	

/* we sometimes have to touch the header of arrays or structures
   to make sure the page is writable */
#ifdef SGC
#define SGC_TOUCH(x) if ((x)->d.m) system_error(); (x)->d.m=0
#else
#define SGC_TOUCH(x)
#endif

object funcall_cfun();
object clear_compiler_properties();
EXTER object sSlambda_block_expanded;

# ifdef __GNUC__ 
# define assert(ex)\
{if (!(ex)){(void)fprintf(stderr, \
		  "Assertion failed: file \"%s\", line %d\n", __FILE__, __LINE__);exit(1);}}
# else
# define assert(ex)
# endif

#ifndef FIX_PATH_STRING
#define FIX_PATH_STRING(file) file
#endif
	

#define CHECK_INTERRUPT   if (signals_pending) raise_pending_signals(sig_safe)

#define BEGIN_NO_INTERRUPT \
 plong old_signals_allowed = signals_allowed; \
  signals_allowed = 0

#define END_NO_INTERRUPT \
  signals_allowed = old_signals_allowed
/* could add:   if (signals_pending)
   raise_pending_signals(sig_use_signals_allowed_value) */


#define END_NO_INTERRUPT_SAFE \
  signals_allowed = old_signals_allowed; \
  if (signals_pending) \
    do{ if(signals_allowed ==0) /* should not get here*/abort(); \
	  raise_pending_signals(sig_safe)}while(0)

void raise_pending_signals();

EXTER unsigned plong signals_allowed, signals_pending  ;

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
	vs.h

	value stack
*/

EXTER object *vs_org;
EXTER object *vs_limit;	/*  value stack limit  */

EXTER object *vs_base;	/*  value stack base  */
EXTER object *vs_top;		/*  value stack top  */

#define	vs_push(obje)	(*vs_top++ = (obje))

#define	vs_pop		(*--vs_top)
#define	vs_head		vs_top[-1]

#define	vs_mark		object *old_vs_top = vs_top
#define	vs_reset	vs_top = old_vs_top

#define	vs_check	if (vs_top >= vs_limit)  \
				vs_overflow()

#define	vs_check_push(obje)  \
			(vs_top >= vs_limit ?  \
			 (object)vs_overflow() : (*vs_top++ = (obje)))

#define	check_arg(n)  \
			if (vs_top - vs_base != (n))  \
				check_arg_failed(n)

#define CHECK_ARG_RANGE(n,m) if (VFUN_NARGS < n || VFUN_NARGS >m) \
   check_arg_range(n,m)

#define	MMcheck_arg(n)  \
			if (vs_top - vs_base < (n))  \
				too_few_arguments();  \
			else if (vs_top - vs_base > (n))  \
				too_many_arguments()

#define vs_reserve(x)	if(vs_base+(x) >= vs_limit)  \
				vs_overflow();
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
	bds.h

	bind stack
*/

struct bds_bd {
	object	bds_sym;	/*  symbol  */
	object	bds_val;	/*  previous value of the symbol  */
};


typedef struct bds_bd *bds_ptr;

EXTER bds_ptr bds_org;

EXTER bds_ptr bds_limit;

EXTER bds_ptr bds_top;		/*  bind stack top  */

#ifdef KCLOVM

/* for multiprocessing */
EXTER struct bds_bd save_bind_stack[BDSSIZE + BDSGETA + BDSGETA];
EXTER bds_ptr bds_save_org;
EXTER bds_ptr bds_save_limit;
EXTER bds_ptr bds_save_top;

#endif

#define	bds_check  \
	if (bds_top >= bds_limit)  \
		bds_overflow()

/* do this so that an interrupt in the middle will leave the VALID
   part of the bds stack ie (<= bds_top) in a valid state, so
   that a throw out will be ok */
#define	bds_bind(sym, val)  \
	do {bds_ptr _b = bds_top+1; \
	      (_b)->bds_sym = (sym);  \
	_b->bds_val = (sym)->s.s_dbind;  \
	(sym)->s.s_dbind = (val); bds_top=_b;} while (0)

#define	bds_unwind1  \
	((bds_top->bds_sym)->s.s_dbind = bds_top->bds_val, --bds_top)


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
	object	ihs_function;
	object	*ihs_base;
} *ihs_ptr;

EXTER ihs_ptr ihs_org;

EXTER ihs_ptr ihs_limit;

EXTER ihs_ptr ihs_top;

#define	ihs_check  \
	if (ihs_top >= ihs_limit)  \
		ihs_overflow()

#define ihs_push(function)  \
	(++ihs_top)->ihs_function = (function);  \
	ihs_top->ihs_base = vs_base
#define ihs_push_base(function,base)  \
	(++ihs_top)->ihs_function = (function);  \
	ihs_top->ihs_base = base

#define ihs_pop() 	(ihs_top--)


#define make_nil_block()  \
{  \
	object x;  \
  \
	lex_copy();  \
	x = alloc_frame_id();  \
	vs_push(x);  \
	lex_block_bind(Cnil, x);  \
	vs_pop;  \
	frs_push(FRS_CATCH, x);  \
}


/*  Frame Stack  */

enum fr_class {
	FRS_CATCH,			/* for catch,block,tabbody */
	FRS_CATCHALL,                   /* for catchall */
	FRS_PROTECT                	/* for protect-all */
};

EXTER int in_signal_handler;
struct frame {
	jmp_buf		frs_jmpbuf;
	object		*frs_lex;
	bds_ptr		frs_bds_top;
	char 	frs_class;
	char frs_in_signal_handler;
	object		frs_val;
	ihs_ptr		frs_ihs;
};

typedef struct frame *frame_ptr;

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


EXTER frame_ptr frs_org;

EXTER frame_ptr frs_limit;

EXTER frame_ptr frs_top;		/* frame stack top */


#define frs_push(class, val)  \
   do { frame_ptr _frs_top = frs_top +1; \
	if (_frs_top >= frs_limit)  \
		frs_overflow();  \
	_frs_top->frs_lex = lex_env;\
	_frs_top->frs_bds_top = bds_top;  \
	_frs_top->frs_class = (class);  \
	_frs_top->frs_in_signal_handler = in_signal_handler;  \
	_frs_top->frs_val = (val);  \
	_frs_top->frs_ihs = ihs_top;  \
         frs_top=_frs_top; \
        setjmp(_frs_top->frs_jmpbuf); \
	} while (0)

#define frs_pop()	frs_top--


/*  global variables used during non-local jump  */

EXTER bool nlj_active;		/* true during non-local jump */
EXTER frame_ptr nlj_fr;		/* frame to return  */
EXTER object nlj_tag; 			/* throw-tag, block-id, or */
				/* (tagbody-id . label).   */


/*
(c) Copyright Taiichi Yuasa and Masami Hagiya, 1984.  All rights reserved.
Copying of this file is authorized to users who have executed the true and
proper "License Agreement for Kyoto Common LISP" with SIGLISP.
*/

/*

	lex.h

	lexical environment
*/


EXTER object *lex_env;



/*
			VS
		|		|
		|---------------|
lex_env ------> |    lex-var	|	: lex_env[0]
		|---------------|
		|    lex-fd	|       : lex_env[1]
		|---------------|
		|    lex-tag	|       : lex_env[2]
		|---------------|
		|		|
		|		|
		|		|

	lex-var:        (symbol value)      	; for local binding
		  (....	   or          ....)
			(symbol)                ; for special binding

	lex-fd:         (fun-name 'FUNCTION'   function)
		  (....		or				...)
			(macro-name 'MACRO' expansion-function)

	lex-tag:  	(tag    'TAG'  	frame-id)
		  (....		or                    ....)
			(block-name 'BLOCK' frame-id)

where 'FUN' is the LISP object with pname FUN, etc.


*/

#define lex_copy()	ihs_top->ihs_base = vs_top;  \
			vs_push(lex_env[0]);  \
                  	vs_push(lex_env[1]);  \
                  	vs_push(lex_env[2]);  \
			lex_env = vs_top - 3

#define lex_new()	ihs_top->ihs_base = vs_top;  \
			lex_env = vs_top;  \
			vs_top[0] = vs_top[1] = vs_top[2] = Cnil;  \
			vs_top += 3

#define lex_var_sch(name)	assoc_eq((name),lex_env[0])

#define lex_fd_sch(name)	assoc_eq((name),lex_env[1])

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
	eval.h
*/


/*  C control stack  */

#define	CSSIZE		20000
#define	CSGETA		4000

EXTER int *cs_org;
EXTER int *cs_limit;


/* we catch the segmentation fault and check to warn of c stack overflow */
#ifdef AV
#ifndef cs_check
#define	cs_check(something) \
	if ((int *)(&something) < cs_limit) \
		cs_overflow()
#endif
#endif
#ifdef MV



#endif

/*  bind template  */

struct bind_temp {
	object	bt_var;
	object	bt_spp;
	object	bt_init;
	object	bt_aux;
};


#define check_symbol(x) \
	if (type_of(x) != t_symbol) \
		not_a_symbol(x)

#define	check_var(x) \
	if (type_of(x) != t_symbol || \
	    (enum stype)(x)->s.s_stype == stp_constant) \
		not_a_variable(x)


#define	eval_assign(to, form)  \
{  \
	object *old_top = vs_top;  \
  \
	eval(form);  \
	to = vs_base[0];  \
	vs_top = old_top;  \
}


#define MMcall(x)  \
	ihs_check;  \
	ihs_push(x);  \
	(*(x)->cf.cf_self)();  \
	ihs_pop()

#define MMccall(x, env_top)  \
	ihs_check;  \
	ihs_push(x);  \
	(*(x)->cc.cc_self)(env_top);  \
	ihs_pop()


#define MMcons(a,d)	make_cons((a),(d))


#define MMcar(x)	(x)->c.c_car
#define MMcdr(x)	(x)->c.c_cdr
#define MMcaar(x)	(x)->c.c_car->c.c_car
#define MMcadr(x)	(x)->c.c_cdr->c.c_car
#define MMcdar(x)	(x)->c.c_car->c.c_cdr
#define MMcddr(x)	(x)->c.c_cdr->c.c_cdr
#define MMcaaar(x)	(x)->c.c_car->c.c_car->c.c_car
#define MMcaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car
#define MMcadar(x)	(x)->c.c_car->c.c_cdr->c.c_car
#define MMcaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car
#define MMcdaar(x)	(x)->c.c_car->c.c_car->c.c_cdr
#define MMcdadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr
#define MMcddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr
#define MMcdddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr
#define MMcaaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_car
#define MMcaaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_car
#define MMcaadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_car
#define MMcaaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_car
#define MMcadaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_car
#define MMcadadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_car
#define MMcaddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_car
#define MMcadddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_car
#define MMcdaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_cdr
#define MMcdaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_cdr
#define MMcdadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_cdr
#define MMcdaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_cdr
#define MMcddaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_cdr
#define MMcddadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_cdr
#define MMcdddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_cdr
#define MMcddddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_cdr


#define MMnull(x)	((x)==Cnil)


/* the link_desc, is an INT which carries the call information
   for all uses of that link.   It tells whether fcall.nargs is
   set before the call, whether the VFUN_FUN is set, (to pass in
   a closure function) or if the number of values is set after the
   call.  It gives the min and max number of args and the result
   type expected.   It describes the arg types.
   enum F_arg_flags


*/
    
/*
A link arg descriptor:
    a6a5a4a3a2a1a0rrmmmmmmfffllllll
    l = least number of args passed
    m = max number of args passed
    f = flags bits set according to F_arg_flags, There are F_end flag bits.
    r = result type in F_arg_types
    ai = i'th arg type in F_arg_types
*/

/* We allow 2 bits for encoding arg types and return type */
#define F_TYPE_WIDTH 2
#define F_MIN_ARGS(x) (x & MASK_RANGE(0,F_NARG_WIDTH))
#define F_NARGS(x) F_MIN_ARGS(x)
#define F_ARG_FLAGS_P(x,flag) (x & (1 << (F_NARG_WIDTH +  flag)))
#define F_ARG_FLAGS(x) ((x >> F_NARG_WIDTH) & MASK_RANGE(0,F_end))
#define F_MAX_ARGS(x) ((x >> (F_NARG_WIDTH + F_end )) \
		       & MASK_RANGE(0,F_NARG_WIDTH))

#define BITS_PER_CHAR 8
#define MAX_ARGS 63
#define F_TYPES(x) (((x) >> F_START_TYPES_POS ) \
		       & MASK_RANGE(0, sizeof(int)*BITS_PER_CHAR - F_START_TYPES_POS))
#define F_RESULT_TYPE(x) (F_TYPES(x) & MASK_RANGE(0,F_TYPE_WIDTH))
#define F_ARG_LIMIT ((1<< F_NARG_WIDTH) -1)

/* make an argd slot
   where flags and argtypes are already set up as fields
 */		       
#define F_ARGD(min,max,flags, argtypes) \
      (min | ((flags | (max-min ? (1<<F_requires_nargs) : 0) \
	       << F_NARG_WIDTH)) \
       | (max << (F_NARG_WIDTH+F_end)) \
       | (argtypes<< (2* F_NARG_WIDTH + F_end )))

#define ONE_VAL  (1 << F_caller_sets_one_val)
#define CLOS (1 << F_requires_fun_passed)
#define VARARG (1 << F_requires_nargs)
   /* the following may be used as an argument to DEFUN even in the case
      of varargs, since the F_ARGD macro detects minargs<maxargs and sets this.*/
#define NONE 0    

/* we dont want to define all these two letter macros... all the time */

#ifndef NO_DEFUN
#define OO (F_object | F_object << F_TYPE_WIDTH)
#define OI (F_object | F_int << F_TYPE_WIDTH)
#define OD (F_object | F_double_ptr << F_TYPE_WIDTH)
#define IO (F_int | F_object << F_TYPE_WIDTH)
#define II (F_int | F_int << F_TYPE_WIDTH)
#define ID (F_int | F_double_ptr << F_TYPE_WIDTH)
#define DO (F_double_ptr | F_object << F_TYPE_WIDTH)
#define DI (F_double_ptr | F_int << F_TYPE_WIDTH)
#define DD (F_double_ptr | F_double_ptr << F_TYPE_WIDTH)
#endif

#define ARGTYPES(a,b,c,d) \
  (a | (b << (2* F_TYPE_WIDTH)) | (c << (4* F_TYPE_WIDTH)) | (d << (6*F_TYPE_WIDTH)))


#define PUSH_FIRST_VAL(x) int nvals = 1 ; object result = (x)
#define PUSH_VAL(x) fcall.values[nvals++] = (x)
#define RETURN_VALS   fcall.nvalues= nvals; return result;} 0

#define FUNCALL(n,form) (VFUN_NARGS=n,form)
 
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
#ifndef COM_LENG
#define COM_LENG
#endif

/*  alloc.c  */
char *alloc_page();
object alloc_object();
char *alloc_contblock();
char *alloc_relblock();
object fSallocate_contiguous_pages();
object fSallocate_relocatable_pages();

/*  array.c  */
enum aelttype Iarray_element_type();
object fSaref1();
object fSaset1();
EXTER object sLarray_dimension_limit;
EXTER object sLarray_total_size_limit;
object fSmake_array1();
object fSmake_vector1();

/*  assignment.c  */
object setf();



/*  backq.c  */
EXTER int backq_level;
EXTER object sLlistA;
EXTER object sLappend;
EXTER object sLnconc;


/*  bds.c  */

/*  big.c  */
object stretch_big();
object copy_big();
object copy_to_big();
object big_minus();
object big_plus();
object big_times();
object normalize_big_to_object();
double big_to_double();

/* bind.c */
EXTER object ANDoptional;
EXTER object ANDrest;
EXTER object ANDkey;
EXTER object ANDallow_other_keys;
EXTER object ANDaux;
EXTER object sKallow_other_keys;
object find_special();
object let_bind();
object letA_bind();

/* block.c */

/*  cfun.c  */
object make_cfun();
object MF();
object MM();
object make_function();
object make_si_function();
object make_special_form();
object make_macro();
object make_cclosure_new();

/*  character.d  */
EXTER object STreturn;
EXTER object STspace;
EXTER object STrubout;
EXTER object STpage;
EXTER object STtab;
EXTER object STbackspace;
EXTER object STlinefeed;
EXTER object STnewline;
object coerce_to_character();

/*  catch.c  */

/*  cmpaux.c  */
char object_to_char();
float object_to_float();
double object_to_double();

/*  error.c  */
EXTER object sKerror;
EXTER object sKwrong_type_argument;
EXTER object sKcatch;
EXTER object sKprotect;
EXTER object sKcatchall;
EXTER object sKtoo_few_arguments;
EXTER object sKtoo_many_arguments;
EXTER object sKunexpected_keyword;
EXTER object sKinvalid_form;
EXTER object sKunbound_variable;
EXTER object sKinvalid_variable;
EXTER object sKundefined_function;
EXTER object sKinvalid_function;
object wrong_type_argument();
EXTER object sSuniversal_error_handler;

/*  eval.c  */
EXTER object sLapply;
EXTER object sLfuncall;
object simple_lispcall();
object simple_lispcall_no_event();
object simple_symlispcall();
object simple_symlispcall_no_event();
EXTER object Vevalhook;
EXTER object Vapplyhook;
object ieval();
object ifuncall();
object ifuncall1();
object ifuncall2();
object ifuncall3();
object fcalln();
object Ieval();
object Imacro_expand1();

/*  unixfasl.c  fasload.c  */

/*  file.d  */
EXTER object sKabort;
EXTER object sKappend;
EXTER object sKcreate;
EXTER object sKdefault;
EXTER object sKdirection;
EXTER object sKelement_type;
EXTER object sKif_does_not_exist;
EXTER object sKif_exists;
EXTER object sKinput;
EXTER object sKio;
EXTER object sKnew_version;
EXTER object sKoutput;
EXTER object sKoverwrite;
EXTER object sKprint;
EXTER object sKprobe;
EXTER object sKrename;
EXTER object sKrename_and_delete;
EXTER object sKset_default_pathname;
EXTER object sKsupersede;
EXTER object sKverbose;

EXTER object sLAstandard_inputA;
EXTER object sLAstandard_outputA;
EXTER object sLAerror_outputA;
EXTER object sLAquery_ioA;
EXTER object sLAdebug_ioA;
EXTER object sLAterminal_ioA;
EXTER object sLAtrace_outputA;
EXTER object terminal_io;
EXTER object standard_io;

EXTER object sLAload_verboseA;
EXTER object FASL_string;
object stream_element_type();
object open_stream();
object make_two_way_stream();
object make_echo_stream();
object make_string_input_stream();
object make_string_output_stream();
object get_output_stream_string();
object read_fasl_data();

#ifdef UNIX
/*  unixfsys.c  */
FILE *backup_fopen();
#else
/*  filesystem.c  */
FILE *backup_fopen();
#endif

/*  frame.c  */
frame_ptr frs_sch();
frame_ptr frs_sch_catch();

/*  gbc.c  */
EXTER bool GBC_enable;

/*  let.c  */

/*  lex.c  */
object assoc_eq();
object lex_tag_sch();
object lex_block_sch();

/*  list.d  */
EXTER object sKtest;
EXTER object sKtest_not;
EXTER object sKkey;
object car();
object cdr();
object kar();
object kdr();
object caar();
object cadr();
object cdar();
object cddr();
object caaar();
object caadr();
object cadar();
object caddr();
object cdaar();
object cdadr();
object cddar();
object cdddr();
object caaaar();
object caaadr();
object caadar();
object caaddr();
object cadaar();
object cadadr();
object caddar();
object cadddr();
object cdaaar();
object cdaadr();
object cdadar();
object cdaddr();
object cddaar();
object cddadr();
object cdddar();
object cddddr();
object nth();
object nthcdr();
object make_cons();
object list();
object listA();
object append();
object copy_list();
object make_list();
object nconc();
object sublis1();

/*  macros.c  */
EXTER object sLAmacroexpand_hookA;
EXTER object sSdefmacroA;
object macro_expand();

/*  main.c  */
EXTER char* system_directory;
EXTER int ARGC;
EXTER char **ARGV;
void error();
#ifdef UNIX
EXTER char **ENVP;
#endif


EXTER object sSAsystem_directoryA;
#ifdef UNIX
EXTER char *kcl_self;
#endif
#if !defined(IN_MAIN) || !defined(ATT)
EXTER bool initflag;
#endif
char *merge_system_directory();


EXTER object sLquote;

EXTER object sLlambda;

EXTER object sLlambda_block;
EXTER object sLlambda_closure;
EXTER object sLlambda_block_closure;

EXTER object sLfunction;
EXTER object sLmacro;
EXTER object sLtag;
EXTER object sLblock;


/*  mapfun.c  */

/*  multival.c  */

/*  number.c  */
EXTER object shortfloat_zero;
EXTER object longfloat_zero;
object make_fixnum();
object make_ratio();
object make_shortfloat();
object make_longfloat();
object make_complex();
double number_to_double();

/*  num_pred.c  */

/*  num_comp.c  */

/*  num_arith  */
object bignum2();
object bignum3();
object number_to_complex();
object complex_plus();
object number_plus();
object number_negate();
object number_minus();
object number_times();
object number_divide();
object number_expt();
object integer_divide1();
object get_gcd();
object get_lcm();
object one_plus();
object one_minus();

/*  num_co.c  */
object double_to_integer();

/*  num_log.c  */
object shift_integer();

/*  package.d  */
EXTER object lisp_package;
EXTER object user_package;
EXTER object keyword_package;
EXTER object system_package;
EXTER object sLApackageA;
EXTER object sKinternal;
EXTER object sKexternal;
EXTER object sKinherited;
EXTER object sKnicknames;
EXTER object sKuse;
EXTER int intern_flag;
EXTER object uninterned_list;
object make_package();
object in_package();
object rename_package();
object find_package();
object coerce_to_package();
object current_package();
object intern();
object find_symbol();

/*  pathname.d  */
EXTER object Vdefault_pathname_defaults;
EXTER object sKwild;
EXTER object sKnewest;
EXTER object sKstart;
EXTER object sKend;
EXTER object sKjunk_allowed;
EXTER object sKhost;
EXTER object sKdevice;
EXTER object sKdirectory;
EXTER object sKname;
EXTER object sKtype;
EXTER object sKversion;
EXTER object sKdefaults;
EXTER object sKroot;
EXTER object sKcurrent;
EXTER object sKparent;
EXTER object sKper;
object parse_namestring();
object coerce_to_pathname();
object default_device();
object merge_pathnames();
object namestring();
object coerce_to_namestring();

/*  prediate.c  */

int eql(),equal(),eq();

/*  print.d  */
EXTER object sKupcase;
EXTER object sKdowncase;
EXTER object sKcapitalize;
EXTER object sKstream;
EXTER object sKescape;
EXTER object sKpretty;
EXTER object sKcircle;
EXTER object sKbase;
EXTER object sKradix;
EXTER object sKcase;
EXTER object sKgensym;
EXTER object sKlevel;
EXTER object sKlength;
EXTER object sKarray;
EXTER object sLAprint_escapeA;
EXTER object sLAprint_prettyA;
EXTER object sLAprint_circleA;
EXTER object sLAprint_baseA;
EXTER object sLAprint_radixA;
EXTER object sLAprint_caseA;
EXTER object sLAprint_gensymA;
EXTER object sLAprint_levelA;
EXTER object sLAprint_lengthA;
EXTER object sLAprint_arrayA;
EXTER object *PRINTvs_top;
EXTER object *PRINTvs_limit;
EXTER object PRINTstream;
EXTER bool PRINTescape;
EXTER bool PRINTpretty;
EXTER bool PRINTcircle;
EXTER int PRINTbase;
EXTER bool PRINTradix;
EXTER object PRINTcase;
EXTER bool PRINTgensym;
EXTER int PRINTlevel;
EXTER int PRINTlength;
EXTER bool PRINTarray;
EXTER int (*write_ch_fun)();
object princ();
object prin1();
object print();
object terpri();
EXTER object sSpretty_print_format;
EXTER int  line_length;

/*  Read.d  */
EXTER object standard_readtable;
EXTER object Vreadtable;
EXTER object sLAread_default_float_formatA;
EXTER object sLAread_baseA;
EXTER object sLAread_suppressA;
EXTER object READtable;
EXTER object read_byte1(); 
EXTER int READdefault_float_format;
EXTER int READbase;
EXTER bool READsuppress;
EXTER object siSsharp_comma;
EXTER bool escape_flag;
EXTER object delimiting_char;
EXTER bool detect_eos_flag;
/* bool in_list_flag; */
EXTER bool dot_flag;
EXTER bool preserving_whitespace_flag;
EXTER object default_dispatch_macro;
EXTER object big_register_0;
EXTER int sharp_eq_context_max;
object read_char();
object peek_char();
object read_object_recursive();
object read_object_non_recursive();
object standard_read_object_non_recursive();
object read_object();
object parse_number();
object parse_integer();
object copy_readtable();
object current_readtable();
object patch_sharp();
object read_fasl_vector();

/* fasdump.c */
EXTER object sharing_table;

/*  reference.c  */
object symbol_function();


/*  sequence.d  */
object alloc_simple_vector();
object alloc_simple_bitvector();
object elt();
object elt_set();
object reverse();
object nreverse();

/*  structure.c  */
EXTER object sSs_data;
object structure_ref();
object structure_set();
object structure_to_list();

/*  string.d  */
object alloc_simple_string();
object make_simple_string();
object copy_simple_string();
object coerce_to_string();
EXTER int string_sign, string_boundary;

/*  symbol.d  */
EXTER object string_register;
EXTER object gensym_prefix;
EXTER int gensym_counter;
EXTER object gentemp_prefix;
EXTER int gentemp_counter;
EXTER object token;
object make_symbol();
object make_ordinary();
object make_special();
object make_constant();
object make_si_ordinary();
object make_si_special();
object make_si_constant();
object make_keyword();
object symbol_value();
object symbol_name();
object getf();
object get();
object putf();
object putprop();
object sputprop();
object remprop();
object gensym();		/*  to be deleted  */

#ifdef UNIX
/*  unixsys.c  */
#else
/*  sys.c  */
#endif

#ifdef UNIX
/*  unixtime.c  */
object unix_time_to_universal_time();
#else
/*  time.c  */
#endif

/*  toplevel.c  */
EXTER object sLspecial,sLdeclare;
EXTER object sSvariable_documentation;
EXTER object sSfunction_documentation;

/*  typespec.c  */
EXTER object
/*sLt,		sLnil, */
sLcommon,
sLnull,		sLcons,		sLlist,		sLsymbol,
sLarray,		sLvector,	sLbit_vector,	sLstring,
sLsequence,
sLsimple_array,	sLsimple_vector,	sLsimple_bit_vector,
						sLsimple_string,
sLcompiled_function,
				sLpathname,	sLcharacter,
sLnumber,	sLrational,	sLfloat,		sLstring_char,
sLinteger,	sLratio,		sLshort_float,	sLstandard_char,
sLfixnum,	sLcomplex,	sLsingle_float,	sLpackage,
sLbignum,	sLrandom_state,	sLdouble_float,	sLstream,
sLbit,		sLreadtable,	sLlong_float,	sLhash_table;
EXTER object sLstructure;
EXTER object sLsatisfies;
EXTER object sLmember;
EXTER object sLnot;
EXTER object sLor;
EXTER object sLand;
EXTER object sLvalues;
EXTER object sLmod;
EXTER object sLsigned_byte;
EXTER object sLunsigned_byte;
EXTER object sLsigned_char;
EXTER object sLunsigned_char;
EXTER object sLsigned_short;
EXTER object sLunsigned_short;
EXTER object sLA;
EXTER object sLplusp;
EXTER object TSor_symbol_string;
EXTER object TSor_string_symbol;
EXTER object TSor_symbol_string_package;
EXTER object TSnon_negative_integer;
EXTER object TSpositive_number;
EXTER object TSor_integer_float;
EXTER object TSor_rational_float;
#ifdef UNIX
EXTER object TSor_pathname_string_symbol;
#endif
EXTER object TSor_pathname_string_symbol_stream;

EXTER int interrupt_flag;		/* console interupt flag */
EXTER int interrupt_enable;		/* console interupt enable */

/*  CMPtemp  */
EXTER object CMPtemp;
EXTER object CMPtemp1;
EXTER object CMPtemp2;
EXTER object CMPtemp3;

EXTER object sLAlink_arrayA;

/* nfunlink.c */
object Icall_proc();
float Icall_proc_float();
object Icall_proc();
float Icall_proc_float();
object ImakeStructure();
object list_vector();
object Iapply_ap();
object IisFboundp();
object IapplyVector();
object c_apply_n();
EXTER object sSPmemory;
EXTER object sSPinit;
object sLfset();
object MakeAfun();
extern  object Cstd_key_defaults[];   
extern object call_proc0();
object fSaref1();
object Icheck_one_type();

/* utils.c */
object Iis_fixnum();
object Iapply_fun_n();
object Ifuncall_n();
object Ivs_values();
object Icheck_one_type();
object fSincorrect_type();
EXTER  int   fLbye  (); 
EXTER  object   fLidentity  (); 
EXTER  object   fLlisp_implementation_version  (); 
EXTER object  sSAlisp_maxpagesA ; 
EXTER object  sSAsystem_directoryA ; 
EXTER object  sSAmultiply_stacksA ; 
EXTER object  sStop_level ; 
EXTER object  sSAcommand_argsA ; 
EXTER object  sSAafter_gbc_hookA ; 
EXTER object  sSAignore_maximum_pagesA ; 
EXTER  object   fSallocated (); 
EXTER  object   fSreset_number_used (); 
EXTER  object   fSstaticp (); 
EXTER  object   fSallocate  (); 
EXTER  object   fSallocate_sgc (); 
EXTER  object   fSallocate_growth (); 
EXTER  object   fSallocate_contiguous_pages  (); 
EXTER  object   fSallocated_contiguous_pages  (); 
EXTER  object   fSmaximum_contiguous_pages  (); 
EXTER  object   fSallocate_relocatable_pages  (); 
EXTER  object   fSallocated_relocatable_pages  (); 
EXTER  object   fSget_hole_size  (); 
EXTER  object   fSset_hole_size  (); 
EXTER  object   fLgbc  (); 
EXTER object  sSAnotify_gbcA ; 
EXTER object  sSAgbc_messageA ; 
EXTER object  sLcommon ; 
EXTER object  sLnull ; 
EXTER object  sLcons ; 
EXTER object  sLlist ; 
EXTER object  sLsymbol ; 
EXTER object  sLarray ; 
EXTER object  sLvector ; 
EXTER object  sLbit_vector ; 
EXTER object  sLstring ; 
EXTER object  sLsequence ; 
EXTER object  sLsimple_array ; 
EXTER object  sLsimple_vector ; 
EXTER object  sLsimple_bit_vector ; 
EXTER object  sLsimple_string ; 
EXTER object  sLfunction ; 
EXTER object  sLcompiled_function ; 
EXTER object  sLpathname ; 
EXTER object  sLcharacter ; 
EXTER object  sLnumber ; 
EXTER object  sLrational ; 
EXTER object  sLfloat ; 
EXTER object  sLstring_char ; 
EXTER object  sLinteger ; 
EXTER object  sLratio ; 
EXTER object  sLshort_float ; 
EXTER object  sLstandard_char ; 
EXTER object  sLfixnum ; 
EXTER object  sLcomplex ; 
EXTER object  sLsingle_float ; 
EXTER object  sLpackage ; 
EXTER object  sLbignum ; 
EXTER object  sLrandom_state ; 
EXTER object  sLdouble_float ; 
EXTER object  sLstream ; 
EXTER object  sLbit ; 
EXTER object  sLreadtable ; 
EXTER object  sLlong_float ; 
EXTER object  sLhash_table ; 
EXTER object  sLkeyword ; 
EXTER object  sLstructure ; 
EXTER object  sLsatisfies ; 
EXTER object  sLmember ; 
EXTER object  sLnot ; 
EXTER object  sLor ; 
EXTER object  sLand ; 
EXTER object  sLvalues ; 
EXTER object  sLmod ; 
EXTER object  sLsigned_byte ; 
EXTER object  sLunsigned_byte ; 
EXTER object  sLsigned_char ; 
EXTER object  sLunsigned_char ; 
EXTER object  sLsigned_short ; 
EXTER object  sLunsigned_short ; 
EXTER object  sLA ; 
EXTER object  sLplusp ; 
EXTER object  sSchar_size ; 
EXTER object  sSshort_size ; 
EXTER  object   fLfuncall  (); 
EXTER  object   fLapply  (); 
EXTER  object   fLeval  (); 
EXTER  object   fLconstantp  (); 
EXTER object  sSlambda_block_expanded ; 
EXTER object  sSAbreak_pointsA ; 
EXTER object  sSAbreak_stepA ; 
EXTER  object   fLmacroexpand  (); 
EXTER object  sLfuncall ; 
EXTER object  sLAmacroexpand_hookA ; 
EXTER object  sSdefmacroA ; 
EXTER object  sSAinhibit_macro_specialA ; 
EXTER  object   fLnot (); 
EXTER  object   fLnot  (); 
EXTER  object   fLsymbolp  (); 
EXTER  object   fLatom    (); 
EXTER  object   fLconsp  (); 
EXTER  object   fLlistp  (); 
EXTER  object   fLnumberp  (); 
EXTER  object   fLintegerp   (); 
EXTER  object   fLrationalp  (); 
EXTER  object   fLrealp (); 
EXTER  object   fLfloatp  (); 
EXTER  object   fLcomplexp  (); 
EXTER  object   fLcharacterp  (); 
EXTER  object   fLstringp   (); 
EXTER  object   fLbit_vector_p  (); 
EXTER  object   fLvectorp  (); 
EXTER  object   fLsimple_string_p  (); 
EXTER  object   fLsimple_bit_vector_p   (); 
EXTER  object   fLsimple_vector_p   (); 
EXTER  object   fLarrayp   (); 
EXTER  object   fLpackagep   (); 
EXTER  object   fLfunctionp  (); 
EXTER  object   fLcompiled_function_p  (); 
EXTER  object   fLcommonp  (); 
EXTER  object   fLeq  (); 
EXTER  object   fLeql  (); 
EXTER  object   fLequal  (); 
EXTER  object   fLequalp  (); 
EXTER  object   fScontains_sharp_comma  (); 
EXTER  object   fSspicep    (); 
EXTER  object   fSfixnump  (); 
EXTER  object   fLset  (); 
EXTER  object   fSfset  (); 
EXTER  object   fLmakunbound  (); 
EXTER  object   fLfmakunbound  (); 
EXTER object  sSclear_compiler_properties ; 
EXTER  object   fSclear_compiler_properties  (); 
EXTER object  sLaref ; 
EXTER object  sLcar ; 
EXTER object  sLcdr ; 
EXTER object  sLchar ; 
EXTER object  sLdecf ; 
EXTER object  sLelt ; 
EXTER object  sLfill_pointer ; 
EXTER object  sLget ; 
EXTER object  sLgethash ; 
EXTER object  sLincf ; 
EXTER object  sLpop ; 
EXTER object  sLpush ; 
EXTER object  sLschar ; 
EXTER object  sLsetf ; 
EXTER object  sSsetf_lambda ; 
EXTER object  sSstructure_access ; 
EXTER object  sLsvref ; 
EXTER object  sStraced ; 
EXTER object  sLvector ; 
EXTER object  sKallow_other_keys ; 
EXTER  object   fSerror_set  (); 
EXTER  object   fSmc  (); 
EXTER  object   fSmfsfun  (); 
EXTER  object   fSmfvfun  (); 
EXTER  object   fSmfvfun_key  (); 
EXTER  object   fSmf  (); 
EXTER  object   fSmm  (); 
EXTER  object   fScompiled_function_name  (); 
EXTER  object   fSturbo_closure  (); 
EXTER  object   fSspecialp  (); 
EXTER object  sSdebug ; 
EXTER  object   fSdefvar1  (); 
EXTER  object   fSdebug  (); 
EXTER  object   fSsetvv  (); 
EXTER object  sSPmemory ; 
EXTER object  sSPinit ; 
EXTER object  sKexternal ; 
EXTER object  sKinherited ; 
EXTER object  sKinternal ; 
EXTER object  sKnicknames ; 
EXTER object  sKuse ; 
EXTER object  sLApackageA ; 
EXTER  object   fSallocate_bigger_fixnum_range (); 
EXTER  object   fScmod  (); 
EXTER  object   fScplus  (); 
EXTER  object   fSctimes  (); 
EXTER  object   fScdifference  (); 
EXTER  object   fLnth  (); 
EXTER  object   fLfirst (); 
EXTER  object   fLsecond  (); 
EXTER  object   fLthird  (); 
EXTER  object   fLfourth  (); 
EXTER  object   fLfifth  (); 
EXTER  object   fLsixth  (); 
EXTER  object   fLseventh  (); 
EXTER  object   fLeighth  (); 
EXTER  object   fLninth  (); 
EXTER  object   fLtenth  (); 
EXTER  object   fSnext_hash_table_entry (); 
EXTER  object   fLhash_table_test (); 
EXTER  int   fLhash_table_size (); 
EXTER object   sLarray_rank_limit ; 
EXTER object   sLarray_dimension_limit ; 
EXTER object   sLarray_total_size_limit ; 
EXTER object  sLbit ; 
EXTER   object    fLaref  (); 
EXTER   object    fLsvref (); 
EXTER   object    fSaref1 (); 
EXTER   object    fSaset1 (); 
EXTER   object    fSaset  (); 
EXTER   object    fSsvset  (); 
EXTER  object   fSmake_vector1 (); 
EXTER  enum aelttype   fSget_aelttype (); 
EXTER  object   fSmake_vector  (); 
EXTER  object   fSmake_array1 (); 
EXTER  object   fScopy_array_portion (); 
EXTER  int   fSfill_pointer_set  (); 
EXTER  int   fLfill_pointer  (); 
EXTER  object   
      fLarray_has_fill_pointer_p (); 
EXTER  object   fLarray_element_type  (); 
EXTER  object   fLadjustable_array_p  (); 
EXTER  object   fSdisplaced_array_p  (); 
EXTER  int   fLarray_rank  (); 
EXTER  int   fLarray_dimension  (); 
EXTER  object   fSreplace_array  (); 
EXTER  int   fLarray_total_size  (); 
EXTER  object   fSaset_by_cursor  (); 
EXTER object  sSAmatch_dataA ; 
EXTER object  sSAcase_fold_searchA ; 
EXTER  int   fSmatch_beginning (); 
EXTER  int   fSmatch_end (); 
EXTER  int   fSstring_match (); 
EXTER object  sSs_data ; 
EXTER object  sLcompile ; 
EXTER object  sLdeclare ; 
EXTER object  sLeval ; 
EXTER object  sLeval ; 
EXTER object  sSfunction_documentation ; 
EXTER object  sLload ; 
EXTER object  sLprogn ; 
EXTER object  sLtypep ; 
EXTER object  sLvalues ; 
EXTER object  sSvariable_documentation ; 
EXTER object  sLwarn ; 
EXTER object  sSAallow_gzipped_fileA ; 
EXTER object  sKmyaddr ; 
EXTER object  sKmyport ; 
EXTER object  sKasync ; 
EXTER object  sKhost ; 
EXTER object  sKserver ; 
EXTER object  sSsocket ; 
EXTER object  sLAstandard_inputA ; 
EXTER object  sLAstandard_outputA ; 
EXTER object  sLAerror_outputA ; 
EXTER object  sLAterminal_ioA ; 
EXTER object  sLAquery_ioA ; 
EXTER object  sLAdebug_ioA ; 
EXTER object  sLAtrace_outputA ; 
EXTER object  sSAignore_eof_on_terminal_ioA ; 
EXTER object  sSAload_pathnameA ; 
EXTER object  sLAload_verboseA ; 
EXTER object  sKabort ; 
EXTER object  sKappend ; 
EXTER object  sKcreate ; 
EXTER object  sKdefault ; 
EXTER object  sKdirection ; 
EXTER object  sKelement_type ; 
EXTER object  sKerror ; 
EXTER object  sKif_does_not_exist ; 
EXTER object  sKif_exists ; 
EXTER object  sKinput ; 
EXTER object  sKio ; 
EXTER object  sKnew_version ; 
EXTER object  sKoutput ; 
EXTER object  sKoverwrite ; 
EXTER object  sKprint ; 
EXTER object  sKprobe ; 
EXTER object  sKrename ; 
EXTER object  sKrename_and_delete ; 
EXTER object  sKset_default_pathname ; 
EXTER object  sKsupersede ; 
EXTER object  sKverbose ; 
EXTER object  sLAread_default_float_formatA ; 
EXTER object  sLAread_baseA ; 
EXTER object  sLAread_suppressA ; 
EXTER object  sSY ; 
EXTER object  sSYB ; 
EXTER object  sSYZ ; 
EXTER object  sLlistA ; 
EXTER object  sLappend ; 
EXTER object  sLnconc ; 
EXTER object  sLapply ; 
EXTER object  sLvector ; 
EXTER object  sKupcase ; 
EXTER object  sKdowncase ; 
EXTER object  sKcapitalize ; 
EXTER object  sKstream ; 
EXTER object  sKescape ; 
EXTER object  sKpretty ; 
EXTER object  sKcircle ; 
EXTER object  sKbase ; 
EXTER object  sKradix ; 
EXTER object  sKcase ; 
EXTER object  sKgensym ; 
EXTER object  sKlevel ; 
EXTER object  sKlength ; 
EXTER object  sKarray ; 
EXTER object  sLAprint_escapeA ; 
EXTER object  sLAprint_prettyA ; 
EXTER object  sLAprint_circleA ; 
EXTER object  sLAprint_baseA ; 
EXTER object  sLAprint_radixA ; 
EXTER object  sLAprint_caseA ; 
EXTER object  sLAprint_gensymA ; 
EXTER object  sLAprint_levelA ; 
EXTER object  sLAprint_lengthA ; 
EXTER object  sLAprint_arrayA ; 
EXTER object  sSAprint_packageA ; 
EXTER object  sSAprint_structureA ; 
EXTER object  sSpretty_print_format ; 
EXTER object  sSAprint_nansA ; 
EXTER  object   fLformat  (); 
EXTER object  sSAindent_formatted_outputA ; 
EXTER  object   fSsetenv (); 
EXTER  object   fLdelete_file  (); 
EXTER  object   fLerror  (); 
EXTER  object   fLcerror  (); 
EXTER  object   fSihs_top  (); 
EXTER  object   fSihs_fun  (); 
EXTER  object   fSihs_vs  (); 
EXTER  object   fSfrs_top  (); 
EXTER  object   fSfrs_vs  (); 
EXTER  object   fSfrs_bds  (); 
EXTER  object   fSfrs_class  (); 
EXTER  object   fSfrs_tag  (); 
EXTER  object   fSfrs_ihs  (); 
EXTER  object   fSbds_top  (); 
EXTER  object   fSbds_var  (); 
EXTER  object   fSbds_val  (); 
EXTER  object   fSvs_top  (); 
EXTER  object   fSvs  (); 
EXTER  object   fSsch_frs_base  (); 
EXTER  object   fSinternal_super_go  (); 
EXTER object  sSuniversal_error_handler ; 
EXTER  object   fSuniversal_error_handler  (); 
EXTER object  sSterminal_interrupt ; 
EXTER object  sKwrong_type_argument ; 
EXTER object  sKtoo_few_arguments ; 
EXTER object  sKtoo_many_arguments ; 
EXTER object  sKunexpected_keyword ; 
EXTER object  sKinvalid_form ; 
EXTER object  sKunbound_variable ; 
EXTER object  sKinvalid_variable ; 
EXTER object  sKundefined_function ; 
EXTER object  sKinvalid_function ; 
EXTER object  sKcatch ; 
EXTER object  sKprotect ; 
EXTER object  sKcatchall ; 
EXTER  object   fLget_universal_time  (); 
EXTER  int   fLget_internal_real_time (); 
EXTER object  sSAdefault_time_zoneA ; 
EXTER  int   fSgetpid (); 
EXTER  object   fSuse_fast_links (); 
EXTER object  sScdefn ; 
EXTER object  sLAlink_arrayA ; 
EXTER  object   fSfunction_start  (); 
EXTER  object   fSread_externals  (); 
EXTER  object   fSset_up_combined  (); 
EXTER  object   fSdisplay_profile  (); 
EXTER  object   fSarray_adress  (); 
EXTER object  sSAprofile_arrayA ; 
EXTER object  sSAinterrupt_enableA ; 
EXTER object  sSsigusr1_interrupt ; 
EXTER object  sSsigio_interrupt ; 
EXTER  int   sSsignal_safety_required (); 
EXTER  int   fSallow_signal (); 
EXTER  object   fSinitfun (); 
EXTER  object   fSinitmacro (); 
EXTER  object   fSset_key_struct (); 
EXTER  object   fSinvoke (); 
EXTER  object   fSopen_named_socket (); 
EXTER  object   fSclose_fd (); 
EXTER  object   fSclose_sfd (); 
EXTER  object   fSaccept_socket_connection (); 
EXTER  object   fShostname_to_hostid (); 
EXTER  object   fSgethostname (); 
EXTER  object   fShostid_to_hostname (); 
EXTER  int   fScheck_fd_for_input (); 
EXTER  int   fSclear_connection (); 
EXTER  int   fSconnection_state_fd (); 
EXTER  int   fSour_write (); 
EXTER  int   fSour_read_with_offset (); 
EXTER  object   fSprint_to_string1 (); 
EXTER  object   fSset_sigio_for_fd (); 
EXTER  object   fSreset_string_input_stream (); 
EXTER  int    fScheck_state_input (); 
EXTER  int   fSclear_connection_state (); 
EXTER  object   fSgetpeername (); 
EXTER  object   fSgetsockname (); 
EXTER  int   fSset_blocking (); 
/* if already mp.h has been included skip */
typedef  plong *GEN1;
/* if genpari.h not loaded */
#ifndef MAXBLOC
typedef  plong *GEN;
GEN1 addii(),mulii(),mulsi(),powerii(),shifti(),stoi(),dvmdii(),subii();
int cmpii();
plong itos();
#define signe(x)          (((GEN1)(x))[1]>>24)
#define lg(x)             (((GEN1)(x))[0]&0xffff)
#define setlg(x,s)        (((GEN1)(x))[0]=(((GEN1)(x))[0]&0xffff0000)+s)
#define lgef(x)           (((GEN1)(x))[1]&0xffff)
#define setlgef(x,s)      (((GEN1)(x))[1]=(((GEN1)(x))[1]&0xffff0000)+s)

#define our_ulong unsigned plong
#endif /* end MAXBLOC */


EXTER int in_saved_avma ;
EXTER unsigned plong avma;
EXTER GEN1 gzero;
EXTER GEN1 icopy_x;
/* #define DEBUG_AVMA */

#ifdef DEBUG_AVMA
#define save_avma long lvma = (in_saved_avma = 1, avma)
#define restore_avma avma = (in_saved_avma = 0, lvma)
#else
#define save_avma long lvma = avma
#define restore_avma avma = lvma
#endif


  /* copy x to y, increasing space by factor of 2  */
object make_integer();

#define Mcar(x)	(x)->c.c_car
#define Mcdr(x)	(x)->c.c_cdr
#define Mcaar(x)	(x)->c.c_car->c.c_car
#define Mcadr(x)	(x)->c.c_cdr->c.c_car
#define Mcdar(x)	(x)->c.c_car->c.c_cdr
#define Mcddr(x)	(x)->c.c_cdr->c.c_cdr
#define Mcaaar(x)	(x)->c.c_car->c.c_car->c.c_car
#define Mcaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car
#define Mcadar(x)	(x)->c.c_car->c.c_cdr->c.c_car
#define Mcaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car
#define Mcdaar(x)	(x)->c.c_car->c.c_car->c.c_cdr
#define Mcdadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr
#define Mcddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr
#define Mcdddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr
#define Mcaaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_car
#define Mcaaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_car
#define Mcaadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_car
#define Mcaaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_car
#define Mcadaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_car
#define Mcadadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_car
#define Mcaddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_car
#define Mcadddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_car
#define Mcdaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_cdr
#define Mcdaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_cdr
#define Mcdadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_cdr
#define Mcdaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_cdr
#define Mcddaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_cdr
#define Mcddadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_cdr
#define Mcdddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_cdr
#define Mcddddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_cdr

/* for cmp */

#define CMPcar(x)	(x)->c.c_car
#define CMPcdr(x)	(x)->c.c_cdr
#define CMPcaar(x)	(x)->c.c_car->c.c_car
#define CMPcadr(x)	(x)->c.c_cdr->c.c_car
#define CMPcdar(x)	(x)->c.c_car->c.c_cdr
#define CMPcddr(x)	(x)->c.c_cdr->c.c_cdr
#define CMPcaaar(x)	(x)->c.c_car->c.c_car->c.c_car
#define CMPcaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car
#define CMPcadar(x)	(x)->c.c_car->c.c_cdr->c.c_car
#define CMPcaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car
#define CMPcdaar(x)	(x)->c.c_car->c.c_car->c.c_cdr
#define CMPcdadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr
#define CMPcddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr
#define CMPcdddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr
#define CMPcaaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_car
#define CMPcaaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_car
#define CMPcaadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_car
#define CMPcaaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_car
#define CMPcadaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_car
#define CMPcadadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_car
#define CMPcaddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_car
#define CMPcadddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_car
#define CMPcdaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_cdr
#define CMPcdaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_cdr
#define CMPcdadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_cdr
#define CMPcdaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_cdr
#define CMPcddaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_cdr
#define CMPcddadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_cdr
#define CMPcdddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_cdr
#define CMPcddddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_cdr
#define CMPfuncall	funcall
#define Creturn(v) return((vs_top=vs,(v)))
/* end for cmp*/

/* 2^6 is the limit on the number of args */
#define F_NARG_WIDTH 6
#define F_START_TYPES_POS   (2* F_NARG_WIDTH + F_end )
enum F_arg_flags
{ F_requires_nargs, /* if set, then caller must store VFUN_NARGS with number
		       of args passed.   F_ARGD is used to set up the argd,
		       and it sets this if minargs < maxargs.   */
  F_caller_sets_one_val, /* If set, then the CALLER will look after setting the
		       fcall.nvalues to 1, if necessary (eg the call is at the
		       end of a function, or if multiple-values-list invokes
		       the function.)  If foo is proclaimed to return exactly
		       one value, then the CALLER might set this flag in the
		       link argd, or it might do it in the case we have (setq
		       x (foo)) or (values (foo)).   
		      
		       If this flag is not set, then the CALLED function is
		       responsible for setting the number of values in
		       fcall.nvalues, and also for always returning as C value
		       Cnil, in the case that it sets fcall.nvalues == 0.  */
  F_requires_fun_passed, /* if set, the caller must set VFUN_FUN to the
			    calling function.  This is used by closures, but
			    could be used by other things i suppose. */
  F_end               /* 1 bigger than the largest flag */
  };
enum F_arg_types
{ F_object,
  F_int,  
  F_double_ptr,
  F_shortfloat  
  };

/* Make a mask for bits i < j, masking j-i bits */
#define MASK_RANGE(i,j)  ((~(~0 << (j-i)))<< i)

#define F_PLAIN(x) (((x) & MASK_RANGE( F_START_TYPES_POS,31)) == 0)
#define ARG_LIMIT 63

EXTER object MVloc[10];

#define TYPEP(x,t) (type_of(x) == (t))


#ifdef HAVE_ALLOCA
#ifndef alloca
char *alloca();
#endif
EXTER char *alloca_val;
#define OUR_ALLOCA(n) alloca(n)
#define ALLOCA_FREE(n) 

#define ALLOCA_CONS(n) (alloca_val=alloca((n)*sizeof(struct cons))) 
#define ON_STACK_CONS(x,y) (alloca_val=alloca(sizeof(struct cons)), on_stack_cons(x,y)) 
#define ON_STACK_LIST on_stack_list
#define ON_STACK_LIST_VECTOR on_stack_list_vector
#define ON_STACK_MAKE_LIST on_stack_make_list
object on_stack_cons();
object on_stack_list();
object on_stack_list_vector();
object on_stack_make_list();
#else /* no HAVE_ALLOCA */
#define OUR_ALLOCA(n) malloc(n)
#define ALLOCA_FREE(n) free(n)
#define ALLOCA_CONS(n) 0
#define ON_STACK_CONS(x,y) MMcons(x,y)
#define ON_STACK_LIST list
#define ON_STACK_LIST_VECTOR list_vector
#define ON_STACK_MAKE_LIST make_list
#endif
#ifndef KEYTYPE
#define KEYTYPE void *
#endif



#define Scons sLcons
#define aref1 fSaref1 
#define aref  fSaref1
#define aset1 fSaset1
#define aset  fSaset1
#define siSPinit sSPinit
#define siSPmemory sSPmemory
#define siSdefmacroA sSdefmacroA
#define siSfunction_documentation sSfunction_documentation
#define siSlambda_block_expanded sSlambda_block_expanded
#define siSpretty_print_format sSpretty_print_format
#define IdoInit(x,y) do_init(y)
/* #define siSsharp_comma  */
#define siSvariable_documentation sSvariable_documentation


#define EQ(x,y) ((x)==(y))

#define	CMPmake_fixnum(x) \
((((FIXtemp=(x))+SMALL_FIXNUM_LIMIT)&(-2*SMALL_FIXNUM_LIMIT))==0?small_fixnum(FIXtemp):make_fixnum(FIXtemp))


object make_integer();
  /* copy x to y, increasing space by factor of 2  */


GEN otoi();
/*
object integ_temp;
#define otoi(x) (integ_temp = (x) , (type_of(integ_temp) == t_bignum \
   ? MP(integ_temp) :stoi(fix(integ_temp))))
*/
#define ISETQ_FIX(a,b,c) isetq_fix(a,c)
void isetq_fix();
#ifdef HAVE_ALLOCA
#define SETQ_II(var,alloc,val) \
  do{GEN _xx =(val) ; \
  int _n = replace_copy1(_xx,var); \
  if(_n) var = replace_copy2(_xx,alloca(_n));}while(0)

#define SETQ_IO(var,alloc,val) {object _xx =(val) ; \
			      int _n = obj_replace_copy1(_xx,var); \
			    if(_n) var = obj_replace_copy2(_xx,alloca(_n));}
#define IDECL(a,b,c) our_ulong b[4];a =(b[0]=0x1010000 +4,b) ; object c
#else
GEN setq_io(),setq_ii();
#define SETQ_IO(x,alloc,val)   (x)=setq_io(x,&alloc,val)
#define SETQ_II(x,alloc,val)   (x)=setq_ii(x,&alloc,val)
#define IDECL(a,b,c) our_ulong b[4];a =(b[0]=0x1010000 +4,b);object c
#endif

#define	cclosure_call	funcall


#include "tinfo.h"
init_code(){do_init(VV);}
/*	function definition for SIMPLE-LISTBOX	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{register object V1;
	V1=(base[0]);
	vs_top=sup;
TTL:;
	{object V2;
	object V3;
	base[1]= (V1);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V2= vs_base[0];
	base[1]= (V1);
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V3= vs_base[0];
	base[2]= (V1);
	base[3]= VV[2];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk227)();
	vs_top=sup;
	base[1]= (V3);
	base[2]= VV[3];
	base[3]= VV[4];
	base[4]= VV[5];
	base[6]= (V1);
	base[7]= VV[6];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk229)();
	vs_top=sup;
	base[1]= (V2);
	base[2]= VV[7];
	base[4]= (V1);
	base[5]= VV[8];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[3];
	base[5]= VV[9];
	base[6]= VV[10];
	base[7]= small_fixnum(1);
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk230)();
	vs_top=sup;
	base[1]= (V3);
	base[2]= VV[11];
	base[3]= VV[12];
	base[4]= VV[13];
	base[5]= VV[14];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk231)();
	vs_top=sup;
	base[1]= (V2);
	base[2]= VV[11];
	base[3]= VV[15];
	base[4]= VV[16];
	base[5]= VV[17];
	base[6]= VV[13];
	base[7]= VV[18];
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk231)();
	vs_top=sup;}
	base[1]= (V1);
	base[2]= VV[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk226)();
	return;
	}
}
/*	function definition for INSERT-STANDARD-LISTBOX	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V4;
	object V5;
	V4=(base[0]);
	V5=(base[1]);
	vs_top=sup;
TTL:;
	{register object V6;
	V6= Cnil;
	(void)((
	(type_of((V4)) == t_sfun ?(*(object (*)())(((V4))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V4))==t_vfun) ?
	(*(object (*)())(((V4))->sfn.sfn_self)):
	(fcall.fun=((V4)),fcalln))(VV[19],small_fixnum(0),VV[20])));
	(void)(sputprop((V4),VV[21],(V5)));
	{object V7 =((V4))->s.s_plist;
	 object ind= VV[22];
	while(V7!=Cnil){
	if(V7->c.c_car==ind){
	V6= (V7->c.c_cdr->c.c_car);
	goto T49;
	}else V7=V7->c.c_cdr->c.c_cdr;}
	V6= Cnil;}
T49:;
	{register object V8;
	register object V9;
	V8= (V5);
	V9= CMPcar((V8));
T53:;
	if(!(((V8))==Cnil)){
	goto T54;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T54:;
	if(((V6))==Cnil){
	goto T61;}
	base[3]= (V9);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V6));
	vs_top=sup;
	V10= vs_base[0];
	goto T59;
T61:;
	V10= (V9);
T59:;
	(void)((
	(type_of((V4)) == t_sfun ?(*(object (*)())(((V4))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V4))==t_vfun) ?
	(*(object (*)())(((V4))->sfn.sfn_self)):
	(fcall.fun=((V4)),fcalln))(VV[23],VV[20],V10)));
	V8= CMPcdr((V8));
	V9= CMPcar((V8));
	goto T53;}}
	}
}
/*	function definition for LISTBOX-MOVE	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V11;
	object V12;
	object V13;
	V11=(base[0]);
	V12=(base[1]);
	V13=(base[2]);
	vs_top=sup;
TTL:;
	{object V14;
	{register object x= (V12),V16= VV[24];
	while(V16!=Cnil)
	if(equal(x,V16->c.c_car->c.c_car) &&V16->c.c_car != Cnil){
	V15= (V16->c.c_car);
	goto T71;
	}else V16=V16->c.c_cdr;
	V15= Cnil;}
T71:;
	V14= CMPcdr(V15);
	if(((V14))==Cnil){
	goto T73;}
	base[3]= VV[25];
	base[5]= VV[26];
	base[6]= small_fixnum(0);
	base[7]= VV[27];
	base[8]= VV[28];
	vs_top=(vs_base=base+5)+4;
	super_funcall_no_event((V11));
	vs_top=sup;
	V17= vs_base[0];
	base[4]= number_plus(V17,(V14));
	vs_top=(vs_base=base+3)+2;
	super_funcall_no_event((V11));
	return;
T73:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for NEW-WINDOW	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V18;
	V18=(base[0]);
	vs_top=sup;
TTL:;
	{register object V19;
	V19= Cnil;
	base[1]= (V18);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T84;}
	base[1]= (V18);
	vs_top=(vs_base=base+1)+1;
	return;
T84:;
	base[1]= VV[29];
	base[2]= (V18);
	base[3]= VV[27];
	base[4]= VV[30];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk232)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T88;}
	{register object V20;
	V20= small_fixnum(2);
T96:;{object V21;
	base[1]= VV[29];
	base[3]= (V18);
	base[4]= (V20);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V19= vs_base[0];
	base[2]= (V19);
	base[3]= VV[27];
	base[4]= VV[30];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk232)();
	vs_top=sup;
	V21= vs_base[0];
	if(V21==Cnil)goto T99;
	goto T98;
T99:;}
	goto T97;
T98:;
	V20= number_plus((V20),small_fixnum(1));
	goto T96;
T97:;
	goto T94;
	goto T94;
T94:;
	base[1]= (V19);
	vs_top=(vs_base=base+1)+1;
	return;}
T88:;
	base[1]= (V18);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for INSERT-INFO-CHOICES	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V22;
	object V23;
	V22=(base[0]);
	V23=(base[1]);
	vs_top=sup;
TTL:;
	{register object V24;
	register object V25;
	register object V26;
	V24= Cnil;
	V25= Cnil;
	V26= Cnil;
	(void)((
	(type_of((V22)) == t_sfun ?(*(object (*)())(((V22))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V22))==t_vfun) ?
	(*(object (*)())(((V22))->sfn.sfn_self)):
	(fcall.fun=((V22)),fcalln))(VV[19],small_fixnum(0),VV[20])));
	{register int V27;
	V27= 0;
	{register object V28;
	register object V29;
	V28= Cnil;
	V29= (V23);
T118:;
	if(((V29))==Cnil){
	goto T121;}
	goto T120;
T121:;
	goto T119;
T120:;
	{object V30;
	V30= CMPcar((V29));
	V28= (V30);}
	V24= Cnil;
	V25= Cnil;
	if(!(type_of((V28))==t_cons)){
	goto T131;}
	if(!(type_of(CMPcdr((V28)))==t_cons)){
	goto T131;}
	V24= CMPcadr((V28));
	V28= CMPcar((V28));
T131:;
	if(!(type_of((V28))==t_cons)){
	goto T130;}
	V25= CMPcar((V28));
	V28= CMPcdr((V28));
T130:;
	base[2]= Cnil;
	base[3]= VV[31];
	base[4]= (V25);
	if(!(((V24))==((V26)))){
	goto T151;}
	base[5]= Cnil;
	goto T149;
T151:;
	V26= (V24);
	base[5]= (V26);
T149:;
	base[6]= (V28);
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V31= vs_base[0];
	(void)((
	(type_of((V22)) == t_sfun ?(*(object (*)())(((V22))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V22))==t_vfun) ?
	(*(object (*)())(((V22))->sfn.sfn_self)):
	(fcall.fun=((V22)),fcalln))(VV[23],VV[20],V31)));
	if(!((V27)<(2147483646))){
	goto T156;}
	goto T155;
T156:;
	vs_base=vs_top;
	(void) (*Lnk233)();
	vs_top=sup;
T155:;
	V27= (V27)+(1);
	V29= CMPcdr((V29));
	goto T118;
T119:;
	goto T115;
	goto T115;}}
T115:;
	base[2]= sputprop((V22),VV[21],(V23));
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for OFFER-CHOICES	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V32;
	V32=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T163;}
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	goto T164;
T163:;
	base[3]= VV[33];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk234)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[2]=MMcons(base[2],base[1]);
T164:;
	base[3]=MMcons(Cnil,base[2]);
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk235)();
	vs_top=sup;
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk236)();
	vs_top=sup;
	base[4]= (base[2]->c.c_car);
	base[5]= VV[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	(base[3]->c.c_car)= vs_base[0];
	base[4]= (base[3]->c.c_car);
	base[5]= (V32);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	base[4]= (base[3]->c.c_car);
	base[5]= VV[34];
	base[6]= 
	make_cclosure_new(LC23,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[5]= (base[2]->c.c_car);
	base[6]= VV[37];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[38];
	base[6]= VV[39];
	base[7]= VV[5];
	base[8]= list(2,VV[40],list(2,VV[41],(base[2]->c.c_car)));
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk239)();
	vs_top=sup;
	base[5]= (base[2]->c.c_car);
	base[6]= VV[42];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk227)();
	vs_top=sup;
	base[5]= (base[2]->c.c_car);
	base[6]= VV[43];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[38];
	base[6]= VV[44];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk240)();
	vs_top=sup;
	base[5]= (base[2]->c.c_car);
	base[6]= VV[45];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[3];
	base[6]= VV[46];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk241)();
	vs_top=sup;
	base[5]= (base[2]->c.c_car);
	base[6]= VV[43];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (base[2]->c.c_car);
	base[7]= VV[45];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= VV[11];
	base[7]= VV[47];
	base[8]= VV[16];
	base[9]= VV[48];
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk231)();
	vs_top=sup;
	base[5]= (base[2]->c.c_car);
	base[6]= VV[2];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (base[2]->c.c_car);
	base[7]= VV[37];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (base[2]->c.c_car);
	base[8]= VV[42];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= VV[11];
	base[8]= VV[49];
	base[9]= VV[13];
	base[10]= VV[50];
	vs_top=(vs_base=base+4)+7;
	(void) (*Lnk231)();
	vs_top=sup;
	base[5]= (base[2]->c.c_car);
	base[6]= VV[45];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[51];
	base[6]= 
	make_cclosure_new(LC24,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[4]= (base[2]->c.c_car);
	base[5]= VV[53];
	base[7]= (base[2]->c.c_car);
	base[8]= VV[45];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V33= vs_base[0];
	base[6]= list(2,VV[54],list(2,VV[41],V33));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for GET-INFO-APROPOS	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{register object V34;
	object V35;
	object V36;
	V34=(base[0]);
	V35=(base[1]);
	V36=(base[2]);
	vs_top=sup;
TTL:;
	if(((V34))==Cnil){
	goto T245;}
	base[3]= VV[29];
	base[4]= (V34);
	base[5]= VV[27];
	base[6]= VV[30];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk232)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T245;}
	{object V37;
	{object V38 =((V34))->s.s_plist;
	 object ind= VV[55];
	while(V38!=Cnil){
	if(V38->c.c_car==ind){
	V37= (V38->c.c_cdr->c.c_car);
	goto T253;
	}else V38=V38->c.c_cdr->c.c_cdr;}
	V37= Cnil;}
T253:;
	if(((V37))==((VV[56]->s.s_dbind))){
	goto T254;}
	(void)(sputprop((V34),VV[55],(VV[56]->s.s_dbind)));
	base[3]= (V34);
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V39= vs_base[0];
	(void)((
	V40 = V39,
	(type_of(V40) == t_sfun ?(*(object (*)())((V40)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V40)==t_vfun) ?
	(*(object (*)())((V40)->sfn.sfn_self)):
	(fcall.fun=(V40),fcalln))(VV[19],small_fixnum(0),VV[20])));
T254:;
	base[3]= (V34);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk242)();
	vs_top=sup;
	base[3]= (V34);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk54)();
	vs_top=sup;
	base[3]= (V34);
	vs_top=(vs_base=base+3)+1;
	return;}
T245:;
	base[3]= (V35);
	base[4]= (V36);
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk243)();
	return;
	}
}
/*	function definition for SHOW-INFO-KEY	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V41;
	object V42;
	V41=(base[0]);
	V42=(base[1]);
	vs_top=sup;
TTL:;
	{register object V43;
	object V44;
	{object V45 =((V41))->s.s_plist;
	 object ind= VV[57];
	while(V45!=Cnil){
	if(V45->c.c_car==ind){
	V43= (V45->c.c_cdr->c.c_car);
	goto T268;
	}else V45=V45->c.c_cdr->c.c_cdr;}
	V43= Cnil;}
T268:;
	V44= Cnil;
	if((V43)!=Cnil){
	goto T269;}
	base[2]= VV[58];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk244)();
	vs_top=sup;
T269:;
	base[3]= (V42);
	base[4]= VV[59];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk245)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= CMPcar((V43));
	base[4]= CMPcadddr((V43));
	base[5]= CMPcadr((V43));
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk246)();
	vs_top=sup;
	V46= vs_base[0];
	if(!((fix(V46))>=(0))){
	goto T274;}
	base[2]= CMPcar((V43));
	base[3]= small_fixnum(1);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk247)();
	vs_top=sup;
	V44= vs_base[0];
	goto T272;
T274:;
	V44= Cnil;
T272:;
	if(((V44))==Cnil){
	goto T286;}
	base[2]= (V44);
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk248)();
	return;
T286:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for MKINFO	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{register object V47;
	if(vs_base>=vs_top){vs_top=sup;goto T290;}
	V47=(base[0]);
	vs_top=sup;
	goto T291;
T290:;
	V47= VV[60];
T291:;
	{register object V48;
	register object V49;
	V48= Cnil;
	V49= Cnil;
	base[1]= VV[29];
	base[2]= (V47);
	base[3]= VV[27];
	base[4]= VV[30];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk232)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T295;}
	base[1]= (V47);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk40)();
	vs_top=sup;
T295:;
	base[1]= (V47);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk235)();
	vs_top=sup;
	base[1]= VV[61];
	base[2]= (V47);
	base[3]= VV[62];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk249)();
	vs_top=sup;
	base[1]= VV[63];
	base[2]= (V47);
	base[3]= VV[64];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk249)();
	vs_top=sup;
	base[2]= (V47);
	base[3]= VV[65];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V49= vs_base[0];
	base[1]= (V49);
	base[2]= VV[3];
	base[3]= VV[66];
	base[4]= VV[67];
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk227)();
	vs_top=sup;
	base[1]= (V47);
	base[2]= VV[68];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V48= vs_base[0];
	base[1]= (V49);
	base[2]= VV[11];
	base[3]= VV[69];
	base[4]= VV[13];
	base[5]= VV[70];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk231)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[71];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[72];
	base[4]= VV[5];
	base[5]= list(2,VV[40],list(2,VV[41],(V47)));
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk239)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[73];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[74];
	base[4]= VV[3];
	base[5]= VV[75];
	base[6]= VV[76];
	base[8]= (V49);
	base[9]= VV[73];
	base[10]= VV[77];
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk226)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[78];
	base[9]= small_fixnum(0);
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk250)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[73];
	base[4]= VV[77];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk251)();
	vs_top=sup;
	base[1]= (V49);
	base[2]= VV[73];
	base[3]= VV[77];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk226)();
	vs_top=sup;
	V50= vs_base[0];
	(void)((
	V51 = V50,
	(type_of(V51) == t_sfun ?(*(object (*)())((V51)->sfn.sfn_self)):
	(fcall.argd=6,type_of(V51)==t_vfun) ?
	(*(object (*)())((V51)->sfn.sfn_self)):
	(fcall.fun=(V51),fcalln))(VV[79],VV[80],VV[81],VV[82],VV[5],VV[83])));
	base[1]= (V49);
	base[2]= VV[73];
	base[3]= VV[77];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk226)();
	vs_top=sup;
	V52= vs_base[0];
	V53= list(2,VV[85],list(2,VV[41],(V48)));
	(void)((
	V54 = V52,
	(type_of(V54) == t_sfun ?(*(object (*)())((V54)->sfn.sfn_self)):
	(fcall.argd=6,type_of(V54)==t_vfun) ?
	(*(object (*)())((V54)->sfn.sfn_self)):
	(fcall.fun=(V54),fcalln))(VV[79],VV[80],VV[81],VV[84],VV[5],/* INLINE-ARGS */V53)));
	base[1]= (V49);
	base[2]= VV[73];
	base[3]= VV[77];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk226)();
	vs_top=sup;
	V55= vs_base[0];
	(void)((
	V56 = V55,
	(type_of(V56) == t_sfun ?(*(object (*)())((V56)->sfn.sfn_self)):
	(fcall.argd=6,type_of(V56)==t_vfun) ?
	(*(object (*)())((V56)->sfn.sfn_self)):
	(fcall.fun=(V56),fcalln))(VV[79],VV[80],VV[81],VV[86],VV[5],VV[87])));
	base[2]= (V49);
	base[3]= VV[88];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[89];
	base[4]= VV[3];
	base[5]= VV[75];
	base[6]= VV[5];
	base[7]= list(3,VV[90],list(2,VV[41],(V48)),VV[91]);
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk239)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[92];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[93];
	base[4]= VV[3];
	base[5]= VV[75];
	base[6]= VV[5];
	base[7]= list(3,VV[90],list(2,VV[41],(V48)),VV[94]);
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk239)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[95];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[96];
	base[4]= VV[3];
	base[5]= VV[75];
	base[6]= VV[5];
	base[7]= list(3,VV[90],list(2,VV[41],(V48)),VV[97]);
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk239)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[33];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[98];
	base[4]= VV[3];
	base[5]= VV[75];
	base[6]= VV[5];
	base[7]= VV[99];
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk239)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[100];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[101];
	base[4]= VV[3];
	base[5]= VV[75];
	base[6]= VV[5];
	base[7]= list(3,VV[102],list(2,VV[41],(V48)),VV[103]);
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk239)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[104];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[38];
	base[3]= VV[105];
	base[4]= VV[3];
	base[5]= VV[75];
	base[6]= VV[5];
	base[7]= list(3,VV[102],list(2,VV[41],(V48)),VV[106]);
	vs_top=(vs_base=base+1)+7;
	(void) (*Lnk239)();
	vs_top=sup;
	base[2]= (V49);
	base[3]= VV[73];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[3]= (V49);
	base[4]= VV[71];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V49);
	base[5]= VV[88];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= (V49);
	base[6]= VV[92];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= (V49);
	base[7]= VV[95];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V49);
	base[8]= VV[92];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= (V49);
	base[9]= VV[100];
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= (V49);
	base[10]= VV[104];
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[8]= vs_base[0];
	base[10]= (V49);
	base[11]= VV[33];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[9]= vs_base[0];
	base[10]= VV[11];
	base[11]= VV[107];
	vs_top=(vs_base=base+1)+11;
	(void) (*Lnk231)();
	vs_top=sup;
	base[1]= (V47);
	base[2]= VV[108];
	base[3]= list(2,VV[54],list(2,VV[41],(V49)));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[2]= (V47);
	base[3]= VV[109];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[3];
	base[3]= VV[110];
	base[4]= VV[5];
	base[6]= (V47);
	base[7]= VV[111];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk229)();
	vs_top=sup;
	base[1]= (V48);
	base[2]= VV[3];
	base[3]= VV[112];
	base[4]= VV[113];
	base[5]= small_fixnum(2);
	base[6]= VV[10];
	base[7]= VV[114];
	base[8]= VV[115];
	base[9]= VV[116];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk252)();
	vs_top=sup;
	base[1]= (V48);
	base[3]= (V47);
	base[4]= VV[109];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk253)();
	vs_top=sup;
	V57= vs_base[0];
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[117],VV[118],V57)));
	base[1]= (V49);
	base[2]= VV[119];
	base[3]= list(3,VV[90],list(2,VV[41],(V48)),VV[120]);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[1]= (V49);
	base[2]= VV[121];
	base[3]= list(3,VV[90],list(2,VV[41],(V48)),VV[122]);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[1]= (V49);
	base[2]= VV[123];
	base[3]= list(3,VV[90],list(2,VV[41],(V48)),VV[124]);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[1]= (V49);
	base[2]= VV[125];
	base[5]= (V49);
	base[6]= VV[100];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[117];
	base[6]= VV[5];
	base[7]= VV[27];
	base[8]= VV[126];
	vs_top=(vs_base=base+5)+4;
	super_funcall_no_event(base[4]);
	vs_top=sup;
	V58= vs_base[0];
	base[3]= CMPcar(CMPcddddr(V58));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk238)();
	vs_top=sup;
	base[2]= (V47);
	base[3]= VV[109];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[11];
	base[3]= VV[127];
	base[4]= VV[13];
	base[5]= VV[128];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk231)();
	vs_top=sup;
	base[1]= (V48);
	base[2]= VV[16];
	base[3]= VV[129];
	base[4]= VV[13];
	base[5]= VV[130];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk231)();
	vs_top=sup;
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[131],VV[132],VV[133],VV[134])));
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[117],VV[136],VV[137],VV[138])));
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[117],VV[139],VV[137],VV[140])));
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[117],VV[141],VV[137],VV[142])));
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[117],VV[143],VV[137],VV[138])));
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[117],VV[144],VV[78],small_fixnum(1))));
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[145],VV[143],VV[146],VV[147])));
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[145],VV[143],VV[148],VV[149])));
	V59= listA(3,VV[151],list(2,VV[41],(V48)),VV[152]);
	(void)((
	(type_of((V48)) == t_sfun ?(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V48))==t_vfun) ?
	(*(object (*)())(((V48))->sfn.sfn_self)):
	(fcall.fun=((V48)),fcalln))(VV[135],VV[145],VV[143],VV[150],/* INLINE-ARGS */V59)));
	base[1]= (V49);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk54)();
	return;}
	}
}
/*	function definition for INFO-TEXT-SEARCH	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V60;
	object V61;
	register object V62;
	register object V63;
	object V64;
	V60=(base[0]);
	V61=(base[1]);
	V62=(base[2]);
	V63=(base[3]);
	V64=(base[4]);
	vs_top=sup;
TTL:;
	{register object V65;
	register object V66;
	V65= Cnil;
	{object V67 =((V60))->s.s_plist;
	 object ind= VV[57];
	while(V67!=Cnil){
	if(V67->c.c_car==ind){
	V66= (V67->c.c_cdr->c.c_car);
	goto T544;
	}else V67=V67->c.c_cdr->c.c_cdr;}
	V66= Cnil;}
T544:;
	if((V66)!=Cnil){
	goto T545;}
	base[6]= VV[153];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk254)();
	vs_top=sup;
T545:;
	if(!(equal((V64),VV[154]))){
	goto T549;}
	{object V68;
	V68= (
	(type_of((V62)) == t_sfun ?(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V62))==t_vfun) ?
	(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcalln))(VV[155],VV[133],VV[27],VV[28]));
	V69= number_minus((V68),small_fixnum(1));
	(void)((
	(type_of((V62)) == t_sfun ?(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V62))==t_vfun) ?
	(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcalln))(VV[19],/* INLINE-ARGS */V69)));
	goto T547;}
T549:;
	{object V70;
	base[6]= VV[156];
	base[7]= (V64);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk246)();
	vs_top=sup;
	V71= vs_base[0];
	V70= (number_compare(V71,small_fixnum(0))>=0?Ct:Cnil);
	if(((V70))==Cnil){
	goto T557;}
	goto T547;
T557:;
	if(!(equal((V63),VV[157]))){
	goto T560;}
	V65= small_fixnum(1);
	goto T547;
T560:;
	base[6]= VV[158];
	base[7]= (V63);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk246)();
	vs_top=sup;
	V72= vs_base[0];
	if(!(number_compare(V72,small_fixnum(0))>=0)){
	goto T564;}
	(void)((
	(type_of((V62)) == t_sfun ?(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V62))==t_vfun) ?
	(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcalln))(VV[23],VV[133],(V63))));
	V65= small_fixnum(0);
	goto T547;
T564:;
	base[6]= (V61);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk54)();
	vs_top=sup;}
T547:;
	if((V65)!=Cnil){
	goto T572;}
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;
T572:;
	V73= list(4,VV[159],(V62),(V63),(V64));
	(void)(print(/* INLINE-ARGS */V73,Cnil));
	{object V74;
	object V75;
	object V76;
	V74= (
	(type_of((V60)) == t_sfun ?(*(object (*)())(((V60))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V60))==t_vfun) ?
	(*(object (*)())(((V60))->sfn.sfn_self)):
	(fcall.fun=((V60)),fcalln))(VV[155],VV[160],VV[27],VV[36]));
	base[9]= (V74);
	base[10]= CMPcar((V66));
	base[11]= CMPcadr((V66));
	base[12]= CMPcaddr((V66));
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk255)();
	vs_top=sup;
	V75= vs_base[0];
	base[10]= VV[52];
	base[11]= VV[27];
	base[12]= VV[36];
	vs_top=(vs_base=base+10)+3;
	super_funcall_no_event((V62));
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V65);
	base[13]= (V66);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk256)();
	vs_top=sup;
	base[12]= vs_base[0];
	base[13]= (V75);
	vs_top=(vs_base=base+11)+3;
	Lplus();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk257)();
	vs_top=sup;
	V76= vs_base[0];
	if(!(number_compare((V76),small_fixnum(0))>=0)){
	goto T591;}
	{object V77;
	base[9]= (V76);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk258)();
	vs_top=sup;
	V77= vs_base[0];
	base[9]= (V77);
	base[11]= (V77);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk256)();
	vs_top=sup;
	V78= vs_base[0];
	base[10]= number_minus((V76),V78);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk259)();
	return;}
T591:;
	base[9]= VV[161];
	vs_top=(vs_base=base+9)+1;
	super_funcall_no_event((V62));
	return;}}
	}
}
/*	function definition for PRINT-NODE	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V79;
	register object V80;
	V79=(base[0]);
	V80=(base[1]);
	vs_top=sup;
TTL:;
	{object V81;
	V81= Cnil;
	V81= list(2,(V79),(V80));
	{register object V82;
	register object V83;
	register object V84;
	V82= VV[60];
	V83= Cnil;
	V84= Cnil;{object V85;
	base[2]= VV[29];
	base[3]= (V82);
	base[4]= VV[27];
	base[5]= VV[30];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk232)();
	vs_top=sup;
	V85= vs_base[0];
	if(V85==Cnil)goto T604;
	goto T603;
T604:;}
	base[2]= (V82);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk260)();
	vs_top=sup;
T603:;
	base[2]= (V82);
	base[3]= VV[68];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V83= vs_base[0];
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[117],VV[115],VV[162])));
	{object V86 =((V83))->s.s_plist;
	 object ind= VV[163];
	while(V86!=Cnil){
	if(V86->c.c_car==ind){
	if(((V86->c.c_cdr->c.c_car))==Cnil){
	goto T618;}
	goto T619;
	}else V86=V86->c.c_cdr->c.c_cdr;}
	goto T618;}
T619:;
	(void)(remprop((V83),VV[163]));
	goto T616;
T618:;
	{object V87 =((V83))->s.s_plist;
	 object ind= VV[57];
	while(V87!=Cnil){
	if(V87->c.c_car==ind){
	V84= (V87->c.c_cdr->c.c_car);
	goto T622;
	}else V87=V87->c.c_cdr->c.c_cdr;}
	V84= Cnil;}
T622:;
	if(((V84))==Cnil){
	goto T616;}
	(VV[164]->s.s_dbind)= Cnil;
	{object V90;
	base[3]= Cnil;
	base[4]= VV[166];
	base[5]= CMPcar(CMPcddddr((V84)));
	base[6]= CMPcaddr(CMPcddddr((V84)));
	base[7]= CMPcar(CMPcddddr((V84)));
	base[9]= VV[155];
	base[10]= VV[167];
	base[11]= VV[27];
	base[12]= VV[36];
	vs_top=(vs_base=base+9)+4;
	super_funcall_no_event((V83));
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+3)+6;
	Lformat();
	vs_top=sup;
	V91= vs_base[0];
	{object V93 =(V83)->s.s_plist;
	 object ind= VV[165];
	while(V93!=Cnil){
	if(V93->c.c_car==ind){
	V92= (V93->c.c_cdr->c.c_car);
	goto T637;
	}else V93=V93->c.c_cdr->c.c_cdr;}
	V92= Cnil;}
T637:;
	V90= make_cons(V91,V92);
	(void)(sputprop(V83,VV[165],(V90)));}
T616:;
	(void)(sputprop((V83),VV[57],(V79)));
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[19],VV[134],VV[20])));
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[131],VV[168],VV[133],VV[169])));
	if(!(number_compare((V80),small_fixnum(0))>0)){
	goto T643;}
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[23],VV[170],VV[171])));
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[131],VV[168],VV[172],VV[20])));
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[131],VV[168],VV[133],VV[20])));
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[25],VV[172])));
	base[2]= (V83);
	base[3]= CMPcar((V79));
	base[4]= number_plus(CMPcadr((V79)),(V80));
	base[5]= CMPcaddr((V79));
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk261)();
	vs_top=sup;
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[131],VV[168],VV[133],VV[173])));
	base[2]= (V83);
	base[3]= CMPcar((V79));
	base[4]= CMPcadr((V79));
	base[5]= number_plus(CMPcadr((V79)),(V80));
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk261)();
	vs_top=sup;
	goto T641;
T643:;
	base[2]= (V83);
	base[3]= CMPcar((V79));
	base[4]= CMPcadr((V79));
	base[5]= CMPcaddr((V79));
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk261)();
	vs_top=sup;
T641:;
	(void)((
	(type_of((V83)) == t_sfun ?(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V83))==t_vfun) ?
	(*(object (*)())(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(VV[117],VV[115],VV[116])));
	base[2]= (V82);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk242)();
	vs_top=sup;
	base[2]= (V83);
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	function definition for INFO-SHOW-HISTORY	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V94;
	register object V95;
	V94=(base[0]);
	V95=(base[1]);
	vs_top=sup;
TTL:;
	{object V96;
	{object V97 =((V94))->s.s_plist;
	 object ind= VV[165];
	while(V97!=Cnil){
	if(V97->c.c_car==ind){
	V96= (V97->c.c_cdr->c.c_car);
	goto T666;
	}else V97=V97->c.c_cdr->c.c_cdr;}
	V96= Cnil;}
T666:;
	if(!(type_of((V95))==t_string)){
	goto T668;}
	base[2]= VV[174];
	base[3]= (V95);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk246)();
	vs_top=sup;
	V98= vs_base[0];
	if(!((fix(V98))>=(0))){
	goto T671;}
	{object V99;
	object V100;
	base[2]= (V95);
	base[3]= small_fixnum(2);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk247)();
	vs_top=sup;
	V99= vs_base[0];
	base[3]= (V95);
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk247)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk248)();
	vs_top=sup;
	V100= vs_base[0];
	(void)(sputprop((V94),VV[163],Ct));
	if(!(equal(VV[175],(V99)))){
	goto T685;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T685:;
	base[2]= VV[25];
	base[3]= (V99);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V100));
	return;}
T671:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T668:;
	if(!(((V95))==(VV[176]))){
	goto T690;}
	{object V101;
	V101= (V94);
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T696;}
	{object V102;
	V102= CMPcar((VV[164]->s.s_dbind));
	(VV[164]->s.s_dbind)= CMPcdr((VV[164]->s.s_dbind));
	V95= (V102);
	goto T694;}
T696:;
	{object V103 =((V94))->s.s_plist;
	 object ind= VV[165];
	while(V103!=Cnil){
	if(V103->c.c_car==ind){
	(VV[164]->s.s_dbind)= (V103->c.c_cdr->c.c_car);
	goto T702;
	}else V103=V103->c.c_cdr->c.c_cdr;}
	(VV[164]->s.s_dbind)= Cnil;}
T702:;
	{object V104;
	V104= CMPcar((VV[164]->s.s_dbind));
	(VV[164]->s.s_dbind)= CMPcdr((VV[164]->s.s_dbind));
	V95= (V104);}
T694:;
	V94= (V101);}
	goto TTL;
T690:;
	if(!(((V95))==(VV[165]))){
	goto T707;}
	{register object V105;
	object V106;
	V105= VV[177];
	base[3]= (V105);
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V106= vs_base[0];
	{object V107;
	base[3]= VV[29];
	base[4]= (V105);
	base[5]= VV[27];
	base[6]= VV[30];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk232)();
	vs_top=sup;
	V107= vs_base[0];
	if(((V107))==Cnil){
	goto T720;}
	goto T713;
T720:;
	base[3]= (V105);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk235)();
	vs_top=sup;
	base[3]= (V105);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)();
	vs_top=sup;
	base[4]= (V105);
	base[5]= VV[71];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[38];
	base[5]= VV[178];
	base[6]= VV[5];
	base[7]= list(2,VV[40],list(2,VV[41],(V105)));
	vs_top=(vs_base=base+3)+5;
	(void) (*Lnk239)();
	vs_top=sup;
	base[4]= (V105);
	base[5]= VV[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= (V105);
	base[6]= VV[71];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[16];
	base[6]= VV[179];
	base[7]= VV[13];
	base[8]= VV[130];
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk231)();
	vs_top=sup;}
T713:;
	base[3]= (V106);
	base[4]= (V96);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	base[3]= (V105);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk242)();
	vs_top=sup;
	base[3]= (V106);
	base[4]= VV[180];
	base[5]= list(3,VV[102],list(2,VV[41],(V106)),VV[181]);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk238)();
	return;}
T707:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for SHOW-THIS-NODE	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V108;
	object V109;
	object V110;
	V108=(base[0]);
	V109=(base[1]);
	V110=(base[2]);
	vs_top=sup;
TTL:;
	{register object V111;
	base[3]= (V108);
	base[4]= VV[143];
	base[5]= VV[182];
	base[6]= VV[183];
	base[7]= (V109);
	base[8]= VV[183];
	base[9]= VV[184];
	base[10]= VV[183];
	base[11]= (V110);
	base[12]= VV[27];
	base[13]= VV[126];
	vs_top=(vs_base=base+3)+11;
	(void) (*Lnk263)();
	vs_top=sup;
	V111= vs_base[0];
	if(((V111))==Cnil){
	goto T765;}
	if(!(type_of((V111))==t_cons||((V111))==Cnil)){
	goto T765;}
	if(!((length((V111)))==(2))){
	goto T765;}
	base[4]= VV[185];
	base[5]= VV[186];
	base[7]= (V108);
	base[8]= VV[52];
	base[9]= VV[27];
	base[10]= VV[36];
	{object V112;
	V112= (V111);
	 vs_top=base+11;
	 while(V112!=Cnil)
	 {vs_push((V112)->c.c_car);V112=(V112)->c.c_cdr;}
	vs_base=base+8;}
	super_funcall_no_event(base[7]);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk264)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk248)();
	return;
T765:;
	base[3]= print((V111),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for SCROLL-SET-FIX-XREF-CLOSURE	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]=MMcons(Cnil,base[1]);
	base[3]= 
	make_cclosure_new(LC25,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for FIX-XREF	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	bds_check;
	{register object V113;
	V113=(base[0]);
	vs_top=sup;
TTL:;
	{object V114;
	V114= Cnil;
	if(((VV[187]->s.s_dbind))!=Cnil){
	goto T783;}
	{register object V115;
	register object V116;
	object V117;
	bds_bind(VV[187],Ct);
	V115= VV[188];
	V116= (
	(type_of((V113)) == t_sfun ?(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V113))==t_vfun) ?
	(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.fun=((V113)),fcalln))(VV[155],VV[189],VV[27],VV[36]));
	V117= (
	(type_of((V113)) == t_sfun ?(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.argd=4,type_of((V113))==t_vfun) ?
	(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.fun=((V113)),fcalln))(VV[155],VV[190],VV[27],VV[36]));
	base[4]= VV[191];
	base[6]= VV[135];
	base[7]= VV[192];
	base[8]= (V116);
	base[9]= VV[27];
	base[10]= VV[36];
	vs_top=(vs_base=base+6)+5;
	super_funcall_no_event((V113));
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk246)();
	vs_top=sup;
	V118= vs_base[0];
	if((fix(V118))>=(0)){
	goto T788;}
	V114= (
	(type_of((V113)) == t_sfun ?(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.argd=7,type_of((V113))==t_vfun) ?
	(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.fun=((V113)),fcalln))(VV[135],VV[194],VV[195],(V116),(V117),VV[27],VV[36]));
	if(equal(VV[193],(V114))){
	goto T789;}
T788:;
	if(((V114))==Cnil){
	goto T802;}
	base[4]= (V114);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk265)();
	vs_top=sup;
	V119= vs_base[0];
	V116= CMPcar(V119);
T802:;
	{register object V120;
	register object V121;
	register object V122;
	V120= (
	(type_of((V113)) == t_sfun ?(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V113))==t_vfun) ?
	(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.fun=((V113)),fcalln))(VV[52],(V116),(V117),VV[27],VV[36]));
	V121= small_fixnum(0);
	V122= Cnil;
T811:;
	base[4]= (V115);
	base[5]= (V120);
	base[6]= (V121);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk246)();
	vs_top=sup;
	V123= vs_base[0];
	if(!((fix(V123))>=(0))){
	goto T814;}
	goto T813;
T814:;
	goto T812;
T813:;
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	V124= vs_base[0];
	if(!((fix(V124))>=(0))){
	goto T823;}
	V122= small_fixnum(1);
	goto T821;
T823:;
	base[4]= small_fixnum(2);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	V125= vs_base[0];
	if(!((fix(V125))>=(0))){
	goto T828;}
	V122= small_fixnum(2);
	goto T821;
T828:;
	V122= small_fixnum(3);
T821:;
	base[4]= (V122);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	V126= vs_base[0];
	base[4]= (V122);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V127= vs_base[0];
	(void)((
	(type_of((V113)) == t_sfun ?(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.argd=17,type_of((V113))==t_vfun) ?
	(*(object (*)())(((V113))->sfn.sfn_self)):
	(fcall.fun=((V113)),fcalln))(VV[135],VV[79],VV[196],(V116),VV[183],VV[197],VV[183],V126,VV[183],VV[198],(V116),VV[183],VV[199],VV[183],V127,VV[183],VV[200])));
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V121= vs_base[0];
	goto T811;
T812:;
	goto T808;
	goto T808;}
T808:;
	base[4]= VV[135];
	base[5]= VV[201];
	base[6]= VV[202];
	base[7]= (V116);
	base[8]= (V117);
	vs_top=(vs_base=base+4)+5;
	super_funcall_no_event((V113));
	bds_unwind1;
	return;
T789:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;}
T783:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for INSERT-FONTIFIED	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{register object V128;
	object V129;
	object V130;
	object V131;
	V128=(base[0]);
	V129=(base[1]);
	V130=(base[2]);
	V131=(base[3]);
	vs_top=sup;
TTL:;
	base[4]= (V128);
	base[5]= (V129);
	base[6]= (V130);
	base[7]= (V131);
	base[8]= VV[203];
	base[9]= VV[204];
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk268)();
	vs_top=sup;
	(void)((
	(type_of((V128)) == t_sfun ?(*(object (*)())(((V128))->sfn.sfn_self)):
	(fcall.argd=5,type_of((V128))==t_vfun) ?
	(*(object (*)())(((V128))->sfn.sfn_self)):
	(fcall.fun=((V128)),fcalln))(VV[135],VV[79],VV[205],VV[206],VV[207])));
	base[4]= (V128);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk269)();
	vs_top=sup;
	base[4]= (V128);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk270)();
	return;
	}
}
/*	function definition for SECTION-HEADER	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V132;
	object V133;
	object V134;
	V132=(base[0]);
	V133=(base[1]);
	V134=(base[2]);
	vs_top=sup;
TTL:;
	{register object V135;
	V135= CMPcar((V134));
	base[4]= (V132);
	base[5]= (V133);
	base[7]= small_fixnum(0);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= (V135);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk271)();
	vs_top=sup;
	(void)((
	(type_of((V132)) == t_sfun ?(*(object (*)())(((V132))->sfn.sfn_self)):
	(fcall.argd=3,type_of((V132))==t_vfun) ?
	(*(object (*)())(((V132))->sfn.sfn_self)):
	(fcall.fun=((V132)),fcalln))(VV[23],VV[133],VV[208])));
	base[4]= (V135);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V139= vs_base[0];
	V140 = CMPmake_fixnum((fix(V139))+(2));
	V141= aref1((V133),fix(V140));
	{register object x= /* INLINE-ARGS */V141,V138= VV[209];
	while(V138!=Cnil)
	if(eql(x,V138->c.c_car->c.c_car) &&V138->c.c_car != Cnil){
	V137= (V138->c.c_car);
	goto T867;
	}else V138=V138->c.c_cdr;
	V137= Cnil;}
T867:;
	V142= CMPcdr(V137);
	base[4]= (V135);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V143= vs_base[0];
	base[4]= (V135);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	V144= vs_base[0];
	V145 = CMPmake_fixnum((fix(V143))-((fix(V144))+(-1)));
	(void)((
	(type_of((V132)) == t_sfun ?(*(object (*)())(((V132))->sfn.sfn_self)):
	(fcall.argd=9,type_of((V132))==t_vfun) ?
	(*(object (*)())(((V132))->sfn.sfn_self)):
	(fcall.fun=((V132)),fcalln))(VV[135],VV[79],/* INLINE-ARGS */V142,VV[210],VV[183],V145,VV[183],VV[211],VV[212])));
	{int V146;
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V147= vs_base[0];
	base[4]= (V135);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V148= vs_base[0];
	V146= ((fix(V147))-(fix(V148)))-(1);
	if(!((V146)>=(0))){
	goto T880;}
	base[4]= VV[23];
	base[5]= VV[133];
	base[7]= CMPmake_fixnum(V146);
	vs_top=(vs_base=base+7)+1;
	Lmake_string();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	super_funcall_no_event((V132));
	return;
T880:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	function definition for INSERT-STRING	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V149;
	object V150;
	object V151;
	object V152;
	V149=(base[0]);
	V150=(base[1]);
	V151=(base[2]);
	V152=(base[3]);
	vs_top=sup;
TTL:;
	if(number_compare((V152),(V151))>0){
	goto T886;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
T886:;
	{object V153;
	base[4]= number_minus((V152),(V151));
	base[5]= VV[213];
	base[6]= VV[214];
	base[7]= VV[215];
	base[8]= (V150);
	base[9]= VV[216];
	base[10]= (V151);
	vs_top=(vs_base=base+4)+7;
	(void) (*Lnk272)();
	vs_top=sup;
	V153= vs_base[0];
	base[4]= VV[23];
	base[5]= VV[133];
	base[6]= (V153);
	vs_top=(vs_base=base+4)+3;
	super_funcall_no_event((V149));
	return;}
	}
}
/*	function definition for INSERT-STRING-WITH-REGEXP	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	bds_check;
	{register object V154;
	object V155;
	register int V156;
	int V157;
	object V158;
	object V159;
	V154=(base[0]);
	V155=(base[1]);
	V156=fix(base[2]);
	V157=fix(base[3]);
	V158=(base[4]);
	V159=(base[5]);
	vs_top=sup;
TTL:;
	{register int V160;
	register object V161;
	V160= 0;
	V161= Cnil;
	bds_bind(VV[218],(V154));
	bds_bind(VV[217],Cnil);
T903:;
	base[8]= (V158);
	base[9]= (V155);
	base[10]= CMPmake_fixnum(V156);
	base[11]= CMPmake_fixnum(V157);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk246)();
	vs_top=sup;
	V162= vs_base[0];
	if(!((fix(V162))>=(0))){
	goto T906;}
	goto T905;
T906:;
	goto T904;
T905:;
	V160= 1;
	V161= Cnil;
T919:;
	if(!((V160)<(10))){
	goto T922;}
	goto T921;
T922:;
	goto T917;
T921:;
	base[8]= CMPmake_fixnum(V160);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	V163= vs_base[0];
	if(!((fix(V163))>=(0))){
	goto T924;}
	V165 = CMPmake_fixnum(V160);
	{register object x= V165,V164= (V159);
	while(V164!=Cnil)
	if(eql(x,V164->c.c_car->c.c_car) &&V164->c.c_car != Cnil){
	V161= (V164->c.c_car);
	goto T930;
	}else V164=V164->c.c_cdr;
	V161= Cnil;}
T930:;
	goto T917;
T924:;
	V160= (V160)+(1);
	goto T919;
T917:;
	base[8]= CMPcadr((V161));
	vs_top=(vs_base=base+8)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T935;}
	base[8]= (V154);
	base[9]= (V155);
	base[10]= CMPmake_fixnum(V156);
	base[12]= small_fixnum(0);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk271)();
	vs_top=sup;
	(void)((
	V166 = CMPcadr((V161)),
	(type_of(V166) == t_sfun ?(*(object (*)())((V166)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V166)==t_vfun) ?
	(*(object (*)())((V166)->sfn.sfn_self)):
	(fcall.fun=(V166),fcalln))((V154),(V155),(V161))));
	goto T933;
T935:;
	if(!(type_of(CMPcadr((V161)))==t_string)){
	goto T945;}
	base[8]= (V154);
	base[9]= (V155);
	base[10]= CMPmake_fixnum(V156);
	base[12]= small_fixnum(0);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk271)();
	vs_top=sup;
	{register object V167;
	register object V168;
	V167= CMPcdr((V161));
	V168= CMPcar((V167));
T956:;
	if(!(((V167))==Cnil)){
	goto T957;}
	goto T933;
T957:;
	base[10]= small_fixnum(0);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V169= vs_base[0];
	base[10]= CMPmake_fixnum(V160);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk266)();
	vs_top=sup;
	V170= vs_base[0];
	V171 = CMPmake_fixnum((fix(V169))-(fix(V170)));
	base[10]= small_fixnum(0);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V172= vs_base[0];
	base[10]= CMPmake_fixnum(V160);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V173= vs_base[0];
	V174 = CMPmake_fixnum((fix(V172))-(fix(V173)));
	(void)((
	(type_of((V154)) == t_sfun ?(*(object (*)())(((V154))->sfn.sfn_self)):
	(fcall.argd=13,type_of((V154))==t_vfun) ?
	(*(object (*)())(((V154))->sfn.sfn_self)):
	(fcall.fun=((V154)),fcalln))(VV[135],VV[79],(V168),VV[219],VV[183],V171,VV[183],VV[220],VV[221],VV[183],V174,VV[183],VV[222])));
	V167= CMPcdr((V167));
	V168= CMPcar((V167));
	goto T956;}
T945:;
	base[8]= VV[223];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk244)();
	vs_top=sup;
T933:;
	base[8]= small_fixnum(0);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk267)();
	vs_top=sup;
	V156= fix(vs_base[0]);
	if(!((V156)<=(V157))){
	goto T980;}
	goto T979;
T980:;
	base[8]= VV[224];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
T979:;
	goto T903;
T904:;
	goto T901;
	goto T901;
T901:;
	base[8]= (V154);
	base[9]= (V155);
	base[10]= CMPmake_fixnum(V156);
	base[11]= CMPmake_fixnum(V157);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk271)();
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for COUNT-CHAR	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register unsigned char V175;
	register object V176;
	register int V177;
	register int V178;
	V175=char_code(base[0]);
	V176=(base[1]);
	V177=fix(base[2]);
	V178=fix(base[3]);
	vs_top=sup;
TTL:;
	{register int V179;
	V179= 0;
T991:;
	if(!((V177)<(V178))){
	goto T994;}
	goto T993;
T994:;
	goto T992;
T993:;
	if(!((((V176))->ust.ust_self[V177])==(V175))){
	goto T996;}
	V179= (V179)+(1);
T996:;
	V177= (V177)+(1);
	goto T991;
T992:;
	goto T989;
	goto T989;
T989:;
	base[4]= CMPmake_fixnum(V179);
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for START-OF-ITH-LINE	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register int V180;
	register object V181;
	register int V182;
	register int V183;
	V180=fix(base[0]);
	V181=(base[1]);
	V182=fix(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T1003;}
	V183=fix(base[3]);
	vs_top=sup;
	goto T1004;
T1003:;
	V183= -1;
T1004:;
	if(!((V183)<(0))){
	goto T1006;}
	V183= ((V181))->v.v_fillp;
T1006:;
	if(!((V180)==(1))){
	goto T1011;}
	base[4]= CMPmake_fixnum(V182);
	vs_top=(vs_base=base+4)+1;
	return;
T1011:;
	V180= (V180)-(1);
T1017:;
	if(!((V182)<(V183))){
	goto T1020;}
	goto T1019;
T1020:;
	goto T1018;
T1019:;
	{register object V184;
	V184= code_char(((V181))->ust.ust_self[V182]);
	if(type_of((V184))==t_character){
	goto T1027;}
	goto T1024;
T1027:;
	if(!(((10))==((char_code((V184)))))){
	goto T1024;}}
	V180= (V180)-(1);
	V182= (V182)+(1);
	if(!((V180)<=(0))){
	goto T1022;}
	base[4]= CMPmake_fixnum(V182);
	vs_top=(vs_base=base+4)+1;
	return;
T1024:;
	V182= (V182)+(1);
T1022:;
	goto T1017;
T1018:;
	goto T1015;
	goto T1015;
T1015:;
	base[4]= CMPmake_fixnum(V182);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for INDEX-TO-POSITION	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V185;
	object V186;
	int V187;
	int V188;
	V185=(base[0]);
	V186=(base[1]);
	V187=fix(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T1037;}
	V188=fix(base[3]);
	vs_top=sup;
	goto T1038;
T1037:;
	V188= -1;
T1038:;
	{int V189;
	V189= 0;
	if(!((V188)<(0))){
	goto T1041;}
	V188= ((V186))->v.v_fillp;
T1041:;
	{int V190;
	int V191;
	base[4]= (V185);
	base[5]= small_fixnum(0);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk273)();
	vs_top=sup;
	V190= fix(vs_base[0]);
	base[4]= (V185);
	base[6]= VV[225];
	base[7]= (V185);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V192= vs_base[0];
	base[5]= number_plus(small_fixnum(1),V192);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk273)();
	vs_top=sup;
	V191= fix(vs_base[0]);
	base[4]= CMPmake_fixnum(V190);
	base[5]= (V186);
	base[6]= CMPmake_fixnum(V187);
	base[7]= CMPmake_fixnum(V188);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk275)();
	vs_top=sup;
	V189= fix(vs_base[0]);
	V193 = CMPmake_fixnum(V189);
	V194 = CMPmake_fixnum(V191);
	V195= list(2,V193,V194);
	(void)(print(/* INLINE-ARGS */V195,Cnil));
	V196 = CMPmake_fixnum(V189);
	V197 = CMPmake_fixnum(V191);
	base[4]= number_plus(V196,V197);
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V198;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V198=(base[0]);
	vs_top=sup;
	if(!(equal((V198),(base0[0]->c.c_car)))){
	goto T1061;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
T1061:;
	(base0[0]->c.c_car)= (V198);
	base[1]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk269)();
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= VV[168];
	{object V199;
	V199= (V198);
	 vs_top=base+3;
	 while(V199!=Cnil)
	 {vs_push((V199)->c.c_car);V199=(V199)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	}
}
/*	local function CLOSURE	*/

static LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	base[0]= (base0[0]->c.c_car);
	base[4]= (base0[1]->c.c_car);
	base[5]= VV[45];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[52];
	base[5]= VV[27];
	base[6]= VV[36];
	vs_top=(vs_base=base+4)+3;
	super_funcall_no_event(base[3]);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	return;
}
/*	local function CLOSURE	*/

static LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
	base[2]= VV[35];
	base[3]= VV[27];
	base[4]= VV[36];
	vs_top=(vs_base=base+2)+3;
	super_funcall_no_event((base0[0]->c.c_car));
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk273)();
	vs_top=sup;
	V200= vs_base[0];
	{object V202 =((base0[0]->c.c_car))->s.s_plist;
	 object ind= VV[21];
	while(V202!=Cnil){
	if(V202->c.c_car==ind){
	V201= (V202->c.c_cdr->c.c_car);
	goto T1087;
	}else V202=V202->c.c_cdr->c.c_cdr;}
	V201= Cnil;}
T1087:;
	base[0]= nth(fix(V200),V201);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk248)();
	return;
}
static LnkT276(){ call_or_link(VV[276],&Lnk276);} /* INFO-AUX */
static LnkT275(){ call_or_link(VV[275],&Lnk275);} /* START-OF-ITH-LINE */
static LnkT274(){ call_or_link(VV[274],&Lnk274);} /* POSITION */
static LnkT273(){ call_or_link(VV[273],&Lnk273);} /* ATOI */
static LnkT272(){ call_or_link(VV[272],&Lnk272);} /* MAKE-ARRAY */
static LnkT271(){ call_or_link(VV[271],&Lnk271);} /* INSERT-STRING */
static LnkT270(){ call_or_link(VV[270],&Lnk270);} /* END-WAITING */
static LnkT269(){ call_or_link(VV[269],&Lnk269);} /* FIX-XREF */
static LnkT268(){ call_or_link(VV[268],&Lnk268);} /* INSERT-STRING-WITH-REGEXP */
static LnkT267(){ call_or_link(VV[267],&Lnk267);} /* MATCH-END */
static LnkT266(){ call_or_link(VV[266],&Lnk266);} /* MATCH-BEGINNING */
static LnkT265(){ call_or_link(VV[265],&Lnk265);} /* LIST-STRING */
static LnkT264(){ call_or_link(VV[264],&Lnk264);} /* NSUBSTITUTE */
static LnkT263(){ call_or_link(VV[263],&Lnk263);} /* GET_TAG_RANGE */
static LnkT262(){ call_or_link(VV[262],&Lnk262);} /* INSERT-STANDARD-LISTBOX */
static LnkT261(){ call_or_link(VV[261],&Lnk261);} /* INSERT-FONTIFIED */
static LnkT260(){ call_or_link(VV[260],&Lnk260);} /* MKINFO */
static LnkT259(){ call_or_link(VV[259],&Lnk259);} /* PRINT-NODE */
static LnkT258(){ call_or_link(VV[258],&Lnk258);} /* INFO-NODE-FROM-POSITION */
static LnkT257(){ call_or_link(VV[257],&Lnk257);} /* INFO-SEARCH */
static LnkT256(){ call_or_link(VV[256],&Lnk256);} /* NODE-OFFSET */
static LnkT255(){ call_or_link(VV[255],&Lnk255);} /* INDEX-TO-POSITION */
static LnkT254(){ call_or_link(VV[254],&Lnk254);} /* TK-ERROR */
static LnkT253(){ call_or_link(VV[253],&Lnk253);} /* SCROLL-SET-FIX-XREF-CLOSURE */
static LnkT252(){ call_or_link(VV[252],&Lnk252);} /* TEXT */
static LnkT251(){ call_or_link(VV[251],&Lnk251);} /* MENU */
static LnkT250(){ call_or_link(VV[250],&Lnk250);} /* MENUBUTTON */
static LnkT249(){ call_or_link(VV[249],&Lnk249);} /* WM */
static LnkT40(){ call_or_link(VV[40],&Lnk40);} /* DESTROY */
static LnkT248(){ call_or_link(VV[248],&Lnk248);} /* SHOW-INFO */
static LnkT247(){ call_or_link(VV[247],&Lnk247);} /* GET-MATCH */
static LnkT246(){ call_or_link(VV[246],&Lnk246);} /* STRING-MATCH */
static LnkT245(){ call_or_link(VV[245],&Lnk245);} /* STRING-CONCATENATE */
static LnkT244(){ call_or_link(VV[244],&Lnk244);} /* INFO-ERROR */
static LnkT243(){ call_or_link(VV[243],&Lnk243);} /* OFFER-CHOICES */
static LnkT54(){ call_or_link(VV[54],&Lnk54);} /* FOCUS */
static LnkT242(){ call_or_link(VV[242],&Lnk242);} /* RAISE */
static LnkT241(){ call_or_link(VV[241],&Lnk241);} /* ENTRY */
static LnkT240(){ call_or_link(VV[240],&Lnk240);} /* LABEL */
static LnkT239(){ call_or_link(VV[239],&Lnk239);} /* BUTTON */
static LnkT238(){ call_or_link(VV[238],&Lnk238);} /* BIND */
static LnkT237(){ call_or_link(VV[237],&Lnk237);} /* INSERT-INFO-CHOICES */
static LnkT236(){ call_or_link(VV[236],&Lnk236);} /* SIMPLE-LISTBOX */
static LnkT235(){ call_or_link(VV[235],&Lnk235);} /* TOPLEVEL */
static LnkT234(){ call_or_link(VV[234],&Lnk234);} /* NEW-WINDOW */
static LnkT233(){ call_or_link(VV[233],&Lnk233);} /* TYPE-ERROR */
static LnkT232(){ call_or_link(VV[232],&Lnk232);} /* WINFO */
static LnkT231(){ call_or_link(VV[231],&Lnk231);} /* PACK */
static LnkT230(){ call_or_link(VV[230],&Lnk230);} /* LISTBOX */
static LnkT229(){ call_or_link(VV[229],&Lnk229);} /* SCROLLBAR */
static LnkT228(){ call_or_link(VV[228],&Lnk228);} /* TK-CONC */
static LnkT227(){ call_or_link(VV[227],&Lnk227);} /* FRAME */
static LnkT226(){ call_or_link(VV[226],&Lnk226);} /* CONC */
