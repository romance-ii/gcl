
#include "cmpinclude.h"
#include "clcs_precom.h"
void init_clcs_precom(){do_init(VV);}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 0)1788	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= VV[23];
	base[2]= VV[4];
	base[3]= VV[5];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk24)();
	return;
}
/*	local entry for function progn 'compile1791	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk25)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR2(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 1)1788	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[6];
	base[1]= VV[26];
	base[2]= VV[4];
	base[3]= VV[8];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk24)();
	return;
}
/*	local entry for function progn 'compile1794	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk27)();
	vs_top=sup;
	{object V2 = Cnil;
	VMR4(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 2)1788	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[9];
	base[1]= VV[28];
	base[2]= VV[4];
	base[3]= VV[11];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk24)();
	return;
}
/*	local entry for function progn 'compile1801	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk29)();
	vs_top=sup;
	{object V3 = Cnil;
	VMR6(V3)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 3)1788	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= VV[30];
	base[2]= VV[4];
	base[3]= VV[16];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk24)();
	return;
}
/*	local entry for function progn 'compile1808	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk31)();
	vs_top=sup;
	{object V4 = Cnil;
	VMR8(V4)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 4)1788	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[17];
	base[1]= VV[32];
	base[2]= VV[4];
	base[3]= VV[19];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk24)();
	return;
}
/*	local entry for function progn 'compile1810	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk33)();
	vs_top=sup;
	{object V5 = Cnil;
	VMR10(V5)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 5)1788	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[20];
	base[1]= VV[34];
	base[2]= VV[4];
	base[3]= VV[22];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk24)();
	return;
}
/*	local entry for function progn 'compile1812	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk35)();
	vs_top=sup;
	{object V6 = Cnil;
	VMR12(V6)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1812	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk36)();
	vs_top=sup;
	{object V7 = Cnil;
	VMR13(V7)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V8;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V8=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC20,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{register object V9;
	object V10;
	check_arg(2);
	V9=(base[0]);
	V10=(base[1]);
	vs_top=sup;
	{register object V11;
	object V12;
	register object V13;
	register object V14;
	object V15;
	object V16;
	V12= CMPcar((base0[0]->c.c_car));
	V11= (V10);
	V13= Cnil;
	V14= Cnil;
	V15= Cnil;
	V16= Cnil;
	if(type_of(V9)==t_structure){
	goto T45;}
	goto T43;
	goto T45;
T45:;
	if(!(((V9)->str.str_def)==(VV[21]))){
	goto T43;}
	V13= STREF(object,(V9),4);
	V14= STREF(object,(V9),0);
	goto T41;
	goto T43;
T43:;{object V18;
	V18= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V9);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk37)();
	vs_top=sup;
	V19= vs_base[0];
	if(!((V18)==(CMPcar(V19)))){
	goto T51;}}
	V13= CMPcar(((V9))->cc.cc_turbo[12]);
	V14= CMPcar(((V9))->cc.cc_turbo[13]);
	goto T41;
	goto T51;
T51:;
	base[2]= (V9);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk38)();
	vs_top=sup;
	V14= vs_base[0];
	goto T41;
T41:;
	V15= ((V14))->v.v_self[11];
	V11= CMPcdr(CMPcddddr((V11)));
	{object V20;
	V20= CMPcar((V11));
	V11= CMPcdr((V11));
	V16= (V20);}
	(void)(((V13))->v.v_self[1]= ((V16)));}
	base[2]= (V10);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC21,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{register object V21;
	object V22;
	check_arg(2);
	V21=(base[0]);
	V22=(base[1]);
	vs_top=sup;
	{register object V23;
	object V24;
	register object V25;
	register object V26;
	object V27;
	register object V28;
	V24= CMPcar((base0[1]->c.c_car));
	V23= (V22);
	V25= Cnil;
	V26= Cnil;
	V27= Cnil;
	V28= Cnil;
	if(type_of(V21)==t_structure){
	goto T82;}
	goto T80;
	goto T82;
T82:;
	if(!(((V21)->str.str_def)==(VV[18]))){
	goto T80;}
	V25= STREF(object,(V21),4);
	V26= STREF(object,(V21),0);
	goto T78;
	goto T80;
T80:;{object V30;
	V30= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V21);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk37)();
	vs_top=sup;
	V31= vs_base[0];
	if(!((V30)==(CMPcar(V31)))){
	goto T88;}}
	V25= CMPcar(((V21))->cc.cc_turbo[12]);
	V26= CMPcar(((V21))->cc.cc_turbo[13]);
	goto T78;
	goto T88;
T88:;
	base[2]= (V21);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk38)();
	vs_top=sup;
	V26= vs_base[0];
	goto T78;
T78:;
	V27= ((V26))->v.v_self[11];
	V23= CMPcdr(CMPcddddr((V23)));
	{object V32;
	V32= CMPcar((V23));
	V23= CMPcdr((V23));
	V28= (V32);}
	(void)(((V25))->v.v_self[1]= ((V28)));
	if(!((((V25))->v.v_self[0])==(VV[14]))){
	goto T108;}
	V28= Cnil;
	(void)(((V25))->v.v_self[0]= ((V28)));
	goto T108;
T108:;
	if(!((((V25))->v.v_self[2])==(VV[14]))){
	goto T113;}
	V28= Cnil;
	(void)(((V25))->v.v_self[2]= ((V28)));
	goto T113;
T113:;
	if(!((((V25))->v.v_self[3])==(VV[14]))){
	goto T118;}
	V28= Cnil;
	(void)(((V25))->v.v_self[3]= ((V28)));
	goto T118;
T118:;
	if(!((((V25))->v.v_self[4])==(VV[14]))){
	goto T123;}
	V28= Cnil;
	(void)(((V25))->v.v_self[4]= ((V28)));
	goto T123;
T123:;
	if(!((((V25))->v.v_self[5])==(VV[14]))){
	goto T128;}
	V28= Cnil;
	(void)(((V25))->v.v_self[5]= ((V28)));
	goto T128;
T128:;
	if(!((((V25))->v.v_self[6])==(VV[14]))){
	goto T133;}
	V28= Cnil;
	(void)(((V25))->v.v_self[6]= ((V28)));
	goto T133;
T133:;
	if(!((((V25))->v.v_self[7])==(VV[14]))){
	goto T138;}
	V28= (
	V33 = ((base0[0]->c.c_car))->v.v_self[8],
	(type_of(V33) == t_sfun ?(*((V33)->sfn.sfn_self)):
	(fcall.fun=(V33),fcall.argd=0,fcalln))());
	(void)(((V25))->v.v_self[7]= ((V28)));
	goto T138;
T138:;
	if(!((((V25))->v.v_self[8])==(VV[14]))){
	goto T143;}
	V28= Cnil;
	(void)(((V25))->v.v_self[8]= ((V28)));
	goto T143;
T143:;
	if(!((((V25))->v.v_self[10])==(VV[14]))){
	goto T148;}
	V28= Cnil;
	(void)(((V25))->v.v_self[10]= ((V28)));
	goto T148;
T148:;
	if(!((((V25))->v.v_self[11])==(VV[14]))){
	goto T153;}
	V28= Cnil;
	(void)(((V25))->v.v_self[11]= ((V28)));
	goto T153;
T153:;
	if(!((((V25))->v.v_self[12])==(VV[14]))){
	goto T158;}
	V28= Cnil;
	(void)(((V25))->v.v_self[12]= ((V28)));
	goto T158;
T158:;
	if(!((((V25))->v.v_self[13])==(VV[14]))){
	goto T163;}
	V28= Cnil;
	(void)(((V25))->v.v_self[13]= ((V28)));
	goto T163;
T163:;
	if(!((((V25))->v.v_self[14])==(VV[14]))){
	goto T168;}
	V28= Cnil;
	(void)(((V25))->v.v_self[14]= ((V28)));
	goto T168;
T168:;
	if(!((((V25))->v.v_self[15])==(VV[14]))){
	goto T173;}
	V28= Cnil;
	(void)(((V25))->v.v_self[15]= ((V28)));
	goto T173;
T173:;
	if(!((((V25))->v.v_self[16])==(VV[14]))){
	goto T70;}
	V28= Cnil;
	(void)(((V25))->v.v_self[16]= ((V28)));}
	goto T70;
T70:;
	base[2]= (V22);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC22,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{register object V34;
	object V35;
	check_arg(2);
	V34=(base[0]);
	V35=(base[1]);
	vs_top=sup;
	{register object V36;
	object V37;
	register object V38;
	register object V39;
	object V40;
	register object V41;
	V37= CMPcar((base0[1]->c.c_car));
	V36= (V35);
	V38= Cnil;
	V39= Cnil;
	V40= Cnil;
	V41= Cnil;
	if(type_of(V34)==t_structure){
	goto T194;}
	goto T192;
	goto T194;
T194:;
	if(!(((V34)->str.str_def)==(VV[13]))){
	goto T192;}
	V38= STREF(object,(V34),4);
	V39= STREF(object,(V34),0);
	goto T190;
	goto T192;
T192:;{object V43;
	V43= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V34);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk37)();
	vs_top=sup;
	V44= vs_base[0];
	if(!((V43)==(CMPcar(V44)))){
	goto T200;}}
	V38= CMPcar(((V34))->cc.cc_turbo[12]);
	V39= CMPcar(((V34))->cc.cc_turbo[13]);
	goto T190;
	goto T200;
T200:;
	base[2]= (V34);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk38)();
	vs_top=sup;
	V39= vs_base[0];
	goto T190;
T190:;
	V40= ((V39))->v.v_self[11];
	V36= CMPcdr((V36));
	{object V45;
	V45= CMPcar((V36));
	V36= CMPcdr((V36));
	V41= (V45);}
	(void)(((V38))->v.v_self[8]= ((V41)));
	V36= CMPcdr((V36));
	{object V46;
	V46= CMPcar((V36));
	V36= CMPcdr((V36));
	V41= (V46);}
	(void)(((V38))->v.v_self[0]= ((V41)));
	V36= CMPcdr((V36));
	{object V47;
	V47= CMPcar((V36));
	V36= CMPcdr((V36));
	V41= (V47);}
	(void)(((V38))->v.v_self[3]= ((V41)));
	V36= CMPcdr((V36));
	{object V48;
	V48= CMPcar((V36));
	V36= CMPcdr((V36));
	V41= (V48);}
	(void)(((V38))->v.v_self[4]= ((V41)));
	V36= CMPcdr((V36));
	{object V49;
	V49= CMPcar((V36));
	V36= CMPcdr((V36));
	V41= (V49);}
	(void)(((V38))->v.v_self[5]= ((V41)));
	V36= CMPcdr((V36));
	{object V50;
	V50= CMPcar((V36));
	V36= CMPcdr((V36));
	V41= (V50);}
	(void)(((V38))->v.v_self[6]= ((V41)));
	if(!((((V38))->v.v_self[1])==(VV[14]))){
	goto T260;}
	V41= Cnil;
	(void)(((V38))->v.v_self[1]= ((V41)));
	goto T260;
T260:;
	if(!((((V38))->v.v_self[2])==(VV[14]))){
	goto T265;}
	V41= Cnil;
	(void)(((V38))->v.v_self[2]= ((V41)));
	goto T265;
T265:;
	if(!((((V38))->v.v_self[7])==(VV[14]))){
	goto T270;}
	V41= ((base0[0]->c.c_car))->v.v_self[9];
	(void)(((V38))->v.v_self[7]= ((V41)));
	goto T270;
T270:;
	if(!((((V38))->v.v_self[9])==(VV[14]))){
	goto T182;}
	V41= VV[15];
	(void)(((V38))->v.v_self[9]= ((V41)));}
	goto T182;
T182:;
	base[2]= (V35);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V51;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V51=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC23,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{register object V52;
	object V53;
	check_arg(2);
	V52=(base[0]);
	V53=(base[1]);
	vs_top=sup;
	{register object V54;
	object V55;
	register object V56;
	register object V57;
	object V58;
	register object V59;
	V55= CMPcar((base0[0]->c.c_car));
	V54= (V53);
	V56= Cnil;
	V57= Cnil;
	V58= Cnil;
	V59= Cnil;
	if(type_of(V52)==t_structure){
	goto T291;}
	goto T289;
	goto T291;
T291:;
	if(!(((V52)->str.str_def)==(VV[10]))){
	goto T289;}
	V56= STREF(object,(V52),4);
	V57= STREF(object,(V52),0);
	goto T287;
	goto T289;
T289:;{object V61;
	V61= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V52);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk37)();
	vs_top=sup;
	V62= vs_base[0];
	if(!((V61)==(CMPcar(V62)))){
	goto T297;}}
	V56= CMPcar(((V52))->cc.cc_turbo[12]);
	V57= CMPcar(((V52))->cc.cc_turbo[13]);
	goto T287;
	goto T297;
T297:;
	base[2]= (V52);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk38)();
	vs_top=sup;
	V57= vs_base[0];
	goto T287;
T287:;
	V58= ((V57))->v.v_self[11];
	V54= (V53);
	V54= CMPcdr((V54));
	{object V63;
	V63= CMPcar((V54));
	V54= CMPcdr((V54));
	V59= (V63);}
	(void)(((V56))->v.v_self[8]= ((V59)));
	V54= CMPcdr((V54));
	{object V64;
	V64= CMPcar((V54));
	V54= CMPcdr((V54));
	V59= (V64);}
	(void)(((V56))->v.v_self[0]= ((V59)));
	V54= CMPcdr((V54));
	{object V65;
	V65= CMPcar((V54));
	V54= CMPcdr((V54));
	V59= (V65);}
	(void)(((V56))->v.v_self[3]= ((V59)));
	V54= CMPcdr((V54));
	{object V66;
	V66= CMPcar((V54));
	V54= CMPcdr((V54));
	V59= (V66);}
	(void)(((V56))->v.v_self[4]= ((V59)));
	V54= CMPcdr((V54));
	{object V67;
	V67= CMPcar((V54));
	V54= CMPcdr((V54));
	V59= (V67);}
	(void)(((V56))->v.v_self[5]= ((V59)));
	V54= CMPcdr((V54));
	{object V68;
	V68= CMPcar((V54));
	V54= CMPcdr((V54));
	V59= (V68);}
	(void)(((V56))->v.v_self[6]= ((V59)));}
	base[2]= (V53);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V69;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V69=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC24,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{register object V70;
	object V71;
	check_arg(2);
	V70=(base[0]);
	V71=(base[1]);
	vs_top=sup;
	{register object V72;
	object V73;
	register object V74;
	register object V75;
	object V76;
	register object V77;
	V73= CMPcar((base0[0]->c.c_car));
	V72= (V71);
	V74= Cnil;
	V75= Cnil;
	V76= Cnil;
	V77= Cnil;
	if(type_of(V70)==t_structure){
	goto T370;}
	goto T368;
	goto T370;
T370:;
	if(!(((V70)->str.str_def)==(VV[7]))){
	goto T368;}
	V74= STREF(object,(V70),4);
	V75= STREF(object,(V70),0);
	goto T366;
	goto T368;
T368:;{object V79;
	V79= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V70);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk37)();
	vs_top=sup;
	V80= vs_base[0];
	if(!((V79)==(CMPcar(V80)))){
	goto T376;}}
	V74= CMPcar(((V70))->cc.cc_turbo[12]);
	V75= CMPcar(((V70))->cc.cc_turbo[13]);
	goto T366;
	goto T376;
T376:;
	base[2]= (V70);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk38)();
	vs_top=sup;
	V75= vs_base[0];
	goto T366;
T366:;
	V76= ((V75))->v.v_self[11];
	V72= CMPcdr((V72));
	{object V81;
	V81= CMPcar((V72));
	V72= CMPcdr((V72));
	V77= (V81);}
	(void)(((V74))->v.v_self[1]= ((V77)));
	V72= CMPcdr((V72));
	{object V82;
	V82= CMPcar((V72));
	V72= CMPcdr((V72));
	V77= (V82);}
	(void)(((V74))->v.v_self[0]= ((V77)));}
	base[2]= (V71);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V83;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V83=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC25,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{register object V84;
	object V85;
	check_arg(2);
	V84=(base[0]);
	V85=(base[1]);
	vs_top=sup;
	{register object V86;
	object V87;
	register object V88;
	register object V89;
	object V90;
	register object V91;
	V87= CMPcar((base0[0]->c.c_car));
	V86= (V85);
	V88= Cnil;
	V89= Cnil;
	V90= Cnil;
	V91= Cnil;
	if(type_of(V84)==t_structure){
	goto T415;}
	goto T413;
	goto T415;
T415:;
	if(!(((V84)->str.str_def)==(VV[1]))){
	goto T413;}
	V88= STREF(object,(V84),4);
	V89= STREF(object,(V84),0);
	goto T411;
	goto T413;
T413:;{object V93;
	V93= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk37)();
	vs_top=sup;
	V94= vs_base[0];
	if(!((V93)==(CMPcar(V94)))){
	goto T421;}}
	V88= CMPcar(((V84))->cc.cc_turbo[12]);
	V89= CMPcar(((V84))->cc.cc_turbo[13]);
	goto T411;
	goto T421;
T421:;
	base[2]= (V84);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk38)();
	vs_top=sup;
	V89= vs_base[0];
	goto T411;
T411:;
	V90= ((V89))->v.v_self[11];
	V86= (V85);
	V86= CMPcdr((V86));
	{object V95;
	V95= CMPcar((V86));
	V86= CMPcdr((V86));
	V91= (V95);}
	(void)(((V88))->v.v_self[1]= ((V91)));
	V86= CMPcdr((V86));
	{object V96;
	V96= CMPcar((V86));
	V86= CMPcdr((V86));
	V91= (V96);}
	(void)(((V88))->v.v_self[0]= ((V91)));}
	base[2]= (V85);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
static void LnkT38(){ call_or_link(VV[38],(void **)&Lnk38);} /* WRAPPER-OF */
static void LnkT37(){ call_or_link(VV[37],(void **)&Lnk37);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT36(){ call_or_link(VV[36],(void **)&Lnk36);} /* COMPILE-IIS-FUNCTIONS */
static void LnkT35(){ call_or_link(VV[35],(void **)&Lnk35);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 5)1788 */
static void LnkT33(){ call_or_link(VV[33],(void **)&Lnk33);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 4)1788 */
static void LnkT31(){ call_or_link(VV[31],(void **)&Lnk31);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 3)1788 */
static void LnkT29(){ call_or_link(VV[29],(void **)&Lnk29);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 2)1788 */
static void LnkT27(){ call_or_link(VV[27],(void **)&Lnk27);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 1)1788 */
static void LnkT25(){ call_or_link(VV[25],(void **)&Lnk25);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 0)1788 */
static void LnkT24(){ call_or_link(VV[24],(void **)&Lnk24);} /* LOAD-PRECOMPILED-IIS-ENTRY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

