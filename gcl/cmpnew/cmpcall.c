
#include "cmpinclude.h"
#include "cmpcall.h"
void init_cmpcall(){do_init(VV);}
/*	local entry for function FAST-LINK-PROCLAIMED-TYPE-P	*/

static object LI1(V1,va_alist)
	object V1;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{register object V2;
	object V3;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V2= V1;
	narg = narg - 1;
	if (narg <= 0) goto T1;
	else {
	V3= va_arg(ap,object);}
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
	if(!(endp((V13)))){
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
	if(((endp(cdr((V28)))?Ct:Cnil))==Cnil){
	goto T63;}
	V31= Cnil;
	goto T60;
goto T63;
T63:;
	if(endp(cddr((V28)))){
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
	if(((endp(cdadr((V28)))?Ct:Cnil))==Cnil){
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
	if(((endp(cdr((V28)))?Ct:Cnil))==Cnil){
	goto T88;}
	V30= Cnil;
	goto T56;
goto T88;
T88:;
	if(endp(cddr((V28)))){
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
	if(((endp(cdadr((V28)))?Ct:Cnil))==Cnil){
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

static object LI5(V55,V54,va_alist)
	object V55,V54;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	bds_check;
	{register object V56;
	register object V57;
	register object V58;
	object V59;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V56= V55;
	V57= V54;
	narg = narg - 2;
	if (narg <= 0) goto T118;
	else {
	V58= va_arg(ap,object);}
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

static object LI6(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{register object V70;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	V71 = list_vector(narg,ap);
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
	if(!(endp((V76)))){
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
	if(endp(V116=MMcdr(V116))){
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
	princ_str("\ngoto T",VV[29]);
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
T479:;{object V152;
	V152= get((V132),VV[2],Cnil);
	if(V152==Cnil)goto T486;
	V151= V152;
	goto T485;
goto T486;
T486:;}
	V151= Ct;
goto T485;
T485:;
	if((V135)!=Cnil){
	V153= (V135);
	goto T488;}
	V153= (base[0]->c.c_car);
goto T488;
T488:;
	V154= list(6,(V132),(V140),V151,small_fixnum(3),V153,VV[72]);
	setq(VV[71],make_cons(/* INLINE-ARGS */V154,symbol_value(VV[71])));
	base[2]= Cnil;
	base[3]= VV[73];
	base[4]= (V137);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V155= vs_base[0];{object V157;
	V157= get((V132),VV[2],Cnil);
	if(V157==Cnil)goto T495;
	V156= V157;
	goto T494;
goto T495;
T495:;}
	V156= Ct;
goto T494;
T494:;
	V136= list(4,(V132),V155,V156,(V140));
	goto T410;}
goto T412;
T412:;
	(void)((*(LnkLI136))((V132),(V134)));
	if((get((V132),VV[61],Cnil))==Cnil){
	goto T501;}
	V158= VV[61];
	goto T499;
goto T501;
T501:;
	V158= Cnil;
goto T499;
T499:;
	V136= list(3,(V132),(V137),V158);
goto T410;
T410:;
	base[0]= (V136);
	base[1]= symbol_value(VV[65]);
	base[2]= VV[74];
	base[3]= VV[75];
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	setq(VV[65],vs_base[0]);
	{object V159 = (V137);
	VMR11(V159)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for DECLARATION-TYPE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V160;
	check_arg(1);
	V160=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(equal((V160),VV[76]))){
	goto T510;}
	base[1]= VV[77];
	vs_top=(vs_base=base+1)+1;
	return;
goto T510;
T510:;
	if(!(equal((V160),VV[78]))){
	goto T513;}
	base[1]= VV[79];
	vs_top=(vs_base=base+1)+1;
	return;
goto T513;
T513:;
	base[1]= (V160);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function WT-FUNCTION-LINK	*/

static object LI13(V162)

register object V162;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	{register object V163;
	register object V164;
	register object V165;
	object V166;
	V163= car((V162));
	V164= cadr((V162));
	V165= caddr((V162));
	V166= cadddr((V162));
	if(((V165))!=Cnil){
	goto T521;}
	princ_str("\nstatic void LnkT",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str("(){ call_or_link(VV[",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str("],(void **)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str(");}",VV[29]);
	goto T519;
goto T521;
T521:;
	if(!(eql((V165),VV[61]))){
	goto T531;}
	princ_str("\nstatic void LnkT",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str("(ptr) object *ptr;{ call_or_link_closure(VV[",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str("],(void **)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str(",&Lclptr",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str(");}",VV[29]);
	goto T519;
goto T531;
T531:;
	princ_str("\nstatic ",VV[29]);
	base[0]= (*(LnkLI143))((V165));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V167= vs_base[0];
	(void)((*(LnkLI117))(V167));
	princ_str(" LnkT",VV[29]);
	(void)((*(LnkLI117))((V164)));
	if(((V166))!=Cnil){
	goto T549;}
	if((Ct)==((V165))){
	goto T550;}
goto T549;
T549:;
	{object V168;
	{register object x= VV[5],V169= (V166);
	while(!endp(V169))
	if(eql(x,V169->c.c_car)){
	V168= V169;
	goto T554;
	}else V169=V169->c.c_cdr;
	V168= Cnil;}
goto T554;
T554:;
	princ_str("(va_alist)va_dcl{",VV[29]);
	base[0]= (*(LnkLI143))((V165));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V170= vs_base[0];
	(void)((*(LnkLI117))(V170));
	princ_str("V1;",VV[29]);
	princ_str("va_list ap;va_start(ap);V1=call_",VV[29]);
	if(((V168))==Cnil){
	goto T565;}
	V171= VV[80];
	goto T563;
goto T565;
T565:;
	V171= VV[81];
goto T563;
T563:;
	(void)((*(LnkLI117))(V171));
	princ_str("proc(VV[",VV[29]);
	V172= (*(LnkLI145))((V163));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V172));
	princ_str("],(void **)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V164)));
	if((V168)!=Cnil){
	goto T571;}
	princ_char(44,VV[29]);
	V173 = make_fixnum((long)(*(LnkLI146))((V166),(V165)));
	(void)((*(LnkLI117))(V173));
goto T571;
T571:;
	princ_str(",ap);va_end(ap);return V1;}",VV[29]);
	goto T519;}
goto T550;
T550:;
	princ_str("(){return call_proc0(VV[",VV[29]);
	V174= (*(LnkLI145))((V163));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V174));
	princ_str("],(void **)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V164)));
	princ_str(");}",VV[29]);
goto T519;
T519:;
	V163= symbol_name((V163));
	if(((VFUN_NARGS=2,(*(LnkLI147))(VV[82],(V163))))==Cnil){
	goto T582;}
	V163= (VFUN_NARGS=2,(*(LnkLI148))(VV[82],(V163)));
goto T582;
T582:;
	princ_str(" /* ",VV[29]);
	(void)((*(LnkLI117))((V163)));
	princ_str(" */",VV[29]);
	{object V175 = Cnil;
	VMR13(V175)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-FUNCALL-C	*/

static object LI14(V177)

register object V177;
{	 VMB14 VMS14 VMV14
	bds_check;
goto TTL;
TTL:;
	{object V178;
	object V179;
	register object V180;
	V178= car((V177));
	V179= cdr((V177));
	V180= Cnil;
	if(!(eql(car((V178)),VV[23]))){
	goto T594;}
	{object V181;
	V181= make_cons(car((V178)),caddr((V178)));
	if((symbol_value(VV[83]))==Cnil){
	goto T597;}
	princ_str("\n	(type_of(",VV[29]);
	base[0]= (V181);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	princ_str(")==t_cfun)||FEinvalid_function(",VV[29]);
	base[0]= (V181);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	princ_str(");",VV[29]);
goto T597;
T597:;
	(void)((*(LnkLI116))((V179)));
	princ_str("\n	(",VV[29]);
	base[0]= (V181);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	goto T592;}
goto T594;
T594:;
	setq(VV[84],number_plus(symbol_value(VV[84]),small_fixnum(1)));
	V180= list(2,VV[33],symbol_value(VV[84]));
	bds_bind(VV[21],(V180));
	princ_str("\n	{object V",VV[29]);
	(void)((*(LnkLI117))(cadr((V180))));
	princ_char(59,VV[29]);
	(void)((*(LnkLI115))(car((V177))));
	(void)((*(LnkLI116))(cdr((V177))));
	princ_str("(V",VV[29]);
	(void)((*(LnkLI117))(cadr((V180))));
	bds_unwind1;
goto T592;
T592:;
	princ_str(")->cf.cf_self ();",VV[29]);
	if((V180)==Cnil){
	goto T589;}
	princ_char(125,VV[29]);}
goto T589;
T589:;
	{object V182 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR14(V182)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-PROC	*/

static object LI15(V185,V186)

object V185;object V186;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	{register object V187;
	register object V188;
	object V189;
	V187= make_fixnum((long)length((V186)));
	V188= Cnil;
	V189= (*(LnkLI145))((V185));
	base[2]= Ct;
	base[3]= VV[85];
	base[4]= (V185);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V190;
	{object V191= (V187);
	if(!eql(V191,VV[86]))goto T635;
	base[2]= Cnil;
	base[3]= VV[88];
	base[4]= (V189);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V192= vs_base[0];
	V190= list(5,VV[87],Ct,small_fixnum(3),V192,VV[58]);
	goto T634;
goto T635;
T635:;
	if(!eql(V191,VV[89]))goto T640;
	base[2]= Cnil;
	base[3]= VV[91];
	base[4]= (V189);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V193= vs_base[0];
	V190= list(5,VV[90],Ct,small_fixnum(3),V193,VV[58]);
	goto T634;
goto T640;
T640:;
	base[2]= (V187);
	base[3]= VV[63];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V194= vs_base[0];
	base[2]= Cnil;
	base[3]= VV[92];
	base[4]= (V189);
	base[5]= (V187);
	{register object V196;
	register object V197;
	V196= (V187);
	V197= small_fixnum(0);
goto T658;
T658:;
	if(!(number_compare((V197),(V196))>=0)){
	goto T659;}
	base[6]= nreverse((V188));
	goto T654;
goto T659;
T659:;
	V188= make_cons((V197),(V188));
	V197= one_plus((V197));
	goto T658;}
goto T654;
T654:;
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V195= vs_base[0];
	V190= list(5,V194,Ct,small_fixnum(3),V195,VV[58]);}
goto T634;
T634:;
	V198= make_cons((V185),(V190));
	setq(VV[71],make_cons(/* INLINE-ARGS */V198,symbol_value(VV[71])));
	{object V199 = (V190);
	VMR15(V199)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-SIMPLE-CALL	*/

static object LI16(V202,V201,V200,va_alist)
	object V202,V201,V200;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V203;
	object V204;
	object V205;
	object V206;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V203= V202;
	V204= V201;
	V205= V200;
	narg = narg - 3;
	if (narg <= 0) goto T670;
	else {
	V206= va_arg(ap,object);}
	--narg; goto T671;
goto T670;
T670:;
	V206= Cnil;
goto T671;
T671:;
	princ_str("simple_",VV[29]);
	(void)((*(LnkLI117))((V203)));
	princ_char(40,VV[29]);
	if(((V206))==Cnil){
	goto T677;}
	princ_str("VV[",VV[29]);
	(void)((*(LnkLI117))((V206)));
	princ_str("],",VV[29]);
goto T677;
T677:;
	princ_str("base+",VV[29]);
	(void)((*(LnkLI117))((V204)));
	princ_char(44,VV[29]);
	(void)((*(LnkLI117))((V205)));
	princ_char(41,VV[29]);
	setq(VV[37],Ct);
	{object V207 = Ct;
	VMR16(V207)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function SAVE-FUNOB	*/

static object LI17(V209)

register object V209;
{	 VMB17 VMS17 VMV17
	bds_check;
goto TTL;
TTL:;
	{object V210= car((V209));
	if((V210!= VV[13])
	&& (V210!= VV[150])
	&& (V210!= VV[6]))goto T690;
	{object V211 = Cnil;
	VMR17(V211)}
goto T690;
T690:;
	if((V210!= VV[14]))goto T691;
	if(((*(LnkLI127))(caddr((V209))))==Cnil){
	goto T692;}
	if((get(caddr((V209)),VV[55],Cnil))!=Cnil){
	goto T693;}
	if((get(caddr((V209)),VV[56],Cnil))!=Cnil){
	goto T693;}
	{register object x= caddr((V209)),V212= symbol_value(VV[93]);
	while(!endp(V212))
	if(type_of(V212->c.c_car)==t_cons &&eql(x,V212->c.c_car->c.c_car)){
	goto T693;
	}else V212=V212->c.c_cdr;}
goto T692;
T692:;
	{object V213;
	V213= list(2,VV[27],(*(LnkLI114))());
	if((symbol_value(VV[83]))==Cnil){
	goto T704;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V213)));
	princ_str("=symbol_function(VV[",VV[29]);
	V214= (*(LnkLI140))(caddr((V209)));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V214));
	princ_str("]);",VV[29]);
	goto T702;
goto T704;
T704:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V213)));
	princ_str("=VV[",VV[29]);
	V215= (*(LnkLI140))(caddr((V209)));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V215));
	princ_str("]->s.s_gfdef;",VV[29]);
goto T702;
T702:;
	{object V216 = (V213);
	VMR17(V216)}}
goto T693;
T693:;
	{object V217 = Cnil;
	VMR17(V217)}
goto T691;
T691:;
	if((V210!= VV[18]))goto T716;
	{object V218;
	V218= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],(V218));
	(void)((*(LnkLI115))(caddr((V209))));
	{object V219 = (V218);
	bds_unwind1;
	VMR17(V219)}}
goto T716;
T716:;
	{object V220 = (*(LnkLI112))();
	VMR17(V220)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-ARGS	*/

static object LI18(V222)

object V222;
{	 VMB18 VMS18 VMV18
	bds_check;
goto TTL;
TTL:;
	if(((V222))!=Cnil){
	goto T720;}
	princ_str("\n	vs_base=vs_top;",VV[29]);
	{object V223 = Cnil;
	VMR18(V223)}
goto T720;
T720:;
	if(!(type_of((V222))==t_cons)){
	goto T724;}
	{object V224;
	V224= symbol_value(VV[19]);
	bds_bind(VV[19],symbol_value(VV[19]));
	{register object V225;
	register object V226;
	V225= (V222);
	V226= car((V225));
goto T731;
T731:;
	if(!(endp((V225)))){
	goto T732;}
	goto T727;
goto T732;
T732:;
	base[2]= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],base[2]);
	V227= (*(LnkLI115))((V226));
	bds_unwind1;
	V225= cdr((V225));
	V226= car((V225));
	goto T731;}
goto T727;
T727:;
	princ_str("\n	vs_top=(vs_base=base+",VV[29]);
	(void)((*(LnkLI117))((V224)));
	princ_str(")+",VV[29]);
	V228= number_minus((VV[19]->s.s_dbind),(V224));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V228));
	princ_char(59,VV[29]);
	setq(VV[37],Ct);
	{object V229 = Ct;
	bds_unwind1;
	VMR18(V229)}}
goto T724;
T724:;
	{object V230 = Cnil;
	VMR18(V230)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-ARGS-LISPCALL	*/

static object LI19(V232)

object V232;
{	 VMB19 VMS19 VMV19
	bds_check;
goto TTL;
TTL:;
	{register object V233;
	register object V234;
	V233= (V232);
	V234= car((V233));
goto T753;
T753:;
	if(!(endp((V233)))){
	goto T754;}
	{object V235 = Cnil;
	VMR19(V235)}
goto T754;
T754:;
	base[1]= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],base[1]);
	V236= (*(LnkLI115))((V234));
	bds_unwind1;
	V233= cdr((V233));
	V234= car((V233));
	goto T753;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2CALL-UNKNOWN-GLOBAL	*/

static object LI20(V241,V242,V243,V244)

register object V241;register object V242;register object V243;register object V244;
{	 VMB20 VMS20 VMV20
goto TTL;
TTL:;
	if((symbol_value(VV[28]))==Cnil){
	goto T766;}
	if(((V243))!=Cnil){
	goto T768;}
	V243= list(2,VV[27],(*(LnkLI114))());
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V243)));
	princ_str("=symbol_function(VV[",VV[29]);
	V245= (*(LnkLI140))((V241));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V245));
	princ_str("]);",VV[29]);
goto T768;
T768:;
	(void)((*(LnkLI116))((V242)));
	princ_str("\n	funcall_with_catcher(VV[",VV[29]);
	V246= (*(LnkLI140))((V241));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V246));
	princ_str("],",VV[29]);
	(void)((*(LnkLI117))((V243)));
	princ_str(");",VV[29]);
	{object V247 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V241)));
	VMR20(V247)}
goto T766;
T766:;
	if(((V243))==Cnil){
	goto T786;}
	(void)((*(LnkLI116))((V242)));
	if(((V244))==Cnil){
	goto T791;}
	if((symbol_value(VV[83]))==Cnil){
	goto T794;}
	princ_str("\n	funcall_no_event(",VV[29]);
	(void)((*(LnkLI117))((V243)));
	princ_str(");",VV[29]);
	goto T789;
goto T794;
T794:;
	princ_str("\n	CMPfuncall(",VV[29]);
	(void)((*(LnkLI117))((V243)));
	princ_str(");",VV[29]);
	goto T789;
goto T791;
T791:;
	princ_str("\n	funcall(",VV[29]);
	(void)((*(LnkLI117))((V243)));
	princ_str(");",VV[29]);
goto T789;
T789:;
	{object V248 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR20(V248)}
goto T786;
T786:;
	if(((*(LnkLI151))((V242)))==Cnil){
	goto T806;}
	{object V249;
	V249= symbol_value(VV[19]);
	V243= list(2,VV[27],(*(LnkLI114))());
	if((symbol_value(VV[83]))==Cnil){
	goto T812;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V243)));
	princ_str("=symbol_function(VV[",VV[29]);
	V250= (*(LnkLI140))((V241));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V250));
	princ_str("]);",VV[29]);
	goto T810;
goto T812;
T812:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V243)));
	princ_str("=(VV[",VV[29]);
	V251= (*(LnkLI140))((V241));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V251));
	princ_str("]->s.s_gfdef);",VV[29]);
goto T810;
T810:;
	(void)((*(LnkLI120))((V242)));
	if((symbol_value(VV[21]))==(VV[94])){
	goto T825;}
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T826;}
goto T825;
T825:;
	princ_str("\n	lispcall",VV[29]);
	if(((V244))==Cnil){
	goto T832;}
	princ_str("_no_event",VV[29]);
goto T832;
T832:;
	princ_str("(base+",VV[29]);
	(void)((*(LnkLI117))((V249)));
	princ_char(44,VV[29]);
	V252 = make_fixnum((long)length((V242)));
	(void)((*(LnkLI117))(V252));
	princ_str(");",VV[29]);
	setq(VV[37],Ct);
	{object V253 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR20(V253)}
goto T826;
T826:;
	if(((V244))==Cnil){
	goto T846;}
	V254= VV[96];
	goto T844;
goto T846;
T846:;
	V254= VV[97];
goto T844;
T844:;
	V255 = make_fixnum((long)length((V242)));
	V256= list(4,VV[95],V254,(V249),V255);
	{object V257 = (VFUN_NARGS=1,(*(LnkLI118))(/* INLINE-ARGS */V256));
	VMR20(V257)}}
goto T806;
T806:;
	{object V258;
	V258= symbol_value(VV[19]);
	(void)((*(LnkLI120))((V242)));
	if((symbol_value(VV[21]))==(VV[94])){
	goto T849;}
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T850;}
goto T849;
T849:;
	princ_str("\n	symlispcall",VV[29]);
	if(((V244))==Cnil){
	goto T856;}
	princ_str("_no_event",VV[29]);
goto T856;
T856:;
	princ_str("(VV[",VV[29]);
	V259= (*(LnkLI140))((V241));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V259));
	princ_str("],base+",VV[29]);
	(void)((*(LnkLI117))((V258)));
	princ_char(44,VV[29]);
	V260 = make_fixnum((long)length((V242)));
	(void)((*(LnkLI117))(V260));
	princ_str(");",VV[29]);
	setq(VV[37],Ct);
	{object V261 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V241)));
	VMR20(V261)}
goto T850;
T850:;
	if(((V244))==Cnil){
	goto T872;}
	V262= VV[98];
	goto T870;
goto T872;
T872:;
	V262= VV[99];
goto T870;
T870:;
	V263 = make_fixnum((long)length((V242)));
	V264= list(5,VV[95],V262,(V258),V263,(*(LnkLI140))((V241)));
	{object V265 = (VFUN_NARGS=3,(*(LnkLI118))(/* INLINE-ARGS */V264,Cnil,(V241)));
	VMR20(V265)}}
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V266;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V266=(base[0]);
	vs_top=sup;
	princ_str("(VFUN_NARGS=",VV[29]);
	V267 = make_fixnum((long)length((V266)));
	(void)((*(LnkLI117))(V267));
	princ_char(44,VV[29]);
	base[1]= (base0[0]->c.c_car);
	base[2]= (V266);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk152)();
	vs_top=sup;
	princ_char(41,VV[29]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT152(){ call_or_link(VV[152],(void **)&Lnk152);} /* WT-INLINE-LOC */
static object  LnkTLI151(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[151],(void **)&LnkLI151,1,ap);va_end(ap);return V1;} /* ARGS-CAUSE-SIDE-EFFECT */
static void LnkT149(){ call_or_link(VV[149],(void **)&Lnk149);} /* WT-LOC */
static object  LnkTLI148(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[148],(void **)&LnkLI148,ap);va_end(ap);return V1;} /* REMOVE */
static object  LnkTLI147(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[147],(void **)&LnkLI147,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI146(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[146],(void **)&LnkLI146,258,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI145(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[145],(void **)&LnkLI145,1,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT144(){ call_or_link(VV[144],(void **)&Lnk144);} /* DECLARATION-TYPE */
static object  LnkTLI143(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[143],(void **)&LnkLI143,1,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT142(){ call_or_link(VV[142],(void **)&Lnk142);} /* GET-OUTPUT-STREAM-STRING */
static void LnkT141(){ call_or_link(VV[141],(void **)&Lnk141);} /* MAKE-STRING-OUTPUT-STREAM */
static object  LnkTLI140(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[140],(void **)&LnkLI140,1,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI139(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[139],(void **)&LnkLI139,4,ap);va_end(ap);return V1;} /* C2CALL-UNKNOWN-GLOBAL */
static object  LnkTLI138(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[138],(void **)&LnkLI138,3,ap);va_end(ap);return V1;} /* ADD-FAST-LINK */
static object  LnkTLI137(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[137],(void **)&LnkLI137,2,ap);va_end(ap);return V1;} /* INLINE-PROC */
static object  LnkTLI136(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[136],(void **)&LnkLI136,2,ap);va_end(ap);return V1;} /* CHECK-FNAME-ARGS */
static object  LnkTLI135(){return call_proc0(VV[135],(void **)&LnkLI135);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI134(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[134],(void **)&LnkLI134,2,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static void LnkT133(){ call_or_link(VV[133],(void **)&Lnk133);} /* SAVE-AVMA */
static object  LnkTLI132(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[132],(void **)&LnkLI132,3,ap);va_end(ap);return V1;} /* GET-INLINE-INFO */
static object  LnkTLI131(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[131],(void **)&LnkLI131,ap);va_end(ap);return V1;} /* CMPNOTE */
static object  LnkTLI130(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[130],(void **)&LnkLI130,1,ap);va_end(ap);return V1;} /* UNWIND-NO-EXIT */
static object  LnkTLI129(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[129],(void **)&LnkLI129,2,ap);va_end(ap);return V1;} /* C2PSETQ */
static object  LnkTLI128(){return call_proc0(VV[128],(void **)&LnkLI128);} /* TAIL-RECURSION-POSSIBLE */
static object  LnkTLI127(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[127],(void **)&LnkLI127,1,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static void LnkT126(){ call_or_link(VV[126],(void **)&Lnk126);} /* INC-INLINE-BLOCKS */
static object  LnkTLI125(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[125],(void **)&LnkLI125,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI124(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[124],(void **)&LnkLI124,3,ap);va_end(ap);return V1;} /* C2LET */
static object  LnkTLI123(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[123],(void **)&LnkLI123,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI122(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[122],(void **)&LnkLI122,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI121(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[121],(void **)&LnkLI121,1,ap);va_end(ap);return V1;} /* NEED-TO-SET-VS-POINTERS */
static object  LnkTLI120(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[120],(void **)&LnkLI120,1,ap);va_end(ap);return V1;} /* PUSH-ARGS-LISPCALL */
static object  LnkTLI119(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[119],(void **)&LnkLI119,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI118(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[118],(void **)&LnkLI118,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI117(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[117],(void **)&LnkLI117,1,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI116(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[116],(void **)&LnkLI116,1,ap);va_end(ap);return V1;} /* PUSH-ARGS */
static object  LnkTLI115(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[115],(void **)&LnkLI115,1,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI114(){return call_proc0(VV[114],(void **)&LnkLI114);} /* VS-PUSH */
static object  LnkTLI113(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[113],(void **)&LnkLI113,2,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI112(){return call_proc0(VV[112],(void **)&LnkLI112);} /* BABOON */
static object  LnkTLI111(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[111],(void **)&LnkLI111,3,ap);va_end(ap);return V1;} /* C2FUNCALL-SFUN */
static object  LnkTLI110(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[110],(void **)&LnkLI110,2,ap);va_end(ap);return V1;} /* C2CALL-LAMBDA */
static object  LnkTLI109(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[109],(void **)&LnkLI109,2,ap);va_end(ap);return V1;} /* C2CALL-LOCAL */
static object  LnkTLI108(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[108],(void **)&LnkLI108,4,ap);va_end(ap);return V1;} /* C2CALL-GLOBAL */
static object  LnkTLI107(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[107],(void **)&LnkLI107,ap);va_end(ap);return V1;} /* C2FUNCALL */
static object  LnkTLI106(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[106],(void **)&LnkLI106,2,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI105(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[105],(void **)&LnkLI105,1,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI104(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[104],(void **)&LnkLI104,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI103(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[103],(void **)&LnkLI103,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI102(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[102],(void **)&LnkLI102,1,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND */
static object  LnkTLI101(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[101],(void **)&LnkLI101,1,ap);va_end(ap);return V1;} /* CMP-MACRO-FUNCTION */
static object  LnkTLI100(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[100],(void **)&LnkLI100,1,ap);va_end(ap);return V1;} /* C1LOCAL-FUN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

