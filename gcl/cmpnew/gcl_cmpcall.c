
#include "cmpinclude.h"
#include "gcl_cmpcall.h"
void init_gcl_cmpcall(){do_init(VV);}
/*	local entry for function FAST-LINK-PROCLAIMED-TYPE-P	*/

static object LI1(object V1,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{register object V2;
	object V3;
	va_start(ap,first);
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
	{object V7 =((V2))->s.s_plist;
	 object ind= VV[0];
	while(V7!=Cnil){
	if(V7->c.c_car==ind){
	if(((V7->c.c_cdr->c.c_car))!=Cnil){
	goto T10;}
	goto T11;
	}else V7=V7->c.c_cdr->c.c_cdr;}}
	goto T11;
T11:;
	V6= Cnil;
	goto T9;
	goto T10;
T10:;
	V6= (type_of((V3))==t_cons||((V3))==Cnil?Ct:Cnil);
	goto T9;
T9:;
	if(V6==Cnil)goto T8;
	{object V8 = V6;
	VMR1(V8)}
	goto T8;
T8:;}
	{object V9 =((V2))->s.s_plist;
	 object ind= VV[1];
	while(V9!=Cnil){
	if(V9->c.c_car==ind){
	if(((V9->c.c_cdr->c.c_car))!=Cnil){
	goto T12;}
	goto T13;
	}else V9=V9->c.c_cdr->c.c_cdr;}}
	goto T13;
T13:;
	{object V10 = Cnil;
	VMR1(V10)}
	goto T12;
T12:;
	{object V11;
	{object V12 =((V2))->s.s_plist;
	 object ind= VV[2];
	while(V12!=Cnil){
	if(V12->c.c_car==ind){
	V11= (V12->c.c_cdr->c.c_car);
	goto T16;
	}else V12=V12->c.c_cdr->c.c_cdr;}
	V11= Cnil;}
	goto T16;
T16:;
	{register object x= (V11),V14= VV[3];
	while(V14!=Cnil)
	if(eql(x,V14->c.c_car)){
	V13= V14;
	goto T17;
	}else V14=V14->c.c_cdr;
	V13= Cnil;}
	goto T17;
T17:;
	if((V13)==Cnil){
	goto T14;}}
	{object V15 = Cnil;
	VMR1(V15)}
	goto T14;
T14:;
	{register object V16;
	register object V17;
	{object V18 =((V2))->s.s_plist;
	 object ind= VV[4];
	while(V18!=Cnil){
	if(V18->c.c_car==ind){
	V16= (V18->c.c_cdr->c.c_car);
	goto T18;
	}else V18=V18->c.c_cdr->c.c_cdr;}
	V16= Cnil;}
	goto T18;
T18:;
	V17= CMPcar((V16));
	goto T21;
T21:;
	if(!(((V16))==Cnil)){
	goto T22;}
	{object V19 = Ct;
	VMR1(V19)}
	goto T22;
T22:;
	if(!(((V17))==(VV[5]))){
	goto T27;}
	goto T26;
	goto T27;
T27:;{object V20;
	{register object V21;
	V21= (V17);
	{register object x= (V21),V23= VV[3];
	while(V23!=Cnil)
	if(eql(x,V23->c.c_car)){
	V22= V23;
	goto T31;
	}else V23=V23->c.c_cdr;
	V22= Cnil;}
	goto T31;
T31:;
	V20= ((V22)==Cnil?Ct:Cnil);}
	if(V20==Cnil)goto T29;
	goto T26;
	goto T29;
T29:;}
	{object V24 = Cnil;
	VMR1(V24)}
	goto T26;
T26:;
	V16= CMPcdr((V16));
	V17= CMPcar((V16));
	goto T21;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CMP-MACRO-FUNCTION	*/

static object LI2(V26)

object V26;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V27;
	V27= Cnil;
	V27= (*(LnkLI100))((V26));
	if(((V27))==Cnil){
	goto T39;}
	if(!((CMPcar((V27)))==(VV[6]))){
	goto T43;}
	{object V28 = Cnil;
	VMR2(V28)}
	goto T43;
T43:;
	{object V29 = (V27);
	VMR2(V29)}
	goto T39;
T39:;
	base[0]= (V26);
	vs_top=(vs_base=base+0)+1;
	Lmacro_function();
	vs_top=sup;
	{object V30 = vs_base[0];
	VMR2(V30)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1FUNOB	*/

static object LI3(V32)

register object V32;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{register object V33;
	V33= Cnil;
	if(!(type_of((V32))==t_cons)){
	goto T47;}
	if(!(type_of(CMPcar((V32)))==t_symbol)){
	goto T47;}
	if(((*(LnkLI101))(CMPcar((V32))))==Cnil){
	goto T47;}
	V32= (*(LnkLI102))((V32));
	goto T47;
T47:;{object V34;
	if(type_of((V32))==t_cons){
	goto T57;}
	V34= Cnil;
	goto T56;
	goto T57;
T57:;{object V35;
	if((CMPcar((V32)))==(VV[7])){
	goto T61;}
	V35= Cnil;
	goto T60;
	goto T61;
T61:;
	if((((CMPcdr((V32)))==Cnil?Ct:Cnil))==Cnil){
	goto T63;}
	V35= Cnil;
	goto T60;
	goto T63;
T63:;
	if((CMPcddr((V32)))==Cnil){
	goto T65;}
	V35= Cnil;
	goto T60;
	goto T65;
T65:;{object V36;
	if(type_of(CMPcadr((V32)))==t_cons){
	goto T69;}
	V36= Cnil;
	goto T68;
	goto T69;
T69:;
	if((((CMPcdadr((V32)))==Cnil?Ct:Cnil))==Cnil){
	goto T71;}
	V36= Cnil;
	goto T68;
	goto T71;
T71:;
	if((CMPcaadr((V32)))==(VV[8])){
	goto T73;}
	V36= Cnil;
	goto T68;
	goto T73;
T73:;
	bds_bind(VV[9],Cnil);
	bds_bind(VV[10],Cnil);
	bds_bind(VV[11],Cnil);
	bds_bind(VV[12],Cnil);
	{object V37;
	V37= (VFUN_NARGS=1,(*(LnkLI103))(CMPcdadr((V32))));
	V38= list(3,VV[13],CMPcadr((V37)),(V37));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V36= V38;}
	goto T68;
T68:;
	if(V36==Cnil)goto T67;
	V35= V36;
	goto T60;
	goto T67;
T67:;}
	if(type_of(CMPcadr((V32)))==t_symbol){
	goto T76;}
	V35= Cnil;
	goto T60;
	goto T76;
T76:;{object V39;
	V33= (*(LnkLI100))(CMPcadr((V32)));
	if(((V33))!=Cnil){
	goto T80;}
	V39= Cnil;
	goto T79;
	goto T80;
T80:;
	if((CMPcar((V33)))==(VV[6])){
	goto T83;}
	V39= Cnil;
	goto T79;
	goto T83;
T83:;
	V39= (V33);
	goto T79;
T79:;
	if(V39==Cnil)goto T78;
	V35= V39;
	goto T60;
	goto T78;
T78:;}
	{object V41 =(CMPcadr((V32)))->s.s_plist;
	 object ind= VV[16];
	while(V41!=Cnil){
	if(V41->c.c_car==ind){
	V40= (V41->c.c_cdr->c.c_car);
	goto T85;
	}else V41=V41->c.c_cdr->c.c_cdr;}
	V40= Cnil;}
	goto T85;
T85:;
	V42= (VFUN_NARGS=2,(*(LnkLI104))(VV[15],((V40)==Cnil?Ct:Cnil)));
	V35= list(3,VV[14],/* INLINE-ARGS */V42,CMPcadr((V32)));
	goto T60;
T60:;
	if(V35==Cnil)goto T59;
	V34= V35;
	goto T56;
	goto T59;
T59:;}
	if((CMPcar((V32)))==(VV[17])){
	goto T86;}
	V34= Cnil;
	goto T56;
	goto T86;
T86:;
	if((((CMPcdr((V32)))==Cnil?Ct:Cnil))==Cnil){
	goto T88;}
	V34= Cnil;
	goto T56;
	goto T88;
T88:;
	if((CMPcddr((V32)))==Cnil){
	goto T90;}
	V34= Cnil;
	goto T56;
	goto T90;
T90:;{object V43;
	if(type_of(CMPcadr((V32)))==t_cons){
	goto T94;}
	V43= Cnil;
	goto T93;
	goto T94;
T94:;
	if((CMPcaadr((V32)))==(VV[8])){
	goto T96;}
	V43= Cnil;
	goto T93;
	goto T96;
T96:;
	if((((CMPcdadr((V32)))==Cnil?Ct:Cnil))==Cnil){
	goto T98;}
	V43= Cnil;
	goto T93;
	goto T98;
T98:;
	{object V44;
	V44= (VFUN_NARGS=1,(*(LnkLI103))(CMPcdadr((V32))));
	V43= list(3,VV[13],CMPcadr((V44)),(V44));}
	goto T93;
T93:;
	if(V43==Cnil)goto T92;
	V34= V43;
	goto T56;
	goto T92;
T92:;}
	if(type_of(CMPcadr((V32)))==t_symbol){
	goto T101;}
	V34= Cnil;
	goto T56;
	goto T101;
T101:;{object V45;
	V33= (*(LnkLI100))(CMPcadr((V32)));
	if(((V33))!=Cnil){
	goto T105;}
	V45= Cnil;
	goto T104;
	goto T105;
T105:;
	if((CMPcar((V33)))==(VV[6])){
	goto T108;}
	V45= Cnil;
	goto T104;
	goto T108;
T108:;
	V45= (V33);
	goto T104;
T104:;
	if(V45==Cnil)goto T103;
	V34= V45;
	goto T56;
	goto T103;
T103:;}
	{object V47 =(CMPcadr((V32)))->s.s_plist;
	 object ind= VV[16];
	while(V47!=Cnil){
	if(V47->c.c_car==ind){
	V46= (V47->c.c_cdr->c.c_car);
	goto T110;
	}else V47=V47->c.c_cdr->c.c_cdr;}
	V46= Cnil;}
	goto T110;
T110:;
	V48= (VFUN_NARGS=2,(*(LnkLI104))(VV[15],((V46)==Cnil?Ct:Cnil)));
	V34= list(3,VV[14],/* INLINE-ARGS */V48,CMPcadr((V32)));
	goto T56;
T56:;
	if(V34==Cnil)goto T55;
	{object V49 = V34;
	VMR3(V49)}
	goto T55;
T55:;}
	{object V50;
	object V51;
	V50= (*(LnkLI105))((V32));
	V51= (VFUN_NARGS=2,(*(LnkLI104))(VV[15],Ct));
	(void)((*(LnkLI106))((V51),CMPcadr((V50))));
	{object V52 = list(3,VV[18],(V51),(V50));
	VMR3(V52)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2FUNCALL-AUX	*/

static object LI4(V54)

register object V54;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V55;
	object V56;
	object V57;
	object V58;
	V55= CMPcadr((V54));
	V56= CMPcaddr((V54));
	V57= CMPcadddr((V54));
	V58= CMPcar(CMPcddddr((V54)));
	{object V59 = (VFUN_NARGS=4,(*(LnkLI107))((V56),(V57),(V58),(V55)));
	VMR4(V59)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2FUNCALL	*/

static object LI5(object V61,object V60,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	bds_check;
	{register object V62;
	register object V63;
	register object V64;
	object V65;
	va_start(ap,first);
	V62= V61;
	V63= V60;
	narg = narg - 2;
	if (narg <= 0) goto T118;
	else {
	V64= first;}
	if (--narg <= 0) goto T119;
	else {
	V65= va_arg(ap,object);}
	--narg; goto T120;
	goto T118;
T118:;
	V64= Cnil;
	goto T119;
T119:;
	V65= Cnil;
	goto T120;
T120:;
	{object V66= CMPcar((V62));
	if((V66!= VV[14]))goto T123;
	{object V67 = (*(LnkLI108))(CMPcaddr((V62)),(V63),(V64),Ct);
	VMR5(V67)}
	goto T123;
T123:;
	if((V66!= VV[6]))goto T124;
	{object V68 = (*(LnkLI109))(CMPcddr((V62)),(V63));
	VMR5(V68)}
	goto T124;
T124:;
	if((V66!= VV[13]))goto T125;
	{object V69 = (*(LnkLI110))(CMPcaddr((V62)),(V63));
	VMR5(V69)}
	goto T125;
T125:;
	if((V66!= VV[18]))goto T126;
	{register object V70;
	base[0]= (VV[19]->s.s_dbind);
	V70= CMPcaddr((V62));
	bds_bind(VV[19],base[0]);
	if(!(type_of((V63))==t_cons||((V63))==Cnil)){
	goto T129;}
	if(((VV[20]->s.s_dbind))==Cnil){
	goto T129;}
	if(((VV[21]->s.s_dbind))==(VV[22])){
	goto T130;}
	if(!(type_of((VV[21]->s.s_dbind))==t_cons)){
	goto T137;}
	if((CMPcar((VV[21]->s.s_dbind)))==(VV[23])){
	goto T130;}
	goto T137;
T137:;
	if(((V65))==Cnil){
	goto T129;}
	if(!(equal(STREF(object,(V65),8),VV[25]))){
	goto T129;}
	goto T130;
T130:;
	(void)((*(LnkLI111))((V70),(V63),(V65)));
	{object V71 = Cnil;
	bds_unwind1;
	VMR5(V71)}
	goto T129;
T129:;
	if(((V64))!=Cnil){
	goto T145;}
	if(type_of((V63))==t_cons||((V63))==Cnil){
	goto T148;}
	(void)((*(LnkLI112))());
	goto T148;
T148:;
	if(!((CMPcar((V70)))==(VV[26]))){
	goto T152;}
	V64= CMPcaddr((V70));
	goto T145;
	goto T152;
T152:;
	if(!((CMPcar((V70)))==(VV[23]))){
	goto T156;}
	if(((*(LnkLI113))(CMPcaaddr((V70)),(V63)))!=Cnil){
	goto T156;}
	V64= make_cons(VV[23],CMPcaddr((V70)));
	goto T145;
	goto T156;
T156:;
	V64= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],(V64));
	V72= (*(LnkLI115))(CMPcaddr((V62)));
	bds_unwind1;
	goto T145;
T145:;
	(void)((*(LnkLI116))((V63)));
	if(((VV[28]->s.s_dbind))==Cnil){
	goto T166;}
	princ_str("\n	super_funcall(",VV[29]);
	(void)((*(LnkLI117))((V64)));
	princ_str(");",VV[29]);
	goto T164;
	goto T166;
T166:;
	if(((VV[30]->s.s_dbind))==Cnil){
	goto T172;}
	(void)((
	(type_of((VV[30]->s.s_dbind)) == t_sfun ?(*(((VV[30]->s.s_dbind))->sfn.sfn_self)):
	(fcall.argd=1,type_of((VV[30]->s.s_dbind))==t_vfun) ?
	(*(((VV[30]->s.s_dbind))->sfn.sfn_self)):
	(fcall.fun=((VV[30]->s.s_dbind)),fcalln))((V64))));
	goto T164;
	goto T172;
T172:;
	princ_str("\n	super_funcall_no_event(",VV[29]);
	(void)((*(LnkLI117))((V64)));
	princ_str(");",VV[29]);
	goto T164;
T164:;
	{object V73 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	bds_unwind1;
	VMR5(V73)}}
	goto T126;
T126:;
	{object V74 = (*(LnkLI112))();
	VMR5(V74)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FCALLN-INLINE	*/

static object LI6(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{register object V75;
	va_start(ap,first);
	narg= narg - 0;
	V76 = list_vector_new(narg,first,ap);
	V75= V76;
	{register object V77;
	object V78;
	V77= CMPcar((V75));
	V78= Cnil;
	(void)((*(LnkLI117))(VV[32]));
	if(!(type_of((V77))==t_cons)){
	goto T182;}
	if((CMPcar((V77)))==(VV[23])){
	goto T181;}
	goto T182;
T182:;
	V77= list(2,VV[33],(VFUN_NARGS=0,(*(LnkLI119))()));
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V77)));
	princ_str(" = ",VV[29]);
	(void)((*(LnkLI117))(CMPcar((V75))));
	princ_char(44,VV[29]);
	goto T181;
T181:;
	princ_str("\n	(type_of(",VV[29]);
	(void)((*(LnkLI117))((V77)));
	princ_str(") == t_sfun ?",VV[29]);
	princ_str("(*((",VV[29]);
	(void)((*(LnkLI117))((V77)));
	princ_str(")->sfn.sfn_self)):",VV[29]);
	if(!(number_compare((VV[34]->s.s_dbind),small_fixnum(3))<0)){
	goto T200;}
	V78= Ct;
	princ_str("\n	(fcall.argd=",VV[29]);
	V79 = CMPmake_fixnum((long)length(CMPcdr((V75))));
	(void)((*(LnkLI117))(V79));
	princ_str(",type_of(",VV[29]);
	(void)((*(LnkLI117))((V77)));
	princ_str(")==t_vfun) ?",VV[29]);
	princ_str("\n	(*((",VV[29]);
	(void)((*(LnkLI117))((V77)));
	princ_str(")->sfn.sfn_self)):",VV[29]);
	goto T200;
T200:;
	princ_str("\n	(fcall.fun=(",VV[29]);
	(void)((*(LnkLI117))((V77)));
	princ_str("),",VV[29]);
	if(((V78))!=Cnil){
	goto T218;}
	princ_str("fcall.argd=",VV[29]);
	V80 = CMPmake_fixnum((long)length(CMPcdr((V75))));
	(void)((*(LnkLI117))(V80));
	princ_char(44,VV[29]);
	goto T218;
T218:;
	princ_str("fcalln))(",VV[29]);
	if((CMPcdr((V75)))==Cnil){
	goto T226;}
	(void)((*(LnkLI117))(CMPcadr((V75))));
	{register object V81;
	register object V82;
	V81= CMPcddr((V75));
	V82= CMPcar((V81));
	goto T234;
T234:;
	if(!(((V81))==Cnil)){
	goto T235;}
	goto T226;
	goto T235;
T235:;
	(void)((*(LnkLI117))(VV[35]));
	(void)((*(LnkLI117))((V82)));
	V81= CMPcdr((V81));
	V82= CMPcar((V81));
	goto T234;}
	goto T226;
T226:;
	(void)((*(LnkLI117))(VV[36]));
	(void)((*(LnkLI117))(VV[36]));
	{object V83 = Cnil;
	VMR6(V83)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function C2CALL-LAMBDA	*/

static object LI7(V86,V87)

object V86;register object V87;
{	 VMB7 VMS7 VMV7
	bds_check;
	goto TTL;
TTL:;
	{register object V88;
	V88= CMPcaddr((V86));
	if((CMPcadr((V88)))!=Cnil){
	goto T250;}
	if((CMPcaddr((V88)))!=Cnil){
	goto T250;}
	if((CMPcadddr((V88)))!=Cnil){
	goto T250;}
	if(type_of((V87))==t_cons||((V87))==Cnil){
	goto T251;}
	goto T250;
T250:;
	if(!(type_of((V87))==t_cons||((V87))==Cnil)){
	goto T259;}
	{object V89;
	V89= (VV[19]->s.s_dbind);
	bds_bind(VV[19],(VV[19]->s.s_dbind));
	(void)((*(LnkLI120))((V87)));
	if(((*(LnkLI121))((V88)))==Cnil){
	bds_unwind1;
	goto T259;}
	princ_str("\n	vs_top=(vs_base=base+",VV[29]);
	(void)((*(LnkLI117))((V89)));
	princ_str(")+",VV[29]);
	V90= number_minus((VV[19]->s.s_dbind),(V89));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V90));
	princ_char(59,VV[29]);
	(VV[37]->s.s_dbind)= Ct;
	bds_unwind1;}
	goto T259;
T259:;
	{object V91 = (VFUN_NARGS=2,(*(LnkLI122))((V88),CMPcaddr(CMPcddr((V86)))));
	VMR7(V91)}
	goto T251;
T251:;
	{object V92;
	object V93;
	V92= CMPmake_fixnum((long)length(CMPcar((V88))));
	V93= CMPmake_fixnum((long)length((V87)));
	if(!(eql((V93),(V92)))){
	goto T276;}
	goto T273;
	goto T276;
T276:;
	(void)((VFUN_NARGS=3,(*(LnkLI123))(VV[38],(V93),(V92))));}
	goto T273;
T273:;
	{object V94 = (*(LnkLI124))(CMPcar((V88)),(V87),CMPcaddr(CMPcddr((V86))));
	VMR7(V94)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-FNAME-ARGS	*/

static object LI8(V97,V98)

object V97;object V98;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V99;
	{object V100 =((V97))->s.s_plist;
	 object ind= VV[39];
	while(V100!=Cnil){
	if(V100->c.c_car==ind){
	V99= (V100->c.c_cdr->c.c_car);
	goto T278;
	}else V100=V100->c.c_cdr->c.c_cdr;}
	V99= Ct;}
	goto T278;
T278:;
	if((Ct)==((V99))){
	goto T280;}
	goto T279;
	goto T280;
T280:;
	{object V101 =((V97))->s.s_plist;
	 object ind= VV[40];
	while(V101!=Cnil){
	if(V101->c.c_car==ind){
	if(((V101->c.c_cdr->c.c_car))!=Cnil){
	goto T282;}
	goto T283;
	}else V101=V101->c.c_cdr->c.c_cdr;}}
	goto T283;
T283:;
	goto T279;
	goto T282;
T282:;
	V99= VV[41];
	goto T279;
T279:;
	if(!(type_of((V99))==t_cons||((V99))==Cnil)){
	goto T286;}
	if(!(type_of((V98))==t_cons||((V98))==Cnil)){
	goto T286;}
	{register object x= VV[5],V102= (V99);
	while(V102!=Cnil)
	if(eql(x,V102->c.c_car)){
	goto T286;
	}else V102=V102->c.c_cdr;}
	if(!(((long)length((V99)))==((long)length((V98))))){
	goto T292;}
	{object V103 = Ct;
	VMR8(V103)}
	goto T292;
T292:;
	V104 = CMPmake_fixnum((long)length((V98)));
	V105 = CMPmake_fixnum((long)length((V99)));
	{object V106 = (VFUN_NARGS=4,(*(LnkLI125))(VV[42],(V97),V104,V105));
	VMR8(V106)}
	goto T286;
T286:;
	{object V107 = Cnil;
	VMR8(V107)}}
	return Cnil;
}
/*	local entry for function SAVE-AVMA	*/

static object LI9(V109)

object V109;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(((VV[43]->s.s_dbind))!=Cnil){
	goto T295;}{object V110;
	{register object x= VV[44],V111= CMPcar((V109));
	while(V111!=Cnil)
	if(eql(x,V111->c.c_car)){
	V110= V111;
	goto T301;
	}else V111=V111->c.c_cdr;
	V110= Cnil;}
	goto T301;
T301:;
	if(V110==Cnil)goto T300;
	(VV[43]->s.s_dbind)= V110;
	goto T299;
	goto T300;
T300:;}
	if(!((CMPcadr((V109)))==(VV[44]))){
	goto T302;}
	(VV[43]->s.s_dbind)= Ct;
	goto T299;
	goto T302;
T302:;
	base[0]= small_fixnum(4);
	base[1]= CMPcaddr((V109));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	(VV[43]->s.s_dbind)= vs_base[0];
	goto T299;
T299:;
	if(((VV[43]->s.s_dbind))==Cnil){
	goto T295;}
	princ_str("\n	{ save_avma;",VV[29]);
	(void)((*(LnkLI126))());
	if(!(type_of((VV[45]->s.s_dbind))==t_cons)){
	goto T309;}
	{object V112 = Ct;
	VMR9(V112)}
	goto T309;
T309:;
	(VV[45]->s.s_dbind)= make_cons((VV[45]->s.s_dbind),VV[46]);
	{object V113 = (VV[45]->s.s_dbind);
	VMR9(V113)}
	goto T295;
T295:;
	{object V114 = Cnil;
	VMR9(V114)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2CALL-GLOBAL	*/

static object LI10(V119,V120,V121,V122)

register object V119;register object V120;object V121;object V122;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	{register object V123;
	V123= Cnil;
	bds_bind(VV[19],(VV[19]->s.s_dbind));
	if(((*(LnkLI127))((V119)))==Cnil){
	goto T314;}
	if(!(type_of((V120))==t_cons||((V120))==Cnil)){
	goto T317;}
	if(((VV[47]->s.s_dbind))==Cnil){
	goto T317;}
	if(((VV[48]->s.s_dbind))==Cnil){
	goto T317;}
	if(!((CMPcar((VV[48]->s.s_dbind)))==((V119)))){
	goto T317;}
	{register object x= (VV[49]->s.s_dbind),V124= VV[50];
	while(V124!=Cnil)
	if(eql(x,V124->c.c_car)){
	goto T327;
	}else V124=V124->c.c_cdr;
	goto T317;}
	goto T327;
T327:;
	if(((*(LnkLI128))())==Cnil){
	goto T317;}
	if(!(((long)length((V120)))==((long)length(CMPcdr((VV[48]->s.s_dbind)))))){
	goto T317;}
	bds_bind(VV[21],VV[22]);
	(VV[51]->s.s_dbind)= number_plus((VV[51]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[49],make_cons((VV[51]->s.s_dbind),Cnil));
	bds_bind(VV[52],make_cons((VV[49]->s.s_dbind),(VV[52]->s.s_dbind)));
	{object V126;
	object V127= CMPcdr((VV[48]->s.s_dbind));
	if(V127==Cnil){
	V125= Cnil;
	goto T336;}
	base[4]=V126=MMcons(Cnil,Cnil);
	goto T337;
T337:;
	(V126->c.c_car)= list(2,(V127->c.c_car),Cnil);
	if((V127=MMcdr(V127))==Cnil){
	V125= base[4];
	goto T336;}
	V126=MMcdr(V126)=MMcons(Cnil,Cnil);
	goto T337;}
	goto T336;
T336:;
	(void)((*(LnkLI129))(V125,(V120)));
	if((CMPcdr((VV[49]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T331;}
	princ_str("\n	goto T",VV[29]);
	(void)((*(LnkLI117))(CMPcar((VV[49]->s.s_dbind))));
	princ_char(59,VV[29]);
	princ_str("\nT",VV[29]);
	(void)((*(LnkLI117))(CMPcar((VV[49]->s.s_dbind))));
	princ_str(":;",VV[29]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T331;
T331:;
	(void)((*(LnkLI130))(VV[53]));
	princ_str("\n	goto TTL;",VV[29]);
	{object V129 = (VFUN_NARGS=2,(*(LnkLI131))(VV[54],(V119)));
	bds_unwind1;
	VMR10(V129)}
	goto T317;
T317:;
	if(!(type_of((V120))==t_cons||((V120))==Cnil)){
	goto T352;}
	if(((V121))!=Cnil){
	goto T352;}
	V123= (*(LnkLI132))((V119),(V120),(V122));
	if(((V123))==Cnil){
	goto T352;}
	bds_bind(VV[45],small_fixnum(0));
	bds_bind(VV[43],(VV[43]->s.s_dbind));
	(void)((*(LnkLI133))((V123)));
	V130= (*(LnkLI134))((V123),(V120));
	(void)((VFUN_NARGS=3,(*(LnkLI118))(/* INLINE-ARGS */V130,Cnil,(V119))));
	{object V131 = (*(LnkLI135))();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR10(V131)}
	goto T352;
T352:;{object V132;
	{object V133 =((V119))->s.s_plist;
	 object ind= VV[55];
	while(V133!=Cnil){
	if(V133->c.c_car==ind){
	V132= (V133->c.c_cdr->c.c_car);
	goto T366;
	}else V133=V133->c.c_cdr->c.c_cdr;}
	V132= Cnil;}
	goto T366;
T366:;
	if(V132==Cnil)goto T365;
	V123= V132;
	goto T364;
	goto T365;
T365:;}
	{object V134 =((V119))->s.s_plist;
	 object ind= VV[56];
	while(V134!=Cnil){
	if(V134->c.c_car==ind){
	V123= (V134->c.c_cdr->c.c_car);
	goto T364;
	}else V134=V134->c.c_cdr->c.c_cdr;}
	V123= Cnil;}
	goto T364;
T364:;
	if(((V123))==Cnil){
	goto T362;}
	(void)((*(LnkLI136))((V119),(V120)));
	(void)((*(LnkLI116))((V120)));
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V123)));
	princ_str("();",VV[29]);
	{object V135 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V119)));
	bds_unwind1;
	VMR10(V135)}
	goto T362;
T362:;
	if(!(type_of((V120))==t_cons||((V120))==Cnil)){
	goto T374;}
	if(!(((long)length((V120)))<(10))){
	goto T374;}
	if(((VV[57]->s.s_dbind))!=Cnil){
	goto T379;}
	{object V136 =((V119))->s.s_plist;
	 object ind= VV[58];
	while(V136!=Cnil){
	if(V136->c.c_car==ind){
	if(((V136->c.c_cdr->c.c_car))==Cnil){
	goto T374;}
	goto T382;
	}else V136=V136->c.c_cdr->c.c_cdr;}
	goto T374;}
	goto T382;
T382:;
	goto T379;
T379:;
	if(!(((VV[21]->s.s_dbind))==(VV[59]))){
	goto T385;}
	base[1]= Ct;
	base[2]= VV[60];
	base[3]= (V119);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T385;
T385:;
	if((VV[59])==((VV[21]->s.s_dbind))){
	goto T374;}
	if(((V121))!=Cnil){
	goto T374;}
	bds_bind(VV[45],small_fixnum(0));
	V137= (*(LnkLI137))((V119),(V120));
	V138= (*(LnkLI134))(/* INLINE-ARGS */V137,(V120));
	(void)((VFUN_NARGS=3,(*(LnkLI118))(/* INLINE-ARGS */V138,Cnil,(V119))));
	{object V139 = (*(LnkLI135))();
	bds_unwind1;
	bds_unwind1;
	VMR10(V139)}
	goto T374;
T374:;
	(void)((*(LnkLI116))((V120)));
	{object V140;
	V140= (*(LnkLI138))((V119),Cnil,(V120));
	princ_str("\n	(void) (*Lnk",VV[29]);
	(void)((*(LnkLI117))((V140)));
	princ_str(")(",VV[29]);
	{object V141 =((V119))->s.s_plist;
	 object ind= VV[61];
	while(V141!=Cnil){
	if(V141->c.c_car==ind){
	if(((V141->c.c_cdr->c.c_car))==Cnil){
	goto T401;}
	goto T403;
	}else V141=V141->c.c_cdr->c.c_cdr;}
	goto T401;}
	goto T403;
T403:;
	princ_str("Lclptr",VV[29]);
	(void)((*(LnkLI117))((V140)));
	goto T401;
T401:;
	princ_str(");",VV[29]);
	{object V142 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V119)));
	bds_unwind1;
	VMR10(V142)}}
	goto T314;
T314:;
	{object V143 = (*(LnkLI139))((V119),(V120),(V121),Cnil);
	bds_unwind1;
	VMR10(V143)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-FAST-LINK	*/

static object LI11(V147,V148,V149)

register object V147;object V148;object V149;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V150;
	object V151;
	object V152;
	register object V153;
	V152= (*(LnkLI140))((V147));
	V150= Cnil;
	V151= Cnil;
	V153= Cnil;
	if(((V148))==Cnil){
	goto T411;}
	{object V154;
	object V155;
	object V156;
	base[0]=MMcons(Cnil,Cnil);
	V154= Cnil;
	V155= Cnil;
	if(type_of((V149))==t_cons||((V149))==Cnil){
	goto T416;}
	V156= Cnil;
	goto T415;
	goto T416;
T416:;
	V156= CMPmake_fixnum((long)length((V149)));
	goto T415;
T415:;
	{object V157 =((V147))->s.s_plist;
	 object ind= VV[1];
	while(V157!=Cnil){
	if(V157->c.c_car==ind){
	if(((V157->c.c_cdr->c.c_car))==Cnil){
	goto T421;}
	goto T422;
	}else V157=V157->c.c_cdr->c.c_cdr;}
	goto T421;}
	goto T422;
T422:;
	{object V158 =((V147))->s.s_plist;
	 object ind= VV[4];
	while(V158!=Cnil){
	if(V158->c.c_car==ind){
	V155= (V158->c.c_cdr->c.c_car);
	goto T419;
	}else V158=V158->c.c_cdr->c.c_cdr;}
	V155= Cnil;
	goto T419;}
	goto T421;
T421:;
	{object V159 =((V147))->s.s_plist;
	 object ind= VV[0];
	while(V159!=Cnil){
	if(V159->c.c_car==ind){
	V154= (V159->c.c_cdr->c.c_car);
	goto T426;
	}else V159=V159->c.c_cdr->c.c_cdr;}
	V154= Cnil;}
	goto T426;
T426:;
	if(((V154))==Cnil){
	goto T424;}
	if(!(type_of((V154))==t_fixnum)){
	goto T429;}
	if(!(equal((V156),(V154)))){
	goto T431;}
	goto T427;
	goto T431;
T431:;
	(void)((VFUN_NARGS=2,(*(LnkLI125))(VV[62],(V147))));
	goto T427;
	goto T429;
T429:;
	(void)(sputprop((V147),VV[0],(V156)));
	goto T427;
T427:;
	base[2]= (V156);
	base[3]= VV[63];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V155= vs_base[0];
	goto T419;
	goto T424;
T424:;
	V155= Cnil;
	goto T419;
T419:;
	if((V156)==Cnil){
	goto T436;}
	V160 = CMPmake_fixnum((long)length((V155)));
	if(!(eql((V156),V160))){
	goto T437;}
	goto T436;
	goto T437;
T437:;{object V161;
	{register object x= VV[5],V162= (V155);
	while(V162!=Cnil)
	if(eql(x,V162->c.c_car)){
	V161= V162;
	goto T440;
	}else V162=V162->c.c_cdr;
	V161= Cnil;}
	goto T440;
T440:;
	if(V161==Cnil)goto T439;
	goto T436;
	goto T439;
T439:;}
	V163 = CMPmake_fixnum((long)length((V155)));
	(void)((VFUN_NARGS=4,(*(LnkLI125))(VV[64],(V147),(V156),V163)));
	goto T436;
T436:;
	{register object x= (V147),V164= (VV[65]->s.s_dbind);
	while(V164!=Cnil)
	if(eql(x,V164->c.c_car->c.c_car) &&V164->c.c_car != Cnil){
	V151= (V164->c.c_car);
	goto T443;
	}else V164=V164->c.c_cdr;
	V151= Cnil;}
	goto T443;
T443:;
	if((CMPcddr((V151)))!=Cnil){
	goto T409;}
	{register object V165;
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
	V165= vs_base[0];
	base[2]= (V165);
	base[3]= VV[66];
	base[4]= (V152);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{register object V166;
	register object V167;
	register object V168;
	V166= Cnil;
	V167= (V155);
	V168= small_fixnum(0);
	goto T453;
T453:;
	if(((V167))!=Cnil){
	goto T454;}
	goto T451;
	goto T454;
T454:;
	if(!((CMPcar((V167)))==(VV[5]))){
	goto T460;}
	V153= Ct;
	(void)(princ(VV[67],(V165)));
	goto T458;
	goto T460;
T460:;
	if(((V166))==Cnil){
	goto T466;}
	(void)(princ(VV[68],(V165)));
	goto T464;
	goto T466;
T466:;
	V166= Ct;
	goto T464;
T464:;
	base[2]= (V165);
	base[3]= VV[69];
	base[4]= (V168);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T458;
T458:;
	V167= CMPcdr((V167));
	V168= number_plus(small_fixnum(1),(V168));
	goto T453;}
	goto T451;
T451:;
	(void)(princ(VV[70],(V165)));
	base[2]= (V165);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk142)();
	vs_top=sup;
	(base[0]->c.c_car)= vs_base[0];}
	if(((V153))==Cnil){
	goto T478;}
	V150= 
	make_cclosure_new(LC21,Cnil,base[0],Cdata);
	goto T478;
T478:;
	{object V169;{object V171;
	{object V172 =((V147))->s.s_plist;
	 object ind= VV[2];
	while(V172!=Cnil){
	if(V172->c.c_car==ind){
	V171= (V172->c.c_cdr->c.c_car);
	goto T486;
	}else V172=V172->c.c_cdr->c.c_cdr;}
	V171= Cnil;}
	goto T486;
T486:;
	if(V171==Cnil)goto T485;
	V170= V171;
	goto T484;
	goto T485;
T485:;}
	V170= Ct;
	goto T484;
T484:;
	if((V150)!=Cnil){
	V173= (V150);
	goto T487;}
	V173= (base[0]->c.c_car);
	goto T487;
T487:;
	V169= list(6,(V147),(V155),V170,small_fixnum(3),V173,VV[71]);
	(VV[72]->s.s_dbind)= make_cons((V169),(VV[72]->s.s_dbind));}
	base[2]= Cnil;
	base[3]= VV[73];
	base[4]= (V152);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V174= vs_base[0];{object V176;
	{object V177 =((V147))->s.s_plist;
	 object ind= VV[2];
	while(V177!=Cnil){
	if(V177->c.c_car==ind){
	V176= (V177->c.c_cdr->c.c_car);
	goto T496;
	}else V177=V177->c.c_cdr->c.c_cdr;}
	V176= Cnil;}
	goto T496;
T496:;
	if(V176==Cnil)goto T495;
	V175= V176;
	goto T494;
	goto T495;
T495:;}
	V175= Ct;
	goto T494;
T494:;
	V151= list(4,(V147),V174,V175,(V155));
	goto T409;}
	goto T411;
T411:;
	(void)((*(LnkLI136))((V147),(V149)));
	{object V179 =((V147))->s.s_plist;
	 object ind= VV[61];
	while(V179!=Cnil){
	if(V179->c.c_car==ind){
	if(((V179->c.c_cdr->c.c_car))==Cnil){
	goto T501;}
	goto T502;
	}else V179=V179->c.c_cdr->c.c_cdr;}
	goto T501;}
	goto T502;
T502:;
	V178= VV[61];
	goto T499;
	goto T501;
T501:;
	V178= Cnil;
	goto T499;
T499:;
	V151= list(3,(V147),(V152),V178);
	goto T409;
T409:;
	base[0]= V151;
	base[1]= (VV[65]->s.s_dbind);
	base[2]= VV[74];
	base[3]= VV[75];
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	(VV[65]->s.s_dbind)= vs_base[0];
	{object V181 = (V152);
	VMR11(V181)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DECLARATION-TYPE	*/

static object LI12(V183)

object V183;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(!(equal((V183),VV[76]))){
	goto T510;}
	{object V184 = VV[77];
	VMR12(V184)}
	goto T510;
T510:;
	if(!(equal((V183),VV[78]))){
	goto T513;}
	{object V185 = VV[79];
	VMR12(V185)}
	goto T513;
T513:;
	{object V186 = (V183);
	VMR12(V186)}
	return Cnil;
}
/*	local entry for function WT-FUNCTION-LINK	*/

static object LI13(V188)

register object V188;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{register object V189;
	register object V190;
	register object V191;
	object V192;
	V189= CMPcar((V188));
	V190= CMPcadr((V188));
	V191= CMPcaddr((V188));
	V192= CMPcadddr((V188));
	if(((V191))!=Cnil){
	goto T521;}
	princ_str("\nstatic void LnkT",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str("(){ call_or_link(VV[",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str(");}",VV[29]);
	goto T519;
	goto T521;
T521:;
	if(!(eql((V191),VV[61]))){
	goto T531;}
	princ_str("\nstatic void LnkT",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str("(ptr) object *ptr;{ call_or_link_closure(VV[",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str(",(void **)(void *)&Lclptr",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str(");}",VV[29]);
	goto T519;
	goto T531;
T531:;
	princ_str("\nstatic ",VV[29]);
	V193= (*(LnkLI144))((V191));
	V194= (*(LnkLI143))(/* INLINE-ARGS */V193);
	(void)((*(LnkLI117))(/* INLINE-ARGS */V194));
	princ_str(" LnkT",VV[29]);
	(void)((*(LnkLI117))((V190)));
	if(((V192))!=Cnil){
	goto T547;}
	if((Ct)==((V191))){
	goto T548;}
	goto T547;
T547:;
	{object V195;
	{register object x= VV[5],V196= (V192);
	while(V196!=Cnil)
	if(eql(x,V196->c.c_car)){
	V195= V196;
	goto T552;
	}else V196=V196->c.c_cdr;
	V195= Cnil;}
	goto T552;
T552:;
	princ_str("(object first,...){",VV[29]);
	V197= (*(LnkLI144))((V191));
	V198= (*(LnkLI143))(/* INLINE-ARGS */V197);
	(void)((*(LnkLI117))(/* INLINE-ARGS */V198));
	princ_str("V1;",VV[29]);
	princ_str("va_list ap;va_start(ap,first);V1=call_",VV[29]);
	if(((V195))==Cnil){
	goto T561;}
	V199= VV[80];
	goto T559;
	goto T561;
T561:;
	V199= VV[81];
	goto T559;
T559:;
	(void)((*(LnkLI117))(V199));
	princ_str("proc_new(VV[",VV[29]);
	V200= (*(LnkLI145))((V189));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V200));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V190)));
	if((V195)!=Cnil){
	goto T567;}
	princ_char(44,VV[29]);
	V201 = CMPmake_fixnum((long)(*(LnkLI146))((V192),(V191)));
	(void)((*(LnkLI117))(V201));
	goto T567;
T567:;
	princ_str(",first,ap);va_end(ap);return V1;}",VV[29]);
	goto T519;}
	goto T548;
T548:;
	princ_str("(){return call_proc0(VV[",VV[29]);
	V202= (*(LnkLI145))((V189));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V202));
	princ_str("],(void **)(void *)&Lnk",VV[29]);
	(void)((*(LnkLI117))((V190)));
	princ_str(");}",VV[29]);
	goto T519;
T519:;
	V189= symbol_name((V189));
	if(((VFUN_NARGS=2,(*(LnkLI147))(VV[82],(V189))))==Cnil){
	goto T578;}
	V189= (VFUN_NARGS=2,(*(LnkLI148))(VV[82],(V189)));
	goto T578;
T578:;
	princ_str(" /* ",VV[29]);
	(void)((*(LnkLI117))((V189)));
	princ_str(" */",VV[29]);
	{object V203 = Cnil;
	VMR13(V203)}}
	return Cnil;
}
/*	local entry for function WT-FUNCALL-C	*/

static object LI14(V205)

register object V205;
{	 VMB14 VMS14 VMV14
	bds_check;
	goto TTL;
TTL:;
	{object V206;
	object V207;
	register object V208;
	V206= CMPcar((V205));
	V207= CMPcdr((V205));
	V208= Cnil;
	if(!(eql(CMPcar((V206)),VV[23]))){
	goto T590;}
	{object V209;
	V209= make_cons(CMPcar((V206)),CMPcaddr((V206)));
	if(((VV[83]->s.s_dbind))==Cnil){
	goto T593;}
	princ_str("\n	(type_of(",VV[29]);
	base[0]= (V209);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	princ_str(")==t_cfun)||FEinvalid_function(",VV[29]);
	base[0]= (V209);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	princ_str(");",VV[29]);
	goto T593;
T593:;
	(void)((*(LnkLI116))((V207)));
	princ_str("\n	(",VV[29]);
	base[0]= (V209);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	goto T588;}
	goto T590;
T590:;
	(VV[84]->s.s_dbind)= number_plus((VV[84]->s.s_dbind),small_fixnum(1));
	V208= list(2,VV[33],(VV[84]->s.s_dbind));
	bds_bind(VV[21],(V208));
	princ_str("\n	{object V",VV[29]);
	(void)((*(LnkLI117))(CMPcadr((V208))));
	princ_char(59,VV[29]);
	(void)((*(LnkLI115))(CMPcar((V205))));
	(void)((*(LnkLI116))(CMPcdr((V205))));
	princ_str("(V",VV[29]);
	(void)((*(LnkLI117))(CMPcadr((V208))));
	bds_unwind1;
	goto T588;
T588:;
	princ_str(")->cf.cf_self ();",VV[29]);
	if((V208)==Cnil){
	goto T585;}
	princ_char(125,VV[29]);}
	goto T585;
T585:;
	{object V210 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR14(V210)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-PROC	*/

static object LI15(V213,V214)

object V213;object V214;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V215;
	register object V216;
	object V217;
	V215= CMPmake_fixnum((long)length((V214)));
	V216= Cnil;
	V217= (*(LnkLI145))((V213));
	base[2]= Ct;
	base[3]= VV[85];
	base[4]= (V213);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	{object V218;
	{object V219= (V215);
	if(!eql(V219,VV[86]))goto T631;
	base[2]= Cnil;
	base[3]= VV[88];
	base[4]= (V217);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V220= vs_base[0];
	V218= list(5,VV[87],Ct,small_fixnum(3),V220,VV[58]);
	goto T630;
	goto T631;
T631:;
	if(!eql(V219,VV[89]))goto T636;
	base[2]= Cnil;
	base[3]= VV[91];
	base[4]= (V217);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	V221= vs_base[0];
	V218= list(5,VV[90],Ct,small_fixnum(3),V221,VV[58]);
	goto T630;
	goto T636;
T636:;
	base[2]= (V215);
	base[3]= VV[63];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V222= vs_base[0];
	base[2]= Cnil;
	base[3]= VV[92];
	base[4]= (V217);
	base[5]= (V215);
	{register object V224;
	register object V225;
	V224= (V215);
	V225= small_fixnum(0);
	goto T654;
T654:;
	if(!(number_compare((V225),(V224))>=0)){
	goto T655;}
	base[6]= nreverse((V216));
	goto T650;
	goto T655;
T655:;
	{register object V226;
	V226= (V225);
	V216= make_cons((V226),(V216));}
	V225= one_plus((V225));
	goto T654;}
	goto T650;
T650:;
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V223= vs_base[0];
	V218= list(5,V222,Ct,small_fixnum(3),V223,VV[58]);}
	goto T630;
T630:;
	{object V227;
	V227= make_cons((V213),(V218));
	(VV[72]->s.s_dbind)= make_cons((V227),(VV[72]->s.s_dbind));}
	{object V228 = (V218);
	VMR15(V228)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-SIMPLE-CALL	*/

static object LI16(object V231,object V230,object V229,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V232;
	object V233;
	object V234;
	object V235;
	va_start(ap,first);
	V232= V231;
	V233= V230;
	V234= V229;
	narg = narg - 3;
	if (narg <= 0) goto T668;
	else {
	V235= first;}
	--narg; goto T669;
	goto T668;
T668:;
	V235= Cnil;
	goto T669;
T669:;
	princ_str("simple_",VV[29]);
	(void)((*(LnkLI117))((V232)));
	princ_char(40,VV[29]);
	if(((V235))==Cnil){
	goto T675;}
	princ_str("VV[",VV[29]);
	(void)((*(LnkLI117))((V235)));
	princ_str("],",VV[29]);
	goto T675;
T675:;
	princ_str("base+",VV[29]);
	(void)((*(LnkLI117))((V233)));
	princ_char(44,VV[29]);
	(void)((*(LnkLI117))((V234)));
	princ_char(41,VV[29]);
	(VV[37]->s.s_dbind)= Ct;
	{object V236 = Ct;
	VMR16(V236)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function SAVE-FUNOB	*/

static object LI17(V238)

register object V238;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	{object V239= CMPcar((V238));
	if((V239!= VV[13])
	&& (V239!= VV[150])
	&& (V239!= VV[6]))goto T688;
	{object V240 = Cnil;
	VMR17(V240)}
	goto T688;
T688:;
	if((V239!= VV[14]))goto T689;
	if(((*(LnkLI127))(CMPcaddr((V238))))==Cnil){
	goto T690;}
	{object V241 =(CMPcaddr((V238)))->s.s_plist;
	 object ind= VV[55];
	while(V241!=Cnil){
	if(V241->c.c_car==ind){
	if(((V241->c.c_cdr->c.c_car))!=Cnil){
	goto T691;}
	goto T695;
	}else V241=V241->c.c_cdr->c.c_cdr;}}
	goto T695;
T695:;
	{object V242 =(CMPcaddr((V238)))->s.s_plist;
	 object ind= VV[56];
	while(V242!=Cnil){
	if(V242->c.c_car==ind){
	if(((V242->c.c_cdr->c.c_car))!=Cnil){
	goto T691;}
	goto T697;
	}else V242=V242->c.c_cdr->c.c_cdr;}}
	goto T697;
T697:;
	{register object x= CMPcaddr((V238)),V243= (VV[93]->s.s_dbind);
	while(V243!=Cnil)
	if(eql(x,V243->c.c_car->c.c_car) &&V243->c.c_car != Cnil){
	goto T691;
	}else V243=V243->c.c_cdr;}
	goto T690;
T690:;
	{object V244;
	V244= list(2,VV[27],(*(LnkLI114))());
	if(((VV[83]->s.s_dbind))==Cnil){
	goto T702;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V244)));
	princ_str("=symbol_function(VV[",VV[29]);
	V245= (*(LnkLI140))(CMPcaddr((V238)));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V245));
	princ_str("]);",VV[29]);
	goto T700;
	goto T702;
T702:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V244)));
	princ_str("=VV[",VV[29]);
	V246= (*(LnkLI140))(CMPcaddr((V238)));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V246));
	princ_str("]->s.s_gfdef;",VV[29]);
	goto T700;
T700:;
	{object V247 = (V244);
	VMR17(V247)}}
	goto T691;
T691:;
	{object V248 = Cnil;
	VMR17(V248)}
	goto T689;
T689:;
	if((V239!= VV[18]))goto T714;
	{object V249;
	V249= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],(V249));
	(void)((*(LnkLI115))(CMPcaddr((V238))));
	{object V250 = (V249);
	bds_unwind1;
	VMR17(V250)}}
	goto T714;
T714:;
	{object V251 = (*(LnkLI112))();
	VMR17(V251)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-ARGS	*/

static object LI18(V253)

object V253;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	if(((V253))!=Cnil){
	goto T718;}
	princ_str("\n	vs_base=vs_top;",VV[29]);
	{object V254 = Cnil;
	VMR18(V254)}
	goto T718;
T718:;
	if(!(type_of((V253))==t_cons)){
	goto T722;}
	{object V255;
	V255= (VV[19]->s.s_dbind);
	bds_bind(VV[19],(VV[19]->s.s_dbind));
	{register object V256;
	register object V257;
	V256= (V253);
	V257= CMPcar((V256));
	goto T729;
T729:;
	if(!(((V256))==Cnil)){
	goto T730;}
	goto T725;
	goto T730;
T730:;
	base[2]= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],base[2]);
	V258= (*(LnkLI115))((V257));
	bds_unwind1;
	V256= CMPcdr((V256));
	V257= CMPcar((V256));
	goto T729;}
	goto T725;
T725:;
	princ_str("\n	vs_top=(vs_base=base+",VV[29]);
	(void)((*(LnkLI117))((V255)));
	princ_str(")+",VV[29]);
	V259= number_minus((VV[19]->s.s_dbind),(V255));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V259));
	princ_char(59,VV[29]);
	(VV[37]->s.s_dbind)= Ct;
	{object V260 = Ct;
	bds_unwind1;
	VMR18(V260)}}
	goto T722;
T722:;
	{object V261 = Cnil;
	VMR18(V261)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-ARGS-LISPCALL	*/

static object LI19(V263)

object V263;
{	 VMB19 VMS19 VMV19
	bds_check;
	goto TTL;
TTL:;
	{register object V264;
	register object V265;
	V264= (V263);
	V265= CMPcar((V264));
	goto T751;
T751:;
	if(!(((V264))==Cnil)){
	goto T752;}
	{object V266 = Cnil;
	VMR19(V266)}
	goto T752;
T752:;
	base[1]= list(2,VV[27],(*(LnkLI114))());
	bds_bind(VV[21],base[1]);
	V267= (*(LnkLI115))((V265));
	bds_unwind1;
	V264= CMPcdr((V264));
	V265= CMPcar((V264));
	goto T751;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2CALL-UNKNOWN-GLOBAL	*/

static object LI20(V272,V273,V274,V275)

register object V272;register object V273;register object V274;register object V275;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	if(((VV[28]->s.s_dbind))==Cnil){
	goto T764;}
	if(((V274))!=Cnil){
	goto T766;}
	V274= list(2,VV[27],(*(LnkLI114))());
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V274)));
	princ_str("=symbol_function(VV[",VV[29]);
	V276= (*(LnkLI140))((V272));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V276));
	princ_str("]);",VV[29]);
	goto T766;
T766:;
	(void)((*(LnkLI116))((V273)));
	princ_str("\n	funcall_with_catcher(VV[",VV[29]);
	V277= (*(LnkLI140))((V272));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V277));
	princ_str("],",VV[29]);
	(void)((*(LnkLI117))((V274)));
	princ_str(");",VV[29]);
	{object V278 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V272)));
	VMR20(V278)}
	goto T764;
T764:;
	if(((V274))==Cnil){
	goto T784;}
	(void)((*(LnkLI116))((V273)));
	if(((V275))==Cnil){
	goto T789;}
	if(((VV[83]->s.s_dbind))==Cnil){
	goto T792;}
	princ_str("\n	funcall_no_event(",VV[29]);
	(void)((*(LnkLI117))((V274)));
	princ_str(");",VV[29]);
	goto T787;
	goto T792;
T792:;
	princ_str("\n	CMPfuncall(",VV[29]);
	(void)((*(LnkLI117))((V274)));
	princ_str(");",VV[29]);
	goto T787;
	goto T789;
T789:;
	princ_str("\n	funcall(",VV[29]);
	(void)((*(LnkLI117))((V274)));
	princ_str(");",VV[29]);
	goto T787;
T787:;
	{object V279 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR20(V279)}
	goto T784;
T784:;
	if(((*(LnkLI151))((V273)))==Cnil){
	goto T804;}
	{object V280;
	V280= (VV[19]->s.s_dbind);
	V274= list(2,VV[27],(*(LnkLI114))());
	if(((VV[83]->s.s_dbind))==Cnil){
	goto T810;}
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V274)));
	princ_str("=symbol_function(VV[",VV[29]);
	V281= (*(LnkLI140))((V272));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V281));
	princ_str("]);",VV[29]);
	goto T808;
	goto T810;
T810:;
	princ_str("\n	",VV[29]);
	(void)((*(LnkLI117))((V274)));
	princ_str("=(VV[",VV[29]);
	V282= (*(LnkLI140))((V272));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V282));
	princ_str("]->s.s_gfdef);",VV[29]);
	goto T808;
T808:;
	(void)((*(LnkLI120))((V273)));
	if(((VV[21]->s.s_dbind))==(VV[94])){
	goto T823;}
	if(!(((VV[21]->s.s_dbind))==(VV[59]))){
	goto T824;}
	goto T823;
T823:;
	princ_str("\n	lispcall",VV[29]);
	if(((V275))==Cnil){
	goto T830;}
	princ_str("_no_event",VV[29]);
	goto T830;
T830:;
	princ_str("(base+",VV[29]);
	(void)((*(LnkLI117))((V280)));
	princ_char(44,VV[29]);
	V283 = CMPmake_fixnum((long)length((V273)));
	(void)((*(LnkLI117))(V283));
	princ_str(");",VV[29]);
	(VV[37]->s.s_dbind)= Ct;
	{object V284 = (VFUN_NARGS=1,(*(LnkLI118))(VV[31]));
	VMR20(V284)}
	goto T824;
T824:;
	if(((V275))==Cnil){
	goto T844;}
	V285= VV[96];
	goto T842;
	goto T844;
T844:;
	V285= VV[97];
	goto T842;
T842:;
	V286 = CMPmake_fixnum((long)length((V273)));
	V287= list(4,VV[95],V285,(V280),V286);
	{object V288 = (VFUN_NARGS=1,(*(LnkLI118))(/* INLINE-ARGS */V287));
	VMR20(V288)}}
	goto T804;
T804:;
	{object V289;
	V289= (VV[19]->s.s_dbind);
	(void)((*(LnkLI120))((V273)));
	if(((VV[21]->s.s_dbind))==(VV[94])){
	goto T847;}
	if(!(((VV[21]->s.s_dbind))==(VV[59]))){
	goto T848;}
	goto T847;
T847:;
	princ_str("\n	symlispcall",VV[29]);
	if(((V275))==Cnil){
	goto T854;}
	princ_str("_no_event",VV[29]);
	goto T854;
T854:;
	princ_str("(VV[",VV[29]);
	V290= (*(LnkLI140))((V272));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V290));
	princ_str("],base+",VV[29]);
	(void)((*(LnkLI117))((V289)));
	princ_char(44,VV[29]);
	V291 = CMPmake_fixnum((long)length((V273)));
	(void)((*(LnkLI117))(V291));
	princ_str(");",VV[29]);
	(VV[37]->s.s_dbind)= Ct;
	{object V292 = (VFUN_NARGS=3,(*(LnkLI118))(VV[31],Cnil,(V272)));
	VMR20(V292)}
	goto T848;
T848:;
	if(((V275))==Cnil){
	goto T870;}
	V293= VV[98];
	goto T868;
	goto T870;
T870:;
	V293= VV[99];
	goto T868;
T868:;
	V294 = CMPmake_fixnum((long)length((V273)));
	V295= list(5,VV[95],V293,(V289),V294,(*(LnkLI140))((V272)));
	{object V296 = (VFUN_NARGS=3,(*(LnkLI118))(/* INLINE-ARGS */V295,Cnil,(V272)));
	VMR20(V296)}}
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V297;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V297=(base[0]);
	vs_top=sup;
	princ_str("(VFUN_NARGS=",VV[29]);
	V298 = CMPmake_fixnum((long)length((V297)));
	(void)((*(LnkLI117))(V298));
	princ_char(44,VV[29]);
	base[1]= (base0[0]->c.c_car);
	base[2]= (V297);
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
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[144],(void **)(void *)&LnkLI144,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,1,first,ap);va_end(ap);return V1;} /* DECLARATION-TYPE */
static void LnkT142(){ call_or_link(VV[142],(void **)(void *)&Lnk142);} /* GET-OUTPUT-STREAM-STRING */
static void LnkT141(){ call_or_link(VV[141],(void **)(void *)&Lnk141);} /* MAKE-STRING-OUTPUT-STREAM */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)(void *)&LnkLI140,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[139],(void **)(void *)&LnkLI139,4,first,ap);va_end(ap);return V1;} /* C2CALL-UNKNOWN-GLOBAL */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[138],(void **)(void *)&LnkLI138,3,first,ap);va_end(ap);return V1;} /* ADD-FAST-LINK */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[137],(void **)(void *)&LnkLI137,2,first,ap);va_end(ap);return V1;} /* INLINE-PROC */
static object  LnkTLI136(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[136],(void **)(void *)&LnkLI136,2,first,ap);va_end(ap);return V1;} /* CHECK-FNAME-ARGS */
static object  LnkTLI135(){return call_proc0(VV[135],(void **)(void *)&LnkLI135);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[134],(void **)(void *)&LnkLI134,2,first,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[133],(void **)(void *)&LnkLI133,1,first,ap);va_end(ap);return V1;} /* SAVE-AVMA */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)(void *)&LnkLI132,3,first,ap);va_end(ap);return V1;} /* GET-INLINE-INFO */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[131],(void **)(void *)&LnkLI131,first,ap);va_end(ap);return V1;} /* CMPNOTE */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,1,first,ap);va_end(ap);return V1;} /* UNWIND-NO-EXIT */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[129],(void **)(void *)&LnkLI129,2,first,ap);va_end(ap);return V1;} /* C2PSETQ */
static object  LnkTLI128(){return call_proc0(VV[128],(void **)(void *)&LnkLI128);} /* TAIL-RECURSION-POSSIBLE */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)(void *)&LnkLI127,1,first,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static object  LnkTLI126(){return call_proc0(VV[126],(void **)(void *)&LnkLI126);} /* INC-INLINE-BLOCKS */
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

