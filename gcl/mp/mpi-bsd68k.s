#NO_APP
gcc_compiled.:
.text
	.even
.globl _mulsi
_mulsi:
	link a6,#0
	moveml #0x3f30,sp@-
	movel a6@(8),d4
	movel a6@(12),a2
	moveb a2@(4),d6
	extbl d6
	movel a2@(4),d5
	andl #65535,d5
	tstl d4
	jeq L3
	tstl d6
	jne L2
L3:
	movel _gzero,d0
	jra L1
L2:
	tstl d4
	jge L4
	negl d6
	negl d4
	jpl L4
	movel a2,sp@-
	movel #-2147483648,sp@-
	jbsr _stoi
	addqw #4,sp
	movel d0,sp@-
	jbsr _mulii
	jra L1
L4:
	movel d5,a3
	pea a3@(1)
	jbsr _cgeti
	movel d0,a1
	clrl d2
	movel d5,d0
	asll #2,d0
	addl d0,a2
	lea a1@(4,d0:l),a0
	movel d5,d3
	subql #2,d3
	jra L6
L8:
	movel d2,d0
	movel d4,d1
#APP
	mulul a2@-,d2:d1
#NO_APP
	addl d1,d0
	clrl d7
#APP
	addxl d7,d2
#NO_APP
	movel d0,a0@-
L6:
	dbra d3,L8
	clrw d3
	subql #1,d3
	jcc L8
	tstl d2
	jeq L9
	movel d2,a0@-
	movel a1@(4),d0
	clrw d0
	movel d0,a3
	lea a3@(1,d5:l),a3
	movel a3,a1@(4)
	jra L10
L9:
	addql #4,_avma
	movel a1@,d7
	subql #1,d7
	movel d7,a1@(4)
	addqw #4,a1
	movel a1@(4),d0
	clrw d0
	addl d5,d0
	movel d0,a1@(4)
L10:
	movel a1@(4),d0
	andl #16777215,d0
	movel d6,d1
	moveq #24,d7
	asll d7,d1
	addl d1,d0
	movel d0,a1@(4)
	movel a1,d0
L1:
	moveml a6@(-32),#0xcfc
	unlk a6
	rts
	.even
.globl _expi
_expi:
	link a6,#0
	movel d2,sp@-
	movel a6@(8),a0
	movel a0@(4),d0
	andl #65535,d0
	moveq #2,d2
	cmpl d0,d2
	jne L12
	movel #-8388608,d0
	jra L13
L12:
	subql #2,d0
	asll #5,d0
#APP
	bfffo a0@(8){#0:#0},d1
#NO_APP
	subl d1,d0
	subql #1,d0
L13:
	movel a6@(-4),d2
	unlk a6
	rts
	.even
.globl _addsi
_addsi:
	link a6,#0
	moveml #0x3e20,sp@-
	movel a6@(8),d3
	movel a6@(12),a2
	jne L15
	movel a2,sp@-
	jbsr _icopy
	jra L14
L15:
	moveb a2@(4),d4
	extbl d4
	jne L16
	movel d3,sp@-
	jbsr _stoi
	jra L14
L16:
	tstl d3
	jge L17
	moveq #-1,d5
	negl d3
	jpl L19
	movel a2,sp@-
	pea _MOST_NEGS
	jbsr _addii
	jra L14
L17:
	moveq #1,d5
L19:
	movel a2@(4),d2
	andl #65535,d2
	cmpl d5,d4
	jne L20
	movel d3,d1
	addl a2@(-4,d2:l:4),d3
	cmpl d3,d1
	jls L21
	moveq #1,d0
	jra L22
L21:
	clrl d0
L22:
	tstl d0
	jeq L23
	movel d2,a1
	pea a1@(1)
	jbsr _cgeti
	movel d0,a0
	movel d3,a0@(d2:l:4)
	movel d2,d0
	jra L65
L27:
	moveq #-1,d6
	cmpl a2@(-4,d0:l:4),d6
	jne L25
	clrl a0@(d0:l:4)
L65:
	subql #1,d0
	moveq #2,d6
	cmpl d0,d6
	jlt L27
L25:
	moveq #2,d6
	cmpl d0,d6
	jge L28
	movel a2@(-4,d0:l:4),d6
	addql #1,d6
	movel d6,a0@(d0:l:4)
	jra L66
L31:
	movel a2@(-4,d0:l:4),a0@(d0:l:4)
L66:
	subql #1,d0
	moveq #2,d6
	cmpl d0,d6
	jlt L31
	movel a0@,d0
	subql #1,d0
	movel d0,a0@(4)
	movel d0,a0@(8)
	addqw #4,a0
	addql #4,_avma
	jra L33
L28:
	moveq #1,d6
	movel d6,a0@(8)
	movel a0@,a0@(4)
	jra L33
L23:
	movel d2,sp@-
	jbsr _cgeti
	movel d0,a0
	movel d3,a0@(-4,d2:l:4)
	moveq #1,d0
	movel d2,d1
	subql #1,d1
	jra L34
L37:
	movel a2@(d0:l:4),a0@(d0:l:4)
	addql #1,d0
L34:
	cmpl d0,d1
	jgt L37
L33:
	movel a0@(4),d0
	andl #16777215,d0
	movel d5,d1
	jra L67
L20:
	moveq #3,d6
	cmpl d2,d6
	jne L39
	cmpl a2@(8),d3
	jcc L40
	pea 3:w
	jbsr _cgeti
	movel d0,a0
	movel d4,d0
	moveq #24,d6
	asll d6,d0
	addql #3,d0
	movel d0,a0@(4)
	movel a2@(8),d6
	subl d3,d6
	movel d6,a0@(8)
	jra L38
L40:
	cmpl a2@(8),d3
	jne L41
	movel _gzero,d0
	jra L14
L41:
	pea 3:w
	jbsr _cgeti
	movel d0,a0
	movel d4,d0
	negl d0
	moveq #24,d6
	asll d6,d0
	addql #3,d0
	movel d0,a0@(4)
	subl a2@(8),d3
	movel d3,a0@(8)
	jra L38
L39:
	movel a2@(-4,d2:l:4),d1
	movel d3,d0
	movel d1,d3
	subl d0,d3
	cmpl d1,d0
	jhi L42
	clrl d0
	jra L43
L42:
	moveq #1,d0
L43:
	tstl d0
	jeq L44
	movel d2,sp@-
	jbsr _cgeti
	movel d0,a0
	movel d3,a0@(-4,d2:l:4)
	movel d2,d0
	subql #2,d0
	tstl a2@(d0:l:4)
	jne L62
L48:
	moveq #-1,d6
	movel d6,a0@(d0:l:4)
	subql #1,d0
	tstl a2@(d0:l:4)
	jeq L48
L62:
	movel a2@(d0:l:4),d1
	subql #1,d1
	movel d1,a0@(d0:l:4)
	moveq #2,d6
	cmpl d0,d6
	jlt L50
	tstl d1
	jeq L49
L50:
	subql #1,d0
	tstl d0
	jle L38
L54:
	movel a2@(d0:l:4),a0@(d0:l:4)
	subql #1,d0
	tstl d0
	jgt L54
	jra L38
L49:
	movel a0@,d0
	subql #1,d0
	movel d0,a0@(4)
	movel d0,a0@(8)
	addqw #4,a0
	addql #4,_avma
	movel a0@(4),d0
	andl #16777215,d0
	movel d4,d1
L67:
	moveq #24,d6
	asll d6,d1
	addl d1,d0
	movel d0,a0@(4)
	jra L38
L44:
	movel d2,sp@-
	jbsr _cgeti
	movel d0,a0
	movel d3,a0@(-4,d2:l:4)
	moveq #1,d0
	movel d2,d1
	subql #1,d1
	jra L57
L60:
	movel a2@(d0:l:4),a0@(d0:l:4)
	addql #1,d0
L57:
	cmpl d0,d1
	jgt L60
L38:
	movel a0,d0
L14:
	moveml a6@(-24),#0x47c
	unlk a6
	rts
	.even
.globl _addii
_addii:
	link a6,#-4
	moveml #0x3f3c,sp@-
	movel a6@(8),a5
	movel a6@(12),a6@(-4)
	movel a5@(4),d4
	andl #65535,d4
	movel a6@(-4),a4
	movel a4@(4),d5
	andl #65535,d5
	cmpl d4,d5
	jle L69
	movel a5,a3
	movel a6@(-4),a5
	movel a3,a6@(-4)
	movel d4,d6
	movel d5,d4
	movel d6,d5
L69:
	movel a6@(-4),a4
	moveb a4@(4),d7
	extbl d7
	movel d7,a2
	tstl a2
	jne L70
	movel a5,sp@-
	jbsr _icopy
	jra L68
L70:
	moveb a5@(4),d6
	extbl d6
	cmpl d6,a2
	jne L71
	movel d4,a4
	pea a4@(1)
	jbsr _cgeti
	movel d0,a3
	clrl d1
	movel d4,d0
	asll #2,d0
	lea a3@(4,d0:l),a2
	lea a5@(0,d0:l),a1
	movel a6@(-4),a4
	lea a4@(d5:l:4),a0
	movel d5,d2
	subql #2,d2
L72:
#APP
	addl #-1,d1
#NO_APP
	moveq #16,d7
	cmpl d7,d2
	jhi L77
LI94:
	movew pc@(L94-LI94-2:b,d2:l:2),d7
	jmp pc@(2,d7:w)
L94:
	.word L93-L94
	.word L92-L94
	.word L91-L94
	.word L90-L94
	.word L89-L94
	.word L88-L94
	.word L87-L94
	.word L86-L94
	.word L85-L94
	.word L84-L94
	.word L83-L94
	.word L82-L94
	.word L81-L94
	.word L80-L94
	.word L79-L94
	.word L78-L94
	.word L77-L94
L77:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L78:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L79:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L80:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L81:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L82:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L83:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L84:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L85:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L86:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L87:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L88:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L89:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L90:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L91:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L92:
	movel a1@-,d7
	movel a0@-,d3
#APP
	addxl d3,d7
#NO_APP
	movel d7,a2@-
L93:
#APP
	clrl d1
	addxl d1,d1
#NO_APP
	moveq #-16,d7
	addl d7,d2
	tstl d2
	jgt L72
	tstl d1
	jeq L95
	movel a5,d0
	addql #8,d0
L96:
	subqw #4,a1
	movel a1,a0
	cmpl a1,d0
	jhi L97
	moveq #-1,d7
	cmpl a1@,d7
	jne L98
	clrl a2@-
	jra L96
L98:
	movel a0@,d7
	addql #1,d7
	movel d7,a2@-
	jra L100
L102:
	movel a0@,a2@-
L100:
	subqw #4,a1
	movel a1,a0
	cmpl a1,d0
	jls L102
	jra L160
L97:
	moveq #1,d7
	movel d7,a3@(8)
	movel a5@(4),d7
	addql #1,d7
	movel d7,a3@(4)
	jra L108
L95:
	movel d4,d1
	subl d5,d1
	jra L105
L107:
	movel a1@-,a2@-
L105:
	dbra d1,L107
	clrw d1
	subql #1,d1
	jcc L107
L160:
	movel a3@,d7
	subql #1,d7
	movel d7,a3@(4)
	movel a5@(4),a3@(8)
	addqw #4,a3
	addql #4,_avma
	jra L108
L71:
	cmpl d4,d5
	jne L109
	movel d4,d1
	subql #2,d1
	lea a5@(8),a1
	movel a6@(-4),a0
	addqw #8,a0
	jra L110
L116:
	movel a1@+,d2
	movel a0@+,d0
	cmpl d0,d2
	jcc L112
	movel a5,a3
	movel a6@(-4),a5
	movel a3,a6@(-4)
	movel a2,d6
	jra L109
L112:
	cmpl d2,d0
	jcs L109
L110:
	dbra d1,L116
	clrw d1
	subql #1,d1
	jcc L116
	movel _gzero,d0
	jra L68
L109:
	movel d4,sp@-
	jbsr _cgeti
	movel d0,a3
	clrl d1
	movel d4,d0
	asll #2,d0
	lea a5@(0,d0:l),a1
	movel a6@(-4),a4
	lea a4@(d5:l:4),a0
	lea a3@(0,d0:l),a2
	movel d5,d2
	subql #2,d2
L118:
#APP
	addl #-1,d1
#NO_APP
	moveq #16,d7
	cmpl d7,d2
	jhi L123
LI140:
	movew pc@(L140-LI140-2:b,d2:l:2),d7
	jmp pc@(2,d7:w)
L140:
	.word L139-L140
	.word L138-L140
	.word L137-L140
	.word L136-L140
	.word L135-L140
	.word L134-L140
	.word L133-L140
	.word L132-L140
	.word L131-L140
	.word L130-L140
	.word L129-L140
	.word L128-L140
	.word L127-L140
	.word L126-L140
	.word L125-L140
	.word L124-L140
	.word L123-L140
L123:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L124:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L125:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L126:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L127:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L128:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L129:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L130:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L131:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L132:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L133:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L134:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L135:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L136:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L137:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L138:
	movel a1@-,d7
	movel a0@-,d3
#APP
	subxl d3,d7
#NO_APP
	movel d7,a2@-
L139:
#APP
	clrl d1
	addxl d1,d1
#NO_APP
	moveq #-16,d7
	addl d7,d2
	tstl d2
	jgt L118
	tstl d1
	jeq L141
	jra L142
L144:
	moveq #-1,d7
	movel d7,a2@-
L142:
	movel a1@-,d0
	jeq L144
	movel a5,d1
	addql #8,d1
	cmpl a1,d1
	jhi L149
	subql #1,d0
	movel d0,a2@-
	jra L146
L148:
	movel a0@,a2@-
L146:
	subqw #4,a1
	movel a1,a0
	cmpl a1,d1
	jls L148
	jra L149
L141:
	movel d4,d2
	subl d5,d2
	jra L150
L152:
	movel a1@-,a2@-
L150:
	dbra d2,L152
	clrw d2
	subql #1,d2
	jcc L152
L149:
	tstl a3@(8)
	jeq L153
	movel a5@(4),a3@(4)
	jra L108
L153:
	lea a3@(12),a2
	tstl a2@
	jne L159
L157:
	addqw #4,a2
	tstl a2@
	jeq L157
L159:
	subqw #8,a2
	movel a2,d2
	subl a3,d2
	jpl L158
	addql #3,d2
L158:
	asrl #2,d2
	movel a3@,d0
	subl d2,d0
	movel d0,a2@
	movel d0,a2@(4)
	movel a2,a3
	movel a3@(4),d0
	andl #16777215,d0
	movel d6,d1
	moveq #24,d7
	asll d7,d1
	addl d1,d0
	movel d0,a3@(4)
	movel d2,d0
	asll #2,d0
	addl d0,_avma
L108:
	movel a3,d0
L68:
	moveml a6@(-44),#0x3cfc
	unlk a6
	rts
	.even
.globl _mulss
_mulss:
	link a6,#0
	moveml #0x3c00,sp@-
	movel a6@(8),d0
	movel a6@(12),d2
	tstl d0
	jeq L163
	tstl d2
	jne L162
L163:
	movel _gzero,d0
	jra L161
L162:
	moveq #1,d4
	tstl d0
	jge L164
	moveq #-1,d4
	negl d0
	jpl L164
	movel d0,sp@-
	jbsr _stoi
	movel d0,sp@-
	movel d2,sp@-
	jbsr _mulsi
	jra L161
L164:
	tstl d2
	jge L166
	negl d4
	negl d2
	jpl L166
	pea _ABS_MOST_NEGS
	tstl d4
	jgt L169
	negl d0
L169:
	movel d0,sp@-
	jbsr _mulsi
	jra L161
L166:
#APP
	mulul d2,d3:d0
#NO_APP
	movel d0,d2
	tstl d3
	jeq L170
	pea 4:w
	jbsr _cgeti
	movel d0,a0
	movel d3,a0@(8)
	movel d2,a0@(12)
	jra L171
L170:
	pea 3:w
	jbsr _cgeti
	movel d0,a0
	movel d2,a0@(8)
L171:
	movel a0@,a0@(4)
	movel a0@(4),d0
	andl #16777215,d0
	movel d4,d1
	moveq #24,d5
	asll d5,d1
	addl d1,d0
	movel d0,a0@(4)
	movel a0,d0
L161:
	moveml a6@(-16),#0x3c
	unlk a6
	rts
	.even
.globl _mulii
_mulii:
	link a6,#-8
	moveml #0x3f3c,sp@-
	movel a6@(8),a3
	movel a6@(12),d7
	movel a3@(4),d5
	andl #65535,d5
	movel d7,a5
	movel a5@(4),d6
	andl #65535,d6
	movel d6,a6@(-4)
	moveb a3@(4),d2
	extbl d2
	jeq L188
	movel d7,a5
	moveb a5@(4),d0
	extbl d0
	jne L174
L188:
	movel _gzero,d0
	jra L172
L174:
	tstl d0
	jge L175
	negl d2
L175:
	cmpl a6@(-4),d5
	jle L176
	movel a3,a2
	movel d7,a3
	movel a2,d7
	movel d5,a4
	movel a6@(-4),d5
	movel a4,a6@(-4)
L176:
	movel a6@(-4),a5
	lea a5@(-2,d5:l),a4
	cmpl #65535,a4
	jle L177
	pea 17:w
	jbsr _err
	addqw #4,sp
L177:
	movel a4,sp@-
	jbsr _cgeti
	movel d0,a2
	movel a2@,a2@(4)
	movel a2@(4),d0
	andl #16777215,d0
	movel d2,d1
	moveq #24,d6
	asll d6,d1
	addl d1,d0
	movel d0,a2@(4)
	lea a3@(d5:l:4),a5
	movel a5,a6@(-8)
	movel a6@(-8),a5
	subqw #4,a5
	movel a5,a6@(-8)
	movel a5@,d4
	clrl d2
	movel a6@(-4),d3
	subql #2,d3
	movel d7,a5
	movel a6@(-4),d6
	lea a5@(d6:l:4),a1
	lea a2@(a4:l:4),a3
	jra L178
L180:
	movel d2,d0
	movel d4,d1
#APP
	mulul a1@-,d2:d1
#NO_APP
	addl d1,d0
	clrl d6
#APP
	addxl d6,d2
#NO_APP
	movel d0,a3@-
L178:
	dbra d3,L180
	clrw d3
	subql #1,d3
	jcc L180
	movel d2,a3@-
	lea a2@(a4:l:4),a3
	movel d7,a5
	movel a6@(-4),d6
	lea a5@(d6:l:4),a4
	subql #2,a6@(-4)
	subql #2,d5
	clrl d7
	jra L181
L186:
	movel a6@(-8),a5
	subqw #4,a5
	movel a5,a6@(-8)
	movel a5@,d4
	movel a6@(-4),d3
	movel a4,a1
	lea a3@(-4),a0
	movel a0,a3
	clrl d1
	jra L183
L185:
	movel a1@-,d0
#APP
	mulul d4,d2:d0
#NO_APP
	addl a0@-,d0
#APP
	addxl d7,d2
#NO_APP
	addl d1,d0
#APP
	addxl d7,d2
#NO_APP
	movel d0,a0@
	movel d2,d1
L183:
	dbra d3,L185
	clrw d3
	subql #1,d3
	jcc L185
	movel d2,a0@-
L181:
	subql #1,d5
	tstl d5
	jgt L186
	tstl a2@(8)
	jne L187
	movel a2@(4),d6
	subql #1,d6
	movel d6,a2@(8)
	movel a2@,d6
	subql #1,d6
	movel d6,a2@(4)
	addqw #4,a2
	addql #4,_avma
L187:
	movel a2,d0
L172:
	moveml a6@(-48),#0x3cfc
	unlk a6
	rts
	.even
.globl _confrac
_confrac:
	link a6,#-8
	moveml #0x3f3c,sp@-
	movel a6@(8),a5
	movel a5@,d7
	andl #65535,d7
	movel d7,a6@(-8)
	movel a5@(4),d5
	andl #16777215,d5
	addl #-8388608,d5
	moveq #-1,d7
	subl d5,d7
	movel d7,d5
	movel _avma,a6@(-4)
	movel a6@(-8),a4
	subqw #2,a4
	movel a4,d7
	asll #5,d7
	movel d7,a4
	addl d5,a4
	lea a4@(63),a3
	movel a3,d7
	asrl #5,d7
	movel d7,a3
	movel a3,sp@-
	jbsr _cgeti
	movel d0,a2
	movel d5,d0
	asrl #5,d0
	clrl d3
	addqw #4,sp
	cmpl d3,d0
	jle L216
L193:
	clrl a2@(d3:l:4)
	addql #1,d3
	cmpl d3,d0
	jgt L193
L216:
	moveq #31,d7
	andl d7,d5
	jne L194
	moveq #2,d4
	cmpl a6@(-8),d4
	jge L199
L198:
	movel a5@(d4:l:4),a2@(d3:l:4)
	addql #1,d3
	addql #1,d4
	cmpl a6@(-8),d4
	jlt L198
	jra L199
L194:
	clrl d6
	moveq #2,d4
	cmpl a6@(-8),d4
	jge L214
	moveq #32,d7
	subl d5,d7
	movel d7,a0
L203:
	movel d3,d0
	movel a5@(d4:l:4),d2
	addql #1,d3
	movel d2,d1
	lsrl d5,d1
	addl d6,d1
	movel d1,a2@(d0:l:4)
	movel d2,d6
	movel a0,d7
	lsll d7,d6
	addql #1,d4
	cmpl a6@(-8),d4
	jlt L203
L214:
	movel d6,a2@(-8,a3:l:4)
L199:
	clrl a2@(-4,a3:l:4)
	movel a4,d7
	fmovel d7,fp0
	fmuld #0r.30102999999999999758,fp0
	fmovecr #0x32,fp1
	faddx fp1,fp0
	fintrzx fp0,fp0
	fmovel fp0,d2
	moveq #17,d5
	addl d2,d5
	moveq #9,d7
	divsl d7,d5
	movel d5,sp@-
	jbsr _cgeti
	movel d0,a0
	movel d2,a0@
	moveq #1,d4
	cmpl d4,d5
	jle L213
	movel #1000000000,d6
L211:
	clrl d1
	movel a3,d3
	jra L217
L210:
	movel d1,d2
	movel a2@(d3:l:4),d0
#APP
	mulul d6,d1:d0
#NO_APP
	addl d2,d0
	clrl d7
#APP
	addxl d7,d1
#NO_APP
	movel d0,a2@(d3:l:4)
L217:
	subql #1,d3
	jpl L210
	movel d1,a0@(d4:l:4)
	addql #1,d4
	cmpl d4,d5
	jgt L211
L213:
	movel a6@(-4),_avma
	movel a0,d0
	moveml a6@(-48),#0x3cfc
	unlk a6
	rts
	.even
.globl _divss
_divss:
	link a6,#0
	moveml #0x3820,sp@-
	movel a6@(8),d4
	movel a6@(12),d3
	jne L219
	pea 23:w
	jbsr _err
	addqw #4,sp
L219:
	cmpl #-2147483648,d4
	jne L220
	movel d3,sp@-
	movel d4,sp@-
	jbsr _stoi
	addqw #4,sp
	movel d0,sp@-
	jbsr _divis
	jra L218
L220:
	clrl _hiremainder
	movel d4,sp@-
	lea _abs,a2
	jbsr a2@
	movel d0,d2
	movel d3,sp@-
	jbsr a2@
	movel _hiremainder,d1
#APP
	divul d0,d1:d2
#NO_APP
	movel d1,_hiremainder
	movel d2,d0
	addqw #8,sp
	tstl d3
	jge L221
	negl _hiremainder
	negl d0
L221:
	tstl d4
	jge L222
	negl d0
L222:
	movel d0,sp@-
	jbsr _stoi
L218:
	moveml a6@(-16),#0x41c
	unlk a6
	rts
	.even
.globl _modss
_modss:
	link a6,#0
	moveml #0x3820,sp@-
	movel a6@(8),d2
	movel a6@(12),d4
	jne L224
	pea 38:w
	jbsr _err
	addqw #4,sp
L224:
	cmpl #-2147483648,d2
	jne L225
	movel d4,sp@-
	movel d2,sp@-
	jbsr _stoi
	addqw #4,sp
	movel d0,sp@-
	jbsr _modis
	jra L223
L225:
	clrl d3
	movel d2,sp@-
	lea _abs,a2
	jbsr a2@
	movel d0,d2
	movel d4,sp@-
	jbsr a2@
#APP
	divul d0,d3:d2
#NO_APP
	addqw #8,sp
	tstl d3
	jne L226
	movel _gzero,d0
	jra L223
L226:
	tstl d3
	jge L227
	subl d3,d0
	movel d0,sp@-
	jra L229
L227:
	movel d3,sp@-
L229:
	jbsr _stoi
L223:
	moveml a6@(-16),#0x41c
	unlk a6
	rts
	.even
.globl _resss
_resss:
	link a6,#0
	moveml #0x3820,sp@-
	movel a6@(12),d4
	jne L231
	pea 40:w
	jbsr _err
	addqw #4,sp
L231:
	clrl d3
	movel a6@(8),sp@-
	lea _abs,a2
	jbsr a2@
	movel d0,d2
	movel d4,sp@-
	jbsr a2@
#APP
	divul d0,d3:d2
#NO_APP
	addqw #8,sp
	tstl d4
	jge L232
	negl d3
L232:
	movel d3,sp@-
	jbsr _stoi
	moveml a6@(-16),#0x41c
	unlk a6
	rts
	.even
.globl _divsi
_divsi:
	link a6,#0
	moveml #0x3820,sp@-
	movel a6@(8),d3
	movel a6@(12),a2
	moveb a2@(4),d0
	extbl d0
	movel a2@(4),d2
	andl #65535,d2
	tstl d0
	jne L235
	pea 24:w
	jbsr _err
	addqw #4,sp
L235:
	tstl d3
	jeq L237
	moveq #3,d4
	cmpl d2,d4
	jlt L237
	tstl a2@(8)
	jge L236
L237:
	movel d3,_hiremainder
	movel _gzero,d0
	jra L234
L236:
	cmpl #-2147483648,d3
	jne L238
	clrl sp@-
	movel a2,sp@-
	movel d3,sp@-
	jbsr _stoi
	addqw #4,sp
	movel d0,sp@-
	jbsr _dvmdii
	jra L234
L238:
	clrl _hiremainder
	movel d3,sp@-
	jbsr _abs
	movel _hiremainder,d4
#APP
	divul a2@(8),d4:d0
#NO_APP
	movel d4,_hiremainder
	movel d0,d1
	moveb a2@(4),d0
	extbl d0
	addqw #4,sp
	jpl L239
	negl _hiremainder
	negl d1
L239:
	tstl d3
	jge L240
	negl d1
L240:
	movel d1,sp@-
	jbsr _stoi
L234:
	moveml a6@(-16),#0x41c
	unlk a6
	rts
	.even
.globl _divis
_divis:
	link a6,#0
	moveml #0x3f30,sp@-
	movel a6@(8),a2
	movel a6@(12),d3
	moveb a2@(4),d7
	extbl d7
	movel a2@(4),d6
	andl #65535,d6
	tstl d3
	jne L242
	pea 26:w
	jbsr _err
	addqw #4,sp
L242:
	tstl d7
	jne L243
	clrl _hiremainder
	movel _gzero,d0
	jra L241
L243:
	tstl d3
	jge L244
	negl d7
	negl d3
	jpl L244
	clrl sp@-
	movel d3,sp@-
	jbsr _stoi
	addqw #4,sp
	movel d0,sp@-
	movel a2,sp@-
	jbsr _dvmdii
	jra L241
L244:
	cmpl a2@(8),d3
	jls L246
	moveq #3,d5
	cmpl d6,d5
	jne L247
	movel a2,sp@-
	jbsr _itos
	movel d0,_hiremainder
	movel _gzero,d0
	jra L241
L247:
	movel d6,a1
	pea a1@(-1)
	jbsr _cgeti
	movel d0,a0
	movew #1,a3
	movel a2@(8),d4
	jra L249
L246:
	movel d6,sp@-
	jbsr _cgeti
	movel d0,a0
	subl a3,a3
	clrl d4
L249:
	movel a3,d2
	addql #2,d2
	cmpl d2,d6
	jle L256
L253:
	movel d2,d1
	subl a3,d1
	movel a2@(d2:l:4),d0
#APP
	divul d3,d4:d0
#NO_APP
	movel d0,a0@(d1:l:4)
	addql #1,d2
	cmpl d2,d6
	jgt L253
L256:
	movel a0@,a0@(4)
	movel a0@(4),d0
	andl #16777215,d0
	movel d7,d1
	moveq #24,d5
	asll d5,d1
	addl d1,d0
	movel d0,a0@(4)
	tstl d7
	jge L254
	movel d4,d0
	negl d0
	jra L255
L254:
	movel d4,d0
L255:
	movel d0,_hiremainder
	movel a0,d0
L241:
	moveml a6@(-32),#0xcfc
	unlk a6
	rts
	.even
.globl _dvmdii
_dvmdii:
	link a6,#-60
	moveml #0x3f3c,sp@-
	movel a6@(8),a4
	moveb a4@(4),d6
	extbl d6
	movel d6,a6@(-24)
	movel a6@(12),a1
	moveb a1@(4),d6
	extbl d6
	movel d6,a6@(-28)
	jne L258
	pea 36:w
	jbsr _err
	addqw #4,sp
L258:
	tstl a6@(-24)
	jne L259
	moveq #-1,d6
	cmpl a6@(16),d6
	jeq L361
	tstl a6@(16)
	jeq L361
	movel a6@(16),a1
	movel _gzero,a1@
L361:
	movel _gzero,d0
	jra L257
L259:
	movel a4@(4),d6
	andl #65535,d6
	movel d6,a6@(-8)
	movel a6@(12),a1
	movel a1@(4),d6
	andl #65535,d6
	movel d6,a6@(-12)
	movel a6@(-8),d6
	subl a6@(-12),d6
	movel d6,a6@(-16)
	jge L262
	moveq #-1,d6
	cmpl a6@(16),d6
	jne L263
	movel a4,sp@-
	jbsr _icopy
	jra L257
L263:
	tstl a6@(16)
	jeq L361
	movel a4,sp@-
	jbsr _icopy
	movel a6@(16),a1
	movel d0,a1@
	jra L361
L262:
	movel _avma,a6@(-4)
	tstl a6@(-24)
	jge L265
	negl a6@(-28)
L265:
	moveq #3,d6
	cmpl a6@(-12),d6
	jne L266
	movel a6@(12),a1
	movel a1@(8),a6@(-60)
	lea a4@(8),a3
	movel a6@(-60),d6
	cmpl a4@(8),d6
	jls L267
	movel a6@(-8),d2
	subql #1,d2
	movel a3@+,d5
	jra L268
L267:
	movel a6@(-8),d2
	clrl d5
L268:
	movel d2,sp@-
	jbsr _cgeti
	movel d0,a6@(-36)
	movel d2,d7
	subql #2,d7
	movel d0,a2
	addqw #8,a2
	addqw #4,sp
	jra L269
L271:
	movel a3@+,d0
#APP
	divul a6@(-60),d5:d0
#NO_APP
	movel d0,a2@+
L269:
	dbra d7,L271
	clrw d7
	subql #1,d7
	jcc L271
	moveq #-1,d6
	cmpl a6@(16),d6
	jne L272
	movel a6@(-4),_avma
	tstl d5
	jeq L361
	pea 3:w
	jbsr _cgeti
	movel d0,a6@(-40)
	movel a6@(-24),d0
	moveq #24,d6
	asll d6,d0
	movel a6@(-40),a1
	addql #3,d0
	movel d0,a1@(4)
	movel d5,a1@(8)
	movel a1,d0
	jra L257
L272:
	moveq #2,d6
	cmpl d2,d6
	jeq L274
	movel a6@(-36),a1
	movel a1@,a1@(4)
	movel a1@(4),d0
	andl #16777215,d0
	movel a6@(-28),d1
	moveq #24,d6
	asll d6,d1
	addl d1,d0
	movel d0,a1@(4)
	jra L275
L274:
	movel a6@(-4),_avma
	movel _gzero,a6@(-36)
L275:
	tstl a6@(16)
	jne L276
L359:
	movel a6@(-36),d0
	jra L257
L276:
	tstl d5
	jne L277
	movel a6@(16),a1
	movel _gzero,a1@
	jra L359
L277:
	pea 3:w
	jbsr _cgeti
	movel d0,a6@(-40)
	movel a6@(-24),d0
	moveq #24,d6
	asll d6,d0
	movel a6@(-40),a1
	addql #3,d0
	movel d0,a1@(4)
	movel d5,a1@(8)
	movel a6@(16),a1
	movel a6@(-40),a1@
	jra L359
L266:
	movel a6@(-8),sp@-
	lea _cgeti,a3
	jbsr a3@
	movel d0,a6@(-36)
	movel a6@(12),a1
#APP
	bfffo a1@(8){#0:#0},d6
#NO_APP
	movel d6,a6@(-20)
	addqw #4,sp
	jeq L280
	movel a1,a2
	addqw #8,a2
	movel a6@(-12),sp@-
	jbsr a3@
	movel d0,a6@(-40)
	movel a2@+,d1
	moveq #32,d0
	subl d6,d0
	movel d1,d5
	lsrl d0,d5
	lsll d6,d1
	movel d1,a6@(-56)
	movel a6@(-40),a0
	addqw #8,a0
	movel a6@(-12),d7
	subql #3,d7
	addqw #4,sp
	moveq #32,d0
	subl d6,d0
	jra L281
L283:
	movel a2@+,d1
	movel d1,d5
	lsrl d0,d5
	movel a6@(-56),d6
	addl d5,d6
	movel d6,a0@+
	movel a6@(-20),d6
	lsll d6,d1
	movel d1,a6@(-56)
L281:
	dbra d7,L283
	clrw d7
	subql #1,d7
	jcc L283
	movel a6@(-56),a0@
	clrl a6@(-56)
	lea a4@(8),a3
	movel a6@(-36),a2
	addqw #4,a2
	movel a6@(-8),d7
	subql #2,d7
	moveq #32,d0
	subl a6@(-20),d0
	jra L284
L286:
	movel a3@+,d1
	movel d1,d5
	lsrl d0,d5
	movel a6@(-56),d6
	addl d5,d6
	movel d6,a2@+
	movel a6@(-20),d6
	lsll d6,d1
	movel d1,a6@(-56)
L284:
	dbra d7,L286
	clrw d7
	subql #1,d7
	jcc L286
	movel a6@(-56),a2@
	jra L287
L280:
	lea a4@(8),a3
	movel a6@(-36),a2
	addqw #4,a2
	clrl a2@+
	movel a6@(-8),d4
	subql #2,d4
	jra L288
L290:
	movel a3@+,a2@+
L288:
	dbra d4,L290
	clrw d4
	subql #1,d4
	jcc L290
	movel a6@(12),a6@(-40)
L287:
	movel a6@(-40),a1
	movel a1@(8),a6@(-60)
	movel a1@(12),a6@(-32)
	movel a6@(-36),a2
	addqw #4,a2
	movel a6@(-16),d7
	addql #1,d7
	movel a6@(-12),d6
	asll #2,d6
	movel d6,a6@(-52)
	jra L291
L322:
	movel a2@+,d6
	cmpl a6@(-60),d6
	jne L293
	movew #-1,a4
	movel a6@(-60),d1
	movel d1,d3
	addl a2@,d3
	cmpl d3,d1
	jls L294
	moveq #1,d2
	jra L295
L294:
	clrl d2
L295:
	movel d3,a6@(-56)
	jra L296
L293:
	movel a2@,d0
	movel a2@(-4),d5
#APP
	divul a6@(-60),d5:d0
#NO_APP
	movel d0,a4
	clrl d2
	movel d5,a6@(-56)
L296:
	tstl d2
	jne L297
	movel a4,d0
#APP
	mulul a6@(-32),d5:d0
#NO_APP
	movel d0,d1
	movel a2@(4),d0
	movel d1,d3
	subl d0,d3
	cmpl d1,d0
	jhi L298
	clrl d2
	jra L299
L298:
	moveq #1,d2
L299:
	movel d3,a0
	movel d5,d1
	movel a6@(-56),d0
	movel d5,d3
	subl a6@(-56),d3
	subl d2,d3
	cmpl a6@(-56),d5
	jcs L362
	jra L308
L312:
	tstl d4
	jeq L297
	subqw #1,a4
	movel a0,d1
	movel a6@(-32),d0
	movel d1,d3
	subl d0,d3
	cmpl d1,d0
	jhi L306
	clrl d2
	jra L307
L306:
	moveq #1,d2
L307:
	movel d3,a0
	movel d4,d1
	movel a6@(-60),d0
	movel d1,d3
	subl d0,d3
	subl d2,d3
	cmpl d0,d1
	jcc L308
L362:
	moveq #1,d2
	jra L309
L308:
	cmpl d0,d1
	jls L309
	clrl d2
L309:
	movel d3,d4
	tstl d2
	jeq L312
L297:
	clrl d5
	movel a6@(-12),d4
	subql #2,d4
	movel a6@(-52),d6
	lea a2@(-8,d6:l),a0
	movel a6@(-40),d6
	addl a6@(-52),d6
	movel d6,a6@(-56)
	jra L313
L317:
	movel d5,d1
	movel a6@(-56),a1
	subqw #4,a1
	movel a1,a6@(-56)
	movel a4,d0
#APP
	mulul a1@,d5:d0
#NO_APP
	movel d0,d3
	movel d1,d0
	addl d3,d0
	clrl d6
#APP
	addxl d6,d5
#NO_APP
	movel d0,d2
	subqw #4,a0
	movel a0,a3
	movel a0@,d1
	movel d1,d3
	subl d2,d3
	cmpl d1,d2
	jhi L315
	clrl d2
	jra L316
L315:
	moveq #1,d2
L316:
	movel d3,a3@
	addl d2,d5
L313:
	dbra d4,L317
	clrw d4
	subql #1,d4
	jcc L317
	cmpl a2@(-4),d5
	jls L318
	clrl d2
	subqw #1,a4
	movel a6@(-12),d4
	subql #2,d4
	movel a6@(-52),d6
	lea a2@(-8,d6:l),a0
	movel a6@(-40),d6
	addl a6@(-52),d6
	movel d6,a6@(-56)
	jra L319
L321:
#APP
	addl #-1,d2
#NO_APP
	movel a6@(-56),a1
	subqw #4,a1
	movel a1,a6@(-56)
	movel a0@-,d0
	movel a1@,d6
#APP
	addxl d6,d0
#NO_APP
	movel d0,a0@
#APP
	clrl d2
	addxl d2,d2
#NO_APP
L319:
	dbra d4,L321
	clrw d4
	subql #1,d4
	jcc L321
L318:
	movel a4,a2@(-4)
L291:
	dbra d7,L322
	clrw d7
	subql #1,d7
	jcc L322
	movel _avma,d3
	moveq #-1,d6
	cmpl a6@(16),d6
	jeq L323
	movel a6@(-16),d2
	addql #2,d2
	movel a6@(-36),a1
	lea a1@(d2:l:4),a2
	tstl a1@(4)
	jeq L324
	addql #1,d2
	jra L325
L324:
	tstl a6@(-16)
	jne L325
	clrl a6@(-28)
L325:
	movel d2,sp@-
	jbsr _cgeti
	movel d0,a6@(-44)
	movel d0,a1
	lea a1@(d2:l:4),a0
	movel d2,d4
	subql #2,d4
	addqw #4,sp
	jra L327
L329:
	movel a2@-,a0@-
L327:
	dbra d4,L329
	clrw d4
	subql #1,d4
	jcc L329
	moveq #2,d6
	cmpl d2,d6
	jcs L330
	movel a6@(-44),a1
	moveq #2,d6
	movel d6,a1@(4)
	jra L323
L330:
	movel a6@(-44),a1
	movel a1@,a1@(4)
	movel a1@(4),d0
	andl #16777215,d0
	movel a6@(-28),d1
	moveq #24,d6
	asll d6,d1
	addl d1,d0
	movel d0,a1@(4)
L323:
	tstl a6@(16)
	jeq L332
	movel a6@(-16),d4
	addql #2,d4
	cmpl a6@(-8),d4
	jge L334
L336:
	movel a6@(-36),a1
	tstl a1@(d4:l:4)
	jne L334
	addql #1,d4
	cmpl a6@(-8),d4
	jlt L336
L334:
	cmpl a6@(-8),d4
	jne L337
	movel _gzero,sp@-
	jbsr _icopy
	movel d0,a6@(-48)
	addqw #4,sp
	jra L332
L337:
	movel a6@(-8),a0
	subl d4,a0
	pea a0@(2)
	jbsr _cgeti
	movel d0,a6@(-48)
	movel d0,a1
	movel a1@,a1@(4)
	addqw #4,sp
	tstl a6@(-20)
	jne L339
	moveq #2,d7
	cmpl a6@(-8),d4
	jge L344
L343:
	movel a6@(-48),a1
	movel a6@(-36),a5
	movel a5@(d4:l:4),a1@(d7:l:4)
	addql #1,d4
	addql #1,d7
	cmpl a6@(-8),d4
	jlt L343
	jra L344
L339:
	movel a6@(-36),a1
	movel a1@(d4:l:4),d1
	addql #1,d4
	moveq #32,d0
	subl a6@(-20),d0
	movel d1,d2
	movel a6@(-20),d6
	lsrl d6,d2
	lsll d0,d1
	movel d1,a6@(-56)
	tstl d2
	jeq L345
	movel a6@(-48),a1
	movel d2,a1@(8)
	moveq #1,d0
	jra L346
L345:
	movel a6@(-48),a1
	movel a1@,d6
	subql #1,d6
	movel d6,a1@(4)
	addql #4,a6@(-48)
	addql #4,_avma
	movel a6@(-48),a1
	movel a1@,a1@(4)
	clrl d0
L346:
	movel d0,d7
	addql #2,d7
	cmpl a6@(-8),d4
	jge L344
	moveq #32,d2
	subl a6@(-20),d2
L350:
	movel a6@(-36),a1
	movel a1@(d4:l:4),d1
	movel d1,d0
	movel a6@(-20),d6
	lsrl d6,d0
	movel a6@(-48),a1
	addl a6@(-56),d0
	movel d0,a1@(d7:l:4)
	lsll d2,d1
	movel d1,a6@(-56)
	addql #1,d4
	addql #1,d7
	cmpl a6@(-8),d4
	jlt L350
L344:
	movel a6@(-48),a1
	movel a1@(4),d0
	andl #16777215,d0
	movel a6@(-24),d1
	moveq #24,d6
	asll d6,d1
	addl d1,d0
	movel d0,a1@(4)
L332:
	moveq #-1,d6
	cmpl a6@(16),d6
	jne L351
	movel a6@(-48),sp@-
	jra L360
L351:
	tstl a6@(16)
	jne L352
	movel a6@(-44),sp@-
L360:
	movel d3,sp@-
	movel a6@(-4),sp@-
	jbsr _gerepile
	jra L257
L352:
	clrl sp@-
	movel d3,sp@-
	movel a6@(-4),sp@-
	jbsr _gerepile
	moveq #-4,d6
	andl d6,d0
	movel a6@(16),a1
	movel a6@(-48),d6
	addl d0,d6
	movel d6,a1@
	addl a6@(-44),d0
L257:
	moveml a6@(-100),#0x3cfc
	unlk a6
	rts
	.even
.globl _mulul3
_mulul3:
	link a6,#0
	movel a6@(16),a0
	movel a6@(8),d0
	movel a0@,d1
#APP
	mulul a6@(12),d1:d0
#NO_APP
	movel d1,a0@
	unlk a6
	rts
	.even
.globl _divul3
_divul3:
	link a6,#0
	movel a6@(16),a0
	movel a6@(8),d0
	movel a0@,d1
#APP
	divul a6@(12),d1:d0
#NO_APP
	movel d1,a0@
	unlk a6
	rts
.comm _in_saved_avma,4
