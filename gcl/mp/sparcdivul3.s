#ifdef __svr4__
#define _err err
#define _divul3 divul3
#endif
        .seg "text"
	.global _divul3

#define	SS0(label) \
	addx	%o2,%o2,%o2;\
	subcc	%o2,%o1,%o3;\
	bcc	label;\
	addxcc	%o0,%o0,%o0

#define	SS1(label) \
	addx	%o3,%o3,%o3;\
	subcc	%o3,%o1,%o2;\
	bcc	label;\
	addxcc	%o0,%o0,%o0
_divul3: mov     %o2,%o4
	ld      [%o2],%o2
	subcc	%o2,%o1,%g0
	blu	1f
	addcc	%o1,%o1,%g0
	mov	0x2f,%o0
	call	_err,1
	nop
1:	bcc	Lsmalldiv
	andcc	%o1,1,%g0
	be	Levendiv
	srl	%o1,1,%o1
	add	%o1,1,%o1
	subcc	%o2,%o1,%o3
	bcc	Lb01
	addxcc	%o0,%o0,%o0
La01:	SS0(Lb02)
La02:	SS0(Lb03)
La03:	SS0(Lb04)
La04:	SS0(Lb05)
La05:	SS0(Lb06)
La06:	SS0(Lb07)
La07:	SS0(Lb08)
La08:	SS0(Lb09)
La09:	SS0(Lb10)
La10:	SS0(Lb11)
La11:	SS0(Lb12)
La12:	SS0(Lb13)
La13:	SS0(Lb14)
La14:	SS0(Lb15)
La15:	SS0(Lb16)
La16:	SS0(Lb17)
La17:	SS0(Lb18)
La18:	SS0(Lb19)
La19:	SS0(Lb20)
La20:	SS0(Lb21)
La21:	SS0(Lb22)
La22:	SS0(Lb23)
La23:	SS0(Lb24)
La24:	SS0(Lb25)
La25:	SS0(Lb26)
La26:	SS0(Lb27)
La27:	SS0(Lb28)
La28:	SS0(Lb29)
La29:	SS0(Lb30)
La30:	SS0(Lb31)
La31:	SS0(Lb32)
La32:	addx	%o2,%o2,%o2
	xor	%o0,-1,%o0
	add	%o1,%o1,%o1
	sub	%o1,1,%o1
	addcc	%o0,%o2,%o2
	bcc	1f
	subcc	%o2,%o1,%o3
	subcc	%o3,%o1,%o2
	bcs	2f
	add	%o0,1,%o0
	add	%o0,1,%o0
3:	retl
	st	%o2,[%o4]
1:	bcs	3b
	nop
	add	%o0,1,%o0
2:	retl
	st	%o3,[%o4]

Lb01:	SS1(La02)
Lb02:	SS1(La03)
Lb03:	SS1(La04)
Lb04:	SS1(La05)
Lb05:	SS1(La06)
Lb06:	SS1(La07)
Lb07:	SS1(La08)
Lb08:	SS1(La09)
Lb09:	SS1(La10)
Lb10:	SS1(La11)
Lb11:	SS1(La12)
Lb12:	SS1(La13)
Lb13:	SS1(La14)
Lb14:	SS1(La15)
Lb15:	SS1(La16)
Lb16:	SS1(La17)
Lb17:	SS1(La18)
Lb18:	SS1(La19)
Lb19:	SS1(La20)
Lb20:	SS1(La21)
Lb21:	SS1(La22)
Lb22:	SS1(La23)
Lb23:	SS1(La24)
Lb24:	SS1(La25)
Lb25:	SS1(La26)
Lb26:	SS1(La27)
Lb27:	SS1(La28)
Lb28:	SS1(La29)
Lb29:	SS1(La30)
Lb30:	SS1(La31)
Lb31:	SS1(La32)
Lb32:	addx	%o3,%o3,%o2
	xor	%o0,-1,%o0
	add	%o1,%o1,%o1
	sub	%o1,1,%o1
	addcc	%o0,%o2,%o2
	bcc	1f
	subcc	%o2,%o1,%o3
	subcc	%o3,%o1,%o2
	bcs	2f
	add	%o0,1,%o0
	add	%o0,1,%o0
3:	retl
	st	%o2,[%o4]
1:	bcs	3b
	nop
	add	%o0,1,%o0
2:	retl
	st	%o3,[%o4]

Lsmalldiv:
	addcc	%o0,%o0,%o0
Lc00:	SS0(Ld01)
Lc01:	SS0(Ld02)
Lc02:	SS0(Ld03)
Lc03:	SS0(Ld04)
Lc04:	SS0(Ld05)
Lc05:	SS0(Ld06)
Lc06:	SS0(Ld07)
Lc07:	SS0(Ld08)
Lc08:	SS0(Ld09)
Lc09:	SS0(Ld10)
Lc10:	SS0(Ld11)
Lc11:	SS0(Ld12)
Lc12:	SS0(Ld13)
Lc13:	SS0(Ld14)
Lc14:	SS0(Ld15)
Lc15:	SS0(Ld16)
Lc16:	SS0(Ld17)
Lc17:	SS0(Ld18)
Lc18:	SS0(Ld19)
Lc19:	SS0(Ld20)
Lc20:	SS0(Ld21)
Lc21:	SS0(Ld22)
Lc22:	SS0(Ld23)
Lc23:	SS0(Ld24)
Lc24:	SS0(Ld25)
Lc25:	SS0(Ld26)
Lc26:	SS0(Ld27)
Lc27:	SS0(Ld28)
Lc28:	SS0(Ld29)
Lc29:	SS0(Ld30)
Lc30:	SS0(Ld31)
Lc31:	SS0(Ld32)
Lc32:	xor	%o0,-1,%o0
	retl
	st	%o2,[%o4]

Ld01:	SS1(Lc02)
Ld02:	SS1(Lc03)
Ld03:	SS1(Lc04)
Ld04:	SS1(Lc05)
Ld05:	SS1(Lc06)
Ld06:	SS1(Lc07)
Ld07:	SS1(Lc08)
Ld08:	SS1(Lc09)
Ld09:	SS1(Lc10)
Ld10:	SS1(Lc11)
Ld11:	SS1(Lc12)
Ld12:	SS1(Lc13)
Ld13:	SS1(Lc14)
Ld14:	SS1(Lc15)
Ld15:	SS1(Lc16)
Ld16:	SS1(Lc17)
Ld17:	SS1(Lc18)
Ld18:	SS1(Lc19)
Ld19:	SS1(Lc20)
Ld20:	SS1(Lc21)
Ld21:	SS1(Lc22)
Ld22:	SS1(Lc23)
Ld23:	SS1(Lc24)
Ld24:	SS1(Lc25)
Ld25:	SS1(Lc26)
Ld26:	SS1(Lc27)
Ld27:	SS1(Lc28)
Ld28:	SS1(Lc29)
Ld29:	SS1(Lc30)
Ld30:	SS1(Lc31)
Ld31:	SS1(Lc32)
Ld32:	xor	%o0,-1,%o0
	retl
	st	%o3,[%o4]


Levendiv:
	subcc	%o2,%o1,%o3
	bcc	Lf01
	addxcc	%o0,%o0,%o0
Le01:	SS0(Lf02)
Le02:	SS0(Lf03)
Le03:	SS0(Lf04)
Le04:	SS0(Lf05)
Le05:	SS0(Lf06)
Le06:	SS0(Lf07)
Le07:	SS0(Lf08)
Le08:	SS0(Lf09)
Le09:	SS0(Lf10)
Le10:	SS0(Lf11)
Le11:	SS0(Lf12)
Le12:	SS0(Lf13)
Le13:	SS0(Lf14)
Le14:	SS0(Lf15)
Le15:	SS0(Lf16)
Le16:	SS0(Lf17)
Le17:	SS0(Lf18)
Le18:	SS0(Lf19)
Le19:	SS0(Lf20)
Le20:	SS0(Lf21)
Le21:	SS0(Lf22)
Le22:	SS0(Lf23)
Le23:	SS0(Lf24)
Le24:	SS0(Lf25)
Le25:	SS0(Lf26)
Le26:	SS0(Lf27)
Le27:	SS0(Lf28)
Le28:	SS0(Lf29)
Le29:	SS0(Lf30)
Le30:	SS0(Lf31)
Le31:	SS0(Lf32)
Le32:	addx	%o2,%o2,%o2
	xor	%o0,-1,%o0
	retl
	st	%o2,[%o4]

Lf01:	SS1(Le02)
Lf02:	SS1(Le03)
Lf03:	SS1(Le04)
Lf04:	SS1(Le05)
Lf05:	SS1(Le06)
Lf06:	SS1(Le07)
Lf07:	SS1(Le08)
Lf08:	SS1(Le09)
Lf09:	SS1(Le10)
Lf10:	SS1(Le11)
Lf11:	SS1(Le12)
Lf12:	SS1(Le13)
Lf13:	SS1(Le14)
Lf14:	SS1(Le15)
Lf15:	SS1(Le16)
Lf16:	SS1(Le17)
Lf17:	SS1(Le18)
Lf18:	SS1(Le19)
Lf19:	SS1(Le20)
Lf20:	SS1(Le21)
Lf21:	SS1(Le22)
Lf22:	SS1(Le23)
Lf23:	SS1(Le24)
Lf24:	SS1(Le25)
Lf25:	SS1(Le26)
Lf26:	SS1(Le27)
Lf27:	SS1(Le28)
Lf28:	SS1(Le29)
Lf29:	SS1(Le30)
Lf30:	SS1(Le31)
Lf31:	SS1(Le32)
Lf32:	addx	%o3,%o3,%o3
	xor	%o0,-1,%o0
	retl
	st	%o3,[%o4]
