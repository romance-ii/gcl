
#include "cmpinclude.h"
#include "cmpvar.h"
init_cmpvar(){do_init(VV);}
/*	local entry for function MAKE-VAR	*/

static object LI1(va_alist)
	va_dcl 
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
	narg= narg - 0;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +0,&LI1key,ap);
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
	VMR1(V8)}}
	}}
/*	local entry for function C1MAKE-VAR	*/

static object LI2(V13,V14,V15,V16)

register object V13;object V14;object V15;object V16;
{	 VMB2 VMS2 VMV2
TTL:;
	{register object V17;
	V17= Cnil;
	{register object V18;
	V18= (VFUN_NARGS=2,(*(LnkLI66))(VV[1],(V13)));
	if(type_of((V13))==t_symbol){
	goto T12;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[2],(V13))));
T12:;
	base[0]= (V13);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T15;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[3],(V13))));
T15:;
	{register object x= (V13),V19= (V14);
	while(!endp(V19))
	if(eql(x,V19->c.c_car)){
	goto T20;
	}else V19=V19->c.c_cdr;}
	base[0]= (V13);
	vs_top=(vs_base=base+0)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T21;}
T20:;
	(void)(structure_set((V18),VV[0],1,VV[4]));
	V20= (*(LnkLI68))((V13));
	(void)(structure_set((V18),VV[0],4,/* INLINE-ARGS */V20));
	{register object x= (V13),V21= (V16);
	while(!endp(V21))
	if(type_of(V21->c.c_car)==t_cons &&eql(x,V21->c.c_car->c.c_car)){
	V17= (V21->c.c_car);
	goto T32;
	}else V21=V21->c.c_cdr;
	V17= Cnil;}
T32:;
	if(((V17))==Cnil){
	goto T30;}
	(void)(structure_set((V18),VV[0],5,cdr((V17))));
	goto T28;
T30:;
	V17= get((V13),VV[5],Cnil);
	if(((V17))==Cnil){
	goto T28;}
	(void)(structure_set((V18),VV[0],5,(V17)));
T28:;
	setq(VV[6],Ct);
	goto T19;
T21:;
	{register object V22;
	register object V23;
	V22= (V16);
	V23= car((V22));
T41:;
	if(!(endp((V22)))){
	goto T42;}
	goto T37;
T42:;
	if(!((car((V23)))==((V13)))){
	goto T46;}
	{object V24= cdr((V23));
	if((V24!= VV[7]))goto T49;
	(void)(structure_set((V18),VV[0],4,VV[7]));
	goto T46;
T49:;
	if((V24!= VV[69]))goto T50;
	V25= structure_ref((V18),VV[0],6);
	V26= number_plus(/* INLINE-ARGS */V25,small_fixnum(100));
	(void)(structure_set((V18),VV[0],6,/* INLINE-ARGS */V26));
	goto T46;
T50:;
	(void)(structure_set((V18),VV[0],5,cdr((V23))));}
T46:;
	V22= cdr((V22));
	V23= car((V22));
	goto T41;}
T37:;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T57;}
	goto T56;
T57:;
	if(symbol_value(VV[8])==Cnil){
	goto T56;}
	V27= structure_ref((V18),VV[0],5);
	if(!((/* INLINE-ARGS */V27)==Cnil)){
	goto T62;}
	goto T60;
T62:;
	V28= structure_ref((V18),VV[0],5);
	if((Ct)==(/* INLINE-ARGS */V28)){
	goto T60;}
	goto T56;
T60:;
	(void)(structure_set((V18),VV[0],4,VV[7]));
T56:;
	(void)(structure_set((V18),VV[0],1,VV[9]));
T19:;
	{register object x= (V13),V29= (V15);
	while(!endp(V29))
	if(eql(x,V29->c.c_car)){
	goto T66;
	}else V29=V29->c.c_cdr;
	goto T64;}
T66:;
	(void)(structure_set((V18),VV[0],2,VV[10]));
T64:;
	{object V30 = (V18);
	VMR2(V30)}}}
}
/*	local entry for function CHECK-VREF	*/

static object LI3(V32)

register object V32;
{	 VMB3 VMS3 VMV3
TTL:;
	V33= structure_ref((V32),VV[0],1);
	if(!((/* INLINE-ARGS */V33)==(VV[9]))){
	goto T68;}
	if((structure_ref((V32),VV[0],2))!=Cnil){
	goto T68;}
	if((structure_ref((V32),VV[0],3))!=Cnil){
	goto T68;}
	V34= structure_ref((V32),VV[0],0);
	{object V35 = (VFUN_NARGS=2,(*(LnkLI70))(VV[11],/* INLINE-ARGS */V34));
	VMR3(V35)}
T68:;
	{object V36 = Cnil;
	VMR3(V36)}
}
/*	local entry for function C1VAR	*/

static object LI4(V38)

object V38;
{	 VMB4 VMS4 VMV4
TTL:;
	{object V39;
	object V40;
	V39= (VFUN_NARGS=0,(*(LnkLI71))());
	V40= (*(LnkLI72))((V38));
	{object V42;
	V43= car((V40));
	V44= structure_ref(V39,VV[12],1);
	V42= make_cons(/* INLINE-ARGS */V43,/* INLINE-ARGS */V44);
	(void)(structure_set(V39,VV[12],1,(V42)));}
	V45= structure_ref(car((V40)),VV[0],5);
	(void)(structure_set((V39),VV[12],2,/* INLINE-ARGS */V45));
	{object V46 = list(3,VV[0],(V39),(V40));
	VMR4(V46)}}
}
/*	local entry for function C1VREF	*/

static object LI5(V48)

register object V48;
{	 VMB5 VMS5 VMV5
TTL:;
	{register object V49;
	register object V50;
	V49= Cnil;
	V50= Cnil;
	{register object V51;
	register object V52;
	V51= symbol_value(VV[13]);
	V52= car((V51));
T84:;
	if(!(endp((V51)))){
	goto T85;}
	{register object V53;
	V53= (*(LnkLI73))((V48));
	if(((V53))!=Cnil){
	goto T89;}
	base[1]= (V48);
	vs_top=(vs_base=base+1)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T92;}
	(void)((*(LnkLI74))((V48)));
T92:;
	V54= (*(LnkLI68))((V48));{object V56;
	V56= get((V48),VV[5],Cnil);
	if(V56==Cnil)goto T99;
	V55= V56;
	goto T98;
T99:;}
	V55= Ct;
T98:;
	V53= (VFUN_NARGS=8,(*(LnkLI66))(VV[1],(V48),VV[14],VV[15],VV[16],/* INLINE-ARGS */V54,VV[17],V55));
	setq(VV[18],make_cons((V53),symbol_value(VV[18])));
T89:;
	{object V57 = list(2,(V53),(V49));
	VMR5(V57)}}
T85:;
	if(!(((V52))==(VV[19]))){
	goto T105;}
	V49= Ct;
	goto T103;
T105:;
	if(!(((V52))==(VV[20]))){
	goto T109;}
	V50= Ct;
	goto T103;
T109:;
	V58= structure_ref((V52),VV[0],0);
	if(!((/* INLINE-ARGS */V58)==((V48)))){
	goto T103;}
	V59= structure_ref((V52),VV[0],2);
	if(!((/* INLINE-ARGS */V59)==(VV[10]))){
	goto T114;}
	(void)((VFUN_NARGS=2,(*(LnkLI70))(VV[21],(V48))));
	(void)(structure_set((V52),VV[0],2,Ct));
T114:;
	if(((V49))==Cnil){
	goto T120;}
	(void)(structure_set((V52),VV[0],3,Ct));
	goto T118;
T120:;
	if(((V50))==Cnil){
	goto T123;}
	V60= structure_ref((V52),VV[0],1);
	if(!((/* INLINE-ARGS */V60)==(VV[9]))){
	goto T125;}
	(void)(structure_set((V52),VV[0],4,VV[22]));
T125:;
	(void)(structure_set((V52),VV[0],2,Ct));
	goto T118;
T123:;
	(void)(structure_set((V52),VV[0],2,Ct));
	{int V61= fix(structure_ref((V52),VV[0],6));
	V62 = make_fixnum((1)+(/* INLINE-ARGS */V61));
	(void)(structure_set((V52),VV[0],6,V62));}
T118:;
	{object V63 = list(2,(V52),(V49));
	VMR5(V63)}
T103:;
	V51= cdr((V51));
	V52= car((V51));
	goto T84;}}
}
/*	local entry for function C2VAR-KIND	*/

static object LI6(V65)

register object V65;
{	 VMB6 VMS6 VMV6
TTL:;
	V66= structure_ref((V65),VV[0],1);
	if(!((/* INLINE-ARGS */V66)==(VV[9]))){
	goto T135;}
	if((structure_ref((V65),VV[0],3))!=Cnil){
	goto T135;}
	V67= structure_ref((V65),VV[0],4);
	if((/* INLINE-ARGS */V67)==(VV[22])){
	goto T135;}
	V68= structure_ref((V65),VV[0],4);
	if(!((/* INLINE-ARGS */V68)==(VV[7]))){
	goto T142;}
	{object V69 = VV[7];
	VMR6(V69)}
T142:;
	{register object V70;
	V70= structure_ref((V65),VV[0],5);
	if(((*(LnkLI75))(VV[23],(V70)))==Cnil){
	goto T146;}
	{object V71 = VV[23];
	VMR6(V71)}
T146:;
	if(((*(LnkLI75))(VV[24],(V70)))==Cnil){
	goto T149;}
	{object V72 = VV[24];
	VMR6(V72)}
T149:;
	if(((*(LnkLI75))(VV[25],(V70)))==Cnil){
	goto T152;}
	{object V73 = VV[25];
	VMR6(V73)}
T152:;
	if(((*(LnkLI75))(VV[26],(V70)))==Cnil){
	goto T155;}
	{object V74 = VV[26];
	VMR6(V74)}
T155:;
	if(((*(LnkLI75))(VV[27],(V70)))==Cnil){
	goto T158;}
	{object V75 = VV[27];
	VMR6(V75)}
T158:;
	{object V76;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T161;}
	V76= Cnil;
	goto T160;
T161:;
	if(symbol_value(VV[8])==Cnil){
	V76= Cnil;
	goto T160;}
	V76= VV[7];
T160:;
	if(((V76))==Cnil){
	goto T165;}
	{object V77 = (V76);
	VMR6(V77)}
T165:;
	{object V78 = Cnil;
	VMR6(V78)}}}
T135:;
	{object V79 = Cnil;
	VMR6(V79)}
}
/*	local entry for function C2VAR	*/

static object LI7(V81)

object V81;
{	 VMB7 VMS7 VMV7
TTL:;
	V82= make_cons(VV[0],(V81));
	{object V83 = (VFUN_NARGS=3,(*(LnkLI76))(/* INLINE-ARGS */V82,Cnil,VV[28]));
	VMR7(V83)}
}
/*	local entry for function C2LOCATION	*/

static object LI8(V85)

object V85;
{	 VMB8 VMS8 VMV8
TTL:;
	{object V86 = (VFUN_NARGS=3,(*(LnkLI76))((V85),Cnil,VV[28]));
	VMR8(V86)}
}
/*	local entry for function CHECK-DOWNWARD	*/

static object LI9(V88)

object V88;
{	 VMB9 VMS9 VMV9
TTL:;
	{object V89;
	V89= Cnil;
	{register object V90;
	object V91;
	V90= symbol_value(VV[29]);
	V91= car((V90));
T172:;
	if(!(endp((V90)))){
	goto T173;}
	goto T168;
T173:;
	if(!((car((V91)))==(VV[30]))){
	goto T177;}
	V89= Ct;
	{register object V92;
	register object V93;
	V92= symbol_value(VV[29]);
	V93= car((V92));
T186:;
	if(!(endp((V92)))){
	goto T187;}
	goto T182;
T187:;
	if(!((car((V93)))==(VV[31]))){
	goto T191;}
	{register object V94;
	register object V95;
	V94= (V93);
	V95= VV[30];
	if(type_of((V94))!=t_cons)FEwrong_type_argument(Scons,(V94));
	((V94))->c.c_car = (V95);}
T191:;
	V92= cdr((V92));
	V93= car((V92));
	goto T186;}
T182:;
	goto T168;
T177:;
	V90= cdr((V90));
	V91= car((V90));
	goto T172;}
T168:;
	setq(VV[29],Cnil);
	if(((V89))==Cnil){
	goto T210;}
	{register object V96;
	object V97;
	V96= (V88);
	V97= car((V96));
T215:;
	if(!(endp((V96)))){
	goto T216;}
	{object V98 = Cnil;
	VMR9(V98)}
T216:;
	V99= structure_ref((V97),VV[0],1);
	if(!((/* INLINE-ARGS */V99)==(VV[32]))){
	goto T220;}
	(void)(structure_set((V97),VV[0],1,VV[9]));
T220:;
	V96= cdr((V96));
	V97= car((V96));
	goto T215;}
T210:;
	{object V100 = Cnil;
	VMR9(V100)}}
}
/*	local entry for function ASSIGN-DOWN-VARS	*/

static object LI10(V104,V105,V106)

object V104;object V105;object V106;
{	 VMB10 VMS10 VMV10
TTL:;
	{register object V107;
	V107= small_fixnum(0);
	{register object V108;
	register object V109;
	V108= (V104);
	V109= car((V108));
T233:;
	if(!(endp((V108)))){
	goto T234;}
	goto T229;
T234:;
	V110= structure_ref((V109),VV[0],1);
	if(!((/* INLINE-ARGS */V110)==(VV[32]))){
	goto T238;}
	V111= structure_ref((V109),VV[0],4);
	if(!(type_of(/* INLINE-ARGS */V111)==t_fixnum||type_of(/* INLINE-ARGS */V111)==t_bignum)){
	goto T242;}
	V112= structure_ref((V109),VV[0],4);
	V113= one_plus(/* INLINE-ARGS */V112);
	V107= (number_compare((V107),/* INLINE-ARGS */V113)>=0?((V107)):/* INLINE-ARGS */V113);
	V114= structure_ref((V109),VV[0],4);
	(void)(structure_set((V109),VV[0],2,/* INLINE-ARGS */V114));
	goto T238;
T242:;
	(void)(structure_set((V109),VV[0],2,(V107)));
	(void)(structure_set((V109),VV[0],4,(V107)));
	V107= number_plus((V107),small_fixnum(1));
T238:;
	V108= cdr((V108));
	V109= car((V108));
	goto T233;}
T229:;
	if(!(number_compare((V107),small_fixnum(0))>0)){
	goto T254;}
	if(!(((V106))==(VV[33]))){
	goto T257;}
	princ_str("\n	object base0[",VV[34]);
	(void)((*(LnkLI77))((V107)));
	princ_str("];",VV[34]);
T257:;
	setq(VV[35],make_cons(VV[36],symbol_value(VV[35])));
	princ_str("\n	DCnames",VV[34]);
	(void)((*(LnkLI77))((V105)));
	princ_str("",VV[34]);
T254:;
	{object V115 = (V107);
	VMR10(V115)}}
}
/*	local entry for function WT-DOWN	*/

static object LI11(V117)

object V117;
{	 VMB11 VMS11 VMV11
TTL:;{object V118;
	base[0]= (V117);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	vs_top=sup;
	V118= vs_base[0];
	if(V118==Cnil)goto T269;
	goto T268;
T269:;}
	(void)((*(LnkLI79))());
T268:;
	princ_str("base0[",VV[34]);
	(void)((*(LnkLI77))((V117)));
	princ_char(93,VV[34]);
	{object V119 = Cnil;
	VMR11(V119)}
}
/*	local entry for function WT-VAR	*/

static object LI12(V122,V123)

register object V122;object V123;
{	 VMB12 VMS12 VMV12
TTL:;
	V125= structure_ref((V122),VV[0],1);
	{object V124= /* INLINE-ARGS */V125;
	if((V124!= VV[9]))goto T275;
	if(((V123))==Cnil){
	goto T277;}
	V126= structure_ref((V122),VV[0],3);
	{object V127 = (*(LnkLI80))(/* INLINE-ARGS */V126);
	VMR12(V127)}
T277:;
	if((structure_ref((V122),VV[0],3))==Cnil){
	goto T280;}
	V128= structure_ref((V122),VV[0],2);
	{object V129 = (*(LnkLI81))(/* INLINE-ARGS */V128);
	VMR12(V129)}
T280:;
	V130= structure_ref((V122),VV[0],2);
	if(!((Ct)==(/* INLINE-ARGS */V130))){
	goto T283;}
	V131= structure_ref((V122),VV[0],4);
	if(!(type_of(/* INLINE-ARGS */V131)==t_fixnum)){
	goto T283;}
	if((symbol_value(VV[8]))==Cnil){
	goto T283;}
	V132= structure_ref((V122),VV[0],5);
	if(!((Ct)==(/* INLINE-ARGS */V132))){
	goto T283;}
	(void)(structure_set((V122),VV[0],1,VV[7]));
	goto TTL;
T283:;
	V133= structure_ref((V122),VV[0],2);
	{object V134 = (*(LnkLI82))(/* INLINE-ARGS */V133);
	VMR12(V134)}
T275:;
	if((V124!= VV[4]))goto T295;
	princ_str("(VV[",VV[34]);
	V135= structure_ref((V122),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V135));
	princ_str("]->s.s_dbind)",VV[34]);
	{object V136 = Cnil;
	VMR12(V136)}
T295:;
	if((V124!= VV[83]))goto T299;
	V137= structure_ref((V122),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V137));
	{object V138 = Cnil;
	VMR12(V138)}
T299:;
	if((V124!= VV[32]))goto T301;
	V139= structure_ref((V122),VV[0],4);
	{object V140 = (*(LnkLI84))(/* INLINE-ARGS */V139);
	VMR12(V140)}
T301:;
	if((V124!= VV[15]))goto T302;
	if((symbol_value(VV[37]))==Cnil){
	goto T304;}
	princ_str("symbol_value(VV[",VV[34]);
	V141= structure_ref((V122),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V141));
	princ_str("])",VV[34]);
	{object V142 = Cnil;
	VMR12(V142)}
T304:;
	princ_str("(VV[",VV[34]);
	V143= structure_ref((V122),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V143));
	princ_str("]->s.s_dbind)",VV[34]);
	{object V144 = Cnil;
	VMR12(V144)}
T302:;
	V146= structure_ref((V122),VV[0],1);
	{object V145= /* INLINE-ARGS */V146;
	if((V145!= VV[23]))goto T313;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[38]))==0)){
	goto T314;}
	princ_str("CMP",VV[34]);
T314:;
	princ_str("make_fixnum",VV[34]);
	goto T312;
T313:;
	if((V145!= VV[24]))goto T319;
	princ_str("make_integer",VV[34]);
	goto T312;
T319:;
	if((V145!= VV[25]))goto T321;
	princ_str("code_char",VV[34]);
	goto T312;
T321:;
	if((V145!= VV[26]))goto T323;
	princ_str("make_longfloat",VV[34]);
	goto T312;
T323:;
	if((V145!= VV[27]))goto T325;
	princ_str("make_shortfloat",VV[34]);
	goto T312;
T325:;
	if((V145!= VV[7]))goto T327;
	goto T312;
T327:;
	(void)((*(LnkLI85))());}
T312:;
	princ_str("(V",VV[34]);
	V147= structure_ref((V122),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V147));
	princ_char(41,VV[34]);
	{object V148 = Cnil;
	VMR12(V148)}}
}
/*	local entry for function SET-VAR	*/

static object LI13(V152,V153,V154)

register object V152;register object V153;object V154;
{	 VMB13 VMS13 VMV13
	bds_check;
TTL:;
	if(!(type_of((V152))==t_cons)){
	goto T331;}
	if(!((car((V152)))==(VV[0]))){
	goto T331;}
	if(!((cadr((V152)))==((V153)))){
	goto T331;}
	if((caddr((V152)))==((V154))){
	goto T332;}
T331:;
	V156= structure_ref((V153),VV[0],1);
	{object V155= /* INLINE-ARGS */V156;
	if((V155!= VV[9]))goto T340;
	princ_str("\n	",VV[34]);
	if(((V154))==Cnil){
	goto T344;}
	V157= structure_ref((V153),VV[0],3);
	(void)((*(LnkLI80))(/* INLINE-ARGS */V157));
	goto T342;
T344:;
	if((structure_ref((V153),VV[0],3))==Cnil){
	goto T347;}
	V158= structure_ref((V153),VV[0],2);
	(void)((*(LnkLI81))(/* INLINE-ARGS */V158));
	goto T342;
T347:;
	V159= structure_ref((V153),VV[0],2);
	(void)((*(LnkLI82))(/* INLINE-ARGS */V159));
T342:;
	princ_str("= ",VV[34]);
	(void)((*(LnkLI77))((V152)));
	princ_char(59,VV[34]);
	{object V160 = Cnil;
	VMR13(V160)}
T340:;
	if((V155!= VV[4]))goto T352;
	princ_str("\n	(VV[",VV[34]);
	V161= structure_ref((V153),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V161));
	princ_str("]->s.s_dbind)= ",VV[34]);
	(void)((*(LnkLI77))((V152)));
	princ_char(59,VV[34]);
	{object V162 = Cnil;
	VMR13(V162)}
T352:;
	if((V155!= VV[15]))goto T358;
	if((symbol_value(VV[37]))==Cnil){
	goto T360;}
	princ_str("\n	setq(VV[",VV[34]);
	V163= structure_ref((V153),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V163));
	princ_str("],",VV[34]);
	(void)((*(LnkLI77))((V152)));
	princ_str(");",VV[34]);
	{object V164 = Cnil;
	VMR13(V164)}
T360:;
	princ_str("\n	(VV[",VV[34]);
	V165= structure_ref((V153),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V165));
	princ_str("]->s.s_dbind)= ",VV[34]);
	(void)((*(LnkLI77))((V152)));
	princ_char(59,VV[34]);
	{object V166 = Cnil;
	VMR13(V166)}
T358:;
	if((V155!= VV[32]))goto T372;
	princ_str("\n	",VV[34]);
	V167= structure_ref((V153),VV[0],4);
	(void)((*(LnkLI84))(/* INLINE-ARGS */V167));
	princ_char(61,VV[34]);
	(void)((*(LnkLI77))((V152)));
	princ_char(59,VV[34]);
	{object V168 = Cnil;
	VMR13(V168)}
T372:;
	if((V155!= VV[24]))goto T379;
	{object V169;
	register object V170;
	if(type_of((V152))==t_cons){
	goto T381;}
	V169= Cnil;
	goto T380;
T381:;
	V169= car((V152));
T380:;
	V170= structure_ref((V153),VV[0],4);
	{object V171= (V169);
	if((V171!= VV[86]))goto T385;
	princ_str("\n	ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str("alloc,",VV[34]);
	base[0]= caddr((V152));
	base[1]= cadddr((V152));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk87)();
	vs_top=sup;
	goto T384;
T385:;
	if((V171!= VV[88]))goto T394;
	princ_str("\n	ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))(caddr((V152))));
	goto T384;
T394:;
	if((V171!= VV[0]))goto T401;
	V173= structure_ref(cadr((V152)),VV[0],1);
	{object V172= /* INLINE-ARGS */V173;
	if((V172!= VV[24]))goto T402;
	princ_str("SETQ_II(V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str("alloc,V",VV[34]);
	V174= structure_ref(cadr((V152)),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V174));
	goto T384;
T402:;
	if((V172!= VV[23]))goto T409;
	princ_str("ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str("alloc,V",VV[34]);
	V175= structure_ref(cadr((V152)),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V175));
	goto T384;
T409:;
	princ_str("SETQ_IO(V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))((V152)));
	goto T384;}
T401:;
	if((V171!= VV[54]))goto T422;
	princ_str("SETQ_IO(V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))((V152)));
	goto T384;
T422:;
	bds_bind(VV[39],small_fixnum(0));
	bds_bind(VV[40],symbol_value(VV[40]));
	base[2]= VV[41];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	princ_str("\n	SETQ_II(V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V170)));
	princ_str("alloc,",VV[34]);
	base[2]= (V152);
	base[3]= make_cons(VV[42],(V153));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	princ_str(");",VV[34]);
	V176= (*(LnkLI91))();
	bds_unwind1;
	bds_unwind1;
	{object V177 = Cnil;
	VMR13(V177)}}
T384:;
	princ_str(");",VV[34]);
	{object V178 = Cnil;
	VMR13(V178)}}
T379:;
	princ_str("\n	V",VV[34]);
	V179= structure_ref((V153),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V179));
	princ_str("= ",VV[34]);
	V181= structure_ref((V153),VV[0],1);
	{object V180= /* INLINE-ARGS */V181;
	if((V180!= VV[23]))goto T449;
	base[0]= (V152);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T448;
T449:;
	if((V180!= VV[25]))goto T451;
	base[0]= (V152);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T448;
T451:;
	if((V180!= VV[26]))goto T453;
	base[0]= (V152);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	goto T448;
T453:;
	if((V180!= VV[27]))goto T455;
	base[0]= (V152);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	goto T448;
T455:;
	if((V180!= VV[7]))goto T457;
	base[0]= (V152);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk96)();
	vs_top=sup;
	goto T448;
T457:;
	(void)((*(LnkLI85))());}
T448:;
	princ_char(59,VV[34]);
	{object V182 = Cnil;
	VMR13(V182)}}
T332:;
	{object V183 = Cnil;
	VMR13(V183)}
}
/*	local entry for function SCH-GLOBAL	*/

static object LI14(V185)

register object V185;
{	 VMB14 VMS14 VMV14
TTL:;
	{register object V186;
	register object V187;
	V186= symbol_value(VV[18]);
	V187= car((V186));
T463:;
	if(!(endp((V186)))){
	goto T464;}
	{object V188 = Cnil;
	VMR14(V188)}
T464:;
	V189= structure_ref((V187),VV[0],0);
	if(!((/* INLINE-ARGS */V189)==((V185)))){
	goto T468;}
	{object V190 = (V187);
	VMR14(V190)}
T468:;
	V186= cdr((V186));
	V187= car((V186));
	goto T463;}
}
/*	local entry for function C1ADD-GLOBALS	*/

static object LI15(V192)

object V192;
{	 VMB15 VMS15 VMV15
TTL:;
	{register object V193;
	register object V194;
	V193= (V192);
	V194= car((V193));
T479:;
	if(!(endp((V193)))){
	goto T480;}
	{object V195 = Cnil;
	VMR15(V195)}
T480:;
	V196= (*(LnkLI68))((V194));
	{register object V198;
	V198= get((V194),VV[5],Cnil);
	if(((V198))==Cnil){
	goto T489;}
	V197= (V198);
	goto T486;
T489:;
	V197= Ct;}
T486:;
	V199= (VFUN_NARGS=8,(*(LnkLI66))(VV[1],(V194),VV[14],VV[15],VV[16],/* INLINE-ARGS */V196,VV[17],V197));
	setq(VV[13],make_cons(/* INLINE-ARGS */V199,symbol_value(VV[13])));
	V193= cdr((V193));
	V194= car((V193));
	goto T479;}
}
/*	local entry for function C1SETQ	*/

static object LI16(V201)

register object V201;
{	 VMB16 VMS16 VMV16
TTL:;
	if(!(endp((V201)))){
	goto T497;}
	{object V202 = (*(LnkLI97))();
	VMR16(V202)}
T497:;
	if(!(endp(cdr((V201))))){
	goto T500;}
	{object V203 = (*(LnkLI98))(VV[43],small_fixnum(2),small_fixnum(1));
	VMR16(V203)}
T500:;
	if(!(endp(cddr((V201))))){
	goto T503;}
	{object V204 = (*(LnkLI99))(car((V201)),cadr((V201)));
	VMR16(V204)}
T503:;
	{register object V205;
	register object V206;
	V205= (V201);
	V206= Cnil;
T506:;
	if(!(endp((V205)))){
	goto T507;}
	V207= reverse((V206));
	V208= make_cons(VV[44],/* INLINE-ARGS */V207);
	{object V209 = (*(LnkLI100))(/* INLINE-ARGS */V208);
	VMR16(V209)}
T507:;
	if(!(endp(cdr((V205))))){
	goto T511;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[45],car((V205)))));
T511:;
	V210= list(3,VV[43],car((V205)),cadr((V205)));
	V206= make_cons(/* INLINE-ARGS */V210,(V206));
	V205= cddr((V205));
	goto T506;}
}
/*	local entry for function C1SETQ1	*/

static object LI17(V213,V214)

register object V213;object V214;
{	 VMB17 VMS17 VMV17
TTL:;
	{register object V215;
	register object V216;
	register object V217;
	register object V218;
	V215= (VFUN_NARGS=0,(*(LnkLI71))());
	V216= Cnil;
	V217= Cnil;
	V218= Cnil;
	if(type_of((V213))==t_symbol){
	goto T523;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[46],(V213))));
T523:;
	base[1]= (V213);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T526;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[47],(V213))));
T526:;
	V218= (*(LnkLI72))((V213));
	{object V220;
	V221= car((V218));
	V222= structure_ref(V215,VV[12],0);
	V220= make_cons(/* INLINE-ARGS */V221,/* INLINE-ARGS */V222);
	(void)(structure_set(V215,VV[12],0,(V220)));}
	V217= (*(LnkLI100))((V214));
	(void)((*(LnkLI101))((V215),cadr((V217))));
	V223= structure_ref(car((V218)),VV[0],5);
	V224= structure_ref(cadr((V217)),VV[12],2);
	V216= (*(LnkLI102))(/* INLINE-ARGS */V223,/* INLINE-ARGS */V224);
	if(((V216))!=Cnil){
	goto T539;}
	(void)((VFUN_NARGS=3,(*(LnkLI70))(VV[48],(V213),(V214))));
T539:;
	V225= structure_ref(cadr((V217)),VV[12],2);
	if(((V216))==(/* INLINE-ARGS */V225)){
	goto T542;}
	{object V226;
	base[1]= cadr((V217));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk103)();
	vs_top=sup;
	V226= vs_base[0];
	(void)(structure_set((V226),VV[12],2,(V216)));
	V217= listA(3,car((V217)),(V226),cddr((V217)));}
T542:;
	(void)(structure_set((V215),VV[12],2,(V216)));
	{object V227 = list(4,VV[43],(V215),(V218),(V217));
	VMR17(V227)}}
}
/*	local entry for function C2SETQ	*/

static object LI18(V230,V231)

object V230;object V231;
{	 VMB18 VMS18 VMV18
	bds_check;
TTL:;
	base[0]= make_cons(VV[0],(V230));
	bds_bind(VV[49],base[0]);
	V232= (*(LnkLI104))((V231));
	bds_unwind1;
	{object V233= car((V231));
	if((V233!= VV[105]))goto T552;
	{object V234 = (*(LnkLI106))(caddr((V231)));
	VMR18(V234)}
T552:;
	V235= make_cons(VV[0],(V230));
	{object V236 = (VFUN_NARGS=1,(*(LnkLI76))(/* INLINE-ARGS */V235));
	VMR18(V236)}}
}
/*	local entry for function C1PROGV	*/

static object LI19(V238)

register object V238;
{	 VMB19 VMS19 VMV19
TTL:;
	{object V239;
	object V240;
	register object V241;
	V239= Cnil;
	V240= Cnil;
	V241= (VFUN_NARGS=0,(*(LnkLI71))());
	if(endp((V238))){
	goto T557;}
	if(!(endp(cdr((V238))))){
	goto T556;}
T557:;
	V242 = make_fixnum(length((V238)));
	(void)((*(LnkLI98))(VV[50],small_fixnum(2),V242));
T556:;
	V239= (*(LnkLI107))(car((V238)),(V241));
	V240= (*(LnkLI107))(cadr((V238)),(V241));
	{object V243 = list(5,VV[50],(V241),(V239),(V240),(*(LnkLI108))(cddr((V238)),(V241)));
	VMR19(V243)}}
}
/*	local entry for function C2PROGV	*/

static object LI20(V247,V248,V249)

object V247;object V248;object V249;
{	 VMB20 VMS20 VMV20
	bds_check;
TTL:;
	{object V250;
	setq(VV[51],number_plus(symbol_value(VV[51]),small_fixnum(1)));
	V250= symbol_value(VV[51]);
	bds_bind(VV[52],symbol_value(VV[52]));
	princ_str("\n	{object symbols,values;",VV[34]);
	princ_str("\n	bds_ptr V",VV[34]);
	(void)((*(LnkLI77))((V250)));
	princ_str("=bds_top;",VV[34]);
	(VV[52]->s.s_dbind)= make_cons((V250),(VV[52]->s.s_dbind));
	bds_bind(VV[53],symbol_value(VV[53]));
	base[3]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[3]);
	(void)((*(LnkLI104))((V247)));
	princ_str("\n	symbols= ",VV[34]);
	(void)((*(LnkLI77))((VV[49]->s.s_dbind)));
	princ_char(59,VV[34]);
	bds_unwind1;
	base[3]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[3]);
	(void)((*(LnkLI104))((V248)));
	princ_str("\n	values= ",VV[34]);
	(void)((*(LnkLI77))((VV[49]->s.s_dbind)));
	princ_char(59,VV[34]);
	bds_unwind1;
	princ_str("\n	while(!endp(symbols)){",VV[34]);
	if((symbol_value(VV[37]))==Cnil){
	goto T590;}
	princ_str("\n	if(type_of(MMcar(symbols))!=t_symbol)",VV[34]);
	princ_str("\n	FEinvalid_variable(\"~s is not a symbol.\",MMcar(symbols));",VV[34]);
T590:;
	princ_str("\n	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);",VV[34]);
	princ_str("\n	else{bds_bind(MMcar(symbols),MMcar(values));",VV[34]);
	princ_str("\n	values=MMcdr(values);}",VV[34]);
	princ_str("\n	symbols=MMcdr(symbols);}",VV[34]);
	bds_unwind1;
	base[2]= (V249);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk110)();
	vs_top=sup;
	princ_char(125,VV[34]);
	{object V251 = Cnil;
	bds_unwind1;
	VMR20(V251)}}
}
/*	local entry for function C1PSETQ	*/

static object LI21(V253)

object V253;
{	 VMB21 VMS21 VMV21
TTL:;
	{object V254;
	register object V255;
	object V256;
	V254= Cnil;
	V255= Cnil;
	V256= (VFUN_NARGS=2,(*(LnkLI71))(VV[17],VV[55]));
	{register object V257;
	V257= (V253);
T611:;
	if(!(endp((V257)))){
	goto T612;}
	goto T609;
T612:;
	if(type_of(car((V257)))==t_symbol){
	goto T616;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[56],car((V257)))));
T616:;
	base[1]= car((V257));
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T619;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[57],car((V257)))));
T619:;
	if(!(endp(cdr((V257))))){
	goto T623;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[58],car((V257)))));
T623:;
	{register object V258;
	register object V259;
	register object V260;
	V258= (*(LnkLI72))(car((V257)));
	V259= (*(LnkLI100))(cadr((V257)));
	V261= structure_ref(car((V258)),VV[0],5);
	V262= structure_ref(cadr((V259)),VV[12],2);
	V260= (*(LnkLI102))(/* INLINE-ARGS */V261,/* INLINE-ARGS */V262);
	V263= structure_ref(cadr((V259)),VV[12],2);
	if(equal((V260),/* INLINE-ARGS */V263)){
	goto T630;}
	{register object V264;
	base[4]= cadr((V259));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk103)();
	vs_top=sup;
	V264= vs_base[0];
	(void)(structure_set((V264),VV[12],2,(V260)));
	V259= listA(3,car((V259)),(V264),cddr((V259)));}
T630:;
	V254= make_cons((V258),(V254));
	V255= make_cons((V259),(V255));
	{register object V265;
	object V266;
	V265= (V256);
	V267= car((V258));
	V268= structure_ref((V265),VV[12],0);
	V266= make_cons(/* INLINE-ARGS */V267,/* INLINE-ARGS */V268);
	(void)(structure_set((V265),VV[12],0,(V266)));}
	(void)((*(LnkLI101))((V256),cadar((V255))));}
	V257= cddr((V257));
	goto T611;}
T609:;
	V269= reverse((V254));
	{object V270 = list(4,VV[59],(V256),/* INLINE-ARGS */V269,reverse((V255)));
	VMR21(V270)}}
}
/*	local entry for function C2PSETQ	*/

static object LI22(V273,V274)

object V273;register object V274;
{	 VMB22 VMS22 VMV22
	bds_check;
TTL:;
	{register object V275;
	object V276;
	bds_bind(VV[53],symbol_value(VV[53]));
	V275= Cnil;
	V276= small_fixnum(0);
	{register object V277;
	register object V278;
	V277= (V273);
	V278= car((V277));
T653:;
	if(!(endp((V277)))){
	goto T654;}
	goto T649;
T654:;
	if(((*(LnkLI111))(car((V278)),cdr((V274))))!=Cnil){
	goto T659;}
	if(((*(LnkLI112))(car((V278)),cdr((V274))))==Cnil){
	goto T660;}
T659:;
	{object V279= caar((V274));
	if((V279!= VV[105]))goto T664;
	V280= make_cons((V278),caddar((V274)));
	V275= make_cons(/* INLINE-ARGS */V280,(V275));
	goto T658;
T664:;
	V282= structure_ref(car((V278)),VV[0],1);
	{register object x= /* INLINE-ARGS */V282,V281= VV[60];
	while(!endp(V281))
	if(eql(x,V281->c.c_car)){
	goto T668;
	}else V281=V281->c.c_cdr;
	goto T667;}
T668:;
	{object V283;
	object V284;
	object V285;
	V283= structure_ref(car((V278)),VV[0],1);
	setq(VV[51],number_plus(symbol_value(VV[51]),small_fixnum(1)));
	V284= symbol_value(VV[51]);
	V286= (VFUN_NARGS=4,(*(LnkLI66))(VV[14],(V283),VV[16],(V284)));
	V285= list(3,VV[0],/* INLINE-ARGS */V286,Cnil);
	princ_str("\n	{",VV[34]);
	(void)((*(LnkLI77))(symbol_value(VV[61])));
	V287= (*(LnkLI113))((V283));
	(void)((*(LnkLI77))(/* INLINE-ARGS */V287));
	princ_char(86,VV[34]);
	(void)((*(LnkLI77))((V284)));
	princ_char(59,VV[34]);
	V276= number_plus((V276),small_fixnum(1));
	bds_bind(VV[49],(V285));
	V288= (*(LnkLI104))(car((V274)));
	bds_unwind1;
	V289= make_cons((V278),(V285));
	V275= make_cons(/* INLINE-ARGS */V289,(V275));
	goto T658;}
T667:;
	base[2]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[2]);
	(void)((*(LnkLI104))(car((V274))));
	V290= make_cons((V278),(VV[49]->s.s_dbind));
	V275= make_cons(/* INLINE-ARGS */V290,(V275));
	bds_unwind1;
	goto T658;}
T660:;
	base[2]= make_cons(VV[0],(V278));
	bds_bind(VV[49],base[2]);
	V291= (*(LnkLI104))(car((V274)));
	bds_unwind1;
T658:;
	{object V292;
	V292= car((V274));
	V274= cdr((V274));}
	V277= cdr((V277));
	V278= car((V277));
	goto T653;}
T649:;
	{register object V293;
	register object V294;
	V293= (V275);
	V294= car((V293));
T701:;
	if(!(endp((V293)))){
	goto T702;}
	goto T697;
T702:;
	(void)((*(LnkLI42))(cdr((V294)),caar((V294)),cadar((V294))));
	V293= cdr((V293));
	V294= car((V293));
	goto T701;}
T697:;
	{object V296;
	V296= small_fixnum(0);
T715:;
	if(!(number_compare((V296),V276)>=0)){
	goto T716;}
	goto T712;
T716:;
	princ_char(125,VV[34]);
	V296= one_plus((V296));
	goto T715;}
T712:;
	{object V297 = (VFUN_NARGS=1,(*(LnkLI76))(Cnil));
	bds_unwind1;
	VMR22(V297)}}
}
/*	function definition for WT-VAR-DECL	*/

static L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{register object V298;
	check_arg(1);
	V298=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V298);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T726;}
	{object V299;
	V299= structure_ref((V298),VV[0],4);
	V300= structure_ref((V298),VV[0],1);
	if(!((/* INLINE-ARGS */V300)==(VV[24]))){
	goto T731;}
	princ_str("IDECL(",VV[34]);
T731:;
	(void)((*(LnkLI77))(symbol_value(VV[61])));
	V301= (*(LnkLI69))((V298));
	(void)((*(LnkLI77))(/* INLINE-ARGS */V301));
	V302= structure_ref((V298),VV[0],1);
	V303= (*(LnkLI113))(/* INLINE-ARGS */V302);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V303));
	princ_char(86,VV[34]);
	(void)((*(LnkLI77))((V299)));
	V304= structure_ref((V298),VV[0],1);
	if(!(eql(/* INLINE-ARGS */V304,VV[24]))){
	goto T741;}
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V299)));
	princ_str("space,V",VV[34]);
	(void)((*(LnkLI77))((V299)));
	princ_str("alloc)",VV[34]);
T741:;
	princ_char(59,VV[34]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
T726:;
	base[1]= (*(LnkLI79))();
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static object  LnkTLI69(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[69],&LnkLI69,1,ap);} /* REGISTER */
static LnkT114(){ call_or_link(VV[114],&Lnk114);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI42(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[42],&LnkLI42,3,ap);} /* SET-VAR */
static object  LnkTLI113(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[113],&LnkLI113,1,ap);} /* REP-TYPE */
static object  LnkTLI112(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[112],&LnkLI112,2,ap);} /* ARGS-INFO-REFERRED-VARS */
static object  LnkTLI111(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[111],&LnkLI111,2,ap);} /* ARGS-INFO-CHANGED-VARS */
static LnkT110(){ call_or_link(VV[110],&Lnk110);} /* C2EXPR */
static object  LnkTLI109(){return call_proc0(VV[109],&LnkLI109);} /* VS-PUSH */
static object  LnkTLI108(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[108],&LnkLI108,2,ap);} /* C1PROGN* */
static object  LnkTLI107(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[107],&LnkLI107,2,ap);} /* C1EXPR* */
static object  LnkTLI106(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[106],&LnkLI106,1,ap);} /* C2LOCATION */
static object  LnkTLI104(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[104],&LnkLI104,1,ap);} /* C2EXPR* */
static LnkT103(){ call_or_link(VV[103],&Lnk103);} /* COPY-INFO */
static object  LnkTLI102(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[102],&LnkLI102,2,ap);} /* TYPE-AND */
static object  LnkTLI101(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[101],&LnkLI101,2,ap);} /* ADD-INFO */
static object  LnkTLI100(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[100],&LnkLI100,1,ap);} /* C1EXPR */
static object  LnkTLI99(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[99],&LnkLI99,2,ap);} /* C1SETQ1 */
static object  LnkTLI98(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[98],&LnkLI98,3,ap);} /* TOO-FEW-ARGS */
static object  LnkTLI97(){return call_proc0(VV[97],&LnkLI97);} /* C1NIL */
static LnkT96(){ call_or_link(VV[96],&Lnk96);} /* WT-LOC */
static LnkT95(){ call_or_link(VV[95],&Lnk95);} /* WT-SHORT-FLOAT-LOC */
static LnkT94(){ call_or_link(VV[94],&Lnk94);} /* WT-LONG-FLOAT-LOC */
static LnkT93(){ call_or_link(VV[93],&Lnk93);} /* WT-CHARACTER-LOC */
static LnkT92(){ call_or_link(VV[92],&Lnk92);} /* WT-FIXNUM-LOC */
static object  LnkTLI91(){return call_proc0(VV[91],&LnkLI91);} /* CLOSE-INLINE-BLOCKS */
static LnkT90(){ call_or_link(VV[90],&Lnk90);} /* WT-INTEGER-LOC */
static LnkT89(){ call_or_link(VV[89],&Lnk89);} /* SAVE-AVMA */
static LnkT87(){ call_or_link(VV[87],&Lnk87);} /* WT-INLINE-LOC */
static object  LnkTLI85(){return call_proc0(VV[85],&LnkLI85);} /* BABOON */
static object  LnkTLI84(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[84],&LnkLI84,1,ap);} /* WT-DOWN */
static object  LnkTLI82(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[82],&LnkLI82,1,ap);} /* WT-VS */
static object  LnkTLI81(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[81],&LnkLI81,1,ap);} /* WT-VS* */
static object  LnkTLI80(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[80],&LnkLI80,1,ap);} /* WT-CCB-VS */
static object  LnkTLI79(){return call_proc0(VV[79],&LnkLI79);} /* WFS-ERROR */
static LnkT78(){ call_or_link(VV[78],&Lnk78);} /* FIXNUMP */
static object  LnkTLI77(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[77],&LnkLI77,1,ap);} /* WT1 */
static object  LnkTLI76(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[76],&LnkLI76,ap);} /* UNWIND-EXIT */
static object  LnkTLI75(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[75],&LnkLI75,2,ap);} /* TYPE>= */
static object  LnkTLI74(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[74],&LnkLI74,1,ap);} /* UNDEFINED-VARIABLE */
static object  LnkTLI73(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[73],&LnkLI73,1,ap);} /* SCH-GLOBAL */
static object  LnkTLI72(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[72],&LnkLI72,1,ap);} /* C1VREF */
static object  LnkTLI71(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[71],&LnkLI71,ap);} /* MAKE-INFO */
static object  LnkTLI70(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[70],&LnkLI70,ap);} /* CMPWARN */
static object  LnkTLI68(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[68],&LnkLI68,1,ap);} /* ADD-SYMBOL */
static object  LnkTLI67(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[67],&LnkLI67,ap);} /* CMPERR */
static object  LnkTLI66(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[66],&LnkLI66,ap);} /* MAKE-VAR */
