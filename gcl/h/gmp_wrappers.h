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

#define P1(bt_) bt_ _b
#define P2(bt_,ct_) P1(bt_),ct_ _c
#define P3(bt_,ct_,dt_) P2(bt_,ct_),dt_ _d
#define P4(bt_,ct_,dt_,et_) P3(bt_,ct_,dt_),et_ _e

#define A1 _b
#define A2 A1,_c
#define A3 A2,_d
#define A4 A3,_e

/*FIXME : this is slightly excessively conservative as it includes
  comparisons with possible non mpz_t type arguments*/
#define E21 _b==(void *)_c
#define E31 E21||_b==(void *)_d
#define E42 _b==_d||_b==_e||_c==_d||_c==_e
#define E20 0
#define E11 0
#define E10 0
#define E30 0

/*           if (jmp_gmp++>1) \
              FEerror("gmp jmp loop in" #a_, 0);\
*/

#define GMP_TMP _tmp

#define RF_gmp_ulint unsigned long int
#define RD_gmp_ulint RF_gmp_ulint GMP_TMP
#define RA_gmp_ulint GMP_TMP =
#define RR_gmp_ulint GMP_TMP

#define RF_gmp_lint long int
#define RD_gmp_lint RF_gmp_lint GMP_TMP
#define RA_gmp_lint GMP_TMP =
#define RR_gmp_lint GMP_TMP

#define RF_int int
#define RD_int RF_int GMP_TMP
#define RA_int GMP_TMP =
#define RR_int GMP_TMP

#define RF_gmp_char_star char *
#define RD_gmp_char_star RF_gmp_char_star GMP_TMP
#define RA_gmp_char_star GMP_TMP =
#define RR_gmp_char_star GMP_TMP

#define RF_double double
#define RD_double RF_double GMP_TMP
#define RA_double GMP_TMP =
#define RR_double GMP_TMP

#define RF_size_t size_t
#define RD_size_t RF_size_t GMP_TMP
#define RA_size_t GMP_TMP =
#define RR_size_t GMP_TMP

#define RF_void void
#define RD_void
#define RA_void
#define RR_void

/* GMP_WRAPPERS: the gmp library uses heap allocation in places for
   temporary storage.  This greatly complicates relocatable bignum
   allocation in GCL, which is a big winner in terms of performance.
   The old procedure was to patch gmp to use alloca in such instances.
   Aside from possible silently introducing bugs as gmp evolves, such
   a policy also runs the risk of colliding with gmp's stated policy
   of storing pointers in allocated blocks, a possiblity GCL's
   conservative garbage collector is not designed to handle.  Here we
   implement a policy of preventing garbage collection inside of gmp
   calls in any case.  In case of non-inplace calls, where source and
   destination arguments are distinct, we simply longjmp back to the
   front of the call if a gbc would be needed and try the call again,
   as any previous partial write into the destination is of no
   consequence.  Just as is the case with the alloc_contblock and
   alloc_relblock algorithms themselves, on the second pass (as
   indicated by jmp_gmp) new pages are added if there is still not
   enough room in lieu of GBC.  In case of in-place calls, we schedule
   a GBC call after the gmp call completes, relying on the allocator
   to add pages immediately to the type to satisfy the allocation when
   necessary. jmp_gmp counts the pass for non-in-place calls, and is
   set to -1 otherwise.  20040815 CM*/

#define MEM_GMP_CALL(n_,rt_,a_,s_,b_...) \
   GMP_EXTERN_INLINE Join(RF_,rt_) Join(m,a_)(Join(P,n_)(b_)) { \
           Join(RD_,rt_);\
           int j;\
	   jmp_gmp=0;\
           if ((j=setjmp(gmp_jmp)))\
              GBC(j);\
           if (Join(Join(E,n_),s_)) jmp_gmp=-1 ; else jmp_gmp++;\
           Join(RA_,rt_) a_(Join(A,n_));\
           if (jmp_gmp<-1) GBC(-jmp_gmp);\
           jmp_gmp=0;\
           return Join(RR_,rt_);\
   }

MEM_GMP_CALL(3,void,mpz_add,1,mpz_t,mpz_t,mpz_t)
MEM_GMP_CALL(3,void,mpz_add_ui,1,mpz_t,mpz_t,unsigned long int)
MEM_GMP_CALL(3,void,mpz_sub,1,mpz_t,mpz_t,mpz_t)
MEM_GMP_CALL(3,void,mpz_sub_ui,1,mpz_t,mpz_t,unsigned long int)
MEM_GMP_CALL(3,void,mpz_mul,1,mpz_t,mpz_t,mpz_t)
MEM_GMP_CALL(3,void,mpz_mul_si,1,mpz_t,mpz_t,long int)
MEM_GMP_CALL(3,void,mpz_mul_2exp,1,mpz_t,mpz_t,unsigned long int)
MEM_GMP_CALL(2,void,mpz_neg,1,mpz_t,mpz_t)
MEM_GMP_CALL(4,void,mpz_tdiv_qr,2,mpz_t,mpz_t,mpz_t,mpz_t)
MEM_GMP_CALL(3,void,mpz_fdiv_q_2exp,1,mpz_t,mpz_t,unsigned long int)
MEM_GMP_CALL(2,int,mpz_cmp,0,mpz_t,mpz_t)
MEM_GMP_CALL(3,void,mpz_and,1,mpz_t,mpz_t,mpz_t)
MEM_GMP_CALL(3,void,mpz_xor,1,mpz_t,mpz_t,mpz_t)
MEM_GMP_CALL(3,void,mpz_ior,1,mpz_t,mpz_t,mpz_t)
MEM_GMP_CALL(2,void,mpz_com,1,mpz_t,mpz_t)
MEM_GMP_CALL(2,int,mpz_tstbit,0,mpz_t,unsigned long int)
MEM_GMP_CALL(1,void,mpz_init,1,mpz_t)
MEM_GMP_CALL(2,void,mpz_set,1,mpz_t,mpz_t)
MEM_GMP_CALL(2,void,mpz_set_ui,1,mpz_t,unsigned long int)
MEM_GMP_CALL(2,void,mpz_set_si,1,mpz_t,long int)
MEM_GMP_CALL(1,double,mpz_get_d,0,mpz_t)
MEM_GMP_CALL(1,gmp_lint,mpz_get_si,0,mpz_t)
MEM_GMP_CALL(3,gmp_char_star,mpz_get_str,0,char *,int,mpz_t)
MEM_GMP_CALL(1,int,mpz_fits_sint_p,0,mpz_t)
MEM_GMP_CALL(1,gmp_ulint,mpz_popcount,0,mpz_t)
/*MEM_GMP_CALL(2,void *,mpz_realloc,mpz_t,mp_size_t)*/
MEM_GMP_CALL(1,size_t,mpz_size,0,mpz_t)
MEM_GMP_CALL(2,size_t,mpz_sizeinbase,0,mpz_t,int)

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
