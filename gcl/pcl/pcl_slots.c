
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
	V30= Ct;
	STSET(object,(V27),0, (V28));
	{object V31 = (V28);
	VMR4(V31)}
	goto T11;
T11:;{object V32;
	V32= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V27);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V33= vs_base[0];
	if(!((V32)==(CMPcar(V33)))){
	goto T16;}}
	{object V34;
	V34= ((V27))->cc.cc_turbo[13];
	((V34))->c.c_car = V28;
	{object V36 = V28;
	VMR4(V36)}}
	goto T16;
T16:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V37 = vs_base[0];
	VMR4(V37)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SWAP-WRAPPERS-AND-SLOTS	*/

static object LI5(V40,V41)

register object V40;register object V41;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(type_of(V40)==t_structure){
	goto T27;}
	goto T25;
	goto T27;
T27:;
	if(!(((V40)->str.str_def)==(VV[7]))){
	goto T25;}
	{object V43;
	object V44;
	V43= STREF(object,(V40),0);
	V44= STREF(object,(V40),4);
	V45= Ct;
	STSET(object,(V40),0, STREF(object,(V41),0));
	(void)(STREF(object,(V41),0));
	V46= Ct;
	STSET(object,(V40),4, STREF(object,(V41),4));
	(void)(STREF(object,(V41),4));
	V47= Ct;
	STSET(object,(V41),0, (V43));
	(void)((V43));
	V48= Ct;
	STSET(object,(V41),4, (V44));
	{object V49 = (V44);
	VMR5(V49)}}
	goto T25;
T25:;{object V50;
	V50= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V40);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V51= vs_base[0];
	if(!((V50)==(CMPcar(V51)))){
	goto T35;}}
	{object V52;
	object V53;
	V52= CMPcar(((V40))->cc.cc_turbo[13]);
	V53= CMPcar(((V40))->cc.cc_turbo[12]);
	{object V54;
	object V55;
	V54= ((V40))->cc.cc_turbo[13];
	V55= CMPcar(((V41))->cc.cc_turbo[13]);
	((V54))->c.c_car = (V55);}
	{object V56;
	object V57;
	V56= ((V40))->cc.cc_turbo[12];
	V57= CMPcar(((V41))->cc.cc_turbo[12]);
	((V56))->c.c_car = (V57);}
	{object V58;
	V58= ((V41))->cc.cc_turbo[13];
	((V58))->c.c_car = V52;}
	{object V60;
	V60= ((V41))->cc.cc_turbo[12];
	((V60))->c.c_car = V53;
	{object V62 = V53;
	VMR5(V62)}}}
	goto T35;
T35:;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V63 = vs_base[0];
	VMR5(V63)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-CLASS-SLOT-VALUE-1	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V64;
	object V65;
	object V66;
	check_arg(3);
	V64=(base[0]);
	V65=(base[1]);
	V66=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V67;
	{register object x= (V66),V68= ((V65))->v.v_self[10];
	while(V68!=Cnil)
	if(eql(x,V68->c.c_car->c.c_car) &&V68->c.c_car != Cnil){
	V67= (V68->c.c_car);
	goto T56;
	}else V68=V68->c.c_cdr;
	V67= Cnil;}
	goto T56;
T56:;
	if(((V67))!=Cnil){
	goto T58;}
	base[3]= ((V65))->v.v_self[11];
	base[4]= (V64);
	base[5]= (V66);
	base[6]= VV[9];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T58;
T58:;
	if(!((CMPcdr((V67)))==((VV[10]->s.s_dbind)))){
	goto T65;}
	base[3]= ((V65))->v.v_self[11];
	base[4]= (V64);
	base[5]= (V66);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T65;
T65:;
	base[3]= CMPcdr((V67));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for SET-CLASS-SLOT-VALUE-1	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V69;
	object V70;
	object V71;
	object V72;
	check_arg(4);
	V69=(base[0]);
	V70=(base[1]);
	V71=(base[2]);
	V72=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V73;
	{register object x= (V72),V74= ((V71))->v.v_self[10];
	while(V74!=Cnil)
	if(eql(x,V74->c.c_car->c.c_car) &&V74->c.c_car != Cnil){
	V73= (V74->c.c_car);
	goto T70;
	}else V74=V74->c.c_cdr;
	V73= Cnil;}
	goto T70;
T70:;
	if(((V73))!=Cnil){
	goto T72;}
	base[4]= ((V71))->v.v_self[11];
	base[5]= (V70);
	base[6]= (V72);
	base[7]= VV[11];
	base[8]= (V69);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T72;
T72:;
	(V73)->c.c_cdr = V69;
	base[4]= V69;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD CLASS-SLOT-VALUE (STD-CLASS T))	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
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
	{object V82;
	object V83;
	base[4]= (V79);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	V82= vs_base[0];
	base[4]= (V79);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk46)(Lclptr46);
	vs_top=sup;
	V83= vs_base[0];
	base[4]= (V83);
	base[5]= (V82);
	base[6]= (V80);
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
	{object V84;
	object V85;
	object V86;
	object V87;
	object V88;
	check_arg(5);
	V84=(base[0]);
	V85=(base[1]);
	V86=(base[2]);
	V87=(base[3]);
	V88=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V90;
	object V91;
	base[5]= (V87);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	V90= vs_base[0];
	base[5]= (V87);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk46)(Lclptr46);
	vs_top=sup;
	V91= vs_base[0];
	base[5]= (V86);
	base[6]= (V91);
	base[7]= (V90);
	base[8]= (V88);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk48)();
	return;}
	}
}
/*	local entry for function FIND-SLOT-DEFINITION	*/

static object LI10(V94,V95)

object V94;register object V95;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V96;
	register object V97;
	base[2]= (V94);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)(Lclptr49);
	vs_top=sup;
	V96= vs_base[0];
	V97= CMPcar((V96));
	goto T105;
T105:;
	if(!(((V96))==Cnil)){
	goto T106;}
	{object V98 = Cnil;
	VMR10(V98)}
	goto T106;
T106:;
	base[2]= (V97);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	V99= vs_base[0];
	if(!(eql((V95),V99))){
	goto T110;}
	{object V100 = (V97);
	VMR10(V100)}
	goto T110;
T110:;
	V96= CMPcdr((V96));
	V97= CMPcar((V96));
	goto T105;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-VALUE	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V101;
	object V102;
	check_arg(2);
	V101=(base[0]);
	V102=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V103;
	object V104;
	V103= (*(LnkLI51))((V101));
	V104= (*(LnkLI52))((V103),(V102));
	if(((V104))!=Cnil){
	goto T123;}
	base[4]= (V103);
	base[5]= (V101);
	base[6]= (V102);
	base[7]= VV[9];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T123;
T123:;
	base[4]= (V103);
	base[5]= (V101);
	base[6]= (V104);
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
	{object V105;
	object V106;
	object V107;
	check_arg(3);
	V105=(base[0]);
	V106=(base[1]);
	V107=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V108;
	object V109;
	V108= (*(LnkLI51))((V105));
	V109= (*(LnkLI52))((V108),(V106));
	if(((V109))!=Cnil){
	goto T135;}
	base[5]= (V108);
	base[6]= (V105);
	base[7]= (V106);
	base[8]= VV[11];
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T135;
T135:;
	base[5]= (V107);
	base[6]= V108;
	base[7]= V105;
	base[8]= V109;
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
	{object V113;
	object V114;
	check_arg(2);
	V113=(base[0]);
	V114=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V115;
	object V116;
	V115= (*(LnkLI51))((V113));
	V116= (*(LnkLI52))((V115),(V114));
	if(((V116))!=Cnil){
	goto T148;}
	base[4]= (V115);
	base[5]= (V113);
	base[6]= (V114);
	base[7]= VV[12];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T148;
T148:;
	base[4]= (V115);
	base[5]= (V113);
	base[6]= (V116);
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
	{object V117;
	object V118;
	check_arg(2);
	V117=(base[0]);
	V118=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V119;
	object V120;
	V119= (*(LnkLI51))((V117));
	V120= (*(LnkLI52))((V119),(V118));
	if(((V120))!=Cnil){
	goto T160;}
	base[4]= (V119);
	base[5]= (V117);
	base[6]= (V118);
	base[7]= VV[13];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk43)(Lclptr43);
	return;
	goto T160;
T160:;
	base[4]= (V119);
	base[5]= (V117);
	base[6]= (V120);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk30)(Lclptr30);
	return;}
	}
}
/*	local entry for function SLOT-EXISTS-P	*/

static object LI15(V123,V124)

object V123;object V124;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V125;
	V125= (*(LnkLI51))((V123));
	V126= (*(LnkLI52))((V125),(V124));
	{object V127 = ((((/* INLINE-ARGS */V126)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V127)}}
	return Cnil;
}
/*	function definition for SLOT-VALUE-OR-DEFAULT	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V128;
	object V129;
	object V130;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V128=(base[0]);
	V129=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T170;}
	V130=(base[2]);
	vs_top=sup;
	goto T171;
	goto T170;
T170:;
	V130= VV[14];
	goto T171;
T171:;
	base[3]= (V128);
	base[4]= (V129);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T174;}
	base[3]= (V128);
	base[4]= (V129);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk9)();
	return;
	goto T174;
T174:;
	base[3]= (V130);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function STANDARD-INSTANCE-ACCESS	*/

static object LI17(V133,V134)

object V133;object V134;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V135 = (STREF(object,(V133),4))->v.v_self[fix((V134))];
	VMR17(V135)}
	return Cnil;
}
/*	local entry for function FUNCALLABLE-STANDARD-INSTANCE-ACCESS	*/

static object LI18(V138,V139)

object V138;object V139;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V140 = (CMPcar(((V138))->cc.cc_turbo[12]))->v.v_self[fix((V139))];
	VMR18(V140)}
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V141;
	object V142;
	object V143;
	register object V144;
	register object V145;
	check_arg(5);
	V141=(base[0]);
	V142=(base[1]);
	V143=(base[2]);
	V144=(base[3]);
	V145=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V147;
	object V148;
	base[7]= (V145);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V147= vs_base[0];
	{register object V149;
	V149= (V147);
	if(!(type_of((V149))==t_fixnum)){
	goto T189;}
	if(type_of(V144)==t_structure){
	goto T194;}
	goto T192;
	goto T194;
T194:;
	if(!(((V144)->str.str_def)==(VV[15]))){
	goto T192;}
	if((Ct)==((STREF(object,(V144),0))->v.v_self[8])){
	goto T196;}
	(void)((*(LnkLI55))((V144)));
	goto T196;
T196:;
	V148= (STREF(object,(V144),4))->v.v_self[fix((V147))];
	goto T187;
	goto T192;
T192:;{object V151;
	V151= (VV[5]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V144);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V152= vs_base[0];
	if(!((V151)==(CMPcar(V152)))){
	goto T200;}}
	if((Ct)==((CMPcar(((V144))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T205;}
	(void)((*(LnkLI55))((V144)));
	goto T205;
T205:;
	V148= (CMPcar(((V144))->cc.cc_turbo[12]))->v.v_self[fix((V147))];
	goto T187;
	goto T200;
T200:;
	base[7]= VV[16];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V148= vs_base[0];
	goto T187;
	goto T189;
T189:;
	if(!(type_of((V149))==t_cons)){
	goto T210;}
	V148= CMPcdr((V147));
	goto T187;
	goto T210;
T210:;
	base[7]= VV[17];
	base[8]= (V145);
	base[9]= VV[18];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	V148= vs_base[0];}
	goto T187;
T187:;
	if(!(((V148))==((VV[10]->s.s_dbind)))){
	goto T216;}
	base[7]= (V143);
	base[8]= (V144);
	base[10]= (V145);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T216;
T216:;
	base[7]= (V148);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI20(V159,V160,V161,V162,V163,V164)

object V159;object V160;object V161;object V162;register object V163;object V164;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{register object V166;
	base[0]= (V164);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V166= vs_base[0];
	{register object V167;
	V167= (V166);
	if(!(type_of((V167))==t_fixnum)){
	goto T230;}
	if(type_of(V163)==t_structure){
	goto T235;}
	goto T233;
	goto T235;
T235:;
	if(!(((V163)->str.str_def)==(VV[19]))){
	goto T233;}
	if((Ct)==((STREF(object,(V163),0))->v.v_self[8])){
	goto T237;}
	(void)((*(LnkLI55))((V163)));
	goto T237;
T237:;
	{object V169 = (STREF(object,(V163),4))->v.v_self[fix((V166))]= ((V161));
	VMR20(V169)}
	goto T233;
T233:;{object V170;
	V170= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V163);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V171= vs_base[0];
	if(!((V170)==(CMPcar(V171)))){
	goto T241;}}
	if((Ct)==((CMPcar(((V163))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T246;}
	(void)((*(LnkLI55))((V163)));
	goto T246;
T246:;
	{object V172 = (CMPcar(((V163))->cc.cc_turbo[12]))->v.v_self[fix((V166))]= ((V161));
	VMR20(V172)}
	goto T241;
T241:;
	base[0]= VV[20];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V173 = vs_base[0];
	VMR20(V173)}
	goto T230;
T230:;
	if(!(type_of((V167))==t_cons)){
	goto T251;}
	(V166)->c.c_cdr = V161;
	{object V176 = V161;
	VMR20(V176)}
	goto T251;
T251:;
	base[0]= VV[21];
	base[1]= (V164);
	base[2]= VV[22];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V177 = vs_base[0];
	VMR20(V177)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI21(V183,V184,V185,V186,V187)

object V183;object V184;object V185;register object V186;object V187;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V189;
	object V190;
	base[2]= (V187);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V189= vs_base[0];
	{register object V191;
	V191= (V189);
	if(!(type_of((V191))==t_fixnum)){
	goto T266;}
	if(type_of(V186)==t_structure){
	goto T271;}
	goto T269;
	goto T271;
T271:;
	if(!(((V186)->str.str_def)==(VV[23]))){
	goto T269;}
	if((Ct)==((STREF(object,(V186),0))->v.v_self[8])){
	goto T273;}
	(void)((*(LnkLI55))((V186)));
	goto T273;
T273:;
	V190= (STREF(object,(V186),4))->v.v_self[fix((V189))];
	goto T264;
	goto T269;
T269:;{object V193;
	V193= (VV[5]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V186);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V194= vs_base[0];
	if(!((V193)==(CMPcar(V194)))){
	goto T277;}}
	if((Ct)==((CMPcar(((V186))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T282;}
	(void)((*(LnkLI55))((V186)));
	goto T282;
T282:;
	V190= (CMPcar(((V186))->cc.cc_turbo[12]))->v.v_self[fix((V189))];
	goto T264;
	goto T277;
T277:;
	base[2]= VV[24];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V190= vs_base[0];
	goto T264;
	goto T266;
T266:;
	if(!(type_of((V191))==t_cons)){
	goto T287;}
	V190= CMPcdr((V189));
	goto T264;
	goto T287;
T287:;
	base[2]= VV[25];
	base[3]= (V187);
	base[4]= VV[26];
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;
	V190= vs_base[0];}
	goto T264;
T264:;
	{object V195 = (((((V190))==((VV[10]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR21(V195)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI22(V201,V202,V203,V204,V205)

object V201;object V202;object V203;register object V204;object V205;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V207;
	base[0]= (V205);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk54)(Lclptr54);
	vs_top=sup;
	V207= vs_base[0];
	{register object V208;
	V208= (V207);
	if(!(type_of((V208))==t_fixnum)){
	goto T301;}
	if(type_of(V204)==t_structure){
	goto T306;}
	goto T304;
	goto T306;
T306:;
	if(!(((V204)->str.str_def)==(VV[27]))){
	goto T304;}
	if((Ct)==((STREF(object,(V204),0))->v.v_self[8])){
	goto T308;}
	(void)((*(LnkLI55))((V204)));
	goto T308;
T308:;
	(void)((STREF(object,(V204),4))->v.v_self[fix((V207))]= ((VV[10]->s.s_dbind)));
	goto T297;
	goto T304;
T304:;{object V210;
	V210= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V204);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	vs_top=sup;
	V211= vs_base[0];
	if(!((V210)==(CMPcar(V211)))){
	goto T312;}}
	if((Ct)==((CMPcar(((V204))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T317;}
	(void)((*(LnkLI55))((V204)));
	goto T317;
T317:;
	(void)((CMPcar(((V204))->cc.cc_turbo[12]))->v.v_self[fix((V207))]= ((VV[10]->s.s_dbind)));
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
	if(!(type_of((V208))==t_cons)){
	goto T322;}
	{object V213;
	V213= (VV[10]->s.s_dbind);
	(V207)->c.c_cdr = (V213);
	goto T297;}
	goto T322;
T322:;
	base[0]= VV[29];
	base[1]= (V205);
	base[2]= VV[30];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;}}
	goto T297;
T297:;
	{object V214 = Cnil;
	VMR22(V214)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V215;
	object V216;
	object V217;
	object V218;
	object V219;
	check_arg(5);
	V215=(base[0]);
	V216=(base[1]);
	V217=(base[2]);
	V218=(base[3]);
	V219=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V221;
	object V222;
	base[7]= (V219);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk56)(Lclptr56);
	vs_top=sup;
	V221= vs_base[0];
	V222= (
	(type_of((V221)) == t_sfun ?(*(((V221))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V221))==t_vfun) ?
	(*(((V221))->sfn.sfn_self)):
	(fcall.fun=((V221)),fcalln))((V218)));
	if(!(((V222))==((VV[10]->s.s_dbind)))){
	goto T338;}
	base[7]= (V217);
	base[8]= (V218);
	base[10]= (V219);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk44)(Lclptr44);
	return;
	goto T338;
T338:;
	base[7]= (V222);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V223;
	object V224;
	object V225;
	object V226;
	object V227;
	object V228;
	check_arg(6);
	V223=(base[0]);
	V224=(base[1]);
	V225=(base[2]);
	V226=(base[3]);
	V227=(base[4]);
	V228=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V230;
	base[6]= (V228);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk57)(Lclptr57);
	vs_top=sup;
	V230= vs_base[0];
	base[6]= (V225);
	base[7]= (V227);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = (V230);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI25(V236,V237,V238,V239,V240)

object V236;object V237;object V238;object V239;object V240;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V242 = Ct;
	VMR25(V242)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI26(V248,V249,V250,V251,V252)

object V248;object V249;object V250;object V251;object V252;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= VV[31];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V254 = vs_base[0];
	VMR26(V254)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MISSING (T T T T))	*/

static object LI27(V262,V263,V264,V265,V266,V267,V268)

object V262;object V263;object V264;object V265;object V266;object V267;object V268;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{register object V269;
	object V270;
	V269= (V268);
	if(((V269))==Cnil){
	goto T369;}
	{object V271;
	V271= CMPcar((V269));
	V269= CMPcdr((V269));
	V270= (V271);
	goto T367;}
	goto T369;
T369:;
	V270= Cnil;
	goto T367;
T367:;
	base[1]= VV[32];
	{object V272= (V267);
	if((V272!= VV[9]))goto T377;
	base[2]= VV[33];
	goto T376;
	goto T377;
T377:;
	if((V272!= VV[11]))goto T378;
	base[3]= Cnil;
	base[4]= VV[34];
	base[5]= (V270);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T376;
	goto T378;
T378:;
	if((V272!= VV[12]))goto T382;
	base[2]= VV[35];
	goto T376;
	goto T382;
T382:;
	if((V272!= VV[13]))goto T383;
	base[2]= VV[36];
	goto T376;
	goto T383;
T383:;
	FEerror("The ECASE key value ~s is illegal.",1,V272);
	base[2]= Cnil;
	goto T376;}
	goto T376;
T376:;
	base[3]= (V266);
	base[4]= (V265);
	vs_top=(vs_base=base+1)+4;
	Lerror();
	vs_top=sup;
	{object V273 = vs_base[0];
	VMR27(V273)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-UNBOUND (T T T))	*/

static object LI28(V279,V280,V281,V282,V283)

object V279;object V280;object V281;object V282;object V283;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= (V283);
	base[2]= (V282);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V285 = vs_base[0];
	VMR28(V285)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-UNBOUND-INTERNAL	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V286;
	object V287;
	check_arg(2);
	V286=(base[0]);
	V287=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI51))((V286));
	base[3]= (V286);
	{register object V288;
	V288= (V287);
	if(!(type_of((V288))==t_fixnum)){
	goto T396;}
	V289= (*(LnkLI58))((V286));
	base[4]= nth(fix((V287)),(/* INLINE-ARGS */V289)->v.v_self[9]);
	goto T394;
	goto T396;
T396:;
	if(!(type_of((V288))==t_cons)){
	goto T399;}
	base[4]= CMPcar((V287));
	goto T394;
	goto T399;
T399:;
	base[6]= VV[38];
	base[7]= (V288);
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

static object LI30(V294,V295,V296,V297)

object V294;object V295;register object V296;object V297;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	base[0]= (V296);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T408;}
	base[0]= (V296);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk61)(Lclptr61);
	vs_top=sup;
	goto T408;
T408:;
	base[0]= (V296);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	V300= vs_base[0];
	{object V301 = (VFUN_NARGS=1,(*(LnkLI2))(V300));
	VMR30(V301)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD ALLOCATE-INSTANCE (STRUCTURE-CLASS))	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V302;
	object V303;
	object V304;
	object V305;
	check_arg(4);
	V302=(base[0]);
	V303=(base[1]);
	V304=(base[2]);
	V305=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V308;
	base[4]= (V304);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk62)(Lclptr62);
	vs_top=sup;
	V308= vs_base[0];
	if(((V308))==Cnil){
	goto T421;}
	vs_base=vs_top;
	{object _funobj = (V308);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T421;
T421:;
	base[4]= VV[40];
	base[6]= (V304);
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

