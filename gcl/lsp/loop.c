
#include "cmpinclude.h"
#include "loop.h"
init_loop(){do_init(VV);}
/*	macro definition for LOOP-COPYLIST*	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);}
	base[3]= list(2,VV[0],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for LOOP-GENTEMP	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V2;
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V2=(base[0]);
	vs_top=sup;
	goto T2;
T1:;
	V2= VV[1];
T2:;
	if(((VV[2]->s.s_dbind))==Cnil){
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
	vs_check;
	{object V3;
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
	vs_check;
	{object V4;
	object V5;
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
	vs_check;
	{object V6;
	object V7;
	object V8;
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
	vs_check;
	vs_top=sup;
	{object V9=base[0]->c.c_cdr;
	{object V10= (V9->c.c_car);
	base[2]= (V10->c.c_car);
	V10=V10->c.c_cdr;
	base[3]= (V10->c.c_car);
	V10=V10->c.c_cdr;
	if(endp(V10)){
	base[4]= Cnil;
	} else {
	base[4]= (V10->c.c_car);}}
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
	vs_check;
	vs_top=sup;
	{object V14=base[0]->c.c_cdr;
	{object V15= (V14->c.c_car);
	base[2]= (V15->c.c_car);
	V15=V15->c.c_cdr;
	base[3]= (V15->c.c_car);
	V15=V15->c.c_cdr;
	if(endp(V15)){
	base[4]= Cnil;
	} else {
	base[4]= (V15->c.c_car);}}
	V14=V14->c.c_cdr;
	base[5]= (V14->c.c_car);}
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
	if(!((CMPcar(base[5]))==(VV[5]))){
	goto T24;}
	V18 = CMPmake_fixnum(length(CMPcdr(base[5])));
	V17= one_minus(V18);
	goto T20;
T24:;
	{register object x= CMPcar(base[5]),V19= VV[6];
	while(V19!=Cnil)
	if(eql(x,V19->c.c_car)){
	goto T28;
	}else V19=V19->c.c_cdr;
	goto T20;}
T28:;
	if((CMPcddr(base[5]))==Cnil){
	goto T20;}
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	Llast();
	vs_top=sup;
	V21= vs_base[0];
	{register object x= CMPcar(V21),V20= VV[7];
	while(V20!=Cnil)
	if(eql(x,V20->c.c_car)){
	goto T32;
	}else V20=V20->c.c_cdr;
	goto T20;}
T32:;
	V22 = CMPmake_fixnum(length(CMPcdr(base[5])));
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
	vs_check;
	vs_top=sup;
	{object V26=base[0]->c.c_cdr;
	base[2]= (V26->c.c_car);
	V26=V26->c.c_cdr;
	if(endp(V26)){
	base[3]= Cnil;
	} else {
	base[3]= (V26->c.c_car);}}
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
	vs_check;
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
	vs_check;
	{object V33;
	object V34;
	V33=(base[0]);
	V34=(base[1]);
	vs_top=sup;
TTL:;
	{object V35;
	base[2]= (V34);
	base[3]= (VV[19]->s.s_dbind);
	base[4]= VV[20];
	base[5]= (VV[323]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lassoc();
	vs_top=sup;
	V36= vs_base[0];
	V35= CMPcdr(V36);
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
	vs_check;
	{object V37;
	register object V38;
	V37=(base[0]);
	V38=(base[1]);
	vs_top=sup;
TTL:;
	{object V40;
	base[3]= (V37);
	base[4]= STREF(object,V38,16);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V40= vs_base[0];
	V41= Ct;
	STSET(object,V38,16, (V40));
	(void)((V40));}
	if((CMPcdr(STREF(object,(V38),16)))==Cnil){
	goto T87;}
	if((STREF(object,(V38),12))!=Cnil){
	goto T87;}
	base[2]= VV[26];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V42= vs_base[0];
	V43= Ct;
	STSET(object,(V38),12, V42);
	(void)(V42);
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
	vs_check;
	vs_top=sup;
	{object V44=base[0]->c.c_cdr;
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
	base[4]= STREF(object,base[2],4);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V45= vs_base[0];
	V46= CMPcar(STREF(object,base[2],16));
	V47= STREF(object,base[2],20);
	V48= STREF(object,base[2],0);
	V49= STREF(object,base[2],8);
	V50= STREF(object,base[2],12);
	V51= STREF(object,base[2],4);
	if(((V50))==Cnil){
	goto T103;}
	V52= list(2,(V48),(V45));
	V53= list(2,(V49),(V45));
	V54= list(3,/* INLINE-ARGS */V52,/* INLINE-ARGS */V53,list(2,(V50),Cnil));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V54,list(2,VV[30],list(4,VV[31],(V51),(V48),(V49))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
T103:;
	if(!(((V46))==(VV[32]))){
	goto T107;}
	V55= CMPcar((V47));
	goto T105;
T107:;
	V55= CMPcadr((V47));
T105:;
	V56= list(2,(V48),V55);
	V57= list(2,/* INLINE-ARGS */V56,list(2,(V49),(V45)));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V57,list(2,VV[30],list(4,VV[31],(V51),(V48),(V49))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-ACCUMULATE-MINIMAX-VALUE	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V58=base[0]->c.c_cdr;
	base[2]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	base[3]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	base[4]= (V58->c.c_car);}
	{object V59;
	object V60;
	register object V61;
	object V62;
	V59= STREF(object,base[2],0);
	V60= STREF(object,base[2],8);
	V61= STREF(object,base[2],12);
	base[9]= Ct;
	base[10]= STREF(object,base[2],0);
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
	vs_check;
	{object V70;
	object V71;
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
	vs_check;
	{object V72;
	object V73;
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
	base[5]= (VV[329]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lassoc();
	return;
	}
}
/*	function definition for LOOP-TMEMBER	*/

static L17()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V74;
	object V75;
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
	base[5]= (VV[329]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	return;
	}
}
/*	function definition for LOOP-LOOKUP-KEYWORD	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V76;
	object V77;
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
	vs_check;
	vs_top=sup;
	{object V78=base[0]->c.c_cdr;
	base[2]= (V78->c.c_car);
	V78=V78->c.c_cdr;
	base[3]= (V78->c.c_car);
	V78=V78->c.c_cdr;
	base[4]= (V78->c.c_car);}
	base[5]= list(3,VV[9],list(3,VV[37],list(2,VV[38],base[2]),base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for MAKE-LOOP-UNIVERSE	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
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
	vs_check;
	{object V87;
	object V88;
	object V89;
	V87=(base[0]);
	V88=(base[1]);
	V89=(base[2]);
	vs_top=sup;
TTL:;
	{object V90;
	{object V91= STREF(object,(V87),24);
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
	V90= STREF(object,(V87),24);}
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
	vs_check;
	bds_check;
	{object V92;
	object V93;
	object V94;
	object V95;
	object V96;
	object V97;
	register object V98;
	parse_key(vs_base,FALSE,FALSE,7,VV[53],VV[54],VV[55],VV[56],VV[59],VV[60],VV[57]);
	vs_top=sup;
	V92=(base[0]);
	V93=(base[1]);
	V94=(base[2]);
	V95=(base[3]);
	V96=(base[4]);
	V97=(base[5]);
	V98=(base[6]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
T165:;
	base[16]= (V98);
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
	base[19]= (V98);
	base[20]= VV[46];
	vs_top=(vs_base=base+16)+5;
	Lcerror();
	vs_top=sup;
	base[16]= (VV[50]->s.s_dbind);
	base[17]= VV[51];
	base[18]= VV[49];
	vs_top=(vs_base=base+16)+3;
	Lformat();
	vs_top=sup;
	base[16]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+16)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V98= vs_base[0];
	base[16]= (VV[50]->s.s_dbind);
	base[17]= VV[52];
	vs_top=(vs_base=base+16)+2;
	Lformat();
	vs_top=sup;
	goto T165;
T163:;
	base[14]= VV[53];
	base[16]= (V92);
	vs_top=(vs_base=base+16)+1;
	L23(base);
	vs_top=sup;
	base[15]= vs_base[0];
	base[16]= VV[54];
	base[18]= (V93);
	vs_top=(vs_base=base+18)+1;
	L23(base);
	vs_top=sup;
	base[17]= vs_base[0];
	base[18]= VV[55];
	base[20]= (V94);
	vs_top=(vs_base=base+20)+1;
	L23(base);
	vs_top=sup;
	base[19]= vs_base[0];
	base[20]= VV[56];
	base[22]= (V95);
	vs_top=(vs_base=base+22)+1;
	L23(base);
	vs_top=sup;
	base[21]= vs_base[0];
	base[22]= VV[57];
	base[23]= (V98);
	base[24]= VV[58];
	base[25]= (((((V98))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	base[26]= VV[59];
	base[28]= (V96);
	vs_top=(vs_base=base+28)+1;
	L23(base);
	vs_top=sup;
	base[27]= vs_base[0];
	base[28]= VV[60];
	{object V99;
	object V100;
	V99= CMPmake_fixnum(length((V97)));
	base[32]= VV[61];
	if(!(number_compare((V99),small_fixnum(10))<0)){
	goto T217;}
	base[33]= small_fixnum(10);
	goto T215;
T217:;
	base[33]= (V99);
T215:;
	base[34]= VV[20];
	base[35]= (VV[331]->s.s_gfdef);
	vs_top=(vs_base=base+32)+4;
	Lmake_hash_table();
	vs_top=sup;
	V100= vs_base[0];
	{register object V101;
	register object V102;
	V101= (V97);
	V102= CMPcar((V101));
T225:;
	if(!(((V101))==Cnil)){
	goto T226;}
	goto T221;
T226:;
	if(!(type_of((V102))!=t_cons)){
	goto T232;}
	base[33]= V102;
	base[34]= V100;
	base[35]= V102;
	vs_top=(vs_base=base+33)+3;
	siLhash_set();
	vs_top=sup;
	goto T230;
T232:;
	{object V106;
	object V108;
	V106= CMPcar((V102));
	V108= CMPcadr((V102));
	base[35]= (V106);
	base[36]= V100;
	base[37]= (V108);
	vs_top=(vs_base=base+35)+3;
	siLhash_set();
	vs_top=sup;}
T230:;
	V101= CMPcdr((V101));
	V102= CMPcar((V101));
	goto T225;}
T221:;
	base[29]= (V100);}
	vs_top=(vs_base=base+14)+16;
	(void) (*Lnk332)();
	return;
	}
}
/*	function definition for LOOP-MAKE-PSETQ	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{register object V109;
	V109=(base[0]);
	vs_top=sup;
TTL:;
	if((V109)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	V110= CMPcar((V109));
	if((CMPcddr((V109)))!=Cnil){
	goto T250;}
	V111= CMPcadr((V109));
	goto T248;
T250:;
	V112= CMPcadr((V109));
	base[2]= CMPcddr((V109));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V113= vs_base[0];
	V111= list(3,VV[62],/* INLINE-ARGS */V112,V113);
T248:;
	base[1]= list(2,/* INLINE-ARGS */V110,V111);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	return;
	}
}
/*	function definition for LOOP-MAKE-DESETQ	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V114;
	V114=(base[0]);
	vs_top=sup;
TTL:;
	if(((V114))!=Cnil){
	goto T255;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T255:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T259;}
	V115= CMPcadr((VV[63]->s.s_dbind));
	goto T257;
T259:;
	V115= VV[64];
T257:;
	base[1]= make_cons(V115,(V114));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	macro definition for LOOP-REALLY-DESETQ	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	{object V116=base[0]->c.c_cdr;
	base[2]= V116;}
	{register object V117;
	V117= Cnil;
T262:;
	if((base[2])!=Cnil){
	goto T263;}
	if((CMPcdr((V117)))!=Cnil){
	goto T267;}
	base[3]= CMPcar((V117));
	vs_top=(vs_base=base+3)+1;
	return;
T267:;
	V118= nreverse((V117));
	base[3]= make_cons(VV[14],/* INLINE-ARGS */V118);
	vs_top=(vs_base=base+3)+1;
	return;
T263:;
	{register object V119;
	V119= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[4]= (V119);}
	{register object V120;
	V120= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[5]= (V120);}
	vs_top=(vs_base=base+4)+2;
	L28(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V117);
	vs_top=(vs_base=base+3)+2;
	Lrevappend();
	vs_top=sup;
	V117= vs_base[0];
	goto T262;}
}
/*	function definition for LOOP-CONSTANT-FOLD-IF-POSSIBLE	*/

static L29()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V121;
	object V122;
	V121=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T284;}
	V122=(base[1]);
	vs_top=sup;
	goto T285;
T284:;
	V122= Cnil;
T285:;
	{register object V124;
	register object V125;
	V124= Cnil;
	V125= Cnil;
	base[2]= V121;
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	V124= vs_base[0];
	if(((V124))==Cnil){
	goto T287;}
	base[2]= V121;
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V125= vs_base[0];
T287:;
	if(((V124))==Cnil){
	goto T294;}
	if(((V122))==Cnil){
	goto T294;}
	base[2]= (V125);
	base[3]= (V122);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T294;}
	base[2]= VV[67];
	base[3]= (V121);
	base[4]= (V125);
	base[5]= (V122);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk335)();
	vs_top=sup;
	V124= Cnil;
	V125= Cnil;
T294:;
	base[2]= V121;
	base[3]= (V124);
	base[4]= (V125);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	function definition for LOOP-CONSTANTP	*/

static L30()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V126;
	V126=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V126);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	return;
	}
}
/*	function definition for LOOP-CODE-DUPLICATION-THRESHOLD	*/

static L31()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V127;
	V127=(base[0]);
	vs_top=sup;
TTL:;
	{object V128;
	object V129;
	base[1]= (V127);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk336)();
	if(vs_base>=vs_top){vs_top=sup;goto T317;}
	V128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T318;}
	V129= vs_base[0];
	vs_top=sup;
	goto T319;
T317:;
	V128= Cnil;
T318:;
	V129= Cnil;
T319:;
	V130= number_minus((V128),(V129));
	V131= number_times(/* INLINE-ARGS */V130,small_fixnum(10));
	base[1]= number_plus(small_fixnum(40),/* INLINE-ARGS */V131);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	macro definition for LOOP-BODY	*/

static L32()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
	{object V132=base[0]->c.c_cdr;
	base[2]= (V132->c.c_car);
	V132=V132->c.c_cdr;
	base[3]= (V132->c.c_car);
	V132=V132->c.c_cdr;
	base[4]= (V132->c.c_car);
	V132=V132->c.c_cdr;
	base[5]= (V132->c.c_car);
	V132=V132->c.c_cdr;
	base[6]= (V132->c.c_car);
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
	if(((VV[69]->s.s_dbind))!=Cnil){
	goto T332;}
	if((base[7])!=Cnil){
	goto T331;}
T332:;
	vs_base=vs_top;
	L35(base);
	return;
T331:;
	{register int V133;
	base[10]= base[1];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk337)();
	vs_top=sup;
	V133= fix(vs_base[0]);
T339:;
T344:;
	if((base[7])==Cnil){
	goto T346;}
	if(equal(CMPcar(base[7]),CMPcar(base[8]))){
	goto T345;}
T346:;
	goto T342;
T345:;
	{register object V135;
	V135= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V134= (V135);}
	base[4]= make_cons(V134,base[4]);
	{register object V136;
	V136= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	goto T344;
T342:;
	if((base[7])!=Cnil){
	goto T363;}
	vs_base=vs_top;
	L35(base);
	return;
T363:;
	{register object V137;
	register object V138;
	register object V139;
	register object V140;
	register object V141;
	V137= base[7];
	V138= base[8];
	V139= Cnil;
	V140= small_fixnum(0);
	V141= Cnil;
T368:;
	if(((V137))!=Cnil){
	goto T369;}
	vs_base=vs_top;
	L35(base);
	return;
T369:;
	if(equal(CMPcar((V137)),CMPcar((V138)))){
	goto T375;}
	V139= (V137);
	V140= small_fixnum(0);
	goto T373;
T375:;
	base[10]= CMPcar((V137));
	base[11]= base[1];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V141= vs_base[0];
	if(((V141))==Cnil){
	goto T380;}
	V140= number_plus((V140),(V141));
	V142 = CMPmake_fixnum(V133);
	if(!(number_compare((V140),V142)>0)){
	goto T373;}
T380:;
	{register object V143;
	register object V144;
	V143= Cnil;
	V144= Cnil;
T391:;
	{register object V146;
	V146= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V145= (V146);}
	V144= make_cons(V145,(V144));
	{register object V148;
	V148= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);
	V147= (V148);}
	V143= make_cons(V147,(V143));
	if(!((base[7])==(CMPcdr((V139))))){
	goto T406;}
	goto T389;
T406:;
	goto T391;
T389:;
	if((base[9])!=Cnil){
	goto T411;}
	base[9]= (VV[70]->s.s_dbind);
	V149= list(3,VV[11],base[9],Ct);
	V144= make_cons(/* INLINE-ARGS */V149,(V144));
T411:;
	base[11]= (V143);
	vs_top=(vs_base=base+11)+1;
	L33(base);
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+10)+1;
	L34(base);
	vs_top=sup;
	V150= vs_base[0];
	base[11]= (V144);
	vs_top=(vs_base=base+11)+1;
	L33(base);
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+10)+1;
	L34(base);
	vs_top=sup;
	V151= vs_base[0];
	V152= list(4,VV[71],base[9],V150,V151);
	base[4]= make_cons(/* INLINE-ARGS */V152,base[4]);}
T425:;
	{register object V153;
	V153= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	{register object V155;
	V155= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V154= (V155);}
	base[4]= make_cons(V154,base[4]);
	if(!((base[7])==(CMPcdr((V137))))){
	goto T438;}
	goto T423;
T438:;
	goto T425;
T423:;
	goto T366;
T373:;
	V137= CMPcdr((V137));
	V138= CMPcdr((V138));
	goto T368;}
T366:;
	goto T339;}
}
/*	function definition for DUPLICATABLE-CODE-P	*/

static L36()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V156;
	object V157;
	V156=(base[0]);
	V157=(base[1]);
	vs_top=sup;
TTL:;
	if(((V156))!=Cnil){
	goto T450;}
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+2)+1;
	return;
T450:;
	{int V158;
	base[2]= (V156);
	base[3]= (V157);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V158= fix(vs_base[0]);
	base[2]= CMPmake_fixnum(V158);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DESTRUCTURING-SIZE	*/

static L37()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V159;
	V159=(base[0]);
	vs_top=sup;
TTL:;
	{register object V160;
	register object V161;
	V160= (V159);
	V161= small_fixnum(0);
T456:;
	if(!(type_of((V160))!=t_cons)){
	goto T457;}
	if(((V160))!=Cnil){
	goto T462;}
	V162= small_fixnum(0);
	goto T460;
T462:;
	V162= small_fixnum(1);
T460:;
	base[1]= number_plus((V161),V162);
	vs_top=(vs_base=base+1)+1;
	return;
T457:;
	{object V163;
	V163= CMPcdr((V160));
	base[1]= CMPcar((V160));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	V164= vs_base[0];
	V161= number_plus(V164,(V161));
	V160= (V163);}
	goto T456;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE	*/

static L38()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM31; VC31
	vs_check;
	{VOL object V165;
	VOL object V166;
	V165=(base[0]);
	V166=(base[1]);
	vs_top=sup;
TTL:;
	frs_push(FRS_CATCH,VV[77]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]= (V165);
	base[3]= (V166);
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
	vs_check;
	{object V167;
	V167=(base[0]);
	vs_top=sup;
TTL:;
	base[2]= (V167);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T475;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
T475:;
	if(!(type_of((V167))==t_symbol)){
	goto T479;}
	{object V168;
	object V169;
	base[2]= (V167);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T484;}
	V168= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T485;}
	V169= vs_base[0];
	vs_top=sup;
	goto T486;
T484:;
	V168= Cnil;
T485:;
	V169= Cnil;
T486:;
	if(((V169))==Cnil){
	goto T488;}
	V167= (V168);
	goto TTL;
T488:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;}
T479:;
	if(!(type_of((V167))!=t_cons)){
	goto T494;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
T494:;
	if(!(type_of(CMPcar((V167)))==t_symbol)){
	goto T497;}
	{object V170;
	object V171;
	register int V172;
	V170= CMPcar((V167));
	V172= 0;
	V171= Cnil;
	{object V173 =((V170))->s.s_plist;
	 object ind= VV[77];
	while(V173!=Cnil){
	if(V173->c.c_car==ind){
	V171= (V173->c.c_cdr->c.c_car);
	goto T504;
	}else V173=V173->c.c_cdr->c.c_cdr;}
	V171= Cnil;}
T504:;
	if(((V171))==Cnil){
	goto T502;}
	if(!(type_of(V171)==t_fixnum)){
	goto T506;}
	base[2]= CMPcdr((V167));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V175= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((fix((V171)))+(V175));
	vs_top=(vs_base=base+2)+1;
	return;
T506:;
	base[2]= (V167);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V171));
	return;
T502:;
	{register object x= (V170),V176= (VV[78]->s.s_dbind);
	while(V176!=Cnil)
	if(eql(x,V176->c.c_car->c.c_car) &&V176->c.c_car != Cnil){
	V171= (V176->c.c_car);
	goto T515;
	}else V176=V176->c.c_cdr;
	V171= Cnil;}
T515:;
	if(((V171))==Cnil){
	goto T513;}
	{int V177= fix(CMPcadr((V171)));
	base[2]= CMPcdr((V167));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V178= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((/* INLINE-ARGS */V177)+(V178));
	vs_top=(vs_base=base+2)+1;
	return;}
T513:;
	if(!(((V170))==(VV[79]))){
	goto T519;}
	{register object V179;
	object V180;
	V179= CMPcdr((V167));
	V180= CMPcar((V179));
T524:;
	if(!(((V179))==Cnil)){
	goto T525;}
	base[4]= CMPmake_fixnum(V172);
	vs_top=(vs_base=base+4)+1;
	return;
T525:;
	V181 = CMPmake_fixnum(V172);
	base[4]= (V180);
	vs_top=(vs_base=base+4)+1;
	L40(base);
	vs_top=sup;
	V182= vs_base[0];
	V172= fix(number_plus(V181,V182));
	V172= (V172)+(1);
	V179= CMPcdr((V179));
	V180= CMPcar((V179));
	goto T524;}
T519:;
	if(!(((V170))==(VV[80]))){
	goto T541;}
	{register object V183;
	V183= CMPcdr((V167));
T545:;
	if(((V183))!=Cnil){
	goto T546;}
	base[2]= CMPmake_fixnum(V172);
	vs_top=(vs_base=base+2)+1;
	return;
T546:;
	base[2]= CMPmake_fixnum(V172);
	base[4]= CMPcar((V183));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= CMPcadr((V183));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V172= fix(vs_base[0]);
	V183= CMPcdr((V183));
	goto T545;}
T541:;
	{register object x= (V170),V184= VV[81];
	while(V184!=Cnil)
	if(eql(x,V184->c.c_car)){
	goto T563;
	}else V184=V184->c.c_cdr;
	goto T562;}
T563:;
	{register object V185;
	V185= CMPcdr((V167));
T566:;
	if(((V185))!=Cnil){
	goto T567;}
	base[2]= CMPmake_fixnum(V172);
	vs_top=(vs_base=base+2)+1;
	return;
T567:;
	base[2]= CMPmake_fixnum(V172);
	base[4]= CMPcadr((V185));
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V172= fix(vs_base[0]);
	V185= CMPcdr((V185));
	goto T566;}
T562:;
	if(!(((V170))==(VV[82]))){
	goto T582;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
T582:;
	if(!(((V170))==(VV[83]))){
	goto T585;}
	if(type_of(CMPcadr((V167)))==t_symbol){
	goto T587;}
	if(!(type_of(CMPcadr((V167)))==t_cons)){
	goto T588;}
	if(!((CMPcaadr((V167)))==(VV[9]))){
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
	if(!(((V170))==(VV[85]))){
	goto T596;}
	{int V186= length(CMPcadr((V167)));
	base[2]= CMPcddr((V167));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V187= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((/* INLINE-ARGS */V186)+(V187));
	vs_top=(vs_base=base+2)+1;
	return;}
T596:;
	if(!(((V170))==(VV[86]))){
	goto T601;}
	base[2]= CMPcaddr((V167));
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	V188= vs_base[0];
	base[2]= one_plus(V188);
	vs_top=(vs_base=base+2)+1;
	return;
T601:;
	base[2]= (V170);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T606;}
	{register object x= (V170),V189= (VV[87]->s.s_dbind);
	while(V189!=Cnil)
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
	base[2]= (V167);
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
	V167= (V190);
	goto TTL;
T620:;
	base[2]= CMPcdr((V167));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V192= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((3)+(V192));
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
	vs_check;
	vs_top=sup;
TTL:;
	{register object V193;
	register object V194;
	V193= (VV[88]->s.s_dbind);
	V194= Cnil;
T629:;
	if(!(((V193))==(CMPcdr((VV[89]->s.s_dbind))))){
	goto T630;}
	base[0]= nreverse((V194));
	vs_top=(vs_base=base+0)+1;
	return;
T630:;
	{object V195;
	V195= CMPcdr((V193));
	V194= make_cons(CMPcar((V193)),(V194));
	V193= (V195);}
	goto T629;}
}
/*	function definition for LOOP-ERROR	*/

static L42()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V196;
	object V197;
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
	vs_check;
	{object V198;
	object V199;
	V198=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V199=(base[1]);
	vs_top=sup;
	base[2]= VV[91];
	base[3]= (V198);
	base[4]= (V199);
	vs_base=vs_top;
	(void) (*Lnk341)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk342)();
	return;
	}
}
/*	function definition for LOOP-CHECK-DATA-TYPE	*/

static L44()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{register object V200;
	register object V201;
	object V202;
	V200=(base[0]);
	V201=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T646;}
	V202=(base[2]);
	vs_top=sup;
	goto T647;
T646:;
	V202= (V201);
T647:;
	if(((V200))!=Cnil){
	goto T650;}
	base[3]= (V202);
	vs_top=(vs_base=base+3)+1;
	return;
T650:;
	{object V203;
	object V204;
	base[3]= (V200);
	base[4]= (V201);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk323)();
	if(vs_base>=vs_top){vs_top=sup;goto T655;}
	V203= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T656;}
	V204= vs_base[0];
	vs_top=sup;
	goto T657;
T655:;
	V203= Cnil;
T656:;
	V204= Cnil;
T657:;
	if(((V204))!=Cnil){
	goto T660;}
	base[3]= VV[92];
	base[4]= (V200);
	base[5]= (V201);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk335)();
	vs_top=sup;
	goto T658;
T660:;
	if(((V203))!=Cnil){
	goto T658;}
	base[3]= VV[93];
	base[4]= (V200);
	base[5]= (V201);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk343)();
	vs_top=sup;
T658:;
	base[3]= (V200);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP-FINISH	*/

static L45()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	vs_top=sup;
	{object V205=base[0]->c.c_cdr;}
	base[2]= VV[94];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for LOOP-TRANSLATE	*/

static L46()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	bds_check;
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
	{register object V206;
	V207= nreverse((VV[105]->s.s_dbind));
	V208= nreverse((VV[107]->s.s_dbind));
	V209= nreverse((VV[108]->s.s_dbind));
	V210= nreverse((VV[110]->s.s_dbind));
	base[26]= (VV[111]->s.s_dbind);
	base[27]= nreverse((VV[112]->s.s_dbind));
	vs_top=(vs_base=base+26)+2;
	Lreconc();
	vs_top=sup;
	V211= vs_base[0];
	V206= list(6,VV[119],/* INLINE-ARGS */V207,/* INLINE-ARGS */V208,/* INLINE-ARGS */V209,/* INLINE-ARGS */V210,V211);
T678:;
	{object V213;
	V213= CMPcar((VV[117]->s.s_dbind));
	(VV[117]->s.s_dbind)= CMPcdr((VV[117]->s.s_dbind));
	V212= (V213);}
	V206= list(3,VV[120],V212,(V206));
	if(((VV[117]->s.s_dbind))!=Cnil){
	goto T687;}
	goto T676;
T687:;
	goto T678;
T676:;
	{register object V214;
	register object V215;
	V214= (VV[104]->s.s_dbind);
	V215= CMPcar((V214));
T696:;
	if(!(((V214))==Cnil)){
	goto T697;}
	goto T692;
T697:;
	{object V216;
	object V217;
	object V218;
	object V219;
	V216= CMPcar((V215));
	V217= CMPcadr((V215));
	V218= CMPcaddr((V215));
	V219= CMPcadddr((V215));
	{register object V220;
	register object V221;
	V220= (V219);
	V221= CMPcar((V220));
T710:;
	if(!(((V220))==Cnil)){
	goto T711;}
	goto T706;
T711:;
	V222= make_cons((V206),Cnil);
	V206= append((V221),/* INLINE-ARGS */V222);
	V220= CMPcdr((V220));
	V221= CMPcar((V220));
	goto T710;}
T706:;
	if(((V216))!=Cnil){
	goto T722;}
	if(((V217))!=Cnil){
	goto T722;}
	if(((V218))==Cnil){
	goto T701;}
T722:;
	{register object V223;
	V223= make_cons((V206),Cnil);
	if(((V217))==Cnil){
	goto T729;}
	V224= make_cons(VV[30],(V217));
	V223= make_cons(/* INLINE-ARGS */V224,(V223));
T729:;
	if(((V216))!=Cnil){
	goto T736;}
	V225= VV[121];
	goto T734;
T736:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T739;}
	V225= CMPcar((VV[63]->s.s_dbind));
	goto T734;
T739:;
	V225= VV[29];
T734:;
	if(((V218))==Cnil){
	goto T743;}
	V227= append((V218),(V223));
	V228= make_cons(VV[122],/* INLINE-ARGS */V227);
	V226= make_cons(/* INLINE-ARGS */V228,Cnil);
	goto T741;
T743:;
	V226= (V223);
T741:;
	V206= listA(3,V225,(V216),V226);}}
T701:;
	V214= CMPcdr((V214));
	V215= CMPcar((V214));
	goto T696;}
T692:;
	base[26]= (V206);
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
	vs_check;
	vs_top=sup;
TTL:;
T751:;
	if(((VV[89]->s.s_dbind))!=Cnil){
	goto T752;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
T752:;
	{register object V229;
	register object V230;
	V229= CMPcar((VV[89]->s.s_dbind));
	V230= Cnil;
	if(type_of((V229))==t_symbol){
	goto T759;}
	base[0]= VV[123];
	base[1]= (V229);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T756;
T759:;
	(VV[88]->s.s_dbind)= (VV[89]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[0]= (V229);
	base[1]= STREF(object,(VV[96]->s.s_dbind),0);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V230= vs_base[0];
	if(((V230))==Cnil){
	goto T767;}
	base[1]= CMPcar((V230));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V231;
	V231= CMPcdr((V230));
	 vs_top=base+1;
	 while(V231!=Cnil)
	 {vs_push((V231)->c.c_car);V231=(V231)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T756;
T767:;
	base[0]= (V229);
	base[1]= STREF(object,(VV[96]->s.s_dbind),4);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V230= vs_base[0];
	if(((V230))==Cnil){
	goto T776;}
	base[0]= (V230);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk348)();
	vs_top=sup;
	goto T756;
T776:;
	base[0]= (V229);
	base[1]= VV[124];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T783;}
	base[0]= VV[125];
	base[1]= (V229);
	base[2]= CMPcar((VV[89]->s.s_dbind));
	base[3]= CMPcadr((VV[89]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T756;
T783:;
	base[0]= VV[126];
	base[1]= (V229);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;}
T756:;
	goto T751;
}
/*	function definition for LOOP-POP-SOURCE	*/

static L48()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	vs_top=sup;
TTL:;
	if(((VV[89]->s.s_dbind))==Cnil){
	goto T796;}
	{object V232;
	V232= CMPcar((VV[89]->s.s_dbind));
	(VV[89]->s.s_dbind)= CMPcdr((VV[89]->s.s_dbind));
	base[0]= (V232);
	vs_top=(vs_base=base+0)+1;
	return;}
T796:;
	base[0]= VV[127];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk343)();
	return;
}
/*	function definition for LOOP-GET-PROGN	*/

static L49()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	vs_top=sup;
TTL:;
	{register object V233;
	register object V234;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V235= vs_base[0];
	V233= make_cons(V235,Cnil);
	V234= CMPcar((VV[89]->s.s_dbind));
T806:;
	if(!(type_of((V234))!=t_cons)){
	goto T807;}
	if((CMPcdr((V233)))!=Cnil){
	goto T811;}
	base[0]= CMPcar((V233));
	vs_top=(vs_base=base+0)+1;
	return;
T811:;
	V236= nreverse((V233));
	base[0]= make_cons(VV[14],/* INLINE-ARGS */V236);
	vs_top=(vs_base=base+0)+1;
	return;
T807:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V237= vs_base[0];
	V233= make_cons(V237,(V233));
	V234= CMPcar((VV[89]->s.s_dbind));
	goto T806;}
}
/*	function definition for LOOP-GET-FORM	*/

static L50()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	vs_top=sup;
TTL:;
	if(((VV[89]->s.s_dbind))==Cnil){
	goto T820;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	return;
T820:;
	base[0]= VV[128];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk343)();
	return;
}
/*	function definition for LOOP-CONSTRUCT-RETURN	*/

static L51()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V238;
	V238=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= list(3,VV[86],CMPcar((VV[117]->s.s_dbind)),(V238));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-PSEUDO-BODY	*/

static L52()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{object V239;
	V239=(base[0]);
	vs_top=sup;
TTL:;
	if(((VV[109]->s.s_dbind))!=Cnil){
	goto T823;}
	if(((VV[114]->s.s_dbind))==Cnil){
	goto T824;}
T823:;
	(VV[108]->s.s_dbind)= make_cons((V239),(VV[108]->s.s_dbind));
	base[1]= (VV[108]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
T824:;
	(VV[107]->s.s_dbind)= make_cons((V239),(VV[107]->s.s_dbind));
	(VV[110]->s.s_dbind)= make_cons((V239),(VV[110]->s.s_dbind));
	base[1]= (VV[110]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-EMIT-BODY	*/

static L53()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V240;
	V240=(base[0]);
	vs_top=sup;
TTL:;
	(VV[109]->s.s_dbind)= Ct;
	base[1]= (V240);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk350)();
	return;
	}
}
/*	function definition for LOOP-EMIT-FINAL-VALUE	*/

static L54()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V241;
	V241=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V241);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V242= vs_base[0];
	(VV[112]->s.s_dbind)= make_cons(V242,(VV[112]->s.s_dbind));
	if(((VV[113]->s.s_dbind))==Cnil){
	goto T839;}
	base[1]= VV[129];
	base[2]= (VV[113]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk335)();
	vs_top=sup;
T839:;
	(VV[113]->s.s_dbind)= CMPcar((VV[88]->s.s_dbind));
	base[1]= (VV[113]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static L55()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V243;
	if(vs_base>=vs_top){vs_top=sup;goto T845;}
	V243=(base[0]);
	vs_top=sup;
	goto T846;
T845:;
	V243= Cnil;
T846:;
	if(((VV[114]->s.s_dbind))==Cnil){
	goto T849;}
	base[1]= VV[130];
	base[2]= (V243);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk343)();
	return;
T849:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-TYPED-INIT	*/

static L56()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	{register object V244;
	V244=(base[0]);
	vs_top=sup;
TTL:;
	if(((V244))==Cnil){
	goto T854;}
	base[1]= (V244);
	base[2]= VV[131];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T854;}
	base[1]= (V244);
	base[2]= VV[132];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T860;}
	base[1]= (V244);
	base[2]= VV[133];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T861;}
T860:;
	base[1]= small_fixnum(0);
	base[2]= (V244);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk352)();
	return;
T861:;
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
T854:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-OPTIONAL-TYPE	*/

static L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	if(vs_base>=vs_top){vs_top=sup;goto T871;}
	vs_top=sup;
	goto T872;
T871:;
	base[0]= Cnil;
T872:;
	if((VV[89]->s.s_dbind)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= CMPcar((VV[89]->s.s_dbind));
	base[2]= base[1];
	base[3]= VV[134];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T876;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	return;
T876:;
	if(!(type_of(base[1])==t_symbol)){
	goto T882;}
	{object V245;{object V246;
	base[2]= base[1];
	base[3]= STREF(object,(VV[96]->s.s_dbind),16);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V246= vs_base[0];
	if(V246==Cnil)goto T885;
	V245= V246;
	goto T884;
T885:;}
	base[2]= symbol_name(base[1]);
	base[3]= STREF(object,(VV[96]->s.s_dbind),20);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V245= vs_base[0];
T884:;
	if(((V245))==Cnil){
	goto T892;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= (V245);
	vs_top=(vs_base=base+2)+1;
	return;
T892:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
T882:;
	if(!(type_of(base[0])==t_cons)){
	goto T897;}
	if(type_of(base[1])==t_cons){
	goto T895;}
	base[2]= VV[135];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T895;
T897:;
	base[2]= VV[136];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T895:;
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
	vs_check;
	vs_top=sup;
TTL:;
	if(((VV[99]->s.s_dbind))!=Cnil){
	goto T908;}
	if(((VV[102]->s.s_dbind))!=Cnil){
	goto T908;}
	if(((VV[106]->s.s_dbind))==Cnil){
	goto T909;}
T908:;
	V247= nreverse((VV[99]->s.s_dbind));
	V248= list(4,/* INLINE-ARGS */V247,(VV[102]->s.s_dbind),(VV[103]->s.s_dbind),(VV[106]->s.s_dbind));
	(VV[104]->s.s_dbind)= make_cons(/* INLINE-ARGS */V248,(VV[104]->s.s_dbind));
	(VV[99]->s.s_dbind)= Cnil;
	(VV[102]->s.s_dbind)= Cnil;
	(VV[103]->s.s_dbind)= Cnil;
	(VV[106]->s.s_dbind)= Cnil;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
T909:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-MAKE-VARIABLE	*/

static L61()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{register object V249;
	register object V250;
	register object V251;
	object V252;
	V249=(base[0]);
	V250=(base[1]);
	V251=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T924;}
	V252=(base[3]);
	vs_top=sup;
	goto T925;
T924:;
	V252= Cnil;
T925:;
	if(((V249))!=Cnil){
	goto T929;}
	if(((V250))==Cnil){
	goto T927;}
	base[4]= VV[139];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V249= vs_base[0];
	V253= list(2,(V249),(V250));
	(VV[99]->s.s_dbind)= make_cons(/* INLINE-ARGS */V253,(VV[99]->s.s_dbind));
	V254= list(2,VV[140],(V249));
	(VV[102]->s.s_dbind)= make_cons(/* INLINE-ARGS */V254,(VV[102]->s.s_dbind));
	goto T927;
T929:;
	if(!(type_of((V249))!=t_cons)){
	goto T939;}
	if(((V252))==Cnil){
	goto T943;}
	{register object x= (V249),V255= (VV[98]->s.s_dbind);
	while(V255!=Cnil)
	if(eql(x,V255->c.c_car)){
	goto T947;
	}else V255=V255->c.c_cdr;
	goto T946;}
T947:;
	base[4]= VV[141];
	base[5]= (V249);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T941;
T946:;
	(VV[98]->s.s_dbind)= make_cons((V249),(VV[98]->s.s_dbind));
	goto T941;
T943:;
	{register object x= (V249),V256= (VV[99]->s.s_dbind);
	while(V256!=Cnil)
	if(eql(x,V256->c.c_car->c.c_car) &&V256->c.c_car != Cnil){
	goto T952;
	}else V256=V256->c.c_cdr;
	goto T941;}
T952:;
	base[4]= VV[142];
	base[5]= (V249);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T941:;
	if(type_of((V249))==t_symbol){
	goto T955;}
	base[4]= VV[143];
	base[5]= (V249);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T955:;
	base[4]= (V249);
	base[5]= (V251);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	if((V250)!=Cnil){
	V257= (V250);
	goto T964;}
	base[4]= (V251);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V257= vs_base[0];
T964:;
	V258= list(2,(V249),V257);
	(VV[99]->s.s_dbind)= make_cons(/* INLINE-ARGS */V258,(VV[99]->s.s_dbind));
	goto T927;
T939:;
	if(((V250))==Cnil){
	goto T967;}
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T970;}
	base[4]= (V249);
	base[5]= (V251);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V259= list(2,(V249),(V250));
	(VV[99]->s.s_dbind)= make_cons(/* INLINE-ARGS */V259,(VV[99]->s.s_dbind));
	goto T927;
T970:;
	{object V260;
	base[4]= VV[144];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V260= vs_base[0];
	V261= list(2,(V260),(V250));
	(VV[99]->s.s_dbind)= make_cons(/* INLINE-ARGS */V261,(VV[99]->s.s_dbind));
	(VV[103]->s.s_dbind)= listA(3,(V249),(V260),(VV[103]->s.s_dbind));
	goto T927;}
T967:;
	{object V262;
	object V263;
	V262= Cnil;
	V263= Cnil;
	if(!(type_of((V251))!=t_cons)){
	goto T983;}
	V263= (V251);
	V262= (V263);
	goto T981;
T983:;
	V262= CMPcar((V251));
	V263= CMPcdr((V251));
T981:;
	base[4]= CMPcar((V249));
	base[5]= Cnil;
	base[6]= (V262);
	base[7]= (V252);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk355)();
	vs_top=sup;
	base[4]= CMPcdr((V249));
	base[5]= Cnil;
	base[6]= (V263);
	base[7]= (V252);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk355)();
	vs_top=sup;}
T927:;
	base[4]= (V249);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LOOP-MAKE-ITERATION-VARIABLE	*/

static L62()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	{object V264;
	object V265;
	object V266;
	V264=(base[0]);
	V265=(base[1]);
	V266=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= (V264);
	base[4]= (V265);
	base[5]= (V266);
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
	vs_check;
	{register object V267;
	register object V268;
	V267=(base[0]);
	V268=(base[1]);
	vs_top=sup;
TTL:;
	if(((V267))==Cnil){
	goto T1003;}
	if(((V268))==Cnil){
	goto T1003;}
	if(!(((V268))==(Ct))){
	goto T1004;}
T1003:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T1004:;
	if(!(type_of((V267))==t_symbol)){
	goto T1011;}
	if(((V268))==(Ct)){
	goto T1014;}
	{register object x= (V267),V269= (VV[100]->s.s_dbind);
	while(V269!=Cnil)
	if(eql(x,V269->c.c_car)){
	goto T1014;
	}else V269=V269->c.c_cdr;}
	V271= list(3,VV[31],V268,(V267));
	(VV[102]->s.s_dbind)= make_cons(/* INLINE-ARGS */V271,(VV[102]->s.s_dbind));
	base[2]= (VV[102]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	return;
T1014:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T1011:;
	if(!(type_of((V267))==t_cons)){
	goto T1020;}
	if(!(type_of((V268))==t_cons)){
	goto T1023;}
	base[2]= CMPcar((V267));
	base[3]= CMPcar((V268));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V267= CMPcdr((V267));
	V268= CMPcdr((V268));
	goto TTL;
T1023:;
	base[2]= CMPcar((V267));
	base[3]= (V268);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	V267= CMPcdr((V267));
	goto TTL;
T1020:;
	base[2]= VV[145];
	base[3]= (V267);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;
	}
}
/*	function definition for LOOP-MAYBE-BIND-FORM	*/

static L64()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V272;
	object V273;
	V272=(base[0]);
	V273=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V272);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk356)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1040;}
	base[2]= (V272);
	vs_top=(vs_base=base+2)+1;
	return;
T1040:;
	base[3]= VV[146];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V272);
	base[4]= (V273);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk355)();
	return;
	}
}
/*	function definition for LOOP-DO-IF	*/

static L65()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	bds_check;
	{object V274;
	object V275;
	V274=(base[0]);
	V275=(base[1]);
	vs_top=sup;
TTL:;
	{object V276;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V276= vs_base[0];
	bds_bind(VV[114],Ct);
	base[3]= Cnil;
	{object V277;
	object V278;
	base[4]= (V274);
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V277= vs_base[0];
	base[4]= CMPcar((VV[89]->s.s_dbind));
	base[5]= VV[147];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1052;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[4]= VV[147];
	vs_top=(vs_base=base+4)+1;
	L66(base);
	vs_top=sup;
	V279= vs_base[0];
	V278= make_cons(V279,Cnil);
	goto T1050;
T1052:;
	V278= Cnil;
T1050:;
	base[4]= CMPcar((VV[89]->s.s_dbind));
	base[5]= VV[148];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1059;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
T1059:;
	if((base[3])==Cnil){
	goto T1064;}
	V276= list(3,VV[11],base[3],(V276));
T1064:;
	if(((V275))==Cnil){
	goto T1071;}
	V280= list(2,VV[36],(V276));
	goto T1069;
T1071:;
	V280= (V276);
T1069:;
	base[4]= listA(4,VV[71],V280,(V277),(V278));
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
	vs_check;
	vs_top=sup;
TTL:;
	base[0]= VV[153];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V281= vs_base[0];
	(VV[105]->s.s_dbind)= make_cons(V281,(VV[105]->s.s_dbind));
	base[0]= (VV[105]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-DO-FINALLY	*/

static L68()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	vs_top=sup;
TTL:;
	base[0]= VV[154];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V282= vs_base[0];
	(VV[111]->s.s_dbind)= make_cons(V282,(VV[111]->s.s_dbind));
	base[0]= (VV[111]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-DO-DO	*/

static L69()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
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
	vs_check;
	vs_top=sup;
TTL:;
	{register object V283;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V283= vs_base[0];
	if(type_of((V283))==t_symbol){
	goto T1083;}
	base[0]= VV[155];
	base[1]= (V283);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1083:;
	if(((VV[107]->s.s_dbind))!=Cnil){
	goto T1089;}
	if(((VV[108]->s.s_dbind))!=Cnil){
	goto T1089;}
	if(((VV[112]->s.s_dbind))!=Cnil){
	goto T1089;}
	if(((VV[114]->s.s_dbind))==Cnil){
	goto T1088;}
T1089:;
	base[0]= VV[156];
	base[1]= (V283);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1088:;
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T1099;}
	base[0]= VV[157];
	base[1]= CMPcar((VV[117]->s.s_dbind));
	base[2]= (V283);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk343)();
	vs_top=sup;
T1099:;
	(VV[117]->s.s_dbind)= list(2,(V283),Cnil);
	base[0]= (VV[117]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-DO-RETURN	*/

static L71()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
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
	vs_check;
	{object V284;
	object V285;
	object V286;
	object V287;
	object V288;
	object V289;
	parse_key(vs_base,FALSE,FALSE,6,VV[162],VV[163],VV[164],VV[361],VV[165],VV[362]);
	vs_top=sup;
	V284=(base[0]);
	V285=(base[1]);
	V286=(base[2]);
	V287=(base[3]);
	V288=(base[4]);
	V289=(base[5]);
	base[12]= VV[158];
	base[13]= (V284);
	base[14]= (V285);
	base[15]= (V286);
	base[16]= (V287);
	base[17]= (V288);
	base[18]= (V289);
	vs_top=(vs_base=base+12)+7;
	siLmake_structure();
	return;
	}
}
/*	function definition for LOOP-GET-COLLECTION-INFO	*/

static L73()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	{object V290;
	object V291;
	object V292;
	V290=(base[0]);
	V291=(base[1]);
	V292=(base[2]);
	vs_top=sup;
TTL:;
	{object V293;
	register object V294;
	register object V295;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V293= vs_base[0];
	if((STREF(object,(VV[96]->s.s_dbind),24))==Cnil){
	goto T1117;}
	V294= Cnil;
	goto T1116;
T1117:;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V294= vs_base[0];
T1116:;
	base[3]= CMPcar((VV[89]->s.s_dbind));
	base[4]= VV[159];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1121;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V295= vs_base[0];
	goto T1119;
T1121:;
	V295= Cnil;
T1119:;
	if(type_of((V295))==t_symbol){
	goto T1126;}
	base[3]= VV[160];
	base[4]= (V295);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1126:;
	if(((V294))!=Cnil){
	goto T1131;}{object V296;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V296= vs_base[0];
	if(V296==Cnil)goto T1135;
	V294= V296;
	goto T1134;
T1135:;}
	V294= (V292);
T1134:;
T1131:;
	{register object V297;
	base[3]= (V295);
	base[4]= (VV[118]->s.s_dbind);
	base[5]= VV[161];
	base[6]= (VV[364]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk365)();
	vs_top=sup;
	V297= vs_base[0];
	if(((V297))!=Cnil){
	goto T1144;}
	base[3]= VV[162];
	base[4]= (V295);
	base[5]= VV[163];
	base[6]= (V291);
	base[7]= VV[164];
	base[8]= make_cons((V290),Cnil);
	base[9]= VV[165];
	base[10]= (V294);
	vs_top=(vs_base=base+3)+8;
	(void) (*Lnk366)();
	vs_top=sup;
	V297= vs_base[0];
	(VV[118]->s.s_dbind)= make_cons((V297),(VV[118]->s.s_dbind));
	goto T1142;
T1144:;
	if((STREF(object,(V297),4))==((V291))){
	goto T1156;}
	base[3]= VV[166];
	base[4]= (V295);
	base[5]= CMPcar(STREF(object,(V297),8));
	base[6]= (V290);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk343)();
	vs_top=sup;
T1156:;
	if(equal((V294),STREF(object,(V297),16))){
	goto T1163;}
	base[3]= VV[167];
	base[4]= (V295);
	base[5]= (V294);
	base[6]= STREF(object,(V297),16);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk335)();
	vs_top=sup;
	if(!((STREF(object,(V297),16))==(Ct))){
	goto T1163;}
	V298= Ct;
	STSET(object,(V297),16, (V294));
	(void)((V294));
T1163:;
	{object V300;
	V300= make_cons((V290),STREF(object,V297,8));
	V301= Ct;
	STSET(object,V297,8, (V300));
	(void)((V300));}
T1142:;
	base[3]= (V297);
	base[4]= (V293);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	function definition for LOOP-LIST-COLLECTION	*/

static L74()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{object V302;
	V302=(base[0]);
	vs_top=sup;
TTL:;
	{register object V303;
	register object V304;
	base[1]= (V302);
	base[2]= VV[5];
	base[3]= VV[5];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1180;}
	V303= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1181;}
	V304= vs_base[0];
	vs_top=sup;
	goto T1182;
T1180:;
	V303= Cnil;
T1181:;
	V304= Cnil;
T1182:;
	{register object V305;
	V305= STREF(object,(V303),12);
	if(((V305))!=Cnil){
	goto T1184;}
	base[1]= VV[168];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V306= vs_base[0];
	base[1]= VV[169];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V307= vs_base[0];
	if((STREF(object,(V303),0))!=Cnil){
	goto T1194;}
	V308= Cnil;
	goto T1193;
T1194:;
	V308= make_cons(STREF(object,(V303),0),Cnil);
T1193:;
	V305= listA(3,V306,V307,V308);
	V309= Ct;
	STSET(object,(V303),12, (V305));
	(void)((V305));
	V310= list(2,VV[170],(V305));
	(VV[106]->s.s_dbind)= make_cons(/* INLINE-ARGS */V310,(VV[106]->s.s_dbind));
	if((STREF(object,(V303),0))!=Cnil){
	goto T1184;}
	base[1]= listA(3,VV[171],CMPcar((V305)),CMPcddr((V305)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	vs_top=sup;
T1184:;
	{object V311= (V302);
	if((V311!= VV[5]))goto T1202;
	V304= list(2,VV[5],(V304));
	goto T1201;
T1202:;
	if((V311!= VV[369]))goto T1204;
	goto T1201;
T1204:;
	if((V311!= VV[370]))goto T1205;
	if(!(type_of((V304))==t_cons)){
	goto T1206;}
	if((CMPcar((V304)))==(VV[5])){
	goto T1201;}
T1206:;
	V304= list(2,VV[172],(V304));
	goto T1201;
T1205:;
	FEerror("The ECASE key value ~s is illegal.",1,V311);}
T1201:;
	base[1]= list(3,VV[173],(V305),(V304));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-SUM-COLLECTION	*/

static L75()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V312;
	object V313;
	object V314;
	V312=(base[0]);
	V313=(base[1]);
	V314=(base[2]);
	vs_top=sup;
TTL:;
	{register object V315;
	object V316;
	base[3]= (V312);
	base[4]= VV[174];
	base[5]= (V314);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1216;}
	V315= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1217;}
	V316= vs_base[0];
	vs_top=sup;
	goto T1218;
T1216:;
	V315= Cnil;
T1217:;
	V316= Cnil;
T1218:;
	base[3]= STREF(object,(V315),16);
	base[4]= (V313);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	{register object V317;
	V317= STREF(object,(V315),12);
	if(((V317))!=Cnil){
	goto T1223;}{object V319;
	V319= STREF(object,(V315),0);
	if(V319==Cnil)goto T1230;
	base[3]= V319;
	goto T1229;
T1230:;}
	base[4]= VV[175];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[3]= vs_base[0];
T1229:;
	base[4]= Cnil;
	base[5]= STREF(object,(V315),16);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V318= vs_base[0];
	V317= make_cons(V318,Cnil);
	V320= Ct;
	STSET(object,(V315),12, (V317));
	(void)((V317));
	if((STREF(object,(V315),0))!=Cnil){
	goto T1223;}
	base[3]= CMPcar(STREF(object,(V315),12));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)();
	vs_top=sup;
T1223:;
	if(!(((V312))==(VV[176]))){
	goto T1240;}
	V321= CMPcar((V317));
	base[4]= Ct;
	base[5]= CMPcar((V317));
	base[6]= list(2,VV[177],CMPcar((V317)));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V322= vs_base[0];
	base[3]= list(3,VV[8],(V316),list(3,VV[11],/* INLINE-ARGS */V321,V322));
	goto T1238;
T1240:;
	V323= CMPcar((V317));
	base[4]= Ct;
	base[5]= CMPcar((V317));
	base[6]= CMPcar((V317));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V324= vs_base[0];
	base[3]= list(3,VV[11],/* INLINE-ARGS */V323,list(3,VV[178],V324,(V316)));
T1238:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-MAXMIN-COLLECTION	*/

static L76()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	{object V325;
	V325=(base[0]);
	vs_top=sup;
TTL:;
	{register object V326;
	object V327;
	base[1]= (V325);
	base[2]= VV[179];
	base[3]= (VV[180]->s.s_dbind);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1254;}
	V326= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1255;}
	V327= vs_base[0];
	vs_top=sup;
	goto T1256;
T1254:;
	V326= Cnil;
T1255:;
	V327= Cnil;
T1256:;
	base[1]= STREF(object,(V326),16);
	base[2]= (VV[180]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	{register object V328;
	V328= STREF(object,(V326),20);
	if(((V328))!=Cnil){
	goto T1261;}{object V329;
	V329= STREF(object,(V326),0);
	if(V329==Cnil)goto T1267;
	base[1]= V329;
	goto T1266;
T1267:;}
	base[2]= VV[181];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[1]= vs_base[0];
T1266:;
	base[2]= STREF(object,(V326),16);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk372)();
	vs_top=sup;
	V328= vs_base[0];
	V330= Ct;
	STSET(object,(V326),20, (V328));
	(void)((V328));
	if((STREF(object,(V326),0))!=Cnil){
	goto T1261;}
	base[1]= STREF(object,(V328),0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	vs_top=sup;
T1261:;
	base[1]= (V325);
	base[2]= (V328);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk373)();
	vs_top=sup;
	V331= list(2,VV[182],(V328));
	(VV[106]->s.s_dbind)= make_cons(/* INLINE-ARGS */V331,(VV[106]->s.s_dbind));
	base[1]= list(4,VV[183],(V328),(V325),(V327));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;}}
	}
}
/*	function definition for LOOP-DO-ALWAYS	*/

static L77()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	{object V332;
	object V333;
	V332=(base[0]);
	V333=(base[1]);
	vs_top=sup;
TTL:;
	{object V334;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V334= vs_base[0];
	if(((V332))==Cnil){
	goto T1281;}
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
T1281:;
	if(((V333))==Cnil){
	goto T1288;}
	V335= VV[8];
	goto T1286;
T1288:;
	V335= VV[184];
T1286:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V336= vs_base[0];
	base[2]= list(3,V335,(V334),V336);
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
	vs_check;
	{object V337;
	V337=(base[0]);
	vs_top=sup;
TTL:;
	if(((V337))==Cnil){
	goto T1293;}
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
T1293:;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V338= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V339= vs_base[0];
	V340= list(3,VV[11],V338,V339);
	base[2]= (VV[115]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk351)();
	vs_top=sup;
	V341= vs_base[0];
	base[1]= list(3,VV[8],/* INLINE-ARGS */V340,V341);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)();
	return;
	}
}
/*	function definition for LOOP-DO-WHILE	*/

static L79()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{object V342;
	object V343;
	V342=(base[0]);
	V343=(base[1]);
	vs_top=sup;
TTL:;
	{object V344;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V344= vs_base[0];
	base[3]= (V343);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	if(((V342))==Cnil){
	goto T1307;}
	V345= VV[8];
	goto T1305;
T1307:;
	V345= VV[184];
T1305:;
	base[3]= list(3,V345,(V344),VV[185]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk350)();
	return;}
	}
}
/*	function definition for LOOP-DO-WITH	*/

static L80()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	vs_top=sup;
TTL:;
	base[0]= VV[186];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)();
	vs_top=sup;
	{register object V346;
	register object V347;
	register object V348;
	V346= Cnil;
	V347= Cnil;
	V348= Cnil;
T1312:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V346= vs_base[0];
	base[0]= (V346);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk363)();
	vs_top=sup;
	V348= vs_base[0];
	base[0]= CMPcar((VV[89]->s.s_dbind));
	base[1]= VV[187];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1323;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V347= vs_base[0];
	goto T1321;
T1323:;
	V347= Cnil;
T1321:;
	base[0]= (V346);
	base[1]= (V347);
	base[2]= (V348);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[0]= CMPcar((VV[89]->s.s_dbind));
	base[1]= VV[152];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1334;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	goto T1332;
T1334:;
	vs_base=vs_top;
	(void) (*Lnk345)();
	return;
T1332:;
	goto T1312;}
}
/*	function definition for LOOP-HACK-ITERATION	*/

static L81()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	{register object V349;
	V349=(base[0]);
	vs_top=sup;
TTL:;
	{register object V350;
	register object V351;
	register object V352;
	register object V353;
	register object V354;
	register object V355;
	register object V356;
	register object V357;
	register object V358;
	object V359;
	V350= Cnil;
	V351= Cnil;
	V352= Cnil;
	V353= Cnil;
	V354= Cnil;
	V355= Cnil;
	V356= Cnil;
	V357= Cnil;
	V358= Cnil;
	V359= Cnil;
T1341:;
	base[2]= CMPcar((V349));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V360;
	V360= CMPcdr((V349));
	 vs_top=base+2;
	 while(V360!=Cnil)
	 {vs_push((V360)->c.c_car);V360=(V360)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V359= vs_base[0];
	V358= (V359);
	if((CMPcar((V358)))!=Cnil){
	goto T1351;}
	goto T1350;
T1351:;
	V350= make_cons(CMPcar((V358)),(V350));
T1350:;
	V358= CMPcdr((V358));
	base[1]= CMPcar((V358));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V361= vs_base[0];
	V351= nconc((V351),V361);
	V358= CMPcdr((V358));
	if((CMPcar((V358)))!=Cnil){
	goto T1360;}
	goto T1359;
T1360:;
	V352= make_cons(CMPcar((V358)),(V352));
T1359:;
	V358= CMPcdr((V358));
	base[1]= CMPcar((V358));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V362= vs_base[0];
	V353= nconc((V353),V362);
	V358= CMPcdr((V358));
	if(((VV[109]->s.s_dbind))==Cnil){
	goto T1371;}
	base[1]= VV[188];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T1371:;
	if(((V358))!=Cnil){
	goto T1375;}
	V358= (V359);
T1375:;
	if((CMPcar((V358)))==Cnil){
	goto T1379;}
	V354= make_cons(CMPcar((V358)),(V354));
T1379:;
	V358= CMPcdr((V358));
	base[1]= CMPcar((V358));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V363= vs_base[0];
	V355= nconc((V355),V363);
	V358= CMPcdr((V358));
	if((CMPcar((V358)))==Cnil){
	goto T1388;}
	V356= make_cons(CMPcar((V358)),(V356));
T1388:;
	base[1]= CMPcadr((V358));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V364= vs_base[0];
	V357= nconc((V357),V364);
	base[1]= CMPcar((VV[89]->s.s_dbind));
	base[2]= VV[152];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1397;}
	base[1]= (V357);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V365= vs_base[0];
	base[1]= (V356);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V366= vs_base[0];
	base[1]= (V355);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V367= vs_base[0];
	base[1]= (V354);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V368= vs_base[0];
	(VV[107]->s.s_dbind)= listA(5,V365,V366,V367,V368,(VV[107]->s.s_dbind));
	base[1]= (V353);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V369= vs_base[0];
	base[1]= (V352);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V370= vs_base[0];
	base[1]= (V351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk333)();
	vs_top=sup;
	V371= vs_base[0];
	base[1]= (V350);
	vs_top=(vs_base=base+1)+1;
	L82(base);
	vs_top=sup;
	V372= vs_base[0];
	(VV[110]->s.s_dbind)= listA(5,V369,V370,V371,V372,(VV[110]->s.s_dbind));
	vs_base=vs_top;
	(void) (*Lnk345)();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1397:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	if((STREF(object,(VV[96]->s.s_dbind),28))!=Cnil){
	goto T1424;}
	base[1]= CMPcar((VV[89]->s.s_dbind));
	base[2]= STREF(object,(VV[96]->s.s_dbind),4);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V358= vs_base[0];
	if(((V358))==Cnil){
	goto T1424;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V349= (V358);
T1424:;
	goto T1341;}
	}
}
/*	function definition for LOOP-DO-FOR	*/

static L83()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	vs_top=sup;
TTL:;
	{object V373;
	object V374;
	object V375;
	object V376;
	object V377;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V373= vs_base[0];
	base[3]= (V373);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk363)();
	vs_top=sup;
	V374= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V375= vs_base[0];
	V376= Cnil;
	V377= Cnil;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V376= vs_base[0];
	if(!(type_of((V375))==t_symbol)){
	goto T1445;}
	base[3]= (V375);
	base[4]= STREF(object,(VV[96]->s.s_dbind),8);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V377= vs_base[0];
	if(((V377))!=Cnil){
	goto T1444;}
T1445:;
	base[3]= VV[191];
	base[4]= (V375);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1444:;
	base[3]= CMPcar((V377));
	base[4]= (V373);
	base[5]= (V376);
	base[6]= (V374);
	{object V378;
	V378= CMPcdr((V377));
	 vs_top=base+7;
	 while(V378!=Cnil)
	 {vs_push((V378)->c.c_car);V378=(V378)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	return;}
}
/*	function definition for LOOP-DO-REPEAT	*/

static L84()
{register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_check;
	vs_top=sup;
TTL:;
	{register object V379;
	register object V380;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V379= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[180]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	V380= vs_base[0];
	if(!(type_of((V379))==t_cons)){
	goto T1463;}
	if(!((CMPcar((V379)))==(VV[192]))){
	goto T1463;}
	base[0]= CMPcadr((V379));
	base[1]= (V380);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk323)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1463;}
	V380= CMPcadr((V379));
T1463:;
	{object V381;
	object V382;
	object V383;
	base[0]= (V379);
	base[1]= (V380);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1476;}
	V381= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1477;}
	V382= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1478;}
	V383= vs_base[0];
	vs_top=sup;
	goto T1479;
T1476:;
	V381= Cnil;
T1477:;
	V382= Cnil;
T1478:;
	V383= Cnil;
T1479:;
	if(((V382))==Cnil){
	goto T1481;}
	if(!(number_compare((V383),small_fixnum(1))<=0)){
	goto T1481;}
	base[0]= listA(6,Ct,Cnil,Cnil,Cnil,(number_compare((V383),small_fixnum(0))<=0?Ct:Cnil),VV[193]);
	vs_top=(vs_base=base+0)+1;
	return;
T1481:;
	{register object V384;
	base[1]= VV[194];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V381);
	base[2]= (V380);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V384= vs_base[0];
	if(((V382))==Cnil){
	goto T1491;}
	V385= list(2,VV[36],list(2,VV[195],list(3,VV[11],(V384),list(2,VV[196],(V384)))));
	base[0]= make_cons(/* INLINE-ARGS */V385,VV[197]);
	vs_top=(vs_base=base+0)+1;
	return;
T1491:;
	V386= list(2,VV[198],list(3,VV[11],(V384),list(2,VV[196],(V384))));
	base[0]= make_cons(/* INLINE-ARGS */V386,VV[199]);
	vs_top=(vs_base=base+0)+1;
	return;}}}
}
/*	function definition for LOOP-WHEN-IT-VARIABLE	*/

static L85()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	vs_top=sup;
TTL:;
	if((VV[115]->s.s_dbind)!=Cnil){
	base[0]= (VV[115]->s.s_dbind);
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
	(VV[115]->s.s_dbind)= vs_base[0];
	base[0]= (VV[115]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-ANSI-FOR-EQUALS	*/

static L86()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	{register object V387;
	object V388;
	object V389;
	V387=(base[0]);
	V388=(base[1]);
	V389=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= (V387);
	base[4]= Cnil;
	base[5]= (V389);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	base[3]= CMPcar((VV[89]->s.s_dbind));
	base[4]= VV[201];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1503;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V390= vs_base[0];
	V391= list(2,(V387),V390);
	base[3]= listA(7,Cnil,/* INLINE-ARGS */V391,Cnil,Cnil,Cnil,list(2,(V387),(V388)),VV[202]);
	vs_top=(vs_base=base+3)+1;
	return;
T1503:;
	base[3]= listA(3,Cnil,list(2,(V387),(V388)),VV[203]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for LOOP-FOR-ACROSS	*/

static L87()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	{object V392;
	object V393;
	object V394;
	V392=(base[0]);
	V393=(base[1]);
	V394=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= (V392);
	base[4]= Cnil;
	base[5]= (V394);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	{object V395;
	register object V396;
	base[3]= VV[204];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V395= vs_base[0];
	base[3]= VV[205];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V396= vs_base[0];
	{register object V397;
	object V398;
	object V399;
	base[3]= (V393);
	base[4]= VV[206];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1520;}
	V397= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1521;}
	V398= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1522;}
	V399= vs_base[0];
	vs_top=sup;
	goto T1523;
T1520:;
	V397= Cnil;
T1521:;
	V398= Cnil;
T1522:;
	V399= Cnil;
T1523:;
	base[3]= (V395);
	base[4]= (V397);
	if(!(type_of((V397))==t_cons)){
	goto T1529;}
	if(!((CMPcar((V397)))==(VV[192]))){
	goto T1529;}
	base[5]= CMPcadr((V397));
	goto T1527;
T1529:;
	base[5]= VV[206];
T1527:;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[3]= (V396);
	base[4]= small_fixnum(0);
	base[5]= VV[207];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	{int V400;
	object V401;
	register object V402;
	object V403;
	object V404;
	object V405;
	V400= 0;
	if(((V398))!=Cnil){
	goto T1540;}
	{object V406;
	base[7]= VV[208];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V406= vs_base[0];
	V407= list(3,VV[11],(V406),list(2,VV[209],(V395)));
	(VV[105]->s.s_dbind)= make_cons(/* INLINE-ARGS */V407,(VV[105]->s.s_dbind));
	base[7]= (V406);
	base[8]= small_fixnum(0);
	base[9]= VV[207];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V401= vs_base[0];
	goto T1538;}
T1540:;
	V400= length((V399));
	V401= CMPmake_fixnum(V400);
T1538:;
	V402= list(3,VV[210],(V396),(V401));
	V403= (V402);
	V404= list(2,(V392),list(3,VV[211],(V395),(V396)));
	V405= list(2,(V396),list(2,VV[177],(V396)));
	if(((V398))==Cnil){
	goto T1554;}
	V402= ((V400)==(0)?Ct:Cnil);
	if(!((V400)<=(1))){
	goto T1554;}
	V403= Ct;
T1554:;
	if(((((V402))==((V403))?Ct:Cnil))==Cnil){
	goto T1563;}
	V408= Cnil;
	goto T1562;
T1563:;
	V408= list(4,(V402),(V404),Cnil,(V405));
T1562:;
	base[7]= listA(5,(V403),(V404),Cnil,(V405),V408);
	vs_top=(vs_base=base+7)+1;
	return;}}}
	}
}
/*	function definition for LOOP-LIST-STEP	*/

static L88()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	{object V409;
	V409=(base[0]);
	vs_top=sup;
TTL:;
	{register object V410;
	base[1]= CMPcar((VV[89]->s.s_dbind));
	base[2]= VV[212];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1567;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V410= vs_base[0];
	goto T1565;
T1567:;
	V410= VV[213];
T1565:;
	if(!(type_of((V410))==t_cons)){
	goto T1573;}
	if(!((CMPcar((V410)))==(VV[214]))){
	goto T1573;}
	base[1]= VV[215];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk335)();
	vs_top=sup;
	base[1]= list(3,VV[216],(V410),(V409));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
T1573:;
	if(!(type_of((V410))==t_cons)){
	goto T1582;}
	if(!((CMPcar((V410)))==(VV[83]))){
	goto T1582;}
	base[1]= list(2,CMPcadr((V410)),(V409));
	base[2]= CMPcadr((V410));
	vs_top=(vs_base=base+1)+2;
	return;
T1582:;
	base[3]= VV[217];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V410);
	base[4]= VV[83];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V411= vs_base[0];
	base[1]= list(3,VV[216],V411,(V409));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-FOR-ON	*/

static L89()
{register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	{register object V412;
	object V413;
	object V414;
	V412=(base[0]);
	V413=(base[1]);
	V414=(base[2]);
	vs_top=sup;
TTL:;
	{object V415;
	object V416;
	object V417;
	base[3]= (V413);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1597;}
	V415= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1598;}
	V416= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1599;}
	V417= vs_base[0];
	vs_top=sup;
	goto T1600;
T1597:;
	V415= Cnil;
T1598:;
	V416= Cnil;
T1599:;
	V417= Cnil;
T1600:;
	{register object V418;
	V418= (V412);
	if(((V412))==Cnil){
	goto T1603;}
	if(!(type_of((V412))==t_symbol)){
	goto T1603;}
	base[3]= (V412);
	base[4]= (V415);
	base[5]= (V414);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T1601;
T1603:;
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	V418= vs_base[0];
	base[3]= (V418);
	base[4]= (V415);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	base[3]= (V412);
	base[4]= Cnil;
	base[5]= (V414);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T1601:;
	{object V419;
	object V420;
	base[3]= (V418);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T1620;}
	V419= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1621;}
	V420= vs_base[0];
	vs_top=sup;
	goto T1622;
T1620:;
	V419= Cnil;
T1621:;
	V420= Cnil;
T1622:;
	{register object V421;
	object V422;
	base[4]= (((V412))==((V418))?Ct:Cnil);
	base[5]= (V418);
	base[6]= list(2,VV[218],(V418));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V421= vs_base[0];
	V422= (V421);
	if(((V416))==Cnil){
	goto T1628;}
	if(!(type_of((V417))==t_cons||((V417))==Cnil)){
	goto T1628;}
	V421= (((V417))==Cnil?Ct:Cnil);
T1628:;
	if(!(((V412))==((V418)))){
	goto T1635;}
	base[4]= Ct;
	base[5]= (V418);
	base[6]= (V419);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V423= vs_base[0];
	base[4]= list(8,Cnil,list(2,(V418),V423),(V422),Cnil,Cnil,Cnil,(V421),Cnil);
	vs_top=(vs_base=base+4)+1;
	return;
T1635:;
	{object V424;
	object V425;
	V424= list(2,(V412),(V418));
	V425= list(2,(V418),(V419));
	if(((((V421))==((V422))?Ct:Cnil))==Cnil){
	goto T1644;}
	V426= Cnil;
	goto T1643;
T1644:;
	V426= list(4,(V421),(V424),Cnil,(V425));
T1643:;
	base[4]= listA(5,(V422),(V424),Cnil,(V425),V426);
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	function definition for LOOP-FOR-IN	*/

static L90()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	{object V427;
	object V428;
	object V429;
	V427=(base[0]);
	V428=(base[1]);
	V429=(base[2]);
	vs_top=sup;
TTL:;
	{object V430;
	object V431;
	object V432;
	base[3]= (V428);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T1648;}
	V430= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1649;}
	V431= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1650;}
	V432= vs_base[0];
	vs_top=sup;
	goto T1651;
T1648:;
	V430= Cnil;
T1649:;
	V431= Cnil;
T1650:;
	V432= Cnil;
T1651:;
	{register object V433;
	base[3]= VV[219];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V433= vs_base[0];
	base[3]= (V427);
	base[4]= Cnil;
	base[5]= (V429);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	base[3]= (V433);
	base[4]= (V430);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	{object V434;
	object V435;
	base[3]= (V433);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk377)();
	if(vs_base>=vs_top){vs_top=sup;goto T1664;}
	V434= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1665;}
	V435= vs_base[0];
	vs_top=sup;
	goto T1666;
T1664:;
	V434= Cnil;
T1665:;
	V435= Cnil;
T1666:;
	{register object V436;
	object V437;
	object V438;
	object V439;
	V436= list(2,VV[220],(V433));
	V437= (V436);
	V438= list(2,(V427),list(2,VV[65],(V433)));
	V439= list(2,(V433),(V434));
	if(((V431))==Cnil){
	goto T1671;}
	if(!(type_of((V432))==t_cons||((V432))==Cnil)){
	goto T1671;}
	V436= (((V432))==Cnil?Ct:Cnil);
T1671:;
	if(((((V436))==((V437))?Ct:Cnil))==Cnil){
	goto T1678;}
	V440= Cnil;
	goto T1677;
T1678:;
	V440= list(4,(V436),(V438),Cnil,(V439));
T1677:;
	base[6]= listA(5,(V437),(V438),Cnil,(V439),V440);
	vs_top=(vs_base=base+6)+1;
	return;}}}}
	}
}
/*	function definition for MAKE-LOOP-PATH	*/

static L91()
{register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	{object V441;
	object V442;
	object V443;
	object V444;
	object V445;
	parse_key(vs_base,FALSE,FALSE,5,VV[223],VV[226],VV[227],VV[224],VV[225]);
	vs_top=sup;
	V441=(base[0]);
	V442=(base[1]);
	V443=(base[2]);
	V444=(base[3]);
	V445=(base[4]);
	base[10]= VV[221];
	base[11]= (V441);
	base[12]= (V442);
	base[13]= (V443);
	base[14]= (V444);
	base[15]= (V445);
	vs_top=(vs_base=base+10)+6;
	siLmake_structure();
	return;
	}
}
/*	function definition for ADD-LOOP-PATH	*/

static L92()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	bds_check;
	{object V446;
	object V447;
	register object V448;
	object V449;
	object V450;
	object V451;
	parse_key(vs_base+3,FALSE,FALSE,3,VV[226],VV[227],VV[225]);
	V446=(base[0]);
	V447=(base[1]);
	V448=(base[2]);
	vs_top=sup;
	V449=(base[3]);
	V450=(base[4]);
	V451=(base[5]);
	if(type_of((V446))==t_cons||((V446))==Cnil){
	goto T1686;}
	V446= make_cons((V446),Cnil);
T1686:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
T1692:;
	base[11]= (V448);
	base[12]= VV[39];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk378)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1693;}
	bds_unwind1;
	bds_unwind1;
	goto T1690;
T1693:;
	base[11]= VV[47];
	base[12]= VV[48];
	base[13]= VV[222];
	base[14]= (V448);
	base[15]= VV[39];
	vs_top=(vs_base=base+11)+5;
	Lcerror();
	vs_top=sup;
	base[11]= (VV[50]->s.s_dbind);
	base[12]= VV[51];
	base[13]= VV[222];
	vs_top=(vs_base=base+11)+3;
	Lformat();
	vs_top=sup;
	base[11]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+11)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V448= vs_base[0];
	base[11]= (VV[50]->s.s_dbind);
	base[12]= VV[52];
	vs_top=(vs_base=base+11)+2;
	Lformat();
	vs_top=sup;
	goto T1692;
T1690:;
	{object V452;
	object V453;
	V452= STREF(object,(V448),12);
	base[9]= VV[223];
	{object V454;
	object V455= (V446);
	if(V455==Cnil){
	base[10]= Cnil;
	goto T1721;}
	base[11]=V454=MMcons(Cnil,Cnil);
T1722:;
	(V454->c.c_car)= symbol_name((V455->c.c_car));
	if((V455=MMcdr(V455))==Cnil){
	base[10]= base[11];
	goto T1721;}
	V454=MMcdr(V454)=MMcons(Cnil,Cnil);
	goto T1722;}
T1721:;
	base[11]= VV[224];
	base[12]= (V447);
	base[13]= VV[225];
	base[14]= (V451);
	base[15]= VV[226];
	{object V456;
	object V457= (V449);
	if(V457==Cnil){
	base[16]= Cnil;
	goto T1729;}
	base[17]=V456=MMcons(Cnil,Cnil);
T1730:;
	if(!(type_of((V457->c.c_car))==t_cons||((V457->c.c_car))==Cnil)){
	goto T1733;}
	(V456->c.c_car)= (V457->c.c_car);
	goto T1731;
T1733:;
	(V456->c.c_car)= make_cons((V457->c.c_car),Cnil);
T1731:;
	if((V457=MMcdr(V457))==Cnil){
	base[16]= base[17];
	goto T1729;}
	V456=MMcdr(V456)=MMcons(Cnil,Cnil);
	goto T1730;}
T1729:;
	base[17]= VV[227];
	base[18]= (V450);
	vs_top=(vs_base=base+9)+10;
	(void) (*Lnk379)();
	vs_top=sup;
	V453= vs_base[0];
	{register object V459;
	register object V460;
	V459= (V446);
	V460= CMPcar((V459));
T1741:;
	if(!(((V459))==Cnil)){
	goto T1742;}
	goto T1737;
T1742:;
	{register object V461;
	register object V462;
	register object V463;
	V461= symbol_name((V460));
	V462= (V452);
	V463= (V453);
	base[11]= (V461);
	base[12]= (V462);
	base[13]= (V463);
	vs_top=(vs_base=base+11)+3;
	siLhash_set();
	vs_top=sup;}
	V459= CMPcdr((V459));
	V460= CMPcar((V459));
	goto T1741;}
T1737:;
	base[9]= (V453);
	vs_top=(vs_base=base+9)+1;
	return;}
	}
}
/*	function definition for LOOP-FOR-BEING	*/

static L93()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	{object V464;
	object V465;
	object V466;
	V464=(base[0]);
	V465=(base[1]);
	V466=(base[2]);
	vs_top=sup;
TTL:;
	{register object V467;
	object V468;
	object V469;
	object V470;
	object V471;
	V467= Cnil;
	V468= Cnil;
	V469= Cnil;
	V470= Cnil;
	V471= Cnil;
	base[3]= (V465);
	base[4]= VV[228];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1760;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V467= vs_base[0];
	goto T1758;
T1760:;
	base[3]= CMPcar((VV[89]->s.s_dbind));
	base[4]= VV[152];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1766;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V469= Ct;
	base[3]= CMPcar((VV[89]->s.s_dbind));
	base[4]= VV[229];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1773;}
	base[3]= VV[230];
	base[4]= CMPcar((VV[89]->s.s_dbind));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1773:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V467= vs_base[0];
	V472= list(2,VV[231],(V465));
	V471= make_cons(/* INLINE-ARGS */V472,Cnil);
	goto T1758;
T1766:;
	base[3]= VV[232];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T1758:;
	if(type_of((V467))==t_symbol){
	goto T1787;}
	base[3]= VV[233];
	base[4]= (V467);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1785;
T1787:;
	base[3]= (V467);
	base[4]= STREF(object,(VV[96]->s.s_dbind),12);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V468= vs_base[0];
	if(((V468))!=Cnil){
	goto T1792;}
	base[3]= VV[234];
	base[4]= (V467);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1785;
T1792:;
	if(((V469))==Cnil){
	goto T1785;}
	if((STREF(object,(V468),8))!=Cnil){
	goto T1785;}
	base[3]= VV[235];
	base[4]= (V467);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1785:;
	{object V473;
	object V474;
	object V475;
	V473= STREF(object,(V468),12);
	base[3]= STREF(object,(V468),4);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk380)();
	vs_top=sup;
	V476= vs_base[0];
	V474= nconc((V471),V476);
	V475= STREF(object,(V468),16);
	if(!(type_of((V473))==t_symbol)){
	goto T1812;}
	base[3]= (V473);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V473= vs_base[0];
T1812:;
	if(((V469))==Cnil){
	goto T1819;}
	base[3]= (V473);
	base[4]= (V464);
	base[5]= (V466);
	base[6]= (V474);
	base[7]= VV[236];
	base[8]= Ct;
	{object V477;
	V477= (V475);
	 vs_top=base+9;
	 while(V477!=Cnil)
	 {vs_push((V477)->c.c_car);V477=(V477)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V470= vs_base[0];
	goto T1817;
T1819:;
	base[3]= (V473);
	base[4]= (V464);
	base[5]= (V466);
	base[6]= (V474);
	{object V478;
	V478= (V475);
	 vs_top=base+7;
	 while(V478!=Cnil)
	 {vs_push((V478)->c.c_car);V478=(V478)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V470= vs_base[0];
T1817:;}
	if(((VV[101]->s.s_dbind))==Cnil){
	goto T1833;}
	base[3]= VV[237];
	base[4]= (VV[101]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1833:;
	V480 = CMPmake_fixnum(length((V470)));
	{register object x= V480,V479= VV[238];
	while(V479!=Cnil)
	if(eql(x,V479->c.c_car)){
	goto T1838;
	}else V479=V479->c.c_cdr;}
	base[3]= VV[239];
	base[4]= (V467);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1838:;
	{register object V481;
	register object V482;
	V481= CMPcar((V470));
	V482= Cnil;
T1846:;
	if(((V481))!=Cnil){
	goto T1847;}
	goto T1843;
T1847:;
	V482= CMPcar((V481));
	if(!(type_of((V482))!=t_cons)){
	goto T1853;}
	base[3]= (V482);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T1851;
T1853:;
	base[3]= CMPcar((V482));
	base[4]= CMPcadr((V482));
	base[5]= CMPcaddr((V482));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T1851:;
	V481= CMPcdr((V481));
	goto T1846;}
T1843:;
	V483= reverse(CMPcadr((V470)));
	(VV[105]->s.s_dbind)= nconc(/* INLINE-ARGS */V483,(VV[105]->s.s_dbind));
	base[3]= CMPcddr((V470));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for NAMED-VARIABLE	*/

static L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V484;
	V484=(base[0]);
	vs_top=sup;
TTL:;
	{object V485;
	base[1]= (V484);
	base[2]= (VV[101]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	V485= vs_base[0];
	if(((V485))!=Cnil){
	goto T1871;}
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
T1871:;
	base[1]= (V485);
	base[2]= (VV[101]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk382)();
	vs_top=sup;
	(VV[101]->s.s_dbind)= vs_base[0];
	base[1]= CMPcdr((V485));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-COLLECT-PREPOSITIONAL-PHRASES	*/

static L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{object V486;
	object V487;
	object V488;
	V486=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1881;}
	V487=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1882;}
	V488=(base[2]);
	vs_top=sup;
	goto T1883;
T1881:;
	V487= Cnil;
T1882:;
	V488= Cnil;
T1883:;
	base[3]=make_cclosure_new(LC96,Cnil,Cnil,Cdata);
	base[3]=MMcons(base[3],Cnil);
	{object V489;
	object V490;
	register object V491;
	register object V492;
	object V493;
	object V494;
	{object V495;
	object V496= (V488);
	if(V496==Cnil){
	V493= Cnil;
	goto T1886;}
	base[4]=V495=MMcons(Cnil,Cnil);
T1887:;
	base[6]= CMPcar((V496->c.c_car));
	base[7]= (V486);
	base[8]= VV[20];
	base[9]= (base[3]->c.c_car);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk365)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V495->c.c_cdr)= vs_base[0];
	while(MMcdr(V495)!=Cnil)V495=MMcdr(V495);
	if((V496=MMcdr(V496))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V493= base[4];
	goto T1886;}
	goto T1887;}
T1886:;
	{object V498;
	object V499= (V488);
	if(V499==Cnil){
	V494= Cnil;
	goto T1894;}
	base[4]=V498=MMcons(Cnil,Cnil);
T1895:;
	(V498->c.c_car)= CMPcar((V499->c.c_car));
	if((V499=MMcdr(V499))==Cnil){
	V494= base[4];
	goto T1894;}
	V498=MMcdr(V498)=MMcons(Cnil,Cnil);
	goto T1895;}
T1894:;
	V489= Cnil;
	V490= (V488);
	V491= Cnil;
	V492= Cnil;
T1898:;
	if(((VV[89]->s.s_dbind))!=Cnil){
	goto T1899;}
	base[4]= nreverse((V490));
	vs_top=(vs_base=base+4)+1;
	return;
T1899:;
	V489= CMPcar((VV[89]->s.s_dbind));
	{register object V500;
	register object V501;
	V500= (V486);
	V501= CMPcar((V500));
T1909:;
	if(!(((V500))==Cnil)){
	goto T1910;}
	goto T1905;
T1910:;
	base[5]= (V489);
	base[6]= (V501);
	vs_top=(vs_base=base+5)+2;
	L96(base);
	vs_top=sup;
	V492= vs_base[0];
	if(((V492))==Cnil){
	goto T1914;}
	V491= (V501);
	goto T1905;
T1914:;
	V500= CMPcdr((V500));
	V501= CMPcar((V500));
	goto T1909;}
T1905:;
	if(((V491))==Cnil){
	goto T1928;}
	{register object x= (V492),V502= (V493);
	while(V502!=Cnil)
	if(eql(x,V502->c.c_car)){
	goto T1932;
	}else V502=V502->c.c_cdr;
	goto T1930;}
T1932:;
	{register object x= (V492),V503= (V494);
	while(V503!=Cnil)
	if(eql(x,V503->c.c_car)){
	goto T1936;
	}else V503=V503->c.c_cdr;
	goto T1935;}
T1936:;
	base[4]= VV[240];
	goto T1933;
T1935:;
	base[4]= VV[241];
T1933:;
	base[5]= (V489);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1930:;
	if(!(type_of((V491))==t_cons||((V491))==Cnil)){
	goto T1941;}
	V494= append((V491),(V494));
	goto T1939;
T1941:;
	V494= make_cons((V491),(V494));
T1939:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	V504= vs_base[0];
	V505= list(2,(V492),V504);
	V490= make_cons(/* INLINE-ARGS */V505,(V490));
	goto T1926;
T1928:;
	if(((V487))==Cnil){
	goto T1947;}
	base[4]= (V489);
	base[5]= VV[242];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1947;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	{register object V506;
	object V507;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V506= vs_base[0];
	V507= Cnil;
T1956:;
	if(type_of((V506))!=t_cons){
	goto T1960;}
	if(type_of(CMPcdr((V506)))!=t_cons){
	goto T1960;}
	if((CMPcddr((V506)))!=Cnil){
	goto T1960;}
	if(!(type_of(CMPcar((V506)))==t_symbol)){
	goto T1960;}
	if((CMPcadr((V506)))==Cnil){
	goto T1959;}
	if(type_of(CMPcadr((V506)))==t_symbol){
	goto T1959;}
T1960:;
	base[4]= VV[243];
	base[5]= (V506);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk343)();
	vs_top=sup;
T1959:;
	if((CMPcadr((V506)))==Cnil){
	goto T1974;}
	base[4]= CMPcar((V506));
	base[5]= (VV[101]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk381)();
	vs_top=sup;
	V507= vs_base[0];
	if(((V507))==Cnil){
	goto T1978;}
	base[4]= VV[244];
	base[5]= CMPcar((V506));
	base[6]= CMPcadr((V506));
	base[7]= CMPcadr((V507));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1974;
T1978:;
	V508= make_cons(CMPcar((V506)),CMPcadr((V506)));
	(VV[101]->s.s_dbind)= make_cons(/* INLINE-ARGS */V508,(VV[101]->s.s_dbind));
T1974:;
	if(((VV[89]->s.s_dbind))==Cnil){
	goto T1989;}
	if(!(type_of(CMPcar((VV[89]->s.s_dbind)))==t_symbol)){
	goto T1988;}
T1989:;
	goto T1926;
T1988:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	V506= vs_base[0];
	goto T1956;}
T1947:;
	base[4]= nreverse((V490));
	vs_top=(vs_base=base+4)+1;
	return;
T1926:;
	V491= Cnil;
	V492= Cnil;
	goto T1898;}
	}
}
/*	function definition for LOOP-SEQUENCER	*/

static L97()
{register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_check;
	{object V509;
	register object V510;
	object V511;
	object V512;
	object V513;
	object V514;
	object V515;
	object V516;
	object V517;
	object V518;
	V509=(base[0]);
	V510=(base[1]);
	V511=(base[2]);
	V512=(base[3]);
	V513=(base[4]);
	V514=(base[5]);
	V515=(base[6]);
	V516=(base[7]);
	V517=(base[8]);
	V518=(base[9]);
	vs_top=sup;
TTL:;
	{object V519;
	object V520;
	object V521;
	object V522;
	object V523;
	object V524;
	object V525;
	register object V526;
	register object V527;
	object V528;
	object V529;
	object V530;
	object V531;
	object V532;
	object V533;{object V535;
	base[10]= (V510);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V535= vs_base[0];
	if(V535==Cnil)goto T2002;
	V534= V535;
	goto T2001;
T2002:;}
	V534= small_fixnum(0);
T2001:;
	V523= one_plus(V534);
	V519= Cnil;
	V520= Cnil;
	V521= Cnil;
	V522= Cnil;
	V524= Ct;
	V525= Cnil;
	V526= Cnil;
	V527= Cnil;
	V528= Cnil;
	V529= Cnil;
	V530= Cnil;
	V531= Cnil;
	V532= Cnil;
	V533= Cnil;
	if(((V512))==Cnil){
	goto T2005;}
	base[10]= (V512);
	base[11]= Cnil;
	base[12]= (V513);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T2005:;
	{register object V536;
	register object V537;
	register object V538;
	object V539;
	V536= (V518);
	V537= Cnil;
	V538= Cnil;
	V539= Cnil;
T2013:;
	if(((V536))!=Cnil){
	goto T2014;}
	goto T2011;
T2014:;
	V537= CMPcaar((V536));
	V538= CMPcadar((V536));
	{object V540= (V537);
	if((V540!= VV[383])
	&& (V540!= VV[231]))goto T2023;
	V520= Ct;
	base[10]= (V514);
	base[11]= (V538);
	base[12]= (V515);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	goto T2022;
T2023:;
	if((V540!= VV[384])
	&& (V540!= VV[245])
	&& (V540!= VV[247]))goto T2029;
	V528= Ct;
	if(!(((V537))==(VV[245]))){
	goto T2034;}
	V526= VV[246];
	goto T2032;
T2034:;
	if(!(((V537))==(VV[247]))){
	goto T2032;}
	V526= VV[248];
T2032:;
	base[10]= (V538);
	base[11]= (V510);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V538= vs_base[0];
	vs_base++;
	}else{
	V538= Cnil;}
	if(vs_base<vs_top){
	V530= vs_base[0];
	vs_base++;
	}else{
	V530= Cnil;}
	if(vs_base<vs_top){
	V529= vs_base[0];
	}else{
	V529= Cnil;}
	vs_top=sup;
	base[10]= (V509);
	base[11]= (V538);
	base[12]= (V510);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
	goto T2022;
T2029:;
	if((V540!= VV[249])
	&& (V540!= VV[250])
	&& (V540!= VV[251])
	&& (V540!= VV[252])
	&& (V540!= VV[253]))goto T2047;
	base[10]= (V537);
	base[11]= VV[249];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2050;}
	V526= VV[248];
	V527= VV[248];
	goto T2048;
T2050:;
	base[10]= (V537);
	base[11]= VV[250];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2057;}
	V527= Ct;
	goto T2048;
T2057:;
	base[10]= (V537);
	base[11]= VV[251];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2063;}
	V526= VV[246];
	V527= VV[246];
	goto T2048;
T2063:;
	base[10]= (V537);
	base[11]= VV[252];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2070;}
	V526= VV[246];
	goto T2048;
T2070:;
	base[10]= (V537);
	base[11]= VV[253];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2048;}
	V526= VV[248];
T2048:;
	V531= Ct;
	base[10]= (V538);
	base[11]= (V510);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V538= vs_base[0];
	vs_base++;
	}else{
	V538= Cnil;}
	if(vs_base<vs_top){
	V532= vs_base[0];
	vs_base++;
	}else{
	V532= Cnil;}
	if(vs_base<vs_top){
	V533= vs_base[0];
	}else{
	V533= Cnil;}
	vs_top=sup;
	if(((V532))==Cnil){
	goto T2088;}
	V519= list(2,VV[214],(V533));
	goto T2086;
T2088:;
	base[11]= VV[254];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[11]= (V538);
	base[12]= (V510);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V519= vs_base[0];
T2086:;
	goto T2022;
T2047:;
	if((V540!= VV[212]))goto T2094;
	base[10]= (V538);
	base[11]= (V510);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk375)();
	if(vs_base<vs_top){
	V538= vs_base[0];
	vs_base++;
	}else{
	V538= Cnil;}
	if(vs_base<vs_top){
	V524= vs_base[0];
	vs_base++;
	}else{
	V524= Cnil;}
	if(vs_base<vs_top){
	V523= vs_base[0];
	}else{
	V523= Cnil;}
	vs_top=sup;
	if(((V524))!=Cnil){
	goto T2022;}
	base[11]= VV[255];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V523= vs_base[0];
	base[10]= (V523);
	base[11]= (V538);
	base[12]= (V510);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	goto T2022;
T2094:;
	base[10]= VV[256];
	base[11]= (V537);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk343)();
	vs_top=sup;}
T2022:;
	if(((V539))==Cnil){
	goto T2108;}
	if(((V526))==Cnil){
	goto T2108;}
	if(((V526))==((V539))){
	goto T2108;}
	base[10]= VV[257];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2108:;
	V539= (V526);
	V536= CMPcdr((V536));
	goto T2013;}
T2011:;
	if(((V514))==Cnil){
	goto T2121;}
	if(((V520))!=Cnil){
	goto T2121;}
	base[10]= VV[258];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2121:;
	if(((V528))!=Cnil){
	goto T2127;}
	base[10]= (V509);
	V530= Ct;{object V541;
	base[12]= (V510);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V541= vs_base[0];
	if(V541==Cnil)goto T2135;
	V529= V541;
	goto T2134;
T2135:;}
	V529= small_fixnum(0);
T2134:;
	base[11]= (V529);
	base[12]= (V510);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk376)();
	vs_top=sup;
T2127:;
	{register object x= (V526),V542= VV[259];
	while(V542!=Cnil)
	if(eql(x,V542->c.c_car)){
	goto T2142;
	}else V542=V542->c.c_cdr;
	goto T2141;}
T2142:;
	if(((V531))!=Cnil){
	goto T2144;}
	if(((V517))==Cnil){
	goto T2143;}
T2144:;
	if(((V531))!=Cnil){
	goto T2148;}
	base[11]= VV[260];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V519= vs_base[0];
	base[10]= (V519);
	base[11]= Cnil;
	base[12]= (V510);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk355)();
	vs_top=sup;
	V543= list(3,VV[11],(V519),(V517));
	(VV[105]->s.s_dbind)= make_cons(/* INLINE-ARGS */V543,(VV[105]->s.s_dbind));
T2148:;
	if(((V527))==Cnil){
	goto T2160;}
	V521= VV[34];
	goto T2158;
T2160:;
	V521= VV[210];
T2158:;
T2143:;
	if(!(eql((V523),small_fixnum(1)))){
	goto T2164;}
	V525= list(2,VV[177],(V509));
	goto T2162;
T2164:;
	V525= list(3,VV[178],(V509),(V523));
T2162:;
	goto T2139;
T2141:;
	if(((V528))!=Cnil){
	goto T2166;}
	if(((V517))!=Cnil){
	goto T2169;}
	base[10]= VV[261];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2169:;
	V544= list(3,VV[11],(V509),list(2,VV[196],(V517)));
	(VV[105]->s.s_dbind)= make_cons(/* INLINE-ARGS */V544,(VV[105]->s.s_dbind));
T2166:;
	if(((V517))==Cnil){
	goto T2174;}
	if(((V519))!=Cnil){
	goto T2174;}
	base[10]= (V510);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk326)();
	vs_top=sup;
	V519= vs_base[0];
	V527= Ct;
T2174:;
	if(((V519))==Cnil){
	goto T2183;}
	if(((V527))==Cnil){
	goto T2188;}
	V521= VV[33];
	goto T2186;
T2188:;
	V521= VV[262];
T2186:;
T2183:;
	if(!(eql((V523),small_fixnum(1)))){
	goto T2192;}
	V525= list(2,VV[196],(V509));
	goto T2190;
T2192:;
	V525= list(3,VV[263],(V509),(V523));
T2190:;
T2139:;
	if(((V521))==Cnil){
	goto T2194;}
	base[10]= Ct;
	base[11]= (V509);
	base[12]= list(3,(V521),(V509),(V519));
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V522= vs_base[0];
T2194:;
	if(((V516))==Cnil){
	goto T2201;}
	base[10]= (V511);
	base[11]= (V509);
	base[12]= (V516);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V545= vs_base[0];
	V516= list(2,(V512),V545);
T2201:;
	{object V546;
	object V547;
	V546= (V522);
	V547= (V522);
	if(((V524))==Cnil){
	goto T2209;}
	if(((V530))==Cnil){
	goto T2209;}
	if(((V532))==Cnil){
	goto T2209;}
	base[10]= (V521);
	vs_top=(vs_base=base+10)+1;
	Lsymbol_function();
	vs_top=sup;
	V548= vs_base[0];
	V546= (
	V549 = V548,
	(type_of(V549) == t_sfun ?(*(object (*)())((V549)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V549)==t_vfun) ?
	(*(object (*)())((V549)->sfn.sfn_self)):
	(fcall.fun=(V549),fcalln))((V529),(V533)));
	if(((V546))==Cnil){
	goto T2209;}
	V547= Ct;
T2209:;
	base[10]= Ct;
	base[11]= (V509);
	base[12]= (V525);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk328)();
	vs_top=sup;
	V550= vs_base[0];
	base[10]= list(8,Cnil,list(2,(V509),V550),(V547),(V516),Cnil,Cnil,(V546),(V516));
	vs_top=(vs_base=base+10)+1;
	return;}}
	}
}
/*	function definition for LOOP-FOR-ARITHMETIC	*/

static L98()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V551;
	object V552;
	object V553;
	object V554;
	V551=(base[0]);
	V552=(base[1]);
	V553=(base[2]);
	V554=(base[3]);
	vs_top=sup;
TTL:;
	base[4]= (V551);
	base[6]= (V553);
	base[7]= (VV[180]->s.s_dbind);
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
	V555= list(2,(V554),(V552));
	base[16]= make_cons(/* INLINE-ARGS */V555,Cnil);
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
	vs_check;
	{object V556;
	object V557;
	object V558;
	object V559;
	object V560;
	object V561;
	object V562;
	parse_key(vs_base+3,FALSE,FALSE,4,VV[386],VV[387],VV[388],VV[389]);
	V556=(base[0]);
	V557=(base[1]);
	V558=(base[2]);
	vs_top=sup;
	V559=(base[3]);
	V560=(base[4]);
	V561=(base[5]);
	V562=(base[6]);
	{object V563;
	object V564;
	base[11]= VV[265];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk390)();
	if(vs_base>=vs_top){vs_top=sup;goto T2243;}
	V563= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2244;}
	V564= vs_base[0];
	vs_top=sup;
	goto T2245;
T2243:;
	V563= Cnil;
T2244:;
	V564= Cnil;
T2245:;
	{object V565;
	base[11]= VV[266];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk390)();
	vs_top=sup;
	V565= vs_base[0];
	base[11]= (V563);
	base[12]= VV[207];
	base[13]= (V564);
	base[14]= (V556);
	if((V557)!=Cnil){
	base[15]= (V557);
	goto T2253;}
	base[15]= (V562);
T2253:;
	base[16]= (V565);
	base[17]= (V561);
	base[18]= list(3,(V559),(V565),(V563));
	base[19]= list(2,(V560),(V565));
	base[20]= (V558);
	vs_top=(vs_base=base+11)+10;
	(void) (*Lnk385)();
	vs_top=sup;
	V566= vs_base[0];
	base[11]= listA(3,Cnil,Cnil,V566);
	vs_top=(vs_base=base+11)+1;
	return;}}
	}
}
/*	function definition for LOOP-HASH-TABLE-ITERATION-PATH	*/

static L100()
{register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_check;
	bds_check;
	{object V567;
	object V568;
	object V569;
	register object V570;
	parse_key(vs_base+3,FALSE,FALSE,1,VV[391]);
	V567=(base[0]);
	V568=(base[1]);
	V569=(base[2]);
	vs_top=sup;
	V570=(base[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
T2261:;
	base[7]= (V570);
	base[8]= VV[267];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2262;}
	bds_unwind1;
	bds_unwind1;
	goto T2259;
T2262:;
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[268];
	base[10]= (V570);
	base[11]= VV[267];
	vs_top=(vs_base=base+7)+5;
	Lcerror();
	vs_top=sup;
	base[7]= (VV[50]->s.s_dbind);
	base[8]= VV[51];
	base[9]= VV[268];
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	base[7]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+7)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V570= vs_base[0];
	base[7]= (VV[50]->s.s_dbind);
	base[8]= VV[52];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	goto T2261;
T2259:;
	if((CMPcdr((V569)))!=Cnil){
	goto T2288;}
	{register object x= CMPcaar((V569)),V571= VV[269];
	while(V571!=Cnil)
	if(eql(x,V571->c.c_car)){
	goto T2289;
	}else V571=V571->c.c_cdr;}
T2288:;
	base[5]= VV[270];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T2287;
T2289:;
	if(((V569))!=Cnil){
	goto T2287;}
	base[5]= VV[271];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2287:;
	{object V572;
	object V573;
	object V574;
	register object V575;
	base[5]= VV[272];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V572= vs_base[0];
	base[5]= VV[273];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V573= vs_base[0];
	V574= Cnil;
	V575= Cnil;
	{object V576;
	object V577;
	if(!(((V570))==(VV[274]))){
	goto T2304;}
	base[5]= VV[275];
	goto T2302;
T2304:;
	base[5]= VV[274];
T2302:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk390)();
	if(vs_base>=vs_top){vs_top=sup;goto T2306;}
	V576= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2307;}
	V577= vs_base[0];
	vs_top=sup;
	goto T2308;
T2306:;
	V576= Cnil;
T2307:;
	V577= Cnil;
T2308:;
	V577= Ct;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V574= vs_base[0];
	{register object V578;
	register object V579;
	register object V580;
	V581= list(3,(V567),Cnil,(V568));
	V582= list(2,(V572),CMPcadar((V569)));
	if((V577)==Cnil){
	V583= Cnil;
	goto T2314;}
	if((V576)==Cnil){
	V583= Cnil;
	goto T2314;}
	V584= list(2,(V576),Cnil);
	V583= make_cons(/* INLINE-ARGS */V584,Cnil);
T2314:;
	V580= listA(3,/* INLINE-ARGS */V581,/* INLINE-ARGS */V582,V583);
	V578= Cnil;
	V579= Cnil;
	if(!(((V570))==(VV[274]))){
	goto T2317;}
	V578= (V567);
	if((V577)==Cnil){
	V579= Cnil;
	goto T2321;}
	V579= (V576);
T2321:;
	goto T2315;
T2317:;
	if((V577)==Cnil){
	V578= Cnil;
	goto T2323;}
	V578= (V576);
T2323:;
	V579= (V567);
T2315:;
	V585= list(2,VV[276],list(2,(V573),(V572)));
	(VV[106]->s.s_dbind)= make_cons(/* INLINE-ARGS */V585,(VV[106]->s.s_dbind));
	if(!(type_of((V578))==t_cons)){
	goto T2327;}{object V586;
	V586= (V578);
	base[5]= VV[277];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V578= vs_base[0];
	V575= listA(3,V586,(V578),(V575));}
	V587= list(2,(V578),Cnil);
	V580= make_cons(/* INLINE-ARGS */V587,(V580));
T2327:;
	if(!(type_of((V579))==t_cons)){
	goto T2335;}{object V588;
	V588= (V579);
	base[5]= VV[278];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V579= vs_base[0];
	V575= listA(3,V588,(V579),(V575));}
	V589= list(2,(V579),Cnil);
	V580= make_cons(/* INLINE-ARGS */V589,(V580));
T2335:;
	V590= list(3,(V574),(V578),(V579));
	base[5]= list(6,(V580),Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V590,make_cons((V573),Cnil))),(V575));
	vs_top=(vs_base=base+5)+1;
	return;}}}
	}
}
/*	function definition for LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static L101()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V591;
	object V592;
	register object V593;
	object V594;
	parse_key(vs_base+3,FALSE,FALSE,1,VV[392]);
	V591=(base[0]);
	V592=(base[1]);
	V593=(base[2]);
	vs_top=sup;
	V594=(base[3]);
	if((CMPcdr((V593)))!=Cnil){
	goto T2344;}
	{register object x= CMPcaar((V593)),V595= VV[279];
	while(V595!=Cnil)
	if(eql(x,V595->c.c_car)){
	goto T2345;
	}else V595=V595->c.c_cdr;}
T2344:;
	base[5]= VV[280];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T2343;
T2345:;
	if(((V593))!=Cnil){
	goto T2343;}
	base[5]= VV[281];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2343:;
	if(type_of((V591))==t_symbol){
	goto T2353;}
	base[5]= VV[282];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)();
	vs_top=sup;
T2353:;
	{object V596;
	object V597;
	base[5]= VV[283];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V596= vs_base[0];
	base[5]= VV[284];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk324)();
	vs_top=sup;
	V597= vs_base[0];
	V598= list(2,VV[285],listA(3,(V597),(V596),(V594)));
	(VV[106]->s.s_dbind)= make_cons(/* INLINE-ARGS */V598,(VV[106]->s.s_dbind));
	V599= list(3,(V591),Cnil,(V592));
	V600= list(2,/* INLINE-ARGS */V599,list(2,(V596),CMPcadar((V593))));
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V601= vs_base[0];
	V602= list(2,V601,(V591));
	base[5]= list(6,/* INLINE-ARGS */V600,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V602,make_cons((V597),Cnil))),Cnil);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for MAKE-ANSI-LOOP-UNIVERSE	*/

static L102()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V603;
	V603=(base[0]);
	vs_top=sup;
TTL:;
	{register object V604;
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
	base[15]= list(2,VV[176],list(4,VV[298],VV[176],(VV[180]->s.s_dbind),VV[207]));
	base[16]= list(2,VV[299],list(4,VV[298],VV[176],(VV[180]->s.s_dbind),VV[207]));
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
	if(((V603))==Cnil){
	goto T2393;}
	base[12]= VV[304];
	goto T2391;
T2393:;
	base[12]= Ct;
T2391:;
	vs_top=(vs_base=base+1)+12;
	(void) (*Lnk393)();
	vs_top=sup;
	V604= vs_base[0];
	base[1]= VV[305];
	base[2]= VV[306];
	base[3]= (V604);
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
	base[3]= (V604);
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
	base[3]= (V604);
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
	base[3]= (V604);
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
	base[3]= (V604);
	base[4]= VV[226];
	base[5]= VV[320];
	base[6]= VV[227];
	base[7]= Cnil;
	base[8]= VV[225];
	base[9]= VV[321];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk394)();
	vs_top=sup;
	base[1]= (V604);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-STANDARD-EXPANSION	*/

static L103()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_check;
	{register object V605;
	object V606;
	object V607;
	V605=(base[0]);
	V606=(base[1]);
	V607=(base[2]);
	vs_top=sup;
TTL:;
	if(((V605))==Cnil){
	goto T2446;}
	if(!(type_of(CMPcar((V605)))==t_symbol)){
	goto T2446;}
	base[3]= (V605);
	base[4]= (V606);
	base[5]= (V607);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk395)();
	return;
T2446:;
	{object V608;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V608= vs_base[0];
	V609= make_cons(VV[14],(V605));
	base[3]= list(3,VV[120],Cnil,list(4,VV[73],(V608),/* INLINE-ARGS */V609,list(2,VV[82],(V608))));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP	*/

static L104()
{register object *base=vs_base;
	register object *sup=base+VM91; VC91
	vs_check;
	vs_top=sup;
	{object V610=base[0]->c.c_cdr;
	base[2]= V610;}
	base[3]= base[2];
	base[4]= base[1];
	base[5]= (VV[322]->s.s_dbind);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk396)();
	return;
}
/*	local function IN-GROUP-P	*/

static LC96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_check;
	{object V611;
	object V612;
	V611=(base[0]);
	V612=(base[1]);
	vs_top=sup;
	base[2]= (V611);
	base[3]= (V612);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V613= vs_base[0];
	base[2]= CMPcar(V613);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function IN-GROUP-P	*/

static L96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	{object V614;
	object V615;
	V614=(base[0]);
	V615=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= (V614);
	base[3]= (V615);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V616= vs_base[0];
	base[2]= CMPcar(V616);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function MAKE-ENDTEST	*/

static L82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM94; VC94
	vs_check;
	{object V617;
	V617=(base[0]);
	vs_top=sup;
TTL:;
	if(((V617))!=Cnil){
	goto T2464;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T2464:;
	{register object x= Ct,V618= (V617);
	while(V618!=Cnil)
	if(eql(x,V618->c.c_car)){
	goto T2468;
	}else V618=V618->c.c_cdr;
	goto T2467;}
T2468:;
	base[1]= VV[189];
	vs_top=(vs_base=base+1)+1;
	return;
T2467:;
	V617= nreverse((V617));
	if((CMPcdr((V617)))!=Cnil){
	goto T2471;}
	V619= CMPcar((V617));
	goto T2469;
T2471:;
	V619= make_cons(VV[35],(V617));
T2469:;
	base[1]= list(3,VV[8],V619,VV[190]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function GET-CLAUSE	*/

static L66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_check;
	{object V620;
	V620=(base[0]);
	vs_top=sup;
TTL:;
	{register object V621;
	V621= Cnil;
T2475:;
	{register object V622;
	register object V623;
	V622= CMPcar((VV[89]->s.s_dbind));
	bds_bind(VV[108],Cnil);
	V623= Cnil;
	if(type_of((V622))==t_symbol){
	goto T2481;}
	base[2]= VV[149];
	base[3]= (V622);
	base[4]= (V620);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	bds_unwind1;
	goto T2478;
T2481:;
	(VV[88]->s.s_dbind)= (VV[89]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= CMPcar((VV[89]->s.s_dbind));
	base[3]= VV[150];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2489;}
	if(base0[3]!=Cnil){
	V624= base0[3];
	goto T2495;}
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	base0[3]= vs_base[0];
	V624= base0[3];
T2495:;
	(VV[89]->s.s_dbind)= make_cons(V624,CMPcdr((VV[89]->s.s_dbind)));
T2489:;
	base[2]= (V622);
	base[3]= STREF(object,(VV[96]->s.s_dbind),0);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V623= vs_base[0];
	if(((V623))==Cnil){
	goto T2497;}
	base[3]= CMPcar((V623));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V625;
	V625= CMPcdr((V623));
	 vs_top=base+3;
	 while(V625!=Cnil)
	 {vs_push((V625)->c.c_car);V625=(V625)->c.c_cdr;}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[108]->s.s_dbind))==Cnil)){
	goto T2498;}
T2497:;
	base[2]= VV[151];
	base[3]= (V622);
	base[4]= (V620);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	bds_unwind1;
	goto T2478;
T2498:;
	base[2]= (VV[108]->s.s_dbind);
	base[3]= (V621);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V621= vs_base[0];
	bds_unwind1;}
T2478:;
	base[1]= CMPcar((VV[89]->s.s_dbind));
	base[2]= VV[152];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk353)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2517;}
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	goto T2515;
T2517:;
	if((CMPcdr((V621)))==Cnil){
	goto T2522;}
	V626= nreverse((V621));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V626);
	vs_top=(vs_base=base+1)+1;
	return;
T2522:;
	base[1]= CMPcar((V621));
	vs_top=(vs_base=base+1)+1;
	return;
T2515:;
	goto T2475;}
	}
}
/*	local function REPLICATE	*/

static L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{object V627;
	object V628;
	V627=(base[0]);
	V628=(base[1]);
	vs_top=sup;
TTL:;
	if(!(type_of((V628))!=t_cons)){
	goto T2527;}
	base[2]= (V627);
	vs_top=(vs_base=base+2)+1;
	return;
T2527:;
	base[2]= (V627);
	base[3]= CMPcar((V628));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V629= vs_base[0];
	base[2]= (V627);
	base[3]= CMPcdr((V628));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V630= vs_base[0];
	base[2]= make_cons(V629,V630);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function TRANSLATE	*/

static L58(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_check;
	{register object V631;
	register object V632;
	V631=(base[0]);
	V632=(base[1]);
	vs_top=sup;
TTL:;
	if(((V631))!=Cnil){
	goto T2536;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T2536:;
	if(!(type_of((V631))!=t_cons)){
	goto T2539;}{object V633;
	base[3]= (V631);
	base[4]= STREF(object,(VV[96]->s.s_dbind),16);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V633= vs_base[0];
	if(V633==Cnil)goto T2542;
	base[2]= V633;
	goto T2541;
T2542:;}{object V634;
	base[3]= symbol_name((V631));
	base[4]= STREF(object,(VV[96]->s.s_dbind),20);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V634= vs_base[0];
	if(V634==Cnil)goto T2546;
	base[2]= V634;
	goto T2541;
T2546:;}
	base[3]= VV[137];
	base[4]= base0[1];
	base[5]= (V631);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk343)();
	vs_top=sup;
	base[2]= vs_base[0];
T2541:;
	base[3]= (V632);
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	return;
T2539:;
	if(!(type_of((V632))!=t_cons)){
	goto T2555;}
	base[2]= VV[138];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk343)();
	return;
T2555:;
	base[2]= CMPcar((V631));
	base[3]= CMPcar((V632));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V635= vs_base[0];
	base[2]= CMPcdr((V631));
	base[3]= CMPcdr((V632));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V636= vs_base[0];
	base[2]= make_cons(V635,V636);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LIST-SIZE	*/

static L40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{object V637;
	V637=(base[0]);
	vs_top=sup;
TTL:;
	{int V638;
	V638= 0;
	{register object V639;
	object V640;
	V639= (V637);
	V640= CMPcar((V639));
T2570:;
	if(!(((V639))==Cnil)){
	goto T2571;}
	base[2]= CMPmake_fixnum(V638);
	vs_top=(vs_base=base+2)+1;
	return;
T2571:;
	V641 = CMPmake_fixnum(V638);
	base[2]= (V640);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk339)();
	vs_top=sup;
	V642= vs_base[0];
	V638= fix(number_plus(V641,V642));
	V639= CMPcdr((V639));
	V640= CMPcar((V639));
	goto T2570;}}
	}
}
/*	local function MAKEBODY	*/

static L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_check;
	vs_top=sup;
TTL:;
	{object V643;
	V645= nreverse(base0[7]);
	base[0]= append(base0[2],/* INLINE-ARGS */V645);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V644= vs_base[0];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V647= vs_base[0];
	base[0]= append(base0[4],V647);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V646= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V648= vs_base[0];
	V649= make_cons(VV[76],V648);
	V650= append(V646,/* INLINE-ARGS */V649);
	V651= make_cons(VV[74],/* INLINE-ARGS */V650);
	V652= append(V644,/* INLINE-ARGS */V651);
	V643= make_cons(VV[73],/* INLINE-ARGS */V652);
	if((base0[9])==Cnil){
	goto T2596;}
	V653= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V653,Cnil),(V643));
	vs_top=(vs_base=base+0)+1;
	return;
T2596:;
	base[0]= (V643);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{object V654;
	V654=(base[0]);
	vs_top=sup;
TTL:;
	if((CMPcdr((V654)))!=Cnil){
	goto T2599;}
	base[1]= CMPcar((V654));
	vs_top=(vs_base=base+1)+1;
	return;
T2599:;
	base[1]= make_cons(VV[14],(V654));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function PSIMP	*/

static L33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V655;
	V655=(base[0]);
	vs_top=sup;
TTL:;
	{register object V656;
	V656= Cnil;
	{register object V657;
	register object V658;
	V657= (V655);
	V658= CMPcar((V657));
T2605:;
	if(!(((V657))==Cnil)){
	goto T2606;}
	goto T2601;
T2606:;
	if(((V658))==Cnil){
	goto T2610;}
	V656= make_cons((V658),(V656));
	if(!(type_of((V658))==t_cons)){
	goto T2610;}
	{register object x= CMPcar((V658)),V659= VV[72];
	while(V659!=Cnil)
	if(eql(x,V659->c.c_car)){
	goto T2618;
	}else V659=V659->c.c_cdr;
	goto T2610;}
T2618:;
	goto T2601;
T2610:;
	V657= CMPcdr((V657));
	V658= CMPcar((V657));
	goto T2605;}
T2601:;
	base[1]= nreverse((V656));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function FIND-NON-NULL	*/

static L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V660;
	V660=(base[0]);
	vs_top=sup;
TTL:;
	{register object V661;
	V661= (V660);
T2625:;
	if(type_of((V661))==t_cons){
	goto T2626;}
	base[1]= (V661);
	vs_top=(vs_base=base+1)+1;
	return;
T2626:;
	{register object V662;
	V662= CMPcar((V661));
	V661= CMPcdr((V661));
	base[1]= (V662);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2630;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
T2630:;
	goto T2625;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_check;
	{register object V663;
	register object V664;
	object V665;
	V663=(base[0]);
	V664=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2639;}
	V665=(base[2]);
	vs_top=sup;
	goto T2640;
T2639:;
	V665= Cnil;
T2640:;
	{register object V666;
	V666= (V663);
	if(!(((V666))==Cnil)){
	goto T2643;}
	if(!(type_of((V664))==t_cons)){
	goto T2646;}
	if(!((CMPcar((V664)))==(VV[62]))){
	goto T2649;}
	{object V667;
	object V668= CMPcdr((V664));
	if(V668==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V667=MMcons(Cnil,Cnil);
T2651:;
	{register object V669;
	V669= (V668->c.c_car);
	if(type_of((V669))==t_cons){
	goto T2653;}
	(V667->c.c_cdr)= Cnil;
	goto T2652;
T2653:;
	if(!((((CMPcar((V669)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2657;}
	goto T2655;
T2657:;
	if(!(((type_of(CMPcadr((V669)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2659;}
	goto T2655;
T2659:;
	base[4]= (V669);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V669= vs_base[0];
	if(((type_of((V669))==t_symbol?Ct:Cnil))==Cnil){
	goto T2655;}
	(V667->c.c_cdr)= Cnil;
	goto T2652;
T2655:;
	(V667->c.c_cdr)= make_cons((V669),Cnil);}
T2652:;
	while(MMcdr(V667)!=Cnil)V667=MMcdr(V667);
	if((V668=MMcdr(V668))==Cnil){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2651;}
T2649:;
	base[3]= make_cons((V664),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
T2646:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T2643:;
	if(!(type_of((V666))==t_cons)){
	goto T2665;}
	{object V670;
	object V671;
	object V672;
	object V673;
	V670= CMPcar((V663));
	V671= CMPcdr((V663));
	base[7]= (V670);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V672= vs_base[0];
	base[7]= (V671);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V673= vs_base[0];
	if(((V672))!=Cnil){
	goto T2673;}
	if(((V673))==Cnil){
	goto T2674;}
T2673:;
	if(((V673))==Cnil){
	goto T2679;}
	{register object V675;
	object V676;
	if((V665)!=Cnil){
	V675= (V665);
	goto T2681;}
	V675= (VV[66]->s.s_dbind);
T2681:;
	base[9]= (V670);
	base[10]= list(2,VV[65],(V675));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V677= vs_base[0];
	V678= list(3,VV[11],(V675),list(2,VV[10],(V675)));
	base[9]= (V671);
	base[10]= (V675);
	base[11]= (V675);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V679= vs_base[0];
	V680= make_cons(/* INLINE-ARGS */V678,V679);
	V676= append(V677,/* INLINE-ARGS */V680);
	if((V665)==Cnil){
	goto T2691;}
	if(((V675))==((V664))){
	goto T2695;}
	V682= list(3,VV[11],(V675),(V664));
	V681= make_cons(/* INLINE-ARGS */V682,Cnil);
	goto T2693;
T2695:;
	V681= Cnil;
T2693:;
	base[9]= append(V681,(V676));
	vs_top=(vs_base=base+9)+1;
	return;
T2691:;
	V683= list(2,(V675),(V664));
	V684= listA(3,VV[29],make_cons(/* INLINE-ARGS */V683,Cnil),(V676));
	base[9]= make_cons(/* INLINE-ARGS */V684,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
T2679:;
	base[7]= (V670);
	base[8]= list(2,VV[65],(V664));
	base[9]= (V665);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
T2674:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
T2665:;
	if(((V663))==((V664))){
	goto T2701;}
	V685= list(3,VV[11],(V663),(V664));
	base[3]= make_cons(/* INLINE-ARGS */V685,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
T2701:;
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
	vs_check;
	{object V686;
	V686=(base[0]);
	vs_top=sup;
TTL:;
	{object V687;
	object V688;
	V687= CMPmake_fixnum(length((V686)));
	base[3]= VV[61];
	if(!(number_compare((V687),small_fixnum(10))<0)){
	goto T2708;}
	base[4]= small_fixnum(10);
	goto T2706;
T2708:;
	base[4]= (V687);
T2706:;
	base[5]= VV[20];
	base[6]= (VV[397]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V688= vs_base[0];
	{register object V689;
	register object V690;
	V689= (V686);
	V690= CMPcar((V689));
T2716:;
	if(!(((V689))==Cnil)){
	goto T2717;}
	goto T2712;
T2717:;
	{object V691;
	object V693;
	V691= symbol_name(CMPcar((V690)));
	V693= CMPcadr((V690));
	base[6]= (V691);
	base[7]= V688;
	base[8]= (V693);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V689= CMPcdr((V689));
	V690= CMPcar((V689));
	goto T2716;}
T2712:;
	base[3]= (V688);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CDR-WRAP	*/

static L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{register object V694;
	register int V695;
	V694=(base[0]);
	V695=fix(base[1]);
	vs_top=sup;
TTL:;
T2733:;
	if(!((V695)<=(4))){
	goto T2734;}switch(V695){
	case 1:
T2740:;
	V696= VV[10];
	goto T2738;
	case 2:
T2741:;
	V696= VV[15];
	goto T2738;
	case 3:
T2742:;
	V696= VV[16];
	goto T2738;
	case 4:
T2743:;
	V696= VV[17];
	goto T2738;
	default:
T2744:;
	V696= Cnil;
	goto T2738;}
	V696= Cnil;
T2738:;
	V694= list(2,V696,(V694));
	base[2]= (V694);
	vs_top=(vs_base=base+2)+1;
	return;
T2734:;
	V694= list(2,VV[17],(V694));
	V695= (V695)-(4);
	goto T2733;
	}
}
static LnkT396(){ call_or_link(VV[396],&Lnk396);} /* LOOP-STANDARD-EXPANSION */
static LnkT395(){ call_or_link(VV[395],&Lnk395);} /* LOOP-TRANSLATE */
static LnkT394(){ call_or_link(VV[394],&Lnk394);} /* ADD-LOOP-PATH */
static LnkT393(){ call_or_link(VV[393],&Lnk393);} /* MAKE-STANDARD-LOOP-UNIVERSE */
static LnkT390(){ call_or_link(VV[390],&Lnk390);} /* NAMED-VARIABLE */
static LnkT385(){ call_or_link(VV[385],&Lnk385);} /* LOOP-SEQUENCER */
static LnkT382(){ call_or_link(VV[382],&Lnk382);} /* DELETE */
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
static LnkT365(){ call_or_link(VV[365],&Lnk365);} /* FIND */
static LnkT363(){ call_or_link(VV[363],&Lnk363);} /* LOOP-OPTIONAL-TYPE */
static LnkT360(){ call_or_link(VV[360],&Lnk360);} /* LOOP-EMIT-BODY */
static LnkT359(){ call_or_link(VV[359],&Lnk359);} /* LOOP-GET-PROGN */
static LnkT358(){ call_or_link(VV[358],&Lnk358);} /* LOOP-DISALLOW-CONDITIONAL */
static LnkT357(){ call_or_link(VV[357],&Lnk357);} /* LOOP-GET-FORM */
static LnkT356(){ call_or_link(VV[356],&Lnk356);} /* LOOP-CONSTANTP */
static LnkT355(){ call_or_link(VV[355],&Lnk355);} /* LOOP-MAKE-VARIABLE */
static LnkT354(){ call_or_link(VV[354],&Lnk354);} /* LOOP-DECLARE-VARIABLE */
static LnkT353(){ call_or_link(VV[353],&Lnk353);} /* LOOP-TEQUAL */
static LnkT352(){ call_or_link(VV[352],&Lnk352);} /* COERCE */
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
static LnkT342(){ call_or_link(VV[342],&Lnk342);} /* WARN */
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
