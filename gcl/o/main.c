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

#include <string.h>

#define IN_MAIN

#ifdef KCLOVM
#include <ovm/ovm.h>
void change_contexts();
int ovm_process_created; 
void initialize_process();
#endif

#include "include.h"
#ifdef UNIX
#include <signal.h>


#endif
#include "page.h"

bool saving_system ;

#ifdef BSD
#include <sys/time.h>
#ifndef SGI
#include <sys/resource.h>
#endif
#endif

#ifdef AOSVS

#endif


#define LISP_IMPLEMENTATION_VERSION "April 1994"

char *system_directory;

int page_multiple=1;


#define EXTRA_BUFSIZE 8
char stdin_buf[BUFSIZ + EXTRA_BUFSIZE];
char stdout_buf[BUFSIZ + EXTRA_BUFSIZE];

int debug;			/* debug switch */
int initflag = FALSE;		/* initialized flag */

int real_maxpage;
object sSAlisp_maxpagesA;

object siClisp_pagesize;

object sStop_level;


object sSAmultiply_stacksA;
int stack_multiple=1;
static object stack_space;


int cssize;

int sgc_enabled;
void install_segmentation_catcher();

#ifndef SIG_STACK_SIZE
#define SIG_STACK_SIZE 1000
#endif
#ifndef SETUP_SIG_STACK
#if defined(HAVE_SIGACTION) || defined(HAVE_SIGVEC)
        struct sigstack estack;
#endif
#endif

main(argc, argv, envp) 
int argc;
char **argv, **envp;
{
	FILE *i;
#ifdef BSD
#ifdef RLIMIT_STACK
	struct rlimit rl;
#endif
#endif
#if defined(HAVE_SIGACTION) || defined(HAVE_SIGVEC)

#ifdef SETJMP_ONE_DIRECTION
	static
#endif
	  /* make sure the stack is 8 byte aligned */
	double estack_buf[SIG_STACK_SIZE];
#endif

#ifdef RECREATE_HEAP
	RECREATE_HEAP
#endif
	
	setbuf(stdin, stdin_buf); 
	setbuf(stdout, stdout_buf);
	
	ARGC = argc;
	ARGV = argv;
#ifdef UNIX
	ENVP = envp;
#endif

#ifdef UNIX
/*
	if (argv[0][0] != '/')
		error("can't get the program name");
*/
	kcl_self = argv[0];
#ifdef FIX_FILENAME
	{ int n = strlen(kcl_self);
	 FIX_FILENAME(Cnil,kcl_self);
	 if (strlen(kcl_self)> n) error("name grew");
	}
#endif	
	if (!initflag) {

		system_directory= (char *) malloc(strlen(argv[0])+3);
					
		strcpy(system_directory, argv[0]);
		if (system_directory[0] != '/')
			strcpy(system_directory, "./");
		else {
			int j;

			for (j = strlen(system_directory);
                             system_directory[j-1] != '/';  --j)
				;
			system_directory[j] = '\0';
		}
	}

#endif
#ifdef AOSVS












#endif

	if (!initflag && argc > 1) {
#ifdef UNIX
		if (argv[1][strlen(argv[1])-1] != '/')
#endif
#ifdef AOSVS

#endif
			error("can't get the system directory");
		strcpy(system_directory, argv[1]);
	}

	GBC_enable = FALSE;

	/* if stack_space not zero we have grown the stack space */
	if (stack_space == 0)
	  {
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
	    ihs_limit = &ihs_org[IHSSIZE];}

	vs_top = vs_base = vs_org;
	clear_stack(vs_top,vs_top+200);
	ihs_top = ihs_org-1;
	bds_top = bds_org-1;
	frs_top = frs_org-1;
	cs_org = &argc;

	cssize = CSSIZE;
	install_segmentation_catcher();

#ifdef BSD
#ifdef RLIMIT_STACK
	getrlimit(RLIMIT_STACK, &rl);
	cssize = rl.rlim_cur/4 - 4*CSGETA;
#endif	
#endif

#ifdef AV
	cs_limit = cs_org - cssize;
#endif
#ifdef MV

#endif
        
	set_maxpage();
#ifdef SETUP_SIG_STACK
	SETUP_SIG_STACK
#else
#if defined(HAVE_SIGACTION) || defined(HAVE_SIGVEC)
	bzero(estack_buf,sizeof(estack_buf));
	estack.ss_sp = (char *) &estack_buf[SIG_STACK_SIZE-1];
	estack.ss_onstack=0;
	sigstack(&estack,0);
#endif	
#endif	
	

	if (initflag) {
		if (saving_system) {
			saving_system = FALSE;
			terminal_io->sm.sm_object0->sm.sm_fp = stdin;
			terminal_io->sm.sm_object1->sm.sm_fp = stdout;
			init_big1();
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
	      again:
		super_funcall(sStop_level);
		if (type_of(sSAmultiply_stacksA->s.s_dbind)==t_fixnum)
		  {multiply_stacks(fix(sSAmultiply_stacksA->s.s_dbind));
		   goto  again;}
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

	init_init();

	sLApackageA->s.s_dbind = user_package;

	lex_new();
	vs_base = vs_top;
	initflag = TRUE;

	interrupt_enable = TRUE;

	super_funcall(sStop_level);

}

/* catch certain signals */
void install_segmentation_catcher()
{
#ifdef INSTALL_SEGMENTATION_CATCHER
  INSTALL_SEGMENTATION_CATCHER;
#else
#ifdef SIGSEGV
       (void) gcl_signal(SIGSEGV,segmentation_catcher);
#endif
#endif
}

int catch_fatal=1;
void
error(s)
char *s;
{
        if (catch_fatal>0 && interrupt_enable )
	  {catch_fatal = -1;
	   if (sgc_enabled)
	     { sgc_quit();}
	   if (sgc_enabled==0)
	     { install_segmentation_catcher() ;}
	   FEerror("Caught fatal error [memory may be damaged]",0); }
	printf("\nUnrecoverable error: %s.\n", s);
	fflush(stdout);
#ifdef UNIX
	abort();
#endif
}


initlisp()
{
	int j;

	if (NULL_OR_ON_C_STACK(&j) == 0
	    || NULL_OR_ON_C_STACK(Cnil) != 0
	    || (((unsigned long )core_end) !=0
	        && NULL_OR_ON_C_STACK(core_end) != 0))
	  { /* check person has correct definition of above */
	    error("NULL_OR_ON_C_STACK macro invalid");
	  }
	init_alloc();

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
	
	init_symbol();

	init_package();

	Cnil->s.s_hpack = lisp_package;
	import(Cnil, lisp_package);
	export(Cnil, lisp_package);

	Ct->s.s_hpack = lisp_package;
	import(Ct, lisp_package);
	export(Ct, lisp_package);

	sLquote = make_ordinary("QUOTE");
	sLfunction = make_ordinary("FUNCTION");
	sLlambda = make_ordinary("LAMBDA");
	sLlambda_block = make_ordinary("LAMBDA-BLOCK");
	sLlambda_closure = make_ordinary("LAMBDA-CLOSURE");
	sLlambda_block_closure = make_ordinary("LAMBDA-BLOCK-CLOSURE");
	sLspecial = make_ordinary("SPECIAL");

	
	NewInit();
	init_typespec();
	init_number();
	init_character();

	init_read();
	init_bind();
	init_pathname();
	init_print();
	init_GBC();

#ifdef UNIX
#ifndef DGUX
	init_unixfasl();
	init_unixsys();
	init_unixsave();
#else



#endif
#endif

	init_alloc_function();
	init_array_function();
	init_character_function();
	init_file_function();
	init_list_function();
	init_package_function();
	init_pathname_function();
	init_predicate_function();
	init_print_function();
	init_read_function();
	init_sequence_function();
#if  defined(KCLOVM) || defined(RUN_PROCESS)
	init_socket_function();
#endif	
	init_structure_function();
	init_string_function();
	init_symbol_function();
	init_typespec_function();
	init_hash();
	init_cfun();

#ifdef UNIX
	init_unixfsys();
	init_unixtime();
#endif
	init_eval();
	init_lex();
	init_prog();
	init_catch();
	init_block();
        init_macros();
	init_conditional();
	init_reference();
	init_assignment();
	init_multival();
	init_error();
	init_let();
	init_mapfun();
	init_iteration();
	init_toplevel();

	init_cmpaux();

	init_main();

	init_format();
	init_links();

	init_fat_string();
#ifdef CMAC
	init_cmac();
#endif	

}

vs_overflow()
{
	if (vs_limit > vs_org + stack_multiple *  VSSIZE)
		error("value stack overflow");
	vs_limit += STACK_OVER*VSGETA;
	FEerror("Value stack overflow.", 0);
}


bds_overflow()
{
	--bds_top;
	if (bds_limit > bds_org + stack_multiple *  BDSSIZE)
		error("bind stack overflow");
	bds_limit += STACK_OVER  *BDSGETA;
	FEerror("Bind stack overflow.", 0);
}

frs_overflow()
{
	--frs_top;
	if (frs_limit > frs_org + stack_multiple *  FRSSIZE)
		error("frame stack overflow");
	frs_limit += STACK_OVER* FRSGETA;
	FEerror("Frame stack overflow.", 0);
}

ihs_overflow()
{
	--ihs_top;
	if (ihs_limit > ihs_org + stack_multiple *  IHSSIZE)
		error("invocation history stack overflow");
	ihs_limit += STACK_OVER*IHSGETA;
	FEerror("Invocation history stack overflow.", 0);
}

void
segmentation_catcher()
{int x;
#ifndef SIG_STACK_SIZE 
 if (&x < cs_limit)
	cs_overflow();
 else 
  {printf("Segmentation violation: c stack ok:signalling error");
	}
#endif
  error("Segmentation violation.");
}

cs_overflow()
{
#ifdef AV
	if (cs_limit < cs_org - cssize)
		error("control stack overflow");
	cs_limit -= CSGETA;
#endif
#ifdef MV



#endif
	FEerror("Control stack overflow.", 0);
}

end_of_file()
{
	error("end of file");
}

DEFUNO("BYE",int,fLbye,LISP
   ,0,1,NONE,II,OO,OO,OO,Lby,"")(va_alist)
va_dcl
{	int n=VFUN_NARGS;
	int exit_code;
	va_list ap;
	{ va_start(ap);
	  if (n>=1) exit_code=va_arg(ap,int);else goto LDEFAULT1;
	  goto LEND_VARARG;
	LDEFAULT1: exit_code = 0;
	LEND_VARARG: va_end(ap);}

#ifdef UNIX
/*	printf("Bye.\n"); */
	exit(exit_code);
#endif

	RETURN(1,int,exit_code, 0); 
}

c_trace()
{
#ifdef AOSVS

#endif
}

siLargc()
{
	check_arg(0);
	vs_push(make_fixnum(ARGC));
}

siLargv()
{
	int i;

	check_arg(1);
	if (type_of(vs_base[0]) != t_fixnum ||
	    (i = fix(vs_base[0])) < 0 ||
	    i >= ARGC)
		FEerror("Illegal argument index: ~S.", 1, vs_base[0]);
	vs_base[0] = make_simple_string(ARGV[i]);
}

#ifdef UNIX
siLgetenv()
{
	char name[256];
	int i;
	char *value;
	extern char *getenv();

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
#endif

object *vs_marker;

siLmark_vs()
{
	check_arg(0);
	vs_marker = vs_base;
	vs_base[0] = Cnil;
}

siLcheck_vs()
{
	check_arg(0);
	if (vs_base != vs_marker)
		FEerror("Value stack is flawed.", 0);
	vs_base[0] = Cnil;
}

object
siLcatch_fatal(i)
{catch_fatal=i;
 return Cnil;}


void
siLreset_stack_limits(arg)
int arg;
{
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
#ifdef AV
	if (&arg > cs_org - cssize + 16)
		cs_limit = cs_org - cssize;

	else
		error("can't reset cs_limit");
#endif
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

multiply_stacks(m)
     int m;
{  int n;
   object x;
   object gc_pro=stack_space;
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






 
  

siLinit_system()
{
	check_arg(0);
	init_system();
	vs_base[0] = Cnil;
}

siLaddress()
{
	check_arg(1);
	vs_base[0] = make_fixnum((int)vs_base[0]);
}

siLnani()
{
	check_arg(1);
	vs_base[0] = (object)fixint(vs_base[0]);
}

siLinitialization_failure()
{
	check_arg(0);
	printf("lisp initialization failed\n");
	exit(0);
}

DEFUNO("IDENTITY",object,fLidentity,LISP
   ,1,1,NONE,OO,OO,OO,OO,Lidentity,"")(x0)
object x0;
{
	/* 1 args */
  RETURN1 (x0);
}

DEFUNO("LISP-IMPLEMENTATION-VERSION",object,fLlisp_implementation_version,LISP
   ,0,0,NONE,OO,OO,OO,OO,Llisp_implementation_version,"")()
{
	/* 0 args */

	RETURN1((make_simple_string(LISP_IMPLEMENTATION_VERSION)));
}


siLsave_system()
{
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

#ifdef DGUX

#endif

#ifdef AOSVS




#endif
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

init_main()
{
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

#ifdef UNIX
#ifndef WINDOWSNT	 
	ADD_FEATURE("UNIX");
#endif	
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
	  int ONEM = -1;
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
#endif	 


	 
	make_special("*FEATURES*",features);}

	make_si_function("SAVE-SYSTEM", siLsave_system);
	make_si_sfun("CATCH-FATAL",siLcatch_fatal,ARGTYPE1(f_fixnum));

}
