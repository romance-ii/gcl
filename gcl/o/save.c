#ifndef FIRSTWORD
#include "include.h"
#endif

static void
memory_save(char *original_file, char *save_file)
{
#ifdef DO_BEFORE_SAVE
  DO_BEFORE_SAVE ;
#endif    
  
  unexec(save_file,original_file,0,0,0);
}

LFD(Lsave)(void)
{
	char filename[256];
        extern char *kcl_self ;
	check_arg(1);
	check_type_or_pathname_string_symbol_stream(&vs_base[0]);
	coerce_to_filename(vs_base[0], filename);
#ifdef CLEANUP_CODE
	CLEANUP_CODE
#else
#ifdef USE_CLEANUP
	_cleanup();
#endif	
#endif

	if (raw_image) {

	  raw_image=FALSE;
#ifdef MEMORY_SAVE
	  MEMORY_SAVE(kcl_self,filename);
#else	  
	  memory_save(kcl_self, filename);
#endif	
	  raw_image=TRUE;

	} else {
#ifdef MEMORY_SAVE
	  MEMORY_SAVE(kcl_self,filename);
#else	  
	  memory_save(kcl_self, filename);
#endif	
	}
	exit(0);
	/*  no return  */
}
