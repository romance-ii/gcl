/*

# Substitute the region between BEGIN and END in FILE1 into FILE2

 */

#include <stdio.h>

void scanCopyToLine(FILE *fp, char *line,FILE *outstream);

main(int argc,char *argv[])
{
  if (argc < 5)
    {
    ERROR:
      fprintf(stderr,"Usage: file-sub subFile FileToSubInto BEGIN END [outfile -]");
      exit(1);
    }
  {
    FILE *file1;
    FILE *file2;
    FILE *outstream = stdout;
    char *begin=argv[3];
    char *end=argv[4];
   
    file2= fopen(argv[2],"rb");
    file1= fopen(argv[1],"rb");
    if (argc>=6 && strcmp(argv[5],"-")!=0) {
      outstream= fopen(argv[5],"wb");
    }
   
    if (file1==0 || file2==0) goto ERROR;
    {
      scanCopyToLine(file2,begin,outstream);
      scanCopyToLine(file1,begin,0);
      scanCopyToLine(file1,end,outstream);
      scanCopyToLine(file2,end,0);
      scanCopyToLine(file2,0,outstream);
    }
    if (outstream != stdout) fclose(outstream);
  }

  return 0;
}




/* copy from fp to outstream all lines up to and including
   one beginning with LINE
*/   
void
scanCopyToLine(FILE *fp, char *line,FILE *outstream)
{    
  int length ;
  int finish=0;
  int n=0;
  char buf[5000];
  if (line) length = strlen(line);
  while (!finish && !feof(fp)) {
    char *s = fgets(buf,sizeof(buf),fp);
    if (line && s && strncmp(line,s,length)==0) {
      finish=1;
    }
    if (s && outstream)
      fputs(s,outstream);
  }

}
