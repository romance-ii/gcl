
#include "cmpinclude.h"
#include "pcl_dlisp.h"
void init_pcl_dlisp(){do_init(VV);}
/*	function definition for EMIT-ONE-CLASS-READER	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[0];
	base[2]= small_fixnum(1);
	base[3]= (V1);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk170)();
	return;
	}
}
/*	function definition for EMIT-ONE-CLASS-WRITER	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V2;
	check_arg(1);
	V2=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[1];
	base[2]= small_fixnum(1);
	base[3]= (V2);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk170)();
	return;
	}
}
/*	function definition for EMIT-TWO-CLASS-READER	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V3;
	check_arg(1);
	V3=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[0];
	base[2]= small_fixnum(2);
	base[3]= (V3);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk170)();
	return;
	}
}
/*	function definition for EMIT-TWO-CLASS-WRITER	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V4;
	check_arg(1);
	V4=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[1];
	base[2]= small_fixnum(2);
	base[3]= (V4);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk170)();
	return;
	}
}
/*	function definition for EMIT-ONE-INDEX-READERS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V5;
	check_arg(1);
	V5=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[0];
	base[2]= Cnil;
	base[3]= (V5);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk171)();
	return;
	}
}
/*	function definition for EMIT-ONE-INDEX-WRITERS	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V6;
	check_arg(1);
	V6=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[1];
	base[2]= Cnil;
	base[3]= (V6);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk171)();
	return;
	}
}
/*	function definition for EMIT-N-N-READERS	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= Ct;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk171)();
	return;
}
/*	function definition for EMIT-N-N-WRITERS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[1];
	base[1]= Ct;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk171)();
	return;
}
/*	function definition for EMIT-CHECKING	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V7;
	object V8;
	check_arg(2);
	V7=(base[0]);
	V8=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= (V7);
	base[5]= (V8);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk172)();
	return;
	}
}
/*	function definition for EMIT-CACHING	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V9;
	object V10;
	check_arg(2);
	V9=(base[0]);
	V10=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= Ct;
	base[3]= Cnil;
	base[4]= (V9);
	base[5]= (V10);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk172)();
	return;
	}
}
/*	function definition for EMIT-IN-CHECKING-CACHE-P	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V11;
	check_arg(1);
	V11=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= Cnil;
	base[2]= Ct;
	base[3]= (V11);
	base[4]= Cnil;
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk172)();
	return;
	}
}
/*	function definition for EMIT-CONSTANT-VALUE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V12;
	check_arg(1);
	V12=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= Ct;
	base[2]= Ct;
	base[3]= (V12);
	base[4]= Cnil;
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk172)();
	return;
	}
}
/*	function definition for EMIT-DEFAULT-ONLY	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V13;
	register object V14;
	check_arg(2);
	V13=(base[0]);
	V14=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T41;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T41;}
	base[2]= (V13);
	base[3]= (V14);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk173)();
	return;
	goto T41;
T41:;
	{object V15;
	object V16;
	object V17;
	V15= (*(LnkLI174))((V13),(V14));
	base[5]= VV[4];
	base[6]= (V15);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk175)();
	vs_top=sup;
	V16= vs_base[0];
	if(((V14))==Cnil){
	goto T54;}
	V17= VV[5];
	goto T52;
	goto T54;
T54:;
	V17= Cnil;
	goto T52;
T52:;
	base[5]= VV[6];
	base[6]= (V15);
	base[7]= listA(4,VV[7],VV[8],(V14),append((V16),(V17)));
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk176)();
	return;}
	}
}
/*	macro definition for EMIT-DEFAULT-ONLY-MACRO	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V18=base[0]->c.c_cdr;
	if(endp(V18))invalid_macro_call();
	base[2]= (V18->c.c_car);
	V18=V18->c.c_cdr;
	if(endp(V18))invalid_macro_call();
	base[3]= (V18->c.c_car);
	V18=V18->c.c_cdr;
	if(!endp(V18))invalid_macro_call();}
	bds_bind(VV[3],Cnil);
	bds_bind(VV[2],Ct);
	base[7]= base[2];
	base[8]= base[3];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	function definition for GENERATING-LISP	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V19;
	object V20;
	object V21;
	check_arg(3);
	V19=(base[0]);
	V20=(base[1]);
	V21=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V22;
	object V23;
	object V24;
	object V25;
	{register object x= VV[4],V26= (V20);
	while(V26!=Cnil)
	if(x==(V26->c.c_car)){
	V22= V26;
	goto T62;
	}else V26=V26->c.c_cdr;
	V22= Cnil;}
	goto T62;
T62:;
	if((V22)==Cnil){
	V23= Cnil;
	goto T63;}
	base[7]= (V20);
	base[8]= (V22);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V23= vs_base[0];
	goto T63;
T63:;
	if(((V22))==Cnil){
	goto T68;}
	V24= append((V23),VV[9]);
	goto T66;
	goto T68;
T68:;
	V24= (V20);
	goto T66;
T66:;
	{register object x= VV[11],V28= (V19);
	while(V28!=Cnil)
	if(eql(x,V28->c.c_car)){
	goto T74;
	}else V28=V28->c.c_cdr;
	goto T73;}
	goto T74;
T74:;
	V27= VV[12];
	goto T71;
	goto T73;
T73:;
	V27= Cnil;
	goto T71;
T71:;
	V29= list(3,VV[13],(V24),list(4,VV[14],Cnil,VV[15],(V21)));
	V30= make_cons(/* INLINE-ARGS */V29,Cnil);
	V25= listA(3,VV[10],(V19),append(V27,/* INLINE-ARGS */V30));
	if(((VV[2]->s.s_dbind))==Cnil){
	goto T77;}
	base[7]= list(2,VV[16],(V25));
	goto T75;
	goto T77;
T77:;
	base[8]= (V25);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	base[7]= vs_base[0];
	goto T75;
T75:;
	base[8]= Cnil;
	vs_top=(vs_base=base+7)+2;
	return;}
	}
}
/*	function definition for EMIT-READERWRITER	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V31;
	object V32;
	register object V33;
	check_arg(3);
	V31=(base[0]);
	V32=(base[1]);
	V33=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T81;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T81;}
	base[3]= (V31);
	base[4]= (V32);
	base[5]= (V33);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk179)();
	return;
	goto T81;
T81:;
	{register object V34;
	register object V35;
	object V36;
	object V37;
	object V38;
	object V39;
	V37= (*(LnkLI180))(VV[17]);
	V38= (((V31))==(VV[0])?Ct:Cnil);
	V39= (*(LnkLI181))((V33),VV[18],VV[19]);
	V34= Cnil;
	V35= Cnil;
	V36= Cnil;
	{object V41= V31;
	if((V41!= VV[0]))goto T93;
	V34= (*(LnkLI182))(small_fixnum(0));
	V35= make_cons((V34),Cnil);
	goto T92;
	goto T93;
T93:;
	if((V41!= VV[1]))goto T97;
	V34= (*(LnkLI182))(small_fixnum(1));
	V42= (*(LnkLI182))(small_fixnum(0));
	V35= list(2,/* INLINE-ARGS */V42,(V34));
	goto T92;
	goto T97;
T97:;
	base[3]= VV[20];
	base[4]= VV[21];
	base[5]= VV[22];
	base[6]= VV[23];
	base[7]= V31;
	base[8]= VV[24];
	base[9]= VV[25];
	base[10]= VV[26];
	base[11]= VV[27];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk183)();
	vs_top=sup;}
	goto T92;
T92:;
	{object V44= V32;
	if(!eql(V44,VV[28]))goto T111;
	V36= VV[29];
	goto T110;
	goto T111;
T111:;
	if(!eql(V44,VV[30]))goto T113;
	V36= VV[31];
	goto T110;
	goto T113;
T113:;
	base[3]= VV[20];
	base[4]= VV[21];
	base[5]= VV[22];
	base[6]= VV[23];
	base[7]= V32;
	base[8]= VV[24];
	base[9]= VV[32];
	base[10]= VV[26];
	base[11]= VV[33];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk183)();
	vs_top=sup;}
	goto T110;
T110:;
	base[3]= (V36);
	base[4]= (V35);
	if(((V33))!=Cnil){
	goto T129;}
	V45= VV[35];
	goto T127;
	goto T129;
T129:;
	V45= Cnil;
	goto T127;
T127:;
	V46= list(2,VV[38],(V34));
	if(((V33))!=Cnil){
	goto T133;}
	V48= list(3,VV[39],VV[19],list(2,VV[40],(V34)));
	V47= make_cons(/* INLINE-ARGS */V48,Cnil);
	goto T131;
	goto T133;
T133:;
	V47= Cnil;
	goto T131;
T131:;
	V49= list(2,VV[41],(V34));
	V50= make_cons(/* INLINE-ARGS */V49,Cnil);
	V51= append(V47,/* INLINE-ARGS */V50);
	V52= make_cons(/* INLINE-ARGS */V46,/* INLINE-ARGS */V51);
	V53= list(2,VV[42],(V34));
	if(((V33))!=Cnil){
	goto T137;}
	V55= list(3,VV[39],VV[19],list(2,VV[43],(V34)));
	V54= make_cons(/* INLINE-ARGS */V55,Cnil);
	goto T135;
	goto T137;
T137:;
	V54= Cnil;
	goto T135;
T135:;
	V56= list(2,VV[44],(V34));
	V57= make_cons(/* INLINE-ARGS */V56,Cnil);
	V58= append(V54,/* INLINE-ARGS */V57);
	V59= list(2,VV[36],list(3,VV[37],/* INLINE-ARGS */V52,make_cons(/* INLINE-ARGS */V53,/* INLINE-ARGS */V58)));
	if(((V38))==Cnil){
	goto T141;}
	V60= VV[45];
	goto T139;
	goto T141;
T141:;
	V60= Cnil;
	goto T139;
T139:;
	V61= make_cons(/* INLINE-ARGS */V59,V60);
	V62= append(V45,/* INLINE-ARGS */V61);
	V63= list(2,VV[49],list(3,VV[50],VV[36],(V37)));
	if(!(eql(small_fixnum(2),(V32)))){
	goto T145;}
	V64= VV[53];
	goto T143;
	goto T145;
T145:;
	V64= Cnil;
	goto T143;
T143:;
	V65= list(2,VV[51],listA(3,VV[47],VV[52],V64));
	if(((V38))==Cnil){
	goto T149;}
	V67= list(3,VV[54],VV[55],list(3,VV[39],VV[56],(V39)));
	V66= make_cons(/* INLINE-ARGS */V67,Cnil);
	goto T147;
	goto T149;
T149:;
	V66= Cnil;
	goto T147;
T147:;
	V68= listA(5,VV[47],VV[48],/* INLINE-ARGS */V63,/* INLINE-ARGS */V65,V66);
	V69= listA(3,VV[57],VV[11],(V35));
	if(((V38))==Cnil){
	goto T153;}
	V70= VV[56];
	goto T151;
	goto T153;
T153:;
	V70= list(3,VV[58],(V39),CMPcar((V35)));
	goto T151;
T151:;
	base[5]= list(3,VV[34],/* INLINE-ARGS */V62,list(4,VV[46],/* INLINE-ARGS */V68,/* INLINE-ARGS */V69,V70));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk176)();
	return;}
	}
}
/*	local entry for function EMIT-SLOT-READ-FORM	*/

static object LI17(V74,V75,V76)

object V74;object V75;object V76;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(((V74))==Cnil){
	goto T156;}
	{object V77 = list(2,VV[59],(V75));
	VMR17(V77)}
	goto T156;
T156:;
	{object V78 = list(3,VV[60],(V76),(V75));
	VMR17(V78)}
	return Cnil;
}
/*	local entry for function EMIT-BOUNDP-CHECK	*/

static object LI18(V82,V83,V84)

object V82;object V83;object V84;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	V85= list(2,VV[56],(V82));
	V86= make_cons(/* INLINE-ARGS */V85,Cnil);
	{object V87 = list(3,VV[14],/* INLINE-ARGS */V86,list(4,VV[46],VV[61],listA(3,VV[57],(V83),(V84)),VV[56]));
	VMR18(V87)}
	return Cnil;
}
/*	local entry for function EMIT-SLOT-ACCESS	*/

static object LI19(V94,V95,V96,V97,V98,V99)

object V94;object V95;object V96;object V97;object V98;object V99;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V100;
	V100= (*(LnkLI181))((V95),(V97),(V96));
	{object V102= V94;
	if((V102!= VV[0]))goto T159;
	{object V103 = (*(LnkLI184))((V100),(V98),(V99));
	VMR19(V103)}
	goto T159;
T159:;
	if((V102!= VV[1]))goto T160;
	{object V104 = list(3,VV[58],(V100),CMPcar((V99)));
	VMR19(V104)}
	goto T160;
T160:;
	base[0]= VV[20];
	base[1]= VV[21];
	base[2]= VV[22];
	base[3]= VV[23];
	base[4]= V94;
	base[5]= VV[24];
	base[6]= VV[62];
	base[7]= VV[26];
	base[8]= VV[63];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk183)();
	vs_top=sup;
	{object V105 = vs_base[0];
	VMR19(V105)}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for EMIT-READERWRITER-MACRO	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V106=base[0]->c.c_cdr;
	if(endp(V106))invalid_macro_call();
	base[2]= (V106->c.c_car);
	V106=V106->c.c_cdr;
	if(endp(V106))invalid_macro_call();
	base[3]= (V106->c.c_car);
	V106=V106->c.c_cdr;
	if(endp(V106))invalid_macro_call();
	base[4]= (V106->c.c_car);
	V106=V106->c.c_cdr;
	if(!endp(V106))invalid_macro_call();}
	bds_bind(VV[3],Cnil);
	bds_bind(VV[2],Ct);
	base[8]= base[2];
	base[9]= base[3];
	base[10]= base[4];
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk170)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	function definition for EMIT-ONE-OR-N-INDEX-READERWRITER	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V107;
	register object V108;
	register object V109;
	check_arg(3);
	V107=(base[0]);
	V108=(base[1]);
	V109=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T174;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T174;}
	base[3]= (V107);
	base[4]= (V108);
	base[5]= (V109);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk185)();
	return;
	goto T174;
T174:;
	{register object V110;
	object V111;
	{object V113= V107;
	if((V113!= VV[0]))goto T183;
	V114= (*(LnkLI182))(small_fixnum(0));
	base[3]= make_cons(/* INLINE-ARGS */V114,Cnil);
	base[4]= VV[64];
	vs_top=(vs_base=base+3)+2;
	goto T182;
	goto T183;
T183:;
	if((V113!= VV[1]))goto T186;
	V115= (*(LnkLI182))(small_fixnum(0));
	base[3]= list(2,/* INLINE-ARGS */V115,(*(LnkLI182))(small_fixnum(1)));
	base[4]= VV[65];
	vs_top=(vs_base=base+3)+2;
	goto T182;
	goto T186;
T186:;
	base[3]= VV[20];
	base[4]= VV[21];
	base[5]= VV[22];
	base[6]= VV[23];
	base[7]= V107;
	base[8]= VV[24];
	base[9]= VV[66];
	base[10]= VV[26];
	base[11]= VV[67];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk183)();}
	goto T182;
T182:;
	if(vs_base>=vs_top){vs_top=sup;goto T198;}
	V110= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T199;}
	V111= vs_base[0];
	vs_top=sup;
	goto T200;
	goto T198;
T198:;
	V110= Cnil;
	goto T199;
T199:;
	V111= Cnil;
	goto T200;
T200:;
	if(((V108))!=Cnil){
	goto T204;}
	V116= VV[69];
	goto T202;
	goto T204;
T204:;
	V116= Cnil;
	goto T202;
T202:;
	V117= append(V116,VV[70]);
	base[3]= make_cons(VV[68],/* INLINE-ARGS */V117);
	base[4]= (V110);
	if(((V109))!=Cnil){
	goto T210;}
	V118= VV[71];
	goto T208;
	goto T210;
T210:;
	V118= Cnil;
	goto T208;
T208:;
	if(((V108))==Cnil){
	goto T214;}
	V119= VV[72];
	goto T212;
	goto T214;
T214:;
	V119= Cnil;
	goto T212;
T212:;
	V120= append(V118,V119);
	V121= (*(LnkLI187))((V107),(V109),VV[19],VV[18],VV[11],(V110));
	V122= listA(3,VV[57],VV[11],(V110));
	if(((V108))==Cnil){
	goto T218;}
	V123= VV[18];
	goto T216;
	goto T218;
T218:;
	V123= Cnil;
	goto T216;
T216:;
	if(((V109))!=Cnil){
	goto T222;}
	V124= VV[73];
	goto T220;
	goto T222;
T222:;
	V124= Cnil;
	goto T220;
T220:;
	base[5]= list(3,VV[14],/* INLINE-ARGS */V120,(VFUN_NARGS=6,(*(LnkLI186))((V110),(V111),/* INLINE-ARGS */V121,/* INLINE-ARGS */V122,V123,V124)));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk176)();
	return;}
	}
}
/*	macro definition for EMIT-ONE-OR-N-INDEX-READERWRITER-MACRO	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V125=base[0]->c.c_cdr;
	if(endp(V125))invalid_macro_call();
	base[2]= (V125->c.c_car);
	V125=V125->c.c_cdr;
	if(endp(V125))invalid_macro_call();
	base[3]= (V125->c.c_car);
	V125=V125->c.c_cdr;
	if(endp(V125))invalid_macro_call();
	base[4]= (V125->c.c_car);
	V125=V125->c.c_cdr;
	if(!endp(V125))invalid_macro_call();}
	bds_bind(VV[3],Cnil);
	bds_bind(VV[2],Ct);
	base[8]= base[2];
	base[9]= base[3];
	base[10]= base[4];
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk171)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	local entry for function EMIT-MISS	*/

static object LI23(object V127,object V126,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V128;
	object V129;
	object V130;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V128= V127;
	V129= V126;
	narg = narg - 2;
	if (narg <= 0) goto T228;
	else {
	V130= first;}
	--narg; goto T229;
	goto T228;
T228:;
	V130= Cnil;
	goto T229;
T229:;
	{object V131;
	if(((V130))==Cnil){
	goto T233;}
	V131= VV[74];
	goto T231;
	goto T233;
T233:;
	V131= Cnil;
	goto T231;
T231:;
	if(((V131))==Cnil){
	goto T236;}
	{object V132 = listA(3,VV[75],(V128),append((V129),(V131)));
	VMR23(V132)}
	goto T236;
T236:;
	{object V133 = listA(3,VV[57],(V128),append((V129),(V131)));
	VMR23(V133)}}
	va_end(ap);
	return Cnil;}
	}
/*	function definition for EMIT-CHECKING-OR-CACHING	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{register object V134;
	object V135;
	object V136;
	register object V137;
	check_arg(4);
	V134=(base[0]);
	V135=(base[1]);
	V136=(base[2]);
	V137=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T238;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T238;}
	base[4]= (V134);
	base[5]= (V135);
	base[6]= (V136);
	base[7]= (V137);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk188)();
	return;
	goto T238;
T238:;
	{object V138;
	object V139;
	object V140;
	V138= (*(LnkLI174))((V136),(V137));
	base[7]= VV[4];
	base[8]= (V138);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk175)();
	vs_top=sup;
	V139= vs_base[0];
	if(((V137))==Cnil){
	goto T253;}
	V140= VV[76];
	goto T251;
	goto T253;
T253:;
	V140= Cnil;
	goto T251;
T251:;
	if(((V134))!=Cnil){
	goto T258;}
	V141= VV[77];
	goto T256;
	goto T258;
T258:;
	V141= Cnil;
	goto T256;
T256:;
	V142= append(V141,VV[78]);
	base[7]= make_cons(VV[68],/* INLINE-ARGS */V142);
	base[8]= (V138);
	if(((V134))==Cnil){
	goto T264;}
	V143= VV[79];
	goto T262;
	goto T264;
T264:;
	V143= Cnil;
	goto T262;
T262:;
	if(((V135))==Cnil){
	goto T268;}
	if(((V134))==Cnil){
	goto T271;}
	V144= VV[8];
	goto T266;
	goto T271;
T271:;
	V144= Ct;
	goto T266;
	goto T268;
T268:;
	V144= listA(4,VV[7],VV[8],(V137),append((V139),(V140)));
	goto T266;
T266:;
	V145= (VFUN_NARGS=3,(*(LnkLI189))(VV[11],(V139),(V137)));
	if(((V134))==Cnil){
	goto T275;}
	V146= VV[8];
	goto T273;
	goto T275;
T275:;
	V146= Cnil;
	goto T273;
T273:;
	base[9]= list(3,VV[14],V143,(VFUN_NARGS=5,(*(LnkLI186))((V139),(V136),V144,/* INLINE-ARGS */V145,V146)));
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk176)();
	return;}
	}
}
/*	macro definition for EMIT-CHECKING-OR-CACHING-MACRO	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V147=base[0]->c.c_cdr;
	if(endp(V147))invalid_macro_call();
	base[2]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	if(endp(V147))invalid_macro_call();
	base[3]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	if(endp(V147))invalid_macro_call();
	base[4]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	if(endp(V147))invalid_macro_call();
	base[5]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	if(!endp(V147))invalid_macro_call();}
	bds_bind(VV[3],Cnil);
	bds_bind(VV[2],Ct);
	base[9]= base[2];
	base[10]= base[3];
	base[11]= base[4];
	base[12]= base[5];
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk172)();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	local entry for function EMIT-DLAP	*/

static object LI26(object V152,object V151,object V150,object V149,object V148,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V153;
	object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	va_start(ap,first);
	if(narg <5) too_few_arguments();
	V153= V152;
	V154= V151;
	V155= V150;
	V156= V149;
	V157= V148;
	narg = narg - 5;
	if (narg <= 0) goto T282;
	else {
	V158= first;}
	--narg; goto T283;
	goto T282;
T282:;
	V158= Cnil;
	goto T283;
T283:;
	{long V159;
	object V160;
	register object V161;
	V159= -1;
	{object V162;
	object V163= (V153);
	object V164= (V154);
	if(V163==Cnil||V164==Cnil){
	V160= Cnil;
	goto T286;}
	base[2]=V162=MMcons(Cnil,Cnil);
	goto T287;
T287:;
	if(((V164->c.c_car))==(Ct)){
	goto T290;}
	V159= (long)(V159)+(1);
	base[4]= Cnil;
	base[5]= VV[80];
	base[6]= CMPmake_fixnum(V159);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (VV[81]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	vs_top=sup;
	V167= vs_base[0];
	{object V169;
	V169= CMPcar((V158));
	V158= CMPcdr((V158));
	V168= (V169);}
	V170= list(2,V167,(VFUN_NARGS=4,(*(LnkLI190))((V164->c.c_car),(V163->c.c_car),VV[82],V168)));
	(V162->c.c_cdr)= make_cons(/* INLINE-ARGS */V170,Cnil);
	goto T288;
	goto T290;
T290:;
	(V162->c.c_cdr)= Cnil;
	goto T288;
T288:;
	while(MMcdr(V162)!=Cnil)V162=MMcdr(V162);
	if((V163=MMcdr(V163))==Cnil||(V164=MMcdr(V164))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V160= base[2];
	goto T286;}
	goto T287;}
	goto T286;
T286:;
	{object V171;
	object V172= (V160);
	if(V172==Cnil){
	V161= Cnil;
	goto T304;}
	base[2]=V171=MMcons(Cnil,Cnil);
	goto T305;
T305:;
	(V171->c.c_car)= CMPcar((V172->c.c_car));
	if((V172=MMcdr(V172))==Cnil){
	V161= base[2];
	goto T304;}
	V171=MMcdr(V171)=MMcons(Cnil,Cnil);
	goto T305;}
	goto T304;
T304:;
	if(((V161))!=Cnil){
	goto T307;}
	base[2]= VV[83];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T307;
T307:;
	V173= listA(6,VV[87],VV[88],VV[89],VV[90],VV[91],(V160));
	if((CMPcdr((V161)))==Cnil){
	goto T313;}
	V174= (*(LnkLI191))((V161),VV[82],(V157));
	goto T311;
	goto T313;
T313:;
	if(((V157))==Cnil){
	goto T316;}
	V174= (*(LnkLI192))(CMPcar((V161)),VV[82],(V157));
	goto T311;
	goto T316;
T316:;
	V174= (*(LnkLI193))(CMPcar((V161)),VV[82]);
	goto T311;
T311:;
	V175= list(5,VV[14],/* INLINE-ARGS */V173,VV[92],V174,list(3,VV[93],VV[85],(V155)));
	{object V176 = list(3,VV[84],VV[85],list(4,VV[86],/* INLINE-ARGS */V175,VV[82],list(3,VV[93],VV[85],(V156))));
	VMR26(V176)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EMIT-1-NIL-DLAP	*/

static object LI27(V179,V180)

object V179;object V180;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	V181= list(2,list(2,VV[94],(*(LnkLI194))((V179),(V180))),VV[95]);
	V182= list(3,VV[99],list(3,VV[54],(V179),VV[100]),VV[101]);
	V183= list(3,VV[105],VV[106],list(3,VV[99],list(3,VV[54],VV[107],(V179)),VV[108]));
	{object V184 = list(4,VV[34],/* INLINE-ARGS */V181,VV[96],list(3,VV[84],VV[97],list(5,VV[98],/* INLINE-ARGS */V182,VV[102],VV[103],list(4,VV[99],VV[104],/* INLINE-ARGS */V183,list(2,VV[109],(V180))))));
	VMR27(V184)}
	return Cnil;
}
/*	macro definition for GET-CACHE-VECTOR-LOCK-COUNT	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V185=base[0]->c.c_cdr;
	if(endp(V185))invalid_macro_call();
	base[2]= (V185->c.c_car);
	V185=V185->c.c_cdr;
	if(!endp(V185))invalid_macro_call();}
	V186= list(2,VV[110],list(2,VV[111],base[2]));
	base[3]= listA(3,VV[14],make_cons(/* INLINE-ARGS */V186,Cnil),VV[112]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function EMIT-1-T-DLAP	*/

static object LI29(V190,V191,V192)

object V190;object V191;object V192;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	V193= list(2,list(2,VV[94],(*(LnkLI194))((V190),(V191))),VV[113]);
	V194= list(3,VV[54],(V190),VV[117]);
	V195= list(4,VV[99],/* INLINE-ARGS */V194,list(3,VV[39],(V192),VV[118]),VV[119]);
	V196= list(3,VV[54],VV[124],(V190));
	V197= list(3,VV[105],VV[123],list(4,VV[99],/* INLINE-ARGS */V196,list(3,VV[39],(V192),VV[125]),VV[126]));
	V198= list(3,VV[84],VV[97],list(5,VV[98],/* INLINE-ARGS */V195,VV[120],VV[121],list(4,VV[99],VV[122],/* INLINE-ARGS */V197,list(2,VV[109],(V191)))));
	{object V199 = list(4,VV[14],/* INLINE-ARGS */V193,VV[114],list(5,VV[14],VV[115],VV[116],/* INLINE-ARGS */V198,list(3,VV[127],VV[128],list(2,VV[109],(V191)))));
	VMR29(V199)}
	return Cnil;
}
/*	local entry for function EMIT-GREATER-THAN-1-DLAP	*/

static object LI30(V203,V204,V205)

register object V203;object V204;register object V205;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V206;
	V207 = CMPmake_fixnum((long)length((V203)));
	if(((V205))==Cnil){
	goto T321;}
	V208= small_fixnum(1);
	goto T319;
	goto T321;
T321:;
	V208= small_fixnum(0);
	goto T319;
T319:;
	V209= number_plus(V207,V208);
	V206= (*(LnkLI195))(/* INLINE-ARGS */V209);
	V210= (*(LnkLI196))((V203),(V204));
	V211= list(3,VV[39],VV[135],list(3,VV[136],VV[137],list(3,VV[138],VV[139],(V206))));
	{object V213;
	object V214= (V203);
	if(V214==Cnil){
	V212= Cnil;
	goto T323;}
	base[0]=V213=MMcons(Cnil,Cnil);
	goto T324;
T324:;
	(V213->c.c_car)= list(3,VV[54],(V214->c.c_car),VV[141]);
	if((V214=MMcdr(V214))==Cnil){
	V212= base[0];
	goto T323;}
	V213=MMcdr(V213)=MMcons(Cnil,Cnil);
	goto T324;}
	goto T323;
T323:;
	V216= make_cons(VV[140],V212);
	if(((V205))==Cnil){
	goto T328;}
	V217= list(2,VV[142],list(3,VV[39],(V205),VV[143]));
	goto T326;
	goto T328;
T328:;
	V217= Cnil;
	goto T326;
T326:;
	V218= listA(3,VV[99],/* INLINE-ARGS */V216,append(V217,VV[144]));
	{object V220;
	object V221= (V203);
	if(V221==Cnil){
	V219= Cnil;
	goto T330;}
	base[0]=V220=MMcons(Cnil,Cnil);
	goto T331;
T331:;
	(V220->c.c_car)= list(3,VV[54],(V221->c.c_car),VV[150]);
	if((V221=MMcdr(V221))==Cnil){
	V219= base[0];
	goto T330;}
	V220=MMcdr(V220)=MMcons(Cnil,Cnil);
	goto T331;}
	goto T330;
T330:;
	V223= make_cons(VV[140],V219);
	if(((V205))==Cnil){
	goto T335;}
	V225= list(3,VV[39],(V205),VV[151]);
	V224= make_cons(/* INLINE-ARGS */V225,Cnil);
	goto T333;
	goto T335;
T335:;
	V224= Cnil;
	goto T333;
T333:;
	V226= list(3,VV[105],VV[148],list(3,VV[14],VV[149],listA(3,VV[99],/* INLINE-ARGS */V223,append(V224,VV[152]))));
	V227= list(3,VV[84],VV[97],list(6,VV[98],/* INLINE-ARGS */V211,/* INLINE-ARGS */V218,VV[145],VV[146],list(4,VV[99],VV[147],/* INLINE-ARGS */V226,list(2,VV[109],(V204)))));
	{object V228 = list(5,VV[14],VV[129],VV[130],/* INLINE-ARGS */V210,list(4,VV[14],VV[131],VV[132],list(5,VV[14],VV[133],VV[134],/* INLINE-ARGS */V227,list(3,VV[127],VV[153],list(2,VV[109],(V204))))));
	VMR30(V228)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EMIT-1-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI31(V231,V232)

object V231;object V232;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	V233= list(2,VV[154],list(3,VV[50],(V231),VV[155]));
	V234= make_cons(/* INLINE-ARGS */V233,Cnil);
	V235= list(3,VV[99],VV[157],list(2,VV[109],(V232)));
	V236= list(3,VV[136],VV[137],VV[158]);
	{object V238 = list(5,VV[14],/* INLINE-ARGS */V234,VV[156],/* INLINE-ARGS */V235,V236);
	VMR31(V238)}
	return Cnil;
}
/*	local entry for function EMIT-N-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI32(V241,V242)

object V241;object V242;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register long V244;
	long V245;
	V244= 0;
	V245= (long)length((V241));
	{object V246;
	object V247= (V241);
	if(V247==Cnil){
	V243= Cnil;
	goto T338;}
	base[0]=V246=MMcons(Cnil,Cnil);
	goto T341;
T341:;
	V249= list(2,VV[154],list(3,VV[50],(V247->c.c_car),VV[155]));
	V250= make_cons(/* INLINE-ARGS */V249,Cnil);
	V251= list(3,VV[99],VV[161],list(2,VV[109],(V242)));
	V244= (long)(V244)+(1);
	if(((long)({fixnum _t=(V244)%(4);((4)<0 && _t<=0) || ((4)>0 && _t>=0) ? _t : _t + (4);}))==0){
	goto T346;}
	if(!((V244)==(V245))){
	goto T347;}
	goto T346;
T346:;
	V253= list(3,VV[136],VV[137],VV[163]);
	V255= list(3,VV[39],VV[94],V253);
	V252= make_cons(/* INLINE-ARGS */V255,Cnil);
	goto T343;
	goto T347;
T347:;
	V252= Cnil;
	goto T343;
T343:;
	(V246->c.c_car)= listA(6,VV[14],/* INLINE-ARGS */V250,VV[160],/* INLINE-ARGS */V251,VV[162],V252);
	if((V247=MMcdr(V247))==Cnil){
	V243= base[0];
	goto T338;}
	V246=MMcdr(V246)=MMcons(Cnil,Cnil);
	goto T341;}}
	goto T338;
T338:;
	{object V256 = make_cons(VV[159],V243);
	VMR32(V256)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EMIT-FETCH-WRAPPER	*/

static object LI33(object V259,object V258,object V257,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V260;
	register object V261;
	object V262;
	register object V263;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V260= V259;
	V261= V258;
	V262= V257;
	narg = narg - 3;
	if (narg <= 0) goto T352;
	else {
	V263= first;}
	--narg; goto T353;
	goto T352;
T352:;
	V263= Cnil;
	goto T353;
T353:;
	{object V265= V260;
	if((V265!= VV[197]))goto T355;
	V266= list(2,VV[38],(V261));
	if(((V263))==Cnil){
	goto T358;}
	V268= list(3,VV[39],(V263),list(2,VV[40],(V261)));
	V267= make_cons(/* INLINE-ARGS */V268,Cnil);
	goto T356;
	goto T358;
T358:;
	V267= Cnil;
	goto T356;
T356:;
	V269= list(2,VV[41],(V261));
	V270= make_cons(/* INLINE-ARGS */V269,Cnil);
	V271= append(V267,/* INLINE-ARGS */V270);
	V272= make_cons(/* INLINE-ARGS */V266,/* INLINE-ARGS */V271);
	V273= list(2,VV[42],(V261));
	if(((V263))==Cnil){
	goto T362;}
	V275= list(3,VV[39],(V263),list(2,VV[43],(V261)));
	V274= make_cons(/* INLINE-ARGS */V275,Cnil);
	goto T360;
	goto T362;
T362:;
	V274= Cnil;
	goto T360;
T360:;
	V276= list(2,VV[44],(V261));
	V277= make_cons(/* INLINE-ARGS */V276,Cnil);
	V278= append(V274,/* INLINE-ARGS */V277);
	V279= make_cons(/* INLINE-ARGS */V273,/* INLINE-ARGS */V278);
	{object V280 = list(4,VV[37],/* INLINE-ARGS */V272,/* INLINE-ARGS */V279,list(2,Ct,list(2,VV[109],(V262))));
	VMR33(V280)}
	goto T355;
T355:;
	if((V265!= VV[198]))goto T364;
	if(((V263))==Cnil){
	goto T365;}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T365;
T365:;
	{object V281 = list(2,VV[165],(V261));
	VMR33(V281)}
	goto T364;
T364:;
	if((V265!= VV[199])
	&& (V265!= VV[200]))goto T369;
	if(((V263))==Cnil){
	goto T370;}
	base[0]= VV[166];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T370;
T370:;
	{object V282 = list(2,VV[167],(V261));
	VMR33(V282)}
	goto T369;
T369:;
	base[0]= VV[20];
	base[1]= VV[21];
	base[2]= VV[22];
	base[3]= VV[23];
	base[4]= V260;
	base[5]= VV[24];
	base[6]= VV[168];
	base[7]= VV[26];
	base[8]= VV[169];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk183)();
	vs_top=sup;
	{object V283 = vs_base[0];
	VMR33(V283)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static object  LnkTLI196(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[196],(void **)(void *)&LnkLI196,2,first,ap);va_end(ap);return V1;} /* EMIT-N-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION */
static object  LnkTLI195(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[195],(void **)(void *)&LnkLI195,1,first,ap);va_end(ap);return V1;} /* COMPUTE-LINE-SIZE */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[194],(void **)(void *)&LnkLI194,2,first,ap);va_end(ap);return V1;} /* EMIT-1-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION */
static object  LnkTLI193(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[193],(void **)(void *)&LnkLI193,2,first,ap);va_end(ap);return V1;} /* EMIT-1-NIL-DLAP */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,3,first,ap);va_end(ap);return V1;} /* EMIT-1-T-DLAP */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,3,first,ap);va_end(ap);return V1;} /* EMIT-GREATER-THAN-1-DLAP */
static object  LnkTLI190(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[190],(void **)(void *)&LnkLI190,first,ap);va_end(ap);return V1;} /* EMIT-FETCH-WRAPPER */
static object  LnkTLI189(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[189],(void **)(void *)&LnkLI189,first,ap);va_end(ap);return V1;} /* EMIT-MISS */
static void LnkT188(){ call_or_link(VV[188],(void **)(void *)&Lnk188);} /* EMIT-CHECKING-OR-CACHING-FUNCTION */
static object  LnkTLI187(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[187],(void **)(void *)&LnkLI187,6,first,ap);va_end(ap);return V1;} /* EMIT-SLOT-ACCESS */
static object  LnkTLI186(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[186],(void **)(void *)&LnkLI186,first,ap);va_end(ap);return V1;} /* EMIT-DLAP */
static void LnkT185(){ call_or_link(VV[185],(void **)(void *)&Lnk185);} /* EMIT-ONE-OR-N-INDEX-READERWRITER-FUNCTION */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[184],(void **)(void *)&LnkLI184,3,first,ap);va_end(ap);return V1;} /* EMIT-BOUNDP-CHECK */
static void LnkT183(){ call_or_link(VV[183],(void **)(void *)&Lnk183);} /* ERROR */
static object  LnkTLI182(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[182],(void **)(void *)&LnkLI182,1,first,ap);va_end(ap);return V1;} /* DFUN-ARG-SYMBOL */
static object  LnkTLI181(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[181],(void **)(void *)&LnkLI181,3,first,ap);va_end(ap);return V1;} /* EMIT-SLOT-READ-FORM */
static object  LnkTLI180(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[180],(void **)(void *)&LnkLI180,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FIELD */
static void LnkT179(){ call_or_link(VV[179],(void **)(void *)&Lnk179);} /* EMIT-READERWRITER-FUNCTION */
static void LnkT178(){ call_or_link(VV[178],(void **)(void *)&Lnk178);} /* COMPILE-LAMBDA */
static void LnkT177(){ call_or_link(VV[177],(void **)(void *)&Lnk177);} /* EMIT-DEFAULT-ONLY */
static void LnkT176(){ call_or_link(VV[176],(void **)(void *)&Lnk176);} /* GENERATING-LISP */
static void LnkT175(){ call_or_link(VV[175],(void **)(void *)&Lnk175);} /* REMOVE */
static object  LnkTLI174(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[174],(void **)(void *)&LnkLI174,2,first,ap);va_end(ap);return V1;} /* MAKE-DLAP-LAMBDA-LIST */
static void LnkT173(){ call_or_link(VV[173],(void **)(void *)&Lnk173);} /* EMIT-DEFAULT-ONLY-FUNCTION */
static void LnkT172(){ call_or_link(VV[172],(void **)(void *)&Lnk172);} /* EMIT-CHECKING-OR-CACHING */
static void LnkT171(){ call_or_link(VV[171],(void **)(void *)&Lnk171);} /* EMIT-ONE-OR-N-INDEX-READERWRITER */
static void LnkT170(){ call_or_link(VV[170],(void **)(void *)&Lnk170);} /* EMIT-READERWRITER */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

