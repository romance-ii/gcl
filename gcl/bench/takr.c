#define SGC

#define EXTER extern
/* h/gclincl.h.  Generated automatically by configure.  */
/* h/gclincl.h.in.  Generated automatically from configure.in by autoheader 2.13.  */

/* Define if you have alloca, as a function or macro.  */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
/* #undef HAVE_ALLOCA_H */

/* Define if the X Window System is missing or not being used.  */
/* #undef X_DISPLAY_MISSING */

#define DBEGIN 0x0

#define MAXPAGE 262144
#define VSSIZE 131072
#define BDSSIZE 2048
#define IHSSIZE 4096
#define FRSSIZE 4096
#define CSSIZE 1073741824

#define HOLEDIV 4

/* #undef NO_GETTOD */

/* define if have struct sigcontext in one of above */
/* #undef HAVE_SIGCONTEXT */

/* define if we can use the file nsocket.c   */
#define HAVE_NSOCKET 1  

#ifndef HAVE_ALLOCA
/* define this if you have alloca */
#define HAVE_ALLOCA 1 
#endif

/* define if need alloca.h */
#define NEED_ALLOCA_H 1

#ifdef NEED_ALLOCA_H
#include <alloca.h>
#endif

/* define LISTEN_USE_FCNTL  if we can check for input using fcntl */
#define LISTEN_USE_FCNTL 1

/* if signal.h alone contains the stuff necessary for sgc */
#define SIGNAL_H_HAS_SIGCONTEXT 1

/* define if the profil system call is not defined in libc */
/* #undef NO_PROFILE */ 

/* define if the _cleanup() function exists and should be called
   before saving */
/* #define USE_CLEANUP  */

/* define if BIG_ENDIAN or LITTLE_ENDIAN is defined by including
   the standard includes */
/* #define ENDIAN_ALREADY_DEFINED */

/* define if SV_ONSTACK is defined in signal.h */
#define HAVE_SV_ONSTACK 1 

#define CSTACK_ADDRESS 0xbfffffff
#define CSTACK_DIRECTION -1
#define CSTACK_ALIGNMENT 16
#define MEM_TOP 0xc0000000
#define MEM_RANGE 0x20000000
#define SHARED_LIB_HEAP_CEILING 0x40000000
#define IM_FIX_BASE 0xc0000000
#define IM_FIX_LIM 0x20000000

#define HAVE_SIGSYS 1

/* #undef HAVE_SIGEMT */

/* define if setenv  is define */
#define HAVE_SETENV 1

/* define if putenv  is define */
/* #undef HAVE_PUTENV */

#define HAVE_LONG_LONG 1

/* define if want to use GMP */
#define GMP 1

/* have a broken version of C compiler which makes bad code for -O4 */
/* #undef BROKEN_O4_OPT */ 

/*  See if gettimeofday is declared in the <sys/time.h> header file. */
/*  if not, set the GETTOD_NOT_DECLARED flag so that tclPort.h can */
/*  declare it. */

/* #undef GETTOD_NOT_DECLARED */

/* #undef HAVE_BSDGETTIMEOFDAY */

/* #undef NO_UNAME */

/*  FIONBIO vs. O_NONBLOCK for nonblocking I/O */
/* #undef USE_FIONBIO */

/* readline support */
#define HAVE_READLINE 1

/* bfd support */
#define HAVE_LIBBFD 1
/* #undef NEED_CONST */
#define HAVE_BFD_BOOLEAN 1

#ifdef HAVE_BFD_BOOLEAN
#define MY_BFD_BOOLEAN bfd_boolean
#define MY_BFD_FALSE FALSE
#define MY_BFD_TRUE TRUE
#else
#define MY_BFD_BOOLEAN boolean
#define MY_BFD_FALSE false
#define MY_BFD_TRUE true
#endif
/* isnormal check */
#define HAVE_ISNORMAL 1

/* #undef HAVE_IEEEFP */

#ifdef IN_NUM_CO
#ifdef HAVE_ISNORMAL
#define __USE_ISOC99 1
#include <math.h>
#define ISNORMAL(a) isnormal(a)
#else
#ifdef HAVE_IEEEFP
#include <ieeefp.h>
#define ISNORMAL(a) (fpclass(a)>=FP_NZERO)
#else
#include <math.h>
#define ISNORMAL(a) ((sizeof (a) == sizeof (float)) ? \
       gcl_isnormal_float(a) : \
       gcl_isnormal_double(a))
#endif
#endif
#endif

#define HAVE_ISFINITE 1
/* #undef HAVE_FINITE */

#ifdef NEED_ISFINITE
#ifdef HAVE_ISFINITE
#define __USE_ISOC99 1
#include <math.h>
#define ISFINITE(a) isfinite(a)
#else
#ifdef HAVE_FINITE
#include <math.h>
#include <ieeefp.h>
#define ISFINITE(a) finite(a)
#else
#error "No isfinite found"
#endif
#endif
#endif

#define HAVE_VALUES_H 1
#define HAVE_FLOAT_H 1

#ifdef IN_NUM_CO
#ifdef HAVE_VALUES_H
#include <values.h>
#endif
#ifdef HAVE_FLOAT_H
#include <float.h>
#endif
#endif

/* math.h for definitions in generated C code */
#define HAVE_MATH_H 1

#ifdef HAVE_MATH_H
#include <math.h>
#endif

#define LITTLE_END 1

#define PAGEWIDTH 12

/*  #ifdef PAGEWIDTH */
/*  #undef PAGESIZE */
/*  #define PAGESIZE (1<<PAGEWIDTH) */
/*  #endif */

#define SIZEOF_LONG 4
#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_CHAR 1
#define CHAR_SIZE 8

/* #undef USE_DLOPEN */

#define MP_LIMB_BYTES 4

/* #undef ANSI_COMMON_LISP */

/* #undef __SHORT_LIMB */
/* #undef __LONG_LONG_LIMB */

/* #undef HAVE_JAPI_H */

/* #undef HAVE_XDR */
/* #undef ENDIAN_ALREADY_DEFINED */
/* #undef USE_CLEANUP */
#define SIZEOF_CONTBLOCK 8

/* #undef GCL_GPROF */
#define HAVE_DECL_RL_COMPLETION_MATCHES 1
#define HAVE_RL_COMPENTRY_FUNC_T 1
#define HAVE_GNU_LD 1
/* #undef NEED_NONRANDOM_SBRK */
#define HOST_CPU "I686"
#define HOST_KERNEL "LINUX"
#define HOST_SYSTEM "GNU"
/* #undef GCL_GPROF_START */
#define HZ 100

#define TYPE_BITS 0xff09
#define OBJ_ALIGN __attribute__ ((aligned (8)))
#define NEG_CSTACK_ADDRESS 1

/* The number of bytes in a char.  */
#define SIZEOF_CHAR 1

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getwd function.  */
#define HAVE_GETWD 1

/* Define if you have the <asm/sigcontext.h> header file.  */
#define HAVE_ASM_SIGCONTEXT_H 1

/* Define if you have the <asm/signal.h> header file.  */
#define HAVE_ASM_SIGNAL_H 1

/* Define if you have the <elf.h> header file.  */
#define HAVE_ELF_H 1

/* Define if you have the <elf_abi.h> header file.  */
/* #undef HAVE_ELF_ABI_H */

/* Define if you have the <endian.h> header file.  */
#define HAVE_ENDIAN_H 1

/* Define if you have the <float.h> header file.  */
#define HAVE_FLOAT_H 1

/* Define if you have the <japi.h> header file.  */
/* #undef HAVE_JAPI_H */

/* Define if you have the <math.h> header file.  */
#define HAVE_MATH_H 1

/* Define if you have the <readline/readline.h> header file.  */
#define HAVE_READLINE_READLINE_H 1

/* Define if you have the <rpc/rpc.h> header file.  */
/* #undef HAVE_RPC_RPC_H */

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <values.h> header file.  */
#define HAVE_VALUES_H 1
#include <stdarg.h>
#define _VA_LIST_DEFINED

#include <setjmp.h>
#include <stdio.h>

/*  #define	endp(obje)	endp1(obje) */
			   
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

  
#ifdef __SHORT_LIMB
typedef unsigned int		mp_limb_t;
#else
#ifdef __LONG_LONG_LIMB
typedef unsigned long long int	mp_limb_t;
#else
typedef unsigned long int	mp_limb_t;
#endif
#endif

typedef mp_limb_t *		mp_ptr;

typedef struct
{
  int _mp_alloc;		/* Number of *limbs* allocated and pointed
				   to by the _mp_d field.  */
  int _mp_size;			/* abs(_mp_size) is the number of limbs the
				   last field points to.  If _mp_size is
				   negative this is a negative number.  */
  mp_limb_t *_mp_d;		/* Pointer to the limbs.  */
} __mpz_struct;

typedef __mpz_struct MP_INT;
typedef __mpz_struct * mpz_t;

/* Available random number generation algorithms.  */
typedef enum
{
  GMP_RAND_ALG_DEFAULT = 0,
  GMP_RAND_ALG_LC = GMP_RAND_ALG_DEFAULT /* Linear congruential.  */
} gmp_randalg_t;

/* Linear congruential data struct.  */
typedef struct {
  mpz_t _mp_a;			/* Multiplier. */
  unsigned long int _mp_c;	/* Adder. */
  mpz_t _mp_m;			/* Modulus (valid only if m2exp == 0).  */
  unsigned long int _mp_m2exp;	/* If != 0, modulus is 2 ^ m2exp.  */
} __gmp_randata_lc;

/* Random state struct.  */
typedef struct
{
  mpz_t _mp_seed;		/* Current seed.  */
  gmp_randalg_t _mp_alg;	/* Algorithm used.  */
  union {			/* Algorithm specific data.  */
    __gmp_randata_lc *_mp_lc;	/* Linear congruential.  */
  } _mp_algdata;
} __gmp_randstate_struct;
typedef __gmp_randstate_struct gmp_randstate_t[1];
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

#define TRUE   1   /*  boolean true value  */
#define FALSE  0   /*  boolean false value  */


typedef long long              lfixnum;
typedef unsigned long long    ulfixnum;

typedef long           fixnum;
typedef unsigned long ufixnum;

#if 2 * SIZEOF_INT == SIZEOF_LONG
typedef int             hfixnum;
typedef unsigned int   uhfixnum;
#elif 2 * SIZEOF_SHORT == SIZEOF_LONG
typedef short           hfixnum;
typedef unsigned short uhfixnum;
#else
#error No hfixnum size detected
#endif

#if 4 * SIZEOF_SHORT == SIZEOF_LONG
typedef short           qfixnum;
typedef unsigned short uqfixnum;
#elif 4 * SIZEOF_CHAR == SIZEOF_LONG
typedef char            qfixnum;
typedef unsigned char  uqfixnum;
#else
#error No qfixnum size detected
#endif

#if SIZEOF_LONG < 8
#define SPAD object pad
#else
#define SPAD
#endif

#if SIZEOF_LONG == 4
#define FILL_BITS 16
#elif SIZEOF_LONG == 8
#define FILL_BITS 48
#else
#error Cannot calculate FILL_BITS
#endif

#ifdef LITTLE_END

#define FIRSTWORD fixnum e:1,m:1,f:1,s:1,z:4,t:8,w:FILL_BITS
#define MARKWORD  fixnum e:1,mf:2,   s:1,z:4,t:8,w:FILL_BITS
#define SGCMWORD  fixnum e:1,mfs:3,      z:4,t:8,w:FILL_BITS
#define TYPEWORD  fixnum emf:3,      s:1,z:4,t:8,w:FILL_BITS

#else

#define FIRSTWORD fixnum w:FILL_BITS,t:8,z:4,s:1,f:1,m:1,e:1
#define MARKWORD  fixnum w:FILL_BITS,t:8,z:4,s:1,mf:2,   e:1
#define SGCMWORD  fixnum w:FILL_BITS,t:8,z:4,mfs:3,      e:1
#define TYPEWORD  fixnum w:FILL_BITS,t:8,z:4,s:1,emf:3

#endif

#define NOT_OBJECT_ALIGNED(a_) fobj(a_)->td.emf

#ifndef PAGEWIDTH
#define PAGEWIDTH 11
#endif
#undef PAGESIZE
#define PAGESIZE (1 << PAGEWIDTH) /*  page size in bytes  */


#define CHCODELIM  256            /*  character code limit  */
                                  /*  ASCII character set  */
#define CHFONTLIM    1            /*  character font limit  */
#define CHBITSLIM    1            /*  character bits limit  */
#define CHCODEFLEN   8            /*  character code field length  */
#define CHFONTFLEN   0            /*  character font field length  */
#define CHBITSFLEN   0            /*  character bits field length  */

#define ARANKLIM 64               /*  array rank limit  */
#define RTABSIZE CHCODELIM        /*  read table size  */

#ifndef CHAR_SIZE
#define CHAR_SIZE  8              /* number of bits in a char */
#endif

#undef bool
typedef int bool;

typedef float  shortfloat;
typedef double longfloat;

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

union int_object {
  object o; 
  fixnum i;
};
typedef union int_object iobject;

/*
 OBJect NULL value.
 It should not coincide with any legal object value.
*/
#define OBJNULL  ((object)NULL)

/*
 Definition of each implementation type.
*/

struct fixnum_struct {

  FIRSTWORD;
  fixnum FIXVAL;  /*  fixnum value  */

};

#if defined (IM_FIX_BASE) && defined(IM_FIX_LIM)
#define      make_imm_fixnum(a_)        ((object)((a_)+(IM_FIX_BASE+(IM_FIX_LIM>>1))))
#define       fix_imm_fixnum(a_)        (((fixnum)(a_))-(IM_FIX_BASE+(IM_FIX_LIM>>1)))
#define      mark_imm_fixnum(a_)        ((a_)=((object)(((fixnum)(a_)) | IM_FIX_LIM)))
#define    unmark_imm_fixnum(a_)        ((a_)=((object)(((fixnum)(a_)) &~ IM_FIX_LIM)))
#define        is_imm_fixnum(a_)        (((ufixnum)(a_))>=IM_FIX_BASE)
#define is_marked_imm_fixnum(a_)        (((fixnum)(a_))&IM_FIX_LIM)
#define           is_imm_fix(a_)        (!(((a_)+(IM_FIX_LIM>>1))&-IM_FIX_LIM))
#define        un_imm_fixnum(a_)        ((a_)=((object)(((fixnum)(a_))&~(IM_FIX_BASE))))
#else
#define      make_imm_fixnum(a_)        make_fixnum1(a_)
#define       fix_imm_fixnum(a_)        ((a_)->FIX.FIXVAL)
#define      mark_imm_fixnum(a_)        
#define    unmark_imm_fixnum(a_)        
#define        is_imm_fixnum(a_)        0
#define is_marked_imm_fixnum(a_)        0
#define           is_imm_fix(a_)        0
#define        un_imm_fixnum(a_)        
#endif

#define make_fixnum(a_)  ({register fixnum _q1=(a_);register object _q3;\
                          _q3=is_imm_fix(_q1) ? make_imm_fixnum(_q1) : make_fixnum1(_q1);_q3;})
#define fix(a_)          ({register object _q2=(a_);register fixnum _q4;\
                          _q4=is_imm_fixnum(_q2) ? fix_imm_fixnum(_q2) :  (_q2)->FIX.FIXVAL;_q4;})
#define Mfix(a_)         fix(a_)
#define small_fixnum(a_) make_fixnum(a_) /*make_imm_fixnum(a_)*/
#define set_fix(a_,b_)   ((a_)->FIX.FIXVAL=(b_))

#define Zcdr(a_)                 (*(object *)(a_))/* ((a_)->c.c_cdr) */ /*FIXME*/
#define fobj(a_)                 ((object)&(a_))
#define is_marked(a_)            (is_imm_fixnum(Zcdr(a_)) ? is_marked_imm_fixnum(Zcdr(a_)) : (a_)->d.m)
#define is_marked_or_free(a_)    (is_imm_fixnum(Zcdr(a_)) ? is_marked_imm_fixnum(Zcdr(a_)) : (a_)->md.mf)
#define mark(a_)                 if (is_imm_fixnum(Zcdr(a_))) mark_imm_fixnum(Zcdr(a_)); else (a_)->d.m=1
#define unmark(a_)               if (is_imm_fixnum(Zcdr(a_))) unmark_imm_fixnum(Zcdr(a_)); else (a_)->d.m=0
#define is_free(a_)              (!is_imm_fixnum(a_) && !is_imm_fixnum(Zcdr(a_)) && (a_)->d.f)
#define make_free(a_)            {*(fixnum *)(a_)&=TYPE_BITS;(a_)->d.f=1;}
#define make_unfree(a_)          {(a_)->d.f=0;}

#define is_cons(a_)              (is_imm_fixnum(Zcdr(a_)) || !(a_)->d.e)

struct shortfloat_struct {

  FIRSTWORD;

  shortfloat SFVAL; /*  shortfloat value  */

};
#define Msf(obje) (obje)->SF.SFVAL
#define sf(x) Msf(x)

struct longfloat_struct {

  FIRSTWORD;

  longfloat LFVAL; /*  longfloat value  */
  SPAD;

};
#define Mlf(obje) (obje)->LF.LFVAL
#define lf(x) Mlf(x)


struct bignum {

  FIRSTWORD;

  __mpz_struct big_mpz_t;  /*defined by gmp/mgmp.h*/

};

struct ratio {

  FIRSTWORD;

  object rat_den; /*  denominator  */
                  /*  must be an integer  */
  object rat_num; /*  numerator  */
                  /*  must be an integer  */
  SPAD;

};

struct complex {

  FIRSTWORD;

  object cmp_real; /*  real part  */
                   /*  must be a number  */
  object cmp_imag; /*  imaginary part  */
                   /*  must be a number  */
  SPAD;

};

struct character {

  FIRSTWORD;

  uhfixnum ch_code; /*  code  */
  uqfixnum ch_font; /*  font  */
  uqfixnum ch_bits; /*  bits  */

};

EXTER struct character character_table1[256+128] OBJ_ALIGN; /*FIXME, sync with char code constants above.*/
#define character_table (character_table1+128)
#define code_char(c)    (object)(character_table+(c))
#define char_code(obje) (obje)->ch.ch_code
#define char_font(obje) (obje)->ch.ch_font
#define char_bits(obje) (obje)->ch.ch_bits

enum stype {     /*  symbol type  */

  stp_ordinary,  /*  ordinary  */
  stp_constant,  /*  constant  */
  stp_special    /*  special  */

};

#define s_fillp  st_fillp
#define s_self   st_self

struct symbol {

  FIRSTWORD;

  void   (*s_sfdef)();  /*  special form definition  */
                        /*  This field coincides with c_car  */
  object   s_dbind;     /*  dynamic binding  */
  char    *s_self;      /*  print name  */
                        /*  These fields coincide with  */
                        /*  st_fillp and st_self.  */
  fixnum   s_fillp;     /*  print name length  */
  object   s_gfdef;     /*  global function definition  */
                        /*  For a macro,  */
                        /*  its expansion function  */
                        /*  is to be stored.  */
  object   s_plist;     /*  property list  */
  object   s_hpack;     /*  home package  */
                        /*  Cnil for uninterned symbols  */
  hfixnum  s_stype;     /*  symbol type  */
                        /*  of enum stype  */
  hfixnum  s_mflag;     /*  macro flag  */
  fixnum   s_hash;      /*  cached hash code */

};

EXTER char CnilCt[3*sizeof(struct symbol)] OBJ_ALIGN;

#define Cnil   ((object)(CnilCt))
#define Ct     ((object)((char *)Cnil+sizeof(struct symbol)))
#define Dotnil ((object)((char *)Ct+sizeof(struct symbol)))
#define sLnil Cnil
#define sLt Ct

#define NOT_SPECIAL  ((void (*)())Cnil)

struct package {

  FIRSTWORD;

  object          p_name;              /*  package name, a string  */
  object          p_nicknames;         /*  nicknames, list of strings  */
  object          p_shadowings;        /*  shadowing symbol list  */
  object          p_uselist;           /*  use-list of packages  */
  object          p_usedbylist;        /*  used-by-list of packages  */
  object         *p_internal;          /*  hashtable for internal symbols  */
  object         *p_external;          /*  hashtable for external symbols  */
  fixnum          p_internal_size;     /* size of internal hash table*/
  fixnum          p_external_size;     /* size of external hash table */
  fixnum          p_internal_fp;       /* [rough] number of symbols */
  fixnum          p_external_fp;       /* [rough]  number of symbols */
  struct package *p_link;              /*  package link  */
  SPAD;

};

/*
 The values returned by intern and find_symbol.
 File_symbol may return 0.
*/
#define INTERNAL 1
#define EXTERNAL 2
#define INHERITED 3

/*
 All the packages are linked through p_link.
*/
EXTER struct package *pack_pointer; /*  package pointer  */

struct cons {

  /*   FIRSTWORD; Two word cons, 20050609, CM */

  object c_cdr;  /*  cdr  */
  object c_car;  /*  car  */

};
/*FIXME, review handling of imm fix here*/
#define Scdr(a_) ({object _t=(a_)->c.c_cdr;unmark(fobj(_t));_t;})

enum httest {   /*  hash table key test function  */
  htt_eq,       /*  eq  */
  htt_eql,      /*  eql  */
  htt_equal     /*  equal  */
};

struct htent {      /*  hash table entry  */
  object hte_key;   /*  key  */
  object hte_value; /*  value  */
};

struct hashtable {           /*  hash table header  */

  FIRSTWORD;

  struct htent *ht_self;    /*  pointer to the hash table  */
  object        ht_rhsize;  /*  rehash size  */
  object        ht_rhthresh;/*  rehash threshold  */
  fixnum        ht_nent;    /*  number of entries  */
  fixnum        ht_size;    /*  hash table size  */
  hfixnum       ht_test;    /*  key test function  */
                            /*  of enum httest  */
  hfixnum       ht_pad;
  SPAD;

};

enum aelttype {   /*  array element type  */
 aet_object,      /*  t  */
 aet_ch,          /*  string-char  */
 aet_bit,         /*  bit  */
 aet_fix,         /*  fixnum  */
 aet_sf,          /*  short-float  */
 aet_lf,          /*  plong-float  */
 aet_char,        /* signed char */
 aet_uchar,       /* unsigned char */
 aet_short,       /* signed short */
 aet_ushort,      /*  unsigned short   */
 aet_last
};

struct array {           /*  array header  */

  FIRSTWORD;

  object  a_displaced;   /*  displaced  */
  hfixnum a_rank;        /*  array rank  */
  hfixnum a_elttype;     /*  element type  */
  object *a_self;        /*  pointer to the array  */
  hfixnum a_adjustable;  /*  adjustable flag  */
  hfixnum a_offset;      /*  bitvector offset  */
  fixnum  a_dim;         /*  dimension  */
  fixnum *a_dims;        /*  table of dimensions  */
  SPAD;

};



struct vector {           /*  vector header  */

  FIRSTWORD;

  object  v_displaced;    /*  displaced  */
  hfixnum v_hasfillp;     /*  has-fill-pointer flag  */
  hfixnum v_elttype;      /*  element type  */
  object *v_self;         /*  pointer to the vector  */
  fixnum  v_fillp;        /*  fill pointer  */
                          /*  For simple vectors,  */
                          /*  v_fillp is equal to v_dim.  */
  fixnum  v_dim;          /*  dimension  */
  hfixnum v_adjustable;   /*  adjustable flag  */
  hfixnum v_offset;       /*  not used  */
  SPAD;

};

struct string {           /*  string header  */

  FIRSTWORD;

  object  st_displaced;    /*  displaced  */
  hfixnum st_hasfillp;     /*  has-fill-pointer flag  */
  hfixnum st_adjustable;   /*  adjustable flag  */
  char    *st_self;        /*  pointer to the string  */
  fixnum   st_fillp;       /*  fill pointer  */
                           /*  For simple strings,  */
                           /*  st_fillp is equal to st_dim.  */
  fixnum   st_dim;         /*  dimension  */
                           /*  string length  */
};

struct ustring {

  FIRSTWORD;

  object         ust_displaced;
  hfixnum        ust_hasfillp;
  hfixnum        ust_adjustable;  
  unsigned char *ust_self;
  fixnum         ust_fillp;
  fixnum         ust_dim;
  

};

#define USHORT_GCL(x,i)  (((unsigned short *)(x)->ust.ust_self)[i])
#define  SHORT_GCL(x,i)  ((( short *)(x)->ust.ust_self)[i])

#define BV_OFFSET(x) ((type_of(x)==t_bitvector ? x->bv.bv_offset : \
                       type_of(x)== t_array ? x->a.a_offset : (abort(),0)))

#define SET_BV_OFFSET(x,val) ((type_of(x)==t_bitvector ? x->bv.bv_offset = val : \
                               type_of(x)== t_array ? x->a.a_offset=val : (abort(),0)))

struct bitvector {         /*  bitvector header  */

  FIRSTWORD;

  object   bv_displaced;   /*  displaced  */
  hfixnum  bv_hasfillp;    /*  has-fill-pointer flag  */
  hfixnum  bv_elttype;     /*  not used  */
  char    *bv_self;        /*  pointer to the bitvector  */
  fixnum   bv_fillp;       /*  fill pointer  */
                           /*  For simple bitvectors,  */
                           /*  st_fillp is equal to st_dim.  */
  fixnum   bv_dim;         /*  dimension  */
                           /*  number of bits  */
  hfixnum  bv_adjustable;  /*  adjustable flag  */
  hfixnum  bv_offset;      /*  bitvector offset  */
                           /*  the position of the first bit  */
                           /*  in the first byte  */
  SPAD;

};

struct fixarray {            /*  fixnum array header  */

  FIRSTWORD;

  object    fixa_displaced;  /*  displaced  */
  hfixnum   fixa_rank;       /*  array rank  */
  hfixnum   fixa_elttype;    /*  element type  */
  fixnum   *fixa_self;       /*  pointer to the array  */
  hfixnum   fixa_adjustable; /*  adjustable flag  */
  hfixnum   fixa_offset;     /*  not used  */
  fixnum    fixa_dim;        /*  dimension  */
  fixnum   *fixa_dims;       /*  table of dimensions  */
  SPAD;
  
};

struct sfarray {                  /*  short-float array header  */

  FIRSTWORD;

  object       sfa_displaced;     /*  displaced  */
  hfixnum      sfa_rank;          /*  array rank  */
  hfixnum      sfa_elttype;       /*  element type  */
  shortfloat  *sfa_self;          /*  pointer to the array  */
  hfixnum      sfa_adjustable;    /*  adjustable flag  */
  hfixnum      sfa_offset;        /*  not used  */
  fixnum       sfa_dim;           /*  dimension  */
  fixnum      *sfa_dims;          /*  table of dimensions  */
  SPAD;



};

struct lfarray {             /*  plong-float array header  */

  FIRSTWORD;

  object      lfa_displaced; /*  displaced  */
  hfixnum     lfa_rank;      /*  array rank  */
  hfixnum     lfa_elttype;   /*  element type  */
  longfloat  *lfa_self;      /*  pointer to the array  */
  hfixnum     lfa_adjustable;/*  adjustable flag  */
  hfixnum     lfa_offset;    /*  not used  */
  fixnum      lfa_dim;       /*  dimension  */
  fixnum     *lfa_dims;      /*  table of dimensions  */
  SPAD;

};

struct structure {  /*  structure header  */

  FIRSTWORD;

  object  str_def;  /*  structure definition (a structure)  */
  object *str_self; /*  structure self  */
  SPAD;

};

struct s_data {

  object name;
  fixnum length;
  object raw;
  object included;
  object includes;
  object staticp;
  object print_function;
  object slot_descriptions;
  object slot_position;
  fixnum size;
  object has_holes;

};

#define S_DATA(x) ((struct s_data *)((x)->str.str_self))
#define SLOT_TYPE(def,i) (((S_DATA(def))->raw->ust.ust_self[i]))
#define SLOT_POS(def,i) USHORT_GCL(S_DATA(def)->slot_position,i)
#define STREF(type,x,i) (*((type *)(((char *)((x)->str.str_self))+(i))))



enum smmode {      /*  stream mode  */
 smm_input,        /*  input  */
 smm_output,       /*  output  */
 smm_io,           /*  input-output  */
 smm_probe,        /*  probe  */
 smm_synonym,      /*  synonym  */
 smm_broadcast,    /*  broadcast  */
 smm_concatenated, /*  concatenated  */
 smm_two_way,      /*  two way  */
 smm_echo,         /*  echo  */
 smm_string_input, /*  string input  */
 smm_string_output,/*  string output  */
 smm_user_defined, /*  for user defined */
 smm_socket        /*  Socket stream  */
};

/* for any stream that takes writec_char, directly (not two_way or echo)
   ie.   smm_output,smm_io, smm_string_output, smm_socket
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

  FILE            *sm_fp;      /*  file pointer  */
  object           sm_object0; /*  some object  */
  object           sm_object1; /*  some object */
  fixnum           sm_int0;    /*  some int  */
  fixnum           sm_int1;    /*  column for input or output, stream */
  char            *sm_buffer;  /*  ptr to BUFSIZE block of storage */
  qfixnum          sm_mode;    /*  stream mode  */
  uqfixnum         sm_flags;   /* flags from gcl_sm_flags */
  hfixnum          sm_fd;      /* stream fd */
     
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
#define BASEFF  (unsigned char *)0xffffffff
#else
#define BASEFF  (char *)0xffffffff
#endif
#endif

#ifdef ATT
#define BASEFF  (unsigned char *)0xffffffff
#endif

#ifdef E15
#define BASEFF  (unsigned char *)0xffffffff
#endif

#ifdef MV


#endif

struct random {

  FIRSTWORD;

  __gmp_randstate_struct  rnd_state;

};

enum chattrib {       /*  character attribute  */
 cat_whitespace,      /*  whitespace  */
 cat_terminating,     /*  terminating macro  */
 cat_non_terminating, /*  non-terminating macro  */
 cat_single_escape,   /*  single-escape  */
 cat_multiple_escape, /*  multiple-escape  */
 cat_constituent      /*  constituent  */
};

struct rtent {               /*  read table entry  */
 enum chattrib rte_chattrib; /*  character attribute  */
 object        rte_macro;    /*  macro function  */
 object        *rte_dtab;    /*  pointer to the  */
                             /*  dispatch table  */
                             /*  NULL for  */
                             /*  non-dispatching  */
                             /*  macro character, or  */
                             /*  non-macro character  */
};

struct readtable {       /*  read table  */

  FIRSTWORD;

  struct rtent *rt_self; /*  read table itself  */

};

struct pathname {

  FIRSTWORD;

  object pn_host;      /*  host  */
  object pn_device;    /*  device  */
  object pn_directory; /*  directory  */
  object pn_name;      /*  name  */
  object pn_type;      /*  type  */
  object pn_version;   /*  version  */
  SPAD;

};

struct cfun {        /*  compiled function header  */

  FIRSTWORD;

  object cf_name;    /*  compiled function name  */
  void (*cf_self)(); /*  entry address  */
  object cf_data;    /*  data the function uses  */
                     /*  for GBC  */
};

struct cclosure {    /*  compiled closure header  */

  FIRSTWORD;

  object  cc_name;    /*  compiled closure name  */
  void  (*cc_self)(); /*  entry address  */
  object  cc_env;     /*  environment  */
  object  cc_data;    /*  data the closure uses  */
                      /*  for GBC  */
  fixnum  cc_envdim;
  object *cc_turbo;   /*  turbo charger */
  SPAD;

};

struct closure {

  FIRSTWORD; 
  
  object   cl_name;       /* name */
  object (*cl_self)();    /* C start address of code */
  object   cl_data;       /* To object holding VV vector */
  fixnum   cl_argd;       /* description of args + number */
  fixnum   cl_envdim;     /* length of the environment vector */
  object  *cl_env;        /* environment vector referenced by cl_self()*/

};

struct sfun {

  FIRSTWORD; 

  object   sfn_name;       /* name */
  object (*sfn_self)();    /* C start address of code */
  object   sfn_data;       /* To object holding VV vector */
  fixnum   sfn_argd;       /* description of args + number */
  SPAD;

};

struct vfun {

  FIRSTWORD; 

  object           vfn_name;       /* name */
  object         (*vfn_self)();    /* C start address of code */
  object           vfn_data;       /* To object holding VV data */
  uhfixnum         vfn_minargs;    /* Min args and where varargs start */
  uhfixnum         vfn_maxargs;    /* Max number of args */
  SPAD;

};
struct cfdata {

  FIRSTWORD;

  char   *cfd_start;             /* beginning of contblock for fun */
  fixnum  cfd_size;              /* size of contblock */
  fixnum  cfd_fillp;             /* size of self */
  object *cfd_self;              /* body */
  SPAD;

};

struct spice {

  FIRSTWORD;

  fixnum spc_dummy;

};

/*
 dummy type
*/
struct dummy      {FIRSTWORD;};
struct mark       {MARKWORD;};
struct typew      {TYPEWORD;};
struct sgcm       {SGCMWORD;};

/*
 Definition of lispunion.
*/
union lispunion {
 struct fixnum_struct     FIX; /*  fixnum  */
 struct bignum            big; /*  bignum  */
 struct ratio             rat; /*  ratio  */
 struct shortfloat_struct  SF; /*  short floating-point number  */
 struct longfloat_struct   LF; /*  plong floating-point number  */
 struct complex           cmp; /*  complex number  */
 struct character          ch; /*  character  */
 struct symbol              s; /*  symbol  */
 struct package             p; /*  package  */
 struct cons                c; /*  cons  */
 struct hashtable          ht; /*  hash table  */
 struct array               a; /*  array  */
 struct vector              v; /*  vector  */
 struct string             st; /*  string  */
 struct ustring           ust;
 struct bitvector          bv; /*  bit-vector  */
 struct structure         str; /*  structure  */
 struct stream             sm; /*  stream  */
 struct random            rnd; /*  random-states  */
 struct readtable          rt; /*  read table  */
 struct pathname           pn; /*  path name  */
 struct cfun               cf; /*  compiled function  uses value stack] */
 struct cclosure           cc; /*  compiled closure  uses value stack */
 struct closure            cl; /*  compiled closure  uses c stack */
 struct sfun              sfn; /*  simple function */
 struct vfun              vfn; /*  function with variable number of args */
 struct cfdata            cfd; /* compiled fun data */
 struct spice             spc; /*  spice  */

 struct dummy               d; /*  dummy  */
 struct mark               md; /*  mark dummy  */
 struct sgcm              smd; /*  sgc mark dummy  */
 struct typew              td; /*  type dummy  */

 struct fixarray         fixa; /*  fixnum array  */
 struct sfarray           sfa; /*  short-float array  */
 struct lfarray           lfa; /*  plong-float array  */

};

#define address_int ufixnum

/*
 The struct of free lists.
*/
struct freelist {

  FIRSTWORD;

  address_int f_link;

};
#ifndef INT_TO_ADDRESS
#define INT_TO_ADDRESS(x) ((object)(fixnum)x)
#endif

#define F_LINK(x) ((struct freelist *)(fixnum) x)->f_link
#define FL_LINK F_LINK
#define SET_LINK(x,val) F_LINK(x) = (address_int) (val)
#define OBJ_LINK(x) ((object) INT_TO_ADDRESS(F_LINK(x)))

/*
 Type_of.
*/
#define type_of(x)       ({object _z=(object)(x);\
                           is_imm_fixnum(_z) ? t_fixnum : \
                           (_z==Cnil || _z==Ct || _z==Dotnil ? t_symbol : \
                           (is_cons(_z) ?  t_cons  : _z->d.t));})
#define set_type_of(x,y) ({object _x=(object)(x);enum type _y=(y);*(fixnum *)(_x)&=TYPE_BITS;\
                           if (_y!=t_cons) {_x->d.e=1;_x->d.t=_y;}})
/*
 Storage manager for each type.
*/
struct typemanager {

  enum type  tm_type;           /*  type  */
  hfixnum    tm_size;           /*  element size in bytes  */
  hfixnum    tm_nppage;         /*  number per page  */
  object     tm_free;           /*  free list  */
                                /*  Note that it is of type object.  */
  fixnum     tm_nfree;          /*  number of free elements  */
  fixnum     tm_nused;          /*  number of elements used  */
  fixnum     tm_npage;          /*  number of pages  */
  fixnum     tm_maxpage;        /*  maximum number of pages  */
  char      *tm_name;           /*  type name  */
  int        tm_gbccount;       /*  GBC count  */
  object     tm_alt_free;       /*  Alternate free list (swap with tm_free) */
  fixnum     tm_alt_nfree;      /*  Alternate nfree (length of nfree) */
  hfixnum    tm_sgc;            /*  this type has at least this many sgc pages */
  hfixnum    tm_sgc_minfree;    /* number free on a page to qualify for  being an sgc page */
  hfixnum    tm_sgc_max;        /* max on sgc pages */
  hfixnum    tm_min_grow;       /* min amount to grow when growing */
  hfixnum    tm_max_grow;       /* max amount to grow when growing */
  hfixnum    tm_growth_percent; /* percent to increase maxpages */
  hfixnum    tm_percent_free;   /* percent which must be free after a gc for this type */
  hfixnum    tm_distinct;       /* pages of this type are distinct */
  float      tm_adjgbccnt;
  fixnum     tm_opt_maxpage;

};


/*
 The table of type managers.
*/
EXTER struct typemanager tm_table[ 32  /* (int) t_relocatable */];

#define tm_of(t) (&(tm_table[(int)tm_table[(int)(t)].tm_type]))

/*
 Contiguous block header.
*/
struct contblock {            /*  contiguous block header  */

  fixnum cb_size;             /*  size in bytes  */
  struct contblock  *cb_link; /*  contiguous block link  */
};

/*
 The pointer to the contiguous blocks.
*/
EXTER struct contblock *cb_pointer; /*  contblock pointer  */

/* SGC cont pages: After SGC_start, old_cb_pointer will be a linked
   list of free blocks on non-SGC pages, and cb_pointer will be
   likewise for SGC pages.  CM 20030827*/
EXTER struct contblock *old_cb_pointer; /*  old contblock pointer when in SGC  */

/* SGC cont pages: FIXME -- at some point, enable runtime disabling of
   SGC cont pages.  Right now, the tm_sgc variable for type contiguous
   will govern only the possible attempt to get new pages for SGC.
   Contiguous pages normally allocated when SGC is on will always be
   marked with SGC_PAGE_FLAG, as the current GBC algorithm always uses
   sgc_contblock_sweep_phase in this case. */
/* #define SGC_CONT_ENABLED (sgc_enabled && tm_table[t_contiguous].tm_sgc) */
#define SGC_CONT_ENABLED (sgc_enabled)

/*
 Variables for memory management.
*/
EXTER fixnum ncb;   /*  number of contblocks  */
#define ncbpage    tm_table[t_contiguous].tm_npage
#define maxcbpage  tm_table[t_contiguous].tm_maxpage
#define cbgbccount tm_table[t_contiguous].tm_gbccount  
  

/* int maxcbpage; maximum number of contblock pages  */
EXTER fixnum holepage;   /*  hole pages  */
#define nrbpage    tm_table[t_relocatable].tm_npage
#define rbgbccount tm_table[t_relocatable].tm_gbccount
  

EXTER char *rb_start;   /*  relblock start  */
EXTER char *rb_end;     /*  relblock end  */
EXTER char *rb_limit;   /*  relblock limit  */
EXTER char *rb_pointer; /*  relblock pointer  */
EXTER char *rb_start1;  /*  relblock start in copy space  */
EXTER char *rb_pointer1;/*  relblock pointer in copy space  */

EXTER char *heap_end;   /*  heap end  */
EXTER char *core_end;   /*  core end  */
EXTER char *tmp_alloc;

/* make f allocate enough extra, so that we can round
   up, the address given to an even multiple.   Special
   case of size == 0 , in which case we just want an aligned
   number in the address range
   */

#define ALLOC_ALIGNED(f, size,align) \
  (align <= sizeof(plong) ? (char *)((f)(size)) : \
   (tmp_alloc = (char *)((f)(size+(size ?(align)-1 : 0)))+(align)-1 , \
   (char *)(align * (((ufixnum)tmp_alloc)/align))))
#define AR_ALLOC(f,n,type) (type *) \
  (ALLOC_ALIGNED(f,(n)*sizeof(type),sizeof(type)))


#define INIT_HOLEDIV (5*HOLEDIV/6)
#define INIT_NRBDIV (INIT_HOLEDIV*3)
#define RB_GETDIV 100

#define CORE_PAGES (((ufixnum)core_end-DBEGIN)>>PAGEWIDTH)
#define RB_GETA    (CORE_PAGES/RB_GETDIV)


#ifdef AV
#define STATIC register
#endif
#define TIME_ZONE (-9)

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


#define isUpper(xxx) (((xxx)&0200) == 0 && isupper((int)xxx))
#define isLower(xxx) (((xxx)&0200) == 0 && islower((int)xxx))
#define isDigit(xxx) (((xxx)&0200) == 0 && isdigit((int)xxx))
enum ftype {f_object,f_fixnum,f_integer};
EXTER char *alloca_val;

/*          ...xx|xx|xxxx|xxxx|   
       ret  Narg     */

/*    a9a8a7a6a5a4a3a4a3a2a1a0rrrrnnnnnnnn
         ai=argtype(i)         ret   nargs
 */
#define SFUN_NARGS(x)   (x & 0xff) /* 8 bits */
#define RESTYPE(x)      (x<<8)   /* 3 bits */
/* set if the VFUN_NARGS = m ; has been set correctly */
#define VFUN_NARG_BIT   (1 <<11) 
#define ARGTYPE(i,x)    ((x) <<(12+(i*2)))
#define ARGTYPE1(x)     (1 | ARGTYPE(0,x))
#define ARGTYPE2(x,y)   (2 | ARGTYPE(0,x)  | ARGTYPE(1,y))
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


/*FIXME -- this is an effort to minimize uninitialized garbage in the
  stack.  THe only comprehensive solution appears to be to wipe the
  stack frame on each function call.  Doubling the overhead of every
  function call appears too expensive, though it has not been
  thoroughly tested.  It is also quesitonable how portable the
  wipe_stack algorithm is.  For now, we've minimized the issue by
  moving the cstack mark origin to the frame right above toplevel.
  20050609 CM. */

#include <string.h>
#define CSP (CSTACK_ALIGNMENT-1)
#if CSTACK_DIRECTION == -1
#define ZALLOCA(n) ({fixnum _x=0,_y=0,_n=((n)+CSP)&~CSP;void *v=NULL;v=alloca(_n+_x+_y);bzero(v,_n+_x+_y); v;})
#else
#define ZALLOCA(n) ({fixnum _x=0,_y=0,_n=((n)+CSP)&~CSP;void *v=NULL;v=alloca(_n+_x+_y);bzero(v,_n+_x+_y); v;})
#endif
/* #define ZALLOCA(n) ({fixnum _x=0,_y=0,_n=((n)+CSP)&~CSP;void *v=NULL;v=alloca(_n+_x+_y);wipe_stack(v+_n); v;}) */
/* #else */
/* #define ZALLOCA(n) ({fixnum _x=0,_y=0,_n=((n)+CSP)&~CSP;void *v=NULL;v=alloca(_n+_x+_y);wipe_stack(v); v;}) */
/* #endif */
#define ZALLOCA1(v,n) ((v)=alloca((n)),__builtin_bzero((v),((n))))

#ifdef DONT_COPY_VA_LIST
#define COERCE_VA_LIST(new,vl,n) new = (object *) (vl)
#else
#define COERCE_VA_LIST(new,vl,n) \
 int i;\
 object *Xxvl; \
 Xxvl=ZALLOCA((n)*sizeof(*Xxvl));\
 new=Xxvl; \
 if (n >= 65) FEerror("Too plong vl",0); \
 for (i=0 ; i < (n); i++) new[i]=va_arg(vl,object);
#endif

#ifdef DONT_COPY_VA_LIST
#error Cannot set DONT_COPY_VA_LIST in ANSI C
#else
#define COERCE_VA_LIST_NEW(new,fst,vl,n) \
 int i;\
 object *Xxvl; \
 Xxvl=ZALLOCA((n)*sizeof(*Xxvl));\
 new=Xxvl; \
 if (n >= 65) FEerror("va_list too long",0); \
 for (i=0 ; i < (n); i++) new[i]=i ? va_arg(vl,object) : fst;
#endif



#define make_si_vfun(s,f,min,max) make_si_vfun1(s,f,min | (max << 8))

/* Number of args supplied to a variable arg t_vfun
 Used by the C function to set optionals */

struct call_data { 

object  fun;
hfixnum argd;
hfixnum nvalues;
object  values[50];
double  double_return;

};
EXTER struct call_data fcall;

#define  VFUN_NARGS fcall.argd
#define RETURN2(x,y) do{fcall.values[2]=y;fcall.nvalues=2;return (x) ;} while(0)
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
#define SGC_TOUCH(x) if (is_marked(x)) system_error(); unmark(x)
#else
#define SGC_TOUCH(x)
#endif

object funcall_cfun(void(*)(),int,...);
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

/* EXTER struct symbol Dotnil_body; */
/* #define Dotnil ((object)&Dotnil_body) */

/* FIXME -- go through all the endp calls and handle dots explicitly
   at some point.  For now, the s_my_dot structs must be explicitly
   initialized to be placed in .data as opposed to .bss and thereby
   initialized by the loader.  20050616 CM*/

#define endp(x) ({\
    static struct cons s_my_dot={Dotnil,Dotnil};\
    object _x=(x);\
    bool _b=FALSE;\
    \
    if (type_of(_x)==t_cons) {\
       if (type_of(_x->c.c_cdr)!=t_cons && _x->c.c_cdr!=Cnil)\
          s_my_dot.c_car=_x->c.c_cdr;\
       else \
          s_my_dot.c_car=Dotnil;\
    } else {\
       if (_x==s_my_dot.c_car)\
          x=(object)&s_my_dot;\
       else {\
         s_my_dot.c_car=Dotnil;\
         if (_x==Cnil || _x==Dotnil)\
             _b=TRUE;\
         else\
             FEwrong_type_argument(sLlist, _x);\
       }\
    }\
    _b;\
    })

#define endp_prop(a) (type_of(a)==t_cons ? FALSE : ((a)==Cnil ? TRUE : (FEwrong_type_argument(sLlist, (a)),FALSE)))
    
#define proper_list(a) (type_of(a)==t_cons || (a)==Cnil)
#define fix_dot(a) ((a) == Dotnil ? Cnil : (type_of(a)==t_cons && (a)->c.c_cdr==Dotnil ? (a)->c.c_car : (a))) 
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
#define	vs_popp		(--vs_top)
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
	vs_popp;  \
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

#ifndef CSSIZE
#  define	CSSIZE		20000
#endif
/* #ifndef CSGETA */
/* #  define	CSGETA		4000 */
/* #endif */

#ifdef __ia64__
EXTER int *cs_base2;
EXTER int *cs_org2;
#endif

EXTER int *cs_base;
EXTER int *cs_org;
EXTER int *cs_limit;


/* we catch the segmentation fault and check to warn of c stack overflow */
#ifdef AV
#ifndef cs_check
#if CSTACK_DIRECTION == -1
#define	cs_check(something) if ((long *)(&something) < cs_limit) cs_overflow()
#else
#define	cs_check(something) if ((long *)(&something) > cs_limit) cs_overflow()
#endif
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

#define ONE_VAL  (1 << (F_NARG_WIDTH + F_caller_sets_one_val))
#define CLOS (1 << (F_NARG_WIDTH + F_requires_fun_passed))
#define VARARG (1 << (F_NARG_WIDTH + F_requires_nargs))
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
#define PUSH_VAL(x) if (nvals>=sizeof(fcall.values)/sizeof(*fcall.values) \
                       FEerror("Too many function call values"); \
                     else fcall.values[nvals++] = (x)
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
void *malloc(size_t);
void *realloc(void *,size_t);
/* void * memalign(size_t,size_t); */
void *alloc_contblock(size_t);
void *alloc_relblock(size_t);
/* object fSallocate_contiguous_pages(); */
/* object fSallocate_relocatable_pages(); */

/*  array.c  */
/* enum aelttype Iarray_element_type(); */
object fLrow_major_aref();
object fSaset1();
EXTER object sLarray_dimension_limit;
EXTER object sLarray_total_size_limit;
object fSmake_array1();
/* object fSmake_vector1(); */

/*  assignment.c  */
/* object setf(); */



/*  backq.c  */
EXTER int backq_level;
EXTER object sLlistA;
EXTER object sLappend;
EXTER object sLnconc;


/*  bds.c  */

/*  big.c  */
object make_integer_clear();
object stretch_big();
object copy_big();
object copy_to_big();
object big_minus();
object big_plus();
object big_times();
object normalize_big_to_object();
double big_to_double();
EXTER  struct bignum big_fixnum1_body,big_fixnum2_body;
EXTER object big_fixnum1,big_fixnum2;
object maybe_replace_big();




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
/* object MM(); */
/* object make_function_internal(); */
/* object make_si_function_internal(); */
/* object make_special_form_internal(); */
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
char *object_to_string();
float object_to_float();
double object_to_double();

/*  error.c  */
EXTER object sKerror,sKparse_error;
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
EXTER object sKpackage_error;
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
object ifuncall(object,int,...);
object ifuncall1();
object ifuncall2();
object ifuncall3();
object fcalln1(object,...);
#define fcalln ((object (*)())fcalln1)
object Ieval();
object Imacro_expand1();

/*  unixfasl.c  fasload.c  */

/*  file.d  */
EXTER object sKabort;
EXTER object sKappend;
EXTER object sKcreate;
EXTER object sKdefault;
EXTER object sKexternal_format;
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
/* object stream_element_type(); */
object open_stream();
/* object make_two_way_stream(); */
/* object make_echo_stream(); */
object make_string_input_stream();
object make_string_output_stream();
/* object get_output_stream_string(); */
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
EXTER object sKrev;
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
object list(fixnum,...);
object listA(fixnum,...);
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
object vs_overflow(void);

EXTER object sSAsystem_directoryA;
#ifdef UNIX
EXTER char *kcl_self;
#endif
#if !defined(IN_MAIN) || !defined(ATT)
EXTER bool initflag,raw_image;
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
object make_fixnum1(long);
object make_ratio();
object make_shortfloat();
object make_longfloat();
object make_complex();
double number_to_double();
long fixint(object);
/*  num_pred.c  */

/*  num_comp.c  */

/*  num_arith  */
object bignum2();
object bignum3();
/* object number_to_complex(); */
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
object fixnum_add();
object fixnum_sub();
object new_bignum();

/*  num_co.c  */
object double_to_integer();

/*  num_log.c  */
object shift_integer();

/*  package.d  */
EXTER object lisp_package;
EXTER object user_package;
#ifdef ANSI_COMMON_LISP
EXTER object common_lisp_package;
#endif
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
/* object make_package(); */
/* object in_package(); */
/* object rename_package(); */
object find_package();
/* object coerce_to_package(); */
object current_package();
object intern();
object find_symbol();

/*  pathname.d  */
EXTER object Vdefault_pathname_defaults;
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
EXTER object sKlocal;
EXTER object sKcommon;

EXTER object sKpathname_error;

EXTER object sKabsolute;
EXTER object sKrelative;
EXTER object sKroot;
EXTER object sKhome;
EXTER object sKwild;
EXTER object sKwildinf;
EXTER object sKnewest;
EXTER object sKcurrent;
EXTER object sKparent;
EXTER object sKback;
EXTER object sKup;
EXTER object sKunspecific;

object merge_pathnames();
object namestring();
object coerce_to_namestring();
object coerce_to_pathname();
object file_error();
object wild_pathname_p();

extern int pathname_resolve();
extern object pathname_lookup();
extern object translate_logical_pathname();
extern object search_local_pathname();
extern object coerce_to_local_namestring();
extern object expand_pathname();

/*  prediate.c  */

int eql(),equal(),eq();

/*  print.d  */
EXTER object sKupcase;
EXTER object sKdowncase;
EXTER object sKcapitalize;
EXTER object sKstream;
EXTER object sKreadably;
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
EXTER object sLAprint_readablyA;
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
EXTER bool PRINTreadably;
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
EXTER void (*write_ch_fun)(int);
object princ();
object prin1();
object print();
object terpri();
EXTER object sSpretty_print_format;
EXTER int  line_length;

/*  file.d definied but not yet implemented */
EXTER object sLAprint_linesA;
EXTER object sLAprint_miser_widthA;
EXTER object sLAprint_right_marginA;
EXTER object sLAread_evalA;

/*  Read.d  */
EXTER object standard_readtable;
EXTER object Vreadtable;
EXTER object sLAread_default_float_formatA;
EXTER object sLAread_baseA;
EXTER object sLAread_suppressA;
EXTER object READtable;
/* EXTER object read_byte1();  */
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
object read_char1(object,object);
object peek_char();
/* object read_object_recursive(); */
object read_object_non_recursive();
object standard_read_object_non_recursive();
object read_object();
/* object parse_number(); */
/* object parse_integer(); */
/* object copy_readtable(); */
/* object current_readtable(); */
/* object patch_sharp(); */
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

void check_proper_list();

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
/* EXTER int gensym_counter; */
EXTER object sLgensym_counter;
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
EXTER object sSsetf_function;
#define setf_fn_form(a_) (type_of(a_)==t_cons && MMcar(a_)==sLsetf &&\
                          type_of(MMcdr(a_))==t_cons && type_of(MMcadr(a_))==t_symbol &&\
                          MMcddr(a_)==Cnil)

/*  typespec.c  */
EXTER object sLcommon,sLnull,sLcons,sLlist,sLsymbol,sLarray,sLvector,sLbit_vector,sLstring;
EXTER object sLsequence,sLsimple_array,sLsimple_vector,sLsimple_bit_vector,sLsimple_string;
EXTER object sLcompiled_function,sLpathname,sLcharacter,sLnumber,sLrational,sLfloat,sLstring_char;
EXTER object sLinteger,sLratio,sLshort_float,sLstandard_char;

EXTER object sLchar,sLnon_negative_char,sLnegative_char,sLsigned_char,sLunsigned_char;
EXTER object sLshort,sLnon_negative_short,sLnegative_short,sLsigned_short,sLunsigned_short;
EXTER object sLfixnum,sLnon_negative_fixnum,sLnegative_fixnum,sLsigned_fixnum,sLunsigned_fixnum;
EXTER object sLlfixnum,sLnon_negative_lfixnum,sLnegative_lfixnum;
EXTER object sLsigned_lfixnum,sLunsigned_lfixnum;

EXTER object sLseqind,sLrnkind;

EXTER object sLcomplex;
EXTER object sLsingle_float,sLpackage,sLbignum,sLrandom_state,sLdouble_float,sLstream,sLbit,sLreadtable;
EXTER object sLlong_float,sLhash_table,sLstructure,sLboolean,sLfile_stream;

#ifdef ANSI_COMMON_LISP
/* new ansi types */
EXTER object sLarithmetic_error,sLbase_char,sLbase_string,sLbroadcast_stream,sLbuilt_in_class;
EXTER object sLcell_error,sLclass,sLconcatenated_stream,sLcondition,sLcontrol_error,sLdivision_by_zero;
EXTER object sLecho_stream,sLend_of_file,sLerror,sLextended_char,sLfile_error;
EXTER object sLfloating_point_inexact,sLfloating_point_invalid_operation,sLfloating_point_overflow;
EXTER object sLfloating_point_underflow,sLgeneric_function,sLlogical_pathname,sLmethod,sLpackage_error;
EXTER object sLparse_error,sLprint_not_readable,sLprogram_error,sLreader_error,sLserious_condition;
EXTER object sLsimple_base_string,sLsimple_condition,sLsimple_type_error,sLsimple_warning,sLstandard_class;
EXTER object sLstandard_generic_function,sLstandard_method,sLstandard_object,sLstorage_condition;
EXTER object sLstream_error,sLstring_stream,sLstructure_class,sLstyle_warning,sLsynonym_stream;
EXTER object sLtwo_way_stream,sLtype_error,sLunbound_slot,sLunbound_variable,sLundefined_function,sLwarning;
EXTER object sLmethod_combination,sLstructure_object,sLdynamic_extent;
#endif

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
/* object Icall_proc(); */
float Icall_proc_float();
object ImakeStructure();
object list_vector();
object list_vector_new();
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
/* extern object call_proc(); */
/* extern object call_vproc(); */
object fLrow_major_aref();
object Icheck_one_type();

/* utils.c */
object Iis_fixnum();
object Iapply_fun_n(object,int,int,...);
object Iapply_fun_n1(object (*)(),int,int,...);
object Iapply_fun_n2(object,int,int,...);
object Ifuncall_n(object,int,...);
object Ivs_values();
object Icheck_one_type();
object fSincorrect_type();
EXTER object fLbye (fixnum exitc);
EXTER object fLquit (fixnum exitc);
EXTER object sSAno_initA;
EXTER object fLidentity (object x0);
EXTER object fSgcl_compile_time (void);
EXTER object fSldb1 (fixnum a,fixnum b, fixnum c);
EXTER object fLlisp_implementation_version (void);
EXTER object sSAlisp_maxpagesA;
EXTER object sSAsystem_directoryA;
EXTER object sSAmultiply_stacksA;
EXTER object sStop_level;
EXTER object sSAcommand_argsA;
EXTER object sSAafter_gbc_hookA;
EXTER object sSAignore_maximum_pagesA;
EXTER object sSAoptimize_maximum_pagesA;
EXTER object sSAnotify_optimize_maximum_pagesA;
EXTER object fSallocated (object typ);
EXTER object fSreset_number_used (object typ);
EXTER object fSstaticp (object x);
EXTER object fSallocate_sgc (object type,fixnum min,fixnum max,fixnum free_percent);
EXTER object fSallocate_growth (object type,fixnum min,fixnum max,fixnum percent,fixnum percent_free);
EXTER object fSallocate_contiguous_pages (fixnum npages,...);
EXTER object fSallocated_contiguous_pages (void);
EXTER object fSmaximum_contiguous_pages (void);
EXTER object fSallocate_relocatable_pages (fixnum npages,...);
EXTER object fSallocate (object type,fixnum npages,...);
EXTER object fSallocated_relocatable_pages (void);
EXTER object fSget_hole_size (void);
EXTER object fSset_hole_size (fixnum npages,...);
EXTER object fLgbc (object x0);
EXTER object sSAnotify_gbcA;
EXTER object sSAgbc_messageA;
EXTER object sLcommon;
EXTER object sLnull;
EXTER object sLcons;
EXTER object sLlist;
EXTER object sLsymbol;
EXTER object sLarray;
EXTER object sLvector;
EXTER object sLbit_vector;
EXTER object sLstring;
EXTER object sLsequence;
EXTER object sLsimple_array;
EXTER object sLsimple_vector;
EXTER object sLsimple_bit_vector;
EXTER object sLsimple_string;
EXTER object sLfunction;
EXTER object sLcompiled_function;
EXTER object sLpathname;
EXTER object sLcharacter;
EXTER object sLnumber;
EXTER object sLrational;
EXTER object sLfloat;
EXTER object sLstring_char;
EXTER object sLinteger;
EXTER object sLratio;
EXTER object sLshort_float;
EXTER object sLstandard_char;
EXTER object sLboolean;
EXTER object sLseqind;
EXTER object sLrnkind;
EXTER object sLchar;
EXTER object sLnon_negative_char;
EXTER object sLnegative_char;
EXTER object sLsigned_char;
EXTER object sLunsigned_char;
EXTER object sLshort;
EXTER object sLnon_negative_short;
EXTER object sLnegative_short;
EXTER object sLsigned_short;
EXTER object sLunsigned_short;
EXTER object sLfixnum;
EXTER object sLnon_negative_fixnum;
EXTER object sLnegative_fixnum;
EXTER object sLsigned_fixnum;
EXTER object sLunsigned_fixnum;
EXTER object sLlfixnum;
EXTER object sLnon_negative_lfixnum;
EXTER object sLnegative_lfixnum;
EXTER object sLsigned_lfixnum;
EXTER object sLunsigned_lfixnum;
EXTER object sLcomplex;
EXTER object sLsingle_float;
EXTER object sLpackage;
EXTER object sLbignum;
EXTER object sLrandom_state;
EXTER object sLdouble_float;
EXTER object sLstream;
EXTER object sLbit;
EXTER object sLreadtable;
EXTER object sLlong_float;
EXTER object sLhash_table;
EXTER object sLkeyword;
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
EXTER object sLsigned_short;
EXTER object sLunsigned_short;
EXTER object sLA;
EXTER object sLplusp;
EXTER object sLfile_stream;
EXTER object sLlogical_pathname;
EXTER object sSchar_length;
EXTER object sSshort_length;
EXTER object sSfixnum_length;
EXTER object sSlfixnum_length;
EXTER object fLfuncall (object fun,...);
EXTER object fLapply (object fun,...);
EXTER object fLeval (object x0);
EXTER object fLconstantp (object x0);
EXTER object sSlambda_block_expanded;
EXTER object sSAbreak_pointsA;
EXTER object sSAbreak_stepA;
EXTER object fLmacroexpand (object form,...);
EXTER object sLfuncall;
EXTER object sLAmacroexpand_hookA;
EXTER object sSdefmacroA;
EXTER object sSAinhibit_macro_specialA;
EXTER object fLnull (object x0);
EXTER object fLnot (object x0);
EXTER object fLsymbolp (object x0);
EXTER object fLatom (object x0);
EXTER object fLconsp (object x0);
EXTER object fLlistp (object x0);
EXTER object fLnumberp (object x0);
EXTER object fLintegerp (object x0);
EXTER object fLrationalp (object x0);
EXTER object fLrealp (object x0);
EXTER object fLfloatp (object x0);
EXTER object fLcomplexp (object x0);
EXTER object fLcharacterp (object x0);
EXTER object fLstringp (object x0);
EXTER object fLbit_vector_p (object x0);
EXTER object fLvectorp (object x0);
EXTER object fLsimple_string_p (object x0);
EXTER object fLsimple_bit_vector_p (object x0);
EXTER object fLsimple_vector_p (object x0);
EXTER object fLarrayp (object x0);
EXTER object fLpackagep (object x0);
EXTER object fLfunctionp (object x0);
EXTER object fLcompiled_function_p (object x0);
EXTER object fLcommonp (object x0);
EXTER object fLeq (object x0,object x1);
EXTER object fLeql (object x0,object x1);
EXTER object fLequal (object x0,object x1);
EXTER object fLequalp (object x0,object x1);
EXTER object fScontains_sharp_comma (object x0);
EXTER object fSspicep (object x0);
EXTER object fSfixnump (object x0);
EXTER object fLset (object symbol,object value);
EXTER object fSfset (object sym,object function);
EXTER object fLmakunbound (object sym);
EXTER object fLfmakunbound (object sym);
EXTER object sSclear_compiler_properties;
EXTER object fSclear_compiler_properties (object x0,object x1);
EXTER object sLaref;
EXTER object sLcar;
EXTER object sLcdr;
EXTER object sLchar;
EXTER object sLdecf;
EXTER object sLelt;
EXTER object sLfill_pointer;
EXTER object sLget;
EXTER object sLgetf;
EXTER object sLgethash;
EXTER object sLincf;
EXTER object sLpop;
EXTER object sLpush;
EXTER object sLschar;
EXTER object sLsetf;
EXTER object sSsetf_lambda;
EXTER object sSstructure_access;
EXTER object sLsvref;
EXTER object sStraced;
EXTER object sLvector;
EXTER object sKallow_other_keys;
EXTER object fSerror_set (volatile object x0);
EXTER object sLgensym_counter;
EXTER object fSmc (object name,object address);
EXTER object fSmfsfun (object name,object address,object argd);
EXTER object fSmfvfun (object name,object address,object argd);
EXTER object fSmfvfun_key (object symbol,object address,object argd,object keys);
EXTER object fSmf (object name,object addr);
EXTER object fSmm (object name,object addr);
EXTER object fScompiled_function_name (object fun);
EXTER object fSturbo_closure (object funobj);
EXTER object fSspecialp (object sym);
EXTER object sSdebugger;
EXTER object fSdefvar1 (object sym,object val,...);
EXTER object fSdebugger (object sym,object val);
EXTER object fSsetvv (object index,object val);
EXTER object sSPmemory;
EXTER object sSPinit;
EXTER object fSinit_cmp_anon (void);
EXTER object sKexternal;
EXTER object sKinherited;
EXTER object sKinternal;
EXTER object sKnicknames;
EXTER object sKuse;
EXTER object sLApackageA;
EXTER object fSset_gmp_allocate_relocatable (object flag);
EXTER object fSallocate_bigger_fixnum_range (fixnum min,fixnum max);
EXTER object fScmod (object num);
EXTER object fScplus (object x0,object x1);
EXTER object fSctimes (object x0,object x1);
EXTER object fScdifference (object x0,object x1);
EXTER object fLnth (fixnum index,object list);
EXTER object fLfirst (object x);
EXTER object fLsecond (object x);
EXTER object fLthird (object x);
EXTER object fLfourth (object x);
EXTER object fLfifth (object x);
EXTER object fLsixth (object x);
EXTER object fLseventh (object x);
EXTER object fLeighth (object x);
EXTER object fLninth (object x);
EXTER object fLtenth (object x);
EXTER object fSnext_hash_table_entry (object table,object ind);
EXTER object fLhash_table_test (object table);
EXTER object fLhash_table_size (object table);
EXTER object sLarray_rank_limit;
EXTER object sLarray_dimension_limit;
EXTER object sLarray_total_size_limit;
EXTER object sLbit;
EXTER object fLaref (object x,fixnum i, ...);
EXTER object fLsvref (object x,fixnum i);
EXTER object fLrow_major_aref (object x,fixnum i);
EXTER object fSaset1 (object x, fixnum i,object val);
EXTER object fSaset (object x,object ii,object y, ...);
EXTER object fSsvset (object x,fixnum i,object val);
EXTER object fSmake_vector1 (fixnum n,fixnum elt_type,object staticp,...);
EXTER object fSget_aelttype (object x);
EXTER object fSmake_vector (object x0,object x1,object x2,object x3,object x4,object x5,object x6,...);
EXTER object fSmake_array1 (fixnum elt_type,object staticp,object initial_element,object displaced_to,fixnum displaced_index_offset, object dimensions);
EXTER object fScopy_array_portion (object x,object y,fixnum i1,fixnum i2,object n1o);
EXTER object fSfill_pointer_set (object x,fixnum i);
EXTER object fLfill_pointer (object x);
EXTER object fLarray_has_fill_pointer_p (object x);
EXTER object fLarray_element_type (object x);
EXTER object fLadjustable_array_p (object x);
EXTER object fSdisplaced_array_p (object x);
EXTER object fLarray_rank (object x);
EXTER object fLarray_dimension (object x,fixnum i);
EXTER object fSreplace_array (object old,object new);
EXTER object fLarray_total_size (object x);
EXTER object fSaset_by_cursor (object array,object val,object cursor);
EXTER object sSAmatch_dataA;
EXTER object sSAcase_fold_searchA;
EXTER object fSmatch_beginning (fixnum i);
EXTER object fSmatch_end (fixnum i);
EXTER object fScompile_regexp (object p);
EXTER object fSstring_match (object pattern,object string,...);
EXTER object sSs_data;
EXTER object sLcompile;
EXTER object sKcompile_toplevel;
EXTER object sLdeclare;
EXTER object sLeval;
EXTER object sKexecute;
EXTER object sSfunction_documentation;
EXTER object sLload;
EXTER object sLload_toplevel;
EXTER object sLprogn;
EXTER object sLtypep;
EXTER object sLvalues;
EXTER object sSvariable_documentation;
EXTER object sSsetf_function;
EXTER object sLwarn;
EXTER object sSAallow_gzipped_fileA;
EXTER object sSAcollect_binary_modulesA;
EXTER object sSAbinary_modulesA;
EXTER object sKmyaddr;
EXTER object sKmyport;
EXTER object sKasync;
EXTER object sKhost;
EXTER object sKserver;
EXTER object sKdaemon;
EXTER object sKpersistent;
EXTER object sSsocket;
EXTER object sLAstandard_inputA;
EXTER object sLAstandard_outputA;
EXTER object sLAerror_outputA;
EXTER object sLAterminal_ioA;
EXTER object sLAquery_ioA;
EXTER object sLAdebug_ioA;
EXTER object sLAtrace_outputA;
EXTER object sSAignore_eof_on_terminal_ioA;
EXTER object sSAload_pathnameA;
EXTER object sSAload_truenameA;
EXTER object sLAload_verboseA;
EXTER object sLAload_printA;
EXTER object sKabort;
EXTER object sKappend;
EXTER object sKcreate;
EXTER object sKdefault;
EXTER object sKexternal_format;
EXTER object sKdirection;
EXTER object sKelement_type;
EXTER object sKerror;
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
EXTER object sLAread_default_float_formatA;
EXTER object sLAread_baseA;
EXTER object sLAread_suppressA;
EXTER object sSY;
EXTER object sSYB;
EXTER object sSYZ;
EXTER object sLlistA;
EXTER object sLappend;
EXTER object sLnconc;
EXTER object sLapply;
EXTER object sLvector;
EXTER object sSAprint_line_prefixA;
EXTER object sKupcase;
EXTER object sKdowncase;
EXTER object sKcapitalize;
EXTER object sKstream;
EXTER object sKescape;
EXTER object sKreadably;
EXTER object sKpretty;
EXTER object sKcircle;
EXTER object sKbase;
EXTER object sKradix;
EXTER object sKcase;
EXTER object sKgensym;
EXTER object sKlevel;
EXTER object sKlength;
EXTER object sKarray;
EXTER object sKpprint_dispatch;
EXTER object sKlines;
EXTER object sKright_margin;
EXTER object sKmiser_width;
EXTER object sSAprin_levelA;
EXTER object sLAprint_escapeA;
EXTER object sLAprint_readablyA;
EXTER object sLAprint_prettyA;
EXTER object sLAprint_circleA;
EXTER object sLAprint_baseA;
EXTER object sLAprint_radixA;
EXTER object sLAprint_caseA;
EXTER object sLAprint_gensymA;
EXTER object sLAprint_levelA;
EXTER object sLAprint_lengthA;
EXTER object sLAprint_arrayA;
EXTER object sSAprint_packageA;
EXTER object sSAprint_structureA;
EXTER object sSpretty_print_format;
EXTER object sSAprint_nansA;
EXTER object sLApprint_dispatchA;
EXTER object sLAprint_linesA;
EXTER object sLAprint_miser_widthA;
EXTER object sLAprint_right_marginA;
EXTER object sLAread_evalA;
EXTER object fLformat (object strm, object control,...);
EXTER object sSAindent_formatted_outputA;
EXTER object sSApathname_resolveA;
EXTER object sSApathname_logicalA;
EXTER object sSApathname_virtualA;
EXTER object sSApathname_deviceA;
EXTER object sSApathname_expandA;
EXTER object sSApathname_errorA;
EXTER object fSsetenv (object variable,object value);
EXTER object fLdelete_file (object path);
EXTER object fLerror (object fmt_string,...);
EXTER object fLspecific_error (object error_name,object fmt_string,...);
EXTER object fLspecific_correctable_error (object error_name,object fmt_string,...);
EXTER object fLcerror (object continue_fmt_string,object fmt_string,...);
EXTER object fSihs_top (void);
EXTER object fSihs_fun (object x0);
EXTER object fSihs_vs (object x0);
EXTER object fSfrs_top (void);
EXTER object fSfrs_vs (object x0);
EXTER object fSfrs_bds (object x0);
EXTER object fSfrs_class (object x0);
EXTER object fSfrs_tag (object x0);
EXTER object fSfrs_ihs (object x0);
EXTER object fSbds_top (void);
EXTER object fSbds_var (object x0);
EXTER object fSbds_val (object x0);
EXTER object fSvs_top (void);
EXTER object fSvs (object x0);
EXTER object fSsch_frs_base (object x0,object x1);
EXTER object fSinternal_super_go (object tag,object x1,object x2);
EXTER object sSuniversal_error_handler;
EXTER object fSuniversal_error_handler (object x0,object x1,object x2,object x3,object error_fmt_string);
EXTER object sSterminal_interrupt;
EXTER object sKwrong_type_argument;
EXTER object sKtoo_few_arguments;
EXTER object sKtoo_many_arguments;
EXTER object sKunexpected_keyword;
EXTER object sKinvalid_form;
EXTER object sKunbound_variable;
EXTER object sKinvalid_variable;
EXTER object sKundefined_function;
EXTER object sKinvalid_function;
EXTER object sKpackage_error;
EXTER object sKparse_error;
EXTER object sKcatch;
EXTER object sKprotect;
EXTER object sKcatchall;
EXTER object fLget_universal_time (void);
EXTER object fLget_internal_real_time (void);
EXTER object sSAdefault_time_zoneA;
EXTER object fSgetpid (void);
EXTER object fSuse_fast_links (object flag,...);
EXTER object sScdefn;
EXTER object sLAlink_arrayA;
EXTER object sSAplt_tableA;
EXTER object fSprofile (object start_address,object scale);
EXTER object fSfunction_start (object funobj);
EXTER object fSset_up_combined (object first,...);
EXTER object fSdisplay_profile (object start_addr,object scal);
EXTER object fSarray_adress (object array);
EXTER object sSAprofile_arrayA;
EXTER object sSAinterrupt_enableA;
EXTER object sSsigusr1_interrupt;
EXTER object sSsigio_interrupt;
EXTER object sSsignal_safety_required (fixnum signo,fixnum safety);
EXTER object fSallow_signal (fixnum n);
EXTER object fSinitfun (object sym,object addr_ind,object argd,...);
EXTER object fSinitmacro (object first,...);
EXTER object fSset_key_struct (object key_struct_ind);
EXTER object fSinvoke (object x);
EXTER object fSopen_named_socket (fixnum port);
EXTER object fSclose_fd (fixnum fd);
EXTER object fSclose_sfd (object sfd);
EXTER object fSaccept_socket_connection (object named_socket);
EXTER object fShostname_to_hostid (object host);
EXTER object fSgethostname (void);
EXTER object fShostid_to_hostname (object host_id);
EXTER object fScheck_fd_for_input (fixnum fd,fixnum timeout);
EXTER object fSclear_connection (fixnum fd);
EXTER object fSconnection_state_fd (object sfd);
EXTER object fSour_write (object sfd,object buffer,fixnum nbytes);
EXTER object fSour_read_with_offset (object fd,object buffer,fixnum offset,fixnum nbytes,fixnum timeout);
EXTER object fSprint_to_string1 (object str,object x,object the_code);
EXTER object fSset_sigio_for_fd (fixnum fd);
EXTER object fSreset_string_input_stream (object strm,object string,fixnum start,fixnum end);
EXTER object fScheck_state_input (object osfd,fixnum timeout);
EXTER object fSclear_connection_state (object osfd);
EXTER object fSgetpeername (object sock);
EXTER object fSgetsockname (object sock);
EXTER object fSset_blocking (object sock,object setBlocking);
EXTER object sSAlink_hash_tableA;
EXTER object sSAreadline_prefixA;
/* if already mp.h has been included skip */
#ifdef GMP
#define save_avma 
#define restore_avma 
#endif

#ifdef _MP_H
#ifdef GMP

#else /* no gmp */

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

#endif /* NO GMP */
#endif /*  _MP_H */

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
/* #ifndef alloca */
/* char *alloca(); */
/* #endif */
#include <stdlib.h>
EXTER char *alloca_val;
#define OUR_ALLOCA(n) ZALLOCA(n)
#define ALLOCA_FREE(n) 

#define ALLOCA_CONS_ALIGN(n) ({alloca_val=ZALLOCA((n)*sizeof(struct cons)+sizeof(alloca_val));if (((unsigned long)alloca_val)&sizeof(alloca_val)) alloca_val+=sizeof(alloca_val);alloca_val;})

#define ALLOCA_CONS(n) ALLOCA_CONS_ALIGN(n)
#define ON_STACK_CONS(x,y) (ALLOCA_CONS_ALIGN(1), on_stack_cons(x,y)) 
/* #define ALLOCA_CONS(n) (alloca_val=alloca((n)*sizeof(struct cons)+sizeof(n)),alloca_val+=((unsigned long)alloca_val&sizeof(n))) */
/* #define ON_STACK_CONS(x,y) (alloca_val=alloca(sizeof(struct cons)), on_stack_cons(x,y))  */
#define ON_STACK_LIST on_stack_list
#define ON_STACK_LIST_VECTOR on_stack_list_vector
#define ON_STACK_LIST_VECTOR_NEW on_stack_list_vector_new
#define ON_STACK_MAKE_LIST on_stack_make_list
object on_stack_cons();
object on_stack_list(int,...);
/* object on_stack_list_vector(int,va_list); */
object on_stack_list_vector_new(fixnum,object,va_list);
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
#define aref1 fLrow_major_aref 
#define aref  fLrow_major_aref
/*  #define aset1 fSaset1 */
#define aset  aset1
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

#define	CMPmake_fixnum(x) make_fixnum(x)

object make_integer();
  /* copy x to y, increasing space by factor of 2  */

#ifndef GMP
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
  if(_n) var = replace_copy2(_xx,ZALLOCA(_n));}while(0)

#define SETQ_IO(var,alloc,val) {object _xx =(val) ; \
			      int _n = obj_replace_copy1(_xx,var); \
			    if(_n) var = obj_replace_copy2(_xx,ZALLOCA(_n));}
#define IDECL(a,b,c) our_ulong b[4];a =(b[0]=0x1010000 +4,b) ; object c
#else
GEN setq_io(),setq_ii();
#define SETQ_IO(x,alloc,val)   (x)=setq_io(x,&alloc,val)
#define SETQ_II(x,alloc,val)   (x)=setq_ii(x,&alloc,val)
#define IDECL(a,b,c) our_ulong b[4];a =(b[0]=0x1010000 +4,b);object c
#endif

#else

/* typedef MP_INT * GEN; */

int obj_to_mpz(object,MP_INT *);
int obj_to_mpz1(object,MP_INT *,void *);
int mpz_to_mpz(MP_INT *,MP_INT *);
int mpz_to_mpz1(MP_INT *,MP_INT *,void *);
void isetq_fix(MP_INT *,int);
MP_INT * otoi(object x);

#ifndef HAVE_ALLOCA
#error Need alloca for GMP
#endif

/* Add fourth argument af to the SETQ macros to allow for malloc allocation */
/* inside setjmp frames, and faster alloca allocation otherwise.*/
/* FIXME, verify that IDECL need not be changed, improve logic behind malloc */
/* selection, e.g. closure boundaries.  CM 20031201*/
#define IDECL(a,b,c) mp_limb_t *c=(mp_limb_t *)ZALLOCA(1*sizeof(mp_limb_t));MP_INT b={1,1,c}; a = &b 
#define IDECL1(a,b,c) mp_limb_t *c=(mp_limb_t *)ZALLOCA(1*sizeof(mp_limb_t));MP_INT b={1,1,c}; GEN a = &b 
#define SETQ_IO(var,alloc,val,af) { object _xx = (val); \
                                    int _n; \
                                    if ((_n=obj_to_mpz(_xx,(var)))) {\
                                      obj_to_mpz1(_xx,(var),af(_n));}}
#define SETQ_II(var,alloc,val,af) { MP_INT * _xx = (val); \
                                    int _n; \
                                    if ((_n=mpz_to_mpz(_xx,(var)))) {\
                                      mpz_to_mpz1(_xx,(var),af(_n));}}
#define ISETQ_FIX(a,b,c) isetq_fix(a,c)


/*  #define IDECL(a,b,c) MP_INT b; a = (mpz_init(&b),&b) ; object c */
/*  #define SETQ_IO(var,alloc,val) { object _xx = (val); \ */
/*                                   obj_to_mpz(_xx,(var));} */
/*  #define SETQ_II(var,alloc,val) { MP_INT * _xx = (val); \ */
/*                                   mpz_to_mpz(_xx,(var));} */
/*  #define ISETQ_FIX(a,b,c) isetq_fix(a,c) */


#endif /* end no GMP */

#define	cclosure_call	funcall

#ifndef _REGEXP
#define _REGEXP 1

#define NSUBEXP  10
typedef struct regexp {
	char *startp[NSUBEXP];
	char *endp[NSUBEXP];
	char regstart;		/* Internal use only. */
	char reganch;		/* Internal use only. */
	char *regmust;		/* Internal use only. */
	int regmlen;		/* Internal use only. */
	unsigned char regmaybe_boyer;
	char program[1];	/* Unwarranted chumminess with compiler. */
} regexp;

#if __STDC__ == 1
#define _ANSI_ARGS_(x) x
#else
#define _ANSI_ARGS_(x) ()
#endif

/* extern regexp *regcomp _ANSI_ARGS_((char *exp)); */
/* extern int regexec _ANSI_ARGS_((regexp *prog, char *string, char *start,int length )); */
extern void regsub _ANSI_ARGS_((regexp *prog, char *source, char *dest));
#ifndef regerror
extern void regerror _ANSI_ARGS_((char *msg));
#endif

#endif /* REGEXP */
/* alloc.c:89:OF */ extern char *alloc_page (long n); /* (n) int n; */
/* alloc.c:149:OF */ extern void add_page_to_freelist (char *p, struct typemanager *tm); /* (p, tm) char *p; struct typemanager *tm; */
/* alloc.c:196:OF */ extern object type_name (int t); /* (t) int t; */
/* alloc.c:213:OF */ extern object alloc_object (enum type t); /* (t) enum type t; */
/* alloc.c:296:OF */ extern object make_cons (object a, object d); /* (a, d) object a; object d; */
/* alloc.c:364:OF */ extern object on_stack_cons (object x, object y); /* (x, y) object x; object y; */
/* alloc.c:376:OF */ extern object fSallocated (object typ); /* (typ) object typ; */
/* alloc.c:401:OF */ extern object fSreset_number_used (object typ); /* (typ) object typ; */
/* alloc.c:480:OF */ extern void insert_contblock (char *p, int s); /* (p, s) char *p; int s; */
/* alloc.c:480:OF */ extern void insert_maybe_sgc_contblock (char *p, int s); /* (p, s) char *p; int s; */
/* alloc.c:611:OF */ extern void set_maxpage (void); /* () */
/* alloc.c:635:OF */ extern void gcl_init_alloc (void); /* () */
/* alloc.c:737:OF */ extern object fSstaticp (object x); /* (x) object x; */
/* alloc.c:822:OF */ extern object fSallocate_sgc (object type,fixnum min,fixnum max,fixnum free_percent); /* (type, min, max, free_percent) object type; int min; int max; int free_percent; */
/* alloc.c:846:OF */ extern object fSallocate_growth (object type,fixnum min,fixnum max,fixnum percent,fixnum percent_free); /* (type, min, max, percent, percent_free) object type; int min; int max; int percent; int percent_free; */
/* alloc.c:911:OF */ extern object fSallocated_contiguous_pages (void); /* () */
/* alloc.c:918:OF */ extern object fSmaximum_contiguous_pages (void); /* () */
/* alloc.c:958:OF */ extern object fSallocated_relocatable_pages (void); /* () */
/* alloc.c:965:OF */ extern object fSget_hole_size (void); /* () */
/* alloc.c:1000:OF */ extern void gcl_init_alloc_function (void); /* () */
/* alloc.c:1126:OF */ extern void free (void *ptr); /* (ptr) void *ptr; */
/* array.c:57:OF */ extern void Laref (void); /* () */
/* array.c:126:OF */ extern object fLsvref (object x, fixnum i); /* (x, i) object x; unsigned int i; */
/* array.c:142:OF */ extern object fLrow_major_aref (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:190:OF */ extern object fSaset1 (object x,fixnum i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:262:OF */ extern void siLaset (void); /* () */
/* array.c:321:OF */ extern void siLsvset (void); /* () */
/* array.c:324:OF */ extern object fSsvset (object x,fixnum i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:461:OF */ extern object fSget_aelttype (object x); /* (x) object x; */
/* array.c:480:OF */ extern void siLmake_vector (void); /* () */
/* array.c:519:OF */ extern object fSmake_array1 (fixnum elt_type, object staticp, object initial_element, object displaced_to,fixnum displaced_index_offset, object dimensions); /* (elt_type, staticp, initial_element, displaced_to, displaced_index_offset, dimensions) int elt_type; object staticp; object initial_element; object displaced_to; int displaced_index_offset; object dimensions; */
/* array.c::OF */ extern object fSmake_vector1_1 (fixnum n,fixnum elt_type,object staticp); 
/* array.c:738:OF */ extern void adjust_displaced (object x, long diff); /* (x, diff) object x; int diff; */
/* array.c:790:OF */ extern void gset (void *p1, void *val, int n, int typ); /* (p1, val, n, typ) char *p1; char *val; int n; int typ; */
/* array.c:831:OF */ extern object fScopy_array_portion (object x, object y,fixnum i1,fixnum i2, object n1); /* (x, y, i1, i2, n1) object x; object y; int i1; int i2; int n1; */
/* array.c:879:OF */ extern void array_allocself (object x, int staticp, object dflt); /* (x, staticp, dflt) object x; int staticp; object dflt; */
/* array.c:920:OF */ extern void siLfill_pointer_set (void); /* () */
/* array.c:923:OF */ extern object fSfill_pointer_set (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:944:OF */ extern void Lfill_pointer (void); /* () */
/* array.c:947:OF */ extern object fLfill_pointer (object x); /* (x) object x; */
/* array.c:965:OF */ extern object fLarray_has_fill_pointer_p (object x); /* (x) object x; */
/* array.c:986:OF */ extern void Larray_element_type (void); /* () */
/* array.c:989:OF */ extern object fLarray_element_type (object x); /* (x) object x; */
/* array.c:995:OF */ extern void Ladjustable_array_p (void); /* () */
/* array.c:998:OF */ extern object fLadjustable_array_p (object x); /* (x) object x; */
/* array.c:1002:OF */ extern void siLdisplaced_array_p (void); /* () */
/* array.c:1005:OF */ extern object fSdisplaced_array_p (object x); /* (x) object x; */
/* array.c:1010:OF */ extern void Larray_rank (void); /* () */
/* array.c:1013:OF */ extern object fLarray_rank (object x); /* (x) object x; */
/* array.c:1020:OF */ extern void Larray_dimension (void); /* () */
/* array.c:1023:OF */ extern object fLarray_dimension (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:1090:OF */ extern void siLreplace_array (void); /* () */
/* array.c:1093:OF */ extern object fSreplace_array (object old, object new); /* (old, new) object old; object new; */
/* array.c:1132:OF */ extern object fLarray_total_size (object x); /* (x) object x; */
/* array.c:1140:OF */ extern object fSaset_by_cursor (object array, object val, object cursor); /* (array, val, cursor) object array; object val; object cursor; */
/* array.c:1160:OF */ extern void gcl_init_array_function (void); /* () */
/* assignment.c:62:OF */ extern void setq (object sym, object val); /* (sym, val) object sym; object val; */
/* assignment.c:128:OF */ extern void Lset (void); /* () */
/* assignment.c:130:OF */ extern object fLset (object symbol, object value); /* (symbol, value) object symbol; object value; */
/* assignment.c:142:OF */ extern void siLfset (void); /* () */
/* assignment.c:144:OF */ extern object fSfset (object sym, object function); /* (sym, function) object sym; object function; */
/* assignment.c:214:OF */ extern object fLmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:228:OF */ extern void Lfmakunbound (void); /* () */
/* assignment.c:230:OF */ extern object fLfmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:547:OF */ extern object clear_compiler_properties (object sym, object code); /* (sym, code) object sym; object code; */
/* assignment.c:563:OF */ extern object fSclear_compiler_properties (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* assignment.c:591:OF */ extern void gcl_init_assignment (void); /* () */
/* backq.c:259:OF */ extern int backq_car (object x); /* (x) object x; */
/* backq.c:381:OF */ extern void gcl_init_backq (void); /* () */
/* bds.c:31:OF */ extern void bds_unwind (bds_ptr new_bds_top); /* (new_bds_top) bds_ptr new_bds_top; */
/* big.c:53:OF */ extern object fSset_gmp_allocate_relocatable (object flag); /* (flag) object flag; */
/* gmp_big.c:96:OF */ extern void gcl_init_big1 (void); /* () */
/* gmp_big.c:108:OF */ extern object new_bignum (void); /* () */
/* gmp_big.c:161:OF */ extern object make_integer (__mpz_struct *u); /* (u) __mpz_struct *u; */
/* gmp_big.c:207:OF */ extern int big_compare (object x, object y); /* (x, y) object x; object y; */
/* gmp_big.c:214:OF */ extern object normalize_big_to_object (object x); /* (x) object x; */
/* gmp_big.c:230:OF */ extern void add_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:244:OF */ extern void mul_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:289:OF */ extern object normalize_big (object x); /* (x) object x; */
/* gmp_big.c:302:OF */ extern object big_minus (object x); /* (x) object x; */
/* gmp_big.c:324:OF */ extern double big_to_double (object x); /* (x) object x; */
/* gmp_big.c:454:OF */ extern object maybe_replace_big (object x); /* (x) object x; */
/* gmp_big.c:472:OF */ extern object bignum2 ( int h,  int l); /* (h, l) unsigned int h; unsigned int l; */
/* gmp_big.c:482:OF */ extern void integer_quotient_remainder_1 (object x, object y, object *qp, object *rp); /* (x, y, qp, rp) object x; object y; object *qp; object *rp; */
/* gmp_big.c:502:OF */ extern object coerce_big_to_string (object x, int printbase); /* (x, printbase) object x; int printbase; */
/* gmp_big.c:521:OF */ extern void gcl_init_big (void); /* () */
/* big.c:72:OF */ extern int big_sign (object x); /* (x) object x; */
/* big.c:78:OF */ extern void set_big_sign (object x, int sign); /* (x, sign) object x; int sign; */
/* big.c:85:OF */ extern void zero_big (object x); /* (x) object x; */
/* bind.c:74:OF */ extern void lambda_bind (object *arg_top); /* (arg_top) object *arg_top; */
/* bind.c:564:OF */ extern void bind_var (object var, object val, object spp); /* (var, val, spp) object var; object val; object spp; */
/* bind.c:610:OF */ extern object find_special (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:670:OF */ extern object let_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:688:OF */ extern object letA_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:712:OF */ extern void parse_key (object *base, bool rest, bool allow_other_keys, register int n, ... ); 
/* bind.c:820:OF */ extern void check_other_key (object l, int n, ...); 
struct key {short n,allow_other_keys;
	    iobject *defaults;
	    iobject keys[1];
	   };

/* bind.c:866:OF */ extern int parse_key_new_new (int n, object *base, struct key *keys, object first, va_list ap); /* (n, base, keys, ap) int n; object *base; struct key *keys; va_list ap; */
/* bind.c:916:OF */ extern int parse_key_rest_new (object rest, int n, object *base, struct key *keys, object first, va_list ap); /* (rest, n, base, keys, ap) object rest; int n; object *base; struct key *keys; va_list ap; */
/* bind.c:975:OF */ extern void set_key_struct (struct key *ks, object data); /* (ks, data) struct key *ks; object data; */
/* bind.c:995:OF */ extern void gcl_init_bind (void); /* () */
/* block.c:121:OF */ extern void gcl_init_block (void); /* () */
/* bsearch.c:5:OF */ extern void *bsearch (const void *key, const void *base, size_t nel, size_t keysize, int (*compar) (const void *,const void *)); /* (key, base, nel, keysize, compar) char *key; char *base; unsigned int nel; unsigned int keysize; int (*compar)(); */
#if defined (__MINGW32__)
/* bzero.c:3:OF */ /*  extern void bzero (char *b, size_t length); */ /* (b, length) char *b; int length; */
#endif
/* catch.c:61:OF */ extern object fSerror_set (object x0); /* (x0) object x0; */
/* catch.c:166:OF */ extern void gcl_init_catch (void); /* () */
/* cfun.c:37:OF */ extern object make_cfun (void (*self)(), object name, object data, char *start, int size); /* (self, name, data, start, size) int (*self)(); object name; object data; char *start; int size; */
/* cfun.c:56:OF */ extern object make_sfun (object name, object (*self)(), int argd, object data); /* (name, self, argd, data) object name; int (*self)(); int argd; object data; */
/* cfun.c:91:OF */ extern object make_cclosure_new (void (*self)(), object name, object env, object data); /* (self, name, env, data) int (*self)(); object name; object env; object data; */
/* cfun.c:108:OF */ extern object make_cclosure (void (*self)(), object name, object env, object data, char *start, int size); /* (self, name, env, data, start, size) int (*self)(); object name; object env; object data; char *start; int size; */
/* cfun.c:124:OF */ extern object fSmc (object name, object address); /* (name, address) object name; object address; */
/* cfun.c:150:OF */ extern object fSmfsfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:174:OF */ extern object fSmfvfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:193:OF */ extern object fSmfvfun_key (object symbol, object address, object argd, object keys); /* (symbol, address, argd, keys) object symbol; object address; object argd; object keys; */
/* cfun.c:221:OF */ extern object fSmf (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:269:OF */ extern object fSmm (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:283:OF */ extern object make_function_internal (char *s, void(*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:299:OF */ extern object make_si_sfun_internal (char *s, object (*f)(), int argd); /* (s, f, argd) char *s; int (*f)(); int argd; */
/* cfun.c:322:OF */ extern object make_si_function_internal (char *s, void (*f) ()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:341:OF */ extern object make_special_form_internal (char *s, void (*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:352:OF */ extern object fScompiled_function_name (object fun); /* (fun) object fun; */
/* cfun.c:371:OF */ extern void turbo_closure (object fun); /* (fun) object fun; */
/* cfun.c:392:OF */ extern object fSturbo_closure (object funobj); /* (funobj) object funobj; */
/* cfun.c:403:OF */ extern void gcl_init_cfun (void); /* () */
/* cmac.c:147:OF */ extern object fScmod (object num); /* (num) object num; */
/* cmac.c:156:OF */ extern object fScplus (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:165:OF */ extern object fSctimes (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:175:OF */ extern object fScdifference (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:191:OF */ extern void gcl_init_cmac (void); /* () */
/* cmpaux.c:33:OF */ extern void siLspecialp (void); /* () */
/* cmpaux.c:35:OF */ extern object fSspecialp (object sym); /* (sym) object sym; */
/* cmpaux.c:73:OF */ extern object fSdebugger (object sym, object val); /* (sym, val) object sym; object val; */
/* cmpaux.c:82:OF */ extern object fSsetvv (object index, object val); /* (index, val) object index; object val; */
/* cmpaux.c:95:OF */ extern void gcl_init_cmpaux (void); /* () */
/* cmpaux.c:106:OF */ /* extern int ifloor (int x, int y); */ /* (x, y) int x; int y; */
/* cmpaux.c:124:OF */ /* extern int imod (int x, int y); */ /* (x, y) int x; int y; */
/* cmpaux.c:185:OF */ extern int object_to_int (object x); /* (x) object x; */
/* cmpaux.c:263:OF */ extern char *object_to_string (object x); /* (x) object x; */
typedef int (*FUNC)();
/* cmpaux.c:294:OF */ extern void call_init (int init_address, object memory, object fasl_vec, FUNC fptr); /* (init_address, memory, fasl_vec, fptr) int init_address; object memory; object fasl_vec; FUNC fptr; */
/* cmpaux.c:339:OF */ extern void do_init (object *statVV); /* (statVV) object *statVV; */
/* cmpaux.c:416:OF */ extern void gcl_init_or_load1 (void (*fn) (void), char *file); /* (fn, file) int (*fn)(); char *file; */
/* conditional.c:200:OF */ extern void gcl_init_conditional (void); /* () */
/* error.c:38:OF */ extern void terminal_interrupt (int correctable); /* (correctable) int correctable; */
/* error.c:147:OF */ extern void Lerror (void); /* () */
/* error.c:164:OF */ extern void Lcerror (void); /* () */
/* error.c:184:OF */ extern void FEerror (char *s, int num, ... ); /* (s, num, arg1, arg2, arg3, arg4) char *s; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:203:OF */ extern void FEwrong_type_argument (object type, object value); /* (type, value) object type; object value; */
/* error.c:210:OF */ extern void FEtoo_few_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:219:OF */ extern void FEtoo_few_argumentsF (object args); /* (args) object args; */
/* error.c:227:OF */ extern void FEtoo_many_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:234:OF */ extern void FEtoo_many_argumentsF (object args); /* (args) object args; */
/* error.c:247:OF */ extern void FEunexpected_keyword (object key); /* (key) object key; */
/* error.c:258:OF */ extern void FEinvalid_form (char *s, object form); /* (s, form) char *s; object form; */
/* error.c:266:OF */ extern void FEunbound_variable (object sym); /* (sym) object sym; */
/* error.c:273:OF */ extern void FEinvalid_variable (char *s, object obj); /* (s, obj) char *s; object obj; */
/* error.c:280:OF */ extern void FEundefined_function (object fname); /* (fname) object fname; */
/* error.c:287:OF */ extern void FEinvalid_function (object obj); /* (obj) object obj; */
/* error.c:297:OF */ extern object CEerror (char *error_str, char *cont_str, int num, object arg1, object arg2, object arg3, object arg4); /* (error_str, cont_str, num, arg1, arg2, arg3, arg4) char *error_str; char *cont_str; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:330:OF */ extern object fSihs_top (void); /* () */
/* error.c:337:OF */ extern object fSihs_fun (object x0); /* (x0) object x0; */
/* error.c:346:OF */ extern object fSihs_vs (object x0); /* (x0) object x0; */
/* error.c:371:OF */ extern object fSfrs_top (void); /* () */
/* error.c:378:OF */ extern object fSfrs_vs (object x0); /* (x0) object x0; */
/* error.c:387:OF */ extern object fSfrs_bds (object x0); /* (x0) object x0; */
/* error.c:397:OF */ extern object fSfrs_class (object x0); /* (x0) object x0; */
/* error.c:413:OF */ extern object fSfrs_tag (object x0); /* (x0) object x0; */
/* error.c:422:OF */ extern object fSfrs_ihs (object x0); /* (x0) object x0; */
/* error.c:448:OF */ extern object fSbds_top (void); /* () */
/* error.c:455:OF */ extern object fSbds_var (object x0); /* (x0) object x0; */
/* error.c:464:OF */ extern object fSbds_val (object x0); /* (x0) object x0; */
/* error.c:487:OF */ extern object fSvs_top (void); /* () */
/* error.c:496:OF */ extern object fSvs (object x0); /* (x0) object x0; */
/* error.c:505:OF */ extern object fSsch_frs_base (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* error.c:523:OF */ extern object fSinternal_super_go (object tag, object x1, object x2); /* (tag, x1, x2) object tag; object x1; object x2; */
/* error.c:549:OF */ extern object fSuniversal_error_handler (object x0, object x1, object x2, object x3, object error_fmt_string); /* (x0, x1, x2, x3, error_fmt_string) object x0; object x1; object x2; object x3; object error_fmt_string; */
/* error.c:561:OF */ extern void check_arg_failed (int n); /* (n) int n; */
/* error.c:568:OF */ extern void too_few_arguments (void); /* () */
/* error.c:573:OF */ extern void too_many_arguments (void); /* () */
/* error.c:586:OF */ extern void ck_larg_exactly (int n, object x); /* (n, x) int n; object x; */
/* error.c:595:OF */ extern void invalid_macro_call (void); /* () */
/* error.c:618:OF */ extern object wrong_type_argument (object typ, object obj); /* (typ, obj) object typ; object obj; */
/* error.c:625:OF */ extern void illegal_declare (object form); /* (form) int form; */
/* error.c:635:OF */ extern void not_a_string_or_symbol (object x); /* (x) object x; */
/* error.c:641:OF */ extern void not_a_symbol (object obj); /* (obj) object obj; */
/* error.c:647:OF */ extern int not_a_variable (object obj); /* (obj) object obj; */
/* error.c:653:OF */ extern void illegal_index (object x, object i); /* (x, i) object x; object i; */
/* error.c:660:OF */ extern void check_socket (object x); /* (x) object x; */
/* error.c:670:OF */ extern void check_stream (object strm); /* (strm) object strm; */
/* error.c:697:OF */ extern void check_arg_range (int n, int m); /* (n, m) int n; int m; */
/* error.c:727:OF */ extern void gcl_init_error (void); /* () */
/* eval.c:143:OF */ extern void funcall (object fun); /* (fun) object fun; */
/* eval.c:375:OF */ extern void lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:461:OF */ extern void symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:549:OF */ extern object simple_lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:645:OF */ extern object simple_symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:739:OF */ extern void super_funcall (object fun); /* (fun) object fun; */
/* eval.c:752:OF */ extern void super_funcall_no_event (object fun); /* (fun) object fun; */
/* eval.c:936:OF */ extern object Ieval (object form); /* (form) object form; */
/* eval.c:944:OF */ extern void eval (object form); /* (form) object form; */
/* eval.c:1189:OF */ extern void Leval (void); /* () */
/* eval.c:1191:OF */ extern object fLeval (object x0); /* (x0) object x0; */
/* eval.c:1203:OF */ extern void Levalhook (void); /* () */
/* eval.c:1269:OF */ extern void Lconstantp (void); /* () */
/* eval.c:1271:OF */ extern object fLconstantp (object x0); /* (x0) object x0; */
/* eval.c:1293:OF */ extern object ieval (object x); /* (x) object x; */
/* eval.c:1309:OF */ extern object ifuncall1 (object fun, object arg1); /* (fun, arg1) object fun; object arg1; */
/* eval.c:1328:OF */ extern object ifuncall2 (object fun, object arg1, object arg2); /* (fun, arg1, arg2) object fun; object arg1; object arg2; */
/* eval.c:1348:OF */ extern object ifuncall3 (object fun, object arg1, object arg2, object arg3); /* (fun, arg1, arg2, arg3) object fun; object arg1; object arg2; object arg3; */
typedef void (*funcvoid)(void);
/* eval.c:1545:OF */ extern void gcl_init_eval (void); /* () */
/* fasdump.c:1465:OF */ extern object read_fasl_vector (object in); /* (in) object in; */
/* fat_string.c:29:OF */ extern object fSprofile (object start_address, object scale); /* (start_address, scale) object start_address; object scale; */
/* fat_string.c:46:OF */ extern object fSfunction_start (object funobj); /* (funobj) object funobj; */
/* fat_string.c:331:OF */ extern object fSdisplay_profile (object start_addr, object scal); /* (start_addr, scal) object start_addr; object scal; */
/* fat_string.c:394:OF */ extern object fSarray_adress (object array); /* (array) object array; */
/* fat_string.c:435:OF */ extern void gcl_init_fat_string (void); /* () */
/* sfasli.c::OF */ extern void gcl_init_sfasl (void); /* () */
/* format.c::OF */ extern object fLformat_1(object strm, object control,object x);
/* format.c:2084:OF */ extern void Lformat (void); /* () */
/* format.c:2171:OF */ extern void gcl_init_format (void); /* () */
/* frame.c:32:OF */ extern void unwind (frame_ptr fr, object tag); /* (fr, tag) frame_ptr fr; object tag; */
/* frame.c:58:OF */ extern frame_ptr frs_sch (object frame_id); /* (frame_id) object frame_id; */
/* frame.c:69:OF */ extern frame_ptr frs_sch_catch (object frame_id); /* (frame_id) object frame_id; */
/* funlink.c:19:OF */ extern void call_or_link (object sym, int setf, void **link); /* (sym, link) object sym; void **link; */
/* funlink.c:41:OF */ extern void call_or_link_closure (object sym, int setf,void **link, void **ptr); /* (sym, link, ptr) object sym; void **link; object *ptr; */
/* funlink.c:230:OF */ extern object c_apply_n (object (*fn)(), int n, object *x); /* (fn, n, x) long int (*fn)(); int n; object *x; */
/* funlink.c:696:OF */ extern object call_proc0 (object sym, int setf,void *link); /* (sym, link) object sym; void *link; */
/* funlink.c:784:OF */ extern int clear_stack (object *beg, object *limit); /* (beg, limit) object *beg; object *limit; */
/* funlink.c:821:OF */ extern void gcl_init_links (void); /* () */
/* gbc.c:151:OF */ extern void enter_mark_origin (object *p); /* (p) object *p; */
/* gbc.c:938:OF */ extern void GBC (enum type t); /* (t) enum type t; */
/* gbc.c:1326:OF */ extern object fLgbc (object x0); /* (x0) object x0; */
/* sgbc.c:924:OF */ extern int sgc_count_type (int t); /* (t) int t; */
/* sgbc.c:938:OF */ extern int sgc_start (void); /* () */
/* sgbc.c:1068:OF */ extern int sgc_quit (void); /* () */
/* sgbc.c:1131:OF */ extern void make_writable (unsigned long beg, unsigned long i); /* (beg, i) int beg; int i; */
#ifndef __MINGW32__
/* #include <signal.h> */
#endif
/* sgbc.c:1246:OF */ extern void memory_protect (int on); /* (on) int on; */
/* sgbc.c:1306:OF */ extern void perm_writable (char *p, long n); /* (p, n) char *p; int n; */
/* sgbc.c:1306:OF */ extern void un_perm_writable (char *p, long n); /* (p, n) char *p; int n; */
/* sgbc.c:1321:OF */ extern void system_error (void); /* () */
/* gbc.c:1357:OF */ extern void gcl_init_GBC (void); /* () */
/* gnumalloc.c:286:OF */ extern void malloc_init (char *start, void (*warnfun) (/* ??? */)); /* (start, warnfun) char *start; void (*warnfun)(); */
/* gnumalloc.c:301:OF */ extern int malloc_usable_size (char *mem); /* (mem) char *mem; */
/* gnumalloc.c:461:OF */ /*  extern void *malloc (size_t n); */ /* (n) unsigned int n; */
/* gnumalloc.c:529:OF */ /*  extern int free (char *mem); */ /* (mem) char *mem; */
/* gnumalloc.c:577:OF */ /*  extern char *realloc (char *mem, register unsigned int n); */ /* (mem, n) char *mem; register unsigned int n; */
/* gnumalloc.c:639:OF */ /*  extern char *memalign (unsigned int alignment, unsigned int size); */ /* (alignment, size) unsigned int alignment; unsigned int size; */
/* gnumalloc.c:737:OF */ extern int get_lim_data (void); /* () */
/* grab_defs.c:35:OF */ extern int read_some (char *buf, int n, int start_ch, int copy); /* (buf, n, start_ch, copy) char *buf; int n; int start_ch; int copy; */
/* grab_defs.c:71:OF */ /*  extern int main (void); */ /* () */
/* iteration.c:457:OF */ extern void gcl_init_iteration (void); /* () */
/* let.c:29:OF */ extern void let_var_list (object var_list); /* (var_list) object var_list; */
/* let.c:321:OF */ extern void gcl_init_let (void); /* () */
/* lex.c:34:OF */ extern object assoc_eq (object key, object alist); /* (key, alist) object key; object alist; */
/* lex.c:47:OF */ extern void lex_fun_bind (object name, object fun); /* (name, fun) object name; object fun; */
/* lex.c:59:OF */ extern void lex_macro_bind (object name, object exp_fun); /* (name, exp_fun) object name; object exp_fun; */
/* lex.c:70:OF */ extern void lex_tag_bind (object tag, object id); /* (tag, id) object tag; object id; */
/* lex.c:82:OF */ extern void lex_block_bind (object name, object id); /* (name, id) object name; object id; */
/* lex.c:95:OF */ extern object lex_tag_sch (object tag); /* (tag) object tag; */
/* lex.c:110:OF */ extern object lex_block_sch (object name); /* (name) object name; */
/* lex.c:125:OF */ extern void gcl_init_lex (void); /* () */
/* littleXwin.c:32:OF */ /*  extern Window open_window (void); */ /* () */
/* littleXwin.c:102:OF */ /*  extern int close_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:110:OF */ /*  extern int draw_line (Window the_window, int x1, int y1, int x2, int y2); */ /* (the_window, x1, y1, x2, y2) Window the_window; int x1; int y1; int x2; int y2; */
/* littleXwin.c:119:OF */ /*  extern int draw_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2);  *//* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:129:OF */ /*  extern int fill_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2); */ /* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:139:OF */ /*  extern int clear_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2);  *//* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:149:OF */ /*  extern int set_arc_mode (int pie_or_chord); */ /* (pie_or_chord) int pie_or_chord; */
/* littleXwin.c:162:OF */ /*  extern int erase_line (Window the_window, int x1, int y1, int x2, int y2);  *//* (the_window, x1, y1, x2, y2) Window the_window; int x1; int y1; int x2; int y2; */
/* littleXwin.c:171:OF */ /*  extern int draw_text (Window the_window, char *string, int x, int y); */ /* (the_window, string, x, y) Window the_window; char *string; int x; int y; */
/* littleXwin.c:182:OF */ /*  extern int erase_text (Window the_window, char *string, int x, int y); */ /* (the_window, string, x, y) Window the_window; char *string; int x; int y; */
/* littleXwin.c:193:OF */ /*  extern int clear_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:201:OF */ /*  extern int resize_window (Window the_window, int width, int height); */ /* (the_window, width, height) Window the_window; int width; int height; */
/* littleXwin.c:210:OF */ /*  extern int raise_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:218:OF */ /*  extern int use_font (char *font_name); */ /* (font_name) char *font_name; */
/* littleXwin.c:233:OF */ /*  extern int set_background (Window the_window, char *color_string); */ /* (the_window, color_string) Window the_window; char *color_string; */
/* littleXwin.c:251:OF */ /*  extern int set_foreground (char *color_string); */ /* (color_string) char *color_string; */
/* macros.c:139:OF */ extern object Imacro_expand1 (object exp_fun, object form); /* (exp_fun, form) object exp_fun; object form; */
/* macros.c:173:OF */ extern void Lmacroexpand (void); /* () */
/* macros.c:224:OF */ extern void Lmacroexpand_1 (void); /* () */
/* macros.c:265:OF */ extern object macro_expand (object form); /* (form) object form; */
/* macros.c:344:OF */ extern void gcl_init_macros (void); /* () */
/* main.c:111:OF */ extern int main (int argc, char **argv, char **envp); /* (argc, argv, envp) int argc; char **argv; char **envp; */
/* main.c:346:OF */ extern void install_segmentation_catcher (void); /* () */
/* main.c:359:OF */ extern void error (char *s); /* (s) char *s; */
/* main.c:519:OF */ extern object vs_overflow (void); /* () */
/* main.c:528:OF */ extern void bds_overflow (void); /* () */
/* main.c:537:OF */ extern void frs_overflow (void); /* () */
/* main.c:546:OF */ extern void ihs_overflow (void); /* () */
/* main.c:556:OF */ extern void segmentation_catcher (int,long,void *,char *); /* () */
/* main.c:587:OF */ extern void Lby (void); /* () */
/* main.c:607:OF */ extern void Lquit(void); /* () */
/* main.c:612:OF */ extern void Lexit(void); /* () */
/* main.c:619:OF */ extern int c_trace (void); /* () */
/* main.c:695:OF */ extern void siLreset_stack_limits (void); /* (arg) int arg; */
/* main.c:797:OF */ extern void Lidentity(void); /* () */
/* main.c:799:OF */ extern object fLidentity (object x0); /* (x0) object x0; */
/* main.c:805:OF */ extern void Llisp_implementation_version(void); /* () */
/* main.c:807:OF */ extern object fLlisp_implementation_version (void); /* () */
/* makefun.c:10:OF */ extern object MakeAfun (object (*addr)(object,object), unsigned int argd, object data); /* (addr, argd, data) int (*addr)(); unsigned int argd; object data; */
/* makefun.c:113:OF */ extern object fSset_key_struct (object key_struct_ind); /* (key_struct_ind) object key_struct_ind; */
/* makefun.c:122:OF */ extern void SI_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:131:OF */ extern void LISP_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:167:OF */ extern object fSinvoke (object x); /* (x) object x; */
/* mapfun.c:324:OF */ extern void gcl_init_mapfun (void); /* () */
/* multival.c:32:OF */ extern void Lvalues (void); /* () */
/* multival.c:37:OF */ extern void Lvalues_list (void); /* () */
/* multival.c:134:OF */ extern void gcl_init_multival (void); /* () */
/* nfunlink.c:190:OF */ extern object IapplyVector (object fun, int nargs, object *base); /* (fun, nargs, base) object fun; int nargs; object *base; */
/* nfunlink.c:269:OF */ extern void Iinvoke_c_function_from_value_stack (object (*f)(), int fargd); /* (f, fargd) object (*f)(); int fargd; */
/* nsocket.c:190:OF */ extern int CreateSocket (int port, char *host, int server, char *myaddr, int myport, int async); /* (port, host, server, myaddr, myport, async) int port; char *host; int server; char *myaddr; int myport; int async; */
/* nsocket.c:329:OF */ extern object fSgetpeername (object sock); /* (sock) object sock; */
/* nsocket.c:353:OF */ extern object fSgetsockname (object sock); /* (sock) object sock; */
/* nsocket.c:385:OF */ extern object fSset_blocking (object sock, object setBlocking); /* (sock, setBlocking) object sock; object setBlocking; */
/* nsocket.c:484:OF */ extern int getOneChar (FILE *fp); /* (fp) FILE *fp; */
/* nsocket.c:539:OF */ extern void ungetCharGclSocket (int c, object strm); /* (c, strm) int c; object strm; */
#ifndef __MINGW32__
/* nsocket.c:592:OF */ extern void tcpCloseSocket (int fd); /* (fd) int fd; */
/* nsocket.c:575:OF */ extern int TcpOutputProc (int fd, char *buf, int toWrite, int *errorCodePtr); /* (fd, buf, toWrite, errorCodePtr) int fd; char *buf; int toWrite; int *errorCodePtr; */
#endif
/* nsocket.c:619:OF */ extern int getCharGclSocket (object strm, object block); /* (strm, block) object strm; object block; */
/* num_arith.c:31:OF */ extern object fixnum_add (fixnum i, fixnum j); /* (i, j) int i; int j; */
/* num_arith.c:48:OF */ extern object fixnum_sub (fixnum i, fixnum j); /* (i, j) int i; int j; */
/* num_arith.c:100:OF */ extern object number_plus (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:246:OF */ extern object one_plus (object x); /* (x) object x; */
/* num_arith.c:292:OF */ extern object number_minus (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:438:OF */ extern object one_minus (object x); /* (x) object x; */
/* num_arith.c:478:OF */ extern object number_negate (object x); /* (x) object x; */
/* num_arith.c:520:OF */ extern object number_times (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:670:OF */ extern object number_divide (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:818:OF */ extern object integer_divide1 (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:828:OF */ extern object get_gcd (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:873:OF */ extern void Lplus (void); /* () */
/* num_arith.c:889:OF */ extern void Lminus (void); /* () */
/* num_arith.c:907:OF */ extern void Ltimes (void); /* () */
/* num_arith.c:923:OF */ extern void Ldivide (void); /* () */
/* num_arith.c:1029:OF */ extern void gcl_init_num_arith (void); /* () */
/* num_co.c:292:OF */ extern object double_to_integer (double d); /* (d) double d; */
/* num_co.c:372:OF */ extern void Lfloat (void); /* () */
/* num_co.c:424:OF */ extern void Lnumerator (void); /* () */
/* num_co.c:432:OF */ extern void Ldenominator (void); /* () */
/* num_co.c:442:OF */ extern void Lfloor (void); /* () */
/* num_co.c:563:OF */ extern void Lceiling (void); /* () */
/* num_co.c:684:OF */ extern void Ltruncate (void); /* () */
/* num_co.c:766:OF */ extern void Lround (void); /* () */
/* num_co.c:896:OF */ extern void Lmod (void); /* () */
/* num_co.c:987:OF */ extern void Lfloat_radix (void); /* () */
/* num_co.c:1089:OF */ extern void Linteger_decode_float (void); /* () */
/* num_co.c:1114:OF */ extern void Lcomplex (void); /* () */
/* num_co.c:1136:OF */ extern void Lrealpart (void); /* () */
/* num_co.c:1147:OF */ extern void Limagpart (void); /* () */
/* num_co.c:1185:OF */ extern void gcl_init_num_co (void); /* () */
/* num_comp.c:40:OF */ extern int number_compare (object x, object y); /* (x, y) object x; object y; */
/* num_comp.c:269:OF */ extern void Lmonotonically_increasing (void); /* () */
/* num_comp.c:271:OF */ extern void Lmonotonically_nondecreasing (void); /* () */
/* num_comp.c:272:OF */ extern void Lmonotonically_nonincreasing (void); /* () */
/* num_comp.c:292:OF */ extern void Lmin (void); /* () */
/* num_comp.c:309:OF */ extern void gcl_init_num_comp (void); /* () */
/* num_log.c:224:OF */ extern object shift_integer (object x, fixnum w); /* (x, w) object x; int w; */
/* num_log.c:258:OF */ extern void Llogior (void); /* () */
/* num_log.c:279:OF */ extern void Llogxor (void); /* () */
/* num_log.c:299:OF */ extern void Llogand (void); /* () */
/* num_log.c:339:OF */ extern void Lboole (void); /* () */
/* num_log.c:380:OF */ extern void Llogbitp (void); /* () */
/* num_log.c:420:OF */ extern void Lash (void); /* () */
/* num_log.c:482:OF */ extern void Linteger_length (void); /* () */
/* num_log.c:549:OF */ extern void gcl_init_num_log (void); /* () */
/* num_log.c:585:OF */ extern void siLbit_array_op (void); /* () */
/* num_pred.c:31:OF */ extern int number_zerop (object x); /* (x) object x; */
/* num_pred.c:67:OF */ extern int number_plusp (object x); /* (x) object x; */
/* num_pred.c:107:OF */ extern int number_minusp (object x); /* (x) object x; */
/* num_pred.c:147:OF */ extern int number_oddp (object x); /* (x) object x; */
/* num_pred.c:161:OF */ extern int number_evenp (object x); /* (x) object x; */
/* num_pred.c:240:OF */ extern void gcl_init_num_pred (void); /* () */
/* num_rand.c:111:OF */ extern void Lrandom (void); /* () */
/* num_rand.c:151:OF */ extern void gcl_init_num_rand (void); /* () */
/* num_sfun.c:91:OF */ extern object number_expt (object x, object y); /* (x, y) object x; object y; */
/* num_sfun.c:453:OF */ extern void Lexp (void); /* () */
/* num_sfun.c:469:OF */ extern void Llog (void); /* () */
/* num_sfun.c:488:OF */ extern void Lsqrt (void); /* () */
/* num_sfun.c:495:OF */ extern void Lsin (void); /* () */
/* num_sfun.c:502:OF */ extern void Lcos (void); /* () */
/* num_sfun.c:516:OF */ extern void Latan (void); /* () */
/* num_sfun.c:535:OF */ extern void gcl_init_num_sfun (void); /* () */
/* number.c:35:OF */ extern long int fixint (object x); /* (x) object x; */
/* number.c:44:OF */ extern int fixnnint (object x); /* (x) object x; */
/* number.c:59:OF */ extern object fSallocate_bigger_fixnum_range (fixnum min,fixnum max); /* (min, max) int min; int max; */
/* number.c:81:OF */ extern object make_fixnum1 (long i); /* (i) int i; */
/* number.c:102:OF */ extern object make_ratio (object num, object den,int); /* (num, den) object num; object den; */
/* number.c:144:OF */ extern object make_shortfloat (double f); /* (f) double f; */
/* number.c:157:OF */ extern object make_longfloat (longfloat f); /* (f) longfloat f; */
/* number.c:170:OF */ extern object make_complex (object r, object i); /* (r, i) object r; object i; */
/* number.c:229:OF */ extern double number_to_double (object x); /* (x) object x; */
/* number.c:254:OF */ extern void gcl_init_number (void); /* () */
/* peculiar.c:14:OF */ /*  extern int main (void); */ /* () */
/* predicate.c:35:OF */ extern object fLnot (object x0); /* (x0) object x0; */
/* predicate.c:46:OF */ extern void Lsymbolp (void); /* () */
/* predicate.c:48:OF */ extern object fLsymbolp (object x0); /* (x0) object x0; */
/* predicate.c:61:OF */ extern object fLatom (object x0); /* (x0) object x0; */
/* predicate.c:74:OF */ extern object fLconsp (object x0); /* (x0) object x0; */
/* predicate.c:87:OF */ extern object fLlistp (object x0); /* (x0) object x0; */
/* predicate.c:100:OF */ extern object fLnumberp (object x0); /* (x0) object x0; */
/* predicate.c:117:OF */ extern object fLintegerp (object x0); /* (x0) object x0; */
/* predicate.c:132:OF */ extern object fLrationalp (object x0); /* (x0) object x0; */
/* predicate.c:148:OF */ extern object fLrealp (object x0); /* (x0) object x0; */
/* predicate.c:164:OF */ extern object fLfloatp (object x0); /* (x0) object x0; */
/* predicate.c:176:OF */ extern void Lcomplexp (void); /* () */
/* predicate.c:178:OF */ extern object fLcomplexp (object x0); /* (x0) object x0; */
/* predicate.c:190:OF */ extern object fLcharacterp (object x0); /* (x0) object x0; */
/* predicate.c:202:OF */ extern object fLstringp (object x0); /* (x0) object x0; */
/* predicate.c:214:OF */ extern object fLbit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:226:OF */ extern object fLvectorp (object x0); /* (x0) object x0; */
/* predicate.c:238:OF */ extern void Lsimple_string_p (void); /* () */
/* predicate.c:240:OF */ extern object fLsimple_string_p (object x0); /* (x0) object x0; */
/* predicate.c:253:OF */ extern void Lsimple_bit_vector_p (void); /* () */
/* predicate.c:255:OF */ extern object fLsimple_bit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:268:OF */ extern void Lsimple_vector_p (void); /* () */
/* predicate.c:270:OF */ extern object fLsimple_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:288:OF */ extern object fLarrayp (object x0); /* (x0) object x0; */
/* predicate.c:301:OF */ extern void Lpackagep (void); /* () */
/* predicate.c:303:OF */ extern object fLpackagep (object x0); /* (x0) object x0; */
/* predicate.c:313:OF */ extern void Lfunctionp (void); /* () */
/* predicate.c:315:OF */ extern object fLfunctionp (object x0); /* (x0) object x0; */
/* predicate.c:344:OF */ extern void Lcompiled_function_p (void); /* () */
/* predicate.c:346:OF */ extern object fLcompiled_function_p (object x0); /* (x0) object x0; */
/* predicate.c:367:OF */ extern object fLcommonp (object x0); /* (x0) object x0; */
/* predicate.c:379:OF */ extern object fLeq (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:393:OF */ extern int eql (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:455:OF */ extern object fLeql (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:469:OF */ extern int equal (register object x, register object y); /* (x, y) register object x; register object y; */
/* predicate.c:543:OF */ extern object fLequal (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:557:OF */ extern bool equalp (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:681:OF */ extern object fLequalp (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:750:OF */ extern bool contains_sharp_comma (object x); /* (x) object x; */
/* predicate.c:797:OF */ extern object fScontains_sharp_comma (object x0); /* (x0) object x0; */
/* predicate.c:810:OF */ extern object fSspicep (object x0); /* (x0) object x0; */
/* predicate.c:822:OF */ extern object fSfixnump (object x0); /* (x0) object x0; */
/* predicate.c:833:OF */ extern void gcl_init_predicate_function (void); /* () */
/* prog.c:48:OF */ extern void Ftagbody (object body); /* (body) object body; */
/* prog.c:246:OF */ extern void Fprogn (object body); /* (body) object body; */
/* prog.c:303:OF */ extern void gcl_init_prog (void); /* () */
/* reference.c:32:OF */ extern void Lfboundp (void); /* () */
/* reference.c:49:OF */ extern object symbol_function (object sym); /* (sym) object sym; */
/* reference.c:69:OF */ extern void Lsymbol_function (void); /* () */
/* reference.c:143:OF */ extern void Lsymbol_value (void); /* () */
/* reference.c:156:OF */ extern void Lboundp (void); /* () */
/* reference.c:169:OF */ extern void Lmacro_function (void); /* () */
/* reference.c:180:OF */ extern void Lspecial_form_p (void); /* () */
/* reference.c:191:OF */ extern void gcl_init_reference (void); /* () */
/*  #include "regexp.h" */
/* regexp.c:1588:OF */ extern void regerror (char *s); /* (s) char *s; */
/* regexpr.c:48:OF */ extern object fSmatch_beginning (fixnum i); /* (i) int i; */
/* regexpr.c:57:OF */ extern object fSmatch_end (fixnum i); /* (i) int i; */
/* save.c:17:OF */ extern void Lsave (void); /* () */
#include <unistd.h>
/* sbrk.c:9:OF */ /*  extern void * sbrk (int n); */ /* (n) int n; */
/* strcspn.c:3:OF */ /*  extern size_t strcspn (const char *s1, const char *s2); */ /* (s1, s2) char *s1; char *s2; */
/* structure.c:59:OF */ extern object structure_ref (object x, object name, int i); /* (x, name, i) object x; object name; int i; */
/* structure.c:107:OF */ extern object structure_set (object x, object name, int i, object v); /* (x, name, i, v) object x; object name; int i; object v; */
/* structure.c:164:OF */ extern object structure_to_list (object x); /* (x) object x; */
/* structure.c:188:OF */ extern void siLmake_structure (void); /* () */
/* structure.c:281:OF */ extern void siLstructure_set (void); /* () */
/* structure.c:326:OF */ extern void siLlist_nth (void); /* () */
/* structure.c:439:OF */ extern void gcl_init_structure_function (void); /* () */
/* toplevel.c:211:OF */ extern void gcl_init_toplevel (void); /* () */
/* typespec.c:38:OF */ extern void check_type_integer (object *p); /* (p) object *p; */
/* typespec.c:47:OF */ extern void check_type_non_negative_integer (object *p); /* (p) object *p; */
/* typespec.c:65:OF */ extern void check_type_rational (object *p); /* (p) object *p; */
/* typespec.c:75:OF */ extern void check_type_float (object *p); /* (p) object *p; */
/* typespec.c:94:OF */ extern void check_type_or_rational_float (object *p); /* (p) object *p; */
/* typespec.c:104:OF */ extern void check_type_number (object *p); /* (p) object *p; */
/* typespec.c:123:OF */ extern void check_type_character (object *p); /* (p) object *p; */
/* typespec.c:139:OF */ extern void check_type_symbol (object *p); /* (p) object *p; */
/* typespec.c:146:OF */ extern void check_type_or_symbol_string (object *p); /* (p) object *p; */
/* typespec.c:153:OF */ extern void check_type_or_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:170:OF */ extern void check_type_package (object *p); /* (p) object *p; */
/* typespec.c:177:OF */ extern void check_type_string (object *p); /* (p) object *p; */
/* typespec.c:191:OF */ extern void check_type_cons (object *p); /* (p) object *p; */
/* typespec.c:198:OF */ extern void check_type_stream (object *p); /* (p) object *p; */
/* typespec.c:205:OF */ extern void check_type_readtable (object *p); /* (p) object *p; */
/* typespec.c:213:OF */ extern void check_type_or_Pathname_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:225:OF */ extern void check_type_or_pathname_string_symbol_stream (object *p); /* (p) object *p; */
/* typespec.c:236:OF */ extern void check_type_random_state (object *p); /* (p) object *p; */
/* typespec.c:243:OF */ extern void check_type_hash_table (object *p); /* (p) object *p; */
/* typespec.c:250:OF */ extern void check_type_array (object *p); /* (p) object *p; */
/* typespec.c:284:OF */ extern void check_type (object x, int t); /* (x, t) object x; int t; */
/* typespec.c:294:OF */ extern void Ltype_of (void); /* () */
/* typespec.c:493:OF */ extern void gcl_init_typespec (void); /* () */
/* typespec.c:497:OF */ extern void gcl_init_typespec_function (void); /* () */
/* unexec-19.29.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexec.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexlin.c:808:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unixfasl.c:409:OF */ extern void gcl_init_unixfasl (void); /* () */
/* unixfsys.c:145:OF */ extern char *getwd (char *buffer); /* (buffer) char *buffer; */
/* unixfsys.c:209:OF */ extern void coerce_to_filename (object pathname, char *p); /* (pathname, p) object pathname; char *p; */
/* unixfsys.c:329:OF */ extern bool file_exists (object file); /* (file) object file; */
/* unixfsys.c:359:OF */ extern FILE *fopen_not_dir (char *filename, char *option); /* (filename, option) char *filename; char *option; */
/* unixfsys.c:359:OF */ extern FILE *backup_fopen (char *filename, char *option); /* (filename, option) char *filename; char *option; */
/* unixfsys.c:372:OF */ extern int file_len (FILE *fp); /* (fp) FILE *fp; */
/* unixfsys.c:382:OF */ extern object truename (object); /* () */
/* unixfsys.c:382:OF */ extern void Ltruename (void); /* () */
/* unixfsys.c:418:OF */ extern object fSsetenv (object variable, object value); /* (variable, value) object variable; object value; */
/* unixfsys.c:442:OF */ extern object fLdelete_file (object path); /* (path) object path; */
/* unixfsys.c:456:OF */ extern void Lprobe_file (void); /* () */
/* unixfsys.c:533:OF */ extern void Ldirectory (void); /* () */
/* unixfsys.c:777:OF */ extern void gcl_init_unixfsys (void); /* () */
/* unixsave.c:173:OF */ extern void gcl_init_unixsave (void); /* () */
/* unixsys.c:83:OF */ extern object fSgetpid (void); /* () */
/* unixsys.c:87:OF */ extern void gcl_init_unixsys (void); /* () */
/* unixtime.c:67:OF */ extern int runtime (void); /* () */
/* unixtime.c:82:OF */ extern object unix_time_to_universal_time (int i); /* (i) int i; */
/* unixtime.c:99:OF */ extern object fLget_universal_time (void); /* () */
/* unixtime.c:144:OF */ extern object fLget_internal_real_time (void); /* () */
/* unixtime.c:173:OF */ extern void gcl_init_unixtime (void); /* () */
/* user_init.c:2:OF */ extern object user_init (void); /* () */
/* user_init.c:2:OF */ extern int user_match (const char *,int n); /* () */
/* usig.c:49:OF */ extern void gcl_signal (int signo, void (*handler) (/* ??? */)); /* (signo, handler) int signo; void (*handler)(); */
/* usig.c:92:OF */ extern int unblock_signals (int n, int m); /* (n, m) int n; int m; */
/* usig.c:119:OF */ extern void unblock_sigusr_sigio (void); /* () */
/* usig.c:182:OF */ extern void install_default_signals (void); /* () */
/* usig2.c:142:OF */ extern void gcl_init_safety (void); /* () */
/* usig2.c:158:OF */ extern object sSsignal_safety_required (fixnum signo,fixnum safety); /* (signo, safety) int signo; int safety; */
/* usig2.c:167:OF */ extern void main_signal_handler (int signo); /* (signo) int signo */
/* usig2.c:375:OF */ extern void raise_pending_signals (int cond); /* (cond) int cond; */
/* usig2.c:407:OF */ extern object fSallow_signal (fixnum n); /* (n) int n; */
/* utils.c:12:OF */ extern object IisSymbol (object f); /* (f) object f; */
/* utils.c:20:OF */ extern object IisFboundp (object f); /* (f) object f; */
/* utils.c:30:OF */ extern object IisArray (object f); /* (f) object f; */
/* utils.c:44:OF */ extern object Iis_fixnum (object f); /* (f) object f; */
/* utils.c:61:OF */ extern object Iapply_ap_new (object (*f) (/* ??? */), object first, va_list ap); /* (f, ap) object (*f)(); va_list ap; */
/* utils.c:178:OF */ extern object Icheck_one_type (object x, enum type t); /* (x, t) object x; enum type t; */
/* utils.c:189:OF */ extern object fSincorrect_type (object val, object type); /* (val, type) object val; object type; */
/* utils.c:202:OF */ extern object Ivs_values (void); /* () */
/* utils.c:227:OF */ extern char *lisp_copy_to_null_terminated (object string, char *buf, int n); /* (string, buf, n) object string; char *buf; int n; */


/*  readline.d */
extern int readline_on;
void
gcl_init_readline_function(void);

/*  sys_gcl.c */
void
gcl_init_init(void);

/* misc */
void
gcl_init_symbol(void);

void
gcl_init_package(void);

void
gcl_init_character(void);

void
gcl_init_read(void);

void
gcl_init_pathname(void);

void
gcl_init_print(void);

void
gcl_init_character_function(void);

void
gcl_init_file_function(void);

void
gcl_init_list_function(void);

void
gcl_init_package_function(void);

void
gcl_init_pathname_function(void);

void
gcl_init_print_function(void);

void
gcl_init_read_function(void);

void
gcl_init_sequence_function(void);

void
gcl_init_string_function(void);

void
gcl_init_symbol_function(void);

void
gcl_init_socket_function(void);

void
gcl_init_hash(void);

void
import(object,object);

void
export(object,object);

void
NewInit(void);

void
gcl_init_system(object);

void
set_up_string_register(char *);

bool
endp1(object);

void
stack_cons(void);

bool
char_equal(object,object);

bool
string_equal(object,object);

bool
string_eq(object,object);

bool
remf(object *,object);

bool
keywordp(object);

int
pack_hash(object);

void
load(char *);

bool
member_eq(object,object);

void
delete_eq(object,object *);

int
length(object);

int
rl_getc_em(FILE *);

void
setupPRINTdefault(object);

void
write_str(char *);

void
write_object(object,int);

void
cleanupPRINT(void);

int
fasload(object);

int
readc_stream(object);

void
unreadc_stream(int,object);

void
end_of_stream(object);

bool
stream_at_end(object);

int
digitp(int,int);

bool
char_eq(object,object);

bool
listen_stream(object);

void
get_string_start_end(object,object,object,int *,int *);

int
file_column(object);

int
writec_stream(int,object);

int
digit_weight(int,int);

void
flush_stream(object);

void
writestr_stream(char *,object);

void
write_string(object,object);

void
edit_double(int, double, int *, char *, int *);

void
sethash(object,object,object);

int
file_position(object);

int
file_position_set(object, int);

void
princ_str(char *s, object);

void
close_stream(object);

void
build_symbol_table(void);

void
gcl_init_file(void);

object
aset1(object,fixnum,object);

void
dfprintf(FILE *,char *,...);

void
Lmake_list(void);

void
Llast(void);

void
Lgensym(void);

void
Lldiff(void);

void
Lintern(void);

void
Lgensym(void);

void
Lldiff(void);

void
Lgensym(void);

void
Lintern(void);

void
Lintern(void);

void
Lreconc(void);

void
Lmember(void);

void
Ladjoin(void);

void
Llist(void);

void
Lappend(void);

void
Lread(void);

void
Lread_char(void);

void
Lchar_eq(void);

void
Lwrite_char(void);

void
Lforce_output(void);

void
Lchar_neq(void);

void
Llist(void);

void
Lwrite(void);

void
Lfresh_line(void);

void
Lsymbol_package(void);

void
Lfind_package(void);

void
Lfind_symbol(void);

void
Lpackage_name(void);

void
Lsymbol_plist(void);

void
Lpackage_nicknames(void);

void
Lpackage_use_list(void);

void
Lpackage_used_by_list(void);

void
Lstandard_char_p(void);

void
Lstring_char_p(void);

void
Lchar_code(void);

void
Lchar_bits(void);

void
Lchar_font(void);

void
Lread_line(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Llist_all_packages(void);

void
Lgensym(void);

void
Lread(void);

void
Lwrite(void);

void
Lstring_equal(void);

void
Lclose(void);

void
Lnamestring(void);

void
Lmake_echo_stream(void);

void
Lmake_broadcast_stream(void);

void
Lmake_two_way_stream(void);

void
Lbutlast(void);

void
Ladjoin(void);

void
Lstring_downcase(void);

void
Lmember(void);

void
Lgensym(void);

void
Llist_all_packages(void);

void
Lfind_symbol(void);

void
Lstring_equal(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lpackage_use_list(void);

void
Lreconc(void);

void
Lstandard_char_p(void);

void
Lstring_char_p(void);

void
Lcharacter(void);

void
Llength(void);

void
Lreconc(void);

void
Llength(void);

void
Lgensym(void);

void
Llist_length(void);

void
Lgensym(void);

void
Lbutlast(void);

void
Lnconc(void);

void
Lfind_package(void);

void
Lpackage_name(void);

void
Llist(void);

void
Lfresh_line(void);

void
Lread_char(void);

void
Lunread_char(void);

void
Lread_line(void);

void
Lread(void);

void
Lforce_output(void);

void
Lwrite(void);

void
Lmember(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lmake_pathname(void);

void
Lnamestring(void);

void
Lclose(void);

void
Lgensym(void);

void
Lfresh_line(void);

void
Llist(void);

void
Lread_char(void);

void
Lchar_eq(void);

void
Lfinish_output(void);

void
Lchar_neq(void);

void
Lwrite(void);

void
Lgensym(void);

void
Lmember(void);

void
Lappend(void);

void
Lcopy_tree(void);

void
Ladjoin(void);

void
Lgetf(void);

void
Lsubst(void);

void
Lsymbol_package(void);

void
Lcopy_list(void);

void
Lintern(void);

void
Lfind_package(void);

void
LlistA(void);

void
Llist(void);

void
Lgetf(void);

void
Lstreamp(void);

void
Lpeek_char(void);

void
Lread_char(void);

void
Lread_line(void);

void
Lset_macro_character(void);

void
Lclrhash(void);

void
siLhash_set(void);

void
Lgethash(void);

struct htent *
gethash(object,object);

void
Lremhash(void);

void
Llist_all_packages(void);

void
Lintern(void);

void
Lunintern(void);

void
Lsubseq(void);

void
Lsymbol_package(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lread_char(void);

void
Lfile_length(void);

void
Lfile_position(void);

void
Lclose(void);

void
Lsubseq(void);

void
Lnamestring(void);

void
Lmerge_pathnames(void);

void
Lcopy_list(void);

void
Lread_line(void);

void
Lgensym(void);

void
Lcopy_list(void);

void
Lintern(void);

void
Lappend(void);

void
Lgensym(void);

void
Lcopy_list(void);

void
Lmember(void);

void
Lintern(void);

void
Lappend(void);

void
Lfind_package(void);

void
Lpackage_name(void);

void
Lpackage_nicknames(void);

void
Lpackage_use_list(void);

void
siLpackage_external(void);

void
siLpackage_internal(void);

void
Lsymbol_package(void);

void
Lappend(void);

void
Lgentemp(void);

void
Lgensym(void);

void
Lassoc(void);

void
Ladjoin(void);

void
Lstring_eq(void);

void
Lmember(void);

void
Lgethash(void);

void
Lfinish_output(void);

void
Lread(void);

void
Lmake_hash_table(void);

void
siLhash_set(void);

void
Lrevappend(void);

void
Lreconc(void);

void
Lcopy_list(void);

void
LlistA(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
princ_char(int,object);

void
Ldigit_char_p(void);

void
Lwrite_byte(void);

#ifdef SPECIAL_RSYM
void
read_special_symbols(char *);

int
node_compare(const void *,const void *);
#endif

void
unlink_loaded_files(void);

void
FEpackage_error(object,const char *s);

void
FEcannot_coerce(object, object);

int
system_time_zone_helper(void);

object
call_proc_new(object,int setf,void **,int,object,va_list);

object 
call_vproc_new(object,int setf,void *,object,va_list);

void
funcall_with_catcher(object, object);

void
siLset_symbol_plist(void);

void
Lhash_table_p(void);

void
Lreadtablep(void);

int 
fixnum_expt(int, int);

void
check_alist(object);

void
ck_larg_at_least(int,object);

void
vfun_wrong_number_of_args(object);

/* FIXME from lfun_list.lsp -- should be automatically generated */
void Lgensym(void);
void Lsubseq(void);
void Lminusp(void);
void Linteger_decode_float(void);
void Lminus(void);
void Lint_char(void);
void Lchar_int(void);
void Lall_different(void);
void Lcopy_seq(void);
void Lkeywordp(void);
void Lname_char(void);
void Lchar_name(void);
void Lrassoc_if(void);
void Lmake_list(void);
void Lhost_namestring(void);
void Lmake_echo_stream(void);
void Lnth(void);
void Lsin(void);
void Lnumerator(void);
void Larray_rank(void);
void Lcaar(void);
void Lboth_case_p(void);
void Lnull(void);
void Lrename_file(void);
void Lfile_author(void);
void Lstring_capitalize(void);
void Lmacroexpand(void);
void Lnconc(void);
void Lboole(void);
void Ltailp(void);
void Lconsp(void);
void Llistp(void);
void Lmapcan(void);
void Llength(void);
void Lrassoc(void);
void Lpprint(void);
void Lpathname_host(void);
void Lnsubst_if_not(void);
void Lfile_position(void);
void Lstring_l(void);
void Lreverse(void);
void Lstreamp(void);
void siLputprop(void);
void Lremprop(void);
void Lsymbol_package(void);
void Lnstring_upcase(void);
void Lstring_ge(void);
void Lrealpart(void);
void Lnbutlast(void);
void Larray_dimension(void);
void Lcdr(void);
void Leql(void);
void Llog(void);
void Ldirectory(void);
void Lstring_not_equal(void);
void Lshadowing_import(void);
void Lmapc(void);
void Lmapl(void);
void Lmakunbound(void);
void Lcons(void);
void Llist(void);
void Luse_package(void);
void Lfile_length(void);
void Lmake_symbol(void);
void Lstring_right_trim(void);
void Lenough_namestring(void);
void Lprint(void);
void Lcddaar(void);
void Lcdadar(void);
void Lcdaadr(void);
void Lcaddar(void);
void Lcadadr(void);
void Lcaaddr(void);
void Lset_macro_character(void);
void Lforce_output(void);
void Lnthcdr(void);
void Llogior(void);
void Lchar_downcase(void);
void Lstring_char_p(void);
void Lstream_element_type(void);
void Lpackage_used_by_list(void);
void Ldivide(void);
void Lmaphash(void);
void Lstring_eq(void);
void Lpairlis(void);
void Lsymbolp(void);
void Lchar_not_lessp(void);
void Lone_plus(void);
void Lby(void);
void Lnsubst_if(void);
void Lcopy_list(void);
void Ltan(void);
void Lset(void);
void Lfunctionp(void);
void Lwrite_byte(void);
void Llast(void);
void Lmake_string(void);
void Lcaaar(void);
void Llist_length(void);
void Lcdddr(void);
void Lprin1(void);
void Lprinc(void);
void Llower_case_p(void);
void Lchar_le(void);
void Lstring_equal(void);
void Lclear_output(void);
void CERROR(void);
void Lterpri(void);
void Lnsubst(void);
void Lunuse_package(void);
void Lstring_not_greaterp(void);
void Lstring_g(void);
void Lfinish_output(void);
void Lspecial_form_p(void);
void Lstringp(void);
void Lget_internal_run_time(void);
void Ltruncate(void);
void Lcode_char(void);
void Lchar_code(void);
void Lsimple_string_p(void);
void Lrevappend(void);
void Lhash_table_count(void);
void Lpackage_use_list(void);
void Lrem(void);
void Lmin(void);
void Lapplyhook(void);
void Lexp(void);
void Lchar_lessp(void);
void Lcdar(void);
void Lcadr(void);
void Llist_all_packages(void);
void Lcdr(void);
void Lcopy_symbol(void);
void Lacons(void);
void Ladjustable_array_p(void);
void Lsvref(void);
void Lapply(void);
void Ldecode_float(void);
void Lsubst_if_not(void);
void Lrplaca(void);
void Lsymbol_plist(void);
void Lwrite_string(void);
void Llogeqv(void);
void Lstring(void);
void Lstring_upcase(void);
void Lceiling(void);
void Lgethash(void);
void Ltype_of(void);
void Lbutlast(void);
void Lone_minus(void);
void Lmake_hash_table(void);
void Lstring_neq(void);
void Lmonotonically_nondecreasing(void);
void Lmake_broadcast_stream(void);
void Limagpart(void);
void Lintegerp(void);
void Lread_char(void);
void Lpeek_char(void);
void Lchar_font(void);
void Lstring_greaterp(void);
void Loutput_stream_p(void);
void Lash(void);
void Llcm(void);
void Lelt(void);
void Lcos(void);
void Lnstring_downcase(void);
void Lcopy_alist(void);
void Latan(void);
void Ldelete_file(void);
void Lfloat_radix(void);
void Lsymbol_name(void);
void Lclear_input(void);
void Lfind_symbol(void);
void Lchar_l(void);
void Lhash_table_p(void);
void Levenp(void);
void siLcmod(void);
void siLcplus(void);
void siLctimes(void);
void siLcdifference(void);
void Lzerop(void);
void Lcaaaar(void);
void Lchar_ge(void);
void Lcdddar(void);
void Lcddadr(void);
void Lcdaddr(void);
void Lcadddr(void);
void Lfill_pointer(void);
void Lmapcar(void);
void Lfloatp(void);
void Lshadow(void);
void Lmacroexpand_1(void);
void Lsxhash(void);
void Llisten(void);
void Larrayp(void);
void Lmake_pathname(void);
void Lpathname_type(void);
void Lfuncall(void);
void Lclrhash(void);
void Lgraphic_char_p(void);
void Lfboundp(void);
void Lnsublis(void);
void Lchar_not_equal(void);
void Lmacro_function(void);
void Lsubst_if(void);
void Lcomplexp(void);
void Lread_line(void);
void Lpathnamep(void);
void Lmax(void);
void Lin_package(void);
void Lreadtablep(void);
void Lfloat_sign(void);
void Lcharacterp(void);
void Lread(void);
void Lnamestring(void);
void Lunread_char(void);
void Lcdaar(void);
void Lcadar(void);
void Lcaadr(void);
void Lchar_eq(void);
void Lalpha_char_p(void);
void Lstring_trim(void);
void Lmake_package(void);
void Lclose(void);
void Ldenominator(void);
void Lfloat(void);
void Lcar(void);
void Lround(void);
void Lsubst(void);
void Lupper_case_p(void);
void Larray_element_type(void);
void Ladjoin(void);
void Llogand(void);
void Lmapcon(void);
void Lintern(void);
void Lvalues(void);
void Lexport(void);
void Ltimes(void);
void Lmonotonically_increasing(void);
void Lcomplex(void);
void Lset_syntax_from_char(void);
void Lchar_bit(void);
void Linteger_length(void);
void Lpackagep(void);
void Linput_stream_p(void);
void Lmonotonically_nonincreasing(void);
void Lpathname(void);
void Leq(void);
void Lmake_char(void);
void Lfile_namestring(void);
void Lcharacter(void);
void Lsymbol_function(void);
void Lconstantp(void);
void Lchar_equal(void);
void Ltree_equal(void);
void Lcddr(void);
void Lgetf(void);
void Lsave(void);
void Lmake_random_state(void);
void Lchar_not_greaterp(void);
void Lexpt(void);
void Lsqrt(void);
void Lscale_float(void);
void Lchar_g(void);
void Lldiff(void);
void Lassoc_if_not(void);
void Lbit_vector_p(void);
void Lnstring_capitalize(void);
void Lsymbol_value(void);
void Lrplacd(void);
void Lboundp(void);
void Lequalp(void);
void Lsimple_bit_vector_p(void);
void Lmember_if_not(void);
void Lmake_two_way_stream(void);
void Lparse_integer(void);
void Lplus(void);
void Lall_the_same(void);
void Lgentemp(void);
void Lrename_package(void);
void Lcommonp(void);
void Lnumberp(void);
void Lcopy_readtable(void);
void Lrandom_state_p(void);
void Ldirectory_namestring(void);
void Lstandard_char_p(void);
void Ltruename(void);
void Lidentity(void);
void Lnreverse(void);
void Lpathname_device(void);
void Lunintern(void);
void Lunexport(void);
void Lfloat_precision(void);
void Lstring_downcase(void);
void Lcar(void);
void Lconjugate(void);
void Lnull(void);
void Lread_char_no_hang(void);
void Lfresh_line(void);
void Lwrite_char(void);
void Lparse_namestring(void);
void Lstring_not_lessp(void);
void Lchar(void);
void Laref(void);
void Lpackage_nicknames(void);
void Lendp(void);
void Loddp(void);
void Lchar_upcase(void);
void LlistA(void);
void Lvalues_list(void);
void Lequal(void);
void Ldigit_char_p(void);
void ERROR(void);
void Lchar_neq(void);
void Lpathname_directory(void);
void Lcdaaar(void);
void Lcadaar(void);
void Lcaadar(void);
void Lcaaadr(void);
void Lcddddr(void);
void Lget_macro_character(void);
void Lformat(void);
void Lcompiled_function_p(void);
void Lsublis(void);
void Lpathname_name(void);
void Limport(void);
void Llogxor(void);
void Lrassoc_if_not(void);
void Lchar_greaterp(void);
void Lmake_synonym_stream(void);
void Lalphanumericp(void);
void Lremhash(void);
void Lreconc(void);
void Lmonotonically_decreasing(void);
void Llogbitp(void);
void Lmaplist(void);
void Lvectorp(void);
void Lassoc_if(void);
void Lget_properties(void);
void Lstring_le(void);
void Levalhook(void);
void Lfile_write_date(void);
void Llogcount(void);
void Lmerge_pathnames(void);
void Lmember_if(void);
void Lread_byte(void);
void Lsimple_vector_p(void);
void Lchar_bits(void);
void Lcopy_tree(void);
void Lgcd(void);
void Lby(void);
void Lget(void);
void Lmod(void);
void Ldigit_char(void);
void Lprobe_file(void);
void Lstring_left_trim(void);
void Lpathname_version(void);
void Lwrite_line(void);
void Leval(void);
void Latom(void);
void Lcddar(void);
void Lcdadr(void);
void Lcaddr(void);
void Lfmakunbound(void);
void Lsleep(void);
void Lpackage_name(void);
void Lfind_package(void);
void Lassoc(void);
void Lset_char_bit(void);
void Lfloor(void);
void Lwrite(void);
void Lplusp(void);
void Lfloat_digits(void);
void Lread_delimited_list(void);
void Lappend(void);
void Lmember(void);
void Lstring_lessp(void);
void Lrandom(void);
void siLspecialp(void);
void siLoutput_stream_string(void);
void siLstructurep(void);
void siLcopy_stream(void);
void siLinit_system(void);
void siLstring_to_object(void);
void siLreset_stack_limits(void);
void siLdisplaced_array_p(void);
void siLrplaca_nthcdr(void);
void siLlist_nth(void);
void siLmake_vector(void);
void siLaset(void);
void siLsvset(void);
void siLfill_pointer_set(void);
void siLreplace_array(void);
void siLfset(void);
void siLhash_set(void);
void Lboole(void);
void siLpackage_internal(void);
void siLpackage_external(void);
void siLelt_set(void);
void siLchar_set(void);
void siLmake_structure(void);
void siLstructure_name(void);
void siLstructure_ref(void);
void siLstructure_set(void);
void siLput_f(void);
void siLrem_f(void);
void siLset_symbol_plist(void);
void siLbit_array_op(void);

object
cmod(object);
object
ctimes(object,object);
object
cdifference(object,object);
object
cplus(object,object);

object
Icall_error_handler(object,object,int,...);

void *
gcl_gmp_alloc(size_t);

int
my_plt(const char *,unsigned long *);

int
parse_plt(void);

int
sgc_count_read_only_type(int);

int 
gcl_isnormal_double(double);

int 
gcl_isnormal_float(float);

void wipe_stack   (VOL void *);
void clear_c_stack(VOL unsigned);

long
opt_maxpage(struct typemanager *);

typedef MP_INT * GEN;

MP_INT *
otoi(object);

#ifdef SGC
void
memprotect_test_reset(void);
#endif


#if defined (__MINGW32__)
int bcmp ( const void *s1, const void *s2, size_t n );
void bcopy ( const void *s1, void *s2, size_t n );
void bzero(void *b, size_t length);
int TcpOutputProc ( int fd, char *buf, int toWrite, int *errorCodePtr, int block );
void recreate_heap1 ( void );
void gcl_init_shared_memory ( void );
void fix_filename ( object pathname, char *filename1 );
void alarm ( int n );
void *sbrk ( unsigned long increment );
void sigemptyset( sigset_t *set);
void sigaddset ( sigset_t *set, int n);
int sigismember ( sigset_t *set, int n );
int sigprocmask ( int how, const sigset_t *set, sigset_t *oldset );
#endif

#ifdef GCL_GPROF
void
gprof_cleanup(void);
#endif


unsigned long
ihash_equal1(object,int);

#include "takr.h"
void init_code(){do_init(VV);}
/*	local entry for function TAK0	*/

static object LI1(V4,V5,V6)

register long V4;register long V5;register long V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	if((V5)<(V4)){
	goto T2;}
	{object V7 = CMPmake_fixnum(V6);
	VMR1(V7)}
	goto T2;
T2:;
	{long V8= fix((*(LnkLI1))((fixnum)(V4)-((fixnum)1),V5,V6));
	{long V9= fix((*(LnkLI2))((fixnum)(V5)-((fixnum)1),V6,V4));
	{long V10= fix((*(LnkLI3))((fixnum)(V6)-((fixnum)1),V4,V5));
	{object V11 = (*(LnkLI0))(/* INLINE-ARGS */V8,/* INLINE-ARGS */V9,/* INLINE-ARGS */V10);
	VMR1(V11)}}}}
	return Cnil;
}
/*	local entry for function TAK1	*/

static object LI2(V15,V16,V17)

register long V15;register long V16;register long V17;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if((V16)<(V15)){
	goto T5;}
	{object V18 = CMPmake_fixnum(V17);
	VMR2(V18)}
	goto T5;
T5:;
	{long V19= fix((*(LnkLI5))((fixnum)(V15)-((fixnum)1),V16,V17));
	{long V20= fix((*(LnkLI6))((fixnum)(V16)-((fixnum)1),V17,V15));
	{long V21= fix((*(LnkLI7))((fixnum)(V17)-((fixnum)1),V15,V16));
	{object V22 = (*(LnkLI4))(/* INLINE-ARGS */V19,/* INLINE-ARGS */V20,/* INLINE-ARGS */V21);
	VMR2(V22)}}}}
	return Cnil;
}
/*	local entry for function TAK2	*/

static object LI3(V26,V27,V28)

register long V26;register long V27;register long V28;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if((V27)<(V26)){
	goto T8;}
	{object V29 = CMPmake_fixnum(V28);
	VMR3(V29)}
	goto T8;
T8:;
	{long V30= fix((*(LnkLI2))((fixnum)(V26)-((fixnum)1),V27,V28));
	{long V31= fix((*(LnkLI9))((fixnum)(V27)-((fixnum)1),V28,V26));
	{long V32= fix((*(LnkLI10))((fixnum)(V28)-((fixnum)1),V26,V27));
	{object V33 = (*(LnkLI8))(/* INLINE-ARGS */V30,/* INLINE-ARGS */V31,/* INLINE-ARGS */V32);
	VMR3(V33)}}}}
	return Cnil;
}
/*	local entry for function TAK3	*/

static object LI4(V37,V38,V39)

register long V37;register long V38;register long V39;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if((V38)<(V37)){
	goto T11;}
	{object V40 = CMPmake_fixnum(V39);
	VMR4(V40)}
	goto T11;
T11:;
	{long V41= fix((*(LnkLI12))((fixnum)(V37)-((fixnum)1),V38,V39));
	{long V42= fix((*(LnkLI13))((fixnum)(V38)-((fixnum)1),V39,V37));
	{long V43= fix((*(LnkLI14))((fixnum)(V39)-((fixnum)1),V37,V38));
	{object V44 = (*(LnkLI11))(/* INLINE-ARGS */V41,/* INLINE-ARGS */V42,/* INLINE-ARGS */V43);
	VMR4(V44)}}}}
	return Cnil;
}
/*	local entry for function TAK4	*/

static object LI5(V48,V49,V50)

register long V48;register long V49;register long V50;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if((V49)<(V48)){
	goto T14;}
	{object V51 = CMPmake_fixnum(V50);
	VMR5(V51)}
	goto T14;
T14:;
	{long V52= fix((*(LnkLI16))((fixnum)(V48)-((fixnum)1),V49,V50));
	{long V53= fix((*(LnkLI17))((fixnum)(V49)-((fixnum)1),V50,V48));
	{long V54= fix((*(LnkLI16))((fixnum)(V50)-((fixnum)1),V48,V49));
	{object V55 = (*(LnkLI15))(/* INLINE-ARGS */V52,/* INLINE-ARGS */V53,/* INLINE-ARGS */V54);
	VMR5(V55)}}}}
	return Cnil;
}
/*	local entry for function TAK5	*/

static object LI6(V59,V60,V61)

register long V59;register long V60;register long V61;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if((V60)<(V59)){
	goto T17;}
	{object V62 = CMPmake_fixnum(V61);
	VMR6(V62)}
	goto T17;
T17:;
	{long V63= fix((*(LnkLI6))((fixnum)(V59)-((fixnum)1),V60,V61));
	{long V64= fix((*(LnkLI19))((fixnum)(V60)-((fixnum)1),V61,V59));
	{long V65= fix((*(LnkLI4))((fixnum)(V61)-((fixnum)1),V59,V60));
	{object V66 = (*(LnkLI18))(/* INLINE-ARGS */V63,/* INLINE-ARGS */V64,/* INLINE-ARGS */V65);
	VMR6(V66)}}}}
	return Cnil;
}
/*	local entry for function TAK6	*/

static object LI7(V70,V71,V72)

register long V70;register long V71;register long V72;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if((V71)<(V70)){
	goto T20;}
	{object V73 = CMPmake_fixnum(V72);
	VMR7(V73)}
	goto T20;
T20:;
	{long V74= fix((*(LnkLI21))((fixnum)(V70)-((fixnum)1),V71,V72));
	{long V75= fix((*(LnkLI22))((fixnum)(V71)-((fixnum)1),V72,V70));
	{long V76= fix((*(LnkLI23))((fixnum)(V72)-((fixnum)1),V70,V71));
	{object V77 = (*(LnkLI20))(/* INLINE-ARGS */V74,/* INLINE-ARGS */V75,/* INLINE-ARGS */V76);
	VMR7(V77)}}}}
	return Cnil;
}
/*	local entry for function TAK7	*/

static object LI8(V81,V82,V83)

register long V81;register long V82;register long V83;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	if((V82)<(V81)){
	goto T23;}
	{object V84 = CMPmake_fixnum(V83);
	VMR8(V84)}
	goto T23;
T23:;
	{long V85= fix((*(LnkLI25))((fixnum)(V81)-((fixnum)1),V82,V83));
	{long V86= fix((*(LnkLI26))((fixnum)(V82)-((fixnum)1),V83,V81));
	{long V87= fix((*(LnkLI27))((fixnum)(V83)-((fixnum)1),V81,V82));
	{object V88 = (*(LnkLI24))(/* INLINE-ARGS */V85,/* INLINE-ARGS */V86,/* INLINE-ARGS */V87);
	VMR8(V88)}}}}
	return Cnil;
}
/*	local entry for function TAK8	*/

static object LI9(V92,V93,V94)

register long V92;register long V93;register long V94;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if((V93)<(V92)){
	goto T26;}
	{object V95 = CMPmake_fixnum(V94);
	VMR9(V95)}
	goto T26;
T26:;
	{long V96= fix((*(LnkLI9))((fixnum)(V92)-((fixnum)1),V93,V94));
	{long V97= fix((*(LnkLI29))((fixnum)(V93)-((fixnum)1),V94,V92));
	{long V98= fix((*(LnkLI30))((fixnum)(V94)-((fixnum)1),V92,V93));
	{object V99 = (*(LnkLI28))(/* INLINE-ARGS */V96,/* INLINE-ARGS */V97,/* INLINE-ARGS */V98);
	VMR9(V99)}}}}
	return Cnil;
}
/*	local entry for function TAK9	*/

static object LI10(V103,V104,V105)

register long V103;register long V104;register long V105;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	if((V104)<(V103)){
	goto T29;}
	{object V106 = CMPmake_fixnum(V105);
	VMR10(V106)}
	goto T29;
T29:;
	{long V107= fix((*(LnkLI32))((fixnum)(V103)-((fixnum)1),V104,V105));
	{long V108= fix((*(LnkLI31))((fixnum)(V104)-((fixnum)1),V105,V103));
	{long V109= fix((*(LnkLI32))((fixnum)(V105)-((fixnum)1),V103,V104));
	{object V110 = (*(LnkLI31))(/* INLINE-ARGS */V107,/* INLINE-ARGS */V108,/* INLINE-ARGS */V109);
	VMR10(V110)}}}}
	return Cnil;
}
/*	local entry for function TAK10	*/

static object LI11(V114,V115,V116)

register long V114;register long V115;register long V116;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if((V115)<(V114)){
	goto T32;}
	{object V117 = CMPmake_fixnum(V116);
	VMR11(V117)}
	goto T32;
T32:;
	{long V118= fix((*(LnkLI20))((fixnum)(V114)-((fixnum)1),V115,V116));
	{long V119= fix((*(LnkLI33))((fixnum)(V115)-((fixnum)1),V116,V114));
	{long V120= fix((*(LnkLI34))((fixnum)(V116)-((fixnum)1),V114,V115));
	{object V121 = (*(LnkLI2))(/* INLINE-ARGS */V118,/* INLINE-ARGS */V119,/* INLINE-ARGS */V120);
	VMR11(V121)}}}}
	return Cnil;
}
/*	local entry for function TAK11	*/

static object LI12(V125,V126,V127)

register long V125;register long V126;register long V127;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if((V126)<(V125)){
	goto T35;}
	{object V128 = CMPmake_fixnum(V127);
	VMR12(V128)}
	goto T35;
T35:;
	{long V129= fix((*(LnkLI13))((fixnum)(V125)-((fixnum)1),V126,V127));
	{long V130= fix((*(LnkLI36))((fixnum)(V126)-((fixnum)1),V127,V125));
	{long V131= fix((*(LnkLI11))((fixnum)(V127)-((fixnum)1),V125,V126));
	{object V132 = (*(LnkLI35))(/* INLINE-ARGS */V129,/* INLINE-ARGS */V130,/* INLINE-ARGS */V131);
	VMR12(V132)}}}}
	return Cnil;
}
/*	local entry for function TAK12	*/

static object LI13(V136,V137,V138)

register long V136;register long V137;register long V138;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if((V137)<(V136)){
	goto T38;}
	{object V139 = CMPmake_fixnum(V138);
	VMR13(V139)}
	goto T38;
T38:;
	{long V140= fix((*(LnkLI38))((fixnum)(V136)-((fixnum)1),V137,V138));
	{long V141= fix((*(LnkLI39))((fixnum)(V137)-((fixnum)1),V138,V136));
	{long V142= fix((*(LnkLI33))((fixnum)(V138)-((fixnum)1),V136,V137));
	{object V143 = (*(LnkLI37))(/* INLINE-ARGS */V140,/* INLINE-ARGS */V141,/* INLINE-ARGS */V142);
	VMR13(V143)}}}}
	return Cnil;
}
/*	local entry for function TAK13	*/

static object LI14(V147,V148,V149)

register long V147;register long V148;register long V149;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if((V148)<(V147)){
	goto T41;}
	{object V150 = CMPmake_fixnum(V149);
	VMR14(V150)}
	goto T41;
T41:;
	{long V151= fix((*(LnkLI41))((fixnum)(V147)-((fixnum)1),V148,V149));
	{long V152= fix((*(LnkLI42))((fixnum)(V148)-((fixnum)1),V149,V147));
	{long V153= fix((*(LnkLI43))((fixnum)(V149)-((fixnum)1),V147,V148));
	{object V154 = (*(LnkLI40))(/* INLINE-ARGS */V151,/* INLINE-ARGS */V152,/* INLINE-ARGS */V153);
	VMR14(V154)}}}}
	return Cnil;
}
/*	local entry for function TAK14	*/

static object LI15(V158,V159,V160)

register long V158;register long V159;register long V160;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if((V159)<(V158)){
	goto T44;}
	{object V161 = CMPmake_fixnum(V160);
	VMR15(V161)}
	goto T44;
T44:;
	{long V162= fix((*(LnkLI17))((fixnum)(V158)-((fixnum)1),V159,V160));
	{long V163= fix((*(LnkLI45))((fixnum)(V159)-((fixnum)1),V160,V158));
	{long V164= fix((*(LnkLI17))((fixnum)(V160)-((fixnum)1),V158,V159));
	{object V165 = (*(LnkLI44))(/* INLINE-ARGS */V162,/* INLINE-ARGS */V163,/* INLINE-ARGS */V164);
	VMR15(V165)}}}}
	return Cnil;
}
/*	local entry for function TAK15	*/

static object LI16(V169,V170,V171)

register long V169;register long V170;register long V171;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if((V170)<(V169)){
	goto T47;}
	{object V172 = CMPmake_fixnum(V171);
	VMR16(V172)}
	goto T47;
T47:;
	{long V173= fix((*(LnkLI47))((fixnum)(V169)-((fixnum)1),V170,V171));
	{long V174= fix((*(LnkLI48))((fixnum)(V170)-((fixnum)1),V171,V169));
	{long V175= fix((*(LnkLI49))((fixnum)(V171)-((fixnum)1),V169,V170));
	{object V176 = (*(LnkLI46))(/* INLINE-ARGS */V173,/* INLINE-ARGS */V174,/* INLINE-ARGS */V175);
	VMR16(V176)}}}}
	return Cnil;
}
/*	local entry for function TAK16	*/

static object LI17(V180,V181,V182)

register long V180;register long V181;register long V182;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((V181)<(V180)){
	goto T50;}
	{object V183 = CMPmake_fixnum(V182);
	VMR17(V183)}
	goto T50;
T50:;
	{long V184= fix((*(LnkLI50))((fixnum)(V180)-((fixnum)1),V181,V182));
	{long V185= fix((*(LnkLI34))((fixnum)(V181)-((fixnum)1),V182,V180));
	{long V186= fix((*(LnkLI51))((fixnum)(V182)-((fixnum)1),V180,V181));
	{object V187 = (*(LnkLI3))(/* INLINE-ARGS */V184,/* INLINE-ARGS */V185,/* INLINE-ARGS */V186);
	VMR17(V187)}}}}
	return Cnil;
}
/*	local entry for function TAK17	*/

static object LI18(V191,V192,V193)

register long V191;register long V192;register long V193;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if((V192)<(V191)){
	goto T53;}
	{object V194 = CMPmake_fixnum(V193);
	VMR18(V194)}
	goto T53;
T53:;
	{long V195= fix((*(LnkLI19))((fixnum)(V191)-((fixnum)1),V192,V193));
	{long V196= fix((*(LnkLI52))((fixnum)(V192)-((fixnum)1),V193,V191));
	{long V197= fix((*(LnkLI18))((fixnum)(V193)-((fixnum)1),V191,V192));
	{object V198 = (*(LnkLI41))(/* INLINE-ARGS */V195,/* INLINE-ARGS */V196,/* INLINE-ARGS */V197);
	VMR18(V198)}}}}
	return Cnil;
}
/*	local entry for function TAK18	*/

static object LI19(V202,V203,V204)

register long V202;register long V203;register long V204;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if((V203)<(V202)){
	goto T56;}
	{object V205 = CMPmake_fixnum(V204);
	VMR19(V205)}
	goto T56;
T56:;
	{long V206= fix((*(LnkLI8))((fixnum)(V202)-((fixnum)1),V203,V204));
	{long V207= fix((*(LnkLI28))((fixnum)(V203)-((fixnum)1),V204,V202));
	{long V208= fix((*(LnkLI53))((fixnum)(V204)-((fixnum)1),V202,V203));
	{object V209 = (*(LnkLI23))(/* INLINE-ARGS */V206,/* INLINE-ARGS */V207,/* INLINE-ARGS */V208);
	VMR19(V209)}}}}
	return Cnil;
}
/*	local entry for function TAK19	*/

static object LI20(V213,V214,V215)

register long V213;register long V214;register long V215;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	if((V214)<(V213)){
	goto T59;}
	{object V216 = CMPmake_fixnum(V215);
	VMR20(V216)}
	goto T59;
T59:;
	{long V217= fix((*(LnkLI55))((fixnum)(V213)-((fixnum)1),V214,V215));
	{long V218= fix((*(LnkLI54))((fixnum)(V214)-((fixnum)1),V215,V213));
	{long V219= fix((*(LnkLI55))((fixnum)(V215)-((fixnum)1),V213,V214));
	{object V220 = (*(LnkLI54))(/* INLINE-ARGS */V217,/* INLINE-ARGS */V218,/* INLINE-ARGS */V219);
	VMR20(V220)}}}}
	return Cnil;
}
/*	local entry for function TAK20	*/

static object LI21(V224,V225,V226)

register long V224;register long V225;register long V226;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	if((V225)<(V224)){
	goto T62;}
	{object V227 = CMPmake_fixnum(V226);
	VMR21(V227)}
	goto T62;
T62:;
	{long V228= fix((*(LnkLI22))((fixnum)(V224)-((fixnum)1),V225,V226));
	{long V229= fix((*(LnkLI56))((fixnum)(V225)-((fixnum)1),V226,V224));
	{long V230= fix((*(LnkLI57))((fixnum)(V226)-((fixnum)1),V224,V225));
	{object V231 = (*(LnkLI33))(/* INLINE-ARGS */V228,/* INLINE-ARGS */V229,/* INLINE-ARGS */V230);
	VMR21(V231)}}}}
	return Cnil;
}
/*	local entry for function TAK21	*/

static object LI22(V235,V236,V237)

register long V235;register long V236;register long V237;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	if((V236)<(V235)){
	goto T65;}
	{object V238 = CMPmake_fixnum(V237);
	VMR22(V238)}
	goto T65;
T65:;
	{long V239= fix((*(LnkLI40))((fixnum)(V235)-((fixnum)1),V236,V237));
	{long V240= fix((*(LnkLI58))((fixnum)(V236)-((fixnum)1),V237,V235));
	{long V241= fix((*(LnkLI5))((fixnum)(V237)-((fixnum)1),V235,V236));
	{object V242 = (*(LnkLI6))(/* INLINE-ARGS */V239,/* INLINE-ARGS */V240,/* INLINE-ARGS */V241);
	VMR22(V242)}}}}
	return Cnil;
}
/*	local entry for function TAK22	*/

static object LI23(V246,V247,V248)

register long V246;register long V247;register long V248;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if((V247)<(V246)){
	goto T68;}
	{object V249 = CMPmake_fixnum(V248);
	VMR23(V249)}
	goto T68;
T68:;
	{long V250= fix((*(LnkLI10))((fixnum)(V246)-((fixnum)1),V247,V248));
	{long V251= fix((*(LnkLI30))((fixnum)(V247)-((fixnum)1),V248,V246));
	{long V252= fix((*(LnkLI59))((fixnum)(V248)-((fixnum)1),V246,V247));
	{object V253 = (*(LnkLI53))(/* INLINE-ARGS */V250,/* INLINE-ARGS */V251,/* INLINE-ARGS */V252);
	VMR23(V253)}}}}
	return Cnil;
}
/*	local entry for function TAK23	*/

static object LI24(V257,V258,V259)

register long V257;register long V258;register long V259;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if((V258)<(V257)){
	goto T71;}
	{object V260 = CMPmake_fixnum(V259);
	VMR24(V260)}
	goto T71;
T71:;
	{long V261= fix((*(LnkLI26))((fixnum)(V257)-((fixnum)1),V258,V259));
	{long V262= fix((*(LnkLI61))((fixnum)(V258)-((fixnum)1),V259,V257));
	{long V263= fix((*(LnkLI24))((fixnum)(V259)-((fixnum)1),V257,V258));
	{object V264 = (*(LnkLI60))(/* INLINE-ARGS */V261,/* INLINE-ARGS */V262,/* INLINE-ARGS */V263);
	VMR24(V264)}}}}
	return Cnil;
}
/*	local entry for function TAK24	*/

static object LI25(V268,V269,V270)

register long V268;register long V269;register long V270;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	if((V269)<(V268)){
	goto T74;}
	{object V271 = CMPmake_fixnum(V270);
	VMR25(V271)}
	goto T74;
T74:;
	{long V272= fix((*(LnkLI62))((fixnum)(V268)-((fixnum)1),V269,V270));
	{long V273= fix((*(LnkLI63))((fixnum)(V269)-((fixnum)1),V270,V268));
	{long V274= fix((*(LnkLI62))((fixnum)(V270)-((fixnum)1),V268,V269));
	{object V275 = (*(LnkLI62))(/* INLINE-ARGS */V272,/* INLINE-ARGS */V273,/* INLINE-ARGS */V274);
	VMR25(V275)}}}}
	return Cnil;
}
/*	local entry for function TAK25	*/

static object LI26(V279,V280,V281)

register long V279;register long V280;register long V281;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if((V280)<(V279)){
	goto T77;}
	{object V282 = CMPmake_fixnum(V281);
	VMR26(V282)}
	goto T77;
T77:;
	{long V283= fix((*(LnkLI65))((fixnum)(V279)-((fixnum)1),V280,V281));
	{long V284= fix((*(LnkLI66))((fixnum)(V280)-((fixnum)1),V281,V279));
	{long V285= fix((*(LnkLI58))((fixnum)(V281)-((fixnum)1),V279,V280));
	{object V286 = (*(LnkLI64))(/* INLINE-ARGS */V283,/* INLINE-ARGS */V284,/* INLINE-ARGS */V285);
	VMR26(V286)}}}}
	return Cnil;
}
/*	local entry for function TAK26	*/

static object LI27(V290,V291,V292)

register long V290;register long V291;register long V292;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	if((V291)<(V290)){
	goto T80;}
	{object V293 = CMPmake_fixnum(V292);
	VMR27(V293)}
	goto T80;
T80:;
	{long V294= fix((*(LnkLI29))((fixnum)(V290)-((fixnum)1),V291,V292));
	{long V295= fix((*(LnkLI68))((fixnum)(V291)-((fixnum)1),V292,V290));
	{long V296= fix((*(LnkLI21))((fixnum)(V292)-((fixnum)1),V290,V291));
	{object V297 = (*(LnkLI67))(/* INLINE-ARGS */V294,/* INLINE-ARGS */V295,/* INLINE-ARGS */V296);
	VMR27(V297)}}}}
	return Cnil;
}
/*	local entry for function TAK27	*/

static object LI28(V301,V302,V303)

register long V301;register long V302;register long V303;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	if((V302)<(V301)){
	goto T83;}
	{object V304 = CMPmake_fixnum(V303);
	VMR28(V304)}
	goto T83;
T83:;
	{long V305= fix((*(LnkLI27))((fixnum)(V301)-((fixnum)1),V302,V303));
	{long V306= fix((*(LnkLI24))((fixnum)(V302)-((fixnum)1),V303,V301));
	{long V307= fix((*(LnkLI48))((fixnum)(V303)-((fixnum)1),V301,V302));
	{object V308 = (*(LnkLI69))(/* INLINE-ARGS */V305,/* INLINE-ARGS */V306,/* INLINE-ARGS */V307);
	VMR28(V308)}}}}
	return Cnil;
}
/*	local entry for function TAK28	*/

static object LI29(V312,V313,V314)

register long V312;register long V313;register long V314;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if((V313)<(V312)){
	goto T86;}
	{object V315 = CMPmake_fixnum(V314);
	VMR29(V315)}
	goto T86;
T86:;
	{long V316= fix((*(LnkLI70))((fixnum)(V312)-((fixnum)1),V313,V314));
	{long V317= fix((*(LnkLI23))((fixnum)(V313)-((fixnum)1),V314,V312));
	{long V318= fix((*(LnkLI71))((fixnum)(V314)-((fixnum)1),V312,V313));
	{object V319 = (*(LnkLI50))(/* INLINE-ARGS */V316,/* INLINE-ARGS */V317,/* INLINE-ARGS */V318);
	VMR29(V319)}}}}
	return Cnil;
}
/*	local entry for function TAK29	*/

static object LI30(V323,V324,V325)

register long V323;register long V324;register long V325;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if((V324)<(V323)){
	goto T89;}
	{object V326 = CMPmake_fixnum(V325);
	VMR30(V326)}
	goto T89;
T89:;
	{long V327= fix((*(LnkLI31))((fixnum)(V323)-((fixnum)1),V324,V325));
	{long V328= fix((*(LnkLI72))((fixnum)(V324)-((fixnum)1),V325,V323));
	{long V329= fix((*(LnkLI31))((fixnum)(V325)-((fixnum)1),V323,V324));
	{object V330 = (*(LnkLI72))(/* INLINE-ARGS */V327,/* INLINE-ARGS */V328,/* INLINE-ARGS */V329);
	VMR30(V330)}}}}
	return Cnil;
}
/*	local entry for function TAK30	*/

static object LI31(V334,V335,V336)

register long V334;register long V335;register long V336;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if((V335)<(V334)){
	goto T92;}
	{object V337 = CMPmake_fixnum(V336);
	VMR31(V337)}
	goto T92;
T92:;
	{long V338= fix((*(LnkLI73))((fixnum)(V334)-((fixnum)1),V335,V336));
	{long V339= fix((*(LnkLI74))((fixnum)(V335)-((fixnum)1),V336,V334));
	{long V340= fix((*(LnkLI67))((fixnum)(V336)-((fixnum)1),V334,V335));
	{object V341 = (*(LnkLI56))(/* INLINE-ARGS */V338,/* INLINE-ARGS */V339,/* INLINE-ARGS */V340);
	VMR31(V341)}}}}
	return Cnil;
}
/*	local entry for function TAK31	*/

static object LI32(V345,V346,V347)

register long V345;register long V346;register long V347;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if((V346)<(V345)){
	goto T95;}
	{object V348 = CMPmake_fixnum(V347);
	VMR32(V348)}
	goto T95;
T95:;
	{long V349= fix((*(LnkLI75))((fixnum)(V345)-((fixnum)1),V346,V347));
	{long V350= fix((*(LnkLI76))((fixnum)(V346)-((fixnum)1),V347,V345));
	{long V351= fix((*(LnkLI13))((fixnum)(V347)-((fixnum)1),V345,V346));
	{object V352 = (*(LnkLI36))(/* INLINE-ARGS */V349,/* INLINE-ARGS */V350,/* INLINE-ARGS */V351);
	VMR32(V352)}}}}
	return Cnil;
}
/*	local entry for function TAK32	*/

static object LI33(V356,V357,V358)

register long V356;register long V357;register long V358;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	if((V357)<(V356)){
	goto T98;}
	{object V359 = CMPmake_fixnum(V358);
	VMR33(V359)}
	goto T98;
T98:;
	{long V360= fix((*(LnkLI33))((fixnum)(V356)-((fixnum)1),V357,V358));
	{long V361= fix((*(LnkLI77))((fixnum)(V357)-((fixnum)1),V358,V356));
	{long V362= fix((*(LnkLI78))((fixnum)(V358)-((fixnum)1),V356,V357));
	{object V363 = (*(LnkLI9))(/* INLINE-ARGS */V360,/* INLINE-ARGS */V361,/* INLINE-ARGS */V362);
	VMR33(V363)}}}}
	return Cnil;
}
/*	local entry for function TAK33	*/

static object LI34(V367,V368,V369)

register long V367;register long V368;register long V369;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	if((V368)<(V367)){
	goto T101;}
	{object V370 = CMPmake_fixnum(V369);
	VMR34(V370)}
	goto T101;
T101:;
	{long V371= fix((*(LnkLI79))((fixnum)(V367)-((fixnum)1),V368,V369));
	{long V372= fix((*(LnkLI5))((fixnum)(V368)-((fixnum)1),V369,V367));
	{long V373= fix((*(LnkLI80))((fixnum)(V369)-((fixnum)1),V367,V368));
	{object V374 = (*(LnkLI7))(/* INLINE-ARGS */V371,/* INLINE-ARGS */V372,/* INLINE-ARGS */V373);
	VMR34(V374)}}}}
	return Cnil;
}
/*	local entry for function TAK34	*/

static object LI35(V378,V379,V380)

register long V378;register long V379;register long V380;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if((V379)<(V378)){
	goto T104;}
	{object V381 = CMPmake_fixnum(V380);
	VMR35(V381)}
	goto T104;
T104:;
	{long V382= fix((*(LnkLI82))((fixnum)(V378)-((fixnum)1),V379,V380));
	{long V383= fix((*(LnkLI16))((fixnum)(V379)-((fixnum)1),V380,V378));
	{long V384= fix((*(LnkLI82))((fixnum)(V380)-((fixnum)1),V378,V379));
	{object V385 = (*(LnkLI81))(/* INLINE-ARGS */V382,/* INLINE-ARGS */V383,/* INLINE-ARGS */V384);
	VMR35(V385)}}}}
	return Cnil;
}
/*	local entry for function TAK35	*/

static object LI36(V389,V390,V391)

register long V389;register long V390;register long V391;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	if((V390)<(V389)){
	goto T107;}
	{object V392 = CMPmake_fixnum(V391);
	VMR36(V392)}
	goto T107;
T107:;
	{long V393= fix((*(LnkLI36))((fixnum)(V389)-((fixnum)1),V390,V391));
	{long V394= fix((*(LnkLI25))((fixnum)(V390)-((fixnum)1),V391,V389));
	{long V395= fix((*(LnkLI35))((fixnum)(V391)-((fixnum)1),V389,V390));
	{object V396 = (*(LnkLI27))(/* INLINE-ARGS */V393,/* INLINE-ARGS */V394,/* INLINE-ARGS */V395);
	VMR36(V396)}}}}
	return Cnil;
}
/*	local entry for function TAK36	*/

static object LI37(V400,V401,V402)

register long V400;register long V401;register long V402;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	if((V401)<(V400)){
	goto T110;}
	{object V403 = CMPmake_fixnum(V402);
	VMR37(V403)}
	goto T110;
T110:;
	{long V404= fix((*(LnkLI83))((fixnum)(V400)-((fixnum)1),V401,V402));
	{long V405= fix((*(LnkLI20))((fixnum)(V401)-((fixnum)1),V402,V400));
	{long V406= fix((*(LnkLI50))((fixnum)(V402)-((fixnum)1),V400,V401));
	{object V407 = (*(LnkLI1))(/* INLINE-ARGS */V404,/* INLINE-ARGS */V405,/* INLINE-ARGS */V406);
	VMR37(V407)}}}}
	return Cnil;
}
/*	local entry for function TAK37	*/

static object LI38(V411,V412,V413)

register long V411;register long V412;register long V413;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	if((V412)<(V411)){
	goto T113;}
	{object V414 = CMPmake_fixnum(V413);
	VMR38(V414)}
	goto T113;
T113:;
	{long V415= fix((*(LnkLI18))((fixnum)(V411)-((fixnum)1),V412,V413));
	{long V416= fix((*(LnkLI41))((fixnum)(V412)-((fixnum)1),V413,V411));
	{long V417= fix((*(LnkLI84))((fixnum)(V413)-((fixnum)1),V411,V412));
	{object V418 = (*(LnkLI43))(/* INLINE-ARGS */V415,/* INLINE-ARGS */V416,/* INLINE-ARGS */V417);
	VMR38(V418)}}}}
	return Cnil;
}
/*	local entry for function TAK38	*/

static object LI39(V422,V423,V424)

register long V422;register long V423;register long V424;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	if((V423)<(V422)){
	goto T116;}
	{object V425 = CMPmake_fixnum(V424);
	VMR39(V425)}
	goto T116;
T116:;
	{long V426= fix((*(LnkLI39))((fixnum)(V422)-((fixnum)1),V423,V424));
	{long V427= fix((*(LnkLI50))((fixnum)(V423)-((fixnum)1),V424,V422));
	{long V428= fix((*(LnkLI77))((fixnum)(V424)-((fixnum)1),V422,V423));
	{object V429 = (*(LnkLI85))(/* INLINE-ARGS */V426,/* INLINE-ARGS */V427,/* INLINE-ARGS */V428);
	VMR39(V429)}}}}
	return Cnil;
}
/*	local entry for function TAK39	*/

static object LI40(V433,V434,V435)

register long V433;register long V434;register long V435;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	if((V434)<(V433)){
	goto T119;}
	{object V436 = CMPmake_fixnum(V435);
	VMR40(V436)}
	goto T119;
T119:;
	{long V437= fix((*(LnkLI86))((fixnum)(V433)-((fixnum)1),V434,V435));
	{long V438= fix((*(LnkLI55))((fixnum)(V434)-((fixnum)1),V435,V433));
	{long V439= fix((*(LnkLI86))((fixnum)(V435)-((fixnum)1),V433,V434));
	{object V440 = (*(LnkLI55))(/* INLINE-ARGS */V437,/* INLINE-ARGS */V438,/* INLINE-ARGS */V439);
	VMR40(V440)}}}}
	return Cnil;
}
/*	local entry for function TAK40	*/

static object LI41(V444,V445,V446)

register long V444;register long V445;register long V446;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	if((V445)<(V444)){
	goto T122;}
	{object V447 = CMPmake_fixnum(V446);
	VMR41(V447)}
	goto T122;
T122:;
	{long V448= fix((*(LnkLI3))((fixnum)(V444)-((fixnum)1),V445,V446));
	{long V449= fix((*(LnkLI10))((fixnum)(V445)-((fixnum)1),V446,V444));
	{long V450= fix((*(LnkLI68))((fixnum)(V446)-((fixnum)1),V444,V445));
	{object V451 = (*(LnkLI74))(/* INLINE-ARGS */V448,/* INLINE-ARGS */V449,/* INLINE-ARGS */V450);
	VMR41(V451)}}}}
	return Cnil;
}
/*	local entry for function TAK41	*/

static object LI42(V455,V456,V457)

register long V455;register long V456;register long V457;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	if((V456)<(V455)){
	goto T125;}
	{object V458 = CMPmake_fixnum(V457);
	VMR42(V458)}
	goto T125;
T125:;
	{long V459= fix((*(LnkLI42))((fixnum)(V455)-((fixnum)1),V456,V457));
	{long V460= fix((*(LnkLI65))((fixnum)(V456)-((fixnum)1),V457,V455));
	{long V461= fix((*(LnkLI40))((fixnum)(V457)-((fixnum)1),V455,V456));
	{object V462 = (*(LnkLI58))(/* INLINE-ARGS */V459,/* INLINE-ARGS */V460,/* INLINE-ARGS */V461);
	VMR42(V462)}}}}
	return Cnil;
}
/*	local entry for function TAK42	*/

static object LI43(V466,V467,V468)

register long V466;register long V467;register long V468;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	if((V467)<(V466)){
	goto T128;}
	{object V469 = CMPmake_fixnum(V468);
	VMR43(V469)}
	goto T128;
T128:;
	{long V470= fix((*(LnkLI59))((fixnum)(V466)-((fixnum)1),V467,V468));
	{long V471= fix((*(LnkLI70))((fixnum)(V467)-((fixnum)1),V468,V466));
	{long V472= fix((*(LnkLI56))((fixnum)(V468)-((fixnum)1),V466,V467));
	{object V473 = (*(LnkLI39))(/* INLINE-ARGS */V470,/* INLINE-ARGS */V471,/* INLINE-ARGS */V472);
	VMR43(V473)}}}}
	return Cnil;
}
/*	local entry for function TAK43	*/

static object LI44(V477,V478,V479)

register long V477;register long V478;register long V479;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if((V478)<(V477)){
	goto T131;}
	{object V480 = CMPmake_fixnum(V479);
	VMR44(V480)}
	goto T131;
T131:;
	{long V481= fix((*(LnkLI69))((fixnum)(V477)-((fixnum)1),V478,V479));
	{long V482= fix((*(LnkLI75))((fixnum)(V478)-((fixnum)1),V479,V477));
	{long V483= fix((*(LnkLI12))((fixnum)(V479)-((fixnum)1),V477,V478));
	{object V484 = (*(LnkLI13))(/* INLINE-ARGS */V481,/* INLINE-ARGS */V482,/* INLINE-ARGS */V483);
	VMR44(V484)}}}}
	return Cnil;
}
/*	local entry for function TAK44	*/

static object LI45(V488,V489,V490)

register long V488;register long V489;register long V490;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	if((V489)<(V488)){
	goto T134;}
	{object V491 = CMPmake_fixnum(V490);
	VMR45(V491)}
	goto T134;
T134:;
	{long V492= fix((*(LnkLI45))((fixnum)(V488)-((fixnum)1),V489,V490));
	{long V493= fix((*(LnkLI82))((fixnum)(V489)-((fixnum)1),V490,V488));
	{long V494= fix((*(LnkLI45))((fixnum)(V490)-((fixnum)1),V488,V489));
	{object V495 = (*(LnkLI87))(/* INLINE-ARGS */V492,/* INLINE-ARGS */V493,/* INLINE-ARGS */V494);
	VMR45(V495)}}}}
	return Cnil;
}
/*	local entry for function TAK45	*/

static object LI46(V499,V500,V501)

register long V499;register long V500;register long V501;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	if((V500)<(V499)){
	goto T137;}
	{object V502 = CMPmake_fixnum(V501);
	VMR46(V502)}
	goto T137;
T137:;
	{long V503= fix((*(LnkLI4))((fixnum)(V499)-((fixnum)1),V500,V501));
	{long V504= fix((*(LnkLI18))((fixnum)(V500)-((fixnum)1),V501,V499));
	{long V505= fix((*(LnkLI88))((fixnum)(V501)-((fixnum)1),V499,V500));
	{object V506 = (*(LnkLI84))(/* INLINE-ARGS */V503,/* INLINE-ARGS */V504,/* INLINE-ARGS */V505);
	VMR46(V506)}}}}
	return Cnil;
}
/*	local entry for function TAK46	*/

static object LI47(V510,V511,V512)

register long V510;register long V511;register long V512;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	if((V511)<(V510)){
	goto T140;}
	{object V513 = CMPmake_fixnum(V512);
	VMR47(V513)}
	goto T140;
T140:;
	{long V514= fix((*(LnkLI85))((fixnum)(V510)-((fixnum)1),V511,V512));
	{long V515= fix((*(LnkLI3))((fixnum)(V511)-((fixnum)1),V512,V510));
	{long V516= fix((*(LnkLI29))((fixnum)(V512)-((fixnum)1),V510,V511));
	{object V517 = (*(LnkLI73))(/* INLINE-ARGS */V514,/* INLINE-ARGS */V515,/* INLINE-ARGS */V516);
	VMR47(V517)}}}}
	return Cnil;
}
/*	local entry for function TAK47	*/

static object LI48(V521,V522,V523)

register long V521;register long V522;register long V523;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	if((V522)<(V521)){
	goto T143;}
	{object V524 = CMPmake_fixnum(V523);
	VMR48(V524)}
	goto T143;
T143:;
	{long V525= fix((*(LnkLI48))((fixnum)(V521)-((fixnum)1),V522,V523));
	{long V526= fix((*(LnkLI69))((fixnum)(V522)-((fixnum)1),V523,V521));
	{long V527= fix((*(LnkLI46))((fixnum)(V523)-((fixnum)1),V521,V522));
	{object V528 = (*(LnkLI12))(/* INLINE-ARGS */V525,/* INLINE-ARGS */V526,/* INLINE-ARGS */V527);
	VMR48(V528)}}}}
	return Cnil;
}
/*	local entry for function TAK48	*/

static object LI49(V532,V533,V534)

register long V532;register long V533;register long V534;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	if((V533)<(V532)){
	goto T146;}
	{object V535 = CMPmake_fixnum(V534);
	VMR49(V535)}
	goto T146;
T146:;
	{long V536= fix((*(LnkLI37))((fixnum)(V532)-((fixnum)1),V533,V534));
	{long V537= fix((*(LnkLI85))((fixnum)(V533)-((fixnum)1),V534,V532));
	{long V538= fix((*(LnkLI9))((fixnum)(V534)-((fixnum)1),V532,V533));
	{object V539 = (*(LnkLI89))(/* INLINE-ARGS */V536,/* INLINE-ARGS */V537,/* INLINE-ARGS */V538);
	VMR49(V539)}}}}
	return Cnil;
}
/*	local entry for function TAK49	*/

static object LI50(V543,V544,V545)

register long V543;register long V544;register long V545;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	if((V544)<(V543)){
	goto T149;}
	{object V546 = CMPmake_fixnum(V545);
	VMR50(V546)}
	goto T149;
T149:;
	{long V547= fix((*(LnkLI90))((fixnum)(V543)-((fixnum)1),V544,V545));
	{long V548= fix((*(LnkLI90))((fixnum)(V544)-((fixnum)1),V545,V543));
	{long V549= fix((*(LnkLI90))((fixnum)(V545)-((fixnum)1),V543,V544));
	{object V550 = (*(LnkLI90))(/* INLINE-ARGS */V547,/* INLINE-ARGS */V548,/* INLINE-ARGS */V549);
	VMR50(V550)}}}}
	return Cnil;
}
/*	local entry for function TAK50	*/

static object LI51(V554,V555,V556)

register long V554;register long V555;register long V556;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	if((V555)<(V554)){
	goto T152;}
	{object V557 = CMPmake_fixnum(V556);
	VMR51(V557)}
	goto T152;
T152:;
	{long V558= fix((*(LnkLI34))((fixnum)(V554)-((fixnum)1),V555,V556));
	{long V559= fix((*(LnkLI78))((fixnum)(V555)-((fixnum)1),V556,V554));
	{long V560= fix((*(LnkLI91))((fixnum)(V556)-((fixnum)1),V554,V555));
	{object V561 = (*(LnkLI10))(/* INLINE-ARGS */V558,/* INLINE-ARGS */V559,/* INLINE-ARGS */V560);
	VMR51(V561)}}}}
	return Cnil;
}
/*	local entry for function TAK51	*/

static object LI52(V565,V566,V567)

register long V565;register long V566;register long V567;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	if((V566)<(V565)){
	goto T155;}
	{object V568 = CMPmake_fixnum(V567);
	VMR52(V568)}
	goto T155;
T155:;
	{long V569= fix((*(LnkLI60))((fixnum)(V565)-((fixnum)1),V566,V567));
	{long V570= fix((*(LnkLI49))((fixnum)(V566)-((fixnum)1),V567,V565));
	{long V571= fix((*(LnkLI75))((fixnum)(V567)-((fixnum)1),V565,V566));
	{object V572 = (*(LnkLI76))(/* INLINE-ARGS */V569,/* INLINE-ARGS */V570,/* INLINE-ARGS */V571);
	VMR52(V572)}}}}
	return Cnil;
}
/*	local entry for function TAK52	*/

static object LI53(V576,V577,V578)

register long V576;register long V577;register long V578;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	if((V577)<(V576)){
	goto T158;}
	{object V579 = CMPmake_fixnum(V578);
	VMR53(V579)}
	goto T158;
T158:;
	{long V580= fix((*(LnkLI78))((fixnum)(V576)-((fixnum)1),V577,V578));
	{long V581= fix((*(LnkLI92))((fixnum)(V577)-((fixnum)1),V578,V576));
	{long V582= fix((*(LnkLI0))((fixnum)(V578)-((fixnum)1),V576,V577));
	{object V583 = (*(LnkLI30))(/* INLINE-ARGS */V580,/* INLINE-ARGS */V581,/* INLINE-ARGS */V582);
	VMR53(V583)}}}}
	return Cnil;
}
/*	local entry for function TAK53	*/

static object LI54(V587,V588,V589)

register long V587;register long V588;register long V589;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if((V588)<(V587)){
	goto T161;}
	{object V590 = CMPmake_fixnum(V589);
	VMR54(V590)}
	goto T161;
T161:;
	{long V591= fix((*(LnkLI52))((fixnum)(V587)-((fixnum)1),V588,V589));
	{long V592= fix((*(LnkLI93))((fixnum)(V588)-((fixnum)1),V589,V587));
	{long V593= fix((*(LnkLI41))((fixnum)(V589)-((fixnum)1),V587,V588));
	{object V594 = (*(LnkLI42))(/* INLINE-ARGS */V591,/* INLINE-ARGS */V592,/* INLINE-ARGS */V593);
	VMR54(V594)}}}}
	return Cnil;
}
/*	local entry for function TAK54	*/

static object LI55(V598,V599,V600)

register long V598;register long V599;register long V600;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	if((V599)<(V598)){
	goto T164;}
	{object V601 = CMPmake_fixnum(V600);
	VMR55(V601)}
	goto T164;
T164:;
	{long V602= fix((*(LnkLI81))((fixnum)(V598)-((fixnum)1),V599,V600));
	{long V603= fix((*(LnkLI15))((fixnum)(V599)-((fixnum)1),V600,V598));
	{long V604= fix((*(LnkLI81))((fixnum)(V600)-((fixnum)1),V598,V599));
	{object V605 = (*(LnkLI17))(/* INLINE-ARGS */V602,/* INLINE-ARGS */V603,/* INLINE-ARGS */V604);
	VMR55(V605)}}}}
	return Cnil;
}
/*	local entry for function TAK55	*/

static object LI56(V609,V610,V611)

register long V609;register long V610;register long V611;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	if((V610)<(V609)){
	goto T167;}
	{object V612 = CMPmake_fixnum(V611);
	VMR56(V612)}
	goto T167;
T167:;
	{long V613= fix((*(LnkLI49))((fixnum)(V609)-((fixnum)1),V610,V611));
	{long V614= fix((*(LnkLI46))((fixnum)(V610)-((fixnum)1),V611,V609));
	{long V615= fix((*(LnkLI76))((fixnum)(V611)-((fixnum)1),V609,V610));
	{object V616 = (*(LnkLI94))(/* INLINE-ARGS */V613,/* INLINE-ARGS */V614,/* INLINE-ARGS */V615);
	VMR56(V616)}}}}
	return Cnil;
}
/*	local entry for function TAK56	*/

static object LI57(V620,V621,V622)

register long V620;register long V621;register long V622;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if((V621)<(V620)){
	goto T170;}
	{object V623 = CMPmake_fixnum(V622);
	VMR57(V623)}
	goto T170;
T170:;
	{long V624= fix((*(LnkLI28))((fixnum)(V620)-((fixnum)1),V621,V622));
	{long V625= fix((*(LnkLI67))((fixnum)(V621)-((fixnum)1),V622,V620));
	{long V626= fix((*(LnkLI83))((fixnum)(V622)-((fixnum)1),V620,V621));
	{object V627 = (*(LnkLI57))(/* INLINE-ARGS */V624,/* INLINE-ARGS */V625,/* INLINE-ARGS */V626);
	VMR57(V627)}}}}
	return Cnil;
}
/*	local entry for function TAK57	*/

static object LI58(V631,V632,V633)

register long V631;register long V632;register long V633;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if((V632)<(V631)){
	goto T173;}
	{object V634 = CMPmake_fixnum(V633);
	VMR58(V634)}
	goto T173;
T173:;
	{long V635= fix((*(LnkLI84))((fixnum)(V631)-((fixnum)1),V632,V633));
	{long V636= fix((*(LnkLI43))((fixnum)(V632)-((fixnum)1),V633,V631));
	{long V637= fix((*(LnkLI66))((fixnum)(V633)-((fixnum)1),V631,V632));
	{object V638 = (*(LnkLI79))(/* INLINE-ARGS */V635,/* INLINE-ARGS */V636,/* INLINE-ARGS */V637);
	VMR58(V638)}}}}
	return Cnil;
}
/*	local entry for function TAK58	*/

static object LI59(V642,V643,V644)

register long V642;register long V643;register long V644;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	if((V643)<(V642)){
	goto T176;}
	{object V645 = CMPmake_fixnum(V644);
	VMR59(V645)}
	goto T176;
T176:;
	{long V646= fix((*(LnkLI92))((fixnum)(V642)-((fixnum)1),V643,V644));
	{long V647= fix((*(LnkLI89))((fixnum)(V643)-((fixnum)1),V644,V642));
	{long V648= fix((*(LnkLI8))((fixnum)(V644)-((fixnum)1),V642,V643));
	{object V649 = (*(LnkLI21))(/* INLINE-ARGS */V646,/* INLINE-ARGS */V647,/* INLINE-ARGS */V648);
	VMR59(V649)}}}}
	return Cnil;
}
/*	local entry for function TAK59	*/

static object LI60(V653,V654,V655)

register long V653;register long V654;register long V655;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	if((V654)<(V653)){
	goto T179;}
	{object V656 = CMPmake_fixnum(V655);
	VMR60(V656)}
	goto T179;
T179:;
	{long V657= fix((*(LnkLI54))((fixnum)(V653)-((fixnum)1),V654,V655));
	{long V658= fix((*(LnkLI95))((fixnum)(V654)-((fixnum)1),V655,V653));
	{long V659= fix((*(LnkLI54))((fixnum)(V655)-((fixnum)1),V653,V654));
	{object V660 = (*(LnkLI95))(/* INLINE-ARGS */V657,/* INLINE-ARGS */V658,/* INLINE-ARGS */V659);
	VMR60(V660)}}}}
	return Cnil;
}
/*	local entry for function TAK60	*/

static object LI61(V664,V665,V666)

register long V664;register long V665;register long V666;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	if((V665)<(V664)){
	goto T182;}
	{object V667 = CMPmake_fixnum(V666);
	VMR61(V667)}
	goto T182;
T182:;
	{long V668= fix((*(LnkLI57))((fixnum)(V664)-((fixnum)1),V665,V666));
	{long V669= fix((*(LnkLI96))((fixnum)(V665)-((fixnum)1),V666,V664));
	{long V670= fix((*(LnkLI1))((fixnum)(V666)-((fixnum)1),V664,V665));
	{object V671 = (*(LnkLI78))(/* INLINE-ARGS */V668,/* INLINE-ARGS */V669,/* INLINE-ARGS */V670);
	VMR61(V671)}}}}
	return Cnil;
}
/*	local entry for function TAK61	*/

static object LI62(V675,V676,V677)

register long V675;register long V676;register long V677;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	if((V676)<(V675)){
	goto T185;}
	{object V678 = CMPmake_fixnum(V677);
	VMR62(V678)}
	goto T185;
T185:;
	{long V679= fix((*(LnkLI93))((fixnum)(V675)-((fixnum)1),V676,V677));
	{long V680= fix((*(LnkLI88))((fixnum)(V676)-((fixnum)1),V677,V675));
	{long V681= fix((*(LnkLI42))((fixnum)(V677)-((fixnum)1),V675,V676));
	{object V682 = (*(LnkLI65))(/* INLINE-ARGS */V679,/* INLINE-ARGS */V680,/* INLINE-ARGS */V681);
	VMR62(V682)}}}}
	return Cnil;
}
/*	local entry for function TAK62	*/

static object LI63(V686,V687,V688)

register long V686;register long V687;register long V688;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	if((V687)<(V686)){
	goto T188;}
	{object V689 = CMPmake_fixnum(V688);
	VMR63(V689)}
	goto T188;
T188:;
	{long V690= fix((*(LnkLI56))((fixnum)(V686)-((fixnum)1),V687,V688));
	{long V691= fix((*(LnkLI71))((fixnum)(V687)-((fixnum)1),V688,V686));
	{long V692= fix((*(LnkLI96))((fixnum)(V688)-((fixnum)1),V686,V687));
	{object V693 = (*(LnkLI77))(/* INLINE-ARGS */V690,/* INLINE-ARGS */V691,/* INLINE-ARGS */V692);
	VMR63(V693)}}}}
	return Cnil;
}
/*	local entry for function TAK63	*/

static object LI64(V697,V698,V699)

register long V697;register long V698;register long V699;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	if((V698)<(V697)){
	goto T191;}
	{object V700 = CMPmake_fixnum(V699);
	VMR64(V700)}
	goto T191;
T191:;
	{long V701= fix((*(LnkLI14))((fixnum)(V697)-((fixnum)1),V698,V699));
	{long V702= fix((*(LnkLI11))((fixnum)(V698)-((fixnum)1),V699,V697));
	{long V703= fix((*(LnkLI26))((fixnum)(V699)-((fixnum)1),V697,V698));
	{object V704 = (*(LnkLI61))(/* INLINE-ARGS */V701,/* INLINE-ARGS */V702,/* INLINE-ARGS */V703);
	VMR64(V704)}}}}
	return Cnil;
}
/*	local entry for function TAK64	*/

static object LI65(V708,V709,V710)

register long V708;register long V709;register long V710;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	if((V709)<(V708)){
	goto T194;}
	{object V711 = CMPmake_fixnum(V710);
	VMR65(V711)}
	goto T194;
T194:;
	{long V712= fix((*(LnkLI15))((fixnum)(V708)-((fixnum)1),V709,V710));
	{long V713= fix((*(LnkLI44))((fixnum)(V709)-((fixnum)1),V710,V708));
	{long V714= fix((*(LnkLI15))((fixnum)(V710)-((fixnum)1),V708,V709));
	{object V715 = (*(LnkLI45))(/* INLINE-ARGS */V712,/* INLINE-ARGS */V713,/* INLINE-ARGS */V714);
	VMR65(V715)}}}}
	return Cnil;
}
/*	local entry for function TAK65	*/

static object LI66(V719,V720,V721)

register long V719;register long V720;register long V721;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	if((V720)<(V719)){
	goto T197;}
	{object V722 = CMPmake_fixnum(V721);
	VMR66(V722)}
	goto T197;
T197:;
	{long V723= fix((*(LnkLI58))((fixnum)(V719)-((fixnum)1),V720,V721));
	{long V724= fix((*(LnkLI64))((fixnum)(V720)-((fixnum)1),V721,V719));
	{long V725= fix((*(LnkLI6))((fixnum)(V721)-((fixnum)1),V719,V720));
	{object V726 = (*(LnkLI19))(/* INLINE-ARGS */V723,/* INLINE-ARGS */V724,/* INLINE-ARGS */V725);
	VMR66(V726)}}}}
	return Cnil;
}
/*	local entry for function TAK66	*/

static object LI67(V730,V731,V732)

register long V730;register long V731;register long V732;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	if((V731)<(V730)){
	goto T200;}
	{object V733 = CMPmake_fixnum(V732);
	VMR67(V733)}
	goto T200;
T200:;
	{long V734= fix((*(LnkLI97))((fixnum)(V730)-((fixnum)1),V731,V732));
	{long V735= fix((*(LnkLI1))((fixnum)(V731)-((fixnum)1),V732,V730));
	{long V736= fix((*(LnkLI85))((fixnum)(V732)-((fixnum)1),V730,V731));
	{object V737 = (*(LnkLI91))(/* INLINE-ARGS */V734,/* INLINE-ARGS */V735,/* INLINE-ARGS */V736);
	VMR67(V737)}}}}
	return Cnil;
}
/*	local entry for function TAK67	*/

static object LI68(V741,V742,V743)

register long V741;register long V742;register long V743;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	if((V742)<(V741)){
	goto T203;}
	{object V744 = CMPmake_fixnum(V743);
	VMR68(V744)}
	goto T203;
T203:;
	{long V745= fix((*(LnkLI46))((fixnum)(V741)-((fixnum)1),V742,V743));
	{long V746= fix((*(LnkLI12))((fixnum)(V742)-((fixnum)1),V743,V741));
	{long V747= fix((*(LnkLI94))((fixnum)(V743)-((fixnum)1),V741,V742));
	{object V748 = (*(LnkLI14))(/* INLINE-ARGS */V745,/* INLINE-ARGS */V746,/* INLINE-ARGS */V747);
	VMR68(V748)}}}}
	return Cnil;
}
/*	local entry for function TAK68	*/

static object LI69(V752,V753,V754)

register long V752;register long V753;register long V754;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	if((V753)<(V752)){
	goto T206;}
	{object V755 = CMPmake_fixnum(V754);
	VMR69(V755)}
	goto T206;
T206:;
	{long V756= fix((*(LnkLI30))((fixnum)(V752)-((fixnum)1),V753,V754));
	{long V757= fix((*(LnkLI21))((fixnum)(V753)-((fixnum)1),V754,V752));
	{long V758= fix((*(LnkLI70))((fixnum)(V754)-((fixnum)1),V752,V753));
	{object V759 = (*(LnkLI83))(/* INLINE-ARGS */V756,/* INLINE-ARGS */V757,/* INLINE-ARGS */V758);
	VMR69(V759)}}}}
	return Cnil;
}
/*	local entry for function TAK69	*/

static object LI70(V763,V764,V765)

register long V763;register long V764;register long V765;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	if((V764)<(V763)){
	goto T209;}
	{object V766 = CMPmake_fixnum(V765);
	VMR70(V766)}
	goto T209;
T209:;
	{long V767= fix((*(LnkLI98))((fixnum)(V763)-((fixnum)1),V764,V765));
	{long V768= fix((*(LnkLI32))((fixnum)(V764)-((fixnum)1),V765,V763));
	{long V769= fix((*(LnkLI98))((fixnum)(V765)-((fixnum)1),V763,V764));
	{object V770 = (*(LnkLI32))(/* INLINE-ARGS */V767,/* INLINE-ARGS */V768,/* INLINE-ARGS */V769);
	VMR70(V770)}}}}
	return Cnil;
}
/*	local entry for function TAK70	*/

static object LI71(V774,V775,V776)

register long V774;register long V775;register long V776;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	if((V775)<(V774)){
	goto T212;}
	{object V777 = CMPmake_fixnum(V776);
	VMR71(V777)}
	goto T212;
T212:;
	{long V778= fix((*(LnkLI67))((fixnum)(V774)-((fixnum)1),V775,V776));
	{long V779= fix((*(LnkLI38))((fixnum)(V775)-((fixnum)1),V776,V774));
	{long V780= fix((*(LnkLI20))((fixnum)(V776)-((fixnum)1),V774,V775));
	{object V781 = (*(LnkLI96))(/* INLINE-ARGS */V778,/* INLINE-ARGS */V779,/* INLINE-ARGS */V780);
	VMR71(V781)}}}}
	return Cnil;
}
/*	local entry for function TAK71	*/

static object LI72(V785,V786,V787)

register long V785;register long V786;register long V787;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	if((V786)<(V785)){
	goto T215;}
	{object V788 = CMPmake_fixnum(V787);
	VMR72(V788)}
	goto T215;
T215:;
	{long V789= fix((*(LnkLI61))((fixnum)(V785)-((fixnum)1),V786,V787));
	{long V790= fix((*(LnkLI47))((fixnum)(V786)-((fixnum)1),V787,V785));
	{long V791= fix((*(LnkLI60))((fixnum)(V787)-((fixnum)1),V785,V786));
	{object V792 = (*(LnkLI49))(/* INLINE-ARGS */V789,/* INLINE-ARGS */V790,/* INLINE-ARGS */V791);
	VMR72(V792)}}}}
	return Cnil;
}
/*	local entry for function TAK72	*/

static object LI73(V796,V797,V798)

register long V796;register long V797;register long V798;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	if((V797)<(V796)){
	goto T218;}
	{object V799 = CMPmake_fixnum(V798);
	VMR73(V799)}
	goto T218;
T218:;
	{long V800= fix((*(LnkLI0))((fixnum)(V796)-((fixnum)1),V797,V798));
	{long V801= fix((*(LnkLI8))((fixnum)(V797)-((fixnum)1),V798,V796));
	{long V802= fix((*(LnkLI74))((fixnum)(V798)-((fixnum)1),V796,V797));
	{object V803 = (*(LnkLI70))(/* INLINE-ARGS */V800,/* INLINE-ARGS */V801,/* INLINE-ARGS */V802);
	VMR73(V803)}}}}
	return Cnil;
}
/*	local entry for function TAK73	*/

static object LI74(V807,V808,V809)

register long V807;register long V808;register long V809;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	if((V808)<(V807)){
	goto T221;}
	{object V810 = CMPmake_fixnum(V809);
	VMR74(V810)}
	goto T221;
T221:;
	{long V811= fix((*(LnkLI43))((fixnum)(V807)-((fixnum)1),V808,V809));
	{long V812= fix((*(LnkLI40))((fixnum)(V808)-((fixnum)1),V809,V807));
	{long V813= fix((*(LnkLI79))((fixnum)(V809)-((fixnum)1),V807,V808));
	{object V814 = (*(LnkLI5))(/* INLINE-ARGS */V811,/* INLINE-ARGS */V812,/* INLINE-ARGS */V813);
	VMR74(V814)}}}}
	return Cnil;
}
/*	local entry for function TAK74	*/

static object LI75(V818,V819,V820)

register long V818;register long V819;register long V820;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	if((V819)<(V818)){
	goto T224;}
	{object V821 = CMPmake_fixnum(V820);
	VMR75(V821)}
	goto T224;
T224:;
	{long V822= fix((*(LnkLI63))((fixnum)(V818)-((fixnum)1),V819,V820));
	{long V823= fix((*(LnkLI62))((fixnum)(V819)-((fixnum)1),V820,V818));
	{long V824= fix((*(LnkLI63))((fixnum)(V820)-((fixnum)1),V818,V819));
	{object V825 = (*(LnkLI63))(/* INLINE-ARGS */V822,/* INLINE-ARGS */V823,/* INLINE-ARGS */V824);
	VMR75(V825)}}}}
	return Cnil;
}
/*	local entry for function TAK75	*/

static object LI76(V829,V830,V831)

register long V829;register long V830;register long V831;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	if((V830)<(V829)){
	goto T227;}
	{object V832 = CMPmake_fixnum(V831);
	VMR76(V832)}
	goto T227;
T227:;
	{long V833= fix((*(LnkLI35))((fixnum)(V829)-((fixnum)1),V830,V831));
	{long V834= fix((*(LnkLI27))((fixnum)(V830)-((fixnum)1),V831,V829));
	{long V835= fix((*(LnkLI47))((fixnum)(V831)-((fixnum)1),V829,V830));
	{object V836 = (*(LnkLI48))(/* INLINE-ARGS */V833,/* INLINE-ARGS */V834,/* INLINE-ARGS */V835);
	VMR76(V836)}}}}
	return Cnil;
}
/*	local entry for function TAK76	*/

static object LI77(V840,V841,V842)

register long V840;register long V841;register long V842;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	if((V841)<(V840)){
	goto T230;}
	{object V843 = CMPmake_fixnum(V842);
	VMR77(V843)}
	goto T230;
T230:;
	{long V844= fix((*(LnkLI89))((fixnum)(V840)-((fixnum)1),V841,V842));
	{long V845= fix((*(LnkLI73))((fixnum)(V841)-((fixnum)1),V842,V840));
	{long V846= fix((*(LnkLI28))((fixnum)(V842)-((fixnum)1),V840,V841));
	{object V847 = (*(LnkLI22))(/* INLINE-ARGS */V844,/* INLINE-ARGS */V845,/* INLINE-ARGS */V846);
	VMR77(V847)}}}}
	return Cnil;
}
/*	local entry for function TAK77	*/

static object LI78(V851,V852,V853)

register long V851;register long V852;register long V853;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	if((V852)<(V851)){
	goto T233;}
	{object V854 = CMPmake_fixnum(V853);
	VMR78(V854)}
	goto T233;
T233:;
	{long V855= fix((*(LnkLI66))((fixnum)(V851)-((fixnum)1),V852,V853));
	{long V856= fix((*(LnkLI79))((fixnum)(V852)-((fixnum)1),V853,V851));
	{long V857= fix((*(LnkLI64))((fixnum)(V853)-((fixnum)1),V851,V852));
	{object V858 = (*(LnkLI80))(/* INLINE-ARGS */V855,/* INLINE-ARGS */V856,/* INLINE-ARGS */V857);
	VMR78(V858)}}}}
	return Cnil;
}
/*	local entry for function TAK78	*/

static object LI79(V862,V863,V864)

register long V862;register long V863;register long V864;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	if((V863)<(V862)){
	goto T236;}
	{object V865 = CMPmake_fixnum(V864);
	VMR79(V865)}
	goto T236;
T236:;
	{long V866= fix((*(LnkLI53))((fixnum)(V862)-((fixnum)1),V863,V864));
	{long V867= fix((*(LnkLI83))((fixnum)(V863)-((fixnum)1),V864,V862));
	{long V868= fix((*(LnkLI39))((fixnum)(V864)-((fixnum)1),V862,V863));
	{object V869 = (*(LnkLI97))(/* INLINE-ARGS */V866,/* INLINE-ARGS */V867,/* INLINE-ARGS */V868);
	VMR79(V869)}}}}
	return Cnil;
}
/*	local entry for function TAK79	*/

static object LI80(V873,V874,V875)

register long V873;register long V874;register long V875;
{	 VMB80 VMS80 VMV80
	goto TTL;
TTL:;
	if((V874)<(V873)){
	goto T239;}
	{object V876 = CMPmake_fixnum(V875);
	VMR80(V876)}
	goto T239;
T239:;
	{long V877= fix((*(LnkLI95))((fixnum)(V873)-((fixnum)1),V874,V875));
	{long V878= fix((*(LnkLI86))((fixnum)(V874)-((fixnum)1),V875,V873));
	{long V879= fix((*(LnkLI95))((fixnum)(V875)-((fixnum)1),V873,V874));
	{object V880 = (*(LnkLI86))(/* INLINE-ARGS */V877,/* INLINE-ARGS */V878,/* INLINE-ARGS */V879);
	VMR80(V880)}}}}
	return Cnil;
}
/*	local entry for function TAK80	*/

static object LI81(V884,V885,V886)

register long V884;register long V885;register long V886;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	if((V885)<(V884)){
	goto T242;}
	{object V887 = CMPmake_fixnum(V886);
	VMR81(V887)}
	goto T242;
T242:;
	{long V888= fix((*(LnkLI68))((fixnum)(V884)-((fixnum)1),V885,V886));
	{long V889= fix((*(LnkLI59))((fixnum)(V885)-((fixnum)1),V886,V884));
	{long V890= fix((*(LnkLI22))((fixnum)(V886)-((fixnum)1),V884,V885));
	{object V891 = (*(LnkLI38))(/* INLINE-ARGS */V888,/* INLINE-ARGS */V889,/* INLINE-ARGS */V890);
	VMR81(V891)}}}}
	return Cnil;
}
/*	local entry for function TAK81	*/

static object LI82(V895,V896,V897)

register long V895;register long V896;register long V897;
{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	if((V896)<(V895)){
	goto T245;}
	{object V898 = CMPmake_fixnum(V897);
	VMR82(V898)}
	goto T245;
T245:;
	{long V899= fix((*(LnkLI7))((fixnum)(V895)-((fixnum)1),V896,V897));
	{long V900= fix((*(LnkLI4))((fixnum)(V896)-((fixnum)1),V897,V895));
	{long V901= fix((*(LnkLI93))((fixnum)(V897)-((fixnum)1),V895,V896));
	{object V902 = (*(LnkLI88))(/* INLINE-ARGS */V899,/* INLINE-ARGS */V900,/* INLINE-ARGS */V901);
	VMR82(V902)}}}}
	return Cnil;
}
/*	local entry for function TAK82	*/

static object LI83(V906,V907,V908)

register long V906;register long V907;register long V908;
{	 VMB83 VMS83 VMV83
	goto TTL;
TTL:;
	if((V907)<(V906)){
	goto T248;}
	{object V909 = CMPmake_fixnum(V908);
	VMR83(V909)}
	goto T248;
T248:;
	{long V910= fix((*(LnkLI96))((fixnum)(V906)-((fixnum)1),V907,V908));
	{long V911= fix((*(LnkLI37))((fixnum)(V907)-((fixnum)1),V908,V906));
	{long V912= fix((*(LnkLI2))((fixnum)(V908)-((fixnum)1),V906,V907));
	{object V913 = (*(LnkLI92))(/* INLINE-ARGS */V910,/* INLINE-ARGS */V911,/* INLINE-ARGS */V912);
	VMR83(V913)}}}}
	return Cnil;
}
/*	local entry for function TAK83	*/

static object LI84(V917,V918,V919)

register long V917;register long V918;register long V919;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	if((V918)<(V917)){
	goto T251;}
	{object V920 = CMPmake_fixnum(V919);
	VMR84(V920)}
	goto T251;
T251:;
	{long V921= fix((*(LnkLI24))((fixnum)(V917)-((fixnum)1),V918,V919));
	{long V922= fix((*(LnkLI60))((fixnum)(V918)-((fixnum)1),V919,V917));
	{long V923= fix((*(LnkLI69))((fixnum)(V919)-((fixnum)1),V917,V918));
	{object V924 = (*(LnkLI75))(/* INLINE-ARGS */V921,/* INLINE-ARGS */V922,/* INLINE-ARGS */V923);
	VMR84(V924)}}}}
	return Cnil;
}
/*	local entry for function TAK84	*/

static object LI85(V928,V929,V930)

register long V928;register long V929;register long V930;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	if((V929)<(V928)){
	goto T254;}
	{object V931 = CMPmake_fixnum(V930);
	VMR85(V931)}
	goto T254;
T254:;
	{long V932= fix((*(LnkLI87))((fixnum)(V928)-((fixnum)1),V929,V930));
	{long V933= fix((*(LnkLI81))((fixnum)(V929)-((fixnum)1),V930,V928));
	{long V934= fix((*(LnkLI87))((fixnum)(V930)-((fixnum)1),V928,V929));
	{object V935 = (*(LnkLI16))(/* INLINE-ARGS */V932,/* INLINE-ARGS */V933,/* INLINE-ARGS */V934);
	VMR85(V935)}}}}
	return Cnil;
}
/*	local entry for function TAK85	*/

static object LI86(V939,V940,V941)

register long V939;register long V940;register long V941;
{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	if((V940)<(V939)){
	goto T257;}
	{object V942 = CMPmake_fixnum(V941);
	VMR86(V942)}
	goto T257;
T257:;
	{long V943= fix((*(LnkLI88))((fixnum)(V939)-((fixnum)1),V940,V941));
	{long V944= fix((*(LnkLI84))((fixnum)(V940)-((fixnum)1),V941,V939));
	{long V945= fix((*(LnkLI65))((fixnum)(V941)-((fixnum)1),V939,V940));
	{object V946 = (*(LnkLI66))(/* INLINE-ARGS */V943,/* INLINE-ARGS */V944,/* INLINE-ARGS */V945);
	VMR86(V946)}}}}
	return Cnil;
}
/*	local entry for function TAK86	*/

static object LI87(V950,V951,V952)

register long V950;register long V951;register long V952;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	if((V951)<(V950)){
	goto T260;}
	{object V953 = CMPmake_fixnum(V952);
	VMR87(V953)}
	goto T260;
T260:;
	{long V954= fix((*(LnkLI23))((fixnum)(V950)-((fixnum)1),V951,V952));
	{long V955= fix((*(LnkLI57))((fixnum)(V951)-((fixnum)1),V952,V950));
	{long V956= fix((*(LnkLI97))((fixnum)(V952)-((fixnum)1),V950,V951));
	{object V957 = (*(LnkLI34))(/* INLINE-ARGS */V954,/* INLINE-ARGS */V955,/* INLINE-ARGS */V956);
	VMR87(V957)}}}}
	return Cnil;
}
/*	local entry for function TAK87	*/

static object LI88(V961,V962,V963)

register long V961;register long V962;register long V963;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	if((V962)<(V961)){
	goto T263;}
	{object V964 = CMPmake_fixnum(V963);
	VMR88(V964)}
	goto T263;
T263:;
	{long V965= fix((*(LnkLI94))((fixnum)(V961)-((fixnum)1),V962,V963));
	{long V966= fix((*(LnkLI14))((fixnum)(V962)-((fixnum)1),V963,V961));
	{long V967= fix((*(LnkLI25))((fixnum)(V963)-((fixnum)1),V961,V962));
	{object V968 = (*(LnkLI26))(/* INLINE-ARGS */V965,/* INLINE-ARGS */V966,/* INLINE-ARGS */V967);
	VMR88(V968)}}}}
	return Cnil;
}
/*	local entry for function TAK88	*/

static object LI89(V972,V973,V974)

register long V972;register long V973;register long V974;
{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	if((V973)<(V972)){
	goto T266;}
	{object V975 = CMPmake_fixnum(V974);
	VMR89(V975)}
	goto T266;
T266:;
	{long V976= fix((*(LnkLI71))((fixnum)(V972)-((fixnum)1),V973,V974));
	{long V977= fix((*(LnkLI97))((fixnum)(V973)-((fixnum)1),V974,V972));
	{long V978= fix((*(LnkLI37))((fixnum)(V974)-((fixnum)1),V972,V973));
	{object V979 = (*(LnkLI51))(/* INLINE-ARGS */V976,/* INLINE-ARGS */V977,/* INLINE-ARGS */V978);
	VMR89(V979)}}}}
	return Cnil;
}
/*	local entry for function TAK89	*/

static object LI90(V983,V984,V985)

register long V983;register long V984;register long V985;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	if((V984)<(V983)){
	goto T269;}
	{object V986 = CMPmake_fixnum(V985);
	VMR90(V986)}
	goto T269;
T269:;
	{long V987= fix((*(LnkLI72))((fixnum)(V983)-((fixnum)1),V984,V985));
	{long V988= fix((*(LnkLI98))((fixnum)(V984)-((fixnum)1),V985,V983));
	{long V989= fix((*(LnkLI72))((fixnum)(V985)-((fixnum)1),V983,V984));
	{object V990 = (*(LnkLI98))(/* INLINE-ARGS */V987,/* INLINE-ARGS */V988,/* INLINE-ARGS */V989);
	VMR90(V990)}}}}
	return Cnil;
}
/*	local entry for function TAK90	*/

static object LI91(V994,V995,V996)

register long V994;register long V995;register long V996;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	if((V995)<(V994)){
	goto T272;}
	{object V997 = CMPmake_fixnum(V996);
	VMR91(V997)}
	goto T272;
T272:;
	{long V998= fix((*(LnkLI91))((fixnum)(V994)-((fixnum)1),V995,V996));
	{long V999= fix((*(LnkLI0))((fixnum)(V995)-((fixnum)1),V996,V994));
	{long V1000= fix((*(LnkLI73))((fixnum)(V996)-((fixnum)1),V994,V995));
	{object V1001 = (*(LnkLI59))(/* INLINE-ARGS */V998,/* INLINE-ARGS */V999,/* INLINE-ARGS */V1000);
	VMR91(V1001)}}}}
	return Cnil;
}
/*	local entry for function TAK91	*/

static object LI92(V1005,V1006,V1007)

register long V1005;register long V1006;register long V1007;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if((V1006)<(V1005)){
	goto T275;}
	{object V1008 = CMPmake_fixnum(V1007);
	VMR92(V1008)}
	goto T275;
T275:;
	{long V1009= fix((*(LnkLI11))((fixnum)(V1005)-((fixnum)1),V1006,V1007));
	{long V1010= fix((*(LnkLI35))((fixnum)(V1006)-((fixnum)1),V1007,V1005));
	{long V1011= fix((*(LnkLI61))((fixnum)(V1007)-((fixnum)1),V1005,V1006));
	{object V1012 = (*(LnkLI47))(/* INLINE-ARGS */V1009,/* INLINE-ARGS */V1010,/* INLINE-ARGS */V1011);
	VMR92(V1012)}}}}
	return Cnil;
}
/*	local entry for function TAK92	*/

static object LI93(V1016,V1017,V1018)

register long V1016;register long V1017;register long V1018;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	if((V1017)<(V1016)){
	goto T278;}
	{object V1019 = CMPmake_fixnum(V1018);
	VMR93(V1019)}
	goto T278;
T278:;
	{long V1020= fix((*(LnkLI74))((fixnum)(V1016)-((fixnum)1),V1017,V1018));
	{long V1021= fix((*(LnkLI53))((fixnum)(V1017)-((fixnum)1),V1018,V1016));
	{long V1022= fix((*(LnkLI38))((fixnum)(V1018)-((fixnum)1),V1016,V1017));
	{object V1023 = (*(LnkLI71))(/* INLINE-ARGS */V1020,/* INLINE-ARGS */V1021,/* INLINE-ARGS */V1022);
	VMR93(V1023)}}}}
	return Cnil;
}
/*	local entry for function TAK93	*/

static object LI94(V1027,V1028,V1029)

register long V1027;register long V1028;register long V1029;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	if((V1028)<(V1027)){
	goto T281;}
	{object V1030 = CMPmake_fixnum(V1029);
	VMR94(V1030)}
	goto T281;
T281:;
	{long V1031= fix((*(LnkLI80))((fixnum)(V1027)-((fixnum)1),V1028,V1029));
	{long V1032= fix((*(LnkLI7))((fixnum)(V1028)-((fixnum)1),V1029,V1027));
	{long V1033= fix((*(LnkLI52))((fixnum)(V1029)-((fixnum)1),V1027,V1028));
	{object V1034 = (*(LnkLI93))(/* INLINE-ARGS */V1031,/* INLINE-ARGS */V1032,/* INLINE-ARGS */V1033);
	VMR94(V1034)}}}}
	return Cnil;
}
/*	local entry for function TAK94	*/

static object LI95(V1038,V1039,V1040)

register long V1038;register long V1039;register long V1040;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	if((V1039)<(V1038)){
	goto T284;}
	{object V1041 = CMPmake_fixnum(V1040);
	VMR95(V1041)}
	goto T284;
T284:;
	{long V1042= fix((*(LnkLI44))((fixnum)(V1038)-((fixnum)1),V1039,V1040));
	{long V1043= fix((*(LnkLI87))((fixnum)(V1039)-((fixnum)1),V1040,V1038));
	{long V1044= fix((*(LnkLI44))((fixnum)(V1040)-((fixnum)1),V1038,V1039));
	{object V1045 = (*(LnkLI82))(/* INLINE-ARGS */V1042,/* INLINE-ARGS */V1043,/* INLINE-ARGS */V1044);
	VMR95(V1045)}}}}
	return Cnil;
}
/*	local entry for function TAK95	*/

static object LI96(V1049,V1050,V1051)

register long V1049;register long V1050;register long V1051;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	if((V1050)<(V1049)){
	goto T287;}
	{object V1052 = CMPmake_fixnum(V1051);
	VMR96(V1052)}
	goto T287;
T287:;
	{long V1053= fix((*(LnkLI76))((fixnum)(V1049)-((fixnum)1),V1050,V1051));
	{long V1054= fix((*(LnkLI94))((fixnum)(V1050)-((fixnum)1),V1051,V1049));
	{long V1055= fix((*(LnkLI36))((fixnum)(V1051)-((fixnum)1),V1049,V1050));
	{object V1056 = (*(LnkLI25))(/* INLINE-ARGS */V1053,/* INLINE-ARGS */V1054,/* INLINE-ARGS */V1055);
	VMR96(V1056)}}}}
	return Cnil;
}
/*	local entry for function TAK96	*/

static object LI97(V1060,V1061,V1062)

register long V1060;register long V1061;register long V1062;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if((V1061)<(V1060)){
	goto T290;}
	{object V1063 = CMPmake_fixnum(V1062);
	VMR97(V1063)}
	goto T290;
T290:;
	{long V1064= fix((*(LnkLI51))((fixnum)(V1060)-((fixnum)1),V1061,V1062));
	{long V1065= fix((*(LnkLI91))((fixnum)(V1061)-((fixnum)1),V1062,V1060));
	{long V1066= fix((*(LnkLI89))((fixnum)(V1062)-((fixnum)1),V1060,V1061));
	{object V1067 = (*(LnkLI68))(/* INLINE-ARGS */V1064,/* INLINE-ARGS */V1065,/* INLINE-ARGS */V1066);
	VMR97(V1067)}}}}
	return Cnil;
}
/*	local entry for function TAK97	*/

static object LI98(V1071,V1072,V1073)

register long V1071;register long V1072;register long V1073;
{	 VMB98 VMS98 VMV98
	goto TTL;
TTL:;
	if((V1072)<(V1071)){
	goto T293;}
	{object V1074 = CMPmake_fixnum(V1073);
	VMR98(V1074)}
	goto T293;
T293:;
	{long V1075= fix((*(LnkLI64))((fixnum)(V1071)-((fixnum)1),V1072,V1073));
	{long V1076= fix((*(LnkLI80))((fixnum)(V1072)-((fixnum)1),V1073,V1071));
	{long V1077= fix((*(LnkLI19))((fixnum)(V1073)-((fixnum)1),V1071,V1072));
	{object V1078 = (*(LnkLI52))(/* INLINE-ARGS */V1075,/* INLINE-ARGS */V1076,/* INLINE-ARGS */V1077);
	VMR98(V1078)}}}}
	return Cnil;
}
/*	local entry for function TAK98	*/

static object LI99(V1082,V1083,V1084)

register long V1082;register long V1083;register long V1084;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	if((V1083)<(V1082)){
	goto T296;}
	{object V1085 = CMPmake_fixnum(V1084);
	VMR99(V1085)}
	goto T296;
T296:;
	{long V1086= fix((*(LnkLI77))((fixnum)(V1082)-((fixnum)1),V1083,V1084));
	{long V1087= fix((*(LnkLI51))((fixnum)(V1083)-((fixnum)1),V1084,V1082));
	{long V1088= fix((*(LnkLI92))((fixnum)(V1084)-((fixnum)1),V1082,V1083));
	{object V1089 = (*(LnkLI29))(/* INLINE-ARGS */V1086,/* INLINE-ARGS */V1087,/* INLINE-ARGS */V1088);
	VMR99(V1089)}}}}
	return Cnil;
}
/*	local entry for function TAK99	*/

static object LI100(V1093,V1094,V1095)

register long V1093;register long V1094;register long V1095;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if((V1094)<(V1093)){
	goto T299;}
	{object V1096 = CMPmake_fixnum(V1095);
	VMR100(V1096)}
	goto T299;
T299:;
	{long V1097= fix((*(LnkLI99))((fixnum)(V1093)-((fixnum)1),V1094,V1095));
	{long V1098= fix((*(LnkLI99))((fixnum)(V1094)-((fixnum)1),V1095,V1093));
	{long V1099= fix((*(LnkLI99))((fixnum)(V1095)-((fixnum)1),V1093,V1094));
	{object V1100 = (*(LnkLI99))(/* INLINE-ARGS */V1097,/* INLINE-ARGS */V1098,/* INLINE-ARGS */V1099);
	VMR100(V1100)}}}}
	return Cnil;
}
/*	local entry for function TESTTAKR	*/

static object LI101()

{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;
	{object V1101 = (*(LnkLI99))((fixnum)18,(fixnum)12,(fixnum)6);
	VMR101(V1101)}
	return Cnil;
}
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[99],0,(void **)(void *)&LnkLI99,86019,first,ap);va_end(ap);return V1;} /* TAK0 */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],0,(void **)(void *)&LnkLI98,86019,first,ap);va_end(ap);return V1;} /* TAK90 */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],0,(void **)(void *)&LnkLI97,86019,first,ap);va_end(ap);return V1;} /* TAK79 */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[96],0,(void **)(void *)&LnkLI96,86019,first,ap);va_end(ap);return V1;} /* TAK71 */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],0,(void **)(void *)&LnkLI95,86019,first,ap);va_end(ap);return V1;} /* TAK60 */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[94],0,(void **)(void *)&LnkLI94,86019,first,ap);va_end(ap);return V1;} /* TAK56 */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[93],0,(void **)(void *)&LnkLI93,86019,first,ap);va_end(ap);return V1;} /* TAK94 */
static object  LnkTLI92(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[92],0,(void **)(void *)&LnkLI92,86019,first,ap);va_end(ap);return V1;} /* TAK83 */
static object  LnkTLI91(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[91],0,(void **)(void *)&LnkLI91,86019,first,ap);va_end(ap);return V1;} /* TAK67 */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[90],0,(void **)(void *)&LnkLI90,86019,first,ap);va_end(ap);return V1;} /* TAK50 */
static object  LnkTLI89(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[89],0,(void **)(void *)&LnkLI89,86019,first,ap);va_end(ap);return V1;} /* TAK49 */
static object  LnkTLI88(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[88],0,(void **)(void *)&LnkLI88,86019,first,ap);va_end(ap);return V1;} /* TAK82 */
static object  LnkTLI87(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[87],0,(void **)(void *)&LnkLI87,86019,first,ap);va_end(ap);return V1;} /* TAK45 */
static object  LnkTLI86(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[86],0,(void **)(void *)&LnkLI86,86019,first,ap);va_end(ap);return V1;} /* TAK80 */
static object  LnkTLI85(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[85],0,(void **)(void *)&LnkLI85,86019,first,ap);va_end(ap);return V1;} /* TAK39 */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[84],0,(void **)(void *)&LnkLI84,86019,first,ap);va_end(ap);return V1;} /* TAK46 */
static object  LnkTLI83(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[83],0,(void **)(void *)&LnkLI83,86019,first,ap);va_end(ap);return V1;} /* TAK69 */
static object  LnkTLI82(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[82],0,(void **)(void *)&LnkLI82,86019,first,ap);va_end(ap);return V1;} /* TAK95 */
static object  LnkTLI81(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[81],0,(void **)(void *)&LnkLI81,86019,first,ap);va_end(ap);return V1;} /* TAK35 */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[80],0,(void **)(void *)&LnkLI80,86019,first,ap);va_end(ap);return V1;} /* TAK78 */
static object  LnkTLI79(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[79],0,(void **)(void *)&LnkLI79,86019,first,ap);va_end(ap);return V1;} /* TAK58 */
static object  LnkTLI78(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[78],0,(void **)(void *)&LnkLI78,86019,first,ap);va_end(ap);return V1;} /* TAK61 */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[77],0,(void **)(void *)&LnkLI77,86019,first,ap);va_end(ap);return V1;} /* TAK63 */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],0,(void **)(void *)&LnkLI76,86019,first,ap);va_end(ap);return V1;} /* TAK52 */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],0,(void **)(void *)&LnkLI75,86019,first,ap);va_end(ap);return V1;} /* TAK84 */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],0,(void **)(void *)&LnkLI74,86019,first,ap);va_end(ap);return V1;} /* TAK41 */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],0,(void **)(void *)&LnkLI73,86019,first,ap);va_end(ap);return V1;} /* TAK47 */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],0,(void **)(void *)&LnkLI72,86019,first,ap);va_end(ap);return V1;} /* TAK30 */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],0,(void **)(void *)&LnkLI71,86019,first,ap);va_end(ap);return V1;} /* TAK93 */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[70],0,(void **)(void *)&LnkLI70,86019,first,ap);va_end(ap);return V1;} /* TAK73 */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],0,(void **)(void *)&LnkLI69,86019,first,ap);va_end(ap);return V1;} /* TAK28 */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],0,(void **)(void *)&LnkLI68,86019,first,ap);va_end(ap);return V1;} /* TAK97 */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],0,(void **)(void *)&LnkLI67,86019,first,ap);va_end(ap);return V1;} /* TAK27 */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],0,(void **)(void *)&LnkLI66,86019,first,ap);va_end(ap);return V1;} /* TAK86 */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[65],0,(void **)(void *)&LnkLI65,86019,first,ap);va_end(ap);return V1;} /* TAK62 */
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[64],0,(void **)(void *)&LnkLI64,86019,first,ap);va_end(ap);return V1;} /* TAK26 */
static object  LnkTLI63(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[63],0,(void **)(void *)&LnkLI63,86019,first,ap);va_end(ap);return V1;} /* TAK75 */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[62],0,(void **)(void *)&LnkLI62,86019,first,ap);va_end(ap);return V1;} /* TAK25 */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],0,(void **)(void *)&LnkLI61,86019,first,ap);va_end(ap);return V1;} /* TAK64 */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],0,(void **)(void *)&LnkLI60,86019,first,ap);va_end(ap);return V1;} /* TAK24 */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],0,(void **)(void *)&LnkLI59,86019,first,ap);va_end(ap);return V1;} /* TAK91 */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],0,(void **)(void *)&LnkLI58,86019,first,ap);va_end(ap);return V1;} /* TAK42 */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],0,(void **)(void *)&LnkLI57,86019,first,ap);va_end(ap);return V1;} /* TAK57 */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],0,(void **)(void *)&LnkLI56,86019,first,ap);va_end(ap);return V1;} /* TAK31 */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[55],0,(void **)(void *)&LnkLI55,86019,first,ap);va_end(ap);return V1;} /* TAK40 */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[54],0,(void **)(void *)&LnkLI54,86019,first,ap);va_end(ap);return V1;} /* TAK20 */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[53],0,(void **)(void *)&LnkLI53,86019,first,ap);va_end(ap);return V1;} /* TAK23 */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],0,(void **)(void *)&LnkLI52,86019,first,ap);va_end(ap);return V1;} /* TAK98 */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],0,(void **)(void *)&LnkLI51,86019,first,ap);va_end(ap);return V1;} /* TAK89 */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],0,(void **)(void *)&LnkLI50,86019,first,ap);va_end(ap);return V1;} /* TAK29 */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],0,(void **)(void *)&LnkLI49,86019,first,ap);va_end(ap);return V1;} /* TAK72 */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],0,(void **)(void *)&LnkLI48,86019,first,ap);va_end(ap);return V1;} /* TAK76 */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],0,(void **)(void *)&LnkLI47,86019,first,ap);va_end(ap);return V1;} /* TAK92 */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],0,(void **)(void *)&LnkLI46,86019,first,ap);va_end(ap);return V1;} /* TAK16 */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[45],0,(void **)(void *)&LnkLI45,86019,first,ap);va_end(ap);return V1;} /* TAK65 */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[44],0,(void **)(void *)&LnkLI44,86019,first,ap);va_end(ap);return V1;} /* TAK15 */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],0,(void **)(void *)&LnkLI43,86019,first,ap);va_end(ap);return V1;} /* TAK38 */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],0,(void **)(void *)&LnkLI42,86019,first,ap);va_end(ap);return V1;} /* TAK54 */
static object  LnkTLI41(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[41],0,(void **)(void *)&LnkLI41,86019,first,ap);va_end(ap);return V1;} /* TAK18 */
static object  LnkTLI40(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[40],0,(void **)(void *)&LnkLI40,86019,first,ap);va_end(ap);return V1;} /* TAK14 */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[39],0,(void **)(void *)&LnkLI39,86019,first,ap);va_end(ap);return V1;} /* TAK43 */
static object  LnkTLI38(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[38],0,(void **)(void *)&LnkLI38,86019,first,ap);va_end(ap);return V1;} /* TAK81 */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[37],0,(void **)(void *)&LnkLI37,86019,first,ap);va_end(ap);return V1;} /* TAK13 */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],0,(void **)(void *)&LnkLI36,86019,first,ap);va_end(ap);return V1;} /* TAK32 */
static object  LnkTLI35(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[35],0,(void **)(void *)&LnkLI35,86019,first,ap);va_end(ap);return V1;} /* TAK12 */
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[34],0,(void **)(void *)&LnkLI34,86019,first,ap);va_end(ap);return V1;} /* TAK87 */
static object  LnkTLI33(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[33],0,(void **)(void *)&LnkLI33,86019,first,ap);va_end(ap);return V1;} /* TAK21 */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],0,(void **)(void *)&LnkLI32,86019,first,ap);va_end(ap);return V1;} /* TAK70 */
static object  LnkTLI31(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[31],0,(void **)(void *)&LnkLI31,86019,first,ap);va_end(ap);return V1;} /* TAK10 */
static object  LnkTLI30(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[30],0,(void **)(void *)&LnkLI30,86019,first,ap);va_end(ap);return V1;} /* TAK53 */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[29],0,(void **)(void *)&LnkLI29,86019,first,ap);va_end(ap);return V1;} /* TAK99 */
static object  LnkTLI28(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[28],0,(void **)(void *)&LnkLI28,86019,first,ap);va_end(ap);return V1;} /* TAK9 */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[27],0,(void **)(void *)&LnkLI27,86019,first,ap);va_end(ap);return V1;} /* TAK36 */
static object  LnkTLI26(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[26],0,(void **)(void *)&LnkLI26,86019,first,ap);va_end(ap);return V1;} /* TAK88 */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[25],0,(void **)(void *)&LnkLI25,86019,first,ap);va_end(ap);return V1;} /* TAK96 */
static object  LnkTLI24(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[24],0,(void **)(void *)&LnkLI24,86019,first,ap);va_end(ap);return V1;} /* TAK8 */
static object  LnkTLI23(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[23],0,(void **)(void *)&LnkLI23,86019,first,ap);va_end(ap);return V1;} /* TAK19 */
static object  LnkTLI22(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[22],0,(void **)(void *)&LnkLI22,86019,first,ap);va_end(ap);return V1;} /* TAK77 */
static object  LnkTLI21(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[21],0,(void **)(void *)&LnkLI21,86019,first,ap);va_end(ap);return V1;} /* TAK59 */
static object  LnkTLI20(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[20],0,(void **)(void *)&LnkLI20,86019,first,ap);va_end(ap);return V1;} /* TAK7 */
static object  LnkTLI19(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[19],0,(void **)(void *)&LnkLI19,86019,first,ap);va_end(ap);return V1;} /* TAK66 */
static object  LnkTLI18(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[18],0,(void **)(void *)&LnkLI18,86019,first,ap);va_end(ap);return V1;} /* TAK6 */
static object  LnkTLI17(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[17],0,(void **)(void *)&LnkLI17,86019,first,ap);va_end(ap);return V1;} /* TAK55 */
static object  LnkTLI16(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[16],0,(void **)(void *)&LnkLI16,86019,first,ap);va_end(ap);return V1;} /* TAK85 */
static object  LnkTLI15(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[15],0,(void **)(void *)&LnkLI15,86019,first,ap);va_end(ap);return V1;} /* TAK5 */
static object  LnkTLI14(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[14],0,(void **)(void *)&LnkLI14,86019,first,ap);va_end(ap);return V1;} /* TAK68 */
static object  LnkTLI13(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[13],0,(void **)(void *)&LnkLI13,86019,first,ap);va_end(ap);return V1;} /* TAK44 */
static object  LnkTLI12(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[12],0,(void **)(void *)&LnkLI12,86019,first,ap);va_end(ap);return V1;} /* TAK48 */
static object  LnkTLI11(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[11],0,(void **)(void *)&LnkLI11,86019,first,ap);va_end(ap);return V1;} /* TAK4 */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[10],0,(void **)(void *)&LnkLI10,86019,first,ap);va_end(ap);return V1;} /* TAK51 */
static object  LnkTLI9(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[9],0,(void **)(void *)&LnkLI9,86019,first,ap);va_end(ap);return V1;} /* TAK33 */
static object  LnkTLI8(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[8],0,(void **)(void *)&LnkLI8,86019,first,ap);va_end(ap);return V1;} /* TAK3 */
static object  LnkTLI7(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[7],0,(void **)(void *)&LnkLI7,86019,first,ap);va_end(ap);return V1;} /* TAK34 */
static object  LnkTLI6(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[6],0,(void **)(void *)&LnkLI6,86019,first,ap);va_end(ap);return V1;} /* TAK22 */
static object  LnkTLI5(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[5],0,(void **)(void *)&LnkLI5,86019,first,ap);va_end(ap);return V1;} /* TAK74 */
static object  LnkTLI4(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[4],0,(void **)(void *)&LnkLI4,86019,first,ap);va_end(ap);return V1;} /* TAK2 */
static object  LnkTLI3(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[3],0,(void **)(void *)&LnkLI3,86019,first,ap);va_end(ap);return V1;} /* TAK17 */
static object  LnkTLI2(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[2],0,(void **)(void *)&LnkLI2,86019,first,ap);va_end(ap);return V1;} /* TAK11 */
static object  LnkTLI1(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[1],0,(void **)(void *)&LnkLI1,86019,first,ap);va_end(ap);return V1;} /* TAK37 */
static object  LnkTLI0(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[0],0,(void **)(void *)&LnkLI0,86019,first,ap);va_end(ap);return V1;} /* TAK1 */
