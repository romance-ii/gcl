#define MAC2
#define AV
#define UNIX
#define SFASL  

#if defined(IN_FILE) || defined(IN_UNIXFASL) || defined(IN_UNIXSAVE) || defined(IN_UNIXTIME) || defined(IN_SFASL) || defined(IN_RSYM)
#define ATT
#else
#define BSD
#endif

#ifdef IN_MAIN
#undef BSD
#include <sys/time.h>
#include <sys/resource.h>
/* note that rl does not need to be declared if we do not have
   RLIMIT_STACK defined */
#undef RLIMIT_STACK
#endif

#ifdef IN_SFASL
#include <stdio.h>
#include <filehdr.h>
#include <aouthdr.h>
#include <scnhdr.h>
#include <reloc.h>
#include <syms.h>
#include <storclass.h>
#include <ldfcn.h>
#endif

#define ADDITIONAL_FEATURES \
     ADD_FEATURE("SUN"); \
     ADD_FEATURE("MAC2"); \
     ADD_FEATURE("MC68020"); \
     ADD_FEATURE("BSD")


#define	MC68020
#define	IEEEFLOAT



#define VSSIZE 8152

#define ISCOFF(x) (x == MC68MAGIC)

#define 	MEM_SAVE_LOCALS \
  struct filehdr fileheader;\
  struct exec header;\
  struct scnhdr sectionheader;\
  int diff


#define COPY_TO_SAVE \
 do{for (;;) { \
		n = getc(original); \
		if (feof(original)) \
			break; \
		putc(n, save); \
	}}while (0)

#define READ_HEADER \
 do{	fread(&fileheader, sizeof(fileheader), 1, original); \
	fread(&header, sizeof(header), 1, original); \
	data_begin = (char *)header.data_start; \
	data_end = core_end; \
	original_data = header.a_data; \
	header.a_data = data_end - data_begin; \
	diff = header.a_data - original_data; \
	header.a_bss = sbrk(0) - core_end; \
	fileheader.f_symptr += diff; \
	fwrite(&fileheader, sizeof(fileheader), 1, save);\
	fwrite(&header, sizeof(header), 1, save); \
	fread(&sectionheader, sizeof(sectionheader), 1, original); \
	if (sectionheader.s_lnnoptr) \
		sectionheader.s_lnnoptr += diff; \
	fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	fread(&sectionheader, sizeof(sectionheader), 1, original); \
	sectionheader.s_size += diff; \
	if (sectionheader.s_lnnoptr) \
		sectionheader.s_lnnoptr += diff; \
	fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	fread(&sectionheader, sizeof(sectionheader), 1, original); \
	sectionheader.s_paddr += diff; \
	sectionheader.s_vaddr += diff; \
	sectionheader.s_size = header.a_bss; \
	if (sectionheader.s_lnnoptr) \
		sectionheader.s_lnnoptr += diff; \
	fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	for (n = 4;  n <= fileheader.f_nscns;  n++) { \
		fread(&sectionheader, sizeof(sectionheader), 1, original); \
		if (sectionheader.s_scnptr) \
			sectionheader.s_scnptr += diff; \
		if (sectionheader.s_lnnoptr) \
			sectionheader.s_lnnoptr += diff; \
		fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	}}while(0)

#define FILECPY_HEADER	filecpy(save, original, header.a_text)


#define exec		aouthdr
#define a_text		tsize
#define a_data		dsize
#define a_bss		bsize

/* Include <fcntl.h> rather than <sys/file.h> */

#define HAVE_FCNTL

#define NUMBER_OPEN_FILES _NFILE 

#define SET_REAL_MAXPAGE real_maxpage = MAXPAGE ; set42sig();

#define ROUND_UP_SBRK(x)  \
       do {int i; \
	     if (i = ((int)x & (PAGESIZE - 1))) \
	       x=sbrk(PAGESIZE - i); } while(0);

#define FIX_RANDOM_SBRK \
do {char *x=sbrk(0); \
  if (core_end != x) \
   { ROUND_UP_SBRK(x); x=sbrk(0);\
     while (core_end < x) \
       { type_map[page(core_end)]= t_other; \
	 core_end = core_end + PAGESIZE;} \
     if (core_end !=x) error("Someone allocated my memory");}} while (0)
 
     
#define INIT_ALLOC \
     	heap_end = sbrk(0); ROUND_UP_SBRK(heap_end);\
	heap_end = core_end = sbrk(0);

#define IF_ALLOCATE_ERR \
        FIX_RANDOM_SBRK; \
	if (core_end != sbrk(PAGESIZE*(n - m)))

#define SYM_EXTERNAL_P(sym) ((sym)->n_type & N_EXT)
     
#define cs_check(x) 

/* need to define getwd and friends in unixfsys.c
 Basically as would need to in ATT*/


#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -N -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)

#define SYM_UNDEF_P(sym) ((N_SECTION(sym)) == N_UNDEF)
#define NUM_AUX(sym) 0

       /* the section like N_ABS,N_TEXT,.. */


#undef HAVE_AOUT
#undef WANT_VALLOC
#undef NEED_GETWD

  /* We have socket utilities, and can fork off a process
   and get a stream connection with it */
#define RUN_PROCESS

#define HAVE_XDR

  /* if there is no input there return false */
#define LISTEN_FOR_INPUT(fp) \
  if((fp)->_cnt <=0 && (c=0,ioctl((fp)->_file, FIONREAD, &c),c<=0)) \
     return 0

 /* have sys/ioctl.h */
#define HAVE_IOCTL
  

#define HAVE_SIGVEC
  
#define DATA_BEGIN (char *)N_DATADDR(header)

#define RELOC_FILE "rel_mac2.c"

/* Begin for cmpinclude */


/* End for cmpinclude */


