
#include "cmpinclude.h"
#include "gcl_cmpmap.h"
void init_gcl_cmpmap(){do_init(VV);}
/*	local entry for function C1MAPCAR	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V3 = (*(LnkLI23))(VV[0],Ct,(V2));
	VMR1(V3)}
	return Cnil;
}
/*	local entry for function C1MAPLIST	*/

static object LI2(V5)

object V5;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V6 = (*(LnkLI23))(VV[0],Cnil,(V5));
	VMR2(V6)}
	return Cnil;
}
/*	local entry for function C1MAPC	*/

static object LI3(V8)

object V8;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V9 = (*(LnkLI23))(VV[1],Ct,(V8));
	VMR3(V9)}
	return Cnil;
}
/*	local entry for function C1MAPL	*/

static object LI4(V11)

object V11;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V12 = (*(LnkLI23))(VV[1],Cnil,(V11));
	VMR4(V12)}
	return Cnil;
}
/*	local entry for function C1MAPCAN	*/

static object LI5(V14)

object V14;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V15 = (*(LnkLI23))(VV[2],Ct,(V14));
	VMR5(V15)}
	return Cnil;
}
/*	local entry for function C1MAPCON	*/

static object LI6(V17)

object V17;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V18 = (*(LnkLI23))(VV[2],Cnil,(V17));
	VMR6(V18)}
	return Cnil;
}
/*	local entry for function C1MAP-FUNCTIONS	*/

static object LI7(V22,V23,V24)

object V22;object V23;register object V24;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V25;
	object V26;
	V25= Cnil;
	V26= Cnil;
	if(endp_prop((V24))){
	goto T4;}
	if(!(endp_prop(cdr((V24))))){
	goto T3;}
	goto T4;
T4:;
	V27 = make_fixnum((long)length((V24)));
	(void)((*(LnkLI24))(VV[3],small_fixnum(2),V27));
	goto T3;
T3:;
	V25= (*(LnkLI25))(car((V24)));
	base[0]= cadr((V25));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	V26= vs_base[0];
	{object V28 = list(5,(V22),(V26),(V25),(V23),(*(LnkLI27))(cdr((V24)),(V26)));
	VMR7(V28)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MAPCAR	*/

static object LI8(V32,V33,V34)

object V32;object V33;register object V34;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	bds_bind(VV[5],small_fixnum(0));
	{object V35;
	object V36;
	object V37;
	object V38;
	object V39;
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	V35= make_cons(symbol_value(VV[6]),Ct);
	V36= list(2,VV[7],(*(LnkLI28))());
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V37= list(2,VV[8],symbol_value(VV[9]));
	{object V40;
	object V41= (V34);
	if(endp(V41)){
	V38= Cnil;
	goto T18;}
	base[2]=V40=MMcons(Cnil,Cnil);
	goto T19;
T19:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	(V40->c.c_car)= list(2,VV[8],symbol_value(VV[9]));
	V41=MMcdr(V41);
	if(endp(V41)){
	V38= base[2];
	goto T18;}
	V40=MMcdr(V40)=MMcons(Cnil,Cnil);
	goto T19;}
	goto T18;
T18:;
	V39= Cnil;
	V39= (*(LnkLI29))((V32));
	base[2]= make_fixnum((long)length((V34)));
	base[3]= VV[10];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V43= vs_base[0];
	V44= (VFUN_NARGS=2,(*(LnkLI31))((V34),V43));
	V34= (*(LnkLI30))(/* INLINE-ARGS */V44,(V32));
	princ_str("\n	{object ",VV[11]);
	(void)((*(LnkLI32))((V37)));
	princ_char(59,VV[11]);
	{register object V45;
	object V46;
	V45= (V38);
	V46= car((V45));
	goto T38;
T38:;
	if(!(endp_prop((V45)))){
	goto T39;}
	goto T34;
	goto T39;
T39:;
	princ_str("\n	object ",VV[11]);
	(void)((*(LnkLI32))((V46)));
	princ_str("= ",VV[11]);
	(void)((*(LnkLI32))(car((V34))));
	princ_char(59,VV[11]);
	{object V47;
	V47= car((V34));
	V34= cdr((V34));}
	V45= cdr((V45));
	V46= car((V45));
	goto T38;}
	goto T34;
T34:;
	if((symbol_value(VV[12]))==Cnil){
	goto T60;}
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_char(41,VV[11]);
	{register object V48;
	object V49;
	V48= cdr((V38));
	V49= car((V48));
	goto T70;
T70:;
	if(!(endp_prop((V48)))){
	goto T71;}
	goto T66;
	goto T71;
T71:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V49)));
	princ_char(41,VV[11]);
	V48= cdr((V48));
	V49= car((V48));
	goto T70;}
	goto T66;
T66:;
	princ_str("){",VV[11]);
	goto T58;
	goto T60;
T60:;
	princ_str("\n	if(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("==Cnil",VV[11]);
	{register object V50;
	object V51;
	V50= cdr((V38));
	V51= car((V50));
	goto T93;
T93:;
	if(!(endp_prop((V50)))){
	goto T94;}
	goto T89;
	goto T94;
T94:;
	princ_str("||",VV[11]);
	(void)((*(LnkLI32))((V51)));
	princ_str("==Cnil",VV[11]);
	V50= cdr((V50));
	V51= car((V50));
	goto T93;}
	goto T89;
T89:;
	princ_str("){",VV[11]);
	goto T58;
T58:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))(Cnil,VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V36)));
	princ_char(61,VV[11]);
	(void)((*(LnkLI32))((V37)));
	princ_str("=MMcons(Cnil,Cnil);",VV[11]);
	if((cdr((V35)))==Cnil){
	goto T117;}
	princ_str("\n	goto T",VV[11]);
	(void)((*(LnkLI32))(car((V35))));
	princ_char(59,VV[11]);
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((V35))));
	princ_str(":;",VV[11]);
	goto T117;
T117:;
	bds_bind(VV[14],list(2,VV[15],cadr((V37))));
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	bds_bind(VV[16],make_cons(symbol_value(VV[6]),Cnil));
	bds_bind(VV[17],make_cons((VV[16]->s.s_dbind),symbol_value(VV[17])));
	if(((V33))==Cnil){
	goto T135;}
	{object V53;
	object V54= (V38);
	if(endp(V54)){
	V52= Cnil;
	goto T133;}
	base[5]=V53=MMcons(Cnil,Cnil);
	goto T137;
T137:;{object V56;
	V56= symbol_value(VV[19]);
	(V53->c.c_car)= list(3,VV[18],V56,list(2,VV[15],cadr((V54->c.c_car))));}
	V54=MMcdr(V54);
	if(endp(V54)){
	V52= base[5];
	goto T133;}
	V53=MMcdr(V53)=MMcons(Cnil,Cnil);
	goto T137;}
	goto T135;
T135:;
	{object V57;
	object V58= (V38);
	if(endp(V58)){
	V52= Cnil;
	goto T133;}
	base[5]=V57=MMcons(Cnil,Cnil);
	goto T139;
T139:;
	(V57->c.c_car)= list(3,VV[18],symbol_value(VV[19]),(V58->c.c_car));
	V58=MMcdr(V58);
	if(endp(V58)){
	V52= base[5];
	goto T133;}
	V57=MMcdr(V57)=MMcons(Cnil,Cnil);
	goto T139;}
	goto T133;
T133:;
	(void)((VFUN_NARGS=3,(*(LnkLI34))((V32),V52,(V39))));
	if((cdr((VV[16]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T127;}
	princ_str("\n	goto T",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_char(59,VV[11]);
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_str(":;",VV[11]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T127;
T127:;
	if((symbol_value(VV[12]))==Cnil){
	goto T152;}
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str(");",VV[11]);
	{register object V60;
	object V61;
	V60= cdr((V38));
	V61= car((V60));
	goto T164;
T164:;
	if(!(endp_prop((V60)))){
	goto T165;}
	goto T160;
	goto T165;
T165:;
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V61)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V61)));
	princ_str(");",VV[11]);
	V60= cdr((V60));
	V61= car((V60));
	goto T164;}
	goto T160;
T160:;
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_char(41,VV[11]);
	{register object V62;
	object V63;
	V62= cdr((V38));
	V63= car((V62));
	goto T188;
T188:;
	if(!(endp_prop((V62)))){
	goto T189;}
	goto T184;
	goto T189;
T189:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V63)));
	princ_char(41,VV[11]);
	V62= cdr((V62));
	V63= car((V62));
	goto T188;}
	goto T184;
T184:;
	princ_str("){",VV[11]);
	goto T150;
	goto T152;
T152:;
	princ_str("\n	if((",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("))==Cnil",VV[11]);
	{register object V64;
	object V65;
	V64= cdr((V38));
	V65= car((V64));
	goto T213;
T213:;
	if(!(endp_prop((V64)))){
	goto T214;}
	goto T209;
	goto T214;
T214:;
	princ_str("||(",VV[11]);
	(void)((*(LnkLI32))((V65)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V65)));
	princ_str("))==Cnil",VV[11]);
	V64= cdr((V64));
	V65= car((V64));
	goto T213;}
	goto T209;
T209:;
	princ_str("){",VV[11]);
	goto T150;
T150:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))((V36),VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V37)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V37)));
	princ_str(")=MMcons(Cnil,Cnil);",VV[11]);
	princ_str("\n	",VV[11]);
	if(type_of((V35))!=t_cons)FEwrong_type_argument(Scons,(V35));
	((V35))->c.c_cdr = Ct;
	princ_str("goto T",VV[11]);
	(void)((*(LnkLI32))(car((V35))));
	princ_char(59,VV[11]);
	princ_char(125,VV[11]);
	{object V66 = (*(LnkLI35))();
	bds_unwind1;
	bds_unwind1;
	VMR8(V66)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MAPC	*/

static object LI9(V70,V71,V72)

object V70;object V71;register object V72;
{	 VMB9 VMS9 VMV9
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	bds_bind(VV[5],small_fixnum(0));
	{object V73;
	object V74;
	object V75;
	object V76;
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	V73= make_cons(symbol_value(VV[6]),Ct);
	{object V77;
	object V78= (V72);
	if(endp(V78)){
	V75= Cnil;
	goto T249;}
	base[2]=V77=MMcons(Cnil,Cnil);
	goto T250;
T250:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	(V77->c.c_car)= list(2,VV[8],symbol_value(VV[9]));
	V78=MMcdr(V78);
	if(endp(V78)){
	V75= base[2];
	goto T249;}
	V77=MMcdr(V77)=MMcons(Cnil,Cnil);
	goto T250;}
	goto T249;
T249:;
	V74= Cnil;
	V76= Cnil;
	V76= (*(LnkLI29))((V70));
	base[2]= make_fixnum((long)length((V72)));
	base[3]= VV[10];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V80= vs_base[0];
	V81= (VFUN_NARGS=2,(*(LnkLI31))((V72),V80));
	V72= (*(LnkLI30))(/* INLINE-ARGS */V81,(V70));
	V74= car((V72));
	princ_str("\n	{",VV[11]);
	{register object V82;
	object V83;
	V82= (V75);
	V83= car((V82));
	goto T269;
T269:;
	if(!(endp_prop((V82)))){
	goto T270;}
	goto T265;
	goto T270;
T270:;
	princ_str("\n	object ",VV[11]);
	(void)((*(LnkLI32))((V83)));
	princ_str("= ",VV[11]);
	(void)((*(LnkLI32))(car((V72))));
	princ_char(59,VV[11]);
	{object V84;
	V84= car((V72));
	V72= cdr((V72));}
	V82= cdr((V82));
	V83= car((V82));
	goto T269;}
	goto T265;
T265:;
	if((symbol_value(VV[12]))==Cnil){
	goto T291;}
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V75))));
	princ_char(41,VV[11]);
	{register object V85;
	object V86;
	V85= cdr((V75));
	V86= car((V85));
	goto T301;
T301:;
	if(!(endp_prop((V85)))){
	goto T302;}
	goto T297;
	goto T302;
T302:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V86)));
	princ_char(41,VV[11]);
	V85= cdr((V85));
	V86= car((V85));
	goto T301;}
	goto T297;
T297:;
	princ_str("){",VV[11]);
	goto T289;
	goto T291;
T291:;
	princ_str("\n	if(",VV[11]);
	(void)((*(LnkLI32))(car((V75))));
	princ_str("==Cnil",VV[11]);
	{register object V87;
	object V88;
	V87= cdr((V75));
	V88= car((V87));
	goto T324;
T324:;
	if(!(endp_prop((V87)))){
	goto T325;}
	goto T320;
	goto T325;
T325:;
	princ_str("||",VV[11]);
	(void)((*(LnkLI32))((V88)));
	princ_str("==Cnil",VV[11]);
	V87= cdr((V87));
	V88= car((V87));
	goto T324;}
	goto T320;
T320:;
	princ_str("){",VV[11]);
	goto T289;
T289:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))(Cnil,VV[13])));
	princ_char(125,VV[11]);
	if((cdr((V73)))==Cnil){
	goto T342;}
	princ_str("\n	goto T",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_char(59,VV[11]);
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_str(":;",VV[11]);
	goto T342;
T342:;
	bds_bind(VV[14],VV[20]);
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	bds_bind(VV[16],make_cons(symbol_value(VV[6]),Cnil));
	bds_bind(VV[17],make_cons((VV[16]->s.s_dbind),symbol_value(VV[17])));
	if(((V71))==Cnil){
	goto T359;}
	{object V90;
	object V91= (V75);
	if(endp(V91)){
	V89= Cnil;
	goto T357;}
	base[5]=V90=MMcons(Cnil,Cnil);
	goto T361;
T361:;{object V93;
	V93= symbol_value(VV[19]);
	(V90->c.c_car)= list(3,VV[18],V93,list(2,VV[15],cadr((V91->c.c_car))));}
	V91=MMcdr(V91);
	if(endp(V91)){
	V89= base[5];
	goto T357;}
	V90=MMcdr(V90)=MMcons(Cnil,Cnil);
	goto T361;}
	goto T359;
T359:;
	{object V94;
	object V95= (V75);
	if(endp(V95)){
	V89= Cnil;
	goto T357;}
	base[5]=V94=MMcons(Cnil,Cnil);
	goto T363;
T363:;
	(V94->c.c_car)= list(3,VV[18],symbol_value(VV[19]),(V95->c.c_car));
	V95=MMcdr(V95);
	if(endp(V95)){
	V89= base[5];
	goto T357;}
	V94=MMcdr(V94)=MMcons(Cnil,Cnil);
	goto T363;}
	goto T357;
T357:;
	(void)((VFUN_NARGS=3,(*(LnkLI34))((V70),V89,(V76))));
	if((cdr((VV[16]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T352;}
	princ_str("\n	goto T",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_char(59,VV[11]);
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_str(":;",VV[11]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T352;
T352:;
	if((symbol_value(VV[12]))==Cnil){
	goto T376;}
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))(car((V75))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V75))));
	princ_str(");",VV[11]);
	{register object V97;
	object V98;
	V97= cdr((V75));
	V98= car((V97));
	goto T388;
T388:;
	if(!(endp_prop((V97)))){
	goto T389;}
	goto T384;
	goto T389;
T389:;
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V98)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V98)));
	princ_str(");",VV[11]);
	V97= cdr((V97));
	V98= car((V97));
	goto T388;}
	goto T384;
T384:;
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V75))));
	princ_char(41,VV[11]);
	{register object V99;
	object V100;
	V99= cdr((V75));
	V100= car((V99));
	goto T412;
T412:;
	if(!(endp_prop((V99)))){
	goto T413;}
	goto T408;
	goto T413;
T413:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V100)));
	princ_char(41,VV[11]);
	V99= cdr((V99));
	V100= car((V99));
	goto T412;}
	goto T408;
T408:;
	princ_str("){",VV[11]);
	goto T374;
	goto T376;
T376:;
	princ_str("\n	if((",VV[11]);
	(void)((*(LnkLI32))(car((V75))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V75))));
	princ_str("))==Cnil",VV[11]);
	{register object V101;
	object V102;
	V101= cdr((V75));
	V102= car((V101));
	goto T437;
T437:;
	if(!(endp_prop((V101)))){
	goto T438;}
	goto T433;
	goto T438;
T438:;
	princ_str("||(",VV[11]);
	(void)((*(LnkLI32))((V102)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V102)));
	princ_str("))==Cnil",VV[11]);
	V101= cdr((V101));
	V102= car((V101));
	goto T437;}
	goto T433;
T433:;
	princ_str("){",VV[11]);
	goto T374;
T374:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))((V74),VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	if(type_of((V73))!=t_cons)FEwrong_type_argument(Scons,(V73));
	((V73))->c.c_cdr = Ct;
	princ_str("goto T",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_char(59,VV[11]);
	princ_char(125,VV[11]);
	{object V103 = (*(LnkLI35))();
	bds_unwind1;
	bds_unwind1;
	VMR9(V103)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MAPCAN	*/

static object LI10(V107,V108,V109)

object V107;object V108;register object V109;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	bds_bind(VV[5],small_fixnum(0));
	{object V110;
	object V111;
	object V112;
	object V113;
	object V114;
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	V110= make_cons(symbol_value(VV[6]),Ct);
	V111= list(2,VV[7],(*(LnkLI28))());
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V112= list(2,VV[8],symbol_value(VV[9]));
	{object V115;
	object V116= (V109);
	if(endp(V116)){
	V113= Cnil;
	goto T470;}
	base[2]=V115=MMcons(Cnil,Cnil);
	goto T471;
T471:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	(V115->c.c_car)= list(2,VV[8],symbol_value(VV[9]));
	V116=MMcdr(V116);
	if(endp(V116)){
	V113= base[2];
	goto T470;}
	V115=MMcdr(V115)=MMcons(Cnil,Cnil);
	goto T471;}
	goto T470;
T470:;
	V114= Cnil;
	V114= (*(LnkLI29))((V107));
	base[2]= make_fixnum((long)length((V109)));
	base[3]= VV[10];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V118= vs_base[0];
	V119= (VFUN_NARGS=2,(*(LnkLI31))((V109),V118));
	V109= (*(LnkLI30))(/* INLINE-ARGS */V119,(V107));
	princ_str("\n	{object ",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_char(59,VV[11]);
	{register object V120;
	object V121;
	V120= (V113);
	V121= car((V120));
	goto T490;
T490:;
	if(!(endp_prop((V120)))){
	goto T491;}
	goto T486;
	goto T491;
T491:;
	princ_str("\n	object ",VV[11]);
	(void)((*(LnkLI32))((V121)));
	princ_str("= ",VV[11]);
	(void)((*(LnkLI32))(car((V109))));
	princ_char(59,VV[11]);
	{object V122;
	V122= car((V109));
	V109= cdr((V109));}
	V120= cdr((V120));
	V121= car((V120));
	goto T490;}
	goto T486;
T486:;
	if((symbol_value(VV[12]))==Cnil){
	goto T512;}
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V113))));
	princ_char(41,VV[11]);
	{register object V123;
	object V124;
	V123= cdr((V113));
	V124= car((V123));
	goto T522;
T522:;
	if(!(endp_prop((V123)))){
	goto T523;}
	goto T518;
	goto T523;
T523:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V124)));
	princ_char(41,VV[11]);
	V123= cdr((V123));
	V124= car((V123));
	goto T522;}
	goto T518;
T518:;
	princ_str("){",VV[11]);
	goto T510;
	goto T512;
T512:;
	princ_str("\n	if(",VV[11]);
	(void)((*(LnkLI32))(car((V113))));
	princ_str("==Cnil",VV[11]);
	{register object V125;
	object V126;
	V125= cdr((V113));
	V126= car((V125));
	goto T545;
T545:;
	if(!(endp_prop((V125)))){
	goto T546;}
	goto T541;
	goto T546;
T546:;
	princ_str("||",VV[11]);
	(void)((*(LnkLI32))((V126)));
	princ_str("==Cnil",VV[11]);
	V125= cdr((V125));
	V126= car((V125));
	goto T545;}
	goto T541;
T541:;
	princ_str("){",VV[11]);
	goto T510;
T510:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))(Cnil,VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V111)));
	princ_char(61,VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str("=MMcons(Cnil,Cnil);",VV[11]);
	if((cdr((V110)))==Cnil){
	goto T569;}
	princ_str("\n	goto T",VV[11]);
	(void)((*(LnkLI32))(car((V110))));
	princ_char(59,VV[11]);
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((V110))));
	princ_str(":;",VV[11]);
	goto T569;
T569:;
	bds_bind(VV[14],list(2,VV[21],cadr((V112))));
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	bds_bind(VV[16],make_cons(symbol_value(VV[6]),Cnil));
	bds_bind(VV[17],make_cons((VV[16]->s.s_dbind),symbol_value(VV[17])));
	if(((V108))==Cnil){
	goto T587;}
	{object V128;
	object V129= (V113);
	if(endp(V129)){
	V127= Cnil;
	goto T585;}
	base[5]=V128=MMcons(Cnil,Cnil);
	goto T589;
T589:;{object V131;
	V131= symbol_value(VV[19]);
	(V128->c.c_car)= list(3,VV[18],V131,list(2,VV[15],cadr((V129->c.c_car))));}
	V129=MMcdr(V129);
	if(endp(V129)){
	V127= base[5];
	goto T585;}
	V128=MMcdr(V128)=MMcons(Cnil,Cnil);
	goto T589;}
	goto T587;
T587:;
	{object V132;
	object V133= (V113);
	if(endp(V133)){
	V127= Cnil;
	goto T585;}
	base[5]=V132=MMcons(Cnil,Cnil);
	goto T591;
T591:;
	(V132->c.c_car)= list(3,VV[18],symbol_value(VV[19]),(V133->c.c_car));
	V133=MMcdr(V133);
	if(endp(V133)){
	V127= base[5];
	goto T585;}
	V132=MMcdr(V132)=MMcons(Cnil,Cnil);
	goto T591;}
	goto T585;
T585:;
	(void)((VFUN_NARGS=3,(*(LnkLI34))((V107),V127,(V114))));
	if((cdr((VV[16]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T579;}
	princ_str("\n	goto T",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_char(59,VV[11]);
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_str(":;",VV[11]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T579;
T579:;
	if((symbol_value(VV[12]))==Cnil){
	goto T604;}
	princ_str("\n	{object cdr_",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str(");while(!endp(cdr_",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str(")) {cdr_",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str("=MMcdr(cdr_",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str(");",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str(");}}",VV[11]);
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))(car((V113))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V113))));
	princ_str(");",VV[11]);
	{register object V135;
	object V136;
	V135= cdr((V113));
	V136= car((V135));
	goto T632;
T632:;
	if(!(endp_prop((V135)))){
	goto T633;}
	goto T628;
	goto T633;
T633:;
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V136)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V136)));
	princ_str(");",VV[11]);
	V135= cdr((V135));
	V136= car((V135));
	goto T632;}
	goto T628;
T628:;
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V113))));
	princ_char(41,VV[11]);
	{register object V137;
	object V138;
	V137= cdr((V113));
	V138= car((V137));
	goto T656;
T656:;
	if(!(endp_prop((V137)))){
	goto T657;}
	goto T652;
	goto T657;
T657:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V138)));
	princ_char(41,VV[11]);
	V137= cdr((V137));
	V138= car((V137));
	goto T656;}
	goto T652;
T652:;
	princ_str("){",VV[11]);
	goto T602;
	goto T604;
T604:;
	princ_str("\n	while(MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str(")!=Cnil)",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V112)));
	princ_str(");",VV[11]);
	princ_str("\n	if((",VV[11]);
	(void)((*(LnkLI32))(car((V113))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V113))));
	princ_str("))==Cnil",VV[11]);
	{register object V139;
	object V140;
	V139= cdr((V113));
	V140= car((V139));
	goto T689;
T689:;
	if(!(endp_prop((V139)))){
	goto T690;}
	goto T685;
	goto T690;
T690:;
	princ_str("||(",VV[11]);
	(void)((*(LnkLI32))((V140)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V140)));
	princ_str("))==Cnil",VV[11]);
	V139= cdr((V139));
	V140= car((V139));
	goto T689;}
	goto T685;
T685:;
	princ_str("){",VV[11]);
	goto T602;
T602:;
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V111)));
	princ_char(61,VV[11]);
	(void)((*(LnkLI32))((V111)));
	princ_str("->c.c_cdr;",VV[11]);
	(void)((VFUN_NARGS=2,(*(LnkLI33))((V111),VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	if(type_of((V110))!=t_cons)FEwrong_type_argument(Scons,(V110));
	((V110))->c.c_cdr = Ct;
	princ_str("goto T",VV[11]);
	(void)((*(LnkLI32))(car((V110))));
	princ_char(59,VV[11]);
	princ_char(125,VV[11]);
	{object V141 = (*(LnkLI35))();
	bds_unwind1;
	bds_unwind1;
	VMR10(V141)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-CHANGED-VARS	*/

static object LI11(V144,V145)

object V144;object V145;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V146;
	object V147;
	V146= Cnil;
	V147= make_cons((V145),Cnil);
	{register object V148;
	register object V149;
	V148= (V144);
	V149= car((V148));
	goto T728;
T728:;
	if(!(endp_prop((V148)))){
	goto T729;}
	{object V150 = reverse((V146));
	VMR11(V150)}
	goto T729;
T729:;
	if(!(type_of((V149))==t_cons)){
	goto T735;}
	if(!((car((V149)))==(VV[22]))){
	goto T735;}
	if(((*(LnkLI36))(cadr((V149)),(V147)))==Cnil){
	goto T735;}
	{register object V151;
	V151= list(2,VV[7],(*(LnkLI28))());
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V151)));
	princ_str("= ",VV[11]);
	(void)((*(LnkLI32))((V149)));
	princ_char(59,VV[11]);
	{register object V152;
	V152= (V151);
	V146= make_cons((V152),(V146));
	goto T733;}}
	goto T735;
T735:;
	{register object V153;
	V153= (V149);
	V146= make_cons((V153),(V146));}
	goto T733;
T733:;
	V148= cdr((V148));
	V149= car((V148));
	goto T728;}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,2,first,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI35(){return call_proc0(VV[35],(void **)(void *)&LnkLI35);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[34],(void **)(void *)&LnkLI34,first,ap);va_end(ap);return V1;} /* C2FUNCALL */
static object  LnkTLI33(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[33],(void **)(void *)&LnkLI33,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],(void **)(void *)&LnkLI32,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI31(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[31],(void **)(void *)&LnkLI31,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI30(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[30],(void **)(void *)&LnkLI30,2,first,ap);va_end(ap);return V1;} /* PUSH-CHANGED-VARS */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[29],(void **)(void *)&LnkLI29,1,first,ap);va_end(ap);return V1;} /* SAVE-FUNOB */
static object  LnkTLI28(){return call_proc0(VV[28],(void **)(void *)&LnkLI28);} /* VS-PUSH */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[27],(void **)(void *)&LnkLI27,2,first,ap);va_end(ap);return V1;} /* C1ARGS */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* COPY-INFO */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[25],(void **)(void *)&LnkLI25,1,first,ap);va_end(ap);return V1;} /* C1FUNOB */
static object  LnkTLI24(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[24],(void **)(void *)&LnkLI24,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static object  LnkTLI23(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[23],(void **)(void *)&LnkLI23,3,first,ap);va_end(ap);return V1;} /* C1MAP-FUNCTIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

