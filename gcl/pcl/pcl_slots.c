
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
	base[5]= (V116);
	base[6]= V117;
	base[7]= V114;
	base[8]= V118;
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk53)(Lclptr53);
	return;}
	}
}
/*	function definition for SLOT-BOUNDP	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V122;
	object V123;
	check_arg(2);
	V122=(base[0]);
	V123=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V124;
	object V125;
	V124= (*(LnkLI51))((V122));
	V125= (*(LnkLI52))((V124),(V123));
	if(((V125))!=Cnil){
	goto T148;}
	base[4]= (V124);
	base[5]= (V122);
	base[6]= (V123);
	base[7]= VV[12];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T148;
T148:;
	base[4]= (V124);
	base[5]= (V122);
	base[6]= (V125);
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
	{object V126;
	object V127;
	check_arg(2);
	V126=(base[0]);
	V127=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V128;
	object V129;
	V128= (*(LnkLI51))((V126));
	V129= (*(LnkLI52))((V128),(V127));
	if(((V129))!=Cnil){
	goto T160;}
	base[4]= (V128);
	base[5]= (V126);
	base[6]= (V127);
	base[7]= VV[13];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T160;
T160:;
	base[4]= (V128);
	base[5]= (V126);
	base[6]= (V129);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk30)(Lclptr30);
	return;}
	}
}
/*	local entry for function SLOT-EXISTS-P	*/

static object LI15(V132,V133)

object V132;object V133;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V134;
	V134= (*(LnkLI51))((V132));
	V135= (*(LnkLI52))((V134),(V133));
	{object V136 = ((((/* INLINE-ARGS */V135)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V136)}}
	return Cnil;
}
/*	function definition for SLOT-VALUE-OR-DEFAULT	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V137;
	object V138;
	object V139;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V137=(base[0]);
	V138=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T170;}
	V139=(base[2]);
	vs_top=sup;
	goto T171;
	goto T170;
T170:;
	V139= VV[14];
	goto T171;
T171:;
	base[3]= (V137);
	base[4]= (V138);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T174;}
	base[3]= (V137);
	base[4]= (V138);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk9)();
	return;
	goto T174;
T174:;
	base[3]= (V139);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function STANDARD-INSTANCE-ACCESS	*/

static object LI17(V142,V143)

object V142;object V143;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V144 = (STREF(object,(V142),4))->v.v_self[fix((V143))];
	VMR17(V144)}
	return Cnil;
}
/*	local entry for function FUNCALLABLE-STANDARD-INSTANCE-ACCESS	*/

static object LI18(V147,V148)

object V147;object V148;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V149 = (CMPcar(((V147))->cc.cc_turbo[12]))->v.v_self[fix((V148))];
	VMR18(V149)}
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V150;
	object V151;
	object V152;
	register object V153;
	register object V154;
	check_arg(5);
	V150=(base[0]);
	V151=(base[1]);
	V152=(base[2]);
	V153=(base[3]);
	V154=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V156;
	object V157;
	base[7]= (V154);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V156= vs_base[0];
	{register object V158;
	V158= (V156);
	if(!(type_of((V158))==t_fixnum)){
	goto T189;}
	if(type_of(V153)==t_structure){
	goto T194;}
	goto T192;
	goto T194;
T194:;
	if(!(((V153)->str.str_def)==(VV[15]))){
	goto T192;}
	if((Ct)==((STREF(object,(V153),0))->v.v_self[8])){
	goto T196;}
	(void)((*(LnkLI55))((V153)));
	goto T196;
T196:;
	V157= (STREF(object,(V153),4))->v.v_self[fix((V156))];
	goto T187;
	goto T192;
T192:;{object V160;
	V160= (VV[5]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V153);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V161= vs_base[0];
	if(!((V160)==(CMPcar(V161)))){
	goto T200;}}
	if((Ct)==((CMPcar(((V153))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T205;}
	(void)((*(LnkLI55))((V153)));
	goto T205;
T205:;
	V157= (CMPcar(((V153))->cc.cc_turbo[12]))->v.v_self[fix((V156))];
	goto T187;
	goto T200;
T200:;
	base[7]= VV[16];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V157= vs_base[0];
	goto T187;
	goto T189;
T189:;
	if(!(type_of((V158))==t_cons)){
	goto T210;}
	V157= CMPcdr((V156));
	goto T187;
	goto T210;
T210:;
	base[7]= VV[17];
	base[8]= (V154);
	base[9]= VV[18];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	V157= vs_base[0];}
	goto T187;
T187:;
	if(!(((V157))==((VV[10]->s.s_dbind)))){
	goto T216;}
	base[7]= (V152);
	base[8]= (V153);
	base[10]= (V154);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T216;
T216:;
	base[7]= (V157);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI20(V168,V169,V170,V171,V172,V173)

object V168;object V169;object V170;object V171;register object V172;object V173;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{register object V175;
	base[0]= (V173);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V175= vs_base[0];
	{register object V176;
	V176= (V175);
	if(!(type_of((V176))==t_fixnum)){
	goto T230;}
	if(type_of(V172)==t_structure){
	goto T235;}
	goto T233;
	goto T235;
T235:;
	if(!(((V172)->str.str_def)==(VV[19]))){
	goto T233;}
	if((Ct)==((STREF(object,(V172),0))->v.v_self[8])){
	goto T237;}
	(void)((*(LnkLI55))((V172)));
	goto T237;
T237:;
	{object V178 = (STREF(object,(V172),4))->v.v_self[fix((V175))]= ((V170));
	VMR20(V178)}
	goto T233;
T233:;{object V179;
	V179= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V172);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V180= vs_base[0];
	if(!((V179)==(CMPcar(V180)))){
	goto T241;}}
	if((Ct)==((CMPcar(((V172))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T246;}
	(void)((*(LnkLI55))((V172)));
	goto T246;
T246:;
	{object V181 = (CMPcar(((V172))->cc.cc_turbo[12]))->v.v_self[fix((V175))]= ((V170));
	VMR20(V181)}
	goto T241;
T241:;
	base[0]= VV[20];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V182 = vs_base[0];
	VMR20(V182)}
	goto T230;
T230:;
	if(!(type_of((V176))==t_cons)){
	goto T251;}
	(V175)->c.c_cdr = V170;
	{object V185 = V170;
	VMR20(V185)}
	goto T251;
T251:;
	base[0]= VV[21];
	base[1]= (V173);
	base[2]= VV[22];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V186 = vs_base[0];
	VMR20(V186)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI21(V192,V193,V194,V195,V196)

object V192;object V193;object V194;register object V195;object V196;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V198;
	object V199;
	base[2]= (V196);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V198= vs_base[0];
	{register object V200;
	V200= (V198);
	if(!(type_of((V200))==t_fixnum)){
	goto T266;}
	if(type_of(V195)==t_structure){
	goto T271;}
	goto T269;
	goto T271;
T271:;
	if(!(((V195)->str.str_def)==(VV[23]))){
	goto T269;}
	if((Ct)==((STREF(object,(V195),0))->v.v_self[8])){
	goto T273;}
	(void)((*(LnkLI55))((V195)));
	goto T273;
T273:;
	V199= (STREF(object,(V195),4))->v.v_self[fix((V198))];
	goto T264;
	goto T269;
T269:;{object V202;
	V202= (VV[5]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V195);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V203= vs_base[0];
	if(!((V202)==(CMPcar(V203)))){
	goto T277;}}
	if((Ct)==((CMPcar(((V195))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T282;}
	(void)((*(LnkLI55))((V195)));
	goto T282;
T282:;
	V199= (CMPcar(((V195))->cc.cc_turbo[12]))->v.v_self[fix((V198))];
	goto T264;
	goto T277;
T277:;
	base[2]= VV[24];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V199= vs_base[0];
	goto T264;
	goto T266;
T266:;
	if(!(type_of((V200))==t_cons)){
	goto T287;}
	V199= CMPcdr((V198));
	goto T264;
	goto T287;
T287:;
	base[2]= VV[25];
	base[3]= (V196);
	base[4]= VV[26];
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;
	V199= vs_base[0];}
	goto T264;
T264:;
	{object V204 = (((((V199))==((VV[10]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR21(V204)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI22(V210,V211,V212,V213,V214)

object V210;object V211;object V212;register object V213;object V214;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V216;
	base[0]= (V214);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V216= vs_base[0];
	{register object V217;
	V217= (V216);
	if(!(type_of((V217))==t_fixnum)){
	goto T301;}
	if(type_of(V213)==t_structure){
	goto T306;}
	goto T304;
	goto T306;
T306:;
	if(!(((V213)->str.str_def)==(VV[27]))){
	goto T304;}
	if((Ct)==((STREF(object,(V213),0))->v.v_self[8])){
	goto T308;}
	(void)((*(LnkLI55))((V213)));
	goto T308;
T308:;
	(void)((STREF(object,(V213),4))->v.v_self[fix((V216))]= ((VV[10]->s.s_dbind)));
	goto T297;
	goto T304;
T304:;{object V219;
	V219= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V213);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V220= vs_base[0];
	if(!((V219)==(CMPcar(V220)))){
	goto T312;}}
	if((Ct)==((CMPcar(((V213))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T317;}
	(void)((*(LnkLI55))((V213)));
	goto T317;
T317:;
	(void)((CMPcar(((V213))->cc.cc_turbo[12]))->v.v_self[fix((V216))]= ((VV[10]->s.s_dbind)));
	goto T297;
	goto T312;
T312:;
	base[0]= VV[28];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T297;
	goto T301;
T301:;
	if(!(type_of((V217))==t_cons)){
	goto T322;}
	{object V222;
	V222= (VV[10]->s.s_dbind);
	(V216)->c.c_cdr = (V222);
	goto T297;}
	goto T322;
T322:;
	base[0]= VV[29];
	base[1]= (V214);
	base[2]= VV[30];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;}}
	goto T297;
T297:;
	{object V223 = Cnil;
	VMR22(V223)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V224;
	object V225;
	object V226;
	object V227;
	object V228;
	check_arg(5);
	V224=(base[0]);
	V225=(base[1]);
	V226=(base[2]);
	V227=(base[3]);
	V228=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V230;
	object V231;
	base[7]= (V228);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk56)(Lclptr56);
	vs_top=sup;
	V230= vs_base[0];
	V231= (
	(type_of((V230)) == t_sfun ?(*(((V230))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V230))==t_vfun) ?
	(*(((V230))->sfn.sfn_self)):
	(fcall.fun=((V230)),fcalln))((V227)));
	if(!(((V231))==((VV[10]->s.s_dbind)))){
	goto T338;}
	base[7]= (V226);
	base[8]= (V227);
	base[10]= (V228);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T338;
T338:;
	base[7]= (V231);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V232;
	object V233;
	object V234;
	object V235;
	object V236;
	object V237;
	check_arg(6);
	V232=(base[0]);
	V233=(base[1]);
	V234=(base[2]);
	V235=(base[3]);
	V236=(base[4]);
	V237=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V239;
	base[6]= (V237);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk57)(Lclptr57);
	vs_top=sup;
	V239= vs_base[0];
	base[6]= (V234);
	base[7]= (V236);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = (V239);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI25(V245,V246,V247,V248,V249)

object V245;object V246;object V247;object V248;object V249;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V251 = Ct;
	VMR25(V251)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI26(V257,V258,V259,V260,V261)

object V257;object V258;object V259;object V260;object V261;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= VV[31];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V263 = vs_base[0];
	VMR26(V263)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MISSING (T T T T))	*/

static object LI27(V271,V272,V273,V274,V275,V276,V277)

object V271;object V272;object V273;object V274;object V275;object V276;object V277;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{register object V278;
	object V279;
	V278= (V277);
	if(((V278))==Cnil){
	goto T369;}
	{object V280;
	V280= CMPcar((V278));
	V278= CMPcdr((V278));
	V279= (V280);
	goto T367;}
	goto T369;
T369:;
	V279= Cnil;
	goto T367;
T367:;
	base[1]= VV[32];
	{object V281= (V276);
	if((V281!= VV[9]))goto T377;
	base[2]= VV[33];
	goto T376;
	goto T377;
T377:;
	if((V281!= VV[11]))goto T378;
	base[3]= Cnil;
	base[4]= VV[34];
	base[5]= (V279);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T376;
	goto T378;
T378:;
	if((V281!= VV[12]))goto T382;
	base[2]= VV[35];
	goto T376;
	goto T382;
T382:;
	if((V281!= VV[13]))goto T383;
	base[2]= VV[36];
	goto T376;
	goto T383;
T383:;
	FEerror("The ECASE key value ~s is illegal.",1,V281);
	base[2]= Cnil;
	goto T376;}
	goto T376;
T376:;
	base[3]= (V275);
	base[4]= (V274);
	vs_top=(vs_base=base+1)+4;
	Lerror();
	vs_top=sup;
	{object V282 = vs_base[0];
	VMR27(V282)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-UNBOUND (T T T))	*/

static object LI28(V288,V289,V290,V291,V292)

object V288;object V289;object V290;object V291;object V292;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= (V292);
	base[2]= (V291);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V294 = vs_base[0];
	VMR28(V294)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-UNBOUND-INTERNAL	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V295;
	object V296;
	check_arg(2);
	V295=(base[0]);
	V296=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI51))((V295));
	base[3]= (V295);
	{register object V297;
	V297= (V296);
	if(!(type_of((V297))==t_fixnum)){
	goto T396;}
	V298= (*(LnkLI58))((V295));
	base[4]= nth(fix((V296)),(/* INLINE-ARGS */V298)->v.v_self[9]);
	goto T394;
	goto T396;
T396:;
	if(!(type_of((V297))==t_cons)){
	goto T399;}
	base[4]= CMPcar((V296));
	goto T394;
	goto T399;
T399:;
	base[6]= VV[38];
	base[7]= (V297);
	base[8]= VV[39];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk59)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	base[4]= vs_base[0];}
	goto T394;
T394:;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	}
}
/*	local entry for function (FAST-METHOD ALLOCATE-INSTANCE (STANDARD-CLASS))	*/

static object LI30(V303,V304,V305,V306)

object V303;object V304;register object V305;object V306;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	base[0]= (V305);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T408;}
	base[0]= (V305);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk61)(Lclptr61);
	vs_top=sup;
	goto T408;
T408:;
	base[0]= (V305);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	V309= vs_base[0];
	{object V310 = (VFUN_NARGS=1,(*(LnkLI2))(V309));
	VMR30(V310)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD ALLOCATE-INSTANCE (STRUCTURE-CLASS))	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V311;
	object V312;
	object V313;
	object V314;
	check_arg(4);
	V311=(base[0]);
	V312=(base[1]);
	V313=(base[2]);
	V314=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V317;
	base[4]= (V313);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk62)(Lclptr62);
	vs_top=sup;
	V317= vs_base[0];
	if(((V317))==Cnil){
	goto T421;}
	vs_base=vs_top;
	{object _funobj = (V317);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T421;
T421:;
	base[4]= VV[40];
	base[6]= (V313);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk63)(Lclptr63);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	Lerror();
	return;}
	}
}
static void LnkT63(ptr) object *ptr;{ call_or_link_closure(VV[63],(void **)(void *)&Lnk63,(void **)(void *)&Lclptr63);} /* CLASS-NAME */
static void LnkT62(ptr) object *ptr;{ call_or_link_closure(VV[62],(void **)(void *)&Lnk62,(void **)(void *)&Lclptr62);} /* CLASS-DEFSTRUCT-CONSTRUCTOR */
static object  LnkTLI2(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[2],(void **)(void *)&LnkLI2,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static void LnkT61(ptr) object *ptr;{ call_or_link_closure(VV[61],(void **)(void *)&Lnk61,(void **)(void *)&Lclptr61);} /* FINALIZE-INHERITANCE */
static void LnkT60(ptr) object *ptr;{ call_or_link_closure(VV[60],(void **)(void *)&Lnk60,(void **)(void *)&Lclptr60);} /* CLASS-FINALIZED-P */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* TYPECASE-ERROR-STRING */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT57(ptr) object *ptr;{ call_or_link_closure(VV[57],(void **)(void *)&Lnk57,(void **)(void *)&Lclptr57);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT56(ptr) object *ptr;{ call_or_link_closure(VV[56],(void **)(void *)&Lnk56,(void **)(void *)&Lclptr56);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[55],(void **)(void *)&LnkLI55,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static void LnkT54(ptr) object *ptr;{ call_or_link_closure(VV[54],(void **)(void *)&Lnk54,(void **)(void *)&Lclptr54);} /* SLOT-DEFINITION-LOCATION */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* SLOT-VALUE */
static void LnkT12(){ call_or_link(VV[12],(void **)(void *)&Lnk12);} /* SLOT-BOUNDP */
static void LnkT30(ptr) object *ptr;{ call_or_link_closure(VV[30],(void **)(void *)&Lnk30,(void **)(void *)&Lclptr30);} /* SLOT-MAKUNBOUND-USING-CLASS */
static void LnkT26(ptr) object *ptr;{ call_or_link_closure(VV[26],(void **)(void *)&Lnk26,(void **)(void *)&Lclptr26);} /* SLOT-BOUNDP-USING-CLASS */
static void LnkT53(ptr) object *ptr;{ call_or_link_closure(VV[53],(void **)(void *)&Lnk53,(void **)(void *)&Lclptr53);} /* SETF PCL SLOT-VALUE-USING-CLASS */
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

