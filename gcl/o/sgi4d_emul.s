#include <sys/regdef.h>
  
 /*  earith.s for MIPS R2000 processor
      by Doug Katzman
      version 2.1.d dated 7/13/89 15:31 EDT */

 # mods 7/13/89:
 #   emul: never conditionally branch
 #   ediv: improved code ordering allows jmp delay slot optimization by 'as'
 #
	.text	
	.align	2

	.globl	extended_mul
 #  	extended_mul(d, q, r, hp, lp)
 #  	     unsigned int d, q, r, *hp, *lp;
 #  	{
	.ent	extended_mul
extended_mul:
	.frame	sp, 0, ra

	mult	a0, a1		# [hi:lo] = d * q
	mfhi	a1
	sll	a1, 1
	mflo	a0
	srl	t7, a0, 31	
	and	a0, 0x7fffffff
	or	a1, t7
	addu	a0, a2		# [a1:a0] += r
	srl	t7, a0, 31	
	and	a0, 0x7fffffff
	addu	a1, t7
	sw	a1, 0(a3)	# *hp = a1
	lw	a3, 16(sp)	# fetch fifth actual argument from stack
	sw	a0, 0(a3)	# *lp = a0
 #  	}
	j	ra
	.end	extended_mul

	.globl	extended_div
 #   	extended_div(d, h, l, qp, rp)
 #   	     unsigned int d, h, l, *qp, *rp;
 #   	{
	.ent	extended_div
extended_div:
	.frame	sp, 0, ra

	sll	a2, 1		
	li	v0, 31		# v0 holds number of shifts
loop:
	srl	t7, a2, 31
	sll	a1, 1	
	or	a1, t7
	sll	a2, 1
	subu	t7, a1, a0	# t = h - d
	bltz	t7, underflow
	move	a1, t7
	or	a2, 1
underflow:
	subu	v0, 1
	bnez	v0, loop
	sw	a2, 0(a3)	# *qp = l
	lw	a3, 16(sp)	# fetch fifth actual argument from stack
	sw	a1, 0(a3)	# *rp = h
 #   	}
	j	ra
	.end	extended_div

