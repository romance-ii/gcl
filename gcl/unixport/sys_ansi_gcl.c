#include <string.h>
#include <stdlib.h>
#include "../h/include.h"

extern object user_init();


void gcl_init_or_load1 (void (*)(void),char *);
#define init_or_load(fn,file) do {extern void fn(void); gcl_init_or_load1(fn,file);} \
  while(0)

#define mjoin(a,b) a ## b
#define Mjoin(a,b) mjoin(a,b)

#define ar_init(a) do {\
  char b[200];\
  \
  if (snprintf(b,sizeof(b),"ar x %-*.*slibansi_gcl.a %s.o",\
		sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
		sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
		sSAsystem_directoryA->s.s_dbind->st.st_self,#a)<=0)\
    error("Cannot unpack module " #a "o\n");\
  if (system(b)) \
    error("Cannot run ar command to unpack module " #a ".o\n");\
  init_or_load(Mjoin(init_,a),#a ".o");\
  if (unlink(#a ".o"))\
    error("Cannot unlink " #a ".o\n");\
} while(0)

#define ar_check_init(a,b) do {\
   object t;\
   \
   for (t=b->s.s_dbind;!endp(t) && type_of(t->c.c_car)==t_string && strcmp(#a,t->c.c_car->st.st_self);t=t->c.c_cdr);\
   if (endp(t))\
     ar_init(a);\
} while(0)


static void
load1(x)
     char *x;
{printf("loading %s\n",x);
 fflush(stdout);
 load(x);}

#define lsp_init(a) do {\
   char b[200];\
   \
   if (snprintf(b,sizeof(b),"%-*.*s%s",\
		sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
		sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
		sSAsystem_directoryA->s.s_dbind->st.st_self,a)<=0)\
     error("Cannot append system directory\n");\
   load1(b);\
} while(0)

void
gcl_init_init()
{

  build_symbol_table();

  lsp_init("../lsp/gcl_export.lsp");

  ar_init(gcl_defmacro);
  ar_init(gcl_evalmacros);
  ar_init(gcl_top);
  ar_init(gcl_module);

  lsp_init("../lsp/gcl_autoload.lsp");

}

void
gcl_init_system(object no_init)
{

  if (type_of(no_init)!=t_symbol)
    error("Supplied no_init is not of type symbol\n");

  ar_check_init(gcl_predlib,no_init);
  ar_check_init(gcl_setf,no_init);
  ar_check_init(gcl_arraylib,no_init);
  ar_check_init(gcl_assert,no_init);
  ar_check_init(gcl_defstruct,no_init);
  ar_check_init(gcl_describe,no_init);
  ar_check_init(gcl_iolib,no_init);
  ar_check_init(gcl_listlib,no_init);
  ar_check_init(gcl_mislib,no_init);
  ar_check_init(gcl_numlib,no_init);
  ar_check_init(gcl_packlib,no_init);
  ar_check_init(gcl_seq,no_init);
  ar_check_init(gcl_seqlib,no_init);
  ar_check_init(gcl_trace,no_init);
  ar_check_init(gcl_sloop,no_init);
  ar_check_init(gcl_serror,no_init);
  ar_check_init(gcl_destructuring_bind,no_init);
  ar_check_init(gcl_loop,no_init);
  ar_check_init(gcl_defpackage,no_init);
  ar_check_init(gcl_make_defpackage,no_init);

	
  ar_check_init(gcl_cmpinline,no_init);
  ar_check_init(gcl_cmputil,no_init);

  ar_check_init(gcl_debug,no_init);
  ar_check_init(gcl_info,no_init);

  ar_check_init(gcl_cmptype,no_init);
  ar_check_init(gcl_cmpbind,no_init);
  ar_check_init(gcl_cmpblock,no_init);
  ar_check_init(gcl_cmpcall,no_init);
  ar_check_init(gcl_cmpcatch,no_init);
  ar_check_init(gcl_cmpenv,no_init);
  ar_check_init(gcl_cmpeval,no_init);
  ar_check_init(gcl_cmpflet,no_init);
  ar_check_init(gcl_cmpfun,no_init);
  ar_check_init(gcl_cmpif,no_init);
  ar_check_init(gcl_cmplabel,no_init);
  ar_check_init(gcl_cmplam,no_init);
  ar_check_init(gcl_cmplet,no_init);
  ar_check_init(gcl_cmploc,no_init);
  ar_check_init(gcl_cmpmap,no_init);
  ar_check_init(gcl_cmpmulti,no_init);
  ar_check_init(gcl_cmpspecial,no_init);
  ar_check_init(gcl_cmptag,no_init);
  ar_check_init(gcl_cmptop,no_init);
  ar_check_init(gcl_cmpvar,no_init);
  ar_check_init(gcl_cmpvs,no_init);
  ar_check_init(gcl_cmpwt,no_init);

  ar_check_init(pcl_pkg,no_init);
  ar_check_init(pcl_walk,no_init);
  ar_check_init(pcl_iterate,no_init);
  ar_check_init(pcl_macros,no_init);
  ar_check_init(pcl_low,no_init);
  ar_check_init(pcl_gcl_low,no_init);
  ar_check_init(pcl_fin,no_init);
  ar_check_init(pcl_defclass,no_init);
  ar_check_init(pcl_defs,no_init);
  ar_check_init(pcl_fngen,no_init);
  ar_check_init(pcl_cache,no_init);
  ar_check_init(pcl_dlisp,no_init);
  ar_check_init(pcl_dlisp2,no_init);
  ar_check_init(pcl_boot,no_init);
  ar_check_init(pcl_vector,no_init);
  ar_check_init(pcl_slots_boot,no_init);
  ar_check_init(pcl_combin,no_init);
  ar_check_init(pcl_dfun,no_init);
  ar_check_init(pcl_fast_init,no_init);
  ar_check_init(pcl_braid,no_init);
  ar_check_init(pcl_generic_functions,no_init);
  ar_check_init(pcl_slots,no_init);
  ar_check_init(pcl_init,no_init);
  ar_check_init(pcl_std_class,no_init);
  ar_check_init(pcl_cpl,no_init);
  ar_check_init(pcl_fsc,no_init);
  ar_check_init(pcl_methods,no_init);
  ar_check_init(pcl_fixup,no_init);
  ar_check_init(pcl_defcombin,no_init);
  ar_check_init(pcl_ctypes,no_init);
  ar_check_init(pcl_env,no_init);
  ar_check_init(pcl_compat,no_init);
  ar_check_init(pcl_precom1,no_init);
  ar_check_init(pcl_precom2,no_init);

  ar_check_init(clcs_precom,no_init);
  ar_check_init(clcs_macros,no_init);
  ar_check_init(clcs_restart,no_init);
  ar_check_init(clcs_handler,no_init);
  ar_check_init(clcs_debugger,no_init);
  ar_check_init(clcs_conditions,no_init);
  ar_check_init(clcs_condition_definitions,no_init);
  ar_check_init(clcs_kcl_cond,no_init);
  ar_check_init(clcs_top_patches,no_init);
  ar_check_init(clcs_install,no_init);
  
}

static int ngazonk;

int
gcl_init_cmp_anon(void) {

  int i=0;

  switch(ngazonk++) {
  case 0:
    ar_check_init(pcl_gazonk0,Cnil);
    break;
  case 1:
    ar_check_init(pcl_gazonk1,Cnil);
    break;
  case 2:
    ar_check_init(pcl_gazonk2,Cnil);
    break;
  case 3:
    ar_check_init(pcl_gazonk3,Cnil);
    break;
  case 4:
    ar_check_init(pcl_gazonk4,Cnil);
    break;
  case 5:
    ar_check_init(pcl_gazonk5,Cnil);
    break;
  case 6:
    ar_check_init(pcl_gazonk6,Cnil);
    break;
  case 7:
    ar_check_init(pcl_gazonk7,Cnil);
    i=1;
    break;
  default:
    i=-1;
    break;
  }

  return i;

}
