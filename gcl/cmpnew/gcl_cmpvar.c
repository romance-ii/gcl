
#include "cmpinclude.h"
#include "gcl_cmpvar.h"
void init_gcl_cmpvar(){do_init(VV);}
/*	local entry for function MAKE-VAR	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	object V7;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI1key,first,ap);
	V1=(Vcs[0]);
	V2=(Vcs[1]);
	V3=(Vcs[2]);
	V4=(Vcs[3]);
	V5=(Vcs[4]);
	if(Vcs[5]==0){
	V6= Ct;
	}else{
	V6=(Vcs[5]);}
	V7=(Vcs[6]);
	base[0]= VV[0];
	base[1]= (V1);
	base[2]= (V2);
	base[3]= (V3);
	base[4]= (V4);
	base[5]= (V5);
	base[6]= (V6);
	base[7]= (V7);
	vs_top=(vs_base=base+0)+8;
	siLmake_structure();
	vs_top=sup;
	{object V8 = vs_base[0];
	VMR1(V8)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function C1MAKE-VAR	*/

static object LI2(V13,V14,V15,V16)

register object V13;object V14;object V15;object V16;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{register object V17;
	V17= Cnil;
	{register object V18;
	V18= (VFUN_NARGS=2,(*(LnkLI66))(VV[1],(V13)));
	if(type_of((V13))==t_symbol){
	goto T12;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[2],(V13))));
	goto T12;
T12:;
	base[0]= (V13);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T15;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[3],(V13))));
	goto T15;
T15:;
	{register object x= (V13),V19= (V14);
	while(V19!=Cnil)
	if(eql(x,V19->c.c_car)){
	goto T20;
	}else V19=V19->c.c_cdr;}
	base[0]= (V13);
	vs_top=(vs_base=base+0)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T21;}
	goto T20;
T20:;
	V20= Ct;
	STSET(object,(V18),4, VV[4]);
	(void)(VV[4]);
	V21= (*(LnkLI68))((V13));
	V22= Ct;
	STSET(object,(V18),16, /* INLINE-ARGS */V21);
	(void)(/* INLINE-ARGS */V21);
	{register object x= (V13),V23= (V16);
	while(V23!=Cnil)
	if(eql(x,V23->c.c_car->c.c_car) &&V23->c.c_car != Cnil){
	V17= (V23->c.c_car);
	goto T32;
	}else V23=V23->c.c_cdr;
	V17= Cnil;}
	goto T32;
T32:;
	if(((V17))==Cnil){
	goto T30;}
	V24= CMPcdr((V17));
	V25= Ct;
	STSET(object,(V18),20, /* INLINE-ARGS */V24);
	(void)(/* INLINE-ARGS */V24);
	goto T28;
	goto T30;
T30:;
	{object V26 =((V13))->s.s_plist;
	 object ind= VV[5];
	while(V26!=Cnil){
	if(V26->c.c_car==ind){
	V17= (V26->c.c_cdr->c.c_car);
	goto T35;
	}else V26=V26->c.c_cdr->c.c_cdr;}
	V17= Cnil;}
	goto T35;
T35:;
	if(((V17))==Cnil){
	goto T28;}
	V27= Ct;
	STSET(object,(V18),20, (V17));
	(void)((V17));
	goto T28;
T28:;
	(VV[6]->s.s_dbind)= Ct;
	goto T19;
	goto T21;
T21:;
	{register object V28;
	register object V29;
	V28= (V16);
	V29= CMPcar((V28));
	goto T41;
T41:;
	if(!(((V28))==Cnil)){
	goto T42;}
	goto T37;
	goto T42;
T42:;
	if(!((CMPcar((V29)))==((V13)))){
	goto T46;}
	{object V30= CMPcdr((V29));
	if((V30!= VV[7]))goto T49;
	V31= Ct;
	STSET(object,(V18),16, VV[7]);
	(void)(VV[7]);
	goto T46;
	goto T49;
T49:;
	if((V30!= VV[69]))goto T50;
	V32= number_plus(STREF(object,(V18),24),small_fixnum(100));
	V33= Ct;
	STSET(object,(V18),24, /* INLINE-ARGS */V32);
	(void)(/* INLINE-ARGS */V32);
	goto T46;
	goto T50;
T50:;
	V34= CMPcdr((V29));
	V35= Ct;
	STSET(object,(V18),20, /* INLINE-ARGS */V34);
	(void)(/* INLINE-ARGS */V34);}
	goto T46;
T46:;
	V28= CMPcdr((V28));
	V29= CMPcar((V28));
	goto T41;}
	goto T37;
T37:;
	if((VV[8])->s.s_dbind!=OBJNULL){
	goto T57;}
	goto T56;
	goto T57;
T57:;
	if((VV[8]->s.s_dbind)==Cnil){
	goto T56;}
	if(!((STREF(object,(V18),20))==Cnil)){
	goto T61;}
	goto T59;
	goto T61;
T61:;
	if((Ct)==(STREF(object,(V18),20))){
	goto T59;}
	goto T56;
	goto T59;
T59:;
	V36= Ct;
	STSET(object,(V18),16, VV[7]);
	(void)(VV[7]);
	goto T56;
T56:;
	V37= Ct;
	STSET(object,(V18),4, VV[9]);
	(void)(VV[9]);
	goto T19;
T19:;
	{register object x= (V13),V38= (V15);
	while(V38!=Cnil)
	if(eql(x,V38->c.c_car)){
	goto T65;
	}else V38=V38->c.c_cdr;
	goto T63;}
	goto T65;
T65:;
	V39= Ct;
	STSET(object,(V18),8, VV[10]);
	(void)(VV[10]);
	goto T63;
T63:;
	{object V40 = (V18);
	VMR2(V40)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-VREF	*/

static object LI3(V42)

register object V42;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!((STREF(object,(V42),4))==(VV[9]))){
	goto T67;}
	if((STREF(object,(V42),8))!=Cnil){
	goto T67;}
	if((STREF(object,(V42),12))!=Cnil){
	goto T67;}
	{object V43 = (VFUN_NARGS=2,(*(LnkLI70))(VV[11],STREF(object,(V42),0)));
	VMR3(V43)}
	goto T67;
T67:;
	{object V44 = Cnil;
	VMR3(V44)}
	return Cnil;
}
/*	local entry for function C1VAR	*/

static object LI4(V46)

object V46;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V47;
	object V48;
	V47= (VFUN_NARGS=0,(*(LnkLI71))());
	V48= (*(LnkLI72))((V46));
	{object V49;
	object V51;
	V49= CMPcar((V48));
	V51= make_cons((V49),STREF(object,V47,4));
	V52= Ct;
	STSET(object,V47,4, (V51));
	(void)((V51));}
	V53= Ct;
	STSET(object,(V47),8, STREF(object,CMPcar((V48)),20));
	(void)(STREF(object,CMPcar((V48)),20));
	{object V54 = list(3,VV[0],(V47),(V48));
	VMR4(V54)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1VREF	*/

static object LI5(V56)

register object V56;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{register object V57;
	register object V58;
	V57= Cnil;
	V58= Cnil;
	{register object V59;
	register object V60;
	V59= (VV[13]->s.s_dbind);
	V60= CMPcar((V59));
	goto T84;
T84:;
	if(!(((V59))==Cnil)){
	goto T85;}
	{register object V61;
	V61= (*(LnkLI73))((V56));
	if(((V61))!=Cnil){
	goto T89;}
	base[1]= (V56);
	vs_top=(vs_base=base+1)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T92;}
	(void)((*(LnkLI74))((V56)));
	goto T92;
T92:;
	V62= (*(LnkLI68))((V56));{object V64;
	{object V65 =((V56))->s.s_plist;
	 object ind= VV[5];
	while(V65!=Cnil){
	if(V65->c.c_car==ind){
	V64= (V65->c.c_cdr->c.c_car);
	goto T100;
	}else V65=V65->c.c_cdr->c.c_cdr;}
	V64= Cnil;}
	goto T100;
T100:;
	if(V64==Cnil)goto T99;
	V63= V64;
	goto T98;
	goto T99;
T99:;}
	V63= Ct;
	goto T98;
T98:;
	V61= (VFUN_NARGS=8,(*(LnkLI66))(VV[1],(V56),VV[14],VV[15],VV[16],/* INLINE-ARGS */V62,VV[17],V63));
	(VV[18]->s.s_dbind)= make_cons(V61,(VV[18]->s.s_dbind));
	goto T89;
T89:;
	{object V67 = list(2,(V61),(V57));
	VMR5(V67)}}
	goto T85;
T85:;
	if(!(((V60))==(VV[19]))){
	goto T105;}
	V57= Ct;
	goto T103;
	goto T105;
T105:;
	if(!(((V60))==(VV[20]))){
	goto T109;}
	V58= Ct;
	goto T103;
	goto T109;
T109:;
	if(!((STREF(object,(V60),0))==((V56)))){
	goto T103;}
	if(!((STREF(object,(V60),8))==(VV[10]))){
	goto T114;}
	(void)((VFUN_NARGS=2,(*(LnkLI70))(VV[21],(V56))));
	V68= Ct;
	STSET(object,(V60),8, Ct);
	(void)(Ct);
	goto T114;
T114:;
	if(((V57))==Cnil){
	goto T120;}
	V69= Ct;
	STSET(object,(V60),12, Ct);
	(void)(Ct);
	goto T118;
	goto T120;
T120:;
	if(((V58))==Cnil){
	goto T123;}
	if(!((STREF(object,(V60),4))==(VV[9]))){
	goto T125;}
	V70= Ct;
	STSET(object,(V60),16, VV[22]);
	(void)(VV[22]);
	goto T125;
T125:;
	V71= Ct;
	STSET(object,(V60),8, Ct);
	(void)(Ct);
	goto T118;
	goto T123;
T123:;
	V72= Ct;
	STSET(object,(V60),8, Ct);
	(void)(Ct);
	V73 = CMPmake_fixnum((long)(1)+(fix(STREF(object,(V60),24))));
	V74= Ct;
	STSET(object,(V60),24, V73);
	(void)(V73);
	goto T118;
T118:;
	{object V75 = list(2,(V60),(V57));
	VMR5(V75)}
	goto T103;
T103:;
	V59= CMPcdr((V59));
	V60= CMPcar((V59));
	goto T84;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2VAR-KIND	*/

static object LI6(V77)

register object V77;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(!((STREF(object,(V77),4))==(VV[9]))){
	goto T135;}
	if((STREF(object,(V77),12))!=Cnil){
	goto T135;}
	if((STREF(object,(V77),16))==(VV[22])){
	goto T135;}
	if(!((STREF(object,(V77),16))==(VV[7]))){
	goto T142;}
	{object V78 = VV[7];
	VMR6(V78)}
	goto T142;
T142:;
	{register object V79;
	V79= STREF(object,(V77),20);
	if(((*(LnkLI75))(VV[23],(V79)))==Cnil){
	goto T146;}
	{object V80 = VV[23];
	VMR6(V80)}
	goto T146;
T146:;
	if(((*(LnkLI75))(VV[24],(V79)))==Cnil){
	goto T149;}
	{object V81 = VV[24];
	VMR6(V81)}
	goto T149;
T149:;
	if(((*(LnkLI75))(VV[25],(V79)))==Cnil){
	goto T152;}
	{object V82 = VV[25];
	VMR6(V82)}
	goto T152;
T152:;
	if(((*(LnkLI75))(VV[26],(V79)))==Cnil){
	goto T155;}
	{object V83 = VV[26];
	VMR6(V83)}
	goto T155;
T155:;
	if(((*(LnkLI75))(VV[27],(V79)))==Cnil){
	goto T158;}
	{object V84 = VV[27];
	VMR6(V84)}
	goto T158;
T158:;
	{object V85;
	if((VV[8])->s.s_dbind!=OBJNULL){
	goto T161;}
	V85= Cnil;
	goto T160;
	goto T161;
T161:;
	if((VV[8]->s.s_dbind)==Cnil){
	V85= Cnil;
	goto T160;}
	V85= VV[7];
	goto T160;
T160:;
	if(((V85))==Cnil){
	goto T164;}
	{object V86 = (V85);
	VMR6(V86)}
	goto T164;
T164:;
	{object V87 = Cnil;
	VMR6(V87)}}}
	goto T135;
T135:;
	{object V88 = Cnil;
	VMR6(V88)}
	return Cnil;
}
/*	local entry for function C2VAR	*/

static object LI7(V90)

object V90;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	V91= make_cons(VV[0],(V90));
	{object V92 = (VFUN_NARGS=3,(*(LnkLI76))(/* INLINE-ARGS */V91,Cnil,VV[28]));
	VMR7(V92)}
	return Cnil;
}
/*	local entry for function C2LOCATION	*/

static object LI8(V94)

object V94;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V95 = (VFUN_NARGS=3,(*(LnkLI76))((V94),Cnil,VV[28]));
	VMR8(V95)}
	return Cnil;
}
/*	local entry for function CHECK-DOWNWARD	*/

static object LI9(V97)

object V97;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V98;
	V98= Cnil;
	{register object V99;
	object V100;
	V99= (VV[29]->s.s_dbind);
	V100= CMPcar((V99));
	goto T171;
T171:;
	if(!(((V99))==Cnil)){
	goto T172;}
	goto T167;
	goto T172;
T172:;
	if(!((CMPcar((V100)))==(VV[30]))){
	goto T176;}
	V98= Ct;
	{register object V101;
	register object V102;
	V101= (VV[29]->s.s_dbind);
	V102= CMPcar((V101));
	goto T185;
T185:;
	if(!(((V101))==Cnil)){
	goto T186;}
	goto T181;
	goto T186;
T186:;
	if(!((CMPcar((V102)))==(VV[31]))){
	goto T190;}
	{register object V103;
	register object V104;
	V103= (V102);
	V104= VV[30];
	((V103))->c.c_car = (V104);}
	goto T190;
T190:;
	V101= CMPcdr((V101));
	V102= CMPcar((V101));
	goto T185;}
	goto T181;
T181:;
	goto T167;
	goto T176;
T176:;
	V99= CMPcdr((V99));
	V100= CMPcar((V99));
	goto T171;}
	goto T167;
T167:;
	(VV[29]->s.s_dbind)= Cnil;
	if(((V98))==Cnil){
	goto T209;}
	{register object V105;
	object V106;
	V105= (V97);
	V106= CMPcar((V105));
	goto T214;
T214:;
	if(!(((V105))==Cnil)){
	goto T215;}
	{object V107 = Cnil;
	VMR9(V107)}
	goto T215;
T215:;
	if(!((STREF(object,(V106),4))==(VV[32]))){
	goto T219;}
	V108= Ct;
	STSET(object,(V106),4, VV[9]);
	(void)(VV[9]);
	goto T219;
T219:;
	V105= CMPcdr((V105));
	V106= CMPcar((V105));
	goto T214;}
	goto T209;
T209:;
	{object V109 = Cnil;
	VMR9(V109)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ASSIGN-DOWN-VARS	*/

static object LI10(V113,V114,V115)

object V113;object V114;object V115;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V116;
	V116= small_fixnum(0);
	{register object V117;
	register object V118;
	V117= (V113);
	V118= CMPcar((V117));
	goto T232;
T232:;
	if(!(((V117))==Cnil)){
	goto T233;}
	goto T228;
	goto T233;
T233:;
	if(!((STREF(object,(V118),4))==(VV[32]))){
	goto T237;}
	{object V119= STREF(object,(V118),16);
	if(!(type_of(V119)==t_fixnum||type_of(V119)==t_bignum)){
	goto T241;}}
	V120= one_plus(STREF(object,(V118),16));
	V116= (number_compare((V116),/* INLINE-ARGS */V120)>=0?((V116)):/* INLINE-ARGS */V120);
	V121= Ct;
	STSET(object,(V118),8, STREF(object,(V118),16));
	(void)(STREF(object,(V118),16));
	goto T237;
	goto T241;
T241:;
	V122= Ct;
	STSET(object,(V118),8, (V116));
	(void)((V116));
	V123= Ct;
	STSET(object,(V118),16, (V116));
	(void)((V116));
	V116= number_plus((V116),small_fixnum(1));
	goto T237;
T237:;
	V117= CMPcdr((V117));
	V118= CMPcar((V117));
	goto T232;}
	goto T228;
T228:;
	if(!(number_compare((V116),small_fixnum(0))>0)){
	goto T253;}
	if(!(((V115))==(VV[33]))){
	goto T256;}
	princ_str("\n	object base0[",VV[34]);
	(void)((*(LnkLI77))((V116)));
	princ_str("];",VV[34]);
	goto T256;
T256:;
	(VV[36]->s.s_dbind)= make_cons(VV[35],(VV[36]->s.s_dbind));
	princ_str("\n	DCnames",VV[34]);
	(void)((*(LnkLI77))((V114)));
	princ_str("",VV[34]);
	goto T253;
T253:;
	{object V125 = (V116);
	VMR10(V125)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-DOWN	*/

static object LI11(V127)

object V127;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;{object V128;
	base[0]= (V127);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	vs_top=sup;
	V128= vs_base[0];
	if(V128==Cnil)goto T268;
	goto T267;
	goto T268;
T268:;}
	(void)((*(LnkLI79))());
	goto T267;
T267:;
	princ_str("base0[",VV[34]);
	(void)((*(LnkLI77))((V127)));
	princ_char(93,VV[34]);
	{object V129 = Cnil;
	VMR11(V129)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-VAR	*/

static object LI12(V132,V133)

register object V132;object V133;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V134= STREF(object,(V132),4);
	if((V134!= VV[9]))goto T274;
	if(((V133))==Cnil){
	goto T276;}
	{object V135 = (*(LnkLI80))(STREF(object,(V132),12));
	VMR12(V135)}
	goto T276;
T276:;
	if((STREF(object,(V132),12))==Cnil){
	goto T279;}
	{object V136 = (*(LnkLI81))(STREF(object,(V132),8));
	VMR12(V136)}
	goto T279;
T279:;
	if(!((Ct)==(STREF(object,(V132),8)))){
	goto T282;}
	if(!(type_of(STREF(object,(V132),16))==t_fixnum)){
	goto T282;}
	if(((VV[8]->s.s_dbind))==Cnil){
	goto T282;}
	if(!((Ct)==(STREF(object,(V132),20)))){
	goto T282;}
	V137= Ct;
	STSET(object,(V132),4, VV[7]);
	(void)(VV[7]);
	goto TTL;
	goto T282;
T282:;
	{object V138 = (*(LnkLI82))(STREF(object,(V132),8));
	VMR12(V138)}
	goto T274;
T274:;
	if((V134!= VV[4]))goto T294;
	princ_str("(VV[",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V132),16)));
	princ_str("]->s.s_dbind)",VV[34]);
	{object V139 = Cnil;
	VMR12(V139)}
	goto T294;
T294:;
	if((V134!= VV[83]))goto T298;
	(void)((*(LnkLI77))(STREF(object,(V132),16)));
	{object V140 = Cnil;
	VMR12(V140)}
	goto T298;
T298:;
	if((V134!= VV[32]))goto T300;
	{object V141 = (*(LnkLI84))(STREF(object,(V132),16));
	VMR12(V141)}
	goto T300;
T300:;
	if((V134!= VV[15]))goto T301;
	if(((VV[37]->s.s_dbind))==Cnil){
	goto T303;}
	princ_str("symbol_value(VV[",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V132),16)));
	princ_str("])",VV[34]);
	{object V142 = Cnil;
	VMR12(V142)}
	goto T303;
T303:;
	princ_str("(VV[",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V132),16)));
	princ_str("]->s.s_dbind)",VV[34]);
	{object V143 = Cnil;
	VMR12(V143)}
	goto T301;
T301:;
	{object V144= STREF(object,(V132),4);
	if((V144!= VV[23]))goto T312;
	if(!(number_compare(small_fixnum(0),(VV[38]->s.s_dbind))==0)){
	goto T313;}
	princ_str("CMP",VV[34]);
	goto T313;
T313:;
	princ_str("make_fixnum",VV[34]);
	goto T311;
	goto T312;
T312:;
	if((V144!= VV[24]))goto T318;
	princ_str("make_integer",VV[34]);
	goto T311;
	goto T318;
T318:;
	if((V144!= VV[25]))goto T320;
	princ_str("code_char",VV[34]);
	goto T311;
	goto T320;
T320:;
	if((V144!= VV[26]))goto T322;
	princ_str("make_longfloat",VV[34]);
	goto T311;
	goto T322;
T322:;
	if((V144!= VV[27]))goto T324;
	princ_str("make_shortfloat",VV[34]);
	goto T311;
	goto T324;
T324:;
	if((V144!= VV[7]))goto T326;
	goto T311;
	goto T326;
T326:;
	(void)((*(LnkLI85))());}
	goto T311;
T311:;
	princ_str("(V",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V132),16)));
	princ_char(41,VV[34]);
	{object V145 = Cnil;
	VMR12(V145)}}
	return Cnil;
}
/*	local entry for function SET-VAR	*/

static object LI13(V149,V150,V151)

register object V149;register object V150;object V151;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V149))==t_cons)){
	goto T330;}
	if(!((CMPcar((V149)))==(VV[0]))){
	goto T330;}
	if(!((CMPcadr((V149)))==((V150)))){
	goto T330;}
	if((CMPcaddr((V149)))==((V151))){
	goto T331;}
	goto T330;
T330:;
	{object V152= STREF(object,(V150),4);
	if((V152!= VV[9]))goto T339;
	princ_str("\n	",VV[34]);
	if(((V151))==Cnil){
	goto T343;}
	(void)((*(LnkLI80))(STREF(object,(V150),12)));
	goto T341;
	goto T343;
T343:;
	if((STREF(object,(V150),12))==Cnil){
	goto T346;}
	(void)((*(LnkLI81))(STREF(object,(V150),8)));
	goto T341;
	goto T346;
T346:;
	(void)((*(LnkLI82))(STREF(object,(V150),8)));
	goto T341;
T341:;
	princ_str("= ",VV[34]);
	(void)((*(LnkLI77))((V149)));
	princ_char(59,VV[34]);
	{object V153 = Cnil;
	VMR13(V153)}
	goto T339;
T339:;
	if((V152!= VV[4]))goto T351;
	princ_str("\n	(VV[",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V150),16)));
	princ_str("]->s.s_dbind)= ",VV[34]);
	(void)((*(LnkLI77))((V149)));
	princ_char(59,VV[34]);
	{object V154 = Cnil;
	VMR13(V154)}
	goto T351;
T351:;
	if((V152!= VV[15]))goto T357;
	if(((VV[37]->s.s_dbind))==Cnil){
	goto T359;}
	princ_str("\n	setq(VV[",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V150),16)));
	princ_str("],",VV[34]);
	(void)((*(LnkLI77))((V149)));
	princ_str(");",VV[34]);
	{object V155 = Cnil;
	VMR13(V155)}
	goto T359;
T359:;
	princ_str("\n	(VV[",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V150),16)));
	princ_str("]->s.s_dbind)= ",VV[34]);
	(void)((*(LnkLI77))((V149)));
	princ_char(59,VV[34]);
	{object V156 = Cnil;
	VMR13(V156)}
	goto T357;
T357:;
	if((V152!= VV[32]))goto T371;
	princ_str("\n	",VV[34]);
	(void)((*(LnkLI84))(STREF(object,(V150),16)));
	princ_char(61,VV[34]);
	(void)((*(LnkLI77))((V149)));
	princ_char(59,VV[34]);
	{object V157 = Cnil;
	VMR13(V157)}
	goto T371;
T371:;
	if((V152!= VV[24]))goto T378;
	{object V158;
	register object V159;
	if(type_of((V149))==t_cons){
	goto T380;}
	V158= Cnil;
	goto T379;
	goto T380;
T380:;
	V158= CMPcar((V149));
	goto T379;
T379:;
	V159= STREF(object,(V150),16);
	{object V160= (V158);
	if((V160!= VV[86]))goto T384;
	princ_str("\n	ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str("alloc,",VV[34]);
	base[0]= CMPcaddr((V149));
	base[1]= CMPcadddr((V149));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk87)();
	vs_top=sup;
	goto T383;
	goto T384;
T384:;
	if((V160!= VV[88]))goto T393;
	princ_str("\n	ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))(CMPcaddr((V149))));
	goto T383;
	goto T393;
T393:;
	if((V160!= VV[0]))goto T400;
	{object V161= STREF(object,CMPcadr((V149)),4);
	if((V161!= VV[24]))goto T401;
	princ_str("SETQ_II(V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str("alloc,V",VV[34]);
	(void)((*(LnkLI77))(STREF(object,CMPcadr((V149)),16)));
	goto T383;
	goto T401;
T401:;
	if((V161!= VV[23]))goto T408;
	princ_str("ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str("alloc,V",VV[34]);
	(void)((*(LnkLI77))(STREF(object,CMPcadr((V149)),16)));
	goto T383;
	goto T408;
T408:;
	princ_str("SETQ_IO(V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))((V149)));
	goto T383;}
	goto T400;
T400:;
	if((V160!= VV[54]))goto T421;
	princ_str("SETQ_IO(V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))((V149)));
	goto T383;
	goto T421;
T421:;
	bds_bind(VV[39],small_fixnum(0));
	bds_bind(VV[40],(VV[40]->s.s_dbind));
	(void)((*(LnkLI89))(VV[41]));
	princ_str("\n	SETQ_II(V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V159)));
	princ_str("alloc,",VV[34]);
	V162= make_cons(VV[42],(V150));
	(void)((VFUN_NARGS=2,(*(LnkLI90))((V149),/* INLINE-ARGS */V162)));
	princ_str(");",VV[34]);
	V163= (*(LnkLI91))();
	bds_unwind1;
	bds_unwind1;
	{object V164 = Cnil;
	VMR13(V164)}}
	goto T383;
T383:;
	princ_str(");",VV[34]);
	{object V165 = Cnil;
	VMR13(V165)}}
	goto T378;
T378:;
	princ_str("\n	V",VV[34]);
	(void)((*(LnkLI77))(STREF(object,(V150),16)));
	princ_str("= ",VV[34]);
	{object V166= STREF(object,(V150),4);
	if((V166!= VV[23]))goto T445;
	base[0]= (V149);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T444;
	goto T445;
T445:;
	if((V166!= VV[25]))goto T447;
	base[0]= (V149);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T444;
	goto T447;
T447:;
	if((V166!= VV[26]))goto T449;
	base[0]= (V149);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	goto T444;
	goto T449;
T449:;
	if((V166!= VV[27]))goto T451;
	base[0]= (V149);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	goto T444;
	goto T451;
T451:;
	if((V166!= VV[7]))goto T453;
	base[0]= (V149);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk96)();
	vs_top=sup;
	goto T444;
	goto T453;
T453:;
	(void)((*(LnkLI85))());}
	goto T444;
T444:;
	princ_char(59,VV[34]);
	{object V167 = Cnil;
	VMR13(V167)}}
	goto T331;
T331:;
	{object V168 = Cnil;
	VMR13(V168)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SCH-GLOBAL	*/

static object LI14(V170)

register object V170;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V171;
	register object V172;
	V171= (VV[18]->s.s_dbind);
	V172= CMPcar((V171));
	goto T459;
T459:;
	if(!(((V171))==Cnil)){
	goto T460;}
	{object V173 = Cnil;
	VMR14(V173)}
	goto T460;
T460:;
	if(!((STREF(object,(V172),0))==((V170)))){
	goto T464;}
	{object V174 = (V172);
	VMR14(V174)}
	goto T464;
T464:;
	V171= CMPcdr((V171));
	V172= CMPcar((V171));
	goto T459;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ADD-GLOBALS	*/

static object LI15(V176)

object V176;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V177;
	register object V178;
	V177= (V176);
	V178= CMPcar((V177));
	goto T475;
T475:;
	if(!(((V177))==Cnil)){
	goto T476;}
	{object V179 = Cnil;
	VMR15(V179)}
	goto T476;
T476:;
	{register object V180;
	V181= (*(LnkLI68))((V178));
	{register object V183;
	{object V184 =((V178))->s.s_plist;
	 object ind= VV[5];
	while(V184!=Cnil){
	if(V184->c.c_car==ind){
	V183= (V184->c.c_cdr->c.c_car);
	goto T483;
	}else V184=V184->c.c_cdr->c.c_cdr;}
	V183= Cnil;}
	goto T483;
T483:;
	if(((V183))==Cnil){
	goto T485;}
	V182= (V183);
	goto T482;
	goto T485;
T485:;
	V182= Ct;}
	goto T482;
T482:;
	V180= (VFUN_NARGS=8,(*(LnkLI66))(VV[1],(V178),VV[14],VV[15],VV[16],/* INLINE-ARGS */V181,VV[17],V182));
	(VV[13]->s.s_dbind)= make_cons((V180),(VV[13]->s.s_dbind));}
	V177= CMPcdr((V177));
	V178= CMPcar((V177));
	goto T475;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1SETQ	*/

static object LI16(V186)

register object V186;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(!(((V186))==Cnil)){
	goto T494;}
	{object V187 = (*(LnkLI97))();
	VMR16(V187)}
	goto T494;
T494:;
	if(!((CMPcdr((V186)))==Cnil)){
	goto T497;}
	{object V188 = (*(LnkLI98))(VV[43],small_fixnum(2),small_fixnum(1));
	VMR16(V188)}
	goto T497;
T497:;
	if(!((CMPcddr((V186)))==Cnil)){
	goto T500;}
	{object V189 = (*(LnkLI99))(CMPcar((V186)),CMPcadr((V186)));
	VMR16(V189)}
	goto T500;
T500:;
	{register object V190;
	register object V191;
	V190= (V186);
	V191= Cnil;
	goto T503;
T503:;
	if(!(((V190))==Cnil)){
	goto T504;}
	V192= reverse((V191));
	V193= make_cons(VV[44],/* INLINE-ARGS */V192);
	{object V194 = (*(LnkLI100))(/* INLINE-ARGS */V193);
	VMR16(V194)}
	goto T504;
T504:;
	if(!((CMPcdr((V190)))==Cnil)){
	goto T508;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[45],CMPcar((V190)))));
	goto T508;
T508:;
	{register object V195;
	V195= list(3,VV[43],CMPcar((V190)),CMPcadr((V190)));
	V191= make_cons((V195),(V191));}
	V190= CMPcddr((V190));
	goto T503;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1SETQ1	*/

static object LI17(V198,V199)

register object V198;object V199;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{register object V200;
	register object V201;
	register object V202;
	register object V203;
	V200= (VFUN_NARGS=0,(*(LnkLI71))());
	V201= Cnil;
	V202= Cnil;
	V203= Cnil;
	if(type_of((V198))==t_symbol){
	goto T521;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[46],(V198))));
	goto T521;
T521:;
	base[1]= (V198);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T524;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[47],(V198))));
	goto T524;
T524:;
	V203= (*(LnkLI72))((V198));
	{object V204;
	object V206;
	V204= CMPcar((V203));
	V206= make_cons((V204),STREF(object,V200,0));
	V207= Ct;
	STSET(object,V200,0, (V206));
	(void)((V206));}
	V202= (*(LnkLI100))((V199));
	(void)((*(LnkLI101))((V200),CMPcadr((V202))));
	V201= (*(LnkLI102))(STREF(object,CMPcar((V203)),20),STREF(object,CMPcadr((V202)),8));
	if(((V201))!=Cnil){
	goto T538;}
	(void)((VFUN_NARGS=3,(*(LnkLI70))(VV[48],(V198),(V199))));
	goto T538;
T538:;
	if(((V201))==(STREF(object,CMPcadr((V202)),8))){
	goto T541;}
	{object V208;
	base[1]= CMPcadr((V202));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk103)();
	vs_top=sup;
	V208= vs_base[0];
	V209= Ct;
	STSET(object,(V208),8, (V201));
	(void)((V201));
	V202= listA(3,CMPcar((V202)),(V208),CMPcddr((V202)));}
	goto T541;
T541:;
	V210= Ct;
	STSET(object,(V200),8, (V201));
	(void)((V201));
	{object V211 = list(4,VV[43],(V200),(V203),(V202));
	VMR17(V211)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2SETQ	*/

static object LI18(V214,V215)

object V214;object V215;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	base[0]= make_cons(VV[0],(V214));
	bds_bind(VV[49],base[0]);
	V216= (*(LnkLI104))((V215));
	bds_unwind1;
	{object V217= CMPcar((V215));
	if((V217!= VV[105]))goto T551;
	{object V218 = (*(LnkLI106))(CMPcaddr((V215)));
	VMR18(V218)}
	goto T551;
T551:;
	V219= make_cons(VV[0],(V214));
	{object V220 = (VFUN_NARGS=1,(*(LnkLI76))(/* INLINE-ARGS */V219));
	VMR18(V220)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGV	*/

static object LI19(V222)

register object V222;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V223;
	object V224;
	register object V225;
	V223= Cnil;
	V224= Cnil;
	V225= (VFUN_NARGS=0,(*(LnkLI71))());
	if(((V222))==Cnil){
	goto T556;}
	if(!((CMPcdr((V222)))==Cnil)){
	goto T555;}
	goto T556;
T556:;
	V226 = CMPmake_fixnum((long)length((V222)));
	(void)((*(LnkLI98))(VV[50],small_fixnum(2),V226));
	goto T555;
T555:;
	V223= (*(LnkLI107))(CMPcar((V222)),(V225));
	V224= (*(LnkLI107))(CMPcadr((V222)),(V225));
	{object V227 = list(5,VV[50],(V225),(V223),(V224),(*(LnkLI108))(CMPcddr((V222)),(V225)));
	VMR19(V227)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2PROGV	*/

static object LI20(V231,V232,V233)

object V231;object V232;object V233;
{	 VMB20 VMS20 VMV20
	bds_check;
	goto TTL;
TTL:;
	{object V234;
	(VV[51]->s.s_dbind)= number_plus((VV[51]->s.s_dbind),small_fixnum(1));
	V234= (VV[51]->s.s_dbind);
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	princ_str("\n	{object symbols,values;",VV[34]);
	princ_str("\n	bds_ptr V",VV[34]);
	(void)((*(LnkLI77))((V234)));
	princ_str("=bds_top;",VV[34]);
	(VV[52]->s.s_dbind)= make_cons(V234,(VV[52]->s.s_dbind));
	bds_bind(VV[53],(VV[53]->s.s_dbind));
	base[3]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[3]);
	(void)((*(LnkLI104))((V231)));
	princ_str("\n	symbols= ",VV[34]);
	(void)((*(LnkLI77))((VV[49]->s.s_dbind)));
	princ_char(59,VV[34]);
	bds_unwind1;
	base[3]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[3]);
	(void)((*(LnkLI104))((V232)));
	princ_str("\n	values= ",VV[34]);
	(void)((*(LnkLI77))((VV[49]->s.s_dbind)));
	princ_char(59,VV[34]);
	bds_unwind1;
	princ_str("\n	while(!endp(symbols)){",VV[34]);
	if(((VV[37]->s.s_dbind))==Cnil){
	goto T589;}
	princ_str("\n	if(type_of(MMcar(symbols))!=t_symbol)",VV[34]);
	princ_str("\n	FEinvalid_variable(\"~s is not a symbol.\",MMcar(symbols));",VV[34]);
	goto T589;
T589:;
	princ_str("\n	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);",VV[34]);
	princ_str("\n	else{bds_bind(MMcar(symbols),MMcar(values));",VV[34]);
	princ_str("\n	values=MMcdr(values);}",VV[34]);
	princ_str("\n	symbols=MMcdr(symbols);}",VV[34]);
	bds_unwind1;
	base[2]= (V233);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk110)();
	vs_top=sup;
	princ_char(125,VV[34]);
	{object V236 = Cnil;
	bds_unwind1;
	VMR20(V236)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PSETQ	*/

static object LI21(V238)

object V238;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V239;
	register object V240;
	object V241;
	V239= Cnil;
	V240= Cnil;
	V241= (VFUN_NARGS=2,(*(LnkLI71))(VV[17],VV[55]));
	{register object V242;
	V242= (V238);
	goto T610;
T610:;
	if(!(((V242))==Cnil)){
	goto T611;}
	goto T608;
	goto T611;
T611:;
	if(type_of(CMPcar((V242)))==t_symbol){
	goto T615;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[56],CMPcar((V242)))));
	goto T615;
T615:;
	base[1]= CMPcar((V242));
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T618;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[57],CMPcar((V242)))));
	goto T618;
T618:;
	if(!((CMPcdr((V242)))==Cnil)){
	goto T622;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[58],CMPcar((V242)))));
	goto T622;
T622:;
	{register object V243;
	register object V244;
	register object V245;
	V243= (*(LnkLI72))(CMPcar((V242)));
	V244= (*(LnkLI100))(CMPcadr((V242)));
	V245= (*(LnkLI102))(STREF(object,CMPcar((V243)),20),STREF(object,CMPcadr((V244)),8));
	if(equal((V245),STREF(object,CMPcadr((V244)),8))){
	goto T629;}
	{register object V246;
	base[4]= CMPcadr((V244));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk103)();
	vs_top=sup;
	V246= vs_base[0];
	V247= Ct;
	STSET(object,(V246),8, (V245));
	(void)((V245));
	V244= listA(3,CMPcar((V244)),(V246),CMPcddr((V244)));}
	goto T629;
T629:;
	V239= make_cons(V243,(V239));
	V240= make_cons(V244,(V240));
	{object V250;
	register object V251;
	object V252;
	V250= CMPcar((V243));
	V251= (V241);
	V252= make_cons((V250),STREF(object,(V251),0));
	V253= Ct;
	STSET(object,(V251),0, (V252));
	(void)((V252));}
	(void)((*(LnkLI101))((V241),CMPcadar((V240))));}
	V242= CMPcddr((V242));
	goto T610;}
	goto T608;
T608:;
	V254= reverse((V239));
	{object V255 = list(4,VV[59],(V241),/* INLINE-ARGS */V254,reverse((V240)));
	VMR21(V255)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2PSETQ	*/

static object LI22(V258,V259)

object V258;register object V259;
{	 VMB22 VMS22 VMV22
	bds_check;
	goto TTL;
TTL:;
	{register object V260;
	object V261;
	bds_bind(VV[53],(VV[53]->s.s_dbind));
	V260= Cnil;
	V261= small_fixnum(0);
	{register object V262;
	register object V263;
	V262= (V258);
	V263= CMPcar((V262));
	goto T653;
T653:;
	if(!(((V262))==Cnil)){
	goto T654;}
	goto T649;
	goto T654;
T654:;
	if(((*(LnkLI111))(CMPcar((V263)),CMPcdr((V259))))!=Cnil){
	goto T659;}
	if(((*(LnkLI112))(CMPcar((V263)),CMPcdr((V259))))==Cnil){
	goto T660;}
	goto T659;
T659:;
	{object V264= CMPcaar((V259));
	if((V264!= VV[105]))goto T664;
	{object V265;
	V265= make_cons((V263),CMPcaddar((V259)));
	V260= make_cons((V265),(V260));
	goto T658;}
	goto T664;
T664:;
	{register object x= STREF(object,CMPcar((V263)),4),V266= VV[60];
	while(V266!=Cnil)
	if(eql(x,V266->c.c_car)){
	goto T669;
	}else V266=V266->c.c_cdr;
	goto T668;}
	goto T669;
T669:;
	{object V267;
	object V268;
	object V269;
	V267= STREF(object,CMPcar((V263)),4);
	(VV[51]->s.s_dbind)= number_plus((VV[51]->s.s_dbind),small_fixnum(1));
	V268= (VV[51]->s.s_dbind);
	V270= (VFUN_NARGS=4,(*(LnkLI66))(VV[14],(V267),VV[16],(V268)));
	V269= list(3,VV[0],/* INLINE-ARGS */V270,Cnil);
	princ_str("\n	{",VV[34]);
	(void)((*(LnkLI77))((VV[61]->s.s_dbind)));
	V271= (*(LnkLI113))((V267));
	(void)((*(LnkLI77))(/* INLINE-ARGS */V271));
	princ_char(86,VV[34]);
	(void)((*(LnkLI77))((V268)));
	princ_char(59,VV[34]);
	V261= number_plus((V261),small_fixnum(1));
	bds_bind(VV[49],(V269));
	V272= (*(LnkLI104))(CMPcar((V259)));
	bds_unwind1;
	{object V273;
	V273= make_cons((V263),(V269));
	V260= make_cons((V273),(V260));
	goto T658;}}
	goto T668;
T668:;
	base[2]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[2]);
	(void)((*(LnkLI104))(CMPcar((V259))));
	{object V274;
	V274= make_cons((V263),(VV[49]->s.s_dbind));
	V260= make_cons((V274),(V260));
	bds_unwind1;
	goto T658;}}
	goto T660;
T660:;
	base[2]= make_cons(VV[0],(V263));
	bds_bind(VV[49],base[2]);
	V275= (*(LnkLI104))(CMPcar((V259)));
	bds_unwind1;
	goto T658;
T658:;
	{object V276;
	V276= CMPcar((V259));
	V259= CMPcdr((V259));}
	V262= CMPcdr((V262));
	V263= CMPcar((V262));
	goto T653;}
	goto T649;
T649:;
	{register object V277;
	register object V278;
	V277= (V260);
	V278= CMPcar((V277));
	goto T704;
T704:;
	if(!(((V277))==Cnil)){
	goto T705;}
	goto T700;
	goto T705;
T705:;
	(void)((*(LnkLI42))(CMPcdr((V278)),CMPcaar((V278)),CMPcadar((V278))));
	V277= CMPcdr((V277));
	V278= CMPcar((V277));
	goto T704;}
	goto T700;
T700:;
	{object V280;
	V280= small_fixnum(0);
	goto T718;
T718:;
	if(!(number_compare((V280),V261)>=0)){
	goto T719;}
	goto T715;
	goto T719;
T719:;
	princ_char(125,VV[34]);
	V280= one_plus((V280));
	goto T718;}
	goto T715;
T715:;
	{object V281 = (VFUN_NARGS=1,(*(LnkLI76))(Cnil));
	bds_unwind1;
	VMR22(V281)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-VAR-DECL	*/

static object LI23(V283)

register object V283;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= (V283);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T729;}
	{object V284;
	V284= STREF(object,(V283),16);
	if(!((STREF(object,(V283),4))==(VV[24]))){
	goto T734;}
	princ_str("IDECL(",VV[34]);
	goto T734;
T734:;
	(void)((*(LnkLI77))((VV[61]->s.s_dbind)));
	V285= (*(LnkLI69))((V283));
	(void)((*(LnkLI77))(/* INLINE-ARGS */V285));
	V286= (*(LnkLI113))(STREF(object,(V283),4));
	(void)((*(LnkLI77))(/* INLINE-ARGS */V286));
	princ_char(86,VV[34]);
	(void)((*(LnkLI77))((V284)));
	if(!(eql(STREF(object,(V283),4),VV[24]))){
	goto T744;}
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V284)));
	princ_str("space,V",VV[34]);
	(void)((*(LnkLI77))((V284)));
	princ_str("alloc)",VV[34]);
	goto T744;
T744:;
	princ_char(59,VV[34]);
	{object V287 = Cnil;
	VMR23(V287)}}
	goto T729;
T729:;
	{object V288 = (*(LnkLI79))();
	VMR23(V288)}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],(void **)(void *)&LnkLI69,1,first,ap);va_end(ap);return V1;} /* REGISTER */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,3,first,ap);va_end(ap);return V1;} /* SET-VAR */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static object  LnkTLI112(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[112],(void **)(void *)&LnkLI112,2,first,ap);va_end(ap);return V1;} /* ARGS-INFO-REFERRED-VARS */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,2,first,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* C2EXPR */
static object  LnkTLI109(){return call_proc0(VV[109],(void **)(void *)&LnkLI109);} /* VS-PUSH */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,2,first,ap);va_end(ap);return V1;} /* C1PROGN* */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[107],(void **)(void *)&LnkLI107,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,1,first,ap);va_end(ap);return V1;} /* C2LOCATION */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[104],(void **)(void *)&LnkLI104,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static void LnkT103(){ call_or_link(VV[103],(void **)(void *)&Lnk103);} /* COPY-INFO */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[102],(void **)(void *)&LnkLI102,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[100],(void **)(void *)&LnkLI100,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[99],(void **)(void *)&LnkLI99,2,first,ap);va_end(ap);return V1;} /* C1SETQ1 */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static object  LnkTLI97(){return call_proc0(VV[97],(void **)(void *)&LnkLI97);} /* C1NIL */
static void LnkT96(){ call_or_link(VV[96],(void **)(void *)&Lnk96);} /* WT-LOC */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* WT-SHORT-FLOAT-LOC */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* WT-LONG-FLOAT-LOC */
static void LnkT93(){ call_or_link(VV[93],(void **)(void *)&Lnk93);} /* WT-CHARACTER-LOC */
static void LnkT92(){ call_or_link(VV[92],(void **)(void *)&Lnk92);} /* WT-FIXNUM-LOC */
static object  LnkTLI91(){return call_proc0(VV[91],(void **)(void *)&LnkLI91);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[90],(void **)(void *)&LnkLI90,first,ap);va_end(ap);return V1;} /* WT-INTEGER-LOC */
static object  LnkTLI89(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[89],(void **)(void *)&LnkLI89,1,first,ap);va_end(ap);return V1;} /* SAVE-AVMA */
static void LnkT87(){ call_or_link(VV[87],(void **)(void *)&Lnk87);} /* WT-INLINE-LOC */
static object  LnkTLI85(){return call_proc0(VV[85],(void **)(void *)&LnkLI85);} /* BABOON */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[84],(void **)(void *)&LnkLI84,1,first,ap);va_end(ap);return V1;} /* WT-DOWN */
static object  LnkTLI82(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[82],(void **)(void *)&LnkLI82,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI81(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[81],(void **)(void *)&LnkLI81,1,first,ap);va_end(ap);return V1;} /* WT-VS* */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[80],(void **)(void *)&LnkLI80,1,first,ap);va_end(ap);return V1;} /* WT-CCB-VS */
static object  LnkTLI79(){return call_proc0(VV[79],(void **)(void *)&LnkLI79);} /* WFS-ERROR */
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* FIXNUMP */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[77],(void **)(void *)&LnkLI77,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[76],(void **)(void *)&LnkLI76,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,2,first,ap);va_end(ap);return V1;} /* TYPE>= */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,1,first,ap);va_end(ap);return V1;} /* UNDEFINED-VARIABLE */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* SCH-GLOBAL */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,1,first,ap);va_end(ap);return V1;} /* C1VREF */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[71],(void **)(void *)&LnkLI71,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[70],(void **)(void *)&LnkLI70,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[67],(void **)(void *)&LnkLI67,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[66],(void **)(void *)&LnkLI66,first,ap);va_end(ap);return V1;} /* MAKE-VAR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

