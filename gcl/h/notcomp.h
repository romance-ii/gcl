
#define	CHAR_CODE_LIMIT	256	
#define	READ_TABLE_SIZE CHAR_CODE_LIMIT
#define ARRAY_RANK_LIMIT 63

void enter_mark_origin() ;

EXTER int *cs_org;     
EXTER int GBC_enable;

#define CHAR_SIZE 8
EXTER object sSAnotify_gbcA;

/* symbols which are not needed in compiled lisp code */
EXTER int interrupt_flag,initflag,interrupt_enable;
void install_default_signals();
/* void sigint(),sigalrm(); */
void segmentation_catcher();


EXTER int gc_enabled, saving_system;

EXTER object lisp_package,user_package;
#ifdef ANSI_COMMON_LISP
EXTER object common_lisp_package;
#endif
EXTER char *core_end;
EXTER int catch_fatal;
EXTER long real_maxpage;
char *getenv();
EXTER char *this_lisp;

#ifndef IN_MAIN
EXTER
char stdin_buf[], stdout_buf[];
#endif

EXTER object user_package;

#define TRUE 1
#define FALSE 0



#define GET_OPT_ARG(min,max) \
  va_list ap; \
  object  opt_arg[max - min]; object *__p= opt_arg ;\
  int _i=min, _nargs = VFUN_NARGS ; \
  va_start(ap); \
  if (_nargs < min || (_nargs > max)) FEerror("wrong number of args"); \
  while(_i++ <= max) { if (_i > _nargs) *__p++ = Cnil; \
			 else *__p++ = va_arg(ap,object);} \
  va_end(ap)

/*  #undef endp */

/*  #define	endp(obje)	((enum type)((endp_temp = (obje))->d.t) == t_cons ? \ */
/*  			 FALSE : endp_temp == Cnil ? TRUE : \ */
/*  			 endp1(endp_temp)) */

#ifndef NO_DEFUN
#undef DEFUN
#define DEFUN(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,doc) ret fname
/* eg.
   A function taking from 2 to 8 args
   returning object the first args is object, the next 6 int, and last defaults to object.
   note the return type must also be put in the signature.
  DEFUN("AREF",object,fSaref,SI,2,8,NONE,oo,ii,ii,ii)
*/

/* for defining old style */
#define DEFUNO(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,old,doc) \
  ret fname (); \
void old(void) \
{   Iinvoke_c_function_from_value_stack(fname,F_ARGD(min,max,flags,ARGTYPES(ret0a0,a12,a34,a56))); \
    return;} \
  ret fname

#define DEFUN_NEW(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,args,doc) ret fname args
/* eg.
   A function taking from 2 to 8 args
   returning object the first args is object, the next 6 int, and last defaults to object.
   note the return type must also be put in the signature.
  DEFUN("AREF",object,fSaref,SI,2,8,NONE,oo,ii,ii,ii)
*/

/* for defining old style */
#define DEFUNO_NEW(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,oldret,old,args,doc) \
  ret fname args; \
oldret old(void) \
{   Iinvoke_c_function_from_value_stack((object (*)())fname,F_ARGD(min,max,flags,ARGTYPES(ret0a0,a12,a34,a56))); \
    return;} \
  ret fname args

  /* these will come later */
#define DEFUNL DEFUN
  /* these are needed to be linked in to be called by incrementally
   loaded code */
#define DEFCOMP(type,fun) type fun

#define  DEFVAR(name,cname,pack,val,doc) object cname
#define  DEFCONST(name,cname,pack,val,doc) object cname
#define  DEF_ORDINARY(name,cname,pack,doc) object cname  
#define DO_INIT(x)   
#endif /* NO_DEFUN */


object  type_name();
object fSincorret_type();


#define TYPE_OF(x) type_of(x)


/* For a faster way of checking if t0 is in several types,
   is t0 a member of types t1 t2 t3 
TS_MEMBER(t0,TS(t1)|TS(t2)|TS(t3)...)
*/
#define TS(s) (1<<s)
#define TS_MEMBER(t1,ts) ((TS(t1)) & (ts))

#define ASSURE_TYPE(val,t) if(type_of(val)!=t) val= Icheck_one_type(val,t)

object IisArray();

void Wrong_type_error(char *,int,...);

/* array to which X is has its body displaced */
#define DISPLACED_TO(x) Mcar(x->a.a_displaced)

/* List of arrays whose bodies are displaced to X */

#define DISPLACED_FROM(x) Mcdr(x->a.a_displaced)

#define FIX_CHECK(x) (Mfix(Iis_fixnum(x)))

#define INITIAL_TOKEN_LENGTH 512

/* externals not needed by cmp */
/* print.d */
EXTER bool PRINTpackage;
EXTER bool PRINTstructure;

/* from format.c */
EXTER VOL object fmt_stream;
EXTER VOL int ctl_origin;
EXTER VOL int ctl_index;
EXTER VOL int ctl_end;
EXTER  object * VOL fmt_base;
EXTER VOL int fmt_index;
EXTER VOL int fmt_end;
typedef jmp_buf *jmp_bufp;
EXTER jmp_bufp VOL fmt_jmp_bufp;
EXTER VOL int fmt_indents;
EXTER VOL object fmt_string;
EXTER object endp_temp;

/* eval */
EXTER int eval1 ;
/* list.d */
EXTER bool in_list_flag;
EXTER object test_function;
EXTER object item_compared;
bool (*tf)();
EXTER object key_function;
object (*kf)();
object (*car_or_cdr)();


/* string.d */
EXTER  bool left_trim;
EXTER bool right_trim;
int  (*casefun)();

#define	Q_SIZE		128
#define IS_SIZE		256

struct printStruct {
 short p_queue[Q_SIZE];
 short p_indent_stack[IS_SIZE];
 int p_qh;
 int p_qt;
 int p_qc;
 int p_isp;
 int p_iisp;};

EXTER struct printStruct *printStructBufp;

#define SETUP_PRINT_DEFAULT(x) \
  struct printStruct printStructBuf; \
  struct printStruct * old_printStructBufp = printStructBufp; \
  printStructBufp = &printStructBuf; \
   setupPRINTdefault(x)

#define CLEANUP_PRINT_DEFAULT \
  cleanupPRINT(); \
  printStructBufp = old_printStructBufp


/* on most machines this will test in one instruction
   if the pointer is on the C stack or the 0 pointer
   but if the CSTACK_ADDRESS is not negative then we can't use this cheap
   test..
*/
#ifndef NULL_OR_ON_C_STACK


#if (CSTACK_ADDRESS > 0)
#define NULL_OR_ON_C_STACK(x) ((x)==0 || ((unsigned long)x) > (unsigned long)(pagetochar(MAXPAGE+1)))
#else
#define NULL_OR_ON_C_STACK(x) ((long)x <= 0)     
#endif

#endif /* NULL_OR_ON_C_STACK */

/* more readable name */
#define siScomma sSY
EXTER object sSY;

#define	inheap(pp)	((char *)(pp) < heap_end)

char *lisp_copy_to_null_terminated();

int
gcl_init_cmp_anon(void);
