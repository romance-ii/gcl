#include "../h/include.h"

extern void   user_init();  

void init_or_load1 ();
#define init_or_load(fn,file) do {extern int fn(); init_or_load1(fn,file);} \
   while(0)

init_init()
{

  load("../lsp/export.lsp");
  init_or_load(init_defmacro,"../lsp/defmacro.o");
  init_or_load(init_evalmacros,"../lsp/evalmacros.o");
  init_or_load(init_top,"../lsp/top.o");
  init_or_load(init_module,"../lsp/module.o");
  load("../lsp/autoload.lsp");
  load("../lsp/auto.lsp");	
}


init_system()
{
  user_init();
}

