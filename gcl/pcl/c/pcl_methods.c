
#include "cmpinclude.h"
#include "pcl_methods.h"
void init_pcl_methods(){do_init(VV);}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (T T))	*/

static object LI1(V5,V6,V7,V8)

object V5;object V6;register object V7;register object V8;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= (V8);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V10;
	base[0]= (*(LnkLI191))((V7));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V10= vs_base[0];
	if(((V10))==Cnil){
	goto T10;}
	base[0]= (V8);
	base[1]= VV[1];
	base[2]= (V10);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T6;
	goto T10;
T10:;
	base[0]= (V8);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;}
	goto T6;
T6:;
	base[0]= (V8);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI265))((V7),(V8)));
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
	{object V21 = (VFUN_NARGS=2,(*(LnkLI266))((V18),(V19)));
	VMR2(V21)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (SLOT-DEFINITION T))	*/

static object LI3(V26,V27,V28,V29)

object V26;object V27;object V28;object V29;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V31 = (VFUN_NARGS=2,(*(LnkLI266))((V28),(V29)));
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
	if (narg <= 0) goto T27;
	else {
	V36= first;}
	V37= Ct;
	--narg; goto T28;
	goto T27;
T27:;
	V36= Cnil;
	V37= Cnil;
	goto T28;
T28:;
	base[0]= (V35);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	if(((V37))==Cnil){
	goto T35;}
	base[0]= (V35);
	base[1]= VV[5];
	base[3]= (*(LnkLI191))((V34));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V38= vs_base[0];
	base[2]= (VFUN_NARGS=1,(*(LnkLI267))(V38));
	base[4]= (V34);
	base[5]= VV[6];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk268)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V36);
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	goto T33;
	goto T35;
T35:;
	base[0]= (V35);
	base[1]= VV[7];
	base[3]= (*(LnkLI191))((V34));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V39= vs_base[0];
	base[2]= (VFUN_NARGS=1,(*(LnkLI267))(V39));
	base[4]= (V34);
	base[5]= VV[6];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk268)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T33;
T33:;
	base[0]= (V35);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI265))((V34),(V35)));
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
	(void) (*Lnk268)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V47);
	base[5]= VV[10];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk268)();
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
	(void)((*(LnkLI265))((V47),(V48)));
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
	{register object V51;
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
	{object V59;
	if(type_of(V53)==t_structure){
	goto T90;}
	goto T88;
	goto T90;
T90:;
	if(!(((V53)->str.str_def)==(VV[16]))){
	goto T88;}
	V59= STREF(object,(V53),4);
	goto T86;
	goto T88;
T88:;{object V61;
	V61= (VV[13]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V53);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V62= vs_base[0];
	if(!((V61)==(CMPcar(V62)))){
	goto T93;}}
	V59= CMPcar(((V53))->cc.cc_turbo[12]);
	goto T86;
	goto T93;
T93:;
	V59= Cnil;
	goto T86;
T86:;
	{object V64;
	{register object V66;
	V66= ((V57))->v.v_self[2];
	if(!(type_of(V66)==t_fixnum)){
	goto T108;}
	V66= ((V59))->v.v_self[fix((V66))];
	goto T106;
	goto T108;
T108:;
	V66= VV[14];
	goto T106;
T106:;
	if(!(((V66))==(VV[14]))){
	goto T111;}
	base[5]= (V53);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V65= vs_base[0];
	goto T103;
	goto T111;
T111:;
	V65= (V66);}
	goto T103;
T103:;
	if(!((V65)==(VV[15]))){
	goto T101;}
	{register object V68;
	V68= ((V57))->v.v_self[1];
	if(!(type_of(V68)==t_fixnum)){
	goto T118;}
	V68= ((V59))->v.v_self[fix((V68))];
	goto T116;
	goto T118;
T118:;
	V68= VV[14];
	goto T116;
T116:;
	if(!(((V68))==(VV[14]))){
	goto T121;}
	base[5]= (V53);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	V64= vs_base[0];
	goto T99;
	goto T121;
T121:;
	V64= (V68);
	goto T99;}
	goto T101;
T101:;
	{register object V70;
	V70= ((V57))->v.v_self[2];
	if(!(type_of(V70)==t_fixnum)){
	goto T128;}
	V70= ((V59))->v.v_self[fix((V70))];
	goto T126;
	goto T128;
T128:;
	V70= VV[14];
	goto T126;
T126:;
	if(!(((V70))==(VV[14]))){
	goto T131;}
	base[5]= (V53);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V64= vs_base[0];
	goto T99;
	goto T131;
T131:;
	V64= (V70);}
	goto T99;
T99:;
	{object V72;
	V72= ((V57))->v.v_self[2];
	if(!(type_of(V72)==t_fixnum)){
	goto T136;}
	base[5]= ((V59))->v.v_self[fix((V72))]= ((V64));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T136;
T136:;
	base[5]= (V64);
	base[6]= (V53);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk273)(Lclptr273);
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
	base[2]= VV[17];
	base[3]= V83;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V85= vs_base[0];
	if(((V85))==Cnil){
	goto T147;}
	V86= CMPcar((V85));
	goto T145;
	goto T147;
T147:;
	V86= VV[18];
	goto T145;
T145:;
	if(((V86))==(VV[18])){
	goto T150;}
	base[2]= VV[19];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	{object V87 = vs_base[0];
	VMR7(V87)}
	goto T150;
T150:;
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
	{register object V99;
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
	goto T165;}
	goto T163;
	goto T165;
T165:;
	if(!(((V101)->str.str_def)==(VV[22]))){
	goto T163;}
	V105= STREF(object,(V101),4);
	goto T161;
	goto T163;
T163:;{object V107;
	V107= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V108= vs_base[0];
	if(!((V107)==(CMPcar(V108)))){
	goto T168;}}
	V105= CMPcar(((V101))->cc.cc_turbo[12]);
	goto T161;
	goto T168;
T168:;
	V105= Cnil;
	goto T161;
T161:;
	{object V109;
	{register object V110;
	V110= ((V103))->v.v_self[1];
	if(!(type_of(V110)==t_fixnum)){
	goto T178;}
	V110= ((V105))->v.v_self[fix((V110))];
	goto T176;
	goto T178;
T178:;
	V110= VV[14];
	goto T176;
T176:;
	if(!(((V110))==(VV[14]))){
	goto T181;}
	base[3]= (V101);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk275)(Lclptr275);
	vs_top=sup;
	V109= vs_base[0];
	goto T173;
	goto T181;
T181:;
	V109= (V110);}
	goto T173;
T173:;
	if(((V109))==Cnil){
	goto T185;}
	base[3]= (V109);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T185;
T185:;
	{object V112;
	{register object V113;
	V113= ((V103))->v.v_self[2];
	if(!(type_of(V113)==t_fixnum)){
	goto T192;}
	V113= ((V105))->v.v_self[fix((V113))];
	goto T190;
	goto T192;
T192:;
	V113= VV[14];
	goto T190;
T190:;
	if(!(((V113))==(VV[14]))){
	goto T195;}
	base[3]= (V101);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	V112= vs_base[0];
	goto T187;
	goto T195;
T195:;
	V112= (V113);}
	goto T187;
T187:;
	if(((V112))!=Cnil){
	goto T198;}
	base[3]= VV[21];
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;
	goto T198;
T198:;
	{object V115;
	V115= (*(LnkLI277))((V112));
	{object V116;
	V116= ((V103))->v.v_self[1];
	if(!(type_of(V116)==t_fixnum)){
	goto T206;}
	base[3]= ((V105))->v.v_self[fix((V116))]= ((V115));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T206;
T206:;
	base[3]= (V115);
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk278)(Lclptr278);
	return;}}}}}}
	}
}
/*	local entry for function (FAST-METHOD ACCESSOR-METHOD-CLASS (STANDARD-ACCESSOR-METHOD))	*/

static object LI10(V121,V122,V123)

register object V121;object V122;register object V123;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V125;
	object V126;
	V125= CMPcar((V121));
	V126= CMPcdr((V121));
	{object V127;
	if(type_of(V123)==t_structure){
	goto T220;}
	goto T218;
	goto T220;
T220:;
	if(!(((V123)->str.str_def)==(VV[24]))){
	goto T218;}
	V127= STREF(object,(V123),4);
	goto T216;
	goto T218;
T218:;{object V129;
	V129= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V123);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V130= vs_base[0];
	if(!((V129)==(CMPcar(V130)))){
	goto T223;}}
	V127= CMPcar(((V123))->cc.cc_turbo[12]);
	goto T216;
	goto T223;
T223:;
	V127= Cnil;
	goto T216;
T216:;
	{register object V132;
	V132= ((V125))->v.v_self[1];
	if(!(type_of(V132)==t_fixnum)){
	goto T233;}
	V132= ((V127))->v.v_self[fix((V132))];
	goto T231;
	goto T233;
T233:;
	V132= VV[14];
	goto T231;
T231:;
	if(!(((V132))==(VV[14]))){
	goto T236;}
	base[0]= (V123);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk279)(Lclptr279);
	vs_top=sup;
	V131= vs_base[0];
	goto T228;
	goto T236;
T236:;
	V131= (V132);}
	goto T228;
T228:;
	{object V134 = CMPcar(V131);
	VMR10(V134)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ACCESSOR-METHOD-CLASS (STANDARD-WRITER-METHOD))	*/

static object LI11(V138,V139,V140)

register object V138;object V139;register object V140;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V142;
	object V143;
	V142= CMPcar((V138));
	V143= CMPcdr((V138));
	{object V144;
	if(type_of(V140)==t_structure){
	goto T249;}
	goto T247;
	goto T249;
T249:;
	if(!(((V140)->str.str_def)==(VV[26]))){
	goto T247;}
	V144= STREF(object,(V140),4);
	goto T245;
	goto T247;
T247:;{object V146;
	V146= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V140);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V147= vs_base[0];
	if(!((V146)==(CMPcar(V147)))){
	goto T252;}}
	V144= CMPcar(((V140))->cc.cc_turbo[12]);
	goto T245;
	goto T252;
T252:;
	V144= Cnil;
	goto T245;
T245:;
	{register object V149;
	V149= ((V142))->v.v_self[1];
	if(!(type_of(V149)==t_fixnum)){
	goto T262;}
	V149= ((V144))->v.v_self[fix((V149))];
	goto T260;
	goto T262;
T262:;
	V149= VV[14];
	goto T260;
T260:;
	if(!(((V149))==(VV[14]))){
	goto T265;}
	base[0]= (V140);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk279)(Lclptr279);
	vs_top=sup;
	V148= vs_base[0];
	goto T257;
	goto T265;
T265:;
	V148= (V149);}
	goto T257;
T257:;
	{object V151 = CMPcadr(V148);
	VMR11(V151)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (STANDARD-METHOD T))	*/

static object LI14(V156,V157,V158,V159)

register object V156;object V157;object V158;object V159;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V159);
	base[1]= (V158);
	base[2]= (V157);
	{object V161;
	object V162;
	V161= CMPcar((V156));
	V162= CMPcdr((V156));
	{object V163;
	if(type_of(base[1])==t_structure){
	goto T278;}
	goto T276;
	goto T278;
T278:;
	if(!(((base[1])->str.str_def)==(VV[53]))){
	goto T276;}
	V163= STREF(object,base[1],4);
	goto T274;
	goto T276;
T276:;{object V165;
	V165= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V166= vs_base[0];
	if(!((V165)==(CMPcar(V166)))){
	goto T281;}}
	V163= CMPcar((base[1])->cc.cc_turbo[12]);
	goto T274;
	goto T281;
T281:;
	V163= Cnil;
	goto T274;
T274:;
	base[3]= base[0];
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	{object V167;
	V167= ((V161))->v.v_self[1];
	if(!(type_of(V167)==t_fixnum)){
	goto T295;}
	if(!((((((V163))->v.v_self[fix((V167))])==(VV[14])?Ct:Cnil))==Cnil)){
	goto T291;}
	goto T292;
	goto T295;
T295:;
	base[3]= base[1];
	base[4]= VV[28];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk280)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T291;}}
	goto T292;
T292:;
	{object V169;
	object V170;
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V169= vs_base[0];
	base[3]= (*(LnkLI191))(base[1]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V171= vs_base[0];
	V170= (VFUN_NARGS=1,(*(LnkLI267))(V171));
	base[3]= base[0];
	base[4]= VV[29];
	base[5]= (V170);
	if((V169)==Cnil){
	base[6]= Cnil;
	goto T307;}
	base[7]= (V169);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[6]= vs_base[0];
	goto T307;
T307:;
	base[8]= base[1];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (*(LnkLI284))(base[1]);
	vs_top=(vs_base=base+3)+6;
	Lformat();
	vs_top=sup;
	goto T289;}
	goto T291;
T291:;
	vs_base=vs_top;
	L15(base);
	vs_top=sup;
	goto T289;
T289:;
	base[3]= base[0];
	base[4]= VV[3];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI265))(base[1],base[0]));
	base[3]= base[0];
	base[4]= VV[4];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	{object V172 = vs_base[0];
	VMR12(V172)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (STANDARD-ACCESSOR-METHOD T))	*/

static object LI18(V177,V178,V179,V180)

register object V177;object V178;object V179;object V180;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= (V180);
	base[1]= (V179);
	base[2]= (V178);
	{object V182;
	object V183;
	V182= CMPcar((V177));
	V183= CMPcdr((V177));
	{object V184;
	if(type_of(base[1])==t_structure){
	goto T328;}
	goto T326;
	goto T328;
T328:;
	if(!(((base[1])->str.str_def)==(VV[71]))){
	goto T326;}
	V184= STREF(object,base[1],4);
	goto T324;
	goto T326;
T326:;{object V186;
	V186= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= base[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V187= vs_base[0];
	if(!((V186)==(CMPcar(V187)))){
	goto T331;}}
	V184= CMPcar((base[1])->cc.cc_turbo[12]);
	goto T324;
	goto T331;
T331:;
	V184= Cnil;
	goto T324;
T324:;
	base[3]= base[0];
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	{object V188;
	V188= ((V182))->v.v_self[1];
	if(!(type_of(V188)==t_fixnum)){
	goto T345;}
	if(!((((((V184))->v.v_self[fix((V188))])==(VV[14])?Ct:Cnil))==Cnil)){
	goto T341;}
	goto T342;
	goto T345;
T345:;
	base[3]= base[1];
	base[4]= VV[28];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk280)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T341;}}
	goto T342;
T342:;
	{object V190;
	object V191;
	base[3]= base[1];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V190= vs_base[0];
	base[3]= (*(LnkLI191))(base[1]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V192= vs_base[0];
	V191= (VFUN_NARGS=1,(*(LnkLI267))(V192));
	base[3]= base[0];
	base[4]= VV[55];
	base[5]= (V191);
	if((V190)==Cnil){
	base[6]= Cnil;
	goto T357;}
	base[7]= (V190);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[6]= vs_base[0];
	goto T357;
T357:;
	base[8]= base[1];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (*(LnkLI284))(base[1]);
	vs_top=(vs_base=base+3)+6;
	Lformat();
	vs_top=sup;
	goto T339;}
	goto T341;
T341:;
	vs_base=vs_top;
	L19(base);
	vs_top=sup;
	goto T339;
T339:;
	base[3]= base[0];
	base[4]= VV[3];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI265))(base[1],base[0]));
	base[3]= base[0];
	base[4]= VV[4];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	{object V193 = vs_base[0];
	VMR13(V193)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE (STANDARD-METHOD))	*/

static object LI20(V198,V199,V200,V201)

object V198;object V199;object V200;object V201;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= VV[72];
	base[1]= (V200);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V204 = vs_base[0];
	VMR14(V204)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-DOCUMENTATION-P (STANDARD-METHOD T))	*/

static object LI21(V209,V210,V211,V212)

object V209;object V210;object V211;register object V212;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(((V212))==Cnil){
	goto T374;}
	if(!(type_of((V212))==t_string)){
	goto T375;}
	goto T374;
T374:;
	{object V214 = Ct;
	VMR15(V214)}
	goto T375;
T375:;
	{object V215 = VV[73];
	VMR15(V215)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-LAMBDA-LIST-P (STANDARD-METHOD T))	*/

static object LI22(V220,V221,V222,V223)

object V220;object V221;object V222;object V223;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V225 = Ct;
	VMR16(V225)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-METHOD-FUNCTION-P (STANDARD-METHOD T))	*/

static object LI23(V230,V231,V232,V233)

object V230;object V231;object V232;object V233;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]= (V233);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T384;}
	{object V235 = Ct;
	VMR17(V235)}
	goto T384;
T384:;
	{object V236 = VV[74];
	VMR17(V236)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD LEGAL-QUALIFIERS-P (STANDARD-METHOD T))	*/

static void L24()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM18; VC18
	vs_check;
	{VOL object V237;
	VOL object V238;
	VOL object V239;
	VOL object V240;
	check_arg(4);
	V237=(base[0]);
	V238=(base[1]);
	V239=(base[2]);
	V240=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]=alloc_frame_id();
	frs_push(FRS_CATCH,base[4]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{register object V242;
	register object V243;
	V242= Cnil;
	V243= (V240);
	goto T391;
T391:;
	if(((V243))!=Cnil){
	goto T393;}
	goto T389;
	goto T393;
T393:;
	if(!(type_of((V243))==t_cons)){
	goto T397;}
	{object V244;
	V244= CMPcar((V243));
	V243= CMPcdr((V243));
	V242= (V244);}
	{register object V245;
	base[5]= (V239);
	base[6]= (V242);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V245= vs_base[0];
	if(((V245))==(Ct)){
	goto T392;}
	base[5]= Cnil;
	base[6]= VV[75];
	base[7]= (V242);
	base[8]= (V245);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	frs_pop();
	return;}
	goto T397;
T397:;
	vs_base=vs_top;
	L26(base);
	vs_top=sup;
	goto T392;
T392:;
	goto T391;}
	goto T389;
T389:;
	frs_pop();
	base[5]= Ct;
	vs_top=(vs_base=base+5)+1;
	return;
	}
	}
}
/*	local entry for function (FAST-METHOD LEGAL-QUALIFIER-P (STANDARD-METHOD T))	*/

static object LI27(V250,V251,V252,V253)

object V250;object V251;object V252;register object V253;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(((V253))==Cnil){
	goto T417;}
	if(!(type_of((V253))!=t_cons)){
	goto T417;}
	{object V255 = Ct;
	VMR19(V255)}
	goto T417;
T417:;
	{object V256 = VV[77];
	VMR19(V256)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD LEGAL-SLOT-NAME-P (STANDARD-METHOD T))	*/

static object LI28(V261,V262,V263,V264)

object V261;object V262;object V263;register object V264;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	if(type_of((V264))==t_symbol){
	goto T424;}
	{object V266 = VV[78];
	VMR20(V266)}
	goto T424;
T424:;
	if(!((type_of((V264))==t_symbol&&((V264))->s.s_hpack==keyword_package))){
	goto T427;}
	{object V267 = VV[79];
	VMR20(V267)}
	goto T427;
T427:;
	{register object x= (V264),V268= VV[80];
	while(V268!=Cnil)
	if(x==(V268->c.c_car)){
	goto T431;
	}else V268=V268->c.c_cdr;
	goto T430;}
	goto T431;
T431:;
	{object V269 = VV[81];
	VMR20(V269)}
	goto T430;
T430:;
	base[0]= (V264);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T433;}
	{object V270 = VV[82];
	VMR20(V270)}
	goto T433;
T433:;
	{object V271 = Ct;
	VMR20(V271)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD LEGAL-SPECIALIZERS-P (STANDARD-METHOD T))	*/

static void L29()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM21; VC21
	vs_check;
	{VOL object V272;
	VOL object V273;
	VOL object V274;
	VOL object V275;
	check_arg(4);
	V272=(base[0]);
	V273=(base[1]);
	V274=(base[2]);
	V275=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]=alloc_frame_id();
	frs_push(FRS_CATCH,base[4]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{register object V277;
	register object V278;
	V277= Cnil;
	V278= (V275);
	goto T440;
T440:;
	if(((V278))!=Cnil){
	goto T442;}
	goto T438;
	goto T442;
T442:;
	if(!(type_of((V278))==t_cons)){
	goto T446;}
	{object V279;
	V279= CMPcar((V278));
	V278= CMPcdr((V278));
	V277= (V279);}
	{register object V280;
	base[5]= (V274);
	base[6]= (V277);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V280= vs_base[0];
	if(((V280))==(Ct)){
	goto T441;}
	base[5]= Cnil;
	base[6]= VV[83];
	base[7]= (V277);
	base[8]= (V280);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	frs_pop();
	return;}
	goto T446;
T446:;
	vs_base=vs_top;
	L31(base);
	vs_top=sup;
	goto T441;
T441:;
	goto T440;}
	goto T438;
T438:;
	frs_pop();
	base[5]= Ct;
	vs_top=(vs_base=base+5)+1;
	return;
	}
	}
}
/*	local entry for function (FAST-METHOD LEGAL-SPECIALIZER-P (STANDARD-METHOD T))	*/

static object LI32(V285,V286,V287,V288)

object V285;object V286;object V287;register object V288;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	if(((VV[85]->s.s_dbind))==Cnil){
	goto T469;}
	base[0]= (V288);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T466;}
	goto T467;
	goto T469;
T469:;{object V290;
	base[0]= (V288);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	V290= vs_base[0];
	if(V290==Cnil)goto T472;
	if((V290)==Cnil){
	goto T466;}
	goto T467;
	goto T472;
T472:;}
	base[0]= (V288);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T466;}
	goto T467;
T467:;
	{object V291 = Ct;
	VMR22(V291)}
	goto T466;
T466:;
	{object V292 = VV[86];
	VMR22(V292)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-METHOD T))	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V293;
	object V294;
	object V295;
	object V296;
	check_arg(5);
	V293=(base[0]);
	V294=(base[1]);
	V295=(base[3]);
	V296=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V297;
	register object V298;
	register object V299;
	register object V300;
	register object V301;
	object V302;
	register object V303;
	V297= (V296);
	base[11]= VV[87];
	base[12]= (V297);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V304= vs_base[0];
	V298= CMPcar(V304);
	base[11]= VV[88];
	base[12]= (V297);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V305= vs_base[0];
	V299= CMPcar(V305);
	base[11]= VV[89];
	base[12]= (V297);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V306= vs_base[0];
	V300= CMPcar(V306);
	base[11]= VV[90];
	base[12]= (V297);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V307= vs_base[0];
	V301= CMPcar(V307);
	base[11]= VV[91];
	base[12]= (V297);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V308= vs_base[0];
	V302= CMPcar(V308);
	base[11]= VV[92];
	base[12]= (V297);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V309= vs_base[0];
	V303= CMPcar(V309);
	{object V310;
	object V311;
	object V312;
	object V313;
	object V314;
	base[11]= base[2];
	base[12]= (V298);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V310= vs_base[0];
	base[11]= base[2];
	base[12]= (V299);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	V311= vs_base[0];
	base[11]= base[2];
	base[12]= (V300);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V312= vs_base[0];
	base[11]= base[2];
	if((V301)!=Cnil){
	base[12]= (V301);
	goto T514;}
	base[12]= (V302);
	goto T514;
T514:;
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	V313= vs_base[0];
	base[11]= base[2];
	base[12]= (V303);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk295)(Lclptr295);
	vs_top=sup;
	V314= vs_base[0];
	if(((V310))==(Ct)){
	goto T518;}
	base[11]= VV[87];
	base[12]= (V298);
	base[13]= (V310);
	vs_top=(vs_base=base+11)+3;
	L35(base);
	vs_top=sup;
	goto T518;
T518:;
	if(((V311))==(Ct)){
	goto T524;}
	base[11]= VV[88];
	base[12]= (V299);
	base[13]= (V311);
	vs_top=(vs_base=base+11)+3;
	L35(base);
	vs_top=sup;
	goto T524;
T524:;
	if(((V312))==(Ct)){
	goto T530;}
	base[11]= VV[89];
	base[12]= (V300);
	base[13]= (V312);
	vs_top=(vs_base=base+11)+3;
	L35(base);
	vs_top=sup;
	goto T530;
T530:;
	if(((V313))==(Ct)){
	goto T536;}
	base[11]= VV[90];
	base[12]= (V301);
	base[13]= (V313);
	vs_top=(vs_base=base+11)+3;
	L35(base);
	vs_top=sup;
	goto T536;
T536:;
	if(((V314))==(Ct)){
	goto T543;}
	base[11]= VV[92];
	base[12]= (V303);
	base[13]= (V314);
	vs_top=(vs_base=base+11)+3;
	L35(base);
	return;
	goto T543;
T543:;
	base[11]= Cnil;
	vs_top=(vs_base=base+11)+1;
	return;}}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-ACCESSOR-METHOD T))	*/

static object LI36(V320,V321,V322,V323,V324)

object V320;object V321;object V322;object V323;object V324;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V326;
	object V327;
	base[2]= VV[94];
	base[3]= V324;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V328= vs_base[0];
	V326= CMPcar(V328);
	base[2]= VV[95];
	base[3]= V324;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V329= vs_base[0];
	V327= CMPcar(V329);
	if(((V327))!=Cnil){
	goto T559;}
	{object V330;
	base[2]= (V322);
	base[3]= (V326);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V330= vs_base[0];
	if(((V330))==(Ct)){
	goto T565;}
	base[2]= VV[96];
	base[3]= (V330);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	{object V331 = vs_base[0];
	VMR24(V331)}
	goto T565;
T565:;
	{object V332 = Cnil;
	VMR24(V332)}}
	goto T559;
T559:;
	{object V333 = Cnil;
	VMR24(V333)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STANDARD-METHOD T))	*/

static object LI37(V339,V340,V341,V342,V343)

object V339;object V340;register object V341;object V342;object V343;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V344;
	object V346;
	object V347;
	object V348;
	V344= (V343);
	base[3]= VV[87];
	base[4]= (V344);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V349= vs_base[0];
	V346= CMPcar(V349);
	base[3]= VV[97];
	base[4]= (V344);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V350= vs_base[0];
	V347= CMPcar(V350);
	base[3]= VV[98];
	base[4]= (V344);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V351= vs_base[0];
	V348= CMPcar(V351);
	(void)((VFUN_NARGS=3,(*(LnkLI297))(V344,Cnil,(V341))));
	base[3]= ({object _tmp=get(VV[298],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[298])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[298])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[4]= V346;
	base[5]= V341;
	base[6]= VV[99];
	vs_top=(vs_base=base+4)+3;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V355 = vs_base[0];
	VMR25(V355)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (STANDARD-ACCESSOR-METHOD T))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{register object V356;
	object V357;
	register object V358;
	object V359;
	object V360;
	check_arg(5);
	V356=(base[0]);
	V357=(base[1]);
	V358=(base[2]);
	V359=(base[3]);
	V360=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V362;
	object V363;
	V362= CMPcar((V356));
	V363= CMPcdr((V356));
	{register object V364;
	if(type_of(V358)==t_structure){
	goto T599;}
	goto T597;
	goto T599;
T599:;
	if(!(((V358)->str.str_def)==(VV[102]))){
	goto T597;}
	V364= STREF(object,(V358),4);
	goto T595;
	goto T597;
T597:;{object V366;
	V366= (VV[13]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V358);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V367= vs_base[0];
	if(!((V366)==(CMPcar(V367)))){
	goto T602;}}
	V364= CMPcar(((V358))->cc.cc_turbo[12]);
	goto T595;
	goto T602;
T602:;
	V364= Cnil;
	goto T595;
T595:;
	{register object V369;
	V369= ((V362))->v.v_self[1];
	if(!(type_of(V369)==t_fixnum)){
	goto T615;}
	V369= ((V364))->v.v_self[fix((V369))];
	goto T613;
	goto T615;
T615:;
	V369= VV[14];
	goto T613;
T613:;
	if(!(((V369))==(VV[14]))){
	goto T618;}
	base[5]= (V358);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T608;}
	goto T610;
	goto T618;
T618:;
	if(((V369))!=Cnil){
	goto T608;}}
	goto T610;
T610:;
	{object V371;
	base[5]= (V358);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V371= vs_base[0];
	base[5]= (V371);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T608;}
	{object V372;
	{register object V373;
	V373= ((V362))->v.v_self[2];
	if(!(type_of(V373)==t_fixnum)){
	goto T632;}
	V373= ((V364))->v.v_self[fix((V373))];
	goto T630;
	goto T632;
T632:;
	V373= VV[14];
	goto T630;
T630:;
	if(!(((V373))==(VV[14]))){
	goto T635;}
	base[6]= (V358);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	base[5]= vs_base[0];
	goto T627;
	goto T635;
T635:;
	base[5]= (V373);}
	goto T627;
T627:;
	base[7]= (V371);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= VV[101];
	base[8]= (VV[304]->s.s_gfdef);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V372= vs_base[0];
	{object V375;
	V375= ((V362))->v.v_self[1];
	if(!(type_of(V375)==t_fixnum)){
	goto T644;}
	(void)(((V364))->v.v_self[fix((V375))]= ((V372)));
	goto T608;
	goto T644;
T644:;
	base[5]= (V372);
	base[6]= (V358);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;}}}
	goto T608;
T608:;
	{register object V377;
	V377= ((V362))->v.v_self[1];
	if(!(type_of(V377)==t_fixnum)){
	goto T658;}
	V377= ((V364))->v.v_self[fix((V377))];
	goto T656;
	goto T658;
T658:;
	V377= VV[14];
	goto T656;
T656:;
	if(!(((V377))==(VV[14]))){
	goto T661;}
	base[5]= (V358);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T652;}
	goto T653;
	goto T661;
T661:;
	if(((V377))==Cnil){
	goto T652;}}
	goto T653;
T653:;
	{register object V380;
	V380= ((V362))->v.v_self[2];
	if(!(type_of(V380)==t_fixnum)){
	goto T669;}
	V380= ((V364))->v.v_self[fix((V380))];
	goto T667;
	goto T669;
T669:;
	V380= VV[14];
	goto T667;
T667:;
	if(!(((V380))==(VV[14]))){
	goto T672;}
	base[5]= (V358);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V379= vs_base[0];
	goto T664;
	goto T672;
T672:;
	V379= (V380);}
	goto T664;
T664:;
	if(!((V379)==Cnil)){
	goto T649;}
	goto T650;
	goto T652;
T652:;
	goto T649;
	goto T650;
T650:;
	{object V382;
	{register object V383;
	V383= ((V362))->v.v_self[1];
	if(!(type_of(V383)==t_fixnum)){
	goto T681;}
	V383= ((V364))->v.v_self[fix((V383))];
	goto T679;
	goto T681;
T681:;
	V383= VV[14];
	goto T679;
T679:;
	if(!(((V383))==(VV[14]))){
	goto T684;}
	base[6]= (V358);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[5]= vs_base[0];
	goto T676;
	goto T684;
T684:;
	base[5]= (V383);}
	goto T676;
T676:;
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	V382= vs_base[0];
	{object V385;
	V385= ((V362))->v.v_self[2];
	if(!(type_of(V385)==t_fixnum)){
	goto T689;}
	base[5]= ((V364))->v.v_self[fix((V385))]= ((V382));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T689;
T689:;
	base[5]= (V382);
	base[6]= (V358);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk307)(Lclptr307);
	return;}}
	goto T649;
T649:;
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;}}
	}
}
/*	local entry for function (FAST-METHOD METHOD-QUALIFIERS (STANDARD-METHOD))	*/

static object LI39(V390,V391,V392)

object V390;object V391;object V392;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V394 = (*(LnkLI298))((V392),VV[99]);
	VMR27(V394)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD PRINT-OBJECT (GENERIC-FUNCTION T))	*/

static object LI40(V399,V400,V401,V402)

register object V399;object V400;register object V401;object V402;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V404;
	object V405;
	V404= CMPcar((V399));
	V405= CMPcdr((V399));
	{object V406;
	if(type_of(V401)==t_structure){
	goto T705;}
	goto T703;
	goto T705;
T705:;
	if(!(((V401)->str.str_def)==(VV[106]))){
	goto T703;}
	V406= STREF(object,(V401),4);
	goto T701;
	goto T703;
T703:;{object V408;
	V408= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V401);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V409= vs_base[0];
	if(!((V408)==(CMPcar(V409)))){
	goto T708;}}
	V406= CMPcar(((V401))->cc.cc_turbo[12]);
	goto T701;
	goto T708;
T708:;
	V406= Cnil;
	goto T701;
T701:;
	{object V411;
	V411= ((V404))->v.v_self[1];
	if(!(type_of(V411)==t_fixnum)){
	goto T719;}
	if(!((((((V406))->v.v_self[fix((V411))])==(VV[14])?Ct:Cnil))==Cnil)){
	goto T715;}
	goto T716;
	goto T719;
T719:;
	base[0]= (V401);
	base[1]= VV[104];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk280)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T715;}}
	goto T716;
T716:;
	base[0]= (V401);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V413= vs_base[0];
	V414 = CMPmake_fixnum((long)length(V413));
	V410= make_cons(V414,Cnil);
	goto T713;
	goto T715;
T715:;
	V410= VV[105];
	goto T713;
T713:;
	{object V415 = (VFUN_NARGS=3,(*(LnkLI266))((V401),(V402),V410));
	VMR28(V415)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (STANDARD-GENERIC-FUNCTION T))	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{register object V416;
	object V417;
	object V418;
	object V419;
	check_arg(5);
	V416=(base[0]);
	V417=(base[1]);
	V418=(base[3]);
	V419=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V420;
	object V421;
	object V423;
	object V424;
	object V426;
	object V427;
	object V428;
	object V429;
	object V430;
	register object V432;
	object V433;
	object V435;
	V420= (V419);
	base[16]= VV[34];
	base[17]= (V420);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V421= vs_base[0];
	if(((V421))==Cnil){
	goto T733;}
	V423= CMPcar((V421));
	goto T731;
	goto T733;
T733:;
	V423= Cnil;
	goto T731;
T731:;
	base[16]= VV[88];
	base[17]= (V420);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V424= vs_base[0];
	if(((V424))==Cnil){
	goto T740;}
	V426= CMPcar((V424));
	goto T738;
	goto T740;
T740:;
	V426= Cnil;
	goto T738;
T738:;
	base[16]= VV[107];
	base[17]= (V420);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V436= vs_base[0];
	V427= CMPcar(V436);
	base[16]= VV[108];
	base[17]= (V420);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V437= vs_base[0];
	V428= CMPcar(V437);
	base[16]= VV[92];
	base[17]= (V420);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V438= vs_base[0];
	V429= CMPcar(V438);
	base[16]= VV[109];
	base[17]= (V420);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V430= vs_base[0];
	if(((V430))==Cnil){
	goto T759;}
	V432= CMPcar((V430));
	goto T757;
	goto T759;
T759:;
	V432= Cnil;
	goto T757;
T757:;
	base[16]= VV[110];
	base[17]= (V420);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V433= vs_base[0];
	if(((V433))==Cnil){
	goto T766;}
	V435= CMPcar((V433));
	goto T764;
	goto T766;
T766:;
	V435= Cnil;
	goto T764;
T764:;
	{register object V439;
	object V440;
	V439= CMPcar((V416));
	V440= CMPcdr((V416));
	{register object V441;
	if(type_of(base[2])==t_structure){
	goto T776;}
	goto T774;
	goto T776;
T776:;
	if(!(((base[2])->str.str_def)==(VV[122]))){
	goto T774;}
	V441= STREF(object,base[2],4);
	goto T772;
	goto T774;
T774:;{object V443;
	V443= (VV[13]->s.s_dbind);
	base[16]= small_fixnum(14);
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V444= vs_base[0];
	if(!((V443)==(CMPcar(V444)))){
	goto T779;}}
	V441= CMPcar((base[2])->cc.cc_turbo[12]);
	goto T772;
	goto T779;
T779:;
	V441= Cnil;
	goto T772;
T772:;
	if((V421)==Cnil){
	goto T784;}
	base[16]= base[2];
	base[17]= (V423);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk309)();
	vs_top=sup;
	goto T784;
T784:;
	if((V430)==Cnil){
	goto T791;}
	if(!(type_of((V432))==t_symbol)){
	goto T793;}
	V432= (VFUN_NARGS=1,(*(LnkLI310))((V432)));
	goto T793;
T793:;
	base[16]= (V432);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T798;}
	base[17]= (V432);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	base[16]= vs_base[0];
	base[17]= (VV[112]->s.s_dbind);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T797;}
	goto T798;
T798:;
	base[16]= VV[109];
	base[17]= (V432);
	base[18]= VV[113];
	vs_top=(vs_base=base+16)+3;
	L43(base);
	vs_top=sup;
	goto T797;
T797:;
	{object V446;
	V446= ((V439))->v.v_self[2];
	if(!(type_of(V446)==t_fixnum)){
	goto T811;}
	(void)(((V441))->v.v_self[fix((V446))]= (V432));
	goto T789;
	goto T811;
T811:;
	base[16]= V432;
	base[17]= base[2];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	goto T789;}
	goto T791;
T791:;
	{object V448;
	{object V449;
	V449= ((V439))->v.v_self[2];
	if(!(type_of(V449)==t_fixnum)){
	goto T818;}
	V448= ((((((V441))->v.v_self[fix((V449))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T815;
	goto T818;
T818:;
	base[16]= base[2];
	base[17]= VV[114];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk280)();
	vs_top=sup;
	V448= vs_base[0];}
	goto T815;
T815:;
	if(((V448))==Cnil){
	goto T823;}
	goto T789;
	goto T823;
T823:;
	base[16]= VV[109];
	base[17]= VV[115];
	base[18]= VV[116];
	vs_top=(vs_base=base+16)+3;
	L43(base);
	vs_top=sup;}
	goto T789;
T789:;
	if((V433)==Cnil){
	goto T829;}
	base[16]= (V435);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T832;}
	base[16]= VV[110];
	base[17]= (V435);
	base[18]= VV[117];
	vs_top=(vs_base=base+16)+3;
	L43(base);
	return;
	goto T832;
T832:;
	base[16]= Cnil;
	vs_top=(vs_base=base+16)+1;
	return;
	goto T829;
T829:;
	{object V451;
	{object V452;
	V452= ((V439))->v.v_self[1];
	if(!(type_of(V452)==t_fixnum)){
	goto T841;}
	V451= ((((((V441))->v.v_self[fix((V452))])==(VV[14])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T838;
	goto T841;
T841:;
	base[16]= base[2];
	base[17]= VV[118];
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk280)();
	vs_top=sup;
	V451= vs_base[0];}
	goto T838;
T838:;
	if(((V451))==Cnil){
	goto T846;}
	base[16]= (V451);
	vs_top=(vs_base=base+16)+1;
	return;
	goto T846;
T846:;
	base[16]= VV[110];
	base[17]= VV[119];
	base[18]= VV[120];
	vs_top=(vs_base=base+16)+3;
	L43(base);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD REMOVE-NAMED-METHOD (T T))	*/

static object LI44(V459,V460,V461,V462,V463)

object V459;object V460;register object V461;register object V462;object V463;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V464;
	object V465;
	V464= (V463);
	if(((V464))==Cnil){
	goto T856;}
	{object V466;
	V466= CMPcar((V464));
	V464= CMPcdr((V464));
	V465= (V466);
	goto T854;}
	goto T856;
T856:;
	V465= Cnil;
	goto T854;
T854:;
	{register object V467;
	object V468;
	V467= Cnil;
	V468= Cnil;
	base[1]= (V461);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T861;}
	base[2]= (V461);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V467= vs_base[0];
	base[1]= (V467);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T862;}
	goto T861;
T861:;
	base[1]= VV[123];
	base[2]= (V461);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V469 = vs_base[0];
	VMR30(V469)}
	goto T862;
T862:;
	V470= (*(LnkLI317))((V462));
	V468= (VFUN_NARGS=4,(*(LnkLI316))((V467),(V465),/* INLINE-ARGS */V470,Cnil));
	if(((V468))!=Cnil){
	goto T873;}
	base[1]= VV[124];
	base[2]= (V467);
	base[3]= (V462);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	{object V471 = vs_base[0];
	VMR30(V471)}
	goto T873;
T873:;
	base[1]= (V467);
	base[2]= (V468);
	{object V472 = simple_symlispcall(VV[318],base+1,2);
	VMR30(V472)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REAL-ADD-NAMED-METHOD	*/

static object LI45(object V476,object V475,object V474,object V473,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V477;
	object V478;
	object V479;
	object V480;
	object V481;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V477= V476;
	V478= V475;
	V479= V474;
	V480= V473;
	narg= narg - 4;
	V482 = list_vector_new(narg,first,ap);
	V481= V482;
	{object V483;
	object V484;
	object V485;
	object V486;
	base[4]= (V477);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk319)();
	vs_top=sup;
	V483= vs_base[0];
	V484= (*(LnkLI317))((V479));
	base[4]= (V477);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk320)();
	vs_top=sup;
	V485= vs_base[0];
	base[4]=VV[321]->s.s_gfdef;
	base[5]= (*(LnkLI191))((V485));
	base[6]= VV[87];
	base[7]= (V478);
	base[8]= VV[89];
	base[9]= (V484);
	base[10]= VV[88];
	base[11]= (V480);
	{object V487;
	V487= (V481);
	 vs_top=base+12;
	 while(V487!=Cnil)
	 {vs_push((V487)->c.c_car);V487=(V487)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	V486= vs_base[0];
	base[4]= (V483);
	base[5]= (V486);
	{object V488 = simple_symlispcall(VV[322],base+4,2);
	VMR31(V488)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-SPECIALIZABLE	*/

static object LI46(object V489,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{register object V490;
	register object V491;
	object V492;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V490= V489;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI46key,first,ap);
	if(Vcs[1]==0){
	V491= Cnil;
	V492= Cnil;
	}else{
	V491=(Vcs[1]);
	V492= Ct;}
	{object V493;
	V493= (((((V492))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V493))==Cnil){
	goto T901;}
	goto T898;
	goto T901;
T901:;
	{object V494;
	base[0]= (V490);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	V495= vs_base[0];
	V494= ((V495)==Cnil?Ct:Cnil);
	if(((V494))==Cnil){
	goto T907;}
	goto T898;
	goto T907;
T907:;
	base[0]= VV[125];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T910;}
	base[0]= (V490);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	V491= vs_base[0];
	goto T898;
	goto T910;
T910:;
	base[0]= VV[126];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;}}
	goto T898;
T898:;
	{register object V496;
	register object V497;
	base[1]= (V490);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T917;}
	base[0]= Cnil;
	goto T916;
	goto T917;
T917:;
	base[1]= (V490);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T916;
T916:;
	base[1]= VV[127];
	base[2]= VV[34];
	base[3]= (V490);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	V496= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	V497= small_fixnum(0);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T926;}
	{object V498 = (base[0]->c.c_car);
	VMR32(V498)}
	goto T926;
T926:;
	{register object V499;
	register object V500;
	V499= (V491);
	V500= CMPcar((V499));
	goto T933;
T933:;
	if(!(((V499))==Cnil)){
	goto T934;}
	goto T929;
	goto T934;
T934:;
	{register object x= (V500),V501= VV[128];
	while(V501!=Cnil)
	if(x==(V501->c.c_car)){
	goto T941;
	}else V501=V501->c.c_cdr;
	goto T940;}
	goto T941;
T941:;
	goto T929;
	goto T940;
T940:;
	V497= number_plus((V497),small_fixnum(1));
	V499= CMPcdr((V499));
	V500= CMPcar((V499));
	goto T933;}
	goto T929;
T929:;
	V504= ({object _tmp=get(VV[324],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[324])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[324])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V505 = V504,
	(type_of(V505) == t_sfun ?(*((V505)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V505)==t_vfun) ?
	(*((V505)->sfn.sfn_self)):
	(fcall.fun=(V505),fcalln))(V496,V490)));
	base[1]= (V496);
	base[2]= (V490);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk309)();
	vs_top=sup;
	if(((V492))==Cnil){
	goto T953;}
	V508= ({object _tmp=get(VV[325],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[325])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[325])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V509 = V508,
	(type_of(V509) == t_sfun ?(*((V509)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V509)==t_vfun) ?
	(*((V509)->sfn.sfn_self)):
	(fcall.fun=(V509),fcalln))(V491,V496)));
	goto T953;
T953:;
	if(((base[0]->c.c_car))==Cnil){
	goto T957;}
	base[1]=(VV[326]->s.s_gfdef);
	base[2]= (V490);
	base[3]= Cnil;
	base[5]= (V497);
	base[6]= VV[129];
	base[7]= Ct;
	vs_top=(vs_base=base+5)+3;
	Lmake_list();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V491);
	V510= 
	make_cclosure_new(LC134,Cnil,base[0],Cdata);
	base[6]= list(2,VV[90],V510);
	(void)simple_lispcall(base+1,5);
	goto T957;
T957:;
	{object V511 = (V496);
	VMR32(V511)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REAL-GET-METHOD	*/

static object LI47(object V514,object V513,object V512,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V515;
	register object V516;
	register object V517;
	object V518;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V515= V514;
	V516= V513;
	V517= V512;
	narg = narg - 3;
	if (narg <= 0) goto T969;
	else {
	V518= first;}
	--narg; goto T970;
	goto T969;
T969:;
	V518= Ct;
	goto T970;
T970:;
	{object V519;
	{register object V520;
	register object V521;
	base[2]= (V515);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V520= vs_base[0];
	V521= CMPcar((V520));
	goto T977;
T977:;
	if(!(((V520))==Cnil)){
	goto T978;}
	V519= Cnil;
	goto T972;
	goto T978;
T978:;
	base[2]= (V521);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V522= vs_base[0];
	if(!(equal((V516),V522))){
	goto T982;}
	base[2]= (VV[327]->s.s_gfdef);
	base[3]= (V517);
	base[5]= (V521);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk329)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T982;}
	V519= (V521);
	goto T972;
	goto T982;
T982:;
	V520= CMPcdr((V520));
	V521= CMPcar((V520));
	goto T977;}
	goto T972;
T972:;
	if(((V519))==Cnil){
	goto T999;}
	{object V523 = (V519);
	VMR33(V523)}
	goto T999;
T999:;
	if(((V518))!=Cnil){
	goto T1002;}
	{object V524 = Cnil;
	VMR33(V524)}
	goto T1002;
T1002:;
	base[0]= VV[130];
	base[1]= (V515);
	base[2]= (V516);
	base[3]= (V517);
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V525 = vs_base[0];
	VMR33(V525)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function (FAST-METHOD FIND-METHOD (STANDARD-GENERIC-FUNCTION T T))	*/

static object LI48(V532,V533,V534,V535,V536,V537)

object V532;object V533;object V534;object V535;object V536;object V537;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{register object V538;
	object V539;
	V538= (V537);
	if(((V538))==Cnil){
	goto T1013;}
	{object V540;
	V540= CMPcar((V538));
	V538= CMPcdr((V538));
	V539= (V540);
	goto T1011;}
	goto T1013;
T1013:;
	V539= Ct;
	goto T1011;
T1011:;
	V541= (*(LnkLI317))((V536));
	{object V542 = (VFUN_NARGS=4,(*(LnkLI330))((V534),(V535),/* INLINE-ARGS */V541,(V539)));
	VMR34(V542)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO (STANDARD-GENERIC-FUNCTION))	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
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
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V550= vs_base[0];
	V547= Cnil;
	V548= Cnil;
	V549= Cnil;
	{register object V551;
	register object V552;
	V551= (V550);
	V552= CMPcar((V551));
	goto T1026;
T1026:;
	if(!(((V551))==Cnil)){
	goto T1027;}
	goto T1022;
	goto T1027;
T1027:;
	base[4]= (V545);
	base[5]= (V552);
	base[6]= (V547);
	base[7]= (V548);
	base[8]= (V549);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk331)();
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
	goto T1026;}
	goto T1022;
T1022:;
	base[3]= (V547);
	base[4]= (V548);
	base[6]= (V549);
	base[7]= (VV[332]->s.s_gfdef);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+3)+3;
	return;}
	}
}
/*	function definition for COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO-INTERNAL	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
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
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	V559= vs_base[0];
	V560= CMPcar((V559));
	goto T1054;
T1054:;
	if(!(((V559))==Cnil)){
	goto T1055;}
	goto T1049;
	goto T1055;
T1055:;
	if(!(((V560))==(VV[131]))){
	goto T1061;}
	goto T1049;
	goto T1061;
T1061:;
	{register object x= (V560),V561= VV[132];
	while(V561!=Cnil)
	if(x==(V561->c.c_car)){
	goto T1065;
	}else V561=V561->c.c_cdr;
	goto T1064;}
	goto T1065;
T1065:;
	V556= Ct;
	goto T1049;
	goto T1064;
T1064:;
	{register object V562;
	{register object x= (V560),V563= VV[128];
	while(V563!=Cnil)
	if(x==(V563->c.c_car)){
	V562= V563;
	goto T1067;
	}else V563=V563->c.c_cdr;
	V562= Cnil;}
	goto T1067;
T1067:;
	if(((V562))==Cnil){
	goto T1069;}
	goto T1059;
	goto T1069;
T1069:;
	V558= (long)(V558)+(1);}
	goto T1059;
T1059:;
	V559= CMPcdr((V559));
	V560= CMPcar((V559));
	goto T1054;}
	goto T1049;
T1049:;
	{register object V564;
	object V565;
	register object V566;
	object V567;
	base[6]= (V554);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V564= vs_base[0];
	V565= Cnil;
	V566= small_fixnum(0);
	V567= Cnil;
	goto T1084;
T1084:;
	{object V568;
	if(!(((V564))==Cnil)){
	goto T1090;}
	goto T1077;
	goto T1090;
T1090:;
	V568= CMPcar((V564));
	V564= CMPcdr((V564));
	V565= (V568);}
	{object V569;
	V569= (V566);
	V566= number_plus((V566),small_fixnum(1));
	V567= (V569);}
	if(((V565))==((VV[133]->s.s_dbind))){
	goto T1085;}
	base[6]= V567;
	base[7]= (V557);
	vs_top=(vs_base=base+6)+2;
	Ladjoin();
	vs_top=sup;
	V557= vs_base[0];
	goto T1085;
T1085:;
	goto T1084;}
	goto T1077;
T1077:;
	if((V555)!=Cnil){
	V571= (V555);
	goto T1105;}
	V571= CMPmake_fixnum(V558);
	goto T1105;
T1105:;
	V572 = CMPmake_fixnum(V558);
	base[5]= (number_compare(V571,V572)<=0?(V571):V572);
	if((V556)!=Cnil){
	base[6]= (V556);
	goto T1106;}
	if((V555)==Cnil){
	base[6]= Cnil;
	goto T1106;}
	V573 = CMPmake_fixnum(V558);
	base[6]= (number_compare((V555),V573)!=0?Ct:Cnil);
	goto T1106;
T1106:;
	base[7]= (V557);
	vs_top=(vs_base=base+5)+3;
	return;}
	}
}
/*	local entry for function MAKE-DISCRIMINATING-FUNCTION-ARGLIST	*/

static object LI51(V576,V577)

object V576;object V577;
{	 VMB37 VMS37 VMV37
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
	goto T1115;
T1115:;
	{register object V584;
	if(!(number_compare((V581),V576)<0)){
	goto T1121;}
	V584= (V581);
	goto T1119;
	goto T1121;
T1121:;
	goto T1111;
	goto T1119;
T1119:;
	V581= number_plus((V581),small_fixnum(1));
	V583= (V584);}
	{register object V585;
	base[1]= Cnil;
	base[2]= VV[134];
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
	goto T1131;}
	V580= make_cons((V585),Cnil);
	V579= (V580);
	goto T1116;
	goto T1131;
T1131:;
	V587= make_cons((V585),Cnil);
	((V580))->c.c_cdr = /* INLINE-ARGS */V587;
	V586= (V580);
	V580= CMPcdr(V586);}
	goto T1116;
T1116:;
	goto T1115;}
	goto T1111;
T1111:;
	V578= (V579);}
	if(((V577))==Cnil){
	goto T1140;}
	base[0]= VV[136];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V589= vs_base[0];
	V588= list(2,VV[135],V589);
	goto T1138;
	goto T1140;
T1140:;
	V588= Cnil;
	goto T1138;
T1138:;
	{object V590 = nconc(V578,V588);
	VMR37(V590)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-LAMBDA-LIST (GENERIC-FUNCTION))	*/

static object LI52(V594,V595,V596)

object V594;object V595;object V596;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V598 = (*(LnkLI335))((V596));
	VMR38(V598)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD GF-FAST-METHOD-FUNCTION-P (STANDARD-GENERIC-FUNCTION))	*/

static object LI53(V602,V603,V604)

register object V602;object V603;register object V604;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{object V606;
	object V607;
	V606= CMPcar((V602));
	V607= CMPcdr((V602));
	{object V608;
	if(type_of(V604)==t_structure){
	goto T1156;}
	goto T1154;
	goto T1156;
T1156:;
	if(!(((V604)->str.str_def)==(VV[139]))){
	goto T1154;}
	V608= STREF(object,(V604),4);
	goto T1152;
	goto T1154;
T1154:;{object V610;
	V610= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V604);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V611= vs_base[0];
	if(!((V610)==(CMPcar(V611)))){
	goto T1159;}}
	V608= CMPcar(((V604))->cc.cc_turbo[12]);
	goto T1152;
	goto T1159;
T1159:;
	V608= Cnil;
	goto T1152;
T1152:;
	{register object V613;
	V613= ((V606))->v.v_self[1];
	if(!(type_of(V613)==t_fixnum)){
	goto T1169;}
	V613= ((V608))->v.v_self[fix((V613))];
	goto T1167;
	goto T1169;
T1169:;
	V613= VV[14];
	goto T1167;
T1167:;
	if(!(((V613))==(VV[14]))){
	goto T1172;}
	base[0]= (V604);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V612= vs_base[0];
	goto T1164;
	goto T1172;
T1172:;
	V612= (V613);}
	goto T1164;
T1164:;
	{object V615 = STREF(object,V612,40);
	VMR39(V615)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI54(V620,V621,V622,V623)

register object V620;object V621;register object V622;object V623;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V625;
	object V627;
	object V628;
	base[3]= VV[88];
	base[4]= V623;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V625= vs_base[0];
	if(((V625))==Cnil){
	goto T1182;}
	V627= CMPcar((V625));
	goto T1180;
	goto T1182;
T1182:;
	V627= Cnil;
	goto T1180;
T1180:;
	base[3]= VV[107];
	base[4]= V623;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V629= vs_base[0];
	V628= CMPcar(V629);
	{object V630;
	object V631;
	V630= CMPcar((V620));
	V631= CMPcdr((V620));
	{object V632;
	if(type_of(V622)==t_structure){
	goto T1196;}
	goto T1194;
	goto T1196;
T1196:;
	if(!(((V622)->str.str_def)==(VV[141]))){
	goto T1194;}
	V632= STREF(object,(V622),4);
	goto T1192;
	goto T1194;
T1194:;{object V634;
	V634= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V622);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V635= vs_base[0];
	if(!((V634)==(CMPcar(V635)))){
	goto T1199;}}
	V632= CMPcar(((V622))->cc.cc_turbo[12]);
	goto T1192;
	goto T1199;
T1199:;
	V632= Cnil;
	goto T1192;
T1192:;
	if((V625)==Cnil){
	goto T1207;}
	(void)((VFUN_NARGS=5,(*(LnkLI337))((V622),VV[88],(V627),VV[107],(V628))));
	goto T1205;
	goto T1207;
T1207:;
	(void)((VFUN_NARGS=1,(*(LnkLI337))((V622))));
	goto T1205;
T1205:;
	{register object V638;
	V638= ((V630))->v.v_self[1];
	if(!(type_of(V638)==t_fixnum)){
	goto T1217;}
	V638= ((V632))->v.v_self[fix((V638))];
	goto T1215;
	goto T1217;
T1217:;
	V638= VV[14];
	goto T1215;
T1215:;
	if(!(((V638))==(VV[14]))){
	goto T1220;}
	base[3]= (V622);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V637= vs_base[0];
	goto T1212;
	goto T1220;
T1220:;
	V637= (V638);}
	goto T1212;
T1212:;
	if(((*(LnkLI338))(V637))==Cnil){
	goto T1210;}
	{object V640 = (VFUN_NARGS=1,(*(LnkLI339))((V622)));
	VMR40(V640)}
	goto T1210;
T1210:;
	{object V641 = Cnil;
	VMR40(V641)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (STANDARD-GENERIC-FUNCTION))	*/

static object LI55(V646,V647,V648,V649)

register object V646;object V647;register object V648;object V649;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V652;
	object V654;
	object V655;
	object V657;
	base[4]= VV[88];
	base[5]= V649;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V652= vs_base[0];
	if(((V652))==Cnil){
	goto T1230;}
	V654= CMPcar((V652));
	goto T1228;
	goto T1230;
T1230:;
	V654= Cnil;
	goto T1228;
T1228:;
	base[4]= VV[107];
	base[5]= V649;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V655= vs_base[0];
	if(((V655))==Cnil){
	goto T1237;}
	V657= CMPcar((V655));
	goto T1235;
	goto T1237;
T1237:;
	V657= Cnil;
	goto T1235;
T1235:;
	{object V658;
	object V659;
	V658= CMPcar((V646));
	V659= CMPcdr((V646));
	{object V660;
	if(type_of(V648)==t_structure){
	goto T1247;}
	goto T1245;
	goto T1247;
T1247:;
	if(!(((V648)->str.str_def)==(VV[143]))){
	goto T1245;}
	V660= STREF(object,(V648),4);
	goto T1243;
	goto T1245;
T1245:;{object V662;
	V662= (VV[13]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V648);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V663= vs_base[0];
	if(!((V662)==(CMPcar(V663)))){
	goto T1250;}}
	V660= CMPcar(((V648))->cc.cc_turbo[12]);
	goto T1243;
	goto T1250;
T1250:;
	V660= Cnil;
	goto T1243;
T1243:;
	if((V652)==Cnil){
	goto T1258;}
	if((V655)==Cnil){
	goto T1261;}
	(void)((VFUN_NARGS=5,(*(LnkLI337))((V648),VV[88],(V654),VV[107],(V657))));
	goto T1256;
	goto T1261;
T1261:;
	(void)((VFUN_NARGS=3,(*(LnkLI337))((V648),VV[88],(V654))));
	goto T1256;
	goto T1258;
T1258:;
	(void)((VFUN_NARGS=1,(*(LnkLI337))((V648))));
	goto T1256;
T1256:;
	{register object V666;
	V666= ((V658))->v.v_self[1];
	if(!(type_of(V666)==t_fixnum)){
	goto T1274;}
	V666= ((V660))->v.v_self[fix((V666))];
	goto T1272;
	goto T1274;
T1274:;
	V666= VV[14];
	goto T1272;
T1272:;
	if(!(((V666))==(VV[14]))){
	goto T1277;}
	base[4]= (V648);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V665= vs_base[0];
	goto T1269;
	goto T1277;
T1277:;
	V665= (V666);}
	goto T1269;
T1269:;
	if(((*(LnkLI338))(V665))==Cnil){
	goto T1267;}
	if((V649)==Cnil){
	goto T1281;}
	if(V652!=Cnil){
	if((V652)==Cnil){
	goto T1264;}
	goto T1265;}
	if((CMPcddr(V649))==Cnil){
	goto T1264;}
	goto T1265;
	goto T1281;
T1281:;
	goto T1264;
	goto T1267;
T1267:;
	goto T1264;
	goto T1265;
T1265:;
	{object V668 = (VFUN_NARGS=1,(*(LnkLI339))((V648)));
	VMR41(V668)}
	goto T1264;
T1264:;
	{object V669 = Cnil;
	VMR41(V669)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-METHODS	*/

static object LI56(V672,V673)

register object V672;register object V673;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	V676= ({object _tmp=get(VV[308],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[308])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[308])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V677 = V676,
	(type_of(V677) == t_sfun ?(*((V677)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V677)==t_vfun) ?
	(*((V677)->sfn.sfn_self)):
	(fcall.fun=(V677),fcalln))(Cnil,V672)));
	goto T1286;
T1286:;
	if(((V673))!=Cnil){
	goto T1288;}
	{object V678 = (V672);
	VMR42(V678)}
	goto T1288;
T1288:;
	{register object V680;
	V680= CMPcar((V673));
	V673= CMPcdr((V673));
	V679= (V680);}
	(void)((VFUN_NARGS=3,(*(LnkLI340))((V672),V679,(V673))));
	goto T1286;
	return Cnil;
}
/*	local entry for function REAL-ADD-METHOD	*/

static object LI57(object V682,object V681,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	{register object V683;
	register object V684;
	object V685;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V683= V682;
	V684= V681;
	narg = narg - 2;
	if (narg <= 0) goto T1296;
	else {
	V685= first;}
	--narg; goto T1297;
	goto T1296;
T1296:;
	V685= Cnil;
	goto T1297;
T1297:;
	base[0]= (V684);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1300;}
	base[0]= VV[144];
	base[1]= (V684);
	base[3]= (V684);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V686 = vs_base[0];
	VMR43(V686)}
	goto T1300;
T1300:;
	{object V687;
	object V688;
	object V689;
	object V690;
	base[4]= (V683);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V687= vs_base[0];
	base[4]= (V684);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V688= vs_base[0];
	base[4]= (V684);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V689= vs_base[0];
	V690= (VFUN_NARGS=4,(*(LnkLI316))((V683),(V688),(V689),Cnil));
	if(((V690))==Cnil){
	goto T1314;}
	base[4]= (V683);
	base[5]= (V690);
	(void)simple_symlispcall(VV[318],base+4,2);
	goto T1314;
T1314:;
	V693= ({object _tmp=get(VV[281],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[281])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[281])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V694 = V693,
	(type_of(V694) == t_sfun ?(*((V694)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V694)==t_vfun) ?
	(*((V694)->sfn.sfn_self)):
	(fcall.fun=(V694),fcalln))(V683,V684)));
	{object V697;
	base[5]= V684;
	base[7]= V683;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V697= vs_base[0];
	V698= ({object _tmp=get(VV[308],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[308])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[308])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V699 = V698,
	(type_of(V699) == t_sfun ?(*((V699)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V699)==t_vfun) ?
	(*((V699)->sfn.sfn_self)):
	(fcall.fun=(V699),fcalln))((V697),V683)));}
	{register object V700;
	register object V701;
	V700= (V689);
	V701= CMPcar((V700));
	goto T1331;
T1331:;
	if(!(((V700))==Cnil)){
	goto T1332;}
	goto T1327;
	goto T1332;
T1332:;
	base[5]= (V701);
	base[6]= (V684);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk341)(Lclptr341);
	vs_top=sup;
	V700= CMPcdr((V700));
	V701= CMPcar((V700));
	goto T1331;}
	goto T1327;
T1327:;
	(void)((VFUN_NARGS=3,(*(LnkLI337))((V683),VV[145],(V684))));
	if(((V685))!=Cnil){
	goto T1345;}
	{register object x= (V687),V702= VV[146];
	while(V702!=Cnil)
	if(eql(x,V702->c.c_car)){
	goto T1350;
	}else V702=V702->c.c_cdr;
	goto T1348;}
	goto T1350;
T1350:;
	base[4]= (*(LnkLI342))(CMPcar((V689)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1348;
T1348:;
	(void)((VFUN_NARGS=1,(*(LnkLI339))((V683))));
	goto T1345;
T1345:;
	{object V703 = (V684);
	VMR43(V703)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function REAL-REMOVE-METHOD	*/

static object LI58(V706,V707)

register object V706;register object V707;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	base[0]= (V707);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V708= vs_base[0];
	if(!(((((V706))==(V708)?Ct:Cnil))==Cnil)){
	goto T1353;}
	base[0]= VV[147];
	base[1]= (V707);
	base[3]= (V707);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V709 = vs_base[0];
	VMR44(V709)}
	goto T1353;
T1353:;
	{object V710;
	object V711;
	object V712;
	object V713;
	base[4]= (V706);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V710= vs_base[0];
	base[4]= (V707);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V711= vs_base[0];
	base[4]= (V706);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V712= vs_base[0];
	base[4]= (V707);
	base[5]= (V712);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	V713= vs_base[0];
	V716= ({object _tmp=get(VV[281],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[281])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[281])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V717 = V716,
	(type_of(V717) == t_sfun ?(*((V717)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V717)==t_vfun) ?
	(*((V717)->sfn.sfn_self)):
	(fcall.fun=(V717),fcalln))(Cnil,V707)));
	V720= ({object _tmp=get(VV[308],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[308])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[308])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V721 = V720,
	(type_of(V721) == t_sfun ?(*((V721)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V721)==t_vfun) ?
	(*((V721)->sfn.sfn_self)):
	(fcall.fun=(V721),fcalln))(V713,V706)));
	{register object V722;
	register object V723;
	base[6]= (V707);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V722= vs_base[0];
	V723= CMPcar((V722));
	goto T1379;
T1379:;
	if(!(((V722))==Cnil)){
	goto T1380;}
	goto T1374;
	goto T1380;
T1380:;
	base[6]= (V723);
	base[7]= (V707);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk345)(Lclptr345);
	vs_top=sup;
	V722= CMPcdr((V722));
	V723= CMPcar((V722));
	goto T1379;}
	goto T1374;
T1374:;
	(void)((VFUN_NARGS=1,(*(LnkLI337))((V706))));
	{register object x= (V710),V724= VV[148];
	while(V724!=Cnil)
	if(eql(x,V724->c.c_car)){
	goto T1395;
	}else V724=V724->c.c_cdr;
	goto T1393;}
	goto T1395;
T1395:;
	base[4]= (*(LnkLI342))(CMPcar((V711)));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	goto T1393;
T1393:;
	(void)((VFUN_NARGS=1,(*(LnkLI339))((V706))));
	{object V725 = (V706);
	VMR44(V725)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-APPLICABLE-METHODS-FUNCTION	*/

static object LI59(V728,V729)

object V728;object V729;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	base[1]= (V728);
	base[3]= (V728);
	base[4]= (V729);
	base[5]= VV[149];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V730 = vs_base[0];
	VMR45(V730)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-APPLICABLE-METHODS (GENERIC-FUNCTION T))	*/

static object LI60(V735,V736,V737,V738)

object V735;object V736;register object V737;object V738;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	base[1]= (V737);
	base[3]= (V737);
	base[4]= (V738);
	base[5]= VV[149];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk346)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V740 = vs_base[0];
	VMR46(V740)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-APPLICABLE-METHODS-USING-CLASSES (GENERIC-FUNCTION T))	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V741;
	object V742;
	register object V743;
	object V744;
	check_arg(4);
	V741=(base[0]);
	V742=(base[1]);
	V743=(base[2]);
	V744=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V743);
	base[6]= (V743);
	base[7]= (V744);
	base[8]= VV[150];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk346)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk347)();
	return;
	}
}
/*	local entry for function PROCLAIM-INCOMPATIBLE-SUPERCLASSES	*/

static object LI62(V747)

object V747;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V748;
	object V749= (V747);
	if(V749==Cnil){
	V747= Cnil;
	goto T1420;}
	base[0]=V748=MMcons(Cnil,Cnil);
	goto T1421;
T1421:;
	if(!(type_of((V749->c.c_car))==t_symbol)){
	goto T1424;}
	(V748->c.c_car)= (VFUN_NARGS=1,(*(LnkLI310))((V749->c.c_car)));
	goto T1422;
	goto T1424;
T1424:;
	(V748->c.c_car)= (V749->c.c_car);
	goto T1422;
T1422:;
	if((V749=MMcdr(V749))==Cnil){
	V747= base[0];
	goto T1420;}
	V748=MMcdr(V748)=MMcons(Cnil,Cnil);
	goto T1421;}
	goto T1420;
T1420:;
	{register object V751;
	register object V752;
	V751= (V747);
	V752= CMPcar((V751));
	goto T1429;
T1429:;
	if(!(((V751))==Cnil)){
	goto T1430;}
	{object V753 = Cnil;
	VMR48(V753)}
	goto T1430;
T1430:;
	{register object V754;
	register object V755;
	V754= (V747);
	V755= CMPcar((V754));
	goto T1438;
T1438:;
	if(!(((V754))==Cnil)){
	goto T1439;}
	goto T1434;
	goto T1439;
T1439:;
	if(((V752))==((V755))){
	goto T1443;}
	{register object V756;
	register object V757;
	register object V758;
	V756= (V755);
	V757= (V752);
	base[3]= (V756);
	base[5]= (V757);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk348)(Lclptr348);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V758= vs_base[0];
	V759= ({object _tmp=get(VV[348],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[348])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[348])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V760 = V759,
	(type_of(V760) == t_sfun ?(*((V760)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V760)==t_vfun) ?
	(*((V760)->sfn.sfn_self)):
	(fcall.fun=(V760),fcalln))((V758),(V757))));}
	goto T1443;
T1443:;
	V754= CMPcdr((V754));
	V755= CMPcar((V754));
	goto T1438;}
	goto T1434;
T1434:;
	V751= CMPcdr((V751));
	V752= CMPcar((V751));
	goto T1429;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUPERCLASSES-COMPATIBLE-P	*/

static object LI63(V763,V764)

object V763;object V764;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V765;
	register object V766;
	base[0]= (V763);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk197)(Lclptr197);
	vs_top=sup;
	V765= vs_base[0];
	base[0]= (V764);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk197)(Lclptr197);
	vs_top=sup;
	V766= vs_base[0];
	{register object V767;
	register object V768;
	V767= (V765);
	V768= CMPcar((V767));
	goto T1470;
T1470:;
	if(!(((V767))==Cnil)){
	goto T1471;}
	{object V769 = Ct;
	VMR49(V769)}
	goto T1471;
T1471:;
	{register object V770;
	register object V771;
	base[3]= (V768);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk348)(Lclptr348);
	vs_top=sup;
	V770= vs_base[0];
	V771= CMPcar((V770));
	goto T1480;
T1480:;
	if(!(((V770))==Cnil)){
	goto T1481;}
	goto T1475;
	goto T1481;
T1481:;
	{register object x= (V771),V772= (V766);
	while(V772!=Cnil)
	if(x==(V772->c.c_car)){
	goto T1487;
	}else V772=V772->c.c_cdr;
	goto T1485;}
	goto T1487;
T1487:;
	{object V773 = Cnil;
	VMR49(V773)}
	goto T1485;
T1485:;
	V770= CMPcdr((V770));
	V771= CMPcar((V770));
	goto T1480;}
	goto T1475;
T1475:;
	V767= CMPcdr((V767));
	V768= CMPcar((V767));
	goto T1470;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (SPECIALIZER SPECIALIZER))	*/

static object LI64(V778,V779,V780,V781)

object V778;object V779;object V780;object V781;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V783 = Cnil;
	VMR50(V783)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS CLASS))	*/

static object LI65(V788,V789,V790,V791)

object V788;object V789;object V790;object V791;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V793 = (((V790))==((V791))?Ct:Cnil);
	VMR51(V793)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (CLASS))	*/

static object LI66(V797,V798,V799)

object V797;object V798;object V799;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V801 = (V799);
	VMR52(V801)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (CLASS-EQ-SPECIALIZER CLASS-EQ-SPECIALIZER))	*/

static object LI67(V806,V807,V808,V809)

object V806;object V807;object V808;object V809;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V808);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	V811= vs_base[0];
	base[0]= (V809);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	V812= vs_base[0];
	{object V813 = ((V811)==(V812)?Ct:Cnil);
	VMR53(V813)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SAME-SPECIALIZER-P (EQL-SPECIALIZER EQL-SPECIALIZER))	*/

static object LI68(V818,V819,V820,V821)

object V818;object V819;object V820;object V821;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	base[0]= (V820);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk350)(Lclptr350);
	vs_top=sup;
	V823= vs_base[0];
	base[0]= (V821);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk350)(Lclptr350);
	vs_top=sup;
	V824= vs_base[0];
	{object V825 = ((V823)==(V824)?Ct:Cnil);
	VMR54(V825)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-CLASS (EQL-SPECIALIZER))	*/

static object LI69(V829,V830,V831)

register object V829;object V830;register object V831;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V833;
	object V834;
	V833= CMPcar((V829));
	V834= CMPcdr((V829));
	{object V835;
	if(type_of(V831)==t_structure){
	goto T1526;}
	goto T1524;
	goto T1526;
T1526:;
	if(!(((V831)->str.str_def)==(VV[152]))){
	goto T1524;}
	V835= STREF(object,(V831),4);
	goto T1522;
	goto T1524;
T1524:;{object V837;
	V837= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V831);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V838= vs_base[0];
	if(!((V837)==(CMPcar(V838)))){
	goto T1529;}}
	V835= CMPcar(((V831))->cc.cc_turbo[12]);
	goto T1522;
	goto T1529;
T1529:;
	V835= Cnil;
	goto T1522;
T1522:;
	{register object V840;
	V840= ((V833))->v.v_self[1];
	if(!(type_of(V840)==t_fixnum)){
	goto T1539;}
	V840= ((V835))->v.v_self[fix((V840))];
	goto T1537;
	goto T1539;
T1539:;
	V840= VV[14];
	goto T1537;
T1537:;
	if(!(((V840))==(VV[14]))){
	goto T1542;}
	base[0]= (V831);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk351)(Lclptr351);
	vs_top=sup;
	V839= vs_base[0];
	goto T1534;
	goto T1542;
T1542:;
	V839= (V840);}
	goto T1534;
T1534:;
	{object V842 = (*(LnkLI191))(V839);
	VMR55(V842)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for TYPES-FROM-ARGUMENTS	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V843;
	register object V844;
	register object V845;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V843=(base[0]);
	V844=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1545;}
	V845=(base[2]);
	vs_top=sup;
	goto T1546;
	goto T1545;
T1545:;
	V845= Cnil;
	goto T1546;
T1546:;
	{object V846;
	object V847;
	object V848;
	object V849;
	object V850;
	base[3]= (V843);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk352)();
	if(vs_base>=vs_top){vs_top=sup;goto T1550;}
	V846= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1551;}
	V847= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1552;}
	V848= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1553;}
	V849= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1554;}
	V850= vs_base[0];
	vs_top=sup;
	goto T1555;
	goto T1550;
T1550:;
	V846= Cnil;
	goto T1551;
T1551:;
	V847= Cnil;
	goto T1552;
T1552:;
	V848= Cnil;
	goto T1553;
T1553:;
	V849= Cnil;
	goto T1554;
T1554:;
	V850= Cnil;
	goto T1555;
T1555:;
	{register object V851;
	V851= Cnil;
	{long V852;
	register long V853;
	V852= fix((V846));
	V853= 0;
	goto T1560;
T1560:;
	if(!((V853)>=(V852))){
	goto T1561;}
	goto T1556;
	goto T1561;
T1561:;
	if(((V844))!=Cnil){
	goto T1564;}
	base[3]= VV[153];
	base[5]= (V843);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V846);
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;
	goto T1564;
T1564:;
	{register object V854;
	{register object V855;
	V855= CMPcar((V844));
	V844= CMPcdr((V844));
	V854= (V855);}
	{register object V856;
	if(((V845))==Cnil){
	goto T1578;}
	V856= list(2,(V845),(V854));
	goto T1576;
	goto T1578;
T1578:;
	V856= (V854);
	goto T1576;
T1576:;
	V851= make_cons((V856),(V851));}}
	V853= (long)(V853)+1;
	goto T1560;}
	goto T1556;
T1556:;
	base[3]= nreverse((V851));
	base[4]= (V850);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function GET-WRAPPERS-FROM-CLASSES	*/

static object LI71(V861,V862,V863,V864)

object V861;object V862;object V863;object V864;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	{object V865;
	register object V866;
	register object V867;
	V865= (V862);
	V866= (V865);
	V867= (V864);
	{register object V868;
	register object V869;
	if(!(type_of((V863))==t_cons||((V863))==Cnil)){
	goto T1592;}
	V868= (V863);
	goto T1590;
	goto T1592;
T1592:;
	V868= make_cons((V863),Cnil);
	goto T1590;
T1590:;
	V869= CMPcar((V868));
	goto T1596;
T1596:;
	if(!(((V868))==Cnil)){
	goto T1597;}
	goto T1589;
	goto T1597;
T1597:;
	if((Ct)==(CMPcar((V867)))){
	goto T1601;}
	{register object V870;
	base[2]= (V869);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk353)(Lclptr353);
	vs_top=sup;
	V870= vs_base[0];
	if(((V870))!=Cnil){
	goto T1606;}
	{object V871 = Cnil;
	VMR57(V871)}
	goto T1606;
T1606:;
	if(!(eql((V861),small_fixnum(1)))){
	goto T1610;}
	V865= (V870);
	goto T1601;
	goto T1610;
T1610:;
	{register object V873;
	V873= (V870);
	(V866)->c.c_car = (V873);}
	V866= CMPcdr((V866));}
	goto T1601;
T1601:;
	V867= CMPcdr((V867));
	V868= CMPcdr((V868));
	V869= CMPcar((V868));
	goto T1596;}
	goto T1589;
T1589:;
	{object V874 = (V865);
	VMR57(V874)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SDFUN-FOR-CACHING	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{object V875;
	object V876;
	check_arg(2);
	V875=(base[0]);
	V876=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V877;
	base[3]=VV[354]->s.s_gfdef;
	{object V878;
	object V879= (V876);
	if(V879==Cnil){
	V877= Cnil;
	goto T1624;}
	base[2]=V878=MMcons(Cnil,Cnil);
	goto T1625;
T1625:;
	base[4]= (V879->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	(V878->c.c_car)= vs_base[0];
	if((V879=MMcdr(V879))==Cnil){
	V877= base[2];
	goto T1624;}
	V878=MMcdr(V878)=MMcons(Cnil,Cnil);
	goto T1625;}
	goto T1624;
T1624:;
	{object V880;
	object V881;
	base[2]= (V875);
	base[3]= (V877);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	if(vs_base>=vs_top){vs_top=sup;goto T1631;}
	V880= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1632;}
	V881= vs_base[0];
	vs_top=sup;
	goto T1633;
	goto T1631;
T1631:;
	V880= Cnil;
	goto T1632;
T1632:;
	V881= Cnil;
	goto T1633;
T1633:;
	base[2]= (VFUN_NARGS=6,(*(LnkLI355))((V875),(V880),(V877),Cnil,Ct,(V881)));
	base[3]= Cnil;
	base[6]=VV[353]->s.s_gfdef;
	{object V882;
	object V883= (V876);
	if(V883==Cnil){
	base[4]= Cnil;
	goto T1636;}
	base[5]=V882=MMcons(Cnil,Cnil);
	goto T1637;
T1637:;
	base[7]= (V883->c.c_car);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk353)(Lclptr353);
	vs_top=sup;
	(V882->c.c_car)= vs_base[0];
	if((V883=MMcdr(V883))==Cnil){
	base[4]= base[5];
	goto T1636;}
	V882=MMcdr(V882)=MMcons(Cnil,Cnil);
	goto T1637;}
	goto T1636;
T1636:;
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}}
	}
}
/*	local entry for function VALUE-FOR-CACHING	*/

static object LI73(V886,V887)

object V886;object V887;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V888;
	base[0]= (V886);
	base[3]=VV[354]->s.s_gfdef;
	{object V889;
	object V890= (V887);
	if(V890==Cnil){
	base[1]= Cnil;
	goto T1642;}
	base[2]=V889=MMcons(Cnil,Cnil);
	goto T1643;
T1643:;
	base[4]= (V890->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	(V889->c.c_car)= vs_base[0];
	if((V890=MMcdr(V890))==Cnil){
	base[1]= base[2];
	goto T1642;}
	V889=MMcdr(V889)=MMcons(Cnil,Cnil);
	goto T1643;}
	goto T1642;
T1642:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V888= vs_base[0];{object V892;
	base[0]= CMPcar((V888));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk357)(Lclptr357);
	vs_top=sup;
	V892= vs_base[0];
	if(V892==Cnil)goto T1647;
	V891= V892;
	goto T1646;
	goto T1647;
T1647:;}
	base[0]= CMPcar((V888));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk358)(Lclptr358);
	vs_top=sup;
	V891= vs_base[0];
	goto T1646;
T1646:;
	{object V893 = (VFUN_NARGS=2,(*(LnkLI356))(V891,VV[154]));
	VMR59(V893)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-SECONDARY-DISPATCH-FUNCTION	*/

static object LI75(V895)

object V895;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	base[0]=MMcons((V895),Cnil);
	{object V896 = 
	make_cclosure_new(LC135,Cnil,base[0],Cdata);
	VMR60(V896)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-EQ	*/

static object LI76(V899,V900)

register object V899;register object V900;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	goto T1652;
T1652:;
	if(!(type_of((V899))!=t_cons)){
	goto T1654;}
	{object V901 = (((V899))==((V900))?Ct:Cnil);
	VMR61(V901)}
	goto T1654;
T1654:;
	if(!(type_of((V900))!=t_cons)){
	goto T1657;}
	{object V902 = Cnil;
	VMR61(V902)}
	goto T1657;
T1657:;
	if((CMPcar((V899)))==(CMPcar((V900)))){
	goto T1660;}
	{object V903 = Cnil;
	VMR61(V903)}
	goto T1660;
T1660:;
	V899= CMPcdr((V899));
	V900= CMPcdr((V900));
	goto T1652;
	return Cnil;
}
/*	function definition for COMPUTE-APPLICABLE-METHODS-EMF	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	{object V904;
	check_arg(1);
	V904=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((VV[155]->s.s_dbind))==(VV[156]))){
	goto T1668;}
	{register object V905;
	object V906;
	V905= (*(LnkLI324))(VV[157]);
	base[3]= (V905);
	base[4]= list(2,list(2,VV[149],(V904)),Ct);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V906= vs_base[0];
	base[4]= (V905);
	base[5]= (V906);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= vs_base[0];
	if((VV[158]->s.s_dbind)!=Cnil){
	V907= (VV[158]->s.s_dbind);
	goto T1678;}
	base[5]= (V905);
	base[6]= list(2,list(2,VV[149],(V905)),Ct);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	(VV[158]->s.s_dbind)= vs_base[0];
	V907= (VV[158]->s.s_dbind);
	goto T1678;
T1678:;
	base[4]= (*(LnkLI360))((V906),V907);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1668;
T1668:;
	base[1]= (VV[361]->s.s_gfdef);
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;
	}
}
/*	local entry for function COMPUTE-APPLICABLE-METHODS-EMF-STD-P	*/

static object LI78(V909)

object V909;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]= (V909);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V910= vs_base[0];
	{object V911 = STREF(object,V910,36);
	VMR63(V911)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-ALL-C-A-M-GF-INFO	*/

static object LI79(V913)

object V913;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	base[1]= (V913);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	if(((VV[159]->s.s_dbind))==Cnil){
	goto T1690;}
	base[1]= 
	make_cclosure_new(LC136,Cnil,base[0],Cdata);
	base[2]= (VV[159]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk329)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1690;}
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	{register object V914;
	register object V915;
	V914= (base[0]->c.c_car);
	V915= CMPcar((V914));
	goto T1700;
T1700:;
	if(!(((V914))==Cnil)){
	goto T1701;}
	goto T1696;
	goto T1701;
T1701:;
	{register object x= (V915),V916= (VV[159]->s.s_dbind);
	while(V916!=Cnil)
	if(eql(x,V916->c.c_car)){
	goto T1705;
	}else V916=V916->c.c_cdr;}
	{register object V917;
	base[4]= (V915);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V918= vs_base[0];
	V917= CMPcar(V918);
	base[4]= (V917);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1712;}
	{object V919;
	base[5]= (V917);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk350)(Lclptr350);
	vs_top=sup;
	V919= vs_base[0];
	base[5]= (V919);
	base[6]= (base[1]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[1]->c.c_car)= vs_base[0];
	goto T1705;}
	goto T1712;
T1712:;
	{object V920;
	base[5]= (V917);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	V920= vs_base[0];
	base[5]= (V920);
	base[6]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	(base[2]->c.c_car)= vs_base[0];}}
	goto T1705;
T1705:;
	V914= CMPcdr((V914));
	V915= CMPcar((V914));
	goto T1700;}
	goto T1696;
T1696:;
	V921= 
	make_cclosure_new(LC137,Cnil,base[2],Cdata);
	(void)((*(LnkLI363))(V921));
	goto T1688;
	goto T1690;
T1690:;
	V922= (VV[364]->s.s_gfdef);
	(void)((*(LnkLI363))(V922));
	goto T1688;
T1688:;
	(VV[159]->s.s_dbind)= (base[0]->c.c_car);
	{object V923 = (VV[159]->s.s_dbind);
	VMR64(V923)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-INFO	*/

static object LI80(V925)

object V925;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	(void)((*(LnkLI364))((V925)));
	{object V926 = (*(LnkLI365))((V925));
	VMR65(V926)}
	return Cnil;
}
/*	local entry for function UPDATE-C-A-M-GF-INFO	*/

static object LI81(V928)

object V928;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	if(((*(LnkLI366))((V928)))!=Cnil){
	goto T1735;}
	{object V929;
	object V930;
	base[0]= (V928);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk367)();
	if(vs_base>=vs_top){vs_top=sup;goto T1739;}
	V929= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1740;}
	V930= vs_base[0];
	vs_top=sup;
	goto T1741;
	goto T1739;
T1739:;
	V929= Cnil;
	goto T1740;
T1740:;
	V930= Cnil;
	goto T1741;
T1741:;
	{object V931;
	base[0]= (V928);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V931= vs_base[0];
	V932= Ct;
	STSET(object,(V931),32, (V929));
	(void)((V929));
	V933= Ct;
	STSET(object,(V931),36, (V930));
	{object V934 = (V930);
	VMR66(V934)}}}
	goto T1735;
T1735:;
	{object V935 = Cnil;
	VMR66(V935)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GF-SIMPLE-ACCESSOR-TYPE	*/

static object LI82(V937)

object V937;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{object V938;
	base[0]= (V937);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V938= vs_base[0];
	{object V940;
	register object V941;
	object V942;
	base[3]= (V937);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V940= vs_base[0];
	if((V940)==Cnil){
	V941= Cnil;
	goto T1750;}
	V941= (*(LnkLI191))(CMPcar((V940)));
	goto T1750;
T1750:;
	if((V941)==Cnil){
	V942= Cnil;
	goto T1751;}
	if(!(((V941))==((VV[160]->s.s_dbind)))){
	goto T1753;}
	V942= VV[161];
	goto T1751;
	goto T1753;
T1753:;
	if(!(((V941))==((VV[162]->s.s_dbind)))){
	goto T1756;}
	V942= VV[163];
	goto T1751;
	goto T1756;
T1756:;
	if(!(((V941))==((VV[164]->s.s_dbind)))){
	goto T1759;}
	V942= VV[165];
	goto T1751;
	goto T1759;
T1759:;
	V942= Cnil;
	goto T1751;
T1751:;
	if((STREF(object,(V938),36))==Cnil){
	goto T1762;}
	if(((V942))==Cnil){
	goto T1762;}
	{register object V943;
	register object V944;
	V943= CMPcdr((V940));
	V944= CMPcar((V943));
	goto T1772;
T1772:;
	if(!(((V943))==Cnil)){
	goto T1773;}
	goto T1768;
	goto T1773;
T1773:;
	V945= (*(LnkLI191))((V944));
	if(((V941))==(/* INLINE-ARGS */V945)){
	goto T1777;}
	goto T1762;
	goto T1777;
T1777:;
	V943= CMPcdr((V943));
	V944= CMPcar((V943));
	goto T1772;}
	goto T1768;
T1768:;
	base[3]= (V937);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)(Lclptr368);
	vs_top=sup;
	V946= vs_base[0];
	if(!((V946)==((VV[166]->s.s_dbind)))){
	goto T1762;}
	V939= (V942);
	goto T1747;
	goto T1762;
T1762:;
	V939= Cnil;}
	goto T1747;
T1747:;
	V947= Ct;
	STSET(object,(V938),24, V939);
	{object V948 = V939;
	VMR67(V948)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-ACCESSOR-METHOD-FUNCTION	*/

static void L83()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{object V949;
	register object V950;
	register object V951;
	register object V952;
	check_arg(4);
	V949=(base[0]);
	V950=(base[1]);
	V951=(base[2]);
	V952=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V953;
	object V954;
	object V955;
	object V956;
	register object V957;
	object V958;
	V953= (*(LnkLI369))((V950));
	V954= (*(LnkLI370))((V950));
	V959= list(2,VV[149],(V951));
	V960= list(2,VV[150],(V951));
	V955= list(3,/* INLINE-ARGS */V959,/* INLINE-ARGS */V960,list(2,VV[149],(V952)));
	if(!(((V950))==(VV[163]))){
	goto T1793;}
	V956= make_cons(Ct,(V955));
	goto T1791;
	goto T1793;
T1793:;
	V956= (V955);
	goto T1791;
T1791:;
	base[10]= (V949);
	base[11]= (V956);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V957= vs_base[0];
	V958= ((CMPcdr((V957)))==Cnil?Ct:Cnil);
	if(((V958))==Cnil){
	goto T1801;}
	base[11]= (V951);
	base[12]= (V952);
	base[13]= (V950);
	vs_top=(vs_base=base+11)+3;
	(void) (*Lnk371)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1799;
	goto T1801;
T1801:;
	base[11]= (V951);
	base[12]= (V952);
	base[14]= (V949);
	base[15]= (V957);
	base[16]= (V956);{object V962;
	{register object x= (V953),V963= (V957);
	while(V963!=Cnil)
	if(eql(x,V963->c.c_car)){
	V962= V963;
	goto T1815;
	}else V963=V963->c.c_cdr;
	V962= Cnil;}
	goto T1815;
T1815:;
	if(V962==Cnil)goto T1814;
	V961= V962;
	goto T1813;
	goto T1814;
T1814:;}{object V964;
	{register object x= (V954),V965= (V957);
	while(V965!=Cnil)
	if(eql(x,V965->c.c_car)){
	V964= V965;
	goto T1817;
	}else V965=V965->c.c_cdr;
	V964= Cnil;}
	goto T1817;
T1817:;
	if(V964==Cnil)goto T1816;
	V961= V964;
	goto T1813;
	goto T1816;
T1816:;}
	base[18]= VV[167];
	vs_top=(vs_base=base+18)+1;
	Lerror();
	vs_top=sup;
	V961= vs_base[0];
	goto T1813;
T1813:;
	V966= CMPcar(V961);
	base[18]= (V951);
	base[19]= (V952);
	base[20]= (V950);
	vs_top=(vs_base=base+18)+3;
	(void) (*Lnk372)();
	vs_top=sup;
	V967= vs_base[0];
	V968= list(2,/* INLINE-ARGS */V966,V967);
	base[17]= make_cons(/* INLINE-ARGS */V968,Cnil);
	if(!(((V950))==(VV[163]))){
	goto T1824;}
	{register object V969;
	register object V970;
	V969= (V957);
	V970= CMPcar((V969));
	goto T1832;
T1832:;
	if(!(((V969))==Cnil)){
	goto T1833;}
	goto T1825;
	goto T1833;
T1833:;
	base[20]= (V970);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V971= vs_base[0];
	if((CMPcar(V971))==((VV[133]->s.s_dbind))){
	goto T1837;}
	goto T1828;
	goto T1837;
T1837:;
	V969= CMPcdr((V969));
	V970= CMPcar((V969));
	goto T1832;}
	goto T1828;
T1828:;
	goto T1824;
T1824:;
	{object V972;
	V973= (*(LnkLI373))((V951));
	base[19]= (V951);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk353)(Lclptr353);
	vs_top=sup;
	V974= vs_base[0];
	V972= list(3,/* INLINE-ARGS */V973,V974,(*(LnkLI373))((V952)));
	if(!(((V950))==(VV[163]))){
	goto T1851;}
	base[19]= (VV[133]->s.s_dbind);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk353)(Lclptr353);
	vs_top=sup;
	V975= vs_base[0];
	base[18]= make_cons(V975,(V972));
	goto T1823;
	goto T1851;
T1851:;
	base[18]= (V972);
	goto T1823;}
	goto T1825;
T1825:;
	base[18]= Cnil;
	goto T1823;
T1823:;
	vs_top=(vs_base=base+14)+5;
	(void) (*Lnk374)();
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= (V950);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk375)();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T1799;
T1799:;
	base[11]= (V958);
	vs_top=(vs_base=base+10)+2;
	return;}
	}
}
/*	function definition for UPDATE-SLOT-VALUE-GF-INFO	*/

static void L84()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	if(((VV[168]->s.s_dbind))!=Cnil){
	goto T1857;}
	(void)((*(LnkLI376))((base[0]->c.c_car),(base[1]->c.c_car)));
	goto T1857;
T1857:;
	if(((*(LnkLI369))((base[1]->c.c_car)))==Cnil){
	goto T1861;}
	if(((*(LnkLI370))((base[1]->c.c_car)))==Cnil){
	goto T1861;}
	base[2]=make_cclosure_new(LC85,Cnil,base[1],Cdata);
	base[2]=MMcons(base[2],base[1]);
	if(((VV[168]->s.s_dbind))==Cnil){
	goto T1866;}
	base[3]= (VV[168]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	L85(base);
	return;
	goto T1866;
T1866:;
	base[3]= (base[2]->c.c_car);
	base[4]= VV[169];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk377)();
	return;
	goto T1861;
T1861:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function STANDARD-SVUC-METHOD	*/

static object LI86(V977)

object V977;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{object V978= (V977);
	if((V978!= VV[161]))goto T1871;
	{object V979 = (VV[170]->s.s_dbind);
	VMR70(V979)}
	goto T1871;
T1871:;
	if((V978!= VV[163]))goto T1872;
	{object V980 = (VV[171]->s.s_dbind);
	VMR70(V980)}
	goto T1872;
T1872:;
	if((V978!= VV[165]))goto T1873;
	{object V981 = (VV[172]->s.s_dbind);
	VMR70(V981)}
	goto T1873;
T1873:;
	{object V982 = Cnil;
	VMR70(V982)}}
	return Cnil;
}
/*	local entry for function SET-STANDARD-SVUC-METHOD	*/

static object LI87(V985,V986)

object V985;object V986;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{object V987= (V985);
	if((V987!= VV[161]))goto T1874;
	(VV[170]->s.s_dbind)= (V986);
	{object V988 = (VV[170]->s.s_dbind);
	VMR71(V988)}
	goto T1874;
T1874:;
	if((V987!= VV[163]))goto T1876;
	(VV[171]->s.s_dbind)= (V986);
	{object V989 = (VV[171]->s.s_dbind);
	VMR71(V989)}
	goto T1876;
T1876:;
	if((V987!= VV[165]))goto T1878;
	(VV[172]->s.s_dbind)= (V986);
	{object V990 = (VV[172]->s.s_dbind);
	VMR71(V990)}
	goto T1878;
T1878:;
	{object V991 = Cnil;
	VMR71(V991)}}
	return Cnil;
}
/*	local entry for function STRUCTURE-SVUC-METHOD	*/

static object LI88(V993)

object V993;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V994= (V993);
	if((V994!= VV[161]))goto T1880;
	{object V995 = (VV[173]->s.s_dbind);
	VMR72(V995)}
	goto T1880;
T1880:;
	if((V994!= VV[163]))goto T1881;
	{object V996 = (VV[174]->s.s_dbind);
	VMR72(V996)}
	goto T1881;
T1881:;
	if((V994!= VV[165]))goto T1882;
	{object V997 = (VV[175]->s.s_dbind);
	VMR72(V997)}
	goto T1882;
T1882:;
	{object V998 = Cnil;
	VMR72(V998)}}
	return Cnil;
}
/*	local entry for function SET-STRUCTURE-SVUC-METHOD	*/

static object LI89(V1001,V1002)

object V1001;object V1002;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V1003= (V1001);
	if((V1003!= VV[161]))goto T1883;
	(VV[173]->s.s_dbind)= (V1002);
	{object V1004 = (VV[173]->s.s_dbind);
	VMR73(V1004)}
	goto T1883;
T1883:;
	if((V1003!= VV[163]))goto T1885;
	(VV[174]->s.s_dbind)= (V1002);
	{object V1005 = (VV[174]->s.s_dbind);
	VMR73(V1005)}
	goto T1885;
T1885:;
	if((V1003!= VV[165]))goto T1887;
	(VV[175]->s.s_dbind)= (V1002);
	{object V1006 = (VV[175]->s.s_dbind);
	VMR73(V1006)}
	goto T1887;
T1887:;
	{object V1007 = Cnil;
	VMR73(V1007)}}
	return Cnil;
}
/*	local entry for function UPDATE-STD-OR-STR-METHODS	*/

static object LI90(V1010,V1011)

object V1010;register object V1011;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	{register object V1012;
	register object V1013;
	base[2]= (V1010);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V1012= vs_base[0];
	V1013= CMPcar((V1012));
	goto T1893;
T1893:;
	if(!(((V1012))==Cnil)){
	goto T1894;}
	{object V1014 = Cnil;
	VMR74(V1014)}
	goto T1894;
T1894:;
	{register object V1015;
	base[2]= (V1013);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V1015= vs_base[0];
	if(!(((V1011))==(VV[163]))){
	goto T1902;}
	{register object V1017;
	V1017= CMPcar((V1015));
	V1015= CMPcdr((V1015));
	V1016= (V1017);}
	if(!((V1016)==((VV[133]->s.s_dbind)))){
	goto T1898;}
	goto T1902;
T1902:;
	base[2]= (VV[289]->s.s_gfdef);
	base[3]= (V1015);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk329)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1898;}
	base[2]= CMPcar((V1015));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1018= vs_base[0];
	if(!((V1018)==(VV[176]))){
	goto T1914;}
	base[2]= CMPcadr((V1015));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1019= vs_base[0];
	if(!((V1019)==(VV[177]))){
	goto T1914;}
	base[2]= CMPcaddr((V1015));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1020= vs_base[0];
	if(!((V1020)==(VV[178]))){
	goto T1914;}
	(void)((*(LnkLI378))((V1011),(V1013)));
	goto T1898;
	goto T1914;
T1914:;
	base[2]= CMPcar((V1015));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1021= vs_base[0];
	if(!((V1021)==(VV[179]))){
	goto T1898;}
	base[2]= CMPcadr((V1015));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1022= vs_base[0];
	if(!((V1022)==(VV[180]))){
	goto T1898;}
	base[2]= CMPcaddr((V1015));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1023= vs_base[0];
	if(!((V1023)==(VV[181]))){
	goto T1898;}
	(void)((*(LnkLI379))((V1011),(V1013)));}
	goto T1898;
T1898:;
	V1012= CMPcdr((V1012));
	V1013= CMPcar((V1012));
	goto T1893;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES-INTERNAL	*/

static object LI91(V1026,V1027)

register object V1026;object V1027;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	base[0]= (V1026);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	V1028= vs_base[0];
	base[0]= (V1026);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1946;}
	V1029= Cnil;
	goto T1945;
	goto T1946;
T1946:;
	if((V1027)==Cnil){
	V1029= Cnil;
	goto T1945;}
	if(!(((V1026))==((VV[133]->s.s_dbind)))){
	goto T1952;}
	V1030= Ct;
	goto T1951;
	goto T1952;
T1952:;
	if(!(((V1026))==((VV[182]->s.s_dbind)))){
	goto T1954;}
	V1030= Ct;
	goto T1951;
	goto T1954;
T1954:;
	if(!(((V1026))==((VV[183]->s.s_dbind)))){
	goto T1956;}
	V1030= Ct;
	goto T1951;
	goto T1956;
T1956:;
	V1030= (((V1026))==((VV[184]->s.s_dbind))?Ct:Cnil);
	goto T1951;
T1951:;
	if((V1030)==Cnil){
	goto T1949;}
	V1029= Cnil;
	goto T1945;
	goto T1949;
T1949:;
	{object V1031;
	base[0]= (V1026);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk380)(Lclptr380);
	vs_top=sup;
	V1031= vs_base[0];
	if(((V1031))==Cnil){
	goto T1961;}
	{object V1032;
	object V1033= (V1031);
	if(V1033==Cnil){
	V1029= Cnil;
	goto T1945;}
	base[0]=V1032=MMcons(Cnil,Cnil);
	goto T1963;
T1963:;
	(V1032->c.c_cdr)= (*(LnkLI381))((V1033->c.c_car),(V1027));
	while(MMcdr(V1032)!=Cnil)V1032=MMcdr(V1032);
	if((V1033=MMcdr(V1033))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V1029= base[0];
	goto T1945;}
	goto T1963;}
	goto T1961;
T1961:;
	V1029= Cnil;}
	goto T1945;
T1945:;
	{object V1035 = make_cons(V1028,V1029);
	VMR75(V1035)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASSES	*/

static object LI92(V1038,V1039)

object V1038;object V1039;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V1040;
	V1040= (*(LnkLI381))((V1038),(V1039));
	if((CMPcdr((V1040)))!=Cnil){
	goto T1967;}
	{object V1041 = (V1040);
	VMR76(V1041)}
	goto T1967;
T1967:;
	{object V1042;
	register object V1043;
	V1042= make_cons(Cnil,(V1040));
	V1043= (V1040);
	goto T1972;
T1972:;
	if((CMPcdr((V1043)))!=Cnil){
	goto T1974;}
	{object V1044 = CMPcdr((V1042));
	VMR76(V1044)}
	goto T1974;
T1974:;
	{register object V1045;
	register object V1046;
	V1045= CMPcadr((V1043));
	V1046= CMPcddr((V1043));
	{register object V1047;
	register object V1048;
	V1047= (V1046);
	V1048= CMPcar((V1047));
	goto T1985;
T1985:;
	if(!(((V1047))==Cnil)){
	goto T1986;}
	goto T1980;
	goto T1986;
T1986:;
	if(!(((V1045))==((V1048)))){
	goto T1990;}
	goto T1981;
	goto T1990;
T1990:;
	V1047= CMPcdr((V1047));
	V1048= CMPcar((V1047));
	goto T1985;}
	goto T1981;
T1981:;
	{register object V1049;
	register object V1050;
	V1049= (V1043);
	V1050= CMPcddr((V1043));
	((V1049))->c.c_cdr = (V1050);
	goto T1973;}
	goto T1980;
T1980:;
	V1043= CMPcdr((V1043));}
	goto T1973;
T1973:;
	goto T1972;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MEC-ALL-CLASS-LISTS	*/

static object LI93(V1053,V1054)

object V1053;object V1054;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	if(((V1053))!=Cnil){
	goto T2004;}
	{object V1055 = make_cons(Cnil,Cnil);
	VMR77(V1055)}
	goto T2004;
T2004:;
	{object V1056;
	object V1057;
	V1056= (*(LnkLI382))(CMPcar((V1053)),(V1054));
	V1057= (*(LnkLI383))(CMPcdr((V1053)),(V1054));
	{object V1058;
	object V1059= (V1057);
	if(V1059==Cnil){
	{object V1060 = Cnil;
	VMR77(V1060)}}
	base[2]=V1058=MMcons(Cnil,Cnil);
	goto T2008;
T2008:;
	{object V1062;
	object V1063= (V1056);
	if(V1063==Cnil){
	(V1058->c.c_cdr)= Cnil;
	goto T2009;}
	base[3]=V1062=MMcons(Cnil,Cnil);
	goto T2010;
T2010:;
	(V1062->c.c_car)= make_cons((V1063->c.c_car),(V1059->c.c_car));
	if((V1063=MMcdr(V1063))==Cnil){
	(V1058->c.c_cdr)= base[3];
	goto T2009;}
	V1062=MMcdr(V1062)=MMcons(Cnil,Cnil);
	goto T2010;}
	goto T2009;
T2009:;
	while(MMcdr(V1058)!=Cnil)V1058=MMcdr(V1058);
	if((V1059=MMcdr(V1059))==Cnil){
	base[2]=base[2]->c.c_cdr;
	{object V1065 = base[2];
	VMR77(V1065)}}
	goto T2008;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EMF-CACHE	*/

static object LI96(V1071,V1072,V1073,V1074,V1075)

object V1071;object V1072;object V1073;register object V1074;object V1075;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	base[0]= (V1075);
	base[1]= (V1073);
	base[2]= (V1072);
	base[3]= (V1071);
	{object V1076;
	register object V1077;
	base[10]= base[3];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1076= vs_base[0];
	base[5]= (*(LnkLI384))((V1076));
	base[6]= STREF(object,(V1076),8);
	if((base[5])==(small_fixnum(1))){
	goto T2018;}
	base[10]= base[5];
	vs_top=(vs_base=base+10)+1;
	Lmake_list();
	vs_top=sup;
	base[7]= vs_base[0];
	goto T2016;
	goto T2018;
T2018:;
	base[7]= Cnil;
	goto T2016;
T2016:;
	V1077= STREF(object,(V1076),28);
	base[9]= VV[185];
	if(((V1074))==Cnil){
	goto T2024;}
	{
	object V1078= (V1074);
	if(V1078==Cnil){
	goto T2022;}
	goto T2026;
T2026:;
	base[10]= (V1078->c.c_car);
	vs_top=(vs_base=base+10)+1;
	L97(base);
	vs_top=sup;
	if((V1078=MMcdr(V1078))==Cnil){
	goto T2022;}
	goto T2026;}
	goto T2024;
T2024:;
	{register object V1079;
	register object V1080;
	base[12]= base[3];
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V1079= vs_base[0];
	V1080= CMPcar((V1079));
	goto T2033;
T2033:;
	if(!(((V1079))==Cnil)){
	goto T2034;}
	goto T2022;
	goto T2034;
T2034:;
	base[12]= (V1080);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V1082= vs_base[0];
	V1083= (*(LnkLI383))(V1082,(V1077));
	{
	object V1081= /* INLINE-ARGS */V1083;
	if(V1081==Cnil){
	goto T2038;}
	goto T2039;
T2039:;
	base[12]= (V1081->c.c_car);
	vs_top=(vs_base=base+12)+1;
	L97(base);
	vs_top=sup;
	if((V1081=MMcdr(V1081))==Cnil){
	goto T2038;}
	goto T2039;}
	goto T2038;
T2038:;
	V1079= CMPcdr((V1079));
	V1080= CMPcar((V1079));
	goto T2033;}
	goto T2022;
T2022:;
	{object V1084 = base[1];
	VMR78(V1084)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CLASS-TEST	*/

static void L98()
{register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1085=base[0]->c.c_cdr;
	if(endp(V1085))invalid_macro_call();
	base[2]= (V1085->c.c_car);
	V1085=V1085->c.c_cdr;
	if(endp(V1085))invalid_macro_call();
	base[3]= (V1085->c.c_car);
	V1085=V1085->c.c_cdr;
	if(!endp(V1085))invalid_macro_call();}
	if(!((base[3])==((VV[133]->s.s_dbind)))){
	goto T2050;}
	base[4]= Ct;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2050;
T2050:;
	if(!((base[3])==((VV[182]->s.s_dbind)))){
	goto T2053;}
	base[4]= list(2,VV[186],list(3,VV[187],VV[188],list(2,VV[189],list(2,VV[190],list(2,VV[191],base[2])))));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2053;
T2053:;
	if(!((base[3])==((VV[183]->s.s_dbind)))){
	goto T2056;}
	V1086= list(2,VV[193],base[2]);
	base[4]= list(3,VV[192],/* INLINE-ARGS */V1086,list(2,VV[194],base[2]));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2056;
T2056:;
	if(!((base[3])==((VV[184]->s.s_dbind)))){
	goto T2059;}
	V1087= list(2,VV[196],base[3]);
	base[4]= list(3,VV[195],/* INLINE-ARGS */V1087,list(2,VV[197],list(2,VV[191],base[2])));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T2059;
T2059:;
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1088= vs_base[0];
	base[4]= list(3,VV[198],base[2],list(2,VV[196],V1088));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for CLASS-EQ-TEST	*/

static void L99()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1089=base[0]->c.c_cdr;
	if(endp(V1089))invalid_macro_call();
	base[2]= (V1089->c.c_car);
	V1089=V1089->c.c_cdr;
	if(endp(V1089))invalid_macro_call();
	base[3]= (V1089->c.c_car);
	V1089=V1089->c.c_cdr;
	if(!endp(V1089))invalid_macro_call();}
	V1090= list(2,VV[191],base[2]);
	base[4]= list(3,VV[187],/* INLINE-ARGS */V1090,list(2,VV[196],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for EQL-TEST	*/

static void L100()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1091=base[0]->c.c_cdr;
	if(endp(V1091))invalid_macro_call();
	base[2]= (V1091->c.c_car);
	V1091=V1091->c.c_cdr;
	if(endp(V1091))invalid_macro_call();
	base[3]= (V1091->c.c_car);
	V1091=V1091->c.c_cdr;
	if(!endp(V1091))invalid_macro_call();}
	base[4]= list(3,VV[149],base[2],list(2,VV[196],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function DNET-METHODS-P	*/

static object LI101(V1093)

object V1093;
{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	if(type_of((V1093))==t_cons){
	goto T2063;}
	{object V1094 = Cnil;
	VMR82(V1094)}
	goto T2063;
T2063:;
	if(!((CMPcar((V1093)))==(VV[104]))){
	goto T2065;}
	{object V1095 = Ct;
	VMR82(V1095)}
	goto T2065;
T2065:;
	{object V1096 = ((CMPcar((V1093)))==(VV[199])?Ct:Cnil);
	VMR82(V1096)}
	return Cnil;
}
/*	macro definition for SCASE	*/

static void L102()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1097=base[0]->c.c_cdr;
	if(endp(V1097))invalid_macro_call();
	base[2]= (V1097->c.c_car);
	V1097=V1097->c.c_cdr;
	base[3]= V1097;}
	V1098= list(2,VV[201],base[2]);
	V1099= make_cons(/* INLINE-ARGS */V1098,Cnil);
	{object V1101;
	object V1102= base[3];
	if(V1102==Cnil){
	V1100= Cnil;
	goto T2067;}
	base[4]=V1101=MMcons(Cnil,Cnil);
	goto T2068;
T2068:;
	{register object V1103;
	V1103= (V1102->c.c_car);
	if((CMPcar((V1103)))!=Cnil){
	goto T2072;}
	V1104= Cnil;
	goto T2070;
	goto T2072;
T2072:;
	if(!(type_of(CMPcar((V1103)))==t_cons)){
	goto T2075;}
	if((CMPcdar((V1103)))!=Cnil){
	goto T2078;}
	V1104= list(3,VV[149],VV[201],list(2,VV[196],CMPcaar((V1103))));
	goto T2070;
	goto T2078;
T2078:;
	V1104= list(3,VV[203],VV[201],list(2,VV[196],CMPcar((V1103))));
	goto T2070;
	goto T2075;
T2075:;
	{register object x= CMPcar((V1103)),V1105= VV[204];
	while(V1105!=Cnil)
	if(eql(x,V1105->c.c_car)){
	goto T2082;
	}else V1105=V1105->c.c_cdr;
	goto T2081;}
	goto T2082;
T2082:;
	V1104= Ct;
	goto T2070;
	goto T2081;
T2081:;
	V1104= list(3,VV[149],VV[201],list(2,VV[196],CMPcar((V1103))));
	goto T2070;
T2070:;
	(V1101->c.c_car)= listA(3,V1104,Cnil,CMPcdr((V1103)));}
	if((V1102=MMcdr(V1102))==Cnil){
	V1100= base[4];
	goto T2067;}
	V1101=MMcdr(V1101)=MMcons(Cnil,Cnil);
	goto T2068;}
	goto T2067;
T2067:;
	base[4]= list(3,VV[200],/* INLINE-ARGS */V1099,make_cons(VV[202],V1100));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for MCASE	*/

static void L103()
{register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1106=base[0]->c.c_cdr;
	if(endp(V1106))invalid_macro_call();
	base[2]= (V1106->c.c_car);
	V1106=V1106->c.c_cdr;
	base[3]= V1106;}
	base[4]= listA(3,VV[205],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for GENERATE-DISCRIMINATION-NET	*/

static void L104()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM85; VC85
	vs_check;
	{VOL object V1107;
	VOL object V1108;
	VOL object V1109;
	check_arg(4);
	V1107=(base[0]);
	V1108=(base[1]);
	V1109=(base[2]);
	base[3]=MMcons(base[3],Cnil);
	vs_top=sup;
	{VOL object V1110;
	base[6]= (V1107);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1110= vs_base[0];
	base[5]= STREF(object,(V1110),4);
	base[5]=MMcons(base[5],base[3]);
	base[6]= (V1107);
	base[7]= (V1108);
	base[8]= (V1109);
	base[9]= 
	make_cclosure_new(LC138,Cnil,base[5],Cdata);
	base[10]= 
	make_cclosure_new(LC139,Cnil,base[5],Cdata);
	base[11]= (VV[385]->s.s_gfdef);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk386)();
	return;}
	}
}
/*	local entry for function CLASS-FROM-TYPE	*/

static object LI105(V1112)

register object V1112;
{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	if(type_of((V1112))!=t_cons){
	goto T2092;}
	if(!((CMPcar((V1112)))==(Ct))){
	goto T2093;}
	goto T2092;
T2092:;
	{object V1113 = (VV[133]->s.s_dbind);
	VMR86(V1113)}
	goto T2093;
T2093:;
	{object V1114= CMPcar((V1112));
	if((V1114!= VV[211]))goto T2097;
	{register object V1115;
	register object V1116;
	V1115= CMPcdr((V1112));
	V1116= CMPcar((V1115));
	goto T2101;
T2101:;
	if(!(((V1115))==Cnil)){
	goto T2102;}
	{object V1117 = (VV[133]->s.s_dbind);
	VMR86(V1117)}
	goto T2102;
T2102:;
	if(!(type_of((V1116))==t_cons)){
	goto T2106;}
	if((CMPcar((V1116)))==(VV[186])){
	goto T2106;}
	V1112= (V1116);
	goto TTL;
	goto T2106;
T2106:;
	V1115= CMPcdr((V1115));
	V1116= CMPcar((V1115));
	goto T2101;}
	goto T2097;
T2097:;
	if((V1114!= VV[186]))goto T2118;
	{object V1118 = (VV[133]->s.s_dbind);
	VMR86(V1118)}
	goto T2118;
T2118:;
	if((V1114!= VV[149]))goto T2119;
	{object V1119 = (*(LnkLI191))(CMPcadr((V1112)));
	VMR86(V1119)}
	goto T2119;
T2119:;
	if((V1114!= VV[150]))goto T2120;
	{object V1120 = CMPcadr((V1112));
	VMR86(V1120)}
	goto T2120;
T2120:;
	if((V1114!= VV[387]))goto T2121;
	{object V1121 = CMPcadr((V1112));
	VMR86(V1121)}
	goto T2121;
T2121:;
	{object V1122 = Cnil;
	VMR86(V1122)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRECOMPUTE-EFFECTIVE-METHODS	*/

static object LI106(object V1124,object V1123,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB87 VMS87 VMV87
	bds_check;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1124,Cnil);
	Vcs[1]=MMcons(V1123,Vcs[0]);
	narg = narg - 2;
	if (narg <= 0) goto T2122;
	else {
	Vcs[2]=MMcons(first,Vcs[1]);}
	--narg; goto T2123;
	goto T2122;
T2122:;
	Vcs[2]= Cnil;
	Vcs[2]=MMcons(Vcs[2],Vcs[1]);
	goto T2123;
T2123:;
	{object V1125;
	object V1126;
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1125= vs_base[0];
	base[5]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V1126= vs_base[0];
	base[2]= STREF(object,(V1125),4);
	base[2]=MMcons(base[2],Vcs[2]);
	bds_bind(VV[210],Ct);
	base[4]=MMcons(Cnil,base[2]);
	base[5]= (Vcs[0]->c.c_car);
	base[6]= (V1126);
	base[7]= Cnil;
	base[8]= 
	make_cclosure_new(LC140,Cnil,base[4],Cdata);
	base[9]= 
	make_cclosure_new(LC141,Cnil,base[4],Cdata);
	base[10]= 
	make_cclosure_new(LC142,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk386)();
	vs_top=sup;
	{object V1127 = (base[4]->c.c_car);
	bds_unwind1;
	VMR87(V1127)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
/*	local entry for function AUGMENT-TYPE	*/

static object LI107(V1130,V1131)

register object V1130;register object V1131;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	if(((V1131))==(Ct)){
	goto T2137;}
	if(!((CMPcar((V1130)))==(VV[149]))){
	goto T2138;}
	goto T2137;
T2137:;
	{object V1132 = (V1130);
	VMR88(V1132)}
	goto T2138;
T2138:;
	{register object V1133;
	if(!(type_of((V1131))==t_cons)){
	goto T2144;}
	if(!((CMPcar((V1131)))==(VV[211]))){
	goto T2144;}
	V1133= CMPcdr((V1131));
	goto T2142;
	goto T2144;
T2144:;
	V1133= make_cons((V1131),Cnil);
	goto T2142;
T2142:;
	if((CMPcar((V1130)))==(VV[186])){
	goto T2148;}
	{object V1134;
	object V1135= (V1133);
	if(V1135==Cnil){
	V1133= Cnil;
	goto T2151;}
	base[0]=V1134=MMcons(Cnil,Cnil);
	goto T2152;
T2152:;
	base[1]= (V1130);
	base[2]= (V1135->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2155;}
	(V1134->c.c_cdr)= make_cons((V1135->c.c_car),Cnil);
	goto T2153;
	goto T2155;
T2155:;
	(V1134->c.c_cdr)= Cnil;
	goto T2153;
T2153:;
	while(MMcdr(V1134)!=Cnil)V1134=MMcdr(V1134);
	if((V1135=MMcdr(V1135))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V1133= base[0];
	goto T2151;}
	goto T2152;}
	goto T2151;
T2151:;
	goto T2148;
T2148:;
	if(((V1133))!=Cnil){
	goto T2160;}
	{object V1137 = (V1130);
	VMR88(V1137)}
	goto T2160;
T2160:;
	{object V1138 = listA(3,VV[211],(V1130),(V1133));
	VMR88(V1138)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GENERATE-DISCRIMINATION-NET-INTERNAL	*/

static void L108()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V1139;
	object V1140;
	check_arg(6);
	V1139=(base[0]);
	V1140=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1141;
	object V1142;
	base[10]= (V1139);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1141= vs_base[0];
	V1142= STREF(object,(V1141),4);
	base[8]= CMPmake_fixnum((long)(*(LnkLI388))((V1141)));
	base[9]= STREF(object,(V1141),8);
	base[10]= (V1142);
	base[11]= (V1140);
	base[12]= Cnil;
	vs_top=(vs_base=base+10)+3;
	L111(base);
	return;}
	}
}
/*	function definition for COMPUTE-SECONDARY-DISPATCH-FUNCTION	*/

static void L113()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_check;
	{object V1143;
	object V1144;
	object V1145;
	object V1146;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V1143=(base[0]);
	V1144=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2170;}
	V1145=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2171;}
	V1146=(base[3]);
	vs_top=sup;
	goto T2172;
	goto T2170;
T2170:;
	V1145= Cnil;
	goto T2171;
T2171:;
	V1146= Cnil;
	goto T2172;
T2172:;
	base[4]= (VFUN_NARGS=2,(*(LnkLI389))((V1143),(V1144)));
	base[5]= (V1145);
	base[6]= (V1146);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function COMPUTE-MCASE-PARAMETERS	*/

static object LI114(V1148)

object V1148;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	base[0]= (V1148);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V1149= vs_base[0];
	if((Ct)==(CMPcaar(V1149))){
	goto T2178;}
	base[0]= VV[212];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T2178;
T2178:;
	{object V1150;
	object V1151;
	object V1152;
	{register object V1153;
	register object V1154;
	V1153= (V1148);
	V1154= CMPcar((V1153));
	goto T2188;
T2188:;
	if(!(((V1153))==Cnil)){
	goto T2189;}
	V1150= Ct;
	goto T2184;
	goto T2189;
T2189:;
	if((CMPcar((V1154)))==(Ct)){
	goto T2193;}
	if(type_of(CMPcaar((V1154)))==t_symbol){
	goto T2193;}
	V1150= Cnil;
	goto T2184;
	goto T2193;
T2193:;
	V1153= CMPcdr((V1153));
	V1154= CMPcar((V1153));
	goto T2188;}
	goto T2184;
T2184:;
	V1155 = CMPmake_fixnum((long)length((V1148)));
	V1151= one_minus(V1155);
	if(!(number_compare((V1151),small_fixnum(1))==0)){
	goto T2206;}
	V1152= VV[213];
	goto T2204;
	goto T2206;
T2206:;
	if(((V1150))==Cnil){
	goto T2213;}
	V1156= (VV[214]->s.s_dbind);
	goto T2211;
	goto T2213;
T2213:;
	V1156= (VV[215]->s.s_dbind);
	goto T2211;
T2211:;
	if(!(number_compare((V1151),V1156)<=0)){
	goto T2209;}
	V1152= VV[216];
	goto T2204;
	goto T2209;
T2209:;
	V1152= VV[217];
	goto T2204;
T2204:;
	{object V1157 = list(2,(V1150),(V1152));
	VMR91(V1157)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for MLOOKUP	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1158=base[0]->c.c_cdr;
	if(endp(V1158))invalid_macro_call();
	base[2]= (V1158->c.c_car);
	V1158=V1158->c.c_cdr;
	if(endp(V1158))invalid_macro_call();
	base[3]= (V1158->c.c_car);
	V1158=V1158->c.c_cdr;
	if(endp(V1158))invalid_macro_call();
	base[4]= (V1158->c.c_car);
	V1158=V1158->c.c_cdr;
	if(endp(V1158)){
	base[5]= Cnil;
	} else {
	base[5]= (V1158->c.c_car);
	V1158=V1158->c.c_cdr;}
	if(endp(V1158)){
	base[6]= Cnil;
	} else {
	base[6]= (V1158->c.c_car);
	V1158=V1158->c.c_cdr;}
	if(!endp(V1158))invalid_macro_call();}
	if((base[5])==(Ct)){
	goto T2217;}
	if((base[5])==Cnil){
	goto T2217;}
	base[7]= VV[218];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	goto T2217;
T2217:;
	{object V1160= base[6];
	if((V1160!= VV[213]))goto T2223;
	if((base[5])==Cnil){
	goto T2226;}
	V1161= VV[187];
	goto T2224;
	goto T2226;
T2226:;
	V1161= VV[149];
	goto T2224;
T2224:;
	V1162= list(3,V1161,base[2],list(2,VV[219],base[3]));
	base[7]= list(4,VV[207],/* INLINE-ARGS */V1162,list(2,VV[220],base[3]),base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2223;
T2223:;
	if((V1160!= VV[216]))goto T2228;
	V1163= list(3,VV[222],base[3],base[4]);
	if((base[5])==Cnil){
	goto T2231;}
	V1164= VV[187];
	goto T2229;
	goto T2231;
T2231:;
	V1164= VV[149];
	goto T2229;
T2229:;
	base[7]= list(3,VV[221],/* INLINE-ARGS */V1163,list(3,VV[223],list(3,V1164,VV[224],base[2]),VV[225]));
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2228;
T2228:;
	if((V1160!= VV[217]))goto T2233;
	base[7]= list(4,VV[226],base[2],base[3],base[4]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T2233;
T2233:;
	base[7]= VV[33];
	base[8]= VV[34];
	base[9]= VV[227];
	base[10]= VV[36];
	base[11]= base[6];
	base[12]= VV[37];
	base[13]= VV[228];
	base[14]= VV[39];
	base[15]= VV[229];
	vs_top=(vs_base=base+7)+9;
	(void) (*Lnk390)();
	return;}
}
/*	local entry for function NET-TEST-CONVERTER	*/

static object LI116(V1166)

register object V1166;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	if(!(type_of((V1166))!=t_cons)){
	goto T2244;}
	{object V1167 = (*(LnkLI391))((V1166));
	VMR93(V1167)}
	goto T2244;
T2244:;
	{object V1168= CMPcar((V1166));
	if((V1168!= VV[392])
	&& (V1168!= VV[393]))goto T2246;
	{object V1169 = VV[230];
	VMR93(V1169)}
	goto T2246;
T2246:;
	if((V1168!= VV[104]))goto T2247;
	{object V1170 = VV[231];
	VMR93(V1170)}
	goto T2247;
T2247:;
	if((V1168!= VV[199]))goto T2248;
	{object V1171 = VV[232];
	VMR93(V1171)}
	goto T2248;
T2248:;
	if((V1168!= VV[206]))goto T2249;
	V1172= CMPcadr((V1166));
	{object V1173 = listA(5,VV[233],/* INLINE-ARGS */V1172,Cnil,Cnil,(*(LnkLI394))(CMPcddr((V1166))));
	VMR93(V1173)}
	goto T2249;
T2249:;
	{object V1174 = (*(LnkLI391))((V1166));
	VMR93(V1174)}}
	return Cnil;
}
/*	function definition for NET-CODE-CONVERTER	*/

static void L117()
{register object *base=vs_base;
	register object *sup=base+VM94; VC94
	vs_check;
	{register object V1175;
	check_arg(1);
	V1175=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1175))!=t_cons)){
	goto T2251;}
	base[1]= (V1175);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk395)();
	return;
	goto T2251;
T2251:;
	{object V1176= CMPcar((V1175));
	if((V1176!= VV[104])
	&& (V1176!= VV[199]))goto T2254;
	{object V1177;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1177= vs_base[0];
	base[1]= (V1177);
	base[2]= make_cons((V1177),Cnil);
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2254;
T2254:;
	if((V1176!= VV[206]))goto T2258;
	{object V1178;
	object V1179;
	object V1180;
	V1178= (*(LnkLI394))(CMPcddr((V1175)));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1179= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V1180= vs_base[0];
	base[1]= listA(5,VV[233],CMPcadr((V1175)),(V1179),(V1180),(V1178));
	base[2]= list(2,(V1179),(V1180));
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T2258;
T2258:;
	base[1]= (V1175);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk395)();
	return;}
	}
}
/*	local entry for function NET-CONSTANT-CONVERTER	*/

static object LI118(V1183,V1184)

register object V1183;object V1184;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;{object V1185;
	{object V1186;
	V1186= (*(LnkLI396))((V1183),(V1184));
	if(((V1186))==Cnil){
	goto T2269;}
	V1185= make_cons((V1186),Cnil);
	goto T2266;
	goto T2269;
T2269:;
	V1185= Cnil;}
	goto T2266;
T2266:;
	if(V1185==Cnil)goto T2265;
	{object V1187 = V1185;
	VMR95(V1187)}
	goto T2265;
T2265:;}
	if(!(type_of((V1183))!=t_cons)){
	goto T2272;}
	{object V1188 = (*(LnkLI397))((V1183));
	VMR95(V1188)}
	goto T2272;
T2272:;
	{object V1189= CMPcar((V1183));
	if((V1189!= VV[206]))goto T2274;
	{object V1190;
	object V1191;
	object V1192;
	V1190= (*(LnkLI394))(CMPcddr((V1183)));
	{object V1193;
	object V1194= CMPcddr((V1183));
	if(V1194==Cnil){
	V1191= Cnil;
	goto T2276;}
	base[3]=V1193=MMcons(Cnil,Cnil);
	goto T2277;
T2277:;
	{object V1196;
	object V1197;
	V1196= CMPcar((V1194->c.c_car));
	V1197= CMPcadr((V1194->c.c_car));
	if(!(type_of((V1196))==t_cons)){
	goto T2283;}
	V1198= CMPcar((V1196));
	goto T2281;
	goto T2283;
T2283:;
	V1198= (V1196);
	goto T2281;
T2281:;
	V1199= (*(LnkLI396))((V1197),(V1184));
	(V1193->c.c_car)= make_cons(V1198,/* INLINE-ARGS */V1199);}
	if((V1194=MMcdr(V1194))==Cnil){
	V1191= base[3];
	goto T2276;}
	V1193=MMcdr(V1193)=MMcons(Cnil,Cnil);
	goto T2277;}
	goto T2276;
T2276:;
	base[3]= (V1191);
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V1200= vs_base[0];
	V1192= CMPcar(V1200);
	base[3]= (V1191);
	vs_top=(vs_base=base+3)+1;
	Lnbutlast();
	vs_top=sup;
	V1201= vs_base[0];
	{object V1202 = list(2,listA(3,VV[234],(V1190),V1201),CMPcdr((V1192)));
	VMR95(V1202)}}
	goto T2274;
T2274:;
	{object V1203 = (*(LnkLI397))((V1183));
	VMR95(V1203)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHODS-CONVERTER	*/

static object LI119(V1206,V1207)

register object V1206;object V1207;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	if(!(type_of((V1206))==t_cons)){
	goto T2291;}
	if(!((CMPcar((V1206)))==(VV[104]))){
	goto T2291;}
	V1208= (VFUN_NARGS=2,(*(LnkLI398))((V1207),CMPcadr((V1206))));
	{object V1209 = make_cons(VV[231],/* INLINE-ARGS */V1208);
	VMR96(V1209)}
	goto T2291;
T2291:;
	if(!(type_of((V1206))==t_cons)){
	goto T2296;}
	if(!((CMPcar((V1206)))==(VV[199]))){
	goto T2296;}
	{object V1210 = (*(LnkLI399))((V1207));
	VMR96(V1210)}
	goto T2296;
T2296:;
	{object V1211 = Cnil;
	VMR96(V1211)}
	return Cnil;
}
/*	function definition for CONVERT-METHODS	*/

static void L120()
{register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_check;
	{register object V1212;
	object V1213;
	object V1214;
	check_arg(3);
	V1212=(base[0]);
	V1213=(base[1]);
	V1214=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V1212))==t_cons)){
	goto T2301;}
	if(!((CMPcar((V1212)))==(VV[231]))){
	goto T2301;}
	base[3]= CMPcdr((V1212));
	base[4]= (V1213);
	base[5]= (V1214);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2301;
T2301:;
	base[3]= (V1212);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function CONVERT-TABLE	*/

static object LI121(V1218,V1219,V1220)

object V1218;object V1219;object V1220;
{	 VMB98 VMS98 VMV98
	goto TTL;
TTL:;
	if(!(type_of((V1218))==t_cons)){
	goto T2309;}
	if(!((CMPcar((V1218)))==(VV[234]))){
	goto T2309;}
	{object V1221;
	object V1222;
	{object V1223;
	object V1224= CMPcddr((V1218));
	if(V1224==Cnil){
	V1221= Cnil;
	goto T2313;}
	base[0]=V1223=MMcons(Cnil,Cnil);
	goto T2314;
T2314:;
	V1226= CMPcar((V1224->c.c_car));
	base[1]= CMPcdr((V1224->c.c_car));
	base[2]= (V1219);
	base[3]= (V1220);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk400)();
	vs_top=sup;
	V1227= vs_base[0];
	(V1223->c.c_car)= make_cons(/* INLINE-ARGS */V1226,V1227);
	if((V1224=MMcdr(V1224))==Cnil){
	V1221= base[0];
	goto T2313;}
	V1223=MMcdr(V1223)=MMcons(Cnil,Cnil);
	goto T2314;}
	goto T2313;
T2313:;
	V1222= CMPcadr((V1218));
	{object V1228;
	V1228= CMPcadr((V1222));
	{object V1229= (V1228);
	if((V1229!= VV[213]))goto T2322;
	{object V1230 = CMPcar((V1221));
	VMR98(V1230)}
	goto T2322;
T2322:;
	if((V1229!= VV[216]))goto T2323;
	{object V1231 = (V1221);
	VMR98(V1231)}
	goto T2323;
T2323:;
	if((V1229!= VV[217]))goto T2324;
	{register object V1232;
	base[0]= VV[235];
	if((CMPcar((V1222)))==Cnil){
	goto T2329;}
	base[1]= VV[187];
	goto T2327;
	goto T2329;
T2329:;
	base[1]= VV[149];
	goto T2327;
T2327:;
	vs_top=(vs_base=base+0)+2;
	Lmake_hash_table();
	vs_top=sup;
	V1232= vs_base[0];
	{register object V1233;
	register object V1234;
	V1233= (V1221);
	V1234= CMPcar((V1233));
	goto T2335;
T2335:;
	if(!(((V1233))==Cnil)){
	goto T2336;}
	goto T2331;
	goto T2336;
T2336:;
	{register object V1235;
	register object V1236;
	register object V1237;
	V1235= CMPcar((V1234));
	V1236= (V1232);
	V1237= CMPcdr((V1234));
	base[3]= (V1235);
	base[4]= (V1236);
	base[5]= (V1237);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1233= CMPcdr((V1233));
	V1234= CMPcar((V1233));
	goto T2335;}
	goto T2331;
T2331:;
	{object V1238 = (V1232);
	VMR98(V1238)}}
	goto T2324;
T2324:;
	base[0]= VV[33];
	base[1]= VV[34];
	base[2]= VV[227];
	base[3]= VV[36];
	base[4]= (V1228);
	base[5]= VV[37];
	base[6]= VV[236];
	base[7]= VV[39];
	base[8]= VV[237];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk390)();
	vs_top=sup;
	{object V1239 = vs_base[0];
	VMR98(V1239)}}}}
	goto T2309;
T2309:;
	{object V1240 = Cnil;
	VMR98(V1240)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-SECONDARY-DISPATCH-FUNCTION1	*/

static object LI122(object V1242,object V1241,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB99 VMS99 VMV99
	{object V1243;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V1242,Cnil);
	V1243= V1241;
	narg = narg - 2;
	if (narg <= 0) goto T2361;
	else {
	Vcs[2]=MMcons(first,Vcs[0]);}
	--narg; goto T2362;
	goto T2361;
T2361:;
	Vcs[2]= Cnil;
	Vcs[2]=MMcons(Vcs[2],Vcs[0]);
	goto T2362;
T2362:;
	if(!((CMPcar((V1243)))==(VV[104]))){
	goto T2365;}
	if(((Vcs[2]->c.c_car))!=Cnil){
	goto T2365;}
	{object V1244 = (VFUN_NARGS=2,(*(LnkLI398))((Vcs[0]->c.c_car),CMPcadr((V1243))));
	VMR99(V1244)}
	goto T2365;
T2365:;
	{object V1245;
	object V1246;
	object V1247;
	object V1248;
	base[6]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Vcs[2]);
	base[6]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1245= vs_base[0];
	V1246= STREF(object,(V1245),8);
	V1247= (*(LnkLI401))((V1245));
	V1249 = CMPmake_fixnum((long)length((V1246)));
	base[4]= make_cons(V1249,(V1247));
	base[4]=MMcons(base[4],base[0]);
	if(((Vcs[2]->c.c_car))==Cnil){
	goto T2378;}
	V1248= (*(LnkLI402))((V1246),(V1247));
	goto T2376;
	goto T2378;
T2378:;
	V1248= (*(LnkLI403))((V1246),(V1247));
	goto T2376;
T2376:;
	if(((Vcs[2]->c.c_car))!=Cnil){
	goto T2384;}
	V1250= VV[239];
	goto T2382;
	goto T2384;
T2384:;
	V1250= Cnil;
	goto T2382;
T2382:;
	V1251= list(2,VV[242],(V1243));
	V1252= make_cons(/* INLINE-ARGS */V1251,Cnil);
	V1253= list(3,VV[240],VV[241],list(3,VV[200],/* INLINE-ARGS */V1252,(VFUN_NARGS=3,(*(LnkLI404))((V1246),(V1247),VV[242]))));
	V1254= make_cons(/* INLINE-ARGS */V1253,Cnil);
	base[8]= listA(3,VV[238],(V1248),append(V1250,/* INLINE-ARGS */V1254));
	base[9]= (VV[405]->s.s_gfdef);
	base[10]= (VV[406]->s.s_gfdef);
	base[11]= 
	make_cclosure_new(LC143,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T2389;}
	base[6]=MMcons(vs_base[0],base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2390;}
	base[7]=MMcons(vs_base[0],base[6]);
	vs_top=sup;
	goto T2391;
	goto T2389;
T2389:;
	base[6]=MMcons(Cnil,base[4]);
	goto T2390;
T2390:;
	base[7]=MMcons(Cnil,base[6]);
	goto T2391;
T2391:;
	{object V1255 = 
	make_cclosure_new(LC144,Cnil,base[7],Cdata);
	VMR99(V1255)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-UNORDERED-METHODS-EMF	*/

static object LI124(V1258,V1259)

object V1258;object V1259;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	base[0]=MMcons((V1259),Cnil);
	base[1]=MMcons((V1258),base[0]);
	if(((VV[245]->s.s_dbind))==Cnil){
	goto T2392;}
	base[2]= Ct;
	base[3]= VV[246];
	base[5]= (base[1]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T2392;
T2392:;
	{object V1260 = 
	make_cclosure_new(LC145,Cnil,base[1],Cdata);
	VMR100(V1260)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SLOT-VALUE-USING-CLASS-DFUN	*/

static void L125()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V1261;
	object V1262;
	object V1263;
	check_arg(3);
	V1261=(base[0]);
	V1262=(base[1]);
	V1263=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1263);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk408)(Lclptr408);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1262);
	vs_top=(vs_base=base+4)+1;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for SETF-SLOT-VALUE-USING-CLASS-DFUN	*/

static void L126()
{register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V1264;
	object V1265;
	object V1266;
	object V1267;
	check_arg(4);
	V1264=(base[0]);
	V1265=(base[1]);
	V1266=(base[2]);
	V1267=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]= (V1267);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk409)(Lclptr409);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V1264);
	base[6]= (V1266);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for SLOT-BOUNDP-USING-CLASS-DFUN	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_check;
	{object V1268;
	object V1269;
	object V1270;
	check_arg(3);
	V1268=(base[0]);
	V1269=(base[1]);
	V1270=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1270);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk410)(Lclptr410);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V1269);
	vs_top=(vs_base=base+4)+1;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for (FAST-METHOD COMPUTE-DISCRIMINATING-FUNCTION (STANDARD-GENERIC-FUNCTION))	*/

static void L128()
{register object *base=vs_base;
	register object *sup=base+VM104; VC104
	vs_check;
	{register object V1271;
	object V1272;
	register object V1273;
	check_arg(3);
	V1271=(base[0]);
	V1272=(base[1]);
	V1273=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1275;
	object V1276;
	V1275= CMPcar((V1271));
	V1276= CMPcdr((V1271));
	{object V1277;
	if(type_of(V1273)==t_structure){
	goto T2419;}
	goto T2417;
	goto T2419;
T2419:;
	if(!(((V1273)->str.str_def)==(VV[251]))){
	goto T2417;}
	V1277= STREF(object,(V1273),4);
	goto T2415;
	goto T2417;
T2417:;{object V1279;
	V1279= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1273);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V1280= vs_base[0];
	if(!((V1279)==(CMPcar(V1280)))){
	goto T2422;}}
	V1277= CMPcar(((V1273))->cc.cc_turbo[12]);
	goto T2415;
	goto T2422;
T2422:;
	V1277= Cnil;
	goto T2415;
T2415:;
	{register object V1282;
	{register object V1283;
	V1283= ((V1275))->v.v_self[2];
	if(!(type_of(V1283)==t_fixnum)){
	goto T2433;}
	V1283= ((V1277))->v.v_self[fix((V1283))];
	goto T2431;
	goto T2433;
T2433:;
	V1283= VV[14];
	goto T2431;
T2431:;
	if(!(((V1283))==(VV[14]))){
	goto T2436;}
	base[3]= (V1273);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk411)(Lclptr411);
	vs_top=sup;
	V1282= vs_base[0];
	goto T2428;
	goto T2436;
T2436:;
	V1282= (V1283);}
	goto T2428;
T2428:;
	if(!(((V1282))==Cnil)){
	goto T2440;}
	{object V1285;
	base[3]= (V1273);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V1285= vs_base[0];
	if(!(((V1285))==(VV[157]))){
	goto T2444;}
	(void)((*(LnkLI412))((V1273)));
	goto T2444;
T2444:;
	if(!(((V1285))==(VV[248]))){
	goto T2448;}
	base[3]= (V1273);
	base[4]= VV[161];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk413)();
	vs_top=sup;
	base[3]= (VV[414]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2448;
T2448:;
	if(!(equal((V1285),VV[249]))){
	goto T2454;}
	base[3]= (V1273);
	base[4]= VV[163];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk413)();
	vs_top=sup;
	base[3]= (VV[415]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2454;
T2454:;
	if(!(((V1285))==(VV[250]))){
	goto T2460;}
	base[3]= (V1273);
	base[4]= VV[165];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk413)();
	vs_top=sup;
	base[3]= (VV[416]->s.s_gfdef);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2460;
T2460:;
	{register object V1287;
	V1287= ((V1275))->v.v_self[1];
	if(!(type_of(V1287)==t_fixnum)){
	goto T2473;}
	V1287= ((V1277))->v.v_self[fix((V1287))];
	goto T2471;
	goto T2473;
T2473:;
	V1287= VV[14];
	goto T2471;
T2471:;
	if(!(((V1287))==(VV[14]))){
	goto T2476;}
	base[3]= (V1273);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V1286= vs_base[0];
	goto T2468;
	goto T2476;
T2476:;
	V1286= (V1287);}
	goto T2468;
T2468:;
	if((STREF(object,V1286,28))==Cnil){
	goto T2466;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI417))((V1273)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2466;
T2466:;
	base[3]= (*(LnkLI418))((V1273));
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2440;
T2440:;
	base[3]= (V1282);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2480;}
	{register object V1289;
	V1289= ((V1275))->v.v_self[2];
	if(!(type_of(V1289)==t_fixnum)){
	goto T2487;}
	V1289= ((V1277))->v.v_self[fix((V1289))];
	goto T2485;
	goto T2487;
T2487:;
	V1289= VV[14];
	goto T2485;
T2485:;
	if(!(((V1289))==(VV[14]))){
	goto T2490;}
	base[3]= (V1273);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk411)(Lclptr411);
	return;
	goto T2490;
T2490:;
	base[3]= (V1289);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2480;
T2480:;
	if(!(type_of((V1282))==t_cons)){
	goto T2494;}
	{register object V1292;
	V1292= ((V1275))->v.v_self[2];
	if(!(type_of(V1292)==t_fixnum)){
	goto T2501;}
	V1292= ((V1277))->v.v_self[fix((V1292))];
	goto T2499;
	goto T2501;
T2501:;
	V1292= VV[14];
	goto T2499;
T2499:;
	if(!(((V1292))==(VV[14]))){
	goto T2504;}
	base[3]= (V1273);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk411)(Lclptr411);
	vs_top=sup;
	V1291= vs_base[0];
	goto T2496;
	goto T2504;
T2504:;
	V1291= (V1292);}
	goto T2496;
T2496:;
	base[3]= CMPcar(V1291);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2494;
T2494:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}}
	}
}
/*	local entry for function (FAST-METHOD UPDATE-GF-DFUN (STD-CLASS T))	*/

static object LI129(V1298,V1299,V1300,V1301)

object V1298;object V1299;object V1300;register object V1301;
{	 VMB105 VMS105 VMV105
	bds_check;
	goto TTL;
TTL:;
	{object V1303;
	base[1]= (V1301);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk362)(Lclptr362);
	vs_top=sup;
	V1303= vs_base[0];
	bds_bind(VV[168],(V1300));
	if((STREF(object,(V1303),28))==Cnil){
	goto T2512;}
	{object V1304;
	object V1305;
	object V1306;
	base[1]= (V1301);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk419)();
	if(vs_base>=vs_top){vs_top=sup;goto T2516;}
	V1304= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2517;}
	V1305= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2518;}
	V1306= vs_base[0];
	vs_top=sup;
	goto T2519;
	goto T2516;
T2516:;
	V1304= Cnil;
	goto T2517;
T2517:;
	V1305= Cnil;
	goto T2518;
T2518:;
	V1306= Cnil;
	goto T2519;
T2519:;
	(void)((VFUN_NARGS=4,(*(LnkLI420))((V1301),(V1304),(V1305),(V1306))));
	{object V1307 = (VFUN_NARGS=4,(*(LnkLI339))((V1301),(V1304),(V1305),(V1306)));
	bds_unwind1;
	VMR105(V1307)}}
	goto T2512;
T2512:;
	{object V1308 = Cnil;
	bds_unwind1;
	VMR105(V1308)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD FUNCTION-KEYWORDS (STANDARD-METHOD))	*/

static void L130()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{object V1309;
	object V1310;
	register object V1311;
	check_arg(3);
	V1309=(base[0]);
	V1310=(base[1]);
	V1311=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1313;
	object V1314;
	object V1315;
	object V1316;
	object V1317;
	object V1318;
	if(!(type_of((V1311))==t_cons)){
	goto T2526;}
	base[3]= (*(LnkLI421))((V1311));
	goto T2524;
	goto T2526;
T2526:;
	base[4]= (V1311);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T2524;
T2524:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk422)();
	if(vs_base>=vs_top){vs_top=sup;goto T2529;}
	V1313= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2530;}
	V1314= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2531;}
	V1315= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2532;}
	V1316= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2533;}
	V1317= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2534;}
	V1318= vs_base[0];
	vs_top=sup;
	goto T2535;
	goto T2529;
T2529:;
	V1313= Cnil;
	goto T2530;
T2530:;
	V1314= Cnil;
	goto T2531;
T2531:;
	V1315= Cnil;
	goto T2532;
T2532:;
	V1316= Cnil;
	goto T2533;
T2533:;
	V1317= Cnil;
	goto T2534;
T2534:;
	V1318= Cnil;
	goto T2535;
T2535:;
	base[3]= (V1318);
	base[4]= (V1317);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	local entry for function METHOD-LL->GENERIC-FUNCTION-LL	*/

static object LI131(V1320)

object V1320;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1321;
	object V1322;
	object V1323;
	object V1324;
	object V1325;
	object V1326;
	base[1]= (V1320);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk422)();
	if(vs_base>=vs_top){vs_top=sup;goto T2540;}
	V1321= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2541;}
	V1322= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2542;}
	V1323= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2543;}
	V1324= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2544;}
	V1325= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2545;}
	V1326= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2546;}
	base[0]=MMcons(vs_base[0],Cnil);
	vs_top=sup;
	goto T2547;
	goto T2540;
T2540:;
	V1321= Cnil;
	goto T2541;
T2541:;
	V1322= Cnil;
	goto T2542;
T2542:;
	V1323= Cnil;
	goto T2543;
T2543:;
	V1324= Cnil;
	goto T2544;
T2544:;
	V1325= Cnil;
	goto T2545;
T2545:;
	V1326= Cnil;
	goto T2546;
T2546:;
	base[0]=MMcons(Cnil,Cnil);
	goto T2547;
T2547:;
	base[1]= 
	make_cclosure_new(LC146,Cnil,base[0],Cdata);
	base[2]= (V1320);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk423)();
	vs_top=sup;
	{object V1327 = vs_base[0];
	VMR107(V1327)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD GENERIC-FUNCTION-PRETTY-ARGLIST (STANDARD-GENERIC-FUNCTION))	*/

static object LI132(V1331,V1332,V1333)

object V1331;object V1332;object V1333;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V1335;
	object V1336;
	base[0]= (V1333);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V1335= vs_base[0];
	V1336= Cnil;
	if(((V1335))==Cnil){
	goto T2555;}
	{object V1337;
	object V1338;
	object V1339;
	register object V1340;
	register object V1341;
	base[0]= CMPcar((V1335));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk424)(Lclptr424);
	if(vs_base>=vs_top){vs_top=sup;goto T2559;}
	V1337= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2560;}
	V1338= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2561;}
	V1339= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2562;}
	V1340= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2563;}
	V1341= vs_base[0];
	vs_top=sup;
	goto T2564;
	goto T2559;
T2559:;
	V1337= Cnil;
	goto T2560;
T2560:;
	V1338= Cnil;
	goto T2561;
T2561:;
	V1339= Cnil;
	goto T2562;
T2562:;
	V1340= Cnil;
	goto T2563;
T2563:;
	V1341= Cnil;
	goto T2564;
T2564:;
	{register object V1342;
	register object V1343;
	V1342= CMPcdr((V1335));
	V1343= CMPcar((V1342));
	goto T2569;
T2569:;
	if(!(((V1342))==Cnil)){
	goto T2570;}
	goto T2565;
	goto T2570;
T2570:;
	{register object V1344;
	register object V1345;
	register object V1346;
	base[2]= (V1343);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk425)(Lclptr425);
	if(vs_base>=vs_top){vs_top=sup;goto T2577;}
	V1344= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2578;}
	V1345= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2579;}
	V1346= vs_base[0];
	vs_top=sup;
	goto T2580;
	goto T2577;
T2577:;
	V1344= Cnil;
	goto T2578;
T2578:;
	V1345= Cnil;
	goto T2579;
T2579:;
	V1346= Cnil;
	goto T2580;
T2580:;
	base[2]= (V1340);
	base[3]= (V1346);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk426)();
	vs_top=sup;
	V1340= vs_base[0];
	if((V1341)!=Cnil){
	goto T2585;}
	V1341= (V1345);
	goto T2585;
T2585:;}
	V1342= CMPcdr((V1342));
	V1343= CMPcar((V1342));
	goto T2569;}
	goto T2565;
T2565:;
	if(((V1341))==Cnil){
	goto T2591;}
	V1336= VV[253];
	goto T2591;
T2591:;
	if(((V1340))==Cnil){
	goto T2595;}
	base[0]= make_cons(VV[254],Cnil);
	base[1]= (V1340);
	base[2]= (V1336);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1336= vs_base[0];
	goto T2595;
T2595:;
	if(((V1339))==Cnil){
	goto T2602;}
	V1347= list(2,VV[135],(V1339));
	V1336= nconc(/* INLINE-ARGS */V1347,(V1336));
	goto T2602;
T2602:;
	if(((V1338))==Cnil){
	goto T2606;}
	base[0]= make_cons(VV[255],Cnil);
	base[1]= (V1338);
	base[2]= (V1336);
	vs_top=(vs_base=base+0)+3;
	Lnconc();
	vs_top=sup;
	V1336= vs_base[0];
	goto T2606;
T2606:;
	{object V1348 = nconc((V1337),(V1336));
	VMR108(V1348)}}
	goto T2555;
T2555:;
	{object V1349 = Cnil;
	VMR108(V1349)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD METHOD-PRETTY-ARGLIST (STANDARD-METHOD))	*/

static void L133()
{register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{object V1350;
	object V1351;
	object V1352;
	check_arg(3);
	V1350=(base[0]);
	V1351=(base[1]);
	V1352=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1354;
	register object V1355;
	object V1356;
	register object V1357;
	object V1358;
	register object V1359;
	object V1360;
	base[3]= (V1352);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	V1360= vs_base[0];
	V1354= Cnil;
	V1355= Cnil;
	V1356= Cnil;
	V1357= Cnil;
	V1358= Cnil;
	V1359= VV[256];
	{register object V1361;
	register object V1362;
	V1361= (V1360);
	V1362= CMPcar((V1361));
	goto T2621;
T2621:;
	if(!(((V1361))==Cnil)){
	goto T2622;}
	goto T2617;
	goto T2622;
T2622:;
	if(!(((V1362))==(VV[255]))){
	goto T2628;}
	V1359= VV[257];
	goto T2626;
	goto T2628;
T2628:;
	if(!(((V1362))==(VV[135]))){
	goto T2632;}
	V1359= VV[258];
	goto T2626;
	goto T2632;
T2632:;
	if(!(((V1362))==(VV[254]))){
	goto T2636;}
	V1359= VV[259];
	goto T2626;
	goto T2636;
T2636:;
	if(!(((V1362))==(VV[252]))){
	goto T2640;}
	V1358= Ct;
	goto T2626;
	goto T2640;
T2640:;
	{register object V1363;
	{register object x= (V1362),V1364= VV[128];
	while(V1364!=Cnil)
	if(x==(V1364->c.c_car)){
	V1363= V1364;
	goto T2643;
	}else V1364=V1364->c.c_cdr;
	V1363= Cnil;}
	goto T2643;
T2643:;
	if(((V1363))==Cnil){
	goto T2645;}
	goto T2626;
	goto T2645;
T2645:;
	{register object V1365;
	V1365= (V1359);
	{object V1366= (V1365);
	if((V1366!= VV[256]))goto T2647;
	V1354= make_cons(V1362,(V1354));
	goto T2626;
	goto T2647;
T2647:;
	if((V1366!= VV[257]))goto T2649;
	V1355= make_cons(V1362,(V1355));
	goto T2626;
	goto T2649;
T2649:;
	if((V1366!= VV[259]))goto T2651;
	V1357= make_cons(V1362,(V1357));
	goto T2626;
	goto T2651;
T2651:;
	if((V1366!= VV[258]))goto T2653;
	V1356= (V1362);
	goto T2626;
	goto T2653;
T2653:;
	base[4]= VV[33];
	base[5]= VV[34];
	base[6]= VV[227];
	base[7]= VV[36];
	base[8]= (V1365);
	base[9]= VV[37];
	base[10]= VV[262];
	base[11]= VV[39];
	base[12]= VV[263];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk390)();
	vs_top=sup;}}}
	goto T2626;
T2626:;
	V1361= CMPcdr((V1361));
	V1362= CMPcar((V1361));
	goto T2621;}
	goto T2617;
T2617:;
	base[3]= nreverse((V1354));
	base[4]= nreverse((V1355));
	base[5]= (V1356);
	base[6]= nreverse((V1357));
	base[7]= (V1358);
	vs_top=(vs_base=base+3)+5;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC146(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM110; VC110
	vs_check;
	{object V1370;
	check_arg(1);
	V1370=(base[0]);
	vs_top=sup;{object V1371;
	{register object x= (V1370),V1372= (base0[0]->c.c_car);
	while(V1372!=Cnil)
	if(x==(V1372->c.c_car)){
	V1371= V1372;
	goto T2675;
	}else V1372=V1372->c.c_cdr;
	V1371= Cnil;}
	goto T2675;
T2675:;
	if(V1371==Cnil)goto T2674;
	base[1]= V1371;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2674;
T2674:;}
	base[1]= (((V1370))==(VV[252])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC145(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{object V1373;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1373=(base[0]);
	vs_top=sup;
	{object V1374;
	object V1375;
	object V1376;
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1373);
	base[6]= VV[149];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk346)();
	vs_top=sup;
	V1374= vs_base[0];
	V1375= (*(LnkLI427))((base0[0]->c.c_car),(base0[1]->c.c_car),(V1374));
	base[4]= (base0[0]->c.c_car);
	base[5]= (V1375);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk359)();
	vs_top=sup;
	V1376= vs_base[0];
	base[4]= (V1376);
	base[5]= (V1373);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk428)();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC144(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM112; VC112
	vs_check;
	{object V1377;
	object V1378;
	check_arg(2);
	V1377=(base[0]);
	V1378=(base[1]);
	vs_top=sup;
	{object V1379;
	object V1380;
	V1379= make_cons(Cnil,Cnil);
	V1380= (V1379);
	{register object V1381;
	register object V1382;
	V1381= (base0[0]->c.c_car);
	V1382= CMPcar((V1381));
	goto T2692;
T2692:;
	if(!(((V1381))==Cnil)){
	goto T2693;}
	goto T2688;
	goto T2693;
T2693:;
	{object V1383;
	register object V1384;{object V1385;
	{register object V1386;
	register object V1387;
	V1386= (V1379);
	V1387= CMPcar((V1386));
	goto T2704;
T2704:;
	if(!(((V1386))==Cnil)){
	goto T2705;}
	V1385= Cnil;
	goto T2700;
	goto T2705;
T2705:;
	if(!((CMPcar((V1387)))==((V1382)))){
	goto T2709;}
	V1385= (V1387);
	goto T2700;
	goto T2709;
T2709:;
	V1386= CMPcdr((V1386));
	V1387= CMPcar((V1386));
	goto T2704;}
	goto T2700;
T2700:;
	if(V1385==Cnil)goto T2699;
	V1383= V1385;
	goto T2698;
	goto T2699;
T2699:;}{object V1389;
	V1389= (*(LnkLI429))((V1382),(V1377),(V1378));
	if(V1389==Cnil)goto T2718;
	V1388= V1389;
	goto T2717;
	goto T2718;
T2718:;}
	base[6]= (V1382);
	base[7]= (V1377);
	base[8]= (V1378);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk400)();
	vs_top=sup;
	V1388= vs_base[0];
	goto T2717;
T2717:;
	V1383= make_cons((V1382),V1388);
	goto T2698;
T2698:;
	V1384= make_cons((V1383),Cnil);
	{register object V1391;
	V1391= (V1384);
	(V1380)->c.c_cdr = (V1391);}
	V1380= (V1384);}
	V1381= CMPcdr((V1381));
	V1382= CMPcar((V1381));
	goto T2692;}
	goto T2688;
T2688:;
	{object V1392;
	base[3]= (base0[1]->c.c_car);
	{object V1393;
	{object V1394;
	object V1395= CMPcdr((V1379));
	if(V1395==Cnil){
	V1393= Cnil;
	goto T2735;}
	base[4]=V1394=MMcons(Cnil,Cnil);
	goto T2736;
T2736:;
	(V1394->c.c_car)= CMPcdr((V1395->c.c_car));
	if((V1395=MMcdr(V1395))==Cnil){
	V1393= base[4];
	goto T2735;}
	V1394=MMcdr(V1394)=MMcons(Cnil,Cnil);
	goto T2736;}
	goto T2735;
T2735:;
	 vs_top=base+4;
	 while(V1393!=Cnil)
	 {vs_push((V1393)->c.c_car);V1393=(V1393)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1392= vs_base[0];
	if(((base0[4]->c.c_car))==Cnil){
	goto T2739;}
	base[3]= (V1392);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2739;
T2739:;
	base[3]= (V1392);
	base[4]= list(2,VV[243],(base0[3]->c.c_car));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk309)();
	vs_top=sup;
	V1396= vs_base[0];
	base[3]= (VFUN_NARGS=4,(*(LnkLI430))(VV[90],V1396,VV[244],(base0[2]->c.c_car)));
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC143(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	{object V1397;
	check_arg(1);
	V1397=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI431))((V1397),(base0[3]->c.c_car));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function DO-METHODS	*/

static void L112(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	check_arg(5);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base[1])!=Cnil){
	goto T2745;}
	base[5]= CMPcdr(base[0]);
	base[6]= base[3];
	V1398= make_cons(CMPcar(base[0]),base[2]);
	base[7]= make_cons(/* INLINE-ARGS */V1398,base[4]);
	vs_top=(vs_base=base+5)+3;
	L111(base0);
	return;
	goto T2745;
T2745:;
	{object V1399;
	object V1400;
	V1399= CMPcar(base[0]);
	base[6]= CMPcar(base[1]);
	base[9]= base[6];
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V1401= vs_base[0];
	V1400= nth(fix((V1399)),V1401);
	base[10]= (V1400);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk432)();
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
	(void) (*Lnk433)();
	if(vs_base>=vs_top){vs_top=sup;goto T2761;}
	base[9]= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2762;}
	base[10]= vs_base[0];
	vs_top=sup;
	goto T2763;
	goto T2761;
T2761:;
	base[9]= Cnil;
	goto T2762;
T2762:;
	base[10]= Cnil;
	goto T2763;
T2763:;
	base[11]= Cnil;
	vs_top=(vs_base=base+11)+1;
	L109(base0,base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2765;}
	base[11]= Cnil;
	base[12]= Ct;
	vs_top=(vs_base=base+11)+2;
	L110(base0,base);
	return;
	goto T2765;
T2765:;
	base[11]= Ct;
	vs_top=(vs_base=base+11)+1;
	L109(base0,base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2771;}
	base[11]= Ct;
	base[12]= Ct;
	vs_top=(vs_base=base+11)+2;
	L110(base0,base);
	return;
	goto T2771;
T2771:;
	base[11]= (V1399);
	base[12]= base[8];
	base[14]= Ct;
	vs_top=(vs_base=base+14)+1;
	L110(base0,base);
	vs_top=sup;
	base[13]= vs_base[0];
	base[15]= Cnil;
	vs_top=(vs_base=base+15)+1;
	L110(base0,base);
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

static void L110(base0,base1)
register object *base0,*base1;
{	register object *base=vs_base;
	register object *sup=base+VM115; VC115
	vs_check;
	{object V1402;
	object V1403;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1402=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2782;}
	V1403=(base[1]);
	vs_top=sup;
	goto T2783;
	goto T2782;
T2782:;
	V1403= Cnil;
	goto T2783;
T2783:;
	{object V1404;
	if(((V1402))==Cnil){
	goto T2787;}
	V1404= base1[8];
	goto T2785;
	goto T2787;
T2787:;
	V1404= list(2,VV[186],base1[8]);
	goto T2785;
T2785:;
	base[2]= base1[0];
	base[3]= CMPcdr(base1[1]);
	if(((V1403))==Cnil){
	goto T2793;}
	base[4]= base1[2];
	goto T2791;
	goto T2793;
T2793:;
	base[4]= (*(LnkLI434))((V1404),base1[2]);
	goto T2791;
T2791:;
	if(((V1402))==Cnil){
	goto T2797;}
	V1405= make_cons(base1[6],Cnil);
	base[5]= append(base1[3],/* INLINE-ARGS */V1405);
	goto T2795;
	goto T2797;
T2797:;
	base[5]= base1[3];
	goto T2795;
T2795:;
	base[6]= base1[4];
	vs_top=(vs_base=base+2)+5;
	L112(base0);
	return;}
	}
}
/*	local function DETERMINED-TO-BE	*/

static void L109(base0,base1)
register object *base0,*base1;
{	register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V1406;
	check_arg(1);
	V1406=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1406))==Cnil){
	goto T2801;}
	base[1]= base1[9];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2801;
T2801:;
	base[1]= ((base1[10])==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function DO-COLUMN	*/

static void L111(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM117; VC117
	vs_check;
	{object V1407;
	object V1408;
	object V1409;
	check_arg(3);
	V1407=(base[0]);
	V1408=(base[1]);
	V1409=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1407))==Cnil){
	goto T2804;}
	{object V1410;
	object V1411;
	V1410= CMPcar((V1407));{object V1412;
	V1412= nth(fix((V1410)),base0[2]);
	if(V1412==Cnil)goto T2808;
	V1411= V1412;
	goto T2807;
	goto T2808;
T2808:;}
	V1411= Ct;
	goto T2807;
T2807:;
	if(!((nth(fix((V1410)),base0[9]))==(Ct))){
	goto T2811;}
	V1407= CMPcdr((V1407));
	V1413= make_cons((V1410),(V1411));
	V1409= make_cons(/* INLINE-ARGS */V1413,(V1409));
	goto TTL;
	return;
	goto T2811;
T2811:;
	base[5]= (V1407);
	base[6]= (V1408);
	base[7]= (V1411);
	base[8]= Cnil;
	base[9]= (V1409);
	vs_top=(vs_base=base+5)+5;
	L112(base0);
	return;}
	goto T2804;
T2804:;
	base[3]= (V1408);
	{register object V1414;
	base[5]= base0[8];
	vs_top=(vs_base=base+5)+1;
	Lmake_list();
	vs_top=sup;
	V1414= vs_base[0];
	{register object V1415;
	register object V1416;
	V1415= (V1409);
	V1416= CMPcar((V1415));
	goto T2830;
T2830:;
	if(!(((V1415))==Cnil)){
	goto T2831;}
	goto T2826;
	goto T2831;
T2831:;
	{register object V1417;
	register object V1418;
	register object V1419;
	V1417= CMPcar((V1416));
	V1418= (V1414);
	V1419= CMPcdr((V1416));
	(nthcdr(fix((V1417)),(V1418)))->c.c_car = (V1419);
	(void)(nthcdr(fix((V1417)),(V1418)));}
	V1415= CMPcdr((V1415));
	V1416= CMPcar((V1415));
	goto T2830;}
	goto T2826;
T2826:;
	base[4]= (V1414);}
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC142(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM118; VC118
	vs_check;
	{register object V1420;
	check_arg(1);
	V1420=(base[0]);
	vs_top=sup;
	if(!(type_of((V1420))==t_cons)){
	goto T2846;}
	if(!((CMPcar((V1420)))==(VV[149]))){
	goto T2846;}
	base[1]= list(2,VV[150],(*(LnkLI191))(CMPcadr((V1420))));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2846;
T2846:;
	base[1]= (V1420);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC141(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V1421;
	object V1422;
	object V1423;
	object V1424;
	check_arg(4);
	V1421=(base[0]);
	V1422=(base[1]);
	V1423=(base[2]);
	V1424=(base[3]);
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC140(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM120; VC120
	vs_check;
	{object V1425;
	check_arg(2);
	V1425=(base[0]);
	base[1]=MMcons(base[1],base0[0]);
	vs_top=sup;
	if(((V1425))==Cnil){
	goto T2851;}
	if(((base0[2]->c.c_car))==Cnil){
	goto T2853;}
	{object V1426;
	{object V1427;
	object V1428= (base[1]->c.c_car);
	if(V1428==Cnil){
	V1426= Cnil;
	goto T2856;}
	base[3]=V1427=MMcons(Cnil,Cnil);
	goto T2857;
T2857:;
	(V1427->c.c_car)= (*(LnkLI435))((V1428->c.c_car));
	if((V1428=MMcdr(V1428))==Cnil){
	V1426= base[3];
	goto T2856;}
	V1427=MMcdr(V1427)=MMcons(Cnil,Cnil);
	goto T2857;}
	goto T2856;
T2856:;
	(base0[0]->c.c_car)= make_cons((V1426),(base0[0]->c.c_car));}
	goto T2853;
T2853:;
	V1429= (*(LnkLI436))((V1425));
	base[2]= ((/* INLINE-ARGS */V1429)==Cnil?Ct:Cnil);
	base[2]=MMcons(base[2],base[1]);
	V1430= 
	make_cclosure_new(LC147,Cnil,base[2],Cdata);
	base[3]= (*(LnkLI437))((V1425),(base0[1]->c.c_car),V1430);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2851;
T2851:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC147(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1431;
	check_arg(1);
	V1431=(base[0]);
	vs_top=sup;
	base[1]= (VFUN_NARGS=6,(*(LnkLI355))((base0[6]->c.c_car),(V1431),(base0[1]->c.c_car),Cnil,(base0[5]->c.c_car),(base0[0]->c.c_car)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC139(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_check;
	{object V1432;
	register object V1433;
	object V1434;
	register object V1435;
	check_arg(4);
	V1432=(base[0]);
	V1433=(base[1]);
	V1434=(base[2]);
	V1435=(base[3]);
	vs_top=sup;
	{object V1436;
	V1436= (*(LnkLI438))((V1432));
	if(!((CMPcar((V1433)))==(VV[149]))){
	goto T2864;}
	{object V1437;
	object V1438;
	object V1439;
	object V1440;
	if(type_of((V1435))==t_cons){
	goto T2867;}
	V1437= Cnil;
	goto T2866;
	goto T2867;
T2867:;
	if(!((CMPcar((V1435)))==(VV[205]))){
	goto T2871;}
	goto T2869;
	goto T2871;
T2871:;
	if((CMPcar((V1435)))==(VV[206])){
	goto T2869;}
	V1437= Cnil;
	goto T2866;
	goto T2869;
T2869:;
	V1437= (((V1436))==(CMPcadr((V1435)))?Ct:Cnil);
	goto T2866;
T2866:;
	if(((V1437))==Cnil){
	goto T2875;}
	V1438= CMPcddr((V1435));
	goto T2873;
	goto T2875;
T2875:;
	V1441= list(2,Ct,(V1435));
	V1438= make_cons(/* INLINE-ARGS */V1441,Cnil);
	goto T2873;
T2873:;
	if(((*(LnkLI439))((V1434)))==Cnil){
	goto T2879;}
	if(((V1437))==Cnil){
	goto T2884;}
	if(!((CMPcar((V1435)))==(VV[206]))){
	goto T2879;}
	goto T2882;
	goto T2884;
T2884:;
	if(((*(LnkLI439))((V1435)))==Cnil){
	goto T2879;}
	goto T2882;
T2882:;
	V1439= VV[206];
	goto T2877;
	goto T2879;
T2879:;
	V1439= VV[205];
	goto T2877;
T2877:;
	V1440= make_cons(CMPcadr((V1433)),Cnil);
	base[8]= listA(4,(V1439),(V1436),list(2,(V1440),(V1434)),(V1438));
	vs_top=(vs_base=base+8)+1;
	return;}
	goto T2864;
T2864:;
	{object V1443;
	V1443= (*(LnkLI438))((V1432));
	{object V1444= CMPcar((V1433));
	if((V1444!= VV[387]))goto T2889;
	V1442= list(3,VV[208],(V1443),CMPcadr((V1433)));
	goto T2887;
	goto T2889;
T2889:;
	if((V1444!= VV[150]))goto T2890;
	V1442= list(3,VV[209],(V1443),CMPcadr((V1433)));
	goto T2887;
	goto T2890;
T2890:;
	V1442= Cnil;}}
	goto T2887;
T2887:;
	base[4]= list(4,VV[207],V1442,(V1434),(V1435));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC138(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM123; VC123
	vs_check;
	{register object V1445;
	object V1446;
	check_arg(2);
	V1445=(base[0]);
	V1446=(base[1]);
	vs_top=sup;
	if(((base0[1]->c.c_car))!=Cnil){
	goto T2891;}
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base0[0]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2892;}
	goto T2895;}
	else{
	base[3]=MMcons(Cnil,base[2]);
	base[4]= (V1445);
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V1447= vs_base[0];
	V1448= 
	make_cclosure_new(LC148,Cnil,base[3],Cdata);
	(void)((*(LnkLI437))(V1447,(base0[0]->c.c_car),V1448));
	V1445= (base[3]->c.c_car);
	frs_pop();
	}
	goto T2895;
T2895:;
	goto T2891;
T2891:;
	base[2]= list(3,VV[104],(V1445),(V1446));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2892;
T2892:;
	base[2]= list(3,VV[199],(V1445),(V1446));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC148(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM124; VC124
	vs_check;
	{object V1449;
	check_arg(1);
	V1449=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T2902;}
	{frame_ptr fr;
	fr=frs_sch((base0[1]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[440]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	unwind(fr,Cnil);}
	goto T2902;
T2902:;
	(base0[0]->c.c_car)= (V1449);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function ADD-CLASS-LIST	*/

static void L97(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM125; VC125
	vs_check;
	{register object V1450;
	check_arg(1);
	V1450=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[0])==Cnil){
	goto T2907;}
	{register object x= base0[0],V1451= (V1450);
	while(V1451!=Cnil)
	if(x==(V1451->c.c_car)){
	goto T2911;
	}else V1451=V1451->c.c_cdr;
	goto T2908;}
	goto T2911;
T2911:;
	goto T2907;
T2907:;
	{object V1452;
	V1452= (*(LnkLI441))(base0[5],base0[7],(V1450),base0[6]);
	if(((V1452))==Cnil){
	goto T2914;}
	V1453= (VFUN_NARGS=3,(*(LnkLI442))(base0[1],(V1452),base0[9]));
	if(!((base0[9])==(/* INLINE-ARGS */V1453))){
	goto T2914;}
	{object V1454;
	if(!((base0[2])==(Ct))){
	goto T2920;}
	base[1]= base0[3];
	base[2]= (V1450);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk443)();
	vs_top=sup;
	V1454= vs_base[0];
	goto T2918;
	goto T2920;
T2920:;
	if(!((base0[2])==(VV[154]))){
	goto T2925;}
	V1454= (*(LnkLI444))(base0[3],(V1450));
	goto T2918;
	goto T2925;
T2925:;
	V1454= Cnil;
	goto T2918;
T2918:;
	base0[1]= (VFUN_NARGS=4,(*(LnkLI445))(base0[1],(V1452),(V1454),Ct));
	base[1]= base0[1];
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2914;
T2914:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2908;
T2908:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function UPDATE-CLASS	*/

static void LC85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM126; VC126
	vs_check;
	{object V1455;
	check_arg(1);
	V1455=(base[0]);
	vs_top=sup;
	base[1]= (V1455);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk446)(Lclptr446);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2929;}
	{register object V1456;
	register object V1457;
	base[3]= (V1455);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk447)(Lclptr447);
	vs_top=sup;
	V1456= vs_base[0];
	V1457= CMPcar((V1456));
	goto T2936;
T2936:;
	if(!(((V1456))==Cnil)){
	goto T2937;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2937;
T2937:;
	base[3]= (V1457);
	base[4]= (base0[0]->c.c_car);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk448)(Lclptr448);
	vs_top=sup;
	V1456= CMPcdr((V1456));
	V1457= CMPcar((V1456));
	goto T2936;}
	goto T2929;
T2929:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function UPDATE-CLASS	*/

static void L85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V1458;
	check_arg(1);
	V1458=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1458);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk446)(Lclptr446);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2951;}
	{register object V1459;
	register object V1460;
	base[3]= (V1458);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk447)(Lclptr447);
	vs_top=sup;
	V1459= vs_base[0];
	V1460= CMPcar((V1459));
	goto T2958;
T2958:;
	if(!(((V1459))==Cnil)){
	goto T2959;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2959;
T2959:;
	base[3]= (V1460);
	base[4]= (base0[1]->c.c_car);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk448)(Lclptr448);
	vs_top=sup;
	V1459= CMPcdr((V1459));
	V1460= CMPcar((V1459));
	goto T2958;}
	goto T2951;
T2951:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC137(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM128; VC128
	vs_check;
	{object V1461;
	check_arg(1);
	V1461=(base[0]);
	vs_top=sup;
	{register object x= (V1461),V1462= (base0[1]->c.c_car);
	while(V1462!=Cnil)
	if(eql(x,V1462->c.c_car)){
	goto T2972;
	}else V1462=V1462->c.c_cdr;}
	{register object V1463;
	register object V1464;
	V1463= (base0[0]->c.c_car);
	V1464= CMPcar((V1463));
	goto T2980;
T2980:;
	if(!(((V1463))==Cnil)){
	goto T2981;}
	goto T2973;
	goto T2981;
T2981:;
	base[2]= (*(LnkLI191))((V1461));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk197)(Lclptr197);
	vs_top=sup;
	V1466= vs_base[0];
	{register object x= (V1464),V1465= V1466;
	while(V1465!=Cnil)
	if(eql(x,V1465->c.c_car)){
	goto T2985;
	}else V1465=V1465->c.c_cdr;}
	goto T2985;
T2985:;
	V1463= CMPcdr((V1463));
	V1464= CMPcar((V1463));
	goto T2980;}
	goto T2972;
T2972:;
	base[1]= (*(LnkLI364))((V1461));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2973;
T2973:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC136(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM129; VC129
	vs_check;
	{object V1467;
	check_arg(1);
	V1467=(base[0]);
	vs_top=sup;
	{register object x= (V1467),V1468= (base0[0]->c.c_car);
	while(V1468!=Cnil)
	if(eql(x,V1468->c.c_car)){
	base[1]= V1468;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V1468=V1468->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC135(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	{object V1469;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1469=(base[0]);
	vs_top=sup;
	{object V1470;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1469);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk157)(Lclptr157);
	vs_top=sup;
	V1470= vs_base[0];
	if(((V1470))==Cnil){
	goto T2997;}
	{object V1471;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1470);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk359)();
	vs_top=sup;
	V1471= vs_base[0];
	base[1]= (V1471);
	base[2]= (V1469);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk428)();
	return;}
	goto T2997;
T2997:;
	base[1]=VV[449]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1472;
	V1472= (V1469);
	 vs_top=base+3;
	 while(V1472!=Cnil)
	 {vs_push((V1472)->c.c_car);V1472=(V1472)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk449)(Lclptr449);
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC134(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM131; VC131
	vs_check;
	{object V1473;
	object V1474;
	check_arg(2);
	V1473=(base[0]);
	V1474=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	{object V1475;
	V1475= (V1473);
	 vs_top=base+3;
	 while(V1475!=Cnil)
	 {vs_push((V1475)->c.c_car);V1475=(V1475)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function INITARG-ERROR	*/

static void L43(base0)
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
	base[3]= VV[121];
	base[4]= base0[2];
	base[5]= (V1476);
	base[6]= (V1477);
	base[7]= (V1478);
	vs_top=(vs_base=base+3)+5;
	Lerror();
	return;
	}
}
/*	local function LOSE	*/

static void L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM133; VC133
	vs_check;
	{object V1479;
	object V1480;
	object V1481;
	check_arg(3);
	V1479=(base[0]);
	V1480=(base[1]);
	V1481=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[93];
	base[4]= base0[2];
	base[5]= (V1479);
	base[6]= (V1480);
	base[7]= (V1481);
	vs_top=(vs_base=base+3)+5;
	Lerror();
	return;
	}
}
/*	local function IMPROPER-LIST	*/

static void L31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM134; VC134
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[84];
	vs_top=(vs_base=base+0)+1;
	unwind(frs_sch(base0[4]),Cnil);
}
/*	local function IMPROPER-LIST	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[76];
	vs_top=(vs_base=base+0)+1;
	unwind(frs_sch(base0[4]),Cnil);
}
/*	local function CALL-NEXT-METHOD	*/

static void L19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM136; VC136
	vs_check;
	{object V1482;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1482=(base[0]);
	vs_top=sup;
	if((base0[2])==Cnil){
	goto T3021;}
	if(((V1482))==Cnil){
	goto T3024;}
	{register object V1483;
	register object V1484;
	object V1485;
	V1483= (V1482);
	{object V1486;
	V1486= CMPcar((V1483));
	V1483= CMPcdr((V1483));
	V1484= (V1486);}
	{object V1487;
	V1487= CMPcar((V1483));
	V1483= CMPcdr((V1483));
	V1485= (V1487);}
	base[3]= base0[2];
	base[4]= VV[30];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3037;}
	base[3]= STREF(object,base0[2],0);
	base[4]= STREF(object,base0[2],4);
	base[5]= STREF(object,base0[2],8);
	base[6]= (V1484);
	base[7]= (V1485);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3037;
T3037:;
	if(!(type_of(base0[2])==t_fixnum)){
	goto T3047;}
	{object V1489;
	if(type_of(V1484)==t_structure){
	goto T3053;}
	goto T3051;
	goto T3053;
T3053:;
	if(!(((V1484)->str.str_def)==(VV[65]))){
	goto T3051;}
	V1489= STREF(object,(V1484),4);
	goto T3049;
	goto T3051;
T3051:;{object V1491;
	V1491= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1484);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V1492= vs_base[0];
	if(!((V1491)==(CMPcar(V1492)))){
	goto T3056;}}
	V1489= CMPcar(((V1484))->cc.cc_turbo[12]);
	goto T3049;
	goto T3056;
T3056:;
	V1489= Cnil;
	goto T3049;
T3049:;
	if(((V1489))==Cnil){
	goto T3062;}
	base[3]= ((V1489))->v.v_self[fix(base0[2])]= (V1484);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3062;
T3062:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T3047;
T3047:;
	{register object V1494;
	V1494= base0[2];
	base[3]= (V1494);
	base[4]= VV[32];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3065;}
	{object V1495;
	object V1496;
	register object V1497;
	V1495= STREF(object,base0[2],0);
	V1496= list(2,(V1484),(V1485));
	V1497= STREF(object,base0[2],4);
	if(((V1497))==Cnil){
	goto T3073;}
	if((CMPcdr((V1497)))!=Cnil){
	goto T3073;}
	base[3]= (V1496);
	base[4]= CMPcar((V1497));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V1495);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3073;
T3073:;
	base[3]= (V1495);
	base[4]= (V1496);
	{object V1498;
	V1498= (V1497);
	 vs_top=base+5;
	 while(V1498!=Cnil)
	 {vs_push((V1498)->c.c_car);V1498=(V1498)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3065;
T3065:;
	base[3]= (V1494);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3083;}
	base[3]= (V1484);
	base[4]= (V1485);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3083;
T3083:;
	base[3]= VV[33];
	base[4]= VV[34];
	base[5]= VV[35];
	base[6]= VV[36];
	base[7]= base0[2];
	base[8]= VV[37];
	base[9]= VV[66];
	base[10]= VV[39];
	base[11]= VV[67];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk390)();
	return;}}
	goto T3024;
T3024:;
	base[1]= base0[2];
	base[2]= VV[30];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3099;}
	base[1]= STREF(object,base0[2],0);
	base[2]= STREF(object,base0[2],4);
	base[3]= STREF(object,base0[2],8);
	base[4]= base0[1];
	base[5]= base0[0];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3099;
T3099:;
	if(!(type_of(base0[2])==t_fixnum)){
	goto T3109;}
	{object V1500;
	if(type_of(base0[1])==t_structure){
	goto T3115;}
	goto T3113;
	goto T3115;
T3115:;
	if(!(((base0[1])->str.str_def)==(VV[68]))){
	goto T3113;}
	V1500= STREF(object,base0[1],4);
	goto T3111;
	goto T3113;
T3113:;{object V1502;
	V1502= (VV[13]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V1503= vs_base[0];
	if(!((V1502)==(CMPcar(V1503)))){
	goto T3118;}}
	V1500= CMPcar((base0[1])->cc.cc_turbo[12]);
	goto T3111;
	goto T3118;
T3118:;
	V1500= Cnil;
	goto T3111;
T3111:;
	if(((V1500))==Cnil){
	goto T3124;}
	base[1]= ((V1500))->v.v_self[fix(base0[2])]= (base0[1]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3124;
T3124:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3109;
T3109:;
	{register object V1505;
	V1505= base0[2];
	base[1]= (V1505);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3127;}
	{object V1506;
	object V1507;
	register object V1508;
	V1506= STREF(object,base0[2],0);
	V1507= list(2,base0[1],base0[0]);
	V1508= STREF(object,base0[2],4);
	if(((V1508))==Cnil){
	goto T3135;}
	if((CMPcdr((V1508)))!=Cnil){
	goto T3135;}
	base[1]= (V1507);
	base[2]= CMPcar((V1508));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V1506);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3135;
T3135:;
	base[1]= (V1506);
	base[2]= (V1507);
	{object V1509;
	V1509= (V1508);
	 vs_top=base+3;
	 while(V1509!=Cnil)
	 {vs_push((V1509)->c.c_car);V1509=(V1509)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3127;
T3127:;
	base[1]= (V1505);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3145;}
	base[1]= base0[1];
	base[2]= base0[0];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3145;
T3145:;
	base[1]= VV[33];
	base[2]= VV[34];
	base[3]= VV[35];
	base[4]= VV[36];
	base[5]= base0[2];
	base[6]= VV[37];
	base[7]= VV[69];
	base[8]= VV[39];
	base[9]= VV[70];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk390)();
	return;}
	goto T3021;
T3021:;
	base[1]= VV[62];
	base[2]= base0[1];
	base[3]= base0[0];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk451)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM137; VC137
	vs_check;
	{object V1510;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1510=(base[0]);
	vs_top=sup;
	if((base0[2])==Cnil){
	goto T3163;}
	if(((V1510))==Cnil){
	goto T3166;}
	{register object V1511;
	register object V1512;
	object V1513;
	V1511= (V1510);
	{object V1514;
	V1514= CMPcar((V1511));
	V1511= CMPcdr((V1511));
	V1512= (V1514);}
	{object V1515;
	V1515= CMPcar((V1511));
	V1511= CMPcdr((V1511));
	V1513= (V1515);}
	base[3]= base0[2];
	base[4]= VV[30];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3179;}
	base[3]= STREF(object,base0[2],0);
	base[4]= STREF(object,base0[2],4);
	base[5]= STREF(object,base0[2],8);
	base[6]= (V1512);
	base[7]= (V1513);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3179;
T3179:;
	if(!(type_of(base0[2])==t_fixnum)){
	goto T3189;}
	{object V1517;
	if(type_of(V1512)==t_structure){
	goto T3195;}
	goto T3193;
	goto T3195;
T3195:;
	if(!(((V1512)->str.str_def)==(VV[47]))){
	goto T3193;}
	V1517= STREF(object,(V1512),4);
	goto T3191;
	goto T3193;
T3193:;{object V1519;
	V1519= (VV[13]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1512);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V1520= vs_base[0];
	if(!((V1519)==(CMPcar(V1520)))){
	goto T3198;}}
	V1517= CMPcar(((V1512))->cc.cc_turbo[12]);
	goto T3191;
	goto T3198;
T3198:;
	V1517= Cnil;
	goto T3191;
T3191:;
	if(((V1517))==Cnil){
	goto T3204;}
	base[3]= ((V1517))->v.v_self[fix(base0[2])]= (V1512);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3204;
T3204:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T3189;
T3189:;
	{register object V1522;
	V1522= base0[2];
	base[3]= (V1522);
	base[4]= VV[32];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3207;}
	{object V1523;
	object V1524;
	register object V1525;
	V1523= STREF(object,base0[2],0);
	V1524= list(2,(V1512),(V1513));
	V1525= STREF(object,base0[2],4);
	if(((V1525))==Cnil){
	goto T3215;}
	if((CMPcdr((V1525)))!=Cnil){
	goto T3215;}
	base[3]= (V1524);
	base[4]= CMPcar((V1525));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V1523);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3215;
T3215:;
	base[3]= (V1523);
	base[4]= (V1524);
	{object V1526;
	V1526= (V1525);
	 vs_top=base+5;
	 while(V1526!=Cnil)
	 {vs_push((V1526)->c.c_car);V1526=(V1526)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3207;
T3207:;
	base[3]= (V1522);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3225;}
	base[3]= (V1512);
	base[4]= (V1513);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3225;
T3225:;
	base[3]= VV[33];
	base[4]= VV[34];
	base[5]= VV[35];
	base[6]= VV[36];
	base[7]= base0[2];
	base[8]= VV[37];
	base[9]= VV[48];
	base[10]= VV[39];
	base[11]= VV[49];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk390)();
	return;}}
	goto T3166;
T3166:;
	base[1]= base0[2];
	base[2]= VV[30];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3241;}
	base[1]= STREF(object,base0[2],0);
	base[2]= STREF(object,base0[2],4);
	base[3]= STREF(object,base0[2],8);
	base[4]= base0[1];
	base[5]= base0[0];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3241;
T3241:;
	if(!(type_of(base0[2])==t_fixnum)){
	goto T3251;}
	{object V1528;
	if(type_of(base0[1])==t_structure){
	goto T3257;}
	goto T3255;
	goto T3257;
T3257:;
	if(!(((base0[1])->str.str_def)==(VV[50]))){
	goto T3255;}
	V1528= STREF(object,base0[1],4);
	goto T3253;
	goto T3255;
T3255:;{object V1530;
	V1530= (VV[13]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	V1531= vs_base[0];
	if(!((V1530)==(CMPcar(V1531)))){
	goto T3260;}}
	V1528= CMPcar((base0[1])->cc.cc_turbo[12]);
	goto T3253;
	goto T3260;
T3260:;
	V1528= Cnil;
	goto T3253;
T3253:;
	if(((V1528))==Cnil){
	goto T3266;}
	base[1]= ((V1528))->v.v_self[fix(base0[2])]= (base0[1]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3266;
T3266:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3251;
T3251:;
	{register object V1533;
	V1533= base0[2];
	base[1]= (V1533);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk450)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3269;}
	{object V1534;
	object V1535;
	register object V1536;
	V1534= STREF(object,base0[2],0);
	V1535= list(2,base0[1],base0[0]);
	V1536= STREF(object,base0[2],4);
	if(((V1536))==Cnil){
	goto T3277;}
	if((CMPcdr((V1536)))!=Cnil){
	goto T3277;}
	base[1]= (V1535);
	base[2]= CMPcar((V1536));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V1534);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3277;
T3277:;
	base[1]= (V1534);
	base[2]= (V1535);
	{object V1537;
	V1537= (V1536);
	 vs_top=base+3;
	 while(V1537!=Cnil)
	 {vs_push((V1537)->c.c_car);V1537=(V1537)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3269;
T3269:;
	base[1]= (V1533);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3287;}
	base[1]= base0[1];
	base[2]= base0[0];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3287;
T3287:;
	base[1]= VV[33];
	base[2]= VV[34];
	base[3]= VV[35];
	base[4]= VV[36];
	base[5]= base0[2];
	base[6]= VV[37];
	base[7]= VV[51];
	base[8]= VV[39];
	base[9]= VV[52];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk390)();
	return;}
	goto T3163;
T3163:;
	base[1]= VV[44];
	base[2]= base0[1];
	base[3]= base0[0];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk451)();
	return;
	}
}
static void LnkT451(){ call_or_link(VV[451],(void **)(void *)&Lnk451);} /* CALL-NO-NEXT-METHOD */
static void LnkT450(){ call_or_link(VV[450],(void **)(void *)&Lnk450);} /* STRUCTURE-SUBTYPE-P */
static void LnkT449(ptr) object *ptr;{ call_or_link_closure(VV[449],(void **)(void *)&Lnk449,(void **)(void *)&Lclptr449);} /* NO-APPLICABLE-METHOD */
static void LnkT157(ptr) object *ptr;{ call_or_link_closure(VV[157],(void **)(void *)&Lnk157,(void **)(void *)&Lclptr157);} /* COMPUTE-APPLICABLE-METHODS */
static void LnkT448(ptr) object *ptr;{ call_or_link_closure(VV[448],(void **)(void *)&Lnk448,(void **)(void *)&Lclptr448);} /* COMPUTE-SLOT-ACCESSOR-INFO */
static void LnkT447(ptr) object *ptr;{ call_or_link_closure(VV[447],(void **)(void *)&Lnk447,(void **)(void *)&Lclptr447);} /* CLASS-SLOTS */
static void LnkT446(ptr) object *ptr;{ call_or_link_closure(VV[446],(void **)(void *)&Lnk446,(void **)(void *)&Lclptr446);} /* CLASS-FINALIZED-P */
static object  LnkTLI445(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[445],(void **)(void *)&LnkLI445,first,ap);va_end(ap);return V1;} /* FILL-CACHE */
static object  LnkTLI444(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[444],(void **)(void *)&LnkLI444,2,first,ap);va_end(ap);return V1;} /* VALUE-FOR-CACHING */
static void LnkT443(){ call_or_link(VV[443],(void **)(void *)&Lnk443);} /* SDFUN-FOR-CACHING */
static object  LnkTLI442(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[442],(void **)(void *)&LnkLI442,first,ap);va_end(ap);return V1;} /* PROBE-CACHE */
static object  LnkTLI441(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[441],(void **)(void *)&LnkLI441,4,first,ap);va_end(ap);return V1;} /* GET-WRAPPERS-FROM-CLASSES */
static object  LnkTLI439(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[439],(void **)(void *)&LnkLI439,1,first,ap);va_end(ap);return V1;} /* DNET-METHODS-P */
static object  LnkTLI438(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[438],(void **)(void *)&LnkLI438,1,first,ap);va_end(ap);return V1;} /* DFUN-ARG-SYMBOL */
static object  LnkTLI437(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[437],(void **)(void *)&LnkLI437,3,first,ap);va_end(ap);return V1;} /* MAP-ALL-ORDERS */
static object  LnkTLI436(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[436],(void **)(void *)&LnkLI436,1,first,ap);va_end(ap);return V1;} /* METHODS-CONTAIN-EQL-SPECIALIZER-P */
static object  LnkTLI435(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[435],(void **)(void *)&LnkLI435,1,first,ap);va_end(ap);return V1;} /* CLASS-FROM-TYPE */
static object  LnkTLI434(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[434],(void **)(void *)&LnkLI434,2,first,ap);va_end(ap);return V1;} /* AUGMENT-TYPE */
static void LnkT433(){ call_or_link(VV[433],(void **)(void *)&Lnk433);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT432(){ call_or_link(VV[432],(void **)(void *)&Lnk432);} /* TYPE-FROM-SPECIALIZER */
static object  LnkTLI431(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[431],(void **)(void *)&LnkLI431,2,first,ap);va_end(ap);return V1;} /* NET-CONSTANT-CONVERTER */
static object  LnkTLI430(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[430],(void **)(void *)&LnkLI430,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL */
static object  LnkTLI429(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[429],(void **)(void *)&LnkLI429,3,first,ap);va_end(ap);return V1;} /* CONVERT-TABLE */
static void LnkT428(){ call_or_link(VV[428],(void **)(void *)&Lnk428);} /* INVOKE-EMF */
static object  LnkTLI427(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[427],(void **)(void *)&LnkLI427,3,first,ap);va_end(ap);return V1;} /* SORT-APPLICABLE-METHODS */
static void LnkT426(){ call_or_link(VV[426],(void **)(void *)&Lnk426);} /* UNION */
static void LnkT425(ptr) object *ptr;{ call_or_link_closure(VV[425],(void **)(void *)&Lnk425,(void **)(void *)&Lclptr425);} /* FUNCTION-KEYWORDS */
static void LnkT424(ptr) object *ptr;{ call_or_link_closure(VV[424],(void **)(void *)&Lnk424,(void **)(void *)&Lclptr424);} /* METHOD-PRETTY-ARGLIST */
static void LnkT423(){ call_or_link(VV[423],(void **)(void *)&Lnk423);} /* REMOVE-IF */
static void LnkT422(){ call_or_link(VV[422],(void **)(void *)&Lnk422);} /* ANALYZE-LAMBDA-LIST */
static object  LnkTLI421(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[421],(void **)(void *)&LnkLI421,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static object  LnkTLI420(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[420],(void **)(void *)&LnkLI420,first,ap);va_end(ap);return V1;} /* SET-DFUN */
static void LnkT419(){ call_or_link(VV[419],(void **)(void *)&Lnk419);} /* MAKE-FINAL-DFUN-INTERNAL */
static object  LnkTLI418(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[418],(void **)(void *)&LnkLI418,1,first,ap);va_end(ap);return V1;} /* MAKE-INITIAL-DFUN */
static object  LnkTLI417(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[417],(void **)(void *)&LnkLI417,first,ap);va_end(ap);return V1;} /* MAKE-FINAL-DFUN */
static void LnkT413(){ call_or_link(VV[413],(void **)(void *)&Lnk413);} /* UPDATE-SLOT-VALUE-GF-INFO */
static object  LnkTLI412(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[412],(void **)(void *)&LnkLI412,1,first,ap);va_end(ap);return V1;} /* UPDATE-ALL-C-A-M-GF-INFO */
static void LnkT411(ptr) object *ptr;{ call_or_link_closure(VV[411],(void **)(void *)&Lnk411,(void **)(void *)&Lclptr411);} /* PCL DFUN-STATE slot READER */
static void LnkT410(ptr) object *ptr;{ call_or_link_closure(VV[410],(void **)(void *)&Lnk410,(void **)(void *)&Lclptr410);} /* SLOT-DEFINITION-BOUNDP-FUNCTION */
static void LnkT409(ptr) object *ptr;{ call_or_link_closure(VV[409],(void **)(void *)&Lnk409,(void **)(void *)&Lclptr409);} /* SLOT-DEFINITION-WRITER-FUNCTION */
static void LnkT408(ptr) object *ptr;{ call_or_link_closure(VV[408],(void **)(void *)&Lnk408,(void **)(void *)&Lclptr408);} /* SLOT-DEFINITION-READER-FUNCTION */
static void LnkT407(){ call_or_link(VV[407],(void **)(void *)&Lnk407);} /* GET-FUNCTION1 */
static object  LnkTLI404(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[404],(void **)(void *)&LnkLI404,first,ap);va_end(ap);return V1;} /* MAKE-EMF-CALL */
static object  LnkTLI403(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[403],(void **)(void *)&LnkLI403,2,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL-LAMBDA-LIST */
static object  LnkTLI402(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[402],(void **)(void *)&LnkLI402,2,first,ap);va_end(ap);return V1;} /* MAKE-DFUN-LAMBDA-LIST */
static object  LnkTLI401(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[401],(void **)(void *)&LnkLI401,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static void LnkT400(){ call_or_link(VV[400],(void **)(void *)&Lnk400);} /* CONVERT-METHODS */
static object  LnkTLI399(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[399],(void **)(void *)&LnkLI399,1,first,ap);va_end(ap);return V1;} /* DEFAULT-SECONDARY-DISPATCH-FUNCTION */
static object  LnkTLI398(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[398],(void **)(void *)&LnkLI398,first,ap);va_end(ap);return V1;} /* GET-EFFECTIVE-METHOD-FUNCTION1 */
static object  LnkTLI397(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[397],(void **)(void *)&LnkLI397,1,first,ap);va_end(ap);return V1;} /* DEFAULT-CONSTANT-CONVERTER */
static object  LnkTLI396(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[396],(void **)(void *)&LnkLI396,2,first,ap);va_end(ap);return V1;} /* METHODS-CONVERTER */
static void LnkT395(){ call_or_link(VV[395],(void **)(void *)&Lnk395);} /* DEFAULT-CODE-CONVERTER */
static object  LnkTLI394(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[394],(void **)(void *)&LnkLI394,1,first,ap);va_end(ap);return V1;} /* COMPUTE-MCASE-PARAMETERS */
static object  LnkTLI391(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[391],(void **)(void *)&LnkLI391,1,first,ap);va_end(ap);return V1;} /* DEFAULT-TEST-CONVERTER */
static void LnkT390(){ call_or_link(VV[390],(void **)(void *)&Lnk390);} /* ERROR */
static object  LnkTLI389(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[389],(void **)(void *)&LnkLI389,first,ap);va_end(ap);return V1;} /* COMPUTE-SECONDARY-DISPATCH-FUNCTION1 */
static object  LnkTLI388(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[388],(void **)(void *)&LnkLI388,257,first,ap);va_end(ap);return V1;} /* ARG-INFO-NUMBER-REQUIRED */
static void LnkT386(){ call_or_link(VV[386],(void **)(void *)&Lnk386);} /* GENERATE-DISCRIMINATION-NET-INTERNAL */
static object  LnkTLI384(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[384],(void **)(void *)&LnkLI384,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-NKEYS */
static object  LnkTLI383(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[383],(void **)(void *)&LnkLI383,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASS-LISTS */
static object  LnkTLI382(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[382],(void **)(void *)&LnkLI382,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASSES */
static object  LnkTLI381(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[381],(void **)(void *)&LnkLI381,2,first,ap);va_end(ap);return V1;} /* MEC-ALL-CLASSES-INTERNAL */
static void LnkT380(ptr) object *ptr;{ call_or_link_closure(VV[380],(void **)(void *)&Lnk380,(void **)(void *)&Lclptr380);} /* CLASS-DIRECT-SUBCLASSES */
static object  LnkTLI379(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[379],(void **)(void *)&LnkLI379,2,first,ap);va_end(ap);return V1;} /* SET-STRUCTURE-SVUC-METHOD */
static object  LnkTLI378(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[378],(void **)(void *)&LnkLI378,2,first,ap);va_end(ap);return V1;} /* SET-STANDARD-SVUC-METHOD */
static void LnkT377(){ call_or_link(VV[377],(void **)(void *)&Lnk377);} /* MAP-ALL-CLASSES */
static object  LnkTLI376(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[376],(void **)(void *)&LnkLI376,2,first,ap);va_end(ap);return V1;} /* UPDATE-STD-OR-STR-METHODS */
static void LnkT375(){ call_or_link(VV[375],(void **)(void *)&Lnk375);} /* GET-ACCESSOR-FROM-SVUC-METHOD-FUNCTION */
static void LnkT374(){ call_or_link(VV[374],(void **)(void *)&Lnk374);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static object  LnkTLI373(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[373],(void **)(void *)&LnkLI373,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT372(){ call_or_link(VV[372],(void **)(void *)&Lnk372);} /* GET-OPTIMIZED-STD-SLOT-VALUE-USING-CLASS-METHOD-FUNCTION */
static void LnkT371(){ call_or_link(VV[371],(void **)(void *)&Lnk371);} /* GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION */
static object  LnkTLI370(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[370],(void **)(void *)&LnkLI370,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SVUC-METHOD */
static object  LnkTLI369(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[369],(void **)(void *)&LnkLI369,1,first,ap);va_end(ap);return V1;} /* STANDARD-SVUC-METHOD */
static void LnkT368(ptr) object *ptr;{ call_or_link_closure(VV[368],(void **)(void *)&Lnk368,(void **)(void *)&Lclptr368);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* COMPUTE-APPLICABLE-METHODS-EMF */
static object  LnkTLI366(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[366],(void **)(void *)&LnkLI366,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static object  LnkTLI365(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[365],(void **)(void *)&LnkLI365,1,first,ap);va_end(ap);return V1;} /* UPDATE-GF-SIMPLE-ACCESSOR-TYPE */
static object  LnkTLI364(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[364],(void **)(void *)&LnkLI364,1,first,ap);va_end(ap);return V1;} /* UPDATE-C-A-M-GF-INFO */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[363],(void **)(void *)&LnkLI363,1,first,ap);va_end(ap);return V1;} /* MAP-ALL-GENERIC-FUNCTIONS */
static void LnkT362(ptr) object *ptr;{ call_or_link_closure(VV[362],(void **)(void *)&Lnk362,(void **)(void *)&Lclptr362);} /* GF-ARG-INFO */
static object  LnkTLI360(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[360],(void **)(void *)&LnkLI360,2,first,ap);va_end(ap);return V1;} /* LIST-EQ */
static void LnkT359(){ call_or_link(VV[359],(void **)(void *)&Lnk359);} /* GET-EFFECTIVE-METHOD-FUNCTION */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[324],(void **)(void *)&LnkLI324,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT358(ptr) object *ptr;{ call_or_link_closure(VV[358],(void **)(void *)&Lnk358,(void **)(void *)&Lclptr358);} /* METHOD-FUNCTION */
static void LnkT357(ptr) object *ptr;{ call_or_link_closure(VV[357],(void **)(void *)&Lnk357,(void **)(void *)&Lclptr357);} /* METHOD-FAST-FUNCTION */
static object  LnkTLI356(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[356],(void **)(void *)&LnkLI356,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static object  LnkTLI355(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[355],(void **)(void *)&LnkLI355,first,ap);va_end(ap);return V1;} /* GET-SECONDARY-DISPATCH-FUNCTION1 */
static void LnkT354(){ call_or_link(VV[354],(void **)(void *)&Lnk354);} /* CLASS-EQ-TYPE */
static void LnkT353(ptr) object *ptr;{ call_or_link_closure(VV[353],(void **)(void *)&Lnk353,(void **)(void *)&Lclptr353);} /* CLASS-WRAPPER */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* GET-GENERIC-FUNCTION-INFO */
static void LnkT351(ptr) object *ptr;{ call_or_link_closure(VV[351],(void **)(void *)&Lnk351,(void **)(void *)&Lclptr351);} /* LISP OBJECT slot READER */
static void LnkT350(ptr) object *ptr;{ call_or_link_closure(VV[350],(void **)(void *)&Lnk350,(void **)(void *)&Lclptr350);} /* SPECIALIZER-OBJECT */
static void LnkT349(ptr) object *ptr;{ call_or_link_closure(VV[349],(void **)(void *)&Lnk349,(void **)(void *)&Lclptr349);} /* SPECIALIZER-CLASS */
static void LnkT197(ptr) object *ptr;{ call_or_link_closure(VV[197],(void **)(void *)&Lnk197,(void **)(void *)&Lclptr197);} /* CLASS-PRECEDENCE-LIST */
static void LnkT348(ptr) object *ptr;{ call_or_link_closure(VV[348],(void **)(void *)&Lnk348,(void **)(void *)&Lclptr348);} /* CLASS-INCOMPATIBLE-SUPERCLASS-LIST */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* COMPUTE-APPLICABLE-METHODS-USING-TYPES */
static void LnkT346(){ call_or_link(VV[346],(void **)(void *)&Lnk346);} /* TYPES-FROM-ARGUMENTS */
static void LnkT345(ptr) object *ptr;{ call_or_link_closure(VV[345],(void **)(void *)&Lnk345,(void **)(void *)&Lclptr345);} /* REMOVE-DIRECT-METHOD */
static void LnkT344(){ call_or_link(VV[344],(void **)(void *)&Lnk344);} /* REMOVE */
static void LnkT343(){ call_or_link(VV[343],(void **)(void *)&Lnk343);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static object  LnkTLI342(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[342],(void **)(void *)&LnkLI342,1,first,ap);va_end(ap);return V1;} /* TYPE-CLASS */
static void LnkT341(ptr) object *ptr;{ call_or_link_closure(VV[341],(void **)(void *)&Lnk341,(void **)(void *)&Lclptr341);} /* ADD-DIRECT-METHOD */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[340],(void **)(void *)&LnkLI340,first,ap);va_end(ap);return V1;} /* REAL-ADD-METHOD */
static object  LnkTLI339(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[339],(void **)(void *)&LnkLI339,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[338],(void **)(void *)&LnkLI338,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-VALID-P */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[337],(void **)(void *)&LnkLI337,first,ap);va_end(ap);return V1;} /* SET-ARG-INFO */
static void LnkT336(ptr) object *ptr;{ call_or_link_closure(VV[336],(void **)(void *)&Lnk336,(void **)(void *)&Lclptr336);} /* PCL ARG-INFO slot READER */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[335],(void **)(void *)&LnkLI335,1,first,ap);va_end(ap);return V1;} /* GF-LAMBDA-LIST */
static void LnkT334(ptr) object *ptr;{ call_or_link_closure(VV[334],(void **)(void *)&Lnk334,(void **)(void *)&Lclptr334);} /* METHOD-LAMBDA-LIST */
static void LnkT333(){ call_or_link(VV[333],(void **)(void *)&Lnk333);} /* SORT */
static void LnkT331(){ call_or_link(VV[331],(void **)(void *)&Lnk331);} /* COMPUTE-DISCRIMINATING-FUNCTION-ARGLIST-INFO-INTERNAL */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[330],(void **)(void *)&LnkLI330,first,ap);va_end(ap);return V1;} /* REAL-GET-METHOD */
static void LnkT329(){ call_or_link(VV[329],(void **)(void *)&Lnk329);} /* EVERY */
static void LnkT328(ptr) object *ptr;{ call_or_link_closure(VV[328],(void **)(void *)&Lnk328,(void **)(void *)&Lclptr328);} /* METHOD-SPECIALIZERS */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* FUNCTION-ARGLIST */
static void LnkT321(ptr) object *ptr;{ call_or_link_closure(VV[321],(void **)(void *)&Lnk321,(void **)(void *)&Lclptr321);} /* MAKE-INSTANCE */
static void LnkT320(){ call_or_link(VV[320],(void **)(void *)&Lnk320);} /* METHOD-PROTOTYPE-FOR-GF */
static void LnkT319(){ call_or_link(VV[319],(void **)(void *)&Lnk319);} /* ENSURE-GENERIC-FUNCTION */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,1,first,ap);va_end(ap);return V1;} /* PARSE-SPECIALIZERS */
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[316],(void **)(void *)&LnkLI316,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT315(ptr) object *ptr;{ call_or_link_closure(VV[315],(void **)(void *)&Lnk315,(void **)(void *)&Lclptr315);} /* GENERIC-FUNCTION-P */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)(void *)&Lnk314,(void **)(void *)&Lclptr314);} /* METHOD-COMBINATION-P */
static void LnkT313(ptr) object *ptr;{ call_or_link_closure(VV[313],(void **)(void *)&Lnk313,(void **)(void *)&Lclptr313);} /* PCL METHOD-CLASS slot WRITER */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* *SUBTYPEP */
static void LnkT311(ptr) object *ptr;{ call_or_link_closure(VV[311],(void **)(void *)&Lnk311,(void **)(void *)&Lclptr311);} /* CLASS-EQ-SPECIALIZER */
static object  LnkTLI310(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[310],(void **)(void *)&LnkLI310,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* SET-FUNCTION-NAME */
static void LnkT308(ptr) object *ptr;{ call_or_link_closure(VV[308],(void **)(void *)&Lnk308,(void **)(void *)&Lclptr308);} /* GENERIC-FUNCTION-METHODS */
static object  LnkTLI298(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[298],(void **)(void *)&LnkLI298,2,first,ap);va_end(ap);return V1;} /* PLIST-VALUE */
static void LnkT307(ptr) object *ptr;{ call_or_link_closure(VV[307],(void **)(void *)&Lnk307,(void **)(void *)&Lclptr307);} /* PCL SLOT-NAME slot WRITER */
static void LnkT304(ptr) object *ptr;{ call_or_link_closure(VV[304],(void **)(void *)&Lnk304,(void **)(void *)&Lclptr304);} /* SLOT-DEFINITION-NAME */
static void LnkT306(ptr) object *ptr;{ call_or_link_closure(VV[306],(void **)(void *)&Lnk306,(void **)(void *)&Lclptr306);} /* PCL SLOT-DEFINITION slot WRITER */
static void LnkT305(){ call_or_link(VV[305],(void **)(void *)&Lnk305);} /* FIND */
static void LnkT303(ptr) object *ptr;{ call_or_link_closure(VV[303],(void **)(void *)&Lnk303,(void **)(void *)&Lclptr303);} /* CLASS-DIRECT-SLOTS */
static void LnkT302(ptr) object *ptr;{ call_or_link_closure(VV[302],(void **)(void *)&Lnk302,(void **)(void *)&Lclptr302);} /* PCL SLOT-NAME slot READER */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)(void *)&Lnk301,(void **)(void *)&Lclptr301);} /* SLOT-CLASS-P */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* ACCESSOR-METHOD-CLASS */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* PCL SLOT-DEFINITION slot READER */
static object  LnkTLI297(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[297],(void **)(void *)&LnkLI297,first,ap);va_end(ap);return V1;} /* INITIALIZE-METHOD-FUNCTION */
static void LnkT296(ptr) object *ptr;{ call_or_link_closure(VV[296],(void **)(void *)&Lnk296,(void **)(void *)&Lclptr296);} /* LEGAL-SLOT-NAME-P */
static void LnkT295(ptr) object *ptr;{ call_or_link_closure(VV[295],(void **)(void *)&Lnk295,(void **)(void *)&Lclptr295);} /* LEGAL-DOCUMENTATION-P */
static void LnkT294(ptr) object *ptr;{ call_or_link_closure(VV[294],(void **)(void *)&Lnk294,(void **)(void *)&Lclptr294);} /* LEGAL-METHOD-FUNCTION-P */
static void LnkT293(ptr) object *ptr;{ call_or_link_closure(VV[293],(void **)(void *)&Lnk293,(void **)(void *)&Lclptr293);} /* LEGAL-SPECIALIZERS-P */
static void LnkT292(ptr) object *ptr;{ call_or_link_closure(VV[292],(void **)(void *)&Lnk292,(void **)(void *)&Lclptr292);} /* LEGAL-LAMBDA-LIST-P */
static void LnkT291(ptr) object *ptr;{ call_or_link_closure(VV[291],(void **)(void *)&Lnk291,(void **)(void *)&Lclptr291);} /* LEGAL-QUALIFIERS-P */
static void LnkT290(ptr) object *ptr;{ call_or_link_closure(VV[290],(void **)(void *)&Lnk290,(void **)(void *)&Lclptr290);} /* EQL-SPECIALIZER-P */
static void LnkT289(ptr) object *ptr;{ call_or_link_closure(VV[289],(void **)(void *)&Lnk289,(void **)(void *)&Lclptr289);} /* CLASSP */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* SPECIALIZERP */
static void LnkT287(ptr) object *ptr;{ call_or_link_closure(VV[287],(void **)(void *)&Lnk287,(void **)(void *)&Lclptr287);} /* LEGAL-SPECIALIZER-P */
static void LnkT286(ptr) object *ptr;{ call_or_link_closure(VV[286],(void **)(void *)&Lnk286,(void **)(void *)&Lclptr286);} /* LEGAL-QUALIFIER-P */
static void LnkT285(ptr) object *ptr;{ call_or_link_closure(VV[285],(void **)(void *)&Lnk285,(void **)(void *)&Lclptr285);} /* ACCESSOR-METHOD-SLOT-NAME */
static object  LnkTLI284(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[284],(void **)(void *)&LnkLI284,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* METHOD-QUALIFIERS */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* GENERIC-FUNCTION-NAME */
static void LnkT281(ptr) object *ptr;{ call_or_link_closure(VV[281],(void **)(void *)&Lnk281,(void **)(void *)&Lclptr281);} /* METHOD-GENERIC-FUNCTION */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* SLOT-BOUNDP-NORMAL */
static void LnkT279(ptr) object *ptr;{ call_or_link_closure(VV[279],(void **)(void *)&Lnk279,(void **)(void *)&Lclptr279);} /* PCL SPECIALIZERS slot READER */
static void LnkT278(ptr) object *ptr;{ call_or_link_closure(VV[278],(void **)(void *)&Lnk278,(void **)(void *)&Lclptr278);} /* LISP FUNCTION slot WRITER */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static void LnkT276(ptr) object *ptr;{ call_or_link_closure(VV[276],(void **)(void *)&Lnk276,(void **)(void *)&Lclptr276);} /* PCL FAST-FUNCTION slot READER */
static void LnkT275(ptr) object *ptr;{ call_or_link_closure(VV[275],(void **)(void *)&Lnk275,(void **)(void *)&Lclptr275);} /* LISP FUNCTION slot READER */
static void LnkT274(){ call_or_link(VV[274],(void **)(void *)&Lnk274);} /* GET-KEY-ARG-TAIL */
static void LnkT273(ptr) object *ptr;{ call_or_link_closure(VV[273],(void **)(void *)&Lnk273,(void **)(void *)&Lclptr273);} /* PCL ALLOCATION slot WRITER */
static void LnkT272(ptr) object *ptr;{ call_or_link_closure(VV[272],(void **)(void *)&Lnk272,(void **)(void *)&Lclptr272);} /* LISP CLASS slot READER */
static void LnkT271(ptr) object *ptr;{ call_or_link_closure(VV[271],(void **)(void *)&Lnk271,(void **)(void *)&Lclptr271);} /* PCL ALLOCATION slot READER */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT268(){ call_or_link(VV[268],(void **)(void *)&Lnk268);} /* SLOT-VALUE-OR-DEFAULT */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[267],(void **)(void *)&LnkLI267,first,ap);va_end(ap);return V1;} /* CAPITALIZE-WORDS */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)(void *)&LnkLI266,first,ap);va_end(ap);return V1;} /* NAMED-OBJECT-PRINT-FUNCTION */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[265],(void **)(void *)&LnkLI265,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT264(ptr) object *ptr;{ call_or_link_closure(VV[264],(void **)(void *)&Lnk264,(void **)(void *)&Lclptr264);} /* CLASS-NAME */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

