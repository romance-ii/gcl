gcc2_compiled.:
___gnu_compiled_c:
.text
	.align 4
	.global _mulsi
	.proc	0104
_mulsi:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	ld [%i1+4],%o1
	sra %o1,24,%l1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %i0,0
	be L3
	and %o1,%o0,%l0
	cmp %l1,0
	bne L2
	cmp %i0,0
L3:
	sethi %hi(_gzero),%o0
	b L12
	ld [%o0+%lo(_gzero)],%i0
L2:
	bge L4
	nop
	subcc %g0,%i0,%i0
	bpos L4
	sub %g0,%l1,%l1
	call _stoi,0
	sethi %hi(-2147483648),%o0
	call _mulii,0
	mov %i1,%o1
	b L12
	mov %o0,%i0
L4:
	call _cgeti,0
	add %l0,1,%o0
	mov %o0,%g3
	mov 0,%o2
	sll %l0,2,%o0
	add %i1,%o0,%i1
	add %g3,%o0,%g2
	addcc %l0,-2,%o3
	be L7
	add %g2,4,%g2
L8:
	add %g2,-4,%g2
	mov %o2,%o0
	add %i1,-4,%i1
	ld [%i1],%o1
	mov %i0,%l2
	 
        or      %l2,%o1,%o4      
        mov     %l2,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%g0,%o4
        tst     %o1
        bl,a    1f
        add     %o4,%l2,%o4
1:      mov     %o4,%o2
        b       3f 
        rd      %y,%l2
2:      clr     %o2
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%l2
3:       

	mov %l2,%o1
	addcc %o0,%o1,%l2
	addx %o2,%g0,%o2
	addcc %o3,-1,%o3
	bne L8
	st %l2,[%g2]
L7:
	cmp %o2,0
	be L10
	sethi %hi(-65536),%o1
	st %o2,[%g2-4]
	ld [%g3+4],%o0
	and %o0,%o1,%o0
	add %o0,%l0,%o0
	b L13
	add %o0,1,%o0
L10:
	sethi %hi(_avma),%o1
	ld [%o1+%lo(_avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(_avma)]
	ld [%g3],%o0
	add %o0,-1,%o0
	st %o0,[%g3+4]
	add %g3,4,%g3
	ld [%g3+4],%o0
	sethi %hi(-65536),%o1
	and %o0,%o1,%o0
	add %o0,%l0,%o0
L13:
	st %o0,[%g3+4]
	ld [%g3+4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l1,24,%o0
	add %o1,%o0,%o1
	st %o1,[%g3+4]
	mov %g3,%i0
L12:
	ret
	restore
	.align 4
	.global _expi
	.proc	04
_expi:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	mov %i0,%o2
	ld [%o2+4],%o1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	and %o1,%o0,%i0
	cmp %i0,2
	be,a L16
	sethi %hi(-8388608),%i0
	call _bfffo,0
	ld [%o2+8],%o0
	add %i0,-2,%i0
	sll %i0,5,%i0
	sub %i0,%o0,%i0
	add %i0,-1,%i0
L16:
	ret
	restore
	.align 4
	.global _addsi
	.proc	0104
_addsi:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	orcc %i0,%g0,%l1
	bne,a L18
	ldsb [%i1+4],%l3
	call _icopy,0
	mov %i1,%o0
	b L67
	mov %o0,%i0
L18:
	cmp %l3,0
	bne L19
	cmp %l1,0
	call _stoi,0
	mov %l1,%o0
	b L67
	mov %o0,%i0
L19:
	bge,a L22
	mov 1,%l4
	subcc %g0,%l1,%l1
	bpos L22
	mov -1,%l4
	sethi %hi(_MOST_NEGS),%o0
	or %o0,%lo(_MOST_NEGS),%o0
	call _addii,0
	mov %i1,%o1
	b L67
	mov %o0,%i0
L22:
	ld [%i1+4],%o1
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %l4,%l3
	bne L23
	and %o1,%o0,%l0
	mov %l1,%o1
	sll %l0,2,%l2
	add %l2,%i1,%o0
	ld [%o0-4],%o0
	add %o1,%o0,%o0
	cmp %o0,%o1
	bgeu L24
	mov %o0,%l1
	call _cgeti,0
	add %l0,1,%o0
	mov %o0,%i0
	add %l0,-1,%o2
	cmp %o2,2
	ble L69
	st %l1,[%i0+%l2]
L30:
	sll %o2,2,%o1
	add %o1,%i1,%o0
	ld [%o0-4],%o0
	cmp %o0,-1
	bne L69
	cmp %o2,2
	add %o2,-1,%o2
	cmp %o2,2
	bg L30
	st %g0,[%i0+%o1]
	cmp %o2,2
L69:
	ble L31
	sll %o2,2,%o1
	add %o1,%i1,%o0
	ld [%o0-4],%o0
	add %o0,1,%o0
	b L68
	st %o0,[%i0+%o1]
L34:
	add %o0,%i1,%o1
	ld [%o1-4],%o1
	st %o1,[%i0+%o0]
L68:
	add %o2,-1,%o2
	cmp %o2,2
	bg L34
	sll %o2,2,%o0
	ld [%i0],%o0
	add %o0,-1,%o0
	st %o0,[%i0+4]
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(_avma),%o1
	ld [%o1+%lo(_avma)],%o0
	add %o0,4,%o0
	b L37
	st %o0,[%o1+%lo(_avma)]
L31:
	mov 1,%o0
	st %o0,[%i0+8]
	ld [%i0],%o0
	b L37
	st %o0,[%i0+4]
L24:
	call _cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	sll %l0,2,%o0
	add %o0,%i0,%o0
	st %l1,[%o0-4]
	mov 1,%o2
	add %l0,-1,%o0
	cmp %o2,%o0
	bge L37
	mov %o0,%o3
L41:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,1,%o2
	cmp %o2,%o3
	bl L41
	st %o0,[%i0+%o1]
L37:
	ld [%i0+4],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l4,24,%o0
	add %o1,%o0,%o1
	b L67
	st %o1,[%i0+4]
L23:
	cmp %l0,3
	bne L44
	sll %l0,2,%l2
	ld [%i1+8],%o0
	cmp %o0,%l1
	bleu L45
	nop
	call _cgeti,0
	mov 3,%o0
	mov %o0,%i0
	sll %l3,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%i1+8],%o0
	sub %o0,%l1,%o0
	b L67
	st %o0,[%i0+8]
L45:
	bne L46
	sethi %hi(_gzero),%o0
	b L67
	ld [%o0+%lo(_gzero)],%i0
L46:
	call _cgeti,0
	mov 3,%o0
	mov %o0,%i0
	sub %g0,%l3,%o0
	sll %o0,24,%o0
	add %o0,3,%o0
	st %o0,[%i0+4]
	ld [%i1+8],%o0
	sub %l1,%o0,%o0
	b L67
	st %o0,[%i0+8]
L44:
	add %l2,%i1,%o0
	ld [%o0-4],%o1
	mov %l1,%o0
	cmp %o1,%o0
	bgeu L47
	sub %o1,%o0,%l1
	call _cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	add %l2,%i0,%o0
	st %l1,[%o0-4]
	add %l0,-2,%o2
	sll %o2,2,%o0
	mov %o0,%o1
	ld [%i1+%o0],%o0
	cmp %o0,0
	bne,a L70
	sll %o2,2,%o1
	mov -1,%o3
	st %o3,[%i0+%o1]
L71:
	add %o2,-1,%o2
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	cmp %o0,0
	be,a L71
	st %o3,[%i0+%o1]
	sll %o2,2,%o1
L70:
	ld [%i1+%o1],%o0
	add %o0,-1,%o0
	cmp %o2,2
	bg L54
	st %o0,[%i0+%o1]
	cmp %o0,0
	be,a L53
	ld [%i0],%o0
L54:
	add %o2,-1,%o2
	cmp %o2,0
	ble L67
	nop
L58:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,-1,%o2
	cmp %o2,0
	bg L58
	st %o0,[%i0+%o1]
	b,a L67
L53:
	add %o0,-1,%o0
	st %o0,[%i0+4]
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(_avma),%o1
	ld [%o1+%lo(_avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(_avma)]
	ld [%i0+4],%o1
	sethi %hi(-16777216),%o0
	andn %o1,%o0,%o0
	sll %l3,24,%o1
	add %o0,%o1,%o0
	b L67
	st %o0,[%i0+4]
L47:
	call _cgeti,0
	mov %l0,%o0
	mov %o0,%i0
	sll %l0,2,%o0
	add %o0,%i0,%o0
	st %l1,[%o0-4]
	mov 1,%o2
	add %l0,-1,%o0
	cmp %o2,%o0
	bge L67
	mov %o0,%o3
L65:
	sll %o2,2,%o1
	ld [%i1+%o1],%o0
	add %o2,1,%o2
	cmp %o2,%o3
	bl L65
	st %o0,[%i0+%o1]
L67:
	ret
	restore
	.align 4
	.global _addii
	.proc	0104
_addii:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	mov %i0,%l0
	ld [%l0+4],%o0
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	and %o0,%o1,%l1
	ld [%i1+4],%o0
	and %o0,%o1,%l2
	cmp %l1,%l2
	bge,a L204
	ldsb [%i1+4],%o5
	mov %i1,%l0
	mov %i0,%i1
	mov %l1,%l3
	mov %l2,%l1
	mov %l3,%l2
	ldsb [%i1+4],%o5
L204:
	cmp %o5,0
	bne,a L74
	ldsb [%l0+4],%l3
	call _icopy,0
	mov %l0,%o0
	b L201
	mov %o0,%i0
L74:
	cmp %l3,%o5
	bne L75
	cmp %l1,%l2
	call _cgeti,0
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
	sethi %hi(L113),%o0
	or %o0,%lo(L113),%g2
	add %o5,-1,%o0
L220:
	cmp %o0,15
	bgu L81
	sll %o0,2,%o0
	ld [%o0+%g2],%o0
	jmp %o0
	nop
L113:
	.word	L111
	.word	L109
	.word	L107
	.word	L105
	.word	L103
	.word	L101
	.word	L99
	.word	L97
	.word	L95
	.word	L93
	.word	L91
	.word	L89
	.word	L87
	.word	L85
	.word	L83
	.word	L81
L81:
	subcc %g0,%o2,%g0
	b L82
	add %o4,-4,%o4
L83:
	subcc %g0,%o2,%g0
	b L205
	add %o4,-4,%o4
L85:
	subcc %g0,%o2,%g0
	b L206
	add %o4,-4,%o4
L87:
	subcc %g0,%o2,%g0
	b L207
	add %o4,-4,%o4
L89:
	subcc %g0,%o2,%g0
	b L208
	add %o4,-4,%o4
L91:
	subcc %g0,%o2,%g0
	b L209
	add %o4,-4,%o4
L93:
	subcc %g0,%o2,%g0
	b L210
	add %o4,-4,%o4
L95:
	subcc %g0,%o2,%g0
	b L211
	add %o4,-4,%o4
L97:
	subcc %g0,%o2,%g0
	b L212
	add %o4,-4,%o4
L99:
	subcc %g0,%o2,%g0
	b L213
	add %o4,-4,%o4
L101:
	subcc %g0,%o2,%g0
	b L214
	add %o4,-4,%o4
L103:
	subcc %g0,%o2,%g0
	b L215
	add %o4,-4,%o4
L105:
	subcc %g0,%o2,%g0
	b L216
	add %o4,-4,%o4
L107:
	subcc %g0,%o2,%g0
	b L217
	add %o4,-4,%o4
L109:
	subcc %g0,%o2,%g0
	b L218
	add %o4,-4,%o4
L111:
	subcc %g0,%o2,%g0
	b L219
	add %o4,-4,%o4
L82:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L205:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L206:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L207:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L208:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L209:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L210:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L211:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L212:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L213:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L214:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L215:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L216:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L217:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L218:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L219:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	addxcc %l4,%g3,%o0
	st %o0,[%o4]
	addx %g0,%g0,%o2
	add %o5,-16,%o5
	cmp %o5,0
	bg,a L220
	add %o5,-1,%o0
	cmp %o2,0
	be L115
	add %l0,8,%o2
L116:
	add %o3,-4,%o3
	cmp %o3,%o2
	blu L117
	mov %o3,%o1
	ld [%o3],%o0
	cmp %o0,-1
	bne L118
	add %o4,-4,%o4
	b L116
	st %g0,[%o4]
L118:
	ld [%o1],%o0
	b L203
	add %o0,1,%o0
L122:
	add %o4,-4,%o4
	ld [%o1],%o0
L203:
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o2
	bgeu L122
	mov %o3,%o1
	b L221
	ld [%i0],%o0
L117:
	mov 1,%o0
	st %o0,[%i0+8]
	ld [%l0+4],%o0
	add %o0,1,%o0
	b L201
	st %o0,[%i0+4]
L115:
	subcc %l1,%l2,%o2
	be,a L221
	ld [%i0],%o0
L128:
	add %o4,-4,%o4
	add %o3,-4,%o3
	ld [%o3],%o0
	addcc %o2,-1,%o2
	bne L128
	st %o0,[%o4]
	ld [%i0],%o0
L221:
	add %o0,-1,%o0
	st %o0,[%i0+4]
	ld [%l0+4],%o0
	st %o0,[%i0+8]
	add %i0,4,%i0
	sethi %hi(_avma),%o1
	ld [%o1+%lo(_avma)],%o0
	add %o0,4,%o0
	b L201
	st %o0,[%o1+%lo(_avma)]
L75:
	bne L131
	add %l0,8,%o3
	addcc %l1,-2,%o2
	be L140
	add %i1,8,%o1
	ld [%o3],%o4
L222:
	add %o3,4,%o3
	ld [%o1],%o0
	cmp %o0,%o4
	bgu L202
	add %o1,4,%o1
	cmp %o4,%o0
	bgu L131
	addcc %o2,-1,%o2
	bne,a L222
	ld [%o3],%o4
L140:
	sethi %hi(_gzero),%o0
	b L201
	ld [%o0+%lo(_gzero)],%i0
L202:
	mov %l0,%i0
	mov %i1,%l0
	mov %i0,%i1
	mov %o5,%l3
L131:
	call _cgeti,0
	mov %l1,%o0
	mov %o0,%i0
	mov 0,%o2
	sll %l1,2,%o0
	add %l0,%o0,%o3
	sll %l2,2,%o1
	add %i1,%o1,%o1
	add %i0,%o0,%o4
	add %l2,-2,%o5
	sethi %hi(L178),%o0
	or %o0,%lo(L178),%g2
	add %o5,-1,%o0
L238:
	cmp %o0,15
	bgu L146
	sll %o0,2,%o0
	ld [%o0+%g2],%o0
	jmp %o0
	nop
L178:
	.word	L176
	.word	L174
	.word	L172
	.word	L170
	.word	L168
	.word	L166
	.word	L164
	.word	L162
	.word	L160
	.word	L158
	.word	L156
	.word	L154
	.word	L152
	.word	L150
	.word	L148
	.word	L146
L146:
	subcc %g0,%o2,%g0
	b L147
	add %o4,-4,%o4
L148:
	subcc %g0,%o2,%g0
	b L223
	add %o4,-4,%o4
L150:
	subcc %g0,%o2,%g0
	b L224
	add %o4,-4,%o4
L152:
	subcc %g0,%o2,%g0
	b L225
	add %o4,-4,%o4
L154:
	subcc %g0,%o2,%g0
	b L226
	add %o4,-4,%o4
L156:
	subcc %g0,%o2,%g0
	b L227
	add %o4,-4,%o4
L158:
	subcc %g0,%o2,%g0
	b L228
	add %o4,-4,%o4
L160:
	subcc %g0,%o2,%g0
	b L229
	add %o4,-4,%o4
L162:
	subcc %g0,%o2,%g0
	b L230
	add %o4,-4,%o4
L164:
	subcc %g0,%o2,%g0
	b L231
	add %o4,-4,%o4
L166:
	subcc %g0,%o2,%g0
	b L232
	add %o4,-4,%o4
L168:
	subcc %g0,%o2,%g0
	b L233
	add %o4,-4,%o4
L170:
	subcc %g0,%o2,%g0
	b L234
	add %o4,-4,%o4
L172:
	subcc %g0,%o2,%g0
	b L235
	add %o4,-4,%o4
L174:
	subcc %g0,%o2,%g0
	b L236
	add %o4,-4,%o4
L176:
	subcc %g0,%o2,%g0
	b L237
	add %o4,-4,%o4
L147:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L223:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L224:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L225:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L226:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L227:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L228:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L229:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L230:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L231:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L232:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L233:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L234:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L235:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L236:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	add %o4,-4,%o4
L237:
	add %o3,-4,%o3
	add %o1,-4,%o1
	ld [%o3],%l4
	ld [%o1],%g3
	subxcc %l4,%g3,%o0
	st %o0,[%o4]
	addx %g0,%g0,%o2
	add %o5,-16,%o5
	cmp %o5,0
	bg,a L238
	add %o5,-1,%o0
	cmp %o2,0
	be,a L180
	subcc %l1,%l2,%o5
	add %o3,-4,%o3
	ld [%o3],%o0
	cmp %o0,0
	bne L239
	add %l0,8,%o1
	mov -1,%o1
	add %o4,-4,%o4
L240:
	st %o1,[%o4]
	add %o3,-4,%o3
	ld [%o3],%o0
	cmp %o0,0
	be,a L240
	add %o4,-4,%o4
	add %l0,8,%o1
L239:
	cmp %o3,%o1
	blu L190
	add %o0,-1,%o0
	add %o4,-4,%o4
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o1
	blu L190
	mov %o3,%o0
L188:
	add %o4,-4,%o4
	ld [%o0],%o0
	st %o0,[%o4]
	add %o3,-4,%o3
	cmp %o3,%o1
	bgeu L188
	mov %o3,%o0
	b L241
	ld [%i0+8],%o0
L180:
	be,a L241
	ld [%i0+8],%o0
L193:
	add %o4,-4,%o4
	add %o3,-4,%o3
	ld [%o3],%o0
	addcc %o5,-1,%o5
	bne L193
	st %o0,[%o4]
L190:
	ld [%i0+8],%o0
L241:
	cmp %o0,0
	be,a L195
	ld [%i0+12],%o0
	ld [%l0+4],%o0
	b L201
	st %o0,[%i0+4]
L195:
	cmp %o0,0
	bne L198
	add %i0,12,%o4
	add %o4,4,%o4
L242:
	ld [%o4],%o0
	cmp %o0,0
	be,a L242
	add %o4,4,%o4
L198:
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
	sethi %hi(_avma),%o2
	sll %o5,2,%o0
	ld [%o2+%lo(_avma)],%o1
	add %o0,%o1,%o0
	st %o0,[%o2+%lo(_avma)]
L201:
	ret
	restore
	.align 4
	.global _mulss
	.proc	0104
_mulss:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	orcc %i0,%g0,%o0
	be L245
	cmp %i1,0
	bne L244
	cmp %o0,0
L245:
	sethi %hi(_gzero),%o0
	b L253
	ld [%o0+%lo(_gzero)],%i0
L244:
	bge L246
	mov 1,%l0
	subcc %g0,%o0,%o0
	bpos L246
	mov -1,%l0
	call _stoi,0
	nop
	mov %o0,%o1
	b L254
	mov %i1,%o0
L246:
	cmp %i1,0
	bge L255
	mov %o0,%l1
	subcc %g0,%i1,%i1
	bpos L255
	sub %g0,%l0,%l0
	cmp %l0,0
	bg L250
	mov %o0,%o1
	sub %g0,%o0,%o1
L250:
	mov %o1,%o0
	sethi %hi(_ABS_MOST_NEGS),%o1
	or %o1,%lo(_ABS_MOST_NEGS),%o1
L254:
	call _mulsi,0
	nop
	b L253
	mov %o0,%i0
L255:
	 
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

	orcc %o2,%g0,%i1
	be L251
	nop
	call _cgeti,0
	mov 4,%o0
	mov %o0,%i0
	st %i1,[%i0+8]
	b L252
	st %l1,[%i0+12]
L251:
	call _cgeti,0
	mov 3,%o0
	mov %o0,%i0
	st %l1,[%i0+8]
L252:
	ld [%i0],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l0,24,%o0
	add %o1,%o0,%o1
	st %o1,[%i0+4]
L253:
	ret
	restore
	.align 4
	.global _mulii
	.proc	0104
_mulii:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	mov %i0,%l4
	ld [%l4+4],%o0
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	and %o0,%o1,%l0
	ld [%i1+4],%o2
	sra %o0,24,%l2
	cmp %l2,0
	be L276
	and %o2,%o1,%l3
	ldsb [%i1+4],%o0
	cmp %o0,0
	bne L258
	nop
L276:
	sethi %hi(_gzero),%o0
	b L275
	ld [%o0+%lo(_gzero)],%i0
L258:
	bl,a L259
	sub %g0,%l2,%l2
L259:
	cmp %l0,%l3
	ble L260
	sethi %hi(65535),%o0
	mov %l4,%i0
	mov %i1,%l4
	mov %i0,%i1
	mov %l0,%l1
	mov %l3,%l0
	mov %l1,%l3
L260:
	add %l0,%l3,%l1
	add %l1,-2,%l1
	or %o0,%lo(65535),%o0
	cmp %l1,%o0
	ble L261
	nop
	call _err,0
	mov 17,%o0
L261:
	call _cgeti,0
	mov %l1,%o0
	mov %o0,%i0
	ld [%i0],%o1
	sethi %hi(-16777216),%o0
	andn %o1,%o0,%o0
	sll %l2,24,%o1
	add %o0,%o1,%o0
	st %o0,[%i0+4]
	sll %l0,2,%o0
	add %l4,%o0,%l2
	add %l2,-4,%l2
	ld [%l2],%o2
	mov 0,%o3
	sll %l3,2,%o0
	add %i1,%o0,%o7
	sll %l1,2,%o0
	addcc %l3,-2,%g2
	be L263
	add %i0,%o0,%g4
L264:
	add %g4,-4,%g4
	mov %o3,%o0
	add %o7,-4,%o7
	ld [%o7],%o1
	mov %o2,%l5
	 
        or      %l5,%o1,%o4      
        mov     %l5,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%g0,%o4
        tst     %o1
        bl,a    1f
        add     %o4,%l5,%o4
1:      mov     %o4,%o3
        b       3f 
        rd      %y,%l5
2:      clr     %o3
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%o1,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%l5
3:       

	mov %l5,%o1
	addcc %o0,%o1,%l5
	addx %o3,%g0,%o3
	addcc %g2,-1,%g2
	bne L264
	st %l5,[%g4]
L263:
	st %o3,[%g4-4]
	sll %l1,2,%o0
	add %i0,%o0,%g4
	sll %l3,2,%o0
	add %i1,%o0,%i1
	add %l0,-3,%l0
	cmp %l0,0
	ble L267
	add %l3,-1,%l3
L268:
	add %l2,-4,%l2
	ld [%l2],%g1
	mov %i1,%o7
	add %g4,-4,%o2
	mov %o2,%g4
	addcc %l3,-1,%g2
	be L270
	mov 0,%g3
L271:
	add %o7,-4,%o7
	ld [%o7],%o0
	mov %o0,%o1
	 
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
1:      mov     %o4,%o3
        b       3f 
        rd      %y,%o1
2:      clr     %o3
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

	add %o2,-4,%o2
	ld [%o2],%o0
	addcc %o1,%o0,%o0
	addx %o3,%g0,%o3
	addcc %o0,%g3,%l5
	addx %o3,%g0,%o3
	st %l5,[%o2]
	addcc %g2,-1,%g2
	bne L271
	mov %o3,%g3
L270:
	add %l0,-1,%l0
	cmp %l0,0
	bg L268
	st %o3,[%o2-4]
L267:
	ld [%i0+8],%o0
	cmp %o0,0
	bne L275
	sethi %hi(_avma),%o1
	ld [%i0+4],%o0
	add %o0,-1,%o0
	st %o0,[%i0+8]
	ld [%i0],%o0
	add %o0,-1,%o0
	st %o0,[%i0+4]
	add %i0,4,%i0
	ld [%o1+%lo(_avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(_avma)]
L275:
	ret
	restore
.data
	.align 8
LC0:
	.word	0x3fd34413
	.word	0x55475a32
	.align 8
LC1:
	.word	0x3ff00000
	.word	0x0
.text
	.align 4
	.global _confrac
	.proc	0104
_confrac:
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
	sethi %hi(_avma),%o0
	ld [%o0+%lo(_avma)],%l5
	add %l2,-2,%l4
	sll %l4,5,%l4
	add %l4,%l0,%l4
	add %l4,63,%l3
	sra %l3,5,%l3
	call _cgeti,0
	mov %l3,%o0
	sra %l0,5,%o1
	mov 0,%g2
	cmp %g2,%o1
	bge L279
	mov %o0,%l1
L281:
	sll %g2,2,%o0
	add %g2,1,%g2
	cmp %g2,%o1
	bl L281
	st %g0,[%l1+%o0]
L279:
	andcc %l0,31,%l0
	bne L283
	mov 2,%g3
	cmp %g3,%l2
	bge L305
	sll %l3,2,%o0
L287:
	sll %g2,2,%o0
	sll %g3,2,%o1
	ld [%i0+%o1],%o1
	st %o1,[%l1+%o0]
	add %g3,1,%g3
	cmp %g3,%l2
	bl L287
	add %g2,1,%g2
	b L305
	sll %l3,2,%o0
L283:
	cmp %g3,%l2
	bge L291
	mov 0,%o3
	mov 32,%o0
	sub %o0,%l0,%o4
L293:
	sll %g2,2,%o1
	sll %g3,2,%o0
	ld [%i0+%o0],%o2
	add %g2,1,%g2
	srl %o2,%l0,%o0
	add %o0,%o3,%o0
	st %o0,[%l1+%o1]
	add %g3,1,%g3
	cmp %g3,%l2
	bl L293
	sll %o2,%o4,%o3
L291:
	sll %l3,2,%o0
	add %o0,%l1,%o0
	st %o3,[%o0-8]
	sll %l3,2,%o0
L305:
	add %o0,%l1,%o0
	st %g0,[%o0-4]
	st %l4,[%fp-12]
	ld [%fp-12],%f6
	fitod %f6,%f2
	sethi %hi(LC0),%l6
	ldd [%l6+%lo(LC0)],%f4
	fmuld %f2,%f4,%f2
	sethi %hi(LC1),%l6
	ldd [%l6+%lo(LC1)],%f4
	faddd %f2,%f4,%f2
	fdtoi %f2,%f2
	st %f2,[%fp-12]
	ld [%fp-12],%l0
	add %l0,17,%l2
	mov %l2,%o0
	call .div,0
	mov 9,%o1
	call _cgeti,0
	mov %o0,%l2
	mov %o0,%i0
	mov 1,%g3
	cmp %g3,%l2
	bge L296
	st %l0,[%i0]
L298:
	addcc %l3,-1,%g2
	bneg L300
	mov 0,%o3
	sethi %hi(1000000000),%o0
	or %o0,%lo(1000000000),%o7
L302:
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
	bpos L302
	st %l6,[%l1+%o1]
L300:
	sll %g3,2,%o0
	add %g3,1,%g3
	cmp %g3,%l2
	bl L298
	st %o3,[%i0+%o0]
L296:
	sethi %hi(_avma),%o0
	st %l5,[%o0+%lo(_avma)]
	ret
	restore
	.align 4
	.global _divss
	.proc	0104
_divss:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne L315
	sethi %hi(-2147483648),%o0
	call _err,0
	mov 23,%o0
	sethi %hi(-2147483648),%o0
L315:
	cmp %i0,%o0
	bne L308
	sethi %hi(_hiremainder),%o0
	call _stoi,0
	mov %i0,%o0
	call _divis,0
	mov %i1,%o1
	b L316
	mov %o0,%i0
L308:
	st %g0,[%o0+%lo(_hiremainder)]
	cmp %i0,0
	bge L309
	mov %i0,%o0
	sub %g0,%i0,%o0
L309:
	cmp %i1,0
	bge L310
	mov %i1,%o1
	sub %g0,%i1,%o1
L310:
	sethi %hi(_hiremainder),%l0
	call _divul3,0
	or %l0,%lo(_hiremainder),%o2
	cmp %i1,0
	bge L311
	mov %o0,%o1
	ld [%l0+%lo(_hiremainder)],%o0
	sub %g0,%o0,%o0
	st %o0,[%l0+%lo(_hiremainder)]
	sub %g0,%o1,%o1
L311:
	cmp %i0,0
	bl,a L312
	sub %g0,%o1,%o1
L312:
	call _stoi,0
	mov %o1,%o0
	mov %o0,%i0
L316:
	ret
	restore
	.align 4
	.global _modss
	.proc	0104
_modss:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne L327
	sethi %hi(-2147483648),%o0
	call _err,0
	mov 38,%o0
	sethi %hi(-2147483648),%o0
L327:
	cmp %i0,%o0
	bne L319
	mov %i0,%o0
	call _stoi,0
	mov %i0,%o0
	call _modis,0
	mov %i1,%o1
	b L325
	mov %o0,%i0
L319:
	cmp %o0,0
	bge L320
	st %g0,[%fp-12]
	sub %g0,%o0,%o0
L320:
	cmp %i1,0
	bl,a L321
	sub %g0,%i1,%i1
L321:
	mov %i1,%o1
	call _divul3,0
	add %fp,-12,%o2
	ld [%fp-12],%o0
	cmp %o0,0
	bne L322
	nop
	sethi %hi(_gzero),%o0
	b L325
	ld [%o0+%lo(_gzero)],%i0
L322:
	bge,a L326
	ld [%fp-12],%o0
	sub %i1,%o0,%o0
L326:
	call _stoi,0
	nop
	mov %o0,%i0
L325:
	ret
	restore
	.align 4
	.global _resss
	.proc	0104
_resss:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	cmp %i1,0
	bne L335
	mov %i0,%o0
	call _err,0
	mov 40,%o0
	mov %i0,%o0
L335:
	cmp %o0,0
	bge L330
	st %g0,[%fp-12]
	sub %g0,%o0,%o0
L330:
	cmp %i1,0
	bge L331
	mov %i1,%o1
	sub %g0,%i1,%o1
L331:
	call _divul3,0
	add %fp,-12,%o2
	cmp %i1,0
	bge L334
	ld [%fp-12],%o0
	sub %g0,%o0,%o0
L334:
	call _stoi,0
	nop
	mov %o0,%i0
	ret
	restore
	.align 4
	.global _divsi
	.proc	0104
_divsi:
	!#PROLOGUE# 0
	save %sp,-104,%sp
	!#PROLOGUE# 1
	ld [%i1+4],%o0
	sra %o0,24,%o2
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	cmp %o2,0
	bne L337
	and %o0,%o1,%l0
	call _err,0
	mov 24,%o0
L337:
	cmp %i0,0
	be L339
	cmp %l0,3
	bg L346
	sethi %hi(_hiremainder),%o0
	ld [%i1+8],%o0
	cmp %o0,0
	bge L338
	sethi %hi(-2147483648),%o0
L339:
	sethi %hi(_hiremainder),%o0
L346:
	st %i0,[%o0+%lo(_hiremainder)]
	sethi %hi(_gzero),%o0
	b L344
	ld [%o0+%lo(_gzero)],%i0
L338:
	cmp %i0,%o0
	bne L340
	sethi %hi(_hiremainder),%o0
	call _stoi,0
	mov %i0,%o0
	mov %i1,%o1
	call _dvmdii,0
	mov 0,%o2
	b L344
	mov %o0,%i0
L340:
	st %g0,[%o0+%lo(_hiremainder)]
	cmp %i0,0
	bge L341
	mov %i0,%o0
	sub %g0,%i0,%o0
L341:
	ld [%i1+8],%o1
	sethi %hi(_hiremainder),%l0
	call _divul3,0
	or %l0,%lo(_hiremainder),%o2
	mov %o0,%o1
	ldsb [%i1+4],%o0
	cmp %o0,0
	bge L347
	cmp %i0,0
	ld [%l0+%lo(_hiremainder)],%o0
	sub %g0,%o0,%o0
	st %o0,[%l0+%lo(_hiremainder)]
	sub %g0,%o1,%o1
L347:
	bl,a L343
	sub %g0,%o1,%o1
L343:
	call _stoi,0
	mov %o1,%o0
	mov %o0,%i0
L344:
	ret
	restore
	.align 4
	.global _divis
	.proc	0104
_divis:
	!#PROLOGUE# 0
	save %sp,-112,%sp
	!#PROLOGUE# 1
	ld [%i0+4],%o1
	sra %o1,24,%l4
	sethi %hi(65535),%o0
	or %o0,%lo(65535),%o0
	cmp %i1,0
	bne L349
	and %o1,%o0,%l3
	call _err,0
	mov 26,%o0
L349:
	cmp %l4,0
	bne L350
	cmp %i1,0
	sethi %hi(_hiremainder),%o0
	b L365
	st %g0,[%o0+%lo(_hiremainder)]
L350:
	bge,a L366
	ld [%i0+8],%o0
	subcc %g0,%i1,%i1
	bpos L351
	sub %g0,%l4,%l4
	call _stoi,0
	mov %i1,%o0
	mov %o0,%o1
	mov %i0,%o0
	call _dvmdii,0
	mov 0,%o2
	b L364
	mov %o0,%i0
L351:
	ld [%i0+8],%o0
L366:
	cmp %i1,%o0
	bleu L353
	cmp %l3,3
	bne L354
	sethi %hi(_hiremainder),%l0
	call _itos,0
	mov %i0,%o0
	st %o0,[%l0+%lo(_hiremainder)]
L365:
	sethi %hi(_gzero),%o0
	b L364
	ld [%o0+%lo(_gzero)],%i0
L354:
	call _cgeti,0
	add %l3,-1,%o0
	mov %o0,%l2
	mov 1,%l1
	ld [%i0+8],%o0
	b L356
	st %o0,[%fp-12]
L353:
	call _cgeti,0
	mov %l3,%o0
	mov %o0,%l2
	mov 0,%l1
	st %g0,[%fp-12]
L356:
	add %l1,2,%l0
	cmp %l0,%l3
	bge,a L367
	ld [%l2],%o0
L360:
	sll %l0,2,%o0
	ld [%i0+%o0],%o0
	mov %i1,%o1
	call _divul3,0
	add %fp,-12,%o2
	sub %l0,%l1,%o1
	sll %o1,2,%o1
	add %l0,1,%l0
	cmp %l0,%l3
	bl L360
	st %o0,[%l2+%o1]
	ld [%l2],%o0
L367:
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	sll %l4,24,%o0
	add %o1,%o0,%o1
	st %o1,[%l2+4]
	sethi %hi(_hiremainder),%o1
	cmp %l4,0
	bge L362
	or %o1,%lo(_hiremainder),%o2
	ld [%fp-12],%o0
	sub %g0,%o0,%o0
	b L363
	st %o0,[%o1+%lo(_hiremainder)]
L362:
	ld [%fp-12],%o0
	st %o0,[%o2]
L363:
	mov %l2,%i0
L364:
	ret
	restore
	.align 4
	.global _dvmdii
	.proc	0104
_dvmdii:
	!#PROLOGUE# 0
	save %sp,-144,%sp
	!#PROLOGUE# 1
	mov %i2,%i4
	ldsb [%i0+4],%g4
	st %g4,[%fp-28]
	ldsb [%i1+4],%g1
	cmp %g1,0
	bne L369
	st %g1,[%fp-36]
	call _err,0
	mov 36,%o0
L369:
	ld [%fp-28],%g4
	cmp %g4,0
	bne,a L370
	ld [%i0+4],%o0
	cmp %i4,-1
	be L471
	cmp %i4,0
	be L471
	sethi %hi(_gzero),%o1
	ld [%o1+%lo(_gzero)],%o0
	st %o0,[%i4]
	b L470
	ld [%o1+%lo(_gzero)],%i0
L370:
	sethi %hi(65535),%o1
	or %o1,%lo(65535),%o1
	and %o0,%o1,%l6
	ld [%i1+4],%o0
	and %o0,%o1,%i3
	subcc %l6,%i3,%i5
	bpos,a L373
	sethi %hi(_avma),%o0
	cmp %i4,-1
	bne L374
	cmp %i4,0
	call _icopy,0
	mov %i0,%o0
	b L470
	mov %o0,%i0
L374:
	be L477
	sethi %hi(_gzero),%o0
	call _icopy,0
	mov %i0,%o0
	b L471
	st %o0,[%i4]
L373:
	ld [%o0+%lo(_avma)],%o0
	st %o0,[%fp-20]
	ld [%fp-28],%g1
	cmp %g1,0
	bge L478
	cmp %i3,3
	ld [%fp-36],%g4
	sub %g0,%g4,%g4
	st %g4,[%fp-36]
L478:
	bne L377
	nop
	ld [%i1+8],%i1
	ld [%i0+8],%o0
	cmp %i1,%o0
	bleu L378
	add %i0,8,%l1
	add %l6,-1,%l0
	st %o0,[%fp-12]
	b L379
	add %i0,12,%l1
L378:
	mov %l6,%l0
	st %g0,[%fp-12]
L379:
	call _cgeti,0
	mov %l0,%o0
	mov %o0,%l5
	addcc %l0,-2,%l3
	be L381
	add %l5,8,%l2
L382:
	ld [%l1],%o0
	add %l1,4,%l1
	mov %i1,%o1
	call _divul3,0
	add %fp,-12,%o2
	st %o0,[%l2]
	addcc %l3,-1,%l3
	bne L382
	add %l2,4,%l2
L381:
	cmp %i4,-1
	bne L384
	cmp %l0,2
	sethi %hi(_avma),%o0
	ld [%fp-20],%g1
	st %g1,[%o0+%lo(_avma)]
	ld [%fp-12],%o0
	cmp %o0,0
	bne L385
	nop
L471:
	sethi %hi(_gzero),%o0
L477:
	b L470
	ld [%o0+%lo(_gzero)],%i0
L385:
	call _cgeti,0
	mov 3,%o0
	mov %o0,%l4
	ld [%fp-28],%g4
	sll %g4,24,%o0
	add %o0,3,%o0
	st %o0,[%l4+4]
	ld [%fp-12],%o0
	st %o0,[%l4+8]
	b L470
	mov %l4,%i0
L384:
	be L386
	sethi %hi(-16777216),%o1
	ld [%l5],%o0
	andn %o0,%o1,%o1
	ld [%fp-36],%g1
	sll %g1,24,%o0
	add %o1,%o0,%o1
	b L387
	st %o1,[%l5+4]
L386:
	sethi %hi(_avma),%o0
	ld [%fp-20],%g4
	st %g4,[%o0+%lo(_avma)]
	sethi %hi(_gzero),%o0
	ld [%o0+%lo(_gzero)],%l5
L387:
	cmp %i4,0
	bne L388
	ld [%fp-12],%o0
L473:
	b L470
	mov %l5,%i0
L388:
	cmp %o0,0
	bne L389
	sethi %hi(_gzero),%o0
	ld [%o0+%lo(_gzero)],%o0
	b L473
	st %o0,[%i4]
L389:
	call _cgeti,0
	mov 3,%o0
	mov %o0,%l4
	ld [%fp-28],%g1
	sll %g1,24,%o0
	add %o0,3,%o0
	st %o0,[%l4+4]
	ld [%fp-12],%o0
	st %o0,[%l4+8]
	b L473
	st %l4,[%i4]
L377:
	call _cgeti,0
	mov %l6,%o0
	mov %o0,%l5
	call _bfffo,0
	ld [%i1+8],%o0
	orcc %o0,%g0,%i2
	be L392
	add %i0,8,%l1
	call _cgeti,0
	mov %i3,%o0
	mov %o0,%l4
	ld [%i1+8],%o3
	add %i1,12,%o1
	mov 32,%o0
	sub %o0,%i2,%o0
	srl %o3,%o0,%o0
	st %o0,[%fp-12]
	sll %o3,%i2,%g2
	addcc %i3,-3,%l3
	be L394
	add %l4,8,%o2
	mov 32,%o0
	sub %o0,%i2,%o4
L395:
	ld [%o1],%o3
	add %o1,4,%o1
	srl %o3,%o4,%o0
	st %o0,[%fp-12]
	add %g2,%o0,%o0
	st %o0,[%o2]
	add %o2,4,%o2
	addcc %l3,-1,%l3
	bne L395
	sll %o3,%i2,%g2
L394:
	st %g2,[%o2]
	mov 0,%g2
	add %i0,8,%l1
	addcc %l6,-2,%l3
	be L398
	add %l5,4,%l2
	mov 32,%o0
	sub %o0,%i2,%o1
L399:
	ld [%l1],%o3
	add %l1,4,%l1
	srl %o3,%o1,%o0
	st %o0,[%fp-12]
	add %g2,%o0,%o0
	st %o0,[%l2]
	add %l2,4,%l2
	addcc %l3,-1,%l3
	bne L399
	sll %o3,%i2,%g2
L398:
	b L401
	st %g2,[%l2]
L392:
	st %g0,[%l5+4]
	addcc %l6,-2,%l0
	be L403
	add %l5,8,%l2
L404:
	ld [%l1],%o0
	st %o0,[%l2]
	add %l1,4,%l1
	addcc %l0,-1,%l0
	bne L404
	add %l2,4,%l2
L403:
	mov %i1,%l4
L401:
	ld [%l4+8],%i1
	ld [%l4+12],%i0
	addcc %i5,1,%l3
	be L407
	add %l5,4,%l2
	sll %i3,2,%l1
L408:
	ld [%l2],%o0
	cmp %o0,%i1
	bne L409
	add %l2,4,%l2
	mov -1,%o7
	mov %i1,%o3
	ld [%l2],%o0
	add %o3,%o0,%o1
	cmp %o1,%o3
	addx %g0,0,%o2
	b L410
	mov %o1,%g2
L409:
	ld [%l2-4],%o0
	st %o0,[%fp-12]
	ld [%l2],%o0
	mov %i1,%o1
	call _divul3,0
	add %fp,-12,%o2
	mov %o0,%o7
	mov 0,%o2
	ld [%fp-12],%g2
L410:
	cmp %o2,0
	bne,a L479
	st %g0,[%fp-12]
	mov %o7,%o3
	 
        or      %o3,%i0,%o4      
        mov     %o3,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%g0,%o4
        tst     %i0
        bl,a    1f
        add     %o4,%o3,%o4
1:      mov     %o4,%g4
        b       3f 
        rd      %y,%o3
2:      clr     %g4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%i0,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o3
3:       

	st %g4,[%fp-12]
	ld [%l2+4],%o0
	cmp %o3,%o0
	addx %g0,0,%o2
	sub %o3,%o0,%o4
	ld [%fp-12],%o3
	mov %g2,%o0
	sub %o3,%g2,%o1
	cmp %g2,%o3
	bgu L476
	sub %o1,%o2,%o1
	b L480
	cmp %o0,%o3
L424:
	be L411
	mov %o4,%o3
	add %o7,-1,%o7
	mov %i0,%o0
	cmp %o3,%o0
	addx %g0,0,%o2
	sub %o3,%o0,%o4
	mov %o1,%o3
	mov %i1,%o0
	sub %o3,%o0,%o1
	cmp %o0,%o3
	bleu L480
	sub %o1,%o2,%o1
L476:
	b L421
	mov 1,%o2
L480:
	blu,a L421
	mov 0,%o2
L421:
	cmp %o2,0
	be L424
	cmp %o1,0
L411:
	st %g0,[%fp-12]
L479:
	add %l2,%l1,%g2
	add %g2,-8,%g2
	addcc %i3,-2,%l0
	be L426
	add %l4,%l1,%g3
L427:
	ld [%fp-12],%o3
	add %g3,-4,%g3
	ld [%g3],%o0
	mov %o7,%o1
	 
        or      %o1,%o0,%o4      
        mov     %o1,%y
        andncc  %o4,0xfff,%g0
        be      2f
        andcc   %g0,%g0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%g0,%o4
        tst     %o0
        bl,a    1f
        add     %o4,%o1,%o4
1:      mov     %o4,%g1
        b       3f 
        rd      %y,%o1
2:      clr     %g1
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%o0,%o4
        mulscc  %o4,%g0,%o4
        rd      %y,%o5
        sll     %o4,12,%o4
        srl     %o5,20,%o5
        or      %o5,%o4,%o1
3:       

	st %g1,[%fp-12]
	mov %g1,%g4
	addcc %o3,%o1,%o2
	addx %g4,%g0,%g4
	st %g4,[%fp-12]
	add %g2,-4,%g2
	ld [%g2],%o3
	sub %o3,%o2,%o1
	cmp %o3,%o2
	st %o1,[%g2]
	ld [%fp-12],%o0
	addx %g0,%o0,%o0
	addcc %l0,-1,%l0
	bne L427
	st %o0,[%fp-12]
L426:
	ld [%l2-4],%o1
	ld [%fp-12],%o0
	cmp %o1,%o0
	bgeu,a L481
	addcc %l3,-1,%l3
	mov 0,%o2
	add %o7,-1,%o7
	add %l2,%l1,%g2
	add %g2,-8,%g2
	addcc %i3,-2,%l0
	be L429
	add %l4,%l1,%g3
	add %g2,-4,%g2
L482:
	subcc %g0,%o2,%g0
	add %g3,-4,%g3
	ld [%g2],%g1
	ld [%g3],%g4
	addxcc %g1,%g4,%o0
	st %o0,[%g2]
	addx %g0,%g0,%o2
	addcc %l0,-1,%l0
	bne,a L482
	add %g2,-4,%g2
L429:
	addcc %l3,-1,%l3
L481:
	bne L408
	st %o7,[%l2-4]
L407:
	sethi %hi(_avma),%o0
	cmp %i4,-1
	be L435
	ld [%o0+%lo(_avma)],%l4
	add %i5,2,%l1
	sll %l1,2,%o0
	add %l5,%o0,%l2
	ld [%l5+4],%o0
	cmp %o0,0
	be L436
	cmp %i5,0
	b L437
	add %i5,3,%l1
L436:
	be,a L437
	st %g0,[%fp-36]
L437:
	call _cgeti,0
	mov %l1,%o0
	st %o0,[%fp-44]
	sll %l1,2,%o0
	ld [%fp-44],%g1
	addcc %l1,-2,%l0
	be L440
	add %g1,%o0,%o1
L441:
	add %o1,-4,%o1
	add %l2,-4,%l2
	ld [%l2],%o0
	addcc %l0,-1,%l0
	bne L441
	st %o0,[%o1]
L440:
	cmp %l1,2
	bgu L443
	mov 2,%o0
	ld [%fp-44],%g4
	b L435
	st %o0,[%g4+4]
L443:
	ld [%fp-44],%g1
	ld [%g1],%o0
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	ld [%fp-36],%g4
	sll %g4,24,%o0
	add %o1,%o0,%o1
	st %o1,[%g1+4]
L435:
	cmp %i4,0
	be L483
	cmp %i4,-1
	add %i5,2,%l0
	cmp %l0,%l6
	bge L484
	sll %l0,2,%o0
	ld [%l5+%o0],%o0
	cmp %o0,0
	bne L484
	cmp %l0,%l6
	add %i5,3,%l0
L448:
	cmp %l0,%l6
	bge L484
	sll %l0,2,%o0
	ld [%l5+%o0],%o0
	cmp %o0,0
	be,a L448
	add %l0,1,%l0
	cmp %l0,%l6
L484:
	bne L452
	sub %l6,%l0,%o0
	sethi %hi(_gzero),%o0
	call _icopy,0
	ld [%o0+%lo(_gzero)],%o0
	b L445
	mov %o0,%l7
L452:
	call _cgeti,0
	add %o0,2,%o0
	mov %o0,%l7
	ld [%l7],%o0
	cmp %i2,0
	bne L454
	st %o0,[%l7+4]
	cmp %l0,%l6
	bge L460
	mov 2,%l3
L458:
	sll %l3,2,%o0
	sll %l0,2,%o1
	ld [%l5+%o1],%o1
	st %o1,[%l7+%o0]
	add %l0,1,%l0
	cmp %l0,%l6
	bl L458
	add %l3,1,%l3
	b L485
	ld [%l7+4],%o0
L454:
	st %g0,[%fp-12]
	sll %l0,2,%o0
	ld [%l5+%o0],%o3
	add %l0,1,%l0
	mov 32,%o0
	sub %o0,%i2,%o0
	sll %o3,%o0,%o0
	st %o0,[%fp-12]
	srl %o3,%i2,%o2
	cmp %o2,0
	be L461
	mov %o0,%g2
	st %o2,[%l7+8]
	b L462
	mov 1,%o0
L461:
	ld [%l7],%o0
	add %o0,-1,%o0
	st %o0,[%l7+4]
	add %l7,4,%l7
	sethi %hi(_avma),%o1
	ld [%o1+%lo(_avma)],%o0
	add %o0,4,%o0
	st %o0,[%o1+%lo(_avma)]
	ld [%l7],%o0
	st %o0,[%l7+4]
	mov 0,%o0
L462:
	cmp %l0,%l6
	bge L460
	add %o0,2,%l3
	mov 32,%o0
	sub %o0,%i2,%o4
L466:
	sll %l3,2,%o2
	sll %l0,2,%o0
	ld [%l5+%o0],%o3
	sll %o3,%o4,%o1
	st %o1,[%fp-12]
	srl %o3,%i2,%o0
	add %o0,%g2,%o0
	st %o0,[%l7+%o2]
	mov %o1,%g2
	add %l0,1,%l0
	cmp %l0,%l6
	bl L466
	add %l3,1,%l3
L460:
	ld [%l7+4],%o0
L485:
	sethi %hi(-16777216),%o1
	andn %o0,%o1,%o1
	ld [%fp-28],%g1
	sll %g1,24,%o0
	add %o1,%o0,%o1
	st %o1,[%l7+4]
L445:
	cmp %i4,-1
L483:
	bne L468
	cmp %i4,0
	ld [%fp-20],%o0
	mov %l4,%o1
	b L475
	mov %l7,%o2
L468:
	be L469
	ld [%fp-20],%o0
	mov %l4,%o1
	call _gerepile,0
	mov 0,%o2
	and %o0,-4,%o0
	add %l7,%o0,%o1
	st %o1,[%i4]
	ld [%fp-44],%g4
	b L470
	add %g4,%o0,%i0
L469:
	mov %l4,%o1
	ld [%fp-44],%o2
L475:
	call _gerepile,0
	nop
	mov %o0,%i0
L470:
	ret
	restore
	.align 4
	.global _mulul3
	.proc	016
_mulul3:
	!#PROLOGUE# 0
	save %sp,-104,%sp
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
