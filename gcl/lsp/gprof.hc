#include <bfd.h>
#include <bfdlink.h>
#define CF_FLAG (1 << 31) 

static
/*
mymonitor(low,high,x)
     int low,high;
     object x;
{ if (0 == x) {monitor(0); return 0;}
  if (type_of(x)!=t_string) FEerror("expected string",0);
  monitor(low,high,x->ust.ust_self,x->ust.ust_dim,1000);
}
*/
mymonitor(low,high,x,leng)
     int low,high;
     object x;
{ if (0 == x) {monitor(0); return 0;}
  monitor(low,high,x,leng);
}


char *sbrk();

static
mymonstartup(low,high)
int low,high;
{char *buf;
buf = sbrk(0);
monstartup(low,high);
return buf;
}

char *kcl_self;

#include <a.out.h>
#include "../h/ext_sym.h"
#define syment nlist
#define fileheader exec

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
    
 
 
	 
     
       


extern char *core_end;

static
write_outsyms()
{FILE *fdout,*fdin;
 static struct syment sym;
 struct fileheader hdr;
 fdout= fopen("syms.out","w");
 fdin=fopen(kcl_self,"r");
 if (fdin == 0) FEerror("Can't find  akcl image",0);
 fread(&hdr,sizeof(hdr),1,fdin);
  if (fdout == 0) FEerror("Can't open syms.out",0);
 fclose(fdin);
 sym.n_type= (N_TEXT | N_EXT);
 hdr.a_text=sizeof(hdr);
 hdr.a_data=0;
 hdr.a_bss=0;
 hdr.a_trsize=0;
 hdr.a_drsize=0;
 hdr.a_syms= (1 + combined_table.length)*sizeof (struct syment);
 fwrite(&hdr,sizeof(hdr),1,fdout);
 fseek(fdout,N_SYMOFF(hdr),0);
 {int i=0; int pos=4;
  while (i < combined_table.length)
    { /* printf("%d %d",i,SYM_STRING(combined_table,i));
      fflush(stdout); */
      
      sym.n_un.n_strx = pos;
      sym.n_value=SYM_ADDRESS(combined_table,i);
      fwrite(&sym,sizeof(sym),1,fdout);
      pos=pos+ sym_leng_and_copy(SYM_STRING(combined_table,i),1)+1;
/*      printf("%s\n",symname); */
      i++;
    }

      sym.n_un.n_strx = pos;
      sym.n_value=(int)core_end;
      fwrite(&sym,sizeof(sym),1,fdout);
      pos=pos+ strlen("_ENDSYM")+1;


  fwrite(&pos,sizeof(pos),1,fdout);
  for (i=0; i< combined_table.length ; i++)
    {int leng=sym_leng_and_copy(SYM_STRING(combined_table,i),1);
       fwrite(symname,leng,1,fdout);
     putc(0,fdout);}
   }
 fwrite("_ENDSYM",8,1,fdout);
 fclose(fdout);
}
