#include "pbits.h"

typedef long long              lfixnum;
typedef unsigned long long    ulfixnum;

typedef long            fixnum;
typedef unsigned long   ufixnum;

#ifndef WORDS_BIGENDIAN

#define FIRSTWORD ufixnum    e:1,m:1,f:1,s:1,tt:4,t:5,st:3,w:LM(16)
#define FSTPWORD  ufixnum emfs:4,            tp:9,    st:3,w:LM(16)
#define MARKWORD  ufixnum    e:1,   mf:2,s:1,tt:4,t:5,x:LM(13)
#define SGCMWORD  ufixnum    e:1,mfs:3,      tt:4,t:5,x:LM(13)
#define TYPEWORD  ufixnum  emf:3,        s:1,tt:4,t:5,x:LM(13)
#define FUNWORD   ufixnum    e:1,m:1,f:1,s:1,tt:4,t:5,fun_minarg:6,fun_maxarg:6,fun_neval:5,fun_vv:1,y:LM(31)

#else

#define FIRSTWORD ufixnum w:LM(16),st:3,t:5,tt:4,s:1,f:1,m:1,e:1
#define FSTPWORD  ufixnum w:LM(16),st:3,tp:9,             emfs:4
#define MARKWORD  ufixnum x:LM(13),     t:5,tt:4,s:1,   mf:2,e:1
#define SGCMWORD  ufixnum x:LM(13),     t:5,tt:4,      mfs:3,e:1
#define TYPEWORD  ufixnum x:LM(13),     t:5,tt:4,s:1,      emf:3
#define FUNWORD   ufixnum y:LM(31),fun_vv:1,fun_neval:5,fun_maxarg:6,fun_minarg:6,t:5,tt:4,s:1,f:1,m:1,e:1

#endif

#if SIZEOF_LONG < 8
#define SPAD object pad
#else
#define SPAD
#endif

typedef union lispunion * object;

typedef struct cons * htent;

typedef object (*ofunc)();
typedef void   (*vfunc)();

typedef object integer;
typedef object keyword;
typedef object direl;
typedef object plist;
typedef object pack;
typedef object real;
typedef object string;
typedef object structure;
typedef object symbol;
typedef float  shortfloat;
typedef double longfloat;
typedef float  complex fcomplex;
typedef double complex dcomplex;
#undef bool
typedef int bool;
typedef unsigned short int ushort;
typedef unsigned int uint;


#if 2 * SIZEOF_INT == SIZEOF_LONG
typedef int             hfixnum;
typedef unsigned int   uhfixnum;
#elif 2 * SIZEOF_SHORT == SIZEOF_LONG
typedef short           hfixnum;
typedef unsigned short uhfixnum;
#else
#error No hfixnum size detected
#endif

/* typedef char character; */
typedef unsigned char uchar;

#if 4 * SIZEOF_SHORT == SIZEOF_LONG
typedef short           qfixnum;
typedef unsigned short uqfixnum;
#elif 4 * SIZEOF_CHAR == SIZEOF_LONG
typedef char            qfixnum;
typedef unsigned char   uqfixnum;
#else
#error No qfixnum size detected
#endif

struct fixnum_struct {

  FIRSTWORD;

  fixnum FIXVAL;  /*  fixnum value  */

};
struct shortfloat_struct {

  FIRSTWORD;

  shortfloat	SFVAL;	/*  shortfloat value  */

};
struct longfloat_struct {

  FIRSTWORD;

  longfloat LFVAL; /*  longfloat value  */
  SPAD;

};
struct bignum {

  FIRSTWORD;

  __mpz_struct big_mpz_t;  /*defined by gmp/mgmp.h*/

};
struct ratio {

  FIRSTWORD;

  integer rat_den; /*  denominator, must be an integer  */
  integer rat_num; /*  numerator,  must be an integer  */
  SPAD;

};
struct ocomplex {

  FIRSTWORD;

  real cmp_real; /*  real part, must be a number  */
  real cmp_imag; /*  imaginary part, must be a number  */
  SPAD;

};
struct character {

  FIRSTWORD;

  uqfixnum          ch_code; /*  code  */
  uqfixnum          pad;     /*  pad  */
  uqfixnum          ch_font; /*  font  */
  uqfixnum          ch_bits; /*  bits  */
  ufixnum           pad1;
  uchar            *ch_self;
  ufixnum           pad5:4;
  ufixnum           ch_fillp:LM4BITS;
  ufixnum           pad2;
  ufixnum           pad3;
  ufixnum           pad4;

};
struct stdesig {

  FIRSTWORD;

  ufixnum           pad;
  ufixnum           pad1;
  uchar             *sd_sdself;
  ufixnum           pad2:4;
  ufixnum           sd_sdfillp:LM4BITS;
  ufixnum           pad3;

};
struct symbol {

  FIRSTWORD;

  fixnum     s_sfdef;        /*  special form definition, coincides with c_car  */
  object     s_dbind;        /*  dynamic binding  */
  char      *s_self;         /*  print name, coincides with st_self  */
  ufixnum    s_pad1:4;       /*  unused  */
  ufixnum    s_fillp:LM4BITS;/*  print name length, coincides with st_fillp  */
  object     s_gfdef;        /*  global function definition, for a macro, its expansion function */
  plist      s_plist;        /*  property list  */
  pack       s_hpack;        /*  home package, Cnil for uninterned symbols  */
  uhfixnum   s_pad2:HM2BITS; /*  unused  */
  uhfixnum   s_stype:2;      /*  symbol type, of enum stype  */
  uhfixnum   s_pad3:HM1BITS; /*  unused  */
  uhfixnum   s_mflag:1;      /*  macro flag  */
  fixnum     s_hash;         /*  cached hash code */

};
struct package {

  FIRSTWORD;

  string          p_name;              /*  package name, a string  */
  plist           p_nicknames;         /*  nicknames, list of strings  */
  plist           p_shadowings;        /*  shadowing symbol list  */
  plist           p_uselist;           /*  use-list of packages  */
  plist           p_usedbylist;        /*  used-by-list of packages  */
  plist          *p_internal;          /*  hashtable for internal symbols  */
  plist          *p_external;          /*  hashtable for external symbols  */
  ufixnum         p_internal_size;     /* size of internal hash table*/
  ufixnum         p_external_size;     /* size of external hash table */
  ufixnum         p_internal_fp;       /* [rough] number of symbols */
  ufixnum         p_external_fp;       /* [rough]  number of symbols */
  struct package *p_link;              /*  package link  */
  SPAD;

};
struct cons {

  /*   FIRSTWORD; Two word cons, 20050609, CM */

  object c_cdr;  /*  cdr  */
  object c_car;  /*  car  */

};
struct hashtable {           /*  hash table header  */

  FIRSTWORD;

  htent         ht_self;            /*  pointer to the hash table  */
  real          ht_rhsize;          /*  rehash size  */
  real          ht_rhthresh;        /*  rehash threshold  */
  ufixnum       ht_pad1:4;          /*  unused  */
  ufixnum       ht_nent:LM4BITS;    /*  number of entries  */
  ufixnum       ht_pad2:4;          /*  hash table size  */
  ufixnum       ht_size:LM4BITS;    /*  hash table size  */
  uhfixnum      ht_test:2;          /*  key test function, of enum httest  */
  uhfixnum      ht_pad3:HM2BITS;    /*  unused */
  hfixnum       ht_pad4;            /*  unused */
  ufixnum       ht_pad5:4;          /*  unused */
  ufixnum       ht_max_ent:LM4BITS; /*  max entries */

};
#define j(a_,b_) a_##b_
#define J(a_,b_) j(a_,b_)
#define atempl(a_,b_) \
  FIRSTWORD;\
\
  plist    J(b_,displaced);     /*  displaced  */	\
  uhfixnum J(b_,hasfillp:1);    /*  fillp compatability */	\
  uhfixnum J(b_,rank:6);        /*  array rank  */		\
  uhfixnum J(b_,mode:3);        /*  array data mode  */		\
  uhfixnum J(b_,pad:HM10BITS);  /*  pad  */			\
  uhfixnum J(b_,adjustable:1);  /*  adjustable flag  */		\
  uhfixnum J(b_,elttype:4);     /*  element type  */		\
  uhfixnum J(b_,eltsize:4);     /*  element size  */		\
  uhfixnum J(b_,pad1:HM9BITS);  /*  pad  */			\
  a_      *J(b_,self);          /*  pointer to the array  */	\
  ufixnum *J(b_,dims);          /*  table of dimensions  */	\
  ufixnum  J(b_,pad2:4);        /*  pad  */			\
  ufixnum  J(b_,dim:LM4BITS)    /*  dimension  */		


#define otempl(a_,b_) \
  ufixnum  J(b_,offset:3);      /*  bitvector offset  */	\
  ufixnum  J(b_,pad4:LM3BITS);  /*  not used  */		\
  SPAD



#define vtempl(a_,b_) \
  FIRSTWORD;\
\
  plist    J(b_,displaced);     /*  displaced  */		\
  uhfixnum J(b_,hasfillp:1);    /*  has-fill-pointer flag  */	\
  uhfixnum J(b_,defrank:6);     /*  rank compatibility  */		\
  uhfixnum J(b_,mode:3);        /*  array data mode  */		\
  uhfixnum J(b_,pad:HM10BITS);  /*  pad  */				\
  uhfixnum J(b_,adjustable:1);  /*  adjustable flag  */		\
  uhfixnum J(b_,elttype:4);     /*  element type  */			\
  uhfixnum J(b_,eltsize:4);     /*  element size  */		\
  uhfixnum J(b_,pad1:HM9BITS);  /*  pad  */			\
  a_      *J(b_,self);          /*  pointer to the vector  */	\
  ufixnum  J(b_,pad2:4);        /*  pad  */				\
  ufixnum  J(b_,fillp:LM4BITS); /*  fill pointer  */			\
                                /*  For simple vectors,  */\
                                /*  b_fillp is equal to b_dim.  */\
  ufixnum  J(b_,pad3:4);        /*  pad  */		      \
  ufixnum  J(b_,dim:LM4BITS)    /*  dimension  */


struct array {           /*  array header  */

  atempl(object,a_);
  otempl(object,a_);

};

struct vector {           /*  vector header  */

  vtempl(object,v_);

};

struct string {           /*  string header  */

  vtempl(char,st_);

};

struct ustring {

  vtempl(uchar,ust_);

};

struct bitvector {         /*  bitvector header  */

  vtempl(char,bv_);
  otempl(char,bv_);

};

struct structure {  /*  structure header  */

  FIRSTWORD;

  structure  str_def;  /*  structure definition (a structure)  */
  object    *str_self; /*  structure self  */
  SPAD;

};

struct stream {

  FIRSTWORD;

  void            *sm_fp;          /*  file pointer  */
  object           sm_object0;     /*  some object  */
  object           sm_object1;     /*  some object */
  fixnum           sm_int0;        /*  some int  */
  fixnum           sm_int1;        /*  column for input or output, stream */
  char            *sm_buffer;      /*  ptr to BUFSIZE block of storage */
  uqfixnum         sm_mode:4;      /*  stream mode  */
  uqfixnum         sm_pad:QM4BITS; /*  stream mode  */
  uqfixnum         sm_flags:3;     /*  flags from gcl_sm_flags */
  uqfixnum         sm_pad1:QM3BITS;/*  flags from gcl_sm_flags */
  hfixnum          sm_fd;          /*  stream fd */
     
};
struct random {

  FIRSTWORD;

  __gmp_randstate_struct  rnd_state;

};
struct readtable {       /*  read table  */

  FIRSTWORD;

  struct rtent *rt_self; /*  read table itself  */
  keyword       rt_case;
  SPAD;

};
struct pathname {

  FIRSTWORD;

  direl  pn_host;      /*  host  */
  direl  pn_device;    /*  device  */
  plist  pn_directory; /*  directory  */
  direl  pn_name;      /*  name  */
  direl  pn_type;      /*  type  */
  direl  pn_version;   /*  version  */
  SPAD;

};

struct function {

  FUNWORD;
  
  ofunc   fun_self;  /* executable code */
  object  fun_data;  /* cfddata structure */
  plist   fun_plist; /* sig callees callers src file */
  ufixnum fun_argd;  /* arg/return type checking */
  object *fun_env;

};

struct cfdata {

  FIRSTWORD;

  char   *cfd_start;             /* beginning of contblock for fun */
  ufixnum cfd_pad:4;             /* unused */
  ufixnum cfd_size:LM4BITS;      /* size of contblock */
  ufixnum cfd_pad1:4;            /* unused */
  ufixnum cfd_fillp:LM4BITS;     /* size of self */
  object *cfd_self;              /* body */
  plist   cfd_dlist;

};

struct spice {

  FIRSTWORD;

  fixnum spc_dummy;

};

struct dummy      {FIRSTWORD;};
struct ff         {ufixnum ff;};
struct fstpw      {FSTPWORD;};
union  fstp       {ufixnum ff;struct fstpw t;};
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
 struct ocomplex          cmp; /*  complex number  */
 struct character          ch; /*  character  */
 struct symbol              s; /*  symbol  */
 struct package             p; /*  package  */
 struct cons                c; /*  cons  */
 struct hashtable          ht; /*  hash table  */
 struct string             st; /*  string  */
 struct stdesig            sd; /*  array character symbol -- phony for c package ref  */
 struct ustring           ust; /*  unsigned char string  */
 struct bitvector          bv; /*  bit-vector  */
 struct vector              v; /*  vector  */
 struct array               a; /*  array  */
 struct structure         str; /*  structure  */
 struct stream             sm; /*  stream  */
 struct random            rnd; /*  random-states  */
 struct readtable          rt; /*  read table  */
 struct pathname           pn; /*  path name  */
 struct function          fun; /*  function */
 struct cfdata            cfd; /*  compiled fun data */
 struct spice             spc; /*  spice  */

 struct dummy               d; /*  dummy  */
 struct fstpw            fstp; /*  fast type  */
 struct ff                 ff; /*  fast type  */
 struct mark               md; /*  mark dummy  */
 struct sgcm              smd; /*  sgc mark dummy  */
 struct typew              td; /*  type dummy  */
 fixnum                    fw;
 void *                    vw;

};
