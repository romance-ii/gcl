
#include "cmpinclude.h"
#include "gcl_cmpif.h"
void init_gcl_cmpif(){do_init(VV);}
/*	local entry for function C1IF	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{register object V3;
	object V4;
	V3= Cnil;
	V4= Cnil;
	if(((V2))==Cnil){
	goto T4;}
	if(!((CMPcdr((V2)))==Cnil)){
	goto T3;}
	goto T4;
T4:;
	V5 = CMPmake_fixnum((long)length((V2)));
	(void)((*(LnkLI43))(VV[0],small_fixnum(2),V5));
	goto T3;
T3:;
	if((CMPcddr((V2)))==Cnil){
	goto T8;}
	if((CMPcdddr((V2)))==Cnil){
	goto T8;}
	V6 = CMPmake_fixnum((long)length((V2)));
	(void)((*(LnkLI44))(VV[0],small_fixnum(3),V6));
	goto T8;
T8:;
	V4= (*(LnkLI45))(CMPcar((V2)));
	{object V7= (V4);
	if((V7!= Ct))goto T15;
	{object V8 = (*(LnkLI46))(CMPcadr((V2)));
	VMR1(V8)}
	goto T15;
T15:;
	if((V7!= Cnil))goto T16;
	if(!((CMPcddr((V2)))==Cnil)){
	goto T18;}
	{object V9 = (*(LnkLI47))();
	VMR1(V9)}
	goto T18;
T18:;
	{object V10 = (*(LnkLI46))(CMPcaddr((V2)));
	VMR1(V10)}
	goto T16;
T16:;
	V3= (VFUN_NARGS=0,(*(LnkLI48))());
	V11= (*(LnkLI49))((V4),(V3));
	V12= (*(LnkLI50))(CMPcadr((V2)),(V3));
	if(!((CMPcddr((V2)))==Cnil)){
	goto T24;}
	V13= (*(LnkLI47))();
	goto T22;
	goto T24;
T24:;
	V13= (*(LnkLI50))(CMPcaddr((V2)),(V3));
	goto T22;
T22:;
	{object V14 = list(5,VV[0],(V3),/* INLINE-ARGS */V11,/* INLINE-ARGS */V12,V13);
	VMR1(V14)}}}
	return Cnil;
}
/*	local entry for function C1FMLA-CONSTANT	*/

static object LI2(V16)

register object V16;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{register object V17;
	V17= Cnil;
	if(!(type_of((V16))==t_cons)){
	goto T28;}
	{object V18= CMPcar((V16));
	if((V18!= VV[1]))goto T30;
	{register object V19;
	V19= CMPcdr((V16));
	goto T33;
T33:;
	if(!(((V19))==Cnil)){
	goto T34;}
	{object V20 = Ct;
	VMR2(V20)}
	goto T34;
T34:;
	V17= (*(LnkLI45))(CMPcar((V19)));
	{object V21= (V17);
	if((V21!= Ct))goto T41;
	goto T40;
	goto T41;
T41:;
	if((V21!= Cnil))goto T42;
	{object V22 = Cnil;
	VMR2(V22)}
	goto T42;
T42:;
	if(!((CMPcdr((V19)))==Cnil)){
	goto T44;}
	{object V23 = (V17);
	VMR2(V23)}
	goto T44;
T44:;
	{object V24 = listA(3,VV[1],(V17),CMPcdr((V19)));
	VMR2(V24)}}
	goto T40;
T40:;
	V19= CMPcdr((V19));
	goto T33;}
	goto T30;
T30:;
	if((V18!= VV[2]))goto T49;
	{register object V25;
	V25= CMPcdr((V16));
	goto T52;
T52:;
	if(!(((V25))==Cnil)){
	goto T53;}
	{object V26 = Cnil;
	VMR2(V26)}
	goto T53;
T53:;
	V17= (*(LnkLI45))(CMPcar((V25)));
	{object V27= (V17);
	if((V27!= Ct))goto T60;
	{object V28 = Ct;
	VMR2(V28)}
	goto T60;
T60:;
	if((V27!= Cnil))goto T61;
	goto T59;
	goto T61;
T61:;
	if(!((CMPcdr((V25)))==Cnil)){
	goto T63;}
	{object V29 = (V17);
	VMR2(V29)}
	goto T63;
T63:;
	{object V30 = listA(3,VV[2],(V17),CMPcdr((V25)));
	VMR2(V30)}}
	goto T59;
T59:;
	V25= CMPcdr((V25));
	goto T52;}
	goto T49;
T49:;
	if((V18!= VV[3])
	&& (V18!= VV[51]))goto T68;
	if(!((CMPcdr((V16)))==Cnil)){
	goto T69;}
	(void)((*(LnkLI43))(VV[3],small_fixnum(1),small_fixnum(0)));
	goto T69;
T69:;
	if((CMPcddr((V16)))==Cnil){
	goto T72;}
	V31 = CMPmake_fixnum((long)length(CMPcdr((V16))));
	(void)((*(LnkLI44))(VV[3],small_fixnum(1),V31));
	goto T72;
T72:;
	V17= (*(LnkLI45))(CMPcadr((V16)));
	{object V32= (V17);
	if((V32!= Ct))goto T77;
	{object V33 = Cnil;
	VMR2(V33)}
	goto T77;
T77:;
	if((V32!= Cnil))goto T78;
	{object V34 = Ct;
	VMR2(V34)}
	goto T78;
T78:;
	{object V35 = list(2,VV[3],(V17));
	VMR2(V35)}}
	goto T68;
T68:;
	{object V36 = (V16);
	VMR2(V36)}}
	goto T28;
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
	goto T87;
T87:;
	{object V38 = Cnil;
	VMR2(V38)}
	goto T83;
T83:;
	{object V39 = (V16);
	VMR2(V39)}
	goto T80;
T80:;
	{object V40 = Ct;
	VMR2(V40)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1FMLA	*/

static object LI3(V43,V44)

register object V43;register object V44;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V43))==t_cons)){
	goto T91;}
	{object V45= CMPcar((V43));
	if((V45!= VV[1]))goto T93;switch((long)length(CMPcdr((V43)))){
	case 0:
	goto T95;
T95:;
	{object V46 = (*(LnkLI52))();
	VMR3(V46)}
	case 1:
	goto T96;
T96:;
	V43= CMPcadr((V43));
	goto TTL;
	default:
	goto T97;
T97:;
	{object V48;
	object V49= CMPcdr((V43));
	if(V49==Cnil){
	V47= Cnil;
	goto T102;}
	base[0]=V48=MMcons(Cnil,Cnil);
	goto T103;
T103:;
	{register object V50;
	V50= (V49->c.c_car);
	(V48->c.c_car)= (*(LnkLI49))((V50),(V44));}
	if((V49=MMcdr(V49))==Cnil){
	V47= base[0];
	goto T102;}
	V48=MMcdr(V48)=MMcons(Cnil,Cnil);
	goto T103;}
	goto T102;
T102:;
	{object V51 = make_cons(VV[4],V47);
	VMR3(V51)}
	{object V52 = Cnil;
	VMR3(V52)}}
	{object V53 = Cnil;
	VMR3(V53)}
	goto T93;
T93:;
	if((V45!= VV[2]))goto T105;switch((long)length(CMPcdr((V43)))){
	case 0:
	goto T107;
T107:;
	{object V54 = (*(LnkLI47))();
	VMR3(V54)}
	case 1:
	goto T108;
T108:;
	V43= CMPcadr((V43));
	goto TTL;
	default:
	goto T109;
T109:;
	{object V56;
	object V57= CMPcdr((V43));
	if(V57==Cnil){
	V55= Cnil;
	goto T114;}
	base[0]=V56=MMcons(Cnil,Cnil);
	goto T115;
T115:;
	{register object V58;
	V58= (V57->c.c_car);
	(V56->c.c_car)= (*(LnkLI49))((V58),(V44));}
	if((V57=MMcdr(V57))==Cnil){
	V55= base[0];
	goto T114;}
	V56=MMcdr(V56)=MMcons(Cnil,Cnil);
	goto T115;}
	goto T114;
T114:;
	{object V59 = make_cons(VV[5],V55);
	VMR3(V59)}
	{object V60 = Cnil;
	VMR3(V60)}}
	{object V61 = Cnil;
	VMR3(V61)}
	goto T105;
T105:;
	if((V45!= VV[3])
	&& (V45!= VV[51]))goto T117;
	if(!((CMPcdr((V43)))==Cnil)){
	goto T118;}
	(void)((*(LnkLI43))(VV[3],small_fixnum(1),small_fixnum(0)));
	goto T118;
T118:;
	if((CMPcddr((V43)))==Cnil){
	goto T121;}
	V62 = CMPmake_fixnum((long)length(CMPcdr((V43))));
	(void)((*(LnkLI44))(VV[3],small_fixnum(1),V62));
	goto T121;
T121:;
	{object V63 = list(2,VV[6],(*(LnkLI49))(CMPcadr((V43)),(V44)));
	VMR3(V63)}
	goto T117;
T117:;
	V64= list(3,VV[7],VV[8],(V43));
	{object V65 = (*(LnkLI50))(/* INLINE-ARGS */V64,(V44));
	VMR3(V65)}}
	goto T91;
T91:;
	{object V66 = (*(LnkLI50))((V43),(V44));
	VMR3(V66)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2IF	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	{object V67;
	object V68;
	object V69;
	V67=(base[0]);
	V68=(base[1]);
	V69=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V70;
	register object V71;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V70= make_cons((VV[9]->s.s_dbind),Cnil);
	V71= Cnil;
	if(!((CMPcar((V69)))==(VV[10]))){
	goto T128;}
	if((CMPcaddr((V69)))!=Cnil){
	goto T128;}
	if(!(((VV[11]->s.s_dbind))==(VV[12]))){
	goto T128;}
	if(((VV[13]->s.s_dbind))==(VV[14])){
	goto T128;}
	{object V72;
	V72= (VV[13]->s.s_dbind);
	base[4]= make_cons((V70),(VV[15]->s.s_dbind));
	bds_bind(VV[15],base[4]);
	bds_bind(VV[13],(V70));
	V73= (*(LnkLI53))((V67),(V70),(V72));
	bds_unwind1;
	bds_unwind1;}
	if((CMPcdr((V70)))==Cnil){
	goto T139;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V70))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V70))));
	princ_str(":;",VV[16]);
	goto T139;
T139:;
	base[4]= (V68);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk55)();
	return;
	goto T128;
T128:;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V71= make_cons((VV[9]->s.s_dbind),Cnil);
	base[4]= listA(3,(V71),(V70),(VV[15]->s.s_dbind));
	bds_bind(VV[15],base[4]);
	bds_bind(VV[13],(V70));
	V74= (*(LnkLI53))((V67),(V70),(V71));
	bds_unwind1;
	bds_unwind1;
	if((CMPcdr((V70)))==Cnil){
	goto T155;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V70))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V70))));
	princ_str(":;",VV[16]);
	goto T155;
T155:;
	base[4]= make_cons(VV[17],(VV[15]->s.s_dbind));
	bds_bind(VV[15],base[4]);
	base[5]= (V68);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk55)();
	vs_top=sup;
	bds_unwind1;
	if((CMPcdr((V71)))==Cnil){
	goto T168;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V71))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V71))));
	princ_str(":;",VV[16]);
	goto T168;
T168:;
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
	goto TTL;
TTL:;
	{object V81= CMPcar((V78));
	if((V81!= VV[4]))goto T179;
	{register object V82;
	V82= CMPcdr((V78));
	goto T182;
T182:;
	if(!((CMPcdr((V82)))==Cnil)){
	goto T183;}
	V78= CMPcar((V82));
	goto TTL;
	goto T183;
T183:;
	{register object V83;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V83= make_cons((VV[9]->s.s_dbind),Cnil);
	bds_bind(VV[15],make_cons((V83),(VV[15]->s.s_dbind)));
	(void)((*(LnkLI53))(CMPcar((V82)),(V83),(V80)));
	if((CMPcdr((V83)))==Cnil){
	bds_unwind1;
	goto T191;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V83))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V83))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
	goto T191;
T191:;
	V82= CMPcdr((V82));
	goto T182;}
	goto T179;
T179:;
	if((V81!= VV[5]))goto T208;
	{register object V84;
	V84= CMPcdr((V78));
	goto T211;
T211:;
	if(!((CMPcdr((V84)))==Cnil)){
	goto T212;}
	V78= CMPcar((V84));
	goto TTL;
	goto T212;
T212:;
	{register object V85;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V85= make_cons((VV[9]->s.s_dbind),Cnil);
	bds_bind(VV[15],make_cons((V85),(VV[15]->s.s_dbind)));
	(void)((*(LnkLI56))(CMPcar((V84)),(V79),(V85)));
	if((CMPcdr((V85)))==Cnil){
	bds_unwind1;
	goto T220;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V85))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V85))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
	goto T220;
T220:;
	V84= CMPcdr((V84));
	goto T211;}
	goto T208;
T208:;
	if((V81!= VV[6]))goto T237;
	{object V86 = (*(LnkLI53))(CMPcadr((V78)),(V80),(V79));
	VMR5(V86)}
	goto T237;
T237:;
	if((V81!= VV[10]))goto T238;
	{object V87= CMPcaddr((V78));
	if((V87!= Ct))goto T239;
	(void)((*(LnkLI57))((V79)));
	princ_str("\n	",VV[16]);
	((V79))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V79))));
	princ_char(59,VV[16]);
	{object V88 = Cnil;
	VMR5(V88)}
	goto T239;
T239:;
	if((V87!= Cnil))goto T246;
	{object V89 = Cnil;
	VMR5(V89)}
	goto T246;
T246:;
	base[0]= list(2,VV[18],(V79));
	bds_bind(VV[11],base[0]);
	{object V90 = (*(LnkLI58))((V78));
	bds_unwind1;
	VMR5(V90)}}
	goto T238;
T238:;
	base[0]= list(2,VV[18],(V79));
	bds_bind(VV[11],base[0]);
	{object V91 = (*(LnkLI58))((V78));
	bds_unwind1;
	VMR5(V91)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CJF	*/

static object LI6(V95,V96,V97)

object V95;object V96;object V97;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V98= CMPcar((V95));
	if((V98!= VV[4]))goto T249;
	{register object V99;
	V99= CMPcdr((V95));
	goto T252;
T252:;
	if(!((CMPcdr((V99)))==Cnil)){
	goto T253;}
	V95= CMPcar((V99));
	goto TTL;
	goto T253;
T253:;
	{register object V100;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V100= make_cons((VV[9]->s.s_dbind),Cnil);
	bds_bind(VV[15],make_cons((V100),(VV[15]->s.s_dbind)));
	(void)((*(LnkLI53))(CMPcar((V99)),(V100),(V97)));
	if((CMPcdr((V100)))==Cnil){
	bds_unwind1;
	goto T261;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V100))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V100))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
	goto T261;
T261:;
	V99= CMPcdr((V99));
	goto T252;}
	goto T249;
T249:;
	if((V98!= VV[5]))goto T278;
	{register object V101;
	V101= CMPcdr((V95));
	goto T281;
T281:;
	if(!((CMPcdr((V101)))==Cnil)){
	goto T282;}
	V95= CMPcar((V101));
	goto TTL;
	goto T282;
T282:;
	{register object V102;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V102= make_cons((VV[9]->s.s_dbind),Cnil);
	bds_bind(VV[15],make_cons((V102),(VV[15]->s.s_dbind)));
	(void)((*(LnkLI56))(CMPcar((V101)),(V96),(V102)));
	if((CMPcdr((V102)))==Cnil){
	bds_unwind1;
	goto T290;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V102))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V102))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
	goto T290;
T290:;
	V101= CMPcdr((V101));
	goto T281;}
	goto T278;
T278:;
	if((V98!= VV[6]))goto T307;
	{object V103 = (*(LnkLI56))(CMPcadr((V95)),(V97),(V96));
	VMR6(V103)}
	goto T307;
T307:;
	if((V98!= VV[10]))goto T308;
	{object V104= CMPcaddr((V95));
	if((V104!= Ct))goto T309;
	{object V105 = Cnil;
	VMR6(V105)}
	goto T309;
T309:;
	if((V104!= Cnil))goto T310;
	(void)((*(LnkLI57))((V97)));
	princ_str("\n	",VV[16]);
	((V97))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V97))));
	princ_char(59,VV[16]);
	{object V106 = Cnil;
	VMR6(V106)}
	goto T310;
T310:;
	base[0]= list(2,VV[19],(V97));
	bds_bind(VV[11],base[0]);
	{object V107 = (*(LnkLI58))((V95));
	bds_unwind1;
	VMR6(V107)}}
	goto T308;
T308:;
	base[0]= list(2,VV[19],(V97));
	bds_bind(VV[11],base[0]);
	{object V108 = (*(LnkLI58))((V95));
	bds_unwind1;
	VMR6(V108)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1AND	*/

static object LI7(V110)

register object V110;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(!(((V110))==Cnil)){
	goto T320;}
	{object V111 = (*(LnkLI52))();
	VMR7(V111)}
	goto T320;
T320:;
	if(!((CMPcdr((V110)))==Cnil)){
	goto T323;}
	{object V112 = (*(LnkLI46))(CMPcar((V110)));
	VMR7(V112)}
	goto T323;
T323:;
	{object V113;
	V113= (VFUN_NARGS=0,(*(LnkLI48))());
	{object V114 = list(3,VV[1],(V113),(*(LnkLI59))((V110),(V113)));
	VMR7(V114)}}
	return Cnil;
}
/*	function definition for C2AND	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	bds_check;
	{object V115;
	V115=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V116;
	V116= (V115);
	goto T327;
T327:;
	if(!((CMPcdr((V116)))==Cnil)){
	goto T328;}
	base[1]= CMPcar((V116));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk55)();
	return;
	goto T328;
T328:;
	if(!((CMPcaar((V116)))==(VV[10]))){
	goto T335;}
	{object V117= CMPcaddar((V116));
	if((V117!= Ct))goto T337;
	goto T333;
	goto T337;
T337:;
	if((V117!= Cnil))goto T338;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	goto T333;
	goto T338;
T338:;
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI54))(CMPcaddar((V116))));
	princ_str("==Cnil){",VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	princ_char(125,VV[16]);
	goto T333;}
	goto T335;
T335:;
	if(!((CMPcaar((V116)))==(VV[20]))){
	goto T346;}
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI61))(CMPcar(CMPcaddar((V116))),CMPcadr(CMPcaddar((V116)))));
	princ_str("==Cnil){",VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	princ_char(125,VV[16]);
	goto T333;
	goto T346;
T346:;
	{register object V118;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V118= make_cons((VV[9]->s.s_dbind),Cnil);
	bds_bind(VV[15],make_cons((V118),(VV[15]->s.s_dbind)));
	base[3]= list(2,VV[18],(V118));
	bds_bind(VV[11],base[3]);
	V119= (*(LnkLI58))(CMPcar((V116)));
	bds_unwind1;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	if((CMPcdr((V118)))==Cnil){
	bds_unwind1;
	goto T333;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V118))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V118))));
	princ_str(":;",VV[16]);
	bds_unwind1;}
	goto T333;
T333:;
	V116= CMPcdr((V116));
	goto T327;}
	}
}
/*	local entry for function C1OR	*/

static object LI9(V121)

register object V121;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(!(((V121))==Cnil)){
	goto T374;}
	{object V122 = (*(LnkLI47))();
	VMR9(V122)}
	goto T374;
T374:;
	if(!((CMPcdr((V121)))==Cnil)){
	goto T377;}
	{object V123 = (*(LnkLI46))(CMPcar((V121)));
	VMR9(V123)}
	goto T377;
T377:;
	{object V124;
	V124= (VFUN_NARGS=0,(*(LnkLI48))());
	{object V125 = list(3,VV[2],(V124),(*(LnkLI59))((V121),(V124)));
	VMR9(V125)}}
	return Cnil;
}
/*	function definition for C2OR	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	bds_check;
	{object V126;
	V126=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V127;
	bds_bind(VV[21],(VV[21]->s.s_dbind));
	V127= Cnil;
	{register object V128;
	V128= (V126);
	goto T382;
T382:;
	if(!((CMPcdr((V128)))==Cnil)){
	goto T383;}
	base[2]= CMPcar((V128));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk55)();
	bds_unwind1;
	return;
	goto T383;
T383:;
	if(!((CMPcaar((V128)))==(VV[10]))){
	goto T390;}
	{object V129= CMPcaddar((V128));
	if((V129!= Ct))goto T392;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Ct,VV[17])));
	goto T388;
	goto T392;
T392:;
	if((V129!= Cnil))goto T393;
	goto T388;
	goto T393;
T393:;
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI54))(CMPcaddar((V128))));
	princ_str("!=Cnil){",VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))(CMPcaddar((V128)),VV[17])));
	princ_char(125,VV[16]);
	goto T388;}
	goto T390;
T390:;
	if(!((CMPcaar((V128)))==(VV[20]))){
	goto T401;}
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI61))(CMPcar(CMPcaddar((V128))),CMPcadr(CMPcaddar((V128)))));
	princ_str("!=Cnil){",VV[16]);
	V130= make_cons(VV[20],CMPcaddar((V128)));
	(void)((VFUN_NARGS=2,(*(LnkLI60))(/* INLINE-ARGS */V130,VV[17])));
	princ_char(125,VV[16]);
	goto T388;
	goto T401;
T401:;
	if(!((CMPcaar((V128)))==(VV[22]))){
	goto T411;}
	{object V131 =(CMPcaddar((V128)))->s.s_plist;
	 object ind= VV[23];
	while(V131!=Cnil){
	if(V131->c.c_car==ind){
	if(((V131->c.c_cdr->c.c_car))==Cnil){
	goto T411;}
	goto T414;
	}else V131=V131->c.c_cdr->c.c_cdr;}
	goto T411;}
	goto T414;
T414:;
	{register object V132;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V132= make_cons((VV[9]->s.s_dbind),Cnil);
	bds_bind(VV[15],make_cons((V132),(VV[15]->s.s_dbind)));
	base[4]= list(2,VV[19],(V132));
	bds_bind(VV[11],base[4]);
	V133= (*(LnkLI58))(CMPcar((V128)));
	bds_unwind1;
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Ct,VV[17])));
	if((CMPcdr((V132)))==Cnil){
	bds_unwind1;
	goto T388;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V132))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V132))));
	princ_str(":;",VV[16]);
	bds_unwind1;
	goto T388;}
	goto T411;
T411:;
	{register object V134;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V134= make_cons((VV[9]->s.s_dbind),Cnil);
	bds_bind(VV[24],small_fixnum(0));
	bds_bind(VV[15],make_cons((V134),(VV[15]->s.s_dbind)));
	V127= (*(LnkLI62))();
	bds_bind(VV[11],(V127));
	V135= (*(LnkLI58))(CMPcar((V128)));
	bds_unwind1;
	princ_str("\n	if(",VV[16]);
	(void)((*(LnkLI54))((V127)));
	princ_str("==Cnil)",VV[16]);
	((V134))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V134))));
	princ_char(59,VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))((V127),VV[17])));
	if((CMPcdr((V134)))==Cnil){
	goto T446;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V134))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V134))));
	princ_str(":;",VV[16]);
	goto T446;
T446:;
	V136= (*(LnkLI63))();
	bds_unwind1;
	bds_unwind1;}
	goto T388;
T388:;
	V128= CMPcdr((V128));
	goto T382;}}
	}
}
/*	local entry for function SET-JUMP-TRUE	*/

static object LI11(V139,V140)

register object V139;object V140;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(((V139))==Cnil){
	goto T460;}
	{object V141;
	V141= (((V139))==(Ct)?Ct:Cnil);
	if(((V141))==Cnil){
	goto T465;}
	goto T462;
	goto T465;
T465:;
	if(!(type_of((V139))==t_cons)){
	goto T468;}
	if(!((CMPcar((V139)))==(VV[25]))){
	goto T468;}
	princ_str("\n	if(",VV[16]);
	base[0]= CMPcaddr((V139));
	base[1]= CMPcadddr((V139));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk64)();
	vs_top=sup;
	princ_char(41,VV[16]);
	goto T462;
	goto T468;
T468:;
	princ_str("\n	if((",VV[16]);
	(void)((*(LnkLI54))((V139)));
	princ_str(")!=Cnil)",VV[16]);}
	goto T462;
T462:;
	if(((V139))==(Ct)){
	goto T481;}
	princ_char(123,VV[16]);
	goto T481;
T481:;
	(void)((*(LnkLI57))((V140)));
	princ_str("\n	",VV[16]);
	((V140))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V140))));
	princ_char(59,VV[16]);
	if(((V139))==(Ct)){
	goto T493;}
	princ_char(125,VV[16]);
	{object V142 = Cnil;
	VMR11(V142)}
	goto T493;
T493:;
	{object V143 = Cnil;
	VMR11(V143)}
	goto T460;
T460:;
	{object V144 = Cnil;
	VMR11(V144)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-JUMP-FALSE	*/

static object LI12(V147,V148)

register object V147;object V148;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(((V147))==(Ct)){
	goto T497;}
	{object V149;
	V149= (((V147))==Cnil?Ct:Cnil);
	if(((V149))==Cnil){
	goto T502;}
	goto T499;
	goto T502;
T502:;
	if(!(type_of((V147))==t_cons)){
	goto T505;}
	if(!((CMPcar((V147)))==(VV[25]))){
	goto T505;}
	princ_str("\n	if(!(",VV[16]);
	base[0]= CMPcaddr((V147));
	base[1]= CMPcadddr((V147));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk64)();
	vs_top=sup;
	princ_str("))",VV[16]);
	goto T499;
	goto T505;
T505:;
	princ_str("\n	if((",VV[16]);
	(void)((*(LnkLI54))((V147)));
	princ_str(")==Cnil)",VV[16]);}
	goto T499;
T499:;
	if(((V147))==Cnil){
	goto T518;}
	princ_char(123,VV[16]);
	goto T518;
T518:;
	(void)((*(LnkLI57))((V148)));
	princ_str("\n	",VV[16]);
	((V148))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V148))));
	princ_char(59,VV[16]);
	if(((V147))==Cnil){
	goto T530;}
	princ_char(125,VV[16]);
	{object V150 = Cnil;
	VMR12(V150)}
	goto T530;
T530:;
	{object V151 = Cnil;
	VMR12(V151)}
	goto T497;
T497:;
	{object V152 = Cnil;
	VMR12(V152)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ECASE	*/

static object LI13(V154)

object V154;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V155 = (VFUN_NARGS=2,(*(LnkLI65))((V154),Ct));
	VMR13(V155)}
	return Cnil;
}
/*	local entry for function CONVERT-CASE-TO-SWITCH	*/

static object LI14(V158,V159)

object V158;object V159;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V160;
	register object V161;
	register object V162;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V160= vs_base[0];
	V161= Cnil;
	V162= Cnil;
	{register object V163;
	register object V164;
	V163= CMPcdr((V158));
	V164= CMPcar((V163));
	goto T538;
T538:;
	if(!(((V163))==Cnil)){
	goto T539;}
	goto T534;
	goto T539;
T539:;
	if(!(type_of(CMPcar((V164)))==t_fixnum)){
	goto T545;}
	{object V165;
	V165= CMPcar((V164));
	V161= make_cons((V165),(V161));
	goto T543;}
	goto T545;
T545:;
	if(!(type_of(CMPcar((V164)))==t_cons)){
	goto T550;}
	{register object V166;
	register object V167;
	V166= CMPcar((V164));
	V167= CMPcar((V166));
	goto T555;
T555:;
	if(!(((V166))==Cnil)){
	goto T556;}
	goto T543;
	goto T556;
T556:;
	V161= make_cons(V167,(V161));
	V166= CMPcdr((V166));
	V167= CMPcar((V166));
	goto T555;}
	goto T550;
T550:;
	{register object x= CMPcar((V164)),V169= VV[26];
	while(V169!=Cnil)
	if(eql(x,V169->c.c_car)){
	goto T568;
	}else V169=V169->c.c_cdr;
	goto T543;}
	goto T568;
T568:;
	if((V159)==Cnil){
	goto T569;}
	base[2]= VV[27];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	goto T569;
T569:;
	V161= make_cons(Ct,(V161));
	goto T543;
T543:;
	{object V171;
	V171= list(3,VV[28],(V160),make_cons(VV[29],CMPcdr((V164))));
	V161= make_cons((V171),(V161));}
	V163= CMPcdr((V163));
	V164= CMPcar((V163));
	goto T538;}
	goto T534;
T534:;
	if(((V159))==Cnil){
	goto T580;}
	V161= make_cons(Ct,(V161));
	{register object V173;
	object V174;
	V173= CMPcdr((V158));
	V174= CMPcar((V173));
	goto T589;
T589:;
	if(!(((V173))==Cnil)){
	goto T590;}
	goto T585;
	goto T590;
T590:;
	if(!(type_of(CMPcar((V174)))!=t_cons)){
	goto T596;}
	{object V175;
	V175= CMPcar((V174));
	V162= make_cons((V175),(V162));
	goto T594;}
	goto T596;
T596:;
	V162= append(CMPcar((V174)),(V162));
	goto T594;
T594:;
	V173= CMPcdr((V173));
	V174= CMPcar((V173));
	goto T589;}
	goto T585;
T585:;
	{object V176;
	V177= CMPcar((V158));
	V176= list(4,VV[30],VV[31],/* INLINE-ARGS */V177,list(2,VV[32],(V162)));
	V161= make_cons((V176),(V161));}
	goto T580;
T580:;
	V178= CMPcar((V158));
	{object V179 = list(3,VV[33],(V160),listA(3,VV[34],/* INLINE-ARGS */V178,nreverse((V161))));
	VMR14(V179)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1CASE	*/

static object LI15(object V180,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V181;
	register object V182;
	va_start(ap,first);
	V181= V180;
	narg = narg - 1;
	if (narg <= 0) goto T608;
	else {
	V182= first;}
	--narg; goto T609;
	goto T608;
T608:;
	V182= Cnil;
	goto T609;
T609:;
	if(!(((V181))==Cnil)){
	goto T611;}
	(void)((*(LnkLI43))(VV[35],small_fixnum(1),small_fixnum(0)));
	goto T611;
T611:;
	{register object V183;
	object V184;
	object V185;
	V183= (VFUN_NARGS=0,(*(LnkLI48))());
	V184= (*(LnkLI50))(CMPcar((V181)),(V183));
	V185= Cnil;
	base[2]= STREF(object,CMPcadr((V184)),8);
	base[3]= VV[37];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk67)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T617;}
	V186= (*(LnkLI68))((V181),(V182));
	{object V187 = (*(LnkLI46))(/* INLINE-ARGS */V186);
	VMR15(V187)}
	goto T617;
T617:;
	{register object V188;
	register object V189;
	V188= CMPcdr((V181));
	V189= CMPcar((V188));
	goto T626;
T626:;
	if(!(((V188))==Cnil)){
	goto T627;}
	goto T622;
	goto T627;
T627:;
	if(!(((V189))==Cnil)){
	goto T631;}
	(void)((VFUN_NARGS=2,(*(LnkLI69))(VV[38],(V189))));
	goto T631;
T631:;
	{object V190= CMPcar((V189));
	if((V190!= Cnil))goto T635;
	goto T634;
	goto T635;
T635:;
	if((V190!= Ct)
	&& (V190!= VV[70]))goto T636;
	if(((V182))==Cnil){
	goto T637;}
	if(!(((V182))==(Ct))){
	goto T642;}
	V191= VV[39];
	goto T640;
	goto T642;
T642:;
	V191= VV[40];
	goto T640;
T640:;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(V191)));
	goto T637;
T637:;
	V182= (*(LnkLI71))(CMPcdr((V189)));
	(void)((*(LnkLI72))((V183),CMPcadr((V182))));
	goto T634;
	goto T636;
T636:;
	{object V192;
	register object V193;
	if(!(type_of(CMPcar((V189)))==t_cons)){
	goto T648;}
	{object V194;
	object V195= CMPcar((V189));
	if(V195==Cnil){
	V192= Cnil;
	goto T646;}
	base[6]=V194=MMcons(Cnil,Cnil);
	goto T650;
T650:;
	{register object V196;
	V196= (V195->c.c_car);
	if(!(type_of((V196))==t_symbol)){
	goto T653;}
	(V194->c.c_car)= (V196);
	goto T651;
	goto T653;
T653:;
	(V194->c.c_car)= (*(LnkLI73))((V196));}
	goto T651;
T651:;
	if((V195=MMcdr(V195))==Cnil){
	V192= base[6];
	goto T646;}
	V194=MMcdr(V194)=MMcons(Cnil,Cnil);
	goto T650;}
	goto T648;
T648:;
	if(!(type_of(CMPcar((V189)))==t_symbol)){
	goto T656;}
	V192= make_cons(CMPcar((V189)),Cnil);
	goto T646;
	goto T656;
T656:;
	V197= (*(LnkLI73))(CMPcar((V189)));
	V192= make_cons(/* INLINE-ARGS */V197,Cnil);
	goto T646;
T646:;
	V193= (*(LnkLI71))(CMPcdr((V189)));
	(void)((*(LnkLI72))((V183),CMPcadr((V193))));
	{object V198;
	V198= make_cons((V192),(V193));
	V185= make_cons((V198),(V185));}}}
	goto T634;
T634:;
	V188= CMPcdr((V188));
	V189= CMPcar((V188));
	goto T626;}
	goto T622;
T622:;
	V199= reverse((V185));
	if((V182)!=Cnil){
	V200= (V182);
	goto T667;}
	V200= (*(LnkLI47))();
	goto T667;
T667:;
	{object V201 = list(5,VV[35],(V183),(V184),/* INLINE-ARGS */V199,V200);
	VMR15(V201)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function C2CASE	*/

static object LI16(V205,V206,V207)

object V205;object V206;object V207;
{	 VMB16 VMS16 VMV16
	bds_check;
	goto TTL;
TTL:;
	{register object V208;
	(VV[41]->s.s_dbind)= number_plus((VV[41]->s.s_dbind),small_fixnum(1));
	V208= (VV[41]->s.s_dbind);
	bds_bind(VV[21],(VV[21]->s.s_dbind));
	bds_bind(VV[24],small_fixnum(0));
	V209= make_cons((V205),Cnil);
	V210= (VFUN_NARGS=2,(*(LnkLI74))(/* INLINE-ARGS */V209,VV[42]));
	V205= CMPcar(/* INLINE-ARGS */V210);
	princ_str("\n	{object V",VV[16]);
	(void)((*(LnkLI54))((V208)));
	princ_str("= ",VV[16]);
	(void)((*(LnkLI54))((V205)));
	princ_char(59,VV[16]);
	{object V211;
	object V212;
	V211= (V206);
	V212= CMPcar((V211));
	goto T682;
T682:;
	if(!(((V211))==Cnil)){
	goto T683;}
	goto T678;
	goto T683;
T683:;
	{object V213;
	register object V214;
	register object V215;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V213= make_cons((VV[9]->s.s_dbind),Cnil);
	V214= CMPcar((V212));
	V215= Cnil;
	goto T694;
T694:;
	if(!(((long)length((V214)))<=(5))){
	goto T695;}
	goto T692;
	goto T695;
T695:;
	if(((V215))!=Cnil){
	goto T699;}
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	V215= make_cons((VV[9]->s.s_dbind),Cnil);
	goto T699;
T699:;
	princ_str("\n	if(",VV[16]);
	{register object V217;
	V217= small_fixnum(0);
	goto T709;
T709:;
	if(!(number_compare((V217),small_fixnum(5))>=0)){
	goto T710;}
	goto T706;
	goto T710;
T710:;
	if(!(type_of(CMPcar((V214)))==t_symbol)){
	goto T716;}
	princ_str("(V",VV[16]);
	(void)((*(LnkLI54))((V208)));
	princ_str("== ",VV[16]);
	{object V218= CMPcar((V214));
	if((V218!= Ct))goto T723;
	princ_str("Ct",VV[16]);
	goto T722;
	goto T723;
T723:;
	if((V218!= Cnil))goto T725;
	princ_str("Cnil",VV[16]);
	goto T722;
	goto T725;
T725:;
	princ_str("VV[",VV[16]);
	V219= (*(LnkLI75))(CMPcar((V214)));
	(void)((*(LnkLI54))(/* INLINE-ARGS */V219));
	princ_char(93,VV[16]);}
	goto T722;
T722:;
	princ_char(41,VV[16]);
	goto T714;
	goto T716;
T716:;
	princ_str("eql(V",VV[16]);
	(void)((*(LnkLI54))((V208)));
	princ_str(",VV[",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V214))));
	princ_str("])",VV[16]);
	goto T714;
T714:;
	if(!(number_compare((V217),small_fixnum(4))<0)){
	goto T736;}
	princ_str("\n	|| ",VV[16]);
	goto T736;
T736:;
	{object V220;
	V220= CMPcar((V214));
	V214= CMPcdr((V214));}
	V217= one_plus((V217));
	goto T709;}
	goto T706;
T706:;
	princ_char(41,VV[16]);
	((V215))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V215))));
	princ_char(59,VV[16]);
	goto T694;
	goto T692;
T692:;
	princ_str("\n	if(",VV[16]);
	goto T760;
T760:;
	if(!(((V214))==Cnil)){
	goto T761;}
	goto T758;
	goto T761;
T761:;
	if(!(type_of(CMPcar((V214)))==t_symbol)){
	goto T767;}
	princ_str("(V",VV[16]);
	(void)((*(LnkLI54))((V208)));
	princ_str("!= ",VV[16]);
	{object V221= CMPcar((V214));
	if((V221!= Ct))goto T774;
	princ_str("Ct",VV[16]);
	goto T773;
	goto T774;
T774:;
	if((V221!= Cnil))goto T776;
	princ_str("Cnil",VV[16]);
	goto T773;
	goto T776;
T776:;
	princ_str("VV[",VV[16]);
	V222= (*(LnkLI75))(CMPcar((V214)));
	(void)((*(LnkLI54))(/* INLINE-ARGS */V222));
	princ_char(93,VV[16]);}
	goto T773;
T773:;
	princ_char(41,VV[16]);
	goto T765;
	goto T767;
T767:;
	princ_str("!eql(V",VV[16]);
	(void)((*(LnkLI54))((V208)));
	princ_str(",VV[",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V214))));
	princ_str("])",VV[16]);
	goto T765;
T765:;
	if((CMPcdr((V214)))==Cnil){
	goto T787;}
	princ_str("\n	&& ",VV[16]);
	goto T787;
T787:;
	{object V223;
	V223= CMPcar((V214));
	V214= CMPcdr((V214));}
	goto T760;
	goto T758;
T758:;
	princ_char(41,VV[16]);
	((V213))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V213))));
	princ_char(59,VV[16]);
	if(((V215))==Cnil){
	goto T804;}
	if((CMPcdr((V215)))==Cnil){
	goto T804;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V215))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V215))));
	princ_str(":;",VV[16]);
	goto T804;
T804:;
	base[6]= make_cons(VV[17],(VV[15]->s.s_dbind));
	bds_bind(VV[15],base[6]);
	base[7]= CMPcdr((V212));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk55)();
	vs_top=sup;
	bds_unwind1;
	if((CMPcdr((V213)))==Cnil){
	goto T687;}
	princ_str("\n	goto T",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V213))));
	princ_char(59,VV[16]);
	princ_str("\nT",VV[16]);
	(void)((*(LnkLI54))(CMPcar((V213))));
	princ_str(":;",VV[16]);}
	goto T687;
T687:;
	V211= CMPcdr((V211));
	V212= CMPcar((V211));
	goto T682;}
	goto T678;
T678:;
	if(!(((V207))==(Ct))){
	goto T835;}
	princ_str("\n	FEerror(\"The ECASE key value ~s is illegal.\",1,V",VV[16]);
	(void)((*(LnkLI54))((V208)));
	princ_str(");",VV[16]);
	(void)((VFUN_NARGS=2,(*(LnkLI60))(Cnil,VV[17])));
	goto T833;
	goto T835;
T835:;
	base[3]= (V207);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk55)();
	vs_top=sup;
	goto T833;
T833:;
	princ_char(125,VV[16]);
	{object V224 = (*(LnkLI63))();
	bds_unwind1;
	bds_unwind1;
	VMR16(V224)}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[74],(void **)(void *)&LnkLI74,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,1,first,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[69],(void **)(void *)&LnkLI69,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,2,first,ap);va_end(ap);return V1;} /* CONVERT-CASE-TO-SWITCH */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* SUBTYPEP */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* CMPERROR */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[65],(void **)(void *)&LnkLI65,first,ap);va_end(ap);return V1;} /* C1CASE */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* WT-INLINE-LOC */
static object  LnkTLI63(){return call_proc0(VV[63],(void **)(void *)&LnkLI63);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI62(){return call_proc0(VV[62],(void **)(void *)&LnkLI62);} /* WT-C-PUSH */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],(void **)(void *)&LnkLI61,2,first,ap);va_end(ap);return V1;} /* WT-VAR */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[60],(void **)(void *)&LnkLI60,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],(void **)(void *)&LnkLI59,2,first,ap);va_end(ap);return V1;} /* C1ARGS */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,1,first,ap);va_end(ap);return V1;} /* UNWIND-NO-EXIT */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,3,first,ap);va_end(ap);return V1;} /* CJT */
static void LnkT55(){ call_or_link(VV[55],(void **)(void *)&Lnk55);} /* C2EXPR */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[54],(void **)(void *)&LnkLI54,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[53],(void **)(void *)&LnkLI53,3,first,ap);va_end(ap);return V1;} /* CJF */
static object  LnkTLI52(){return call_proc0(VV[52],(void **)(void *)&LnkLI52);} /* C1T */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,2,first,ap);va_end(ap);return V1;} /* C1FMLA */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[48],(void **)(void *)&LnkLI48,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI47(){return call_proc0(VV[47],(void **)(void *)&LnkLI47);} /* C1NIL */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[45],(void **)(void *)&LnkLI45,1,first,ap);va_end(ap);return V1;} /* C1FMLA-CONSTANT */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[44],(void **)(void *)&LnkLI44,3,first,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

