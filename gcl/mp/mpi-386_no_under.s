	.file	"mpi.c"
	.version	"01.01"
gcc2_compiled.:
.text
	.align 16
.globl mulsi
	.type	 mulsi,@function
mulsi:
	pushl %ebp
	movl %esp,%ebp
	subl $20,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 12(%ebp),%ebx
	movl 4(%ebx),%edx
	sarl $24,%edx
	movl %edx,-8(%ebp)
	movzwl 4(%ebx),%ecx
	movl %ecx,-12(%ebp)
	cmpl $0,8(%ebp)
	je .L3
	testl %edx,%edx
	jne .L2
.L3:
	movl gzero,%eax
	jmp .L14
	.align 16
.L2:
	cmpl $0,8(%ebp)
	jge .L4
	negl -8(%ebp)
	negl 8(%ebp)
	jns .L4
	pushl %ebx
	pushl $-2147483648
	call stoi
	addl $4,%esp
	pushl %eax
	call mulii
	jmp .L14
	.align 16
.L4:
	movl -12(%ebp),%eax
	incl %eax
	pushl %eax
	call cgeti
	movl %eax,-16(%ebp)
	movl $0,-4(%ebp)
	movl -12(%ebp),%edx
	leal 0(,%edx,4),%eax
	addl %eax,%ebx
	movl %ebx,-20(%ebp)
	movl -16(%ebp),%ecx
	leal 4(%eax,%ecx),%esi
	addl $4,%esp
	movl %edx,%edi
	addl $-2,%edi
	je .L7
	.align 4
.L8:
	addl $-4,%esi
	movl -4(%ebp),%ebx
	leal -4(%ebp),%eax
	pushl %eax
	addl $-4,-20(%ebp)
	movl -20(%ebp),%edx
	movl (%edx),%eax
	pushl %eax
	movl 8(%ebp),%ecx
	pushl %ecx
	call mulul3
	addl %ebx,%eax
	addl $12,%esp
	cmpl %ebx,%eax
	jae .L10
	incl -4(%ebp)
.L10:
	movl %eax,(%esi)
	decl %edi
	jne .L8
.L7:
	cmpl $0,-4(%ebp)
	je .L12
	movl -4(%ebp),%eax
	movl %eax,-4(%esi)
	movl -16(%ebp),%edx
	movl 4(%edx),%eax
	andl $-65536,%eax
	movl -12(%ebp),%ecx
	leal 1(%ecx,%eax),%eax
	movl %eax,4(%edx)
	jmp .L13
	.align 16
.L12:
	addl $4,avma
	movl -16(%ebp),%edx
	movl (%edx),%ecx
	decl %ecx
	movl %ecx,4(%edx)
	addl $4,%edx
	movl %edx,-16(%ebp)
	movw -12(%ebp),%cx
	movw %cx,4(%edx)
.L13:
	movb -8(%ebp),%dl
	movl -16(%ebp),%ecx
	movb %dl,7(%ecx)
	movl -16(%ebp),%eax
.L14:
	leal -32(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe1:
	.size	 mulsi,.Lfe1-mulsi
	.align 16
.globl expi
	.type	 expi,@function
expi:
	pushl %ebp
	movl %esp,%ebp
	pushl %ebx
	movl 8(%ebp),%eax
	movzwl 4(%eax),%ebx
	cmpl $2,%ebx
	je .L16
	movl 8(%eax),%eax
	pushl %eax
	call bfffo
	movl %eax,%edx
	leal -2(%ebx),%eax
	sall $5,%eax
	subl %edx,%eax
	decl %eax
	jmp .L17
	.align 16
.L16:
	movl $-8388608,%eax
.L17:
	movl -4(%ebp),%ebx
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe2:
	.size	 expi,.Lfe2-expi
	.align 16
.globl addsi
	.type	 addsi,@function
addsi:
	pushl %ebp
	movl %esp,%ebp
	subl $12,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 12(%ebp),%edi
	testl %esi,%esi
	jne .L19
	pushl %edi
	call icopy
	jmp .L68
	.align 16
.L19:
	movl 4(%edi),%ebx
	sarl $24,%ebx
	movl %ebx,-8(%ebp)
	jne .L20
	pushl %esi
	call stoi
	jmp .L68
	.align 16
.L20:
	testl %esi,%esi
	jge .L21
	movl $-1,-4(%ebp)
	negl %esi
	jns .L23
	pushl %edi
	pushl $MOST_NEGS
	call addii
	jmp .L68
	.align 16
.L21:
	movl $1,-4(%ebp)
.L23:
	movzwl 4(%edi),%ebx
	movl %ebx,-12(%ebp)
	movl -8(%ebp),%ebx
	cmpl %ebx,-4(%ebp)
	jne .L24
	movl %esi,%edx
	movl %edx,%eax
	movl -12(%ebp),%ebx
	addl -4(%edi,%ebx,4),%eax
	movl %eax,%esi
	cmpl %edx,%eax
	jae .L25
	movl %ebx,%eax
	incl %eax
	pushl %eax
	call cgeti
	movl %eax,%ecx
	movl %esi,(%ecx,%ebx,4)
	movl -12(%ebp),%edx
	decl %edx
	cmpl $2,%edx
	jle .L32
	.align 4
.L31:
	cmpl $-1,-4(%edi,%edx,4)
	jne .L27
	movl $0,(%ecx,%edx,4)
	decl %edx
	cmpl $2,%edx
	jg .L31
.L27:
	cmpl $2,%edx
	jle .L32
	movl -4(%edi,%edx,4),%ebx
	incl %ebx
	movl %ebx,(%ecx,%edx,4)
	jmp .L69
	.align 16
	.align 4
.L35:
	movl -4(%edi,%edx,4),%eax
	movl %eax,(%ecx,%edx,4)
.L69:
	decl %edx
	cmpl $2,%edx
	jg .L35
	movl (%ecx),%eax
	decl %eax
	movl %eax,4(%ecx)
	movl %eax,8(%ecx)
	addl $4,%ecx
	addl $4,avma
	jmp .L38
	.align 16
.L32:
	movl $1,8(%ecx)
	movl (%ecx),%eax
	movl %eax,4(%ecx)
	jmp .L38
	.align 16
.L25:
	movl -12(%ebp),%ebx
	pushl %ebx
	call cgeti
	movl %eax,%ecx
	movl %esi,-4(%ecx,%ebx,4)
	movl $1,%edx
	movl -12(%ebp),%eax
	decl %eax
	movl %eax,%esi
	cmpl %eax,%edx
	jge .L38
	.align 4
.L42:
	movl (%edi,%edx,4),%eax
	movl %eax,(%ecx,%edx,4)
	incl %edx
	cmpl %esi,%edx
	jl .L42
.L38:
	movb -4(%ebp),%bl
	movb %bl,7(%ecx)
	jmp .L44
	.align 16
.L24:
	cmpl $3,-12(%ebp)
	jne .L45
	cmpl %esi,8(%edi)
	jbe .L46
	pushl $3
	call cgeti
	movl %eax,%ecx
	movl -8(%ebp),%eax
	sall $24,%eax
	addl $3,%eax
	movl %eax,4(%ecx)
	movl 8(%edi),%edi
	subl %esi,%edi
	movl %edi,8(%ecx)
	jmp .L44
	.align 16
.L46:
	cmpl %esi,8(%edi)
	jne .L47
	movl gzero,%eax
	jmp .L68
	.align 16
.L47:
	pushl $3
	call cgeti
	movl %eax,%ecx
	movl -8(%ebp),%eax
	negl %eax
	sall $24,%eax
	addl $3,%eax
	movl %eax,4(%ecx)
	subl 8(%edi),%esi
	movl %esi,8(%ecx)
	jmp .L44
	.align 16
.L45:
	movl -12(%ebp),%ebx
	movl -4(%edi,%ebx,4),%edx
	movl %esi,%eax
	movl %edx,%esi
	subl %eax,%esi
	cmpl %eax,%edx
	jae .L48
	pushl %ebx
	call cgeti
	movl %eax,%ecx
	movl %esi,-4(%ecx,%ebx,4)
	movl -12(%ebp),%edx
	addl $-2,%edx
	cmpl $0,(%edi,%edx,4)
	jne .L50
	.align 4
.L52:
	movl $-1,(%ecx,%edx,4)
	decl %edx
	cmpl $0,(%edi,%edx,4)
	je .L52
.L50:
	movl (%edi,%edx,4),%eax
	decl %eax
	movl %eax,(%ecx,%edx,4)
	cmpl $2,%edx
	jg .L55
	testl %eax,%eax
	je .L54
.L55:
	decl %edx
	testl %edx,%edx
	jle .L44
	.align 4
.L59:
	movl (%edi,%edx,4),%eax
	movl %eax,(%ecx,%edx,4)
	decl %edx
	testl %edx,%edx
	jg .L59
	jmp .L44
	.align 16
.L54:
	movl (%ecx),%eax
	decl %eax
	movl %eax,4(%ecx)
	movl %eax,8(%ecx)
	addl $4,%ecx
	addl $4,avma
	movb -8(%ebp),%bl
	movb %bl,7(%ecx)
	jmp .L44
	.align 16
.L48:
	movl -12(%ebp),%ebx
	pushl %ebx
	call cgeti
	movl %eax,%ecx
	movl %esi,-4(%ecx,%ebx,4)
	movl $1,%edx
	movl -12(%ebp),%eax
	decl %eax
	movl %eax,%esi
	cmpl %eax,%edx
	jge .L44
	.align 4
.L66:
	movl (%edi,%edx,4),%eax
	movl %eax,(%ecx,%edx,4)
	incl %edx
	cmpl %esi,%edx
	jl .L66
.L44:
	movl %ecx,%eax
.L68:
	leal -24(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe3:
	.size	 addsi,.Lfe3-addsi
	.align 16
.globl addii
	.type	 addii,@function
addii:
	pushl %ebp
	movl %esp,%ebp
	subl $32,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%ecx
	movzwl 4(%ecx),%ecx
	movl %ecx,-8(%ebp)
	movl 12(%ebp),%edi
	movzwl 4(%edi),%edi
	movl %edi,-12(%ebp)
	cmpl %edi,%ecx
	jge .L71
	movl 8(%ebp),%ecx
	movl %ecx,-16(%ebp)
	movl 12(%ebp),%edi
	movl %edi,8(%ebp)
	movl %ecx,12(%ebp)
	movl -8(%ebp),%ecx
	movl %ecx,-4(%ebp)
	movl -12(%ebp),%edi
	movl %edi,-8(%ebp)
	movl %ecx,-12(%ebp)
.L71:
	movl 12(%ebp),%ecx
	movl 4(%ecx),%esi
	sarl $24,%esi
	jne .L72
	movl 8(%ebp),%edi
	pushl %edi
	call icopy
	jmp .L135
	.align 16
.L72:
	movl 8(%ebp),%ecx
	movl 4(%ecx),%ecx
	sarl $24,%ecx
	movl %ecx,-4(%ebp)
	cmpl %esi,%ecx
	jne .L73
	movl -8(%ebp),%eax
	incl %eax
	pushl %eax
	call cgeti
	movl %eax,-16(%ebp)
	movl $0,-24(%ebp)
	movl -8(%ebp),%edi
	leal 0(,%edi,4),%eax
	movl -16(%ebp),%ecx
	leal 4(%eax,%ecx),%esi
	movl 8(%ebp),%ebx
	addl %eax,%ebx
	movl -12(%ebp),%edi
	movl 12(%ebp),%ecx
	leal (%ecx,%edi,4),%edi
	movl %edi,-20(%ebp)
	movl -12(%ebp),%ecx
	addl $-2,%ecx
	movl %ecx,-32(%ebp)
	je .L75
	.align 4
.L76:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%edi
	movl %edi,-28(%ebp)
	addl $-4,-20(%ebp)
	movl %edi,%edx
	movl -20(%ebp),%ecx
	addl (%ecx),%edx
	cmpl %edi,%edx
	jae .L77
	addl -24(%ebp),%edx
	movl $1,-24(%ebp)
	jmp .L137
	.align 16
.L77:
	addl -24(%ebp),%edx
	cmpl %edx,-24(%ebp)
	seta %al
	andl $255,%eax
	movl %eax,-24(%ebp)
.L137:
	movl %edx,(%esi)
	decl -32(%ebp)
	jne .L76
.L75:
	cmpl $0,-24(%ebp)
	je .L80
	movl 8(%ebp),%edx
	addl $8,%edx
.L81:
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edx,%ebx
	jb .L82
	cmpl $-1,(%ebx)
	jne .L83
	addl $-4,%esi
	movl $0,(%esi)
	jmp .L81
	.align 16
.L83:
	addl $-4,%esi
	movl (%eax),%eax
	incl %eax
	jmp .L138
	.align 16
	.align 4
.L87:
	addl $-4,%esi
	movl (%eax),%eax
.L138:
	movl %eax,(%esi)
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edx,%ebx
	jae .L87
	jmp .L92
	.align 16
.L82:
	movl -16(%ebp),%edi
	movl $1,8(%edi)
	movl 8(%ebp),%ecx
	movl 4(%ecx),%ecx
	incl %ecx
	movl %ecx,4(%edi)
	jmp .L95
	.align 16
.L80:
	movl -8(%ebp),%edx
	subl -12(%ebp),%edx
	je .L92
	.align 4
.L93:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%eax
	movl %eax,(%esi)
	decl %edx
	jne .L93
.L92:
	movl -16(%ebp),%edi
	movl (%edi),%ecx
	decl %ecx
	movl %ecx,4(%edi)
	movl 8(%ebp),%edi
	movl 4(%edi),%eax
	movl -16(%ebp),%ecx
	movl %eax,8(%ecx)
	addl $4,%ecx
	movl %ecx,-16(%ebp)
	addl $4,avma
	jmp .L95
	.align 16
.L73:
	movl -12(%ebp),%edi
	cmpl %edi,-8(%ebp)
	jne .L96
	movl 8(%ebp),%ebx
	addl $8,%ebx
	movl 12(%ebp),%ecx
	addl $8,%ecx
	movl %ecx,-20(%ebp)
	movl -8(%ebp),%edx
	addl $-2,%edx
	je .L105
	.align 4
.L99:
	movl (%ebx),%edi
	movl %edi,-28(%ebp)
	addl $4,%ebx
	movl -20(%ebp),%ecx
	movl (%ecx),%eax
	addl $4,%ecx
	movl %ecx,-20(%ebp)
	cmpl %edi,%eax
	ja .L136
	cmpl %eax,%edi
	ja .L96
	decl %edx
	jne .L99
.L105:
	movl gzero,%eax
	jmp .L135
	.align 16
.L136:
	movl 8(%ebp),%edi
	movl %edi,-16(%ebp)
	movl 12(%ebp),%ecx
	movl %ecx,8(%ebp)
	movl %edi,12(%ebp)
	movl %esi,-4(%ebp)
.L96:
	movl -8(%ebp),%edi
	pushl %edi
	call cgeti
	movl %eax,-16(%ebp)
	movl $0,-24(%ebp)
	leal 0(,%edi,4),%eax
	movl 8(%ebp),%ebx
	addl %eax,%ebx
	movl -12(%ebp),%ecx
	movl 12(%ebp),%edi
	leal (%edi,%ecx,4),%ecx
	movl %ecx,-20(%ebp)
	movl -16(%ebp),%esi
	addl %eax,%esi
	movl -12(%ebp),%edi
	addl $-2,%edi
	movl %edi,-32(%ebp)
	je .L107
	.align 4
.L108:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%ecx
	movl %ecx,-28(%ebp)
	addl $-4,-20(%ebp)
	movl -20(%ebp),%edi
	movl (%edi),%eax
	movl %ecx,%edx
	subl %eax,%edx
	subl -24(%ebp),%edx
	cmpl %ecx,%eax
	jbe .L109
	movl $1,-24(%ebp)
	jmp .L110
	.align 16
.L109:
	cmpl %eax,-28(%ebp)
	jbe .L110
	movl $0,-24(%ebp)
.L110:
	movl %edx,(%esi)
	decl -32(%ebp)
	jne .L108
.L107:
	cmpl $0,-24(%ebp)
	je .L114
	jmp .L139
	.align 16
	.align 4
.L117:
	addl $-4,%esi
	movl $-1,(%esi)
.L139:
	addl $-4,%ebx
	movl (%ebx),%eax
	testl %eax,%eax
	je .L117
	movl 8(%ebp),%edx
	addl $8,%edx
	cmpl %edx,%ebx
	jb .L124
	addl $-4,%esi
	decl %eax
	movl %eax,(%esi)
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edx,%ebx
	jb .L124
	.align 4
.L122:
	addl $-4,%esi
	movl (%eax),%eax
	movl %eax,(%esi)
	addl $-4,%ebx
	movl %ebx,%eax
	cmpl %edx,%ebx
	jae .L122
	jmp .L124
	.align 16
.L114:
	movl -8(%ebp),%ecx
	subl -12(%ebp),%ecx
	movl %ecx,-32(%ebp)
	je .L124
	.align 4
.L127:
	addl $-4,%esi
	addl $-4,%ebx
	movl (%ebx),%eax
	movl %eax,(%esi)
	decl -32(%ebp)
	jne .L127
.L124:
	movl -16(%ebp),%edi
	cmpl $0,8(%edi)
	je .L129
	movl 8(%ebp),%ecx
	movl 4(%ecx),%eax
	movl %eax,4(%edi)
	jmp .L95
	.align 16
.L129:
	movl -16(%ebp),%esi
	addl $12,%esi
	movl -16(%ebp),%edi
	cmpl $0,12(%edi)
	jne .L132
	.align 4
.L133:
	addl $4,%esi
	cmpl $0,(%esi)
	je .L133
.L132:
	addl $-8,%esi
	movl %esi,%ecx
	subl -16(%ebp),%ecx
	sarl $2,%ecx
	movl %ecx,-32(%ebp)
	movl -16(%ebp),%edi
	movl (%edi),%eax
	subl %ecx,%eax
	movl %eax,(%esi)
	movl %eax,4(%esi)
	movl %esi,-16(%ebp)
	movb -4(%ebp),%cl
	movb %cl,7(%esi)
	movl -32(%ebp),%edi
	leal 0(,%edi,4),%eax
	addl %eax,avma
.L95:
	movl -16(%ebp),%eax
.L135:
	leal -44(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe4:
	.size	 addii,.Lfe4-addii
	.align 16
.globl mulss
	.type	 mulss,@function
mulss:
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%edx
	movl 12(%ebp),%ebx
	testl %edx,%edx
	je .L142
	testl %ebx,%ebx
	jne .L141
.L142:
	movl gzero,%eax
	jmp .L150
	.align 16
.L141:
	movl $1,%esi
	testl %edx,%edx
	jge .L143
	movl $-1,%esi
	negl %edx
	jns .L143
	pushl %edx
	call stoi
	pushl %eax
	pushl %ebx
	call mulsi
	jmp .L150
	.align 16
.L143:
	testl %ebx,%ebx
	jge .L145
	negl %esi
	negl %ebx
	jns .L145
	pushl $ABS_MOST_NEGS
	movl %edx,%eax
	testl %esi,%esi
	jg .L147
	negl %eax
.L147:
	pushl %eax
	call mulsi
	jmp .L150
	.align 16
.L145:
	leal -4(%ebp),%eax
	pushl %eax
	pushl %ebx
	pushl %edx
	call mulul3
	movl %eax,%ebx
	addl $12,%esp
	cmpl $0,-4(%ebp)
	je .L148
	pushl $4
	call cgeti
	movl %eax,%edx
	movl -4(%ebp),%eax
	movl %eax,8(%edx)
	movl %ebx,12(%edx)
	jmp .L149
	.align 16
.L148:
	pushl $3
	call cgeti
	movl %eax,%edx
	movl %ebx,8(%edx)
.L149:
	movl (%edx),%eax
	movl %eax,4(%edx)
	movl %esi,%ecx
	movb %cl,7(%edx)
	movl %edx,%eax
.L150:
	leal -12(%ebp),%esp
	popl %ebx
	popl %esi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe5:
	.size	 mulss,.Lfe5-mulss
	.align 16
.globl mulii
	.type	 mulii,@function
mulii:
	pushl %ebp
	movl %esp,%ebp
	subl $48,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movzwl 4(%esi),%ecx
	movl %ecx,-8(%ebp)
	movl 12(%ebp),%edi
	movzwl 4(%edi),%edi
	movl %edi,-12(%ebp)
	movl 4(%esi),%ebx
	sarl $24,%ebx
	je .L177
	movl 12(%ebp),%ecx
	movl 4(%ecx),%eax
	sarl $24,%eax
	jne .L153
.L177:
	movl gzero,%eax
	jmp .L176
	.align 16
.L153:
	testl %eax,%eax
	jge .L154
	negl %ebx
.L154:
	movl -12(%ebp),%edi
	cmpl %edi,-8(%ebp)
	jle .L155
	movl %esi,-24(%ebp)
	movl 12(%ebp),%esi
	movl -24(%ebp),%ecx
	movl %ecx,12(%ebp)
	movl -8(%ebp),%edi
	movl %edi,-16(%ebp)
	movl -12(%ebp),%ecx
	movl %ecx,-8(%ebp)
	movl %edi,-12(%ebp)
.L155:
	movl -8(%ebp),%edi
	movl -12(%ebp),%ecx
	leal -2(%ecx,%edi),%edi
	movl %edi,-16(%ebp)
	cmpl $65535,%edi
	jle .L156
	pushl $17
	call err
	addl $4,%esp
.L156:
	movl -16(%ebp),%edi
	pushl %edi
	call cgeti
	movl %eax,-24(%ebp)
	movl (%eax),%eax
	movl -24(%ebp),%ecx
	movl %eax,4(%ecx)
	movb %bl,7(%ecx)
	movl -8(%ebp),%edi
	leal -4(%esi,%edi,4),%esi
	movl %esi,-32(%ebp)
	movl (%esi),%ecx
	movl %ecx,-20(%ebp)
	movl $0,-4(%ebp)
	movl -12(%ebp),%edi
	movl 12(%ebp),%ecx
	leal (%ecx,%edi,4),%edi
	movl %edi,-48(%ebp)
	movl -16(%ebp),%ecx
	movl -24(%ebp),%edi
	leal (%edi,%ecx,4),%ecx
	movl %ecx,-28(%ebp)
	addl $4,%esp
	movl -12(%ebp),%esi
	addl $-2,%esi
	je .L158
	.align 4
.L159:
	addl $-4,-28(%ebp)
	movl -4(%ebp),%ebx
	leal -4(%ebp),%eax
	pushl %eax
	addl $-4,-48(%ebp)
	movl -48(%ebp),%edi
	movl (%edi),%eax
	pushl %eax
	movl -20(%ebp),%ecx
	pushl %ecx
	call mulul3
	addl %ebx,%eax
	addl $12,%esp
	cmpl %ebx,%eax
	jae .L161
	incl -4(%ebp)
.L161:
	movl -28(%ebp),%edi
	movl %eax,(%edi)
	decl %esi
	jne .L159
.L158:
	movl -4(%ebp),%eax
	movl -28(%ebp),%ecx
	movl %eax,-4(%ecx)
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
	jle .L164
	.align 4
.L165:
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
	jmp .L178
	.align 16
	.align 4
.L168:
	addl $-4,-48(%ebp)
	movl -48(%ebp),%edi
	movl (%edi),%edx
	leal -4(%ebp),%eax
	pushl %eax
	movl -44(%ebp),%ecx
	pushl %ecx
	pushl %edx
	call mulul3
	movl %eax,%edx
	addl $-4,%ebx
	addl (%ebx),%eax
	addl $12,%esp
	cmpl %edx,%eax
	jae .L170
	incl -4(%ebp)
.L170:
	movl %eax,%edx
	movl -40(%ebp),%eax
	addl %edx,%eax
	cmpl %edx,%eax
	jae .L172
	incl -4(%ebp)
.L172:
	movl %eax,(%ebx)
	movl -4(%ebp),%edi
	movl %edi,-40(%ebp)
.L178:
	decl %esi
	jne .L168
	movl -4(%ebp),%eax
	movl %eax,-4(%ebx)
	decl -8(%ebp)
	cmpl $0,-8(%ebp)
	jg .L165
.L164:
	movl -24(%ebp),%ecx
	cmpl $0,8(%ecx)
	jne .L175
	movl -24(%ebp),%ecx
	movl 4(%ecx),%edi
	decl %edi
	movl %edi,8(%ecx)
	movl -24(%ebp),%ecx
	movl (%ecx),%edi
	decl %edi
	movl %edi,4(%ecx)
	addl $4,%ecx
	movl %ecx,-24(%ebp)
	addl $4,avma
.L175:
	movl -24(%ebp),%eax
.L176:
	leal -60(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe6:
	.size	 mulii,.Lfe6-mulii
.section	.rodata
	.align 4
.LC0:
	.long 0x55475a32,0x3fd34413
.text
	.align 16
.globl confrac
	.type	 confrac,@function
confrac:
	pushl %ebp
	movl %esp,%ebp
	subl $76,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%eax
	movzwl (%eax),%eax
	movl %eax,-16(%ebp)
	movl 8(%ebp),%edx
	movl 4(%edx),%edx
	andl $16777215,%edx
	movl $8388607,%ecx
	subl %edx,%ecx
	movl %ecx,-20(%ebp)
	movl avma,%eax
	movl %eax,-24(%ebp)
	movl -16(%ebp),%edx
	sall $5,%edx
	leal -64(%ecx,%edx),%edx
	movl %edx,-32(%ebp)
	addl $63,%edx
	sarl $5,%edx
	movl %edx,-28(%ebp)
	pushl %edx
	call cgeti
	movl %eax,-44(%ebp)
	movl -20(%ebp),%esi
	sarl $5,%esi
	xorl %ebx,%ebx
	addl $4,%esp
	cmpl %esi,%ebx
	jge .L181
	.align 4
.L183:
	movl -44(%ebp),%ecx
	movl $0,(%ecx,%ebx,4)
	incl %ebx
	cmpl %esi,%ebx
	jl .L183
.L181:
	andl $31,-20(%ebp)
	jne .L185
	movl $2,%edi
	cmpl %edi,-16(%ebp)
	jle .L191
	.align 4
.L189:
	movl 8(%ebp),%eax
	movl (%eax,%edi,4),%eax
	movl -44(%ebp),%edx
	movl %eax,(%edx,%ebx,4)
	incl %ebx
	incl %edi
	cmpl %edi,-16(%ebp)
	jg .L189
	jmp .L191
	.align 16
.L185:
	movl $0,-40(%ebp)
	movl $2,%edi
	cmpl %edi,-16(%ebp)
	jle .L193
	movl $32,%ecx
	subl -20(%ebp),%ecx
	movl %ecx,-52(%ebp)
	.align 4
.L195:
	movl %ebx,-60(%ebp)
	movl 8(%ebp),%eax
	movl (%eax,%edi,4),%esi
	incl %ebx
	movl %esi,%eax
	movl -52(%ebp),%ecx
	sall %cl,%eax
	movl %eax,-64(%ebp)
	movl %eax,-12(%ebp)
	movl -20(%ebp),%ecx
	shrl %cl,%esi
	movl %esi,%ecx
	addl -40(%ebp),%ecx
	movl -60(%ebp),%eax
	movl -44(%ebp),%edx
	movl %ecx,(%edx,%eax,4)
	movl -64(%ebp),%eax
	movl %eax,-40(%ebp)
	incl %edi
	cmpl %edi,-16(%ebp)
	jg .L195
.L193:
	movl -40(%ebp),%eax
	movl -28(%ebp),%edx
	movl -44(%ebp),%ecx
	movl %eax,-8(%ecx,%edx,4)
.L191:
	movl -28(%ebp),%edx
	movl -44(%ebp),%ecx
	movl $0,-4(%ecx,%edx,4)
	fldl .LC0
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
	call cgeti
	movl %eax,-48(%ebp)
	movl %ebx,(%eax)
	movl $1,%edi
	addl $4,%esp
	cmpl %edi,-36(%ebp)
	jle .L198
	.align 4
.L200:
	movl $0,-12(%ebp)
	movl -28(%ebp),%ebx
	decl %ebx
	js .L202
	.align 4
.L204:
	movl -12(%ebp),%esi
	leal -12(%ebp),%eax
	pushl %eax
	pushl $1000000000
	movl -44(%ebp),%edx
	movl (%edx,%ebx,4),%edx
	pushl %edx
	call mulul3
	movl %eax,-64(%ebp)
	addl %esi,-64(%ebp)
	addl $12,%esp
	cmpl %esi,-64(%ebp)
	jae .L206
	incl -12(%ebp)
.L206:
	movl -64(%ebp),%eax
	movl -44(%ebp),%ecx
	movl %eax,(%ecx,%ebx,4)
	decl %ebx
	jns .L204
.L202:
	movl -12(%ebp),%edx
	movl -48(%ebp),%ecx
	movl %edx,(%ecx,%edi,4)
	incl %edi
	cmpl %edi,-36(%ebp)
	jg .L200
.L198:
	movl -24(%ebp),%eax
	movl %eax,avma
	movl -48(%ebp),%eax
	leal -88(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe7:
	.size	 confrac,.Lfe7-confrac
	.align 16
.globl divss
	.type	 divss,@function
divss:
	pushl %ebp
	movl %esp,%ebp
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 12(%ebp),%ebx
	testl %ebx,%ebx
	jne .L210
	pushl $23
	call err
	addl $4,%esp
.L210:
	cmpl $-2147483648,%esi
	jne .L211
	pushl %ebx
	pushl $-2147483648
	call stoi
	addl $4,%esp
	pushl %eax
	call divis
	jmp .L216
	.align 16
.L211:
	movl $0,hiremainder
	pushl $hiremainder
	movl %ebx,%eax
	testl %ebx,%ebx
	jge .L212
	negl %eax
.L212:
	pushl %eax
	movl %esi,%eax
	testl %esi,%esi
	jge .L213
	negl %eax
.L213:
	pushl %eax
	call divul3
	addl $12,%esp
	testl %ebx,%ebx
	jge .L214
	negl hiremainder
	negl %eax
.L214:
	testl %esi,%esi
	jge .L215
	negl %eax
.L215:
	pushl %eax
	call stoi
.L216:
	leal -8(%ebp),%esp
	popl %ebx
	popl %esi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe8:
	.size	 divss,.Lfe8-divss
	.align 16
.globl modss
	.type	 modss,@function
modss:
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 12(%ebp),%ebx
	testl %ebx,%ebx
	jne .L218
	pushl $38
	call err
	addl $4,%esp
.L218:
	cmpl $-2147483648,%esi
	jne .L219
	pushl %ebx
	pushl $-2147483648
	call stoi
	addl $4,%esp
	pushl %eax
	call modis
	jmp .L225
	.align 16
.L219:
	movl $0,-4(%ebp)
	leal -4(%ebp),%eax
	pushl %eax
	testl %ebx,%ebx
	jge .L220
	negl %ebx
.L220:
	pushl %ebx
	movl %esi,%eax
	testl %eax,%eax
	jge .L221
	negl %eax
.L221:
	pushl %eax
	call divul3
	addl $12,%esp
	cmpl $0,-4(%ebp)
	jne .L222
	movl gzero,%eax
	jmp .L225
	.align 16
.L222:
	cmpl $0,-4(%ebp)
	jge .L223
	movl %ebx,%eax
	subl -4(%ebp),%eax
	jmp .L226
	.align 16
.L223:
	movl -4(%ebp),%eax
.L226:
	pushl %eax
	call stoi
.L225:
	leal -12(%ebp),%esp
	popl %ebx
	popl %esi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe9:
	.size	 modss,.Lfe9-modss
	.align 16
.globl resss
	.type	 resss,@function
resss:
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	pushl %ebx
	movl 12(%ebp),%ebx
	testl %ebx,%ebx
	jne .L228
	pushl $40
	call err
	addl $4,%esp
.L228:
	movl $0,-4(%ebp)
	leal -4(%ebp),%eax
	pushl %eax
	movl %ebx,%eax
	testl %ebx,%ebx
	jge .L229
	negl %eax
.L229:
	pushl %eax
	movl 8(%ebp),%eax
	testl %eax,%eax
	jge .L230
	negl %eax
.L230:
	pushl %eax
	call divul3
	addl $12,%esp
	testl %ebx,%ebx
	jge .L231
	movl -4(%ebp),%eax
	negl %eax
	jmp .L233
	.align 16
.L231:
	movl -4(%ebp),%eax
.L233:
	pushl %eax
	call stoi
	movl -8(%ebp),%ebx
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe10:
	.size	 resss,.Lfe10-resss
	.align 16
.globl divsi
	.type	 divsi,@function
divsi:
	pushl %ebp
	movl %esp,%ebp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%ebx
	movl 12(%ebp),%esi
	movzwl 4(%esi),%edi
	cmpb $0,7(%esi)
	jne .L235
	pushl $24
	call err
	addl $4,%esp
.L235:
	testl %ebx,%ebx
	je .L237
	cmpl $3,%edi
	jg .L237
	cmpl $0,8(%esi)
	jge .L236
.L237:
	movl %ebx,hiremainder
	movl gzero,%eax
	jmp .L242
	.align 16
.L236:
	cmpl $-2147483648,%ebx
	jne .L238
	pushl $0
	pushl %esi
	pushl $-2147483648
	call stoi
	addl $4,%esp
	pushl %eax
	call dvmdii
	jmp .L242
	.align 16
.L238:
	movl $0,hiremainder
	pushl $hiremainder
	movl 8(%esi),%eax
	pushl %eax
	movl %ebx,%eax
	testl %ebx,%ebx
	jge .L239
	negl %eax
.L239:
	pushl %eax
	call divul3
	addl $12,%esp
	cmpl $0,4(%esi)
	jge .L240
	negl hiremainder
	negl %eax
.L240:
	testl %ebx,%ebx
	jge .L241
	negl %eax
.L241:
	pushl %eax
	call stoi
.L242:
	leal -12(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe11:
	.size	 divsi,.Lfe11-divsi
	.align 16
.globl divis
	.type	 divis,@function
divis:
	pushl %ebp
	movl %esp,%ebp
	subl $24,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 12(%ebp),%edi
	movl 8(%ebp),%edx
	movl 4(%edx),%edx
	sarl $24,%edx
	movl %edx,-8(%ebp)
	movl 8(%ebp),%ecx
	movzwl 4(%ecx),%ecx
	movl %ecx,-12(%ebp)
	testl %edi,%edi
	jne .L244
	pushl $26
	call err
	addl $4,%esp
.L244:
	cmpl $0,-8(%ebp)
	jne .L245
	movl $0,hiremainder
	movl gzero,%eax
	jmp .L259
	.align 16
.L245:
	testl %edi,%edi
	jge .L246
	negl -8(%ebp)
	negl %edi
	jns .L246
	pushl $0
	pushl %edi
	call stoi
	addl $4,%esp
	pushl %eax
	movl 8(%ebp),%edx
	pushl %edx
	call dvmdii
	jmp .L259
	.align 16
.L246:
	movl 8(%ebp),%ecx
	cmpl %edi,8(%ecx)
	jae .L248
	cmpl $3,-12(%ebp)
	jne .L249
	pushl %ecx
	call itos
	movl %eax,hiremainder
	movl gzero,%eax
	jmp .L259
	.align 16
.L249:
	movl -12(%ebp),%eax
	decl %eax
	pushl %eax
	call cgeti
	movl %eax,%esi
	movl $1,-16(%ebp)
	movl 8(%ebp),%edx
	movl 8(%edx),%eax
	movl %eax,-4(%ebp)
	jmp .L260
	.align 16
.L248:
	movl -12(%ebp),%ecx
	pushl %ecx
	call cgeti
	movl %eax,%esi
	movl $0,-16(%ebp)
	movl $0,-4(%ebp)
.L260:
	addl $4,%esp
	movl -16(%ebp),%ebx
	addl $2,%ebx
	cmpl %ebx,-12(%ebp)
	jle .L253
	leal -4(%ebp),%edx
	movl %edx,-20(%ebp)
	.align 4
.L255:
	movl -20(%ebp),%ecx
	pushl %ecx
	pushl %edi
	movl 8(%ebp),%edx
	movl (%edx,%ebx,4),%eax
	pushl %eax
	call divul3
	movl %eax,-24(%ebp)
	movl %ebx,%eax
	subl -16(%ebp),%eax
	movl -24(%ebp),%ecx
	movl %ecx,(%esi,%eax,4)
	addl $12,%esp
	incl %ebx
	cmpl %ebx,-12(%ebp)
	jg .L255
.L253:
	movl (%esi),%eax
	movl %eax,4(%esi)
	movb -8(%ebp),%dl
	movb %dl,7(%esi)
	cmpl $0,-8(%ebp)
	jge .L257
	movl -4(%ebp),%ecx
	negl %ecx
	movl %ecx,hiremainder
	jmp .L258
	.align 16
.L257:
	movl -4(%ebp),%eax
	movl %eax,hiremainder
.L258:
	movl %esi,%eax
.L259:
	leal -36(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe12:
	.size	 divis,.Lfe12-divis
	.align 16
.globl dvmdii
	.type	 dvmdii,@function
dvmdii:
	pushl %ebp
	movl %esp,%ebp
	subl $88,%esp
	pushl %edi
	pushl %esi
	pushl %ebx
	movl 8(%ebp),%esi
	movl 4(%esi),%ecx
	sarl $24,%ecx
	movl %ecx,-36(%ebp)
	movl 12(%ebp),%edi
	movl 4(%edi),%edi
	sarl $24,%edi
	movl %edi,-40(%ebp)
	jne .L262
	pushl $36
	call err
	addl $4,%esp
.L262:
	cmpl $0,-36(%ebp)
	jne .L263
	cmpl $-1,16(%ebp)
	je .L372
	cmpl $0,16(%ebp)
	je .L372
	movl gzero,%eax
	movl 16(%ebp),%ecx
	movl %eax,(%ecx)
.L372:
	movl gzero,%eax
	jmp .L367
	.align 16
.L263:
	movzwl 4(%esi),%edi
	movl %edi,-12(%ebp)
	movl 12(%ebp),%ecx
	movzwl 4(%ecx),%ecx
	movl %ecx,-16(%ebp)
	subl %ecx,%edi
	movl %edi,-20(%ebp)
	jns .L266
	cmpl $-1,16(%ebp)
	jne .L267
	pushl %esi
	call icopy
	jmp .L367
	.align 16
.L267:
	cmpl $0,16(%ebp)
	je .L372
	pushl %esi
	call icopy
	movl 16(%ebp),%edi
	movl %eax,(%edi)
	jmp .L372
	.align 16
.L266:
	movl avma,%ecx
	movl %ecx,-8(%ebp)
	cmpl $0,-36(%ebp)
	jge .L269
	negl -40(%ebp)
.L269:
	cmpl $3,-16(%ebp)
	jne .L270
	movl 12(%ebp),%edi
	movl 8(%edi),%edi
	movl %edi,-48(%ebp)
	leal 8(%esi),%ecx
	movl %ecx,-88(%ebp)
	cmpl %edi,8(%esi)
	jae .L271
	movl -12(%ebp),%ebx
	decl %ebx
	movl 8(%esi),%eax
	movl %eax,-4(%ebp)
	addl $12,%esi
	movl %esi,-88(%ebp)
	jmp .L272
	.align 16
.L271:
	movl -12(%ebp),%ebx
	movl $0,-4(%ebp)
.L272:
	pushl %ebx
	call cgeti
	movl %eax,-56(%ebp)
	movl %eax,%edi
	addl $8,%edi
	movl %edi,-72(%ebp)
	addl $4,%esp
	leal -2(%ebx),%ecx
	movl %ecx,-24(%ebp)
	testl %ecx,%ecx
	je .L274
	leal -4(%ebp),%esi
	.align 4
.L275:
	pushl %esi
	movl -48(%ebp),%edi
	pushl %edi
	movl -88(%ebp),%ecx
	movl (%ecx),%eax
	pushl %eax
	addl $4,%ecx
	movl %ecx,-88(%ebp)
	call divul3
	movl -72(%ebp),%edi
	movl %eax,(%edi)
	addl $4,%edi
	movl %edi,-72(%ebp)
	addl $12,%esp
	decl -24(%ebp)
	jne .L275
.L274:
	cmpl $-1,16(%ebp)
	jne .L277
	movl -8(%ebp),%ecx
	movl %ecx,avma
	cmpl $0,-4(%ebp)
	je .L372
	pushl $3
	call cgeti
	movl %eax,-60(%ebp)
	movl -36(%ebp),%eax
	sall $24,%eax
	addl $3,%eax
	movl -60(%ebp),%edi
	movl %eax,4(%edi)
	movl -4(%ebp),%eax
	movl %eax,8(%edi)
	movl -60(%ebp),%eax
	jmp .L367
	.align 16
.L277:
	cmpl $2,%ebx
	je .L279
	movl -56(%ebp),%ecx
	movl (%ecx),%eax
	movl %eax,4(%ecx)
	movb -40(%ebp),%cl
	movl -56(%ebp),%edi
	movb %cl,7(%edi)
	jmp .L280
	.align 16
.L279:
	movl -8(%ebp),%ecx
	movl %ecx,avma
	movl gzero,%edi
	movl %edi,-56(%ebp)
.L280:
	cmpl $0,16(%ebp)
	jne .L281
.L370:
	movl -56(%ebp),%eax
	jmp .L367
	.align 16
.L281:
	cmpl $0,-4(%ebp)
	jne .L282
	movl gzero,%eax
	movl 16(%ebp),%ecx
	movl %eax,(%ecx)
	jmp .L370
	.align 16
.L282:
	pushl $3
	call cgeti
	movl %eax,-60(%ebp)
	movl -36(%ebp),%eax
	sall $24,%eax
	addl $3,%eax
	movl -60(%ebp),%edi
	movl %eax,4(%edi)
	movl -4(%ebp),%eax
	movl %eax,8(%edi)
	movl 16(%ebp),%ecx
	movl %edi,(%ecx)
	jmp .L370
	.align 16
.L270:
	movl -12(%ebp),%edi
	pushl %edi
	call cgeti
	movl %eax,-56(%ebp)
	movl 12(%ebp),%ecx
	movl 8(%ecx),%eax
	pushl %eax
	call bfffo
	movl %eax,-28(%ebp)
	addl $8,%esp
	testl %eax,%eax
	je .L285
	movl -16(%ebp),%edi
	pushl %edi
	call cgeti
	movl %eax,-60(%ebp)
	movl 12(%ebp),%ecx
	movl 8(%ecx),%ebx
	movl %ecx,%edx
	addl $12,%edx
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
	je .L287
	movl $32,%edi
	subl %ecx,%edi
	movl %edi,-88(%ebp)
	.align 4
.L288:
	movl (%edx),%ebx
	addl $4,%edx
	movl %ebx,%edi
	movl -88(%ebp),%ecx
	shrl %cl,%edi
	movl %edi,-4(%ebp)
	movl -32(%ebp),%ecx
	addl %edi,%ecx
	movl %ecx,(%eax)
	addl $4,%eax
	movl -28(%ebp),%ecx
	sall %cl,%ebx
	movl %ebx,-32(%ebp)
	decl -24(%ebp)
	jne .L288
.L287:
	movl -32(%ebp),%edi
	movl %edi,(%eax)
	movl $0,-32(%ebp)
	addl $8,%esi
	movl %esi,-88(%ebp)
	movl -56(%ebp),%ecx
	addl $4,%ecx
	movl %ecx,-72(%ebp)
	movl -12(%ebp),%edi
	addl $-2,%edi
	movl %edi,-24(%ebp)
	je .L291
	movl $32,%eax
	subl -28(%ebp),%eax
	.align 4
.L292:
	movl -88(%ebp),%ecx
	movl (%ecx),%ebx
	addl $4,%ecx
	movl %ecx,-88(%ebp)
	movl %ebx,%edi
	movl %eax,%ecx
	shrl %cl,%edi
	movl %edi,-4(%ebp)
	movl -32(%ebp),%ecx
	addl -4(%ebp),%ecx
	movl -72(%ebp),%edi
	movl %ecx,(%edi)
	addl $4,%edi
	movl %edi,-72(%ebp)
	movl -28(%ebp),%ecx
	sall %cl,%ebx
	movl %ebx,-32(%ebp)
	decl -24(%ebp)
	jne .L292
.L291:
	movl -32(%ebp),%ecx
	movl -72(%ebp),%edi
	movl %ecx,(%edi)
	jmp .L294
	.align 16
.L285:
	addl $8,%esi
	movl %esi,-88(%ebp)
	movl -56(%ebp),%edi
	movl $0,4(%edi)
	addl $8,%edi
	movl %edi,-72(%ebp)
	movl -12(%ebp),%esi
	addl $-2,%esi
	je .L296
	.align 4
.L297:
	movl -88(%ebp),%ecx
	movl (%ecx),%eax
	movl -72(%ebp),%edi
	movl %eax,(%edi)
	addl $4,%ecx
	movl %ecx,-88(%ebp)
	addl $4,%edi
	movl %edi,-72(%ebp)
	decl %esi
	jne .L297
.L296:
	movl 12(%ebp),%ecx
	movl %ecx,-60(%ebp)
.L294:
	movl -60(%ebp),%edi
	movl 8(%edi),%edi
	movl %edi,-48(%ebp)
	movl -60(%ebp),%ecx
	movl 12(%ecx),%ecx
	movl %ecx,-44(%ebp)
	movl -56(%ebp),%edi
	addl $4,%edi
	movl %edi,-72(%ebp)
	movl -20(%ebp),%ecx
	incl %ecx
	movl %ecx,-24(%ebp)
	je .L300
	movl -16(%ebp),%edi
	sall $2,%edi
	movl %edi,-80(%ebp)
	.align 4
.L301:
	movl -72(%ebp),%ecx
	movl (%ecx),%eax
	addl $4,%ecx
	movl %ecx,-72(%ebp)
	cmpl %eax,-48(%ebp)
	jne .L302
	movl $-1,-52(%ebp)
	movl -48(%ebp),%ebx
	movl %ebx,%edi
	addl (%ecx),%edi
	movl %edi,-84(%ebp)
	cmpl %ebx,%edi
	setb %al
	andl $255,%eax
	movl %edi,-32(%ebp)
	jmp .L303
	.align 16
.L302:
	movl -72(%ebp),%ecx
	movl -4(%ecx),%eax
	movl %eax,-4(%ebp)
	leal -4(%ebp),%eax
	pushl %eax
	movl -48(%ebp),%edi
	pushl %edi
	movl (%ecx),%eax
	pushl %eax
	call divul3
	movl %eax,-52(%ebp)
	xorl %eax,%eax
	movl -4(%ebp),%ecx
	movl %ecx,-32(%ebp)
	addl $12,%esp
.L303:
	testl %eax,%eax
	jne .L304
	leal -4(%ebp),%eax
	pushl %eax
	movl -44(%ebp),%edi
	pushl %edi
	movl -52(%ebp),%ecx
	pushl %ecx
	call mulul3
	movl %eax,%ebx
	movl -72(%ebp),%edi
	movl 4(%edi),%edx
	addl $12,%esp
	cmpl %edx,%ebx
	setb %al
	andl $255,%eax
	movl %ebx,%esi
	subl %edx,%esi
	movl -4(%ebp),%ebx
	movl -32(%ebp),%edx
	movl %ebx,%ecx
	subl %edx,%ecx
	subl %eax,%ecx
	movl %ecx,-84(%ebp)
	cmpl %ebx,%edx
	ja .L373
	jmp .L313
	.align 16
	.align 4
.L317:
	cmpl $0,-88(%ebp)
	je .L304
	decl -52(%ebp)
	movl %esi,%ebx
	movl -44(%ebp),%edx
	cmpl %edx,%ebx
	setb %al
	andl $255,%eax
	subl %edx,%esi
	movl -88(%ebp),%ebx
	movl -48(%ebp),%edx
	movl %ebx,%ecx
	subl %edx,%ecx
	subl %eax,%ecx
	movl %ecx,-84(%ebp)
	cmpl %ebx,%edx
	jbe .L313
.L373:
	movl $1,%eax
	jmp .L314
	.align 16
.L313:
	cmpl %ebx,%edx
	jae .L314
	xorl %eax,%eax
.L314:
	movl -84(%ebp),%edi
	movl %edi,-88(%ebp)
	testl %eax,%eax
	je .L317
.L304:
	movl $0,-4(%ebp)
	movl -72(%ebp),%ecx
	movl -80(%ebp),%edi
	leal -8(%edi,%ecx),%ecx
	movl %ecx,-88(%ebp)
	movl -60(%ebp),%ecx
	addl %edi,%ecx
	movl %ecx,-76(%ebp)
	movl -16(%ebp),%esi
	addl $-2,%esi
	je .L319
	.align 4
.L320:
	movl -4(%ebp),%ebx
	leal -4(%ebp),%eax
	pushl %eax
	addl $-4,-76(%ebp)
	movl -76(%ebp),%edi
	movl (%edi),%eax
	pushl %eax
	movl -52(%ebp),%ecx
	pushl %ecx
	call mulul3
	movl %eax,-84(%ebp)
	addl %ebx,-84(%ebp)
	addl $12,%esp
	cmpl %ebx,-84(%ebp)
	jae .L322
	incl -4(%ebp)
.L322:
	movl -84(%ebp),%edx
	addl $-4,-88(%ebp)
	movl -88(%ebp),%edi
	movl (%edi),%ebx
	cmpl %edx,%ebx
	setb %al
	andl $255,%eax
	subl %edx,%ebx
	movl %ebx,(%edi)
	addl %eax,-4(%ebp)
	decl %esi
	jne .L320
.L319:
	movl -72(%ebp),%ecx
	movl -4(%ecx),%eax
	cmpl %eax,-4(%ebp)
	jbe .L324
	xorl %eax,%eax
	decl -52(%ebp)
	movl -80(%ebp),%edi
	leal -8(%edi,%ecx),%edi
	movl %edi,-88(%ebp)
	movl -60(%ebp),%ecx
	addl -80(%ebp),%ecx
	movl %ecx,-76(%ebp)
	movl -16(%ebp),%esi
	addl $-2,%esi
	je .L324
	.align 4
.L327:
	movl -88(%ebp),%edx
	addl $-4,%edx
	movl %edx,-88(%ebp)
	movl (%edx),%ebx
	addl $-4,-76(%ebp)
	movl %ebx,%ecx
	movl -76(%ebp),%edi
	addl (%edi),%ecx
	movl %ecx,-84(%ebp)
	cmpl %ebx,%ecx
	jae .L328
	addl %eax,%ecx
	movl %ecx,-84(%ebp)
	movl $1,%eax
	movl %ecx,(%edx)
	jmp .L325
	.align 16
.L328:
	addl %eax,-84(%ebp)
	cmpl %eax,-84(%ebp)
	setb %al
	andl $255,%eax
	movl -84(%ebp),%edi
	movl %edi,(%edx)
.L325:
	decl %esi
	jne .L327
.L324:
	movl -52(%ebp),%edi
	movl -72(%ebp),%ecx
	movl %edi,-4(%ecx)
	decl -24(%ebp)
	jne .L301
.L300:
	movl avma,%ecx
	movl %ecx,-88(%ebp)
	cmpl $-1,16(%ebp)
	je .L332
	movl -20(%ebp),%ebx
	addl $2,%ebx
	movl -56(%ebp),%edi
	leal (%edi,%ebx,4),%edi
	movl %edi,-72(%ebp)
	movl -56(%ebp),%ecx
	cmpl $0,4(%ecx)
	je .L333
	movl -20(%ebp),%ebx
	addl $3,%ebx
	jmp .L334
	.align 16
.L333:
	cmpl $0,-20(%ebp)
	jne .L334
	movl $0,-40(%ebp)
.L334:
	pushl %ebx
	call cgeti
	movl %eax,-64(%ebp)
	leal (%eax,%ebx,4),%edx
	addl $4,%esp
	leal -2(%ebx),%esi
	testl %esi,%esi
	je .L337
	.align 4
.L338:
	addl $-4,%edx
	addl $-4,-72(%ebp)
	movl -72(%ebp),%edi
	movl (%edi),%eax
	movl %eax,(%edx)
	decl %esi
	jne .L338
.L337:
	cmpl $2,%ebx
	ja .L340
	movl -64(%ebp),%ecx
	movl $2,4(%ecx)
	jmp .L332
	.align 16
.L340:
	movl -64(%ebp),%edi
	movl (%edi),%eax
	movl %eax,4(%edi)
	movb -40(%ebp),%cl
	movb %cl,7(%edi)
.L332:
	cmpl $0,16(%ebp)
	je .L342
	movl -20(%ebp),%esi
	addl $2,%esi
	cmpl %esi,-12(%ebp)
	jle .L344
	movl -56(%ebp),%edi
	cmpl $0,(%edi,%esi,4)
	jne .L344
	movl -20(%ebp),%esi
	addl $3,%esi
	cmpl %esi,-12(%ebp)
	jle .L344
	cmpl $0,(%edi,%esi,4)
	jne .L344
	.align 4
.L345:
	incl %esi
	cmpl %esi,-12(%ebp)
	jle .L344
	movl -56(%ebp),%ecx
	cmpl $0,(%ecx,%esi,4)
	je .L345
.L344:
	cmpl %esi,-12(%ebp)
	jne .L349
	movl gzero,%eax
	pushl %eax
	call icopy
	movl %eax,-68(%ebp)
	addl $4,%esp
	jmp .L342
	.align 16
.L349:
	movl -12(%ebp),%eax
	subl %esi,%eax
	addl $2,%eax
	pushl %eax
	call cgeti
	movl %eax,-68(%ebp)
	movl (%eax),%eax
	movl -68(%ebp),%edi
	movl %eax,4(%edi)
	addl $4,%esp
	cmpl $0,-28(%ebp)
	jne .L351
	movl $2,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jle .L357
	.align 4
.L355:
	movl -56(%ebp),%ecx
	movl (%ecx,%esi,4),%eax
	movl -24(%ebp),%edi
	movl -68(%ebp),%ecx
	movl %eax,(%ecx,%edi,4)
	incl %esi
	incl %edi
	movl %edi,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jg .L355
	jmp .L357
	.align 16
.L351:
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
	movl %ebx,%edx
	movl -28(%ebp),%ecx
	shrl %cl,%edx
	movl %eax,-32(%ebp)
	testl %edx,%edx
	je .L358
	movl -68(%ebp),%edi
	movl %edx,8(%edi)
	movl $1,%eax
	jmp .L359
	.align 16
.L358:
	movl -68(%ebp),%ecx
	movl (%ecx),%edi
	decl %edi
	movl %edi,4(%ecx)
	addl $4,%ecx
	movl %ecx,-68(%ebp)
	addl $4,avma
	movl (%ecx),%eax
	movl %eax,4(%ecx)
	xorl %eax,%eax
.L359:
	addl $2,%eax
	movl %eax,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jle .L357
	movl $32,%ecx
	subl -28(%ebp),%ecx
	movl %ecx,-84(%ebp)
	.align 4
.L363:
	movl -56(%ebp),%edi
	movl (%edi,%esi,4),%ebx
	movl %ebx,%edx
	movl -84(%ebp),%ecx
	sall %cl,%edx
	movl %edx,-4(%ebp)
	movl %ebx,%eax
	movl -28(%ebp),%ecx
	shrl %cl,%eax
	addl -32(%ebp),%eax
	movl -24(%ebp),%edi
	movl -68(%ebp),%ecx
	movl %eax,(%ecx,%edi,4)
	movl %edx,-32(%ebp)
	incl %esi
	incl %edi
	movl %edi,-24(%ebp)
	cmpl %esi,-12(%ebp)
	jg .L363
.L357:
	movb -36(%ebp),%cl
	movl -68(%ebp),%edi
	movb %cl,7(%edi)
.L342:
	cmpl $-1,16(%ebp)
	jne .L365
	movl -68(%ebp),%ecx
	pushl %ecx
	movl -88(%ebp),%edi
	pushl %edi
	movl -8(%ebp),%ecx
	pushl %ecx
	jmp .L371
	.align 16
.L365:
	cmpl $0,16(%ebp)
	je .L366
	pushl $0
	movl -88(%ebp),%edi
	pushl %edi
	movl -8(%ebp),%ecx
	pushl %ecx
	call gerepile
	andb $252,%al
	movl -68(%ebp),%ecx
	addl %eax,%ecx
	movl 16(%ebp),%edi
	movl %ecx,(%edi)
	addl -64(%ebp),%eax
	jmp .L367
	.align 16
.L366:
	movl -64(%ebp),%edi
	pushl %edi
	movl -88(%ebp),%ecx
	pushl %ecx
	movl -8(%ebp),%edi
	pushl %edi
.L371:
	call gerepile
.L367:
	leal -100(%ebp),%esp
	popl %ebx
	popl %esi
	popl %edi
	movl %ebp,%esp
	popl %ebp
	ret
.Lfe13:
	.size	 dvmdii,.Lfe13-dvmdii
	.ident	"GCC: (GNU) 2.7.2.1"
