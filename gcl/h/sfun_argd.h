#define SFUN_RETURN_MASK (0xf00 & ~VFUN_NARG_BIT)
#define SFUN_ARG_TYPE_MASK (~0xfff)

#define SFUN_RETURN_TYPE(s) \
  ((enum ftype)(((s) & SFUN_RETURN_MASK) >> 8))

#define SFUN_START_ARG_TYPES(x) (x=(x>>10))
#define SFUN_NEXT_TYPE(x) ((enum ftype)((x=(x>>2))& 3))

#define MAX_C_ARGS 9
