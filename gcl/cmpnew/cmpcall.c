
#include "cmpinclude.h"
#include "cmpcall.h"
init_cmpcall(){do_init(VV);}
/*	local entry for function FAST-LINK-PROCLAIMED-TYPE-P	*/

static object LI1(V1,va_alist)
	object V1;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{register object V2;
	object V3;
	if(narg <1) too_few_arguments();
	V2= V1;
	narg = narg - 1;
	if (narg <= 0) goto T1;
	else {
	va_start(ap);
	V3= va_arg(ap,object);}
	--narg; goto T2;
T1:;
	V3= Cnil;
T2:;
	if(type_of((V2))==t_symbol){
	goto T4;}
	{object V4 = Cnil;
	VMR1(V4)}
T4:;
	if((length((V3)))<(64)){
	goto T6;}
	{object V5 = Cnil;
	VMR1(V5)}
T6:;{object V6;
	if((get((V2),VV[0],Cnil))!=Cnil){
	goto T10;}
	V6= Cnil;
	goto T9;
T10:;
	V6= (type_of((V3))==t_cons||((V3))==Cnil?Ct:Cnil);
T9:;
	if(V6==Cnil)goto T8;
	{object V7 = V6;
	VMR1(V7)}
T8:;}
	if((get((V2),VV[1],Cnil))!=Cnil){
	goto T12;}
	{object V8 = Cnil;
	VMR1(V8)}
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
T17:;
	if((V10)==Cnil){
	goto T14;}}
	{object V12 = Cnil;
	VMR1(V12)}
T14:;
	{register object V13;
	register object V14;
	V13= get((V2),VV[4],Cnil);
	V14= car((V13));
T21:;
	if(!(endp((V13)))){
	goto T22;}
	{object V15 = Ct;
	VMR1(V15)}
T22:;
	if(!(((V14))==(VV[5]))){
	goto T27;}
	goto T26;
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
T31:;
	V16= ((V18)==Cnil?Ct:Cnil);}
	if(V16==Cnil)goto T29;
	goto T26;
T29:;}
	{object V20 = Cnil;
	VMR1(V20)}
T26:;
	V13= cdr((V13));
	V14= car((V13));
	goto T21;}}
	}
/*	local entry for function CMP-MACRO-FUNCTION	*/

static object LI2(V22)

object V22;
{	 VMB2 VMS2 VMV2
TTL:;
	{object V23;
	V23= Cnil;
	V23= (*(LnkLI96))((V22));
	if(((V23))==Cnil){
	goto T39;}
	if(!((car((V23)))==(VV[6]))){
	goto T43;}
	{object V24 = Cnil;
	VMR2(V24)}
T43:;
	{object V25 = (V23);
	VMR2(V25)}
T39:;
	base[0]= (V22);
	vs_top=(vs_base=base+0)+1;
	Lmacro_function();
	vs_top=sup;
	{object V26 = vs_base[0];
	VMR2(V26)}}
}
/*	local entry for function C1FUNOB	*/

static object LI3(V28)

register object V28;
{	 VMB3 VMS3 VMV3
	bds_check;
TTL:;
	{register object V29;
	V29= Cnil;
	if(!(type_of((V28))==t_cons)){
	goto T47;}
	if(!(type_of(car((V28)))==t_symbol)){
	goto T47;}
	if(((*(LnkLI97))(car((V28))))==Cnil){
	goto T47;}
	V28= (*(LnkLI98))((V28));
T47:;{object V30;
	if(type_of((V28))==t_cons){
	goto T57;}
	V30= Cnil;
	goto T56;
T57:;{object V31;
	if((car((V28)))==(VV[7])){
	goto T61;}
	V31= Cnil;
	goto T60;
T61:;
	if(((endp(cdr((V28)))?Ct:Cnil))==Cnil){
	goto T63;}
	V31= Cnil;
	goto T60;
T63:;
	if(endp(cddr((V28)))){
	goto T65;}
	V31= Cnil;
	goto T60;
T65:;{object V32;
	if(type_of(cadr((V28)))==t_cons){
	goto T69;}
	V32= Cnil;
	goto T68;
T69:;
	if(((endp(cdadr((V28)))?Ct:Cnil))==Cnil){
	goto T71;}
	V32= Cnil;
	goto T68;
T71:;
	if((caadr((V28)))==(VV[8])){
	goto T73;}
	V32= Cnil;
	goto T68;
T73:;
	bds_bind(VV[9],Cnil);
	bds_bind(VV[10],Cnil);
	bds_bind(VV[11],Cnil);
	bds_bind(VV[12],Cnil);
	{object V33;
	V33= (VFUN_NARGS=1,(*(LnkLI99))(cdadr((V28))));
	V34= list(3,VV[13],cadr((V33)),(V33));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V32= V34;}
T68:;
	if(V32==Cnil)goto T67;
	V31= V32;
	goto T60;
T67:;}
	if(type_of(cadr((V28)))==t_symbol){
	goto T76;}
	V31= Cnil;
	goto T60;
T76:;{object V35;
	V29= (*(LnkLI96))(cadr((V28)));
	if(((V29))!=Cnil){
	goto T80;}
	V35= Cnil;
	goto T79;
T80:;
	if((car((V29)))==(VV[6])){
	goto T83;}
	V35= Cnil;
	goto T79;
T83:;
	V35= (V29);
T79:;
	if(V35==Cnil)goto T78;
	V31= V35;
	goto T60;
T78:;}
	V36= get(cadr((V28)),VV[16],Cnil);
	V37= (VFUN_NARGS=2,(*(LnkLI100))(VV[15],((V36)==Cnil?Ct:Cnil)));
	V31= list(3,VV[14],/* INLINE-ARGS */V37,cadr((V28)));
T60:;
	if(V31==Cnil)goto T59;
	V30= V31;
	goto T56;
T59:;}
	if((car((V28)))==(VV[17])){
	goto T86;}
	V30= Cnil;
	goto T56;
T86:;
	if(((endp(cdr((V28)))?Ct:Cnil))==Cnil){
	goto T88;}
	V30= Cnil;
	goto T56;
T88:;
	if(endp(cddr((V28)))){
	goto T90;}
	V30= Cnil;
	goto T56;
T90:;{object V38;
	if(type_of(cadr((V28)))==t_cons){
	goto T94;}
	V38= Cnil;
	goto T93;
T94:;
	if((caadr((V28)))==(VV[8])){
	goto T96;}
	V38= Cnil;
	goto T93;
T96:;
	if(((endp(cdadr((V28)))?Ct:Cnil))==Cnil){
	goto T98;}
	V38= Cnil;
	goto T93;
T98:;
	{object V39;
	V39= (VFUN_NARGS=1,(*(LnkLI99))(cdadr((V28))));
	V38= list(3,VV[13],cadr((V39)),(V39));}
T93:;
	if(V38==Cnil)goto T92;
	V30= V38;
	goto T56;
T92:;}
	if(type_of(cadr((V28)))==t_symbol){
	goto T101;}
	V30= Cnil;
	goto T56;
T101:;{object V40;
	V29= (*(LnkLI96))(cadr((V28)));
	if(((V29))!=Cnil){
	goto T105;}
	V40= Cnil;
	goto T104;
T105:;
	if((car((V29)))==(VV[6])){
	goto T108;}
	V40= Cnil;
	goto T104;
T108:;
	V40= (V29);
T104:;
	if(V40==Cnil)goto T103;
	V30= V40;
	goto T56;
T103:;}
	V41= get(cadr((V28)),VV[16],Cnil);
	V42= (VFUN_NARGS=2,(*(LnkLI100))(VV[15],((V41)==Cnil?Ct:Cnil)));
	V30= list(3,VV[14],/* INLINE-ARGS */V42,cadr((V28)));
T56:;
	if(V30==Cnil)goto T55;
	{object V43 = V30;
	VMR3(V43)}
T55:;}
	{object V44;
	object V45;
	V44= (*(LnkLI101))((V28));
	V45= (VFUN_NARGS=2,(*(LnkLI100))(VV[15],Ct));
	(void)((*(LnkLI102))((V45),cadr((V44))));
	{object V46 = list(3,VV[18],(V45),(V44));
	VMR3(V46)}}}
}
/*	local entry for function C2FUNCALL-AUX	*/

static object LI4(V48)

register object V48;
{	 VMB4 VMS4 VMV4
TTL:;
	{object V49;
	object V50;
	object V51;
	object V52;
	V49= cadr((V48));
	V50= caddr((V48));
	V51= cadddr((V48));
	V52= car(cddddr((V48)));
	{object V53 = (VFUN_NARGS=4,(*(LnkLI103))((V50),(V51),(V52),(V49)));
	VMR4(V53)}}
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
	if(narg <2) too_few_arguments();
	V56= V55;
	V57= V54;
	narg = narg - 2;
	if (narg <= 0) goto T118;
	else {
	va_start(ap);
	V58= va_arg(ap,object);}
	if (--narg <= 0) goto T119;
	else {
	V59= va_arg(ap,object);}
	--narg; goto T120;
T118:;
	V58= Cnil;
T119:;
	V59= Cnil;
T120:;
	{object V60= car((V56));
	if((V60!= VV[14]))goto T123;
	{object V61 = (*(LnkLI104))(caddr((V56)),(V57),(V58),Ct);
	VMR5(V61)}
T123:;
	if((V60!= VV[6]))goto T124;
	{object V62 = (*(LnkLI105))(cddr((V56)),(V57));
	VMR5(V62)}
T124:;
	if((V60!= VV[13]))goto T125;
	{object V63 = (*(LnkLI106))(caddr((V56)),(V57));
	VMR5(V63)}
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
T137:;
	if(((V59))==Cnil){
	goto T129;}
	V65= structure_ref((V59),VV[24],2);
	if(!(equal(/* INLINE-ARGS */V65,VV[25]))){
	goto T129;}
T130:;
	(void)((*(LnkLI107))((V64),(V57),(V59)));
	{object V66 = Cnil;
	bds_unwind1;
	VMR5(V66)}
T129:;
	if(((V58))!=Cnil){
	goto T145;}
	if(type_of((V57))==t_cons||((V57))==Cnil){
	goto T148;}
	(void)((*(LnkLI108))());
T148:;
	if(!((car((V64)))==(VV[26]))){
	goto T152;}
	V58= caddr((V64));
	goto T145;
T152:;
	if(!((car((V64)))==(VV[23]))){
	goto T156;}
	if(((*(LnkLI109))(caaddr((V64)),(V57)))!=Cnil){
	goto T156;}
	V58= make_cons(VV[23],caddr((V64)));
	goto T145;
T156:;
	V58= list(2,VV[27],(*(LnkLI110))());
	bds_bind(VV[21],(V58));
	V67= (*(LnkLI111))(caddr((V56)));
	bds_unwind1;
T145:;
	(void)((*(LnkLI112))((V57)));
	if((symbol_value(VV[28]))==Cnil){
	goto T166;}
	princ_str("\n	super_funcall(",VV[29]);
	(void)((*(LnkLI113))((V58)));
	princ_str(");",VV[29]);
	goto T164;
T166:;
	if((symbol_value(VV[30]))==Cnil){
	goto T172;}
	(void)((
	(type_of(symbol_value(VV[30])) == t_sfun ?(*(object (*)())((symbol_value(VV[30]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[30])),fcall.argd=1,fcalln))((V58))));
	goto T164;
T172:;
	princ_str("\n	super_funcall_no_event(",VV[29]);
	(void)((*(LnkLI113))((V58)));
	princ_str(");",VV[29]);
T164:;
	{object V68 = (VFUN_NARGS=1,(*(LnkLI114))(VV[31]));
	bds_unwind1;
	VMR5(V68)}}
T126:;
	{object V69 = (*(LnkLI108))();
	VMR5(V69)}}}
	}
/*	local entry for function FCALLN-INLINE	*/

static object LI6(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{register object V70;
	narg= narg - 0;
	va_start(ap);
	V71 = list_vector(narg,ap);
	V70= V71;
	{register object V72;
	object V73;
	V72= car((V70));
	V73= Cnil;
	(void)((*(LnkLI113))(VV[32]));
	if(!(type_of((V72))==t_cons)){
	goto T182;}
	if((car((V72)))==(VV[23])){
	goto T181;}
T182:;
	V72= list(2,VV[33],(VFUN_NARGS=0,(*(LnkLI115))()));
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI113))((V72)));
	princ_str(" = ",VV[29]);
	(void)((*(LnkLI113))(car((V70))));
	princ_char(44,VV[29]);
T181:;
	princ_str("\n	(type_of(",VV[29]);
	(void)((*(LnkLI113))((V72)));
	princ_str(") == t_sfun ?",VV[29]);
	princ_str("(*(object (*)())((",VV[29]);
	(void)((*(LnkLI113))((V72)));
	princ_str(")->sfn.sfn_self)):",VV[29]);
	if(!(number_compare(symbol_value(VV[34]),small_fixnum(3))<0)){
	goto T200;}
	V73= Ct;
	princ_str("\n	(fcall.argd=",VV[29]);
	V74 = make_fixnum(length(cdr((V70))));
	(void)((*(LnkLI113))(V74));
	princ_str(",type_of(",VV[29]);
	(void)((*(LnkLI113))((V72)));
	princ_str(")==t_vfun) ?",VV[29]);
	princ_str("\n	(*(object (*)())((",VV[29]);
	(void)((*(LnkLI113))((V72)));
	princ_str(")->sfn.sfn_self)):",VV[29]);
T200:;
	princ_str("\n	(fcall.fun=(",VV[29]);
	(void)((*(LnkLI113))((V72)));
	princ_str("),",VV[29]);
	if(((V73))!=Cnil){
	goto T218;}
	princ_str("fcall.argd=",VV[29]);
	V75 = make_fixnum(length(cdr((V70))));
	(void)((*(LnkLI113))(V75));
	princ_char(44,VV[29]);
T218:;
	princ_str("fcalln))(",VV[29]);
	if((cdr((V70)))==Cnil){
	goto T226;}
	(void)((*(LnkLI113))(cadr((V70))));
	{register object V76;
	register object V77;
	V76= cddr((V70));
	V77= car((V76));
T234:;
	if(!(endp((V76)))){
	goto T235;}
	goto T226;
T235:;
	(void)((*(LnkLI113))(VV[35]));
	(void)((*(LnkLI113))((V77)));
	V76= cdr((V76));
	V77= car((V76));
	goto T234;}
T226:;
	(void)((*(LnkLI113))(VV[36]));
	(void)((*(LnkLI113))(VV[36]));
	{object V78 = Cnil;
	VMR6(V78)}}}
	}
/*	local entry for function C2CALL-LAMBDA	*/

static object LI7(V81,V82)

object V81;register object V82;
{	 VMB7 VMS7 VMV7
	bds_check;
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
T250:;
	if(!(type_of((V82))==t_cons||((V82))==Cnil)){
	goto T259;}
	{object V84;
	V84= symbol_value(VV[19]);
	bds_bind(VV[19],symbol_value(VV[19]));
	(void)((*(LnkLI116))((V82)));
	if(((*(LnkLI117))((V83)))==Cnil){
	bds_unwind1;
	goto T259;}
	princ_str("\n	vs_top=(vs_base=base+",VV[29]);
	(void)((*(LnkLI113))((V84)));
	princ_str(")+",VV[29]);
	V85= number_minus((VV[19]->s.s_dbind),(V84));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V85));
	princ_char(59,VV[29]);
	setq(VV[37],Ct);
	bds_unwind1;}
T259:;
	{object V86 = (VFUN_NARGS=2,(*(LnkLI118))((V83),caddr(cddr((V81)))));
	VMR7(V86)}
T251:;
	{object V87;
	object V88;
	V87= make_fixnum(length(car((V83))));
	V88= make_fixnum(length((V82)));
	if(!(eql((V88),(V87)))){
	goto T276;}
	goto T273;
T276:;
	(void)((VFUN_NARGS=3,(*(LnkLI119))(VV[38],(V88),(V87))));}
T273:;
	{object V89 = (*(LnkLI120))(car((V83)),(V82),caddr(cddr((V81))));
	VMR7(V89)}}
}
/*	local entry for function CHECK-FNAME-ARGS	*/

static object LI8(V92,V93)

object V92;object V93;
{	 VMB8 VMS8 VMV8
TTL:;
	{register object V94;
	V94= get((V92),VV[39],Ct);
	if((Ct)==((V94))){
	goto T280;}
	goto T279;
T280:;
	if((get((V92),VV[40],Cnil))!=Cnil){
	goto T282;}
	goto T279;
T282:;
	V94= VV[41];
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
	if(!((length((V94)))==(length((V93))))){
	goto T292;}
	{object V96 = Ct;
	VMR8(V96)}
T292:;
	V97 = make_fixnum(length((V93)));
	V98 = make_fixnum(length((V94)));
	{object V99 = (VFUN_NARGS=4,(*(LnkLI121))(VV[42],(V92),V97,V98));
	VMR8(V99)}
T286:;
	{object V100 = Cnil;
	VMR8(V100)}}
}
/*	function definition for SAVE-AVMA	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V101;
	check_arg(1);
	V101=(base[0]);
	vs_top=sup;
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
T301:;
	if(V102==Cnil)goto T300;
	setq(VV[43],V102);
	goto T299;
T300:;}
	if(!((cadr((V101)))==(VV[44]))){
	goto T302;}
	setq(VV[43],Ct);
	goto T299;
T302:;
	base[1]= small_fixnum(4);
	base[2]= caddr((V101));
	vs_top=(vs_base=base+1)+2;
	Llogbitp();
	vs_top=sup;
	setq(VV[43],vs_base[0]);
T299:;
	if((symbol_value(VV[43]))==Cnil){
	goto T295;}
	princ_str("\n	{ save_avma;",VV[29]);
	vs_base=vs_top;
	(void) (*Lnk122)();
	vs_top=sup;
	if(!(type_of(symbol_value(VV[45]))==t_cons)){
	goto T309;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
T309:;
	setq(VV[45],make_cons(symbol_value(VV[45]),VV[46]));
	base[1]= symbol_value(VV[45]);
	vs_top=(vs_base=base+1)+1;
	return;
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
TTL:;
	{register object V112;
	V112= Cnil;
	bds_bind(VV[19],symbol_value(VV[19]));
	if(((*(LnkLI123))((V108)))==Cnil){
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
T327:;
	if(((*(LnkLI124))())==Cnil){
	goto T317;}
	if(!((length((V109)))==(length(cdr(symbol_value(VV[48])))))){
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
T337:;
	(V115->c.c_car)= list(2,(V116->c.c_car),Cnil);
	if(endp(V116=MMcdr(V116))){
	V114= base[4];
	goto T336;}
	V115=MMcdr(V115)=MMcons(Cnil,Cnil);
	goto T337;}
T336:;
	(void)((*(LnkLI125))(V114,(V109)));
	if((cdr((VV[49]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T331;}
	princ_str("\nT",VV[29]);
	(void)((*(LnkLI113))(car((VV[49]->s.s_dbind))));
	princ_str(":;",VV[29]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T331:;
	(void)((*(LnkLI126))(VV[53]));
	princ_str("\n	goto TTL;",VV[29]);
	{object V118 = (VFUN_NARGS=2,(*(LnkLI127))(VV[54],(V108)));
	bds_unwind1;
	VMR10(V118)}
T317:;
	if(!(type_of((V109))==t_cons||((V109))==Cnil)){
	goto T348;}
	if(((V110))!=Cnil){
	goto T348;}
	V112= (*(LnkLI128))((V108),(V109),(V111));
	if(((V112))==Cnil){
	goto T348;}
	bds_bind(VV[45],small_fixnum(0));
	bds_bind(VV[43],symbol_value(VV[43]));
	base[3]= (V112);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk129)();
	vs_top=sup;
	V119= (*(LnkLI130))((V112),(V109));
	(void)((VFUN_NARGS=3,(*(LnkLI114))(/* INLINE-ARGS */V119,Cnil,(V108))));
	{object V120 = (*(LnkLI131))();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR10(V120)}
T348:;{object V121;
	V121= get((V108),VV[55],Cnil);
	if(V121==Cnil)goto T362;
	V112= V121;
	goto T361;
T362:;}
	V112= get((V108),VV[56],Cnil);
T361:;
	if(((V112))==Cnil){
	goto T359;}
	(void)((*(LnkLI132))((V108),(V109)));
	(void)((*(LnkLI112))((V109)));
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI113))((V112)));
	princ_str("();",VV[29]);
	{object V122 = (VFUN_NARGS=3,(*(LnkLI114))(VV[31],Cnil,(V108)));
	bds_unwind1;
	VMR10(V122)}
T359:;
	if(!(type_of((V109))==t_cons||((V109))==Cnil)){
	goto T371;}
	if(!((length((V109)))<(10))){
	goto T371;}
	if((symbol_value(VV[57]))!=Cnil){
	goto T376;}
	if((get((V108),VV[58],Cnil))==Cnil){
	goto T371;}
T376:;
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T382;}
	base[1]= Ct;
	base[2]= VV[60];
	base[3]= (V108);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
T382:;
	if((VV[59])==(symbol_value(VV[21]))){
	goto T371;}
	if(((V110))!=Cnil){
	goto T371;}
	bds_bind(VV[45],small_fixnum(0));
	V123= (*(LnkLI133))((V108),(V109));
	V124= (*(LnkLI130))(/* INLINE-ARGS */V123,(V109));
	(void)((VFUN_NARGS=3,(*(LnkLI114))(/* INLINE-ARGS */V124,Cnil,(V108))));
	{object V125 = (*(LnkLI131))();
	bds_unwind1;
	bds_unwind1;
	VMR10(V125)}
T371:;
	(void)((*(LnkLI112))((V109)));
	{object V126;
	V126= (*(LnkLI134))((V108),Cnil,(V109));
	princ_str("\n	(void) (*Lnk",VV[29]);
	(void)((*(LnkLI113))((V126)));
	princ_str(")(",VV[29]);
	if((get((V108),VV[61],Cnil))==Cnil){
	goto T398;}
	princ_str("Lclptr",VV[29]);
	(void)((*(LnkLI113))((V126)));
T398:;
	princ_str(");",VV[29]);
	{object V127 = (VFUN_NARGS=3,(*(LnkLI114))(VV[31],Cnil,(V108)));
	bds_unwind1;
	VMR10(V127)}}
T314:;
	{object V128 = (*(LnkLI135))((V108),(V109),(V110),Cnil);
	bds_unwind1;
	VMR10(V128)}}
}
/*	local entry for function ADD-FAST-LINK	*/

static object LI11(V132,V133,V134)

register object V132;object V133;object V134;
{	 VMB11 VMS11 VMV11
TTL:;
	{object V135;
	object V136;
	object V137;
	register object V138;
	V137= (*(LnkLI136))((V132));
	V135= Cnil;
	V136= Cnil;
	V138= Cnil;
	if(((V133))==Cnil){
	goto T408;}
	{object V139;
	object V140;
	object V141;
	base[0]=MMcons(Cnil,Cnil);
	V139= Cnil;
	V140= Cnil;
	if(type_of((V134))==t_cons||((V134))==Cnil){
	goto T413;}
	V141= Cnil;
	goto T412;
T413:;
	V141= make_fixnum(length((V134)));
T412:;
	if((get((V132),VV[1],Cnil))==Cnil){
	goto T418;}
	V140= get((V132),VV[4],Cnil);
	goto T416;
T418:;
	V139= get((V132),VV[0],Cnil);
	if(((V139))==Cnil){
	goto T421;}
	if(!(type_of((V139))==t_fixnum)){
	goto T426;}
	if(!(equal((V141),(V139)))){
	goto T428;}
	goto T424;
T428:;
	(void)((VFUN_NARGS=2,(*(LnkLI121))(VV[62],(V132))));
	goto T424;
T426:;
	(void)(sputprop((V132),VV[0],(V141)));
T424:;
	base[2]= (V141);
	base[3]= VV[63];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V140= vs_base[0];
	goto T416;
T421:;
	V140= Cnil;
T416:;
	if((V141)==Cnil){
	goto T433;}
	V142 = make_fixnum(length((V140)));
	if(!(eql((V141),V142))){
	goto T434;}
	goto T433;
T434:;{object V143;
	{register object x= VV[5],V144= (V140);
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	V143= V144;
	goto T437;
	}else V144=V144->c.c_cdr;
	V143= Cnil;}
T437:;
	if(V143==Cnil)goto T436;
	goto T433;
T436:;}
	V145 = make_fixnum(length((V140)));
	(void)((VFUN_NARGS=4,(*(LnkLI121))(VV[64],(V132),(V141),V145)));
T433:;
	{register object x= (V132),V146= symbol_value(VV[65]);
	while(!endp(V146))
	if(type_of(V146->c.c_car)==t_cons &&eql(x,V146->c.c_car->c.c_car)){
	V136= (V146->c.c_car);
	goto T440;
	}else V146=V146->c.c_cdr;
	V136= Cnil;}
T440:;
	if((cddr((V136)))!=Cnil){
	goto T406;}
	{register object V147;
	vs_base=vs_top;
	(void) (*Lnk137)();
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
T450:;
	if(((V149))!=Cnil){
	goto T451;}
	goto T448;
T451:;
	if(!((car((V149)))==(VV[5]))){
	goto T457;}
	V138= Ct;
	(void)(princ(VV[67],(V147)));
	goto T455;
T457:;
	if(((V148))==Cnil){
	goto T463;}
	(void)(princ(VV[68],(V147)));
	goto T461;
T463:;
	V148= Ct;
T461:;
	base[2]= (V147);
	base[3]= VV[69];
	base[4]= (V150);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
T455:;
	V149= cdr((V149));
	V150= number_plus(small_fixnum(1),(V150));
	goto T450;}
T448:;
	(void)(princ(VV[70],(V147)));
	base[2]= (V147);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk138)();
	vs_top=sup;
	(base[0]->c.c_car)= vs_base[0];}
	if(((V138))==Cnil){
	goto T475;}
	V135= 
	make_cclosure_new(LC20,Cnil,base[0],Cdata);
T475:;{object V152;
	V152= get((V132),VV[2],Cnil);
	if(V152==Cnil)goto T482;
	V151= V152;
	goto T481;
T482:;}
	V151= Ct;
T481:;
	if((V135)!=Cnil){
	V153= (V135);
	goto T484;}
	V153= (base[0]->c.c_car);
T484:;
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
	if(V157==Cnil)goto T491;
	V156= V157;
	goto T490;
T491:;}
	V156= Ct;
T490:;
	V136= list(4,(V132),V155,V156,(V140));
	goto T406;}
T408:;
	(void)((*(LnkLI132))((V132),(V134)));
	if((get((V132),VV[61],Cnil))==Cnil){
	goto T497;}
	V158= VV[61];
	goto T495;
T497:;
	V158= Cnil;
T495:;
	V136= list(3,(V132),(V137),V158);
T406:;
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
}
/*	local entry for function WT-FUNCTION-LINK	*/

static object LI12(V161)

register object V161;
{	 VMB12 VMS12 VMV12
TTL:;
	{register object V162;
	register object V163;
	register object V164;
	object V165;
	V162= car((V161));
	V163= cadr((V161));
	V164= caddr((V161));
	V165= cadddr((V161));
	if(((V164))!=Cnil){
	goto T511;}
	princ_str("\nstatic LnkT",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str("(){ call_or_link(VV[",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str("],&Lnk",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str(");}",VV[29]);
	goto T509;
T511:;
	if(!(eql((V164),VV[61]))){
	goto T521;}
	princ_str("\nstatic LnkT",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str("(ptr) object *ptr;{ call_or_link_closure(VV[",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str("],&Lnk",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str(",&Lclptr",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str(");}",VV[29]);
	goto T509;
T521:;
	princ_str("\nstatic ",VV[29]);
	V166= (*(LnkLI139))((V164));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V166));
	princ_str(" LnkT",VV[29]);
	(void)((*(LnkLI113))((V163)));
	if(((V165))!=Cnil){
	goto T537;}
	if((Ct)==((V164))){
	goto T538;}
T537:;
	{object V167;
	{register object x= VV[5],V168= (V165);
	while(!endp(V168))
	if(eql(x,V168->c.c_car)){
	V167= V168;
	goto T542;
	}else V168=V168->c.c_cdr;
	V167= Cnil;}
T542:;
	princ_str("(va_alist)va_dcl{va_list ap;va_start(ap);return(",VV[29]);
	V169= (*(LnkLI139))((V164));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V169));
	princ_str(")call_",VV[29]);
	if(((V167))==Cnil){
	goto T550;}
	V170= VV[76];
	goto T548;
T550:;
	V170= VV[77];
T548:;
	(void)((*(LnkLI113))(V170));
	princ_str("proc(VV[",VV[29]);
	V171= (*(LnkLI140))((V162));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V171));
	princ_str("],&Lnk",VV[29]);
	(void)((*(LnkLI113))((V163)));
	if((V167)!=Cnil){
	goto T556;}
	princ_char(44,VV[29]);
	V172 = make_fixnum((*(LnkLI141))((V165),(V164)));
	(void)((*(LnkLI113))(V172));
T556:;
	princ_str(",ap);}",VV[29]);
	goto T509;}
T538:;
	princ_str("(){return call_proc0(VV[",VV[29]);
	V173= (*(LnkLI140))((V162));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V173));
	princ_str("],&Lnk",VV[29]);
	(void)((*(LnkLI113))((V163)));
	princ_str(");}",VV[29]);
T509:;
	V162= symbol_name((V162));
	if(((VFUN_NARGS=2,(*(LnkLI142))(VV[78],(V162))))==Cnil){
	goto T567;}
	V162= (VFUN_NARGS=2,(*(LnkLI143))(VV[78],(V162)));
T567:;
	princ_str(" /* ",VV[29]);
	(void)((*(LnkLI113))((V162)));
	princ_str(" */",VV[29]);
	{object V174 = Cnil;
	VMR12(V174)}}
}
/*	local entry for function WT-FUNCALL-C	*/

static object LI13(V176)

register object V176;
{	 VMB13 VMS13 VMV13
	bds_check;
TTL:;
	{object V177;
	object V178;
	register object V179;
	V177= car((V176));
	V178= cdr((V176));
	V179= Cnil;
	if(!(eql(car((V177)),VV[23]))){
	goto T579;}
	{object V180;
	V180= make_cons(car((V177)),caddr((V177)));
	if((symbol_value(VV[79]))==Cnil){
	goto T582;}
	princ_str("\n	(type_of(",VV[29]);
	base[0]= (V180);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	princ_str(")==t_cfun)||FEinvalid_function(",VV[29]);
	base[0]= (V180);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	princ_str(");",VV[29]);
T582:;
	(void)((*(LnkLI112))((V178)));
	princ_str("\n	(",VV[29]);
	base[0]= (V180);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	goto T577;}
T579:;
	setq(VV[80],number_plus(symbol_value(VV[80]),small_fixnum(1)));
	V179= list(2,VV[33],symbol_value(VV[80]));
	bds_bind(VV[21],(V179));
	princ_str("\n	{object V",VV[29]);
	(void)((*(LnkLI113))(cadr((V179))));
	princ_char(59,VV[29]);
	(void)((*(LnkLI111))(car((V176))));
	(void)((*(LnkLI112))(cdr((V176))));
	princ_str("(V",VV[29]);
	(void)((*(LnkLI113))(cadr((V179))));
	bds_unwind1;
T577:;
	princ_str(")->cf.cf_self ();",VV[29]);
	if((V179)==Cnil){
	goto T574;}
	princ_char(125,VV[29]);}
T574:;
	{object V181 = (VFUN_NARGS=1,(*(LnkLI114))(VV[31]));
	VMR13(V181)}
}
/*	local entry for function INLINE-PROC	*/

static object LI14(V184,V185)

object V184;object V185;
{	 VMB14 VMS14 VMV14
TTL:;
	{register object V186;
	register object V187;
	object V188;
	V186= make_fixnum(length((V185)));
	V187= Cnil;
	V188= (*(LnkLI140))((V184));
	base[2]= Ct;
	base[3]= VV[81];
	base[4]= (V184);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V189;
	{object V190= (V186);
	if(!eql(V190,VV[82]))goto T620;
	base[2]= Cnil;
	base[3]= VV[84];
	base[4]= (V188);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V191= vs_base[0];
	V189= list(5,VV[83],Ct,small_fixnum(3),V191,VV[58]);
	goto T619;
T620:;
	if(!eql(V190,VV[85]))goto T625;
	base[2]= Cnil;
	base[3]= VV[87];
	base[4]= (V188);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V192= vs_base[0];
	V189= list(5,VV[86],Ct,small_fixnum(3),V192,VV[58]);
	goto T619;
T625:;
	base[2]= (V186);
	base[3]= VV[63];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V193= vs_base[0];
	base[2]= Cnil;
	base[3]= VV[88];
	base[4]= (V188);
	base[5]= (V186);
	{register object V195;
	register object V196;
	V195= (V186);
	V196= small_fixnum(0);
T643:;
	if(!(number_compare((V196),(V195))>=0)){
	goto T644;}
	base[6]= nreverse((V187));
	goto T639;
T644:;
	V187= make_cons((V196),(V187));
	V196= one_plus((V196));
	goto T643;}
T639:;
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V194= vs_base[0];
	V189= list(5,V193,Ct,small_fixnum(3),V194,VV[58]);}
T619:;
	V197= make_cons((V184),(V189));
	setq(VV[71],make_cons(/* INLINE-ARGS */V197,symbol_value(VV[71])));
	{object V198 = (V189);
	VMR14(V198)}}}
}
/*	local entry for function WT-SIMPLE-CALL	*/

static object LI15(V201,V200,V199,va_alist)
	object V201,V200,V199;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V202;
	object V203;
	object V204;
	object V205;
	if(narg <3) too_few_arguments();
	V202= V201;
	V203= V200;
	V204= V199;
	narg = narg - 3;
	if (narg <= 0) goto T655;
	else {
	va_start(ap);
	V205= va_arg(ap,object);}
	--narg; goto T656;
T655:;
	V205= Cnil;
T656:;
	princ_str("simple_",VV[29]);
	(void)((*(LnkLI113))((V202)));
	princ_char(40,VV[29]);
	if(((V205))==Cnil){
	goto T662;}
	princ_str("VV[",VV[29]);
	(void)((*(LnkLI113))((V205)));
	princ_str("],",VV[29]);
T662:;
	princ_str("base+",VV[29]);
	(void)((*(LnkLI113))((V203)));
	princ_char(44,VV[29]);
	(void)((*(LnkLI113))((V204)));
	princ_char(41,VV[29]);
	setq(VV[37],Ct);
	{object V206 = Ct;
	VMR15(V206)}}
	}
/*	local entry for function SAVE-FUNOB	*/

static object LI16(V208)

register object V208;
{	 VMB16 VMS16 VMV16
	bds_check;
TTL:;
	{object V209= car((V208));
	if((V209!= VV[13])
	&& (V209!= VV[145])
	&& (V209!= VV[6]))goto T675;
	{object V210 = Cnil;
	VMR16(V210)}
T675:;
	if((V209!= VV[14]))goto T676;
	if(((*(LnkLI123))(caddr((V208))))==Cnil){
	goto T677;}
	if((get(caddr((V208)),VV[55],Cnil))!=Cnil){
	goto T678;}
	if((get(caddr((V208)),VV[56],Cnil))!=Cnil){
	goto T678;}
	{register object x= caddr((V208)),V211= symbol_value(VV[89]);
	while(!endp(V211))
	if(type_of(V211->c.c_car)==t_cons &&eql(x,V211->c.c_car->c.c_car)){
	goto T678;
	}else V211=V211->c.c_cdr;}
T677:;
	{object V212;
	V212= list(2,VV[27],(*(LnkLI110))());
	if((symbol_value(VV[79]))==Cnil){
	goto T689;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI113))((V212)));
	princ_str("=symbol_function(VV[",VV[29]);
	V213= (*(LnkLI136))(caddr((V208)));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V213));
	princ_str("]);",VV[29]);
	goto T687;
T689:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI113))((V212)));
	princ_str("=VV[",VV[29]);
	V214= (*(LnkLI136))(caddr((V208)));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V214));
	princ_str("]->s.s_gfdef;",VV[29]);
T687:;
	{object V215 = (V212);
	VMR16(V215)}}
T678:;
	{object V216 = Cnil;
	VMR16(V216)}
T676:;
	if((V209!= VV[18]))goto T701;
	{object V217;
	V217= list(2,VV[27],(*(LnkLI110))());
	bds_bind(VV[21],(V217));
	(void)((*(LnkLI111))(caddr((V208))));
	{object V218 = (V217);
	bds_unwind1;
	VMR16(V218)}}
T701:;
	{object V219 = (*(LnkLI108))();
	VMR16(V219)}}
}
/*	local entry for function PUSH-ARGS	*/

static object LI17(V221)

object V221;
{	 VMB17 VMS17 VMV17
	bds_check;
TTL:;
	if(((V221))!=Cnil){
	goto T705;}
	princ_str("\n	vs_base=vs_top;",VV[29]);
	{object V222 = Cnil;
	VMR17(V222)}
T705:;
	if(!(type_of((V221))==t_cons)){
	goto T709;}
	{object V223;
	V223= symbol_value(VV[19]);
	bds_bind(VV[19],symbol_value(VV[19]));
	{register object V224;
	register object V225;
	V224= (V221);
	V225= car((V224));
T716:;
	if(!(endp((V224)))){
	goto T717;}
	goto T712;
T717:;
	base[2]= list(2,VV[27],(*(LnkLI110))());
	bds_bind(VV[21],base[2]);
	V226= (*(LnkLI111))((V225));
	bds_unwind1;
	V224= cdr((V224));
	V225= car((V224));
	goto T716;}
T712:;
	princ_str("\n	vs_top=(vs_base=base+",VV[29]);
	(void)((*(LnkLI113))((V223)));
	princ_str(")+",VV[29]);
	V227= number_minus((VV[19]->s.s_dbind),(V223));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V227));
	princ_char(59,VV[29]);
	setq(VV[37],Ct);
	{object V228 = Ct;
	bds_unwind1;
	VMR17(V228)}}
T709:;
	{object V229 = Cnil;
	VMR17(V229)}
}
/*	local entry for function PUSH-ARGS-LISPCALL	*/

static object LI18(V231)

object V231;
{	 VMB18 VMS18 VMV18
	bds_check;
TTL:;
	{register object V232;
	register object V233;
	V232= (V231);
	V233= car((V232));
T738:;
	if(!(endp((V232)))){
	goto T739;}
	{object V234 = Cnil;
	VMR18(V234)}
T739:;
	base[1]= list(2,VV[27],(*(LnkLI110))());
	bds_bind(VV[21],base[1]);
	V235= (*(LnkLI111))((V233));
	bds_unwind1;
	V232= cdr((V232));
	V233= car((V232));
	goto T738;}
}
/*	local entry for function C2CALL-UNKNOWN-GLOBAL	*/

static object LI19(V240,V241,V242,V243)

register object V240;register object V241;register object V242;register object V243;
{	 VMB19 VMS19 VMV19
TTL:;
	if((symbol_value(VV[28]))==Cnil){
	goto T751;}
	if(((V242))!=Cnil){
	goto T753;}
	V242= list(2,VV[27],(*(LnkLI110))());
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI113))((V242)));
	princ_str("=symbol_function(VV[",VV[29]);
	V244= (*(LnkLI136))((V240));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V244));
	princ_str("]);",VV[29]);
T753:;
	(void)((*(LnkLI112))((V241)));
	princ_str("\n	funcall_with_catcher(VV[",VV[29]);
	V245= (*(LnkLI136))((V240));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V245));
	princ_str("],",VV[29]);
	(void)((*(LnkLI113))((V242)));
	princ_str(");",VV[29]);
	{object V246 = (VFUN_NARGS=3,(*(LnkLI114))(VV[31],Cnil,(V240)));
	VMR19(V246)}
T751:;
	if(((V242))==Cnil){
	goto T771;}
	(void)((*(LnkLI112))((V241)));
	if(((V243))==Cnil){
	goto T776;}
	if((symbol_value(VV[79]))==Cnil){
	goto T779;}
	princ_str("\n	funcall_no_event(",VV[29]);
	(void)((*(LnkLI113))((V242)));
	princ_str(");",VV[29]);
	goto T774;
T779:;
	princ_str("\n	CMPfuncall(",VV[29]);
	(void)((*(LnkLI113))((V242)));
	princ_str(");",VV[29]);
	goto T774;
T776:;
	princ_str("\n	funcall(",VV[29]);
	(void)((*(LnkLI113))((V242)));
	princ_str(");",VV[29]);
T774:;
	{object V247 = (VFUN_NARGS=1,(*(LnkLI114))(VV[31]));
	VMR19(V247)}
T771:;
	if(((*(LnkLI146))((V241)))==Cnil){
	goto T791;}
	{object V248;
	V248= symbol_value(VV[19]);
	V242= list(2,VV[27],(*(LnkLI110))());
	if((symbol_value(VV[79]))==Cnil){
	goto T797;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI113))((V242)));
	princ_str("=symbol_function(VV[",VV[29]);
	V249= (*(LnkLI136))((V240));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V249));
	princ_str("]);",VV[29]);
	goto T795;
T797:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI113))((V242)));
	princ_str("=(VV[",VV[29]);
	V250= (*(LnkLI136))((V240));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V250));
	princ_str("]->s.s_gfdef);",VV[29]);
T795:;
	(void)((*(LnkLI116))((V241)));
	if((symbol_value(VV[21]))==(VV[90])){
	goto T810;}
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T811;}
T810:;
	princ_str("\n	lispcall",VV[29]);
	if(((V243))==Cnil){
	goto T817;}
	princ_str("_no_event",VV[29]);
T817:;
	princ_str("(base+",VV[29]);
	(void)((*(LnkLI113))((V248)));
	princ_char(44,VV[29]);
	V251 = make_fixnum(length((V241)));
	(void)((*(LnkLI113))(V251));
	princ_str(");",VV[29]);
	setq(VV[37],Ct);
	{object V252 = (VFUN_NARGS=1,(*(LnkLI114))(VV[31]));
	VMR19(V252)}
T811:;
	if(((V243))==Cnil){
	goto T831;}
	V253= VV[92];
	goto T829;
T831:;
	V253= VV[93];
T829:;
	V254 = make_fixnum(length((V241)));
	V255= list(4,VV[91],V253,(V248),V254);
	{object V256 = (VFUN_NARGS=1,(*(LnkLI114))(/* INLINE-ARGS */V255));
	VMR19(V256)}}
T791:;
	{object V257;
	V257= symbol_value(VV[19]);
	(void)((*(LnkLI116))((V241)));
	if((symbol_value(VV[21]))==(VV[90])){
	goto T834;}
	if(!((symbol_value(VV[21]))==(VV[59]))){
	goto T835;}
T834:;
	princ_str("\n	symlispcall",VV[29]);
	if(((V243))==Cnil){
	goto T841;}
	princ_str("_no_event",VV[29]);
T841:;
	princ_str("(VV[",VV[29]);
	V258= (*(LnkLI136))((V240));
	(void)((*(LnkLI113))(/* INLINE-ARGS */V258));
	princ_str("],base+",VV[29]);
	(void)((*(LnkLI113))((V257)));
	princ_char(44,VV[29]);
	V259 = make_fixnum(length((V241)));
	(void)((*(LnkLI113))(V259));
	princ_str(");",VV[29]);
	setq(VV[37],Ct);
	{object V260 = (VFUN_NARGS=3,(*(LnkLI114))(VV[31],Cnil,(V240)));
	VMR19(V260)}
T835:;
	if(((V243))==Cnil){
	goto T857;}
	V261= VV[94];
	goto T855;
T857:;
	V261= VV[95];
T855:;
	V262 = make_fixnum(length((V241)));
	V263= list(5,VV[91],V261,(V257),V262,(*(LnkLI136))((V240)));
	{object V264 = (VFUN_NARGS=3,(*(LnkLI114))(/* INLINE-ARGS */V263,Cnil,(V240)));
	VMR19(V264)}}
}
/*	local function CLOSURE	*/

static LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V265;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V265=(base[0]);
	vs_top=sup;
	princ_str("(VFUN_NARGS=",VV[29]);
	V266 = make_fixnum(length((V265)));
	(void)((*(LnkLI113))(V266));
	princ_char(44,VV[29]);
	base[1]= (base0[0]->c.c_car);
	base[2]= (V265);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk147)();
	vs_top=sup;
	princ_char(41,VV[29]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static LnkT147(){ call_or_link(VV[147],&Lnk147);} /* WT-INLINE-LOC */
static object  LnkTLI146(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[146],&LnkLI146,1,ap);} /* ARGS-CAUSE-SIDE-EFFECT */
static LnkT144(){ call_or_link(VV[144],&Lnk144);} /* WT-LOC */
static object  LnkTLI143(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[143],&LnkLI143,ap);} /* REMOVE */
static object  LnkTLI142(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[142],&LnkLI142,ap);} /* FIND */
static int  LnkTLI141(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[141],&LnkLI141,258,ap);} /* PROCLAIMED-ARGD */
static object  LnkTLI140(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[140],&LnkLI140,1,ap);} /* ADD-OBJECT */
static object  LnkTLI139(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[139],&LnkLI139,1,ap);} /* REP-TYPE */
static LnkT138(){ call_or_link(VV[138],&Lnk138);} /* GET-OUTPUT-STREAM-STRING */
static LnkT137(){ call_or_link(VV[137],&Lnk137);} /* MAKE-STRING-OUTPUT-STREAM */
static object  LnkTLI136(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[136],&LnkLI136,1,ap);} /* ADD-SYMBOL */
static object  LnkTLI135(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[135],&LnkLI135,4,ap);} /* C2CALL-UNKNOWN-GLOBAL */
static object  LnkTLI134(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[134],&LnkLI134,3,ap);} /* ADD-FAST-LINK */
static object  LnkTLI133(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[133],&LnkLI133,2,ap);} /* INLINE-PROC */
static object  LnkTLI132(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[132],&LnkLI132,2,ap);} /* CHECK-FNAME-ARGS */
static object  LnkTLI131(){return call_proc0(VV[131],&LnkLI131);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI130(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[130],&LnkLI130,2,ap);} /* GET-INLINE-LOC */
static LnkT129(){ call_or_link(VV[129],&Lnk129);} /* SAVE-AVMA */
static object  LnkTLI128(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[128],&LnkLI128,3,ap);} /* GET-INLINE-INFO */
static object  LnkTLI127(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[127],&LnkLI127,ap);} /* CMPNOTE */
static object  LnkTLI126(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[126],&LnkLI126,1,ap);} /* UNWIND-NO-EXIT */
static object  LnkTLI125(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[125],&LnkLI125,2,ap);} /* C2PSETQ */
static object  LnkTLI124(){return call_proc0(VV[124],&LnkLI124);} /* TAIL-RECURSION-POSSIBLE */
static object  LnkTLI123(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[123],&LnkLI123,1,ap);} /* INLINE-POSSIBLE */
static LnkT122(){ call_or_link(VV[122],&Lnk122);} /* INC-INLINE-BLOCKS */
static object  LnkTLI121(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[121],&LnkLI121,ap);} /* CMPWARN */
static object  LnkTLI120(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[120],&LnkLI120,3,ap);} /* C2LET */
static object  LnkTLI119(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[119],&LnkLI119,ap);} /* CMPERR */
static object  LnkTLI118(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[118],&LnkLI118,ap);} /* C2LAMBDA-EXPR */
static object  LnkTLI117(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[117],&LnkLI117,1,ap);} /* NEED-TO-SET-VS-POINTERS */
static object  LnkTLI116(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[116],&LnkLI116,1,ap);} /* PUSH-ARGS-LISPCALL */
static object  LnkTLI115(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[115],&LnkLI115,ap);} /* CS-PUSH */
static object  LnkTLI114(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[114],&LnkLI114,ap);} /* UNWIND-EXIT */
static object  LnkTLI113(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[113],&LnkLI113,1,ap);} /* WT1 */
static object  LnkTLI112(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[112],&LnkLI112,1,ap);} /* PUSH-ARGS */
static object  LnkTLI111(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[111],&LnkLI111,1,ap);} /* C2EXPR* */
static object  LnkTLI110(){return call_proc0(VV[110],&LnkLI110);} /* VS-PUSH */
static object  LnkTLI109(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[109],&LnkLI109,2,ap);} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI108(){return call_proc0(VV[108],&LnkLI108);} /* BABOON */
static object  LnkTLI107(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[107],&LnkLI107,3,ap);} /* C2FUNCALL-SFUN */
static object  LnkTLI106(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[106],&LnkLI106,2,ap);} /* C2CALL-LAMBDA */
static object  LnkTLI105(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[105],&LnkLI105,2,ap);} /* C2CALL-LOCAL */
static object  LnkTLI104(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[104],&LnkLI104,4,ap);} /* C2CALL-GLOBAL */
static object  LnkTLI103(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[103],&LnkLI103,ap);} /* C2FUNCALL */
static object  LnkTLI102(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[102],&LnkLI102,2,ap);} /* ADD-INFO */
static object  LnkTLI101(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[101],&LnkLI101,1,ap);} /* C1EXPR */
static object  LnkTLI100(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[100],&LnkLI100,ap);} /* MAKE-INFO */
static object  LnkTLI99(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[99],&LnkLI99,ap);} /* C1LAMBDA-EXPR */
static object  LnkTLI98(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[98],&LnkLI98,1,ap);} /* CMP-MACROEXPAND */
static object  LnkTLI97(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[97],&LnkLI97,1,ap);} /* CMP-MACRO-FUNCTION */
static object  LnkTLI96(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[96],&LnkLI96,1,ap);} /* C1LOCAL-FUN */
