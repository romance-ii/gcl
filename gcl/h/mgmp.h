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

