#define DOS
#ifndef MSDOS
#define MSDOS
#endif
#define I386
#define LITTLE_END
#include "bsd.h"
#include "386.h"

#ifdef HAVE_AOUT
#undef HAVE_AOUT
#endif
#define HAVE_AOUT <aout.h>

  /* include ptimes and so on in the image */
#define CMAC

#define  SHARP_EQ_CONTEXT_SIZE 1024

#undef FILECPY_HEADER  
#define FILECPY_HEADER filecpy(save, original, header.a_text)

#define IS_DIR_SEPARATOR(x) ((x=='/')||(x=='\\'))
#undef SET_REAL_MAXPAGE
/* fix this to stat the swap file to give idea of swap space */
#define DEFAULT_BINARY_MODE _fmode = O_BINARY

#define SET_BINARY_MODE  _fmode = O_BINARY;

void binary_file_mode();	
#define SET_REAL_MAXPAGE do { binary_file_mode(); real_maxpage = MAXPAGE;} \
	while(0)

struct rlimit { int i; } ;


#undef LISTEN_FOR_INPUT
#undef HAVE_IOCTL




#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("DOS"); \
      	     ADD_FEATURE("I386")


#define	IEEEFLOAT


#define DATA_BEGIN (char *)N_DATADDR(header)

#define N_RELOFF N_TRELOFF

#define RELOC_FILE "rel_sun3.c"

#define PAGEWIDTH 12 

#define reloc  relocation_info



/* some regular bsd bells and whistles which aren't here */

#undef HAVE_SIGVEC
#undef HAVE_XDR
#undef RUN_PROCESS


#ifdef IN_UNIXTIME
#undef BSD
#define ATT
#ifndef EMX
#define tms_cutime tms_stime
#endif
#endif

#define FIX_PATH_STRING(x) fix_path_string_dos(x)

#ifdef IN_RSYM
#define _std_h
#include <fcntl.h>
#endif

#define RSYM_COMMAND(command,system_directory,kcl_self,tmpfile1) \
  sprintf(command,"go32 rsym %s %s",kcl_self,tmpfile1)

#define GETWD(x) (bzero(x,MAXPATHLEN),getwd(x))

#define DOES_CRLF
#define WRITEC_NEWLINE(strm) (writec_stream('\r',strm),\
			      writec_stream('\n', strm))


/* Begin for cmpinclude */



/* End for cmpinclude */

