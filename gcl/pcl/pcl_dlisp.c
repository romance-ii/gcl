
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
	V35= list(2,/* INLINE-ARGS */V41,(V34));
	goto T92;
	goto T97;
T97:;
	FEerror("The ECASE key value ~s is illegal.",1,V40);
	goto T92;}
	goto T92;
T92:;
	{object V42= (V32);
	if(!eql(V42,VV[20]))goto T102;
	V36= VV[21];
	goto T101;
	goto T102;
T102:;
	if(!eql(V42,VV[22]))goto T104;
	V36= VV[23];
	goto T101;
	goto T104;
T104:;
	FEerror("The ECASE key value ~s is illegal.",1,V42);
	goto T101;}
	goto T101;
T101:;
	base[3]= (V36);
	base[4]= (V35);
	if(((V33))!=Cnil){
	goto T111;}
	V43= VV[25];
	goto T109;
	goto T111;
T111:;
	V43= Cnil;
	goto T109;
T109:;
	V44= list(2,VV[28],(V34));
	if(((V33))!=Cnil){
	goto T115;}
	V46= list(3,VV[29],VV[19],list(2,VV[30],(V34)));
	V45= make_cons(/* INLINE-ARGS */V46,Cnil);
	goto T113;
	goto T115;
T115:;
	V45= Cnil;
	goto T113;
T113:;
	V47= list(2,VV[31],(V34));
	V48= make_cons(/* INLINE-ARGS */V47,Cnil);
	V49= append(V45,/* INLINE-ARGS */V48);
	V50= make_cons(/* INLINE-ARGS */V44,/* INLINE-ARGS */V49);
	V51= list(2,VV[32],(V34));
	if(((V33))!=Cnil){
	goto T119;}
	V53= list(3,VV[29],VV[19],list(2,VV[33],(V34)));
	V52= make_cons(/* INLINE-ARGS */V53,Cnil);
	goto T117;
	goto T119;
T119:;
	V52= Cnil;
	goto T117;
T117:;
	V54= list(2,VV[34],(V34));
	V55= make_cons(/* INLINE-ARGS */V54,Cnil);
	V56= append(V52,/* INLINE-ARGS */V55);
	V57= list(2,VV[26],list(3,VV[27],/* INLINE-ARGS */V50,make_cons(/* INLINE-ARGS */V51,/* INLINE-ARGS */V56)));
	if(((V38))==Cnil){
	goto T123;}
	V58= VV[35];
	goto T121;
	goto T123;
T123:;
	V58= Cnil;
	goto T121;
T121:;
	V59= make_cons(/* INLINE-ARGS */V57,V58);
	V60= append(V43,/* INLINE-ARGS */V59);
	V61= list(2,VV[39],list(3,VV[40],VV[26],(V37)));
	if(!(eql(small_fixnum(2),(V32)))){
	goto T127;}
	V62= VV[43];
	goto T125;
	goto T127;
T127:;
	V62= Cnil;
	goto T125;
T125:;
	V63= list(2,VV[41],listA(3,VV[37],VV[42],V62));
	if(((V38))==Cnil){
	goto T131;}
	V65= list(3,VV[44],VV[45],list(3,VV[29],VV[46],(V39)));
	V64= make_cons(/* INLINE-ARGS */V65,Cnil);
	goto T129;
	goto T131;
T131:;
	V64= Cnil;
	goto T129;
T129:;
	V66= listA(5,VV[37],VV[38],/* INLINE-ARGS */V61,/* INLINE-ARGS */V63,V64);
	V67= listA(3,VV[47],VV[11],(V35));
	if(((V38))==Cnil){
	goto T135;}
	V68= VV[46];
	goto T133;
	goto T135;
T135:;
	V68= list(3,VV[48],(V39),CMPcar((V35)));
	goto T133;
T133:;
	base[5]= list(3,VV[24],/* INLINE-ARGS */V60,list(4,VV[36],/* INLINE-ARGS */V66,/* INLINE-ARGS */V67,V68));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk160)();
	return;}
	}
}
/*	local entry for function EMIT-SLOT-READ-FORM	*/

static object LI17(V72,V73,V74)

object V72;object V73;object V74;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(((V72))==Cnil){
	goto T138;}
	{object V75 = list(2,VV[49],(V73));
	VMR17(V75)}
	goto T138;
T138:;
	{object V76 = list(3,VV[50],(V74),(V73));
	VMR17(V76)}
	return Cnil;
}
/*	local entry for function EMIT-BOUNDP-CHECK	*/

static object LI18(V80,V81,V82)

object V80;object V81;object V82;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	V83= list(2,VV[46],(V80));
	V84= make_cons(/* INLINE-ARGS */V83,Cnil);
	{object V85 = list(3,VV[14],/* INLINE-ARGS */V84,list(4,VV[36],VV[51],listA(3,VV[47],(V81),(V82)),VV[46]));
	VMR18(V85)}
	return Cnil;
}
/*	local entry for function EMIT-SLOT-ACCESS	*/

static object LI19(V92,V93,V94,V95,V96,V97)

object V92;object V93;object V94;object V95;object V96;object V97;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V98;
	V98= (*(LnkLI165))((V93),(V95),(V94));
	{object V99= (V92);
	if((V99!= VV[0]))goto T141;
	{object V100 = (*(LnkLI167))((V98),(V96),(V97));
	VMR19(V100)}
	goto T141;
T141:;
	if((V99!= VV[1]))goto T142;
	{object V101 = list(3,VV[48],(V98),CMPcar((V97)));
	VMR19(V101)}
	goto T142;
T142:;
	FEerror("The ECASE key value ~s is illegal.",1,V99);
	{object V102 = Cnil;
	VMR19(V102)}}}
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
	{object V103=base[0]->c.c_cdr;
	if(endp(V103))invalid_macro_call();
	base[2]= (V103->c.c_car);
	V103=V103->c.c_cdr;
	if(endp(V103))invalid_macro_call();
	base[3]= (V103->c.c_car);
	V103=V103->c.c_cdr;
	if(endp(V103))invalid_macro_call();
	base[4]= (V103->c.c_car);
	V103=V103->c.c_cdr;
	if(!endp(V103))invalid_macro_call();}
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
	{object V104;
	register object V105;
	register object V106;
	check_arg(3);
	V104=(base[0]);
	V105=(base[1]);
	V106=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T147;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T147;}
	base[3]= (V104);
	base[4]= (V105);
	base[5]= (V106);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk168)();
	return;
	goto T147;
T147:;
	{register object V107;
	object V108;
	{object V109= (V104);
	if((V109!= VV[0]))goto T156;
	V110= (*(LnkLI166))(small_fixnum(0));
	base[3]= make_cons(/* INLINE-ARGS */V110,Cnil);
	base[4]= VV[52];
	vs_top=(vs_base=base+3)+2;
	goto T155;
	goto T156;
T156:;
	if((V109!= VV[1]))goto T159;
	V111= (*(LnkLI166))(small_fixnum(0));
	base[3]= list(2,/* INLINE-ARGS */V111,(*(LnkLI166))(small_fixnum(1)));
	base[4]= VV[53];
	vs_top=(vs_base=base+3)+2;
	goto T155;
	goto T159;
T159:;
	FEerror("The ECASE key value ~s is illegal.",1,V109);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	goto T155;}
	goto T155;
T155:;
	if(vs_base>=vs_top){vs_top=sup;goto T162;}
	V107= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T163;}
	V108= vs_base[0];
	vs_top=sup;
	goto T164;
	goto T162;
T162:;
	V107= Cnil;
	goto T163;
T163:;
	V108= Cnil;
	goto T164;
T164:;
	if(((V105))!=Cnil){
	goto T168;}
	V112= VV[55];
	goto T166;
	goto T168;
T168:;
	V112= Cnil;
	goto T166;
T166:;
	V113= append(V112,VV[56]);
	base[3]= make_cons(VV[54],/* INLINE-ARGS */V113);
	base[4]= (V107);
	if(((V106))!=Cnil){
	goto T174;}
	V114= VV[57];
	goto T172;
	goto T174;
T174:;
	V114= Cnil;
	goto T172;
T172:;
	if(((V105))==Cnil){
	goto T178;}
	V115= VV[58];
	goto T176;
	goto T178;
T178:;
	V115= Cnil;
	goto T176;
T176:;
	V116= append(V114,V115);
	V117= (*(LnkLI170))((V104),(V106),VV[19],VV[18],VV[11],(V107));
	V118= listA(3,VV[47],VV[11],(V107));
	if(((V105))==Cnil){
	goto T182;}
	V119= VV[18];
	goto T180;
	goto T182;
T182:;
	V119= Cnil;
	goto T180;
T180:;
	if(((V106))!=Cnil){
	goto T186;}
	V120= VV[59];
	goto T184;
	goto T186;
T186:;
	V120= Cnil;
	goto T184;
T184:;
	base[5]= list(3,VV[14],/* INLINE-ARGS */V116,(VFUN_NARGS=6,(*(LnkLI169))((V107),(V108),/* INLINE-ARGS */V117,/* INLINE-ARGS */V118,V119,V120)));
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
	{object V121=base[0]->c.c_cdr;
	if(endp(V121))invalid_macro_call();
	base[2]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	if(endp(V121))invalid_macro_call();
	base[3]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	if(endp(V121))invalid_macro_call();
	base[4]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	if(!endp(V121))invalid_macro_call();}
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

static object LI23(object V123,object V122,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V124;
	object V125;
	object V126;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V124= V123;
	V125= V122;
	narg = narg - 2;
	if (narg <= 0) goto T192;
	else {
	V126= first;}
	--narg; goto T193;
	goto T192;
T192:;
	V126= Cnil;
	goto T193;
T193:;
	{object V127;
	if(((V126))==Cnil){
	goto T197;}
	V127= VV[60];
	goto T195;
	goto T197;
T197:;
	V127= Cnil;
	goto T195;
T195:;
	if(((V127))==Cnil){
	goto T200;}
	{object V128 = listA(3,VV[61],(V124),append((V125),(V127)));
	VMR23(V128)}
	goto T200;
T200:;
	{object V129 = listA(3,VV[47],(V124),append((V125),(V127)));
	VMR23(V129)}}
	va_end(ap);
	return Cnil;}
	}
/*	function definition for EMIT-CHECKING-OR-CACHING	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{register object V130;
	object V131;
	object V132;
	register object V133;
	check_arg(4);
	V130=(base[0]);
	V131=(base[1]);
	V132=(base[2]);
	V133=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T202;}
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T202;}
	base[4]= (V130);
	base[5]= (V131);
	base[6]= (V132);
	base[7]= (V133);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk171)();
	return;
	goto T202;
T202:;
	{object V134;
	object V135;
	object V136;
	V134= (*(LnkLI158))((V132),(V133));
	base[7]= VV[4];
	base[8]= (V134);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk159)();
	vs_top=sup;
	V135= vs_base[0];
	if(((V133))==Cnil){
	goto T217;}
	V136= VV[62];
	goto T215;
	goto T217;
T217:;
	V136= Cnil;
	goto T215;
T215:;
	if(((V130))!=Cnil){
	goto T222;}
	V137= VV[63];
	goto T220;
	goto T222;
T222:;
	V137= Cnil;
	goto T220;
T220:;
	V138= append(V137,VV[64]);
	base[7]= make_cons(VV[54],/* INLINE-ARGS */V138);
	base[8]= (V134);
	if(((V130))==Cnil){
	goto T228;}
	V139= VV[65];
	goto T226;
	goto T228;
T228:;
	V139= Cnil;
	goto T226;
T226:;
	if(((V131))==Cnil){
	goto T232;}
	if(((V130))==Cnil){
	goto T235;}
	V140= VV[8];
	goto T230;
	goto T235;
T235:;
	V140= Ct;
	goto T230;
	goto T232;
T232:;
	V140= listA(4,VV[7],VV[8],(V133),append((V135),(V136)));
	goto T230;
T230:;
	V141= (VFUN_NARGS=3,(*(LnkLI172))(VV[11],(V135),(V133)));
	if(((V130))==Cnil){
	goto T239;}
	V142= VV[8];
	goto T237;
	goto T239;
T239:;
	V142= Cnil;
	goto T237;
T237:;
	base[9]= list(3,VV[14],V139,(VFUN_NARGS=5,(*(LnkLI169))((V135),(V132),V140,/* INLINE-ARGS */V141,V142)));
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
	{object V143=base[0]->c.c_cdr;
	if(endp(V143))invalid_macro_call();
	base[2]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(endp(V143))invalid_macro_call();
	base[3]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(endp(V143))invalid_macro_call();
	base[4]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(endp(V143))invalid_macro_call();
	base[5]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(!endp(V143))invalid_macro_call();}
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

static object LI26(object V148,object V147,object V146,object V145,object V144,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V149;
	object V150;
	object V151;
	object V152;
	object V153;
	object V154;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <5) too_few_arguments();
	V149= V148;
	V150= V147;
	V151= V146;
	V152= V145;
	V153= V144;
	narg = narg - 5;
	if (narg <= 0) goto T246;
	else {
	V154= first;}
	--narg; goto T247;
	goto T246;
T246:;
	V154= Cnil;
	goto T247;
T247:;
	{long V155;
	object V156;
	register object V157;
	V155= -1;
	{object V158;
	object V159= (V149);
	object V160= (V150);
	if(V159==Cnil||V160==Cnil){
	V156= Cnil;
	goto T250;}
	base[2]=V158=MMcons(Cnil,Cnil);
	goto T251;
T251:;
	if(((V160->c.c_car))==(Ct)){
	goto T254;}
	V155= (long)(V155)+(1);
	base[4]= Cnil;
	base[5]= VV[66];
	base[6]= CMPmake_fixnum(V155);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (VV[67]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	vs_top=sup;
	V163= vs_base[0];
	{object V165;
	V165= CMPcar((V154));
	V154= CMPcdr((V154));
	V164= (V165);}
	V166= list(2,V163,(VFUN_NARGS=4,(*(LnkLI173))((V160->c.c_car),(V159->c.c_car),VV[68],V164)));
	(V158->c.c_cdr)= make_cons(/* INLINE-ARGS */V166,Cnil);
	goto T252;
	goto T254;
T254:;
	(V158->c.c_cdr)= Cnil;
	goto T252;
T252:;
	while(MMcdr(V158)!=Cnil)V158=MMcdr(V158);
	if((V159=MMcdr(V159))==Cnil||(V160=MMcdr(V160))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V156= base[2];
	goto T250;}
	goto T251;}
	goto T250;
T250:;
	{object V167;
	object V168= (V156);
	if(V168==Cnil){
	V157= Cnil;
	goto T268;}
	base[2]=V167=MMcons(Cnil,Cnil);
	goto T269;
T269:;
	(V167->c.c_car)= CMPcar((V168->c.c_car));
	if((V168=MMcdr(V168))==Cnil){
	V157= base[2];
	goto T268;}
	V167=MMcdr(V167)=MMcons(Cnil,Cnil);
	goto T269;}
	goto T268;
T268:;
	if(((V157))!=Cnil){
	goto T271;}
	base[2]= VV[69];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T271;
T271:;
	V169= listA(6,VV[73],VV[74],VV[75],VV[76],VV[77],(V156));
	if((CMPcdr((V157)))==Cnil){
	goto T277;}
	V170= (*(LnkLI174))((V157),VV[68],(V153));
	goto T275;
	goto T277;
T277:;
	if(((V153))==Cnil){
	goto T280;}
	V170= (*(LnkLI175))(CMPcar((V157)),VV[68],(V153));
	goto T275;
	goto T280;
T280:;
	V170= (*(LnkLI176))(CMPcar((V157)),VV[68]);
	goto T275;
T275:;
	V171= list(5,VV[14],/* INLINE-ARGS */V169,VV[78],V170,list(3,VV[79],VV[71],(V151)));
	{object V172 = list(3,VV[70],VV[71],list(4,VV[72],/* INLINE-ARGS */V171,VV[68],list(3,VV[79],VV[71],(V152))));
	VMR26(V172)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EMIT-1-NIL-DLAP	*/

static object LI27(V175,V176)

object V175;object V176;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	V177= list(2,list(2,VV[80],(*(LnkLI177))((V175),(V176))),VV[81]);
	V178= list(3,VV[85],list(3,VV[44],(V175),VV[86]),VV[87]);
	V179= list(3,VV[91],VV[92],list(3,VV[85],list(3,VV[44],VV[93],(V175)),VV[94]));
	{object V180 = list(4,VV[24],/* INLINE-ARGS */V177,VV[82],list(3,VV[70],VV[83],list(5,VV[84],/* INLINE-ARGS */V178,VV[88],VV[89],list(4,VV[85],VV[90],/* INLINE-ARGS */V179,list(2,VV[95],(V176))))));
	VMR27(V180)}
	return Cnil;
}
/*	macro definition for GET-CACHE-VECTOR-LOCK-COUNT	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V181=base[0]->c.c_cdr;
	if(endp(V181))invalid_macro_call();
	base[2]= (V181->c.c_car);
	V181=V181->c.c_cdr;
	if(!endp(V181))invalid_macro_call();}
	V182= list(2,VV[96],list(2,VV[97],base[2]));
	base[3]= listA(3,VV[14],make_cons(/* INLINE-ARGS */V182,Cnil),VV[98]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function EMIT-1-T-DLAP	*/

static object LI29(V186,V187,V188)

object V186;object V187;object V188;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	V189= list(2,list(2,VV[80],(*(LnkLI177))((V186),(V187))),VV[99]);
	V190= list(3,VV[44],(V186),VV[103]);
	V191= list(4,VV[85],/* INLINE-ARGS */V190,list(3,VV[29],(V188),VV[104]),VV[105]);
	V192= list(3,VV[44],VV[110],(V186));
	V193= list(3,VV[91],VV[109],list(4,VV[85],/* INLINE-ARGS */V192,list(3,VV[29],(V188),VV[111]),VV[112]));
	V194= list(3,VV[70],VV[83],list(5,VV[84],/* INLINE-ARGS */V191,VV[106],VV[107],list(4,VV[85],VV[108],/* INLINE-ARGS */V193,list(2,VV[95],(V187)))));
	{object V195 = list(4,VV[14],/* INLINE-ARGS */V189,VV[100],list(5,VV[14],VV[101],VV[102],/* INLINE-ARGS */V194,list(3,VV[113],VV[114],list(2,VV[95],(V187)))));
	VMR29(V195)}
	return Cnil;
}
/*	local entry for function EMIT-GREATER-THAN-1-DLAP	*/

static object LI30(V199,V200,V201)

register object V199;object V200;register object V201;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V202;
	V203 = CMPmake_fixnum((long)length((V199)));
	if(((V201))==Cnil){
	goto T285;}
	V204= small_fixnum(1);
	goto T283;
	goto T285;
T285:;
	V204= small_fixnum(0);
	goto T283;
T283:;
	V205= number_plus(V203,V204);
	V202= (*(LnkLI178))(/* INLINE-ARGS */V205);
	V206= (*(LnkLI179))((V199),(V200));
	V207= list(3,VV[29],VV[121],list(3,VV[122],VV[123],list(3,VV[124],VV[125],(V202))));
	{object V209;
	object V210= (V199);
	if(V210==Cnil){
	V208= Cnil;
	goto T287;}
	base[0]=V209=MMcons(Cnil,Cnil);
	goto T288;
T288:;
	(V209->c.c_car)= list(3,VV[44],(V210->c.c_car),VV[127]);
	if((V210=MMcdr(V210))==Cnil){
	V208= base[0];
	goto T287;}
	V209=MMcdr(V209)=MMcons(Cnil,Cnil);
	goto T288;}
	goto T287;
T287:;
	V212= make_cons(VV[126],V208);
	if(((V201))==Cnil){
	goto T292;}
	V213= list(2,VV[128],list(3,VV[29],(V201),VV[129]));
	goto T290;
	goto T292;
T292:;
	V213= Cnil;
	goto T290;
T290:;
	V214= listA(3,VV[85],/* INLINE-ARGS */V212,append(V213,VV[130]));
	{object V216;
	object V217= (V199);
	if(V217==Cnil){
	V215= Cnil;
	goto T294;}
	base[0]=V216=MMcons(Cnil,Cnil);
	goto T295;
T295:;
	(V216->c.c_car)= list(3,VV[44],(V217->c.c_car),VV[136]);
	if((V217=MMcdr(V217))==Cnil){
	V215= base[0];
	goto T294;}
	V216=MMcdr(V216)=MMcons(Cnil,Cnil);
	goto T295;}
	goto T294;
T294:;
	V219= make_cons(VV[126],V215);
	if(((V201))==Cnil){
	goto T299;}
	V221= list(3,VV[29],(V201),VV[137]);
	V220= make_cons(/* INLINE-ARGS */V221,Cnil);
	goto T297;
	goto T299;
T299:;
	V220= Cnil;
	goto T297;
T297:;
	V222= list(3,VV[91],VV[134],list(3,VV[14],VV[135],listA(3,VV[85],/* INLINE-ARGS */V219,append(V220,VV[138]))));
	V223= list(3,VV[70],VV[83],list(6,VV[84],/* INLINE-ARGS */V207,/* INLINE-ARGS */V214,VV[131],VV[132],list(4,VV[85],VV[133],/* INLINE-ARGS */V222,list(2,VV[95],(V200)))));
	{object V224 = list(5,VV[14],VV[115],VV[116],/* INLINE-ARGS */V206,list(4,VV[14],VV[117],VV[118],list(5,VV[14],VV[119],VV[120],/* INLINE-ARGS */V223,list(3,VV[113],VV[139],list(2,VV[95],(V200))))));
	VMR30(V224)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EMIT-1-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI31(V227,V228)

object V227;object V228;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	V229= list(2,VV[140],list(3,VV[40],(V227),VV[141]));
	V230= make_cons(/* INLINE-ARGS */V229,Cnil);
	V231= list(3,VV[85],VV[143],list(2,VV[95],(V228)));
	V232= list(3,VV[122],VV[123],VV[144]);
	{object V234 = list(5,VV[14],/* INLINE-ARGS */V230,VV[142],/* INLINE-ARGS */V231,V232);
	VMR31(V234)}
	return Cnil;
}
/*	local entry for function EMIT-N-WRAPPER-COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI32(V237,V238)

object V237;object V238;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register long V240;
	long V241;
	V240= 0;
	V241= (long)length((V237));
	{object V242;
	object V243= (V237);
	if(V243==Cnil){
	V239= Cnil;
	goto T302;}
	base[0]=V242=MMcons(Cnil,Cnil);
	goto T305;
T305:;
	V245= list(2,VV[140],list(3,VV[40],(V243->c.c_car),VV[141]));
	V246= make_cons(/* INLINE-ARGS */V245,Cnil);
	V247= list(3,VV[85],VV[147],list(2,VV[95],(V238)));
	V240= (long)(V240)+(1);
	if(((long)(V240>=0&&(4)>0?(V240)%(4):imod(V240,4)))==0){
	goto T310;}
	if(!((V240)==(V241))){
	goto T311;}
	goto T310;
T310:;
	V249= list(3,VV[122],VV[123],VV[149]);
	V251= list(3,VV[29],VV[80],V249);
	V248= make_cons(/* INLINE-ARGS */V251,Cnil);
	goto T307;
	goto T311;
T311:;
	V248= Cnil;
	goto T307;
T307:;
	(V242->c.c_car)= listA(6,VV[14],/* INLINE-ARGS */V246,VV[146],/* INLINE-ARGS */V247,VV[148],V248);
	if((V243=MMcdr(V243))==Cnil){
	V239= base[0];
	goto T302;}
	V242=MMcdr(V242)=MMcons(Cnil,Cnil);
	goto T305;}}
	goto T302;
T302:;
	{object V252 = make_cons(VV[145],V239);
	VMR32(V252)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EMIT-FETCH-WRAPPER	*/

static object LI33(object V255,object V254,object V253,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V256;
	register object V257;
	object V258;
	register object V259;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V256= V255;
	V257= V254;
	V258= V253;
	narg = narg - 3;
	if (narg <= 0) goto T316;
	else {
	V259= first;}
	--narg; goto T317;
	goto T316;
T316:;
	V259= Cnil;
	goto T317;
T317:;
	{object V260= (V256);
	if((V260!= VV[180]))goto T319;
	V261= list(2,VV[28],(V257));
	if(((V259))==Cnil){
	goto T322;}
	V263= list(3,VV[29],(V259),list(2,VV[30],(V257)));
	V262= make_cons(/* INLINE-ARGS */V263,Cnil);
	goto T320;
	goto T322;
T322:;
	V262= Cnil;
	goto T320;
T320:;
	V264= list(2,VV[31],(V257));
	V265= make_cons(/* INLINE-ARGS */V264,Cnil);
	V266= append(V262,/* INLINE-ARGS */V265);
	V267= make_cons(/* INLINE-ARGS */V261,/* INLINE-ARGS */V266);
	V268= list(2,VV[32],(V257));
	if(((V259))==Cnil){
	goto T326;}
	V270= list(3,VV[29],(V259),list(2,VV[33],(V257)));
	V269= make_cons(/* INLINE-ARGS */V270,Cnil);
	goto T324;
	goto T326;
T326:;
	V269= Cnil;
	goto T324;
T324:;
	V271= list(2,VV[34],(V257));
	V272= make_cons(/* INLINE-ARGS */V271,Cnil);
	V273= append(V269,/* INLINE-ARGS */V272);
	V274= make_cons(/* INLINE-ARGS */V268,/* INLINE-ARGS */V273);
	{object V275 = list(4,VV[27],/* INLINE-ARGS */V267,/* INLINE-ARGS */V274,list(2,Ct,list(2,VV[95],(V258))));
	VMR33(V275)}
	goto T319;
T319:;
	if((V260!= VV[181]))goto T328;
	if(((V259))==Cnil){
	goto T329;}
	base[0]= VV[150];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T329;
T329:;
	{object V276 = list(2,VV[151],(V257));
	VMR33(V276)}
	goto T328;
T328:;
	if((V260!= VV[182])
	&& (V260!= VV[183]))goto T333;
	if(((V259))==Cnil){
	goto T334;}
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T334;
T334:;
	{object V277 = list(2,VV[153],(V257));
	VMR33(V277)}
	goto T333;
T333:;
	FEerror("The ECASE key value ~s is illegal.",1,V260);
	{object V278 = Cnil;
	VMR33(V278)}}
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

