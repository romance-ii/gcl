#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "../h/include.h"

static void
ar_init_fn(void (fn)(void),const char *s) {

  char b[200];
  struct stat ss;
  object sysd=sSAsystem_directoryA->s.s_dbind;
  
  if (stat(s,&ss)) {
    assert(snprintf(b,sizeof(b),"ar x %-.*slib%sgcl.a %s",sysd->st.st_fillp,sysd->st.st_self,FLAVOR,s)>0);
    assert(!msystem(b));
#ifdef _WIN32
    if (sSAwine_detectedA->s.s_dbind!=Cnil) {
      char *n;
      unsigned l;
      l=strlen(s)+6;
      n=alloca(l);
      snprintf(n,l,"/tmp/%s",s);
      s=(void *)n;
    }
#endif
  }
  gcl_init_or_load1(fn,s);
  assert(!unlink(s));
  
}

static void
ar_check_init_fn(void (fn)(void),char *s,object b,char *o) {

   object t;

   for (t=b->s.s_dbind;
	!endp(t) &&
	  type_of(t->c.c_car)==t_string &&
	  strcmp(s,t->c.c_car->st.st_self);t=t->c.c_cdr);
   if (endp(t))
     ar_init_fn(fn,o);

}

#define proc(init,fn,args...) {extern void init(void);fn(init,##args);}

#define ar_init(a) proc(Mjoin(init_,a),ar_init_fn,#a ".o")
#define ar_check_init(a,b) proc(Mjoin(init_,a),ar_check_init_fn,#a,b,#a ".o")


static void
lsp_init(const char *a) {

   char b[200];
   object sysd=sSAsystem_directoryA->s.s_dbind;

   assert(snprintf(b,sizeof(b),"%-.*s%s",sysd->st.st_fillp,sysd->st.st_self,a)>0)
   printf("loading %s\n",b);
   fflush(stdout);
   load(b);

}
