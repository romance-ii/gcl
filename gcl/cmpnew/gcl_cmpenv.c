
#include "cmpinclude.h"
#include "gcl_cmpenv.h"
void init_gcl_cmpenv(){do_init(VV);}
/*	local entry for function INIT-ENV	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	setq(VV[0],small_fixnum(0));
	setq(VV[1],small_fixnum(0));
	setq(VV[2],small_fixnum(-1));
	setq(VV[3],small_fixnum(0));
	setq(VV[4],small_fixnum(0));
	setq(VV[5],Cnil);
	setq(VV[6],Cnil);
	setq(VV[7],Cnil);
	setq(VV[8],Cnil);
	setq(VV[9],Cnil);
	setq(VV[10],Cnil);
	setq(VV[11],Cnil);
	setq(VV[12],Cnil);
	setq(VV[13],Cnil);
	setq(VV[14],Cnil);
	setq(VV[15],Cnil);
	setq(VV[16],Cnil);
	setq(VV[17],small_fixnum(0));
	setq(VV[18],Cnil);
	{object V1 = Cnil;
	VMR1(V1)}
	return Cnil;
}
/*	macro definition for NEXT-CFUN	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	base[2]= VV[19];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function ADD-SYMBOL	*/

static object LI3(V4)

object V4;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V5;
	{register object x= (V4),V6= symbol_value(VV[5]);
	while(!endp(V6))
	if(type_of(V6->c.c_car)==t_cons &&eql(x,V6->c.c_car->c.c_car)){
	V5= (V6->c.c_car);
	goto T38;
	}else V6=V6->c.c_cdr;
	V5= Cnil;}
	goto T38;
T38:;
	if(((V5))==Cnil){
	goto T40;}
	{object V7 = cadr((V5));
	VMR3(V7)}
	goto T40;
T40:;
	(void)((*(LnkLI113))((V4)));
	{object V8;
	V8= list(2,(V4),symbol_value(VV[2]));
	setq(VV[5],make_cons((V8),symbol_value(VV[5])));}
	{object V9 = symbol_value(VV[2]);
	VMR3(V9)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WT-TO-STRING	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	bds_check;
	{object V10;
	check_arg(1);
	V10=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk114)();
	vs_top=sup;
	bds_bind(VV[20],vs_base[0]);
	bds_bind(VV[21],Cnil);
	(void)((*(LnkLI115))((V10)));
	base[3]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk116)();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function ADD-OBJECT	*/

static object LI5(V12)

register object V12;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V13;
	V13= Cnil;
	base[0]= (V12);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T51;}
	if(!(type_of((V12))==t_cons)){
	goto T56;}
	if(!((car((V12)))==(VV[22]))){
	goto T56;}
	base[0]= cdr((V12));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T56;}
	V12= cdr((V12));
	goto T54;
	goto T56;
T56:;
	base[0]= (V12);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V14= vs_base[0];
	V12= list(2,VV[23],V14);
	goto T54;
T54:;
	(void)((*(LnkLI113))(Cnil));
	{object V15;
	V15= list(2,symbol_value(VV[2]),(V12));
	setq(VV[24],make_cons((V15),symbol_value(VV[24])));}
	{object V16 = symbol_value(VV[2]);
	VMR5(V16)}
	goto T51;
T51:;
	{register object x= (V12),V17= symbol_value(VV[5]);
	while(!endp(V17))
	if(type_of(V17->c.c_car)==t_cons &&eql(x,V17->c.c_car->c.c_car)){
	V13= (V17->c.c_car);
	goto T74;
	}else V17=V17->c.c_cdr;
	V13= Cnil;}
	goto T74;
T74:;
	if(((V13))==Cnil){
	goto T72;}
	{object V18 = cadr((V13));
	VMR5(V18)}
	goto T72;
T72:;
	base[0]= (V12);
	base[1]= VV[25];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk119)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T76;}
	(void)((*(LnkLI113))(Cnil));
	{object V19;{object V20;
	V20= symbol_value(VV[2]);{object V22;
	base[1]= (V12);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk120)();
	vs_top=sup;
	V22= vs_base[0];
	if(V22==Cnil)goto T84;
	V21= V22;
	goto T83;
	goto T84;
T84:;}
	V21= (VFUN_NARGS=1,(*(LnkLI121))(VV[27]));
	goto T83;
T83:;
	V19= list(2,V20,list(2,VV[26],V21));}
	setq(VV[24],make_cons((V19),symbol_value(VV[24])));}
	{object V23 = symbol_value(VV[2]);
	VMR5(V23)}
	goto T76;
T76:;
	(void)((*(LnkLI113))((V12)));
	{object V24;
	V24= list(2,(V12),symbol_value(VV[2]));
	setq(VV[5],make_cons((V24),symbol_value(VV[5])));}
	{object V25 = symbol_value(VV[2]);
	VMR5(V25)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-CONSTANT	*/

static object LI6(V27)

object V27;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V28;
	V28= Cnil;
	{register object x= (V27),V29= symbol_value(VV[6]);
	while(!endp(V29))
	if(type_of(V29->c.c_car)==t_cons &&eql(x,V29->c.c_car->c.c_car)){
	V28= (V29->c.c_car);
	goto T96;
	}else V29=V29->c.c_cdr;
	V28= Cnil;}
	goto T96;
T96:;
	if(((V28))==Cnil){
	goto T94;}
	{object V30 = cadr((V28));
	VMR6(V30)}
	goto T94;
T94:;
	(void)((*(LnkLI113))(Cnil));
	{object V31;
	V31= list(2,symbol_value(VV[2]),(V27));
	setq(VV[24],make_cons((V31),symbol_value(VV[24])));}
	{object V32;
	V32= list(2,(V27),symbol_value(VV[2]));
	setq(VV[6],make_cons((V32),symbol_value(VV[6])));}
	{object V33 = symbol_value(VV[2]);
	VMR6(V33)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for NEXT-CVAR	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V34=base[0]->c.c_cdr;
	if(!endp(V34))invalid_macro_call();}
	base[2]= VV[28];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for NEXT-CMACRO	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V35=base[0]->c.c_cdr;
	if(!endp(V35))invalid_macro_call();}
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function FUNCTION-ARG-TYPES	*/

static object LI9(V37)

object V37;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V38;
	register object V39;
	object V40;
	V38= Cnil;
	V39= Cnil;
	V40= Cnil;
	{register object V41;
	register long V42;
	V42= 0;
	V41= (V37);
	goto T111;
T111:;
	if(!(endp_prop((V41)))){
	goto T112;}
	V40= reverse((V39));
	goto T108;
	goto T112;
T112:;
	{register object x= car((V41)),V43= VV[30];
	while(!endp(V43))
	if(eql(x,V43->c.c_car)){
	goto T117;
	}else V43=V43->c.c_cdr;}
	if(!(equal(car((V41)),VV[31]))){
	goto T116;}
	goto T117;
T117:;
	V38= Ct;
	V44= make_cons(VV[31],(V39));
	V40= reverse(/* INLINE-ARGS */V44);
	goto T108;
	goto T116;
T116:;
	{object V45;
	if(!((V42)<(9))){
	goto T126;}
	{register object V46;
	V46= (*(LnkLI122))(car((V41)));
	if(!((VV[32])==((V46)))){
	goto T130;}
	V45= Ct;
	goto T124;
	goto T130;
T130:;
	V45= (V46);
	goto T124;}
	goto T126;
T126:;
	if(!((car((V41)))==(VV[31]))){
	goto T133;}
	V45= VV[31];
	goto T124;
	goto T133;
T133:;
	V45= Ct;
	goto T124;
T124:;
	V39= make_cons((V45),(V39));}
	V41= cdr((V41));
	V42= (long)(1)+(V42);
	goto T111;}
	goto T108;
T108:;
	if(((V38))==Cnil){
	goto T140;}
	{register object V47;
	V47= (V40);
	goto T144;
T144:;
	if(((V47))!=Cnil){
	goto T145;}
	goto T140;
	goto T145;
T145:;
	{register object V49;
	if(!((car((V47)))==(VV[31]))){
	goto T152;}
	V49= VV[31];
	goto T150;
	goto T152;
T152:;
	V49= Ct;
	goto T150;
T150:;
	if(type_of(V47)!=t_cons)FEwrong_type_argument(Scons,V47);
	(V47)->c.c_car = (V49);}
	V47= cdr((V47));
	goto T144;}
	goto T140;
T140:;
	{object V50 = (V40);
	VMR9(V50)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FUNCTION-RETURN-TYPE	*/

static object LI10(V52)

register object V52;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	if((car((V52)))==(VV[33])){
	goto T159;}
	goto T158;
	goto T159;
T159:;
	V52= cdr((V52));
	goto T158;
T158:;
	if(!(endp_prop((V52)))){
	goto T163;}
	{object V53 = Cnil;
	VMR10(V53)}
	goto T163;
T163:;
	if(!(type_of(car((V52)))==t_cons)){
	goto T166;}
	if(!((caar((V52)))==(VV[33]))){
	goto T166;}
	V52= cdr(car((V52)));
	goto TTL;
	goto T166;
T166:;
	{register object V54;
	register object V55;
	V54= (V52);
	V55= Cnil;
	goto T173;
T173:;
	if(!(endp_prop((V54)))){
	goto T174;}
	if(!(((V54))==Cnil)){
	goto T178;}
	goto T177;
	goto T178;
T178:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[34],(V52))));
	goto T177;
T177:;
	{object V56 = nreverse((V55));
	VMR10(V56)}
	goto T174;
T174:;
	{register object V57;
	if(!((car((V54)))==(VV[31]))){
	goto T184;}
	V57= VV[31];
	goto T182;
	goto T184;
T184:;
	V57= (*(LnkLI122))(car((V54)));
	goto T182;
T182:;
	if(!(((V57))==(VV[32]))){
	goto T186;}
	V57= Ct;
	goto T186;
T186:;
	{register object V58;
	V58= (V57);
	V55= make_cons((V58),(V55));}}
	V54= cdr((V54));
	goto T173;}
	return Cnil;
}
/*	local entry for function ADD-FUNCTION-PROCLAMATION	*/

static object LI11(V62,V63,V64)

object V62;register object V63;register object V64;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V65;
	register object V66;
	register object V67;
	V65= Ct;
	V66= Cnil;
	V67= Cnil;
	if(!(type_of((V62))==t_symbol)){
	goto T199;}
	if(!(type_of((V63))==t_cons||((V63))==Cnil)){
	goto T199;}
	{object V68= cdr((V63));
	if(!(type_of(V68)==t_cons||(V68)==Cnil)){
	goto T199;}}
	if(((V63))==Cnil){
	goto T206;}
	if(!((car((V63)))==(VV[31]))){
	goto T207;}
	goto T206;
T206:;
	V66= VV[35];
	goto T205;
	goto T207;
T207:;
	V66= (*(LnkLI124))(car((V63)));
	goto T205;
T205:;
	V67= (*(LnkLI125))(cdr((V63)));
	if(!(type_of((V67))==t_cons)){
	goto T217;}
	if(!(endp_prop(cdr((V67))))){
	goto T217;}
	if((car((V67)))==(VV[31])){
	goto T217;}
	if(type_of((V66))==t_cons){
	goto T228;}
	V70= Cnil;
	goto T227;
	goto T228;
T228:;
	V70= (V66);
	goto T227;
T227:;
	{register object x= VV[31],V69= V70;
	while(!endp(V69))
	if(eql(x,V69->c.c_car)){
	goto T226;
	}else V69=V69->c.c_cdr;
	goto T225;}
	goto T226;
T226:;
	V67= Ct;
	goto T223;
	goto T225;
T225:;
	V67= car((V67));
	goto T223;
T223:;
	goto T215;
	goto T217;
T217:;
	V65= Cnil;
	goto T215;
T215:;
	{object V71;
	if(type_of((V66))==t_cons||((V66))==Cnil){
	goto T233;}
	V71= Cnil;
	goto T232;
	goto T233;
T233:;
	V71= (((long)length((V66)))<(64)?Ct:Cnil);
	goto T232;
T232:;
	if(((V71))==Cnil){
	goto T236;}
	goto T231;
	goto T236;
T236:;
	V65= Cnil;}
	goto T231;
T231:;
	{register object V72;
	V72= (V62);
	goto T240;
T240:;
	if(!(type_of((V72))==t_symbol)){
	goto T244;}
	goto T243;
	goto T244;
T244:;
	V62= (V72);
	V64= Cnil;
	goto TTL;
	goto T243;
T243:;
	if(!(((V66))==(VV[31]))){
	goto T252;}
	(void)(remprop((V72),VV[36]));
	goto T250;
	goto T252;
T252:;
	(void)(putprop((V72),(V66),VV[36]));
	goto T250;
T250:;
	(void)(putprop((V72),(V67),VV[37]));
	if(((V65))==Cnil){
	goto T257;}
	(void)(putprop((V72),Ct,VV[38]));
	goto T255;
	goto T257;
T257:;
	(void)(remprop((V72),VV[38]));
	goto T255;
T255:;
	V64= cdr((V64));
	if(!(type_of((V64))==t_cons)){
	goto T262;}
	goto T261;
	goto T262;
T262:;
	{object V73 = VV[39];
	VMR11(V73)}
	goto T261;
T261:;
	V72= car((V64));
	goto T240;}
	goto T199;
T199:;
	{object V74 = (VFUN_NARGS=3,(*(LnkLI123))(VV[40],(V62),(V63)));
	VMR11(V74)}}
	return Cnil;
}
/*	local entry for function ADD-FUNCTION-DECLARATION	*/

static object LI12(V78,V79,V80)

object V78;object V79;object V80;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(!(type_of((V78))==t_symbol)){
	goto T268;}
	{object V81;
	V82= (*(LnkLI126))((V78));
	V83= (*(LnkLI124))((V79));
	V81= list(3,/* INLINE-ARGS */V82,/* INLINE-ARGS */V83,(*(LnkLI125))((V80)));
	setq(VV[15],make_cons((V81),symbol_value(VV[15])));
	{object V84 = symbol_value(VV[15]);
	VMR12(V84)}}
	goto T268;
T268:;
	{object V85 = (VFUN_NARGS=2,(*(LnkLI123))(VV[41],(V78)));
	VMR12(V85)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-ARG-TYPES	*/

static object LI13(V87)

object V87;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V88;
	V88= Cnil;
	{register object x= (V87),V89= symbol_value(VV[15]);
	while(!endp(V89))
	if(type_of(V89->c.c_car)==t_cons &&eql(x,V89->c.c_car->c.c_car)){
	V88= (V89->c.c_car);
	goto T276;
	}else V89=V89->c.c_cdr;
	V88= Cnil;}
	goto T276;
T276:;
	if(((V88))==Cnil){
	goto T274;}
	{object V90 = cadr((V88));
	VMR13(V90)}
	goto T274;
T274:;
	{object V91 = get((V87),VV[36],Cnil);
	VMR13(V91)}}
	return Cnil;
}
/*	local entry for function GET-RETURN-TYPE	*/

static object LI14(V93)

register object V93;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V94;
	object V95;
	register object V96;
	{register object x= (V93),V97= symbol_value(VV[15]);
	while(!endp(V97))
	if(type_of(V97->c.c_car)==t_cons &&eql(x,V97->c.c_car->c.c_car)){
	V94= (V97->c.c_car);
	goto T277;
	}else V97=V97->c.c_cdr;
	V94= Cnil;}
	goto T277;
T277:;
	if(((V94))==Cnil){
	goto T280;}
	V95= caddr((V94));
	goto T278;
	goto T280;
T280:;
	V95= get((V93),VV[37],Cnil);
	goto T278;
T278:;
	if((get((V93),VV[42],Cnil))==Cnil){
	goto T284;}
	V96= VV[43];
	goto T282;
	goto T284;
T284:;
	V96= get((V93),VV[44],Cnil);
	goto T282;
T282:;
	if(((V95))==Cnil){
	goto T287;}
	if(((V96))==Cnil){
	goto T290;}
	V96= (*(LnkLI127))((V96),(V95));
	if(((V96))==Cnil){
	goto T293;}
	{object V98 = (V96);
	VMR14(V98)}
	goto T293;
T293:;
	{object V99 = (VFUN_NARGS=2,(*(LnkLI128))(VV[45],(V93)));
	VMR14(V99)}
	goto T290;
T290:;
	{object V100 = (V95);
	VMR14(V100)}
	goto T287;
T287:;
	{object V101 = (V96);
	VMR14(V101)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-LOCAL-ARG-TYPES	*/

static object LI15(V103)

object V103;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V104;
	V104= Cnil;
	{register object x= (V103),V105= symbol_value(VV[15]);
	while(!endp(V105))
	if(type_of(V105->c.c_car)==t_cons &&eql(x,V105->c.c_car->c.c_car)){
	V104= (V105->c.c_car);
	goto T300;
	}else V105=V105->c.c_cdr;
	V104= Cnil;}
	goto T300;
T300:;
	if(((V104))==Cnil){
	goto T298;}
	{object V106 = cadr((V104));
	VMR15(V106)}
	goto T298;
T298:;
	{object V107 = Cnil;
	VMR15(V107)}}
	return Cnil;
}
/*	local entry for function GET-LOCAL-RETURN-TYPE	*/

static object LI16(V109)

object V109;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V110;
	V110= Cnil;
	{register object x= (V109),V111= symbol_value(VV[15]);
	while(!endp(V111))
	if(type_of(V111->c.c_car)==t_cons &&eql(x,V111->c.c_car->c.c_car)){
	V110= (V111->c.c_car);
	goto T305;
	}else V111=V111->c.c_cdr;
	V110= Cnil;}
	goto T305;
T305:;
	if(((V110))==Cnil){
	goto T303;}
	{object V112 = caddr((V110));
	VMR16(V112)}
	goto T303;
T303:;
	{object V113 = Cnil;
	VMR16(V113)}}
	return Cnil;
}
/*	local entry for function RESET-TOP	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	princ_str("vs_top=sup;",VV[46]);
	setq(VV[47],Ct);
	{object V114 = Ct;
	VMR17(V114)}
	return Cnil;
}
/*	macro definition for BASE-USED	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V115=base[0]->c.c_cdr;
	if(!endp(V115))invalid_macro_call();}
	base[2]= VV[48];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function INLINE-POSSIBLE	*/

static object LI19(V117)

object V117;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(symbol_value(VV[49])!=Cnil){
	V118= symbol_value(VV[49]);
	goto T309;}{object V119;
	{register object x= (V117),V120= symbol_value(VV[18]);
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	V119= V120;
	goto T311;
	}else V120=V120->c.c_cdr;
	V119= Cnil;}
	goto T311;
T311:;
	if(V119==Cnil)goto T310;
	V118= V119;
	goto T309;
	goto T310;
T310:;}
	V118= get((V117),VV[50],Cnil);
	goto T309;
T309:;
	{object V121 = ((V118)==Cnil?Ct:Cnil);
	VMR19(V121)}
	return Cnil;
}
/*	local entry for function PROCLAIM	*/

static object LI20(V123)

object V123;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V124= car((V123));
	if((V124!= VV[129]))goto T313;
	{register object V125;
	object V126;
	V125= cdr((V123));
	V126= car((V125));
	goto T317;
T317:;
	if(!(endp_prop((V125)))){
	goto T318;}
	goto T312;
	goto T318;
T318:;
	if(!(type_of((V126))==t_symbol)){
	goto T324;}
	base[2]= (V126);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk130)();
	vs_top=sup;
	goto T322;
	goto T324;
T324:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[51],(V126))));
	goto T322;
T322:;
	V125= cdr((V125));
	V126= car((V125));
	goto T317;}
	goto T313;
T313:;
	if((V124!= VV[131]))goto T332;
	{register object V127;
	register object V128;
	V127= cdr((V123));
	V128= car((V127));
	goto T336;
T336:;
	if(!(endp_prop((V127)))){
	goto T337;}
	goto T312;
	goto T337;
T337:;
	if(!(type_of((V128))==t_symbol)){
	goto T341;}
	V128= list(2,(V128),small_fixnum(3));
	goto T341;
T341:;
	if(!(type_of((V128))==t_cons)){
	goto T346;}
	if(!(type_of(cdr((V128)))==t_cons)){
	goto T346;}
	{object V129= cadr((V128));
	if(!(type_of(V129)==t_fixnum||
type_of(V129)==t_bignum||
type_of(V129)==t_ratio||
type_of(V129)==t_shortfloat||
type_of(V129)==t_longfloat||
type_of(V129)==t_complex)){
	goto T346;}}
	base[2]= small_fixnum(0);
	base[3]= cadr((V128));
	base[4]= small_fixnum(3);
	vs_top=(vs_base=base+2)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T347;}
	goto T346;
T346:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[52],(V128))));
	goto T345;
	goto T347;
T347:;
	{object V130= car((V128));
	if((V130!= VV[85]))goto T358;
	setq(VV[53],(number_compare(cadr((V128)),small_fixnum(1))>=0?Ct:Cnil));
	setq(VV[54],(number_compare(cadr((V128)),small_fixnum(2))>=0?Ct:Cnil));
	setq(VV[49],(number_compare(cadr((V128)),small_fixnum(3))>=0?Ct:Cnil));
	goto T345;
	goto T358;
T358:;
	if((V130!= VV[86]))goto T364;
	setq(VV[55],cadr((V128)));
	goto T345;
	goto T364;
T364:;
	if((V130!= VV[132]))goto T366;
	setq(VV[56],cadr((V128)));
	goto T345;
	goto T366;
T366:;
	if((V130!= VV[133]))goto T368;
	setq(VV[56],number_minus(small_fixnum(3),cadr((V128))));
	goto T345;
	goto T368;
T368:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[57],car((V128)))));}
	goto T345;
T345:;
	V127= cdr((V127));
	V128= car((V127));
	goto T336;}
	goto T332;
T332:;
	if((V124!= VV[134]))goto T375;
	if(!(type_of(cdr((V123)))==t_cons)){
	goto T377;}
	(void)((*(LnkLI135))(cadr((V123)),cddr((V123))));
	goto T312;
	goto T377;
T377:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[58],(V123))));
	goto T312;
	goto T375;
T375:;
	if((V124!= VV[136])
	&& (V124!= VV[137])
	&& (V124!= VV[138])
	&& (V124!= VV[139]))goto T379;
	(void)((*(LnkLI135))(car((V123)),cdr((V123))));
	goto T312;
	goto T379;
T379:;
	if((V124!= VV[140]))goto T380;
	if(!(type_of(cdr((V123)))==t_cons)){
	goto T382;}
	if(!(type_of(cadr((V123)))==t_cons)){
	goto T382;}
	if(!((caadr((V123)))==(VV[26]))){
	goto T382;}
	(void)((*(LnkLI141))(caddr((V123)),cdr(cadr((V123))),cddr((V123))));
	goto T312;
	goto T382;
T382:;
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[59],(V123))));
	goto T312;
	goto T380;
T380:;
	if((V124!= VV[26]))goto T388;
	if(!(type_of(cdr((V123)))==t_cons)){
	goto T390;}
	(void)((*(LnkLI141))(cadr((V123)),cddr((V123)),Cnil));
	goto T312;
	goto T390;
T390:;
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[60],(V123))));
	goto T312;
	goto T388;
T388:;
	if((V124!= VV[90]))goto T392;
	{register object V131;
	object V132;
	V131= cdr((V123));
	V132= car((V131));
	goto T396;
T396:;
	if(!(endp_prop((V131)))){
	goto T397;}
	goto T312;
	goto T397;
T397:;
	if(!(type_of((V132))==t_symbol)){
	goto T403;}
	(void)(remprop((V132),VV[50]));
	goto T401;
	goto T403;
T403:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[61],(V132))));
	goto T401;
T401:;
	V131= cdr((V131));
	V132= car((V131));
	goto T396;}
	goto T392;
T392:;
	if((V124!= VV[92]))goto T410;
	{register object V133;
	object V134;
	V133= cdr((V123));
	V134= car((V133));
	goto T414;
T414:;
	if(!(endp_prop((V133)))){
	goto T415;}
	goto T312;
	goto T415;
T415:;
	if(!(type_of((V134))==t_symbol)){
	goto T421;}
	(void)(putprop((V134),Ct,VV[50]));
	goto T419;
	goto T421;
T421:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[62],(V134))));
	goto T419;
T419:;
	V133= cdr((V133));
	V134= car((V133));
	goto T414;}
	goto T410;
T410:;
	if((V124!= VV[79])
	&& (V124!= VV[142]))goto T428;
	{register object V135;
	object V136;
	V135= cdr((V123));
	V136= car((V135));
	goto T432;
T432:;
	if(!(endp_prop((V135)))){
	goto T433;}
	goto T312;
	goto T433;
T433:;
	if(type_of((V136))==t_symbol){
	goto T437;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[63],(V136))));
	goto T437;
T437:;
	V135= cdr((V135));
	V136= car((V135));
	goto T432;}
	goto T428;
T428:;
	if((V124!= VV[143]))goto T445;
	{register object V137;
	register object V138;
	V137= cdr((V123));
	V138= car((V137));
	goto T449;
T449:;
	if(!(endp_prop((V137)))){
	goto T450;}
	goto T312;
	goto T450;
T450:;
	if(!(type_of((V138))==t_symbol)){
	goto T456;}
	{register object x= (V138),V139= symbol_value(VV[64]);
	while(!endp(V139))
	if(eql(x,V139->c.c_car)){
	goto T454;
	}else V139=V139->c.c_cdr;}
	setq(VV[64],make_cons(V138,symbol_value(VV[64])));
	goto T454;
	goto T456;
T456:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[65],(V138))));
	goto T454;
T454:;
	V137= cdr((V137));
	V138= car((V137));
	goto T449;}
	goto T445;
T445:;
	if((V124== VV[144])
	|| (V124== VV[145])
	|| (V124== VV[146])
	|| (V124== VV[147])
	|| (V124== VV[148]))goto T467;
	if((V124== VV[137])
	|| (V124== VV[149])
	|| (V124== VV[25])
	|| (V124== VV[150])
	|| (V124== VV[151]))goto T467;
	if((V124== VV[152])
	|| (V124== VV[136])
	|| (V124== VV[153])
	|| (V124== VV[154])
	|| (V124== VV[32]))goto T467;
	if((V124== VV[155])
	|| (V124== VV[156])
	|| (V124== VV[139])
	|| (V124== Cnil)
	|| (V124== VV[157]))goto T467;
	if((V124== VV[158])
	|| (V124== VV[159])
	|| (V124== VV[160])
	|| (V124== VV[161])
	|| (V124== VV[162]))goto T467;
	if((V124== VV[163])
	|| (V124== VV[164])
	|| (V124== VV[165])
	|| (V124== VV[138])
	|| (V124== VV[166]))goto T467;
	if((V124== VV[167])
	|| (V124== VV[168])
	|| (V124== VV[169])
	|| (V124== VV[170])
	|| (V124== VV[171]))goto T467;
	if((V124== VV[172])
	|| (V124== VV[173])
	|| (V124== VV[174])
	|| (V124== VV[175])
	|| (V124== Ct))goto T467;
	if((V124!= VV[176])
	&& (V124!= VV[177])
	&& (V124!= VV[178]))goto T466;
	goto T467;
T467:;
	(void)((*(LnkLI135))(car((V123)),cdr((V123))));
	goto T312;
	goto T466;
T466:;
	{register object x= car((V123)),V141= symbol_value(VV[64]);
	while(!endp(V141))
	if(eql(x,V141->c.c_car)){
	goto T468;
	}else V141=V141->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[66],car((V123)))));
	goto T468;
T468:;
	base[0]= get(car((V123)),VV[67],Cnil);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T471;}
	goto T312;
	goto T471;
T471:;
	{register object V142;
	object V143;
	V142= cdr((V123));
	V143= car((V142));
	goto T477;
T477:;
	if(!(endp_prop((V142)))){
	goto T478;}
	goto T312;
	goto T478;
T478:;
	V144= get(car((V123)),VV[67],Cnil);
	(void)((
	V145 = V144,
	(type_of(V145) == t_sfun ?(*((V145)->sfn.sfn_self)):
	(fcall.fun=(V145),fcall.argd=1,fcalln))((V143))));
	V142= cdr((V142));
	V143= car((V142));
	goto T477;}}
	goto T312;
T312:;
	{object V146 = Cnil;
	VMR20(V146)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAIM-VAR	*/

static object LI21(V149,V150)

register object V149;object V150;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	V149= (*(LnkLI122))((V149));
	{register object V151;
	register object V152;
	V151= (V150);
	V152= car((V151));
	goto T494;
T494:;
	if(!(endp_prop((V151)))){
	goto T495;}
	{object V153 = Cnil;
	VMR21(V153)}
	goto T495;
T495:;
	if(!(type_of((V152))==t_symbol)){
	goto T501;}
	{register object V154;
	register object V155;
	V154= get((V152),VV[68],Cnil);
	V155= (*(LnkLI179))((V152));
	if(((V154))==Cnil){
	goto T508;}
	V154= (*(LnkLI127))((V154),(V149));
	goto T506;
	goto T508;
T508:;
	V154= (V149);
	goto T506;
T506:;
	if(((V155))==Cnil){
	goto T510;}
	V156= structure_ref((V155),VV[69],5);
	V154= (*(LnkLI127))((V154),/* INLINE-ARGS */V156);
	goto T510;
T510:;
	if(((V154))!=Cnil){
	goto T514;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[70],(V152))));
	goto T514;
T514:;
	(void)(putprop((V152),(V154),VV[68]));
	if(((V155))==Cnil){
	goto T499;}
	(void)(structure_set((V155),VV[69],5,(V154)));
	goto T499;}
	goto T501;
T501:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[71],(V152))));
	goto T499;
T499:;
	V151= cdr((V151));
	V152= car((V151));
	goto T494;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C1BODY	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V157;
	object V158;
	check_arg(2);
	V157=(base[0]);
	V158=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V159;
	object V160;
	register object V161;
	object V162;
	object V163;
	object V164;
	V159= Cnil;
	V160= Cnil;
	V161= Cnil;
	V162= Cnil;
	V163= Cnil;
	V164= Cnil;
	goto T533;
T533:;
	if(!(endp_prop((V157)))){
	goto T535;}
	goto T531;
	goto T535;
T535:;
	V164= (*(LnkLI180))(car((V157)));
	if(!(type_of((V164))==t_string)){
	goto T542;}
	if(((V158))==Cnil){
	goto T545;}
	if(endp_prop(cdr((V157)))){
	goto T545;}
	if(((V163))==Cnil){
	goto T544;}
	goto T545;
T545:;
	goto T531;
	goto T544;
T544:;
	V163= (V164);
	goto T540;
	goto T542;
T542:;
	if(!(type_of((V164))==t_cons)){
	goto T553;}
	if(!((car((V164)))==(VV[72]))){
	goto T553;}
	{object V165;
	register object V166;
	V165= cdr((V164));
	V166= car((V165));
	goto T560;
T560:;
	if(!(endp_prop((V165)))){
	goto T561;}
	goto T540;
	goto T561;
T561:;
	if(!(type_of((V166))==t_cons)){
	goto T566;}
	if(type_of(car((V166)))==t_symbol){
	goto T565;}
	goto T566;
T566:;
	(void)((VFUN_NARGS=2,(*(LnkLI121))(VV[73],(V166))));
	goto T565;
T565:;
	{object V167= car((V166));
	if((V167!= VV[129]))goto T571;
	{register object V168;
	object V169;
	V168= cdr((V166));
	V169= car((V168));
	goto T575;
T575:;
	if(!(endp_prop((V168)))){
	goto T576;}
	goto T570;
	goto T576;
T576:;
	if(type_of((V169))==t_symbol){
	goto T580;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[74],(V166),(V169))));
	goto T580;
T580:;
	V159= make_cons(V169,(V159));
	V168= cdr((V168));
	V169= car((V168));
	goto T575;}
	goto T571;
T571:;
	if((V167!= VV[142]))goto T590;
	{register object V171;
	object V172;
	V171= cdr((V166));
	V172= car((V171));
	goto T594;
T594:;
	if(!(endp_prop((V171)))){
	goto T595;}
	goto T570;
	goto T595;
T595:;
	if(type_of((V172))==t_symbol){
	goto T599;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[75],(V166),(V172))));
	goto T599;
T599:;
	V160= make_cons(V172,(V160));
	V171= cdr((V171));
	V172= car((V171));
	goto T594;}
	goto T590;
T590:;
	if((V167!= VV[134]))goto T609;
	if(!(endp_prop(cdr((V166))))){
	goto T610;}
	(void)((VFUN_NARGS=2,(*(LnkLI121))(VV[76],(V166))));
	goto T610;
T610:;
	{object V174;
	V174= (*(LnkLI122))(cadr((V166)));
	if(((V174))==Cnil){
	goto T570;}
	{register object V175;
	object V176;
	V175= cddr((V166));
	V176= car((V175));
	goto T619;
T619:;
	if(!(endp_prop((V175)))){
	goto T620;}
	goto T570;
	goto T620;
T620:;
	if(type_of((V176))==t_symbol){
	goto T624;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[77],(V166),(V176))));
	goto T624;
T624:;
	{object V177;
	V177= make_cons((V176),(V174));
	V161= make_cons((V177),(V161));}
	V175= cdr((V175));
	V176= car((V175));
	goto T619;}}
	goto T609;
T609:;
	if((V167!= VV[79]))goto T635;
	{register object V178;
	object V179;
	V178= cdr((V166));
	V179= car((V178));
	goto T639;
T639:;
	if(!(endp_prop((V178)))){
	goto T640;}
	goto T570;
	goto T640;
T640:;
	if(type_of((V179))==t_symbol){
	goto T644;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[78],(V166),(V179))));
	goto T644;
T644:;
	{object V180;
	V180= make_cons((V179),VV[79]);
	V161= make_cons((V180),(V161));}
	V178= cdr((V178));
	V179= car((V178));
	goto T639;}
	goto T635;
T635:;
	if((V167!= VV[181]))goto T655;
	{register object V181;
	object V182;
	V181= cdr((V166));
	V182= car((V181));
	goto T659;
T659:;
	if(!(endp_prop((V181)))){
	goto T660;}
	goto T570;
	goto T660;
T660:;
	if(type_of((V182))==t_symbol){
	goto T664;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[80],(V166),(V182))));
	goto T664;
T664:;
	{object V183;
	V183= make_cons((V182),VV[81]);
	V161= make_cons((V183),(V161));}
	V181= cdr((V181));
	V182= car((V181));
	goto T659;}
	goto T655;
T655:;
	if((V167== VV[136])
	|| (V167== VV[137])
	|| (V167== VV[152])
	|| (V167== VV[138])
	|| (V167== VV[144]))goto T676;
	if((V167== VV[145])
	|| (V167== VV[146])
	|| (V167== VV[147])
	|| (V167== VV[148])
	|| (V167== VV[149]))goto T676;
	if((V167== VV[25])
	|| (V167== VV[150])
	|| (V167== VV[151])
	|| (V167== VV[153])
	|| (V167== VV[154]))goto T676;
	if((V167== VV[32])
	|| (V167== VV[155])
	|| (V167== VV[156])
	|| (V167== VV[139])
	|| (V167== Cnil))goto T676;
	if((V167== VV[157])
	|| (V167== VV[158])
	|| (V167== VV[159])
	|| (V167== VV[160])
	|| (V167== VV[161]))goto T676;
	if((V167== VV[162])
	|| (V167== VV[163])
	|| (V167== VV[164])
	|| (V167== VV[165])
	|| (V167== VV[166]))goto T676;
	if((V167== VV[167])
	|| (V167== VV[168])
	|| (V167== VV[169])
	|| (V167== VV[170])
	|| (V167== VV[171]))goto T676;
	if((V167== VV[172])
	|| (V167== VV[173])
	|| (V167== VV[174])
	|| (V167== VV[175])
	|| (V167== Ct))goto T676;
	if((V167!= VV[176])
	&& (V167!= VV[177])
	&& (V167!= VV[178])
	&& (V167!= VV[82]))goto T675;
	goto T676;
T676:;
	{object V184;
	if(!((car((V166)))==(VV[82]))){
	goto T679;}
	V184= car((V166));
	goto T677;
	goto T679;
T679:;
	V184= (*(LnkLI122))(car((V166)));
	goto T677;
T677:;
	if(((V184))==Cnil){
	goto T570;}
	{register object V185;
	object V186;
	V185= cdr((V166));
	V186= car((V185));
	goto T686;
T686:;
	if(!(endp_prop((V185)))){
	goto T687;}
	goto T570;
	goto T687;
T687:;
	if(type_of((V186))==t_symbol){
	goto T691;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[83],(V166),(V186))));
	goto T691;
T691:;
	{object V187;
	V187= make_cons((V186),(V184));
	V161= make_cons((V187),(V161));}
	V185= cdr((V185));
	V186= car((V185));
	goto T686;}}
	goto T675;
T675:;
	V162= make_cons(V166,(V162));}
	goto T570;
T570:;
	V165= cdr((V165));
	V166= car((V165));
	goto T560;}
	goto T553;
T553:;
	goto T531;
	goto T540;
T540:;
	{object V189;
	V189= car((V157));
	V157= cdr((V157));}
	goto T533;
	goto T531;
T531:;
	base[2]= (V157);
	base[3]= (V159);
	base[4]= (V161);
	base[5]= (V160);
	base[6]= (V162);
	base[7]= (V163);
	vs_top=(vs_base=base+2)+6;
	return;}
	}
}
/*	local entry for function C1DECL-BODY	*/

static object LI23(V192,V193)

object V192;object V193;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{register object V194;
	V194= Cnil;
	if(((V192))!=Cnil){
	goto T720;}
	{object V195 = (*(LnkLI182))((V193));
	VMR23(V195)}
	goto T720;
T720:;
	bds_bind(VV[15],symbol_value(VV[15]));
	bds_bind(VV[64],symbol_value(VV[64]));
	bds_bind(VV[18],symbol_value(VV[18]));
	bds_bind(VV[55],symbol_value(VV[55]));
	bds_bind(VV[54],symbol_value(VV[54]));
	{object V196;
	register object V197;
	V196= (V192);
	V197= car((V196));
	goto T726;
T726:;
	if(!(endp_prop((V196)))){
	goto T727;}
	goto T722;
	goto T727;
T727:;
	{object V198= car((V197));
	if((V198!= VV[131]))goto T732;
	{object V199;
	register object V200;
	V199= cdr((V197));
	V200= car((V199));
	goto T736;
T736:;
	if(!(endp_prop((V199)))){
	goto T737;}
	goto T731;
	goto T737;
T737:;
	if(!(type_of((V200))==t_symbol)){
	goto T741;}
	V200= list(2,(V200),small_fixnum(3));
	goto T741;
T741:;
	if(!(type_of((V200))==t_cons)){
	goto T746;}
	if(!(type_of(cdr((V200)))==t_cons)){
	goto T746;}
	{object V201= cadr((V200));
	if(!(type_of(V201)==t_fixnum||
type_of(V201)==t_bignum||
type_of(V201)==t_ratio||
type_of(V201)==t_shortfloat||
type_of(V201)==t_longfloat||
type_of(V201)==t_complex)){
	goto T746;}}
	base[8]= small_fixnum(0);
	base[9]= cadr((V200));
	base[10]= small_fixnum(3);
	vs_top=(vs_base=base+8)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T747;}
	goto T746;
T746:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[84],(V200))));
	goto T745;
	goto T747;
T747:;
	{object V202= car((V200));
	if((V202!= VV[85]))goto T758;
	(VV[54]->s.s_dbind)= ((fix(cadr((V200))))>=(2)?Ct:Cnil);
	{object V203;
	V203= list(2,VV[85],cadr((V200)));
	V194= make_cons((V203),(V194));
	goto T745;}
	goto T758;
T758:;
	if((V202!= VV[86]))goto T763;
	(VV[55]->s.s_dbind)= cadr((V200));
	{object V204;
	V204= list(2,VV[86],cadr((V200)));
	V194= make_cons((V204),(V194));
	goto T745;}
	goto T763;
T763:;
	if((V202!= VV[132])
	&& (V202!= VV[133]))goto T768;
	goto T745;
	goto T768;
T768:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[87],car((V200)))));}
	goto T745;
T745:;
	V199= cdr((V199));
	V200= car((V199));
	goto T736;}
	goto T732;
T732:;
	if((V198!= VV[140]))goto T774;
	if(endp_prop(cdr((V197)))){
	goto T775;}
	if(!(type_of(cadr((V197)))==t_cons)){
	goto T775;}
	if(!((caadr((V197)))==(VV[26]))){
	goto T775;}
	if(!(endp_prop(cdadr((V197))))){
	goto T776;}
	goto T775;
T775:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[88],(V197))));
	goto T731;
	goto T776;
T776:;
	{object V205;
	object V206;
	V205= cddr((V197));
	V206= car((V205));
	goto T787;
T787:;
	if(!(endp_prop((V205)))){
	goto T788;}
	goto T731;
	goto T788;
T788:;
	(void)((*(LnkLI183))((V206),cadadr((V197)),cddadr((V197))));
	V205= cdr((V205));
	V206= car((V205));
	goto T787;}
	goto T774;
T774:;
	if((V198!= VV[26]))goto T798;
	if(endp_prop(cdr((V197)))){
	goto T799;}
	if(endp_prop(cddr((V197)))){
	goto T799;}
	if(type_of(cadr((V197)))==t_symbol){
	goto T800;}
	goto T799;
T799:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[89],(V197))));
	goto T731;
	goto T800;
T800:;
	(void)((*(LnkLI183))(cadr((V197)),caddr((V197)),cdddr((V197))));
	goto T731;
	goto T798;
T798:;
	if((V198!= VV[90]))goto T806;
	{object V207;
	register object V208;
	V207= cdr((V197));
	V208= car((V207));
	goto T810;
T810:;
	if(!(endp_prop((V207)))){
	goto T811;}
	goto T731;
	goto T811;
T811:;
	if(!(type_of((V208))==t_symbol)){
	goto T817;}
	{object V209;
	V209= list(2,VV[90],(V208));
	V194= make_cons((V209),(V194));}
	(VV[18]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI184))((V208),(VV[18]->s.s_dbind)));
	goto T815;
	goto T817;
T817:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[91],(V208))));
	goto T815;
T815:;
	V207= cdr((V207));
	V208= car((V207));
	goto T810;}
	goto T806;
T806:;
	if((V198!= VV[92]))goto T828;
	{object V210;
	register object V211;
	V210= cdr((V197));
	V211= car((V210));
	goto T832;
T832:;
	if(!(endp_prop((V210)))){
	goto T833;}
	goto T731;
	goto T833;
T833:;
	if(!(type_of((V211))==t_symbol)){
	goto T839;}
	{object V212;
	V212= list(2,VV[92],(V211));
	V194= make_cons((V212),(V194));}
	(VV[18]->s.s_dbind)= make_cons(V211,(VV[18]->s.s_dbind));
	goto T837;
	goto T839;
T839:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[93],(V211))));
	goto T837;
T837:;
	V210= cdr((V210));
	V211= car((V210));
	goto T832;}
	goto T828;
T828:;
	if((V198!= VV[143]))goto T850;
	{object V214;
	register object V215;
	V214= cdr((V197));
	V215= car((V214));
	goto T854;
T854:;
	if(!(endp_prop((V214)))){
	goto T855;}
	goto T731;
	goto T855;
T855:;
	if(!(type_of((V215))==t_symbol)){
	goto T861;}
	{register object x= (V215),V216= (VV[64]->s.s_dbind);
	while(!endp(V216))
	if(eql(x,V216->c.c_car)){
	goto T859;
	}else V216=V216->c.c_cdr;}
	(VV[64]->s.s_dbind)= make_cons(V215,(VV[64]->s.s_dbind));
	goto T859;
	goto T861;
T861:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[94],(V215))));
	goto T859;
T859:;
	V214= cdr((V214));
	V215= car((V214));
	goto T854;}
	goto T850;
T850:;
	{register object x= car((V197)),V218= (VV[64]->s.s_dbind);
	while(!endp(V218))
	if(eql(x,V218->c.c_car)){
	goto T731;
	}else V218=V218->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[95],car((V197)))));}
	goto T731;
T731:;
	V196= cdr((V196));
	V197= car((V196));
	goto T726;}
	goto T722;
T722:;
	V193= (*(LnkLI182))((V193));
	{object V219 = list(4,VV[96],cadr((V193)),(V194),(V193));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR23(V219)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2DECL-BODY	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	bds_check;
	{object V220;
	object V221;
	check_arg(2);
	V220=(base[0]);
	V221=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[54],symbol_value(VV[54]));
	bds_bind(VV[49],symbol_value(VV[49]));
	bds_bind(VV[18],symbol_value(VV[18]));
	bds_bind(VV[55],symbol_value(VV[55]));
	{register object V222;
	register object V223;
	V222= (V220);
	V223= car((V222));
	goto T884;
T884:;
	if(!(endp_prop((V222)))){
	goto T885;}
	goto T880;
	goto T885;
T885:;
	{object V224= car((V223));
	if((V224!= VV[85]))goto T890;
	{register long V225;
	V225= fix(cadr((V223)));
	(VV[53]->s.s_dbind)= ((V225)>=(1)?Ct:Cnil);
	(VV[54]->s.s_dbind)= ((V225)>=(2)?Ct:Cnil);
	(VV[49]->s.s_dbind)= ((V225)>=(3)?Ct:Cnil);
	goto T889;}
	goto T890;
T890:;
	if((V224!= VV[86]))goto T897;
	(VV[55]->s.s_dbind)= cadr((V223));
	goto T889;
	goto T897;
T897:;
	if((V224!= VV[92]))goto T899;
	{register object V226;
	V226= cadr((V223));
	(VV[18]->s.s_dbind)= make_cons((V226),(VV[18]->s.s_dbind));
	goto T889;}
	goto T899;
T899:;
	if((V224!= VV[90]))goto T902;
	(VV[18]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI184))(cadr((V223)),(VV[18]->s.s_dbind)));
	goto T889;
	goto T902;
T902:;
	(void)((*(LnkLI185))());}
	goto T889;
T889:;
	V222= cdr((V222));
	V223= car((V222));
	goto T884;}
	goto T880;
T880:;
	base[7]= (V221);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk186)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function CHECK-VDECL	*/

static object LI25(V230,V231,V232)

register object V230;object V231;object V232;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V233;
	register object V234;
	V233= (V231);
	V234= car((V233));
	goto T914;
T914:;
	if(!(endp_prop((V233)))){
	goto T915;}
	goto T910;
	goto T915;
T915:;
	{register object x= car((V234)),V235= (V230);
	while(!endp(V235))
	if(eql(x,V235->c.c_car)){
	goto T919;
	}else V235=V235->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[97],car((V234)))));
	goto T919;
T919:;
	V233= cdr((V233));
	V234= car((V233));
	goto T914;}
	goto T910;
T910:;
	{register object V236;
	register object V237;
	V236= (V232);
	V237= car((V236));
	goto T930;
T930:;
	if(!(endp_prop((V236)))){
	goto T931;}
	{object V238 = Cnil;
	VMR25(V238)}
	goto T931;
T931:;
	{register object x= (V237),V239= (V230);
	while(!endp(V239))
	if(eql(x,V239->c.c_car)){
	goto T935;
	}else V239=V239->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[98],(V237))));
	goto T935;
T935:;
	V236= cdr((V236));
	V237= car((V236));
	goto T930;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAMATION	*/

static object LI26(V241)

object V241;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V242= car((V241));
	if((V242!= VV[129]))goto T943;
	{register object V243;
	object V244;
	V243= cdr((V241));
	V244= car((V243));
	goto T947;
T947:;
	if(!(endp_prop((V243)))){
	goto T948;}
	{object V245 = Ct;
	VMR26(V245)}
	goto T948;
T948:;
	if(!(type_of((V244))==t_symbol)){
	goto T954;}
	base[2]= (V244);
	vs_top=(vs_base=base+2)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T952;}
	{object V246 = Cnil;
	VMR26(V246)}
	goto T954;
T954:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[99],(V244))));
	goto T952;
T952:;
	V243= cdr((V243));
	V244= car((V243));
	goto T947;}
	goto T943;
T943:;
	if((V242!= VV[131]))goto T964;
	{register object V247;
	register object V248;
	V247= cdr((V241));
	V248= car((V247));
	goto T968;
T968:;
	if(!(endp_prop((V247)))){
	goto T969;}
	{object V249 = Ct;
	VMR26(V249)}
	goto T969;
T969:;
	if(!(type_of((V248))==t_symbol)){
	goto T973;}
	V248= list(2,(V248),small_fixnum(3));
	goto T973;
T973:;
	if(!(type_of((V248))==t_cons)){
	goto T978;}
	if(!(type_of(cdr((V248)))==t_cons)){
	goto T978;}
	{object V250= cadr((V248));
	if(!(type_of(V250)==t_fixnum||
type_of(V250)==t_bignum||
type_of(V250)==t_ratio||
type_of(V250)==t_shortfloat||
type_of(V250)==t_longfloat||
type_of(V250)==t_complex)){
	goto T978;}}
	base[2]= small_fixnum(0);
	base[3]= cadr((V248));
	base[4]= small_fixnum(3);
	vs_top=(vs_base=base+2)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T979;}
	goto T978;
T978:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[100],(V248))));
	goto T977;
	goto T979;
T979:;
	{object V251= car((V248));
	if((V251!= VV[85]))goto T990;
	V252= cadr((V248));
	if((symbol_value(VV[53]))!=Cnil){
	goto T995;}
	V253= small_fixnum(0);
	goto T993;
	goto T995;
T995:;
	if((symbol_value(VV[54]))!=Cnil){
	goto T998;}
	V253= small_fixnum(1);
	goto T993;
	goto T998;
T998:;
	if((symbol_value(VV[49]))!=Cnil){
	goto T1001;}
	V253= small_fixnum(2);
	goto T993;
	goto T1001;
T1001:;
	V253= small_fixnum(3);
	goto T993;
T993:;
	if(number_compare(/* INLINE-ARGS */V252,V253)==0){
	goto T977;}
	{object V254 = Cnil;
	VMR26(V254)}
	goto T990;
T990:;
	if((V251!= VV[86]))goto T1003;
	if(number_compare(cadr((V248)),symbol_value(VV[55]))==0){
	goto T977;}
	{object V255 = Cnil;
	VMR26(V255)}
	goto T1003;
T1003:;
	if((V251!= VV[132]))goto T1006;
	if(number_compare(cadr((V248)),symbol_value(VV[56]))==0){
	goto T977;}
	{object V256 = Cnil;
	VMR26(V256)}
	goto T1006;
T1006:;
	if((V251!= VV[133]))goto T1009;
	V257= number_minus(small_fixnum(3),cadr((V248)));
	if(number_compare(/* INLINE-ARGS */V257,symbol_value(VV[56]))==0){
	goto T977;}
	{object V258 = Cnil;
	VMR26(V258)}
	goto T1009;
T1009:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[101],car((V248)))));}
	goto T977;
T977:;
	V247= cdr((V247));
	V248= car((V247));
	goto T968;}
	goto T964;
T964:;
	if((V242!= VV[134]))goto T1017;
	if(!(type_of(cdr((V241)))==t_cons)){
	goto T1019;}
	{object V259;
	object V260;
	V259= (*(LnkLI122))(cadr((V241)));
	V260= Cnil;
	{register object V261;
	object V262;
	V261= cddr((V241));
	V262= car((V261));
	goto T1025;
T1025:;
	if(!(endp_prop((V261)))){
	goto T1026;}
	{object V263 = Ct;
	VMR26(V263)}
	goto T1026;
T1026:;
	if(!(type_of((V262))==t_symbol)){
	goto T1032;}
	V260= get((V262),VV[68],Cnil);
	if(((V260))==Cnil){
	goto T1034;}
	if(equal((V260),(V259))){
	goto T1030;}
	goto T1034;
T1034:;
	{object V264 = Cnil;
	VMR26(V264)}
	goto T1032;
T1032:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[102],(V262))));
	goto T1030;
T1030:;
	V261= cdr((V261));
	V262= car((V261));
	goto T1025;}}
	goto T1019;
T1019:;
	{object V265 = (VFUN_NARGS=2,(*(LnkLI123))(VV[103],(V241)));
	VMR26(V265)}
	goto T1017;
T1017:;
	if((V242!= VV[136])
	&& (V242!= VV[137])
	&& (V242!= VV[138])
	&& (V242!= VV[139]))goto T1044;
	{object V266;
	object V267;
	V266= (*(LnkLI122))(car((V241)));
	V267= Cnil;
	{register object V268;
	object V269;
	V268= cdr((V241));
	V269= car((V268));
	goto T1049;
T1049:;
	if(!(endp_prop((V268)))){
	goto T1050;}
	{object V270 = Ct;
	VMR26(V270)}
	goto T1050;
T1050:;
	if(!(type_of((V269))==t_symbol)){
	goto T1056;}
	V267= get((V269),VV[68],Cnil);
	if(((V267))==Cnil){
	goto T1058;}
	if(equal((V267),(V266))){
	goto T1054;}
	goto T1058;
T1058:;
	{object V271 = Cnil;
	VMR26(V271)}
	goto T1056;
T1056:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[104],(V269))));
	goto T1054;
T1054:;
	V268= cdr((V268));
	V269= car((V268));
	goto T1049;}}
	goto T1044;
T1044:;
	if((V242!= VV[140]))goto T1068;
	if(endp_prop(cdr((V241)))){
	goto T1069;}
	if(!(type_of(cadr((V241)))==t_cons)){
	goto T1069;}
	if(!((caadr((V241)))==(VV[26]))){
	goto T1069;}
	if(!(endp_prop(cdadr((V241))))){
	goto T1070;}
	goto T1069;
T1069:;
	{object V272 = (VFUN_NARGS=2,(*(LnkLI123))(VV[105],(V241)));
	VMR26(V272)}
	goto T1070;
T1070:;
	{register object V273;
	object V274;
	V273= cddr((V241));
	V274= car((V273));
	goto T1081;
T1081:;
	if(!(endp_prop((V273)))){
	goto T1082;}
	{object V275 = Ct;
	VMR26(V275)}
	goto T1082;
T1082:;
	if((get((V274),VV[38],Cnil))==Cnil){
	goto T1087;}
	V276= (*(LnkLI124))(cadadr((V241)));
	V277= get((V274),VV[36],Cnil);
	if(!(equal(/* INLINE-ARGS */V276,V277))){
	goto T1087;}
	V278= (*(LnkLI125))(cddadr((V241)));
	V279= get((V274),VV[37],Cnil);
	if(equal(/* INLINE-ARGS */V278,V279)){
	goto T1086;}
	goto T1087;
T1087:;
	{object V280 = Cnil;
	VMR26(V280)}
	goto T1086;
T1086:;
	V273= cdr((V273));
	V274= car((V273));
	goto T1081;}
	goto T1068;
T1068:;
	if((V242!= VV[26]))goto T1100;
	if(endp_prop(cdr((V241)))){
	goto T1101;}
	if(!(endp_prop(cddr((V241))))){
	goto T1102;}
	goto T1101;
T1101:;
	{object V281 = (VFUN_NARGS=2,(*(LnkLI123))(VV[106],(V241)));
	VMR26(V281)}
	goto T1102;
T1102:;
	if((get(cadr((V241)),VV[38],Cnil))!=Cnil){
	goto T1106;}
	{object V282 = Cnil;
	VMR26(V282)}
	goto T1106;
T1106:;
	V283= (*(LnkLI124))(caddr((V241)));
	V284= get(cadr((V241)),VV[36],Cnil);
	if(equal(/* INLINE-ARGS */V283,V284)){
	goto T1108;}
	{object V285 = Cnil;
	VMR26(V285)}
	goto T1108;
T1108:;
	V286= (*(LnkLI125))(cdddr((V241)));
	V287= get(cadr((V241)),VV[37],Cnil);
	{object V288 = (equal(/* INLINE-ARGS */V286,V287)?Ct:Cnil);
	VMR26(V288)}
	goto T1100;
T1100:;
	if((V242!= VV[90]))goto T1112;
	{register object V289;
	object V290;
	V289= cdr((V241));
	V290= car((V289));
	goto T1116;
T1116:;
	if(!(endp_prop((V289)))){
	goto T1117;}
	{object V291 = Ct;
	VMR26(V291)}
	goto T1117;
T1117:;
	if(!(type_of((V290))==t_symbol)){
	goto T1123;}
	if((get((V290),VV[50],Cnil))==Cnil){
	goto T1121;}
	{object V292 = Cnil;
	VMR26(V292)}
	goto T1123;
T1123:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[107],(V290))));
	goto T1121;
T1121:;
	V289= cdr((V289));
	V290= car((V289));
	goto T1116;}
	goto T1112;
T1112:;
	if((V242!= VV[92]))goto T1132;
	{register object V293;
	object V294;
	V293= cdr((V241));
	V294= car((V293));
	goto T1136;
T1136:;
	if(!(endp_prop((V293)))){
	goto T1137;}
	{object V295 = Ct;
	VMR26(V295)}
	goto T1137;
T1137:;
	if(!(type_of((V294))==t_symbol)){
	goto T1143;}
	if((get((V294),VV[50],Cnil))!=Cnil){
	goto T1141;}
	{object V296 = Cnil;
	VMR26(V296)}
	goto T1143;
T1143:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[108],(V294))));
	goto T1141;
T1141:;
	V293= cdr((V293));
	V294= car((V293));
	goto T1136;}
	goto T1132;
T1132:;
	if((V242!= VV[79])
	&& (V242!= VV[142]))goto T1152;
	{register object V297;
	object V298;
	V297= cdr((V241));
	V298= car((V297));
	goto T1156;
T1156:;
	if(!(endp_prop((V297)))){
	goto T1157;}
	{object V299 = Ct;
	VMR26(V299)}
	goto T1157;
T1157:;
	if(type_of((V298))==t_symbol){
	goto T1161;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[109],(V298))));
	goto T1161;
T1161:;
	V297= cdr((V297));
	V298= car((V297));
	goto T1156;}
	goto T1152;
T1152:;
	if((V242!= VV[143]))goto T1169;
	{register object V300;
	object V301;
	V300= cdr((V241));
	V301= car((V300));
	goto T1173;
T1173:;
	if(!(endp_prop((V300)))){
	goto T1174;}
	{object V302 = Ct;
	VMR26(V302)}
	goto T1174;
T1174:;
	if(!(type_of((V301))==t_symbol)){
	goto T1180;}
	{register object x= (V301),V303= symbol_value(VV[64]);
	while(!endp(V303))
	if(eql(x,V303->c.c_car)){
	goto T1178;
	}else V303=V303->c.c_cdr;}
	{object V304 = Cnil;
	VMR26(V304)}
	goto T1180;
T1180:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[110],(V301))));
	goto T1178;
T1178:;
	V300= cdr((V300));
	V301= car((V300));
	goto T1173;}
	goto T1169;
T1169:;
	if((V242== VV[144])
	|| (V242== VV[145])
	|| (V242== VV[146])
	|| (V242== VV[147])
	|| (V242== VV[148]))goto T1190;
	if((V242== VV[137])
	|| (V242== VV[149])
	|| (V242== VV[25])
	|| (V242== VV[150])
	|| (V242== VV[151]))goto T1190;
	if((V242== VV[152])
	|| (V242== VV[136])
	|| (V242== VV[153])
	|| (V242== VV[154])
	|| (V242== VV[32]))goto T1190;
	if((V242== VV[155])
	|| (V242== VV[156])
	|| (V242== VV[139])
	|| (V242== Cnil)
	|| (V242== VV[157]))goto T1190;
	if((V242== VV[158])
	|| (V242== VV[159])
	|| (V242== VV[160])
	|| (V242== VV[161])
	|| (V242== VV[162]))goto T1190;
	if((V242== VV[163])
	|| (V242== VV[164])
	|| (V242== VV[165])
	|| (V242== VV[138])
	|| (V242== VV[166]))goto T1190;
	if((V242== VV[167])
	|| (V242== VV[168])
	|| (V242== VV[169])
	|| (V242== VV[170])
	|| (V242== VV[171]))goto T1190;
	if((V242== VV[172])
	|| (V242== VV[173])
	|| (V242== VV[174])
	|| (V242== VV[175])
	|| (V242== Ct))goto T1190;
	if((V242!= VV[176])
	&& (V242!= VV[177])
	&& (V242!= VV[178]))goto T1189;
	goto T1190;
T1190:;
	{object V305;
	V305= (*(LnkLI122))(car((V241)));
	{register object V306;
	object V307;
	V306= cdr((V241));
	V307= car((V306));
	goto T1195;
T1195:;
	if(!(endp_prop((V306)))){
	goto T1196;}
	{object V308 = Ct;
	VMR26(V308)}
	goto T1196;
T1196:;
	if(!(type_of((V307))==t_symbol)){
	goto T1202;}
	V309= get((V307),VV[68],Cnil);
	if(equal(V309,(V305))){
	goto T1200;}
	{object V310 = Cnil;
	VMR26(V310)}
	goto T1202;
T1202:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[111],(V307))));
	goto T1200;
T1200:;
	V306= cdr((V306));
	V307= car((V306));
	goto T1195;}}
	goto T1189;
T1189:;
	{register object x= car((V241)),V311= symbol_value(VV[64]);
	while(!endp(V311))
	if(eql(x,V311->c.c_car)){
	goto T1213;
	}else V311=V311->c.c_cdr;}
	{object V312 = (VFUN_NARGS=2,(*(LnkLI123))(VV[112],car((V241))));
	VMR26(V312)}
	goto T1213;
T1213:;
	{object V313 = Cnil;
	VMR26(V313)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT186(){ call_or_link(VV[186],(void **)(void *)&Lnk186);} /* C2EXPR */
static object  LnkTLI185(){return call_proc0(VV[185],(void **)(void *)&LnkLI185);} /* BABOON */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[184],(void **)(void *)&LnkLI184,first,ap);va_end(ap);return V1;} /* REMOVE */
static object  LnkTLI183(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[183],(void **)(void *)&LnkLI183,3,first,ap);va_end(ap);return V1;} /* ADD-FUNCTION-DECLARATION */
static object  LnkTLI182(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[182],(void **)(void *)&LnkLI182,1,first,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI180(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[180],(void **)(void *)&LnkLI180,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND */
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,1,first,ap);va_end(ap);return V1;} /* SCH-GLOBAL */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)(void *)&LnkLI141,3,first,ap);va_end(ap);return V1;} /* ADD-FUNCTION-PROCLAMATION */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[135],(void **)(void *)&LnkLI135,2,first,ap);va_end(ap);return V1;} /* PROCLAIM-VAR */
static void LnkT130(){ call_or_link(VV[130],(void **)(void *)&Lnk130);} /* *MAKE-SPECIAL */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[128],(void **)(void *)&LnkLI128,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)(void *)&LnkLI127,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[126],(void **)(void *)&LnkLI126,1,first,ap);va_end(ap);return V1;} /* SCH-LOCAL-FUN */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,1,first,ap);va_end(ap);return V1;} /* FUNCTION-RETURN-TYPE */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,1,first,ap);va_end(ap);return V1;} /* FUNCTION-ARG-TYPES */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[123],(void **)(void *)&LnkLI123,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[122],(void **)(void *)&LnkLI122,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static object  LnkTLI121(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[121],(void **)(void *)&LnkLI121,first,ap);va_end(ap);return V1;} /* CMPERR */
static void LnkT120(){ call_or_link(VV[120],(void **)(void *)&Lnk120);} /* COMPILED-FUNCTION-NAME */
static void LnkT119(){ call_or_link(VV[119],(void **)(void *)&Lnk119);} /* TYPEP */
static void LnkT118(){ call_or_link(VV[118],(void **)(void *)&Lnk118);} /* WT-TO-STRING */
static void LnkT117(){ call_or_link(VV[117],(void **)(void *)&Lnk117);} /* CONTAINS-SHARP-COMMA */
static void LnkT116(){ call_or_link(VV[116],(void **)(void *)&Lnk116);} /* GET-OUTPUT-STREAM-STRING */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,1,first,ap);va_end(ap);return V1;} /* WT-DATA1 */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* MAKE-STRING-OUTPUT-STREAM */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,1,first,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

