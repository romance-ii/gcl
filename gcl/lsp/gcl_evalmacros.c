
#include "cmpinclude.h"
#include "gcl_evalmacros.h"
void init_gcl_evalmacros(){do_init(VV);}
/*	macro definition for DEFVAR	*/

static void L1()
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
	goto T5;
T5:;
	V3= Cnil;
	goto T3;
T3:;
	if((base[4])==Cnil){
	goto T9;}
	V5= list(2,VV[6],list(2,VV[2],base[2]));
	V4= list(3,VV[5],/* INLINE-ARGS */V5,list(3,VV[7],base[2],base[3]));
	goto T7;
	goto T9;
T9:;
	V4= Cnil;
	goto T7;
T7:;
	base[6]= list(5,VV[0],/* INLINE-ARGS */V2,V3,V4,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	macro definition for DEFPARAMETER	*/

static void L2()
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
	goto T13;
T13:;
	V10= list(2,VV[1],list(2,VV[2],base[2]));
	V11= list(3,VV[7],base[2],base[3]);
	base[5]= list(4,VV[0],/* INLINE-ARGS */V10,/* INLINE-ARGS */V11,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEFCONSTANT	*/

static void L3()
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
	goto T17;
T17:;
	V15= list(3,VV[9],list(2,VV[2],base[2]),base[3]);
	base[5]= list(3,VV[0],/* INLINE-ARGS */V15,list(2,VV[2],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for AND	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V16=base[0]->c.c_cdr;
	base[2]= V16;}
	if(!(endp_prop(base[2]))){
	goto T20;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T20;
T20:;
	{object V17;
	V17= reverse(base[2]);
	{register object V18;
	register object V19;
	V18= cdr((V17));
	V19= car((V17));
	goto T26;
T26:;
	if(!(endp_prop((V18)))){
	goto T27;}
	base[3]= (V19);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T27;
T27:;
	{object V20;
	V20= cdr((V18));
	V19= list(3,VV[11],car((V18)),(V19));
	V18= (V20);}
	goto T26;}}
}
/*	macro definition for OR	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V21=base[0]->c.c_cdr;
	base[2]= V21;}
	if(!(endp_prop(base[2]))){
	goto T36;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T36;
T36:;
	{object V22;
	V22= reverse(base[2]);
	{register object V23;
	register object V24;
	V23= cdr((V22));
	V24= car((V22));
	goto T42;
T42:;
	if(!(endp_prop((V23)))){
	goto T43;}
	base[3]= (V24);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T43;
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

static void L6()
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

static void L7()
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

static void L8()
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

static void L9()
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
	goto T56;
T56:;
	V37= Cnil;
	goto T57;
T57:;
	V38= Cnil;
	goto T58;
T58:;
	V39= Cnil;
	goto T59;
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
	goto T61;
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

static void L10()
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
	goto T64;
T64:;
	if(!(endp_prop((V50)))){
	goto T65;}
	V53= reverse((V52));
	V54= make_cons(Cnil,(V51));
	base[3]= listA(3,VV[24],/* INLINE-ARGS */V53,reverse(/* INLINE-ARGS */V54));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T65;
T65:;
	{register object V55;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V55= vs_base[0];
	{register object V56;
	V56= list(2,(V55),cadr((V50)));
	V52= make_cons((V56),(V52));}
	{register object V57;
	V57= list(3,VV[7],car((V50)),(V55));
	V51= make_cons((V57),(V51));}}
	V50= cddr((V50));
	goto T64;}
}
/*	macro definition for COND	*/

static void L11()
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
	goto T83;
T83:;
	if(!(endp_prop((V59)))){
	goto T84;}
	vs_top=(vs_base=base+3)+1;
	return;
	goto T84;
T84:;
	if(!(endp_prop(cdr((V60))))){
	goto T90;}
	if(!((car((V60)))==(Ct))){
	goto T93;}
	base[3]= Ct;
	goto T88;
	goto T93;
T93:;
	{register object V61;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V61= vs_base[0];
	V62= list(2,(V61),car((V60)));
	V63= make_cons(/* INLINE-ARGS */V62,Cnil);
	base[3]= list(3,VV[12],/* INLINE-ARGS */V63,list(4,VV[11],(V61),(V61),base[3]));
	goto T88;}
	goto T90;
T90:;
	if(!((car((V60)))==(Ct))){
	goto T99;}
	if(!(endp_prop(cddr((V60))))){
	goto T103;}
	base[3]= cadr((V60));
	goto T101;
	goto T103;
T103:;
	base[3]= make_cons(VV[0],cdr((V60)));
	goto T101;
T101:;
	goto T88;
	goto T99;
T99:;
	if(!(endp_prop(cddr((V60))))){
	goto T107;}
	base[3]= list(4,VV[11],car((V60)),cadr((V60)),base[3]);
	goto T105;
	goto T107;
T107:;
	V64= car((V60));
	base[3]= list(4,VV[11],/* INLINE-ARGS */V64,make_cons(VV[0],cdr((V60))),base[3]);
	goto T105;
T105:;
	goto T88;
T88:;
	V59= cdr((V59));
	V60= car((V59));
	goto T83;}
}
/*	macro definition for WHEN	*/

static void L12()
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

static void L13()
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

static void L14()
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
	goto T116;
T116:;
	if(endp_prop(base[3])){
	goto T118;}
	if(!(type_of(car(base[3]))==t_cons)){
	goto T118;}
	if((caar(base[3]))==(VV[26])){
	goto T117;}
	goto T118;
T118:;
	V69= make_cons(VV[14],base[3]);
	V70= make_cons(/* INLINE-ARGS */V69,Cnil);
	base[5]= list(3,VV[13],Cnil,listA(3,VV[12],base[2],append(base[4],/* INLINE-ARGS */V70)));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T117;
T117:;
	{register object V71;
	V71= car(base[3]);
	base[4]= make_cons((V71),base[4]);}
	{register object V72;
	V72= car(base[3]);
	base[3]= cdr(base[3]);}
	goto T116;
}
/*	macro definition for PROG*	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(2);
	vs_top=sup;
	{object V73=base[0]->c.c_cdr;
	if(endp(V73))invalid_macro_call();
	base[2]= (V73->c.c_car);
	V73=V73->c.c_cdr;
	base[3]= V73;
	base[4]= Cnil;}
	goto T136;
T136:;
	if(endp_prop(base[3])){
	goto T138;}
	if(!(type_of(car(base[3]))==t_cons)){
	goto T138;}
	if((caar(base[3]))==(VV[26])){
	goto T137;}
	goto T138;
T138:;
	V74= make_cons(VV[14],base[3]);
	V75= make_cons(/* INLINE-ARGS */V74,Cnil);
	base[5]= list(3,VV[13],Cnil,listA(3,VV[24],base[2],append(base[4],/* INLINE-ARGS */V75)));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T137;
T137:;
	{register object V76;
	V76= car(base[3]);
	base[4]= make_cons((V76),base[4]);}
	{register object V77;
	V77= car(base[3]);
	base[3]= cdr(base[3]);}
	goto T136;
}
/*	macro definition for PROG1	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(2);
	vs_top=sup;
	{object V78=base[0]->c.c_cdr;
	if(endp(V78))invalid_macro_call();
	base[2]= (V78->c.c_car);
	V78=V78->c.c_cdr;
	base[3]= V78;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[4]= vs_base[0];}
	V79= list(2,base[4],base[2]);
	V80= make_cons(/* INLINE-ARGS */V79,Cnil);
	V81= make_cons(base[4],Cnil);
	base[5]= listA(3,VV[12],/* INLINE-ARGS */V80,append(base[3],/* INLINE-ARGS */V81));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for PROG2	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	check_arg(2);
	vs_top=sup;
	{object V82=base[0]->c.c_cdr;
	if(endp(V82))invalid_macro_call();
	base[2]= (V82->c.c_car);
	V82=V82->c.c_cdr;
	if(endp(V82))invalid_macro_call();
	base[3]= (V82->c.c_car);
	V82=V82->c.c_cdr;
	base[4]= V82;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[5]= vs_base[0];}
	V83= list(2,base[5],base[3]);
	V84= make_cons(/* INLINE-ARGS */V83,Cnil);
	V85= make_cons(base[5],Cnil);
	base[6]= list(3,VV[0],base[2],listA(3,VV[12],/* INLINE-ARGS */V84,append(base[4],/* INLINE-ARGS */V85)));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	macro definition for MULTIPLE-VALUE-LIST	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V86=base[0]->c.c_cdr;
	if(endp(V86))invalid_macro_call();
	base[2]= (V86->c.c_car);
	V86=V86->c.c_cdr;
	if(!endp(V86))invalid_macro_call();}
	base[3]= list(3,VV[27],VV[28],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for MULTIPLE-VALUE-SETQ	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(2);
	vs_top=sup;
	{object V87=base[0]->c.c_cdr;
	if(endp(V87))invalid_macro_call();
	base[2]= (V87->c.c_car);
	V87=V87->c.c_cdr;
	if(endp(V87))invalid_macro_call();
	base[3]= (V87->c.c_car);
	V87=V87->c.c_cdr;
	if(!endp(V87))invalid_macro_call();}
	{register object V88;
	register object V89;
	register object V90;
	register long V91;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V89= vs_base[0];
	V91= 0;
	V88= base[2];
	V90= Cnil;
	goto T159;
T159:;
	if(!(endp_prop((V88)))){
	goto T160;}
	V92= list(2,(V89),list(2,VV[29],base[3]));
	base[4]= listA(3,VV[12],make_cons(/* INLINE-ARGS */V92,Cnil),(V90));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T160;
T160:;
	{register object V93;
	V94= car((V88));
	V95 = make_fixnum(V91);
	V93= list(3,VV[7],/* INLINE-ARGS */V94,list(3,VV[30],V95,(V89)));
	V90= make_cons((V93),(V90));}
	V88= cdr((V88));
	V91= (long)(V91)+1;
	goto T159;}
}
/*	macro definition for MULTIPLE-VALUE-BIND	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	check_arg(2);
	vs_top=sup;
	{object V96=base[0]->c.c_cdr;
	if(endp(V96))invalid_macro_call();
	base[2]= (V96->c.c_car);
	V96=V96->c.c_cdr;
	if(endp(V96))invalid_macro_call();
	base[3]= (V96->c.c_car);
	V96=V96->c.c_cdr;
	base[4]= V96;}
	{register object V97;
	register object V98;
	register object V99;
	register long V100;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V98= vs_base[0];
	V100= 0;
	V97= base[2];
	V99= Cnil;
	goto T174;
T174:;
	if(!(endp_prop((V97)))){
	goto T175;}
	V101= list(2,(V98),list(2,VV[29],base[3]));
	V102= reverse((V99));
	base[5]= listA(3,VV[24],make_cons(/* INLINE-ARGS */V101,/* INLINE-ARGS */V102),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T175;
T175:;
	{register object V103;
	V104= car((V97));
	V105 = make_fixnum(V100);
	V103= list(2,/* INLINE-ARGS */V104,list(3,VV[30],V105,(V98)));
	V99= make_cons((V103),(V99));}
	V97= cdr((V97));
	V100= (long)(V100)+1;
	goto T174;}
}
/*	macro definition for DO	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	check_arg(2);
	vs_top=sup;
	{object V106=base[0]->c.c_cdr;
	if(endp(V106))invalid_macro_call();
	base[2]= (V106->c.c_car);
	V106=V106->c.c_cdr;
	if(endp(V106))invalid_macro_call();
	{object V107= (V106->c.c_car);
	if(endp(V107))invalid_macro_call();
	base[3]= (V107->c.c_car);
	V107=V107->c.c_cdr;
	base[4]= V107;}
	V106=V106->c.c_cdr;
	base[5]= V106;
	base[6]= Cnil;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= Cnil;
	base[9]= Cnil;}
	goto T192;
T192:;
	if(endp_prop(base[5])){
	goto T194;}
	if(!(type_of(car(base[5]))==t_cons)){
	goto T194;}
	if((caar(base[5]))==(VV[26])){
	goto T193;}
	goto T194;
T194:;
	goto T190;
	goto T193;
T193:;
	{register object V108;
	V108= car(base[5]);
	base[6]= make_cons((V108),base[6]);}
	{register object V109;
	V109= car(base[5]);
	base[5]= cdr(base[5]);}
	goto T192;
	goto T190;
T190:;
	{register object V110;
	register object V111;
	V110= base[2];
	V111= car((V110));
	goto T214;
T214:;
	if(!(endp_prop((V110)))){
	goto T215;}
	goto T210;
	goto T215;
T215:;
	if(!(type_of((V111))==t_symbol)){
	goto T219;}
	V111= make_cons((V111),Cnil);
	goto T219;
T219:;
	{register object V112;
	V112= list(2,car((V111)),cadr((V111)));
	base[8]= make_cons((V112),base[8]);}
	if(endp_prop(cddr((V111)))){
	goto T226;}
	{register object V113;
	V113= car((V111));
	base[9]= make_cons((V113),base[9]);}
	{register object V114;
	V114= caddr((V111));
	base[9]= make_cons((V114),base[9]);}
	goto T226;
T226:;
	V110= cdr((V110));
	V111= car((V110));
	goto T214;}
	goto T210;
T210:;
	V115= reverse(base[8]);
	V116= list(3,VV[11],base[3],list(2,VV[31],make_cons(VV[0],base[4])));
	V117= make_cons(VV[14],base[5]);
	V118= reverse(base[9]);
	V119= make_cons(VV[32],/* INLINE-ARGS */V118);
	V120= list(6,VV[14],base[7],/* INLINE-ARGS */V116,/* INLINE-ARGS */V117,/* INLINE-ARGS */V119,list(2,VV[15],base[7]));
	V121= make_cons(/* INLINE-ARGS */V120,Cnil);
	base[10]= list(3,VV[13],Cnil,listA(3,VV[12],/* INLINE-ARGS */V115,append(base[6],/* INLINE-ARGS */V121)));
	vs_top=(vs_base=base+10)+1;
	return;
}
/*	macro definition for DO*	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	check_arg(2);
	vs_top=sup;
	{object V122=base[0]->c.c_cdr;
	if(endp(V122))invalid_macro_call();
	base[2]= (V122->c.c_car);
	V122=V122->c.c_cdr;
	if(endp(V122))invalid_macro_call();
	{object V123= (V122->c.c_car);
	if(endp(V123))invalid_macro_call();
	base[3]= (V123->c.c_car);
	V123=V123->c.c_cdr;
	base[4]= V123;}
	V122=V122->c.c_cdr;
	base[5]= V122;
	base[6]= Cnil;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= Cnil;
	base[9]= Cnil;}
	goto T245;
T245:;
	if(endp_prop(base[5])){
	goto T247;}
	if(!(type_of(car(base[5]))==t_cons)){
	goto T247;}
	if((caar(base[5]))==(VV[26])){
	goto T246;}
	goto T247;
T247:;
	goto T243;
	goto T246;
T246:;
	{register object V124;
	V124= car(base[5]);
	base[6]= make_cons((V124),base[6]);}
	{register object V125;
	V125= car(base[5]);
	base[5]= cdr(base[5]);}
	goto T245;
	goto T243;
T243:;
	{register object V126;
	register object V127;
	V126= base[2];
	V127= car((V126));
	goto T267;
T267:;
	if(!(endp_prop((V126)))){
	goto T268;}
	goto T263;
	goto T268;
T268:;
	if(!(type_of((V127))==t_symbol)){
	goto T272;}
	V127= make_cons((V127),Cnil);
	goto T272;
T272:;
	{register object V128;
	V128= list(2,car((V127)),cadr((V127)));
	base[8]= make_cons((V128),base[8]);}
	if(endp_prop(cddr((V127)))){
	goto T279;}
	{register object V129;
	V129= car((V127));
	base[9]= make_cons((V129),base[9]);}
	{register object V130;
	V130= caddr((V127));
	base[9]= make_cons((V130),base[9]);}
	goto T279;
T279:;
	V126= cdr((V126));
	V127= car((V126));
	goto T267;}
	goto T263;
T263:;
	V131= reverse(base[8]);
	V132= list(3,VV[11],base[3],list(2,VV[31],make_cons(VV[0],base[4])));
	V133= make_cons(VV[14],base[5]);
	V134= reverse(base[9]);
	V135= make_cons(VV[7],/* INLINE-ARGS */V134);
	V136= list(6,VV[14],base[7],/* INLINE-ARGS */V132,/* INLINE-ARGS */V133,/* INLINE-ARGS */V135,list(2,VV[15],base[7]));
	V137= make_cons(/* INLINE-ARGS */V136,Cnil);
	base[10]= list(3,VV[13],Cnil,listA(3,VV[24],/* INLINE-ARGS */V131,append(base[6],/* INLINE-ARGS */V137)));
	vs_top=(vs_base=base+10)+1;
	return;
}
/*	macro definition for CASE	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	check_arg(2);
	vs_top=sup;
	{object V138=base[0]->c.c_cdr;
	if(endp(V138))invalid_macro_call();
	base[2]= (V138->c.c_car);
	V138=V138->c.c_cdr;
	base[3]= V138;
	base[4]= Cnil;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[5]= vs_base[0];}
	{register object V139;
	register object V140;
	V139= reverse(base[3]);
	V140= car((V139));
	goto T297;
T297:;
	if(!(endp_prop((V139)))){
	goto T298;}
	V141= list(2,base[5],base[2]);
	base[8]= list(3,VV[12],make_cons(/* INLINE-ARGS */V141,Cnil),base[4]);
	vs_top=(vs_base=base+8)+1;
	return;
	goto T298;
T298:;
	if((car((V140)))==(Ct)){
	goto T303;}
	if(!((car((V140)))==(VV[33]))){
	goto T304;}
	goto T303;
T303:;
	base[4]= make_cons(VV[0],cdr((V140)));
	goto T302;
	goto T304;
T304:;
	if(!(type_of(car((V140)))==t_cons)){
	goto T310;}
	V142= list(3,VV[34],base[5],list(2,VV[2],car((V140))));
	base[4]= list(4,VV[11],/* INLINE-ARGS */V142,make_cons(VV[0],cdr((V140))),base[4]);
	goto T302;
	goto T310;
T310:;
	if((car((V140)))==Cnil){
	goto T302;}
	V143= list(3,VV[35],base[5],list(2,VV[2],car((V140))));
	base[4]= list(4,VV[11],/* INLINE-ARGS */V143,make_cons(VV[0],cdr((V140))),base[4]);
	goto T302;
T302:;
	V139= cdr((V139));
	V140= car((V139));
	goto T297;}
}
/*	macro definition for RETURN	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(2);
	vs_top=sup;
	{object V144=base[0]->c.c_cdr;
	if(endp(V144)){
	base[2]= Cnil;
	} else {
	base[2]= (V144->c.c_car);
	V144=V144->c.c_cdr;}
	if(!endp(V144))invalid_macro_call();}
	base[3]= list(3,VV[36],Cnil,base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DOLIST	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	check_arg(2);
	vs_top=sup;
	{object V145=base[0]->c.c_cdr;
	if(endp(V145))invalid_macro_call();
	{object V146= (V145->c.c_car);
	if(endp(V146))invalid_macro_call();
	base[2]= (V146->c.c_car);
	V146=V146->c.c_cdr;
	if(endp(V146))invalid_macro_call();
	base[3]= (V146->c.c_car);
	V146=V146->c.c_cdr;
	if(endp(V146)){
	base[4]= Cnil;
	} else {
	base[4]= (V146->c.c_car);
	V146=V146->c.c_cdr;}
	if(!endp(V146))invalid_macro_call();}
	V145=V145->c.c_cdr;
	base[5]= V145;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[6]= vs_base[0];}
	V147= list(3,base[6],base[3],list(2,VV[38],base[6]));
	V148= list(2,VV[39],base[6]);
	V149= list(2,/* INLINE-ARGS */V147,list(3,base[2],/* INLINE-ARGS */V148,list(2,VV[39],base[6])));
	base[7]= listA(4,VV[37],/* INLINE-ARGS */V149,list(2,list(2,VV[40],base[6]),base[4]),base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for DOTIMES	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	check_arg(2);
	vs_top=sup;
	{object V150=base[0]->c.c_cdr;
	if(endp(V150))invalid_macro_call();
	{object V151= (V150->c.c_car);
	if(endp(V151))invalid_macro_call();
	base[2]= (V151->c.c_car);
	V151=V151->c.c_cdr;
	if(endp(V151))invalid_macro_call();
	base[3]= (V151->c.c_car);
	V151=V151->c.c_cdr;
	if(endp(V151)){
	base[4]= Cnil;
	} else {
	base[4]= (V151->c.c_car);
	V151=V151->c.c_cdr;}
	if(!endp(V151))invalid_macro_call();}
	V150=V150->c.c_cdr;
	base[5]= V150;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[6]= vs_base[0];}
	V152= list(2,base[6],base[3]);
	V153= list(2,/* INLINE-ARGS */V152,list(3,base[2],small_fixnum(0),list(2,VV[41],base[2])));
	base[7]= listA(4,VV[37],/* INLINE-ARGS */V153,list(2,list(3,VV[42],base[2],base[6]),base[4]),base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for DECLAIM	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	check_arg(2);
	vs_top=sup;
	{object V154=base[0]->c.c_cdr;
	base[2]= V154;}
	{object V156;
	object V157= base[2];
	if(endp(V157)){
	V155= Cnil;
	goto T326;}
	base[3]=V156=MMcons(Cnil,Cnil);
	goto T327;
T327:;
	(V156->c.c_car)= list(2,VV[45],list(2,VV[2],(V157->c.c_car)));
	V157=MMcdr(V157);
	if(endp(V157)){
	V155= base[3];
	goto T326;}
	V156=MMcdr(V156)=MMcons(Cnil,Cnil);
	goto T327;}
	goto T326;
T326:;
	base[3]= listA(3,VV[43],VV[44],V155);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LAMBDA	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	check_arg(2);
	vs_top=sup;
	{object V159=base[0]->c.c_cdr;
	base[2]= V159;}
	base[3]= list(2,VV[22],make_cons(VV[23],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
static void LnkT46(){ call_or_link(VV[46],(void **)(void *)&Lnk46);} /* FIND-DOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

