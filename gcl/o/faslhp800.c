/* round up i to be a multiple of (n) */
#define ROUND_UP(i,n) ((((int) (i) + n-1)/(n)) *(n))

#define	MAXPATHLEN	512
int init_address = 0;

#ifdef HPUX_SOM
#include <a.out.h>


#define GET_HEADERS(fp) \
 struct header hdr; \
 struct som_exec_auxhdr somhdr; \
 if (sizeof(hdr) !=fread(&hdr,1,sizeof(hdr),fp)) \
    {FEerror("could not read header",0);} \
  if (hdr.aux_header_size) \
    {fseek(fp,hdr.aux_header_location,0); \
       if (sizeof(somhdr) != fread(&somhdr,1,sizeof(somhdr),fp)) \
        {FEerror("could not read header",0);}} \
   else { somhdr.exec_tsize=0;somhdr.exec_dsize=0;somhdr.exec_bsize=0;}



#define SET_TOTAL_SPACE(total,fp) \
  total= ROUND_UP(somhdr.exec_tsize,sizeof(double)) \
    + somhdr.exec_dsize + somhdr.exec_bsize;\

#define READ_FASL_TO_MEMORY(memory,fp) \
do{ char *p = memory->cfd.cfd_start; \
  init_address = ((char *)somhdr.exec_entry - p); \
  if (init_address > 1000) printf("entry is offset at %x(%d)",init_address); \
    fseek(fp,somhdr.exec_tfile,0) ; \
  fread(p,1,somhdr.exec_tsize,fp); \
  fseek(fp,somhdr.exec_dfile,0) ; \
    if ((int)(p + *data_off) != somhdr.exec_dmem) \
      FEerror("bad data offset",0);\
  fread(p+ *data_off,1, \
	somhdr.exec_dsize,fp); \
}while(0)

#define TXT_ALIGN 4096

#undef BSD
#endif


#ifdef BSD
#include <a.out.h>
#define GET_HEADERS(fp) \
   struct exec hdr; fseek(fp,0,0);\
    fread(&hdr,1,sizeof(hdr),fp); \
#define SET_TOTAL_SPACE(total,fp) \
    total = hdr.a_txtsize +     hdr.a_datasize + header.a_bss;
#define READ_FASL_TO_MEMORY(memory,fp) \
 fseek(fp,sizeof(struct header) ,0); \
   fread(memory->cfd.cfd_start,1,memory->cfd.cfd_size,fp); \

#endif




read_text_and_data(memory,fp,data_off)
     object memory;
     FILE *fp;
     int *data_off;
{ int total;
  GET_HEADERS(fp);
  SET_TOTAL_SPACE(total,fp);
  *data_off = ROUND_UP(somhdr.exec_tsize,sizeof(double));
  if (total > memory->cfd.cfd_size)
    { memory->cfd.cfd_size = total; return 0;}
  
  READ_FASL_TO_MEMORY(memory,fp);
  return 1;
}

#ifndef  TXT_ALIGN
#define TXT_ALIGN sizeof(double)
#endif
 
static
fasload_help(faslfile,lib_string)
object faslfile;
char *lib_string;
{ char filename[MAXPATHLEN],tmpfile[MAXPATHLEN];
   char command [2*MAXPATHLEN]; 
   int total;
   object memory ;
   FILE *fp;

   faslfile = open_stream(faslfile, smm_input, Cnil, sKerror);
   fp = faslfile->sm.sm_fp;


  { int data_off = 0;
    GET_HEADERS(fp);
    SET_TOTAL_SPACE(total,fp);
    memory=alloc_object(t_cfdata);
    memory->cfd.cfd_self = 0;
    memory->cfd.cfd_start = 0;
    memory->cfd.cfd_size = total;
   sprintf(tmpfile,"/tmp/fasl%d",getpid());

 AGAIN:   

   memory->cfd.cfd_start = ALLOC_ALIGNED(alloc_contblock,
					 memory->cfd.cfd_size,TXT_ALIGN);
   

   coerce_to_filename(faslfile, filename);
   LD_COMMAND(command,
		kcl_self,
		memory->cfd.cfd_start,
		filename,
		(lib_string ? lib_string : " "),
		tmpfile);
    if (system(command) != 0)
      { FEerror("The linkage editor failed.", 0);}
    if(symbol_value(sLAload_verboseA)==sLAload_verboseA)
      { printf("%s\n",command); fflush(stdout);}

   {FILE *fp1 = fopen(tmpfile,"r");
    if (fp1==0) {FEerror("Couldn't open tmpfile",0);}
    if(read_text_and_data(memory,fp1,&data_off) ==0)
      {fclose(fp1); goto AGAIN;}
    fclose(fp1);
  }}
  unlink(tmpfile);
  SEEK_TO_END_OFILE(fp);
  call_init(init_address,memory,read_fasl_vector(faslfile),0);
  close_stream (faslfile);
  if(symbol_value(sLAload_verboseA)!=Cnil)
    printf("start address -T %x ",memory->cfd.cfd_start);
  return(memory->cfd.cfd_size);
}

fasload(faslfile)
     object faslfile;
{return fasload_help(faslfile,0);}

#define FASLINK

siLfaslink()
{ object *base = vs_base;
  check_arg(2);
  vs_base[0] = make_fixnum(fasload_help(base[0],object_to_string(base[1])));
  printf("done link"); fflush(stdout);
  vs_top = vs_base+1;
 return ;
}







int
faslink(faslfile, ldargstring)
object faslfile, ldargstring;
{printf("later");}

