#include "../h/include.h"

void init_or_load1 ();
#define init_or_load(fn,file) do {extern int fn(); init_or_load1(fn,file);} \
  while(0)

void
init_init()
{

  load("../lsp/export.lsp");
  init_or_load(init_defmacro,"../lsp/defmacro.o");
  init_or_load(init_evalmacros,"../lsp/evalmacros.o");
  init_or_load(init_top,"../lsp/top.o");
  init_or_load(init_module,"../lsp/module.o");
  load("../lsp/autoload.lsp");
}

void
init_system()
{
  load("../lsp/predlib.lsp");
  load("../lsp/setf.lsp");
  load("../lsp/arraylib.lsp");
  init_or_load(init_assert,"../lsp/assert.o");
  load("../lsp/defstruct.lsp");
  init_or_load(init_describe,"../lsp/describe.o");
  init_or_load(init_iolib,"../lsp/iolib.o");
  init_or_load(init_listlib,"../lsp/listlib.o");
  init_or_load(init_mislib,"../lsp/mislib.o");
  init_or_load(init_numlib,"../lsp/numlib.o");
  load("../lsp/packlib.lsp");
  init_or_load(init_seq,"../lsp/seq.o");
  init_or_load(init_seqlib,"../lsp/seqlib.o");
  init_or_load(init_trace,"../lsp/trace.o");
  load("../lsp/sloop.lsp");
	
  load("../cmpnew/cmpinline.lsp");
  load("../cmpnew/cmputil.lsp");

  load("../lsp/debug.lsp");

  load("../cmpnew/cmptype.lsp");
  init_or_load(init_cmpbind,"../cmpnew/cmpbind.o");
  load("../cmpnew/cmpblock.lsp");
  load("../cmpnew/cmpcall.lsp");
  init_or_load(init_cmpcatch,"../cmpnew/cmpcatch.o");
  load("../cmpnew/cmpenv.lsp");
  load("../cmpnew/cmpeval.lsp");
  load("../cmpnew/cmpflet.lsp");
  load("../cmpnew/cmpfun.lsp");
  init_or_load(init_cmpif,"../cmpnew/cmpif.o");
  load("../cmpnew/cmplabel.lsp");
  load("../cmpnew/cmplam.lsp");
  init_or_load(init_cmplet,"../cmpnew/cmplet.o");
  load("../cmpnew/cmploc.lsp");
  init_or_load(init_cmpmap,"../cmpnew/cmpmap.o");
  init_or_load(init_cmpmulti,"../cmpnew/cmpmulti.o");
  load("../cmpnew/cmpspecial.lsp");
  load("../cmpnew/cmptag.lsp");
  load("../cmpnew/cmptop.lsp");
  load("../cmpnew/cmpvar.lsp");
  load("../cmpnew/cmpvs.lsp");
  load("../cmpnew/cmpwt.lsp");
	     
  Vpackage->s.s_dbind = user_package;
}
