#include <sys/types.h>
#include <sys/limits.h>
#include <mon.h>
extern struct monglobal   _mondata;
static struct desc {                           /*function descriptor fields*/
  caddr_t begin;                  /*initial code address*/
  caddr_t toc;                      /*table of contents address*/
  caddr_t env; 		/*environment pointer*/
    } ; 			 /*function descriptor structure*/
static struct desc *fd;		 /*pointer to function descriptor*/

#include "../h/config.h"
#include "../h/ext_sym.h"
#define CF_FLAG (1 << 31) 
extern char *kcl_self;

#define function_address(f)   (((struct desc *)(f))->begin)

mymonitor(low,high,x,leng)
     int low,high;
     object x;
{ if (0 == x) {monitor(0); return 0;}
  monitor(low,high,x,leng);
}

static int newmonstartup();

mymonstartup(low,high)
caddr_t low,high;
{
/* static struct frag f[3];
   
 f[0].p_low = function_address(&__start);
 f[0].p_high = function_address(&init_cmpwt);
 f[1].p_low = low;
 f[1].p_high = high;
 f[2].p_low = 0;
 f[3].p_high = 0;
 newmonstartup(-1,f);
*/
  _mondata.prof_type = _PROF_TYPE_IS_PG; 
 return monstartup(low,high);
}


/*
symbol table address + &__start == the real address
[if the ld is done with -T0 ]
*/
 
 /*
The format of symbol table entries.
[144]	m   0x0001486c     .text     2  extern    void()          .Foo
[145]	a2           0              60  188239     152            

 */
/* the monstartup code in aix3.1 is broken: */




static size1(f)
     struct frag *f;
{ int range;
  int fromsize;
  int total = 0;
  int tonum;
  while (f->p_high)
   {range = f->p_high - f->p_low;
    fromsize = FROM_STG_SIZE(range);
    tonum = TO_NUM_ELEMENTS(range);
    if ( tonum < MINARCS ) tonum = MINARCS;
    else
      if ( tonum > TO_MAX-1 ) tonum = TO_MAX-1;
    tonum = tonum * sizeof( struct tostruct );
    total += fromsize + tonum + sizeof(struct gfctl);
    f++;
  }
  return total;
}

static int 
newmonstartup(a,f)
     struct frag *f;
{struct prof *pb = malloc(3*sizeof(struct prof));
 struct frag *ff =f;
 int i = 0 ;
 int nranges = 0;
 int total = 0;
 int range;
 caddr_t buffer ;
 int callcntsize;
 bzero(pb,3*sizeof(struct prof));

 while(ff->p_high)
   { 
     pb[i].p_high = (caddr_t) ROUNDUP((int)f[i].p_high, INST_CNT_SIZE);
     pb[i].p_low = (caddr_t) ROUNDDOWN((int)f[i].p_low, INST_CNT_SIZE);
     range = pb[i].p_high - pb[i].p_low;
     total += HIST_STG_SIZE(range);
     ff++;
     i++;
   }
  nranges = i;
  callcntsize = size1(f);
  total +=   callcntsize;
 
  buffer = (caddr_t) malloc(total);
   
 
  _mondata.monstubuf = buffer;

  for (i=0; i < nranges; i++)
    {pb[i].p_buff = (HISTCOUNTER *)buffer;
     pb[i].p_scale = HIST_SCALE_1_TO_1;
     pb[i].p_bufsize =  HIST_NUM_COUNTERS(pb[i].p_high-pb[i].p_low);
     if (i == 0) {
         pb[i].p_bufsize +=
	   (((callcntsize +  HIST_COUNTER_SIZE -1)/HIST_COUNTER_SIZE)
	    );
       }
     buffer += pb[i].p_bufsize * HIST_COUNTER_SIZE;

   }
 monitor(1,1,pb,-1, callcntsize);
}
 



    
    
    
    
    





static char symname [200];

static
sym_leng_and_copy(ux,copy)
     unsigned int ux;
     int copy;
{ char *from;
 int leng=0;
 if (ux & CF_FLAG)
   {object x = (object) (ux & ~CF_FLAG);
    if (x->cf.cf_name ==0)
       from="ZUNDEF";
     else {leng = x->cf.cf_name->s.s_fillp;
	   from = x->cf.cf_name->s.s_self;}}
 else if (ux) 
   { from= (char *)(ux);}
 else {from="UNDEF";}
 if (leng==0) leng=strlen(from);
 if (leng >= sizeof(symname)) FEerror("Too long symbol",0);
 if(copy) bcopy(from,symname,leng);
 symname[leng]='0';
 return leng;
}
    
 

extern char * __start;
extern char *core_end;
extern int bzero();

static
write_outsyms()
{FILE *fdout,*fdin;
 static struct syment sym;
 static struct syment symaux;
 struct filehdr Eheader;
 struct aouthdr header;
 struct scnhdr shdrs[15];
 fdout= fopen("syms.out","w");
 fdin=fopen(kcl_self,"r");
 if (fdin == 0) FEerror("Can't find  akcl image");
 fread(&Eheader,1,sizeof(Eheader),     fdin);
 fread(&header,1,Eheader.f_opthdr,fdin);
 fclose(fdin);
 if (fdout == 0) FEerror("Can't open syms.out");
 Eheader.f_nscns = 2;
 Eheader.f_symptr = sizeof(Eheader) + sizeof(header)
    +  Eheader.f_nscns*sizeof(struct scnhdr);
 Eheader.f_nsyms = 2*(1+ combined_table.length);
 bzero(&shdrs[0],10*sizeof(struct scnhdr));
 bzero(&symaux,1*SYMESZ);
 bzero(&sym,1*SYMESZ);
 
 header.tsize=0;
 header.dsize=0;
 header.bsize=0;
 header.o_snentry=1;
 header.o_sntext=1;
 header.o_sndata=1;
 header.o_sntoc=1;
 header.o_snbss=1;
 header.o_snloader=2;

 
 fwrite(&Eheader,1,sizeof(Eheader),     fdout);
 fwrite(&header,1,Eheader.f_opthdr,fdout);
 fwrite(&shdrs[1],Eheader.f_nscns,sizeof(struct scnhdr),fdout);
 fseek(fdout,Eheader.f_symptr,0);

 sym.n_scnum ==  header.o_sntext;
 sym.n_sclass = 0x2 ;
 sym.n_type = 0x20;
 sym.n_numaux = 1;
 printf("(&__start = 0x%x)",function_address(&__start));
 {int i=0; int pos=4;
  while (i < combined_table.length)
    {      unsigned int adr = (unsigned int)(SYM_ADDRESS(combined_table,i));
      /* printf("%d %d",i,SYM_STRING(combined_table,i));
      fflush(stdout); */

      sym.n_offset = pos;
      
      sym.n_value=
	(adr > 0x20000000 ?
	(unsigned int) function_address(SYM_ADDRESS(combined_table,i))
	  -  0x10000e00
	 : adr  -  0x10000e00);
/*      printf("\n %d %s 0x%x %x ",i,SYM_STRING(combined_table,i), adr, adr); */
      fwrite(&sym,SYMESZ,1,fdout);
      fwrite(&symaux,SYMESZ,1,fdout);
      pos=pos+ sym_leng_and_copy(SYM_STRING(combined_table,i),1)+1;
/*      printf("%s\n",symname); */
      i++;
    }

      sym.n_offset = pos;
      sym.n_value=(int)core_end - (int) & __start;
      fwrite(&sym,SYMESZ,1,fdout);
      fwrite(&symaux,SYMESZ,1,fdout);
      pos=pos+ strlen("_ENDSYM")+1;


  fwrite(&pos,sizeof(pos),1,fdout);
  printf("(at %d)",ftell(fdout));
  for (i=0; i< combined_table.length ; i++)
    {int leng=sym_leng_and_copy(SYM_STRING(combined_table,i),1);
       fwrite(symname,leng,1,fdout);
     putc(0,fdout);}
   }
 fwrite("_ENDSYM",8,1,fdout);
 fclose(fdout);
}



