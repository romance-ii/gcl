#include <string.h>
#include <stdlib.h>
#include "../h/include.h"

extern object user_init();


void gcl_init_or_load1 (void (*)(void),char *);
#define init_or_load(fn,file) do {extern void fn(void); gcl_init_or_load1(fn,file);} \
  while(0)

/* #define mjoin(a,b) a ## b */
/* #define Mjoin(a,b) mjoin(a,b) */

#define ar_init(a) do {\
  char b[200];\
  \
  if (snprintf(b,sizeof(b),"ar x %-*.*slibpre_gcl.a %s.o",\
		(int)sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
		(int)sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
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
		(int)sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
		(int)sSAsystem_directoryA->s.s_dbind->st.st_fillp,\
		sSAsystem_directoryA->s.s_dbind->st.st_self,a)<=0)\
     error("Cannot append system directory\n");\
   load1(b);\
} while(0)

void
gcl_init_init()
{

  build_symbol_table();

  lsp_init("../lsp/gcl_export.lsp");

  lsp_init("../lsp/gcl_callhash.lsp");

  lsp_init("../lsp/gcl_defmacro.lsp");
  lsp_init("../lsp/gcl_evalmacros.lsp");
  lsp_init("../lsp/gcl_top.lsp");
  lsp_init("../lsp/gcl_module.lsp");

  lsp_init("../lsp/gcl_autoload.lsp");

}

void
gcl_init_system(object no_init)
{

  if (type_of(no_init)!=t_symbol)
    error("Supplied no_init is not of type symbol\n");

  lsp_init("../lsp/gcl_predlib.lsp");
  lsp_init("../lsp/gcl_assert.lsp");
  lsp_init("../lsp/gcl_listlib.lsp");
  lsp_init("../lsp/gcl_mislib.lsp");
  lsp_init("../lsp/gcl_setf.lsp");
  lsp_init("../lsp/gcl_arraylib.lsp");

  lsp_init("../lsp/gcl_seq.lsp");
  lsp_init("../lsp/gcl_seqlib.lsp");
  lsp_init("../lsp/gcl_bnum.lsp");
  lsp_init("../lsp/gcl_numlib.lsp");

  lsp_init("../lsp/gcl_defstruct.lsp");
  lsp_init("../lsp/gcl_describe.lsp");
#ifdef HAVE_JAPI_H
  lsp_init("../mod/gcl_japi.lsp");
#endif
#ifdef HAVE_TK
  lsp_init("../mod/gcl_tk.lsp"); /* Needed for package declaration when compiling later. */
#endif
#if 0
#ifdef _WIN32   
  lsp_init("../mod/gcl_win32.lsp");
#endif
#endif  
  lsp_init("../lsp/gcl_iolib.lsp");
  lsp_init("../lsp/gcl_packlib.lsp");
  lsp_init("../lsp/gcl_trace.lsp");
  lsp_init("../lsp/gcl_sloop.lsp");
  lsp_init("../lsp/gcl_serror.lsp");

  lsp_init("../cmpnew/gcl_cmptype.lsp");
  lsp_init("../cmpnew/gcl_cmpinline.lsp");
  lsp_init("../cmpnew/gcl_cmputil.lsp");

  lsp_init("../lsp/gcl_debug.lsp");
  lsp_init("../lsp/gcl_info.lsp");

  lsp_init("../cmpnew/gcl_cmpbind.lsp");
  lsp_init("../cmpnew/gcl_cmpblock.lsp");
  lsp_init("../cmpnew/gcl_cmpcall.lsp");
  lsp_init("../cmpnew/gcl_cmpcatch.lsp");
  lsp_init("../cmpnew/gcl_cmpenv.lsp");
  lsp_init("../cmpnew/gcl_cmpeval.lsp");
  lsp_init("../cmpnew/gcl_cmpflet.lsp");
  lsp_init("../cmpnew/gcl_cmpfun.lsp");
  lsp_init("../cmpnew/gcl_cmpif.lsp");
  lsp_init("../cmpnew/gcl_cmplabel.lsp");
  lsp_init("../cmpnew/gcl_cmplam.lsp");
  lsp_init("../cmpnew/gcl_cmplet.lsp");
  lsp_init("../cmpnew/gcl_cmploc.lsp");
  lsp_init("../cmpnew/gcl_cmpmap.lsp");
  lsp_init("../cmpnew/gcl_cmpmulti.lsp");
  lsp_init("../cmpnew/gcl_cmpspecial.lsp");
  lsp_init("../cmpnew/gcl_cmptag.lsp");
  lsp_init("../cmpnew/gcl_cmptop.lsp");
  lsp_init("../cmpnew/gcl_cmpvar.lsp");
  lsp_init("../cmpnew/gcl_cmpvs.lsp");
  lsp_init("../cmpnew/gcl_cmpwt.lsp");
  lsp_init("../cmpnew/gcl_cmpmain.lsp");
  
}

int
gcl_init_cmp_anon(void) {

  return 1;

}
