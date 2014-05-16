enum type {
  t_cons,
  t_start = 0,
  t_fixnum,
  t_bignum,
  t_ratio,
  t_shortfloat,
  t_longfloat,
  t_complex,
  t_pathname,
  t_string,
  t_bitvector,
  t_vector,
  t_array,
  t_hashtable,
  t_structure,
  t_character,
  t_symbol,
  t_package,
  t_stream,
  t_random,
  t_readtable,
  t_function,
  t_cfdata,
  t_spice,
  t_contiguous,
  t_end=t_contiguous,
  t_relocatable,
  t_other
};

#define Zcdr(a_)                 (*(object *)(a_))/* ((a_)->c.c_cdr) */ /*FIXME*/
#define is_marked(a_)            (is_imm_fixnum(Zcdr(a_)) ? is_marked_imm_fixnum(Zcdr(a_)) : (a_)->d.m)
#define is_marked_or_free(a_)    (is_imm_fixnum(Zcdr(a_)) ? is_marked_imm_fixnum(Zcdr(a_)) : (a_)->md.mf)
#define mark(a_)                 if (is_imm_fixnum(Zcdr(a_))) mark_imm_fixnum(Zcdr(a_)); else (a_)->d.m=1
#define unmark(a_)               if (is_imm_fixnum(Zcdr(a_))) unmark_imm_fixnum(Zcdr(a_)); else (a_)->d.m=0
#define is_free(a_)              (!is_imm_fixnum(a_) && !is_imm_fixnum(Zcdr(a_)) && (a_)->d.f)
#define make_free(a_)            ({(a_)->fw=0;(a_)->d.f=1;})/*set_type_of(a_,t_other)*/
#define make_unfree(a_)          {(a_)->d.f=0;}

#define valid_cdr(a_)            (!(a_)->d.e || is_imm_fixnum(Zcdr(a_)))


#define type_of(x)       ({register object _z=(object)(x);\
                           (is_imm_fixnum(_z) ? t_fixnum : \
			    (valid_cdr(_z) ?  (_z==Cnil ? t_symbol : t_cons)  : _z->d.t));})
  
/*Note preserve sgc flag here                                         VVV*/
#define set_type_of(x,y) ({object _x=(object)(x);enum type _y=(y);_x->d.f=0;if (_y!=t_cons) {_x->d.e=1;_x->d.t=_y;_x->fw|=(fixnum)OBJNULL;}})


#define consp(x)         ({register object _z=(object)(x);\
                           (_z!=Cnil && !is_imm_fixnum(_z) && valid_cdr(_z));})
#define listp(x)         ({register object _z=(object)(x);\
                           (!is_imm_fixnum(_z) && valid_cdr(_z));})
#define atom(x)          ({register object _z=(object)(x);\
                           (_z==Cnil || is_imm_fixnum(_z) || !valid_cdr(_z));})

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
#define functionp(a_)  (type_of(a_)==t_function)
#define compiled_functionp(a_)  functionp(a_)

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
#define eql_is_eq(a_)    (is_imm_fixnum(a_) || ({enum type _tp=type_of(a_); _tp == t_cons || _tp > t_complex;}))
#define equal_is_eq(a_)  (is_imm_fixnum(a_) || type_of(a_)>t_bitvector)
#define equalp_is_eq(a_) (type_of(a_)>t_structure)



#define tp0(x) is_imm_fixnum(x)/*(((ufixnum)x)>=IM_FIX_BASE)*/

#define tp1(x) (x==Cnil)

#define tp2(x) ({object _x=x;is_imm_fixnum(_x) ? 2 : _x->d.e && !is_imm_fixnum(_x->ff.ff);})/*(((ufixnum)_x)>=IM_FIX_BASE)*/

#define tp3(x) ({object _x=x;_x==Cnil ? 2 : (is_imm_fixnum(_x) ? 3 : _x->d.e && !is_imm_fixnum(_x->ff.ff));})

#define tp4(x) ({object _x=x;is_imm_fixnum(_x) ? t_fixnum : _x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->d.t : 0;})

#define tp5(x) ({object _x=x;_x==Cnil ? t_symbol : (is_imm_fixnum(_x) ? t_fixnum : (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->d.t : 0));})


#define tp6(x) ({object _x=x;is_imm_fixnum(_x) ? (t_fixnum<<4)+1 : (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->fstp.tp : 0);})

#define tp7(x) ({object _x=x;_x==Cnil ? (t_symbol<<4)+3 :\
      (is_imm_fixnum(_x) ? (t_fixnum<<4)+1 :\
       (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? _x->fstp.tp : 0));})

#define tp8(x) ({object _x=x;(is_imm_fixnum(_x) ? 0 :  \
			      (_x->d.e && !is_imm_fixnum(_x->ff.ff) ? \
			       (_x->d.t<t_complex ? x->d.t :		\
				(_x->d.t==t_complex&&x->d.tt<2 ? x->d.t :		\
				 (_x->d.t==t_complex ? x->d.t+x->d.tt-1 : \
				  0))) : 0));})/*FIXME*/

