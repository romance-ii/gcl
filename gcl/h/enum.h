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
  t_pathname,
  t_string,
  t_bitvector,
  t_vector,
  t_array,
  t_hashtable,
  t_structure,
  t_symbol,
  t_package,
  t_stream,
  t_random,
  t_readtable,
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

#define realp(a_) ({enum type _tp=type_of(a_); _tp >= t_fixnum && _tp < t_complex;})
#define numberp(a_) ({enum type _tp=type_of(a_); _tp >= t_fixnum && _tp <= t_complex;})
#define eql_is_eq(a_) (is_imm_fixnum(a_) || ({enum type _tp=type_of(a_); _tp == t_cons && _tp > t_character;}))
#define equal_is_eq(a_) (is_imm_fixnum(a_) || type_of(a_)>t_bitvector)
#define equalp_is_eq(a_) (type_of(a_)>t_structure)

enum signals_allowed_values {
  sig_none,
  sig_normal,
  sig_try_to_delay,
  sig_safe,
  sig_at_read,
  sig_use_signals_allowed_value

};

  
