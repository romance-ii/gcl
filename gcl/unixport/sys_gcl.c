#include <stdlib.h>
#include "../h/include.h"

extern object user_init();

void init_or_load1 (void (*)(void),char *);
#define init_or_load(fn,file) do {extern void fn(void); init_or_load1(fn,file);} \
  while(0)

static void
load1(x)
     char *x;
{printf("loading %s\n",x);
 fflush(stdout);
 load(x);}

#define mjoin(a,b) a ## b
#define Mjoin(a,b) mjoin(a,b)

#define ar_init(a) do {\
  char b[200];\
  \
  if (snprintf(b,sizeof(b),"ar x %-*.*slibgcl.a %s.o",\
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
init_init()
{

  build_symbol_table();

  lsp_init("../lsp/export.lsp");

  ar_init(defmacro);
  ar_init(evalmacros);
  ar_init(top);
  ar_init(module);

  lsp_init("../lsp/autoload.lsp");

}

#define ar_check_init(a,b) do {\
   object t;\
   \
   for (t=b->s.s_dbind;!endp(t) && type_of(t->c.c_car)==t_string && strcmp(#a,t->c.c_car->st.st_self);t=t->c.c_cdr);\
   if (endp(t))\
     ar_init(a);\
} while(0)


void
init_system(object no_init)
{

  if (type_of(no_init)!=t_symbol)
    error("Supplied no_init is not of type symbol\n");

  ar_check_init(predlib,no_init);
  ar_check_init(setf,no_init);
  ar_check_init(arraylib,no_init);
  ar_check_init(assert,no_init);
  ar_check_init(defstruct,no_init);
  ar_check_init(describe,no_init);
  ar_check_init(iolib,no_init);
  ar_check_init(listlib,no_init);
  ar_check_init(mislib,no_init);
  ar_check_init(numlib,no_init);
  ar_check_init(packlib,no_init);
  ar_check_init(seq,no_init);
  ar_check_init(seqlib,no_init);
  ar_check_init(trace,no_init);
  ar_check_init(sloop,no_init);
  ar_check_init(serror,no_init);
  ar_check_init(destructuring_bind,no_init);
  ar_check_init(loop,no_init);
  ar_check_init(defpackage,no_init);
  ar_check_init(make_defpackage,no_init);

	
  ar_check_init(cmpinline,no_init);
  ar_check_init(cmputil,no_init);

  ar_check_init(debug,no_init);
  ar_check_init(info,no_init);

  ar_check_init(cmptype,no_init);
  ar_check_init(cmpbind,no_init);
  ar_check_init(cmpblock,no_init);
  ar_check_init(cmpcall,no_init);
  ar_check_init(cmpcatch,no_init);
  ar_check_init(cmpenv,no_init);
  ar_check_init(cmpeval,no_init);
  ar_check_init(cmpflet,no_init);
  ar_check_init(cmpfun,no_init);
  ar_check_init(cmpif,no_init);
  ar_check_init(cmplabel,no_init);
  ar_check_init(cmplam,no_init);
  ar_check_init(cmplet,no_init);
  ar_check_init(cmploc,no_init);
  ar_check_init(cmpmap,no_init);
  ar_check_init(cmpmulti,no_init);
  ar_check_init(cmpspecial,no_init);
  ar_check_init(cmptag,no_init);
  ar_check_init(cmptop,no_init);
  ar_check_init(cmpvar,no_init);
  ar_check_init(cmpvs,no_init);
  ar_check_init(cmpwt,no_init);

/*    build_symbol_table(); */
	     
  sLApackageA->s.s_dbind = user_package;
  user_init();
  
}
