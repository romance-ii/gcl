#include <stdio.h>
#include "include.h"
#ifdef HAVE_AOUT
#include HAVE_AOUT
#endif
#ifdef HAVE_ELF
#include <elf.h>
#endif

#define OUR_MAX(a,b) (a > b ? a : b)

#define SEEK_TO_END_OFILE(fp)\
 do{ int m; \
     Elf32_Ehdr eheader; \
     Elf32_Shdr shdr;  \
     fseek(fp,0,SEEK_SET);   \
     fread(&eheader,sizeof(eheader),1,fp); \
     fseek(fp,eheader.e_shoff+(eheader.e_shnum -1) \
	   *eheader.e_shentsize,0); \
     fread(&shdr,eheader.e_shentsize,1,fp); \
     fseek(fp,OUR_MAX(shdr.sh_offset+ shdr.sh_size, \
		      eheader.e_shoff+(eheader.e_shnum) \
		      *eheader.e_shentsize) \
		      , SEEK_SET);\
   }while(0)



main(argc,argv)
     char *argv[];
{ FILE *fp;
  fp = fopen (argv[1],"r");

  SEEK_TO_END_OFILE(fp); 
  printf("end = %d\n",ftell(fp));
}
  
