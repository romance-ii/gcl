
#include "cmpinclude.h"
#include "gcl_loop.h"
void init_gcl_loop(){do_init(VV);}
/*	macro definition for LOOP-COPYLIST*	*/

static void L1()
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

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V2;
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V2=(base[0]);
	vs_top=sup;
	goto T2;
	goto T1;
T1:;
	V2= VV[1];
	goto T2;
T2:;
	if(((VV[2]->s.s_dbind))==Cnil){
	goto T5;}
	base[1]= coerce_to_string((V2));
	vs_top=(vs_base=base+1)+1;
	Lgensym();
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
	vs_check;
	{object V3;
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
	vs_check;
	{object V4;
	object V5;
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
	vs_check;
	{object V6;
	object V7;
	object V8;
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
	V18 = CMPmake_fixnum((long)length(CMPcdr(base[5])));
	V17= one_minus(V18);
	goto T20;
	goto T24;
T24:;
	{register object x= CMPcar(base[5]),V19= VV[6];
	while(V19!=Cnil)
	if(eql(x,V19->c.c_car)){
	goto T28;
	}else V19=V19->c.c_cdr;
	goto T20;}
	goto T28;
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
	goto T32;
T32:;
	V22 = CMPmake_fixnum((long)length(CMPcdr(base[5])));
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

static void L10()
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

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V33;
	object V34;
	V33=(base[0]);
	V34=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V35;
	base[2]= (V34);
	base[3]= (VV[19]->s.s_dbind);
	base[4]= VV[20];
	base[5]= (VV[333]->s.s_gfdef);
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
	(void) (*Lnk334)();
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
	(void) (*Lnk334)();
	vs_top=sup;
	base[9]= vs_base[0];
	goto T75;
T75:;
	base[10]= VV[27];
	base[11]= Cnil;
	base[12]= VV[28];
	base[13]= (V35);
	vs_top=(vs_base=base+2)+12;
	(void) (*Lnk335)();
	return;}
	}
}
/*	function definition for LOOP-NOTE-MINIMAX-OPERATION	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V37;
	register object V38;
	V37=(base[0]);
	V38=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V41;
	base[3]= V37;
	base[4]= STREF(object,V38,16);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V41= vs_base[0];
	V42= Ct;
	STSET(object,V38,16, (V41));
	(void)((V41));}
	if((CMPcdr(STREF(object,(V38),16)))==Cnil){
	goto T87;}
	if((STREF(object,(V38),12))!=Cnil){
	goto T87;}
	base[2]= VV[26];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V43= vs_base[0];
	V44= Ct;
	STSET(object,(V38),12, V43);
	(void)(V43);
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
	vs_check;
	vs_top=sup;
	{object V45=base[0]->c.c_cdr;
	base[2]= (V45->c.c_car);
	V45=V45->c.c_cdr;
	base[3]= V45;}
	{object V46;
	object V47;
	object V48;
	register object V49;
	register object V50;
	object V51;
	object V52;
	base[4]= STREF(object,base[2],4);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	V46= vs_base[0];
	V47= CMPcar(STREF(object,base[2],16));
	V48= STREF(object,base[2],20);
	V49= STREF(object,base[2],0);
	V50= STREF(object,base[2],8);
	V51= STREF(object,base[2],12);
	V52= STREF(object,base[2],4);
	if(((V51))==Cnil){
	goto T103;}
	V53= list(2,(V49),(V46));
	V54= list(2,(V50),(V46));
	V55= list(3,/* INLINE-ARGS */V53,/* INLINE-ARGS */V54,list(2,(V51),Cnil));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V55,list(2,VV[30],list(4,VV[31],(V52),(V49),(V50))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T103;
T103:;
	if(!(((V47))==(VV[32]))){
	goto T107;}
	V56= CMPcar((V48));
	goto T105;
	goto T107;
T107:;
	V56= CMPcadr((V48));
	goto T105;
T105:;
	V57= list(2,(V49),V56);
	V58= list(2,/* INLINE-ARGS */V57,list(2,(V50),(V46)));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V58,list(2,VV[30],list(4,VV[31],(V52),(V49),(V50))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-ACCUMULATE-MINIMAX-VALUE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V59=base[0]->c.c_cdr;
	base[2]= (V59->c.c_car);
	V59=V59->c.c_cdr;
	base[3]= (V59->c.c_car);
	V59=V59->c.c_cdr;
	base[4]= (V59->c.c_car);}
	{object V60;
	object V61;
	register object V62;
	object V63;
	V60= STREF(object,base[2],0);
	V61= STREF(object,base[2],8);
	V62= STREF(object,base[2],12);
	base[9]= Ct;
	base[10]= STREF(object,base[2],0);
	{object V65= base[3];
	if((V65!= VV[32]))goto T117;
	V64= VV[33];
	goto T116;
	goto T117;
T117:;
	if((V65!= VV[337]))goto T118;
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
	(void) (*Lnk338)();
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
	vs_check;
	{object V71;
	object V72;
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
	vs_check;
	{object V73;
	object V74;
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
	base[5]= (VV[339]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lassoc();
	return;
	}
}
/*	function definition for LOOP-TMEMBER	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V75;
	object V76;
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
	base[5]= (VV[339]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	return;
	}
}
/*	function definition for LOOP-LOOKUP-KEYWORD	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V77;
	object V78;
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
	vs_check;
	vs_top=sup;
	{object V79=base[0]->c.c_cdr;
	base[2]= (V79->c.c_car);
	V79=V79->c.c_cdr;
	base[3]= (V79->c.c_car);
	V79=V79->c.c_cdr;
	base[4]= (V79->c.c_car);}
	base[5]= list(3,VV[9],list(3,VV[37],list(2,VV[38],base[2]),base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for MAKE-LOOP-UNIVERSE	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
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
	vs_check;
	{object V88;
	object V89;
	object V90;
	V88=(base[0]);
	V89=(base[1]);
	V90=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V91;
	{object V92= STREF(object,(V88),24);
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
	if((V92!= VV[314]))goto T157;
	V91= VV[42];
	goto T154;
	goto T157;
T157:;
	V91= STREF(object,(V88),24);}
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
	vs_check;
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
	goto T165;
T165:;
	base[16]= (V99);
	base[17]= VV[46];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk340)();
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
	base[19]= (V99);
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
	V99= vs_base[0];
	base[16]= (VV[50]->s.s_dbind);
	base[17]= VV[52];
	vs_top=(vs_base=base+16)+2;
	Lformat();
	vs_top=sup;
	goto T165;
	goto T163;
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
	V100= CMPmake_fixnum((long)length((V98)));
	base[32]= VV[61];
	if(!(number_compare((V100),small_fixnum(10))<0)){
	goto T217;}
	base[33]= small_fixnum(10);
	goto T215;
	goto T217;
T217:;
	base[33]= (V100);
	goto T215;
T215:;
	base[34]= VV[20];
	base[35]= (VV[341]->s.s_gfdef);
	vs_top=(vs_base=base+32)+4;
	Lmake_hash_table();
	vs_top=sup;
	V101= vs_base[0];
	{register object V102;
	register object V103;
	V102= (V98);
	V103= CMPcar((V102));
	goto T225;
T225:;
	if(!(((V102))==Cnil)){
	goto T226;}
	goto T221;
	goto T226;
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
	goto T232;
T232:;
	{object V107;
	object V109;
	V107= CMPcar((V103));
	V109= CMPcadr((V103));
	base[35]= (V107);
	base[36]= V101;
	base[37]= (V109);
	vs_top=(vs_base=base+35)+3;
	siLhash_set();
	vs_top=sup;}
	goto T230;
T230:;
	V102= CMPcdr((V102));
	V103= CMPcar((V102));
	goto T225;}
	goto T221;
T221:;
	base[29]= (V101);}
	vs_top=(vs_base=base+14)+16;
	(void) (*Lnk342)();
	return;
	}
}
/*	function definition for LOOP-MAKE-PSETQ	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{register object V110;
	V110=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((V110)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	V111= CMPcar((V110));
	if((CMPcddr((V110)))!=Cnil){
	goto T250;}
	V112= CMPcadr((V110));
	goto T248;
	goto T250;
T250:;
	V113= CMPcadr((V110));
	base[2]= CMPcddr((V110));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	V114= vs_base[0];
	V112= list(3,VV[62],/* INLINE-ARGS */V113,V114);
	goto T248;
T248:;
	base[1]= list(2,/* INLINE-ARGS */V111,V112);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk344)();
	return;
	}
}
/*	function definition for LOOP-MAKE-DESETQ	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V115;
	V115=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V115))!=Cnil){
	goto T255;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T255;
T255:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T259;}
	V116= CMPcadr((VV[63]->s.s_dbind));
	goto T257;
	goto T259;
T259:;
	V116= VV[64];
	goto T257;
T257:;
	base[1]= make_cons(V116,(V115));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	macro definition for LOOP-REALLY-DESETQ	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	{object V117=base[0]->c.c_cdr;
	base[2]= V117;}
	{register object V118;
	V118= Cnil;
	goto T262;
T262:;
	if((base[2])!=Cnil){
	goto T263;}
	if((CMPcdr((V118)))!=Cnil){
	goto T267;}
	base[3]= CMPcar((V118));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T267;
T267:;
	V119= nreverse((V118));
	base[3]= make_cons(VV[14],/* INLINE-ARGS */V119);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T263;
T263:;
	{register object V120;
	V120= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[4]= (V120);}
	{register object V121;
	V121= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
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

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V122;
	object V123;
	V122=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T284;}
	V123=(base[1]);
	vs_top=sup;
	goto T285;
	goto T284;
T284:;
	V123= Cnil;
	goto T285;
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
	goto T287;
T287:;
	if(((V125))==Cnil){
	goto T294;}
	if(((V123))==Cnil){
	goto T294;}
	base[2]= (V126);
	base[3]= (V123);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T294;}
	base[2]= VV[67];
	base[3]= (V122);
	base[4]= (V126);
	base[5]= (V123);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk345)();
	vs_top=sup;
	V125= Cnil;
	V126= Cnil;
	goto T294;
T294:;
	base[2]= V122;
	base[3]= (V125);
	base[4]= (V126);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	function definition for LOOP-CONSTANTP	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V127;
	V127=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V127);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	return;
	}
}
/*	function definition for LOOP-CODE-DUPLICATION-THRESHOLD	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V128;
	V128=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V129;
	object V130;
	base[1]= (V128);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk346)();
	if(vs_base>=vs_top){vs_top=sup;goto T317;}
	V129= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T318;}
	V130= vs_base[0];
	vs_top=sup;
	goto T319;
	goto T317;
T317:;
	V129= Cnil;
	goto T318;
T318:;
	V130= Cnil;
	goto T319;
T319:;
	V131= number_minus((V129),(V130));
	V132= number_times(/* INLINE-ARGS */V131,small_fixnum(10));
	base[1]= number_plus(small_fixnum(40),/* INLINE-ARGS */V132);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	macro definition for LOOP-BODY	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
	{object V133=base[0]->c.c_cdr;
	base[2]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	base[3]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	base[4]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	base[5]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	base[6]= (V133->c.c_car);
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
	if(((VV[69]->s.s_dbind))!=Cnil){
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
	{register long V134;
	base[10]= base[1];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	V134= fix(vs_base[0]);
	goto T339;
T339:;
	goto T344;
T344:;
	if((base[7])==Cnil){
	goto T346;}
	if(equal(CMPcar(base[7]),CMPcar(base[8]))){
	goto T345;}
	goto T346;
T346:;
	goto T342;
	goto T345;
T345:;
	{register object V135;
	{register object V136;
	V136= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V135= (V136);}
	base[4]= make_cons((V135),base[4]);}
	{register object V137;
	V137= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
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
	goto T368;
T368:;
	if(((V138))!=Cnil){
	goto T369;}
	vs_base=vs_top;
	L35(base);
	return;
	goto T369;
T369:;
	if(equal(CMPcar((V138)),CMPcar((V139)))){
	goto T375;}
	V140= (V138);
	V141= small_fixnum(0);
	goto T373;
	goto T375;
T375:;
	base[10]= CMPcar((V138));
	base[11]= base[1];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V142= vs_base[0];
	if(((V142))==Cnil){
	goto T380;}
	V141= number_plus((V141),(V142));
	V143 = CMPmake_fixnum(V134);
	if(!(number_compare((V141),V143)>0)){
	goto T373;}
	goto T380;
T380:;
	{register object V144;
	register object V145;
	V144= Cnil;
	V145= Cnil;
	goto T391;
T391:;
	{register object V146;
	{register object V147;
	V147= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V146= (V147);}
	V145= make_cons((V146),(V145));}
	{register object V148;
	{register object V149;
	V149= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);
	V148= (V149);}
	V144= make_cons((V148),(V144));}
	if(!((base[7])==(CMPcdr((V140))))){
	goto T406;}
	goto T389;
	goto T406;
T406:;
	goto T391;
	goto T389;
T389:;
	if((base[9])!=Cnil){
	goto T411;}
	{register object V150;
	base[9]= (VV[70]->s.s_dbind);
	V150= list(3,VV[11],base[9],Ct);
	V145= make_cons((V150),(V145));}
	goto T411;
T411:;
	{register object V151;
	base[12]= (V144);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V152= vs_base[0];
	base[12]= (V145);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V153= vs_base[0];
	V151= list(4,VV[71],base[9],V152,V153);
	base[4]= make_cons((V151),base[4]);}}
	goto T427;
T427:;
	{register object V154;
	V154= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	{register object V155;
	{register object V156;
	V156= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V155= (V156);}
	base[4]= make_cons((V155),base[4]);}
	if(!((base[7])==(CMPcdr((V138))))){
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
	V138= CMPcdr((V138));
	V139= CMPcdr((V139));
	goto T368;}
	goto T366;
T366:;
	goto T339;}
}
/*	function definition for DUPLICATABLE-CODE-P	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V157;
	object V158;
	V157=(base[0]);
	V158=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V157))!=Cnil){
	goto T452;}
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T452;
T452:;
	{long V159;
	base[2]= (V157);
	base[3]= (V158);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V159= fix(vs_base[0]);
	base[2]= CMPmake_fixnum(V159);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DESTRUCTURING-SIZE	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V160;
	V160=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V161;
	register object V162;
	V161= (V160);
	V162= small_fixnum(0);
	goto T458;
T458:;
	if(!(type_of((V161))!=t_cons)){
	goto T459;}
	if(((V161))!=Cnil){
	goto T464;}
	V163= small_fixnum(0);
	goto T462;
	goto T464;
T464:;
	V163= small_fixnum(1);
	goto T462;
T462:;
	base[1]= number_plus((V162),V163);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T459;
T459:;
	{object V164;
	V164= CMPcdr((V161));
	base[1]= CMPcar((V161));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk348)();
	vs_top=sup;
	V165= vs_base[0];
	V162= number_plus(V165,(V162));
	V161= (V164);}
	goto T458;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE	*/

static void L38()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM31; VC31
	vs_check;
	{VOL object V166;
	VOL object V167;
	V166=(base[0]);
	V167=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	frs_push(FRS_CATCH,VV[77]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]= (V166);
	base[3]= (V167);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	frs_pop();
	return;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE-1	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V168;
	V168=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V168);
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
	if(!(type_of((V168))==t_symbol)){
	goto T481;}
	{object V169;
	object V170;
	base[2]= (V168);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T486;}
	V169= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T487;}
	V170= vs_base[0];
	vs_top=sup;
	goto T488;
	goto T486;
T486:;
	V169= Cnil;
	goto T487;
T487:;
	V170= Cnil;
	goto T488;
T488:;
	if(((V170))==Cnil){
	goto T490;}
	V168= (V169);
	goto TTL;
	goto T490;
T490:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T481;
T481:;
	if(!(type_of((V168))!=t_cons)){
	goto T496;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T496;
T496:;
	if(!(type_of(CMPcar((V168)))==t_symbol)){
	goto T499;}
	{object V171;
	object V172;
	register long V173;
	V171= CMPcar((V168));
	V173= 0;
	V172= Cnil;
	{object V174 =((V171))->s.s_plist;
	 object ind= VV[77];
	while(V174!=Cnil){
	if(V174->c.c_car==ind){
	V172= (V174->c.c_cdr->c.c_car);
	goto T506;
	}else V174=V174->c.c_cdr->c.c_cdr;}
	V172= Cnil;}
	goto T506;
T506:;
	if(((V172))==Cnil){
	goto T504;}
	if(!(type_of(V172)==t_fixnum)){
	goto T508;}
	base[2]= CMPcdr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V176= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(fix((V172)))+(V176));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T508;
T508:;
	base[2]= (V168);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V172));
	return;
	goto T504;
T504:;
	{register object x= (V171),V177= (VV[78]->s.s_dbind);
	while(V177!=Cnil)
	if(eql(x,V177->c.c_car->c.c_car) &&V177->c.c_car != Cnil){
	V172= (V177->c.c_car);
	goto T517;
	}else V177=V177->c.c_cdr;
	V172= Cnil;}
	goto T517;
T517:;
	if(((V172))==Cnil){
	goto T515;}
	{long V178= fix(CMPcadr((V172)));
	base[2]= CMPcdr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V179= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V178)+(V179));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T515;
T515:;
	if(!(((V171))==(VV[79]))){
	goto T521;}
	{register object V180;
	object V181;
	V180= CMPcdr((V168));
	V181= CMPcar((V180));
	goto T526;
T526:;
	if(!(((V180))==Cnil)){
	goto T527;}
	base[4]= CMPmake_fixnum(V173);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T527;
T527:;
	V182 = CMPmake_fixnum(V173);
	base[4]= (V181);
	vs_top=(vs_base=base+4)+1;
	L40(base);
	vs_top=sup;
	V183= vs_base[0];
	V173= fix(number_plus(V182,V183));
	V173= (long)(V173)+(1);
	V180= CMPcdr((V180));
	V181= CMPcar((V180));
	goto T526;}
	goto T521;
T521:;
	if(!(((V171))==(VV[80]))){
	goto T543;}
	{register object V184;
	V184= CMPcdr((V168));
	goto T547;
T547:;
	if(((V184))!=Cnil){
	goto T548;}
	base[2]= CMPmake_fixnum(V173);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T548;
T548:;
	base[2]= CMPmake_fixnum(V173);
	base[4]= CMPcar((V184));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk348)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= CMPcadr((V184));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V173= fix(vs_base[0]);
	V184= CMPcdr((V184));
	goto T547;}
	goto T543;
T543:;
	{register object x= (V171),V185= VV[81];
	while(V185!=Cnil)
	if(eql(x,V185->c.c_car)){
	goto T565;
	}else V185=V185->c.c_cdr;
	goto T564;}
	goto T565;
T565:;
	{register object V186;
	V186= CMPcdr((V168));
	goto T568;
T568:;
	if(((V186))!=Cnil){
	goto T569;}
	base[2]= CMPmake_fixnum(V173);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T569;
T569:;
	base[2]= CMPmake_fixnum(V173);
	base[4]= CMPcadr((V186));
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V173= fix(vs_base[0]);
	V186= CMPcdr((V186));
	goto T568;}
	goto T564;
T564:;
	if(!(((V171))==(VV[82]))){
	goto T584;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T584;
T584:;
	if(!(((V171))==(VV[83]))){
	goto T587;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T587;
T587:;
	if(!(((V171))==(VV[84]))){
	goto T590;}
	{long V187= (long)length(CMPcadr((V168)));
	base[2]= CMPcddr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V188= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V187)+(V188));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T590;
T590:;
	if(!(((V171))==(VV[85]))){
	goto T595;}
	base[2]= CMPcaddr((V168));
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V189= vs_base[0];
	base[2]= one_plus(V189);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T595;
T595:;
	base[2]= (V171);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk350)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T600;}
	{register object x= (V171),V190= (VV[86]->s.s_dbind);
	while(V190!=Cnil)
	if(eql(x,V190->c.c_car)){
	goto T605;
	}else V190=V190->c.c_cdr;
	goto T601;}
	goto T605;
T605:;
	goto T600;
T600:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
	goto T601;
T601:;
	{object V191;
	object V192;
	base[2]= (V168);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T610;}
	V191= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T611;}
	V192= vs_base[0];
	vs_top=sup;
	goto T612;
	goto T610;
T610:;
	V191= Cnil;
	goto T611;
T611:;
	V192= Cnil;
	goto T612;
T612:;
	if(((V192))==Cnil){
	goto T614;}
	V168= (V191);
	goto TTL;
	goto T614;
T614:;
	base[2]= CMPcdr((V168));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V193= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(3)+(V193));
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
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V194;
	register object V195;
	V194= (VV[87]->s.s_dbind);
	V195= Cnil;
	goto T623;
T623:;
	if(!(((V194))==(CMPcdr((VV[88]->s.s_dbind))))){
	goto T624;}
	base[0]= nreverse((V195));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T624;
T624:;
	{object V196;
	V196= CMPcdr((V194));
	V195= make_cons(CMPcar((V194)),(V195));
	V194= (V196);}
	goto T623;}
}
/*	function definition for LOOP-ERROR	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V197;
	object V198;
	V197=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V198=(base[1]);
	vs_top=sup;
	base[2]= VV[89];
	base[3]= VV[90];
	base[4]= (V197);
	base[5]= (V198);
	vs_base=vs_top;
	(void) (*Lnk351)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk352)();
	return;
	}
}
/*	function definition for LOOP-WARN	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V199;
	object V200;
	V199=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V200=(base[1]);
	vs_top=sup;
	base[2]= VV[91];
	base[3]= (V199);
	base[4]= (V200);
	vs_base=vs_top;
	(void) (*Lnk351)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk353)();
	return;
	}
}
/*	function definition for LOOP-CHECK-DATA-TYPE	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{register object V201;
	register object V202;
	object V203;
	V201=(base[0]);
	V202=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T641;}
	V203=(base[2]);
	vs_top=sup;
	goto T642;
	goto T641;
T641:;
	V203= (V202);
	goto T642;
T642:;
	if(((V201))!=Cnil){
	goto T645;}
	base[3]= (V203);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T645;
T645:;
	{object V204;
	object V205;
	base[3]= (V201);
	base[4]= (V202);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk333)();
	if(vs_base>=vs_top){vs_top=sup;goto T650;}
	V204= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T651;}
	V205= vs_base[0];
	vs_top=sup;
	goto T652;
	goto T650;
T650:;
	V204= Cnil;
	goto T651;
T651:;
	V205= Cnil;
	goto T652;
T652:;
	if(((V205))!=Cnil){
	goto T655;}
	base[3]= VV[92];
	base[4]= (V201);
	base[5]= (V202);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk345)();
	vs_top=sup;
	goto T653;
	goto T655;
T655:;
	if(((V204))!=Cnil){
	goto T653;}
	base[3]= VV[93];
	base[4]= (V201);
	base[5]= (V202);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T653;
T653:;
	base[3]= (V201);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP-FINISH	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	vs_top=sup;
	{object V206=base[0]->c.c_cdr;}
	base[2]= VV[94];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for SUBST-GENSYMS-FOR-NIL	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{register object V207;
	V207=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V207))!=Cnil){
	goto T666;}
	{object V209;
	vs_base=vs_top;
	(void) (*Lnk334)();
	vs_top=sup;
	V209= vs_base[0];
	(VV[95]->s.s_dbind)= make_cons((V209),(VV[95]->s.s_dbind));
	V208= (VV[95]->s.s_dbind);}
	base[1]= CMPcar(V208);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T666;
T666:;
	if(!(type_of((V207))!=t_cons)){
	goto T672;}
	base[1]= (V207);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T672;
T672:;
	base[1]= CMPcar((V207));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk355)();
	vs_top=sup;
	V210= vs_base[0];
	base[1]= CMPcdr((V207));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk355)();
	vs_top=sup;
	V211= vs_base[0];
	base[1]= make_cons(V210,V211);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-BUILD-DESTRUCTURING-BINDINGS	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	bds_check;
	{register object V212;
	object V213;
	V212=(base[0]);
	V213=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V212))==Cnil){
	goto T679;}
	bds_bind(VV[95],Cnil);
	base[3]= CMPcar((V212));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk355)();
	vs_top=sup;
	V214= vs_base[0];
	V215= CMPcadr((V212));
	V216= list(2,VV[30],make_cons(VV[97],(VV[95]->s.s_dbind)));
	base[3]= CMPcddr((V212));
	base[4]= (V213);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk356)();
	vs_top=sup;
	V217= vs_base[0];
	V218= listA(5,VV[96],V214,/* INLINE-ARGS */V215,/* INLINE-ARGS */V216,V217);
	base[3]= make_cons(/* INLINE-ARGS */V218,Cnil);
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	goto T679;
T679:;
	base[2]= (V213);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for LOOP-TRANSLATE	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	bds_check;
	bds_bind(VV[88],base[0]);
	bds_bind(VV[98],base[1]);
	bds_bind(VV[99],base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[100],(VV[88]->s.s_dbind));
	bds_bind(VV[87],Cnil);
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
	bds_bind(VV[121],Cnil);
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
	{register object V219;
	V220= nreverse((VV[108]->s.s_dbind));
	V221= nreverse((VV[110]->s.s_dbind));
	V222= nreverse((VV[111]->s.s_dbind));
	V223= nreverse((VV[113]->s.s_dbind));
	base[26]= (VV[114]->s.s_dbind);
	base[27]= nreverse((VV[115]->s.s_dbind));
	vs_top=(vs_base=base+26)+2;
	Lreconc();
	vs_top=sup;
	V224= vs_base[0];
	V219= list(6,VV[122],/* INLINE-ARGS */V220,/* INLINE-ARGS */V221,/* INLINE-ARGS */V222,/* INLINE-ARGS */V223,V224);
	{register object V225;
	register object V226;
	V225= (VV[107]->s.s_dbind);
	V226= CMPcar((V225));
	goto T696;
T696:;
	if(!(((V225))==Cnil)){
	goto T697;}
	goto T692;
	goto T697;
T697:;
	{object V227;
	object V228;
	object V229;
	object V230;
	V227= CMPcar((V226));
	V228= CMPcadr((V226));
	V229= CMPcaddr((V226));
	V230= CMPcadddr((V226));
	{register object V231;
	register object V232;
	V231= (V230);
	V232= CMPcar((V231));
	goto T710;
T710:;
	if(!(((V231))==Cnil)){
	goto T711;}
	goto T706;
	goto T711;
T711:;
	V233= make_cons((V219),Cnil);
	V219= append((V232),/* INLINE-ARGS */V233);
	V231= CMPcdr((V231));
	V232= CMPcar((V231));
	goto T710;}
	goto T706;
T706:;
	if(((V227))!=Cnil){
	goto T722;}
	if(((V228))!=Cnil){
	goto T722;}
	if(((V229))==Cnil){
	goto T701;}
	goto T722;
T722:;
	{object V234;
	V234= make_cons((V219),Cnil);
	if(((V228))==Cnil){
	goto T729;}
	{object V235;
	V235= make_cons(VV[30],(V228));
	V234= make_cons((V235),(V234));}
	goto T729;
T729:;
	if(((V227))!=Cnil){
	goto T737;}
	V236= VV[123];
	goto T735;
	goto T737;
T737:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T740;}
	V236= CMPcar((VV[63]->s.s_dbind));
	goto T735;
	goto T740;
T740:;
	V236= VV[29];
	goto T735;
T735:;
	base[27]= (V229);
	base[28]= (V234);
	vs_top=(vs_base=base+27)+2;
	(void) (*Lnk356)();
	vs_top=sup;
	V237= vs_base[0];
	V219= listA(3,V236,(V227),V237);}}
	goto T701;
T701:;
	V225= CMPcdr((V225));
	V226= CMPcar((V225));
	goto T696;}
	goto T692;
T692:;
	if(((VV[120]->s.s_dbind))==Cnil){
	goto T751;}
	goto T754;
T754:;
	if((CMPcar((VV[120]->s.s_dbind)))!=Cnil){
	goto T755;}
	base[26]= (V219);
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
	return;
	goto T755;
T755:;
	{object V239;
	V239= CMPcar((VV[120]->s.s_dbind));
	(VV[120]->s.s_dbind)= CMPcdr((VV[120]->s.s_dbind));
	V238= (V239);}
	V219= list(3,VV[124],V238,(V219));
	goto T754;
	goto T751;
T751:;
	base[26]= list(3,VV[124],Cnil,(V219));
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

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	goto T768;
T768:;
	if(((VV[88]->s.s_dbind))!=Cnil){
	goto T769;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T769;
T769:;
	{register object V240;
	register object V241;
	V240= CMPcar((VV[88]->s.s_dbind));
	V241= Cnil;
	if(type_of((V240))==t_symbol){
	goto T776;}
	base[0]= VV[125];
	base[1]= (V240);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T773;
	goto T776;
T776:;
	(VV[87]->s.s_dbind)= (VV[88]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[0]= (V240);
	base[1]= STREF(object,(VV[99]->s.s_dbind),0);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk360)();
	vs_top=sup;
	V241= vs_base[0];
	if(((V241))==Cnil){
	goto T784;}
	base[1]= CMPcar((V241));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V242;
	V242= CMPcdr((V241));
	 vs_top=base+1;
	 while(V242!=Cnil)
	 {vs_push((V242)->c.c_car);V242=(V242)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T773;
	goto T784;
T784:;
	base[0]= (V240);
	base[1]= STREF(object,(VV[99]->s.s_dbind),4);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk360)();
	vs_top=sup;
	V241= vs_base[0];
	if(((V241))==Cnil){
	goto T793;}
	base[0]= (V241);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk361)();
	vs_top=sup;
	goto T773;
	goto T793;
T793:;
	base[0]= (V240);
	base[1]= VV[126];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk362)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T800;}
	base[0]= VV[127];
	base[1]= (V240);
	base[2]= CMPcar((VV[88]->s.s_dbind));
	base[3]= CMPcadr((VV[88]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T773;
	goto T800;
T800:;
	base[0]= VV[128];
	base[1]= (V240);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;}
	goto T773;
T773:;
	goto T768;
}
/*	function definition for LOOP-POP-SOURCE	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[88]->s.s_dbind))==Cnil){
	goto T813;}
	{object V243;
	V243= CMPcar((VV[88]->s.s_dbind));
	(VV[88]->s.s_dbind)= CMPcdr((VV[88]->s.s_dbind));
	base[0]= (V243);
	vs_top=(vs_base=base+0)+1;
	return;}
	goto T813;
T813:;
	base[0]= VV[129];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
}
/*	function definition for LOOP-GET-COMPOUND-FORM	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V244;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V244= vs_base[0];
	if(type_of((V244))==t_cons){
	goto T820;}
	base[0]= VV[130];
	base[1]= (V244);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T820;
T820:;
	base[0]= (V244);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-GET-PROGN	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V245;
	register object V246;
	vs_base=vs_top;
	(void) (*Lnk364)();
	vs_top=sup;
	V247= vs_base[0];
	V245= make_cons(V247,Cnil);
	V246= CMPcar((VV[88]->s.s_dbind));
	goto T829;
T829:;
	if(!(type_of((V246))!=t_cons)){
	goto T830;}
	if((CMPcdr((V245)))!=Cnil){
	goto T834;}
	base[0]= CMPcar((V245));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T834;
T834:;
	V248= nreverse((V245));
	base[0]= make_cons(VV[14],/* INLINE-ARGS */V248);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T830;
T830:;
	vs_base=vs_top;
	(void) (*Lnk364)();
	vs_top=sup;
	V249= vs_base[0];
	V245= make_cons(V249,(V245));
	V246= CMPcar((VV[88]->s.s_dbind));
	goto T829;}
}
/*	function definition for LOOP-GET-FORM	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[88]->s.s_dbind))==Cnil){
	goto T843;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	return;
	goto T843;
T843:;
	base[0]= VV[131];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
}
/*	function definition for LOOP-CONSTRUCT-RETURN	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V250;
	V250=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= list(3,VV[85],CMPcar((VV[120]->s.s_dbind)),(V250));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-PSEUDO-BODY	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V251;
	V251=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[112]->s.s_dbind))!=Cnil){
	goto T846;}
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T847;}
	goto T846;
T846:;
	(VV[111]->s.s_dbind)= make_cons(V251,(VV[111]->s.s_dbind));
	base[1]= (VV[111]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T847;
T847:;
	(VV[110]->s.s_dbind)= make_cons(V251,(VV[110]->s.s_dbind));
	(VV[113]->s.s_dbind)= make_cons(V251,(VV[113]->s.s_dbind));
	base[1]= (VV[113]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-EMIT-BODY	*/

static void L56()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	{object V255;
	V255=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	(VV[112]->s.s_dbind)= Ct;
	base[1]= (V255);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk365)();
	return;
	}
}
/*	function definition for LOOP-EMIT-FINAL-VALUE	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V256;
	object V257;
	if(vs_base>=vs_top){vs_top=sup;goto T858;}
	V256=(base[0]);
	V257= Ct;
	vs_top=sup;
	goto T859;
	goto T858;
T858:;
	V256= Cnil;
	V257= Cnil;
	goto T859;
T859:;
	if(((V257))==Cnil){
	goto T861;}
	{object V258;
	base[3]= (V256);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk366)();
	vs_top=sup;
	V258= vs_base[0];
	(VV[115]->s.s_dbind)= make_cons((V258),(VV[115]->s.s_dbind));}
	goto T861;
T861:;
	if(((VV[116]->s.s_dbind))==Cnil){
	goto T867;}
	base[2]= VV[132];
	base[3]= (VV[116]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk345)();
	vs_top=sup;
	goto T867;
T867:;
	(VV[116]->s.s_dbind)= CMPcar((VV[87]->s.s_dbind));
	base[2]= (VV[116]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V259;
	if(vs_base>=vs_top){vs_top=sup;goto T873;}
	V259=(base[0]);
	vs_top=sup;
	goto T874;
	goto T873;
T873:;
	V259= Cnil;
	goto T874;
T874:;
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T877;}
	base[1]= VV[133];
	base[2]= (V259);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk354)();
	return;
	goto T877;
T877:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-DISALLOW-ANONYMOUS-COLLECTORS	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[134];
	base[1]= (VV[121]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk367)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T882;}
	base[0]= VV[135];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
	goto T882;
T882:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-DISALLOW-AGGREGATE-BOOLEANS	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= (VV[116]->s.s_dbind);
	base[1]= VV[136];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk362)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T888;}
	base[0]= VV[137];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
	goto T888;
T888:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-TYPED-INIT	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	{register object V260;
	V260=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V260))==Cnil){
	goto T894;}
	base[1]= (V260);
	base[2]= VV[138];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T894;}
	base[1]= (V260);
	base[2]= VV[139];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T900;}
	base[1]= (V260);
	base[2]= VV[140];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T901;}
	goto T900;
T900:;
	base[1]= small_fixnum(0);
	base[2]= (V260);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk368)();
	return;
	goto T901;
T901:;
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T894;
T894:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-OPTIONAL-TYPE	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	if(vs_base>=vs_top){vs_top=sup;goto T911;}
	vs_top=sup;
	goto T912;
	goto T911;
T911:;
	base[0]= Cnil;
	goto T912;
T912:;
	if((VV[88]->s.s_dbind)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= CMPcar((VV[88]->s.s_dbind));
	base[2]= base[1];
	base[3]= VV[141];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T916;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	return;
	goto T916;
T916:;
	if(!(type_of(base[1])==t_symbol)){
	goto T922;}
	{object V261;{object V262;
	base[2]= base[1];
	base[3]= STREF(object,(VV[99]->s.s_dbind),16);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V262= vs_base[0];
	if(V262==Cnil)goto T925;
	V261= V262;
	goto T924;
	goto T925;
T925:;}
	base[2]= symbol_name(base[1]);
	base[3]= STREF(object,(VV[99]->s.s_dbind),20);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V261= vs_base[0];
	goto T924;
T924:;
	if(((V261))==Cnil){
	goto T932;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[2]= (V261);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T932;
T932:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T922;
T922:;
	if(!(type_of(base[0])==t_cons)){
	goto T937;}
	if(type_of(base[1])==t_cons){
	goto T935;}
	base[2]= VV[142];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T935;
	goto T937;
T937:;
	base[2]= VV[143];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T935;
T935:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[2]= base[1];
	base[3]= base[0];
	vs_top=(vs_base=base+2)+2;
	L63(base);
	return;
}
/*	function definition for LOOP-BIND-BLOCK	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[102]->s.s_dbind))!=Cnil){
	goto T948;}
	if(((VV[105]->s.s_dbind))!=Cnil){
	goto T948;}
	if(((VV[109]->s.s_dbind))==Cnil){
	goto T949;}
	goto T948;
T948:;
	{object V263;
	V264= nreverse((VV[102]->s.s_dbind));
	V263= list(4,/* INLINE-ARGS */V264,(VV[105]->s.s_dbind),(VV[106]->s.s_dbind),(VV[109]->s.s_dbind));
	(VV[107]->s.s_dbind)= make_cons((V263),(VV[107]->s.s_dbind));}
	(VV[102]->s.s_dbind)= Cnil;
	(VV[105]->s.s_dbind)= Cnil;
	(VV[106]->s.s_dbind)= Cnil;
	(VV[109]->s.s_dbind)= Cnil;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T949;
T949:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-VARIABLE-P	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{register object V265;
	V265=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V266;
	V266= (VV[107]->s.s_dbind);
	goto T966;
T966:;
	if(((V266))!=Cnil){
	goto T971;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T971;
T971:;
	{register object x= (V265),V267= CMPcaar((V266));
	while(V267!=Cnil)
	if(EQ(x,V267->c.c_car->c.c_car) &&V267->c.c_car != Cnil){
	goto T974;
	}else V267=V267->c.c_cdr;
	goto T969;}
	goto T974;
T974:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T969;
T969:;
	V266= CMPcdr((V266));
	goto T966;}
	}
}
/*	function definition for LOOP-MAKE-VARIABLE	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{register object V268;
	register object V269;
	register object V270;
	object V271;
	V268=(base[0]);
	V269=(base[1]);
	V270=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T978;}
	V271=(base[3]);
	vs_top=sup;
	goto T979;
	goto T978;
T978:;
	V271= Cnil;
	goto T979;
T979:;
	if(((V268))!=Cnil){
	goto T983;}
	if(((V269))==Cnil){
	goto T981;}
	{object V272;
	base[5]= VV[146];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V268= vs_base[0];
	V272= list(2,(V268),(V269));
	(VV[102]->s.s_dbind)= make_cons((V272),(VV[102]->s.s_dbind));}
	{object V273;
	V273= list(2,VV[97],(V268));
	(VV[105]->s.s_dbind)= make_cons((V273),(VV[105]->s.s_dbind));
	goto T981;}
	goto T983;
T983:;
	if(!(type_of((V268))!=t_cons)){
	goto T995;}
	if(((V271))==Cnil){
	goto T999;}
	{register object x= (V268),V274= (VV[101]->s.s_dbind);
	while(V274!=Cnil)
	if(eql(x,V274->c.c_car)){
	goto T1003;
	}else V274=V274->c.c_cdr;
	goto T1002;}
	goto T1003;
T1003:;
	base[4]= VV[147];
	base[5]= (V268);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T997;
	goto T1002;
T1002:;
	(VV[101]->s.s_dbind)= make_cons(V268,(VV[101]->s.s_dbind));
	goto T997;
	goto T999;
T999:;
	{register object x= (V268),V276= (VV[102]->s.s_dbind);
	while(V276!=Cnil)
	if(eql(x,V276->c.c_car->c.c_car) &&V276->c.c_car != Cnil){
	goto T1008;
	}else V276=V276->c.c_cdr;
	goto T997;}
	goto T1008;
T1008:;
	base[4]= VV[148];
	base[5]= (V268);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T997;
T997:;
	if(type_of((V268))==t_symbol){
	goto T1011;}
	base[4]= VV[149];
	base[5]= (V268);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1011;
T1011:;
	base[4]= (V268);
	base[5]= (V270);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk370)();
	vs_top=sup;
	{object V277;
	if((V269)!=Cnil){
	V278= (V269);
	goto T1020;}
	base[5]= (V270);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	V278= vs_base[0];
	goto T1020;
T1020:;
	V277= list(2,(V268),V278);
	(VV[102]->s.s_dbind)= make_cons((V277),(VV[102]->s.s_dbind));
	goto T981;}
	goto T995;
T995:;
	if(((V269))==Cnil){
	goto T1024;}
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T1027;}
	base[4]= (V268);
	base[5]= (V270);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk370)();
	vs_top=sup;
	{object V279;
	V279= list(2,(V268),(V269));
	(VV[102]->s.s_dbind)= make_cons((V279),(VV[102]->s.s_dbind));
	goto T981;}
	goto T1027;
T1027:;
	{object V280;
	base[4]= VV[150];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V280= vs_base[0];
	base[4]= (V268);
	base[5]= (V270);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk370)();
	vs_top=sup;
	{object V281;
	V281= list(2,(V280),(V269));
	(VV[102]->s.s_dbind)= make_cons((V281),(VV[102]->s.s_dbind));}
	(VV[106]->s.s_dbind)= listA(3,(V268),(V280),(VV[106]->s.s_dbind));
	goto T981;}
	goto T1024;
T1024:;
	{object V282;
	object V283;
	V282= Cnil;
	V283= Cnil;
	if(!(type_of((V270))!=t_cons)){
	goto T1045;}
	V283= (V270);
	V282= (V283);
	goto T1043;
	goto T1045;
T1045:;
	V282= CMPcar((V270));
	V283= CMPcdr((V270));
	goto T1043;
T1043:;
	base[4]= CMPcar((V268));
	base[5]= Cnil;
	base[6]= (V282);
	base[7]= (V271);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk371)();
	vs_top=sup;
	base[4]= CMPcdr((V268));
	base[5]= Cnil;
	base[6]= (V283);
	base[7]= (V271);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk371)();
	vs_top=sup;}
	goto T981;
T981:;
	base[4]= (V268);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LOOP-MAKE-ITERATION-VARIABLE	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{object V284;
	object V285;
	object V286;
	V284=(base[0]);
	V285=(base[1]);
	V286=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V284);
	base[4]= (V285);
	base[5]= (V286);
	base[6]= Ct;
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk371)();
	return;
	}
}
/*	function definition for LOOP-DECLARE-VARIABLE	*/

static void L69()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{register object V287;
	register object V288;
	V287=(base[0]);
	V288=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V287))==Cnil){
	goto T1065;}
	if(((V288))==Cnil){
	goto T1065;}
	if(!(((V288))==(Ct))){
	goto T1066;}
	goto T1065;
T1065:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1066;
T1066:;
	if(!(type_of((V287))==t_symbol)){
	goto T1073;}
	if(((V288))==(Ct)){
	goto T1076;}
	{register object x= (V287),V289= (VV[103]->s.s_dbind);
	while(V289!=Cnil)
	if(eql(x,V289->c.c_car)){
	goto T1076;
	}else V289=V289->c.c_cdr;}
	{object V291;
	V291= list(3,VV[31],V288,(V287));
	(VV[105]->s.s_dbind)= make_cons((V291),(VV[105]->s.s_dbind));
	base[3]= (VV[105]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1076;
T1076:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1073;
T1073:;
	if(!(type_of((V287))==t_cons)){
	goto T1083;}
	if(!(type_of((V288))==t_cons)){
	goto T1086;}
	base[2]= CMPcar((V287));
	base[3]= CMPcar((V288));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	vs_top=sup;
	V287= CMPcdr((V287));
	V288= CMPcdr((V288));
	goto TTL;
	goto T1086;
T1086:;
	base[2]= CMPcar((V287));
	base[3]= (V288);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk370)();
	vs_top=sup;
	V287= CMPcdr((V287));
	goto TTL;
	goto T1083;
T1083:;
	base[2]= VV[151];
	base[3]= (V287);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;
	}
}
/*	function definition for LOOP-MAYBE-BIND-FORM	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	{object V292;
	object V293;
	V292=(base[0]);
	V293=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V292);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk372)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1103;}
	base[2]= (V292);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1103;
T1103:;
	base[3]= VV[152];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V292);
	base[4]= (V293);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk371)();
	return;
	}
}
/*	function definition for LOOP-DO-IF	*/

static void L71()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	bds_check;
	{object V294;
	object V295;
	V294=(base[0]);
	V295=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V296;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V296= vs_base[0];
	bds_bind(VV[117],Ct);
	base[3]= Cnil;
	base[4]= Ct;
	{object V297;
	object V298;
	base[5]= (V294);
	vs_top=(vs_base=base+5)+1;
	L72(base);
	vs_top=sup;
	V297= vs_base[0];
	base[5]= CMPcar((VV[88]->s.s_dbind));
	base[6]= VV[153];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1115;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[5]= VV[153];
	vs_top=(vs_base=base+5)+1;
	L72(base);
	vs_top=sup;
	V299= vs_base[0];
	V298= make_cons(V299,Cnil);
	goto T1113;
	goto T1115;
T1115:;
	V298= Cnil;
	goto T1113;
T1113:;
	base[5]= CMPcar((VV[88]->s.s_dbind));
	base[6]= VV[154];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1122;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T1122;
T1122:;
	if((base[3])==Cnil){
	goto T1127;}
	V296= list(3,VV[11],base[3],(V296));
	goto T1127;
T1127:;
	if(((V295))==Cnil){
	goto T1134;}
	V300= list(2,VV[36],(V296));
	goto T1132;
	goto T1134;
T1134:;
	V300= (V296);
	goto T1132;
T1132:;
	base[5]= listA(4,VV[71],V300,(V297),(V298));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk365)();
	bds_unwind1;
	return;}}
	}
}
/*	function definition for LOOP-DO-INITIALLY	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[159];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{object V301;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V301= vs_base[0];
	(VV[108]->s.s_dbind)= make_cons((V301),(VV[108]->s.s_dbind));
	base[1]= (VV[108]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;}
}
/*	function definition for LOOP-DO-FINALLY	*/

static void L74()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[160];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{object V302;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	V302= vs_base[0];
	(VV[114]->s.s_dbind)= make_cons((V302),(VV[114]->s.s_dbind));
	base[1]= (VV[114]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;}
}
/*	function definition for LOOP-DO-DO	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk375)();
	return;
}
/*	function definition for LOOP-DO-NAMED	*/

static void L76()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V303;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V303= vs_base[0];
	if(type_of((V303))==t_symbol){
	goto T1146;}
	base[0]= VV[161];
	base[1]= (V303);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1146;
T1146:;
	if(((VV[110]->s.s_dbind))!=Cnil){
	goto T1152;}
	if(((VV[111]->s.s_dbind))!=Cnil){
	goto T1152;}
	if(((VV[115]->s.s_dbind))!=Cnil){
	goto T1152;}
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T1151;}
	goto T1152;
T1152:;
	base[0]= VV[162];
	base[1]= (V303);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1151;
T1151:;
	if(((VV[120]->s.s_dbind))==Cnil){
	goto T1162;}
	base[0]= VV[163];
	base[1]= CMPcar((VV[120]->s.s_dbind));
	base[2]= (V303);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1162;
T1162:;
	(VV[120]->s.s_dbind)= list(2,(V303),Cnil);
	base[0]= (VV[120]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	function definition for LOOP-DO-RETURN	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk366)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk365)();
	return;
}
/*	function definition for MAKE-LOOP-COLLECTOR	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V304;
	object V305;
	object V306;
	object V307;
	object V308;
	object V309;
	parse_key(vs_base,FALSE,FALSE,6,VV[169],VV[170],VV[171],VV[376],VV[172],VV[377]);
	vs_top=sup;
	V304=(base[0]);
	V305=(base[1]);
	V306=(base[2]);
	V307=(base[3]);
	V308=(base[4]);
	V309=(base[5]);
	base[12]= VV[164];
	base[13]= (V304);
	base[14]= (V305);
	base[15]= (V306);
	base[16]= (V307);
	base[17]= (V308);
	base[18]= (V309);
	vs_top=(vs_base=base+12)+7;
	siLmake_structure();
	return;
	}
}
/*	function definition for LOOP-GET-COLLECTION-INFO	*/

static void L79()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{object V310;
	object V311;
	object V312;
	V310=(base[0]);
	V311=(base[1]);
	V312=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V313;
	register object V314;
	register object V315;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V313= vs_base[0];
	if((STREF(object,(VV[99]->s.s_dbind),24))==Cnil){
	goto T1180;}
	V314= Cnil;
	goto T1179;
	goto T1180;
T1180:;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V314= vs_base[0];
	goto T1179;
T1179:;
	base[3]= CMPcar((VV[88]->s.s_dbind));
	base[4]= VV[165];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1184;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V315= vs_base[0];
	goto T1182;
	goto T1184;
T1184:;
	V315= Cnil;
	goto T1182;
T1182:;
	if(type_of((V315))==t_symbol){
	goto T1189;}
	base[3]= VV[166];
	base[4]= (V315);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1189;
T1189:;
	if(((V315))!=Cnil){
	goto T1194;}
	vs_base=vs_top;
	(void) (*Lnk379)();
	vs_top=sup;
	goto T1194;
T1194:;
	if(((V314))!=Cnil){
	goto T1197;}{object V316;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V316= vs_base[0];
	if(V316==Cnil)goto T1201;
	V314= V316;
	goto T1200;
	goto T1201;
T1201:;}
	V314= (V312);
	goto T1200;
T1200:;
	goto T1197;
T1197:;
	{register object V317;
	base[3]= (V315);
	base[4]= (VV[121]->s.s_dbind);
	base[5]= VV[167];
	base[6]= (VV[134]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk380)();
	vs_top=sup;
	V317= vs_base[0];
	if(((V317))!=Cnil){
	goto T1210;}
	if(((V315))==Cnil){
	goto T1212;}
	base[3]= (V315);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk381)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1212;}
	base[3]= VV[168];
	base[4]= (V315);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1212;
T1212:;
	{object V318;
	base[4]= VV[169];
	base[5]= (V315);
	base[6]= VV[170];
	base[7]= (V311);
	base[8]= VV[171];
	base[9]= make_cons((V310),Cnil);
	base[10]= VV[172];
	base[11]= (V314);
	vs_top=(vs_base=base+4)+8;
	(void) (*Lnk382)();
	vs_top=sup;
	V317= vs_base[0];
	V318= (V317);
	(VV[121]->s.s_dbind)= make_cons((V318),(VV[121]->s.s_dbind));
	goto T1208;}
	goto T1210;
T1210:;
	if((STREF(object,(V317),4))==((V311))){
	goto T1231;}
	base[3]= VV[173];
	base[4]= (V315);
	base[5]= CMPcar(STREF(object,(V317),8));
	base[6]= (V310);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1231;
T1231:;
	if(equal((V314),STREF(object,(V317),16))){
	goto T1238;}
	base[3]= VV[174];
	base[4]= (V315);
	base[5]= (V314);
	base[6]= STREF(object,(V317),16);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk345)();
	vs_top=sup;
	if(!((STREF(object,(V317),16))==(Ct))){
	goto T1238;}
	V319= Ct;
	STSET(object,(V317),16, (V314));
	(void)((V314));
	goto T1238;
T1238:;
	{object V322;
	V322= make_cons(V310,STREF(object,V317,8));
	V323= Ct;
	STSET(object,V317,8, (V322));
	(void)((V322));}
	goto T1208;
T1208:;
	base[3]= (V317);
	base[4]= (V313);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	function definition for LOOP-LIST-COLLECTION	*/

static void L80()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{object V324;
	V324=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V325;
	register object V326;
	base[1]= (V324);
	base[2]= VV[5];
	base[3]= VV[5];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1255;}
	V325= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1256;}
	V326= vs_base[0];
	vs_top=sup;
	goto T1257;
	goto T1255;
T1255:;
	V325= Cnil;
	goto T1256;
T1256:;
	V326= Cnil;
	goto T1257;
T1257:;
	{register object V327;
	V327= STREF(object,(V325),12);
	if(((V327))!=Cnil){
	goto T1259;}
	base[1]= VV[175];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V328= vs_base[0];
	base[1]= VV[176];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V329= vs_base[0];
	if((STREF(object,(V325),0))!=Cnil){
	goto T1269;}
	V330= Cnil;
	goto T1268;
	goto T1269;
T1269:;
	V330= make_cons(STREF(object,(V325),0),Cnil);
	goto T1268;
T1268:;
	V327= listA(3,V328,V329,V330);
	V331= Ct;
	STSET(object,(V325),12, (V327));
	(void)((V327));
	{object V332;
	V332= list(2,VV[177],(V327));
	(VV[109]->s.s_dbind)= make_cons((V332),(VV[109]->s.s_dbind));}
	if((STREF(object,(V325),0))!=Cnil){
	goto T1259;}
	base[1]= listA(3,VV[178],CMPcar((V327)),CMPcddr((V327)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk384)();
	vs_top=sup;
	goto T1259;
T1259:;
	{object V333= (V324);
	if((V333!= VV[5]))goto T1278;
	V326= list(2,VV[5],(V326));
	goto T1277;
	goto T1278;
T1278:;
	if((V333!= VV[385]))goto T1280;
	goto T1277;
	goto T1280;
T1280:;
	if((V333!= VV[386]))goto T1281;
	if(!(type_of((V326))==t_cons)){
	goto T1282;}
	if((CMPcar((V326)))==(VV[5])){
	goto T1277;}
	goto T1282;
T1282:;
	V326= list(2,VV[179],(V326));
	goto T1277;
	goto T1281;
T1281:;
	FEerror("The ECASE key value ~s is illegal.",1,V333);
	goto T1277;}
	goto T1277;
T1277:;
	base[1]= list(3,VV[180],(V327),(V326));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk375)();
	return;}}
	}
}
/*	function definition for LOOP-SUM-COLLECTION	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	{object V334;
	object V335;
	object V336;
	V334=(base[0]);
	V335=(base[1]);
	V336=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V337;
	object V338;
	base[3]= (V334);
	base[4]= VV[181];
	base[5]= (V336);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1292;}
	V337= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1293;}
	V338= vs_base[0];
	vs_top=sup;
	goto T1294;
	goto T1292;
T1292:;
	V337= Cnil;
	goto T1293;
T1293:;
	V338= Cnil;
	goto T1294;
T1294:;
	base[3]= STREF(object,(V337),16);
	base[4]= (V335);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk387)();
	vs_top=sup;
	{register object V339;
	V339= STREF(object,(V337),12);
	if(((V339))!=Cnil){
	goto T1299;}{object V341;
	V341= STREF(object,(V337),0);
	if(V341==Cnil)goto T1306;
	base[3]= V341;
	goto T1305;
	goto T1306;
T1306:;}
	base[4]= VV[182];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1305;
T1305:;
	base[4]= Cnil;
	base[5]= STREF(object,(V337),16);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	V340= vs_base[0];
	V339= make_cons(V340,Cnil);
	V342= Ct;
	STSET(object,(V337),12, (V339));
	(void)((V339));
	if((STREF(object,(V337),0))!=Cnil){
	goto T1299;}
	base[3]= CMPcar(STREF(object,(V337),12));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk384)();
	vs_top=sup;
	goto T1299;
T1299:;
	if(!(((V334))==(VV[183]))){
	goto T1316;}
	V343= CMPcar((V339));
	base[4]= Ct;
	base[5]= CMPcar((V339));
	base[6]= list(2,VV[184],CMPcar((V339)));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	V344= vs_base[0];
	base[3]= list(3,VV[8],(V338),list(3,VV[11],/* INLINE-ARGS */V343,V344));
	goto T1314;
	goto T1316;
T1316:;
	V345= CMPcar((V339));
	base[4]= Ct;
	base[5]= CMPcar((V339));
	base[6]= CMPcar((V339));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	V346= vs_base[0];
	base[3]= list(3,VV[11],/* INLINE-ARGS */V345,list(3,VV[185],V346,(V338)));
	goto T1314;
T1314:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk375)();
	return;}}
	}
}
/*	function definition for LOOP-MAXMIN-COLLECTION	*/

static void L82()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{object V347;
	V347=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V348;
	object V349;
	base[1]= (V347);
	base[2]= VV[186];
	base[3]= (VV[187]->s.s_dbind);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1330;}
	V348= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1331;}
	V349= vs_base[0];
	vs_top=sup;
	goto T1332;
	goto T1330;
T1330:;
	V348= Cnil;
	goto T1331;
T1331:;
	V349= Cnil;
	goto T1332;
T1332:;
	base[1]= STREF(object,(V348),16);
	base[2]= (VV[187]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk387)();
	vs_top=sup;
	{register object V350;
	V350= STREF(object,(V348),20);
	if(((V350))!=Cnil){
	goto T1337;}{object V351;
	V351= STREF(object,(V348),0);
	if(V351==Cnil)goto T1343;
	base[1]= V351;
	goto T1342;
	goto T1343;
T1343:;}
	base[2]= VV[188];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	base[1]= vs_base[0];
	goto T1342;
T1342:;
	base[2]= STREF(object,(V348),16);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk388)();
	vs_top=sup;
	V350= vs_base[0];
	V352= Ct;
	STSET(object,(V348),20, (V350));
	(void)((V350));
	if((STREF(object,(V348),0))!=Cnil){
	goto T1337;}
	base[1]= STREF(object,(V350),0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk384)();
	vs_top=sup;
	goto T1337;
T1337:;
	base[1]= (V347);
	base[2]= (V350);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	{object V353;
	V353= list(2,VV[189],(V350));
	(VV[109]->s.s_dbind)= make_cons((V353),(VV[109]->s.s_dbind));}
	base[1]= list(4,VV[190],(V350),(V347),(V349));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk375)();
	return;}}
	}
}
/*	function definition for LOOP-DO-ALWAYS	*/

static void L83()
{register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_check;
	{object V354;
	object V355;
	V354=(base[0]);
	V355=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V356;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V356= vs_base[0];
	if(((V354))==Cnil){
	goto T1358;}
	vs_base=vs_top;
	(void) (*Lnk373)();
	vs_top=sup;
	goto T1358;
T1358:;
	vs_base=vs_top;
	(void) (*Lnk390)();
	vs_top=sup;
	if(((V355))==Cnil){
	goto T1366;}
	V357= VV[8];
	goto T1364;
	goto T1366;
T1366:;
	V357= VV[191];
	goto T1364;
T1364:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk366)();
	vs_top=sup;
	V358= vs_base[0];
	base[2]= list(3,V357,(V356),V358);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk375)();
	vs_top=sup;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk384)();
	return;}
	}
}
/*	function definition for LOOP-DO-THEREIS	*/

static void L84()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	{object V359;
	V359=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V359))==Cnil){
	goto T1371;}
	vs_base=vs_top;
	(void) (*Lnk373)();
	vs_top=sup;
	goto T1371;
T1371:;
	vs_base=vs_top;
	(void) (*Lnk390)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk384)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk391)();
	vs_top=sup;
	V360= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V361= vs_base[0];
	V362= list(3,VV[11],V360,V361);
	base[2]= (VV[118]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk366)();
	vs_top=sup;
	V363= vs_base[0];
	base[1]= list(3,VV[8],/* INLINE-ARGS */V362,V363);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk375)();
	return;
	}
}
/*	function definition for LOOP-DO-WHILE	*/

static void L85()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	{object V364;
	object V365;
	V364=(base[0]);
	V365=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V366;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V366= vs_base[0];
	base[3]= (V365);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	if(((V364))==Cnil){
	goto T1387;}
	V367= VV[8];
	goto T1385;
	goto T1387;
T1387:;
	V367= VV[191];
	goto T1385;
T1385:;
	base[3]= list(3,V367,(V366),VV[192]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk365)();
	return;}
	}
}
/*	function definition for LOOP-DO-WITH	*/

static void L86()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[193];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{register object V368;
	register object V369;
	register object V370;
	V368= Cnil;
	V369= Cnil;
	V370= Cnil;
	goto T1392;
T1392:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V368= vs_base[0];
	base[0]= (V368);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk378)();
	vs_top=sup;
	V370= vs_base[0];
	base[0]= CMPcar((VV[88]->s.s_dbind));
	base[1]= VV[194];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1403;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V369= vs_base[0];
	goto T1401;
	goto T1403;
T1403:;
	V369= Cnil;
	goto T1401;
T1401:;
	if(((V368))==Cnil){
	goto T1408;}
	base[0]= (V368);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk381)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1408;}
	base[0]= VV[195];
	base[1]= (V368);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1408;
T1408:;
	base[0]= (V368);
	base[1]= (V369);
	base[2]= (V370);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	base[0]= CMPcar((VV[88]->s.s_dbind));
	base[1]= VV[158];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1422;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T1420;
	goto T1422;
T1422:;
	vs_base=vs_top;
	(void) (*Lnk358)();
	return;
	goto T1420;
T1420:;
	goto T1392;}
}
/*	function definition for LOOP-HACK-ITERATION	*/

static void L87()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	{register object V371;
	V371=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V372;
	register object V373;
	register object V374;
	register object V375;
	register object V376;
	register object V377;
	register object V378;
	register object V379;
	register object V380;
	object V381;
	V372= Cnil;
	V373= Cnil;
	V374= Cnil;
	V375= Cnil;
	V376= Cnil;
	V377= Cnil;
	V378= Cnil;
	V379= Cnil;
	V380= Cnil;
	V381= Cnil;
	goto T1429;
T1429:;
	base[2]= CMPcar((V371));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V382;
	V382= CMPcdr((V371));
	 vs_top=base+2;
	 while(V382!=Cnil)
	 {vs_push((V382)->c.c_car);V382=(V382)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V381= vs_base[0];
	V380= (V381);
	if((CMPcar((V380)))!=Cnil){
	goto T1439;}
	goto T1438;
	goto T1439;
T1439:;
	{object V383;
	V383= CMPcar((V380));
	V372= make_cons((V383),(V372));}
	goto T1438;
T1438:;
	V380= CMPcdr((V380));
	base[1]= CMPcar((V380));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V384= vs_base[0];
	V373= nconc((V373),V384);
	V380= CMPcdr((V380));
	if((CMPcar((V380)))!=Cnil){
	goto T1449;}
	goto T1448;
	goto T1449;
T1449:;
	{object V385;
	V385= CMPcar((V380));
	V374= make_cons((V385),(V374));}
	goto T1448;
T1448:;
	V380= CMPcdr((V380));
	base[1]= CMPcar((V380));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V386= vs_base[0];
	V375= nconc((V375),V386);
	V380= CMPcdr((V380));
	if(((VV[112]->s.s_dbind))==Cnil){
	goto T1461;}
	base[1]= VV[196];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1461;
T1461:;
	if(((V380))!=Cnil){
	goto T1465;}
	V380= (V381);
	goto T1465;
T1465:;
	if((CMPcar((V380)))==Cnil){
	goto T1469;}
	{object V387;
	V387= CMPcar((V380));
	V376= make_cons((V387),(V376));}
	goto T1469;
T1469:;
	V380= CMPcdr((V380));
	base[1]= CMPcar((V380));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V388= vs_base[0];
	V377= nconc((V377),V388);
	V380= CMPcdr((V380));
	if((CMPcar((V380)))==Cnil){
	goto T1479;}
	{object V389;
	V389= CMPcar((V380));
	V378= make_cons((V389),(V378));}
	goto T1479;
T1479:;
	base[1]= CMPcadr((V380));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V390= vs_base[0];
	V379= nconc((V379),V390);
	base[1]= CMPcar((VV[88]->s.s_dbind));
	base[2]= VV[158];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1489;}
	base[1]= (V379);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk344)();
	vs_top=sup;
	V391= vs_base[0];
	base[1]= (V378);
	vs_top=(vs_base=base+1)+1;
	L88(base);
	vs_top=sup;
	V392= vs_base[0];
	base[1]= (V377);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	V393= vs_base[0];
	base[1]= (V376);
	vs_top=(vs_base=base+1)+1;
	L88(base);
	vs_top=sup;
	V394= vs_base[0];
	(VV[110]->s.s_dbind)= listA(5,V391,V392,V393,V394,(VV[110]->s.s_dbind));
	base[1]= (V375);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk344)();
	vs_top=sup;
	V395= vs_base[0];
	base[1]= (V374);
	vs_top=(vs_base=base+1)+1;
	L88(base);
	vs_top=sup;
	V396= vs_base[0];
	base[1]= (V373);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	V397= vs_base[0];
	base[1]= (V372);
	vs_top=(vs_base=base+1)+1;
	L88(base);
	vs_top=sup;
	V398= vs_base[0];
	(VV[113]->s.s_dbind)= listA(5,V395,V396,V397,V398,(VV[113]->s.s_dbind));
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1489;
T1489:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	if((STREF(object,(VV[99]->s.s_dbind),28))!=Cnil){
	goto T1516;}
	base[1]= CMPcar((VV[88]->s.s_dbind));
	base[2]= STREF(object,(VV[99]->s.s_dbind),4);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk360)();
	vs_top=sup;
	V380= vs_base[0];
	if(((V380))==Cnil){
	goto T1516;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V371= (V380);
	goto T1516;
T1516:;
	goto T1429;}
	}
}
/*	function definition for LOOP-DO-FOR	*/

static void L89()
{register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V399;
	object V400;
	object V401;
	object V402;
	object V403;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V399= vs_base[0];
	base[3]= (V399);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk378)();
	vs_top=sup;
	V400= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V401= vs_base[0];
	V402= Cnil;
	V403= Cnil;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V402= vs_base[0];
	if(!(type_of((V401))==t_symbol)){
	goto T1537;}
	base[3]= (V401);
	base[4]= STREF(object,(VV[99]->s.s_dbind),8);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk360)();
	vs_top=sup;
	V403= vs_base[0];
	if(((V403))!=Cnil){
	goto T1536;}
	goto T1537;
T1537:;
	base[3]= VV[199];
	base[4]= (V401);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1536;
T1536:;
	base[3]= CMPcar((V403));
	base[4]= (V399);
	base[5]= (V402);
	base[6]= (V400);
	{object V404;
	V404= CMPcdr((V403));
	 vs_top=base+7;
	 while(V404!=Cnil)
	 {vs_push((V404)->c.c_car);V404=(V404)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	return;}
}
/*	function definition for LOOP-DO-REPEAT	*/

static void L90()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[200];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{object V405;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V405= vs_base[0];
	{object V407;
	vs_base=vs_top;
	(void) (*Lnk334)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V405);
	base[2]= VV[201];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	V407= vs_base[0];
	{object V408;
	V408= list(3,VV[8],list(2,VV[202],list(2,VV[203],(V407))),VV[204]);
	(VV[110]->s.s_dbind)= make_cons((V408),(VV[110]->s.s_dbind));}
	{object V409;
	V409= list(3,VV[8],list(2,VV[202],list(2,VV[203],(V407))),VV[205]);
	(VV[113]->s.s_dbind)= make_cons((V409),(VV[113]->s.s_dbind));
	base[1]= (VV[113]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;}}}
}
/*	function definition for LOOP-WHEN-IT-VARIABLE	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if((VV[118]->s.s_dbind)!=Cnil){
	base[0]= (VV[118]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;}
	base[1]= VV[206];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	(VV[118]->s.s_dbind)= vs_base[0];
	base[0]= (VV[118]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-ANSI-FOR-EQUALS	*/

static void L92()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	{register object V410;
	object V411;
	object V412;
	V410=(base[0]);
	V411=(base[1]);
	V412=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V410);
	base[4]= Cnil;
	base[5]= (V412);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	base[3]= CMPcar((VV[88]->s.s_dbind));
	base[4]= VV[207];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1573;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V413= vs_base[0];
	V414= list(2,(V410),V413);
	base[3]= listA(7,Cnil,/* INLINE-ARGS */V414,Cnil,Cnil,Cnil,list(2,(V410),(V411)),VV[208]);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1573;
T1573:;
	base[3]= listA(3,Cnil,list(2,(V410),(V411)),VV[209]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for LOOP-FOR-ACROSS	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	{object V415;
	object V416;
	object V417;
	V415=(base[0]);
	V416=(base[1]);
	V417=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V415);
	base[4]= Cnil;
	base[5]= (V417);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	{object V418;
	register object V419;
	base[3]= VV[210];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V418= vs_base[0];
	base[3]= VV[211];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V419= vs_base[0];
	{register object V420;
	object V421;
	object V422;
	base[3]= (V416);
	base[4]= VV[212];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1590;}
	V420= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1591;}
	V421= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1592;}
	V422= vs_base[0];
	vs_top=sup;
	goto T1593;
	goto T1590;
T1590:;
	V420= Cnil;
	goto T1591;
T1591:;
	V421= Cnil;
	goto T1592;
T1592:;
	V422= Cnil;
	goto T1593;
T1593:;
	base[3]= (V418);
	base[4]= (V420);
	if(!(type_of((V420))==t_cons)){
	goto T1599;}
	if(!((CMPcar((V420)))==(VV[213]))){
	goto T1599;}
	base[5]= CMPcadr((V420));
	goto T1597;
	goto T1599;
T1599:;
	base[5]= VV[212];
	goto T1597;
T1597:;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	base[3]= (V419);
	base[4]= small_fixnum(0);
	base[5]= VV[214];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	{long V423;
	object V424;
	register object V425;
	object V426;
	object V427;
	object V428;
	V423= 0;
	if(((V421))!=Cnil){
	goto T1610;}
	{object V429;
	base[7]= VV[215];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V429= vs_base[0];
	{object V430;
	V430= list(3,VV[11],(V429),list(2,VV[216],(V418)));
	(VV[108]->s.s_dbind)= make_cons((V430),(VV[108]->s.s_dbind));}
	base[7]= (V429);
	base[8]= small_fixnum(0);
	base[9]= VV[214];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	V424= vs_base[0];
	goto T1608;}
	goto T1610;
T1610:;
	V423= (long)length((V422));
	V424= CMPmake_fixnum(V423);
	goto T1608;
T1608:;
	V425= list(3,VV[217],(V419),(V424));
	V426= (V425);
	V427= list(2,(V415),list(3,VV[218],(V418),(V419)));
	V428= list(2,(V419),list(2,VV[184],(V419)));
	if(((V421))==Cnil){
	goto T1625;}
	V425= ((V423)==(0)?Ct:Cnil);
	if(!((V423)<=(1))){
	goto T1625;}
	V426= Ct;
	goto T1625;
T1625:;
	if(((((V425))==((V426))?Ct:Cnil))==Cnil){
	goto T1634;}
	V431= Cnil;
	goto T1633;
	goto T1634;
T1634:;
	V431= list(4,(V425),(V427),Cnil,(V428));
	goto T1633;
T1633:;
	base[7]= listA(5,(V426),(V427),Cnil,(V428),V431);
	vs_top=(vs_base=base+7)+1;
	return;}}}
	}
}
/*	function definition for LOOP-LIST-STEP	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V432;
	V432=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V433;
	base[1]= CMPcar((VV[88]->s.s_dbind));
	base[2]= VV[219];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1638;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V433= vs_base[0];
	goto T1636;
	goto T1638;
T1638:;
	V433= VV[220];
	goto T1636;
T1636:;
	if(!(type_of((V433))==t_cons)){
	goto T1644;}
	if(!((CMPcar((V433)))==(VV[221]))){
	goto T1644;}
	base[1]= VV[222];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk345)();
	vs_top=sup;
	base[1]= list(3,VV[223],(V433),(V432));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1644;
T1644:;
	if(!(type_of((V433))==t_cons)){
	goto T1653;}
	if(!((CMPcar((V433)))==(VV[83]))){
	goto T1653;}
	base[1]= list(2,CMPcadr((V433)),(V432));
	base[2]= CMPcadr((V433));
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1653;
T1653:;
	base[3]= VV[224];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V433);
	base[4]= VV[83];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	V434= vs_base[0];
	base[1]= list(3,VV[223],V434,(V432));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-FOR-ON	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{register object V435;
	object V436;
	object V437;
	V435=(base[0]);
	V436=(base[1]);
	V437=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V438;
	object V439;
	object V440;
	base[3]= (V436);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1668;}
	V438= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1669;}
	V439= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1670;}
	V440= vs_base[0];
	vs_top=sup;
	goto T1671;
	goto T1668;
T1668:;
	V438= Cnil;
	goto T1669;
T1669:;
	V439= Cnil;
	goto T1670;
T1670:;
	V440= Cnil;
	goto T1671;
T1671:;
	{register object V441;
	V441= (V435);
	if(((V435))==Cnil){
	goto T1674;}
	if(!(type_of((V435))==t_symbol)){
	goto T1674;}
	base[3]= (V435);
	base[4]= (V438);
	base[5]= (V437);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	goto T1672;
	goto T1674;
T1674:;
	vs_base=vs_top;
	(void) (*Lnk334)();
	vs_top=sup;
	V441= vs_base[0];
	base[3]= (V441);
	base[4]= (V438);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	base[3]= (V435);
	base[4]= Cnil;
	base[5]= (V437);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	goto T1672;
T1672:;
	{object V442;
	object V443;
	base[3]= (V441);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1691;}
	V442= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1692;}
	V443= vs_base[0];
	vs_top=sup;
	goto T1693;
	goto T1691;
T1691:;
	V442= Cnil;
	goto T1692;
T1692:;
	V443= Cnil;
	goto T1693;
T1693:;
	{register object V444;
	object V445;
	base[4]= (((V435))==((V441))?Ct:Cnil);
	base[5]= (V441);
	base[6]= list(2,VV[225],(V441));
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	V444= vs_base[0];
	V445= (V444);
	if(((V439))==Cnil){
	goto T1699;}
	if(!(type_of((V440))==t_cons||((V440))==Cnil)){
	goto T1699;}
	V444= (((V440))==Cnil?Ct:Cnil);
	goto T1699;
T1699:;
	if(!(((V435))==((V441)))){
	goto T1706;}
	base[4]= Ct;
	base[5]= (V441);
	base[6]= (V442);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	V446= vs_base[0];
	base[4]= list(8,Cnil,list(2,(V441),V446),(V445),Cnil,Cnil,Cnil,(V444),Cnil);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1706;
T1706:;
	{object V447;
	object V448;
	V447= list(2,(V435),(V441));
	V448= list(2,(V441),(V442));
	if(((((V444))==((V445))?Ct:Cnil))==Cnil){
	goto T1715;}
	V449= Cnil;
	goto T1714;
	goto T1715;
T1715:;
	V449= list(4,(V444),(V447),Cnil,(V448));
	goto T1714;
T1714:;
	base[4]= listA(5,(V445),(V447),Cnil,(V448),V449);
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	function definition for LOOP-FOR-IN	*/

static void L96()
{register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_check;
	{object V450;
	object V451;
	object V452;
	V450=(base[0]);
	V451=(base[1]);
	V452=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V453;
	object V454;
	object V455;
	base[3]= (V451);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1719;}
	V453= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1720;}
	V454= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1721;}
	V455= vs_base[0];
	vs_top=sup;
	goto T1722;
	goto T1719;
T1719:;
	V453= Cnil;
	goto T1720;
T1720:;
	V454= Cnil;
	goto T1721;
T1721:;
	V455= Cnil;
	goto T1722;
T1722:;
	{register object V456;
	base[3]= VV[226];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V456= vs_base[0];
	base[3]= (V450);
	base[4]= Cnil;
	base[5]= (V452);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	base[3]= (V456);
	base[4]= (V453);
	base[5]= VV[5];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	{object V457;
	object V458;
	base[3]= (V456);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1735;}
	V457= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1736;}
	V458= vs_base[0];
	vs_top=sup;
	goto T1737;
	goto T1735;
T1735:;
	V457= Cnil;
	goto T1736;
T1736:;
	V458= Cnil;
	goto T1737;
T1737:;
	{register object V459;
	object V460;
	object V461;
	object V462;
	V459= list(2,VV[227],(V456));
	V460= (V459);
	V461= list(2,(V450),list(2,VV[65],(V456)));
	V462= list(2,(V456),(V457));
	if(((V454))==Cnil){
	goto T1742;}
	if(!(type_of((V455))==t_cons||((V455))==Cnil)){
	goto T1742;}
	V459= (((V455))==Cnil?Ct:Cnil);
	goto T1742;
T1742:;
	if(((((V459))==((V460))?Ct:Cnil))==Cnil){
	goto T1749;}
	V463= Cnil;
	goto T1748;
	goto T1749;
T1749:;
	V463= list(4,(V459),(V461),Cnil,(V462));
	goto T1748;
T1748:;
	base[6]= listA(5,(V460),(V461),Cnil,(V462),V463);
	vs_top=(vs_base=base+6)+1;
	return;}}}}
	}
}
/*	function definition for MAKE-LOOP-PATH	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V464;
	object V465;
	object V466;
	object V467;
	object V468;
	parse_key(vs_base,FALSE,FALSE,5,VV[230],VV[233],VV[234],VV[231],VV[232]);
	vs_top=sup;
	V464=(base[0]);
	V465=(base[1]);
	V466=(base[2]);
	V467=(base[3]);
	V468=(base[4]);
	base[10]= VV[228];
	base[11]= (V464);
	base[12]= (V465);
	base[13]= (V466);
	base[14]= (V467);
	base[15]= (V468);
	vs_top=(vs_base=base+10)+6;
	siLmake_structure();
	return;
	}
}
/*	function definition for ADD-LOOP-PATH	*/

static void L98()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	bds_check;
	{object V469;
	object V470;
	register object V471;
	object V472;
	object V473;
	object V474;
	parse_key(vs_base+3,FALSE,FALSE,3,VV[233],VV[234],VV[232]);
	V469=(base[0]);
	V470=(base[1]);
	V471=(base[2]);
	vs_top=sup;
	V472=(base[3]);
	V473=(base[4]);
	V474=(base[5]);
	if(type_of((V469))==t_cons||((V469))==Cnil){
	goto T1757;}
	V469= make_cons((V469),Cnil);
	goto T1757;
T1757:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1763;
T1763:;
	base[11]= (V471);
	base[12]= VV[39];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk395)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1764;}
	bds_unwind1;
	bds_unwind1;
	goto T1761;
	goto T1764;
T1764:;
	base[11]= VV[47];
	base[12]= VV[48];
	base[13]= VV[229];
	base[14]= (V471);
	base[15]= VV[39];
	vs_top=(vs_base=base+11)+5;
	Lcerror();
	vs_top=sup;
	base[11]= (VV[50]->s.s_dbind);
	base[12]= VV[51];
	base[13]= VV[229];
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
	V471= vs_base[0];
	base[11]= (VV[50]->s.s_dbind);
	base[12]= VV[52];
	vs_top=(vs_base=base+11)+2;
	Lformat();
	vs_top=sup;
	goto T1763;
	goto T1761;
T1761:;
	{object V475;
	object V476;
	V475= STREF(object,(V471),12);
	base[9]= VV[230];
	{object V477;
	object V478= (V469);
	if(V478==Cnil){
	base[10]= Cnil;
	goto T1792;}
	base[11]=V477=MMcons(Cnil,Cnil);
	goto T1793;
T1793:;
	(V477->c.c_car)= symbol_name((V478->c.c_car));
	if((V478=MMcdr(V478))==Cnil){
	base[10]= base[11];
	goto T1792;}
	V477=MMcdr(V477)=MMcons(Cnil,Cnil);
	goto T1793;}
	goto T1792;
T1792:;
	base[11]= VV[231];
	base[12]= (V470);
	base[13]= VV[232];
	base[14]= (V474);
	base[15]= VV[233];
	{object V479;
	object V480= (V472);
	if(V480==Cnil){
	base[16]= Cnil;
	goto T1800;}
	base[17]=V479=MMcons(Cnil,Cnil);
	goto T1801;
T1801:;
	if(!(type_of((V480->c.c_car))==t_cons||((V480->c.c_car))==Cnil)){
	goto T1804;}
	(V479->c.c_car)= (V480->c.c_car);
	goto T1802;
	goto T1804;
T1804:;
	(V479->c.c_car)= make_cons((V480->c.c_car),Cnil);
	goto T1802;
T1802:;
	if((V480=MMcdr(V480))==Cnil){
	base[16]= base[17];
	goto T1800;}
	V479=MMcdr(V479)=MMcons(Cnil,Cnil);
	goto T1801;}
	goto T1800;
T1800:;
	base[17]= VV[234];
	base[18]= (V473);
	vs_top=(vs_base=base+9)+10;
	(void) (*Lnk396)();
	vs_top=sup;
	V476= vs_base[0];
	{register object V482;
	register object V483;
	V482= (V469);
	V483= CMPcar((V482));
	goto T1812;
T1812:;
	if(!(((V482))==Cnil)){
	goto T1813;}
	goto T1808;
	goto T1813;
T1813:;
	{register object V484;
	register object V485;
	register object V486;
	V484= symbol_name((V483));
	V485= (V475);
	V486= (V476);
	base[11]= (V484);
	base[12]= (V485);
	base[13]= (V486);
	vs_top=(vs_base=base+11)+3;
	siLhash_set();
	vs_top=sup;}
	V482= CMPcdr((V482));
	V483= CMPcar((V482));
	goto T1812;}
	goto T1808;
T1808:;
	base[9]= (V476);
	vs_top=(vs_base=base+9)+1;
	return;}
	}
}
/*	function definition for LOOP-FOR-BEING	*/

static void L99()
{register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_check;
	{object V487;
	object V488;
	object V489;
	V487=(base[0]);
	V488=(base[1]);
	V489=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V490;
	object V491;
	object V492;
	object V493;
	object V494;
	V490= Cnil;
	V491= Cnil;
	V492= Cnil;
	V493= Cnil;
	V494= Cnil;
	base[3]= (V488);
	base[4]= VV[235];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk362)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1831;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V490= vs_base[0];
	goto T1829;
	goto T1831;
T1831:;
	base[3]= CMPcar((VV[88]->s.s_dbind));
	base[4]= VV[158];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1837;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V492= Ct;
	base[3]= CMPcar((VV[88]->s.s_dbind));
	base[4]= VV[236];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk362)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1844;}
	base[3]= VV[237];
	base[4]= CMPcar((VV[88]->s.s_dbind));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1844;
T1844:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V490= vs_base[0];
	V495= list(2,VV[238],(V488));
	V494= make_cons(/* INLINE-ARGS */V495,Cnil);
	goto T1829;
	goto T1837;
T1837:;
	base[3]= VV[239];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1829;
T1829:;
	if(type_of((V490))==t_symbol){
	goto T1858;}
	base[3]= VV[240];
	base[4]= (V490);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1856;
	goto T1858;
T1858:;
	base[3]= (V490);
	base[4]= STREF(object,(VV[99]->s.s_dbind),12);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk360)();
	vs_top=sup;
	V491= vs_base[0];
	if(((V491))!=Cnil){
	goto T1863;}
	base[3]= VV[241];
	base[4]= (V490);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1856;
	goto T1863;
T1863:;
	if(((V492))==Cnil){
	goto T1856;}
	if((STREF(object,(V491),8))!=Cnil){
	goto T1856;}
	base[3]= VV[242];
	base[4]= (V490);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1856;
T1856:;
	{object V496;
	object V497;
	object V498;
	V496= STREF(object,(V491),12);
	base[3]= STREF(object,(V491),4);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk397)();
	vs_top=sup;
	V499= vs_base[0];
	V497= nconc((V494),V499);
	V498= STREF(object,(V491),16);
	if(!(type_of((V496))==t_symbol)){
	goto T1883;}
	base[3]= (V496);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V496= vs_base[0];
	goto T1883;
T1883:;
	if(((V492))==Cnil){
	goto T1890;}
	base[3]= (V496);
	base[4]= (V487);
	base[5]= (V489);
	base[6]= (V497);
	base[7]= VV[243];
	base[8]= Ct;
	{object V500;
	V500= (V498);
	 vs_top=base+9;
	 while(V500!=Cnil)
	 {vs_push((V500)->c.c_car);V500=(V500)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V493= vs_base[0];
	goto T1888;
	goto T1890;
T1890:;
	base[3]= (V496);
	base[4]= (V487);
	base[5]= (V489);
	base[6]= (V497);
	{object V501;
	V501= (V498);
	 vs_top=base+7;
	 while(V501!=Cnil)
	 {vs_push((V501)->c.c_car);V501=(V501)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	vs_top=sup;
	V493= vs_base[0];
	goto T1888;
T1888:;}
	if(((VV[104]->s.s_dbind))==Cnil){
	goto T1904;}
	base[3]= VV[244];
	base[4]= (VV[104]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1904;
T1904:;
	V503 = CMPmake_fixnum((long)length((V493)));
	{register object x= V503,V502= VV[245];
	while(V502!=Cnil)
	if(eql(x,V502->c.c_car)){
	goto T1909;
	}else V502=V502->c.c_cdr;}
	base[3]= VV[246];
	base[4]= (V490);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1909;
T1909:;
	{register object V504;
	register object V505;
	V504= CMPcar((V493));
	V505= Cnil;
	goto T1917;
T1917:;
	if(((V504))!=Cnil){
	goto T1918;}
	goto T1914;
	goto T1918;
T1918:;
	V505= CMPcar((V504));
	if(!(type_of((V505))!=t_cons)){
	goto T1924;}
	base[3]= (V505);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	goto T1922;
	goto T1924;
T1924:;
	base[3]= CMPcar((V505));
	base[4]= CMPcadr((V505));
	base[5]= CMPcaddr((V505));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	goto T1922;
T1922:;
	V504= CMPcdr((V504));
	goto T1917;}
	goto T1914;
T1914:;
	V506= reverse(CMPcadr((V493)));
	(VV[108]->s.s_dbind)= nconc(/* INLINE-ARGS */V506,(VV[108]->s.s_dbind));
	base[3]= CMPcddr((V493));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for NAMED-VARIABLE	*/

static void L100()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V507;
	V507=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V508;
	base[1]= (V507);
	base[2]= (VV[104]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	V508= vs_base[0];
	if(((V508))!=Cnil){
	goto T1942;}
	vs_base=vs_top;
	(void) (*Lnk334)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1942;
T1942:;
	base[1]= (V508);
	base[2]= (VV[104]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk399)();
	vs_top=sup;
	(VV[104]->s.s_dbind)= vs_base[0];
	base[1]= CMPcdr((V508));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	function definition for LOOP-COLLECT-PREPOSITIONAL-PHRASES	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V509;
	object V510;
	object V511;
	V509=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1952;}
	V510=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1953;}
	V511=(base[2]);
	vs_top=sup;
	goto T1954;
	goto T1952;
T1952:;
	V510= Cnil;
	goto T1953;
T1953:;
	V511= Cnil;
	goto T1954;
T1954:;
	base[3]=make_cclosure_new(LC102,Cnil,Cnil,Cdata);
	base[3]=MMcons(base[3],Cnil);
	{object V512;
	object V513;
	register object V514;
	register object V515;
	object V516;
	object V517;
	{object V518;
	object V519= (V511);
	if(V519==Cnil){
	V516= Cnil;
	goto T1957;}
	base[4]=V518=MMcons(Cnil,Cnil);
	goto T1958;
T1958:;
	base[6]= CMPcar((V519->c.c_car));
	base[7]= (V509);
	base[8]= VV[20];
	base[9]= (base[3]->c.c_car);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk380)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lcopy_list();
	vs_top=sup;
	(V518->c.c_cdr)= vs_base[0];
	while(MMcdr(V518)!=Cnil)V518=MMcdr(V518);
	if((V519=MMcdr(V519))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V516= base[4];
	goto T1957;}
	goto T1958;}
	goto T1957;
T1957:;
	{object V521;
	object V522= (V511);
	if(V522==Cnil){
	V517= Cnil;
	goto T1965;}
	base[4]=V521=MMcons(Cnil,Cnil);
	goto T1966;
T1966:;
	(V521->c.c_car)= CMPcar((V522->c.c_car));
	if((V522=MMcdr(V522))==Cnil){
	V517= base[4];
	goto T1965;}
	V521=MMcdr(V521)=MMcons(Cnil,Cnil);
	goto T1966;}
	goto T1965;
T1965:;
	V512= Cnil;
	V513= (V511);
	V514= Cnil;
	V515= Cnil;
	goto T1969;
T1969:;
	if(((VV[88]->s.s_dbind))!=Cnil){
	goto T1970;}
	base[4]= nreverse((V513));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1970;
T1970:;
	V512= CMPcar((VV[88]->s.s_dbind));
	{register object V523;
	register object V524;
	V523= (V509);
	V524= CMPcar((V523));
	goto T1980;
T1980:;
	if(!(((V523))==Cnil)){
	goto T1981;}
	goto T1976;
	goto T1981;
T1981:;
	base[5]= (V512);
	base[6]= (V524);
	vs_top=(vs_base=base+5)+2;
	L102(base);
	vs_top=sup;
	V515= vs_base[0];
	if(((V515))==Cnil){
	goto T1985;}
	V514= (V524);
	goto T1976;
	goto T1985;
T1985:;
	V523= CMPcdr((V523));
	V524= CMPcar((V523));
	goto T1980;}
	goto T1976;
T1976:;
	if(((V514))==Cnil){
	goto T1999;}
	{register object x= (V515),V525= (V516);
	while(V525!=Cnil)
	if(eql(x,V525->c.c_car)){
	goto T2003;
	}else V525=V525->c.c_cdr;
	goto T2001;}
	goto T2003;
T2003:;
	{register object x= (V515),V526= (V517);
	while(V526!=Cnil)
	if(eql(x,V526->c.c_car)){
	goto T2007;
	}else V526=V526->c.c_cdr;
	goto T2006;}
	goto T2007;
T2007:;
	base[4]= VV[247];
	goto T2004;
	goto T2006;
T2006:;
	base[4]= VV[248];
	goto T2004;
T2004:;
	base[5]= (V512);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2001;
T2001:;
	if(!(type_of((V514))==t_cons||((V514))==Cnil)){
	goto T2012;}
	V517= append((V514),(V517));
	goto T2010;
	goto T2012;
T2012:;
	V517= make_cons((V514),(V517));
	goto T2010;
T2010:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	{object V527;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V528= vs_base[0];
	V527= list(2,(V515),V528);
	V513= make_cons((V527),(V513));
	goto T1997;}
	goto T1999;
T1999:;
	if(((V510))==Cnil){
	goto T2019;}
	base[4]= (V512);
	base[5]= VV[249];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2019;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	{register object V529;
	object V530;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V529= vs_base[0];
	V530= Cnil;
	goto T2028;
T2028:;
	if((CMPcadr((V529)))==Cnil){
	goto T2031;}
	base[4]= CMPcar((V529));
	base[5]= (VV[104]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk398)();
	vs_top=sup;
	V530= vs_base[0];
	if(((V530))==Cnil){
	goto T2035;}
	base[4]= VV[250];
	base[5]= CMPcar((V529));
	base[6]= CMPcadr((V529));
	base[7]= CMPcadr((V530));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2031;
	goto T2035;
T2035:;
	{object V531;
	V531= make_cons(CMPcar((V529)),CMPcadr((V529)));
	(VV[104]->s.s_dbind)= make_cons((V531),(VV[104]->s.s_dbind));}
	goto T2031;
T2031:;
	if(((VV[88]->s.s_dbind))==Cnil){
	goto T2047;}
	if(!(type_of(CMPcar((VV[88]->s.s_dbind)))==t_symbol)){
	goto T2046;}
	goto T2047;
T2047:;
	goto T1997;
	goto T2046;
T2046:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V529= vs_base[0];
	goto T2028;}
	goto T2019;
T2019:;
	base[4]= nreverse((V513));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1997;
T1997:;
	V514= Cnil;
	V515= Cnil;
	goto T1969;}
	}
}
/*	function definition for LOOP-SEQUENCER	*/

static void L103()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_check;
	{object V532;
	register object V533;
	object V534;
	object V535;
	object V536;
	object V537;
	object V538;
	object V539;
	object V540;
	object V541;
	V532=(base[0]);
	V533=(base[1]);
	V534=(base[2]);
	V535=(base[3]);
	V536=(base[4]);
	V537=(base[5]);
	V538=(base[6]);
	V539=(base[7]);
	V540=(base[8]);
	V541=(base[9]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V542;
	object V543;
	object V544;
	object V545;
	object V546;
	object V547;
	object V548;
	register object V549;
	register object V550;
	object V551;
	object V552;
	object V553;
	object V554;
	object V555;
	object V556;{object V558;
	base[10]= (V533);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	V558= vs_base[0];
	if(V558==Cnil)goto T2060;
	V557= V558;
	goto T2059;
	goto T2060;
T2060:;}
	V557= small_fixnum(0);
	goto T2059;
T2059:;
	V546= one_plus(V557);
	V542= Cnil;
	V543= Cnil;
	V544= Cnil;
	V545= Cnil;
	V547= Ct;
	V548= Cnil;
	V549= Cnil;
	V550= Cnil;
	V551= Cnil;
	V552= Cnil;
	V553= Cnil;
	V554= Cnil;
	V555= Cnil;
	V556= Cnil;
	if(((V535))==Cnil){
	goto T2063;}
	base[10]= (V535);
	base[11]= Cnil;
	base[12]= (V536);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	goto T2063;
T2063:;
	{register object V559;
	register object V560;
	register object V561;
	object V562;
	V559= (V541);
	V560= Cnil;
	V561= Cnil;
	V562= Cnil;
	goto T2071;
T2071:;
	if(((V559))!=Cnil){
	goto T2072;}
	goto T2069;
	goto T2072;
T2072:;
	V560= CMPcaar((V559));
	V561= CMPcadar((V559));
	{object V563= (V560);
	if((V563!= VV[400])
	&& (V563!= VV[238]))goto T2081;
	V543= Ct;
	base[10]= (V537);
	base[11]= (V561);
	base[12]= (V538);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	goto T2080;
	goto T2081;
T2081:;
	if((V563!= VV[401])
	&& (V563!= VV[251])
	&& (V563!= VV[253]))goto T2087;
	V551= Ct;
	if(!(((V560))==(VV[251]))){
	goto T2092;}
	V549= VV[252];
	goto T2090;
	goto T2092;
T2092:;
	if(!(((V560))==(VV[253]))){
	goto T2090;}
	V549= VV[254];
	goto T2090;
T2090:;
	base[10]= (V561);
	base[11]= (V533);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V561= vs_base[0];
	vs_base++;
	}else{
	V561= Cnil;}
	if(vs_base<vs_top){
	V553= vs_base[0];
	vs_base++;
	}else{
	V553= Cnil;}
	if(vs_base<vs_top){
	V552= vs_base[0];
	}else{
	V552= Cnil;}
	vs_top=sup;
	base[10]= (V532);
	base[11]= (V561);
	base[12]= (V533);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	goto T2080;
	goto T2087;
T2087:;
	if((V563!= VV[255])
	&& (V563!= VV[256])
	&& (V563!= VV[257])
	&& (V563!= VV[258])
	&& (V563!= VV[259]))goto T2105;
	base[10]= (V560);
	base[11]= VV[255];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2108;}
	V549= VV[254];
	V550= VV[254];
	goto T2106;
	goto T2108;
T2108:;
	base[10]= (V560);
	base[11]= VV[256];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2115;}
	V550= Ct;
	goto T2106;
	goto T2115;
T2115:;
	base[10]= (V560);
	base[11]= VV[257];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2121;}
	V549= VV[252];
	V550= VV[252];
	goto T2106;
	goto T2121;
T2121:;
	base[10]= (V560);
	base[11]= VV[258];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2128;}
	V549= VV[252];
	goto T2106;
	goto T2128;
T2128:;
	base[10]= (V560);
	base[11]= VV[259];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2106;}
	V549= VV[254];
	goto T2106;
T2106:;
	V554= Ct;
	base[10]= (V561);
	base[11]= (V533);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V561= vs_base[0];
	vs_base++;
	}else{
	V561= Cnil;}
	if(vs_base<vs_top){
	V555= vs_base[0];
	vs_base++;
	}else{
	V555= Cnil;}
	if(vs_base<vs_top){
	V556= vs_base[0];
	}else{
	V556= Cnil;}
	vs_top=sup;
	if(((V555))==Cnil){
	goto T2146;}
	V542= list(2,VV[221],(V556));
	goto T2144;
	goto T2146;
T2146:;
	base[11]= VV[260];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[11]= (V561);
	base[12]= (V533);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	V542= vs_base[0];
	goto T2144;
T2144:;
	goto T2080;
	goto T2105;
T2105:;
	if((V563!= VV[219]))goto T2152;
	base[10]= (V561);
	base[11]= (V533);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V561= vs_base[0];
	vs_base++;
	}else{
	V561= Cnil;}
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
	if(((V547))!=Cnil){
	goto T2080;}
	base[11]= VV[261];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V546= vs_base[0];
	base[10]= (V546);
	base[11]= (V561);
	base[12]= (V533);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	goto T2080;
	goto T2152;
T2152:;
	base[10]= VV[262];
	base[11]= (V560);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk354)();
	vs_top=sup;}
	goto T2080;
T2080:;
	if(((V562))==Cnil){
	goto T2166;}
	if(((V549))==Cnil){
	goto T2166;}
	if(((V549))==((V562))){
	goto T2166;}
	base[10]= VV[263];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2166;
T2166:;
	V562= (V549);
	V559= CMPcdr((V559));
	goto T2071;}
	goto T2069;
T2069:;
	if(((V537))==Cnil){
	goto T2179;}
	if(((V543))!=Cnil){
	goto T2179;}
	base[10]= VV[264];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2179;
T2179:;
	if(((V551))!=Cnil){
	goto T2185;}
	base[10]= (V532);
	V553= Ct;{object V564;
	base[12]= (V533);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	V564= vs_base[0];
	if(V564==Cnil)goto T2193;
	V552= V564;
	goto T2192;
	goto T2193;
T2193:;}
	V552= small_fixnum(0);
	goto T2192;
T2192:;
	base[11]= (V552);
	base[12]= (V533);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk392)();
	vs_top=sup;
	goto T2185;
T2185:;
	{register object x= (V549),V565= VV[265];
	while(V565!=Cnil)
	if(eql(x,V565->c.c_car)){
	goto T2200;
	}else V565=V565->c.c_cdr;
	goto T2199;}
	goto T2200;
T2200:;
	if(((V554))!=Cnil){
	goto T2202;}
	if(((V540))==Cnil){
	goto T2201;}
	goto T2202;
T2202:;
	if(((V554))!=Cnil){
	goto T2206;}
	base[11]= VV[266];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V542= vs_base[0];
	base[10]= (V542);
	base[11]= Cnil;
	base[12]= (V533);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	{object V566;
	V566= list(3,VV[11],(V542),(V540));
	(VV[108]->s.s_dbind)= make_cons((V566),(VV[108]->s.s_dbind));}
	goto T2206;
T2206:;
	if(((V550))==Cnil){
	goto T2219;}
	V544= VV[34];
	goto T2217;
	goto T2219;
T2219:;
	V544= VV[217];
	goto T2217;
T2217:;
	goto T2201;
T2201:;
	if(!(eql((V546),small_fixnum(1)))){
	goto T2223;}
	V548= list(2,VV[184],(V532));
	goto T2221;
	goto T2223;
T2223:;
	V548= list(3,VV[185],(V532),(V546));
	goto T2221;
T2221:;
	goto T2197;
	goto T2199;
T2199:;
	if(((V551))!=Cnil){
	goto T2225;}
	if(((V540))!=Cnil){
	goto T2228;}
	base[10]= VV[267];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2228;
T2228:;
	{object V567;
	V567= list(3,VV[11],(V532),list(2,VV[268],(V540)));
	(VV[108]->s.s_dbind)= make_cons((V567),(VV[108]->s.s_dbind));}
	goto T2225;
T2225:;
	if(((V540))==Cnil){
	goto T2234;}
	if(((V542))!=Cnil){
	goto T2234;}
	base[10]= (V533);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	V542= vs_base[0];
	V550= Ct;
	goto T2234;
T2234:;
	if(((V542))==Cnil){
	goto T2243;}
	if(((V550))==Cnil){
	goto T2248;}
	V544= VV[33];
	goto T2246;
	goto T2248;
T2248:;
	V544= VV[269];
	goto T2246;
T2246:;
	goto T2243;
T2243:;
	if(!(eql((V546),small_fixnum(1)))){
	goto T2252;}
	V548= list(2,VV[268],(V532));
	goto T2250;
	goto T2252;
T2252:;
	V548= list(3,VV[270],(V532),(V546));
	goto T2250;
T2250:;
	goto T2197;
T2197:;
	if(((V544))==Cnil){
	goto T2254;}
	base[10]= Ct;
	base[11]= (V532);
	base[12]= list(3,(V544),(V532),(V542));
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	V545= vs_base[0];
	goto T2254;
T2254:;
	if(((V539))==Cnil){
	goto T2261;}
	base[10]= (V534);
	base[11]= (V532);
	base[12]= (V539);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	V568= vs_base[0];
	V539= list(2,(V535),V568);
	goto T2261;
T2261:;
	{object V569;
	object V570;
	V569= (V545);
	V570= (V545);
	if(((V547))==Cnil){
	goto T2269;}
	if(((V553))==Cnil){
	goto T2269;}
	if(((V555))==Cnil){
	goto T2269;}
	base[10]= (V544);
	vs_top=(vs_base=base+10)+1;
	Lsymbol_function();
	vs_top=sup;
	V571= vs_base[0];
	V569= (
	V572 = V571,
	(type_of(V572) == t_sfun ?(*((V572)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V572)==t_vfun) ?
	(*((V572)->sfn.sfn_self)):
	(fcall.fun=(V572),fcalln))((V552),(V556)));
	if(((V569))==Cnil){
	goto T2269;}
	V570= Ct;
	goto T2269;
T2269:;
	base[10]= Ct;
	base[11]= (V532);
	base[12]= (V548);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk338)();
	vs_top=sup;
	V573= vs_base[0];
	base[10]= list(8,Cnil,list(2,(V532),V573),(V570),(V539),Cnil,Cnil,(V569),(V539));
	vs_top=(vs_base=base+10)+1;
	return;}}
	}
}
/*	function definition for LOOP-FOR-ARITHMETIC	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM91; VC91
	vs_check;
	{object V574;
	object V575;
	object V576;
	object V577;
	V574=(base[0]);
	V575=(base[1]);
	V576=(base[2]);
	V577=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V574);
	base[6]= (V576);
	base[7]= (VV[187]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk387)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= Ct;
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;
	base[10]= Cnil;
	base[11]= Cnil;
	base[12]= Cnil;
	base[14]= VV[271];
	base[15]= Cnil;
	V578= list(2,(V577),(V575));
	base[16]= make_cons(/* INLINE-ARGS */V578,Cnil);
	vs_top=(vs_base=base+14)+3;
	(void) (*Lnk397)();
	vs_top=sup;
	base[13]= vs_base[0];
	vs_top=(vs_base=base+4)+10;
	(void) (*Lnk402)();
	return;
	}
}
/*	function definition for LOOP-SEQUENCE-ELEMENTS-PATH	*/

static void L105()
{register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_check;
	{object V579;
	object V580;
	object V581;
	object V582;
	object V583;
	object V584;
	object V585;
	parse_key(vs_base+3,FALSE,FALSE,4,VV[403],VV[404],VV[405],VV[406]);
	V579=(base[0]);
	V580=(base[1]);
	V581=(base[2]);
	vs_top=sup;
	V582=(base[3]);
	V583=(base[4]);
	V584=(base[5]);
	V585=(base[6]);
	{object V586;
	object V587;
	base[11]= VV[272];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T2303;}
	V586= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2304;}
	V587= vs_base[0];
	vs_top=sup;
	goto T2305;
	goto T2303;
T2303:;
	V586= Cnil;
	goto T2304;
T2304:;
	V587= Cnil;
	goto T2305;
T2305:;
	{object V588;
	base[11]= VV[273];
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk407)();
	vs_top=sup;
	V588= vs_base[0];
	base[11]= (V586);
	base[12]= VV[214];
	base[13]= (V587);
	base[14]= (V579);
	if((V580)!=Cnil){
	base[15]= (V580);
	goto T2313;}
	base[15]= (V585);
	goto T2313;
T2313:;
	base[16]= (V588);
	base[17]= (V584);
	base[18]= list(3,(V582),(V588),(V586));
	base[19]= list(2,(V583),(V588));
	base[20]= (V581);
	vs_top=(vs_base=base+11)+10;
	(void) (*Lnk402)();
	vs_top=sup;
	V589= vs_base[0];
	base[11]= listA(3,Cnil,Cnil,V589);
	vs_top=(vs_base=base+11)+1;
	return;}}
	}
}
/*	function definition for LOOP-HASH-TABLE-ITERATION-PATH	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	bds_check;
	{object V590;
	object V591;
	object V592;
	register object V593;
	parse_key(vs_base+3,FALSE,FALSE,1,VV[408]);
	V590=(base[0]);
	V591=(base[1]);
	V592=(base[2]);
	vs_top=sup;
	V593=(base[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T2321;
T2321:;
	base[7]= (V593);
	base[8]= VV[274];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2322;}
	bds_unwind1;
	bds_unwind1;
	goto T2319;
	goto T2322;
T2322:;
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[275];
	base[10]= (V593);
	base[11]= VV[274];
	vs_top=(vs_base=base+7)+5;
	Lcerror();
	vs_top=sup;
	base[7]= (VV[50]->s.s_dbind);
	base[8]= VV[51];
	base[9]= VV[275];
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
	V593= vs_base[0];
	base[7]= (VV[50]->s.s_dbind);
	base[8]= VV[52];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	goto T2321;
	goto T2319;
T2319:;
	if((CMPcdr((V592)))!=Cnil){
	goto T2348;}
	{register object x= CMPcaar((V592)),V594= VV[276];
	while(V594!=Cnil)
	if(eql(x,V594->c.c_car)){
	goto T2349;
	}else V594=V594->c.c_cdr;}
	goto T2348;
T2348:;
	base[5]= VV[277];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2347;
	goto T2349;
T2349:;
	if(((V592))!=Cnil){
	goto T2347;}
	base[5]= VV[278];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2347;
T2347:;
	{object V595;
	object V596;
	object V597;
	register object V598;
	base[5]= VV[279];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V595= vs_base[0];
	base[5]= VV[280];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V596= vs_base[0];
	V597= Cnil;
	V598= Cnil;
	{object V599;
	object V600;
	if(!(((V593))==(VV[281]))){
	goto T2364;}
	base[5]= VV[282];
	goto T2362;
	goto T2364;
T2364:;
	base[5]= VV[281];
	goto T2362;
T2362:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T2366;}
	V599= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2367;}
	V600= vs_base[0];
	vs_top=sup;
	goto T2368;
	goto T2366;
T2366:;
	V599= Cnil;
	goto T2367;
T2367:;
	V600= Cnil;
	goto T2368;
T2368:;
	V600= Ct;
	vs_base=vs_top;
	(void) (*Lnk391)();
	vs_top=sup;
	V597= vs_base[0];
	{register object V601;
	register object V602;
	object V603;
	object V604;
	object V605;
	object V606;
	register object V607;
	V601= Cnil;
	V602= Cnil;
	base[10]= VV[283];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V603= vs_base[0];
	base[10]= VV[284];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V604= vs_base[0];
	base[10]= VV[285];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V605= vs_base[0];
	if((V590)!=Cnil){
	V606= (V590);
	goto T2381;}
	vs_base=vs_top;
	(void) (*Lnk334)();
	vs_top=sup;
	V606= vs_base[0];
	goto T2381;
T2381:;
	V608= list(3,(V606),Cnil,(V591));
	V609= list(2,(V595),CMPcadar((V592)));
	if((V600)==Cnil){
	V610= Cnil;
	goto T2383;}
	if((V599)==Cnil){
	V610= Cnil;
	goto T2383;}
	V611= list(2,(V599),Cnil);
	V610= make_cons(/* INLINE-ARGS */V611,Cnil);
	goto T2383;
T2383:;
	V607= listA(3,/* INLINE-ARGS */V608,/* INLINE-ARGS */V609,V610);
	if(!(((V593))==(VV[281]))){
	goto T2386;}
	V601= (V606);
	if((V600)==Cnil){
	V602= Cnil;
	goto T2390;}
	V602= (V599);
	goto T2390;
T2390:;
	goto T2384;
	goto T2386;
T2386:;
	if((V600)==Cnil){
	V601= Cnil;
	goto T2392;}
	V601= (V599);
	goto T2392;
T2392:;
	V602= (V606);
	goto T2384;
T2384:;
	{object V612;
	V612= list(2,VV[286],list(2,(V596),(V595)));
	(VV[109]->s.s_dbind)= make_cons((V612),(VV[109]->s.s_dbind));}
	if(!(type_of((V601))==t_cons)){
	goto T2397;}{object V613;
	V613= (V601);
	base[10]= VV[284];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V601= vs_base[0];
	V598= listA(3,V613,(V601),(V598));}
	{object V614;
	V614= list(2,(V601),Cnil);
	V607= make_cons((V614),(V607));}
	goto T2397;
T2397:;
	if(!(type_of((V602))==t_cons)){
	goto T2406;}{object V615;
	V615= (V602);
	base[10]= VV[283];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V602= vs_base[0];
	V598= listA(3,V615,(V602),(V598));}
	{object V616;
	V616= list(2,(V602),Cnil);
	V607= make_cons((V616),(V607));}
	goto T2406;
T2406:;
	V617= list(3,(V605),(V604),(V603));
	V618= make_cons((V596),Cnil);
	V619= list(3,VV[11],(V602),(V603));
	V620= list(4,VV[8],(V605),/* INLINE-ARGS */V619,list(3,VV[11],(V601),(V604)));
	base[10]= list(6,(V607),Cnil,Cnil,Cnil,list(2,VV[36],list(5,VV[287],/* INLINE-ARGS */V617,/* INLINE-ARGS */V618,/* INLINE-ARGS */V620,list(3,VV[11],(V597),(V605)))),(V598));
	vs_top=(vs_base=base+10)+1;
	return;}}}
	}
}
/*	function definition for LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static void L107()
{register object *base=vs_base;
	register object *sup=base+VM94; VC94
	vs_check;
	{object V621;
	object V622;
	register object V623;
	object V624;
	parse_key(vs_base+3,FALSE,FALSE,1,VV[409]);
	V621=(base[0]);
	V622=(base[1]);
	V623=(base[2]);
	vs_top=sup;
	V624=(base[3]);
	if(((V623))==Cnil){
	goto T2417;}
	if((CMPcdr((V623)))==Cnil){
	goto T2417;}
	base[5]= VV[288];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2415;
	goto T2417;
T2417:;
	if(((V623))==Cnil){
	goto T2415;}
	{register object x= CMPcaar((V623)),V625= VV[289];
	while(V625!=Cnil)
	if(eql(x,V625->c.c_car)){
	goto T2415;
	}else V625=V625->c.c_cdr;}
	base[5]= VV[290];
	base[6]= CMPcaar((V623));
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2415;
T2415:;
	if(type_of((V621))==t_symbol){
	goto T2428;}
	base[5]= VV[291];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2428;
T2428:;
	{object V626;
	object V627;
	object V628;
	object V629;
	base[5]= VV[292];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V626= vs_base[0];
	base[5]= VV[293];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk334)();
	vs_top=sup;
	V627= vs_base[0];
	if((V621)!=Cnil){
	V628= (V621);
	goto T2436;}
	vs_base=vs_top;
	(void) (*Lnk334)();
	vs_top=sup;
	V628= vs_base[0];
	goto T2436;
T2436:;{object V630;
	V630= CMPcadar((V623));
	if(V630==Cnil)goto T2438;
	V629= V630;
	goto T2437;
	goto T2438;
T2438:;}
	V629= VV[294];
	goto T2437;
T2437:;
	{object V631;
	V631= list(2,VV[295],listA(3,(V627),(V626),(V624)));
	(VV[109]->s.s_dbind)= make_cons((V631),(VV[109]->s.s_dbind));}
	V632= list(3,(V628),Cnil,(V622));
	V633= list(2,/* INLINE-ARGS */V632,list(2,(V626),(V629)));
	vs_base=vs_top;
	(void) (*Lnk391)();
	vs_top=sup;
	V634= vs_base[0];
	V635= list(2,V634,(V628));
	base[5]= list(6,/* INLINE-ARGS */V633,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[84],/* INLINE-ARGS */V635,make_cons((V627),Cnil))),Cnil);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for MAKE-ANSI-LOOP-UNIVERSE	*/

static void L108()
{register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_check;
	{object V636;
	V636=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V637;
	base[1]= VV[53];
	base[3]= VV[296];
	base[4]= VV[297];
	base[5]= VV[298];
	base[6]= VV[299];
	base[7]= VV[300];
	base[8]= VV[301];
	base[9]= VV[302];
	base[10]= VV[303];
	base[11]= VV[304];
	base[12]= VV[305];
	base[13]= VV[306];
	base[14]= VV[307];
	base[15]= list(2,VV[183],list(4,VV[308],VV[183],(VV[187]->s.s_dbind),VV[214]));
	base[16]= list(2,VV[309],list(4,VV[308],VV[183],(VV[187]->s.s_dbind),VV[214]));
	base[17]= VV[310];
	vs_top=(vs_base=base+3)+15;
	LlistA();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= VV[54];
	base[4]= VV[311];
	base[5]= VV[55];
	base[6]= VV[312];
	base[7]= VV[60];
	base[8]= VV[313];
	base[9]= VV[59];
	base[10]= Cnil;
	base[11]= VV[57];
	if(((V636))==Cnil){
	goto T2473;}
	base[12]= VV[314];
	goto T2471;
	goto T2473;
T2473:;
	base[12]= Ct;
	goto T2471;
T2471:;
	vs_top=(vs_base=base+1)+12;
	(void) (*Lnk410)();
	vs_top=sup;
	V637= vs_base[0];
	base[1]= VV[315];
	base[2]= VV[316];
	base[3]= (V637);
	base[4]= VV[233];
	base[5]= VV[317];
	base[6]= VV[234];
	base[7]= Cnil;
	base[8]= VV[232];
	base[9]= VV[318];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk411)();
	vs_top=sup;
	base[1]= VV[319];
	base[2]= VV[316];
	base[3]= (V637);
	base[4]= VV[233];
	base[5]= VV[320];
	base[6]= VV[234];
	base[7]= Cnil;
	base[8]= VV[232];
	base[9]= VV[321];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk411)();
	vs_top=sup;
	base[1]= VV[322];
	base[2]= VV[323];
	base[3]= (V637);
	base[4]= VV[233];
	base[5]= VV[324];
	base[6]= VV[234];
	base[7]= Cnil;
	base[8]= VV[232];
	base[9]= VV[325];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk411)();
	vs_top=sup;
	base[1]= VV[326];
	base[2]= VV[323];
	base[3]= (V637);
	base[4]= VV[233];
	base[5]= VV[327];
	base[6]= VV[234];
	base[7]= Cnil;
	base[8]= VV[232];
	base[9]= VV[328];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk411)();
	vs_top=sup;
	base[1]= VV[329];
	base[2]= VV[323];
	base[3]= (V637);
	base[4]= VV[233];
	base[5]= VV[330];
	base[6]= VV[234];
	base[7]= Cnil;
	base[8]= VV[232];
	base[9]= VV[331];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk411)();
	vs_top=sup;
	base[1]= (V637);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for LOOP-STANDARD-EXPANSION	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{register object V638;
	object V639;
	object V640;
	V638=(base[0]);
	V639=(base[1]);
	V640=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V638))==Cnil){
	goto T2526;}
	if(!(type_of(CMPcar((V638)))==t_symbol)){
	goto T2526;}
	base[3]= (V638);
	base[4]= (V639);
	base[5]= (V640);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk412)();
	return;
	goto T2526;
T2526:;
	{object V641;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V641= vs_base[0];
	V642= make_cons(VV[14],(V638));
	base[3]= list(3,VV[124],Cnil,list(4,VV[73],(V641),/* INLINE-ARGS */V642,list(2,VV[82],(V641))));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	macro definition for LOOP	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_check;
	vs_top=sup;
	{object V643=base[0]->c.c_cdr;
	base[2]= V643;}
	base[3]= base[2];
	base[4]= base[1];
	base[5]= (VV[332]->s.s_dbind);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk413)();
	return;
}
/*	local function IN-GROUP-P	*/

static void LC102(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{object V644;
	object V645;
	V644=(base[0]);
	V645=(base[1]);
	vs_top=sup;
	base[2]= (V644);
	base[3]= (V645);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk362)();
	vs_top=sup;
	V646= vs_base[0];
	base[2]= CMPcar(V646);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function IN-GROUP-P	*/

static void L102(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_check;
	{object V647;
	object V648;
	V647=(base[0]);
	V648=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V647);
	base[3]= (V648);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk362)();
	vs_top=sup;
	V649= vs_base[0];
	base[2]= CMPcar(V649);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function MAKE-ENDTEST	*/

static void L88(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{object V650;
	V650=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V650))!=Cnil){
	goto T2544;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2544;
T2544:;
	{register object x= Ct,V651= (V650);
	while(V651!=Cnil)
	if(eql(x,V651->c.c_car)){
	goto T2548;
	}else V651=V651->c.c_cdr;
	goto T2547;}
	goto T2548;
T2548:;
	base[1]= VV[197];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2547;
T2547:;
	V650= nreverse((V650));
	if((CMPcdr((V650)))!=Cnil){
	goto T2551;}
	V652= CMPcar((V650));
	goto T2549;
	goto T2551;
T2551:;
	V652= make_cons(VV[35],(V650));
	goto T2549;
T2549:;
	base[1]= list(3,VV[8],V652,VV[198]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function GET-CLAUSE	*/

static void L72(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V653;
	V653=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V654;
	V654= Cnil;
	goto T2555;
T2555:;
	{register object V655;
	register object V656;
	V655= CMPcar((VV[88]->s.s_dbind));
	bds_bind(VV[111],Cnil);
	V656= Cnil;
	if(type_of((V655))==t_symbol){
	goto T2561;}
	base[2]= VV[155];
	base[3]= (V655);
	base[4]= (V653);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	bds_unwind1;
	goto T2558;
	goto T2561;
T2561:;
	(VV[87]->s.s_dbind)= (VV[88]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[2]= CMPcar((VV[88]->s.s_dbind));
	base[3]= VV[156];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2569;}
	if((base0[4])==Cnil){
	goto T2569;}
	if(base0[3]!=Cnil){
	V657= base0[3];
	goto T2577;}
	vs_base=vs_top;
	(void) (*Lnk391)();
	vs_top=sup;
	base0[3]= vs_base[0];
	V657= base0[3];
	goto T2577;
T2577:;
	(VV[88]->s.s_dbind)= make_cons(V657,CMPcdr((VV[88]->s.s_dbind)));
	goto T2569;
T2569:;
	base[2]= (V655);
	base[3]= STREF(object,(VV[99]->s.s_dbind),0);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk360)();
	vs_top=sup;
	V656= vs_base[0];
	if(((V656))==Cnil){
	goto T2579;}
	base[3]= CMPcar((V656));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V658;
	V658= CMPcdr((V656));
	 vs_top=base+3;
	 while(V658!=Cnil)
	 {vs_push((V658)->c.c_car);V658=(V658)->c.c_cdr;}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[111]->s.s_dbind))==Cnil)){
	goto T2580;}
	goto T2579;
T2579:;
	base[2]= VV[157];
	base[3]= (V655);
	base[4]= (V653);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	bds_unwind1;
	goto T2558;
	goto T2580;
T2580:;
	base[2]= (VV[111]->s.s_dbind);
	base[3]= (V654);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V654= vs_base[0];
	bds_unwind1;}
	goto T2558;
T2558:;
	base0[4]= Cnil;
	base[1]= CMPcar((VV[88]->s.s_dbind));
	base[2]= VV[158];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2601;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T2599;
	goto T2601;
T2601:;
	if((CMPcdr((V654)))==Cnil){
	goto T2606;}
	V659= nreverse((V654));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V659);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2606;
T2606:;
	base[1]= CMPcar((V654));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2599;
T2599:;
	goto T2555;}
	}
}
/*	local function REPLICATE	*/

static void L64(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V660;
	object V661;
	V660=(base[0]);
	V661=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V661))!=t_cons)){
	goto T2611;}
	base[2]= (V660);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2611;
T2611:;
	base[2]= (V660);
	base[3]= CMPcar((V661));
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	vs_top=sup;
	V662= vs_base[0];
	base[2]= (V660);
	base[3]= CMPcdr((V661));
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	vs_top=sup;
	V663= vs_base[0];
	base[2]= make_cons(V662,V663);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function TRANSLATE	*/

static void L63(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_check;
	{register object V664;
	register object V665;
	V664=(base[0]);
	V665=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V664))!=Cnil){
	goto T2620;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2620;
T2620:;
	if(!(type_of((V664))!=t_cons)){
	goto T2623;}{object V666;
	base[3]= (V664);
	base[4]= STREF(object,(VV[99]->s.s_dbind),16);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V666= vs_base[0];
	if(V666==Cnil)goto T2626;
	base[2]= V666;
	goto T2625;
	goto T2626;
T2626:;}{object V667;
	base[3]= symbol_name((V664));
	base[4]= STREF(object,(VV[99]->s.s_dbind),20);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V667= vs_base[0];
	if(V667==Cnil)goto T2630;
	base[2]= V667;
	goto T2625;
	goto T2630;
T2630:;}
	base[3]= VV[144];
	base[4]= base0[1];
	base[5]= (V664);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T2625;
T2625:;
	base[3]= (V665);
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	return;
	goto T2623;
T2623:;
	if(!(type_of((V665))!=t_cons)){
	goto T2639;}
	base[2]= VV[145];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	return;
	goto T2639;
T2639:;
	base[2]= CMPcar((V664));
	base[3]= CMPcar((V665));
	vs_top=(vs_base=base+2)+2;
	L63(base0);
	vs_top=sup;
	V668= vs_base[0];
	base[2]= CMPcdr((V664));
	base[3]= CMPcdr((V665));
	vs_top=(vs_base=base+2)+2;
	L63(base0);
	vs_top=sup;
	V669= vs_base[0];
	base[2]= make_cons(V668,V669);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LIST-SIZE	*/

static void L40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM104; VC104
	vs_check;
	{object V670;
	V670=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V671;
	V671= 0;
	{register object V672;
	object V673;
	V672= (V670);
	V673= CMPcar((V672));
	goto T2654;
T2654:;
	if(!(((V672))==Cnil)){
	goto T2655;}
	base[2]= CMPmake_fixnum(V671);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2655;
T2655:;
	V674 = CMPmake_fixnum(V671);
	base[2]= (V673);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V675= vs_base[0];
	V671= fix(number_plus(V674,V675));
	V672= CMPcdr((V672));
	V673= CMPcar((V672));
	goto T2654;}}
	}
}
/*	local function MAKEBODY	*/

static void L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V676;
	V678= nreverse(base0[7]);
	base[0]= append(base0[2],/* INLINE-ARGS */V678);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V677= vs_base[0];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V680= vs_base[0];
	base[0]= append(base0[4],V680);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V679= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V681= vs_base[0];
	V682= make_cons(VV[76],V681);
	V683= append(V679,/* INLINE-ARGS */V682);
	V684= make_cons(VV[74],/* INLINE-ARGS */V683);
	V685= append(V677,/* INLINE-ARGS */V684);
	V676= make_cons(VV[73],/* INLINE-ARGS */V685);
	if((base0[9])==Cnil){
	goto T2680;}
	V686= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V686,Cnil),(V676));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T2680;
T2680:;
	base[0]= (V676);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static void L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{object V687;
	V687=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((CMPcdr((V687)))!=Cnil){
	goto T2683;}
	base[1]= CMPcar((V687));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2683;
T2683:;
	base[1]= make_cons(VV[14],(V687));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function PSIMP	*/

static void L33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM107; VC107
	vs_check;
	{object V688;
	V688=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V689;
	V689= Cnil;
	{register object V690;
	register object V691;
	V690= (V688);
	V691= CMPcar((V690));
	goto T2689;
T2689:;
	if(!(((V690))==Cnil)){
	goto T2690;}
	goto T2685;
	goto T2690;
T2690:;
	if(((V691))==Cnil){
	goto T2694;}
	{register object V692;
	V692= (V691);
	V689= make_cons((V692),(V689));}
	if(!(type_of((V691))==t_cons)){
	goto T2694;}
	{register object x= CMPcar((V691)),V693= VV[72];
	while(V693!=Cnil)
	if(eql(x,V693->c.c_car)){
	goto T2703;
	}else V693=V693->c.c_cdr;
	goto T2694;}
	goto T2703;
T2703:;
	goto T2685;
	goto T2694;
T2694:;
	V690= CMPcdr((V690));
	V691= CMPcar((V690));
	goto T2689;}
	goto T2685;
T2685:;
	base[1]= nreverse((V689));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function FIND-NON-NULL	*/

static void L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{object V694;
	V694=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V695;
	V695= (V694);
	goto T2710;
T2710:;
	if(type_of((V695))==t_cons){
	goto T2711;}
	base[1]= (V695);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2711;
T2711:;
	{register object V696;
	V696= CMPcar((V695));
	V695= CMPcdr((V695));
	base[1]= (V696);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2715;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2715;
T2715:;
	goto T2710;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static void L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{register object V697;
	register object V698;
	object V699;
	V697=(base[0]);
	V698=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2724;}
	V699=(base[2]);
	vs_top=sup;
	goto T2725;
	goto T2724;
T2724:;
	V699= Cnil;
	goto T2725;
T2725:;
	{register object V700;
	V700= (V697);
	if(!(((V700))==Cnil)){
	goto T2728;}
	if(!(type_of((V698))==t_cons)){
	goto T2731;}
	if(!((CMPcar((V698)))==(VV[62]))){
	goto T2734;}
	{object V701;
	object V702= CMPcdr((V698));
	if(V702==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V701=MMcons(Cnil,Cnil);
	goto T2736;
T2736:;
	{register object V703;
	V703= (V702->c.c_car);
	if(type_of((V703))==t_cons){
	goto T2738;}
	(V701->c.c_cdr)= Cnil;
	goto T2737;
	goto T2738;
T2738:;
	if(!((((CMPcar((V703)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2742;}
	goto T2740;
	goto T2742;
T2742:;
	if(!(((type_of(CMPcadr((V703)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2744;}
	goto T2740;
	goto T2744;
T2744:;
	base[4]= (V703);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V703= vs_base[0];
	if(((type_of((V703))==t_symbol?Ct:Cnil))==Cnil){
	goto T2740;}
	(V701->c.c_cdr)= Cnil;
	goto T2737;
	goto T2740;
T2740:;
	(V701->c.c_cdr)= make_cons((V703),Cnil);}
	goto T2737;
T2737:;
	while(MMcdr(V701)!=Cnil)V701=MMcdr(V701);
	if((V702=MMcdr(V702))==Cnil){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2736;}
	goto T2734;
T2734:;
	base[3]= make_cons((V698),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2731;
T2731:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2728;
T2728:;
	if(!(type_of((V700))==t_cons)){
	goto T2750;}
	{object V704;
	object V705;
	object V706;
	object V707;
	V704= CMPcar((V697));
	V705= CMPcdr((V697));
	base[7]= (V704);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V706= vs_base[0];
	base[7]= (V705);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V707= vs_base[0];
	if(((V706))!=Cnil){
	goto T2758;}
	if(((V707))==Cnil){
	goto T2759;}
	goto T2758;
T2758:;
	if(((V707))==Cnil){
	goto T2764;}
	{register object V709;
	object V710;
	if((V699)!=Cnil){
	V709= (V699);
	goto T2766;}
	V709= (VV[66]->s.s_dbind);
	goto T2766;
T2766:;
	base[9]= (V704);
	base[10]= list(2,VV[65],(V709));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V711= vs_base[0];
	V712= list(3,VV[11],(V709),list(2,VV[10],(V709)));
	base[9]= (V705);
	base[10]= (V709);
	base[11]= (V709);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V713= vs_base[0];
	V714= make_cons(/* INLINE-ARGS */V712,V713);
	V710= append(V711,/* INLINE-ARGS */V714);
	if((V699)==Cnil){
	goto T2776;}
	if(((V709))==((V698))){
	goto T2780;}
	V716= list(3,VV[11],(V709),(V698));
	V715= make_cons(/* INLINE-ARGS */V716,Cnil);
	goto T2778;
	goto T2780;
T2780:;
	V715= Cnil;
	goto T2778;
T2778:;
	base[9]= append(V715,(V710));
	vs_top=(vs_base=base+9)+1;
	return;
	goto T2776;
T2776:;
	V717= list(2,(V709),(V698));
	V718= listA(3,VV[29],make_cons(/* INLINE-ARGS */V717,Cnil),(V710));
	base[9]= make_cons(/* INLINE-ARGS */V718,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
	goto T2764;
T2764:;
	base[7]= (V704);
	base[8]= list(2,VV[65],(V698));
	base[9]= (V699);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
	goto T2759;
T2759:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
	goto T2750;
T2750:;
	if(((V697))==((V698))){
	goto T2786;}
	V719= list(3,VV[11],(V697),(V698));
	base[3]= make_cons(/* INLINE-ARGS */V719,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2786;
T2786:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function MAKETABLE	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM110; VC110
	vs_check;
	{object V720;
	V720=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V721;
	object V722;
	V721= CMPmake_fixnum((long)length((V720)));
	base[3]= VV[61];
	if(!(number_compare((V721),small_fixnum(10))<0)){
	goto T2793;}
	base[4]= small_fixnum(10);
	goto T2791;
	goto T2793;
T2793:;
	base[4]= (V721);
	goto T2791;
T2791:;
	base[5]= VV[20];
	base[6]= (VV[414]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V722= vs_base[0];
	{register object V723;
	register object V724;
	V723= (V720);
	V724= CMPcar((V723));
	goto T2801;
T2801:;
	if(!(((V723))==Cnil)){
	goto T2802;}
	goto T2797;
	goto T2802;
T2802:;
	{object V725;
	object V727;
	V725= symbol_name(CMPcar((V724)));
	V727= CMPcadr((V724));
	base[6]= (V725);
	base[7]= V722;
	base[8]= (V727);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V723= CMPcdr((V723));
	V724= CMPcar((V723));
	goto T2801;}
	goto T2797;
T2797:;
	base[3]= (V722);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CDR-WRAP	*/

static void L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V728;
	register long V729;
	V728=(base[0]);
	V729=fix(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	goto T2818;
T2818:;
	if(!((V729)<=(4))){
	goto T2819;}switch(V729){
	case 1:
	goto T2825;
T2825:;
	V730= VV[10];
	goto T2823;
	case 2:
	goto T2826;
T2826:;
	V730= VV[15];
	goto T2823;
	case 3:
	goto T2827;
T2827:;
	V730= VV[16];
	goto T2823;
	case 4:
	goto T2828;
T2828:;
	V730= VV[17];
	goto T2823;
	default:
	goto T2829;
T2829:;
	V730= Cnil;
	goto T2823;}
	V730= Cnil;
	goto T2823;
T2823:;
	V728= list(2,V730,(V728));
	base[2]= (V728);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2819;
T2819:;
	V728= list(2,VV[17],(V728));
	V729= (long)(V729)-(4);
	goto T2818;
	}
}
static void LnkT413(){ call_or_link(VV[413],(void **)(void *)&Lnk413);} /* LOOP-STANDARD-EXPANSION */
static void LnkT412(){ call_or_link(VV[412],(void **)(void *)&Lnk412);} /* LOOP-TRANSLATE */
static void LnkT411(){ call_or_link(VV[411],(void **)(void *)&Lnk411);} /* ADD-LOOP-PATH */
static void LnkT410(){ call_or_link(VV[410],(void **)(void *)&Lnk410);} /* MAKE-STANDARD-LOOP-UNIVERSE */
static void LnkT407(){ call_or_link(VV[407],(void **)(void *)&Lnk407);} /* NAMED-VARIABLE */
static void LnkT402(){ call_or_link(VV[402],(void **)(void *)&Lnk402);} /* LOOP-SEQUENCER */
static void LnkT399(){ call_or_link(VV[399],(void **)(void *)&Lnk399);} /* DELETE */
static void LnkT398(){ call_or_link(VV[398],(void **)(void *)&Lnk398);} /* LOOP-TASSOC */
static void LnkT397(){ call_or_link(VV[397],(void **)(void *)&Lnk397);} /* LOOP-COLLECT-PREPOSITIONAL-PHRASES */
static void LnkT396(){ call_or_link(VV[396],(void **)(void *)&Lnk396);} /* MAKE-LOOP-PATH */
static void LnkT395(){ call_or_link(VV[395],(void **)(void *)&Lnk395);} /* STRUCTURE-SUBTYPE-P */
static void LnkT394(){ call_or_link(VV[394],(void **)(void *)&Lnk394);} /* LOOP-LIST-STEP */
static void LnkT393(){ call_or_link(VV[393],(void **)(void *)&Lnk393);} /* LOOP-CONSTANT-FOLD-IF-POSSIBLE */
static void LnkT392(){ call_or_link(VV[392],(void **)(void *)&Lnk392);} /* LOOP-MAKE-ITERATION-VARIABLE */
static void LnkT391(){ call_or_link(VV[391],(void **)(void *)&Lnk391);} /* LOOP-WHEN-IT-VARIABLE */
static void LnkT390(){ call_or_link(VV[390],(void **)(void *)&Lnk390);} /* LOOP-DISALLOW-ANONYMOUS-COLLECTORS */
static void LnkT389(){ call_or_link(VV[389],(void **)(void *)&Lnk389);} /* LOOP-NOTE-MINIMAX-OPERATION */
static void LnkT388(){ call_or_link(VV[388],(void **)(void *)&Lnk388);} /* MAKE-LOOP-MINIMAX */
static void LnkT387(){ call_or_link(VV[387],(void **)(void *)&Lnk387);} /* LOOP-CHECK-DATA-TYPE */
static void LnkT384(){ call_or_link(VV[384],(void **)(void *)&Lnk384);} /* LOOP-EMIT-FINAL-VALUE */
static void LnkT383(){ call_or_link(VV[383],(void **)(void *)&Lnk383);} /* LOOP-GET-COLLECTION-INFO */
static void LnkT382(){ call_or_link(VV[382],(void **)(void *)&Lnk382);} /* MAKE-LOOP-COLLECTOR */
static void LnkT381(){ call_or_link(VV[381],(void **)(void *)&Lnk381);} /* LOOP-VARIABLE-P */
static void LnkT380(){ call_or_link(VV[380],(void **)(void *)&Lnk380);} /* FIND */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* LOOP-DISALLOW-AGGREGATE-BOOLEANS */
static void LnkT378(){ call_or_link(VV[378],(void **)(void *)&Lnk378);} /* LOOP-OPTIONAL-TYPE */
static void LnkT375(){ call_or_link(VV[375],(void **)(void *)&Lnk375);} /* LOOP-EMIT-BODY */
static void LnkT374(){ call_or_link(VV[374],(void **)(void *)&Lnk374);} /* LOOP-GET-PROGN */
static void LnkT373(){ call_or_link(VV[373],(void **)(void *)&Lnk373);} /* LOOP-DISALLOW-CONDITIONAL */
static void LnkT372(){ call_or_link(VV[372],(void **)(void *)&Lnk372);} /* LOOP-CONSTANTP */
static void LnkT371(){ call_or_link(VV[371],(void **)(void *)&Lnk371);} /* LOOP-MAKE-VARIABLE */
static void LnkT370(){ call_or_link(VV[370],(void **)(void *)&Lnk370);} /* LOOP-DECLARE-VARIABLE */
static void LnkT369(){ call_or_link(VV[369],(void **)(void *)&Lnk369);} /* LOOP-TEQUAL */
static void LnkT368(){ call_or_link(VV[368],(void **)(void *)&Lnk368);} /* COERCE */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* FIND-IF-NOT */
static void LnkT366(){ call_or_link(VV[366],(void **)(void *)&Lnk366);} /* LOOP-CONSTRUCT-RETURN */
static void LnkT365(){ call_or_link(VV[365],(void **)(void *)&Lnk365);} /* LOOP-PSEUDO-BODY */
static void LnkT364(){ call_or_link(VV[364],(void **)(void *)&Lnk364);} /* LOOP-GET-COMPOUND-FORM */
static void LnkT363(){ call_or_link(VV[363],(void **)(void *)&Lnk363);} /* LOOP-GET-FORM */
static void LnkT362(){ call_or_link(VV[362],(void **)(void *)&Lnk362);} /* LOOP-TMEMBER */
static void LnkT361(){ call_or_link(VV[361],(void **)(void *)&Lnk361);} /* LOOP-HACK-ITERATION */
static void LnkT360(){ call_or_link(VV[360],(void **)(void *)&Lnk360);} /* LOOP-LOOKUP-KEYWORD */
static void LnkT359(){ call_or_link(VV[359],(void **)(void *)&Lnk359);} /* LOOP-POP-SOURCE */
static void LnkT358(){ call_or_link(VV[358],(void **)(void *)&Lnk358);} /* LOOP-BIND-BLOCK */
static void LnkT357(){ call_or_link(VV[357],(void **)(void *)&Lnk357);} /* LOOP-ITERATION-DRIVER */
static void LnkT356(){ call_or_link(VV[356],(void **)(void *)&Lnk356);} /* LOOP-BUILD-DESTRUCTURING-BINDINGS */
static void LnkT355(){ call_or_link(VV[355],(void **)(void *)&Lnk355);} /* SUBST-GENSYMS-FOR-NIL */
static void LnkT354(){ call_or_link(VV[354],(void **)(void *)&Lnk354);} /* LOOP-ERROR */
static void LnkT333(){ call_or_link(VV[333],(void **)(void *)&Lnk333);} /* SUBTYPEP */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* WARN */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* SPECIFIC-ERROR */
static void LnkT351(){ call_or_link(VV[351],(void **)(void *)&Lnk351);} /* LOOP-CONTEXT */
static void LnkT350(){ call_or_link(VV[350],(void **)(void *)&Lnk350);} /* SPECIAL-OPERATOR-P */
static void LnkT349(){ call_or_link(VV[349],(void **)(void *)&Lnk349);} /* ESTIMATE-CODE-SIZE-1 */
static void LnkT348(){ call_or_link(VV[348],(void **)(void *)&Lnk348);} /* DESTRUCTURING-SIZE */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* ESTIMATE-CODE-SIZE */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* LOOP-CODE-DUPLICATION-THRESHOLD */
static void LnkT346(){ call_or_link(VV[346],(void **)(void *)&Lnk346);} /* LOOP-OPTIMIZATION-QUANTITIES */
static void LnkT345(){ call_or_link(VV[345],(void **)(void *)&Lnk345);} /* LOOP-WARN */
static void LnkT344(){ call_or_link(VV[344],(void **)(void *)&Lnk344);} /* LOOP-MAKE-DESETQ */
static void LnkT343(){ call_or_link(VV[343],(void **)(void *)&Lnk343);} /* LOOP-MAKE-PSETQ */
static void LnkT342(){ call_or_link(VV[342],(void **)(void *)&Lnk342);} /* MAKE-LOOP-UNIVERSE */
static void LnkT340(){ call_or_link(VV[340],(void **)(void *)&Lnk340);} /* TYPEP */
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* HIDE-VARIABLE-REFERENCE */
static void LnkT336(){ call_or_link(VV[336],(void **)(void *)&Lnk336);} /* LOOP-TYPED-INIT */
static void LnkT335(){ call_or_link(VV[335],(void **)(void *)&Lnk335);} /* MAKE-LOOP-MINIMAX-INTERNAL */
static void LnkT334(){ call_or_link(VV[334],(void **)(void *)&Lnk334);} /* LOOP-GENTEMP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

