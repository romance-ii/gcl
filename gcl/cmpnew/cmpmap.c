
#include "cmpinclude.h"
#include "cmpmap.h"
init_cmpmap(){do_init(VV);}
/*	local entry for function C1MAPCAR	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
TTL:;
	{object V3 = (*(LnkLI23))(VV[0],Ct,(V2));
	VMR1(V3)}
}
/*	local entry for function C1MAPLIST	*/

static object LI2(V5)

object V5;
{	 VMB2 VMS2 VMV2
TTL:;
	{object V6 = (*(LnkLI23))(VV[0],Cnil,(V5));
	VMR2(V6)}
}
/*	local entry for function C1MAPC	*/

static object LI3(V8)

object V8;
{	 VMB3 VMS3 VMV3
TTL:;
	{object V9 = (*(LnkLI23))(VV[1],Ct,(V8));
	VMR3(V9)}
}
/*	local entry for function C1MAPL	*/

static object LI4(V11)

object V11;
{	 VMB4 VMS4 VMV4
TTL:;
	{object V12 = (*(LnkLI23))(VV[1],Cnil,(V11));
	VMR4(V12)}
}
/*	local entry for function C1MAPCAN	*/

static object LI5(V14)

object V14;
{	 VMB5 VMS5 VMV5
TTL:;
	{object V15 = (*(LnkLI23))(VV[2],Ct,(V14));
	VMR5(V15)}
}
/*	local entry for function C1MAPCON	*/

static object LI6(V17)

object V17;
{	 VMB6 VMS6 VMV6
TTL:;
	{object V18 = (*(LnkLI23))(VV[2],Cnil,(V17));
	VMR6(V18)}
}
/*	local entry for function C1MAP-FUNCTIONS	*/

static object LI7(V22,V23,V24)

object V22;object V23;register object V24;
{	 VMB7 VMS7 VMV7
TTL:;
	{object V25;
	object V26;
	V25= Cnil;
	V26= Cnil;
	if(endp((V24))){
	goto T4;}
	if(!(endp(cdr((V24))))){
	goto T3;}
T4:;
	V27 = make_fixnum(length((V24)));
	(void)((*(LnkLI24))(VV[3],small_fixnum(2),V27));
T3:;
	V25= (*(LnkLI25))(car((V24)));
	base[0]= cadr((V25));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	V26= vs_base[0];
	{object V28 = list(5,(V22),(V26),(V25),(V23),(*(LnkLI27))(cdr((V24)),(V26)));
	VMR7(V28)}}
}
/*	local entry for function C2MAPCAR	*/

static object LI8(V32,V33,V34)

object V32;object V33;register object V34;
{	 VMB8 VMS8 VMV8
	bds_check;
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
T19:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	(V40->c.c_car)= list(2,VV[8],symbol_value(VV[9]));
	if(endp(V41=MMcdr(V41))){
	V38= base[2];
	goto T18;}
	V40=MMcdr(V40)=MMcons(Cnil,Cnil);
	goto T19;}
T18:;
	V39= Cnil;
	V39= (*(LnkLI29))((V32));
	base[2]= make_fixnum(length((V34)));
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
T38:;
	if(!(endp((V45)))){
	goto T39;}
	goto T34;
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
T70:;
	if(!(endp((V48)))){
	goto T71;}
	goto T66;
T71:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V49)));
	princ_char(41,VV[11]);
	V48= cdr((V48));
	V49= car((V48));
	goto T70;}
T66:;
	princ_str("){",VV[11]);
	goto T58;
T60:;
	princ_str("\n	if(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("==Cnil",VV[11]);
	{register object V50;
	object V51;
	V50= cdr((V38));
	V51= car((V50));
T93:;
	if(!(endp((V50)))){
	goto T94;}
	goto T89;
T94:;
	princ_str("||",VV[11]);
	(void)((*(LnkLI32))((V51)));
	princ_str("==Cnil",VV[11]);
	V50= cdr((V50));
	V51= car((V50));
	goto T93;}
T89:;
	princ_str("){",VV[11]);
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
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((V35))));
	princ_str(":;",VV[11]);
T117:;
	bds_bind(VV[14],list(2,VV[15],cadr((V37))));
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	bds_bind(VV[16],make_cons(symbol_value(VV[6]),Cnil));
	bds_bind(VV[17],make_cons((VV[16]->s.s_dbind),symbol_value(VV[17])));
	if(((V33))==Cnil){
	goto T131;}
	{object V53;
	object V54= (V38);
	if(endp(V54)){
	V52= Cnil;
	goto T129;}
	base[5]=V53=MMcons(Cnil,Cnil);
T133:;{object V56;
	V56= symbol_value(VV[19]);
	(V53->c.c_car)= list(3,VV[18],V56,list(2,VV[15],cadr((V54->c.c_car))));}
	if(endp(V54=MMcdr(V54))){
	V52= base[5];
	goto T129;}
	V53=MMcdr(V53)=MMcons(Cnil,Cnil);
	goto T133;}
T131:;
	{object V57;
	object V58= (V38);
	if(endp(V58)){
	V52= Cnil;
	goto T129;}
	base[5]=V57=MMcons(Cnil,Cnil);
T135:;
	(V57->c.c_car)= list(3,VV[18],symbol_value(VV[19]),(V58->c.c_car));
	if(endp(V58=MMcdr(V58))){
	V52= base[5];
	goto T129;}
	V57=MMcdr(V57)=MMcons(Cnil,Cnil);
	goto T135;}
T129:;
	(void)((VFUN_NARGS=3,(*(LnkLI34))((V32),V52,(V39))));
	if((cdr((VV[16]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T123;}
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_str(":;",VV[11]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T123:;
	if((symbol_value(VV[12]))==Cnil){
	goto T144;}
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("))",VV[11]);
	{register object V60;
	object V61;
	V60= cdr((V38));
	V61= car((V60));
T156:;
	if(!(endp((V60)))){
	goto T157;}
	goto T152;
T157:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V61)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V61)));
	princ_str("))",VV[11]);
	V60= cdr((V60));
	V61= car((V60));
	goto T156;}
T152:;
	princ_str("){",VV[11]);
	goto T142;
T144:;
	princ_str("\n	if((",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V38))));
	princ_str("))==Cnil",VV[11]);
	{register object V62;
	object V63;
	V62= cdr((V38));
	V63= car((V62));
T183:;
	if(!(endp((V62)))){
	goto T184;}
	goto T179;
T184:;
	princ_str("||(",VV[11]);
	(void)((*(LnkLI32))((V63)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V63)));
	princ_str("))==Cnil",VV[11]);
	V62= cdr((V62));
	V63= car((V62));
	goto T183;}
T179:;
	princ_str("){",VV[11]);
T142:;
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
	{object V64 = (*(LnkLI35))();
	bds_unwind1;
	bds_unwind1;
	VMR8(V64)}}
}
/*	local entry for function C2MAPC	*/

static object LI9(V68,V69,V70)

object V68;object V69;register object V70;
{	 VMB9 VMS9 VMV9
	bds_check;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	bds_bind(VV[5],small_fixnum(0));
	{object V71;
	object V72;
	object V73;
	object V74;
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	V71= make_cons(symbol_value(VV[6]),Ct);
	{object V75;
	object V76= (V70);
	if(endp(V76)){
	V73= Cnil;
	goto T219;}
	base[2]=V75=MMcons(Cnil,Cnil);
T220:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	(V75->c.c_car)= list(2,VV[8],symbol_value(VV[9]));
	if(endp(V76=MMcdr(V76))){
	V73= base[2];
	goto T219;}
	V75=MMcdr(V75)=MMcons(Cnil,Cnil);
	goto T220;}
T219:;
	V72= Cnil;
	V74= Cnil;
	V74= (*(LnkLI29))((V68));
	base[2]= make_fixnum(length((V70)));
	base[3]= VV[10];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V78= vs_base[0];
	V79= (VFUN_NARGS=2,(*(LnkLI31))((V70),V78));
	V70= (*(LnkLI30))(/* INLINE-ARGS */V79,(V68));
	V72= car((V70));
	princ_str("\n	{",VV[11]);
	{register object V80;
	object V81;
	V80= (V73);
	V81= car((V80));
T239:;
	if(!(endp((V80)))){
	goto T240;}
	goto T235;
T240:;
	princ_str("\n	object ",VV[11]);
	(void)((*(LnkLI32))((V81)));
	princ_str("= ",VV[11]);
	(void)((*(LnkLI32))(car((V70))));
	princ_char(59,VV[11]);
	{object V82;
	V82= car((V70));
	V70= cdr((V70));}
	V80= cdr((V80));
	V81= car((V80));
	goto T239;}
T235:;
	if((symbol_value(VV[12]))==Cnil){
	goto T261;}
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_char(41,VV[11]);
	{register object V83;
	object V84;
	V83= cdr((V73));
	V84= car((V83));
T271:;
	if(!(endp((V83)))){
	goto T272;}
	goto T267;
T272:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V84)));
	princ_char(41,VV[11]);
	V83= cdr((V83));
	V84= car((V83));
	goto T271;}
T267:;
	princ_str("){",VV[11]);
	goto T259;
T261:;
	princ_str("\n	if(",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_str("==Cnil",VV[11]);
	{register object V85;
	object V86;
	V85= cdr((V73));
	V86= car((V85));
T294:;
	if(!(endp((V85)))){
	goto T295;}
	goto T290;
T295:;
	princ_str("||",VV[11]);
	(void)((*(LnkLI32))((V86)));
	princ_str("==Cnil",VV[11]);
	V85= cdr((V85));
	V86= car((V85));
	goto T294;}
T290:;
	princ_str("){",VV[11]);
T259:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))(Cnil,VV[13])));
	princ_char(125,VV[11]);
	if((cdr((V71)))==Cnil){
	goto T312;}
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((V71))));
	princ_str(":;",VV[11]);
T312:;
	bds_bind(VV[14],VV[20]);
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	bds_bind(VV[16],make_cons(symbol_value(VV[6]),Cnil));
	bds_bind(VV[17],make_cons((VV[16]->s.s_dbind),symbol_value(VV[17])));
	if(((V69))==Cnil){
	goto T325;}
	{object V88;
	object V89= (V73);
	if(endp(V89)){
	V87= Cnil;
	goto T323;}
	base[5]=V88=MMcons(Cnil,Cnil);
T327:;{object V91;
	V91= symbol_value(VV[19]);
	(V88->c.c_car)= list(3,VV[18],V91,list(2,VV[15],cadr((V89->c.c_car))));}
	if(endp(V89=MMcdr(V89))){
	V87= base[5];
	goto T323;}
	V88=MMcdr(V88)=MMcons(Cnil,Cnil);
	goto T327;}
T325:;
	{object V92;
	object V93= (V73);
	if(endp(V93)){
	V87= Cnil;
	goto T323;}
	base[5]=V92=MMcons(Cnil,Cnil);
T329:;
	(V92->c.c_car)= list(3,VV[18],symbol_value(VV[19]),(V93->c.c_car));
	if(endp(V93=MMcdr(V93))){
	V87= base[5];
	goto T323;}
	V92=MMcdr(V92)=MMcons(Cnil,Cnil);
	goto T329;}
T323:;
	(void)((VFUN_NARGS=3,(*(LnkLI34))((V68),V87,(V74))));
	if((cdr((VV[16]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T318;}
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_str(":;",VV[11]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T318:;
	if((symbol_value(VV[12]))==Cnil){
	goto T338;}
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_str("))",VV[11]);
	{register object V95;
	object V96;
	V95= cdr((V73));
	V96= car((V95));
T350:;
	if(!(endp((V95)))){
	goto T351;}
	goto T346;
T351:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V96)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V96)));
	princ_str("))",VV[11]);
	V95= cdr((V95));
	V96= car((V95));
	goto T350;}
T346:;
	princ_str("){",VV[11]);
	goto T336;
T338:;
	princ_str("\n	if((",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V73))));
	princ_str("))==Cnil",VV[11]);
	{register object V97;
	object V98;
	V97= cdr((V73));
	V98= car((V97));
T377:;
	if(!(endp((V97)))){
	goto T378;}
	goto T373;
T378:;
	princ_str("||(",VV[11]);
	(void)((*(LnkLI32))((V98)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V98)));
	princ_str("))==Cnil",VV[11]);
	V97= cdr((V97));
	V98= car((V97));
	goto T377;}
T373:;
	princ_str("){",VV[11]);
T336:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))((V72),VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	if(type_of((V71))!=t_cons)FEwrong_type_argument(Scons,(V71));
	((V71))->c.c_cdr = Ct;
	princ_str("goto T",VV[11]);
	(void)((*(LnkLI32))(car((V71))));
	princ_char(59,VV[11]);
	princ_char(125,VV[11]);
	{object V99 = (*(LnkLI35))();
	bds_unwind1;
	bds_unwind1;
	VMR9(V99)}}
}
/*	local entry for function C2MAPCAN	*/

static object LI10(V103,V104,V105)

object V103;object V104;register object V105;
{	 VMB10 VMS10 VMV10
	bds_check;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	bds_bind(VV[5],small_fixnum(0));
	{object V106;
	object V107;
	object V108;
	object V109;
	object V110;
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	V106= make_cons(symbol_value(VV[6]),Ct);
	V107= list(2,VV[7],(*(LnkLI28))());
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V108= list(2,VV[8],symbol_value(VV[9]));
	{object V111;
	object V112= (V105);
	if(endp(V112)){
	V109= Cnil;
	goto T410;}
	base[2]=V111=MMcons(Cnil,Cnil);
T411:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	(V111->c.c_car)= list(2,VV[8],symbol_value(VV[9]));
	if(endp(V112=MMcdr(V112))){
	V109= base[2];
	goto T410;}
	V111=MMcdr(V111)=MMcons(Cnil,Cnil);
	goto T411;}
T410:;
	V110= Cnil;
	V110= (*(LnkLI29))((V103));
	base[2]= make_fixnum(length((V105)));
	base[3]= VV[10];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V114= vs_base[0];
	V115= (VFUN_NARGS=2,(*(LnkLI31))((V105),V114));
	V105= (*(LnkLI30))(/* INLINE-ARGS */V115,(V103));
	princ_str("\n	{object ",VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_char(59,VV[11]);
	{register object V116;
	object V117;
	V116= (V109);
	V117= car((V116));
T430:;
	if(!(endp((V116)))){
	goto T431;}
	goto T426;
T431:;
	princ_str("\n	object ",VV[11]);
	(void)((*(LnkLI32))((V117)));
	princ_str("= ",VV[11]);
	(void)((*(LnkLI32))(car((V105))));
	princ_char(59,VV[11]);
	{object V118;
	V118= car((V105));
	V105= cdr((V105));}
	V116= cdr((V116));
	V117= car((V116));
	goto T430;}
T426:;
	if((symbol_value(VV[12]))==Cnil){
	goto T452;}
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V109))));
	princ_char(41,VV[11]);
	{register object V119;
	object V120;
	V119= cdr((V109));
	V120= car((V119));
T462:;
	if(!(endp((V119)))){
	goto T463;}
	goto T458;
T463:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V120)));
	princ_char(41,VV[11]);
	V119= cdr((V119));
	V120= car((V119));
	goto T462;}
T458:;
	princ_str("){",VV[11]);
	goto T450;
T452:;
	princ_str("\n	if(",VV[11]);
	(void)((*(LnkLI32))(car((V109))));
	princ_str("==Cnil",VV[11]);
	{register object V121;
	object V122;
	V121= cdr((V109));
	V122= car((V121));
T485:;
	if(!(endp((V121)))){
	goto T486;}
	goto T481;
T486:;
	princ_str("||",VV[11]);
	(void)((*(LnkLI32))((V122)));
	princ_str("==Cnil",VV[11]);
	V121= cdr((V121));
	V122= car((V121));
	goto T485;}
T481:;
	princ_str("){",VV[11]);
T450:;
	(void)((VFUN_NARGS=2,(*(LnkLI33))(Cnil,VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V107)));
	princ_char(61,VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_str("=MMcons(Cnil,Cnil);",VV[11]);
	if((cdr((V106)))==Cnil){
	goto T509;}
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((V106))));
	princ_str(":;",VV[11]);
T509:;
	bds_bind(VV[14],list(2,VV[21],cadr((V108))));
	setq(VV[6],number_plus(symbol_value(VV[6]),small_fixnum(1)));
	bds_bind(VV[16],make_cons(symbol_value(VV[6]),Cnil));
	bds_bind(VV[17],make_cons((VV[16]->s.s_dbind),symbol_value(VV[17])));
	if(((V104))==Cnil){
	goto T523;}
	{object V124;
	object V125= (V109);
	if(endp(V125)){
	V123= Cnil;
	goto T521;}
	base[5]=V124=MMcons(Cnil,Cnil);
T525:;{object V127;
	V127= symbol_value(VV[19]);
	(V124->c.c_car)= list(3,VV[18],V127,list(2,VV[15],cadr((V125->c.c_car))));}
	if(endp(V125=MMcdr(V125))){
	V123= base[5];
	goto T521;}
	V124=MMcdr(V124)=MMcons(Cnil,Cnil);
	goto T525;}
T523:;
	{object V128;
	object V129= (V109);
	if(endp(V129)){
	V123= Cnil;
	goto T521;}
	base[5]=V128=MMcons(Cnil,Cnil);
T527:;
	(V128->c.c_car)= list(3,VV[18],symbol_value(VV[19]),(V129->c.c_car));
	if(endp(V129=MMcdr(V129))){
	V123= base[5];
	goto T521;}
	V128=MMcdr(V128)=MMcons(Cnil,Cnil);
	goto T527;}
T521:;
	(void)((VFUN_NARGS=3,(*(LnkLI34))((V103),V123,(V110))));
	if((cdr((VV[16]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T515;}
	princ_str("\nT",VV[11]);
	(void)((*(LnkLI32))(car((VV[16]->s.s_dbind))));
	princ_str(":;",VV[11]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T515:;
	if((symbol_value(VV[12]))==Cnil){
	goto T536;}
	princ_str("\n	while(!endp(MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_str(")))",VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_str(");",VV[11]);
	princ_str("\n	if(endp(",VV[11]);
	(void)((*(LnkLI32))(car((V109))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V109))));
	princ_str("))",VV[11]);
	{register object V131;
	object V132;
	V131= cdr((V109));
	V132= car((V131));
T556:;
	if(!(endp((V131)))){
	goto T557;}
	goto T552;
T557:;
	princ_str("||endp(",VV[11]);
	(void)((*(LnkLI32))((V132)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V132)));
	princ_str("))",VV[11]);
	V131= cdr((V131));
	V132= car((V131));
	goto T556;}
T552:;
	princ_str("){",VV[11]);
	goto T534;
T536:;
	princ_str("\n	while(MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_str(")!=Cnil)",VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V108)));
	princ_str(");",VV[11]);
	princ_str("\n	if((",VV[11]);
	(void)((*(LnkLI32))(car((V109))));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))(car((V109))));
	princ_str("))==Cnil",VV[11]);
	{register object V133;
	object V134;
	V133= cdr((V109));
	V134= car((V133));
T591:;
	if(!(endp((V133)))){
	goto T592;}
	goto T587;
T592:;
	princ_str("||(",VV[11]);
	(void)((*(LnkLI32))((V134)));
	princ_str("=MMcdr(",VV[11]);
	(void)((*(LnkLI32))((V134)));
	princ_str("))==Cnil",VV[11]);
	V133= cdr((V133));
	V134= car((V133));
	goto T591;}
T587:;
	princ_str("){",VV[11]);
T534:;
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V107)));
	princ_char(61,VV[11]);
	(void)((*(LnkLI32))((V107)));
	princ_str("->c.c_cdr;",VV[11]);
	(void)((VFUN_NARGS=2,(*(LnkLI33))((V107),VV[13])));
	princ_char(125,VV[11]);
	princ_str("\n	",VV[11]);
	if(type_of((V106))!=t_cons)FEwrong_type_argument(Scons,(V106));
	((V106))->c.c_cdr = Ct;
	princ_str("goto T",VV[11]);
	(void)((*(LnkLI32))(car((V106))));
	princ_char(59,VV[11]);
	princ_char(125,VV[11]);
	{object V135 = (*(LnkLI35))();
	bds_unwind1;
	bds_unwind1;
	VMR10(V135)}}
}
/*	local entry for function PUSH-CHANGED-VARS	*/

static object LI11(V138,V139)

object V138;object V139;
{	 VMB11 VMS11 VMV11
TTL:;
	{register object V140;
	register object V141;
	V140= Cnil;
	V141= make_cons((V139),Cnil);
	{register object V142;
	register object V143;
	V142= (V138);
	V143= car((V142));
T630:;
	if(!(endp((V142)))){
	goto T631;}
	{object V144 = reverse((V140));
	VMR11(V144)}
T631:;
	if(!(type_of((V143))==t_cons)){
	goto T637;}
	if(!((car((V143)))==(VV[22]))){
	goto T637;}
	if(((*(LnkLI36))(cadr((V143)),(V141)))==Cnil){
	goto T637;}
	{register object V145;
	V145= list(2,VV[7],(*(LnkLI28))());
	princ_str("\n	",VV[11]);
	(void)((*(LnkLI32))((V145)));
	princ_str("= ",VV[11]);
	(void)((*(LnkLI32))((V143)));
	princ_char(59,VV[11]);
	V140= make_cons((V145),(V140));
	goto T635;}
T637:;
	V140= make_cons((V143),(V140));
T635:;
	V142= cdr((V142));
	V143= car((V142));
	goto T630;}}
}
static object  LnkTLI36(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[36],&LnkLI36,2,ap);} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI35(){return call_proc0(VV[35],&LnkLI35);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI34(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[34],&LnkLI34,ap);} /* C2FUNCALL */
static object  LnkTLI33(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[33],&LnkLI33,ap);} /* UNWIND-EXIT */
static object  LnkTLI32(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[32],&LnkLI32,1,ap);} /* WT1 */
static object  LnkTLI31(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[31],&LnkLI31,ap);} /* INLINE-ARGS */
static object  LnkTLI30(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[30],&LnkLI30,2,ap);} /* PUSH-CHANGED-VARS */
static object  LnkTLI29(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[29],&LnkLI29,1,ap);} /* SAVE-FUNOB */
static object  LnkTLI28(){return call_proc0(VV[28],&LnkLI28);} /* VS-PUSH */
static object  LnkTLI27(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[27],&LnkLI27,2,ap);} /* C1ARGS */
static LnkT26(){ call_or_link(VV[26],&Lnk26);} /* COPY-INFO */
static object  LnkTLI25(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[25],&LnkLI25,1,ap);} /* C1FUNOB */
static object  LnkTLI24(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[24],&LnkLI24,3,ap);} /* TOO-FEW-ARGS */
static object  LnkTLI23(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[23],&LnkLI23,3,ap);} /* C1MAP-FUNCTIONS */
