#define EQ(x,y) ((x)==(y))

#define	CMPmake_fixnum(x) \
((((FIXtemp=(x))+SMALL_FIXNUM_LIMIT)&(-2*SMALL_FIXNUM_LIMIT))==0?small_fixnum(FIXtemp):make_fixnum(FIXtemp))


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

#else

typedef MP_INT * GEN;

int obj_to_mpz(object,MP_INT *);
int obj_to_mpz1(object,MP_INT *,void *);
int mpz_to_mpz(MP_INT *,MP_INT *);
int mpz_to_mpz1(MP_INT *,MP_INT *,void *);
void isetq_fix(MP_INT *,int);
MP_INT * otoi(object x);

#ifndef HAVE_ALLOCA
#error Need alloca for GMP
#endif

#define IDECL(a,b,c) MP_INT b={1,1,alloca(1*sizeof(mp_limb_t))}; a = &b ; object c
#define SETQ_IO(var,alloc,val) { object _xx = (val); \
                                 int _n; \
                                 if ((_n=obj_to_mpz(_xx,(var)))) {\
                                   obj_to_mpz1(_xx,(var),alloca(_n));}}
#define SETQ_II(var,alloc,val) { MP_INT * _xx = (val); \
                                 int _n; \
                                 if ((_n=mpz_to_mpz(_xx,(var)))) {\
                                   mpz_to_mpz1(_xx,(var),alloca(_n));}}
#define ISETQ_FIX(a,b,c) isetq_fix(a,c)


/*  #define IDECL(a,b,c) MP_INT b; a = (mpz_init(&b),&b) ; object c */
/*  #define SETQ_IO(var,alloc,val) { object _xx = (val); \ */
/*                                   obj_to_mpz(_xx,(var));} */
/*  #define SETQ_II(var,alloc,val) { MP_INT * _xx = (val); \ */
/*                                   mpz_to_mpz(_xx,(var));} */
/*  #define ISETQ_FIX(a,b,c) isetq_fix(a,c) */


#endif /* end no GMP */

#define	cclosure_call	funcall

