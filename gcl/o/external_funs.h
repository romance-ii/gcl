/* for file nfunlink.X */

extern object Icall_proc GPR((object fun_name, int link_desk, object (**link_loc) ( ), ...));;  
extern float Icall_proc_float GPR((object fun_name, int link_desk, object (**link_loc) ( ), ...));;  
extern object IapplyVector GPR((object fun, int nargs, object *base));;  
extern int Iinvoke_c_function_from_value_stack GPR((int f, int fargd));;  

/* for file alloc.X */

extern char *alloc_page GPR((int n));;  
extern void add_page_to_freelist GPR((char *p, struct typemanager *tm));;  
extern object alloc_object GPR((enum type t));;  
extern int grow_linear GPR((int old, int fract, int grow_min, int grow_max));;  
extern object make_cons GPR((object a, object d));;  
extern object on_stack_cons GPR((object x, object y));;  
extern void call_after_gbc_hook GPR((int t));;  
extern object fSallocated GPR((object typ));;  
extern char *alloc_contblock GPR((int n));;  
extern int insert_contblock GPR((char *p, int s));;  
extern int insert_maybe_sgc_contblock GPR((char *p, int s));;  
extern char *alloc_relblock GPR((int n));;  
extern int init_tm GPR((enum type t, char *name, int elsize, int nelts, int sgc));;  
extern int set_maxpage GPR((void));;  
extern int init_alloc GPR((void));;  
extern int cant_get_a_type GPR((void));;  
extern int siLallocate GPR((void));;  
extern int t_from_type GPR((object type));;  
extern object siSallocate_sgc GPR((object type, int min, int max, int free_percent));;  
extern object siSallocate_growth GPR((object type, int min, int max, int percent, int percent_free));;  
extern int siLallocated_pages GPR((void));;  
extern int siLmaxpage GPR((void));;  
extern int siLalloc_contpage GPR((void));;  
extern int siLncbpage GPR((void));;  
extern int siLmaxcbpage GPR((void));;  
extern int siLalloc_relpage GPR((void));;  
extern int siLnrbpage GPR((void));;  
extern int siLget_hole_size GPR((void));;  
extern int siLset_hole_size GPR((void));;  
extern int init_alloc_function GPR((void));;  
extern char *malloc GPR((int size));;  
extern void free GPR((void *ptr));;  
extern char *realloc GPR((char *ptr, int size));;  
extern char *calloc GPR((int nelem, int elsize));;  
extern int cfree GPR((char *ptr));;  
extern char *memalign GPR((int align, int size));;  
extern char *valloc GPR((int size));;  

/* for file array.X */

extern enum aelttype get_aelttype GPR((object x));;  
extern enum aelttype array_elttype GPR((object x));;  
extern char *array_address GPR((object x, int inc));;  
extern char *raw_aet_ptr GPR((object x, short int typ));;  
extern int gset GPR((char *p1, char *val, int n, int typ));;  
extern int copy_array_portion GPR((object x, object y, int i1, int i2, int n1));;  
extern int siLcopy_array_portion GPR((void));;  
extern int array_allocself GPR((object x, bool staticp, object dflt));;  
extern object aref GPR((object x, int index));;  
extern object aset GPR((object x, int index, object value));;  
extern object aref1 GPR((object v, int index));;  
extern object aset1 GPR((object v, int index, object val));;  
extern int displace GPR((object from, object to, object offset));;  
extern int undisplace GPR((object from));;  
extern int check_displaced GPR((object dlist, object orig, int newdim));;  
extern int adjust_displaced GPR((object x, int diff));;  
extern int setup_fillp GPR((object x, object fillp));;  
extern int siLmake_pure_array GPR((void));;  
extern int siLmake_vector GPR((void));;  
extern int Laref GPR((void));;  
extern int siLaset GPR((void));;  
extern int Larray_element_type GPR((void));;  
extern int Larray_rank GPR((void));;  
extern int Larray_dimension GPR((void));;  
extern int Larray_total_size GPR((void));;  
extern int Ladjustable_array_p GPR((void));;  
extern int siLdisplaced_array_p GPR((void));;  
extern int Lsvref GPR((void));;  
extern int siLsvset GPR((void));;  
extern int Larray_has_fill_pointer_p GPR((void));;  
extern int Lfill_pointer GPR((void));;  
extern int siLfill_pointer_set GPR((void));;  
extern int siLreplace_array GPR((void));;  
extern int siLaset_by_cursor GPR((void));;  
extern int init_array_function GPR((void));;  

/* for file assignment.X */

extern int setq GPR((object sym, object val));;  
extern int Fsetq GPR((object form));;  
extern int Fpsetq GPR((object arg));;  
extern int Lset GPR((void));;  
extern int siLfset GPR((void));;  
extern int Fmultiple_value_setq GPR((object form));;  
extern int Lmakunbound GPR((void));;  
extern int Lfmakunbound GPR((void));;  
extern int Fsetf GPR((object form));;  
extern int setf GPR((object place, object form));;  
extern int Fpush GPR((object form));;  
extern int Fpop GPR((object form));;  
extern int Fincf GPR((object form));;  
extern int Fdecf GPR((object form));;  
extern object clear_compiler_properties GPR((object sym, object code));;  
extern int siLclear_compiler_properties GPR((void));;  
extern int init_assignment GPR((void));;  

/* for file backq.X */

extern int kwote_cdr GPR((void));;  
extern int kwote_car GPR((void));;  
extern int backq_cdr GPR((object x));;  
extern int backq_car GPR((object x));;  
extern object backq GPR((object x));;  
extern int Lcomma_reader GPR((void));;  
extern int Lbackquote_reader GPR((void));;  
extern int init_backq GPR((void));;  

/* for file bcmp.X */

extern int bcmp GPR((char *s1, char *s2, int n));;  

/* for file bcopy.X */

extern void bcopy GPR((char *s1, char *s2, int n));;  

/* for file bds.X */

extern int bds_unwind GPR((bds_ptr new_bds_top));;  

/* for file big.X */

extern int bcopy_body GPR((GEN x, GEN y));;  
extern object make_integer GPR((GEN u));;  
extern object make_bignum GPR((GEN u));;  
extern int big_zerop GPR((object x));;  
extern int big_compare GPR((object x, object y));;  
extern object big_minus GPR((object x));;  
extern int gcopy_to_big GPR((GEN res, object x));;  
extern int add_int_big GPR((int i, object x));;  
extern int sub_int_big GPR((int i, object x));;  
extern int mul_int_big GPR((int i, object x));;  
extern int div_int_big GPR((int i, object x));;  
extern object big_plus GPR((object x, object y));;  
extern object big_times GPR((object x, object y));;  
extern int big_quotient_remainder GPR((object x0, object y0, object *qp, object *rp));;  
extern double big_to_double GPR((object x));;  
extern object normalize_big_to_object GPR((object x));;  
extern object copy_big GPR((object x));;  
extern object copy_to_big GPR((object x));;  
extern GEN powerii GPR((GEN x, GEN y));;  
extern int replace_copy1 GPR((GEN x, GEN y));;  
extern GEN replace_copy2 GPR((GEN x, GEN y));;  
extern int obj_replace_copy1 GPR((object x, GEN y));;  
extern GEN obj_replace_copy2 GPR((object x, GEN y));;  
extern GEN1 otoi GPR((object x));;  
extern object alloc_bignum_static GPR((int len));;  
extern GEN1 setq_io GPR((GEN x, object *all, object val));;  
extern GEN1 setq_ii GPR((GEN x, object *all, GEN val));;  
extern void isetq_fix GPR((GEN var, int s));;  
extern GEN icopy_bignum GPR((object a, GEN y));;  
extern GEN icopy_fixnum GPR((object a, GEN y));;  

/* for file bind.X */

extern int lambda_bind GPR((object *arg_top));;  
extern int bind_var GPR((object var, object val, object spp));;  
extern int illegal_lambda GPR((void));;  
extern object find_special GPR((object body, struct bind_temp *start, struct bind_temp *end));;  
extern object let_bind GPR((object body, struct bind_temp *start, struct bind_temp *end));;  
extern object letA_bind GPR((object body, struct bind_temp *start, struct bind_temp *end));;  
extern int parse_key GPR((object *base, bool rest, bool allow_other_keys, register int n, int __builtin_va_alist));;  
extern int check_other_key GPR((object l, int n, int __builtin_va_alist));;  
extern int parse_key_new GPR((int n, object *base, struct key *keys, ...));;  
extern int parse_key_rest GPR((object rest, int n, object *base, struct key *keys, ...));;  
extern int set_key_struct GPR((struct key *ks, object data));;  
extern int init_bind GPR((void));;  

/* for file bitop.X */

extern int get_mark_bit GPR((void));;  
extern int set_mark_bit GPR((void));;  
extern int get_set_mark_bit GPR((void));;  

/* for file block.X */

extern int Fblock GPR((object args));;  
extern int Freturn_from GPR((object args));;  
extern int Freturn GPR((object args));;  
extern int init_block GPR((void));;  

/* for file bzero.X */

extern int bzero GPR((char *b, int length));;  

/* for file catch.X */

extern int Fcatch GPR((object args));;  
extern int siLerror_set GPR((void));;  
extern int Funwind_protect GPR((object args));;  
extern int Fthrow GPR((object args));;  
extern int init_catch GPR((void));;  

/* for file cfun.X */

extern object make_cfun GPR((int (*self) ( ), object name, object data, char *start, int size));;  
extern object make_sfun GPR((object name, int (*self) ( ), int argd, object data));;  
extern object make_vfun GPR((object name, int (*self) ( ), int argd, object data));;  
extern object make_cclosure_new GPR((int (*self) ( ), object name, object env, object data));;  
extern object make_cclosure GPR((int (*self) ( ), object name, object env, object data, char *start, int size));;  
extern int siLmc GPR((void));;  
extern object MFsfun GPR((object sym, int (*self) ( ), int argd, object data));;  
extern int siLmfsfun GPR((void));;  
extern object MFvfun GPR((object sym, int (*self) ( ), int argd, object data));;  
extern int siLmfvfun GPR((void));;  
extern object MFvfun_key GPR((object sym, int (*self) ( ), int argd, object data, char *keys));;  
extern int siLmfvfun_key GPR((void));;  
extern object MFnew GPR((object sym, int (*self) ( ), object data));;  
extern int siLmf GPR((void));;  
extern object MF GPR((object sym, int (*self) ( ), char *start, int size, object data));;  
extern object MM GPR((object sym, int (*self) ( ), char *start, int size, object data));;  
extern int siLmm GPR((void));;  
extern object make_function GPR((char *s, int (*f) ( )));;  
extern object make_si_sfun GPR((char *s, int (*f) ( ), int argd));;  
extern object make_si_vfun1 GPR((char *s, int (*f) ( ), int argd));;  
extern object make_si_function GPR((char *s, int (*f) ( )));;  
extern object make_special_form GPR((char *s, int (*f) ( )));;  
extern int siLcompiled_function_name GPR((void));;  
extern int turbo_closure GPR((object fun));;  
extern int siLturbo_closure GPR((void));;  
extern int init_cfun GPR((void));;  

/* for file character.X */

extern int Lstandard_char_p GPR((void));;  
extern int Lgraphic_char_p GPR((void));;  
extern int Lstring_char_p GPR((void));;  
extern int Lalpha_char_p GPR((void));;  
extern int Lupper_case_p GPR((void));;  
extern int Llower_case_p GPR((void));;  
extern int Lboth_case_p GPR((void));;  
extern int digitp GPR((int i, int r));;  
extern int Ldigit_char_p GPR((void));;  
extern int Lalphanumericp GPR((void));;  
extern bool char_eq GPR((object x, object y));;  
extern int Lchar_eq GPR((void));;  
extern int Lchar_neq GPR((void));;  
extern int char_cmp GPR((object x, object y));;  
extern int Lchar_cmp GPR((int s, int t));;  
extern int Lchar_l GPR((void));;  
extern int Lchar_g GPR((void));;  
extern int Lchar_le GPR((void));;  
extern int Lchar_ge GPR((void));;  
extern bool char_equal GPR((object x, object y));;  
extern int Lchar_equal GPR((void));;  
extern int Lchar_not_equal GPR((void));;  
extern int char_compare GPR((object x, object y));;  
extern int Lchar_compare GPR((int s, int t));;  
extern int Lchar_lessp GPR((void));;  
extern int Lchar_greaterp GPR((void));;  
extern int Lchar_not_greaterp GPR((void));;  
extern int Lchar_not_lessp GPR((void));;  
extern object coerce_to_character GPR((object x));;  
extern int Lcharacter GPR((void));;  
extern int Lchar_code GPR((void));;  
extern int Lchar_bits GPR((void));;  
extern int Lchar_font GPR((void));;  
extern int Lcode_char GPR((void));;  
extern int Lmake_char GPR((void));;  
extern int Lchar_upcase GPR((void));;  
extern int Lchar_downcase GPR((void));;  
extern int digit_weight GPR((int w, int r));;  
extern int Ldigit_char GPR((void));;  
extern int Lchar_int GPR((void));;  
extern int Lint_char GPR((void));;  
extern int Lchar_name GPR((void));;  
extern int Lname_char GPR((void));;  
extern int Lchar_bit GPR((void));;  
extern int Lset_char_bit GPR((void));;  
extern int init_character GPR((void));;  
extern int init_character_function GPR((void));;  

/* for file cmpaux.X */

extern int siLspecialp GPR((void));;  
extern void siLdefvar1 GPR((void));;  
extern void siLdebug GPR((void));;  
extern void siLsetvv GPR((void));;  
extern int init_cmpaux GPR((void));;  
extern int ifloor GPR((int x, int y));;  
extern int imod GPR((int x, int y));;  
extern int set_VV_data GPR((object *VV, int n, object data, char *start, int size));;  
extern int set_VV GPR((object *VV, int n, object data));;  
extern char object_to_char GPR((object x));;  
extern int object_to_int GPR((object x));;  
extern float object_to_float GPR((object x));;  
extern double object_to_double GPR((object x));;  
extern char *object_to_string GPR((object x));;  
extern int call_init GPR((int init_address, object memory, object fasl_vec));;  
extern int do_init GPR((object *statVV));;  
extern void init_or_load1 GPR((int (*fn) ( ), char *file));;  

/* for file conditional.X */

extern int Fif GPR((object form));;  
extern int Fcond GPR((object args));;  
extern int Fcase GPR((object arg));;  
extern int Fwhen GPR((object form));;  
extern int Funless GPR((object form));;  
extern int init_conditional GPR((void));;  

/* for file earith.X */

extern int init_cmac GPR((void));;  
extern object signed_bignum2 GPR((int hi, int lo));;  
extern object fplus GPR((int a, int b));;  
extern object fminus GPR((int a, int b));;  
extern int dblrem GPR((int a, int b, int mod));;  
extern object cmod GPR((object x));;  
extern object ctimes GPR((object a, object b));;  
extern object cdifference GPR((object a, object b));;  
extern object cplus GPR((object a, object b));;  
extern void siLcmod GPR((void));;  
extern void siLcplus GPR((void));;  
extern void siLctimes GPR((void));;  
extern void siLcdifference GPR((void));;  
extern object memq GPR((register object a, register object b));;  

/* for file error.X */

extern int terminal_interrupt GPR((int correctable));;  
extern object ihs_function_name GPR((object x));;  
extern object ihs_top_function_name GPR((void));;  
extern int call_error_handler GPR((void));;  
extern int FEerror GPR((char *s, int num, object arg1, object arg2, object arg3, object arg4));;  
extern int FEwrong_type_argument GPR((object type, object value));;  
extern int FEtoo_few_arguments GPR((object *base, object *top));;  
extern int FEtoo_few_argumentsF GPR((object args));;  
extern int FEtoo_many_arguments GPR((object *base, object *top));;  
extern int FEtoo_many_argumentsF GPR((object args));;  
extern int FEinvalid_macro_call GPR((void));;  
extern int FEunexpected_keyword GPR((object key));;  
extern int FEinvalid_form GPR((char *s, object form));;  
extern int FEunbound_variable GPR((object sym));;  
extern int FEinvalid_variable GPR((char *s, object obj));;  
extern int FEundefined_function GPR((object fname));;  
extern int FEinvalid_function GPR((object obj));;  
extern int CEerror GPR((char *err_str, char *cont_str, int num, object arg1, object arg2, object arg3, object arg4));;  
extern ihs_ptr get_ihs_ptr GPR((object x));;  
extern int siLihs_top GPR((void));;  
extern int siLihs_fun GPR((void));;  
extern int siLihs_vs GPR((void));;  
extern frame_ptr get_frame_ptr GPR((object x));;  
extern int siLfrs_top GPR((void));;  
extern int siLfrs_vs GPR((void));;  
extern int siLfrs_bds GPR((void));;  
extern int siLfrs_class GPR((void));;  
extern int siLfrs_tag GPR((void));;  
extern int siLfrs_ihs GPR((void));;  
extern bds_ptr get_bds_ptr GPR((object x));;  
extern int siLbds_top GPR((void));;  
extern int siLbds_var GPR((void));;  
extern int siLbds_val GPR((void));;  
extern object *get_vs_ptr GPR((object x));;  
extern int siLvs_top GPR((void));;  
extern int siLvs GPR((void));;  
extern int siLsch_frs_base GPR((void));;  
extern int siLinternal_super_go GPR((void));;  
extern int siLuniversal_error_handler GPR((void));;  
extern int check_arg_failed GPR((int n));;  
extern int too_few_arguments GPR((void));;  
extern int too_many_arguments GPR((void));;  
extern int ck_larg_at_least GPR((int n, object x));;  
extern int ck_larg_exactly GPR((int n, object x));;  
extern int invalid_macro_call GPR((void));;  
extern int keyword_value_mismatch GPR((void));;  
extern int not_a_keyword GPR((object x));;  
extern int unexpected_keyword GPR((object key));;  
extern object wrong_type_argument GPR((object typ, object obj));;  
extern int illegal_declare GPR((int form));;  
extern int not_a_symbol GPR((int obj));;  
extern int not_a_variable GPR((int obj));;  
extern int illegal_index GPR((object x, object i));;  
extern int Lerror GPR((void));;  
extern object LVerror GPR((int __builtin_va_alist));;  
extern int Lcerror GPR((void));;  
extern int vfun_wrong_number_of_args GPR((object x));;  
extern int init_error GPR((void));;  

/* for file eval.X */

extern int quick_call_sfun GPR((object fun));;  
extern int call_sfun_no_check GPR((object fun));;  
extern int call_vfun GPR((object fun));;  
extern int funcall GPR((object fun));;  
extern int funcall_no_event GPR((object fun));;  
extern int lispcall GPR((object *funp, int narg));;  
extern int lispcall_no_event GPR((object *funp, int narg));;  
extern int symlispcall GPR((object sym, object *base, int narg));;  
extern int symlispcall_no_event GPR((object sym, object *base, int narg));;  
extern object simple_lispcall GPR((object *funp, int narg));;  
extern object simple_lispcall_no_event GPR((object *funp, int narg));;  
extern object simple_symlispcall GPR((object sym, object *base, int narg));;  
extern object simple_symlispcall_no_event GPR((object sym, object *base, int narg));;  
extern int super_funcall GPR((object fun));;  
extern int super_funcall_no_event GPR((object fun));;  
extern int eval GPR((object form));;  
extern int call_applyhook GPR((object fun));;  
extern int Lfuncall GPR((void));;  
extern int Lapply GPR((void));;  
extern int Leval GPR((void));;  
extern int Levalhook GPR((void));;  
extern int Lapplyhook GPR((void));;  
extern int Lconstantp GPR((void));;  
extern object ieval GPR((object x));;  
extern object ifuncall1 GPR((object fun, object arg1));;  
extern object ifuncall2 GPR((object fun, object arg1, object arg2));;  
extern object ifuncall3 GPR((object fun, object arg1, object arg2, object arg3));;  
extern int funcall_with_catcher GPR((object fname, object fun));;  
extern object fcalln_cclosure GPR((...));;  
extern object fcalln_general GPR((...));;  
extern object fcalln_vfun GPR((va_list vl));;  
extern object fcalln GPR((int __builtin_va_alist));;  
extern object funcall_cfun GPR((funcvoid fn, int n, int __builtin_va_alist));;  
extern int init_eval GPR((void));;  
