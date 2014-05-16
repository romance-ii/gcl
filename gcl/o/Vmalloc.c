Changes file for /usr/local/src/kcl/c/malloc.c
Created on Tue Oct 24 20:01:59 1989
Usage \n@s[Original text\n@s|Replacement Text\n@s]
See the file rascal.ics.utexas.edu:/usr2/ftp/merge.c
for a program to merge change files.  Anything not between
"\n@s[" and  "\n@s]" is a simply a comment.
This file was constructed using emacs and  merge.el
Enhancements Copyright (c) W. Schelter All rights reserved.
   by (Bill Schelter)  wfs@carl.ma.utexas.edu 


****Change:(orig (131 131 c))
@s[ * if the power of 2 is correct.
 */


@s| * if the power of 2 is correct.
 */
/*  Oct 89: wfs@cs.utexas.edu:  Created  V/ merge file for
 * changes for GCL.
 * Calls to sbrk replaced by alloc_page.   Remove some of the
 * additions for emacs.
 * NB:  According to the gnu license you may only distribute the
 * verbatim copy of the gnumalloc.c.   Thus we only distribute
 * an abbreviated diffs file from that verbatim copy.
*/

@s]


****Change:(orig (162 162 c))
@s[#include "getpagesize.h"

@s|#define getpagesize() 2048

@s]


****Change:(orig (170 170 c))
@s[#include <sys/resource.h>

@s|/* #include <sys/resource.h> */

@s]


****Change:(orig (202 202 a))
@s[static char *data_space_start;


@s|static char *data_space_start;

#define PAGEWIDTH 11
char *alloc_page();
#define sbrk our_sbrk
char *
our_sbrk(x)
int x;
{return alloc_page((x >> PAGEWIDTH));}





@s]


****Change:(orig (338 378 d))
@s[#ifndef VMS
  /* Maximum virtual memory on VMS is difficult to calculate since it
   * depends on several dynmacially changing things. Also, alignment
   * isn't that important. That is why much of the code here is ifdef'ed

@s,    sbrk (1024 - ((int) cp & 0x3ff));
#endif /* not VMS */


@s|
@s]


****Change:(orig (385 385 c))
@s[  if ((cp = sbrk (1 << (siz + 3))) == (char *) -1)

@s|  if ((cp = sbrk (1 << (siz + 3)))==0)

@s]


****Change:(orig (387 393 d))
@s[#ifndef VMS
  if ((int) cp & 7)
    {		/* shouldn't happen, but just in case */
      cp = (char *) (((int) cp + 8) & ~7);

@s,    }
#endif /* not VMS */

@s|
@s]

