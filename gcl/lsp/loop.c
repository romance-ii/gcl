
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
	base[5]= symbol_function(VV[326]);
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
	(void) (*Lnk327)();
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
	(void) (*Lnk327)();
	vs_top=sup;
	base[9]= vs_base[0];
	goto T75;
T75:;
	base[10]= VV[27];
	base[11]= Cnil;
	base[12]= VV[28];
	base[13]= (V35);
	vs_top=(vs_base=base+2)+12;
	(void) (*Lnk328)();
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
	(void) (*Lnk327)();
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
	(void) (*Lnk329)();
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
	if((V65!= VV[330]))goto T118;
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
	(void) (*Lnk331)();
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
	base[5]= symbol_function(VV[332]);
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
	base[5]= symbol_function(VV[332]);
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
	if((V92!= VV[307]))goto T157;
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
	(void) (*Lnk333)();
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
	base[35]= symbol_function(VV[334]);
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
	(void) (*Lnk335)();
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
	(void) (*Lnk336)();
	vs_top=sup;
	V115= vs_base[0];
	V113= list(3,VV[62],/* INLINE-ARGS */V114,V115);
	goto T248;
T248:;
	base[1]= list(2,/* INLINE-ARGS */V112,V113);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk337)();
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
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T294;}
	base[2]= VV[67];
	base[3]= (V123);
	base[4]= (V127);
	base[5]= (V124);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk338)();
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
	(void) (*Lnk339)();
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
	(void) (*Lnk340)();
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
	(void) (*Lnk341)();
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
	(void) (*Lnk342)();
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
	(void) (*Lnk341)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= cadr((V184));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk342)();
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
	(void) (*Lnk342)();
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
	(void) (*Lnk342)();
	vs_top=sup;
	V189= vs_base[0];
	base[2]= one_plus(V189);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T603;
T603:;
	base[2]= (V172);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk343)();
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
	base[3]= VV[91];
	base[4]= (V197);
	base[5]= (V198);
	vs_base=vs_top;
	(void) (*Lnk344)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk345)();
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
	(void) (*Lnk344)();
	vs_top=sup;
	V201= vs_base[0];
	base[2]= (VFUN_NARGS=4,(*(LnkLI346))(VV[92],(V199),(V200),V201));
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
	if(vs_base>=vs_top){vs_top=sup;goto T646;}
	V204=(base[2]);
	vs_top=sup;
	goto T647;
	goto T646;
T646:;
	V204= (V203);
	goto T647;
T647:;
	if(((V202))!=Cnil){
	goto T650;}
	base[3]= (V204);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T650;
T650:;
	{object V205;
	object V206;
	base[3]= (V202);
	base[4]= (V203);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk326)();
	if(vs_base>=vs_top){vs_top=sup;goto T655;}
	V205= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T656;}
	V206= vs_base[0];
	vs_top=sup;
	goto T657;
	goto T655;
T655:;
	V205= Cnil;
	goto T656;
T656:;
	V206= Cnil;
	goto T657;
T657:;
	if(((V206))!=Cnil){
	goto T660;}
	base[3]= VV[93];
	base[4]= (V202);
	base[5]= (V203);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	goto T658;
	goto T660;
T660:;
	if(((V205))!=Cnil){
	goto T658;}
	base[3]= VV[94];
	base[4]= (V202);
	base[5]= (V203);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T658;
T658:;
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
	base[2]= VV[95];
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
	bds_bind(VV[96],base[1]);
	bds_bind(VV[97],base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[98],(VV[89]->s.s_dbind));
	bds_bind(VV[88],Cnil);
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
	bds_bind(VV[119],Cnil);
	bds_bind(VV[120],Cnil);
	vs_base=vs_top;
	(void) (*Lnk348)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk349)();
	vs_top=sup;
	{register object V208;
	V209= nreverse((VV[106]->s.s_dbind));
	V210= nreverse((VV[108]->s.s_dbind));
	V211= nreverse((VV[109]->s.s_dbind));
	V212= nreverse((VV[111]->s.s_dbind));
	base[27]= (VV[112]->s.s_dbind);
	base[28]= nreverse((VV[113]->s.s_dbind));
	vs_top=(vs_base=base+27)+2;
	Lreconc();
	vs_top=sup;
	V213= vs_base[0];
	V208= list(6,VV[121],/* INLINE-ARGS */V209,/* INLINE-ARGS */V210,/* INLINE-ARGS */V211,/* INLINE-ARGS */V212,V213);
	{register object V214;
	register object V215;
	V214= (VV[105]->s.s_dbind);
	V215= car((V214));
	goto T680;
T680:;
	if(!(endp_prop((V214)))){
	goto T681;}
	goto T676;
	goto T681;
T681:;
	{object V216;
	object V217;
	object V218;
	object V219;
	V216= car((V215));
	V217= cadr((V215));
	V218= caddr((V215));
	V219= cadddr((V215));
	{register object V220;
	register object V221;
	V220= (V219);
	V221= car((V220));
	goto T694;
T694:;
	if(!(endp_prop((V220)))){
	goto T695;}
	goto T690;
	goto T695;
T695:;
	V222= make_cons((V208),Cnil);
	V208= append((V221),/* INLINE-ARGS */V222);
	V220= cdr((V220));
	V221= car((V220));
	goto T694;}
	goto T690;
T690:;
	if(((V216))!=Cnil){
	goto T706;}
	if(((V217))!=Cnil){
	goto T706;}
	if(((V218))==Cnil){
	goto T685;}
	goto T706;
T706:;
	{register object V223;
	V223= make_cons((V208),Cnil);
	if(((V217))==Cnil){
	goto T713;}
	{object V224;
	V224= make_cons(VV[30],(V217));
	V223= make_cons((V224),(V223));}
	goto T713;
T713:;
	if(((V216))!=Cnil){
	goto T721;}
	V225= VV[122];
	goto T719;
	goto T721;
T721:;
	if((symbol_value(VV[63]))==Cnil){
	goto T724;}
	V225= car(symbol_value(VV[63]));
	goto T719;
	goto T724;
T724:;
	V225= VV[29];
	goto T719;
T719:;
	if(((V218))==Cnil){
	goto T728;}
	V227= append((V218),(V223));
	V228= make_cons(VV[123],/* INLINE-ARGS */V227);
	V226= make_cons(/* INLINE-ARGS */V228,Cnil);
	goto T726;
	goto T728;
T728:;
	V226= (V223);
	goto T726;
T726:;
	V208= listA(3,V225,(V216),V226);}}
	goto T685;
T685:;
	V214= cdr((V214));
	V215= car((V214));
	goto T680;}
	goto T676;
T676:;
	V208= list(3,VV[124],car((VV[118]->s.s_dbind)),(V208));
	base[27]= (V208);
	vs_top=(vs_base=base+27)+1;
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
	goto T738;
T738:;
	if((symbol_value(VV[89]))!=Cnil){
	goto T739;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T739;
T739:;
	{register object V229;
	register object V230;
	V229= car(symbol_value(VV[89]));
	V230= Cnil;
	if(type_of((V229))==t_symbol){
	goto T746;}
	base[0]= VV[125];
	base[1]= (V229);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T743;
	goto T746;
T746:;
	setq(VV[88],symbol_value(VV[89]));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	base[0]= (V229);
	base[1]= structure_ref(symbol_value(VV[97]),VV[39],0);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk351)();
	vs_top=sup;
	V230= vs_base[0];
	if(((V230))==Cnil){
	goto T754;}
	base[1]= car((V230));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V231;
	V231= cdr((V230));
	 vs_top=base+1;
	 while(!endp(V231))
	 {vs_push(car(V231));V231=cdr(V231);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T743;
	goto T754;
T754:;
	base[0]= (V229);
	base[1]= structure_ref(symbol_value(VV[97]),VV[39],1);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk351)();
	vs_top=sup;
	V230= vs_base[0];
	if(((V230))==Cnil){
	goto T763;}
	base[0]= (V230);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk352)();
	vs_top=sup;
	goto T743;
	goto T763;
T763:;
	base[0]= (V229);
	base[1]= VV[126];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T770;}
	base[0]= VV[127];
	base[1]= (V229);
	base[2]= car(symbol_value(VV[89]));
	base[3]= cadr(symbol_value(VV[89]));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T743;
	goto T770;
T770:;
	base[0]= VV[128];
	base[1]= (V229);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;}
	goto T743;
T743:;
	goto T738;
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
	goto T783;}
	{object V232;
	V232= car(symbol_value(VV[89]));
	setq(VV[89],cdr(symbol_value(VV[89])));
	base[0]= (V232);
	vs_top=(vs_base=base+0)+1;
	return;}
	goto T783;
T783:;
	base[0]= VV[129];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
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
	{register object V233;
	register object V234;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V235= vs_base[0];
	V233= make_cons(V235,Cnil);
	V234= car(symbol_value(VV[89]));
	goto T793;
T793:;
	if(!(type_of((V234))!=t_cons)){
	goto T794;}
	if((cdr((V233)))!=Cnil){
	goto T798;}
	base[0]= car((V233));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T798;
T798:;
	V236= nreverse((V233));
	base[0]= make_cons(VV[14],/* INLINE-ARGS */V236);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T794;
T794:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V237= vs_base[0];
	V233= make_cons(V237,(V233));
	V234= car(symbol_value(VV[89]));
	goto T793;}
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
	goto T807;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	return;
	goto T807;
T807:;
	base[0]= VV[130];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	return;
}
/*	function definition for LOOP-CONSTRUCT-RETURN	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V238;
	check_arg(1);
	V238=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= list(3,VV[86],car(symbol_value(VV[118])),(V238));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-PSEUDO-BODY	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{object V239;
	check_arg(1);
	V239=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[110]))!=Cnil){
	goto T810;}
	if((symbol_value(VV[115]))==Cnil){
	goto T811;}
	goto T810;
T810:;
	setq(VV[109],make_cons(V239,symbol_value(VV[109])));
	base[1]= symbol_value(VV[109]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T811;
T811:;
	setq(VV[108],make_cons(V239,symbol_value(VV[108])));
	setq(VV[111],make_cons(V239,symbol_value(VV[111])));
	base[1]= symbol_value(VV[111]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-EMIT-BODY	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V243;
	check_arg(1);
	V243=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	setq(VV[110],Ct);
	base[1]= (V243);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk354)();
	return;
	}
}
/*	function definition for LOOP-EMIT-FINAL-VALUE	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V244;
	check_arg(1);
	V244=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V245;
	base[2]= (V244);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk355)();
	vs_top=sup;
	V245= vs_base[0];
	setq(VV[113],make_cons((V245),symbol_value(VV[113])));}
	if((symbol_value(VV[114]))==Cnil){
	goto T826;}
	if((symbol_value(VV[119]))==Cnil){
	goto T830;}
	base[1]= VV[90];
	base[2]= VV[131];
	base[3]= symbol_value(VV[114]);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk345)();
	vs_top=sup;
	goto T826;
	goto T830;
T830:;
	base[1]= VV[132];
	base[2]= symbol_value(VV[114]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk338)();
	vs_top=sup;
	goto T826;
T826:;
	setq(VV[114],car(symbol_value(VV[88])));
	base[1]= symbol_value(VV[114]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V246;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T838;}
	V246=(base[0]);
	vs_top=sup;
	goto T839;
	goto T838;
T838:;
	V246= Cnil;
	goto T839;
T839:;
	if((symbol_value(VV[115]))==Cnil){
	goto T842;}
	base[1]= VV[133];
	base[2]= (V246);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	return;
	goto T842;
T842:;
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
	{register object V247;
	check_arg(1);
	V247=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V247))==Cnil){
	goto T847;}
	base[1]= (V247);
	base[2]= VV[134];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T847;}
	base[1]= (V247);
	base[2]= VV[135];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T853;}
	base[1]= (V247);
	base[2]= VV[136];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T854;}
	goto T853;
T853:;
	base[1]= (*(LnkLI356))(small_fixnum(0),(V247));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T854;
T854:;
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T847;
T847:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T862;}
	vs_top=sup;
	goto T863;
	goto T862;
T862:;
	base[0]= Cnil;
	goto T863;
T863:;
	if(symbol_value(VV[89])==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= car(symbol_value(VV[89]));
	base[2]= base[1];
	base[3]= VV[137];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T867;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk350)();
	return;
	goto T867;
T867:;
	if(!(type_of(base[1])==t_symbol)){
	goto T873;}
	{object V248;{object V249;
	base[2]= base[1];
	base[3]= structure_ref(symbol_value(VV[97]),VV[39],4);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V249= vs_base[0];
	if(V249==Cnil)goto T876;
	V248= V249;
	goto T875;
	goto T876;
T876:;}
	base[2]= symbol_name(base[1]);
	base[3]= structure_ref(symbol_value(VV[97]),VV[39],5);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V248= vs_base[0];
	goto T875;
T875:;
	if(((V248))==Cnil){
	goto T883;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	base[2]= (V248);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T883;
T883:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T873;
T873:;
	if(!(type_of(base[0])==t_cons)){
	goto T888;}
	if(type_of(base[1])==t_cons){
	goto T886;}
	base[2]= VV[138];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T886;
	goto T888;
T888:;
	base[2]= VV[139];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T886;
T886:;
	vs_base=vs_top;
	(void) (*Lnk350)();
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
	if((symbol_value(VV[100]))!=Cnil){
	goto T899;}
	if((symbol_value(VV[103]))!=Cnil){
	goto T899;}
	if((symbol_value(VV[107]))==Cnil){
	goto T900;}
	goto T899;
T899:;
	{object V250;
	V251= nreverse(symbol_value(VV[100]));
	V250= list(4,/* INLINE-ARGS */V251,symbol_value(VV[103]),symbol_value(VV[104]),symbol_value(VV[107]));
	setq(VV[105],make_cons((V250),symbol_value(VV[105])));}
	setq(VV[100],Cnil);
	setq(VV[103],Cnil);
	setq(VV[104],Cnil);
	setq(VV[107],Cnil);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T900;
T900:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-MAKE-VARIABLE	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_reserve(VM51);
	{register object V252;
	register object V253;
	register object V254;
	object V255;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V252=(base[0]);
	V253=(base[1]);
	V254=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T916;}
	V255=(base[3]);
	vs_top=sup;
	goto T917;
	goto T916;
T916:;
	V255= Cnil;
	goto T917;
T917:;
	if(((V252))!=Cnil){
	goto T921;}
	if(((V253))==Cnil){
	goto T919;}
	{object V256;
	base[5]= VV[142];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V252= vs_base[0];
	V256= list(2,(V252),(V253));
	setq(VV[100],make_cons((V256),symbol_value(VV[100])));}
	{object V257;
	V257= list(2,VV[143],(V252));
	setq(VV[103],make_cons((V257),symbol_value(VV[103])));
	goto T919;}
	goto T921;
T921:;
	if(!(type_of((V252))!=t_cons)){
	goto T933;}
	if(((V255))==Cnil){
	goto T937;}
	{register object x= (V252),V258= symbol_value(VV[99]);
	while(!endp(V258))
	if(eql(x,V258->c.c_car)){
	goto T941;
	}else V258=V258->c.c_cdr;
	goto T940;}
	goto T941;
T941:;
	base[4]= VV[144];
	base[5]= (V252);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T935;
	goto T940;
T940:;
	setq(VV[99],make_cons(V252,symbol_value(VV[99])));
	goto T935;
	goto T937;
T937:;
	{register object x= (V252),V260= symbol_value(VV[100]);
	while(!endp(V260))
	if(type_of(V260->c.c_car)==t_cons &&eql(x,V260->c.c_car->c.c_car)){
	goto T946;
	}else V260=V260->c.c_cdr;
	goto T935;}
	goto T946;
T946:;
	base[4]= VV[145];
	base[5]= (V252);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T935;
T935:;
	if(type_of((V252))==t_symbol){
	goto T949;}
	base[4]= VV[146];
	base[5]= (V252);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T949;
T949:;
	base[4]= (V252);
	base[5]= (V254);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk358)();
	vs_top=sup;
	{object V261;
	if((V253)!=Cnil){
	V262= (V253);
	goto T958;}
	base[5]= (V254);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	V262= vs_base[0];
	goto T958;
T958:;
	V261= list(2,(V252),V262);
	setq(VV[100],make_cons((V261),symbol_value(VV[100])));
	goto T919;}
	goto T933;
T933:;
	if(((V253))==Cnil){
	goto T962;}
	if((symbol_value(VV[63]))==Cnil){
	goto T965;}
	base[4]= (V252);
	base[5]= (V254);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk358)();
	vs_top=sup;
	{object V263;
	V263= list(2,(V252),(V253));
	setq(VV[100],make_cons((V263),symbol_value(VV[100])));
	goto T919;}
	goto T965;
T965:;
	{object V264;
	base[4]= VV[147];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V264= vs_base[0];
	{object V265;
	V265= list(2,(V264),(V253));
	setq(VV[100],make_cons((V265),symbol_value(VV[100])));}
	setq(VV[104],listA(3,(V252),(V264),symbol_value(VV[104])));
	goto T919;}
	goto T962;
T962:;
	{object V266;
	object V267;
	V266= Cnil;
	V267= Cnil;
	if(!(type_of((V254))!=t_cons)){
	goto T980;}
	V267= (V254);
	V266= (V267);
	goto T978;
	goto T980;
T980:;
	V266= car((V254));
	V267= cdr((V254));
	goto T978;
T978:;
	base[4]= car((V252));
	base[5]= Cnil;
	base[6]= (V266);
	base[7]= (V255);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk359)();
	vs_top=sup;
	base[4]= cdr((V252));
	base[5]= Cnil;
	base[6]= (V267);
	base[7]= (V255);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk359)();
	vs_top=sup;}
	goto T919;
T919:;
	base[4]= (V252);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LOOP-MAKE-ITERATION-VARIABLE	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_reserve(VM52);
	{object V268;
	object V269;
	object V270;
	check_arg(3);
	V268=(base[0]);
	V269=(base[1]);
	V270=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V268);
	base[4]= (V269);
	base[5]= (V270);
	base[6]= Ct;
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk359)();
	return;
	}
}
/*	function definition for LOOP-DECLARE-VARIABLE	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_reserve(VM53);
	{register object V271;
	register object V272;
	check_arg(2);
	V271=(base[0]);
	V272=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V271))==Cnil){
	goto T1000;}
	if(((V272))==Cnil){
	goto T1000;}
	if(!(((V272))==(Ct))){
	goto T1001;}
	goto T1000;
T1000:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1001;
T1001:;
	if(!(type_of((V271))==t_symbol)){
	goto T1008;}
	if(((V272))==(Ct)){
	goto T1011;}
	{register object x= (V271),V273= symbol_value(VV[101]);
	while(!endp(V273))
	if(eql(x,V273->c.c_car)){
	goto T1011;
	}else V273=V273->c.c_cdr;}
	{object V275;
	V275= list(3,VV[31],V272,(V271));
	setq(VV[103],make_cons((V275),symbol_value(VV[103])));
	base[3]= symbol_value(VV[103]);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1011;
T1011:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1008;
T1008:;
	if(!(type_of((V271))==t_cons)){
	goto T1018;}
	if(!(type_of((V272))==t_cons)){
	goto T1021;}
	base[2]= car((V271));
	base[3]= car((V272));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk358)();
	vs_top=sup;
	V271= cdr((V271));
	V272= cdr((V272));
	goto TTL;
	goto T1021;
T1021:;
	base[2]= car((V271));
	base[3]= (V272);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk358)();
	vs_top=sup;
	V271= cdr((V271));
	goto TTL;
	goto T1018;
T1018:;
	base[2]= VV[148];
	base[3]= (V271);
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
	{object V276;
	object V277;
	check_arg(2);
	V276=(base[0]);
	V277=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V276);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk360)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1038;}
	base[2]= (V276);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1038;
T1038:;
	base[3]= VV[149];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V276);
	base[4]= (V277);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk359)();
	return;
	}
}
/*	function definition for LOOP-DO-IF	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_reserve(VM55);
	bds_check;
	{object V278;
	object V279;
	check_arg(2);
	V278=(base[0]);
	V279=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V280;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V280= vs_base[0];
	bds_bind(VV[115],Ct);
	base[3]= Cnil;
	{object V281;
	object V282;
	base[4]= (V278);
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V281= vs_base[0];
	base[4]= car(symbol_value(VV[89]));
	base[5]= VV[150];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1050;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	base[4]= VV[150];
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V283= vs_base[0];
	V282= make_cons(V283,Cnil);
	goto T1048;
	goto T1050;
T1050:;
	V282= Cnil;
	goto T1048;
T1048:;
	base[4]= car(symbol_value(VV[89]));
	base[5]= VV[151];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1057;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	goto T1057;
T1057:;
	if((base[3])==Cnil){
	goto T1062;}
	V280= list(3,VV[11],base[3],(V280));
	goto T1062;
T1062:;
	if(((V279))==Cnil){
	goto T1069;}
	V284= list(2,VV[36],(V280));
	goto T1067;
	goto T1069;
T1069:;
	V284= (V280);
	goto T1067;
T1067:;
	base[4]= listA(4,VV[71],V284,(V281),(V282));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk354)();
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
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	{object V285;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V285= vs_base[0];
	setq(VV[106],make_cons((V285),symbol_value(VV[106])));
	base[1]= symbol_value(VV[106]);
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
	base[0]= VV[157];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	{object V286;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V286= vs_base[0];
	setq(VV[112],make_cons((V286),symbol_value(VV[112])));
	base[1]= symbol_value(VV[112]);
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
	(void) (*Lnk363)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk364)();
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
	{register object V287;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V287= vs_base[0];
	if(type_of((V287))==t_symbol){
	goto T1081;}
	base[0]= VV[158];
	base[1]= (V287);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1081;
T1081:;
	if((symbol_value(VV[108]))!=Cnil){
	goto T1087;}
	if((symbol_value(VV[109]))!=Cnil){
	goto T1087;}
	if((symbol_value(VV[113]))!=Cnil){
	goto T1087;}
	if((symbol_value(VV[115]))==Cnil){
	goto T1086;}
	goto T1087;
T1087:;
	base[0]= VV[159];
	base[1]= (V287);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1086;
T1086:;
	if((symbol_value(VV[118]))==Cnil){
	goto T1097;}
	base[0]= VV[160];
	base[1]= car(symbol_value(VV[118]));
	base[2]= (V287);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1097;
T1097:;
	setq(VV[118],list(2,(V287),Cnil));
	base[0]= symbol_value(VV[118]);
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
	(void) (*Lnk361)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk355)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
}
/*	function definition for MAKE-LOOP-COLLECTOR	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_reserve(VM61);
	{object V288;
	object V289;
	object V290;
	object V291;
	object V292;
	object V293;
	parse_key(vs_base,FALSE,FALSE,6,VV[165],VV[166],VV[167],VV[365],VV[168],VV[366]);
	vs_top=sup;
	V288=(base[0]);
	V289=(base[1]);
	V290=(base[2]);
	V291=(base[3]);
	V292=(base[4]);
	V293=(base[5]);
	base[12]= VV[161];
	base[13]= (V288);
	base[14]= (V289);
	base[15]= (V290);
	base[16]= (V291);
	base[17]= (V292);
	base[18]= (V293);
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
	{object V294;
	object V295;
	object V296;
	check_arg(3);
	V294=(base[0]);
	V295=(base[1]);
	V296=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[162];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1113;}
	setq(VV[119],Ct);
	goto T1113;
T1113:;
	{object V297;
	register object V298;
	register object V299;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V297= vs_base[0];
	V300= structure_ref(symbol_value(VV[97]),VV[39],6);
	if((/* INLINE-ARGS */V300)==Cnil){
	goto T1121;}
	V298= Cnil;
	goto T1120;
	goto T1121;
T1121:;
	vs_base=vs_top;
	(void) (*Lnk367)();
	vs_top=sup;
	V298= vs_base[0];
	goto T1120;
T1120:;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[162];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1125;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V299= vs_base[0];
	goto T1123;
	goto T1125;
T1125:;
	V299= Cnil;
	goto T1123;
T1123:;
	if(type_of((V299))==t_symbol){
	goto T1130;}
	base[3]= VV[163];
	base[4]= (V299);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1130;
T1130:;
	if(((V298))!=Cnil){
	goto T1135;}{object V301;
	vs_base=vs_top;
	(void) (*Lnk367)();
	vs_top=sup;
	V301= vs_base[0];
	if(V301==Cnil)goto T1139;
	V298= V301;
	goto T1138;
	goto T1139;
T1139:;}
	V298= (V296);
	goto T1138;
T1138:;
	goto T1135;
T1135:;
	{register object V302;{object V303;
	V303= symbol_value(VV[120]);
	V304= symbol_function(VV[369]);
	V302= (VFUN_NARGS=4,(*(LnkLI368))((V299),V303,VV[164],V304));}
	if(((V302))!=Cnil){
	goto T1145;}
	{object V305;
	base[4]= VV[165];
	base[5]= (V299);
	base[6]= VV[166];
	base[7]= (V295);
	base[8]= VV[167];
	base[9]= make_cons((V294),Cnil);
	base[10]= VV[168];
	base[11]= (V298);
	vs_top=(vs_base=base+4)+8;
	(void) (*Lnk370)();
	vs_top=sup;
	V302= vs_base[0];
	V305= (V302);
	setq(VV[120],make_cons((V305),symbol_value(VV[120])));
	goto T1143;}
	goto T1145;
T1145:;
	V306= structure_ref((V302),VV[161],1);
	if((/* INLINE-ARGS */V306)==((V295))){
	goto T1158;}
	base[3]= VV[169];
	base[4]= (V299);
	V307= structure_ref((V302),VV[161],2);
	base[5]= car(/* INLINE-ARGS */V307);
	base[6]= (V294);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1158;
T1158:;
	V308= structure_ref((V302),VV[161],4);
	if(equal((V298),/* INLINE-ARGS */V308)){
	goto T1165;}
	base[3]= VV[170];
	base[4]= (V299);
	base[5]= (V298);
	base[6]= structure_ref((V302),VV[161],4);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk338)();
	vs_top=sup;
	V309= structure_ref((V302),VV[161],4);
	if(!((/* INLINE-ARGS */V309)==(Ct))){
	goto T1165;}
	(void)(structure_set((V302),VV[161],4,(V298)));
	goto T1165;
T1165:;
	{object V312;
	V313= structure_ref(V302,VV[161],2);
	V312= make_cons(V294,/* INLINE-ARGS */V313);
	(void)(structure_set(V302,VV[161],2,(V312)));}
	goto T1143;
T1143:;
	base[3]= (V302);
	base[4]= (V297);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	function definition for LOOP-LIST-COLLECTION	*/

static void L74()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_reserve(VM63);
	{object V314;
	check_arg(1);
	V314=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V315;
	register object V316;
	base[1]= (V314);
	base[2]= VV[5];
	base[3]= VV[5];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T1182;}
	V315= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1183;}
	V316= vs_base[0];
	vs_top=sup;
	goto T1184;
	goto T1182;
T1182:;
	V315= Cnil;
	goto T1183;
T1183:;
	V316= Cnil;
	goto T1184;
T1184:;
	{register object V317;
	V317= structure_ref((V315),VV[161],3);
	if(((V317))!=Cnil){
	goto T1186;}
	base[1]= VV[171];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V318= vs_base[0];
	base[1]= VV[172];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V319= vs_base[0];
	if((structure_ref((V315),VV[161],0))!=Cnil){
	goto T1196;}
	V320= Cnil;
	goto T1195;
	goto T1196;
T1196:;
	V321= structure_ref((V315),VV[161],0);
	V320= make_cons(/* INLINE-ARGS */V321,Cnil);
	goto T1195;
T1195:;
	V317= listA(3,V318,V319,V320);
	(void)(structure_set((V315),VV[161],3,(V317)));
	{object V322;
	V322= list(2,VV[173],(V317));
	setq(VV[107],make_cons((V322),symbol_value(VV[107])));}
	if((structure_ref((V315),VV[161],0))!=Cnil){
	goto T1186;}
	base[1]= listA(3,VV[174],car((V317)),cddr((V317)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)();
	vs_top=sup;
	goto T1186;
T1186:;
	{object V323= (V314);
	if((V323!= VV[5]))goto T1205;
	V316= list(2,VV[5],(V316));
	goto T1204;
	goto T1205;
T1205:;
	if((V323!= VV[373]))goto T1207;
	goto T1204;
	goto T1207;
T1207:;
	if((V323!= VV[374]))goto T1208;
	if(!(type_of((V316))==t_cons)){
	goto T1209;}
	if((car((V316)))==(VV[5])){
	goto T1204;}
	goto T1209;
T1209:;
	V316= list(2,VV[175],(V316));
	goto T1204;
	goto T1208;
T1208:;
	FEerror("The ECASE key value ~s is illegal.",1,V323);
	goto T1204;}
	goto T1204;
T1204:;
	base[1]= list(3,VV[176],(V317),(V316));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)();
	return;}}
	}
}
/*	function definition for LOOP-SUM-COLLECTION	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_reserve(VM64);
	{object V324;
	object V325;
	object V326;
	check_arg(3);
	V324=(base[0]);
	V325=(base[1]);
	V326=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V327;
	object V328;
	base[3]= (V324);
	base[4]= VV[177];
	base[5]= (V326);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T1219;}
	V327= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1220;}
	V328= vs_base[0];
	vs_top=sup;
	goto T1221;
	goto T1219;
T1219:;
	V327= Cnil;
	goto T1220;
T1220:;
	V328= Cnil;
	goto T1221;
T1221:;
	base[3]= structure_ref((V327),VV[161],4);
	base[4]= (V325);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk375)();
	vs_top=sup;
	{register object V329;
	V329= structure_ref((V327),VV[161],3);
	if(((V329))!=Cnil){
	goto T1226;}{object V331;
	V331= structure_ref((V327),VV[161],0);
	if(V331==Cnil)goto T1233;
	base[3]= V331;
	goto T1232;
	goto T1233;
T1233:;}
	base[4]= VV[178];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1232;
T1232:;
	base[4]= Cnil;
	base[5]= structure_ref((V327),VV[161],4);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	V330= vs_base[0];
	V329= make_cons(V330,Cnil);
	(void)(structure_set((V327),VV[161],3,(V329)));
	if((structure_ref((V327),VV[161],0))!=Cnil){
	goto T1226;}
	V332= structure_ref((V327),VV[161],3);
	base[3]= car(/* INLINE-ARGS */V332);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk372)();
	vs_top=sup;
	goto T1226;
T1226:;
	if(!(((V324))==(VV[179]))){
	goto T1243;}
	V333= car((V329));
	base[4]= Ct;
	base[5]= car((V329));
	base[6]= list(2,VV[180],car((V329)));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk331)();
	vs_top=sup;
	V334= vs_base[0];
	base[3]= list(3,VV[8],(V328),list(3,VV[11],/* INLINE-ARGS */V333,V334));
	goto T1241;
	goto T1243;
T1243:;
	V335= car((V329));
	base[4]= Ct;
	base[5]= car((V329));
	base[6]= car((V329));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk331)();
	vs_top=sup;
	V336= vs_base[0];
	base[3]= list(3,VV[11],/* INLINE-ARGS */V335,list(3,VV[181],V336,(V328)));
	goto T1241;
T1241:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk364)();
	return;}}
	}
}
/*	function definition for LOOP-MAXMIN-COLLECTION	*/

static void L76()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_reserve(VM65);
	{object V337;
	check_arg(1);
	V337=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V338;
	object V339;
	base[1]= (V337);
	base[2]= VV[182];
	base[3]= symbol_value(VV[183]);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T1257;}
	V338= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1258;}
	V339= vs_base[0];
	vs_top=sup;
	goto T1259;
	goto T1257;
T1257:;
	V338= Cnil;
	goto T1258;
T1258:;
	V339= Cnil;
	goto T1259;
T1259:;
	base[1]= structure_ref((V338),VV[161],4);
	base[2]= symbol_value(VV[183]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk375)();
	vs_top=sup;
	{register object V340;
	V340= structure_ref((V338),VV[161],5);
	if(((V340))!=Cnil){
	goto T1264;}{object V341;
	V341= structure_ref((V338),VV[161],0);
	if(V341==Cnil)goto T1270;
	base[1]= V341;
	goto T1269;
	goto T1270;
T1270:;}
	base[2]= VV[184];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	base[1]= vs_base[0];
	goto T1269;
T1269:;
	base[2]= structure_ref((V338),VV[161],4);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk376)();
	vs_top=sup;
	V340= vs_base[0];
	(void)(structure_set((V338),VV[161],5,(V340)));
	if((structure_ref((V338),VV[161],0))!=Cnil){
	goto T1264;}
	base[1]= structure_ref((V340),VV[18],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)();
	vs_top=sup;
	goto T1264;
T1264:;
	base[1]= (V337);
	base[2]= (V340);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk377)();
	vs_top=sup;
	{object V342;
	V342= list(2,VV[185],(V340));
	setq(VV[107],make_cons((V342),symbol_value(VV[107])));}
	base[1]= list(4,VV[186],(V340),(V337),(V339));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)();
	return;}}
	}
}
/*	function definition for LOOP-DO-ALWAYS	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_reserve(VM66);
	{object V343;
	object V344;
	check_arg(2);
	V343=(base[0]);
	V344=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V345;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V345= vs_base[0];
	if(((V343))==Cnil){
	goto T1285;}
	vs_base=vs_top;
	(void) (*Lnk362)();
	vs_top=sup;
	goto T1285;
T1285:;
	if(((V344))==Cnil){
	goto T1292;}
	V346= VV[8];
	goto T1290;
	goto T1292;
T1292:;
	V346= VV[187];
	goto T1290;
T1290:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk355)();
	vs_top=sup;
	V347= vs_base[0];
	base[2]= list(3,V346,(V345),V347);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk364)();
	vs_top=sup;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk372)();
	return;}
	}
}
/*	function definition for LOOP-DO-THEREIS	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_reserve(VM67);
	{object V348;
	check_arg(1);
	V348=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V348))==Cnil){
	goto T1297;}
	vs_base=vs_top;
	(void) (*Lnk362)();
	vs_top=sup;
	goto T1297;
T1297:;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V349= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V350= vs_base[0];
	V351= list(3,VV[11],V349,V350);
	base[2]= symbol_value(VV[116]);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk355)();
	vs_top=sup;
	V352= vs_base[0];
	base[1]= list(3,VV[8],/* INLINE-ARGS */V351,V352);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)();
	return;
	}
}
/*	function definition for LOOP-DO-WHILE	*/

static void L79()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_reserve(VM68);
	{object V353;
	object V354;
	check_arg(2);
	V353=(base[0]);
	V354=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V355;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V355= vs_base[0];
	base[3]= (V354);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	if(((V353))==Cnil){
	goto T1313;}
	V356= VV[8];
	goto T1311;
	goto T1313;
T1313:;
	V356= VV[187];
	goto T1311;
T1311:;
	base[3]= list(3,V356,(V355),VV[188]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk354)();
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
	base[0]= VV[189];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	{register object V357;
	register object V358;
	register object V359;
	V357= Cnil;
	V358= Cnil;
	V359= Cnil;
	goto T1318;
T1318:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V357= vs_base[0];
	base[0]= (V357);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk367)();
	vs_top=sup;
	V359= vs_base[0];
	base[0]= car(symbol_value(VV[89]));
	base[1]= VV[190];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1329;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V358= vs_base[0];
	goto T1327;
	goto T1329;
T1329:;
	V358= Cnil;
	goto T1327;
T1327:;
	base[0]= (V357);
	base[1]= (V358);
	base[2]= (V359);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	base[0]= car(symbol_value(VV[89]));
	base[1]= VV[155];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1340;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	goto T1338;
	goto T1340;
T1340:;
	vs_base=vs_top;
	(void) (*Lnk349)();
	return;
	goto T1338;
T1338:;
	goto T1318;}
}
/*	function definition for LOOP-HACK-ITERATION	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_reserve(VM70);
	{register object V360;
	check_arg(1);
	V360=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V361;
	register object V362;
	register object V363;
	register object V364;
	register object V365;
	register object V366;
	register object V367;
	register object V368;
	register object V369;
	object V370;
	V361= Cnil;
	V362= Cnil;
	V363= Cnil;
	V364= Cnil;
	V365= Cnil;
	V366= Cnil;
	V367= Cnil;
	V368= Cnil;
	V369= Cnil;
	V370= Cnil;
	goto T1347;
T1347:;
	base[2]= car((V360));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V371;
	V371= cdr((V360));
	 vs_top=base+2;
	 while(!endp(V371))
	 {vs_push(car(V371));V371=cdr(V371);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V370= vs_base[0];
	V369= (V370);
	if((car((V369)))!=Cnil){
	goto T1357;}
	goto T1356;
	goto T1357;
T1357:;
	{object V372;
	V372= car((V369));
	V361= make_cons((V372),(V361));}
	goto T1356;
T1356:;
	V369= cdr((V369));
	base[1]= car((V369));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V373= vs_base[0];
	V362= nconc((V362),V373);
	V369= cdr((V369));
	if((car((V369)))!=Cnil){
	goto T1367;}
	goto T1366;
	goto T1367;
T1367:;
	{object V374;
	V374= car((V369));
	V363= make_cons((V374),(V363));}
	goto T1366;
T1366:;
	V369= cdr((V369));
	base[1]= car((V369));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V375= vs_base[0];
	V364= nconc((V364),V375);
	V369= cdr((V369));
	if((symbol_value(VV[110]))==Cnil){
	goto T1379;}
	base[1]= VV[191];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1379;
T1379:;
	if(((V369))!=Cnil){
	goto T1383;}
	V369= (V370);
	goto T1383;
T1383:;
	if((car((V369)))==Cnil){
	goto T1387;}
	{object V376;
	V376= car((V369));
	V365= make_cons((V376),(V365));}
	goto T1387;
T1387:;
	V369= cdr((V369));
	base[1]= car((V369));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V377= vs_base[0];
	V366= nconc((V366),V377);
	V369= cdr((V369));
	if((car((V369)))==Cnil){
	goto T1397;}
	{object V378;
	V378= car((V369));
	V367= make_cons((V378),(V367));}
	goto T1397;
T1397:;
	base[1]= cadr((V369));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V379= vs_base[0];
	V368= nconc((V368),V379);
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[155];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1407;}
	base[1]= (V368);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk337)();
	vs_top=sup;
	V380= vs_base[0];
	base[1]= (V367);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V381= vs_base[0];
	base[1]= (V366);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	V382= vs_base[0];
	base[1]= (V365);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V383= vs_base[0];
	setq(VV[108],listA(5,V380,V381,V382,V383,symbol_value(VV[108])));
	base[1]= (V364);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk337)();
	vs_top=sup;
	V384= vs_base[0];
	base[1]= (V363);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V385= vs_base[0];
	base[1]= (V362);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	V386= vs_base[0];
	base[1]= (V361);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V387= vs_base[0];
	setq(VV[111],listA(5,V384,V385,V386,V387,symbol_value(VV[111])));
	vs_base=vs_top;
	(void) (*Lnk349)();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1407;
T1407:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	if((structure_ref(symbol_value(VV[97]),VV[39],7))!=Cnil){
	goto T1434;}
	base[1]= car(symbol_value(VV[89]));
	base[2]= structure_ref(symbol_value(VV[97]),VV[39],1);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk351)();
	vs_top=sup;
	V369= vs_base[0];
	if(((V369))==Cnil){
	goto T1434;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V360= (V369);
	goto T1434;
T1434:;
	goto T1347;}
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
	{object V388;
	object V389;
	object V390;
	object V391;
	object V392;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V388= vs_base[0];
	base[3]= (V388);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk367)();
	vs_top=sup;
	V389= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V390= vs_base[0];
	V391= Cnil;
	V392= Cnil;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V391= vs_base[0];
	if(!(type_of((V390))==t_symbol)){
	goto T1455;}
	base[3]= (V390);
	base[4]= structure_ref(symbol_value(VV[97]),VV[39],2);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk351)();
	vs_top=sup;
	V392= vs_base[0];
	if(((V392))!=Cnil){
	goto T1454;}
	goto T1455;
T1455:;
	base[3]= VV[194];
	base[4]= (V390);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1454;
T1454:;
	base[3]= car((V392));
	base[4]= (V388);
	base[5]= (V391);
	base[6]= (V389);
	{object V393;
	V393= cdr((V392));
	 vs_top=base+7;
	 while(!endp(V393))
	 {vs_push(car(V393));V393=cdr(V393);}
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
	{register object V394;
	register object V395;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V394= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk367)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= symbol_value(VV[183]);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk375)();
	vs_top=sup;
	V395= vs_base[0];
	if(!(type_of((V394))==t_cons)){
	goto T1473;}
	if(!((car((V394)))==(VV[195]))){
	goto T1473;}
	base[0]= cadr((V394));
	base[1]= (V395);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1473;}
	V395= cadr((V394));
	goto T1473;
T1473:;
	{object V396;
	object V397;
	object V398;
	base[0]= (V394);
	base[1]= (V395);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1486;}
	V396= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1487;}
	V397= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1488;}
	V398= vs_base[0];
	vs_top=sup;
	goto T1489;
	goto T1486;
T1486:;
	V396= Cnil;
	goto T1487;
T1487:;
	V397= Cnil;
	goto T1488;
T1488:;
	V398= Cnil;
	goto T1489;
T1489:;
	if(((V397))==Cnil){
	goto T1491;}
	if(!(number_compare((V398),small_fixnum(1))<=0)){
	goto T1491;}
	base[0]= listA(6,Ct,Cnil,Cnil,Cnil,(number_compare((V398),small_fixnum(0))<=0?Ct:Cnil),VV[196]);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T1491;
T1491:;
	{register object V399;
	base[1]= VV[197];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V396);
	base[2]= (V395);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	V399= vs_base[0];
	if(((V397))==Cnil){
	goto T1501;}
	V400= list(2,VV[36],list(2,VV[198],list(3,VV[11],(V399),list(2,VV[199],(V399)))));
	base[0]= make_cons(/* INLINE-ARGS */V400,VV[200]);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T1501;
T1501:;
	V401= list(2,VV[201],list(3,VV[11],(V399),list(2,VV[199],(V399))));
	base[0]= make_cons(/* INLINE-ARGS */V401,VV[202]);
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
	if(symbol_value(VV[116])!=Cnil){
	base[0]= symbol_value(VV[116]);
	vs_top=(vs_base=base+0)+1;
	return;}
	base[1]= VV[203];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	setq(VV[116],vs_base[0]);
	base[0]= symbol_value(VV[116]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-ANSI-FOR-EQUALS	*/

static void L86()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_reserve(VM74);
	{register object V402;
	object V403;
	object V404;
	check_arg(3);
	V402=(base[0]);
	V403=(base[1]);
	V404=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V402);
	base[4]= Cnil;
	base[5]= (V404);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[204];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1513;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V405= vs_base[0];
	V406= list(2,(V402),V405);
	base[3]= listA(7,Cnil,/* INLINE-ARGS */V406,Cnil,Cnil,Cnil,list(2,(V402),(V403)),VV[205]);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1513;
T1513:;
	base[3]= listA(3,Cnil,list(2,(V402),(V403)),VV[206]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for LOOP-FOR-ACROSS	*/

static void L87()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_reserve(VM75);
	{object V407;
	object V408;
	object V409;
	check_arg(3);
	V407=(base[0]);
	V408=(base[1]);
	V409=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V407);
	base[4]= Cnil;
	base[5]= (V409);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	{object V410;
	register object V411;
	base[3]= VV[207];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V410= vs_base[0];
	base[3]= VV[208];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V411= vs_base[0];
	{register object V412;
	object V413;
	object V414;
	base[3]= (V408);
	base[4]= VV[209];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1530;}
	V412= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1531;}
	V413= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1532;}
	V414= vs_base[0];
	vs_top=sup;
	goto T1533;
	goto T1530;
T1530:;
	V412= Cnil;
	goto T1531;
T1531:;
	V413= Cnil;
	goto T1532;
T1532:;
	V414= Cnil;
	goto T1533;
T1533:;
	base[3]= (V410);
	base[4]= (V412);
	if(!(type_of((V412))==t_cons)){
	goto T1539;}
	if(!((car((V412)))==(VV[195]))){
	goto T1539;}
	base[5]= cadr((V412));
	goto T1537;
	goto T1539;
T1539:;
	base[5]= VV[209];
	goto T1537;
T1537:;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= (V411);
	base[4]= small_fixnum(0);
	base[5]= VV[210];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	{long V415;
	object V416;
	register object V417;
	object V418;
	object V419;
	object V420;
	V415= 0;
	if(((V413))!=Cnil){
	goto T1550;}
	{object V421;
	base[7]= VV[211];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V421= vs_base[0];
	{object V422;
	V422= list(3,VV[11],(V421),list(2,VV[212],(V410)));
	setq(VV[106],make_cons((V422),symbol_value(VV[106])));}
	base[7]= (V421);
	base[8]= small_fixnum(0);
	base[9]= VV[210];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	V416= vs_base[0];
	goto T1548;}
	goto T1550;
T1550:;
	V415= (long)length((V414));
	V416= make_fixnum(V415);
	goto T1548;
T1548:;
	V417= list(3,VV[213],(V411),(V416));
	V418= (V417);
	V419= list(2,(V407),list(3,VV[214],(V410),(V411)));
	V420= list(2,(V411),list(2,VV[180],(V411)));
	if(((V413))==Cnil){
	goto T1565;}
	V417= ((V415)==(0)?Ct:Cnil);
	if(!((V415)<=(1))){
	goto T1565;}
	V418= Ct;
	goto T1565;
T1565:;
	if(((((V417))==((V418))?Ct:Cnil))==Cnil){
	goto T1574;}
	V423= Cnil;
	goto T1573;
	goto T1574;
T1574:;
	V423= list(4,(V417),(V419),Cnil,(V420));
	goto T1573;
T1573:;
	base[7]= listA(5,(V418),(V419),Cnil,(V420),V423);
	vs_top=(vs_base=base+7)+1;
	return;}}}
	}
}
/*	function definition for LOOP-LIST-STEP	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_reserve(VM76);
	{object V424;
	check_arg(1);
	V424=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V425;
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[215];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1578;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V425= vs_base[0];
	goto T1576;
	goto T1578;
T1578:;
	V425= VV[216];
	goto T1576;
T1576:;
	if(!(type_of((V425))==t_cons)){
	goto T1584;}
	if(!((car((V425)))==(VV[217]))){
	goto T1584;}
	base[1]= VV[218];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	base[1]= list(3,VV[219],(V425),(V424));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1584;
T1584:;
	if(!(type_of((V425))==t_cons)){
	goto T1593;}
	if(!((car((V425)))==(VV[83]))){
	goto T1593;}
	base[1]= list(2,cadr((V425)),(V424));
	base[2]= cadr((V425));
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1593;
T1593:;
	base[3]= VV[220];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V425);
	base[4]= VV[83];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	V426= vs_base[0];
	base[1]= list(3,VV[219],V426,(V424));
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
	{register object V427;
	object V428;
	object V429;
	check_arg(3);
	V427=(base[0]);
	V428=(base[1]);
	V429=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V430;
	object V431;
	object V432;
	base[3]= (V428);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1608;}
	V430= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1609;}
	V431= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1610;}
	V432= vs_base[0];
	vs_top=sup;
	goto T1611;
	goto T1608;
T1608:;
	V430= Cnil;
	goto T1609;
T1609:;
	V431= Cnil;
	goto T1610;
T1610:;
	V432= Cnil;
	goto T1611;
T1611:;
	{register object V433;
	V433= (V427);
	if(((V427))==Cnil){
	goto T1614;}
	if(!(type_of((V427))==t_symbol)){
	goto T1614;}
	base[3]= (V427);
	base[4]= (V430);
	base[5]= (V429);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	goto T1612;
	goto T1614;
T1614:;
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	V433= vs_base[0];
	base[3]= (V433);
	base[4]= (V430);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= (V427);
	base[4]= Cnil;
	base[5]= (V429);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	goto T1612;
T1612:;
	{object V434;
	object V435;
	base[3]= (V433);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk381)();
	if(vs_base>=vs_top){vs_top=sup;goto T1631;}
	V434= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1632;}
	V435= vs_base[0];
	vs_top=sup;
	goto T1633;
	goto T1631;
T1631:;
	V434= Cnil;
	goto T1632;
T1632:;
	V435= Cnil;
	goto T1633;
T1633:;
	{register object V436;
	object V437;
	base[4]= (((V427))==((V433))?Ct:Cnil);
	base[5]= (V433);
	base[6]= list(2,VV[221],(V433));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk331)();
	vs_top=sup;
	V436= vs_base[0];
	V437= (V436);
	if(((V431))==Cnil){
	goto T1639;}
	if(!(type_of((V432))==t_cons||((V432))==Cnil)){
	goto T1639;}
	V436= (((V432))==Cnil?Ct:Cnil);
	goto T1639;
T1639:;
	if(!(((V427))==((V433)))){
	goto T1646;}
	base[4]= Ct;
	base[5]= (V433);
	base[6]= (V434);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk331)();
	vs_top=sup;
	V438= vs_base[0];
	base[4]= list(8,Cnil,list(2,(V433),V438),(V437),Cnil,Cnil,Cnil,(V436),Cnil);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1646;
T1646:;
	{object V439;
	object V440;
	V439= list(2,(V427),(V433));
	V440= list(2,(V433),(V434));
	if(((((V436))==((V437))?Ct:Cnil))==Cnil){
	goto T1655;}
	V441= Cnil;
	goto T1654;
	goto T1655;
T1655:;
	V441= list(4,(V436),(V439),Cnil,(V440));
	goto T1654;
T1654:;
	base[4]= listA(5,(V437),(V439),Cnil,(V440),V441);
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	function definition for LOOP-FOR-IN	*/

static void L90()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_reserve(VM78);
	{object V442;
	object V443;
	object V444;
	check_arg(3);
	V442=(base[0]);
	V443=(base[1]);
	V444=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V445;
	object V446;
	object V447;
	base[3]= (V443);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1659;}
	V445= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1660;}
	V446= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1661;}
	V447= vs_base[0];
	vs_top=sup;
	goto T1662;
	goto T1659;
T1659:;
	V445= Cnil;
	goto T1660;
T1660:;
	V446= Cnil;
	goto T1661;
T1661:;
	V447= Cnil;
	goto T1662;
T1662:;
	{register object V448;
	base[3]= VV[222];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V448= vs_base[0];
	base[3]= (V442);
	base[4]= Cnil;
	base[5]= (V444);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	base[3]= (V448);
	base[4]= (V445);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	{object V449;
	object V450;
	base[3]= (V448);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk381)();
	if(vs_base>=vs_top){vs_top=sup;goto T1675;}
	V449= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1676;}
	V450= vs_base[0];
	vs_top=sup;
	goto T1677;
	goto T1675;
T1675:;
	V449= Cnil;
	goto T1676;
T1676:;
	V450= Cnil;
	goto T1677;
T1677:;
	{register object V451;
	object V452;
	object V453;
	object V454;
	V451= list(2,VV[223],(V448));
	V452= (V451);
	V453= list(2,(V442),list(2,VV[65],(V448)));
	V454= list(2,(V448),(V449));
	if(((V446))==Cnil){
	goto T1682;}
	if(!(type_of((V447))==t_cons||((V447))==Cnil)){
	goto T1682;}
	V451= (((V447))==Cnil?Ct:Cnil);
	goto T1682;
T1682:;
	if(((((V451))==((V452))?Ct:Cnil))==Cnil){
	goto T1689;}
	V455= Cnil;
	goto T1688;
	goto T1689;
T1689:;
	V455= list(4,(V451),(V453),Cnil,(V454));
	goto T1688;
T1688:;
	base[6]= listA(5,(V452),(V453),Cnil,(V454),V455);
	vs_top=(vs_base=base+6)+1;
	return;}}}}
	}
}
/*	function definition for MAKE-LOOP-PATH	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_reserve(VM79);
	{object V456;
	object V457;
	object V458;
	object V459;
	object V460;
	parse_key(vs_base,FALSE,FALSE,5,VV[226],VV[229],VV[230],VV[227],VV[228]);
	vs_top=sup;
	V456=(base[0]);
	V457=(base[1]);
	V458=(base[2]);
	V459=(base[3]);
	V460=(base[4]);
	base[10]= VV[224];
	base[11]= (V456);
	base[12]= (V457);
	base[13]= (V458);
	base[14]= (V459);
	base[15]= (V460);
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
	{object V461;
	object V462;
	register object V463;
	object V464;
	object V465;
	object V466;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,3,VV[229],VV[230],VV[228]);
	V461=(base[0]);
	V462=(base[1]);
	V463=(base[2]);
	vs_top=sup;
	V464=(base[3]);
	V465=(base[4]);
	V466=(base[5]);
	if(type_of((V461))==t_cons||((V461))==Cnil){
	goto T1697;}
	V461= make_cons((V461),Cnil);
	goto T1697;
T1697:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1703;
T1703:;
	base[11]= (V463);
	base[12]= VV[39];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk382)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1704;}
	bds_unwind1;
	bds_unwind1;
	goto T1701;
	goto T1704;
T1704:;
	base[11]= VV[47];
	base[12]= VV[48];
	base[13]= VV[225];
	base[14]= (V463);
	base[15]= VV[39];
	vs_top=(vs_base=base+11)+5;
	Lcerror();
	vs_top=sup;
	base[11]= symbol_value(VV[50]);
	base[12]= VV[51];
	base[13]= VV[225];
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
	V463= vs_base[0];
	base[11]= symbol_value(VV[50]);
	base[12]= VV[52];
	vs_top=(vs_base=base+11)+2;
	Lformat();
	vs_top=sup;
	goto T1703;
	goto T1701;
T1701:;
	{object V467;
	object V468;
	V467= structure_ref((V463),VV[39],3);
	base[9]= VV[226];
	{object V469;
	object V470= (V461);
	if(endp(V470)){
	base[10]= Cnil;
	goto T1732;}
	base[11]=V469=MMcons(Cnil,Cnil);
	goto T1733;
T1733:;
	(V469->c.c_car)= symbol_name((V470->c.c_car));
	V470=MMcdr(V470);
	if(endp(V470)){
	base[10]= base[11];
	goto T1732;}
	V469=MMcdr(V469)=MMcons(Cnil,Cnil);
	goto T1733;}
	goto T1732;
T1732:;
	base[11]= VV[227];
	base[12]= (V462);
	base[13]= VV[228];
	base[14]= (V466);
	base[15]= VV[229];
	{object V471;
	object V472= (V464);
	if(endp(V472)){
	base[16]= Cnil;
	goto T1740;}
	base[17]=V471=MMcons(Cnil,Cnil);
	goto T1741;
T1741:;
	if(!(type_of((V472->c.c_car))==t_cons||((V472->c.c_car))==Cnil)){
	goto T1744;}
	(V471->c.c_car)= (V472->c.c_car);
	goto T1742;
	goto T1744;
T1744:;
	(V471->c.c_car)= make_cons((V472->c.c_car),Cnil);
	goto T1742;
T1742:;
	V472=MMcdr(V472);
	if(endp(V472)){
	base[16]= base[17];
	goto T1740;}
	V471=MMcdr(V471)=MMcons(Cnil,Cnil);
	goto T1741;}
	goto T1740;
T1740:;
	base[17]= VV[230];
	base[18]= (V465);
	vs_top=(vs_base=base+9)+10;
	(void) (*Lnk383)();
	vs_top=sup;
	V468= vs_base[0];
	{register object V474;
	register object V475;
	V474= (V461);
	V475= car((V474));
	goto T1752;
T1752:;
	if(!(endp_prop((V474)))){
	goto T1753;}
	goto T1748;
	goto T1753;
T1753:;
	{register object V476;
	register object V477;
	register object V478;
	V476= symbol_name((V475));
	V477= (V467);
	V478= (V468);
	base[11]= (V476);
	base[12]= (V477);
	base[13]= (V478);
	vs_top=(vs_base=base+11)+3;
	siLhash_set();
	vs_top=sup;}
	V474= cdr((V474));
	V475= car((V474));
	goto T1752;}
	goto T1748;
T1748:;
	base[9]= (V468);
	vs_top=(vs_base=base+9)+1;
	return;}
	}
}
/*	function definition for LOOP-FOR-BEING	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_reserve(VM81);
	{object V479;
	object V480;
	object V481;
	check_arg(3);
	V479=(base[0]);
	V480=(base[1]);
	V481=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V482;
	object V483;
	object V484;
	object V485;
	object V486;
	V482= Cnil;
	V483= Cnil;
	V484= Cnil;
	V485= Cnil;
	V486= Cnil;
	base[3]= (V480);
	base[4]= VV[231];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1771;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V482= vs_base[0];
	goto T1769;
	goto T1771;
T1771:;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[155];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1777;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V484= Ct;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[232];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1784;}
	base[3]= VV[233];
	base[4]= car(symbol_value(VV[89]));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1784;
T1784:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V482= vs_base[0];
	V487= list(2,VV[234],(V480));
	V486= make_cons(/* INLINE-ARGS */V487,Cnil);
	goto T1769;
	goto T1777;
T1777:;
	base[3]= VV[235];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1769;
T1769:;
	if(type_of((V482))==t_symbol){
	goto T1798;}
	base[3]= VV[236];
	base[4]= (V482);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1796;
	goto T1798;
T1798:;
	base[3]= (V482);
	base[4]= structure_ref(symbol_value(VV[97]),VV[39],3);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk351)();
	vs_top=sup;
	V483= vs_base[0];
	if(((V483))!=Cnil){
	goto T1803;}
	base[3]= VV[237];
	base[4]= (V482);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1796;
	goto T1803;
T1803:;
	if(((V484))==Cnil){
	goto T1796;}
	if((structure_ref((V483),VV[224],2))!=Cnil){
	goto T1796;}
	base[3]= VV[238];
	base[4]= (V482);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1796;
T1796:;
	{object V488;
	object V489;
	object V490;
	V488= structure_ref((V483),VV[224],3);
	base[3]= structure_ref((V483),VV[224],1);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk384)();
	vs_top=sup;
	V491= vs_base[0];
	V489= nconc((V486),V491);
	V490= structure_ref((V483),VV[224],4);
	if(!(type_of((V488))==t_symbol)){
	goto T1823;}
	base[3]= (V488);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V488= vs_base[0];
	goto T1823;
T1823:;
	if(((V484))==Cnil){
	goto T1830;}
	base[3]= (V488);
	base[4]= (V479);
	base[5]= (V481);
	base[6]= (V489);
	base[7]= VV[239];
	base[8]= Ct;
	{object V492;
	V492= (V490);
	 vs_top=base+9;
	 while(!endp(V492))
	 {vs_push(car(V492));V492=cdr(V492);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V485= vs_base[0];
	goto T1828;
	goto T1830;
T1830:;
	base[3]= (V488);
	base[4]= (V479);
	base[5]= (V481);
	base[6]= (V489);
	{object V493;
	V493= (V490);
	 vs_top=base+7;
	 while(!endp(V493))
	 {vs_push(car(V493));V493=cdr(V493);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V485= vs_base[0];
	goto T1828;
T1828:;}
	if((symbol_value(VV[102]))==Cnil){
	goto T1844;}
	base[3]= VV[240];
	base[4]= symbol_value(VV[102]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1844;
T1844:;
	V495 = make_fixnum((long)length((V485)));
	{register object x= V495,V494= VV[241];
	while(!endp(V494))
	if(eql(x,V494->c.c_car)){
	goto T1849;
	}else V494=V494->c.c_cdr;}
	base[3]= VV[242];
	base[4]= (V482);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1849;
T1849:;
	{register object V496;
	register object V497;
	V496= car((V485));
	V497= Cnil;
	goto T1857;
T1857:;
	if(((V496))!=Cnil){
	goto T1858;}
	goto T1854;
	goto T1858;
T1858:;
	V497= car((V496));
	if(!(type_of((V497))!=t_cons)){
	goto T1864;}
	base[3]= (V497);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	goto T1862;
	goto T1864;
T1864:;
	base[3]= car((V497));
	base[4]= cadr((V497));
	base[5]= caddr((V497));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	goto T1862;
T1862:;
	V496= cdr((V496));
	goto T1857;}
	goto T1854;
T1854:;
	V498= reverse(cadr((V485)));
	setq(VV[106],nconc(/* INLINE-ARGS */V498,symbol_value(VV[106])));
	base[3]= cddr((V485));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for NAMED-VARIABLE	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_reserve(VM82);
	{object V499;
	check_arg(1);
	V499=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V500;
	base[1]= (V499);
	base[2]= symbol_value(VV[102]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk385)();
	vs_top=sup;
	V500= vs_base[0];
	if(((V500))!=Cnil){
	goto T1882;}
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1882;
T1882:;
	setq(VV[102],(VFUN_NARGS=2,(*(LnkLI386))((V500),symbol_value(VV[102]))));
	base[1]= cdr((V500));
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
	{object V501;
	object V502;
	object V503;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V501=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1890;}
	V502=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1891;}
	V503=(base[2]);
	vs_top=sup;
	goto T1892;
	goto T1890;
T1890:;
	V502= Cnil;
	goto T1891;
T1891:;
	V503= Cnil;
	goto T1892;
T1892:;
	base[3]=make_cclosure_new(LC96,Cnil,Cnil,Cdata);
	base[3]=MMcons(base[3],Cnil);
	{object V504;
	object V505;
	register object V506;
	register object V507;
	object V508;
	object V509;
	{object V510;
	object V511= (V503);
	if(endp(V511)){
	V508= Cnil;
	goto T1895;}
	base[4]=V510=MMcons(Cnil,Cnil);
	goto T1896;
T1896:;
	V513= car((V511->c.c_car));
	V514= (base[3]->c.c_car);
	base[5]= (VFUN_NARGS=4,(*(LnkLI368))(/* INLINE-ARGS */V513,(V501),VV[20],V514));
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V510->c.c_cdr)= vs_base[0];
	{object cdr_V510=MMcdr(V510);while(!endp(cdr_V510)) {cdr_V510=MMcdr(cdr_V510);V510=MMcdr(V510);}}
	V511=MMcdr(V511);
	if(endp(V511)){
	base[4]=base[4]->c.c_cdr;
	V508= base[4];
	goto T1895;}
	goto T1896;}
	goto T1895;
T1895:;
	{object V515;
	object V516= (V503);
	if(endp(V516)){
	V509= Cnil;
	goto T1900;}
	base[4]=V515=MMcons(Cnil,Cnil);
	goto T1901;
T1901:;
	(V515->c.c_car)= car((V516->c.c_car));
	V516=MMcdr(V516);
	if(endp(V516)){
	V509= base[4];
	goto T1900;}
	V515=MMcdr(V515)=MMcons(Cnil,Cnil);
	goto T1901;}
	goto T1900;
T1900:;
	V504= Cnil;
	V505= (V503);
	V506= Cnil;
	V507= Cnil;
	goto T1904;
T1904:;
	if((symbol_value(VV[89]))!=Cnil){
	goto T1905;}
	base[4]= nreverse((V505));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1905;
T1905:;
	V504= car(symbol_value(VV[89]));
	{register object V517;
	register object V518;
	V517= (V501);
	V518= car((V517));
	goto T1915;
T1915:;
	if(!(endp_prop((V517)))){
	goto T1916;}
	goto T1911;
	goto T1916;
T1916:;
	base[5]= (V504);
	base[6]= (V518);
	vs_top=(vs_base=base+5)+2;
	L96(base);
	vs_top=sup;
	V507= vs_base[0];
	if(((V507))==Cnil){
	goto T1920;}
	V506= (V518);
	goto T1911;
	goto T1920;
T1920:;
	V517= cdr((V517));
	V518= car((V517));
	goto T1915;}
	goto T1911;
T1911:;
	if(((V506))==Cnil){
	goto T1934;}
	{register object x= (V507),V519= (V508);
	while(!endp(V519))
	if(eql(x,V519->c.c_car)){
	goto T1938;
	}else V519=V519->c.c_cdr;
	goto T1936;}
	goto T1938;
T1938:;
	{register object x= (V507),V520= (V509);
	while(!endp(V520))
	if(eql(x,V520->c.c_car)){
	goto T1942;
	}else V520=V520->c.c_cdr;
	goto T1941;}
	goto T1942;
T1942:;
	base[4]= VV[243];
	goto T1939;
	goto T1941;
T1941:;
	base[4]= VV[244];
	goto T1939;
T1939:;
	base[5]= (V504);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1936;
T1936:;
	if(!(type_of((V506))==t_cons||((V506))==Cnil)){
	goto T1947;}
	V509= append((V506),(V509));
	goto T1945;
	goto T1947;
T1947:;
	V509= make_cons((V506),(V509));
	goto T1945;
T1945:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	{object V521;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V522= vs_base[0];
	V521= list(2,(V507),V522);
	V505= make_cons((V521),(V505));
	goto T1932;}
	goto T1934;
T1934:;
	if(((V502))==Cnil){
	goto T1954;}
	base[4]= (V504);
	base[5]= VV[245];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1954;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	{register object V523;
	object V524;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V523= vs_base[0];
	V524= Cnil;
	goto T1963;
T1963:;
	if(type_of((V523))!=t_cons){
	goto T1967;}
	if(type_of(cdr((V523)))!=t_cons){
	goto T1967;}
	if((cddr((V523)))!=Cnil){
	goto T1967;}
	if(!(type_of(car((V523)))==t_symbol)){
	goto T1967;}
	if((cadr((V523)))==Cnil){
	goto T1966;}
	if(type_of(cadr((V523)))==t_symbol){
	goto T1966;}
	goto T1967;
T1967:;
	base[4]= VV[246];
	base[5]= (V523);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1966;
T1966:;
	if((cadr((V523)))==Cnil){
	goto T1981;}
	base[4]= car((V523));
	base[5]= symbol_value(VV[102]);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk385)();
	vs_top=sup;
	V524= vs_base[0];
	if(((V524))==Cnil){
	goto T1985;}
	base[4]= VV[247];
	base[5]= car((V523));
	base[6]= cadr((V523));
	base[7]= cadr((V524));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1981;
	goto T1985;
T1985:;
	{object V525;
	V525= make_cons(car((V523)),cadr((V523)));
	setq(VV[102],make_cons((V525),symbol_value(VV[102])));}
	goto T1981;
T1981:;
	if((symbol_value(VV[89]))==Cnil){
	goto T1997;}
	if(!(type_of(car(symbol_value(VV[89])))==t_symbol)){
	goto T1996;}
	goto T1997;
T1997:;
	goto T1932;
	goto T1996;
T1996:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V523= vs_base[0];
	goto T1963;}
	goto T1954;
T1954:;
	base[4]= nreverse((V505));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1932;
T1932:;
	V506= Cnil;
	V507= Cnil;
	goto T1904;}
	}
}
/*	function definition for LOOP-SEQUENCER	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_reserve(VM84);
	{object V526;
	register object V527;
	object V528;
	object V529;
	object V530;
	object V531;
	object V532;
	object V533;
	object V534;
	object V535;
	check_arg(10);
	V526=(base[0]);
	V527=(base[1]);
	V528=(base[2]);
	V529=(base[3]);
	V530=(base[4]);
	V531=(base[5]);
	V532=(base[6]);
	V533=(base[7]);
	V534=(base[8]);
	V535=(base[9]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V536;
	object V537;
	object V538;
	object V539;
	object V540;
	object V541;
	object V542;
	register object V543;
	register object V544;
	object V545;
	object V546;
	object V547;
	object V548;
	object V549;
	object V550;{object V552;
	base[10]= (V527);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	V552= vs_base[0];
	if(V552==Cnil)goto T2010;
	V551= V552;
	goto T2009;
	goto T2010;
T2010:;}
	V551= small_fixnum(0);
	goto T2009;
T2009:;
	V540= one_plus(V551);
	V536= Cnil;
	V537= Cnil;
	V538= Cnil;
	V539= Cnil;
	V541= Ct;
	V542= Cnil;
	V543= Cnil;
	V544= Cnil;
	V545= Cnil;
	V546= Cnil;
	V547= Cnil;
	V548= Cnil;
	V549= Cnil;
	V550= Cnil;
	if(((V529))==Cnil){
	goto T2013;}
	base[10]= (V529);
	base[11]= Cnil;
	base[12]= (V530);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	goto T2013;
T2013:;
	{register object V553;
	register object V554;
	register object V555;
	object V556;
	V553= (V535);
	V554= Cnil;
	V555= Cnil;
	V556= Cnil;
	goto T2021;
T2021:;
	if(((V553))!=Cnil){
	goto T2022;}
	goto T2019;
	goto T2022;
T2022:;
	V554= caar((V553));
	V555= cadar((V553));
	{object V557= (V554);
	if((V557!= VV[387])
	&& (V557!= VV[234]))goto T2031;
	V537= Ct;
	base[10]= (V531);
	base[11]= (V555);
	base[12]= (V532);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T2030;
	goto T2031;
T2031:;
	if((V557!= VV[388])
	&& (V557!= VV[248])
	&& (V557!= VV[250]))goto T2037;
	V545= Ct;
	if(!(((V554))==(VV[248]))){
	goto T2042;}
	V543= VV[249];
	goto T2040;
	goto T2042;
T2042:;
	if(!(((V554))==(VV[250]))){
	goto T2040;}
	V543= VV[251];
	goto T2040;
T2040:;
	base[10]= (V555);
	base[11]= (V527);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk379)();
	if(vs_base<vs_top){
	V555= vs_base[0];
	vs_base++;
	}else{
	V555= Cnil;}
	if(vs_base<vs_top){
	V547= vs_base[0];
	vs_base++;
	}else{
	V547= Cnil;}
	if(vs_base<vs_top){
	V546= vs_base[0];
	}else{
	V546= Cnil;}
	vs_top=sup;
	base[10]= (V526);
	base[11]= (V555);
	base[12]= (V527);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	goto T2030;
	goto T2037;
T2037:;
	if((V557!= VV[252])
	&& (V557!= VV[253])
	&& (V557!= VV[254])
	&& (V557!= VV[255])
	&& (V557!= VV[256]))goto T2055;
	base[10]= (V554);
	base[11]= VV[252];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2058;}
	V543= VV[251];
	V544= VV[251];
	goto T2056;
	goto T2058;
T2058:;
	base[10]= (V554);
	base[11]= VV[253];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2065;}
	V544= Ct;
	goto T2056;
	goto T2065;
T2065:;
	base[10]= (V554);
	base[11]= VV[254];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2071;}
	V543= VV[249];
	V544= VV[249];
	goto T2056;
	goto T2071;
T2071:;
	base[10]= (V554);
	base[11]= VV[255];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2078;}
	V543= VV[249];
	goto T2056;
	goto T2078;
T2078:;
	base[10]= (V554);
	base[11]= VV[256];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2056;}
	V543= VV[251];
	goto T2056;
T2056:;
	V548= Ct;
	base[10]= (V555);
	base[11]= (V527);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk379)();
	if(vs_base<vs_top){
	V555= vs_base[0];
	vs_base++;
	}else{
	V555= Cnil;}
	if(vs_base<vs_top){
	V549= vs_base[0];
	vs_base++;
	}else{
	V549= Cnil;}
	if(vs_base<vs_top){
	V550= vs_base[0];
	}else{
	V550= Cnil;}
	vs_top=sup;
	if(((V549))==Cnil){
	goto T2096;}
	V536= list(2,VV[217],(V550));
	goto T2094;
	goto T2096;
T2096:;
	base[11]= VV[257];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[11]= (V555);
	base[12]= (V527);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	V536= vs_base[0];
	goto T2094;
T2094:;
	goto T2030;
	goto T2055;
T2055:;
	if((V557!= VV[215]))goto T2102;
	base[10]= (V555);
	base[11]= (V527);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk379)();
	if(vs_base<vs_top){
	V555= vs_base[0];
	vs_base++;
	}else{
	V555= Cnil;}
	if(vs_base<vs_top){
	V541= vs_base[0];
	vs_base++;
	}else{
	V541= Cnil;}
	if(vs_base<vs_top){
	V540= vs_base[0];
	}else{
	V540= Cnil;}
	vs_top=sup;
	if(((V541))!=Cnil){
	goto T2030;}
	base[11]= VV[258];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V540= vs_base[0];
	base[10]= (V540);
	base[11]= (V555);
	base[12]= (V527);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T2030;
	goto T2102;
T2102:;
	base[10]= VV[259];
	base[11]= (V554);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk347)();
	vs_top=sup;}
	goto T2030;
T2030:;
	if(((V556))==Cnil){
	goto T2116;}
	if(((V543))==Cnil){
	goto T2116;}
	if(((V543))==((V556))){
	goto T2116;}
	base[10]= VV[260];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2116;
T2116:;
	V556= (V543);
	V553= cdr((V553));
	goto T2021;}
	goto T2019;
T2019:;
	if(((V531))==Cnil){
	goto T2129;}
	if(((V537))!=Cnil){
	goto T2129;}
	base[10]= VV[261];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2129;
T2129:;
	if(((V545))!=Cnil){
	goto T2135;}
	base[10]= (V526);
	V547= Ct;{object V558;
	base[12]= (V527);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	V558= vs_base[0];
	if(V558==Cnil)goto T2143;
	V546= V558;
	goto T2142;
	goto T2143;
T2143:;}
	V546= small_fixnum(0);
	goto T2142;
T2142:;
	base[11]= (V546);
	base[12]= (V527);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk380)();
	vs_top=sup;
	goto T2135;
T2135:;
	{register object x= (V543),V559= VV[262];
	while(!endp(V559))
	if(eql(x,V559->c.c_car)){
	goto T2150;
	}else V559=V559->c.c_cdr;
	goto T2149;}
	goto T2150;
T2150:;
	if(((V548))!=Cnil){
	goto T2152;}
	if(((V534))==Cnil){
	goto T2151;}
	goto T2152;
T2152:;
	if(((V548))!=Cnil){
	goto T2156;}
	base[11]= VV[263];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V536= vs_base[0];
	base[10]= (V536);
	base[11]= Cnil;
	base[12]= (V527);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk359)();
	vs_top=sup;
	{object V560;
	V560= list(3,VV[11],(V536),(V534));
	setq(VV[106],make_cons((V560),symbol_value(VV[106])));}
	goto T2156;
T2156:;
	if(((V544))==Cnil){
	goto T2169;}
	V538= VV[34];
	goto T2167;
	goto T2169;
T2169:;
	V538= VV[213];
	goto T2167;
T2167:;
	goto T2151;
T2151:;
	if(!(eql((V540),small_fixnum(1)))){
	goto T2173;}
	V542= list(2,VV[180],(V526));
	goto T2171;
	goto T2173;
T2173:;
	V542= list(3,VV[181],(V526),(V540));
	goto T2171;
T2171:;
	goto T2147;
	goto T2149;
T2149:;
	if(((V545))!=Cnil){
	goto T2175;}
	if(((V534))!=Cnil){
	goto T2178;}
	base[10]= VV[264];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2178;
T2178:;
	{object V561;
	V561= list(3,VV[11],(V526),list(2,VV[199],(V534)));
	setq(VV[106],make_cons((V561),symbol_value(VV[106])));}
	goto T2175;
T2175:;
	if(((V534))==Cnil){
	goto T2184;}
	if(((V536))!=Cnil){
	goto T2184;}
	base[10]= (V527);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	V536= vs_base[0];
	V544= Ct;
	goto T2184;
T2184:;
	if(((V536))==Cnil){
	goto T2193;}
	if(((V544))==Cnil){
	goto T2198;}
	V538= VV[33];
	goto T2196;
	goto T2198;
T2198:;
	V538= VV[265];
	goto T2196;
T2196:;
	goto T2193;
T2193:;
	if(!(eql((V540),small_fixnum(1)))){
	goto T2202;}
	V542= list(2,VV[199],(V526));
	goto T2200;
	goto T2202;
T2202:;
	V542= list(3,VV[266],(V526),(V540));
	goto T2200;
T2200:;
	goto T2147;
T2147:;
	if(((V538))==Cnil){
	goto T2204;}
	base[10]= Ct;
	base[11]= (V526);
	base[12]= list(3,(V538),(V526),(V536));
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk331)();
	vs_top=sup;
	V539= vs_base[0];
	goto T2204;
T2204:;
	if(((V533))==Cnil){
	goto T2211;}
	base[10]= (V528);
	base[11]= (V526);
	base[12]= (V533);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk331)();
	vs_top=sup;
	V562= vs_base[0];
	V533= list(2,(V529),V562);
	goto T2211;
T2211:;
	{object V563;
	object V564;
	V563= (V539);
	V564= (V539);
	if(((V541))==Cnil){
	goto T2219;}
	if(((V547))==Cnil){
	goto T2219;}
	if(((V549))==Cnil){
	goto T2219;}
	base[10]= (V538);
	vs_top=(vs_base=base+10)+1;
	Lsymbol_function();
	vs_top=sup;
	V565= vs_base[0];
	V563= (
	V566 = V565,
	(type_of(V566) == t_sfun ?(*((V566)->sfn.sfn_self)):
	(fcall.fun=(V566),fcall.argd=2,fcalln))((V546),(V550)));
	if(((V563))==Cnil){
	goto T2219;}
	V564= Ct;
	goto T2219;
T2219:;
	base[10]= Ct;
	base[11]= (V526);
	base[12]= (V542);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk331)();
	vs_top=sup;
	V567= vs_base[0];
	base[10]= list(8,Cnil,list(2,(V526),V567),(V564),(V533),Cnil,Cnil,(V563),(V533));
	vs_top=(vs_base=base+10)+1;
	return;}}
	}
}
/*	function definition for LOOP-FOR-ARITHMETIC	*/

static void L98()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_reserve(VM85);
	{object V568;
	object V569;
	object V570;
	object V571;
	check_arg(4);
	V568=(base[0]);
	V569=(base[1]);
	V570=(base[2]);
	V571=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V568);
	base[6]= (V570);
	base[7]= symbol_value(VV[183]);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk375)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= Ct;
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;
	base[10]= Cnil;
	base[11]= Cnil;
	base[12]= Cnil;
	base[14]= VV[267];
	base[15]= Cnil;
	V572= list(2,(V571),(V569));
	base[16]= make_cons(/* INLINE-ARGS */V572,Cnil);
	vs_top=(vs_base=base+14)+3;
	(void) (*Lnk384)();
	vs_top=sup;
	base[13]= vs_base[0];
	vs_top=(vs_base=base+4)+10;
	(void) (*Lnk389)();
	return;
	}
}
/*	function definition for LOOP-SEQUENCE-ELEMENTS-PATH	*/

static void L99()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_reserve(VM86);
	{object V573;
	object V574;
	object V575;
	object V576;
	object V577;
	object V578;
	object V579;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,4,VV[390],VV[391],VV[392],VV[393]);
	V573=(base[0]);
	V574=(base[1]);
	V575=(base[2]);
	vs_top=sup;
	V576=(base[3]);
	V577=(base[4]);
	V578=(base[5]);
	V579=(base[6]);
	{object V580;
	object V581;
	base[11]= VV[268];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T2253;}
	V580= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2254;}
	V581= vs_base[0];
	vs_top=sup;
	goto T2255;
	goto T2253;
T2253:;
	V580= Cnil;
	goto T2254;
T2254:;
	V581= Cnil;
	goto T2255;
T2255:;
	{object V582;
	base[11]= VV[269];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk394)();
	vs_top=sup;
	V582= vs_base[0];
	base[11]= (V580);
	base[12]= VV[210];
	base[13]= (V581);
	base[14]= (V573);
	if((V574)!=Cnil){
	base[15]= (V574);
	goto T2263;}
	base[15]= (V579);
	goto T2263;
T2263:;
	base[16]= (V582);
	base[17]= (V578);
	base[18]= list(3,(V576),(V582),(V580));
	base[19]= list(2,(V577),(V582));
	base[20]= (V575);
	vs_top=(vs_base=base+11)+10;
	(void) (*Lnk389)();
	vs_top=sup;
	V583= vs_base[0];
	base[11]= listA(3,Cnil,Cnil,V583);
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
	{object V584;
	object V585;
	object V586;
	register object V587;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,1,VV[395]);
	V584=(base[0]);
	V585=(base[1]);
	V586=(base[2]);
	vs_top=sup;
	V587=(base[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T2271;
T2271:;
	base[7]= (V587);
	base[8]= VV[270];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2272;}
	bds_unwind1;
	bds_unwind1;
	goto T2269;
	goto T2272;
T2272:;
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[271];
	base[10]= (V587);
	base[11]= VV[270];
	vs_top=(vs_base=base+7)+5;
	Lcerror();
	vs_top=sup;
	base[7]= symbol_value(VV[50]);
	base[8]= VV[51];
	base[9]= VV[271];
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
	V587= vs_base[0];
	base[7]= symbol_value(VV[50]);
	base[8]= VV[52];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	goto T2271;
	goto T2269;
T2269:;
	if((cdr((V586)))!=Cnil){
	goto T2298;}
	{register object x= caar((V586)),V588= VV[272];
	while(!endp(V588))
	if(eql(x,V588->c.c_car)){
	goto T2299;
	}else V588=V588->c.c_cdr;}
	goto T2298;
T2298:;
	base[5]= VV[273];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2297;
	goto T2299;
T2299:;
	if(((V586))!=Cnil){
	goto T2297;}
	base[5]= VV[274];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2297;
T2297:;
	{object V589;
	object V590;
	object V591;
	register object V592;
	base[5]= VV[275];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V589= vs_base[0];
	base[5]= VV[276];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V590= vs_base[0];
	V591= Cnil;
	V592= Cnil;
	{object V593;
	object V594;
	if(!(((V587))==(VV[277]))){
	goto T2314;}
	base[5]= VV[278];
	goto T2312;
	goto T2314;
T2314:;
	base[5]= VV[277];
	goto T2312;
T2312:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T2316;}
	V593= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2317;}
	V594= vs_base[0];
	vs_top=sup;
	goto T2318;
	goto T2316;
T2316:;
	V593= Cnil;
	goto T2317;
T2317:;
	V594= Cnil;
	goto T2318;
T2318:;
	V594= Ct;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V591= vs_base[0];
	{register object V595;
	register object V596;
	register object V597;
	V598= list(3,(V584),Cnil,(V585));
	V599= list(2,(V589),cadar((V586)));
	if((V594)==Cnil){
	V600= Cnil;
	goto T2324;}
	if((V593)==Cnil){
	V600= Cnil;
	goto T2324;}
	V601= list(2,(V593),Cnil);
	V600= make_cons(/* INLINE-ARGS */V601,Cnil);
	goto T2324;
T2324:;
	V597= listA(3,/* INLINE-ARGS */V598,/* INLINE-ARGS */V599,V600);
	V595= Cnil;
	V596= Cnil;
	if(!(((V587))==(VV[277]))){
	goto T2327;}
	V595= (V584);
	if((V594)==Cnil){
	V596= Cnil;
	goto T2331;}
	V596= (V593);
	goto T2331;
T2331:;
	goto T2325;
	goto T2327;
T2327:;
	if((V594)==Cnil){
	V595= Cnil;
	goto T2333;}
	V595= (V593);
	goto T2333;
T2333:;
	V596= (V584);
	goto T2325;
T2325:;
	{object V602;
	V602= list(2,VV[279],list(2,(V590),(V589)));
	setq(VV[107],make_cons((V602),symbol_value(VV[107])));}
	if(!(type_of((V595))==t_cons)){
	goto T2338;}{object V603;
	V603= (V595);
	base[5]= VV[280];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V595= vs_base[0];
	V592= listA(3,V603,(V595),(V592));}
	{object V604;
	V604= list(2,(V595),Cnil);
	V597= make_cons((V604),(V597));}
	goto T2338;
T2338:;
	if(!(type_of((V596))==t_cons)){
	goto T2347;}{object V605;
	V605= (V596);
	base[5]= VV[281];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V596= vs_base[0];
	V592= listA(3,V605,(V596),(V592));}
	{object V606;
	V606= list(2,(V596),Cnil);
	V597= make_cons((V606),(V597));}
	goto T2347;
T2347:;
	V607= list(3,(V591),(V595),(V596));
	base[5]= list(6,(V597),Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V607,make_cons((V590),Cnil))),(V592));
	vs_top=(vs_base=base+5)+1;
	return;}}}
	}
}
/*	function definition for LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_reserve(VM88);
	{object V608;
	object V609;
	register object V610;
	object V611;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,1,VV[396]);
	V608=(base[0]);
	V609=(base[1]);
	V610=(base[2]);
	vs_top=sup;
	V611=(base[3]);
	if((cdr((V610)))!=Cnil){
	goto T2357;}
	{register object x= caar((V610)),V612= VV[282];
	while(!endp(V612))
	if(eql(x,V612->c.c_car)){
	goto T2358;
	}else V612=V612->c.c_cdr;}
	goto T2357;
T2357:;
	base[5]= VV[283];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2356;
	goto T2358;
T2358:;
	if(((V610))!=Cnil){
	goto T2356;}
	base[5]= VV[284];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2356;
T2356:;
	if(type_of((V608))==t_symbol){
	goto T2366;}
	base[5]= VV[285];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2366;
T2366:;
	{object V613;
	object V614;
	base[5]= VV[286];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V613= vs_base[0];
	base[5]= VV[287];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk327)();
	vs_top=sup;
	V614= vs_base[0];
	{object V615;
	V615= list(2,VV[288],listA(3,(V614),(V613),(V611)));
	setq(VV[107],make_cons((V615),symbol_value(VV[107])));}
	V616= list(3,(V608),Cnil,(V609));
	V617= list(2,/* INLINE-ARGS */V616,list(2,(V613),cadar((V610))));
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V618= vs_base[0];
	V619= list(2,V618,(V608));
	base[5]= list(6,/* INLINE-ARGS */V617,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V619,make_cons((V614),Cnil))),Cnil);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for MAKE-ANSI-LOOP-UNIVERSE	*/

static void L102()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_reserve(VM89);
	{object V620;
	check_arg(1);
	V620=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V621;
	base[1]= VV[53];
	base[3]= VV[289];
	base[4]= VV[290];
	base[5]= VV[291];
	base[6]= VV[292];
	base[7]= VV[293];
	base[8]= VV[294];
	base[9]= VV[295];
	base[10]= VV[296];
	base[11]= VV[297];
	base[12]= VV[298];
	base[13]= VV[299];
	base[14]= VV[300];
	base[15]= list(2,VV[179],list(4,VV[301],VV[179],symbol_value(VV[183]),VV[210]));
	base[16]= list(2,VV[302],list(4,VV[301],VV[179],symbol_value(VV[183]),VV[210]));
	base[17]= VV[303];
	vs_top=(vs_base=base+3)+15;
	LlistA();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= VV[54];
	base[4]= VV[304];
	base[5]= VV[55];
	base[6]= VV[305];
	base[7]= VV[60];
	base[8]= VV[306];
	base[9]= VV[59];
	base[10]= Cnil;
	base[11]= VV[57];
	if(((V620))==Cnil){
	goto T2407;}
	base[12]= VV[307];
	goto T2405;
	goto T2407;
T2407:;
	base[12]= Ct;
	goto T2405;
T2405:;
	vs_top=(vs_base=base+1)+12;
	(void) (*Lnk397)();
	vs_top=sup;
	V621= vs_base[0];
	base[1]= VV[308];
	base[2]= VV[309];
	base[3]= (V621);
	base[4]= VV[229];
	base[5]= VV[310];
	base[6]= VV[230];
	base[7]= Cnil;
	base[8]= VV[228];
	base[9]= VV[311];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk398)();
	vs_top=sup;
	base[1]= VV[312];
	base[2]= VV[309];
	base[3]= (V621);
	base[4]= VV[229];
	base[5]= VV[313];
	base[6]= VV[230];
	base[7]= Cnil;
	base[8]= VV[228];
	base[9]= VV[314];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk398)();
	vs_top=sup;
	base[1]= VV[315];
	base[2]= VV[316];
	base[3]= (V621);
	base[4]= VV[229];
	base[5]= VV[317];
	base[6]= VV[230];
	base[7]= Cnil;
	base[8]= VV[228];
	base[9]= VV[318];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk398)();
	vs_top=sup;
	base[1]= VV[319];
	base[2]= VV[316];
	base[3]= (V621);
	base[4]= VV[229];
	base[5]= VV[320];
	base[6]= VV[230];
	base[7]= Cnil;
	base[8]= VV[228];
	base[9]= VV[321];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk398)();
	vs_top=sup;
	base[1]= VV[322];
	base[2]= VV[316];
	base[3]= (V621);
	base[4]= VV[229];
	base[5]= VV[323];
	base[6]= VV[230];
	base[7]= Cnil;
	base[8]= VV[228];
	base[9]= VV[324];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk398)();
	vs_top=sup;
	base[1]= (V621);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-STANDARD-EXPANSION	*/

static void L103()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_reserve(VM90);
	{register object V622;
	object V623;
	object V624;
	check_arg(3);
	V622=(base[0]);
	V623=(base[1]);
	V624=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V622))==Cnil){
	goto T2460;}
	if(!(type_of(car((V622)))==t_symbol)){
	goto T2460;}
	base[3]= (V622);
	base[4]= (V623);
	base[5]= (V624);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk399)();
	return;
	goto T2460;
T2460:;
	{object V625;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V625= vs_base[0];
	V626= make_cons(VV[14],(V622));
	base[3]= list(3,VV[124],Cnil,list(4,VV[73],(V625),/* INLINE-ARGS */V626,list(2,VV[82],(V625))));
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
	{object V627=base[0]->c.c_cdr;
	base[2]= V627;}
	base[3]= base[2];
	base[4]= base[1];
	base[5]= symbol_value(VV[325]);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk400)();
	return;
}
/*	local function IN-GROUP-P	*/

static void LC96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_reserve(VM92);
	{object V628;
	object V629;
	check_arg(2);
	V628=(base[0]);
	V629=(base[1]);
	vs_top=sup;
	base[2]= (V628);
	base[3]= (V629);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	V630= vs_base[0];
	base[2]= car(V630);
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
	{object V631;
	object V632;
	check_arg(2);
	V631=(base[0]);
	V632=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V631);
	base[3]= (V632);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	V633= vs_base[0];
	base[2]= car(V633);
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
	{object V634;
	check_arg(1);
	V634=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V634))!=Cnil){
	goto T2478;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2478;
T2478:;
	{register object x= Ct,V635= (V634);
	while(!endp(V635))
	if(eql(x,V635->c.c_car)){
	goto T2482;
	}else V635=V635->c.c_cdr;
	goto T2481;}
	goto T2482;
T2482:;
	base[1]= VV[192];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2481;
T2481:;
	V634= nreverse((V634));
	if((cdr((V634)))!=Cnil){
	goto T2485;}
	V636= car((V634));
	goto T2483;
	goto T2485;
T2485:;
	V636= make_cons(VV[35],(V634));
	goto T2483;
T2483:;
	base[1]= list(3,VV[8],V636,VV[193]);
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
	{object V637;
	check_arg(1);
	V637=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V638;
	V638= Cnil;
	goto T2489;
T2489:;
	{register object V639;
	register object V640;
	V639= car(symbol_value(VV[89]));
	bds_bind(VV[109],Cnil);
	V640= Cnil;
	if(type_of((V639))==t_symbol){
	goto T2495;}
	base[2]= VV[152];
	base[3]= (V639);
	base[4]= (V637);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	bds_unwind1;
	goto T2492;
	goto T2495;
T2495:;
	setq(VV[88],symbol_value(VV[89]));
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	base[2]= car(symbol_value(VV[89]));
	base[3]= VV[153];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2503;}
	if(base0[3]!=Cnil){
	V641= base0[3];
	goto T2509;}
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	base0[3]= vs_base[0];
	V641= base0[3];
	goto T2509;
T2509:;
	setq(VV[89],make_cons(V641,cdr(symbol_value(VV[89]))));
	goto T2503;
T2503:;
	base[2]= (V639);
	base[3]= structure_ref(symbol_value(VV[97]),VV[39],0);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk351)();
	vs_top=sup;
	V640= vs_base[0];
	if(((V640))==Cnil){
	goto T2511;}
	base[3]= car((V640));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V642;
	V642= cdr((V640));
	 vs_top=base+3;
	 while(!endp(V642))
	 {vs_push(car(V642));V642=cdr(V642);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[109]->s.s_dbind))==Cnil)){
	goto T2512;}
	goto T2511;
T2511:;
	base[2]= VV[154];
	base[3]= (V639);
	base[4]= (V637);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	bds_unwind1;
	goto T2492;
	goto T2512;
T2512:;
	base[2]= (VV[109]->s.s_dbind);
	base[3]= (V638);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V638= vs_base[0];
	bds_unwind1;}
	goto T2492;
T2492:;
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[155];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk357)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2531;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	goto T2529;
	goto T2531;
T2531:;
	if((cdr((V638)))==Cnil){
	goto T2536;}
	V643= nreverse((V638));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V643);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2536;
T2536:;
	base[1]= car((V638));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2529;
T2529:;
	goto T2489;}
	}
}
/*	local function REPLICATE	*/

static void L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_reserve(VM96);
	{object V644;
	object V645;
	check_arg(2);
	V644=(base[0]);
	V645=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V645))!=t_cons)){
	goto T2541;}
	base[2]= (V644);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2541;
T2541:;
	base[2]= (V644);
	base[3]= car((V645));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V646= vs_base[0];
	base[2]= (V644);
	base[3]= cdr((V645));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V647= vs_base[0];
	base[2]= make_cons(V646,V647);
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
	{register object V648;
	register object V649;
	check_arg(2);
	V648=(base[0]);
	V649=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V648))!=Cnil){
	goto T2550;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2550;
T2550:;
	if(!(type_of((V648))!=t_cons)){
	goto T2553;}{object V650;
	base[3]= (V648);
	base[4]= structure_ref(symbol_value(VV[97]),VV[39],4);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V650= vs_base[0];
	if(V650==Cnil)goto T2556;
	base[2]= V650;
	goto T2555;
	goto T2556;
T2556:;}{object V651;
	base[3]= symbol_name((V648));
	base[4]= structure_ref(symbol_value(VV[97]),VV[39],5);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V651= vs_base[0];
	if(V651==Cnil)goto T2560;
	base[2]= V651;
	goto T2555;
	goto T2560;
T2560:;}
	base[3]= VV[140];
	base[4]= base0[1];
	base[5]= (V648);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T2555;
T2555:;
	base[3]= (V649);
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	return;
	goto T2553;
T2553:;
	if(!(type_of((V649))!=t_cons)){
	goto T2569;}
	base[2]= VV[141];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk347)();
	return;
	goto T2569;
T2569:;
	base[2]= car((V648));
	base[3]= car((V649));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V652= vs_base[0];
	base[2]= cdr((V648));
	base[3]= cdr((V649));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V653= vs_base[0];
	base[2]= make_cons(V652,V653);
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
	{object V654;
	check_arg(1);
	V654=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V655;
	V655= 0;
	{register object V656;
	object V657;
	V656= (V654);
	V657= car((V656));
	goto T2584;
T2584:;
	if(!(endp_prop((V656)))){
	goto T2585;}
	base[2]= make_fixnum(V655);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2585;
T2585:;
	V658 = make_fixnum(V655);
	base[2]= (V657);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk342)();
	vs_top=sup;
	V659= vs_base[0];
	V655= fix(number_plus(V658,V659));
	V656= cdr((V656));
	V657= car((V656));
	goto T2584;}}
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
	{object V660;
	V662= nreverse(base0[7]);
	base[0]= append(base0[2],/* INLINE-ARGS */V662);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V661= vs_base[0];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V664= vs_base[0];
	base[0]= append(base0[4],V664);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V663= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V665= vs_base[0];
	V666= make_cons(VV[76],V665);
	V667= append(V663,/* INLINE-ARGS */V666);
	V668= make_cons(VV[74],/* INLINE-ARGS */V667);
	V669= append(V661,/* INLINE-ARGS */V668);
	V660= make_cons(VV[73],/* INLINE-ARGS */V669);
	if((base0[9])==Cnil){
	goto T2610;}
	V670= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V670,Cnil),(V660));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T2610;
T2610:;
	base[0]= (V660);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static void L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_reserve(VM100);
	{object V671;
	check_arg(1);
	V671=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((cdr((V671)))!=Cnil){
	goto T2613;}
	base[1]= car((V671));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2613;
T2613:;
	base[1]= make_cons(VV[14],(V671));
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
	{object V672;
	check_arg(1);
	V672=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V673;
	V673= Cnil;
	{register object V674;
	register object V675;
	V674= (V672);
	V675= car((V674));
	goto T2619;
T2619:;
	if(!(endp_prop((V674)))){
	goto T2620;}
	goto T2615;
	goto T2620;
T2620:;
	if(((V675))==Cnil){
	goto T2624;}
	{register object V676;
	V676= (V675);
	V673= make_cons((V676),(V673));}
	if(!(type_of((V675))==t_cons)){
	goto T2624;}
	{register object x= car((V675)),V677= VV[72];
	while(!endp(V677))
	if(eql(x,V677->c.c_car)){
	goto T2633;
	}else V677=V677->c.c_cdr;
	goto T2624;}
	goto T2633;
T2633:;
	goto T2615;
	goto T2624;
T2624:;
	V674= cdr((V674));
	V675= car((V674));
	goto T2619;}
	goto T2615;
T2615:;
	base[1]= nreverse((V673));
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
	{object V678;
	check_arg(1);
	V678=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V679;
	V679= (V678);
	goto T2640;
T2640:;
	if(type_of((V679))==t_cons){
	goto T2641;}
	base[1]= (V679);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2641;
T2641:;
	{register object V680;
	V680= car((V679));
	V679= cdr((V679));
	base[1]= (V680);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2645;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2645;
T2645:;
	goto T2640;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static void L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_reserve(VM103);
	{register object V681;
	register object V682;
	object V683;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V681=(base[0]);
	V682=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2654;}
	V683=(base[2]);
	vs_top=sup;
	goto T2655;
	goto T2654;
T2654:;
	V683= Cnil;
	goto T2655;
T2655:;
	{register object V684;
	V684= (V681);
	if(!(((V684))==Cnil)){
	goto T2658;}
	if(!(type_of((V682))==t_cons)){
	goto T2661;}
	if(!((car((V682)))==(VV[62]))){
	goto T2664;}
	{object V685;
	object V686= cdr((V682));
	if(endp(V686)){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V685=MMcons(Cnil,Cnil);
	goto T2666;
T2666:;
	{register object V687;
	V687= (V686->c.c_car);
	if(type_of((V687))==t_cons){
	goto T2668;}
	(V685->c.c_cdr)= Cnil;
	goto T2667;
	goto T2668;
T2668:;
	if(!((((car((V687)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2672;}
	goto T2670;
	goto T2672;
T2672:;
	if(!(((type_of(cadr((V687)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2674;}
	goto T2670;
	goto T2674;
T2674:;
	base[4]= (V687);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V687= vs_base[0];
	if(((type_of((V687))==t_symbol?Ct:Cnil))==Cnil){
	goto T2670;}
	(V685->c.c_cdr)= Cnil;
	goto T2667;
	goto T2670;
T2670:;
	(V685->c.c_cdr)= make_cons((V687),Cnil);}
	goto T2667;
T2667:;
	{object cdr_V685=MMcdr(V685);while(!endp(cdr_V685)) {cdr_V685=MMcdr(cdr_V685);V685=MMcdr(V685);}}
	V686=MMcdr(V686);
	if(endp(V686)){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2666;}
	goto T2664;
T2664:;
	base[3]= make_cons((V682),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2661;
T2661:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2658;
T2658:;
	if(!(type_of((V684))==t_cons)){
	goto T2680;}
	{object V688;
	object V689;
	object V690;
	object V691;
	V688= car((V681));
	V689= cdr((V681));
	base[7]= (V688);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V690= vs_base[0];
	base[7]= (V689);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V691= vs_base[0];
	if(((V690))!=Cnil){
	goto T2688;}
	if(((V691))==Cnil){
	goto T2689;}
	goto T2688;
T2688:;
	if(((V691))==Cnil){
	goto T2694;}
	{register object V693;
	object V694;
	if((V683)!=Cnil){
	V693= (V683);
	goto T2696;}
	V693= symbol_value(VV[66]);
	goto T2696;
T2696:;
	base[9]= (V688);
	base[10]= list(2,VV[65],(V693));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V695= vs_base[0];
	V696= list(3,VV[11],(V693),list(2,VV[10],(V693)));
	base[9]= (V689);
	base[10]= (V693);
	base[11]= (V693);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V697= vs_base[0];
	V698= make_cons(/* INLINE-ARGS */V696,V697);
	V694= append(V695,/* INLINE-ARGS */V698);
	if((V683)==Cnil){
	goto T2706;}
	if(((V693))==((V682))){
	goto T2710;}
	V700= list(3,VV[11],(V693),(V682));
	V699= make_cons(/* INLINE-ARGS */V700,Cnil);
	goto T2708;
	goto T2710;
T2710:;
	V699= Cnil;
	goto T2708;
T2708:;
	base[9]= append(V699,(V694));
	vs_top=(vs_base=base+9)+1;
	return;
	goto T2706;
T2706:;
	V701= list(2,(V693),(V682));
	V702= listA(3,VV[29],make_cons(/* INLINE-ARGS */V701,Cnil),(V694));
	base[9]= make_cons(/* INLINE-ARGS */V702,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
	goto T2694;
T2694:;
	base[7]= (V688);
	base[8]= list(2,VV[65],(V682));
	base[9]= (V683);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
	goto T2689;
T2689:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
	goto T2680;
T2680:;
	if(((V681))==((V682))){
	goto T2716;}
	V703= list(3,VV[11],(V681),(V682));
	base[3]= make_cons(/* INLINE-ARGS */V703,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2716;
T2716:;
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
	{object V704;
	check_arg(1);
	V704=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V705;
	object V706;
	V705= make_fixnum((long)length((V704)));
	base[3]= VV[61];
	if(!(number_compare((V705),small_fixnum(10))<0)){
	goto T2723;}
	base[4]= small_fixnum(10);
	goto T2721;
	goto T2723;
T2723:;
	base[4]= (V705);
	goto T2721;
T2721:;
	base[5]= VV[20];
	base[6]= symbol_function(VV[401]);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V706= vs_base[0];
	{register object V707;
	register object V708;
	V707= (V704);
	V708= car((V707));
	goto T2731;
T2731:;
	if(!(endp_prop((V707)))){
	goto T2732;}
	goto T2727;
	goto T2732;
T2732:;
	{object V709;
	object V711;
	V709= symbol_name(car((V708)));
	V711= cadr((V708));
	base[6]= (V709);
	base[7]= V706;
	base[8]= (V711);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V707= cdr((V707));
	V708= car((V707));
	goto T2731;}
	goto T2727;
T2727:;
	base[3]= (V706);
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
	{register object V712;
	register long V713;
	check_arg(2);
	V712=(base[0]);
	V713=fix(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	goto T2748;
T2748:;
	if(!((V713)<=(4))){
	goto T2749;}switch(V713){
	case 1:
	goto T2755;
T2755:;
	V714= VV[10];
	goto T2753;
	case 2:
	goto T2756;
T2756:;
	V714= VV[15];
	goto T2753;
	case 3:
	goto T2757;
T2757:;
	V714= VV[16];
	goto T2753;
	case 4:
	goto T2758;
T2758:;
	V714= VV[17];
	goto T2753;
	default:
	goto T2759;
T2759:;
	V714= Cnil;
	goto T2753;}
	V714= Cnil;
	goto T2753;
T2753:;
	V712= list(2,V714,(V712));
	base[2]= (V712);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2749;
T2749:;
	V712= list(2,VV[17],(V712));
	V713= (long)(V713)-(4);
	goto T2748;
	}
}
static void LnkT400(){ call_or_link(VV[400],(void **)(void *)&Lnk400);} /* LOOP-STANDARD-EXPANSION */
static void LnkT399(){ call_or_link(VV[399],(void **)(void *)&Lnk399);} /* LOOP-TRANSLATE */
static void LnkT398(){ call_or_link(VV[398],(void **)(void *)&Lnk398);} /* ADD-LOOP-PATH */
static void LnkT397(){ call_or_link(VV[397],(void **)(void *)&Lnk397);} /* MAKE-STANDARD-LOOP-UNIVERSE */
static void LnkT394(){ call_or_link(VV[394],(void **)(void *)&Lnk394);} /* NAMED-VARIABLE */
static void LnkT389(){ call_or_link(VV[389],(void **)(void *)&Lnk389);} /* LOOP-SEQUENCER */
static object  LnkTLI386(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[386],(void **)(void *)&LnkLI386,first,ap);va_end(ap);return V1;} /* DELETE */
static void LnkT385(){ call_or_link(VV[385],(void **)(void *)&Lnk385);} /* LOOP-TASSOC */
static void LnkT384(){ call_or_link(VV[384],(void **)(void *)&Lnk384);} /* LOOP-COLLECT-PREPOSITIONAL-PHRASES */
static void LnkT383(){ call_or_link(VV[383],(void **)(void *)&Lnk383);} /* MAKE-LOOP-PATH */
static void LnkT382(){ call_or_link(VV[382],(void **)(void *)&Lnk382);} /* STRUCTURE-SUBTYPE-P */
static void LnkT381(){ call_or_link(VV[381],(void **)(void *)&Lnk381);} /* LOOP-LIST-STEP */
static void LnkT380(){ call_or_link(VV[380],(void **)(void *)&Lnk380);} /* LOOP-MAKE-ITERATION-VARIABLE */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* LOOP-CONSTANT-FOLD-IF-POSSIBLE */
static void LnkT378(){ call_or_link(VV[378],(void **)(void *)&Lnk378);} /* LOOP-WHEN-IT-VARIABLE */
static void LnkT377(){ call_or_link(VV[377],(void **)(void *)&Lnk377);} /* LOOP-NOTE-MINIMAX-OPERATION */
static void LnkT376(){ call_or_link(VV[376],(void **)(void *)&Lnk376);} /* MAKE-LOOP-MINIMAX */
static void LnkT375(){ call_or_link(VV[375],(void **)(void *)&Lnk375);} /* LOOP-CHECK-DATA-TYPE */
static void LnkT372(){ call_or_link(VV[372],(void **)(void *)&Lnk372);} /* LOOP-EMIT-FINAL-VALUE */
static void LnkT371(){ call_or_link(VV[371],(void **)(void *)&Lnk371);} /* LOOP-GET-COLLECTION-INFO */
static void LnkT370(){ call_or_link(VV[370],(void **)(void *)&Lnk370);} /* MAKE-LOOP-COLLECTOR */
static object  LnkTLI368(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[368],(void **)(void *)&LnkLI368,first,ap);va_end(ap);return V1;} /* FIND */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* LOOP-OPTIONAL-TYPE */
static void LnkT364(){ call_or_link(VV[364],(void **)(void *)&Lnk364);} /* LOOP-EMIT-BODY */
static void LnkT363(){ call_or_link(VV[363],(void **)(void *)&Lnk363);} /* LOOP-GET-PROGN */
static void LnkT362(){ call_or_link(VV[362],(void **)(void *)&Lnk362);} /* LOOP-DISALLOW-CONDITIONAL */
static void LnkT361(){ call_or_link(VV[361],(void **)(void *)&Lnk361);} /* LOOP-GET-FORM */
static void LnkT360(){ call_or_link(VV[360],(void **)(void *)&Lnk360);} /* LOOP-CONSTANTP */
static void LnkT359(){ call_or_link(VV[359],(void **)(void *)&Lnk359);} /* LOOP-MAKE-VARIABLE */
static void LnkT358(){ call_or_link(VV[358],(void **)(void *)&Lnk358);} /* LOOP-DECLARE-VARIABLE */
static void LnkT357(){ call_or_link(VV[357],(void **)(void *)&Lnk357);} /* LOOP-TEQUAL */
static object  LnkTLI356(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[356],(void **)(void *)&LnkLI356,2,first,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT355(){ call_or_link(VV[355],(void **)(void *)&Lnk355);} /* LOOP-CONSTRUCT-RETURN */
static void LnkT354(){ call_or_link(VV[354],(void **)(void *)&Lnk354);} /* LOOP-PSEUDO-BODY */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* LOOP-TMEMBER */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* LOOP-HACK-ITERATION */
static void LnkT351(){ call_or_link(VV[351],(void **)(void *)&Lnk351);} /* LOOP-LOOKUP-KEYWORD */
static void LnkT350(){ call_or_link(VV[350],(void **)(void *)&Lnk350);} /* LOOP-POP-SOURCE */
static void LnkT349(){ call_or_link(VV[349],(void **)(void *)&Lnk349);} /* LOOP-BIND-BLOCK */
static void LnkT348(){ call_or_link(VV[348],(void **)(void *)&Lnk348);} /* LOOP-ITERATION-DRIVER */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* LOOP-ERROR */
static void LnkT326(){ call_or_link(VV[326],(void **)(void *)&Lnk326);} /* SUBTYPEP */
static object  LnkTLI346(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[346],(void **)(void *)&LnkLI346,first,ap);va_end(ap);return V1;} /* WARN */
static void LnkT345(){ call_or_link(VV[345],(void **)(void *)&Lnk345);} /* SPECIFIC-ERROR */
static void LnkT344(){ call_or_link(VV[344],(void **)(void *)&Lnk344);} /* LOOP-CONTEXT */
static void LnkT343(){ call_or_link(VV[343],(void **)(void *)&Lnk343);} /* SPECIAL-OPERATOR-P */
static void LnkT342(){ call_or_link(VV[342],(void **)(void *)&Lnk342);} /* ESTIMATE-CODE-SIZE-1 */
static void LnkT341(){ call_or_link(VV[341],(void **)(void *)&Lnk341);} /* DESTRUCTURING-SIZE */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* ESTIMATE-CODE-SIZE */
static void LnkT340(){ call_or_link(VV[340],(void **)(void *)&Lnk340);} /* LOOP-CODE-DUPLICATION-THRESHOLD */
static void LnkT339(){ call_or_link(VV[339],(void **)(void *)&Lnk339);} /* LOOP-OPTIMIZATION-QUANTITIES */
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* LOOP-WARN */
static void LnkT337(){ call_or_link(VV[337],(void **)(void *)&Lnk337);} /* LOOP-MAKE-DESETQ */
static void LnkT336(){ call_or_link(VV[336],(void **)(void *)&Lnk336);} /* LOOP-MAKE-PSETQ */
static void LnkT335(){ call_or_link(VV[335],(void **)(void *)&Lnk335);} /* MAKE-LOOP-UNIVERSE */
static void LnkT333(){ call_or_link(VV[333],(void **)(void *)&Lnk333);} /* TYPEP */
static void LnkT331(){ call_or_link(VV[331],(void **)(void *)&Lnk331);} /* HIDE-VARIABLE-REFERENCE */
static void LnkT329(){ call_or_link(VV[329],(void **)(void *)&Lnk329);} /* LOOP-TYPED-INIT */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* MAKE-LOOP-MINIMAX-INTERNAL */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* LOOP-GENTEMP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

