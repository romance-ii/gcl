/*
 Copyright (C) 1994  W. Schelter

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* recognize \nDEF ......... ") and output it to stdout
   [ie '")' is a two character sequence which ends the def
   recognize \nDO_ [^\n]\n  and output it to stdout

   Thus the DEF's MUST contain a doc string as last component.
   
*/
int pos = 0;
#define GETC(x) (pos++,getc(x))
int
read_some(char *buf, int n, int start_ch, int copy)
     /* if copy is not 0 then copy characters to stdout while scanning
	to find start_ch.   When you find it, read n characters into buf,
	return the number of characters read into buf, but these characters
	MUST be free of start_ch.
	*/
               
                         
{ int ch;
  int prev = 0;
  while (1)
    { ch =GETC(stdin);
      if (ch == EOF) return -1;
      if (copy) {putc(ch,stdout);
		 if (prev == '\n' && ch == '{')
		   { fprintf(stderr,"Error(at char %d):found \\n{ inside section to copy\n",pos) ;
		     exit(1);}
		 prev = ch;
	       }
    AGAIN:
      if (ch == start_ch)
	{ int i = 0;
	  while (i < n)
	    { ch = GETC(stdin);
	      if (ch == EOF) return i;
	      if (copy) {putc(ch,stdout);
			 if (prev == '\n' && ch == '{')
			   { fprintf(stderr,"Error(at char %d):found \\n{ inside section to copy",pos) ;
			     exit(1);}
			 prev = ch;
		       }

	      if (ch == start_ch) goto AGAIN;
	      buf[i++] = ch;
	    }
	  return i;
	}}}
	  
	

int
main(void)
{ 
  char buf[20];
  while (3==read_some(buf,3,'\n',0))
   { buf[3] = 0;
     if (strcmp(buf,"DEF") ==0)
       { printf("\n%s",buf);
	 while(1==read_some(buf,1,'\"',1))
	   { if (buf[0] == ')')
		 break;
	       }}
     if (strcmp(buf,"DO_") ==0)
       {printf("\n%s",buf);
	read_some(buf,0,'\n',1);
	ungetc('\n',stdin);
      }
   }
  printf("\n");
  exit(0);
  
}

	 
	 
	 
       
