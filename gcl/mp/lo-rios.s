.file "lo-rios.s"
 # Copyright W. Schelter 1991
######MULUL3#######
#unfortunately the mul operation on rios is signed,
# so we have to go to a bit of work to get the unsigned op.
.toc
.globl  mulul3[ds]
.csect mulul3[ds]
       .long .mulul3[PR]
       .long TOC[tc0]
       .long 0
       .toc
# 	MULUL3(x,y,hi)
T.mulul3:  .tc   .mulul3[tc],mulul3[ds]
         .globl  .mulul3[PR]
         .csect   .mulul3[PR]
         mul.    0,3,4        # hp = r0
	 cmpi     0,4,0       # 
         bge      Ypos	                # branch if reg4 >=0
	 a        0,3,0
Ypos:
	 cmpi     0,3,0
	 bge      Xpos
	 a        0,4,0
Xpos:
	 mfmq    3
	 st 	 0,0x0(5)
	 br
######### DIVSL3 ############
# a divide just like divul3, except that
# it assumes that x,y are signed numbers.
.toc
.globl  divsl3[ds]
.csect divsl3[ds]
       .long .divsl3[PR]
       .long TOC[tc0]
       .long 0
       .toc
#      DIVSL3(lo,divisor,rem)
#      long h,divisor,*rem
T.divsl3:  .tc   .divsl3[tc],divsl3[ds]
         .globl  .divsl3[PR]
         .csect   .divsl3[PR]
	mtmq   3                   # move lo to q reg
	l      3,0x0(5)            # put hi in reg3
	div    3,3,4               # r3 = (r3:qreg)/r4
	mfmq   4                   # move remainder to reg6
        st     4,0x0(5)            # store 6 in *rem
	br
#########Xdivul3#################
# Below is a broken attempt to do a divul3 which
# does the test and branches to the slow one if necessary.
.globl .slowdivul3[PR]
	.toc
.globl  Xdivul3[ds]
.csect Xdivul3[ds]
       .long .Xdivul3[PR]
       .long TOC[tc0]
       .long 0
       .toc
#	old(D,H,L,QP,RP)
#      XDIVUL3(lo,divisor,rem)
#        long h,divisor,*rem
#
T.Xdivul3:  .tc   .Xdivul3[tc],Xdivul3[ds]
         .globl  .Xdivul3[PR]
         .csect   .Xdivul3[PR]
        cmpi     0,4,0       #
	l      6,0x0(5) 
	blt	Lslow
	a	0,6,6
	cmp     1,4,0
        bgt     Ldivsl           # branch if reg4 >=0
Lslow:
	b	 .slowdivul3[PR]
Ldivsl: mtmq   3                   # move lo to q reg
	div    3,6,4               # r3 = (r6:qreg)/r4
	mfmq   4                   # move remainder to reg4
        st     4,0x0(5)            # store 6 in *rem
	br
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

