
#include "cmpinclude.h"
#include "gcl_cmpenv.h"
void init_gcl_cmpenv(){do_init(VV);}
/*	local entry for function INIT-ENV	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	(VV[0]->s.s_dbind)= small_fixnum(0);
	(VV[1]->s.s_dbind)= small_fixnum(0);
	(VV[2]->s.s_dbind)= small_fixnum(-1);
	(VV[3]->s.s_dbind)= small_fixnum(0);
	(VV[4]->s.s_dbind)= small_fixnum(0);
	(VV[5]->s.s_dbind)= Cnil;
	(VV[6]->s.s_dbind)= Cnil;
	(VV[7]->s.s_dbind)= Cnil;
	(VV[8]->s.s_dbind)= Cnil;
	(VV[9]->s.s_dbind)= Cnil;
	(VV[10]->s.s_dbind)= Cnil;
	(VV[11]->s.s_dbind)= Cnil;
	(VV[12]->s.s_dbind)= Cnil;
	(VV[13]->s.s_dbind)= Cnil;
	(VV[14]->s.s_dbind)= Cnil;
	(VV[15]->s.s_dbind)= Cnil;
	(VV[16]->s.s_dbind)= Cnil;
	(VV[17]->s.s_dbind)= small_fixnum(0);
	(VV[18]->s.s_dbind)= Cnil;
	{object V1 = Cnil;
	VMR1(V1)}
	return Cnil;
}
/*	macro definition for NEXT-CFUN	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	vs_top=sup;
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
	{register object x= (V4),V6= (VV[5]->s.s_dbind);
	while(V6!=Cnil)
	if(eql(x,V6->c.c_car->c.c_car) &&V6->c.c_car != Cnil){
	V5= (V6->c.c_car);
	goto T38;
	}else V6=V6->c.c_cdr;
	V5= Cnil;}
	goto T38;
T38:;
	if(((V5))==Cnil){
	goto T40;}
	{object V7 = CMPcadr((V5));
	VMR3(V7)}
	goto T40;
T40:;
	(void)((*(LnkLI113))((V4)));
	{object V8;
	V8= list(2,(V4),(VV[2]->s.s_dbind));
	(VV[5]->s.s_dbind)= make_cons((V8),(VV[5]->s.s_dbind));}
	{object V9 = (VV[2]->s.s_dbind);
	VMR3(V9)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WT-TO-STRING	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	{object V10;
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
	if(!((CMPcar((V12)))==(VV[22]))){
	goto T56;}
	base[0]= CMPcdr((V12));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T56;}
	V12= CMPcdr((V12));
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
	V15= list(2,(VV[2]->s.s_dbind),(V12));
	(VV[24]->s.s_dbind)= make_cons((V15),(VV[24]->s.s_dbind));}
	{object V16 = (VV[2]->s.s_dbind);
	VMR5(V16)}
	goto T51;
T51:;
	{register object x= (V12),V17= (VV[5]->s.s_dbind);
	while(V17!=Cnil)
	if(eql(x,V17->c.c_car->c.c_car) &&V17->c.c_car != Cnil){
	V13= (V17->c.c_car);
	goto T74;
	}else V17=V17->c.c_cdr;
	V13= Cnil;}
	goto T74;
T74:;
	if(((V13))==Cnil){
	goto T72;}
	{object V18 = CMPcadr((V13));
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
	V20= (VV[2]->s.s_dbind);{object V22;
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
	(VV[24]->s.s_dbind)= make_cons((V19),(VV[24]->s.s_dbind));}
	{object V23 = (VV[2]->s.s_dbind);
	VMR5(V23)}
	goto T76;
T76:;
	(void)((*(LnkLI113))((V12)));
	{object V24;
	V24= list(2,(V12),(VV[2]->s.s_dbind));
	(VV[5]->s.s_dbind)= make_cons((V24),(VV[5]->s.s_dbind));}
	{object V25 = (VV[2]->s.s_dbind);
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
	{register object x= (V27),V29= (VV[6]->s.s_dbind);
	while(V29!=Cnil)
	if(eql(x,V29->c.c_car->c.c_car) &&V29->c.c_car != Cnil){
	V28= (V29->c.c_car);
	goto T96;
	}else V29=V29->c.c_cdr;
	V28= Cnil;}
	goto T96;
T96:;
	if(((V28))==Cnil){
	goto T94;}
	{object V30 = CMPcadr((V28));
	VMR6(V30)}
	goto T94;
T94:;
	(void)((*(LnkLI113))(Cnil));
	{object V31;
	V31= list(2,(VV[2]->s.s_dbind),(V27));
	(VV[24]->s.s_dbind)= make_cons((V31),(VV[24]->s.s_dbind));}
	{object V32;
	V32= list(2,(V27),(VV[2]->s.s_dbind));
	(VV[6]->s.s_dbind)= make_cons((V32),(VV[6]->s.s_dbind));}
	{object V33 = (VV[2]->s.s_dbind);
	VMR6(V33)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for NEXT-CVAR	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	base[2]= VV[28];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for NEXT-CMACRO	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
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
	if(!(((V41))==Cnil)){
	goto T112;}
	V40= reverse((V39));
	goto T108;
	goto T112;
T112:;
	{register object x= CMPcar((V41)),V43= VV[30];
	while(V43!=Cnil)
	if(eql(x,V43->c.c_car)){
	goto T117;
	}else V43=V43->c.c_cdr;}
	if(!(equal(CMPcar((V41)),VV[31]))){
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
	V46= (*(LnkLI122))(CMPcar((V41)));
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
	if(!((CMPcar((V41)))==(VV[31]))){
	goto T133;}
	V45= VV[31];
	goto T124;
	goto T133;
T133:;
	V45= Ct;
	goto T124;
T124:;
	V39= make_cons((V45),(V39));}
	V41= CMPcdr((V41));
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
	if(!((CMPcar((V47)))==(VV[31]))){
	goto T152;}
	V49= VV[31];
	goto T150;
	goto T152;
T152:;
	V49= Ct;
	goto T150;
T150:;
	(V47)->c.c_car = (V49);}
	V47= CMPcdr((V47));
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
	if((CMPcar((V52)))==(VV[33])){
	goto T159;}
	goto T158;
	goto T159;
T159:;
	V52= CMPcdr((V52));
	goto T158;
T158:;
	if(!(((V52))==Cnil)){
	goto T163;}
	{object V53 = Cnil;
	VMR10(V53)}
	goto T163;
T163:;
	if(!(type_of(CMPcar((V52)))==t_cons)){
	goto T166;}
	if(!((CMPcaar((V52)))==(VV[33]))){
	goto T166;}
	V52= CMPcdr(CMPcar((V52)));
	goto TTL;
	goto T166;
T166:;
	{register object V54;
	register object V55;
	V54= (V52);
	V55= Cnil;
	goto T173;
T173:;
	if(!(((V54))==Cnil)){
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
	if(!((CMPcar((V54)))==(VV[31]))){
	goto T184;}
	V57= VV[31];
	goto T182;
	goto T184;
T184:;
	V57= (*(LnkLI122))(CMPcar((V54)));
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
	V54= CMPcdr((V54));
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
	{object V68= CMPcdr((V63));
	if(!(type_of(V68)==t_cons||(V68)==Cnil)){
	goto T199;}}
	if(((V63))==Cnil){
	goto T206;}
	if(!((CMPcar((V63)))==(VV[31]))){
	goto T207;}
	goto T206;
T206:;
	V66= VV[35];
	goto T205;
	goto T207;
T207:;
	V66= (*(LnkLI124))(CMPcar((V63)));
	goto T205;
T205:;
	V67= (*(LnkLI125))(CMPcdr((V63)));
	if(!(type_of((V67))==t_cons)){
	goto T217;}
	if(!((CMPcdr((V67)))==Cnil)){
	goto T217;}
	if((CMPcar((V67)))==(VV[31])){
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
	while(V69!=Cnil)
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
	V67= CMPcar((V67));
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
	V64= CMPcdr((V64));
	if(!(type_of((V64))==t_cons)){
	goto T262;}
	goto T261;
	goto T262;
T262:;
	{object V73 = VV[39];
	VMR11(V73)}
	goto T261;
T261:;
	V72= CMPcar((V64));
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
	(VV[15]->s.s_dbind)= make_cons((V81),(VV[15]->s.s_dbind));
	{object V84 = (VV[15]->s.s_dbind);
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
	{register object x= (V87),V89= (VV[15]->s.s_dbind);
	while(V89!=Cnil)
	if(eql(x,V89->c.c_car->c.c_car) &&V89->c.c_car != Cnil){
	V88= (V89->c.c_car);
	goto T276;
	}else V89=V89->c.c_cdr;
	V88= Cnil;}
	goto T276;
T276:;
	if(((V88))==Cnil){
	goto T274;}
	{object V90 = CMPcadr((V88));
	VMR13(V90)}
	goto T274;
T274:;
	{object V91 =((V87))->s.s_plist;
	 object ind= VV[36];
	while(V91!=Cnil){
	if(V91->c.c_car==ind){
	{object V92 = (V91->c.c_cdr->c.c_car);
	VMR13(V92)}
	}else V91=V91->c.c_cdr->c.c_cdr;}
	{object V93 = Cnil;
	VMR13(V93)}}}
	return Cnil;
}
/*	local entry for function GET-RETURN-TYPE	*/

static object LI14(V95)

register object V95;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V96;
	object V97;
	register object V98;
	{register object x= (V95),V99= (VV[15]->s.s_dbind);
	while(V99!=Cnil)
	if(eql(x,V99->c.c_car->c.c_car) &&V99->c.c_car != Cnil){
	V96= (V99->c.c_car);
	goto T277;
	}else V99=V99->c.c_cdr;
	V96= Cnil;}
	goto T277;
T277:;
	if(((V96))==Cnil){
	goto T280;}
	V97= CMPcaddr((V96));
	goto T278;
	goto T280;
T280:;
	{object V100 =((V95))->s.s_plist;
	 object ind= VV[37];
	while(V100!=Cnil){
	if(V100->c.c_car==ind){
	V97= (V100->c.c_cdr->c.c_car);
	goto T278;
	}else V100=V100->c.c_cdr->c.c_cdr;}
	V97= Cnil;}
	goto T278;
T278:;
	{object V101 =((V95))->s.s_plist;
	 object ind= VV[42];
	while(V101!=Cnil){
	if(V101->c.c_car==ind){
	if(((V101->c.c_cdr->c.c_car))==Cnil){
	goto T284;}
	goto T285;
	}else V101=V101->c.c_cdr->c.c_cdr;}
	goto T284;}
	goto T285;
T285:;
	V98= VV[43];
	goto T282;
	goto T284;
T284:;
	{object V102 =((V95))->s.s_plist;
	 object ind= VV[44];
	while(V102!=Cnil){
	if(V102->c.c_car==ind){
	V98= (V102->c.c_cdr->c.c_car);
	goto T282;
	}else V102=V102->c.c_cdr->c.c_cdr;}
	V98= Cnil;}
	goto T282;
T282:;
	if(((V97))==Cnil){
	goto T287;}
	if(((V98))==Cnil){
	goto T290;}
	V98= (*(LnkLI127))((V98),(V97));
	if(((V98))==Cnil){
	goto T293;}
	{object V103 = (V98);
	VMR14(V103)}
	goto T293;
T293:;
	{object V104 = (VFUN_NARGS=2,(*(LnkLI128))(VV[45],(V95)));
	VMR14(V104)}
	goto T290;
T290:;
	{object V105 = (V97);
	VMR14(V105)}
	goto T287;
T287:;
	{object V106 = (V98);
	VMR14(V106)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-LOCAL-ARG-TYPES	*/

static object LI15(V108)

object V108;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V109;
	V109= Cnil;
	{register object x= (V108),V110= (VV[15]->s.s_dbind);
	while(V110!=Cnil)
	if(eql(x,V110->c.c_car->c.c_car) &&V110->c.c_car != Cnil){
	V109= (V110->c.c_car);
	goto T300;
	}else V110=V110->c.c_cdr;
	V109= Cnil;}
	goto T300;
T300:;
	if(((V109))==Cnil){
	goto T298;}
	{object V111 = CMPcadr((V109));
	VMR15(V111)}
	goto T298;
T298:;
	{object V112 = Cnil;
	VMR15(V112)}}
	return Cnil;
}
/*	local entry for function GET-LOCAL-RETURN-TYPE	*/

static object LI16(V114)

object V114;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V115;
	V115= Cnil;
	{register object x= (V114),V116= (VV[15]->s.s_dbind);
	while(V116!=Cnil)
	if(eql(x,V116->c.c_car->c.c_car) &&V116->c.c_car != Cnil){
	V115= (V116->c.c_car);
	goto T305;
	}else V116=V116->c.c_cdr;
	V115= Cnil;}
	goto T305;
T305:;
	if(((V115))==Cnil){
	goto T303;}
	{object V117 = CMPcaddr((V115));
	VMR16(V117)}
	goto T303;
T303:;
	{object V118 = Cnil;
	VMR16(V118)}}
	return Cnil;
}
/*	local entry for function RESET-TOP	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	princ_str("vs_top=sup;",VV[46]);
	(VV[47]->s.s_dbind)= Ct;
	{object V119 = Ct;
	VMR17(V119)}
	return Cnil;
}
/*	macro definition for BASE-USED	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	base[2]= VV[48];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function INLINE-POSSIBLE	*/

static object LI19(V122)

object V122;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if((VV[49]->s.s_dbind)!=Cnil){
	V123= (VV[49]->s.s_dbind);
	goto T309;}{object V124;
	{register object x= (V122),V125= (VV[18]->s.s_dbind);
	while(V125!=Cnil)
	if(eql(x,V125->c.c_car)){
	V124= V125;
	goto T311;
	}else V125=V125->c.c_cdr;
	V124= Cnil;}
	goto T311;
T311:;
	if(V124==Cnil)goto T310;
	V123= V124;
	goto T309;
	goto T310;
T310:;}
	{object V126 =((V122))->s.s_plist;
	 object ind= VV[50];
	while(V126!=Cnil){
	if(V126->c.c_car==ind){
	V123= (V126->c.c_cdr->c.c_car);
	goto T309;
	}else V126=V126->c.c_cdr->c.c_cdr;}
	V123= Cnil;}
	goto T309;
T309:;
	{object V127 = ((V123)==Cnil?Ct:Cnil);
	VMR19(V127)}
	return Cnil;
}
/*	local entry for function PROCLAIM	*/

static object LI20(V129)

object V129;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V130= CMPcar((V129));
	if((V130!= VV[129]))goto T313;
	{register object V131;
	object V132;
	V131= CMPcdr((V129));
	V132= CMPcar((V131));
	goto T317;
T317:;
	if(!(((V131))==Cnil)){
	goto T318;}
	goto T312;
	goto T318;
T318:;
	if(!(type_of((V132))==t_symbol)){
	goto T324;}
	base[2]= (V132);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk130)();
	vs_top=sup;
	goto T322;
	goto T324;
T324:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[51],(V132))));
	goto T322;
T322:;
	V131= CMPcdr((V131));
	V132= CMPcar((V131));
	goto T317;}
	goto T313;
T313:;
	if((V130!= VV[131]))goto T332;
	{register object V133;
	register object V134;
	V133= CMPcdr((V129));
	V134= CMPcar((V133));
	goto T336;
T336:;
	if(!(((V133))==Cnil)){
	goto T337;}
	goto T312;
	goto T337;
T337:;
	if(!(type_of((V134))==t_symbol)){
	goto T341;}
	V134= list(2,(V134),small_fixnum(3));
	goto T341;
T341:;
	if(!(type_of((V134))==t_cons)){
	goto T346;}
	if(!(type_of(CMPcdr((V134)))==t_cons)){
	goto T346;}
	{object V135= CMPcadr((V134));
	if(!(type_of(V135)==t_fixnum||
type_of(V135)==t_bignum||
type_of(V135)==t_ratio||
type_of(V135)==t_shortfloat||
type_of(V135)==t_longfloat||
type_of(V135)==t_complex)){
	goto T346;}}
	base[2]= small_fixnum(0);
	base[3]= CMPcadr((V134));
	base[4]= small_fixnum(3);
	vs_top=(vs_base=base+2)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T347;}
	goto T346;
T346:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[52],(V134))));
	goto T345;
	goto T347;
T347:;
	{object V136= CMPcar((V134));
	if((V136!= VV[85]))goto T358;
	(VV[53]->s.s_dbind)= (number_compare(CMPcadr((V134)),small_fixnum(1))>=0?Ct:Cnil);
	(VV[54]->s.s_dbind)= (number_compare(CMPcadr((V134)),small_fixnum(2))>=0?Ct:Cnil);
	(VV[49]->s.s_dbind)= (number_compare(CMPcadr((V134)),small_fixnum(3))>=0?Ct:Cnil);
	goto T345;
	goto T358;
T358:;
	if((V136!= VV[86]))goto T364;
	(VV[55]->s.s_dbind)= CMPcadr((V134));
	goto T345;
	goto T364;
T364:;
	if((V136!= VV[132]))goto T366;
	(VV[56]->s.s_dbind)= CMPcadr((V134));
	goto T345;
	goto T366;
T366:;
	if((V136!= VV[133]))goto T368;
	(VV[56]->s.s_dbind)= number_minus(small_fixnum(3),CMPcadr((V134)));
	goto T345;
	goto T368;
T368:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[57],CMPcar((V134)))));}
	goto T345;
T345:;
	V133= CMPcdr((V133));
	V134= CMPcar((V133));
	goto T336;}
	goto T332;
T332:;
	if((V130!= VV[134]))goto T375;
	if(!(type_of(CMPcdr((V129)))==t_cons)){
	goto T377;}
	(void)((*(LnkLI135))(CMPcadr((V129)),CMPcddr((V129))));
	goto T312;
	goto T377;
T377:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[58],(V129))));
	goto T312;
	goto T375;
T375:;
	if((V130!= VV[136])
	&& (V130!= VV[137])
	&& (V130!= VV[138])
	&& (V130!= VV[139]))goto T379;
	(void)((*(LnkLI135))(CMPcar((V129)),CMPcdr((V129))));
	goto T312;
	goto T379;
T379:;
	if((V130!= VV[140]))goto T380;
	if(!(type_of(CMPcdr((V129)))==t_cons)){
	goto T382;}
	if(!(type_of(CMPcadr((V129)))==t_cons)){
	goto T382;}
	if(!((CMPcaadr((V129)))==(VV[26]))){
	goto T382;}
	(void)((*(LnkLI141))(CMPcaddr((V129)),CMPcdr(CMPcadr((V129))),CMPcddr((V129))));
	goto T312;
	goto T382;
T382:;
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[59],(V129))));
	goto T312;
	goto T380;
T380:;
	if((V130!= VV[26]))goto T388;
	if(!(type_of(CMPcdr((V129)))==t_cons)){
	goto T390;}
	(void)((*(LnkLI141))(CMPcadr((V129)),CMPcddr((V129)),Cnil));
	goto T312;
	goto T390;
T390:;
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[60],(V129))));
	goto T312;
	goto T388;
T388:;
	if((V130!= VV[90]))goto T392;
	{register object V137;
	object V138;
	V137= CMPcdr((V129));
	V138= CMPcar((V137));
	goto T396;
T396:;
	if(!(((V137))==Cnil)){
	goto T397;}
	goto T312;
	goto T397;
T397:;
	if(!(type_of((V138))==t_symbol)){
	goto T403;}
	(void)(remprop((V138),VV[50]));
	goto T401;
	goto T403;
T403:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[61],(V138))));
	goto T401;
T401:;
	V137= CMPcdr((V137));
	V138= CMPcar((V137));
	goto T396;}
	goto T392;
T392:;
	if((V130!= VV[92]))goto T410;
	{register object V139;
	object V140;
	V139= CMPcdr((V129));
	V140= CMPcar((V139));
	goto T414;
T414:;
	if(!(((V139))==Cnil)){
	goto T415;}
	goto T312;
	goto T415;
T415:;
	if(!(type_of((V140))==t_symbol)){
	goto T421;}
	(void)(putprop((V140),Ct,VV[50]));
	goto T419;
	goto T421;
T421:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[62],(V140))));
	goto T419;
T419:;
	V139= CMPcdr((V139));
	V140= CMPcar((V139));
	goto T414;}
	goto T410;
T410:;
	if((V130!= VV[79])
	&& (V130!= VV[142]))goto T428;
	{register object V141;
	object V142;
	V141= CMPcdr((V129));
	V142= CMPcar((V141));
	goto T432;
T432:;
	if(!(((V141))==Cnil)){
	goto T433;}
	goto T312;
	goto T433;
T433:;
	if(type_of((V142))==t_symbol){
	goto T437;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[63],(V142))));
	goto T437;
T437:;
	V141= CMPcdr((V141));
	V142= CMPcar((V141));
	goto T432;}
	goto T428;
T428:;
	if((V130!= VV[143]))goto T445;
	{register object V143;
	register object V144;
	V143= CMPcdr((V129));
	V144= CMPcar((V143));
	goto T449;
T449:;
	if(!(((V143))==Cnil)){
	goto T450;}
	goto T312;
	goto T450;
T450:;
	if(!(type_of((V144))==t_symbol)){
	goto T456;}
	{register object x= (V144),V145= (VV[64]->s.s_dbind);
	while(V145!=Cnil)
	if(eql(x,V145->c.c_car)){
	goto T454;
	}else V145=V145->c.c_cdr;}
	(VV[64]->s.s_dbind)= make_cons(V144,(VV[64]->s.s_dbind));
	goto T454;
	goto T456;
T456:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[65],(V144))));
	goto T454;
T454:;
	V143= CMPcdr((V143));
	V144= CMPcar((V143));
	goto T449;}
	goto T445;
T445:;
	if((V130== VV[144])
	|| (V130== VV[145])
	|| (V130== VV[146])
	|| (V130== VV[147])
	|| (V130== VV[148]))goto T467;
	if((V130== VV[137])
	|| (V130== VV[149])
	|| (V130== VV[25])
	|| (V130== VV[150])
	|| (V130== VV[151]))goto T467;
	if((V130== VV[152])
	|| (V130== VV[136])
	|| (V130== VV[153])
	|| (V130== VV[154])
	|| (V130== VV[32]))goto T467;
	if((V130== VV[155])
	|| (V130== VV[156])
	|| (V130== VV[139])
	|| (V130== Cnil)
	|| (V130== VV[157]))goto T467;
	if((V130== VV[158])
	|| (V130== VV[159])
	|| (V130== VV[160])
	|| (V130== VV[161])
	|| (V130== VV[162]))goto T467;
	if((V130== VV[163])
	|| (V130== VV[164])
	|| (V130== VV[165])
	|| (V130== VV[138])
	|| (V130== VV[166]))goto T467;
	if((V130== VV[167])
	|| (V130== VV[168])
	|| (V130== VV[169])
	|| (V130== VV[170])
	|| (V130== VV[171]))goto T467;
	if((V130== VV[172])
	|| (V130== VV[173])
	|| (V130== VV[174])
	|| (V130== VV[175])
	|| (V130== Ct))goto T467;
	if((V130!= VV[176])
	&& (V130!= VV[177])
	&& (V130!= VV[178]))goto T466;
	goto T467;
T467:;
	(void)((*(LnkLI135))(CMPcar((V129)),CMPcdr((V129))));
	goto T312;
	goto T466;
T466:;
	{register object x= CMPcar((V129)),V147= (VV[64]->s.s_dbind);
	while(V147!=Cnil)
	if(eql(x,V147->c.c_car)){
	goto T468;
	}else V147=V147->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[66],CMPcar((V129)))));
	goto T468;
T468:;
	{object V148 =(CMPcar((V129)))->s.s_plist;
	 object ind= VV[67];
	while(V148!=Cnil){
	if(V148->c.c_car==ind){
	base[0]= (V148->c.c_cdr->c.c_car);
	goto T473;
	}else V148=V148->c.c_cdr->c.c_cdr;}
	base[0]= Cnil;}
	goto T473;
T473:;
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T471;}
	goto T312;
	goto T471;
T471:;
	{register object V149;
	object V150;
	V149= CMPcdr((V129));
	V150= CMPcar((V149));
	goto T477;
T477:;
	if(!(((V149))==Cnil)){
	goto T478;}
	goto T312;
	goto T478;
T478:;
	{object V152 =(CMPcar((V129)))->s.s_plist;
	 object ind= VV[67];
	while(V152!=Cnil){
	if(V152->c.c_car==ind){
	V151= (V152->c.c_cdr->c.c_car);
	goto T483;
	}else V152=V152->c.c_cdr->c.c_cdr;}
	V151= Cnil;}
	goto T483;
T483:;
	(void)((
	V153 = V151,
	(type_of(V153) == t_sfun ?(*((V153)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V153)==t_vfun) ?
	(*((V153)->sfn.sfn_self)):
	(fcall.fun=(V153),fcalln))((V150))));
	V149= CMPcdr((V149));
	V150= CMPcar((V149));
	goto T477;}}
	goto T312;
T312:;
	{object V154 = Cnil;
	VMR20(V154)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAIM-VAR	*/

static object LI21(V157,V158)

register object V157;object V158;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	V157= (*(LnkLI122))((V157));
	{register object V159;
	register object V160;
	V159= (V158);
	V160= CMPcar((V159));
	goto T494;
T494:;
	if(!(((V159))==Cnil)){
	goto T495;}
	{object V161 = Cnil;
	VMR21(V161)}
	goto T495;
T495:;
	if(!(type_of((V160))==t_symbol)){
	goto T501;}
	{register object V162;
	register object V163;
	{object V164 =((V160))->s.s_plist;
	 object ind= VV[68];
	while(V164!=Cnil){
	if(V164->c.c_car==ind){
	V162= (V164->c.c_cdr->c.c_car);
	goto T503;
	}else V164=V164->c.c_cdr->c.c_cdr;}
	V162= Cnil;}
	goto T503;
T503:;
	V163= (*(LnkLI179))((V160));
	if(((V162))==Cnil){
	goto T508;}
	V162= (*(LnkLI127))((V162),(V157));
	goto T506;
	goto T508;
T508:;
	V162= (V157);
	goto T506;
T506:;
	if(((V163))==Cnil){
	goto T510;}
	V162= (*(LnkLI127))((V162),STREF(object,(V163),20));
	goto T510;
T510:;
	if(((V162))!=Cnil){
	goto T514;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[70],(V160))));
	goto T514;
T514:;
	(void)(putprop((V160),(V162),VV[68]));
	if(((V163))==Cnil){
	goto T499;}
	V165= Ct;
	STSET(object,(V163),20, (V162));
	(void)((V162));
	goto T499;}
	goto T501;
T501:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[71],(V160))));
	goto T499;
T499:;
	V159= CMPcdr((V159));
	V160= CMPcar((V159));
	goto T494;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C1BODY	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V166;
	object V167;
	V166=(base[0]);
	V167=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V168;
	object V169;
	register object V170;
	object V171;
	object V172;
	object V173;
	V168= Cnil;
	V169= Cnil;
	V170= Cnil;
	V171= Cnil;
	V172= Cnil;
	V173= Cnil;
	goto T533;
T533:;
	if(!(((V166))==Cnil)){
	goto T535;}
	goto T531;
	goto T535;
T535:;
	V173= (*(LnkLI180))(CMPcar((V166)));
	if(!(type_of((V173))==t_string)){
	goto T542;}
	if(((V167))==Cnil){
	goto T545;}
	if((CMPcdr((V166)))==Cnil){
	goto T545;}
	if(((V172))==Cnil){
	goto T544;}
	goto T545;
T545:;
	goto T531;
	goto T544;
T544:;
	V172= (V173);
	goto T540;
	goto T542;
T542:;
	if(!(type_of((V173))==t_cons)){
	goto T553;}
	if(!((CMPcar((V173)))==(VV[72]))){
	goto T553;}
	{object V174;
	register object V175;
	V174= CMPcdr((V173));
	V175= CMPcar((V174));
	goto T560;
T560:;
	if(!(((V174))==Cnil)){
	goto T561;}
	goto T540;
	goto T561;
T561:;
	if(!(type_of((V175))==t_cons)){
	goto T566;}
	if(type_of(CMPcar((V175)))==t_symbol){
	goto T565;}
	goto T566;
T566:;
	(void)((VFUN_NARGS=2,(*(LnkLI121))(VV[73],(V175))));
	goto T565;
T565:;
	{object V176= CMPcar((V175));
	if((V176!= VV[129]))goto T571;
	{register object V177;
	object V178;
	V177= CMPcdr((V175));
	V178= CMPcar((V177));
	goto T575;
T575:;
	if(!(((V177))==Cnil)){
	goto T576;}
	goto T570;
	goto T576;
T576:;
	if(type_of((V178))==t_symbol){
	goto T580;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[74],(V175),(V178))));
	goto T580;
T580:;
	V168= make_cons(V178,(V168));
	V177= CMPcdr((V177));
	V178= CMPcar((V177));
	goto T575;}
	goto T571;
T571:;
	if((V176!= VV[142]))goto T590;
	{register object V180;
	object V181;
	V180= CMPcdr((V175));
	V181= CMPcar((V180));
	goto T594;
T594:;
	if(!(((V180))==Cnil)){
	goto T595;}
	goto T570;
	goto T595;
T595:;
	if(type_of((V181))==t_symbol){
	goto T599;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[75],(V175),(V181))));
	goto T599;
T599:;
	V169= make_cons(V181,(V169));
	V180= CMPcdr((V180));
	V181= CMPcar((V180));
	goto T594;}
	goto T590;
T590:;
	if((V176!= VV[134]))goto T609;
	if(!((CMPcdr((V175)))==Cnil)){
	goto T610;}
	(void)((VFUN_NARGS=2,(*(LnkLI121))(VV[76],(V175))));
	goto T610;
T610:;
	{object V183;
	V183= (*(LnkLI122))(CMPcadr((V175)));
	if(((V183))==Cnil){
	goto T570;}
	{register object V184;
	object V185;
	V184= CMPcddr((V175));
	V185= CMPcar((V184));
	goto T619;
T619:;
	if(!(((V184))==Cnil)){
	goto T620;}
	goto T570;
	goto T620;
T620:;
	if(type_of((V185))==t_symbol){
	goto T624;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[77],(V175),(V185))));
	goto T624;
T624:;
	{object V186;
	V186= make_cons((V185),(V183));
	V170= make_cons((V186),(V170));}
	V184= CMPcdr((V184));
	V185= CMPcar((V184));
	goto T619;}}
	goto T609;
T609:;
	if((V176!= VV[79]))goto T635;
	{register object V187;
	object V188;
	V187= CMPcdr((V175));
	V188= CMPcar((V187));
	goto T639;
T639:;
	if(!(((V187))==Cnil)){
	goto T640;}
	goto T570;
	goto T640;
T640:;
	if(type_of((V188))==t_symbol){
	goto T644;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[78],(V175),(V188))));
	goto T644;
T644:;
	{object V189;
	V189= make_cons((V188),VV[79]);
	V170= make_cons((V189),(V170));}
	V187= CMPcdr((V187));
	V188= CMPcar((V187));
	goto T639;}
	goto T635;
T635:;
	if((V176!= VV[181]))goto T655;
	{register object V190;
	object V191;
	V190= CMPcdr((V175));
	V191= CMPcar((V190));
	goto T659;
T659:;
	if(!(((V190))==Cnil)){
	goto T660;}
	goto T570;
	goto T660;
T660:;
	if(type_of((V191))==t_symbol){
	goto T664;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[80],(V175),(V191))));
	goto T664;
T664:;
	{object V192;
	V192= make_cons((V191),VV[81]);
	V170= make_cons((V192),(V170));}
	V190= CMPcdr((V190));
	V191= CMPcar((V190));
	goto T659;}
	goto T655;
T655:;
	if((V176== VV[136])
	|| (V176== VV[137])
	|| (V176== VV[152])
	|| (V176== VV[138])
	|| (V176== VV[144]))goto T676;
	if((V176== VV[145])
	|| (V176== VV[146])
	|| (V176== VV[147])
	|| (V176== VV[148])
	|| (V176== VV[149]))goto T676;
	if((V176== VV[25])
	|| (V176== VV[150])
	|| (V176== VV[151])
	|| (V176== VV[153])
	|| (V176== VV[154]))goto T676;
	if((V176== VV[32])
	|| (V176== VV[155])
	|| (V176== VV[156])
	|| (V176== VV[139])
	|| (V176== Cnil))goto T676;
	if((V176== VV[157])
	|| (V176== VV[158])
	|| (V176== VV[159])
	|| (V176== VV[160])
	|| (V176== VV[161]))goto T676;
	if((V176== VV[162])
	|| (V176== VV[163])
	|| (V176== VV[164])
	|| (V176== VV[165])
	|| (V176== VV[166]))goto T676;
	if((V176== VV[167])
	|| (V176== VV[168])
	|| (V176== VV[169])
	|| (V176== VV[170])
	|| (V176== VV[171]))goto T676;
	if((V176== VV[172])
	|| (V176== VV[173])
	|| (V176== VV[174])
	|| (V176== VV[175])
	|| (V176== Ct))goto T676;
	if((V176!= VV[176])
	&& (V176!= VV[177])
	&& (V176!= VV[178])
	&& (V176!= VV[82]))goto T675;
	goto T676;
T676:;
	{object V193;
	if(!((CMPcar((V175)))==(VV[82]))){
	goto T679;}
	V193= CMPcar((V175));
	goto T677;
	goto T679;
T679:;
	V193= (*(LnkLI122))(CMPcar((V175)));
	goto T677;
T677:;
	if(((V193))==Cnil){
	goto T570;}
	{register object V194;
	object V195;
	V194= CMPcdr((V175));
	V195= CMPcar((V194));
	goto T686;
T686:;
	if(!(((V194))==Cnil)){
	goto T687;}
	goto T570;
	goto T687;
T687:;
	if(type_of((V195))==t_symbol){
	goto T691;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[83],(V175),(V195))));
	goto T691;
T691:;
	{object V196;
	V196= make_cons((V195),(V193));
	V170= make_cons((V196),(V170));}
	V194= CMPcdr((V194));
	V195= CMPcar((V194));
	goto T686;}}
	goto T675;
T675:;
	V171= make_cons(V175,(V171));}
	goto T570;
T570:;
	V174= CMPcdr((V174));
	V175= CMPcar((V174));
	goto T560;}
	goto T553;
T553:;
	goto T531;
	goto T540;
T540:;
	{object V198;
	V198= CMPcar((V166));
	V166= CMPcdr((V166));}
	goto T533;
	goto T531;
T531:;
	base[2]= (V166);
	base[3]= (V168);
	base[4]= (V170);
	base[5]= (V169);
	base[6]= (V171);
	base[7]= (V172);
	vs_top=(vs_base=base+2)+6;
	return;}
	}
}
/*	local entry for function C1DECL-BODY	*/

static object LI23(V201,V202)

object V201;object V202;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{register object V203;
	V203= Cnil;
	if(((V201))!=Cnil){
	goto T720;}
	{object V204 = (*(LnkLI182))((V202));
	VMR23(V204)}
	goto T720;
T720:;
	bds_bind(VV[15],(VV[15]->s.s_dbind));
	bds_bind(VV[64],(VV[64]->s.s_dbind));
	bds_bind(VV[18],(VV[18]->s.s_dbind));
	bds_bind(VV[55],(VV[55]->s.s_dbind));
	bds_bind(VV[54],(VV[54]->s.s_dbind));
	{object V205;
	register object V206;
	V205= (V201);
	V206= CMPcar((V205));
	goto T726;
T726:;
	if(!(((V205))==Cnil)){
	goto T727;}
	goto T722;
	goto T727;
T727:;
	{object V207= CMPcar((V206));
	if((V207!= VV[131]))goto T732;
	{object V208;
	register object V209;
	V208= CMPcdr((V206));
	V209= CMPcar((V208));
	goto T736;
T736:;
	if(!(((V208))==Cnil)){
	goto T737;}
	goto T731;
	goto T737;
T737:;
	if(!(type_of((V209))==t_symbol)){
	goto T741;}
	V209= list(2,(V209),small_fixnum(3));
	goto T741;
T741:;
	if(!(type_of((V209))==t_cons)){
	goto T746;}
	if(!(type_of(CMPcdr((V209)))==t_cons)){
	goto T746;}
	{object V210= CMPcadr((V209));
	if(!(type_of(V210)==t_fixnum||
type_of(V210)==t_bignum||
type_of(V210)==t_ratio||
type_of(V210)==t_shortfloat||
type_of(V210)==t_longfloat||
type_of(V210)==t_complex)){
	goto T746;}}
	base[8]= small_fixnum(0);
	base[9]= CMPcadr((V209));
	base[10]= small_fixnum(3);
	vs_top=(vs_base=base+8)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T747;}
	goto T746;
T746:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[84],(V209))));
	goto T745;
	goto T747;
T747:;
	{object V211= CMPcar((V209));
	if((V211!= VV[85]))goto T758;
	(VV[54]->s.s_dbind)= ((fix(CMPcadr((V209))))>=(2)?Ct:Cnil);
	{object V212;
	V212= list(2,VV[85],CMPcadr((V209)));
	V203= make_cons((V212),(V203));
	goto T745;}
	goto T758;
T758:;
	if((V211!= VV[86]))goto T763;
	(VV[55]->s.s_dbind)= CMPcadr((V209));
	{object V213;
	V213= list(2,VV[86],CMPcadr((V209)));
	V203= make_cons((V213),(V203));
	goto T745;}
	goto T763;
T763:;
	if((V211!= VV[132])
	&& (V211!= VV[133]))goto T768;
	goto T745;
	goto T768;
T768:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[87],CMPcar((V209)))));}
	goto T745;
T745:;
	V208= CMPcdr((V208));
	V209= CMPcar((V208));
	goto T736;}
	goto T732;
T732:;
	if((V207!= VV[140]))goto T774;
	if((CMPcdr((V206)))==Cnil){
	goto T775;}
	if(!(type_of(CMPcadr((V206)))==t_cons)){
	goto T775;}
	if(!((CMPcaadr((V206)))==(VV[26]))){
	goto T775;}
	if(!((CMPcdadr((V206)))==Cnil)){
	goto T776;}
	goto T775;
T775:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[88],(V206))));
	goto T731;
	goto T776;
T776:;
	{object V214;
	object V215;
	V214= CMPcddr((V206));
	V215= CMPcar((V214));
	goto T787;
T787:;
	if(!(((V214))==Cnil)){
	goto T788;}
	goto T731;
	goto T788;
T788:;
	(void)((*(LnkLI183))((V215),CMPcadadr((V206)),CMPcddadr((V206))));
	V214= CMPcdr((V214));
	V215= CMPcar((V214));
	goto T787;}
	goto T774;
T774:;
	if((V207!= VV[26]))goto T798;
	if((CMPcdr((V206)))==Cnil){
	goto T799;}
	if((CMPcddr((V206)))==Cnil){
	goto T799;}
	if(type_of(CMPcadr((V206)))==t_symbol){
	goto T800;}
	goto T799;
T799:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[89],(V206))));
	goto T731;
	goto T800;
T800:;
	(void)((*(LnkLI183))(CMPcadr((V206)),CMPcaddr((V206)),CMPcdddr((V206))));
	goto T731;
	goto T798;
T798:;
	if((V207!= VV[90]))goto T806;
	{object V216;
	register object V217;
	V216= CMPcdr((V206));
	V217= CMPcar((V216));
	goto T810;
T810:;
	if(!(((V216))==Cnil)){
	goto T811;}
	goto T731;
	goto T811;
T811:;
	if(!(type_of((V217))==t_symbol)){
	goto T817;}
	{object V218;
	V218= list(2,VV[90],(V217));
	V203= make_cons((V218),(V203));}
	(VV[18]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI184))((V217),(VV[18]->s.s_dbind)));
	goto T815;
	goto T817;
T817:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[91],(V217))));
	goto T815;
T815:;
	V216= CMPcdr((V216));
	V217= CMPcar((V216));
	goto T810;}
	goto T806;
T806:;
	if((V207!= VV[92]))goto T828;
	{object V219;
	register object V220;
	V219= CMPcdr((V206));
	V220= CMPcar((V219));
	goto T832;
T832:;
	if(!(((V219))==Cnil)){
	goto T833;}
	goto T731;
	goto T833;
T833:;
	if(!(type_of((V220))==t_symbol)){
	goto T839;}
	{object V221;
	V221= list(2,VV[92],(V220));
	V203= make_cons((V221),(V203));}
	(VV[18]->s.s_dbind)= make_cons(V220,(VV[18]->s.s_dbind));
	goto T837;
	goto T839;
T839:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[93],(V220))));
	goto T837;
T837:;
	V219= CMPcdr((V219));
	V220= CMPcar((V219));
	goto T832;}
	goto T828;
T828:;
	if((V207!= VV[143]))goto T850;
	{object V223;
	register object V224;
	V223= CMPcdr((V206));
	V224= CMPcar((V223));
	goto T854;
T854:;
	if(!(((V223))==Cnil)){
	goto T855;}
	goto T731;
	goto T855;
T855:;
	if(!(type_of((V224))==t_symbol)){
	goto T861;}
	{register object x= (V224),V225= (VV[64]->s.s_dbind);
	while(V225!=Cnil)
	if(eql(x,V225->c.c_car)){
	goto T859;
	}else V225=V225->c.c_cdr;}
	(VV[64]->s.s_dbind)= make_cons(V224,(VV[64]->s.s_dbind));
	goto T859;
	goto T861;
T861:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[94],(V224))));
	goto T859;
T859:;
	V223= CMPcdr((V223));
	V224= CMPcar((V223));
	goto T854;}
	goto T850;
T850:;
	{register object x= CMPcar((V206)),V227= (VV[64]->s.s_dbind);
	while(V227!=Cnil)
	if(eql(x,V227->c.c_car)){
	goto T731;
	}else V227=V227->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[95],CMPcar((V206)))));}
	goto T731;
T731:;
	V205= CMPcdr((V205));
	V206= CMPcar((V205));
	goto T726;}
	goto T722;
T722:;
	V202= (*(LnkLI182))((V202));
	{object V228 = list(4,VV[96],CMPcadr((V202)),(V203),(V202));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR23(V228)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2DECL-BODY	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	bds_check;
	{object V229;
	object V230;
	V229=(base[0]);
	V230=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[53],(VV[53]->s.s_dbind));
	bds_bind(VV[54],(VV[54]->s.s_dbind));
	bds_bind(VV[49],(VV[49]->s.s_dbind));
	bds_bind(VV[18],(VV[18]->s.s_dbind));
	bds_bind(VV[55],(VV[55]->s.s_dbind));
	{register object V231;
	register object V232;
	V231= (V229);
	V232= CMPcar((V231));
	goto T884;
T884:;
	if(!(((V231))==Cnil)){
	goto T885;}
	goto T880;
	goto T885;
T885:;
	{object V233= CMPcar((V232));
	if((V233!= VV[85]))goto T890;
	{register long V234;
	V234= fix(CMPcadr((V232)));
	(VV[53]->s.s_dbind)= ((V234)>=(1)?Ct:Cnil);
	(VV[54]->s.s_dbind)= ((V234)>=(2)?Ct:Cnil);
	(VV[49]->s.s_dbind)= ((V234)>=(3)?Ct:Cnil);
	goto T889;}
	goto T890;
T890:;
	if((V233!= VV[86]))goto T897;
	(VV[55]->s.s_dbind)= CMPcadr((V232));
	goto T889;
	goto T897;
T897:;
	if((V233!= VV[92]))goto T899;
	{register object V235;
	V235= CMPcadr((V232));
	(VV[18]->s.s_dbind)= make_cons((V235),(VV[18]->s.s_dbind));
	goto T889;}
	goto T899;
T899:;
	if((V233!= VV[90]))goto T902;
	(VV[18]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI184))(CMPcadr((V232)),(VV[18]->s.s_dbind)));
	goto T889;
	goto T902;
T902:;
	(void)((*(LnkLI185))());}
	goto T889;
T889:;
	V231= CMPcdr((V231));
	V232= CMPcar((V231));
	goto T884;}
	goto T880;
T880:;
	base[7]= (V230);
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

static object LI25(V239,V240,V241)

register object V239;object V240;object V241;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V242;
	register object V243;
	V242= (V240);
	V243= CMPcar((V242));
	goto T914;
T914:;
	if(!(((V242))==Cnil)){
	goto T915;}
	goto T910;
	goto T915;
T915:;
	{register object x= CMPcar((V243)),V244= (V239);
	while(V244!=Cnil)
	if(eql(x,V244->c.c_car)){
	goto T919;
	}else V244=V244->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[97],CMPcar((V243)))));
	goto T919;
T919:;
	V242= CMPcdr((V242));
	V243= CMPcar((V242));
	goto T914;}
	goto T910;
T910:;
	{register object V245;
	register object V246;
	V245= (V241);
	V246= CMPcar((V245));
	goto T930;
T930:;
	if(!(((V245))==Cnil)){
	goto T931;}
	{object V247 = Cnil;
	VMR25(V247)}
	goto T931;
T931:;
	{register object x= (V246),V248= (V239);
	while(V248!=Cnil)
	if(eql(x,V248->c.c_car)){
	goto T935;
	}else V248=V248->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[98],(V246))));
	goto T935;
T935:;
	V245= CMPcdr((V245));
	V246= CMPcar((V245));
	goto T930;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROCLAMATION	*/

static object LI26(V250)

object V250;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V251= CMPcar((V250));
	if((V251!= VV[129]))goto T943;
	{register object V252;
	object V253;
	V252= CMPcdr((V250));
	V253= CMPcar((V252));
	goto T947;
T947:;
	if(!(((V252))==Cnil)){
	goto T948;}
	{object V254 = Ct;
	VMR26(V254)}
	goto T948;
T948:;
	if(!(type_of((V253))==t_symbol)){
	goto T954;}
	base[2]= (V253);
	vs_top=(vs_base=base+2)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T952;}
	{object V255 = Cnil;
	VMR26(V255)}
	goto T954;
T954:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[99],(V253))));
	goto T952;
T952:;
	V252= CMPcdr((V252));
	V253= CMPcar((V252));
	goto T947;}
	goto T943;
T943:;
	if((V251!= VV[131]))goto T964;
	{register object V256;
	register object V257;
	V256= CMPcdr((V250));
	V257= CMPcar((V256));
	goto T968;
T968:;
	if(!(((V256))==Cnil)){
	goto T969;}
	{object V258 = Ct;
	VMR26(V258)}
	goto T969;
T969:;
	if(!(type_of((V257))==t_symbol)){
	goto T973;}
	V257= list(2,(V257),small_fixnum(3));
	goto T973;
T973:;
	if(!(type_of((V257))==t_cons)){
	goto T978;}
	if(!(type_of(CMPcdr((V257)))==t_cons)){
	goto T978;}
	{object V259= CMPcadr((V257));
	if(!(type_of(V259)==t_fixnum||
type_of(V259)==t_bignum||
type_of(V259)==t_ratio||
type_of(V259)==t_shortfloat||
type_of(V259)==t_longfloat||
type_of(V259)==t_complex)){
	goto T978;}}
	base[2]= small_fixnum(0);
	base[3]= CMPcadr((V257));
	base[4]= small_fixnum(3);
	vs_top=(vs_base=base+2)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T979;}
	goto T978;
T978:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[100],(V257))));
	goto T977;
	goto T979;
T979:;
	{object V260= CMPcar((V257));
	if((V260!= VV[85]))goto T990;
	V261= CMPcadr((V257));
	if(((VV[53]->s.s_dbind))!=Cnil){
	goto T995;}
	V262= small_fixnum(0);
	goto T993;
	goto T995;
T995:;
	if(((VV[54]->s.s_dbind))!=Cnil){
	goto T998;}
	V262= small_fixnum(1);
	goto T993;
	goto T998;
T998:;
	if(((VV[49]->s.s_dbind))!=Cnil){
	goto T1001;}
	V262= small_fixnum(2);
	goto T993;
	goto T1001;
T1001:;
	V262= small_fixnum(3);
	goto T993;
T993:;
	if(number_compare(/* INLINE-ARGS */V261,V262)==0){
	goto T977;}
	{object V263 = Cnil;
	VMR26(V263)}
	goto T990;
T990:;
	if((V260!= VV[86]))goto T1003;
	if(number_compare(CMPcadr((V257)),(VV[55]->s.s_dbind))==0){
	goto T977;}
	{object V264 = Cnil;
	VMR26(V264)}
	goto T1003;
T1003:;
	if((V260!= VV[132]))goto T1006;
	if(number_compare(CMPcadr((V257)),(VV[56]->s.s_dbind))==0){
	goto T977;}
	{object V265 = Cnil;
	VMR26(V265)}
	goto T1006;
T1006:;
	if((V260!= VV[133]))goto T1009;
	V266= number_minus(small_fixnum(3),CMPcadr((V257)));
	if(number_compare(/* INLINE-ARGS */V266,(VV[56]->s.s_dbind))==0){
	goto T977;}
	{object V267 = Cnil;
	VMR26(V267)}
	goto T1009;
T1009:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[101],CMPcar((V257)))));}
	goto T977;
T977:;
	V256= CMPcdr((V256));
	V257= CMPcar((V256));
	goto T968;}
	goto T964;
T964:;
	if((V251!= VV[134]))goto T1017;
	if(!(type_of(CMPcdr((V250)))==t_cons)){
	goto T1019;}
	{object V268;
	object V269;
	V268= (*(LnkLI122))(CMPcadr((V250)));
	V269= Cnil;
	{register object V270;
	object V271;
	V270= CMPcddr((V250));
	V271= CMPcar((V270));
	goto T1025;
T1025:;
	if(!(((V270))==Cnil)){
	goto T1026;}
	{object V272 = Ct;
	VMR26(V272)}
	goto T1026;
T1026:;
	if(!(type_of((V271))==t_symbol)){
	goto T1032;}
	{object V273 =((V271))->s.s_plist;
	 object ind= VV[68];
	while(V273!=Cnil){
	if(V273->c.c_car==ind){
	V269= (V273->c.c_cdr->c.c_car);
	goto T1037;
	}else V273=V273->c.c_cdr->c.c_cdr;}
	V269= Cnil;}
	goto T1037;
T1037:;
	if(((V269))==Cnil){
	goto T1034;}
	if(equal((V269),(V268))){
	goto T1030;}
	goto T1034;
T1034:;
	{object V274 = Cnil;
	VMR26(V274)}
	goto T1032;
T1032:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[102],(V271))));
	goto T1030;
T1030:;
	V270= CMPcdr((V270));
	V271= CMPcar((V270));
	goto T1025;}}
	goto T1019;
T1019:;
	{object V275 = (VFUN_NARGS=2,(*(LnkLI123))(VV[103],(V250)));
	VMR26(V275)}
	goto T1017;
T1017:;
	if((V251!= VV[136])
	&& (V251!= VV[137])
	&& (V251!= VV[138])
	&& (V251!= VV[139]))goto T1044;
	{object V276;
	object V277;
	V276= (*(LnkLI122))(CMPcar((V250)));
	V277= Cnil;
	{register object V278;
	object V279;
	V278= CMPcdr((V250));
	V279= CMPcar((V278));
	goto T1049;
T1049:;
	if(!(((V278))==Cnil)){
	goto T1050;}
	{object V280 = Ct;
	VMR26(V280)}
	goto T1050;
T1050:;
	if(!(type_of((V279))==t_symbol)){
	goto T1056;}
	{object V281 =((V279))->s.s_plist;
	 object ind= VV[68];
	while(V281!=Cnil){
	if(V281->c.c_car==ind){
	V277= (V281->c.c_cdr->c.c_car);
	goto T1061;
	}else V281=V281->c.c_cdr->c.c_cdr;}
	V277= Cnil;}
	goto T1061;
T1061:;
	if(((V277))==Cnil){
	goto T1058;}
	if(equal((V277),(V276))){
	goto T1054;}
	goto T1058;
T1058:;
	{object V282 = Cnil;
	VMR26(V282)}
	goto T1056;
T1056:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[104],(V279))));
	goto T1054;
T1054:;
	V278= CMPcdr((V278));
	V279= CMPcar((V278));
	goto T1049;}}
	goto T1044;
T1044:;
	if((V251!= VV[140]))goto T1068;
	if((CMPcdr((V250)))==Cnil){
	goto T1069;}
	if(!(type_of(CMPcadr((V250)))==t_cons)){
	goto T1069;}
	if(!((CMPcaadr((V250)))==(VV[26]))){
	goto T1069;}
	if(!((CMPcdadr((V250)))==Cnil)){
	goto T1070;}
	goto T1069;
T1069:;
	{object V283 = (VFUN_NARGS=2,(*(LnkLI123))(VV[105],(V250)));
	VMR26(V283)}
	goto T1070;
T1070:;
	{register object V284;
	object V285;
	V284= CMPcddr((V250));
	V285= CMPcar((V284));
	goto T1081;
T1081:;
	if(!(((V284))==Cnil)){
	goto T1082;}
	{object V286 = Ct;
	VMR26(V286)}
	goto T1082;
T1082:;
	{object V287 =((V285))->s.s_plist;
	 object ind= VV[38];
	while(V287!=Cnil){
	if(V287->c.c_car==ind){
	if(((V287->c.c_cdr->c.c_car))==Cnil){
	goto T1087;}
	goto T1089;
	}else V287=V287->c.c_cdr->c.c_cdr;}
	goto T1087;}
	goto T1089;
T1089:;
	V288= (*(LnkLI124))(CMPcadadr((V250)));
	{object V290 =((V285))->s.s_plist;
	 object ind= VV[36];
	while(V290!=Cnil){
	if(V290->c.c_car==ind){
	V289= (V290->c.c_cdr->c.c_car);
	goto T1092;
	}else V290=V290->c.c_cdr->c.c_cdr;}
	V289= Cnil;}
	goto T1092;
T1092:;
	if(!(equal(/* INLINE-ARGS */V288,V289))){
	goto T1087;}
	V291= (*(LnkLI125))(CMPcddadr((V250)));
	{object V293 =((V285))->s.s_plist;
	 object ind= VV[37];
	while(V293!=Cnil){
	if(V293->c.c_car==ind){
	V292= (V293->c.c_cdr->c.c_car);
	goto T1094;
	}else V293=V293->c.c_cdr->c.c_cdr;}
	V292= Cnil;}
	goto T1094;
T1094:;
	if(equal(/* INLINE-ARGS */V291,V292)){
	goto T1086;}
	goto T1087;
T1087:;
	{object V294 = Cnil;
	VMR26(V294)}
	goto T1086;
T1086:;
	V284= CMPcdr((V284));
	V285= CMPcar((V284));
	goto T1081;}
	goto T1068;
T1068:;
	if((V251!= VV[26]))goto T1100;
	if((CMPcdr((V250)))==Cnil){
	goto T1101;}
	if(!((CMPcddr((V250)))==Cnil)){
	goto T1102;}
	goto T1101;
T1101:;
	{object V295 = (VFUN_NARGS=2,(*(LnkLI123))(VV[106],(V250)));
	VMR26(V295)}
	goto T1102;
T1102:;
	{object V296 =(CMPcadr((V250)))->s.s_plist;
	 object ind= VV[38];
	while(V296!=Cnil){
	if(V296->c.c_car==ind){
	if(((V296->c.c_cdr->c.c_car))!=Cnil){
	goto T1106;}
	goto T1107;
	}else V296=V296->c.c_cdr->c.c_cdr;}}
	goto T1107;
T1107:;
	{object V297 = Cnil;
	VMR26(V297)}
	goto T1106;
T1106:;
	V298= (*(LnkLI124))(CMPcaddr((V250)));
	{object V300 =(CMPcadr((V250)))->s.s_plist;
	 object ind= VV[36];
	while(V300!=Cnil){
	if(V300->c.c_car==ind){
	V299= (V300->c.c_cdr->c.c_car);
	goto T1110;
	}else V300=V300->c.c_cdr->c.c_cdr;}
	V299= Cnil;}
	goto T1110;
T1110:;
	if(equal(/* INLINE-ARGS */V298,V299)){
	goto T1108;}
	{object V301 = Cnil;
	VMR26(V301)}
	goto T1108;
T1108:;
	V302= (*(LnkLI125))(CMPcdddr((V250)));
	{object V304 =(CMPcadr((V250)))->s.s_plist;
	 object ind= VV[37];
	while(V304!=Cnil){
	if(V304->c.c_car==ind){
	V303= (V304->c.c_cdr->c.c_car);
	goto T1111;
	}else V304=V304->c.c_cdr->c.c_cdr;}
	V303= Cnil;}
	goto T1111;
T1111:;
	{object V305 = (equal(/* INLINE-ARGS */V302,V303)?Ct:Cnil);
	VMR26(V305)}
	goto T1100;
T1100:;
	if((V251!= VV[90]))goto T1112;
	{register object V306;
	object V307;
	V306= CMPcdr((V250));
	V307= CMPcar((V306));
	goto T1116;
T1116:;
	if(!(((V306))==Cnil)){
	goto T1117;}
	{object V308 = Ct;
	VMR26(V308)}
	goto T1117;
T1117:;
	if(!(type_of((V307))==t_symbol)){
	goto T1123;}
	{object V309 =((V307))->s.s_plist;
	 object ind= VV[50];
	while(V309!=Cnil){
	if(V309->c.c_car==ind){
	if(((V309->c.c_cdr->c.c_car))==Cnil){
	goto T1121;}
	goto T1126;
	}else V309=V309->c.c_cdr->c.c_cdr;}
	goto T1121;}
	goto T1126;
T1126:;
	{object V310 = Cnil;
	VMR26(V310)}
	goto T1123;
T1123:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[107],(V307))));
	goto T1121;
T1121:;
	V306= CMPcdr((V306));
	V307= CMPcar((V306));
	goto T1116;}
	goto T1112;
T1112:;
	if((V251!= VV[92]))goto T1132;
	{register object V311;
	object V312;
	V311= CMPcdr((V250));
	V312= CMPcar((V311));
	goto T1136;
T1136:;
	if(!(((V311))==Cnil)){
	goto T1137;}
	{object V313 = Ct;
	VMR26(V313)}
	goto T1137;
T1137:;
	if(!(type_of((V312))==t_symbol)){
	goto T1143;}
	{object V314 =((V312))->s.s_plist;
	 object ind= VV[50];
	while(V314!=Cnil){
	if(V314->c.c_car==ind){
	if(((V314->c.c_cdr->c.c_car))!=Cnil){
	goto T1141;}
	goto T1146;
	}else V314=V314->c.c_cdr->c.c_cdr;}}
	goto T1146;
T1146:;
	{object V315 = Cnil;
	VMR26(V315)}
	goto T1143;
T1143:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[108],(V312))));
	goto T1141;
T1141:;
	V311= CMPcdr((V311));
	V312= CMPcar((V311));
	goto T1136;}
	goto T1132;
T1132:;
	if((V251!= VV[79])
	&& (V251!= VV[142]))goto T1152;
	{register object V316;
	object V317;
	V316= CMPcdr((V250));
	V317= CMPcar((V316));
	goto T1156;
T1156:;
	if(!(((V316))==Cnil)){
	goto T1157;}
	{object V318 = Ct;
	VMR26(V318)}
	goto T1157;
T1157:;
	if(type_of((V317))==t_symbol){
	goto T1161;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[109],(V317))));
	goto T1161;
T1161:;
	V316= CMPcdr((V316));
	V317= CMPcar((V316));
	goto T1156;}
	goto T1152;
T1152:;
	if((V251!= VV[143]))goto T1169;
	{register object V319;
	object V320;
	V319= CMPcdr((V250));
	V320= CMPcar((V319));
	goto T1173;
T1173:;
	if(!(((V319))==Cnil)){
	goto T1174;}
	{object V321 = Ct;
	VMR26(V321)}
	goto T1174;
T1174:;
	if(!(type_of((V320))==t_symbol)){
	goto T1180;}
	{register object x= (V320),V322= (VV[64]->s.s_dbind);
	while(V322!=Cnil)
	if(eql(x,V322->c.c_car)){
	goto T1178;
	}else V322=V322->c.c_cdr;}
	{object V323 = Cnil;
	VMR26(V323)}
	goto T1180;
T1180:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[110],(V320))));
	goto T1178;
T1178:;
	V319= CMPcdr((V319));
	V320= CMPcar((V319));
	goto T1173;}
	goto T1169;
T1169:;
	if((V251== VV[144])
	|| (V251== VV[145])
	|| (V251== VV[146])
	|| (V251== VV[147])
	|| (V251== VV[148]))goto T1190;
	if((V251== VV[137])
	|| (V251== VV[149])
	|| (V251== VV[25])
	|| (V251== VV[150])
	|| (V251== VV[151]))goto T1190;
	if((V251== VV[152])
	|| (V251== VV[136])
	|| (V251== VV[153])
	|| (V251== VV[154])
	|| (V251== VV[32]))goto T1190;
	if((V251== VV[155])
	|| (V251== VV[156])
	|| (V251== VV[139])
	|| (V251== Cnil)
	|| (V251== VV[157]))goto T1190;
	if((V251== VV[158])
	|| (V251== VV[159])
	|| (V251== VV[160])
	|| (V251== VV[161])
	|| (V251== VV[162]))goto T1190;
	if((V251== VV[163])
	|| (V251== VV[164])
	|| (V251== VV[165])
	|| (V251== VV[138])
	|| (V251== VV[166]))goto T1190;
	if((V251== VV[167])
	|| (V251== VV[168])
	|| (V251== VV[169])
	|| (V251== VV[170])
	|| (V251== VV[171]))goto T1190;
	if((V251== VV[172])
	|| (V251== VV[173])
	|| (V251== VV[174])
	|| (V251== VV[175])
	|| (V251== Ct))goto T1190;
	if((V251!= VV[176])
	&& (V251!= VV[177])
	&& (V251!= VV[178]))goto T1189;
	goto T1190;
T1190:;
	{object V324;
	V324= (*(LnkLI122))(CMPcar((V250)));
	{register object V325;
	object V326;
	V325= CMPcdr((V250));
	V326= CMPcar((V325));
	goto T1195;
T1195:;
	if(!(((V325))==Cnil)){
	goto T1196;}
	{object V327 = Ct;
	VMR26(V327)}
	goto T1196;
T1196:;
	if(!(type_of((V326))==t_symbol)){
	goto T1202;}
	{object V329 =((V326))->s.s_plist;
	 object ind= VV[68];
	while(V329!=Cnil){
	if(V329->c.c_car==ind){
	V328= (V329->c.c_cdr->c.c_car);
	goto T1206;
	}else V329=V329->c.c_cdr->c.c_cdr;}
	V328= Cnil;}
	goto T1206;
T1206:;
	if(equal(V328,(V324))){
	goto T1200;}
	{object V330 = Cnil;
	VMR26(V330)}
	goto T1202;
T1202:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[111],(V326))));
	goto T1200;
T1200:;
	V325= CMPcdr((V325));
	V326= CMPcar((V325));
	goto T1195;}}
	goto T1189;
T1189:;
	{register object x= CMPcar((V250)),V331= (VV[64]->s.s_dbind);
	while(V331!=Cnil)
	if(eql(x,V331->c.c_car)){
	goto T1213;
	}else V331=V331->c.c_cdr;}
	{object V332 = (VFUN_NARGS=2,(*(LnkLI123))(VV[112],CMPcar((V250))));
	VMR26(V332)}
	goto T1213;
T1213:;
	{object V333 = Cnil;
	VMR26(V333)}}
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

