/* alloc.c:89:OF */ extern char *alloc_page (int n); /* (n) int n; */
/* alloc.c:149:OF */ extern void add_page_to_freelist (char *p, struct typemanager *tm); /* (p, tm) char *p; struct typemanager *tm; */
/* alloc.c:196:OF */ extern object type_name (int t); /* (t) int t; */
/* alloc.c:202:OF */ extern void call_after_gbc_hook (int t); /* (t) int t; */
/* alloc.c:213:OF */ extern object alloc_object (enum type t); /* (t) enum type t; */
/* alloc.c:283:OF */ extern int grow_linear (int old, int fract, int grow_min, int grow_max); /* (old, fract, grow_min, grow_max) int old; int fract; int grow_min; int grow_max; */
/* alloc.c:296:OF */ extern object make_cons (object a, object d); /* (a, d) object a; object d; */
/* alloc.c:364:OF */ extern object on_stack_cons (object x, object y); /* (x, y) object x; object y; */
/* alloc.c:376:OF */ extern object fSallocated (object typ); /* (typ) object typ; */
/* alloc.c:401:OF */ extern object fSreset_number_used (object typ); /* (typ) object typ; */
/* alloc.c:480:OF */ extern void insert_contblock (char *p, int s); /* (p, s) char *p; int s; */
/* alloc.c:569:OF */ extern void init_tm (enum type t, char *name, int elsize, int nelts, int sgc); /* (t, name, elsize, nelts, sgc) enum type t; char *name; int elsize; int nelts; int sgc; */
/* alloc.c:611:OF */ extern void set_maxpage (void); /* () */
/* alloc.c:635:OF */ extern void init_alloc (void); /* () */
/* alloc.c:737:OF */ extern object fSstaticp (object x); /* (x) object x; */
/* alloc.c:742:OF */ extern void cant_get_a_type (void); /* () */
/* alloc.c:746:OF */ extern void siLallocate (void); /* () */
/* alloc.c:748:OF *//*   extern object fSallocate (object type, int npages, __builtin_va_alist_t __builtin_va_alist); */ /* (type, npages, __builtin_va_alist) object type; int npages; __builtin_va_alist_t __builtin_va_alist; */
/* alloc.c:802:OF */ extern int t_from_type (object type); /* (type) object type; */
/* alloc.c:822:OF */ extern object fSallocate_sgc (object type, int min, int max, int free_percent); /* (type, min, max, free_percent) object type; int min; int max; int free_percent; */
/* alloc.c:846:OF */ extern object fSallocate_growth (object type, int min, int max, int percent, int percent_free); /* (type, min, max, percent, percent_free) object type; int min; int max; int percent; int percent_free; */
/* alloc.c:870:OF */ extern void siLalloc_contpage (void); /* () */
/* alloc.c:872:OF *//*   extern object fSallocate_contiguous_pages ( int npages, __builtin_va_alist_t __builtin_va_alist); */ /* (npages, __builtin_va_alist) int npages; __builtin_va_alist_t __builtin_va_alist; */
/* alloc.c:909:OF */ extern void siLncbpage (void); /* () */
/* alloc.c:911:OF */ extern object fSallocated_contiguous_pages (void); /* () */
/* alloc.c:916:OF */ extern void siLmaxcbpage (void); /* () */
/* alloc.c:918:OF */ extern object fSmaximum_contiguous_pages (void); /* () */
/* alloc.c:924:OF */ extern void siLalloc_relpage (void); /* () */
/* alloc.c:926:OF *//*   extern object fSallocate_relocatable_pages ( int npages, __builtin_va_alist_t __builtin_va_alist); */ /* (npages, __builtin_va_alist) int npages; __builtin_va_alist_t __builtin_va_alist; */
/* alloc.c:956:OF */ extern void siLnrbpage (void); /* () */
/* alloc.c:958:OF */ extern object fSallocated_relocatable_pages (void); /* () */
/* alloc.c:963:OF */ extern void siLget_hole_size (void); /* () */
/* alloc.c:965:OF */ extern object fSget_hole_size (void); /* () */
/* alloc.c:970:OF */ extern void siLset_hole_size (void); /* () */
/* alloc.c:972:OF *//*   extern object fSset_hole_size (int npages, __builtin_va_alist_t __builtin_va_alist); */ /* (npages, __builtin_va_alist) int npages; __builtin_va_alist_t __builtin_va_alist; */
/* alloc.c:1000:OF */ extern void init_alloc_function (void); /* () */
/* alloc.c:1126:OF */ extern void free (void *ptr); /* (ptr) void *ptr; */
/* alloc.c:1203:OF */ extern void *calloc (size_t nelem, size_t elsize); /* (nelem, elsize) int nelem; int elsize; */
/* alloc.c:1216:OF */ extern void cfree (void *ptr); /* (ptr) char *ptr; */
/* alloc.c:1236:OF */ extern void *valloc (size_t size); /* (size) int size; */
/* array.c:57:OF */ extern void Laref (void); /* () */
/* array.c:60:OF *//*   extern object fLaref (object x, int i, __builtin_va_alist_t __builtin_va_alist); */ /* (x, i, __builtin_va_alist) object x; int i; __builtin_va_alist_t __builtin_va_alist; */
/* array.c:107:OF */ extern void fScheck_bounds_bounds (object x, int i); /* (x, i) object x; int i; */
/* array.c:126:OF */ extern object fLsvref (object x, unsigned int i); /* (x, i) object x; unsigned int i; */
/* array.c:142:OF */ extern object fSaref1 (object x, int i); /* (x, i) object x; int i; */
/* array.c:190:OF */ extern object fSaset1 (object x, object i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:262:OF */ extern void siLaset (void); /* () */
/* array.c:265:OF *//*   extern object fSaset (object x, object ii, object y, __builtin_va_alist_t __builtin_va_alist); */ /* (x, ii, y, __builtin_va_alist) object x; object ii; object y; __builtin_va_alist_t __builtin_va_alist; */
/* array.c:321:OF */ extern void siLsvset (void); /* () */
/* array.c:324:OF */ extern object fSsvset (object x, int i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:346:OF *//*   extern object fSmake_vector1 (int n, int elt_type, object staticp, __builtin_va_alist_t __builtin_va_alist); */ /* (n, elt_type, staticp, __builtin_va_alist) int n; int elt_type; object staticp; __builtin_va_alist_t __builtin_va_alist; */
/* array.c:461:OF */ extern object fSget_aelttype (object x); /* (x) object x; */
/* array.c:480:OF */ extern void siLmake_vector (void); /* () */
/* array.c:482:OF *//*   extern object fSmake_vector (object x0, object x1, object x2, object x3, object x4, object x5, object x6, __builtin_va_alist_t __builtin_va_alist); */ /* (x0, x1, x2, x3, x4, x5, x6, __builtin_va_alist) object x0; object x1; object x2; object x3; object x4; object x5; object x6; __builtin_va_alist_t __builtin_va_alist; */
/* array.c:519:OF */ extern object fSmake_array1 (int elt_type, object staticp, object initial_element, object displaced_to, int displaced_index_offset, object dimensions); /* (elt_type, staticp, initial_element, displaced_to, displaced_index_offset, dimensions) int elt_type; object staticp; object initial_element; object displaced_to; int displaced_index_offset; object dimensions; */
/* array.c:583:OF */ extern void Larray_displacement (void); /* () */
/* array.c:638:OF */ extern void displace (object from_array, object dest_array, int offset); /* (from_array, dest_array, offset) object from_array; object dest_array; int offset; */
/* array.c:680:OF */ extern enum aelttype Iarray_element_type (object x); /* (x) object x; */
/* array.c:706:OF */ extern void Idisplace_array (object from, object to, int displaced_index_offset); /* (from, to, displaced_index_offset) object from; object to; int displaced_index_offset; */
/* array.c:738:OF */ extern void adjust_displaced (object x, int diff); /* (x, diff) object x; int diff; */
/* array.c:758:OF */ extern char *raw_aet_ptr (object x, short int typ); /* (x, typ) object x; short int typ; */
/* array.c:790:OF */ extern void gset (void *p1, void *val, int n, int typ); /* (p1, val, n, typ) char *p1; char *val; int n; int typ; */
/* array.c:831:OF */ extern object fScopy_array_portion (object x, object y, int i1, int i2, object n1); /* (x, y, i1, i2, n1) object x; object y; int i1; int i2; int n1; */
/* array.c:879:OF */ extern void array_allocself (object x, int staticp, object dflt); /* (x, staticp, dflt) object x; int staticp; object dflt; */
/* array.c:920:OF */ extern void siLfill_pointer_set (void); /* () */
/* array.c:923:OF */ extern object fSfill_pointer_set (object x, int i); /* (x, i) object x; int i; */
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
/* array.c:1023:OF */ extern object fLarray_dimension (object x, int i); /* (x, i) object x; int i; */
/* array.c:1035:OF */ extern void Icheck_displaced (object displaced_list, object ar, int dim); /* (displaced_list, ar, dim) object displaced_list; object ar; int dim; */
/* array.c:1065:OF */ extern void Iundisplace (object ar); /* (ar) object ar; */
/* array.c:1090:OF */ extern void siLreplace_array (void); /* () */
/* array.c:1093:OF */ extern object fSreplace_array (object old, object new); /* (old, new) object old; object new; */
/* array.c:1129:OF */ extern void Larray_total_size (void); /* () */
/* array.c:1132:OF */ extern object fLarray_total_size (object x); /* (x) object x; */
/* array.c:1138:OF */ extern void siLaset_by_cursor (void); /* () */
/* array.c:1140:OF */ extern object fSaset_by_cursor (object array, object val, object cursor); /* (array, val, cursor) object array; object val; object cursor; */
/* array.c:1160:OF */ extern void init_array_function (void); /* () */
/* assignment.c:62:OF */ extern void setq (object sym, object val); /* (sym, val) object sym; object val; */
/* assignment.c:86:OF */ extern void Fsetq (object form); /* (form) object form; */
/* assignment.c:109:OF */ extern void Fpsetq (object arg); /* (arg) object arg; */
/* assignment.c:128:OF */ extern void Lset (void); /* () */
/* assignment.c:130:OF */ extern object fLset (object symbol, object value); /* (symbol, value) object symbol; object value; */
/* assignment.c:142:OF */ extern void siLfset (void); /* () */
/* assignment.c:144:OF */ extern object fSfset (object sym, object function); /* (sym, function) object sym; object function; */
/* assignment.c:187:OF */ extern void Fmultiple_value_setq (object form); /* (form) object form; */
/* assignment.c:212:OF */ extern void Lmakunbound (void); /* () */
/* assignment.c:214:OF */ extern object fLmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:228:OF */ extern void Lfmakunbound (void); /* () */
/* assignment.c:230:OF */ extern object fLfmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:256:OF */ extern void Fsetf (object form); /* (form) object form; */
/* assignment.c:288:OF */ extern object setf (object place, object form); /* (place, form) object place; object form; */
/* assignment.c:405:OF */ extern void Fpush (object form); /* (form) object form; */
/* assignment.c:437:OF */ extern void Fpop (object form); /* (form) object form; */
/* assignment.c:467:OF */ extern void Fincf (object form); /* (form) object form; */
/* assignment.c:506:OF */ extern void Fdecf (object form); /* (form) object form; */
/* assignment.c:547:OF */ extern object clear_compiler_properties (object sym, object code); /* (sym, code) object sym; object code; */
/* assignment.c:561:OF */ extern void siLclear_compiler_properties (void); /* () */
/* assignment.c:563:OF */ extern object fSclear_compiler_properties (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* assignment.c:591:OF */ extern void init_assignment (void); /* () */
/* backq.c:49:OF */ extern void kwote_cdr (void); /* () */
/* backq.c:68:OF */ extern void kwote_car (void); /* () */
/* backq.c:98:OF */ extern int backq_cdr (object x); /* (x) object x; */
/* backq.c:259:OF */ extern int backq_car (object x); /* (x) object x; */
/* backq.c:313:OF */ extern object backq (object x); /* (x) object x; */
/* backq.c:326:OF */ extern object fLcomma_reader (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* backq.c:351:OF */ extern object fLbackquote_reader (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* backq.c:381:OF */ extern void init_backq (void); /* () */
/* bcmp.c:2:OF */ extern int bcmp (const void *s1, const void *s2, size_t n); /* (s1, s2, n) char *s1; char *s2; int n; */
/* bcopy.c:3:OF */ extern void bcopy (const void *s1, void *s2, size_t n); /* (s1, s2, n) char *s1; char *s2; int n; */
/* bds.c:31:OF */ extern void bds_unwind (bds_ptr new_bds_top); /* (new_bds_top) bds_ptr new_bds_top; */
/* big.c:53:OF */ extern object fSset_gmp_allocate_relocatable (object flag); /* (flag) object flag; */
/* gmp_big.c:96:OF */ extern void init_big1 (void); /* () */
/* gmp_big.c:108:OF */ extern object new_bignum (void); /* () */
/* gmp_big.c:133:OF */ extern object make_bignum (__mpz_struct *u); /* (u) __mpz_struct *u; */
/* gmp_big.c:161:OF */ extern object make_integer (__mpz_struct *u); /* (u) __mpz_struct *u; */
/* gmp_big.c:203:OF */ extern int big_zerop (object x); /* (x) object x; */
/* gmp_big.c:207:OF */ extern int big_compare (object x, object y); /* (x, y) object x; object y; */
/* gmp_big.c:214:OF */ extern object normalize_big_to_object (object x); /* (x) object x; */
/* gmp_big.c:222:OF */ extern void gcopy_to_big (__mpz_struct *res, object x); /* (res, x) __mpz_struct *res; object x; */
/* gmp_big.c:230:OF */ extern void add_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:237:OF */ extern void sub_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:244:OF */ extern void mul_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:261:OF */ extern int div_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:270:OF */ extern object big_plus (object x, object y); /* (x, y) object x; object y; */
/* gmp_big.c:277:OF */ extern object big_times (object x, object y); /* (x, y) object x; object y; */
/* gmp_big.c:289:OF */ extern object normalize_big (object x); /* (x) object x; */
/* gmp_big.c:302:OF */ extern object big_minus (object x); /* (x) object x; */
/* gmp_big.c:310:OF */ extern void big_quotient_remainder (object x0, object y0, object *qp, object *rp); /* (x0, y0, qp, rp) object x0; object y0; object *qp; object *rp; */
/* gmp_big.c:324:OF */ extern double big_to_double (object x); /* (x) object x; */
/* gmp_big.c:331:OF */ extern object copy_big (object x); /* (x) object x; */
/* gmp_big.c:345:OF */ extern object copy_to_big (object x); /* (x) object x; */
/* gmp_big.c:454:OF */ extern object maybe_replace_big (object x); /* (x) object x; */
/* gmp_big.c:472:OF */ extern object bignum2 (unsigned int h, unsigned int l); /* (h, l) unsigned int h; unsigned int l; */
/* gmp_big.c:482:OF */ extern void integer_quotient_remainder_1 (object x, object y, object *qp, object *rp); /* (x, y, qp, rp) object x; object y; object *qp; object *rp; */
/* gmp_big.c:502:OF */ extern object coerce_big_to_string (object x, int printbase); /* (x, printbase) object x; int printbase; */
/* gmp_big.c:521:OF */ extern void init_big (void); /* () */
/* big.c:72:OF */ extern int big_sign (object x); /* (x) object x; */
/* big.c:78:OF */ extern void set_big_sign (object x, int sign); /* (x, sign) object x; int sign; */
/* big.c:85:OF */ extern void zero_big (object x); /* (x) object x; */
/* bind.c:74:OF */ extern void lambda_bind (object *arg_top); /* (arg_top) object *arg_top; */
/* bind.c:564:OF */ extern void bind_var (object var, object val, object spp); /* (var, val, spp) object var; object val; object spp; */
/* bind.c:595:OF */ extern void illegal_lambda (void); /* () */
/* bind.c:610:OF */ extern object find_special (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:670:OF */ extern object let_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:688:OF */ extern object letA_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:712:OF */ extern void parse_key (object *base, bool rest, bool allow_other_keys, register int n, ... /*__builtin_va_alist_t __builtin_va_alist*/); /* (base, rest, allow_other_keys, n, __builtin_va_alist) object *base; bool rest; bool allow_other_keys; register int n; __builtin_va_alist_t __builtin_va_alist; */
/* bind.c:820:OF */ extern void check_other_key (object l, int n, .../*  __builtin_va_alist_t __builtin_va_alist */); /* (l, n, __builtin_va_alist) object l; int n; __builtin_va_alist_t __builtin_va_alist; */
struct key {short n,allow_other_keys;
	    iobject *defaults;
	    iobject keys[1];
	   };

/* bind.c:866:OF */ extern int parse_key_new (int n, object *base, struct key *keys, va_list ap); /* (n, base, keys, ap) int n; object *base; struct key *keys; va_list ap; */
/* bind.c:916:OF */ extern int parse_key_rest (object rest, int n, object *base, struct key *keys, va_list ap); /* (rest, n, base, keys, ap) object rest; int n; object *base; struct key *keys; va_list ap; */
/* bind.c:975:OF */ extern void set_key_struct (struct key *ks, object data); /* (ks, data) struct key *ks; object data; */
/* bind.c:995:OF */ extern void init_bind (void); /* () */
/* bitop.c:4:OF */ extern void get_mark_bit (void); /* () */
/* bitop.c:6:OF */ extern void set_mark_bit (void); /* () */
/* bitop.c:8:OF */ extern void get_set_mark_bit (void); /* () */
/* block.c:33:OF */ extern void Fblock (object args); /* (args) object args; */
/* block.c:70:OF */ extern void Freturn_from (object args); /* (args) object args; */
/* block.c:97:OF */ extern void Freturn (object args); /* (args) object args; */
/* block.c:121:OF */ extern void init_block (void); /* () */
/* bsearch.c:5:OF */ extern void *bsearch (const void *key, const void *base, size_t nel, size_t keysize, int (*compar) (const void *,const void *)); /* (key, base, nel, keysize, compar) char *key; char *base; unsigned int nel; unsigned int keysize; int (*compar)(); */
/* bzero.c:3:OF */ extern void bzero (void *b, size_t length); /* (b, length) char *b; int length; */
/* catch.c:32:OF */ extern void Fcatch (object args); /* (args) object args; */
/* catch.c:52:OF */ extern void siLerror_set (void); /* () */
/* catch.c:61:OF */ extern object fSerror_set (object x0); /* (x0) object x0; */
/* catch.c:95:OF */ extern void Funwind_protect (object args); /* (args) object args; */
/* catch.c:142:OF */ extern void Fthrow (object args); /* (args) object args; */
/* catch.c:166:OF */ extern void init_catch (void); /* () */
/* cfun.c:37:OF */ extern object make_cfun (void (*self)(), object name, object data, char *start, int size); /* (self, name, data, start, size) int (*self)(); object name; object data; char *start; int size; */
/* cfun.c:56:OF */ extern object make_sfun (object name, object (*self)(), int argd, object data); /* (name, self, argd, data) object name; int (*self)(); int argd; object data; */
/* cfun.c:76:OF */ extern object make_vfun (object name, object (*self)(), int argd, object data); /* (name, self, argd, data) object name; int (*self)(); int argd; object data; */
/* cfun.c:91:OF */ extern object make_cclosure_new (void (*self)(), object name, object env, object data); /* (self, name, env, data) int (*self)(); object name; object env; object data; */
/* cfun.c:108:OF */ extern object make_cclosure (void (*self)(), object name, object env, object data, char *start, int size); /* (self, name, env, data, start, size) int (*self)(); object name; object env; object data; char *start; int size; */
/* cfun.c:122:OF */ extern void siLmc (void); /* () */
/* cfun.c:124:OF */ extern object fSmc (object name, object address); /* (name, address) object name; object address; */
/* cfun.c:136:OF */ extern object MFsfun (object sym, object (*self)(), int argd, object data); /* (sym, self, argd, data) object sym; int (*self)(); int argd; object data; */
/* cfun.c:148:OF */ extern void siLmfsfun (void); /* () */
/* cfun.c:150:OF */ extern object fSmfsfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:159:OF */ extern object MFvfun (object sym, object (*self)(), int argd, object data); /* (sym, self, argd, data) object sym; int (*self)(); int argd; object data; */
/* cfun.c:172:OF */ extern void siLmfvfun (void); /* () */
/* cfun.c:174:OF */ extern object fSmfvfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:184:OF */ extern object MFvfun_key (object sym, object (*self)(), int argd, object data, struct key *keys); /* (sym, self, argd, data, keys) object sym; int (*self)(); int argd; object data; char *keys; */
/* cfun.c:191:OF */ extern void siLmfvfun_key (void); /* () */
/* cfun.c:193:OF */ extern object fSmfvfun_key (object symbol, object address, object argd, object keys); /* (symbol, address, argd, keys) object symbol; object address; object argd; object keys; */
/* cfun.c:201:OF */ extern object MFnew (object sym, void (*self)(), object data); /* (sym, self, data) object sym; int (*self)(); object data; */
/* cfun.c:219:OF */ extern void siLmf (void); /* () */
/* cfun.c:221:OF */ extern object fSmf (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:230:OF */ extern object MF (object sym, void (*self)(), char *start, int size, object data); /* (sym, self, start, size, data) object sym; int (*self)(); char *start; int size; object data; */
/* cfun.c:244:OF */ extern object MM (object sym, void (*self)(), char *start, int size, object data); /* (sym, self, start, size, data) object sym; int (*self)(); char *start; int size; object data; */
/* cfun.c:267:OF */ extern void siLmm (void); /* () */
/* cfun.c:269:OF */ extern object fSmm (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:283:OF */ extern object make_function (char *s, void(*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:299:OF */ extern object make_si_sfun (char *s, object (*f)(), int argd); /* (s, f, argd) char *s; int (*f)(); int argd; */
/* cfun.c:310:OF */ extern object make_si_vfun1 (char *s, object (*f)(), int argd); /* (s, f, argd) char *s; int (*f)(); int argd; */
/* cfun.c:322:OF */ extern object make_si_function (char *s, void (*f) ()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:341:OF */ extern object make_special_form (char *s, void (*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:350:OF */ extern void siLcompiled_function_name (void); /* () */
/* cfun.c:352:OF */ extern object fScompiled_function_name (object fun); /* (fun) object fun; */
/* cfun.c:371:OF */ extern void turbo_closure (object fun); /* (fun) object fun; */
/* cfun.c:390:OF */ extern void siLturbo_closure (void); /* () */
/* cfun.c:392:OF */ extern object fSturbo_closure (object funobj); /* (funobj) object funobj; */
/* cfun.c:403:OF */ extern void init_cfun (void); /* () */
/* cmac.c:49:OF */ extern long long int dblrem (int a, int b, int mod); /* (a, b, mod) int a; int b; int mod; */
/* cmac.c:73:OF */ extern object cmod (object x); /* (x) object x; */
/* cmac.c:104:OF */ extern object ctimes (object a, object b); /* (a, b) object a; object b; */
/* cmac.c:118:OF */ extern object cdifference (object a, object b); /* (a, b) object a; object b; */
/* cmac.c:131:OF */ extern object cplus (object a, object b); /* (a, b) object a; object b; */
/* cmac.c:145:OF */ extern void siLcmod (void); /* () */
/* cmac.c:147:OF */ extern object fScmod (object num); /* (num) object num; */
/* cmac.c:154:OF */ extern void siLcplus (void); /* () */
/* cmac.c:156:OF */ extern object fScplus (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:163:OF */ extern void siLctimes (void); /* () */
/* cmac.c:165:OF */ extern object fSctimes (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:173:OF */ extern void siLcdifference (void); /* () */
/* cmac.c:175:OF */ extern object fScdifference (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:183:OF */ extern object memq (register object a, register object b); /* (a, b) register object a; register object b; */
/* cmac.c:191:OF */ extern void init_cmac (void); /* () */
/* cmpaux.c:33:OF */ extern void siLspecialp (void); /* () */
/* cmpaux.c:35:OF */ extern object fSspecialp (object sym); /* (sym) object sym; */
/* cmpaux.c:48:OF */ extern void siLdefvar1 (void); /* () */
/* cmpaux.c:50:OF *//*   extern object fSdefvar1 (object sym, object val, __builtin_va_alist_t __builtin_va_alist); */ /* (sym, val, __builtin_va_alist) object sym; object val; __builtin_va_alist_t __builtin_va_alist; */
/* cmpaux.c:71:OF */ extern void siLdebug (void); /* () */
/* cmpaux.c:73:OF */ extern object fSdebug (object sym, object val); /* (sym, val) object sym; object val; */
/* cmpaux.c:80:OF */ extern void siLsetvv (void); /* () */
/* cmpaux.c:82:OF */ extern object fSsetvv (object index, object val); /* (index, val) object index; object val; */
/* cmpaux.c:95:OF */ extern void init_cmpaux (void); /* () */
/* cmpaux.c:106:OF */ extern int ifloor (int x, int y); /* (x, y) int x; int y; */
/* cmpaux.c:124:OF */ extern int imod (int x, int y); /* (x, y) int x; int y; */
/* cmpaux.c:130:OF */ extern void set_VV_data (object *VV, int n, object data, char *start, int size); /* (VV, n, data, start, size) object *VV; int n; object data; char *start; int size; */
/* cmpaux.c:139:OF */ extern void set_VV (object *VV, int n, object data); /* (VV, n, data) object *VV; int n; object data; */
/* cmpaux.c:158:OF */ extern char object_to_char (object x); /* (x) object x; */
/* cmpaux.c:185:OF */ extern int object_to_int (object x); /* (x) object x; */
/* cmpaux.c:211:OF */ extern float object_to_float (object x); /* (x) object x; */
/* cmpaux.c:235:OF */ extern double object_to_double (object x); /* (x) object x; */
/* cmpaux.c:263:OF */ extern char *object_to_string (object x); /* (x) object x; */
typedef int (*FUNC)();
/* cmpaux.c:294:OF */ extern void call_init (int init_address, object memory, object fasl_vec, FUNC fptr); /* (init_address, memory, fasl_vec, fptr) int init_address; object memory; object fasl_vec; FUNC fptr; */
/* cmpaux.c:339:OF */ extern void do_init (object *statVV); /* (statVV) object *statVV; */
/* cmpaux.c:416:OF */ extern void init_or_load1 (int (*fn) (/* ??? */), char *file); /* (fn, file) int (*fn)(); char *file; */
/* conditional.c:34:OF */ extern void Fif (object form); /* (form) object form; */
/* conditional.c:60:OF */ extern void Fcond (object args); /* (args) object args; */
/* conditional.c:94:OF */ extern void Fcase (object arg); /* (arg) object arg; */
/* conditional.c:145:OF */ extern void Fwhen (object form); /* (form) object form; */
/* conditional.c:172:OF */ extern void Funless (object form); /* (form) object form; */
/* conditional.c:200:OF */ extern void init_conditional (void); /* () */
/* error.c:38:OF */ extern void terminal_interrupt (int correctable); /* (correctable) int correctable; */
/* error.c:45:OF */ extern object ihs_function_name (object x); /* (x) object x; */
/* error.c:102:OF */ extern object ihs_top_function_name (ihs_ptr h); /* (h) ihs_ptr h; */
/* error.c:118:OF */ extern void call_error_handler (void); /* () */
/* error.c:126:OF *//*   extern object Icall_error_handler (object error_name, object error_format_string, int nfmt_args, __builtin_va_alist_t __builtin_va_alist); */ /* (error_name, error_format_string, nfmt_args, __builtin_va_alist) object error_name; object error_format_string; int nfmt_args; __builtin_va_alist_t __builtin_va_alist; */
/* error.c:147:OF */ extern void Lerror (void); /* () */
/* error.c:149:OF *//*   extern object fLerror (object fmt_string, __builtin_va_alist_t __builtin_va_alist); */ /* (fmt_string, __builtin_va_alist) object fmt_string; __builtin_va_alist_t __builtin_va_alist; */
/* error.c:164:OF */ extern void Lcerror (void); /* () */
/* error.c:167:OF *//*   extern object fLcerror (object continue_fmt_string, object fmt_string, __builtin_va_alist_t __builtin_va_alist); */ /* (continue_fmt_string, fmt_string, __builtin_va_alist) object continue_fmt_string; object fmt_string; __builtin_va_alist_t __builtin_va_alist; */
/* error.c:184:OF */ extern void FEerror (/*  char *s, int num, ... */); /* (s, num, arg1, arg2, arg3, arg4) char *s; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:203:OF */ extern void FEwrong_type_argument (object type, object value); /* (type, value) object type; object value; */
/* error.c:210:OF */ extern void FEtoo_few_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:219:OF */ extern void FEtoo_few_argumentsF (object args); /* (args) object args; */
/* error.c:227:OF */ extern void FEtoo_many_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:234:OF */ extern void FEtoo_many_argumentsF (object args); /* (args) object args; */
/* error.c:241:OF */ extern void FEinvalid_macro_call (void); /* () */
/* error.c:247:OF */ extern void FEunexpected_keyword (object key); /* (key) object key; */
/* error.c:258:OF */ extern void FEinvalid_form (char *s, object form); /* (s, form) char *s; object form; */
/* error.c:266:OF */ extern void FEunbound_variable (object sym); /* (sym) object sym; */
/* error.c:273:OF */ extern void FEinvalid_variable (char *s, object obj); /* (s, obj) char *s; object obj; */
/* error.c:280:OF */ extern void FEundefined_function (object fname); /* (fname) object fname; */
/* error.c:287:OF */ extern void FEinvalid_function (object obj); /* (obj) object obj; */
/* error.c:297:OF */ extern object CEerror (char *error_str, char *cont_str, int num, object arg1, object arg2, object arg3, object arg4); /* (error_str, cont_str, num, arg1, arg2, arg3, arg4) char *error_str; char *cont_str; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:313:OF */ extern ihs_ptr get_ihs_ptr (object x); /* (x) object x; */
/* error.c:327:OF */ extern void siLihs_top (void); /* () */
/* error.c:330:OF */ extern object fSihs_top (void); /* () */
/* error.c:335:OF */ extern void siLihs_fun (void); /* () */
/* error.c:337:OF */ extern object fSihs_fun (object x0); /* (x0) object x0; */
/* error.c:344:OF */ extern void siLihs_vs (void); /* () */
/* error.c:346:OF */ extern object fSihs_vs (object x0); /* (x0) object x0; */
/* error.c:354:OF */ extern frame_ptr get_frame_ptr (object x); /* (x) object x; */
/* error.c:368:OF */ extern void siLfrs_top (void); /* () */
/* error.c:371:OF */ extern object fSfrs_top (void); /* () */
/* error.c:376:OF */ extern void siLfrs_vs (void); /* () */
/* error.c:378:OF */ extern object fSfrs_vs (object x0); /* (x0) object x0; */
/* error.c:385:OF */ extern void siLfrs_bds (void); /* () */
/* error.c:387:OF */ extern object fSfrs_bds (object x0); /* (x0) object x0; */
/* error.c:395:OF */ extern void siLfrs_class (void); /* () */
/* error.c:397:OF */ extern object fSfrs_class (object x0); /* (x0) object x0; */
/* error.c:411:OF */ extern void siLfrs_tag (void); /* () */
/* error.c:413:OF */ extern object fSfrs_tag (object x0); /* (x0) object x0; */
/* error.c:420:OF */ extern void siLfrs_ihs (void); /* () */
/* error.c:422:OF */ extern object fSfrs_ihs (object x0); /* (x0) object x0; */
/* error.c:431:OF */ extern bds_ptr get_bds_ptr (object x); /* (x) object x; */
/* error.c:445:OF */ extern void siLbds_top (void); /* () */
/* error.c:448:OF */ extern object fSbds_top (void); /* () */
/* error.c:453:OF */ extern void siLbds_var (void); /* () */
/* error.c:455:OF */ extern object fSbds_var (object x0); /* (x0) object x0; */
/* error.c:462:OF */ extern void siLbds_val (void); /* () */
/* error.c:464:OF */ extern object fSbds_val (object x0); /* (x0) object x0; */
/* error.c:472:OF */ extern object *get_vs_ptr (object x); /* (x) object x; */
/* error.c:485:OF */ extern void siLvs_top (void); /* () */
/* error.c:487:OF */ extern object fSvs_top (void); /* () */
/* error.c:494:OF */ extern void siLvs (void); /* () */
/* error.c:496:OF */ extern object fSvs (object x0); /* (x0) object x0; */
/* error.c:503:OF */ extern void siLsch_frs_base (void); /* () */
/* error.c:505:OF */ extern object fSsch_frs_base (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* error.c:521:OF */ extern void siLinternal_super_go (void); /* () */
/* error.c:523:OF */ extern object fSinternal_super_go (object tag, object x1, object x2); /* (tag, x1, x2) object tag; object x1; object x2; */
/* error.c:547:OF */ extern void siLuniversal_error_handler (void); /* () */
/* error.c:549:OF */ extern object fSuniversal_error_handler (object x0, object x1, object x2, object x3, object error_fmt_string); /* (x0, x1, x2, x3, error_fmt_string) object x0; object x1; object x2; object x3; object error_fmt_string; */
/* error.c:561:OF */ extern void check_arg_failed (int n); /* (n) int n; */
/* error.c:568:OF */ extern void too_few_arguments (void); /* () */
/* error.c:573:OF */ extern void too_many_arguments (void); /* () */
/* error.c:578:OF */ extern void ck_larg_at_least (int n, object x); /* (n, x) int n; object x; */
/* error.c:586:OF */ extern void ck_larg_exactly (int n, object x); /* (n, x) int n; object x; */
/* error.c:595:OF */ extern void invalid_macro_call (void); /* () */
/* error.c:600:OF */ extern void keyword_value_mismatch (void); /* () */
/* error.c:605:OF */ extern void not_a_keyword (object x); /* (x) object x; */
/* error.c:611:OF */ extern void unexpected_keyword (object key); /* (key) object key; */
/* error.c:618:OF */ extern object wrong_type_argument (object typ, object obj); /* (typ, obj) object typ; object obj; */
/* error.c:625:OF */ extern void illegal_declare (object form); /* (form) int form; */
/* error.c:630:OF */ extern void not_a_string (object obj); /* (obj) object obj; */
/* error.c:635:OF */ extern void not_a_string_or_symbol (object x); /* (x) object x; */
/* error.c:641:OF */ extern void not_a_symbol (object obj); /* (obj) object obj; */
/* error.c:647:OF */ extern int not_a_variable (object obj); /* (obj) object obj; */
/* error.c:653:OF */ extern void illegal_index (object x, object i); /* (x, i) object x; object i; */
/* error.c:660:OF */ extern void check_socket (object x); /* (x) object x; */
/* error.c:670:OF */ extern void check_stream (object strm); /* (strm) object strm; */
/* error.c:677:OF *//*   extern object LVerror (__builtin_va_alist_t __builtin_va_alist); */ /* (__builtin_va_alist) __builtin_va_alist_t __builtin_va_alist; */
/* error.c:688:OF */ extern void vfun_wrong_number_of_args (object x); /* (x) object x; */
/* error.c:697:OF */ extern void check_arg_range (int n, int m); /* (n, m) int n; int m; */
/* error.c:727:OF */ extern void init_error (void); /* () */
/* eval.c:78:OF */ extern void quick_call_sfun (object fun); /* (fun) object fun; */
/* eval.c:113:OF */ extern void call_sfun_no_check (object fun); /* (fun) object fun; */
/* eval.c:124:OF */ extern void call_vfun (object fun); /* (fun) object fun; */
/* eval.c:143:OF */ extern void funcall (object fun); /* (fun) object fun; */
/* eval.c:331:OF */ extern void funcall_no_event (object fun); /* (fun) object fun; */
/* eval.c:375:OF */ extern void lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:418:OF */ extern void lispcall_no_event (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:461:OF */ extern void symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:504:OF */ extern void symlispcall_no_event (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:549:OF */ extern object simple_lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:597:OF */ extern object simple_lispcall_no_event (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:645:OF */ extern object simple_symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:693:OF */ extern object simple_symlispcall_no_event (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:739:OF */ extern void super_funcall (object fun); /* (fun) object fun; */
/* eval.c:752:OF */ extern void super_funcall_no_event (object fun); /* (fun) object fun; */
/* eval.c:936:OF */ extern object Ieval (object form); /* (form) object form; */
/* eval.c:944:OF */ extern void eval (object form); /* (form) object form; */
/* eval.c:1124:OF */ extern void call_applyhook (object fun); /* (fun) object fun; */
/* eval.c:1147:OF */ extern void Lfuncall (void); /* () */
/* eval.c:1149:OF *//*   extern object fLfuncall (object fun, __builtin_va_alist_t __builtin_va_alist); */ /* (fun, __builtin_va_alist) object fun; __builtin_va_alist_t __builtin_va_alist; */
/* eval.c:1162:OF */ extern void Lapply (void); /* () */
/* eval.c:1164:OF *//*   extern object fLapply (object fun, __builtin_va_alist_t __builtin_va_alist); */ /* (fun, __builtin_va_alist) object fun; __builtin_va_alist_t __builtin_va_alist; */
/* eval.c:1189:OF */ extern void Leval (void); /* () */
/* eval.c:1191:OF */ extern object fLeval (object x0); /* (x0) object x0; */
/* eval.c:1203:OF */ extern void Levalhook (void); /* () */
/* eval.c:1233:OF */ extern void Lapplyhook (void); /* () */
/* eval.c:1269:OF */ extern void Lconstantp (void); /* () */
/* eval.c:1271:OF */ extern object fLconstantp (object x0); /* (x0) object x0; */
/* eval.c:1293:OF */ extern object ieval (object x); /* (x) object x; */
/* eval.c:1309:OF */ extern object ifuncall1 (object fun, object arg1); /* (fun, arg1) object fun; object arg1; */
/* eval.c:1328:OF */ extern object ifuncall2 (object fun, object arg1, object arg2); /* (fun, arg1, arg2) object fun; object arg1; object arg2; */
/* eval.c:1348:OF */ extern object ifuncall3 (object fun, object arg1, object arg2, object arg3); /* (fun, arg1, arg2, arg3) object fun; object arg1; object arg2; object arg3; */
/* eval.c:1368:OF */ extern void funcall_with_catcher (object fname, object fun); /* (fname, fun) object fname; object fun; */
/* eval.c:1384:OF */ extern object fcalln_cclosure (va_list ap); /* (ap) va_list ap; */
/* eval.c:1431:OF */ extern object fcalln_general (va_list ap); /* (ap) va_list ap; */
/* eval.c:1464:OF */ extern object fcalln_vfun (va_list vl); /* (vl) va_list vl; */
/* eval.c:1476:OF *//*   extern object fcalln (__builtin_va_alist_t __builtin_va_alist); */ /* (__builtin_va_alist) __builtin_va_alist_t __builtin_va_alist; */
typedef void (*funcvoid)(void);
/* eval.c:1519:OF *//*   extern object funcall_cfun (funcvoid fn, int n, __builtin_va_alist_t __builtin_va_alist); */ /* (fn, n, __builtin_va_alist) funcvoid fn; int n; __builtin_va_alist_t __builtin_va_alist; */
/* eval.c:1545:OF */ extern void init_eval (void); /* () */
/* fasdump.c:436:OF */ extern enum circ_ind do_hash (object obj, int dot); /* (obj, dot) object obj; int dot; */
/* fasdump.c:488:OF */ extern object write_fasd_top (object obj, object x); /* (obj, x) object obj; object x; */
/* fasdump.c:511:OF */ extern object read_fasd_top (object x); /* (x) object x; */
/* fasdump.c:558:OF */ extern object open_fasd (object stream, object direction, object eof, object tabl); /* (stream, direction, eof, tabl) object stream; object direction; object eof; object tabl; */
/* fasdump.c:610:OF */ extern object close_fasd (object ar); /* (ar) object ar; */
/* fasdump.c:646:OF */ extern void write_fasd (object obj); /* (obj) object obj; */
/* fasdump.c:874:OF */ extern object fasd_patch_sharp (object x, int depth); /* (x, depth) object x; int depth; */
/* fasdump.c:947:OF */ extern enum circ_ind is_it_there (object x); /* (x) object x; */
/* fasdump.c:1031:OF */ extern object find_sharing_top (object x, object table); /* (x, table) object x; object table; */
/* fasdump.c:1043:OF */ extern object read_fasd (int i); /* (i) int i; */
/* fasdump.c:1052:OF */ extern object lisp_eval (object x); /* (x) object x; */
/* fasdump.c:1095:OF */ extern void read_fasd1 (int i, object *loc); /* (i, loc) int i; object *loc; */
/* fasdump.c:1452:OF */ extern void clrhash (object table); /* (table) object table; */
/* fasdump.c:1465:OF */ extern object read_fasl_vector (object in); /* (in) object in; */
/* fasdump.c:1529:OF */ extern void IreadFasdData (void); /* () */
/* fasdump.c:1558:OF */ extern void init_fasdump (void); /* () */
/* fat_string.c:25:OF */ extern void siLprofile (void); /* () */
/* fat_string.c:29:OF */ extern object fSprofile (object start_address, object scale); /* (start_address, scale) object start_address; object scale; */
/* fat_string.c:44:OF */ extern void siLfunction_start (void); /* () */
/* fat_string.c:46:OF */ extern object fSfunction_start (object funobj); /* (funobj) object funobj; */
/* fat_string.c:153:OF */ extern void cfuns_to_combined_table (unsigned int n); /* (n) unsigned int n; */
/* fat_string.c:201:OF */ extern int address_node_compare (const void *node1, const void *node2); /* (node1, node2) char *node1; char *node2; */
/* fat_string.c:238:OF */ extern void siLset_up_combined (void); /* () */
/* fat_string.c:240:OF *//*   extern object fSset_up_combined (__builtin_va_alist_t __builtin_va_alist); */ /* (__builtin_va_alist) __builtin_va_alist_t __builtin_va_alist; */
/* fat_string.c:310:OF */ extern int prof_ind (unsigned int address, int scale); /* (address, scale) unsigned int address; int scale; */
/* fat_string.c:318:OF */ extern int string_sum (register unsigned char *aar, unsigned int dim); /* (aar, dim) register unsigned char *aar; unsigned int dim; */
/* fat_string.c:329:OF */ extern void siLdisplay_profile (void); /* () */
/* fat_string.c:331:OF */ extern object fSdisplay_profile (object start_addr, object scal); /* (start_addr, scal) object start_addr; object scal; */
/* fat_string.c:392:OF */ extern void siLarray_adress (void); /* () */
/* fat_string.c:394:OF */ extern object fSarray_adress (object array); /* (array) object array; */
/* fat_string.c:435:OF */ extern void init_fat_string (void); /* () */
/* format.c:135:OF */ extern int fmt_tempstr (int s); /* (s) int s; */
/* format.c:141:OF */ extern int ctl_advance (void); /* () */
/* format.c:149:OF */ extern object fmt_advance (void); /* () */
/* format.c:157:OF */ extern void format (object fmt_stream0, int ctl_origin0, int ctl_end0); /* (fmt_stream0, ctl_origin0, ctl_end0) object fmt_stream0; int ctl_origin0; int ctl_end0; */
/* format.c:404:OF */ extern int fmt_skip (void); /* () */
/* format.c:452:OF */ extern void fmt_max_param (int n); /* (n) int n; */
/* format.c:459:OF */ extern void fmt_not_colon (bool colon); /* (colon) bool colon; */
/* format.c:466:OF */ extern void fmt_not_atsign (bool atsign); /* (atsign) bool atsign; */
/* format.c:473:OF */ extern void fmt_not_colon_atsign (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:480:OF */ extern void fmt_set_param (int i, int *p, int t, int v); /* (i, p, t, v) int i; int *p; int t; int v; */
/* format.c:492:OF */ extern void fmt_ascii (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:530:OF */ extern void fmt_S_expression (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:568:OF */ extern void fmt_decimal (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:581:OF */ extern void fmt_binary (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:594:OF */ extern void fmt_octal (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:607:OF */ extern void fmt_hexadecimal (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:620:OF */ extern void fmt_radix (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:701:OF */ extern void fmt_integer (object x, bool colon, bool atsign, int radix, int mincol, int padchar, int commachar); /* (x, colon, atsign, radix, mincol, padchar, commachar) object x; bool colon; bool atsign; int radix; int mincol; int padchar; int commachar; */
/* format.c:760:OF */ extern int fmt_nonillion (int s, int i, bool b, bool o, int t); /* (s, i, b, o, t) int s; int i; bool b; bool o; int t; */
/* format.c:783:OF */ extern int fmt_thousand (int s, int i, bool b, bool o, int t); /* (s, i, b, o, t) int s; int i; bool b; bool o; int t; */
/* format.c:842:OF */ extern void fmt_write_numeral (int s, int i); /* (s, i) int s; int i; */
/* format.c:848:OF */ extern void fmt_write_ordinal (int s, int i); /* (s, i) int s; int i; */
/* format.c:854:OF */ extern void fmt_roman (int i, int one, int five, int ten, int colon); /* (i, one, five, ten, colon) int i; int one; int five; int ten; int colon; */
/* format.c:877:OF */ extern void fmt_plural (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:898:OF */ extern void fmt_character (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:919:OF */ extern void fmt_fix_float (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1075:OF */ extern int fmt_exponent_length (int e); /* (e) int e; */
/* format.c:1089:OF */ extern void fmt_exponent (int e); /* (e) int e; */
/* format.c:1101:OF */ extern void fmt_exponent1 (int e); /* (e) int e; */
/* format.c:1110:OF */ extern void fmt_exponential_float (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1312:OF */ extern void fmt_general_float (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1402:OF */ extern void fmt_dollars_float (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1487:OF */ extern void fmt_percent (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1504:OF */ extern void fmt_ampersand (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1522:OF */ extern void fmt_bar (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1535:OF */ extern void fmt_tilde (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1548:OF */ extern void fmt_newline (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1564:OF */ extern void fmt_tabulate (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1600:OF */ extern void fmt_asterisk (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1624:OF */ extern void fmt_indirection (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1666:OF */ extern void fmt_case (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1734:OF */ extern void fmt_conditional (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1823:OF */ extern void fmt_iteration (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:1947:OF */ extern void fmt_justification (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:2045:OF */ extern void fmt_up_and_out (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:2074:OF */ extern void fmt_semicolon (bool colon, bool atsign); /* (colon, atsign) bool colon; bool atsign; */
/* format.c:2084:OF */ extern void Lformat (void); /* () */
/* format.c:2086:OF *//*   extern object fLformat (object strm, object control, __builtin_va_alist_t __builtin_va_alist); */ /* (strm, control, __builtin_va_alist) object strm; object control; __builtin_va_alist_t __builtin_va_alist; */
/* format.c:2161:OF */ extern void fmt_error (char *s); /* (s) char *s; */
/* format.c:2171:OF */ extern void init_format (void); /* () */
/* frame.c:32:OF */ extern void unwind (frame_ptr fr, object tag); /* (fr, tag) frame_ptr fr; object tag; */
/* frame.c:58:OF */ extern frame_ptr frs_sch (object frame_id); /* (frame_id) object frame_id; */
/* frame.c:69:OF */ extern frame_ptr frs_sch_catch (object frame_id); /* (frame_id) object frame_id; */
/* funlink.c:19:OF */ extern void call_or_link (object sym, void **link); /* (sym, link) object sym; void **link; */
/* funlink.c:41:OF */ extern void call_or_link_closure (object sym, void **link, object *ptr); /* (sym, link, ptr) object sym; void **link; object *ptr; */
/* funlink.c:77:OF */ extern int vpush_extend (void *item, object ar); /* (item, ar) void *item; object ar; */
/* funlink.c:103:OF */ extern void delete_link (void *address, object link_ar); /* (address, link_ar) void *address; object link_ar; */
/* funlink.c:128:OF *//*   extern object fSuse_fast_links (object flag, __builtin_va_alist_t __builtin_va_alist); */ /* (flag, __builtin_va_alist) object flag; __builtin_va_alist_t __builtin_va_alist; */
/* funlink.c:211:OF */ extern int clean_link_array (object *ar, object *ar_end); /* (ar, ar_end) object *ar; object *ar_end; */
/* funlink.c:230:OF */ extern object c_apply_n (object (*fn)(), int n, object *x); /* (fn, n, x) long int (*fn)(); int n; object *x; */
/* funlink.c:564:OF */ extern object call_proc (object sym, void **link, int argd, va_list ll); /* (sym, link, argd, ll) object sym; void **link; int argd; va_list ll; */
/* funlink.c:689:OF */ extern object call_vproc (object sym, void *link, va_list ll); /* (sym, link, ll) object sym; void *link; va_list ll; */
/* funlink.c:696:OF */ extern object call_proc0 (object sym, void *link); /* (sym, link) object sym; void *link; */
/* funlink.c:728:OF *//*   extern object ifuncall (object sym, int n, __builtin_va_alist_t __builtin_va_alist); */ /* (sym, n, __builtin_va_alist) object sym; int n; __builtin_va_alist_t __builtin_va_alist; */
/* funlink.c:757:OF *//*   extern object imfuncall (object sym, int n, __builtin_va_alist_t __builtin_va_alist); */ /* (sym, n, __builtin_va_alist) object sym; int n; __builtin_va_alist_t __builtin_va_alist; */
/* funlink.c:784:OF */ extern int clear_stack (object *beg, object *limit); /* (beg, limit) object *beg; object *limit; */
/* funlink.c:793:OF */ extern object set_mv (int i, object val); /* (i, val) int i; object val; */
/* funlink.c:803:OF */ extern object mv_ref (unsigned int i); /* (i) unsigned int i; */
/* funlink.c:821:OF */ extern void init_links (void); /* () */
/* gbc.c:151:OF */ extern void enter_mark_origin (object *p); /* (p) object *p; */
/* gbc.c:162:OF */ extern void enter_mark_origin_block (object *p, int n); /* (p, n) object *p; int n; */
/* gbc.c:172:OF */ extern void mark_cons (object x); /* (x) object x; */
/* gbc.c:209:OF */ extern void mark_object (object x); /* (x) object x; */
/* gbc.c:638:OF */ extern void mark_stack_carefully (void *top, void *bottom, int offset); /* (top, bottom, offset) long int *top; long int *bottom; int offset; */
/* gbc.c:677:OF */ extern void mark_phase (void); /* () */
/* gbc.c:764:OF */ extern void mark_c_stack (jmp_buf env1, int n, void (*fn) (void *,void *,int)); /* (env1, n, fn) jmp_buf (*env1); int n; int (*fn)(); */
/* gbc.c:796:OF */ extern void sweep_phase (void); /* () */
/* gbc.c:888:OF */ extern void contblock_sweep_phase (void); /* () */
/* gbc.c:938:OF */ extern void GBC (enum type t); /* (t) enum type t; */
/* gbc.c:1238:OF */ extern void siLroom_report (void); /* () */
/* gbc.c:1276:OF */ extern void siLreset_gbc_count (void); /* () */
/* gbc.c:1293:OF */ extern char *copy_relblock (char *p, int s); /* (p, s) char *p; int s; */
/* gbc.c:1309:OF */ extern void mark_contblock (void *p, int s); /* (p, s) char *p; int s; */
/* gbc.c:1324:OF */ extern void Lgbc (void); /* () */
/* gbc.c:1326:OF */ extern object fLgbc (object x0); /* (x0) object x0; */
/* gbc.c:1340:OF */ extern void siLgbc_time (void); /* () */
/* sgbc.c:44:OF */ extern void sgc_mark_cons (object x); /* (x) object x; */
/* sgbc.c:96:OF */ extern void sgc_mark_object1 (object x); /* (x) object x; */
/* sgbc.c:569:OF */ extern void sgc_mark_stack_carefully (void *top, void *bottom, int offset); /* (top, bottom, offset) long int *top; long int *bottom; int offset; */
/* sgbc.c:608:OF */ extern void sgc_mark_phase (void); /* () */
/* sgbc.c:716:OF */ extern void sgc_sweep_phase (void); /* () */
/* sgbc.c:836:OF */ extern void sgc_contblock_sweep_phase (void); /* () */
/* sgbc.c:911:OF */ extern int sgc_count_writable (int end); /* (end) int end; */
/* sgbc.c:924:OF */ extern int sgc_count_type (int t); /* (t) int t; */
/* sgbc.c:938:OF */ extern int sgc_start (void); /* () */
/* sgbc.c:1068:OF */ extern int sgc_quit (void); /* () */
/* sgbc.c:1131:OF */ extern void make_writable (int beg, int i); /* (beg, i) int beg; int i; */
#include <signal.h>
/* sgbc.c:1149:OF */ extern void memprotect_handler (int sig, int code, struct sigcontext *scp, char *addr); /* (sig, code, scp, addr) int sig; int code; struct sigcontext *scp; char *addr; */
/* sgbc.c:1202:OF */ extern void sgc_mprotect (int pbeg, int n, int writable); /* (pbeg, n, writable) int pbeg; int n; int writable; */
/* sgbc.c:1220:OF */ extern void fix_for_page_multiple (int beg, int end); /* (beg, end) int beg; int end; */
/* sgbc.c:1246:OF */ extern void memory_protect (int on); /* (on) int on; */
/* sgbc.c:1292:OF */ extern void siLsgc_on (void); /* () */
/* sgbc.c:1306:OF */ extern void perm_writable (char *p, int n); /* (p, n) char *p; int n; */
/* sgbc.c:1321:OF */ extern void system_error (void); /* () */
/* gbc.c:1357:OF */ extern void init_GBC (void); /* () */
/* gnumalloc.c:286:OF */ extern void malloc_init (char *start, void (*warnfun) (/* ??? */)); /* (start, warnfun) char *start; void (*warnfun)(); */
/* gnumalloc.c:301:OF */ extern int malloc_usable_size (char *mem); /* (mem) char *mem; */
/* gnumalloc.c:461:OF */ /*  extern void *malloc (size_t n); */ /* (n) unsigned int n; */
/* gnumalloc.c:529:OF */ /*  extern int free (char *mem); */ /* (mem) char *mem; */
/* gnumalloc.c:577:OF */ /*  extern char *realloc (char *mem, register unsigned int n); */ /* (mem, n) char *mem; register unsigned int n; */
/* gnumalloc.c:639:OF */ /*  extern char *memalign (unsigned int alignment, unsigned int size); */ /* (alignment, size) unsigned int alignment; unsigned int size; */
/* gnumalloc.c:666:OF */ extern void *valloc (size_t size); /* (size) int size; */
/* gnumalloc.c:737:OF */ extern int get_lim_data (void); /* () */
/* grab_defs.c:35:OF */ extern int read_some (char *buf, int n, int start_ch, int copy); /* (buf, n, start_ch, copy) char *buf; int n; int start_ch; int copy; */
/* grab_defs.c:71:OF */ /*  extern int main (void); */ /* () */
/* init_pari.c:12:OF */ extern void init_pari (void); /* () */
/* iteration.c:31:OF */ extern void Floop (object form); /* (form) object form; */
/* iteration.c:85:OF */ extern void do_var_list (object var_list); /* (var_list) object var_list; */
/* iteration.c:127:OF */ extern void Fdo (object arg); /* (arg) object arg; */
/* iteration.c:212:OF */ extern void FdoA (object arg); /* (arg) object arg; */
/* iteration.c:291:OF */ extern void Fdolist (object arg); /* (arg) object arg; */
/* iteration.c:373:OF */ extern void Fdotimes (object arg); /* (arg) object arg; */
/* iteration.c:457:OF */ extern void init_iteration (void); /* () */
/* let.c:29:OF */ extern void let_var_list (object var_list); /* (var_list) object var_list; */
/* let.c:62:OF */ extern void Flet (object form); /* (form) object form; */
/* let.c:91:OF */ extern void FletA (object form); /* (form) object form; */
/* let.c:120:OF */ extern void Fmultiple_value_bind (object form); /* (form) object form; */
/* let.c:175:OF */ extern void Fcompiler_let (object form); /* (form) object form; */
/* let.c:211:OF */ extern void Fflet (object args); /* (args) object args; */
/* let.c:245:OF */ extern void Flabels (object args); /* (args) object args; */
/* let.c:287:OF */ extern void Fmacrolet (object args); /* (args) object args; */
/* let.c:321:OF */ extern void init_let (void); /* () */
/* lex.c:34:OF */ extern object assoc_eq (object key, object alist); /* (key, alist) object key; object alist; */
/* lex.c:47:OF */ extern void lex_fun_bind (object name, object fun); /* (name, fun) object name; object fun; */
/* lex.c:59:OF */ extern void lex_macro_bind (object name, object exp_fun); /* (name, exp_fun) object name; object exp_fun; */
/* lex.c:70:OF */ extern void lex_tag_bind (object tag, object id); /* (tag, id) object tag; object id; */
/* lex.c:82:OF */ extern void lex_block_bind (object name, object id); /* (name, id) object name; object id; */
/* lex.c:95:OF */ extern object lex_tag_sch (object tag); /* (tag) object tag; */
/* lex.c:110:OF */ extern object lex_block_sch (object name); /* (name) object name; */
/* lex.c:125:OF */ extern void init_lex (void); /* () */
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
/* macros.c:34:OF */ extern void siLdefine_macro (void); /* () */
/* macros.c:72:OF */ extern void Fdefmacro (object form); /* (form) object form; */
/* macros.c:139:OF */ extern object Imacro_expand1 (object exp_fun, object form); /* (exp_fun, form) object exp_fun; object form; */
/* macros.c:152:OF */ extern object macro_def (object form); /* (form) object form; */
/* macros.c:173:OF */ extern void Lmacroexpand (void); /* () */
/* macros.c:175:OF *//*   extern object fLmacroexpand (object form, __builtin_va_alist_t __builtin_va_alist); */ /* (form, __builtin_va_alist) object form; __builtin_va_alist_t __builtin_va_alist; */
/* macros.c:224:OF */ extern void Lmacroexpand_1 (void); /* () */
/* macros.c:265:OF */ extern object macro_expand (object form); /* (form) object form; */
/* macros.c:344:OF */ extern void init_macros (void); /* () */
/* main.c:111:OF */ extern int main (int argc, char **argv, char **envp); /* (argc, argv, envp) int argc; char **argv; char **envp; */
/* main.c:346:OF */ extern void install_segmentation_catcher (void); /* () */
/* main.c:359:OF */ extern void error (char *s); /* (s) char *s; */
/* main.c:377:OF */ extern void initlisp (void); /* () */
/* main.c:519:OF */ extern object vs_overflow (void); /* () */
/* main.c:528:OF */ extern void bds_overflow (void); /* () */
/* main.c:537:OF */ extern void frs_overflow (void); /* () */
/* main.c:546:OF */ extern void ihs_overflow (void); /* () */
/* main.c:556:OF */ extern void segmentation_catcher (int); /* () */
/* main.c:568:OF */ extern void cs_overflow (void); /* () */
/* main.c:583:OF */ extern void end_of_file (void); /* () */
/* main.c:587:OF */ extern void Lby (void); /* () */
/* main.c:589:OF *//*   extern object fLbye (__builtin_va_alist_t __builtin_va_alist); */ /* (__builtin_va_alist) __builtin_va_alist_t __builtin_va_alist; */
/* main.c:607:OF */ extern void Lquit(void); /* () */
/* main.c:609:OF *//*   extern object fLquit (__builtin_va_alist_t __builtin_va_alist); */ /* (__builtin_va_alist) __builtin_va_alist_t __builtin_va_alist; */
/* main.c:612:OF */ extern void Lexit(void); /* () */
/* main.c:614:OF *//*   extern object fLexit (__builtin_va_alist_t __builtin_va_alist); */ /* (__builtin_va_alist) __builtin_va_alist_t __builtin_va_alist; */
/* main.c:619:OF */ extern int c_trace (void); /* () */
/* main.c:626:OF */ extern void siLargc (void); /* () */
/* main.c:632:OF */ extern void siLargv (void); /* () */
/* main.c:645:OF */ extern void siLgetenv (void); /* () */
/* main.c:673:OF */ extern void siLmark_vs (void); /* () */
/* main.c:680:OF */ extern void siLcheck_vs (void); /* () */
/* main.c:689:OF */ extern object siLcatch_fatal (int i); /* (i) int i; */
/* main.c:695:OF */ extern void siLreset_stack_limits (void); /* (arg) int arg; */
/* main.c:738:OF */ extern int multiply_stacks (int m); /* (m) int m; */
/* main.c:772:OF */ extern void siLinit_system (void); /* () */
/* main.c:779:OF */ extern void siLaddress (void); /* () */
/* main.c:785:OF */ extern void siLnani (void); /* () */
/* main.c:791:OF */ extern void siLinitialization_failure (void); /* () */
/* main.c:797:OF */ extern void Lidentity(void); /* () */
/* main.c:799:OF */ extern object fLidentity (object x0); /* (x0) object x0; */
/* main.c:805:OF */ extern void Llisp_implementation_version(void); /* () */
/* main.c:807:OF */ extern object fLlisp_implementation_version (void); /* () */
/* main.c:815:OF */ extern void siLsave_system (void); /* () */
/* main.c:870:OF */ extern void init_main (void); /* () */
/* makefun.c:10:OF */ extern object MakeAfun (object (*addr)(object,object), unsigned int argd, object data); /* (addr, argd, data) int (*addr)(); unsigned int argd; object data; */
/* makefun.c:28:OF */ extern object fSmakefun (object sym, object (*addr) (/* ??? */), unsigned int argd); /* (sym, addr, argd) object sym; object (*addr)(); unsigned int argd; */
/* makefun.c:40:OF *//*   extern object ImakeClosure (object (*addr) (), int argd, int n, __builtin_va_alist_t __builtin_va_alist); */ /* (addr, argd, n, __builtin_va_alist) object (*addr)(); int argd; int n; __builtin_va_alist_t __builtin_va_alist; */
/* makefun.c:52:OF */ extern void IsetClosure (object x, int n, va_list ap); /* (x, n, ap) object x; int n; va_list ap; */
/* makefun.c:78:OF *//*   extern object fSinitfun (object sym, object addr_ind, object argd, __builtin_va_alist_t __builtin_va_alist); */ /* (sym, addr_ind, argd, __builtin_va_alist) object sym; object addr_ind; object argd; __builtin_va_alist_t __builtin_va_alist; */
/* makefun.c:98:OF *//*   extern object fSinitmacro (__builtin_va_alist_t __builtin_va_alist); */ /* (__builtin_va_alist) __builtin_va_alist_t __builtin_va_alist; */
/* makefun.c:113:OF */ extern object fSset_key_struct (object key_struct_ind); /* (key_struct_ind) object key_struct_ind; */
/* makefun.c:122:OF */ extern void SI_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:131:OF */ extern void LISP_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:141:OF *//*   extern object MakeClosure (int n, int argd, object data, int (*fn) (), __builtin_va_alist_t __builtin_va_alist); */ /* (n, argd, data, fn, __builtin_va_alist) int n; int argd; object data; int (*fn)(); __builtin_va_alist_t __builtin_va_alist; */
/* makefun.c:167:OF */ extern object fSinvoke (object x); /* (x) object x; */
/* mapfun.c:53:OF */ extern void Lmapcar (void); /* () */
/* mapfun.c:97:OF */ extern void Lmaplist (void); /* () */
/* mapfun.c:141:OF */ extern void Lmapc (void); /* () */
/* mapfun.c:181:OF */ extern void Lmapl (void); /* () */
/* mapfun.c:221:OF */ extern void Lmapcan (void); /* () */
/* mapfun.c:272:OF */ extern void Lmapcon (void); /* () */
/* mapfun.c:324:OF */ extern void init_mapfun (void); /* () */
/* multival.c:32:OF */ extern void Lvalues (void); /* () */
/* multival.c:37:OF */ extern void Lvalues_list (void); /* () */
/* multival.c:53:OF */ extern void Fmultiple_value_list (object form); /* (form) object form; */
/* multival.c:74:OF */ extern void Fmultiple_value_call (object form); /* (form) object form; */
/* multival.c:104:OF */ extern void Fmultiple_value_prog1 (object forms); /* (forms) object forms; */
/* multival.c:134:OF */ extern void init_multival (void); /* () */
/* nfunlink.c:72:OF */ extern object Icall_proc (object fun_name, int link_desk, object (**link_loc) (/* ??? */), va_list ap); /* (fun_name, link_desk, link_loc, ap) object fun_name; int link_desk; object (**link_loc)(); va_list ap; */
/* nfunlink.c:176:OF */ extern float Icall_proc_float (object fun_name, int link_desk, object (**link_loc) (/* ??? */), va_list ap); /* (fun_name, link_desk, link_loc, ap) object fun_name; int link_desk; object (**link_loc)(); va_list ap; */
/* nfunlink.c:190:OF */ extern object IapplyVector (object fun, int nargs, object *base); /* (fun, nargs, base) object fun; int nargs; object *base; */
/* nfunlink.c:269:OF */ extern void Iinvoke_c_function_from_value_stack (object (*f)(), int fargd); /* (f, fargd) object (*f)(); int fargd; */
/* nfunlink.c:321:OF */ extern int print_fargd (int fargd); /* (fargd) int fargd; */
/* nsocket.c:190:OF */ extern int CreateSocket (int port, char *host, int server, char *myaddr, int myport, int async); /* (port, host, server, myaddr, myport, async) int port; char *host; int server; char *myaddr; int myport; int async; */
/* nsocket.c:329:OF */ extern object fSgetpeername (object sock); /* (sock) object sock; */
/* nsocket.c:353:OF */ extern object fSgetsockname (object sock); /* (sock) object sock; */
/* nsocket.c:385:OF */ extern object fSset_blocking (object sock, object setBlocking); /* (sock, setBlocking) object sock; object setBlocking; */
/* nsocket.c:484:OF */ extern int getOneChar (FILE *fp); /* (fp) FILE *fp; */
/* nsocket.c:539:OF */ extern void ungetCharGclSocket (int c, object strm); /* (c, strm) int c; object strm; */
/* nsocket.c:575:OF */ extern int TcpOutputProc (int fd, char *buf, int toWrite, int *errorCodePtr); /* (fd, buf, toWrite, errorCodePtr) int fd; char *buf; int toWrite; int *errorCodePtr; */
/* nsocket.c:592:OF */ extern void tcpCloseSocket (int fd); /* (fd) int fd; */
/* nsocket.c:598:OF */ extern void doReverse (char *s, int n); /* (s, n) char *s; int n; */
/* nsocket.c:619:OF */ extern int getCharGclSocket (object strm, object block); /* (strm, block) object strm; object block; */
/* num_arith.c:31:OF */ extern object fixnum_add (int i, int j); /* (i, j) int i; int j; */
/* num_arith.c:48:OF */ extern object fixnum_sub (int i, int j); /* (i, j) int i; int j; */
/* num_arith.c:66:OF */ extern object fixnum_times (int i, int j); /* (i, j) int i; int j; */
/* num_arith.c:74:OF */ extern object number_to_complex (object x); /* (x) object x; */
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
/* num_arith.c:941:OF */ extern void Lone_plus (void); /* () */
/* num_arith.c:950:OF */ extern void Lone_minus (void); /* () */
/* num_arith.c:959:OF */ extern void Lconjugate (void); /* () */
/* num_arith.c:974:OF */ extern void Lgcd (void); /* () */
/* num_arith.c:995:OF */ extern void Llcm (void); /* () */
/* num_arith.c:1024:OF */ extern void zero_divisor (void); /* () */
/* num_arith.c:1029:OF */ extern void init_num_arith (void); /* () */
/* num_co.c:98:OF */ extern void integer_decode_double (double d, int *hp, int *lp, int *ep, int *sp); /* (d, hp, lp, ep, sp) double d; int *hp; int *lp; int *ep; int *sp; */
/* num_co.c:187:OF */ extern void integer_decode_float (double d, int *mp, int *ep, int *sp); /* (d, mp, ep, sp) double d; int *mp; int *ep; int *sp; */
/* num_co.c:231:OF */ extern int double_exponent (double d); /* (d) double d; */
/* num_co.c:258:OF */ extern double set_exponent (double d, int e); /* (d, e) double d; int e; */
/* num_co.c:292:OF */ extern object double_to_integer (double d); /* (d) double d; */
/* num_co.c:357:OF */ extern object num_remainder (object x, object y, object q); /* (x, y, q) object x; object y; object q; */
/* num_co.c:372:OF */ extern void Lfloat (void); /* () */
/* num_co.c:424:OF */ extern void Lnumerator (void); /* () */
/* num_co.c:432:OF */ extern void Ldenominator (void); /* () */
/* num_co.c:442:OF */ extern void Lfloor (void); /* () */
/* num_co.c:563:OF */ extern void Lceiling (void); /* () */
/* num_co.c:684:OF */ extern void Ltruncate (void); /* () */
/* num_co.c:766:OF */ extern void Lround (void); /* () */
/* num_co.c:896:OF */ extern void Lmod (void); /* () */
/* num_co.c:903:OF */ extern void Lrem (void); /* () */
/* num_co.c:911:OF */ extern void Ldecode_float (void); /* () */
/* num_co.c:944:OF */ extern void Lscale_float (void); /* () */
/* num_co.c:987:OF */ extern void Lfloat_radix (void); /* () */
/* num_co.c:1008:OF */ extern void Lfloat_sign (void); /* () */
/* num_co.c:1046:OF */ extern void Lfloat_digits (void); /* () */
/* num_co.c:1056:OF */ extern void Lfloat_precision (void); /* () */
/* num_co.c:1089:OF */ extern void Linteger_decode_float (void); /* () */
/* num_co.c:1114:OF */ extern void Lcomplex (void); /* () */
/* num_co.c:1136:OF */ extern void Lrealpart (void); /* () */
/* num_co.c:1147:OF */ extern void Limagpart (void); /* () */
/* num_co.c:1185:OF */ extern void init_num_co (void); /* () */
/* num_comp.c:40:OF */ extern int number_compare (object x, object y); /* (x, y) object x; object y; */
/* num_comp.c:207:OF */ extern void Lall_the_same (void); /* () */
/* num_comp.c:226:OF */ extern void Lall_different (void); /* () */
/* num_comp.c:250:OF */ extern void Lnumber_compare (int s, int t); /* (s, t) int s; int t; */
/* num_comp.c:269:OF */ extern void Lmonotonically_increasing (void); /* () */
/* num_comp.c:270:OF */ extern void Lmonotonically_decreasing (void); /* () */
/* num_comp.c:271:OF */ extern void Lmonotonically_nondecreasing (void); /* () */
/* num_comp.c:272:OF */ extern void Lmonotonically_nonincreasing (void); /* () */
/* num_comp.c:275:OF */ extern void Lmax (void); /* () */
/* num_comp.c:292:OF */ extern void Lmin (void); /* () */
/* num_comp.c:309:OF */ extern void init_num_comp (void); /* () */
/* gmp_num_log.c:13:OF */ extern object log_op (int (*op) (/* ??? */), void (*mp_op) (/* ??? */)); /* (op, mp_op) int (*op)(); void (*mp_op)(); */
/* gmp_num_log.c:52:OF */ extern void mp_and_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:60:OF */ extern void mp_eqv_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:70:OF */ extern void mp_nand_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:79:OF */ extern void mp_nor_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:88:OF */ extern void mp_andc1_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:97:OF */ extern void mp_andc2_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:106:OF */ extern void mp_orc1_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:115:OF */ extern void mp_orc2_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:124:OF */ extern void mp_b_clr_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:132:OF */ extern void mp_b_set_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:140:OF */ extern void mp_b_1_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:148:OF */ extern void mp_b_2_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:156:OF */ extern void mp_b_c1_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:164:OF */ extern void mp_b_c2_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:175:OF */ extern int big_bitp (object x, int p); /* (x, p) object x; int p; */
/* gmp_num_log.c:187:OF */ extern void mp_ior_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:195:OF */ extern void mp_xor_op (__mpz_struct *u, __mpz_struct *i, __mpz_struct *j); /* (u, i, j) __mpz_struct *u; __mpz_struct *i; __mpz_struct *j; */
/* gmp_num_log.c:203:OF */ extern int mpz_bitcount (__mpz_struct *x); /* (x) __mpz_struct *x; */
/* gmp_num_log.c:218:OF */ extern int mpz_bitlength (__mpz_struct *x); /* (x) __mpz_struct *x; */
/* num_log.c:39:OF */ extern int ior_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:46:OF */ extern int xor_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:53:OF */ extern int and_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:60:OF */ extern int eqv_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:67:OF */ extern int nand_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:74:OF */ extern int nor_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:81:OF */ extern int andc1_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:88:OF */ extern int andc2_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:95:OF */ extern int orc1_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:102:OF */ extern int orc2_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:109:OF */ extern int b_clr_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:116:OF */ extern int b_set_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:123:OF */ extern int b_1_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:130:OF */ extern int b_2_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:137:OF */ extern int b_c1_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:144:OF */ extern int b_c2_op (int i, int j); /* (i, j) int i; int j; */
/* num_log.c:173:OF */ extern int fix_bitp (object x, int p); /* (x, p) object x; int p; */
/* num_log.c:186:OF */ extern int count_int_bits (int x); /* (x) int x; */
/* num_log.c:197:OF */ extern int count_bits (object x); /* (x) object x; */
/* num_log.c:224:OF */ extern object shift_integer (object x, int w); /* (x, w) object x; int w; */
/* num_log.c:245:OF */ extern int int_bit_length (int i); /* (i) int i; */
/* num_log.c:258:OF */ extern void Llogior (void); /* () */
/* num_log.c:279:OF */ extern void Llogxor (void); /* () */
/* num_log.c:299:OF */ extern void Llogand (void); /* () */
/* num_log.c:319:OF */ extern void Llogeqv (void); /* () */
/* num_log.c:339:OF */ extern void Lboole (void); /* () */
/* num_log.c:380:OF */ extern void Llogbitp (void); /* () */
/* num_log.c:420:OF */ extern void Lash (void); /* () */
/* num_log.c:469:OF */ extern void Llogcount (void); /* () */
/* num_log.c:482:OF */ extern void Linteger_length (void); /* () */
/* num_log.c:503:OF */ extern object bitand (object a, object b, object c); /* (a, b, c) object a; object b; object c; */
/* num_log.c:518:OF */ extern object bitior (object a, object b, object c); /* (a, b, c) object a; object b; object c; */
/* num_log.c:534:OF */ extern int bvequal (object a, object b); /* (a, b) object a; object b; */
/* num_log.c:549:OF */ extern void init_num_log (void); /* () */
/* num_log.c:585:OF */ extern void siLbit_array_op (void); /* () */
/* num_pred.c:31:OF */ extern int number_zerop (object x); /* (x) object x; */
/* num_pred.c:67:OF */ extern int number_plusp (object x); /* (x) object x; */
/* num_pred.c:107:OF */ extern int number_minusp (object x); /* (x) object x; */
/* num_pred.c:147:OF */ extern int number_oddp (object x); /* (x) object x; */
/* num_pred.c:161:OF */ extern int number_evenp (object x); /* (x) object x; */
/* num_pred.c:175:OF */ extern void Lzerop (void); /* () */
/* num_pred.c:185:OF */ extern void Lplusp (void); /* () */
/* num_pred.c:195:OF */ extern void Lminusp (void); /* () */
/* num_pred.c:205:OF */ extern void Loddp (void); /* () */
/* num_pred.c:215:OF */ extern void Levenp (void); /* () */
/* num_pred.c:226:OF */ extern void _assure_in_memory (void *p); /* (p) void *p; */
/* num_pred.c:233:OF */ extern int lf_eqlp (double *p, double *q); /* (p, q) double *p; double *q; */
/* num_pred.c:240:OF */ extern void init_num_pred (void); /* () */
/* num_rand.c:35:OF */ extern object rando (object x, object rs); /* (x, rs) object x; object rs; */
/* num_rand.c:67:OF */ extern object make_random_state (object rs); /* (rs) object rs; */
/* num_rand.c:100:OF */ extern void advance_random_state (object rs); /* (rs) object rs; */
/* num_rand.c:111:OF */ extern void Lrandom (void); /* () */
/* num_rand.c:128:OF */ extern void Lmake_random_state (void); /* () */
/* num_rand.c:142:OF */ extern void Lrandom_state_p (void); /* () */
/* num_rand.c:151:OF */ extern void init_num_rand (void); /* () */
/* num_sfun.c:29:OF */ extern int fixnum_expt (int x, int y); /* (x, y) int x; int y; */
/* num_sfun.c:46:OF */ extern object number_exp (object x); /* (x) object x; */
/* num_sfun.c:91:OF */ extern object number_expt (object x, object y); /* (x, y) object x; object y; */
/* num_sfun.c:165:OF */ extern object number_nlog (object x); /* (x) object x; */
/* num_sfun.c:219:OF */ extern object number_log (object x, object y); /* (x, y) object x; object y; */
/* num_sfun.c:239:OF */ extern object number_sqrt (object x); /* (x) object x; */
/* num_sfun.c:276:OF */ extern object number_atan2 (object y, object x); /* (y, x) object y; object x; */
/* num_sfun.c:313:OF */ extern object number_atan (object y); /* (y) object y; */
/* num_sfun.c:342:OF */ extern object number_sin (object x); /* (x) object x; */
/* num_sfun.c:389:OF */ extern object number_cos (object x); /* (x) object x; */
/* num_sfun.c:436:OF */ extern object number_tan (object x); /* (x) object x; */
/* num_sfun.c:453:OF */ extern void Lexp (void); /* () */
/* num_sfun.c:460:OF */ extern void Lexpt (void); /* () */
/* num_sfun.c:469:OF */ extern void Llog (void); /* () */
/* num_sfun.c:488:OF */ extern void Lsqrt (void); /* () */
/* num_sfun.c:495:OF */ extern void Lsin (void); /* () */
/* num_sfun.c:502:OF */ extern void Lcos (void); /* () */
/* num_sfun.c:509:OF */ extern void Ltan (void); /* () */
/* num_sfun.c:516:OF */ extern void Latan (void); /* () */
/* num_sfun.c:535:OF */ extern void init_num_sfun (void); /* () */
/* number.c:35:OF */ extern long int fixint (object x); /* (x) object x; */
/* number.c:44:OF */ extern int fixnnint (object x); /* (x) object x; */
/* number.c:59:OF */ extern object fSallocate_bigger_fixnum_range (int min, int max); /* (min, max) int min; int max; */
/* number.c:81:OF */ extern object make_fixnum (long i); /* (i) int i; */
/* number.c:102:OF */ extern object make_ratio (object num, object den); /* (num, den) object num; object den; */
/* number.c:144:OF */ extern object make_shortfloat (double f); /* (f) double f; */
/* number.c:157:OF */ extern object make_longfloat (longfloat f); /* (f) longfloat f; */
/* number.c:170:OF */ extern object make_complex (object r, object i); /* (r, i) object r; object i; */
/* number.c:229:OF */ extern double number_to_double (object x); /* (x) object x; */
/* number.c:254:OF */ extern void init_number (void); /* () */
/* peculiar.c:14:OF */ /*  extern int main (void); */ /* () */
/* predicate.c:33:OF */ extern void Lnull (void); /* () */
/* predicate.c:35:OF */ extern object fLnot (object x0); /* (x0) object x0; */
/* predicate.c:46:OF */ extern void Lsymbolp (void); /* () */
/* predicate.c:48:OF */ extern object fLsymbolp (object x0); /* (x0) object x0; */
/* predicate.c:59:OF */ extern void Latom (void); /* () */
/* predicate.c:61:OF */ extern object fLatom (object x0); /* (x0) object x0; */
/* predicate.c:72:OF */ extern void Lconsp (void); /* () */
/* predicate.c:74:OF */ extern object fLconsp (object x0); /* (x0) object x0; */
/* predicate.c:85:OF */ extern void Llistp (void); /* () */
/* predicate.c:87:OF */ extern object fLlistp (object x0); /* (x0) object x0; */
/* predicate.c:98:OF */ extern void Lnumberp (void); /* () */
/* predicate.c:100:OF */ extern object fLnumberp (object x0); /* (x0) object x0; */
/* predicate.c:115:OF */ extern void Lintegerp (void); /* () */
/* predicate.c:117:OF */ extern object fLintegerp (object x0); /* (x0) object x0; */
/* predicate.c:130:OF */ extern void Lrationalp (void); /* () */
/* predicate.c:132:OF */ extern object fLrationalp (object x0); /* (x0) object x0; */
/* predicate.c:148:OF */ extern object fLrealp (object x0); /* (x0) object x0; */
/* predicate.c:162:OF */ extern void Lfloatp (void); /* () */
/* predicate.c:164:OF */ extern object fLfloatp (object x0); /* (x0) object x0; */
/* predicate.c:176:OF */ extern void Lcomplexp (void); /* () */
/* predicate.c:178:OF */ extern object fLcomplexp (object x0); /* (x0) object x0; */
/* predicate.c:188:OF */ extern void Lcharacterp (void); /* () */
/* predicate.c:190:OF */ extern object fLcharacterp (object x0); /* (x0) object x0; */
/* predicate.c:200:OF */ extern void Lstringp (void); /* () */
/* predicate.c:202:OF */ extern object fLstringp (object x0); /* (x0) object x0; */
/* predicate.c:212:OF */ extern void Lbit_vector_p (void); /* () */
/* predicate.c:214:OF */ extern object fLbit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:224:OF */ extern void Lvectorp (void); /* () */
/* predicate.c:226:OF */ extern object fLvectorp (object x0); /* (x0) object x0; */
/* predicate.c:238:OF */ extern void Lsimple_string_p (void); /* () */
/* predicate.c:240:OF */ extern object fLsimple_string_p (object x0); /* (x0) object x0; */
/* predicate.c:253:OF */ extern void Lsimple_bit_vector_p (void); /* () */
/* predicate.c:255:OF */ extern object fLsimple_bit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:268:OF */ extern void Lsimple_vector_p (void); /* () */
/* predicate.c:270:OF */ extern object fLsimple_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:286:OF */ extern void Larrayp (void); /* () */
/* predicate.c:288:OF */ extern object fLarrayp (object x0); /* (x0) object x0; */
/* predicate.c:301:OF */ extern void Lpackagep (void); /* () */
/* predicate.c:303:OF */ extern object fLpackagep (object x0); /* (x0) object x0; */
/* predicate.c:313:OF */ extern void Lfunctionp (void); /* () */
/* predicate.c:315:OF */ extern object fLfunctionp (object x0); /* (x0) object x0; */
/* predicate.c:344:OF */ extern void Lcompiled_function_p (void); /* () */
/* predicate.c:346:OF */ extern object fLcompiled_function_p (object x0); /* (x0) object x0; */
/* predicate.c:365:OF */ extern void Lcommonp (void); /* () */
/* predicate.c:367:OF */ extern object fLcommonp (object x0); /* (x0) object x0; */
/* predicate.c:377:OF */ extern void Leq (void); /* () */
/* predicate.c:379:OF */ extern object fLeq (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:393:OF */ extern int eql (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:453:OF */ extern void Leql (void); /* () */
/* predicate.c:455:OF */ extern object fLeql (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:469:OF */ extern int equal (register object x, register object y); /* (x, y) register object x; register object y; */
/* predicate.c:541:OF */ extern void Lequal (void); /* () */
/* predicate.c:543:OF */ extern object fLequal (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:557:OF */ extern bool equalp (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:679:OF */ extern void Lequalp (void); /* () */
/* predicate.c:681:OF */ extern object fLequalp (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:693:OF */ extern void Fand (object args); /* (args) object args; */
/* predicate.c:718:OF */ extern void For (object args); /* (args) object args; */
/* predicate.c:750:OF */ extern bool contains_sharp_comma (object x); /* (x) object x; */
/* predicate.c:795:OF */ extern void siLcontains_sharp_comma (void); /* () */
/* predicate.c:797:OF */ extern object fScontains_sharp_comma (object x0); /* (x0) object x0; */
/* predicate.c:808:OF */ extern void siLspicep (void); /* () */
/* predicate.c:810:OF */ extern object fSspicep (object x0); /* (x0) object x0; */
/* predicate.c:820:OF */ extern void siLfixnump (void); /* () */
/* predicate.c:822:OF */ extern object fSfixnump (object x0); /* (x0) object x0; */
/* predicate.c:833:OF */ extern void init_predicate_function (void); /* () */
/* prog.c:48:OF */ extern void Ftagbody (object body); /* (body) object body; */
/* prog.c:108:OF */ extern void Fprog (object arg); /* (arg) object arg; */
/* prog.c:142:OF */ extern void FprogA (object arg); /* (arg) object arg; */
/* prog.c:177:OF */ extern void Fgo (object args); /* (args) object args; */
/* prog.c:200:OF */ extern void Fprogv (object args); /* (args) object args; */
/* prog.c:246:OF */ extern void Fprogn (object body); /* (body) object body; */
/* prog.c:264:OF */ extern void Fprog1 (object arg); /* (arg) object arg; */
/* prog.c:282:OF */ extern void Fprog2 (object arg); /* (arg) object arg; */
/* prog.c:303:OF */ extern void init_prog (void); /* () */
/* reference.c:32:OF */ extern void Lfboundp (void); /* () */
/* reference.c:49:OF */ extern object symbol_function (object sym); /* (sym) object sym; */
/* reference.c:69:OF */ extern void Lsymbol_function (void); /* () */
/* reference.c:94:OF */ extern void Fquote (object form); /* (form) object form; */
/* reference.c:107:OF */ extern void Ffunction (object form); /* (form) object form; */
/* reference.c:143:OF */ extern void Lsymbol_value (void); /* () */
/* reference.c:156:OF */ extern void Lboundp (void); /* () */
/* reference.c:169:OF */ extern void Lmacro_function (void); /* () */
/* reference.c:180:OF */ extern void Lspecial_form_p (void); /* () */
/* reference.c:191:OF */ extern void init_reference (void); /* () */
#include "regexp.h"
/* regexp.c:230:OF */ extern regexp *regcomp (char *exp); /* (exp) char *exp; */
/* regexp.c:782:OF */ extern int regexec (register regexp *prog, register char *string, char *start, int length); /* (prog, string, start, length) register regexp *prog; register char *string; char *start; int length; */
/* regexp.c:1485:OF */ extern int min_initial_branch_length (regexp *x, unsigned char *buf, int advance); /* (x, buf, advance) regexp *x; unsigned char *buf; int advance; */
/* regexp.c:1588:OF */ extern void regerror (char *s); /* (s) char *s; */
/* regexpr.c:29:OF */ extern void gcl_regerror (char *s); /* (s) char *s; */
/* regexpr.c:48:OF */ extern object fSmatch_beginning (int i); /* (i) int i; */
/* regexpr.c:57:OF */ extern object fSmatch_end (int i); /* (i) int i; */
/* regexpr.c:75:OF *//*   extern int fSstring_match (object pattern, object string, __builtin_va_alist_t __builtin_va_alist); */ /* (pattern, string, __builtin_va_alist) object pattern; object string; __builtin_va_alist_t __builtin_va_alist; */
/* run_process.c:344:OF */ extern void init_socket_function (void); /* () */
/* save.c:6:OF */ extern void memory_save (char *original_file, char *save_file); /* (original_file, save_file) char *original_file; char *save_file; */
/* save.c:17:OF */ extern void Lsave (void); /* () */
#include <unistd.h>
/* sbrk.c:9:OF */ extern void * sbrk (ptrdiff_t n); /* (n) int n; */
/* strcspn.c:3:OF */ /*  extern size_t strcspn (const char *s1, const char *s2); */ /* (s1, s2) char *s1; char *s2; */
/* structure.c:41:OF */ extern bool structure_subtypep (object x, object y); /* (x, y) object x; object y; */
/* structure.c:59:OF */ extern object structure_ref (object x, object name, int i); /* (x, name, i) object x; object name; int i; */
/* structure.c:90:OF */ extern void siLstructure_ref1 (void); /* () */
/* structure.c:107:OF */ extern object structure_set (object x, object name, int i, object v); /* (x, name, i, v) object x; object name; int i; object v; */
/* structure.c:146:OF */ extern void siLstructure_subtype_p (void); /* () */
/* structure.c:164:OF */ extern object structure_to_list (object x); /* (x) object x; */
/* structure.c:188:OF */ extern void siLmake_structure (void); /* () */
/* structure.c:246:OF */ extern void siLcopy_structure (void); /* () */
/* structure.c:265:OF */ extern void siLstructure_name (void); /* () */
/* structure.c:273:OF */ extern void siLstructure_ref (void); /* () */
/* structure.c:281:OF */ extern void siLstructure_set (void); /* () */
/* structure.c:289:OF */ extern void siLstructurep (void); /* () */
/* structure.c:298:OF */ extern void siLrplaca_nthcdr (void); /* () */
/* structure.c:326:OF */ extern void siLlist_nth (void); /* () */
/* structure.c:356:OF */ extern void siLmake_s_data_structure (void); /* () */
/* structure.c:380:OF */ extern void siLstructure_def (void); /* () */
/* structure.c:404:OF */ extern void siLsize_of (void); /* () */
/* structure.c:412:OF */ extern void siLaet_type (void); /* () */
/* structure.c:421:OF */ extern void siLalignment (void); /* () */
/* structure.c:439:OF */ extern void init_structure_function (void); /* () */
/* toplevel.c:42:OF */ extern void Fdefun (object args); /* (args) object args; */
/* toplevel.c:102:OF */ extern void siLAmake_special (void); /* () */
/* toplevel.c:111:OF */ extern void siLAmake_constant (void); /* () */
/* toplevel.c:124:OF */ extern void Feval_when (object arg); /* (arg) object arg; */
/* toplevel.c:151:OF */ extern void Fdeclare (object arg); /* (arg) object arg; */
/* toplevel.c:157:OF */ extern void Flocally (object body); /* (body) object body; */
/* toplevel.c:170:OF */ extern void Fthe (object args); /* (args) object args; */
/* toplevel.c:211:OF */ extern void init_toplevel (void); /* () */
/* typespec.c:38:OF */ extern void check_type_integer (object *p); /* (p) object *p; */
/* typespec.c:47:OF */ extern void check_type_non_negative_integer (object *p); /* (p) object *p; */
/* typespec.c:65:OF */ extern void check_type_rational (object *p); /* (p) object *p; */
/* typespec.c:75:OF */ extern void check_type_float (object *p); /* (p) object *p; */
/* typespec.c:84:OF */ extern void check_type_or_integer_float (object *p); /* (p) object *p; */
/* typespec.c:94:OF */ extern void check_type_or_rational_float (object *p); /* (p) object *p; */
/* typespec.c:104:OF */ extern void check_type_number (object *p); /* (p) object *p; */
/* typespec.c:115:OF */ extern void check_type_bit (object *p); /* (p) object *p; */
/* typespec.c:123:OF */ extern void check_type_character (object *p); /* (p) object *p; */
/* typespec.c:130:OF */ extern void check_type_string_char (object *p); /* (p) object *p; */
/* typespec.c:139:OF */ extern void check_type_symbol (object *p); /* (p) object *p; */
/* typespec.c:146:OF */ extern void check_type_or_symbol_string (object *p); /* (p) object *p; */
/* typespec.c:153:OF */ extern void check_type_or_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:160:OF */ extern void check_type_or_symbol_string_package (object *p); /* (p) object *p; */
/* typespec.c:170:OF */ extern void check_type_package (object *p); /* (p) object *p; */
/* typespec.c:177:OF */ extern void check_type_string (object *p); /* (p) object *p; */
/* typespec.c:184:OF */ extern void check_type_bit_vector (object *p); /* (p) object *p; */
/* typespec.c:191:OF */ extern void check_type_cons (object *p); /* (p) object *p; */
/* typespec.c:198:OF */ extern void check_type_stream (object *p); /* (p) object *p; */
/* typespec.c:205:OF */ extern void check_type_readtable (object *p); /* (p) object *p; */
/* typespec.c:213:OF */ extern void check_type_or_Pathname_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:225:OF */ extern void check_type_or_pathname_string_symbol_stream (object *p); /* (p) object *p; */
/* typespec.c:236:OF */ extern void check_type_random_state (object *p); /* (p) object *p; */
/* typespec.c:243:OF */ extern void check_type_hash_table (object *p); /* (p) object *p; */
/* typespec.c:250:OF */ extern void check_type_array (object *p); /* (p) object *p; */
/* typespec.c:267:OF */ extern void check_type_vector (object *p); /* (p) object *p; */
/* typespec.c:284:OF */ extern void check_type (object x, int t); /* (x, t) object x; int t; */
/* typespec.c:294:OF */ extern void Ltype_of (void); /* () */
/* typespec.c:493:OF */ extern void init_typespec (void); /* () */
/* typespec.c:497:OF */ extern void init_typespec_function (void); /* () */
/* unexec-19.29.c:373:OF */ /*  extern int unexec (char *new_name, char *a_name, unsigned int data_start, unsigned int bss_start, unsigned int entry_address); */ /* (new_name, a_name, data_start, bss_start, entry_address) char *new_name; char *a_name; unsigned int data_start; unsigned int bss_start; unsigned int entry_address; */
/* unexec-19.29.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexec.c:373:OF */ /*  extern int unexec (char *new_name, char *a_name, unsigned int data_start, unsigned int bss_start, unsigned int entry_address); */ /* (new_name, a_name, data_start, bss_start, entry_address) char *new_name; char *a_name; unsigned int data_start; unsigned int bss_start; unsigned int entry_address; */
/* unexec.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexelf.c:626:OF */ extern void unexec (char *new_name, char *old_name, unsigned int data_start, unsigned int bss_start, unsigned int entry_address); /* (new_name, old_name, data_start, bss_start, entry_address) char *new_name; char *old_name; unsigned int data_start; unsigned int bss_start; unsigned int entry_address; */
/* unexlin.c:317:OF */ /*  extern int unexec (char *new_name, char *a_name, unsigned int data_start, unsigned int bss_start, unsigned int entry_address); */ /* (new_name, a_name, data_start, bss_start, entry_address) char *new_name; char *a_name; unsigned int data_start; unsigned int bss_start; unsigned int entry_address; */
/* unexlin.c:808:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unixfasl.c:283:OF */ extern int faslink (object faslfile, object ldargstring); /* (faslfile, ldargstring) object faslfile; object ldargstring; */
/* unixfasl.c:384:OF */ extern void siLfaslink (void); /* () */
/* unixfasl.c:409:OF */ extern void init_unixfasl (void); /* () */
/* unixfsys.c:145:OF */ extern char *getwd (char *buffer); /* (buffer) char *buffer; */
/* unixfsys.c:209:OF */ extern void coerce_to_filename (object pathname, char *p); /* (pathname, p) object pathname; char *p; */
/* unixfsys.c:258:OF */ extern object truename (object pathname); /* (pathname) object pathname; */
/* unixfsys.c:329:OF */ extern bool file_exists (object file); /* (file) object file; */
/* unixfsys.c:359:OF */ extern FILE *backup_fopen (char *filename, char *option); /* (filename, option) char *filename; char *option; */
/* unixfsys.c:372:OF */ extern int file_len (FILE *fp); /* (fp) FILE *fp; */
/* unixfsys.c:382:OF */ extern void Ltruename (void); /* () */
/* unixfsys.c:389:OF */ extern void Lrename_file (void); /* () */
/* unixfsys.c:418:OF */ extern object fSsetenv (object variable, object value); /* (variable, value) object variable; object value; */
/* unixfsys.c:440:OF */ extern void Ldelete_file (void); /* () */
/* unixfsys.c:442:OF */ extern object fLdelete_file (object path); /* (path) object path; */
/* unixfsys.c:456:OF */ extern void Lprobe_file (void); /* () */
/* unixfsys.c:467:OF */ extern void Lfile_write_date (void); /* () */
/* unixfsys.c:479:OF */ extern void Lfile_author (void); /* () */
/* unixfsys.c:502:OF */ extern void Luser_homedir_pathname (void); /* () */
/* unixfsys.c:533:OF */ extern void Ldirectory (void); /* () */
/* unixfsys.c:764:OF */ extern void siLchdir (void); /* () */
/* unixfsys.c:777:OF */ extern void init_unixfsys (void); /* () */
/* unixsave.c:173:OF */ extern void init_unixsave (void); /* () */
/* unixsys.c:59:OF */ extern void Lsystem (void); /* () */
/* unixsys.c:83:OF */ extern object fSgetpid (void); /* () */
/* unixsys.c:87:OF */ extern void init_unixsys (void); /* () */
/* unixtime.c:67:OF */ extern int runtime (void); /* () */
/* unixtime.c:82:OF */ extern object unix_time_to_universal_time (int i); /* (i) int i; */
/* unixtime.c:97:OF */ extern void Lget_universal_time (void); /* () */
/* unixtime.c:99:OF */ extern object fLget_universal_time (void); /* () */
/* unixtime.c:105:OF */ extern void Lsleep (void); /* () */
/* unixtime.c:124:OF */ extern void Lget_internal_run_time (void); /* () */
/* unixtime.c:144:OF */ extern object fLget_internal_real_time (void); /* () */
/* unixtime.c:173:OF */ extern void init_unixtime (void); /* () */
/* user_init.c:2:OF */ extern object user_init (void); /* () */
/* usig.c:49:OF */ extern void gcl_signal (int signo, void (*handler) (/* ??? */)); /* (signo, handler) int signo; void (*handler)(); */
/* usig.c:92:OF */ extern int unblock_signals (int n, int m); /* (n, m) int n; int m; */
/* usig.c:119:OF */ extern void unblock_sigusr_sigio (void); /* () */
/* usig.c:137:OF */ extern void sigfpe1 (void); /* () */
/* usig.c:142:OF */ extern void sigpipe (void); /* () */
/* usig.c:151:OF */ extern void sigint (void); /* () */
/* usig.c:160:OF */ extern void sigalrm (void); /* () */
/* usig.c:172:OF */ extern void sigusr1 (void); /* () */
/* usig.c:176:OF */ extern void sigio (void); /* () */
/* usig.c:182:OF */ extern void install_default_signals (void); /* () */
/* usig2.c:142:OF */ extern void init_safety (void); /* () */
/* usig2.c:158:OF */ extern object sSsignal_safety_required (int signo, int safety); /* (signo, safety) int signo; int safety; */
/* usig2.c:167:OF */ extern void main_signal_handler (int signo, int a, int b); /* (signo, a, b) int signo; int a; int b; */
/* usig2.c:194:OF */ extern void invoke_handler (int signo, int allowed); /* (signo, allowed) int signo; int allowed; */
/* usig2.c:328:OF */ extern object MakeCons (object a, object b); /* (a, b) object a; object b; */
/* usig2.c:375:OF */ extern void raise_pending_signals (int cond); /* (cond) int cond; */
/* usig2.c:407:OF */ extern object fSallow_signal (int n); /* (n) int n; */
/* utils.c:12:OF */ extern object IisSymbol (object f); /* (f) object f; */
/* utils.c:20:OF */ extern object IisFboundp (object f); /* (f) object f; */
/* utils.c:30:OF */ extern object IisArray (object f); /* (f) object f; */
/* utils.c:44:OF */ extern object Iis_fixnum (object f); /* (f) object f; */
/* utils.c:61:OF */ extern object Iapply_ap (object (*f) (/* ??? */), va_list ap); /* (f, ap) object (*f)(); va_list ap; */
/* utils.c:164:OF */ extern object ImakeStructure (int n, object *p); /* (n, p) int n; object *p; */
/* utils.c:178:OF */ extern object Icheck_one_type (object x, enum type t); /* (x, t) object x; enum type t; */
/* utils.c:189:OF */ extern object fSincorrect_type (object val, object type); /* (val, type) object val; object type; */
/* utils.c:195:OF */ extern void Ineed_in_image (object (*foo) (/* ??? */)); /* (foo) object (*foo)(); */
/* utils.c:202:OF */ extern object Ivs_values (void); /* () */
/* utils.c:213:OF */ extern void fatal (char *s, int i1, int i2); /* (s, i1, i2) char *s; int i1; int i2; */
/* utils.c:227:OF */ extern char *lisp_copy_to_null_terminated (object string, char *buf, int n); /* (string, buf, n) object string; char *buf; int n; */
/* xdrfuns.c:128:OF */ extern void init_xdrfuns (void); /* () */


/*  readline.d */
void
init_readline_function(void);

/*  sys_gcl.c */
void
init_init(void);

/* misc */
void
init_symbol(void);

void
init_package(void);

void
init_character(void);

void
init_read(void);

void
init_pathname(void);

void
init_print(void);

void
init_character_function(void);

void
init_file_function(void);

void
init_list_function(void);

void
init_package_function(void);

void
init_pathname_function(void);

void
init_print_function(void);

void
init_read_function(void);

void
init_sequence_function(void);

void
init_string_function(void);

void
init_symbol_function(void);

void
init_hash(void);

void
import(object,object);

void
export(object,object);

void
NewInit(void);

void
init_system(void);

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
odd_plist(object);

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
init_file(void);

object
aset1(object,int,object);

void
write_timeout_error(char *);

void
connection_failure(char *);

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
