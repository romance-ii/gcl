
#include "cmpinclude.h"
#include "cmpif.h"
init_cmpif(){do_init(VV);}
/*	local entry for function C1IF	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
TTL:;
	{register object V3;
	object V4;
	V3= Cnil;
	V4= Cnil;
	if(endp((V2))){
	goto T4;}
	if(!(endp(cdr((V2))))){
	goto T3;}
T4:;
	V5 = make_fixnum(length((V2)));
	(void)((*(LnkLI43))(VV[0],small_fixnum(2),V5));
T3:;
	if(endp(cddr((V2)))){
	goto T8;}
	if(endp(cdddr((V2)))){
	goto T8;}
	V6 = make_fixnum(length((V2)));
	(void)((*(LnkLI44))(VV[0],small_fixnum(3),V6));
T8:;
	V4= (*(LnkLI45))(car((V2)));
	{object V7= (V4);
	if((V7!= Ct))goto T15;
	{object V8 = (*(LnkLI46))(cadr((V2)));
	VMR1(V8)}
T15:;
	if((V7!= Cnil))goto T16;
	if(!(endp(cddr((V2))))){
	goto T18;}
	{object V9 = (*(LnkLI47))();
	VMR1(V9)}
T18:;
	{object V10 = (*(LnkLI46))(caddr((V2)));
	VMR1(V10)}
T16:;
	V3= (VFUN_NARGS=0,(*(LnkLI48))());
	V11= (*(LnkLI49))((V4),(V3));
	V12= (*(LnkLI50))(cadr((V2)),(V3));
	if(!(endp(cddr((V2))))){
	goto T24;}
	V13= (*(LnkLI47))();
	goto T22;
T24:;
	V13= (*(LnkLI50))(caddr((V2)),(V3));
T22:;
	{object V14 = list(5,VV[0],(V3),/* INLINE-ARGS */V11,/* INLINE-ARGS */V12,V13);
	VMR1(V14)}}}
}
/*	local entry for function C1FMLA-CONSTANT	*/

static object LI2(V16)

register object V16;
{	 VMB2 VMS2 VMV2
TTL:;
	{register object V17;
	V17= Cnil;
	if(!(type_of((V16))==t_cons)){
	goto T28;}
	{object V18= car((V16));
	if((V18!= VV[1]))goto T30;
	{register object V19;
	V19= cdr((V16));
T33:;
	if(!(endp((V19)))){
	goto T34;}
	{object V20 = Ct;
	VMR2(V20)}
T34:;
	V17= (*(LnkLI45))(car((V19)));
	{object V21= (V17);
	if((V21!= Ct))goto T41;
	goto T40;
T41:;
	if((V21!= Cnil))goto T42;
	{object V22 = Cnil;
	VMR2(V22)}
T42:;
	if(!(endp(cdr((V19))))){
	goto T44;}
	{object V23 = (V17);
	VMR2(V23)}
T44:;
	{object V24 = listA(3,VV[1],(V17),cdr((V19)));
	VMR2(V24)}}
T40:;
	V19= cdr((V19));
	goto T33;}
T30:;
	if((V18!= VV[2]))goto T49;
	{register object V25;
	V25= cdr((V16));
T52:;
	if(!(endp((V25)))){
	goto T53;}
	{object V26 = Cnil;
	VMR2(V26)}
T53:;
	V17= (*(LnkLI45))(car((V25)));
	{object V27= (V17);
	if((V27!= Ct))goto T60;
	{object V28 = Ct;
	VMR2(V28)}
T60:;
	if((V27!= Cnil))goto T61;
	goto T59;
T61:;
	if(!(endp(cdr((V25))))){
	goto T63;}
	{object V29 = (V17);
	VMR2(V29)}
T63:;
	{object V30 = listA(3,VV[2],(V17),cdr((V25)));
	VMR2(V30)}}
T59:;
	V25= cdr((V25));
	goto T52;}
T49:;
	if((V18!= VV[3])
	&& (V18!= VV[51]))goto T68;
	if(!(endp(cdr((V16))))){
	goto T69;}
	(void)((*(LnkLI43))(VV[3],small_fixnum(1),small_fixnum(0)));
T69:;
	if(endp(cddr((V16)))){
	goto T72;}
	V31 = make_fixnum(length(cdr((V16))));
	(void)((*(LnkLI44))(VV[3],small_fixnum(1),V31));
T72:;
	V17= (*(LnkLI45))(cadr((V16)));
	{object V32= (V17);
	if((V32!= Ct))goto T77;
	{object V33 = Cnil;
	VMR2(V33)}
T77:;
	if((V32!= Cnil))goto T78;
	{object V34 = Ct;
	VMR2(V34)}
T78:;
	{object V35 = list(2,VV[3],(V17));
	VMR2(V35)}}
T68:;
	{object V36 = (V16);
	VMR2(V36)}}
T28:;
	if(!(type_of((V16))==t_symbol)){
	goto T80;}
	base[0]= (V16);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T83;}
	base[0]= (V16);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T87;}
	{object V37 = Ct;
	VMR2(V37)}
T87:;
	{object V38 = Cnil;
	VMR2(V38)}
T83:;
	{object V39 = (V16);
	VMR2(V39)}
T80:;
	{object V40 = Ct;
	VMR2(V40)}}
}
/*	local entry for function C1FMLA	*/

static object LI3(V43,V44)

register object V43;register object V44;
{	 VMB3 VMS3 VMV3
TTL:;
	if(!(type_of((V43))==t_cons)){
	goto T91;}
	{object V45= car((V43));
	if((V45!= VV[1]))goto T93;switch(length(cdr((V43)))){
	case 0:
T95:;
	{object V46 = (*(LnkLI52))();
	VMR3(V46)}
	case 1:
T96:;
	V43= cadr((V43));
	goto TTL;
	default:
T97:;
	{object V48;
	object V49= cdr((V43));
	if(endp(V49)){
	V47= Cnil;
	goto T102;}
	base[0]=V48=MMcons(Cnil,Cnil);
T103:;
	{register object V50;
	V50= (V49->c.c_car);
	(V48->c.c_car)= (*(LnkLI49))((V50),(V44));}
	if(endp(V49=MMcdr(V49))){
	V47= base[0];
	goto T102;}
	V48=MMcdr(V48)=MMcons(Cnil,Cnil);
	goto T103;}
T102:;
	{object V51 = make_cons(VV[4],V47);
	VMR3(V51)}
	{object V52 = Cnil;
	VMR3(V52)}}
	{object V53 = Cnil;
	VMR3(V53)}
T93:;
	if((V45!= VV[2]))goto T105;switch(length(cdr((V43)))){
	case 0:
T107:;
	{object V54 = (*(LnkLI47))();
	VMR3(V54)}
	case 1:
T108:;
	V43= cadr((V43));
	goto TTL;
	default:
T109:;
	{object V56;
	object V57= cdr((V43));
	if(endp(V57)){
	V55= Cnil;
	goto T114;}
	base[0]=V56=MMcons(Cnil,Cnil);
T115:;
	{register object V58;
	V58= (V57->c.c_car);
	(V56->c.c_car)= (*(LnkLI49))((V58),(V44));}
	if(endp(V57=MMcdr(V57))){
	V55= base[0];
	goto T114;}
	V56=MMcdr(V56)=MMcons(Cnil,Cnil);
	goto T115;}
T114:;
	{object V59 = make_cons(VV[5],V55);
	VMR3(V59)}
	{object V60 = Cnil;
	VMR3(V60)}}
	{object V61 = Cnil;
	VMR3(V61)}
T105:;
	if((V45!= VV[3])
	&& (V45!= VV[51]))goto T117;
	if(!(endp(cdr((V43))))){
	goto T118;}
	(void)((*(LnkLI43))(VV[3],small_fixnum(1),small_fixnum(0)));
T118:;
	if(endp(cddr((V43)))){
	goto T121;}
	V62 = make_fixnum(length(cdr((V43))));
	(void)((*(LnkLI44))(VV[3],small_fixnum(1),V62));
T121:;
	{object V63 = list(2,VV[6],(*(LnkLI49))(cadr((V43)),(V44)));
	VMR3(V63)}
T117:;
	V64= list(3,VV[7],VV[8],(V43));
	{object V65 = (*(LnkLI50))(/* INLINE-ARGS */V64,(V44));
	VMR3(V65)}}
T91:;
	{object V66 = (*(LnkLI50))((V43),(V44));
	VMR3(V66)}
}
/*	function definition for C2IF	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	bds_check;
	{object V67;
	object V68;
	object V69;
	check_arg(3);
	V67=(base[0]);
	V68=(base[1]);
	V69=(base[2]);
	vs_top=sup;
TTL:;
	{register object V70;
	register object V71;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V70= make_cons(symbol_value(VV[9]),Cnil);
	V71= Cnil;
	if(!((car((V69)))==(VV[10]))){
	goto T128;}
	if((caddr((V69)))!=Cnil){
	goto T128;}
	if(!((symbol_value(VV[11]))==(VV[12]))){
	goto T128;}
	if((symbol_value(VV[13]))==(VV[14])){
	goto T128;}
	{object V72;
	V72= symbol_value(VV[13]);
	base[4]= make_cons((V70),symbol_value(VV[15]));
	bds_bind(VV[15],base[4]);
	bds_bind(VV[13],(V70));
	V73= (*(LnkLI53))((V67),(V70),(V72));
	bds_unwind1;
	bds_unwind1;}
	if((cdr((V70)))==Cnil){
	goto T139;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V70))));
	princ_str(":;",VV[16]);
T139:;
	base[4]= (V68);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk55)();
	return;
T128:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V71= make_cons(symbol_value(VV[9]),Cnil);
	base[4]= listA(3,(V71),(V70),symbol_value(VV[15]));
	bds_bind(VV[15],base[4]);
	bds_bind(VV[13],(V70));
	V74= (*(LnkLI53))((V67),(V70),(V71));
	bds_unwind1;
	bds_unwind1;
	if((cdr((V70)))==Cnil){
	goto T151;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V70))));
	princ_str(":;",VV[16]);
T151:;
	base[4]= make_cons(VV[17],symbol_value(VV[15]));
	bds_bind(VV[15],base[4]);
	base[5]= (V68);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk55)();
	vs_top=sup;
	bds_unwind1;
	if((cdr((V71)))==Cnil){
	goto T160;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V71))));
	princ_str(":;",VV[16]);
T160:;
	base[4]= (V69);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk55)();
	return;}
	}
}
/*	local entry for function CJT	*/

static object LI5(V78,V79,V80)

object V78;object V79;object V80;
{	 VMB5 VMS5 VMV5
	bds_check;
TTL:;
	{object V81= car((V78));
	if((V81!= VV[4]))goto T167;
	{register object V82;
	V82= cdr((V78));
T170:;
	if(!(endp(cdr((V82))))){
	goto T171;}
	V78= car((V82));
	goto TTL;
T171:;
	{register object V83;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V83= make_cons(symbol_value(VV[9]),Cnil);
	bds_bind(VV[15],make_cons((V83),symbol_value(VV[15])));
	(void)((*(LnkLI53))(car((V82)),(V83),(V80)));
	if((cdr((V83)))==Cnil){
	bds_unwind1;
	goto T179;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V83))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
T179:;
	V82= cdr((V82));
	goto T170;}
T167:;
	if((V81!= VV[5]))goto T192;
	{register object V84;
	V84= cdr((V78));
T195:;
	if(!(endp(cdr((V84))))){
	goto T196;}
	V78= car((V84));
	goto TTL;
T196:;
	{register object V85;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V85= make_cons(symbol_value(VV[9]),Cnil);
	bds_bind(VV[15],make_cons((V85),symbol_value(VV[15])));
	(void)((*(LnkLI56))(car((V84)),(V79),(V85)));
	if((cdr((V85)))==Cnil){
	bds_unwind1;
	goto T204;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V85))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
T204:;
	V84= cdr((V84));
	goto T195;}
T192:;
	if((V81!= VV[6]))goto T217;
	{object V86 = (*(LnkLI53))(cadr((V78)),(V80),(V79));
	VMR5(V86)}
T217:;
	if((V81!= VV[10]))goto T218;
	{object V87= caddr((V78));
	if((V87!= Ct))goto T219;
	(void)((*(LnkLI57))((V79)));
	princ_str("\n	",VV[16]);
	if(type_of((V79))!=t_cons)FEwrong_type_argument(Scons,(V79));
	((V79))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(car((V79))));
	princ_char(59,VV[16]);
	{object V88 = Cnil;
	VMR5(V88)}
T219:;
	if((V87!= Cnil))goto T226;
	{object V89 = Cnil;
	VMR5(V89)}
T226:;
	base[0]= list(2,VV[18],(V79));
	bds_bind(VV[11],base[0]);
	{object V90 = (*(LnkLI58))((V78));
	bds_unwind1;
	VMR5(V90)}}
T218:;
	base[0]= list(2,VV[18],(V79));
	bds_bind(VV[11],base[0]);
	{object V91 = (*(LnkLI58))((V78));
	bds_unwind1;
	VMR5(V91)}}
}
/*	local entry for function CJF	*/

static object LI6(V95,V96,V97)

object V95;object V96;object V97;
{	 VMB6 VMS6 VMV6
	bds_check;
TTL:;
	{object V98= car((V95));
	if((V98!= VV[4]))goto T229;
	{register object V99;
	V99= cdr((V95));
T232:;
	if(!(endp(cdr((V99))))){
	goto T233;}
	V95= car((V99));
	goto TTL;
T233:;
	{register object V100;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V100= make_cons(symbol_value(VV[9]),Cnil);
	bds_bind(VV[15],make_cons((V100),symbol_value(VV[15])));
	(void)((*(LnkLI53))(car((V99)),(V100),(V97)));
	if((cdr((V100)))==Cnil){
	bds_unwind1;
	goto T241;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V100))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
T241:;
	V99= cdr((V99));
	goto T232;}
T229:;
	if((V98!= VV[5]))goto T254;
	{register object V101;
	V101= cdr((V95));
T257:;
	if(!(endp(cdr((V101))))){
	goto T258;}
	V95= car((V101));
	goto TTL;
T258:;
	{register object V102;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V102= make_cons(symbol_value(VV[9]),Cnil);
	bds_bind(VV[15],make_cons((V102),symbol_value(VV[15])));
	(void)((*(LnkLI56))(car((V101)),(V96),(V102)));
	if((cdr((V102)))==Cnil){
	bds_unwind1;
	goto T266;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V102))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
T266:;
	V101= cdr((V101));
	goto T257;}
T254:;
	if((V98!= VV[6]))goto T279;
	{object V103 = (*(LnkLI56))(cadr((V95)),(V97),(V96));
	VMR6(V103)}
T279:;
	if((V98!= VV[10]))goto T280;
	{object V104= caddr((V95));
	if((V104!= Ct))goto T281;
	{object V105 = Cnil;
	VMR6(V105)}
T281:;
	if((V104!= Cnil))goto T282;
	(void)((*(LnkLI57))((V97)));
	princ_str("\n	",VV[16]);
	if(type_of((V97))!=t_cons)FEwrong_type_argument(Scons,(V97));
	((V97))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(car((V97))));
	princ_char(59,VV[16]);
	{object V106 = Cnil;
	VMR6(V106)}
T282:;
	base[0]= list(2,VV[19],(V97));
	bds_bind(VV[11],base[0]);
	{object V107 = (*(LnkLI58))((V95));
	bds_unwind1;
	VMR6(V107)}}
T280:;
	base[0]= list(2,VV[19],(V97));
	bds_bind(VV[11],base[0]);
	{object V108 = (*(LnkLI58))((V95));
	bds_unwind1;
	VMR6(V108)}}
}
/*	local entry for function C1AND	*/

static object LI7(V110)

register object V110;
{	 VMB7 VMS7 VMV7
TTL:;
	if(!(endp((V110)))){
	goto T292;}
	{object V111 = (*(LnkLI52))();
	VMR7(V111)}
T292:;
	if(!(endp(cdr((V110))))){
	goto T295;}
	{object V112 = (*(LnkLI46))(car((V110)));
	VMR7(V112)}
T295:;
	{object V113;
	V113= (VFUN_NARGS=0,(*(LnkLI48))());
	{object V114 = list(3,VV[1],(V113),(*(LnkLI59))((V110),(V113)));
	VMR7(V114)}}
}
/*	function definition for C2AND	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	bds_check;
	{object V115;
	check_arg(1);
	V115=(base[0]);
	vs_top=sup;
TTL:;
	{register object V116;
	V116= (V115);
T299:;
	if(!(endp(cdr((V116))))){
	goto T300;}
	base[1]= car((V116));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk55)();
	return;
T300:;
	if(!((caar((V116)))==(VV[10]))){
	goto T307;}
	{object V117= caddar((V116));
	if((V117!= Ct))goto T309;
	goto T305;
T309:;
	if((V117!= Cnil))goto T310;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	goto T305;
T310:;
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI54))(caddar((V116))));
	princ_str("==Cnil){",VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	princ_char(125,VV[16]);
	goto T305;}
T307:;
	if(!((caar((V116)))==(VV[20]))){
	goto T318;}
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI61))(car(caddar((V116))),cadr(caddar((V116)))));
	princ_str("==Cnil){",VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	princ_char(125,VV[16]);
	goto T305;
T318:;
	{register object V118;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V118= make_cons(symbol_value(VV[9]),Cnil);
	bds_bind(VV[15],make_cons((V118),symbol_value(VV[15])));
	base[3]= list(2,VV[18],(V118));
	bds_bind(VV[11],base[3]);
	V119= (*(LnkLI58))(car((V116)));
	bds_unwind1;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	if((cdr((V118)))==Cnil){
	bds_unwind1;
	goto T305;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V118))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
T305:;
	V116= cdr((V116));
	goto T299;}
	}
}
/*	local entry for function C1OR	*/

static object LI9(V121)

register object V121;
{	 VMB9 VMS9 VMV9
TTL:;
	if(!(endp((V121)))){
	goto T342;}
	{object V122 = (*(LnkLI47))();
	VMR9(V122)}
T342:;
	if(!(endp(cdr((V121))))){
	goto T345;}
	{object V123 = (*(LnkLI46))(car((V121)));
	VMR9(V123)}
T345:;
	{object V124;
	V124= (VFUN_NARGS=0,(*(LnkLI48))());
	{object V125 = list(3,VV[2],(V124),(*(LnkLI59))((V121),(V124)));
	VMR9(V125)}}
}
/*	function definition for C2OR	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	bds_check;
	{object V126;
	check_arg(1);
	V126=(base[0]);
	vs_top=sup;
TTL:;
	{object V127;
	bds_bind(VV[21],symbol_value(VV[21]));
	V127= Cnil;
	{register object V128;
	V128= (V126);
T350:;
	if(!(endp(cdr((V128))))){
	goto T351;}
	base[2]= car((V128));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk55)();
	bds_unwind1;
	return;
T351:;
	if(!((caar((V128)))==(VV[10]))){
	goto T358;}
	{object V129= caddar((V128));
	if((V129!= Ct))goto T360;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Ct,VV[17])));
	goto T356;
T360:;
	if((V129!= Cnil))goto T361;
	goto T356;
T361:;
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI54))(caddar((V128))));
	princ_str("!=Cnil){",VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))(caddar((V128)),VV[17])));
	princ_char(125,VV[16]);
	goto T356;}
T358:;
	if(!((caar((V128)))==(VV[20]))){
	goto T369;}
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI61))(car(caddar((V128))),cadr(caddar((V128)))));
	princ_str("!=Cnil){",VV[16]);
	V130= make_cons(VV[20],caddar((V128)));
	(void)((VFUN_NARGS=2,(*(LnkLI60))(/* INLINE-ARGS */V130,VV[17])));
	princ_char(125,VV[16]);
	goto T356;
T369:;
	if(!((caar((V128)))==(VV[22]))){
	goto T379;}
	if((get(caddar((V128)),VV[23],Cnil))==Cnil){
	goto T379;}
	{register object V131;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V131= make_cons(symbol_value(VV[9]),Cnil);
	bds_bind(VV[15],make_cons((V131),symbol_value(VV[15])));
	base[4]= list(2,VV[19],(V131));
	bds_bind(VV[11],base[4]);
	V132= (*(LnkLI58))(car((V128)));
	bds_unwind1;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Ct,VV[17])));
	if((cdr((V131)))==Cnil){
	bds_unwind1;
	goto T356;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V131))));
	princ_str(":;",VV[16]);
	bds_unwind1;
	goto T356;}
T379:;
	{register object V133;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V133= make_cons(symbol_value(VV[9]),Cnil);
	bds_bind(VV[24],small_fixnum(0));
	bds_bind(VV[15],make_cons((V133),symbol_value(VV[15])));
	V127= (*(LnkLI62))();
	bds_bind(VV[11],(V127));
	V134= (*(LnkLI58))(car((V128)));
	bds_unwind1;
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI54))((V127)));
	princ_str("==Cnil)",VV[16]);
	if(type_of((V133))!=t_cons)FEwrong_type_argument(Scons,(V133));
	((V133))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(car((V133))));
	princ_char(59,VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))((V127),VV[17])));
	if((cdr((V133)))==Cnil){
	goto T410;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V133))));
	princ_str(":;",VV[16]);
T410:;
	V135= (*(LnkLI63))();
	bds_unwind1;
	bds_unwind1;}
T356:;
	V128= cdr((V128));
	goto T350;}}
	}
}
/*	local entry for function SET-JUMP-TRUE	*/

static object LI11(V138,V139)

register object V138;object V139;
{	 VMB11 VMS11 VMV11
TTL:;
	if(((V138))==Cnil){
	goto T420;}
	{object V140;
	V140= (((V138))==(Ct)?Ct:Cnil);
	if(((V140))==Cnil){
	goto T425;}
	goto T422;
T425:;
	if(!(type_of((V138))==t_cons)){
	goto T428;}
	if(!((car((V138)))==(VV[25]))){
	goto T428;}
	princ_str("\n	if(",VV[16]);
	base[0]= caddr((V138));
	base[1]= cadddr((V138));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk64)();
	vs_top=sup;
	princ_char(41,VV[16]);
	goto T422;
T428:;
	princ_str("\n	if((",VV[16]);
	(void)((*(LnkLI54))((V138)));
	princ_str(")!=Cnil)",VV[16]);}
T422:;
	if(((V138))==(Ct)){
	goto T441;}
	princ_char(123,VV[16]);
T441:;
	(void)((*(LnkLI57))((V139)));
	princ_str("\n	",VV[16]);
	if(type_of((V139))!=t_cons)FEwrong_type_argument(Scons,(V139));
	((V139))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(car((V139))));
	princ_char(59,VV[16]);
	if(((V138))==(Ct)){
	goto T453;}
	princ_char(125,VV[16]);
	{object V141 = Cnil;
	VMR11(V141)}
T453:;
	{object V142 = Cnil;
	VMR11(V142)}
T420:;
	{object V143 = Cnil;
	VMR11(V143)}
}
/*	local entry for function SET-JUMP-FALSE	*/

static object LI12(V146,V147)

register object V146;object V147;
{	 VMB12 VMS12 VMV12
TTL:;
	if(((V146))==(Ct)){
	goto T457;}
	{object V148;
	V148= (((V146))==Cnil?Ct:Cnil);
	if(((V148))==Cnil){
	goto T462;}
	goto T459;
T462:;
	if(!(type_of((V146))==t_cons)){
	goto T465;}
	if(!((car((V146)))==(VV[25]))){
	goto T465;}
	princ_str("\n	if(!(",VV[16]);
	base[0]= caddr((V146));
	base[1]= cadddr((V146));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk64)();
	vs_top=sup;
	princ_str("))",VV[16]);
	goto T459;
T465:;
	princ_str("\n	if((",VV[16]);
	(void)((*(LnkLI54))((V146)));
	princ_str(")==Cnil)",VV[16]);}
T459:;
	if(((V146))==Cnil){
	goto T478;}
	princ_char(123,VV[16]);
T478:;
	(void)((*(LnkLI57))((V147)));
	princ_str("\n	",VV[16]);
	if(type_of((V147))!=t_cons)FEwrong_type_argument(Scons,(V147));
	((V147))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(car((V147))));
	princ_char(59,VV[16]);
	if(((V146))==Cnil){
	goto T490;}
	princ_char(125,VV[16]);
	{object V149 = Cnil;
	VMR12(V149)}
T490:;
	{object V150 = Cnil;
	VMR12(V150)}
T457:;
	{object V151 = Cnil;
	VMR12(V151)}
}
/*	local entry for function C1ECASE	*/

static object LI13(V153)

object V153;
{	 VMB13 VMS13 VMV13
TTL:;
	{object V154 = (VFUN_NARGS=2,(*(LnkLI65))((V153),Ct));
	VMR13(V154)}
}
/*	local entry for function CONVERT-CASE-TO-SWITCH	*/

static object LI14(V157,V158)

object V157;object V158;
{	 VMB14 VMS14 VMV14
TTL:;
	{object V159;
	register object V160;
	register object V161;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V159= vs_base[0];
	V160= Cnil;
	V161= Cnil;
	{register object V162;
	register object V163;
	V162= cdr((V157));
	V163= car((V162));
T498:;
	if(!(endp((V162)))){
	goto T499;}
	goto T494;
T499:;
	if(!(type_of(car((V163)))==t_fixnum)){
	goto T505;}
	V160= make_cons(car((V163)),(V160));
	goto T503;
T505:;
	if(!(type_of(car((V163)))==t_cons)){
	goto T509;}
	{register object V164;
	register object V165;
	V164= car((V163));
	V165= car((V164));
T514:;
	if(!(endp((V164)))){
	goto T515;}
	goto T503;
T515:;
	V160= make_cons((V165),(V160));
	V164= cdr((V164));
	V165= car((V164));
	goto T514;}
T509:;
	{register object x= car((V163)),V166= VV[26];
	while(!endp(V166))
	if(eql(x,V166->c.c_car)){
	goto T527;
	}else V166=V166->c.c_cdr;
	goto T503;}
T527:;
	if((V158)==Cnil){
	goto T528;}
	base[2]= VV[27];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk66)();
	vs_top=sup;
T528:;
	V160= make_cons(Ct,(V160));
T503:;
	V167= list(3,VV[28],(V159),make_cons(VV[29],cdr((V163))));
	V160= make_cons(/* INLINE-ARGS */V167,(V160));
	V162= cdr((V162));
	V163= car((V162));
	goto T498;}
T494:;
	if(((V158))==Cnil){
	goto T538;}
	V160= make_cons(Ct,(V160));
	{register object V168;
	object V169;
	V168= cdr((V157));
	V169= car((V168));
T547:;
	if(!(endp((V168)))){
	goto T548;}
	goto T543;
T548:;
	if(!(type_of(car((V169)))!=t_cons)){
	goto T554;}
	V161= make_cons(car((V169)),(V161));
	goto T552;
T554:;
	V161= append(car((V169)),(V161));
T552:;
	V168= cdr((V168));
	V169= car((V168));
	goto T547;}
T543:;
	V170= car((V157));
	V171= list(4,VV[30],VV[31],/* INLINE-ARGS */V170,list(2,VV[32],(V161)));
	V160= make_cons(/* INLINE-ARGS */V171,(V160));
T538:;
	V172= car((V157));
	{object V173 = list(3,VV[33],(V159),listA(3,VV[34],/* INLINE-ARGS */V172,nreverse((V160))));
	VMR14(V173)}}
}
/*	local entry for function C1CASE	*/

static object LI15(V174,va_alist)
	object V174;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V175;
	register object V176;
	if(narg <1) too_few_arguments();
	V175= V174;
	narg = narg - 1;
	if (narg <= 0) goto T564;
	else {
	va_start(ap);
	V176= va_arg(ap,object);}
	--narg; goto T565;
T564:;
	V176= Cnil;
T565:;
	if(!(endp((V175)))){
	goto T567;}
	(void)((*(LnkLI43))(VV[35],small_fixnum(1),small_fixnum(0)));
T567:;
	{register object V177;
	object V178;
	object V179;
	V177= (VFUN_NARGS=0,(*(LnkLI48))());
	V178= (*(LnkLI50))(car((V175)),(V177));
	V179= Cnil;
	base[2]= structure_ref(cadr((V178)),VV[36],2);
	base[3]= VV[37];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk67)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T573;}
	V180= (*(LnkLI68))((V175),(V176));
	{object V181 = (*(LnkLI46))(/* INLINE-ARGS */V180);
	VMR15(V181)}
T573:;
	{register object V182;
	register object V183;
	V182= cdr((V175));
	V183= car((V182));
T582:;
	if(!(endp((V182)))){
	goto T583;}
	goto T578;
T583:;
	if(!(endp((V183)))){
	goto T587;}
	(void)((VFUN_NARGS=2,(*(LnkLI69))(VV[38],(V183))));
T587:;
	{object V184= car((V183));
	if((V184!= Cnil))goto T591;
	goto T590;
T591:;
	if((V184!= Ct)
	&& (V184!= VV[70]))goto T592;
	if(((V176))==Cnil){
	goto T593;}
	if(!(((V176))==(Ct))){
	goto T598;}
	V185= VV[39];
	goto T596;
T598:;
	V185= VV[40];
T596:;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(V185)));
T593:;
	V176= (*(LnkLI71))(cdr((V183)));
	(void)((*(LnkLI72))((V177),cadr((V176))));
	goto T590;
T592:;
	{object V186;
	register object V187;
	if(!(type_of(car((V183)))==t_cons)){
	goto T604;}
	{object V188;
	object V189= car((V183));
	if(endp(V189)){
	V186= Cnil;
	goto T602;}
	base[6]=V188=MMcons(Cnil,Cnil);
T606:;
	{register object V190;
	V190= (V189->c.c_car);
	if(!(type_of((V190))==t_symbol)){
	goto T609;}
	(V188->c.c_car)= (V190);
	goto T607;
T609:;
	(V188->c.c_car)= (*(LnkLI73))((V190));}
T607:;
	if(endp(V189=MMcdr(V189))){
	V186= base[6];
	goto T602;}
	V188=MMcdr(V188)=MMcons(Cnil,Cnil);
	goto T606;}
T604:;
	if(!(type_of(car((V183)))==t_symbol)){
	goto T612;}
	V186= make_cons(car((V183)),Cnil);
	goto T602;
T612:;
	V191= (*(LnkLI73))(car((V183)));
	V186= make_cons(/* INLINE-ARGS */V191,Cnil);
T602:;
	V187= (*(LnkLI71))(cdr((V183)));
	(void)((*(LnkLI72))((V177),cadr((V187))));
	V192= make_cons((V186),(V187));
	V179= make_cons(/* INLINE-ARGS */V192,(V179));}}
T590:;
	V182= cdr((V182));
	V183= car((V182));
	goto T582;}
T578:;
	V193= reverse((V179));
	if((V176)!=Cnil){
	V194= (V176);
	goto T622;}
	V194= (*(LnkLI47))();
T622:;
	{object V195 = list(5,VV[35],(V177),(V178),/* INLINE-ARGS */V193,V194);
	VMR15(V195)}}}
	}
/*	local entry for function C2CASE	*/

static object LI16(V199,V200,V201)

object V199;object V200;object V201;
{	 VMB16 VMS16 VMV16
	bds_check;
TTL:;
	{register object V202;
	setq(VV[41],number_plus(symbol_value(VV[41]),small_fixnum(1)));
	V202= symbol_value(VV[41]);
	bds_bind(VV[21],symbol_value(VV[21]));
	bds_bind(VV[24],small_fixnum(0));
	V203= make_cons((V199),Cnil);
	V204= (VFUN_NARGS=2,(*(LnkLI74))(/* INLINE-ARGS */V203,VV[42]));
	V199= car(/* INLINE-ARGS */V204);
	princ_str("\n	{object V",VV[16]);
	(void)((*(LnkLI54))((V202)));
	princ_str("= ",VV[16]);
	(void)((*(LnkLI54))((V199)));
	princ_char(59,VV[16]);
	{object V205;
	object V206;
	V205= (V200);
	V206= car((V205));
T637:;
	if(!(endp((V205)))){
	goto T638;}
	goto T633;
T638:;
	{object V207;
	register object V208;
	register object V209;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V207= make_cons(symbol_value(VV[9]),Cnil);
	V208= car((V206));
	V209= Cnil;
T649:;
	if(!((length((V208)))<=(5))){
	goto T650;}
	goto T647;
T650:;
	if(((V209))!=Cnil){
	goto T654;}
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	V209= make_cons(symbol_value(VV[9]),Cnil);
T654:;
	princ_str("\n	if(",VV[16]);
	{register object V211;
	V211= small_fixnum(0);
T664:;
	if(!(number_compare((V211),small_fixnum(5))>=0)){
	goto T665;}
	goto T661;
T665:;
	if(!(type_of(car((V208)))==t_symbol)){
	goto T671;}
	princ_str("(V",VV[16]);
	(void)((*(LnkLI54))((V202)));
	princ_str("== ",VV[16]);
	{object V212= car((V208));
	if((V212!= Ct))goto T678;
	princ_str("Ct",VV[16]);
	goto T677;
T678:;
	if((V212!= Cnil))goto T680;
	princ_str("Cnil",VV[16]);
	goto T677;
T680:;
	princ_str("VV[",VV[16]);
	V213= (*(LnkLI75))(car((V208)));
	(void)((*(LnkLI54))(/* INLINE-ARGS */V213));
	princ_char(93,VV[16]);}
T677:;
	princ_char(41,VV[16]);
	goto T669;
T671:;
	princ_str("eql(V",VV[16]);
	(void)((*(LnkLI54))((V202)));
	princ_str(",VV[",VV[16]);
	(void)((*(LnkLI54))(car((V208))));
	princ_str("])",VV[16]);
T669:;
	if(!(number_compare((V211),small_fixnum(4))<0)){
	goto T691;}
	princ_str("\n	|| ",VV[16]);
T691:;
	{object V214;
	V214= car((V208));
	V208= cdr((V208));}
	V211= one_plus((V211));
	goto T664;}
T661:;
	princ_char(41,VV[16]);
	if(type_of((V209))!=t_cons)FEwrong_type_argument(Scons,(V209));
	((V209))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(car((V209))));
	princ_char(59,VV[16]);
	goto T649;
T647:;
	princ_str("\n	if(",VV[16]);
T715:;
	if(!(endp((V208)))){
	goto T716;}
	goto T713;
T716:;
	if(!(type_of(car((V208)))==t_symbol)){
	goto T722;}
	princ_str("(V",VV[16]);
	(void)((*(LnkLI54))((V202)));
	princ_str("!= ",VV[16]);
	{object V215= car((V208));
	if((V215!= Ct))goto T729;
	princ_str("Ct",VV[16]);
	goto T728;
T729:;
	if((V215!= Cnil))goto T731;
	princ_str("Cnil",VV[16]);
	goto T728;
T731:;
	princ_str("VV[",VV[16]);
	V216= (*(LnkLI75))(car((V208)));
	(void)((*(LnkLI54))(/* INLINE-ARGS */V216));
	princ_char(93,VV[16]);}
T728:;
	princ_char(41,VV[16]);
	goto T720;
T722:;
	princ_str("!eql(V",VV[16]);
	(void)((*(LnkLI54))((V202)));
	princ_str(",VV[",VV[16]);
	(void)((*(LnkLI54))(car((V208))));
	princ_str("])",VV[16]);
T720:;
	if(endp(cdr((V208)))){
	goto T742;}
	princ_str("\n	&& ",VV[16]);
T742:;
	{object V217;
	V217= car((V208));
	V208= cdr((V208));}
	goto T715;
T713:;
	princ_char(41,VV[16]);
	if(type_of((V207))!=t_cons)FEwrong_type_argument(Scons,(V207));
	((V207))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(car((V207))));
	princ_char(59,VV[16]);
	if(((V209))==Cnil){
	goto T759;}
	if((cdr((V209)))==Cnil){
	goto T759;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V209))));
	princ_str(":;",VV[16]);
T759:;
	base[6]= make_cons(VV[17],symbol_value(VV[15]));
	bds_bind(VV[15],base[6]);
	base[7]= cdr((V206));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk55)();
	vs_top=sup;
	bds_unwind1;
	if((cdr((V207)))==Cnil){
	goto T642;}
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(car((V207))));
	princ_str(":;",VV[16]);}
T642:;
	V205= cdr((V205));
	V206= car((V205));
	goto T637;}
T633:;
	if(!(((V201))==(Ct))){
	goto T782;}
	princ_str("\n	FEerror(\"The ECASE key value ~s is illegal.\",1,V",VV[16]);
	(void)((*(LnkLI54))((V202)));
	princ_str(");",VV[16]);
	goto T780;
T782:;
	base[3]= (V201);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk55)();
	vs_top=sup;
T780:;
	princ_char(125,VV[16]);
	{object V218 = (*(LnkLI63))();
	bds_unwind1;
	bds_unwind1;
	VMR16(V218)}}
}
static object  LnkTLI75(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[75],&LnkLI75,1,ap);} /* ADD-SYMBOL */
static object  LnkTLI74(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[74],&LnkLI74,ap);} /* INLINE-ARGS */
static object  LnkTLI73(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[73],&LnkLI73,1,ap);} /* ADD-OBJECT */
static object  LnkTLI72(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[72],&LnkLI72,2,ap);} /* ADD-INFO */
static object  LnkTLI71(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[71],&LnkLI71,1,ap);} /* C1PROGN */
static object  LnkTLI69(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[69],&LnkLI69,ap);} /* CMPERR */
static object  LnkTLI68(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[68],&LnkLI68,2,ap);} /* CONVERT-CASE-TO-SWITCH */
static LnkT67(){ call_or_link(VV[67],&Lnk67);} /* SUBTYPEP */
static LnkT66(){ call_or_link(VV[66],&Lnk66);} /* CMPERROR */
static object  LnkTLI65(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[65],&LnkLI65,ap);} /* C1CASE */
static LnkT64(){ call_or_link(VV[64],&Lnk64);} /* WT-INLINE-LOC */
static object  LnkTLI63(){return call_proc0(VV[63],&LnkLI63);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI62(){return call_proc0(VV[62],&LnkLI62);} /* WT-C-PUSH */
static object  LnkTLI61(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[61],&LnkLI61,2,ap);} /* WT-VAR */
static object  LnkTLI60(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[60],&LnkLI60,ap);} /* UNWIND-EXIT */
static object  LnkTLI59(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[59],&LnkLI59,2,ap);} /* C1ARGS */
static object  LnkTLI58(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[58],&LnkLI58,1,ap);} /* C2EXPR* */
static object  LnkTLI57(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[57],&LnkLI57,1,ap);} /* UNWIND-NO-EXIT */
static object  LnkTLI56(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[56],&LnkLI56,3,ap);} /* CJT */
static LnkT55(){ call_or_link(VV[55],&Lnk55);} /* C2EXPR */
static object  LnkTLI54(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[54],&LnkLI54,1,ap);} /* WT1 */
static object  LnkTLI53(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[53],&LnkLI53,3,ap);} /* CJF */
static object  LnkTLI52(){return call_proc0(VV[52],&LnkLI52);} /* C1T */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[50],&LnkLI50,2,ap);} /* C1EXPR* */
static object  LnkTLI49(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[49],&LnkLI49,2,ap);} /* C1FMLA */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[48],&LnkLI48,ap);} /* MAKE-INFO */
static object  LnkTLI47(){return call_proc0(VV[47],&LnkLI47);} /* C1NIL */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],&LnkLI46,1,ap);} /* C1EXPR */
static object  LnkTLI45(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[45],&LnkLI45,1,ap);} /* C1FMLA-CONSTANT */
static object  LnkTLI44(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[44],&LnkLI44,3,ap);} /* TOO-MANY-ARGS */
static object  LnkTLI43(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[43],&LnkLI43,3,ap);} /* TOO-FEW-ARGS */
