
#include "cmpinclude.h"
#include "clcs_precom.h"
void init_clcs_precom(){do_init(VV);}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 0)2193	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= VV[17];
	base[2]= VV[4];
	base[3]= VV[5];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	local entry for function progn 'compile2300	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk19)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR2(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 1)2193	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[6];
	base[1]= VV[20];
	base[2]= VV[4];
	base[3]= VV[8];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	local entry for function progn 'compile2411	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk21)();
	vs_top=sup;
	{object V2 = Cnil;
	VMR4(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 2)2193	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[9];
	base[1]= VV[22];
	base[2]= VV[4];
	base[3]= VV[11];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	local entry for function progn 'compile2574	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk23)();
	vs_top=sup;
	{object V3 = Cnil;
	VMR6(V3)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 3)2193	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= VV[24];
	base[2]= VV[4];
	base[3]= VV[16];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	local entry for function progn 'compile2801	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk25)();
	vs_top=sup;
	{object V4 = Cnil;
	VMR8(V4)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2805	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	{object V5 = Cnil;
	VMR9(V5)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC13(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC14,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{register object V6;
	object V7;
	check_arg(2);
	V6=(base[0]);
	V7=(base[1]);
	vs_top=sup;
	{register object V8;
	object V9;
	register object V10;
	register object V11;
	object V12;
	register object V13;
	V9= CMPcar((base0[1]->c.c_car));
	V8= (V7);
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	V13= Cnil;
	if(type_of(V6)==t_structure){
	goto T35;}
	goto T33;
	goto T35;
T35:;
	if(!(((V6)->str.str_def)==(VV[13]))){
	goto T33;}
	V10= STREF(object,(V6),4);
	V11= STREF(object,(V6),0);
	goto T31;
	goto T33;
T33:;{object V15;
	V15= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V6);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	V16= vs_base[0];
	if(!((V15)==(CMPcar(V16)))){
	goto T41;}}
	V10= CMPcar(((V6))->cc.cc_turbo[12]);
	V11= CMPcar(((V6))->cc.cc_turbo[13]);
	goto T31;
	goto T41;
T41:;
	base[2]= (V6);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk28)();
	vs_top=sup;
	V11= vs_base[0];
	goto T31;
T31:;
	V12= ((V11))->v.v_self[11];
	V8= CMPcdr((V8));
	{object V17;
	V17= CMPcar((V8));
	V8= CMPcdr((V8));
	V13= (V17);}
	(void)(((V10))->v.v_self[8]= ((V13)));
	V8= CMPcdr((V8));
	{object V18;
	V18= CMPcar((V8));
	V8= CMPcdr((V8));
	V13= (V18);}
	(void)(((V10))->v.v_self[0]= ((V13)));
	V8= CMPcdr((V8));
	{object V19;
	V19= CMPcar((V8));
	V8= CMPcdr((V8));
	V13= (V19);}
	(void)(((V10))->v.v_self[3]= ((V13)));
	V8= CMPcdr((V8));
	{object V20;
	V20= CMPcar((V8));
	V8= CMPcdr((V8));
	V13= (V20);}
	(void)(((V10))->v.v_self[4]= ((V13)));
	V8= CMPcdr((V8));
	{object V21;
	V21= CMPcar((V8));
	V8= CMPcdr((V8));
	V13= (V21);}
	(void)(((V10))->v.v_self[5]= ((V13)));
	V8= CMPcdr((V8));
	{object V22;
	V22= CMPcar((V8));
	V8= CMPcdr((V8));
	V13= (V22);}
	(void)(((V10))->v.v_self[6]= ((V13)));
	if(!((((V10))->v.v_self[1])==(VV[14]))){
	goto T101;}
	V13= Cnil;
	(void)(((V10))->v.v_self[1]= ((V13)));
	goto T101;
T101:;
	if(!((((V10))->v.v_self[2])==(VV[14]))){
	goto T106;}
	V13= Cnil;
	(void)(((V10))->v.v_self[2]= ((V13)));
	goto T106;
T106:;
	if(!((((V10))->v.v_self[7])==(VV[14]))){
	goto T111;}
	V13= ((base0[0]->c.c_car))->v.v_self[9];
	(void)(((V10))->v.v_self[7]= ((V13)));
	goto T111;
T111:;
	if(!((((V10))->v.v_self[9])==(VV[14]))){
	goto T23;}
	V13= VV[15];
	(void)(((V10))->v.v_self[9]= ((V13)));}
	goto T23;
T23:;
	base[2]= (V7);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V23;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V23=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC15,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{register object V24;
	object V25;
	check_arg(2);
	V24=(base[0]);
	V25=(base[1]);
	vs_top=sup;
	{register object V26;
	object V27;
	register object V28;
	register object V29;
	object V30;
	register object V31;
	V27= CMPcar((base0[0]->c.c_car));
	V26= (V25);
	V28= Cnil;
	V29= Cnil;
	V30= Cnil;
	V31= Cnil;
	if(type_of(V24)==t_structure){
	goto T132;}
	goto T130;
	goto T132;
T132:;
	if(!(((V24)->str.str_def)==(VV[10]))){
	goto T130;}
	V28= STREF(object,(V24),4);
	V29= STREF(object,(V24),0);
	goto T128;
	goto T130;
T130:;{object V33;
	V33= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V24);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	V34= vs_base[0];
	if(!((V33)==(CMPcar(V34)))){
	goto T138;}}
	V28= CMPcar(((V24))->cc.cc_turbo[12]);
	V29= CMPcar(((V24))->cc.cc_turbo[13]);
	goto T128;
	goto T138;
T138:;
	base[2]= (V24);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk28)();
	vs_top=sup;
	V29= vs_base[0];
	goto T128;
T128:;
	V30= ((V29))->v.v_self[11];
	V26= (V25);
	V26= CMPcdr((V26));
	{object V35;
	V35= CMPcar((V26));
	V26= CMPcdr((V26));
	V31= (V35);}
	(void)(((V28))->v.v_self[8]= ((V31)));
	V26= CMPcdr((V26));
	{object V36;
	V36= CMPcar((V26));
	V26= CMPcdr((V26));
	V31= (V36);}
	(void)(((V28))->v.v_self[0]= ((V31)));
	V26= CMPcdr((V26));
	{object V37;
	V37= CMPcar((V26));
	V26= CMPcdr((V26));
	V31= (V37);}
	(void)(((V28))->v.v_self[3]= ((V31)));
	V26= CMPcdr((V26));
	{object V38;
	V38= CMPcar((V26));
	V26= CMPcdr((V26));
	V31= (V38);}
	(void)(((V28))->v.v_self[4]= ((V31)));
	V26= CMPcdr((V26));
	{object V39;
	V39= CMPcar((V26));
	V26= CMPcdr((V26));
	V31= (V39);}
	(void)(((V28))->v.v_self[5]= ((V31)));
	V26= CMPcdr((V26));
	{object V40;
	V40= CMPcar((V26));
	V26= CMPcdr((V26));
	V31= (V40);}
	(void)(((V28))->v.v_self[6]= ((V31)));}
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V41;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V41=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC16,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{register object V42;
	object V43;
	check_arg(2);
	V42=(base[0]);
	V43=(base[1]);
	vs_top=sup;
	{register object V44;
	object V45;
	register object V46;
	register object V47;
	object V48;
	register object V49;
	V45= CMPcar((base0[0]->c.c_car));
	V44= (V43);
	V46= Cnil;
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	if(type_of(V42)==t_structure){
	goto T211;}
	goto T209;
	goto T211;
T211:;
	if(!(((V42)->str.str_def)==(VV[7]))){
	goto T209;}
	V46= STREF(object,(V42),4);
	V47= STREF(object,(V42),0);
	goto T207;
	goto T209;
T209:;{object V51;
	V51= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V42);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	V52= vs_base[0];
	if(!((V51)==(CMPcar(V52)))){
	goto T217;}}
	V46= CMPcar(((V42))->cc.cc_turbo[12]);
	V47= CMPcar(((V42))->cc.cc_turbo[13]);
	goto T207;
	goto T217;
T217:;
	base[2]= (V42);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk28)();
	vs_top=sup;
	V47= vs_base[0];
	goto T207;
T207:;
	V48= ((V47))->v.v_self[11];
	V44= CMPcdr((V44));
	{object V53;
	V53= CMPcar((V44));
	V44= CMPcdr((V44));
	V49= (V53);}
	(void)(((V46))->v.v_self[1]= ((V49)));
	V44= CMPcdr((V44));
	{object V54;
	V54= CMPcar((V44));
	V44= CMPcdr((V44));
	V49= (V54);}
	(void)(((V46))->v.v_self[0]= ((V49)));}
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V55;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V55=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC17,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{register object V56;
	object V57;
	check_arg(2);
	V56=(base[0]);
	V57=(base[1]);
	vs_top=sup;
	{register object V58;
	object V59;
	register object V60;
	register object V61;
	object V62;
	register object V63;
	V59= CMPcar((base0[0]->c.c_car));
	V58= (V57);
	V60= Cnil;
	V61= Cnil;
	V62= Cnil;
	V63= Cnil;
	if(type_of(V56)==t_structure){
	goto T256;}
	goto T254;
	goto T256;
T256:;
	if(!(((V56)->str.str_def)==(VV[1]))){
	goto T254;}
	V60= STREF(object,(V56),4);
	V61= STREF(object,(V56),0);
	goto T252;
	goto T254;
T254:;{object V65;
	V65= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V56);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	V66= vs_base[0];
	if(!((V65)==(CMPcar(V66)))){
	goto T262;}}
	V60= CMPcar(((V56))->cc.cc_turbo[12]);
	V61= CMPcar(((V56))->cc.cc_turbo[13]);
	goto T252;
	goto T262;
T262:;
	base[2]= (V56);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk28)();
	vs_top=sup;
	V61= vs_base[0];
	goto T252;
T252:;
	V62= ((V61))->v.v_self[11];
	V58= (V57);
	V58= CMPcdr((V58));
	{object V67;
	V67= CMPcar((V58));
	V58= CMPcdr((V58));
	V63= (V67);}
	(void)(((V60))->v.v_self[1]= ((V63)));
	V58= CMPcdr((V58));
	{object V68;
	V68= CMPcar((V58));
	V58= CMPcdr((V58));
	V63= (V68);}
	(void)(((V60))->v.v_self[0]= ((V63)));}
	base[2]= (V57);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
static void LnkT28(){ call_or_link(VV[28],(void **)(void *)&Lnk28);} /* WRAPPER-OF */
static void LnkT27(){ call_or_link(VV[27],(void **)(void *)&Lnk27);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* COMPILE-IIS-FUNCTIONS */
static void LnkT25(){ call_or_link(VV[25],(void **)(void *)&Lnk25);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 3)2193 */
static void LnkT23(){ call_or_link(VV[23],(void **)(void *)&Lnk23);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 2)2193 */
static void LnkT21(){ call_or_link(VV[21],(void **)(void *)&Lnk21);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 1)2193 */
static void LnkT19(){ call_or_link(VV[19],(void **)(void *)&Lnk19);} /* (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 0)2193 */
static void LnkT18(){ call_or_link(VV[18],(void **)(void *)&Lnk18);} /* LOAD-PRECOMPILED-IIS-ENTRY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

