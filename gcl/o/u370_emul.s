	file_	tmp.c
	entry	$oVhc2_1r
$oVhc2_1r	equ	0
	entry	$oVO
$oVO	equ	0
L$$C0	csect
	ds	0d
L00$TEXT	equ	*
	entry	_extended_mul
* -------------| extended_mul |-----------------------#
	ds	0f
	dc	al2(0)	arglength in words
	dc	xl2'FFFF'	argument regs unknown
	dc	al4(LE$1-_extended_mul)	code size
	dc	xl2'0000'	no flags currently defined
	dc	al1(5)	parmlength in words
	dc	al1(1)	format
_extended_mul	ds	0h
LX$011	equ	*
	using	LX$011,12
	stm	LR$1,15,x'10'+LV$1(13)
	lr	12,13
	la	11,x'60'
	slr	13,11
	st	12,4(,13)
	lr	12,15
	lr	15,1
	mr	14,0
	alr	15,2
# branch on carry
	bc      3,Loverflow
# store the results
Lresult sldl	14,1(0)
	srl     15,1(0)
	l	1,x'B8'(,13)	# lp
	st	15,0(,1)
	st	14,0(,3)
	lm	LR$1,14,x'70'+LV$1(13)
	br	14
Loverflow ah	14,LC$014
        b	Lresult
LE$1	equ	*
LR$1	equ	2
LV$1	equ	0
LC$014	equ	*
	dc	xl2'0001'
	end
	entry	_extended_div
* -------------| extended_div |-----------------------#
	ds	0f
	dc	al2(0)	arglength in words
	dc	xl2'FFFF'	argument regs unknown
	dc	al4(LE$2-_extended_div)	code size
	dc	xl2'0000'	no flags currently defined
	dc	al1(5)	parmlength in words
	dc	al1(1)	format
_extended_div	ds	0h
LX$021	equ	*
	using	LX$021,12
	stm	LR$2,15,x'10'+LV$2(13)
	lr	12,13
	la	11,x'60'
	slr	13,11
	st	12,4(,13)
	lr	12,15
* put h,l in 14,15
	lr 	14,1
	lr 	15,2
	sll	15,1
	srdl    14,1
	dr	14,0
* store the quotient
	st	15,0(,3)
	l	1,x'B8'(,13)	# rp
* store the remainder
	st	14,0(,1)
	lm	LR$2,14,x'70'+LV$2(13)
	br	14
LE$2	equ	*
LR$2	equ	2
LV$2	equ	0
	end
