#define E15

#define	AV
#define	MC68K
#define	IEEEFLOAT
#define	UNIX

#define VSSIZE 8152


#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("E15") ;\
		     ADD_FEATURE("MC68K"); \
		     ADD_FEATURE("UNIPLUS-SYSTEM-V")



#define MEM_SAVE_LOCALS	struct exec header


#define COPY_TO_SAVE	filecpy(save, original, header.a_syms+header.a_trsize+header.a_drsize);


#define READ_HEADER	fread(&header, sizeof(header), 1, original); \
	if (header.fmagic != NMAGIC) \
		data_begin \
		= (char *)(TXTRELOC+header.a_text); \
	else \
		data_begin \
		= (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1)); \
	data_end = core_end; \
	original_data = header.a_data; \
	header.a_data = data_end - data_begin; \
	header.a_bss = sbrk(0) - core_end; \
	fwrite(&header, sizeof(header), 1, save); 

#define FILECPY_HEADER	filecpy(save, original, header.a_text); 

#define COPY_TO_SAVE 	filecpy(save, original, header.a_syms+header.a_trsize+header.a_drsize)

#define exec		bhdr
#define a_text		tsize
#define a_data		dsize
#define a_bss		bsize
#define a_syms		ssize
#define a_trsize	rtsize
#define a_drsize	rdsize
#define	SEGSIZ		(128*1024)
#define	TXTRELOC	(1024*1024)

#define NUMBER_OPEN_FILES _NFILE 

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("E15");\
		     ADD_FEATURE("MC68K"); \
		     ADD_FEATURE("UNIPLUS-SYSTEM-V")



#define SET_REAL_MAXPAGE real_maxpage = MAXPAGE




#define HOLEPAGE 32

#define INIT_ALLOC \
	if (brk(pagetochar(MAXPAGE)) < 0) \
		error("Can't allocate.  Good-bye!.");

#define IF_ALLOCATE_ERR \
	if (PAGESIZE*(n - m) > pagetochar(MAXPAGE) - core_end)

/* have the getcwd command */

#define GETCWD

