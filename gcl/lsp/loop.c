
#include "cmpinclude.h"
#include "loop.h"
void init_loop(){do_init(VV);}
/*	macro definition for LOOP-COPYLIST*	*/

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
	if(!endp(V1))invalid_macro_call();}
	base[3]= list(2,VV[0],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for LOOP-GENTEMP	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V2;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V2=(base[0]);
	vs_top=sup;
	goto T2;
goto T1;
T1:;
	V2= VV[1];
goto T2;
T2:;
	if((symbol_value(VV[2]))==Cnil){
	goto T5;}
	base[1]= coerce_to_string((V2));
	vs_top=(vs_base=base+1)+1;
	Lgentemp();
	return;
goto T5;
T5:;
	vs_base=vs_top;
	Lgensym();
	return;
	}
}
/*	function definition for LOOP-OPTIMIZATION-QUANTITIES	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V3;
	check_arg(1);
	V3=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[1]= small_fixnum(1);
	base[2]= small_fixnum(1);
	base[3]= small_fixnum(1);
	base[4]= small_fixnum(1);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+1)+5;
	return;
	}
}
/*	function definition for HIDE-VARIABLE-REFERENCES	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V4;
	object V5;
	check_arg(2);
	V4=(base[0]);
	V5=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	base[2]= (V5);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for HIDE-VARIABLE-REFERENCE	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V6;
	object V7;
	object V8;
	check_arg(3);
	V6=(base[0]);
	V7=(base[1]);
	V8=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= (V8);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	macro definition for WITH-LOOP-LIST-COLLECTION-HEAD	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V9=base[0]->c.c_cdr;
	if(endp(V9))invalid_macro_call();
	{object V10= (V9->c.c_car);
	if(endp(V10))invalid_macro_call();
	base[2]= (V10->c.c_car);
	V10=V10->c.c_cdr;
	if(endp(V10))invalid_macro_call();
	base[3]= (V10->c.c_car);
	V10=V10->c.c_cdr;
	if(endp(V10)){
	base[4]= Cnil;
	} else {
	base[4]= (V10->c.c_car);
	V10=V10->c.c_cdr;}
	if(!endp(V10))invalid_macro_call();}
	V9=V9->c.c_cdr;
	base[5]= V9;}
	{object V11;
	if(base[4]==Cnil){
	V11= Cnil;
	goto T14;}
	V12= list(2,base[4],Cnil);
	V11= make_cons(/* INLINE-ARGS */V12,Cnil);
goto T14;
T14:;
	V13= list(2,base[2],VV[4]);
	base[6]= listA(3,VV[3],listA(3,/* INLINE-ARGS */V13,list(2,base[3],base[2]),(V11)),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for LOOP-COLLECT-RPLACD	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V14=base[0]->c.c_cdr;
	if(endp(V14))invalid_macro_call();
	{object V15= (V14->c.c_car);
	if(endp(V15))invalid_macro_call();
	base[2]= (V15->c.c_car);
	V15=V15->c.c_cdr;
	if(endp(V15))invalid_macro_call();
	base[3]= (V15->c.c_car);
	V15=V15->c.c_cdr;
	if(endp(V15)){
	base[4]= Cnil;
	} else {
	base[4]= (V15->c.c_car);
	V15=V15->c.c_cdr;}
	if(!endp(V15))invalid_macro_call();}
	V14=V14->c.c_cdr;
	if(endp(V14))invalid_macro_call();
	base[5]= (V14->c.c_car);
	V14=V14->c.c_cdr;
	if(!endp(V14))invalid_macro_call();}
	base[6]= base[5];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lmacroexpand();
	vs_top=sup;
	base[5]= vs_base[0];
	{register object V17;
	V17= Cnil;
	if(!(type_of(base[5])==t_cons)){
	goto T20;}
	if(!((car(base[5]))==(VV[5]))){
	goto T24;}
	V18 = make_fixnum((long)length(cdr(base[5])));
	V17= one_minus(V18);
	goto T20;
goto T24;
T24:;
	{register object x= car(base[5]),V19= VV[6];
	while(!endp(V19))
	if(eql(x,V19->c.c_car)){
	goto T28;
	}else V19=V19->c.c_cdr;
	goto T20;}
goto T28;
T28:;
	if((cddr(base[5]))==Cnil){
	goto T20;}
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	Llast();
	vs_top=sup;
	V21= vs_base[0];
	{register object x= car(V21),V20= VV[7];
	while(!endp(V20))
	if(eql(x,V20->c.c_car)){
	goto T32;
	}else V20=V20->c.c_cdr;
	goto T20;}
goto T32;
T32:;
	V22 = make_fixnum((long)length(cdr(base[5])));
	V17= number_minus(V22,small_fixnum(2));
goto T20;
T20:;
	{object V23;
	if(((V17))!=Cnil){
	goto T38;}
	V24= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	V23= list(3,VV[8],/* INLINE-ARGS */V24,list(3,VV[11],base[3],list(2,VV[12],list(2,VV[10],base[3]))));
	goto T36;
goto T38;
T38:;
	if(!(number_compare((V17),small_fixnum(0))<0)){
	goto T41;}
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;
goto T41;
T41:;
	if(!(number_compare((V17),small_fixnum(0))==0)){
	goto T44;}
	V23= list(3,VV[13],base[3],list(3,VV[11],base[3],base[5]));
	goto T36;
goto T44;
T44:;
	base[6]= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	base[7]= (V17);
	vs_top=(vs_base=base+6)+2;
	L8(base);
	vs_top=sup;
	V25= vs_base[0];
	V23= list(3,VV[11],base[3],V25);
goto T36;
T36:;
	if((base[4])==Cnil){
	goto T49;}
	V23= list(3,VV[14],(V23),list(3,VV[11],base[4],list(2,VV[10],base[2])));
goto T49;
T49:;
	base[6]= (V23);
	vs_top=(vs_base=base+6)+1;
	return;}}
}
/*	macro definition for LOOP-COLLECT-ANSWER	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V26=base[0]->c.c_cdr;
	if(endp(V26))invalid_macro_call();
	base[2]= (V26->c.c_car);
	V26=V26->c.c_cdr;
	if(endp(V26)){
	base[3]= Cnil;
	} else {
	base[3]= (V26->c.c_car);
	V26=V26->c.c_cdr;}
	if(!endp(V26))invalid_macro_call();}
	if(base[3]!=Cnil){
	vs_top=(vs_base=base+3)+1;
	return;}
	base[4]= list(2,VV[10],base[2]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-LOOP-MINIMAX-INTERNAL	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V27;
	object V28;
	object V29;
	object V30;
	object V31;
	object V32;
	parse_key(vs_base,FALSE,FALSE,6,VV[21],VV[22],VV[23],VV[25],VV[27],VV[28]);
	vs_top=sup;
	V27=(base[0]);
	V28=(base[1]);
	V29=(base[2]);
	V30=(base[3]);
	V31=(base[4]);
	V32=(base[5]);
	base[12]= VV[18];
	base[13]= (V27);
	base[14]= (V28);
	base[15]= (V29);
	base[16]= (V30);
	base[17]= (V31);
	base[18]= (V32);
	vs_top=(vs_base=base+12)+7;
	siLmake_structure();
	return;
	}
}
/*	function definition for MAKE-LOOP-MINIMAX	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V33;
	object V34;
	check_arg(2);
	V33=(base[0]);
	V34=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V35;
	base[2]= (V34);
	base[3]= symbol_value(VV[19]);
	base[4]= VV[20];
	base[5]= symbol_function(VV[323]);
	vs_top=(vs_base=base+2)+4;
	Lassoc();
	vs_top=sup;
	V36= vs_base[0];
	V35= cdr(V36);
	base[2]= VV[21];
	base[3]= (V33);
	base[4]= VV[22];
	base[5]= (V34);
	base[6]= VV[23];
	base[8]= VV[24];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[25];
	if(((V35))==Cnil){
	goto T76;}
	base[9]= Cnil;
	goto T75;
goto T76;
T76:;
	base[10]= VV[26];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[9]= vs_base[0];
goto T75;
T75:;
	base[10]= VV[27];
	base[11]= Cnil;
	base[12]= VV[28];
	base[13]= (V35);
	vs_top=(vs_base=base+2)+12;
	(void) (*Lnk325)();
	return;}
	}
}
/*	function definition for LOOP-NOTE-MINIMAX-OPERATION	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V37;
	register object V38;
	check_arg(2);
	V37=(base[0]);
	V38=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V41;
	base[3]= V37;
	base[4]= structure_ref(V38,VV[18],4);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V41= vs_base[0];
	(void)(structure_set(V38,VV[18],4,(V41)));}
	V42= structure_ref((V38),VV[18],4);
	if((cdr(/* INLINE-ARGS */V42))==Cnil){
	goto T87;}
	if((structure_ref((V38),VV[18],3))!=Cnil){
	goto T87;}
	base[2]= VV[26];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V43= vs_base[0];
	(void)(structure_set((V38),VV[18],3,V43));
goto T87;
T87:;
	base[2]= (V37);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	macro definition for WITH-MINIMAX-VALUE	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V44=base[0]->c.c_cdr;
	if(endp(V44))invalid_macro_call();
	base[2]= (V44->c.c_car);
	V44=V44->c.c_cdr;
	base[3]= V44;}
	{object V45;
	object V46;
	object V47;
	register object V48;
	register object V49;
	object V50;
	object V51;
	base[4]= structure_ref(base[2],VV[18],1);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V45= vs_base[0];
	V52= structure_ref(base[2],VV[18],4);
	V46= car(/* INLINE-ARGS */V52);
	V47= structure_ref(base[2],VV[18],5);
	V48= structure_ref(base[2],VV[18],0);
	V49= structure_ref(base[2],VV[18],2);
	V50= structure_ref(base[2],VV[18],3);
	V51= structure_ref(base[2],VV[18],1);
	if(((V50))==Cnil){
	goto T103;}
	V53= list(2,(V48),(V45));
	V54= list(2,(V49),(V45));
	V55= list(3,/* INLINE-ARGS */V53,/* INLINE-ARGS */V54,list(2,(V50),Cnil));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V55,list(2,VV[30],list(4,VV[31],(V51),(V48),(V49))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
goto T103;
T103:;
	if(!(((V46))==(VV[32]))){
	goto T107;}
	V56= car((V47));
	goto T105;
goto T107;
T107:;
	V56= cadr((V47));
goto T105;
T105:;
	V57= list(2,(V48),V56);
	V58= list(2,/* INLINE-ARGS */V57,list(2,(V49),(V45)));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V58,list(2,VV[30],list(4,VV[31],(V51),(V48),(V49))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-ACCUMULATE-MINIMAX-VALUE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V59=base[0]->c.c_cdr;
	if(endp(V59))invalid_macro_call();
	base[2]= (V59->c.c_car);
	V59=V59->c.c_cdr;
	if(endp(V59))invalid_macro_call();
	base[3]= (V59->c.c_car);
	V59=V59->c.c_cdr;
	if(endp(V59))invalid_macro_call();
	base[4]= (V59->c.c_car);
	V59=V59->c.c_cdr;
	if(!endp(V59))invalid_macro_call();}
	{object V60;
	object V61;
	register object V62;
	object V63;
	V60= structure_ref(base[2],VV[18],0);
	V61= structure_ref(base[2],VV[18],2);
	V62= structure_ref(base[2],VV[18],3);
	base[9]= Ct;
	base[10]= structure_ref(base[2],VV[18],0);
	{object V65= base[3];
	if((V65!= VV[32]))goto T117;
	V64= VV[33];
	goto T116;
goto T117;
T117:;
	if((V65!= VV[327]))goto T118;
	V64= VV[34];
	goto T116;
goto T118;
T118:;
	FEerror("The ECASE key value ~s is illegal.",1,V65);
	V64= Cnil;
	goto T116;}
goto T116;
T116:;
	base[11]= list(3,V64,(V61),(V60));
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V63= vs_base[0];
	V66= list(3,VV[11],(V61),base[4]);
	if(((V62))==Cnil){
	goto T121;}
	V67= list(3,VV[35],list(2,VV[36],(V62)),(V63));
	goto T119;
goto T121;
T121:;
	V67= (V63);
goto T119;
T119:;
	if((V62)==Cnil){
	V68= Cnil;
	goto T123;}
	V68= list(2,(V62),Ct);
goto T123;
T123:;
	V69= list(2,(V60),(V61));
	V70= append(V68,/* INLINE-ARGS */V69);
	base[9]= list(3,VV[14],/* INLINE-ARGS */V66,list(3,VV[8],V67,make_cons(VV[11],/* INLINE-ARGS */V70)));
	vs_top=(vs_base=base+9)+1;
	return;}
}
/*	function definition for LOOP-TEQUAL	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V71;
	object V72;
	check_arg(2);
	V71=(base[0]);
	V72=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(type_of((V71))==t_symbol){
	goto T124;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T124;
T124:;
	base[2]= (V71);
	base[3]= (V72);
	vs_top=(vs_base=base+2)+2;
	Lstring_eq();
	return;
	}
}
/*	function definition for LOOP-TASSOC	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V73;
	object V74;
	check_arg(2);
	V73=(base[0]);
	V74=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(type_of((V73))==t_symbol){
	goto T128;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T128;
T128:;
	base[2]= (V73);
	base[3]= (V74);
	base[4]= VV[20];
	base[5]= symbol_function(VV[329]);
	vs_top=(vs_base=base+2)+4;
	Lassoc();
	return;
	}
}
/*	function definition for LOOP-TMEMBER	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V75;
	object V76;
	check_arg(2);
	V75=(base[0]);
	V76=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(type_of((V75))==t_symbol){
	goto T134;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T134;
T134:;
	base[2]= (V75);
	base[3]= (V76);
	base[4]= VV[20];
	base[5]= symbol_function(VV[329]);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	return;
	}
}
/*	function definition for LOOP-LOOKUP-KEYWORD	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V77;
	object V78;
	check_arg(2);
	V77=(base[0]);
	V78=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(type_of((V77))==t_symbol){
	goto T140;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T140;
T140:;
	base[3]= symbol_name((V77));
	base[4]= (V78);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	macro definition for LOOP-STORE-TABLE-DATA	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V79=base[0]->c.c_cdr;
	if(endp(V79))invalid_macro_call();
	base[2]= (V79->c.c_car);
	V79=V79->c.c_cdr;
	if(endp(V79))invalid_macro_call();
	base[3]= (V79->c.c_car);
	V79=V79->c.c_cdr;
	if(endp(V79))invalid_macro_call();
	base[4]= (V79->c.c_car);
	V79=V79->c.c_cdr;
	if(!endp(V79))invalid_macro_call();}
	base[5]= list(3,VV[9],list(3,VV[37],list(2,VV[38],base[2]),base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for MAKE-LOOP-UNIVERSE	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V80;
	object V81;
	object V82;
	object V83;
	object V84;
	object V85;
	object V86;
	object V87;
	parse_key(vs_base,FALSE,FALSE,8,VV[53],VV[55],VV[54],VV[56],VV[60],VV[59],VV[57],VV[58]);
	vs_top=sup;
	V80=(base[0]);
	V81=(base[1]);
	V82=(base[2]);
	V83=(base[3]);
	V84=(base[4]);
	V85=(base[5]);
	V86=(base[6]);
	V87=(base[7]);
	base[16]= VV[39];
	base[17]= (V80);
	base[18]= (V81);
	base[19]= (V82);
	base[20]= (V83);
	base[21]= (V84);
	base[22]= (V85);
	base[23]= (V86);
	base[24]= (V87);
	vs_top=(vs_base=base+16)+9;
	siLmake_structure();
	return;
	}
}
/*	function definition for PRINT-LOOP-UNIVERSE	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V88;
	object V89;
	object V90;
	check_arg(3);
	V88=(base[0]);
	V89=(base[1]);
	V90=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V91;
	V93= structure_ref((V88),VV[39],6);
	{object V92= /* INLINE-ARGS */V93;
	if((V92!= Cnil))goto T155;
	V91= VV[40];
	goto T154;
goto T155;
T155:;
	if((V92!= Ct))goto T156;
	V91= VV[41];
	goto T154;
goto T156;
T156:;
	if((V92!= VV[304]))goto T157;
	V91= VV[42];
	goto T154;
goto T157;
T157:;
	V91= structure_ref((V88),VV[39],6);}
goto T154;
T154:;
	base[3]= (V89);
	base[4]= VV[43];
	base[6]= (V88);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V91);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;}
	}
}
/*	function definition for MAKE-STANDARD-LOOP-UNIVERSE	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	bds_check;
	{object V94;
	object V95;
	object V96;
	object V97;
	object V98;
	object V99;
	register object V100;
	parse_key(vs_base,FALSE,FALSE,7,VV[53],VV[54],VV[55],VV[56],VV[59],VV[60],VV[57]);
	vs_top=sup;
	V94=(base[0]);
	V95=(base[1]);
	V96=(base[2]);
	V97=(base[3]);
	V98=(base[4]);
	V99=(base[5]);
	V100=(base[6]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
goto T165;
T165:;
	base[16]= (V100);
	base[17]= VV[46];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T166;}
	bds_unwind1;
	bds_unwind1;
	goto T163;
goto T166;
T166:;
	base[16]= VV[47];
	base[17]= VV[48];
	base[18]= VV[49];
	base[19]= (V100);
	base[20]= VV[46];
	vs_top=(vs_base=base+16)+5;
	Lcerror();
	vs_top=sup;
	base[16]= symbol_value(VV[50]);
	base[17]= VV[51];
	base[18]= VV[49];
	vs_top=(vs_base=base+16)+3;
	Lformat();
	vs_top=sup;
	base[16]= symbol_value(VV[50]);
	vs_top=(vs_base=base+16)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V100= vs_base[0];
	base[16]= symbol_value(VV[50]);
	base[17]= VV[52];
	vs_top=(vs_base=base+16)+2;
	Lformat();
	vs_top=sup;
	goto T165;
goto T163;
T163:;
	base[14]= VV[53];
	base[16]= (V94);
	vs_top=(vs_base=base+16)+1;
	L23(base);
	vs_top=sup;
	base[15]= vs_base[0];
	base[16]= VV[54];
	base[18]= (V95);
	vs_top=(vs_base=base+18)+1;
	L23(base);
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= VV[55];
	base[20]= (V96);
	vs_top=(vs_base=base+20)+1;
	L23(base);
	vs_top=sup;
	base[19]= vs_base[0];
	base[20]= VV[56];
	base[22]= (V97);
	vs_top=(vs_base=base+22)+1;
	L23(base);
	vs_top=sup;
	base[21]= vs_base[0];
	base[22]= VV[57];
	base[23]= (V100);
	base[24]= VV[58];
	base[25]= (((((V100))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	base[26]= VV[59];
	base[28]= (V98);
	vs_top=(vs_base=base+28)+1;
	L23(base);
	vs_top=sup;
	base[27]= vs_base[0];
	base[28]= VV[60];
	{object V101;
	object V102;
	V101= make_fixnum((long)length((V99)));
	base[32]= VV[61];
	if(!(number_compare((V101),small_fixnum(10))<0)){
	goto T217;}
	base[33]= small_fixnum(10);
	goto T215;
goto T217;
T217:;
	base[33]= (V101);
goto T215;
T215:;
	base[34]= VV[20];
	base[35]= symbol_function(VV[331]);
	vs_top=(vs_base=base+32)+4;
	Lmake_hash_table();
	vs_top=sup;
	V102= vs_base[0];
	{register object V103;
	register object V104;
	V103= (V99);
	V104= car((V103));
goto T225;
T225:;
	if(!(endp_prop((V103)))){
	goto T226;}
	goto T221;
goto T226;
T226:;
	if(!(type_of((V104))!=t_cons)){
	goto T232;}
	base[33]= V104;
	base[34]= V102;
	base[35]= V104;
	vs_top=(vs_base=base+33)+3;
	siLhash_set();
	vs_top=sup;
	goto T230;
goto T232;
T232:;
	{object V108;
	object V110;
	V108= car((V104));
	V110= cadr((V104));
	base[35]= (V108);
	base[36]= V102;
	base[37]= (V110);
	vs_top=(vs_base=base+35)+3;
	siLhash_set();
	vs_top=sup;}
goto T230;
T230:;
	V103= cdr((V103));
	V104= car((V103));
	goto T225;}
goto T221;
T221:;
	base[29]= (V102);}
	vs_top=(vs_base=base+14)+16;
	(void) (*Lnk332)();
	return;
	}
}
/*	function definition for LOOP-MAKE-PSETQ	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{register object V111;
	check_arg(1);
	V111=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if((V111)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	V112= car((V111));
	if((cddr((V111)))!=Cnil){
	goto T250;}
	V113= cadr((V111));
	goto T248;
goto T250;
T250:;
	V114= cadr((V111));
	base[2]= cddr((V111));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V115= vs_base[0];
	V113= list(3,VV[62],/* INLINE-ARGS */V114,V115);
goto T248;
T248:;
	base[1]= list(2,/* INLINE-ARGS */V112,V113);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	return;
	}
}
/*	function definition for LOOP-MAKE-DESETQ	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V116;
	check_arg(1);
	V116=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V116))!=Cnil){
	goto T255;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T255;
T255:;
	if((symbol_value(VV[63]))==Cnil){
	goto T259;}
	V117= cadr(symbol_value(VV[63]));
	goto T257;
goto T259;
T259:;
	V117= VV[64];
goto T257;
T257:;
	base[1]= make_cons(V117,(V116));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	macro definition for LOOP-REALLY-DESETQ	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(2);
	vs_top=sup;
	{object V118=base[0]->c.c_cdr;
	base[2]= V118;}
	{register object V119;
	V119= Cnil;
goto T262;
T262:;
	if((base[2])!=Cnil){
	goto T263;}
	if((cdr((V119)))!=Cnil){
	goto T267;}
	base[3]= car((V119));
	vs_top=(vs_base=base+3)+1;
	return;
goto T267;
T267:;
	V120= nreverse((V119));
	base[3]= make_cons(VV[14],/* INLINE-ARGS */V120);
	vs_top=(vs_base=base+3)+1;
	return;
goto T263;
T263:;
	{register object V121;
	V121= car(base[2]);
	base[2]= cdr(base[2]);
	base[4]= (V121);}
	{register object V122;
	V122= car(base[2]);
	base[2]= cdr(base[2]);
	base[5]= (V122);}
	vs_top=(vs_base=base+4)+2;
	L28(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	Lrevappend();
	vs_top=sup;
	V119= vs_base[0];
	goto T262;}
}
/*	function definition for LOOP-CONSTANT-FOLD-IF-POSSIBLE	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V123;
	object V124;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V123=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T284;}
	V124=(base[1]);
	vs_top=sup;
	goto T285;
goto T284;
T284:;
	V124= Cnil;
goto T285;
T285:;
	{register object V126;
	register object V127;
	V126= Cnil;
	V127= Cnil;
	base[2]= V123;
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	V126= vs_base[0];
	if(((V126))==Cnil){
	goto T287;}
	base[2]= V123;
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V127= vs_base[0];
goto T287;
T287:;
	if(((V126))==Cnil){
	goto T294;}
	if(((V124))==Cnil){
	goto T294;}
	base[2]= (V127);
	base[3]= (V124);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T294;}
	base[2]= VV[67];
	base[3]= (V123);
	base[4]= (V127);
	base[5]= (V124);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk335)();
	vs_top=sup;
	V126= Cnil;
	V127= Cnil;
goto T294;
T294:;
	base[2]= V123;
	base[3]= (V126);
	base[4]= (V127);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	function definition for LOOP-CONSTANTP	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V128;
	check_arg(1);
	V128=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[1]= (V128);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	return;
	}
}
/*	function definition for LOOP-CODE-DUPLICATION-THRESHOLD	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V129;
	check_arg(1);
	V129=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V130;
	object V131;
	base[1]= (V129);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk336)();
	if(vs_base>=vs_top){vs_top=sup;goto T317;}
	V130= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T318;}
	V131= vs_base[0];
	vs_top=sup;
	goto T319;
goto T317;
T317:;
	V130= Cnil;
goto T318;
T318:;
	V131= Cnil;
goto T319;
T319:;
	V132= number_minus((V130),(V131));
	V133= number_times(/* INLINE-ARGS */V132,small_fixnum(10));
	base[1]= number_plus(small_fixnum(40),/* INLINE-ARGS */V133);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	macro definition for LOOP-BODY	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	check_arg(2);
	vs_top=sup;
	{object V134=base[0]->c.c_cdr;
	if(endp(V134))invalid_macro_call();
	base[2]= (V134->c.c_car);
	V134=V134->c.c_cdr;
	if(endp(V134))invalid_macro_call();
	base[3]= (V134->c.c_car);
	V134=V134->c.c_cdr;
	if(endp(V134))invalid_macro_call();
	base[4]= (V134->c.c_car);
	V134=V134->c.c_cdr;
	if(endp(V134))invalid_macro_call();
	base[5]= (V134->c.c_car);
	V134=V134->c.c_cdr;
	if(endp(V134))invalid_macro_call();
	base[6]= (V134->c.c_car);
	V134=V134->c.c_cdr;
	if(!endp(V134))invalid_macro_call();
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;}
	if(((long)length(base[3]))==((long)length(base[5]))){
	goto T323;}
	base[10]= VV[68];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
goto T323;
T323:;
	base[7]= reverse(base[3]);
	base[8]= reverse(base[5]);
	if((symbol_value(VV[69]))!=Cnil){
	goto T332;}
	if((base[7])!=Cnil){
	goto T331;}
goto T332;
T332:;
	vs_base=vs_top;
	L35(base);
	return;
goto T331;
T331:;
	{register long V135;
	base[10]= base[1];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk337)();
	vs_top=sup;
	V135= fix(vs_base[0]);
goto T339;
T339:;
goto T344;
T344:;
	if((base[7])==Cnil){
	goto T346;}
	if(equal(car(base[7]),car(base[8]))){
	goto T345;}
goto T346;
T346:;
	goto T342;
goto T345;
T345:;
	{register object V136;
	{register object V137;
	V137= car(base[7]);
	base[7]= cdr(base[7]);
	V136= (V137);}
	base[4]= make_cons((V136),base[4]);}
	{register object V138;
	V138= car(base[8]);
	base[8]= cdr(base[8]);}
	goto T344;
goto T342;
T342:;
	if((base[7])!=Cnil){
	goto T363;}
	vs_base=vs_top;
	L35(base);
	return;
goto T363;
T363:;
	{register object V139;
	register object V140;
	register object V141;
	register object V142;
	register object V143;
	V139= base[7];
	V140= base[8];
	V141= Cnil;
	V142= small_fixnum(0);
	V143= Cnil;
goto T368;
T368:;
	if(((V139))!=Cnil){
	goto T369;}
	vs_base=vs_top;
	L35(base);
	return;
goto T369;
T369:;
	if(equal(car((V139)),car((V140)))){
	goto T375;}
	V141= (V139);
	V142= small_fixnum(0);
	goto T373;
goto T375;
T375:;
	base[10]= car((V139));
	base[11]= base[1];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V143= vs_base[0];
	if(((V143))==Cnil){
	goto T380;}
	V142= number_plus((V142),(V143));
	V144 = make_fixnum(V135);
	if(!(number_compare((V142),V144)>0)){
	goto T373;}
goto T380;
T380:;
	{register object V145;
	register object V146;
	V145= Cnil;
	V146= Cnil;
goto T391;
T391:;
	{register object V147;
	{register object V148;
	V148= car(base[7]);
	base[7]= cdr(base[7]);
	V147= (V148);}
	V146= make_cons((V147),(V146));}
	{register object V149;
	{register object V150;
	V150= car(base[8]);
	base[8]= cdr(base[8]);
	V149= (V150);}
	V145= make_cons((V149),(V145));}
	if(!((base[7])==(cdr((V141))))){
	goto T406;}
	goto T389;
goto T406;
T406:;
	goto T391;
goto T389;
T389:;
	if((base[9])!=Cnil){
	goto T411;}
	{register object V151;
	base[9]= symbol_value(VV[70]);
	V151= list(3,VV[11],base[9],Ct);
	V146= make_cons((V151),(V146));}
goto T411;
T411:;
	{register object V152;
	base[12]= (V145);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V153= vs_base[0];
	base[12]= (V146);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V154= vs_base[0];
	V152= list(4,VV[71],base[9],V153,V154);
	base[4]= make_cons((V152),base[4]);}}
goto T427;
T427:;
	{register object V155;
	V155= car(base[8]);
	base[8]= cdr(base[8]);}
	{register object V156;
	{register object V157;
	V157= car(base[7]);
	base[7]= cdr(base[7]);
	V156= (V157);}
	base[4]= make_cons((V156),base[4]);}
	if(!((base[7])==(cdr((V139))))){
	goto T440;}
	goto T425;
goto T440;
T440:;
	goto T427;
goto T425;
T425:;
	goto T366;
goto T373;
T373:;
	V139= cdr((V139));
	V140= cdr((V140));
	goto T368;}
goto T366;
T366:;
	goto T339;}
}
/*	function definition for DUPLICATABLE-CODE-P	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	{object V158;
	object V159;
	check_arg(2);
	V158=(base[0]);
	V159=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V158))!=Cnil){
	goto T452;}
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+2)+1;
	return;
goto T452;
T452:;
	{long V160;
	base[2]= (V158);
	base[3]= (V159);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V160= fix(vs_base[0]);
	base[2]= make_fixnum(V160);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DESTRUCTURING-SIZE	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{object V161;
	check_arg(1);
	V161=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V162;
	register object V163;
	V162= (V161);
	V163= small_fixnum(0);
goto T458;
T458:;
	if(!(type_of((V162))!=t_cons)){
	goto T459;}
	if(((V162))!=Cnil){
	goto T464;}
	V164= small_fixnum(0);
	goto T462;
goto T464;
T464:;
	V164= small_fixnum(1);
goto T462;
T462:;
	base[1]= number_plus((V163),V164);
	vs_top=(vs_base=base+1)+1;
	return;
goto T459;
T459:;
	{object V165;
	V165= cdr((V162));
	base[1]= car((V162));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	V166= vs_base[0];
	V163= number_plus(V166,(V163));
	V162= (V165);}
	goto T458;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE	*/

static void L38()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM31; VC31
	vs_reserve(VM31);
	{VOL object V167;
	VOL object V168;
	check_arg(2);
	V167=(base[0]);
	V168=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	frs_push(FRS_CATCH,VV[77]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]= (V167);
	base[3]= (V168);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	frs_pop();
	return;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE-1	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{object V169;
	check_arg(2);
	V169=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[2]= (V169);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T477;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
goto T477;
T477:;
	if(!(type_of((V169))==t_symbol)){
	goto T481;}
	{object V170;
	object V171;
	base[2]= (V169);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T486;}
	V170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T487;}
	V171= vs_base[0];
	vs_top=sup;
	goto T488;
goto T486;
T486:;
	V170= Cnil;
goto T487;
T487:;
	V171= Cnil;
goto T488;
T488:;
	if(((V171))==Cnil){
	goto T490;}
	V169= (V170);
	goto TTL;
goto T490;
T490:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;}
goto T481;
T481:;
	if(!(type_of((V169))!=t_cons)){
	goto T496;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
goto T496;
T496:;
	if(!(type_of(car((V169)))==t_symbol)){
	goto T499;}
	{object V172;
	object V173;
	register long V174;
	V172= car((V169));
	V174= 0;
	V173= Cnil;
	V173= get((V172),VV[77],Cnil);
	if(((V173))==Cnil){
	goto T504;}
	if(!(type_of(V173)==t_fixnum)){
	goto T508;}
	base[2]= cdr((V169));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V176= fix(vs_base[0]);
	base[2]= make_fixnum((long)(fix((V173)))+(V176));
	vs_top=(vs_base=base+2)+1;
	return;
goto T508;
T508:;
	base[2]= (V169);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V173));
	return;
goto T504;
T504:;
	{register object x= (V172),V177= symbol_value(VV[78]);
	while(!endp(V177))
	if(type_of(V177->c.c_car)==t_cons &&eql(x,V177->c.c_car->c.c_car)){
	V173= (V177->c.c_car);
	goto T517;
	}else V177=V177->c.c_cdr;
	V173= Cnil;}
goto T517;
T517:;
	if(((V173))==Cnil){
	goto T515;}
	{long V178= fix(cadr((V173)));
	base[2]= cdr((V169));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V179= fix(vs_base[0]);
	base[2]= make_fixnum((long)(/* INLINE-ARGS */V178)+(V179));
	vs_top=(vs_base=base+2)+1;
	return;}
goto T515;
T515:;
	if(!(((V172))==(VV[79]))){
	goto T521;}
	{register object V180;
	object V181;
	V180= cdr((V169));
	V181= car((V180));
goto T526;
T526:;
	if(!(endp_prop((V180)))){
	goto T527;}
	base[4]= make_fixnum(V174);
	vs_top=(vs_base=base+4)+1;
	return;
goto T527;
T527:;
	V182 = make_fixnum(V174);
	base[4]= (V181);
	vs_top=(vs_base=base+4)+1;
	L40(base);
	vs_top=sup;
	V183= vs_base[0];
	V174= fix(number_plus(V182,V183));
	V174= (long)(V174)+(1);
	V180= cdr((V180));
	V181= car((V180));
	goto T526;}
goto T521;
T521:;
	if(!(((V172))==(VV[80]))){
	goto T543;}
	{register object V184;
	V184= cdr((V169));
goto T547;
T547:;
	if(((V184))!=Cnil){
	goto T548;}
	base[2]= make_fixnum(V174);
	vs_top=(vs_base=base+2)+1;
	return;
goto T548;
T548:;
	base[2]= make_fixnum(V174);
	base[4]= car((V184));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= cadr((V184));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V174= fix(vs_base[0]);
	V184= cdr((V184));
	goto T547;}
goto T543;
T543:;
	{register object x= (V172),V185= VV[81];
	while(!endp(V185))
	if(eql(x,V185->c.c_car)){
	goto T565;
	}else V185=V185->c.c_cdr;
	goto T564;}
goto T565;
T565:;
	{register object V186;
	V186= cdr((V169));
goto T568;
T568:;
	if(((V186))!=Cnil){
	goto T569;}
	base[2]= make_fixnum(V174);
	vs_top=(vs_base=base+2)+1;
	return;
goto T569;
T569:;
	base[2]= make_fixnum(V174);
	base[4]= cadr((V186));
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V174= fix(vs_base[0]);
	V186= cdr((V186));
	goto T568;}
goto T564;
T564:;
	if(!(((V172))==(VV[82]))){
	goto T584;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
goto T584;
T584:;
	if(!(((V172))==(VV[83]))){
	goto T587;}
	if(type_of(cadr((V169)))==t_symbol){
	goto T589;}
	if(!(type_of(cadr((V169)))==t_cons)){
	goto T590;}
	if(!((caadr((V169)))==(VV[9]))){
	goto T590;}
goto T589;
T589:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
goto T590;
T590:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[84]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[84]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[84]);}
goto T587;
T587:;
	if(!(((V172))==(VV[85]))){
	goto T598;}
	{long V187= (long)length(cadr((V169)));
	base[2]= cddr((V169));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V188= fix(vs_base[0]);
	base[2]= make_fixnum((long)(/* INLINE-ARGS */V187)+(V188));
	vs_top=(vs_base=base+2)+1;
	return;}
goto T598;
T598:;
	if(!(((V172))==(VV[86]))){
	goto T603;}
	base[2]= caddr((V169));
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	V189= vs_base[0];
	base[2]= one_plus(V189);
	vs_top=(vs_base=base+2)+1;
	return;
goto T603;
T603:;
	base[2]= (V172);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T608;}
	{register object x= (V172),V190= symbol_value(VV[87]);
	while(!endp(V190))
	if(eql(x,V190->c.c_car)){
	goto T613;
	}else V190=V190->c.c_cdr;
	goto T609;}
goto T613;
T613:;
goto T608;
T608:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
goto T609;
T609:;
	{object V191;
	object V192;
	base[2]= (V169);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T618;}
	V191= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T619;}
	V192= vs_base[0];
	vs_top=sup;
	goto T620;
goto T618;
T618:;
	V191= Cnil;
goto T619;
T619:;
	V192= Cnil;
goto T620;
T620:;
	if(((V192))==Cnil){
	goto T622;}
	V169= (V191);
	goto TTL;
goto T622;
T622:;
	base[2]= cdr((V169));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V193= fix(vs_base[0]);
	base[2]= make_fixnum((long)(3)+(V193));
	vs_top=(vs_base=base+2)+1;
	return;}}
goto T499;
T499:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
	}
}
/*	function definition for LOOP-CONTEXT	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V194;
	register object V195;
	V194= symbol_value(VV[88]);
	V195= Cnil;
goto T631;
T631:;
	if(!(((V194))==(cdr(symbol_value(VV[89]))))){
	goto T632;}
	base[0]= nreverse((V195));
	vs_top=(vs_base=base+0)+1;
	return;
goto T632;
T632:;
	{object V196;
	V196= cdr((V194));
	V195= make_cons(car((V194)),(V195));
	V194= (V196);}
	goto T631;}
}
/*	function definition for LOOP-ERROR	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V197;
	object V198;
	if(vs_top-vs_base<1) too_few_arguments();
	V197=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V198=(base[1]);
	vs_top=sup;
	base[2]= VV[90];
	base[3]= (V197);
	base[4]= (V198);
	vs_base=vs_top;
	(void) (*Lnk341)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	Lerror();
	return;
	}
}
/*	function definition for LOOP-WARN	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_reserve(VM35);
	{object V199;
	object V200;
	if(vs_top-vs_base<1) too_few_arguments();
	V199=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V200=(base[1]);
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk341)();
	vs_top=sup;
	V201= vs_base[0];
	base[2]= (VFUN_NARGS=4,(*(LnkLI342))(VV[91],(V199),(V200),V201));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for LOOP-CHECK-DATA-TYPE	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{register object V202;
	register object V203;
	object V204;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V202=(base[0]);
	V203=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T645;}
	V204=(base[2]);
	vs_top=sup;
	goto T646;
goto T645;
T645:;
	V204= (V203);
goto T646;
T646:;
	if(((V202))!=Cnil){
	goto T649;}
	base[3]= (V204);
	vs_top=(vs_base=base+3)+1;
	return;
goto T649;
T649:;
	{object V205;
	object V206;
	base[3]= (V202);
	base[4]= (V203);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk323)();
	if(vs_base>=vs_top){vs_top=sup;goto T654;}
	V205= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T655;}
	V206= vs_base[0];
	vs_top=sup;
	goto T656;
goto T654;
T654:;
	V205= Cnil;
goto T655;
T655:;
	V206= Cnil;
goto T656;
T656:;
	if(((V206))!=Cnil){
	goto T659;}
	base[3]= VV[92];
	base[4]= (V202);
	base[5]= (V203);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk335)();
	vs_top=sup;
	goto T657;
goto T659;
T659:;
	if(((V205))!=Cnil){
	goto T657;}
	base[3]= VV[93];
	base[4]= (V202);
	base[5]= (V203);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk343)();
	vs_top=sup;
goto T657;
T657:;
	base[3]= (V202);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP-FINISH	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	check_arg(2);
	vs_top=sup;
	{object V207=base[0]->c.c_cdr;
	if(!endp(V207))invalid_macro_call();}
	base[2]= VV[94];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for LOOP-TRANSLATE	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	bds_check;
	check_arg(3);
	bds_bind(VV[89],base[0]);
	bds_bind(VV[95],base[1]);
	bds_bind(VV[96],base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	bds_bind(VV[97],(VV[89]->s.s_dbind));
	bds_bind(VV[88],Cnil);
	bds_bind(VV[98],Cnil);
	bds_bind(VV[99],Cnil);
	bds_bind(VV[100],Cnil);
	bds_bind(VV[101],Cnil);
	bds_bind(VV[102],Cnil);
	bds_bind(VV[103],Cnil);
	bds_bind(VV[104],Cnil);
	bds_bind(VV[105],Cnil);
	bds_bind(VV[106],Cnil);
	bds_bind(VV[107],Cnil);
	bds_bind(VV[108],Cnil);
	bds_bind(VV[109],Cnil);
	bds_bind(VV[110],Cnil);
	bds_bind(VV[111],Cnil);
	bds_bind(VV[112],Cnil);
	bds_bind(VV[113],Cnil);
	bds_bind(VV[114],Cnil);
	bds_bind(VV[115],Cnil);
	bds_bind(VV[116],Cnil);
	bds_bind(VV[117],Cnil);
	bds_bind(VV[118],Cnil);
	vs_base=vs_top;
	(void) (*Lnk344)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk345)();
	vs_top=sup;
	{register object V208;
	V209= nreverse((VV[105]->s.s_dbind));
	V210= nreverse((VV[107]->s.s_dbind));
	V211= nreverse((VV[108]->s.s_dbind));
	V212= nreverse((VV[110]->s.s_dbind));
	base[26]= (VV[111]->s.s_dbind);
	base[27]= nreverse((VV[112]->s.s_dbind));
	vs_top=(vs_base=base+26)+2;
	Lreconc();
	vs_top=sup;
	V213= vs_base[0];
	V208= list(6,VV[119],/* INLINE-ARGS */V209,/* INLINE-ARGS */V210,/* INLINE-ARGS */V211,/* INLINE-ARGS */V212,V213);
goto T677;
T677:;
	{object V215;
	V215= car((VV[117]->s.s_dbind));
	(VV[117]->s.s_dbind)= cdr((VV[117]->s.s_dbind));
	V214= (V215);}
	V208= list(3,VV[120],V214,(V208));
	if(((VV[117]->s.s_dbind))!=Cnil){
	goto T686;}
	goto T675;
goto T686;
T686:;
	goto T677;
goto T675;
T675:;
	{register object V216;
	register object V217;
	V216= (VV[104]->s.s_dbind);
	V217= car((V216));
goto T695;
T695:;
	if(!(endp_prop((V216)))){
	goto T696;}
	goto T691;
goto T696;
T696:;
	{object V218;
	object V219;
	object V220;
	object V221;
	V218= car((V217));
	V219= cadr((V217));
	V220= caddr((V217));
	V221= cadddr((V217));
	{register object V222;
	register object V223;
	V222= (V221);
	V223= car((V222));
goto T709;
T709:;
	if(!(endp_prop((V222)))){
	goto T710;}
	goto T705;
goto T710;
T710:;
	V224= make_cons((V208),Cnil);
	V208= append((V223),/* INLINE-ARGS */V224);
	V222= cdr((V222));
	V223= car((V222));
	goto T709;}
goto T705;
T705:;
	if(((V218))!=Cnil){
	goto T721;}
	if(((V219))!=Cnil){
	goto T721;}
	if(((V220))==Cnil){
	goto T700;}
goto T721;
T721:;
	{register object V225;
	V225= make_cons((V208),Cnil);
	if(((V219))==Cnil){
	goto T728;}
	{object V226;
	V226= make_cons(VV[30],(V219));
	V225= make_cons((V226),(V225));}
goto T728;
T728:;
	if(((V218))!=Cnil){
	goto T736;}
	V227= VV[121];
	goto T734;
goto T736;
T736:;
	if((symbol_value(VV[63]))==Cnil){
	goto T739;}
	V227= car(symbol_value(VV[63]));
	goto T734;
goto T739;
T739:;
	V227= VV[29];
goto T734;
T734:;
	if(((V220))==Cnil){
	goto T743;}
	V229= append((V220),(V225));
	V230= make_cons(VV[122],/* INLINE-ARGS */V229);
	V228= make_cons(/* INLINE-ARGS */V230,Cnil);
	goto T741;
goto T743;
T743:;
	V228= (V225);
goto T741;
T741:;
	V208= listA(3,V227,(V218),V228);}}
goto T700;
T700:;
	V216= cdr((V216));
	V217= car((V216));
	goto T695;}
goto T691;
T691:;
	base[26]= (V208);
	vs_top=(vs_base=base+26)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}
}
/*	function definition for LOOP-ITERATION-DRIVER	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
goto T751;
T751:;
	if((symbol_value(VV[89]))!=Cnil){
	goto T752;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
goto T752;
T752:;
	{register object V231;
	register object V232;
	V231= car(symbol_value(VV[89]));
	V232= Cnil;
	if(type_of((V231))==t_symbol){
	goto T759;}
	base[0]= VV[123];
	base[1]= (V231);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T756;
goto T759;
T759:;
	setq(VV[88],symbol_value(VV[89]));
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[0]= (V231);
	base[1]= structure_ref(symbol_value(VV[96]),VV[39],0);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V232= vs_base[0];
	if(((V232))==Cnil){
	goto T767;}
	base[1]= car((V232));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V233;
	V233= cdr((V232));
	 vs_top=base+1;
	 while(!endp(V233))
	 {vs_push(car(V233));V233=cdr(V233);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T756;
goto T767;
T767:;
	base[0]= (V231);
	base[1]= structure_ref(symbol_value(VV[96]),VV[39],1);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V232= vs_base[0];
	if(((V232))==Cnil){
	goto T776;}
	base[0]= (V232);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk348)();
	vs_top=sup;
	goto T756;
goto T776;
T776:;
	base[0]= (V231);
	base[1]= VV[124];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T783;}
	base[0]= VV[125];
	base[1]= (V231);
	base[2]= car(symbol_value(VV[89]));
	base[3]= cadr(symbol_value(VV[89]));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T756;
goto T783;
T783:;
	base[0]= VV[126];
	base[1]= (V231);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;}
goto T756;
T756:;
	goto T751;
}
/*	function definition for LOOP-POP-SOURCE	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	if((symbol_value(VV[89]))==Cnil){
	goto T796;}
	{object V234;
	V234= car(symbol_value(VV[89]));
	setq(VV[89],cdr(symbol_value(VV[89])));
	base[0]= (V234);
	vs_top=(vs_base=base+0)+1;
	return;}
goto T796;
T796:;
	base[0]= VV[127];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk343)();
	return;
}
/*	function definition for LOOP-GET-PROGN	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V235;
	register object V236;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V237= vs_base[0];
	V235= make_cons(V237,Cnil);
	V236= car(symbol_value(VV[89]));
goto T806;
T806:;
	if(!(type_of((V236))!=t_cons)){
	goto T807;}
	if((cdr((V235)))!=Cnil){
	goto T811;}
	base[0]= car((V235));
	vs_top=(vs_base=base+0)+1;
	return;
goto T811;
T811:;
	V238= nreverse((V235));
	base[0]= make_cons(VV[14],/* INLINE-ARGS */V238);
	vs_top=(vs_base=base+0)+1;
	return;
goto T807;
T807:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V239= vs_base[0];
	V235= make_cons(V239,(V235));
	V236= car(symbol_value(VV[89]));
	goto T806;}
}
/*	function definition for LOOP-GET-FORM	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	if((symbol_value(VV[89]))==Cnil){
	goto T820;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	return;
goto T820;
T820:;
	base[0]= VV[128];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk343)();
	return;
}
/*	function definition for LOOP-CONSTRUCT-RETURN	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V240;
	check_arg(1);
	V240=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[1]= list(3,VV[86],car(symbol_value(VV[117])),(V240));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-PSEUDO-BODY	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{object V241;
	check_arg(1);
	V241=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if((symbol_value(VV[109]))!=Cnil){
	goto T823;}
	if((symbol_value(VV[114]))==Cnil){
	goto T824;}
goto T823;
T823:;
	setq(VV[108],make_cons(V241,symbol_value(VV[108])));
	base[1]= symbol_value(VV[108]);
	vs_top=(vs_base=base+1)+1;
	return;
goto T824;
T824:;
	setq(VV[107],make_cons(V241,symbol_value(VV[107])));
	setq(VV[110],make_cons(V241,symbol_value(VV[110])));
	base[1]= symbol_value(VV[110]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-EMIT-BODY	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V245;
	check_arg(1);
	V245=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	setq(VV[109],Ct);
	base[1]= (V245);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk350)();
	return;
	}
}
/*	function definition for LOOP-EMIT-FINAL-VALUE	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V246;
	check_arg(1);
	V246=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V247;
	base[2]= (V246);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V247= vs_base[0];
	setq(VV[112],make_cons((V247),symbol_value(VV[112])));}
	if((symbol_value(VV[113]))==Cnil){
	goto T839;}
	base[1]= VV[129];
	base[2]= symbol_value(VV[113]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk335)();
	vs_top=sup;
goto T839;
T839:;
	setq(VV[113],car(symbol_value(VV[88])));
	base[1]= symbol_value(VV[113]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V248;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T845;}
	V248=(base[0]);
	vs_top=sup;
	goto T846;
goto T845;
T845:;
	V248= Cnil;
goto T846;
T846:;
	if((symbol_value(VV[114]))==Cnil){
	goto T849;}
	base[1]= VV[130];
	base[2]= (V248);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk343)();
	return;
goto T849;
T849:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-TYPED-INIT	*/

static void L56()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{register object V249;
	check_arg(1);
	V249=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V249))==Cnil){
	goto T854;}
	base[1]= (V249);
	base[2]= VV[131];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T854;}
	base[1]= (V249);
	base[2]= VV[132];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T860;}
	base[1]= (V249);
	base[2]= VV[133];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T861;}
goto T860;
T860:;
	base[1]= (*(LnkLI352))(small_fixnum(0),(V249));
	vs_top=(vs_base=base+1)+1;
	return;
goto T861;
T861:;
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
goto T854;
T854:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-OPTIONAL-TYPE	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_reserve(VM49);
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T869;}
	vs_top=sup;
	goto T870;
goto T869;
T869:;
	base[0]= Cnil;
goto T870;
T870:;
	if(symbol_value(VV[89])==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= car(symbol_value(VV[89]));
	base[2]= base[1];
	base[3]= VV[134];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T874;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	return;
goto T874;
T874:;
	if(!(type_of(base[1])==t_symbol)){
	goto T880;}
	{object V250;{object V251;
	base[2]= base[1];
	base[3]= structure_ref(symbol_value(VV[96]),VV[39],4);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V251= vs_base[0];
	if(V251==Cnil)goto T883;
	V250= V251;
	goto T882;
goto T883;
T883:;}
	base[2]= symbol_name(base[1]);
	base[3]= structure_ref(symbol_value(VV[96]),VV[39],5);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V250= vs_base[0];
goto T882;
T882:;
	if(((V250))==Cnil){
	goto T890;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= (V250);
	vs_top=(vs_base=base+2)+1;
	return;
goto T890;
T890:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
goto T880;
T880:;
	if(!(type_of(base[0])==t_cons)){
	goto T895;}
	if(type_of(base[1])==t_cons){
	goto T893;}
	base[2]= VV[135];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T893;
goto T895;
T895:;
	base[2]= VV[136];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T893;
T893:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= base[1];
	base[3]= base[0];
	vs_top=(vs_base=base+2)+2;
	L58(base);
	return;
}
/*	function definition for LOOP-BIND-BLOCK	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_reserve(VM50);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	if((symbol_value(VV[99]))!=Cnil){
	goto T906;}
	if((symbol_value(VV[102]))!=Cnil){
	goto T906;}
	if((symbol_value(VV[106]))==Cnil){
	goto T907;}
goto T906;
T906:;
	{object V252;
	V253= nreverse(symbol_value(VV[99]));
	V252= list(4,/* INLINE-ARGS */V253,symbol_value(VV[102]),symbol_value(VV[103]),symbol_value(VV[106]));
	setq(VV[104],make_cons((V252),symbol_value(VV[104])));}
	setq(VV[99],Cnil);
	setq(VV[102],Cnil);
	setq(VV[103],Cnil);
	setq(VV[106],Cnil);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
goto T907;
T907:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-MAKE-VARIABLE	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_reserve(VM51);
	{register object V254;
	register object V255;
	register object V256;
	object V257;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V254=(base[0]);
	V255=(base[1]);
	V256=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T923;}
	V257=(base[3]);
	vs_top=sup;
	goto T924;
goto T923;
T923:;
	V257= Cnil;
goto T924;
T924:;
	if(((V254))!=Cnil){
	goto T928;}
	if(((V255))==Cnil){
	goto T926;}
	{object V258;
	base[5]= VV[139];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V254= vs_base[0];
	V258= list(2,(V254),(V255));
	setq(VV[99],make_cons((V258),symbol_value(VV[99])));}
	{object V259;
	V259= list(2,VV[140],(V254));
	setq(VV[102],make_cons((V259),symbol_value(VV[102])));
	goto T926;}
goto T928;
T928:;
	if(!(type_of((V254))!=t_cons)){
	goto T940;}
	if(((V257))==Cnil){
	goto T944;}
	{register object x= (V254),V260= symbol_value(VV[98]);
	while(!endp(V260))
	if(eql(x,V260->c.c_car)){
	goto T948;
	}else V260=V260->c.c_cdr;
	goto T947;}
goto T948;
T948:;
	base[4]= VV[141];
	base[5]= (V254);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T942;
goto T947;
T947:;
	setq(VV[98],make_cons(V254,symbol_value(VV[98])));
	goto T942;
goto T944;
T944:;
	{register object x= (V254),V262= symbol_value(VV[99]);
	while(!endp(V262))
	if(type_of(V262->c.c_car)==t_cons &&eql(x,V262->c.c_car->c.c_car)){
	goto T953;
	}else V262=V262->c.c_cdr;
	goto T942;}
goto T953;
T953:;
	base[4]= VV[142];
	base[5]= (V254);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T942;
T942:;
	if(type_of((V254))==t_symbol){
	goto T956;}
	base[4]= VV[143];
	base[5]= (V254);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T956;
T956:;
	base[4]= (V254);
	base[5]= (V256);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	{object V263;
	if((V255)!=Cnil){
	V264= (V255);
	goto T965;}
	base[5]= (V256);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V264= vs_base[0];
goto T965;
T965:;
	V263= list(2,(V254),V264);
	setq(VV[99],make_cons((V263),symbol_value(VV[99])));
	goto T926;}
goto T940;
T940:;
	if(((V255))==Cnil){
	goto T969;}
	if((symbol_value(VV[63]))==Cnil){
	goto T972;}
	base[4]= (V254);
	base[5]= (V256);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	{object V265;
	V265= list(2,(V254),(V255));
	setq(VV[99],make_cons((V265),symbol_value(VV[99])));
	goto T926;}
goto T972;
T972:;
	{object V266;
	base[4]= VV[144];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V266= vs_base[0];
	{object V267;
	V267= list(2,(V266),(V255));
	setq(VV[99],make_cons((V267),symbol_value(VV[99])));}
	setq(VV[103],listA(3,(V254),(V266),symbol_value(VV[103])));
	goto T926;}
goto T969;
T969:;
	{object V268;
	object V269;
	V268= Cnil;
	V269= Cnil;
	if(!(type_of((V256))!=t_cons)){
	goto T987;}
	V269= (V256);
	V268= (V269);
	goto T985;
goto T987;
T987:;
	V268= car((V256));
	V269= cdr((V256));
goto T985;
T985:;
	base[4]= car((V254));
	base[5]= Cnil;
	base[6]= (V268);
	base[7]= (V257);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk355)();
	vs_top=sup;
	base[4]= cdr((V254));
	base[5]= Cnil;
	base[6]= (V269);
	base[7]= (V257);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk355)();
	vs_top=sup;}
goto T926;
T926:;
	base[4]= (V254);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LOOP-MAKE-ITERATION-VARIABLE	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_reserve(VM52);
	{object V270;
	object V271;
	object V272;
	check_arg(3);
	V270=(base[0]);
	V271=(base[1]);
	V272=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= (V270);
	base[4]= (V271);
	base[5]= (V272);
	base[6]= Ct;
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk355)();
	return;
	}
}
/*	function definition for LOOP-DECLARE-VARIABLE	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_reserve(VM53);
	{register object V273;
	register object V274;
	check_arg(2);
	V273=(base[0]);
	V274=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V273))==Cnil){
	goto T1007;}
	if(((V274))==Cnil){
	goto T1007;}
	if(!(((V274))==(Ct))){
	goto T1008;}
goto T1007;
T1007:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1008;
T1008:;
	if(!(type_of((V273))==t_symbol)){
	goto T1015;}
	if(((V274))==(Ct)){
	goto T1018;}
	{register object x= (V273),V275= symbol_value(VV[100]);
	while(!endp(V275))
	if(eql(x,V275->c.c_car)){
	goto T1018;
	}else V275=V275->c.c_cdr;}
	{object V277;
	V277= list(3,VV[31],V274,(V273));
	setq(VV[102],make_cons((V277),symbol_value(VV[102])));
	base[3]= symbol_value(VV[102]);
	vs_top=(vs_base=base+3)+1;
	return;}
goto T1018;
T1018:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1015;
T1015:;
	if(!(type_of((V273))==t_cons)){
	goto T1025;}
	if(!(type_of((V274))==t_cons)){
	goto T1028;}
	base[2]= car((V273));
	base[3]= car((V274));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V273= cdr((V273));
	V274= cdr((V274));
	goto TTL;
goto T1028;
T1028:;
	base[2]= car((V273));
	base[3]= (V274);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V273= cdr((V273));
	goto TTL;
goto T1025;
T1025:;
	base[2]= VV[145];
	base[3]= (V273);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;
	}
}
/*	function definition for LOOP-MAYBE-BIND-FORM	*/

static void L64()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_reserve(VM54);
	{object V278;
	object V279;
	check_arg(2);
	V278=(base[0]);
	V279=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	base[2]= (V278);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk356)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1045;}
	base[2]= (V278);
	vs_top=(vs_base=base+2)+1;
	return;
goto T1045;
T1045:;
	base[3]= VV[146];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V278);
	base[4]= (V279);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk355)();
	return;
	}
}
/*	function definition for LOOP-DO-IF	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_reserve(VM55);
	bds_check;
	{object V280;
	object V281;
	check_arg(2);
	V280=(base[0]);
	V281=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V282;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V282= vs_base[0];
	bds_bind(VV[114],Ct);
	base[3]= Cnil;
	{object V283;
	object V284;
	base[4]= (V280);
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V283= vs_base[0];
	base[4]= car(symbol_value(VV[89]));
	base[5]= VV[147];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1057;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[4]= VV[147];
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V285= vs_base[0];
	V284= make_cons(V285,Cnil);
	goto T1055;
goto T1057;
T1057:;
	V284= Cnil;
goto T1055;
T1055:;
	base[4]= car(symbol_value(VV[89]));
	base[5]= VV[148];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1064;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
goto T1064;
T1064:;
	if((base[3])==Cnil){
	goto T1069;}
	V282= list(3,VV[11],base[3],(V282));
goto T1069;
T1069:;
	if(((V281))==Cnil){
	goto T1076;}
	V286= list(2,VV[36],(V282));
	goto T1074;
goto T1076;
T1076:;
	V286= (V282);
goto T1074;
T1074:;
	base[4]= listA(4,VV[71],V286,(V283),(V284));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk350)();
	bds_unwind1;
	return;}}
	}
}
/*	function definition for LOOP-DO-INITIALLY	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	base[0]= VV[153];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	{object V287;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V287= vs_base[0];
	setq(VV[105],make_cons((V287),symbol_value(VV[105])));
	base[1]= symbol_value(VV[105]);
	vs_top=(vs_base=base+1)+1;
	return;}
}
/*	function definition for LOOP-DO-FINALLY	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_reserve(VM57);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	base[0]= VV[154];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	{object V288;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V288= vs_base[0];
	setq(VV[111],make_cons((V288),symbol_value(VV[111])));
	base[1]= symbol_value(VV[111]);
	vs_top=(vs_base=base+1)+1;
	return;}
}
/*	function definition for LOOP-DO-DO	*/

static void L69()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_reserve(VM58);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk360)();
	return;
}
/*	function definition for LOOP-DO-NAMED	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_reserve(VM59);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V289;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V289= vs_base[0];
	if(type_of((V289))==t_symbol){
	goto T1088;}
	base[0]= VV[155];
	base[1]= (V289);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1088;
T1088:;
	if((symbol_value(VV[107]))!=Cnil){
	goto T1094;}
	if((symbol_value(VV[108]))!=Cnil){
	goto T1094;}
	if((symbol_value(VV[112]))!=Cnil){
	goto T1094;}
	if((symbol_value(VV[114]))==Cnil){
	goto T1093;}
goto T1094;
T1094:;
	base[0]= VV[156];
	base[1]= (V289);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1093;
T1093:;
	if((symbol_value(VV[117]))==Cnil){
	goto T1104;}
	base[0]= VV[157];
	base[1]= car(symbol_value(VV[117]));
	base[2]= (V289);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1104;
T1104:;
	setq(VV[117],list(2,(V289),Cnil));
	base[0]= symbol_value(VV[117]);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-DO-RETURN	*/

static void L71()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_reserve(VM60);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk350)();
	return;
}
/*	function definition for MAKE-LOOP-COLLECTOR	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_reserve(VM61);
	{object V290;
	object V291;
	object V292;
	object V293;
	object V294;
	object V295;
	parse_key(vs_base,FALSE,FALSE,6,VV[162],VV[163],VV[164],VV[361],VV[165],VV[362]);
	vs_top=sup;
	V290=(base[0]);
	V291=(base[1]);
	V292=(base[2]);
	V293=(base[3]);
	V294=(base[4]);
	V295=(base[5]);
	base[12]= VV[158];
	base[13]= (V290);
	base[14]= (V291);
	base[15]= (V292);
	base[16]= (V293);
	base[17]= (V294);
	base[18]= (V295);
	vs_top=(vs_base=base+12)+7;
	siLmake_structure();
	return;
	}
}
/*	function definition for LOOP-GET-COLLECTION-INFO	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_reserve(VM62);
	{object V296;
	object V297;
	object V298;
	check_arg(3);
	V296=(base[0]);
	V297=(base[1]);
	V298=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V299;
	register object V300;
	register object V301;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V299= vs_base[0];
	V302= structure_ref(symbol_value(VV[96]),VV[39],6);
	if((/* INLINE-ARGS */V302)==Cnil){
	goto T1122;}
	V300= Cnil;
	goto T1121;
goto T1122;
T1122:;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V300= vs_base[0];
goto T1121;
T1121:;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[159];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1126;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V301= vs_base[0];
	goto T1124;
goto T1126;
T1126:;
	V301= Cnil;
goto T1124;
T1124:;
	if(type_of((V301))==t_symbol){
	goto T1131;}
	base[3]= VV[160];
	base[4]= (V301);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1131;
T1131:;
	if(((V300))!=Cnil){
	goto T1136;}{object V303;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V303= vs_base[0];
	if(V303==Cnil)goto T1140;
	V300= V303;
	goto T1139;
goto T1140;
T1140:;}
	V300= (V298);
goto T1139;
T1139:;
goto T1136;
T1136:;
	{register object V304;{object V305;
	V305= symbol_value(VV[118]);
	V306= symbol_function(VV[365]);
	V304= (VFUN_NARGS=4,(*(LnkLI364))((V301),V305,VV[161],V306));}
	if(((V304))!=Cnil){
	goto T1146;}
	{object V307;
	base[4]= VV[162];
	base[5]= (V301);
	base[6]= VV[163];
	base[7]= (V297);
	base[8]= VV[164];
	base[9]= make_cons((V296),Cnil);
	base[10]= VV[165];
	base[11]= (V300);
	vs_top=(vs_base=base+4)+8;
	(void) (*Lnk366)();
	vs_top=sup;
	V304= vs_base[0];
	V307= (V304);
	setq(VV[118],make_cons((V307),symbol_value(VV[118])));
	goto T1144;}
goto T1146;
T1146:;
	V308= structure_ref((V304),VV[158],1);
	if((/* INLINE-ARGS */V308)==((V297))){
	goto T1159;}
	base[3]= VV[166];
	base[4]= (V301);
	V309= structure_ref((V304),VV[158],2);
	base[5]= car(/* INLINE-ARGS */V309);
	base[6]= (V296);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1159;
T1159:;
	V310= structure_ref((V304),VV[158],4);
	if(equal((V300),/* INLINE-ARGS */V310)){
	goto T1166;}
	base[3]= VV[167];
	base[4]= (V301);
	base[5]= (V300);
	base[6]= structure_ref((V304),VV[158],4);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk335)();
	vs_top=sup;
	V311= structure_ref((V304),VV[158],4);
	if(!((/* INLINE-ARGS */V311)==(Ct))){
	goto T1166;}
	(void)(structure_set((V304),VV[158],4,(V300)));
goto T1166;
T1166:;
	{object V314;
	V315= structure_ref(V304,VV[158],2);
	V314= make_cons(V296,/* INLINE-ARGS */V315);
	(void)(structure_set(V304,VV[158],2,(V314)));}
goto T1144;
T1144:;
	base[3]= (V304);
	base[4]= (V299);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	function definition for LOOP-LIST-COLLECTION	*/

static void L74()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_reserve(VM63);
	{object V316;
	check_arg(1);
	V316=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V317;
	register object V318;
	base[1]= (V316);
	base[2]= VV[5];
	base[3]= VV[5];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1183;}
	V317= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1184;}
	V318= vs_base[0];
	vs_top=sup;
	goto T1185;
goto T1183;
T1183:;
	V317= Cnil;
goto T1184;
T1184:;
	V318= Cnil;
goto T1185;
T1185:;
	{register object V319;
	V319= structure_ref((V317),VV[158],3);
	if(((V319))!=Cnil){
	goto T1187;}
	base[1]= VV[168];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V320= vs_base[0];
	base[1]= VV[169];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V321= vs_base[0];
	if((structure_ref((V317),VV[158],0))!=Cnil){
	goto T1197;}
	V322= Cnil;
	goto T1196;
goto T1197;
T1197:;
	V323= structure_ref((V317),VV[158],0);
	V322= make_cons(/* INLINE-ARGS */V323,Cnil);
goto T1196;
T1196:;
	V319= listA(3,V320,V321,V322);
	(void)(structure_set((V317),VV[158],3,(V319)));
	{object V324;
	V324= list(2,VV[170],(V319));
	setq(VV[106],make_cons((V324),symbol_value(VV[106])));}
	if((structure_ref((V317),VV[158],0))!=Cnil){
	goto T1187;}
	base[1]= listA(3,VV[171],car((V319)),cddr((V319)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	vs_top=sup;
goto T1187;
T1187:;
	{object V325= (V316);
	if((V325!= VV[5]))goto T1206;
	V318= list(2,VV[5],(V318));
	goto T1205;
goto T1206;
T1206:;
	if((V325!= VV[369]))goto T1208;
	goto T1205;
goto T1208;
T1208:;
	if((V325!= VV[370]))goto T1209;
	if(!(type_of((V318))==t_cons)){
	goto T1210;}
	if((car((V318)))==(VV[5])){
	goto T1205;}
goto T1210;
T1210:;
	V318= list(2,VV[172],(V318));
	goto T1205;
goto T1209;
T1209:;
	FEerror("The ECASE key value ~s is illegal.",1,V325);
	goto T1205;}
goto T1205;
T1205:;
	base[1]= list(3,VV[173],(V319),(V318));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-SUM-COLLECTION	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_reserve(VM64);
	{object V326;
	object V327;
	object V328;
	check_arg(3);
	V326=(base[0]);
	V327=(base[1]);
	V328=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V329;
	object V330;
	base[3]= (V326);
	base[4]= VV[174];
	base[5]= (V328);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1220;}
	V329= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1221;}
	V330= vs_base[0];
	vs_top=sup;
	goto T1222;
goto T1220;
T1220:;
	V329= Cnil;
goto T1221;
T1221:;
	V330= Cnil;
goto T1222;
T1222:;
	base[3]= structure_ref((V329),VV[158],4);
	base[4]= (V327);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	{register object V331;
	V331= structure_ref((V329),VV[158],3);
	if(((V331))!=Cnil){
	goto T1227;}{object V333;
	V333= structure_ref((V329),VV[158],0);
	if(V333==Cnil)goto T1234;
	base[3]= V333;
	goto T1233;
goto T1234;
T1234:;}
	base[4]= VV[175];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[3]= vs_base[0];
goto T1233;
T1233:;
	base[4]= Cnil;
	base[5]= structure_ref((V329),VV[158],4);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V332= vs_base[0];
	V331= make_cons(V332,Cnil);
	(void)(structure_set((V329),VV[158],3,(V331)));
	if((structure_ref((V329),VV[158],0))!=Cnil){
	goto T1227;}
	V334= structure_ref((V329),VV[158],3);
	base[3]= car(/* INLINE-ARGS */V334);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)();
	vs_top=sup;
goto T1227;
T1227:;
	if(!(((V326))==(VV[176]))){
	goto T1244;}
	V335= car((V331));
	base[4]= Ct;
	base[5]= car((V331));
	base[6]= list(2,VV[177],car((V331)));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V336= vs_base[0];
	base[3]= list(3,VV[8],(V330),list(3,VV[11],/* INLINE-ARGS */V335,V336));
	goto T1242;
goto T1244;
T1244:;
	V337= car((V331));
	base[4]= Ct;
	base[5]= car((V331));
	base[6]= car((V331));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V338= vs_base[0];
	base[3]= list(3,VV[11],/* INLINE-ARGS */V337,list(3,VV[178],V338,(V330)));
goto T1242;
T1242:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-MAXMIN-COLLECTION	*/

static void L76()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_reserve(VM65);
	{object V339;
	check_arg(1);
	V339=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V340;
	object V341;
	base[1]= (V339);
	base[2]= VV[179];
	base[3]= symbol_value(VV[180]);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1258;}
	V340= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1259;}
	V341= vs_base[0];
	vs_top=sup;
	goto T1260;
goto T1258;
T1258:;
	V340= Cnil;
goto T1259;
T1259:;
	V341= Cnil;
goto T1260;
T1260:;
	base[1]= structure_ref((V340),VV[158],4);
	base[2]= symbol_value(VV[180]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	{register object V342;
	V342= structure_ref((V340),VV[158],5);
	if(((V342))!=Cnil){
	goto T1265;}{object V343;
	V343= structure_ref((V340),VV[158],0);
	if(V343==Cnil)goto T1271;
	base[1]= V343;
	goto T1270;
goto T1271;
T1271:;}
	base[2]= VV[181];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[1]= vs_base[0];
goto T1270;
T1270:;
	base[2]= structure_ref((V340),VV[158],4);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk372)();
	vs_top=sup;
	V342= vs_base[0];
	(void)(structure_set((V340),VV[158],5,(V342)));
	if((structure_ref((V340),VV[158],0))!=Cnil){
	goto T1265;}
	base[1]= structure_ref((V342),VV[18],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	vs_top=sup;
goto T1265;
T1265:;
	base[1]= (V339);
	base[2]= (V342);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk373)();
	vs_top=sup;
	{object V344;
	V344= list(2,VV[182],(V342));
	setq(VV[106],make_cons((V344),symbol_value(VV[106])));}
	base[1]= list(4,VV[183],(V342),(V339),(V341));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-DO-ALWAYS	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_reserve(VM66);
	{object V345;
	object V346;
	check_arg(2);
	V345=(base[0]);
	V346=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V347;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V347= vs_base[0];
	if(((V345))==Cnil){
	goto T1286;}
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
goto T1286;
T1286:;
	if(((V346))==Cnil){
	goto T1293;}
	V348= VV[8];
	goto T1291;
goto T1293;
T1293:;
	V348= VV[184];
goto T1291;
T1291:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V349= vs_base[0];
	base[2]= list(3,V348,(V347),V349);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk360)();
	vs_top=sup;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk368)();
	return;}
	}
}
/*	function definition for LOOP-DO-THEREIS	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_reserve(VM67);
	{object V350;
	check_arg(1);
	V350=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V350))==Cnil){
	goto T1298;}
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
goto T1298;
T1298:;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V351= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V352= vs_base[0];
	V353= list(3,VV[11],V351,V352);
	base[2]= symbol_value(VV[115]);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V354= vs_base[0];
	base[1]= list(3,VV[8],/* INLINE-ARGS */V353,V354);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;
	}
}
/*	function definition for LOOP-DO-WHILE	*/

static void L79()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_reserve(VM68);
	{object V355;
	object V356;
	check_arg(2);
	V355=(base[0]);
	V356=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V357;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V357= vs_base[0];
	base[3]= (V356);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	if(((V355))==Cnil){
	goto T1312;}
	V358= VV[8];
	goto T1310;
goto T1312;
T1312:;
	V358= VV[184];
goto T1310;
T1310:;
	base[3]= list(3,V358,(V357),VV[185]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk350)();
	return;}
	}
}
/*	function definition for LOOP-DO-WITH	*/

static void L80()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_reserve(VM69);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	base[0]= VV[186];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	{register object V359;
	register object V360;
	register object V361;
	V359= Cnil;
	V360= Cnil;
	V361= Cnil;
goto T1317;
T1317:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V359= vs_base[0];
	base[0]= (V359);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk363)();
	vs_top=sup;
	V361= vs_base[0];
	base[0]= car(symbol_value(VV[89]));
	base[1]= VV[187];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1328;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V360= vs_base[0];
	goto T1326;
goto T1328;
T1328:;
	V360= Cnil;
goto T1326;
T1326:;
	base[0]= (V359);
	base[1]= (V360);
	base[2]= (V361);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[0]= car(symbol_value(VV[89]));
	base[1]= VV[152];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1339;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	goto T1337;
goto T1339;
T1339:;
	vs_base=vs_top;
	(void) (*Lnk345)();
	return;
goto T1337;
T1337:;
	goto T1317;}
}
/*	function definition for LOOP-HACK-ITERATION	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_reserve(VM70);
	{register object V362;
	check_arg(1);
	V362=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V363;
	register object V364;
	register object V365;
	register object V366;
	register object V367;
	register object V368;
	register object V369;
	register object V370;
	register object V371;
	object V372;
	V363= Cnil;
	V364= Cnil;
	V365= Cnil;
	V366= Cnil;
	V367= Cnil;
	V368= Cnil;
	V369= Cnil;
	V370= Cnil;
	V371= Cnil;
	V372= Cnil;
goto T1346;
T1346:;
	base[2]= car((V362));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V373;
	V373= cdr((V362));
	 vs_top=base+2;
	 while(!endp(V373))
	 {vs_push(car(V373));V373=cdr(V373);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V372= vs_base[0];
	V371= (V372);
	if((car((V371)))!=Cnil){
	goto T1356;}
	goto T1355;
goto T1356;
T1356:;
	{object V374;
	V374= car((V371));
	V363= make_cons((V374),(V363));}
goto T1355;
T1355:;
	V371= cdr((V371));
	base[1]= car((V371));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V375= vs_base[0];
	V364= nconc((V364),V375);
	V371= cdr((V371));
	if((car((V371)))!=Cnil){
	goto T1366;}
	goto T1365;
goto T1366;
T1366:;
	{object V376;
	V376= car((V371));
	V365= make_cons((V376),(V365));}
goto T1365;
T1365:;
	V371= cdr((V371));
	base[1]= car((V371));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V377= vs_base[0];
	V366= nconc((V366),V377);
	V371= cdr((V371));
	if((symbol_value(VV[109]))==Cnil){
	goto T1378;}
	base[1]= VV[188];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1378;
T1378:;
	if(((V371))!=Cnil){
	goto T1382;}
	V371= (V372);
goto T1382;
T1382:;
	if((car((V371)))==Cnil){
	goto T1386;}
	{object V378;
	V378= car((V371));
	V367= make_cons((V378),(V367));}
goto T1386;
T1386:;
	V371= cdr((V371));
	base[1]= car((V371));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V379= vs_base[0];
	V368= nconc((V368),V379);
	V371= cdr((V371));
	if((car((V371)))==Cnil){
	goto T1396;}
	{object V380;
	V380= car((V371));
	V369= make_cons((V380),(V369));}
goto T1396;
T1396:;
	base[1]= cadr((V371));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V381= vs_base[0];
	V370= nconc((V370),V381);
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[152];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1406;}
	base[1]= (V370);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V382= vs_base[0];
	base[1]= (V369);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V383= vs_base[0];
	base[1]= (V368);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V384= vs_base[0];
	base[1]= (V367);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V385= vs_base[0];
	setq(VV[107],listA(5,V382,V383,V384,V385,symbol_value(VV[107])));
	base[1]= (V366);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V386= vs_base[0];
	base[1]= (V365);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V387= vs_base[0];
	base[1]= (V364);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V388= vs_base[0];
	base[1]= (V363);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V389= vs_base[0];
	setq(VV[110],listA(5,V386,V387,V388,V389,symbol_value(VV[110])));
	vs_base=vs_top;
	(void) (*Lnk345)();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1406;
T1406:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	if((structure_ref(symbol_value(VV[96]),VV[39],7))!=Cnil){
	goto T1433;}
	base[1]= car(symbol_value(VV[89]));
	base[2]= structure_ref(symbol_value(VV[96]),VV[39],1);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V371= vs_base[0];
	if(((V371))==Cnil){
	goto T1433;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V362= (V371);
goto T1433;
T1433:;
	goto T1346;}
	}
}
/*	function definition for LOOP-DO-FOR	*/

static void L83()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_reserve(VM71);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	{object V390;
	object V391;
	object V392;
	object V393;
	object V394;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V390= vs_base[0];
	base[3]= (V390);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk363)();
	vs_top=sup;
	V391= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V392= vs_base[0];
	V393= Cnil;
	V394= Cnil;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V393= vs_base[0];
	if(!(type_of((V392))==t_symbol)){
	goto T1454;}
	base[3]= (V392);
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],2);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V394= vs_base[0];
	if(((V394))!=Cnil){
	goto T1453;}
goto T1454;
T1454:;
	base[3]= VV[191];
	base[4]= (V392);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1453;
T1453:;
	base[3]= car((V394));
	base[4]= (V390);
	base[5]= (V393);
	base[6]= (V391);
	{object V395;
	V395= cdr((V394));
	 vs_top=base+7;
	 while(!endp(V395))
	 {vs_push(car(V395));V395=cdr(V395);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	return;}
}
/*	function definition for LOOP-DO-REPEAT	*/

static void L84()
{register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_reserve(VM72);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V396;
	register object V397;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V396= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= symbol_value(VV[180]);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	V397= vs_base[0];
	if(!(type_of((V396))==t_cons)){
	goto T1472;}
	if(!((car((V396)))==(VV[192]))){
	goto T1472;}
	base[0]= cadr((V396));
	base[1]= (V397);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1472;}
	V397= cadr((V396));
goto T1472;
T1472:;
	{object V398;
	object V399;
	object V400;
	base[0]= (V396);
	base[1]= (V397);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1485;}
	V398= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1486;}
	V399= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1487;}
	V400= vs_base[0];
	vs_top=sup;
	goto T1488;
goto T1485;
T1485:;
	V398= Cnil;
goto T1486;
T1486:;
	V399= Cnil;
goto T1487;
T1487:;
	V400= Cnil;
goto T1488;
T1488:;
	if(((V399))==Cnil){
	goto T1490;}
	if(!(number_compare((V400),small_fixnum(1))<=0)){
	goto T1490;}
	base[0]= listA(6,Ct,Cnil,Cnil,Cnil,(number_compare((V400),small_fixnum(0))<=0?Ct:Cnil),VV[193]);
	vs_top=(vs_base=base+0)+1;
	return;
goto T1490;
T1490:;
	{register object V401;
	base[1]= VV[194];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V398);
	base[2]= (V397);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V401= vs_base[0];
	if(((V399))==Cnil){
	goto T1500;}
	V402= list(2,VV[36],list(2,VV[195],list(3,VV[11],(V401),list(2,VV[196],(V401)))));
	base[0]= make_cons(/* INLINE-ARGS */V402,VV[197]);
	vs_top=(vs_base=base+0)+1;
	return;
goto T1500;
T1500:;
	V403= list(2,VV[198],list(3,VV[11],(V401),list(2,VV[196],(V401))));
	base[0]= make_cons(/* INLINE-ARGS */V403,VV[199]);
	vs_top=(vs_base=base+0)+1;
	return;}}}
}
/*	function definition for LOOP-WHEN-IT-VARIABLE	*/

static void L85()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_reserve(VM73);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	if(symbol_value(VV[115])!=Cnil){
	base[0]= symbol_value(VV[115]);
	vs_top=(vs_base=base+0)+1;
	return;}
	base[1]= VV[200];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	setq(VV[115],vs_base[0]);
	base[0]= symbol_value(VV[115]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-ANSI-FOR-EQUALS	*/

static void L86()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_reserve(VM74);
	{register object V404;
	object V405;
	object V406;
	check_arg(3);
	V404=(base[0]);
	V405=(base[1]);
	V406=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= (V404);
	base[4]= Cnil;
	base[5]= (V406);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[201];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1512;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V407= vs_base[0];
	V408= list(2,(V404),V407);
	base[3]= listA(7,Cnil,/* INLINE-ARGS */V408,Cnil,Cnil,Cnil,list(2,(V404),(V405)),VV[202]);
	vs_top=(vs_base=base+3)+1;
	return;
goto T1512;
T1512:;
	base[3]= listA(3,Cnil,list(2,(V404),(V405)),VV[203]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for LOOP-FOR-ACROSS	*/

static void L87()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_reserve(VM75);
	{object V409;
	object V410;
	object V411;
	check_arg(3);
	V409=(base[0]);
	V410=(base[1]);
	V411=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= (V409);
	base[4]= Cnil;
	base[5]= (V411);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	{object V412;
	register object V413;
	base[3]= VV[204];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V412= vs_base[0];
	base[3]= VV[205];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V413= vs_base[0];
	{register object V414;
	object V415;
	object V416;
	base[3]= (V410);
	base[4]= VV[206];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1529;}
	V414= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1530;}
	V415= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1531;}
	V416= vs_base[0];
	vs_top=sup;
	goto T1532;
goto T1529;
T1529:;
	V414= Cnil;
goto T1530;
T1530:;
	V415= Cnil;
goto T1531;
T1531:;
	V416= Cnil;
goto T1532;
T1532:;
	base[3]= (V412);
	base[4]= (V414);
	if(!(type_of((V414))==t_cons)){
	goto T1538;}
	if(!((car((V414)))==(VV[192]))){
	goto T1538;}
	base[5]= cadr((V414));
	goto T1536;
goto T1538;
T1538:;
	base[5]= VV[206];
goto T1536;
T1536:;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[3]= (V413);
	base[4]= small_fixnum(0);
	base[5]= VV[207];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	{long V417;
	object V418;
	register object V419;
	object V420;
	object V421;
	object V422;
	V417= 0;
	if(((V415))!=Cnil){
	goto T1549;}
	{object V423;
	base[7]= VV[208];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V423= vs_base[0];
	{object V424;
	V424= list(3,VV[11],(V423),list(2,VV[209],(V412)));
	setq(VV[105],make_cons((V424),symbol_value(VV[105])));}
	base[7]= (V423);
	base[8]= small_fixnum(0);
	base[9]= VV[207];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V418= vs_base[0];
	goto T1547;}
goto T1549;
T1549:;
	V417= (long)length((V416));
	V418= make_fixnum(V417);
goto T1547;
T1547:;
	V419= list(3,VV[210],(V413),(V418));
	V420= (V419);
	V421= list(2,(V409),list(3,VV[211],(V412),(V413)));
	V422= list(2,(V413),list(2,VV[177],(V413)));
	if(((V415))==Cnil){
	goto T1564;}
	V419= ((V417)==(0)?Ct:Cnil);
	if(!((V417)<=(1))){
	goto T1564;}
	V420= Ct;
goto T1564;
T1564:;
	if(((((V419))==((V420))?Ct:Cnil))==Cnil){
	goto T1573;}
	V425= Cnil;
	goto T1572;
goto T1573;
T1573:;
	V425= list(4,(V419),(V421),Cnil,(V422));
goto T1572;
T1572:;
	base[7]= listA(5,(V420),(V421),Cnil,(V422),V425);
	vs_top=(vs_base=base+7)+1;
	return;}}}
	}
}
/*	function definition for LOOP-LIST-STEP	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_reserve(VM76);
	{object V426;
	check_arg(1);
	V426=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V427;
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[212];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1577;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V427= vs_base[0];
	goto T1575;
goto T1577;
T1577:;
	V427= VV[213];
goto T1575;
T1575:;
	if(!(type_of((V427))==t_cons)){
	goto T1583;}
	if(!((car((V427)))==(VV[214]))){
	goto T1583;}
	base[1]= VV[215];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk335)();
	vs_top=sup;
	base[1]= list(3,VV[216],(V427),(V426));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
goto T1583;
T1583:;
	if(!(type_of((V427))==t_cons)){
	goto T1592;}
	if(!((car((V427)))==(VV[83]))){
	goto T1592;}
	base[1]= list(2,cadr((V427)),(V426));
	base[2]= cadr((V427));
	vs_top=(vs_base=base+1)+2;
	return;
goto T1592;
T1592:;
	base[3]= VV[217];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V427);
	base[4]= VV[83];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V428= vs_base[0];
	base[1]= list(3,VV[216],V428,(V426));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-FOR-ON	*/

static void L89()
{register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_reserve(VM77);
	{register object V429;
	object V430;
	object V431;
	check_arg(3);
	V429=(base[0]);
	V430=(base[1]);
	V431=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V432;
	object V433;
	object V434;
	base[3]= (V430);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1607;}
	V432= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1608;}
	V433= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1609;}
	V434= vs_base[0];
	vs_top=sup;
	goto T1610;
goto T1607;
T1607:;
	V432= Cnil;
goto T1608;
T1608:;
	V433= Cnil;
goto T1609;
T1609:;
	V434= Cnil;
goto T1610;
T1610:;
	{register object V435;
	V435= (V429);
	if(((V429))==Cnil){
	goto T1613;}
	if(!(type_of((V429))==t_symbol)){
	goto T1613;}
	base[3]= (V429);
	base[4]= (V432);
	base[5]= (V431);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T1611;
goto T1613;
T1613:;
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	V435= vs_base[0];
	base[3]= (V435);
	base[4]= (V432);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[3]= (V429);
	base[4]= Cnil;
	base[5]= (V431);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
goto T1611;
T1611:;
	{object V436;
	object V437;
	base[3]= (V435);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T1630;}
	V436= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1631;}
	V437= vs_base[0];
	vs_top=sup;
	goto T1632;
goto T1630;
T1630:;
	V436= Cnil;
goto T1631;
T1631:;
	V437= Cnil;
goto T1632;
T1632:;
	{register object V438;
	object V439;
	base[4]= (((V429))==((V435))?Ct:Cnil);
	base[5]= (V435);
	base[6]= list(2,VV[218],(V435));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V438= vs_base[0];
	V439= (V438);
	if(((V433))==Cnil){
	goto T1638;}
	if(!(type_of((V434))==t_cons||((V434))==Cnil)){
	goto T1638;}
	V438= (((V434))==Cnil?Ct:Cnil);
goto T1638;
T1638:;
	if(!(((V429))==((V435)))){
	goto T1645;}
	base[4]= Ct;
	base[5]= (V435);
	base[6]= (V436);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V440= vs_base[0];
	base[4]= list(8,Cnil,list(2,(V435),V440),(V439),Cnil,Cnil,Cnil,(V438),Cnil);
	vs_top=(vs_base=base+4)+1;
	return;
goto T1645;
T1645:;
	{object V441;
	object V442;
	V441= list(2,(V429),(V435));
	V442= list(2,(V435),(V436));
	if(((((V438))==((V439))?Ct:Cnil))==Cnil){
	goto T1654;}
	V443= Cnil;
	goto T1653;
goto T1654;
T1654:;
	V443= list(4,(V438),(V441),Cnil,(V442));
goto T1653;
T1653:;
	base[4]= listA(5,(V439),(V441),Cnil,(V442),V443);
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	function definition for LOOP-FOR-IN	*/

static void L90()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_reserve(VM78);
	{object V444;
	object V445;
	object V446;
	check_arg(3);
	V444=(base[0]);
	V445=(base[1]);
	V446=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V447;
	object V448;
	object V449;
	base[3]= (V445);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1658;}
	V447= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1659;}
	V448= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1660;}
	V449= vs_base[0];
	vs_top=sup;
	goto T1661;
goto T1658;
T1658:;
	V447= Cnil;
goto T1659;
T1659:;
	V448= Cnil;
goto T1660;
T1660:;
	V449= Cnil;
goto T1661;
T1661:;
	{register object V450;
	base[3]= VV[219];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V450= vs_base[0];
	base[3]= (V444);
	base[4]= Cnil;
	base[5]= (V446);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	base[3]= (V450);
	base[4]= (V447);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	{object V451;
	object V452;
	base[3]= (V450);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T1674;}
	V451= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1675;}
	V452= vs_base[0];
	vs_top=sup;
	goto T1676;
goto T1674;
T1674:;
	V451= Cnil;
goto T1675;
T1675:;
	V452= Cnil;
goto T1676;
T1676:;
	{register object V453;
	object V454;
	object V455;
	object V456;
	V453= list(2,VV[220],(V450));
	V454= (V453);
	V455= list(2,(V444),list(2,VV[65],(V450)));
	V456= list(2,(V450),(V451));
	if(((V448))==Cnil){
	goto T1681;}
	if(!(type_of((V449))==t_cons||((V449))==Cnil)){
	goto T1681;}
	V453= (((V449))==Cnil?Ct:Cnil);
goto T1681;
T1681:;
	if(((((V453))==((V454))?Ct:Cnil))==Cnil){
	goto T1688;}
	V457= Cnil;
	goto T1687;
goto T1688;
T1688:;
	V457= list(4,(V453),(V455),Cnil,(V456));
goto T1687;
T1687:;
	base[6]= listA(5,(V454),(V455),Cnil,(V456),V457);
	vs_top=(vs_base=base+6)+1;
	return;}}}}
	}
}
/*	function definition for MAKE-LOOP-PATH	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_reserve(VM79);
	{object V458;
	object V459;
	object V460;
	object V461;
	object V462;
	parse_key(vs_base,FALSE,FALSE,5,VV[223],VV[226],VV[227],VV[224],VV[225]);
	vs_top=sup;
	V458=(base[0]);
	V459=(base[1]);
	V460=(base[2]);
	V461=(base[3]);
	V462=(base[4]);
	base[10]= VV[221];
	base[11]= (V458);
	base[12]= (V459);
	base[13]= (V460);
	base[14]= (V461);
	base[15]= (V462);
	vs_top=(vs_base=base+10)+6;
	siLmake_structure();
	return;
	}
}
/*	function definition for ADD-LOOP-PATH	*/

static void L92()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_reserve(VM80);
	bds_check;
	{object V463;
	object V464;
	register object V465;
	object V466;
	object V467;
	object V468;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,3,VV[226],VV[227],VV[225]);
	V463=(base[0]);
	V464=(base[1]);
	V465=(base[2]);
	vs_top=sup;
	V466=(base[3]);
	V467=(base[4]);
	V468=(base[5]);
	if(type_of((V463))==t_cons||((V463))==Cnil){
	goto T1696;}
	V463= make_cons((V463),Cnil);
goto T1696;
T1696:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
goto T1702;
T1702:;
	base[11]= (V465);
	base[12]= VV[39];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk378)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1703;}
	bds_unwind1;
	bds_unwind1;
	goto T1700;
goto T1703;
T1703:;
	base[11]= VV[47];
	base[12]= VV[48];
	base[13]= VV[222];
	base[14]= (V465);
	base[15]= VV[39];
	vs_top=(vs_base=base+11)+5;
	Lcerror();
	vs_top=sup;
	base[11]= symbol_value(VV[50]);
	base[12]= VV[51];
	base[13]= VV[222];
	vs_top=(vs_base=base+11)+3;
	Lformat();
	vs_top=sup;
	base[11]= symbol_value(VV[50]);
	vs_top=(vs_base=base+11)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V465= vs_base[0];
	base[11]= symbol_value(VV[50]);
	base[12]= VV[52];
	vs_top=(vs_base=base+11)+2;
	Lformat();
	vs_top=sup;
	goto T1702;
goto T1700;
T1700:;
	{object V469;
	object V470;
	V469= structure_ref((V465),VV[39],3);
	base[9]= VV[223];
	{object V471;
	object V472= (V463);
	if(endp(V472)){
	base[10]= Cnil;
	goto T1731;}
	base[11]=V471=MMcons(Cnil,Cnil);
goto T1732;
T1732:;
	(V471->c.c_car)= symbol_name((V472->c.c_car));
	V472=MMcdr(V472);
	if(endp(V472)){
	base[10]= base[11];
	goto T1731;}
	V471=MMcdr(V471)=MMcons(Cnil,Cnil);
	goto T1732;}
goto T1731;
T1731:;
	base[11]= VV[224];
	base[12]= (V464);
	base[13]= VV[225];
	base[14]= (V468);
	base[15]= VV[226];
	{object V473;
	object V474= (V466);
	if(endp(V474)){
	base[16]= Cnil;
	goto T1739;}
	base[17]=V473=MMcons(Cnil,Cnil);
goto T1740;
T1740:;
	if(!(type_of((V474->c.c_car))==t_cons||((V474->c.c_car))==Cnil)){
	goto T1743;}
	(V473->c.c_car)= (V474->c.c_car);
	goto T1741;
goto T1743;
T1743:;
	(V473->c.c_car)= make_cons((V474->c.c_car),Cnil);
goto T1741;
T1741:;
	V474=MMcdr(V474);
	if(endp(V474)){
	base[16]= base[17];
	goto T1739;}
	V473=MMcdr(V473)=MMcons(Cnil,Cnil);
	goto T1740;}
goto T1739;
T1739:;
	base[17]= VV[227];
	base[18]= (V467);
	vs_top=(vs_base=base+9)+10;
	(void) (*Lnk379)();
	vs_top=sup;
	V470= vs_base[0];
	{register object V476;
	register object V477;
	V476= (V463);
	V477= car((V476));
goto T1751;
T1751:;
	if(!(endp_prop((V476)))){
	goto T1752;}
	goto T1747;
goto T1752;
T1752:;
	{register object V478;
	register object V479;
	register object V480;
	V478= symbol_name((V477));
	V479= (V469);
	V480= (V470);
	base[11]= (V478);
	base[12]= (V479);
	base[13]= (V480);
	vs_top=(vs_base=base+11)+3;
	siLhash_set();
	vs_top=sup;}
	V476= cdr((V476));
	V477= car((V476));
	goto T1751;}
goto T1747;
T1747:;
	base[9]= (V470);
	vs_top=(vs_base=base+9)+1;
	return;}
	}
}
/*	function definition for LOOP-FOR-BEING	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_reserve(VM81);
	{object V481;
	object V482;
	object V483;
	check_arg(3);
	V481=(base[0]);
	V482=(base[1]);
	V483=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V484;
	object V485;
	object V486;
	object V487;
	object V488;
	V484= Cnil;
	V485= Cnil;
	V486= Cnil;
	V487= Cnil;
	V488= Cnil;
	base[3]= (V482);
	base[4]= VV[228];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1770;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V484= vs_base[0];
	goto T1768;
goto T1770;
T1770:;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[152];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1776;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V486= Ct;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[229];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1783;}
	base[3]= VV[230];
	base[4]= car(symbol_value(VV[89]));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1783;
T1783:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V484= vs_base[0];
	V489= list(2,VV[231],(V482));
	V488= make_cons(/* INLINE-ARGS */V489,Cnil);
	goto T1768;
goto T1776;
T1776:;
	base[3]= VV[232];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1768;
T1768:;
	if(type_of((V484))==t_symbol){
	goto T1797;}
	base[3]= VV[233];
	base[4]= (V484);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1795;
goto T1797;
T1797:;
	base[3]= (V484);
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],3);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V485= vs_base[0];
	if(((V485))!=Cnil){
	goto T1802;}
	base[3]= VV[234];
	base[4]= (V484);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1795;
goto T1802;
T1802:;
	if(((V486))==Cnil){
	goto T1795;}
	if((structure_ref((V485),VV[221],2))!=Cnil){
	goto T1795;}
	base[3]= VV[235];
	base[4]= (V484);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1795;
T1795:;
	{object V490;
	object V491;
	object V492;
	V490= structure_ref((V485),VV[221],3);
	base[3]= structure_ref((V485),VV[221],1);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk380)();
	vs_top=sup;
	V493= vs_base[0];
	V491= nconc((V488),V493);
	V492= structure_ref((V485),VV[221],4);
	if(!(type_of((V490))==t_symbol)){
	goto T1822;}
	base[3]= (V490);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V490= vs_base[0];
goto T1822;
T1822:;
	if(((V486))==Cnil){
	goto T1829;}
	base[3]= (V490);
	base[4]= (V481);
	base[5]= (V483);
	base[6]= (V491);
	base[7]= VV[236];
	base[8]= Ct;
	{object V494;
	V494= (V492);
	 vs_top=base+9;
	 while(!endp(V494))
	 {vs_push(car(V494));V494=cdr(V494);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V487= vs_base[0];
	goto T1827;
goto T1829;
T1829:;
	base[3]= (V490);
	base[4]= (V481);
	base[5]= (V483);
	base[6]= (V491);
	{object V495;
	V495= (V492);
	 vs_top=base+7;
	 while(!endp(V495))
	 {vs_push(car(V495));V495=cdr(V495);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V487= vs_base[0];
goto T1827;
T1827:;}
	if((symbol_value(VV[101]))==Cnil){
	goto T1843;}
	base[3]= VV[237];
	base[4]= symbol_value(VV[101]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1843;
T1843:;
	V497 = make_fixnum((long)length((V487)));
	{register object x= V497,V496= VV[238];
	while(!endp(V496))
	if(eql(x,V496->c.c_car)){
	goto T1848;
	}else V496=V496->c.c_cdr;}
	base[3]= VV[239];
	base[4]= (V484);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1848;
T1848:;
	{register object V498;
	register object V499;
	V498= car((V487));
	V499= Cnil;
goto T1856;
T1856:;
	if(((V498))!=Cnil){
	goto T1857;}
	goto T1853;
goto T1857;
T1857:;
	V499= car((V498));
	if(!(type_of((V499))!=t_cons)){
	goto T1863;}
	base[3]= (V499);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T1861;
goto T1863;
T1863:;
	base[3]= car((V499));
	base[4]= cadr((V499));
	base[5]= caddr((V499));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
goto T1861;
T1861:;
	V498= cdr((V498));
	goto T1856;}
goto T1853;
T1853:;
	V500= reverse(cadr((V487)));
	setq(VV[105],nconc(/* INLINE-ARGS */V500,symbol_value(VV[105])));
	base[3]= cddr((V487));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for NAMED-VARIABLE	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_reserve(VM82);
	{object V501;
	check_arg(1);
	V501=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V502;
	base[1]= (V501);
	base[2]= symbol_value(VV[101]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	V502= vs_base[0];
	if(((V502))!=Cnil){
	goto T1881;}
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
goto T1881;
T1881:;
	setq(VV[101],(VFUN_NARGS=2,(*(LnkLI382))((V502),symbol_value(VV[101]))));
	base[1]= cdr((V502));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-COLLECT-PREPOSITIONAL-PHRASES	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_reserve(VM83);
	{object V503;
	object V504;
	object V505;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V503=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1889;}
	V504=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1890;}
	V505=(base[2]);
	vs_top=sup;
	goto T1891;
goto T1889;
T1889:;
	V504= Cnil;
goto T1890;
T1890:;
	V505= Cnil;
goto T1891;
T1891:;
	base[3]=make_cclosure_new(LC96,Cnil,Cnil,Cdata);
	base[3]=MMcons(base[3],Cnil);
	{object V506;
	object V507;
	register object V508;
	register object V509;
	object V510;
	object V511;
	{object V512;
	object V513= (V505);
	if(endp(V513)){
	V510= Cnil;
	goto T1894;}
	base[4]=V512=MMcons(Cnil,Cnil);
goto T1895;
T1895:;
	V515= car((V513->c.c_car));
	V516= (base[3]->c.c_car);
	base[5]= (VFUN_NARGS=4,(*(LnkLI364))(/* INLINE-ARGS */V515,(V503),VV[20],V516));
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V512->c.c_cdr)= vs_base[0];
	{object cdr_V512=MMcdr(V512);while(!endp(cdr_V512)) {cdr_V512=MMcdr(cdr_V512);V512=MMcdr(V512);}}
	V513=MMcdr(V513);
	if(endp(V513)){
	base[4]=base[4]->c.c_cdr;
	V510= base[4];
	goto T1894;}
	goto T1895;}
goto T1894;
T1894:;
	{object V517;
	object V518= (V505);
	if(endp(V518)){
	V511= Cnil;
	goto T1899;}
	base[4]=V517=MMcons(Cnil,Cnil);
goto T1900;
T1900:;
	(V517->c.c_car)= car((V518->c.c_car));
	V518=MMcdr(V518);
	if(endp(V518)){
	V511= base[4];
	goto T1899;}
	V517=MMcdr(V517)=MMcons(Cnil,Cnil);
	goto T1900;}
goto T1899;
T1899:;
	V506= Cnil;
	V507= (V505);
	V508= Cnil;
	V509= Cnil;
goto T1903;
T1903:;
	if((symbol_value(VV[89]))!=Cnil){
	goto T1904;}
	base[4]= nreverse((V507));
	vs_top=(vs_base=base+4)+1;
	return;
goto T1904;
T1904:;
	V506= car(symbol_value(VV[89]));
	{register object V519;
	register object V520;
	V519= (V503);
	V520= car((V519));
goto T1914;
T1914:;
	if(!(endp_prop((V519)))){
	goto T1915;}
	goto T1910;
goto T1915;
T1915:;
	base[5]= (V506);
	base[6]= (V520);
	vs_top=(vs_base=base+5)+2;
	L96(base);
	vs_top=sup;
	V509= vs_base[0];
	if(((V509))==Cnil){
	goto T1919;}
	V508= (V520);
	goto T1910;
goto T1919;
T1919:;
	V519= cdr((V519));
	V520= car((V519));
	goto T1914;}
goto T1910;
T1910:;
	if(((V508))==Cnil){
	goto T1933;}
	{register object x= (V509),V521= (V510);
	while(!endp(V521))
	if(eql(x,V521->c.c_car)){
	goto T1937;
	}else V521=V521->c.c_cdr;
	goto T1935;}
goto T1937;
T1937:;
	{register object x= (V509),V522= (V511);
	while(!endp(V522))
	if(eql(x,V522->c.c_car)){
	goto T1941;
	}else V522=V522->c.c_cdr;
	goto T1940;}
goto T1941;
T1941:;
	base[4]= VV[240];
	goto T1938;
goto T1940;
T1940:;
	base[4]= VV[241];
goto T1938;
T1938:;
	base[5]= (V506);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1935;
T1935:;
	if(!(type_of((V508))==t_cons||((V508))==Cnil)){
	goto T1946;}
	V511= append((V508),(V511));
	goto T1944;
goto T1946;
T1946:;
	V511= make_cons((V508),(V511));
goto T1944;
T1944:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	{object V523;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V524= vs_base[0];
	V523= list(2,(V509),V524);
	V507= make_cons((V523),(V507));
	goto T1931;}
goto T1933;
T1933:;
	if(((V504))==Cnil){
	goto T1953;}
	base[4]= (V506);
	base[5]= VV[242];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1953;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	{register object V525;
	object V526;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V525= vs_base[0];
	V526= Cnil;
goto T1962;
T1962:;
	if(type_of((V525))!=t_cons){
	goto T1966;}
	if(type_of(cdr((V525)))!=t_cons){
	goto T1966;}
	if((cddr((V525)))!=Cnil){
	goto T1966;}
	if(!(type_of(car((V525)))==t_symbol)){
	goto T1966;}
	if((cadr((V525)))==Cnil){
	goto T1965;}
	if(type_of(cadr((V525)))==t_symbol){
	goto T1965;}
goto T1966;
T1966:;
	base[4]= VV[243];
	base[5]= (V525);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
goto T1965;
T1965:;
	if((cadr((V525)))==Cnil){
	goto T1980;}
	base[4]= car((V525));
	base[5]= symbol_value(VV[101]);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	V526= vs_base[0];
	if(((V526))==Cnil){
	goto T1984;}
	base[4]= VV[244];
	base[5]= car((V525));
	base[6]= cadr((V525));
	base[7]= cadr((V526));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1980;
goto T1984;
T1984:;
	{object V527;
	V527= make_cons(car((V525)),cadr((V525)));
	setq(VV[101],make_cons((V527),symbol_value(VV[101])));}
goto T1980;
T1980:;
	if((symbol_value(VV[89]))==Cnil){
	goto T1996;}
	if(!(type_of(car(symbol_value(VV[89])))==t_symbol)){
	goto T1995;}
goto T1996;
T1996:;
	goto T1931;
goto T1995;
T1995:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V525= vs_base[0];
	goto T1962;}
goto T1953;
T1953:;
	base[4]= nreverse((V507));
	vs_top=(vs_base=base+4)+1;
	return;
goto T1931;
T1931:;
	V508= Cnil;
	V509= Cnil;
	goto T1903;}
	}
}
/*	function definition for LOOP-SEQUENCER	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_reserve(VM84);
	{object V528;
	register object V529;
	object V530;
	object V531;
	object V532;
	object V533;
	object V534;
	object V535;
	object V536;
	object V537;
	check_arg(10);
	V528=(base[0]);
	V529=(base[1]);
	V530=(base[2]);
	V531=(base[3]);
	V532=(base[4]);
	V533=(base[5]);
	V534=(base[6]);
	V535=(base[7]);
	V536=(base[8]);
	V537=(base[9]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V538;
	object V539;
	object V540;
	object V541;
	object V542;
	object V543;
	object V544;
	register object V545;
	register object V546;
	object V547;
	object V548;
	object V549;
	object V550;
	object V551;
	object V552;{object V554;
	base[10]= (V529);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V554= vs_base[0];
	if(V554==Cnil)goto T2009;
	V553= V554;
	goto T2008;
goto T2009;
T2009:;}
	V553= small_fixnum(0);
goto T2008;
T2008:;
	V542= one_plus(V553);
	V538= Cnil;
	V539= Cnil;
	V540= Cnil;
	V541= Cnil;
	V543= Ct;
	V544= Cnil;
	V545= Cnil;
	V546= Cnil;
	V547= Cnil;
	V548= Cnil;
	V549= Cnil;
	V550= Cnil;
	V551= Cnil;
	V552= Cnil;
	if(((V531))==Cnil){
	goto T2012;}
	base[10]= (V531);
	base[11]= Cnil;
	base[12]= (V532);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
goto T2012;
T2012:;
	{register object V555;
	register object V556;
	register object V557;
	object V558;
	V555= (V537);
	V556= Cnil;
	V557= Cnil;
	V558= Cnil;
goto T2020;
T2020:;
	if(((V555))!=Cnil){
	goto T2021;}
	goto T2018;
goto T2021;
T2021:;
	V556= caar((V555));
	V557= cadar((V555));
	{object V559= (V556);
	if((V559!= VV[383])
	&& (V559!= VV[231]))goto T2030;
	V539= Ct;
	base[10]= (V533);
	base[11]= (V557);
	base[12]= (V534);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	goto T2029;
goto T2030;
T2030:;
	if((V559!= VV[384])
	&& (V559!= VV[245])
	&& (V559!= VV[247]))goto T2036;
	V547= Ct;
	if(!(((V556))==(VV[245]))){
	goto T2041;}
	V545= VV[246];
	goto T2039;
goto T2041;
T2041:;
	if(!(((V556))==(VV[247]))){
	goto T2039;}
	V545= VV[248];
goto T2039;
T2039:;
	base[10]= (V557);
	base[11]= (V529);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V557= vs_base[0];
	vs_base++;
	}else{
	V557= Cnil;}
	if(vs_base<vs_top){
	V549= vs_base[0];
	vs_base++;
	}else{
	V549= Cnil;}
	if(vs_base<vs_top){
	V548= vs_base[0];
	}else{
	V548= Cnil;}
	vs_top=sup;
	base[10]= (V528);
	base[11]= (V557);
	base[12]= (V529);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T2029;
goto T2036;
T2036:;
	if((V559!= VV[249])
	&& (V559!= VV[250])
	&& (V559!= VV[251])
	&& (V559!= VV[252])
	&& (V559!= VV[253]))goto T2054;
	base[10]= (V556);
	base[11]= VV[249];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2057;}
	V545= VV[248];
	V546= VV[248];
	goto T2055;
goto T2057;
T2057:;
	base[10]= (V556);
	base[11]= VV[250];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2064;}
	V546= Ct;
	goto T2055;
goto T2064;
T2064:;
	base[10]= (V556);
	base[11]= VV[251];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2070;}
	V545= VV[246];
	V546= VV[246];
	goto T2055;
goto T2070;
T2070:;
	base[10]= (V556);
	base[11]= VV[252];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2077;}
	V545= VV[246];
	goto T2055;
goto T2077;
T2077:;
	base[10]= (V556);
	base[11]= VV[253];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2055;}
	V545= VV[248];
goto T2055;
T2055:;
	V550= Ct;
	base[10]= (V557);
	base[11]= (V529);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V557= vs_base[0];
	vs_base++;
	}else{
	V557= Cnil;}
	if(vs_base<vs_top){
	V551= vs_base[0];
	vs_base++;
	}else{
	V551= Cnil;}
	if(vs_base<vs_top){
	V552= vs_base[0];
	}else{
	V552= Cnil;}
	vs_top=sup;
	if(((V551))==Cnil){
	goto T2095;}
	V538= list(2,VV[214],(V552));
	goto T2093;
goto T2095;
T2095:;
	base[11]= VV[254];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[11]= (V557);
	base[12]= (V529);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V538= vs_base[0];
goto T2093;
T2093:;
	goto T2029;
goto T2054;
T2054:;
	if((V559!= VV[212]))goto T2101;
	base[10]= (V557);
	base[11]= (V529);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V557= vs_base[0];
	vs_base++;
	}else{
	V557= Cnil;}
	if(vs_base<vs_top){
	V543= vs_base[0];
	vs_base++;
	}else{
	V543= Cnil;}
	if(vs_base<vs_top){
	V542= vs_base[0];
	}else{
	V542= Cnil;}
	vs_top=sup;
	if(((V543))!=Cnil){
	goto T2029;}
	base[11]= VV[255];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V542= vs_base[0];
	base[10]= (V542);
	base[11]= (V557);
	base[12]= (V529);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	goto T2029;
goto T2101;
T2101:;
	base[10]= VV[256];
	base[11]= (V556);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk343)();
	vs_top=sup;}
goto T2029;
T2029:;
	if(((V558))==Cnil){
	goto T2115;}
	if(((V545))==Cnil){
	goto T2115;}
	if(((V545))==((V558))){
	goto T2115;}
	base[10]= VV[257];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T2115;
T2115:;
	V558= (V545);
	V555= cdr((V555));
	goto T2020;}
goto T2018;
T2018:;
	if(((V533))==Cnil){
	goto T2128;}
	if(((V539))!=Cnil){
	goto T2128;}
	base[10]= VV[258];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T2128;
T2128:;
	if(((V547))!=Cnil){
	goto T2134;}
	base[10]= (V528);
	V549= Ct;{object V560;
	base[12]= (V529);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V560= vs_base[0];
	if(V560==Cnil)goto T2142;
	V548= V560;
	goto T2141;
goto T2142;
T2142:;}
	V548= small_fixnum(0);
goto T2141;
T2141:;
	base[11]= (V548);
	base[12]= (V529);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
goto T2134;
T2134:;
	{register object x= (V545),V561= VV[259];
	while(!endp(V561))
	if(eql(x,V561->c.c_car)){
	goto T2149;
	}else V561=V561->c.c_cdr;
	goto T2148;}
goto T2149;
T2149:;
	if(((V550))!=Cnil){
	goto T2151;}
	if(((V536))==Cnil){
	goto T2150;}
goto T2151;
T2151:;
	if(((V550))!=Cnil){
	goto T2155;}
	base[11]= VV[260];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V538= vs_base[0];
	base[10]= (V538);
	base[11]= Cnil;
	base[12]= (V529);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	{object V562;
	V562= list(3,VV[11],(V538),(V536));
	setq(VV[105],make_cons((V562),symbol_value(VV[105])));}
goto T2155;
T2155:;
	if(((V546))==Cnil){
	goto T2168;}
	V540= VV[34];
	goto T2166;
goto T2168;
T2168:;
	V540= VV[210];
goto T2166;
T2166:;
goto T2150;
T2150:;
	if(!(eql((V542),small_fixnum(1)))){
	goto T2172;}
	V544= list(2,VV[177],(V528));
	goto T2170;
goto T2172;
T2172:;
	V544= list(3,VV[178],(V528),(V542));
goto T2170;
T2170:;
	goto T2146;
goto T2148;
T2148:;
	if(((V547))!=Cnil){
	goto T2174;}
	if(((V536))!=Cnil){
	goto T2177;}
	base[10]= VV[261];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T2177;
T2177:;
	{object V563;
	V563= list(3,VV[11],(V528),list(2,VV[196],(V536)));
	setq(VV[105],make_cons((V563),symbol_value(VV[105])));}
goto T2174;
T2174:;
	if(((V536))==Cnil){
	goto T2183;}
	if(((V538))!=Cnil){
	goto T2183;}
	base[10]= (V529);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V538= vs_base[0];
	V546= Ct;
goto T2183;
T2183:;
	if(((V538))==Cnil){
	goto T2192;}
	if(((V546))==Cnil){
	goto T2197;}
	V540= VV[33];
	goto T2195;
goto T2197;
T2197:;
	V540= VV[262];
goto T2195;
T2195:;
goto T2192;
T2192:;
	if(!(eql((V542),small_fixnum(1)))){
	goto T2201;}
	V544= list(2,VV[196],(V528));
	goto T2199;
goto T2201;
T2201:;
	V544= list(3,VV[263],(V528),(V542));
goto T2199;
T2199:;
goto T2146;
T2146:;
	if(((V540))==Cnil){
	goto T2203;}
	base[10]= Ct;
	base[11]= (V528);
	base[12]= list(3,(V540),(V528),(V538));
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V541= vs_base[0];
goto T2203;
T2203:;
	if(((V535))==Cnil){
	goto T2210;}
	base[10]= (V530);
	base[11]= (V528);
	base[12]= (V535);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V564= vs_base[0];
	V535= list(2,(V531),V564);
goto T2210;
T2210:;
	{object V565;
	object V566;
	V565= (V541);
	V566= (V541);
	if(((V543))==Cnil){
	goto T2218;}
	if(((V549))==Cnil){
	goto T2218;}
	if(((V551))==Cnil){
	goto T2218;}
	base[10]= (V540);
	vs_top=(vs_base=base+10)+1;
	Lsymbol_function();
	vs_top=sup;
	V567= vs_base[0];
	V565= (
	V568 = V567,
	(type_of(V568) == t_sfun ?(*((V568)->sfn.sfn_self)):
	(fcall.fun=(V568),fcall.argd=2,fcalln))((V548),(V552)));
	if(((V565))==Cnil){
	goto T2218;}
	V566= Ct;
goto T2218;
T2218:;
	base[10]= Ct;
	base[11]= (V528);
	base[12]= (V544);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V569= vs_base[0];
	base[10]= list(8,Cnil,list(2,(V528),V569),(V566),(V535),Cnil,Cnil,(V565),(V535));
	vs_top=(vs_base=base+10)+1;
	return;}}
	}
}
/*	function definition for LOOP-FOR-ARITHMETIC	*/

static void L98()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_reserve(VM85);
	{object V570;
	object V571;
	object V572;
	object V573;
	check_arg(4);
	V570=(base[0]);
	V571=(base[1]);
	V572=(base[2]);
	V573=(base[3]);
	vs_top=sup;
goto TTL;
TTL:;
	base[4]= (V570);
	base[6]= (V572);
	base[7]= symbol_value(VV[180]);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= Ct;
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;
	base[10]= Cnil;
	base[11]= Cnil;
	base[12]= Cnil;
	base[14]= VV[264];
	base[15]= Cnil;
	V574= list(2,(V573),(V571));
	base[16]= make_cons(/* INLINE-ARGS */V574,Cnil);
	vs_top=(vs_base=base+14)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	base[13]= vs_base[0];
	vs_top=(vs_base=base+4)+10;
	(void) (*Lnk385)();
	return;
	}
}
/*	function definition for LOOP-SEQUENCE-ELEMENTS-PATH	*/

static void L99()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_reserve(VM86);
	{object V575;
	object V576;
	object V577;
	object V578;
	object V579;
	object V580;
	object V581;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,4,VV[386],VV[387],VV[388],VV[389]);
	V575=(base[0]);
	V576=(base[1]);
	V577=(base[2]);
	vs_top=sup;
	V578=(base[3]);
	V579=(base[4]);
	V580=(base[5]);
	V581=(base[6]);
	{object V582;
	object V583;
	base[11]= VV[265];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk390)();
	if(vs_base>=vs_top){vs_top=sup;goto T2252;}
	V582= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2253;}
	V583= vs_base[0];
	vs_top=sup;
	goto T2254;
goto T2252;
T2252:;
	V582= Cnil;
goto T2253;
T2253:;
	V583= Cnil;
goto T2254;
T2254:;
	{object V584;
	base[11]= VV[266];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk390)();
	vs_top=sup;
	V584= vs_base[0];
	base[11]= (V582);
	base[12]= VV[207];
	base[13]= (V583);
	base[14]= (V575);
	if((V576)!=Cnil){
	base[15]= (V576);
	goto T2262;}
	base[15]= (V581);
goto T2262;
T2262:;
	base[16]= (V584);
	base[17]= (V580);
	base[18]= list(3,(V578),(V584),(V582));
	base[19]= list(2,(V579),(V584));
	base[20]= (V577);
	vs_top=(vs_base=base+11)+10;
	(void) (*Lnk385)();
	vs_top=sup;
	V585= vs_base[0];
	base[11]= listA(3,Cnil,Cnil,V585);
	vs_top=(vs_base=base+11)+1;
	return;}}
	}
}
/*	function definition for LOOP-HASH-TABLE-ITERATION-PATH	*/

static void L100()
{register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_reserve(VM87);
	bds_check;
	{object V586;
	object V587;
	object V588;
	register object V589;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,1,VV[391]);
	V586=(base[0]);
	V587=(base[1]);
	V588=(base[2]);
	vs_top=sup;
	V589=(base[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
goto T2270;
T2270:;
	base[7]= (V589);
	base[8]= VV[267];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2271;}
	bds_unwind1;
	bds_unwind1;
	goto T2268;
goto T2271;
T2271:;
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[268];
	base[10]= (V589);
	base[11]= VV[267];
	vs_top=(vs_base=base+7)+5;
	Lcerror();
	vs_top=sup;
	base[7]= symbol_value(VV[50]);
	base[8]= VV[51];
	base[9]= VV[268];
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	base[7]= symbol_value(VV[50]);
	vs_top=(vs_base=base+7)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V589= vs_base[0];
	base[7]= symbol_value(VV[50]);
	base[8]= VV[52];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	goto T2270;
goto T2268;
T2268:;
	if((cdr((V588)))!=Cnil){
	goto T2297;}
	{register object x= caar((V588)),V590= VV[269];
	while(!endp(V590))
	if(eql(x,V590->c.c_car)){
	goto T2298;
	}else V590=V590->c.c_cdr;}
goto T2297;
T2297:;
	base[5]= VV[270];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T2296;
goto T2298;
T2298:;
	if(((V588))!=Cnil){
	goto T2296;}
	base[5]= VV[271];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T2296;
T2296:;
	{object V591;
	object V592;
	object V593;
	register object V594;
	base[5]= VV[272];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V591= vs_base[0];
	base[5]= VV[273];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V592= vs_base[0];
	V593= Cnil;
	V594= Cnil;
	{object V595;
	object V596;
	if(!(((V589))==(VV[274]))){
	goto T2313;}
	base[5]= VV[275];
	goto T2311;
goto T2313;
T2313:;
	base[5]= VV[274];
goto T2311;
T2311:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk390)();
	if(vs_base>=vs_top){vs_top=sup;goto T2315;}
	V595= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2316;}
	V596= vs_base[0];
	vs_top=sup;
	goto T2317;
goto T2315;
T2315:;
	V595= Cnil;
goto T2316;
T2316:;
	V596= Cnil;
goto T2317;
T2317:;
	V596= Ct;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V593= vs_base[0];
	{register object V597;
	register object V598;
	register object V599;
	V600= list(3,(V586),Cnil,(V587));
	V601= list(2,(V591),cadar((V588)));
	if((V596)==Cnil){
	V602= Cnil;
	goto T2323;}
	if((V595)==Cnil){
	V602= Cnil;
	goto T2323;}
	V603= list(2,(V595),Cnil);
	V602= make_cons(/* INLINE-ARGS */V603,Cnil);
goto T2323;
T2323:;
	V599= listA(3,/* INLINE-ARGS */V600,/* INLINE-ARGS */V601,V602);
	V597= Cnil;
	V598= Cnil;
	if(!(((V589))==(VV[274]))){
	goto T2326;}
	V597= (V586);
	if((V596)==Cnil){
	V598= Cnil;
	goto T2330;}
	V598= (V595);
goto T2330;
T2330:;
	goto T2324;
goto T2326;
T2326:;
	if((V596)==Cnil){
	V597= Cnil;
	goto T2332;}
	V597= (V595);
goto T2332;
T2332:;
	V598= (V586);
goto T2324;
T2324:;
	{object V604;
	V604= list(2,VV[276],list(2,(V592),(V591)));
	setq(VV[106],make_cons((V604),symbol_value(VV[106])));}
	if(!(type_of((V597))==t_cons)){
	goto T2337;}{object V605;
	V605= (V597);
	base[5]= VV[277];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V597= vs_base[0];
	V594= listA(3,V605,(V597),(V594));}
	{object V606;
	V606= list(2,(V597),Cnil);
	V599= make_cons((V606),(V599));}
goto T2337;
T2337:;
	if(!(type_of((V598))==t_cons)){
	goto T2346;}{object V607;
	V607= (V598);
	base[5]= VV[278];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V598= vs_base[0];
	V594= listA(3,V607,(V598),(V594));}
	{object V608;
	V608= list(2,(V598),Cnil);
	V599= make_cons((V608),(V599));}
goto T2346;
T2346:;
	V609= list(3,(V593),(V597),(V598));
	base[5]= list(6,(V599),Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V609,make_cons((V592),Cnil))),(V594));
	vs_top=(vs_base=base+5)+1;
	return;}}}
	}
}
/*	function definition for LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_reserve(VM88);
	{object V610;
	object V611;
	register object V612;
	object V613;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,1,VV[392]);
	V610=(base[0]);
	V611=(base[1]);
	V612=(base[2]);
	vs_top=sup;
	V613=(base[3]);
	if((cdr((V612)))!=Cnil){
	goto T2356;}
	{register object x= caar((V612)),V614= VV[279];
	while(!endp(V614))
	if(eql(x,V614->c.c_car)){
	goto T2357;
	}else V614=V614->c.c_cdr;}
goto T2356;
T2356:;
	base[5]= VV[280];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T2355;
goto T2357;
T2357:;
	if(((V612))!=Cnil){
	goto T2355;}
	base[5]= VV[281];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T2355;
T2355:;
	if(type_of((V610))==t_symbol){
	goto T2365;}
	base[5]= VV[282];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
goto T2365;
T2365:;
	{object V615;
	object V616;
	base[5]= VV[283];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V615= vs_base[0];
	base[5]= VV[284];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V616= vs_base[0];
	{object V617;
	V617= list(2,VV[285],listA(3,(V616),(V615),(V613)));
	setq(VV[106],make_cons((V617),symbol_value(VV[106])));}
	V618= list(3,(V610),Cnil,(V611));
	V619= list(2,/* INLINE-ARGS */V618,list(2,(V615),cadar((V612))));
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V620= vs_base[0];
	V621= list(2,V620,(V610));
	base[5]= list(6,/* INLINE-ARGS */V619,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V621,make_cons((V616),Cnil))),Cnil);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for MAKE-ANSI-LOOP-UNIVERSE	*/

static void L102()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_reserve(VM89);
	{object V622;
	check_arg(1);
	V622=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V623;
	base[1]= VV[53];
	base[3]= VV[286];
	base[4]= VV[287];
	base[5]= VV[288];
	base[6]= VV[289];
	base[7]= VV[290];
	base[8]= VV[291];
	base[9]= VV[292];
	base[10]= VV[293];
	base[11]= VV[294];
	base[12]= VV[295];
	base[13]= VV[296];
	base[14]= VV[297];
	base[15]= list(2,VV[176],list(4,VV[298],VV[176],symbol_value(VV[180]),VV[207]));
	base[16]= list(2,VV[299],list(4,VV[298],VV[176],symbol_value(VV[180]),VV[207]));
	base[17]= VV[300];
	vs_top=(vs_base=base+3)+15;
	LlistA();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= VV[54];
	base[4]= VV[301];
	base[5]= VV[55];
	base[6]= VV[302];
	base[7]= VV[60];
	base[8]= VV[303];
	base[9]= VV[59];
	base[10]= Cnil;
	base[11]= VV[57];
	if(((V622))==Cnil){
	goto T2406;}
	base[12]= VV[304];
	goto T2404;
goto T2406;
T2406:;
	base[12]= Ct;
goto T2404;
T2404:;
	vs_top=(vs_base=base+1)+12;
	(void) (*Lnk393)();
	vs_top=sup;
	V623= vs_base[0];
	base[1]= VV[305];
	base[2]= VV[306];
	base[3]= (V623);
	base[4]= VV[226];
	base[5]= VV[307];
	base[6]= VV[227];
	base[7]= Cnil;
	base[8]= VV[225];
	base[9]= VV[308];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk394)();
	vs_top=sup;
	base[1]= VV[309];
	base[2]= VV[306];
	base[3]= (V623);
	base[4]= VV[226];
	base[5]= VV[310];
	base[6]= VV[227];
	base[7]= Cnil;
	base[8]= VV[225];
	base[9]= VV[311];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk394)();
	vs_top=sup;
	base[1]= VV[312];
	base[2]= VV[313];
	base[3]= (V623);
	base[4]= VV[226];
	base[5]= VV[314];
	base[6]= VV[227];
	base[7]= Cnil;
	base[8]= VV[225];
	base[9]= VV[315];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk394)();
	vs_top=sup;
	base[1]= VV[316];
	base[2]= VV[313];
	base[3]= (V623);
	base[4]= VV[226];
	base[5]= VV[317];
	base[6]= VV[227];
	base[7]= Cnil;
	base[8]= VV[225];
	base[9]= VV[318];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk394)();
	vs_top=sup;
	base[1]= VV[319];
	base[2]= VV[313];
	base[3]= (V623);
	base[4]= VV[226];
	base[5]= VV[320];
	base[6]= VV[227];
	base[7]= Cnil;
	base[8]= VV[225];
	base[9]= VV[321];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk394)();
	vs_top=sup;
	base[1]= (V623);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-STANDARD-EXPANSION	*/

static void L103()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_reserve(VM90);
	{register object V624;
	object V625;
	object V626;
	check_arg(3);
	V624=(base[0]);
	V625=(base[1]);
	V626=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V624))==Cnil){
	goto T2459;}
	if(!(type_of(car((V624)))==t_symbol)){
	goto T2459;}
	base[3]= (V624);
	base[4]= (V625);
	base[5]= (V626);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk395)();
	return;
goto T2459;
T2459:;
	{object V627;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V627= vs_base[0];
	V628= make_cons(VV[14],(V624));
	base[3]= list(3,VV[120],Cnil,list(4,VV[73],(V627),/* INLINE-ARGS */V628,list(2,VV[82],(V627))));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM91; VC91
	vs_reserve(VM91);
	check_arg(2);
	vs_top=sup;
	{object V629=base[0]->c.c_cdr;
	base[2]= V629;}
	base[3]= base[2];
	base[4]= base[1];
	base[5]= symbol_value(VV[322]);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk396)();
	return;
}
/*	local function IN-GROUP-P	*/

static void LC96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_reserve(VM92);
	{object V630;
	object V631;
	check_arg(2);
	V630=(base[0]);
	V631=(base[1]);
	vs_top=sup;
	base[2]= (V630);
	base[3]= (V631);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V632= vs_base[0];
	base[2]= car(V632);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function IN-GROUP-P	*/

static void L96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_reserve(VM93);
	{object V633;
	object V634;
	check_arg(2);
	V633=(base[0]);
	V634=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	base[2]= (V633);
	base[3]= (V634);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V635= vs_base[0];
	base[2]= car(V635);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function MAKE-ENDTEST	*/

static void L82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM94; VC94
	vs_reserve(VM94);
	{object V636;
	check_arg(1);
	V636=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V636))!=Cnil){
	goto T2477;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T2477;
T2477:;
	{register object x= Ct,V637= (V636);
	while(!endp(V637))
	if(eql(x,V637->c.c_car)){
	goto T2481;
	}else V637=V637->c.c_cdr;
	goto T2480;}
goto T2481;
T2481:;
	base[1]= VV[189];
	vs_top=(vs_base=base+1)+1;
	return;
goto T2480;
T2480:;
	V636= nreverse((V636));
	if((cdr((V636)))!=Cnil){
	goto T2484;}
	V638= car((V636));
	goto T2482;
goto T2484;
T2484:;
	V638= make_cons(VV[35],(V636));
goto T2482;
T2482:;
	base[1]= list(3,VV[8],V638,VV[190]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function GET-CLAUSE	*/

static void L66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_reserve(VM95);
	{object V639;
	check_arg(1);
	V639=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V640;
	V640= Cnil;
goto T2488;
T2488:;
	{register object V641;
	register object V642;
	V641= car(symbol_value(VV[89]));
	bds_bind(VV[108],Cnil);
	V642= Cnil;
	if(type_of((V641))==t_symbol){
	goto T2494;}
	base[2]= VV[149];
	base[3]= (V641);
	base[4]= (V639);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	bds_unwind1;
	goto T2491;
goto T2494;
T2494:;
	setq(VV[88],symbol_value(VV[89]));
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= car(symbol_value(VV[89]));
	base[3]= VV[150];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2502;}
	if(base0[3]!=Cnil){
	V643= base0[3];
	goto T2508;}
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	base0[3]= vs_base[0];
	V643= base0[3];
goto T2508;
T2508:;
	setq(VV[89],make_cons(V643,cdr(symbol_value(VV[89]))));
goto T2502;
T2502:;
	base[2]= (V641);
	base[3]= structure_ref(symbol_value(VV[96]),VV[39],0);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V642= vs_base[0];
	if(((V642))==Cnil){
	goto T2510;}
	base[3]= car((V642));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V644;
	V644= cdr((V642));
	 vs_top=base+3;
	 while(!endp(V644))
	 {vs_push(car(V644));V644=cdr(V644);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[108]->s.s_dbind))==Cnil)){
	goto T2511;}
goto T2510;
T2510:;
	base[2]= VV[151];
	base[3]= (V641);
	base[4]= (V639);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	bds_unwind1;
	goto T2491;
goto T2511;
T2511:;
	base[2]= (VV[108]->s.s_dbind);
	base[3]= (V640);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V640= vs_base[0];
	bds_unwind1;}
goto T2491;
T2491:;
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[152];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2530;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	goto T2528;
goto T2530;
T2530:;
	if((cdr((V640)))==Cnil){
	goto T2535;}
	V645= nreverse((V640));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V645);
	vs_top=(vs_base=base+1)+1;
	return;
goto T2535;
T2535:;
	base[1]= car((V640));
	vs_top=(vs_base=base+1)+1;
	return;
goto T2528;
T2528:;
	goto T2488;}
	}
}
/*	local function REPLICATE	*/

static void L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_reserve(VM96);
	{object V646;
	object V647;
	check_arg(2);
	V646=(base[0]);
	V647=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(type_of((V647))!=t_cons)){
	goto T2540;}
	base[2]= (V646);
	vs_top=(vs_base=base+2)+1;
	return;
goto T2540;
T2540:;
	base[2]= (V646);
	base[3]= car((V647));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V648= vs_base[0];
	base[2]= (V646);
	base[3]= cdr((V647));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V649= vs_base[0];
	base[2]= make_cons(V648,V649);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function TRANSLATE	*/

static void L58(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_reserve(VM97);
	{register object V650;
	register object V651;
	check_arg(2);
	V650=(base[0]);
	V651=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V650))!=Cnil){
	goto T2549;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T2549;
T2549:;
	if(!(type_of((V650))!=t_cons)){
	goto T2552;}{object V652;
	base[3]= (V650);
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],4);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V652= vs_base[0];
	if(V652==Cnil)goto T2555;
	base[2]= V652;
	goto T2554;
goto T2555;
T2555:;}{object V653;
	base[3]= symbol_name((V650));
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],5);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V653= vs_base[0];
	if(V653==Cnil)goto T2559;
	base[2]= V653;
	goto T2554;
goto T2559;
T2559:;}
	base[3]= VV[137];
	base[4]= base0[1];
	base[5]= (V650);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	base[2]= vs_base[0];
goto T2554;
T2554:;
	base[3]= (V651);
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	return;
goto T2552;
T2552:;
	if(!(type_of((V651))!=t_cons)){
	goto T2568;}
	base[2]= VV[138];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	return;
goto T2568;
T2568:;
	base[2]= car((V650));
	base[3]= car((V651));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V654= vs_base[0];
	base[2]= cdr((V650));
	base[3]= cdr((V651));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V655= vs_base[0];
	base[2]= make_cons(V654,V655);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LIST-SIZE	*/

static void L40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_reserve(VM98);
	{object V656;
	check_arg(1);
	V656=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{long V657;
	V657= 0;
	{register object V658;
	object V659;
	V658= (V656);
	V659= car((V658));
goto T2583;
T2583:;
	if(!(endp_prop((V658)))){
	goto T2584;}
	base[2]= make_fixnum(V657);
	vs_top=(vs_base=base+2)+1;
	return;
goto T2584;
T2584:;
	V660 = make_fixnum(V657);
	base[2]= (V659);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	V661= vs_base[0];
	V657= fix(number_plus(V660,V661));
	V658= cdr((V658));
	V659= car((V658));
	goto T2583;}}
	}
}
/*	local function MAKEBODY	*/

static void L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_reserve(VM99);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	{object V662;
	V664= nreverse(base0[7]);
	base[0]= append(base0[2],/* INLINE-ARGS */V664);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V663= vs_base[0];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V666= vs_base[0];
	base[0]= append(base0[4],V666);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V665= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V667= vs_base[0];
	V668= make_cons(VV[76],V667);
	V669= append(V665,/* INLINE-ARGS */V668);
	V670= make_cons(VV[74],/* INLINE-ARGS */V669);
	V671= append(V663,/* INLINE-ARGS */V670);
	V662= make_cons(VV[73],/* INLINE-ARGS */V671);
	if((base0[9])==Cnil){
	goto T2609;}
	V672= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V672,Cnil),(V662));
	vs_top=(vs_base=base+0)+1;
	return;
goto T2609;
T2609:;
	base[0]= (V662);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static void L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_reserve(VM100);
	{object V673;
	check_arg(1);
	V673=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if((cdr((V673)))!=Cnil){
	goto T2612;}
	base[1]= car((V673));
	vs_top=(vs_base=base+1)+1;
	return;
goto T2612;
T2612:;
	base[1]= make_cons(VV[14],(V673));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function PSIMP	*/

static void L33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_reserve(VM101);
	{object V674;
	check_arg(1);
	V674=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V675;
	V675= Cnil;
	{register object V676;
	register object V677;
	V676= (V674);
	V677= car((V676));
goto T2618;
T2618:;
	if(!(endp_prop((V676)))){
	goto T2619;}
	goto T2614;
goto T2619;
T2619:;
	if(((V677))==Cnil){
	goto T2623;}
	{register object V678;
	V678= (V677);
	V675= make_cons((V678),(V675));}
	if(!(type_of((V677))==t_cons)){
	goto T2623;}
	{register object x= car((V677)),V679= VV[72];
	while(!endp(V679))
	if(eql(x,V679->c.c_car)){
	goto T2632;
	}else V679=V679->c.c_cdr;
	goto T2623;}
goto T2632;
T2632:;
	goto T2614;
goto T2623;
T2623:;
	V676= cdr((V676));
	V677= car((V676));
	goto T2618;}
goto T2614;
T2614:;
	base[1]= nreverse((V675));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function FIND-NON-NULL	*/

static void L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_reserve(VM102);
	{object V680;
	check_arg(1);
	V680=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V681;
	V681= (V680);
goto T2639;
T2639:;
	if(type_of((V681))==t_cons){
	goto T2640;}
	base[1]= (V681);
	vs_top=(vs_base=base+1)+1;
	return;
goto T2640;
T2640:;
	{register object V682;
	V682= car((V681));
	V681= cdr((V681));
	base[1]= (V682);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2644;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
goto T2644;
T2644:;
	goto T2639;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static void L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_reserve(VM103);
	{register object V683;
	register object V684;
	object V685;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V683=(base[0]);
	V684=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2653;}
	V685=(base[2]);
	vs_top=sup;
	goto T2654;
goto T2653;
T2653:;
	V685= Cnil;
goto T2654;
T2654:;
	{register object V686;
	V686= (V683);
	if(!(((V686))==Cnil)){
	goto T2657;}
	if(!(type_of((V684))==t_cons)){
	goto T2660;}
	if(!((car((V684)))==(VV[62]))){
	goto T2663;}
	{object V687;
	object V688= cdr((V684));
	if(endp(V688)){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V687=MMcons(Cnil,Cnil);
goto T2665;
T2665:;
	{register object V689;
	V689= (V688->c.c_car);
	if(type_of((V689))==t_cons){
	goto T2667;}
	(V687->c.c_cdr)= Cnil;
	goto T2666;
goto T2667;
T2667:;
	if(!((((car((V689)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2671;}
	goto T2669;
goto T2671;
T2671:;
	if(!(((type_of(cadr((V689)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2673;}
	goto T2669;
goto T2673;
T2673:;
	base[4]= (V689);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V689= vs_base[0];
	if(((type_of((V689))==t_symbol?Ct:Cnil))==Cnil){
	goto T2669;}
	(V687->c.c_cdr)= Cnil;
	goto T2666;
goto T2669;
T2669:;
	(V687->c.c_cdr)= make_cons((V689),Cnil);}
goto T2666;
T2666:;
	{object cdr_V687=MMcdr(V687);while(!endp(cdr_V687)) {cdr_V687=MMcdr(cdr_V687);V687=MMcdr(V687);}}
	V688=MMcdr(V688);
	if(endp(V688)){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2665;}
goto T2663;
T2663:;
	base[3]= make_cons((V684),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
goto T2660;
T2660:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T2657;
T2657:;
	if(!(type_of((V686))==t_cons)){
	goto T2679;}
	{object V690;
	object V691;
	object V692;
	object V693;
	V690= car((V683));
	V691= cdr((V683));
	base[7]= (V690);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V692= vs_base[0];
	base[7]= (V691);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V693= vs_base[0];
	if(((V692))!=Cnil){
	goto T2687;}
	if(((V693))==Cnil){
	goto T2688;}
goto T2687;
T2687:;
	if(((V693))==Cnil){
	goto T2693;}
	{register object V695;
	object V696;
	if((V685)!=Cnil){
	V695= (V685);
	goto T2695;}
	V695= symbol_value(VV[66]);
goto T2695;
T2695:;
	base[9]= (V690);
	base[10]= list(2,VV[65],(V695));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V697= vs_base[0];
	V698= list(3,VV[11],(V695),list(2,VV[10],(V695)));
	base[9]= (V691);
	base[10]= (V695);
	base[11]= (V695);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V699= vs_base[0];
	V700= make_cons(/* INLINE-ARGS */V698,V699);
	V696= append(V697,/* INLINE-ARGS */V700);
	if((V685)==Cnil){
	goto T2705;}
	if(((V695))==((V684))){
	goto T2709;}
	V702= list(3,VV[11],(V695),(V684));
	V701= make_cons(/* INLINE-ARGS */V702,Cnil);
	goto T2707;
goto T2709;
T2709:;
	V701= Cnil;
goto T2707;
T2707:;
	base[9]= append(V701,(V696));
	vs_top=(vs_base=base+9)+1;
	return;
goto T2705;
T2705:;
	V703= list(2,(V695),(V684));
	V704= listA(3,VV[29],make_cons(/* INLINE-ARGS */V703,Cnil),(V696));
	base[9]= make_cons(/* INLINE-ARGS */V704,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
goto T2693;
T2693:;
	base[7]= (V690);
	base[8]= list(2,VV[65],(V684));
	base[9]= (V685);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
goto T2688;
T2688:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
goto T2679;
T2679:;
	if(((V683))==((V684))){
	goto T2715;}
	V705= list(3,VV[11],(V683),(V684));
	base[3]= make_cons(/* INLINE-ARGS */V705,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
goto T2715;
T2715:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function MAKETABLE	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM104; VC104
	vs_reserve(VM104);
	{object V706;
	check_arg(1);
	V706=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V707;
	object V708;
	V707= make_fixnum((long)length((V706)));
	base[3]= VV[61];
	if(!(number_compare((V707),small_fixnum(10))<0)){
	goto T2722;}
	base[4]= small_fixnum(10);
	goto T2720;
goto T2722;
T2722:;
	base[4]= (V707);
goto T2720;
T2720:;
	base[5]= VV[20];
	base[6]= symbol_function(VV[397]);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V708= vs_base[0];
	{register object V709;
	register object V710;
	V709= (V706);
	V710= car((V709));
goto T2730;
T2730:;
	if(!(endp_prop((V709)))){
	goto T2731;}
	goto T2726;
goto T2731;
T2731:;
	{object V711;
	object V713;
	V711= symbol_name(car((V710)));
	V713= cadr((V710));
	base[6]= (V711);
	base[7]= V708;
	base[8]= (V713);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V709= cdr((V709));
	V710= car((V709));
	goto T2730;}
goto T2726;
T2726:;
	base[3]= (V708);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CDR-WRAP	*/

static void L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_reserve(VM105);
	{register object V714;
	register long V715;
	check_arg(2);
	V714=(base[0]);
	V715=fix(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
goto T2747;
T2747:;
	if(!((V715)<=(4))){
	goto T2748;}switch(V715){
	case 1:
goto T2754;
T2754:;
	V716= VV[10];
	goto T2752;
	case 2:
goto T2755;
T2755:;
	V716= VV[15];
	goto T2752;
	case 3:
goto T2756;
T2756:;
	V716= VV[16];
	goto T2752;
	case 4:
goto T2757;
T2757:;
	V716= VV[17];
	goto T2752;
	default:
goto T2758;
T2758:;
	V716= Cnil;
	goto T2752;}
	V716= Cnil;
goto T2752;
T2752:;
	V714= list(2,V716,(V714));
	base[2]= (V714);
	vs_top=(vs_base=base+2)+1;
	return;
goto T2748;
T2748:;
	V714= list(2,VV[17],(V714));
	V715= (long)(V715)-(4);
	goto T2747;
	}
}
static void LnkT396(){ call_or_link(VV[396],(void **)&Lnk396);} /* LOOP-STANDARD-EXPANSION */
static void LnkT395(){ call_or_link(VV[395],(void **)&Lnk395);} /* LOOP-TRANSLATE */
static void LnkT394(){ call_or_link(VV[394],(void **)&Lnk394);} /* ADD-LOOP-PATH */
static void LnkT393(){ call_or_link(VV[393],(void **)&Lnk393);} /* MAKE-STANDARD-LOOP-UNIVERSE */
static void LnkT390(){ call_or_link(VV[390],(void **)&Lnk390);} /* NAMED-VARIABLE */
static void LnkT385(){ call_or_link(VV[385],(void **)&Lnk385);} /* LOOP-SEQUENCER */
static object  LnkTLI382(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[382],(void **)&LnkLI382,ap);va_end(ap);return V1;} /* DELETE */
static void LnkT381(){ call_or_link(VV[381],(void **)&Lnk381);} /* LOOP-TASSOC */
static void LnkT380(){ call_or_link(VV[380],(void **)&Lnk380);} /* LOOP-COLLECT-PREPOSITIONAL-PHRASES */
static void LnkT379(){ call_or_link(VV[379],(void **)&Lnk379);} /* MAKE-LOOP-PATH */
static void LnkT378(){ call_or_link(VV[378],(void **)&Lnk378);} /* STRUCTURE-SUBTYPE-P */
static void LnkT377(){ call_or_link(VV[377],(void **)&Lnk377);} /* LOOP-LIST-STEP */
static void LnkT376(){ call_or_link(VV[376],(void **)&Lnk376);} /* LOOP-MAKE-ITERATION-VARIABLE */
static void LnkT375(){ call_or_link(VV[375],(void **)&Lnk375);} /* LOOP-CONSTANT-FOLD-IF-POSSIBLE */
static void LnkT374(){ call_or_link(VV[374],(void **)&Lnk374);} /* LOOP-WHEN-IT-VARIABLE */
static void LnkT373(){ call_or_link(VV[373],(void **)&Lnk373);} /* LOOP-NOTE-MINIMAX-OPERATION */
static void LnkT372(){ call_or_link(VV[372],(void **)&Lnk372);} /* MAKE-LOOP-MINIMAX */
static void LnkT371(){ call_or_link(VV[371],(void **)&Lnk371);} /* LOOP-CHECK-DATA-TYPE */
static void LnkT368(){ call_or_link(VV[368],(void **)&Lnk368);} /* LOOP-EMIT-FINAL-VALUE */
static void LnkT367(){ call_or_link(VV[367],(void **)&Lnk367);} /* LOOP-GET-COLLECTION-INFO */
static void LnkT366(){ call_or_link(VV[366],(void **)&Lnk366);} /* MAKE-LOOP-COLLECTOR */
static object  LnkTLI364(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[364],(void **)&LnkLI364,ap);va_end(ap);return V1;} /* FIND */
static void LnkT363(){ call_or_link(VV[363],(void **)&Lnk363);} /* LOOP-OPTIONAL-TYPE */
static void LnkT360(){ call_or_link(VV[360],(void **)&Lnk360);} /* LOOP-EMIT-BODY */
static void LnkT359(){ call_or_link(VV[359],(void **)&Lnk359);} /* LOOP-GET-PROGN */
static void LnkT358(){ call_or_link(VV[358],(void **)&Lnk358);} /* LOOP-DISALLOW-CONDITIONAL */
static void LnkT357(){ call_or_link(VV[357],(void **)&Lnk357);} /* LOOP-GET-FORM */
static void LnkT356(){ call_or_link(VV[356],(void **)&Lnk356);} /* LOOP-CONSTANTP */
static void LnkT355(){ call_or_link(VV[355],(void **)&Lnk355);} /* LOOP-MAKE-VARIABLE */
static void LnkT354(){ call_or_link(VV[354],(void **)&Lnk354);} /* LOOP-DECLARE-VARIABLE */
static void LnkT353(){ call_or_link(VV[353],(void **)&Lnk353);} /* LOOP-TEQUAL */
static object  LnkTLI352(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[352],(void **)&LnkLI352,2,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT351(){ call_or_link(VV[351],(void **)&Lnk351);} /* LOOP-CONSTRUCT-RETURN */
static void LnkT350(){ call_or_link(VV[350],(void **)&Lnk350);} /* LOOP-PSEUDO-BODY */
static void LnkT349(){ call_or_link(VV[349],(void **)&Lnk349);} /* LOOP-TMEMBER */
static void LnkT348(){ call_or_link(VV[348],(void **)&Lnk348);} /* LOOP-HACK-ITERATION */
static void LnkT347(){ call_or_link(VV[347],(void **)&Lnk347);} /* LOOP-LOOKUP-KEYWORD */
static void LnkT346(){ call_or_link(VV[346],(void **)&Lnk346);} /* LOOP-POP-SOURCE */
static void LnkT345(){ call_or_link(VV[345],(void **)&Lnk345);} /* LOOP-BIND-BLOCK */
static void LnkT344(){ call_or_link(VV[344],(void **)&Lnk344);} /* LOOP-ITERATION-DRIVER */
static void LnkT343(){ call_or_link(VV[343],(void **)&Lnk343);} /* LOOP-ERROR */
static void LnkT323(){ call_or_link(VV[323],(void **)&Lnk323);} /* SUBTYPEP */
static object  LnkTLI342(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[342],(void **)&LnkLI342,ap);va_end(ap);return V1;} /* WARN */
static void LnkT341(){ call_or_link(VV[341],(void **)&Lnk341);} /* LOOP-CONTEXT */
static void LnkT340(){ call_or_link(VV[340],(void **)&Lnk340);} /* SPECIAL-OPERATOR-P */
static void LnkT339(){ call_or_link(VV[339],(void **)&Lnk339);} /* ESTIMATE-CODE-SIZE-1 */
static void LnkT338(){ call_or_link(VV[338],(void **)&Lnk338);} /* DESTRUCTURING-SIZE */
static void LnkT77(){ call_or_link(VV[77],(void **)&Lnk77);} /* ESTIMATE-CODE-SIZE */
static void LnkT337(){ call_or_link(VV[337],(void **)&Lnk337);} /* LOOP-CODE-DUPLICATION-THRESHOLD */
static void LnkT336(){ call_or_link(VV[336],(void **)&Lnk336);} /* LOOP-OPTIMIZATION-QUANTITIES */
static void LnkT335(){ call_or_link(VV[335],(void **)&Lnk335);} /* LOOP-WARN */
static void LnkT334(){ call_or_link(VV[334],(void **)&Lnk334);} /* LOOP-MAKE-DESETQ */
static void LnkT333(){ call_or_link(VV[333],(void **)&Lnk333);} /* LOOP-MAKE-PSETQ */
static void LnkT332(){ call_or_link(VV[332],(void **)&Lnk332);} /* MAKE-LOOP-UNIVERSE */
static void LnkT330(){ call_or_link(VV[330],(void **)&Lnk330);} /* TYPEP */
static void LnkT328(){ call_or_link(VV[328],(void **)&Lnk328);} /* HIDE-VARIABLE-REFERENCE */
static void LnkT326(){ call_or_link(VV[326],(void **)&Lnk326);} /* LOOP-TYPED-INIT */
static void LnkT325(){ call_or_link(VV[325],(void **)&Lnk325);} /* MAKE-LOOP-MINIMAX-INTERNAL */
static void LnkT324(){ call_or_link(VV[324],(void **)&Lnk324);} /* LOOP-GENTEMP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

