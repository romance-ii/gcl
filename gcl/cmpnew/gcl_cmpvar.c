
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
	goto T20;
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
	goto T32;
T32:;
	if(((V17))==Cnil){
	goto T30;}
	(void)(structure_set((V18),VV[0],5,cdr((V17))));
	goto T28;
	goto T30;
T30:;
	V17= get((V13),VV[5],Cnil);
	if(((V17))==Cnil){
	goto T28;}
	(void)(structure_set((V18),VV[0],5,(V17)));
	goto T28;
T28:;
	setq(VV[6],Ct);
	goto T19;
	goto T21;
T21:;
	{register object V22;
	register object V23;
	V22= (V16);
	V23= car((V22));
	goto T41;
T41:;
	if(!(endp_prop((V22)))){
	goto T42;}
	goto T37;
	goto T42;
T42:;
	if(!((car((V23)))==((V13)))){
	goto T46;}
	{object V24= cdr((V23));
	if((V24!= VV[7]))goto T49;
	(void)(structure_set((V18),VV[0],4,VV[7]));
	goto T46;
	goto T49;
T49:;
	if((V24!= VV[69]))goto T50;
	V25= structure_ref((V18),VV[0],6);
	V26= number_plus(/* INLINE-ARGS */V25,small_fixnum(100));
	(void)(structure_set((V18),VV[0],6,/* INLINE-ARGS */V26));
	goto T46;
	goto T50;
T50:;
	(void)(structure_set((V18),VV[0],5,cdr((V23))));}
	goto T46;
T46:;
	V22= cdr((V22));
	V23= car((V22));
	goto T41;}
	goto T37;
T37:;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T57;}
	goto T56;
	goto T57;
T57:;
	if(symbol_value(VV[8])==Cnil){
	goto T56;}
	V27= structure_ref((V18),VV[0],5);
	if(!((/* INLINE-ARGS */V27)==Cnil)){
	goto T62;}
	goto T60;
	goto T62;
T62:;
	V28= structure_ref((V18),VV[0],5);
	if((Ct)==(/* INLINE-ARGS */V28)){
	goto T60;}
	goto T56;
	goto T60;
T60:;
	(void)(structure_set((V18),VV[0],4,VV[7]));
	goto T56;
T56:;
	(void)(structure_set((V18),VV[0],1,VV[9]));
	goto T19;
T19:;
	{register object x= (V13),V29= (V15);
	while(!endp(V29))
	if(eql(x,V29->c.c_car)){
	goto T66;
	}else V29=V29->c.c_cdr;
	goto T64;}
	goto T66;
T66:;
	(void)(structure_set((V18),VV[0],2,VV[10]));
	goto T64;
T64:;
	{object V30 = (V18);
	VMR2(V30)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-VREF	*/

static object LI3(V32)

register object V32;
{	 VMB3 VMS3 VMV3
	goto TTL;
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
	goto T68;
T68:;
	{object V36 = Cnil;
	VMR3(V36)}
	return Cnil;
}
/*	local entry for function C1VAR	*/

static object LI4(V38)

object V38;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V39;
	object V40;
	V39= (VFUN_NARGS=0,(*(LnkLI71))());
	V40= (*(LnkLI72))((V38));
	{object V41;
	object V43;
	V41= car((V40));
	V44= structure_ref(V39,VV[12],1);
	V43= make_cons((V41),/* INLINE-ARGS */V44);
	(void)(structure_set(V39,VV[12],1,(V43)));}
	V45= structure_ref(car((V40)),VV[0],5);
	(void)(structure_set((V39),VV[12],2,/* INLINE-ARGS */V45));
	{object V46 = list(3,VV[0],(V39),(V40));
	VMR4(V46)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1VREF	*/

static object LI5(V48)

register object V48;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{register object V49;
	register object V50;
	V49= Cnil;
	V50= Cnil;
	{register object V51;
	register object V52;
	V51= symbol_value(VV[13]);
	V52= car((V51));
	goto T85;
T85:;
	if(!(endp_prop((V51)))){
	goto T86;}
	{register object V53;
	V53= (*(LnkLI73))((V48));
	if(((V53))!=Cnil){
	goto T90;}
	base[1]= (V48);
	vs_top=(vs_base=base+1)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T93;}
	(void)((*(LnkLI74))((V48)));
	goto T93;
T93:;
	V54= (*(LnkLI68))((V48));{object V56;
	V56= get((V48),VV[5],Cnil);
	if(V56==Cnil)goto T100;
	V55= V56;
	goto T99;
	goto T100;
T100:;}
	V55= Ct;
	goto T99;
T99:;
	V53= (VFUN_NARGS=8,(*(LnkLI66))(VV[1],(V48),VV[14],VV[15],VV[16],/* INLINE-ARGS */V54,VV[17],V55));
	setq(VV[18],make_cons(V53,symbol_value(VV[18])));
	goto T90;
T90:;
	{object V58 = list(2,(V53),(V49));
	VMR5(V58)}}
	goto T86;
T86:;
	if(!(((V52))==(VV[19]))){
	goto T106;}
	V49= Ct;
	goto T104;
	goto T106;
T106:;
	if(!(((V52))==(VV[20]))){
	goto T110;}
	V50= Ct;
	goto T104;
	goto T110;
T110:;
	V59= structure_ref((V52),VV[0],0);
	if(!((/* INLINE-ARGS */V59)==((V48)))){
	goto T104;}
	V60= structure_ref((V52),VV[0],2);
	if(!((/* INLINE-ARGS */V60)==(VV[10]))){
	goto T115;}
	(void)((VFUN_NARGS=2,(*(LnkLI70))(VV[21],(V48))));
	(void)(structure_set((V52),VV[0],2,Ct));
	goto T115;
T115:;
	if(((V49))==Cnil){
	goto T121;}
	(void)(structure_set((V52),VV[0],3,Ct));
	goto T119;
	goto T121;
T121:;
	if(((V50))==Cnil){
	goto T124;}
	V61= structure_ref((V52),VV[0],1);
	if(!((/* INLINE-ARGS */V61)==(VV[9]))){
	goto T126;}
	(void)(structure_set((V52),VV[0],4,VV[22]));
	goto T126;
T126:;
	(void)(structure_set((V52),VV[0],2,Ct));
	goto T119;
	goto T124;
T124:;
	(void)(structure_set((V52),VV[0],2,Ct));
	{long V62= fix(structure_ref((V52),VV[0],6));
	V63 = make_fixnum((long)(1)+(/* INLINE-ARGS */V62));
	(void)(structure_set((V52),VV[0],6,V63));}
	goto T119;
T119:;
	{object V64 = list(2,(V52),(V49));
	VMR5(V64)}
	goto T104;
T104:;
	V51= cdr((V51));
	V52= car((V51));
	goto T85;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2VAR-KIND	*/

static object LI6(V66)

register object V66;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	V67= structure_ref((V66),VV[0],1);
	if(!((/* INLINE-ARGS */V67)==(VV[9]))){
	goto T136;}
	if((structure_ref((V66),VV[0],3))!=Cnil){
	goto T136;}
	V68= structure_ref((V66),VV[0],4);
	if((/* INLINE-ARGS */V68)==(VV[22])){
	goto T136;}
	V69= structure_ref((V66),VV[0],4);
	if(!((/* INLINE-ARGS */V69)==(VV[7]))){
	goto T143;}
	{object V70 = VV[7];
	VMR6(V70)}
	goto T143;
T143:;
	{register object V71;
	V71= structure_ref((V66),VV[0],5);
	if(((*(LnkLI75))(VV[23],(V71)))==Cnil){
	goto T147;}
	{object V72 = VV[23];
	VMR6(V72)}
	goto T147;
T147:;
	if(((*(LnkLI75))(VV[24],(V71)))==Cnil){
	goto T150;}
	{object V73 = VV[24];
	VMR6(V73)}
	goto T150;
T150:;
	if(((*(LnkLI75))(VV[25],(V71)))==Cnil){
	goto T153;}
	{object V74 = VV[25];
	VMR6(V74)}
	goto T153;
T153:;
	if(((*(LnkLI75))(VV[26],(V71)))==Cnil){
	goto T156;}
	{object V75 = VV[26];
	VMR6(V75)}
	goto T156;
T156:;
	if(((*(LnkLI75))(VV[27],(V71)))==Cnil){
	goto T159;}
	{object V76 = VV[27];
	VMR6(V76)}
	goto T159;
T159:;
	{object V77;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T162;}
	V77= Cnil;
	goto T161;
	goto T162;
T162:;
	if(symbol_value(VV[8])==Cnil){
	V77= Cnil;
	goto T161;}
	V77= VV[7];
	goto T161;
T161:;
	if(((V77))==Cnil){
	goto T166;}
	{object V78 = (V77);
	VMR6(V78)}
	goto T166;
T166:;
	{object V79 = Cnil;
	VMR6(V79)}}}
	goto T136;
T136:;
	{object V80 = Cnil;
	VMR6(V80)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2VAR	*/

static object LI7(V82)

object V82;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	V83= make_cons(VV[0],(V82));
	{object V84 = (VFUN_NARGS=3,(*(LnkLI76))(/* INLINE-ARGS */V83,Cnil,VV[28]));
	VMR7(V84)}
	return Cnil;
}
/*	local entry for function C2LOCATION	*/

static object LI8(V86)

object V86;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V87 = (VFUN_NARGS=3,(*(LnkLI76))((V86),Cnil,VV[28]));
	VMR8(V87)}
	return Cnil;
}
/*	local entry for function CHECK-DOWNWARD	*/

static object LI9(V89)

object V89;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V90;
	V90= Cnil;
	{register object V91;
	object V92;
	V91= symbol_value(VV[29]);
	V92= car((V91));
	goto T173;
T173:;
	if(!(endp_prop((V91)))){
	goto T174;}
	goto T169;
	goto T174;
T174:;
	if(!((car((V92)))==(VV[30]))){
	goto T178;}
	V90= Ct;
	{register object V93;
	register object V94;
	V93= symbol_value(VV[29]);
	V94= car((V93));
	goto T187;
T187:;
	if(!(endp_prop((V93)))){
	goto T188;}
	goto T183;
	goto T188;
T188:;
	if(!((car((V94)))==(VV[31]))){
	goto T192;}
	{register object V95;
	register object V96;
	V95= (V94);
	V96= VV[30];
	if(type_of((V95))!=t_cons)FEwrong_type_argument(Scons,(V95));
	((V95))->c.c_car = (V96);}
	goto T192;
T192:;
	V93= cdr((V93));
	V94= car((V93));
	goto T187;}
	goto T183;
T183:;
	goto T169;
	goto T178;
T178:;
	V91= cdr((V91));
	V92= car((V91));
	goto T173;}
	goto T169;
T169:;
	setq(VV[29],Cnil);
	if(((V90))==Cnil){
	goto T211;}
	{register object V97;
	object V98;
	V97= (V89);
	V98= car((V97));
	goto T216;
T216:;
	if(!(endp_prop((V97)))){
	goto T217;}
	{object V99 = Cnil;
	VMR9(V99)}
	goto T217;
T217:;
	V100= structure_ref((V98),VV[0],1);
	if(!((/* INLINE-ARGS */V100)==(VV[32]))){
	goto T221;}
	(void)(structure_set((V98),VV[0],1,VV[9]));
	goto T221;
T221:;
	V97= cdr((V97));
	V98= car((V97));
	goto T216;}
	goto T211;
T211:;
	{object V101 = Cnil;
	VMR9(V101)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ASSIGN-DOWN-VARS	*/

static object LI10(V105,V106,V107)

object V105;object V106;object V107;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V108;
	V108= small_fixnum(0);
	{register object V109;
	register object V110;
	V109= (V105);
	V110= car((V109));
	goto T234;
T234:;
	if(!(endp_prop((V109)))){
	goto T235;}
	goto T230;
	goto T235;
T235:;
	V111= structure_ref((V110),VV[0],1);
	if(!((/* INLINE-ARGS */V111)==(VV[32]))){
	goto T239;}
	V112= structure_ref((V110),VV[0],4);
	if(!(type_of(/* INLINE-ARGS */V112)==t_fixnum||type_of(/* INLINE-ARGS */V112)==t_bignum)){
	goto T243;}
	V113= structure_ref((V110),VV[0],4);
	V114= one_plus(/* INLINE-ARGS */V113);
	V108= (number_compare((V108),/* INLINE-ARGS */V114)>=0?((V108)):/* INLINE-ARGS */V114);
	V115= structure_ref((V110),VV[0],4);
	(void)(structure_set((V110),VV[0],2,/* INLINE-ARGS */V115));
	goto T239;
	goto T243;
T243:;
	(void)(structure_set((V110),VV[0],2,(V108)));
	(void)(structure_set((V110),VV[0],4,(V108)));
	V108= number_plus((V108),small_fixnum(1));
	goto T239;
T239:;
	V109= cdr((V109));
	V110= car((V109));
	goto T234;}
	goto T230;
T230:;
	if(!(number_compare((V108),small_fixnum(0))>0)){
	goto T255;}
	if(!(((V107))==(VV[33]))){
	goto T258;}
	princ_str("\n	object base0[",VV[34]);
	(void)((*(LnkLI77))((V108)));
	princ_str("];",VV[34]);
	goto T258;
T258:;
	setq(VV[36],make_cons(VV[35],symbol_value(VV[36])));
	princ_str("\n	DCnames",VV[34]);
	(void)((*(LnkLI77))((V106)));
	princ_str("",VV[34]);
	goto T255;
T255:;
	{object V117 = (V108);
	VMR10(V117)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-DOWN	*/

static object LI11(V119)

object V119;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;{object V120;
	base[0]= (V119);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	vs_top=sup;
	V120= vs_base[0];
	if(V120==Cnil)goto T270;
	goto T269;
	goto T270;
T270:;}
	(void)((*(LnkLI79))());
	goto T269;
T269:;
	princ_str("base0[",VV[34]);
	(void)((*(LnkLI77))((V119)));
	princ_char(93,VV[34]);
	{object V121 = Cnil;
	VMR11(V121)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-VAR	*/

static object LI12(V124,V125)

register object V124;object V125;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	V127= structure_ref((V124),VV[0],1);
	{object V126= /* INLINE-ARGS */V127;
	if((V126!= VV[9]))goto T276;
	if(((V125))==Cnil){
	goto T278;}
	V128= structure_ref((V124),VV[0],3);
	{object V129 = (*(LnkLI80))(/* INLINE-ARGS */V128);
	VMR12(V129)}
	goto T278;
T278:;
	if((structure_ref((V124),VV[0],3))==Cnil){
	goto T281;}
	V130= structure_ref((V124),VV[0],2);
	{object V131 = (*(LnkLI81))(/* INLINE-ARGS */V130);
	VMR12(V131)}
	goto T281;
T281:;
	V132= structure_ref((V124),VV[0],2);
	if(!((Ct)==(/* INLINE-ARGS */V132))){
	goto T284;}
	V133= structure_ref((V124),VV[0],4);
	if(!(type_of(/* INLINE-ARGS */V133)==t_fixnum)){
	goto T284;}
	if((symbol_value(VV[8]))==Cnil){
	goto T284;}
	V134= structure_ref((V124),VV[0],5);
	if(!((Ct)==(/* INLINE-ARGS */V134))){
	goto T284;}
	(void)(structure_set((V124),VV[0],1,VV[7]));
	goto TTL;
	goto T284;
T284:;
	V135= structure_ref((V124),VV[0],2);
	{object V136 = (*(LnkLI82))(/* INLINE-ARGS */V135);
	VMR12(V136)}
	goto T276;
T276:;
	if((V126!= VV[4]))goto T296;
	princ_str("(VV[",VV[34]);
	V137= structure_ref((V124),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V137));
	princ_str("]->s.s_dbind)",VV[34]);
	{object V138 = Cnil;
	VMR12(V138)}
	goto T296;
T296:;
	if((V126!= VV[83]))goto T300;
	V139= structure_ref((V124),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V139));
	{object V140 = Cnil;
	VMR12(V140)}
	goto T300;
T300:;
	if((V126!= VV[32]))goto T302;
	V141= structure_ref((V124),VV[0],4);
	{object V142 = (*(LnkLI84))(/* INLINE-ARGS */V141);
	VMR12(V142)}
	goto T302;
T302:;
	if((V126!= VV[15]))goto T303;
	if((symbol_value(VV[37]))==Cnil){
	goto T305;}
	princ_str("symbol_value(VV[",VV[34]);
	V143= structure_ref((V124),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V143));
	princ_str("])",VV[34]);
	{object V144 = Cnil;
	VMR12(V144)}
	goto T305;
T305:;
	princ_str("(VV[",VV[34]);
	V145= structure_ref((V124),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V145));
	princ_str("]->s.s_dbind)",VV[34]);
	{object V146 = Cnil;
	VMR12(V146)}
	goto T303;
T303:;
	V148= structure_ref((V124),VV[0],1);
	{object V147= /* INLINE-ARGS */V148;
	if((V147!= VV[23]))goto T314;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[38]))==0)){
	goto T315;}
	princ_str("CMP",VV[34]);
	goto T315;
T315:;
	princ_str("make_fixnum",VV[34]);
	goto T313;
	goto T314;
T314:;
	if((V147!= VV[24]))goto T320;
	princ_str("make_integer",VV[34]);
	goto T313;
	goto T320;
T320:;
	if((V147!= VV[25]))goto T322;
	princ_str("code_char",VV[34]);
	goto T313;
	goto T322;
T322:;
	if((V147!= VV[26]))goto T324;
	princ_str("make_longfloat",VV[34]);
	goto T313;
	goto T324;
T324:;
	if((V147!= VV[27]))goto T326;
	princ_str("make_shortfloat",VV[34]);
	goto T313;
	goto T326;
T326:;
	if((V147!= VV[7]))goto T328;
	goto T313;
	goto T328;
T328:;
	(void)((*(LnkLI85))());}
	goto T313;
T313:;
	princ_str("(V",VV[34]);
	V149= structure_ref((V124),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V149));
	princ_char(41,VV[34]);
	{object V150 = Cnil;
	VMR12(V150)}}
	return Cnil;
}
/*	local entry for function SET-VAR	*/

static object LI13(V154,V155,V156)

register object V154;register object V155;object V156;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V154))==t_cons)){
	goto T332;}
	if(!((car((V154)))==(VV[0]))){
	goto T332;}
	if(!((cadr((V154)))==((V155)))){
	goto T332;}
	if((caddr((V154)))==((V156))){
	goto T333;}
	goto T332;
T332:;
	V158= structure_ref((V155),VV[0],1);
	{object V157= /* INLINE-ARGS */V158;
	if((V157!= VV[9]))goto T341;
	princ_str("\n	",VV[34]);
	if(((V156))==Cnil){
	goto T345;}
	V159= structure_ref((V155),VV[0],3);
	(void)((*(LnkLI80))(/* INLINE-ARGS */V159));
	goto T343;
	goto T345;
T345:;
	if((structure_ref((V155),VV[0],3))==Cnil){
	goto T348;}
	V160= structure_ref((V155),VV[0],2);
	(void)((*(LnkLI81))(/* INLINE-ARGS */V160));
	goto T343;
	goto T348;
T348:;
	V161= structure_ref((V155),VV[0],2);
	(void)((*(LnkLI82))(/* INLINE-ARGS */V161));
	goto T343;
T343:;
	princ_str("= ",VV[34]);
	(void)((*(LnkLI77))((V154)));
	princ_char(59,VV[34]);
	{object V162 = Cnil;
	VMR13(V162)}
	goto T341;
T341:;
	if((V157!= VV[4]))goto T353;
	princ_str("\n	(VV[",VV[34]);
	V163= structure_ref((V155),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V163));
	princ_str("]->s.s_dbind)= ",VV[34]);
	(void)((*(LnkLI77))((V154)));
	princ_char(59,VV[34]);
	{object V164 = Cnil;
	VMR13(V164)}
	goto T353;
T353:;
	if((V157!= VV[15]))goto T359;
	if((symbol_value(VV[37]))==Cnil){
	goto T361;}
	princ_str("\n	setq(VV[",VV[34]);
	V165= structure_ref((V155),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V165));
	princ_str("],",VV[34]);
	(void)((*(LnkLI77))((V154)));
	princ_str(");",VV[34]);
	{object V166 = Cnil;
	VMR13(V166)}
	goto T361;
T361:;
	princ_str("\n	(VV[",VV[34]);
	V167= structure_ref((V155),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V167));
	princ_str("]->s.s_dbind)= ",VV[34]);
	(void)((*(LnkLI77))((V154)));
	princ_char(59,VV[34]);
	{object V168 = Cnil;
	VMR13(V168)}
	goto T359;
T359:;
	if((V157!= VV[32]))goto T373;
	princ_str("\n	",VV[34]);
	V169= structure_ref((V155),VV[0],4);
	(void)((*(LnkLI84))(/* INLINE-ARGS */V169));
	princ_char(61,VV[34]);
	(void)((*(LnkLI77))((V154)));
	princ_char(59,VV[34]);
	{object V170 = Cnil;
	VMR13(V170)}
	goto T373;
T373:;
	if((V157!= VV[24]))goto T380;
	{object V171;
	register object V172;
	if(type_of((V154))==t_cons){
	goto T382;}
	V171= Cnil;
	goto T381;
	goto T382;
T382:;
	V171= car((V154));
	goto T381;
T381:;
	V172= structure_ref((V155),VV[0],4);
	{object V173= (V171);
	if((V173!= VV[86]))goto T386;
	princ_str("\n	ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str("alloc,",VV[34]);
	base[0]= caddr((V154));
	base[1]= cadddr((V154));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk87)();
	vs_top=sup;
	goto T385;
	goto T386;
T386:;
	if((V173!= VV[88]))goto T395;
	princ_str("\n	ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))(caddr((V154))));
	goto T385;
	goto T395;
T395:;
	if((V173!= VV[0]))goto T402;
	V175= structure_ref(cadr((V154)),VV[0],1);
	{object V174= /* INLINE-ARGS */V175;
	if((V174!= VV[24]))goto T403;
	princ_str("SETQ_II(V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str("alloc,V",VV[34]);
	V176= structure_ref(cadr((V154)),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V176));
	goto T385;
	goto T403;
T403:;
	if((V174!= VV[23]))goto T410;
	princ_str("ISETQ_FIX(V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str("alloc,V",VV[34]);
	V177= structure_ref(cadr((V154)),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V177));
	goto T385;
	goto T410;
T410:;
	princ_str("SETQ_IO(V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))((V154)));
	goto T385;}
	goto T402;
T402:;
	if((V173!= VV[54]))goto T423;
	princ_str("SETQ_IO(V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str("alloc,",VV[34]);
	(void)((*(LnkLI77))((V154)));
	goto T385;
	goto T423;
T423:;
	bds_bind(VV[39],small_fixnum(0));
	bds_bind(VV[40],symbol_value(VV[40]));
	base[2]= VV[41];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	princ_str("\n	SETQ_II(V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V172)));
	princ_str("alloc,",VV[34]);
	base[2]= (V154);
	base[3]= make_cons(VV[42],(V155));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	princ_str(");",VV[34]);
	V178= (*(LnkLI91))();
	bds_unwind1;
	bds_unwind1;
	{object V179 = Cnil;
	VMR13(V179)}}
	goto T385;
T385:;
	princ_str(");",VV[34]);
	{object V180 = Cnil;
	VMR13(V180)}}
	goto T380;
T380:;
	princ_str("\n	V",VV[34]);
	V181= structure_ref((V155),VV[0],4);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V181));
	princ_str("= ",VV[34]);
	V183= structure_ref((V155),VV[0],1);
	{object V182= /* INLINE-ARGS */V183;
	if((V182!= VV[23]))goto T450;
	base[0]= (V154);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T449;
	goto T450;
T450:;
	if((V182!= VV[25]))goto T452;
	base[0]= (V154);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T449;
	goto T452;
T452:;
	if((V182!= VV[26]))goto T454;
	base[0]= (V154);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	goto T449;
	goto T454;
T454:;
	if((V182!= VV[27]))goto T456;
	base[0]= (V154);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	goto T449;
	goto T456;
T456:;
	if((V182!= VV[7]))goto T458;
	base[0]= (V154);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk96)();
	vs_top=sup;
	goto T449;
	goto T458;
T458:;
	(void)((*(LnkLI85))());}
	goto T449;
T449:;
	princ_char(59,VV[34]);
	{object V184 = Cnil;
	VMR13(V184)}}
	goto T333;
T333:;
	{object V185 = Cnil;
	VMR13(V185)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SCH-GLOBAL	*/

static object LI14(V187)

register object V187;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V188;
	register object V189;
	V188= symbol_value(VV[18]);
	V189= car((V188));
	goto T464;
T464:;
	if(!(endp_prop((V188)))){
	goto T465;}
	{object V190 = Cnil;
	VMR14(V190)}
	goto T465;
T465:;
	V191= structure_ref((V189),VV[0],0);
	if(!((/* INLINE-ARGS */V191)==((V187)))){
	goto T469;}
	{object V192 = (V189);
	VMR14(V192)}
	goto T469;
T469:;
	V188= cdr((V188));
	V189= car((V188));
	goto T464;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ADD-GLOBALS	*/

static object LI15(V194)

object V194;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V195;
	register object V196;
	V195= (V194);
	V196= car((V195));
	goto T480;
T480:;
	if(!(endp_prop((V195)))){
	goto T481;}
	{object V197 = Cnil;
	VMR15(V197)}
	goto T481;
T481:;
	{register object V198;
	V199= (*(LnkLI68))((V196));
	{register object V201;
	V201= get((V196),VV[5],Cnil);
	if(((V201))==Cnil){
	goto T490;}
	V200= (V201);
	goto T487;
	goto T490;
T490:;
	V200= Ct;}
	goto T487;
T487:;
	V198= (VFUN_NARGS=8,(*(LnkLI66))(VV[1],(V196),VV[14],VV[15],VV[16],/* INLINE-ARGS */V199,VV[17],V200));
	setq(VV[13],make_cons((V198),symbol_value(VV[13])));}
	V195= cdr((V195));
	V196= car((V195));
	goto T480;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1SETQ	*/

static object LI16(V203)

register object V203;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(!(endp_prop((V203)))){
	goto T499;}
	{object V204 = (*(LnkLI97))();
	VMR16(V204)}
	goto T499;
T499:;
	if(!(endp_prop(cdr((V203))))){
	goto T502;}
	{object V205 = (*(LnkLI98))(VV[43],small_fixnum(2),small_fixnum(1));
	VMR16(V205)}
	goto T502;
T502:;
	if(!(endp_prop(cddr((V203))))){
	goto T505;}
	{object V206 = (*(LnkLI99))(car((V203)),cadr((V203)));
	VMR16(V206)}
	goto T505;
T505:;
	{register object V207;
	register object V208;
	V207= (V203);
	V208= Cnil;
	goto T508;
T508:;
	if(!(endp_prop((V207)))){
	goto T509;}
	V209= reverse((V208));
	V210= make_cons(VV[44],/* INLINE-ARGS */V209);
	{object V211 = (*(LnkLI100))(/* INLINE-ARGS */V210);
	VMR16(V211)}
	goto T509;
T509:;
	if(!(endp_prop(cdr((V207))))){
	goto T513;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[45],car((V207)))));
	goto T513;
T513:;
	{register object V212;
	V212= list(3,VV[43],car((V207)),cadr((V207)));
	V208= make_cons((V212),(V208));}
	V207= cddr((V207));
	goto T508;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1SETQ1	*/

static object LI17(V215,V216)

register object V215;object V216;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{register object V217;
	register object V218;
	register object V219;
	register object V220;
	V217= (VFUN_NARGS=0,(*(LnkLI71))());
	V218= Cnil;
	V219= Cnil;
	V220= Cnil;
	if(type_of((V215))==t_symbol){
	goto T526;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[46],(V215))));
	goto T526;
T526:;
	base[1]= (V215);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T529;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[47],(V215))));
	goto T529;
T529:;
	V220= (*(LnkLI72))((V215));
	{object V221;
	object V223;
	V221= car((V220));
	V224= structure_ref(V217,VV[12],0);
	V223= make_cons((V221),/* INLINE-ARGS */V224);
	(void)(structure_set(V217,VV[12],0,(V223)));}
	V219= (*(LnkLI100))((V216));
	(void)((*(LnkLI101))((V217),cadr((V219))));
	V225= structure_ref(car((V220)),VV[0],5);
	V226= structure_ref(cadr((V219)),VV[12],2);
	V218= (*(LnkLI102))(/* INLINE-ARGS */V225,/* INLINE-ARGS */V226);
	if(((V218))!=Cnil){
	goto T543;}
	(void)((VFUN_NARGS=3,(*(LnkLI70))(VV[48],(V215),(V216))));
	goto T543;
T543:;
	V227= structure_ref(cadr((V219)),VV[12],2);
	if(((V218))==(/* INLINE-ARGS */V227)){
	goto T546;}
	{object V228;
	base[1]= cadr((V219));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk103)();
	vs_top=sup;
	V228= vs_base[0];
	(void)(structure_set((V228),VV[12],2,(V218)));
	V219= listA(3,car((V219)),(V228),cddr((V219)));}
	goto T546;
T546:;
	(void)(structure_set((V217),VV[12],2,(V218)));
	{object V229 = list(4,VV[43],(V217),(V220),(V219));
	VMR17(V229)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2SETQ	*/

static object LI18(V232,V233)

object V232;object V233;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	base[0]= make_cons(VV[0],(V232));
	bds_bind(VV[49],base[0]);
	V234= (*(LnkLI104))((V233));
	bds_unwind1;
	{object V235= car((V233));
	if((V235!= VV[105]))goto T556;
	{object V236 = (*(LnkLI106))(caddr((V233)));
	VMR18(V236)}
	goto T556;
T556:;
	V237= make_cons(VV[0],(V232));
	{object V238 = (VFUN_NARGS=1,(*(LnkLI76))(/* INLINE-ARGS */V237));
	VMR18(V238)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGV	*/

static object LI19(V240)

register object V240;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V241;
	object V242;
	register object V243;
	V241= Cnil;
	V242= Cnil;
	V243= (VFUN_NARGS=0,(*(LnkLI71))());
	if(endp_prop((V240))){
	goto T561;}
	if(!(endp_prop(cdr((V240))))){
	goto T560;}
	goto T561;
T561:;
	V244 = make_fixnum((long)length((V240)));
	(void)((*(LnkLI98))(VV[50],small_fixnum(2),V244));
	goto T560;
T560:;
	V241= (*(LnkLI107))(car((V240)),(V243));
	V242= (*(LnkLI107))(cadr((V240)),(V243));
	{object V245 = list(5,VV[50],(V243),(V241),(V242),(*(LnkLI108))(cddr((V240)),(V243)));
	VMR19(V245)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2PROGV	*/

static object LI20(V249,V250,V251)

object V249;object V250;object V251;
{	 VMB20 VMS20 VMV20
	bds_check;
	goto TTL;
TTL:;
	{object V252;
	setq(VV[51],number_plus(symbol_value(VV[51]),small_fixnum(1)));
	V252= symbol_value(VV[51]);
	bds_bind(VV[52],symbol_value(VV[52]));
	princ_str("\n	{object symbols,values;",VV[34]);
	princ_str("\n	bds_ptr V",VV[34]);
	(void)((*(LnkLI77))((V252)));
	princ_str("=bds_top;",VV[34]);
	(VV[52]->s.s_dbind)= make_cons(V252,(VV[52]->s.s_dbind));
	bds_bind(VV[53],symbol_value(VV[53]));
	base[3]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[3]);
	(void)((*(LnkLI104))((V249)));
	princ_str("\n	symbols= ",VV[34]);
	(void)((*(LnkLI77))((VV[49]->s.s_dbind)));
	princ_char(59,VV[34]);
	bds_unwind1;
	base[3]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[3]);
	(void)((*(LnkLI104))((V250)));
	princ_str("\n	values= ",VV[34]);
	(void)((*(LnkLI77))((VV[49]->s.s_dbind)));
	princ_char(59,VV[34]);
	bds_unwind1;
	princ_str("\n	while(!endp(symbols)){",VV[34]);
	if((symbol_value(VV[37]))==Cnil){
	goto T594;}
	princ_str("\n	if(type_of(MMcar(symbols))!=t_symbol)",VV[34]);
	princ_str("\n	FEinvalid_variable(\"~s is not a symbol.\",MMcar(symbols));",VV[34]);
	goto T594;
T594:;
	princ_str("\n	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);",VV[34]);
	princ_str("\n	else{bds_bind(MMcar(symbols),MMcar(values));",VV[34]);
	princ_str("\n	values=MMcdr(values);}",VV[34]);
	princ_str("\n	symbols=MMcdr(symbols);}",VV[34]);
	bds_unwind1;
	base[2]= (V251);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk110)();
	vs_top=sup;
	princ_char(125,VV[34]);
	{object V254 = Cnil;
	bds_unwind1;
	VMR20(V254)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PSETQ	*/

static object LI21(V256)

object V256;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V257;
	register object V258;
	object V259;
	V257= Cnil;
	V258= Cnil;
	V259= (VFUN_NARGS=2,(*(LnkLI71))(VV[17],VV[55]));
	{register object V260;
	V260= (V256);
	goto T615;
T615:;
	if(!(endp_prop((V260)))){
	goto T616;}
	goto T613;
	goto T616;
T616:;
	if(type_of(car((V260)))==t_symbol){
	goto T620;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[56],car((V260)))));
	goto T620;
T620:;
	base[1]= car((V260));
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T623;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[57],car((V260)))));
	goto T623;
T623:;
	if(!(endp_prop(cdr((V260))))){
	goto T627;}
	(void)((VFUN_NARGS=2,(*(LnkLI67))(VV[58],car((V260)))));
	goto T627;
T627:;
	{register object V261;
	register object V262;
	register object V263;
	V261= (*(LnkLI72))(car((V260)));
	V262= (*(LnkLI100))(cadr((V260)));
	V264= structure_ref(car((V261)),VV[0],5);
	V265= structure_ref(cadr((V262)),VV[12],2);
	V263= (*(LnkLI102))(/* INLINE-ARGS */V264,/* INLINE-ARGS */V265);
	V266= structure_ref(cadr((V262)),VV[12],2);
	if(equal((V263),/* INLINE-ARGS */V266)){
	goto T634;}
	{register object V267;
	base[4]= cadr((V262));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk103)();
	vs_top=sup;
	V267= vs_base[0];
	(void)(structure_set((V267),VV[12],2,(V263)));
	V262= listA(3,car((V262)),(V267),cddr((V262)));}
	goto T634;
T634:;
	V257= make_cons(V261,(V257));
	V258= make_cons(V262,(V258));
	{object V270;
	register object V271;
	object V272;
	V270= car((V261));
	V271= (V259);
	V273= structure_ref((V271),VV[12],0);
	V272= make_cons((V270),/* INLINE-ARGS */V273);
	(void)(structure_set((V271),VV[12],0,(V272)));}
	(void)((*(LnkLI101))((V259),cadar((V258))));}
	V260= cddr((V260));
	goto T615;}
	goto T613;
T613:;
	V274= reverse((V257));
	{object V275 = list(4,VV[59],(V259),/* INLINE-ARGS */V274,reverse((V258)));
	VMR21(V275)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2PSETQ	*/

static object LI22(V278,V279)

object V278;register object V279;
{	 VMB22 VMS22 VMV22
	bds_check;
	goto TTL;
TTL:;
	{register object V280;
	object V281;
	bds_bind(VV[53],symbol_value(VV[53]));
	V280= Cnil;
	V281= small_fixnum(0);
	{register object V282;
	register object V283;
	V282= (V278);
	V283= car((V282));
	goto T658;
T658:;
	if(!(endp_prop((V282)))){
	goto T659;}
	goto T654;
	goto T659;
T659:;
	if(((*(LnkLI111))(car((V283)),cdr((V279))))!=Cnil){
	goto T664;}
	if(((*(LnkLI112))(car((V283)),cdr((V279))))==Cnil){
	goto T665;}
	goto T664;
T664:;
	{object V284= caar((V279));
	if((V284!= VV[105]))goto T669;
	{object V285;
	V285= make_cons((V283),caddar((V279)));
	V280= make_cons((V285),(V280));
	goto T663;}
	goto T669;
T669:;
	V287= structure_ref(car((V283)),VV[0],1);
	{register object x= /* INLINE-ARGS */V287,V286= VV[60];
	while(!endp(V286))
	if(eql(x,V286->c.c_car)){
	goto T674;
	}else V286=V286->c.c_cdr;
	goto T673;}
	goto T674;
T674:;
	{object V288;
	object V289;
	object V290;
	V288= structure_ref(car((V283)),VV[0],1);
	setq(VV[51],number_plus(symbol_value(VV[51]),small_fixnum(1)));
	V289= symbol_value(VV[51]);
	V291= (VFUN_NARGS=4,(*(LnkLI66))(VV[14],(V288),VV[16],(V289)));
	V290= list(3,VV[0],/* INLINE-ARGS */V291,Cnil);
	princ_str("\n	{",VV[34]);
	(void)((*(LnkLI77))(symbol_value(VV[61])));
	V292= (*(LnkLI113))((V288));
	(void)((*(LnkLI77))(/* INLINE-ARGS */V292));
	princ_char(86,VV[34]);
	(void)((*(LnkLI77))((V289)));
	princ_char(59,VV[34]);
	V281= number_plus((V281),small_fixnum(1));
	bds_bind(VV[49],(V290));
	V293= (*(LnkLI104))(car((V279)));
	bds_unwind1;
	{object V294;
	V294= make_cons((V283),(V290));
	V280= make_cons((V294),(V280));
	goto T663;}}
	goto T673;
T673:;
	base[2]= list(2,VV[54],(*(LnkLI109))());
	bds_bind(VV[49],base[2]);
	(void)((*(LnkLI104))(car((V279))));
	{object V295;
	V295= make_cons((V283),(VV[49]->s.s_dbind));
	V280= make_cons((V295),(V280));
	bds_unwind1;
	goto T663;}}
	goto T665;
T665:;
	base[2]= make_cons(VV[0],(V283));
	bds_bind(VV[49],base[2]);
	V296= (*(LnkLI104))(car((V279)));
	bds_unwind1;
	goto T663;
T663:;
	{object V297;
	V297= car((V279));
	V279= cdr((V279));}
	V282= cdr((V282));
	V283= car((V282));
	goto T658;}
	goto T654;
T654:;
	{register object V298;
	register object V299;
	V298= (V280);
	V299= car((V298));
	goto T709;
T709:;
	if(!(endp_prop((V298)))){
	goto T710;}
	goto T705;
	goto T710;
T710:;
	(void)((*(LnkLI42))(cdr((V299)),caar((V299)),cadar((V299))));
	V298= cdr((V298));
	V299= car((V298));
	goto T709;}
	goto T705;
T705:;
	{object V301;
	V301= small_fixnum(0);
	goto T723;
T723:;
	if(!(number_compare((V301),V281)>=0)){
	goto T724;}
	goto T720;
	goto T724;
T724:;
	princ_char(125,VV[34]);
	V301= one_plus((V301));
	goto T723;}
	goto T720;
T720:;
	{object V302 = (VFUN_NARGS=1,(*(LnkLI76))(Cnil));
	bds_unwind1;
	VMR22(V302)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WT-VAR-DECL	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{register object V303;
	check_arg(1);
	V303=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V303);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T734;}
	{object V304;
	V304= structure_ref((V303),VV[0],4);
	V305= structure_ref((V303),VV[0],1);
	if(!((/* INLINE-ARGS */V305)==(VV[24]))){
	goto T739;}
	princ_str("IDECL(",VV[34]);
	goto T739;
T739:;
	(void)((*(LnkLI77))(symbol_value(VV[61])));
	V306= (*(LnkLI69))((V303));
	(void)((*(LnkLI77))(/* INLINE-ARGS */V306));
	V307= structure_ref((V303),VV[0],1);
	V308= (*(LnkLI113))(/* INLINE-ARGS */V307);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V308));
	princ_char(86,VV[34]);
	(void)((*(LnkLI77))((V304)));
	V309= structure_ref((V303),VV[0],1);
	if(!(eql(/* INLINE-ARGS */V309,VV[24]))){
	goto T749;}
	princ_str(",V",VV[34]);
	(void)((*(LnkLI77))((V304)));
	princ_str("space,V",VV[34]);
	(void)((*(LnkLI77))((V304)));
	princ_str("alloc)",VV[34]);
	goto T749;
T749:;
	princ_char(59,VV[34]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T734;
T734:;
	base[1]= (*(LnkLI79))();
	vs_top=(vs_base=base+1)+1;
	return;
	}
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
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* WT-INTEGER-LOC */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* SAVE-AVMA */
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

