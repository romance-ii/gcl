* --- Copyright W. Schelter 1991 --#
	file_	lo-aix370.c
	entry	$oVhc2_1r
$oVhc2_1r	equ	0
	entry	$oVO
$oVO	equ	0
L$$C0	csect
	ds	0d
L00$TEXT	equ	*
	entry	_divsl3
* -------------| divsl3 |-----------------------#
	ds	0f
	dc	al2(0)	arglength in words
	dc	xl2'FFFF'	argument regs unknown
	dc	al4(LE$1-_divsl3)	code size
	dc	xl2'0000'	no flags currently defined
	dc	al1(3)	parmlength in words
	dc	al1(1)	format
_divsl3	ds	0h
LX$011	equ	*
	using	LX$011,12
	stm	LR$1,15,x'10'+LV$1(13)
	lr	12,13
	la	11,x'60'
	slr	13,11
	st	12,4(,13)
	lr	12,15
	lr	15,0
	l	14,0(,2)
	dr	14,1
	lr	0,15
	st	14,0(,2)
	lm	LR$1,14,x'70'+LV$1(13)
	br	14
LE$1	equ	*
LR$1	equ	2
LV$1	equ	0
	entry	_mulul3
* -------------| mulul3 |-----------------------#
	ds	0f
	dc	al2(0)	arglength in words
	dc	xl2'FFFF'	argument regs unknown
	dc	al4(LE$2-_mulul3)	code size
	dc	xl2'0000'	no flags currently defined
	dc	al1(3)	parmlength in words
	dc	al1(1)	format
_mulul3	ds	0h
LX$021	equ	*
	using	LX$021,12
	stm	LR$2,15,x'10'+LV$2(13)
	lr	12,13
	la	11,x'60'
	slr	13,11
	st	12,4(,13)
	lr	12,15
	lr	11,0
	lr	15,1
	mr	14,11
	lr	0,14
	ltr	11,11
	bnm	LF$024
	ar	0,1
L0$023	equ	*
LF$024	equ	*
	ltr	1,1
	bnm	LF$025
	ar	0,11
L0$025	equ	*
LF$025	equ	*
	st	0,0(,2)
        lr      0,15  
	lm	LR$2,14,x'70'+LV$2(13)
	br	14
LE$2	equ	*
LR$2	equ	2
LV$2	equ	0
	end
