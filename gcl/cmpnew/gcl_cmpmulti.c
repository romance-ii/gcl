
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
	if(!(endp_prop((V2)))){
	goto T3;}
	(void)((*(LnkLI38))(VV[0],small_fixnum(1),small_fixnum(0)));
	goto T3;
T3:;
	if(!(endp_prop(cdr((V2))))){
	goto T7;}
	{object V5 = (*(LnkLI39))((V2));
	VMR1(V5)}
	goto T7;
T7:;
	V4= (*(LnkLI40))(car((V2)));
	base[0]= cadr((V4));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk41)();
	vs_top=sup;
	V3= vs_base[0];
	V2= (*(LnkLI42))(cdr((V2)),(V3));
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
	bds_bind(VV[1],symbol_value(VV[1]));
	V11= Cnil;
	V12= Cnil;
	if(!(endp_prop(cdr((V10))))){
	goto T19;}
	V11= (*(LnkLI43))((V9));
	bds_bind(VV[2],VV[3]);
	V13= (*(LnkLI44))(car((V10)));
	bds_unwind1;
	{object V14 = (VFUN_NARGS=3,(*(LnkLI45))((V9),VV[4],(V11)));
	bds_unwind1;
	VMR2(V14)}
	goto T19;
T19:;
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	V12= symbol_value(VV[5]);
	V11= (*(LnkLI43))((V9));
	princ_str("\n	{object *V",VV[6]);
	(void)((*(LnkLI46))((V12)));
	princ_str("=base+",VV[6]);
	(void)((*(LnkLI46))((VV[1]->s.s_dbind)));
	princ_char(59,VV[6]);
	setq(VV[7],Ct);
	{register object V15;
	register object V16;
	V15= (V10);
	V16= car((V15));
	goto T41;
T41:;
	if(!(endp_prop((V15)))){
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
	V15= cdr((V15));
	V16= car((V15));
	goto T41;}
	goto T37;
T37:;
	princ_str("\n	vs_base=base+",VV[6]);
	(void)((*(LnkLI46))((VV[1]->s.s_dbind)));
	princ_str(";vs_top=V",VV[6]);
	(void)((*(LnkLI46))((V12)));
	princ_char(59,VV[6]);
	setq(VV[7],Ct);
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
	if(!(endp_prop((V20)))){
	goto T72;}
	(void)((*(LnkLI38))(VV[8],small_fixnum(1),small_fixnum(0)));
	goto T72;
T72:;
	V22= (*(LnkLI49))(car((V20)),(V21));
	V20= (*(LnkLI42))(cdr((V20)),(V21));
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
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	V28= symbol_value(VV[5]);
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	V29= symbol_value(VV[5]);
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
	V32= car((V31));
	goto T99;
T99:;
	if(!(endp_prop((V31)))){
	goto T100;}
	goto T95;
	goto T100;
T100:;
	bds_bind(VV[2],VV[10]);
	V33= (*(LnkLI47))((V32),(V29));
	bds_unwind1;
	V31= cdr((V31));
	V32= car((V31));
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
	V34= car((V30));
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
	if((cdr((V37)))!=Cnil){
	goto T122;}
	if(!(type_of(car((V37)))==t_cons)){
	goto T121;}
	if(!(type_of(caar((V37)))==t_symbol)){
	goto T122;}
	{register object V39;
	V39= (*(LnkLI51))(caar((V37)));
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
	if((cdr((V39)))==Cnil){
	goto T137;}
	goto T122;
	goto T137;
T137:;
	if(!((((VV[12])==(car((V39)))?Ct:Cnil))==Cnil)){
	goto T122;}}
	goto T131;
T131:;
	goto T121;
T121:;
	{object V40 = (*(LnkLI52))(car((V37)));
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
	V44= symbol_value(VV[1]);
	bds_bind(VV[1],symbol_value(VV[1]));
	if(!((symbol_value(VV[2]))==(VV[14]))){
	goto T142;}
	if((cdr((V43)))==Cnil){
	goto T142;}
	if(!(type_of(symbol_value(VV[15]))==t_cons)){
	goto T142;}
	if(!((VV[16])==(car(symbol_value(VV[15]))))){
	goto T142;}
	(void)((VFUN_NARGS=2,(*(LnkLI53))(VV[17],cadr(symbol_value(VV[15])))));
	goto T142;
T142:;
	if(((V43))!=Cnil){
	goto T153;}
	princ_str("\n	vs_base=vs_top=base+",VV[6]);
	(void)((*(LnkLI46))((V44)));
	princ_char(59,VV[6]);
	setq(VV[7],Ct);
	princ_str("\n	vs_base[0]=Cnil;",VV[6]);
	goto T151;
	goto T153;
T153:;
	{register object V45;
	register object V46;
	V45= (V43);
	V46= car((V45));
	goto T166;
T166:;
	if(!(endp_prop((V45)))){
	goto T167;}
	goto T162;
	goto T167;
T167:;
	base[2]= list(2,VV[18],(*(LnkLI54))());
	bds_bind(VV[2],base[2]);
	V47= (*(LnkLI44))((V46));
	bds_unwind1;
	V45= cdr((V45));
	V46= car((V45));
	goto T166;}
	goto T162;
T162:;
	princ_str("\n	vs_top=(vs_base=base+",VV[6]);
	(void)((*(LnkLI46))((V44)));
	princ_str(")+",VV[6]);
	V48= number_minus((VV[1]->s.s_dbind),(V44));
	(void)((*(LnkLI46))(/* INLINE-ARGS */V48));
	princ_char(59,VV[6]);
	setq(VV[7],Ct);
	goto T151;
T151:;
	V49 = make_fixnum((long)length((V43)));
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
	if(endp_prop((V53))){
	goto T188;}
	if(!(endp_prop(cdr((V53))))){
	goto T187;}
	goto T188;
T188:;
	(void)((*(LnkLI38))(VV[19],small_fixnum(2),small_fixnum(0)));
	goto T187;
T187:;
	if(endp_prop(cddr((V53)))){
	goto T192;}
	V56 = make_fixnum((long)length((V53)));
	(void)((*(LnkLI55))(VV[19],small_fixnum(2),V56));
	goto T192;
T192:;
	{register object V57;
	register object V58;
	V57= car((V53));
	V58= car((V57));
	goto T199;
T199:;
	if(!(endp_prop((V57)))){
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
	V60= car((V58));
	V61= (V54);
	V63= structure_ref((V61),VV[22],0);
	V62= make_cons((V60),/* INLINE-ARGS */V63);
	(void)(structure_set((V61),VV[22],0,(V62)));}
	V57= cdr((V57));
	V58= car((V57));
	goto T199;}
	goto T195;
T195:;
	V64= reverse((V55));
	{object V65 = list(4,VV[19],(V54),/* INLINE-ARGS */V64,(*(LnkLI49))(cadr((V53)),(V54)));
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
	if((cdr((V68)))!=Cnil){
	goto T225;}
	{object V70 = Cnil;
	VMR8(V70)}
	goto T225;
T225:;
	if((car((V69)))==(VV[23])){
	goto T227;}
	{object V71 = Cnil;
	VMR8(V71)}
	goto T227;
T227:;
	{object V72;
	V72= caddr((V69));
	if(!(type_of((V72))==t_symbol)){
	goto T231;}
	{register object V73;
	V73= get((V72),VV[24],Cnil);
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
	if(!((cdr((V73)))==Cnil)){
	goto T231;}}
	{object V74 = (VFUN_NARGS=2,(*(LnkLI53))(VV[26],(V72)));
	VMR8(V74)}
	goto T231;
T231:;
	{object V75 = Cnil;
	VMR8(V75)}}
	return Cnil;
}
/*	local entry for function C2MULTIPLE-VALUE-SETQ	*/

static object LI9(V78,V79)

register object V78;object V79;
{	 VMB9 VMS9 VMV9
	bds_check;
	goto TTL;
TTL:;
	{object V80;
	V80= Cnil;
	(void)((*(LnkLI58))((V78),(V79)));
	bds_bind(VV[2],VV[3]);
	bds_bind(VV[9],Cnil);
	(void)((*(LnkLI44))((V79)));
	V80= (VV[9]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	if(symbol_value(VV[27])==Cnil){
	goto T245;}
	(void)((*(LnkLI59))(Cnil,car((V80))));
	goto T245;
T245:;
	{register object V81;
	V81= (V78);
	goto T248;
T248:;
	if(!(endp_prop((V81)))){
	goto T249;}
	goto T246;
	goto T249;
T249:;
	{register object V82;
	V82= car((V81));
	princ_str("\n	if(vs_base<vs_top){",VV[6]);
	(void)((*(LnkLI60))(VV[11],car((V82)),cadr((V82))));
	if(endp_prop(cdr((V81)))){
	goto T258;}
	princ_str("\n	vs_base++;",VV[6]);
	goto T258;
T258:;
	princ_str("\n	}else{",VV[6]);
	(void)((*(LnkLI60))(Cnil,car((V82)),cadr((V82))));
	princ_char(125,VV[6]);}
	V81= cdr((V81));
	goto T248;}
	goto T246;
T246:;
	if(((V78))!=Cnil){
	goto T270;}
	princ_str("\n	if(vs_base=vs_top){vs_base[0]=Cnil;vs_top=vs_base+1;}",VV[6]);
	{object V83 = (VFUN_NARGS=1,(*(LnkLI50))(VV[11]));
	VMR9(V83)}
	goto T270;
T270:;
	if((symbol_value(VV[28]))==(VV[29])){
	goto T274;}
	princ_str("\n	",VV[6]);
	(void)((*(LnkLI61))());
	goto T274;
T274:;
	V84= make_cons(VV[30],car((V78)));
	{object V85 = (VFUN_NARGS=1,(*(LnkLI50))(/* INLINE-ARGS */V84));
	VMR9(V85)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1MULTIPLE-VALUE-BIND	*/

static object LI10(V87)

object V87;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	{object V88;
	register object V89;
	register object V90;
	object V91;
	object V92;
	object V93;
	object V94;
	object V95;
	object V96;
	V88= (VFUN_NARGS=0,(*(LnkLI48))());
	V89= Cnil;
	V90= Cnil;
	V91= Cnil;
	V92= Cnil;
	V93= Cnil;
	V94= Cnil;
	V95= Cnil;
	V96= Cnil;
	bds_bind(VV[31],symbol_value(VV[31]));
	if(endp_prop((V87))){
	goto T288;}
	if(!(endp_prop(cdr((V87))))){
	goto T287;}
	goto T288;
T288:;
	V97 = make_fixnum((long)length((V87)));
	(void)((*(LnkLI38))(VV[32],small_fixnum(2),V97));
	goto T287;
T287:;
	base[2]= cddr((V87));
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk62)();
	if(vs_base<vs_top){
	V95= vs_base[0];
	vs_base++;
	}else{
	V95= Cnil;}
	if(vs_base<vs_top){
	V92= vs_base[0];
	vs_base++;
	}else{
	V92= Cnil;}
	if(vs_base<vs_top){
	V94= vs_base[0];
	vs_base++;
	}else{
	V94= Cnil;}
	if(vs_base<vs_top){
	V93= vs_base[0];
	vs_base++;
	}else{
	V93= Cnil;}
	if(vs_base<vs_top){
	V96= vs_base[0];
	}else{
	V96= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI63))((V92)));
	{register object V98;
	register object V99;
	V98= car((V87));
	V99= car((V98));
	goto T301;
T301:;
	if(!(endp_prop((V98)))){
	goto T302;}
	goto T297;
	goto T302;
T302:;
	{object V100;
	V100= (*(LnkLI64))((V99),(V92),(V93),(V94));
	V90= make_cons(V99,(V90));
	V89= make_cons(V100,(V89));}
	V98= cdr((V98));
	V99= car((V98));
	goto T301;}
	goto T297;
T297:;
	V91= (*(LnkLI49))(cadr((V87)),(V88));
	{register object V103;
	object V104;
	V103= reverse((V89));
	V104= car((V103));
	goto T322;
T322:;
	if(!(endp_prop((V103)))){
	goto T323;}
	goto T318;
	goto T323;
T323:;
	(VV[31]->s.s_dbind)= make_cons(V104,(VV[31]->s.s_dbind));
	V103= cdr((V103));
	V104= car((V103));
	goto T322;}
	goto T318;
T318:;
	(void)((*(LnkLI65))((V90),(V94),(V93)));
	V95= (*(LnkLI66))((V96),(V95));
	(void)((*(LnkLI67))((V88),cadr((V95))));
	V106= structure_ref(cadr((V95)),VV[22],2);
	(void)(structure_set((V88),VV[22],2,/* INLINE-ARGS */V106));
	{register object V107;
	object V108;
	V107= (V89);
	V108= car((V107));
	goto T343;
T343:;
	if(!(endp_prop((V107)))){
	goto T344;}
	goto T339;
	goto T344;
T344:;
	(void)((*(LnkLI68))((V108)));
	V107= cdr((V107));
	V108= car((V107));
	goto T343;}
	goto T339;
T339:;
	{object V109 = list(5,VV[32],(V88),reverse((V89)),(V91),(V95));
	bds_unwind1;
	VMR10(V109)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MULTIPLE-VALUE-BIND	*/

static object LI11(V113,V114,V115)

object V113;object V114;object V115;
{	 VMB11 VMS11 VMV11
	bds_check;
	goto TTL;
TTL:;
	{object V116;
	register object V117;
	object V118;
	V116= Cnil;
	V117= Cnil;
	bds_bind(VV[33],symbol_value(VV[33]));
	bds_bind(VV[1],symbol_value(VV[1]));
	bds_bind(VV[34],symbol_value(VV[34]));
	bds_bind(VV[35],symbol_value(VV[35]));
	V118= Cnil;
	(void)((*(LnkLI58))((V113),(V114)));
	{register object V119;
	register object V120;
	V119= (V113);
	V120= car((V119));
	goto T362;
T362:;
	if(!(endp_prop((V119)))){
	goto T363;}
	goto T358;
	goto T363;
T363:;
	{object V121;
	V121= (*(LnkLI69))((V120));
	if(((V121))==Cnil){
	goto T370;}
	{object V122;
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	V122= symbol_value(VV[5]);
	(void)(structure_set((V120),VV[30],1,(V121)));
	(void)(structure_set((V120),VV[30],4,(V122)));
	princ_str("\n	",VV[6]);
	if(((V116))!=Cnil){
	goto T377;}
	princ_char(123,VV[6]);
	V116= Ct;
	goto T377;
T377:;
	base[5]= (V120);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk70)();
	vs_top=sup;
	goto T367;}
	goto T370;
T370:;
	V123= (*(LnkLI54))();
	(void)(structure_set((V120),VV[30],2,/* INLINE-ARGS */V123));}
	goto T367;
T367:;
	V119= cdr((V119));
	V120= car((V119));
	goto T362;}
	goto T358;
T358:;
	bds_bind(VV[2],VV[3]);
	bds_bind(VV[9],Cnil);
	(void)((*(LnkLI44))((V114)));
	V118= (VV[9]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	if(symbol_value(VV[27])==Cnil){
	goto T392;}
	(void)((*(LnkLI59))(Cnil,car((V118))));
	goto T392;
T392:;
	bds_bind(VV[34],(VV[34]->s.s_dbind));
	bds_bind(VV[33],(VV[33]->s.s_dbind));
	bds_bind(VV[35],(VV[35]->s.s_dbind));
	{register object V124;
	V124= (V113);
	goto T395;
T395:;
	if(!(endp_prop((V124)))){
	goto T396;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T393;
	goto T396;
T396:;
	{object V125;
	setq(VV[36],number_plus(symbol_value(VV[36]),small_fixnum(1)));
	V125= make_cons(symbol_value(VV[36]),Cnil);
	V117= make_cons((V125),(V117));}
	princ_str("\n	if(vs_base>=vs_top){",VV[6]);
	(void)((*(LnkLI61))());
	if(type_of(car((V117)))!=t_cons)FEwrong_type_argument(Scons,car((V117)));
	(car((V117)))->c.c_cdr = Ct;
	(void)(car((V117)));
	princ_str("goto T",VV[6]);
	(void)((*(LnkLI46))(car(car((V117)))));
	princ_char(59,VV[6]);
	princ_char(125,VV[6]);
	(void)((*(LnkLI71))(car((V124)),VV[37]));
	if(endp_prop(cdr((V124)))){
	goto T415;}
	princ_str("\n	vs_base++;",VV[6]);
	goto T415;
T415:;
	V124= cdr((V124));
	goto T395;}
	goto T393;
T393:;
	princ_str("\n	",VV[6]);
	(void)((*(LnkLI61))());
	{object V126;
	setq(VV[36],number_plus(symbol_value(VV[36]),small_fixnum(1)));
	V126= make_cons(symbol_value(VV[36]),Cnil);
	princ_str("\n	",VV[6]);
	if(type_of((V126))!=t_cons)FEwrong_type_argument(Scons,(V126));
	((V126))->c.c_cdr = Ct;
	princ_str("goto T",VV[6]);
	(void)((*(LnkLI46))(car((V126))));
	princ_char(59,VV[6]);
	V117= reverse((V117));
	{register object V127;
	object V128;
	V127= (V113);
	V128= car((V127));
	goto T439;
T439:;
	if(!(endp_prop((V127)))){
	goto T440;}
	goto T435;
	goto T440;
T440:;
	if((cdr(car((V117))))==Cnil){
	goto T444;}
	princ_str("\n	goto T",VV[6]);
	(void)((*(LnkLI46))(car(car((V117)))));
	princ_char(59,VV[6]);
	princ_str("\nT",VV[6]);
	(void)((*(LnkLI46))(car(car((V117)))));
	princ_str(":;",VV[6]);
	goto T444;
T444:;
	{object V129;
	V129= car((V117));
	V117= cdr((V117));}
	(void)((*(LnkLI71))((V128),Cnil));
	V127= cdr((V127));
	V128= car((V127));
	goto T439;}
	goto T435;
T435:;
	if((cdr((V126)))==Cnil){
	goto T424;}
	princ_str("\n	goto T",VV[6]);
	(void)((*(LnkLI46))(car((V126))));
	princ_char(59,VV[6]);
	princ_str("\nT",VV[6]);
	(void)((*(LnkLI46))(car((V126))));
	princ_str(":;",VV[6]);}
	goto T424;
T424:;
	base[4]= (V115);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk72)();
	vs_top=sup;
	if(((V116))==Cnil){
	goto T476;}
	princ_char(125,VV[6]);
	{object V130 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR11(V130)}
	goto T476;
T476:;
	{object V131 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR11(V131)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* C2EXPR */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* WT-VAR-DECL */
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
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],(void **)(void *)&LnkLI59,2,first,ap);va_end(ap);return V1;} /* RECORD-CALL-INFO */
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

