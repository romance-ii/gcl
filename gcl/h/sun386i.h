/* created 3/14/89 by Michael Newton   */
/* %Caltech Submillimeter Observatory  */
/* POBox 4339                          */
/* Hilo HI 96720                       */
/* newton@csvax.caltech.edu            */

/* The sun386i is a ss mostly BSD, but
   uses COFF.  There are some bugs, and I was not able to get help
   through the support number.
   I _hope_ this code works for you but
   this code is supplied as is with NO WARRANTIES. */


/* We can't include bsd.h or att.h since neither is accurate (true?) */

#ifdef IN_UNIXFSYS
#define BSD
#else
#define ATT
#endif

#define UNIX
#define AV
#define SFASL


#define VSSIZE 8152
  
/* We use a COFF derived MEM_SAVE_LOCALS, READ_HEADER, COPY_TO_SAVE */
/* All of this is from wfs's code... */

#define 	MEM_SAVE_LOCALS \
  struct filehdr fileheader;\
  struct exec header;\
  struct scnhdr sectionheader;\
  int diff

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

#define COPY_TO_SAVE \
 do{for (;;) { \
		n = getc(original); \
		if (feof(original)) \
			break; \
		putc(n, save); \
	}}while (0)


#define FILECPY_HEADER	filecpy(save, original, header.a_text)


#define exec		aouthdr
#define a_text		tsize
#define a_data		dsize
#define a_bss		bsize

/* Include <fcntl.h> rather than <sys/file.h> */
/* I'm not sure whether to include this or not -- MON */
/* ???? #define HAVE_FCNTL ???? */

#define NUMBER_OPEN_FILES _NFILE 

#define SET_REAL_MAXPAGE real_maxpage = MAXPAGE

#define INIT_ALLOC \
     	heap_end = sbrk(0); \
	if (i = ((int)heap_end & (PAGESIZE - 1))) \
		sbrk(PAGESIZE - i); \
	heap_end = core_end = sbrk(0);

	
#define IF_ALLOCATE_ERR \
	if (core_end != sbrk(0)) \
		error("Someone allocated my memory!"); \
	if (core_end != sbrk(PAGESIZE*(n - m)))
	

#define cs_check(x) 

#define ADDITIONAL_FEATURES \
	     ADD_FEATURE("SUN"); \
      	     ADD_FEATURE("I386")

/* ?? add "SYSTEM-V" to the above???? -- MON */

#define I386
#define	IEEEFLOAT

#define DATA_BEGIN (char *)N_DATADDR(header)

#define N_RELOFF N_TRELOFF

#define RELOC_FILE "rel_coff.c"

/* Begin for cmpinclude */


/* End for cmpinclude */
