#ifndef GMP_EXTERN
#define GMP_EXTERN extern
#endif
#ifndef GMP_EXTERN_INLINE
#define GMP_EXTERN_INLINE GMP_EXTERN __inline__
#endif

GMP_EXTERN jmp_buf gmp_jmp;
GMP_EXTERN int jmp_gmp;

#define join(a_,b_) a_ ## b_
#define Join(a_,b_) join(a_,b_)

#define P1(bt_) bt_ b
#define P2(bt_,ct_) bt_ b,ct_ c
#define P3(bt_,ct_,dt_) bt_ b,ct_ c,dt_ d
#define P4(bt_,ct_,dt_,et_) bt_ b,ct_ c,dt_ d,et_ e

#define A1() b
#define A2() b,c
#define A3() b,c,d
#define A4() b,c,d,e

/*           if (jmp_gmp++>1) \
              FEerror("gmp jmp loop in" #a_, 0);\
*/

#define MEM_GMP_VOID_CALL(n_,a_,b_...) \
   GMP_EXTERN_INLINE void Join(m,a_)(Join(P,n_)(b_)) { \
           int j;\
	   jmp_gmp=0;\
           if ((j=setjmp(gmp_jmp)))\
              GBC(j);\
           jmp_gmp++;\
           a_(Join(A,n_)());\
           jmp_gmp=0;\
   }

#define MEM_GMP_CALL(n_,rt_,a_,b_...) \
   GMP_EXTERN_INLINE rt_ Join(m,a_)(Join(P,n_)(b_)) { \
           int j;\
           rt_ tmp;\
	   jmp_gmp=0;\
           if ((j=setjmp(gmp_jmp)))\
              GBC(j);\
           jmp_gmp++;\
           tmp=a_(Join(A,n_)());\
           jmp_gmp=0;\
           return tmp;\
   }

MEM_GMP_VOID_CALL(3,mpz_add,mpz_t,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(3,mpz_add_ui,mpz_t,mpz_t,unsigned long int)
MEM_GMP_VOID_CALL(3,mpz_sub,mpz_t,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(3,mpz_sub_ui,mpz_t,mpz_t,unsigned long int)
MEM_GMP_VOID_CALL(3,mpz_mul,mpz_t,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(3,mpz_mul_si,mpz_t,mpz_t,long int)
MEM_GMP_VOID_CALL(3,mpz_mul_2exp,mpz_t,mpz_t,unsigned long int)
MEM_GMP_VOID_CALL(2,mpz_neg,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(4,mpz_tdiv_qr,mpz_t,mpz_t,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(3,mpz_fdiv_q_2exp,mpz_t,mpz_t,unsigned long int)
MEM_GMP_CALL(2,int,mpz_cmp,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(3,mpz_and,mpz_t,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(3,mpz_xor,mpz_t,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(3,mpz_ior,mpz_t,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(2,mpz_com,mpz_t,mpz_t)
MEM_GMP_CALL(2,int,mpz_tstbit,mpz_t,unsigned long int)
MEM_GMP_VOID_CALL(1,mpz_init,mpz_t)
MEM_GMP_VOID_CALL(2,mpz_set,mpz_t,mpz_t)
MEM_GMP_VOID_CALL(2,mpz_set_ui,mpz_t,unsigned long int)
MEM_GMP_VOID_CALL(2,mpz_set_si,mpz_t,long int)
MEM_GMP_CALL(1,double,mpz_get_d,mpz_t)
MEM_GMP_CALL(1,long int,mpz_get_si,mpz_t)
MEM_GMP_CALL(3,char *,mpz_get_str,char *,int,mpz_t)
MEM_GMP_CALL(1,int,mpz_fits_sint_p,mpz_t)
MEM_GMP_CALL(1,unsigned long int,mpz_popcount,mpz_t)
/*MEM_GMP_CALL(2,void *,mpz_realloc,mpz_t,mp_size_t)*/
MEM_GMP_CALL(1,size_t,mpz_size,mpz_t)
MEM_GMP_CALL(2,size_t,mpz_sizeinbase,mpz_t,int)

     /* FIXME: find a way to have this follow the convention in gmp.h*/

#define __gmpz_add m__gmpz_add
#define __gmpz_add_ui m__gmpz_add_ui
#define __gmpz_sub m__gmpz_sub
#define __gmpz_sub_ui m__gmpz_sub_ui
#define __gmpz_mul m__gmpz_mul
#define __gmpz_mul_si m__gmpz_mul_si
#define __gmpz_mul_2exp m__gmpz_mul_2exp
#define __gmpz_neg m__gmpz_neg
#define __gmpz_tdiv_qr m__gmpz_tdiv_qr
#define __gmpz_fdiv_q_2exp m__gmpz_fdiv_q_2exp
#define __gmpz_cmp m__gmpz_cmp
#define __gmpz_and m__gmpz_and
#define __gmpz_xor m__gmpz_xor
#define __gmpz_ior m__gmpz_ior
#define __gmpz_com m__gmpz_com
#define __gmpz_tstbit m__gmpz_tstbit
#define __gmpz_init m__gmpz_init
#define __gmpz_set m__gmpz_set
#define __gmpz_set_ui m__gmpz_set_ui
#define __gmpz_set_si m__gmpz_set_si
#define __gmpz_get_d m__gmpz_get_d
#define __gmpz_get_si m__gmpz_get_si
#define __gmpz_get_str m__gmpz_get_str
#define __gmpz_fits_sint_p m__gmpz_fits_sint_p
#define __gmpz_popcount m__gmpz_popcount
/*#define __gmpz_realloc m__gmpz_realloc*/
#define __gmpz_size m__gmpz_size
#define __gmpz_sizeinbase m__gmpz_sizeinbase
