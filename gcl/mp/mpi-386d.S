# 1 "../mp/mpi-386d.S"
 

# 11 "../mp/mpi-386d.S"











# 30 "../mp/mpi-386d.S"

















	.file	"mpi.c"
gcc2_compiled.:
___gnu_compiled_c:
.text
	.align 4
.globl _mulsi   ; .align 4,0x90 		; _mulsi:  
	pushl %ebp
	movl %esp,%ebp
	subl $20,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 12(%ebp),%ebx
	movl 4(%ebx),%ecx
	sarl $24,%ecx
	movl %ecx,-8(%ebp)
	movzwl 4(%ebx),%edx
	movl %edx,-12(%ebp)
	cmpl $0,8(%ebp)
	je L3
	testl %ecx,%ecx
	jne L2
L3:
	movl _gzero  ,%eax
	jmp L13
	.align 4,0x90
L2:
	cmpl $0,8(%ebp)
	jge L4
	negl -8(%ebp)
	negl 8(%ebp)
	jns L4
	pushl %ebx
	pushl $-2147483648
	call _stoi  
	addl $4,%esp
	pushl %eax
	call _mulii  
	jmp L13
	.align 4,0x90
L4:
	movl -12(%ebp),%eax
	incl %eax
	pushl %eax
	call _cgeti  
	movl %eax,-16(%ebp)
	movl $0,-4(%ebp)
	movl -12(%ebp),%ecx
	leal 0(,%ecx,4),%eax
	addl %eax,%ebx
	movl %ebx,-20(%ebp)
	movl -16(%ebp),%edx
	leal 4(%eax,%edx),%esi
	addl $4,%esp
	movl %ecx,%edi
	addl $-2,%edi
	je L7
	.align 2,0x90
L10:
	addl $-4,%esi
	movl -4(%ebp),%ebx
	leal -4(%ebp),%eax
	pushl %eax
	addl $-4,-20(%ebp)
	movl -20(%ebp),%ecx
	movl (%ecx),%ecx
	pushl %ecx
	movl 8(%ebp),%edx
	pushl %edx
	call _mulul3  
	addl %ebx,%eax
	cmpl %ebx,%eax
	jae L9
	incl -4(%ebp)
L9:
	movl %eax,(%esi)
	addl $12,%esp
	decl %edi
	jne L10
L7:
	cmpl $0,-4(%ebp)
	je L11
	movl -4(%ebp),%ecx
	movl %ecx,-4(%esi)
	movl -16(%ebp),%edx
	movl 4(%edx),%eax
	andl $-65536,%eax
	movl -12(%ebp),%ecx
	leal 1(%ecx,%eax),%eax
	movl %eax,4(%edx)
	jmp L12
	.align 4,0x90
L11:
	addl $4,_avma  
	movl -16(%ebp),%edx
	movl (%edx),%ecx
	decl %ecx
	movl %ecx,4(%edx)
	addl $4,%edx
	movl %edx,-16(%ebp)
	movw -12(%ebp),%cx
	movw %cx,4(%edx)
L12:
	movb -8(%ebp),%dl
	movl -16(%ebp),%ecx
	movb %dl,7(%ecx)
	movl -16(%ebp),%eax
L13:
	leal -32(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _expi   ; .align 4,0x90 		; _expi:  
	pushl %ebp
	movl %esp,%ebp
	pushl %ebx
	movl 8(%ebp),%eax
	movzwl 4(%eax),%ebx
	cmpl $2,%ebx
	je L15
	movl 8(%eax),%eax
	pushl %eax
	call _bfffo  
	leal -2(%ebx),%edx
	sall $5,%edx
	subl %eax,%edx
	decl %edx
	jmp L16
	.align 4,0x90
L15:
	movl $-8388608,%edx
L16:
	movl %edx,%eax
	movl -4(%ebp),%ebx
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _addsi   ; .align 4,0x90 		; _addsi:  
	pushl %ebp
	movl %esp,%ebp
	subl $12,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 12(%ebp),%edi
	testl %esi,%esi
	jne L18
	pushl %edi
	call _icopy  
	jmp L60
	.align 4,0x90
L18:
	movl 4(%edi),%ebx
	sarl $24,%ebx
	movl %ebx,-8(%ebp)
	jne L19
	pushl %esi
	call _stoi  
	jmp L60
	.align 4,0x90
L19:
	testl %esi,%esi
	jge L20
	movl $-1,-4(%ebp)
	negl %esi
	jns L22
	pushl %edi
	pushl $ _MOST_NEGS  
	call _addii  
	jmp L60
	.align 4,0x90
L20:
	movl $1,-4(%ebp)
L22:
	movzwl 4(%edi),%ebx
	movl %ebx,-12(%ebp)
	movl -8(%ebp),%ebx
	cmpl %ebx,-4(%ebp)
	jne L23
	movl %esi,%edx
	movl %edx,%eax
	movl -12(%ebp),%ebx
	addl -4(%edi,%ebx,4),%eax
	movl %eax,%esi
	cmpl %edx,%eax
	jae L24
	movl %ebx,%eax
	incl %eax
	pushl %eax
	call _cgeti  
	movl %eax,%ecx
	movl %esi,(%ecx,%ebx,4)
	movl %ebx,%edx
	jmp L61
	.align 4,0x90
	.align 2,0x90
L28:
	movl $0,(%ecx,%edx,4)
L61:
	decl %edx
	cmpl $2,%edx
	jle L29
	cmpl $-1,-4(%edi,%edx,4)
	je L28
	cmpl $2,%edx
	jle L29
	movl -4(%edi,%edx,4),%ebx
	incl %ebx
	jmp L62
	.align 4,0x90
	.align 2,0x90
L32:
	movl -4(%edi,%edx,4),%ebx
L62:
	movl %ebx,(%ecx,%edx,4)
	decl %edx
	cmpl $2,%edx
	jg L32
	movl (%ecx),%eax
	decl %eax
	movl %eax,4(%ecx)
	movl %eax,8(%ecx)
	addl $4,%ecx
	addl $4,_avma  
	jmp L34
	.align 4,0x90
L29:
	movl $1,8(%ecx)
	movl (%ecx),%ebx
	movl %ebx,4(%ecx)
	jmp L34
	.align 4,0x90
L24:
	movl -12(%ebp),%ebx
	pushl %ebx
	call _cgeti  
	movl %eax,%ecx
	movl %esi,-4(%ecx,%ebx,4)
	movl $1,%edx
	movl %ebx,%eax
	decl %eax
	movl %eax,%esi
	cmpl %eax,%edx
	jge L34
	.align 2,0x90
L38:
	movl (%edi,%edx,4),%ebx
	movl %ebx,(%ecx,%edx,4)
	incl %edx
	cmpl %esi,%edx
	jl L38
L34:
	movb -4(%ebp),%bl
	movb %bl,7(%ecx)
	jmp L39
	.align 4,0x90
L23:
	cmpl $3,-12(%ebp)
	jne L40
	cmpl %esi,8(%edi)
	jbe L41
	pushl $3
	call _cgeti  
	movl %eax,%ecx
	movl -8(%ebp),%eax
	sall $24,%eax
	addl $3,%eax
	movl %eax,4(%ecx)
	movl 8(%edi),%edi
	subl %esi,%edi
	movl %edi,8(%ecx)
	jmp L39
	.align 4,0x90
L41:
	cmpl %esi,8(%edi)
	jne L42
	movl _gzero  ,%eax
	jmp L60
	.align 4,0x90
L42:
	pushl $3
	call _cgeti  
	movl %eax,%ecx
	movl -8(%ebp),%eax
	negl %eax
	sall $24,%eax
	addl $3,%eax
	movl %eax,4(%ecx)
	subl 8(%edi),%esi
	movl %esi,8(%ecx)
	jmp L39
	.align 4,0x90
L40:
	movl -12(%ebp),%ebx
	movl -4(%edi,%ebx,4),%edx
	movl %esi,%eax
	movl %edx,%esi
	subl %eax,%esi
	cmpl %eax,%edx
	jae L43
	pushl %ebx
	call _cgeti  
	movl %eax,%ecx
	movl %esi,-4(%ecx,%ebx,4)
	movl %ebx,%edx
	addl $-2,%edx
	cmpl $0,(%edi,%edx,4)
	jne L45
	.align 2,0x90
L47:
	movl $-1,(%ecx,%edx,4)
	decl %edx
	cmpl $0,(%edi,%edx,4)
	je L47
L45:
	movl (%edi,%edx,4),%eax
	decl %eax
	movl %eax,(%ecx,%edx,4)
	cmpl $2,%edx
	jg L49
	testl %eax,%eax
	je L48
L49:
	decl %edx
	testl %edx,%edx
	jle L39
	.align 2,0x90
L53:
	movl (%edi,%edx,4),%ebx
	movl %ebx,(%ecx,%edx,4)
	decl %edx
	testl %edx,%edx
	jg L53
	jmp L39
	.align 4,0x90
L48:
	movl (%ecx),%eax
	decl %eax
	movl %eax,4(%ecx)
	movl %eax,8(%ecx)
	addl $4,%ecx
	addl $4,_avma  
	movb -8(%ebp),%bl
	movb %bl,7(%ecx)
	jmp L39
	.align 4,0x90
L43:
	movl -12(%ebp),%ebx
	pushl %ebx
	call _cgeti  
	movl %eax,%ecx
	movl %esi,-4(%ecx,%ebx,4)
	movl $1,%edx
	movl %ebx,%eax
	decl %eax
	movl %eax,%esi
	cmpl %eax,%edx
	jge L39
	.align 2,0x90
L59:
	movl (%edi,%edx,4),%ebx
	movl %ebx,(%ecx,%edx,4)
	incl %edx
	cmpl %esi,%edx
	jl L59
L39:
	movl %ecx,%eax
L60:
	leal -24(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _addii   ; .align 4,0x90 		; _addii:  
	pushl %ebp
	movl %esp,%ebp
	subl $32,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 12(%ebp),%edi
	movl 8(%ebp),%edx
	movzwl 4(%edx),%edx
	movl %edx,-8(%ebp)
	movzwl 4(%edi),%ecx
	movl %ecx,-12(%ebp)
	cmpl %ecx,%edx
	jge L64
	movl 8(%ebp),%edx
	movl %edx,-16(%ebp)
	movl %edi,8(%ebp)
	movl -16(%ebp),%edi
	movl -8(%ebp),%ecx
	movl %ecx,-4(%ebp)
	movl -12(%ebp),%edx
	movl %edx,-8(%ebp)
	movl %ecx,-12(%ebp)
L64:
	movl 4(%edi),%esi
	sarl $24,%esi
	jne L65
	movl 8(%ebp),%ecx
	pushl %ecx
	call _icopy  
	jmp L119
	.align 4,0x90
L65:
	movl 8(%ebp),%edx
	movl 4(%edx),%ecx
	sarl $24,%ecx
	movl %ecx,-4(%ebp)
	cmpl %esi,%ecx
	jne L66
	movl -8(%ebp),%eax
	incl %eax
	pushl %eax
	call _cgeti  
	movl %eax,-16(%ebp)
	movl $0,-24(%ebp)
	movl -8(%ebp),%edx
	leal 0(,%edx,4),%eax
	movl -16(%ebp),%ecx
	leal 4(%eax,%ecx),%esi
	movl 8(%ebp),%ebx
	addl %eax,%ebx
	movl -12(%ebp),%edx
	leal (%edi,%edx,4),%edi
	movl %edi,-20(%ebp)
	movl %edx,%edi
	addl $-2,%edi
	je L68
	.align 2,0x90
L71:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%ecx
	movl %ecx,-28(%ebp)
	addl $-4,-20(%ebp)
	movl -20(%ebp),%edx
	addl (%edx),%ecx
	movl %ecx,-32(%ebp)
	movl -28(%ebp),%edx
	cmpl %edx,%ecx
	jae L69
	movl -24(%ebp),%edx
	addl %edx,%ecx
	movl %ecx,-32(%ebp)
	movl $1,-24(%ebp)
	movl %ecx,(%esi)
	jmp L67
	.align 4,0x90
L69:
	movl -24(%ebp),%ecx
	addl %ecx,-32(%ebp)
	cmpl %ecx,-32(%ebp)
	setb %al
	andl $255,%eax
	movl %eax,-24(%ebp)
	movl -32(%ebp),%edx
	movl %edx,(%esi)
L67:
	decl %edi
	jne L71
L68:
	cmpl $0,-24(%ebp)
	je L72
	movl 8(%ebp),%edi
	addl $8,%edi
L73:
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edi,%ebx
	jb L74
	cmpl $-1,(%ebx)
	jne L75
	addl $-4,%esi
	movl $0,(%esi)
	jmp L73
	.align 4,0x90
L75:
	addl $-4,%esi
	movl (%eax),%eax
	incl %eax
	jmp L121
	.align 4,0x90
	.align 2,0x90
L79:
	addl $-4,%esi
	movl (%eax),%eax
L121:
	movl %eax,(%esi)
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edi,%ebx
	jae L79
	movl -16(%ebp),%ecx
	movl (%ecx),%edx
	decl %edx
	movl %edx,4(%ecx)
	movl 8(%ebp),%ecx
	movl 4(%ecx),%edx
	movl -16(%ebp),%ecx
	movl %edx,8(%ecx)
	addl $4,%ecx
	movl %ecx,-16(%ebp)
	addl $4,_avma  
	jmp L85
	.align 4,0x90
L74:
	movl -16(%ebp),%ecx
	movl $1,8(%ecx)
	movl 8(%ebp),%ecx
	movl 4(%ecx),%edx
	incl %edx
	movl -16(%ebp),%ecx
	movl %edx,4(%ecx)
	jmp L85
	.align 4,0x90
L72:
	movl -8(%ebp),%eax
	subl -12(%ebp),%eax
	je L83
	.align 2,0x90
L84:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%ecx
	movl %ecx,(%esi)
	decl %eax
	jne L84
L83:
	movl -16(%ebp),%edx
	movl (%edx),%ecx
	decl %ecx
	movl %ecx,4(%edx)
	movl 8(%ebp),%edx
	movl 4(%edx),%ecx
	movl -16(%ebp),%edx
	movl %ecx,8(%edx)
	addl $4,%edx
	movl %edx,-16(%ebp)
	addl $4,_avma  
	jmp L85
	.align 4,0x90
L66:
	movl -12(%ebp),%edx
	cmpl %edx,-8(%ebp)
	jne L86
	movl 8(%ebp),%ebx
	addl $8,%ebx
	leal 8(%edi),%ecx
	movl %ecx,-20(%ebp)
	movl -8(%ebp),%eax
	addl $-2,%eax
	je L94
	.align 2,0x90
L93:
	movl (%ebx),%edx
	movl %edx,-28(%ebp)
	addl $4,%ebx
	movl -20(%ebp),%ecx
	movl (%ecx),%ecx
	movl %ecx,-32(%ebp)
	addl $4,-20(%ebp)
	cmpl %edx,%ecx
	ja L120
	cmpl %ecx,%edx
	ja L86
	decl %eax
	jne L93
L94:
	movl _gzero  ,%eax
	jmp L119
	.align 4,0x90
L120:
	movl 8(%ebp),%edx
	movl %edx,-16(%ebp)
	movl %edi,8(%ebp)
	movl -16(%ebp),%edi
	movl %esi,-4(%ebp)
L86:
	movl -8(%ebp),%ecx
	pushl %ecx
	call _cgeti  
	movl %eax,-16(%ebp)
	movl $0,-24(%ebp)
	movl -8(%ebp),%edx
	leal 0(,%edx,4),%eax
	movl 8(%ebp),%ebx
	addl %eax,%ebx
	movl -12(%ebp),%ecx
	leal (%edi,%ecx,4),%edi
	movl %edi,-20(%ebp)
	movl -16(%ebp),%esi
	addl %eax,%esi
	movl %ecx,%edi
	addl $-2,%edi
	je L96
	.align 2,0x90
L101:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%edx
	movl %edx,-28(%ebp)
	addl $-4,-20(%ebp)
	movl -20(%ebp),%ecx
	movl (%ecx),%eax
	subl %eax,%edx
	movl -24(%ebp),%ecx
	subl %ecx,%edx
	movl %edx,-32(%ebp)
	cmpl %eax,-28(%ebp)
	jae L97
	movl $1,-24(%ebp)
	jmp L98
	.align 4,0x90
L97:
	cmpl %eax,-28(%ebp)
	jbe L98
	movl $0,-24(%ebp)
L98:
	movl -32(%ebp),%edx
	movl %edx,(%esi)
	decl %edi
	jne L101
L96:
	cmpl $0,-24(%ebp)
	je L102
	jmp L122
	.align 4,0x90
	.align 2,0x90
L105:
	addl $-4,%esi
	movl $-1,(%esi)
L122:
	addl $-4,%ebx
	movl (%ebx),%eax
	testl %eax,%eax
	je L105
	movl 8(%ebp),%edi
	addl $8,%edi
	cmpl %edi,%ebx
	jb L110
	addl $-4,%esi
	decl %eax
	movl %eax,(%esi)
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edi,%ebx
	jb L110
	.align 2,0x90
L109:
	addl $-4,%esi
	movl (%eax),%eax
	movl %eax,(%esi)
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edi,%ebx
	jae L109
	jmp L110
	.align 4,0x90
L102:
	movl -8(%ebp),%edi
	subl -12(%ebp),%edi
	je L110
	.align 2,0x90
L113:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%ecx
	movl %ecx,(%esi)
	decl %edi
	jne L113
L110:
	movl -16(%ebp),%edx
	cmpl $0,8(%edx)
	je L114
	movl 8(%ebp),%ecx
	movl 4(%ecx),%ecx
	movl %ecx,4(%edx)
	jmp L85
	.align 4,0x90
L114:
	movl -16(%ebp),%esi
	addl $12,%esi
	movl -16(%ebp),%edx
	cmpl $0,12(%edx)
	jne L117
	.align 2,0x90
L118:
	addl $4,%esi
	cmpl $0,(%esi)
	je L118
L117:
	addl $-8,%esi
	movl %esi,%edi
	subl -16(%ebp),%edi
	sarl $2,%edi
	movl -16(%ebp),%ecx
	movl (%ecx),%eax
	subl %edi,%eax
	movl %eax,(%esi)
	movl %eax,4(%esi)
	movl %esi,-16(%ebp)
	movb -4(%ebp),%dl
	movb %dl,7(%esi)
	leal 0(,%edi,4),%eax
	addl %eax,_avma  
L85:
	movl -16(%ebp),%eax
L119:
	leal -44(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _mulss   ; .align 4,0x90 		; _mulss:  
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%edx
	movl 12(%ebp),%ebx
	testl %edx,%edx
	je L125
	testl %ebx,%ebx
	jne L124
L125:
	movl _gzero  ,%eax
	jmp L133
	.align 4,0x90
L124:
	movl $1,%esi
	testl %edx,%edx
	jge L126
	movl $-1,%esi
	negl %edx
	jns L126
	pushl %edx
	call _stoi  
	pushl %eax
	pushl %ebx
	call _mulsi  
	jmp L133
	.align 4,0x90
L126:
	testl %ebx,%ebx
	jge L128
	negl %esi
	negl %ebx
	jns L128
	pushl $ _ABS_MOST_NEGS  
	movl %edx,%eax
	testl %esi,%esi
	jg L130
	negl %eax
L130:
	pushl %eax
	call _mulsi  
	jmp L133
	.align 4,0x90
L128:
	leal -4(%ebp),%eax
	pushl %eax
	pushl %ebx
	pushl %edx
	call _mulul3  
	movl %eax,%ebx
	addl $12,%esp
	cmpl $0,-4(%ebp)
	je L131
	pushl $4
	call _cgeti  
	movl -4(%ebp),%ecx
	movl %ecx,8(%eax)
	movl %ebx,12(%eax)
	jmp L132
	.align 4,0x90
L131:
	pushl $3
	call _cgeti  
	movl %ebx,8(%eax)
L132:
	movl (%eax),%ecx
	movl %ecx,4(%eax)
	movl %esi,%ecx
	movb %cl,7(%eax)
L133:
	leal -12(%ebp),%esp
	popl %ebx
	popl %esi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _mulii   ; .align 4,0x90 		; _mulii:  
	pushl %ebp
	movl %esp,%ebp
	subl $48,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movzwl 4(%esi),%edi
	movl %edi,-8(%ebp)
	movl 12(%ebp),%ecx
	movzwl 4(%ecx),%ecx
	movl %ecx,-12(%ebp)
	movl 4(%esi),%ebx
	sarl $24,%ebx
	je L157
	movl 12(%ebp),%edi
	movl 4(%edi),%eax
	sarl $24,%eax
	jne L136
L157:
	movl _gzero  ,%eax
	jmp L156
	.align 4,0x90
L136:
	testl %eax,%eax
	jge L137
	negl %ebx
L137:
	movl -12(%ebp),%ecx
	cmpl %ecx,-8(%ebp)
	jle L138
	movl %esi,-24(%ebp)
	movl 12(%ebp),%esi
	movl -24(%ebp),%edi
	movl %edi,12(%ebp)
	movl -8(%ebp),%ecx
	movl %ecx,-16(%ebp)
	movl -12(%ebp),%edi
	movl %edi,-8(%ebp)
	movl %ecx,-12(%ebp)
L138:
	movl -8(%ebp),%ecx
	movl -12(%ebp),%edi
	leal -2(%edi,%ecx),%ecx
	movl %ecx,-16(%ebp)
	cmpl $65535,%ecx
	jle L139
	pushl $17
	call _err  
	addl $4,%esp
L139:
	movl -16(%ebp),%ecx
	pushl %ecx
	call _cgeti  
	movl %eax,-24(%ebp)
	movl (%eax),%edi
	movl %edi,4(%eax)
	movb %bl,7(%eax)
	movl -8(%ebp),%ecx
	leal -4(%esi,%ecx,4),%esi
	movl %esi,-32(%ebp)
	movl (%esi),%edi
	movl %edi,-20(%ebp)
	movl $0,-4(%ebp)
	movl -12(%ebp),%ecx
	movl 12(%ebp),%edi
	leal (%edi,%ecx,4),%ecx
	movl %ecx,-48(%ebp)
	movl -16(%ebp),%edi
	leal (%eax,%edi,4),%edi
	movl %edi,-28(%ebp)
	addl $4,%esp
	movl -12(%ebp),%esi
	addl $-2,%esi
	je L141
	.align 2,0x90
L144:
	addl $-4,-28(%ebp)
	movl -4(%ebp),%ebx
	leal -4(%ebp),%eax
	pushl %eax
	addl $-4,-48(%ebp)
	movl -48(%ebp),%ecx
	movl (%ecx),%ecx
	pushl %ecx
	movl -20(%ebp),%edi
	pushl %edi
	call _mulul3  
	movl %eax,%edx
	addl %ebx,%edx
	cmpl %ebx,%edx
	jae L143
	incl -4(%ebp)
L143:
	movl -28(%ebp),%ecx
	movl %edx,(%ecx)
	addl $12,%esp
	decl %esi
	jne L144
L141:
	movl -4(%ebp),%ecx
	movl -28(%ebp),%edi
	movl %ecx,-4(%edi)
	movl -16(%ebp),%edi
	movl -24(%ebp),%ecx
	leal (%ecx,%edi,4),%edi
	movl %edi,-28(%ebp)
	movl -12(%ebp),%ecx
	movl 12(%ebp),%edi
	leal (%edi,%ecx,4),%ecx
	movl %ecx,-36(%ebp)
	decl -12(%ebp)
	addl $-3,-8(%ebp)
	cmpl $0,-8(%ebp)
	jle L146
	.align 2,0x90
L154:
	addl $-4,-32(%ebp)
	movl -32(%ebp),%edi
	movl (%edi),%edi
	movl %edi,-44(%ebp)
	movl -36(%ebp),%ecx
	movl %ecx,-48(%ebp)
	movl -28(%ebp),%ebx
	addl $-4,%ebx
	movl %ebx,-28(%ebp)
	movl $0,-40(%ebp)
	movl -12(%ebp),%esi
	jmp L158
	.align 4,0x90
	.align 2,0x90
L153:
	addl $-4,-48(%ebp)
	leal -4(%ebp),%eax
	pushl %eax
	movl -44(%ebp),%edi
	pushl %edi
	movl -48(%ebp),%ecx
	movl (%ecx),%ecx
	pushl %ecx
	call _mulul3  
	addl $-4,%ebx
	movl %eax,%edx
	addl (%ebx),%edx
	cmpl %eax,%edx
	jae L150
	incl -4(%ebp)
L150:
	movl %edx,%eax
	movl -40(%ebp),%edx
	addl %eax,%edx
	cmpl %eax,%edx
	jae L152
	incl -4(%ebp)
L152:
	movl %edx,(%ebx)
	movl -4(%ebp),%edi
	movl %edi,-40(%ebp)
	addl $12,%esp
L158:
	decl %esi
	jne L153
	movl -4(%ebp),%ecx
	movl %ecx,-4(%ebx)
	decl -8(%ebp)
	cmpl $0,-8(%ebp)
	jg L154
L146:
	movl -24(%ebp),%edi
	cmpl $0,8(%edi)
	jne L155
	movl -24(%ebp),%edi
	movl 4(%edi),%ecx
	decl %ecx
	movl %ecx,8(%edi)
	movl -24(%ebp),%edi
	movl (%edi),%ecx
	decl %ecx
	movl %ecx,4(%edi)
	addl $4,%edi
	movl %edi,-24(%ebp)
	addl $4,_avma  
L155:
	movl -24(%ebp),%eax
L156:
	leal -60(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 2
LC0:
	.long 0x55475a32,0x3fd34413
	.align 4
.globl _confrac   ; .align 4,0x90 		; _confrac:  
	pushl %ebp
	movl %esp,%ebp
	subl $68,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%edx
	movzwl (%edx),%edx
	movl %edx,-16(%ebp)
	movl 8(%ebp),%ecx
	movl 4(%ecx),%eax
	andl $16777215,%eax
	movl $8388607,%edx
	subl %eax,%edx
	movl %edx,-20(%ebp)
	movl _avma  ,%ecx
	movl %ecx,-24(%ebp)
	movl -16(%ebp),%eax
	sall $5,%eax
	leal -64(%edx,%eax),%eax
	movl %eax,-32(%ebp)
	addl $63,%eax
	sarl $5,%eax
	movl %eax,-28(%ebp)
	pushl %eax
	call _cgeti  
	movl %eax,-44(%ebp)
	movl -20(%ebp),%esi
	sarl $5,%esi
	xorl %ebx,%ebx
	addl $4,%esp
	cmpl %esi,%ebx
	jge L161
	.align 2,0x90
L163:
	movl -44(%ebp),%edx
	movl $0,(%edx,%ebx,4)
	incl %ebx
	cmpl %esi,%ebx
	jl L163
L161:
	andl $31,-20(%ebp)
	jne L164
	movl $2,%edi
	cmpl %edi,-16(%ebp)
	jle L169
	.align 2,0x90
L168:
	movl 8(%ebp),%ecx
	movl (%ecx,%edi,4),%eax
	movl -44(%ebp),%ecx
	movl %eax,(%ecx,%ebx,4)
	incl %ebx
	incl %edi
	cmpl %edi,-16(%ebp)
	jg L168
	jmp L169
	.align 4,0x90
L164:
	movl $0,-40(%ebp)
	movl $2,%edi
	cmpl %edi,-16(%ebp)
	jle L171
	movl $32,%edx
	subl -20(%ebp),%edx
	movl %edx,-52(%ebp)
	.align 2,0x90
L173:
	movl %ebx,-64(%ebp)
	movl 8(%ebp),%ecx
	movl (%ecx,%edi,4),%esi
	incl %ebx
	movl %esi,%eax
	movl -52(%ebp),%ecx
	sall %cl,%eax
	movl %eax,-68(%ebp)
	movl %eax,-12(%ebp)
	movl -20(%ebp),%ecx
	shrl %cl,%esi
	movl %esi,%ecx
	addl -40(%ebp),%ecx
	movl -64(%ebp),%eax
	movl -44(%ebp),%edx
	movl %ecx,(%edx,%eax,4)
	movl -68(%ebp),%eax
	movl %eax,-40(%ebp)
	incl %edi
	cmpl %edi,-16(%ebp)
	jg L173
L171:
	movl -40(%ebp),%eax
	movl -28(%ebp),%edx
	movl -44(%ebp),%ecx
	movl %eax,-8(%ecx,%edx,4)
L169:
	movl -28(%ebp),%edx
	movl -44(%ebp),%ecx
	movl $0,-4(%ecx,%edx,4)
	fldl LC0
	fimull -32(%ebp)
	fld1
	faddp %st,%st(1)
	fnstcw -4(%ebp)
	movl -4(%ebp),%eax
	movb $12,%ah
	movl %eax,-8(%ebp)
	fldcw -8(%ebp)
	subl $4,%esp
	fistpl (%esp)
	popl %ebx
	fldcw -4(%ebp)
	leal 17(%ebx),%edx
	movl %edx,-36(%ebp)
	movl -36(%ebp),%eax
	movl $9,%ecx
	cltd
	idivl %ecx
	movl %eax,-36(%ebp)
	pushl %eax
	call _cgeti  
	movl %eax,-48(%ebp)
	movl %ebx,(%eax)
	movl $1,%edi
	addl $4,%esp
	cmpl %edi,-36(%ebp)
	jle L175
	leal -12(%ebp),%eax
	movl %eax,-56(%ebp)
	.align 2,0x90
L183:
	movl $0,-12(%ebp)
	movl -28(%ebp),%ebx
	jmp L184
	.align 4,0x90
	.align 2,0x90
L182:
	movl -12(%ebp),%esi
	movl -56(%ebp),%edx
	pushl %edx
	pushl $1000000000
	movl -44(%ebp),%ecx
	movl (%ecx,%ebx,4),%ecx
	pushl %ecx
	call _mulul3  
	movl %eax,-68(%ebp)
	addl %esi,-68(%ebp)
	cmpl %esi,-68(%ebp)
	jae L181
	incl -12(%ebp)
L181:
	movl -68(%ebp),%edx
	movl -44(%ebp),%eax
	movl %edx,(%eax,%ebx,4)
	addl $12,%esp
L184:
	decl %ebx
	jns L182
	movl -12(%ebp),%eax
	movl -48(%ebp),%ecx
	movl %eax,(%ecx,%edi,4)
	incl %edi
	cmpl %edi,-36(%ebp)
	jg L183
L175:
	movl -24(%ebp),%edx
	movl %edx,_avma  
	movl -48(%ebp),%eax
	leal -80(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _divss   ; .align 4,0x90 		; _divss:  
	pushl %ebp
	movl %esp,%ebp
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 12(%ebp),%ebx
	testl %ebx,%ebx
	jne L186
	pushl $23
	call _err  
	addl $4,%esp
L186:
	cmpl $-2147483648,%esi
	jne L187
	pushl %ebx
	pushl $-2147483648
	call _stoi  
	addl $4,%esp
	pushl %eax
	call _divis  
	jmp L192
	.align 4,0x90
L187:
	movl $0,_hiremainder  
	pushl $ _hiremainder  
	movl %ebx,%eax
	testl %ebx,%ebx
	jge L188
	negl %eax
L188:
	pushl %eax
	movl %esi,%eax
	testl %esi,%esi
	jge L189
	negl %eax
L189:
	pushl %eax
	call _divul3  
	addl $12,%esp
	testl %ebx,%ebx
	jge L190
	negl _hiremainder  
	negl %eax
L190:
	testl %esi,%esi
	jge L191
	negl %eax
L191:
	pushl %eax
	call _stoi  
L192:
	leal -8(%ebp),%esp
	popl %ebx
	popl %esi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _modss   ; .align 4,0x90 		; _modss:  
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 12(%ebp),%ebx
	testl %ebx,%ebx
	jne L194
	pushl $38
	call _err  
	addl $4,%esp
L194:
	cmpl $-2147483648,%esi
	jne L195
	pushl %ebx
	pushl $-2147483648
	call _stoi  
	addl $4,%esp
	pushl %eax
	call _modis  
	jmp L201
	.align 4,0x90
L195:
	movl $0,-4(%ebp)
	leal -4(%ebp),%eax
	pushl %eax
	testl %ebx,%ebx
	jge L196
	negl %ebx
L196:
	pushl %ebx
	movl %esi,%eax
	testl %eax,%eax
	jge L197
	negl %eax
L197:
	pushl %eax
	call _divul3  
	addl $12,%esp
	cmpl $0,-4(%ebp)
	jne L198
	movl _gzero  ,%eax
	jmp L201
	.align 4,0x90
L198:
	cmpl $0,-4(%ebp)
	jge L199
	movl %ebx,%eax
	subl -4(%ebp),%eax
	pushl %eax
	jmp L202
	.align 4,0x90
L199:
	movl -4(%ebp),%edx
	pushl %edx
L202:
	call _stoi  
L201:
	leal -12(%ebp),%esp
	popl %ebx
	popl %esi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _resss   ; .align 4,0x90 		; _resss:  
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	pushl %ebx
	movl 12(%ebp),%ebx
	testl %ebx,%ebx
	jne L204
	pushl $40
	call _err  
	addl $4,%esp
L204:
	movl $0,-4(%ebp)
	leal -4(%ebp),%eax
	pushl %eax
	movl %ebx,%eax
	testl %ebx,%ebx
	jge L205
	negl %eax
L205:
	pushl %eax
	movl 8(%ebp),%eax
	testl %eax,%eax
	jge L206
	negl %eax
L206:
	pushl %eax
	call _divul3  
	testl %ebx,%ebx
	jge L207
	movl -4(%ebp),%eax
	negl %eax
	pushl %eax
	jmp L209
	.align 4,0x90
L207:
	movl -4(%ebp),%edx
	pushl %edx
L209:
	call _stoi  
	movl -8(%ebp),%ebx
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _divsi   ; .align 4,0x90 		; _divsi:  
	pushl %ebp
	movl %esp,%ebp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%ebx
	movl 12(%ebp),%esi
	movzwl 4(%esi),%edi
	cmpb $0,7(%esi)
	jne L211
	pushl $24
	call _err  
	addl $4,%esp
L211:
	testl %ebx,%ebx
	je L213
	cmpl $3,%edi
	jg L213
	cmpl $0,8(%esi)
	jge L212
L213:
	movl %ebx,_hiremainder  
	movl _gzero  ,%eax
	jmp L218
	.align 4,0x90
L212:
	cmpl $-2147483648,%ebx
	jne L214
	pushl $0
	pushl %esi
	pushl $-2147483648
	call _stoi  
	addl $4,%esp
	pushl %eax
	call _dvmdii  
	jmp L218
	.align 4,0x90
L214:
	movl $0,_hiremainder  
	pushl $ _hiremainder  
	movl 8(%esi),%edx
	pushl %edx
	movl %ebx,%eax
	testl %ebx,%ebx
	jge L215
	negl %eax
L215:
	pushl %eax
	call _divul3  
	addl $12,%esp
	cmpl $0,4(%esi)
	jge L216
	negl _hiremainder  
	negl %eax
L216:
	testl %ebx,%ebx
	jge L217
	negl %eax
L217:
	pushl %eax
	call _stoi  
L218:
	leal -12(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _divis   ; .align 4,0x90 		; _divis:  
	pushl %ebp
	movl %esp,%ebp
	subl $24,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 12(%ebp),%edi
	movl 8(%ebp),%edx
	movl 4(%edx),%ecx
	sarl $24,%ecx
	movl %ecx,-8(%ebp)
	movzwl 4(%edx),%edx
	movl %edx,-12(%ebp)
	testl %edi,%edi
	jne L220
	pushl $26
	call _err  
	addl $4,%esp
L220:
	cmpl $0,-8(%ebp)
	jne L221
	movl $0,_hiremainder  
	movl _gzero  ,%eax
	jmp L234
	.align 4,0x90
L221:
	testl %edi,%edi
	jge L222
	negl -8(%ebp)
	negl %edi
	jns L222
	pushl $0
	pushl %edi
	call _stoi  
	addl $4,%esp
	pushl %eax
	movl 8(%ebp),%ecx
	pushl %ecx
	call _dvmdii  
	jmp L234
	.align 4,0x90
L222:
	movl 8(%ebp),%edx
	cmpl %edi,8(%edx)
	jae L224
	cmpl $3,-12(%ebp)
	jne L225
	pushl %edx
	call _itos  
	movl %eax,_hiremainder  
	movl _gzero  ,%eax
	jmp L234
	.align 4,0x90
L225:
	movl -12(%ebp),%eax
	decl %eax
	pushl %eax
	call _cgeti  
	movl %eax,%esi
	movl $1,-16(%ebp)
	movl 8(%ebp),%ecx
	movl 8(%ecx),%ecx
	movl %ecx,-4(%ebp)
	jmp L235
	.align 4,0x90
L224:
	movl -12(%ebp),%edx
	pushl %edx
	call _cgeti  
	movl %eax,%esi
	movl $0,-16(%ebp)
	movl $0,-4(%ebp)
L235:
	addl $4,%esp
	movl -16(%ebp),%ebx
	addl $2,%ebx
	cmpl %ebx,-12(%ebp)
	jle L229
	leal -4(%ebp),%ecx
	movl %ecx,-20(%ebp)
	.align 2,0x90
L231:
	movl -20(%ebp),%edx
	pushl %edx
	pushl %edi
	movl 8(%ebp),%ecx
	movl (%ecx,%ebx,4),%ecx
	pushl %ecx
	call _divul3  
	movl %ebx,%edx
	subl -16(%ebp),%edx
	movl %eax,(%esi,%edx,4)
	addl $12,%esp
	incl %ebx
	cmpl %ebx,-12(%ebp)
	jg L231
L229:
	movl (%esi),%ecx
	movl %ecx,4(%esi)
	movb -8(%ebp),%dl
	movb %dl,7(%esi)
	cmpl $0,-8(%ebp)
	jge L232
	movl -4(%ebp),%ecx
	negl %ecx
	movl %ecx,_hiremainder  
	jmp L233
	.align 4,0x90
L232:
	movl -4(%ebp),%edx
	movl %edx,_hiremainder  
L233:
	movl %esi,%eax
L234:
	leal -36(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
	.align 4
.globl _dvmdii   ; .align 4,0x90 		; _dvmdii:  
	pushl %ebp
	movl %esp,%ebp
	subl $92,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 4(%esi),%edx
	sarl $24,%edx
	movl %edx,-36(%ebp)
	movl 12(%ebp),%ecx
	movl 4(%ecx),%edi
	sarl $24,%edi
	movl %edi,-40(%ebp)
	jne L237
	pushl $36
	call _err  
	addl $4,%esp
L237:
	cmpl $0,-36(%ebp)
	jne L238
	cmpl $-1,16(%ebp)
	je L333
	cmpl $0,16(%ebp)
	je L333
	movl _gzero  ,%ecx
	movl 16(%ebp),%edx
	movl %ecx,(%edx)
L333:
	movl _gzero  ,%eax
	jmp L328
	.align 4,0x90
L238:
	movzwl 4(%esi),%edi
	movl %edi,-12(%ebp)
	movl 12(%ebp),%edx
	movzwl 4(%edx),%edx
	movl %edx,-16(%ebp)
	subl %edx,%edi
	movl %edi,-20(%ebp)
	jns L241
	cmpl $-1,16(%ebp)
	jne L242
	pushl %esi
	call _icopy  
	jmp L328
	.align 4,0x90
L242:
	cmpl $0,16(%ebp)
	je L333
	pushl %esi
	call _icopy  
	movl 16(%ebp),%ecx
	movl %eax,(%ecx)
	jmp L333
	.align 4,0x90
L241:
	movl _avma  ,%edi
	movl %edi,-8(%ebp)
	cmpl $0,-36(%ebp)
	jge L244
	negl -40(%ebp)
L244:
	cmpl $3,-16(%ebp)
	jne L245
	movl 12(%ebp),%edx
	movl 8(%edx),%edx
	movl %edx,-48(%ebp)
	leal 8(%esi),%ecx
	movl %ecx,-88(%ebp)
	cmpl %edx,8(%esi)
	jae L246
	movl -12(%ebp),%ebx
	decl %ebx
	movl 8(%esi),%edi
	movl %edi,-4(%ebp)
	addl $12,%esi
	movl %esi,-88(%ebp)
	jmp L247
	.align 4,0x90
L246:
	movl -12(%ebp),%ebx
	movl $0,-4(%ebp)
L247:
	pushl %ebx
	call _cgeti  
	movl %eax,-56(%ebp)
	movl %eax,%edx
	addl $8,%edx
	movl %edx,-72(%ebp)
	addl $4,%esp
	leal -2(%ebx),%ecx
	movl %ecx,-24(%ebp)
	testl %ecx,%ecx
	je L249
	leal -4(%ebp),%esi
	.align 2,0x90
L250:
	pushl %esi
	movl -48(%ebp),%edi
	pushl %edi
	movl -88(%ebp),%edx
	movl (%edx),%edx
	pushl %edx
	addl $4,-88(%ebp)
	call _divul3  
	movl -72(%ebp),%ecx
	movl %eax,(%ecx)
	addl $4,%ecx
	movl %ecx,-72(%ebp)
	addl $12,%esp
	decl -24(%ebp)
	jne L250
L249:
	cmpl $-1,16(%ebp)
	jne L251
	movl -8(%ebp),%edi
	movl %edi,_avma  
	cmpl $0,-4(%ebp)
	je L333
	pushl $3
	call _cgeti  
	movl %eax,-60(%ebp)
	movl -36(%ebp),%eax
	sall $24,%eax
	addl $3,%eax
	movl -60(%ebp),%edx
	movl %eax,4(%edx)
	movl -4(%ebp),%ecx
	movl %ecx,8(%edx)
	movl -60(%ebp),%eax
	jmp L328
	.align 4,0x90
L251:
	cmpl $2,%ebx
	je L253
	movl -56(%ebp),%edi
	movl (%edi),%edx
	movl %edx,4(%edi)
	movb -40(%ebp),%cl
	movb %cl,7(%edi)
	jmp L254
	.align 4,0x90
L253:
	movl -8(%ebp),%edi
	movl %edi,_avma  
	movl _gzero  ,%edx
	movl %edx,-56(%ebp)
L254:
	cmpl $0,16(%ebp)
	jne L255
L331:
	movl -56(%ebp),%eax
	jmp L328
	.align 4,0x90
L255:
	cmpl $0,-4(%ebp)
	jne L256
	movl _gzero  ,%edi
	movl 16(%ebp),%ecx
	movl %edi,(%ecx)
	jmp L331
	.align 4,0x90
L256:
	pushl $3
	call _cgeti  
	movl %eax,-60(%ebp)
	movl -36(%ebp),%eax
	sall $24,%eax
	addl $3,%eax
	movl -60(%ebp),%edx
	movl %eax,4(%edx)
	movl -4(%ebp),%ecx
	movl %ecx,8(%edx)
	movl 16(%ebp),%edi
	movl %edx,(%edi)
	jmp L331
	.align 4,0x90
L245:
	movl -12(%ebp),%edx
	pushl %edx
	call _cgeti  
	movl %eax,-56(%ebp)
	movl 12(%ebp),%ecx
	movl 8(%ecx),%ecx
	pushl %ecx
	call _bfffo  
	movl %eax,-28(%ebp)
	addl $8,%esp
	testl %eax,%eax
	je L259
	movl -16(%ebp),%edi
	pushl %edi
	call _cgeti  
	movl %eax,-60(%ebp)
	movl 12(%ebp),%edx
	movl 8(%edx),%ebx
	addl $12,%edx
	movl %edx,-92(%ebp)
	movl $32,%eax
	subl -28(%ebp),%eax
	movl %ebx,%edi
	movl %eax,%ecx
	shrl %cl,%edi
	movl %edi,-4(%ebp)
	movl -28(%ebp),%ecx
	sall %cl,%ebx
	movl %ebx,-32(%ebp)
	movl -60(%ebp),%eax
	addl $8,%eax
	addl $4,%esp
	movl -16(%ebp),%edi
	addl $-3,%edi
	movl %edi,-24(%ebp)
	je L261
	movl $32,%edx
	subl %ecx,%edx
	movl %edx,-88(%ebp)
	.align 2,0x90
L262:
	movl -92(%ebp),%ecx
	movl (%ecx),%ebx
	addl $4,%ecx
	movl %ecx,-92(%ebp)
	movl %ebx,%edi
	movl -88(%ebp),%ecx
	shrl %cl,%edi
	movl %edi,-4(%ebp)
	movl -32(%ebp),%edx
	addl %edi,%edx
	movl %edx,(%eax)
	addl $4,%eax
	movl -28(%ebp),%ecx
	sall %cl,%ebx
	movl %ebx,-32(%ebp)
	decl -24(%ebp)
	jne L262
L261:
	movl -32(%ebp),%edi
	movl %edi,(%eax)
	movl $0,-32(%ebp)
	addl $8,%esi
	movl %esi,-88(%ebp)
	movl -56(%ebp),%edx
	addl $4,%edx
	movl %edx,-72(%ebp)
	movl -12(%ebp),%ecx
	addl $-2,%ecx
	movl %ecx,-24(%ebp)
	je L264
	movl $32,%eax
	subl -28(%ebp),%eax
	.align 2,0x90
L265:
	movl -88(%ebp),%edi
	movl (%edi),%ebx
	addl $4,%edi
	movl %edi,-88(%ebp)
	movl %ebx,%edi
	movl %eax,%ecx
	shrl %cl,%edi
	movl %edi,-4(%ebp)
	movl -32(%ebp),%ecx
	addl %edi,%ecx
	movl -72(%ebp),%edx
	movl %ecx,(%edx)
	addl $4,%edx
	movl %edx,-72(%ebp)
	movl -28(%ebp),%ecx
	sall %cl,%ebx
	movl %ebx,-32(%ebp)
	decl -24(%ebp)
	jne L265
L264:
	movl -32(%ebp),%edx
	movl -72(%ebp),%edi
	movl %edx,(%edi)
	jmp L266
	.align 4,0x90
L259:
	addl $8,%esi
	movl %esi,-88(%ebp)
	movl -56(%ebp),%ecx
	movl $0,4(%ecx)
	addl $8,%ecx
	movl %ecx,-72(%ebp)
	movl -12(%ebp),%esi
	addl $-2,%esi
	je L268
	.align 2,0x90
L269:
	movl -88(%ebp),%edi
	movl (%edi),%edx
	movl -72(%ebp),%edi
	movl %edx,(%edi)
	addl $4,-88(%ebp)
	addl $4,%edi
	movl %edi,-72(%ebp)
	decl %esi
	jne L269
L268:
	movl 12(%ebp),%ecx
	movl %ecx,-60(%ebp)
L266:
	movl -60(%ebp),%edi
	movl 8(%edi),%edi
	movl %edi,-48(%ebp)
	movl -60(%ebp),%edx
	movl 12(%edx),%edx
	movl %edx,-44(%ebp)
	movl -56(%ebp),%ecx
	addl $4,%ecx
	movl %ecx,-72(%ebp)
	movl -20(%ebp),%edi
	incl %edi
	movl %edi,-24(%ebp)
	je L271
	movl -16(%ebp),%edx
	sall $2,%edx
	movl %edx,-80(%ebp)
	.align 2,0x90
L297:
	movl -72(%ebp),%ecx
	movl (%ecx),%eax
	addl $4,%ecx
	movl %ecx,-72(%ebp)
	cmpl %eax,-48(%ebp)
	jne L272
	movl $-1,-52(%ebp)
	movl -48(%ebp),%ebx
	movl %ebx,%edi
	addl (%ecx),%edi
	movl %edi,-84(%ebp)
	cmpl %ebx,%edi
	setb %al
	andl $255,%eax
	movl %edi,-32(%ebp)
	jmp L273
	.align 4,0x90
L272:
	movl -72(%ebp),%edx
	movl -4(%edx),%edx
	movl %edx,-4(%ebp)
	leal -4(%ebp),%eax
	pushl %eax
	movl -48(%ebp),%ecx
	pushl %ecx
	movl -72(%ebp),%edi
	movl (%edi),%edi
	pushl %edi
	call _divul3  
	movl %eax,-52(%ebp)
	xorl %eax,%eax
	movl -4(%ebp),%edx
	movl %edx,-32(%ebp)
	addl $12,%esp
L273:
	testl %eax,%eax
	jne L274
	leal -4(%ebp),%eax
	pushl %eax
	movl -44(%ebp),%ecx
	pushl %ecx
	movl -52(%ebp),%edi
	pushl %edi
	call _mulul3  
	movl %eax,%ebx
	movl -72(%ebp),%edx
	movl 4(%edx),%edx
	movl %edx,-92(%ebp)
	addl $12,%esp
	cmpl %edx,%ebx
	setb %al
	andl $255,%eax
	subl %edx,%ebx
	movl %ebx,-88(%ebp)
	movl -4(%ebp),%ebx
	movl -32(%ebp),%ecx
	movl %ecx,-92(%ebp)
	movl %ebx,%edi
	subl %ecx,%edi
	subl %eax,%edi
	movl %edi,-84(%ebp)
	cmpl %ebx,%ecx
	ja L334
	jmp L281
	.align 4,0x90
	.align 2,0x90
L285:
	decl -52(%ebp)
	movl -88(%ebp),%ebx
	movl -44(%ebp),%edx
	movl %edx,-92(%ebp)
	cmpl %edx,%ebx
	setb %al
	andl $255,%eax
	subl %edx,%ebx
	movl %ebx,-88(%ebp)
	movl %esi,%ebx
	movl -48(%ebp),%ecx
	movl %ecx,-92(%ebp)
	movl %ebx,%edi
	subl %ecx,%edi
	subl %eax,%edi
	movl %edi,-84(%ebp)
	cmpl %ebx,%ecx
	jbe L281
L334:
	movl $1,%eax
	jmp L282
	.align 4,0x90
L281:
	cmpl %ebx,-92(%ebp)
	jae L282
	xorl %eax,%eax
L282:
	movl -84(%ebp),%esi
	testl %eax,%eax
	jne L274
	testl %esi,%esi
	jne L285
L274:
	movl $0,-4(%ebp)
	movl -72(%ebp),%edx
	movl -80(%ebp),%ecx
	leal -8(%ecx,%edx),%edx
	movl %edx,-88(%ebp)
	movl -60(%ebp),%edi
	addl %ecx,%edi
	movl %edi,-76(%ebp)
	movl -16(%ebp),%esi
	addl $-2,%esi
	je L287
	.align 2,0x90
L290:
	movl -4(%ebp),%ebx
	leal -4(%ebp),%eax
	pushl %eax
	addl $-4,-76(%ebp)
	movl -76(%ebp),%edx
	movl (%edx),%edx
	pushl %edx
	movl -52(%ebp),%ecx
	pushl %ecx
	call _mulul3  
	movl %eax,-84(%ebp)
	addl %ebx,-84(%ebp)
	cmpl %ebx,-84(%ebp)
	jae L289
	incl -4(%ebp)
L289:
	movl -84(%ebp),%edi
	movl %edi,-92(%ebp)
	addl $-4,-88(%ebp)
	addl $12,%esp
	movl -88(%ebp),%edx
	movl (%edx),%ebx
	cmpl %edi,%ebx
	setb %al
	andl $255,%eax
	subl %edi,%ebx
	movl %ebx,(%edx)
	addl %eax,-4(%ebp)
	decl %esi
	jne L290
L287:
	movl -72(%ebp),%ecx
	movl -4(%ecx),%eax
	cmpl %eax,-4(%ebp)
	jbe L291
	xorl %eax,%eax
	decl -52(%ebp)
	movl -80(%ebp),%edi
	leal -8(%edi,%ecx),%edi
	movl %edi,-88(%ebp)
	movl -60(%ebp),%edx
	addl -80(%ebp),%edx
	movl %edx,-76(%ebp)
	movl -16(%ebp),%esi
	addl $-2,%esi
	je L291
	.align 2,0x90
L296:
	movl -88(%ebp),%ecx
	addl $-4,%ecx
	movl %ecx,-92(%ebp)
	movl %ecx,-88(%ebp)
	movl (%ecx),%ebx
	addl $-4,-76(%ebp)
	movl %ebx,%edx
	movl -76(%ebp),%edi
	addl (%edi),%edx
	movl %edx,-84(%ebp)
	cmpl %ebx,%edx
	jae L294
	addl %eax,%edx
	movl %edx,-84(%ebp)
	movl $1,%eax
	movl %edx,(%ecx)
	jmp L292
	.align 4,0x90
L294:
	addl %eax,-84(%ebp)
	cmpl %eax,-84(%ebp)
	setb %al
	andl $255,%eax
	movl -84(%ebp),%edi
	movl -92(%ebp),%ecx
	movl %edi,(%ecx)
L292:
	decl %esi
	jne L296
L291:
	movl -52(%ebp),%ecx
	movl -72(%ebp),%edx
	movl %ecx,-4(%edx)
	decl -24(%ebp)
	jne L297
L271:
	movl _avma  ,%edi
	movl %edi,-88(%ebp)
	cmpl $-1,16(%ebp)
	je L298
	movl -20(%ebp),%ebx
	addl $2,%ebx
	movl -56(%ebp),%edx
	leal (%edx,%ebx,4),%edx
	movl %edx,-72(%ebp)
	movl -56(%ebp),%ecx
	cmpl $0,4(%ecx)
	je L299
	movl -20(%ebp),%ebx
	addl $3,%ebx
	jmp L300
	.align 4,0x90
L299:
	cmpl $0,-20(%ebp)
	jne L300
	movl $0,-40(%ebp)
L300:
	pushl %ebx
	call _cgeti  
	movl %eax,-64(%ebp)
	leal (%eax,%ebx,4),%eax
	addl $4,%esp
	leal -2(%ebx),%esi
	testl %esi,%esi
	je L303
	.align 2,0x90
L304:
	addl $-4,%eax
	addl $-4,-72(%ebp)
	movl -72(%ebp),%edi
	movl (%edi),%edi
	movl %edi,(%eax)
	decl %esi
	jne L304
L303:
	cmpl $2,%ebx
	ja L305
	movl -64(%ebp),%edx
	movl $2,4(%edx)
	jmp L298
	.align 4,0x90
L305:
	movl -64(%ebp),%ecx
	movl (%ecx),%edi
	movl %edi,4(%ecx)
	movb -40(%ebp),%dl
	movb %dl,7(%ecx)
L298:
	cmpl $0,16(%ebp)
	je L307
	movl -20(%ebp),%esi
	addl $2,%esi
	cmpl %esi,-12(%ebp)
	jle L309
	movl -56(%ebp),%ecx
	cmpl $0,(%ecx,%esi,4)
	jne L309
	.align 2,0x90
L310:
	incl %esi
	cmpl %esi,-12(%ebp)
	jle L309
	movl -56(%ebp),%edi
	cmpl $0,(%edi,%esi,4)
	je L310
L309:
	cmpl %esi,-12(%ebp)
	jne L312
	movl _gzero  ,%edx
	pushl %edx
	call _icopy  
	movl %eax,-68(%ebp)
	addl $4,%esp
	jmp L307
	.align 4,0x90
L312:
	movl -12(%ebp),%eax
	subl %esi,%eax
	addl $2,%eax
	pushl %eax
	call _cgeti  
	movl %eax,-68(%ebp)
	movl (%eax),%ecx
	movl %ecx,4(%eax)
	addl $4,%esp
	cmpl $0,-28(%ebp)
	jne L314
	movl $2,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jle L319
	.align 2,0x90
L318:
	movl -56(%ebp),%edi
	movl (%edi,%esi,4),%ecx
	movl -24(%ebp),%edi
	movl -68(%ebp),%edx
	movl %ecx,(%edx,%edi,4)
	incl %esi
	incl %edi
	movl %edi,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jg L318
	jmp L319
	.align 4,0x90
L314:
	movl $0,-4(%ebp)
	movl -56(%ebp),%edi
	movl (%edi,%esi,4),%ebx
	incl %esi
	movl $32,%eax
	subl -28(%ebp),%eax
	movl %ebx,%edi
	movl %eax,%ecx
	sall %cl,%edi
	movl %edi,%eax
	movl %eax,-4(%ebp)
	movl -28(%ebp),%ecx
	shrl %cl,%ebx
	movl %ebx,-92(%ebp)
	movl %eax,-32(%ebp)
	testl %ebx,%ebx
	je L320
	movl -68(%ebp),%edi
	movl %ebx,8(%edi)
	movl $1,%eax
	jmp L321
	.align 4,0x90
L320:
	movl -68(%ebp),%edx
	movl (%edx),%ecx
	decl %ecx
	movl %ecx,4(%edx)
	addl $4,%edx
	movl %edx,-68(%ebp)
	addl $4,_avma  
	movl -68(%ebp),%edx
	movl (%edx),%edi
	movl %edi,4(%edx)
	xorl %eax,%eax
L321:
	addl $2,%eax
	movl %eax,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jle L319
	movl $32,%edx
	subl -28(%ebp),%edx
	movl %edx,-84(%ebp)
	.align 2,0x90
L325:
	movl -56(%ebp),%ecx
	movl (%ecx,%esi,4),%ebx
	movl %ebx,%edi
	movl -84(%ebp),%ecx
	sall %cl,%edi
	movl %edi,-92(%ebp)
	movl %edi,-4(%ebp)
	movl %ebx,%eax
	movl -28(%ebp),%ecx
	shrl %cl,%eax
	addl -32(%ebp),%eax
	movl -24(%ebp),%edi
	movl -68(%ebp),%edx
	movl %eax,(%edx,%edi,4)
	movl -92(%ebp),%ecx
	movl %ecx,-32(%ebp)
	incl %esi
	incl %edi
	movl %edi,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jg L325
L319:
	movb -36(%ebp),%dl
	movl -68(%ebp),%ecx
	movb %dl,7(%ecx)
L307:
	cmpl $-1,16(%ebp)
	jne L326
	movl -68(%ebp),%edi
	pushl %edi
	movl -88(%ebp),%edx
	pushl %edx
	movl -8(%ebp),%ecx
	pushl %ecx
	jmp L332
	.align 4,0x90
L326:
	cmpl $0,16(%ebp)
	je L327
	pushl $0
	movl -88(%ebp),%edi
	pushl %edi
	movl -8(%ebp),%edx
	pushl %edx
	call _gerepile  
	andb $252,%al
	movl -68(%ebp),%edi
	addl %eax,%edi
	movl 16(%ebp),%ecx
	movl %edi,(%ecx)
	addl -64(%ebp),%eax
	jmp L328
	.align 4,0x90
L327:
	movl -64(%ebp),%edx
	pushl %edx
	movl -88(%ebp),%ecx
	pushl %ecx
	movl -8(%ebp),%edi
	pushl %edi
L332:
	call _gerepile  
L328:
	leal -104(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.comm _in_saved_avma  ,4
