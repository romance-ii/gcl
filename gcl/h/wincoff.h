#include  "coff/i386.h"
#undef BSD
#define HAVE_FILEHDR
#define COFF
#define NSYMS(x) (x).f_nsyms
#define N_SYMOFF(x) (x).f_symptr
#define N_BADMAG(x) ((x).f_magic != 0x5A4D)

/* prevent duplicate definition...  we wont be using varargs
   in this */
#undef va_start

#include "windows.h"
#ifdef __MINGW32__
#include "minglacks.h"
#else
#include "cyglacks.h"
#endif

struct aouthdr {AOUTHDR x;};   




