
#include "cmpinclude.h"
#include "cmpcall.h"
void init_cmpcall(){do_init(VV);}
/*	local entry for function FAST-LINK-PROCLAIMED-TYPE-P	*/

static object LI1(object V1,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{register object V2;
	object V3;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V2= V1;
	narg = narg - 1;
	if (narg <= 0) goto T1;
	else {
	V3= first;}
	--narg; goto T2;
	goto T1;
T1:;
	V3= Cnil;
	goto T2;
T2:;
	if(type_of((V2))==t_symbol){
	goto T4;}
	{object V4 = Cnil;
	VMR1(V4)}
	goto T4;
T4:;
	if(((long)length((V3)))<(64)){
	goto T6;}
	{object V5 = Cnil;
	VMR1(V5)}
	goto T6;
T6:;{object V6;
	if((get((V2),VV[0],Cnil))!=Cnil){
	goto T10;}
	V6= Cnil;
	goto T9;
	goto T10;
T10:;
	V6= (type_of((V3))==t_cons||((V3))==Cnil?Ct:Cnil);
	goto T9;
T9:;
	if(V6==Cnil)goto T8;
	{object V7 = V6;
	VMR1(V7)}
	goto T8;
T8:;}
	if((get((V2),VV[1],Cnil))!=Cnil){
	goto T12;}
	{object V8 = Cnil;
	VMR1(V8)}
	goto T12;
T12:;
	{object V9;
	V9= get((V2),VV[2],Cnil);
	{register object x= (V9),V11= VV[3];
	while(!endp(V11))
	if(eql(x,V11->c.c_car)){
	V10= V11;
	goto T17;
	}else V11=V11->c.c_cdr;
	V10= Cnil;}
	goto T17;
T17:;
	if((V10)==Cnil){
	goto T14;}}
	{object V12 = Cnil;
	VMR1(V12)}
	goto T14;
T14:;
	{register object V13;
	register object V14;
	V13= get((V2),VV[4],Cnil);
	V14= car((V13));
	goto T21;
T21:;
	if(!(endp_prop((V13)))){
	goto T22;}
	{object V15 = Ct;
	VMR1(V15)}
	goto T22;
T22:;
	if(!(((V14))==(VV[5]))){
	goto T27;}
	goto T26;
	goto T27;
T27:;{object V16;
	{register object V17;
	V17= (V14);
	{register object x= (V17),V19= VV[3];
	while(!endp(V19))
	if(eql(x,V19->c.c_car)){
	V18= V19;
	goto T31;
	}else V19=V19->c.c_cdr;
	V18= Cnil;}
	goto T31;
T31:;
	V16= ((V18)==Cnil?Ct:Cnil);}
	if(V16==Cnil)goto T29;
	goto T26;
	goto T29;
T29:;}
	{object V20 = Cnil;
	VMR1(V20)}
	goto T26;
T26:;
	V13= cdr((V13));
	V14= car((V13));
	goto T21;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CMP-MACRO-FUNCTION	*/

static object LI2(V22)

object V22;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V23;
	V23= Cnil;
	V23= (*(LnkLI100))((V22));
	if(((V23))==Cnil){
	goto T39;}
	if(!((car((V23)))==(VV[6]))){
	goto T43;}
	{object V24 = Cnil;
	VMR2(V24)}
	goto T43;
T43:;
	{object V25 = (V23);
	VMR2(V25)}
	goto T39;
T39:;
	base[0]= (V22);
	vs_top=(vs_base=base+0)+1;
	Lmacro_function();
	vs_top=sup;
	{object V26 = vs_base[0];
	VMR2(V26)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1FUNOB	*/

static object LI3(V28)

register object V28;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{register object V29;
	V29= Cnil;
	if(!(type_of((V28))==t_cons)){
	goto T47;}
	if(!(type_of(car((V28)))==t_symbol)){
	goto T47;}
	if(((*(LnkLI101))(car((V28))))==Cnil){
	goto T47;}
	V28= (*(LnkLI102))((V28));
	goto T47;
T47:;{object V30;
	if(type_of((V28))==t_cons){
	goto T57;}
	V30= Cnil;
	goto T56;
	goto T57;
T57:;{object V31;
	if((car((V28)))==(VV[7])){
	goto T61;}
	V31= Cnil;
	goto T60;
	goto T61;
T61:;
	if(((endp_prop(cdr((V28)))?Ct:Cnil))==Cnil){
	goto T63;}
	V31= Cnil;
	goto T60;
	goto T63;
T63:;
	if(endp_prop(cddr((V28)))){
	goto T65;}
	V31= Cnil;
	goto T60;
	goto T65;
T65:;{object V32;
	if(type_of(cadr((V28)))==t_cons){
	goto T69;}
	V32= Cnil;
	goto T68;
	goto T69;
T69:;
	if(((endp_prop(cdadr((V28)))?Ct:Cnil))==Cnil){
	goto T71;}
	V32= Cnil;
	goto T68;
	goto T71;
T71:;
	if((caadr((V28)))==(VV[8])){
	goto T73;}
	V32= Cnil;
	goto T68;
	goto T73;
T73:;
	bds_bind(VV[9],Cnil);
	bds_bind(VV[10],Cnil);
	bds_bind(VV[11],Cnil);
	bds_bind(VV[12],Cnil);
	{object V33;
	V33= (VFUN_NARGS=1,(*(LnkLI103))(cdadr((V28))));
	V34= list(3,VV[13],cadr((V33)),(V33));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V32= V34;}
	goto T68;
T68:;
	if(V32==Cnil)goto T67;
	V31= V32;
	goto T60;
	goto T67;
T67:;}
	if(type_of(cadr((V28)))==t_symbol){
	goto T76;}
	V31= Cnil;
	goto T60;
	goto T76;
T76:;{object V35;
	V29= (*(LnkLI100))(cadr((V28)));
	if(((V29))!=Cnil){
	goto T80;}
	V35= Cnil;
	goto T79;
	goto T80;
T80:;
	if((car((V29)))==(VV[6])){
	goto T83;}
	V35= Cnil;
	goto T79;
	goto T83;
T83:;
	V35= (V29);
	goto T79;
T79:;
	if(V35==Cnil)goto T78;
	V31= V35;
	goto T60;
	goto T78;
T78:;}
	V36= get(cadr((V28)),VV[16],Cnil);
	V37= (VFUN_NARGS=2,(*(LnkLI104))(VV[15],((V36)==Cnil?Ct:Cnil)));
	V31= list(3,VV[14],/* INLINE-ARGS */V37,cadr((V28)));
	goto T60;
T60:;
	if(V31==Cnil)goto T59;
	V30= V31;
	goto T56;
	goto T59;
T59:;}
	if((car((V28)))==(VV[17])){
	goto T86;}
	V30= Cnil;
	goto T56;
	goto T86;
T86:;
	if(((endp_prop(cdr((V28)))?Ct:Cnil))==Cnil){
	goto T88;}
	V30= Cnil;
	goto T56;
	goto T88;
T88:;
	if(endp_prop(cddr((V28)))){
	goto T90;}
	V30= Cnil;
	goto T56;
	goto T90;
T90:;{object V38;
	if(type_of(cadr((V28)))==t_cons){
	goto T94;}
	V38= Cnil;
	goto T93;
	goto T94;
T94:;
	if((caadr((V28)))==(VV[8])){
	goto T96;}
	V38= Cnil;
	goto T93;
	goto T96;
T96:;
	if(((endp_prop(cdadr((V28)))?Ct:Cnil))==Cnil){
	goto T98;}
	V38= Cnil;
	goto T93;
	goto T98;
T98:;
	{object V39;
	V39= (VFUN_NARGS=1,(*(LnkLI103))(cdadr((V28))));
	V38= list(3,VV[13],cadr((V39)),(V39));}
	goto T93;
T93:;
	if(V38==Cnil)goto T92;
	V30= V38;
	goto T56;
	goto T92;
T92:;}
	if(type_of(cadr((V28)))==t_symbol){
	goto T101;}
	V30= Cnil;
	goto T56;
	goto T101;
T101:;{object V40;
	V29= (*(LnkLI100))(cadr((V28)));
	if(((V29))!=Cnil){
	goto T105;}
	V40= Cnil;
	goto T104;
	goto T105;
T105:;
	if((car((V29)))==(VV[6])){
	goto T108;}
	V40= Cnil;
	goto T104;
	goto T108;
T108:;
	V40= (V29);
	goto T104;
T104:;
	if(V40==Cnil)goto T103;
	V30= V40;
	goto T56;
	goto T103;
T103:;}
	V41= get(cadr((V28)),VV[16],Cnil);
	V42= (VFUN_NARGS=2,(*(LnkLI104))(VV[15],((V41)==Cnil?Ct:Cnil)));
	V30= list(3,VV[14],/* INLINE-ARGS */V42,cadr((V28)));
	goto T56;
T56:;
	if(V30==Cnil)goto T55;
	{object V43 = V30;
	VMR3(V43)}
	goto T55;
T55:;}
	{object V44;
	object V45;
	V44= (*(LnkLI105))((V28));
	V45= (VFUN_NARGS=2,(*(LnkLI104))(VV[15],Ct));
	(void)((*(LnkLI106))((V45),cadr((V44))));
	{object V46 = list(3,VV[18],(V45),(V44));
	VMR3(V46)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2FUNCALL-AUX	*/

static object LI4(V48)

register object V48;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V49;
	object V50;
	object V51;
	object V52;
	V49= cadr((V48));
	V50= caddr((V48));
	V51= cadddr((V48));
	V52= car(cddddr((V48)));
	{object V53 = (VFUN_NARGS=4,(*(LnkLI107))((V50),(V51),(V52),(V49)));
	VMR4(V53)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2FUNCALL	*/

static object LI5(object V55,object V54,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	bds_check;
	{register object V56;
	register object V57;
	register object V58;
	object V59;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V56= V55;
	V57= V54;
	narg = narg - 2;
	if (narg <= 0) goto T118;
	else {
	V58= first;}
	if (--narg <= 0) goto T119;
	else {
	V59= va_arg(ap,object);}
	--narg; goto T120;
	goto T118;
T118:;
	V58= Cnil;
	goto T119;
T119:;
	V59= Cnil;
	goto T120;
T120:;
	{object V60= car((V56));
	if((V60!= VV[14]))goto T123;
	{object V61 = (*(LnkLI108))(caddr((V56)),(V57),(V58),Ct);
	VMR5(V61)}
	goto T123;
T123:;
	if((V60!= VV[6]))goto T124;
	{object V62 = (*(LnkLI109))(cddr((V56)),(V57));
	VMR5(V62)}
	goto T124;
T124:;
	if((V60!= VV[13]))goto T125;
	{object V63 = (*(LnkLI110))(caddr((V56)),(V57));
	VMR5(V63)}
	goto T125;
T125:;
	if((V60!= VV[18]))goto T126;
	{register object V64;
	base[0]= symbol_value(VV[19]);
	V64= caddr((V56));
	bds_bind(VV[19],base[0]);
	if(!(type_of((V57))==t_cons||((V57))==Cnil)){
	goto T129;}
	if((symbol_value(VV[20]))==Cnil){
	goto T129;}
	if((symbol_value(VV[21]))==(VV[22])){
	goto T130;}
	if(!(type_of(symbol_value(VV[21]))==t_cons)){
	goto T137;}
	if((car(symbol_value(VV[21])))==(VV[23])){
	goto T130;}
	goto T137;
T137:;
	if(((V59))==Cnil){
	goto T129;}
	V65= structure_ref((V59),VV[24],2);
	if(!(equal(/* INLINE-ARGS */V65,VV[25]))){
	goto T129;}
	goto T130;
T130:;
	(void)((*(LnkLI111))((V64),(V57),(V59)));
	{object V66 = Cnil;
	bds_unwind1;
	VMR5(V66)}
	goto T129;
T129:;
	if(((V58))!=Cnil){
	goto T145;}
	if(type_of((V57))==t_cons||((V57))==Cnil){
	goto T148;}
	(void)((*(LnkLI112))());
	goto T148;
T148:;
	if(!((car((V64)))==(VV[26]))){
	goto T152;}
	V58= caddr((V64));
	goto T145;
	goto T152;
T152:;
	if(!((car((V64)))==(VV[23]))){
	goto T156;}
	if(((*(LnkLI113))(caaddr((V64)),(V57)))!=Cnil){
	goto T156;}
	V58= make_cons(VV[23],caddr((V64)));
	goto T145;
	goto T156;
T156:;
	V58= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],(V58));
	V67= (*(LnkLI115))(caddr((V56)));
	bds_unwind1;
	goto T145;
T145:;
	(void)((*(LnkLI116))((V57)));
	if((symbol_value(VV[28]))==Cnil){
	goto T166;}
	princ_str("\n	super_funcall(",VV[29]);
	(void)((*(LnkLI117))((V58)));
	princ_str(");",VV[29]);
	goto T164;
	goto T166;
T166:;
	if((symbol_value(VV[30]))==Cnil){
	goto T172;}
	(void)((
	(type_of(symbol_value(VV[30])) == t_sfun ?(*((symbol_value(VV[30]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[30])),fcall.argd=1,fcalln))((V58))));
	goto T164;
	goto T172;
T172:;
	princ_str("\n	super_funcall_no_event(",VV[29]);
	(void)((*(LnkLI117))((V58)));
	princ_str(");",VV[29]);
	goto T164;
T164:;
	{object V68 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	bds_unwind1;
	VMR5(V68)}}
	goto T126;
T126:;
	{object V69 = (*(LnkLI112))();
	VMR5(V69)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FCALLN-INLINE	*/

static object LI6(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{register object V70;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	V71 = list_vector_new(narg,first,ap);
	V70= V71;
	{register object V72;
	object V73;
	V72= car((V70));
	V73= Cnil;
	(void)((*(LnkLI117))(VV[32]));
	if(!(type_of((V72))==t_cons)){
	goto T182;}
	if((car((V72)))==(VV[23])){
	goto T181;}
	goto T182;
T182:;
	V72= list(2,VV[33],(VFUN_NARGS=0,(*(LnkLI119))()));
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V72)));
	princ_str(" = ",VV[29]);
	(void)((*(LnkLI117))(car((V70))));
	princ_char(44,VV[29]);
	goto T181;
T181:;
	princ_str("\n	(type_of(",VV[29]);
	(void)((*(LnkLI117))((V72)));
	princ_str(") == t_sfun ?",VV[29]);
	princ_str("(*((",VV[29]);
	(void)((*(LnkLI117))((V72)));
	princ_str(")->sfn.sfn_self)):",VV[29]);
	if(!(number_compare(symbol_value(VV[34]),small_fixnum(3))<0)){
	goto T200;}
	V73= Ct;
	princ_str("\n	(fcall.argd=",VV[29]);
	V74 = make_fixnum((long)length(cdr((V70))));
	(void)((*(LnkLI117))(V74));
	princ_str(",type_of(",VV[29]);
	(void)((*(LnkLI117))((V72)));
	princ_str(")==t_vfun) ?",VV[29]);
	princ_str("\n	(*((",VV[29]);
	(void)((*(LnkLI117))((V72)));
	princ_str(")->sfn.sfn_self)):",VV[29]);
	goto T200;
T200:;
	princ_str("\n	(fcall.fun=(",VV[29]);
	(void)((*(LnkLI117))((V72)));
	princ_str("),",VV[29]);
	if(((V73))!=Cnil){
	goto T218;}
	princ_str("fcall.argd=",VV[29]);
	V75 = make_fixnum((long)length(cdr((V70))));
	(void)((*(LnkLI117))(V75));
	princ_char(44,VV[29]);
	goto T218;
T218:;
	princ_str("fcalln))(",VV[29]);
	if((cdr((V70)))==Cnil){
	goto T226;}
	(void)((*(LnkLI117))(cadr((V70))));
	{register object V76;
	register object V77;
	V76= cddr((V70));
	V77= car((V76));
	goto T234;
T234:;
	if(!(endp_prop((V76)))){
	goto T235;}
	goto T226;
	goto T235;
T235:;
	(void)((*(LnkLI117))(VV[35]));
	(void)((*(LnkLI117))((V77)));
	V76= cdr((V76));
	V77= car((V76));
	goto T234;}
	goto T226;
T226:;
	(void)((*(LnkLI117))(VV[36]));
	(void)((*(LnkLI117))(VV[36]));
	{object V78 = Cnil;
	VMR6(V78)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function C2CALL-LAMBDA	*/

static object LI7(V81,V82)

object V81;register object V82;
{	 VMB7 VMS7 VMV7
	bds_check;
	goto TTL;
TTL:;
	{register object V83;
	V83= caddr((V81));
	if((cadr((V83)))!=Cnil){
	goto T250;}
	if((caddr((V83)))!=Cnil){
	goto T250;}
	if((cadddr((V83)))!=Cnil){
	goto T250;}
	if(type_of((V82))==t_cons||((V82))==Cnil){
	goto T251;}
	goto T250;
T250:;
	if(!(type_of((V82))==t_cons||((V82))==Cnil)){
	goto T259;}
	{object V84;
	V84= symbol_value(VV[19]);
	bds_bind(VV[19],symbol_value(VV[19]));
	(void)((*(LnkLI120))((V82)));
	if(((*(LnkLI121))((V83)))==Cnil){
	bds_unwind1;
	goto T259;}
	princ_str("\n	vs_top=(vs_base=base+",VV[29]);
	(void)((*(LnkLI117))((V84)));
	princ_str(")+",VV[29]);
	V85= number_minus((VV[19]->s.s_dbind),(V84));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V85));
	princ_char(59,VV[29]);
	setq(VV[37],Ct);
	bds_unwind1;}
	goto T259;
T259:;
	{object V86 = (VFUN_NARGS=2,(*(LnkLI122))((V83),caddr(cddr((V81)))));
	VMR7(V86)}
	goto T251;
T251:;
	{object V87;
	object V88;
	V87= make_fixnum((long)length(car((V83))));
	V88= make_fixnum((long)length((V82)));
	if(!(eql((V88),(V87)))){
	goto T276;}
	goto T273;
	goto T276;
T276:;
	(void)((VFUN_NARGS=3,(*(LnkLI123))(VV[38],(V88),(V87))));}
	goto T273;
T273:;
	{object V89 = (*(LnkLI124))(car((V83)),(V82),caddr(cddr((V81))));
	VMR7(V89)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-FNAME-ARGS	*/

static object LI8(V92,V93)

object V92;object V93;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V94;
	V94= get((V92),VV[39],Ct);
	if((Ct)==((V94))){
	goto T280;}
	goto T279;
	goto T280;
T280:;
	if((get((V92),VV[40],Cnil))!=Cnil){
	goto T282;}
	goto T279;
	goto T282;
T282:;
	V94= VV[41];
	goto T279;
T279:;
	if(!(type_of((V94))==t_cons||((V94))==Cnil)){
	goto T286;}
	if(!(type_of((V93))==t_cons||((V93))==Cnil)){
	goto T286;}
	{register object x= VV[5],V95= (V94);
	while(!endp(V95))
	if(eql(x,V95->c.c_car)){
	goto T286;
	}else V95=V95->c.c_cdr;}
	if(!(((long)length((V94)))==((long)length((V93))))){
	goto T292;}
	{object V96 = Ct;
	VMR8(V96)}
	goto T292;
T292:;
	V97 = make_fixnum((long)length((V93)));
	V98 = make_fixnum((long)length((V94)));
	{object V99 = (VFUN_NARGS=4,(*(LnkLI125))(VV[42],(V92),V97,V98));
	VMR8(V99)}
	goto T286;
T286:;
	{object V100 = Cnil;
	VMR8(V100)}}
	return Cnil;
}
/*	function definition for SAVE-AVMA	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V101;
	check_arg(1);
	V101=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[43]))!=Cnil){
	goto T295;}{object V102;
	{register object x= VV[44],V103= car((V101));
	while(!endp(V103))
	if(eql(x,V103->c.c_car)){
	V102= V103;
	goto T301;
	}else V103=V103->c.c_cdr;
	V102= Cnil;}
	goto T301;
T301:;
	if(V102==Cnil)goto T300;
	setq(VV[43],V102);
	goto T299;
	goto T300;
T300:;}
	if(!((cadr((V101)))==(VV[44]))){
	goto T302;}
	setq(VV[43],Ct);
	goto T299;
	goto T302;
T302:;
	base[1]= small_fixnum(4);
	base[2]= caddr((V101));
	vs_top=(vs_base=base+1)+2;
	Llogbitp();
	vs_top=sup;
	setq(VV[43],vs_base[0]);
	goto T299;
T299:;
	if((symbol_value(VV[43]))==Cnil){
	goto T295;}
	princ_str("\n	{ save_avma;",VV[29]);
	vs_base=vs_top;
	(void) (*Lnk126)();
	vs_top=sup;
	if(!(type_of(symbol_value(VV[45]))==t_cons)){
	goto T309;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T309;
T309:;
	setq(VV[45],make_cons(symbol_value(VV[45]),VV[46]));
	base[1]= symbol_value(VV[45]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T295;
T295:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function C2CALL-GLOBAL	*/

static object LI10(V108,V109,V110,V111)

register object V108;register object V109;object V110;object V111;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	{register object V112;
	V112= Cnil;
	bds_bind(VV[19],symbol_value(VV[19]));
	if(((*(LnkLI127))((V108)))==Cnil){
	goto T314;}
	if(!(type_of((V109))==t_cons||((V109))==Cnil)){
	goto T317;}
	if((symbol_value(VV[47]))==Cnil){
	goto T317;}
	if((symbol_value(VV[48]))==Cnil){
	goto T317;}
	if(!((car(symbol_value(VV[48])))==((V108)))){
	goto T317;}
	{register object x= symbol_value(VV[49]),V113= VV[50];
	while(!endp(V113))
	if(eql(x,V113->c.c_car)){
	goto T327;
	}else V113=V113->c.c_cdr;
	goto T317;}
	goto T327;
T327:;
	if(((*(LnkLI128))())==Cnil){
	goto T317;}
	if(!(((long)length((V109)))==((long)length(cdr(symbol_value(VV[48])))))){
	goto T317;}
	bds_bind(VV[21],VV[22]);
	setq(VV[51],number_plus(symbol_value(VV[51]),small_fixnum(1)));
	bds_bind(VV[49],make_cons(symbol_value(VV[51]),Cnil));
	bds_bind(VV[52],make_cons((VV[49]->s.s_dbind),symbol_value(VV[52])));
	{object V115;
	object V116= cdr(symbol_value(VV[48]));
	if(endp(V116)){
	V114= Cnil;
	goto T336;}
	base[4]=V115=MMcons(Cnil,Cnil);
	goto T337;
T337:;
	(V115->c.c_car)= list(2,(V116->c.c_car),Cnil);
	V116=MMcdr(V116);
	if(endp(V116)){
	V114= base[4];
	goto T336;}
	V115=MMcdr(V115)=MMcons(Cnil,Cnil);
	goto T337;}
	goto T336;
T336:;
	(void)((*(LnkLI129))(V114,(V109)));
	if((cdr((VV[49]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T331;}
	princ_str("\n	goto T",VV[29]);
	(void)((*(LnkLI117))(car((VV[49]->s.s_dbind))));
	princ_char(59,VV[29]);
	princ_str("\nT",VV[29]);
	(void)((*(LnkLI117))(car((VV[49]->s.s_dbind))));
	princ_str(":;",VV[29]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T331;
T331:;
	(void)((*(LnkLI130))(VV[53]));
	princ_str("\n	goto TTL;",VV[29]);
	{object V118 = (VFUN_NARGS=2,(*(LnkLI131))(VV[54],(V108)));
	bds_unwind1;
	VMR10(V118)}
	goto T317;
T317:;
	if(!(type_of((V109))==t_cons||((V109))==Cnil)){
	goto T352;}
	if(((V110))!=Cnil){
	goto T352;}
	V112= (*(LnkLI132))((V108),(V109),(V111));
	if(((V112))==Cnil){
	goto T352;}
	bds_bind(VV[45],small_fixnum(0));
	bds_bind(VV[43],symbol_value(VV[43]));
	base[3]= (V112);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk133)();
	vs_top=sup;
	V119= (*(LnkLI134))((V112),(V109));
	(void)((VFUN_NARGS=3,(*(LnkLI118))(/* INLINE-ARGS */V119,Cnil,(V108))));
	{object V120 = (*(LnkLI135))();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR10(V120)}
	goto T352;
T352:;{object V121;
	V121= get((V108),VV[55],Cnil);
	if(V121==Cnil)goto T366;
	V112= V121;
	goto T365;
	goto T366;
T366:;}
	V112= get((V108),VV[56],Cnil);
	goto T365;
T365:;
	if(((V112))==Cnil){
	goto T363;}
	(void)((*(LnkLI136))((V108),(V109)));
	(void)((*(LnkLI116))((V109)));
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V112)));
	princ_str("();",VV[29]);
	{object V122 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V108)));
	bds_unwind1;
	VMR10(V122)}
	goto T363;
T363:;
	if(!(type_of((V109))==t_cons||((V109))==Cnil)){
	goto T375;}
	if(!(((long)length((V109)))<(10))){
	goto T375;}
	if((symbol_value(VV[57]))!=Cnil){
	goto T380;}
	if((get((V108),VV[58],Cnil))==Cnil){
	goto T375;}
	goto T380;
T380:;
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T386;}
	base[1]= Ct;
	base[2]= VV[60];
	base[3]= (V108);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T386;
T386:;
	if((VV[59])==(symbol_value(VV[21]))){
	goto T375;}
	if(((V110))!=Cnil){
	goto T375;}
	bds_bind(VV[45],small_fixnum(0));
	V123= (*(LnkLI137))((V108),(V109));
	V124= (*(LnkLI134))(/* INLINE-ARGS */V123,(V109));
	(void)((VFUN_NARGS=3,(*(LnkLI118))(/* INLINE-ARGS */V124,Cnil,(V108))));
	{object V125 = (*(LnkLI135))();
	bds_unwind1;
	bds_unwind1;
	VMR10(V125)}
	goto T375;
T375:;
	(void)((*(LnkLI116))((V109)));
	{object V126;
	V126= (*(LnkLI138))((V108),Cnil,(V109));
	princ_str("\n	(void) (*Lnk",VV[29]);
	(void)((*(LnkLI117))((V126)));
	princ_str(")(",VV[29]);
	if((get((V108),VV[61],Cnil))==Cnil){
	goto T402;}
	princ_str("Lclptr",VV[29]);
	(void)((*(LnkLI117))((V126)));
	goto T402;
T402:;
	princ_str(");",VV[29]);
	{object V127 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V108)));
	bds_unwind1;
	VMR10(V127)}}
	goto T314;
T314:;
	{object V128 = (*(LnkLI139))((V108),(V109),(V110),Cnil);
	bds_unwind1;
	VMR10(V128)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-FAST-LINK	*/

static object LI11(V132,V133,V134)

register object V132;object V133;object V134;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V135;
	object V136;
	object V137;
	register object V138;
	V137= (*(LnkLI140))((V132));
	V135= Cnil;
	V136= Cnil;
	V138= Cnil;
	if(((V133))==Cnil){
	goto T412;}
	{object V139;
	object V140;
	object V141;
	base[0]=MMcons(Cnil,Cnil);
	V139= Cnil;
	V140= Cnil;
	if(type_of((V134))==t_cons||((V134))==Cnil){
	goto T417;}
	V141= Cnil;
	goto T416;
	goto T417;
T417:;
	V141= make_fixnum((long)length((V134)));
	goto T416;
T416:;
	if((get((V132),VV[1],Cnil))==Cnil){
	goto T422;}
	V140= get((V132),VV[4],Cnil);
	goto T420;
	goto T422;
T422:;
	V139= get((V132),VV[0],Cnil);
	if(((V139))==Cnil){
	goto T425;}
	if(!(type_of((V139))==t_fixnum)){
	goto T430;}
	if(!(equal((V141),(V139)))){
	goto T432;}
	goto T428;
	goto T432;
T432:;
	(void)((VFUN_NARGS=2,(*(LnkLI125))(VV[62],(V132))));
	goto T428;
	goto T430;
T430:;
	(void)(sputprop((V132),VV[0],(V141)));
	goto T428;
T428:;
	base[2]= (V141);
	base[3]= VV[63];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V140= vs_base[0];
	goto T420;
	goto T425;
T425:;
	V140= Cnil;
	goto T420;
T420:;
	if((V141)==Cnil){
	goto T437;}
	V142 = make_fixnum((long)length((V140)));
	if(!(eql((V141),V142))){
	goto T438;}
	goto T437;
	goto T438;
T438:;{object V143;
	{register object x= VV[5],V144= (V140);
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	V143= V144;
	goto T441;
	}else V144=V144->c.c_cdr;
	V143= Cnil;}
	goto T441;
T441:;
	if(V143==Cnil)goto T440;
	goto T437;
	goto T440;
T440:;}
	V145 = make_fixnum((long)length((V140)));
	(void)((VFUN_NARGS=4,(*(LnkLI125))(VV[64],(V132),(V141),V145)));
	goto T437;
T437:;
	{register object x= (V132),V146= symbol_value(VV[65]);
	while(!endp(V146))
	if(type_of(V146->c.c_car)==t_cons &&eql(x,V146->c.c_car->c.c_car)){
	V136= (V146->c.c_car);
	goto T444;
	}else V146=V146->c.c_cdr;
	V136= Cnil;}
	goto T444;
T444:;
	if((cddr((V136)))!=Cnil){
	goto T410;}
	{register object V147;
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
	V147= vs_base[0];
	base[2]= (V147);
	base[3]= VV[66];
	base[4]= (V137);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{register object V148;
	register object V149;
	register object V150;
	V148= Cnil;
	V149= (V140);
	V150= small_fixnum(0);
	goto T454;
T454:;
	if(((V149))!=Cnil){
	goto T455;}
	goto T452;
	goto T455;
T455:;
	if(!((car((V149)))==(VV[5]))){
	goto T461;}
	V138= Ct;
	(void)(princ(VV[67],(V147)));
	goto T459;
	goto T461;
T461:;
	if(((V148))==Cnil){
	goto T467;}
	(void)(princ(VV[68],(V147)));
	goto T465;
	goto T467;
T467:;
	V148= Ct;
	goto T465;
T465:;
	base[2]= (V147);
	base[3]= VV[69];
	base[4]= (V150);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T459;
T459:;
	V149= cdr((V149));
	V150= number_plus(small_fixnum(1),(V150));
	goto T454;}
	goto T452;
T452:;
	(void)(princ(VV[70],(V147)));
	base[2]= (V147);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk142)();
	vs_top=sup;
	(base[0]->c.c_car)= vs_base[0];}
	if(((V138))==Cnil){
	goto T479;}
	V135= 
	make_cclosure_new(LC21,Cnil,base[0],Cdata);
	goto T479;
T479:;
	{object V151;{object V153;
	V153= get((V132),VV[2],Cnil);
	if(V153==Cnil)goto T486;
	V152= V153;
	goto T485;
	goto T486;
T486:;}
	V152= Ct;
	goto T485;
T485:;
	if((V135)!=Cnil){
	V154= (V135);
	goto T488;}
	V154= (base[0]->c.c_car);
	goto T488;
T488:;
	V151= list(6,(V132),(V140),V152,small_fixnum(3),V154,VV[71]);
	setq(VV[72],make_cons((V151),symbol_value(VV[72])));}
	base[2]= Cnil;
	base[3]= VV[73];
	base[4]= (V137);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V155= vs_base[0];{object V157;
	V157= get((V132),VV[2],Cnil);
	if(V157==Cnil)goto T496;
	V156= V157;
	goto T495;
	goto T496;
T496:;}
	V156= Ct;
	goto T495;
T495:;
	V136= list(4,(V132),V155,V156,(V140));
	goto T410;}
	goto T412;
T412:;
	(void)((*(LnkLI136))((V132),(V134)));
	if((get((V132),VV[61],Cnil))==Cnil){
	goto T502;}
	V158= VV[61];
	goto T500;
	goto T502;
T502:;
	V158= Cnil;
	goto T500;
T500:;
	V136= list(3,(V132),(V137),V158);
	goto T410;
T410:;
	base[0]= V136;
	base[1]= symbol_value(VV[65]);
	base[2]= VV[74];
	base[3]= VV[75];
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	setq(VV[65],vs_base[0]);
	{object V160 = (V137);
	VMR11(V160)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for DECLARATION-TYPE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V161;
	check_arg(1);
	V161=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(equal((V161),VV[76]))){
	goto T511;}
	base[1]= VV[77];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T511;
T511:;
	if(!(equal((V161),VV[78]))){
	goto T514;}
	base[1]= VV[79];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T514;
T514:;
	base[1]= (V161);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function WT-FUNCTION-LINK	*/

static object LI13(V163)

register object V163;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{register object V164;
	register object V165;
	register object V166;
	object V167;
	V164= car((V163));
	V165= cadr((V163));
	V166= caddr((V163));
	V167= cadddr((V163));
	if(((V166))!=Cnil){
	goto T522;}
	princ_str("\nstatic void LnkT",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str("(){ call_or_link(VV[",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str(");}",VV[29]);
	goto T520;
	goto T522;
T522:;
	if(!(eql((V166),VV[61]))){
	goto T532;}
	princ_str("\nstatic void LnkT",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str("(ptr) object *ptr;{ call_or_link_closure(VV[",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str(",(void **)(void *)&Lclptr",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str(");}",VV[29]);
	goto T520;
	goto T532;
T532:;
	princ_str("\nstatic ",VV[29]);
	base[0]= (*(LnkLI143))((V166));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V168= vs_base[0];
	(void)((*(LnkLI117))(V168));
	princ_str(" LnkT",VV[29]);
	(void)((*(LnkLI117))((V165)));
	if(((V167))!=Cnil){
	goto T550;}
	if((Ct)==((V166))){
	goto T551;}
	goto T550;
T550:;
	{object V169;
	{register object x= VV[5],V170= (V167);
	while(!endp(V170))
	if(eql(x,V170->c.c_car)){
	V169= V170;
	goto T555;
	}else V170=V170->c.c_cdr;
	V169= Cnil;}
	goto T555;
T555:;
	princ_str("(object first,...){",VV[29]);
	base[0]= (*(LnkLI143))((V166));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V171= vs_base[0];
	(void)((*(LnkLI117))(V171));
	princ_str("V1;",VV[29]);
	princ_str("va_list ap;va_start(ap,first);V1=call_",VV[29]);
	if(((V169))==Cnil){
	goto T566;}
	V172= VV[80];
	goto T564;
	goto T566;
T566:;
	V172= VV[81];
	goto T564;
T564:;
	(void)((*(LnkLI117))(V172));
	princ_str("proc_new(VV[",VV[29]);
	V173= (*(LnkLI145))((V164));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V173));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V165)));
	if((V169)!=Cnil){
	goto T572;}
	princ_char(44,VV[29]);
	V174 = make_fixnum((long)(*(LnkLI146))((V167),(V166)));
	(void)((*(LnkLI117))(V174));
	goto T572;
T572:;
	princ_str(",first,ap);va_end(ap);return V1;}",VV[29]);
	goto T520;}
	goto T551;
T551:;
	princ_str("(){return call_proc0(VV[",VV[29]);
	V175= (*(LnkLI145))((V164));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V175));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V165)));
	princ_str(");}",VV[29]);
	goto T520;
T520:;
	V164= symbol_name((V164));
	if(((VFUN_NARGS=2,(*(LnkLI147))(VV[82],(V164))))==Cnil){
	goto T583;}
	V164= (VFUN_NARGS=2,(*(LnkLI148))(VV[82],(V164)));
	goto T583;
T583:;
	princ_str(" /* ",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str(" */",VV[29]);
	{object V176 = Cnil;
	VMR13(V176)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-FUNCALL-C	*/

static object LI14(V178)

register object V178;
{	 VMB14 VMS14 VMV14
	bds_check;
	goto TTL;
TTL:;
	{object V179;
	object V180;
	register object V181;
	V179= car((V178));
	V180= cdr((V178));
	V181= Cnil;
	if(!(eql(car((V179)),VV[23]))){
	goto T595;}
	{object V182;
	V182= make_cons(car((V179)),caddr((V179)));
	if((symbol_value(VV[83]))==Cnil){
	goto T598;}
	princ_str("\n	(type_of(",VV[29]);
	base[0]= (V182);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	princ_str(")==t_cfun)||FEinvalid_function(",VV[29]);
	base[0]= (V182);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	princ_str(");",VV[29]);
	goto T598;
T598:;
	(void)((*(LnkLI116))((V180)));
	princ_str("\n	(",VV[29]);
	base[0]= (V182);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	goto T593;}
	goto T595;
T595:;
	setq(VV[84],number_plus(symbol_value(VV[84]),small_fixnum(1)));
	V181= list(2,VV[33],symbol_value(VV[84]));
	bds_bind(VV[21],(V181));
	princ_str("\n	{object V",VV[29]);
	(void)((*(LnkLI117))(cadr((V181))));
	princ_char(59,VV[29]);
	(void)((*(LnkLI115))(car((V178))));
	(void)((*(LnkLI116))(cdr((V178))));
	princ_str("(V",VV[29]);
	(void)((*(LnkLI117))(cadr((V181))));
	bds_unwind1;
	goto T593;
T593:;
	princ_str(")->cf.cf_self ();",VV[29]);
	if((V181)==Cnil){
	goto T590;}
	princ_char(125,VV[29]);}
	goto T590;
T590:;
	{object V183 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR14(V183)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-PROC	*/

static object LI15(V186,V187)

object V186;object V187;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V188;
	register object V189;
	object V190;
	V188= make_fixnum((long)length((V187)));
	V189= Cnil;
	V190= (*(LnkLI145))((V186));
	base[2]= Ct;
	base[3]= VV[85];
	base[4]= (V186);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V191;
	{object V192= (V188);
	if(!eql(V192,VV[86]))goto T636;
	base[2]= Cnil;
	base[3]= VV[88];
	base[4]= (V190);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V193= vs_base[0];
	V191= list(5,VV[87],Ct,small_fixnum(3),V193,VV[58]);
	goto T635;
	goto T636;
T636:;
	if(!eql(V192,VV[89]))goto T641;
	base[2]= Cnil;
	base[3]= VV[91];
	base[4]= (V190);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V194= vs_base[0];
	V191= list(5,VV[90],Ct,small_fixnum(3),V194,VV[58]);
	goto T635;
	goto T641;
T641:;
	base[2]= (V188);
	base[3]= VV[63];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V195= vs_base[0];
	base[2]= Cnil;
	base[3]= VV[92];
	base[4]= (V190);
	base[5]= (V188);
	{register object V197;
	register object V198;
	V197= (V188);
	V198= small_fixnum(0);
	goto T659;
T659:;
	if(!(number_compare((V198),(V197))>=0)){
	goto T660;}
	base[6]= nreverse((V189));
	goto T655;
	goto T660;
T660:;
	{register object V199;
	V199= (V198);
	V189= make_cons((V199),(V189));}
	V198= one_plus((V198));
	goto T659;}
	goto T655;
T655:;
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V196= vs_base[0];
	V191= list(5,V195,Ct,small_fixnum(3),V196,VV[58]);}
	goto T635;
T635:;
	{object V200;
	V200= make_cons((V186),(V191));
	setq(VV[72],make_cons((V200),symbol_value(VV[72])));}
	{object V201 = (V191);
	VMR15(V201)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-SIMPLE-CALL	*/

static object LI16(object V204,object V203,object V202,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V205;
	object V206;
	object V207;
	object V208;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V205= V204;
	V206= V203;
	V207= V202;
	narg = narg - 3;
	if (narg <= 0) goto T673;
	else {
	V208= first;}
	--narg; goto T674;
	goto T673;
T673:;
	V208= Cnil;
	goto T674;
T674:;
	princ_str("simple_",VV[29]);
	(void)((*(LnkLI117))((V205)));
	princ_char(40,VV[29]);
	if(((V208))==Cnil){
	goto T680;}
	princ_str("VV[",VV[29]);
	(void)((*(LnkLI117))((V208)));
	princ_str("],",VV[29]);
	goto T680;
T680:;
	princ_str("base+",VV[29]);
	(void)((*(LnkLI117))((V206)));
	princ_char(44,VV[29]);
	(void)((*(LnkLI117))((V207)));
	princ_char(41,VV[29]);
	setq(VV[37],Ct);
	{object V209 = Ct;
	VMR16(V209)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function SAVE-FUNOB	*/

static object LI17(V211)

register object V211;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	{object V212= car((V211));
	if((V212!= VV[13])
	&& (V212!= VV[150])
	&& (V212!= VV[6]))goto T693;
	{object V213 = Cnil;
	VMR17(V213)}
	goto T693;
T693:;
	if((V212!= VV[14]))goto T694;
	if(((*(LnkLI127))(caddr((V211))))==Cnil){
	goto T695;}
	if((get(caddr((V211)),VV[55],Cnil))!=Cnil){
	goto T696;}
	if((get(caddr((V211)),VV[56],Cnil))!=Cnil){
	goto T696;}
	{register object x= caddr((V211)),V214= symbol_value(VV[93]);
	while(!endp(V214))
	if(type_of(V214->c.c_car)==t_cons &&eql(x,V214->c.c_car->c.c_car)){
	goto T696;
	}else V214=V214->c.c_cdr;}
	goto T695;
T695:;
	{object V215;
	V215= list(2,VV[27],(*(LnkLI114))());
	if((symbol_value(VV[83]))==Cnil){
	goto T707;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V215)));
	princ_str("=symbol_function(VV[",VV[29]);
	V216= (*(LnkLI140))(caddr((V211)));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V216));
	princ_str("]);",VV[29]);
	goto T705;
	goto T707;
T707:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V215)));
	princ_str("=VV[",VV[29]);
	V217= (*(LnkLI140))(caddr((V211)));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V217));
	princ_str("]->s.s_gfdef;",VV[29]);
	goto T705;
T705:;
	{object V218 = (V215);
	VMR17(V218)}}
	goto T696;
T696:;
	{object V219 = Cnil;
	VMR17(V219)}
	goto T694;
T694:;
	if((V212!= VV[18]))goto T719;
	{object V220;
	V220= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],(V220));
	(void)((*(LnkLI115))(caddr((V211))));
	{object V221 = (V220);
	bds_unwind1;
	VMR17(V221)}}
	goto T719;
T719:;
	{object V222 = (*(LnkLI112))();
	VMR17(V222)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-ARGS	*/

static object LI18(V224)

object V224;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	if(((V224))!=Cnil){
	goto T723;}
	princ_str("\n	vs_base=vs_top;",VV[29]);
	{object V225 = Cnil;
	VMR18(V225)}
	goto T723;
T723:;
	if(!(type_of((V224))==t_cons)){
	goto T727;}
	{object V226;
	V226= symbol_value(VV[19]);
	bds_bind(VV[19],symbol_value(VV[19]));
	{register object V227;
	register object V228;
	V227= (V224);
	V228= car((V227));
	goto T734;
T734:;
	if(!(endp_prop((V227)))){
	goto T735;}
	goto T730;
	goto T735;
T735:;
	base[2]= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],base[2]);
	V229= (*(LnkLI115))((V228));
	bds_unwind1;
	V227= cdr((V227));
	V228= car((V227));
	goto T734;}
	goto T730;
T730:;
	princ_str("\n	vs_top=(vs_base=base+",VV[29]);
	(void)((*(LnkLI117))((V226)));
	princ_str(")+",VV[29]);
	V230= number_minus((VV[19]->s.s_dbind),(V226));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V230));
	princ_char(59,VV[29]);
	setq(VV[37],Ct);
	{object V231 = Ct;
	bds_unwind1;
	VMR18(V231)}}
	goto T727;
T727:;
	{object V232 = Cnil;
	VMR18(V232)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-ARGS-LISPCALL	*/

static object LI19(V234)

object V234;
{	 VMB19 VMS19 VMV19
	bds_check;
	goto TTL;
TTL:;
	{register object V235;
	register object V236;
	V235= (V234);
	V236= car((V235));
	goto T756;
T756:;
	if(!(endp_prop((V235)))){
	goto T757;}
	{object V237 = Cnil;
	VMR19(V237)}
	goto T757;
T757:;
	base[1]= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],base[1]);
	V238= (*(LnkLI115))((V236));
	bds_unwind1;
	V235= cdr((V235));
	V236= car((V235));
	goto T756;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2CALL-UNKNOWN-GLOBAL	*/

static object LI20(V243,V244,V245,V246)

register object V243;register object V244;register object V245;register object V246;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	if((symbol_value(VV[28]))==Cnil){
	goto T769;}
	if(((V245))!=Cnil){
	goto T771;}
	V245= list(2,VV[27],(*(LnkLI114))());
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V245)));
	princ_str("=symbol_function(VV[",VV[29]);
	V247= (*(LnkLI140))((V243));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V247));
	princ_str("]);",VV[29]);
	goto T771;
T771:;
	(void)((*(LnkLI116))((V244)));
	princ_str("\n	funcall_with_catcher(VV[",VV[29]);
	V248= (*(LnkLI140))((V243));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V248));
	princ_str("],",VV[29]);
	(void)((*(LnkLI117))((V245)));
	princ_str(");",VV[29]);
	{object V249 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V243)));
	VMR20(V249)}
	goto T769;
T769:;
	if(((V245))==Cnil){
	goto T789;}
	(void)((*(LnkLI116))((V244)));
	if(((V246))==Cnil){
	goto T794;}
	if((symbol_value(VV[83]))==Cnil){
	goto T797;}
	princ_str("\n	funcall_no_event(",VV[29]);
	(void)((*(LnkLI117))((V245)));
	princ_str(");",VV[29]);
	goto T792;
	goto T797;
T797:;
	princ_str("\n	CMPfuncall(",VV[29]);
	(void)((*(LnkLI117))((V245)));
	princ_str(");",VV[29]);
	goto T792;
	goto T794;
T794:;
	princ_str("\n	funcall(",VV[29]);
	(void)((*(LnkLI117))((V245)));
	princ_str(");",VV[29]);
	goto T792;
T792:;
	{object V250 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR20(V250)}
	goto T789;
T789:;
	if(((*(LnkLI151))((V244)))==Cnil){
	goto T809;}
	{object V251;
	V251= symbol_value(VV[19]);
	V245= list(2,VV[27],(*(LnkLI114))());
	if((symbol_value(VV[83]))==Cnil){
	goto T815;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V245)));
	princ_str("=symbol_function(VV[",VV[29]);
	V252= (*(LnkLI140))((V243));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V252));
	princ_str("]);",VV[29]);
	goto T813;
	goto T815;
T815:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V245)));
	princ_str("=(VV[",VV[29]);
	V253= (*(LnkLI140))((V243));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V253));
	princ_str("]->s.s_gfdef);",VV[29]);
	goto T813;
T813:;
	(void)((*(LnkLI120))((V244)));
	if((symbol_value(VV[21]))==(VV[94])){
	goto T828;}
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T829;}
	goto T828;
T828:;
	princ_str("\n	lispcall",VV[29]);
	if(((V246))==Cnil){
	goto T835;}
	princ_str("_no_event",VV[29]);
	goto T835;
T835:;
	princ_str("(base+",VV[29]);
	(void)((*(LnkLI117))((V251)));
	princ_char(44,VV[29]);
	V254 = make_fixnum((long)length((V244)));
	(void)((*(LnkLI117))(V254));
	princ_str(");",VV[29]);
	setq(VV[37],Ct);
	{object V255 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR20(V255)}
	goto T829;
T829:;
	if(((V246))==Cnil){
	goto T849;}
	V256= VV[96];
	goto T847;
	goto T849;
T849:;
	V256= VV[97];
	goto T847;
T847:;
	V257 = make_fixnum((long)length((V244)));
	V258= list(4,VV[95],V256,(V251),V257);
	{object V259 = (VFUN_NARGS=1,(*(LnkLI118))(/* INLINE-ARGS */V258));
	VMR20(V259)}}
	goto T809;
T809:;
	{object V260;
	V260= symbol_value(VV[19]);
	(void)((*(LnkLI120))((V244)));
	if((symbol_value(VV[21]))==(VV[94])){
	goto T852;}
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T853;}
	goto T852;
T852:;
	princ_str("\n	symlispcall",VV[29]);
	if(((V246))==Cnil){
	goto T859;}
	princ_str("_no_event",VV[29]);
	goto T859;
T859:;
	princ_str("(VV[",VV[29]);
	V261= (*(LnkLI140))((V243));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V261));
	princ_str("],base+",VV[29]);
	(void)((*(LnkLI117))((V260)));
	princ_char(44,VV[29]);
	V262 = make_fixnum((long)length((V244)));
	(void)((*(LnkLI117))(V262));
	princ_str(");",VV[29]);
	setq(VV[37],Ct);
	{object V263 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V243)));
	VMR20(V263)}
	goto T853;
T853:;
	if(((V246))==Cnil){
	goto T875;}
	V264= VV[98];
	goto T873;
	goto T875;
T875:;
	V264= VV[99];
	goto T873;
T873:;
	V265 = make_fixnum((long)length((V244)));
	V266= list(5,VV[95],V264,(V260),V265,(*(LnkLI140))((V243)));
	{object V267 = (VFUN_NARGS=3,(*(LnkLI118))(/* INLINE-ARGS */V266,Cnil,(V243)));
	VMR20(V267)}}
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V268;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V268=(base[0]);
	vs_top=sup;
	princ_str("(VFUN_NARGS=",VV[29]);
	V269 = make_fixnum((long)length((V268)));
	(void)((*(LnkLI117))(V269));
	princ_char(44,VV[29]);
	base[1]= (base0[0]->c.c_car);
	base[2]= (V268);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk152)();
	vs_top=sup;
	princ_char(41,VV[29]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT152(){ call_or_link(VV[152],(void **)(void *)&Lnk152);} /* WT-INLINE-LOC */
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[151],(void **)(void *)&LnkLI151,1,first,ap);va_end(ap);return V1;} /* ARGS-CAUSE-SIDE-EFFECT */
static void LnkT149(){ call_or_link(VV[149],(void **)(void *)&Lnk149);} /* WT-LOC */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[148],(void **)(void *)&LnkLI148,first,ap);va_end(ap);return V1;} /* REMOVE */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[147],(void **)(void *)&LnkLI147,first,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,258,first,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[145],(void **)(void *)&LnkLI145,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT144(){ call_or_link(VV[144],(void **)(void *)&Lnk144);} /* DECLARATION-TYPE */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT142(){ call_or_link(VV[142],(void **)(void *)&Lnk142);} /* GET-OUTPUT-STREAM-STRING */
static void LnkT141(){ call_or_link(VV[141],(void **)(void *)&Lnk141);} /* MAKE-STRING-OUTPUT-STREAM */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)(void *)&LnkLI140,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[139],(void **)(void *)&LnkLI139,4,first,ap);va_end(ap);return V1;} /* C2CALL-UNKNOWN-GLOBAL */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[138],(void **)(void *)&LnkLI138,3,first,ap);va_end(ap);return V1;} /* ADD-FAST-LINK */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[137],(void **)(void *)&LnkLI137,2,first,ap);va_end(ap);return V1;} /* INLINE-PROC */
static object  LnkTLI136(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[136],(void **)(void *)&LnkLI136,2,first,ap);va_end(ap);return V1;} /* CHECK-FNAME-ARGS */
static object  LnkTLI135(){return call_proc0(VV[135],(void **)(void *)&LnkLI135);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[134],(void **)(void *)&LnkLI134,2,first,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static void LnkT133(){ call_or_link(VV[133],(void **)(void *)&Lnk133);} /* SAVE-AVMA */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)(void *)&LnkLI132,3,first,ap);va_end(ap);return V1;} /* GET-INLINE-INFO */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[131],(void **)(void *)&LnkLI131,first,ap);va_end(ap);return V1;} /* CMPNOTE */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,1,first,ap);va_end(ap);return V1;} /* UNWIND-NO-EXIT */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[129],(void **)(void *)&LnkLI129,2,first,ap);va_end(ap);return V1;} /* C2PSETQ */
static object  LnkTLI128(){return call_proc0(VV[128],(void **)(void *)&LnkLI128);} /* TAIL-RECURSION-POSSIBLE */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)(void *)&LnkLI127,1,first,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* INC-INLINE-BLOCKS */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[125],(void **)(void *)&LnkLI125,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,3,first,ap);va_end(ap);return V1;} /* C2LET */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[123],(void **)(void *)&LnkLI123,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[122],(void **)(void *)&LnkLI122,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI121(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[121],(void **)(void *)&LnkLI121,1,first,ap);va_end(ap);return V1;} /* NEED-TO-SET-VS-POINTERS */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[120],(void **)(void *)&LnkLI120,1,first,ap);va_end(ap);return V1;} /* PUSH-ARGS-LISPCALL */
static object  LnkTLI119(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[119],(void **)(void *)&LnkLI119,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI118(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[118],(void **)(void *)&LnkLI118,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)(void *)&LnkLI117,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* PUSH-ARGS */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI114(){return call_proc0(VV[114],(void **)(void *)&LnkLI114);} /* VS-PUSH */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,2,first,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI112(){return call_proc0(VV[112],(void **)(void *)&LnkLI112);} /* BABOON */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,3,first,ap);va_end(ap);return V1;} /* C2FUNCALL-SFUN */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[110],(void **)(void *)&LnkLI110,2,first,ap);va_end(ap);return V1;} /* C2CALL-LAMBDA */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,2,first,ap);va_end(ap);return V1;} /* C2CALL-LOCAL */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,4,first,ap);va_end(ap);return V1;} /* C2CALL-GLOBAL */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[107],(void **)(void *)&LnkLI107,first,ap);va_end(ap);return V1;} /* C2FUNCALL */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[104],(void **)(void *)&LnkLI104,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[103],(void **)(void *)&LnkLI103,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[102],(void **)(void *)&LnkLI102,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,1,first,ap);va_end(ap);return V1;} /* CMP-MACRO-FUNCTION */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[100],(void **)(void *)&LnkLI100,1,first,ap);va_end(ap);return V1;} /* C1LOCAL-FUN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

