#define BSD 1
#define UNIX
#define AV
#define SFASL
#define HAVE_AOUT <a.out.h>


#define MEM_SAVE_LOCALS	\
  struct exec header;\
  int stsize

#define READ_HEADER 	fread(&header, sizeof(header), 1, original); \
	data_begin=DATA_BEGIN; \
	data_end = core_end; \
	original_data = header.a_data; \
	header.a_data = data_end - data_begin; \
	header.a_bss = 0; \
	fwrite(&header, sizeof(header), 1, save);

#define FILECPY_HEADER \
	filecpy(save, original, header.a_text - sizeof(header));

#define  COPY_TO_SAVE \
  filecpy(save, original, header.a_syms+header.a_trsize+header.a_drsize); \
  fread(&stsize, sizeof(stsize), 1, original); \
  fwrite(&stsize, sizeof(stsize), 1, save); \
filecpy(save, original, stsize - sizeof(stsize))


#define NUMBER_OPEN_FILES getdtablesize() 


extern char etext;




#define SET_REAL_MAXPAGE do { struct rlimit data_rlimit; \
				extern char etext; \
			     real_maxpage = MAXPAGE ; \
     	getrlimit(RLIMIT_DATA, &data_rlimit); \
	real_maxpage = ((unsigned int)&etext/PAGESIZE + data_rlimit.rlim_cur/PAGESIZE); \
	if (real_maxpage > MAXPAGE) \
		real_maxpage = MAXPAGE ; } while(0)
     
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


#define LD_COMMAND(command,main,start,input,ldarg,output) \
  sprintf(command, "ld -d -N -x -A %s -T %x %s %s -o %s", \
            main,start,input,ldarg,output)

#define SYM_UNDEF_P(sym) ((N_SECTION(sym)) == N_UNDEF)
#define NUM_AUX(sym) 0

       /* the section like N_ABS,N_TEXT,.. */


  /* We have socket utilities, and can fork off a process
   and get a stream connection with it */
#define RUN_PROCESS

#define HAVE_XDR

#define WANT_VALLOC  

  /* if there is no input there return false */
#define LISTEN_FOR_INPUT(fp) \
  if((fp)->_cnt <=0 && (c=0,ioctl((fp)->_file, FIONREAD, &c),c<=0)) \
     return 0

 /* have sys/ioctl.h */
#define HAVE_IOCTL
  

#define HAVE_SIGVEC
  
