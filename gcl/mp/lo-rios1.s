##### Flush the instruction cache.  Necessary for loading.
.toc
#T.myics.s:.tc     myics.s[tc],myics.s[rw]
		  .globl  myics[ds]
.csect myics[ds]
       .long .myics[PR]
       .long TOC[tc0]
       .long 0
       .toc
T.myics:  .tc   .myics[tc],myics[ds]
	 .globl	 .myics[PR]
	 .csect   .myics[PR]
	dcs 
	ics
	brl
	
#### Allocate lots of space for toc entries during dynamic loading.
.globl akcltoc[ds]
        .csect akcltoc[ds]
	.long .akcltoc[tc]		
	.csect .akcltoc[tc]
	.space 24000
.globl toc_start[ds]
       .csect toc_start[ds]
      .long TOC[tc0]

