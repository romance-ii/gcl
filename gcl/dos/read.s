/* This is file READ.S */
/*
** Copyright (C) 1991 DJ Delorie, 24 Kirsten Ave, Rochester NH 03867-2954
**
** This file is distributed under the terms listed in the document
** "copying.dj", available from DJ Delorie at the address above.
** A copy of "copying.dj" should accompany this file; if not, a copy
** should be available from where this file was obtained.  This file
** may not be distributed without a verbatim copy of "copying.dj".
**
** This file is distributed WITHOUT ANY WARRANTY; without even the implied
** warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

	.text
	.globl _read
_read:
	pushl	%eax
	movl	$0,%eax
        cmp	8(%esp),%eax	/* Is it stdin */
        jne	NotStdin
        cmp	_interrupt_flag,%eax /* Any SIGINT Interrupt pending ? */
        je	NoInterrupt
        call	_sigalrm
NoInterrupt:
NotStdin:
	popl	%eax

	pushl	%ebx
	pushl	%esi
	pushl	%edi
	movl	16(%esp),%ebx
	movl	20(%esp),%edx
	movl	24(%esp),%ecx
	movb	$0x3f,%ah
	int	$0x21
	popl	%edi
	popl	%esi
	popl	%ebx
	jb	syscall_error
	ret
