
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
	base[3]= ({object _tmp=get(VV[247],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[247])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[247])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[4]= V360;
	base[5]= V355;
	base[6]= VV[63];
	vs_top=(vs_base=base+4)+3;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V366 = vs_base[0];
	VMR25(V366)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (STANDARD-ACCESSOR-METHOD T))	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V367;
	object V368;
	register object V369;
	object V370;
	object V371;
	check_arg(5);
	V367=(base[0]);
	V368=(base[1]);
	V369=(base[2]);
	V370=(base[3]);
	V371=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V373;
	object V374;
	V373= CMPcar((V367));
	V374= CMPcdr((V367));
	{register object V375;
	if(type_of(V369)==t_structure){
	goto T691;}
	goto T689;
	goto T691;
T691:;
	if(!(((V369)->str.str_def)==(VV[64]))){
	goto T689;}
	V375= STREF(object,(V369),4);
	goto T687;
	goto T689;
T689:;{object V377;
	V377= (VV[13]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V369);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V378= vs_base[0];
	if(!((V377)==(CMPcar(V378)))){
	goto T694;}}
	V375= CMPcar(((V369))->cc.cc_turbo[12]);
	goto T687;
	goto T694;
T694:;
	V375= Cnil;
	goto T687;
T687:;
	{register object V380;
	V380= ((V373))->v.v_self[1];
	if(!(type_of(V380)==t_fixnum)){
	goto T708;}
	V380= ((V375))->v.v_self[fix((V380))];
	goto T706;
	goto T708;
T708:;
	V380= VV[14];
	goto T706;
T706:;
	if(!(((V380))==(VV[14]))){
	goto T711;}
	base[5]= (V369);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk248)(Lclptr248);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T701;}
	goto T703;
	goto T711;
T711:;
	if(((V380))!=Cnil){
	goto T701;}}
	goto T703;
T703:;
	{object V382;
	base[5]= (V369);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V382= vs_base[0];
	base[5]= (V382);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk250)(Lclptr250);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T701;}
	{object V383;
	{register object V384;
	V384= ((V373))->v.v_self[2];
	if(!(type_of(V384)==t_fixnum)){
	goto T725;}
	V384= ((V375))->v.v_self[fix((V384))];
	goto T723;
	goto T725;
T725:;
	V384= VV[14];
	goto T723;
T723:;
	if(!(((V384))==(VV[14]))){
	goto T728;}
	base[6]= (V369);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	base[5]= vs_base[0];
	goto T720;
	goto T728;
T728:;
	base[5]= (V384);}
	goto T720;
T720:;
	base[7]= (V382);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk252)(Lclptr252);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= VV[65];
	base[8]= (VV[253]->s.s_gfdef);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk254)();
	vs_top=sup;
	V383= vs_base[0];
	{object V386;
	V386= ((V373))->v.v_self[1];
	if(!(type_of(V386)==t_fixnum)){
	goto T737;}
	(void)(((V375))->v.v_self[fix((V386))]= ((V383)));
	goto T701;
	goto T737;
T737:;
	base[5]= (V383);
	base[6]= (V369);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;}}}
	goto T701;
T701:;
	{register object V388;
	V388= ((V373))->v.v_self[1];
	if(!(type_of(V388)==t_fixnum)){
	goto T751;}
	V388= ((V375))->v.v_self[fix((V388))];
	goto T749;
	goto T751;
T751:;
	V388= VV[14];
	goto T749;
T749:;
	if(!(((V388))==(VV[14]))){
	goto T754;}
	base[5]= (V369);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk248)(Lclptr248);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T745;}
	goto T746;
	goto T754;
T754:;
	if(((V388))==Cnil){
	goto T745;}}
	goto T746;
T746:;
	{register object V391;
	V391= ((V373))->v.v_self[2];
	if(!(type_of(V391)==t_fixnum)){
	goto T762;}
	V391= ((V375))->v.v_self[fix((V391))];
	goto T760;
	goto T762;
T762:;
	V391= VV[14];
	goto T760;
T760:;
	if(!(((V391))==(VV[14]))){
	goto T765;}
	base[5]= (V369);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V390= vs_base[0];
	goto T757;
	goto T765;
T765:;
	V390= (V391);}
	goto T757;
T757:;
	if(!((V390)==Cnil)){
	goto T742;}
	goto T743;
	goto T745;
T745:;
	goto T742;
	goto T743;
T743:;
	{object V393;
	{register object V394;
	V394= ((V373))->v.v_self[1];
	if(!(type_of(V394)==t_fixnum)){
	goto T774;}
	V394= ((V375))->v.v_self[fix((V394))];
	goto T772;
	goto T774;
T774:;
	V394= VV[14];
	goto T772;
T772:;
	if(!(((V394))==(VV[14]))){
	goto T777;}
	base[6]= (V369);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk248)(Lclptr248);
	vs_top=sup;
	base[5]= vs_base[0];
	goto T769;
	goto T777;
T777:;
	base[5]= (V394);}
	goto T769;
T769:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V393= vs_base[0];
	{object V396;
	V396= ((V373))->v.v_self[2];
	if(!(type_of(V396)==t_fixnum)){
	goto T782;}
	base[5]= ((V375))->v.v_self[fix((V396))]= ((V393));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T782;
T782:;
	base[5]= (V393);
	base[6]= (V369);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk256)(Lclptr256);
	return;}}
	goto T742;
T742:;
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;}}
	}
}
/*	local entry for function (FAST-METHOD METHOD-QUALIFIERS (STANDARD-METHOD))	*/

static object LI30(V401,V402,V403)

object V401;object V402;object V403;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V405 = (*(LnkLI247))((V403),VV[63]);
	VMR27(V405)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (GENERIC-FUNCTION T))	*/

static object LI31(V410,V411,V412,V413)

object V410;object V411;register object V412;object V413;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V415;
	object V416;
	V415= CMPcar((V410));
	V416= CMPcdr((V410));
	{object V417;
	if(type_of(V412)==t_structure){
	goto T799;}
	goto T797;
	goto T799;
T799:;
	if(!(((V412)->str.str_def)==(VV[66]))){
	goto T797;}
	V417= STREF(object,(V412),4);
	goto T795;
	goto T797;
T797:;{object V419;
	V419= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V412);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V420= vs_base[0];
	if(!((V419)==(CMPcar(V420)))){
	goto T802;}}
	V417= CMPcar(((V412))->cc.cc_turbo[12]);
	goto T795;
	goto T802;
T802:;
	V417= Cnil;
	goto T795;
T795:;
	V421 = (V412);
	V422 = (V413);
	{object V424;
	V424= ((V415))->v.v_self[1];
	if(!(type_of(V424)==t_fixnum)){
	goto T814;}
	if(!((((((V417))->v.v_self[fix((V424))])==(VV[14])?Ct:Cnil))==Cnil)){
	goto T810;}
	goto T811;
	goto T814;
T814:;
	base[0]= (V412);
	base[1]= VV[67];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T810;}}
	goto T811;
T811:;
	base[0]= (V412);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V426= vs_base[0];
	V427 = CMPmake_fixnum((long)length(V426));
	V423= make_cons(V427,Cnil);
	goto T808;
	goto T810;
T810:;
	V423= VV[68];
	goto T808;
T808:;
	{object V428 = (VFUN_NARGS=3,(*(LnkLI212))(V421,V422,V423));
	VMR28(V428)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-GENERIC-FUNCTION T))	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V429;
	object V430;
	object V431;
	object V432;
	check_arg(5);
	V429=(base[0]);
	V430=(base[1]);
	V431=(base[3]);
	V432=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V433;
	object V434;
	object V436;
	object V437;
	object V439;
	object V440;
	object V441;
	object V442;
	object V443;
	register object V445;
	object V446;
	object V448;
	V433= (V432);
	V434= (*(LnkLI220))(VV[69],(V433));
	if(!(type_of((V434))==t_cons)){
	goto T826;}
	V436= CMPcar((V434));
	goto T824;
	goto T826;
T826:;
	V436= Cnil;
	goto T824;
T824:;
	V437= (*(LnkLI220))(VV[52],(V433));
	if(!(type_of((V437))==t_cons)){
	goto T831;}
	V439= CMPcar((V437));
	goto T829;
	goto T831;
T831:;
	V439= Cnil;
	goto T829;
T829:;
	V440= (*(LnkLI239))(VV[70],(V433));
	V441= (*(LnkLI239))(VV[71],(V433));
	V442= (*(LnkLI239))(VV[56],(V433));
	V443= (*(LnkLI220))(VV[72],(V433));
	if(!(type_of((V443))==t_cons)){
	goto T839;}
	V445= CMPcar((V443));
	goto T837;
	goto T839;
T839:;
	V445= Cnil;
	goto T837;
T837:;
	V446= (*(LnkLI220))(VV[73],(V433));
	if(!(type_of((V446))==t_cons)){
	goto T844;}
	V448= CMPcar((V446));
	goto T842;
	goto T844;
T844:;
	V448= Cnil;
	goto T842;
T842:;
	{register object V449;
	object V450;
	V449= CMPcar((V429));
	V450= CMPcdr((V429));
	{object V451;
	if(type_of(base[2])==t_structure){
	goto T854;}
	goto T852;
	goto T854;
T854:;
	if(!(((base[2])->str.str_def)==(VV[74]))){
	goto T852;}
	V451= STREF(object,base[2],4);
	goto T850;
	goto T852;
T852:;{object V453;
	V453= (VV[13]->s.s_dbind);
	base[16]= small_fixnum(14);
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V454= vs_base[0];
	if(!((V453)==(CMPcar(V454)))){
	goto T857;}}
	V451= CMPcar((base[2])->cc.cc_turbo[12]);
	goto T850;
	goto T857;
T857:;
	V451= Cnil;
	goto T850;
T850:;
	if((V434)==Cnil){
	goto T863;}
	base[16]= base[2];
	base[17]= (V436);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	goto T863;
T863:;
	if((V443)==Cnil){
	goto T870;}
	if(!(type_of((V445))==t_symbol)){
	goto T872;}
	V445= (VFUN_NARGS=1,(*(LnkLI259))((V445)));
	goto T872;
T872:;
	base[16]= (V445);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T877;}
	base[17]= (V445);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk260)(Lclptr260);
	vs_top=sup;
	base[16]= vs_base[0];
	base[17]= (VV[75]->s.s_dbind);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk261)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T876;}
	goto T877;
T877:;
	base[16]= VV[72];
	base[17]= (V445);
	base[18]= VV[76];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	vs_top=sup;
	goto T876;
T876:;
	{object V456;
	V456= ((V449))->v.v_self[2];
	if(!(type_of(V456)==t_fixnum)){
	goto T890;}
	(void)(((V451))->v.v_self[fix((V456))]= (V445));
	goto T868;
	goto T890;
T890:;
	base[16]= V445;
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk262)(Lclptr262);
	vs_top=sup;
	goto T868;}
	goto T870;
T870:;
	{object V458;
	{object V459;
	V459= ((V449))->v.v_self[2];
	if(!(type_of(V459)==t_fixnum)){
	goto T897;}
	V458= ((((((V451))->v.v_self[fix((V459))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T894;
	goto T897;
T897:;
	base[16]= base[2];
	base[17]= VV[77];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V458= vs_base[0];}
	goto T894;
T894:;
	if(((V458))==Cnil){
	goto T902;}
	goto T868;
	goto T902;
T902:;
	base[16]= VV[72];
	base[17]= VV[78];
	base[18]= VV[79];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	vs_top=sup;}
	goto T868;
T868:;
	if((V446)==Cnil){
	goto T908;}
	base[16]= (V448);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk263)(Lclptr263);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T911;}
	base[16]= VV[73];
	base[17]= (V448);
	base[18]= VV[80];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	return;
	goto T911;
T911:;
	base[16]= Cnil;
	vs_top=(vs_base=base+16)+1;
	return;
	goto T908;
T908:;
	{object V461;
	{object V462;
	V462= ((V449))->v.v_self[1];
	if(!(type_of(V462)==t_fixnum)){
	goto T920;}
	V461= ((((((V451))->v.v_self[fix((V462))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T917;
	goto T920;
T920:;
	base[16]= base[2];
	base[17]= VV[81];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V461= vs_base[0];}
	goto T917;
T917:;
	if(((V461))==Cnil){
	goto T925;}
	base[16]= (V461);
	vs_top=(vs_base=base+16)+1;
	return;
	goto T925;
T925:;
	base[16]= VV[73];
	base[17]= VV[82];
	base[18]= VV[83];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD REMOVE-NAMED-METHOD (T T))	*/

static object LI34(V469,V470,V471,V472,V473)

object V469;object V470;object V471;object V472;object V473;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V474;
	object V475;
	V474= (V473);
	if(((V474))==Cnil){
	goto T935;}
	{object V476;
	V476= CMPcar((V474));
	V474= CMPcdr((V474));
	V475= (V476);
	goto T933;}
	goto T935;
T935:;
	V475= Cnil;
	goto T933;
T933:;
	{register object V477;
	object V478;
	V477= Cnil;
	V478= Cnil;
	base[1]= (V471);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T941;}
	base[2]= (V471);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V477= vs_base[0];
	base[1]= (V477);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T942;}
	goto T941;
T941:;
	base[1]= VV[85];
	base[2]= (V471);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V479 = vs_base[0];
	VMR30(V479)}
	goto T942;
T942:;
	V480 = (V477);
	V481 = (V475);
	V482= (*(LnkLI266))((V472));
	V478= (VFUN_NARGS=4,(*(LnkLI265))(V480,V481,/* INLINE-ARGS */V482,Cnil));
	if(((V478))!=Cnil){
	goto T953;}
	base[1]= VV[86];
	base[2]= (V477);
	base[3]= (V472);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	{object V483 = vs_base[0];
	VMR30(V483)}
	goto T953;
T953:;
	base[1]= (V477);
	base[2]= (V478);
	{object V484 = simple_symlispcall(VV[267],base+1,2);
	VMR30(V484)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REAL-ADD-NAMED-METHOD	*/

static object LI35(object V488,object V487,object V486,object V485,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V489;
	object V490;
	object V491;
	object V492;
	object V493;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V489= V488;
	V490= V487;
	V491= V486;
	V492= V485;
	narg= narg - 4;
	V494 = list_vector_new(narg,first,ap);
	V493= V494;
	{object V495;
	object V496;
	object V497;
	object V498;
	base[4]= (V489);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk268)();
	vs_top=sup;
	V495= vs_base[0];
	V496= (*(LnkLI266))((V491));
	base[4]= (V489);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk269)();
	vs_top=sup;
	V497= vs_base[0];
	base[4]=VV[270]->s.s_gfdef;
	base[5]= (*(LnkLI149))((V497));
	base[6]= VV[51];
	base[7]= (V490);
	base[8]= VV[53];
	base[9]= (V496);
	base[10]= VV[52];
	base[11]= (V492);
	{object V499;
	V499= (V493);
	 vs_top=base+12;
	 while(V499!=Cnil)
	 {vs_push((V499)->c.c_car);V499=(V499)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	V498= vs_base[0];
	base[4]= (V495);
	base[5]= (V498);
	{object V500 = simple_symlispcall(VV[271],base+4,2);
	VMR31(V500)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-SPECIALIZABLE	*/

static object LI36(object V501,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{register object V502;
	register object V503;
	object V504;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V502= V501;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI36key,first,ap);
	if(Vcs[1]==0){
	V503= Cnil;
	V504= Cnil;
	}else{
	V503=(Vcs[1]);
	V504= Ct;}
	{object V505;
	V505= (((((V504))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V505))==Cnil){
	goto T981;}
	goto T978;
	goto T981;
T981:;
	{object V506;
	base[0]= (V502);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	V507= vs_base[0];
	V506= ((V507)==Cnil?Ct:Cnil);
	if(((V506))==Cnil){
	goto T987;}
	goto T978;
	goto T987;
T987:;
	base[0]= VV[87];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T990;}
	base[0]= (V502);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V503= vs_base[0];
	goto T978;
	goto T990;
T990:;
	base[0]= VV[88];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;}}
	goto T978;
T978:;
	{register object V508;
	register object V509;
	base[1]= (V502);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T997;}
	base[0]= Cnil;
	goto T996;
	goto T997;
T997:;
	base[1]= (V502);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T996;
T996:;
	base[1]= VV[89];
	base[2]= VV[69];
	base[3]= (V502);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	V508= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	V509= small_fixnum(0);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1006;}
	{object V510 = (base[0]->c.c_car);
	VMR32(V510)}
	goto T1006;
T1006:;
	{register object V511;
	register object V512;
	V511= (V503);
	V512= CMPcar((V511));
	goto T1013;
T1013:;
	if(!(((V511))==Cnil)){
	goto T1014;}
	goto T1009;
	goto T1014;
T1014:;
	{register object x= (V512),V513= VV[90];
	while(V513!=Cnil)
	if(x==(V513->c.c_car)){
	goto T1021;
	}else V513=V513->c.c_cdr;
	goto T1020;}
	goto T1021;
T1021:;
	goto T1009;
	goto T1020;
T1020:;
	V509= number_plus((V509),small_fixnum(1));
	V511= CMPcdr((V511));
	V512= CMPcar((V511));
	goto T1013;}
	goto T1009;
T1009:;
	V516= ({object _tmp=get(VV[273],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[273])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[273])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V517 = V508;
	V518 = V502;
	(void)((
	V519 = V516,
	(type_of(V519) == t_sfun ?(*((V519)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V519)==t_vfun) ?
	(*((V519)->sfn.sfn_self)):
	(fcall.fun=(V519),fcalln))(V517,V518)));
	base[1]= (V508);
	base[2]= (V502);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	if(((V504))==Cnil){
	goto T1033;}
	V522= ({object _tmp=get(VV[274],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[274])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[274])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V523 = V503;
	V524 = V508;
	(void)((
	V525 = V522,
	(type_of(V525) == t_sfun ?(*((V525)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V525)==t_vfun) ?
	(*((V525)->sfn.sfn_self)):
	(fcall.fun=(V525),fcalln))(V523,V524)));
	goto T1033;
T1033:;
	if(((base[0]->c.c_car))==Cnil){
	goto T1037;}
	base[1]=(VV[275]->s.s_gfdef);
	base[2]= (V502);
	base[3]= Cnil;
	base[5]= (V509);
	base[6]= VV[91];
	base[7]= Ct;
	vs_top=(vs_base=base+5)+3;
	Lmake_list();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V503);
	V526= 
	make_cclosure_new(LC123,Cnil,base[0],Cdata);
	base[6]= list(2,VV[54],V526);
	(void)simple_lispcall(base+1,5);
	goto T1037;
T1037:;
	{object V527 = (V508);
	VMR32(V527)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-GET-METHOD	*/

static object LI37(object V530,object V529,object V528,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V531;
	register object V532;
	register object V533;
	object V534;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V531= V530;
	V532= V529;
	V533= V528;
	narg = narg - 3;
	if (narg <= 0) goto T1049;
	else {
	V534= first;}
	--narg; goto T1050;
	goto T1049;
T1049:;
	V534= Ct;
	goto T1050;
T1050:;
	{object V535;
	{register object V536;
	register object V537;
	base[2]= (V531);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V536= vs_base[0];
	V537= CMPcar((V536));
	goto T1057;
T1057:;
	if(!(((V536))==Cnil)){
	goto T1058;}
	V535= Cnil;
	goto T1052;
	goto T1058;
T1058:;
	V538 = (V532);
	base[2]= (V537);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V539= vs_base[0];
	if(!(equal(V538,V539))){
	goto T1062;}
	base[2]= (VV[276]->s.s_gfdef);
	base[3]= (V533);
	base[5]= (V537);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk278)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1062;}
	V535= (V537);
	goto T1052;
	goto T1062;
T1062:;
	V536= CMPcdr((V536));
	V537= CMPcar((V536));
	goto T1057;}
	goto T1052;
T1052:;
	if(((V535))==Cnil){
	goto T1079;}
	{object V540 = (V535);
	VMR33(V540)}
	goto T1079;
T1079:;
	if(((V534))!=Cnil){
	goto T1082;}
	{object V541 = Cnil;
	VMR33(V541)}
	goto T1082;
T1082:;
	base[0]= VV[92];
	base[1]= (V531);
	base[2]= (V532);
	base[3]= (V533);
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V542 = vs_base[0];
	VMR33(V542)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for (FAST-METHOD COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO (STANDARD-GENERIC-FUNCTION))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V543;
	object V544;
	register object V545;
	check_arg(3);
	V543=(base[0]);
	V544=(base[1]);
	V545=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V547;
	register object V548;
	register object V549;
	object V550;
	base[3]= (V545);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V550= vs_base[0];
	V547= Cnil;
	V548= Cnil;
	V549= Cnil;
	{register object V551;
	register object V552;
	V551= (V550);
	V552= CMPcar((V551));
	goto T1097;
T1097:;
	if(!(((V551))==Cnil)){
	goto T1098;}
	goto T1093;
	goto T1098;
T1098:;
	base[4]= (V545);
	base[5]= (V552);
	base[6]= (V547);
	base[7]= (V548);
	base[8]= (V549);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk279)();
	if(vs_base<vs_top){
	V547= vs_base[0];
	vs_base++;
	}else{
	V547= Cnil;}
	if(vs_base<vs_top){
	V548= vs_base[0];
	vs_base++;
	}else{
	V548= Cnil;}
	if(vs_base<vs_top){
	V549= vs_base[0];
	}else{
	V549= Cnil;}
	vs_top=sup;
	V551= CMPcdr((V551));
	V552= CMPcar((V551));
	goto T1097;}
	goto T1093;
T1093:;
	base[3]= (V547);
	base[4]= (V548);
	base[6]= (V549);
	base[7]= (VV[280]->s.s_gfdef);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk281)();
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
	{object V553;
	object V554;
	object V555;
	object V556;
	object V557;
	check_arg(5);
	V553=(base[0]);
	V554=(base[1]);
	V555=(base[2]);
	V556=(base[3]);
	V557=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V558;
	V558= 0;
	{register object V559;
	register object V560;
	base[7]= (V554);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V559= vs_base[0];
	V560= CMPcar((V559));
	goto T1125;
T1125:;
	if(!(((V559))==Cnil)){
	goto T1126;}
	goto T1120;
	goto T1126;
T1126:;
	if(!(((V560))==(VV[93]))){
	goto T1132;}
	goto T1120;
	goto T1132;
T1132:;
	{register object x= (V560),V561= VV[94];
	while(V561!=Cnil)
	if(x==(V561->c.c_car)){
	goto T1136;
	}else V561=V561->c.c_cdr;
	goto T1135;}
	goto T1136;
T1136:;
	V556= Ct;
	goto T1120;
	goto T1135;
T1135:;
	{register object V562;
	{register object x= (V560),V563= VV[90];
	while(V563!=Cnil)
	if(x==(V563->c.c_car)){
	V562= V563;
	goto T1138;
	}else V563=V563->c.c_cdr;
	V562= Cnil;}
	goto T1138;
T1138:;
	if(((V562))==Cnil){
	goto T1140;}
	goto T1130;
	goto T1140;
T1140:;
	V558= (long)(V558)+(1);}
	goto T1130;
T1130:;
	V559= CMPcdr((V559));
	V560= CMPcar((V559));
	goto T1125;}
	goto T1120;
T1120:;
	{register object V564;
	object V565;
	register object V566;
	object V567;
	base[6]= (V554);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V564= vs_base[0];
	V565= Cnil;
	V566= small_fixnum(0);
	V567= Cnil;
	goto T1155;
T1155:;
	{object V568;
	if(!(((V564))==Cnil)){
	goto T1161;}
	goto T1148;
	goto T1161;
T1161:;
	V568= CMPcar((V564));
	V564= CMPcdr((V564));
	V565= (V568);}
	{object V569;
	V569= (V566);
	V566= number_plus((V566),small_fixnum(1));
	V567= (V569);}
	if(((V565))==((VV[95]->s.s_dbind))){
	goto T1156;}
	base[6]= V567;
	base[7]= (V557);
	vs_top=(vs_base=base+6)+2;
	Ladjoin();
	vs_top=sup;
	V557= vs_base[0];
	goto T1156;
T1156:;
	goto T1155;}
	goto T1148;
T1148:;
	if((V555)!=Cnil){
	V571= (V555);
	goto T1176;}
	V571= CMPmake_fixnum(V558);
	goto T1176;
T1176:;
	V572 = CMPmake_fixnum(V558);
	base[5]= (number_compare(V571,V572)<=0?(V571):V572);
	if((V556)!=Cnil){
	base[6]= (V556);
	goto T1177;}
	if((V555)==Cnil){
	base[6]= Cnil;
	goto T1177;}
	V573 = CMPmake_fixnum(V558);
	base[6]= (number_compare((V555),V573)!=0?Ct:Cnil);
	goto T1177;
T1177:;
	base[7]= (V557);
	vs_top=(vs_base=base+5)+3;
	return;}
	}
}
/*	local entry for function MAKE-DISCRIMINATING-FUNCTION-ARGLIST	*/

static object LI40(V576,V577)

object V576;object V577;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{register object V579;
	register object V580;
	V579= Cnil;
	V580= Cnil;
	{register object V581;
	register object V583;
	V581= small_fixnum(0);
	V583= Cnil;
	goto T1186;
T1186:;
	{register object V584;
	if(!(number_compare((V581),V576)<0)){
	goto T1192;}
	V584= (V581);
	goto T1190;
	goto T1192;
T1192:;
	goto T1182;
	goto T1190;
T1190:;
	V581= number_plus((V581),small_fixnum(1));
	V583= (V584);}
	{register object V585;
	base[1]= Cnil;
	base[2]= VV[96];
	base[3]= (V583);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V585= vs_base[0];
	if(((V579))!=Cnil){
	goto T1202;}
	V580= make_cons((V585),Cnil);
	V579= (V580);
	goto T1187;
	goto T1202;
T1202:;
	V587= make_cons((V585),Cnil);
	((V580))->c.c_cdr = /* INLINE-ARGS */V587;
	V586= (V580);
	V580= CMPcdr(V586);}
	goto T1187;
T1187:;
	goto T1186;}
	goto T1182;
T1182:;
	V578= (V579);}
	if(((V577))==Cnil){
	goto T1211;}
	base[0]= VV[98];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V589= vs_base[0];
	V588= list(2,VV[97],V589);
	goto T1209;
	goto T1211;
T1211:;
	V588= Cnil;
	goto T1209;
T1209:;
	{object V590 = nconc(V578,V588);
	VMR36(V590)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-LAMBDA-LIST (GENERIC-FUNCTION))	*/

static object LI41(V594,V595,V596)

object V594;object V595;object V596;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{object V598 = (*(LnkLI283))((V596));
	VMR37(V598)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD GF-FAST-METHOD-FUNCTION-P (STANDARD-GENERIC-FUNCTION))	*/

static object LI42(V602,V603,V604)

object V602;object V603;register object V604;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V606;
	object V607;
	V606= CMPcar((V602));
	V607= CMPcdr((V602));
	{object V608;
	if(type_of(V604)==t_structure){
	goto T1228;}
	goto T1226;
	goto T1228;
T1228:;
	if(!(((V604)->str.str_def)==(VV[99]))){
	goto T1226;}
	V608= STREF(object,(V604),4);
	goto T1224;
	goto T1226;
T1226:;{object V610;
	V610= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V604);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V611= vs_base[0];
	if(!((V610)==(CMPcar(V611)))){
	goto T1231;}}
	V608= CMPcar(((V604))->cc.cc_turbo[12]);
	goto T1224;
	goto T1231;
T1231:;
	V608= Cnil;
	goto T1224;
T1224:;
	{register object V613;
	V613= ((V606))->v.v_self[1];
	if(!(type_of(V613)==t_fixnum)){
	goto T1242;}
	V613= ((V608))->v.v_self[fix((V613))];
	goto T1240;
	goto T1242;
T1242:;
	V613= VV[14];
	goto T1240;
T1240:;
	if(!(((V613))==(VV[14]))){
	goto T1245;}
	base[0]= (V604);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V612= vs_base[0];
	goto T1237;
	goto T1245;
T1245:;
	V612= (V613);}
	goto T1237;
T1237:;
	{object V615 = STREF(object,V612,40);
	VMR38(V615)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI43(V620,V621,V622,V623)

object V620;object V621;register object V622;object V623;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{object V625;
	object V627;
	object V628;
	V625= (*(LnkLI220))(VV[52],V623);
	if(!(type_of((V625))==t_cons)){
	goto T1253;}
	V627= CMPcar((V625));
	goto T1251;
	goto T1253;
T1253:;
	V627= Cnil;
	goto T1251;
T1251:;
	V628= (*(LnkLI239))(VV[70],V623);
	{object V629;
	object V630;
	V629= CMPcar((V620));
	V630= CMPcdr((V620));
	{object V631;
	if(type_of(V622)==t_structure){
	goto T1264;}
	goto T1262;
	goto T1264;
T1264:;
	if(!(((V622)->str.str_def)==(VV[101]))){
	goto T1262;}
	V631= STREF(object,(V622),4);
	goto T1260;
	goto T1262;
T1262:;{object V633;
	V633= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V622);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V634= vs_base[0];
	if(!((V633)==(CMPcar(V634)))){
	goto T1267;}}
	V631= CMPcar(((V622))->cc.cc_turbo[12]);
	goto T1260;
	goto T1267;
T1267:;
	V631= Cnil;
	goto T1260;
T1260:;
	if((V625)==Cnil){
	goto T1276;}
	(void)((VFUN_NARGS=5,(*(LnkLI285))((V622),VV[52],(V627),VV[70],(V628))));
	goto T1274;
	goto T1276;
T1276:;
	(void)((VFUN_NARGS=1,(*(LnkLI285))((V622))));
	goto T1274;
T1274:;
	{register object V637;
	V637= ((V629))->v.v_self[1];
	if(!(type_of(V637)==t_fixnum)){
	goto T1286;}
	V637= ((V631))->v.v_self[fix((V637))];
	goto T1284;
	goto T1286;
T1286:;
	V637= VV[14];
	goto T1284;
T1284:;
	if(!(((V637))==(VV[14]))){
	goto T1289;}
	base[3]= (V622);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V636= vs_base[0];
	goto T1281;
	goto T1289;
T1289:;
	V636= (V637);}
	goto T1281;
T1281:;
	if(((*(LnkLI286))(V636))==Cnil){
	goto T1279;}
	{object V639 = (VFUN_NARGS=1,(*(LnkLI287))((V622)));
	VMR39(V639)}
	goto T1279;
T1279:;
	{object V640 = Cnil;
	VMR39(V640)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI44(V645,V646,V647,V648)

object V645;object V646;register object V647;object V648;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V651;
	object V653;
	object V654;
	object V656;
	V651= (*(LnkLI220))(VV[52],V648);
	if(!(type_of((V651))==t_cons)){
	goto T1297;}
	V653= CMPcar((V651));
	goto T1295;
	goto T1297;
T1297:;
	V653= Cnil;
	goto T1295;
T1295:;
	V654= (*(LnkLI220))(VV[70],V648);
	if(!(type_of((V654))==t_cons)){
	goto T1302;}
	V656= CMPcar((V654));
	goto T1300;
	goto T1302;
T1302:;
	V656= Cnil;
	goto T1300;
T1300:;
	{object V657;
	object V658;
	V657= CMPcar((V645));
	V658= CMPcdr((V645));
	{object V659;
	if(type_of(V647)==t_structure){
	goto T1312;}
	goto T1310;
	goto T1312;
T1312:;
	if(!(((V647)->str.str_def)==(VV[102]))){
	goto T1310;}
	V659= STREF(object,(V647),4);
	goto T1308;
	goto T1310;
T1310:;{object V661;
	V661= (VV[13]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V647);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V662= vs_base[0];
	if(!((V661)==(CMPcar(V662)))){
	goto T1315;}}
	V659= CMPcar(((V647))->cc.cc_turbo[12]);
	goto T1308;
	goto T1315;
T1315:;
	V659= Cnil;
	goto T1308;
T1308:;
	if((V651)==Cnil){
	goto T1324;}
	if((V654)==Cnil){
	goto T1327;}
	(void)((VFUN_NARGS=5,(*(LnkLI285))((V647),VV[52],(V653),VV[70],(V656))));
	goto T1322;
	goto T1327;
T1327:;
	(void)((VFUN_NARGS=3,(*(LnkLI285))((V647),VV[52],(V653))));
	goto T1322;
	goto T1324;
T1324:;
	(void)((VFUN_NARGS=1,(*(LnkLI285))((V647))));
	goto T1322;
T1322:;
	{register object V665;
	V665= ((V657))->v.v_self[1];
	if(!(type_of(V665)==t_fixnum)){
	goto T1340;}
	V665= ((V659))->v.v_self[fix((V665))];
	goto T1338;
	goto T1340;
T1340:;
	V665= VV[14];
	goto T1338;
T1338:;
	if(!(((V665))==(VV[14]))){
	goto T1343;}
	base[4]= (V647);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V664= vs_base[0];
	goto T1335;
	goto T1343;
T1343:;
	V664= (V665);}
	goto T1335;
T1335:;
	if(((*(LnkLI286))(V664))==Cnil){
	goto T1333;}
	if((V648)==Cnil){
	goto T1347;}
	if(V651!=Cnil){
	if((V651)==Cnil){
	goto T1330;}
	goto T1331;}
	if((CMPcddr(V648))==Cnil){
	goto T1330;}
	goto T1331;
	goto T1347;
T1347:;
	goto T1330;
	goto T1333;
T1333:;
	goto T1330;
	goto T1331;
T1331:;
	{object V667 = (VFUN_NARGS=1,(*(LnkLI287))((V647)));
	VMR40(V667)}
	goto T1330;
T1330:;
	{object V668 = Cnil;
	VMR40(V668)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-METHODS	*/

static object LI45(V671,V672)

register object V671;register object V672;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	V675= ({object _tmp=get(VV[257],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[257])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[257])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V676 = Cnil;
	V677 = V671;
	(void)((
	V678 = V675,
	(type_of(V678) == t_sfun ?(*((V678)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V678)==t_vfun) ?
	(*((V678)->sfn.sfn_self)):
	(fcall.fun=(V678),fcalln))(V676,V677)));
	goto T1352;
T1352:;
	if(((V672))!=Cnil){
	goto T1354;}
	{object V679 = (V671);
	VMR41(V679)}
	goto T1354;
T1354:;
	V680 = (V671);
	{register object V682;
	V682= CMPcar((V672));
	V672= CMPcdr((V672));
	V681= (V682);}
	V683 = (V672);
	(void)((VFUN_NARGS=3,(*(LnkLI288))(V680,V681,V683)));
	goto T1352;
	return Cnil;
}
/*	local entry for function REAL-ADD-METHOD	*/

static object LI46(object V685,object V684,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB42 VMS42 VMV42
	{register object V686;
	register object V687;
	object V688;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V686= V685;
	V687= V684;
	narg = narg - 2;
	if (narg <= 0) goto T1362;
	else {
	V688= first;}
	--narg; goto T1363;
	goto T1362;
T1362:;
	V688= Cnil;
	goto T1363;
T1363:;
	base[0]= (V687);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1366;}
	base[0]= VV[103];
	base[1]= (V687);
	base[3]= (V687);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V689 = vs_base[0];
	VMR42(V689)}
	goto T1366;
T1366:;
	{object V690;
	object V691;
	object V692;
	object V693;
	base[4]= (V686);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V690= vs_base[0];
	base[4]= (V687);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V691= vs_base[0];
	base[4]= (V687);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V692= vs_base[0];
	V693= (VFUN_NARGS=4,(*(LnkLI265))((V686),(V691),(V692),Cnil));
	if(((V693))==Cnil){
	goto T1380;}
	base[4]= (V686);
	base[5]= (V693);
	(void)simple_symlispcall(VV[267],base+4,2);
	goto T1380;
T1380:;
	V696= ({object _tmp=get(VV[227],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[227])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[227])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V697 = V686;
	V698 = V687;
	(void)((
	V699 = V696,
	(type_of(V699) == t_sfun ?(*((V699)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V699)==t_vfun) ?
	(*((V699)->sfn.sfn_self)):
	(fcall.fun=(V699),fcalln))(V697,V698)));
	{object V702;
	base[5]= V687;
	base[7]= V686;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V702= vs_base[0];
	V703= ({object _tmp=get(VV[257],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[257])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[257])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V704 = (V702);
	V705 = V686;
	(void)((
	V706 = V703,
	(type_of(V706) == t_sfun ?(*((V706)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V706)==t_vfun) ?
	(*((V706)->sfn.sfn_self)):
	(fcall.fun=(V706),fcalln))(V704,V705)));}
	{register object V707;
	register object V708;
	V707= (V692);
	V708= CMPcar((V707));
	goto T1397;
T1397:;
	if(!(((V707))==Cnil)){
	goto T1398;}
	goto T1393;
	goto T1398;
T1398:;
	base[5]= (V708);
	base[6]= (V687);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	V707= CMPcdr((V707));
	V708= CMPcar((V707));
	goto T1397;}
	goto T1393;
T1393:;
	(void)((VFUN_NARGS=3,(*(LnkLI285))((V686),VV[104],(V687))));
	if(((V688))!=Cnil){
	goto T1411;}
	{register object x= (V690),V709= VV[105];
	while(V709!=Cnil)
	if(eql(x,V709->c.c_car)){
	goto T1416;
	}else V709=V709->c.c_cdr;
	goto T1414;}
	goto T1416;
T1416:;
	base[4]= (*(LnkLI290))(CMPcar((V692)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk291)();
	vs_top=sup;
	goto T1414;
T1414:;
	(void)((VFUN_NARGS=1,(*(LnkLI287))((V686))));
	goto T1411;
T1411:;
	{object V710 = (V687);
	VMR42(V710)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function REAL-REMOVE-METHOD	*/

static object LI47(V713,V714)

register object V713;register object V714;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	V715 = (V713);
	base[0]= (V714);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	V716= vs_base[0];
	if(!((((V715)==(V716)?Ct:Cnil))==Cnil)){
	goto T1419;}
	base[0]= VV[106];
	base[1]= (V714);
	base[3]= (V714);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V717 = vs_base[0];
	VMR43(V717)}
	goto T1419;
T1419:;
	{object V718;
	object V719;
	object V720;
	object V721;
	base[4]= (V713);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V718= vs_base[0];
	base[4]= (V714);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V719= vs_base[0];
	base[4]= (V713);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V720= vs_base[0];
	base[4]= (V714);
	base[5]= (V720);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk292)();
	vs_top=sup;
	V721= vs_base[0];
	V724= ({object _tmp=get(VV[227],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[227])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[227])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V725 = Cnil;
	V726 = V714;
	(void)((
	V727 = V724,
	(type_of(V727) == t_sfun ?(*((V727)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V727)==t_vfun) ?
	(*((V727)->sfn.sfn_self)):
	(fcall.fun=(V727),fcalln))(V725,V726)));
	V730= ({object _tmp=get(VV[257],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[257])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[257])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V731 = V721;
	V732 = V713;
	(void)((
	V733 = V730,
	(type_of(V733) == t_sfun ?(*((V733)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V733)==t_vfun) ?
	(*((V733)->sfn.sfn_self)):
	(fcall.fun=(V733),fcalln))(V731,V732)));
	{register object V734;
	register object V735;
	base[6]= (V714);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V734= vs_base[0];
	V735= CMPcar((V734));
	goto T1445;
T1445:;
	if(!(((V734))==Cnil)){
	goto T1446;}
	goto T1440;
	goto T1446;
T1446:;
	base[6]= (V735);
	base[7]= (V714);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V734= CMPcdr((V734));
	V735= CMPcar((V734));
	goto T1445;}
	goto T1440;
T1440:;
	(void)((VFUN_NARGS=1,(*(LnkLI285))((V713))));
	{register object x= (V718),V736= VV[107];
	while(V736!=Cnil)
	if(eql(x,V736->c.c_car)){
	goto T1461;
	}else V736=V736->c.c_cdr;
	goto T1459;}
	goto T1461;
T1461:;
	base[4]= (*(LnkLI290))(CMPcar((V719)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk291)();
	vs_top=sup;
	goto T1459;
T1459:;
	(void)((VFUN_NARGS=1,(*(LnkLI287))((V713))));
	{object V737 = (V713);
	VMR43(V737)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-APPLICABLE-METHODS-FUNCTION	*/

static object LI48(V740,V741)

object V740;object V741;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	base[1]= (V740);
	base[3]= (V740);
	base[4]= (V741);
	base[5]= VV[108];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk294)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V742 = vs_base[0];
	VMR44(V742)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-APPLICABLE-METHODS (GENERIC-FUNCTION T))	*/

static object LI49(V747,V748,V749,V750)

object V747;object V748;object V749;object V750;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	base[1]= (V749);
	base[3]= (V749);
	base[4]= (V750);
	base[5]= VV[108];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk294)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V752 = vs_base[0];
	VMR45(V752)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-APPLICABLE-METHODS-USING-CLASSES (GENERIC-FUNCTION T))	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V753;
	object V754;
	object V755;
	object V756;
	check_arg(4);
	V753=(base[0]);
	V754=(base[1]);
	V755=(base[2]);
	V756=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V755);
	base[6]= (V755);
	base[7]= (V756);
	base[8]= VV[109];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk294)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk295)();
	return;
	}
}
/*	local entry for function PROCLAIM-INCOMPATIBLE-SUPERCLASSES	*/

static object LI51(V759)

object V759;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V760;
	object V761= (V759);
	if(V761==Cnil){
	V759= Cnil;
	goto T1488;}
	base[0]=V760=MMcons(Cnil,Cnil);
	goto T1489;
T1489:;
	if(!(type_of((V761->c.c_car))==t_symbol)){
	goto T1492;}
	(V760->c.c_car)= (VFUN_NARGS=1,(*(LnkLI259))((V761->c.c_car)));
	goto T1490;
	goto T1492;
T1492:;
	(V760->c.c_car)= (V761->c.c_car);
	goto T1490;
T1490:;
	if((V761=MMcdr(V761))==Cnil){
	V759= base[0];
	goto T1488;}
	V760=MMcdr(V760)=MMcons(Cnil,Cnil);
	goto T1489;}
	goto T1488;
T1488:;
	{register object V763;
	register object V764;
	V763= (V759);
	V764= CMPcar((V763));
	goto T1497;
T1497:;
	if(!(((V763))==Cnil)){
	goto T1498;}
	{object V765 = Cnil;
	VMR47(V765)}
	goto T1498;
T1498:;
	{register object V766;
	register object V767;
	V766= (V759);
	V767= CMPcar((V766));
	goto T1506;
T1506:;
	if(!(((V766))==Cnil)){
	goto T1507;}
	goto T1502;
	goto T1507;
T1507:;
	if(((V764))==((V767))){
	goto T1511;}
	{register object V768;
	register object V769;
	register object V770;
	V768= (V767);
	V769= (V764);
	base[3]= (V768);
	base[5]= (V769);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V770= vs_base[0];
	V771= ({object _tmp=get(VV[296],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[296])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[296])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V772 = (V770);
	V773 = (V769);
	(void)((
	V774 = V771,
	(type_of(V774) == t_sfun ?(*((V774)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V774)==t_vfun) ?
	(*((V774)->sfn.sfn_self)):
	(fcall.fun=(V774),fcalln))(V772,V773)));}
	goto T1511;
T1511:;
	V766= CMPcdr((V766));
	V767= CMPcar((V766));
	goto T1506;}
	goto T1502;
T1502:;
	V763= CMPcdr((V763));
	V764= CMPcar((V763));
	goto T1497;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUPERCLASSES-COMPATIBLE-P	*/

static object LI52(V777,V778)

object V777;object V778;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V779;
	register object V780;
	base[0]= (V777);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V779= vs_base[0];
	base[0]= (V778);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V780= vs_base[0];
	{register object V781;
	register object V782;
	V781= (V779);
	V782= CMPcar((V781));
	goto T1538;
T1538:;
	if(!(((V781))==Cnil)){
	goto T1539;}
	{object V783 = Ct;
	VMR48(V783)}
	goto T1539;
T1539:;
	{register object V784;
	register object V785;
	base[3]= (V782);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V784= vs_base[0];
	V785= CMPcar((V784));
	goto T1548;
T1548:;
	if(!(((V784))==Cnil)){
	goto T1549;}
	goto T1543;
	goto T1549;
T1549:;
	{register object x= (V785),V786= (V780);
	while(V786!=Cnil)
	if(x==(V786->c.c_car)){
	goto T1555;
	}else V786=V786->c.c_cdr;
	goto T1553;}
	goto T1555;
T1555:;
	{object V787 = Cnil;
	VMR48(V787)}
	goto T1553;
T1553:;
	V784= CMPcdr((V784));
	V785= CMPcar((V784));
	goto T1548;}
	goto T1543;
T1543:;
	V781= CMPcdr((V781));
	V782= CMPcar((V781));
	goto T1538;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (SPECIALIZER SPECIALIZER))	*/

static object LI53(V792,V793,V794,V795)

object V792;object V793;object V794;object V795;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V797 = Cnil;
	VMR49(V797)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS CLASS))	*/

static object LI54(V802,V803,V804,V805)

object V802;object V803;object V804;object V805;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V807 = (((V804))==((V805))?Ct:Cnil);
	VMR50(V807)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (CLASS))	*/

static object LI55(V811,V812,V813)

object V811;object V812;object V813;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V815 = (V813);
	VMR51(V815)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS-EQ-SPECIALIZER CLASS-EQ-SPECIALIZER))	*/

static object LI56(V820,V821,V822,V823)

object V820;object V821;object V822;object V823;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]= (V822);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk297)(Lclptr297);
	vs_top=sup;
	V825= vs_base[0];
	base[0]= (V823);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk297)(Lclptr297);
	vs_top=sup;
	V826= vs_base[0];
	{object V827 = ((V825)==(V826)?Ct:Cnil);
	VMR52(V827)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (EQL-SPECIALIZER EQL-SPECIALIZER))	*/

static object LI57(V832,V833,V834,V835)

object V832;object V833;object V834;object V835;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V834);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk298)(Lclptr298);
	vs_top=sup;
	V837= vs_base[0];
	base[0]= (V835);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk298)(Lclptr298);
	vs_top=sup;
	V838= vs_base[0];
	{object V839 = ((V837)==(V838)?Ct:Cnil);
	VMR53(V839)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (EQL-SPECIALIZER))	*/

static object LI58(V843,V844,V845)

object V843;object V844;register object V845;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V847;
	object V848;
	V847= CMPcar((V843));
	V848= CMPcdr((V843));
	{object V849;
	if(type_of(V845)==t_structure){
	goto T1603;}
	goto T1601;
	goto T1603;
T1603:;
	if(!(((V845)->str.str_def)==(VV[110]))){
	goto T1601;}
	V849= STREF(object,(V845),4);
	goto T1599;
	goto T1601;
T1601:;{object V851;
	V851= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V845);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V852= vs_base[0];
	if(!((V851)==(CMPcar(V852)))){
	goto T1606;}}
	V849= CMPcar(((V845))->cc.cc_turbo[12]);
	goto T1599;
	goto T1606;
T1606:;
	V849= Cnil;
	goto T1599;
T1599:;
	{register object V854;
	V854= ((V847))->v.v_self[1];
	if(!(type_of(V854)==t_fixnum)){
	goto T1617;}
	V854= ((V849))->v.v_self[fix((V854))];
	goto T1615;
	goto T1617;
T1617:;
	V854= VV[14];
	goto T1615;
T1615:;
	if(!(((V854))==(VV[14]))){
	goto T1620;}
	base[0]= (V845);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	V853= vs_base[0];
	goto T1612;
	goto T1620;
T1620:;
	V853= (V854);}
	goto T1612;
T1612:;
	{object V856 = (*(LnkLI149))(V853);
	VMR54(V856)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for TYPES-FROM-ARGUMENTS	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	{object V857;
	register object V858;
	register object V859;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V857=(base[0]);
	V858=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1623;}
	V859=(base[2]);
	vs_top=sup;
	goto T1624;
	goto T1623;
T1623:;
	V859= Cnil;
	goto T1624;
T1624:;
	{object V860;
	object V861;
	object V862;
	object V863;
	object V864;
	base[3]= (V857);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk300)();
	if(vs_base>=vs_top){vs_top=sup;goto T1628;}
	V860= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1629;}
	V861= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1630;}
	V862= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1631;}
	V863= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1632;}
	V864= vs_base[0];
	vs_top=sup;
	goto T1633;
	goto T1628;
T1628:;
	V860= Cnil;
	goto T1629;
T1629:;
	V861= Cnil;
	goto T1630;
T1630:;
	V862= Cnil;
	goto T1631;
T1631:;
	V863= Cnil;
	goto T1632;
T1632:;
	V864= Cnil;
	goto T1633;
T1633:;
	{register object V865;
	V865= Cnil;
	{long V866;
	register long V867;
	V866= fix((V860));
	V867= 0;
	goto T1638;
T1638:;
	if(!((V867)>=(V866))){
	goto T1639;}
	goto T1634;
	goto T1639;
T1639:;
	if(((V858))!=Cnil){
	goto T1642;}
	base[3]= VV[111];
	base[5]= (V857);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V860);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
	goto T1642;
T1642:;
	{register object V868;
	{register object V869;
	V869= CMPcar((V858));
	V858= CMPcdr((V858));
	V868= (V869);}
	{register object V870;
	if(((V859))==Cnil){
	goto T1656;}
	V870= list(2,(V859),(V868));
	goto T1654;
	goto T1656;
T1656:;
	V870= (V868);
	goto T1654;
T1654:;
	V865= make_cons((V870),(V865));}}
	V867= (long)(V867)+1;
	goto T1638;}
	goto T1634;
T1634:;
	base[3]= nreverse((V865));
	base[4]= (V864);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function GET-WRAPPERS-FROM-CLASSES	*/

static object LI60(V875,V876,V877,V878)

object V875;object V876;object V877;object V878;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V879;
	register object V880;
	register object V881;
	V879= (V876);
	V880= (V879);
	V881= (V878);
	{register object V882;
	register object V883;
	if(!(type_of((V877))==t_cons||((V877))==Cnil)){
	goto T1670;}
	V882= (V877);
	goto T1668;
	goto T1670;
T1670:;
	V882= make_cons((V877),Cnil);
	goto T1668;
T1668:;
	V883= CMPcar((V882));
	goto T1674;
T1674:;
	if(!(((V882))==Cnil)){
	goto T1675;}
	goto T1667;
	goto T1675;
T1675:;
	if((Ct)==(CMPcar((V881)))){
	goto T1679;}
	{register object V884;
	base[2]= (V883);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V884= vs_base[0];
	if(((V884))!=Cnil){
	goto T1684;}
	{object V885 = Cnil;
	VMR56(V885)}
	goto T1684;
T1684:;
	if(!(eql((V875),small_fixnum(1)))){
	goto T1688;}
	V879= (V884);
	goto T1679;
	goto T1688;
T1688:;
	{register object V887;
	V887= (V884);
	(V880)->c.c_car = (V887);}
	V880= CMPcdr((V880));}
	goto T1679;
T1679:;
	V881= CMPcdr((V881));
	V882= CMPcdr((V882));
	V883= CMPcar((V882));
	goto T1674;}
	goto T1667;
T1667:;
	{object V888 = (V879);
	VMR56(V888)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SDFUN-FOR-CACHING	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V889;
	object V890;
	check_arg(2);
	V889=(base[0]);
	V890=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V891;
	base[3]=VV[302]->s.s_gfdef;
	{object V892;
	object V893= (V890);
	if(V893==Cnil){
	V891= Cnil;
	goto T1702;}
	base[2]=V892=MMcons(Cnil,Cnil);
	goto T1703;
T1703:;
	base[4]= (V893->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk302)();
	vs_top=sup;
	(V892->c.c_car)= vs_base[0];
	if((V893=MMcdr(V893))==Cnil){
	V891= base[2];
	goto T1702;}
	V892=MMcdr(V892)=MMcons(Cnil,Cnil);
	goto T1703;}
	goto T1702;
T1702:;
	{object V894;
	object V895;
	base[2]= (V889);
	base[3]= (V891);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk295)();
	if(vs_base>=vs_top){vs_top=sup;goto T1709;}
	V894= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1710;}
	V895= vs_base[0];
	vs_top=sup;
	goto T1711;
	goto T1709;
T1709:;
	V894= Cnil;
	goto T1710;
T1710:;
	V895= Cnil;
	goto T1711;
T1711:;
	base[2]= (VFUN_NARGS=6,(*(LnkLI303))((V889),(V894),(V891),Cnil,Ct,(V895)));
	base[3]= Cnil;
	base[6]=VV[301]->s.s_gfdef;
	{object V896;
	object V897= (V890);
	if(V897==Cnil){
	base[4]= Cnil;
	goto T1714;}
	base[5]=V896=MMcons(Cnil,Cnil);
	goto T1715;
T1715:;
	base[7]= (V897->c.c_car);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	(V896->c.c_car)= vs_base[0];
	if((V897=MMcdr(V897))==Cnil){
	base[4]= base[5];
	goto T1714;}
	V896=MMcdr(V896)=MMcons(Cnil,Cnil);
	goto T1715;}
	goto T1714;
T1714:;
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}}
	}
}
/*	local entry for function VALUE-FOR-CACHING	*/

static object LI62(V900,V901)

object V900;object V901;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{object V902;
	base[0]= (V900);
	base[3]=VV[302]->s.s_gfdef;
	{object V903;
	object V904= (V901);
	if(V904==Cnil){
	base[1]= Cnil;
	goto T1720;}
	base[2]=V903=MMcons(Cnil,Cnil);
	goto T1721;
T1721:;
	base[4]= (V904->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk302)();
	vs_top=sup;
	(V903->c.c_car)= vs_base[0];
	if((V904=MMcdr(V904))==Cnil){
	base[1]= base[2];
	goto T1720;}
	V903=MMcdr(V903)=MMcons(Cnil,Cnil);
	goto T1721;}
	goto T1720;
T1720:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	V902= vs_base[0];{object V906;
	base[0]= CMPcar((V902));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V906= vs_base[0];
	if(V906==Cnil)goto T1725;
	V905= V906;
	goto T1724;
	goto T1725;
T1725:;}
	base[0]= CMPcar((V902));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	V905= vs_base[0];
	goto T1724;
T1724:;
	{object V907 = (VFUN_NARGS=2,(*(LnkLI304))(V905,VV[112]));
	VMR58(V907)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-SECONDARY-DISPATCH-FUNCTION	*/

static object LI64(V909)

object V909;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]=MMcons((V909),Cnil);
	{object V910 = 
	make_cclosure_new(LC124,Cnil,base[0],Cdata);
	VMR59(V910)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-EQ	*/

static object LI65(V913,V914)

register object V913;register object V914;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	goto T1730;
T1730:;
	if(!(type_of((V913))!=t_cons)){
	goto T1732;}
	{object V915 = (((V913))==((V914))?Ct:Cnil);
	VMR60(V915)}
	goto T1732;
T1732:;
	if(!(type_of((V914))!=t_cons)){
	goto T1735;}
	{object V916 = Cnil;
	VMR60(V916)}
	goto T1735;
T1735:;
	if((CMPcar((V913)))==(CMPcar((V914)))){
	goto T1738;}
	{object V917 = Cnil;
	VMR60(V917)}
	goto T1738;
T1738:;
	V913= CMPcdr((V913));
	V914= CMPcdr((V914));
	goto T1730;
	return Cnil;
}
/*	function definition for COMPUTE-APPLICABLE-METHODS-EMF	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	{object V918;
	check_arg(1);
	V918=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((VV[113]->s.s_dbind))==(VV[114]))){
	goto T1746;}
	{register object V919;
	object V920;
	V919= (*(LnkLI273))(VV[115]);
	base[3]= (V919);
	base[4]= list(2,list(2,VV[108],(V918)),Ct);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	V920= vs_base[0];
	base[4]= (V919);
	base[5]= (V920);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk307)();
	vs_top=sup;
	base[3]= vs_base[0];
	V921 = (V920);
	if((VV[116]->s.s_dbind)!=Cnil){
	V922= (VV[116]->s.s_dbind);
	goto T1756;}
	base[5]= (V919);
	base[6]= list(2,list(2,VV[108],(V919)),Ct);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	(VV[116]->s.s_dbind)= vs_base[0];
	V922= (VV[116]->s.s_dbind);
	goto T1756;
T1756:;
	base[4]= (*(LnkLI308))(V921,V922);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1746;
T1746:;
	base[1]= (VV[309]->s.s_gfdef);
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function COMPUTE-APPLICABLE-METHODS-EMF-STD-P	*/

static object LI67(V924)

object V924;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= (V924);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V925= vs_base[0];
	{object V926 = STREF(object,V925,36);
	VMR62(V926)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-ALL-C-A-M-GF-INFO	*/

static object LI68(V928)

object V928;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[1]= (V928);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T1768;}
	base[1]= 
	make_cclosure_new(LC125,Cnil,base[0],Cdata);
	base[2]= (VV[117]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk278)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1768;}
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	{register object V929;
	register object V930;
	V929= (base[0]->c.c_car);
	V930= CMPcar((V929));
	goto T1778;
T1778:;
	if(!(((V929))==Cnil)){
	goto T1779;}
	goto T1774;
	goto T1779;
T1779:;
	{register object x= (V930),V931= (VV[117]->s.s_dbind);
	while(V931!=Cnil)
	if(eql(x,V931->c.c_car)){
	goto T1783;
	}else V931=V931->c.c_cdr;}
	{register object V932;
	base[4]= (V930);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V933= vs_base[0];
	V932= CMPcar(V933);
	base[4]= (V932);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1790;}
	{object V934;
	base[5]= (V932);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk298)(Lclptr298);
	vs_top=sup;
	V934= vs_base[0];
	base[5]= (V934);
	base[6]= (base[1]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[1]->c.c_car)= vs_base[0];
	goto T1783;}
	goto T1790;
T1790:;
	{object V935;
	base[5]= (V932);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk297)(Lclptr297);
	vs_top=sup;
	V935= vs_base[0];
	base[5]= (V935);
	base[6]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[2]->c.c_car)= vs_base[0];}}
	goto T1783;
T1783:;
	V929= CMPcdr((V929));
	V930= CMPcar((V929));
	goto T1778;}
	goto T1774;
T1774:;
	V936= 
	make_cclosure_new(LC126,Cnil,base[2],Cdata);
	(void)((*(LnkLI311))(V936));
	goto T1766;
	goto T1768;
T1768:;
	V937= (VV[312]->s.s_gfdef);
	(void)((*(LnkLI311))(V937));
	goto T1766;
T1766:;
	(VV[117]->s.s_dbind)= (base[0]->c.c_car);
	{object V938 = (VV[117]->s.s_dbind);
	VMR63(V938)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-INFO	*/

static object LI69(V940)

object V940;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	(void)((*(LnkLI312))((V940)));
	{object V941 = (*(LnkLI313))((V940));
	VMR64(V941)}
	return Cnil;
}
/*	local entry for function UPDATE-C-A-M-GF-INFO	*/

static object LI70(V943)

object V943;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	if(((*(LnkLI314))((V943)))!=Cnil){
	goto T1813;}
	{object V944;
	object V945;
	base[0]= (V943);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)();
	if(vs_base>=vs_top){vs_top=sup;goto T1817;}
	V944= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1818;}
	V945= vs_base[0];
	vs_top=sup;
	goto T1819;
	goto T1817;
T1817:;
	V944= Cnil;
	goto T1818;
T1818:;
	V945= Cnil;
	goto T1819;
T1819:;
	{object V946;
	base[0]= (V943);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V946= vs_base[0];
	V947 = (V946);
	V948 = (V944);
	V949= Ct;
	STSET(object,V947,32, V948);
	(void)(V948);
	V950 = (V946);
	V951 = (V945);
	V952= Ct;
	STSET(object,V950,36, V951);
	{object V953 = V951;
	VMR65(V953)}}}
	goto T1813;
T1813:;
	{object V954 = Cnil;
	VMR65(V954)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-SIMPLE-ACCESSOR-TYPE	*/

static object LI71(V956)

object V956;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V957;
	base[0]= (V956);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V957= vs_base[0];
	V958 = (V957);
	{object V960;
	register object V961;
	object V962;
	base[3]= (V956);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V960= vs_base[0];
	if((V960)==Cnil){
	V961= Cnil;
	goto T1828;}
	V961= (*(LnkLI149))(CMPcar((V960)));
	goto T1828;
T1828:;
	if((V961)==Cnil){
	V962= Cnil;
	goto T1829;}
	if(!(((V961))==((VV[118]->s.s_dbind)))){
	goto T1831;}
	V962= VV[119];
	goto T1829;
	goto T1831;
T1831:;
	if(!(((V961))==((VV[120]->s.s_dbind)))){
	goto T1834;}
	V962= VV[121];
	goto T1829;
	goto T1834;
T1834:;
	if(!(((V961))==((VV[122]->s.s_dbind)))){
	goto T1837;}
	V962= VV[123];
	goto T1829;
	goto T1837;
T1837:;
	V962= Cnil;
	goto T1829;
T1829:;
	if((STREF(object,(V957),36))==Cnil){
	goto T1840;}
	if(((V962))==Cnil){
	goto T1840;}
	{register object V963;
	register object V964;
	V963= CMPcdr((V960));
	V964= CMPcar((V963));
	goto T1850;
T1850:;
	if(!(((V963))==Cnil)){
	goto T1851;}
	goto T1846;
	goto T1851;
T1851:;
	V965 = (V961);
	V966= (*(LnkLI149))((V964));
	if((V965)==(/* INLINE-ARGS */V966)){
	goto T1855;}
	goto T1840;
	goto T1855;
T1855:;
	V963= CMPcdr((V963));
	V964= CMPcar((V963));
	goto T1850;}
	goto T1846;
T1846:;
	base[3]= (V956);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	V967= vs_base[0];
	V968 = (VV[124]->s.s_dbind);
	if(!((V967)==(V968))){
	goto T1840;}
	V959= (V962);
	goto T1825;
	goto T1840;
T1840:;
	V959= Cnil;}
	goto T1825;
T1825:;
	V969= Ct;
	STSET(object,V958,24, V959);
	{object V970 = V959;
	VMR66(V970)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-ACCESSOR-METHOD-FUNCTION	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V971;
	register object V972;
	register object V973;
	register object V974;
	check_arg(4);
	V971=(base[0]);
	V972=(base[1]);
	V973=(base[2]);
	V974=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V975;
	object V976;
	object V977;
	object V978;
	register object V979;
	object V980;
	V975= (*(LnkLI317))((V972));
	V976= (*(LnkLI318))((V972));
	V981= list(2,VV[108],(V973));
	V982= list(2,VV[109],(V973));
	V977= list(3,/* INLINE-ARGS */V981,/* INLINE-ARGS */V982,list(2,VV[108],(V974)));
	if(!(((V972))==(VV[121]))){
	goto T1871;}
	V978= make_cons(Ct,(V977));
	goto T1869;
	goto T1871;
T1871:;
	V978= (V977);
	goto T1869;
T1869:;
	base[10]= (V971);
	base[11]= (V978);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	V979= vs_base[0];
	V980= ((CMPcdr((V979)))==Cnil?Ct:Cnil);
	if(((V980))==Cnil){
	goto T1879;}
	base[11]= (V973);
	base[12]= (V974);
	base[13]= (V972);
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk319)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1877;
	goto T1879;
T1879:;
	base[11]= (V973);
	base[12]= (V974);
	base[14]= (V971);
	base[15]= (V979);
	base[16]= (V978);{object V984;
	{register object x= (V975),V985= (V979);
	while(V985!=Cnil)
	if(eql(x,V985->c.c_car)){
	V984= V985;
	goto T1893;
	}else V985=V985->c.c_cdr;
	V984= Cnil;}
	goto T1893;
T1893:;
	if(V984==Cnil)goto T1892;
	V983= V984;
	goto T1891;
	goto T1892;
T1892:;}{object V986;
	{register object x= (V976),V987= (V979);
	while(V987!=Cnil)
	if(eql(x,V987->c.c_car)){
	V986= V987;
	goto T1895;
	}else V987=V987->c.c_cdr;
	V986= Cnil;}
	goto T1895;
T1895:;
	if(V986==Cnil)goto T1894;
	V983= V986;
	goto T1891;
	goto T1894;
T1894:;}
	base[18]= VV[125];
	vs_top=(vs_base=base+18)+1;
	Lerror();
	vs_top=sup;
	V983= vs_base[0];
	goto T1891;
T1891:;
	V988= CMPcar(V983);
	base[18]= (V973);
	base[19]= (V974);
	base[20]= (V972);
	vs_top=(vs_base=base+18)+3;
	(void) (*Lnk320)();
	vs_top=sup;
	V989= vs_base[0];
	V990= list(2,/* INLINE-ARGS */V988,V989);
	base[17]= make_cons(/* INLINE-ARGS */V990,Cnil);
	if(!(((V972))==(VV[121]))){
	goto T1902;}
	{register object V991;
	register object V992;
	V991= (V979);
	V992= CMPcar((V991));
	goto T1910;
T1910:;
	if(!(((V991))==Cnil)){
	goto T1911;}
	goto T1903;
	goto T1911;
T1911:;
	base[20]= (V992);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V993= vs_base[0];
	if((CMPcar(V993))==((VV[95]->s.s_dbind))){
	goto T1915;}
	goto T1906;
	goto T1915;
T1915:;
	V991= CMPcdr((V991));
	V992= CMPcar((V991));
	goto T1910;}
	goto T1906;
T1906:;
	goto T1902;
T1902:;
	{object V994;
	V995= (*(LnkLI321))((V973));
	base[19]= (V973);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V996= vs_base[0];
	V994= list(3,/* INLINE-ARGS */V995,V996,(*(LnkLI321))((V974)));
	if(!(((V972))==(VV[121]))){
	goto T1929;}
	base[19]= (VV[95]->s.s_dbind);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V997= vs_base[0];
	V998 = (V994);
	base[18]= make_cons(V997,V998);
	goto T1901;
	goto T1929;
T1929:;
	base[18]= (V994);
	goto T1901;}
	goto T1903;
T1903:;
	base[18]= Cnil;
	goto T1901;
T1901:;
	vs_top=(vs_base=base+14)+5;
	(void) (*Lnk322)();
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= (V972);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk323)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1877;
T1877:;
	base[11]= (V980);
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
	goto T1935;}
	(void)((*(LnkLI324))((base[0]->c.c_car),(base[1]->c.c_car)));
	goto T1935;
T1935:;
	if(((*(LnkLI317))((base[1]->c.c_car)))==Cnil){
	goto T1939;}
	if(((*(LnkLI318))((base[1]->c.c_car)))==Cnil){
	goto T1939;}
	base[2]=make_cclosure_new(LC74,Cnil,base[1],Cdata);
	base[2]=MMcons(base[2],base[1]);
	if(((VV[126]->s.s_dbind))==Cnil){
	goto T1944;}
	base[3]= (VV[126]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	L74(base);
	return;
	goto T1944;
T1944:;
	base[3]= (base[2]->c.c_car);
	base[4]= VV[127];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk325)();
	return;
	goto T1939;
T1939:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function STANDARD-SVUC-METHOD	*/

static object LI75(V1000)

object V1000;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{object V1001= (V1000);
	if((V1001!= VV[119]))goto T1949;
	{object V1002 = (VV[128]->s.s_dbind);
	VMR69(V1002)}
	goto T1949;
T1949:;
	if((V1001!= VV[121]))goto T1950;
	{object V1003 = (VV[129]->s.s_dbind);
	VMR69(V1003)}
	goto T1950;
T1950:;
	if((V1001!= VV[123]))goto T1951;
	{object V1004 = (VV[130]->s.s_dbind);
	VMR69(V1004)}
	goto T1951;
T1951:;
	{object V1005 = Cnil;
	VMR69(V1005)}}
	return Cnil;
}
/*	local entry for function SET-STANDARD-SVUC-METHOD	*/

static object LI76(V1008,V1009)

object V1008;object V1009;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{object V1010= (V1008);
	if((V1010!= VV[119]))goto T1952;
	(VV[128]->s.s_dbind)= (V1009);
	{object V1011 = (VV[128]->s.s_dbind);
	VMR70(V1011)}
	goto T1952;
T1952:;
	if((V1010!= VV[121]))goto T1954;
	(VV[129]->s.s_dbind)= (V1009);
	{object V1012 = (VV[129]->s.s_dbind);
	VMR70(V1012)}
	goto T1954;
T1954:;
	if((V1010!= VV[123]))goto T1956;
	(VV[130]->s.s_dbind)= (V1009);
	{object V1013 = (VV[130]->s.s_dbind);
	VMR70(V1013)}
	goto T1956;
T1956:;
	{object V1014 = Cnil;
	VMR70(V1014)}}
	return Cnil;
}
/*	local entry for function STRUCTURE-SVUC-METHOD	*/

static object LI77(V1016)

object V1016;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{object V1017= (V1016);
	if((V1017!= VV[119]))goto T1958;
	{object V1018 = (VV[131]->s.s_dbind);
	VMR71(V1018)}
	goto T1958;
T1958:;
	if((V1017!= VV[121]))goto T1959;
	{object V1019 = (VV[132]->s.s_dbind);
	VMR71(V1019)}
	goto T1959;
T1959:;
	if((V1017!= VV[123]))goto T1960;
	{object V1020 = (VV[133]->s.s_dbind);
	VMR71(V1020)}
	goto T1960;
T1960:;
	{object V1021 = Cnil;
	VMR71(V1021)}}
	return Cnil;
}
/*	local entry for function SET-STRUCTURE-SVUC-METHOD	*/

static object LI78(V1024,V1025)

object V1024;object V1025;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V1026= (V1024);
	if((V1026!= VV[119]))goto T1961;
	(VV[131]->s.s_dbind)= (V1025);
	{object V1027 = (VV[131]->s.s_dbind);
	VMR72(V1027)}
	goto T1961;
T1961:;
	if((V1026!= VV[121]))goto T1963;
	(VV[132]->s.s_dbind)= (V1025);
	{object V1028 = (VV[132]->s.s_dbind);
	VMR72(V1028)}
	goto T1963;
T1963:;
	if((V1026!= VV[123]))goto T1965;
	(VV[133]->s.s_dbind)= (V1025);
	{object V1029 = (VV[133]->s.s_dbind);
	VMR72(V1029)}
	goto T1965;
T1965:;
	{object V1030 = Cnil;
	VMR72(V1030)}}
	return Cnil;
}
/*	local entry for function UPDATE-STD-OR-STR-METHODS	*/

static object LI79(V1033,V1034)

object V1033;register object V1034;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{register object V1035;
	register object V1036;
	base[2]= (V1033);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V1035= vs_base[0];
	V1036= CMPcar((V1035));
	goto T1971;
T1971:;
	if(!(((V1035))==Cnil)){
	goto T1972;}
	{object V1037 = Cnil;
	VMR73(V1037)}
	goto T1972;
T1972:;
	{register object V1038;
	base[2]= (V1036);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V1038= vs_base[0];
	if(!(((V1034))==(VV[121]))){
	goto T1980;}
	{register object V1040;
	V1040= CMPcar((V1038));
	V1038= CMPcdr((V1038));
	V1039= (V1040);}
	V1041 = (VV[95]->s.s_dbind);
	if(!((V1039)==(V1041))){
	goto T1976;}
	goto T1980;
T1980:;
	base[2]= (VV[237]->s.s_gfdef);
	base[3]= (V1038);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk278)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1976;}
	base[2]= CMPcar((V1038));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1042= vs_base[0];
	if(!((V1042)==(VV[134]))){
	goto T1992;}
	base[2]= CMPcadr((V1038));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1043= vs_base[0];
	if(!((V1043)==(VV[135]))){
	goto T1992;}
	base[2]= CMPcaddr((V1038));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1044= vs_base[0];
	if(!((V1044)==(VV[136]))){
	goto T1992;}
	(void)((*(LnkLI326))((V1034),(V1036)));
	goto T1976;
	goto T1992;
T1992:;
	base[2]= CMPcar((V1038));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1045= vs_base[0];
	if(!((V1045)==(VV[137]))){
	goto T1976;}
	base[2]= CMPcadr((V1038));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1046= vs_base[0];
	if(!((V1046)==(VV[138]))){
	goto T1976;}
	base[2]= CMPcaddr((V1038));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1047= vs_base[0];
	if(!((V1047)==(VV[139]))){
	goto T1976;}
	(void)((*(LnkLI327))((V1034),(V1036)));}
	goto T1976;
T1976:;
	V1035= CMPcdr((V1035));
	V1036= CMPcar((V1035));
	goto T1971;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES-INTERNAL	*/

static object LI80(V1050,V1051)

register object V1050;object V1051;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	base[0]= (V1050);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk297)(Lclptr297);
	vs_top=sup;
	V1052= vs_base[0];
	base[0]= (V1050);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2024;}
	V1053= Cnil;
	goto T2023;
	goto T2024;
T2024:;
	if((V1051)==Cnil){
	V1053= Cnil;
	goto T2023;}
	if(!(((V1050))==((VV[95]->s.s_dbind)))){
	goto T2030;}
	V1054= Ct;
	goto T2029;
	goto T2030;
T2030:;
	if(!(((V1050))==((VV[140]->s.s_dbind)))){
	goto T2032;}
	V1054= Ct;
	goto T2029;
	goto T2032;
T2032:;
	if(!(((V1050))==((VV[141]->s.s_dbind)))){
	goto T2034;}
	V1054= Ct;
	goto T2029;
	goto T2034;
T2034:;
	V1054= (((V1050))==((VV[142]->s.s_dbind))?Ct:Cnil);
	goto T2029;
T2029:;
	if((V1054)==Cnil){
	goto T2027;}
	V1053= Cnil;
	goto T2023;
	goto T2027;
T2027:;
	{object V1055;
	base[0]= (V1050);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V1055= vs_base[0];
	if(((V1055))==Cnil){
	goto T2039;}
	{object V1056;
	object V1057= (V1055);
	if(V1057==Cnil){
	V1053= Cnil;
	goto T2023;}
	base[0]=V1056=MMcons(Cnil,Cnil);
	goto T2041;
T2041:;
	(V1056->c.c_cdr)= (*(LnkLI329))((V1057->c.c_car),(V1051));
	while(MMcdr(V1056)!=Cnil)V1056=MMcdr(V1056);
	if((V1057=MMcdr(V1057))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V1053= base[0];
	goto T2023;}
	goto T2041;}
	goto T2039;
T2039:;
	V1053= Cnil;}
	goto T2023;
T2023:;
	{object V1059 = make_cons(V1052,V1053);
	VMR74(V1059)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES	*/

static object LI81(V1062,V1063)

object V1062;object V1063;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	{object V1064;
	V1064= (*(LnkLI329))((V1062),(V1063));
	if((CMPcdr((V1064)))!=Cnil){
	goto T2045;}
	{object V1065 = (V1064);
	VMR75(V1065)}
	goto T2045;
T2045:;
	{object V1066;
	register object V1067;
	V1066= make_cons(Cnil,(V1064));
	V1067= (V1064);
	goto T2050;
T2050:;
	if((CMPcdr((V1067)))!=Cnil){
	goto T2052;}
	{object V1068 = CMPcdr((V1066));
	VMR75(V1068)}
	goto T2052;
T2052:;
	{register object V1069;
	register object V1070;
	V1069= CMPcadr((V1067));
	V1070= CMPcddr((V1067));
	{register object V1071;
	register object V1072;
	V1071= (V1070);
	V1072= CMPcar((V1071));
	goto T2063;
T2063:;
	if(!(((V1071))==Cnil)){
	goto T2064;}
	goto T2058;
	goto T2064;
T2064:;
	if(!(((V1069))==((V1072)))){
	goto T2068;}
	goto T2059;
	goto T2068;
T2068:;
	V1071= CMPcdr((V1071));
	V1072= CMPcar((V1071));
	goto T2063;}
	goto T2059;
T2059:;
	{register object V1073;
	register object V1074;
	V1073= (V1067);
	V1074= CMPcddr((V1067));
	((V1073))->c.c_cdr = (V1074);
	goto T2051;}
	goto T2058;
T2058:;
	V1067= CMPcdr((V1067));}
	goto T2051;
T2051:;
	goto T2050;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASS-LISTS	*/

static object LI82(V1077,V1078)

object V1077;object V1078;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	if(((V1077))!=Cnil){
	goto T2082;}
	{object V1079 = make_cons(Cnil,Cnil);
	VMR76(V1079)}
	goto T2082;
T2082:;
	{object V1080;
	object V1081;
	V1080= (*(LnkLI330))(CMPcar((V1077)),(V1078));
	V1081= (*(LnkLI331))(CMPcdr((V1077)),(V1078));
	{object V1082;
	object V1083= (V1081);
	if(V1083==Cnil){
	{object V1084 = Cnil;
	VMR76(V1084)}}
	base[2]=V1082=MMcons(Cnil,Cnil);
	goto T2086;
T2086:;
	{object V1086;
	object V1087= (V1080);
	if(V1087==Cnil){
	(V1082->c.c_cdr)= Cnil;
	goto T2087;}
	base[3]=V1086=MMcons(Cnil,Cnil);
	goto T2088;
T2088:;
	(V1086->c.c_car)= make_cons((V1087->c.c_car),(V1083->c.c_car));
	if((V1087=MMcdr(V1087))==Cnil){
	(V1082->c.c_cdr)= base[3];
	goto T2087;}
	V1086=MMcdr(V1086)=MMcons(Cnil,Cnil);
	goto T2088;}
	goto T2087;
T2087:;
	while(MMcdr(V1082)!=Cnil)V1082=MMcdr(V1082);
	if((V1083=MMcdr(V1083))==Cnil){
	base[2]=base[2]->c.c_cdr;
	{object V1089 = base[2];
	VMR76(V1089)}}
	goto T2086;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EMF-CACHE	*/

static object LI85(V1095,V1096,V1097,V1098,V1099)

object V1095;object V1096;object V1097;object V1098;object V1099;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	base[0]= (V1099);
	base[1]= (V1097);
	base[2]= (V1096);
	base[3]= (V1095);
	{object V1100;
	register object V1101;
	base[10]= base[3];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1100= vs_base[0];
	base[5]= (*(LnkLI332))((V1100));
	base[6]= STREF(object,(V1100),8);
	if((base[5])==(small_fixnum(1))){
	goto T2096;}
	base[10]= base[5];
	vs_top=(vs_base=base+10)+1;
	Lmake_list();
	vs_top=sup;
	base[7]= vs_base[0];
	goto T2094;
	goto T2096;
T2096:;
	base[7]= Cnil;
	goto T2094;
T2094:;
	V1101= STREF(object,(V1100),28);
	base[9]= VV[143];
	if(((V1098))==Cnil){
	goto T2102;}
	{
	object V1102= (V1098);
	if(V1102==Cnil){
	goto T2100;}
	goto T2104;
T2104:;
	base[10]= (V1102->c.c_car);
	vs_top=(vs_base=base+10)+1;
	L86(base);
	vs_top=sup;
	if((V1102=MMcdr(V1102))==Cnil){
	goto T2100;}
	goto T2104;}
	goto T2102;
T2102:;
	{register object V1103;
	register object V1104;
	base[12]= base[3];
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V1103= vs_base[0];
	V1104= CMPcar((V1103));
	goto T2111;
T2111:;
	if(!(((V1103))==Cnil)){
	goto T2112;}
	goto T2100;
	goto T2112;
T2112:;
	base[12]= (V1104);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V1106= vs_base[0];
	V1107 = (V1101);
	V1108= (*(LnkLI331))(V1106,V1107);
	{
	object V1105= /* INLINE-ARGS */V1108;
	if(V1105==Cnil){
	goto T2116;}
	goto T2117;
T2117:;
	base[12]= (V1105->c.c_car);
	vs_top=(vs_base=base+12)+1;
	L86(base);
	vs_top=sup;
	if((V1105=MMcdr(V1105))==Cnil){
	goto T2116;}
	goto T2117;}
	goto T2116;
T2116:;
	V1103= CMPcdr((V1103));
	V1104= CMPcar((V1103));
	goto T2111;}
	goto T2100;
T2100:;
	{object V1109 = base[1];
	VMR77(V1109)}}
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
	{object V1110=base[0]->c.c_cdr;
	if(endp(V1110))invalid_macro_call();
	base[2]= (V1110->c.c_car);
	V1110=V1110->c.c_cdr;
	if(endp(V1110))invalid_macro_call();
	base[3]= (V1110->c.c_car);
	V1110=V1110->c.c_cdr;
	if(!endp(V1110))invalid_macro_call();}
	if(!((base[3])==((VV[95]->s.s_dbind)))){
	goto T2128;}
	base[4]= Ct;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2128;
T2128:;
	if(!((base[3])==((VV[140]->s.s_dbind)))){
	goto T2131;}
	base[4]= list(2,VV[144],list(3,VV[145],VV[146],list(2,VV[147],list(2,VV[148],list(2,VV[149],base[2])))));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2131;
T2131:;
	if(!((base[3])==((VV[141]->s.s_dbind)))){
	goto T2134;}
	V1111= list(2,VV[151],base[2]);
	base[4]= list(3,VV[150],/* INLINE-ARGS */V1111,list(2,VV[152],base[2]));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2134;
T2134:;
	if(!((base[3])==((VV[142]->s.s_dbind)))){
	goto T2137;}
	V1112= list(2,VV[154],base[3]);
	base[4]= list(3,VV[153],/* INLINE-ARGS */V1112,list(2,VV[155],list(2,VV[149],base[2])));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2137;
T2137:;
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1113= vs_base[0];
	base[4]= list(3,VV[156],base[2],list(2,VV[154],V1113));
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
	{object V1114=base[0]->c.c_cdr;
	if(endp(V1114))invalid_macro_call();
	base[2]= (V1114->c.c_car);
	V1114=V1114->c.c_cdr;
	if(endp(V1114))invalid_macro_call();
	base[3]= (V1114->c.c_car);
	V1114=V1114->c.c_cdr;
	if(!endp(V1114))invalid_macro_call();}
	V1115= list(2,VV[149],base[2]);
	base[4]= list(3,VV[145],/* INLINE-ARGS */V1115,list(2,VV[154],base[3]));
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
	{object V1116=base[0]->c.c_cdr;
	if(endp(V1116))invalid_macro_call();
	base[2]= (V1116->c.c_car);
	V1116=V1116->c.c_cdr;
	if(endp(V1116))invalid_macro_call();
	base[3]= (V1116->c.c_car);
	V1116=V1116->c.c_cdr;
	if(!endp(V1116))invalid_macro_call();}
	base[4]= list(3,VV[108],base[2],list(2,VV[154],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function DNET-METHODS-P	*/

static object LI90(V1118)

object V1118;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	if(type_of((V1118))==t_cons){
	goto T2141;}
	{object V1119 = Cnil;
	VMR81(V1119)}
	goto T2141;
T2141:;
	if(!((CMPcar((V1118)))==(VV[67]))){
	goto T2143;}
	{object V1120 = Ct;
	VMR81(V1120)}
	goto T2143;
T2143:;
	{object V1121 = ((CMPcar((V1118)))==(VV[157])?Ct:Cnil);
	VMR81(V1121)}
	return Cnil;
}
/*	macro definition for SCASE	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1122=base[0]->c.c_cdr;
	if(endp(V1122))invalid_macro_call();
	base[2]= (V1122->c.c_car);
	V1122=V1122->c.c_cdr;
	base[3]= V1122;}
	V1123= list(2,VV[159],base[2]);
	V1124= make_cons(/* INLINE-ARGS */V1123,Cnil);
	{object V1126;
	object V1127= base[3];
	if(V1127==Cnil){
	V1125= Cnil;
	goto T2145;}
	base[4]=V1126=MMcons(Cnil,Cnil);
	goto T2146;
T2146:;
	{register object V1128;
	V1128= (V1127->c.c_car);
	if((CMPcar((V1128)))!=Cnil){
	goto T2150;}
	V1129= Cnil;
	goto T2148;
	goto T2150;
T2150:;
	if(!(type_of(CMPcar((V1128)))==t_cons)){
	goto T2153;}
	if((CMPcdar((V1128)))!=Cnil){
	goto T2156;}
	V1129= list(3,VV[108],VV[159],list(2,VV[154],CMPcaar((V1128))));
	goto T2148;
	goto T2156;
T2156:;
	V1129= list(3,VV[161],VV[159],list(2,VV[154],CMPcar((V1128))));
	goto T2148;
	goto T2153;
T2153:;
	{register object x= CMPcar((V1128)),V1130= VV[162];
	while(V1130!=Cnil)
	if(eql(x,V1130->c.c_car)){
	goto T2160;
	}else V1130=V1130->c.c_cdr;
	goto T2159;}
	goto T2160;
T2160:;
	V1129= Ct;
	goto T2148;
	goto T2159;
T2159:;
	V1129= list(3,VV[108],VV[159],list(2,VV[154],CMPcar((V1128))));
	goto T2148;
T2148:;
	(V1126->c.c_car)= listA(3,V1129,Cnil,CMPcdr((V1128)));}
	if((V1127=MMcdr(V1127))==Cnil){
	V1125= base[4];
	goto T2145;}
	V1126=MMcdr(V1126)=MMcons(Cnil,Cnil);
	goto T2146;}
	goto T2145;
T2145:;
	base[4]= list(3,VV[158],/* INLINE-ARGS */V1124,make_cons(VV[160],V1125));
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
	{object V1131=base[0]->c.c_cdr;
	if(endp(V1131))invalid_macro_call();
	base[2]= (V1131->c.c_car);
	V1131=V1131->c.c_cdr;
	base[3]= V1131;}
	base[4]= listA(3,VV[163],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for GENERATE-DISCRIMINATION-NET	*/

static void L93()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM84; VC84
	vs_check;
	{VOL object V1132;
	VOL object V1133;
	VOL object V1134;
	check_arg(4);
	V1132=(base[0]);
	V1133=(base[1]);
	V1134=(base[2]);
	base[3]=MMcons(base[3],Cnil);
	vs_top=sup;
	{VOL object V1135;
	base[6]= (V1132);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1135= vs_base[0];
	base[5]= STREF(object,(V1135),4);
	base[5]=MMcons(base[5],base[3]);
	base[6]= (V1132);
	base[7]= (V1133);
	base[8]= (V1134);
	base[9]= 
	make_cclosure_new(LC127,Cnil,base[5],Cdata);
	base[10]= 
	make_cclosure_new(LC128,Cnil,base[5],Cdata);
	base[11]= (VV[333]->s.s_gfdef);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk334)();
	return;}
	}
}
/*	local entry for function CLASS-FROM-TYPE	*/

static object LI94(V1137)

register object V1137;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	if(type_of((V1137))!=t_cons){
	goto T2170;}
	if(!((CMPcar((V1137)))==(Ct))){
	goto T2171;}
	goto T2170;
T2170:;
	{object V1138 = (VV[95]->s.s_dbind);
	VMR85(V1138)}
	goto T2171;
T2171:;
	{object V1139= CMPcar((V1137));
	if((V1139!= VV[169]))goto T2175;
	{register object V1140;
	register object V1141;
	V1140= CMPcdr((V1137));
	V1141= CMPcar((V1140));
	goto T2179;
T2179:;
	if(!(((V1140))==Cnil)){
	goto T2180;}
	{object V1142 = (VV[95]->s.s_dbind);
	VMR85(V1142)}
	goto T2180;
T2180:;
	if(!(type_of((V1141))==t_cons)){
	goto T2184;}
	if((CMPcar((V1141)))==(VV[144])){
	goto T2184;}
	V1137= (V1141);
	goto TTL;
	goto T2184;
T2184:;
	V1140= CMPcdr((V1140));
	V1141= CMPcar((V1140));
	goto T2179;}
	goto T2175;
T2175:;
	if((V1139!= VV[144]))goto T2196;
	{object V1143 = (VV[95]->s.s_dbind);
	VMR85(V1143)}
	goto T2196;
T2196:;
	if((V1139!= VV[108]))goto T2197;
	{object V1144 = (*(LnkLI149))(CMPcadr((V1137)));
	VMR85(V1144)}
	goto T2197;
T2197:;
	if((V1139!= VV[109]))goto T2198;
	{object V1145 = CMPcadr((V1137));
	VMR85(V1145)}
	goto T2198;
T2198:;
	if((V1139!= VV[335]))goto T2199;
	{object V1146 = CMPcadr((V1137));
	VMR85(V1146)}
	goto T2199;
T2199:;
	{object V1147 = Cnil;
	VMR85(V1147)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRECOMPUTE-EFFECTIVE-METHODS	*/

static object LI95(object V1149,object V1148,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB86 VMS86 VMV86
	bds_check;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1149,Cnil);
	Vcs[1]=MMcons(V1148,Vcs[0]);
	narg = narg - 2;
	if (narg <= 0) goto T2200;
	else {
	Vcs[2]=MMcons(first,Vcs[1]);}
	--narg; goto T2201;
	goto T2200;
T2200:;
	Vcs[2]= Cnil;
	Vcs[2]=MMcons(Vcs[2],Vcs[1]);
	goto T2201;
T2201:;
	{object V1150;
	object V1151;
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1150= vs_base[0];
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V1151= vs_base[0];
	base[2]= STREF(object,(V1150),4);
	base[2]=MMcons(base[2],Vcs[2]);
	bds_bind(VV[168],Ct);
	base[4]=MMcons(Cnil,base[2]);
	base[5]= (Vcs[0]->c.c_car);
	base[6]= (V1151);
	base[7]= Cnil;
	base[8]= 
	make_cclosure_new(LC129,Cnil,base[4],Cdata);
	base[9]= 
	make_cclosure_new(LC130,Cnil,base[4],Cdata);
	base[10]= 
	make_cclosure_new(LC131,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk334)();
	vs_top=sup;
	{object V1152 = (base[4]->c.c_car);
	bds_unwind1;
	VMR86(V1152)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
/*	local entry for function AUGMENT-TYPE	*/

static object LI96(V1155,V1156)

register object V1155;register object V1156;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	if(((V1156))==(Ct)){
	goto T2215;}
	if(!((CMPcar((V1155)))==(VV[108]))){
	goto T2216;}
	goto T2215;
T2215:;
	{object V1157 = (V1155);
	VMR87(V1157)}
	goto T2216;
T2216:;
	{register object V1158;
	if(!(type_of((V1156))==t_cons)){
	goto T2222;}
	if(!((CMPcar((V1156)))==(VV[169]))){
	goto T2222;}
	V1158= CMPcdr((V1156));
	goto T2220;
	goto T2222;
T2222:;
	V1158= make_cons((V1156),Cnil);
	goto T2220;
T2220:;
	if((CMPcar((V1155)))==(VV[144])){
	goto T2226;}
	{object V1159;
	object V1160= (V1158);
	if(V1160==Cnil){
	V1158= Cnil;
	goto T2229;}
	base[0]=V1159=MMcons(Cnil,Cnil);
	goto T2230;
T2230:;
	base[1]= (V1155);
	base[2]= (V1160->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk261)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2233;}
	(V1159->c.c_cdr)= make_cons((V1160->c.c_car),Cnil);
	goto T2231;
	goto T2233;
T2233:;
	(V1159->c.c_cdr)= Cnil;
	goto T2231;
T2231:;
	while(MMcdr(V1159)!=Cnil)V1159=MMcdr(V1159);
	if((V1160=MMcdr(V1160))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V1158= base[0];
	goto T2229;}
	goto T2230;}
	goto T2229;
T2229:;
	goto T2226;
T2226:;
	if(((V1158))!=Cnil){
	goto T2238;}
	{object V1162 = (V1155);
	VMR87(V1162)}
	goto T2238;
T2238:;
	{object V1163 = listA(3,VV[169],(V1155),(V1158));
	VMR87(V1163)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GENERATE-DISCRIMINATION-NET-INTERNAL	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V1164;
	object V1165;
	check_arg(6);
	V1164=(base[0]);
	V1165=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1166;
	object V1167;
	base[10]= (V1164);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1166= vs_base[0];
	V1167= STREF(object,(V1166),4);
	base[8]= CMPmake_fixnum((long)(*(LnkLI336))((V1166)));
	base[9]= STREF(object,(V1166),8);
	base[10]= (V1167);
	base[11]= (V1165);
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
	{object V1168;
	object V1169;
	object V1170;
	object V1171;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V1168=(base[0]);
	V1169=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2248;}
	V1170=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2249;}
	V1171=(base[3]);
	vs_top=sup;
	goto T2250;
	goto T2248;
T2248:;
	V1170= Cnil;
	goto T2249;
T2249:;
	V1171= Cnil;
	goto T2250;
T2250:;
	base[4]= (VFUN_NARGS=2,(*(LnkLI337))((V1168),(V1169)));
	base[5]= (V1170);
	base[6]= (V1171);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function COMPUTE-MCASE-PARAMETERS	*/

static object LI103(V1173)

object V1173;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	base[0]= (V1173);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V1174= vs_base[0];
	if((Ct)==(CMPcaar(V1174))){
	goto T2256;}
	base[0]= VV[170];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2256;
T2256:;
	{object V1175;
	object V1176;
	object V1177;
	{register object V1178;
	register object V1179;
	V1178= (V1173);
	V1179= CMPcar((V1178));
	goto T2266;
T2266:;
	if(!(((V1178))==Cnil)){
	goto T2267;}
	V1175= Ct;
	goto T2262;
	goto T2267;
T2267:;
	if((CMPcar((V1179)))==(Ct)){
	goto T2271;}
	if(type_of(CMPcaar((V1179)))==t_symbol){
	goto T2271;}
	V1175= Cnil;
	goto T2262;
	goto T2271;
T2271:;
	V1178= CMPcdr((V1178));
	V1179= CMPcar((V1178));
	goto T2266;}
	goto T2262;
T2262:;
	V1180 = CMPmake_fixnum((long)length((V1173)));
	V1176= one_minus(V1180);
	if(!(number_compare((V1176),small_fixnum(1))==0)){
	goto T2284;}
	V1177= VV[171];
	goto T2282;
	goto T2284;
T2284:;
	V1181 = (V1176);
	if(((V1175))==Cnil){
	goto T2291;}
	V1182= (VV[172]->s.s_dbind);
	goto T2289;
	goto T2291;
T2291:;
	V1182= (VV[173]->s.s_dbind);
	goto T2289;
T2289:;
	if(!(number_compare(V1181,V1182)<=0)){
	goto T2287;}
	V1177= VV[174];
	goto T2282;
	goto T2287;
T2287:;
	V1177= VV[175];
	goto T2282;
T2282:;
	{object V1183 = list(2,(V1175),(V1177));
	VMR90(V1183)}}
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
	{object V1184=base[0]->c.c_cdr;
	if(endp(V1184))invalid_macro_call();
	base[2]= (V1184->c.c_car);
	V1184=V1184->c.c_cdr;
	if(endp(V1184))invalid_macro_call();
	base[3]= (V1184->c.c_car);
	V1184=V1184->c.c_cdr;
	if(endp(V1184))invalid_macro_call();
	base[4]= (V1184->c.c_car);
	V1184=V1184->c.c_cdr;
	if(endp(V1184)){
	base[5]= Cnil;
	} else {
	base[5]= (V1184->c.c_car);
	V1184=V1184->c.c_cdr;}
	if(endp(V1184)){
	base[6]= Cnil;
	} else {
	base[6]= (V1184->c.c_car);
	V1184=V1184->c.c_cdr;}
	if(!endp(V1184))invalid_macro_call();}
	if((base[5])==(Ct)){
	goto T2295;}
	if((base[5])==Cnil){
	goto T2295;}
	base[7]= VV[176];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	goto T2295;
T2295:;
	{object V1185= base[6];
	if((V1185!= VV[171]))goto T2301;
	if((base[5])==Cnil){
	goto T2304;}
	V1186= VV[145];
	goto T2302;
	goto T2304;
T2304:;
	V1186= VV[108];
	goto T2302;
T2302:;
	V1187 = base[2];
	V1188= list(3,V1186,V1187,list(2,VV[177],base[3]));
	base[7]= list(4,VV[165],/* INLINE-ARGS */V1188,list(2,VV[178],base[3]),base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2301;
T2301:;
	if((V1185!= VV[174]))goto T2306;
	V1189= list(3,VV[180],base[3],base[4]);
	if((base[5])==Cnil){
	goto T2309;}
	V1190= VV[145];
	goto T2307;
	goto T2309;
T2309:;
	V1190= VV[108];
	goto T2307;
T2307:;
	V1191 = base[2];
	base[7]= list(3,VV[179],/* INLINE-ARGS */V1189,list(3,VV[181],list(3,V1190,VV[182],V1191),VV[183]));
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2306;
T2306:;
	if((V1185!= VV[175]))goto T2311;
	base[7]= list(4,VV[184],base[2],base[3],base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2311;
T2311:;
	FEerror("The ECASE key value ~s is illegal.",1,V1185);
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
}
/*	local entry for function NET-TEST-CONVERTER	*/

static object LI105(V1193)

register object V1193;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if(!(type_of((V1193))!=t_cons)){
	goto T2313;}
	{object V1194 = (*(LnkLI338))((V1193));
	VMR92(V1194)}
	goto T2313;
T2313:;
	{object V1195= CMPcar((V1193));
	if((V1195!= VV[339])
	&& (V1195!= VV[340]))goto T2315;
	{object V1196 = VV[185];
	VMR92(V1196)}
	goto T2315;
T2315:;
	if((V1195!= VV[67]))goto T2316;
	{object V1197 = VV[186];
	VMR92(V1197)}
	goto T2316;
T2316:;
	if((V1195!= VV[157]))goto T2317;
	{object V1198 = VV[187];
	VMR92(V1198)}
	goto T2317;
T2317:;
	if((V1195!= VV[164]))goto T2318;
	V1199= CMPcadr((V1193));
	{object V1200 = listA(5,VV[188],/* INLINE-ARGS */V1199,Cnil,Cnil,(*(LnkLI341))(CMPcddr((V1193))));
	VMR92(V1200)}
	goto T2318;
T2318:;
	{object V1201 = (*(LnkLI338))((V1193));
	VMR92(V1201)}}
	return Cnil;
}
/*	function definition for NET-CODE-CONVERTER	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	{register object V1202;
	check_arg(1);
	V1202=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1202))!=t_cons)){
	goto T2320;}
	base[1]= (V1202);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk342)();
	return;
	goto T2320;
T2320:;
	{object V1203= CMPcar((V1202));
	if((V1203!= VV[67])
	&& (V1203!= VV[157]))goto T2323;
	{object V1204;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1204= vs_base[0];
	base[1]= (V1204);
	base[2]= make_cons((V1204),Cnil);
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2323;
T2323:;
	if((V1203!= VV[164]))goto T2327;
	{object V1205;
	object V1206;
	object V1207;
	V1205= (*(LnkLI341))(CMPcddr((V1202)));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1206= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1207= vs_base[0];
	base[1]= listA(5,VV[188],CMPcadr((V1202)),(V1206),(V1207),(V1205));
	base[2]= list(2,(V1206),(V1207));
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2327;
T2327:;
	base[1]= (V1202);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk342)();
	return;}
	}
}
/*	local entry for function NET-CONSTANT-CONVERTER	*/

static object LI107(V1210,V1211)

register object V1210;object V1211;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;{object V1212;
	{object V1213;
	V1213= (*(LnkLI343))((V1210),(V1211));
	if(((V1213))==Cnil){
	goto T2338;}
	V1212= make_cons((V1213),Cnil);
	goto T2335;
	goto T2338;
T2338:;
	V1212= Cnil;}
	goto T2335;
T2335:;
	if(V1212==Cnil)goto T2334;
	{object V1214 = V1212;
	VMR94(V1214)}
	goto T2334;
T2334:;}
	if(!(type_of((V1210))!=t_cons)){
	goto T2341;}
	{object V1215 = (*(LnkLI344))((V1210));
	VMR94(V1215)}
	goto T2341;
T2341:;
	{object V1216= CMPcar((V1210));
	if((V1216!= VV[164]))goto T2343;
	{object V1217;
	object V1218;
	object V1219;
	V1217= (*(LnkLI341))(CMPcddr((V1210)));
	{object V1220;
	object V1221= CMPcddr((V1210));
	if(V1221==Cnil){
	V1218= Cnil;
	goto T2345;}
	base[3]=V1220=MMcons(Cnil,Cnil);
	goto T2346;
T2346:;
	{object V1223;
	object V1224;
	V1223= CMPcar((V1221->c.c_car));
	V1224= CMPcadr((V1221->c.c_car));
	if(!(type_of((V1223))==t_cons)){
	goto T2352;}
	V1225= CMPcar((V1223));
	goto T2350;
	goto T2352;
T2352:;
	V1225= (V1223);
	goto T2350;
T2350:;
	V1226= (*(LnkLI343))((V1224),(V1211));
	(V1220->c.c_car)= make_cons(V1225,/* INLINE-ARGS */V1226);}
	if((V1221=MMcdr(V1221))==Cnil){
	V1218= base[3];
	goto T2345;}
	V1220=MMcdr(V1220)=MMcons(Cnil,Cnil);
	goto T2346;}
	goto T2345;
T2345:;
	base[3]= (V1218);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V1227= vs_base[0];
	V1219= CMPcar(V1227);
	V1228 = (V1217);
	base[3]= (V1218);
	vs_top=(vs_base=base+3)+1;
	Lnbutlast();
	vs_top=sup;
	V1229= vs_base[0];
	{object V1230 = list(2,listA(3,VV[189],V1228,V1229),CMPcdr((V1219)));
	VMR94(V1230)}}
	goto T2343;
T2343:;
	{object V1231 = (*(LnkLI344))((V1210));
	VMR94(V1231)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHODS-CONVERTER	*/

static object LI108(V1234,V1235)

register object V1234;object V1235;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	if(!(type_of((V1234))==t_cons)){
	goto T2360;}
	if(!((CMPcar((V1234)))==(VV[67]))){
	goto T2360;}
	V1236= (VFUN_NARGS=2,(*(LnkLI345))((V1235),CMPcadr((V1234))));
	{object V1237 = make_cons(VV[186],/* INLINE-ARGS */V1236);
	VMR95(V1237)}
	goto T2360;
T2360:;
	if(!(type_of((V1234))==t_cons)){
	goto T2365;}
	if(!((CMPcar((V1234)))==(VV[157]))){
	goto T2365;}
	{object V1238 = (*(LnkLI346))((V1235));
	VMR95(V1238)}
	goto T2365;
T2365:;
	{object V1239 = Cnil;
	VMR95(V1239)}
	return Cnil;
}
/*	function definition for CONVERT-METHODS	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{register object V1240;
	object V1241;
	object V1242;
	check_arg(3);
	V1240=(base[0]);
	V1241=(base[1]);
	V1242=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1240))==t_cons)){
	goto T2370;}
	if(!((CMPcar((V1240)))==(VV[186]))){
	goto T2370;}
	base[3]= CMPcdr((V1240));
	base[4]= (V1241);
	base[5]= (V1242);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2370;
T2370:;
	base[3]= (V1240);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function CONVERT-TABLE	*/

static object LI110(V1246,V1247,V1248)

object V1246;object V1247;object V1248;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if(!(type_of((V1246))==t_cons)){
	goto T2378;}
	if(!((CMPcar((V1246)))==(VV[189]))){
	goto T2378;}
	{object V1249;
	object V1250;
	{object V1251;
	object V1252= CMPcddr((V1246));
	if(V1252==Cnil){
	V1249= Cnil;
	goto T2382;}
	base[0]=V1251=MMcons(Cnil,Cnil);
	goto T2383;
T2383:;
	V1254= CMPcar((V1252->c.c_car));
	base[1]= CMPcdr((V1252->c.c_car));
	base[2]= (V1247);
	base[3]= (V1248);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	V1255= vs_base[0];
	(V1251->c.c_car)= make_cons(/* INLINE-ARGS */V1254,V1255);
	if((V1252=MMcdr(V1252))==Cnil){
	V1249= base[0];
	goto T2382;}
	V1251=MMcdr(V1251)=MMcons(Cnil,Cnil);
	goto T2383;}
	goto T2382;
T2382:;
	V1250= CMPcadr((V1246));
	{object V1256= CMPcadr((V1250));
	if((V1256!= VV[171]))goto T2390;
	{object V1257 = CMPcar((V1249));
	VMR97(V1257)}
	goto T2390;
T2390:;
	if((V1256!= VV[174]))goto T2391;
	{object V1258 = (V1249);
	VMR97(V1258)}
	goto T2391;
T2391:;
	if((V1256!= VV[175]))goto T2392;
	{register object V1259;
	base[0]= VV[190];
	if((CMPcar((V1250)))==Cnil){
	goto T2397;}
	base[1]= VV[145];
	goto T2395;
	goto T2397;
T2397:;
	base[1]= VV[108];
	goto T2395;
T2395:;
	vs_top=(vs_base=base+0)+2;
	Lmake_hash_table();
	vs_top=sup;
	V1259= vs_base[0];
	{register object V1260;
	register object V1261;
	V1260= (V1249);
	V1261= CMPcar((V1260));
	goto T2403;
T2403:;
	if(!(((V1260))==Cnil)){
	goto T2404;}
	goto T2399;
	goto T2404;
T2404:;
	{register object V1262;
	register object V1263;
	register object V1264;
	V1262= CMPcar((V1261));
	V1263= (V1259);
	V1264= CMPcdr((V1261));
	base[3]= (V1262);
	base[4]= (V1263);
	base[5]= (V1264);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1260= CMPcdr((V1260));
	V1261= CMPcar((V1260));
	goto T2403;}
	goto T2399;
T2399:;
	{object V1265 = (V1259);
	VMR97(V1265)}}
	goto T2392;
T2392:;
	FEerror("The ECASE key value ~s is illegal.",1,V1256);
	{object V1266 = Cnil;
	VMR97(V1266)}}}
	goto T2378;
T2378:;
	{object V1267 = Cnil;
	VMR97(V1267)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-SECONDARY-DISPATCH-FUNCTION1	*/

static object LI111(object V1269,object V1268,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB98 VMS98 VMV98
	{object V1270;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1269,Cnil);
	V1270= V1268;
	narg = narg - 2;
	if (narg <= 0) goto T2420;
	else {
	Vcs[2]=MMcons(first,Vcs[0]);}
	--narg; goto T2421;
	goto T2420;
T2420:;
	Vcs[2]= Cnil;
	Vcs[2]=MMcons(Vcs[2],Vcs[0]);
	goto T2421;
T2421:;
	if(!((CMPcar((V1270)))==(VV[67]))){
	goto T2424;}
	if(((Vcs[2]->c.c_car))!=Cnil){
	goto T2424;}
	{object V1271 = (VFUN_NARGS=2,(*(LnkLI345))((Vcs[0]->c.c_car),CMPcadr((V1270))));
	VMR98(V1271)}
	goto T2424;
T2424:;
	{object V1272;
	object V1273;
	object V1274;
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Vcs[2]);
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1272= vs_base[0];
	V1273= STREF(object,(V1272),8);
	V1274= (*(LnkLI348))((V1272));
	V1275 = CMPmake_fixnum((long)length((V1273)));
	base[4]= make_cons(V1275,(V1274));
	base[4]=MMcons(base[4],base[0]);
	V1276= list(2,VV[193],(V1270));
	V1277= make_cons(/* INLINE-ARGS */V1276,Cnil);
	V1278= list(3,VV[191],VV[192],list(3,VV[158],/* INLINE-ARGS */V1277,(VFUN_NARGS=3,(*(LnkLI350))((V1273),(V1274),VV[193]))));
	V1279= make_cons(/* INLINE-ARGS */V1278,Cnil);
	base[7]= (*(LnkLI349))((Vcs[2]->c.c_car),(V1273),(V1274),/* INLINE-ARGS */V1279);
	base[8]= (VV[351]->s.s_gfdef);
	base[9]= (VV[352]->s.s_gfdef);
	base[10]= 
	make_cclosure_new(LC132,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk353)();
	if(vs_base>=vs_top){vs_top=sup;goto T2440;}
	base[5]=MMcons(vs_base[0],base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2441;}
	base[6]=MMcons(vs_base[0],base[5]);
	vs_top=sup;
	goto T2442;
	goto T2440;
T2440:;
	base[5]=MMcons(Cnil,base[4]);
	goto T2441;
T2441:;
	base[6]=MMcons(Cnil,base[5]);
	goto T2442;
T2442:;
	{object V1280 = 
	make_cclosure_new(LC133,Cnil,base[6],Cdata);
	VMR98(V1280)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-UNORDERED-METHODS-EMF	*/

static object LI113(V1283,V1284)

object V1283;object V1284;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	base[0]=MMcons((V1284),Cnil);
	base[1]=MMcons((V1283),base[0]);
	if(((VV[196]->s.s_dbind))==Cnil){
	goto T2443;}
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
	goto T2443;
T2443:;
	{object V1285 = 
	make_cclosure_new(LC134,Cnil,base[1],Cdata);
	VMR99(V1285)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-VALUE-USING-CLASS-DFUN	*/

static void L114()
{register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{object V1286;
	object V1287;
	object V1288;
	check_arg(3);
	V1286=(base[0]);
	V1287=(base[1]);
	V1288=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1288);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk354)(Lclptr354);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1287);
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
	{object V1289;
	object V1290;
	object V1291;
	object V1292;
	check_arg(4);
	V1289=(base[0]);
	V1290=(base[1]);
	V1291=(base[2]);
	V1292=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]= (V1292);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk355)(Lclptr355);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V1289);
	base[6]= (V1291);
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
	{object V1293;
	object V1294;
	object V1295;
	check_arg(3);
	V1293=(base[0]);
	V1294=(base[1]);
	V1295=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1295);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk356)(Lclptr356);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1294);
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
	{object V1296;
	object V1297;
	register object V1298;
	check_arg(3);
	V1296=(base[0]);
	V1297=(base[1]);
	V1298=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1300;
	object V1301;
	V1300= CMPcar((V1296));
	V1301= CMPcdr((V1296));
	{object V1302;
	if(type_of(V1298)==t_structure){
	goto T2470;}
	goto T2468;
	goto T2470;
T2470:;
	if(!(((V1298)->str.str_def)==(VV[198]))){
	goto T2468;}
	V1302= STREF(object,(V1298),4);
	goto T2466;
	goto T2468;
T2468:;{object V1304;
	V1304= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1298);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V1305= vs_base[0];
	if(!((V1304)==(CMPcar(V1305)))){
	goto T2473;}}
	V1302= CMPcar(((V1298))->cc.cc_turbo[12]);
	goto T2466;
	goto T2473;
T2473:;
	V1302= Cnil;
	goto T2466;
T2466:;
	{register object V1307;
	{register object V1308;
	V1308= ((V1300))->v.v_self[2];
	if(!(type_of(V1308)==t_fixnum)){
	goto T2485;}
	V1308= ((V1302))->v.v_self[fix((V1308))];
	goto T2483;
	goto T2485;
T2485:;
	V1308= VV[14];
	goto T2483;
T2483:;
	if(!(((V1308))==(VV[14]))){
	goto T2488;}
	base[3]= (V1298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	V1307= vs_base[0];
	goto T2480;
	goto T2488;
T2488:;
	V1307= (V1308);}
	goto T2480;
T2480:;
	if(!(((V1307))==Cnil)){
	goto T2492;}
	{object V1310;
	base[3]= (V1298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1310= vs_base[0];
	if(!(((V1310))==(VV[115]))){
	goto T2496;}
	(void)((*(LnkLI358))((V1298)));
	goto T2496;
T2496:;
	if(!(((V1310))==(VV[199]))){
	goto T2500;}
	base[3]= (V1298);
	base[4]= VV[119];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= (VV[360]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2500;
T2500:;
	if(!(equal((V1310),VV[200]))){
	goto T2506;}
	base[3]= (V1298);
	base[4]= VV[121];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= (VV[361]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2506;
T2506:;
	if(!(((V1310))==(VV[201]))){
	goto T2512;}
	base[3]= (V1298);
	base[4]= VV[123];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= (VV[362]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2512;
T2512:;
	{register object V1312;
	V1312= ((V1300))->v.v_self[1];
	if(!(type_of(V1312)==t_fixnum)){
	goto T2525;}
	V1312= ((V1302))->v.v_self[fix((V1312))];
	goto T2523;
	goto T2525;
T2525:;
	V1312= VV[14];
	goto T2523;
T2523:;
	if(!(((V1312))==(VV[14]))){
	goto T2528;}
	base[3]= (V1298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V1311= vs_base[0];
	goto T2520;
	goto T2528;
T2528:;
	V1311= (V1312);}
	goto T2520;
T2520:;
	if((STREF(object,V1311,28))==Cnil){
	goto T2518;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI363))((V1298)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2518;
T2518:;
	base[3]= (*(LnkLI364))((V1298));
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2492;
T2492:;
	base[3]= (V1307);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2532;}
	{register object V1314;
	V1314= ((V1300))->v.v_self[2];
	if(!(type_of(V1314)==t_fixnum)){
	goto T2539;}
	V1314= ((V1302))->v.v_self[fix((V1314))];
	goto T2537;
	goto T2539;
T2539:;
	V1314= VV[14];
	goto T2537;
T2537:;
	if(!(((V1314))==(VV[14]))){
	goto T2542;}
	base[3]= (V1298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk357)(Lclptr357);
	return;
	goto T2542;
T2542:;
	base[3]= (V1314);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2532;
T2532:;
	if(!(type_of((V1307))==t_cons)){
	goto T2546;}
	{register object V1317;
	V1317= ((V1300))->v.v_self[2];
	if(!(type_of(V1317)==t_fixnum)){
	goto T2553;}
	V1317= ((V1302))->v.v_self[fix((V1317))];
	goto T2551;
	goto T2553;
T2553:;
	V1317= VV[14];
	goto T2551;
T2551:;
	if(!(((V1317))==(VV[14]))){
	goto T2556;}
	base[3]= (V1298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	V1316= vs_base[0];
	goto T2548;
	goto T2556;
T2556:;
	V1316= (V1317);}
	goto T2548;
T2548:;
	base[3]= CMPcar(V1316);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2546;
T2546:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}}
	}
}
/*	local entry for function (FAST-METHOD UPDATE-GF-DFUN (STD-CLASS T))	*/

static object LI118(V1323,V1324,V1325,V1326)

object V1323;object V1324;object V1325;register object V1326;
{	 VMB104 VMS104 VMV104
	bds_check;
	goto TTL;
TTL:;
	{object V1328;
	base[1]= (V1326);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1328= vs_base[0];
	bds_bind(VV[126],(V1325));
	if((STREF(object,(V1328),28))==Cnil){
	goto T2565;}
	{object V1329;
	object V1330;
	object V1331;
	base[1]= (V1326);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk365)();
	if(vs_base>=vs_top){vs_top=sup;goto T2569;}
	V1329= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2570;}
	V1330= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2571;}
	V1331= vs_base[0];
	vs_top=sup;
	goto T2572;
	goto T2569;
T2569:;
	V1329= Cnil;
	goto T2570;
T2570:;
	V1330= Cnil;
	goto T2571;
T2571:;
	V1331= Cnil;
	goto T2572;
T2572:;
	(void)((VFUN_NARGS=4,(*(LnkLI366))((V1326),(V1329),(V1330),(V1331))));
	{object V1332 = (VFUN_NARGS=4,(*(LnkLI287))((V1326),(V1329),(V1330),(V1331)));
	bds_unwind1;
	VMR104(V1332)}}
	goto T2565;
T2565:;
	{object V1333 = Cnil;
	bds_unwind1;
	VMR104(V1333)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD FUNCTION-KEYWORDS (STANDARD-METHOD))	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{object V1334;
	object V1335;
	register object V1336;
	check_arg(3);
	V1334=(base[0]);
	V1335=(base[1]);
	V1336=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1338;
	object V1339;
	object V1340;
	object V1341;
	object V1342;
	object V1343;
	if(!(type_of((V1336))==t_cons)){
	goto T2580;}
	base[3]= (*(LnkLI367))((V1336));
	goto T2578;
	goto T2580;
T2580:;
	base[4]= (V1336);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T2578;
T2578:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)();
	if(vs_base>=vs_top){vs_top=sup;goto T2583;}
	V1338= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2584;}
	V1339= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2585;}
	V1340= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2586;}
	V1341= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2587;}
	V1342= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2588;}
	V1343= vs_base[0];
	vs_top=sup;
	goto T2589;
	goto T2583;
T2583:;
	V1338= Cnil;
	goto T2584;
T2584:;
	V1339= Cnil;
	goto T2585;
T2585:;
	V1340= Cnil;
	goto T2586;
T2586:;
	V1341= Cnil;
	goto T2587;
T2587:;
	V1342= Cnil;
	goto T2588;
T2588:;
	V1343= Cnil;
	goto T2589;
T2589:;
	base[3]= (V1343);
	base[4]= (V1342);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	local entry for function METHOD-LL->GENERIC-FUNCTION-LL	*/

static object LI120(V1345)

object V1345;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	{object V1346;
	object V1347;
	object V1348;
	object V1349;
	object V1350;
	object V1351;
	base[1]= (V1345);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	if(vs_base>=vs_top){vs_top=sup;goto T2594;}
	V1346= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2595;}
	V1347= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2596;}
	V1348= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2597;}
	V1349= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2598;}
	V1350= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2599;}
	V1351= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2600;}
	base[0]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T2601;
	goto T2594;
T2594:;
	V1346= Cnil;
	goto T2595;
T2595:;
	V1347= Cnil;
	goto T2596;
T2596:;
	V1348= Cnil;
	goto T2597;
T2597:;
	V1349= Cnil;
	goto T2598;
T2598:;
	V1350= Cnil;
	goto T2599;
T2599:;
	V1351= Cnil;
	goto T2600;
T2600:;
	base[0]=MMcons(Cnil,Cnil);
	goto T2601;
T2601:;
	base[1]= 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	base[2]= (V1345);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk369)();
	vs_top=sup;
	{object V1352 = vs_base[0];
	VMR106(V1352)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-PRETTY-ARGLIST (STANDARD-GENERIC-FUNCTION))	*/

static object LI121(V1356,V1357,V1358)

object V1356;object V1357;object V1358;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1360;
	object V1361;
	base[0]= (V1358);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V1360= vs_base[0];
	V1361= Cnil;
	if(((V1360))==Cnil){
	goto T2610;}
	{object V1362;
	object V1363;
	object V1364;
	register object V1365;
	register object V1366;
	base[0]= CMPcar((V1360));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)(Lclptr370);
	if(vs_base>=vs_top){vs_top=sup;goto T2614;}
	V1362= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2615;}
	V1363= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2616;}
	V1364= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2617;}
	V1365= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2618;}
	V1366= vs_base[0];
	vs_top=sup;
	goto T2619;
	goto T2614;
T2614:;
	V1362= Cnil;
	goto T2615;
T2615:;
	V1363= Cnil;
	goto T2616;
T2616:;
	V1364= Cnil;
	goto T2617;
T2617:;
	V1365= Cnil;
	goto T2618;
T2618:;
	V1366= Cnil;
	goto T2619;
T2619:;
	{register object V1367;
	register object V1368;
	V1367= CMPcdr((V1360));
	V1368= CMPcar((V1367));
	goto T2624;
T2624:;
	if(!(((V1367))==Cnil)){
	goto T2625;}
	goto T2620;
	goto T2625;
T2625:;
	{register object V1369;
	register object V1370;
	register object V1371;
	base[2]= (V1368);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk371)(Lclptr371);
	if(vs_base>=vs_top){vs_top=sup;goto T2632;}
	V1369= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2633;}
	V1370= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2634;}
	V1371= vs_base[0];
	vs_top=sup;
	goto T2635;
	goto T2632;
T2632:;
	V1369= Cnil;
	goto T2633;
T2633:;
	V1370= Cnil;
	goto T2634;
T2634:;
	V1371= Cnil;
	goto T2635;
T2635:;
	base[2]= (V1365);
	base[3]= (V1371);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk372)();
	vs_top=sup;
	V1365= vs_base[0];
	if((V1366)!=Cnil){
	goto T2640;}
	V1366= (V1370);
	goto T2640;
T2640:;}
	V1367= CMPcdr((V1367));
	V1368= CMPcar((V1367));
	goto T2624;}
	goto T2620;
T2620:;
	if(((V1366))==Cnil){
	goto T2646;}
	V1361= VV[203];
	goto T2646;
T2646:;
	if(((V1365))==Cnil){
	goto T2650;}
	base[0]= make_cons(VV[204],Cnil);
	base[1]= (V1365);
	base[2]= (V1361);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1361= vs_base[0];
	goto T2650;
T2650:;
	if(((V1364))==Cnil){
	goto T2657;}
	V1372= list(2,VV[97],(V1364));
	V1361= nconc(/* INLINE-ARGS */V1372,(V1361));
	goto T2657;
T2657:;
	if(((V1363))==Cnil){
	goto T2661;}
	base[0]= make_cons(VV[205],Cnil);
	base[1]= (V1363);
	base[2]= (V1361);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1361= vs_base[0];
	goto T2661;
T2661:;
	{object V1373 = nconc((V1362),(V1361));
	VMR107(V1373)}}
	goto T2610;
T2610:;
	{object V1374 = Cnil;
	VMR107(V1374)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD METHOD-PRETTY-ARGLIST (STANDARD-METHOD))	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{object V1375;
	object V1376;
	object V1377;
	check_arg(3);
	V1375=(base[0]);
	V1376=(base[1]);
	V1377=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1379;
	register object V1380;
	object V1381;
	register object V1382;
	object V1383;
	register object V1384;
	object V1385;
	base[3]= (V1377);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V1385= vs_base[0];
	V1379= Cnil;
	V1380= Cnil;
	V1381= Cnil;
	V1382= Cnil;
	V1383= Cnil;
	V1384= VV[206];
	{register object V1386;
	register object V1387;
	V1386= (V1385);
	V1387= CMPcar((V1386));
	goto T2677;
T2677:;
	if(!(((V1386))==Cnil)){
	goto T2678;}
	goto T2673;
	goto T2678;
T2678:;
	if(!(((V1387))==(VV[205]))){
	goto T2684;}
	V1384= VV[207];
	goto T2682;
	goto T2684;
T2684:;
	if(!(((V1387))==(VV[97]))){
	goto T2688;}
	V1384= VV[208];
	goto T2682;
	goto T2688;
T2688:;
	if(!(((V1387))==(VV[204]))){
	goto T2692;}
	V1384= VV[209];
	goto T2682;
	goto T2692;
T2692:;
	if(!(((V1387))==(VV[202]))){
	goto T2696;}
	V1383= Ct;
	goto T2682;
	goto T2696;
T2696:;
	{register object V1388;
	{register object x= (V1387),V1389= VV[90];
	while(V1389!=Cnil)
	if(x==(V1389->c.c_car)){
	V1388= V1389;
	goto T2699;
	}else V1389=V1389->c.c_cdr;
	V1388= Cnil;}
	goto T2699;
T2699:;
	if(((V1388))==Cnil){
	goto T2701;}
	goto T2682;
	goto T2701;
T2701:;
	{object V1390= (V1384);
	if((V1390!= VV[206]))goto T2703;
	V1379= make_cons(V1387,(V1379));
	goto T2682;
	goto T2703;
T2703:;
	if((V1390!= VV[207]))goto T2705;
	V1380= make_cons(V1387,(V1380));
	goto T2682;
	goto T2705;
T2705:;
	if((V1390!= VV[209]))goto T2707;
	V1382= make_cons(V1387,(V1382));
	goto T2682;
	goto T2707;
T2707:;
	if((V1390!= VV[208]))goto T2709;
	V1381= (V1387);
	goto T2682;
	goto T2709;
T2709:;
	FEerror("The ECASE key value ~s is illegal.",1,V1390);
	goto T2682;}}
	goto T2682;
T2682:;
	V1386= CMPcdr((V1386));
	V1387= CMPcar((V1386));
	goto T2677;}
	goto T2673;
T2673:;
	base[3]= nreverse((V1379));
	base[4]= nreverse((V1380));
	base[5]= (V1381);
	base[6]= nreverse((V1382));
	base[7]= (V1383);
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
	{object V1394;
	check_arg(1);
	V1394=(base[0]);
	vs_top=sup;{object V1395;
	{register object x= (V1394),V1396= (base0[0]->c.c_car);
	while(V1396!=Cnil)
	if(x==(V1396->c.c_car)){
	V1395= V1396;
	goto T2722;
	}else V1396=V1396->c.c_cdr;
	V1395= Cnil;}
	goto T2722;
T2722:;
	if(V1395==Cnil)goto T2721;
	base[1]= V1395;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2721;
T2721:;}
	base[1]= (((V1394))==(VV[202])?Ct:Cnil);
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
	{object V1397;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1397=(base[0]);
	vs_top=sup;
	{object V1398;
	object V1399;
	object V1400;
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1397);
	base[6]= VV[108];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk294)();
	vs_top=sup;
	V1398= vs_base[0];
	V1399= (*(LnkLI373))((base0[0]->c.c_car),(base0[1]->c.c_car),(V1398));
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1399);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk307)();
	vs_top=sup;
	V1400= vs_base[0];
	base[4]= (V1400);
	base[5]= (V1397);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk374)();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC133(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{object V1401;
	object V1402;
	check_arg(2);
	V1401=(base[0]);
	V1402=(base[1]);
	vs_top=sup;
	{object V1403;
	object V1404;
	V1403= make_cons(Cnil,Cnil);
	V1404= (V1403);
	{register object V1405;
	register object V1406;
	V1405= (base0[0]->c.c_car);
	V1406= CMPcar((V1405));
	goto T2739;
T2739:;
	if(!(((V1405))==Cnil)){
	goto T2740;}
	goto T2735;
	goto T2740;
T2740:;
	{object V1407;
	register object V1408;{object V1409;
	{register object V1410;
	register object V1411;
	V1410= (V1403);
	V1411= CMPcar((V1410));
	goto T2751;
T2751:;
	if(!(((V1410))==Cnil)){
	goto T2752;}
	V1409= Cnil;
	goto T2747;
	goto T2752;
T2752:;
	if(!((CMPcar((V1411)))==((V1406)))){
	goto T2756;}
	V1409= (V1411);
	goto T2747;
	goto T2756;
T2756:;
	V1410= CMPcdr((V1410));
	V1411= CMPcar((V1410));
	goto T2751;}
	goto T2747;
T2747:;
	if(V1409==Cnil)goto T2746;
	V1407= V1409;
	goto T2745;
	goto T2746;
T2746:;}
	V1412 = (V1406);{object V1414;
	V1414= (*(LnkLI375))((V1406),(V1401),(V1402));
	if(V1414==Cnil)goto T2765;
	V1413= V1414;
	goto T2764;
	goto T2765;
T2765:;}
	base[6]= (V1406);
	base[7]= (V1401);
	base[8]= (V1402);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	V1413= vs_base[0];
	goto T2764;
T2764:;
	V1407= make_cons(V1412,V1413);
	goto T2745;
T2745:;
	V1408= make_cons((V1407),Cnil);
	{register object V1416;
	V1416= (V1408);
	(V1404)->c.c_cdr = (V1416);}
	V1404= (V1408);}
	V1405= CMPcdr((V1405));
	V1406= CMPcar((V1405));
	goto T2739;}
	goto T2735;
T2735:;
	{object V1417;
	base[3]= (base0[1]->c.c_car);
	{object V1418;
	{object V1419;
	object V1420= CMPcdr((V1403));
	if(V1420==Cnil){
	V1418= Cnil;
	goto T2782;}
	base[4]=V1419=MMcons(Cnil,Cnil);
	goto T2783;
T2783:;
	(V1419->c.c_car)= CMPcdr((V1420->c.c_car));
	if((V1420=MMcdr(V1420))==Cnil){
	V1418= base[4];
	goto T2782;}
	V1419=MMcdr(V1419)=MMcons(Cnil,Cnil);
	goto T2783;}
	goto T2782;
T2782:;
	 vs_top=base+4;
	 while(V1418!=Cnil)
	 {vs_push((V1418)->c.c_car);V1418=(V1418)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1417= vs_base[0];
	if(((base0[4]->c.c_car))==Cnil){
	goto T2786;}
	base[3]= (V1417);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2786;
T2786:;
	base[3]= (V1417);
	base[4]= list(2,VV[194],(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk258)();
	vs_top=sup;
	V1421= vs_base[0];
	V1422 = (base0[2]->c.c_car);
	base[3]= (VFUN_NARGS=4,(*(LnkLI376))(VV[54],V1421,VV[195],V1422));
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
	{object V1423;
	check_arg(1);
	V1423=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI377))((V1423),(base0[3]->c.c_car));
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
	goto T2792;}
	base[5]= CMPcdr(base[0]);
	base[6]= base[3];
	V1424= make_cons(CMPcar(base[0]),base[2]);
	base[7]= make_cons(/* INLINE-ARGS */V1424,base[4]);
	vs_top=(vs_base=base+5)+3;
	L100(base0);
	return;
	goto T2792;
T2792:;
	{object V1425;
	object V1426;
	V1425= CMPcar(base[0]);
	base[6]= CMPcar(base[1]);
	V1427 = (V1425);
	base[9]= base[6];
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V1428= vs_base[0];
	V1426= nth(fix(V1427),V1428);
	base[10]= (V1426);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk378)();
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
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T2808;}
	base[9]= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2809;}
	base[10]= vs_base[0];
	vs_top=sup;
	goto T2810;
	goto T2808;
T2808:;
	base[9]= Cnil;
	goto T2809;
T2809:;
	base[10]= Cnil;
	goto T2810;
T2810:;
	base[11]= Cnil;
	vs_top=(vs_base=base+11)+1;
	L98(base0,base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2812;}
	base[11]= Cnil;
	base[12]= Ct;
	vs_top=(vs_base=base+11)+2;
	L99(base0,base);
	return;
	goto T2812;
T2812:;
	base[11]= Ct;
	vs_top=(vs_base=base+11)+1;
	L98(base0,base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2818;}
	base[11]= Ct;
	base[12]= Ct;
	vs_top=(vs_base=base+11)+2;
	L99(base0,base);
	return;
	goto T2818;
T2818:;
	base[11]= (V1425);
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
	{object V1429;
	object V1430;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1429=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2829;}
	V1430=(base[1]);
	vs_top=sup;
	goto T2830;
	goto T2829;
T2829:;
	V1430= Cnil;
	goto T2830;
T2830:;
	{object V1431;
	if(((V1429))==Cnil){
	goto T2834;}
	V1431= base1[8];
	goto T2832;
	goto T2834;
T2834:;
	V1431= list(2,VV[144],base1[8]);
	goto T2832;
T2832:;
	base[2]= base1[0];
	base[3]= CMPcdr(base1[1]);
	if(((V1430))==Cnil){
	goto T2840;}
	base[4]= base1[2];
	goto T2838;
	goto T2840;
T2840:;
	base[4]= (*(LnkLI380))((V1431),base1[2]);
	goto T2838;
T2838:;
	if(((V1429))==Cnil){
	goto T2844;}
	V1432= make_cons(base1[6],Cnil);
	base[5]= append(base1[3],/* INLINE-ARGS */V1432);
	goto T2842;
	goto T2844;
T2844:;
	base[5]= base1[3];
	goto T2842;
T2842:;
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
	{object V1433;
	check_arg(1);
	V1433=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1433))==Cnil){
	goto T2848;}
	base[1]= base1[9];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2848;
T2848:;
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
	{object V1434;
	object V1435;
	object V1436;
	check_arg(3);
	V1434=(base[0]);
	V1435=(base[1]);
	V1436=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1434))==Cnil){
	goto T2851;}
	{object V1437;
	object V1438;
	V1437= CMPcar((V1434));{object V1439;
	V1439= nth(fix((V1437)),base0[2]);
	if(V1439==Cnil)goto T2855;
	V1438= V1439;
	goto T2854;
	goto T2855;
T2855:;}
	V1438= Ct;
	goto T2854;
T2854:;
	if(!((nth(fix((V1437)),base0[9]))==(Ct))){
	goto T2858;}
	V1434= CMPcdr((V1434));
	V1440= make_cons((V1437),(V1438));
	V1436= make_cons(/* INLINE-ARGS */V1440,(V1436));
	goto TTL;
	return;
	goto T2858;
T2858:;
	base[5]= (V1434);
	base[6]= (V1435);
	base[7]= (V1438);
	base[8]= Cnil;
	base[9]= (V1436);
	vs_top=(vs_base=base+5)+5;
	L101(base0);
	return;}
	goto T2851;
T2851:;
	base[3]= (V1435);
	{register object V1441;
	base[5]= base0[8];
	vs_top=(vs_base=base+5)+1;
	Lmake_list();
	vs_top=sup;
	V1441= vs_base[0];
	{register object V1442;
	register object V1443;
	V1442= (V1436);
	V1443= CMPcar((V1442));
	goto T2877;
T2877:;
	if(!(((V1442))==Cnil)){
	goto T2878;}
	goto T2873;
	goto T2878;
T2878:;
	{register object V1444;
	register object V1445;
	register object V1446;
	V1444= CMPcar((V1443));
	V1445= (V1441);
	V1446= CMPcdr((V1443));
	(nthcdr(fix((V1444)),(V1445)))->c.c_car = (V1446);
	(void)(nthcdr(fix((V1444)),(V1445)));}
	V1442= CMPcdr((V1442));
	V1443= CMPcar((V1442));
	goto T2877;}
	goto T2873;
T2873:;
	base[4]= (V1441);}
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
	{register object V1447;
	check_arg(1);
	V1447=(base[0]);
	vs_top=sup;
	if(!(type_of((V1447))==t_cons)){
	goto T2893;}
	if(!((CMPcar((V1447)))==(VV[108]))){
	goto T2893;}
	base[1]= list(2,VV[109],(*(LnkLI149))(CMPcadr((V1447))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2893;
T2893:;
	base[1]= (V1447);
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
	{object V1448;
	object V1449;
	object V1450;
	object V1451;
	check_arg(4);
	V1448=(base[0]);
	V1449=(base[1]);
	V1450=(base[2]);
	V1451=(base[3]);
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
	{object V1452;
	check_arg(2);
	V1452=(base[0]);
	base[1]=MMcons(base[1],base0[0]);
	vs_top=sup;
	if(((V1452))==Cnil){
	goto T2898;}
	if(((base0[2]->c.c_car))==Cnil){
	goto T2900;}
	{object V1453;
	{object V1454;
	object V1455= (base[1]->c.c_car);
	if(V1455==Cnil){
	V1453= Cnil;
	goto T2903;}
	base[3]=V1454=MMcons(Cnil,Cnil);
	goto T2904;
T2904:;
	(V1454->c.c_car)= (*(LnkLI381))((V1455->c.c_car));
	if((V1455=MMcdr(V1455))==Cnil){
	V1453= base[3];
	goto T2903;}
	V1454=MMcdr(V1454)=MMcons(Cnil,Cnil);
	goto T2904;}
	goto T2903;
T2903:;
	(base0[0]->c.c_car)= make_cons((V1453),(base0[0]->c.c_car));}
	goto T2900;
T2900:;
	V1456= (*(LnkLI382))((V1452));
	base[2]= ((/* INLINE-ARGS */V1456)==Cnil?Ct:Cnil);
	base[2]=MMcons(base[2],base[1]);
	V1457 = (V1452);
	V1458 = (base0[1]->c.c_car);
	V1459= 
	make_cclosure_new(LC136,Cnil,base[2],Cdata);
	base[3]= (*(LnkLI383))(V1457,V1458,V1459);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2898;
T2898:;
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
	{object V1460;
	check_arg(1);
	V1460=(base[0]);
	vs_top=sup;
	base[1]= (VFUN_NARGS=6,(*(LnkLI303))((base0[6]->c.c_car),(V1460),(base0[1]->c.c_car),Cnil,(base0[5]->c.c_car),(base0[0]->c.c_car)));
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
	{object V1461;
	register object V1462;
	object V1463;
	register object V1464;
	check_arg(4);
	V1461=(base[0]);
	V1462=(base[1]);
	V1463=(base[2]);
	V1464=(base[3]);
	vs_top=sup;
	{object V1465;
	V1465= (*(LnkLI384))((V1461));
	if(!((CMPcar((V1462)))==(VV[108]))){
	goto T2911;}
	{object V1466;
	object V1467;
	object V1468;
	object V1469;
	if(type_of((V1464))==t_cons){
	goto T2914;}
	V1466= Cnil;
	goto T2913;
	goto T2914;
T2914:;
	if(!((CMPcar((V1464)))==(VV[163]))){
	goto T2918;}
	goto T2916;
	goto T2918;
T2918:;
	if((CMPcar((V1464)))==(VV[164])){
	goto T2916;}
	V1466= Cnil;
	goto T2913;
	goto T2916;
T2916:;
	V1466= (((V1465))==(CMPcadr((V1464)))?Ct:Cnil);
	goto T2913;
T2913:;
	if(((V1466))==Cnil){
	goto T2922;}
	V1467= CMPcddr((V1464));
	goto T2920;
	goto T2922;
T2922:;
	V1470= list(2,Ct,(V1464));
	V1467= make_cons(/* INLINE-ARGS */V1470,Cnil);
	goto T2920;
T2920:;
	if(((*(LnkLI385))((V1463)))==Cnil){
	goto T2926;}
	if(((V1466))==Cnil){
	goto T2931;}
	if(!((CMPcar((V1464)))==(VV[164]))){
	goto T2926;}
	goto T2929;
	goto T2931;
T2931:;
	if(((*(LnkLI385))((V1464)))==Cnil){
	goto T2926;}
	goto T2929;
T2929:;
	V1468= VV[164];
	goto T2924;
	goto T2926;
T2926:;
	V1468= VV[163];
	goto T2924;
T2924:;
	V1469= make_cons(CMPcadr((V1462)),Cnil);
	base[8]= listA(4,(V1468),(V1465),list(2,(V1469),(V1463)),(V1467));
	vs_top=(vs_base=base+8)+1;
	return;}
	goto T2911;
T2911:;
	{object V1472;
	V1472= (*(LnkLI384))((V1461));
	{object V1473= CMPcar((V1462));
	if((V1473!= VV[335]))goto T2936;
	V1471= list(3,VV[166],(V1472),CMPcadr((V1462)));
	goto T2934;
	goto T2936;
T2936:;
	if((V1473!= VV[109]))goto T2937;
	V1471= list(3,VV[167],(V1472),CMPcadr((V1462)));
	goto T2934;
	goto T2937;
T2937:;
	V1471= Cnil;}}
	goto T2934;
T2934:;
	V1474 = (V1463);
	V1475 = (V1464);
	base[4]= list(4,VV[165],V1471,V1474,V1475);
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
	{register object V1476;
	object V1477;
	check_arg(2);
	V1476=(base[0]);
	V1477=(base[1]);
	vs_top=sup;
	if(((base0[1]->c.c_car))!=Cnil){
	goto T2938;}
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base0[0]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2939;}
	goto T2942;}
	else{
	base[3]=MMcons(Cnil,base[2]);
	base[4]= (V1476);
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1478= vs_base[0];
	V1479 = (base0[0]->c.c_car);
	V1480= 
	make_cclosure_new(LC137,Cnil,base[3],Cdata);
	(void)((*(LnkLI383))(V1478,V1479,V1480));
	V1476= (base[3]->c.c_car);
	frs_pop();
	}
	goto T2942;
T2942:;
	goto T2938;
T2938:;
	base[2]= list(3,VV[67],(V1476),(V1477));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2939;
T2939:;
	base[2]= list(3,VV[157],(V1476),(V1477));
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
	{object V1481;
	check_arg(1);
	V1481=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T2949;}
	{frame_ptr fr;
	fr=frs_sch((base0[1]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[386]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	unwind(fr,Cnil);}
	goto T2949;
T2949:;
	(base0[0]->c.c_car)= (V1481);
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
	{register object V1482;
	check_arg(1);
	V1482=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2954;}
	{register object x= base0[0],V1483= (V1482);
	while(V1483!=Cnil)
	if(x==(V1483->c.c_car)){
	goto T2958;
	}else V1483=V1483->c.c_cdr;
	goto T2955;}
	goto T2958;
T2958:;
	goto T2954;
T2954:;
	{object V1484;
	V1484= (*(LnkLI387))(base0[5],base0[7],(V1482),base0[6]);
	if(((V1484))==Cnil){
	goto T2961;}
	V1485 = base0[9];
	V1486= (VFUN_NARGS=3,(*(LnkLI388))(base0[1],(V1484),base0[9]));
	if(!((V1485)==(/* INLINE-ARGS */V1486))){
	goto T2961;}
	{object V1487;
	if(!((base0[2])==(Ct))){
	goto T2967;}
	base[1]= base0[3];
	base[2]= (V1482);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk389)();
	vs_top=sup;
	V1487= vs_base[0];
	goto T2965;
	goto T2967;
T2967:;
	if(!((base0[2])==(VV[112]))){
	goto T2972;}
	V1487= (*(LnkLI390))(base0[3],(V1482));
	goto T2965;
	goto T2972;
T2972:;
	V1487= Cnil;
	goto T2965;
T2965:;
	base0[1]= (VFUN_NARGS=4,(*(LnkLI391))(base0[1],(V1484),(V1487),Ct));
	base[1]= base0[1];
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2961;
T2961:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2955;
T2955:;
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
	{object V1488;
	check_arg(1);
	V1488=(base[0]);
	vs_top=sup;
	base[1]= (V1488);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk392)(Lclptr392);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2976;}
	{register object V1489;
	register object V1490;
	base[3]= (V1488);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V1489= vs_base[0];
	V1490= CMPcar((V1489));
	goto T2983;
T2983:;
	if(!(((V1489))==Cnil)){
	goto T2984;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2984;
T2984:;
	base[3]= (V1490);
	base[4]= (base0[0]->c.c_car);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk394)(Lclptr394);
	vs_top=sup;
	V1489= CMPcdr((V1489));
	V1490= CMPcar((V1489));
	goto T2983;}
	goto T2976;
T2976:;
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
	{object V1491;
	check_arg(1);
	V1491=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1491);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk392)(Lclptr392);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2998;}
	{register object V1492;
	register object V1493;
	base[3]= (V1491);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	V1492= vs_base[0];
	V1493= CMPcar((V1492));
	goto T3005;
T3005:;
	if(!(((V1492))==Cnil)){
	goto T3006;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3006;
T3006:;
	base[3]= (V1493);
	base[4]= (base0[1]->c.c_car);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk394)(Lclptr394);
	vs_top=sup;
	V1492= CMPcdr((V1492));
	V1493= CMPcar((V1492));
	goto T3005;}
	goto T2998;
T2998:;
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
	{object V1494;
	check_arg(1);
	V1494=(base[0]);
	vs_top=sup;
	{register object x= (V1494),V1495= (base0[1]->c.c_car);
	while(V1495!=Cnil)
	if(eql(x,V1495->c.c_car)){
	goto T3019;
	}else V1495=V1495->c.c_cdr;}
	{register object V1496;
	register object V1497;
	V1496= (base0[0]->c.c_car);
	V1497= CMPcar((V1496));
	goto T3027;
T3027:;
	if(!(((V1496))==Cnil)){
	goto T3028;}
	goto T3020;
	goto T3028;
T3028:;
	V1499 = (V1497);
	base[2]= (*(LnkLI149))((V1494));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V1500= vs_base[0];
	{register object x= V1499,V1498= V1500;
	while(V1498!=Cnil)
	if(eql(x,V1498->c.c_car)){
	goto T3032;
	}else V1498=V1498->c.c_cdr;}
	goto T3032;
T3032:;
	V1496= CMPcdr((V1496));
	V1497= CMPcar((V1496));
	goto T3027;}
	goto T3019;
T3019:;
	base[1]= (*(LnkLI312))((V1494));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3020;
T3020:;
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
	{object V1501;
	check_arg(1);
	V1501=(base[0]);
	vs_top=sup;
	{register object x= (V1501),V1502= (base0[0]->c.c_car);
	while(V1502!=Cnil)
	if(eql(x,V1502->c.c_car)){
	base[1]= V1502;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1502=V1502->c.c_cdr;
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
	{object V1503;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1503=(base[0]);
	vs_top=sup;
	{object V1504;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1503);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk115)(Lclptr115);
	vs_top=sup;
	V1504= vs_base[0];
	if(((V1504))==Cnil){
	goto T3044;}
	{object V1505;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1504);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk307)();
	vs_top=sup;
	V1505= vs_base[0];
	base[1]= (V1505);
	base[2]= (V1503);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk374)();
	return;}
	goto T3044;
T3044:;
	base[1]=VV[395]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1506;
	V1506= (V1503);
	 vs_top=base+3;
	 while(V1506!=Cnil)
	 {vs_push((V1506)->c.c_car);V1506=(V1506)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk395)(Lclptr395);
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC123(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	{object V1507;
	object V1508;
	check_arg(2);
	V1507=(base[0]);
	V1508=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1509;
	V1509= (V1507);
	 vs_top=base+3;
	 while(V1509!=Cnil)
	 {vs_push((V1509)->c.c_car);V1509=(V1509)->c.c_cdr;}
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
	{object V1510;
	object V1511;
	object V1512;
	check_arg(3);
	V1510=(base[0]);
	V1511=(base[1]);
	V1512=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[84];
	base[4]= base0[2];
	base[5]= (V1510);
	base[6]= (V1511);
	base[7]= (V1512);
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
	{object V1513;
	object V1514;
	object V1515;
	check_arg(3);
	V1513=(base[0]);
	V1514=(base[1]);
	V1515=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[57];
	base[4]= base0[2];
	base[5]= (V1513);
	base[6]= (V1514);
	base[7]= (V1515);
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
static void LnkT395(ptr) object *ptr;{ call_or_link_closure(VV[395],(void **)(void *)&Lnk395,(void **)(void *)&Lclptr395);} /* NO-APPLICABLE-METHOD */
static void LnkT115(ptr) object *ptr;{ call_or_link_closure(VV[115],(void **)(void *)&Lnk115,(void **)(void *)&Lclptr115);} /* COMPUTE-APPLICABLE-METHODS */
static void LnkT394(ptr) object *ptr;{ call_or_link_closure(VV[394],(void **)(void *)&Lnk394,(void **)(void *)&Lclptr394);} /* COMPUTE-SLOT-ACCESSOR-INFO */
static void LnkT393(ptr) object *ptr;{ call_or_link_closure(VV[393],(void **)(void *)&Lnk393,(void **)(void *)&Lclptr393);} /* CLASS-SLOTS */
static void LnkT392(ptr) object *ptr;{ call_or_link_closure(VV[392],(void **)(void *)&Lnk392,(void **)(void *)&Lclptr392);} /* CLASS-FINALIZED-P */
static object  LnkTLI391(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[391],(void **)(void *)&LnkLI391,first,ap);va_end(ap);return V1;} /* FILL-CACHE */
static object  LnkTLI390(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[390],(void **)(void *)&LnkLI390,2,first,ap);va_end(ap);return V1;} /* VALUE-FOR-CACHING */
static void LnkT389(){ call_or_link(VV[389],(void **)(void *)&Lnk389);} /* SDFUN-FOR-CACHING */
static object  LnkTLI388(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[388],(void **)(void *)&LnkLI388,first,ap);va_end(ap);return V1;} /* PROBE-CACHE */
static object  LnkTLI387(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[387],(void **)(void *)&LnkLI387,4,first,ap);va_end(ap);return V1;} /* GET-WRAPPERS-FROM-CLASSES */
static object  LnkTLI385(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[385],(void **)(void *)&LnkLI385,1,first,ap);va_end(ap);return V1;} /* DNET-METHODS-P */
static object  LnkTLI384(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[384],(void **)(void *)&LnkLI384,1,first,ap);va_end(ap);return V1;} /* DFUN-ARG-SYMBOL */
static object  LnkTLI383(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[383],(void **)(void *)&LnkLI383,3,first,ap);va_end(ap);return V1;} /* MAP-ALL-ORDERS */
static object  LnkTLI382(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[382],(void **)(void *)&LnkLI382,1,first,ap);va_end(ap);return V1;} /* METHODS-CONTAIN-EQL-SPECIALIZER-P */
static object  LnkTLI381(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[381],(void **)(void *)&LnkLI381,1,first,ap);va_end(ap);return V1;} /* CLASS-FROM-TYPE */
static object  LnkTLI380(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[380],(void **)(void *)&LnkLI380,2,first,ap);va_end(ap);return V1;} /* AUGMENT-TYPE */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT378(){ call_or_link(VV[378],(void **)(void *)&Lnk378);} /* TYPE-FROM-SPECIALIZER */
static object  LnkTLI377(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[377],(void **)(void *)&LnkLI377,2,first,ap);va_end(ap);return V1;} /* NET-CONSTANT-CONVERTER */
static object  LnkTLI376(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[376],(void **)(void *)&LnkLI376,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL */
static object  LnkTLI375(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[375],(void **)(void *)&LnkLI375,3,first,ap);va_end(ap);return V1;} /* CONVERT-TABLE */
static void LnkT374(){ call_or_link(VV[374],(void **)(void *)&Lnk374);} /* INVOKE-EMF */
static object  LnkTLI373(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[373],(void **)(void *)&LnkLI373,3,first,ap);va_end(ap);return V1;} /* SORT-APPLICABLE-METHODS */
static void LnkT372(){ call_or_link(VV[372],(void **)(void *)&Lnk372);} /* UNION */
static void LnkT371(ptr) object *ptr;{ call_or_link_closure(VV[371],(void **)(void *)&Lnk371,(void **)(void *)&Lclptr371);} /* FUNCTION-KEYWORDS */
static void LnkT370(ptr) object *ptr;{ call_or_link_closure(VV[370],(void **)(void *)&Lnk370,(void **)(void *)&Lclptr370);} /* METHOD-PRETTY-ARGLIST */
static void LnkT369(){ call_or_link(VV[369],(void **)(void *)&Lnk369);} /* REMOVE-IF */
static void LnkT368(){ call_or_link(VV[368],(void **)(void *)&Lnk368);} /* ANALYZE-LAMBDA-LIST */
static object  LnkTLI367(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[367],(void **)(void *)&LnkLI367,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static object  LnkTLI366(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[366],(void **)(void *)&LnkLI366,first,ap);va_end(ap);return V1;} /* SET-DFUN */
static void LnkT365(){ call_or_link(VV[365],(void **)(void *)&Lnk365);} /* MAKE-FINAL-DFUN-INTERNAL */
static object  LnkTLI364(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[364],(void **)(void *)&LnkLI364,1,first,ap);va_end(ap);return V1;} /* MAKE-INITIAL-DFUN */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[363],(void **)(void *)&LnkLI363,first,ap);va_end(ap);return V1;} /* MAKE-FINAL-DFUN */
static void LnkT359(){ call_or_link(VV[359],(void **)(void *)&Lnk359);} /* UPDATE-SLOT-VALUE-GF-INFO */
static object  LnkTLI358(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[358],(void **)(void *)&LnkLI358,1,first,ap);va_end(ap);return V1;} /* UPDATE-ALL-C-A-M-GF-INFO */
static void LnkT357(ptr) object *ptr;{ call_or_link_closure(VV[357],(void **)(void *)&Lnk357,(void **)(void *)&Lclptr357);} /* PCL DFUN-STATE slot READER */
static void LnkT356(ptr) object *ptr;{ call_or_link_closure(VV[356],(void **)(void *)&Lnk356,(void **)(void *)&Lclptr356);} /* SLOT-DEFINITION-BOUNDP-FUNCTION */
static void LnkT355(ptr) object *ptr;{ call_or_link_closure(VV[355],(void **)(void *)&Lnk355,(void **)(void *)&Lclptr355);} /* SLOT-DEFINITION-WRITER-FUNCTION */
static void LnkT354(ptr) object *ptr;{ call_or_link_closure(VV[354],(void **)(void *)&Lnk354,(void **)(void *)&Lclptr354);} /* SLOT-DEFINITION-READER-FUNCTION */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* GET-FUNCTION1 */
static object  LnkTLI350(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[350],(void **)(void *)&LnkLI350,first,ap);va_end(ap);return V1;} /* MAKE-EMF-CALL */
static object  LnkTLI349(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[349],(void **)(void *)&LnkLI349,4,first,ap);va_end(ap);return V1;} /* MAKE-DISPATCH-LAMBDA */
static object  LnkTLI348(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[348],(void **)(void *)&LnkLI348,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* CONVERT-METHODS */
static object  LnkTLI346(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[346],(void **)(void *)&LnkLI346,1,first,ap);va_end(ap);return V1;} /* DEFAULT-SECONDARY-DISPATCH-FUNCTION */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[345],(void **)(void *)&LnkLI345,first,ap);va_end(ap);return V1;} /* GET-EFFECTIVE-METHOD-FUNCTION1 */
static object  LnkTLI344(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[344],(void **)(void *)&LnkLI344,1,first,ap);va_end(ap);return V1;} /* DEFAULT-CONSTANT-CONVERTER */
static object  LnkTLI343(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[343],(void **)(void *)&LnkLI343,2,first,ap);va_end(ap);return V1;} /* METHODS-CONVERTER */
static void LnkT342(){ call_or_link(VV[342],(void **)(void *)&Lnk342);} /* DEFAULT-CODE-CONVERTER */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,1,first,ap);va_end(ap);return V1;} /* COMPUTE-MCASE-PARAMETERS */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[338],(void **)(void *)&LnkLI338,1,first,ap);va_end(ap);return V1;} /* DEFAULT-TEST-CONVERTER */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[337],(void **)(void *)&LnkLI337,first,ap);va_end(ap);return V1;} /* COMPUTE-SECONDARY-DISPATCH-FUNCTION1 */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[336],(void **)(void *)&LnkLI336,257,first,ap);va_end(ap);return V1;} /* ARG-INFO-NUMBER-REQUIRED */
static void LnkT334(){ call_or_link(VV[334],(void **)(void *)&Lnk334);} /* GENERATE-DISCRIMINATION-NET-INTERNAL */
static object  LnkTLI332(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[332],(void **)(void *)&LnkLI332,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-NKEYS */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASS-LISTS */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[330],(void **)(void *)&LnkLI330,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASSES */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASSES-INTERNAL */
static void LnkT328(ptr) object *ptr;{ call_or_link_closure(VV[328],(void **)(void *)&Lnk328,(void **)(void *)&Lclptr328);} /* CLASS-DIRECT-SUBCLASSES */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[327],(void **)(void *)&LnkLI327,2,first,ap);va_end(ap);return V1;} /* SET-STRUCTURE-SVUC-METHOD */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,2,first,ap);va_end(ap);return V1;} /* SET-STANDARD-SVUC-METHOD */
static void LnkT325(){ call_or_link(VV[325],(void **)(void *)&Lnk325);} /* MAP-ALL-CLASSES */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[324],(void **)(void *)&LnkLI324,2,first,ap);va_end(ap);return V1;} /* UPDATE-STD-OR-STR-METHODS */
static void LnkT323(){ call_or_link(VV[323],(void **)(void *)&Lnk323);} /* GET-ACCESSOR-FROM-SVUC-METHOD-FUNCTION */
static void LnkT322(){ call_or_link(VV[322],(void **)(void *)&Lnk322);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)(void *)&LnkLI321,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT320(){ call_or_link(VV[320],(void **)(void *)&Lnk320);} /* GET-OPTIMIZED-STD-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION */
static void LnkT319(){ call_or_link(VV[319],(void **)(void *)&Lnk319);} /* GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[318],(void **)(void *)&LnkLI318,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SVUC-METHOD */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,1,first,ap);va_end(ap);return V1;} /* STANDARD-SVUC-METHOD */
static void LnkT316(ptr) object *ptr;{ call_or_link_closure(VV[316],(void **)(void *)&Lnk316,(void **)(void *)&Lclptr316);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* COMPUTE-APPLICABLE-METHODS-EMF */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)(void *)&LnkLI314,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[313],(void **)(void *)&LnkLI313,1,first,ap);va_end(ap);return V1;} /* UPDATE-GF-SIMPLE-ACCESSOR-TYPE */
static object  LnkTLI312(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[312],(void **)(void *)&LnkLI312,1,first,ap);va_end(ap);return V1;} /* UPDATE-C-A-M-GF-INFO */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)(void *)&LnkLI311,1,first,ap);va_end(ap);return V1;} /* MAP-ALL-GENERIC-FUNCTIONS */
static void LnkT310(ptr) object *ptr;{ call_or_link_closure(VV[310],(void **)(void *)&Lnk310,(void **)(void *)&Lclptr310);} /* GF-ARG-INFO */
static object  LnkTLI308(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[308],(void **)(void *)&LnkLI308,2,first,ap);va_end(ap);return V1;} /* LIST-EQ */
static void LnkT307(){ call_or_link(VV[307],(void **)(void *)&Lnk307);} /* GET-EFFECTIVE-METHOD-FUNCTION */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[273],(void **)(void *)&LnkLI273,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT306(ptr) object *ptr;{ call_or_link_closure(VV[306],(void **)(void *)&Lnk306,(void **)(void *)&Lclptr306);} /* METHOD-FUNCTION */
static void LnkT305(ptr) object *ptr;{ call_or_link_closure(VV[305],(void **)(void *)&Lnk305,(void **)(void *)&Lclptr305);} /* METHOD-FAST-FUNCTION */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[304],(void **)(void *)&LnkLI304,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[303],(void **)(void *)&LnkLI303,first,ap);va_end(ap);return V1;} /* GET-SECONDARY-DISPATCH-FUNCTION1 */
static void LnkT302(){ call_or_link(VV[302],(void **)(void *)&Lnk302);} /* CLASS-EQ-TYPE */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)(void *)&Lnk301,(void **)(void *)&Lclptr301);} /* CLASS-WRAPPER */
static void LnkT300(){ call_or_link(VV[300],(void **)(void *)&Lnk300);} /* GET-GENERIC-FUNCTION-INFO */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* LISP OBJECT slot READER */
static void LnkT298(ptr) object *ptr;{ call_or_link_closure(VV[298],(void **)(void *)&Lnk298,(void **)(void *)&Lclptr298);} /* SPECIALIZER-OBJECT */
static void LnkT297(ptr) object *ptr;{ call_or_link_closure(VV[297],(void **)(void *)&Lnk297,(void **)(void *)&Lclptr297);} /* SPECIALIZER-CLASS */
static void LnkT155(ptr) object *ptr;{ call_or_link_closure(VV[155],(void **)(void *)&Lnk155,(void **)(void *)&Lclptr155);} /* CLASS-PRECEDENCE-LIST */
static void LnkT296(ptr) object *ptr;{ call_or_link_closure(VV[296],(void **)(void *)&Lnk296,(void **)(void *)&Lclptr296);} /* CLASS-INCOMPATIBLE-SUPERCLASS-LIST */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* COMPUTE-APPLICABLE-METHODS-USING-TYPES */
static void LnkT294(){ call_or_link(VV[294],(void **)(void *)&Lnk294);} /* TYPES-FROM-ARGUMENTS */
static void LnkT293(ptr) object *ptr;{ call_or_link_closure(VV[293],(void **)(void *)&Lnk293,(void **)(void *)&Lclptr293);} /* REMOVE-DIRECT-METHOD */
static void LnkT292(){ call_or_link(VV[292],(void **)(void *)&Lnk292);} /* REMOVE */
static void LnkT291(){ call_or_link(VV[291],(void **)(void *)&Lnk291);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[290],(void **)(void *)&LnkLI290,1,first,ap);va_end(ap);return V1;} /* TYPE-CLASS */
static void LnkT289(ptr) object *ptr;{ call_or_link_closure(VV[289],(void **)(void *)&Lnk289,(void **)(void *)&Lclptr289);} /* ADD-DIRECT-METHOD */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[288],(void **)(void *)&LnkLI288,first,ap);va_end(ap);return V1;} /* REAL-ADD-METHOD */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[287],(void **)(void *)&LnkLI287,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static object  LnkTLI286(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[286],(void **)(void *)&LnkLI286,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-VALID-P */
static object  LnkTLI285(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[285],(void **)(void *)&LnkLI285,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO */
static void LnkT284(ptr) object *ptr;{ call_or_link_closure(VV[284],(void **)(void *)&Lnk284,(void **)(void *)&Lclptr284);} /* PCL ARG-INFO slot READER */
static object  LnkTLI283(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[283],(void **)(void *)&LnkLI283,1,first,ap);va_end(ap);return V1;} /* GF-LAMBDA-LIST */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* METHOD-LAMBDA-LIST */
static void LnkT281(){ call_or_link(VV[281],(void **)(void *)&Lnk281);} /* SORT */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO-INTERNAL */
static void LnkT278(){ call_or_link(VV[278],(void **)(void *)&Lnk278);} /* EVERY */
static void LnkT277(ptr) object *ptr;{ call_or_link_closure(VV[277],(void **)(void *)&Lnk277,(void **)(void *)&Lclptr277);} /* METHOD-SPECIALIZERS */
static void LnkT87(){ call_or_link(VV[87],(void **)(void *)&Lnk87);} /* FUNCTION-ARGLIST */
static void LnkT270(ptr) object *ptr;{ call_or_link_closure(VV[270],(void **)(void *)&Lnk270,(void **)(void *)&Lclptr270);} /* MAKE-INSTANCE */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* METHOD-PROTOTYPE-FOR-GF */
static void LnkT268(){ call_or_link(VV[268],(void **)(void *)&Lnk268);} /* ENSURE-GENERIC-FUNCTION */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[266],(void **)(void *)&LnkLI266,1,first,ap);va_end(ap);return V1;} /* PARSE-SPECIALIZERS */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[265],(void **)(void *)&LnkLI265,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT264(ptr) object *ptr;{ call_or_link_closure(VV[264],(void **)(void *)&Lnk264,(void **)(void *)&Lclptr264);} /* GENERIC-FUNCTION-P */
static void LnkT263(ptr) object *ptr;{ call_or_link_closure(VV[263],(void **)(void *)&Lnk263,(void **)(void *)&Lclptr263);} /* METHOD-COMBINATION-P */
static void LnkT262(ptr) object *ptr;{ call_or_link_closure(VV[262],(void **)(void *)&Lnk262,(void **)(void *)&Lclptr262);} /* PCL METHOD-CLASS slot WRITER */
static void LnkT261(){ call_or_link(VV[261],(void **)(void *)&Lnk261);} /* *SUBTYPEP */
static void LnkT260(ptr) object *ptr;{ call_or_link_closure(VV[260],(void **)(void *)&Lnk260,(void **)(void *)&Lclptr260);} /* CLASS-EQ-SPECIALIZER */
static object  LnkTLI259(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[259],(void **)(void *)&LnkLI259,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT258(){ call_or_link(VV[258],(void **)(void *)&Lnk258);} /* SET-FUNCTION-NAME */
static void LnkT257(ptr) object *ptr;{ call_or_link_closure(VV[257],(void **)(void *)&Lnk257,(void **)(void *)&Lclptr257);} /* GENERIC-FUNCTION-METHODS */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[247],(void **)(void *)&LnkLI247,2,first,ap);va_end(ap);return V1;} /* PLIST-VALUE */
static void LnkT256(ptr) object *ptr;{ call_or_link_closure(VV[256],(void **)(void *)&Lnk256,(void **)(void *)&Lclptr256);} /* PCL SLOT-NAME slot WRITER */
static void LnkT253(ptr) object *ptr;{ call_or_link_closure(VV[253],(void **)(void *)&Lnk253,(void **)(void *)&Lclptr253);} /* SLOT-DEFINITION-NAME */
static void LnkT255(ptr) object *ptr;{ call_or_link_closure(VV[255],(void **)(void *)&Lnk255,(void **)(void *)&Lclptr255);} /* PCL SLOT-DEFINITION slot WRITER */
static void LnkT254(){ call_or_link(VV[254],(void **)(void *)&Lnk254);} /* FIND */
static void LnkT252(ptr) object *ptr;{ call_or_link_closure(VV[252],(void **)(void *)&Lnk252,(void **)(void *)&Lclptr252);} /* CLASS-DIRECT-SLOTS */
static void LnkT251(ptr) object *ptr;{ call_or_link_closure(VV[251],(void **)(void *)&Lnk251,(void **)(void *)&Lclptr251);} /* PCL SLOT-NAME slot READER */
static void LnkT250(ptr) object *ptr;{ call_or_link_closure(VV[250],(void **)(void *)&Lnk250,(void **)(void *)&Lclptr250);} /* SLOT-CLASS-P */
static void LnkT249(ptr) object *ptr;{ call_or_link_closure(VV[249],(void **)(void *)&Lnk249,(void **)(void *)&Lclptr249);} /* ACCESSOR-METHOD-CLASS */
static void LnkT248(ptr) object *ptr;{ call_or_link_closure(VV[248],(void **)(void *)&Lnk248,(void **)(void *)&Lclptr248);} /* PCL SLOT-DEFINITION slot READER */
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

