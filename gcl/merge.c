/* Copyright William F. Schelter, University of Texas 1987 */

/* This file may be copied by anyone, but changes may not
be made without permission of the author.  The author hopes it will be
useful but cannot assume any responsibility for its use or problems
caused by its use.  The program is provided as is. */

/* The program takes two files file1 = orig and file2 = orig.V 

tutorial% merge orig orig.V > foo 

and copies orig according to the recipe in orig.V.  The advantage of
this program is that it does this according to the context of orig.
Thus even though orig might change slightly (eg some one added an
extra line to the copyright notice), the same change file will
probably still be valid.  

If the first argument is - then the orig is standard input.
If a third argument is supplied, it is the name of a file to use
instead of standard output.


tutorial% merge orig orig.V | merge - change2 final

would take the result of merge of orig and orig.V and use it to merge
with change2 to produce the file final.


The format of a change (.V) file is very simple: There is only ONE
type of command in a change file.  REPLACE X by Y.  Here X represents
a chunk of text in the orig file, and Y the substitution which you
wish to make for this occurrence.  The Y appears explicitly in the
change file, while the text X may be specified fully and explicitly,
OR by giving sufficient context from the beginning and end of X.  Thus
in general it takes three things to specify a change.  The beginning
of X (Xbegin), the end of X (Xend), and all of Y.  These three pieces
of text are separated by four delimiters.  The delimiters are not
single characters, but rather sequences of four characters.  This is
done so as to avoid having to quote the delimiter (see QUOTING below).
The delimiters are "\n@s[" "\n@s," "\n@s|" and "\n@s]". 
NOTE: The \n (Newline) Character IS PART OF THE DELIMITER in ALL CASES.

@s[X
@s|Y
@s]

Thus in the above case the X text is only "X" it does not have any
newlines in it! They belong to the delimiters.  For "X\n" we would see


@s[X

@s|Y
@s]


The general case where X is a very long chunk of text, or perhaps something
sensitive to copyright, so that you cannot include several pages, you 
could make Xbegin be the first few lines, and Xend the last few lines.
All intervening lines (including the Xbegin and the Xend, would be ripped
out, and replaced by Y.

@s[Xbegin
@s,Xend
@s|Y
@s]


One cycle of the merge may be thought of as:
The merge program looks in the change (.V) file for the next \ns[, 
in order to determine  the next values for Xbegin,Xend,and Y.
Having determined these, its position in the (.V) file will have 
advanced to after the \n@s].

The merge program then starts at its current position in the original
file and searches for the next occurrence of Xbegin, marking its
beginning, then for the end of Xend.  The inclusive interval so
marked, is deleted and Y is substituted. The current position in the
original file is now at the end of the Xend text.  The next Xbegin
text must occur after that point.  Only one pass is made through the
files.  

It is an error if the start of Xend does not follow
the end of Xbegin.  Thus Xbegin and Xend may NOT overlap.  A common
case will be that Xbegin is the entire interval and Xend = ""
In this case the merge program, if it finds \n@s| before \n@s,
will assume you want Xend="".

EXAMPLES:

@s[Hi bill
@s,
@s|new body
@s]

would delete the string "Hi bill" replacing it with "new body"
Xbegin="Hi bill"
Xend=""
Interval = "Hi bill"
Equivalently since the E interval is empty, we could have just
omitted the \@s,

@s[Hi bill
@s|new body
@s]


Example of change file with two changes:
****************

@s[(defmacro lcase (item &body body)
@s,      (setq  v (car rest))
@s|(defmacro lcase (items &body body)
      (setq  v (cadr rest))
@s]

Comments are allowed in change files.  In fact anything not between
matching "\ns[" and "\ns]" is a comment. 


@s[How is he
@s,
He is fine.
@s|He is sick.
@s]

*******
end of change file

The first change would replace the interval of the original file
"(defmacro....       (setq  v (car rest))"
by
"(defmacro lcase (items &body body)
      (setq  v (cadr rest))"

If the program could not find the interval "(defmacro....  (setq v
(car rest))" in the orignal file it would warn you. 

The intervals in the change file, must occur in the same order as in
the original file.  There is an emacs program merge.el which can
mechanically produce a changes file from an original and an edited
version.

Note: For convenience we pretend that the change file starts with
a new line, even if it does not.  Thus if @s[  are the first three
characters of the file and CHSTART1 = \n@s[, we count this as a
CHSTART1.  Since it is in the first column, it "appears" to have
the new line there.


QUOTING:

In order to have a change which involves one of the four letter
delimiters given above, we use the convention that "\n@@" in the first
column translates to "\n@".  You need not perform this quoting of @
unless the merger would be confused.  For example \n@(defun .. would
be ok, since this can't be mistaken for one of our delimiters.
Nonetheless \n@@(defun or \n@@s[ would translate to have one @ sign,
in the merge output.  The reason for not doubling all @ signs, is that
it is very easy to scan (visually) a change you are constructing, to
see that there are no @ signs in the first column, or at least none
which could be confused for the four letter change delimiters
"\n@s[","\n@s," ...  A poor human constructing a change (.V) file
should not have to sort through the X or Y text adding quoting
characters.

Note on length: Y may be any length, but Xbegin or Xend, may only be
CONTEXT_LIMIT long.

*/










/******************  THE CODE ********************/


#include <stdio.h>


#define CONTEXT_LIMIT 3000 /* size of the longest delimiter or replacement */

char *malloc();
void copy_rest();
char ssearch_for_string();

#define NULL_OUT (FILE *)0

#define CHSTART1 "\n@s["
#define CHSTART2 "\n@s,"
#define CHSTART3 "\n@s|"
#define CHSTART4 "\n@s]"
#define ACCEPT ",|"
#define NOACCEPT (char *) 0
#define NUL '\0'
#define TRUE 1
#define FALSE 0
#define eofch(ch) ((unsigned char)ch == (unsigned char) EOF)

char filenames[600];

#define myerror(string,arg) {(void)fprintf(stderr,string,arg); exit(-1);}

main(argc,argv)
int argc;
char *argv[];
{FILE *orig,*changes,*out;
 char *context,*endcontext;
 char *origname,*altername,*outname;
 char found;
 context=malloc(CONTEXT_LIMIT+2);
 endcontext=malloc(CONTEXT_LIMIT+2);

 outname=(char *)0;

 if (argc==1)
   {int tem;
    origname=filenames; altername=filenames+200; outname=filenames+400;
     /* get names from stdin */
     if (tem=scanf("%s %s %s",origname,altername,outname));
            else myerror("Three args weren't supplied: scanf returned %d\n",tem);
   }
 else{  if (!((argc==3) || (argc==4)))
       { myerror("Usage: merge file-orig file-changes [out-file]\n %d args given",argc-1);}
 else
   { origname=argv[1];
     altername=argv[2];
     if (argc >= 4) outname=argv[3];}};


/* now we have the names either from command or stdin, so open files */

if(origname[0]=='-' && origname[1]==NULL)
  orig=stdin;
 else{
 orig=fopen(origname,"r");
 if (!orig) {perror(origname); exit(-1);};
}
 
 changes=fopen(altername,"r");
 if (!changes) {perror(origname); exit(-1);};
 if (outname)
   {out=fopen(outname,"w");
    if (out); else {perror(outname); exit(-1);}}
 else out=stdout;

/* check if the file starts with chstart1 - newline. to avoid 
people thinking that starting file with @s[ is ok. */
 {char *str = CHSTART1;
  int ch;
  while(*(++str)) /* skip the newline start */
    { (ch=getc(changes));
      if (ch == *str) ;
      else
      { ungetc(ch,changes); goto not_found;}
    }
   goto got_one;
  not_found:;}

 {while(search_for_string(changes,CHSTART1,NULL_OUT,FALSE) > 0)
    { got_one:
      if (found=
	  ssearch_for_string(changes,CHSTART2,context,CONTEXT_LIMIT,TRUE,
			     ACCEPT));
      else
	{myerror("\nNo end for start change context in change file:\n`%s'\n",context);};
      if (found==ACCEPT[1])
	*endcontext=NUL;
      else
	{
	  if /* there is probably a non null  endcontext */
	    (ssearch_for_string(changes,CHSTART3,endcontext, 
				CONTEXT_LIMIT,TRUE,NOACCEPT));
	  else
	    {myerror("No %s at beginning of line to denote end of change context",
		CHSTART3);}};
/* skip in orig down to the end of the context,copying thru begin context */
      if (search_for_string(orig,context,out,FALSE)>0); 
      else{myerror("\nCould not find the change start in original:\n`%s'\n"
	       ,context);};
      if  /* copy out the changed version */
	(search_for_string(changes,CHSTART4,out,TRUE)>0);
      else
	{myerror("No %s at beginning of line to denote end of change context",
	    CHSTART4);};
         
/*finish skipping over the region to be deleted in orig */	
      {if( search_for_string(orig,endcontext,NULL_OUT,FALSE) > 0);
       else
	 {myerror("\nCould not find the end of the change in original:\n`%s'\n",
	     endcontext);}}
    }
    copy_rest(orig,out);
    return 0;
  }}


string_match(sta,stb)
char *sta, *stb;
{while(*sta!=0)
   {if (*(sta++) != *(stb++)) return 0;}
  if (*stb==0) return 1; else return 0;
 }

void
copy_rest(file,out)
FILE *file,*out;
{register int ch;
while(1)
 {  
   ch=getc(file);
   if (eofch(ch) && feof(file)) break;
   putc(ch,out);}}

/* advance file to end of first occurrence of string, copying to out 
until the beginning of string */

#define USE_UNQUOTE 1

search_for_string(file,string,out,unquoting)
FILE *file,*out;
char *string;
int unquoting;
{int result;
 result=search_for_string1(file,string,out,USE_UNQUOTE && unquoting);
 return result;}


char *nxt,*lim,*ungetlim,*bp; 
char buffer[CONTEXT_LIMIT];

/*
void
myungetc(ch)
char ch;
{*bp++ = ch;}

char
mygetc(file)
FILE *file; 
{char x=((bp==buffer)? getc(file) : *--bp);
 return x;
}
*/

#define mygetc(file) ((bp==buffer)? getc(file) : *--bp)
#define myungetc(ch) *bp++ = ch

search_for_string1(file,string,out,unquoting)
FILE *file,*out;
char *string;
int unquoting;
{ /* char *nxt,*lim; */
  char  *s;
  int ch;
  nxt=lim=(char *)0;
 bp=buffer;
 if (*string==NUL) return 1; unquoting;
  while(1)
  {begin:
     ch=mygetc(file);
   if ((eofch(ch)) &&(feof(file))) return 0;
   if( ch==*string)
     {				/* loop for checking */
       s = string;
       while(*(++s)!=0)
	 {(ch=mygetc(file));
	  if (eofch(ch) && feof(file))
	    {char *cp=string;while (cp++<=s)
	       {putc(*cp,file) ; return 0;}};
	  if (*s!=ch)
	    { if (out) putc(*string,out);
	      {char *cp=s;
	       if (!(unquoting && ch==string[1] && (s-string ==2)))
	           myungetc(ch);
	       while (--cp > string)
		 myungetc(*cp);
	      goto begin;}}
	}
        return 1;
   /*    printf("<found one>");  */
       }
   else if (out) putc(ch,out);};
  }



#define PUTC(ch,out) {if(ind++ < outlim) ((*(out++))=(ch));\
			       else return -1;}

char
ssearch_for_string1(file,string,out,outlim,unquoting,accept)
int outlim,unquoting;
FILE *file;
char *out;
char *string,*accept;
{register int ch;
 char *s; int ind=0;
 if (*string==NUL) return 'a';
 while(1)
   {ch = getc(file);
  begin:
    if (feof(file)) return (char) 0;
    if (ch==(*string))
      {s=string; ind=0;
       while(*(++s)!=0)
	 {if ((*s==(ch=getc(file)))
	      || (accept && *s==*accept && ch == *(accept+1)));
	  else
	    {if (out)
	       {char *cp; cp=string;
		 if (unquoting && ch==string[1] && (s-string ==2))  s--;
		while (cp!=s)
		  {PUTC(*cp,out);cp++;}
	      }
	       break;}}
       if(*s==0)
	  {PUTC(((char) 0),out);
	 /* found a match */
	   return(ch);}
       else goto begin;}
    else if (out) PUTC(ch,out);
  }
}

char
ssearch_for_string(file,string,out1,outlim,unquoting,accept)
int outlim;
FILE *file;
char *out1;
char *string,*accept;
int unquoting;
{char result;
 result=ssearch_for_string1(file,string,out1,outlim,unquoting,accept);
 return result;}

/* 
* 
* To do:
* 1)The buffering for mygetc could be more efficient (in local variable).
* 2)Eliminate the double function calls used during debugging.
* 3)Improve error message, for help in finding context if a change
*   is not found.
*/
