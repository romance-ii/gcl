#include "../h/include.h"

extern void user_init();

void init_or_load1 ();
#define init_or_load(fn,file) do {extern int fn(); init_or_load1(fn,file);} \
  while(0)

static void
load1(x)
     char *x;
{printf("loading %s\n",x);
 fflush(stdout);
 load(x);}


void
init_init()
{

  load1("../lsp/export.lsp");
  init_or_load(init_defmacro,"../lsp/defmacro.o");
  init_or_load(init_evalmacros,"../lsp/evalmacros.o");
  init_or_load(init_top,"../lsp/top.o");
  init_or_load(init_module,"../lsp/module.o");
  load1("../lsp/autoload.lsp");
}

void
init_system()
{
  init_or_load(init_predlib,"../lsp/predlib.o");
  init_or_load(init_setf,"../lsp/setf.o");
  init_or_load(init_arraylib,"../lsp/arraylib.o");
  init_or_load(init_assert,"../lsp/assert.o");
  init_or_load(init_defstruct,"../lsp/defstruct.o");
  init_or_load(init_describe,"../lsp/describe.o");
  init_or_load(init_iolib,"../lsp/iolib.o");
  init_or_load(init_listlib,"../lsp/listlib.o");
  init_or_load(init_mislib,"../lsp/mislib.o");
  init_or_load(init_numlib,"../lsp/numlib.o");
  init_or_load(init_packlib,"../lsp/packlib.o");
  init_or_load(init_seq,"../lsp/seq.o");
  init_or_load(init_seqlib,"../lsp/seqlib.o");
  init_or_load(init_trace,"../lsp/trace.o");
  init_or_load(init_sloop,"../lsp/sloop.o");
  init_or_load(init_serror,"../lsp/serror.o"); 
  init_or_load(init_destructuring_bind,"../lsp/destructuring_bind.o");
  init_or_load(init_defpackage,"../lsp/defpackage.o");
  init_or_load(init_make_defpackage,"../lsp/make_defpackage.o");

	
  init_or_load(init_cmpinline,"../cmpnew/cmpinline.o");
  init_or_load(init_cmputil,"../cmpnew/cmputil.o");

  init_or_load(init_debug,"../lsp/debug.o");
  init_or_load(init_info,"../lsp/info.o");

  init_or_load(init_cmptype,"../cmpnew/cmptype.o");
  init_or_load(init_cmpbind,"../cmpnew/cmpbind.o");
  init_or_load(init_cmpblock,"../cmpnew/cmpblock.o");
  init_or_load(init_cmpcall,"../cmpnew/cmpcall.o");
  init_or_load(init_cmpcatch,"../cmpnew/cmpcatch.o");
  init_or_load(init_cmpenv,"../cmpnew/cmpenv.o");
  init_or_load(init_cmpeval,"../cmpnew/cmpeval.o");
  init_or_load(init_cmpflet,"../cmpnew/cmpflet.o");
  init_or_load(init_cmpfun,"../cmpnew/cmpfun.o");
  init_or_load(init_cmpif,"../cmpnew/cmpif.o");
  init_or_load(init_cmplabel,"../cmpnew/cmplabel.o");
  init_or_load(init_cmplam,"../cmpnew/cmplam.o");
  init_or_load(init_cmplet,"../cmpnew/cmplet.o");
  init_or_load(init_cmploc,"../cmpnew/cmploc.o");
  init_or_load(init_cmpmap,"../cmpnew/cmpmap.o");
  init_or_load(init_cmpmulti,"../cmpnew/cmpmulti.o");
  init_or_load(init_cmpspecial,"../cmpnew/cmpspecial.o");
  init_or_load(init_cmptag,"../cmpnew/cmptag.o");
  init_or_load(init_cmptop,"../cmpnew/cmptop.o");
  init_or_load(init_cmpvar,"../cmpnew/cmpvar.o");
  init_or_load(init_cmpvs,"../cmpnew/cmpvs.o");
  init_or_load(init_cmpwt,"../cmpnew/cmpwt.o");

	     
  sLApackageA->s.s_dbind = user_package;
    user_init();
  
}
