
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
	(void) (*Lnk154)();
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
	(void) (*Lnk154)();
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
	(void) (*Lnk154)();
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
	(void) (*Lnk154)();
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
	(void) (*Lnk155)();
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
	(void) (*Lnk155)();
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
	(void) (*Lnk155)();
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
	(void) (*Lnk155)();
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
	(void) (*Lnk156)();
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
	(void) (*Lnk156)();
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
	(void) (*Lnk156)();
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
	(void) (*Lnk156)();
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
	(void) (*Lnk157)();
	return;
	goto T41;
T41:;
	{object V15;
	object V16;
	object V17;
	V15= (*(LnkLI158))((V13),(V14));
	base[5]= VV[4];
	base[6]= (V15);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk159)();
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
	(void) (*Lnk160)();
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
	(void) (*Lnk161)();
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
	(void) (*Lnk162)();
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
	(void) (*Lnk163)();
	return;
	goto T81;
T81:;
	{register object V34;
	register object V35;
	object V36;
	object V37;
	object V38;
	object V39;
	V37= (*(LnkLI164))(VV[17]);
	V38= (((V31))==(VV[0])?Ct:Cnil);
	V39= (*(LnkLI165))((V33),VV[18],VV[19]);
	V34= Cnil;
	V35= Cnil;
	V36= Cnil;
	{object V40= (V31);
	if((V40!= VV[0]))goto T93;
	V34= (*(LnkLI166))(small_fixnum(0));
	V35= make_cons((V34),Cnil);
	goto T92;
	goto T93;
T93:;
	if((V40!= VV[1]))goto T97;
	V34= (*(LnkLI166))(small_fixnum(1));
	V41= (*(LnkLI166))(small_fixnum(0));
	V42 = (V34);
	V35= list(2,/* INLINE-ARGS */V41,V42);
	goto T92;
	goto T97;
T97:;
	FEerror("The ECASE key value ~s is illegal.",1,V40);
	goto T92;}
	goto T92;
T92:;
	{object V43= (V32);
	if(!eql(V43,VV[20]))goto T102;
	V36= VV[21];
	goto T101;
	goto T102;
T102:;
	if(!eql(V43,VV[22]))goto T104;
	V36= VV[23];
	goto T101;
	goto T104;
T104:;
	FEerror("The ECASE key value ~s is illegal.",1,V43);
	goto T101;}
	goto T101;
T101:;
	base[3]= (V36);
	base[4]= (V35);
	if(((V33))!=Cnil){
	goto T111;}
	V44= VV[25];
	goto T109;
	goto T111;
T111:;
	V44= Cnil;
	goto T109;
T109:;
	V45= list(2,VV[28],(V34));
	if(((V33))!=Cnil){
	goto T115;}
	V47= list(3,VV[29],VV[19],list(2,VV[30],(V34)));
	V46= make_cons(/* INLINE-ARGS */V47,Cnil);
	goto T113;
	goto T115;
T115:;
	V46= Cnil;
	goto T113;
T113:;
	V48= list(2,VV[31],(V34));
	V49= make_cons(/* INLINE-ARGS */V48,Cnil);
	V50= append(V46,/* INLINE-ARGS */V49);
	V51= make_cons(/* INLINE-ARGS */V45,/* INLINE-ARGS */V50);
	V52= list(2,VV[32],(V34));
	if(((V33))!=Cnil){
	goto T119;}
	V54= list(3,VV[29],VV[19],list(2,VV[33],(V34)));
	V53= make_cons(/* INLINE-ARGS */V54,Cnil);
	goto T117;
	goto T119;
T119:;
	V53= Cnil;
	goto T117;
T117:;
	V55= list(2,VV[34],(V34));
	V56= make_cons(/* INLINE-ARGS */V55,Cnil);
	V57= append(V53,/* INLINE-ARGS */V56);
	V58= list(2,VV[26],list(3,VV[27],/* INLINE-ARGS */V51,make_cons(/* INLINE-ARGS */V52,/* INLINE-ARGS */V57)));
	if(((V38))==Cnil){
	goto T123;}
	V59= VV[35];
	goto T121;
	goto T123;
T123:;
	V59= Cnil;
	goto T121;
T121:;
	V60= make_cons(/* INLINE-ARGS */V58,V59);
	V61= append(V44,/* INLINE-ARGS */V60);
	V62= list(2,VV[39],list(3,VV[40],VV[26],(V37)));
	if(!(eql(small_fixnum(2),(V32)))){
	goto T127;}
	V63= VV[43];
	goto T125;
	goto T127;
T127:;
	V63= Cnil;
	goto T125;
T125:;
	V64= list(2,VV[41],listA(3,VV[37],VV[42],V63));
	if(((V38))==Cnil){
	goto T131;}
	V66= list(3,VV[44],VV[45],list(3,VV[29],VV[46],(V39)));
	V65= make_cons(/* INLINE-ARGS */V66,Cnil);
	goto T129;
	goto T131;
T131:;
	V65= Cnil;
	goto T129;
T129:;
	V67= listA(5,VV[37],VV[38],/* INLINE-ARGS */V62,/* INLINE-ARGS */V64,V65);
	V68= listA(3,VV[47],VV[11],(V35));
	if(((V38))==Cnil){
	goto T135;}
	V69= VV[46];
	goto T133;
	goto T135;
T135:;
	V69= list(3,VV[48],(V39),CMPcar((V35)));
	goto T133;
T133:;
	base[5]= list(3,VV[24],/* INLINE-ARGS */V61,list(4,VV[36],/* INLINE-ARGS */V67,/* INLINE-ARGS */V68,V69));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk160)();
	return;}
	}
}
/*	local entry for function EMIT-SLOT-READ-FORM	*/

static object LI17(V73,V74,V75)

object V73;object V74;object V75;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(((V73))==Cnil){
	goto T138;}
	{object V76 = list(2,VV[49],(V74));
	VMR17(V76)}
	goto T138;
T138:;
	{object V77 = list(3,VV[50],(V75),(V74));
	VMR17(V77)}
	return Cnil;
}
/*	local entry for function EMIT-BOUNDP-CHECK	*/

static object LI18(V81,V82,V83)

object V81;object V82;object V83;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	V84= list(2,VV[46],(V81));
	V85= make_cons(/* INLINE-ARGS */V84,Cnil);
	{object V86 = list(3,VV[14],/* INLINE-ARGS */V85,list(4,VV[36],VV[51],listA(3,VV[47],(V82),(V83)),VV[46]));
	VMR18(V86)}
	return Cnil;
}
/*	local entry for function EMIT-SLOT-ACCESS	*/

static object LI19(V93,V94,V95,V96,V97,V98)

object V93;object V94;object V95;object V96;object V97;object V98;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V99;
	V99= (*(LnkLI165))((V94),(V96),(V95));
	{object V100= (V93);
	if((V100!= VV[0]))goto T141;
	{object V101 = (*(LnkLI167))((V99),(V97),(V98));
	VMR19(V101)}
	goto T141;
T141:;
	if((V100!= VV[1]))goto T142;
	{object V102 = list(3,VV[48],(V99),CMPcar((V98)));
	VMR19(V102)}
	goto T142;
T142:;
	FEerror("The ECASE key value ~s is illegal.",1,V100);
	{object V103 = Cnil;
	VMR19(V103)}}}
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
	{object V104=base[0]->c.c_cdr;
	if(endp(V104))invalid_macro_call();
	base[2]= (V104->c.c_car);
	V104=V104->c.c_cdr;
	if(endp(V104))invalid_macro_call();
	base[3]= (V104->c.c_car);
	V104=V104->c.c_cdr;
	if(endp(V104))invalid_macro_call();
	base[4]= (V104->c.c_car);
	V104=V104->c.c_cdr;
	if(!endp(V104))invalid_macro_call();}
	bds_bind(VV[3],Cnil);
	bds_bind(VV[2],Ct);
	base[8]= base[2];
	base[9]= base[3];
	base[10]= base[4];
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk154)();
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
	{object V105;
	register object V106;
	register object V107;
	check_arg(3);
	V105=(base[0]);
	V106=(base[1]);
	V107=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T147;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T147;}
	base[3]= (V105);
	base[4]= (V106);
	base[5]= (V107);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk168)();
	return;
	goto T147;
T147:;
	{register object V108;
	object V109;
	{object V110= (V105);
	if((V110!= VV[0]))goto T156;
	V111= (*(LnkLI166))(small_fixnum(0));
	base[3]= make_cons(/* INLINE-ARGS */V111,Cnil);
	base[4]= VV[52];
	vs_top=(vs_base=base+3)+2;
	goto T155;
	goto T156;
T156:;
	if((V110!= VV[1]))goto T159;
	V112= (*(LnkLI166))(small_fixnum(0));
	base[3]= list(2,/* INLINE-ARGS */V112,(*(LnkLI166))(small_fixnum(1)));
	base[4]= VV[53];
	vs_top=(vs_base=base+3)+2;
	goto T155;
	goto T159;
T159:;
	FEerror("The ECASE key value ~s is illegal.",1,V110);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	goto T155;}
	goto T155;
T155:;
	if(vs_base>=vs_top){vs_top=sup;goto T162;}
	V108= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T163;}
	V109= vs_base[0];
	vs_top=sup;
	goto T164;
	goto T162;
T162:;
	V108= Cnil;
	goto T163;
T163:;
	V109= Cnil;
	goto T164;
T164:;
	if(((V106))!=Cnil){
	goto T168;}
	V113= VV[55];
	goto T166;
	goto T168;
T168:;
	V113= Cnil;
	goto T166;
T166:;
	V114= append(V113,VV[56]);
	base[3]= make_cons(VV[54],/* INLINE-ARGS */V114);
	base[4]= (V108);
	if(((V107))!=Cnil){
	goto T174;}
	V115= VV[57];
	goto T172;
	goto T174;
T174:;
	V115= Cnil;
	goto T172;
T172:;
	if(((V106))==Cnil){
	goto T178;}
	V116= VV[58];
	goto T176;
	goto T178;
T178:;
	V116= Cnil;
	goto T176;
T176:;
	V117= append(V115,V116);
	V118 = (V108);
	V119 = (V109);
	V120= (*(LnkLI170))((V105),(V107),VV[19],VV[18],VV[11],(V108));
	V121= listA(3,VV[47],VV[11],(V108));
	if(((V106))==Cnil){
	goto T182;}
	V122= VV[18];
	goto T180;
	goto T182;
T182:;
	V122= Cnil;
	goto T180;
T180:;
	if(((V107))!=Cnil){
	goto T186;}
	V123= VV[59];
	goto T184;
	goto T186;
T186:;
	V123= Cnil;
	goto T184;
T184:;
	base[5]= list(3,VV[14],/* INLINE-ARGS */V117,(VFUN_NARGS=6,(*(LnkLI169))(V118,V119,/* INLINE-ARGS */V120,/* INLINE-ARGS */V121,V122,V123)));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk160)();
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
	{object V124=base[0]->c.c_cdr;
	if(endp(V124))invalid_macro_call();
	base[2]= (V124->c.c_car);
	V124=V124->c.c_cdr;
	if(endp(V124))invalid_macro_call();
	base[3]= (V124->c.c_car);
	V124=V124->c.c_cdr;
	if(endp(V124))invalid_macro_call();
	base[4]= (V124->c.c_car);
	V124=V124->c.c_cdr;
	if(!endp(V124))invalid_macro_call();}
	bds_bind(VV[3],Cnil);
	bds_bind(VV[2],Ct);
	base[8]= base[2];
	base[9]= base[3];
	base[10]= base[4];
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk155)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	local entry for function EMIT-MISS	*/

static object LI23(object V126,object V125,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V127;
	object V128;
	object V129;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V127= V126;
	V128= V125;
	narg = narg - 2;
	if (narg <= 0) goto T192;
	else {
	V129= first;}
	--narg; goto T193;
	goto T192;
T192:;
	V129= Cnil;
	goto T193;
T193:;
	{object V130;
	if(((V129))==Cnil){
	goto T197;}
	V130= VV[60];
	goto T195;
	goto T197;
T197:;
	V130= Cnil;
	goto T195;
T195:;
	if(((V130))==Cnil){
	goto T200;}
	{object V131 = listA(3,VV[61],(V127),append((V128),(V130)));
	VMR23(V131)}
	goto T200;
T200:;
	{object V132 = listA(3,VV[47],(V127),append((V128),(V130)));
	VMR23(V132)}}
	va_end(ap);
	return Cnil;}
	}
/*	function definition for EMIT-CHECKING-OR-CACHING	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{register object V133;
	object V134;
	object V135;
	register object V136;
	check_arg(4);
	V133=(base[0]);
	V134=(base[1]);
	V135=(base[2]);
	V136=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T202;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T202;}
	base[4]= (V133);
	base[5]= (V134);
	base[6]= (V135);
	base[7]= (V136);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk171)();
	return;
	goto T202;
T202:;
	{object V137;
	object V138;
	object V139;
	V137= (*(LnkLI158))((V135),(V136));
	base[7]= VV[4];
	base[8]= (V137);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk159)();
	vs_top=sup;
	V138= vs_base[0];
	if(((V136))==Cnil){
	goto T217;}
	V139= VV[62];
	goto T215;
	goto T217;
T217:;
	V139= Cnil;
	goto T215;
T215:;
	if(((V133))!=Cnil){
	goto T222;}
	V140= VV[63];
	goto T220;
	goto T222;
T222:;
	V140= Cnil;
	goto T220;
T220:;
	V141= append(V140,VV[64]);
	base[7]= make_cons(VV[54],/* INLINE-ARGS */V141);
	base[8]= (V137);
	if(((V133))==Cnil){
	goto T228;}
	V142= VV[65];
	goto T226;
	goto T228;
T228:;
	V142= Cnil;
	goto T226;
T226:;
	V143 = (V138);
	V144 = (V135);
	if(((V134))==Cnil){
	goto T232;}
	if(((V133))==Cnil){
	goto T235;}
	V145= VV[8];
	goto T230;
	goto T235;
T235:;
	V145= Ct;
	goto T230;
	goto T232;
T232:;
	V145= listA(4,VV[7],VV[8],(V136),append((V138),(V139)));
	goto T230;
T230:;
	V146= (VFUN_NARGS=3,(*(LnkLI172))(VV[11],(V138),(V136)));
	if(((V133))==Cnil){
	goto T239;}
	V147= VV[8];
	goto T237;
	goto T239;
T239:;
	V147= Cnil;
	goto T237;
T237:;
	base[9]= list(3,VV[14],V142,(VFUN_NARGS=5,(*(LnkLI169))(V143,V144,V145,/* INLINE-ARGS */V146,V147)));
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk160)();
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
	{object V148=base[0]->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[2]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[3]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[4]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[5]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(!endp(V148))invalid_macro_call();}
	bds_bind(VV[3],Cnil);
	bds_bind(VV[2],Ct);
	base[9]= base[2];
	base[10]= base[3];
	base[11]= base[4];
	base[12]= base[5];
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk156)();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	local entry for function EMIT-DLAP	*/

static object LI26(object V153,object V152,object V151,object V150,object V149,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	va_start(ap,first);
	if(narg <5) too_few_arguments();
	V154= V153;
	V155= V152;
	V156= V151;
	V157= V150;
	V158= V149;
	narg = narg - 5;
	if (narg <= 0) goto T246;
	else {
	V159= first;}
	--narg; goto T247;
	goto T246;
T246:;
	V159= Cnil;
	goto T247;
T247:;
	{long V160;
	object V161;
	register object V162;
	V160= -1;
	{object V163;
	object V164= (V154);
	object V165= (V155);
	if(V164==Cnil||V165==Cnil){
	V161= Cnil;
	goto T250;}
	base[2]=V163=MMcons(Cnil,Cnil);
	goto T251;
T251:;
	if(((V165->c.c_car))==(Ct)){
	goto T254;}
	V160= (long)(V160)+(1);
	base[4]= Cnil;
	base[5]= VV[66];
	base[6]= CMPmake_fixnum(V160);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (VV[67]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	vs_top=sup;
	V168= vs_base[0];
	V169 = (V165->c.c_car);
	V170 = (V164->c.c_car);
	{object V172;
	V172= CMPcar((V159));
	V159= CMPcdr((V159));
	V171= (V172);}
	V173= list(2,V168,(VFUN_NARGS=4,(*(LnkLI173))(V169,V170,VV[68],V171)));
	(V163->c.c_cdr)= make_cons(/* INLINE-ARGS */V173,Cnil);
	goto T252;
	goto T254;
T254:;
	(V163->c.c_cdr)= Cnil;
	goto T252;
T252:;
	while(MMcdr(V163)!=Cnil)V163=MMcdr(V163);
	if((V164=MMcdr(V164))==Cnil||(V165=MMcdr(V165))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V161= base[2];
	goto T250;}
	goto T251;}
	goto T250;
T250:;
	{object V174;
	object V175= (V161);
	if(V175==Cnil){
	V162= Cnil;
	goto T268;}
	base[2]=V174=MMcons(Cnil,Cnil);
	goto T269;
T269:;
	(V174->c.c_car)= CMPcar((V175->c.c_car));
	if((V175=MMcdr(V175))==Cnil){
	V162= base[2];
	goto T268;}
	V174=MMcdr(V174)=MMcons(Cnil,Cnil);
	goto T269;}
	goto T268;
T268:;
	if(((V162))!=Cnil){
	goto T271;}
	base[2]= VV[69];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T271;
T271:;
	V176= listA(6,VV[73],VV[74],VV[75],VV[76],VV[77],(V161));
	if((CMPcdr((V162)))==Cnil){
	goto T277;}
	V177= (*(LnkLI174))((V162),VV[68],(V158));
	goto T275;
	goto T277;
T277:;
	if(((V158))==Cnil){
	goto T280;}
	V177= (*(LnkLI175))(CMPcar((V162)),VV[68],(V158));
	goto T275;
	goto T280;
T280:;
	V177= (*(LnkLI176))(CMPcar((V162)),VV[68]);
	goto T275;
T275:;
	V178= list(5,VV[14],/* INLINE-ARGS */V176,VV[78],V177,list(3,VV[79],VV[71],(V156)));
	{object V179 = list(3,VV[70],VV[71],list(4,VV[72],/* INLINE-ARGS */V178,VV[68],list(3,VV[79],VV[71],(V157))));
	VMR26(V179)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EMIT-1-NIL-DLAP	*/

static object LI27(V182,V183)

object V182;object V183;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	V184= list(2,list(2,VV[80],(*(LnkLI177))((V182),(V183))),VV[81]);
	V185= list(3,VV[85],list(3,VV[44],(V182),VV[86]),VV[87]);
	V186= list(3,VV[91],VV[92],list(3,VV[85],list(3,VV[44],VV[93],(V182)),VV[94]));
	{object V187 = list(4,VV[24],/* INLINE-ARGS */V184,VV[82],list(3,VV[70],VV[83],list(5,VV[84],/* INLINE-ARGS */V185,VV[88],VV[89],list(4,VV[85],VV[90],/* INLINE-ARGS */V186,list(2,VV[95],(V183))))));
	VMR27(V187)}
	return Cnil;
}
/*	macro definition for GET-CACHE-VECTOR-LOCK-COUNT	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V188=base[0]->c.c_cdr;
	if(endp(V188))invalid_macro_call();
	base[2]= (V188->c.c_car);
	V188=V188->c.c_cdr;
	if(!endp(V188))invalid_macro_call();}
	V189= list(2,VV[96],list(2,VV[97],base[2]));
	base[3]= listA(3,VV[14],make_cons(/* INLINE-ARGS */V189,Cnil),VV[98]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function EMIT-1-T-DLAP	*/

static object LI29(V193,V194,V195)

object V193;object V194;object V195;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	V196= list(2,list(2,VV[80],(*(LnkLI177))((V193),(V194))),VV[99]);
	V197= list(3,VV[44],(V193),VV[103]);
	V198= list(4,VV[85],/* INLINE-ARGS */V197,list(3,VV[29],(V195),VV[104]),VV[105]);
	V199= list(3,VV[44],VV[110],(V193));
	V200= list(3,VV[91],VV[109],list(4,VV[85],/* INLINE-ARGS */V199,list(3,VV[29],(V195),VV[111]),VV[112]));
	V201= list(3,VV[70],VV[83],list(5,VV[84],/* INLINE-ARGS */V198,VV[106],VV[107],list(4,VV[85],VV[108],/* INLINE-ARGS */V200,list(2,VV[95],(V194)))));
	{object V202 = list(4,VV[14],/* INLINE-ARGS */V196,VV[100],list(5,VV[14],VV[101],VV[102],/* INLINE-ARGS */V201,list(3,VV[113],VV[114],list(2,VV[95],(V194)))));
	VMR29(V202)}
	return Cnil;
}
/*	local entry for function EMIT-GREATER-THAN-1-DLAP	*/

static object LI30(V206,V207,V208)

register object V206;object V207;register object V208;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V209;
	V210 = CMPmake_fixnum((long)length((V206)));
	if(((V208))==Cnil){
	goto T285;}
	V211= small_fixnum(1);
	goto T283;
	goto T285;
T285:;
	V211= small_fixnum(0);
	goto T283;
T283:;
	V212= number_plus(V210,V211);
	V209= (*(LnkLI178))(/* INLINE-ARGS */V212);
	V213= (*(LnkLI179))((V206),(V207));
	V214= list(3,VV[29],VV[121],list(3,VV[122],VV[123],list(3,VV[124],VV[125],(V209))));
	{object V216;
	object V217= (V206);
	if(V217==Cnil){
	V215= Cnil;
	goto T287;}
	base[0]=V216=MMcons(Cnil,Cnil);
	goto T288;
T288:;
	(V216->c.c_car)= list(3,VV[44],(V217->c.c_car),VV[127]);
	if((V217=MMcdr(V217))==Cnil){
	V215= base[0];
	goto T287;}
	V216=MMcdr(V216)=MMcons(Cnil,Cnil);
	goto T288;}
	goto T287;
T287:;
	V219= make_cons(VV[126],V215);
	if(((V208))==Cnil){
	goto T292;}
	V220= list(2,VV[128],list(3,VV[29],(V208),VV[129]));
	goto T290;
	goto T292;
T292:;
	V220= Cnil;
	goto T290;
T290:;
	V221= listA(3,VV[85],/* INLINE-ARGS */V219,append(V220,VV[130]));
	{object V223;
	object V224= (V206);
	if(V224==Cnil){
	V222= Cnil;
	goto T294;}
	base[0]=V223=MMcons(Cnil,Cnil);
	goto T295;
T295:;
	(V223->c.c_car)= list(3,VV[44],(V224->c.c_car),VV[136]);
	if((V224=MMcdr(V224))==Cnil){
	V222= base[0];
	goto T294;}
	V223=MMcdr(V223)=MMcons(Cnil,Cnil);
	goto T295;}
	goto T294;
T294:;
	V226= make_cons(VV[126],V222);
	if(((V208))==Cnil){
	goto T299;}
	V228= list(3,VV[29],(V208),VV[137]);
	V227= make_cons(/* INLINE-ARGS */V228,Cnil);
	goto T297;
	goto T299;
T299:;
	V227= Cnil;
	goto T297;
T297:;
	V229= list(3,VV[91],VV[134],list(3,VV[14],VV[135],listA(3,VV[85],/* INLINE-ARGS */V226,append(V227,VV[138]))));
	V230= list(3,VV[70],VV[83],list(6,VV[84],/* INLINE-ARGS */V214,/* INLINE-ARGS */V221,VV[131],VV[132],list(4,VV[85],VV[133],/* INLINE-ARGS */V229,list(2,VV[95],(V207)))));
	{object V231 = list(5,VV[14],VV[115],VV[116],/* INLINE-ARGS */V213,list(4,VV[14],VV[117],VV[118],list(5,VV[14],VV[119],VV[120],/* INLINE-ARGS */V230,list(3,VV[113],VV[139],list(2,VV[95],(V207))))));
	VMR30(V231)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EMIT-1-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI31(V234,V235)

object V234;object V235;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	V236= list(2,VV[140],list(3,VV[40],(V234),VV[141]));
	V237= make_cons(/* INLINE-ARGS */V236,Cnil);
	V238= list(3,VV[85],VV[143],list(2,VV[95],(V235)));
	V239= list(3,VV[122],VV[123],VV[144]);
	{object V241 = list(5,VV[14],/* INLINE-ARGS */V237,VV[142],/* INLINE-ARGS */V238,V239);
	VMR31(V241)}
	return Cnil;
}
/*	local entry for function EMIT-N-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI32(V244,V245)

object V244;object V245;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register long V247;
	long V248;
	V247= 0;
	V248= (long)length((V244));
	{object V249;
	object V250= (V244);
	if(V250==Cnil){
	V246= Cnil;
	goto T302;}
	base[0]=V249=MMcons(Cnil,Cnil);
	goto T305;
T305:;
	V252= list(2,VV[140],list(3,VV[40],(V250->c.c_car),VV[141]));
	V253= make_cons(/* INLINE-ARGS */V252,Cnil);
	V254= list(3,VV[85],VV[147],list(2,VV[95],(V245)));
	V247= (long)(V247)+(1);
	if(((long)(V247>=0&&(4)>0?(V247)%(4):imod(V247,4)))==0){
	goto T310;}
	if(!((V247)==(V248))){
	goto T311;}
	goto T310;
T310:;
	V256= list(3,VV[122],VV[123],VV[149]);
	V258= list(3,VV[29],VV[80],V256);
	V255= make_cons(/* INLINE-ARGS */V258,Cnil);
	goto T307;
	goto T311;
T311:;
	V255= Cnil;
	goto T307;
T307:;
	(V249->c.c_car)= listA(6,VV[14],/* INLINE-ARGS */V253,VV[146],/* INLINE-ARGS */V254,VV[148],V255);
	if((V250=MMcdr(V250))==Cnil){
	V246= base[0];
	goto T302;}
	V249=MMcdr(V249)=MMcons(Cnil,Cnil);
	goto T305;}}
	goto T302;
T302:;
	{object V259 = make_cons(VV[145],V246);
	VMR32(V259)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EMIT-FETCH-WRAPPER	*/

static object LI33(object V262,object V261,object V260,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V263;
	register object V264;
	object V265;
	register object V266;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V263= V262;
	V264= V261;
	V265= V260;
	narg = narg - 3;
	if (narg <= 0) goto T316;
	else {
	V266= first;}
	--narg; goto T317;
	goto T316;
T316:;
	V266= Cnil;
	goto T317;
T317:;
	{object V267= (V263);
	if((V267!= VV[180]))goto T319;
	V268= list(2,VV[28],(V264));
	if(((V266))==Cnil){
	goto T322;}
	V270= list(3,VV[29],(V266),list(2,VV[30],(V264)));
	V269= make_cons(/* INLINE-ARGS */V270,Cnil);
	goto T320;
	goto T322;
T322:;
	V269= Cnil;
	goto T320;
T320:;
	V271= list(2,VV[31],(V264));
	V272= make_cons(/* INLINE-ARGS */V271,Cnil);
	V273= append(V269,/* INLINE-ARGS */V272);
	V274= make_cons(/* INLINE-ARGS */V268,/* INLINE-ARGS */V273);
	V275= list(2,VV[32],(V264));
	if(((V266))==Cnil){
	goto T326;}
	V277= list(3,VV[29],(V266),list(2,VV[33],(V264)));
	V276= make_cons(/* INLINE-ARGS */V277,Cnil);
	goto T324;
	goto T326;
T326:;
	V276= Cnil;
	goto T324;
T324:;
	V278= list(2,VV[34],(V264));
	V279= make_cons(/* INLINE-ARGS */V278,Cnil);
	V280= append(V276,/* INLINE-ARGS */V279);
	V281= make_cons(/* INLINE-ARGS */V275,/* INLINE-ARGS */V280);
	{object V282 = list(4,VV[27],/* INLINE-ARGS */V274,/* INLINE-ARGS */V281,list(2,Ct,list(2,VV[95],(V265))));
	VMR33(V282)}
	goto T319;
T319:;
	if((V267!= VV[181]))goto T328;
	if(((V266))==Cnil){
	goto T329;}
	base[0]= VV[150];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T329;
T329:;
	{object V283 = list(2,VV[151],(V264));
	VMR33(V283)}
	goto T328;
T328:;
	if((V267!= VV[182])
	&& (V267!= VV[183]))goto T333;
	if(((V266))==Cnil){
	goto T334;}
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T334;
T334:;
	{object V284 = list(2,VV[153],(V264));
	VMR33(V284)}
	goto T333;
T333:;
	FEerror("The ECASE key value ~s is illegal.",1,V267);
	{object V285 = Cnil;
	VMR33(V285)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,2,first,ap);va_end(ap);return V1;} /* EMIT-N-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION */
static object  LnkTLI178(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[178],(void **)(void *)&LnkLI178,1,first,ap);va_end(ap);return V1;} /* COMPUTE-LINE-SIZE */
static object  LnkTLI177(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[177],(void **)(void *)&LnkLI177,2,first,ap);va_end(ap);return V1;} /* EMIT-1-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION */
static object  LnkTLI176(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[176],(void **)(void *)&LnkLI176,2,first,ap);va_end(ap);return V1;} /* EMIT-1-NIL-DLAP */
static object  LnkTLI175(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[175],(void **)(void *)&LnkLI175,3,first,ap);va_end(ap);return V1;} /* EMIT-1-T-DLAP */
static object  LnkTLI174(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[174],(void **)(void *)&LnkLI174,3,first,ap);va_end(ap);return V1;} /* EMIT-GREATER-THAN-1-DLAP */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[173],(void **)(void *)&LnkLI173,first,ap);va_end(ap);return V1;} /* EMIT-FETCH-WRAPPER */
static object  LnkTLI172(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[172],(void **)(void *)&LnkLI172,first,ap);va_end(ap);return V1;} /* EMIT-MISS */
static void LnkT171(){ call_or_link(VV[171],(void **)(void *)&Lnk171);} /* EMIT-CHECKING-OR-CACHING-FUNCTION */
static object  LnkTLI170(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[170],(void **)(void *)&LnkLI170,6,first,ap);va_end(ap);return V1;} /* EMIT-SLOT-ACCESS */
static object  LnkTLI169(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[169],(void **)(void *)&LnkLI169,first,ap);va_end(ap);return V1;} /* EMIT-DLAP */
static void LnkT168(){ call_or_link(VV[168],(void **)(void *)&Lnk168);} /* EMIT-ONE-OR-N-INDEX-READERWRITER-FUNCTION */
static object  LnkTLI167(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[167],(void **)(void *)&LnkLI167,3,first,ap);va_end(ap);return V1;} /* EMIT-BOUNDP-CHECK */
static object  LnkTLI166(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[166],(void **)(void *)&LnkLI166,1,first,ap);va_end(ap);return V1;} /* DFUN-ARG-SYMBOL */
static object  LnkTLI165(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[165],(void **)(void *)&LnkLI165,3,first,ap);va_end(ap);return V1;} /* EMIT-SLOT-READ-FORM */
static object  LnkTLI164(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[164],(void **)(void *)&LnkLI164,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FIELD */
static void LnkT163(){ call_or_link(VV[163],(void **)(void *)&Lnk163);} /* EMIT-READERWRITER-FUNCTION */
static void LnkT162(){ call_or_link(VV[162],(void **)(void *)&Lnk162);} /* COMPILE-LAMBDA */
static void LnkT161(){ call_or_link(VV[161],(void **)(void *)&Lnk161);} /* EMIT-DEFAULT-ONLY */
static void LnkT160(){ call_or_link(VV[160],(void **)(void *)&Lnk160);} /* GENERATING-LISP */
static void LnkT159(){ call_or_link(VV[159],(void **)(void *)&Lnk159);} /* REMOVE */
static object  LnkTLI158(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[158],(void **)(void *)&LnkLI158,2,first,ap);va_end(ap);return V1;} /* MAKE-DLAP-LAMBDA-LIST */
static void LnkT157(){ call_or_link(VV[157],(void **)(void *)&Lnk157);} /* EMIT-DEFAULT-ONLY-FUNCTION */
static void LnkT156(){ call_or_link(VV[156],(void **)(void *)&Lnk156);} /* EMIT-CHECKING-OR-CACHING */
static void LnkT155(){ call_or_link(VV[155],(void **)(void *)&Lnk155);} /* EMIT-ONE-OR-N-INDEX-READERWRITER */
static void LnkT154(){ call_or_link(VV[154],(void **)(void *)&Lnk154);} /* EMIT-READERWRITER */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

