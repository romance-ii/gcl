	.file	"mpi.c"
.section	".text"
	.align 4
	.global mulsi
	.type	 mulsi,#function
	.proc	0105
mulsi:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	mov %i0,%l0
	ld [%i1+4],%o1
	sra %o1,24,%l2
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %l0,0
	be .LL3
	and %o1,%o0,%l1
	cmp %l2,0
	bne .LL2
	cmp %l0,0
.LL3:
	sethi %hi(gzero),%o0
	b .LL11
	ld [%o0+%lo(gzero)],%i0
.LL2:
	bge .LL4
	nop
	subcc %g0,%l0,%l0
	bpos .LL4
	sub %g0,%l2,%l2
	call stoi,0
	sethi %hi(-2147483648),%o0
	call mulii,0
	mov %i1,%o1
	b .LL11
	mov %o0,%i0
.LL4:
	call cgeti,0
	add %l1,1,%o0
	mov %o0,%i0
	mov 0,%o2
	sll %l1,2,%o0
	add %i1,%o0,%i1
	add %i0,%o0,%g2
	addcc %l1,-2,%o3
	be .LL7
	add %g2,4,%g2
.LL8:
	add %g2,-4,%g2
	mov %o2,%o0
	add %i1,-4,%i1
	mov %l0,%o1
	ld [%i1],%g3
	 
        or      %o1,%g3,%o4      
        mov     %o1,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g0,%o4
        tst     %g3
        bl,a    1f
        add     %o4,%o1,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%o1
2:      clr     %o2
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g3,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o1
3:       

	addcc %o0,%o1,%o0
	addx %o2,%g0,%o2
	addcc %o3,-1,%o3
	bne .LL8
	st %o0,[%g2]
.LL7:
	cmp %o2,0
	be .LL9
	sethi %hi(-65536),%o1
	st %o2,[%g2-4]
	ld [%i0+4],%o0
	and %o0,%o1,%o0
	add %o0,%l1,%o0
	b .LL12
	add %o0,1,%o0
.LL9:
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(avma)]
	ld [%i0],%o0
	add %o0,-1,%o0
	st %o0,[%i0+4]
	add %i0,4,%i0
	ld [%i0+4],%o0
	sethi %hi(-65536),%o1
	and %o0,%o1,%o0
	add %o0,%l1,%o0
.LL12:
	st %o0,[%i0+4]
	ld [%i0+4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l2,24,%o0
	add %o1,%o0,%o1
	st %o1,[%i0+4]
.LL11:
	ret
	restore
.LLfe1:
	.size	 mulsi,.LLfe1-mulsi
	.align 4
	.global expi
	.type	 expi,#function
	.proc	04
expi:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	ld [%i0+4],%o1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	and %o1,%o0,%l0
	cmp %l0,2
	be,a .LL15
	sethi %hi(-8388608),%i0
	call bfffo,0
	ld [%i0+8],%o0
	add %l0,-2,%i0
	sll %i0,5,%i0
	sub %i0,%o0,%i0
	add %i0,-1,%i0
.LL15:
	ret
	restore
.LLfe2:
	.size	 expi,.LLfe2-expi
	.align 4
	.global addsi
	.type	 addsi,#function
	.proc	0105
addsi:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	orcc %i0,%g0,%l1
	bne,a .LL17
	ldsb [%i1+4],%l3
	call icopy,0
	mov %i1,%o0
	b .LL59
	mov %o0,%i0
.LL17:
	cmp %l3,0
	bne .LL18
	cmp %l1,0
	call stoi,0
	mov %l1,%o0
	b .LL59
	mov %o0,%i0
.LL18:
	bge,a .LL21
	mov 1,%l4
	subcc %g0,%l1,%l1
	bpos .LL21
	mov -1,%l4
	sethi %hi(MOST_NEGS),%o0
	or %o0,%lo(MOST_NEGS),%o0
	call addii,0
	mov %i1,%o1
	b .LL59
	mov %o0,%i0
.LL21:
	ld [%i1+4],%o1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %l4,%l3
	bne .LL22
	and %o1,%o0,%l0
	mov %l1,%o1
	sll %l0,2,%l2
	add %l2,%i1,%o0
	ld [%o0-4],%o0
	add %o1,%o0,%o0
	cmp %o0,%o1
	bgeu .LL23
	mov %o0,%l1
	call cgeti,0
	add %l0,1,%o0
	mov %o0,%i0
	add %l0,-1,%o2
	cmp %o2,2
	ble .LL64
	st %l1,[%i0+%l2]
	sll %o2,2,%o0
	mov %o0,%o1
	b .LL60
	add %o0,%i1,%o0
.LL27:
	cmp %o2,2
	ble .LL64
	st %g0,[%i0+%o1]
	sll %o2,2,%o1
	add %o1,%i1,%o0
.LL60:
	ld [%o0-4],%o0
	cmp %o0,-1
	be,a .LL27
	add %o2,-1,%o2
	cmp %o2,2
.LL64:
	ble .LL28
	sll %o2,2,%o1
	add %o1,%i1,%o0
	ld [%o0-4],%o0
	add %o0,1,%o0
	b .LL61
	st %o0,[%i0+%o1]
.LL31:
	add %o0,%i1,%o1
	ld [%o1-4],%o1
	st %o1,[%i0+%o0]
.LL61:
	add %o2,-1,%o2
	cmp %o2,2
	bg .LL31
	sll %o2,2,%o0
	ld [%i0],%o0
	add %o0,-1,%o0
	st %o0,[%i0+4]
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	b .LL33
	st %o0,[%o1+%lo(avma)]
.LL28:
	mov 1,%o0
	st %o0,[%i0+8]
	ld [%i0],%o0
	b .LL33
	st %o0,[%i0+4]
.LL23:
	call cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	sll %l0,2,%o0
	add %o0,%i0,%o0
	st %l1,[%o0-4]
	mov 1,%o2
	add %l0,-1,%o0
	cmp %o2,%o0
	bge .LL33
	mov %o0,%o3
.LL37:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,1,%o2
	cmp %o2,%o3
	bl .LL37
	st %o0,[%i0+%o1]
.LL33:
	ld [%i0+4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l4,24,%o0
	add %o1,%o0,%o1
	b .LL59
	st %o1,[%i0+4]
.LL22:
	cmp %l0,3
	bne .LL39
	sll %l0,2,%l2
	ld [%i1+8],%o0
	cmp %o0,%l1
	bleu .LL40
	nop
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	sll %l3,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%i1+8],%o0
	sub %o0,%l1,%o0
	b .LL59
	st %o0,[%i0+8]
.LL40:
	bne .LL41
	sethi %hi(gzero),%o0
	b .LL59
	ld [%o0+%lo(gzero)],%i0
.LL41:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	sub %g0,%l3,%o0
	sll %o0,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%i1+8],%o0
	sub %l1,%o0,%o0
	b .LL59
	st %o0,[%i0+8]
.LL39:
	add %l2,%i1,%o0
	ld [%o0-4],%o1
	mov %l1,%o0
	cmp %o1,%o0
	bgeu .LL42
	sub %o1,%o0,%l1
	call cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	add %l2,%i0,%o0
	st %l1,[%o0-4]
	add %l0,-2,%o2
	sll %o2,2,%o0
	mov %o0,%o1
	ld [%i1+%o0],%o0
	cmp %o0,0
	bne,a .LL62
	sll %o2,2,%o1
	mov -1,%o3
	st %o3,[%i0+%o1]
.LL63:
	add %o2,-1,%o2
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	cmp %o0,0
	be,a .LL63
	st %o3,[%i0+%o1]
	sll %o2,2,%o1
.LL62:
	ld [%i1+%o1],%o0
	add %o0,-1,%o0
	cmp %o2,2
	bg .LL48
	st %o0,[%i0+%o1]
	cmp %o0,0
	be,a .LL47
	ld [%i0],%o0
.LL48:
	add %o2,-1,%o2
	cmp %o2,0
	ble .LL59
	nop
.LL52:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,-1,%o2
	cmp %o2,0
	bg .LL52
	st %o0,[%i0+%o1]
	b,a .LL59
.LL47:
	add %o0,-1,%o0
	st %o0,[%i0+4]
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(avma)]
	ld [%i0+4],%o1
	sethi %hi(-16777216),%o0
	andn %o1,%o0,%o0
	sll %l3,24,%o1
	add %o0,%o1,%o0
	b .LL59
	st %o0,[%i0+4]
.LL42:
	call cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	sll %l0,2,%o0
	add %o0,%i0,%o0
	st %l1,[%o0-4]
	mov 1,%o2
	add %l0,-1,%o0
	cmp %o2,%o0
	bge .LL59
	mov %o0,%o3
.LL58:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,1,%o2
	cmp %o2,%o3
	bl .LL58
	st %o0,[%i0+%o1]
.LL59:
	ret
	restore
.LLfe3:
	.size	 addsi,.LLfe3-addsi
	.align 4
	.global addii
	.type	 addii,#function
	.proc	0105
addii:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	mov %i0,%l0
	ld [%l0+4],%o0
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	and %o0,%o1,%l1
	ld [%i1+4],%o0
	and %o0,%o1,%l2
	cmp %l1,%l2
	bge,a .LL188
	ldsb [%i1+4],%o5
	mov %i1,%l0
	mov %i0,%i1
	mov %l1,%l3
	mov %l2,%l1
	mov %l3,%l2
	ldsb [%i1+4],%o5
.LL188:
	cmp %o5,0
	bne,a .LL67
	ldsb [%l0+4],%l3
	call icopy,0
	mov %l0,%o0
	b .LL185
	mov %o0,%i0
.LL67:
	cmp %l3,%o5
	bne .LL68
	cmp %l1,%l2
	call cgeti,0
	add %l1,1,%o0
	mov %o0,%i0
	mov 0,%o2
	sll %l1,2,%o0
	add %i0,%o0,%o4
	add %o4,4,%o4
	add %l0,%o0,%o3
	sll %l2,2,%o0
	add %i1,%o0,%o1
	add %l2,-2,%o5
	sethi %hi(.LL106),%o0
	or %o0,%lo(.LL106),%g2
	add %o5,-1,%o0
.LL204:
	cmp %o0,15
	bgu .LL74
	sll %o0,2,%o0
	ld [%o0+%g2],%o0
	jmp %o0
	nop
	.align 4
.LL106:
	.word	.LL104
	.word	.LL102
	.word	.LL100
	.word	.LL98
	.word	.LL96
	.word	.LL94
	.word	.LL92
	.word	.LL90
	.word	.LL88
	.word	.LL86
	.word	.LL84
	.word	.LL82
	.word	.LL80
	.word	.LL78
	.word	.LL76
	.word	.LL74
.LL74:
	subcc %g0,%o2,%g0
	b .LL75
	add %o4,-4,%o4
.LL76:
	subcc %g0,%o2,%g0
	b .LL189
	add %o4,-4,%o4
.LL78:
	subcc %g0,%o2,%g0
	b .LL190
	add %o4,-4,%o4
.LL80:
	subcc %g0,%o2,%g0
	b .LL191
	add %o4,-4,%o4
.LL82:
	subcc %g0,%o2,%g0
	b .LL192
	add %o4,-4,%o4
.LL84:
	subcc %g0,%o2,%g0
	b .LL193
	add %o4,-4,%o4
.LL86:
	subcc %g0,%o2,%g0
	b .LL194
	add %o4,-4,%o4
.LL88:
	subcc %g0,%o2,%g0
	b .LL195
	add %o4,-4,%o4
.LL90:
	subcc %g0,%o2,%g0
	b .LL196
	add %o4,-4,%o4
.LL92:
	subcc %g0,%o2,%g0
	b .LL197
	add %o4,-4,%o4
.LL94:
	subcc %g0,%o2,%g0
	b .LL198
	add %o4,-4,%o4
.LL96:
	subcc %g0,%o2,%g0
	b .LL199
	add %o4,-4,%o4
.LL98:
	subcc %g0,%o2,%g0
	b .LL200
	add %o4,-4,%o4
.LL100:
	subcc %g0,%o2,%g0
	b .LL201
	add %o4,-4,%o4
.LL102:
	subcc %g0,%o2,%g0
	b .LL202
	add %o4,-4,%o4
.LL104:
	subcc %g0,%o2,%g0
	b .LL203
	add %o4,-4,%o4
.LL75:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL189:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL190:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL191:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL192:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL193:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL194:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL195:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL196:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL197:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL198:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL199:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL200:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL201:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL202:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL203:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%l4
	st %l4,[%o4]
	addx %g0,%g0,%o2
	add %o5,-16,%o5
	cmp %o5,0
	bg .LL204
	add %o5,-1,%o0
	cmp %o2,0
	be .LL107
	add %l0,8,%o2
.LL108:
	add %o3,-4,%o3
	cmp %o3,%o2
	blu .LL109
	mov %o3,%o1
	ld [%o3],%o0
	cmp %o0,-1
	bne,a .LL110
	add %o4,-4,%o4
	add %o4,-4,%o4
	b .LL108
	st %g0,[%o4]
.LL110:
	ld [%o1],%o0
	b .LL187
	add %o0,1,%o0
.LL114:
	add %o4,-4,%o4
	ld [%o1],%o0
.LL187:
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o2
	bgeu .LL114
	mov %o3,%o1
	b .LL205
	ld [%i0],%o0
.LL109:
	mov 1,%o0
	st %o0,[%i0+8]
	ld [%l0+4],%o0
	add %o0,1,%o0
	b .LL185
	st %o0,[%i0+4]
.LL107:
	subcc %l1,%l2,%o2
	be,a .LL205
	ld [%i0],%o0
.LL119:
	add %o4,-4,%o4
	add %o3,-4,%o3
	ld [%o3],%o0
	addcc %o2,-1,%o2
	bne .LL119
	st %o0,[%o4]
	ld [%i0],%o0
.LL205:
	add %o0,-1,%o0
	st %o0,[%i0+4]
	ld [%l0+4],%o0
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	b .LL185
	st %o0,[%o1+%lo(avma)]
.LL68:
	bne .LL121
	add %l0,8,%o3
	addcc %l1,-2,%o2
	be .LL129
	add %i1,8,%o1
	ld [%o3],%o4
.LL206:
	add %o3,4,%o3
	ld [%o1],%o0
	cmp %o0,%o4
	bgu .LL186
	add %o1,4,%o1
	cmp %o4,%o0
	bgu .LL121
	addcc %o2,-1,%o2
	bne,a .LL206
	ld [%o3],%o4
.LL129:
	sethi %hi(gzero),%o0
	b .LL185
	ld [%o0+%lo(gzero)],%i0
.LL186:
	mov %l0,%i0
	mov %i1,%l0
	mov %i0,%i1
	mov %o5,%l3
.LL121:
	call cgeti,0
	mov %l1,%o0
	mov %o0,%i0
	mov 0,%o2
	sll %l1,2,%o0
	add %l0,%o0,%o3
	sll %l2,2,%o1
	add %i1,%o1,%o1
	add %i0,%o0,%o4
	add %l2,-2,%o5
	sethi %hi(.LL167),%o0
	or %o0,%lo(.LL167),%g2
	add %o5,-1,%o0
.LL222:
	cmp %o0,15
	bgu .LL135
	sll %o0,2,%o0
	ld [%o0+%g2],%o0
	jmp %o0
	nop
	.align 4
.LL167:
	.word	.LL165
	.word	.LL163
	.word	.LL161
	.word	.LL159
	.word	.LL157
	.word	.LL155
	.word	.LL153
	.word	.LL151
	.word	.LL149
	.word	.LL147
	.word	.LL145
	.word	.LL143
	.word	.LL141
	.word	.LL139
	.word	.LL137
	.word	.LL135
.LL135:
	subcc %g0,%o2,%g0
	b .LL136
	add %o4,-4,%o4
.LL137:
	subcc %g0,%o2,%g0
	b .LL207
	add %o4,-4,%o4
.LL139:
	subcc %g0,%o2,%g0
	b .LL208
	add %o4,-4,%o4
.LL141:
	subcc %g0,%o2,%g0
	b .LL209
	add %o4,-4,%o4
.LL143:
	subcc %g0,%o2,%g0
	b .LL210
	add %o4,-4,%o4
.LL145:
	subcc %g0,%o2,%g0
	b .LL211
	add %o4,-4,%o4
.LL147:
	subcc %g0,%o2,%g0
	b .LL212
	add %o4,-4,%o4
.LL149:
	subcc %g0,%o2,%g0
	b .LL213
	add %o4,-4,%o4
.LL151:
	subcc %g0,%o2,%g0
	b .LL214
	add %o4,-4,%o4
.LL153:
	subcc %g0,%o2,%g0
	b .LL215
	add %o4,-4,%o4
.LL155:
	subcc %g0,%o2,%g0
	b .LL216
	add %o4,-4,%o4
.LL157:
	subcc %g0,%o2,%g0
	b .LL217
	add %o4,-4,%o4
.LL159:
	subcc %g0,%o2,%g0
	b .LL218
	add %o4,-4,%o4
.LL161:
	subcc %g0,%o2,%g0
	b .LL219
	add %o4,-4,%o4
.LL163:
	subcc %g0,%o2,%g0
	b .LL220
	add %o4,-4,%o4
.LL165:
	subcc %g0,%o2,%g0
	b .LL221
	add %o4,-4,%o4
.LL136:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL207:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL208:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL209:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL210:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL211:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL212:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL213:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL214:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL215:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL216:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL217:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL218:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL219:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL220:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	add %o4,-4,%o4
.LL221:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%l4
	st %l4,[%o4]
	addx %g0,%g0,%o2
	add %o5,-16,%o5
	cmp %o5,0
	bg .LL222
	add %o5,-1,%o0
	cmp %o2,0
	be,a .LL168
	subcc %l1,%l2,%o5
	add %o3,-4,%o3
	ld [%o3],%o0
	cmp %o0,0
	bne .LL223
	add %l0,8,%o1
	mov -1,%o1
	add %o4,-4,%o4
.LL224:
	st %o1,[%o4]
	add %o3,-4,%o3
	ld [%o3],%o0
	cmp %o0,0
	be,a .LL224
	add %o4,-4,%o4
	add %l0,8,%o1
.LL223:
	cmp %o3,%o1
	blu .LL176
	add %o0,-1,%o0
	add %o4,-4,%o4
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o1
	blu .LL176
	mov %o3,%o0
.LL175:
	add %o4,-4,%o4
	ld [%o0],%o0
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o1
	bgeu .LL175
	mov %o3,%o0
	b .LL225
	ld [%i0+8],%o0
.LL168:
	be,a .LL225
	ld [%i0+8],%o0
.LL179:
	add %o4,-4,%o4
	add %o3,-4,%o3
	ld [%o3],%o0
	addcc %o5,-1,%o5
	bne .LL179
	st %o0,[%o4]
.LL176:
	ld [%i0+8],%o0
.LL225:
	cmp %o0,0
	be,a .LL180
	ld [%i0+12],%o0
	ld [%l0+4],%o0
	b .LL185
	st %o0,[%i0+4]
.LL180:
	cmp %o0,0
	bne .LL183
	add %i0,12,%o4
	add %o4,4,%o4
.LL226:
	ld [%o4],%o0
	cmp %o0,0
	be,a .LL226
	add %o4,4,%o4
.LL183:
	add %o4,-8,%o4
	sub %o4,%i0,%o5
	sra %o5,2,%o5
	ld [%i0],%o1
	sub %o1,%o5,%o1
	st %o1,[%o4]
	st %o1,[%o4+4]
	mov %o4,%i0
	sethi %hi(-16777216),%o0
	andn %o1,%o0,%o0
	sll %l3,24,%o1
	add %o0,%o1,%o0
	st %o0,[%i0+4]
	sethi %hi(avma),%o2
	sll %o5,2,%o0
	ld [%o2+%lo(avma)],%o1
	add %o0,%o1,%o0
	st %o0,[%o2+%lo(avma)]
.LL185:
	ret
	restore
.LLfe4:
	.size	 addii,.LLfe4-addii
	.align 4
	.global mulss
	.type	 mulss,#function
	.proc	0105
mulss:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	orcc %i0,%g0,%o0
	be .LL229
	cmp %i1,0
	bne .LL228
	cmp %o0,0
.LL229:
	sethi %hi(gzero),%o0
	b .LL237
	ld [%o0+%lo(gzero)],%i0
.LL228:
	bge .LL230
	mov 1,%l0
	subcc %g0,%o0,%o0
	bpos .LL230
	mov -1,%l0
	call stoi,0
	nop
	mov %o0,%o1
	call mulsi,0
	mov %i1,%o0
	b .LL237
	mov %o0,%i0
.LL230:
	cmp %i1,0
	bge .LL232
	nop
	subcc %g0,%i1,%i1
	bpos .LL232
	sub %g0,%l0,%l0
	cmp %l0,0
	bg .LL234
	mov %o0,%o1
	sub %g0,%o0,%o1
.LL234:
	mov %o1,%o0
	sethi %hi(ABS_MOST_NEGS),%o1
	call mulsi,0
	or %o1,%lo(ABS_MOST_NEGS),%o1
	b .LL237
	mov %o0,%i0
.LL232:
	 
        or      %o0,%i1,%o4      
        mov     %o0,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%g0,%o4
        tst     %i1
        bl,a    1f
        add     %o4,%o0,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%o0
2:      clr     %o2
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o0
3:       

	orcc %o2,%g0,%i1
	be .LL235
	mov %o0,%l1
	call cgeti,0
	mov 4,%o0
	mov %o0,%i0
	st %i1,[%i0+8]
	b .LL236
	st %l1,[%i0+12]
.LL235:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	st %l1,[%i0+8]
.LL236:
	ld [%i0],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l0,24,%o0
	add %o1,%o0,%o1
	st %o1,[%i0+4]
.LL237:
	ret
	restore
.LLfe5:
	.size	 mulss,.LLfe5-mulss
	.align 4
	.global mulii
	.type	 mulii,#function
	.proc	0105
mulii:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	mov %i0,%l4
	ld [%l4+4],%o0
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	and %o0,%o1,%l0
	ld [%i1+4],%o2
	sra %o0,24,%l3
	cmp %l3,0
	be .LL255
	and %o2,%o1,%l2
	ldsb [%i1+4],%o0
	cmp %o0,0
	bne .LL240
	nop
.LL255:
	sethi %hi(gzero),%o0
	b .LL254
	ld [%o0+%lo(gzero)],%i0
.LL240:
	bl,a .LL241
	sub %g0,%l3,%l3
.LL241:
	cmp %l0,%l2
	ble .LL242
	sethi %hi(65535),%o0
	mov %l4,%i0
	mov %i1,%l4
	mov %i0,%i1
	mov %l0,%l1
	mov %l2,%l0
	mov %l1,%l2
.LL242:
	add %l0,%l2,%l1
	add %l1,-2,%l1
	or %o0,%lo(65535),%o0
	cmp %l1,%o0
	ble .LL243
	nop
	call err,0
	mov 17,%o0
.LL243:
	call cgeti,0
	mov %l1,%o0
	mov %o0,%i0
	ld [%i0],%o1
	sethi %hi(-16777216),%o0
	andn %o1,%o0,%o0
	sll %l3,24,%o1
	add %o0,%o1,%o0
	st %o0,[%i0+4]
	sll %l0,2,%o0
	add %l4,%o0,%g4
	add %g4,-4,%g4
	ld [%g4],%g2
	mov 0,%o2
	sll %l2,2,%o0
	add %i1,%o0,%g3
	sll %l1,2,%o0
	addcc %l2,-2,%o3
	be .LL245
	add %i0,%o0,%g1
.LL246:
	add %g1,-4,%g1
	mov %o2,%o0
	add %g3,-4,%g3
	mov %g2,%o1
	ld [%g3],%l5
	 
        or      %o1,%l5,%o4      
        mov     %o1,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%g0,%o4
        tst     %l5
        bl,a    1f
        add     %o4,%o1,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%o1
2:      clr     %o2
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%l5,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o1
3:       

	addcc %o0,%o1,%o0
	addx %o2,%g0,%o2
	addcc %o3,-1,%o3
	bne .LL246
	st %o0,[%g1]
.LL245:
	st %o2,[%g1-4]
	sll %l1,2,%o0
	add %i0,%o0,%g1
	sll %l2,2,%o0
	add %i1,%o0,%i1
	add %l0,-3,%l0
	cmp %l0,0
	ble .LL248
	add %l2,-1,%l2
.LL252:
	add %g4,-4,%g4
	ld [%g4],%o7
	mov %i1,%g3
	add %g1,-4,%o1
	mov %o1,%g1
	addcc %l2,-1,%o3
	be .LL250
	mov 0,%g2
.LL251:
	add %g3,-4,%g3
	ld [%g3],%o0
	 
        or      %o0,%o7,%o4      
        mov     %o0,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%g0,%o4
        tst     %o7
        bl,a    1f
        add     %o4,%o0,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%o0
2:      clr     %o2
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o0
3:       

	add %o1,-4,%o1
	ld [%o1],%l5
	addcc %o0,%l5,%o0
	addx %o2,%g0,%o2
	addcc %o0,%g2,%o0
	addx %o2,%g0,%o2
	st %o0,[%o1]
	addcc %o3,-1,%o3
	bne .LL251
	mov %o2,%g2
.LL250:
	add %l0,-1,%l0
	cmp %l0,0
	bg .LL252
	st %o2,[%o1-4]
.LL248:
	ld [%i0+8],%o0
	cmp %o0,0
	bne .LL254
	sethi %hi(avma),%o1
	ld [%i0+4],%o0
	add %o0,-1,%o0
	st %o0,[%i0+8]
	ld [%i0],%o0
	add %o0,-1,%o0
	st %o0,[%i0+4]
	add %i0,4,%i0
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(avma)]
.LL254:
	ret
	restore
.LLfe6:
	.size	 mulii,.LLfe6-mulii
	.global .div
.section	".rodata"
	.align 8
.LLC0:
	.long	0x3fd34413
	.long	0x55475a32
	.align 8
.LLC1:
	.long	0x3ff00000
	.long	0x0
.section	".text"
	.align 4
	.global confrac
	.type	 confrac,#function
	.proc	0105
confrac:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	ld [%i0],%o1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	and %o1,%o0,%l2
	ld [%i0+4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sethi %hi(8388607),%o0
	or %o0,%lo(8388607),%o0
	sub %o0,%o1,%l0
	sethi %hi(avma),%o0
	ld [%o0+%lo(avma)],%l5
	add %l2,-2,%l4
	sll %l4,5,%l4
	add %l4,%l0,%l4
	add %l4,63,%l3
	sra %l3,5,%l3
	call cgeti,0
	mov %l3,%o0
	sra %l0,5,%o1
	mov 0,%g2
	cmp %g2,%o1
	bge .LL258
	mov %o0,%l1
.LL260:
	sll %g2,2,%o0
	add %g2,1,%g2
	cmp %g2,%o1
	bl .LL260
	st %g0,[%l1+%o0]
.LL258:
	andcc %l0,31,%l0
	bne .LL261
	mov 2,%g3
	cmp %g3,%l2
	bge .LL279
	sll %l3,2,%o0
.LL265:
	sll %g2,2,%o0
	sll %g3,2,%o1
	ld [%i0+%o1],%o1
	st %o1,[%l1+%o0]
	add %g3,1,%g3
	cmp %g3,%l2
	bl .LL265
	add %g2,1,%g2
	b .LL279
	sll %l3,2,%o0
.LL261:
	cmp %g3,%l2
	bge .LL268
	mov 0,%o3
	mov 32,%o0
	sub %o0,%l0,%o4
.LL270:
	sll %g2,2,%o1
	sll %g3,2,%o0
	ld [%i0+%o0],%o2
	add %g2,1,%g2
	srl %o2,%l0,%o0
	add %o0,%o3,%o0
	st %o0,[%l1+%o1]
	add %g3,1,%g3
	cmp %g3,%l2
	bl .LL270
	sll %o2,%o4,%o3
.LL268:
	sll %l3,2,%o0
	add %o0,%l1,%o0
	st %o3,[%o0-8]
	sll %l3,2,%o0
.LL279:
	add %o0,%l1,%o0
	st %g0,[%o0-4]
	st %l4,[%fp-16]
	ld [%fp-16],%f6
	fitod %f6,%f2
	sethi %hi(.LLC0),%l6
	ldd [%l6+%lo(.LLC0)],%f4
	fmuld %f2,%f4,%f2
	sethi %hi(.LLC1),%l6
	ldd [%l6+%lo(.LLC1)],%f4
	faddd %f2,%f4,%f2
	fdtoi %f2,%f2
	st %f2,[%fp-16]
	ld [%fp-16],%l0
	add %l0,17,%l2
	mov %l2,%o0
	call .div,0
	mov 9,%o1
	call cgeti,0
	mov %o0,%l2
	mov %o0,%i0
	mov 1,%g3
	cmp %g3,%l2
	bge .LL272
	st %l0,[%i0]
.LL278:
	addcc %l3,-1,%g2
	bneg .LL275
	mov 0,%o3
	sethi %hi(1000000000),%o0
	or %o0,%lo(1000000000),%o7
.LL277:
	sll %g2,2,%o0
	mov %o3,%o2
	ld [%l1+%o0],%o1
	 
        or      %o1,%o7,%o4      
        mov     %o1,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%g0,%o4
        tst     %o7
        bl,a    1f
        add     %o4,%o1,%o4
1:      mov     %o4,%o3
        b       3f 
        rd      %y,%o1
2:      clr     %o3
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%o7,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o1
3:       

	addcc %o2,%o1,%o1
	addx %o3,%g0,%o3
	addcc %g2,-1,%g2
	bpos .LL277
	st %o1,[%l1+%o0]
.LL275:
	sll %g3,2,%o0
	add %g3,1,%g3
	cmp %g3,%l2
	bl .LL278
	st %o3,[%i0+%o0]
.LL272:
	sethi %hi(avma),%o0
	st %l5,[%o0+%lo(avma)]
	ret
	restore
.LLfe7:
	.size	 confrac,.LLfe7-confrac
	.align 4
	.global divss
	.type	 divss,#function
	.proc	0105
divss:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne .LL289
	sethi %hi(-2147483648),%o0
	call err,0
	mov 23,%o0
	sethi %hi(-2147483648),%o0
.LL289:
	cmp %i0,%o0
	bne .LL282
	sethi %hi(hiremainder),%o0
	call stoi,0
	mov %i0,%o0
	call divis,0
	mov %i1,%o1
	b,a .LL288
.LL282:
	st %g0,[%o0+%lo(hiremainder)]
	cmp %i0,0
	bge .LL283
	mov %i0,%o0
	sub %g0,%i0,%o0
.LL283:
	cmp %i1,0
	bge .LL284
	mov %i1,%o1
	sub %g0,%i1,%o1
.LL284:
	sethi %hi(hiremainder),%l0
	call divul3,0
	or %l0,%lo(hiremainder),%o2
	cmp %i1,0
	bge .LL285
	mov %o0,%o1
	ld [%l0+%lo(hiremainder)],%o0
	sub %g0,%o0,%o0
	st %o0,[%l0+%lo(hiremainder)]
	sub %g0,%o1,%o1
.LL285:
	cmp %i0,0
	bl,a .LL286
	sub %g0,%o1,%o1
.LL286:
	call stoi,0
	mov %o1,%o0
.LL288:
	ret
	restore %g0,%o0,%o0
.LLfe8:
	.size	 divss,.LLfe8-divss
	.align 4
	.global modss
	.type	 modss,#function
	.proc	0105
modss:
	!#PROLOGUE# 0
	save %sp,-120,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne .LL299
	sethi %hi(-2147483648),%o0
	call err,0
	mov 38,%o0
	sethi %hi(-2147483648),%o0
.LL299:
	cmp %i0,%o0
	bne .LL292
	mov %i0,%o0
	call stoi,0
	nop
	call modis,0
	mov %i1,%o1
	b .LL298
	mov %o0,%i0
.LL292:
	cmp %o0,0
	bge .LL293
	st %g0,[%fp-20]
	sub %g0,%o0,%o0
.LL293:
	cmp %i1,0
	bl,a .LL294
	sub %g0,%i1,%i1
.LL294:
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	ld [%fp-20],%o0
	cmp %o0,0
	bne .LL295
	nop
	sethi %hi(gzero),%o0
	b .LL298
	ld [%o0+%lo(gzero)],%i0
.LL295:
	bge .LL296
	nop
	call stoi,0
	sub %i1,%o0,%o0
	b .LL298
	mov %o0,%i0
.LL296:
	call stoi,0
	ld [%fp-20],%o0
	mov %o0,%i0
.LL298:
	ret
	restore
.LLfe9:
	.size	 modss,.LLfe9-modss
	.align 4
	.global resss
	.type	 resss,#function
	.proc	0105
resss:
	!#PROLOGUE# 0
	save %sp,-120,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne .LL306
	mov %i0,%o0
	call err,0
	mov 40,%o0
	mov %i0,%o0
.LL306:
	cmp %o0,0
	bge .LL302
	st %g0,[%fp-20]
	sub %g0,%o0,%o0
.LL302:
	cmp %i1,0
	bge .LL303
	mov %i1,%o1
	sub %g0,%i1,%o1
.LL303:
	call divul3,0
	add %fp,-20,%o2
	cmp %i1,0
	bge .LL304
	ld [%fp-20],%o0
	call stoi,0
	sub %g0,%o0,%o0
	b,a .LL305
.LL304:
	call stoi,0
	nop
.LL305:
	ret
	restore %g0,%o0,%o0
.LLfe10:
	.size	 resss,.LLfe10-resss
	.align 4
	.global divsi
	.type	 divsi,#function
	.proc	0105
divsi:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	ld [%i1+4],%o0
	sra %o0,24,%o2
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	cmp %o2,0
	bne .LL308
	and %o0,%o1,%l0
	call err,0
	mov 24,%o0
.LL308:
	cmp %i0,0
	be .LL310
	cmp %l0,3
	bg .LL317
	sethi %hi(hiremainder),%o0
	ld [%i1+8],%o0
	cmp %o0,0
	bge .LL309
	sethi %hi(-2147483648),%o0
.LL310:
	sethi %hi(hiremainder),%o0
.LL317:
	st %i0,[%o0+%lo(hiremainder)]
	sethi %hi(gzero),%o0
	b .LL315
	ld [%o0+%lo(gzero)],%i0
.LL309:
	cmp %i0,%o0
	bne .LL311
	sethi %hi(hiremainder),%o0
	call stoi,0
	mov %i0,%o0
	mov %i1,%o1
	call dvmdii,0
	mov 0,%o2
	b .LL315
	mov %o0,%i0
.LL311:
	st %g0,[%o0+%lo(hiremainder)]
	cmp %i0,0
	bge .LL312
	mov %i0,%o0
	sub %g0,%i0,%o0
.LL312:
	ld [%i1+8],%o1
	sethi %hi(hiremainder),%l0
	call divul3,0
	or %l0,%lo(hiremainder),%o2
	mov %o0,%o1
	ldsb [%i1+4],%o0
	cmp %o0,0
	bge .LL318
	cmp %i0,0
	ld [%l0+%lo(hiremainder)],%o0
	sub %g0,%o0,%o0
	st %o0,[%l0+%lo(hiremainder)]
	sub %g0,%o1,%o1
.LL318:
	bl,a .LL314
	sub %g0,%o1,%o1
.LL314:
	call stoi,0
	mov %o1,%o0
	mov %o0,%i0
.LL315:
	ret
	restore
.LLfe11:
	.size	 divsi,.LLfe11-divsi
	.align 4
	.global divis
	.type	 divis,#function
	.proc	0105
divis:
	!#PROLOGUE# 0
	save %sp,-120,%sp
	!#PROLOGUE# 1
	ld [%i0+4],%o1
	sra %o1,24,%l4
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %i1,0
	bne .LL320
	and %o1,%o0,%l3
	call err,0
	mov 26,%o0
.LL320:
	cmp %l4,0
	bne .LL321
	cmp %i1,0
	sethi %hi(hiremainder),%o0
	b .LL335
	st %g0,[%o0+%lo(hiremainder)]
.LL321:
	bge,a .LL336
	ld [%i0+8],%o0
	subcc %g0,%i1,%i1
	bpos .LL322
	sub %g0,%l4,%l4
	call stoi,0
	mov %i1,%o0
	mov %o0,%o1
	mov %i0,%o0
	call dvmdii,0
	mov 0,%o2
	b .LL334
	mov %o0,%i0
.LL322:
	ld [%i0+8],%o0
.LL336:
	cmp %i1,%o0
	bleu .LL324
	cmp %l3,3
	bne .LL325
	sethi %hi(hiremainder),%l0
	call itos,0
	mov %i0,%o0
	st %o0,[%l0+%lo(hiremainder)]
.LL335:
	sethi %hi(gzero),%o0
	b .LL334
	ld [%o0+%lo(gzero)],%i0
.LL325:
	call cgeti,0
	add %l3,-1,%o0
	mov %o0,%l2
	mov 1,%l1
	ld [%i0+8],%o0
	b .LL327
	st %o0,[%fp-20]
.LL324:
	call cgeti,0
	mov %l3,%o0
	mov %o0,%l2
	mov 0,%l1
	st %g0,[%fp-20]
.LL327:
	add %l1,2,%l0
	cmp %l0,%l3
	bge,a .LL337
	ld [%l2],%o0
.LL331:
	sll %l0,2,%o0
	ld [%i0+%o0],%o0
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	sub %l0,%l1,%o1
	sll %o1,2,%o1
	add %l0,1,%l0
	cmp %l0,%l3
	bl .LL331
	st %o0,[%l2+%o1]
	ld [%l2],%o0
.LL337:
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l4,24,%o0
	add %o1,%o0,%o1
	st %o1,[%l2+4]
	sethi %hi(hiremainder),%o1
	cmp %l4,0
	bge .LL332
	or %o1,%lo(hiremainder),%o2
	ld [%fp-20],%o0
	sub %g0,%o0,%o0
	b .LL333
	st %o0,[%o1+%lo(hiremainder)]
.LL332:
	ld [%fp-20],%o0
	st %o0,[%o2]
.LL333:
	mov %l2,%i0
.LL334:
	ret
	restore
.LLfe12:
	.size	 divis,.LLfe12-divis
	.align 4
	.global dvmdii
	.type	 dvmdii,#function
	.proc	0105
dvmdii:
	!#PROLOGUE# 0
	save %sp,-152,%sp
	!#PROLOGUE# 1
	mov %i0,%l0
	mov %i2,%i4
	ldsb [%l0+4],%g4
	st %g4,[%fp-36]
	ldsb [%i1+4],%g1
	cmp %g1,0
	bne .LL339
	st %g1,[%fp-44]
	call err,0
	mov 36,%o0
.LL339:
	ld [%fp-36],%g4
	cmp %g4,0
	bne,a .LL340
	ld [%l0+4],%o0
	cmp %i4,-1
	be .LL427
	cmp %i4,0
	be .LL432
	sethi %hi(gzero),%o0
	sethi %hi(gzero),%o1
	ld [%o1+%lo(gzero)],%o0
	st %o0,[%i4]
	b .LL426
	ld [%o1+%lo(gzero)],%i0
.LL340:
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	and %o0,%o1,%l6
	ld [%i1+4],%o0
	and %o0,%o1,%i3
	subcc %l6,%i3,%i5
	bpos,a .LL343
	sethi %hi(avma),%o0
	cmp %i4,-1
	bne .LL344
	cmp %i4,0
	call icopy,0
	mov %l0,%o0
	b .LL426
	mov %o0,%i0
.LL344:
	be .LL432
	sethi %hi(gzero),%o0
	call icopy,0
	mov %l0,%o0
	b .LL427
	st %o0,[%i4]
.LL343:
	ld [%o0+%lo(avma)],%o0
	st %o0,[%fp-28]
	ld [%fp-36],%g1
	cmp %g1,0
	bge .LL433
	cmp %i3,3
	ld [%fp-44],%g4
	sub %g0,%g4,%g4
	st %g4,[%fp-44]
.LL433:
	bne .LL347
	nop
	ld [%i1+8],%i1
	ld [%l0+8],%o0
	cmp %i1,%o0
	bleu .LL348
	add %l0,8,%l1
	add %l6,-1,%l4
	st %o0,[%fp-20]
	b .LL349
	add %l0,12,%l1
.LL348:
	mov %l6,%l4
	st %g0,[%fp-20]
.LL349:
	call cgeti,0
	mov %l4,%o0
	mov %o0,%l5
	addcc %l4,-2,%l3
	be .LL351
	add %l5,8,%l2
.LL352:
	ld [%l1],%o0
	add %l1,4,%l1
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	st %o0,[%l2]
	addcc %l3,-1,%l3
	bne .LL352
	add %l2,4,%l2
.LL351:
	cmp %i4,-1
	bne .LL353
	cmp %l4,2
	ld [%fp-28],%g1
	sethi %hi(avma),%o0
	st %g1,[%o0+%lo(avma)]
	ld [%fp-20],%o0
	cmp %o0,0
	bne .LL354
	nop
.LL427:
	sethi %hi(gzero),%o0
.LL432:
	b .LL426
	ld [%o0+%lo(gzero)],%i0
.LL354:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	ld [%fp-36],%g4
	sll %g4,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%fp-20],%o0
	b .LL426
	st %o0,[%i0+8]
.LL353:
	be .LL355
	sethi %hi(-16777216),%o1
	ld [%l5],%o0
	andn %o0,%o1,%o1
	ld [%fp-44],%g1
	sll %g1,24,%o0
	add %o1,%o0,%o1
	b .LL356
	st %o1,[%l5+4]
.LL355:
	ld [%fp-28],%g4
	sethi %hi(avma),%o0
	st %g4,[%o0+%lo(avma)]
	sethi %hi(gzero),%o0
	ld [%o0+%lo(gzero)],%l5
.LL356:
	cmp %i4,0
	bne .LL357
	ld [%fp-20],%o0
.LL429:
	b .LL426
	mov %l5,%i0
.LL357:
	cmp %o0,0
	bne .LL358
	sethi %hi(gzero),%o0
	ld [%o0+%lo(gzero)],%o0
	b .LL429
	st %o0,[%i4]
.LL358:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	ld [%fp-36],%g1
	sll %g1,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%fp-20],%o0
	st %o0,[%i0+8]
	b .LL429
	st %i0,[%i4]
.LL347:
	call cgeti,0
	mov %l6,%o0
	mov %o0,%l5
	call bfffo,0
	ld [%i1+8],%o0
	orcc %o0,%g0,%l7
	be .LL361
	add %l0,8,%l1
	call cgeti,0
	mov %i3,%o0
	mov %o0,%i0
	ld [%i1+8],%o3
	add %i1,12,%o1
	mov 32,%o0
	sub %o0,%l7,%o0
	srl %o3,%o0,%o0
	st %o0,[%fp-20]
	sll %o3,%l7,%g2
	addcc %i3,-3,%l3
	be .LL363
	add %i0,8,%o2
	mov 32,%o0
	sub %o0,%l7,%o4
.LL364:
	ld [%o1],%o3
	add %o1,4,%o1
	srl %o3,%o4,%o0
	st %o0,[%fp-20]
	add %g2,%o0,%o0
	st %o0,[%o2]
	add %o2,4,%o2
	addcc %l3,-1,%l3
	bne .LL364
	sll %o3,%l7,%g2
.LL363:
	st %g2,[%o2]
	mov 0,%g2
	add %l0,8,%l1
	addcc %l6,-2,%l3
	be .LL366
	add %l5,4,%l2
	mov 32,%o0
	sub %o0,%l7,%o1
.LL367:
	ld [%l1],%o3
	add %l1,4,%l1
	srl %o3,%o1,%o0
	st %o0,[%fp-20]
	add %g2,%o0,%o0
	st %o0,[%l2]
	add %l2,4,%l2
	addcc %l3,-1,%l3
	bne .LL367
	sll %o3,%l7,%g2
.LL366:
	b .LL368
	st %g2,[%l2]
.LL361:
	st %g0,[%l5+4]
	addcc %l6,-2,%l0
	be .LL370
	add %l5,8,%l2
.LL371:
	ld [%l1],%o0
	st %o0,[%l2]
	add %l1,4,%l1
	addcc %l0,-1,%l0
	bne .LL371
	add %l2,4,%l2
.LL370:
	mov %i1,%i0
.LL368:
	ld [%i0+8],%i1
	ld [%i0+12],%i2
	addcc %i5,1,%l3
	be .LL373
	add %l5,4,%l2
	sll %i3,2,%l1
.LL395:
	ld [%l2],%o0
	cmp %o0,%i1
	bne .LL374
	add %l2,4,%l2
	mov -1,%o7
	mov %i1,%o3
	ld [%l2],%o0
	add %o3,%o0,%o1
	cmp %o1,%o3
	addx %g0,0,%o2
	b .LL375
	mov %o1,%g2
.LL374:
	ld [%l2-4],%o0
	st %o0,[%fp-20]
	ld [%l2],%o0
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	mov %o0,%o7
	mov 0,%o2
	ld [%fp-20],%g2
.LL375:
	cmp %o2,0
	bne,a .LL434
	st %g0,[%fp-20]
	mov %o7,%o0
	 
        or      %o0,%i2,%o4      
        mov     %o0,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%g0,%o4
        tst     %i2
        bl,a    1f
        add     %o4,%o0,%o4
1:      mov     %o4,%g4
        b       3f 
        rd      %y,%o0
2:      clr     %g4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%i2,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o0
3:       

	st %g4,[%fp-20]
	mov %o0,%o3
	ld [%l2+4],%o0
	cmp %o3,%o0
	sub %o3,%o0,%o5
	ld [%fp-20],%o3
	addx %g0,0,%o2
	subx %o3,%g2,%o1
	cmp %g2,%o3
	bgu .LL431
	mov %g2,%o0
	b .LL435
	cmp %o0,%o3
.LL387:
	mov %i2,%o0
	cmp %o3,%o0
	sub %o3,%o0,%o5
	mov %o4,%o3
	mov %i1,%o0
	addx %g0,0,%o2
	subx %o3,%o0,%o1
	cmp %o0,%o3
	bleu .LL435
	add %o7,-1,%o7
.LL431:
	b .LL384
	mov 1,%o2
.LL435:
	blu,a .LL384
	mov 0,%o2
.LL384:
	cmp %o2,0
	bne .LL376
	mov %o1,%o4
	cmp %o1,0
	bne .LL387
	mov %o5,%o3
.LL376:
	st %g0,[%fp-20]
.LL434:
	add %l2,%l1,%o0
	add %o0,-8,%g2
	addcc %i3,-2,%l0
	be .LL389
	add %i0,%l1,%g3
.LL390:
	ld [%fp-20],%o3
	add %g3,-4,%g3
	mov %o7,%o0
	ld [%g3],%g4
	 
        or      %o0,%g4,%o4      
        mov     %o0,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g0,%o4
        tst     %g4
        bl,a    1f
        add     %o4,%o0,%o4
1:      mov     %o4,%g1
        b       3f 
        rd      %y,%o0
2:      clr     %g1
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g4,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o0
3:       

	st %g1,[%fp-20]
	ld [%fp-20],%g1
	addcc %o3,%o0,%o0
	addx %g1,%g0,%g1
	st %g1,[%fp-20]
	mov %o0,%o2
	add %g2,-4,%g2
	ld [%g2],%o3
	sub %o3,%o2,%o1
	cmp %o3,%o2
	st %o1,[%g2]
	ld [%fp-20],%o0
	addx %g0,%o0,%o0
	addcc %l0,-1,%l0
	bne .LL390
	st %o0,[%fp-20]
.LL389:
	ld [%l2-4],%o1
	ld [%fp-20],%o0
	cmp %o1,%o0
	bgeu,a .LL436
	addcc %l3,-1,%l3
	mov 0,%o2
	add %o7,-1,%o7
	add %l2,%l1,%g2
	add %g2,-8,%g2
	addcc %i3,-2,%l0
	be .LL391
	add %i0,%l1,%g3
	add %g2,-4,%g2
.LL437:
	subcc %g0,%o2,%g0
	add %g3,-4,%g3
	ld [%g2],%g4
	ld [%g3],%g1
	addxcc %g4,%g1,%g4
	st %g4,[%g2]
	addx %g0,%g0,%o2
	addcc %l0,-1,%l0
	bne,a .LL437
	add %g2,-4,%g2
.LL391:
	addcc %l3,-1,%l3
.LL436:
	bne .LL395
	st %o7,[%l2-4]
.LL373:
	sethi %hi(avma),%o0
	cmp %i4,-1
	be .LL396
	ld [%o0+%lo(avma)],%i0
	add %i5,2,%l1
	sll %l1,2,%o0
	add %l5,%o0,%l2
	ld [%l5+4],%o0
	cmp %o0,0
	be .LL397
	cmp %i5,0
	b .LL398
	add %i5,3,%l1
.LL397:
	be,a .LL398
	st %g0,[%fp-44]
.LL398:
	call cgeti,0
	mov %l1,%o0
	st %o0,[%fp-52]
	sll %l1,2,%o0
	ld [%fp-52],%g4
	addcc %l1,-2,%l0
	be .LL401
	add %g4,%o0,%o1
.LL402:
	add %o1,-4,%o1
	add %l2,-4,%l2
	ld [%l2],%o0
	addcc %l0,-1,%l0
	bne .LL402
	st %o0,[%o1]
.LL401:
	cmp %l1,2
	bgu .LL403
	mov 2,%o0
	ld [%fp-52],%g1
	b .LL396
	st %o0,[%g1+4]
.LL403:
	ld [%fp-52],%g4
	ld [%g4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	ld [%fp-44],%g1
	sll %g1,24,%o0
	add %o1,%o0,%o1
	st %o1,[%g4+4]
.LL396:
	cmp %i4,0
	be .LL438
	cmp %i4,-1
	add %i5,2,%l0
.LL408:
	cmp %l0,%l6
	bge .LL440
	sll %l0,2,%o0
	ld [%l5+%o0],%o0
	cmp %o0,0
	be,a .LL408
	add %l0,1,%l0
	cmp %l0,%l6
.LL440:
	bne .LL410
	sub %l6,%l0,%o0
	sethi %hi(gzero),%o0
	call icopy,0
	ld [%o0+%lo(gzero)],%o0
	b .LL405
	mov %o0,%l4
.LL410:
	call cgeti,0
	add %o0,2,%o0
	mov %o0,%l4
	ld [%l4],%o0
	cmp %l7,0
	bne .LL412
	st %o0,[%l4+4]
	cmp %l0,%l6
	bge .LL417
	mov 2,%l3
.LL416:
	sll %l3,2,%o0
	sll %l0,2,%o1
	ld [%l5+%o1],%o1
	st %o1,[%l4+%o0]
	add %l0,1,%l0
	cmp %l0,%l6
	bl .LL416
	add %l3,1,%l3
	b .LL439
	ld [%l4+4],%o0
.LL412:
	st %g0,[%fp-20]
	sll %l0,2,%o0
	ld [%l5+%o0],%o3
	add %l0,1,%l0
	mov 32,%o0
	sub %o0,%l7,%o0
	sll %o3,%o0,%o0
	st %o0,[%fp-20]
	srl %o3,%l7,%o2
	cmp %o2,0
	be .LL418
	mov %o0,%g2
	st %o2,[%l4+8]
	b .LL419
	mov 1,%o0
.LL418:
	ld [%l4],%o0
	add %o0,-1,%o0
	st %o0,[%l4+4]
	add %l4,4,%l4
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(avma)]
	ld [%l4],%o0
	st %o0,[%l4+4]
	mov 0,%o0
.LL419:
	cmp %l0,%l6
	bge .LL417
	add %o0,2,%l3
	mov 32,%o0
	sub %o0,%l7,%o4
.LL423:
	sll %l3,2,%o2
	sll %l0,2,%o0
	ld [%l5+%o0],%o3
	sll %o3,%o4,%o1
	st %o1,[%fp-20]
	srl %o3,%l7,%o0
	add %o0,%g2,%o0
	st %o0,[%l4+%o2]
	mov %o1,%g2
	add %l0,1,%l0
	cmp %l0,%l6
	bl .LL423
	add %l3,1,%l3
.LL417:
	ld [%l4+4],%o0
.LL439:
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	ld [%fp-36],%g4
	sll %g4,24,%o0
	add %o1,%o0,%o1
	st %o1,[%l4+4]
.LL405:
	cmp %i4,-1
.LL438:
	bne .LL424
	cmp %i4,0
	ld [%fp-28],%o0
	mov %i0,%o1
	call gerepile,0
	mov %l4,%o2
	b .LL426
	mov %o0,%i0
.LL424:
	be .LL425
	ld [%fp-28],%o0
	mov %i0,%o1
	call gerepile,0
	mov 0,%o2
	and %o0,-4,%o0
	add %l4,%o0,%o1
	st %o1,[%i4]
	ld [%fp-52],%g1
	b .LL426
	add %g1,%o0,%i0
.LL425:
	mov %i0,%o1
	call gerepile,0
	ld [%fp-52],%o2
	mov %o0,%i0
.LL426:
	ret
	restore
.LLfe13:
	.size	 dvmdii,.LLfe13-dvmdii
	.align 4
	.global mulul3
	.type	 mulul3,#function
	.proc	016
mulul3:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	 
        or      %i0,%i1,%o4      
        mov     %i0,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%g0,%o4
        tst     %i1
        bl,a    1f
        add     %o4,%i0,%o4
1:      mov     %o4,%g2
        b       3f 
        rd      %y,%i0
2:      clr     %g2
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%i1,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%i0
3:       

	st %g2,[%i2]
	ret
	restore
.LLfe14:
	.size	 mulul3,.LLfe14-mulul3
		.common	in_saved_avma,4,4
	.ident	"GCC: (GNU) 2.5.3"
