  # Copyright W. Schelter 1991
#ifdef sgi
#include <sys/regdef.h>
#else
#include <regdef.h>
#endif

	.text	
	.align	2

	.globl	mulul3
 # 	MULUL3(x,y,hi)
	.ent	mulul3
mulul3:
	.frame	sp, 0, ra

	multu	a0, a1		# [hi:lo] = d * q
	mfhi	a1
	mflo	v0
	sw      a1,0(a2)
	j	ra
	.end	mulul3

	.globl	Xdivul3
 #	EXTENDED_DIV(D,H,L,QP,RP)
 #   	divul3(x, y, hi)
 #   	     unsigned int x,h,*hi;
#define lo a0
#define q t7
#define y a1
#define h v1 

	.ent	Xdivul3
Xdivul3:
	.frame	sp, 0, ra

	lw      h, 0(a2)
	li	v0, 32		# v0 holds number of shifts
loop:
	 
	srl	q, lo, 31
	sll	h, 1	
	or	h, q
	sll	lo, 1
	subu	q, h, y	# t = h - d
	bltz	q, underflow
	move	h, q
	or	lo, 1
underflow:
	subu	v0, 1
	bnez	v0, loop
	move	q,a0
	sw	h, 0(a2)	# *rp = h
 #   	}
	j	ra
	.end	Xdivul3


