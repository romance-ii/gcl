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


enum signals_allowed_values {
  sig_none,
  sig_normal,
  sig_try_to_delay,
  sig_safe,
  sig_at_read,
  sig_use_signals_allowed_value

};

  
enum aelttype {   /*  array element type  */
 aet_ch,          /*  character  */
 aet_bit,         /*  bit  */
 aet_nnchar,      /*  non-neg char */
 aet_uchar,       /*  unsigned char */
 aet_char,        /*  signed char */
 aet_nnshort,     /*  non-neg short   */
 aet_ushort,      /*  unsigned short   */
 aet_short,       /*  signed short */
 aet_sf,          /*  short-float  */
#if SIZEOF_LONG != SIZEOF_INT
 aet_nnint,       /*  non-neg int   */
 aet_uint,        /*  unsigned int   */
 aet_int,         /*  signed int */
#endif
 aet_lf,          /*  plong-float  */
 aet_object,      /*  t  */
 aet_nnfix,       /*  non-neg fixnum  */
 aet_fix,         /*  fixnum  */
#if SIZEOF_LONG == SIZEOF_INT
 aet_nnint,       /*  non-neg int   */
 aet_uint,        /*  unsigned int   */
 aet_int,         /*  signed int */
#endif
 aet_last
};

enum aemode {
  aem_signed,
  aem_unsigned,
  aem_float,
  aem_complex,
  aem_character,
  aem_t
};
