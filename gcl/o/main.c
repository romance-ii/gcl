/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
	main.c
	IMPLEMENTATION-DEPENDENT
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static void init_main(void);
static void initlisp(void);
static int  multiply_stacks(int);
void install_segmentation_catcher(void);

#define IN_MAIN

#ifdef KCLOVM
#  include <ovm/ovm.h>
void change_contexts();
int ovm_process_created; 
void initialize_process();
#endif

#include "include.h"

#ifdef UNIX
#  include <signal.h>
#endif

#include "page.h"

#ifdef BSD
#  include <sys/time.h>
#  ifndef SGI
#    include <sys/resource.h>
#  endif
#endif

#ifdef _WIN32
#  include <fcntl.h>
#endif

#define LISP_IMPLEMENTATION_VERSION "April 1994"

#define EXTRA_BUFSIZE 8
char stdin_buf[BUFSIZ + EXTRA_BUFSIZE];
char stdout_buf[BUFSIZ + EXTRA_BUFSIZE];

char *system_directory   = NULL;
int page_multiple        = 1;

int    debug             = FALSE;		/* debug switch */
int    initflag          = FALSE;		/* initialized flag */

int    stack_multiple    = 1;
int    cssize            = 0;

#ifdef _WIN32
unsigned int _dbegin     = 0x10100000;
#  ifndef AV
unsigned int _stacktop, _stackbottom;
#  endif
#endif

extern bool saving_system;
extern long real_maxpage;
extern int sgc_enabled;


object sSAlisp_maxpagesA;
object siClisp_pagesize;
object sStop_level;
object sSAmultiply_stacksA;

static object stack_space;

#ifndef SIG_STACK_SIZE
#  define SIG_STACK_SIZE 1000
#endif

#ifndef SETUP_SIG_STACK
#  if defined(HAVE_SIGACTION) || defined(HAVE_SIGVEC)
      struct sigstack estack;
#  endif
#endif

int
main(int argc, char **argv, char **envp) {
#if defined ( BSD ) && defined ( RLIMIT_STACK )
    struct rlimit rl;
#endif

#ifdef RECREATE_HEAP
    RECREATE_HEAP
#endif
	
#if defined ( _WIN32 ) && !defined ( AV )
    {
        unsigned int dummy;
	    
        _stackbottom = (unsigned int ) &argc;
        _stacktop    = _stackbottom - CSSIZE; // ???

    }
#endif
    setbuf(stdin, stdin_buf); 
    setbuf(stdout, stdout_buf);
#ifdef _WIN32
    _fmode = _O_BINARY;
#endif
    ARGC = argc;
    ARGV = argv;
#ifdef UNIX
    ENVP = envp;
#ifdef GET_FULL_PATH_SELF
	GET_FULL_PATH_SELF(kcl_self);
#else
	kcl_self = argv[0];
#endif
#ifdef FIX_FILENAME
    {
        int n = strlen ( kcl_self );
        FIX_FILENAME ( Cnil, kcl_self );
        if ( strlen ( kcl_self ) > n ) {
            error ( "name grew" );
        }
    }
#endif	
    if ( !initflag ) {
        /* An uninitialised system eg raw_gcl */
        if ( argc < 2 ) {
            /* Provide the current directory as a default */
            system_directory = (char *) malloc ( strlen ( "./" ) + 3 );
            strcpy ( system_directory, "./" );
        } else {
            int lastchar = strlen ( argv[1] ) - 1;
            /* Squirrel away the system directory provided as argv[1] */
            system_directory = (char *) malloc ( strlen ( argv[1] ) + 3 );
            strcpy ( system_directory, argv[1] );
            if ( system_directory[0] != '/' ) {
                strcpy ( system_directory, "./" );
            } else {
                int j;
                for ( j = strlen ( system_directory ); system_directory[j-1] != '/'; --j );
                system_directory[j] = '\0';
            }
            
            if ( argv[1][lastchar] != '/') {
                error ( "Can't get the system directory." );
            }
            strcpy ( system_directory, argv[1] );
        }
    }
#else  /* UNIX */
    if (!initflag && argc > 1) {
        error("can't get the system directory");
        strcpy(system_directory, argv[1]);
    }
#endif /* UNIX */
    GBC_enable = FALSE;

    /* if stack_space not zero we have grown the stack space */
    if ( stack_space == 0 ) {
        vs_org = value_stack;
        vs_limit = &vs_org[VSSIZE];
        frs_org = frame_stack;
        frs_limit = &frs_org[FRSSIZE];
        bds_org = bind_stack;
        bds_limit = &bds_org[BDSSIZE];
#ifdef KCLOVM
        bds_save_org = save_bind_stack;
        bds_save_top = bds_save_org - 1;
        bds_save_limit = &bds_save_org[BDSSIZE];
#endif
        ihs_org = ihs_stack;
        ihs_limit = &ihs_org[IHSSIZE];
    }

    vs_top = vs_base = vs_org;
    clear_stack ( vs_top, vs_top+200 );
    ihs_top = ihs_org-1;
    bds_top = bds_org-1;
    frs_top = frs_org-1;
    cs_org = &argc;
    cssize = CSSIZE;
    install_segmentation_catcher();

#ifdef BSD
#  ifndef MAX_STACK_SIZE
#    define MAX_STACK_SIZE (1<<23) /* 8Mb */
#  endif
#  ifdef RLIMIT_STACK
    getrlimit(RLIMIT_STACK, &rl);
    if (rl.rlim_cur == RLIM_INFINITY || 
         rl.rlim_cur > MAX_STACK_SIZE)
        rl.rlim_cur=MAX_STACK_SIZE;
    cssize = rl.rlim_cur/4 - 4*CSGETA;
#  endif	
#endif /* BSD */

#ifdef AV
    cs_limit = cs_org - cssize;
#endif

    set_maxpage();

#ifdef SETUP_SIG_STACK
    SETUP_SIG_STACK
#else

#  if defined(HAVE_SIGACTION) || defined(HAVE_SIGVEC)
    {
        /* make sure the stack is 8 byte aligned */
#    ifdef SETJMP_ONE_DIRECTION
        static
#    endif /* SETUP_SIG_STACK */
	    double estack_buf[SIG_STACK_SIZE];
	    
        bzero(estack_buf,sizeof(estack_buf));
        estack.ss_sp = (char *) &estack_buf[SIG_STACK_SIZE-1];
        estack.ss_onstack=0;
        sigstack(&estack,0);
    }
#  endif /* defined(HAVE_SIGACTION) || defined(HAVE_SIGVEC) */

#endif /* SETUP_SIG_STACK */	
	
    if (initflag) {
        if (saving_system) {
            saving_system = FALSE;
            terminal_io->sm.sm_object0->sm.sm_fp = stdin;
            terminal_io->sm.sm_object1->sm.sm_fp = stdout;
            gcl_init_big1();
#ifdef INIT_CORE_END
            INIT_CORE_END
#endif			  
                alloc_page(-(holepage + nrbpage));
        }

        initflag = FALSE;
        GBC_enable = TRUE;
        vs_base = vs_top;
        ihs_push(Cnil);
        lex_new();
        vs_base = vs_top;

        interrupt_enable = TRUE;
        install_default_signals();

        sSAlisp_maxpagesA->s.s_dbind = make_fixnum(real_maxpage);
        initflag = TRUE;
#ifdef KCLOVM
        ovm_user_context_change = change_contexts;
        ovm_user_context_initialize = initialize_process;

        v_init_processes();
        ovm_process_created = 1;
#endif
#ifdef HAVE_READLINE
        gcl_init_readline_function();
#endif
    again:
        super_funcall(sStop_level);
        if (type_of(sSAmultiply_stacksA->s.s_dbind)==t_fixnum) {
            multiply_stacks(fix(sSAmultiply_stacksA->s.s_dbind));
            goto  again;
        }
        
#ifdef USE_DLOPEN
 	unlink_loaded_files();
#endif			

        exit(0);
    }

    printf("GCL (GNU Common Lisp)  %s  %d pages\n",
            LISP_IMPLEMENTATION_VERSION,
            MAXPAGE);
    fflush(stdout);

    initlisp();

    vs_base = vs_top;
    ihs_push(Cnil);
    lex_new();

    GBC_enable = TRUE;

    CMPtemp = CMPtemp1 = CMPtemp2 = CMPtemp3 = OBJNULL;

    gcl_init_init();

    sLApackageA->s.s_dbind = user_package;

    lex_new();
    vs_base = vs_top;
    initflag = TRUE;

    interrupt_enable = TRUE;

    super_funcall(sStop_level);

    return 0;

}

/* catch certain signals */
void install_segmentation_catcher(void)
{
#ifdef INSTALL_SEGMENTATION_CATCHER
   INSTALL_SEGMENTATION_CATCHER;
#else
#  ifdef SIGSEGV
       (void) gcl_signal(SIGSEGV,segmentation_catcher);
#  endif
#endif
}

int catch_fatal=1;
void
error(char *s)
{
        if (catch_fatal>0 && interrupt_enable )
            {catch_fatal = -1;
#ifdef SGC
	   if (sgc_enabled)
	     { sgc_quit();}
	   if (sgc_enabled==0)
#endif
	     { install_segmentation_catcher() ;}
	   FEerror("Caught fatal error [memory may be damaged]",0); }
	printf("\nUnrecoverable error: %s.\n", s);
	fflush(stdout);
#ifdef UNIX
    abort();
#endif
}

static void
initlisp(void) {
        int j;
	if (NULL_OR_ON_C_STACK(&j) == 0
	    || NULL_OR_ON_C_STACK(Cnil) != 0
	    || (((unsigned long )core_end) !=0
	        && NULL_OR_ON_C_STACK(core_end) != 0))
	  { /* check person has correct definition of above */
	    error("NULL_OR_ON_C_STACK macro invalid");
	  }

        gcl_init_alloc();

	Dotnil_body.t = (short)t_symbol;
	Dotnil_body.s_dbind = Dotnil;
	Dotnil_body.s_sfdef = NOT_SPECIAL;
	Dotnil_body.s_fillp = 6;
	Dotnil_body.s_self = "DOTNIL";
	Dotnil_body.s_gfdef = OBJNULL;
	Dotnil_body.s_plist = Cnil;
	Dotnil_body.s_hpack = Cnil;
	Dotnil_body.s_stype = (short)stp_constant;
	Dotnil_body.s_mflag = FALSE;
	
	Cnil_body.t = (short)t_symbol;
	Cnil_body.s_dbind = Cnil;
	Cnil_body.s_sfdef = NOT_SPECIAL;
	Cnil_body.s_fillp = 3;
	Cnil_body.s_self = "NIL";
	Cnil_body.s_gfdef = OBJNULL;
	Cnil_body.s_plist = Cnil;
	Cnil_body.s_hpack = Cnil;
	Cnil_body.s_stype = (short)stp_constant;
	Cnil_body.s_mflag = FALSE;
	
	Ct_body.t = (short)t_symbol;
	Ct_body.s_dbind = Ct;
	Ct_body.s_sfdef = NOT_SPECIAL;
	Ct_body.s_fillp = 1;
	Ct_body.s_self = "T";
	Ct_body.s_gfdef = OBJNULL;
	Ct_body.s_plist = Cnil;
	Ct_body.s_hpack = Cnil;
	Ct_body.s_stype = (short)stp_constant;
	Ct_body.s_mflag = FALSE;
	
	gcl_init_symbol();

	gcl_init_package();

	Cnil->s.s_hpack = lisp_package;
	import(Cnil, lisp_package);
	export(Cnil, lisp_package);

	Ct->s.s_hpack = lisp_package;
	import(Ct, lisp_package);
	export(Ct, lisp_package);

#ifdef ANSI_COMMON_LISP
/*  	Cnil->s.s_hpack = common_lisp_package; */
	import(Cnil, common_lisp_package);
	export(Cnil, common_lisp_package);

/*  	Ct->s.s_hpack = common_lisp_package; */
	import(Ct, common_lisp_package);
	export(Ct, common_lisp_package);
#endif

	sLquote = make_ordinary("QUOTE");
	sLfunction = make_ordinary("FUNCTION");
	sLlambda = make_ordinary("LAMBDA");
	sLlambda_block = make_ordinary("LAMBDA-BLOCK");
	sLlambda_closure = make_ordinary("LAMBDA-CLOSURE");
	sLlambda_block_closure = make_ordinary("LAMBDA-BLOCK-CLOSURE");
	sLspecial = make_ordinary("SPECIAL");

	
	NewInit();
	gcl_init_typespec();
	gcl_init_number();
	gcl_init_character();

	gcl_init_read();
	gcl_init_bind();
	gcl_init_pathname();
	gcl_init_print();
	gcl_init_GBC();

#if defined ( UNIX ) || defined ( __MINGW32__ )
#  ifndef DGUX
	gcl_init_unixfasl();
	gcl_init_unixsys();
	gcl_init_unixsave();
#  else



#  endif
#endif /* defined ( UNIX ) || defined ( __MINGW32__ ) */

	gcl_init_alloc_function();
	gcl_init_array_function();
	gcl_init_character_function();
	gcl_init_file_function();
	gcl_init_list_function();
	gcl_init_package_function();
	gcl_init_pathname_function();
	gcl_init_predicate_function();
	gcl_init_print_function();
	gcl_init_read_function();
	gcl_init_sequence_function();
#if  defined(KCLOVM) || defined(RUN_PROCESS)
	gcl_init_socket_function();
#endif	
	gcl_init_structure_function();
	gcl_init_string_function();
	gcl_init_symbol_function();
	gcl_init_typespec_function();
	gcl_init_hash();
	gcl_init_cfun();

#ifdef UNIX
	gcl_init_unixfsys();
	gcl_init_unixtime();
#endif
	gcl_init_eval();
	gcl_init_lex();
	gcl_init_prog();
	gcl_init_catch();
	gcl_init_block();
        gcl_init_macros();
	gcl_init_conditional();
	gcl_init_reference();
	gcl_init_assignment();
	gcl_init_multival();
	gcl_init_error();
	gcl_init_let();
	gcl_init_mapfun();
	gcl_init_iteration();
	gcl_init_toplevel();

	gcl_init_cmpaux();

	init_main();

	gcl_init_format();
	gcl_init_links();

	gcl_init_fat_string();
#ifdef CMAC
	gcl_init_cmac();
#endif	

}
object
vs_overflow(void)
{
	if (vs_limit > vs_org + stack_multiple *  VSSIZE)
		error("value stack overflow");
	vs_limit += STACK_OVER*VSGETA;
	FEerror("Value stack overflow.", 0);
	return Cnil;
}

void
bds_overflow(void) {
	--bds_top;
	if (bds_limit > bds_org + stack_multiple *  BDSSIZE) {
            error("bind stack overflow");
        }
	bds_limit += STACK_OVER  *BDSGETA;
	FEerror("Bind stack overflow.", 0);
}

void
frs_overflow(void) {
	--frs_top;
	if (frs_limit > frs_org + stack_multiple *  FRSSIZE)
		error("frame stack overflow");
	frs_limit += STACK_OVER* FRSGETA;
	FEerror("Frame stack overflow.", 0);
}

void
ihs_overflow(void) {
	--ihs_top;
	if (ihs_limit > ihs_org + stack_multiple *  IHSSIZE)
		error("invocation history stack overflow");
	ihs_limit += STACK_OVER*IHSGETA;
	FEerror("Invocation history stack overflow.", 0);
}

void
segmentation_catcher(int i) {
#ifndef SIG_STACK_SIZE 
  int x;
  if (&x < cs_limit)
    cs_overflow();
  else 
    printf("Segmentation violation: c stack ok:signalling error");
#endif
  error("Segmentation violation.");
}

DEFUNO_NEW("BYE",object,fLbye,LISP
       ,0,1,NONE,OI,OO,OO,OO,void,Lby,(fixnum exitc),"")
{	int n=VFUN_NARGS;
	int exit_code;
	if (n>=1) exit_code=exitc;else exit_code=0;

#ifdef UNIX
	exit(exit_code);
#else
	RETURN(1,int,exit_code, 0); 
#endif

}

DEFUN_NEW("QUIT",object,fLquit,LISP
       ,0,1,NONE,OI,OO,OO,OO,(fixnum exitc),"")
{	return fLbye(exitc); }
 
/* DEFUN_NEW("EXIT",object,fLexit,LISP */
/*        ,0,1,NONE,OI,OO,OO,OO,(fixnum exitc),"") */
/* {	return fLbye(exitc); } */
 

static void
siLargc(void) {
  check_arg(0);
  vs_push(make_fixnum(ARGC));
}

static void
siLargv(void) {
  int i=0;
  
  check_arg(1);
  if (type_of(vs_base[0]) != t_fixnum ||
      (i = fix(vs_base[0])) < 0 ||
      i >= ARGC)
    FEerror("Illegal argument index: ~S.", 1, vs_base[0]);
  vs_base[0] = make_simple_string(ARGV[i]);

}

#ifdef UNIX
static void
siLgetenv(void) {

  char name[256];
  int i;
  char *value;
  extern char *getenv(const char *);
  
  check_arg(1);
  check_type_string(&vs_base[0]);
  if (vs_base[0]->st.st_fillp >= 256)
    FEerror("Too long name: ~S.", 1, vs_base[0]);
  for (i = 0;  i < vs_base[0]->st.st_fillp;  i++)
    name[i] = vs_base[0]->st.st_self[i];
  name[i] = '\0';
  if ((value = getenv(name)) != NULL)
    {vs_base[0] = make_simple_string(value);
#ifdef FREE_GETENV_RESULT
    free(value);
#endif		
    }
  else
    vs_base[0] = Cnil;

}
#endif /* UNIX */

object *vs_marker;

static void
siLmark_vs(void) {
  check_arg(0);
  vs_marker = vs_base;
  vs_base[0] = Cnil;
}

static void
siLcheck_vs(void) {
  check_arg(0);
  if (vs_base != vs_marker)
    FEerror("Value stack is flawed.", 0);
  vs_base[0] = Cnil;
}

static object
siLcatch_fatal(int i) {
  catch_fatal=i;
  return Cnil;
}

static void
reset_cstack_limit(int arg) {
#ifdef AV
  if (&arg > cs_org - cssize + 16)
    cs_limit = cs_org - cssize;
  else
    error("can't reset cs_limit");
#endif
}

void
siLreset_stack_limits(void)
{
  int i=0;

  check_arg(0);
  if(catch_fatal <0) catch_fatal=1;
#ifdef SGC	
  {extern int fault_count ; fault_count = 0;}
#endif 
  if (vs_top < vs_org + stack_multiple *  VSSIZE)
    vs_limit = vs_org + stack_multiple *  VSSIZE;
  else
    error("can't reset vs_limit");
  if (bds_top < bds_org + stack_multiple *  BDSSIZE)
    bds_limit = bds_org + stack_multiple *  BDSSIZE;
  else
    error("can't reset bds_limit");
  if (frs_top < frs_org + stack_multiple *  FRSSIZE)
    frs_limit = frs_org + stack_multiple *  FRSSIZE;
  else
    error("can't reset frs_limit");
  if (ihs_top < ihs_org + stack_multiple *  IHSSIZE)
    ihs_limit = ihs_org + stack_multiple *  IHSSIZE;
  else
    error("can't reset ihs_limit");
  reset_cstack_limit(i);
  vs_base[0] = Cnil;
}

#define COPYSTACK(org,p,typ,lim,top,geta,size) \
 do{int leng,topl;      \
  bcopy(org,p,leng=(stack_multiple*size*sizeof(typ))); \
  topl= top - org; \
  org=(typ *)p; top = org +topl;\
  p=p+leng+(STACK_OVER+1)*geta*sizeof(typ); \
  lim = ((typ *)p) - (STACK_OVER+1)*geta;   \
  }while (0)

static int
multiply_stacks(int m) {  
/*    int n; */
/*    object x; */
/*    object gc_pro=stack_space; */
  char *p;
  int vs,bd,frs,ihs;
  stack_multiple=stack_multiple*m;
#define ELTSIZE(x) (((char *)((x)+1)) - ((char *) x))
  vs  = (stack_multiple*VSSIZE  + (STACK_OVER+1)*VSGETA)* ELTSIZE(vs_org);
  bd  = (stack_multiple*BDSSIZE + (STACK_OVER+1)*BDSGETA)*ELTSIZE(bds_org);
  frs = (stack_multiple*FRSSIZE + (STACK_OVER+1)*FRSGETA)*ELTSIZE(frs_org);
  ihs = (stack_multiple*IHSSIZE + (STACK_OVER+1)*IHSGETA)*ELTSIZE(ihs_org);
  if (stack_space==0) {enter_mark_origin(&stack_space);}
  stack_space = alloc_simple_string(vs+bd+frs+ihs);
  array_allocself(stack_space,1,code_char(0));
  p=stack_space->st.st_self;
  COPYSTACK(vs_org,p,object,vs_limit,vs_top,VSGETA,VSSIZE);
  COPYSTACK(bds_org,p,struct bds_bd,bds_limit,bds_top,BDSGETA,BDSSIZE);
  COPYSTACK(frs_org,p,struct frame,frs_limit,frs_top,FRSGETA,FRSSIZE);
  COPYSTACK(ihs_org,p,struct invocation_history,ihs_limit,ihs_top,
	    IHSGETA,IHSSIZE);
  vs_base=vs_top;
  return stack_multiple;
}

DEFVAR("*NO-INIT*",sSAno_initA,SI,Cnil,"");

void
siLinit_system(void) {
  check_arg(0);
  gcl_init_system(sSAno_initA);
  vs_base[0] = Cnil;
}

static void
siLuser_init(void) {
  check_arg(0);
  sLApackageA->s.s_dbind = user_package;
  user_init();
  vs_base[0] = Cnil;
}

static void
siLaddress(void) {
  check_arg(1);
  vs_base[0] = make_fixnum((long)vs_base[0]);
}

static void
siLnani(void) {
  check_arg(1);
  vs_base[0] = (object)fixint(vs_base[0]);
}

static void
siLinitialization_failure(void) {
  check_arg(0);
  printf("lisp initialization failed\n");
  exit(0);
}

DEFUNO_NEW("IDENTITY",object,fLidentity,LISP
       ,1,1,NONE,OO,OO,OO,OO,void,Lidentity,(object x0),"")
{
	/* 1 args */
  RETURN1 (x0);
}

DEFUN_NEW("LISP-IMPLEMENTATION-VERSION",object,fLlisp_implementation_version,LISP
       ,0,0,NONE,OO,OO,OO,OO,(void),"")
{
	/* 0 args */
	RETURN1((make_simple_string(LISP_IMPLEMENTATION_VERSION)));
}


static void
siLsave_system(void) {
  int i;
  
#ifdef HAVE_YP_UNBIND
  extern object truename(),namestring();
  check_arg(1);
  /* prevent subsequent consultation of yp by getting
     truename now*/
  vs_base[0]=namestring(truename(vs_base[0]));
  {char name[200];
  char *dom = name;
  if (0== getdomainname(dom,sizeof(name)))
    yp_unbind(dom);}
#endif
  
#ifdef DO_BEFORE_SAVE
  DO_BEFORE_SAVE
#endif	
    
    saving_system = TRUE;
  GBC(t_contiguous);
  
  
  
#if defined(BSD) || defined(ATT)  
  brk(core_end);
  /* printf( "(breaking at core_end = %x in main ,)",core_end); */
#endif
  
/*  #ifdef DGUX */
  
/*  #endif */
  
/*  #ifdef AOSVS */
  
  
  
  
/*  #endif */
  cbgbccount = 0;
  rbgbccount = 0;
  for (i = 0;  i < (int)t_end;  i++)
    tm_table[i].tm_gbccount = 0;
  Lsave();
  saving_system = FALSE;
  alloc_page(-(holepage+nrbpage));

}

DEFVAR("*LISP-MAXPAGES*",sSAlisp_maxpagesA,SI,make_fixnum(real_maxpage),"");
DEFVAR("*SYSTEM-DIRECTORY*",sSAsystem_directoryA,SI,make_simple_string(system_directory),"");
DEFVAR("*MULTIPLY-STACKS*",sSAmultiply_stacksA,SI,Cnil,"");
DEF_ORDINARY("TOP-LEVEL",sStop_level,SI,"");
DEFVAR("*COMMAND-ARGS*",sSAcommand_argsA,SI,sLnil,"");

static void
init_main(void) {

  make_function("BY", Lby);
  make_si_function("ARGC", siLargc);
  make_si_function("ARGV", siLargv);
  
#ifdef UNIX
  make_si_function("GETENV", siLgetenv);
#endif
  
  make_si_function("MARK-VS", siLmark_vs);
  make_si_function("CHECK-VS", siLcheck_vs);
  make_si_function("RESET-STACK-LIMITS", siLreset_stack_limits);
  make_si_function("INIT-SYSTEM", siLinit_system);
  make_si_function("USER-INIT", siLuser_init);
  make_si_function("ADDRESS", siLaddress);
  make_si_function("NANI", siLnani);
  make_si_function("INITIALIZATION-FAILURE",
		   siLinitialization_failure);
  
  siClisp_pagesize =
    make_si_constant("LISP-PAGESIZE", make_fixnum(PAGESIZE));
  
  
  {object features;
  
#define ADD_FEATURE(name) \
	 features=  make_cons(make_ordinary(name),features)
  
  features=    make_cons(make_ordinary("COMMON"),
			 make_cons(make_ordinary("KCL"), Cnil));
  ADD_FEATURE("AKCL");
  ADD_FEATURE("GCL");

#ifdef BROKEN_O4_OPT
  ADD_FEATURE("BROKEN_O4_OPT");
#endif

#ifdef GMP
  ADD_FEATURE("GMP");
#endif	 
  
#if defined ( UNIX ) && !defined ( _WIN32 )
  ADD_FEATURE("UNIX");
#endif
   
#ifdef IEEEFLOAT
  ADD_FEATURE("IEEE-FLOATING-POINT");
#endif

#ifdef SGC
  ADD_FEATURE("SGC");
#endif	 

#ifdef  ADDITIONAL_FEATURES
  ADDITIONAL_FEATURES;
#endif

#ifdef  BSD
  ADD_FEATURE("BSD");
#endif
  
#ifdef LITTLE_END	 
  ADD_FEATURE("CLX-LITTLE-ENDIAN");
#endif
  
#ifndef PECULIAR_MACHINE
#define BIGM    (int)((((unsigned int)(-1))/2))	 
  { 
/*      int ONEM = -1; */
    int Bigm  = BIGM;
    int Smallm = -BIGM-1;
    int Seven = 7;
    int Three = 3;
    if ( (Smallm / Seven)  < 0
	 && (Smallm / (-Seven))  > 0
	 && (Bigm / (-Seven)) < 0 
	 && ((-Seven) / Three) == -2
	 && (Seven / (-Three)) == -2
	 && ((-Seven)/ (-Three)) == 2)
      { ADD_FEATURE("TRUNCATE_USE_C");
      }  }
#endif /* PECULIAR_MACHINE */
  
  make_special("*FEATURES*",features);}
  
  make_si_function("SAVE-SYSTEM", siLsave_system);
  make_si_sfun("CATCH-FATAL",siLcatch_fatal,ARGTYPE1(f_fixnum));
  
}
