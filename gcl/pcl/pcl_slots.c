
#include "cmpinclude.h"
#include "pcl_slots.h"
void init_pcl_slots(){do_init(VV);}
/*	local entry for function (FAST-METHOD WRAPPER-FETCHER (STANDARD-CLASS))	*/

static object LI1(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V8 = VV[0];
	VMR1(V8)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOTS-FETCHER (STANDARD-CLASS))	*/

static object LI2(V12,V13,V14)

object V12;object V13;object V14;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V16 = VV[1];
	VMR2(V16)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD RAW-INSTANCE-ALLOCATOR (STANDARD-CLASS))	*/

static object LI3(V20,V21,V22)

object V20;object V21;object V22;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V24 = VV[2];
	VMR3(V24)}
	return Cnil;
}
/*	local entry for function SET-WRAPPER	*/

static object LI4(V27,V28)

register object V27;object V28;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(type_of(V27)==t_structure){
	goto T13;}
	goto T11;
	goto T13;
T13:;
	if(!(((V27)->str.str_def)==(VV[3]))){
	goto T11;}
	V30 = (V27);
	V31 = (V28);
	V32= Ct;
	STSET(object,V30,0, V31);
	{object V33 = V31;
	VMR4(V33)}
	goto T11;
T11:;{object V34;
	V34= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V27);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V35= vs_base[0];
	if(!((V34)==(CMPcar(V35)))){
	goto T16;}}
	{object V36;
	V36= ((V27))->cc.cc_turbo[13];
	((V36))->c.c_car = V28;
	{object V38 = V28;
	VMR4(V38)}}
	goto T16;
T16:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V39 = vs_base[0];
	VMR4(V39)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SWAP-WRAPPERS-AND-SLOTS	*/

static object LI5(V42,V43)

register object V42;register object V43;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(type_of(V42)==t_structure){
	goto T27;}
	goto T25;
	goto T27;
T27:;
	if(!(((V42)->str.str_def)==(VV[7]))){
	goto T25;}
	{object V45;
	object V46;
	V45= STREF(object,(V42),0);
	V46= STREF(object,(V42),4);
	V47 = (V42);
	V48= Ct;
	STSET(object,V47,0, STREF(object,(V43),0));
	(void)(STREF(object,(V43),0));
	V49 = (V42);
	V50= Ct;
	STSET(object,V49,4, STREF(object,(V43),4));
	(void)(STREF(object,(V43),4));
	V51 = (V43);
	V52 = (V45);
	V53= Ct;
	STSET(object,V51,0, V52);
	(void)(V52);
	V54 = (V43);
	V55 = (V46);
	V56= Ct;
	STSET(object,V54,4, V55);
	{object V57 = V55;
	VMR5(V57)}}
	goto T25;
T25:;{object V58;
	V58= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V42);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V59= vs_base[0];
	if(!((V58)==(CMPcar(V59)))){
	goto T35;}}
	{object V60;
	object V61;
	V60= CMPcar(((V42))->cc.cc_turbo[13]);
	V61= CMPcar(((V42))->cc.cc_turbo[12]);
	{object V62;
	object V63;
	V62= ((V42))->cc.cc_turbo[13];
	V63= CMPcar(((V43))->cc.cc_turbo[13]);
	((V62))->c.c_car = (V63);}
	{object V64;
	object V65;
	V64= ((V42))->cc.cc_turbo[12];
	V65= CMPcar(((V43))->cc.cc_turbo[12]);
	((V64))->c.c_car = (V65);}
	{object V66;
	V66= ((V43))->cc.cc_turbo[13];
	((V66))->c.c_car = V60;}
	{object V68;
	V68= ((V43))->cc.cc_turbo[12];
	((V68))->c.c_car = V61;
	{object V70 = V61;
	VMR5(V70)}}}
	goto T35;
T35:;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V71 = vs_base[0];
	VMR5(V71)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-CLASS-SLOT-VALUE-1	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V72;
	object V73;
	object V74;
	check_arg(3);
	V72=(base[0]);
	V73=(base[1]);
	V74=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V75;
	{register object x= (V74),V76= ((V73))->v.v_self[10];
	while(V76!=Cnil)
	if(eql(x,V76->c.c_car->c.c_car) &&V76->c.c_car != Cnil){
	V75= (V76->c.c_car);
	goto T56;
	}else V76=V76->c.c_cdr;
	V75= Cnil;}
	goto T56;
T56:;
	if(((V75))!=Cnil){
	goto T58;}
	base[3]= ((V73))->v.v_self[11];
	base[4]= (V72);
	base[5]= (V74);
	base[6]= VV[9];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T58;
T58:;
	if(!((CMPcdr((V75)))==((VV[10]->s.s_dbind)))){
	goto T65;}
	base[3]= ((V73))->v.v_self[11];
	base[4]= (V72);
	base[5]= (V74);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T65;
T65:;
	base[3]= CMPcdr((V75));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for SET-CLASS-SLOT-VALUE-1	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V77;
	object V78;
	object V79;
	object V80;
	check_arg(4);
	V77=(base[0]);
	V78=(base[1]);
	V79=(base[2]);
	V80=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V81;
	{register object x= (V80),V82= ((V79))->v.v_self[10];
	while(V82!=Cnil)
	if(eql(x,V82->c.c_car->c.c_car) &&V82->c.c_car != Cnil){
	V81= (V82->c.c_car);
	goto T70;
	}else V82=V82->c.c_cdr;
	V81= Cnil;}
	goto T70;
T70:;
	if(((V81))!=Cnil){
	goto T72;}
	base[4]= ((V79))->v.v_self[11];
	base[5]= (V78);
	base[6]= (V80);
	base[7]= VV[11];
	base[8]= (V77);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T72;
T72:;
	(V81)->c.c_cdr = V77;
	base[4]= V77;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD CLASS-SLOT-VALUE (STD-CLASS T))	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V85;
	object V86;
	object V87;
	object V88;
	check_arg(4);
	V85=(base[0]);
	V86=(base[1]);
	V87=(base[2]);
	V88=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V90;
	object V91;
	base[4]= (V87);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	V90= vs_base[0];
	base[4]= (V87);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk46)(Lclptr46);
	vs_top=sup;
	V91= vs_base[0];
	base[4]= (V91);
	base[5]= (V90);
	base[6]= (V88);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk47)();
	return;}
	}
}
/*	function definition for (FAST-METHOD (SETF CLASS-SLOT-VALUE) (T STD-CLASS T))	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V92;
	object V93;
	object V94;
	object V95;
	object V96;
	check_arg(5);
	V92=(base[0]);
	V93=(base[1]);
	V94=(base[2]);
	V95=(base[3]);
	V96=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V98;
	object V99;
	base[5]= (V95);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	V98= vs_base[0];
	base[5]= (V95);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk46)(Lclptr46);
	vs_top=sup;
	V99= vs_base[0];
	base[5]= (V94);
	base[6]= (V99);
	base[7]= (V98);
	base[8]= (V96);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk48)();
	return;}
	}
}
/*	local entry for function FIND-SLOT-DEFINITION	*/

static object LI10(V102,V103)

object V102;register object V103;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V104;
	register object V105;
	base[2]= (V102);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)(Lclptr49);
	vs_top=sup;
	V104= vs_base[0];
	V105= CMPcar((V104));
	goto T105;
T105:;
	if(!(((V104))==Cnil)){
	goto T106;}
	{object V106 = Cnil;
	VMR10(V106)}
	goto T106;
T106:;
	V107 = (V103);
	base[2]= (V105);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	V108= vs_base[0];
	if(!(eql(V107,V108))){
	goto T110;}
	{object V109 = (V105);
	VMR10(V109)}
	goto T110;
T110:;
	V104= CMPcdr((V104));
	V105= CMPcar((V104));
	goto T105;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-VALUE	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V110;
	object V111;
	check_arg(2);
	V110=(base[0]);
	V111=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V112;
	object V113;
	V112= (*(LnkLI51))((V110));
	V113= (*(LnkLI52))((V112),(V111));
	if(((V113))!=Cnil){
	goto T123;}
	base[4]= (V112);
	base[5]= (V110);
	base[6]= (V111);
	base[7]= VV[9];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T123;
T123:;
	base[4]= (V112);
	base[5]= (V110);
	base[6]= (V113);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk18)(Lclptr18);
	return;}
	}
}
/*	function definition for SET-SLOT-VALUE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V114;
	object V115;
	object V116;
	check_arg(3);
	V114=(base[0]);
	V115=(base[1]);
	V116=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V117;
	object V118;
	V117= (*(LnkLI51))((V114));
	V118= (*(LnkLI52))((V117),(V115));
	if(((V118))!=Cnil){
	goto T135;}
	base[5]= (V117);
	base[6]= (V114);
	base[7]= (V115);
	base[8]= VV[11];
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T135;
T135:;
	base[5]= ({object _tmp=get(VV[18],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[18])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[18])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V116;
	base[7]= V117;
	base[8]= V114;
	base[9]= V118;
	vs_top=(vs_base=base+6)+4;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for SLOT-BOUNDP	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V123;
	object V124;
	check_arg(2);
	V123=(base[0]);
	V124=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V125;
	object V126;
	V125= (*(LnkLI51))((V123));
	V126= (*(LnkLI52))((V125),(V124));
	if(((V126))!=Cnil){
	goto T149;}
	base[4]= (V125);
	base[5]= (V123);
	base[6]= (V124);
	base[7]= VV[12];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T149;
T149:;
	base[4]= (V125);
	base[5]= (V123);
	base[6]= (V126);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk26)(Lclptr26);
	return;}
	}
}
/*	function definition for SLOT-MAKUNBOUND	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V127;
	object V128;
	check_arg(2);
	V127=(base[0]);
	V128=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V129;
	object V130;
	V129= (*(LnkLI51))((V127));
	V130= (*(LnkLI52))((V129),(V128));
	if(((V130))!=Cnil){
	goto T161;}
	base[4]= (V129);
	base[5]= (V127);
	base[6]= (V128);
	base[7]= VV[13];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T161;
T161:;
	base[4]= (V129);
	base[5]= (V127);
	base[6]= (V130);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk30)(Lclptr30);
	return;}
	}
}
/*	local entry for function SLOT-EXISTS-P	*/

static object LI15(V133,V134)

object V133;object V134;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V135;
	V135= (*(LnkLI51))((V133));
	V136= (*(LnkLI52))((V135),(V134));
	{object V137 = ((((/* INLINE-ARGS */V136)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V137)}}
	return Cnil;
}
/*	function definition for SLOT-VALUE-OR-DEFAULT	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V138;
	object V139;
	object V140;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V138=(base[0]);
	V139=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T171;}
	V140=(base[2]);
	vs_top=sup;
	goto T172;
	goto T171;
T171:;
	V140= VV[14];
	goto T172;
T172:;
	base[3]= (V138);
	base[4]= (V139);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T175;}
	base[3]= (V138);
	base[4]= (V139);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk9)();
	return;
	goto T175;
T175:;
	base[3]= (V140);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function STANDARD-INSTANCE-ACCESS	*/

static object LI17(V143,V144)

object V143;object V144;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V145 = (STREF(object,(V143),4))->v.v_self[fix((V144))];
	VMR17(V145)}
	return Cnil;
}
/*	local entry for function FUNCALLABLE-STANDARD-INSTANCE-ACCESS	*/

static object LI18(V148,V149)

object V148;object V149;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V150 = (CMPcar(((V148))->cc.cc_turbo[12]))->v.v_self[fix((V149))];
	VMR18(V150)}
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V151;
	object V152;
	object V153;
	register object V154;
	register object V155;
	check_arg(5);
	V151=(base[0]);
	V152=(base[1]);
	V153=(base[2]);
	V154=(base[3]);
	V155=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V157;
	object V158;
	base[7]= (V155);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk53)(Lclptr53);
	vs_top=sup;
	V157= vs_base[0];
	{register object V159;
	V159= (V157);
	if(!(type_of((V159))==t_fixnum)){
	goto T190;}
	if(type_of(V154)==t_structure){
	goto T195;}
	goto T193;
	goto T195;
T195:;
	if(!(((V154)->str.str_def)==(VV[15]))){
	goto T193;}
	if((Ct)==((STREF(object,(V154),0))->v.v_self[8])){
	goto T197;}
	(void)((*(LnkLI54))((V154)));
	goto T197;
T197:;
	V158= (STREF(object,(V154),4))->v.v_self[fix((V157))];
	goto T188;
	goto T193;
T193:;{object V161;
	V161= (VV[5]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V154);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V162= vs_base[0];
	if(!((V161)==(CMPcar(V162)))){
	goto T201;}}
	if((Ct)==((CMPcar(((V154))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T206;}
	(void)((*(LnkLI54))((V154)));
	goto T206;
T206:;
	V158= (CMPcar(((V154))->cc.cc_turbo[12]))->v.v_self[fix((V157))];
	goto T188;
	goto T201;
T201:;
	base[7]= VV[16];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V158= vs_base[0];
	goto T188;
	goto T190;
T190:;
	if(!(type_of((V159))==t_cons)){
	goto T211;}
	V158= CMPcdr((V157));
	goto T188;
	goto T211;
T211:;
	base[7]= VV[17];
	base[8]= (V155);
	base[9]= VV[18];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	V158= vs_base[0];}
	goto T188;
T188:;
	if(!(((V158))==((VV[10]->s.s_dbind)))){
	goto T217;}
	base[7]= (V153);
	base[8]= (V154);
	base[10]= (V155);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T217;
T217:;
	base[7]= (V158);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI20(V169,V170,V171,V172,V173,V174)

object V169;object V170;object V171;object V172;register object V173;object V174;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{register object V176;
	base[0]= (V174);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk53)(Lclptr53);
	vs_top=sup;
	V176= vs_base[0];
	{register object V177;
	V177= (V176);
	if(!(type_of((V177))==t_fixnum)){
	goto T231;}
	if(type_of(V173)==t_structure){
	goto T236;}
	goto T234;
	goto T236;
T236:;
	if(!(((V173)->str.str_def)==(VV[19]))){
	goto T234;}
	if((Ct)==((STREF(object,(V173),0))->v.v_self[8])){
	goto T238;}
	(void)((*(LnkLI54))((V173)));
	goto T238;
T238:;
	{object V179 = (STREF(object,(V173),4))->v.v_self[fix((V176))]= ((V171));
	VMR20(V179)}
	goto T234;
T234:;{object V180;
	V180= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V173);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V181= vs_base[0];
	if(!((V180)==(CMPcar(V181)))){
	goto T242;}}
	if((Ct)==((CMPcar(((V173))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T247;}
	(void)((*(LnkLI54))((V173)));
	goto T247;
T247:;
	{object V182 = (CMPcar(((V173))->cc.cc_turbo[12]))->v.v_self[fix((V176))]= ((V171));
	VMR20(V182)}
	goto T242;
T242:;
	base[0]= VV[20];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V183 = vs_base[0];
	VMR20(V183)}
	goto T231;
T231:;
	if(!(type_of((V177))==t_cons)){
	goto T252;}
	(V176)->c.c_cdr = V171;
	{object V186 = V171;
	VMR20(V186)}
	goto T252;
T252:;
	base[0]= VV[21];
	base[1]= (V174);
	base[2]= VV[22];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR20(V187)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI21(V193,V194,V195,V196,V197)

object V193;object V194;object V195;register object V196;object V197;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V199;
	object V200;
	base[2]= (V197);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)(Lclptr53);
	vs_top=sup;
	V199= vs_base[0];
	{register object V201;
	V201= (V199);
	if(!(type_of((V201))==t_fixnum)){
	goto T267;}
	if(type_of(V196)==t_structure){
	goto T272;}
	goto T270;
	goto T272;
T272:;
	if(!(((V196)->str.str_def)==(VV[23]))){
	goto T270;}
	if((Ct)==((STREF(object,(V196),0))->v.v_self[8])){
	goto T274;}
	(void)((*(LnkLI54))((V196)));
	goto T274;
T274:;
	V200= (STREF(object,(V196),4))->v.v_self[fix((V199))];
	goto T265;
	goto T270;
T270:;{object V203;
	V203= (VV[5]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V196);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V204= vs_base[0];
	if(!((V203)==(CMPcar(V204)))){
	goto T278;}}
	if((Ct)==((CMPcar(((V196))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T283;}
	(void)((*(LnkLI54))((V196)));
	goto T283;
T283:;
	V200= (CMPcar(((V196))->cc.cc_turbo[12]))->v.v_self[fix((V199))];
	goto T265;
	goto T278;
T278:;
	base[2]= VV[24];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V200= vs_base[0];
	goto T265;
	goto T267;
T267:;
	if(!(type_of((V201))==t_cons)){
	goto T288;}
	V200= CMPcdr((V199));
	goto T265;
	goto T288;
T288:;
	base[2]= VV[25];
	base[3]= (V197);
	base[4]= VV[26];
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;
	V200= vs_base[0];}
	goto T265;
T265:;
	{object V205 = (((((V200))==((VV[10]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR21(V205)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI22(V211,V212,V213,V214,V215)

object V211;object V212;object V213;register object V214;object V215;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V217;
	base[0]= (V215);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk53)(Lclptr53);
	vs_top=sup;
	V217= vs_base[0];
	{register object V218;
	V218= (V217);
	if(!(type_of((V218))==t_fixnum)){
	goto T302;}
	if(type_of(V214)==t_structure){
	goto T307;}
	goto T305;
	goto T307;
T307:;
	if(!(((V214)->str.str_def)==(VV[27]))){
	goto T305;}
	if((Ct)==((STREF(object,(V214),0))->v.v_self[8])){
	goto T309;}
	(void)((*(LnkLI54))((V214)));
	goto T309;
T309:;
	(void)((STREF(object,(V214),4))->v.v_self[fix((V217))]= ((VV[10]->s.s_dbind)));
	goto T298;
	goto T305;
T305:;{object V220;
	V220= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V214);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V221= vs_base[0];
	if(!((V220)==(CMPcar(V221)))){
	goto T313;}}
	if((Ct)==((CMPcar(((V214))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T318;}
	(void)((*(LnkLI54))((V214)));
	goto T318;
T318:;
	(void)((CMPcar(((V214))->cc.cc_turbo[12]))->v.v_self[fix((V217))]= ((VV[10]->s.s_dbind)));
	goto T298;
	goto T313;
T313:;
	base[0]= VV[28];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T298;
	goto T302;
T302:;
	if(!(type_of((V218))==t_cons)){
	goto T323;}
	{object V223;
	V223= (VV[10]->s.s_dbind);
	(V217)->c.c_cdr = (V223);
	goto T298;}
	goto T323;
T323:;
	base[0]= VV[29];
	base[1]= (V215);
	base[2]= VV[30];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;}}
	goto T298;
T298:;
	{object V224 = Cnil;
	VMR22(V224)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V225;
	object V226;
	object V227;
	object V228;
	object V229;
	check_arg(5);
	V225=(base[0]);
	V226=(base[1]);
	V227=(base[2]);
	V228=(base[3]);
	V229=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V231;
	object V232;
	base[7]= (V229);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk55)(Lclptr55);
	vs_top=sup;
	V231= vs_base[0];
	V232= (
	(type_of((V231)) == t_sfun ?(*(((V231))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V231))==t_vfun) ?
	(*(((V231))->sfn.sfn_self)):
	(fcall.fun=((V231)),fcalln))((V228)));
	if(!(((V232))==((VV[10]->s.s_dbind)))){
	goto T339;}
	base[7]= (V227);
	base[8]= (V228);
	base[10]= (V229);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T339;
T339:;
	base[7]= (V232);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V233;
	object V234;
	object V235;
	object V236;
	object V237;
	object V238;
	check_arg(6);
	V233=(base[0]);
	V234=(base[1]);
	V235=(base[2]);
	V236=(base[3]);
	V237=(base[4]);
	V238=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V240;
	base[6]= (V238);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk56)(Lclptr56);
	vs_top=sup;
	V240= vs_base[0];
	base[6]= (V235);
	base[7]= (V237);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = (V240);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI25(V246,V247,V248,V249,V250)

object V246;object V247;object V248;object V249;object V250;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V252 = Ct;
	VMR25(V252)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI26(V258,V259,V260,V261,V262)

object V258;object V259;object V260;object V261;object V262;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= VV[31];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V264 = vs_base[0];
	VMR26(V264)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MISSING (T T T T))	*/

static object LI27(V272,V273,V274,V275,V276,V277,V278)

object V272;object V273;object V274;object V275;object V276;object V277;object V278;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{register object V279;
	object V280;
	V279= (V278);
	if(((V279))==Cnil){
	goto T370;}
	{object V281;
	V281= CMPcar((V279));
	V279= CMPcdr((V279));
	V280= (V281);
	goto T368;}
	goto T370;
T370:;
	V280= Cnil;
	goto T368;
T368:;
	base[1]= VV[32];
	{object V282= (V277);
	if((V282!= VV[9]))goto T378;
	base[2]= VV[33];
	goto T377;
	goto T378;
T378:;
	if((V282!= VV[11]))goto T379;
	base[3]= Cnil;
	base[4]= VV[34];
	base[5]= (V280);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T377;
	goto T379;
T379:;
	if((V282!= VV[12]))goto T383;
	base[2]= VV[35];
	goto T377;
	goto T383;
T383:;
	if((V282!= VV[13]))goto T384;
	base[2]= VV[36];
	goto T377;
	goto T384;
T384:;
	FEerror("The ECASE key value ~s is illegal.",1,V282);
	base[2]= Cnil;
	goto T377;}
	goto T377;
T377:;
	base[3]= (V276);
	base[4]= (V275);
	vs_top=(vs_base=base+1)+4;
	Lerror();
	vs_top=sup;
	{object V283 = vs_base[0];
	VMR27(V283)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-UNBOUND (T T T))	*/

static object LI28(V289,V290,V291,V292,V293)

object V289;object V290;object V291;object V292;object V293;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= (V293);
	base[2]= (V292);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V295 = vs_base[0];
	VMR28(V295)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-UNBOUND-INTERNAL	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V296;
	object V297;
	check_arg(2);
	V296=(base[0]);
	V297=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI51))((V296));
	base[3]= (V296);
	{register object V298;
	V298= (V297);
	if(!(type_of((V298))==t_fixnum)){
	goto T397;}
	V299= (*(LnkLI57))((V296));
	base[4]= nth(fix((V297)),(/* INLINE-ARGS */V299)->v.v_self[9]);
	goto T395;
	goto T397;
T397:;
	if(!(type_of((V298))==t_cons)){
	goto T400;}
	base[4]= CMPcar((V297));
	goto T395;
	goto T400;
T400:;
	base[6]= VV[38];
	base[7]= (V298);
	base[8]= VV[39];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk58)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	base[4]= vs_base[0];}
	goto T395;
T395:;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	}
}
/*	local entry for function (FAST-METHOD ALLOCATE-INSTANCE (STANDARD-CLASS))	*/

static object LI30(V304,V305,V306,V307)

object V304;object V305;register object V306;object V307;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	base[0]= (V306);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk59)(Lclptr59);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T409;}
	base[0]= (V306);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	goto T409;
T409:;
	base[0]= (V306);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	V310= vs_base[0];
	{object V311 = (VFUN_NARGS=1,(*(LnkLI2))(V310));
	VMR30(V311)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD ALLOCATE-INSTANCE (STRUCTURE-CLASS))	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V312;
	object V313;
	object V314;
	object V315;
	check_arg(4);
	V312=(base[0]);
	V313=(base[1]);
	V314=(base[2]);
	V315=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V318;
	base[4]= (V314);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk61)(Lclptr61);
	vs_top=sup;
	V318= vs_base[0];
	if(((V318))==Cnil){
	goto T422;}
	vs_base=vs_top;
	{object _funobj = (V318);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T422;
T422:;
	base[4]= VV[40];
	base[6]= (V314);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk62)(Lclptr62);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	Lerror();
	return;}
	}
}
static void LnkT62(ptr) object *ptr;{ call_or_link_closure(VV[62],(void **)(void *)&Lnk62,(void **)(void *)&Lclptr62);} /* CLASS-NAME */
static void LnkT61(ptr) object *ptr;{ call_or_link_closure(VV[61],(void **)(void *)&Lnk61,(void **)(void *)&Lclptr61);} /* CLASS-DEFSTRUCT-CONSTRUCTOR */
static object  LnkTLI2(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[2],(void **)(void *)&LnkLI2,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static void LnkT60(ptr) object *ptr;{ call_or_link_closure(VV[60],(void **)(void *)&Lnk60,(void **)(void *)&Lclptr60);} /* FINALIZE-INHERITANCE */
static void LnkT59(ptr) object *ptr;{ call_or_link_closure(VV[59],(void **)(void *)&Lnk59,(void **)(void *)&Lclptr59);} /* CLASS-FINALIZED-P */
static void LnkT58(){ call_or_link(VV[58],(void **)(void *)&Lnk58);} /* TYPECASE-ERROR-STRING */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT56(ptr) object *ptr;{ call_or_link_closure(VV[56],(void **)(void *)&Lnk56,(void **)(void *)&Lclptr56);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT55(ptr) object *ptr;{ call_or_link_closure(VV[55],(void **)(void *)&Lnk55,(void **)(void *)&Lclptr55);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[54],(void **)(void *)&LnkLI54,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static void LnkT53(ptr) object *ptr;{ call_or_link_closure(VV[53],(void **)(void *)&Lnk53,(void **)(void *)&Lclptr53);} /* SLOT-DEFINITION-LOCATION */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* SLOT-VALUE */
static void LnkT12(){ call_or_link(VV[12],(void **)(void *)&Lnk12);} /* SLOT-BOUNDP */
static void LnkT30(ptr) object *ptr;{ call_or_link_closure(VV[30],(void **)(void *)&Lnk30,(void **)(void *)&Lclptr30);} /* SLOT-MAKUNBOUND-USING-CLASS */
static void LnkT26(ptr) object *ptr;{ call_or_link_closure(VV[26],(void **)(void *)&Lnk26,(void **)(void *)&Lclptr26);} /* SLOT-BOUNDP-USING-CLASS */
static void LnkT18(ptr) object *ptr;{ call_or_link_closure(VV[18],(void **)(void *)&Lnk18,(void **)(void *)&Lclptr18);} /* SLOT-VALUE-USING-CLASS */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],(void **)(void *)&LnkLI52,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT50(ptr) object *ptr;{ call_or_link_closure(VV[50],(void **)(void *)&Lnk50,(void **)(void *)&Lclptr50);} /* SLOT-DEFINITION-NAME */
static void LnkT49(ptr) object *ptr;{ call_or_link_closure(VV[49],(void **)(void *)&Lnk49,(void **)(void *)&Lclptr49);} /* CLASS-SLOTS */
static void LnkT48(){ call_or_link(VV[48],(void **)(void *)&Lnk48);} /* SET-CLASS-SLOT-VALUE-1 */
static void LnkT47(){ call_or_link(VV[47],(void **)(void *)&Lnk47);} /* GET-CLASS-SLOT-VALUE-1 */
static void LnkT46(ptr) object *ptr;{ call_or_link_closure(VV[46],(void **)(void *)&Lnk46,(void **)(void *)&Lclptr46);} /* CLASS-PROTOTYPE */
static void LnkT45(ptr) object *ptr;{ call_or_link_closure(VV[45],(void **)(void *)&Lnk45,(void **)(void *)&Lclptr45);} /* CLASS-WRAPPER */
static void LnkT44(ptr) object *ptr;{ call_or_link_closure(VV[44],(void **)(void *)&Lnk44,(void **)(void *)&Lclptr44);} /* SLOT-UNBOUND */
static void LnkT43(ptr) object *ptr;{ call_or_link_closure(VV[43],(void **)(void *)&Lnk43,(void **)(void *)&Lclptr43);} /* SLOT-MISSING */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT41(){ call_or_link(VV[41],(void **)(void *)&Lnk41);} /* CCLOSURE-ENV-NTHCDR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

