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

#ifndef WORDS_BIGENDIAN

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
#define ROUNDUP(x_,y_) (((unsigned long)(x_)+(y_ -1)) & ~(y_ -1))
#define ROUNDDN(x_,y_) (((unsigned long)(x_)) & ~(y_ -1))

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

#define valid_cdr(a_)              (!(a_)->d.e || is_imm_fixnum(Zcdr(a_)))

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

/* EXTER char CnilCt[3*sizeof(struct symbol)] OBJ_ALIGN; */

/* #define Cnil   ((object)(CnilCt)) */
/* #define Ct     ((object)((char *)Cnil+sizeof(struct symbol))) */
/* #define Dotnil ((object)((char *)Ct+sizeof(struct symbol))) */

EXTER struct symbol Cnil_body OBJ_ALIGN;
EXTER struct symbol Ct_body OBJ_ALIGN;

#define Cnil ((object)&Cnil_body)
#define Ct   ((object)&Ct_body)
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
  htt_equal,    /*  equal  */
  htt_equalp    /*  equalp  */
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
  fixnum        ht_max_ent;

};

typedef struct {
  void *dflt;
  object *namep;
  unsigned char size;
} aet_type_struct;


#if SIZEOF_LONG == 4
#define HFILL_BITS 15
#elif SIZEOF_LONG == 8
#define HFILL_BITS 31
#else
#error Cannot calculate HFILL_BITS
#endif

struct array {           /*  array header  */

  FIRSTWORD;

  object  a_displaced;   /*  displaced  */
  hfixnum a_hasfillp:1;  /*  fillp compatability */
  hfixnum a_rank:HFILL_BITS;        /*  array rank  */
  hfixnum a_elttype;     /*  element type  */
  object *a_self;        /*  pointer to the array  */
  fixnum *a_dims;        /*  table of dimensions  */
  fixnum  a_dim;         /*  dimension  */
  hfixnum a_adjustable;  /*  adjustable flag  */
  hfixnum a_offset;      /*  bitvector offset  */
  SPAD;

};



struct vector {           /*  vector header  */

  FIRSTWORD;

  object  v_displaced;    /*  displaced  */
  hfixnum v_hasfillp:1;   /*  has-fill-pointer flag  */
  hfixnum v_unused:HFILL_BITS;   /*  rank compatibility  */
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
  hfixnum st_hasfillp:1;     /*  has-fill-pointer flag  */
  hfixnum st_unused:HFILL_BITS;   /*  rank compatibility  */
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
  hfixnum        ust_hasfillp:1;
  hfixnum        ust_unused:HFILL_BITS;   /*  rank compatibility  */
  hfixnum        ust_adjustable;  
  unsigned char *ust_self;
  fixnum         ust_fillp;
  fixnum         ust_dim;
  

};

#define USHORT_GCL(x,i)  (((unsigned short *)(x)->ust.ust_self)[i])
#define  SHORT_GCL(x,i)  ((( short *)(x)->ust.ust_self)[i])

#define UINT_GCL(x,i)  (((unsigned int *)(x)->ust.ust_self)[i])
#define  INT_GCL(x,i)  ((( int *)(x)->ust.ust_self)[i])

#define BV_OFFSET(x) ((type_of(x)==t_bitvector ? x->bv.bv_offset : \
                       type_of(x)== t_array ? x->a.a_offset : (gcl_abort(),0)))

#define SET_BV_OFFSET(x,val) ((type_of(x)==t_bitvector ? x->bv.bv_offset = val : \
                               type_of(x)== t_array ? x->a.a_offset=val : (gcl_abort(),0)))

struct bitvector {         /*  bitvector header  */

  FIRSTWORD;

  object   bv_displaced;   /*  displaced  */
  hfixnum  bv_hasfillp:1;  /*  has-fill-pointer flag  */
  hfixnum  bv_unused:HFILL_BITS;   /*  rank compatibility  */
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
  fixnum   *fixa_dims;       /*  table of dimensions  */
  fixnum    fixa_dim;        /*  dimension  */
  hfixnum   fixa_adjustable; /*  adjustable flag  */
  hfixnum   fixa_offset;     /*  not used  */
  SPAD;
  
};

struct sfarray {                  /*  short-float array header  */

  FIRSTWORD;

  object       sfa_displaced;     /*  displaced  */
  hfixnum      sfa_rank;          /*  array rank  */
  hfixnum      sfa_elttype;       /*  element type  */
  shortfloat  *sfa_self;          /*  pointer to the array  */
  fixnum      *sfa_dims;          /*  table of dimensions  */
  fixnum       sfa_dim;           /*  dimension  */
  hfixnum      sfa_adjustable;    /*  adjustable flag  */
  hfixnum      sfa_offset;        /*  not used  */
  SPAD;



};

struct lfarray {             /*  plong-float array header  */

  FIRSTWORD;

  object      lfa_displaced; /*  displaced  */
  hfixnum     lfa_rank;      /*  array rank  */
  hfixnum     lfa_elttype;   /*  element type  */
  longfloat  *lfa_self;      /*  pointer to the array  */
  fixnum     *lfa_dims;      /*  table of dimensions  */
  fixnum      lfa_dim;       /*  dimension  */
  hfixnum     lfa_adjustable;/*  adjustable flag  */
  hfixnum     lfa_offset;    /*  not used  */
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
#define SET_STREAM_FLAG(strm,name,val) {if (val) (strm)->sm.sm_flags |= (1<<(name)); else (strm)->sm.sm_flags &= ~(1<<(name));}

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

enum chatrait {       /*  character attribute  */
 trait_alpha,         /*  alphabetic  */
 trait_digit,         /*  digits      */
 trait_alphadigit,    /*  alpha/digit */
 trait_package,       /*  package mrk */
 trait_plus,          /*  plus sign   */
 trait_minus,         /*  minus sign  */
 trait_ratio,         /*  ratio mrk   */
 trait_exp,           /*  expon mrk   */
 trait_invalid        /*  unreadable  */
};

struct rtent {               /*  read table entry  */
 enum chattrib rte_chattrib; /*  character attribute  */
 enum chatrait rte_chatrait; /*  constituent trait */
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
  object rt_case;
  SPAD;

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
  fixnum   sfn_nval;

};

struct ifun {

  FIRSTWORD; 

  object   ifn_self;       /* list def */

};

#define CMVFUNP(x_) ({enum type _t=type_of(x_);((_t==t_sfun || _t==t_vfun || _t==t_gfun) && x_->sfn.sfn_argd&MVRET_BIT);})

#if SIZEOF_LONG == 4
#define VFILL_BITS 8
#elif SIZEOF_LONG == 8
#define VFILL_BITS 40
#else
#error Cannot calculate VFILL_BITS
#endif

struct vfun {

  FIRSTWORD; 

  object           vfn_name;       /* name */
  object         (*vfn_self)();    /* C start address of code */
  object           vfn_data;       /* To object holding VV data */
#ifndef WORDS_BIGENDIAN
  fixnum           vfn_minargs:8;  /* Min args and where varargs start */
  fixnum           vfn_mv     :8;  /* mv bits */
  fixnum           vfn_maxargs:8;  /* Max number of args */
  fixnum           vfn_unused :VFILL_BITS; 
#else
  fixnum           vfn_unused :VFILL_BITS; 
  fixnum           vfn_maxargs:8;  /* Max number of args */
  fixnum           vfn_mv     :8;  /* mv bits */
  fixnum           vfn_minargs:8;  /* Min args and where varargs start */
#endif
  fixnum           vfn_nval;

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
 struct ifun              ifn; /*  interpreted function */
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
#define type_of(x)       ({register object _z=(object)(x);\
                           _z==Cnil ? t_symbol : \
                           (is_imm_fixnum(_z) ? t_fixnum : \
                           (valid_cdr(_z) ?  t_cons  : _z->d.t));})
#define set_type_of(x,y) ({object _x=(object)(x);enum type _y=(y);*(fixnum *)(_x)&=TYPE_BITS;\
                           if (_y!=t_cons) {_x->d.e=1;_x->d.t=_y;}})

/*

C predicates

*/


#define consp(x)         ({register object _z=(object)(x);\
                           (_z!=Cnil && !is_imm_fixnum(_z) && valid_cdr(_z));})
#define listp(x)         ({register object _z=(object)(x);\
                           (!is_imm_fixnum(_z) && valid_cdr(_z));})
#define atom(x)          ({register object _z=(object)(x);\
                           (_z==Cnil || is_imm_fixnum(_z) || !valid_cdr(_z));})

#define join(a_,b_) a_ ## b_
#define Join(a_,b_) join(a_,b_)


#define SPP(a_,b_) (type_of(a_)==Join(t_,b_))
#define streamp(a_)    SPP(a_,stream)
#define packagep(a_)   SPP(a_,package)
#define hashtablep(a_) SPP(a_,hashtable)
#define randomp(a_)    SPP(a_,random)
#define characterp(a_) SPP(a_,character)
#define symbolp(a_)    SPP(a_,symbol)
#define stringp(a_)    SPP(a_,string)
#define fixnump(a_)    SPP(a_,fixnum)
#define readtablep(a_) SPP(a_,readtable)

extern int big_sign(object);
#define integerp(a_) ({enum type _tp=type_of(a_); _tp >= t_fixnum     && _tp <= t_bignum;})
#define non_negative_integerp(a_) ({enum type _tp=type_of(a_); (_tp == t_fixnum && fix(a_)>=0) || (_tp==t_bignum && big_sign(a_)>=0);})
#define rationalp(a_)({enum type _tp=type_of(a_); _tp >= t_fixnum     && _tp <= t_ratio;})
#define floatp(a_)   ({enum type _tp=type_of(a_); _tp == t_shortfloat || _tp == t_longfloat;})
#define realp(a_)    ({enum type _tp=type_of(a_); _tp >= t_fixnum     && _tp < t_complex;})
#define numberp(a_)  ({enum type _tp=type_of(a_); _tp >= t_fixnum     && _tp <= t_complex;})
#define arrayp(a_)   ({enum type _tp=type_of(a_); _tp >= t_string     && _tp <= t_array;})
#define vectorp(a_)  ({enum type _tp=type_of(a_); _tp >= t_string     && _tp < t_array;})

#define string_symbolp(a_)                 ({enum type _tp=type_of(a_); _tp == t_string || _tp == t_symbol;})
#define pathname_string_symbolp(a_)        ({enum type _tp=type_of(a_); _tp==t_pathname || _tp == t_string\
                                                                     || _tp == t_symbol;})
#define pathname_string_symbol_streamp(a_) ({enum type _tp=type_of(a_); _tp==t_pathname || _tp == t_string\
                                                                     || _tp == t_symbol || _tp==t_stream;})
#define eql_is_eq(a_)    (is_imm_fixnum(a_) || ({enum type _tp=type_of(a_); _tp == t_cons || _tp > t_character;}))
#define equal_is_eq(a_)  (is_imm_fixnum(a_) || type_of(a_)>t_bitvector)
#define equalp_is_eq(a_) (type_of(a_)>t_structure)



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
EXTER struct typemanager tm_table[ (int)t_other ];

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

#if !defined(WORDS_BIGENDIAN)
#define HIND 1  /* (int) of double where the exponent and most signif is */
#define LIND 0  /* low part of a double */
#else /* big endian */
#define HIND 0
#define LIND 1
#endif
/* #ifndef VOL */
#define VOL volatile
/* #endif */


#define isUpper(xxx) (((xxx)&0200) == 0 && isupper((int)xxx))
#define isLower(xxx) (((xxx)&0200) == 0 && islower((int)xxx))
#define isDigit(xxx) (((xxx)&0200) == 0 && isdigit((int)xxx))
enum ftype {f_object,f_fixnum,f_integer};
EXTER char *alloca_val;

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
#define RETURN3(x,y,z) do{fcall.values[2]=z;fcall.values[1]=y;fcall.nvalues=3;return (x) ;} while(0)
#define RETURN2(x,y) do{fcall.values[1]=y;fcall.nvalues=2;return (x) ;} while(0)
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
    "Assertion failed: file \"%s\", line %d\n", __FILE__, __LINE__);gcl_abort();}}
# else
# define assert(ex)
# endif

#ifndef FIX_PATH_STRING
#define FIX_PATH_STRING(file) file
#endif

#ifndef CHECK_INTERRUPT
#  define CHECK_INTERRUPT   if (signals_pending) raise_pending_signals(sig_safe)
#endif

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
    do{ if(signals_allowed ==0) /* should not get here*/gcl_abort(); \
   raise_pending_signals(sig_safe)}while(0)

void raise_pending_signals();

EXTER unsigned plong signals_allowed, signals_pending  ;

/* EXTER struct symbol Dotnil_body; */
/* #define Dotnil ((object)&Dotnil_body) */

/* FIXME -- go through all the endp calls and handle dots explicitly
   at some point.  For now, the s_my_dot structs must be explicitly
   initialized to be placed in .data as opposed to .bss and thereby
   initialized by the loader.  20050616 CM*/

/* #define endp(x) ({\ */
/*     static struct cons s_my_dot={Dotnil,Dotnil};\ */
/*     object _x=(x);\ */
/*     bool _b=FALSE;\ */
/*     \ */
/*     if (type_of(_x)==t_cons) {\ */
/*        if (type_of(_x->c.c_cdr)!=t_cons && _x->c.c_cdr!=Cnil)\ */
/*           s_my_dot.c_car=_x->c.c_cdr;\ */
/*        else \ */
/*           s_my_dot.c_car=Dotnil;\ */
/*     } else {\ */
/*        if (_x==s_my_dot.c_car)\ */
/*           x=(object)&s_my_dot;\ */
/*        else {\ */
/*          s_my_dot.c_car=Dotnil;\ */
/*          if (_x==Cnil || _x==Dotnil)\ */
/*              _b=TRUE;\ */
/*          else\ */
/*              FEwrong_type_argument(sLlist, _x);\ */
/*        }\ */
/*     }\ */
/*     _b;\ */
/*     }) */

/* #define endp_prop(a) (type_of(a)==t_cons ? FALSE : ((a)==Cnil ? TRUE : (FEwrong_type_argument(sLlist, (a)),FALSE))) */
    
/* #define proper_list(a) (type_of(a)==t_cons || (a)==Cnil) */
/* #define fix_dot(a) ((a) == Dotnil ? Cnil : (type_of(a)==t_cons && (a)->c.c_cdr==Dotnil ? (a)->c.c_car : (a)))  */

#define endp(a) (consp(a) ? FALSE : ((a)==Cnil ? TRUE : ({TYPE_ERROR((a),sLlist);FALSE;})))


#define eql(a_,b_)    ({register object _a=(a_);register object _b=(b_);_a==_b || eql1(_a,_b);})
#define equal(a_,b_)  ({register object _a=(a_);register object _b=(b_);_a==_b || equal1(_a,_b);})
#define equalp(a_,b_) ({register object _a=(a_);register object _b=(b_);_a==_b || equalp1(_a,_b);})

extern void *stack_alloc_start,*stack_alloc_end;



#define stack_alloc_on(n_) ({void *_v=alloca(n_*PAGESIZE+OBJ_ALIGNMENT-1);\
                             if (_v) {\
                                stack_alloc_start=(void *)ROUNDUP(_v,OBJ_ALIGNMENT);\
                                memset(_v,0,stack_alloc_start-_v);\
                                _v+=n_*PAGESIZE+OBJ_ALIGNMENT-1;\
                                stack_alloc_end=(void *)ROUNDDN(_v,OBJ_ALIGNMENT);\
                                memset(stack_alloc_end,0,_v-stack_alloc_end);\
                             };\
                           })
     
#define stack_alloc_off() ({stack_alloc_start=stack_alloc_end=NULL;})
            
#define maybe_alloc_on_stack(n_,t_) ({void *_v=OBJNULL;\
                                      if (stack_alloc_start) {\
                                         unsigned _n=ROUNDUP(n_,OBJ_ALIGNMENT);\
                                         if (stack_alloc_end-stack_alloc_start>_n) {\
                                           _v=stack_alloc_start;\
                                           stack_alloc_start+=_n;\
                                           if (t_>=0) set_type_of(_v,t_);\
                                         } else stack_alloc_off();\
                                      }\
                                      _v;})


#define stack_pages_left ({fixnum _val;int _w;\
                           _val=cs_limit-&_w;\
                           _val=_val<0 ? -_val : _val;\
                           _val=(_val>>PAGEWIDTH);})

#define myfork() ({int _p[2],_j=0;pid_t _pid;\
                   pipe(_p);\
                   _pid=fork();\
                   if (!_pid) { \
                      object _x=sSAchild_stack_allocA->s.s_dbind;\
                      enum type _tp=type_of(_x);\
                      float _fac= _tp==t_shortfloat ? sf(_x) : (_tp==t_longfloat ? lf(_x) : 0.8);\
                      fixnum _n=_fac*stack_pages_left;\
                      if (_n>0) stack_alloc_on(_n);\
                      close(0);close(1);close(2);\
                      _j=1;\
                   } \
                   close(_p[1-_j]);\
		   make_cons(make_fixnum(_pid),make_fixnum(_p[_j]));})

#define make_fd_stream(fd_,mode_,st_,buf_) ({object _x=alloc_object(t_stream);\
                                            _x->sm.sm_mode=mode_;\
                                            _x->sm.sm_fp=fdopen(fd_,st_);\
                                            _x->sm.sm_buffer=buf_;\
                                            setbuf(_x->sm.sm_fp,_x->sm.sm_buffer);\
                                            _x->sm.sm_object0=sLcharacter;\
                                            _x->sm.sm_object1=Cnil;\
                                            _x->sm.sm_fd=fd_;\
                                            _x;})

#define writable_ptr(a_) (((unsigned long)(a_)>=DBEGIN && (void *)(a_)<(void *)heap_end) || is_imm_fixnum(a_))

#define write_pointer_object(a_,b_) fSwrite_pointer_object(a_,b_)

#define read_pointer_object(a_) fSread_pointer_object(a_)

#define fixnum_float_contagion(a_,b_) \
  ({register object _a=(a_),_x=_a,_b=(b_);\
    register enum type _ta=type_of(_a),_tb=type_of(_b);\
    if (_ta!=_tb)\
       switch(_ta) {\
          case t_shortfloat: if (_tb==t_longfloat) _x=make_longfloat(sf(_a)); break;\
          case t_fixnum: \
              switch(_tb) {\
                  case t_longfloat:  _x=make_longfloat (fix(_a));break;\
                  case t_shortfloat: _x=make_shortfloat(fix(_a));break;\
                  default: break;}\
          break;\
          default: break;}\
   _x;})
                                        

#define make_cons(a_,b_) ({register struct typemanager *_tm=tm_table+(int)t_cons;register object _x;if (!stack_alloc_start && _tm->tm_free) {_x=_tm->tm_free;_tm->tm_free=OBJ_LINK(_x);_tm->tm_nfree--;_tm->tm_nused++;_x->c.c_car=(a_);_x->c.c_cdr=(b_);} else _x=make_cons1(a_,b_);_x;})

EXTER object null_string;
#define FEerror(a_,b_...)   Icall_error_handler(sLerror,null_string,\
                            4,sKformat_control,make_simple_string(a_),sKformat_arguments,list(b_))
#define TYPE_ERROR(a_,b_)   Icall_error_handler(sLtype_error,null_string,\
                            4,sKdatum,(a_),sKexpected_type,(b_))
#define FEinvalid_form(a_,b_) \
  Icall_error_handler(sLprogram_error,null_string,4,\
                      sKformat_control,make_simple_string(a_),\
                      sKformat_arguments,list(1,(b_)))
#define FEinvalid_variable(a_,b_) FEinvalid_form(a_,b_)
#define FEwrong_type_argument(a_,b_) TYPE_ERROR(b_,a_)
