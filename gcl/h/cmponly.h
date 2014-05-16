#define EQ(x,y) ((x)==(y))

#define	CMPmake_fixnum(x) make_fixnum(x)

object make_integer();
  /* copy x to y, increasing space by factor of 2  */

/* typedef MP_INT * GEN; */

int obj_to_mpz(object,MP_INT *);
int obj_to_mpz1(object,MP_INT *,void *);
int mpz_to_mpz(MP_INT *,MP_INT *);
int mpz_to_mpz1(MP_INT *,MP_INT *,void *);
void isetq_fix(MP_INT *,int);
MP_INT * otoi(object x);


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

#define	cclosure_call	funcall

object fcalln1();
#define fcalln ((object (*)())fcalln1)

#include <ctype.h>
