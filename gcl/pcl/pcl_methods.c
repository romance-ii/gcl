
#include "cmpinclude.h"
#include "pcl_methods.h"
void init_pcl_methods(){do_init(VV);}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (T T))	*/

static object LI1(V5,V6,V7,V8)

object V5;object V6;object V7;register object V8;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= (V8);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V10;
	base[0]= (*(LnkLI149))((V7));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V10= vs_base[0];
	if(((V10))==Cnil){
	goto T11;}
	base[0]= (V8);
	base[1]= VV[1];
	base[2]= (V10);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T7;
	goto T11;
T11:;
	base[0]= (V8);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;}
	goto T7;
T7:;
	base[0]= (V8);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI211))((V7),(V8)));
	base[0]= (V8);
	base[1]= VV[4];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V11 = vs_base[0];
	VMR1(V11)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (CLASS T))	*/

static object LI2(V16,V17,V18,V19)

object V16;object V17;object V18;object V19;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V21 = (VFUN_NARGS=2,(*(LnkLI212))((V18),(V19)));
	VMR2(V21)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (SLOT-DEFINITION T))	*/

static object LI3(V26,V27,V28,V29)

object V26;object V27;object V28;object V29;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V31 = (VFUN_NARGS=2,(*(LnkLI212))((V28),(V29)));
	VMR3(V31)}
	return Cnil;
}
/*	local entry for function NAMED-OBJECT-PRINT-FUNCTION	*/

static object LI4(object V33,object V32,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{register object V34;
	register object V35;
	object V36;
	object V37;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V34= V33;
	V35= V32;
	narg = narg - 2;
	if (narg <= 0) goto T30;
	else {
	V36= first;}
	V37= Ct;
	--narg; goto T31;
	goto T30;
T30:;
	V36= Cnil;
	V37= Cnil;
	goto T31;
T31:;
	base[0]= (V35);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	if(((V37))==Cnil){
	goto T38;}
	base[0]= (V35);
	base[1]= VV[5];
	base[3]= (*(LnkLI149))((V34));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V38= vs_base[0];
	base[2]= (VFUN_NARGS=1,(*(LnkLI213))(V38));
	base[4]= (V34);
	base[5]= VV[6];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V36);
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	goto T36;
	goto T38;
T38:;
	base[0]= (V35);
	base[1]= VV[7];
	base[3]= (*(LnkLI149))((V34));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V39= vs_base[0];
	base[2]= (VFUN_NARGS=1,(*(LnkLI213))(V39));
	base[4]= (V34);
	base[5]= VV[6];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T36;
T36:;
	base[0]= (V35);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI211))((V34),(V35)));
	base[0]= (V35);
	base[1]= VV[4];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V40 = vs_base[0];
	VMR4(V40)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (STANDARD-METHOD-COMBINATION T))	*/

static object LI5(V45,V46,V47,V48)

object V45;object V46;register object V47;register object V48;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= (V48);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	base[0]= (V48);
	base[1]= VV[8];
	base[3]= (V47);
	base[4]= VV[9];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V47);
	base[5]= VV[10];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	base[0]= (V48);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI211))((V47),(V48)));
	base[0]= (V48);
	base[1]= VV[4];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V50 = vs_base[0];
	VMR5(V50)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (STANDARD-SLOT-DEFINITION T))	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V51;
	object V52;
	register object V53;
	object V54;
	object V55;
	check_arg(5);
	V51=(base[0]);
	V52=(base[1]);
	V53=(base[2]);
	V54=(base[3]);
	V55=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V57;
	object V58;
	V57= CMPcar((V51));
	V58= CMPcdr((V51));
	{register object V59;
	if(type_of(V53)==t_structure){
	goto T94;}
	goto T92;
	goto T94;
T94:;
	if(!(((V53)->str.str_def)==(VV[11]))){
	goto T92;}
	V59= STREF(object,(V53),4);
	goto T90;
	goto T92;
T92:;{object V61;
	V61= (VV[13]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V53);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V62= vs_base[0];
	if(!((V61)==(CMPcar(V62)))){
	goto T97;}}
	V59= CMPcar(((V53))->cc.cc_turbo[12]);
	goto T90;
	goto T97;
T97:;
	V59= Cnil;
	goto T90;
T90:;
	{object V64;
	{register object V66;
	V66= ((V57))->v.v_self[2];
	if(!(type_of(V66)==t_fixnum)){
	goto T113;}
	V66= ((V59))->v.v_self[fix((V66))];
	goto T111;
	goto T113;
T113:;
	V66= VV[14];
	goto T111;
T111:;
	if(!(((V66))==(VV[14]))){
	goto T116;}
	base[5]= (V53);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	V65= vs_base[0];
	goto T108;
	goto T116;
T116:;
	V65= (V66);}
	goto T108;
T108:;
	if(!((V65)==(VV[15]))){
	goto T106;}
	{register object V68;
	V68= ((V57))->v.v_self[1];
	if(!(type_of(V68)==t_fixnum)){
	goto T123;}
	V68= ((V59))->v.v_self[fix((V68))];
	goto T121;
	goto T123;
T123:;
	V68= VV[14];
	goto T121;
T121:;
	if(!(((V68))==(VV[14]))){
	goto T126;}
	base[5]= (V53);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V64= vs_base[0];
	goto T104;
	goto T126;
T126:;
	V64= (V68);
	goto T104;}
	goto T106;
T106:;
	{register object V70;
	V70= ((V57))->v.v_self[2];
	if(!(type_of(V70)==t_fixnum)){
	goto T133;}
	V70= ((V59))->v.v_self[fix((V70))];
	goto T131;
	goto T133;
T133:;
	V70= VV[14];
	goto T131;
T131:;
	if(!(((V70))==(VV[14]))){
	goto T136;}
	base[5]= (V53);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	V64= vs_base[0];
	goto T104;
	goto T136;
T136:;
	V64= (V70);}
	goto T104;
T104:;
	{object V72;
	V72= ((V57))->v.v_self[2];
	if(!(type_of(V72)==t_fixnum)){
	goto T141;}
	base[5]= ((V59))->v.v_self[fix((V72))]= ((V64));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T141;
T141:;
	base[5]= (V64);
	base[6]= (V53);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk219)(Lclptr219);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STRUCTURE-SLOT-DEFINITION T))	*/

static object LI7(V79,V80,V81,V82,V83)

object V79;object V80;object V81;object V82;object V83;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V85;
	object V86;
	V85= (*(LnkLI220))(VV[16],V83);
	if(!(type_of((V85))==t_cons)){
	goto T150;}
	V86= CMPcar((V85));
	goto T148;
	goto T150;
T150:;
	V86= VV[17];
	goto T148;
T148:;
	if(((V86))==(VV[17])){
	goto T154;}
	base[2]= VV[18];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	{object V87 = vs_base[0];
	VMR7(V87)}
	goto T154;
T154:;
	{object V88 = Cnil;
	VMR7(V88)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INFORM-TYPE-SYSTEM-ABOUT-CLASS (STRUCTURE-CLASS T))	*/

static object LI8(V93,V94,V95,V96)

object V93;object V94;object V95;object V96;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V98 = Cnil;
	VMR8(V98)}
	return Cnil;
}
/*	function definition for (FAST-METHOD METHOD-FUNCTION (STANDARD-METHOD))	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V99;
	object V100;
	register object V101;
	check_arg(3);
	V99=(base[0]);
	V100=(base[1]);
	V101=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V103;
	object V104;
	V103= CMPcar((V99));
	V104= CMPcdr((V99));
	{object V105;
	if(type_of(V101)==t_structure){
	goto T171;}
	goto T169;
	goto T171;
T171:;
	if(!(((V101)->str.str_def)==(VV[19]))){
	goto T169;}
	V105= STREF(object,(V101),4);
	goto T167;
	goto T169;
T169:;{object V107;
	V107= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V108= vs_base[0];
	if(!((V107)==(CMPcar(V108)))){
	goto T174;}}
	V105= CMPcar(((V101))->cc.cc_turbo[12]);
	goto T167;
	goto T174;
T174:;
	V105= Cnil;
	goto T167;
T167:;
	{object V109;
	{register object V110;
	V110= ((V103))->v.v_self[1];
	if(!(type_of(V110)==t_fixnum)){
	goto T185;}
	V110= ((V105))->v.v_self[fix((V110))];
	goto T183;
	goto T185;
T185:;
	V110= VV[14];
	goto T183;
T183:;
	if(!(((V110))==(VV[14]))){
	goto T188;}
	base[3]= (V101);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk221)(Lclptr221);
	vs_top=sup;
	V109= vs_base[0];
	goto T180;
	goto T188;
T188:;
	V109= (V110);}
	goto T180;
T180:;
	if(((V109))==Cnil){
	goto T192;}
	base[3]= (V109);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T192;
T192:;
	{object V112;
	{register object V113;
	V113= ((V103))->v.v_self[2];
	if(!(type_of(V113)==t_fixnum)){
	goto T199;}
	V113= ((V105))->v.v_self[fix((V113))];
	goto T197;
	goto T199;
T199:;
	V113= VV[14];
	goto T197;
T197:;
	if(!(((V113))==(VV[14]))){
	goto T202;}
	base[3]= (V101);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	V112= vs_base[0];
	goto T194;
	goto T202;
T202:;
	V112= (V113);}
	goto T194;
T194:;
	if(((V112))!=Cnil){
	goto T205;}
	base[3]= VV[20];
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;
	goto T205;
T205:;
	{object V115;
	V115= (*(LnkLI223))((V112));
	{object V116;
	V116= ((V103))->v.v_self[1];
	if(!(type_of(V116)==t_fixnum)){
	goto T213;}
	base[3]= ((V105))->v.v_self[fix((V116))]= ((V115));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T213;
T213:;
	base[3]= (V115);
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk224)(Lclptr224);
	return;}}}}}}
	}
}
/*	local entry for function (FAST-METHOD ACCESSOR-METHOD-CLASS (STANDARD-ACCESSOR-METHOD))	*/

static object LI10(V121,V122,V123)

object V121;object V122;register object V123;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V125;
	object V126;
	V125= CMPcar((V121));
	V126= CMPcdr((V121));
	{object V127;
	if(type_of(V123)==t_structure){
	goto T227;}
	goto T225;
	goto T227;
T227:;
	if(!(((V123)->str.str_def)==(VV[21]))){
	goto T225;}
	V127= STREF(object,(V123),4);
	goto T223;
	goto T225;
T225:;{object V129;
	V129= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V123);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V130= vs_base[0];
	if(!((V129)==(CMPcar(V130)))){
	goto T230;}}
	V127= CMPcar(((V123))->cc.cc_turbo[12]);
	goto T223;
	goto T230;
T230:;
	V127= Cnil;
	goto T223;
T223:;
	{register object V132;
	V132= ((V125))->v.v_self[1];
	if(!(type_of(V132)==t_fixnum)){
	goto T241;}
	V132= ((V127))->v.v_self[fix((V132))];
	goto T239;
	goto T241;
T241:;
	V132= VV[14];
	goto T239;
T239:;
	if(!(((V132))==(VV[14]))){
	goto T244;}
	base[0]= (V123);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk225)(Lclptr225);
	vs_top=sup;
	V131= vs_base[0];
	goto T236;
	goto T244;
T244:;
	V131= (V132);}
	goto T236;
T236:;
	{object V134 = CMPcar(V131);
	VMR10(V134)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ACCESSOR-METHOD-CLASS (STANDARD-WRITER-METHOD))	*/

static object LI11(V138,V139,V140)

object V138;object V139;register object V140;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V142;
	object V143;
	V142= CMPcar((V138));
	V143= CMPcdr((V138));
	{object V144;
	if(type_of(V140)==t_structure){
	goto T257;}
	goto T255;
	goto T257;
T257:;
	if(!(((V140)->str.str_def)==(VV[22]))){
	goto T255;}
	V144= STREF(object,(V140),4);
	goto T253;
	goto T255;
T255:;{object V146;
	V146= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V140);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V147= vs_base[0];
	if(!((V146)==(CMPcar(V147)))){
	goto T260;}}
	V144= CMPcar(((V140))->cc.cc_turbo[12]);
	goto T253;
	goto T260;
T260:;
	V144= Cnil;
	goto T253;
T253:;
	{register object V149;
	V149= ((V142))->v.v_self[1];
	if(!(type_of(V149)==t_fixnum)){
	goto T271;}
	V149= ((V144))->v.v_self[fix((V149))];
	goto T269;
	goto T271;
T271:;
	V149= VV[14];
	goto T269;
T269:;
	if(!(((V149))==(VV[14]))){
	goto T274;}
	base[0]= (V140);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk225)(Lclptr225);
	vs_top=sup;
	V148= vs_base[0];
	goto T266;
	goto T274;
T274:;
	V148= (V149);}
	goto T266;
T266:;
	{object V151 = CMPcadr(V148);
	VMR11(V151)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (STANDARD-METHOD T))	*/

static object LI12(V156,V157,V158,V159)

object V156;register object V157;register object V158;register object V159;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V161;
	object V162;
	V161= CMPcar((V156));
	V162= CMPcdr((V156));
	{object V163;
	if(type_of(V158)==t_structure){
	goto T287;}
	goto T285;
	goto T287;
T287:;
	if(!(((V158)->str.str_def)==(VV[23]))){
	goto T285;}
	V163= STREF(object,(V158),4);
	goto T283;
	goto T285;
T285:;{object V165;
	V165= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V158);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V166= vs_base[0];
	if(!((V165)==(CMPcar(V166)))){
	goto T290;}}
	V163= CMPcar(((V158))->cc.cc_turbo[12]);
	goto T283;
	goto T290;
T290:;
	V163= Cnil;
	goto T283;
T283:;
	base[0]= (V159);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V167;
	V167= ((V161))->v.v_self[1];
	if(!(type_of(V167)==t_fixnum)){
	goto T305;}
	if(!((((((V163))->v.v_self[fix((V167))])==(VV[14])?Ct:Cnil))==Cnil)){
	goto T301;}
	goto T302;
	goto T305;
T305:;
	base[0]= (V158);
	base[1]= VV[24];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T301;}}
	goto T302;
T302:;
	{object V169;
	object V170;
	base[0]= (V158);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	V169= vs_base[0];
	base[0]= (*(LnkLI149))((V158));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V171= vs_base[0];
	V170= (VFUN_NARGS=1,(*(LnkLI213))(V171));
	base[0]= (V159);
	base[1]= VV[25];
	base[2]= (V170);
	if((V169)==Cnil){
	base[3]= Cnil;
	goto T317;}
	base[4]= (V169);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T317;
T317:;
	base[5]= (V158);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (*(LnkLI230))((V158));
	vs_top=(vs_base=base+0)+6;
	Lformat();
	vs_top=sup;
	goto T299;}
	goto T301;
T301:;
	if(((V157))==Cnil){
	goto T323;}
	base[0]= (V157);
	base[1]= VV[26];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T327;}
	(void)((
	V172 = STREF(object,(V157),0),
	(type_of(V172) == t_sfun ?(*((V172)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V172)==t_vfun) ?
	(*((V172)->sfn.sfn_self)):
	(fcall.fun=(V172),fcalln))(STREF(object,(V157),4),STREF(object,(V157),8),(V158),(V159))));
	goto T299;
	goto T327;
T327:;
	if(!(type_of((V157))==t_fixnum)){
	goto T332;}
	{object V174;
	if(type_of(V158)==t_structure){
	goto T338;}
	goto T336;
	goto T338;
T338:;
	if(!(((V158)->str.str_def)==(VV[27]))){
	goto T336;}
	V174= STREF(object,(V158),4);
	goto T334;
	goto T336;
T336:;{object V176;
	V176= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V158);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V177= vs_base[0];
	if(!((V176)==(CMPcar(V177)))){
	goto T341;}}
	V174= CMPcar(((V158))->cc.cc_turbo[12]);
	goto T334;
	goto T341;
T341:;
	V174= Cnil;
	goto T334;
T334:;
	if(((V174))==Cnil){
	goto T299;}
	(void)(((V174))->v.v_self[fix((V157))]= (V158));
	goto T299;}
	goto T332;
T332:;
	{register object V178;
	V178= (V157);
	base[0]= (V178);
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T349;}
	{object V179;
	object V180;
	register object V181;
	V179= STREF(object,(V157),0);
	V180= list(2,(V158),(V159));
	V181= STREF(object,(V157),4);
	if(((V181))==Cnil){
	goto T357;}
	if((CMPcdr((V181)))!=Cnil){
	goto T357;}
	(void)((
	(type_of((V179)) == t_sfun ?(*(((V179))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V179))==t_vfun) ?
	(*(((V179))->sfn.sfn_self)):
	(fcall.fun=((V179)),fcalln))((V180),CMPcar((V181)))));
	goto T299;
	goto T357;
T357:;
	base[0]= (V179);
	base[1]= (V180);
	{object V182;
	V182= (V181);
	 vs_top=base+2;
	 while(V182!=Cnil)
	 {vs_push((V182)->c.c_car);V182=(V182)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T299;}
	goto T349;
T349:;
	base[0]= (V178);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T365;}
	(void)((
	(type_of((V157)) == t_sfun ?(*(((V157))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V157))==t_vfun) ?
	(*(((V157))->sfn.sfn_self)):
	(fcall.fun=((V157)),fcalln))((V158),(V159))));
	goto T299;
	goto T365;
T365:;
	base[1]= VV[29];
	base[2]= (V178);
	base[3]= VV[30];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk232)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T299;}
	goto T323;
T323:;
	base[0]= VV[31];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T299;
T299:;
	base[0]= (V159);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI211))((V158),(V159)));
	base[0]= (V159);
	base[1]= VV[4];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V183 = vs_base[0];
	VMR12(V183)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (STANDARD-ACCESSOR-METHOD T))	*/

static object LI13(V188,V189,V190,V191)

object V188;register object V189;register object V190;register object V191;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V193;
	object V194;
	V193= CMPcar((V188));
	V194= CMPcdr((V188));
	{object V195;
	if(type_of(V190)==t_structure){
	goto T389;}
	goto T387;
	goto T389;
T389:;
	if(!(((V190)->str.str_def)==(VV[32]))){
	goto T387;}
	V195= STREF(object,(V190),4);
	goto T385;
	goto T387;
T387:;{object V197;
	V197= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V190);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V198= vs_base[0];
	if(!((V197)==(CMPcar(V198)))){
	goto T392;}}
	V195= CMPcar(((V190))->cc.cc_turbo[12]);
	goto T385;
	goto T392;
T392:;
	V195= Cnil;
	goto T385;
T385:;
	base[0]= (V191);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V199;
	V199= ((V193))->v.v_self[1];
	if(!(type_of(V199)==t_fixnum)){
	goto T407;}
	if(!((((((V195))->v.v_self[fix((V199))])==(VV[14])?Ct:Cnil))==Cnil)){
	goto T403;}
	goto T404;
	goto T407;
T407:;
	base[0]= (V190);
	base[1]= VV[24];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T403;}}
	goto T404;
T404:;
	{object V201;
	object V202;
	base[0]= (V190);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	V201= vs_base[0];
	base[0]= (*(LnkLI149))((V190));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V203= vs_base[0];
	V202= (VFUN_NARGS=1,(*(LnkLI213))(V203));
	base[0]= (V191);
	base[1]= VV[33];
	base[2]= (V202);
	if((V201)==Cnil){
	base[3]= Cnil;
	goto T419;}
	base[4]= (V201);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T419;
T419:;
	base[5]= (V190);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (*(LnkLI230))((V190));
	vs_top=(vs_base=base+0)+6;
	Lformat();
	vs_top=sup;
	goto T401;}
	goto T403;
T403:;
	if(((V189))==Cnil){
	goto T425;}
	base[0]= (V189);
	base[1]= VV[26];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T429;}
	(void)((
	V204 = STREF(object,(V189),0),
	(type_of(V204) == t_sfun ?(*((V204)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V204)==t_vfun) ?
	(*((V204)->sfn.sfn_self)):
	(fcall.fun=(V204),fcalln))(STREF(object,(V189),4),STREF(object,(V189),8),(V190),(V191))));
	goto T401;
	goto T429;
T429:;
	if(!(type_of((V189))==t_fixnum)){
	goto T434;}
	{object V206;
	if(type_of(V190)==t_structure){
	goto T440;}
	goto T438;
	goto T440;
T440:;
	if(!(((V190)->str.str_def)==(VV[34]))){
	goto T438;}
	V206= STREF(object,(V190),4);
	goto T436;
	goto T438;
T438:;{object V208;
	V208= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V190);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V209= vs_base[0];
	if(!((V208)==(CMPcar(V209)))){
	goto T443;}}
	V206= CMPcar(((V190))->cc.cc_turbo[12]);
	goto T436;
	goto T443;
T443:;
	V206= Cnil;
	goto T436;
T436:;
	if(((V206))==Cnil){
	goto T401;}
	(void)(((V206))->v.v_self[fix((V189))]= (V190));
	goto T401;}
	goto T434;
T434:;
	{register object V210;
	V210= (V189);
	base[0]= (V210);
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T451;}
	{object V211;
	object V212;
	register object V213;
	V211= STREF(object,(V189),0);
	V212= list(2,(V190),(V191));
	V213= STREF(object,(V189),4);
	if(((V213))==Cnil){
	goto T459;}
	if((CMPcdr((V213)))!=Cnil){
	goto T459;}
	(void)((
	(type_of((V211)) == t_sfun ?(*(((V211))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V211))==t_vfun) ?
	(*(((V211))->sfn.sfn_self)):
	(fcall.fun=((V211)),fcalln))((V212),CMPcar((V213)))));
	goto T401;
	goto T459;
T459:;
	base[0]= (V211);
	base[1]= (V212);
	{object V214;
	V214= (V213);
	 vs_top=base+2;
	 while(V214!=Cnil)
	 {vs_push((V214)->c.c_car);V214=(V214)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T401;}
	goto T451;
T451:;
	base[0]= (V210);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T467;}
	(void)((
	(type_of((V189)) == t_sfun ?(*(((V189))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V189))==t_vfun) ?
	(*(((V189))->sfn.sfn_self)):
	(fcall.fun=((V189)),fcalln))((V190),(V191))));
	goto T401;
	goto T467;
T467:;
	base[1]= VV[29];
	base[2]= (V210);
	base[3]= VV[35];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk232)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T401;}
	goto T425;
T425:;
	base[0]= VV[31];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T401;
T401:;
	base[0]= (V191);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI211))((V190),(V191)));
	base[0]= (V191);
	base[1]= VV[4];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V215 = vs_base[0];
	VMR13(V215)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE (STANDARD-METHOD))	*/

static object LI14(V220,V221,V222,V223)

object V220;object V221;object V222;object V223;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= VV[36];
	base[1]= (V222);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V226 = vs_base[0];
	VMR14(V226)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-DOCUMENTATION-P (STANDARD-METHOD T))	*/

static object LI15(V231,V232,V233,V234)

object V231;object V232;object V233;object V234;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(((V234))==Cnil){
	goto T489;}
	if(!(type_of((V234))==t_string)){
	goto T490;}
	goto T489;
T489:;
	{object V236 = Ct;
	VMR15(V236)}
	goto T490;
T490:;
	{object V237 = VV[37];
	VMR15(V237)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-LAMBDA-LIST-P (STANDARD-METHOD T))	*/

static object LI16(V242,V243,V244,V245)

object V242;object V243;object V244;object V245;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V247 = Ct;
	VMR16(V247)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-METHOD-FUNCTION-P (STANDARD-METHOD T))	*/

static object LI17(V252,V253,V254,V255)

object V252;object V253;object V254;object V255;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]= (V255);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T501;}
	{object V257 = Ct;
	VMR17(V257)}
	goto T501;
T501:;
	{object V258 = VV[38];
	VMR17(V258)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD LEGAL-QUALIFIERS-P (STANDARD-METHOD T))	*/

static void L18()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM18; VC18
	vs_check;
	{VOL object V259;
	VOL object V260;
	VOL object V261;
	VOL object V262;
	check_arg(4);
	V259=(base[0]);
	V260=(base[1]);
	V261=(base[2]);
	V262=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]=alloc_frame_id();
	frs_push(FRS_CATCH,base[4]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{register object V264;
	register object V265;
	V264= Cnil;
	V265= (V262);
	goto T509;
T509:;
	if(((V265))!=Cnil){
	goto T511;}
	goto T507;
	goto T511;
T511:;
	if(!(type_of((V265))==t_cons)){
	goto T515;}
	{register object V266;
	V266= CMPcar((V265));
	V265= CMPcdr((V265));
	V264= (V266);}
	{register object V267;
	base[5]= (V261);
	base[6]= (V264);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V267= vs_base[0];
	if(((V267))==(Ct)){
	goto T510;}
	base[5]= Cnil;
	base[6]= VV[39];
	base[7]= (V264);
	base[8]= (V267);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	frs_pop();
	return;}
	goto T515;
T515:;
	vs_base=vs_top;
	L19(base);
	vs_top=sup;
	goto T510;
T510:;
	goto T509;}
	goto T507;
T507:;
	frs_pop();
	base[5]= Ct;
	vs_top=(vs_base=base+5)+1;
	return;
	}
	}
}
/*	local entry for function (FAST-METHOD LEGAL-QUALIFIER-P (STANDARD-METHOD T))	*/

static object LI20(V272,V273,V274,V275)

object V272;object V273;object V274;object V275;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(((V275))==Cnil){
	goto T536;}
	if(!(type_of((V275))!=t_cons)){
	goto T536;}
	{object V277 = Ct;
	VMR19(V277)}
	goto T536;
T536:;
	{object V278 = VV[41];
	VMR19(V278)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-SLOT-NAME-P (STANDARD-METHOD T))	*/

static object LI21(V283,V284,V285,V286)

object V283;object V284;object V285;register object V286;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	if(type_of((V286))==t_symbol){
	goto T544;}
	{object V288 = VV[42];
	VMR20(V288)}
	goto T544;
T544:;
	if(!((type_of((V286))==t_symbol&&((V286))->s.s_hpack==keyword_package))){
	goto T547;}
	{object V289 = VV[43];
	VMR20(V289)}
	goto T547;
T547:;
	{register object x= (V286),V290= VV[44];
	while(V290!=Cnil)
	if(x==(V290->c.c_car)){
	goto T551;
	}else V290=V290->c.c_cdr;
	goto T550;}
	goto T551;
T551:;
	{object V291 = VV[45];
	VMR20(V291)}
	goto T550;
T550:;
	base[0]= (V286);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T553;}
	{object V292 = VV[46];
	VMR20(V292)}
	goto T553;
T553:;
	{object V293 = Ct;
	VMR20(V293)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD LEGAL-SPECIALIZERS-P (STANDARD-METHOD T))	*/

static void L22()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM21; VC21
	vs_check;
	{VOL object V294;
	VOL object V295;
	VOL object V296;
	VOL object V297;
	check_arg(4);
	V294=(base[0]);
	V295=(base[1]);
	V296=(base[2]);
	V297=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]=alloc_frame_id();
	frs_push(FRS_CATCH,base[4]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{register object V299;
	register object V300;
	V299= Cnil;
	V300= (V297);
	goto T561;
T561:;
	if(((V300))!=Cnil){
	goto T563;}
	goto T559;
	goto T563;
T563:;
	if(!(type_of((V300))==t_cons)){
	goto T567;}
	{register object V301;
	V301= CMPcar((V300));
	V300= CMPcdr((V300));
	V299= (V301);}
	{register object V302;
	base[5]= (V296);
	base[6]= (V299);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk235)(Lclptr235);
	vs_top=sup;
	V302= vs_base[0];
	if(((V302))==(Ct)){
	goto T562;}
	base[5]= Cnil;
	base[6]= VV[47];
	base[7]= (V299);
	base[8]= (V302);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	frs_pop();
	return;}
	goto T567;
T567:;
	vs_base=vs_top;
	L23(base);
	vs_top=sup;
	goto T562;
T562:;
	goto T561;}
	goto T559;
T559:;
	frs_pop();
	base[5]= Ct;
	vs_top=(vs_base=base+5)+1;
	return;
	}
	}
}
/*	local entry for function (FAST-METHOD LEGAL-SPECIALIZER-P (STANDARD-METHOD T))	*/

static object LI24(V307,V308,V309,V310)

object V307;object V308;object V309;object V310;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	if(((VV[49]->s.s_dbind))==Cnil){
	goto T591;}
	base[0]= (V310);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T588;}
	goto T589;
	goto T591;
T591:;{object V312;
	base[0]= (V310);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V312= vs_base[0];
	if(V312==Cnil)goto T594;
	if((V312)==Cnil){
	goto T588;}
	goto T589;
	goto T594;
T594:;}
	base[0]= (V310);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T588;}
	goto T589;
T589:;
	{object V313 = Ct;
	VMR22(V313)}
	goto T588;
T588:;
	{object V314 = VV[50];
	VMR22(V314)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-METHOD T))	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V315;
	object V316;
	object V317;
	object V318;
	check_arg(5);
	V315=(base[0]);
	V316=(base[1]);
	V317=(base[3]);
	V318=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V319;
	object V320;
	object V321;
	object V322;
	object V323;
	object V324;
	object V325;
	V319= (V318);
	V320= (*(LnkLI239))(VV[51],(V319));
	V321= (*(LnkLI239))(VV[52],(V319));
	V322= (*(LnkLI239))(VV[53],(V319));
	V323= (*(LnkLI239))(VV[54],(V319));
	V324= (*(LnkLI239))(VV[55],(V319));
	V325= (*(LnkLI239))(VV[56],(V319));
	{object V326;
	object V327;
	object V328;
	object V329;
	object V330;
	base[11]= base[2];
	base[12]= (V320);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk240)(Lclptr240);
	vs_top=sup;
	V326= vs_base[0];
	base[11]= base[2];
	base[12]= (V321);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk241)(Lclptr241);
	vs_top=sup;
	V327= vs_base[0];
	base[11]= base[2];
	base[12]= (V322);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V328= vs_base[0];
	base[11]= base[2];
	if((V323)!=Cnil){
	base[12]= (V323);
	goto T619;}
	base[12]= (V324);
	goto T619;
T619:;
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V329= vs_base[0];
	base[11]= base[2];
	base[12]= (V325);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk244)(Lclptr244);
	vs_top=sup;
	V330= vs_base[0];
	if(((V326))==(Ct)){
	goto T623;}
	base[11]= VV[51];
	base[12]= (V320);
	base[13]= (V326);
	vs_top=(vs_base=base+11)+3;
	L26(base);
	vs_top=sup;
	goto T623;
T623:;
	if(((V327))==(Ct)){
	goto T629;}
	base[11]= VV[52];
	base[12]= (V321);
	base[13]= (V327);
	vs_top=(vs_base=base+11)+3;
	L26(base);
	vs_top=sup;
	goto T629;
T629:;
	if(((V328))==(Ct)){
	goto T635;}
	base[11]= VV[53];
	base[12]= (V322);
	base[13]= (V328);
	vs_top=(vs_base=base+11)+3;
	L26(base);
	vs_top=sup;
	goto T635;
T635:;
	if(((V329))==(Ct)){
	goto T641;}
	base[11]= VV[54];
	base[12]= (V323);
	base[13]= (V329);
	vs_top=(vs_base=base+11)+3;
	L26(base);
	vs_top=sup;
	goto T641;
T641:;
	if(((V330))==(Ct)){
	goto T648;}
	base[11]= VV[56];
	base[12]= (V325);
	base[13]= (V330);
	vs_top=(vs_base=base+11)+3;
	L26(base);
	return;
	goto T648;
T648:;
	base[11]= Cnil;
	vs_top=(vs_base=base+11)+1;
	return;}}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-ACCESSOR-METHOD T))	*/

static object LI27(V336,V337,V338,V339,V340)

object V336;object V337;object V338;object V339;object V340;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V342;
	object V343;
	V342= (*(LnkLI239))(VV[58],V340);
	V343= (*(LnkLI239))(VV[59],V340);
	if(((V343))!=Cnil){
	goto T659;}
	{object V344;
	base[2]= (V338);
	base[3]= (V342);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V344= vs_base[0];
	if(((V344))==(Ct)){
	goto T665;}
	base[2]= VV[60];
	base[3]= (V344);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	{object V345 = vs_base[0];
	VMR24(V345)}
	goto T665;
T665:;
	{object V346 = Cnil;
	VMR24(V346)}}
	goto T659;
T659:;
	{object V347 = Cnil;
	VMR24(V347)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STANDARD-METHOD T))	*/

static object LI28(V353,V354,V355,V356,V357)

object V353;object V354;object V355;object V356;object V357;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V358;
	object V360;
	object V361;
	object V362;
	V358= (V357);
	V360= (*(LnkLI239))(VV[51],(V358));
	V361= (*(LnkLI239))(VV[61],(V358));
	V362= (*(LnkLI239))(VV[62],(V358));
	(void)((VFUN_NARGS=3,(*(LnkLI246))(V358,Cnil,(V355))));
	{object V365 = (*(LnkLI247))((V360),V355,VV[63]);
	VMR25(V365)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (STANDARD-ACCESSOR-METHOD T))	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V366;
	object V367;
	register object V368;
	object V369;
	object V370;
	check_arg(5);
	V366=(base[0]);
	V367=(base[1]);
	V368=(base[2]);
	V369=(base[3]);
	V370=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V372;
	object V373;
	V372= CMPcar((V366));
	V373= CMPcdr((V366));
	{register object V374;
	if(type_of(V368)==t_structure){
	goto T687;}
	goto T685;
	goto T687;
T687:;
	if(!(((V368)->str.str_def)==(VV[64]))){
	goto T685;}
	V374= STREF(object,(V368),4);
	goto T683;
	goto T685;
T685:;{object V376;
	V376= (VV[13]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V368);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V377= vs_base[0];
	if(!((V376)==(CMPcar(V377)))){
	goto T690;}}
	V374= CMPcar(((V368))->cc.cc_turbo[12]);
	goto T683;
	goto T690;
T690:;
	V374= Cnil;
	goto T683;
T683:;
	{register object V379;
	V379= ((V372))->v.v_self[1];
	if(!(type_of(V379)==t_fixnum)){
	goto T704;}
	V379= ((V374))->v.v_self[fix((V379))];
	goto T702;
	goto T704;
T704:;
	V379= VV[14];
	goto T702;
T702:;
	if(!(((V379))==(VV[14]))){
	goto T707;}
	base[5]= (V368);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk248)(Lclptr248);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T697;}
	goto T699;
	goto T707;
T707:;
	if(((V379))!=Cnil){
	goto T697;}}
	goto T699;
T699:;
	{object V381;
	base[5]= (V368);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V381= vs_base[0];
	base[5]= (V381);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk250)(Lclptr250);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T697;}
	{object V382;
	{register object V383;
	V383= ((V372))->v.v_self[2];
	if(!(type_of(V383)==t_fixnum)){
	goto T721;}
	V383= ((V374))->v.v_self[fix((V383))];
	goto T719;
	goto T721;
T721:;
	V383= VV[14];
	goto T719;
T719:;
	if(!(((V383))==(VV[14]))){
	goto T724;}
	base[6]= (V368);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	base[5]= vs_base[0];
	goto T716;
	goto T724;
T724:;
	base[5]= (V383);}
	goto T716;
T716:;
	base[7]= (V381);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk252)(Lclptr252);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= VV[65];
	base[8]= (VV[253]->s.s_gfdef);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk254)();
	vs_top=sup;
	V382= vs_base[0];
	{object V385;
	V385= ((V372))->v.v_self[1];
	if(!(type_of(V385)==t_fixnum)){
	goto T733;}
	(void)(((V374))->v.v_self[fix((V385))]= ((V382)));
	goto T697;
	goto T733;
T733:;
	base[5]= (V382);
	base[6]= (V368);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;}}}
	goto T697;
T697:;
	{register object V387;
	V387= ((V372))->v.v_self[1];
	if(!(type_of(V387)==t_fixnum)){
	goto T747;}
	V387= ((V374))->v.v_self[fix((V387))];
	goto T745;
	goto T747;
T747:;
	V387= VV[14];
	goto T745;
T745:;
	if(!(((V387))==(VV[14]))){
	goto T750;}
	base[5]= (V368);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk248)(Lclptr248);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T741;}
	goto T742;
	goto T750;
T750:;
	if(((V387))==Cnil){
	goto T741;}}
	goto T742;
T742:;
	{register object V390;
	V390= ((V372))->v.v_self[2];
	if(!(type_of(V390)==t_fixnum)){
	goto T758;}
	V390= ((V374))->v.v_self[fix((V390))];
	goto T756;
	goto T758;
T758:;
	V390= VV[14];
	goto T756;
T756:;
	if(!(((V390))==(VV[14]))){
	goto T761;}
	base[5]= (V368);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V389= vs_base[0];
	goto T753;
	goto T761;
T761:;
	V389= (V390);}
	goto T753;
T753:;
	if(!((V389)==Cnil)){
	goto T738;}
	goto T739;
	goto T741;
T741:;
	goto T738;
	goto T739;
T739:;
	{object V392;
	{register object V393;
	V393= ((V372))->v.v_self[1];
	if(!(type_of(V393)==t_fixnum)){
	goto T770;}
	V393= ((V374))->v.v_self[fix((V393))];
	goto T768;
	goto T770;
T770:;
	V393= VV[14];
	goto T768;
T768:;
	if(!(((V393))==(VV[14]))){
	goto T773;}
	base[6]= (V368);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk248)(Lclptr248);
	vs_top=sup;
	base[5]= vs_base[0];
	goto T765;
	goto T773;
T773:;
	base[5]= (V393);}
	goto T765;
T765:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V392= vs_base[0];
	{object V395;
	V395= ((V372))->v.v_self[2];
	if(!(type_of(V395)==t_fixnum)){
	goto T778;}
	base[5]= ((V374))->v.v_self[fix((V395))]= ((V392));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T778;
T778:;
	base[5]= (V392);
	base[6]= (V368);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk256)(Lclptr256);
	return;}}
	goto T738;
T738:;
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;}}
	}
}
/*	local entry for function (FAST-METHOD METHOD-QUALIFIERS (STANDARD-METHOD))	*/

static object LI30(V400,V401,V402)

object V400;object V401;object V402;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V404 = (*(LnkLI257))((V402),VV[63]);
	VMR27(V404)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (GENERIC-FUNCTION T))	*/

static object LI31(V409,V410,V411,V412)

object V409;object V410;register object V411;object V412;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V414;
	object V415;
	V414= CMPcar((V409));
	V415= CMPcdr((V409));
	{object V416;
	if(type_of(V411)==t_structure){
	goto T795;}
	goto T793;
	goto T795;
T795:;
	if(!(((V411)->str.str_def)==(VV[66]))){
	goto T793;}
	V416= STREF(object,(V411),4);
	goto T791;
	goto T793;
T793:;{object V418;
	V418= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V411);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V419= vs_base[0];
	if(!((V418)==(CMPcar(V419)))){
	goto T798;}}
	V416= CMPcar(((V411))->cc.cc_turbo[12]);
	goto T791;
	goto T798;
T798:;
	V416= Cnil;
	goto T791;
T791:;
	V420 = (V411);
	V421 = (V412);
	{object V423;
	V423= ((V414))->v.v_self[1];
	if(!(type_of(V423)==t_fixnum)){
	goto T810;}
	if(!((((((V416))->v.v_self[fix((V423))])==(VV[14])?Ct:Cnil))==Cnil)){
	goto T806;}
	goto T807;
	goto T810;
T810:;
	base[0]= (V411);
	base[1]= VV[67];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T806;}}
	goto T807;
T807:;
	base[0]= (V411);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V425= vs_base[0];
	V426 = CMPmake_fixnum((long)length(V425));
	V422= make_cons(V426,Cnil);
	goto T804;
	goto T806;
T806:;
	V422= VV[68];
	goto T804;
T804:;
	{object V427 = (VFUN_NARGS=3,(*(LnkLI212))(V420,V421,V422));
	VMR28(V427)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-GENERIC-FUNCTION T))	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V428;
	object V429;
	object V430;
	object V431;
	check_arg(5);
	V428=(base[0]);
	V429=(base[1]);
	V430=(base[3]);
	V431=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V432;
	object V433;
	object V435;
	object V436;
	object V438;
	object V439;
	object V440;
	object V441;
	object V442;
	register object V444;
	object V445;
	object V447;
	V432= (V431);
	V433= (*(LnkLI220))(VV[69],(V432));
	if(!(type_of((V433))==t_cons)){
	goto T822;}
	V435= CMPcar((V433));
	goto T820;
	goto T822;
T822:;
	V435= Cnil;
	goto T820;
T820:;
	V436= (*(LnkLI220))(VV[52],(V432));
	if(!(type_of((V436))==t_cons)){
	goto T827;}
	V438= CMPcar((V436));
	goto T825;
	goto T827;
T827:;
	V438= Cnil;
	goto T825;
T825:;
	V439= (*(LnkLI239))(VV[70],(V432));
	V440= (*(LnkLI239))(VV[71],(V432));
	V441= (*(LnkLI239))(VV[56],(V432));
	V442= (*(LnkLI220))(VV[72],(V432));
	if(!(type_of((V442))==t_cons)){
	goto T835;}
	V444= CMPcar((V442));
	goto T833;
	goto T835;
T835:;
	V444= Cnil;
	goto T833;
T833:;
	V445= (*(LnkLI220))(VV[73],(V432));
	if(!(type_of((V445))==t_cons)){
	goto T840;}
	V447= CMPcar((V445));
	goto T838;
	goto T840;
T840:;
	V447= Cnil;
	goto T838;
T838:;
	{register object V448;
	object V449;
	V448= CMPcar((V428));
	V449= CMPcdr((V428));
	{object V450;
	if(type_of(base[2])==t_structure){
	goto T850;}
	goto T848;
	goto T850;
T850:;
	if(!(((base[2])->str.str_def)==(VV[74]))){
	goto T848;}
	V450= STREF(object,base[2],4);
	goto T846;
	goto T848;
T848:;{object V452;
	V452= (VV[13]->s.s_dbind);
	base[16]= small_fixnum(14);
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V453= vs_base[0];
	if(!((V452)==(CMPcar(V453)))){
	goto T853;}}
	V450= CMPcar((base[2])->cc.cc_turbo[12]);
	goto T846;
	goto T853;
T853:;
	V450= Cnil;
	goto T846;
T846:;
	if((V433)==Cnil){
	goto T859;}
	base[16]= base[2];
	base[17]= (V435);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk259)();
	vs_top=sup;
	goto T859;
T859:;
	if((V442)==Cnil){
	goto T866;}
	if(!(type_of((V444))==t_symbol)){
	goto T868;}
	V444= (VFUN_NARGS=1,(*(LnkLI260))((V444)));
	goto T868;
T868:;
	base[16]= (V444);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T873;}
	base[17]= (V444);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	base[16]= vs_base[0];
	base[17]= (VV[75]->s.s_dbind);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T872;}
	goto T873;
T873:;
	base[16]= VV[72];
	base[17]= (V444);
	base[18]= VV[76];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	vs_top=sup;
	goto T872;
T872:;
	{object V455;
	V455= ((V448))->v.v_self[2];
	if(!(type_of(V455)==t_fixnum)){
	goto T886;}
	(void)(((V450))->v.v_self[fix((V455))]= (V444));
	goto T864;
	goto T886;
T886:;
	base[16]= V444;
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk263)(Lclptr263);
	vs_top=sup;
	goto T864;}
	goto T866;
T866:;
	{object V457;
	{object V458;
	V458= ((V448))->v.v_self[2];
	if(!(type_of(V458)==t_fixnum)){
	goto T893;}
	V457= ((((((V450))->v.v_self[fix((V458))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T890;
	goto T893;
T893:;
	base[16]= base[2];
	base[17]= VV[77];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V457= vs_base[0];}
	goto T890;
T890:;
	if(((V457))==Cnil){
	goto T898;}
	goto T864;
	goto T898;
T898:;
	base[16]= VV[72];
	base[17]= VV[78];
	base[18]= VV[79];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	vs_top=sup;}
	goto T864;
T864:;
	if((V445)==Cnil){
	goto T904;}
	base[16]= (V447);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T907;}
	base[16]= VV[73];
	base[17]= (V447);
	base[18]= VV[80];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	return;
	goto T907;
T907:;
	base[16]= Cnil;
	vs_top=(vs_base=base+16)+1;
	return;
	goto T904;
T904:;
	{object V460;
	{object V461;
	V461= ((V448))->v.v_self[1];
	if(!(type_of(V461)==t_fixnum)){
	goto T916;}
	V460= ((((((V450))->v.v_self[fix((V461))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T913;
	goto T916;
T916:;
	base[16]= base[2];
	base[17]= VV[81];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V460= vs_base[0];}
	goto T913;
T913:;
	if(((V460))==Cnil){
	goto T921;}
	base[16]= (V460);
	vs_top=(vs_base=base+16)+1;
	return;
	goto T921;
T921:;
	base[16]= VV[73];
	base[17]= VV[82];
	base[18]= VV[83];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD REMOVE-NAMED-METHOD (T T))	*/

static object LI34(V468,V469,V470,V471,V472)

object V468;object V469;object V470;object V471;object V472;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V473;
	object V474;
	V473= (V472);
	if(((V473))==Cnil){
	goto T931;}
	{object V475;
	V475= CMPcar((V473));
	V473= CMPcdr((V473));
	V474= (V475);
	goto T929;}
	goto T931;
T931:;
	V474= Cnil;
	goto T929;
T929:;
	{register object V476;
	object V477;
	V476= Cnil;
	V477= Cnil;
	base[1]= (V470);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T937;}
	base[2]= (V470);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V476= vs_base[0];
	base[1]= (V476);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T938;}
	goto T937;
T937:;
	base[1]= VV[85];
	base[2]= (V470);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V478 = vs_base[0];
	VMR30(V478)}
	goto T938;
T938:;
	V479 = (V476);
	V480 = (V474);
	V481= (*(LnkLI267))((V471));
	V477= (VFUN_NARGS=4,(*(LnkLI266))(V479,V480,/* INLINE-ARGS */V481,Cnil));
	if(((V477))!=Cnil){
	goto T949;}
	base[1]= VV[86];
	base[2]= (V476);
	base[3]= (V471);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	{object V482 = vs_base[0];
	VMR30(V482)}
	goto T949;
T949:;
	base[1]= (V476);
	base[2]= (V477);
	{object V483 = simple_symlispcall(VV[268],base+1,2);
	VMR30(V483)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REAL-ADD-NAMED-METHOD	*/

static object LI35(object V487,object V486,object V485,object V484,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V488;
	object V489;
	object V490;
	object V491;
	object V492;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V488= V487;
	V489= V486;
	V490= V485;
	V491= V484;
	narg= narg - 4;
	V493 = list_vector_new(narg,first,ap);
	V492= V493;
	{object V494;
	object V495;
	object V496;
	object V497;
	base[4]= (V488);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk269)();
	vs_top=sup;
	V494= vs_base[0];
	V495= (*(LnkLI267))((V490));
	base[4]= (V488);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk270)();
	vs_top=sup;
	V496= vs_base[0];
	base[4]=VV[271]->s.s_gfdef;
	base[5]= (*(LnkLI149))((V496));
	base[6]= VV[51];
	base[7]= (V489);
	base[8]= VV[53];
	base[9]= (V495);
	base[10]= VV[52];
	base[11]= (V491);
	{object V498;
	V498= (V492);
	 vs_top=base+12;
	 while(V498!=Cnil)
	 {vs_push((V498)->c.c_car);V498=(V498)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V497= vs_base[0];
	base[4]= (V494);
	base[5]= (V497);
	{object V499 = simple_symlispcall(VV[272],base+4,2);
	VMR31(V499)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-SPECIALIZABLE	*/

static object LI36(object V500,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{register object V501;
	register object V502;
	object V503;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V501= V500;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI36key,first,ap);
	if(Vcs[1]==0){
	V502= Cnil;
	V503= Cnil;
	}else{
	V502=(Vcs[1]);
	V503= Ct;}
	{object V504;
	V504= (((((V503))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V504))==Cnil){
	goto T977;}
	goto T974;
	goto T977;
T977:;
	{object V505;
	base[0]= (V501);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	V506= vs_base[0];
	V505= ((V506)==Cnil?Ct:Cnil);
	if(((V505))==Cnil){
	goto T983;}
	goto T974;
	goto T983;
T983:;
	base[0]= VV[87];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T986;}
	base[0]= (V501);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V502= vs_base[0];
	goto T974;
	goto T986;
T986:;
	base[0]= VV[88];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;}}
	goto T974;
T974:;
	{register object V507;
	register object V508;
	base[1]= (V501);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T993;}
	base[0]= Cnil;
	goto T992;
	goto T993;
T993:;
	base[1]= (V501);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T992;
T992:;
	base[1]= VV[89];
	base[2]= VV[69];
	base[3]= (V501);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V507= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	V508= small_fixnum(0);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1002;}
	{object V509 = (base[0]->c.c_car);
	VMR32(V509)}
	goto T1002;
T1002:;
	{register object V510;
	register object V511;
	V510= (V502);
	V511= CMPcar((V510));
	goto T1009;
T1009:;
	if(!(((V510))==Cnil)){
	goto T1010;}
	goto T1005;
	goto T1010;
T1010:;
	{register object x= (V511),V512= VV[90];
	while(V512!=Cnil)
	if(x==(V512->c.c_car)){
	goto T1017;
	}else V512=V512->c.c_cdr;
	goto T1016;}
	goto T1017;
T1017:;
	goto T1005;
	goto T1016;
T1016:;
	V508= number_plus((V508),small_fixnum(1));
	V510= CMPcdr((V510));
	V511= CMPcar((V510));
	goto T1009;}
	goto T1005;
T1005:;
	(void)((*(LnkLI274))((V507),V501));
	base[1]= (V507);
	base[2]= (V501);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk259)();
	vs_top=sup;
	if(((V503))==Cnil){
	goto T1028;}
	base[1]= (V502);
	base[2]= V507;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk275)(Lclptr275);
	vs_top=sup;
	goto T1028;
T1028:;
	if(((base[0]->c.c_car))==Cnil){
	goto T1033;}
	base[1]=(VV[276]->s.s_gfdef);
	base[2]= (V501);
	base[3]= Cnil;
	base[5]= (V508);
	base[6]= VV[91];
	base[7]= Ct;
	vs_top=(vs_base=base+5)+3;
	Lmake_list();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V502);
	V515= 
	make_cclosure_new(LC123,Cnil,base[0],Cdata);
	base[6]= list(2,VV[54],V515);
	(void)simple_lispcall(base+1,5);
	goto T1033;
T1033:;
	{object V516 = (V507);
	VMR32(V516)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-GET-METHOD	*/

static object LI37(object V519,object V518,object V517,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V520;
	register object V521;
	register object V522;
	object V523;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V520= V519;
	V521= V518;
	V522= V517;
	narg = narg - 3;
	if (narg <= 0) goto T1045;
	else {
	V523= first;}
	--narg; goto T1046;
	goto T1045;
T1045:;
	V523= Ct;
	goto T1046;
T1046:;
	{object V524;
	{register object V525;
	register object V526;
	base[2]= (V520);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V525= vs_base[0];
	V526= CMPcar((V525));
	goto T1053;
T1053:;
	if(!(((V525))==Cnil)){
	goto T1054;}
	V524= Cnil;
	goto T1048;
	goto T1054;
T1054:;
	V527 = (V521);
	base[2]= (V526);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V528= vs_base[0];
	if(!(equal(V527,V528))){
	goto T1058;}
	base[2]= (VV[277]->s.s_gfdef);
	base[3]= (V522);
	base[5]= (V526);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk279)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1058;}
	V524= (V526);
	goto T1048;
	goto T1058;
T1058:;
	V525= CMPcdr((V525));
	V526= CMPcar((V525));
	goto T1053;}
	goto T1048;
T1048:;
	if(((V524))==Cnil){
	goto T1075;}
	{object V529 = (V524);
	VMR33(V529)}
	goto T1075;
T1075:;
	if(((V523))!=Cnil){
	goto T1078;}
	{object V530 = Cnil;
	VMR33(V530)}
	goto T1078;
T1078:;
	base[0]= VV[92];
	base[1]= (V520);
	base[2]= (V521);
	base[3]= (V522);
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V531 = vs_base[0];
	VMR33(V531)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for (FAST-METHOD COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO (STANDARD-GENERIC-FUNCTION))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V532;
	object V533;
	register object V534;
	check_arg(3);
	V532=(base[0]);
	V533=(base[1]);
	V534=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V536;
	register object V537;
	register object V538;
	object V539;
	base[3]= (V534);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V539= vs_base[0];
	V536= Cnil;
	V537= Cnil;
	V538= Cnil;
	{register object V540;
	register object V541;
	V540= (V539);
	V541= CMPcar((V540));
	goto T1093;
T1093:;
	if(!(((V540))==Cnil)){
	goto T1094;}
	goto T1089;
	goto T1094;
T1094:;
	base[4]= (V534);
	base[5]= (V541);
	base[6]= (V536);
	base[7]= (V537);
	base[8]= (V538);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk280)();
	if(vs_base<vs_top){
	V536= vs_base[0];
	vs_base++;
	}else{
	V536= Cnil;}
	if(vs_base<vs_top){
	V537= vs_base[0];
	vs_base++;
	}else{
	V537= Cnil;}
	if(vs_base<vs_top){
	V538= vs_base[0];
	}else{
	V538= Cnil;}
	vs_top=sup;
	V540= CMPcdr((V540));
	V541= CMPcar((V540));
	goto T1093;}
	goto T1089;
T1089:;
	base[3]= (V536);
	base[4]= (V537);
	base[6]= (V538);
	base[7]= (VV[281]->s.s_gfdef);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk282)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+3)+3;
	return;}
	}
}
/*	function definition for COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO-INTERNAL	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V542;
	object V543;
	object V544;
	object V545;
	object V546;
	check_arg(5);
	V542=(base[0]);
	V543=(base[1]);
	V544=(base[2]);
	V545=(base[3]);
	V546=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V547;
	V547= 0;
	{register object V548;
	register object V549;
	base[7]= (V543);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V548= vs_base[0];
	V549= CMPcar((V548));
	goto T1121;
T1121:;
	if(!(((V548))==Cnil)){
	goto T1122;}
	goto T1116;
	goto T1122;
T1122:;
	if(!(((V549))==(VV[93]))){
	goto T1128;}
	goto T1116;
	goto T1128;
T1128:;
	{register object x= (V549),V550= VV[94];
	while(V550!=Cnil)
	if(x==(V550->c.c_car)){
	goto T1132;
	}else V550=V550->c.c_cdr;
	goto T1131;}
	goto T1132;
T1132:;
	V545= Ct;
	goto T1116;
	goto T1131;
T1131:;
	{register object V551;
	{register object x= (V549),V552= VV[90];
	while(V552!=Cnil)
	if(x==(V552->c.c_car)){
	V551= V552;
	goto T1134;
	}else V552=V552->c.c_cdr;
	V551= Cnil;}
	goto T1134;
T1134:;
	if(((V551))==Cnil){
	goto T1136;}
	goto T1126;
	goto T1136;
T1136:;
	V547= (long)(V547)+(1);}
	goto T1126;
T1126:;
	V548= CMPcdr((V548));
	V549= CMPcar((V548));
	goto T1121;}
	goto T1116;
T1116:;
	{register object V553;
	object V554;
	register object V555;
	object V556;
	base[6]= (V543);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V553= vs_base[0];
	V554= Cnil;
	V555= small_fixnum(0);
	V556= Cnil;
	goto T1151;
T1151:;
	{object V557;
	if(!(((V553))==Cnil)){
	goto T1157;}
	goto T1144;
	goto T1157;
T1157:;
	V557= CMPcar((V553));
	V553= CMPcdr((V553));
	V554= (V557);}
	{object V558;
	V558= (V555);
	V555= number_plus((V555),small_fixnum(1));
	V556= (V558);}
	if(((V554))==((VV[95]->s.s_dbind))){
	goto T1152;}
	base[6]= V556;
	base[7]= (V546);
	vs_top=(vs_base=base+6)+2;
	Ladjoin();
	vs_top=sup;
	V546= vs_base[0];
	goto T1152;
T1152:;
	goto T1151;}
	goto T1144;
T1144:;
	if((V544)!=Cnil){
	V560= (V544);
	goto T1172;}
	V560= CMPmake_fixnum(V547);
	goto T1172;
T1172:;
	V561 = CMPmake_fixnum(V547);
	base[5]= (number_compare(V560,V561)<=0?(V560):V561);
	if((V545)!=Cnil){
	base[6]= (V545);
	goto T1173;}
	if((V544)==Cnil){
	base[6]= Cnil;
	goto T1173;}
	V562 = CMPmake_fixnum(V547);
	base[6]= (number_compare((V544),V562)!=0?Ct:Cnil);
	goto T1173;
T1173:;
	base[7]= (V546);
	vs_top=(vs_base=base+5)+3;
	return;}
	}
}
/*	local entry for function MAKE-DISCRIMINATING-FUNCTION-ARGLIST	*/

static object LI40(V565,V566)

object V565;object V566;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{register object V568;
	register object V569;
	V568= Cnil;
	V569= Cnil;
	{register object V570;
	register object V572;
	V570= small_fixnum(0);
	V572= Cnil;
	goto T1182;
T1182:;
	{register object V573;
	if(!(number_compare((V570),V565)<0)){
	goto T1188;}
	V573= (V570);
	goto T1186;
	goto T1188;
T1188:;
	goto T1178;
	goto T1186;
T1186:;
	V570= number_plus((V570),small_fixnum(1));
	V572= (V573);}
	{register object V574;
	base[1]= Cnil;
	base[2]= VV[96];
	base[3]= (V572);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V574= vs_base[0];
	if(((V568))!=Cnil){
	goto T1198;}
	V569= make_cons((V574),Cnil);
	V568= (V569);
	goto T1183;
	goto T1198;
T1198:;
	V576= make_cons((V574),Cnil);
	((V569))->c.c_cdr = /* INLINE-ARGS */V576;
	V575= (V569);
	V569= CMPcdr(V575);}
	goto T1183;
T1183:;
	goto T1182;}
	goto T1178;
T1178:;
	V567= (V568);}
	if(((V566))==Cnil){
	goto T1207;}
	base[0]= VV[98];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V578= vs_base[0];
	V577= list(2,VV[97],V578);
	goto T1205;
	goto T1207;
T1207:;
	V577= Cnil;
	goto T1205;
T1205:;
	{object V579 = nconc(V567,V577);
	VMR36(V579)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-LAMBDA-LIST (GENERIC-FUNCTION))	*/

static object LI41(V583,V584,V585)

object V583;object V584;object V585;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{object V587 = (*(LnkLI284))((V585));
	VMR37(V587)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD GF-FAST-METHOD-FUNCTION-P (STANDARD-GENERIC-FUNCTION))	*/

static object LI42(V591,V592,V593)

object V591;object V592;register object V593;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V595;
	object V596;
	V595= CMPcar((V591));
	V596= CMPcdr((V591));
	{object V597;
	if(type_of(V593)==t_structure){
	goto T1224;}
	goto T1222;
	goto T1224;
T1224:;
	if(!(((V593)->str.str_def)==(VV[99]))){
	goto T1222;}
	V597= STREF(object,(V593),4);
	goto T1220;
	goto T1222;
T1222:;{object V599;
	V599= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V593);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V600= vs_base[0];
	if(!((V599)==(CMPcar(V600)))){
	goto T1227;}}
	V597= CMPcar(((V593))->cc.cc_turbo[12]);
	goto T1220;
	goto T1227;
T1227:;
	V597= Cnil;
	goto T1220;
T1220:;
	{register object V602;
	V602= ((V595))->v.v_self[1];
	if(!(type_of(V602)==t_fixnum)){
	goto T1238;}
	V602= ((V597))->v.v_self[fix((V602))];
	goto T1236;
	goto T1238;
T1238:;
	V602= VV[14];
	goto T1236;
T1236:;
	if(!(((V602))==(VV[14]))){
	goto T1241;}
	base[0]= (V593);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V601= vs_base[0];
	goto T1233;
	goto T1241;
T1241:;
	V601= (V602);}
	goto T1233;
T1233:;
	{object V604 = STREF(object,V601,40);
	VMR38(V604)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI43(V609,V610,V611,V612)

object V609;object V610;register object V611;object V612;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{object V614;
	object V616;
	object V617;
	V614= (*(LnkLI220))(VV[52],V612);
	if(!(type_of((V614))==t_cons)){
	goto T1249;}
	V616= CMPcar((V614));
	goto T1247;
	goto T1249;
T1249:;
	V616= Cnil;
	goto T1247;
T1247:;
	V617= (*(LnkLI239))(VV[70],V612);
	{object V618;
	object V619;
	V618= CMPcar((V609));
	V619= CMPcdr((V609));
	{object V620;
	if(type_of(V611)==t_structure){
	goto T1260;}
	goto T1258;
	goto T1260;
T1260:;
	if(!(((V611)->str.str_def)==(VV[101]))){
	goto T1258;}
	V620= STREF(object,(V611),4);
	goto T1256;
	goto T1258;
T1258:;{object V622;
	V622= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V611);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V623= vs_base[0];
	if(!((V622)==(CMPcar(V623)))){
	goto T1263;}}
	V620= CMPcar(((V611))->cc.cc_turbo[12]);
	goto T1256;
	goto T1263;
T1263:;
	V620= Cnil;
	goto T1256;
T1256:;
	if((V614)==Cnil){
	goto T1272;}
	(void)((VFUN_NARGS=5,(*(LnkLI286))((V611),VV[52],(V616),VV[70],(V617))));
	goto T1270;
	goto T1272;
T1272:;
	(void)((VFUN_NARGS=1,(*(LnkLI286))((V611))));
	goto T1270;
T1270:;
	{register object V626;
	V626= ((V618))->v.v_self[1];
	if(!(type_of(V626)==t_fixnum)){
	goto T1282;}
	V626= ((V620))->v.v_self[fix((V626))];
	goto T1280;
	goto T1282;
T1282:;
	V626= VV[14];
	goto T1280;
T1280:;
	if(!(((V626))==(VV[14]))){
	goto T1285;}
	base[3]= (V611);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V625= vs_base[0];
	goto T1277;
	goto T1285;
T1285:;
	V625= (V626);}
	goto T1277;
T1277:;
	if(((*(LnkLI287))(V625))==Cnil){
	goto T1275;}
	{object V628 = (VFUN_NARGS=1,(*(LnkLI288))((V611)));
	VMR39(V628)}
	goto T1275;
T1275:;
	{object V629 = Cnil;
	VMR39(V629)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI44(V634,V635,V636,V637)

object V634;object V635;register object V636;object V637;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V640;
	object V642;
	object V643;
	object V645;
	V640= (*(LnkLI220))(VV[52],V637);
	if(!(type_of((V640))==t_cons)){
	goto T1293;}
	V642= CMPcar((V640));
	goto T1291;
	goto T1293;
T1293:;
	V642= Cnil;
	goto T1291;
T1291:;
	V643= (*(LnkLI220))(VV[70],V637);
	if(!(type_of((V643))==t_cons)){
	goto T1298;}
	V645= CMPcar((V643));
	goto T1296;
	goto T1298;
T1298:;
	V645= Cnil;
	goto T1296;
T1296:;
	{object V646;
	object V647;
	V646= CMPcar((V634));
	V647= CMPcdr((V634));
	{object V648;
	if(type_of(V636)==t_structure){
	goto T1308;}
	goto T1306;
	goto T1308;
T1308:;
	if(!(((V636)->str.str_def)==(VV[102]))){
	goto T1306;}
	V648= STREF(object,(V636),4);
	goto T1304;
	goto T1306;
T1306:;{object V650;
	V650= (VV[13]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V636);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V651= vs_base[0];
	if(!((V650)==(CMPcar(V651)))){
	goto T1311;}}
	V648= CMPcar(((V636))->cc.cc_turbo[12]);
	goto T1304;
	goto T1311;
T1311:;
	V648= Cnil;
	goto T1304;
T1304:;
	if((V640)==Cnil){
	goto T1320;}
	if((V643)==Cnil){
	goto T1323;}
	(void)((VFUN_NARGS=5,(*(LnkLI286))((V636),VV[52],(V642),VV[70],(V645))));
	goto T1318;
	goto T1323;
T1323:;
	(void)((VFUN_NARGS=3,(*(LnkLI286))((V636),VV[52],(V642))));
	goto T1318;
	goto T1320;
T1320:;
	(void)((VFUN_NARGS=1,(*(LnkLI286))((V636))));
	goto T1318;
T1318:;
	{register object V654;
	V654= ((V646))->v.v_self[1];
	if(!(type_of(V654)==t_fixnum)){
	goto T1336;}
	V654= ((V648))->v.v_self[fix((V654))];
	goto T1334;
	goto T1336;
T1336:;
	V654= VV[14];
	goto T1334;
T1334:;
	if(!(((V654))==(VV[14]))){
	goto T1339;}
	base[4]= (V636);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V653= vs_base[0];
	goto T1331;
	goto T1339;
T1339:;
	V653= (V654);}
	goto T1331;
T1331:;
	if(((*(LnkLI287))(V653))==Cnil){
	goto T1329;}
	if((V637)==Cnil){
	goto T1343;}
	if(V640!=Cnil){
	if((V640)==Cnil){
	goto T1326;}
	goto T1327;}
	if((CMPcddr(V637))==Cnil){
	goto T1326;}
	goto T1327;
	goto T1343;
T1343:;
	goto T1326;
	goto T1329;
T1329:;
	goto T1326;
	goto T1327;
T1327:;
	{object V656 = (VFUN_NARGS=1,(*(LnkLI288))((V636)));
	VMR40(V656)}
	goto T1326;
T1326:;
	{object V657 = Cnil;
	VMR40(V657)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-METHODS	*/

static object LI45(V660,V661)

register object V660;register object V661;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	base[0]= Cnil;
	base[1]= V660;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	goto T1349;
T1349:;
	if(((V661))!=Cnil){
	goto T1351;}
	{object V663 = (V660);
	VMR41(V663)}
	goto T1351;
T1351:;
	V664 = (V660);
	{register object V666;
	V666= CMPcar((V661));
	V661= CMPcdr((V661));
	V665= (V666);}
	V667 = (V661);
	(void)((VFUN_NARGS=3,(*(LnkLI290))(V664,V665,V667)));
	goto T1349;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REAL-ADD-METHOD	*/

static object LI46(object V669,object V668,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB42 VMS42 VMV42
	{register object V670;
	register object V671;
	object V672;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V670= V669;
	V671= V668;
	narg = narg - 2;
	if (narg <= 0) goto T1359;
	else {
	V672= first;}
	--narg; goto T1360;
	goto T1359;
T1359:;
	V672= Cnil;
	goto T1360;
T1360:;
	base[0]= (V671);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1363;}
	base[0]= VV[103];
	base[1]= (V671);
	base[3]= (V671);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V673 = vs_base[0];
	VMR42(V673)}
	goto T1363;
T1363:;
	{object V674;
	object V675;
	object V676;
	object V677;
	base[4]= (V670);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V674= vs_base[0];
	base[4]= (V671);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V675= vs_base[0];
	base[4]= (V671);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V676= vs_base[0];
	V677= (VFUN_NARGS=4,(*(LnkLI266))((V670),(V675),(V676),Cnil));
	if(((V677))==Cnil){
	goto T1377;}
	base[4]= (V670);
	base[5]= (V677);
	(void)simple_symlispcall(VV[268],base+4,2);
	goto T1377;
T1377:;
	base[4]= (V670);
	base[5]= V671;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	{object V681;
	base[5]= V671;
	base[7]= V670;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V681= vs_base[0];
	base[5]= (V681);
	base[6]= V670;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;}
	{register object V683;
	register object V684;
	V683= (V676);
	V684= CMPcar((V683));
	goto T1396;
T1396:;
	if(!(((V683))==Cnil)){
	goto T1397;}
	goto T1392;
	goto T1397;
T1397:;
	base[5]= (V684);
	base[6]= (V671);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	V683= CMPcdr((V683));
	V684= CMPcar((V683));
	goto T1396;}
	goto T1392;
T1392:;
	(void)((VFUN_NARGS=3,(*(LnkLI286))((V670),VV[104],(V671))));
	if(((V672))!=Cnil){
	goto T1410;}
	{register object x= (V674),V685= VV[105];
	while(V685!=Cnil)
	if(eql(x,V685->c.c_car)){
	goto T1415;
	}else V685=V685->c.c_cdr;
	goto T1413;}
	goto T1415;
T1415:;
	base[4]= (*(LnkLI293))(CMPcar((V676)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk294)();
	vs_top=sup;
	goto T1413;
T1413:;
	(void)((VFUN_NARGS=1,(*(LnkLI288))((V670))));
	goto T1410;
T1410:;
	{object V686 = (V671);
	VMR42(V686)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function REAL-REMOVE-METHOD	*/

static object LI47(V689,V690)

register object V689;register object V690;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	V691 = (V689);
	base[0]= (V690);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	V692= vs_base[0];
	if(!((((V691)==(V692)?Ct:Cnil))==Cnil)){
	goto T1418;}
	base[0]= VV[106];
	base[1]= (V690);
	base[3]= (V690);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V693 = vs_base[0];
	VMR43(V693)}
	goto T1418;
T1418:;
	{object V694;
	object V695;
	object V696;
	object V697;
	base[4]= (V689);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V694= vs_base[0];
	base[4]= (V690);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V695= vs_base[0];
	base[4]= (V689);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V696= vs_base[0];
	base[4]= (V690);
	base[5]= (V696);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	V697= vs_base[0];
	base[4]= Cnil;
	base[5]= V690;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	base[4]= (V697);
	base[5]= V689;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	{register object V700;
	register object V701;
	base[6]= (V690);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V700= vs_base[0];
	V701= CMPcar((V700));
	goto T1446;
T1446:;
	if(!(((V700))==Cnil)){
	goto T1447;}
	goto T1441;
	goto T1447;
T1447:;
	base[6]= (V701);
	base[7]= (V690);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V700= CMPcdr((V700));
	V701= CMPcar((V700));
	goto T1446;}
	goto T1441;
T1441:;
	(void)((VFUN_NARGS=1,(*(LnkLI286))((V689))));
	{register object x= (V694),V702= VV[107];
	while(V702!=Cnil)
	if(eql(x,V702->c.c_car)){
	goto T1462;
	}else V702=V702->c.c_cdr;
	goto T1460;}
	goto T1462;
T1462:;
	base[4]= (*(LnkLI293))(CMPcar((V695)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk294)();
	vs_top=sup;
	goto T1460;
T1460:;
	(void)((VFUN_NARGS=1,(*(LnkLI288))((V689))));
	{object V703 = (V689);
	VMR43(V703)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-APPLICABLE-METHODS-FUNCTION	*/

static object LI48(V706,V707)

object V706;object V707;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	base[1]= (V706);
	base[3]= (V706);
	base[4]= (V707);
	base[5]= VV[108];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V708 = vs_base[0];
	VMR44(V708)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-APPLICABLE-METHODS (GENERIC-FUNCTION T))	*/

static object LI49(V713,V714,V715,V716)

object V713;object V714;object V715;object V716;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	base[1]= (V715);
	base[3]= (V715);
	base[4]= (V716);
	base[5]= VV[108];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V718 = vs_base[0];
	VMR45(V718)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-APPLICABLE-METHODS-USING-CLASSES (GENERIC-FUNCTION T))	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V719;
	object V720;
	object V721;
	object V722;
	check_arg(4);
	V719=(base[0]);
	V720=(base[1]);
	V721=(base[2]);
	V722=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V721);
	base[6]= (V721);
	base[7]= (V722);
	base[8]= VV[109];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk298)();
	return;
	}
}
/*	local entry for function PROCLAIM-INCOMPATIBLE-SUPERCLASSES	*/

static object LI51(V725)

object V725;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V726;
	object V727= (V725);
	if(V727==Cnil){
	V725= Cnil;
	goto T1489;}
	base[0]=V726=MMcons(Cnil,Cnil);
	goto T1490;
T1490:;
	if(!(type_of((V727->c.c_car))==t_symbol)){
	goto T1493;}
	(V726->c.c_car)= (VFUN_NARGS=1,(*(LnkLI260))((V727->c.c_car)));
	goto T1491;
	goto T1493;
T1493:;
	(V726->c.c_car)= (V727->c.c_car);
	goto T1491;
T1491:;
	if((V727=MMcdr(V727))==Cnil){
	V725= base[0];
	goto T1489;}
	V726=MMcdr(V726)=MMcons(Cnil,Cnil);
	goto T1490;}
	goto T1489;
T1489:;
	{register object V729;
	register object V730;
	V729= (V725);
	V730= CMPcar((V729));
	goto T1498;
T1498:;
	if(!(((V729))==Cnil)){
	goto T1499;}
	{object V731 = Cnil;
	VMR47(V731)}
	goto T1499;
T1499:;
	{register object V732;
	register object V733;
	V732= (V725);
	V733= CMPcar((V732));
	goto T1507;
T1507:;
	if(!(((V732))==Cnil)){
	goto T1508;}
	goto T1503;
	goto T1508;
T1508:;
	if(((V730))==((V733))){
	goto T1512;}
	{register object V734;
	register object V735;
	register object V736;
	V734= (V733);
	V735= (V730);
	base[3]= (V734);
	base[5]= (V735);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V736= vs_base[0];
	{register object V737;
	V737= (V735);
	base[3]= (V736);
	base[4]= (V737);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;}}
	goto T1512;
T1512:;
	V732= CMPcdr((V732));
	V733= CMPcar((V732));
	goto T1507;}
	goto T1503;
T1503:;
	V729= CMPcdr((V729));
	V730= CMPcar((V729));
	goto T1498;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUPERCLASSES-COMPATIBLE-P	*/

static object LI52(V740,V741)

object V740;object V741;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V742;
	register object V743;
	base[0]= (V740);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V742= vs_base[0];
	base[0]= (V741);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V743= vs_base[0];
	{register object V744;
	register object V745;
	V744= (V742);
	V745= CMPcar((V744));
	goto T1540;
T1540:;
	if(!(((V744))==Cnil)){
	goto T1541;}
	{object V746 = Ct;
	VMR48(V746)}
	goto T1541;
T1541:;
	{register object V747;
	register object V748;
	base[3]= (V745);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	V747= vs_base[0];
	V748= CMPcar((V747));
	goto T1550;
T1550:;
	if(!(((V747))==Cnil)){
	goto T1551;}
	goto T1545;
	goto T1551;
T1551:;
	{register object x= (V748),V749= (V743);
	while(V749!=Cnil)
	if(x==(V749->c.c_car)){
	goto T1557;
	}else V749=V749->c.c_cdr;
	goto T1555;}
	goto T1557;
T1557:;
	{object V750 = Cnil;
	VMR48(V750)}
	goto T1555;
T1555:;
	V747= CMPcdr((V747));
	V748= CMPcar((V747));
	goto T1550;}
	goto T1545;
T1545:;
	V744= CMPcdr((V744));
	V745= CMPcar((V744));
	goto T1540;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (SPECIALIZER SPECIALIZER))	*/

static object LI53(V755,V756,V757,V758)

object V755;object V756;object V757;object V758;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V760 = Cnil;
	VMR49(V760)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS CLASS))	*/

static object LI54(V765,V766,V767,V768)

object V765;object V766;object V767;object V768;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V770 = (((V767))==((V768))?Ct:Cnil);
	VMR50(V770)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (CLASS))	*/

static object LI55(V774,V775,V776)

object V774;object V775;object V776;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V778 = (V776);
	VMR51(V778)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS-EQ-SPECIALIZER CLASS-EQ-SPECIALIZER))	*/

static object LI56(V783,V784,V785,V786)

object V783;object V784;object V785;object V786;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]= (V785);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V788= vs_base[0];
	base[0]= (V786);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V789= vs_base[0];
	{object V790 = ((V788)==(V789)?Ct:Cnil);
	VMR52(V790)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (EQL-SPECIALIZER EQL-SPECIALIZER))	*/

static object LI57(V795,V796,V797,V798)

object V795;object V796;object V797;object V798;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V797);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V800= vs_base[0];
	base[0]= (V798);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V801= vs_base[0];
	{object V802 = ((V800)==(V801)?Ct:Cnil);
	VMR53(V802)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (EQL-SPECIALIZER))	*/

static object LI58(V806,V807,V808)

object V806;object V807;register object V808;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V810;
	object V811;
	V810= CMPcar((V806));
	V811= CMPcdr((V806));
	{object V812;
	if(type_of(V808)==t_structure){
	goto T1605;}
	goto T1603;
	goto T1605;
T1605:;
	if(!(((V808)->str.str_def)==(VV[110]))){
	goto T1603;}
	V812= STREF(object,(V808),4);
	goto T1601;
	goto T1603;
T1603:;{object V814;
	V814= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V808);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V815= vs_base[0];
	if(!((V814)==(CMPcar(V815)))){
	goto T1608;}}
	V812= CMPcar(((V808))->cc.cc_turbo[12]);
	goto T1601;
	goto T1608;
T1608:;
	V812= Cnil;
	goto T1601;
T1601:;
	{register object V817;
	V817= ((V810))->v.v_self[1];
	if(!(type_of(V817)==t_fixnum)){
	goto T1619;}
	V817= ((V812))->v.v_self[fix((V817))];
	goto T1617;
	goto T1619;
T1619:;
	V817= VV[14];
	goto T1617;
T1617:;
	if(!(((V817))==(VV[14]))){
	goto T1622;}
	base[0]= (V808);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	V816= vs_base[0];
	goto T1614;
	goto T1622;
T1622:;
	V816= (V817);}
	goto T1614;
T1614:;
	{object V819 = (*(LnkLI149))(V816);
	VMR54(V819)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for TYPES-FROM-ARGUMENTS	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	{object V820;
	register object V821;
	register object V822;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V820=(base[0]);
	V821=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1625;}
	V822=(base[2]);
	vs_top=sup;
	goto T1626;
	goto T1625;
T1625:;
	V822= Cnil;
	goto T1626;
T1626:;
	{object V823;
	object V824;
	object V825;
	object V826;
	object V827;
	base[3]= (V820);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk304)();
	if(vs_base>=vs_top){vs_top=sup;goto T1630;}
	V823= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1631;}
	V824= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1632;}
	V825= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1633;}
	V826= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1634;}
	V827= vs_base[0];
	vs_top=sup;
	goto T1635;
	goto T1630;
T1630:;
	V823= Cnil;
	goto T1631;
T1631:;
	V824= Cnil;
	goto T1632;
T1632:;
	V825= Cnil;
	goto T1633;
T1633:;
	V826= Cnil;
	goto T1634;
T1634:;
	V827= Cnil;
	goto T1635;
T1635:;
	{register object V828;
	V828= Cnil;
	{long V829;
	register long V830;
	V829= fix((V823));
	V830= 0;
	goto T1640;
T1640:;
	if(!((V830)>=(V829))){
	goto T1641;}
	goto T1636;
	goto T1641;
T1641:;
	if(((V821))!=Cnil){
	goto T1644;}
	base[3]= VV[111];
	base[5]= (V820);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V823);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
	goto T1644;
T1644:;
	{register object V831;
	{register object V832;
	V832= CMPcar((V821));
	V821= CMPcdr((V821));
	V831= (V832);}
	{register object V833;
	if(((V822))==Cnil){
	goto T1658;}
	V833= list(2,(V822),(V831));
	goto T1656;
	goto T1658;
T1658:;
	V833= (V831);
	goto T1656;
T1656:;
	V828= make_cons((V833),(V828));}}
	V830= (long)(V830)+1;
	goto T1640;}
	goto T1636;
T1636:;
	base[3]= nreverse((V828));
	base[4]= (V827);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function GET-WRAPPERS-FROM-CLASSES	*/

static object LI60(V838,V839,V840,V841)

object V838;object V839;object V840;object V841;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V842;
	register object V843;
	register object V844;
	V842= (V839);
	V843= (V842);
	V844= (V841);
	{register object V845;
	register object V846;
	if(!(type_of((V840))==t_cons||((V840))==Cnil)){
	goto T1672;}
	V845= (V840);
	goto T1670;
	goto T1672;
T1672:;
	V845= make_cons((V840),Cnil);
	goto T1670;
T1670:;
	V846= CMPcar((V845));
	goto T1676;
T1676:;
	if(!(((V845))==Cnil)){
	goto T1677;}
	goto T1669;
	goto T1677;
T1677:;
	if((Ct)==(CMPcar((V844)))){
	goto T1681;}
	{register object V847;
	base[2]= (V846);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V847= vs_base[0];
	if(((V847))!=Cnil){
	goto T1686;}
	{object V848 = Cnil;
	VMR56(V848)}
	goto T1686;
T1686:;
	if(!(eql((V838),small_fixnum(1)))){
	goto T1690;}
	V842= (V847);
	goto T1681;
	goto T1690;
T1690:;
	{register object V850;
	V850= (V847);
	(V843)->c.c_car = (V850);}
	V843= CMPcdr((V843));}
	goto T1681;
T1681:;
	V844= CMPcdr((V844));
	V845= CMPcdr((V845));
	V846= CMPcar((V845));
	goto T1676;}
	goto T1669;
T1669:;
	{object V851 = (V842);
	VMR56(V851)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SDFUN-FOR-CACHING	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V852;
	object V853;
	check_arg(2);
	V852=(base[0]);
	V853=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V854;
	base[3]=VV[306]->s.s_gfdef;
	{object V855;
	object V856= (V853);
	if(V856==Cnil){
	V854= Cnil;
	goto T1704;}
	base[2]=V855=MMcons(Cnil,Cnil);
	goto T1705;
T1705:;
	base[4]= (V856->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	vs_top=sup;
	(V855->c.c_car)= vs_base[0];
	if((V856=MMcdr(V856))==Cnil){
	V854= base[2];
	goto T1704;}
	V855=MMcdr(V855)=MMcons(Cnil,Cnil);
	goto T1705;}
	goto T1704;
T1704:;
	{object V857;
	object V858;
	base[2]= (V852);
	base[3]= (V854);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk298)();
	if(vs_base>=vs_top){vs_top=sup;goto T1711;}
	V857= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1712;}
	V858= vs_base[0];
	vs_top=sup;
	goto T1713;
	goto T1711;
T1711:;
	V857= Cnil;
	goto T1712;
T1712:;
	V858= Cnil;
	goto T1713;
T1713:;
	base[2]= (VFUN_NARGS=6,(*(LnkLI307))((V852),(V857),(V854),Cnil,Ct,(V858)));
	base[3]= Cnil;
	base[6]=VV[305]->s.s_gfdef;
	{object V859;
	object V860= (V853);
	if(V860==Cnil){
	base[4]= Cnil;
	goto T1716;}
	base[5]=V859=MMcons(Cnil,Cnil);
	goto T1717;
T1717:;
	base[7]= (V860->c.c_car);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	(V859->c.c_car)= vs_base[0];
	if((V860=MMcdr(V860))==Cnil){
	base[4]= base[5];
	goto T1716;}
	V859=MMcdr(V859)=MMcons(Cnil,Cnil);
	goto T1717;}
	goto T1716;
T1716:;
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}}
	}
}
/*	local entry for function VALUE-FOR-CACHING	*/

static object LI62(V863,V864)

object V863;object V864;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{object V865;
	base[0]= (V863);
	base[3]=VV[306]->s.s_gfdef;
	{object V866;
	object V867= (V864);
	if(V867==Cnil){
	base[1]= Cnil;
	goto T1722;}
	base[2]=V866=MMcons(Cnil,Cnil);
	goto T1723;
T1723:;
	base[4]= (V867->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	vs_top=sup;
	(V866->c.c_car)= vs_base[0];
	if((V867=MMcdr(V867))==Cnil){
	base[1]= base[2];
	goto T1722;}
	V866=MMcdr(V866)=MMcons(Cnil,Cnil);
	goto T1723;}
	goto T1722;
T1722:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	V865= vs_base[0];{object V869;
	base[0]= CMPcar((V865));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk309)(Lclptr309);
	vs_top=sup;
	V869= vs_base[0];
	if(V869==Cnil)goto T1727;
	V868= V869;
	goto T1726;
	goto T1727;
T1727:;}
	base[0]= CMPcar((V865));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V868= vs_base[0];
	goto T1726;
T1726:;
	{object V870 = (VFUN_NARGS=2,(*(LnkLI308))(V868,VV[112]));
	VMR58(V870)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-SECONDARY-DISPATCH-FUNCTION	*/

static object LI64(V872)

object V872;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]=MMcons((V872),Cnil);
	{object V873 = 
	make_cclosure_new(LC124,Cnil,base[0],Cdata);
	VMR59(V873)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-EQ	*/

static object LI65(V876,V877)

register object V876;register object V877;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	goto T1732;
T1732:;
	if(!(type_of((V876))!=t_cons)){
	goto T1734;}
	{object V878 = (((V876))==((V877))?Ct:Cnil);
	VMR60(V878)}
	goto T1734;
T1734:;
	if(!(type_of((V877))!=t_cons)){
	goto T1737;}
	{object V879 = Cnil;
	VMR60(V879)}
	goto T1737;
T1737:;
	if((CMPcar((V876)))==(CMPcar((V877)))){
	goto T1740;}
	{object V880 = Cnil;
	VMR60(V880)}
	goto T1740;
T1740:;
	V876= CMPcdr((V876));
	V877= CMPcdr((V877));
	goto T1732;
	return Cnil;
}
/*	function definition for COMPUTE-APPLICABLE-METHODS-EMF	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	{object V881;
	check_arg(1);
	V881=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((VV[113]->s.s_dbind))==(VV[114]))){
	goto T1748;}
	{register object V882;
	object V883;
	V882= (*(LnkLI311))(VV[115]);
	base[3]= (V882);
	base[4]= list(2,list(2,VV[108],(V881)),Ct);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	V883= vs_base[0];
	base[4]= (V882);
	base[5]= (V883);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	base[3]= vs_base[0];
	V884 = (V883);
	if((VV[116]->s.s_dbind)!=Cnil){
	V885= (VV[116]->s.s_dbind);
	goto T1758;}
	base[5]= (V882);
	base[6]= list(2,list(2,VV[108],(V882)),Ct);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	(VV[116]->s.s_dbind)= vs_base[0];
	V885= (VV[116]->s.s_dbind);
	goto T1758;
T1758:;
	base[4]= (*(LnkLI313))(V884,V885);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1748;
T1748:;
	base[1]= (VV[314]->s.s_gfdef);
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function COMPUTE-APPLICABLE-METHODS-EMF-STD-P	*/

static object LI67(V887)

object V887;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= (V887);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V888= vs_base[0];
	{object V889 = STREF(object,V888,36);
	VMR62(V889)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-ALL-C-A-M-GF-INFO	*/

static object LI68(V891)

object V891;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[1]= (V891);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T1770;}
	base[1]= 
	make_cclosure_new(LC125,Cnil,base[0],Cdata);
	base[2]= (VV[117]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk279)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1770;}
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	{register object V892;
	register object V893;
	V892= (base[0]->c.c_car);
	V893= CMPcar((V892));
	goto T1780;
T1780:;
	if(!(((V892))==Cnil)){
	goto T1781;}
	goto T1776;
	goto T1781;
T1781:;
	{register object x= (V893),V894= (VV[117]->s.s_dbind);
	while(V894!=Cnil)
	if(eql(x,V894->c.c_car)){
	goto T1785;
	}else V894=V894->c.c_cdr;}
	{register object V895;
	base[4]= (V893);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V896= vs_base[0];
	V895= CMPcar(V896);
	base[4]= (V895);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1792;}
	{object V897;
	base[5]= (V895);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V897= vs_base[0];
	base[5]= (V897);
	base[6]= (base[1]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[1]->c.c_car)= vs_base[0];
	goto T1785;}
	goto T1792;
T1792:;
	{object V898;
	base[5]= (V895);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V898= vs_base[0];
	base[5]= (V898);
	base[6]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[2]->c.c_car)= vs_base[0];}}
	goto T1785;
T1785:;
	V892= CMPcdr((V892));
	V893= CMPcar((V892));
	goto T1780;}
	goto T1776;
T1776:;
	V899= 
	make_cclosure_new(LC126,Cnil,base[2],Cdata);
	(void)((*(LnkLI316))(V899));
	goto T1768;
	goto T1770;
T1770:;
	V900= (VV[317]->s.s_gfdef);
	(void)((*(LnkLI316))(V900));
	goto T1768;
T1768:;
	(VV[117]->s.s_dbind)= (base[0]->c.c_car);
	{object V901 = (VV[117]->s.s_dbind);
	VMR63(V901)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-INFO	*/

static object LI69(V903)

object V903;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	(void)((*(LnkLI317))((V903)));
	{object V904 = (*(LnkLI318))((V903));
	VMR64(V904)}
	return Cnil;
}
/*	local entry for function UPDATE-C-A-M-GF-INFO	*/

static object LI70(V906)

object V906;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	if(((*(LnkLI319))((V906)))!=Cnil){
	goto T1815;}
	{object V907;
	object V908;
	base[0]= (V906);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk320)();
	if(vs_base>=vs_top){vs_top=sup;goto T1819;}
	V907= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1820;}
	V908= vs_base[0];
	vs_top=sup;
	goto T1821;
	goto T1819;
T1819:;
	V907= Cnil;
	goto T1820;
T1820:;
	V908= Cnil;
	goto T1821;
T1821:;
	{object V909;
	base[0]= (V906);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V909= vs_base[0];
	V910 = (V909);
	V911 = (V907);
	V912= Ct;
	STSET(object,V910,32, V911);
	(void)(V911);
	V913 = (V909);
	V914 = (V908);
	V915= Ct;
	STSET(object,V913,36, V914);
	{object V916 = V914;
	VMR65(V916)}}}
	goto T1815;
T1815:;
	{object V917 = Cnil;
	VMR65(V917)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-SIMPLE-ACCESSOR-TYPE	*/

static object LI71(V919)

object V919;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V920;
	base[0]= (V919);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V920= vs_base[0];
	V921 = (V920);
	{object V923;
	register object V924;
	object V925;
	base[3]= (V919);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V923= vs_base[0];
	if((V923)==Cnil){
	V924= Cnil;
	goto T1830;}
	V924= (*(LnkLI149))(CMPcar((V923)));
	goto T1830;
T1830:;
	if((V924)==Cnil){
	V925= Cnil;
	goto T1831;}
	if(!(((V924))==((VV[118]->s.s_dbind)))){
	goto T1833;}
	V925= VV[119];
	goto T1831;
	goto T1833;
T1833:;
	if(!(((V924))==((VV[120]->s.s_dbind)))){
	goto T1836;}
	V925= VV[121];
	goto T1831;
	goto T1836;
T1836:;
	if(!(((V924))==((VV[122]->s.s_dbind)))){
	goto T1839;}
	V925= VV[123];
	goto T1831;
	goto T1839;
T1839:;
	V925= Cnil;
	goto T1831;
T1831:;
	if((STREF(object,(V920),36))==Cnil){
	goto T1842;}
	if(((V925))==Cnil){
	goto T1842;}
	{register object V926;
	register object V927;
	V926= CMPcdr((V923));
	V927= CMPcar((V926));
	goto T1852;
T1852:;
	if(!(((V926))==Cnil)){
	goto T1853;}
	goto T1848;
	goto T1853;
T1853:;
	V928 = (V924);
	V929= (*(LnkLI149))((V927));
	if((V928)==(/* INLINE-ARGS */V929)){
	goto T1857;}
	goto T1842;
	goto T1857;
T1857:;
	V926= CMPcdr((V926));
	V927= CMPcar((V926));
	goto T1852;}
	goto T1848;
T1848:;
	base[3]= (V919);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	V930= vs_base[0];
	V931 = (VV[124]->s.s_dbind);
	if(!((V930)==(V931))){
	goto T1842;}
	V922= (V925);
	goto T1827;
	goto T1842;
T1842:;
	V922= Cnil;}
	goto T1827;
T1827:;
	V932= Ct;
	STSET(object,V921,24, V922);
	{object V933 = V922;
	VMR66(V933)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-ACCESSOR-METHOD-FUNCTION	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V934;
	register object V935;
	register object V936;
	register object V937;
	check_arg(4);
	V934=(base[0]);
	V935=(base[1]);
	V936=(base[2]);
	V937=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V938;
	object V939;
	object V940;
	object V941;
	register object V942;
	object V943;
	V938= (*(LnkLI322))((V935));
	V939= (*(LnkLI323))((V935));
	V944= list(2,VV[108],(V936));
	V945= list(2,VV[109],(V936));
	V940= list(3,/* INLINE-ARGS */V944,/* INLINE-ARGS */V945,list(2,VV[108],(V937)));
	if(!(((V935))==(VV[121]))){
	goto T1873;}
	V941= make_cons(Ct,(V940));
	goto T1871;
	goto T1873;
T1873:;
	V941= (V940);
	goto T1871;
T1871:;
	base[10]= (V934);
	base[11]= (V941);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	V942= vs_base[0];
	V943= ((CMPcdr((V942)))==Cnil?Ct:Cnil);
	if(((V943))==Cnil){
	goto T1881;}
	base[11]= (V936);
	base[12]= (V937);
	base[13]= (V935);
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk324)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1879;
	goto T1881;
T1881:;
	base[11]= (V936);
	base[12]= (V937);
	base[14]= (V934);
	base[15]= (V942);
	base[16]= (V941);{object V947;
	{register object x= (V938),V948= (V942);
	while(V948!=Cnil)
	if(eql(x,V948->c.c_car)){
	V947= V948;
	goto T1895;
	}else V948=V948->c.c_cdr;
	V947= Cnil;}
	goto T1895;
T1895:;
	if(V947==Cnil)goto T1894;
	V946= V947;
	goto T1893;
	goto T1894;
T1894:;}{object V949;
	{register object x= (V939),V950= (V942);
	while(V950!=Cnil)
	if(eql(x,V950->c.c_car)){
	V949= V950;
	goto T1897;
	}else V950=V950->c.c_cdr;
	V949= Cnil;}
	goto T1897;
T1897:;
	if(V949==Cnil)goto T1896;
	V946= V949;
	goto T1893;
	goto T1896;
T1896:;}
	base[18]= VV[125];
	vs_top=(vs_base=base+18)+1;
	Lerror();
	vs_top=sup;
	V946= vs_base[0];
	goto T1893;
T1893:;
	V951= CMPcar(V946);
	base[18]= (V936);
	base[19]= (V937);
	base[20]= (V935);
	vs_top=(vs_base=base+18)+3;
	(void) (*Lnk325)();
	vs_top=sup;
	V952= vs_base[0];
	V953= list(2,/* INLINE-ARGS */V951,V952);
	base[17]= make_cons(/* INLINE-ARGS */V953,Cnil);
	if(!(((V935))==(VV[121]))){
	goto T1904;}
	{register object V954;
	register object V955;
	V954= (V942);
	V955= CMPcar((V954));
	goto T1912;
T1912:;
	if(!(((V954))==Cnil)){
	goto T1913;}
	goto T1905;
	goto T1913;
T1913:;
	base[20]= (V955);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V956= vs_base[0];
	if((CMPcar(V956))==((VV[95]->s.s_dbind))){
	goto T1917;}
	goto T1908;
	goto T1917;
T1917:;
	V954= CMPcdr((V954));
	V955= CMPcar((V954));
	goto T1912;}
	goto T1908;
T1908:;
	goto T1904;
T1904:;
	{object V957;
	V958= (*(LnkLI326))((V936));
	base[19]= (V936);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V959= vs_base[0];
	V957= list(3,/* INLINE-ARGS */V958,V959,(*(LnkLI326))((V937)));
	if(!(((V935))==(VV[121]))){
	goto T1931;}
	base[19]= (VV[95]->s.s_dbind);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V960= vs_base[0];
	V961 = (V957);
	base[18]= make_cons(V960,V961);
	goto T1903;
	goto T1931;
T1931:;
	base[18]= (V957);
	goto T1903;}
	goto T1905;
T1905:;
	base[18]= Cnil;
	goto T1903;
T1903:;
	vs_top=(vs_base=base+14)+5;
	(void) (*Lnk327)();
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= (V935);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk328)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1879;
T1879:;
	base[11]= (V943);
	vs_top=(vs_base=base+10)+2;
	return;}
	}
}
/*	function definition for UPDATE-SLOT-VALUE-GF-INFO	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	if(((VV[126]->s.s_dbind))!=Cnil){
	goto T1937;}
	(void)((*(LnkLI329))((base[0]->c.c_car),(base[1]->c.c_car)));
	goto T1937;
T1937:;
	if(((*(LnkLI322))((base[1]->c.c_car)))==Cnil){
	goto T1941;}
	if(((*(LnkLI323))((base[1]->c.c_car)))==Cnil){
	goto T1941;}
	base[2]=make_cclosure_new(LC74,Cnil,base[1],Cdata);
	base[2]=MMcons(base[2],base[1]);
	if(((VV[126]->s.s_dbind))==Cnil){
	goto T1946;}
	base[3]= (VV[126]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	L74(base);
	return;
	goto T1946;
T1946:;
	base[3]= (base[2]->c.c_car);
	base[4]= VV[127];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk330)();
	return;
	goto T1941;
T1941:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function STANDARD-SVUC-METHOD	*/

static object LI75(V963)

object V963;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{object V964= (V963);
	if((V964!= VV[119]))goto T1951;
	{object V965 = (VV[128]->s.s_dbind);
	VMR69(V965)}
	goto T1951;
T1951:;
	if((V964!= VV[121]))goto T1952;
	{object V966 = (VV[129]->s.s_dbind);
	VMR69(V966)}
	goto T1952;
T1952:;
	if((V964!= VV[123]))goto T1953;
	{object V967 = (VV[130]->s.s_dbind);
	VMR69(V967)}
	goto T1953;
T1953:;
	{object V968 = Cnil;
	VMR69(V968)}}
	return Cnil;
}
/*	local entry for function SET-STANDARD-SVUC-METHOD	*/

static object LI76(V971,V972)

object V971;object V972;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{object V973= (V971);
	if((V973!= VV[119]))goto T1954;
	(VV[128]->s.s_dbind)= (V972);
	{object V974 = (VV[128]->s.s_dbind);
	VMR70(V974)}
	goto T1954;
T1954:;
	if((V973!= VV[121]))goto T1956;
	(VV[129]->s.s_dbind)= (V972);
	{object V975 = (VV[129]->s.s_dbind);
	VMR70(V975)}
	goto T1956;
T1956:;
	if((V973!= VV[123]))goto T1958;
	(VV[130]->s.s_dbind)= (V972);
	{object V976 = (VV[130]->s.s_dbind);
	VMR70(V976)}
	goto T1958;
T1958:;
	{object V977 = Cnil;
	VMR70(V977)}}
	return Cnil;
}
/*	local entry for function STRUCTURE-SVUC-METHOD	*/

static object LI77(V979)

object V979;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{object V980= (V979);
	if((V980!= VV[119]))goto T1960;
	{object V981 = (VV[131]->s.s_dbind);
	VMR71(V981)}
	goto T1960;
T1960:;
	if((V980!= VV[121]))goto T1961;
	{object V982 = (VV[132]->s.s_dbind);
	VMR71(V982)}
	goto T1961;
T1961:;
	if((V980!= VV[123]))goto T1962;
	{object V983 = (VV[133]->s.s_dbind);
	VMR71(V983)}
	goto T1962;
T1962:;
	{object V984 = Cnil;
	VMR71(V984)}}
	return Cnil;
}
/*	local entry for function SET-STRUCTURE-SVUC-METHOD	*/

static object LI78(V987,V988)

object V987;object V988;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V989= (V987);
	if((V989!= VV[119]))goto T1963;
	(VV[131]->s.s_dbind)= (V988);
	{object V990 = (VV[131]->s.s_dbind);
	VMR72(V990)}
	goto T1963;
T1963:;
	if((V989!= VV[121]))goto T1965;
	(VV[132]->s.s_dbind)= (V988);
	{object V991 = (VV[132]->s.s_dbind);
	VMR72(V991)}
	goto T1965;
T1965:;
	if((V989!= VV[123]))goto T1967;
	(VV[133]->s.s_dbind)= (V988);
	{object V992 = (VV[133]->s.s_dbind);
	VMR72(V992)}
	goto T1967;
T1967:;
	{object V993 = Cnil;
	VMR72(V993)}}
	return Cnil;
}
/*	local entry for function UPDATE-STD-OR-STR-METHODS	*/

static object LI79(V996,V997)

object V996;register object V997;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{register object V998;
	register object V999;
	base[2]= (V996);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V998= vs_base[0];
	V999= CMPcar((V998));
	goto T1973;
T1973:;
	if(!(((V998))==Cnil)){
	goto T1974;}
	{object V1000 = Cnil;
	VMR73(V1000)}
	goto T1974;
T1974:;
	{register object V1001;
	base[2]= (V999);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V1001= vs_base[0];
	if(!(((V997))==(VV[121]))){
	goto T1982;}
	{register object V1003;
	V1003= CMPcar((V1001));
	V1001= CMPcdr((V1001));
	V1002= (V1003);}
	V1004 = (VV[95]->s.s_dbind);
	if(!((V1002)==(V1004))){
	goto T1978;}
	goto T1982;
T1982:;
	base[2]= (VV[237]->s.s_gfdef);
	base[3]= (V1001);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk279)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1978;}
	base[2]= CMPcar((V1001));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1005= vs_base[0];
	if(!((V1005)==(VV[134]))){
	goto T1994;}
	base[2]= CMPcadr((V1001));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1006= vs_base[0];
	if(!((V1006)==(VV[135]))){
	goto T1994;}
	base[2]= CMPcaddr((V1001));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1007= vs_base[0];
	if(!((V1007)==(VV[136]))){
	goto T1994;}
	(void)((*(LnkLI331))((V997),(V999)));
	goto T1978;
	goto T1994;
T1994:;
	base[2]= CMPcar((V1001));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1008= vs_base[0];
	if(!((V1008)==(VV[137]))){
	goto T1978;}
	base[2]= CMPcadr((V1001));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1009= vs_base[0];
	if(!((V1009)==(VV[138]))){
	goto T1978;}
	base[2]= CMPcaddr((V1001));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1010= vs_base[0];
	if(!((V1010)==(VV[139]))){
	goto T1978;}
	(void)((*(LnkLI332))((V997),(V999)));}
	goto T1978;
T1978:;
	V998= CMPcdr((V998));
	V999= CMPcar((V998));
	goto T1973;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES-INTERNAL	*/

static object LI80(V1013,V1014)

register object V1013;object V1014;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	base[0]= (V1013);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V1015= vs_base[0];
	base[0]= (V1013);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2026;}
	V1016= Cnil;
	goto T2025;
	goto T2026;
T2026:;
	if((V1014)==Cnil){
	V1016= Cnil;
	goto T2025;}
	if(!(((V1013))==((VV[95]->s.s_dbind)))){
	goto T2032;}
	V1017= Ct;
	goto T2031;
	goto T2032;
T2032:;
	if(!(((V1013))==((VV[140]->s.s_dbind)))){
	goto T2034;}
	V1017= Ct;
	goto T2031;
	goto T2034;
T2034:;
	if(!(((V1013))==((VV[141]->s.s_dbind)))){
	goto T2036;}
	V1017= Ct;
	goto T2031;
	goto T2036;
T2036:;
	V1017= (((V1013))==((VV[142]->s.s_dbind))?Ct:Cnil);
	goto T2031;
T2031:;
	if((V1017)==Cnil){
	goto T2029;}
	V1016= Cnil;
	goto T2025;
	goto T2029;
T2029:;
	{object V1018;
	base[0]= (V1013);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk333)(Lclptr333);
	vs_top=sup;
	V1018= vs_base[0];
	if(((V1018))==Cnil){
	goto T2041;}
	{object V1019;
	object V1020= (V1018);
	if(V1020==Cnil){
	V1016= Cnil;
	goto T2025;}
	base[0]=V1019=MMcons(Cnil,Cnil);
	goto T2043;
T2043:;
	(V1019->c.c_cdr)= (*(LnkLI334))((V1020->c.c_car),(V1014));
	while(MMcdr(V1019)!=Cnil)V1019=MMcdr(V1019);
	if((V1020=MMcdr(V1020))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V1016= base[0];
	goto T2025;}
	goto T2043;}
	goto T2041;
T2041:;
	V1016= Cnil;}
	goto T2025;
T2025:;
	{object V1022 = make_cons(V1015,V1016);
	VMR74(V1022)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES	*/

static object LI81(V1025,V1026)

object V1025;object V1026;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	{object V1027;
	V1027= (*(LnkLI334))((V1025),(V1026));
	if((CMPcdr((V1027)))!=Cnil){
	goto T2047;}
	{object V1028 = (V1027);
	VMR75(V1028)}
	goto T2047;
T2047:;
	{object V1029;
	register object V1030;
	V1029= make_cons(Cnil,(V1027));
	V1030= (V1027);
	goto T2052;
T2052:;
	if((CMPcdr((V1030)))!=Cnil){
	goto T2054;}
	{object V1031 = CMPcdr((V1029));
	VMR75(V1031)}
	goto T2054;
T2054:;
	{register object V1032;
	register object V1033;
	V1032= CMPcadr((V1030));
	V1033= CMPcddr((V1030));
	{register object V1034;
	register object V1035;
	V1034= (V1033);
	V1035= CMPcar((V1034));
	goto T2065;
T2065:;
	if(!(((V1034))==Cnil)){
	goto T2066;}
	goto T2060;
	goto T2066;
T2066:;
	if(!(((V1032))==((V1035)))){
	goto T2070;}
	goto T2061;
	goto T2070;
T2070:;
	V1034= CMPcdr((V1034));
	V1035= CMPcar((V1034));
	goto T2065;}
	goto T2061;
T2061:;
	{register object V1036;
	register object V1037;
	V1036= (V1030);
	V1037= CMPcddr((V1030));
	((V1036))->c.c_cdr = (V1037);
	goto T2053;}
	goto T2060;
T2060:;
	V1030= CMPcdr((V1030));}
	goto T2053;
T2053:;
	goto T2052;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASS-LISTS	*/

static object LI82(V1040,V1041)

object V1040;object V1041;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	if(((V1040))!=Cnil){
	goto T2084;}
	{object V1042 = make_cons(Cnil,Cnil);
	VMR76(V1042)}
	goto T2084;
T2084:;
	{object V1043;
	object V1044;
	V1043= (*(LnkLI335))(CMPcar((V1040)),(V1041));
	V1044= (*(LnkLI336))(CMPcdr((V1040)),(V1041));
	{object V1045;
	object V1046= (V1044);
	if(V1046==Cnil){
	{object V1047 = Cnil;
	VMR76(V1047)}}
	base[2]=V1045=MMcons(Cnil,Cnil);
	goto T2088;
T2088:;
	{object V1049;
	object V1050= (V1043);
	if(V1050==Cnil){
	(V1045->c.c_cdr)= Cnil;
	goto T2089;}
	base[3]=V1049=MMcons(Cnil,Cnil);
	goto T2090;
T2090:;
	(V1049->c.c_car)= make_cons((V1050->c.c_car),(V1046->c.c_car));
	if((V1050=MMcdr(V1050))==Cnil){
	(V1045->c.c_cdr)= base[3];
	goto T2089;}
	V1049=MMcdr(V1049)=MMcons(Cnil,Cnil);
	goto T2090;}
	goto T2089;
T2089:;
	while(MMcdr(V1045)!=Cnil)V1045=MMcdr(V1045);
	if((V1046=MMcdr(V1046))==Cnil){
	base[2]=base[2]->c.c_cdr;
	{object V1052 = base[2];
	VMR76(V1052)}}
	goto T2088;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EMF-CACHE	*/

static object LI85(V1058,V1059,V1060,V1061,V1062)

object V1058;object V1059;object V1060;object V1061;object V1062;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	base[0]= (V1062);
	base[1]= (V1060);
	base[2]= (V1059);
	base[3]= (V1058);
	{object V1063;
	register object V1064;
	base[10]= base[3];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1063= vs_base[0];
	base[5]= (*(LnkLI337))((V1063));
	base[6]= STREF(object,(V1063),8);
	if((base[5])==(small_fixnum(1))){
	goto T2098;}
	base[10]= base[5];
	vs_top=(vs_base=base+10)+1;
	Lmake_list();
	vs_top=sup;
	base[7]= vs_base[0];
	goto T2096;
	goto T2098;
T2098:;
	base[7]= Cnil;
	goto T2096;
T2096:;
	V1064= STREF(object,(V1063),28);
	base[9]= VV[143];
	if(((V1061))==Cnil){
	goto T2104;}
	{
	object V1065= (V1061);
	if(V1065==Cnil){
	goto T2102;}
	goto T2106;
T2106:;
	base[10]= (V1065->c.c_car);
	vs_top=(vs_base=base+10)+1;
	L86(base);
	vs_top=sup;
	if((V1065=MMcdr(V1065))==Cnil){
	goto T2102;}
	goto T2106;}
	goto T2104;
T2104:;
	{register object V1066;
	register object V1067;
	base[12]= base[3];
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V1066= vs_base[0];
	V1067= CMPcar((V1066));
	goto T2113;
T2113:;
	if(!(((V1066))==Cnil)){
	goto T2114;}
	goto T2102;
	goto T2114;
T2114:;
	base[12]= (V1067);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V1069= vs_base[0];
	V1070 = (V1064);
	V1071= (*(LnkLI336))(V1069,V1070);
	{
	object V1068= /* INLINE-ARGS */V1071;
	if(V1068==Cnil){
	goto T2118;}
	goto T2119;
T2119:;
	base[12]= (V1068->c.c_car);
	vs_top=(vs_base=base+12)+1;
	L86(base);
	vs_top=sup;
	if((V1068=MMcdr(V1068))==Cnil){
	goto T2118;}
	goto T2119;}
	goto T2118;
T2118:;
	V1066= CMPcdr((V1066));
	V1067= CMPcar((V1066));
	goto T2113;}
	goto T2102;
T2102:;
	{object V1072 = base[1];
	VMR77(V1072)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CLASS-TEST	*/

static void L87()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1073=base[0]->c.c_cdr;
	if(endp(V1073))invalid_macro_call();
	base[2]= (V1073->c.c_car);
	V1073=V1073->c.c_cdr;
	if(endp(V1073))invalid_macro_call();
	base[3]= (V1073->c.c_car);
	V1073=V1073->c.c_cdr;
	if(!endp(V1073))invalid_macro_call();}
	if(!((base[3])==((VV[95]->s.s_dbind)))){
	goto T2130;}
	base[4]= Ct;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2130;
T2130:;
	if(!((base[3])==((VV[140]->s.s_dbind)))){
	goto T2133;}
	base[4]= list(2,VV[144],list(3,VV[145],VV[146],list(2,VV[147],list(2,VV[148],list(2,VV[149],base[2])))));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2133;
T2133:;
	if(!((base[3])==((VV[141]->s.s_dbind)))){
	goto T2136;}
	V1074= list(2,VV[151],base[2]);
	base[4]= list(3,VV[150],/* INLINE-ARGS */V1074,list(2,VV[152],base[2]));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2136;
T2136:;
	if(!((base[3])==((VV[142]->s.s_dbind)))){
	goto T2139;}
	V1075= list(2,VV[154],base[3]);
	base[4]= list(3,VV[153],/* INLINE-ARGS */V1075,list(2,VV[155],list(2,VV[149],base[2])));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2139;
T2139:;
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1076= vs_base[0];
	base[4]= list(3,VV[156],base[2],list(2,VV[154],V1076));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for CLASS-EQ-TEST	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1077=base[0]->c.c_cdr;
	if(endp(V1077))invalid_macro_call();
	base[2]= (V1077->c.c_car);
	V1077=V1077->c.c_cdr;
	if(endp(V1077))invalid_macro_call();
	base[3]= (V1077->c.c_car);
	V1077=V1077->c.c_cdr;
	if(!endp(V1077))invalid_macro_call();}
	V1078= list(2,VV[149],base[2]);
	base[4]= list(3,VV[145],/* INLINE-ARGS */V1078,list(2,VV[154],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for EQL-TEST	*/

static void L89()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1079=base[0]->c.c_cdr;
	if(endp(V1079))invalid_macro_call();
	base[2]= (V1079->c.c_car);
	V1079=V1079->c.c_cdr;
	if(endp(V1079))invalid_macro_call();
	base[3]= (V1079->c.c_car);
	V1079=V1079->c.c_cdr;
	if(!endp(V1079))invalid_macro_call();}
	base[4]= list(3,VV[108],base[2],list(2,VV[154],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function DNET-METHODS-P	*/

static object LI90(V1081)

object V1081;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	if(type_of((V1081))==t_cons){
	goto T2143;}
	{object V1082 = Cnil;
	VMR81(V1082)}
	goto T2143;
T2143:;
	if(!((CMPcar((V1081)))==(VV[67]))){
	goto T2145;}
	{object V1083 = Ct;
	VMR81(V1083)}
	goto T2145;
T2145:;
	{object V1084 = ((CMPcar((V1081)))==(VV[157])?Ct:Cnil);
	VMR81(V1084)}
	return Cnil;
}
/*	macro definition for SCASE	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1085=base[0]->c.c_cdr;
	if(endp(V1085))invalid_macro_call();
	base[2]= (V1085->c.c_car);
	V1085=V1085->c.c_cdr;
	base[3]= V1085;}
	V1086= list(2,VV[159],base[2]);
	V1087= make_cons(/* INLINE-ARGS */V1086,Cnil);
	{object V1089;
	object V1090= base[3];
	if(V1090==Cnil){
	V1088= Cnil;
	goto T2147;}
	base[4]=V1089=MMcons(Cnil,Cnil);
	goto T2148;
T2148:;
	{register object V1091;
	V1091= (V1090->c.c_car);
	if((CMPcar((V1091)))!=Cnil){
	goto T2152;}
	V1092= Cnil;
	goto T2150;
	goto T2152;
T2152:;
	if(!(type_of(CMPcar((V1091)))==t_cons)){
	goto T2155;}
	if((CMPcdar((V1091)))!=Cnil){
	goto T2158;}
	V1092= list(3,VV[108],VV[159],list(2,VV[154],CMPcaar((V1091))));
	goto T2150;
	goto T2158;
T2158:;
	V1092= list(3,VV[161],VV[159],list(2,VV[154],CMPcar((V1091))));
	goto T2150;
	goto T2155;
T2155:;
	{register object x= CMPcar((V1091)),V1093= VV[162];
	while(V1093!=Cnil)
	if(eql(x,V1093->c.c_car)){
	goto T2162;
	}else V1093=V1093->c.c_cdr;
	goto T2161;}
	goto T2162;
T2162:;
	V1092= Ct;
	goto T2150;
	goto T2161;
T2161:;
	V1092= list(3,VV[108],VV[159],list(2,VV[154],CMPcar((V1091))));
	goto T2150;
T2150:;
	(V1089->c.c_car)= listA(3,V1092,Cnil,CMPcdr((V1091)));}
	if((V1090=MMcdr(V1090))==Cnil){
	V1088= base[4];
	goto T2147;}
	V1089=MMcdr(V1089)=MMcons(Cnil,Cnil);
	goto T2148;}
	goto T2147;
T2147:;
	base[4]= list(3,VV[158],/* INLINE-ARGS */V1087,make_cons(VV[160],V1088));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for MCASE	*/

static void L92()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1094=base[0]->c.c_cdr;
	if(endp(V1094))invalid_macro_call();
	base[2]= (V1094->c.c_car);
	V1094=V1094->c.c_cdr;
	base[3]= V1094;}
	base[4]= listA(3,VV[163],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for GENERATE-DISCRIMINATION-NET	*/

static void L93()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM84; VC84
	vs_check;
	{VOL object V1095;
	VOL object V1096;
	VOL object V1097;
	check_arg(4);
	V1095=(base[0]);
	V1096=(base[1]);
	V1097=(base[2]);
	base[3]=MMcons(base[3],Cnil);
	vs_top=sup;
	{VOL object V1098;
	base[6]= (V1095);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1098= vs_base[0];
	base[5]= STREF(object,(V1098),4);
	base[5]=MMcons(base[5],base[3]);
	base[6]= (V1095);
	base[7]= (V1096);
	base[8]= (V1097);
	base[9]= 
	make_cclosure_new(LC127,Cnil,base[5],Cdata);
	base[10]= 
	make_cclosure_new(LC128,Cnil,base[5],Cdata);
	base[11]= (VV[338]->s.s_gfdef);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk339)();
	return;}
	}
}
/*	local entry for function CLASS-FROM-TYPE	*/

static object LI94(V1100)

register object V1100;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	if(type_of((V1100))!=t_cons){
	goto T2172;}
	if(!((CMPcar((V1100)))==(Ct))){
	goto T2173;}
	goto T2172;
T2172:;
	{object V1101 = (VV[95]->s.s_dbind);
	VMR85(V1101)}
	goto T2173;
T2173:;
	{object V1102= CMPcar((V1100));
	if((V1102!= VV[169]))goto T2177;
	{register object V1103;
	register object V1104;
	V1103= CMPcdr((V1100));
	V1104= CMPcar((V1103));
	goto T2181;
T2181:;
	if(!(((V1103))==Cnil)){
	goto T2182;}
	{object V1105 = (VV[95]->s.s_dbind);
	VMR85(V1105)}
	goto T2182;
T2182:;
	if(!(type_of((V1104))==t_cons)){
	goto T2186;}
	if((CMPcar((V1104)))==(VV[144])){
	goto T2186;}
	V1100= (V1104);
	goto TTL;
	goto T2186;
T2186:;
	V1103= CMPcdr((V1103));
	V1104= CMPcar((V1103));
	goto T2181;}
	goto T2177;
T2177:;
	if((V1102!= VV[144]))goto T2198;
	{object V1106 = (VV[95]->s.s_dbind);
	VMR85(V1106)}
	goto T2198;
T2198:;
	if((V1102!= VV[108]))goto T2199;
	{object V1107 = (*(LnkLI149))(CMPcadr((V1100)));
	VMR85(V1107)}
	goto T2199;
T2199:;
	if((V1102!= VV[109]))goto T2200;
	{object V1108 = CMPcadr((V1100));
	VMR85(V1108)}
	goto T2200;
T2200:;
	if((V1102!= VV[340]))goto T2201;
	{object V1109 = CMPcadr((V1100));
	VMR85(V1109)}
	goto T2201;
T2201:;
	{object V1110 = Cnil;
	VMR85(V1110)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRECOMPUTE-EFFECTIVE-METHODS	*/

static object LI95(object V1112,object V1111,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB86 VMS86 VMV86
	bds_check;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1112,Cnil);
	Vcs[1]=MMcons(V1111,Vcs[0]);
	narg = narg - 2;
	if (narg <= 0) goto T2202;
	else {
	Vcs[2]=MMcons(first,Vcs[1]);}
	--narg; goto T2203;
	goto T2202;
T2202:;
	Vcs[2]= Cnil;
	Vcs[2]=MMcons(Vcs[2],Vcs[1]);
	goto T2203;
T2203:;
	{object V1113;
	object V1114;
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1113= vs_base[0];
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V1114= vs_base[0];
	base[2]= STREF(object,(V1113),4);
	base[2]=MMcons(base[2],Vcs[2]);
	bds_bind(VV[168],Ct);
	base[4]=MMcons(Cnil,base[2]);
	base[5]= (Vcs[0]->c.c_car);
	base[6]= (V1114);
	base[7]= Cnil;
	base[8]= 
	make_cclosure_new(LC129,Cnil,base[4],Cdata);
	base[9]= 
	make_cclosure_new(LC130,Cnil,base[4],Cdata);
	base[10]= 
	make_cclosure_new(LC131,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk339)();
	vs_top=sup;
	{object V1115 = (base[4]->c.c_car);
	bds_unwind1;
	VMR86(V1115)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
/*	local entry for function AUGMENT-TYPE	*/

static object LI96(V1118,V1119)

register object V1118;register object V1119;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	if(((V1119))==(Ct)){
	goto T2217;}
	if(!((CMPcar((V1118)))==(VV[108]))){
	goto T2218;}
	goto T2217;
T2217:;
	{object V1120 = (V1118);
	VMR87(V1120)}
	goto T2218;
T2218:;
	{register object V1121;
	if(!(type_of((V1119))==t_cons)){
	goto T2224;}
	if(!((CMPcar((V1119)))==(VV[169]))){
	goto T2224;}
	V1121= CMPcdr((V1119));
	goto T2222;
	goto T2224;
T2224:;
	V1121= make_cons((V1119),Cnil);
	goto T2222;
T2222:;
	if((CMPcar((V1118)))==(VV[144])){
	goto T2228;}
	{object V1122;
	object V1123= (V1121);
	if(V1123==Cnil){
	V1121= Cnil;
	goto T2231;}
	base[0]=V1122=MMcons(Cnil,Cnil);
	goto T2232;
T2232:;
	base[1]= (V1118);
	base[2]= (V1123->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2235;}
	(V1122->c.c_cdr)= make_cons((V1123->c.c_car),Cnil);
	goto T2233;
	goto T2235;
T2235:;
	(V1122->c.c_cdr)= Cnil;
	goto T2233;
T2233:;
	while(MMcdr(V1122)!=Cnil)V1122=MMcdr(V1122);
	if((V1123=MMcdr(V1123))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V1121= base[0];
	goto T2231;}
	goto T2232;}
	goto T2231;
T2231:;
	goto T2228;
T2228:;
	if(((V1121))!=Cnil){
	goto T2240;}
	{object V1125 = (V1118);
	VMR87(V1125)}
	goto T2240;
T2240:;
	{object V1126 = listA(3,VV[169],(V1118),(V1121));
	VMR87(V1126)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GENERATE-DISCRIMINATION-NET-INTERNAL	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V1127;
	object V1128;
	check_arg(6);
	V1127=(base[0]);
	V1128=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1129;
	object V1130;
	base[10]= (V1127);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1129= vs_base[0];
	V1130= STREF(object,(V1129),4);
	base[8]= CMPmake_fixnum((long)(*(LnkLI341))((V1129)));
	base[9]= STREF(object,(V1129),8);
	base[10]= (V1130);
	base[11]= (V1128);
	base[12]= Cnil;
	vs_top=(vs_base=base+10)+3;
	L100(base);
	return;}
	}
}
/*	function definition for COMPUTE-SECONDARY-DISPATCH-FUNCTION	*/

static void L102()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V1131;
	object V1132;
	object V1133;
	object V1134;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V1131=(base[0]);
	V1132=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2250;}
	V1133=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2251;}
	V1134=(base[3]);
	vs_top=sup;
	goto T2252;
	goto T2250;
T2250:;
	V1133= Cnil;
	goto T2251;
T2251:;
	V1134= Cnil;
	goto T2252;
T2252:;
	base[4]= (VFUN_NARGS=2,(*(LnkLI342))((V1131),(V1132)));
	base[5]= (V1133);
	base[6]= (V1134);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function COMPUTE-MCASE-PARAMETERS	*/

static object LI103(V1136)

object V1136;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	base[0]= (V1136);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V1137= vs_base[0];
	if((Ct)==(CMPcaar(V1137))){
	goto T2258;}
	base[0]= VV[170];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2258;
T2258:;
	{object V1138;
	object V1139;
	object V1140;
	{register object V1141;
	register object V1142;
	V1141= (V1136);
	V1142= CMPcar((V1141));
	goto T2268;
T2268:;
	if(!(((V1141))==Cnil)){
	goto T2269;}
	V1138= Ct;
	goto T2264;
	goto T2269;
T2269:;
	if((CMPcar((V1142)))==(Ct)){
	goto T2273;}
	if(type_of(CMPcaar((V1142)))==t_symbol){
	goto T2273;}
	V1138= Cnil;
	goto T2264;
	goto T2273;
T2273:;
	V1141= CMPcdr((V1141));
	V1142= CMPcar((V1141));
	goto T2268;}
	goto T2264;
T2264:;
	V1143 = CMPmake_fixnum((long)length((V1136)));
	V1139= one_minus(V1143);
	if(!(number_compare((V1139),small_fixnum(1))==0)){
	goto T2286;}
	V1140= VV[171];
	goto T2284;
	goto T2286;
T2286:;
	V1144 = (V1139);
	if(((V1138))==Cnil){
	goto T2293;}
	V1145= (VV[172]->s.s_dbind);
	goto T2291;
	goto T2293;
T2293:;
	V1145= (VV[173]->s.s_dbind);
	goto T2291;
T2291:;
	if(!(number_compare(V1144,V1145)<=0)){
	goto T2289;}
	V1140= VV[174];
	goto T2284;
	goto T2289;
T2289:;
	V1140= VV[175];
	goto T2284;
T2284:;
	{object V1146 = list(2,(V1138),(V1140));
	VMR90(V1146)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for MLOOKUP	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM91; VC91
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1147=base[0]->c.c_cdr;
	if(endp(V1147))invalid_macro_call();
	base[2]= (V1147->c.c_car);
	V1147=V1147->c.c_cdr;
	if(endp(V1147))invalid_macro_call();
	base[3]= (V1147->c.c_car);
	V1147=V1147->c.c_cdr;
	if(endp(V1147))invalid_macro_call();
	base[4]= (V1147->c.c_car);
	V1147=V1147->c.c_cdr;
	if(endp(V1147)){
	base[5]= Cnil;
	} else {
	base[5]= (V1147->c.c_car);
	V1147=V1147->c.c_cdr;}
	if(endp(V1147)){
	base[6]= Cnil;
	} else {
	base[6]= (V1147->c.c_car);
	V1147=V1147->c.c_cdr;}
	if(!endp(V1147))invalid_macro_call();}
	if((base[5])==(Ct)){
	goto T2297;}
	if((base[5])==Cnil){
	goto T2297;}
	base[7]= VV[176];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	goto T2297;
T2297:;
	{object V1148= base[6];
	if((V1148!= VV[171]))goto T2303;
	if((base[5])==Cnil){
	goto T2306;}
	V1149= VV[145];
	goto T2304;
	goto T2306;
T2306:;
	V1149= VV[108];
	goto T2304;
T2304:;
	V1150 = base[2];
	V1151= list(3,V1149,V1150,list(2,VV[177],base[3]));
	base[7]= list(4,VV[165],/* INLINE-ARGS */V1151,list(2,VV[178],base[3]),base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2303;
T2303:;
	if((V1148!= VV[174]))goto T2308;
	V1152= list(3,VV[180],base[3],base[4]);
	if((base[5])==Cnil){
	goto T2311;}
	V1153= VV[145];
	goto T2309;
	goto T2311;
T2311:;
	V1153= VV[108];
	goto T2309;
T2309:;
	V1154 = base[2];
	base[7]= list(3,VV[179],/* INLINE-ARGS */V1152,list(3,VV[181],list(3,V1153,VV[182],V1154),VV[183]));
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2308;
T2308:;
	if((V1148!= VV[175]))goto T2313;
	base[7]= list(4,VV[184],base[2],base[3],base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2313;
T2313:;
	FEerror("The ECASE key value ~s is illegal.",1,V1148);
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
}
/*	local entry for function NET-TEST-CONVERTER	*/

static object LI105(V1156)

register object V1156;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if(!(type_of((V1156))!=t_cons)){
	goto T2315;}
	{object V1157 = (*(LnkLI343))((V1156));
	VMR92(V1157)}
	goto T2315;
T2315:;
	{object V1158= CMPcar((V1156));
	if((V1158!= VV[344])
	&& (V1158!= VV[345]))goto T2317;
	{object V1159 = VV[185];
	VMR92(V1159)}
	goto T2317;
T2317:;
	if((V1158!= VV[67]))goto T2318;
	{object V1160 = VV[186];
	VMR92(V1160)}
	goto T2318;
T2318:;
	if((V1158!= VV[157]))goto T2319;
	{object V1161 = VV[187];
	VMR92(V1161)}
	goto T2319;
T2319:;
	if((V1158!= VV[164]))goto T2320;
	V1162= CMPcadr((V1156));
	{object V1163 = listA(5,VV[188],/* INLINE-ARGS */V1162,Cnil,Cnil,(*(LnkLI346))(CMPcddr((V1156))));
	VMR92(V1163)}
	goto T2320;
T2320:;
	{object V1164 = (*(LnkLI343))((V1156));
	VMR92(V1164)}}
	return Cnil;
}
/*	function definition for NET-CODE-CONVERTER	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	{register object V1165;
	check_arg(1);
	V1165=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1165))!=t_cons)){
	goto T2322;}
	base[1]= (V1165);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk347)();
	return;
	goto T2322;
T2322:;
	{object V1166= CMPcar((V1165));
	if((V1166!= VV[67])
	&& (V1166!= VV[157]))goto T2325;
	{object V1167;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1167= vs_base[0];
	base[1]= (V1167);
	base[2]= make_cons((V1167),Cnil);
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2325;
T2325:;
	if((V1166!= VV[164]))goto T2329;
	{object V1168;
	object V1169;
	object V1170;
	V1168= (*(LnkLI346))(CMPcddr((V1165)));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1169= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1170= vs_base[0];
	base[1]= listA(5,VV[188],CMPcadr((V1165)),(V1169),(V1170),(V1168));
	base[2]= list(2,(V1169),(V1170));
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2329;
T2329:;
	base[1]= (V1165);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk347)();
	return;}
	}
}
/*	local entry for function NET-CONSTANT-CONVERTER	*/

static object LI107(V1173,V1174)

register object V1173;object V1174;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;{object V1175;
	{object V1176;
	V1176= (*(LnkLI348))((V1173),(V1174));
	if(((V1176))==Cnil){
	goto T2340;}
	V1175= make_cons((V1176),Cnil);
	goto T2337;
	goto T2340;
T2340:;
	V1175= Cnil;}
	goto T2337;
T2337:;
	if(V1175==Cnil)goto T2336;
	{object V1177 = V1175;
	VMR94(V1177)}
	goto T2336;
T2336:;}
	if(!(type_of((V1173))!=t_cons)){
	goto T2343;}
	{object V1178 = (*(LnkLI349))((V1173));
	VMR94(V1178)}
	goto T2343;
T2343:;
	{object V1179= CMPcar((V1173));
	if((V1179!= VV[164]))goto T2345;
	{object V1180;
	object V1181;
	object V1182;
	V1180= (*(LnkLI346))(CMPcddr((V1173)));
	{object V1183;
	object V1184= CMPcddr((V1173));
	if(V1184==Cnil){
	V1181= Cnil;
	goto T2347;}
	base[3]=V1183=MMcons(Cnil,Cnil);
	goto T2348;
T2348:;
	{object V1186;
	object V1187;
	V1186= CMPcar((V1184->c.c_car));
	V1187= CMPcadr((V1184->c.c_car));
	if(!(type_of((V1186))==t_cons)){
	goto T2354;}
	V1188= CMPcar((V1186));
	goto T2352;
	goto T2354;
T2354:;
	V1188= (V1186);
	goto T2352;
T2352:;
	V1189= (*(LnkLI348))((V1187),(V1174));
	(V1183->c.c_car)= make_cons(V1188,/* INLINE-ARGS */V1189);}
	if((V1184=MMcdr(V1184))==Cnil){
	V1181= base[3];
	goto T2347;}
	V1183=MMcdr(V1183)=MMcons(Cnil,Cnil);
	goto T2348;}
	goto T2347;
T2347:;
	base[3]= (V1181);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V1190= vs_base[0];
	V1182= CMPcar(V1190);
	V1191 = (V1180);
	base[3]= (V1181);
	vs_top=(vs_base=base+3)+1;
	Lnbutlast();
	vs_top=sup;
	V1192= vs_base[0];
	{object V1193 = list(2,listA(3,VV[189],V1191,V1192),CMPcdr((V1182)));
	VMR94(V1193)}}
	goto T2345;
T2345:;
	{object V1194 = (*(LnkLI349))((V1173));
	VMR94(V1194)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHODS-CONVERTER	*/

static object LI108(V1197,V1198)

register object V1197;object V1198;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	if(!(type_of((V1197))==t_cons)){
	goto T2362;}
	if(!((CMPcar((V1197)))==(VV[67]))){
	goto T2362;}
	V1199= (VFUN_NARGS=2,(*(LnkLI350))((V1198),CMPcadr((V1197))));
	{object V1200 = make_cons(VV[186],/* INLINE-ARGS */V1199);
	VMR95(V1200)}
	goto T2362;
T2362:;
	if(!(type_of((V1197))==t_cons)){
	goto T2367;}
	if(!((CMPcar((V1197)))==(VV[157]))){
	goto T2367;}
	{object V1201 = (*(LnkLI351))((V1198));
	VMR95(V1201)}
	goto T2367;
T2367:;
	{object V1202 = Cnil;
	VMR95(V1202)}
	return Cnil;
}
/*	function definition for CONVERT-METHODS	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{register object V1203;
	object V1204;
	object V1205;
	check_arg(3);
	V1203=(base[0]);
	V1204=(base[1]);
	V1205=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1203))==t_cons)){
	goto T2372;}
	if(!((CMPcar((V1203)))==(VV[186]))){
	goto T2372;}
	base[3]= CMPcdr((V1203));
	base[4]= (V1204);
	base[5]= (V1205);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2372;
T2372:;
	base[3]= (V1203);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function CONVERT-TABLE	*/

static object LI110(V1209,V1210,V1211)

object V1209;object V1210;object V1211;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if(!(type_of((V1209))==t_cons)){
	goto T2380;}
	if(!((CMPcar((V1209)))==(VV[189]))){
	goto T2380;}
	{object V1212;
	object V1213;
	{object V1214;
	object V1215= CMPcddr((V1209));
	if(V1215==Cnil){
	V1212= Cnil;
	goto T2384;}
	base[0]=V1214=MMcons(Cnil,Cnil);
	goto T2385;
T2385:;
	V1217= CMPcar((V1215->c.c_car));
	base[1]= CMPcdr((V1215->c.c_car));
	base[2]= (V1210);
	base[3]= (V1211);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk352)();
	vs_top=sup;
	V1218= vs_base[0];
	(V1214->c.c_car)= make_cons(/* INLINE-ARGS */V1217,V1218);
	if((V1215=MMcdr(V1215))==Cnil){
	V1212= base[0];
	goto T2384;}
	V1214=MMcdr(V1214)=MMcons(Cnil,Cnil);
	goto T2385;}
	goto T2384;
T2384:;
	V1213= CMPcadr((V1209));
	{object V1219= CMPcadr((V1213));
	if((V1219!= VV[171]))goto T2392;
	{object V1220 = CMPcar((V1212));
	VMR97(V1220)}
	goto T2392;
T2392:;
	if((V1219!= VV[174]))goto T2393;
	{object V1221 = (V1212);
	VMR97(V1221)}
	goto T2393;
T2393:;
	if((V1219!= VV[175]))goto T2394;
	{register object V1222;
	base[0]= VV[190];
	if((CMPcar((V1213)))==Cnil){
	goto T2399;}
	base[1]= VV[145];
	goto T2397;
	goto T2399;
T2399:;
	base[1]= VV[108];
	goto T2397;
T2397:;
	vs_top=(vs_base=base+0)+2;
	Lmake_hash_table();
	vs_top=sup;
	V1222= vs_base[0];
	{register object V1223;
	register object V1224;
	V1223= (V1212);
	V1224= CMPcar((V1223));
	goto T2405;
T2405:;
	if(!(((V1223))==Cnil)){
	goto T2406;}
	goto T2401;
	goto T2406;
T2406:;
	{register object V1225;
	register object V1226;
	register object V1227;
	V1225= CMPcar((V1224));
	V1226= (V1222);
	V1227= CMPcdr((V1224));
	base[3]= (V1225);
	base[4]= (V1226);
	base[5]= (V1227);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1223= CMPcdr((V1223));
	V1224= CMPcar((V1223));
	goto T2405;}
	goto T2401;
T2401:;
	{object V1228 = (V1222);
	VMR97(V1228)}}
	goto T2394;
T2394:;
	FEerror("The ECASE key value ~s is illegal.",1,V1219);
	{object V1229 = Cnil;
	VMR97(V1229)}}}
	goto T2380;
T2380:;
	{object V1230 = Cnil;
	VMR97(V1230)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-SECONDARY-DISPATCH-FUNCTION1	*/

static object LI111(object V1232,object V1231,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB98 VMS98 VMV98
	{object V1233;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1232,Cnil);
	V1233= V1231;
	narg = narg - 2;
	if (narg <= 0) goto T2422;
	else {
	Vcs[2]=MMcons(first,Vcs[0]);}
	--narg; goto T2423;
	goto T2422;
T2422:;
	Vcs[2]= Cnil;
	Vcs[2]=MMcons(Vcs[2],Vcs[0]);
	goto T2423;
T2423:;
	if(!((CMPcar((V1233)))==(VV[67]))){
	goto T2426;}
	if(((Vcs[2]->c.c_car))!=Cnil){
	goto T2426;}
	{object V1234 = (VFUN_NARGS=2,(*(LnkLI350))((Vcs[0]->c.c_car),CMPcadr((V1233))));
	VMR98(V1234)}
	goto T2426;
T2426:;
	{object V1235;
	object V1236;
	object V1237;
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Vcs[2]);
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1235= vs_base[0];
	V1236= STREF(object,(V1235),8);
	V1237= (*(LnkLI353))((V1235));
	V1238 = CMPmake_fixnum((long)length((V1236)));
	base[4]= make_cons(V1238,(V1237));
	base[4]=MMcons(base[4],base[0]);
	V1239= list(2,VV[193],(V1233));
	V1240= make_cons(/* INLINE-ARGS */V1239,Cnil);
	V1241= list(3,VV[191],VV[192],list(3,VV[158],/* INLINE-ARGS */V1240,(VFUN_NARGS=3,(*(LnkLI355))((V1236),(V1237),VV[193]))));
	V1242= make_cons(/* INLINE-ARGS */V1241,Cnil);
	base[7]= (*(LnkLI354))((Vcs[2]->c.c_car),(V1236),(V1237),/* INLINE-ARGS */V1242);
	base[8]= (VV[356]->s.s_gfdef);
	base[9]= (VV[357]->s.s_gfdef);
	base[10]= 
	make_cclosure_new(LC132,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk358)();
	if(vs_base>=vs_top){vs_top=sup;goto T2442;}
	base[5]=MMcons(vs_base[0],base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2443;}
	base[6]=MMcons(vs_base[0],base[5]);
	vs_top=sup;
	goto T2444;
	goto T2442;
T2442:;
	base[5]=MMcons(Cnil,base[4]);
	goto T2443;
T2443:;
	base[6]=MMcons(Cnil,base[5]);
	goto T2444;
T2444:;
	{object V1243 = 
	make_cclosure_new(LC133,Cnil,base[6],Cdata);
	VMR98(V1243)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-UNORDERED-METHODS-EMF	*/

static object LI113(V1246,V1247)

object V1246;object V1247;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	base[0]=MMcons((V1247),Cnil);
	base[1]=MMcons((V1246),base[0]);
	if(((VV[196]->s.s_dbind))==Cnil){
	goto T2445;}
	base[2]= Ct;
	base[3]= VV[197];
	base[5]= (base[1]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T2445;
T2445:;
	{object V1248 = 
	make_cclosure_new(LC134,Cnil,base[1],Cdata);
	VMR99(V1248)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-VALUE-USING-CLASS-DFUN	*/

static void L114()
{register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{object V1249;
	object V1250;
	object V1251;
	check_arg(3);
	V1249=(base[0]);
	V1250=(base[1]);
	V1251=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1251);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk359)(Lclptr359);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1250);
	vs_top=(vs_base=base+4)+1;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for SETF-SLOT-VALUE-USING-CLASS-DFUN	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V1252;
	object V1253;
	object V1254;
	object V1255;
	check_arg(4);
	V1252=(base[0]);
	V1253=(base[1]);
	V1254=(base[2]);
	V1255=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]= (V1255);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk360)(Lclptr360);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V1252);
	base[6]= (V1254);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for SLOT-BOUNDP-USING-CLASS-DFUN	*/

static void L116()
{register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V1256;
	object V1257;
	object V1258;
	check_arg(3);
	V1256=(base[0]);
	V1257=(base[1]);
	V1258=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1258);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk361)(Lclptr361);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1257);
	vs_top=(vs_base=base+4)+1;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for (FAST-METHOD COMPUTE-DISCRIMINATING-FUNCTION (STANDARD-GENERIC-FUNCTION))	*/

static void L117()
{register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_check;
	{object V1259;
	object V1260;
	register object V1261;
	check_arg(3);
	V1259=(base[0]);
	V1260=(base[1]);
	V1261=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1263;
	object V1264;
	V1263= CMPcar((V1259));
	V1264= CMPcdr((V1259));
	{object V1265;
	if(type_of(V1261)==t_structure){
	goto T2472;}
	goto T2470;
	goto T2472;
T2472:;
	if(!(((V1261)->str.str_def)==(VV[198]))){
	goto T2470;}
	V1265= STREF(object,(V1261),4);
	goto T2468;
	goto T2470;
T2470:;{object V1267;
	V1267= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1261);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V1268= vs_base[0];
	if(!((V1267)==(CMPcar(V1268)))){
	goto T2475;}}
	V1265= CMPcar(((V1261))->cc.cc_turbo[12]);
	goto T2468;
	goto T2475;
T2475:;
	V1265= Cnil;
	goto T2468;
T2468:;
	{register object V1270;
	{register object V1271;
	V1271= ((V1263))->v.v_self[2];
	if(!(type_of(V1271)==t_fixnum)){
	goto T2487;}
	V1271= ((V1265))->v.v_self[fix((V1271))];
	goto T2485;
	goto T2487;
T2487:;
	V1271= VV[14];
	goto T2485;
T2485:;
	if(!(((V1271))==(VV[14]))){
	goto T2490;}
	base[3]= (V1261);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1270= vs_base[0];
	goto T2482;
	goto T2490;
T2490:;
	V1270= (V1271);}
	goto T2482;
T2482:;
	if(!(((V1270))==Cnil)){
	goto T2494;}
	{object V1273;
	base[3]= (V1261);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1273= vs_base[0];
	if(!(((V1273))==(VV[115]))){
	goto T2498;}
	(void)((*(LnkLI363))((V1261)));
	goto T2498;
T2498:;
	if(!(((V1273))==(VV[199]))){
	goto T2502;}
	base[3]= (V1261);
	base[4]= VV[119];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk364)();
	vs_top=sup;
	base[3]= (VV[365]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2502;
T2502:;
	if(!(equal((V1273),VV[200]))){
	goto T2508;}
	base[3]= (V1261);
	base[4]= VV[121];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk364)();
	vs_top=sup;
	base[3]= (VV[366]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2508;
T2508:;
	if(!(((V1273))==(VV[201]))){
	goto T2514;}
	base[3]= (V1261);
	base[4]= VV[123];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk364)();
	vs_top=sup;
	base[3]= (VV[367]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2514;
T2514:;
	{register object V1275;
	V1275= ((V1263))->v.v_self[1];
	if(!(type_of(V1275)==t_fixnum)){
	goto T2527;}
	V1275= ((V1265))->v.v_self[fix((V1275))];
	goto T2525;
	goto T2527;
T2527:;
	V1275= VV[14];
	goto T2525;
T2525:;
	if(!(((V1275))==(VV[14]))){
	goto T2530;}
	base[3]= (V1261);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V1274= vs_base[0];
	goto T2522;
	goto T2530;
T2530:;
	V1274= (V1275);}
	goto T2522;
T2522:;
	if((STREF(object,V1274,28))==Cnil){
	goto T2520;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI368))((V1261)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2520;
T2520:;
	base[3]= (*(LnkLI369))((V1261));
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2494;
T2494:;
	base[3]= (V1270);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2534;}
	{register object V1277;
	V1277= ((V1263))->v.v_self[2];
	if(!(type_of(V1277)==t_fixnum)){
	goto T2541;}
	V1277= ((V1265))->v.v_self[fix((V1277))];
	goto T2539;
	goto T2541;
T2541:;
	V1277= VV[14];
	goto T2539;
T2539:;
	if(!(((V1277))==(VV[14]))){
	goto T2544;}
	base[3]= (V1261);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk362)(Lclptr362);
	return;
	goto T2544;
T2544:;
	base[3]= (V1277);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2534;
T2534:;
	if(!(type_of((V1270))==t_cons)){
	goto T2548;}
	{register object V1280;
	V1280= ((V1263))->v.v_self[2];
	if(!(type_of(V1280)==t_fixnum)){
	goto T2555;}
	V1280= ((V1265))->v.v_self[fix((V1280))];
	goto T2553;
	goto T2555;
T2555:;
	V1280= VV[14];
	goto T2553;
T2553:;
	if(!(((V1280))==(VV[14]))){
	goto T2558;}
	base[3]= (V1261);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1279= vs_base[0];
	goto T2550;
	goto T2558;
T2558:;
	V1279= (V1280);}
	goto T2550;
T2550:;
	base[3]= CMPcar(V1279);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2548;
T2548:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}}
	}
}
/*	local entry for function (FAST-METHOD UPDATE-GF-DFUN (STD-CLASS T))	*/

static object LI118(V1286,V1287,V1288,V1289)

object V1286;object V1287;object V1288;register object V1289;
{	 VMB104 VMS104 VMV104
	bds_check;
	goto TTL;
TTL:;
	{object V1291;
	base[1]= (V1289);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1291= vs_base[0];
	bds_bind(VV[126],(V1288));
	if((STREF(object,(V1291),28))==Cnil){
	goto T2567;}
	{object V1292;
	object V1293;
	object V1294;
	base[1]= (V1289);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2571;}
	V1292= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2572;}
	V1293= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2573;}
	V1294= vs_base[0];
	vs_top=sup;
	goto T2574;
	goto T2571;
T2571:;
	V1292= Cnil;
	goto T2572;
T2572:;
	V1293= Cnil;
	goto T2573;
T2573:;
	V1294= Cnil;
	goto T2574;
T2574:;
	(void)((VFUN_NARGS=4,(*(LnkLI371))((V1289),(V1292),(V1293),(V1294))));
	{object V1295 = (VFUN_NARGS=4,(*(LnkLI288))((V1289),(V1292),(V1293),(V1294)));
	bds_unwind1;
	VMR104(V1295)}}
	goto T2567;
T2567:;
	{object V1296 = Cnil;
	bds_unwind1;
	VMR104(V1296)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD FUNCTION-KEYWORDS (STANDARD-METHOD))	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{object V1297;
	object V1298;
	register object V1299;
	check_arg(3);
	V1297=(base[0]);
	V1298=(base[1]);
	V1299=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1301;
	object V1302;
	object V1303;
	object V1304;
	object V1305;
	object V1306;
	if(!(type_of((V1299))==t_cons)){
	goto T2582;}
	base[3]= (*(LnkLI372))((V1299));
	goto T2580;
	goto T2582;
T2582:;
	base[4]= (V1299);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T2580;
T2580:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk373)();
	if(vs_base>=vs_top){vs_top=sup;goto T2585;}
	V1301= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2586;}
	V1302= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2587;}
	V1303= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2588;}
	V1304= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2589;}
	V1305= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2590;}
	V1306= vs_base[0];
	vs_top=sup;
	goto T2591;
	goto T2585;
T2585:;
	V1301= Cnil;
	goto T2586;
T2586:;
	V1302= Cnil;
	goto T2587;
T2587:;
	V1303= Cnil;
	goto T2588;
T2588:;
	V1304= Cnil;
	goto T2589;
T2589:;
	V1305= Cnil;
	goto T2590;
T2590:;
	V1306= Cnil;
	goto T2591;
T2591:;
	base[3]= (V1306);
	base[4]= (V1305);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	local entry for function METHOD-LL->GENERIC-FUNCTION-LL	*/

static object LI120(V1308)

object V1308;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	{object V1309;
	object V1310;
	object V1311;
	object V1312;
	object V1313;
	object V1314;
	base[1]= (V1308);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk373)();
	if(vs_base>=vs_top){vs_top=sup;goto T2596;}
	V1309= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2597;}
	V1310= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2598;}
	V1311= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2599;}
	V1312= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2600;}
	V1313= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2601;}
	V1314= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2602;}
	base[0]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T2603;
	goto T2596;
T2596:;
	V1309= Cnil;
	goto T2597;
T2597:;
	V1310= Cnil;
	goto T2598;
T2598:;
	V1311= Cnil;
	goto T2599;
T2599:;
	V1312= Cnil;
	goto T2600;
T2600:;
	V1313= Cnil;
	goto T2601;
T2601:;
	V1314= Cnil;
	goto T2602;
T2602:;
	base[0]=MMcons(Cnil,Cnil);
	goto T2603;
T2603:;
	base[1]= 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	base[2]= (V1308);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk374)();
	vs_top=sup;
	{object V1315 = vs_base[0];
	VMR106(V1315)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-PRETTY-ARGLIST (STANDARD-GENERIC-FUNCTION))	*/

static object LI121(V1319,V1320,V1321)

object V1319;object V1320;object V1321;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1323;
	object V1324;
	base[0]= (V1321);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V1323= vs_base[0];
	V1324= Cnil;
	if(((V1323))==Cnil){
	goto T2612;}
	{object V1325;
	object V1326;
	object V1327;
	register object V1328;
	register object V1329;
	base[0]= CMPcar((V1323));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk375)(Lclptr375);
	if(vs_base>=vs_top){vs_top=sup;goto T2616;}
	V1325= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2617;}
	V1326= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2618;}
	V1327= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2619;}
	V1328= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2620;}
	V1329= vs_base[0];
	vs_top=sup;
	goto T2621;
	goto T2616;
T2616:;
	V1325= Cnil;
	goto T2617;
T2617:;
	V1326= Cnil;
	goto T2618;
T2618:;
	V1327= Cnil;
	goto T2619;
T2619:;
	V1328= Cnil;
	goto T2620;
T2620:;
	V1329= Cnil;
	goto T2621;
T2621:;
	{register object V1330;
	register object V1331;
	V1330= CMPcdr((V1323));
	V1331= CMPcar((V1330));
	goto T2626;
T2626:;
	if(!(((V1330))==Cnil)){
	goto T2627;}
	goto T2622;
	goto T2627;
T2627:;
	{register object V1332;
	register object V1333;
	register object V1334;
	base[2]= (V1331);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk376)(Lclptr376);
	if(vs_base>=vs_top){vs_top=sup;goto T2634;}
	V1332= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2635;}
	V1333= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2636;}
	V1334= vs_base[0];
	vs_top=sup;
	goto T2637;
	goto T2634;
T2634:;
	V1332= Cnil;
	goto T2635;
T2635:;
	V1333= Cnil;
	goto T2636;
T2636:;
	V1334= Cnil;
	goto T2637;
T2637:;
	base[2]= (V1328);
	base[3]= (V1334);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk377)();
	vs_top=sup;
	V1328= vs_base[0];
	if((V1329)!=Cnil){
	goto T2642;}
	V1329= (V1333);
	goto T2642;
T2642:;}
	V1330= CMPcdr((V1330));
	V1331= CMPcar((V1330));
	goto T2626;}
	goto T2622;
T2622:;
	if(((V1329))==Cnil){
	goto T2648;}
	V1324= VV[203];
	goto T2648;
T2648:;
	if(((V1328))==Cnil){
	goto T2652;}
	base[0]= make_cons(VV[204],Cnil);
	base[1]= (V1328);
	base[2]= (V1324);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1324= vs_base[0];
	goto T2652;
T2652:;
	if(((V1327))==Cnil){
	goto T2659;}
	V1335= list(2,VV[97],(V1327));
	V1324= nconc(/* INLINE-ARGS */V1335,(V1324));
	goto T2659;
T2659:;
	if(((V1326))==Cnil){
	goto T2663;}
	base[0]= make_cons(VV[205],Cnil);
	base[1]= (V1326);
	base[2]= (V1324);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1324= vs_base[0];
	goto T2663;
T2663:;
	{object V1336 = nconc((V1325),(V1324));
	VMR107(V1336)}}
	goto T2612;
T2612:;
	{object V1337 = Cnil;
	VMR107(V1337)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD METHOD-PRETTY-ARGLIST (STANDARD-METHOD))	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{object V1338;
	object V1339;
	object V1340;
	check_arg(3);
	V1338=(base[0]);
	V1339=(base[1]);
	V1340=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1342;
	register object V1343;
	object V1344;
	register object V1345;
	object V1346;
	register object V1347;
	object V1348;
	base[3]= (V1340);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V1348= vs_base[0];
	V1342= Cnil;
	V1343= Cnil;
	V1344= Cnil;
	V1345= Cnil;
	V1346= Cnil;
	V1347= VV[206];
	{register object V1349;
	register object V1350;
	V1349= (V1348);
	V1350= CMPcar((V1349));
	goto T2679;
T2679:;
	if(!(((V1349))==Cnil)){
	goto T2680;}
	goto T2675;
	goto T2680;
T2680:;
	if(!(((V1350))==(VV[205]))){
	goto T2686;}
	V1347= VV[207];
	goto T2684;
	goto T2686;
T2686:;
	if(!(((V1350))==(VV[97]))){
	goto T2690;}
	V1347= VV[208];
	goto T2684;
	goto T2690;
T2690:;
	if(!(((V1350))==(VV[204]))){
	goto T2694;}
	V1347= VV[209];
	goto T2684;
	goto T2694;
T2694:;
	if(!(((V1350))==(VV[202]))){
	goto T2698;}
	V1346= Ct;
	goto T2684;
	goto T2698;
T2698:;
	{register object V1351;
	{register object x= (V1350),V1352= VV[90];
	while(V1352!=Cnil)
	if(x==(V1352->c.c_car)){
	V1351= V1352;
	goto T2701;
	}else V1352=V1352->c.c_cdr;
	V1351= Cnil;}
	goto T2701;
T2701:;
	if(((V1351))==Cnil){
	goto T2703;}
	goto T2684;
	goto T2703;
T2703:;
	{object V1353= (V1347);
	if((V1353!= VV[206]))goto T2705;
	V1342= make_cons(V1350,(V1342));
	goto T2684;
	goto T2705;
T2705:;
	if((V1353!= VV[207]))goto T2707;
	V1343= make_cons(V1350,(V1343));
	goto T2684;
	goto T2707;
T2707:;
	if((V1353!= VV[209]))goto T2709;
	V1345= make_cons(V1350,(V1345));
	goto T2684;
	goto T2709;
T2709:;
	if((V1353!= VV[208]))goto T2711;
	V1344= (V1350);
	goto T2684;
	goto T2711;
T2711:;
	FEerror("The ECASE key value ~s is illegal.",1,V1353);
	goto T2684;}}
	goto T2684;
T2684:;
	V1349= CMPcdr((V1349));
	V1350= CMPcar((V1349));
	goto T2679;}
	goto T2675;
T2675:;
	base[3]= nreverse((V1342));
	base[4]= nreverse((V1343));
	base[5]= (V1344);
	base[6]= nreverse((V1345));
	base[7]= (V1346);
	vs_top=(vs_base=base+3)+5;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC135(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{object V1357;
	check_arg(1);
	V1357=(base[0]);
	vs_top=sup;{object V1358;
	{register object x= (V1357),V1359= (base0[0]->c.c_car);
	while(V1359!=Cnil)
	if(x==(V1359->c.c_car)){
	V1358= V1359;
	goto T2724;
	}else V1359=V1359->c.c_cdr;
	V1358= Cnil;}
	goto T2724;
T2724:;
	if(V1358==Cnil)goto T2723;
	base[1]= V1358;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2723;
T2723:;}
	base[1]= (((V1357))==(VV[202])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC134(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM110; VC110
	vs_check;
	{object V1360;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1360=(base[0]);
	vs_top=sup;
	{object V1361;
	object V1362;
	object V1363;
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1360);
	base[6]= VV[108];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	V1361= vs_base[0];
	V1362= (*(LnkLI378))((base0[0]->c.c_car),(base0[1]->c.c_car),(V1361));
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1362);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V1363= vs_base[0];
	base[4]= (V1363);
	base[5]= (V1360);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk379)();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC133(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{object V1364;
	object V1365;
	check_arg(2);
	V1364=(base[0]);
	V1365=(base[1]);
	vs_top=sup;
	{object V1366;
	object V1367;
	V1366= make_cons(Cnil,Cnil);
	V1367= (V1366);
	{register object V1368;
	register object V1369;
	V1368= (base0[0]->c.c_car);
	V1369= CMPcar((V1368));
	goto T2741;
T2741:;
	if(!(((V1368))==Cnil)){
	goto T2742;}
	goto T2737;
	goto T2742;
T2742:;
	{object V1370;
	register object V1371;{object V1372;
	{register object V1373;
	register object V1374;
	V1373= (V1366);
	V1374= CMPcar((V1373));
	goto T2753;
T2753:;
	if(!(((V1373))==Cnil)){
	goto T2754;}
	V1372= Cnil;
	goto T2749;
	goto T2754;
T2754:;
	if(!((CMPcar((V1374)))==((V1369)))){
	goto T2758;}
	V1372= (V1374);
	goto T2749;
	goto T2758;
T2758:;
	V1373= CMPcdr((V1373));
	V1374= CMPcar((V1373));
	goto T2753;}
	goto T2749;
T2749:;
	if(V1372==Cnil)goto T2748;
	V1370= V1372;
	goto T2747;
	goto T2748;
T2748:;}
	V1375 = (V1369);{object V1377;
	V1377= (*(LnkLI380))((V1369),(V1364),(V1365));
	if(V1377==Cnil)goto T2767;
	V1376= V1377;
	goto T2766;
	goto T2767;
T2767:;}
	base[6]= (V1369);
	base[7]= (V1364);
	base[8]= (V1365);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk352)();
	vs_top=sup;
	V1376= vs_base[0];
	goto T2766;
T2766:;
	V1370= make_cons(V1375,V1376);
	goto T2747;
T2747:;
	V1371= make_cons((V1370),Cnil);
	{register object V1379;
	V1379= (V1371);
	(V1367)->c.c_cdr = (V1379);}
	V1367= (V1371);}
	V1368= CMPcdr((V1368));
	V1369= CMPcar((V1368));
	goto T2741;}
	goto T2737;
T2737:;
	{object V1380;
	base[3]= (base0[1]->c.c_car);
	{object V1381;
	{object V1382;
	object V1383= CMPcdr((V1366));
	if(V1383==Cnil){
	V1381= Cnil;
	goto T2784;}
	base[4]=V1382=MMcons(Cnil,Cnil);
	goto T2785;
T2785:;
	(V1382->c.c_car)= CMPcdr((V1383->c.c_car));
	if((V1383=MMcdr(V1383))==Cnil){
	V1381= base[4];
	goto T2784;}
	V1382=MMcdr(V1382)=MMcons(Cnil,Cnil);
	goto T2785;}
	goto T2784;
T2784:;
	 vs_top=base+4;
	 while(V1381!=Cnil)
	 {vs_push((V1381)->c.c_car);V1381=(V1381)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1380= vs_base[0];
	if(((base0[4]->c.c_car))==Cnil){
	goto T2788;}
	base[3]= (V1380);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2788;
T2788:;
	base[3]= (V1380);
	base[4]= list(2,VV[194],(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk259)();
	vs_top=sup;
	V1384= vs_base[0];
	V1385 = (base0[2]->c.c_car);
	base[3]= (VFUN_NARGS=4,(*(LnkLI381))(VV[54],V1384,VV[195],V1385));
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC132(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM112; VC112
	vs_check;
	{object V1386;
	check_arg(1);
	V1386=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI382))((V1386),(base0[3]->c.c_car));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function DO-METHODS	*/

static void L101(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	check_arg(5);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base[1])!=Cnil){
	goto T2794;}
	base[5]= CMPcdr(base[0]);
	base[6]= base[3];
	V1387= make_cons(CMPcar(base[0]),base[2]);
	base[7]= make_cons(/* INLINE-ARGS */V1387,base[4]);
	vs_top=(vs_base=base+5)+3;
	L100(base0);
	return;
	goto T2794;
T2794:;
	{object V1388;
	object V1389;
	V1388= CMPcar(base[0]);
	base[6]= CMPcar(base[1]);
	V1390 = (V1388);
	base[9]= base[6];
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V1391= vs_base[0];
	V1389= nth(fix(V1390),V1391);
	base[10]= (V1389);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk383)();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+9)+1;
	{object _funobj = base0[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[8]= vs_base[0];
	base[11]= base[8];
	base[12]= base[2];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk384)();
	if(vs_base>=vs_top){vs_top=sup;goto T2810;}
	base[9]= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2811;}
	base[10]= vs_base[0];
	vs_top=sup;
	goto T2812;
	goto T2810;
T2810:;
	base[9]= Cnil;
	goto T2811;
T2811:;
	base[10]= Cnil;
	goto T2812;
T2812:;
	base[11]= Cnil;
	vs_top=(vs_base=base+11)+1;
	L98(base0,base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2814;}
	base[11]= Cnil;
	base[12]= Ct;
	vs_top=(vs_base=base+11)+2;
	L99(base0,base);
	return;
	goto T2814;
T2814:;
	base[11]= Ct;
	vs_top=(vs_base=base+11)+1;
	L98(base0,base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2820;}
	base[11]= Ct;
	base[12]= Ct;
	vs_top=(vs_base=base+11)+2;
	L99(base0,base);
	return;
	goto T2820;
T2820:;
	base[11]= (V1388);
	base[12]= base[8];
	base[14]= Ct;
	vs_top=(vs_base=base+14)+1;
	L99(base0,base);
	vs_top=sup;
	base[13]= vs_base[0];
	base[15]= Cnil;
	vs_top=(vs_base=base+15)+1;
	L99(base0,base);
	vs_top=sup;
	base[14]= vs_base[0];
	vs_top=(vs_base=base+11)+4;
	{object _funobj = base0[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
}
/*	local function DO-IF	*/

static void L99(base0,base1)
register object *base0,*base1;
{	register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	{object V1392;
	object V1393;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1392=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2831;}
	V1393=(base[1]);
	vs_top=sup;
	goto T2832;
	goto T2831;
T2831:;
	V1393= Cnil;
	goto T2832;
T2832:;
	{object V1394;
	if(((V1392))==Cnil){
	goto T2836;}
	V1394= base1[8];
	goto T2834;
	goto T2836;
T2836:;
	V1394= list(2,VV[144],base1[8]);
	goto T2834;
T2834:;
	base[2]= base1[0];
	base[3]= CMPcdr(base1[1]);
	if(((V1393))==Cnil){
	goto T2842;}
	base[4]= base1[2];
	goto T2840;
	goto T2842;
T2842:;
	base[4]= (*(LnkLI385))((V1394),base1[2]);
	goto T2840;
T2840:;
	if(((V1392))==Cnil){
	goto T2846;}
	V1395= make_cons(base1[6],Cnil);
	base[5]= append(base1[3],/* INLINE-ARGS */V1395);
	goto T2844;
	goto T2846;
T2846:;
	base[5]= base1[3];
	goto T2844;
T2844:;
	base[6]= base1[4];
	vs_top=(vs_base=base+2)+5;
	L101(base0);
	return;}
	}
}
/*	local function DETERMINED-TO-BE	*/

static void L98(base0,base1)
register object *base0,*base1;
{	register object *base=vs_base;
	register object *sup=base+VM115; VC115
	vs_check;
	{object V1396;
	check_arg(1);
	V1396=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1396))==Cnil){
	goto T2850;}
	base[1]= base1[9];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2850;
T2850:;
	base[1]= ((base1[10])==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function DO-COLUMN	*/

static void L100(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V1397;
	object V1398;
	object V1399;
	check_arg(3);
	V1397=(base[0]);
	V1398=(base[1]);
	V1399=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1397))==Cnil){
	goto T2853;}
	{object V1400;
	object V1401;
	V1400= CMPcar((V1397));{object V1402;
	V1402= nth(fix((V1400)),base0[2]);
	if(V1402==Cnil)goto T2857;
	V1401= V1402;
	goto T2856;
	goto T2857;
T2857:;}
	V1401= Ct;
	goto T2856;
T2856:;
	if(!((nth(fix((V1400)),base0[9]))==(Ct))){
	goto T2860;}
	V1397= CMPcdr((V1397));
	V1403= make_cons((V1400),(V1401));
	V1399= make_cons(/* INLINE-ARGS */V1403,(V1399));
	goto TTL;
	return;
	goto T2860;
T2860:;
	base[5]= (V1397);
	base[6]= (V1398);
	base[7]= (V1401);
	base[8]= Cnil;
	base[9]= (V1399);
	vs_top=(vs_base=base+5)+5;
	L101(base0);
	return;}
	goto T2853;
T2853:;
	base[3]= (V1398);
	{register object V1404;
	base[5]= base0[8];
	vs_top=(vs_base=base+5)+1;
	Lmake_list();
	vs_top=sup;
	V1404= vs_base[0];
	{register object V1405;
	register object V1406;
	V1405= (V1399);
	V1406= CMPcar((V1405));
	goto T2879;
T2879:;
	if(!(((V1405))==Cnil)){
	goto T2880;}
	goto T2875;
	goto T2880;
T2880:;
	{register object V1407;
	register object V1408;
	register object V1409;
	V1407= CMPcar((V1406));
	V1408= (V1404);
	V1409= CMPcdr((V1406));
	(nthcdr(fix((V1407)),(V1408)))->c.c_car = (V1409);
	(void)(nthcdr(fix((V1407)),(V1408)));}
	V1405= CMPcdr((V1405));
	V1406= CMPcar((V1405));
	goto T2879;}
	goto T2875;
T2875:;
	base[4]= (V1404);}
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC131(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM117; VC117
	vs_check;
	{register object V1410;
	check_arg(1);
	V1410=(base[0]);
	vs_top=sup;
	if(!(type_of((V1410))==t_cons)){
	goto T2895;}
	if(!((CMPcar((V1410)))==(VV[108]))){
	goto T2895;}
	base[1]= list(2,VV[109],(*(LnkLI149))(CMPcadr((V1410))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2895;
T2895:;
	base[1]= (V1410);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC130(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM118; VC118
	vs_check;
	{object V1411;
	object V1412;
	object V1413;
	object V1414;
	check_arg(4);
	V1411=(base[0]);
	V1412=(base[1]);
	V1413=(base[2]);
	V1414=(base[3]);
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC129(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V1415;
	check_arg(2);
	V1415=(base[0]);
	base[1]=MMcons(base[1],base0[0]);
	vs_top=sup;
	if(((V1415))==Cnil){
	goto T2900;}
	if(((base0[2]->c.c_car))==Cnil){
	goto T2902;}
	{object V1416;
	{object V1417;
	object V1418= (base[1]->c.c_car);
	if(V1418==Cnil){
	V1416= Cnil;
	goto T2905;}
	base[3]=V1417=MMcons(Cnil,Cnil);
	goto T2906;
T2906:;
	(V1417->c.c_car)= (*(LnkLI386))((V1418->c.c_car));
	if((V1418=MMcdr(V1418))==Cnil){
	V1416= base[3];
	goto T2905;}
	V1417=MMcdr(V1417)=MMcons(Cnil,Cnil);
	goto T2906;}
	goto T2905;
T2905:;
	(base0[0]->c.c_car)= make_cons((V1416),(base0[0]->c.c_car));}
	goto T2902;
T2902:;
	V1419= (*(LnkLI387))((V1415));
	base[2]= ((/* INLINE-ARGS */V1419)==Cnil?Ct:Cnil);
	base[2]=MMcons(base[2],base[1]);
	V1420 = (V1415);
	V1421 = (base0[1]->c.c_car);
	V1422= 
	make_cclosure_new(LC136,Cnil,base[2],Cdata);
	base[3]= (*(LnkLI388))(V1420,V1421,V1422);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2900;
T2900:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC136(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM120; VC120
	vs_check;
	{object V1423;
	check_arg(1);
	V1423=(base[0]);
	vs_top=sup;
	base[1]= (VFUN_NARGS=6,(*(LnkLI307))((base0[6]->c.c_car),(V1423),(base0[1]->c.c_car),Cnil,(base0[5]->c.c_car),(base0[0]->c.c_car)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC128(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1424;
	register object V1425;
	object V1426;
	register object V1427;
	check_arg(4);
	V1424=(base[0]);
	V1425=(base[1]);
	V1426=(base[2]);
	V1427=(base[3]);
	vs_top=sup;
	{object V1428;
	V1428= (*(LnkLI389))((V1424));
	if(!((CMPcar((V1425)))==(VV[108]))){
	goto T2913;}
	{object V1429;
	object V1430;
	object V1431;
	object V1432;
	if(type_of((V1427))==t_cons){
	goto T2916;}
	V1429= Cnil;
	goto T2915;
	goto T2916;
T2916:;
	if(!((CMPcar((V1427)))==(VV[163]))){
	goto T2920;}
	goto T2918;
	goto T2920;
T2920:;
	if((CMPcar((V1427)))==(VV[164])){
	goto T2918;}
	V1429= Cnil;
	goto T2915;
	goto T2918;
T2918:;
	V1429= (((V1428))==(CMPcadr((V1427)))?Ct:Cnil);
	goto T2915;
T2915:;
	if(((V1429))==Cnil){
	goto T2924;}
	V1430= CMPcddr((V1427));
	goto T2922;
	goto T2924;
T2924:;
	V1433= list(2,Ct,(V1427));
	V1430= make_cons(/* INLINE-ARGS */V1433,Cnil);
	goto T2922;
T2922:;
	if(((*(LnkLI390))((V1426)))==Cnil){
	goto T2928;}
	if(((V1429))==Cnil){
	goto T2933;}
	if(!((CMPcar((V1427)))==(VV[164]))){
	goto T2928;}
	goto T2931;
	goto T2933;
T2933:;
	if(((*(LnkLI390))((V1427)))==Cnil){
	goto T2928;}
	goto T2931;
T2931:;
	V1431= VV[164];
	goto T2926;
	goto T2928;
T2928:;
	V1431= VV[163];
	goto T2926;
T2926:;
	V1432= make_cons(CMPcadr((V1425)),Cnil);
	base[8]= listA(4,(V1431),(V1428),list(2,(V1432),(V1426)),(V1430));
	vs_top=(vs_base=base+8)+1;
	return;}
	goto T2913;
T2913:;
	{object V1435;
	V1435= (*(LnkLI389))((V1424));
	{object V1436= CMPcar((V1425));
	if((V1436!= VV[340]))goto T2938;
	V1434= list(3,VV[166],(V1435),CMPcadr((V1425)));
	goto T2936;
	goto T2938;
T2938:;
	if((V1436!= VV[109]))goto T2939;
	V1434= list(3,VV[167],(V1435),CMPcadr((V1425)));
	goto T2936;
	goto T2939;
T2939:;
	V1434= Cnil;}}
	goto T2936;
T2936:;
	V1437 = (V1426);
	V1438 = (V1427);
	base[4]= list(4,VV[165],V1434,V1437,V1438);
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC127(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_check;
	{register object V1439;
	object V1440;
	check_arg(2);
	V1439=(base[0]);
	V1440=(base[1]);
	vs_top=sup;
	if(((base0[1]->c.c_car))!=Cnil){
	goto T2940;}
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base0[0]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2941;}
	goto T2944;}
	else{
	base[3]=MMcons(Cnil,base[2]);
	base[4]= (V1439);
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1441= vs_base[0];
	V1442 = (base0[0]->c.c_car);
	V1443= 
	make_cclosure_new(LC137,Cnil,base[3],Cdata);
	(void)((*(LnkLI388))(V1441,V1442,V1443));
	V1439= (base[3]->c.c_car);
	frs_pop();
	}
	goto T2944;
T2944:;
	goto T2940;
T2940:;
	base[2]= list(3,VV[67],(V1439),(V1440));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2941;
T2941:;
	base[2]= list(3,VV[157],(V1439),(V1440));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC137(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM123; VC123
	vs_check;
	{object V1444;
	check_arg(1);
	V1444=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T2951;}
	{frame_ptr fr;
	fr=frs_sch((base0[1]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[391]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	unwind(fr,Cnil);}
	goto T2951;
T2951:;
	(base0[0]->c.c_car)= (V1444);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function ADD-CLASS-LIST	*/

static void L86(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM124; VC124
	vs_check;
	{register object V1445;
	check_arg(1);
	V1445=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2956;}
	{register object x= base0[0],V1446= (V1445);
	while(V1446!=Cnil)
	if(x==(V1446->c.c_car)){
	goto T2960;
	}else V1446=V1446->c.c_cdr;
	goto T2957;}
	goto T2960;
T2960:;
	goto T2956;
T2956:;
	{object V1447;
	V1447= (*(LnkLI392))(base0[5],base0[7],(V1445),base0[6]);
	if(((V1447))==Cnil){
	goto T2963;}
	V1448 = base0[9];
	V1449= (VFUN_NARGS=3,(*(LnkLI393))(base0[1],(V1447),base0[9]));
	if(!((V1448)==(/* INLINE-ARGS */V1449))){
	goto T2963;}
	{object V1450;
	if(!((base0[2])==(Ct))){
	goto T2969;}
	base[1]= base0[3];
	base[2]= (V1445);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk394)();
	vs_top=sup;
	V1450= vs_base[0];
	goto T2967;
	goto T2969;
T2969:;
	if(!((base0[2])==(VV[112]))){
	goto T2974;}
	V1450= (*(LnkLI395))(base0[3],(V1445));
	goto T2967;
	goto T2974;
T2974:;
	V1450= Cnil;
	goto T2967;
T2967:;
	base0[1]= (VFUN_NARGS=4,(*(LnkLI396))(base0[1],(V1447),(V1450),Ct));
	base[1]= base0[1];
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2963;
T2963:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2957;
T2957:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function UPDATE-CLASS	*/

static void LC74(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM125; VC125
	vs_check;
	{object V1451;
	check_arg(1);
	V1451=(base[0]);
	vs_top=sup;
	base[1]= (V1451);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2978;}
	{register object V1452;
	register object V1453;
	base[3]= (V1451);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk398)(Lclptr398);
	vs_top=sup;
	V1452= vs_base[0];
	V1453= CMPcar((V1452));
	goto T2985;
T2985:;
	if(!(((V1452))==Cnil)){
	goto T2986;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2986;
T2986:;
	base[3]= (V1453);
	base[4]= (base0[0]->c.c_car);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk399)(Lclptr399);
	vs_top=sup;
	V1452= CMPcdr((V1452));
	V1453= CMPcar((V1452));
	goto T2985;}
	goto T2978;
T2978:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function UPDATE-CLASS	*/

static void L74(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM126; VC126
	vs_check;
	{object V1454;
	check_arg(1);
	V1454=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1454);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3000;}
	{register object V1455;
	register object V1456;
	base[3]= (V1454);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk398)(Lclptr398);
	vs_top=sup;
	V1455= vs_base[0];
	V1456= CMPcar((V1455));
	goto T3007;
T3007:;
	if(!(((V1455))==Cnil)){
	goto T3008;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3008;
T3008:;
	base[3]= (V1456);
	base[4]= (base0[1]->c.c_car);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk399)(Lclptr399);
	vs_top=sup;
	V1455= CMPcdr((V1455));
	V1456= CMPcar((V1455));
	goto T3007;}
	goto T3000;
T3000:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC126(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V1457;
	check_arg(1);
	V1457=(base[0]);
	vs_top=sup;
	{register object x= (V1457),V1458= (base0[1]->c.c_car);
	while(V1458!=Cnil)
	if(eql(x,V1458->c.c_car)){
	goto T3021;
	}else V1458=V1458->c.c_cdr;}
	{register object V1459;
	register object V1460;
	V1459= (base0[0]->c.c_car);
	V1460= CMPcar((V1459));
	goto T3029;
T3029:;
	if(!(((V1459))==Cnil)){
	goto T3030;}
	goto T3022;
	goto T3030;
T3030:;
	V1462 = (V1460);
	base[2]= (*(LnkLI149))((V1457));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V1463= vs_base[0];
	{register object x= V1462,V1461= V1463;
	while(V1461!=Cnil)
	if(eql(x,V1461->c.c_car)){
	goto T3034;
	}else V1461=V1461->c.c_cdr;}
	goto T3034;
T3034:;
	V1459= CMPcdr((V1459));
	V1460= CMPcar((V1459));
	goto T3029;}
	goto T3021;
T3021:;
	base[1]= (*(LnkLI317))((V1457));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3022;
T3022:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC125(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM128; VC128
	vs_check;
	{object V1464;
	check_arg(1);
	V1464=(base[0]);
	vs_top=sup;
	{register object x= (V1464),V1465= (base0[0]->c.c_car);
	while(V1465!=Cnil)
	if(eql(x,V1465->c.c_car)){
	base[1]= V1465;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1465=V1465->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC124(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM129; VC129
	vs_check;
	{object V1466;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1466=(base[0]);
	vs_top=sup;
	{object V1467;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1466);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk115)(Lclptr115);
	vs_top=sup;
	V1467= vs_base[0];
	if(((V1467))==Cnil){
	goto T3046;}
	{object V1468;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1467);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V1468= vs_base[0];
	base[1]= (V1468);
	base[2]= (V1466);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk379)();
	return;}
	goto T3046;
T3046:;
	base[1]=VV[400]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1469;
	V1469= (V1466);
	 vs_top=base+3;
	 while(V1469!=Cnil)
	 {vs_push((V1469)->c.c_car);V1469=(V1469)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk400)(Lclptr400);
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC123(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	{object V1470;
	object V1471;
	check_arg(2);
	V1470=(base[0]);
	V1471=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1472;
	V1472= (V1470);
	 vs_top=base+3;
	 while(V1472!=Cnil)
	 {vs_push((V1472)->c.c_car);V1472=(V1472)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function INITARG-ERROR	*/

static void L33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM131; VC131
	vs_check;
	{object V1473;
	object V1474;
	object V1475;
	check_arg(3);
	V1473=(base[0]);
	V1474=(base[1]);
	V1475=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[84];
	base[4]= base0[2];
	base[5]= (V1473);
	base[6]= (V1474);
	base[7]= (V1475);
	vs_top=(vs_base=base+3)+5;
	Lerror();
	return;
	}
}
/*	local function LOSE	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM132; VC132
	vs_check;
	{object V1476;
	object V1477;
	object V1478;
	check_arg(3);
	V1476=(base[0]);
	V1477=(base[1]);
	V1478=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[57];
	base[4]= base0[2];
	base[5]= (V1476);
	base[6]= (V1477);
	base[7]= (V1478);
	vs_top=(vs_base=base+3)+5;
	Lerror();
	return;
	}
}
/*	local function IMPROPER-LIST	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM133; VC133
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[48];
	vs_top=(vs_base=base+0)+1;
	unwind(frs_sch(base0[4]),Cnil);
}
/*	local function IMPROPER-LIST	*/

static void L19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM134; VC134
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[40];
	vs_top=(vs_base=base+0)+1;
	unwind(frs_sch(base0[4]),Cnil);
}
static void LnkT400(ptr) object *ptr;{ call_or_link_closure(VV[400],(void **)(void *)&Lnk400,(void **)(void *)&Lclptr400);} /* NO-APPLICABLE-METHOD */
static void LnkT115(ptr) object *ptr;{ call_or_link_closure(VV[115],(void **)(void *)&Lnk115,(void **)(void *)&Lclptr115);} /* COMPUTE-APPLICABLE-METHODS */
static void LnkT399(ptr) object *ptr;{ call_or_link_closure(VV[399],(void **)(void *)&Lnk399,(void **)(void *)&Lclptr399);} /* COMPUTE-SLOT-ACCESSOR-INFO */
static void LnkT398(ptr) object *ptr;{ call_or_link_closure(VV[398],(void **)(void *)&Lnk398,(void **)(void *)&Lclptr398);} /* CLASS-SLOTS */
static void LnkT397(ptr) object *ptr;{ call_or_link_closure(VV[397],(void **)(void *)&Lnk397,(void **)(void *)&Lclptr397);} /* CLASS-FINALIZED-P */
static object  LnkTLI396(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[396],(void **)(void *)&LnkLI396,first,ap);va_end(ap);return V1;} /* FILL-CACHE */
static object  LnkTLI395(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[395],(void **)(void *)&LnkLI395,2,first,ap);va_end(ap);return V1;} /* VALUE-FOR-CACHING */
static void LnkT394(){ call_or_link(VV[394],(void **)(void *)&Lnk394);} /* SDFUN-FOR-CACHING */
static object  LnkTLI393(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[393],(void **)(void *)&LnkLI393,first,ap);va_end(ap);return V1;} /* PROBE-CACHE */
static object  LnkTLI392(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[392],(void **)(void *)&LnkLI392,4,first,ap);va_end(ap);return V1;} /* GET-WRAPPERS-FROM-CLASSES */
static object  LnkTLI390(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[390],(void **)(void *)&LnkLI390,1,first,ap);va_end(ap);return V1;} /* DNET-METHODS-P */
static object  LnkTLI389(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[389],(void **)(void *)&LnkLI389,1,first,ap);va_end(ap);return V1;} /* DFUN-ARG-SYMBOL */
static object  LnkTLI388(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[388],(void **)(void *)&LnkLI388,3,first,ap);va_end(ap);return V1;} /* MAP-ALL-ORDERS */
static object  LnkTLI387(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[387],(void **)(void *)&LnkLI387,1,first,ap);va_end(ap);return V1;} /* METHODS-CONTAIN-EQL-SPECIALIZER-P */
static object  LnkTLI386(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[386],(void **)(void *)&LnkLI386,1,first,ap);va_end(ap);return V1;} /* CLASS-FROM-TYPE */
static object  LnkTLI385(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[385],(void **)(void *)&LnkLI385,2,first,ap);va_end(ap);return V1;} /* AUGMENT-TYPE */
static void LnkT384(){ call_or_link(VV[384],(void **)(void *)&Lnk384);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT383(){ call_or_link(VV[383],(void **)(void *)&Lnk383);} /* TYPE-FROM-SPECIALIZER */
static object  LnkTLI382(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[382],(void **)(void *)&LnkLI382,2,first,ap);va_end(ap);return V1;} /* NET-CONSTANT-CONVERTER */
static object  LnkTLI381(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[381],(void **)(void *)&LnkLI381,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL */
static object  LnkTLI380(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[380],(void **)(void *)&LnkLI380,3,first,ap);va_end(ap);return V1;} /* CONVERT-TABLE */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* INVOKE-EMF */
static object  LnkTLI378(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[378],(void **)(void *)&LnkLI378,3,first,ap);va_end(ap);return V1;} /* SORT-APPLICABLE-METHODS */
static void LnkT377(){ call_or_link(VV[377],(void **)(void *)&Lnk377);} /* UNION */
static void LnkT376(ptr) object *ptr;{ call_or_link_closure(VV[376],(void **)(void *)&Lnk376,(void **)(void *)&Lclptr376);} /* FUNCTION-KEYWORDS */
static void LnkT375(ptr) object *ptr;{ call_or_link_closure(VV[375],(void **)(void *)&Lnk375,(void **)(void *)&Lclptr375);} /* METHOD-PRETTY-ARGLIST */
static void LnkT374(){ call_or_link(VV[374],(void **)(void *)&Lnk374);} /* REMOVE-IF */
static void LnkT373(){ call_or_link(VV[373],(void **)(void *)&Lnk373);} /* ANALYZE-LAMBDA-LIST */
static object  LnkTLI372(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[372],(void **)(void *)&LnkLI372,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static object  LnkTLI371(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[371],(void **)(void *)&LnkLI371,first,ap);va_end(ap);return V1;} /* SET-DFUN */
static void LnkT370(){ call_or_link(VV[370],(void **)(void *)&Lnk370);} /* MAKE-FINAL-DFUN-INTERNAL */
static object  LnkTLI369(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[369],(void **)(void *)&LnkLI369,1,first,ap);va_end(ap);return V1;} /* MAKE-INITIAL-DFUN */
static object  LnkTLI368(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[368],(void **)(void *)&LnkLI368,first,ap);va_end(ap);return V1;} /* MAKE-FINAL-DFUN */
static void LnkT364(){ call_or_link(VV[364],(void **)(void *)&Lnk364);} /* UPDATE-SLOT-VALUE-GF-INFO */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[363],(void **)(void *)&LnkLI363,1,first,ap);va_end(ap);return V1;} /* UPDATE-ALL-C-A-M-GF-INFO */
static void LnkT362(ptr) object *ptr;{ call_or_link_closure(VV[362],(void **)(void *)&Lnk362,(void **)(void *)&Lclptr362);} /* PCL DFUN-STATE slot READER */
static void LnkT361(ptr) object *ptr;{ call_or_link_closure(VV[361],(void **)(void *)&Lnk361,(void **)(void *)&Lclptr361);} /* SLOT-DEFINITION-BOUNDP-FUNCTION */
static void LnkT360(ptr) object *ptr;{ call_or_link_closure(VV[360],(void **)(void *)&Lnk360,(void **)(void *)&Lclptr360);} /* SLOT-DEFINITION-WRITER-FUNCTION */
static void LnkT359(ptr) object *ptr;{ call_or_link_closure(VV[359],(void **)(void *)&Lnk359,(void **)(void *)&Lclptr359);} /* SLOT-DEFINITION-READER-FUNCTION */
static void LnkT358(){ call_or_link(VV[358],(void **)(void *)&Lnk358);} /* GET-FUNCTION1 */
static object  LnkTLI355(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[355],(void **)(void *)&LnkLI355,first,ap);va_end(ap);return V1;} /* MAKE-EMF-CALL */
static object  LnkTLI354(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[354],(void **)(void *)&LnkLI354,4,first,ap);va_end(ap);return V1;} /* MAKE-DISPATCH-LAMBDA */
static object  LnkTLI353(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[353],(void **)(void *)&LnkLI353,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* CONVERT-METHODS */
static object  LnkTLI351(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[351],(void **)(void *)&LnkLI351,1,first,ap);va_end(ap);return V1;} /* DEFAULT-SECONDARY-DISPATCH-FUNCTION */
static object  LnkTLI350(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[350],(void **)(void *)&LnkLI350,first,ap);va_end(ap);return V1;} /* GET-EFFECTIVE-METHOD-FUNCTION1 */
static object  LnkTLI349(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[349],(void **)(void *)&LnkLI349,1,first,ap);va_end(ap);return V1;} /* DEFAULT-CONSTANT-CONVERTER */
static object  LnkTLI348(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[348],(void **)(void *)&LnkLI348,2,first,ap);va_end(ap);return V1;} /* METHODS-CONVERTER */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* DEFAULT-CODE-CONVERTER */
static object  LnkTLI346(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[346],(void **)(void *)&LnkLI346,1,first,ap);va_end(ap);return V1;} /* COMPUTE-MCASE-PARAMETERS */
static object  LnkTLI343(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[343],(void **)(void *)&LnkLI343,1,first,ap);va_end(ap);return V1;} /* DEFAULT-TEST-CONVERTER */
static object  LnkTLI342(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[342],(void **)(void *)&LnkLI342,first,ap);va_end(ap);return V1;} /* COMPUTE-SECONDARY-DISPATCH-FUNCTION1 */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,257,first,ap);va_end(ap);return V1;} /* ARG-INFO-NUMBER-REQUIRED */
static void LnkT339(){ call_or_link(VV[339],(void **)(void *)&Lnk339);} /* GENERATE-DISCRIMINATION-NET-INTERNAL */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[337],(void **)(void *)&LnkLI337,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-NKEYS */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[336],(void **)(void *)&LnkLI336,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASS-LISTS */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[335],(void **)(void *)&LnkLI335,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASSES */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[334],(void **)(void *)&LnkLI334,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASSES-INTERNAL */
static void LnkT333(ptr) object *ptr;{ call_or_link_closure(VV[333],(void **)(void *)&Lnk333,(void **)(void *)&Lclptr333);} /* CLASS-DIRECT-SUBCLASSES */
static object  LnkTLI332(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[332],(void **)(void *)&LnkLI332,2,first,ap);va_end(ap);return V1;} /* SET-STRUCTURE-SVUC-METHOD */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,2,first,ap);va_end(ap);return V1;} /* SET-STANDARD-SVUC-METHOD */
static void LnkT330(){ call_or_link(VV[330],(void **)(void *)&Lnk330);} /* MAP-ALL-CLASSES */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,2,first,ap);va_end(ap);return V1;} /* UPDATE-STD-OR-STR-METHODS */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* GET-ACCESSOR-FROM-SVUC-METHOD-FUNCTION */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT325(){ call_or_link(VV[325],(void **)(void *)&Lnk325);} /* GET-OPTIMIZED-STD-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION */
static void LnkT324(){ call_or_link(VV[324],(void **)(void *)&Lnk324);} /* GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[323],(void **)(void *)&LnkLI323,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SVUC-METHOD */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)(void *)&LnkLI322,1,first,ap);va_end(ap);return V1;} /* STANDARD-SVUC-METHOD */
static void LnkT321(ptr) object *ptr;{ call_or_link_closure(VV[321],(void **)(void *)&Lnk321,(void **)(void *)&Lclptr321);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static void LnkT320(){ call_or_link(VV[320],(void **)(void *)&Lnk320);} /* COMPUTE-APPLICABLE-METHODS-EMF */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[319],(void **)(void *)&LnkLI319,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[318],(void **)(void *)&LnkLI318,1,first,ap);va_end(ap);return V1;} /* UPDATE-GF-SIMPLE-ACCESSOR-TYPE */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,1,first,ap);va_end(ap);return V1;} /* UPDATE-C-A-M-GF-INFO */
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[316],(void **)(void *)&LnkLI316,1,first,ap);va_end(ap);return V1;} /* MAP-ALL-GENERIC-FUNCTIONS */
static void LnkT315(ptr) object *ptr;{ call_or_link_closure(VV[315],(void **)(void *)&Lnk315,(void **)(void *)&Lclptr315);} /* GF-ARG-INFO */
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[313],(void **)(void *)&LnkLI313,2,first,ap);va_end(ap);return V1;} /* LIST-EQ */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* GET-EFFECTIVE-METHOD-FUNCTION */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)(void *)&LnkLI311,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT310(ptr) object *ptr;{ call_or_link_closure(VV[310],(void **)(void *)&Lnk310,(void **)(void *)&Lclptr310);} /* METHOD-FUNCTION */
static void LnkT309(ptr) object *ptr;{ call_or_link_closure(VV[309],(void **)(void *)&Lnk309,(void **)(void *)&Lclptr309);} /* METHOD-FAST-FUNCTION */
static object  LnkTLI308(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[308],(void **)(void *)&LnkLI308,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[307],(void **)(void *)&LnkLI307,first,ap);va_end(ap);return V1;} /* GET-SECONDARY-DISPATCH-FUNCTION1 */
static void LnkT306(){ call_or_link(VV[306],(void **)(void *)&Lnk306);} /* CLASS-EQ-TYPE */
static void LnkT305(ptr) object *ptr;{ call_or_link_closure(VV[305],(void **)(void *)&Lnk305,(void **)(void *)&Lclptr305);} /* CLASS-WRAPPER */
static void LnkT304(){ call_or_link(VV[304],(void **)(void *)&Lnk304);} /* GET-GENERIC-FUNCTION-INFO */
static void LnkT303(ptr) object *ptr;{ call_or_link_closure(VV[303],(void **)(void *)&Lnk303,(void **)(void *)&Lclptr303);} /* LISP OBJECT slot READER */
static void LnkT302(ptr) object *ptr;{ call_or_link_closure(VV[302],(void **)(void *)&Lnk302,(void **)(void *)&Lclptr302);} /* SPECIALIZER-OBJECT */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)(void *)&Lnk301,(void **)(void *)&Lclptr301);} /* SPECIALIZER-CLASS */
static void LnkT155(ptr) object *ptr;{ call_or_link_closure(VV[155],(void **)(void *)&Lnk155,(void **)(void *)&Lclptr155);} /* CLASS-PRECEDENCE-LIST */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* SETF PCL CLASS-INCOMPATIBLE-SUPERCLASS-LIST */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* CLASS-INCOMPATIBLE-SUPERCLASS-LIST */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* COMPUTE-APPLICABLE-METHODS-USING-TYPES */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* TYPES-FROM-ARGUMENTS */
static void LnkT296(ptr) object *ptr;{ call_or_link_closure(VV[296],(void **)(void *)&Lnk296,(void **)(void *)&Lclptr296);} /* REMOVE-DIRECT-METHOD */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* REMOVE */
static void LnkT294(){ call_or_link(VV[294],(void **)(void *)&Lnk294);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,1,first,ap);va_end(ap);return V1;} /* TYPE-CLASS */
static void LnkT292(ptr) object *ptr;{ call_or_link_closure(VV[292],(void **)(void *)&Lnk292,(void **)(void *)&Lclptr292);} /* ADD-DIRECT-METHOD */
static void LnkT291(ptr) object *ptr;{ call_or_link_closure(VV[291],(void **)(void *)&Lnk291,(void **)(void *)&Lclptr291);} /* SETF PCL METHOD-GENERIC-FUNCTION */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[290],(void **)(void *)&LnkLI290,first,ap);va_end(ap);return V1;} /* REAL-ADD-METHOD */
static void LnkT289(ptr) object *ptr;{ call_or_link_closure(VV[289],(void **)(void *)&Lnk289,(void **)(void *)&Lclptr289);} /* SETF PCL GENERIC-FUNCTION-METHODS */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[288],(void **)(void *)&LnkLI288,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[287],(void **)(void *)&LnkLI287,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-VALID-P */
static object  LnkTLI286(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[286],(void **)(void *)&LnkLI286,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO */
static void LnkT285(ptr) object *ptr;{ call_or_link_closure(VV[285],(void **)(void *)&Lnk285,(void **)(void *)&Lclptr285);} /* PCL ARG-INFO slot READER */
static object  LnkTLI284(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[284],(void **)(void *)&LnkLI284,1,first,ap);va_end(ap);return V1;} /* GF-LAMBDA-LIST */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* METHOD-LAMBDA-LIST */
static void LnkT282(){ call_or_link(VV[282],(void **)(void *)&Lnk282);} /* SORT */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO-INTERNAL */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* EVERY */
static void LnkT278(ptr) object *ptr;{ call_or_link_closure(VV[278],(void **)(void *)&Lnk278,(void **)(void *)&Lclptr278);} /* METHOD-SPECIALIZERS */
static void LnkT275(ptr) object *ptr;{ call_or_link_closure(VV[275],(void **)(void *)&Lnk275,(void **)(void *)&Lclptr275);} /* SETF PCL GF-PRETTY-ARGLIST */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[274],(void **)(void *)&LnkLI274,2,first,ap);va_end(ap);return V1;} /* SETF PCL GDEFINITION */
static void LnkT87(){ call_or_link(VV[87],(void **)(void *)&Lnk87);} /* FUNCTION-ARGLIST */
static void LnkT271(ptr) object *ptr;{ call_or_link_closure(VV[271],(void **)(void *)&Lnk271,(void **)(void *)&Lclptr271);} /* MAKE-INSTANCE */
static void LnkT270(){ call_or_link(VV[270],(void **)(void *)&Lnk270);} /* METHOD-PROTOTYPE-FOR-GF */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* ENSURE-GENERIC-FUNCTION */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)(void *)&LnkLI267,1,first,ap);va_end(ap);return V1;} /* PARSE-SPECIALIZERS */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)(void *)&LnkLI266,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT265(ptr) object *ptr;{ call_or_link_closure(VV[265],(void **)(void *)&Lnk265,(void **)(void *)&Lclptr265);} /* GENERIC-FUNCTION-P */
static void LnkT264(ptr) object *ptr;{ call_or_link_closure(VV[264],(void **)(void *)&Lnk264,(void **)(void *)&Lclptr264);} /* METHOD-COMBINATION-P */
static void LnkT263(ptr) object *ptr;{ call_or_link_closure(VV[263],(void **)(void *)&Lnk263,(void **)(void *)&Lclptr263);} /* PCL METHOD-CLASS slot WRITER */
static void LnkT262(){ call_or_link(VV[262],(void **)(void *)&Lnk262);} /* *SUBTYPEP */
static void LnkT261(ptr) object *ptr;{ call_or_link_closure(VV[261],(void **)(void *)&Lnk261,(void **)(void *)&Lclptr261);} /* CLASS-EQ-SPECIALIZER */
static object  LnkTLI260(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[260],(void **)(void *)&LnkLI260,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT259(){ call_or_link(VV[259],(void **)(void *)&Lnk259);} /* SET-FUNCTION-NAME */
static void LnkT258(ptr) object *ptr;{ call_or_link_closure(VV[258],(void **)(void *)&Lnk258,(void **)(void *)&Lclptr258);} /* GENERIC-FUNCTION-METHODS */
static object  LnkTLI257(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[257],(void **)(void *)&LnkLI257,2,first,ap);va_end(ap);return V1;} /* PLIST-VALUE */
static void LnkT256(ptr) object *ptr;{ call_or_link_closure(VV[256],(void **)(void *)&Lnk256,(void **)(void *)&Lclptr256);} /* PCL SLOT-NAME slot WRITER */
static void LnkT253(ptr) object *ptr;{ call_or_link_closure(VV[253],(void **)(void *)&Lnk253,(void **)(void *)&Lclptr253);} /* SLOT-DEFINITION-NAME */
static void LnkT255(ptr) object *ptr;{ call_or_link_closure(VV[255],(void **)(void *)&Lnk255,(void **)(void *)&Lclptr255);} /* PCL SLOT-DEFINITION slot WRITER */
static void LnkT254(){ call_or_link(VV[254],(void **)(void *)&Lnk254);} /* FIND */
static void LnkT252(ptr) object *ptr;{ call_or_link_closure(VV[252],(void **)(void *)&Lnk252,(void **)(void *)&Lclptr252);} /* CLASS-DIRECT-SLOTS */
static void LnkT251(ptr) object *ptr;{ call_or_link_closure(VV[251],(void **)(void *)&Lnk251,(void **)(void *)&Lclptr251);} /* PCL SLOT-NAME slot READER */
static void LnkT250(ptr) object *ptr;{ call_or_link_closure(VV[250],(void **)(void *)&Lnk250,(void **)(void *)&Lclptr250);} /* SLOT-CLASS-P */
static void LnkT249(ptr) object *ptr;{ call_or_link_closure(VV[249],(void **)(void *)&Lnk249,(void **)(void *)&Lclptr249);} /* ACCESSOR-METHOD-CLASS */
static void LnkT248(ptr) object *ptr;{ call_or_link_closure(VV[248],(void **)(void *)&Lnk248,(void **)(void *)&Lclptr248);} /* PCL SLOT-DEFINITION slot READER */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[247],(void **)(void *)&LnkLI247,3,first,ap);va_end(ap);return V1;} /* SETF PCL PLIST-VALUE */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[246],(void **)(void *)&LnkLI246,first,ap);va_end(ap);return V1;} /* INITIALIZE-METHOD-FUNCTION */
static void LnkT245(ptr) object *ptr;{ call_or_link_closure(VV[245],(void **)(void *)&Lnk245,(void **)(void *)&Lclptr245);} /* LEGAL-SLOT-NAME-P */
static void LnkT244(ptr) object *ptr;{ call_or_link_closure(VV[244],(void **)(void *)&Lnk244,(void **)(void *)&Lclptr244);} /* LEGAL-DOCUMENTATION-P */
static void LnkT243(ptr) object *ptr;{ call_or_link_closure(VV[243],(void **)(void *)&Lnk243,(void **)(void *)&Lclptr243);} /* LEGAL-METHOD-FUNCTION-P */
static void LnkT242(ptr) object *ptr;{ call_or_link_closure(VV[242],(void **)(void *)&Lnk242,(void **)(void *)&Lclptr242);} /* LEGAL-SPECIALIZERS-P */
static void LnkT241(ptr) object *ptr;{ call_or_link_closure(VV[241],(void **)(void *)&Lnk241,(void **)(void *)&Lclptr241);} /* LEGAL-LAMBDA-LIST-P */
static void LnkT240(ptr) object *ptr;{ call_or_link_closure(VV[240],(void **)(void *)&Lnk240,(void **)(void *)&Lclptr240);} /* LEGAL-QUALIFIERS-P */
static object  LnkTLI239(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[239],(void **)(void *)&LnkLI239,2,first,ap);va_end(ap);return V1;} /* GET-KEY-ARG */
static void LnkT238(ptr) object *ptr;{ call_or_link_closure(VV[238],(void **)(void *)&Lnk238,(void **)(void *)&Lclptr238);} /* EQL-SPECIALIZER-P */
static void LnkT237(ptr) object *ptr;{ call_or_link_closure(VV[237],(void **)(void *)&Lnk237,(void **)(void *)&Lclptr237);} /* CLASSP */
static void LnkT236(ptr) object *ptr;{ call_or_link_closure(VV[236],(void **)(void *)&Lnk236,(void **)(void *)&Lclptr236);} /* SPECIALIZERP */
static void LnkT235(ptr) object *ptr;{ call_or_link_closure(VV[235],(void **)(void *)&Lnk235,(void **)(void *)&Lclptr235);} /* LEGAL-SPECIALIZER-P */
static void LnkT234(ptr) object *ptr;{ call_or_link_closure(VV[234],(void **)(void *)&Lnk234,(void **)(void *)&Lclptr234);} /* LEGAL-QUALIFIER-P */
static void LnkT233(ptr) object *ptr;{ call_or_link_closure(VV[233],(void **)(void *)&Lnk233,(void **)(void *)&Lclptr233);} /* ACCESSOR-METHOD-SLOT-NAME */
static void LnkT232(){ call_or_link(VV[232],(void **)(void *)&Lnk232);} /* TYPECASE-ERROR-STRING */
static void LnkT231(){ call_or_link(VV[231],(void **)(void *)&Lnk231);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI230(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[230],(void **)(void *)&LnkLI230,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT229(ptr) object *ptr;{ call_or_link_closure(VV[229],(void **)(void *)&Lnk229,(void **)(void *)&Lclptr229);} /* METHOD-QUALIFIERS */
static void LnkT228(ptr) object *ptr;{ call_or_link_closure(VV[228],(void **)(void *)&Lnk228,(void **)(void *)&Lclptr228);} /* GENERIC-FUNCTION-NAME */
static void LnkT227(ptr) object *ptr;{ call_or_link_closure(VV[227],(void **)(void *)&Lnk227,(void **)(void *)&Lclptr227);} /* METHOD-GENERIC-FUNCTION */
static void LnkT226(){ call_or_link(VV[226],(void **)(void *)&Lnk226);} /* SLOT-BOUNDP-NORMAL */
static void LnkT225(ptr) object *ptr;{ call_or_link_closure(VV[225],(void **)(void *)&Lnk225,(void **)(void *)&Lclptr225);} /* PCL SPECIALIZERS slot READER */
static void LnkT224(ptr) object *ptr;{ call_or_link_closure(VV[224],(void **)(void *)&Lnk224,(void **)(void *)&Lclptr224);} /* LISP FUNCTION slot WRITER */
static object  LnkTLI223(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[223],(void **)(void *)&LnkLI223,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static void LnkT222(ptr) object *ptr;{ call_or_link_closure(VV[222],(void **)(void *)&Lnk222,(void **)(void *)&Lclptr222);} /* PCL FAST-FUNCTION slot READER */
static void LnkT221(ptr) object *ptr;{ call_or_link_closure(VV[221],(void **)(void *)&Lnk221,(void **)(void *)&Lclptr221);} /* LISP FUNCTION slot READER */
static object  LnkTLI220(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[220],(void **)(void *)&LnkLI220,2,first,ap);va_end(ap);return V1;} /* GET-KEY-ARG1 */
static void LnkT219(ptr) object *ptr;{ call_or_link_closure(VV[219],(void **)(void *)&Lnk219,(void **)(void *)&Lclptr219);} /* PCL ALLOCATION slot WRITER */
static void LnkT218(ptr) object *ptr;{ call_or_link_closure(VV[218],(void **)(void *)&Lnk218,(void **)(void *)&Lclptr218);} /* LISP CLASS slot READER */
static void LnkT217(ptr) object *ptr;{ call_or_link_closure(VV[217],(void **)(void *)&Lnk217,(void **)(void *)&Lclptr217);} /* PCL ALLOCATION slot READER */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[216],(void **)(void *)&LnkLI216,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT215(){ call_or_link(VV[215],(void **)(void *)&Lnk215);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT214(){ call_or_link(VV[214],(void **)(void *)&Lnk214);} /* SLOT-VALUE-OR-DEFAULT */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[213],(void **)(void *)&LnkLI213,first,ap);va_end(ap);return V1;} /* CAPITALIZE-WORDS */
static object  LnkTLI212(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[212],(void **)(void *)&LnkLI212,first,ap);va_end(ap);return V1;} /* NAMED-OBJECT-PRINT-FUNCTION */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[211],(void **)(void *)&LnkLI211,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT210(ptr) object *ptr;{ call_or_link_closure(VV[210],(void **)(void *)&Lnk210,(void **)(void *)&Lclptr210);} /* CLASS-NAME */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

