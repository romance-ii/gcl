/* alloc.c:89:OF */ extern char *alloc_page (long n); /* (n) int n; */
/* alloc.c:149:OF */ extern void add_page_to_freelist (char *p, struct typemanager *tm); /* (p, tm) char *p; struct typemanager *tm; */
/* alloc.c:196:OF */ extern object type_name (int t); /* (t) int t; */
/* alloc.c:213:OF */ extern object alloc_object (enum type t); /* (t) enum type t; */
/* alloc.c:296:OF */ extern object make_cons (object a, object d); /* (a, d) object a; object d; */
/* alloc.c:364:OF */ extern object on_stack_cons (object x, object y); /* (x, y) object x; object y; */
/* alloc.c:376:OF */ extern object fSallocated (object typ); /* (typ) object typ; */
/* alloc.c:401:OF */ extern object fSreset_number_used (object typ); /* (typ) object typ; */
/* alloc.c:480:OF */ extern void insert_contblock (char *p, int s); /* (p, s) char *p; int s; */
/* alloc.c:480:OF */ extern void insert_maybe_sgc_contblock (char *p, int s); /* (p, s) char *p; int s; */
/* alloc.c:611:OF */ extern void set_maxpage (void); /* () */
/* alloc.c:635:OF */ extern void gcl_init_alloc (void); /* () */
/* alloc.c:737:OF */ extern object fSstaticp (object x); /* (x) object x; */
/* alloc.c:822:OF */ extern object fSallocate_sgc (object type,fixnum min,fixnum max,fixnum free_percent); /* (type, min, max, free_percent) object type; int min; int max; int free_percent; */
/* alloc.c:846:OF */ extern object fSallocate_growth (object type,fixnum min,fixnum max,fixnum percent,fixnum percent_free); /* (type, min, max, percent, percent_free) object type; int min; int max; int percent; int percent_free; */
/* alloc.c:911:OF */ extern object fSallocated_contiguous_pages (void); /* () */
/* alloc.c:918:OF */ extern object fSmaximum_contiguous_pages (void); /* () */
/* alloc.c:958:OF */ extern object fSallocated_relocatable_pages (void); /* () */
/* alloc.c:965:OF */ extern object fSget_hole_size (void); /* () */
/* alloc.c:1000:OF */ extern void gcl_init_alloc_function (void); /* () */
/* alloc.c:1126:OF */ extern void free (void *ptr); /* (ptr) void *ptr; */
/* array.c:57:OF */ extern void Laref (void); /* () */
/* array.c:126:OF */ extern object fLsvref (object x, ufixnum i); /* (x, i) object x; unsigned int i; */
/* array.c:142:OF */ extern object fLrow_major_aref (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:190:OF */ extern object fSaset1 (object x,fixnum i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:262:OF */ extern void siLaset (void); /* () */
/* array.c:321:OF */ extern void siLsvset (void); /* () */
/* array.c:324:OF */ extern object fSsvset (object x,fixnum i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:461:OF */ extern object fSget_aelttype (object x); /* (x) object x; */
/* array.c:480:OF */ extern void siLmake_vector (void); /* () */
/* array.c:519:OF */ extern object fSmake_array1 (fixnum elt_type, object staticp, object initial_element, object displaced_to,fixnum displaced_index_offset, object dimensions); /* (elt_type, staticp, initial_element, displaced_to, displaced_index_offset, dimensions) int elt_type; object staticp; object initial_element; object displaced_to; int displaced_index_offset; object dimensions; */
/* array.c::OF */ extern object fSmake_vector1_1 (fixnum n,fixnum elt_type,object staticp); 
/* array.c:738:OF */ extern void adjust_displaced (object x, long diff); /* (x, diff) object x; int diff; */
/* array.c:790:OF */ extern void gset (void *p1, void *val, int n, int typ); /* (p1, val, n, typ) char *p1; char *val; int n; int typ; */
/* array.c:831:OF */ extern object fScopy_array_portion (object x, object y,fixnum i1,fixnum i2, object n1); /* (x, y, i1, i2, n1) object x; object y; int i1; int i2; int n1; */
/* array.c:879:OF */ extern void array_allocself (object x, int staticp, object dflt); /* (x, staticp, dflt) object x; int staticp; object dflt; */
/* array.c:920:OF */ extern void siLfill_pointer_set (void); /* () */
/* array.c:923:OF */ extern object fSfill_pointer_set (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:944:OF */ extern void Lfill_pointer (void); /* () */
/* array.c:947:OF */ extern object fLfill_pointer (object x); /* (x) object x; */
/* array.c:965:OF */ extern object fLarray_has_fill_pointer_p (object x); /* (x) object x; */
/* array.c:986:OF */ extern void Larray_element_type (void); /* () */
/* array.c:989:OF */ extern object fLarray_element_type (object x); /* (x) object x; */
/* array.c:995:OF */ extern void Ladjustable_array_p (void); /* () */
/* array.c:998:OF */ extern object fLadjustable_array_p (object x); /* (x) object x; */
/* array.c:1002:OF */ extern void siLdisplaced_array_p (void); /* () */
/* array.c:1005:OF */ extern object fSdisplaced_array_p (object x); /* (x) object x; */
/* array.c:1010:OF */ extern void Larray_rank (void); /* () */
/* array.c:1013:OF */ extern object fLarray_rank (object x); /* (x) object x; */
/* array.c:1020:OF */ extern void Larray_dimension (void); /* () */
/* array.c:1023:OF */ extern object fLarray_dimension (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:1090:OF */ extern void siLreplace_array (void); /* () */
/* array.c:1093:OF */ extern object fSreplace_array (object old, object new); /* (old, new) object old; object new; */
/* array.c:1132:OF */ extern object fLarray_total_size (object x); /* (x) object x; */
/* array.c:1140:OF */ extern object fSaset_by_cursor (object array, object val, object cursor); /* (array, val, cursor) object array; object val; object cursor; */
/* array.c:1160:OF */ extern void gcl_init_array_function (void); /* () */
/* assignment.c:62:OF */ extern void setq (object sym, object val); /* (sym, val) object sym; object val; */
/* assignment.c:128:OF */ extern void Lset (void); /* () */
/* assignment.c:130:OF */ extern object fLset (object symbol, object value); /* (symbol, value) object symbol; object value; */
/* assignment.c:142:OF */ extern void siLfset (void); /* () */
/* assignment.c:144:OF */ extern object fSfset (object sym, object function); /* (sym, function) object sym; object function; */
/* assignment.c:214:OF */ extern object fLmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:228:OF */ extern void Lfmakunbound (void); /* () */
/* assignment.c:230:OF */ extern object fLfmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:547:OF */ extern object clear_compiler_properties (object sym, object code); /* (sym, code) object sym; object code; */
/* assignment.c:563:OF */ extern object fSclear_compiler_properties (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* assignment.c:591:OF */ extern void gcl_init_assignment (void); /* () */
/* backq.c:259:OF */ extern int backq_car (object x); /* (x) object x; */
/* backq.c:381:OF */ extern void gcl_init_backq (void); /* () */
/* bds.c:31:OF */ extern void bds_unwind (bds_ptr new_bds_top); /* (new_bds_top) bds_ptr new_bds_top; */
/* big.c:53:OF */ extern object fSset_gmp_allocate_relocatable (object flag); /* (flag) object flag; */
/* gmp_big.c:96:OF */ extern void gcl_init_big1 (void); /* () */
/* gmp_big.c:108:OF */ extern object new_bignum (void); /* () */
/* gmp_big.c:161:OF */ extern object make_integer (__mpz_struct *u); /* (u) __mpz_struct *u; */
/* gmp_big.c:207:OF */ extern int big_compare (object x, object y); /* (x, y) object x; object y; */
/* gmp_big.c:214:OF */ extern object normalize_big_to_object (object x); /* (x) object x; */
/* gmp_big.c:230:OF */ extern void add_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:244:OF */ extern void mul_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:289:OF */ extern object normalize_big (object x); /* (x) object x; */
/* gmp_big.c:302:OF */ extern object big_minus (object x); /* (x) object x; */
/* gmp_big.c:324:OF */ extern double big_to_double (object x); /* (x) object x; */
/* gmp_big.c:454:OF */ extern object maybe_replace_big (object x); /* (x) object x; */
/* gmp_big.c:472:OF */ extern object bignum2 (unsigned int h, unsigned int l); /* (h, l) unsigned int h; unsigned int l; */
/* gmp_big.c:482:OF */ extern void integer_quotient_remainder_1 (object x, object y, object *qp, object *rp); /* (x, y, qp, rp) object x; object y; object *qp; object *rp; */
/* gmp_big.c:502:OF */ extern object coerce_big_to_string (object x, int printbase); /* (x, printbase) object x; int printbase; */
/* gmp_big.c:521:OF */ extern void gcl_init_big (void); /* () */
/* big.c:72:OF */ extern int big_sign (object x); /* (x) object x; */
/* big.c:78:OF */ extern void set_big_sign (object x, int sign); /* (x, sign) object x; int sign; */
/* big.c:85:OF */ extern void zero_big (object x); /* (x) object x; */
/* bind.c:74:OF */ extern void lambda_bind (object *arg_top); /* (arg_top) object *arg_top; */
/* bind.c:564:OF */ extern void bind_var (object var, object val, object spp); /* (var, val, spp) object var; object val; object spp; */
/* bind.c:610:OF */ extern object find_special (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:670:OF */ extern object let_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:688:OF */ extern object letA_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:712:OF */ extern void parse_key (object *base, bool rest, bool allow_other_keys, register int n, ... ); 
/* bind.c:820:OF */ extern void check_other_key (object l, int n, ...); 
struct key {short n,allow_other_keys;
	    iobject *defaults;
	    iobject keys[1];
	   };

/* bind.c:866:OF */ extern int parse_key_new_new (int n, object *base, struct key *keys, object first, va_list ap); /* (n, base, keys, ap) int n; object *base; struct key *keys; va_list ap; */
/* bind.c:916:OF */ extern int parse_key_rest_new (object rest, int n, object *base, struct key *keys, object first, va_list ap); /* (rest, n, base, keys, ap) object rest; int n; object *base; struct key *keys; va_list ap; */
/* bind.c:975:OF */ extern void set_key_struct (struct key *ks, object data); /* (ks, data) struct key *ks; object data; */
/* bind.c:995:OF */ extern void gcl_init_bind (void); /* () */
/* block.c:121:OF */ extern void gcl_init_block (void); /* () */
/* bsearch.c:5:OF */ extern void *bsearch (const void *key, const void *base, size_t nel, size_t keysize, int (*compar) (const void *,const void *)); /* (key, base, nel, keysize, compar) char *key; char *base; unsigned int nel; unsigned int keysize; int (*compar)(); */
#if defined (__MINGW32__)
/* bzero.c:3:OF */ /*  extern void bzero (char *b, size_t length); */ /* (b, length) char *b; int length; */
#endif
/* catch.c:61:OF */ extern object fSerror_set (object x0); /* (x0) object x0; */
/* catch.c:166:OF */ extern void gcl_init_catch (void); /* () */
/* cfun.c:37:OF */ extern object make_cfun (void (*self)(), object name, object data, char *start, int size); /* (self, name, data, start, size) int (*self)(); object name; object data; char *start; int size; */
/* cfun.c:56:OF */ extern object make_sfun (object name, object (*self)(), int argd, object data); /* (name, self, argd, data) object name; int (*self)(); int argd; object data; */
/* cfun.c:91:OF */ extern object make_cclosure_new (void (*self)(), object name, object env, object data); /* (self, name, env, data) int (*self)(); object name; object env; object data; */
/* cfun.c:108:OF */ extern object make_cclosure (void (*self)(), object name, object env, object data, char *start, int size); /* (self, name, env, data, start, size) int (*self)(); object name; object env; object data; char *start; int size; */
/* cfun.c:124:OF */ extern object fSmc (object name, object address); /* (name, address) object name; object address; */
/* cfun.c:150:OF */ extern object fSmfsfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:174:OF */ extern object fSmfvfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:193:OF */ extern object fSmfvfun_key (object symbol, object address, object argd, object keys); /* (symbol, address, argd, keys) object symbol; object address; object argd; object keys; */
/* cfun.c:221:OF */ extern object fSmf (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:269:OF */ extern object fSmm (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:283:OF */ extern object make_function_internal (char *s, void(*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:299:OF */ extern object make_si_sfun_internal (char *s, object (*f)(), int argd); /* (s, f, argd) char *s; int (*f)(); int argd; */
/* cfun.c:322:OF */ extern object make_si_function_internal (char *s, void (*f) ()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:341:OF */ extern object make_special_form_internal (char *s, void (*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:352:OF */ extern object fScompiled_function_name (object fun); /* (fun) object fun; */
/* cfun.c:371:OF */ extern void turbo_closure (object fun); /* (fun) object fun; */
/* cfun.c:392:OF */ extern object fSturbo_closure (object funobj); /* (funobj) object funobj; */
/* cfun.c:403:OF */ extern void gcl_init_cfun (void); /* () */
/* cmac.c:147:OF */ extern object fScmod (object num); /* (num) object num; */
/* cmac.c:156:OF */ extern object fScplus (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:165:OF */ extern object fSctimes (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:175:OF */ extern object fScdifference (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:191:OF */ extern void gcl_init_cmac (void); /* () */
/* cmpaux.c:33:OF */ extern void siLspecialp (void); /* () */
/* cmpaux.c:35:OF */ extern object fSspecialp (object sym); /* (sym) object sym; */
/* cmpaux.c:73:OF */ extern object fSdebug (object sym, object val); /* (sym, val) object sym; object val; */
/* cmpaux.c:82:OF */ extern object fSsetvv (object index, object val); /* (index, val) object index; object val; */
/* cmpaux.c:95:OF */ extern void gcl_init_cmpaux (void); /* () */
/* cmpaux.c:106:OF */ /* extern int ifloor (int x, int y); */ /* (x, y) int x; int y; */
/* cmpaux.c:124:OF */ /* extern int imod (int x, int y); */ /* (x, y) int x; int y; */
/* cmpaux.c:185:OF */ extern int object_to_int (object x); /* (x) object x; */
/* cmpaux.c:263:OF */ extern char *object_to_string (object x); /* (x) object x; */
typedef int (*FUNC)();
/* cmpaux.c:294:OF */ extern void call_init (int init_address, object memory, object fasl_vec, FUNC fptr); /* (init_address, memory, fasl_vec, fptr) int init_address; object memory; object fasl_vec; FUNC fptr; */
/* cmpaux.c:339:OF */ extern void do_init (object *statVV); /* (statVV) object *statVV; */
/* cmpaux.c:416:OF */ extern void gcl_init_or_load1 (void (*fn) (void), char *file); /* (fn, file) int (*fn)(); char *file; */
/* conditional.c:200:OF */ extern void gcl_init_conditional (void); /* () */
/* error.c:38:OF */ extern void terminal_interrupt (int correctable); /* (correctable) int correctable; */
/* error.c:147:OF */ extern void Lerror (void); /* () */
/* error.c:164:OF */ extern void Lcerror (void); /* () */
/* error.c:184:OF */ extern void FEerror (char *s, int num, ... ); /* (s, num, arg1, arg2, arg3, arg4) char *s; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:203:OF */ extern void FEwrong_type_argument (object type, object value); /* (type, value) object type; object value; */
/* error.c:210:OF */ extern void FEtoo_few_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:219:OF */ extern void FEtoo_few_argumentsF (object args); /* (args) object args; */
/* error.c:227:OF */ extern void FEtoo_many_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:234:OF */ extern void FEtoo_many_argumentsF (object args); /* (args) object args; */
/* error.c:247:OF */ extern void FEunexpected_keyword (object key); /* (key) object key; */
/* error.c:258:OF */ extern void FEinvalid_form (char *s, object form); /* (s, form) char *s; object form; */
/* error.c:266:OF */ extern void FEunbound_variable (object sym); /* (sym) object sym; */
/* error.c:273:OF */ extern void FEinvalid_variable (char *s, object obj); /* (s, obj) char *s; object obj; */
/* error.c:280:OF */ extern void FEundefined_function (object fname); /* (fname) object fname; */
/* error.c:287:OF */ extern void FEinvalid_function (object obj); /* (obj) object obj; */
/* error.c:297:OF */ extern object CEerror (char *error_str, char *cont_str, int num, object arg1, object arg2, object arg3, object arg4); /* (error_str, cont_str, num, arg1, arg2, arg3, arg4) char *error_str; char *cont_str; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:330:OF */ extern object fSihs_top (void); /* () */
/* error.c:337:OF */ extern object fSihs_fun (object x0); /* (x0) object x0; */
/* error.c:346:OF */ extern object fSihs_vs (object x0); /* (x0) object x0; */
/* error.c:371:OF */ extern object fSfrs_top (void); /* () */
/* error.c:378:OF */ extern object fSfrs_vs (object x0); /* (x0) object x0; */
/* error.c:387:OF */ extern object fSfrs_bds (object x0); /* (x0) object x0; */
/* error.c:397:OF */ extern object fSfrs_class (object x0); /* (x0) object x0; */
/* error.c:413:OF */ extern object fSfrs_tag (object x0); /* (x0) object x0; */
/* error.c:422:OF */ extern object fSfrs_ihs (object x0); /* (x0) object x0; */
/* error.c:448:OF */ extern object fSbds_top (void); /* () */
/* error.c:455:OF */ extern object fSbds_var (object x0); /* (x0) object x0; */
/* error.c:464:OF */ extern object fSbds_val (object x0); /* (x0) object x0; */
/* error.c:487:OF */ extern object fSvs_top (void); /* () */
/* error.c:496:OF */ extern object fSvs (object x0); /* (x0) object x0; */
/* error.c:505:OF */ extern object fSsch_frs_base (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* error.c:523:OF */ extern object fSinternal_super_go (object tag, object x1, object x2); /* (tag, x1, x2) object tag; object x1; object x2; */
/* error.c:549:OF */ extern object fSuniversal_error_handler (object x0, object x1, object x2, object x3, object error_fmt_string); /* (x0, x1, x2, x3, error_fmt_string) object x0; object x1; object x2; object x3; object error_fmt_string; */
/* error.c:561:OF */ extern void check_arg_failed (int n); /* (n) int n; */
/* error.c:568:OF */ extern void too_few_arguments (void); /* () */
/* error.c:573:OF */ extern void too_many_arguments (void); /* () */
/* error.c:586:OF */ extern void ck_larg_exactly (int n, object x); /* (n, x) int n; object x; */
/* error.c:595:OF */ extern void invalid_macro_call (void); /* () */
/* error.c:618:OF */ extern object wrong_type_argument (object typ, object obj); /* (typ, obj) object typ; object obj; */
/* error.c:625:OF */ extern void illegal_declare (object form); /* (form) int form; */
/* error.c:635:OF */ extern void not_a_string_or_symbol (object x); /* (x) object x; */
/* error.c:641:OF */ extern void not_a_symbol (object obj); /* (obj) object obj; */
/* error.c:647:OF */ extern int not_a_variable (object obj); /* (obj) object obj; */
/* error.c:653:OF */ extern void illegal_index (object x, object i); /* (x, i) object x; object i; */
/* error.c:660:OF */ extern void check_socket (object x); /* (x) object x; */
/* error.c:670:OF */ extern void check_stream (object strm); /* (strm) object strm; */
/* error.c:697:OF */ extern void check_arg_range (int n, int m); /* (n, m) int n; int m; */
/* error.c:727:OF */ extern void gcl_init_error (void); /* () */
/* eval.c:143:OF */ extern void funcall (object fun); /* (fun) object fun; */
/* eval.c:375:OF */ extern void lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:461:OF */ extern void symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:549:OF */ extern object simple_lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:645:OF */ extern object simple_symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:739:OF */ extern void super_funcall (object fun); /* (fun) object fun; */
/* eval.c:752:OF */ extern void super_funcall_no_event (object fun); /* (fun) object fun; */
/* eval.c:936:OF */ extern object Ieval (object form); /* (form) object form; */
/* eval.c:944:OF */ extern void eval (object form); /* (form) object form; */
/* eval.c:1189:OF */ extern void Leval (void); /* () */
/* eval.c:1191:OF */ extern object fLeval (object x0); /* (x0) object x0; */
/* eval.c:1203:OF */ extern void Levalhook (void); /* () */
/* eval.c:1269:OF */ extern void Lconstantp (void); /* () */
/* eval.c:1271:OF */ extern object fLconstantp (object x0); /* (x0) object x0; */
/* eval.c:1293:OF */ extern object ieval (object x); /* (x) object x; */
/* eval.c:1309:OF */ extern object ifuncall1 (object fun, object arg1); /* (fun, arg1) object fun; object arg1; */
/* eval.c:1328:OF */ extern object ifuncall2 (object fun, object arg1, object arg2); /* (fun, arg1, arg2) object fun; object arg1; object arg2; */
/* eval.c:1348:OF */ extern object ifuncall3 (object fun, object arg1, object arg2, object arg3); /* (fun, arg1, arg2, arg3) object fun; object arg1; object arg2; object arg3; */
typedef void (*funcvoid)(void);
/* eval.c:1545:OF */ extern void gcl_init_eval (void); /* () */
/* fasdump.c:1465:OF */ extern object read_fasl_vector (object in); /* (in) object in; */
/* fat_string.c:29:OF */ extern object fSprofile (object start_address, object scale); /* (start_address, scale) object start_address; object scale; */
/* fat_string.c:46:OF */ extern object fSfunction_start (object funobj); /* (funobj) object funobj; */
/* fat_string.c:331:OF */ extern object fSdisplay_profile (object start_addr, object scal); /* (start_addr, scal) object start_addr; object scal; */
/* fat_string.c:394:OF */ extern object fSarray_adress (object array); /* (array) object array; */
/* fat_string.c:435:OF */ extern void gcl_init_fat_string (void); /* () */
/* sfasli.c::OF */ extern void gcl_init_sfasl (void); /* () */
/* format.c::OF */ extern object fLformat_1(object strm, object control,object x);
/* format.c:2084:OF */ extern void Lformat (void); /* () */
/* format.c:2171:OF */ extern void gcl_init_format (void); /* () */
/* frame.c:32:OF */ extern void unwind (frame_ptr fr, object tag); /* (fr, tag) frame_ptr fr; object tag; */
/* frame.c:58:OF */ extern frame_ptr frs_sch (object frame_id); /* (frame_id) object frame_id; */
/* frame.c:69:OF */ extern frame_ptr frs_sch_catch (object frame_id); /* (frame_id) object frame_id; */
/* funlink.c:19:OF */ extern void call_or_link (object sym, void **link); /* (sym, link) object sym; void **link; */
/* funlink.c:41:OF */ extern void call_or_link_closure (object sym, void **link, void **ptr); /* (sym, link, ptr) object sym; void **link; object *ptr; */
/* funlink.c:230:OF */ extern object c_apply_n (object (*fn)(), int n, object *x); /* (fn, n, x) long int (*fn)(); int n; object *x; */
/* funlink.c:696:OF */ extern object call_proc0 (object sym, void *link); /* (sym, link) object sym; void *link; */
/* funlink.c:784:OF */ extern int clear_stack (object *beg, object *limit); /* (beg, limit) object *beg; object *limit; */
/* funlink.c:821:OF */ extern void gcl_init_links (void); /* () */
/* gbc.c:151:OF */ extern void enter_mark_origin (object *p); /* (p) object *p; */
/* gbc.c:938:OF */ extern void GBC (enum type t); /* (t) enum type t; */
/* gbc.c:1326:OF */ extern object fLgbc (object x0); /* (x0) object x0; */
/* sgbc.c:924:OF */ extern int sgc_count_type (int t); /* (t) int t; */
/* sgbc.c:938:OF */ extern int sgc_start (void); /* () */
/* sgbc.c:1068:OF */ extern int sgc_quit (void); /* () */
/* sgbc.c:1131:OF */ extern void make_writable (long beg, long i); /* (beg, i) int beg; int i; */
#ifndef __MINGW32__
/* #include <signal.h> */
#endif
/* sgbc.c:1246:OF */ extern void memory_protect (int on); /* (on) int on; */
/* sgbc.c:1306:OF */ extern void perm_writable (char *p, long n); /* (p, n) char *p; int n; */
/* sgbc.c:1321:OF */ extern void system_error (void); /* () */
/* gbc.c:1357:OF */ extern void gcl_init_GBC (void); /* () */
/* gnumalloc.c:286:OF */ extern void malloc_init (char *start, void (*warnfun) (/* ??? */)); /* (start, warnfun) char *start; void (*warnfun)(); */
/* gnumalloc.c:301:OF */ extern int malloc_usable_size (char *mem); /* (mem) char *mem; */
/* gnumalloc.c:461:OF */ /*  extern void *malloc (size_t n); */ /* (n) unsigned int n; */
/* gnumalloc.c:529:OF */ /*  extern int free (char *mem); */ /* (mem) char *mem; */
/* gnumalloc.c:577:OF */ /*  extern char *realloc (char *mem, register unsigned int n); */ /* (mem, n) char *mem; register unsigned int n; */
/* gnumalloc.c:639:OF */ /*  extern char *memalign (unsigned int alignment, unsigned int size); */ /* (alignment, size) unsigned int alignment; unsigned int size; */
/* gnumalloc.c:737:OF */ extern int get_lim_data (void); /* () */
/* grab_defs.c:35:OF */ extern int read_some (char *buf, int n, int start_ch, int copy); /* (buf, n, start_ch, copy) char *buf; int n; int start_ch; int copy; */
/* grab_defs.c:71:OF */ /*  extern int main (void); */ /* () */
/* iteration.c:457:OF */ extern void gcl_init_iteration (void); /* () */
/* let.c:29:OF */ extern void let_var_list (object var_list); /* (var_list) object var_list; */
/* let.c:321:OF */ extern void gcl_init_let (void); /* () */
/* lex.c:34:OF */ extern object assoc_eq (object key, object alist); /* (key, alist) object key; object alist; */
/* lex.c:47:OF */ extern void lex_fun_bind (object name, object fun); /* (name, fun) object name; object fun; */
/* lex.c:59:OF */ extern void lex_macro_bind (object name, object exp_fun); /* (name, exp_fun) object name; object exp_fun; */
/* lex.c:70:OF */ extern void lex_tag_bind (object tag, object id); /* (tag, id) object tag; object id; */
/* lex.c:82:OF */ extern void lex_block_bind (object name, object id); /* (name, id) object name; object id; */
/* lex.c:95:OF */ extern object lex_tag_sch (object tag); /* (tag) object tag; */
/* lex.c:110:OF */ extern object lex_block_sch (object name); /* (name) object name; */
/* lex.c:125:OF */ extern void gcl_init_lex (void); /* () */
/* littleXwin.c:32:OF */ /*  extern Window open_window (void); */ /* () */
/* littleXwin.c:102:OF */ /*  extern int close_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:110:OF */ /*  extern int draw_line (Window the_window, int x1, int y1, int x2, int y2); */ /* (the_window, x1, y1, x2, y2) Window the_window; int x1; int y1; int x2; int y2; */
/* littleXwin.c:119:OF */ /*  extern int draw_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2);  *//* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:129:OF */ /*  extern int fill_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2); */ /* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:139:OF */ /*  extern int clear_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2);  *//* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:149:OF */ /*  extern int set_arc_mode (int pie_or_chord); */ /* (pie_or_chord) int pie_or_chord; */
/* littleXwin.c:162:OF */ /*  extern int erase_line (Window the_window, int x1, int y1, int x2, int y2);  *//* (the_window, x1, y1, x2, y2) Window the_window; int x1; int y1; int x2; int y2; */
/* littleXwin.c:171:OF */ /*  extern int draw_text (Window the_window, char *string, int x, int y); */ /* (the_window, string, x, y) Window the_window; char *string; int x; int y; */
/* littleXwin.c:182:OF */ /*  extern int erase_text (Window the_window, char *string, int x, int y); */ /* (the_window, string, x, y) Window the_window; char *string; int x; int y; */
/* littleXwin.c:193:OF */ /*  extern int clear_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:201:OF */ /*  extern int resize_window (Window the_window, int width, int height); */ /* (the_window, width, height) Window the_window; int width; int height; */
/* littleXwin.c:210:OF */ /*  extern int raise_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:218:OF */ /*  extern int use_font (char *font_name); */ /* (font_name) char *font_name; */
/* littleXwin.c:233:OF */ /*  extern int set_background (Window the_window, char *color_string); */ /* (the_window, color_string) Window the_window; char *color_string; */
/* littleXwin.c:251:OF */ /*  extern int set_foreground (char *color_string); */ /* (color_string) char *color_string; */
/* macros.c:139:OF */ extern object Imacro_expand1 (object exp_fun, object form); /* (exp_fun, form) object exp_fun; object form; */
/* macros.c:173:OF */ extern void Lmacroexpand (void); /* () */
/* macros.c:224:OF */ extern void Lmacroexpand_1 (void); /* () */
/* macros.c:265:OF */ extern object macro_expand (object form); /* (form) object form; */
/* macros.c:344:OF */ extern void gcl_init_macros (void); /* () */
/* main.c:111:OF */ extern int main (int argc, char **argv, char **envp); /* (argc, argv, envp) int argc; char **argv; char **envp; */
/* main.c:346:OF */ extern void install_segmentation_catcher (void); /* () */
/* main.c:359:OF */ extern void error (char *s); /* (s) char *s; */
/* main.c:519:OF */ extern object vs_overflow (void); /* () */
/* main.c:528:OF */ extern void bds_overflow (void); /* () */
/* main.c:537:OF */ extern void frs_overflow (void); /* () */
/* main.c:546:OF */ extern void ihs_overflow (void); /* () */
/* main.c:556:OF */ extern void segmentation_catcher (int); /* () */
/* main.c:587:OF */ extern void Lby (void); /* () */
/* main.c:607:OF */ extern void Lquit(void); /* () */
/* main.c:612:OF */ extern void Lexit(void); /* () */
/* main.c:619:OF */ extern int c_trace (void); /* () */
/* main.c:695:OF */ extern void siLreset_stack_limits (void); /* (arg) int arg; */
/* main.c:797:OF */ extern void Lidentity(void); /* () */
/* main.c:799:OF */ extern object fLidentity (object x0); /* (x0) object x0; */
/* main.c:805:OF */ extern void Llisp_implementation_version(void); /* () */
/* main.c:807:OF */ extern object fLlisp_implementation_version (void); /* () */
/* makefun.c:10:OF */ extern object MakeAfun (object (*addr)(object,object), unsigned int argd, object data); /* (addr, argd, data) int (*addr)(); unsigned int argd; object data; */
/* makefun.c:113:OF */ extern object fSset_key_struct (object key_struct_ind); /* (key_struct_ind) object key_struct_ind; */
/* makefun.c:122:OF */ extern void SI_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:131:OF */ extern void LISP_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:167:OF */ extern object fSinvoke (object x); /* (x) object x; */
/* mapfun.c:324:OF */ extern void gcl_init_mapfun (void); /* () */
/* multival.c:32:OF */ extern void Lvalues (void); /* () */
/* multival.c:37:OF */ extern void Lvalues_list (void); /* () */
/* multival.c:134:OF */ extern void gcl_init_multival (void); /* () */
/* nfunlink.c:190:OF */ extern object IapplyVector (object fun, int nargs, object *base); /* (fun, nargs, base) object fun; int nargs; object *base; */
/* nfunlink.c:269:OF */ extern void Iinvoke_c_function_from_value_stack (object (*f)(), int fargd); /* (f, fargd) object (*f)(); int fargd; */
/* nsocket.c:190:OF */ extern int CreateSocket (int port, char *host, int server, char *myaddr, int myport, int async); /* (port, host, server, myaddr, myport, async) int port; char *host; int server; char *myaddr; int myport; int async; */
/* nsocket.c:329:OF */ extern object fSgetpeername (object sock); /* (sock) object sock; */
/* nsocket.c:353:OF */ extern object fSgetsockname (object sock); /* (sock) object sock; */
/* nsocket.c:385:OF */ extern object fSset_blocking (object sock, object setBlocking); /* (sock, setBlocking) object sock; object setBlocking; */
/* nsocket.c:484:OF */ extern int getOneChar (FILE *fp); /* (fp) FILE *fp; */
/* nsocket.c:539:OF */ extern void ungetCharGclSocket (int c, object strm); /* (c, strm) int c; object strm; */
#ifndef __MINGW32__
/* nsocket.c:592:OF */ extern void tcpCloseSocket (int fd); /* (fd) int fd; */
/* nsocket.c:575:OF */ extern int TcpOutputProc (int fd, char *buf, int toWrite, int *errorCodePtr); /* (fd, buf, toWrite, errorCodePtr) int fd; char *buf; int toWrite; int *errorCodePtr; */
#endif
/* nsocket.c:619:OF */ extern int getCharGclSocket (object strm, object block); /* (strm, block) object strm; object block; */
/* num_arith.c:31:OF */ extern object fixnum_add (int i, int j); /* (i, j) int i; int j; */
/* num_arith.c:48:OF */ extern object fixnum_sub (int i, int j); /* (i, j) int i; int j; */
/* num_arith.c:100:OF */ extern object number_plus (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:246:OF */ extern object one_plus (object x); /* (x) object x; */
/* num_arith.c:292:OF */ extern object number_minus (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:438:OF */ extern object one_minus (object x); /* (x) object x; */
/* num_arith.c:478:OF */ extern object number_negate (object x); /* (x) object x; */
/* num_arith.c:520:OF */ extern object number_times (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:670:OF */ extern object number_divide (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:818:OF */ extern object integer_divide1 (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:828:OF */ extern object get_gcd (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:873:OF */ extern void Lplus (void); /* () */
/* num_arith.c:889:OF */ extern void Lminus (void); /* () */
/* num_arith.c:907:OF */ extern void Ltimes (void); /* () */
/* num_arith.c:923:OF */ extern void Ldivide (void); /* () */
/* num_arith.c:1029:OF */ extern void gcl_init_num_arith (void); /* () */
/* num_co.c:292:OF */ extern object double_to_integer (double d); /* (d) double d; */
/* num_co.c:372:OF */ extern void Lfloat (void); /* () */
/* num_co.c:424:OF */ extern void Lnumerator (void); /* () */
/* num_co.c:432:OF */ extern void Ldenominator (void); /* () */
/* num_co.c:442:OF */ extern void Lfloor (void); /* () */
/* num_co.c:563:OF */ extern void Lceiling (void); /* () */
/* num_co.c:684:OF */ extern void Ltruncate (void); /* () */
/* num_co.c:766:OF */ extern void Lround (void); /* () */
/* num_co.c:896:OF */ extern void Lmod (void); /* () */
/* num_co.c:987:OF */ extern void Lfloat_radix (void); /* () */
/* num_co.c:1089:OF */ extern void Linteger_decode_float (void); /* () */
/* num_co.c:1114:OF */ extern void Lcomplex (void); /* () */
/* num_co.c:1136:OF */ extern void Lrealpart (void); /* () */
/* num_co.c:1147:OF */ extern void Limagpart (void); /* () */
/* num_co.c:1185:OF */ extern void gcl_init_num_co (void); /* () */
/* num_comp.c:40:OF */ extern int number_compare (object x, object y); /* (x, y) object x; object y; */
/* num_comp.c:269:OF */ extern void Lmonotonically_increasing (void); /* () */
/* num_comp.c:271:OF */ extern void Lmonotonically_nondecreasing (void); /* () */
/* num_comp.c:272:OF */ extern void Lmonotonically_nonincreasing (void); /* () */
/* num_comp.c:292:OF */ extern void Lmin (void); /* () */
/* num_comp.c:309:OF */ extern void gcl_init_num_comp (void); /* () */
/* num_log.c:224:OF */ extern object shift_integer (object x, int w); /* (x, w) object x; int w; */
/* num_log.c:258:OF */ extern void Llogior (void); /* () */
/* num_log.c:279:OF */ extern void Llogxor (void); /* () */
/* num_log.c:299:OF */ extern void Llogand (void); /* () */
/* num_log.c:339:OF */ extern void Lboole (void); /* () */
/* num_log.c:380:OF */ extern void Llogbitp (void); /* () */
/* num_log.c:420:OF */ extern void Lash (void); /* () */
/* num_log.c:482:OF */ extern void Linteger_length (void); /* () */
/* num_log.c:549:OF */ extern void gcl_init_num_log (void); /* () */
/* num_log.c:585:OF */ extern void siLbit_array_op (void); /* () */
/* num_pred.c:31:OF */ extern int number_zerop (object x); /* (x) object x; */
/* num_pred.c:67:OF */ extern int number_plusp (object x); /* (x) object x; */
/* num_pred.c:107:OF */ extern int number_minusp (object x); /* (x) object x; */
/* num_pred.c:147:OF */ extern int number_oddp (object x); /* (x) object x; */
/* num_pred.c:161:OF */ extern int number_evenp (object x); /* (x) object x; */
/* num_pred.c:240:OF */ extern void gcl_init_num_pred (void); /* () */
/* num_rand.c:111:OF */ extern void Lrandom (void); /* () */
/* num_rand.c:151:OF */ extern void gcl_init_num_rand (void); /* () */
/* num_sfun.c:91:OF */ extern object number_expt (object x, object y); /* (x, y) object x; object y; */
/* num_sfun.c:453:OF */ extern void Lexp (void); /* () */
/* num_sfun.c:469:OF */ extern void Llog (void); /* () */
/* num_sfun.c:488:OF */ extern void Lsqrt (void); /* () */
/* num_sfun.c:495:OF */ extern void Lsin (void); /* () */
/* num_sfun.c:502:OF */ extern void Lcos (void); /* () */
/* num_sfun.c:516:OF */ extern void Latan (void); /* () */
/* num_sfun.c:535:OF */ extern void gcl_init_num_sfun (void); /* () */
/* number.c:35:OF */ extern long int fixint (object x); /* (x) object x; */
/* number.c:44:OF */ extern int fixnnint (object x); /* (x) object x; */
/* number.c:59:OF */ extern object fSallocate_bigger_fixnum_range (fixnum min,fixnum max); /* (min, max) int min; int max; */
/* number.c:81:OF */ extern object make_fixnum1 (long i); /* (i) int i; */
/* number.c:102:OF */ extern object make_ratio (object num, object den); /* (num, den) object num; object den; */
/* number.c:144:OF */ extern object make_shortfloat (double f); /* (f) double f; */
/* number.c:157:OF */ extern object make_longfloat (longfloat f); /* (f) longfloat f; */
/* number.c:170:OF */ extern object make_complex (object r, object i); /* (r, i) object r; object i; */
/* number.c:229:OF */ extern double number_to_double (object x); /* (x) object x; */
/* number.c:254:OF */ extern void gcl_init_number (void); /* () */
/* peculiar.c:14:OF */ /*  extern int main (void); */ /* () */
/* predicate.c:35:OF */ extern object fLnot (object x0); /* (x0) object x0; */
/* predicate.c:46:OF */ extern void Lsymbolp (void); /* () */
/* predicate.c:48:OF */ extern object fLsymbolp (object x0); /* (x0) object x0; */
/* predicate.c:61:OF */ extern object fLatom (object x0); /* (x0) object x0; */
/* predicate.c:74:OF */ extern object fLconsp (object x0); /* (x0) object x0; */
/* predicate.c:87:OF */ extern object fLlistp (object x0); /* (x0) object x0; */
/* predicate.c:100:OF */ extern object fLnumberp (object x0); /* (x0) object x0; */
/* predicate.c:117:OF */ extern object fLintegerp (object x0); /* (x0) object x0; */
/* predicate.c:132:OF */ extern object fLrationalp (object x0); /* (x0) object x0; */
/* predicate.c:148:OF */ extern object fLrealp (object x0); /* (x0) object x0; */
/* predicate.c:164:OF */ extern object fLfloatp (object x0); /* (x0) object x0; */
/* predicate.c:176:OF */ extern void Lcomplexp (void); /* () */
/* predicate.c:178:OF */ extern object fLcomplexp (object x0); /* (x0) object x0; */
/* predicate.c:190:OF */ extern object fLcharacterp (object x0); /* (x0) object x0; */
/* predicate.c:202:OF */ extern object fLstringp (object x0); /* (x0) object x0; */
/* predicate.c:214:OF */ extern object fLbit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:226:OF */ extern object fLvectorp (object x0); /* (x0) object x0; */
/* predicate.c:238:OF */ extern void Lsimple_string_p (void); /* () */
/* predicate.c:240:OF */ extern object fLsimple_string_p (object x0); /* (x0) object x0; */
/* predicate.c:253:OF */ extern void Lsimple_bit_vector_p (void); /* () */
/* predicate.c:255:OF */ extern object fLsimple_bit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:268:OF */ extern void Lsimple_vector_p (void); /* () */
/* predicate.c:270:OF */ extern object fLsimple_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:288:OF */ extern object fLarrayp (object x0); /* (x0) object x0; */
/* predicate.c:301:OF */ extern void Lpackagep (void); /* () */
/* predicate.c:303:OF */ extern object fLpackagep (object x0); /* (x0) object x0; */
/* predicate.c:313:OF */ extern void Lfunctionp (void); /* () */
/* predicate.c:315:OF */ extern object fLfunctionp (object x0); /* (x0) object x0; */
/* predicate.c:344:OF */ extern void Lcompiled_function_p (void); /* () */
/* predicate.c:346:OF */ extern object fLcompiled_function_p (object x0); /* (x0) object x0; */
/* predicate.c:367:OF */ extern object fLcommonp (object x0); /* (x0) object x0; */
/* predicate.c:379:OF */ extern object fLeq (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:393:OF */ extern int eql (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:455:OF */ extern object fLeql (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:469:OF */ extern int equal (register object x, register object y); /* (x, y) register object x; register object y; */
/* predicate.c:543:OF */ extern object fLequal (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:557:OF */ extern bool equalp (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:681:OF */ extern object fLequalp (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:750:OF */ extern bool contains_sharp_comma (object x); /* (x) object x; */
/* predicate.c:797:OF */ extern object fScontains_sharp_comma (object x0); /* (x0) object x0; */
/* predicate.c:810:OF */ extern object fSspicep (object x0); /* (x0) object x0; */
/* predicate.c:822:OF */ extern object fSfixnump (object x0); /* (x0) object x0; */
/* predicate.c:833:OF */ extern void gcl_init_predicate_function (void); /* () */
/* prog.c:48:OF */ extern void Ftagbody (object body); /* (body) object body; */
/* prog.c:246:OF */ extern void Fprogn (object body); /* (body) object body; */
/* prog.c:303:OF */ extern void gcl_init_prog (void); /* () */
/* reference.c:32:OF */ extern void Lfboundp (void); /* () */
/* reference.c:49:OF */ extern object symbol_function (object sym); /* (sym) object sym; */
/* reference.c:69:OF */ extern void Lsymbol_function (void); /* () */
/* reference.c:143:OF */ extern void Lsymbol_value (void); /* () */
/* reference.c:156:OF */ extern void Lboundp (void); /* () */
/* reference.c:169:OF */ extern void Lmacro_function (void); /* () */
/* reference.c:180:OF */ extern void Lspecial_form_p (void); /* () */
/* reference.c:191:OF */ extern void gcl_init_reference (void); /* () */
/*  #include "regexp.h" */
/* regexp.c:1588:OF */ extern void regerror (char *s); /* (s) char *s; */
/* regexpr.c:48:OF */ extern object fSmatch_beginning (fixnum i); /* (i) int i; */
/* regexpr.c:57:OF */ extern object fSmatch_end (fixnum i); /* (i) int i; */
/* save.c:17:OF */ extern void Lsave (void); /* () */
#include <unistd.h>
/* sbrk.c:9:OF */ /*  extern void * sbrk (int n); */ /* (n) int n; */
/* strcspn.c:3:OF */ /*  extern size_t strcspn (const char *s1, const char *s2); */ /* (s1, s2) char *s1; char *s2; */
/* structure.c:59:OF */ extern object structure_ref (object x, object name, int i); /* (x, name, i) object x; object name; int i; */
/* structure.c:107:OF */ extern object structure_set (object x, object name, int i, object v); /* (x, name, i, v) object x; object name; int i; object v; */
/* structure.c:164:OF */ extern object structure_to_list (object x); /* (x) object x; */
/* structure.c:188:OF */ extern void siLmake_structure (void); /* () */
/* structure.c:281:OF */ extern void siLstructure_set (void); /* () */
/* structure.c:326:OF */ extern void siLlist_nth (void); /* () */
/* structure.c:439:OF */ extern void gcl_init_structure_function (void); /* () */
/* toplevel.c:211:OF */ extern void gcl_init_toplevel (void); /* () */
/* typespec.c:38:OF */ extern void check_type_integer (object *p); /* (p) object *p; */
/* typespec.c:47:OF */ extern void check_type_non_negative_integer (object *p); /* (p) object *p; */
/* typespec.c:65:OF */ extern void check_type_rational (object *p); /* (p) object *p; */
/* typespec.c:75:OF */ extern void check_type_float (object *p); /* (p) object *p; */
/* typespec.c:94:OF */ extern void check_type_or_rational_float (object *p); /* (p) object *p; */
/* typespec.c:104:OF */ extern void check_type_number (object *p); /* (p) object *p; */
/* typespec.c:123:OF */ extern void check_type_character (object *p); /* (p) object *p; */
/* typespec.c:139:OF */ extern void check_type_symbol (object *p); /* (p) object *p; */
/* typespec.c:146:OF */ extern void check_type_or_symbol_string (object *p); /* (p) object *p; */
/* typespec.c:153:OF */ extern void check_type_or_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:170:OF */ extern void check_type_package (object *p); /* (p) object *p; */
/* typespec.c:177:OF */ extern void check_type_string (object *p); /* (p) object *p; */
/* typespec.c:191:OF */ extern void check_type_cons (object *p); /* (p) object *p; */
/* typespec.c:198:OF */ extern void check_type_stream (object *p); /* (p) object *p; */
/* typespec.c:205:OF */ extern void check_type_readtable (object *p); /* (p) object *p; */
/* typespec.c:213:OF */ extern void check_type_or_Pathname_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:225:OF */ extern void check_type_or_pathname_string_symbol_stream (object *p); /* (p) object *p; */
/* typespec.c:236:OF */ extern void check_type_random_state (object *p); /* (p) object *p; */
/* typespec.c:243:OF */ extern void check_type_hash_table (object *p); /* (p) object *p; */
/* typespec.c:250:OF */ extern void check_type_array (object *p); /* (p) object *p; */
/* typespec.c:284:OF */ extern void check_type (object x, int t); /* (x, t) object x; int t; */
/* typespec.c:294:OF */ extern void Ltype_of (void); /* () */
/* typespec.c:493:OF */ extern void gcl_init_typespec (void); /* () */
/* typespec.c:497:OF */ extern void gcl_init_typespec_function (void); /* () */
/* unexec-19.29.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexec.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexlin.c:808:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unixfasl.c:409:OF */ extern void gcl_init_unixfasl (void); /* () */
/* unixfsys.c:145:OF */ extern char *getwd (char *buffer); /* (buffer) char *buffer; */
/* unixfsys.c:209:OF */ extern void coerce_to_filename (object pathname, char *p); /* (pathname, p) object pathname; char *p; */
/* unixfsys.c:329:OF */ extern bool file_exists (object file); /* (file) object file; */
/* unixfsys.c:359:OF */ extern FILE *backup_fopen (char *filename, char *option); /* (filename, option) char *filename; char *option; */
/* unixfsys.c:372:OF */ extern int file_len (FILE *fp); /* (fp) FILE *fp; */
/* unixfsys.c:382:OF */ extern object truename (object); /* () */
/* unixfsys.c:382:OF */ extern void Ltruename (void); /* () */
/* unixfsys.c:418:OF */ extern object fSsetenv (object variable, object value); /* (variable, value) object variable; object value; */
/* unixfsys.c:442:OF */ extern object fLdelete_file (object path); /* (path) object path; */
/* unixfsys.c:456:OF */ extern void Lprobe_file (void); /* () */
/* unixfsys.c:533:OF */ extern void Ldirectory (void); /* () */
/* unixfsys.c:777:OF */ extern void gcl_init_unixfsys (void); /* () */
/* unixsave.c:173:OF */ extern void gcl_init_unixsave (void); /* () */
/* unixsys.c:83:OF */ extern object fSgetpid (void); /* () */
/* unixsys.c:87:OF */ extern void gcl_init_unixsys (void); /* () */
/* unixtime.c:67:OF */ extern int runtime (void); /* () */
/* unixtime.c:82:OF */ extern object unix_time_to_universal_time (int i); /* (i) int i; */
/* unixtime.c:99:OF */ extern object fLget_universal_time (void); /* () */
/* unixtime.c:144:OF */ extern object fLget_internal_real_time (void); /* () */
/* unixtime.c:173:OF */ extern void gcl_init_unixtime (void); /* () */
/* user_init.c:2:OF */ extern object user_init (void); /* () */
/* user_init.c:2:OF */ extern int user_match (const char *,int n); /* () */
/* usig.c:49:OF */ extern void gcl_signal (int signo, void (*handler) (/* ??? */)); /* (signo, handler) int signo; void (*handler)(); */
/* usig.c:92:OF */ extern int unblock_signals (int n, int m); /* (n, m) int n; int m; */
/* usig.c:119:OF */ extern void unblock_sigusr_sigio (void); /* () */
/* usig.c:182:OF */ extern void install_default_signals (void); /* () */
/* usig2.c:142:OF */ extern void gcl_init_safety (void); /* () */
/* usig2.c:158:OF */ extern object sSsignal_safety_required (fixnum signo,fixnum safety); /* (signo, safety) int signo; int safety; */
#ifdef __MINGW32__
/* usig2.c:167:OF */ extern void main_signal_handler (int signo); /* (signo) int signo */
#else
/* usig2.c:167:OF */ extern void main_signal_handler (int signo, int a, int b); /* (signo, a, b) int signo; int a; int b; */
#endif
/* usig2.c:375:OF */ extern void raise_pending_signals (int cond); /* (cond) int cond; */
/* usig2.c:407:OF */ extern object fSallow_signal (fixnum n); /* (n) int n; */
/* utils.c:12:OF */ extern object IisSymbol (object f); /* (f) object f; */
/* utils.c:20:OF */ extern object IisFboundp (object f); /* (f) object f; */
/* utils.c:30:OF */ extern object IisArray (object f); /* (f) object f; */
/* utils.c:44:OF */ extern object Iis_fixnum (object f); /* (f) object f; */
/* utils.c:61:OF */ extern object Iapply_ap_new (object (*f) (/* ??? */), object first, va_list ap); /* (f, ap) object (*f)(); va_list ap; */
/* utils.c:178:OF */ extern object Icheck_one_type (object x, enum type t); /* (x, t) object x; enum type t; */
/* utils.c:189:OF */ extern object fSincorrect_type (object val, object type); /* (val, type) object val; object type; */
/* utils.c:202:OF */ extern object Ivs_values (void); /* () */
/* utils.c:227:OF */ extern char *lisp_copy_to_null_terminated (object string, char *buf, int n); /* (string, buf, n) object string; char *buf; int n; */


/*  readline.d */
void
gcl_init_readline_function(void);

/*  sys_gcl.c */
void
gcl_init_init(void);

/* misc */
void
gcl_init_symbol(void);

void
gcl_init_package(void);

void
gcl_init_character(void);

void
gcl_init_read(void);

void
gcl_init_pathname(void);

void
gcl_init_print(void);

void
gcl_init_character_function(void);

void
gcl_init_file_function(void);

void
gcl_init_list_function(void);

void
gcl_init_package_function(void);

void
gcl_init_pathname_function(void);

void
gcl_init_print_function(void);

void
gcl_init_read_function(void);

void
gcl_init_sequence_function(void);

void
gcl_init_string_function(void);

void
gcl_init_symbol_function(void);

void
gcl_init_hash(void);

void
import(object,object);

void
export(object,object);

void
NewInit(void);

void
gcl_init_system(object);

void
set_up_string_register(char *);

bool
endp1(object);

void
stack_cons(void);

bool
char_equal(object,object);

bool
string_equal(object,object);

bool
string_eq(object,object);

bool
remf(object *,object);

bool
keywordp(object);

int
pack_hash(object);

void
load(char *);

bool
member_eq(object,object);

void
delete_eq(object,object *);

int
length(object);

int
rl_getc_em(FILE *);

void
setupPRINTdefault(object);

void
write_str(char *);

void
write_object(object,int);

void
cleanupPRINT(void);

int
fasload(object);

int
readc_stream(object);

void
unreadc_stream(int,object);

void
end_of_stream(object);

bool
stream_at_end(object);

int
digitp(int,int);

bool
char_eq(object,object);

bool
listen_stream(object);

void
get_string_start_end(object,object,object,int *,int *);

int
file_column(object);

int
writec_stream(int,object);

int
digit_weight(int,int);

void
flush_stream(object);

void
writestr_stream(char *,object);

void
write_string(object,object);

void
edit_double(int, double, int *, char *, int *);

void
sethash(object,object,object);

int
file_position(object);

int
file_position_set(object, int);

void
princ_str(char *s, object);

void
close_stream(object);

void
build_symbol_table(void);

void
gcl_init_file(void);

object
aset1(object,fixnum,object);

void
dfprintf(FILE *,char *,...);

void
Lmake_list(void);

void
Llast(void);

void
Lgensym(void);

void
Lldiff(void);

void
Lintern(void);

void
Lgensym(void);

void
Lldiff(void);

void
Lgensym(void);

void
Lintern(void);

void
Lintern(void);

void
Lreconc(void);

void
Lmember(void);

void
Ladjoin(void);

void
Llist(void);

void
Lappend(void);

void
Lread(void);

void
Lread_char(void);

void
Lchar_eq(void);

void
Lwrite_char(void);

void
Lforce_output(void);

void
Lchar_neq(void);

void
Llist(void);

void
Lwrite(void);

void
Lfresh_line(void);

void
Lsymbol_package(void);

void
Lfind_package(void);

void
Lfind_symbol(void);

void
Lpackage_name(void);

void
Lsymbol_plist(void);

void
Lpackage_nicknames(void);

void
Lpackage_use_list(void);

void
Lpackage_used_by_list(void);

void
Lstandard_char_p(void);

void
Lstring_char_p(void);

void
Lchar_code(void);

void
Lchar_bits(void);

void
Lchar_font(void);

void
Lread_line(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Llist_all_packages(void);

void
Lgensym(void);

void
Lread(void);

void
Lwrite(void);

void
Lstring_equal(void);

void
Lclose(void);

void
Lnamestring(void);

void
Lmake_echo_stream(void);

void
Lmake_broadcast_stream(void);

void
Lmake_two_way_stream(void);

void
Lbutlast(void);

void
Ladjoin(void);

void
Lstring_downcase(void);

void
Lmember(void);

void
Lgensym(void);

void
Llist_all_packages(void);

void
Lfind_symbol(void);

void
Lstring_equal(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lpackage_use_list(void);

void
Lreconc(void);

void
Lstandard_char_p(void);

void
Lstring_char_p(void);

void
Lcharacter(void);

void
Llength(void);

void
Lreconc(void);

void
Llength(void);

void
Lgensym(void);

void
Llist_length(void);

void
Lgensym(void);

void
Lbutlast(void);

void
Lnconc(void);

void
Lfind_package(void);

void
Lpackage_name(void);

void
Llist(void);

void
Lfresh_line(void);

void
Lread_char(void);

void
Lunread_char(void);

void
Lread_line(void);

void
Lread(void);

void
Lforce_output(void);

void
Lwrite(void);

void
Lmember(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lmake_pathname(void);

void
Lnamestring(void);

void
Lclose(void);

void
Lgensym(void);

void
Lfresh_line(void);

void
Llist(void);

void
Lread_char(void);

void
Lchar_eq(void);

void
Lfinish_output(void);

void
Lchar_neq(void);

void
Lwrite(void);

void
Lgensym(void);

void
Lmember(void);

void
Lappend(void);

void
Lcopy_tree(void);

void
Ladjoin(void);

void
Lgetf(void);

void
Lsubst(void);

void
Lsymbol_package(void);

void
Lcopy_list(void);

void
Lintern(void);

void
Lfind_package(void);

void
LlistA(void);

void
Llist(void);

void
Lgetf(void);

void
Lstreamp(void);

void
Lpeek_char(void);

void
Lread_char(void);

void
Lread_line(void);

void
Lset_macro_character(void);

void
Lclrhash(void);

void
siLhash_set(void);

void
Lgethash(void);

void
Lremhash(void);

void
Llist_all_packages(void);

void
Lintern(void);

void
Lunintern(void);

void
Lsubseq(void);

void
Lsymbol_package(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lread_char(void);

void
Lfile_length(void);

void
Lfile_position(void);

void
Lclose(void);

void
Lsubseq(void);

void
Lnamestring(void);

void
Lmerge_pathnames(void);

void
Lcopy_list(void);

void
Lread_line(void);

void
Lgensym(void);

void
Lcopy_list(void);

void
Lintern(void);

void
Lappend(void);

void
Lgensym(void);

void
Lcopy_list(void);

void
Lmember(void);

void
Lintern(void);

void
Lappend(void);

void
Lfind_package(void);

void
Lpackage_name(void);

void
Lpackage_nicknames(void);

void
Lpackage_use_list(void);

void
siLpackage_external(void);

void
siLpackage_internal(void);

void
Lsymbol_package(void);

void
Lappend(void);

void
Lgentemp(void);

void
Lgensym(void);

void
Lassoc(void);

void
Ladjoin(void);

void
Lstring_eq(void);

void
Lmember(void);

void
Lgethash(void);

void
Lfinish_output(void);

void
Lread(void);

void
Lmake_hash_table(void);

void
siLhash_set(void);

void
Lrevappend(void);

void
Lreconc(void);

void
Lcopy_list(void);

void
LlistA(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
princ_char(int,object);

void
Ldigit_char_p(void);

void
Lwrite_byte(void);

#ifdef SPECIAL_RSYM
void
read_special_symbols(char *);

int
node_compare(const void *,const void *);
#endif

void
unlink_loaded_files(void);

void
FEpackage_error(object,const char *s);

int
system_time_zone_helper(void);

object
call_proc_new(object,void **,int,object,va_list);

object 
call_vproc_new(object,void *,object,va_list);

void
funcall_with_catcher(object, object);

void
siLset_symbol_plist(void);

void
Lhash_table_p(void);

void
Lreadtablep(void);

int 
fixnum_expt(int, int);

void
check_alist(object);

void
ck_larg_at_least(int,object);

void
vfun_wrong_number_of_args(object);

/* FIXME from lfun_list.lsp -- should be automatically generated */
void Lgensym(void);
void Lsubseq(void);
void Lminusp(void);
void Linteger_decode_float(void);
void Lminus(void);
void Lint_char(void);
void Lchar_int(void);
void Lall_different(void);
void Lcopy_seq(void);
void Lkeywordp(void);
void Lname_char(void);
void Lchar_name(void);
void Lrassoc_if(void);
void Lmake_list(void);
void Lhost_namestring(void);
void Lmake_echo_stream(void);
void Lnth(void);
void Lsin(void);
void Lnumerator(void);
void Larray_rank(void);
void Lcaar(void);
void Lboth_case_p(void);
void Lnull(void);
void Lrename_file(void);
void Lfile_author(void);
void Lstring_capitalize(void);
void Lmacroexpand(void);
void Lnconc(void);
void Lboole(void);
void Ltailp(void);
void Lconsp(void);
void Llistp(void);
void Lmapcan(void);
void Llength(void);
void Lrassoc(void);
void Lpprint(void);
void Lpathname_host(void);
void Lnsubst_if_not(void);
void Lfile_position(void);
void Lstring_l(void);
void Lreverse(void);
void Lstreamp(void);
void siLputprop(void);
void Lremprop(void);
void Lsymbol_package(void);
void Lnstring_upcase(void);
void Lstring_ge(void);
void Lrealpart(void);
void Lnbutlast(void);
void Larray_dimension(void);
void Lcdr(void);
void Leql(void);
void Llog(void);
void Ldirectory(void);
void Lstring_not_equal(void);
void Lshadowing_import(void);
void Lmapc(void);
void Lmapl(void);
void Lmakunbound(void);
void Lcons(void);
void Llist(void);
void Luse_package(void);
void Lfile_length(void);
void Lmake_symbol(void);
void Lstring_right_trim(void);
void Lenough_namestring(void);
void Lprint(void);
void Lcddaar(void);
void Lcdadar(void);
void Lcdaadr(void);
void Lcaddar(void);
void Lcadadr(void);
void Lcaaddr(void);
void Lset_macro_character(void);
void Lforce_output(void);
void Lnthcdr(void);
void Llogior(void);
void Lchar_downcase(void);
void Lstring_char_p(void);
void Lstream_element_type(void);
void Lpackage_used_by_list(void);
void Ldivide(void);
void Lmaphash(void);
void Lstring_eq(void);
void Lpairlis(void);
void Lsymbolp(void);
void Lchar_not_lessp(void);
void Lone_plus(void);
void Lby(void);
void Lnsubst_if(void);
void Lcopy_list(void);
void Ltan(void);
void Lset(void);
void Lfunctionp(void);
void Lwrite_byte(void);
void Llast(void);
void Lmake_string(void);
void Lcaaar(void);
void Llist_length(void);
void Lcdddr(void);
void Lprin1(void);
void Lprinc(void);
void Llower_case_p(void);
void Lchar_le(void);
void Lstring_equal(void);
void Lclear_output(void);
void CERROR(void);
void Lterpri(void);
void Lnsubst(void);
void Lunuse_package(void);
void Lstring_not_greaterp(void);
void Lstring_g(void);
void Lfinish_output(void);
void Lspecial_form_p(void);
void Lstringp(void);
void Lget_internal_run_time(void);
void Ltruncate(void);
void Lcode_char(void);
void Lchar_code(void);
void Lsimple_string_p(void);
void Lrevappend(void);
void Lhash_table_count(void);
void Lpackage_use_list(void);
void Lrem(void);
void Lmin(void);
void Lapplyhook(void);
void Lexp(void);
void Lchar_lessp(void);
void Lcdar(void);
void Lcadr(void);
void Llist_all_packages(void);
void Lcdr(void);
void Lcopy_symbol(void);
void Lacons(void);
void Ladjustable_array_p(void);
void Lsvref(void);
void Lapply(void);
void Ldecode_float(void);
void Lsubst_if_not(void);
void Lrplaca(void);
void Lsymbol_plist(void);
void Lwrite_string(void);
void Llogeqv(void);
void Lstring(void);
void Lstring_upcase(void);
void Lceiling(void);
void Lgethash(void);
void Ltype_of(void);
void Lbutlast(void);
void Lone_minus(void);
void Lmake_hash_table(void);
void Lstring_neq(void);
void Lmonotonically_nondecreasing(void);
void Lmake_broadcast_stream(void);
void Limagpart(void);
void Lintegerp(void);
void Lread_char(void);
void Lpeek_char(void);
void Lchar_font(void);
void Lstring_greaterp(void);
void Loutput_stream_p(void);
void Lash(void);
void Llcm(void);
void Lelt(void);
void Lcos(void);
void Lnstring_downcase(void);
void Lcopy_alist(void);
void Latan(void);
void Ldelete_file(void);
void Lfloat_radix(void);
void Lsymbol_name(void);
void Lclear_input(void);
void Lfind_symbol(void);
void Lchar_l(void);
void Lhash_table_p(void);
void Levenp(void);
void siLcmod(void);
void siLcplus(void);
void siLctimes(void);
void siLcdifference(void);
void Lzerop(void);
void Lcaaaar(void);
void Lchar_ge(void);
void Lcdddar(void);
void Lcddadr(void);
void Lcdaddr(void);
void Lcadddr(void);
void Lfill_pointer(void);
void Lmapcar(void);
void Lfloatp(void);
void Lshadow(void);
void Lmacroexpand_1(void);
void Lsxhash(void);
void Llisten(void);
void Larrayp(void);
void Lmake_pathname(void);
void Lpathname_type(void);
void Lfuncall(void);
void Lclrhash(void);
void Lgraphic_char_p(void);
void Lfboundp(void);
void Lnsublis(void);
void Lchar_not_equal(void);
void Lmacro_function(void);
void Lsubst_if(void);
void Lcomplexp(void);
void Lread_line(void);
void Lpathnamep(void);
void Lmax(void);
void Lin_package(void);
void Lreadtablep(void);
void Lfloat_sign(void);
void Lcharacterp(void);
void Lread(void);
void Lnamestring(void);
void Lunread_char(void);
void Lcdaar(void);
void Lcadar(void);
void Lcaadr(void);
void Lchar_eq(void);
void Lalpha_char_p(void);
void Lstring_trim(void);
void Lmake_package(void);
void Lclose(void);
void Ldenominator(void);
void Lfloat(void);
void Lcar(void);
void Lround(void);
void Lsubst(void);
void Lupper_case_p(void);
void Larray_element_type(void);
void Ladjoin(void);
void Llogand(void);
void Lmapcon(void);
void Lintern(void);
void Lvalues(void);
void Lexport(void);
void Ltimes(void);
void Lmonotonically_increasing(void);
void Lcomplex(void);
void Lset_syntax_from_char(void);
void Lchar_bit(void);
void Linteger_length(void);
void Lpackagep(void);
void Linput_stream_p(void);
void Lmonotonically_nonincreasing(void);
void Lpathname(void);
void Leq(void);
void Lmake_char(void);
void Lfile_namestring(void);
void Lcharacter(void);
void Lsymbol_function(void);
void Lconstantp(void);
void Lchar_equal(void);
void Ltree_equal(void);
void Lcddr(void);
void Lgetf(void);
void Lsave(void);
void Lmake_random_state(void);
void Lchar_not_greaterp(void);
void Lexpt(void);
void Lsqrt(void);
void Lscale_float(void);
void Lchar_g(void);
void Lldiff(void);
void Lassoc_if_not(void);
void Lbit_vector_p(void);
void Lnstring_capitalize(void);
void Lsymbol_value(void);
void Lrplacd(void);
void Lboundp(void);
void Lequalp(void);
void Lsimple_bit_vector_p(void);
void Lmember_if_not(void);
void Lmake_two_way_stream(void);
void Lparse_integer(void);
void Lplus(void);
void Lall_the_same(void);
void Lgentemp(void);
void Lrename_package(void);
void Lcommonp(void);
void Lnumberp(void);
void Lcopy_readtable(void);
void Lrandom_state_p(void);
void Ldirectory_namestring(void);
void Lstandard_char_p(void);
void Ltruename(void);
void Lidentity(void);
void Lnreverse(void);
void Lpathname_device(void);
void Lunintern(void);
void Lunexport(void);
void Lfloat_precision(void);
void Lstring_downcase(void);
void Lcar(void);
void Lconjugate(void);
void Lnull(void);
void Lread_char_no_hang(void);
void Lfresh_line(void);
void Lwrite_char(void);
void Lparse_namestring(void);
void Lstring_not_lessp(void);
void Lchar(void);
void Laref(void);
void Lpackage_nicknames(void);
void Lendp(void);
void Loddp(void);
void Lchar_upcase(void);
void LlistA(void);
void Lvalues_list(void);
void Lequal(void);
void Ldigit_char_p(void);
void ERROR(void);
void Lchar_neq(void);
void Lpathname_directory(void);
void Lcdaaar(void);
void Lcadaar(void);
void Lcaadar(void);
void Lcaaadr(void);
void Lcddddr(void);
void Lget_macro_character(void);
void Lformat(void);
void Lcompiled_function_p(void);
void Lsublis(void);
void Lpathname_name(void);
void Limport(void);
void Llogxor(void);
void Lrassoc_if_not(void);
void Lchar_greaterp(void);
void Lmake_synonym_stream(void);
void Lalphanumericp(void);
void Lremhash(void);
void Lreconc(void);
void Lmonotonically_decreasing(void);
void Llogbitp(void);
void Lmaplist(void);
void Lvectorp(void);
void Lassoc_if(void);
void Lget_properties(void);
void Lstring_le(void);
void Levalhook(void);
void Lfile_write_date(void);
void Llogcount(void);
void Lmerge_pathnames(void);
void Lmember_if(void);
void Lread_byte(void);
void Lsimple_vector_p(void);
void Lchar_bits(void);
void Lcopy_tree(void);
void Lgcd(void);
void Lby(void);
void Lget(void);
void Lmod(void);
void Ldigit_char(void);
void Lprobe_file(void);
void Lstring_left_trim(void);
void Lpathname_version(void);
void Lwrite_line(void);
void Leval(void);
void Latom(void);
void Lcddar(void);
void Lcdadr(void);
void Lcaddr(void);
void Lfmakunbound(void);
void Lsleep(void);
void Lpackage_name(void);
void Lfind_package(void);
void Lassoc(void);
void Lset_char_bit(void);
void Lfloor(void);
void Lwrite(void);
void Lplusp(void);
void Lfloat_digits(void);
void Lread_delimited_list(void);
void Lappend(void);
void Lmember(void);
void Lstring_lessp(void);
void Lrandom(void);
void siLspecialp(void);
void siLoutput_stream_string(void);
void siLstructurep(void);
void siLcopy_stream(void);
void siLinit_system(void);
void siLstring_to_object(void);
void siLreset_stack_limits(void);
void siLdisplaced_array_p(void);
void siLrplaca_nthcdr(void);
void siLlist_nth(void);
void siLmake_vector(void);
void siLaset(void);
void siLsvset(void);
void siLfill_pointer_set(void);
void siLreplace_array(void);
void siLfset(void);
void siLhash_set(void);
void Lboole(void);
void siLpackage_internal(void);
void siLpackage_external(void);
void siLelt_set(void);
void siLchar_set(void);
void siLmake_structure(void);
void siLstructure_name(void);
void siLstructure_ref(void);
void siLstructure_set(void);
void siLput_f(void);
void siLrem_f(void);
void siLset_symbol_plist(void);
void siLbit_array_op(void);

object
cmod(object);
object
ctimes(object,object);
object
cdifference(object,object);
object
cplus(object,object);

object
Icall_error_handler(object,object,int,...);

void *
gcl_gmp_alloc(size_t);

int
my_plt(const char *,unsigned long *);

int
parse_plt(void);

int
sgc_count_read_only_type(int);

#ifdef SGC
void
memprotect_test_reset(void);
#endif


#if defined (__MINGW32__)
int bcmp ( const void *s1, const void *s2, size_t n );
void bcopy ( const void *s1, void *s2, size_t n );
void bzero(void *b, size_t length);
int TcpOutputProc ( int fd, char *buf, int toWrite, int *errorCodePtr, int block );
void recreate_heap1 ( void );
void gcl_init_shared_memory ( void );
void fix_filename ( object pathname, char *filename1 );
void alarm ( int n );
void *sbrk ( unsigned long increment );
void sigemptyset( sigset_t *set);
void sigaddset ( sigset_t *set, int n);
int sigismember ( sigset_t *set, int n );
int sigprocmask ( int how, const sigset_t *set, sigset_t *oldset );
#endif
