
#include <cmpinclude.h>
#include "loop.h"
init_loop(){do_init(VV);}
/*	macro definition for LOOP-COPYLIST*	*/

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
	if(!endp(V1))invalid_macro_call();}
	base[3]= list(2,VV[0],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for LOOP-GENTEMP	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V2;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V2=(base[0]);
	vs_top=sup;
	goto T2;
T1:;
	V2= VV[1];
T2:;
	if((symbol_value(VV[2]))==Cnil){
	goto T5;}
	base[1]= coerce_to_string((V2));
	vs_top=(vs_base=base+1)+1;
	Lgentemp();
	return;
T5:;
	vs_base=vs_top;
	Lgensym();
	return;
	}
}
/*	function definition for LOOP-OPTIMIZATION-QUANTITIES	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V3;
	check_arg(1);
	V3=(base[0]);
	vs_top=sup;
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

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V4;
	object V5;
	check_arg(2);
	V4=(base[0]);
	V5=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V5);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for HIDE-VARIABLE-REFERENCE	*/

static L5()
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
TTL:;
	base[3]= (V8);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	macro definition for WITH-LOOP-LIST-COLLECTION-HEAD	*/

static L6()
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
T14:;
	V13= list(2,base[2],VV[4]);
	base[6]= listA(3,VV[3],listA(3,/* INLINE-ARGS */V13,list(2,base[3],base[2]),(V11)),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for LOOP-COLLECT-RPLACD	*/

static L7()
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
	V18 = make_fixnum(length(cdr(base[5])));
	V17= one_minus(V18);
	goto T20;
T24:;
	{register object x= car(base[5]),V19= VV[6];
	while(!endp(V19))
	if(eql(x,V19->c.c_car)){
	goto T28;
	}else V19=V19->c.c_cdr;
	goto T20;}
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
T32:;
	V22 = make_fixnum(length(cdr(base[5])));
	V17= number_minus(V22,small_fixnum(2));
T20:;
	{object V23;
	if(((V17))!=Cnil){
	goto T38;}
	V24= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	V23= list(3,VV[8],/* INLINE-ARGS */V24,list(3,VV[11],base[3],list(2,VV[12],list(2,VV[10],base[3]))));
	goto T36;
T38:;
	if(!(number_compare((V17),small_fixnum(0))<0)){
	goto T41;}
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;
T41:;
	if(!(number_compare((V17),small_fixnum(0))==0)){
	goto T44;}
	V23= list(3,VV[13],base[3],list(3,VV[11],base[3],base[5]));
	goto T36;
T44:;
	base[6]= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	base[7]= (V17);
	vs_top=(vs_base=base+6)+2;
	L8(base);
	vs_top=sup;
	V25= vs_base[0];
	V23= list(3,VV[11],base[3],V25);
T36:;
	if((base[4])==Cnil){
	goto T49;}
	V23= list(3,VV[14],(V23),list(3,VV[11],base[4],list(2,VV[10],base[2])));
T49:;
	base[6]= (V23);
	vs_top=(vs_base=base+6)+1;
	return;}}
}
/*	macro definition for LOOP-COLLECT-ANSWER	*/

static L9()
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

static L10()
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

static L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V33;
	object V34;
	check_arg(2);
	V33=(base[0]);
	V34=(base[1]);
	vs_top=sup;
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
T76:;
	base[10]= VV[26];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[9]= vs_base[0];
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

static L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V37;
	register object V38;
	check_arg(2);
	V37=(base[0]);
	V38=(base[1]);
	vs_top=sup;
TTL:;
	{object V40;
	base[3]= (V37);
	base[4]= structure_ref(V38,VV[18],4);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V40= vs_base[0];
	(void)(structure_set(V38,VV[18],4,(V40)));}
	V41= structure_ref((V38),VV[18],4);
	if((cdr(/* INLINE-ARGS */V41))==Cnil){
	goto T87;}
	if((structure_ref((V38),VV[18],3))!=Cnil){
	goto T87;}
	base[2]= VV[26];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V42= vs_base[0];
	(void)(structure_set((V38),VV[18],3,V42));
T87:;
	base[2]= (V37);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	macro definition for WITH-MINIMAX-VALUE	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	base[3]= V43;}
	{object V44;
	object V45;
	object V46;
	register object V47;
	register object V48;
	object V49;
	object V50;
	base[4]= structure_ref(base[2],VV[18],1);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V44= vs_base[0];
	V51= structure_ref(base[2],VV[18],4);
	V45= car(/* INLINE-ARGS */V51);
	V46= structure_ref(base[2],VV[18],5);
	V47= structure_ref(base[2],VV[18],0);
	V48= structure_ref(base[2],VV[18],2);
	V49= structure_ref(base[2],VV[18],3);
	V50= structure_ref(base[2],VV[18],1);
	if(((V49))==Cnil){
	goto T103;}
	V52= list(2,(V47),(V44));
	V53= list(2,(V48),(V44));
	V54= list(3,/* INLINE-ARGS */V52,/* INLINE-ARGS */V53,list(2,(V49),Cnil));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V54,list(2,VV[30],list(4,VV[31],(V50),(V47),(V48))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
T103:;
	if(!(((V45))==(VV[32]))){
	goto T107;}
	V55= car((V46));
	goto T105;
T107:;
	V55= cadr((V46));
T105:;
	V56= list(2,(V47),V55);
	V57= list(2,/* INLINE-ARGS */V56,list(2,(V48),(V44)));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V57,list(2,VV[30],list(4,VV[31],(V50),(V47),(V48))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-ACCUMULATE-MINIMAX-VALUE	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V58=base[0]->c.c_cdr;
	if(endp(V58))invalid_macro_call();
	base[2]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	if(endp(V58))invalid_macro_call();
	base[3]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	if(endp(V58))invalid_macro_call();
	base[4]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	if(!endp(V58))invalid_macro_call();}
	{object V59;
	object V60;
	register object V61;
	object V62;
	V59= structure_ref(base[2],VV[18],0);
	V60= structure_ref(base[2],VV[18],2);
	V61= structure_ref(base[2],VV[18],3);
	base[9]= Ct;
	base[10]= structure_ref(base[2],VV[18],0);
	{object V64= base[3];
	if((V64!= VV[32]))goto T117;
	V63= VV[33];
	goto T116;
T117:;
	if((V64!= VV[327]))goto T118;
	V63= VV[34];
	goto T116;
T118:;
	FEerror("The ECASE key value ~s is illegal.",1,V64);}
T116:;
	base[11]= list(3,V63,(V60),(V59));
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V62= vs_base[0];
	V65= list(3,VV[11],(V60),base[4]);
	if(((V61))==Cnil){
	goto T121;}
	V66= list(3,VV[35],list(2,VV[36],(V61)),(V62));
	goto T119;
T121:;
	V66= (V62);
T119:;
	if((V61)==Cnil){
	V67= Cnil;
	goto T123;}
	V67= list(2,(V61),Ct);
T123:;
	V68= list(2,(V59),(V60));
	V69= append(V67,/* INLINE-ARGS */V68);
	base[9]= list(3,VV[14],/* INLINE-ARGS */V65,list(3,VV[8],V66,make_cons(VV[11],/* INLINE-ARGS */V69)));
	vs_top=(vs_base=base+9)+1;
	return;}
}
/*	function definition for LOOP-TEQUAL	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V70;
	object V71;
	check_arg(2);
	V70=(base[0]);
	V71=(base[1]);
	vs_top=sup;
TTL:;
	if(type_of((V70))==t_symbol){
	goto T124;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T124:;
	base[2]= (V70);
	base[3]= (V71);
	vs_top=(vs_base=base+2)+2;
	Lstring_eq();
	return;
	}
}
/*	function definition for LOOP-TASSOC	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V72;
	object V73;
	check_arg(2);
	V72=(base[0]);
	V73=(base[1]);
	vs_top=sup;
TTL:;
	if(type_of((V72))==t_symbol){
	goto T128;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T128:;
	base[2]= (V72);
	base[3]= (V73);
	base[4]= VV[20];
	base[5]= symbol_function(VV[329]);
	vs_top=(vs_base=base+2)+4;
	Lassoc();
	return;
	}
}
/*	function definition for LOOP-TMEMBER	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V74;
	object V75;
	check_arg(2);
	V74=(base[0]);
	V75=(base[1]);
	vs_top=sup;
TTL:;
	if(type_of((V74))==t_symbol){
	goto T134;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T134:;
	base[2]= (V74);
	base[3]= (V75);
	base[4]= VV[20];
	base[5]= symbol_function(VV[329]);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	return;
	}
}
/*	function definition for LOOP-LOOKUP-KEYWORD	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V76;
	object V77;
	check_arg(2);
	V76=(base[0]);
	V77=(base[1]);
	vs_top=sup;
TTL:;
	if(type_of((V76))==t_symbol){
	goto T140;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T140:;
	base[3]= symbol_name((V76));
	base[4]= (V77);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	macro definition for LOOP-STORE-TABLE-DATA	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V78=base[0]->c.c_cdr;
	if(endp(V78))invalid_macro_call();
	base[2]= (V78->c.c_car);
	V78=V78->c.c_cdr;
	if(endp(V78))invalid_macro_call();
	base[3]= (V78->c.c_car);
	V78=V78->c.c_cdr;
	if(endp(V78))invalid_macro_call();
	base[4]= (V78->c.c_car);
	V78=V78->c.c_cdr;
	if(!endp(V78))invalid_macro_call();}
	base[5]= list(3,VV[9],list(3,VV[37],list(2,VV[38],base[2]),base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for MAKE-LOOP-UNIVERSE	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V79;
	object V80;
	object V81;
	object V82;
	object V83;
	object V84;
	object V85;
	object V86;
	parse_key(vs_base,FALSE,FALSE,8,VV[53],VV[55],VV[54],VV[56],VV[60],VV[59],VV[57],VV[58]);
	vs_top=sup;
	V79=(base[0]);
	V80=(base[1]);
	V81=(base[2]);
	V82=(base[3]);
	V83=(base[4]);
	V84=(base[5]);
	V85=(base[6]);
	V86=(base[7]);
	base[16]= VV[39];
	base[17]= (V79);
	base[18]= (V80);
	base[19]= (V81);
	base[20]= (V82);
	base[21]= (V83);
	base[22]= (V84);
	base[23]= (V85);
	base[24]= (V86);
	vs_top=(vs_base=base+16)+9;
	siLmake_structure();
	return;
	}
}
/*	function definition for PRINT-LOOP-UNIVERSE	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V87;
	object V88;
	object V89;
	check_arg(3);
	V87=(base[0]);
	V88=(base[1]);
	V89=(base[2]);
	vs_top=sup;
TTL:;
	{object V90;
	V92= structure_ref((V87),VV[39],6);
	{object V91= /* INLINE-ARGS */V92;
	if((V91!= Cnil))goto T155;
	V90= VV[40];
	goto T154;
T155:;
	if((V91!= Ct))goto T156;
	V90= VV[41];
	goto T154;
T156:;
	if((V91!= VV[304]))goto T157;
	V90= VV[42];
	goto T154;
T157:;
	V90= structure_ref((V87),VV[39],6);}
T154:;
	base[3]= (V88);
	base[4]= VV[43];
	base[6]= (V87);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V90);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;}
	}
}
/*	function definition for MAKE-STANDARD-LOOP-UNIVERSE	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	bds_check;
	{object V93;
	object V94;
	object V95;
	object V96;
	object V97;
	object V98;
	register object V99;
	parse_key(vs_base,FALSE,FALSE,7,VV[53],VV[54],VV[55],VV[56],VV[59],VV[60],VV[57]);
	vs_top=sup;
	V93=(base[0]);
	V94=(base[1]);
	V95=(base[2]);
	V96=(base[3]);
	V97=(base[4]);
	V98=(base[5]);
	V99=(base[6]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
T165:;
	base[16]= (V99);
	base[17]= VV[46];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T166;}
	bds_unwind1;
	bds_unwind1;
	goto T163;
T166:;
	base[16]= VV[47];
	base[17]= VV[48];
	base[18]= VV[49];
	base[19]= (V99);
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
	V99= vs_base[0];
	base[16]= symbol_value(VV[50]);
	base[17]= VV[52];
	vs_top=(vs_base=base+16)+2;
	Lformat();
	vs_top=sup;
	goto T165;
T163:;
	base[14]= VV[53];
	base[16]= (V93);
	vs_top=(vs_base=base+16)+1;
	L23(base);
	vs_top=sup;
	base[15]= vs_base[0];
	base[16]= VV[54];
	base[18]= (V94);
	vs_top=(vs_base=base+18)+1;
	L23(base);
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= VV[55];
	base[20]= (V95);
	vs_top=(vs_base=base+20)+1;
	L23(base);
	vs_top=sup;
	base[19]= vs_base[0];
	base[20]= VV[56];
	base[22]= (V96);
	vs_top=(vs_base=base+22)+1;
	L23(base);
	vs_top=sup;
	base[21]= vs_base[0];
	base[22]= VV[57];
	base[23]= (V99);
	base[24]= VV[58];
	base[25]= (((((V99))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	base[26]= VV[59];
	base[28]= (V97);
	vs_top=(vs_base=base+28)+1;
	L23(base);
	vs_top=sup;
	base[27]= vs_base[0];
	base[28]= VV[60];
	{object V100;
	object V101;
	V100= make_fixnum(length((V98)));
	base[32]= VV[61];
	if(!(number_compare((V100),small_fixnum(10))<0)){
	goto T217;}
	base[33]= small_fixnum(10);
	goto T215;
T217:;
	base[33]= (V100);
T215:;
	base[34]= VV[20];
	base[35]= symbol_function(VV[331]);
	vs_top=(vs_base=base+32)+4;
	Lmake_hash_table();
	vs_top=sup;
	V101= vs_base[0];
	{register object V102;
	register object V103;
	V102= (V98);
	V103= car((V102));
T225:;
	if(!(endp((V102)))){
	goto T226;}
	goto T221;
T226:;
	if(!(type_of((V103))!=t_cons)){
	goto T232;}
	base[33]= V103;
	base[34]= V101;
	base[35]= V103;
	vs_top=(vs_base=base+33)+3;
	siLhash_set();
	vs_top=sup;
	goto T230;
T232:;
	{object V107;
	object V109;
	V107= car((V103));
	V109= cadr((V103));
	base[35]= (V107);
	base[36]= V101;
	base[37]= (V109);
	vs_top=(vs_base=base+35)+3;
	siLhash_set();
	vs_top=sup;}
T230:;
	V102= cdr((V102));
	V103= car((V102));
	goto T225;}
T221:;
	base[29]= (V101);}
	vs_top=(vs_base=base+14)+16;
	(void) (*Lnk332)();
	return;
	}
}
/*	function definition for LOOP-MAKE-PSETQ	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{register object V110;
	check_arg(1);
	V110=(base[0]);
	vs_top=sup;
TTL:;
	if((V110)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	V111= car((V110));
	if((cddr((V110)))!=Cnil){
	goto T250;}
	V112= cadr((V110));
	goto T248;
T250:;
	V113= cadr((V110));
	base[2]= cddr((V110));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V114= vs_base[0];
	V112= list(3,VV[62],/* INLINE-ARGS */V113,V114);
T248:;
	base[1]= list(2,/* INLINE-ARGS */V111,V112);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	return;
	}
}
/*	function definition for LOOP-MAKE-DESETQ	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V115;
	check_arg(1);
	V115=(base[0]);
	vs_top=sup;
TTL:;
	if(((V115))!=Cnil){
	goto T255;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T255:;
	if((symbol_value(VV[63]))==Cnil){
	goto T259;}
	V116= cadr(symbol_value(VV[63]));
	goto T257;
T259:;
	V116= VV[64];
T257:;
	base[1]= make_cons(V116,(V115));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	macro definition for LOOP-REALLY-DESETQ	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(2);
	vs_top=sup;
	{object V117=base[0]->c.c_cdr;
	base[2]= V117;}
	{register object V118;
	V118= Cnil;
T262:;
	if((base[2])!=Cnil){
	goto T263;}
	if((cdr((V118)))!=Cnil){
	goto T267;}
	base[3]= car((V118));
	vs_top=(vs_base=base+3)+1;
	return;
T267:;
	V119= nreverse((V118));
	base[3]= make_cons(VV[14],/* INLINE-ARGS */V119);
	vs_top=(vs_base=base+3)+1;
	return;
T263:;
	{register object V120;
	V120= car(base[2]);
	base[2]= cdr(base[2]);
	base[4]= (V120);}
	{register object V121;
	V121= car(base[2]);
	base[2]= cdr(base[2]);
	base[5]= (V121);}
	vs_top=(vs_base=base+4)+2;
	L28(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	Lrevappend();
	vs_top=sup;
	V118= vs_base[0];
	goto T262;}
}
/*	function definition for LOOP-CONSTANT-FOLD-IF-POSSIBLE	*/

static L29()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V122;
	object V123;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V122=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T284;}
	V123=(base[1]);
	vs_top=sup;
	goto T285;
T284:;
	V123= Cnil;
T285:;
	{register object V125;
	register object V126;
	V125= Cnil;
	V126= Cnil;
	base[2]= V122;
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	V125= vs_base[0];
	if(((V125))==Cnil){
	goto T287;}
	base[2]= V122;
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V126= vs_base[0];
T287:;
	if(((V125))==Cnil){
	goto T294;}
	if(((V123))==Cnil){
	goto T294;}
	base[2]= (V126);
	base[3]= (V123);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T294;}
	base[2]= VV[67];
	base[3]= (V122);
	base[4]= (V126);
	base[5]= (V123);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk335)();
	vs_top=sup;
	V125= Cnil;
	V126= Cnil;
T294:;
	base[2]= V122;
	base[3]= (V125);
	base[4]= (V126);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	function definition for LOOP-CONSTANTP	*/

static L30()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V127;
	check_arg(1);
	V127=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V127);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	return;
	}
}
/*	function definition for LOOP-CODE-DUPLICATION-THRESHOLD	*/

static L31()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V128;
	check_arg(1);
	V128=(base[0]);
	vs_top=sup;
TTL:;
	{object V129;
	object V130;
	base[1]= (V128);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk336)();
	if(vs_base>=vs_top){vs_top=sup;goto T317;}
	V129= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T318;}
	V130= vs_base[0];
	vs_top=sup;
	goto T319;
T317:;
	V129= Cnil;
T318:;
	V130= Cnil;
T319:;
	V131= number_minus((V129),(V130));
	V132= number_times(/* INLINE-ARGS */V131,small_fixnum(10));
	base[1]= number_plus(small_fixnum(40),/* INLINE-ARGS */V132);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	macro definition for LOOP-BODY	*/

static L32()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	check_arg(2);
	vs_top=sup;
	{object V133=base[0]->c.c_cdr;
	if(endp(V133))invalid_macro_call();
	base[2]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	if(endp(V133))invalid_macro_call();
	base[3]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	if(endp(V133))invalid_macro_call();
	base[4]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	if(endp(V133))invalid_macro_call();
	base[5]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	if(endp(V133))invalid_macro_call();
	base[6]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	if(!endp(V133))invalid_macro_call();
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;}
	if((length(base[3]))==(length(base[5]))){
	goto T323;}
	base[10]= VV[68];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
T323:;
	base[7]= reverse(base[3]);
	base[8]= reverse(base[5]);
	if((symbol_value(VV[69]))!=Cnil){
	goto T332;}
	if((base[7])!=Cnil){
	goto T331;}
T332:;
	vs_base=vs_top;
	L35(base);
	return;
T331:;
	{register int V134;
	base[10]= base[1];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk337)();
	vs_top=sup;
	V134= fix(vs_base[0]);
T339:;
T344:;
	if((base[7])==Cnil){
	goto T346;}
	if(equal(car(base[7]),car(base[8]))){
	goto T345;}
T346:;
	goto T342;
T345:;
	{register object V136;
	V136= car(base[7]);
	base[7]= cdr(base[7]);
	V135= (V136);}
	base[4]= make_cons(V135,base[4]);
	{register object V137;
	V137= car(base[8]);
	base[8]= cdr(base[8]);}
	goto T344;
T342:;
	if((base[7])!=Cnil){
	goto T363;}
	vs_base=vs_top;
	L35(base);
	return;
T363:;
	{register object V138;
	register object V139;
	register object V140;
	register object V141;
	register object V142;
	V138= base[7];
	V139= base[8];
	V140= Cnil;
	V141= small_fixnum(0);
	V142= Cnil;
T368:;
	if(((V138))!=Cnil){
	goto T369;}
	vs_base=vs_top;
	L35(base);
	return;
T369:;
	if(equal(car((V138)),car((V139)))){
	goto T375;}
	V140= (V138);
	V141= small_fixnum(0);
	goto T373;
T375:;
	base[10]= car((V138));
	base[11]= base[1];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V142= vs_base[0];
	if(((V142))==Cnil){
	goto T380;}
	V141= number_plus((V141),(V142));
	V143 = make_fixnum(V134);
	if(!(number_compare((V141),V143)>0)){
	goto T373;}
T380:;
	{register object V144;
	register object V145;
	V144= Cnil;
	V145= Cnil;
T391:;
	{register object V147;
	V147= car(base[7]);
	base[7]= cdr(base[7]);
	V146= (V147);}
	V145= make_cons(V146,(V145));
	{register object V149;
	V149= car(base[8]);
	base[8]= cdr(base[8]);
	V148= (V149);}
	V144= make_cons(V148,(V144));
	if(!((base[7])==(cdr((V140))))){
	goto T406;}
	goto T389;
T406:;
	goto T391;
T389:;
	if((base[9])!=Cnil){
	goto T411;}
	base[9]= symbol_value(VV[70]);
	V150= list(3,VV[11],base[9],Ct);
	V145= make_cons(/* INLINE-ARGS */V150,(V145));
T411:;
	base[11]= (V144);
	vs_top=(vs_base=base+11)+1;
	L33(base);
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+10)+1;
	L34(base);
	vs_top=sup;
	V151= vs_base[0];
	base[11]= (V145);
	vs_top=(vs_base=base+11)+1;
	L33(base);
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+10)+1;
	L34(base);
	vs_top=sup;
	V152= vs_base[0];
	V153= list(4,VV[71],base[9],V151,V152);
	base[4]= make_cons(/* INLINE-ARGS */V153,base[4]);}
T425:;
	{register object V154;
	V154= car(base[8]);
	base[8]= cdr(base[8]);}
	{register object V156;
	V156= car(base[7]);
	base[7]= cdr(base[7]);
	V155= (V156);}
	base[4]= make_cons(V155,base[4]);
	if(!((base[7])==(cdr((V138))))){
	goto T438;}
	goto T423;
T438:;
	goto T425;
T423:;
	goto T366;
T373:;
	V138= cdr((V138));
	V139= cdr((V139));
	goto T368;}
T366:;
	goto T339;}
}
/*	function definition for DUPLICATABLE-CODE-P	*/

static L36()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	{object V157;
	object V158;
	check_arg(2);
	V157=(base[0]);
	V158=(base[1]);
	vs_top=sup;
TTL:;
	if(((V157))!=Cnil){
	goto T450;}
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+2)+1;
	return;
T450:;
	{int V159;
	base[2]= (V157);
	base[3]= (V158);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V159= fix(vs_base[0]);
	base[2]= make_fixnum(V159);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DESTRUCTURING-SIZE	*/

static L37()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{object V160;
	check_arg(1);
	V160=(base[0]);
	vs_top=sup;
TTL:;
	{register object V161;
	register object V162;
	V161= (V160);
	V162= small_fixnum(0);
T456:;
	if(!(type_of((V161))!=t_cons)){
	goto T457;}
	if(((V161))!=Cnil){
	goto T462;}
	V163= small_fixnum(0);
	goto T460;
T462:;
	V163= small_fixnum(1);
T460:;
	base[1]= number_plus((V162),V163);
	vs_top=(vs_base=base+1)+1;
	return;
T457:;
	{object V164;
	V164= cdr((V161));
	base[1]= car((V161));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	V165= vs_base[0];
	V162= number_plus(V165,(V162));
	V161= (V164);}
	goto T456;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE	*/

static L38()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM31; VC31
	vs_reserve(VM31);
	{VOL object V166;
	VOL object V167;
	check_arg(2);
	V166=(base[0]);
	V167=(base[1]);
	vs_top=sup;
TTL:;
	frs_push(FRS_CATCH,VV[77]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]= (V166);
	base[3]= (V167);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	frs_pop();
	return;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE-1	*/

static L39()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{object V168;
	check_arg(2);
	V168=(base[0]);
	vs_top=sup;
TTL:;
	base[2]= (V168);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T475;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
T475:;
	if(!(type_of((V168))==t_symbol)){
	goto T479;}
	{object V169;
	object V170;
	base[2]= (V168);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T484;}
	V169= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T485;}
	V170= vs_base[0];
	vs_top=sup;
	goto T486;
T484:;
	V169= Cnil;
T485:;
	V170= Cnil;
T486:;
	if(((V170))==Cnil){
	goto T488;}
	V168= (V169);
	goto TTL;
T488:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;}
T479:;
	if(!(type_of((V168))!=t_cons)){
	goto T494;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
T494:;
	if(!(type_of(car((V168)))==t_symbol)){
	goto T497;}
	{object V171;
	object V172;
	register int V173;
	V171= car((V168));
	V173= 0;
	V172= Cnil;
	V172= get((V171),VV[77],Cnil);
	if(((V172))==Cnil){
	goto T502;}
	if(!(type_of(V172)==t_fixnum)){
	goto T506;}
	base[2]= cdr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V175= fix(vs_base[0]);
	base[2]= make_fixnum((fix((V172)))+(V175));
	vs_top=(vs_base=base+2)+1;
	return;
T506:;
	base[2]= (V168);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V172));
	return;
T502:;
	{register object x= (V171),V176= symbol_value(VV[78]);
	while(!endp(V176))
	if(type_of(V176->c.c_car)==t_cons &&eql(x,V176->c.c_car->c.c_car)){
	V172= (V176->c.c_car);
	goto T515;
	}else V176=V176->c.c_cdr;
	V172= Cnil;}
T515:;
	if(((V172))==Cnil){
	goto T513;}
	{int V177= fix(cadr((V172)));
	base[2]= cdr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V178= fix(vs_base[0]);
	base[2]= make_fixnum((/* INLINE-ARGS */V177)+(V178));
	vs_top=(vs_base=base+2)+1;
	return;}
T513:;
	if(!(((V171))==(VV[79]))){
	goto T519;}
	{register object V179;
	object V180;
	V179= cdr((V168));
	V180= car((V179));
T524:;
	if(!(endp((V179)))){
	goto T525;}
	base[4]= make_fixnum(V173);
	vs_top=(vs_base=base+4)+1;
	return;
T525:;
	V181 = make_fixnum(V173);
	base[4]= (V180);
	vs_top=(vs_base=base+4)+1;
	L40(base);
	vs_top=sup;
	V182= vs_base[0];
	V173= fix(number_plus(V181,V182));
	V173= (V173)+(1);
	V179= cdr((V179));
	V180= car((V179));
	goto T524;}
T519:;
	if(!(((V171))==(VV[80]))){
	goto T541;}
	{register object V183;
	V183= cdr((V168));
T545:;
	if(((V183))!=Cnil){
	goto T546;}
	base[2]= make_fixnum(V173);
	vs_top=(vs_base=base+2)+1;
	return;
T546:;
	base[2]= make_fixnum(V173);
	base[4]= car((V183));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= cadr((V183));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V173= fix(vs_base[0]);
	V183= cdr((V183));
	goto T545;}
T541:;
	{register object x= (V171),V184= VV[81];
	while(!endp(V184))
	if(eql(x,V184->c.c_car)){
	goto T563;
	}else V184=V184->c.c_cdr;
	goto T562;}
T563:;
	{register object V185;
	V185= cdr((V168));
T566:;
	if(((V185))!=Cnil){
	goto T567;}
	base[2]= make_fixnum(V173);
	vs_top=(vs_base=base+2)+1;
	return;
T567:;
	base[2]= make_fixnum(V173);
	base[4]= cadr((V185));
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V173= fix(vs_base[0]);
	V185= cdr((V185));
	goto T566;}
T562:;
	if(!(((V171))==(VV[82]))){
	goto T582;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
T582:;
	if(!(((V171))==(VV[83]))){
	goto T585;}
	if(type_of(cadr((V168)))==t_symbol){
	goto T587;}
	if(!(type_of(cadr((V168)))==t_cons)){
	goto T588;}
	if(!((caadr((V168)))==(VV[9]))){
	goto T588;}
T587:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
T588:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[84]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[84]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[84]);}
T585:;
	if(!(((V171))==(VV[85]))){
	goto T596;}
	{int V186= length(cadr((V168)));
	base[2]= cddr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V187= fix(vs_base[0]);
	base[2]= make_fixnum((/* INLINE-ARGS */V186)+(V187));
	vs_top=(vs_base=base+2)+1;
	return;}
T596:;
	if(!(((V171))==(VV[86]))){
	goto T601;}
	base[2]= caddr((V168));
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	V188= vs_base[0];
	base[2]= one_plus(V188);
	vs_top=(vs_base=base+2)+1;
	return;
T601:;
	base[2]= (V171);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T606;}
	{register object x= (V171),V189= symbol_value(VV[87]);
	while(!endp(V189))
	if(eql(x,V189->c.c_car)){
	goto T611;
	}else V189=V189->c.c_cdr;
	goto T607;}
T611:;
T606:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
T607:;
	{object V190;
	object V191;
	base[2]= (V168);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T616;}
	V190= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T617;}
	V191= vs_base[0];
	vs_top=sup;
	goto T618;
T616:;
	V190= Cnil;
T617:;
	V191= Cnil;
T618:;
	if(((V191))==Cnil){
	goto T620;}
	V168= (V190);
	goto TTL;
T620:;
	base[2]= cdr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V192= fix(vs_base[0]);
	base[2]= make_fixnum((3)+(V192));
	vs_top=(vs_base=base+2)+1;
	return;}}
T497:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
	}
}
/*	function definition for LOOP-CONTEXT	*/

static L41()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V193;
	register object V194;
	V193= symbol_value(VV[88]);
	V194= Cnil;
T629:;
	if(!(((V193))==(cdr(symbol_value(VV[89]))))){
	goto T630;}
	base[0]= nreverse((V194));
	vs_top=(vs_base=base+0)+1;
	return;
T630:;
	{object V195;
	V195= cdr((V193));
	V194= make_cons(car((V193)),(V194));
	V193= (V195);}
	goto T629;}
}
/*	function definition for LOOP-ERROR	*/

static L42()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V196;
	object V197;
	if(vs_top-vs_base<1) too_few_arguments();
	V196=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V197=(base[1]);
	vs_top=sup;
	base[2]= VV[90];
	base[3]= (V196);
	base[4]= (V197);
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

static L43()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_reserve(VM35);
	{object V198;
	object V199;
	if(vs_top-vs_base<1) too_few_arguments();
	V198=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V199=(base[1]);
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk341)();
	vs_top=sup;
	V200= vs_base[0];
	base[2]= (VFUN_NARGS=4,(*(LnkLI342))(VV[91],(V198),(V199),V200));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for LOOP-CHECK-DATA-TYPE	*/

static L44()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{register object V201;
	register object V202;
	object V203;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V201=(base[0]);
	V202=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T643;}
	V203=(base[2]);
	vs_top=sup;
	goto T644;
T643:;
	V203= (V202);
T644:;
	if(((V201))!=Cnil){
	goto T647;}
	base[3]= (V203);
	vs_top=(vs_base=base+3)+1;
	return;
T647:;
	{object V204;
	object V205;
	base[3]= (V201);
	base[4]= (V202);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk323)();
	if(vs_base>=vs_top){vs_top=sup;goto T652;}
	V204= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T653;}
	V205= vs_base[0];
	vs_top=sup;
	goto T654;
T652:;
	V204= Cnil;
T653:;
	V205= Cnil;
T654:;
	if(((V205))!=Cnil){
	goto T657;}
	base[3]= VV[92];
	base[4]= (V201);
	base[5]= (V202);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk335)();
	vs_top=sup;
	goto T655;
T657:;
	if(((V204))!=Cnil){
	goto T655;}
	base[3]= VV[93];
	base[4]= (V201);
	base[5]= (V202);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk343)();
	vs_top=sup;
T655:;
	base[3]= (V201);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP-FINISH	*/

static L45()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	check_arg(2);
	vs_top=sup;
	{object V206=base[0]->c.c_cdr;
	if(!endp(V206))invalid_macro_call();}
	base[2]= VV[94];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for LOOP-TRANSLATE	*/

static L46()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	bds_check;
	check_arg(3);
	bds_bind(VV[89],base[0]);
	bds_bind(VV[95],base[1]);
	bds_bind(VV[96],base[2]);
	vs_top=sup;
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
	{register object V207;
	V208= nreverse((VV[105]->s.s_dbind));
	V209= nreverse((VV[107]->s.s_dbind));
	V210= nreverse((VV[108]->s.s_dbind));
	V211= nreverse((VV[110]->s.s_dbind));
	base[26]= (VV[111]->s.s_dbind);
	base[27]= nreverse((VV[112]->s.s_dbind));
	vs_top=(vs_base=base+26)+2;
	Lreconc();
	vs_top=sup;
	V212= vs_base[0];
	V207= list(6,VV[119],/* INLINE-ARGS */V208,/* INLINE-ARGS */V209,/* INLINE-ARGS */V210,/* INLINE-ARGS */V211,V212);
T675:;
	{object V214;
	V214= car((VV[117]->s.s_dbind));
	(VV[117]->s.s_dbind)= cdr((VV[117]->s.s_dbind));
	V213= (V214);}
	V207= list(3,VV[120],V213,(V207));
	if(((VV[117]->s.s_dbind))!=Cnil){
	goto T684;}
	goto T673;
T684:;
	goto T675;
T673:;
	{register object V215;
	register object V216;
	V215= (VV[104]->s.s_dbind);
	V216= car((V215));
T693:;
	if(!(endp((V215)))){
	goto T694;}
	goto T689;
T694:;
	{object V217;
	object V218;
	object V219;
	object V220;
	V217= car((V216));
	V218= cadr((V216));
	V219= caddr((V216));
	V220= cadddr((V216));
	{register object V221;
	register object V222;
	V221= (V220);
	V222= car((V221));
T707:;
	if(!(endp((V221)))){
	goto T708;}
	goto T703;
T708:;
	V223= make_cons((V207),Cnil);
	V207= append((V222),/* INLINE-ARGS */V223);
	V221= cdr((V221));
	V222= car((V221));
	goto T707;}
T703:;
	if(((V217))!=Cnil){
	goto T719;}
	if(((V218))!=Cnil){
	goto T719;}
	if(((V219))==Cnil){
	goto T698;}
T719:;
	{register object V224;
	V224= make_cons((V207),Cnil);
	if(((V218))==Cnil){
	goto T726;}
	V225= make_cons(VV[30],(V218));
	V224= make_cons(/* INLINE-ARGS */V225,(V224));
T726:;
	if(((V217))!=Cnil){
	goto T733;}
	V226= VV[121];
	goto T731;
T733:;
	if((symbol_value(VV[63]))==Cnil){
	goto T736;}
	V226= car(symbol_value(VV[63]));
	goto T731;
T736:;
	V226= VV[29];
T731:;
	if(((V219))==Cnil){
	goto T740;}
	V228= append((V219),(V224));
	V229= make_cons(VV[122],/* INLINE-ARGS */V228);
	V227= make_cons(/* INLINE-ARGS */V229,Cnil);
	goto T738;
T740:;
	V227= (V224);
T738:;
	V207= listA(3,V226,(V217),V227);}}
T698:;
	V215= cdr((V215));
	V216= car((V215));
	goto T693;}
T689:;
	base[26]= (V207);
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

static L47()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	check_arg(0);
	vs_top=sup;
TTL:;
T748:;
	if((symbol_value(VV[89]))!=Cnil){
	goto T749;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
T749:;
	{register object V230;
	register object V231;
	V230= car(symbol_value(VV[89]));
	V231= Cnil;
	if(type_of((V230))==t_symbol){
	goto T756;}
	base[0]= VV[123];
	base[1]= (V230);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T753;
T756:;
	setq(VV[88],symbol_value(VV[89]));
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[0]= (V230);
	base[1]= structure_ref(symbol_value(VV[96]),VV[39],0);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V231= vs_base[0];
	if(((V231))==Cnil){
	goto T764;}
	base[1]= car((V231));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V232;
	V232= cdr((V231));
	 vs_top=base+1;
	 while(!endp(V232))
	 {vs_push(car(V232));V232=cdr(V232);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T753;
T764:;
	base[0]= (V230);
	base[1]= structure_ref(symbol_value(VV[96]),VV[39],1);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V231= vs_base[0];
	if(((V231))==Cnil){
	goto T773;}
	base[0]= (V231);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk348)();
	vs_top=sup;
	goto T753;
T773:;
	base[0]= (V230);
	base[1]= VV[124];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T780;}
	base[0]= VV[125];
	base[1]= (V230);
	base[2]= car(symbol_value(VV[89]));
	base[3]= cadr(symbol_value(VV[89]));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T753;
T780:;
	base[0]= VV[126];
	base[1]= (V230);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;}
T753:;
	goto T748;
}
/*	function definition for LOOP-POP-SOURCE	*/

static L48()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	check_arg(0);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[89]))==Cnil){
	goto T793;}
	{object V233;
	V233= car(symbol_value(VV[89]));
	setq(VV[89],cdr(symbol_value(VV[89])));
	base[0]= (V233);
	vs_top=(vs_base=base+0)+1;
	return;}
T793:;
	base[0]= VV[127];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk343)();
	return;
}
/*	function definition for LOOP-GET-PROGN	*/

static L49()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V234;
	register object V235;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V236= vs_base[0];
	V234= make_cons(V236,Cnil);
	V235= car(symbol_value(VV[89]));
T803:;
	if(!(type_of((V235))!=t_cons)){
	goto T804;}
	if((cdr((V234)))!=Cnil){
	goto T808;}
	base[0]= car((V234));
	vs_top=(vs_base=base+0)+1;
	return;
T808:;
	V237= nreverse((V234));
	base[0]= make_cons(VV[14],/* INLINE-ARGS */V237);
	vs_top=(vs_base=base+0)+1;
	return;
T804:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V238= vs_base[0];
	V234= make_cons(V238,(V234));
	V235= car(symbol_value(VV[89]));
	goto T803;}
}
/*	function definition for LOOP-GET-FORM	*/

static L50()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	check_arg(0);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[89]))==Cnil){
	goto T817;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	return;
T817:;
	base[0]= VV[128];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk343)();
	return;
}
/*	function definition for LOOP-CONSTRUCT-RETURN	*/

static L51()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V239;
	check_arg(1);
	V239=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= list(3,VV[86],car(symbol_value(VV[117])),(V239));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-PSEUDO-BODY	*/

static L52()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{object V240;
	check_arg(1);
	V240=(base[0]);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[109]))!=Cnil){
	goto T820;}
	if((symbol_value(VV[114]))==Cnil){
	goto T821;}
T820:;
	setq(VV[108],make_cons((V240),symbol_value(VV[108])));
	base[1]= symbol_value(VV[108]);
	vs_top=(vs_base=base+1)+1;
	return;
T821:;
	setq(VV[107],make_cons((V240),symbol_value(VV[107])));
	setq(VV[110],make_cons((V240),symbol_value(VV[110])));
	base[1]= symbol_value(VV[110]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-EMIT-BODY	*/

static L53()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V241;
	check_arg(1);
	V241=(base[0]);
	vs_top=sup;
TTL:;
	setq(VV[109],Ct);
	base[1]= (V241);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk350)();
	return;
	}
}
/*	function definition for LOOP-EMIT-FINAL-VALUE	*/

static L54()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V242;
	check_arg(1);
	V242=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V242);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V243= vs_base[0];
	setq(VV[112],make_cons(V243,symbol_value(VV[112])));
	if((symbol_value(VV[113]))==Cnil){
	goto T836;}
	base[1]= VV[129];
	base[2]= symbol_value(VV[113]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk335)();
	vs_top=sup;
T836:;
	setq(VV[113],car(symbol_value(VV[88])));
	base[1]= symbol_value(VV[113]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static L55()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V244;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T842;}
	V244=(base[0]);
	vs_top=sup;
	goto T843;
T842:;
	V244= Cnil;
T843:;
	if((symbol_value(VV[114]))==Cnil){
	goto T846;}
	base[1]= VV[130];
	base[2]= (V244);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk343)();
	return;
T846:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-TYPED-INIT	*/

static L56()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{register object V245;
	check_arg(1);
	V245=(base[0]);
	vs_top=sup;
TTL:;
	if(((V245))==Cnil){
	goto T851;}
	base[1]= (V245);
	base[2]= VV[131];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T851;}
	base[1]= (V245);
	base[2]= VV[132];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T857;}
	base[1]= (V245);
	base[2]= VV[133];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T858;}
T857:;
	base[1]= (*(LnkLI352))(small_fixnum(0),(V245));
	vs_top=(vs_base=base+1)+1;
	return;
T858:;
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
T851:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-OPTIONAL-TYPE	*/

static L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_reserve(VM49);
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T866;}
	vs_top=sup;
	goto T867;
T866:;
	base[0]= Cnil;
T867:;
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
	goto T871;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	return;
T871:;
	if(!(type_of(base[1])==t_symbol)){
	goto T877;}
	{object V246;{object V247;
	base[2]= base[1];
	base[3]= structure_ref(symbol_value(VV[96]),VV[39],4);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V247= vs_base[0];
	if(V247==Cnil)goto T880;
	V246= V247;
	goto T879;
T880:;}
	base[2]= symbol_name(base[1]);
	base[3]= structure_ref(symbol_value(VV[96]),VV[39],5);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V246= vs_base[0];
T879:;
	if(((V246))==Cnil){
	goto T887;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= (V246);
	vs_top=(vs_base=base+2)+1;
	return;
T887:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
T877:;
	if(!(type_of(base[0])==t_cons)){
	goto T892;}
	if(type_of(base[1])==t_cons){
	goto T890;}
	base[2]= VV[135];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T890;
T892:;
	base[2]= VV[136];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T890:;
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

static L60()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_reserve(VM50);
	check_arg(0);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[99]))!=Cnil){
	goto T903;}
	if((symbol_value(VV[102]))!=Cnil){
	goto T903;}
	if((symbol_value(VV[106]))==Cnil){
	goto T904;}
T903:;
	V248= nreverse(symbol_value(VV[99]));
	V249= list(4,/* INLINE-ARGS */V248,symbol_value(VV[102]),symbol_value(VV[103]),symbol_value(VV[106]));
	setq(VV[104],make_cons(/* INLINE-ARGS */V249,symbol_value(VV[104])));
	setq(VV[99],Cnil);
	setq(VV[102],Cnil);
	setq(VV[103],Cnil);
	setq(VV[106],Cnil);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
T904:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-MAKE-VARIABLE	*/

static L61()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_reserve(VM51);
	{register object V250;
	register object V251;
	register object V252;
	object V253;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V250=(base[0]);
	V251=(base[1]);
	V252=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T919;}
	V253=(base[3]);
	vs_top=sup;
	goto T920;
T919:;
	V253= Cnil;
T920:;
	if(((V250))!=Cnil){
	goto T924;}
	if(((V251))==Cnil){
	goto T922;}
	base[4]= VV[139];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V250= vs_base[0];
	V254= list(2,(V250),(V251));
	setq(VV[99],make_cons(/* INLINE-ARGS */V254,symbol_value(VV[99])));
	V255= list(2,VV[140],(V250));
	setq(VV[102],make_cons(/* INLINE-ARGS */V255,symbol_value(VV[102])));
	goto T922;
T924:;
	if(!(type_of((V250))!=t_cons)){
	goto T934;}
	if(((V253))==Cnil){
	goto T938;}
	{register object x= (V250),V256= symbol_value(VV[98]);
	while(!endp(V256))
	if(eql(x,V256->c.c_car)){
	goto T942;
	}else V256=V256->c.c_cdr;
	goto T941;}
T942:;
	base[4]= VV[141];
	base[5]= (V250);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T936;
T941:;
	setq(VV[98],make_cons((V250),symbol_value(VV[98])));
	goto T936;
T938:;
	{register object x= (V250),V257= symbol_value(VV[99]);
	while(!endp(V257))
	if(type_of(V257->c.c_car)==t_cons &&eql(x,V257->c.c_car->c.c_car)){
	goto T947;
	}else V257=V257->c.c_cdr;
	goto T936;}
T947:;
	base[4]= VV[142];
	base[5]= (V250);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T936:;
	if(type_of((V250))==t_symbol){
	goto T950;}
	base[4]= VV[143];
	base[5]= (V250);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T950:;
	base[4]= (V250);
	base[5]= (V252);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	if((V251)!=Cnil){
	V258= (V251);
	goto T959;}
	base[4]= (V252);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V258= vs_base[0];
T959:;
	V259= list(2,(V250),V258);
	setq(VV[99],make_cons(/* INLINE-ARGS */V259,symbol_value(VV[99])));
	goto T922;
T934:;
	if(((V251))==Cnil){
	goto T962;}
	if((symbol_value(VV[63]))==Cnil){
	goto T965;}
	base[4]= (V250);
	base[5]= (V252);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V260= list(2,(V250),(V251));
	setq(VV[99],make_cons(/* INLINE-ARGS */V260,symbol_value(VV[99])));
	goto T922;
T965:;
	{object V261;
	base[4]= VV[144];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V261= vs_base[0];
	V262= list(2,(V261),(V251));
	setq(VV[99],make_cons(/* INLINE-ARGS */V262,symbol_value(VV[99])));
	setq(VV[103],listA(3,(V250),(V261),symbol_value(VV[103])));
	goto T922;}
T962:;
	{object V263;
	object V264;
	V263= Cnil;
	V264= Cnil;
	if(!(type_of((V252))!=t_cons)){
	goto T978;}
	V264= (V252);
	V263= (V264);
	goto T976;
T978:;
	V263= car((V252));
	V264= cdr((V252));
T976:;
	base[4]= car((V250));
	base[5]= Cnil;
	base[6]= (V263);
	base[7]= (V253);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk355)();
	vs_top=sup;
	base[4]= cdr((V250));
	base[5]= Cnil;
	base[6]= (V264);
	base[7]= (V253);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk355)();
	vs_top=sup;}
T922:;
	base[4]= (V250);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LOOP-MAKE-ITERATION-VARIABLE	*/

static L62()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_reserve(VM52);
	{object V265;
	object V266;
	object V267;
	check_arg(3);
	V265=(base[0]);
	V266=(base[1]);
	V267=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= (V265);
	base[4]= (V266);
	base[5]= (V267);
	base[6]= Ct;
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk355)();
	return;
	}
}
/*	function definition for LOOP-DECLARE-VARIABLE	*/

static L63()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_reserve(VM53);
	{register object V268;
	register object V269;
	check_arg(2);
	V268=(base[0]);
	V269=(base[1]);
	vs_top=sup;
TTL:;
	if(((V268))==Cnil){
	goto T998;}
	if(((V269))==Cnil){
	goto T998;}
	if(!(((V269))==(Ct))){
	goto T999;}
T998:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T999:;
	if(!(type_of((V268))==t_symbol)){
	goto T1006;}
	if(((V269))==(Ct)){
	goto T1009;}
	{register object x= (V268),V270= symbol_value(VV[100]);
	while(!endp(V270))
	if(eql(x,V270->c.c_car)){
	goto T1009;
	}else V270=V270->c.c_cdr;}
	V272= list(3,VV[31],V269,(V268));
	setq(VV[102],make_cons(/* INLINE-ARGS */V272,symbol_value(VV[102])));
	base[2]= symbol_value(VV[102]);
	vs_top=(vs_base=base+2)+1;
	return;
T1009:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T1006:;
	if(!(type_of((V268))==t_cons)){
	goto T1015;}
	if(!(type_of((V269))==t_cons)){
	goto T1018;}
	base[2]= car((V268));
	base[3]= car((V269));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V268= cdr((V268));
	V269= cdr((V269));
	goto TTL;
T1018:;
	base[2]= car((V268));
	base[3]= (V269);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V268= cdr((V268));
	goto TTL;
T1015:;
	base[2]= VV[145];
	base[3]= (V268);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;
	}
}
/*	function definition for LOOP-MAYBE-BIND-FORM	*/

static L64()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_reserve(VM54);
	{object V273;
	object V274;
	check_arg(2);
	V273=(base[0]);
	V274=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V273);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk356)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1035;}
	base[2]= (V273);
	vs_top=(vs_base=base+2)+1;
	return;
T1035:;
	base[3]= VV[146];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V273);
	base[4]= (V274);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk355)();
	return;
	}
}
/*	function definition for LOOP-DO-IF	*/

static L65()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_reserve(VM55);
	bds_check;
	{object V275;
	object V276;
	check_arg(2);
	V275=(base[0]);
	V276=(base[1]);
	vs_top=sup;
TTL:;
	{object V277;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V277= vs_base[0];
	bds_bind(VV[114],Ct);
	base[3]= Cnil;
	{object V278;
	object V279;
	base[4]= (V275);
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V278= vs_base[0];
	base[4]= car(symbol_value(VV[89]));
	base[5]= VV[147];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1047;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[4]= VV[147];
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V280= vs_base[0];
	V279= make_cons(V280,Cnil);
	goto T1045;
T1047:;
	V279= Cnil;
T1045:;
	base[4]= car(symbol_value(VV[89]));
	base[5]= VV[148];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1054;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
T1054:;
	if((base[3])==Cnil){
	goto T1059;}
	V277= list(3,VV[11],base[3],(V277));
T1059:;
	if(((V276))==Cnil){
	goto T1066;}
	V281= list(2,VV[36],(V277));
	goto T1064;
T1066:;
	V281= (V277);
T1064:;
	base[4]= listA(4,VV[71],V281,(V278),(V279));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk350)();
	bds_unwind1;
	return;}}
	}
}
/*	function definition for LOOP-DO-INITIALLY	*/

static L67()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= VV[153];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V282= vs_base[0];
	setq(VV[105],make_cons(V282,symbol_value(VV[105])));
	base[0]= symbol_value(VV[105]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-DO-FINALLY	*/

static L68()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_reserve(VM57);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= VV[154];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V283= vs_base[0];
	setq(VV[111],make_cons(V283,symbol_value(VV[111])));
	base[0]= symbol_value(VV[111]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-DO-DO	*/

static L69()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_reserve(VM58);
	check_arg(0);
	vs_top=sup;
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

static L70()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_reserve(VM59);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V284;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V284= vs_base[0];
	if(type_of((V284))==t_symbol){
	goto T1078;}
	base[0]= VV[155];
	base[1]= (V284);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1078:;
	if((symbol_value(VV[107]))!=Cnil){
	goto T1084;}
	if((symbol_value(VV[108]))!=Cnil){
	goto T1084;}
	if((symbol_value(VV[112]))!=Cnil){
	goto T1084;}
	if((symbol_value(VV[114]))==Cnil){
	goto T1083;}
T1084:;
	base[0]= VV[156];
	base[1]= (V284);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1083:;
	if((symbol_value(VV[117]))==Cnil){
	goto T1094;}
	base[0]= VV[157];
	base[1]= car(symbol_value(VV[117]));
	base[2]= (V284);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk343)();
	vs_top=sup;
T1094:;
	setq(VV[117],list(2,(V284),Cnil));
	base[0]= symbol_value(VV[117]);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-DO-RETURN	*/

static L71()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_reserve(VM60);
	check_arg(0);
	vs_top=sup;
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

static L72()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_reserve(VM61);
	{object V285;
	object V286;
	object V287;
	object V288;
	object V289;
	object V290;
	parse_key(vs_base,FALSE,FALSE,6,VV[162],VV[163],VV[164],VV[361],VV[165],VV[362]);
	vs_top=sup;
	V285=(base[0]);
	V286=(base[1]);
	V287=(base[2]);
	V288=(base[3]);
	V289=(base[4]);
	V290=(base[5]);
	base[12]= VV[158];
	base[13]= (V285);
	base[14]= (V286);
	base[15]= (V287);
	base[16]= (V288);
	base[17]= (V289);
	base[18]= (V290);
	vs_top=(vs_base=base+12)+7;
	siLmake_structure();
	return;
	}
}
/*	function definition for LOOP-GET-COLLECTION-INFO	*/

static L73()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_reserve(VM62);
	{object V291;
	object V292;
	object V293;
	check_arg(3);
	V291=(base[0]);
	V292=(base[1]);
	V293=(base[2]);
	vs_top=sup;
TTL:;
	{object V294;
	register object V295;
	register object V296;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V294= vs_base[0];
	V297= structure_ref(symbol_value(VV[96]),VV[39],6);
	if((/* INLINE-ARGS */V297)==Cnil){
	goto T1112;}
	V295= Cnil;
	goto T1111;
T1112:;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V295= vs_base[0];
T1111:;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[159];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1116;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V296= vs_base[0];
	goto T1114;
T1116:;
	V296= Cnil;
T1114:;
	if(type_of((V296))==t_symbol){
	goto T1121;}
	base[3]= VV[160];
	base[4]= (V296);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1121:;
	if(((V295))!=Cnil){
	goto T1126;}{object V298;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V298= vs_base[0];
	if(V298==Cnil)goto T1130;
	V295= V298;
	goto T1129;
T1130:;}
	V295= (V293);
T1129:;
T1126:;
	{register object V299;{object V300;
	V300= symbol_value(VV[118]);
	V301= symbol_function(VV[365]);
	V299= (VFUN_NARGS=4,(*(LnkLI364))((V296),V300,VV[161],V301));}
	if(((V299))!=Cnil){
	goto T1136;}
	base[3]= VV[162];
	base[4]= (V296);
	base[5]= VV[163];
	base[6]= (V292);
	base[7]= VV[164];
	base[8]= make_cons((V291),Cnil);
	base[9]= VV[165];
	base[10]= (V295);
	vs_top=(vs_base=base+3)+8;
	(void) (*Lnk366)();
	vs_top=sup;
	V299= vs_base[0];
	setq(VV[118],make_cons((V299),symbol_value(VV[118])));
	goto T1134;
T1136:;
	V302= structure_ref((V299),VV[158],1);
	if((/* INLINE-ARGS */V302)==((V292))){
	goto T1148;}
	base[3]= VV[166];
	base[4]= (V296);
	V303= structure_ref((V299),VV[158],2);
	base[5]= car(/* INLINE-ARGS */V303);
	base[6]= (V291);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk343)();
	vs_top=sup;
T1148:;
	V304= structure_ref((V299),VV[158],4);
	if(equal((V295),/* INLINE-ARGS */V304)){
	goto T1155;}
	base[3]= VV[167];
	base[4]= (V296);
	base[5]= (V295);
	base[6]= structure_ref((V299),VV[158],4);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk335)();
	vs_top=sup;
	V305= structure_ref((V299),VV[158],4);
	if(!((/* INLINE-ARGS */V305)==(Ct))){
	goto T1155;}
	(void)(structure_set((V299),VV[158],4,(V295)));
T1155:;
	{object V307;
	V308= structure_ref(V299,VV[158],2);
	V307= make_cons((V291),/* INLINE-ARGS */V308);
	(void)(structure_set(V299,VV[158],2,(V307)));}
T1134:;
	base[3]= (V299);
	base[4]= (V294);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	function definition for LOOP-LIST-COLLECTION	*/

static L74()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_reserve(VM63);
	{object V309;
	check_arg(1);
	V309=(base[0]);
	vs_top=sup;
TTL:;
	{register object V310;
	register object V311;
	base[1]= (V309);
	base[2]= VV[5];
	base[3]= VV[5];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1172;}
	V310= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1173;}
	V311= vs_base[0];
	vs_top=sup;
	goto T1174;
T1172:;
	V310= Cnil;
T1173:;
	V311= Cnil;
T1174:;
	{register object V312;
	V312= structure_ref((V310),VV[158],3);
	if(((V312))!=Cnil){
	goto T1176;}
	base[1]= VV[168];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V313= vs_base[0];
	base[1]= VV[169];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V314= vs_base[0];
	if((structure_ref((V310),VV[158],0))!=Cnil){
	goto T1186;}
	V315= Cnil;
	goto T1185;
T1186:;
	V316= structure_ref((V310),VV[158],0);
	V315= make_cons(/* INLINE-ARGS */V316,Cnil);
T1185:;
	V312= listA(3,V313,V314,V315);
	(void)(structure_set((V310),VV[158],3,(V312)));
	V317= list(2,VV[170],(V312));
	setq(VV[106],make_cons(/* INLINE-ARGS */V317,symbol_value(VV[106])));
	if((structure_ref((V310),VV[158],0))!=Cnil){
	goto T1176;}
	base[1]= listA(3,VV[171],car((V312)),cddr((V312)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	vs_top=sup;
T1176:;
	{object V318= (V309);
	if((V318!= VV[5]))goto T1194;
	V311= list(2,VV[5],(V311));
	goto T1193;
T1194:;
	if((V318!= VV[369]))goto T1196;
	goto T1193;
T1196:;
	if((V318!= VV[370]))goto T1197;
	if(!(type_of((V311))==t_cons)){
	goto T1198;}
	if((car((V311)))==(VV[5])){
	goto T1193;}
T1198:;
	V311= list(2,VV[172],(V311));
	goto T1193;
T1197:;
	FEerror("The ECASE key value ~s is illegal.",1,V318);}
T1193:;
	base[1]= list(3,VV[173],(V312),(V311));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-SUM-COLLECTION	*/

static L75()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_reserve(VM64);
	{object V319;
	object V320;
	object V321;
	check_arg(3);
	V319=(base[0]);
	V320=(base[1]);
	V321=(base[2]);
	vs_top=sup;
TTL:;
	{register object V322;
	object V323;
	base[3]= (V319);
	base[4]= VV[174];
	base[5]= (V321);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1208;}
	V322= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1209;}
	V323= vs_base[0];
	vs_top=sup;
	goto T1210;
T1208:;
	V322= Cnil;
T1209:;
	V323= Cnil;
T1210:;
	base[3]= structure_ref((V322),VV[158],4);
	base[4]= (V320);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	{register object V324;
	V324= structure_ref((V322),VV[158],3);
	if(((V324))!=Cnil){
	goto T1215;}{object V326;
	V326= structure_ref((V322),VV[158],0);
	if(V326==Cnil)goto T1222;
	base[3]= V326;
	goto T1221;
T1222:;}
	base[4]= VV[175];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[3]= vs_base[0];
T1221:;
	base[4]= Cnil;
	base[5]= structure_ref((V322),VV[158],4);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V325= vs_base[0];
	V324= make_cons(V325,Cnil);
	(void)(structure_set((V322),VV[158],3,(V324)));
	if((structure_ref((V322),VV[158],0))!=Cnil){
	goto T1215;}
	V327= structure_ref((V322),VV[158],3);
	base[3]= car(/* INLINE-ARGS */V327);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)();
	vs_top=sup;
T1215:;
	if(!(((V319))==(VV[176]))){
	goto T1232;}
	V328= car((V324));
	base[4]= Ct;
	base[5]= car((V324));
	base[6]= list(2,VV[177],car((V324)));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V329= vs_base[0];
	base[3]= list(3,VV[8],(V323),list(3,VV[11],/* INLINE-ARGS */V328,V329));
	goto T1230;
T1232:;
	V330= car((V324));
	base[4]= Ct;
	base[5]= car((V324));
	base[6]= car((V324));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V331= vs_base[0];
	base[3]= list(3,VV[11],/* INLINE-ARGS */V330,list(3,VV[178],V331,(V323)));
T1230:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-MAXMIN-COLLECTION	*/

static L76()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_reserve(VM65);
	{object V332;
	check_arg(1);
	V332=(base[0]);
	vs_top=sup;
TTL:;
	{register object V333;
	object V334;
	base[1]= (V332);
	base[2]= VV[179];
	base[3]= symbol_value(VV[180]);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1246;}
	V333= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1247;}
	V334= vs_base[0];
	vs_top=sup;
	goto T1248;
T1246:;
	V333= Cnil;
T1247:;
	V334= Cnil;
T1248:;
	base[1]= structure_ref((V333),VV[158],4);
	base[2]= symbol_value(VV[180]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	{register object V335;
	V335= structure_ref((V333),VV[158],5);
	if(((V335))!=Cnil){
	goto T1253;}{object V336;
	V336= structure_ref((V333),VV[158],0);
	if(V336==Cnil)goto T1259;
	base[1]= V336;
	goto T1258;
T1259:;}
	base[2]= VV[181];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[1]= vs_base[0];
T1258:;
	base[2]= structure_ref((V333),VV[158],4);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk372)();
	vs_top=sup;
	V335= vs_base[0];
	(void)(structure_set((V333),VV[158],5,(V335)));
	if((structure_ref((V333),VV[158],0))!=Cnil){
	goto T1253;}
	base[1]= structure_ref((V335),VV[18],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	vs_top=sup;
T1253:;
	base[1]= (V332);
	base[2]= (V335);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk373)();
	vs_top=sup;
	V337= list(2,VV[182],(V335));
	setq(VV[106],make_cons(/* INLINE-ARGS */V337,symbol_value(VV[106])));
	base[1]= list(4,VV[183],(V335),(V332),(V334));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-DO-ALWAYS	*/

static L77()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_reserve(VM66);
	{object V338;
	object V339;
	check_arg(2);
	V338=(base[0]);
	V339=(base[1]);
	vs_top=sup;
TTL:;
	{object V340;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V340= vs_base[0];
	if(((V338))==Cnil){
	goto T1273;}
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
T1273:;
	if(((V339))==Cnil){
	goto T1280;}
	V341= VV[8];
	goto T1278;
T1280:;
	V341= VV[184];
T1278:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V342= vs_base[0];
	base[2]= list(3,V341,(V340),V342);
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

static L78()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_reserve(VM67);
	{object V343;
	check_arg(1);
	V343=(base[0]);
	vs_top=sup;
TTL:;
	if(((V343))==Cnil){
	goto T1285;}
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
T1285:;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V344= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V345= vs_base[0];
	V346= list(3,VV[11],V344,V345);
	base[2]= symbol_value(VV[115]);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V347= vs_base[0];
	base[1]= list(3,VV[8],/* INLINE-ARGS */V346,V347);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;
	}
}
/*	function definition for LOOP-DO-WHILE	*/

static L79()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_reserve(VM68);
	{object V348;
	object V349;
	check_arg(2);
	V348=(base[0]);
	V349=(base[1]);
	vs_top=sup;
TTL:;
	{object V350;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V350= vs_base[0];
	base[3]= (V349);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	if(((V348))==Cnil){
	goto T1299;}
	V351= VV[8];
	goto T1297;
T1299:;
	V351= VV[184];
T1297:;
	base[3]= list(3,V351,(V350),VV[185]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk350)();
	return;}
	}
}
/*	function definition for LOOP-DO-WITH	*/

static L80()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_reserve(VM69);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= VV[186];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	{register object V352;
	register object V353;
	register object V354;
	V352= Cnil;
	V353= Cnil;
	V354= Cnil;
T1304:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V352= vs_base[0];
	base[0]= (V352);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk363)();
	vs_top=sup;
	V354= vs_base[0];
	base[0]= car(symbol_value(VV[89]));
	base[1]= VV[187];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1315;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V353= vs_base[0];
	goto T1313;
T1315:;
	V353= Cnil;
T1313:;
	base[0]= (V352);
	base[1]= (V353);
	base[2]= (V354);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[0]= car(symbol_value(VV[89]));
	base[1]= VV[152];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1326;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	goto T1324;
T1326:;
	vs_base=vs_top;
	(void) (*Lnk345)();
	return;
T1324:;
	goto T1304;}
}
/*	function definition for LOOP-HACK-ITERATION	*/

static L81()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_reserve(VM70);
	{register object V355;
	check_arg(1);
	V355=(base[0]);
	vs_top=sup;
TTL:;
	{register object V356;
	register object V357;
	register object V358;
	register object V359;
	register object V360;
	register object V361;
	register object V362;
	register object V363;
	register object V364;
	object V365;
	V356= Cnil;
	V357= Cnil;
	V358= Cnil;
	V359= Cnil;
	V360= Cnil;
	V361= Cnil;
	V362= Cnil;
	V363= Cnil;
	V364= Cnil;
	V365= Cnil;
T1333:;
	base[2]= car((V355));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V366;
	V366= cdr((V355));
	 vs_top=base+2;
	 while(!endp(V366))
	 {vs_push(car(V366));V366=cdr(V366);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V365= vs_base[0];
	V364= (V365);
	if((car((V364)))!=Cnil){
	goto T1343;}
	goto T1342;
T1343:;
	V356= make_cons(car((V364)),(V356));
T1342:;
	V364= cdr((V364));
	base[1]= car((V364));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V367= vs_base[0];
	V357= nconc((V357),V367);
	V364= cdr((V364));
	if((car((V364)))!=Cnil){
	goto T1352;}
	goto T1351;
T1352:;
	V358= make_cons(car((V364)),(V358));
T1351:;
	V364= cdr((V364));
	base[1]= car((V364));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V368= vs_base[0];
	V359= nconc((V359),V368);
	V364= cdr((V364));
	if((symbol_value(VV[109]))==Cnil){
	goto T1363;}
	base[1]= VV[188];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T1363:;
	if(((V364))!=Cnil){
	goto T1367;}
	V364= (V365);
T1367:;
	if((car((V364)))==Cnil){
	goto T1371;}
	V360= make_cons(car((V364)),(V360));
T1371:;
	V364= cdr((V364));
	base[1]= car((V364));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V369= vs_base[0];
	V361= nconc((V361),V369);
	V364= cdr((V364));
	if((car((V364)))==Cnil){
	goto T1380;}
	V362= make_cons(car((V364)),(V362));
T1380:;
	base[1]= cadr((V364));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V370= vs_base[0];
	V363= nconc((V363),V370);
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[152];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1389;}
	base[1]= (V363);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V371= vs_base[0];
	base[1]= (V362);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V372= vs_base[0];
	base[1]= (V361);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V373= vs_base[0];
	base[1]= (V360);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V374= vs_base[0];
	setq(VV[107],listA(5,V371,V372,V373,V374,symbol_value(VV[107])));
	base[1]= (V359);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V375= vs_base[0];
	base[1]= (V358);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V376= vs_base[0];
	base[1]= (V357);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V377= vs_base[0];
	base[1]= (V356);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V378= vs_base[0];
	setq(VV[110],listA(5,V375,V376,V377,V378,symbol_value(VV[110])));
	vs_base=vs_top;
	(void) (*Lnk345)();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1389:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	if((structure_ref(symbol_value(VV[96]),VV[39],7))!=Cnil){
	goto T1416;}
	base[1]= car(symbol_value(VV[89]));
	base[2]= structure_ref(symbol_value(VV[96]),VV[39],1);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V364= vs_base[0];
	if(((V364))==Cnil){
	goto T1416;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V355= (V364);
T1416:;
	goto T1333;}
	}
}
/*	function definition for LOOP-DO-FOR	*/

static L83()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_reserve(VM71);
	check_arg(0);
	vs_top=sup;
TTL:;
	{object V379;
	object V380;
	object V381;
	object V382;
	object V383;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V379= vs_base[0];
	base[3]= (V379);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk363)();
	vs_top=sup;
	V380= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V381= vs_base[0];
	V382= Cnil;
	V383= Cnil;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V382= vs_base[0];
	if(!(type_of((V381))==t_symbol)){
	goto T1437;}
	base[3]= (V381);
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],2);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V383= vs_base[0];
	if(((V383))!=Cnil){
	goto T1436;}
T1437:;
	base[3]= VV[191];
	base[4]= (V381);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1436:;
	base[3]= car((V383));
	base[4]= (V379);
	base[5]= (V382);
	base[6]= (V380);
	{object V384;
	V384= cdr((V383));
	 vs_top=base+7;
	 while(!endp(V384))
	 {vs_push(car(V384));V384=cdr(V384);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	return;}
}
/*	function definition for LOOP-DO-REPEAT	*/

static L84()
{register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_reserve(VM72);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V385;
	register object V386;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V385= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= symbol_value(VV[180]);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	V386= vs_base[0];
	if(!(type_of((V385))==t_cons)){
	goto T1455;}
	if(!((car((V385)))==(VV[192]))){
	goto T1455;}
	base[0]= cadr((V385));
	base[1]= (V386);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1455;}
	V386= cadr((V385));
T1455:;
	{object V387;
	object V388;
	object V389;
	base[0]= (V385);
	base[1]= (V386);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1468;}
	V387= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1469;}
	V388= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1470;}
	V389= vs_base[0];
	vs_top=sup;
	goto T1471;
T1468:;
	V387= Cnil;
T1469:;
	V388= Cnil;
T1470:;
	V389= Cnil;
T1471:;
	if(((V388))==Cnil){
	goto T1473;}
	if(!(number_compare((V389),small_fixnum(1))<=0)){
	goto T1473;}
	base[0]= listA(6,Ct,Cnil,Cnil,Cnil,(number_compare((V389),small_fixnum(0))<=0?Ct:Cnil),VV[193]);
	vs_top=(vs_base=base+0)+1;
	return;
T1473:;
	{register object V390;
	base[1]= VV[194];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V387);
	base[2]= (V386);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V390= vs_base[0];
	if(((V388))==Cnil){
	goto T1483;}
	V391= list(2,VV[36],list(2,VV[195],list(3,VV[11],(V390),list(2,VV[196],(V390)))));
	base[0]= make_cons(/* INLINE-ARGS */V391,VV[197]);
	vs_top=(vs_base=base+0)+1;
	return;
T1483:;
	V392= list(2,VV[198],list(3,VV[11],(V390),list(2,VV[196],(V390))));
	base[0]= make_cons(/* INLINE-ARGS */V392,VV[199]);
	vs_top=(vs_base=base+0)+1;
	return;}}}
}
/*	function definition for LOOP-WHEN-IT-VARIABLE	*/

static L85()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_reserve(VM73);
	check_arg(0);
	vs_top=sup;
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

static L86()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_reserve(VM74);
	{register object V393;
	object V394;
	object V395;
	check_arg(3);
	V393=(base[0]);
	V394=(base[1]);
	V395=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= (V393);
	base[4]= Cnil;
	base[5]= (V395);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[201];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1495;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V396= vs_base[0];
	V397= list(2,(V393),V396);
	base[3]= listA(7,Cnil,/* INLINE-ARGS */V397,Cnil,Cnil,Cnil,list(2,(V393),(V394)),VV[202]);
	vs_top=(vs_base=base+3)+1;
	return;
T1495:;
	base[3]= listA(3,Cnil,list(2,(V393),(V394)),VV[203]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for LOOP-FOR-ACROSS	*/

static L87()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_reserve(VM75);
	{object V398;
	object V399;
	object V400;
	check_arg(3);
	V398=(base[0]);
	V399=(base[1]);
	V400=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= (V398);
	base[4]= Cnil;
	base[5]= (V400);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	{object V401;
	register object V402;
	base[3]= VV[204];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V401= vs_base[0];
	base[3]= VV[205];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V402= vs_base[0];
	{register object V403;
	object V404;
	object V405;
	base[3]= (V399);
	base[4]= VV[206];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1512;}
	V403= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1513;}
	V404= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1514;}
	V405= vs_base[0];
	vs_top=sup;
	goto T1515;
T1512:;
	V403= Cnil;
T1513:;
	V404= Cnil;
T1514:;
	V405= Cnil;
T1515:;
	base[3]= (V401);
	base[4]= (V403);
	if(!(type_of((V403))==t_cons)){
	goto T1521;}
	if(!((car((V403)))==(VV[192]))){
	goto T1521;}
	base[5]= cadr((V403));
	goto T1519;
T1521:;
	base[5]= VV[206];
T1519:;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[3]= (V402);
	base[4]= small_fixnum(0);
	base[5]= VV[207];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	{int V406;
	object V407;
	register object V408;
	object V409;
	object V410;
	object V411;
	V406= 0;
	if(((V404))!=Cnil){
	goto T1532;}
	{object V412;
	base[7]= VV[208];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V412= vs_base[0];
	V413= list(3,VV[11],(V412),list(2,VV[209],(V401)));
	setq(VV[105],make_cons(/* INLINE-ARGS */V413,symbol_value(VV[105])));
	base[7]= (V412);
	base[8]= small_fixnum(0);
	base[9]= VV[207];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V407= vs_base[0];
	goto T1530;}
T1532:;
	V406= length((V405));
	V407= make_fixnum(V406);
T1530:;
	V408= list(3,VV[210],(V402),(V407));
	V409= (V408);
	V410= list(2,(V398),list(3,VV[211],(V401),(V402)));
	V411= list(2,(V402),list(2,VV[177],(V402)));
	if(((V404))==Cnil){
	goto T1546;}
	V408= ((V406)==(0)?Ct:Cnil);
	if(!((V406)<=(1))){
	goto T1546;}
	V409= Ct;
T1546:;
	if(((((V408))==((V409))?Ct:Cnil))==Cnil){
	goto T1555;}
	V414= Cnil;
	goto T1554;
T1555:;
	V414= list(4,(V408),(V410),Cnil,(V411));
T1554:;
	base[7]= listA(5,(V409),(V410),Cnil,(V411),V414);
	vs_top=(vs_base=base+7)+1;
	return;}}}
	}
}
/*	function definition for LOOP-LIST-STEP	*/

static L88()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_reserve(VM76);
	{object V415;
	check_arg(1);
	V415=(base[0]);
	vs_top=sup;
TTL:;
	{register object V416;
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[212];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1559;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V416= vs_base[0];
	goto T1557;
T1559:;
	V416= VV[213];
T1557:;
	if(!(type_of((V416))==t_cons)){
	goto T1565;}
	if(!((car((V416)))==(VV[214]))){
	goto T1565;}
	base[1]= VV[215];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk335)();
	vs_top=sup;
	base[1]= list(3,VV[216],(V416),(V415));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
T1565:;
	if(!(type_of((V416))==t_cons)){
	goto T1574;}
	if(!((car((V416)))==(VV[83]))){
	goto T1574;}
	base[1]= list(2,cadr((V416)),(V415));
	base[2]= cadr((V416));
	vs_top=(vs_base=base+1)+2;
	return;
T1574:;
	base[3]= VV[217];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V416);
	base[4]= VV[83];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V417= vs_base[0];
	base[1]= list(3,VV[216],V417,(V415));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-FOR-ON	*/

static L89()
{register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_reserve(VM77);
	{register object V418;
	object V419;
	object V420;
	check_arg(3);
	V418=(base[0]);
	V419=(base[1]);
	V420=(base[2]);
	vs_top=sup;
TTL:;
	{object V421;
	object V422;
	object V423;
	base[3]= (V419);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1589;}
	V421= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1590;}
	V422= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1591;}
	V423= vs_base[0];
	vs_top=sup;
	goto T1592;
T1589:;
	V421= Cnil;
T1590:;
	V422= Cnil;
T1591:;
	V423= Cnil;
T1592:;
	{register object V424;
	V424= (V418);
	if(((V418))==Cnil){
	goto T1595;}
	if(!(type_of((V418))==t_symbol)){
	goto T1595;}
	base[3]= (V418);
	base[4]= (V421);
	base[5]= (V420);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T1593;
T1595:;
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	V424= vs_base[0];
	base[3]= (V424);
	base[4]= (V421);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[3]= (V418);
	base[4]= Cnil;
	base[5]= (V420);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T1593:;
	{object V425;
	object V426;
	base[3]= (V424);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T1612;}
	V425= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1613;}
	V426= vs_base[0];
	vs_top=sup;
	goto T1614;
T1612:;
	V425= Cnil;
T1613:;
	V426= Cnil;
T1614:;
	{register object V427;
	object V428;
	base[4]= (((V418))==((V424))?Ct:Cnil);
	base[5]= (V424);
	base[6]= list(2,VV[218],(V424));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V427= vs_base[0];
	V428= (V427);
	if(((V422))==Cnil){
	goto T1620;}
	if(!(type_of((V423))==t_cons||((V423))==Cnil)){
	goto T1620;}
	V427= (((V423))==Cnil?Ct:Cnil);
T1620:;
	if(!(((V418))==((V424)))){
	goto T1627;}
	base[4]= Ct;
	base[5]= (V424);
	base[6]= (V425);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V429= vs_base[0];
	base[4]= list(8,Cnil,list(2,(V424),V429),(V428),Cnil,Cnil,Cnil,(V427),Cnil);
	vs_top=(vs_base=base+4)+1;
	return;
T1627:;
	{object V430;
	object V431;
	V430= list(2,(V418),(V424));
	V431= list(2,(V424),(V425));
	if(((((V427))==((V428))?Ct:Cnil))==Cnil){
	goto T1636;}
	V432= Cnil;
	goto T1635;
T1636:;
	V432= list(4,(V427),(V430),Cnil,(V431));
T1635:;
	base[4]= listA(5,(V428),(V430),Cnil,(V431),V432);
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	function definition for LOOP-FOR-IN	*/

static L90()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_reserve(VM78);
	{object V433;
	object V434;
	object V435;
	check_arg(3);
	V433=(base[0]);
	V434=(base[1]);
	V435=(base[2]);
	vs_top=sup;
TTL:;
	{object V436;
	object V437;
	object V438;
	base[3]= (V434);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1640;}
	V436= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1641;}
	V437= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1642;}
	V438= vs_base[0];
	vs_top=sup;
	goto T1643;
T1640:;
	V436= Cnil;
T1641:;
	V437= Cnil;
T1642:;
	V438= Cnil;
T1643:;
	{register object V439;
	base[3]= VV[219];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V439= vs_base[0];
	base[3]= (V433);
	base[4]= Cnil;
	base[5]= (V435);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	base[3]= (V439);
	base[4]= (V436);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	{object V440;
	object V441;
	base[3]= (V439);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T1656;}
	V440= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1657;}
	V441= vs_base[0];
	vs_top=sup;
	goto T1658;
T1656:;
	V440= Cnil;
T1657:;
	V441= Cnil;
T1658:;
	{register object V442;
	object V443;
	object V444;
	object V445;
	V442= list(2,VV[220],(V439));
	V443= (V442);
	V444= list(2,(V433),list(2,VV[65],(V439)));
	V445= list(2,(V439),(V440));
	if(((V437))==Cnil){
	goto T1663;}
	if(!(type_of((V438))==t_cons||((V438))==Cnil)){
	goto T1663;}
	V442= (((V438))==Cnil?Ct:Cnil);
T1663:;
	if(((((V442))==((V443))?Ct:Cnil))==Cnil){
	goto T1670;}
	V446= Cnil;
	goto T1669;
T1670:;
	V446= list(4,(V442),(V444),Cnil,(V445));
T1669:;
	base[6]= listA(5,(V443),(V444),Cnil,(V445),V446);
	vs_top=(vs_base=base+6)+1;
	return;}}}}
	}
}
/*	function definition for MAKE-LOOP-PATH	*/

static L91()
{register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_reserve(VM79);
	{object V447;
	object V448;
	object V449;
	object V450;
	object V451;
	parse_key(vs_base,FALSE,FALSE,5,VV[223],VV[226],VV[227],VV[224],VV[225]);
	vs_top=sup;
	V447=(base[0]);
	V448=(base[1]);
	V449=(base[2]);
	V450=(base[3]);
	V451=(base[4]);
	base[10]= VV[221];
	base[11]= (V447);
	base[12]= (V448);
	base[13]= (V449);
	base[14]= (V450);
	base[15]= (V451);
	vs_top=(vs_base=base+10)+6;
	siLmake_structure();
	return;
	}
}
/*	function definition for ADD-LOOP-PATH	*/

static L92()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_reserve(VM80);
	bds_check;
	{object V452;
	object V453;
	register object V454;
	object V455;
	object V456;
	object V457;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,3,VV[226],VV[227],VV[225]);
	V452=(base[0]);
	V453=(base[1]);
	V454=(base[2]);
	vs_top=sup;
	V455=(base[3]);
	V456=(base[4]);
	V457=(base[5]);
	if(type_of((V452))==t_cons||((V452))==Cnil){
	goto T1678;}
	V452= make_cons((V452),Cnil);
T1678:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
T1684:;
	base[11]= (V454);
	base[12]= VV[39];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk378)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1685;}
	bds_unwind1;
	bds_unwind1;
	goto T1682;
T1685:;
	base[11]= VV[47];
	base[12]= VV[48];
	base[13]= VV[222];
	base[14]= (V454);
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
	V454= vs_base[0];
	base[11]= symbol_value(VV[50]);
	base[12]= VV[52];
	vs_top=(vs_base=base+11)+2;
	Lformat();
	vs_top=sup;
	goto T1684;
T1682:;
	{object V458;
	object V459;
	V458= structure_ref((V454),VV[39],3);
	base[9]= VV[223];
	{object V460;
	object V461= (V452);
	if(endp(V461)){
	base[10]= Cnil;
	goto T1713;}
	base[11]=V460=MMcons(Cnil,Cnil);
T1714:;
	(V460->c.c_car)= symbol_name((V461->c.c_car));
	if(endp(V461=MMcdr(V461))){
	base[10]= base[11];
	goto T1713;}
	V460=MMcdr(V460)=MMcons(Cnil,Cnil);
	goto T1714;}
T1713:;
	base[11]= VV[224];
	base[12]= (V453);
	base[13]= VV[225];
	base[14]= (V457);
	base[15]= VV[226];
	{object V462;
	object V463= (V455);
	if(endp(V463)){
	base[16]= Cnil;
	goto T1721;}
	base[17]=V462=MMcons(Cnil,Cnil);
T1722:;
	if(!(type_of((V463->c.c_car))==t_cons||((V463->c.c_car))==Cnil)){
	goto T1725;}
	(V462->c.c_car)= (V463->c.c_car);
	goto T1723;
T1725:;
	(V462->c.c_car)= make_cons((V463->c.c_car),Cnil);
T1723:;
	if(endp(V463=MMcdr(V463))){
	base[16]= base[17];
	goto T1721;}
	V462=MMcdr(V462)=MMcons(Cnil,Cnil);
	goto T1722;}
T1721:;
	base[17]= VV[227];
	base[18]= (V456);
	vs_top=(vs_base=base+9)+10;
	(void) (*Lnk379)();
	vs_top=sup;
	V459= vs_base[0];
	{register object V465;
	register object V466;
	V465= (V452);
	V466= car((V465));
T1733:;
	if(!(endp((V465)))){
	goto T1734;}
	goto T1729;
T1734:;
	{register object V467;
	register object V468;
	register object V469;
	V467= symbol_name((V466));
	V468= (V458);
	V469= (V459);
	base[11]= (V467);
	base[12]= (V468);
	base[13]= (V469);
	vs_top=(vs_base=base+11)+3;
	siLhash_set();
	vs_top=sup;}
	V465= cdr((V465));
	V466= car((V465));
	goto T1733;}
T1729:;
	base[9]= (V459);
	vs_top=(vs_base=base+9)+1;
	return;}
	}
}
/*	function definition for LOOP-FOR-BEING	*/

static L93()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_reserve(VM81);
	{object V470;
	object V471;
	object V472;
	check_arg(3);
	V470=(base[0]);
	V471=(base[1]);
	V472=(base[2]);
	vs_top=sup;
TTL:;
	{register object V473;
	object V474;
	object V475;
	object V476;
	object V477;
	V473= Cnil;
	V474= Cnil;
	V475= Cnil;
	V476= Cnil;
	V477= Cnil;
	base[3]= (V471);
	base[4]= VV[228];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1752;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V473= vs_base[0];
	goto T1750;
T1752:;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[152];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1758;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V475= Ct;
	base[3]= car(symbol_value(VV[89]));
	base[4]= VV[229];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1765;}
	base[3]= VV[230];
	base[4]= car(symbol_value(VV[89]));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1765:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V473= vs_base[0];
	V478= list(2,VV[231],(V471));
	V477= make_cons(/* INLINE-ARGS */V478,Cnil);
	goto T1750;
T1758:;
	base[3]= VV[232];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T1750:;
	if(type_of((V473))==t_symbol){
	goto T1779;}
	base[3]= VV[233];
	base[4]= (V473);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1777;
T1779:;
	base[3]= (V473);
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],3);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V474= vs_base[0];
	if(((V474))!=Cnil){
	goto T1784;}
	base[3]= VV[234];
	base[4]= (V473);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1777;
T1784:;
	if(((V475))==Cnil){
	goto T1777;}
	if((structure_ref((V474),VV[221],2))!=Cnil){
	goto T1777;}
	base[3]= VV[235];
	base[4]= (V473);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1777:;
	{object V479;
	object V480;
	object V481;
	V479= structure_ref((V474),VV[221],3);
	base[3]= structure_ref((V474),VV[221],1);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk380)();
	vs_top=sup;
	V482= vs_base[0];
	V480= nconc((V477),V482);
	V481= structure_ref((V474),VV[221],4);
	if(!(type_of((V479))==t_symbol)){
	goto T1804;}
	base[3]= (V479);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V479= vs_base[0];
T1804:;
	if(((V475))==Cnil){
	goto T1811;}
	base[3]= (V479);
	base[4]= (V470);
	base[5]= (V472);
	base[6]= (V480);
	base[7]= VV[236];
	base[8]= Ct;
	{object V483;
	V483= (V481);
	 vs_top=base+9;
	 while(!endp(V483))
	 {vs_push(car(V483));V483=cdr(V483);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V476= vs_base[0];
	goto T1809;
T1811:;
	base[3]= (V479);
	base[4]= (V470);
	base[5]= (V472);
	base[6]= (V480);
	{object V484;
	V484= (V481);
	 vs_top=base+7;
	 while(!endp(V484))
	 {vs_push(car(V484));V484=cdr(V484);}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V476= vs_base[0];
T1809:;}
	if((symbol_value(VV[101]))==Cnil){
	goto T1825;}
	base[3]= VV[237];
	base[4]= symbol_value(VV[101]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1825:;
	V486 = make_fixnum(length((V476)));
	{register object x= V486,V485= VV[238];
	while(!endp(V485))
	if(eql(x,V485->c.c_car)){
	goto T1830;
	}else V485=V485->c.c_cdr;}
	base[3]= VV[239];
	base[4]= (V473);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1830:;
	{register object V487;
	register object V488;
	V487= car((V476));
	V488= Cnil;
T1838:;
	if(((V487))!=Cnil){
	goto T1839;}
	goto T1835;
T1839:;
	V488= car((V487));
	if(!(type_of((V488))!=t_cons)){
	goto T1845;}
	base[3]= (V488);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T1843;
T1845:;
	base[3]= car((V488));
	base[4]= cadr((V488));
	base[5]= caddr((V488));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T1843:;
	V487= cdr((V487));
	goto T1838;}
T1835:;
	V489= reverse(cadr((V476)));
	setq(VV[105],nconc(/* INLINE-ARGS */V489,symbol_value(VV[105])));
	base[3]= cddr((V476));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for NAMED-VARIABLE	*/

static L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_reserve(VM82);
	{object V490;
	check_arg(1);
	V490=(base[0]);
	vs_top=sup;
TTL:;
	{object V491;
	base[1]= (V490);
	base[2]= symbol_value(VV[101]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	V491= vs_base[0];
	if(((V491))!=Cnil){
	goto T1863;}
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
T1863:;
	setq(VV[101],(VFUN_NARGS=2,(*(LnkLI382))((V491),symbol_value(VV[101]))));
	base[1]= cdr((V491));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-COLLECT-PREPOSITIONAL-PHRASES	*/

static L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_reserve(VM83);
	{object V492;
	object V493;
	object V494;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V492=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1871;}
	V493=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1872;}
	V494=(base[2]);
	vs_top=sup;
	goto T1873;
T1871:;
	V493= Cnil;
T1872:;
	V494= Cnil;
T1873:;
	base[3]=make_cclosure_new(LC96,Cnil,Cnil,Cdata);
	base[3]=MMcons(base[3],Cnil);
	{object V495;
	object V496;
	register object V497;
	register object V498;
	object V499;
	object V500;
	{object V501;
	object V502= (V494);
	if(endp(V502)){
	V499= Cnil;
	goto T1876;}
	base[4]=V501=MMcons(Cnil,Cnil);
T1877:;
	V504= car((V502->c.c_car));
	V505= (base[3]->c.c_car);
	base[5]= (VFUN_NARGS=4,(*(LnkLI364))(/* INLINE-ARGS */V504,(V492),VV[20],V505));
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V501->c.c_cdr)= vs_base[0];
	while(!endp(MMcdr(V501)))V501=MMcdr(V501);
	if(endp(V502=MMcdr(V502))){
	base[4]=base[4]->c.c_cdr;
	V499= base[4];
	goto T1876;}
	goto T1877;}
T1876:;
	{object V506;
	object V507= (V494);
	if(endp(V507)){
	V500= Cnil;
	goto T1881;}
	base[4]=V506=MMcons(Cnil,Cnil);
T1882:;
	(V506->c.c_car)= car((V507->c.c_car));
	if(endp(V507=MMcdr(V507))){
	V500= base[4];
	goto T1881;}
	V506=MMcdr(V506)=MMcons(Cnil,Cnil);
	goto T1882;}
T1881:;
	V495= Cnil;
	V496= (V494);
	V497= Cnil;
	V498= Cnil;
T1885:;
	if((symbol_value(VV[89]))!=Cnil){
	goto T1886;}
	base[4]= nreverse((V496));
	vs_top=(vs_base=base+4)+1;
	return;
T1886:;
	V495= car(symbol_value(VV[89]));
	{register object V508;
	register object V509;
	V508= (V492);
	V509= car((V508));
T1896:;
	if(!(endp((V508)))){
	goto T1897;}
	goto T1892;
T1897:;
	base[5]= (V495);
	base[6]= (V509);
	vs_top=(vs_base=base+5)+2;
	L96(base);
	vs_top=sup;
	V498= vs_base[0];
	if(((V498))==Cnil){
	goto T1901;}
	V497= (V509);
	goto T1892;
T1901:;
	V508= cdr((V508));
	V509= car((V508));
	goto T1896;}
T1892:;
	if(((V497))==Cnil){
	goto T1915;}
	{register object x= (V498),V510= (V499);
	while(!endp(V510))
	if(eql(x,V510->c.c_car)){
	goto T1919;
	}else V510=V510->c.c_cdr;
	goto T1917;}
T1919:;
	{register object x= (V498),V511= (V500);
	while(!endp(V511))
	if(eql(x,V511->c.c_car)){
	goto T1923;
	}else V511=V511->c.c_cdr;
	goto T1922;}
T1923:;
	base[4]= VV[240];
	goto T1920;
T1922:;
	base[4]= VV[241];
T1920:;
	base[5]= (V495);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1917:;
	if(!(type_of((V497))==t_cons||((V497))==Cnil)){
	goto T1928;}
	V500= append((V497),(V500));
	goto T1926;
T1928:;
	V500= make_cons((V497),(V500));
T1926:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V512= vs_base[0];
	V513= list(2,(V498),V512);
	V496= make_cons(/* INLINE-ARGS */V513,(V496));
	goto T1913;
T1915:;
	if(((V493))==Cnil){
	goto T1934;}
	base[4]= (V495);
	base[5]= VV[242];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1934;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	{register object V514;
	object V515;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V514= vs_base[0];
	V515= Cnil;
T1943:;
	if(type_of((V514))!=t_cons){
	goto T1947;}
	if(type_of(cdr((V514)))!=t_cons){
	goto T1947;}
	if((cddr((V514)))!=Cnil){
	goto T1947;}
	if(!(type_of(car((V514)))==t_symbol)){
	goto T1947;}
	if((cadr((V514)))==Cnil){
	goto T1946;}
	if(type_of(cadr((V514)))==t_symbol){
	goto T1946;}
T1947:;
	base[4]= VV[243];
	base[5]= (V514);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1946:;
	if((cadr((V514)))==Cnil){
	goto T1961;}
	base[4]= car((V514));
	base[5]= symbol_value(VV[101]);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	V515= vs_base[0];
	if(((V515))==Cnil){
	goto T1965;}
	base[4]= VV[244];
	base[5]= car((V514));
	base[6]= cadr((V514));
	base[7]= cadr((V515));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1961;
T1965:;
	V516= make_cons(car((V514)),cadr((V514)));
	setq(VV[101],make_cons(/* INLINE-ARGS */V516,symbol_value(VV[101])));
T1961:;
	if((symbol_value(VV[89]))==Cnil){
	goto T1976;}
	if(!(type_of(car(symbol_value(VV[89])))==t_symbol)){
	goto T1975;}
T1976:;
	goto T1913;
T1975:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V514= vs_base[0];
	goto T1943;}
T1934:;
	base[4]= nreverse((V496));
	vs_top=(vs_base=base+4)+1;
	return;
T1913:;
	V497= Cnil;
	V498= Cnil;
	goto T1885;}
	}
}
/*	function definition for LOOP-SEQUENCER	*/

static L97()
{register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_reserve(VM84);
	{object V517;
	register object V518;
	object V519;
	object V520;
	object V521;
	object V522;
	object V523;
	object V524;
	object V525;
	object V526;
	check_arg(10);
	V517=(base[0]);
	V518=(base[1]);
	V519=(base[2]);
	V520=(base[3]);
	V521=(base[4]);
	V522=(base[5]);
	V523=(base[6]);
	V524=(base[7]);
	V525=(base[8]);
	V526=(base[9]);
	vs_top=sup;
TTL:;
	{object V527;
	object V528;
	object V529;
	object V530;
	object V531;
	object V532;
	object V533;
	register object V534;
	register object V535;
	object V536;
	object V537;
	object V538;
	object V539;
	object V540;
	object V541;{object V543;
	base[10]= (V518);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V543= vs_base[0];
	if(V543==Cnil)goto T1989;
	V542= V543;
	goto T1988;
T1989:;}
	V542= small_fixnum(0);
T1988:;
	V531= one_plus(V542);
	V527= Cnil;
	V528= Cnil;
	V529= Cnil;
	V530= Cnil;
	V532= Ct;
	V533= Cnil;
	V534= Cnil;
	V535= Cnil;
	V536= Cnil;
	V537= Cnil;
	V538= Cnil;
	V539= Cnil;
	V540= Cnil;
	V541= Cnil;
	if(((V520))==Cnil){
	goto T1992;}
	base[10]= (V520);
	base[11]= Cnil;
	base[12]= (V521);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T1992:;
	{register object V544;
	register object V545;
	register object V546;
	object V547;
	V544= (V526);
	V545= Cnil;
	V546= Cnil;
	V547= Cnil;
T2000:;
	if(((V544))!=Cnil){
	goto T2001;}
	goto T1998;
T2001:;
	V545= caar((V544));
	V546= cadar((V544));
	{object V548= (V545);
	if((V548!= VV[383])
	&& (V548!= VV[231]))goto T2010;
	V528= Ct;
	base[10]= (V522);
	base[11]= (V546);
	base[12]= (V523);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	goto T2009;
T2010:;
	if((V548!= VV[384])
	&& (V548!= VV[245])
	&& (V548!= VV[247]))goto T2016;
	V536= Ct;
	if(!(((V545))==(VV[245]))){
	goto T2021;}
	V534= VV[246];
	goto T2019;
T2021:;
	if(!(((V545))==(VV[247]))){
	goto T2019;}
	V534= VV[248];
T2019:;
	base[10]= (V546);
	base[11]= (V518);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V546= vs_base[0];
	vs_base++;
	}else{
	V546= Cnil;}
	if(vs_base<vs_top){
	V538= vs_base[0];
	vs_base++;
	}else{
	V538= Cnil;}
	if(vs_base<vs_top){
	V537= vs_base[0];
	}else{
	V537= Cnil;}
	vs_top=sup;
	base[10]= (V517);
	base[11]= (V546);
	base[12]= (V518);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T2009;
T2016:;
	if((V548!= VV[249])
	&& (V548!= VV[250])
	&& (V548!= VV[251])
	&& (V548!= VV[252])
	&& (V548!= VV[253]))goto T2034;
	base[10]= (V545);
	base[11]= VV[249];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2037;}
	V534= VV[248];
	V535= VV[248];
	goto T2035;
T2037:;
	base[10]= (V545);
	base[11]= VV[250];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2044;}
	V535= Ct;
	goto T2035;
T2044:;
	base[10]= (V545);
	base[11]= VV[251];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2050;}
	V534= VV[246];
	V535= VV[246];
	goto T2035;
T2050:;
	base[10]= (V545);
	base[11]= VV[252];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2057;}
	V534= VV[246];
	goto T2035;
T2057:;
	base[10]= (V545);
	base[11]= VV[253];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2035;}
	V534= VV[248];
T2035:;
	V539= Ct;
	base[10]= (V546);
	base[11]= (V518);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V546= vs_base[0];
	vs_base++;
	}else{
	V546= Cnil;}
	if(vs_base<vs_top){
	V540= vs_base[0];
	vs_base++;
	}else{
	V540= Cnil;}
	if(vs_base<vs_top){
	V541= vs_base[0];
	}else{
	V541= Cnil;}
	vs_top=sup;
	if(((V540))==Cnil){
	goto T2075;}
	V527= list(2,VV[214],(V541));
	goto T2073;
T2075:;
	base[11]= VV[254];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[11]= (V546);
	base[12]= (V518);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V527= vs_base[0];
T2073:;
	goto T2009;
T2034:;
	if((V548!= VV[212]))goto T2081;
	base[10]= (V546);
	base[11]= (V518);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V546= vs_base[0];
	vs_base++;
	}else{
	V546= Cnil;}
	if(vs_base<vs_top){
	V532= vs_base[0];
	vs_base++;
	}else{
	V532= Cnil;}
	if(vs_base<vs_top){
	V531= vs_base[0];
	}else{
	V531= Cnil;}
	vs_top=sup;
	if(((V532))!=Cnil){
	goto T2009;}
	base[11]= VV[255];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V531= vs_base[0];
	base[10]= (V531);
	base[11]= (V546);
	base[12]= (V518);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	goto T2009;
T2081:;
	base[10]= VV[256];
	base[11]= (V545);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk343)();
	vs_top=sup;}
T2009:;
	if(((V547))==Cnil){
	goto T2095;}
	if(((V534))==Cnil){
	goto T2095;}
	if(((V534))==((V547))){
	goto T2095;}
	base[10]= VV[257];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2095:;
	V547= (V534);
	V544= cdr((V544));
	goto T2000;}
T1998:;
	if(((V522))==Cnil){
	goto T2108;}
	if(((V528))!=Cnil){
	goto T2108;}
	base[10]= VV[258];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2108:;
	if(((V536))!=Cnil){
	goto T2114;}
	base[10]= (V517);
	V538= Ct;{object V549;
	base[12]= (V518);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V549= vs_base[0];
	if(V549==Cnil)goto T2122;
	V537= V549;
	goto T2121;
T2122:;}
	V537= small_fixnum(0);
T2121:;
	base[11]= (V537);
	base[12]= (V518);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T2114:;
	{register object x= (V534),V550= VV[259];
	while(!endp(V550))
	if(eql(x,V550->c.c_car)){
	goto T2129;
	}else V550=V550->c.c_cdr;
	goto T2128;}
T2129:;
	if(((V539))!=Cnil){
	goto T2131;}
	if(((V525))==Cnil){
	goto T2130;}
T2131:;
	if(((V539))!=Cnil){
	goto T2135;}
	base[11]= VV[260];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V527= vs_base[0];
	base[10]= (V527);
	base[11]= Cnil;
	base[12]= (V518);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V551= list(3,VV[11],(V527),(V525));
	setq(VV[105],make_cons(/* INLINE-ARGS */V551,symbol_value(VV[105])));
T2135:;
	if(((V535))==Cnil){
	goto T2147;}
	V529= VV[34];
	goto T2145;
T2147:;
	V529= VV[210];
T2145:;
T2130:;
	if(!(eql((V531),small_fixnum(1)))){
	goto T2151;}
	V533= list(2,VV[177],(V517));
	goto T2149;
T2151:;
	V533= list(3,VV[178],(V517),(V531));
T2149:;
	goto T2126;
T2128:;
	if(((V536))!=Cnil){
	goto T2153;}
	if(((V525))!=Cnil){
	goto T2156;}
	base[10]= VV[261];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2156:;
	V552= list(3,VV[11],(V517),list(2,VV[196],(V525)));
	setq(VV[105],make_cons(/* INLINE-ARGS */V552,symbol_value(VV[105])));
T2153:;
	if(((V525))==Cnil){
	goto T2161;}
	if(((V527))!=Cnil){
	goto T2161;}
	base[10]= (V518);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V527= vs_base[0];
	V535= Ct;
T2161:;
	if(((V527))==Cnil){
	goto T2170;}
	if(((V535))==Cnil){
	goto T2175;}
	V529= VV[33];
	goto T2173;
T2175:;
	V529= VV[262];
T2173:;
T2170:;
	if(!(eql((V531),small_fixnum(1)))){
	goto T2179;}
	V533= list(2,VV[196],(V517));
	goto T2177;
T2179:;
	V533= list(3,VV[263],(V517),(V531));
T2177:;
T2126:;
	if(((V529))==Cnil){
	goto T2181;}
	base[10]= Ct;
	base[11]= (V517);
	base[12]= list(3,(V529),(V517),(V527));
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V530= vs_base[0];
T2181:;
	if(((V524))==Cnil){
	goto T2188;}
	base[10]= (V519);
	base[11]= (V517);
	base[12]= (V524);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V553= vs_base[0];
	V524= list(2,(V520),V553);
T2188:;
	{object V554;
	object V555;
	V554= (V530);
	V555= (V530);
	if(((V532))==Cnil){
	goto T2196;}
	if(((V538))==Cnil){
	goto T2196;}
	if(((V540))==Cnil){
	goto T2196;}
	base[10]= (V529);
	vs_top=(vs_base=base+10)+1;
	Lsymbol_function();
	vs_top=sup;
	V556= vs_base[0];
	V554= (
	V557 = V556,
	(type_of(V557) == t_sfun ?(*(object (*)())((V557)->sfn.sfn_self)):
	(fcall.fun=(V557),fcall.argd=2,fcalln))((V537),(V541)));
	if(((V554))==Cnil){
	goto T2196;}
	V555= Ct;
T2196:;
	base[10]= Ct;
	base[11]= (V517);
	base[12]= (V533);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V558= vs_base[0];
	base[10]= list(8,Cnil,list(2,(V517),V558),(V555),(V524),Cnil,Cnil,(V554),(V524));
	vs_top=(vs_base=base+10)+1;
	return;}}
	}
}
/*	function definition for LOOP-FOR-ARITHMETIC	*/

static L98()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_reserve(VM85);
	{object V559;
	object V560;
	object V561;
	object V562;
	check_arg(4);
	V559=(base[0]);
	V560=(base[1]);
	V561=(base[2]);
	V562=(base[3]);
	vs_top=sup;
TTL:;
	base[4]= (V559);
	base[6]= (V561);
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
	V563= list(2,(V562),(V560));
	base[16]= make_cons(/* INLINE-ARGS */V563,Cnil);
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

static L99()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_reserve(VM86);
	{object V564;
	object V565;
	object V566;
	object V567;
	object V568;
	object V569;
	object V570;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,4,VV[386],VV[387],VV[388],VV[389]);
	V564=(base[0]);
	V565=(base[1]);
	V566=(base[2]);
	vs_top=sup;
	V567=(base[3]);
	V568=(base[4]);
	V569=(base[5]);
	V570=(base[6]);
	{object V571;
	object V572;
	base[11]= VV[265];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk390)();
	if(vs_base>=vs_top){vs_top=sup;goto T2230;}
	V571= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2231;}
	V572= vs_base[0];
	vs_top=sup;
	goto T2232;
T2230:;
	V571= Cnil;
T2231:;
	V572= Cnil;
T2232:;
	{object V573;
	base[11]= VV[266];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk390)();
	vs_top=sup;
	V573= vs_base[0];
	base[11]= (V571);
	base[12]= VV[207];
	base[13]= (V572);
	base[14]= (V564);
	if((V565)!=Cnil){
	base[15]= (V565);
	goto T2240;}
	base[15]= (V570);
T2240:;
	base[16]= (V573);
	base[17]= (V569);
	base[18]= list(3,(V567),(V573),(V571));
	base[19]= list(2,(V568),(V573));
	base[20]= (V566);
	vs_top=(vs_base=base+11)+10;
	(void) (*Lnk385)();
	vs_top=sup;
	V574= vs_base[0];
	base[11]= listA(3,Cnil,Cnil,V574);
	vs_top=(vs_base=base+11)+1;
	return;}}
	}
}
/*	function definition for LOOP-HASH-TABLE-ITERATION-PATH	*/

static L100()
{register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_reserve(VM87);
	bds_check;
	{object V575;
	object V576;
	object V577;
	register object V578;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,1,VV[391]);
	V575=(base[0]);
	V576=(base[1]);
	V577=(base[2]);
	vs_top=sup;
	V578=(base[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
T2248:;
	base[7]= (V578);
	base[8]= VV[267];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2249;}
	bds_unwind1;
	bds_unwind1;
	goto T2246;
T2249:;
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[268];
	base[10]= (V578);
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
	V578= vs_base[0];
	base[7]= symbol_value(VV[50]);
	base[8]= VV[52];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	goto T2248;
T2246:;
	if((cdr((V577)))!=Cnil){
	goto T2275;}
	{register object x= caar((V577)),V579= VV[269];
	while(!endp(V579))
	if(eql(x,V579->c.c_car)){
	goto T2276;
	}else V579=V579->c.c_cdr;}
T2275:;
	base[5]= VV[270];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T2274;
T2276:;
	if(((V577))!=Cnil){
	goto T2274;}
	base[5]= VV[271];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2274:;
	{object V580;
	object V581;
	object V582;
	register object V583;
	base[5]= VV[272];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V580= vs_base[0];
	base[5]= VV[273];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V581= vs_base[0];
	V582= Cnil;
	V583= Cnil;
	{object V584;
	object V585;
	if(!(((V578))==(VV[274]))){
	goto T2291;}
	base[5]= VV[275];
	goto T2289;
T2291:;
	base[5]= VV[274];
T2289:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk390)();
	if(vs_base>=vs_top){vs_top=sup;goto T2293;}
	V584= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2294;}
	V585= vs_base[0];
	vs_top=sup;
	goto T2295;
T2293:;
	V584= Cnil;
T2294:;
	V585= Cnil;
T2295:;
	V585= Ct;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V582= vs_base[0];
	{register object V586;
	register object V587;
	register object V588;
	V589= list(3,(V575),Cnil,(V576));
	V590= list(2,(V580),cadar((V577)));
	if((V585)==Cnil){
	V591= Cnil;
	goto T2301;}
	if((V584)==Cnil){
	V591= Cnil;
	goto T2301;}
	V592= list(2,(V584),Cnil);
	V591= make_cons(/* INLINE-ARGS */V592,Cnil);
T2301:;
	V588= listA(3,/* INLINE-ARGS */V589,/* INLINE-ARGS */V590,V591);
	V586= Cnil;
	V587= Cnil;
	if(!(((V578))==(VV[274]))){
	goto T2304;}
	V586= (V575);
	if((V585)==Cnil){
	V587= Cnil;
	goto T2308;}
	V587= (V584);
T2308:;
	goto T2302;
T2304:;
	if((V585)==Cnil){
	V586= Cnil;
	goto T2310;}
	V586= (V584);
T2310:;
	V587= (V575);
T2302:;
	V593= list(2,VV[276],list(2,(V581),(V580)));
	setq(VV[106],make_cons(/* INLINE-ARGS */V593,symbol_value(VV[106])));
	if(!(type_of((V586))==t_cons)){
	goto T2314;}{object V594;
	V594= (V586);
	base[5]= VV[277];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V586= vs_base[0];
	V583= listA(3,V594,(V586),(V583));}
	V595= list(2,(V586),Cnil);
	V588= make_cons(/* INLINE-ARGS */V595,(V588));
T2314:;
	if(!(type_of((V587))==t_cons)){
	goto T2322;}{object V596;
	V596= (V587);
	base[5]= VV[278];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V587= vs_base[0];
	V583= listA(3,V596,(V587),(V583));}
	V597= list(2,(V587),Cnil);
	V588= make_cons(/* INLINE-ARGS */V597,(V588));
T2322:;
	V598= list(3,(V582),(V586),(V587));
	base[5]= list(6,(V588),Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V598,make_cons((V581),Cnil))),(V583));
	vs_top=(vs_base=base+5)+1;
	return;}}}
	}
}
/*	function definition for LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static L101()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_reserve(VM88);
	{object V599;
	object V600;
	register object V601;
	object V602;
	if(vs_top-vs_base<3) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,1,VV[392]);
	V599=(base[0]);
	V600=(base[1]);
	V601=(base[2]);
	vs_top=sup;
	V602=(base[3]);
	if((cdr((V601)))!=Cnil){
	goto T2331;}
	{register object x= caar((V601)),V603= VV[279];
	while(!endp(V603))
	if(eql(x,V603->c.c_car)){
	goto T2332;
	}else V603=V603->c.c_cdr;}
T2331:;
	base[5]= VV[280];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T2330;
T2332:;
	if(((V601))!=Cnil){
	goto T2330;}
	base[5]= VV[281];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2330:;
	if(type_of((V599))==t_symbol){
	goto T2340;}
	base[5]= VV[282];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2340:;
	{object V604;
	object V605;
	base[5]= VV[283];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V604= vs_base[0];
	base[5]= VV[284];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V605= vs_base[0];
	V606= list(2,VV[285],listA(3,(V605),(V604),(V602)));
	setq(VV[106],make_cons(/* INLINE-ARGS */V606,symbol_value(VV[106])));
	V607= list(3,(V599),Cnil,(V600));
	V608= list(2,/* INLINE-ARGS */V607,list(2,(V604),cadar((V601))));
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V609= vs_base[0];
	V610= list(2,V609,(V599));
	base[5]= list(6,/* INLINE-ARGS */V608,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V610,make_cons((V605),Cnil))),Cnil);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for MAKE-ANSI-LOOP-UNIVERSE	*/

static L102()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_reserve(VM89);
	{object V611;
	check_arg(1);
	V611=(base[0]);
	vs_top=sup;
TTL:;
	{register object V612;
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
	if(((V611))==Cnil){
	goto T2380;}
	base[12]= VV[304];
	goto T2378;
T2380:;
	base[12]= Ct;
T2378:;
	vs_top=(vs_base=base+1)+12;
	(void) (*Lnk393)();
	vs_top=sup;
	V612= vs_base[0];
	base[1]= VV[305];
	base[2]= VV[306];
	base[3]= (V612);
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
	base[3]= (V612);
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
	base[3]= (V612);
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
	base[3]= (V612);
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
	base[3]= (V612);
	base[4]= VV[226];
	base[5]= VV[320];
	base[6]= VV[227];
	base[7]= Cnil;
	base[8]= VV[225];
	base[9]= VV[321];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk394)();
	vs_top=sup;
	base[1]= (V612);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-STANDARD-EXPANSION	*/

static L103()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_reserve(VM90);
	{register object V613;
	object V614;
	object V615;
	check_arg(3);
	V613=(base[0]);
	V614=(base[1]);
	V615=(base[2]);
	vs_top=sup;
TTL:;
	if(((V613))==Cnil){
	goto T2433;}
	if(!(type_of(car((V613)))==t_symbol)){
	goto T2433;}
	base[3]= (V613);
	base[4]= (V614);
	base[5]= (V615);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk395)();
	return;
T2433:;
	{object V616;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V616= vs_base[0];
	V617= make_cons(VV[14],(V613));
	base[3]= list(3,VV[120],Cnil,list(4,VV[73],(V616),/* INLINE-ARGS */V617,list(2,VV[82],(V616))));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP	*/

static L104()
{register object *base=vs_base;
	register object *sup=base+VM91; VC91
	vs_reserve(VM91);
	check_arg(2);
	vs_top=sup;
	{object V618=base[0]->c.c_cdr;
	base[2]= V618;}
	base[3]= base[2];
	base[4]= base[1];
	base[5]= symbol_value(VV[322]);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk396)();
	return;
}
/*	local function IN-GROUP-P	*/

static LC96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_reserve(VM92);
	{object V619;
	object V620;
	check_arg(2);
	V619=(base[0]);
	V620=(base[1]);
	vs_top=sup;
	base[2]= (V619);
	base[3]= (V620);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V621= vs_base[0];
	base[2]= car(V621);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function IN-GROUP-P	*/

static L96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_reserve(VM93);
	{object V622;
	object V623;
	check_arg(2);
	V622=(base[0]);
	V623=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V622);
	base[3]= (V623);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V624= vs_base[0];
	base[2]= car(V624);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function MAKE-ENDTEST	*/

static L82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM94; VC94
	vs_reserve(VM94);
	{object V625;
	check_arg(1);
	V625=(base[0]);
	vs_top=sup;
TTL:;
	if(((V625))!=Cnil){
	goto T2451;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T2451:;
	{register object x= Ct,V626= (V625);
	while(!endp(V626))
	if(eql(x,V626->c.c_car)){
	goto T2455;
	}else V626=V626->c.c_cdr;
	goto T2454;}
T2455:;
	base[1]= VV[189];
	vs_top=(vs_base=base+1)+1;
	return;
T2454:;
	V625= nreverse((V625));
	if((cdr((V625)))!=Cnil){
	goto T2458;}
	V627= car((V625));
	goto T2456;
T2458:;
	V627= make_cons(VV[35],(V625));
T2456:;
	base[1]= list(3,VV[8],V627,VV[190]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function GET-CLAUSE	*/

static L66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_reserve(VM95);
	{object V628;
	check_arg(1);
	V628=(base[0]);
	vs_top=sup;
TTL:;
	{register object V629;
	V629= Cnil;
T2462:;
	{register object V630;
	register object V631;
	V630= car(symbol_value(VV[89]));
	bds_bind(VV[108],Cnil);
	V631= Cnil;
	if(type_of((V630))==t_symbol){
	goto T2468;}
	base[2]= VV[149];
	base[3]= (V630);
	base[4]= (V628);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	bds_unwind1;
	goto T2465;
T2468:;
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
	goto T2476;}
	if(base0[3]!=Cnil){
	V632= base0[3];
	goto T2482;}
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	base0[3]= vs_base[0];
	V632= base0[3];
T2482:;
	setq(VV[89],make_cons(V632,cdr(symbol_value(VV[89]))));
T2476:;
	base[2]= (V630);
	base[3]= structure_ref(symbol_value(VV[96]),VV[39],0);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V631= vs_base[0];
	if(((V631))==Cnil){
	goto T2484;}
	base[3]= car((V631));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V633;
	V633= cdr((V631));
	 vs_top=base+3;
	 while(!endp(V633))
	 {vs_push(car(V633));V633=cdr(V633);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[108]->s.s_dbind))==Cnil)){
	goto T2485;}
T2484:;
	base[2]= VV[151];
	base[3]= (V630);
	base[4]= (V628);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	bds_unwind1;
	goto T2465;
T2485:;
	base[2]= (VV[108]->s.s_dbind);
	base[3]= (V629);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V629= vs_base[0];
	bds_unwind1;}
T2465:;
	base[1]= car(symbol_value(VV[89]));
	base[2]= VV[152];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2504;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	goto T2502;
T2504:;
	if((cdr((V629)))==Cnil){
	goto T2509;}
	V634= nreverse((V629));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V634);
	vs_top=(vs_base=base+1)+1;
	return;
T2509:;
	base[1]= car((V629));
	vs_top=(vs_base=base+1)+1;
	return;
T2502:;
	goto T2462;}
	}
}
/*	local function REPLICATE	*/

static L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_reserve(VM96);
	{object V635;
	object V636;
	check_arg(2);
	V635=(base[0]);
	V636=(base[1]);
	vs_top=sup;
TTL:;
	if(!(type_of((V636))!=t_cons)){
	goto T2514;}
	base[2]= (V635);
	vs_top=(vs_base=base+2)+1;
	return;
T2514:;
	base[2]= (V635);
	base[3]= car((V636));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V637= vs_base[0];
	base[2]= (V635);
	base[3]= cdr((V636));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V638= vs_base[0];
	base[2]= make_cons(V637,V638);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function TRANSLATE	*/

static L58(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_reserve(VM97);
	{register object V639;
	register object V640;
	check_arg(2);
	V639=(base[0]);
	V640=(base[1]);
	vs_top=sup;
TTL:;
	if(((V639))!=Cnil){
	goto T2523;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T2523:;
	if(!(type_of((V639))!=t_cons)){
	goto T2526;}{object V641;
	base[3]= (V639);
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],4);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V641= vs_base[0];
	if(V641==Cnil)goto T2529;
	base[2]= V641;
	goto T2528;
T2529:;}{object V642;
	base[3]= symbol_name((V639));
	base[4]= structure_ref(symbol_value(VV[96]),VV[39],5);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V642= vs_base[0];
	if(V642==Cnil)goto T2533;
	base[2]= V642;
	goto T2528;
T2533:;}
	base[3]= VV[137];
	base[4]= base0[1];
	base[5]= (V639);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	base[2]= vs_base[0];
T2528:;
	base[3]= (V640);
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	return;
T2526:;
	if(!(type_of((V640))!=t_cons)){
	goto T2542;}
	base[2]= VV[138];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	return;
T2542:;
	base[2]= car((V639));
	base[3]= car((V640));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V643= vs_base[0];
	base[2]= cdr((V639));
	base[3]= cdr((V640));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V644= vs_base[0];
	base[2]= make_cons(V643,V644);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LIST-SIZE	*/

static L40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_reserve(VM98);
	{object V645;
	check_arg(1);
	V645=(base[0]);
	vs_top=sup;
TTL:;
	{int V646;
	V646= 0;
	{register object V647;
	object V648;
	V647= (V645);
	V648= car((V647));
T2557:;
	if(!(endp((V647)))){
	goto T2558;}
	base[2]= make_fixnum(V646);
	vs_top=(vs_base=base+2)+1;
	return;
T2558:;
	V649 = make_fixnum(V646);
	base[2]= (V648);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	V650= vs_base[0];
	V646= fix(number_plus(V649,V650));
	V647= cdr((V647));
	V648= car((V647));
	goto T2557;}}
	}
}
/*	local function MAKEBODY	*/

static L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_reserve(VM99);
	check_arg(0);
	vs_top=sup;
TTL:;
	{object V651;
	V653= nreverse(base0[7]);
	base[0]= append(base0[2],/* INLINE-ARGS */V653);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V652= vs_base[0];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V655= vs_base[0];
	base[0]= append(base0[4],V655);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V654= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V656= vs_base[0];
	V657= make_cons(VV[76],V656);
	V658= append(V654,/* INLINE-ARGS */V657);
	V659= make_cons(VV[74],/* INLINE-ARGS */V658);
	V660= append(V652,/* INLINE-ARGS */V659);
	V651= make_cons(VV[73],/* INLINE-ARGS */V660);
	if((base0[9])==Cnil){
	goto T2583;}
	V661= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V661,Cnil),(V651));
	vs_top=(vs_base=base+0)+1;
	return;
T2583:;
	base[0]= (V651);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_reserve(VM100);
	{object V662;
	check_arg(1);
	V662=(base[0]);
	vs_top=sup;
TTL:;
	if((cdr((V662)))!=Cnil){
	goto T2586;}
	base[1]= car((V662));
	vs_top=(vs_base=base+1)+1;
	return;
T2586:;
	base[1]= make_cons(VV[14],(V662));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function PSIMP	*/

static L33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_reserve(VM101);
	{object V663;
	check_arg(1);
	V663=(base[0]);
	vs_top=sup;
TTL:;
	{register object V664;
	V664= Cnil;
	{register object V665;
	register object V666;
	V665= (V663);
	V666= car((V665));
T2592:;
	if(!(endp((V665)))){
	goto T2593;}
	goto T2588;
T2593:;
	if(((V666))==Cnil){
	goto T2597;}
	V664= make_cons((V666),(V664));
	if(!(type_of((V666))==t_cons)){
	goto T2597;}
	{register object x= car((V666)),V667= VV[72];
	while(!endp(V667))
	if(eql(x,V667->c.c_car)){
	goto T2605;
	}else V667=V667->c.c_cdr;
	goto T2597;}
T2605:;
	goto T2588;
T2597:;
	V665= cdr((V665));
	V666= car((V665));
	goto T2592;}
T2588:;
	base[1]= nreverse((V664));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function FIND-NON-NULL	*/

static L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_reserve(VM102);
	{object V668;
	check_arg(1);
	V668=(base[0]);
	vs_top=sup;
TTL:;
	{register object V669;
	V669= (V668);
T2612:;
	if(type_of((V669))==t_cons){
	goto T2613;}
	base[1]= (V669);
	vs_top=(vs_base=base+1)+1;
	return;
T2613:;
	{register object V670;
	V670= car((V669));
	V669= cdr((V669));
	base[1]= (V670);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2617;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
T2617:;
	goto T2612;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_reserve(VM103);
	{register object V671;
	register object V672;
	object V673;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V671=(base[0]);
	V672=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2626;}
	V673=(base[2]);
	vs_top=sup;
	goto T2627;
T2626:;
	V673= Cnil;
T2627:;
	{register object V674;
	V674= (V671);
	if(!(((V674))==Cnil)){
	goto T2630;}
	if(!(type_of((V672))==t_cons)){
	goto T2633;}
	if(!((car((V672)))==(VV[62]))){
	goto T2636;}
	{object V675;
	object V676= cdr((V672));
	if(endp(V676)){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V675=MMcons(Cnil,Cnil);
T2638:;
	{register object V677;
	V677= (V676->c.c_car);
	if(type_of((V677))==t_cons){
	goto T2640;}
	(V675->c.c_cdr)= Cnil;
	goto T2639;
T2640:;
	if(!((((car((V677)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2644;}
	goto T2642;
T2644:;
	if(!(((type_of(cadr((V677)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2646;}
	goto T2642;
T2646:;
	base[4]= (V677);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V677= vs_base[0];
	if(((type_of((V677))==t_symbol?Ct:Cnil))==Cnil){
	goto T2642;}
	(V675->c.c_cdr)= Cnil;
	goto T2639;
T2642:;
	(V675->c.c_cdr)= make_cons((V677),Cnil);}
T2639:;
	while(!endp(MMcdr(V675)))V675=MMcdr(V675);
	if(endp(V676=MMcdr(V676))){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2638;}
T2636:;
	base[3]= make_cons((V672),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
T2633:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T2630:;
	if(!(type_of((V674))==t_cons)){
	goto T2652;}
	{object V678;
	object V679;
	object V680;
	object V681;
	V678= car((V671));
	V679= cdr((V671));
	base[7]= (V678);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V680= vs_base[0];
	base[7]= (V679);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V681= vs_base[0];
	if(((V680))!=Cnil){
	goto T2660;}
	if(((V681))==Cnil){
	goto T2661;}
T2660:;
	if(((V681))==Cnil){
	goto T2666;}
	{register object V683;
	object V684;
	if((V673)!=Cnil){
	V683= (V673);
	goto T2668;}
	V683= symbol_value(VV[66]);
T2668:;
	base[9]= (V678);
	base[10]= list(2,VV[65],(V683));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V685= vs_base[0];
	V686= list(3,VV[11],(V683),list(2,VV[10],(V683)));
	base[9]= (V679);
	base[10]= (V683);
	base[11]= (V683);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V687= vs_base[0];
	V688= make_cons(/* INLINE-ARGS */V686,V687);
	V684= append(V685,/* INLINE-ARGS */V688);
	if((V673)==Cnil){
	goto T2678;}
	if(((V683))==((V672))){
	goto T2682;}
	V690= list(3,VV[11],(V683),(V672));
	V689= make_cons(/* INLINE-ARGS */V690,Cnil);
	goto T2680;
T2682:;
	V689= Cnil;
T2680:;
	base[9]= append(V689,(V684));
	vs_top=(vs_base=base+9)+1;
	return;
T2678:;
	V691= list(2,(V683),(V672));
	V692= listA(3,VV[29],make_cons(/* INLINE-ARGS */V691,Cnil),(V684));
	base[9]= make_cons(/* INLINE-ARGS */V692,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
T2666:;
	base[7]= (V678);
	base[8]= list(2,VV[65],(V672));
	base[9]= (V673);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
T2661:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
T2652:;
	if(((V671))==((V672))){
	goto T2688;}
	V693= list(3,VV[11],(V671),(V672));
	base[3]= make_cons(/* INLINE-ARGS */V693,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
T2688:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function MAKETABLE	*/

static L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM104; VC104
	vs_reserve(VM104);
	{object V694;
	check_arg(1);
	V694=(base[0]);
	vs_top=sup;
TTL:;
	{object V695;
	object V696;
	V695= make_fixnum(length((V694)));
	base[3]= VV[61];
	if(!(number_compare((V695),small_fixnum(10))<0)){
	goto T2695;}
	base[4]= small_fixnum(10);
	goto T2693;
T2695:;
	base[4]= (V695);
T2693:;
	base[5]= VV[20];
	base[6]= symbol_function(VV[397]);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V696= vs_base[0];
	{register object V697;
	register object V698;
	V697= (V694);
	V698= car((V697));
T2703:;
	if(!(endp((V697)))){
	goto T2704;}
	goto T2699;
T2704:;
	{object V699;
	object V701;
	V699= symbol_name(car((V698)));
	V701= cadr((V698));
	base[6]= (V699);
	base[7]= V696;
	base[8]= (V701);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V697= cdr((V697));
	V698= car((V697));
	goto T2703;}
T2699:;
	base[3]= (V696);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CDR-WRAP	*/

static L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_reserve(VM105);
	{register object V702;
	register int V703;
	check_arg(2);
	V702=(base[0]);
	V703=fix(base[1]);
	vs_top=sup;
TTL:;
T2720:;
	if(!((V703)<=(4))){
	goto T2721;}switch(V703){
	case 1:
T2727:;
	V704= VV[10];
	goto T2725;
	case 2:
T2728:;
	V704= VV[15];
	goto T2725;
	case 3:
T2729:;
	V704= VV[16];
	goto T2725;
	case 4:
T2730:;
	V704= VV[17];
	goto T2725;
	default:
T2731:;
	V704= Cnil;
	goto T2725;}
	V704= Cnil;
T2725:;
	V702= list(2,V704,(V702));
	base[2]= (V702);
	vs_top=(vs_base=base+2)+1;
	return;
T2721:;
	V702= list(2,VV[17],(V702));
	V703= (V703)-(4);
	goto T2720;
	}
}
static LnkT396(){ call_or_link(VV[396],&Lnk396);} /* LOOP-STANDARD-EXPANSION */
static LnkT395(){ call_or_link(VV[395],&Lnk395);} /* LOOP-TRANSLATE */
static LnkT394(){ call_or_link(VV[394],&Lnk394);} /* ADD-LOOP-PATH */
static LnkT393(){ call_or_link(VV[393],&Lnk393);} /* MAKE-STANDARD-LOOP-UNIVERSE */
static LnkT390(){ call_or_link(VV[390],&Lnk390);} /* NAMED-VARIABLE */
static LnkT385(){ call_or_link(VV[385],&Lnk385);} /* LOOP-SEQUENCER */
static object  LnkTLI382(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[382],&LnkLI382,ap);} /* DELETE */
static LnkT381(){ call_or_link(VV[381],&Lnk381);} /* LOOP-TASSOC */
static LnkT380(){ call_or_link(VV[380],&Lnk380);} /* LOOP-COLLECT-PREPOSITIONAL-PHRASES */
static LnkT379(){ call_or_link(VV[379],&Lnk379);} /* MAKE-LOOP-PATH */
static LnkT378(){ call_or_link(VV[378],&Lnk378);} /* STRUCTURE-SUBTYPE-P */
static LnkT377(){ call_or_link(VV[377],&Lnk377);} /* LOOP-LIST-STEP */
static LnkT376(){ call_or_link(VV[376],&Lnk376);} /* LOOP-MAKE-ITERATION-VARIABLE */
static LnkT375(){ call_or_link(VV[375],&Lnk375);} /* LOOP-CONSTANT-FOLD-IF-POSSIBLE */
static LnkT374(){ call_or_link(VV[374],&Lnk374);} /* LOOP-WHEN-IT-VARIABLE */
static LnkT373(){ call_or_link(VV[373],&Lnk373);} /* LOOP-NOTE-MINIMAX-OPERATION */
static LnkT372(){ call_or_link(VV[372],&Lnk372);} /* MAKE-LOOP-MINIMAX */
static LnkT371(){ call_or_link(VV[371],&Lnk371);} /* LOOP-CHECK-DATA-TYPE */
static LnkT368(){ call_or_link(VV[368],&Lnk368);} /* LOOP-EMIT-FINAL-VALUE */
static LnkT367(){ call_or_link(VV[367],&Lnk367);} /* LOOP-GET-COLLECTION-INFO */
static LnkT366(){ call_or_link(VV[366],&Lnk366);} /* MAKE-LOOP-COLLECTOR */
static object  LnkTLI364(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[364],&LnkLI364,ap);} /* FIND */
static LnkT363(){ call_or_link(VV[363],&Lnk363);} /* LOOP-OPTIONAL-TYPE */
static LnkT360(){ call_or_link(VV[360],&Lnk360);} /* LOOP-EMIT-BODY */
static LnkT359(){ call_or_link(VV[359],&Lnk359);} /* LOOP-GET-PROGN */
static LnkT358(){ call_or_link(VV[358],&Lnk358);} /* LOOP-DISALLOW-CONDITIONAL */
static LnkT357(){ call_or_link(VV[357],&Lnk357);} /* LOOP-GET-FORM */
static LnkT356(){ call_or_link(VV[356],&Lnk356);} /* LOOP-CONSTANTP */
static LnkT355(){ call_or_link(VV[355],&Lnk355);} /* LOOP-MAKE-VARIABLE */
static LnkT354(){ call_or_link(VV[354],&Lnk354);} /* LOOP-DECLARE-VARIABLE */
static LnkT353(){ call_or_link(VV[353],&Lnk353);} /* LOOP-TEQUAL */
static object  LnkTLI352(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[352],&LnkLI352,2,ap);} /* COERCE */
static LnkT351(){ call_or_link(VV[351],&Lnk351);} /* LOOP-CONSTRUCT-RETURN */
static LnkT350(){ call_or_link(VV[350],&Lnk350);} /* LOOP-PSEUDO-BODY */
static LnkT349(){ call_or_link(VV[349],&Lnk349);} /* LOOP-TMEMBER */
static LnkT348(){ call_or_link(VV[348],&Lnk348);} /* LOOP-HACK-ITERATION */
static LnkT347(){ call_or_link(VV[347],&Lnk347);} /* LOOP-LOOKUP-KEYWORD */
static LnkT346(){ call_or_link(VV[346],&Lnk346);} /* LOOP-POP-SOURCE */
static LnkT345(){ call_or_link(VV[345],&Lnk345);} /* LOOP-BIND-BLOCK */
static LnkT344(){ call_or_link(VV[344],&Lnk344);} /* LOOP-ITERATION-DRIVER */
static LnkT343(){ call_or_link(VV[343],&Lnk343);} /* LOOP-ERROR */
static LnkT323(){ call_or_link(VV[323],&Lnk323);} /* SUBTYPEP */
static object  LnkTLI342(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[342],&LnkLI342,ap);} /* WARN */
static LnkT341(){ call_or_link(VV[341],&Lnk341);} /* LOOP-CONTEXT */
static LnkT340(){ call_or_link(VV[340],&Lnk340);} /* SPECIAL-OPERATOR-P */
static LnkT339(){ call_or_link(VV[339],&Lnk339);} /* ESTIMATE-CODE-SIZE-1 */
static LnkT338(){ call_or_link(VV[338],&Lnk338);} /* DESTRUCTURING-SIZE */
static LnkT77(){ call_or_link(VV[77],&Lnk77);} /* ESTIMATE-CODE-SIZE */
static LnkT337(){ call_or_link(VV[337],&Lnk337);} /* LOOP-CODE-DUPLICATION-THRESHOLD */
static LnkT336(){ call_or_link(VV[336],&Lnk336);} /* LOOP-OPTIMIZATION-QUANTITIES */
static LnkT335(){ call_or_link(VV[335],&Lnk335);} /* LOOP-WARN */
static LnkT334(){ call_or_link(VV[334],&Lnk334);} /* LOOP-MAKE-DESETQ */
static LnkT333(){ call_or_link(VV[333],&Lnk333);} /* LOOP-MAKE-PSETQ */
static LnkT332(){ call_or_link(VV[332],&Lnk332);} /* MAKE-LOOP-UNIVERSE */
static LnkT330(){ call_or_link(VV[330],&Lnk330);} /* TYPEP */
static LnkT328(){ call_or_link(VV[328],&Lnk328);} /* HIDE-VARIABLE-REFERENCE */
static LnkT326(){ call_or_link(VV[326],&Lnk326);} /* LOOP-TYPED-INIT */
static LnkT325(){ call_or_link(VV[325],&Lnk325);} /* MAKE-LOOP-MINIMAX-INTERNAL */
static LnkT324(){ call_or_link(VV[324],&Lnk324);} /* LOOP-GENTEMP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

