
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
	Vcs[0]=Vcs[0];
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
	{object V421;
	V421= ((V414))->v.v_self[1];
	if(!(type_of(V421)==t_fixnum)){
	goto T810;}
	if(!((((((V416))->v.v_self[fix((V421))])==(VV[14])?Ct:Cnil))==Cnil)){
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
	V423= vs_base[0];
	V424 = CMPmake_fixnum((long)length(V423));
	V420= make_cons(V424,Cnil);
	goto T804;
	goto T806;
T806:;
	V420= VV[68];
	goto T804;
T804:;
	{object V425 = (VFUN_NARGS=3,(*(LnkLI212))((V411),(V412),V420));
	VMR28(V425)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-GENERIC-FUNCTION T))	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V426;
	object V427;
	object V428;
	object V429;
	check_arg(5);
	V426=(base[0]);
	V427=(base[1]);
	V428=(base[3]);
	V429=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V430;
	object V431;
	object V433;
	object V434;
	object V436;
	object V437;
	object V438;
	object V439;
	object V440;
	register object V442;
	object V443;
	object V445;
	V430= (V429);
	V431= (*(LnkLI220))(VV[69],(V430));
	if(!(type_of((V431))==t_cons)){
	goto T822;}
	V433= CMPcar((V431));
	goto T820;
	goto T822;
T822:;
	V433= Cnil;
	goto T820;
T820:;
	V434= (*(LnkLI220))(VV[52],(V430));
	if(!(type_of((V434))==t_cons)){
	goto T827;}
	V436= CMPcar((V434));
	goto T825;
	goto T827;
T827:;
	V436= Cnil;
	goto T825;
T825:;
	V437= (*(LnkLI239))(VV[70],(V430));
	V438= (*(LnkLI239))(VV[71],(V430));
	V439= (*(LnkLI239))(VV[56],(V430));
	V440= (*(LnkLI220))(VV[72],(V430));
	if(!(type_of((V440))==t_cons)){
	goto T835;}
	V442= CMPcar((V440));
	goto T833;
	goto T835;
T835:;
	V442= Cnil;
	goto T833;
T833:;
	V443= (*(LnkLI220))(VV[73],(V430));
	if(!(type_of((V443))==t_cons)){
	goto T840;}
	V445= CMPcar((V443));
	goto T838;
	goto T840;
T840:;
	V445= Cnil;
	goto T838;
T838:;
	{register object V446;
	object V447;
	V446= CMPcar((V426));
	V447= CMPcdr((V426));
	{object V448;
	if(type_of(base[2])==t_structure){
	goto T850;}
	goto T848;
	goto T850;
T850:;
	if(!(((base[2])->str.str_def)==(VV[74]))){
	goto T848;}
	V448= STREF(object,base[2],4);
	goto T846;
	goto T848;
T848:;{object V450;
	V450= (VV[13]->s.s_dbind);
	base[16]= small_fixnum(14);
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V451= vs_base[0];
	if(!((V450)==(CMPcar(V451)))){
	goto T853;}}
	V448= CMPcar((base[2])->cc.cc_turbo[12]);
	goto T846;
	goto T853;
T853:;
	V448= Cnil;
	goto T846;
T846:;
	if((V431)==Cnil){
	goto T859;}
	base[16]= base[2];
	base[17]= (V433);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk259)();
	vs_top=sup;
	goto T859;
T859:;
	if((V440)==Cnil){
	goto T866;}
	if(!(type_of((V442))==t_symbol)){
	goto T868;}
	V442= (VFUN_NARGS=1,(*(LnkLI260))((V442)));
	goto T868;
T868:;
	base[16]= (V442);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T873;}
	base[17]= (V442);
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
	base[17]= (V442);
	base[18]= VV[76];
	vs_top=(vs_base=base+16)+3;
	L33(base);
	vs_top=sup;
	goto T872;
T872:;
	{object V453;
	V453= ((V446))->v.v_self[2];
	if(!(type_of(V453)==t_fixnum)){
	goto T886;}
	(void)(((V448))->v.v_self[fix((V453))]= (V442));
	goto T864;
	goto T886;
T886:;
	base[16]= V442;
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk263)(Lclptr263);
	vs_top=sup;
	goto T864;}
	goto T866;
T866:;
	{object V455;
	{object V456;
	V456= ((V446))->v.v_self[2];
	if(!(type_of(V456)==t_fixnum)){
	goto T893;}
	V455= ((((((V448))->v.v_self[fix((V456))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T890;
	goto T893;
T893:;
	base[16]= base[2];
	base[17]= VV[77];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V455= vs_base[0];}
	goto T890;
T890:;
	if(((V455))==Cnil){
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
	if((V443)==Cnil){
	goto T904;}
	base[16]= (V445);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T907;}
	base[16]= VV[73];
	base[17]= (V445);
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
	{object V458;
	{object V459;
	V459= ((V446))->v.v_self[1];
	if(!(type_of(V459)==t_fixnum)){
	goto T916;}
	V458= ((((((V448))->v.v_self[fix((V459))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T913;
	goto T916;
T916:;
	base[16]= base[2];
	base[17]= VV[81];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V458= vs_base[0];}
	goto T913;
T913:;
	if(((V458))==Cnil){
	goto T921;}
	base[16]= (V458);
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

static object LI34(V466,V467,V468,V469,V470)

object V466;object V467;object V468;object V469;object V470;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V471;
	object V472;
	V471= (V470);
	if(((V471))==Cnil){
	goto T931;}
	{object V473;
	V473= CMPcar((V471));
	V471= CMPcdr((V471));
	V472= (V473);
	goto T929;}
	goto T931;
T931:;
	V472= Cnil;
	goto T929;
T929:;
	{register object V474;
	object V475;
	V474= Cnil;
	V475= Cnil;
	base[1]= (V468);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T937;}
	base[2]= (V468);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V474= vs_base[0];
	base[1]= (V474);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T938;}
	goto T937;
T937:;
	base[1]= VV[85];
	base[2]= (V468);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V476 = vs_base[0];
	VMR30(V476)}
	goto T938;
T938:;
	V477= (*(LnkLI267))((V469));
	V475= (VFUN_NARGS=4,(*(LnkLI266))((V474),(V472),/* INLINE-ARGS */V477,Cnil));
	if(((V475))!=Cnil){
	goto T949;}
	base[1]= VV[86];
	base[2]= (V474);
	base[3]= (V469);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	{object V478 = vs_base[0];
	VMR30(V478)}
	goto T949;
T949:;
	base[1]= (V474);
	base[2]= (V475);
	{object V479 = simple_symlispcall(VV[268],base+1,2);
	VMR30(V479)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REAL-ADD-NAMED-METHOD	*/

static object LI35(object V483,object V482,object V481,object V480,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V484;
	object V485;
	object V486;
	object V487;
	object V488;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V484= V483;
	V485= V482;
	V486= V481;
	V487= V480;
	narg= narg - 4;
	V489 = list_vector_new(narg,first,ap);
	V488= V489;
	{object V490;
	object V491;
	object V492;
	object V493;
	base[4]= (V484);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk269)();
	vs_top=sup;
	V490= vs_base[0];
	V491= (*(LnkLI267))((V486));
	base[4]= (V484);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk270)();
	vs_top=sup;
	V492= vs_base[0];
	base[4]=VV[271]->s.s_gfdef;
	base[5]= (*(LnkLI149))((V492));
	base[6]= VV[51];
	base[7]= (V485);
	base[8]= VV[53];
	base[9]= (V491);
	base[10]= VV[52];
	base[11]= (V487);
	{object V494;
	V494= (V488);
	 vs_top=base+12;
	 while(V494!=Cnil)
	 {vs_push((V494)->c.c_car);V494=(V494)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V493= vs_base[0];
	base[4]= (V490);
	base[5]= (V493);
	{object V495 = simple_symlispcall(VV[272],base+4,2);
	VMR31(V495)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-SPECIALIZABLE	*/

static object LI36(object V496,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{register object V497;
	register object V498;
	object V499;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V497= V496;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI36key,first,ap);
	if(Vcs[1]==0){
	V498= Cnil;
	V499= Cnil;
	}else{
	V498=(Vcs[1]);
	V499= Ct;}
	{object V500;
	V500= (((((V499))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V500))==Cnil){
	goto T977;}
	goto T974;
	goto T977;
T977:;
	{object V501;
	base[0]= (V497);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	V502= vs_base[0];
	V501= ((V502)==Cnil?Ct:Cnil);
	if(((V501))==Cnil){
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
	base[0]= (V497);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V498= vs_base[0];
	goto T974;
	goto T986;
T986:;
	base[0]= VV[88];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;}}
	goto T974;
T974:;
	{register object V503;
	register object V504;
	base[1]= (V497);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T993;}
	base[0]= Cnil;
	goto T992;
	goto T993;
T993:;
	base[1]= (V497);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T992;
T992:;
	base[1]= VV[89];
	base[2]= VV[69];
	base[3]= (V497);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V503= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	V504= small_fixnum(0);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1002;}
	{object V505 = (base[0]->c.c_car);
	VMR32(V505)}
	goto T1002;
T1002:;
	{register object V506;
	register object V507;
	V506= (V498);
	V507= CMPcar((V506));
	goto T1009;
T1009:;
	if(!(((V506))==Cnil)){
	goto T1010;}
	goto T1005;
	goto T1010;
T1010:;
	{register object x= (V507),V508= VV[90];
	while(V508!=Cnil)
	if(x==(V508->c.c_car)){
	goto T1017;
	}else V508=V508->c.c_cdr;
	goto T1016;}
	goto T1017;
T1017:;
	goto T1005;
	goto T1016;
T1016:;
	V504= number_plus((V504),small_fixnum(1));
	V506= CMPcdr((V506));
	V507= CMPcar((V506));
	goto T1009;}
	goto T1005;
T1005:;
	(void)((*(LnkLI274))((V503),V497));
	base[1]= (V503);
	base[2]= (V497);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk259)();
	vs_top=sup;
	if(((V499))==Cnil){
	goto T1028;}
	base[1]= (V498);
	base[2]= V503;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk275)(Lclptr275);
	vs_top=sup;
	goto T1028;
T1028:;
	if(((base[0]->c.c_car))==Cnil){
	goto T1033;}
	base[1]=(VV[276]->s.s_gfdef);
	base[2]= (V497);
	base[3]= Cnil;
	base[5]= (V504);
	base[6]= VV[91];
	base[7]= Ct;
	vs_top=(vs_base=base+5)+3;
	Lmake_list();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V498);
	V511= 
	make_cclosure_new(LC123,Cnil,base[0],Cdata);
	base[6]= list(2,VV[54],V511);
	(void)simple_lispcall(base+1,5);
	goto T1033;
T1033:;
	{object V512 = (V503);
	VMR32(V512)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-GET-METHOD	*/

static object LI37(object V515,object V514,object V513,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V516;
	register object V517;
	register object V518;
	object V519;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V516= V515;
	V517= V514;
	V518= V513;
	narg = narg - 3;
	if (narg <= 0) goto T1045;
	else {
	V519= first;}
	--narg; goto T1046;
	goto T1045;
T1045:;
	V519= Ct;
	goto T1046;
T1046:;
	{object V520;
	{register object V521;
	register object V522;
	base[2]= (V516);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V521= vs_base[0];
	V522= CMPcar((V521));
	goto T1053;
T1053:;
	if(!(((V521))==Cnil)){
	goto T1054;}
	V520= Cnil;
	goto T1048;
	goto T1054;
T1054:;
	base[2]= (V522);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V523= vs_base[0];
	if(!(equal((V517),V523))){
	goto T1058;}
	base[2]= (VV[277]->s.s_gfdef);
	base[3]= (V518);
	base[5]= (V522);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk279)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1058;}
	V520= (V522);
	goto T1048;
	goto T1058;
T1058:;
	V521= CMPcdr((V521));
	V522= CMPcar((V521));
	goto T1053;}
	goto T1048;
T1048:;
	if(((V520))==Cnil){
	goto T1075;}
	{object V524 = (V520);
	VMR33(V524)}
	goto T1075;
T1075:;
	if(((V519))!=Cnil){
	goto T1078;}
	{object V525 = Cnil;
	VMR33(V525)}
	goto T1078;
T1078:;
	base[0]= VV[92];
	base[1]= (V516);
	base[2]= (V517);
	base[3]= (V518);
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V526 = vs_base[0];
	VMR33(V526)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for (FAST-METHOD COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO (STANDARD-GENERIC-FUNCTION))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V527;
	object V528;
	register object V529;
	check_arg(3);
	V527=(base[0]);
	V528=(base[1]);
	V529=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V531;
	register object V532;
	register object V533;
	object V534;
	base[3]= (V529);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V534= vs_base[0];
	V531= Cnil;
	V532= Cnil;
	V533= Cnil;
	{register object V535;
	register object V536;
	V535= (V534);
	V536= CMPcar((V535));
	goto T1093;
T1093:;
	if(!(((V535))==Cnil)){
	goto T1094;}
	goto T1089;
	goto T1094;
T1094:;
	base[4]= (V529);
	base[5]= (V536);
	base[6]= (V531);
	base[7]= (V532);
	base[8]= (V533);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk280)();
	if(vs_base<vs_top){
	V531= vs_base[0];
	vs_base++;
	}else{
	V531= Cnil;}
	if(vs_base<vs_top){
	V532= vs_base[0];
	vs_base++;
	}else{
	V532= Cnil;}
	if(vs_base<vs_top){
	V533= vs_base[0];
	}else{
	V533= Cnil;}
	vs_top=sup;
	V535= CMPcdr((V535));
	V536= CMPcar((V535));
	goto T1093;}
	goto T1089;
T1089:;
	base[3]= (V531);
	base[4]= (V532);
	base[6]= (V533);
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
	{object V537;
	object V538;
	object V539;
	object V540;
	object V541;
	check_arg(5);
	V537=(base[0]);
	V538=(base[1]);
	V539=(base[2]);
	V540=(base[3]);
	V541=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V542;
	V542= 0;
	{register object V543;
	register object V544;
	base[7]= (V538);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V543= vs_base[0];
	V544= CMPcar((V543));
	goto T1121;
T1121:;
	if(!(((V543))==Cnil)){
	goto T1122;}
	goto T1116;
	goto T1122;
T1122:;
	if(!(((V544))==(VV[93]))){
	goto T1128;}
	goto T1116;
	goto T1128;
T1128:;
	{register object x= (V544),V545= VV[94];
	while(V545!=Cnil)
	if(x==(V545->c.c_car)){
	goto T1132;
	}else V545=V545->c.c_cdr;
	goto T1131;}
	goto T1132;
T1132:;
	V540= Ct;
	goto T1116;
	goto T1131;
T1131:;
	{register object V546;
	{register object x= (V544),V547= VV[90];
	while(V547!=Cnil)
	if(x==(V547->c.c_car)){
	V546= V547;
	goto T1134;
	}else V547=V547->c.c_cdr;
	V546= Cnil;}
	goto T1134;
T1134:;
	if(((V546))==Cnil){
	goto T1136;}
	goto T1126;
	goto T1136;
T1136:;
	V542= (long)(V542)+(1);}
	goto T1126;
T1126:;
	V543= CMPcdr((V543));
	V544= CMPcar((V543));
	goto T1121;}
	goto T1116;
T1116:;
	{register object V548;
	object V549;
	register object V550;
	object V551;
	base[6]= (V538);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V548= vs_base[0];
	V549= Cnil;
	V550= small_fixnum(0);
	V551= Cnil;
	goto T1151;
T1151:;
	{object V552;
	if(!(((V548))==Cnil)){
	goto T1157;}
	goto T1144;
	goto T1157;
T1157:;
	V552= CMPcar((V548));
	V548= CMPcdr((V548));
	V549= (V552);}
	{object V553;
	V553= (V550);
	V550= number_plus((V550),small_fixnum(1));
	V551= (V553);}
	if(((V549))==((VV[95]->s.s_dbind))){
	goto T1152;}
	base[6]= V551;
	base[7]= (V541);
	vs_top=(vs_base=base+6)+2;
	Ladjoin();
	vs_top=sup;
	V541= vs_base[0];
	goto T1152;
T1152:;
	goto T1151;}
	goto T1144;
T1144:;
	if((V539)!=Cnil){
	V555= (V539);
	goto T1172;}
	V555= CMPmake_fixnum(V542);
	goto T1172;
T1172:;
	V556 = CMPmake_fixnum(V542);
	base[5]= (number_compare(V555,V556)<=0?(V555):V556);
	if((V540)!=Cnil){
	base[6]= (V540);
	goto T1173;}
	if((V539)==Cnil){
	base[6]= Cnil;
	goto T1173;}
	V557 = CMPmake_fixnum(V542);
	base[6]= (number_compare((V539),V557)!=0?Ct:Cnil);
	goto T1173;
T1173:;
	base[7]= (V541);
	vs_top=(vs_base=base+5)+3;
	return;}
	}
}
/*	local entry for function MAKE-DISCRIMINATING-FUNCTION-ARGLIST	*/

static object LI40(V560,V561)

object V560;object V561;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{register object V563;
	register object V564;
	V563= Cnil;
	V564= Cnil;
	{register object V565;
	register object V567;
	V565= small_fixnum(0);
	V567= Cnil;
	goto T1182;
T1182:;
	{register object V568;
	if(!(number_compare((V565),V560)<0)){
	goto T1188;}
	V568= (V565);
	goto T1186;
	goto T1188;
T1188:;
	goto T1178;
	goto T1186;
T1186:;
	V565= number_plus((V565),small_fixnum(1));
	V567= (V568);}
	{register object V569;
	base[1]= Cnil;
	base[2]= VV[96];
	base[3]= (V567);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V569= vs_base[0];
	if(((V563))!=Cnil){
	goto T1198;}
	V564= make_cons((V569),Cnil);
	V563= (V564);
	goto T1183;
	goto T1198;
T1198:;
	V571= make_cons((V569),Cnil);
	((V564))->c.c_cdr = /* INLINE-ARGS */V571;
	V570= (V564);
	V564= CMPcdr(V570);}
	goto T1183;
T1183:;
	goto T1182;}
	goto T1178;
T1178:;
	V562= (V563);}
	if(((V561))==Cnil){
	goto T1207;}
	base[0]= VV[98];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V573= vs_base[0];
	V572= list(2,VV[97],V573);
	goto T1205;
	goto T1207;
T1207:;
	V572= Cnil;
	goto T1205;
T1205:;
	{object V574 = nconc(V562,V572);
	VMR36(V574)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-LAMBDA-LIST (GENERIC-FUNCTION))	*/

static object LI41(V578,V579,V580)

object V578;object V579;object V580;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{object V582 = (*(LnkLI284))((V580));
	VMR37(V582)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD GF-FAST-METHOD-FUNCTION-P (STANDARD-GENERIC-FUNCTION))	*/

static object LI42(V586,V587,V588)

object V586;object V587;register object V588;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V590;
	object V591;
	V590= CMPcar((V586));
	V591= CMPcdr((V586));
	{object V592;
	if(type_of(V588)==t_structure){
	goto T1224;}
	goto T1222;
	goto T1224;
T1224:;
	if(!(((V588)->str.str_def)==(VV[99]))){
	goto T1222;}
	V592= STREF(object,(V588),4);
	goto T1220;
	goto T1222;
T1222:;{object V594;
	V594= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V588);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V595= vs_base[0];
	if(!((V594)==(CMPcar(V595)))){
	goto T1227;}}
	V592= CMPcar(((V588))->cc.cc_turbo[12]);
	goto T1220;
	goto T1227;
T1227:;
	V592= Cnil;
	goto T1220;
T1220:;
	{register object V597;
	V597= ((V590))->v.v_self[1];
	if(!(type_of(V597)==t_fixnum)){
	goto T1238;}
	V597= ((V592))->v.v_self[fix((V597))];
	goto T1236;
	goto T1238;
T1238:;
	V597= VV[14];
	goto T1236;
T1236:;
	if(!(((V597))==(VV[14]))){
	goto T1241;}
	base[0]= (V588);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V596= vs_base[0];
	goto T1233;
	goto T1241;
T1241:;
	V596= (V597);}
	goto T1233;
T1233:;
	{object V599 = STREF(object,V596,40);
	VMR38(V599)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI43(V604,V605,V606,V607)

object V604;object V605;register object V606;object V607;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{object V609;
	object V611;
	object V612;
	V609= (*(LnkLI220))(VV[52],V607);
	if(!(type_of((V609))==t_cons)){
	goto T1249;}
	V611= CMPcar((V609));
	goto T1247;
	goto T1249;
T1249:;
	V611= Cnil;
	goto T1247;
T1247:;
	V612= (*(LnkLI239))(VV[70],V607);
	{object V613;
	object V614;
	V613= CMPcar((V604));
	V614= CMPcdr((V604));
	{object V615;
	if(type_of(V606)==t_structure){
	goto T1260;}
	goto T1258;
	goto T1260;
T1260:;
	if(!(((V606)->str.str_def)==(VV[101]))){
	goto T1258;}
	V615= STREF(object,(V606),4);
	goto T1256;
	goto T1258;
T1258:;{object V617;
	V617= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V606);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V618= vs_base[0];
	if(!((V617)==(CMPcar(V618)))){
	goto T1263;}}
	V615= CMPcar(((V606))->cc.cc_turbo[12]);
	goto T1256;
	goto T1263;
T1263:;
	V615= Cnil;
	goto T1256;
T1256:;
	if((V609)==Cnil){
	goto T1272;}
	(void)((VFUN_NARGS=5,(*(LnkLI286))((V606),VV[52],(V611),VV[70],(V612))));
	goto T1270;
	goto T1272;
T1272:;
	(void)((VFUN_NARGS=1,(*(LnkLI286))((V606))));
	goto T1270;
T1270:;
	{register object V621;
	V621= ((V613))->v.v_self[1];
	if(!(type_of(V621)==t_fixnum)){
	goto T1282;}
	V621= ((V615))->v.v_self[fix((V621))];
	goto T1280;
	goto T1282;
T1282:;
	V621= VV[14];
	goto T1280;
T1280:;
	if(!(((V621))==(VV[14]))){
	goto T1285;}
	base[3]= (V606);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V620= vs_base[0];
	goto T1277;
	goto T1285;
T1285:;
	V620= (V621);}
	goto T1277;
T1277:;
	if(((*(LnkLI287))(V620))==Cnil){
	goto T1275;}
	{object V623 = (VFUN_NARGS=1,(*(LnkLI288))((V606)));
	VMR39(V623)}
	goto T1275;
T1275:;
	{object V624 = Cnil;
	VMR39(V624)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI44(V629,V630,V631,V632)

object V629;object V630;register object V631;object V632;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V635;
	object V637;
	object V638;
	object V640;
	V635= (*(LnkLI220))(VV[52],V632);
	if(!(type_of((V635))==t_cons)){
	goto T1293;}
	V637= CMPcar((V635));
	goto T1291;
	goto T1293;
T1293:;
	V637= Cnil;
	goto T1291;
T1291:;
	V638= (*(LnkLI220))(VV[70],V632);
	if(!(type_of((V638))==t_cons)){
	goto T1298;}
	V640= CMPcar((V638));
	goto T1296;
	goto T1298;
T1298:;
	V640= Cnil;
	goto T1296;
T1296:;
	{object V641;
	object V642;
	V641= CMPcar((V629));
	V642= CMPcdr((V629));
	{object V643;
	if(type_of(V631)==t_structure){
	goto T1308;}
	goto T1306;
	goto T1308;
T1308:;
	if(!(((V631)->str.str_def)==(VV[102]))){
	goto T1306;}
	V643= STREF(object,(V631),4);
	goto T1304;
	goto T1306;
T1306:;{object V645;
	V645= (VV[13]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V631);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V646= vs_base[0];
	if(!((V645)==(CMPcar(V646)))){
	goto T1311;}}
	V643= CMPcar(((V631))->cc.cc_turbo[12]);
	goto T1304;
	goto T1311;
T1311:;
	V643= Cnil;
	goto T1304;
T1304:;
	if((V635)==Cnil){
	goto T1320;}
	if((V638)==Cnil){
	goto T1323;}
	(void)((VFUN_NARGS=5,(*(LnkLI286))((V631),VV[52],(V637),VV[70],(V640))));
	goto T1318;
	goto T1323;
T1323:;
	(void)((VFUN_NARGS=3,(*(LnkLI286))((V631),VV[52],(V637))));
	goto T1318;
	goto T1320;
T1320:;
	(void)((VFUN_NARGS=1,(*(LnkLI286))((V631))));
	goto T1318;
T1318:;
	{register object V649;
	V649= ((V641))->v.v_self[1];
	if(!(type_of(V649)==t_fixnum)){
	goto T1336;}
	V649= ((V643))->v.v_self[fix((V649))];
	goto T1334;
	goto T1336;
T1336:;
	V649= VV[14];
	goto T1334;
T1334:;
	if(!(((V649))==(VV[14]))){
	goto T1339;}
	base[4]= (V631);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V648= vs_base[0];
	goto T1331;
	goto T1339;
T1339:;
	V648= (V649);}
	goto T1331;
T1331:;
	if(((*(LnkLI287))(V648))==Cnil){
	goto T1329;}
	if((V632)==Cnil){
	goto T1343;}
	if(V635!=Cnil){
	if((V635)==Cnil){
	goto T1326;}
	goto T1327;}
	if((CMPcddr(V632))==Cnil){
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
	{object V651 = (VFUN_NARGS=1,(*(LnkLI288))((V631)));
	VMR40(V651)}
	goto T1326;
T1326:;
	{object V652 = Cnil;
	VMR40(V652)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-METHODS	*/

static object LI45(V655,V656)

register object V655;register object V656;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	base[0]= Cnil;
	base[1]= V655;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	goto T1349;
T1349:;
	if(((V656))!=Cnil){
	goto T1351;}
	{object V658 = (V655);
	VMR41(V658)}
	goto T1351;
T1351:;
	{register object V660;
	V660= CMPcar((V656));
	V656= CMPcdr((V656));
	V659= (V660);}
	(void)((VFUN_NARGS=3,(*(LnkLI290))((V655),V659,(V656))));
	goto T1349;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REAL-ADD-METHOD	*/

static object LI46(object V662,object V661,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB42 VMS42 VMV42
	{register object V663;
	register object V664;
	object V665;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V663= V662;
	V664= V661;
	narg = narg - 2;
	if (narg <= 0) goto T1359;
	else {
	V665= first;}
	--narg; goto T1360;
	goto T1359;
T1359:;
	V665= Cnil;
	goto T1360;
T1360:;
	base[0]= (V664);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1363;}
	base[0]= VV[103];
	base[1]= (V664);
	base[3]= (V664);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V666 = vs_base[0];
	VMR42(V666)}
	goto T1363;
T1363:;
	{object V667;
	object V668;
	object V669;
	object V670;
	base[4]= (V663);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V667= vs_base[0];
	base[4]= (V664);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V668= vs_base[0];
	base[4]= (V664);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V669= vs_base[0];
	V670= (VFUN_NARGS=4,(*(LnkLI266))((V663),(V668),(V669),Cnil));
	if(((V670))==Cnil){
	goto T1377;}
	base[4]= (V663);
	base[5]= (V670);
	(void)simple_symlispcall(VV[268],base+4,2);
	goto T1377;
T1377:;
	base[4]= (V663);
	base[5]= V664;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	{object V674;
	base[5]= V664;
	base[7]= V663;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V674= vs_base[0];
	base[5]= (V674);
	base[6]= V663;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;}
	{register object V676;
	register object V677;
	V676= (V669);
	V677= CMPcar((V676));
	goto T1396;
T1396:;
	if(!(((V676))==Cnil)){
	goto T1397;}
	goto T1392;
	goto T1397;
T1397:;
	base[5]= (V677);
	base[6]= (V664);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	V676= CMPcdr((V676));
	V677= CMPcar((V676));
	goto T1396;}
	goto T1392;
T1392:;
	(void)((VFUN_NARGS=3,(*(LnkLI286))((V663),VV[104],(V664))));
	if(((V665))!=Cnil){
	goto T1410;}
	{register object x= (V667),V678= VV[105];
	while(V678!=Cnil)
	if(eql(x,V678->c.c_car)){
	goto T1415;
	}else V678=V678->c.c_cdr;
	goto T1413;}
	goto T1415;
T1415:;
	base[4]= (*(LnkLI293))(CMPcar((V669)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk294)();
	vs_top=sup;
	goto T1413;
T1413:;
	(void)((VFUN_NARGS=1,(*(LnkLI288))((V663))));
	goto T1410;
T1410:;
	{object V679 = (V664);
	VMR42(V679)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function REAL-REMOVE-METHOD	*/

static object LI47(V682,V683)

register object V682;register object V683;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	base[0]= (V683);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	V684= vs_base[0];
	if(!(((((V682))==(V684)?Ct:Cnil))==Cnil)){
	goto T1418;}
	base[0]= VV[106];
	base[1]= (V683);
	base[3]= (V683);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V685 = vs_base[0];
	VMR43(V685)}
	goto T1418;
T1418:;
	{object V686;
	object V687;
	object V688;
	object V689;
	base[4]= (V682);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V686= vs_base[0];
	base[4]= (V683);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V687= vs_base[0];
	base[4]= (V682);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V688= vs_base[0];
	base[4]= (V683);
	base[5]= (V688);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	V689= vs_base[0];
	base[4]= Cnil;
	base[5]= V683;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	base[4]= (V689);
	base[5]= V682;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	{register object V692;
	register object V693;
	base[6]= (V683);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V692= vs_base[0];
	V693= CMPcar((V692));
	goto T1446;
T1446:;
	if(!(((V692))==Cnil)){
	goto T1447;}
	goto T1441;
	goto T1447;
T1447:;
	base[6]= (V693);
	base[7]= (V683);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V692= CMPcdr((V692));
	V693= CMPcar((V692));
	goto T1446;}
	goto T1441;
T1441:;
	(void)((VFUN_NARGS=1,(*(LnkLI286))((V682))));
	{register object x= (V686),V694= VV[107];
	while(V694!=Cnil)
	if(eql(x,V694->c.c_car)){
	goto T1462;
	}else V694=V694->c.c_cdr;
	goto T1460;}
	goto T1462;
T1462:;
	base[4]= (*(LnkLI293))(CMPcar((V687)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk294)();
	vs_top=sup;
	goto T1460;
T1460:;
	(void)((VFUN_NARGS=1,(*(LnkLI288))((V682))));
	{object V695 = (V682);
	VMR43(V695)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-APPLICABLE-METHODS-FUNCTION	*/

static object LI48(V698,V699)

object V698;object V699;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	base[1]= (V698);
	base[3]= (V698);
	base[4]= (V699);
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
	{object V700 = vs_base[0];
	VMR44(V700)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-APPLICABLE-METHODS (GENERIC-FUNCTION T))	*/

static object LI49(V705,V706,V707,V708)

object V705;object V706;object V707;object V708;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	base[1]= (V707);
	base[3]= (V707);
	base[4]= (V708);
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
	{object V710 = vs_base[0];
	VMR45(V710)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-APPLICABLE-METHODS-USING-CLASSES (GENERIC-FUNCTION T))	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V711;
	object V712;
	object V713;
	object V714;
	check_arg(4);
	V711=(base[0]);
	V712=(base[1]);
	V713=(base[2]);
	V714=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V713);
	base[6]= (V713);
	base[7]= (V714);
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

static object LI51(V717)

object V717;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V718;
	object V719= (V717);
	if(V719==Cnil){
	V717= Cnil;
	goto T1489;}
	base[0]=V718=MMcons(Cnil,Cnil);
	goto T1490;
T1490:;
	if(!(type_of((V719->c.c_car))==t_symbol)){
	goto T1493;}
	(V718->c.c_car)= (VFUN_NARGS=1,(*(LnkLI260))((V719->c.c_car)));
	goto T1491;
	goto T1493;
T1493:;
	(V718->c.c_car)= (V719->c.c_car);
	goto T1491;
T1491:;
	if((V719=MMcdr(V719))==Cnil){
	V717= base[0];
	goto T1489;}
	V718=MMcdr(V718)=MMcons(Cnil,Cnil);
	goto T1490;}
	goto T1489;
T1489:;
	{register object V721;
	register object V722;
	V721= (V717);
	V722= CMPcar((V721));
	goto T1498;
T1498:;
	if(!(((V721))==Cnil)){
	goto T1499;}
	{object V723 = Cnil;
	VMR47(V723)}
	goto T1499;
T1499:;
	{register object V724;
	register object V725;
	V724= (V717);
	V725= CMPcar((V724));
	goto T1507;
T1507:;
	if(!(((V724))==Cnil)){
	goto T1508;}
	goto T1503;
	goto T1508;
T1508:;
	if(((V722))==((V725))){
	goto T1512;}
	{register object V726;
	register object V727;
	register object V728;
	V726= (V725);
	V727= (V722);
	base[3]= (V726);
	base[5]= (V727);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V728= vs_base[0];
	{register object V729;
	V729= (V727);
	base[3]= (V728);
	base[4]= (V729);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;}}
	goto T1512;
T1512:;
	V724= CMPcdr((V724));
	V725= CMPcar((V724));
	goto T1507;}
	goto T1503;
T1503:;
	V721= CMPcdr((V721));
	V722= CMPcar((V721));
	goto T1498;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUPERCLASSES-COMPATIBLE-P	*/

static object LI52(V732,V733)

object V732;object V733;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V734;
	register object V735;
	base[0]= (V732);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V734= vs_base[0];
	base[0]= (V733);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V735= vs_base[0];
	{register object V736;
	register object V737;
	V736= (V734);
	V737= CMPcar((V736));
	goto T1540;
T1540:;
	if(!(((V736))==Cnil)){
	goto T1541;}
	{object V738 = Ct;
	VMR48(V738)}
	goto T1541;
T1541:;
	{register object V739;
	register object V740;
	base[3]= (V737);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	V739= vs_base[0];
	V740= CMPcar((V739));
	goto T1550;
T1550:;
	if(!(((V739))==Cnil)){
	goto T1551;}
	goto T1545;
	goto T1551;
T1551:;
	{register object x= (V740),V741= (V735);
	while(V741!=Cnil)
	if(x==(V741->c.c_car)){
	goto T1557;
	}else V741=V741->c.c_cdr;
	goto T1555;}
	goto T1557;
T1557:;
	{object V742 = Cnil;
	VMR48(V742)}
	goto T1555;
T1555:;
	V739= CMPcdr((V739));
	V740= CMPcar((V739));
	goto T1550;}
	goto T1545;
T1545:;
	V736= CMPcdr((V736));
	V737= CMPcar((V736));
	goto T1540;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (SPECIALIZER SPECIALIZER))	*/

static object LI53(V747,V748,V749,V750)

object V747;object V748;object V749;object V750;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V752 = Cnil;
	VMR49(V752)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS CLASS))	*/

static object LI54(V757,V758,V759,V760)

object V757;object V758;object V759;object V760;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V762 = (((V759))==((V760))?Ct:Cnil);
	VMR50(V762)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (CLASS))	*/

static object LI55(V766,V767,V768)

object V766;object V767;object V768;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V770 = (V768);
	VMR51(V770)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS-EQ-SPECIALIZER CLASS-EQ-SPECIALIZER))	*/

static object LI56(V775,V776,V777,V778)

object V775;object V776;object V777;object V778;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]= (V777);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V780= vs_base[0];
	base[0]= (V778);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V781= vs_base[0];
	{object V782 = ((V780)==(V781)?Ct:Cnil);
	VMR52(V782)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (EQL-SPECIALIZER EQL-SPECIALIZER))	*/

static object LI57(V787,V788,V789,V790)

object V787;object V788;object V789;object V790;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V789);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V792= vs_base[0];
	base[0]= (V790);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V793= vs_base[0];
	{object V794 = ((V792)==(V793)?Ct:Cnil);
	VMR53(V794)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (EQL-SPECIALIZER))	*/

static object LI58(V798,V799,V800)

object V798;object V799;register object V800;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V802;
	object V803;
	V802= CMPcar((V798));
	V803= CMPcdr((V798));
	{object V804;
	if(type_of(V800)==t_structure){
	goto T1605;}
	goto T1603;
	goto T1605;
T1605:;
	if(!(((V800)->str.str_def)==(VV[110]))){
	goto T1603;}
	V804= STREF(object,(V800),4);
	goto T1601;
	goto T1603;
T1603:;{object V806;
	V806= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V800);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V807= vs_base[0];
	if(!((V806)==(CMPcar(V807)))){
	goto T1608;}}
	V804= CMPcar(((V800))->cc.cc_turbo[12]);
	goto T1601;
	goto T1608;
T1608:;
	V804= Cnil;
	goto T1601;
T1601:;
	{register object V809;
	V809= ((V802))->v.v_self[1];
	if(!(type_of(V809)==t_fixnum)){
	goto T1619;}
	V809= ((V804))->v.v_self[fix((V809))];
	goto T1617;
	goto T1619;
T1619:;
	V809= VV[14];
	goto T1617;
T1617:;
	if(!(((V809))==(VV[14]))){
	goto T1622;}
	base[0]= (V800);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	V808= vs_base[0];
	goto T1614;
	goto T1622;
T1622:;
	V808= (V809);}
	goto T1614;
T1614:;
	{object V811 = (*(LnkLI149))(V808);
	VMR54(V811)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for TYPES-FROM-ARGUMENTS	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	{object V812;
	register object V813;
	register object V814;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V812=(base[0]);
	V813=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1625;}
	V814=(base[2]);
	vs_top=sup;
	goto T1626;
	goto T1625;
T1625:;
	V814= Cnil;
	goto T1626;
T1626:;
	{object V815;
	object V816;
	object V817;
	object V818;
	object V819;
	base[3]= (V812);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk304)();
	if(vs_base>=vs_top){vs_top=sup;goto T1630;}
	V815= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1631;}
	V816= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1632;}
	V817= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1633;}
	V818= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1634;}
	V819= vs_base[0];
	vs_top=sup;
	goto T1635;
	goto T1630;
T1630:;
	V815= Cnil;
	goto T1631;
T1631:;
	V816= Cnil;
	goto T1632;
T1632:;
	V817= Cnil;
	goto T1633;
T1633:;
	V818= Cnil;
	goto T1634;
T1634:;
	V819= Cnil;
	goto T1635;
T1635:;
	{register object V820;
	V820= Cnil;
	{long V821;
	register long V822;
	V821= fix((V815));
	V822= 0;
	goto T1640;
T1640:;
	if(!((V822)>=(V821))){
	goto T1641;}
	goto T1636;
	goto T1641;
T1641:;
	if(((V813))!=Cnil){
	goto T1644;}
	base[3]= VV[111];
	base[5]= (V812);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V815);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
	goto T1644;
T1644:;
	{register object V823;
	{register object V824;
	V824= CMPcar((V813));
	V813= CMPcdr((V813));
	V823= (V824);}
	{register object V825;
	if(((V814))==Cnil){
	goto T1658;}
	V825= list(2,(V814),(V823));
	goto T1656;
	goto T1658;
T1658:;
	V825= (V823);
	goto T1656;
T1656:;
	V820= make_cons((V825),(V820));}}
	V822= (long)(V822)+1;
	goto T1640;}
	goto T1636;
T1636:;
	base[3]= nreverse((V820));
	base[4]= (V819);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function GET-WRAPPERS-FROM-CLASSES	*/

static object LI60(V830,V831,V832,V833)

object V830;object V831;object V832;object V833;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V834;
	register object V835;
	register object V836;
	V834= (V831);
	V835= (V834);
	V836= (V833);
	{register object V837;
	register object V838;
	if(!(type_of((V832))==t_cons||((V832))==Cnil)){
	goto T1672;}
	V837= (V832);
	goto T1670;
	goto T1672;
T1672:;
	V837= make_cons((V832),Cnil);
	goto T1670;
T1670:;
	V838= CMPcar((V837));
	goto T1676;
T1676:;
	if(!(((V837))==Cnil)){
	goto T1677;}
	goto T1669;
	goto T1677;
T1677:;
	if((Ct)==(CMPcar((V836)))){
	goto T1681;}
	{register object V839;
	base[2]= (V838);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V839= vs_base[0];
	if(((V839))!=Cnil){
	goto T1686;}
	{object V840 = Cnil;
	VMR56(V840)}
	goto T1686;
T1686:;
	if(!(eql((V830),small_fixnum(1)))){
	goto T1690;}
	V834= (V839);
	goto T1681;
	goto T1690;
T1690:;
	{register object V842;
	V842= (V839);
	(V835)->c.c_car = (V842);}
	V835= CMPcdr((V835));}
	goto T1681;
T1681:;
	V836= CMPcdr((V836));
	V837= CMPcdr((V837));
	V838= CMPcar((V837));
	goto T1676;}
	goto T1669;
T1669:;
	{object V843 = (V834);
	VMR56(V843)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SDFUN-FOR-CACHING	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V844;
	object V845;
	check_arg(2);
	V844=(base[0]);
	V845=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V846;
	base[3]=VV[306]->s.s_gfdef;
	{object V847;
	object V848= (V845);
	if(V848==Cnil){
	V846= Cnil;
	goto T1704;}
	base[2]=V847=MMcons(Cnil,Cnil);
	goto T1705;
T1705:;
	base[4]= (V848->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	vs_top=sup;
	(V847->c.c_car)= vs_base[0];
	if((V848=MMcdr(V848))==Cnil){
	V846= base[2];
	goto T1704;}
	V847=MMcdr(V847)=MMcons(Cnil,Cnil);
	goto T1705;}
	goto T1704;
T1704:;
	{object V849;
	object V850;
	base[2]= (V844);
	base[3]= (V846);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk298)();
	if(vs_base>=vs_top){vs_top=sup;goto T1711;}
	V849= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1712;}
	V850= vs_base[0];
	vs_top=sup;
	goto T1713;
	goto T1711;
T1711:;
	V849= Cnil;
	goto T1712;
T1712:;
	V850= Cnil;
	goto T1713;
T1713:;
	base[2]= (VFUN_NARGS=6,(*(LnkLI307))((V844),(V849),(V846),Cnil,Ct,(V850)));
	base[3]= Cnil;
	base[6]=VV[305]->s.s_gfdef;
	{object V851;
	object V852= (V845);
	if(V852==Cnil){
	base[4]= Cnil;
	goto T1716;}
	base[5]=V851=MMcons(Cnil,Cnil);
	goto T1717;
T1717:;
	base[7]= (V852->c.c_car);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	(V851->c.c_car)= vs_base[0];
	if((V852=MMcdr(V852))==Cnil){
	base[4]= base[5];
	goto T1716;}
	V851=MMcdr(V851)=MMcons(Cnil,Cnil);
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

static object LI62(V855,V856)

object V855;object V856;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{object V857;
	base[0]= (V855);
	base[3]=VV[306]->s.s_gfdef;
	{object V858;
	object V859= (V856);
	if(V859==Cnil){
	base[1]= Cnil;
	goto T1722;}
	base[2]=V858=MMcons(Cnil,Cnil);
	goto T1723;
T1723:;
	base[4]= (V859->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	vs_top=sup;
	(V858->c.c_car)= vs_base[0];
	if((V859=MMcdr(V859))==Cnil){
	base[1]= base[2];
	goto T1722;}
	V858=MMcdr(V858)=MMcons(Cnil,Cnil);
	goto T1723;}
	goto T1722;
T1722:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	V857= vs_base[0];{object V861;
	base[0]= CMPcar((V857));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk309)(Lclptr309);
	vs_top=sup;
	V861= vs_base[0];
	if(V861==Cnil)goto T1727;
	V860= V861;
	goto T1726;
	goto T1727;
T1727:;}
	base[0]= CMPcar((V857));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V860= vs_base[0];
	goto T1726;
T1726:;
	{object V862 = (VFUN_NARGS=2,(*(LnkLI308))(V860,VV[112]));
	VMR58(V862)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-SECONDARY-DISPATCH-FUNCTION	*/

static object LI64(V864)

object V864;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]=MMcons((V864),Cnil);
	{object V865 = 
	make_cclosure_new(LC124,Cnil,base[0],Cdata);
	VMR59(V865)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-EQ	*/

static object LI65(V868,V869)

register object V868;register object V869;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	goto T1732;
T1732:;
	if(!(type_of((V868))!=t_cons)){
	goto T1734;}
	{object V870 = (((V868))==((V869))?Ct:Cnil);
	VMR60(V870)}
	goto T1734;
T1734:;
	if(!(type_of((V869))!=t_cons)){
	goto T1737;}
	{object V871 = Cnil;
	VMR60(V871)}
	goto T1737;
T1737:;
	if((CMPcar((V868)))==(CMPcar((V869)))){
	goto T1740;}
	{object V872 = Cnil;
	VMR60(V872)}
	goto T1740;
T1740:;
	V868= CMPcdr((V868));
	V869= CMPcdr((V869));
	goto T1732;
	return Cnil;
}
/*	function definition for COMPUTE-APPLICABLE-METHODS-EMF	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	{object V873;
	check_arg(1);
	V873=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((VV[113]->s.s_dbind))==(VV[114]))){
	goto T1748;}
	{register object V874;
	object V875;
	V874= (*(LnkLI311))(VV[115]);
	base[3]= (V874);
	base[4]= list(2,list(2,VV[108],(V873)),Ct);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	V875= vs_base[0];
	base[4]= (V874);
	base[5]= (V875);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	base[3]= vs_base[0];
	if((VV[116]->s.s_dbind)!=Cnil){
	V876= (VV[116]->s.s_dbind);
	goto T1758;}
	base[5]= (V874);
	base[6]= list(2,list(2,VV[108],(V874)),Ct);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	(VV[116]->s.s_dbind)= vs_base[0];
	V876= (VV[116]->s.s_dbind);
	goto T1758;
T1758:;
	base[4]= (*(LnkLI313))((V875),V876);
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

static object LI67(V878)

object V878;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= (V878);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V879= vs_base[0];
	{object V880 = STREF(object,V879,36);
	VMR62(V880)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-ALL-C-A-M-GF-INFO	*/

static object LI68(V882)

object V882;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[1]= (V882);
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
	{register object V883;
	register object V884;
	V883= (base[0]->c.c_car);
	V884= CMPcar((V883));
	goto T1780;
T1780:;
	if(!(((V883))==Cnil)){
	goto T1781;}
	goto T1776;
	goto T1781;
T1781:;
	{register object x= (V884),V885= (VV[117]->s.s_dbind);
	while(V885!=Cnil)
	if(eql(x,V885->c.c_car)){
	goto T1785;
	}else V885=V885->c.c_cdr;}
	{register object V886;
	base[4]= (V884);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V887= vs_base[0];
	V886= CMPcar(V887);
	base[4]= (V886);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1792;}
	{object V888;
	base[5]= (V886);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V888= vs_base[0];
	base[5]= (V888);
	base[6]= (base[1]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[1]->c.c_car)= vs_base[0];
	goto T1785;}
	goto T1792;
T1792:;
	{object V889;
	base[5]= (V886);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V889= vs_base[0];
	base[5]= (V889);
	base[6]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[2]->c.c_car)= vs_base[0];}}
	goto T1785;
T1785:;
	V883= CMPcdr((V883));
	V884= CMPcar((V883));
	goto T1780;}
	goto T1776;
T1776:;
	V890= 
	make_cclosure_new(LC126,Cnil,base[2],Cdata);
	(void)((*(LnkLI316))(V890));
	goto T1768;
	goto T1770;
T1770:;
	V891= (VV[317]->s.s_gfdef);
	(void)((*(LnkLI316))(V891));
	goto T1768;
T1768:;
	(VV[117]->s.s_dbind)= (base[0]->c.c_car);
	{object V892 = (VV[117]->s.s_dbind);
	VMR63(V892)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-INFO	*/

static object LI69(V894)

object V894;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	(void)((*(LnkLI317))((V894)));
	{object V895 = (*(LnkLI318))((V894));
	VMR64(V895)}
	return Cnil;
}
/*	local entry for function UPDATE-C-A-M-GF-INFO	*/

static object LI70(V897)

object V897;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	if(((*(LnkLI319))((V897)))!=Cnil){
	goto T1815;}
	{object V898;
	object V899;
	base[0]= (V897);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk320)();
	if(vs_base>=vs_top){vs_top=sup;goto T1819;}
	V898= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1820;}
	V899= vs_base[0];
	vs_top=sup;
	goto T1821;
	goto T1819;
T1819:;
	V898= Cnil;
	goto T1820;
T1820:;
	V899= Cnil;
	goto T1821;
T1821:;
	{object V900;
	base[0]= (V897);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V900= vs_base[0];
	V901= Ct;
	STSET(object,(V900),32, (V898));
	(void)((V898));
	V902= Ct;
	STSET(object,(V900),36, (V899));
	{object V903 = (V899);
	VMR65(V903)}}}
	goto T1815;
T1815:;
	{object V904 = Cnil;
	VMR65(V904)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-SIMPLE-ACCESSOR-TYPE	*/

static object LI71(V906)

object V906;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V907;
	base[0]= (V906);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V907= vs_base[0];
	{object V909;
	register object V910;
	object V911;
	base[3]= (V906);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V909= vs_base[0];
	if((V909)==Cnil){
	V910= Cnil;
	goto T1830;}
	V910= (*(LnkLI149))(CMPcar((V909)));
	goto T1830;
T1830:;
	if((V910)==Cnil){
	V911= Cnil;
	goto T1831;}
	if(!(((V910))==((VV[118]->s.s_dbind)))){
	goto T1833;}
	V911= VV[119];
	goto T1831;
	goto T1833;
T1833:;
	if(!(((V910))==((VV[120]->s.s_dbind)))){
	goto T1836;}
	V911= VV[121];
	goto T1831;
	goto T1836;
T1836:;
	if(!(((V910))==((VV[122]->s.s_dbind)))){
	goto T1839;}
	V911= VV[123];
	goto T1831;
	goto T1839;
T1839:;
	V911= Cnil;
	goto T1831;
T1831:;
	if((STREF(object,(V907),36))==Cnil){
	goto T1842;}
	if(((V911))==Cnil){
	goto T1842;}
	{register object V912;
	register object V913;
	V912= CMPcdr((V909));
	V913= CMPcar((V912));
	goto T1852;
T1852:;
	if(!(((V912))==Cnil)){
	goto T1853;}
	goto T1848;
	goto T1853;
T1853:;
	V914= (*(LnkLI149))((V913));
	if(((V910))==(/* INLINE-ARGS */V914)){
	goto T1857;}
	goto T1842;
	goto T1857;
T1857:;
	V912= CMPcdr((V912));
	V913= CMPcar((V912));
	goto T1852;}
	goto T1848;
T1848:;
	base[3]= (V906);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	V915= vs_base[0];
	if(!((V915)==((VV[124]->s.s_dbind)))){
	goto T1842;}
	V908= (V911);
	goto T1827;
	goto T1842;
T1842:;
	V908= Cnil;}
	goto T1827;
T1827:;
	V916= Ct;
	STSET(object,(V907),24, V908);
	{object V917 = V908;
	VMR66(V917)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-ACCESSOR-METHOD-FUNCTION	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V918;
	register object V919;
	register object V920;
	register object V921;
	check_arg(4);
	V918=(base[0]);
	V919=(base[1]);
	V920=(base[2]);
	V921=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V922;
	object V923;
	object V924;
	object V925;
	register object V926;
	object V927;
	V922= (*(LnkLI322))((V919));
	V923= (*(LnkLI323))((V919));
	V928= list(2,VV[108],(V920));
	V929= list(2,VV[109],(V920));
	V924= list(3,/* INLINE-ARGS */V928,/* INLINE-ARGS */V929,list(2,VV[108],(V921)));
	if(!(((V919))==(VV[121]))){
	goto T1873;}
	V925= make_cons(Ct,(V924));
	goto T1871;
	goto T1873;
T1873:;
	V925= (V924);
	goto T1871;
T1871:;
	base[10]= (V918);
	base[11]= (V925);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	V926= vs_base[0];
	V927= ((CMPcdr((V926)))==Cnil?Ct:Cnil);
	if(((V927))==Cnil){
	goto T1881;}
	base[11]= (V920);
	base[12]= (V921);
	base[13]= (V919);
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk324)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1879;
	goto T1881;
T1881:;
	base[11]= (V920);
	base[12]= (V921);
	base[14]= (V918);
	base[15]= (V926);
	base[16]= (V925);{object V931;
	{register object x= (V922),V932= (V926);
	while(V932!=Cnil)
	if(eql(x,V932->c.c_car)){
	V931= V932;
	goto T1895;
	}else V932=V932->c.c_cdr;
	V931= Cnil;}
	goto T1895;
T1895:;
	if(V931==Cnil)goto T1894;
	V930= V931;
	goto T1893;
	goto T1894;
T1894:;}{object V933;
	{register object x= (V923),V934= (V926);
	while(V934!=Cnil)
	if(eql(x,V934->c.c_car)){
	V933= V934;
	goto T1897;
	}else V934=V934->c.c_cdr;
	V933= Cnil;}
	goto T1897;
T1897:;
	if(V933==Cnil)goto T1896;
	V930= V933;
	goto T1893;
	goto T1896;
T1896:;}
	base[18]= VV[125];
	vs_top=(vs_base=base+18)+1;
	Lerror();
	vs_top=sup;
	V930= vs_base[0];
	goto T1893;
T1893:;
	V935= CMPcar(V930);
	base[18]= (V920);
	base[19]= (V921);
	base[20]= (V919);
	vs_top=(vs_base=base+18)+3;
	(void) (*Lnk325)();
	vs_top=sup;
	V936= vs_base[0];
	V937= list(2,/* INLINE-ARGS */V935,V936);
	base[17]= make_cons(/* INLINE-ARGS */V937,Cnil);
	if(!(((V919))==(VV[121]))){
	goto T1904;}
	{register object V938;
	register object V939;
	V938= (V926);
	V939= CMPcar((V938));
	goto T1912;
T1912:;
	if(!(((V938))==Cnil)){
	goto T1913;}
	goto T1905;
	goto T1913;
T1913:;
	base[20]= (V939);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V940= vs_base[0];
	if((CMPcar(V940))==((VV[95]->s.s_dbind))){
	goto T1917;}
	goto T1908;
	goto T1917;
T1917:;
	V938= CMPcdr((V938));
	V939= CMPcar((V938));
	goto T1912;}
	goto T1908;
T1908:;
	goto T1904;
T1904:;
	{object V941;
	V942= (*(LnkLI326))((V920));
	base[19]= (V920);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V943= vs_base[0];
	V941= list(3,/* INLINE-ARGS */V942,V943,(*(LnkLI326))((V921)));
	if(!(((V919))==(VV[121]))){
	goto T1931;}
	base[19]= (VV[95]->s.s_dbind);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V944= vs_base[0];
	base[18]= make_cons(V944,(V941));
	goto T1903;
	goto T1931;
T1931:;
	base[18]= (V941);
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
	base[14]= (V919);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk328)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1879;
T1879:;
	base[11]= (V927);
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

static object LI75(V946)

object V946;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{object V947= (V946);
	if((V947!= VV[119]))goto T1951;
	{object V948 = (VV[128]->s.s_dbind);
	VMR69(V948)}
	goto T1951;
T1951:;
	if((V947!= VV[121]))goto T1952;
	{object V949 = (VV[129]->s.s_dbind);
	VMR69(V949)}
	goto T1952;
T1952:;
	if((V947!= VV[123]))goto T1953;
	{object V950 = (VV[130]->s.s_dbind);
	VMR69(V950)}
	goto T1953;
T1953:;
	{object V951 = Cnil;
	VMR69(V951)}}
	return Cnil;
}
/*	local entry for function SET-STANDARD-SVUC-METHOD	*/

static object LI76(V954,V955)

object V954;object V955;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{object V956= (V954);
	if((V956!= VV[119]))goto T1954;
	(VV[128]->s.s_dbind)= (V955);
	{object V957 = (VV[128]->s.s_dbind);
	VMR70(V957)}
	goto T1954;
T1954:;
	if((V956!= VV[121]))goto T1956;
	(VV[129]->s.s_dbind)= (V955);
	{object V958 = (VV[129]->s.s_dbind);
	VMR70(V958)}
	goto T1956;
T1956:;
	if((V956!= VV[123]))goto T1958;
	(VV[130]->s.s_dbind)= (V955);
	{object V959 = (VV[130]->s.s_dbind);
	VMR70(V959)}
	goto T1958;
T1958:;
	{object V960 = Cnil;
	VMR70(V960)}}
	return Cnil;
}
/*	local entry for function STRUCTURE-SVUC-METHOD	*/

static object LI77(V962)

object V962;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{object V963= (V962);
	if((V963!= VV[119]))goto T1960;
	{object V964 = (VV[131]->s.s_dbind);
	VMR71(V964)}
	goto T1960;
T1960:;
	if((V963!= VV[121]))goto T1961;
	{object V965 = (VV[132]->s.s_dbind);
	VMR71(V965)}
	goto T1961;
T1961:;
	if((V963!= VV[123]))goto T1962;
	{object V966 = (VV[133]->s.s_dbind);
	VMR71(V966)}
	goto T1962;
T1962:;
	{object V967 = Cnil;
	VMR71(V967)}}
	return Cnil;
}
/*	local entry for function SET-STRUCTURE-SVUC-METHOD	*/

static object LI78(V970,V971)

object V970;object V971;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V972= (V970);
	if((V972!= VV[119]))goto T1963;
	(VV[131]->s.s_dbind)= (V971);
	{object V973 = (VV[131]->s.s_dbind);
	VMR72(V973)}
	goto T1963;
T1963:;
	if((V972!= VV[121]))goto T1965;
	(VV[132]->s.s_dbind)= (V971);
	{object V974 = (VV[132]->s.s_dbind);
	VMR72(V974)}
	goto T1965;
T1965:;
	if((V972!= VV[123]))goto T1967;
	(VV[133]->s.s_dbind)= (V971);
	{object V975 = (VV[133]->s.s_dbind);
	VMR72(V975)}
	goto T1967;
T1967:;
	{object V976 = Cnil;
	VMR72(V976)}}
	return Cnil;
}
/*	local entry for function UPDATE-STD-OR-STR-METHODS	*/

static object LI79(V979,V980)

object V979;register object V980;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{register object V981;
	register object V982;
	base[2]= (V979);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V981= vs_base[0];
	V982= CMPcar((V981));
	goto T1973;
T1973:;
	if(!(((V981))==Cnil)){
	goto T1974;}
	{object V983 = Cnil;
	VMR73(V983)}
	goto T1974;
T1974:;
	{register object V984;
	base[2]= (V982);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V984= vs_base[0];
	if(!(((V980))==(VV[121]))){
	goto T1982;}
	{register object V986;
	V986= CMPcar((V984));
	V984= CMPcdr((V984));
	V985= (V986);}
	if(!((V985)==((VV[95]->s.s_dbind)))){
	goto T1978;}
	goto T1982;
T1982:;
	base[2]= (VV[237]->s.s_gfdef);
	base[3]= (V984);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk279)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1978;}
	base[2]= CMPcar((V984));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V987= vs_base[0];
	if(!((V987)==(VV[134]))){
	goto T1994;}
	base[2]= CMPcadr((V984));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V988= vs_base[0];
	if(!((V988)==(VV[135]))){
	goto T1994;}
	base[2]= CMPcaddr((V984));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V989= vs_base[0];
	if(!((V989)==(VV[136]))){
	goto T1994;}
	(void)((*(LnkLI331))((V980),(V982)));
	goto T1978;
	goto T1994;
T1994:;
	base[2]= CMPcar((V984));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V990= vs_base[0];
	if(!((V990)==(VV[137]))){
	goto T1978;}
	base[2]= CMPcadr((V984));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V991= vs_base[0];
	if(!((V991)==(VV[138]))){
	goto T1978;}
	base[2]= CMPcaddr((V984));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V992= vs_base[0];
	if(!((V992)==(VV[139]))){
	goto T1978;}
	(void)((*(LnkLI332))((V980),(V982)));}
	goto T1978;
T1978:;
	V981= CMPcdr((V981));
	V982= CMPcar((V981));
	goto T1973;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES-INTERNAL	*/

static object LI80(V995,V996)

register object V995;object V996;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	base[0]= (V995);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V997= vs_base[0];
	base[0]= (V995);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2026;}
	V998= Cnil;
	goto T2025;
	goto T2026;
T2026:;
	if((V996)==Cnil){
	V998= Cnil;
	goto T2025;}
	if(!(((V995))==((VV[95]->s.s_dbind)))){
	goto T2032;}
	V999= Ct;
	goto T2031;
	goto T2032;
T2032:;
	if(!(((V995))==((VV[140]->s.s_dbind)))){
	goto T2034;}
	V999= Ct;
	goto T2031;
	goto T2034;
T2034:;
	if(!(((V995))==((VV[141]->s.s_dbind)))){
	goto T2036;}
	V999= Ct;
	goto T2031;
	goto T2036;
T2036:;
	V999= (((V995))==((VV[142]->s.s_dbind))?Ct:Cnil);
	goto T2031;
T2031:;
	if((V999)==Cnil){
	goto T2029;}
	V998= Cnil;
	goto T2025;
	goto T2029;
T2029:;
	{object V1000;
	base[0]= (V995);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk333)(Lclptr333);
	vs_top=sup;
	V1000= vs_base[0];
	if(((V1000))==Cnil){
	goto T2041;}
	{object V1001;
	object V1002= (V1000);
	if(V1002==Cnil){
	V998= Cnil;
	goto T2025;}
	base[0]=V1001=MMcons(Cnil,Cnil);
	goto T2043;
T2043:;
	(V1001->c.c_cdr)= (*(LnkLI334))((V1002->c.c_car),(V996));
	while(MMcdr(V1001)!=Cnil)V1001=MMcdr(V1001);
	if((V1002=MMcdr(V1002))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V998= base[0];
	goto T2025;}
	goto T2043;}
	goto T2041;
T2041:;
	V998= Cnil;}
	goto T2025;
T2025:;
	{object V1004 = make_cons(V997,V998);
	VMR74(V1004)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES	*/

static object LI81(V1007,V1008)

object V1007;object V1008;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	{object V1009;
	V1009= (*(LnkLI334))((V1007),(V1008));
	if((CMPcdr((V1009)))!=Cnil){
	goto T2047;}
	{object V1010 = (V1009);
	VMR75(V1010)}
	goto T2047;
T2047:;
	{object V1011;
	register object V1012;
	V1011= make_cons(Cnil,(V1009));
	V1012= (V1009);
	goto T2052;
T2052:;
	if((CMPcdr((V1012)))!=Cnil){
	goto T2054;}
	{object V1013 = CMPcdr((V1011));
	VMR75(V1013)}
	goto T2054;
T2054:;
	{register object V1014;
	register object V1015;
	V1014= CMPcadr((V1012));
	V1015= CMPcddr((V1012));
	{register object V1016;
	register object V1017;
	V1016= (V1015);
	V1017= CMPcar((V1016));
	goto T2065;
T2065:;
	if(!(((V1016))==Cnil)){
	goto T2066;}
	goto T2060;
	goto T2066;
T2066:;
	if(!(((V1014))==((V1017)))){
	goto T2070;}
	goto T2061;
	goto T2070;
T2070:;
	V1016= CMPcdr((V1016));
	V1017= CMPcar((V1016));
	goto T2065;}
	goto T2061;
T2061:;
	{register object V1018;
	register object V1019;
	V1018= (V1012);
	V1019= CMPcddr((V1012));
	((V1018))->c.c_cdr = (V1019);
	goto T2053;}
	goto T2060;
T2060:;
	V1012= CMPcdr((V1012));}
	goto T2053;
T2053:;
	goto T2052;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASS-LISTS	*/

static object LI82(V1022,V1023)

object V1022;object V1023;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	if(((V1022))!=Cnil){
	goto T2084;}
	{object V1024 = make_cons(Cnil,Cnil);
	VMR76(V1024)}
	goto T2084;
T2084:;
	{object V1025;
	object V1026;
	V1025= (*(LnkLI335))(CMPcar((V1022)),(V1023));
	V1026= (*(LnkLI336))(CMPcdr((V1022)),(V1023));
	{object V1027;
	object V1028= (V1026);
	if(V1028==Cnil){
	{object V1029 = Cnil;
	VMR76(V1029)}}
	base[2]=V1027=MMcons(Cnil,Cnil);
	goto T2088;
T2088:;
	{object V1031;
	object V1032= (V1025);
	if(V1032==Cnil){
	(V1027->c.c_cdr)= Cnil;
	goto T2089;}
	base[3]=V1031=MMcons(Cnil,Cnil);
	goto T2090;
T2090:;
	(V1031->c.c_car)= make_cons((V1032->c.c_car),(V1028->c.c_car));
	if((V1032=MMcdr(V1032))==Cnil){
	(V1027->c.c_cdr)= base[3];
	goto T2089;}
	V1031=MMcdr(V1031)=MMcons(Cnil,Cnil);
	goto T2090;}
	goto T2089;
T2089:;
	while(MMcdr(V1027)!=Cnil)V1027=MMcdr(V1027);
	if((V1028=MMcdr(V1028))==Cnil){
	base[2]=base[2]->c.c_cdr;
	{object V1034 = base[2];
	VMR76(V1034)}}
	goto T2088;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EMF-CACHE	*/

static object LI85(V1040,V1041,V1042,V1043,V1044)

object V1040;object V1041;object V1042;object V1043;object V1044;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	base[0]= (V1044);
	base[1]= (V1042);
	base[2]= (V1041);
	base[3]= (V1040);
	{object V1045;
	register object V1046;
	base[10]= base[3];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1045= vs_base[0];
	base[5]= (*(LnkLI337))((V1045));
	base[6]= STREF(object,(V1045),8);
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
	V1046= STREF(object,(V1045),28);
	base[9]= VV[143];
	if(((V1043))==Cnil){
	goto T2104;}
	{
	object V1047= (V1043);
	if(V1047==Cnil){
	goto T2102;}
	goto T2106;
T2106:;
	base[10]= (V1047->c.c_car);
	vs_top=(vs_base=base+10)+1;
	L86(base);
	vs_top=sup;
	if((V1047=MMcdr(V1047))==Cnil){
	goto T2102;}
	goto T2106;}
	goto T2104;
T2104:;
	{register object V1048;
	register object V1049;
	base[12]= base[3];
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V1048= vs_base[0];
	V1049= CMPcar((V1048));
	goto T2113;
T2113:;
	if(!(((V1048))==Cnil)){
	goto T2114;}
	goto T2102;
	goto T2114;
T2114:;
	base[12]= (V1049);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V1051= vs_base[0];
	V1052= (*(LnkLI336))(V1051,(V1046));
	{
	object V1050= /* INLINE-ARGS */V1052;
	if(V1050==Cnil){
	goto T2118;}
	goto T2119;
T2119:;
	base[12]= (V1050->c.c_car);
	vs_top=(vs_base=base+12)+1;
	L86(base);
	vs_top=sup;
	if((V1050=MMcdr(V1050))==Cnil){
	goto T2118;}
	goto T2119;}
	goto T2118;
T2118:;
	V1048= CMPcdr((V1048));
	V1049= CMPcar((V1048));
	goto T2113;}
	goto T2102;
T2102:;
	{object V1053 = base[1];
	VMR77(V1053)}}
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
	{object V1054=base[0]->c.c_cdr;
	if(endp(V1054))invalid_macro_call();
	base[2]= (V1054->c.c_car);
	V1054=V1054->c.c_cdr;
	if(endp(V1054))invalid_macro_call();
	base[3]= (V1054->c.c_car);
	V1054=V1054->c.c_cdr;
	if(!endp(V1054))invalid_macro_call();}
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
	V1055= list(2,VV[151],base[2]);
	base[4]= list(3,VV[150],/* INLINE-ARGS */V1055,list(2,VV[152],base[2]));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2136;
T2136:;
	if(!((base[3])==((VV[142]->s.s_dbind)))){
	goto T2139;}
	V1056= list(2,VV[154],base[3]);
	base[4]= list(3,VV[153],/* INLINE-ARGS */V1056,list(2,VV[155],list(2,VV[149],base[2])));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2139;
T2139:;
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V1057= vs_base[0];
	base[4]= list(3,VV[156],base[2],list(2,VV[154],V1057));
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
	{object V1058=base[0]->c.c_cdr;
	if(endp(V1058))invalid_macro_call();
	base[2]= (V1058->c.c_car);
	V1058=V1058->c.c_cdr;
	if(endp(V1058))invalid_macro_call();
	base[3]= (V1058->c.c_car);
	V1058=V1058->c.c_cdr;
	if(!endp(V1058))invalid_macro_call();}
	V1059= list(2,VV[149],base[2]);
	base[4]= list(3,VV[145],/* INLINE-ARGS */V1059,list(2,VV[154],base[3]));
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
	{object V1060=base[0]->c.c_cdr;
	if(endp(V1060))invalid_macro_call();
	base[2]= (V1060->c.c_car);
	V1060=V1060->c.c_cdr;
	if(endp(V1060))invalid_macro_call();
	base[3]= (V1060->c.c_car);
	V1060=V1060->c.c_cdr;
	if(!endp(V1060))invalid_macro_call();}
	base[4]= list(3,VV[108],base[2],list(2,VV[154],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function DNET-METHODS-P	*/

static object LI90(V1062)

object V1062;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	if(type_of((V1062))==t_cons){
	goto T2143;}
	{object V1063 = Cnil;
	VMR81(V1063)}
	goto T2143;
T2143:;
	if(!((CMPcar((V1062)))==(VV[67]))){
	goto T2145;}
	{object V1064 = Ct;
	VMR81(V1064)}
	goto T2145;
T2145:;
	{object V1065 = ((CMPcar((V1062)))==(VV[157])?Ct:Cnil);
	VMR81(V1065)}
	return Cnil;
}
/*	macro definition for SCASE	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1066=base[0]->c.c_cdr;
	if(endp(V1066))invalid_macro_call();
	base[2]= (V1066->c.c_car);
	V1066=V1066->c.c_cdr;
	base[3]= V1066;}
	V1067= list(2,VV[159],base[2]);
	V1068= make_cons(/* INLINE-ARGS */V1067,Cnil);
	{object V1070;
	object V1071= base[3];
	if(V1071==Cnil){
	V1069= Cnil;
	goto T2147;}
	base[4]=V1070=MMcons(Cnil,Cnil);
	goto T2148;
T2148:;
	{register object V1072;
	V1072= (V1071->c.c_car);
	if((CMPcar((V1072)))!=Cnil){
	goto T2152;}
	V1073= Cnil;
	goto T2150;
	goto T2152;
T2152:;
	if(!(type_of(CMPcar((V1072)))==t_cons)){
	goto T2155;}
	if((CMPcdar((V1072)))!=Cnil){
	goto T2158;}
	V1073= list(3,VV[108],VV[159],list(2,VV[154],CMPcaar((V1072))));
	goto T2150;
	goto T2158;
T2158:;
	V1073= list(3,VV[161],VV[159],list(2,VV[154],CMPcar((V1072))));
	goto T2150;
	goto T2155;
T2155:;
	{register object x= CMPcar((V1072)),V1074= VV[162];
	while(V1074!=Cnil)
	if(eql(x,V1074->c.c_car)){
	goto T2162;
	}else V1074=V1074->c.c_cdr;
	goto T2161;}
	goto T2162;
T2162:;
	V1073= Ct;
	goto T2150;
	goto T2161;
T2161:;
	V1073= list(3,VV[108],VV[159],list(2,VV[154],CMPcar((V1072))));
	goto T2150;
T2150:;
	(V1070->c.c_car)= listA(3,V1073,Cnil,CMPcdr((V1072)));}
	if((V1071=MMcdr(V1071))==Cnil){
	V1069= base[4];
	goto T2147;}
	V1070=MMcdr(V1070)=MMcons(Cnil,Cnil);
	goto T2148;}
	goto T2147;
T2147:;
	base[4]= list(3,VV[158],/* INLINE-ARGS */V1068,make_cons(VV[160],V1069));
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
	{object V1075=base[0]->c.c_cdr;
	if(endp(V1075))invalid_macro_call();
	base[2]= (V1075->c.c_car);
	V1075=V1075->c.c_cdr;
	base[3]= V1075;}
	base[4]= listA(3,VV[163],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for GENERATE-DISCRIMINATION-NET	*/

static void L93()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM84; VC84
	vs_check;
	{VOL object V1076;
	VOL object V1077;
	VOL object V1078;
	check_arg(4);
	V1076=(base[0]);
	V1077=(base[1]);
	V1078=(base[2]);
	base[3]=MMcons(base[3],Cnil);
	vs_top=sup;
	{VOL object V1079;
	base[6]= (V1076);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1079= vs_base[0];
	base[5]= STREF(object,(V1079),4);
	base[5]=MMcons(base[5],base[3]);
	base[6]= (V1076);
	base[7]= (V1077);
	base[8]= (V1078);
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

static object LI94(V1081)

register object V1081;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	if(type_of((V1081))!=t_cons){
	goto T2172;}
	if(!((CMPcar((V1081)))==(Ct))){
	goto T2173;}
	goto T2172;
T2172:;
	{object V1082 = (VV[95]->s.s_dbind);
	VMR85(V1082)}
	goto T2173;
T2173:;
	{object V1083= CMPcar((V1081));
	if((V1083!= VV[169]))goto T2177;
	{register object V1084;
	register object V1085;
	V1084= CMPcdr((V1081));
	V1085= CMPcar((V1084));
	goto T2181;
T2181:;
	if(!(((V1084))==Cnil)){
	goto T2182;}
	{object V1086 = (VV[95]->s.s_dbind);
	VMR85(V1086)}
	goto T2182;
T2182:;
	if(!(type_of((V1085))==t_cons)){
	goto T2186;}
	if((CMPcar((V1085)))==(VV[144])){
	goto T2186;}
	V1081= (V1085);
	goto TTL;
	goto T2186;
T2186:;
	V1084= CMPcdr((V1084));
	V1085= CMPcar((V1084));
	goto T2181;}
	goto T2177;
T2177:;
	if((V1083!= VV[144]))goto T2198;
	{object V1087 = (VV[95]->s.s_dbind);
	VMR85(V1087)}
	goto T2198;
T2198:;
	if((V1083!= VV[108]))goto T2199;
	{object V1088 = (*(LnkLI149))(CMPcadr((V1081)));
	VMR85(V1088)}
	goto T2199;
T2199:;
	if((V1083!= VV[109]))goto T2200;
	{object V1089 = CMPcadr((V1081));
	VMR85(V1089)}
	goto T2200;
T2200:;
	if((V1083!= VV[340]))goto T2201;
	{object V1090 = CMPcadr((V1081));
	VMR85(V1090)}
	goto T2201;
T2201:;
	{object V1091 = Cnil;
	VMR85(V1091)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRECOMPUTE-EFFECTIVE-METHODS	*/

static object LI95(object V1093,object V1092,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB86 VMS86 VMV86
	bds_check;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1093,Cnil);
	Vcs[1]=MMcons(V1092,Vcs[0]);
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
	{object V1094;
	object V1095;
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1094= vs_base[0];
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V1095= vs_base[0];
	base[2]= STREF(object,(V1094),4);
	base[2]=MMcons(base[2],Vcs[2]);
	bds_bind(VV[168],Ct);
	base[4]=MMcons(Cnil,base[2]);
	base[5]= (Vcs[0]->c.c_car);
	base[6]= (V1095);
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
	{object V1096 = (base[4]->c.c_car);
	bds_unwind1;
	VMR86(V1096)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
/*	local entry for function AUGMENT-TYPE	*/

static object LI96(V1099,V1100)

register object V1099;register object V1100;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	if(((V1100))==(Ct)){
	goto T2217;}
	if(!((CMPcar((V1099)))==(VV[108]))){
	goto T2218;}
	goto T2217;
T2217:;
	{object V1101 = (V1099);
	VMR87(V1101)}
	goto T2218;
T2218:;
	{register object V1102;
	if(!(type_of((V1100))==t_cons)){
	goto T2224;}
	if(!((CMPcar((V1100)))==(VV[169]))){
	goto T2224;}
	V1102= CMPcdr((V1100));
	goto T2222;
	goto T2224;
T2224:;
	V1102= make_cons((V1100),Cnil);
	goto T2222;
T2222:;
	if((CMPcar((V1099)))==(VV[144])){
	goto T2228;}
	{object V1103;
	object V1104= (V1102);
	if(V1104==Cnil){
	V1102= Cnil;
	goto T2231;}
	base[0]=V1103=MMcons(Cnil,Cnil);
	goto T2232;
T2232:;
	base[1]= (V1099);
	base[2]= (V1104->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2235;}
	(V1103->c.c_cdr)= make_cons((V1104->c.c_car),Cnil);
	goto T2233;
	goto T2235;
T2235:;
	(V1103->c.c_cdr)= Cnil;
	goto T2233;
T2233:;
	while(MMcdr(V1103)!=Cnil)V1103=MMcdr(V1103);
	if((V1104=MMcdr(V1104))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V1102= base[0];
	goto T2231;}
	goto T2232;}
	goto T2231;
T2231:;
	goto T2228;
T2228:;
	if(((V1102))!=Cnil){
	goto T2240;}
	{object V1106 = (V1099);
	VMR87(V1106)}
	goto T2240;
T2240:;
	{object V1107 = listA(3,VV[169],(V1099),(V1102));
	VMR87(V1107)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GENERATE-DISCRIMINATION-NET-INTERNAL	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V1108;
	object V1109;
	check_arg(6);
	V1108=(base[0]);
	V1109=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1110;
	object V1111;
	base[10]= (V1108);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1110= vs_base[0];
	V1111= STREF(object,(V1110),4);
	base[8]= CMPmake_fixnum((long)(*(LnkLI341))((V1110)));
	base[9]= STREF(object,(V1110),8);
	base[10]= (V1111);
	base[11]= (V1109);
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
	{object V1112;
	object V1113;
	object V1114;
	object V1115;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V1112=(base[0]);
	V1113=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2250;}
	V1114=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2251;}
	V1115=(base[3]);
	vs_top=sup;
	goto T2252;
	goto T2250;
T2250:;
	V1114= Cnil;
	goto T2251;
T2251:;
	V1115= Cnil;
	goto T2252;
T2252:;
	base[4]= (VFUN_NARGS=2,(*(LnkLI342))((V1112),(V1113)));
	base[5]= (V1114);
	base[6]= (V1115);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function COMPUTE-MCASE-PARAMETERS	*/

static object LI103(V1117)

object V1117;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	base[0]= (V1117);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V1118= vs_base[0];
	if((Ct)==(CMPcaar(V1118))){
	goto T2258;}
	base[0]= VV[170];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2258;
T2258:;
	{object V1119;
	object V1120;
	object V1121;
	{register object V1122;
	register object V1123;
	V1122= (V1117);
	V1123= CMPcar((V1122));
	goto T2268;
T2268:;
	if(!(((V1122))==Cnil)){
	goto T2269;}
	V1119= Ct;
	goto T2264;
	goto T2269;
T2269:;
	if((CMPcar((V1123)))==(Ct)){
	goto T2273;}
	if(type_of(CMPcaar((V1123)))==t_symbol){
	goto T2273;}
	V1119= Cnil;
	goto T2264;
	goto T2273;
T2273:;
	V1122= CMPcdr((V1122));
	V1123= CMPcar((V1122));
	goto T2268;}
	goto T2264;
T2264:;
	V1124 = CMPmake_fixnum((long)length((V1117)));
	V1120= one_minus(V1124);
	if(!(number_compare((V1120),small_fixnum(1))==0)){
	goto T2286;}
	V1121= VV[171];
	goto T2284;
	goto T2286;
T2286:;
	if(((V1119))==Cnil){
	goto T2293;}
	V1125= (VV[172]->s.s_dbind);
	goto T2291;
	goto T2293;
T2293:;
	V1125= (VV[173]->s.s_dbind);
	goto T2291;
T2291:;
	if(!(number_compare((V1120),V1125)<=0)){
	goto T2289;}
	V1121= VV[174];
	goto T2284;
	goto T2289;
T2289:;
	V1121= VV[175];
	goto T2284;
T2284:;
	{object V1126 = list(2,(V1119),(V1121));
	VMR90(V1126)}}
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
	{object V1127=base[0]->c.c_cdr;
	if(endp(V1127))invalid_macro_call();
	base[2]= (V1127->c.c_car);
	V1127=V1127->c.c_cdr;
	if(endp(V1127))invalid_macro_call();
	base[3]= (V1127->c.c_car);
	V1127=V1127->c.c_cdr;
	if(endp(V1127))invalid_macro_call();
	base[4]= (V1127->c.c_car);
	V1127=V1127->c.c_cdr;
	if(endp(V1127)){
	base[5]= Cnil;
	} else {
	base[5]= (V1127->c.c_car);
	V1127=V1127->c.c_cdr;}
	if(endp(V1127)){
	base[6]= Cnil;
	} else {
	base[6]= (V1127->c.c_car);
	V1127=V1127->c.c_cdr;}
	if(!endp(V1127))invalid_macro_call();}
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
	{object V1128= base[6];
	if((V1128!= VV[171]))goto T2303;
	if((base[5])==Cnil){
	goto T2306;}
	V1129= VV[145];
	goto T2304;
	goto T2306;
T2306:;
	V1129= VV[108];
	goto T2304;
T2304:;
	V1130= list(3,V1129,base[2],list(2,VV[177],base[3]));
	base[7]= list(4,VV[165],/* INLINE-ARGS */V1130,list(2,VV[178],base[3]),base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2303;
T2303:;
	if((V1128!= VV[174]))goto T2308;
	V1131= list(3,VV[180],base[3],base[4]);
	if((base[5])==Cnil){
	goto T2311;}
	V1132= VV[145];
	goto T2309;
	goto T2311;
T2311:;
	V1132= VV[108];
	goto T2309;
T2309:;
	base[7]= list(3,VV[179],/* INLINE-ARGS */V1131,list(3,VV[181],list(3,V1132,VV[182],base[2]),VV[183]));
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2308;
T2308:;
	if((V1128!= VV[175]))goto T2313;
	base[7]= list(4,VV[184],base[2],base[3],base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2313;
T2313:;
	FEerror("The ECASE key value ~s is illegal.",1,V1128);
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
}
/*	local entry for function NET-TEST-CONVERTER	*/

static object LI105(V1134)

register object V1134;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if(!(type_of((V1134))!=t_cons)){
	goto T2315;}
	{object V1135 = (*(LnkLI343))((V1134));
	VMR92(V1135)}
	goto T2315;
T2315:;
	{object V1136= CMPcar((V1134));
	if((V1136!= VV[344])
	&& (V1136!= VV[345]))goto T2317;
	{object V1137 = VV[185];
	VMR92(V1137)}
	goto T2317;
T2317:;
	if((V1136!= VV[67]))goto T2318;
	{object V1138 = VV[186];
	VMR92(V1138)}
	goto T2318;
T2318:;
	if((V1136!= VV[157]))goto T2319;
	{object V1139 = VV[187];
	VMR92(V1139)}
	goto T2319;
T2319:;
	if((V1136!= VV[164]))goto T2320;
	V1140= CMPcadr((V1134));
	{object V1141 = listA(5,VV[188],/* INLINE-ARGS */V1140,Cnil,Cnil,(*(LnkLI346))(CMPcddr((V1134))));
	VMR92(V1141)}
	goto T2320;
T2320:;
	{object V1142 = (*(LnkLI343))((V1134));
	VMR92(V1142)}}
	return Cnil;
}
/*	function definition for NET-CODE-CONVERTER	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	{register object V1143;
	check_arg(1);
	V1143=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1143))!=t_cons)){
	goto T2322;}
	base[1]= (V1143);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk347)();
	return;
	goto T2322;
T2322:;
	{object V1144= CMPcar((V1143));
	if((V1144!= VV[67])
	&& (V1144!= VV[157]))goto T2325;
	{object V1145;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1145= vs_base[0];
	base[1]= (V1145);
	base[2]= make_cons((V1145),Cnil);
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2325;
T2325:;
	if((V1144!= VV[164]))goto T2329;
	{object V1146;
	object V1147;
	object V1148;
	V1146= (*(LnkLI346))(CMPcddr((V1143)));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1147= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1148= vs_base[0];
	base[1]= listA(5,VV[188],CMPcadr((V1143)),(V1147),(V1148),(V1146));
	base[2]= list(2,(V1147),(V1148));
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2329;
T2329:;
	base[1]= (V1143);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk347)();
	return;}
	}
}
/*	local entry for function NET-CONSTANT-CONVERTER	*/

static object LI107(V1151,V1152)

register object V1151;object V1152;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;{object V1153;
	{object V1154;
	V1154= (*(LnkLI348))((V1151),(V1152));
	if(((V1154))==Cnil){
	goto T2340;}
	V1153= make_cons((V1154),Cnil);
	goto T2337;
	goto T2340;
T2340:;
	V1153= Cnil;}
	goto T2337;
T2337:;
	if(V1153==Cnil)goto T2336;
	{object V1155 = V1153;
	VMR94(V1155)}
	goto T2336;
T2336:;}
	if(!(type_of((V1151))!=t_cons)){
	goto T2343;}
	{object V1156 = (*(LnkLI349))((V1151));
	VMR94(V1156)}
	goto T2343;
T2343:;
	{object V1157= CMPcar((V1151));
	if((V1157!= VV[164]))goto T2345;
	{object V1158;
	object V1159;
	object V1160;
	V1158= (*(LnkLI346))(CMPcddr((V1151)));
	{object V1161;
	object V1162= CMPcddr((V1151));
	if(V1162==Cnil){
	V1159= Cnil;
	goto T2347;}
	base[3]=V1161=MMcons(Cnil,Cnil);
	goto T2348;
T2348:;
	{object V1164;
	object V1165;
	V1164= CMPcar((V1162->c.c_car));
	V1165= CMPcadr((V1162->c.c_car));
	if(!(type_of((V1164))==t_cons)){
	goto T2354;}
	V1166= CMPcar((V1164));
	goto T2352;
	goto T2354;
T2354:;
	V1166= (V1164);
	goto T2352;
T2352:;
	V1167= (*(LnkLI348))((V1165),(V1152));
	(V1161->c.c_car)= make_cons(V1166,/* INLINE-ARGS */V1167);}
	if((V1162=MMcdr(V1162))==Cnil){
	V1159= base[3];
	goto T2347;}
	V1161=MMcdr(V1161)=MMcons(Cnil,Cnil);
	goto T2348;}
	goto T2347;
T2347:;
	base[3]= (V1159);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V1168= vs_base[0];
	V1160= CMPcar(V1168);
	base[3]= (V1159);
	vs_top=(vs_base=base+3)+1;
	Lnbutlast();
	vs_top=sup;
	V1169= vs_base[0];
	{object V1170 = list(2,listA(3,VV[189],(V1158),V1169),CMPcdr((V1160)));
	VMR94(V1170)}}
	goto T2345;
T2345:;
	{object V1171 = (*(LnkLI349))((V1151));
	VMR94(V1171)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHODS-CONVERTER	*/

static object LI108(V1174,V1175)

register object V1174;object V1175;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	if(!(type_of((V1174))==t_cons)){
	goto T2362;}
	if(!((CMPcar((V1174)))==(VV[67]))){
	goto T2362;}
	V1176= (VFUN_NARGS=2,(*(LnkLI350))((V1175),CMPcadr((V1174))));
	{object V1177 = make_cons(VV[186],/* INLINE-ARGS */V1176);
	VMR95(V1177)}
	goto T2362;
T2362:;
	if(!(type_of((V1174))==t_cons)){
	goto T2367;}
	if(!((CMPcar((V1174)))==(VV[157]))){
	goto T2367;}
	{object V1178 = (*(LnkLI351))((V1175));
	VMR95(V1178)}
	goto T2367;
T2367:;
	{object V1179 = Cnil;
	VMR95(V1179)}
	return Cnil;
}
/*	function definition for CONVERT-METHODS	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{register object V1180;
	object V1181;
	object V1182;
	check_arg(3);
	V1180=(base[0]);
	V1181=(base[1]);
	V1182=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1180))==t_cons)){
	goto T2372;}
	if(!((CMPcar((V1180)))==(VV[186]))){
	goto T2372;}
	base[3]= CMPcdr((V1180));
	base[4]= (V1181);
	base[5]= (V1182);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2372;
T2372:;
	base[3]= (V1180);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function CONVERT-TABLE	*/

static object LI110(V1186,V1187,V1188)

object V1186;object V1187;object V1188;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if(!(type_of((V1186))==t_cons)){
	goto T2380;}
	if(!((CMPcar((V1186)))==(VV[189]))){
	goto T2380;}
	{object V1189;
	object V1190;
	{object V1191;
	object V1192= CMPcddr((V1186));
	if(V1192==Cnil){
	V1189= Cnil;
	goto T2384;}
	base[0]=V1191=MMcons(Cnil,Cnil);
	goto T2385;
T2385:;
	V1194= CMPcar((V1192->c.c_car));
	base[1]= CMPcdr((V1192->c.c_car));
	base[2]= (V1187);
	base[3]= (V1188);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk352)();
	vs_top=sup;
	V1195= vs_base[0];
	(V1191->c.c_car)= make_cons(/* INLINE-ARGS */V1194,V1195);
	if((V1192=MMcdr(V1192))==Cnil){
	V1189= base[0];
	goto T2384;}
	V1191=MMcdr(V1191)=MMcons(Cnil,Cnil);
	goto T2385;}
	goto T2384;
T2384:;
	V1190= CMPcadr((V1186));
	{object V1196= CMPcadr((V1190));
	if((V1196!= VV[171]))goto T2392;
	{object V1197 = CMPcar((V1189));
	VMR97(V1197)}
	goto T2392;
T2392:;
	if((V1196!= VV[174]))goto T2393;
	{object V1198 = (V1189);
	VMR97(V1198)}
	goto T2393;
T2393:;
	if((V1196!= VV[175]))goto T2394;
	{register object V1199;
	base[0]= VV[190];
	if((CMPcar((V1190)))==Cnil){
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
	V1199= vs_base[0];
	{register object V1200;
	register object V1201;
	V1200= (V1189);
	V1201= CMPcar((V1200));
	goto T2405;
T2405:;
	if(!(((V1200))==Cnil)){
	goto T2406;}
	goto T2401;
	goto T2406;
T2406:;
	{register object V1202;
	register object V1203;
	register object V1204;
	V1202= CMPcar((V1201));
	V1203= (V1199);
	V1204= CMPcdr((V1201));
	base[3]= (V1202);
	base[4]= (V1203);
	base[5]= (V1204);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1200= CMPcdr((V1200));
	V1201= CMPcar((V1200));
	goto T2405;}
	goto T2401;
T2401:;
	{object V1205 = (V1199);
	VMR97(V1205)}}
	goto T2394;
T2394:;
	FEerror("The ECASE key value ~s is illegal.",1,V1196);
	{object V1206 = Cnil;
	VMR97(V1206)}}}
	goto T2380;
T2380:;
	{object V1207 = Cnil;
	VMR97(V1207)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-SECONDARY-DISPATCH-FUNCTION1	*/

static object LI111(object V1209,object V1208,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB98 VMS98 VMV98
	{object V1210;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1209,Cnil);
	V1210= V1208;
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
	if(!((CMPcar((V1210)))==(VV[67]))){
	goto T2426;}
	if(((Vcs[2]->c.c_car))!=Cnil){
	goto T2426;}
	{object V1211 = (VFUN_NARGS=2,(*(LnkLI350))((Vcs[0]->c.c_car),CMPcadr((V1210))));
	VMR98(V1211)}
	goto T2426;
T2426:;
	{object V1212;
	object V1213;
	object V1214;
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
	V1212= vs_base[0];
	V1213= STREF(object,(V1212),8);
	V1214= (*(LnkLI353))((V1212));
	V1215 = CMPmake_fixnum((long)length((V1213)));
	base[4]= make_cons(V1215,(V1214));
	base[4]=MMcons(base[4],base[0]);
	V1216= list(2,VV[193],(V1210));
	V1217= make_cons(/* INLINE-ARGS */V1216,Cnil);
	V1218= list(3,VV[191],VV[192],list(3,VV[158],/* INLINE-ARGS */V1217,(VFUN_NARGS=3,(*(LnkLI355))((V1213),(V1214),VV[193]))));
	V1219= make_cons(/* INLINE-ARGS */V1218,Cnil);
	base[7]= (*(LnkLI354))((Vcs[2]->c.c_car),(V1213),(V1214),/* INLINE-ARGS */V1219);
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
	{object V1220 = 
	make_cclosure_new(LC133,Cnil,base[6],Cdata);
	VMR98(V1220)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-UNORDERED-METHODS-EMF	*/

static object LI113(V1223,V1224)

object V1223;object V1224;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	base[0]=MMcons((V1224),Cnil);
	base[1]=MMcons((V1223),base[0]);
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
	{object V1225 = 
	make_cclosure_new(LC134,Cnil,base[1],Cdata);
	VMR99(V1225)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-VALUE-USING-CLASS-DFUN	*/

static void L114()
{register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{object V1226;
	object V1227;
	object V1228;
	check_arg(3);
	V1226=(base[0]);
	V1227=(base[1]);
	V1228=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1228);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk359)(Lclptr359);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1227);
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
	{object V1229;
	object V1230;
	object V1231;
	object V1232;
	check_arg(4);
	V1229=(base[0]);
	V1230=(base[1]);
	V1231=(base[2]);
	V1232=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]= (V1232);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk360)(Lclptr360);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V1229);
	base[6]= (V1231);
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
	{object V1233;
	object V1234;
	object V1235;
	check_arg(3);
	V1233=(base[0]);
	V1234=(base[1]);
	V1235=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1235);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk361)(Lclptr361);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1234);
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
	{object V1236;
	object V1237;
	register object V1238;
	check_arg(3);
	V1236=(base[0]);
	V1237=(base[1]);
	V1238=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1240;
	object V1241;
	V1240= CMPcar((V1236));
	V1241= CMPcdr((V1236));
	{object V1242;
	if(type_of(V1238)==t_structure){
	goto T2472;}
	goto T2470;
	goto T2472;
T2472:;
	if(!(((V1238)->str.str_def)==(VV[198]))){
	goto T2470;}
	V1242= STREF(object,(V1238),4);
	goto T2468;
	goto T2470;
T2470:;{object V1244;
	V1244= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1238);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk215)();
	vs_top=sup;
	V1245= vs_base[0];
	if(!((V1244)==(CMPcar(V1245)))){
	goto T2475;}}
	V1242= CMPcar(((V1238))->cc.cc_turbo[12]);
	goto T2468;
	goto T2475;
T2475:;
	V1242= Cnil;
	goto T2468;
T2468:;
	{register object V1247;
	{register object V1248;
	V1248= ((V1240))->v.v_self[2];
	if(!(type_of(V1248)==t_fixnum)){
	goto T2487;}
	V1248= ((V1242))->v.v_self[fix((V1248))];
	goto T2485;
	goto T2487;
T2487:;
	V1248= VV[14];
	goto T2485;
T2485:;
	if(!(((V1248))==(VV[14]))){
	goto T2490;}
	base[3]= (V1238);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1247= vs_base[0];
	goto T2482;
	goto T2490;
T2490:;
	V1247= (V1248);}
	goto T2482;
T2482:;
	if(!(((V1247))==Cnil)){
	goto T2494;}
	{object V1250;
	base[3]= (V1238);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1250= vs_base[0];
	if(!(((V1250))==(VV[115]))){
	goto T2498;}
	(void)((*(LnkLI363))((V1238)));
	goto T2498;
T2498:;
	if(!(((V1250))==(VV[199]))){
	goto T2502;}
	base[3]= (V1238);
	base[4]= VV[119];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk364)();
	vs_top=sup;
	base[3]= (VV[365]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2502;
T2502:;
	if(!(equal((V1250),VV[200]))){
	goto T2508;}
	base[3]= (V1238);
	base[4]= VV[121];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk364)();
	vs_top=sup;
	base[3]= (VV[366]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2508;
T2508:;
	if(!(((V1250))==(VV[201]))){
	goto T2514;}
	base[3]= (V1238);
	base[4]= VV[123];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk364)();
	vs_top=sup;
	base[3]= (VV[367]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2514;
T2514:;
	{register object V1252;
	V1252= ((V1240))->v.v_self[1];
	if(!(type_of(V1252)==t_fixnum)){
	goto T2527;}
	V1252= ((V1242))->v.v_self[fix((V1252))];
	goto T2525;
	goto T2527;
T2527:;
	V1252= VV[14];
	goto T2525;
T2525:;
	if(!(((V1252))==(VV[14]))){
	goto T2530;}
	base[3]= (V1238);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V1251= vs_base[0];
	goto T2522;
	goto T2530;
T2530:;
	V1251= (V1252);}
	goto T2522;
T2522:;
	if((STREF(object,V1251,28))==Cnil){
	goto T2520;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI368))((V1238)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2520;
T2520:;
	base[3]= (*(LnkLI369))((V1238));
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2494;
T2494:;
	base[3]= (V1247);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2534;}
	{register object V1254;
	V1254= ((V1240))->v.v_self[2];
	if(!(type_of(V1254)==t_fixnum)){
	goto T2541;}
	V1254= ((V1242))->v.v_self[fix((V1254))];
	goto T2539;
	goto T2541;
T2541:;
	V1254= VV[14];
	goto T2539;
T2539:;
	if(!(((V1254))==(VV[14]))){
	goto T2544;}
	base[3]= (V1238);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk362)(Lclptr362);
	return;
	goto T2544;
T2544:;
	base[3]= (V1254);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2534;
T2534:;
	if(!(type_of((V1247))==t_cons)){
	goto T2548;}
	{register object V1257;
	V1257= ((V1240))->v.v_self[2];
	if(!(type_of(V1257)==t_fixnum)){
	goto T2555;}
	V1257= ((V1242))->v.v_self[fix((V1257))];
	goto T2553;
	goto T2555;
T2555:;
	V1257= VV[14];
	goto T2553;
T2553:;
	if(!(((V1257))==(VV[14]))){
	goto T2558;}
	base[3]= (V1238);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1256= vs_base[0];
	goto T2550;
	goto T2558;
T2558:;
	V1256= (V1257);}
	goto T2550;
T2550:;
	base[3]= CMPcar(V1256);
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

static object LI118(V1263,V1264,V1265,V1266)

object V1263;object V1264;object V1265;register object V1266;
{	 VMB104 VMS104 VMV104
	bds_check;
	goto TTL;
TTL:;
	{object V1268;
	base[1]= (V1266);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1268= vs_base[0];
	bds_bind(VV[126],(V1265));
	if((STREF(object,(V1268),28))==Cnil){
	goto T2567;}
	{object V1269;
	object V1270;
	object V1271;
	base[1]= (V1266);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk370)();
	if(vs_base>=vs_top){vs_top=sup;goto T2571;}
	V1269= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2572;}
	V1270= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2573;}
	V1271= vs_base[0];
	vs_top=sup;
	goto T2574;
	goto T2571;
T2571:;
	V1269= Cnil;
	goto T2572;
T2572:;
	V1270= Cnil;
	goto T2573;
T2573:;
	V1271= Cnil;
	goto T2574;
T2574:;
	(void)((VFUN_NARGS=4,(*(LnkLI371))((V1266),(V1269),(V1270),(V1271))));
	{object V1272 = (VFUN_NARGS=4,(*(LnkLI288))((V1266),(V1269),(V1270),(V1271)));
	bds_unwind1;
	VMR104(V1272)}}
	goto T2567;
T2567:;
	{object V1273 = Cnil;
	bds_unwind1;
	VMR104(V1273)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD FUNCTION-KEYWORDS (STANDARD-METHOD))	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{object V1274;
	object V1275;
	register object V1276;
	check_arg(3);
	V1274=(base[0]);
	V1275=(base[1]);
	V1276=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1278;
	object V1279;
	object V1280;
	object V1281;
	object V1282;
	object V1283;
	if(!(type_of((V1276))==t_cons)){
	goto T2582;}
	base[3]= (*(LnkLI372))((V1276));
	goto T2580;
	goto T2582;
T2582:;
	base[4]= (V1276);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T2580;
T2580:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk373)();
	if(vs_base>=vs_top){vs_top=sup;goto T2585;}
	V1278= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2586;}
	V1279= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2587;}
	V1280= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2588;}
	V1281= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2589;}
	V1282= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2590;}
	V1283= vs_base[0];
	vs_top=sup;
	goto T2591;
	goto T2585;
T2585:;
	V1278= Cnil;
	goto T2586;
T2586:;
	V1279= Cnil;
	goto T2587;
T2587:;
	V1280= Cnil;
	goto T2588;
T2588:;
	V1281= Cnil;
	goto T2589;
T2589:;
	V1282= Cnil;
	goto T2590;
T2590:;
	V1283= Cnil;
	goto T2591;
T2591:;
	base[3]= (V1283);
	base[4]= (V1282);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	local entry for function METHOD-LL->GENERIC-FUNCTION-LL	*/

static object LI120(V1285)

object V1285;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	{object V1286;
	object V1287;
	object V1288;
	object V1289;
	object V1290;
	object V1291;
	base[1]= (V1285);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk373)();
	if(vs_base>=vs_top){vs_top=sup;goto T2596;}
	V1286= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2597;}
	V1287= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2598;}
	V1288= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2599;}
	V1289= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2600;}
	V1290= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2601;}
	V1291= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2602;}
	base[0]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T2603;
	goto T2596;
T2596:;
	V1286= Cnil;
	goto T2597;
T2597:;
	V1287= Cnil;
	goto T2598;
T2598:;
	V1288= Cnil;
	goto T2599;
T2599:;
	V1289= Cnil;
	goto T2600;
T2600:;
	V1290= Cnil;
	goto T2601;
T2601:;
	V1291= Cnil;
	goto T2602;
T2602:;
	base[0]=MMcons(Cnil,Cnil);
	goto T2603;
T2603:;
	base[1]= 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	base[2]= (V1285);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk374)();
	vs_top=sup;
	{object V1292 = vs_base[0];
	VMR106(V1292)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-PRETTY-ARGLIST (STANDARD-GENERIC-FUNCTION))	*/

static object LI121(V1296,V1297,V1298)

object V1296;object V1297;object V1298;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1300;
	object V1301;
	base[0]= (V1298);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V1300= vs_base[0];
	V1301= Cnil;
	if(((V1300))==Cnil){
	goto T2612;}
	{object V1302;
	object V1303;
	object V1304;
	register object V1305;
	register object V1306;
	base[0]= CMPcar((V1300));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk375)(Lclptr375);
	if(vs_base>=vs_top){vs_top=sup;goto T2616;}
	V1302= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2617;}
	V1303= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2618;}
	V1304= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2619;}
	V1305= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2620;}
	V1306= vs_base[0];
	vs_top=sup;
	goto T2621;
	goto T2616;
T2616:;
	V1302= Cnil;
	goto T2617;
T2617:;
	V1303= Cnil;
	goto T2618;
T2618:;
	V1304= Cnil;
	goto T2619;
T2619:;
	V1305= Cnil;
	goto T2620;
T2620:;
	V1306= Cnil;
	goto T2621;
T2621:;
	{register object V1307;
	register object V1308;
	V1307= CMPcdr((V1300));
	V1308= CMPcar((V1307));
	goto T2626;
T2626:;
	if(!(((V1307))==Cnil)){
	goto T2627;}
	goto T2622;
	goto T2627;
T2627:;
	{register object V1309;
	register object V1310;
	register object V1311;
	base[2]= (V1308);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk376)(Lclptr376);
	if(vs_base>=vs_top){vs_top=sup;goto T2634;}
	V1309= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2635;}
	V1310= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2636;}
	V1311= vs_base[0];
	vs_top=sup;
	goto T2637;
	goto T2634;
T2634:;
	V1309= Cnil;
	goto T2635;
T2635:;
	V1310= Cnil;
	goto T2636;
T2636:;
	V1311= Cnil;
	goto T2637;
T2637:;
	base[2]= (V1305);
	base[3]= (V1311);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk377)();
	vs_top=sup;
	V1305= vs_base[0];
	if((V1306)!=Cnil){
	goto T2642;}
	V1306= (V1310);
	goto T2642;
T2642:;}
	V1307= CMPcdr((V1307));
	V1308= CMPcar((V1307));
	goto T2626;}
	goto T2622;
T2622:;
	if(((V1306))==Cnil){
	goto T2648;}
	V1301= VV[203];
	goto T2648;
T2648:;
	if(((V1305))==Cnil){
	goto T2652;}
	base[0]= make_cons(VV[204],Cnil);
	base[1]= (V1305);
	base[2]= (V1301);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1301= vs_base[0];
	goto T2652;
T2652:;
	if(((V1304))==Cnil){
	goto T2659;}
	V1312= list(2,VV[97],(V1304));
	V1301= nconc(/* INLINE-ARGS */V1312,(V1301));
	goto T2659;
T2659:;
	if(((V1303))==Cnil){
	goto T2663;}
	base[0]= make_cons(VV[205],Cnil);
	base[1]= (V1303);
	base[2]= (V1301);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1301= vs_base[0];
	goto T2663;
T2663:;
	{object V1313 = nconc((V1302),(V1301));
	VMR107(V1313)}}
	goto T2612;
T2612:;
	{object V1314 = Cnil;
	VMR107(V1314)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD METHOD-PRETTY-ARGLIST (STANDARD-METHOD))	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{object V1315;
	object V1316;
	object V1317;
	check_arg(3);
	V1315=(base[0]);
	V1316=(base[1]);
	V1317=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1319;
	register object V1320;
	object V1321;
	register object V1322;
	object V1323;
	register object V1324;
	object V1325;
	base[3]= (V1317);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V1325= vs_base[0];
	V1319= Cnil;
	V1320= Cnil;
	V1321= Cnil;
	V1322= Cnil;
	V1323= Cnil;
	V1324= VV[206];
	{register object V1326;
	register object V1327;
	V1326= (V1325);
	V1327= CMPcar((V1326));
	goto T2679;
T2679:;
	if(!(((V1326))==Cnil)){
	goto T2680;}
	goto T2675;
	goto T2680;
T2680:;
	if(!(((V1327))==(VV[205]))){
	goto T2686;}
	V1324= VV[207];
	goto T2684;
	goto T2686;
T2686:;
	if(!(((V1327))==(VV[97]))){
	goto T2690;}
	V1324= VV[208];
	goto T2684;
	goto T2690;
T2690:;
	if(!(((V1327))==(VV[204]))){
	goto T2694;}
	V1324= VV[209];
	goto T2684;
	goto T2694;
T2694:;
	if(!(((V1327))==(VV[202]))){
	goto T2698;}
	V1323= Ct;
	goto T2684;
	goto T2698;
T2698:;
	{register object V1328;
	{register object x= (V1327),V1329= VV[90];
	while(V1329!=Cnil)
	if(x==(V1329->c.c_car)){
	V1328= V1329;
	goto T2701;
	}else V1329=V1329->c.c_cdr;
	V1328= Cnil;}
	goto T2701;
T2701:;
	if(((V1328))==Cnil){
	goto T2703;}
	goto T2684;
	goto T2703;
T2703:;
	{object V1330= (V1324);
	if((V1330!= VV[206]))goto T2705;
	V1319= make_cons(V1327,(V1319));
	goto T2684;
	goto T2705;
T2705:;
	if((V1330!= VV[207]))goto T2707;
	V1320= make_cons(V1327,(V1320));
	goto T2684;
	goto T2707;
T2707:;
	if((V1330!= VV[209]))goto T2709;
	V1322= make_cons(V1327,(V1322));
	goto T2684;
	goto T2709;
T2709:;
	if((V1330!= VV[208]))goto T2711;
	V1321= (V1327);
	goto T2684;
	goto T2711;
T2711:;
	FEerror("The ECASE key value ~s is illegal.",1,V1330);
	goto T2684;}}
	goto T2684;
T2684:;
	V1326= CMPcdr((V1326));
	V1327= CMPcar((V1326));
	goto T2679;}
	goto T2675;
T2675:;
	base[3]= nreverse((V1319));
	base[4]= nreverse((V1320));
	base[5]= (V1321);
	base[6]= nreverse((V1322));
	base[7]= (V1323);
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
	{object V1334;
	check_arg(1);
	V1334=(base[0]);
	vs_top=sup;{object V1335;
	{register object x= (V1334),V1336= (base0[0]->c.c_car);
	while(V1336!=Cnil)
	if(x==(V1336->c.c_car)){
	V1335= V1336;
	goto T2724;
	}else V1336=V1336->c.c_cdr;
	V1335= Cnil;}
	goto T2724;
T2724:;
	if(V1335==Cnil)goto T2723;
	base[1]= V1335;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2723;
T2723:;}
	base[1]= (((V1334))==(VV[202])?Ct:Cnil);
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
	{object V1337;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1337=(base[0]);
	vs_top=sup;
	{object V1338;
	object V1339;
	object V1340;
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1337);
	base[6]= VV[108];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	V1338= vs_base[0];
	V1339= (*(LnkLI378))((base0[0]->c.c_car),(base0[1]->c.c_car),(V1338));
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1339);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V1340= vs_base[0];
	base[4]= (V1340);
	base[5]= (V1337);
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
	{object V1341;
	object V1342;
	check_arg(2);
	V1341=(base[0]);
	V1342=(base[1]);
	vs_top=sup;
	{object V1343;
	object V1344;
	V1343= make_cons(Cnil,Cnil);
	V1344= (V1343);
	{register object V1345;
	register object V1346;
	V1345= (base0[0]->c.c_car);
	V1346= CMPcar((V1345));
	goto T2741;
T2741:;
	if(!(((V1345))==Cnil)){
	goto T2742;}
	goto T2737;
	goto T2742;
T2742:;
	{object V1347;
	register object V1348;{object V1349;
	{register object V1350;
	register object V1351;
	V1350= (V1343);
	V1351= CMPcar((V1350));
	goto T2753;
T2753:;
	if(!(((V1350))==Cnil)){
	goto T2754;}
	V1349= Cnil;
	goto T2749;
	goto T2754;
T2754:;
	if(!((CMPcar((V1351)))==((V1346)))){
	goto T2758;}
	V1349= (V1351);
	goto T2749;
	goto T2758;
T2758:;
	V1350= CMPcdr((V1350));
	V1351= CMPcar((V1350));
	goto T2753;}
	goto T2749;
T2749:;
	if(V1349==Cnil)goto T2748;
	V1347= V1349;
	goto T2747;
	goto T2748;
T2748:;}{object V1353;
	V1353= (*(LnkLI380))((V1346),(V1341),(V1342));
	if(V1353==Cnil)goto T2767;
	V1352= V1353;
	goto T2766;
	goto T2767;
T2767:;}
	base[6]= (V1346);
	base[7]= (V1341);
	base[8]= (V1342);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk352)();
	vs_top=sup;
	V1352= vs_base[0];
	goto T2766;
T2766:;
	V1347= make_cons((V1346),V1352);
	goto T2747;
T2747:;
	V1348= make_cons((V1347),Cnil);
	{register object V1355;
	V1355= (V1348);
	(V1344)->c.c_cdr = (V1355);}
	V1344= (V1348);}
	V1345= CMPcdr((V1345));
	V1346= CMPcar((V1345));
	goto T2741;}
	goto T2737;
T2737:;
	{object V1356;
	base[3]= (base0[1]->c.c_car);
	{object V1357;
	{object V1358;
	object V1359= CMPcdr((V1343));
	if(V1359==Cnil){
	V1357= Cnil;
	goto T2784;}
	base[4]=V1358=MMcons(Cnil,Cnil);
	goto T2785;
T2785:;
	(V1358->c.c_car)= CMPcdr((V1359->c.c_car));
	if((V1359=MMcdr(V1359))==Cnil){
	V1357= base[4];
	goto T2784;}
	V1358=MMcdr(V1358)=MMcons(Cnil,Cnil);
	goto T2785;}
	goto T2784;
T2784:;
	 vs_top=base+4;
	 while(V1357!=Cnil)
	 {vs_push((V1357)->c.c_car);V1357=(V1357)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1356= vs_base[0];
	if(((base0[4]->c.c_car))==Cnil){
	goto T2788;}
	base[3]= (V1356);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2788;
T2788:;
	base[3]= (V1356);
	base[4]= list(2,VV[194],(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk259)();
	vs_top=sup;
	V1360= vs_base[0];
	base[3]= (VFUN_NARGS=4,(*(LnkLI381))(VV[54],V1360,VV[195],(base0[2]->c.c_car)));
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
	{object V1361;
	check_arg(1);
	V1361=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI382))((V1361),(base0[3]->c.c_car));
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
	V1362= make_cons(CMPcar(base[0]),base[2]);
	base[7]= make_cons(/* INLINE-ARGS */V1362,base[4]);
	vs_top=(vs_base=base+5)+3;
	L100(base0);
	return;
	goto T2794;
T2794:;
	{object V1363;
	object V1364;
	V1363= CMPcar(base[0]);
	base[6]= CMPcar(base[1]);
	base[9]= base[6];
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V1365= vs_base[0];
	V1364= nth(fix((V1363)),V1365);
	base[10]= (V1364);
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
	base[11]= (V1363);
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
	{object V1366;
	object V1367;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1366=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2831;}
	V1367=(base[1]);
	vs_top=sup;
	goto T2832;
	goto T2831;
T2831:;
	V1367= Cnil;
	goto T2832;
T2832:;
	{object V1368;
	if(((V1366))==Cnil){
	goto T2836;}
	V1368= base1[8];
	goto T2834;
	goto T2836;
T2836:;
	V1368= list(2,VV[144],base1[8]);
	goto T2834;
T2834:;
	base[2]= base1[0];
	base[3]= CMPcdr(base1[1]);
	if(((V1367))==Cnil){
	goto T2842;}
	base[4]= base1[2];
	goto T2840;
	goto T2842;
T2842:;
	base[4]= (*(LnkLI385))((V1368),base1[2]);
	goto T2840;
T2840:;
	if(((V1366))==Cnil){
	goto T2846;}
	V1369= make_cons(base1[6],Cnil);
	base[5]= append(base1[3],/* INLINE-ARGS */V1369);
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
	{object V1370;
	check_arg(1);
	V1370=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1370))==Cnil){
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
	{object V1371;
	object V1372;
	object V1373;
	check_arg(3);
	V1371=(base[0]);
	V1372=(base[1]);
	V1373=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1371))==Cnil){
	goto T2853;}
	{object V1374;
	object V1375;
	V1374= CMPcar((V1371));{object V1376;
	V1376= nth(fix((V1374)),base0[2]);
	if(V1376==Cnil)goto T2857;
	V1375= V1376;
	goto T2856;
	goto T2857;
T2857:;}
	V1375= Ct;
	goto T2856;
T2856:;
	if(!((nth(fix((V1374)),base0[9]))==(Ct))){
	goto T2860;}
	V1371= CMPcdr((V1371));
	V1377= make_cons((V1374),(V1375));
	V1373= make_cons(/* INLINE-ARGS */V1377,(V1373));
	goto TTL;
	return;
	goto T2860;
T2860:;
	base[5]= (V1371);
	base[6]= (V1372);
	base[7]= (V1375);
	base[8]= Cnil;
	base[9]= (V1373);
	vs_top=(vs_base=base+5)+5;
	L101(base0);
	return;}
	goto T2853;
T2853:;
	base[3]= (V1372);
	{register object V1378;
	base[5]= base0[8];
	vs_top=(vs_base=base+5)+1;
	Lmake_list();
	vs_top=sup;
	V1378= vs_base[0];
	{register object V1379;
	register object V1380;
	V1379= (V1373);
	V1380= CMPcar((V1379));
	goto T2879;
T2879:;
	if(!(((V1379))==Cnil)){
	goto T2880;}
	goto T2875;
	goto T2880;
T2880:;
	{register object V1381;
	register object V1382;
	register object V1383;
	V1381= CMPcar((V1380));
	V1382= (V1378);
	V1383= CMPcdr((V1380));
	(nthcdr(fix((V1381)),(V1382)))->c.c_car = (V1383);
	(void)(nthcdr(fix((V1381)),(V1382)));}
	V1379= CMPcdr((V1379));
	V1380= CMPcar((V1379));
	goto T2879;}
	goto T2875;
T2875:;
	base[4]= (V1378);}
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
	{register object V1384;
	check_arg(1);
	V1384=(base[0]);
	vs_top=sup;
	if(!(type_of((V1384))==t_cons)){
	goto T2895;}
	if(!((CMPcar((V1384)))==(VV[108]))){
	goto T2895;}
	base[1]= list(2,VV[109],(*(LnkLI149))(CMPcadr((V1384))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2895;
T2895:;
	base[1]= (V1384);
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
	{object V1385;
	object V1386;
	object V1387;
	object V1388;
	check_arg(4);
	V1385=(base[0]);
	V1386=(base[1]);
	V1387=(base[2]);
	V1388=(base[3]);
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
	{object V1389;
	check_arg(2);
	V1389=(base[0]);
	base[1]=MMcons(base[1],base0[0]);
	vs_top=sup;
	if(((V1389))==Cnil){
	goto T2900;}
	if(((base0[2]->c.c_car))==Cnil){
	goto T2902;}
	{object V1390;
	{object V1391;
	object V1392= (base[1]->c.c_car);
	if(V1392==Cnil){
	V1390= Cnil;
	goto T2905;}
	base[3]=V1391=MMcons(Cnil,Cnil);
	goto T2906;
T2906:;
	(V1391->c.c_car)= (*(LnkLI386))((V1392->c.c_car));
	if((V1392=MMcdr(V1392))==Cnil){
	V1390= base[3];
	goto T2905;}
	V1391=MMcdr(V1391)=MMcons(Cnil,Cnil);
	goto T2906;}
	goto T2905;
T2905:;
	(base0[0]->c.c_car)= make_cons((V1390),(base0[0]->c.c_car));}
	goto T2902;
T2902:;
	V1393= (*(LnkLI387))((V1389));
	base[2]= ((/* INLINE-ARGS */V1393)==Cnil?Ct:Cnil);
	base[2]=MMcons(base[2],base[1]);
	V1394= 
	make_cclosure_new(LC136,Cnil,base[2],Cdata);
	base[3]= (*(LnkLI388))((V1389),(base0[1]->c.c_car),V1394);
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
	{object V1395;
	check_arg(1);
	V1395=(base[0]);
	vs_top=sup;
	base[1]= (VFUN_NARGS=6,(*(LnkLI307))((base0[6]->c.c_car),(V1395),(base0[1]->c.c_car),Cnil,(base0[5]->c.c_car),(base0[0]->c.c_car)));
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
	{object V1396;
	register object V1397;
	object V1398;
	register object V1399;
	check_arg(4);
	V1396=(base[0]);
	V1397=(base[1]);
	V1398=(base[2]);
	V1399=(base[3]);
	vs_top=sup;
	{object V1400;
	V1400= (*(LnkLI389))((V1396));
	if(!((CMPcar((V1397)))==(VV[108]))){
	goto T2913;}
	{object V1401;
	object V1402;
	object V1403;
	object V1404;
	if(type_of((V1399))==t_cons){
	goto T2916;}
	V1401= Cnil;
	goto T2915;
	goto T2916;
T2916:;
	if(!((CMPcar((V1399)))==(VV[163]))){
	goto T2920;}
	goto T2918;
	goto T2920;
T2920:;
	if((CMPcar((V1399)))==(VV[164])){
	goto T2918;}
	V1401= Cnil;
	goto T2915;
	goto T2918;
T2918:;
	V1401= (((V1400))==(CMPcadr((V1399)))?Ct:Cnil);
	goto T2915;
T2915:;
	if(((V1401))==Cnil){
	goto T2924;}
	V1402= CMPcddr((V1399));
	goto T2922;
	goto T2924;
T2924:;
	V1405= list(2,Ct,(V1399));
	V1402= make_cons(/* INLINE-ARGS */V1405,Cnil);
	goto T2922;
T2922:;
	if(((*(LnkLI390))((V1398)))==Cnil){
	goto T2928;}
	if(((V1401))==Cnil){
	goto T2933;}
	if(!((CMPcar((V1399)))==(VV[164]))){
	goto T2928;}
	goto T2931;
	goto T2933;
T2933:;
	if(((*(LnkLI390))((V1399)))==Cnil){
	goto T2928;}
	goto T2931;
T2931:;
	V1403= VV[164];
	goto T2926;
	goto T2928;
T2928:;
	V1403= VV[163];
	goto T2926;
T2926:;
	V1404= make_cons(CMPcadr((V1397)),Cnil);
	base[8]= listA(4,(V1403),(V1400),list(2,(V1404),(V1398)),(V1402));
	vs_top=(vs_base=base+8)+1;
	return;}
	goto T2913;
T2913:;
	{object V1407;
	V1407= (*(LnkLI389))((V1396));
	{object V1408= CMPcar((V1397));
	if((V1408!= VV[340]))goto T2938;
	V1406= list(3,VV[166],(V1407),CMPcadr((V1397)));
	goto T2936;
	goto T2938;
T2938:;
	if((V1408!= VV[109]))goto T2939;
	V1406= list(3,VV[167],(V1407),CMPcadr((V1397)));
	goto T2936;
	goto T2939;
T2939:;
	V1406= Cnil;}}
	goto T2936;
T2936:;
	base[4]= list(4,VV[165],V1406,(V1398),(V1399));
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
	{VOL object V1409;
	object V1410;
	check_arg(2);
	V1409=(base[0]);
	V1410=(base[1]);
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
	base[4]= (V1409);
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1411= vs_base[0];
	V1412= 
	make_cclosure_new(LC137,Cnil,base[3],Cdata);
	(void)((*(LnkLI388))(V1411,(base0[0]->c.c_car),V1412));
	V1409= (base[3]->c.c_car);
	frs_pop();
	}
	goto T2944;
T2944:;
	goto T2940;
T2940:;
	base[2]= list(3,VV[67],(V1409),(V1410));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2941;
T2941:;
	base[2]= list(3,VV[157],(V1409),(V1410));
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
	{object V1413;
	check_arg(1);
	V1413=(base[0]);
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
	(base0[0]->c.c_car)= (V1413);
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
	{register object V1414;
	check_arg(1);
	V1414=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2956;}
	{register object x= base0[0],V1415= (V1414);
	while(V1415!=Cnil)
	if(x==(V1415->c.c_car)){
	goto T2960;
	}else V1415=V1415->c.c_cdr;
	goto T2957;}
	goto T2960;
T2960:;
	goto T2956;
T2956:;
	{object V1416;
	V1416= (*(LnkLI392))(base0[5],base0[7],(V1414),base0[6]);
	if(((V1416))==Cnil){
	goto T2963;}
	V1417= (VFUN_NARGS=3,(*(LnkLI393))(base0[1],(V1416),base0[9]));
	if(!((base0[9])==(/* INLINE-ARGS */V1417))){
	goto T2963;}
	{object V1418;
	if(!((base0[2])==(Ct))){
	goto T2969;}
	base[1]= base0[3];
	base[2]= (V1414);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk394)();
	vs_top=sup;
	V1418= vs_base[0];
	goto T2967;
	goto T2969;
T2969:;
	if(!((base0[2])==(VV[112]))){
	goto T2974;}
	V1418= (*(LnkLI395))(base0[3],(V1414));
	goto T2967;
	goto T2974;
T2974:;
	V1418= Cnil;
	goto T2967;
T2967:;
	base0[1]= (VFUN_NARGS=4,(*(LnkLI396))(base0[1],(V1416),(V1418),Ct));
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
	{object V1419;
	check_arg(1);
	V1419=(base[0]);
	vs_top=sup;
	base[1]= (V1419);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2978;}
	{register object V1420;
	register object V1421;
	base[3]= (V1419);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk398)(Lclptr398);
	vs_top=sup;
	V1420= vs_base[0];
	V1421= CMPcar((V1420));
	goto T2985;
T2985:;
	if(!(((V1420))==Cnil)){
	goto T2986;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2986;
T2986:;
	base[3]= (V1421);
	base[4]= (base0[0]->c.c_car);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk399)(Lclptr399);
	vs_top=sup;
	V1420= CMPcdr((V1420));
	V1421= CMPcar((V1420));
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
	{object V1422;
	check_arg(1);
	V1422=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1422);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk397)(Lclptr397);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3000;}
	{register object V1423;
	register object V1424;
	base[3]= (V1422);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk398)(Lclptr398);
	vs_top=sup;
	V1423= vs_base[0];
	V1424= CMPcar((V1423));
	goto T3007;
T3007:;
	if(!(((V1423))==Cnil)){
	goto T3008;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3008;
T3008:;
	base[3]= (V1424);
	base[4]= (base0[1]->c.c_car);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk399)(Lclptr399);
	vs_top=sup;
	V1423= CMPcdr((V1423));
	V1424= CMPcar((V1423));
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
	{object V1425;
	check_arg(1);
	V1425=(base[0]);
	vs_top=sup;
	{register object x= (V1425),V1426= (base0[1]->c.c_car);
	while(V1426!=Cnil)
	if(eql(x,V1426->c.c_car)){
	goto T3021;
	}else V1426=V1426->c.c_cdr;}
	{register object V1427;
	register object V1428;
	V1427= (base0[0]->c.c_car);
	V1428= CMPcar((V1427));
	goto T3029;
T3029:;
	if(!(((V1427))==Cnil)){
	goto T3030;}
	goto T3022;
	goto T3030;
T3030:;
	base[2]= (*(LnkLI149))((V1425));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk155)(Lclptr155);
	vs_top=sup;
	V1430= vs_base[0];
	{register object x= (V1428),V1429= V1430;
	while(V1429!=Cnil)
	if(eql(x,V1429->c.c_car)){
	goto T3034;
	}else V1429=V1429->c.c_cdr;}
	goto T3034;
T3034:;
	V1427= CMPcdr((V1427));
	V1428= CMPcar((V1427));
	goto T3029;}
	goto T3021;
T3021:;
	base[1]= (*(LnkLI317))((V1425));
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
	{object V1431;
	check_arg(1);
	V1431=(base[0]);
	vs_top=sup;
	{register object x= (V1431),V1432= (base0[0]->c.c_car);
	while(V1432!=Cnil)
	if(eql(x,V1432->c.c_car)){
	base[1]= V1432;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1432=V1432->c.c_cdr;
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
	{object V1433;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1433=(base[0]);
	vs_top=sup;
	{object V1434;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1433);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk115)(Lclptr115);
	vs_top=sup;
	V1434= vs_base[0];
	if(((V1434))==Cnil){
	goto T3046;}
	{object V1435;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1434);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V1435= vs_base[0];
	base[1]= (V1435);
	base[2]= (V1433);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk379)();
	return;}
	goto T3046;
T3046:;
	base[1]=VV[400]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1436;
	V1436= (V1433);
	 vs_top=base+3;
	 while(V1436!=Cnil)
	 {vs_push((V1436)->c.c_car);V1436=(V1436)->c.c_cdr;}
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
	{object V1437;
	object V1438;
	check_arg(2);
	V1437=(base[0]);
	V1438=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1439;
	V1439= (V1437);
	 vs_top=base+3;
	 while(V1439!=Cnil)
	 {vs_push((V1439)->c.c_car);V1439=(V1439)->c.c_cdr;}
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
	{object V1440;
	object V1441;
	object V1442;
	check_arg(3);
	V1440=(base[0]);
	V1441=(base[1]);
	V1442=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[84];
	base[4]= base0[2];
	base[5]= (V1440);
	base[6]= (V1441);
	base[7]= (V1442);
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
	{object V1443;
	object V1444;
	object V1445;
	check_arg(3);
	V1443=(base[0]);
	V1444=(base[1]);
	V1445=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[57];
	base[4]= base0[2];
	base[5]= (V1443);
	base[6]= (V1444);
	base[7]= (V1445);
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

