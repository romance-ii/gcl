
#include "cmpinclude.h"
#include "evalmacros.h"
init_evalmacros(){do_init(VV);}
/*	macro definition for DEFVAR	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1)){
	base[3]= Cnil;
	base[4]= Cnil;
	} else {
	base[3]= (V1->c.c_car);
	base[4]= Ct;
	V1=V1->c.c_cdr;}
	if(endp(V1)){
	base[5]= Cnil;
	} else {
	base[5]= (V1->c.c_car);
	V1=V1->c.c_cdr;}
	if(!endp(V1))invalid_macro_call();}
	V2= list(2,VV[1],list(2,VV[2],base[2]));
	if((base[5])==Cnil){
	goto T5;}
	V3= list(4,VV[3],list(2,VV[2],base[2]),base[5],VV[4]);
	goto T3;
T5:;
	V3= Cnil;
T3:;
	if((base[4])==Cnil){
	goto T9;}
	V5= list(2,VV[6],list(2,VV[2],base[2]));
	V4= list(3,VV[5],/* INLINE-ARGS */V5,list(3,VV[7],base[2],base[3]));
	goto T7;
T9:;
	V4= Cnil;
T7:;
	base[6]= list(5,VV[0],/* INLINE-ARGS */V2,V3,V4,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	macro definition for DEFPARAMETER	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V6=base[0]->c.c_cdr;
	if(endp(V6))invalid_macro_call();
	base[2]= (V6->c.c_car);
	V6=V6->c.c_cdr;
	if(endp(V6))invalid_macro_call();
	base[3]= (V6->c.c_car);
	V6=V6->c.c_cdr;
	if(endp(V6)){
	base[4]= Cnil;
	} else {
	base[4]= (V6->c.c_car);
	V6=V6->c.c_cdr;}
	if(!endp(V6))invalid_macro_call();}
	if((base[4])==Cnil){
	goto T13;}
	V7= list(2,VV[1],list(2,VV[2],base[2]));
	V8= list(4,VV[3],list(2,VV[2],base[2]),base[4],VV[8]);
	V9= list(3,VV[7],base[2],base[3]);
	base[5]= list(5,VV[0],/* INLINE-ARGS */V7,/* INLINE-ARGS */V8,/* INLINE-ARGS */V9,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
T13:;
	V10= list(2,VV[1],list(2,VV[2],base[2]));
	V11= list(3,VV[7],base[2],base[3]);
	base[5]= list(4,VV[0],/* INLINE-ARGS */V10,/* INLINE-ARGS */V11,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEFCONSTANT	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V12=base[0]->c.c_cdr;
	if(endp(V12))invalid_macro_call();
	base[2]= (V12->c.c_car);
	V12=V12->c.c_cdr;
	if(endp(V12))invalid_macro_call();
	base[3]= (V12->c.c_car);
	V12=V12->c.c_cdr;
	if(endp(V12)){
	base[4]= Cnil;
	} else {
	base[4]= (V12->c.c_car);
	V12=V12->c.c_cdr;}
	if(!endp(V12))invalid_macro_call();}
	if((base[4])==Cnil){
	goto T17;}
	V13= list(3,VV[9],list(2,VV[2],base[2]),base[3]);
	V14= list(4,VV[3],list(2,VV[2],base[2]),base[4],VV[10]);
	base[5]= list(4,VV[0],/* INLINE-ARGS */V13,/* INLINE-ARGS */V14,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
T17:;
	V15= list(3,VV[9],list(2,VV[2],base[2]),base[3]);
	base[5]= list(3,VV[0],/* INLINE-ARGS */V15,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for AND	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V16=base[0]->c.c_cdr;
	base[2]= V16;}
	if(!(endp(base[2]))){
	goto T20;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
T20:;
	{object V17;
	V17= reverse(base[2]);
	{register object V18;
	register object V19;
	V18= cdr((V17));
	V19= car((V17));
T26:;
	if(!(endp((V18)))){
	goto T27;}
	base[3]= (V19);
	vs_top=(vs_base=base+3)+1;
	return;
T27:;
	{object V20;
	V20= cdr((V18));
	V19= list(3,VV[11],car((V18)),(V19));
	V18= (V20);}
	goto T26;}}
}
/*	macro definition for OR	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V21=base[0]->c.c_cdr;
	base[2]= V21;}
	if(!(endp(base[2]))){
	goto T36;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T36:;
	{object V22;
	V22= reverse(base[2]);
	{register object V23;
	register object V24;
	V23= cdr((V22));
	V24= car((V22));
T42:;
	if(!(endp((V23)))){
	goto T43;}
	base[3]= (V24);
	vs_top=(vs_base=base+3)+1;
	return;
T43:;
	{object V25;
	V25= cdr((V23));
	{register object V26;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V26= vs_base[0];
	V27= list(2,(V26),car((V23)));
	V28= make_cons(/* INLINE-ARGS */V27,Cnil);
	V24= list(3,VV[12],/* INLINE-ARGS */V28,list(4,VV[11],(V26),(V26),(V24)));}
	V23= (V25);}
	goto T42;}}
}
/*	macro definition for LOCALLY	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V29=base[0]->c.c_cdr;
	base[2]= V29;}
	base[3]= listA(3,VV[12],Cnil,base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LOOP	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V30=base[0]->c.c_cdr;
	base[2]= V30;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[3]= vs_base[0];}
	V31= make_cons(VV[0],base[2]);
	base[4]= list(3,VV[13],Cnil,list(4,VV[14],base[3],/* INLINE-ARGS */V31,list(2,VV[15],base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for DEFMACRO	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V32=base[0]->c.c_cdr;
	if(endp(V32))invalid_macro_call();
	base[2]= (V32->c.c_car);
	V32=V32->c.c_cdr;
	if(endp(V32))invalid_macro_call();
	base[3]= (V32->c.c_car);
	V32=V32->c.c_cdr;
	base[4]= V32;}
	V33= list(2,VV[2],base[2]);
	V34= list(2,VV[2],base[2]);
	V35= list(2,VV[2],base[3]);
	base[5]= list(3,VV[16],/* INLINE-ARGS */V33,list(4,VV[17],/* INLINE-ARGS */V34,/* INLINE-ARGS */V35,list(2,VV[2],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEFUN	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(2);
	vs_top=sup;
	{object V36=base[0]->c.c_cdr;
	if(endp(V36))invalid_macro_call();
	base[2]= (V36->c.c_car);
	V36=V36->c.c_cdr;
	if(endp(V36))invalid_macro_call();
	base[3]= (V36->c.c_car);
	V36=V36->c.c_cdr;
	base[4]= V36;}
	{object V37;
	object V38;
	object V39;
	base[5]= base[4];
	base[6]= Cnil;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk46)();
	if(vs_base>=vs_top){vs_top=sup;goto T56;}
	V37= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T57;}
	V38= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T58;}
	V39= vs_base[0];
	vs_top=sup;
	goto T59;
T56:;
	V37= Cnil;
T57:;
	V38= Cnil;
T58:;
	V39= Cnil;
T59:;
	if(((V37))==Cnil){
	goto T61;}
	V40= list(3,VV[18],list(3,VV[19],list(2,VV[2],base[2]),VV[20]),(V37));
	V41= list(2,VV[21],list(2,VV[2],base[2]));
	V42= listA(3,VV[13],base[2],(V39));
	V43= make_cons(/* INLINE-ARGS */V42,Cnil);
	V44= list(3,VV[18],/* INLINE-ARGS */V41,list(2,VV[22],listA(3,VV[23],base[3],append((V38),/* INLINE-ARGS */V43))));
	base[5]= list(4,VV[0],/* INLINE-ARGS */V40,/* INLINE-ARGS */V44,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
T61:;
	V45= list(2,VV[21],list(2,VV[2],base[2]));
	V46= listA(3,VV[13],base[2],(V39));
	V47= make_cons(/* INLINE-ARGS */V46,Cnil);
	V48= list(3,VV[18],/* INLINE-ARGS */V45,list(2,VV[22],listA(3,VV[23],base[3],append((V38),/* INLINE-ARGS */V47))));
	base[5]= list(3,VV[0],/* INLINE-ARGS */V48,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	macro definition for PSETQ	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(2);
	vs_top=sup;
	{object V49=base[0]->c.c_cdr;
	base[2]= V49;}
	{register object V50;
	register object V51;
	register object V52;
	V50= base[2];
	V51= Cnil;
	V52= Cnil;
T64:;
	if(!(endp((V50)))){
	goto T65;}
	V53= reverse((V52));
	V54= make_cons(Cnil,(V51));
	base[3]= listA(3,VV[24],/* INLINE-ARGS */V53,reverse(/* INLINE-ARGS */V54));
	vs_top=(vs_base=base+3)+1;
	return;
T65:;
	{register object V55;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V55= vs_base[0];
	V56= list(2,(V55),cadr((V50)));
	V52= make_cons(/* INLINE-ARGS */V56,(V52));
	V57= list(3,VV[7],car((V50)),(V55));
	V51= make_cons(/* INLINE-ARGS */V57,(V51));}
	V50= cddr((V50));
	goto T64;}
}
/*	macro definition for COND	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(2);
	vs_top=sup;
	{object V58=base[0]->c.c_cdr;
	base[2]= V58;
	base[3]= Cnil;}
	{register object V59;
	register object V60;
	V59= reverse(base[2]);
	V60= car((V59));
T81:;
	if(!(endp((V59)))){
	goto T82;}
	vs_top=(vs_base=base+3)+1;
	return;
T82:;
	if(!(endp(cdr((V60))))){
	goto T88;}
	if(!((car((V60)))==(Ct))){
	goto T91;}
	base[3]= Ct;
	goto T86;
T91:;
	{register object V61;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V61= vs_base[0];
	V62= list(2,(V61),car((V60)));
	V63= make_cons(/* INLINE-ARGS */V62,Cnil);
	base[3]= list(3,VV[12],/* INLINE-ARGS */V63,list(4,VV[11],(V61),(V61),base[3]));
	goto T86;}
T88:;
	if(!((car((V60)))==(Ct))){
	goto T97;}
	if(!(endp(cddr((V60))))){
	goto T101;}
	base[3]= cadr((V60));
	goto T99;
T101:;
	base[3]= make_cons(VV[0],cdr((V60)));
T99:;
	goto T86;
T97:;
	if(!(endp(cddr((V60))))){
	goto T105;}
	base[3]= list(4,VV[11],car((V60)),cadr((V60)),base[3]);
	goto T103;
T105:;
	V64= car((V60));
	base[3]= list(4,VV[11],/* INLINE-ARGS */V64,make_cons(VV[0],cdr((V60))),base[3]);
T103:;
T86:;
	V59= cdr((V59));
	V60= car((V59));
	goto T81;}
}
/*	macro definition for WHEN	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V65=base[0]->c.c_cdr;
	if(endp(V65))invalid_macro_call();
	base[2]= (V65->c.c_car);
	V65=V65->c.c_cdr;
	base[3]= V65;}
	base[4]= list(3,VV[11],base[2],make_cons(VV[0],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for UNLESS	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V66=base[0]->c.c_cdr;
	if(endp(V66))invalid_macro_call();
	base[2]= (V66->c.c_car);
	V66=V66->c.c_cdr;
	base[3]= V66;}
	V67= list(2,VV[25],base[2]);
	base[4]= list(3,VV[11],/* INLINE-ARGS */V67,make_cons(VV[0],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for PROG	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V68=base[0]->c.c_cdr;
	if(endp(V68))invalid_macro_call();
	base[2]= (V68->c.c_car);
	V68=V68->c.c_cdr;
	base[3]= V68;
	base[4]= Cnil;}
T114:;
	if(endp(base[3])){
	goto T116;}
	if(!(type_of(car(base[3]))==t_cons)){
	goto T116;}
	if((caar(base[3]))==(VV[26])){
	goto T115;}
T116:;
	V69= make_cons(VV[14],base[3]);
	V70= make_cons(/* INLINE-ARGS */V69,Cnil);
	base[5]= list(3,VV[13],Cnil,listA(3,VV[12],base[2],append(base[4],/* INLINE-ARGS */V70)));
	vs_top=(vs_base=base+5)+1;
	return;
T115:;
	base[4]= make_cons(car(base[3]),base[4]);
	{register object V71;
	V71= car(base[3]);
	base[3]= cdr(base[3]);}
	goto T114;
}
/*	macro definition for PROG*	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(2);
	vs_top=sup;
	{object V72=base[0]->c.c_cdr;
	if(endp(V72))invalid_macro_call();
	base[2]= (V72->c.c_car);
	V72=V72->c.c_cdr;
	base[3]= V72;
	base[4]= Cnil;}
T133:;
	if(endp(base[3])){
	goto T135;}
	if(!(type_of(car(base[3]))==t_cons)){
	goto T135;}
	if((caar(base[3]))==(VV[26])){
	goto T134;}
T135:;
	V73= make_cons(VV[14],base[3]);
	V74= make_cons(/* INLINE-ARGS */V73,Cnil);
	base[5]= list(3,VV[13],Cnil,listA(3,VV[24],base[2],append(base[4],/* INLINE-ARGS */V74)));
	vs_top=(vs_base=base+5)+1;
	return;
T134:;
	base[4]= make_cons(car(base[3]),base[4]);
	{register object V75;
	V75= car(base[3]);
	base[3]= cdr(base[3]);}
	goto T133;
}
/*	macro definition for PROG1	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(2);
	vs_top=sup;
	{object V76=base[0]->c.c_cdr;
	if(endp(V76))invalid_macro_call();
	base[2]= (V76->c.c_car);
	V76=V76->c.c_cdr;
	base[3]= V76;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[4]= vs_base[0];}
	V77= list(2,base[4],base[2]);
	V78= make_cons(/* INLINE-ARGS */V77,Cnil);
	V79= make_cons(base[4],Cnil);
	base[5]= listA(3,VV[12],/* INLINE-ARGS */V78,append(base[3],/* INLINE-ARGS */V79));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for PROG2	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	check_arg(2);
	vs_top=sup;
	{object V80=base[0]->c.c_cdr;
	if(endp(V80))invalid_macro_call();
	base[2]= (V80->c.c_car);
	V80=V80->c.c_cdr;
	if(endp(V80))invalid_macro_call();
	base[3]= (V80->c.c_car);
	V80=V80->c.c_cdr;
	base[4]= V80;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[5]= vs_base[0];}
	V81= list(2,base[5],base[3]);
	V82= make_cons(/* INLINE-ARGS */V81,Cnil);
	V83= make_cons(base[5],Cnil);
	base[6]= list(3,VV[0],base[2],listA(3,VV[12],/* INLINE-ARGS */V82,append(base[4],/* INLINE-ARGS */V83)));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	macro definition for MULTIPLE-VALUE-LIST	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V84=base[0]->c.c_cdr;
	if(endp(V84))invalid_macro_call();
	base[2]= (V84->c.c_car);
	V84=V84->c.c_cdr;
	if(!endp(V84))invalid_macro_call();}
	base[3]= list(3,VV[27],VV[28],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for MULTIPLE-VALUE-SETQ	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(2);
	vs_top=sup;
	{object V85=base[0]->c.c_cdr;
	if(endp(V85))invalid_macro_call();
	base[2]= (V85->c.c_car);
	V85=V85->c.c_cdr;
	if(endp(V85))invalid_macro_call();
	base[3]= (V85->c.c_car);
	V85=V85->c.c_cdr;
	if(!endp(V85))invalid_macro_call();}
	{register object V86;
	register object V87;
	register object V88;
	register int V89;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V87= vs_base[0];
	V89= 0;
	V86= base[2];
	V88= Cnil;
T155:;
	if(!(endp((V86)))){
	goto T156;}
	V90= list(2,(V87),list(2,VV[29],base[3]));
	base[4]= listA(3,VV[12],make_cons(/* INLINE-ARGS */V90,Cnil),(V88));
	vs_top=(vs_base=base+4)+1;
	return;
T156:;
	V91= car((V86));
	V92 = make_fixnum(V89);
	V93= list(3,VV[7],/* INLINE-ARGS */V91,list(3,VV[30],V92,(V87)));
	V88= make_cons(/* INLINE-ARGS */V93,(V88));
	V86= cdr((V86));
	V89= (V89)+1;
	goto T155;}
}
/*	macro definition for MULTIPLE-VALUE-BIND	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	check_arg(2);
	vs_top=sup;
	{object V94=base[0]->c.c_cdr;
	if(endp(V94))invalid_macro_call();
	base[2]= (V94->c.c_car);
	V94=V94->c.c_cdr;
	if(endp(V94))invalid_macro_call();
	base[3]= (V94->c.c_car);
	V94=V94->c.c_cdr;
	base[4]= V94;}
	{register object V95;
	register object V96;
	register object V97;
	register int V98;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V96= vs_base[0];
	V98= 0;
	V95= base[2];
	V97= Cnil;
T169:;
	if(!(endp((V95)))){
	goto T170;}
	V99= list(2,(V96),list(2,VV[29],base[3]));
	V100= reverse((V97));
	base[5]= listA(3,VV[24],make_cons(/* INLINE-ARGS */V99,/* INLINE-ARGS */V100),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
T170:;
	V101= car((V95));
	V102 = make_fixnum(V98);
	V103= list(2,/* INLINE-ARGS */V101,list(3,VV[30],V102,(V96)));
	V97= make_cons(/* INLINE-ARGS */V103,(V97));
	V95= cdr((V95));
	V98= (V98)+1;
	goto T169;}
}
/*	macro definition for DO	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	check_arg(2);
	vs_top=sup;
	{object V104=base[0]->c.c_cdr;
	if(endp(V104))invalid_macro_call();
	base[2]= (V104->c.c_car);
	V104=V104->c.c_cdr;
	if(endp(V104))invalid_macro_call();
	{object V105= (V104->c.c_car);
	if(endp(V105))invalid_macro_call();
	base[3]= (V105->c.c_car);
	V105=V105->c.c_cdr;
	base[4]= V105;}
	V104=V104->c.c_cdr;
	base[5]= V104;
	base[6]= Cnil;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= Cnil;
	base[9]= Cnil;}
T186:;
	if(endp(base[5])){
	goto T188;}
	if(!(type_of(car(base[5]))==t_cons)){
	goto T188;}
	if((caar(base[5]))==(VV[26])){
	goto T187;}
T188:;
	goto T184;
T187:;
	base[6]= make_cons(car(base[5]),base[6]);
	{register object V106;
	V106= car(base[5]);
	base[5]= cdr(base[5]);}
	goto T186;
T184:;
	{register object V107;
	register object V108;
	V107= base[2];
	V108= car((V107));
T207:;
	if(!(endp((V107)))){
	goto T208;}
	goto T203;
T208:;
	if(!(type_of((V108))==t_symbol)){
	goto T212;}
	V108= make_cons((V108),Cnil);
T212:;
	V109= list(2,car((V108)),cadr((V108)));
	base[8]= make_cons(/* INLINE-ARGS */V109,base[8]);
	if(endp(cddr((V108)))){
	goto T218;}
	base[9]= make_cons(car((V108)),base[9]);
	base[9]= make_cons(caddr((V108)),base[9]);
T218:;
	V107= cdr((V107));
	V108= car((V107));
	goto T207;}
T203:;
	V110= reverse(base[8]);
	V111= list(3,VV[11],base[3],list(2,VV[31],make_cons(VV[0],base[4])));
	V112= make_cons(VV[14],base[5]);
	V113= reverse(base[9]);
	V114= make_cons(VV[32],/* INLINE-ARGS */V113);
	V115= list(6,VV[14],base[7],/* INLINE-ARGS */V111,/* INLINE-ARGS */V112,/* INLINE-ARGS */V114,list(2,VV[15],base[7]));
	V116= make_cons(/* INLINE-ARGS */V115,Cnil);
	base[10]= list(3,VV[13],Cnil,listA(3,VV[12],/* INLINE-ARGS */V110,append(base[6],/* INLINE-ARGS */V116)));
	vs_top=(vs_base=base+10)+1;
	return;
}
/*	macro definition for DO*	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	check_arg(2);
	vs_top=sup;
	{object V117=base[0]->c.c_cdr;
	if(endp(V117))invalid_macro_call();
	base[2]= (V117->c.c_car);
	V117=V117->c.c_cdr;
	if(endp(V117))invalid_macro_call();
	{object V118= (V117->c.c_car);
	if(endp(V118))invalid_macro_call();
	base[3]= (V118->c.c_car);
	V118=V118->c.c_cdr;
	base[4]= V118;}
	V117=V117->c.c_cdr;
	base[5]= V117;
	base[6]= Cnil;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= Cnil;
	base[9]= Cnil;}
T235:;
	if(endp(base[5])){
	goto T237;}
	if(!(type_of(car(base[5]))==t_cons)){
	goto T237;}
	if((caar(base[5]))==(VV[26])){
	goto T236;}
T237:;
	goto T233;
T236:;
	base[6]= make_cons(car(base[5]),base[6]);
	{register object V119;
	V119= car(base[5]);
	base[5]= cdr(base[5]);}
	goto T235;
T233:;
	{register object V120;
	register object V121;
	V120= base[2];
	V121= car((V120));
T256:;
	if(!(endp((V120)))){
	goto T257;}
	goto T252;
T257:;
	if(!(type_of((V121))==t_symbol)){
	goto T261;}
	V121= make_cons((V121),Cnil);
T261:;
	V122= list(2,car((V121)),cadr((V121)));
	base[8]= make_cons(/* INLINE-ARGS */V122,base[8]);
	if(endp(cddr((V121)))){
	goto T267;}
	base[9]= make_cons(car((V121)),base[9]);
	base[9]= make_cons(caddr((V121)),base[9]);
T267:;
	V120= cdr((V120));
	V121= car((V120));
	goto T256;}
T252:;
	V123= reverse(base[8]);
	V124= list(3,VV[11],base[3],list(2,VV[31],make_cons(VV[0],base[4])));
	V125= make_cons(VV[14],base[5]);
	V126= reverse(base[9]);
	V127= make_cons(VV[7],/* INLINE-ARGS */V126);
	V128= list(6,VV[14],base[7],/* INLINE-ARGS */V124,/* INLINE-ARGS */V125,/* INLINE-ARGS */V127,list(2,VV[15],base[7]));
	V129= make_cons(/* INLINE-ARGS */V128,Cnil);
	base[10]= list(3,VV[13],Cnil,listA(3,VV[24],/* INLINE-ARGS */V123,append(base[6],/* INLINE-ARGS */V129)));
	vs_top=(vs_base=base+10)+1;
	return;
}
/*	macro definition for CASE	*/

static L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	check_arg(2);
	vs_top=sup;
	{object V130=base[0]->c.c_cdr;
	if(endp(V130))invalid_macro_call();
	base[2]= (V130->c.c_car);
	V130=V130->c.c_cdr;
	base[3]= V130;
	base[4]= Cnil;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[5]= vs_base[0];}
	{register object V131;
	register object V132;
	V131= reverse(base[3]);
	V132= car((V131));
T283:;
	if(!(endp((V131)))){
	goto T284;}
	V133= list(2,base[5],base[2]);
	base[8]= list(3,VV[12],make_cons(/* INLINE-ARGS */V133,Cnil),base[4]);
	vs_top=(vs_base=base+8)+1;
	return;
T284:;
	if((car((V132)))==(Ct)){
	goto T289;}
	if(!((car((V132)))==(VV[33]))){
	goto T290;}
T289:;
	base[4]= make_cons(VV[0],cdr((V132)));
	goto T288;
T290:;
	if(!(type_of(car((V132)))==t_cons)){
	goto T296;}
	V134= list(3,VV[34],base[5],list(2,VV[2],car((V132))));
	base[4]= list(4,VV[11],/* INLINE-ARGS */V134,make_cons(VV[0],cdr((V132))),base[4]);
	goto T288;
T296:;
	if((car((V132)))==Cnil){
	goto T288;}
	V135= list(3,VV[35],base[5],list(2,VV[2],car((V132))));
	base[4]= list(4,VV[11],/* INLINE-ARGS */V135,make_cons(VV[0],cdr((V132))),base[4]);
T288:;
	V131= cdr((V131));
	V132= car((V131));
	goto T283;}
}
/*	macro definition for RETURN	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(2);
	vs_top=sup;
	{object V136=base[0]->c.c_cdr;
	if(endp(V136)){
	base[2]= Cnil;
	} else {
	base[2]= (V136->c.c_car);
	V136=V136->c.c_cdr;}
	if(!endp(V136))invalid_macro_call();}
	base[3]= list(3,VV[36],Cnil,base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DOLIST	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	check_arg(2);
	vs_top=sup;
	{object V137=base[0]->c.c_cdr;
	if(endp(V137))invalid_macro_call();
	{object V138= (V137->c.c_car);
	if(endp(V138))invalid_macro_call();
	base[2]= (V138->c.c_car);
	V138=V138->c.c_cdr;
	if(endp(V138))invalid_macro_call();
	base[3]= (V138->c.c_car);
	V138=V138->c.c_cdr;
	if(endp(V138)){
	base[4]= Cnil;
	} else {
	base[4]= (V138->c.c_car);
	V138=V138->c.c_cdr;}
	if(!endp(V138))invalid_macro_call();}
	V137=V137->c.c_cdr;
	base[5]= V137;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[6]= vs_base[0];}
	V139= list(3,base[6],base[3],list(2,VV[38],base[6]));
	V140= list(2,VV[39],base[6]);
	V141= list(2,/* INLINE-ARGS */V139,list(3,base[2],/* INLINE-ARGS */V140,list(2,VV[39],base[6])));
	base[7]= listA(4,VV[37],/* INLINE-ARGS */V141,list(2,list(2,VV[40],base[6]),base[4]),base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for DOTIMES	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	check_arg(2);
	vs_top=sup;
	{object V142=base[0]->c.c_cdr;
	if(endp(V142))invalid_macro_call();
	{object V143= (V142->c.c_car);
	if(endp(V143))invalid_macro_call();
	base[2]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(endp(V143))invalid_macro_call();
	base[3]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(endp(V143)){
	base[4]= Cnil;
	} else {
	base[4]= (V143->c.c_car);
	V143=V143->c.c_cdr;}
	if(!endp(V143))invalid_macro_call();}
	V142=V142->c.c_cdr;
	base[5]= V142;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[6]= vs_base[0];}
	V144= list(2,base[6],base[3]);
	V145= list(2,/* INLINE-ARGS */V144,list(3,base[2],small_fixnum(0),list(2,VV[41],base[2])));
	base[7]= listA(4,VV[37],/* INLINE-ARGS */V145,list(2,list(3,VV[42],base[2],base[6]),base[4]),base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for DECLAIM	*/

static L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	check_arg(2);
	vs_top=sup;
	{object V146=base[0]->c.c_cdr;
	base[2]= V146;}
	{object V148;
	object V149= base[2];
	if(endp(V149)){
	V147= Cnil;
	goto T312;}
	base[3]=V148=MMcons(Cnil,Cnil);
T313:;
	(V148->c.c_car)= list(2,VV[45],list(2,VV[2],(V149->c.c_car)));
	if(endp(V149=MMcdr(V149))){
	V147= base[3];
	goto T312;}
	V148=MMcdr(V148)=MMcons(Cnil,Cnil);
	goto T313;}
T312:;
	base[3]= listA(3,VV[43],VV[44],V147);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LAMBDA	*/

static L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	check_arg(2);
	vs_top=sup;
	{object V151=base[0]->c.c_cdr;
	base[2]= V151;}
	base[3]= list(2,VV[22],make_cons(VV[23],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
static LnkT46(){ call_or_link(VV[46],&Lnk46);} /* FIND-DOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

