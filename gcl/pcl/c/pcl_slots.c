
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
	goto T10;}
	goto T8;
	goto T10;
T10:;
	if(!(((V27)->str.str_def)==(VV[3]))){
	goto T8;}
	V30= Ct;
	STSET(object,(V27),0, (V28));
	{object V31 = (V28);
	VMR4(V31)}
	goto T8;
T8:;{object V32;
	V32= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V27);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	V33= vs_base[0];
	if(!((V32)==(CMPcar(V33)))){
	goto T13;}}
	{object V34;
	V34= ((V27))->cc.cc_turbo[13];
	((V34))->c.c_car = V28;
	{object V36 = V28;
	VMR4(V36)}}
	goto T13;
T13:;
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
	goto T24;}
	goto T22;
	goto T24;
T24:;
	if(!(((V40)->str.str_def)==(VV[7]))){
	goto T22;}
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
	goto T22;
T22:;{object V50;
	V50= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V40);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	V51= vs_base[0];
	if(!((V50)==(CMPcar(V51)))){
	goto T32;}}
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
	goto T32;
T32:;
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
	goto T53;
	}else V68=V68->c.c_cdr;
	V67= Cnil;}
	goto T53;
T53:;
	if(((V67))!=Cnil){
	goto T55;}
	base[3]= ((V65))->v.v_self[11];
	base[4]= (V64);
	base[5]= (V66);
	base[6]= VV[9];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk58)(Lclptr58);
	return;
	goto T55;
T55:;
	if(!((CMPcdr((V67)))==((VV[10]->s.s_dbind)))){
	goto T62;}
	base[3]= ((V65))->v.v_self[11];
	base[4]= (V64);
	base[5]= (V66);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk59)(Lclptr59);
	return;
	goto T62;
T62:;
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
	goto T67;
	}else V74=V74->c.c_cdr;
	V73= Cnil;}
	goto T67;
T67:;
	if(((V73))!=Cnil){
	goto T69;}
	base[4]= ((V71))->v.v_self[11];
	base[5]= (V70);
	base[6]= (V72);
	base[7]= VV[11];
	base[8]= (V69);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk58)(Lclptr58);
	return;
	goto T69;
T69:;
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
	register object V79;
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
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	V82= vs_base[0];
	base[4]= (V79);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk61)(Lclptr61);
	vs_top=sup;
	V83= vs_base[0];
	base[4]= (V83);
	base[5]= (V82);
	base[6]= (V80);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk62)();
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
	register object V87;
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
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	V90= vs_base[0];
	base[5]= (V87);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk61)(Lclptr61);
	vs_top=sup;
	V91= vs_base[0];
	base[5]= (V86);
	base[6]= (V91);
	base[7]= (V90);
	base[8]= (V88);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk63)();
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
	(void) (*Lnk64)(Lclptr64);
	vs_top=sup;
	V96= vs_base[0];
	V97= CMPcar((V96));
	goto T100;
T100:;
	if(!(((V96))==Cnil)){
	goto T101;}
	{object V98 = Cnil;
	VMR10(V98)}
	goto T101;
T101:;
	base[2]= (V97);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk65)(Lclptr65);
	vs_top=sup;
	V99= vs_base[0];
	if(!(eql((V95),V99))){
	goto T105;}
	{object V100 = (V97);
	VMR10(V100)}
	goto T105;
T105:;
	V96= CMPcdr((V96));
	V97= CMPcar((V96));
	goto T100;}
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
	V103= (*(LnkLI66))((V101));
	V104= (*(LnkLI67))((V103),(V102));
	if(((V104))!=Cnil){
	goto T118;}
	base[4]= (V103);
	base[5]= (V101);
	base[6]= (V102);
	base[7]= VV[9];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk58)(Lclptr58);
	return;
	goto T118;
T118:;
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
	V108= (*(LnkLI66))((V105));
	V109= (*(LnkLI67))((V108),(V106));
	if(((V109))!=Cnil){
	goto T130;}
	base[5]= (V108);
	base[6]= (V105);
	base[7]= (V106);
	base[8]= VV[11];
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk58)(Lclptr58);
	return;
	goto T130;
T130:;
	base[5]= ({object _tmp=get(VV[18],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[18])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[18])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V107;
	base[7]= V108;
	base[8]= V105;
	base[9]= V109;
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
	{object V114;
	object V115;
	check_arg(2);
	V114=(base[0]);
	V115=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V116;
	object V117;
	V116= (*(LnkLI66))((V114));
	V117= (*(LnkLI67))((V116),(V115));
	if(((V117))!=Cnil){
	goto T144;}
	base[4]= (V116);
	base[5]= (V114);
	base[6]= (V115);
	base[7]= VV[12];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk58)(Lclptr58);
	return;
	goto T144;
T144:;
	base[4]= (V116);
	base[5]= (V114);
	base[6]= (V117);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk28)(Lclptr28);
	return;}
	}
}
/*	function definition for SLOT-MAKUNBOUND	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V118;
	object V119;
	check_arg(2);
	V118=(base[0]);
	V119=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V120;
	object V121;
	V120= (*(LnkLI66))((V118));
	V121= (*(LnkLI67))((V120),(V119));
	if(((V121))!=Cnil){
	goto T156;}
	base[4]= (V120);
	base[5]= (V118);
	base[6]= (V119);
	base[7]= VV[13];
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk58)(Lclptr58);
	return;
	goto T156;
T156:;
	base[4]= (V120);
	base[5]= (V118);
	base[6]= (V121);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk33)(Lclptr33);
	return;}
	}
}
/*	local entry for function SLOT-EXISTS-P	*/

static object LI15(V124,V125)

object V124;object V125;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V126;
	V126= (*(LnkLI66))((V124));
	V127= (*(LnkLI67))((V126),(V125));
	{object V128 = ((((/* INLINE-ARGS */V127)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V128)}}
	return Cnil;
}
/*	function definition for SLOT-VALUE-OR-DEFAULT	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V129;
	object V130;
	object V131;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V129=(base[0]);
	V130=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T166;}
	V131=(base[2]);
	vs_top=sup;
	goto T167;
	goto T166;
T166:;
	V131= VV[14];
	goto T167;
T167:;
	base[3]= (V129);
	base[4]= (V130);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T170;}
	base[3]= (V129);
	base[4]= (V130);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk9)();
	return;
	goto T170;
T170:;
	base[3]= (V131);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function STANDARD-INSTANCE-ACCESS	*/

static object LI17(V134,V135)

object V134;object V135;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V136 = (STREF(object,(V134),4))->v.v_self[fix((V135))];
	VMR17(V136)}
	return Cnil;
}
/*	local entry for function FUNCALLABLE-STANDARD-INSTANCE-ACCESS	*/

static object LI18(V139,V140)

object V139;object V140;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V141 = (CMPcar(((V139))->cc.cc_turbo[12]))->v.v_self[fix((V140))];
	VMR18(V141)}
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V142;
	object V143;
	object V144;
	register object V145;
	register object V146;
	check_arg(5);
	V142=(base[0]);
	V143=(base[1]);
	V144=(base[2]);
	V145=(base[3]);
	V146=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V148;
	object V149;
	base[7]= (V146);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk68)(Lclptr68);
	vs_top=sup;
	V148= vs_base[0];
	{register object V150;
	V150= (V148);
	if(!(type_of((V150))==t_fixnum)){
	goto T182;}
	if(type_of(V145)==t_structure){
	goto T187;}
	goto T185;
	goto T187;
T187:;
	if(!(((V145)->str.str_def)==(VV[19]))){
	goto T185;}
	if((Ct)==((STREF(object,(V145),0))->v.v_self[8])){
	goto T189;}
	(void)((*(LnkLI69))((V145)));
	goto T189;
T189:;
	V149= (STREF(object,(V145),4))->v.v_self[fix((V148))];
	goto T180;
	goto T185;
T185:;{object V152;
	V152= (VV[5]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V145);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	V153= vs_base[0];
	if(!((V152)==(CMPcar(V153)))){
	goto T193;}}
	if((Ct)==((CMPcar(((V145))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T198;}
	(void)((*(LnkLI69))((V145)));
	goto T198;
T198:;
	V149= (CMPcar(((V145))->cc.cc_turbo[12]))->v.v_self[fix((V148))];
	goto T180;
	goto T193;
T193:;
	base[7]= VV[16];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V149= vs_base[0];
	goto T180;
	goto T182;
T182:;
	if(!(type_of((V150))==t_cons)){
	goto T203;}
	V149= CMPcdr((V148));
	goto T180;
	goto T203;
T203:;
	base[7]= VV[17];
	base[8]= (V146);
	base[9]= VV[18];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	V149= vs_base[0];}
	goto T180;
T180:;
	if(!(((V149))==((VV[10]->s.s_dbind)))){
	goto T209;}
	base[7]= (V144);
	base[8]= (V145);
	base[10]= (V146);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk65)(Lclptr65);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk59)(Lclptr59);
	return;
	goto T209;
T209:;
	base[7]= (V149);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI20(V160,V161,V162,V163,V164,V165)

object V160;object V161;register object V162;object V163;register object V164;register object V165;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{register object V167;
	base[0]= (V165);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)(Lclptr68);
	vs_top=sup;
	V167= vs_base[0];
	{register object V168;
	V168= (V167);
	if(!(type_of((V168))==t_fixnum)){
	goto T220;}
	if(type_of(V164)==t_structure){
	goto T225;}
	goto T223;
	goto T225;
T225:;
	if(!(((V164)->str.str_def)==(VV[24]))){
	goto T223;}
	if((Ct)==((STREF(object,(V164),0))->v.v_self[8])){
	goto T227;}
	(void)((*(LnkLI69))((V164)));
	goto T227;
T227:;
	{object V170 = (STREF(object,(V164),4))->v.v_self[fix((V167))]= ((V162));
	VMR20(V170)}
	goto T223;
T223:;{object V171;
	V171= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V164);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	V172= vs_base[0];
	if(!((V171)==(CMPcar(V172)))){
	goto T231;}}
	if((Ct)==((CMPcar(((V164))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T236;}
	(void)((*(LnkLI69))((V164)));
	goto T236;
T236:;
	{object V173 = (CMPcar(((V164))->cc.cc_turbo[12]))->v.v_self[fix((V167))]= ((V162));
	VMR20(V173)}
	goto T231;
T231:;
	base[0]= VV[21];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V174 = vs_base[0];
	VMR20(V174)}
	goto T220;
T220:;
	if(!(type_of((V168))==t_cons)){
	goto T241;}
	(V167)->c.c_cdr = V162;
	{object V177 = V162;
	VMR20(V177)}
	goto T241;
T241:;
	base[0]= VV[22];
	base[1]= (V165);
	base[2]= VV[23];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V178 = vs_base[0];
	VMR20(V178)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI21(V184,V185,V186,V187,V188)

object V184;object V185;object V186;register object V187;register object V188;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V190;
	object V191;
	base[2]= (V188);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk68)(Lclptr68);
	vs_top=sup;
	V190= vs_base[0];
	{register object V192;
	V192= (V190);
	if(!(type_of((V192))==t_fixnum)){
	goto T253;}
	if(type_of(V187)==t_structure){
	goto T258;}
	goto T256;
	goto T258;
T258:;
	if(!(((V187)->str.str_def)==(VV[29]))){
	goto T256;}
	if((Ct)==((STREF(object,(V187),0))->v.v_self[8])){
	goto T260;}
	(void)((*(LnkLI69))((V187)));
	goto T260;
T260:;
	V191= (STREF(object,(V187),4))->v.v_self[fix((V190))];
	goto T251;
	goto T256;
T256:;{object V194;
	V194= (VV[5]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V187);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	V195= vs_base[0];
	if(!((V194)==(CMPcar(V195)))){
	goto T264;}}
	if((Ct)==((CMPcar(((V187))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T269;}
	(void)((*(LnkLI69))((V187)));
	goto T269;
T269:;
	V191= (CMPcar(((V187))->cc.cc_turbo[12]))->v.v_self[fix((V190))];
	goto T251;
	goto T264;
T264:;
	base[2]= VV[26];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V191= vs_base[0];
	goto T251;
	goto T253;
T253:;
	if(!(type_of((V192))==t_cons)){
	goto T274;}
	V191= CMPcdr((V190));
	goto T251;
	goto T274;
T274:;
	base[2]= VV[27];
	base[3]= (V188);
	base[4]= VV[28];
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;
	V191= vs_base[0];}
	goto T251;
T251:;
	{object V196 = (((((V191))==((VV[10]->s.s_dbind))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR21(V196)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STD-CLASS STANDARD-OBJECT STANDARD-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI22(V202,V203,V204,V205,V206)

object V202;object V203;object V204;register object V205;register object V206;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V208;
	base[0]= (V206);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)(Lclptr68);
	vs_top=sup;
	V208= vs_base[0];
	{register object V209;
	V209= (V208);
	if(!(type_of((V209))==t_fixnum)){
	goto T285;}
	if(type_of(V205)==t_structure){
	goto T290;}
	goto T288;
	goto T290;
T290:;
	if(!(((V205)->str.str_def)==(VV[34]))){
	goto T288;}
	if((Ct)==((STREF(object,(V205),0))->v.v_self[8])){
	goto T292;}
	(void)((*(LnkLI69))((V205)));
	goto T292;
T292:;
	(void)((STREF(object,(V205),4))->v.v_self[fix((V208))]= ((VV[10]->s.s_dbind)));
	goto T281;
	goto T288;
T288:;{object V211;
	V211= (VV[5]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V205);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	V212= vs_base[0];
	if(!((V211)==(CMPcar(V212)))){
	goto T296;}}
	if((Ct)==((CMPcar(((V205))->cc.cc_turbo[13]))->v.v_self[8])){
	goto T301;}
	(void)((*(LnkLI69))((V205)));
	goto T301;
T301:;
	(void)((CMPcar(((V205))->cc.cc_turbo[12]))->v.v_self[fix((V208))]= ((VV[10]->s.s_dbind)));
	goto T281;
	goto T296;
T296:;
	base[0]= VV[31];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T281;
	goto T285;
T285:;
	if(!(type_of((V209))==t_cons)){
	goto T306;}
	{object V214;
	V214= (VV[10]->s.s_dbind);
	(V208)->c.c_cdr = (V214);
	goto T281;}
	goto T306;
T306:;
	base[0]= VV[32];
	base[1]= (V206);
	base[2]= VV[33];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;}}
	goto T281;
T281:;
	{object V215 = Cnil;
	VMR22(V215)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SLOT-VALUE-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V216;
	object V217;
	object V218;
	register object V219;
	register object V220;
	check_arg(5);
	V216=(base[0]);
	V217=(base[1]);
	V218=(base[2]);
	V219=(base[3]);
	V220=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V222;
	object V223;
	base[7]= (V220);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk70)(Lclptr70);
	vs_top=sup;
	V222= vs_base[0];
	V223= (
	(type_of((V222)) == t_sfun ?(*(((V222))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V222))==t_vfun) ?
	(*(((V222))->sfn.sfn_self)):
	(fcall.fun=((V222)),fcalln))((V219)));
	if(!(((V223))==((VV[10]->s.s_dbind)))){
	goto T319;}
	base[7]= (V218);
	base[8]= (V219);
	base[10]= (V220);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk65)(Lclptr65);
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk59)(Lclptr59);
	return;
	goto T319;
T319:;
	base[7]= (V223);
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD (SETF SLOT-VALUE-USING-CLASS) (T STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V224;
	object V225;
	object V226;
	object V227;
	object V228;
	object V229;
	check_arg(6);
	V224=(base[0]);
	V225=(base[1]);
	V226=(base[2]);
	V227=(base[3]);
	V228=(base[4]);
	V229=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V231;
	base[6]= (V229);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk71)(Lclptr71);
	vs_top=sup;
	V231= vs_base[0];
	base[6]= (V226);
	base[7]= (V228);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = (V231);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function (FAST-METHOD SLOT-BOUNDP-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI25(V237,V238,V239,V240,V241)

object V237;object V238;object V239;object V240;object V241;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V243 = Ct;
	VMR25(V243)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MAKUNBOUND-USING-CLASS (STRUCTURE-CLASS STRUCTURE-OBJECT STRUCTURE-EFFECTIVE-SLOT-DEFINITION))	*/

static object LI26(V249,V250,V251,V252,V253)

object V249;object V250;object V251;object V252;object V253;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= VV[35];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V255 = vs_base[0];
	VMR26(V255)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-MISSING (T T T T))	*/

static object LI27(V263,V264,V265,V266,V267,V268,V269)

object V263;object V264;object V265;object V266;object V267;object V268;object V269;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{register object V270;
	object V271;
	V270= (V269);
	if(((V270))==Cnil){
	goto T341;}
	{object V272;
	V272= CMPcar((V270));
	V270= CMPcdr((V270));
	V271= (V272);
	goto T339;}
	goto T341;
T341:;
	V271= Cnil;
	goto T339;
T339:;
	base[1]= VV[36];
	{object V274= V268;
	if((V274!= VV[9]))goto T348;
	base[2]= VV[37];
	goto T347;
	goto T348;
T348:;
	if((V274!= VV[11]))goto T349;
	base[3]= Cnil;
	base[4]= VV[38];
	base[5]= (V271);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T347;
	goto T349;
T349:;
	if((V274!= VV[12]))goto T353;
	base[2]= VV[39];
	goto T347;
	goto T353;
T353:;
	if((V274!= VV[13]))goto T354;
	base[2]= VV[40];
	goto T347;
	goto T354;
T354:;
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= VV[43];
	base[6]= VV[44];
	base[7]= V268;
	base[8]= VV[45];
	base[9]= VV[49];
	base[10]= VV[47];
	base[11]= VV[50];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk72)();
	vs_top=sup;
	base[2]= vs_base[0];}
	goto T347;
T347:;
	base[3]= (V267);
	base[4]= (V266);
	vs_top=(vs_base=base+1)+4;
	Lerror();
	vs_top=sup;
	{object V275 = vs_base[0];
	VMR27(V275)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-UNBOUND (T T T))	*/

static object LI28(V281,V282,V283,V284,V285)

object V281;object V282;object V283;object V284;object V285;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= (V285);
	base[2]= (V284);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V287 = vs_base[0];
	VMR28(V287)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-UNBOUND-INTERNAL	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V288;
	object V289;
	check_arg(2);
	V288=(base[0]);
	V289=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI66))((V288));
	base[3]= (V288);
	{register object V291;
	V291= V289;
	if(!(type_of((V291))==t_fixnum)){
	goto T375;}
	V292= (*(LnkLI73))((V288));
	base[4]= nth(fix((V289)),(/* INLINE-ARGS */V292)->v.v_self[9]);
	goto T373;
	goto T375;
T375:;
	if(!(type_of((V291))==t_cons)){
	goto T378;}
	base[4]= CMPcar((V289));
	goto T373;
	goto T378;
T378:;
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= VV[52];
	base[8]= VV[44];
	base[9]= V289;
	base[10]= VV[45];
	base[11]= VV[53];
	base[12]= VV[47];
	base[13]= VV[54];
	vs_top=(vs_base=base+5)+9;
	(void) (*Lnk72)();
	vs_top=sup;
	base[4]= vs_base[0];}
	goto T373;
T373:;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk59)(Lclptr59);
	return;
	}
}
/*	local entry for function (FAST-METHOD ALLOCATE-INSTANCE (STANDARD-CLASS))	*/

static object LI30(V297,V298,V299,V300)

object V297;object V298;register object V299;object V300;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	base[0]= (V299);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk74)(Lclptr74);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T391;}
	base[0]= (V299);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	goto T391;
T391:;
	base[0]= (V299);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	V303= vs_base[0];
	{object V304 = (VFUN_NARGS=1,(*(LnkLI2))(V303));
	VMR30(V304)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD ALLOCATE-INSTANCE (STRUCTURE-CLASS))	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V305;
	object V306;
	register object V307;
	object V308;
	check_arg(4);
	V305=(base[0]);
	V306=(base[1]);
	V307=(base[2]);
	V308=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V311;
	base[4]= (V307);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk76)(Lclptr76);
	vs_top=sup;
	V311= vs_base[0];
	if(((V311))==Cnil){
	goto T403;}
	vs_base=vs_top;
	{object _funobj = (V311);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T403;
T403:;
	base[4]= VV[55];
	base[6]= (V307);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk77)(Lclptr77);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	Lerror();
	return;}
	}
}
static void LnkT77(ptr) object *ptr;{ call_or_link_closure(VV[77],(void **)(void *)&Lnk77,(void **)(void *)&Lclptr77);} /* CLASS-NAME */
static void LnkT76(ptr) object *ptr;{ call_or_link_closure(VV[76],(void **)(void *)&Lnk76,(void **)(void *)&Lclptr76);} /* CLASS-DEFSTRUCT-CONSTRUCTOR */
static object  LnkTLI2(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[2],(void **)(void *)&LnkLI2,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static void LnkT75(ptr) object *ptr;{ call_or_link_closure(VV[75],(void **)(void *)&Lnk75,(void **)(void *)&Lclptr75);} /* FINALIZE-INHERITANCE */
static void LnkT74(ptr) object *ptr;{ call_or_link_closure(VV[74],(void **)(void *)&Lnk74,(void **)(void *)&Lclptr74);} /* CLASS-FINALIZED-P */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* ERROR */
static void LnkT71(ptr) object *ptr;{ call_or_link_closure(VV[71],(void **)(void *)&Lnk71,(void **)(void *)&Lclptr71);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT70(ptr) object *ptr;{ call_or_link_closure(VV[70],(void **)(void *)&Lnk70,(void **)(void *)&Lclptr70);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],(void **)(void *)&LnkLI69,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static void LnkT68(ptr) object *ptr;{ call_or_link_closure(VV[68],(void **)(void *)&Lnk68,(void **)(void *)&Lclptr68);} /* SLOT-DEFINITION-LOCATION */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* SLOT-VALUE */
static void LnkT12(){ call_or_link(VV[12],(void **)(void *)&Lnk12);} /* SLOT-BOUNDP */
static void LnkT33(ptr) object *ptr;{ call_or_link_closure(VV[33],(void **)(void *)&Lnk33,(void **)(void *)&Lclptr33);} /* SLOT-MAKUNBOUND-USING-CLASS */
static void LnkT28(ptr) object *ptr;{ call_or_link_closure(VV[28],(void **)(void *)&Lnk28,(void **)(void *)&Lclptr28);} /* SLOT-BOUNDP-USING-CLASS */
static void LnkT18(ptr) object *ptr;{ call_or_link_closure(VV[18],(void **)(void *)&Lnk18,(void **)(void *)&Lclptr18);} /* SLOT-VALUE-USING-CLASS */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT65(ptr) object *ptr;{ call_or_link_closure(VV[65],(void **)(void *)&Lnk65,(void **)(void *)&Lclptr65);} /* SLOT-DEFINITION-NAME */
static void LnkT64(ptr) object *ptr;{ call_or_link_closure(VV[64],(void **)(void *)&Lnk64,(void **)(void *)&Lclptr64);} /* CLASS-SLOTS */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* SET-CLASS-SLOT-VALUE-1 */
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* GET-CLASS-SLOT-VALUE-1 */
static void LnkT61(ptr) object *ptr;{ call_or_link_closure(VV[61],(void **)(void *)&Lnk61,(void **)(void *)&Lclptr61);} /* CLASS-PROTOTYPE */
static void LnkT60(ptr) object *ptr;{ call_or_link_closure(VV[60],(void **)(void *)&Lnk60,(void **)(void *)&Lclptr60);} /* CLASS-WRAPPER */
static void LnkT59(ptr) object *ptr;{ call_or_link_closure(VV[59],(void **)(void *)&Lnk59,(void **)(void *)&Lclptr59);} /* SLOT-UNBOUND */
static void LnkT58(ptr) object *ptr;{ call_or_link_closure(VV[58],(void **)(void *)&Lnk58,(void **)(void *)&Lclptr58);} /* SLOT-MISSING */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT56(){ call_or_link(VV[56],(void **)(void *)&Lnk56);} /* CCLOSURE-ENV-NTHCDR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

