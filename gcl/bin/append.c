#include <stdio.h>
/* usage:   append a b c
   equivalent to cat a b >> c
   if only cat were binary... but by some wonderful dos like deicision,
   it is not under cygnus..
   */   
main(int argc,char *argv[])
{ int i;
  FILE *out ;
  if (argc < 2) return 0;
  out = fopen(argv[argc-1],"a+b");
  if (out == 0)
    { perror("cant open"); return 1; }
  for (i=1; i < argc-1 ; i++)
    {
      FILE *fp = fopen(argv[i],"rb");
      int ch;
      if (fp == 0)
	{ perror("cant open"); return 1; }
      while (1) {
	ch =getc(fp);
	if (ch == EOF && feof(fp))
	  { fclose(fp);
	  break;
	  } else
	    putc(ch,out);
      
      }
    }
  fclose(out);
  return 0;
}
      
	
