#define ATT
#define AV
#define UNIX
#define SFASL  


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

#define SET_REAL_MAXPAGE real_maxpage = MAXPAGE

#define INIT_ALLOC \
     	heap_end = sbrk(0); \
	if (i = ((int)heap_end & (PAGESIZE - 1))) \
		sbrk(PAGESIZE - i); \
	heap_end = core_end = sbrk(0);

	

#define cs_check(x) 

/* need to define getwd and friends in unixfsys.c
 Basically as would need to in ATT*/

#define NEED_GETWD

  /* if there is no input there return false */
#define LISTEN_FOR_INPUT(fp) \
  if((fp)->_cnt <=0 && (c=0,ioctl((fp)->_file, FIONREAD, &c),c<=0)) \
     return 0

 /* have sys/ioctl.h */
#define HAVE_IOCTL
  
