	.file	"mpi.c"
gcc2_compiled.:
.section	".text"
	.align 4
	.global mulsi
	.type	 mulsi,#function
	.proc	0104
mulsi:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	ld [%i1+4],%o1
	sra %o1,24,%l1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %i0,0
	be .LL3
	and %o1,%o0,%l0
	cmp %l1,0
	bne .LL2
	cmp %i0,0
.LL3:
	sethi %hi(gzero),%o0
	b .LL12
	ld [%o0+%lo(gzero)],%i0
.LL2:
	bge .LL4
	nop
	subcc %g0,%i0,%i0
	bpos .LL4
	sub %g0,%l1,%l1
	call stoi,0
	sethi %hi(-2147483648),%o0
	call mulii,0
	mov %i1,%o1
	b .LL12
	mov %o0,%i0
.LL4:
	call cgeti,0
	add %l0,1,%o0
	mov %o0,%g3
	mov 0,%o2
	sll %l0,2,%o0
	add %i1,%o0,%i1
	add %g3,%o0,%g2
	addcc %l0,-2,%o3
	be .LL7
	add %g2,4,%g2
.LL8:
	add %g2,-4,%g2
	mov %o2,%o1
	add %i1,-4,%i1
	mov %i0,%o0
	ld [%i1],%l2
	 
        or      %o0,%l2,%o4      
        mov     %o0,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%g0,%o4
        tst     %l2
        bl,a    1f
        add     %o4,%o0,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%o0
2:      clr     %o2
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%l2,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o0
3:       

	addcc %o1,%o0,%l2
	addx %o2,%g0,%o2
	addcc %o3,-1,%o3
	bne .LL8
	st %l2,[%g2]
.LL7:
	cmp %o2,0
	be .LL10
	sethi %hi(-65536),%o1
	st %o2,[%g2-4]
	ld [%g3+4],%o0
	and %o0,%o1,%o0
	add %o0,%l0,%o0
	b .LL13
	add %o0,1,%o0
.LL10:
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(avma)]
	ld [%g3],%o0
	add %o0,-1,%o0
	st %o0,[%g3+4]
	add %g3,4,%g3
	ld [%g3+4],%o0
	sethi %hi(-65536),%o1
	and %o0,%o1,%o0
	add %o0,%l0,%o0
.LL13:
	st %o0,[%g3+4]
	ld [%g3+4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l1,24,%o0
	add %o1,%o0,%o1
	st %o1,[%g3+4]
	mov %g3,%i0
.LL12:
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
	mov %i0,%o2
	ld [%o2+4],%o1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	and %o1,%o0,%i0
	cmp %i0,2
	be,a .LL15
	sethi %hi(-8388608),%i0
	call bfffo,0
	ld [%o2+8],%o0
	add %i0,-2,%i0
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
	.proc	0104
addsi:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	orcc %i0,0,%l1
	bne,a .LL18
	ldsb [%i1+4],%l3
	call icopy,0
	mov %i1,%o0
	b .LL67
	mov %o0,%i0
.LL18:
	cmp %l3,0
	bne .LL19
	cmp %l1,0
	call stoi,0
	mov %l1,%o0
	b .LL67
	mov %o0,%i0
.LL19:
	bge .LL20
	mov 1,%l4
	subcc %g0,%l1,%l1
	bpos .LL22
	mov -1,%l4
	sethi %hi(MOST_NEGS),%o0
	or %o0,%lo(MOST_NEGS),%o0
	call addii,0
	mov %i1,%o1
	b .LL67
	mov %o0,%i0
.LL20:
.LL22:
	ld [%i1+4],%o1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %l4,%l3
	bne .LL23
	and %o1,%o0,%l0
	mov %l1,%o1
	sll %l0,2,%l2
	add %l2,%i1,%o0
	ld [%o0-4],%o0
	add %o1,%o0,%o0
	cmp %o0,%o1
	bgeu .LL24
	mov %o0,%l1
	call cgeti,0
	add %l0,1,%o0
	mov %o0,%i0
	add %l0,-1,%o2
	cmp %o2,2
	ble .LL69
	st %l1,[%i0+%l2]
.LL30:
	sll %o2,2,%o1
	add %o1,%i1,%o0
	ld [%o0-4],%o0
	cmp %o0,-1
	bne .LL69
	cmp %o2,2
	add %o2,-1,%o2
	cmp %o2,2
	bg .LL30
	st %g0,[%i0+%o1]
	cmp %o2,2
.LL69:
	ble .LL31
	sll %o2,2,%o1
	add %o1,%i1,%o0
	ld [%o0-4],%o0
	add %o0,1,%o0
	b .LL68
	st %o0,[%i0+%o1]
.LL34:
	add %o0,%i1,%o1
	ld [%o1-4],%o1
	st %o1,[%i0+%o0]
.LL68:
	add %o2,-1,%o2
	cmp %o2,2
	bg .LL34
	sll %o2,2,%o0
	ld [%i0],%o0
	add %o0,-1,%o0
	st %o0,[%i0+4]
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	b .LL37
	st %o0,[%o1+%lo(avma)]
.LL31:
	mov 1,%o0
	st %o0,[%i0+8]
	ld [%i0],%o0
	b .LL37
	st %o0,[%i0+4]
.LL24:
	call cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	sll %l0,2,%o0
	add %o0,%i0,%o0
	st %l1,[%o0-4]
	mov 1,%o2
	add %l0,-1,%o0
	cmp %o2,%o0
	bge .LL37
	mov %o0,%o3
.LL41:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,1,%o2
	cmp %o2,%o3
	bl .LL41
	st %o0,[%i0+%o1]
.LL37:
	ld [%i0+4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l4,24,%o0
	add %o1,%o0,%o1
	b .LL67
	st %o1,[%i0+4]
.LL23:
	cmp %l0,3
	bne .LL44
	sll %l0,2,%l2
	ld [%i1+8],%o0
	cmp %o0,%l1
	bleu .LL45
	nop
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	sll %l3,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%i1+8],%o0
	sub %o0,%l1,%o0
	b .LL67
	st %o0,[%i0+8]
.LL45:
	bne .LL46
	sethi %hi(gzero),%o0
	b .LL67
	ld [%o0+%lo(gzero)],%i0
.LL46:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	sub %g0,%l3,%o0
	sll %o0,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%i1+8],%o0
	sub %l1,%o0,%o0
	b .LL67
	st %o0,[%i0+8]
.LL44:
	add %l2,%i1,%o0
	ld [%o0-4],%o1
	mov %l1,%o0
	cmp %o1,%o0
	bgeu .LL47
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
	bne,a .LL70
	sll %o2,2,%o1
	mov -1,%o3
	st %o3,[%i0+%o1]
.LL71:
	add %o2,-1,%o2
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	cmp %o0,0
	be,a .LL71
	st %o3,[%i0+%o1]
	sll %o2,2,%o1
.LL70:
	ld [%i1+%o1],%o0
	add %o0,-1,%o0
	cmp %o2,2
	bg .LL54
	st %o0,[%i0+%o1]
	cmp %o0,0
	be,a .LL53
	ld [%i0],%o0
.LL54:
	add %o2,-1,%o2
	cmp %o2,0
	ble .LL67
	nop
.LL58:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,-1,%o2
	cmp %o2,0
	bg .LL58
	st %o0,[%i0+%o1]
	b,a .LL67
.LL53:
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
	b .LL67
	st %o0,[%i0+4]
.LL47:
	call cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	sll %l0,2,%o0
	add %o0,%i0,%o0
	st %l1,[%o0-4]
	mov 1,%o2
	add %l0,-1,%o0
	cmp %o2,%o0
	bge .LL67
	mov %o0,%o3
.LL65:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,1,%o2
	cmp %o2,%o3
	bl .LL65
	st %o0,[%i0+%o1]
.LL67:
	ret
	restore
.LLfe3:
	.size	 addsi,.LLfe3-addsi
	.align 4
	.global addii
	.type	 addii,#function
	.proc	0104
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
	bge,a .LL236
	ldsb [%i1+4],%o5
	mov %i1,%l0
	mov %i0,%i1
	mov %l1,%l3
	mov %l2,%l1
	mov %l3,%l2
	ldsb [%i1+4],%o5
.LL236:
	cmp %o5,0
	bne,a .LL74
	ldsb [%l0+4],%l3
	call icopy,0
	mov %l0,%o0
	b .LL201
	mov %o0,%i0
.LL74:
	cmp %l3,%o5
	bne .LL75
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
	sethi %hi(.LL113),%o0
	or %o0,%lo(.LL113),%g2
	add %o5,-1,%o0
.LL237:
	cmp %o0,15
	bgu .LL81
	sll %o0,2,%o0
	ld [%g2+%o0],%o0
	jmp %o0
	nop
	.align 4
.LL113:
	.word	.LL111
	.word	.LL109
	.word	.LL107
	.word	.LL105
	.word	.LL103
	.word	.LL101
	.word	.LL99
	.word	.LL97
	.word	.LL95
	.word	.LL93
	.word	.LL91
	.word	.LL89
	.word	.LL87
	.word	.LL85
	.word	.LL83
	.word	.LL81
.LL81:
	subcc %g0,%o2,%g0
	b .LL82
	add %o4,-4,%o4
.LL83:
	subcc %g0,%o2,%g0
	b .LL204
	add %o4,-4,%o4
.LL85:
	subcc %g0,%o2,%g0
	b .LL205
	add %o4,-4,%o4
.LL87:
	subcc %g0,%o2,%g0
	b .LL206
	add %o4,-4,%o4
.LL89:
	subcc %g0,%o2,%g0
	b .LL207
	add %o4,-4,%o4
.LL91:
	subcc %g0,%o2,%g0
	b .LL208
	add %o4,-4,%o4
.LL93:
	subcc %g0,%o2,%g0
	b .LL209
	add %o4,-4,%o4
.LL95:
	subcc %g0,%o2,%g0
	b .LL210
	add %o4,-4,%o4
.LL97:
	subcc %g0,%o2,%g0
	b .LL211
	add %o4,-4,%o4
.LL99:
	subcc %g0,%o2,%g0
	b .LL212
	add %o4,-4,%o4
.LL101:
	subcc %g0,%o2,%g0
	b .LL213
	add %o4,-4,%o4
.LL103:
	subcc %g0,%o2,%g0
	b .LL214
	add %o4,-4,%o4
.LL105:
	subcc %g0,%o2,%g0
	b .LL215
	add %o4,-4,%o4
.LL107:
	subcc %g0,%o2,%g0
	b .LL216
	add %o4,-4,%o4
.LL109:
	subcc %g0,%o2,%g0
	b .LL217
	add %o4,-4,%o4
.LL111:
	subcc %g0,%o2,%g0
	b .LL218
	add %o4,-4,%o4
.LL82:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL204:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL205:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL206:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL207:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL208:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL209:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL210:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL211:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL212:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL213:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL214:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL215:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL216:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL217:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL218:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	addxcc %g3,%l4,%g3
	st %g3,[%o4]
	addx %g0,%g0,%o2
	add %o5,-16,%o5
	cmp %o5,0
	bg .LL237
	add %o5,-1,%o0
	cmp %o2,0
	be .LL115
	add %l0,8,%o2
.LL116:
	add %o3,-4,%o3
	cmp %o3,%o2
	blu .LL117
	mov %o3,%o1
	ld [%o3],%o0
	cmp %o0,-1
	bne .LL118
	add %o4,-4,%o4
	b .LL116
	st %g0,[%o4]
.LL118:
	ld [%o1],%o0
	b .LL203
	add %o0,1,%o0
.LL122:
	add %o4,-4,%o4
	ld [%o1],%o0
.LL203:
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o2
	bgeu .LL122
	mov %o3,%o1
	b .LL219
	ld [%i0],%o0
.LL117:
	mov 1,%o0
	st %o0,[%i0+8]
	ld [%l0+4],%o0
	add %o0,1,%o0
	b .LL201
	st %o0,[%i0+4]
.LL115:
	subcc %l1,%l2,%o2
	be,a .LL219
	ld [%i0],%o0
.LL128:
	add %o4,-4,%o4
	add %o3,-4,%o3
	ld [%o3],%o0
	addcc %o2,-1,%o2
	bne .LL128
	st %o0,[%o4]
	ld [%i0],%o0
.LL219:
	add %o0,-1,%o0
	st %o0,[%i0+4]
	ld [%l0+4],%o0
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	b .LL201
	st %o0,[%o1+%lo(avma)]
.LL75:
	bne .LL131
	add %l0,8,%o3
	addcc %l1,-2,%o2
	be .LL140
	add %i1,8,%o1
	ld [%o3],%o4
.LL238:
	add %o3,4,%o3
	ld [%o1],%o0
	cmp %o0,%o4
	bgu .LL202
	add %o1,4,%o1
	cmp %o4,%o0
	bgu .LL131
	addcc %o2,-1,%o2
	bne,a .LL238
	ld [%o3],%o4
.LL140:
	sethi %hi(gzero),%o0
	b .LL201
	ld [%o0+%lo(gzero)],%i0
.LL202:
	mov %l0,%i0
	mov %i1,%l0
	mov %i0,%i1
	mov %o5,%l3
.LL131:
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
	sethi %hi(.LL178),%o0
	or %o0,%lo(.LL178),%g2
	add %o5,-1,%o0
.LL239:
	cmp %o0,15
	bgu .LL146
	sll %o0,2,%o0
	ld [%g2+%o0],%o0
	jmp %o0
	nop
	.align 4
.LL178:
	.word	.LL176
	.word	.LL174
	.word	.LL172
	.word	.LL170
	.word	.LL168
	.word	.LL166
	.word	.LL164
	.word	.LL162
	.word	.LL160
	.word	.LL158
	.word	.LL156
	.word	.LL154
	.word	.LL152
	.word	.LL150
	.word	.LL148
	.word	.LL146
.LL146:
	subcc %g0,%o2,%g0
	b .LL147
	add %o4,-4,%o4
.LL148:
	subcc %g0,%o2,%g0
	b .LL220
	add %o4,-4,%o4
.LL150:
	subcc %g0,%o2,%g0
	b .LL221
	add %o4,-4,%o4
.LL152:
	subcc %g0,%o2,%g0
	b .LL222
	add %o4,-4,%o4
.LL154:
	subcc %g0,%o2,%g0
	b .LL223
	add %o4,-4,%o4
.LL156:
	subcc %g0,%o2,%g0
	b .LL224
	add %o4,-4,%o4
.LL158:
	subcc %g0,%o2,%g0
	b .LL225
	add %o4,-4,%o4
.LL160:
	subcc %g0,%o2,%g0
	b .LL226
	add %o4,-4,%o4
.LL162:
	subcc %g0,%o2,%g0
	b .LL227
	add %o4,-4,%o4
.LL164:
	subcc %g0,%o2,%g0
	b .LL228
	add %o4,-4,%o4
.LL166:
	subcc %g0,%o2,%g0
	b .LL229
	add %o4,-4,%o4
.LL168:
	subcc %g0,%o2,%g0
	b .LL230
	add %o4,-4,%o4
.LL170:
	subcc %g0,%o2,%g0
	b .LL231
	add %o4,-4,%o4
.LL172:
	subcc %g0,%o2,%g0
	b .LL232
	add %o4,-4,%o4
.LL174:
	subcc %g0,%o2,%g0
	b .LL233
	add %o4,-4,%o4
.LL176:
	subcc %g0,%o2,%g0
	b .LL234
	add %o4,-4,%o4
.LL147:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL220:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL221:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL222:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL223:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL224:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL225:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL226:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL227:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL228:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL229:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL230:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL231:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL232:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL233:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	add %o4,-4,%o4
.LL234:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%g3
	ld [%o1],%l4
	subxcc %g3,%l4,%g3
	st %g3,[%o4]
	addx %g0,%g0,%o2
	add %o5,-16,%o5
	cmp %o5,0
	bg .LL239
	add %o5,-1,%o0
	cmp %o2,0
	be,a .LL180
	subcc %l1,%l2,%o5
	add %o3,-4,%o3
	ld [%o3],%o0
	cmp %o0,0
	bne .LL240
	add %l0,8,%o1
	mov -1,%o1
	add %o4,-4,%o4
.LL241:
	st %o1,[%o4]
	add %o3,-4,%o3
	ld [%o3],%o0
	cmp %o0,0
	be,a .LL241
	add %o4,-4,%o4
	add %l0,8,%o1
.LL240:
	cmp %o3,%o1
	blu .LL190
	add %o0,-1,%o0
	add %o4,-4,%o4
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o1
	blu .LL190
	mov %o3,%o0
.LL188:
	add %o4,-4,%o4
	ld [%o0],%o0
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o1
	bgeu .LL188
	mov %o3,%o0
	b .LL235
	ld [%i0+8],%o0
.LL180:
	be,a .LL235
	ld [%i0+8],%o0
.LL193:
	add %o4,-4,%o4
	add %o3,-4,%o3
	ld [%o3],%o0
	addcc %o5,-1,%o5
	bne .LL193
	st %o0,[%o4]
.LL190:
	ld [%i0+8],%o0
.LL235:
	cmp %o0,0
	be,a .LL195
	ld [%i0+12],%o0
	ld [%l0+4],%o0
	b .LL201
	st %o0,[%i0+4]
.LL195:
	cmp %o0,0
	bne .LL198
	add %i0,12,%o4
	add %o4,4,%o4
.LL242:
	ld [%o4],%o0
	cmp %o0,0
	be,a .LL242
	add %o4,4,%o4
.LL198:
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
.LL201:
	ret
	restore
.LLfe4:
	.size	 addii,.LLfe4-addii
	.align 4
	.global mulss
	.type	 mulss,#function
	.proc	0104
mulss:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	orcc %i0,0,%o0
	be .LL245
	cmp %i1,0
	bne .LL244
	cmp %o0,0
.LL245:
	sethi %hi(gzero),%o0
	b .LL253
	ld [%o0+%lo(gzero)],%i0
.LL244:
	bge .LL246
	mov 1,%l0
	subcc %g0,%o0,%o0
	bpos .LL246
	mov -1,%l0
	call stoi,0
	nop
	mov %o0,%o1
	b .LL254
	mov %i1,%o0
.LL246:
	cmp %i1,0
	bge .LL255
	mov %o0,%l1
	subcc %g0,%i1,%i1
	bpos .LL255
	sub %g0,%l0,%l0
	cmp %l0,0
	bg .LL250
	mov %o0,%o1
	sub %g0,%o0,%o1
.LL250:
	mov %o1,%o0
	sethi %hi(ABS_MOST_NEGS),%o1
	or %o1,%lo(ABS_MOST_NEGS),%o1
.LL254:
	call mulsi,0
	nop
	b .LL253
	mov %o0,%i0
.LL255:
	 
        or      %l1,%i1,%o4      
        mov     %l1,%y
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
        add     %o4,%l1,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%l1
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
        or      %o5,%o4,%l1
3:       

	orcc %o2,0,%i1
	be .LL251
	nop
	call cgeti,0
	mov 4,%o0
	mov %o0,%i0
	st %i1,[%i0+8]
	b .LL252
	st %l1,[%i0+12]
.LL251:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	st %l1,[%i0+8]
.LL252:
	ld [%i0],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l0,24,%o0
	add %o1,%o0,%o1
	st %o1,[%i0+4]
.LL253:
	ret
	restore
.LLfe5:
	.size	 mulss,.LLfe5-mulss
	.align 4
	.global mulii
	.type	 mulii,#function
	.proc	0104
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
	be .LL276
	and %o2,%o1,%l2
	ldsb [%i1+4],%o0
	cmp %o0,0
	bne .LL258
	nop
.LL276:
	sethi %hi(gzero),%o0
	b .LL275
	ld [%o0+%lo(gzero)],%i0
.LL258:
	bl,a .LL259
	sub %g0,%l3,%l3
.LL259:
	cmp %l0,%l2
	ble .LL260
	mov %l4,%i0
	mov %i1,%l4
	mov %i0,%i1
	mov %l0,%l1
	mov %l2,%l0
	mov %l1,%l2
.LL260:
	add %l0,%l2,%l1
	add %l1,-2,%l1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %l1,%o0
	ble .LL261
	nop
	call err,0
	mov 17,%o0
.LL261:
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
	be .LL263
	add %i0,%o0,%g1
.LL264:
	add %g1,-4,%g1
	mov %o2,%o1
	add %g3,-4,%g3
	mov %g2,%o0
	ld [%g3],%l5
	 
        or      %o0,%l5,%o4      
        mov     %o0,%y
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
        add     %o4,%o0,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%o0
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
        or      %o5,%o4,%o0
3:       

	addcc %o1,%o0,%l5
	addx %o2,%g0,%o2
	addcc %o3,-1,%o3
	bne .LL264
	st %l5,[%g1]
.LL263:
	st %o2,[%g1-4]
	sll %l1,2,%o0
	add %i0,%o0,%g1
	sll %l2,2,%o0
	add %i1,%o0,%i1
	add %l0,-3,%l0
	cmp %l0,0
	ble .LL267
	add %l2,-1,%l2
.LL268:
	add %g4,-4,%g4
	ld [%g4],%o7
	mov %i1,%g3
	add %g1,-4,%o1
	mov %o1,%g1
	addcc %l2,-1,%o3
	be .LL270
	mov 0,%g2
.LL271:
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
	addcc %o0,%g2,%l5
	addx %o2,%g0,%o2
	st %l5,[%o1]
	addcc %o3,-1,%o3
	bne .LL271
	mov %o2,%g2
.LL270:
	add %l0,-1,%l0
	cmp %l0,0
	bg .LL268
	st %o2,[%o1-4]
.LL267:
	ld [%i0+8],%o0
	cmp %o0,0
	bne .LL275
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
.LL275:
	ret
	restore
.LLfe6:
	.size	 mulii,.LLfe6-mulii
	.global .div
.section	".rodata"
	.align 8
.LLC0:
	.uaword	0x3fd34413 ! ~3.01030000000000019789e-1
	.uaword	0x55475a32
	.align 8
.LLC1:
	.uaword	0x3ff00000 ! ~1.00000000000000000000e0
	.uaword	0x0
.section	".text"
	.align 4
	.global confrac
	.type	 confrac,#function
	.proc	0104
confrac:
	!#PROLOGUE# 0
	save %sp,-120,%sp
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
	bge .LL279
	mov %o0,%l1
.LL281:
	sll %g2,2,%o0
	add %g2,1,%g2
	cmp %g2,%o1
	bl .LL281
	st %g0,[%l1+%o0]
.LL279:
	andcc %l0,31,%l0
	bne .LL283
	mov 2,%g3
	cmp %g3,%l2
	bge .LL305
	sll %l3,2,%o0
.LL287:
	sll %g2,2,%o0
	sll %g3,2,%o1
	ld [%i0+%o1],%o1
	st %o1,[%l1+%o0]
	add %g3,1,%g3
	cmp %g3,%l2
	bl .LL287
	add %g2,1,%g2
	b .LL305
	sll %l3,2,%o0
.LL283:
	cmp %g3,%l2
	bge .LL291
	mov 0,%o3
	mov 32,%o0
	sub %o0,%l0,%o4
.LL293:
	sll %g2,2,%o1
	sll %g3,2,%o0
	ld [%i0+%o0],%o2
	add %g2,1,%g2
	srl %o2,%l0,%o0
	add %o0,%o3,%o0
	st %o0,[%l1+%o1]
	add %g3,1,%g3
	cmp %g3,%l2
	bl .LL293
	sll %o2,%o4,%o3
.LL291:
	sll %l3,2,%o0
	add %o0,%l1,%o0
	st %o3,[%o0-8]
	sll %l3,2,%o0
.LL305:
	add %o0,%l1,%o0
	st %g0,[%o0-4]
	st %l4,[%fp-20]
	ld [%fp-20],%f6
	fitod %f6,%f2
	sethi %hi(.LLC0),%l6
	ldd [%l6+%lo(.LLC0)],%f4
	fmuld %f2,%f4,%f2
	sethi %hi(.LLC1),%l6
	ldd [%l6+%lo(.LLC1)],%f4
	faddd %f2,%f4,%f2
	fdtoi %f2,%f2
	st %f2,[%fp-20]
	ld [%fp-20],%l0
	add %l0,17,%l2
	mov %l2,%o0
	call .div,0
	mov 9,%o1
	call cgeti,0
	mov %o0,%l2
	mov %o0,%i0
	mov 1,%g3
	cmp %g3,%l2
	bge .LL296
	st %l0,[%i0]
.LL298:
	addcc %l3,-1,%g2
	bneg .LL300
	mov 0,%o3
	sethi %hi(1000000000),%o0
	or %o0,%lo(1000000000),%o7
.LL302:
	sll %g2,2,%o1
	mov %o3,%o2
	ld [%l1+%o1],%o0
	 
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
1:      mov     %o4,%o3
        b       3f 
        rd      %y,%o0
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
        or      %o5,%o4,%o0
3:       

	addcc %o2,%o0,%l6
	addx %o3,%g0,%o3
	addcc %g2,-1,%g2
	bpos .LL302
	st %l6,[%l1+%o1]
.LL300:
	sll %g3,2,%o0
	add %g3,1,%g3
	cmp %g3,%l2
	bl .LL298
	st %o3,[%i0+%o0]
.LL296:
	sethi %hi(avma),%o0
	st %l5,[%o0+%lo(avma)]
	ret
	restore
.LLfe7:
	.size	 confrac,.LLfe7-confrac
	.align 4
	.global divss
	.type	 divss,#function
	.proc	0104
divss:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne .LL315
	sethi %hi(-2147483648),%o0
	call err,0
	mov 23,%o0
	sethi %hi(-2147483648),%o0
.LL315:
	cmp %i0,%o0
	bne .LL308
	sethi %hi(hiremainder),%o0
	call stoi,0
	mov %i0,%o0
	call divis,0
	mov %i1,%o1
	b,a .LL314
.LL308:
	st %g0,[%o0+%lo(hiremainder)]
	cmp %i0,0
	bge .LL309
	mov %i0,%o0
	sub %g0,%i0,%o0
.LL309:
	cmp %i1,0
	bge .LL310
	mov %i1,%o1
	sub %g0,%i1,%o1
.LL310:
	sethi %hi(hiremainder),%l0
	call divul3,0
	or %l0,%lo(hiremainder),%o2
	cmp %i1,0
	bge .LL311
	mov %o0,%o1
	ld [%l0+%lo(hiremainder)],%o0
	sub %g0,%o0,%o0
	st %o0,[%l0+%lo(hiremainder)]
	sub %g0,%o1,%o1
.LL311:
	cmp %i0,0
	bl,a .LL312
	sub %g0,%o1,%o1
.LL312:
	call stoi,0
	mov %o1,%o0
.LL314:
	ret
	restore %g0,%o0,%o0
.LLfe8:
	.size	 divss,.LLfe8-divss
	.align 4
	.global modss
	.type	 modss,#function
	.proc	0104
modss:
	!#PROLOGUE# 0
	save %sp,-120,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne .LL326
	sethi %hi(-2147483648),%o0
	call err,0
	mov 38,%o0
	sethi %hi(-2147483648),%o0
.LL326:
	cmp %i0,%o0
	bne .LL318
	mov %i0,%o0
	call stoi,0
	mov %i0,%o0
	call modis,0
	mov %i1,%o1
	b .LL323
	mov %o0,%i0
.LL318:
	cmp %o0,0
	bge .LL319
	st %g0,[%fp-20]
	sub %g0,%o0,%o0
.LL319:
	cmp %i1,0
	bl,a .LL320
	sub %g0,%i1,%i1
.LL320:
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	ld [%fp-20],%o0
	cmp %o0,0
	bne .LL321
	nop
	sethi %hi(gzero),%o0
	b .LL323
	ld [%o0+%lo(gzero)],%i0
.LL321:
	bge .LL325
	nop
	ld [%fp-20],%o0
	sub %i1,%o0,%o0
.LL325:
	call stoi,0
	nop
	mov %o0,%i0
.LL323:
	ret
	restore
.LLfe9:
	.size	 modss,.LLfe9-modss
	.align 4
	.global resss
	.type	 resss,#function
	.proc	0104
resss:
	!#PROLOGUE# 0
	save %sp,-120,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne .LL334
	mov %i0,%o0
	call err,0
	mov 40,%o0
	mov %i0,%o0
.LL334:
	cmp %o0,0
	bge .LL329
	st %g0,[%fp-20]
	sub %g0,%o0,%o0
.LL329:
	cmp %i1,0
	bge .LL330
	mov %i1,%o1
	sub %g0,%i1,%o1
.LL330:
	call divul3,0
	add %fp,-20,%o2
	cmp %i1,0
	bge .LL333
	ld [%fp-20],%o0
	sub %g0,%o0,%o0
.LL333:
	call stoi,0
	nop
	ret
	restore %g0,%o0,%o0
.LLfe10:
	.size	 resss,.LLfe10-resss
	.align 4
	.global divsi
	.type	 divsi,#function
	.proc	0104
divsi:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	ld [%i1+4],%o0
	sra %o0,24,%o2
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	cmp %o2,0
	bne .LL336
	and %o0,%o1,%l0
	call err,0
	mov 24,%o0
.LL336:
	cmp %i0,0
	be .LL338
	cmp %l0,3
	bg .LL345
	sethi %hi(hiremainder),%o0
	ld [%i1+8],%o0
	cmp %o0,0
	bge .LL337
	sethi %hi(-2147483648),%o0
.LL338:
	sethi %hi(hiremainder),%o0
.LL345:
	st %i0,[%o0+%lo(hiremainder)]
	sethi %hi(gzero),%o0
	b .LL343
	ld [%o0+%lo(gzero)],%i0
.LL337:
	cmp %i0,%o0
	bne .LL339
	sethi %hi(hiremainder),%o0
	call stoi,0
	mov %i0,%o0
	mov %i1,%o1
	call dvmdii,0
	mov 0,%o2
	b .LL343
	mov %o0,%i0
.LL339:
	st %g0,[%o0+%lo(hiremainder)]
	cmp %i0,0
	bge .LL340
	mov %i0,%o0
	sub %g0,%i0,%o0
.LL340:
	ld [%i1+8],%o1
	sethi %hi(hiremainder),%l0
	call divul3,0
	or %l0,%lo(hiremainder),%o2
	mov %o0,%o1
	ldsb [%i1+4],%o0
	cmp %o0,0
	bge .LL346
	cmp %i0,0
	ld [%l0+%lo(hiremainder)],%o0
	sub %g0,%o0,%o0
	st %o0,[%l0+%lo(hiremainder)]
	sub %g0,%o1,%o1
.LL346:
	bl,a .LL342
	sub %g0,%o1,%o1
.LL342:
	call stoi,0
	mov %o1,%o0
	mov %o0,%i0
.LL343:
	ret
	restore
.LLfe11:
	.size	 divsi,.LLfe11-divsi
	.align 4
	.global divis
	.type	 divis,#function
	.proc	0104
divis:
	!#PROLOGUE# 0
	save %sp,-120,%sp
	!#PROLOGUE# 1
	mov %i0,%l3
	ld [%l3+4],%o1
	sra %o1,24,%l4
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %i1,0
	bne .LL348
	and %o1,%o0,%l2
	call err,0
	mov 26,%o0
.LL348:
	cmp %l4,0
	bne .LL349
	cmp %i1,0
	sethi %hi(hiremainder),%o0
	b .LL364
	st %g0,[%o0+%lo(hiremainder)]
.LL349:
	bge,a .LL365
	ld [%l3+8],%o0
	subcc %g0,%i1,%i1
	bpos .LL350
	sub %g0,%l4,%l4
	call stoi,0
	mov %i1,%o0
	mov %o0,%o1
	mov %l3,%o0
	call dvmdii,0
	mov 0,%o2
	b .LL363
	mov %o0,%i0
.LL350:
	ld [%l3+8],%o0
.LL365:
	cmp %i1,%o0
	bleu .LL352
	cmp %l2,3
	bne .LL353
	sethi %hi(hiremainder),%l0
	call itos,0
	mov %l3,%o0
	st %o0,[%l0+%lo(hiremainder)]
.LL364:
	sethi %hi(gzero),%o0
	b .LL363
	ld [%o0+%lo(gzero)],%i0
.LL353:
	call cgeti,0
	add %l2,-1,%o0
	mov %o0,%i0
	mov 1,%l1
	ld [%l3+8],%o0
	b .LL355
	st %o0,[%fp-20]
.LL352:
	call cgeti,0
	mov %l2,%o0
	mov %o0,%i0
	mov 0,%l1
	st %l1,[%fp-20]
.LL355:
	add %l1,2,%l0
	cmp %l0,%l2
	bge,a .LL366
	ld [%i0],%o0
.LL359:
	sll %l0,2,%o0
	ld [%l3+%o0],%o0
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	sub %l0,%l1,%o1
	sll %o1,2,%o1
	add %l0,1,%l0
	cmp %l0,%l2
	bl .LL359
	st %o0,[%i0+%o1]
	ld [%i0],%o0
.LL366:
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l4,24,%o0
	add %o1,%o0,%o1
	st %o1,[%i0+4]
	sethi %hi(hiremainder),%o1
	cmp %l4,0
	bge .LL361
	or %o1,%lo(hiremainder),%o2
	ld [%fp-20],%o0
	sub %g0,%o0,%o0
	b .LL363
	st %o0,[%o1+%lo(hiremainder)]
.LL361:
	ld [%fp-20],%o0
	st %o0,[%o2]
.LL363:
	ret
	restore
.LLfe12:
	.size	 divis,.LLfe12-divis
	.align 4
	.global dvmdii
	.type	 dvmdii,#function
	.proc	0104
dvmdii:
	!#PROLOGUE# 0
	save %sp,-136,%sp
	!#PROLOGUE# 1
	mov %i0,%l2
	mov %i2,%i5
	ldsb [%l2+4],%g1
	st %g1,[%fp-28]
	ldsb [%i1+4],%g4
	cmp %g4,0
	bne .LL368
	st %g4,[%fp-32]
	call err,0
	mov 36,%o0
.LL368:
	ld [%fp-28],%g1
	cmp %g1,0
	bne,a .LL369
	ld [%l2+4],%o0
	cmp %i5,-1
	be .LL470
	cmp %i5,0
	be .LL470
	sethi %hi(gzero),%o1
	ld [%o1+%lo(gzero)],%o0
	st %o0,[%i5]
	b .LL469
	ld [%o1+%lo(gzero)],%i0
.LL369:
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	and %o0,%o1,%l5
	ld [%i1+4],%o0
	and %o0,%o1,%i3
	subcc %l5,%i3,%i4
	bpos .LL372
	sethi %hi(avma),%o0
	cmp %i5,-1
	bne .LL373
	cmp %i5,0
	call icopy,0
	mov %l2,%o0
	b .LL469
	mov %o0,%i0
.LL373:
	be .LL478
	sethi %hi(gzero),%o0
	call icopy,0
	mov %l2,%o0
	b .LL470
	st %o0,[%i5]
.LL372:
	ld [%o0+%lo(avma)],%o0
	st %o0,[%fp-24]
	ld [%fp-28],%g4
	cmp %g4,0
	bge .LL479
	cmp %i3,3
	ld [%fp-32],%g1
	sub %g0,%g1,%g1
	st %g1,[%fp-32]
.LL479:
	bne .LL376
	nop
	ld [%i1+8],%i1
	ld [%l2+8],%o0
	cmp %i1,%o0
	bleu .LL377
	add %l2,8,%l1
	add %l5,-1,%l0
	st %o0,[%fp-20]
	b .LL378
	add %l2,12,%l1
.LL377:
	mov %l5,%l0
	st %g0,[%fp-20]
.LL378:
	call cgeti,0
	mov %l0,%o0
	mov %o0,%l4
	addcc %l0,-2,%l3
	be .LL380
	add %l4,8,%l2
.LL381:
	ld [%l1],%o0
	add %l1,4,%l1
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	st %o0,[%l2]
	addcc %l3,-1,%l3
	bne .LL381
	add %l2,4,%l2
.LL380:
	cmp %i5,-1
	bne .LL383
	cmp %l0,2
	sethi %hi(avma),%o0
	ld [%fp-24],%g4
	st %g4,[%o0+%lo(avma)]
	ld [%fp-20],%o0
	cmp %o0,0
	bne .LL384
	nop
.LL470:
	sethi %hi(gzero),%o0
.LL478:
	b .LL469
	ld [%o0+%lo(gzero)],%i0
.LL384:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	ld [%fp-28],%g1
	sll %g1,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%fp-20],%o0
	b .LL469
	st %o0,[%i0+8]
.LL383:
	be .LL385
	sethi %hi(-16777216),%o1
	ld [%l4],%o0
	andn %o0,%o1,%o1
	ld [%fp-32],%g4
	sll %g4,24,%o0
	add %o1,%o0,%o1
	b .LL386
	st %o1,[%l4+4]
.LL385:
	sethi %hi(avma),%o0
	ld [%fp-24],%g1
	st %g1,[%o0+%lo(avma)]
	sethi %hi(gzero),%o0
	ld [%o0+%lo(gzero)],%l4
.LL386:
	cmp %i5,0
	bne .LL387
	ld [%fp-20],%o0
.LL472:
	b .LL469
	mov %l4,%i0
.LL387:
	cmp %o0,0
	bne .LL388
	sethi %hi(gzero),%o0
	ld [%o0+%lo(gzero)],%o0
	b .LL472
	st %o0,[%i5]
.LL388:
	call cgeti,0
	mov 3,%o0
	mov %o0,%i0
	ld [%fp-28],%g4
	sll %g4,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%fp-20],%o0
	st %o0,[%i0+8]
	b .LL472
	st %i0,[%i5]
.LL376:
	call cgeti,0
	mov %l5,%o0
	mov %o0,%l4
	call bfffo,0
	ld [%i1+8],%o0
	orcc %o0,0,%l7
	be .LL391
	add %l2,8,%l1
	call cgeti,0
	mov %i3,%o0
	mov %o0,%i0
	ld [%i1+8],%o2
	add %i1,12,%o1
	mov 32,%o0
	sub %o0,%l7,%o0
	srl %o2,%o0,%o0
	st %o0,[%fp-20]
	sll %o2,%l7,%g2
	addcc %i3,-3,%l3
	be .LL393
	add %i0,8,%o3
	mov 32,%o0
	sub %o0,%l7,%o4
.LL394:
	ld [%o1],%o2
	add %o1,4,%o1
	srl %o2,%o4,%o0
	st %o0,[%fp-20]
	add %g2,%o0,%o0
	st %o0,[%o3]
	add %o3,4,%o3
	addcc %l3,-1,%l3
	bne .LL394
	sll %o2,%l7,%g2
.LL393:
	st %g2,[%o3]
	mov 0,%g2
	add %l2,8,%l1
	addcc %l5,-2,%l3
	be .LL397
	add %l4,4,%l2
	mov 32,%o0
	sub %o0,%l7,%o1
.LL398:
	ld [%l1],%o2
	add %l1,4,%l1
	srl %o2,%o1,%o0
	st %o0,[%fp-20]
	add %g2,%o0,%o0
	st %o0,[%l2]
	add %l2,4,%l2
	addcc %l3,-1,%l3
	bne .LL398
	sll %o2,%l7,%g2
.LL397:
	b .LL400
	st %g2,[%l2]
.LL391:
	st %g0,[%l4+4]
	addcc %l5,-2,%l0
	be .LL402
	add %l4,8,%l2
.LL403:
	ld [%l1],%o0
	st %o0,[%l2]
	add %l1,4,%l1
	addcc %l0,-1,%l0
	bne .LL403
	add %l2,4,%l2
.LL402:
	mov %i1,%i0
.LL400:
	ld [%i0+8],%i1
	ld [%i0+12],%i2
	addcc %i4,1,%l3
	be .LL406
	add %l4,4,%l2
	sll %i3,2,%l1
.LL407:
	ld [%l2],%o0
	cmp %o0,%i1
	bne .LL408
	add %l2,4,%l2
	mov -1,%o7
	mov %i1,%o2
	ld [%l2],%o0
	add %o2,%o0,%o1
	cmp %o1,%o2
	addx %g0,0,%o3
	b .LL409
	mov %o1,%g2
.LL408:
	ld [%l2-4],%o0
	st %o0,[%fp-20]
	ld [%l2],%o0
	mov %i1,%o1
	call divul3,0
	add %fp,-20,%o2
	mov %o0,%o7
	mov 0,%o3
	ld [%fp-20],%g2
.LL409:
	cmp %o3,0
	bne,a .LL480
	st %g0,[%fp-20]
	mov %o7,%o2
	 
        or      %o2,%i2,%o4      
        mov     %o2,%y
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
        add     %o4,%o2,%o4
1:      mov     %o4,%g1
        b       3f 
        rd      %y,%o2
2:      clr     %g1
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
        or      %o5,%o4,%o2
3:       

	st %g1,[%fp-20]
	ld [%l2+4],%o0
	cmp %o2,%o0
	addx %g0,0,%o3
	sub %o2,%o0,%o4
	mov %g1,%o2
	mov %g2,%o0
	sub %o2,%g2,%o1
	cmp %g2,%o2
	bgu .LL475
	sub %o1,%o3,%o1
	b .LL476
	cmp %o0,%o2
.LL423:
	be .LL410
	mov %o4,%o2
	add %o7,-1,%o7
	mov %i2,%o0
	cmp %o2,%o0
	addx %g0,0,%o3
	sub %o2,%o0,%o4
	mov %o1,%o2
	mov %i1,%o0
	sub %o2,%o0,%o1
	cmp %o0,%o2
	bleu .LL476
	sub %o1,%o3,%o1
.LL475:
	b .LL420
	mov 1,%o3
.LL476:
	blu,a .LL420
	mov 0,%o3
.LL420:
	cmp %o3,0
	be .LL423
	cmp %o1,0
.LL410:
	st %g0,[%fp-20]
.LL480:
	add %l2,%l1,%g2
	add %g2,-8,%g2
	addcc %i3,-2,%l0
	be .LL425
	add %i0,%l1,%g3
.LL426:
	ld [%fp-20],%o2
	add %g3,-4,%g3
	mov %o7,%o1
	ld [%g3],%g1
	 
        or      %o1,%g1,%o4      
        mov     %o1,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g0,%o4
        tst     %g1
        bl,a    1f
        add     %o4,%o1,%o4
1:      mov     %o4,%g4
        b       3f 
        rd      %y,%o1
2:      clr     %g4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g1,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o1
3:       

	st %g4,[%fp-20]
	addcc %o2,%o1,%o3
	addx %g4,%g0,%g4
	st %g4,[%fp-20]
	add %g2,-4,%g2
	ld [%g2],%o2
	sub %o2,%o3,%o1
	cmp %o2,%o3
	st %o1,[%g2]
	ld [%fp-20],%o0
	addx %g0,%o0,%o0
	addcc %l0,-1,%l0
	bne .LL426
	st %o0,[%fp-20]
.LL425:
	ld [%l2-4],%o1
	ld [%fp-20],%o0
	cmp %o1,%o0
	bgeu,a .LL481
	addcc %l3,-1,%l3
	mov 0,%o3
	add %o7,-1,%o7
	add %l2,%l1,%g2
	add %g2,-8,%g2
	addcc %i3,-2,%l0
	be .LL428
	add %i0,%l1,%g3
	add %g2,-4,%g2
.LL482:
	subcc %g0,%o3,%g0
	add %g3,-4,%g3
	ld [%g2],%g1
	ld [%g3],%g4
	addxcc %g1,%g4,%g1
	st %g1,[%g2]
	addx %g0,%g0,%o3
	addcc %l0,-1,%l0
	bne,a .LL482
	add %g2,-4,%g2
.LL428:
	addcc %l3,-1,%l3
.LL481:
	bne .LL407
	st %o7,[%l2-4]
.LL406:
	sethi %hi(avma),%o0
	cmp %i5,-1
	be .LL434
	ld [%o0+%lo(avma)],%i0
	add %i4,2,%l1
	sll %l1,2,%o0
	add %l4,%o0,%l2
	ld [%l4+4],%o0
	cmp %o0,0
	be .LL435
	cmp %i4,0
	b .LL436
	add %i4,3,%l1
.LL435:
	be,a .LL436
	st %g0,[%fp-32]
.LL436:
	call cgeti,0
	mov %l1,%o0
	st %o0,[%fp-36]
	sll %l1,2,%o0
	ld [%fp-36],%g1
	addcc %l1,-2,%l0
	be .LL439
	add %g1,%o0,%o1
.LL440:
	add %o1,-4,%o1
	add %l2,-4,%l2
	ld [%l2],%o0
	addcc %l0,-1,%l0
	bne .LL440
	st %o0,[%o1]
.LL439:
	cmp %l1,2
	bgu .LL442
	mov 2,%o0
	ld [%fp-36],%g4
	b .LL434
	st %o0,[%g4+4]
.LL442:
	ld [%fp-36],%g1
	ld [%g1],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	ld [%fp-32],%g4
	sll %g4,24,%o0
	add %o1,%o0,%o1
	st %o1,[%g1+4]
.LL434:
	cmp %i5,0
	be .LL483
	cmp %i5,-1
	add %i4,2,%l0
	cmp %l0,%l5
	bge .LL484
	sll %l0,2,%o0
	ld [%l4+%o0],%o0
	cmp %o0,0
	bne .LL484
	cmp %l0,%l5
	add %i4,3,%l0
.LL447:
	cmp %l0,%l5
	bge .LL484
	sll %l0,2,%o0
	ld [%l4+%o0],%o0
	cmp %o0,0
	be,a .LL447
	add %l0,1,%l0
	cmp %l0,%l5
.LL484:
	bne .LL451
	sub %l5,%l0,%o0
	sethi %hi(gzero),%o0
	call icopy,0
	ld [%o0+%lo(gzero)],%o0
	b .LL444
	mov %o0,%l6
.LL451:
	call cgeti,0
	add %o0,2,%o0
	mov %o0,%l6
	ld [%l6],%o0
	cmp %l7,0
	bne .LL453
	st %o0,[%l6+4]
	cmp %l0,%l5
	bge .LL459
	mov 2,%l3
.LL457:
	sll %l3,2,%o0
	sll %l0,2,%o1
	ld [%l4+%o1],%o1
	st %o1,[%l6+%o0]
	add %l0,1,%l0
	cmp %l0,%l5
	bl .LL457
	add %l3,1,%l3
	b .LL477
	ld [%l6+4],%o0
.LL453:
	st %g0,[%fp-20]
	sll %l0,2,%o0
	ld [%l4+%o0],%o2
	add %l0,1,%l0
	mov 32,%o0
	sub %o0,%l7,%o0
	sll %o2,%o0,%o0
	st %o0,[%fp-20]
	srl %o2,%l7,%o3
	cmp %o3,0
	be .LL460
	mov %o0,%g2
	st %o3,[%l6+8]
	b .LL461
	mov 1,%o0
.LL460:
	ld [%l6],%o0
	add %o0,-1,%o0
	st %o0,[%l6+4]
	add %l6,4,%l6
	sethi %hi(avma),%o1
	ld [%o1+%lo(avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(avma)]
	ld [%l6],%o0
	st %o0,[%l6+4]
	mov 0,%o0
.LL461:
	cmp %l0,%l5
	bge .LL459
	add %o0,2,%l3
	mov 32,%o0
	sub %o0,%l7,%o3
.LL465:
	sll %l3,2,%o1
	sll %l0,2,%o0
	ld [%l4+%o0],%o2
	sll %o2,%o3,%o0
	st %o0,[%fp-20]
	srl %o2,%l7,%o0
	add %o0,%g2,%o0
	st %o0,[%l6+%o1]
	ld [%fp-20],%g2
	add %l0,1,%l0
	cmp %l0,%l5
	bl .LL465
	add %l3,1,%l3
.LL459:
	ld [%l6+4],%o0
.LL477:
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	ld [%fp-28],%g1
	sll %g1,24,%o0
	add %o1,%o0,%o1
	st %o1,[%l6+4]
.LL444:
	cmp %i5,-1
.LL483:
	bne .LL467
	cmp %i5,0
	ld [%fp-24],%o0
	mov %i0,%o1
	b .LL474
	mov %l6,%o2
.LL467:
	be .LL468
	ld [%fp-24],%o0
	mov %i0,%o1
	call gerepile,0
	mov 0,%o2
	and %o0,-4,%o0
	add %l6,%o0,%o1
	st %o1,[%i5]
	ld [%fp-36],%g4
	b .LL469
	add %g4,%o0,%i0
.LL468:
	mov %i0,%o1
	ld [%fp-36],%o2
.LL474:
	call gerepile,0
	nop
	mov %o0,%i0
.LL469:
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
	.ident	"GCC: (GNU) 2.8.1"
