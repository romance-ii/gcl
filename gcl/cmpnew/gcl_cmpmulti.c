
#include "cmpinclude.h"
#include "gcl_cmpmulti.h"
void init_gcl_cmpmulti(){do_init(VV);}
/*	local entry for function C1MULTIPLE-VALUE-CALL	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V3;
	object V4;
	V3= Cnil;
	V4= Cnil;
	if(!(((V2))==Cnil)){
	goto T3;}
	(void)((*(LnkLI38))(VV[0],small_fixnum(1),small_fixnum(0)));
	goto T3;
T3:;
	if(!((CMPcdr((V2)))==Cnil)){
	goto T7;}
	{object V5 = (*(LnkLI39))((V2));
	VMR1(V5)}
	goto T7;
T7:;
	V4= (*(LnkLI40))(CMPcar((V2)));
	base[0]= CMPcadr((V4));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk41)();
	vs_top=sup;
	V3= vs_base[0];
	V2= (*(LnkLI42))(CMPcdr((V2)),(V3));
	{object V6 = list(4,VV[0],(V3),(V4),(V2));
	VMR1(V6)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MULTIPLE-VALUE-CALL	*/

static object LI2(V9,V10)

register object V9;object V10;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	{register object V11;
	register object V12;
	bds_bind(VV[1],(VV[1]->s.s_dbind));
	V11= Cnil;
	V12= Cnil;
	if(!((CMPcdr((V10)))==Cnil)){
	goto T19;}
	V11= (*(LnkLI43))((V9));
	bds_bind(VV[2],VV[3]);
	V13= (*(LnkLI44))(CMPcar((V10)));
	bds_unwind1;
	{object V14 = (VFUN_NARGS=3,(*(LnkLI45))((V9),VV[4],(V11)));
	bds_unwind1;
	VMR2(V14)}
	goto T19;
T19:;
	(VV[5]->s.s_dbind)= number_plus((VV[5]->s.s_dbind),small_fixnum(1));
	V12= (VV[5]->s.s_dbind);
	V11= (*(LnkLI43))((V9));
	princ_str("\n	{object *V",VV[6]);
	(void)((*(LnkLI46))((V12)));
	princ_str("=base+",VV[6]);
	(void)((*(LnkLI46))((VV[1]->s.s_dbind)));
	princ_char(59,VV[6]);
	(VV[7]->s.s_dbind)= Ct;
	{register object V15;
	register object V16;
	V15= (V10);
	V16= CMPcar((V15));
	goto T41;
T41:;
	if(!(((V15))==Cnil)){
	goto T42;}
	goto T37;
	goto T42;
T42:;
	bds_bind(VV[2],VV[3]);
	V17= (*(LnkLI47))((V16),(V12));
	bds_unwind1;
	princ_str("\n	while(vs_base<vs_top)",VV[6]);
	princ_str("\n	{V",VV[6]);
	(void)((*(LnkLI46))((V12)));
	princ_str("[0]=vs_base[0];V",VV[6]);
	(void)((*(LnkLI46))((V12)));
	princ_str("++;vs_base++;}",VV[6]);
	V15= CMPcdr((V15));
	V16= CMPcar((V15));
	goto T41;}
	goto T37;
T37:;
	princ_str("\n	vs_base=base+",VV[6]);
	(void)((*(LnkLI46))((VV[1]->s.s_dbind)));
	princ_str(";vs_top=V",VV[6]);
	(void)((*(LnkLI46))((V12)));
	princ_char(59,VV[6]);
	(VV[7]->s.s_dbind)= Ct;
	(void)((VFUN_NARGS=3,(*(LnkLI45))((V9),VV[4],(V11))));
	princ_char(125,VV[6]);
	{object V18 = Cnil;
	bds_unwind1;
	VMR2(V18)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1MULTIPLE-VALUE-PROG1	*/

static object LI3(V20)

register object V20;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V21;
	object V22;
	V21= (VFUN_NARGS=0,(*(LnkLI48))());
	V22= Cnil;
	if(!(((V20))==Cnil)){
	goto T72;}
	(void)((*(LnkLI38))(VV[8],small_fixnum(1),small_fixnum(0)));
	goto T72;
T72:;
	V22= (*(LnkLI49))(CMPcar((V20)),(V21));
	V20= (*(LnkLI42))(CMPcdr((V20)),(V21));
	{object V23 = list(4,VV[8],(V21),(V22),(V20));
	VMR3(V23)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MULTIPLE-VALUE-PROG1	*/

static object LI4(V26,V27)

object V26;object V27;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	{object V28;
	register object V29;
	object V30;
	(VV[5]->s.s_dbind)= number_plus((VV[5]->s.s_dbind),small_fixnum(1));
	V28= (VV[5]->s.s_dbind);
	(VV[5]->s.s_dbind)= number_plus((VV[5]->s.s_dbind),small_fixnum(1));
	V29= (VV[5]->s.s_dbind);
	V30= Cnil;
	bds_bind(VV[2],VV[3]);
	bds_bind(VV[9],Cnil);
	(void)((*(LnkLI44))((V26)));
	V30= (VV[9]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	princ_str("\n	{object *V",VV[6]);
	(void)((*(LnkLI46))((V29)));
	princ_str("=vs_top;object *V",VV[6]);
	(void)((*(LnkLI46))((V28)));
	princ_str("=vs_base; vs_base=V",VV[6]);
	(void)((*(LnkLI46))((V29)));
	princ_char(59,VV[6]);
	{register object V31;
	register object V32;
	V31= (V27);
	V32= CMPcar((V31));
	goto T99;
T99:;
	if(!(((V31))==Cnil)){
	goto T100;}
	goto T95;
	goto T100;
T100:;
	bds_bind(VV[2],VV[10]);
	V33= (*(LnkLI47))((V32),(V29));
	bds_unwind1;
	V31= CMPcdr((V31));
	V32= CMPcar((V31));
	goto T99;}
	goto T95;
T95:;
	princ_str("\n	vs_base=V",VV[6]);
	(void)((*(LnkLI46))((V28)));
	princ_str(";vs_top=V",VV[6]);
	(void)((*(LnkLI46))((V29)));
	princ_str(";}",VV[6]);
	if(((V30))==Cnil){
	goto T118;}
	V34= CMPcar((V30));
	goto T116;
	goto T118;
T118:;
	V34= Cnil;
	goto T116;
T116:;
	{object V35 = (VFUN_NARGS=3,(*(LnkLI50))(VV[11],Cnil,V34));
	VMR4(V35)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1VALUES	*/

static object LI5(V37)

register object V37;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V38;
	V38= (VFUN_NARGS=0,(*(LnkLI48))());
	if(((V37))==Cnil){
	goto T122;}
	if((CMPcdr((V37)))!=Cnil){
	goto T122;}
	if(!(type_of(CMPcar((V37)))==t_cons)){
	goto T121;}
	if(!(type_of(CMPcaar((V37)))==t_symbol)){
	goto T122;}
	{register object V39;
	V39= (*(LnkLI51))(CMPcaar((V37)));
	if((V39)==Cnil){
	goto T122;}
	if(!(type_of((V39))!=t_cons)){
	goto T133;}
	goto T131;
	goto T133;
T133:;
	if(type_of((V39))==t_cons){
	goto T135;}
	goto T122;
	goto T135;
T135:;
	if((CMPcdr((V39)))==Cnil){
	goto T137;}
	goto T122;
	goto T137;
T137:;
	if(!((((VV[12])==(CMPcar((V39)))?Ct:Cnil))==Cnil)){
	goto T122;}}
	goto T131;
T131:;
	goto T121;
T121:;
	{object V40 = (*(LnkLI52))(CMPcar((V37)));
	VMR5(V40)}
	goto T122;
T122:;
	V37= (*(LnkLI42))((V37),(V38));
	{object V41 = list(3,VV[13],(V38),(V37));
	VMR5(V41)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2VALUES	*/

static object LI6(V43)

register object V43;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V44;
	V44= (VV[1]->s.s_dbind);
	bds_bind(VV[1],(VV[1]->s.s_dbind));
	if(!(((VV[2]->s.s_dbind))==(VV[14]))){
	goto T142;}
	if((CMPcdr((V43)))==Cnil){
	goto T142;}
	if(!(type_of((VV[15]->s.s_dbind))==t_cons)){
	goto T142;}
	if(!((VV[16])==(CMPcar((VV[15]->s.s_dbind))))){
	goto T142;}
	(void)((VFUN_NARGS=2,(*(LnkLI53))(VV[17],CMPcadr((VV[15]->s.s_dbind)))));
	goto T142;
T142:;
	if(((V43))!=Cnil){
	goto T153;}
	princ_str("\n	vs_base=vs_top=base+",VV[6]);
	(void)((*(LnkLI46))((V44)));
	princ_char(59,VV[6]);
	(VV[7]->s.s_dbind)= Ct;
	princ_str("\n	vs_base[0]=Cnil;",VV[6]);
	goto T151;
	goto T153;
T153:;
	{register object V45;
	register object V46;
	V45= (V43);
	V46= CMPcar((V45));
	goto T166;
T166:;
	if(!(((V45))==Cnil)){
	goto T167;}
	goto T162;
	goto T167;
T167:;
	base[2]= list(2,VV[18],(*(LnkLI54))());
	bds_bind(VV[2],base[2]);
	V47= (*(LnkLI44))((V46));
	bds_unwind1;
	V45= CMPcdr((V45));
	V46= CMPcar((V45));
	goto T166;}
	goto T162;
T162:;
	princ_str("\n	vs_top=(vs_base=base+",VV[6]);
	(void)((*(LnkLI46))((V44)));
	princ_str(")+",VV[6]);
	V48= number_minus((VV[1]->s.s_dbind),(V44));
	(void)((*(LnkLI46))(/* INLINE-ARGS */V48));
	princ_char(59,VV[6]);
	(VV[7]->s.s_dbind)= Ct;
	goto T151;
T151:;
	V49 = CMPmake_fixnum((long)length((V43)));
	V50= make_cons(VV[13],V49);
	{object V51 = (VFUN_NARGS=3,(*(LnkLI50))(VV[11],Cnil,/* INLINE-ARGS */V50));
	bds_unwind1;
	VMR6(V51)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1MULTIPLE-VALUE-SETQ	*/

static object LI7(V53)

object V53;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V54;
	register object V55;
	V54= (VFUN_NARGS=0,(*(LnkLI48))());
	V55= Cnil;
	if(((V53))==Cnil){
	goto T188;}
	if(!((CMPcdr((V53)))==Cnil)){
	goto T187;}
	goto T188;
T188:;
	(void)((*(LnkLI38))(VV[19],small_fixnum(2),small_fixnum(0)));
	goto T187;
T187:;
	if((CMPcddr((V53)))==Cnil){
	goto T192;}
	V56 = CMPmake_fixnum((long)length((V53)));
	(void)((*(LnkLI55))(VV[19],small_fixnum(2),V56));
	goto T192;
T192:;
	{register object V57;
	register object V58;
	V57= CMPcar((V53));
	V58= CMPcar((V57));
	goto T199;
T199:;
	if(!(((V57))==Cnil)){
	goto T200;}
	goto T195;
	goto T200;
T200:;
	if(type_of((V58))==t_symbol){
	goto T204;}
	(void)((VFUN_NARGS=2,(*(LnkLI56))(VV[20],(V58))));
	goto T204;
T204:;
	base[3]= (V58);
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T207;}
	(void)((VFUN_NARGS=2,(*(LnkLI56))(VV[21],(V58))));
	goto T207;
T207:;
	V58= (*(LnkLI57))((V58));
	{register object V59;
	V59= (V58);
	V55= make_cons((V59),(V55));}
	{register object V60;
	register object V61;
	register object V62;
	V60= CMPcar((V58));
	V61= (V54);
	V62= make_cons((V60),STREF(object,(V61),0));
	V63= Ct;
	STSET(object,(V61),0, (V62));
	(void)((V62));}
	V57= CMPcdr((V57));
	V58= CMPcar((V57));
	goto T199;}
	goto T195;
T195:;
	V64= reverse((V55));
	{object V65 = list(4,VV[19],(V54),/* INLINE-ARGS */V64,(*(LnkLI49))(CMPcadr((V53)),(V54)));
	VMR7(V65)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MULTIPLE-VALUE-CHECK	*/

static object LI8(V68,V69)

object V68;object V69;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	if((CMPcdr((V68)))!=Cnil){
	goto T225;}
	{object V70 = Cnil;
	VMR8(V70)}
	goto T225;
T225:;
	if((CMPcar((V69)))==(VV[23])){
	goto T227;}
	{object V71 = Cnil;
	VMR8(V71)}
	goto T227;
T227:;
	{object V72;
	V72= CMPcaddr((V69));
	if(!(type_of((V72))==t_symbol)){
	goto T231;}
	{register object V73;
	{object V74 =((V72))->s.s_plist;
	 object ind= VV[24];
	while(V74!=Cnil){
	if(V74->c.c_car==ind){
	V73= (V74->c.c_cdr->c.c_car);
	goto T235;
	}else V74=V74->c.c_cdr->c.c_cdr;}
	V73= Cnil;}
	goto T235;
T235:;
	if((V73)==Cnil){
	goto T231;}
	if(type_of((V73))==t_cons){
	goto T236;}
	goto T231;
	goto T236;
T236:;
	if(((equal((V73),VV[25])?Ct:Cnil))==Cnil){
	goto T238;}
	goto T231;
	goto T238;
T238:;
	if(!((CMPcdr((V73)))==Cnil)){
	goto T231;}}
	{object V75 = (VFUN_NARGS=2,(*(LnkLI53))(VV[26],(V72)));
	VMR8(V75)}
	goto T231;
T231:;
	{object V76 = Cnil;
	VMR8(V76)}}
	return Cnil;
}
/*	local entry for function C2MULTIPLE-VALUE-SETQ	*/

static object LI9(V79,V80)

register object V79;object V80;
{	 VMB9 VMS9 VMV9
	bds_check;
	goto TTL;
TTL:;
	{object V81;
	V81= Cnil;
	(void)((*(LnkLI58))((V79),(V80)));
	bds_bind(VV[2],VV[3]);
	bds_bind(VV[9],Cnil);
	(void)((*(LnkLI44))((V80)));
	V81= (VV[9]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	if((VV[27]->s.s_dbind)==Cnil){
	goto T245;}
	base[0]= Cnil;
	base[1]= CMPcar((V81));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk59)();
	vs_top=sup;
	goto T245;
T245:;
	{register object V82;
	V82= (V79);
	goto T250;
T250:;
	if(!(((V82))==Cnil)){
	goto T251;}
	goto T248;
	goto T251;
T251:;
	{register object V83;
	V83= CMPcar((V82));
	princ_str("\n	if(vs_base<vs_top){",VV[6]);
	(void)((*(LnkLI60))(VV[11],CMPcar((V83)),CMPcadr((V83))));
	if((CMPcdr((V82)))==Cnil){
	goto T260;}
	princ_str("\n	vs_base++;",VV[6]);
	goto T260;
T260:;
	princ_str("\n	}else{",VV[6]);
	(void)((*(LnkLI60))(Cnil,CMPcar((V83)),CMPcadr((V83))));
	princ_char(125,VV[6]);}
	V82= CMPcdr((V82));
	goto T250;}
	goto T248;
T248:;
	if(((V79))!=Cnil){
	goto T272;}
	princ_str("\n	if(vs_base=vs_top){vs_base[0]=Cnil;vs_top=vs_base+1;}",VV[6]);
	{object V84 = (VFUN_NARGS=1,(*(LnkLI50))(VV[11]));
	VMR9(V84)}
	goto T272;
T272:;
	if(((VV[28]->s.s_dbind))==(VV[29])){
	goto T276;}
	princ_str("\n	",VV[6]);
	(void)((*(LnkLI61))());
	goto T276;
T276:;
	V85= make_cons(VV[30],CMPcar((V79)));
	{object V86 = (VFUN_NARGS=1,(*(LnkLI50))(/* INLINE-ARGS */V85));
	VMR9(V86)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1MULTIPLE-VALUE-BIND	*/

static object LI10(V88)

object V88;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	{object V89;
	register object V90;
	register object V91;
	object V92;
	object V93;
	object V94;
	object V95;
	object V96;
	object V97;
	V89= (VFUN_NARGS=0,(*(LnkLI48))());
	V90= Cnil;
	V91= Cnil;
	V92= Cnil;
	V93= Cnil;
	V94= Cnil;
	V95= Cnil;
	V96= Cnil;
	V97= Cnil;
	bds_bind(VV[31],(VV[31]->s.s_dbind));
	if(((V88))==Cnil){
	goto T290;}
	if(!((CMPcdr((V88)))==Cnil)){
	goto T289;}
	goto T290;
T290:;
	V98 = CMPmake_fixnum((long)length((V88)));
	(void)((*(LnkLI38))(VV[32],small_fixnum(2),V98));
	goto T289;
T289:;
	base[2]= CMPcddr((V88));
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk62)();
	if(vs_base<vs_top){
	V96= vs_base[0];
	vs_base++;
	}else{
	V96= Cnil;}
	if(vs_base<vs_top){
	V93= vs_base[0];
	vs_base++;
	}else{
	V93= Cnil;}
	if(vs_base<vs_top){
	V95= vs_base[0];
	vs_base++;
	}else{
	V95= Cnil;}
	if(vs_base<vs_top){
	V94= vs_base[0];
	vs_base++;
	}else{
	V94= Cnil;}
	if(vs_base<vs_top){
	V97= vs_base[0];
	}else{
	V97= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI63))((V93)));
	{register object V99;
	register object V100;
	V99= CMPcar((V88));
	V100= CMPcar((V99));
	goto T303;
T303:;
	if(!(((V99))==Cnil)){
	goto T304;}
	goto T299;
	goto T304;
T304:;
	{object V101;
	V101= (*(LnkLI64))((V100),(V93),(V94),(V95));
	V91= make_cons(V100,(V91));
	V90= make_cons(V101,(V90));}
	V99= CMPcdr((V99));
	V100= CMPcar((V99));
	goto T303;}
	goto T299;
T299:;
	V92= (*(LnkLI49))(CMPcadr((V88)),(V89));
	{register object V104;
	object V105;
	V104= reverse((V90));
	V105= CMPcar((V104));
	goto T324;
T324:;
	if(!(((V104))==Cnil)){
	goto T325;}
	goto T320;
	goto T325;
T325:;
	(VV[31]->s.s_dbind)= make_cons(V105,(VV[31]->s.s_dbind));
	V104= CMPcdr((V104));
	V105= CMPcar((V104));
	goto T324;}
	goto T320;
T320:;
	(void)((*(LnkLI65))((V91),(V95),(V94)));
	V96= (*(LnkLI66))((V97),(V96));
	(void)((*(LnkLI67))((V89),CMPcadr((V96))));
	V107= Ct;
	STSET(object,(V89),8, STREF(object,CMPcadr((V96)),8));
	(void)(STREF(object,CMPcadr((V96)),8));
	{register object V108;
	object V109;
	V108= (V90);
	V109= CMPcar((V108));
	goto T345;
T345:;
	if(!(((V108))==Cnil)){
	goto T346;}
	goto T341;
	goto T346;
T346:;
	(void)((*(LnkLI68))((V109)));
	V108= CMPcdr((V108));
	V109= CMPcar((V108));
	goto T345;}
	goto T341;
T341:;
	{object V110 = list(5,VV[32],(V89),reverse((V90)),(V92),(V96));
	bds_unwind1;
	VMR10(V110)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MULTIPLE-VALUE-BIND	*/

static object LI11(V114,V115,V116)

object V114;object V115;object V116;
{	 VMB11 VMS11 VMV11
	bds_check;
	goto TTL;
TTL:;
	{object V117;
	register object V118;
	object V119;
	V117= Cnil;
	V118= Cnil;
	bds_bind(VV[33],(VV[33]->s.s_dbind));
	bds_bind(VV[1],(VV[1]->s.s_dbind));
	bds_bind(VV[34],(VV[34]->s.s_dbind));
	bds_bind(VV[35],(VV[35]->s.s_dbind));
	V119= Cnil;
	(void)((*(LnkLI58))((V114),(V115)));
	{register object V120;
	register object V121;
	V120= (V114);
	V121= CMPcar((V120));
	goto T364;
T364:;
	if(!(((V120))==Cnil)){
	goto T365;}
	goto T360;
	goto T365;
T365:;
	{object V122;
	V122= (*(LnkLI69))((V121));
	if(((V122))==Cnil){
	goto T372;}
	{object V123;
	(VV[5]->s.s_dbind)= number_plus((VV[5]->s.s_dbind),small_fixnum(1));
	V123= (VV[5]->s.s_dbind);
	V124= Ct;
	STSET(object,(V121),4, (V122));
	(void)((V122));
	V125= Ct;
	STSET(object,(V121),16, (V123));
	(void)((V123));
	princ_str("\n	",VV[6]);
	if(((V117))!=Cnil){
	goto T379;}
	princ_char(123,VV[6]);
	V117= Ct;
	goto T379;
T379:;
	(void)((*(LnkLI70))((V121)));
	goto T369;}
	goto T372;
T372:;
	V126= (*(LnkLI54))();
	V127= Ct;
	STSET(object,(V121),8, /* INLINE-ARGS */V126);
	(void)(/* INLINE-ARGS */V126);}
	goto T369;
T369:;
	V120= CMPcdr((V120));
	V121= CMPcar((V120));
	goto T364;}
	goto T360;
T360:;
	bds_bind(VV[2],VV[3]);
	bds_bind(VV[9],Cnil);
	(void)((*(LnkLI44))((V115)));
	V119= (VV[9]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	if((VV[27]->s.s_dbind)==Cnil){
	goto T393;}
	base[4]= Cnil;
	base[5]= CMPcar((V119));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk59)();
	vs_top=sup;
	goto T393;
T393:;
	bds_bind(VV[34],(VV[34]->s.s_dbind));
	bds_bind(VV[33],(VV[33]->s.s_dbind));
	bds_bind(VV[35],(VV[35]->s.s_dbind));
	{register object V128;
	V128= (V114);
	goto T398;
T398:;
	if(!(((V128))==Cnil)){
	goto T399;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T396;
	goto T399;
T399:;
	{object V129;
	(VV[36]->s.s_dbind)= number_plus((VV[36]->s.s_dbind),small_fixnum(1));
	V129= make_cons((VV[36]->s.s_dbind),Cnil);
	V118= make_cons((V129),(V118));}
	princ_str("\n	if(vs_base>=vs_top){",VV[6]);
	(void)((*(LnkLI61))());
	(CMPcar((V118)))->c.c_cdr = Ct;
	(void)(CMPcar((V118)));
	princ_str("goto T",VV[6]);
	(void)((*(LnkLI46))(CMPcar(CMPcar((V118)))));
	princ_char(59,VV[6]);
	princ_char(125,VV[6]);
	(void)((*(LnkLI71))(CMPcar((V128)),VV[37]));
	if((CMPcdr((V128)))==Cnil){
	goto T418;}
	princ_str("\n	vs_base++;",VV[6]);
	goto T418;
T418:;
	V128= CMPcdr((V128));
	goto T398;}
	goto T396;
T396:;
	princ_str("\n	",VV[6]);
	(void)((*(LnkLI61))());
	{object V130;
	(VV[36]->s.s_dbind)= number_plus((VV[36]->s.s_dbind),small_fixnum(1));
	V130= make_cons((VV[36]->s.s_dbind),Cnil);
	princ_str("\n	",VV[6]);
	((V130))->c.c_cdr = Ct;
	princ_str("goto T",VV[6]);
	(void)((*(LnkLI46))(CMPcar((V130))));
	princ_char(59,VV[6]);
	V118= reverse((V118));
	{register object V131;
	object V132;
	V131= (V114);
	V132= CMPcar((V131));
	goto T442;
T442:;
	if(!(((V131))==Cnil)){
	goto T443;}
	goto T438;
	goto T443;
T443:;
	if((CMPcdr(CMPcar((V118))))==Cnil){
	goto T447;}
	princ_str("\n	goto T",VV[6]);
	(void)((*(LnkLI46))(CMPcar(CMPcar((V118)))));
	princ_char(59,VV[6]);
	princ_str("\nT",VV[6]);
	(void)((*(LnkLI46))(CMPcar(CMPcar((V118)))));
	princ_str(":;",VV[6]);
	goto T447;
T447:;
	{object V133;
	V133= CMPcar((V118));
	V118= CMPcdr((V118));}
	(void)((*(LnkLI71))((V132),Cnil));
	V131= CMPcdr((V131));
	V132= CMPcar((V131));
	goto T442;}
	goto T438;
T438:;
	if((CMPcdr((V130)))==Cnil){
	goto T427;}
	princ_str("\n	goto T",VV[6]);
	(void)((*(LnkLI46))(CMPcar((V130))));
	princ_char(59,VV[6]);
	princ_str("\nT",VV[6]);
	(void)((*(LnkLI46))(CMPcar((V130))));
	princ_str(":;",VV[6]);}
	goto T427;
T427:;
	base[4]= (V116);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk72)();
	vs_top=sup;
	if(((V117))==Cnil){
	goto T479;}
	princ_char(125,VV[6]);
	{object V134 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR11(V134)}
	goto T479;
T479:;
	{object V135 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR11(V135)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* C2EXPR */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[70],(void **)(void *)&LnkLI70,1,first,ap);va_end(ap);return V1;} /* WT-VAR-DECL */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],(void **)(void *)&LnkLI69,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,1,first,ap);va_end(ap);return V1;} /* CHECK-VREF */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,2,first,ap);va_end(ap);return V1;} /* C1DECL-BODY */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[65],(void **)(void *)&LnkLI65,3,first,ap);va_end(ap);return V1;} /* CHECK-VDECL */
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[64],(void **)(void *)&LnkLI64,4,first,ap);va_end(ap);return V1;} /* C1MAKE-VAR */
static object  LnkTLI63(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[63],(void **)(void *)&LnkLI63,1,first,ap);va_end(ap);return V1;} /* C1ADD-GLOBALS */
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* C1BODY */
static object  LnkTLI61(){return call_proc0(VV[61],(void **)(void *)&LnkLI61);} /* RESET-TOP */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,3,first,ap);va_end(ap);return V1;} /* SET-VAR */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* RECORD-CALL-INFO */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,2,first,ap);va_end(ap);return V1;} /* MULTIPLE-VALUE-CHECK */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,1,first,ap);va_end(ap);return V1;} /* C1VREF */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[56],(void **)(void *)&LnkLI56,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[55],(void **)(void *)&LnkLI55,3,first,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI54(){return call_proc0(VV[54],(void **)(void *)&LnkLI54);} /* VS-PUSH */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[53],(void **)(void *)&LnkLI53,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],(void **)(void *)&LnkLI52,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* GET-RETURN-TYPE */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[50],(void **)(void *)&LnkLI50,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[48],(void **)(void *)&LnkLI48,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,2,first,ap);va_end(ap);return V1;} /* C2EXPR-TOP* */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[45],(void **)(void *)&LnkLI45,first,ap);va_end(ap);return V1;} /* C2FUNCALL */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[44],(void **)(void *)&LnkLI44,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,1,first,ap);va_end(ap);return V1;} /* SAVE-FUNOB */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,2,first,ap);va_end(ap);return V1;} /* C1ARGS */
static void LnkT41(){ call_or_link(VV[41],(void **)(void *)&Lnk41);} /* COPY-INFO */
static object  LnkTLI40(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[40],(void **)(void *)&LnkLI40,1,first,ap);va_end(ap);return V1;} /* C1FUNOB */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[39],(void **)(void *)&LnkLI39,1,first,ap);va_end(ap);return V1;} /* C1FUNCALL */
static object  LnkTLI38(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[38],(void **)(void *)&LnkLI38,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

