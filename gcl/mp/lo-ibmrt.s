 # Copyright W. Schelter 1991
 # untested
	.file	"foo.c"
	.data
	.text
	.globl	.mulul3
	.align	1
.nmulul3:
	.text
	.set	L.1F,0x00000000
	.set	L.1L,0x00000000
	.set	L.1R,10
	.set	L.1A,0x00000004-(4*L.1R-100)-16
	stm	L.1R,4*L.1R-100(1)
	cal	1,-(16+L.1A)(1)
	lr	14,0
	lr	12,2
	lr	11,3
	lr	10,4
#	line 5, file "foo.c"
	mts	10,12
	s	13,13
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
	m	13,11
     # 86
       # 46
#	line 6, file "foo.c"
	ci	12,0# 47
	bge	L.13
#	line 7, file "foo.c"
	a	13,11# 63
L.13:
#	line 8, file "foo.c"
	ci	11,0# 47
	bge	L.14
#	line 9, file "foo.c"
	a	13,12# 63
L.14:
#	line 10, file "foo.c"
	st	13,0(10)# 17
	mfs	10,2
#	line 11, file "foo.c"
#clrcb	15,8  # DMAsync
	lm	L.1R,(16+L.1A)+(4*L.1R-100)(1)
	brx	15
	cal	1,16+L.1A(1)
	.short	0xdf01,L.1R*16+0xdf00,L.1A+16
	.data	3
	.globl	_mulul3
_mulul3:
	.long	.mulul3
	.text
	.data
