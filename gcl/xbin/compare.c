#include <stdio.h>
#include <a.out.h>

/* Skip over SKIP bytes, and then compare files, up to the length
   of the shortest.
*/
  
#define SKIP sizeof(struct exec)


main(argc,argv)
     int argc;
     char *argv[];
       
{FILE *fp1,*fp2;
 int i;
 if (argc!=2) {printf("Usage:compare file1 file2 "); exit(1);}
 fp1=fopen(argv[1],"r");
 fp2=fopen(argv[2],"r");
 if(fp1==0 || fp2==0){ perror("could not open file");
		        fflush(stdout); exit(1);}
 for (i=0; i< SKIP; i++)
   {getc(fp1); getc(fp2);}
 while (!feof(fp1) && !feof(fp2))
   {if (getc(fp1)!=getc(fp2))
     { if(feof(fp1)|| feof(fp2)) exit(1);
       printf("they differed at %d",i);exit(1);}
  i++;}

 exit(0);}
 
