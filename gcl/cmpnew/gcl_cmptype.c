
#include "cmpinclude.h"
#include "gcl_cmptype.h"
void init_gcl_cmptype(){do_init(VV);}
/*	local entry for function OBJECT-TYPE	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V3;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V3= vs_base[0];
	{object V4= (V3);
	if((V4!= VV[10])
	&& (V4!= VV[12])
	&& (V4!= VV[3]))goto T3;
	{object V5 = (V3);
	VMR1(V5)}
	goto T3;
T3:;
	if((V4!= VV[38])
	&& (V4!= VV[51])
	&& (V4!= VV[0]))goto T4;
	{object V6 = VV[0];
	VMR1(V6)}
	goto T4;
T4:;
	if((V4!= VV[5])
	&& (V4!= VV[6]))goto T5;
	{object V7 = (V3);
	VMR1(V7)}
	goto T5;
T5:;
	if((V4!= VV[1]))goto T6;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V8= vs_base[0];
	{object V9 = list(2,VV[1],V8);
	VMR1(V9)}
	goto T6;
T6:;
	if((V4!= VV[2]))goto T9;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V10= vs_base[0];
	{object V11 = list(2,VV[2],V10);
	VMR1(V11)}
	goto T9;
T9:;
	{object V12 = Ct;
	VMR1(V12)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TYPE-FILTER	*/

static object LI2(V14)

object V14;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V15= (V14);
	if((V15!= VV[10])
	&& (V15!= VV[0])
	&& (V15!= VV[12])
	&& (V15!= VV[3]))goto T12;
	{object V16 = (V14);
	VMR2(V16)}
	goto T12;
T12:;
	if((V15!= VV[52]))goto T13;
	{object V17 = VV[3];
	VMR2(V17)}
	goto T13;
T13:;
	if((V15!= VV[4]))goto T14;
	{object V18 = VV[4];
	VMR2(V18)}
	goto T14;
T14:;
	if((V15!= VV[53]))goto T15;
	{object V19 = VV[3];
	VMR2(V19)}
	goto T15;
T15:;
	if((V15!= VV[54])
	&& (V15!= VV[5]))goto T16;
	{object V20 = VV[5];
	VMR2(V20)}
	goto T16;
T16:;
	if((V15!= VV[55])
	&& (V15!= VV[6]))goto T17;
	{object V21 = VV[6];
	VMR2(V21)}
	goto T17;
T17:;
	if((V15!= Cnil)
	&& (V15!= Ct))goto T18;
	{object V22 = Ct;
	VMR2(V22)}
	goto T18;
T18:;
	{register object V23;
	register object V24;
	V23= (*(LnkLI56))((V14));
	V24= Cnil;
	{object V25= CMPcar((V23));
	if((V25!= VV[57])
	&& (V25!= VV[2]))goto T20;
	if((CMPcdr((V23)))==Cnil){
	goto T21;}
	if(!((VV[7])==(CMPcadr((V23))))){
	goto T28;}
	V24= Cnil;
	goto T26;
	goto T28;
T28:;
	{object V26;
	V26= (*(LnkLI58))(CMPcadr((V23)));
	if(((V26))==Cnil){
	goto T32;}
	V24= (V26);
	goto T26;
	goto T32;
T32:;
	V24= Ct;}
	goto T26;
T26:;
	if(((V24))!=Cnil){
	goto T22;}
	goto T21;
T21:;
	{object V27 = Ct;
	VMR2(V27)}
	goto T22;
T22:;
	if((CMPcddr((V23)))==Cnil){
	goto T35;}
	if((CMPcaddr((V23)))==(VV[7])){
	goto T35;}
	if(eql(CMPcaddr((V23)),small_fixnum(1))){
	goto T34;}
	if(!(type_of(CMPcaddr((V23)))==t_cons)){
	goto T35;}
	if(!(((long)length(CMPcaddr((V23))))==(1))){
	goto T35;}
	goto T34;
T34:;
	{object V28= (V24);
	if((V28!= VV[38]))goto T45;
	{object V29 = VV[5];
	VMR2(V29)}
	goto T45;
T45:;
	if((V28!= VV[39]))goto T46;
	{object V30 = VV[6];
	VMR2(V30)}
	goto T46;
T46:;
	{object V31 = list(2,VV[1],(V24));
	VMR2(V31)}}
	goto T35;
T35:;
	{object V32 = list(2,VV[2],(V24));
	VMR2(V32)}
	goto T20;
T20:;
	if((V25!= VV[11]))goto T47;
	V33= CMPcdr((V23));
	V34= list(2,VV[8],VV[9]);
	if(((*(LnkLI59))(/* INLINE-ARGS */V33,/* INLINE-ARGS */V34))==Cnil){
	goto T49;}
	{object V35 = VV[10];
	VMR2(V35)}
	goto T49;
T49:;
	{object V36 = VV[11];
	VMR2(V36)}
	goto T47;
T47:;
	if((V25!= VV[12]))goto T51;
	{object V37 = VV[12];
	VMR2(V37)}
	goto T51;
T51:;
	if((V25!= VV[3])
	&& (V25!= VV[53])
	&& (V25!= VV[52]))goto T52;
	{object V38 = VV[3];
	VMR2(V38)}
	goto T52;
T52:;
	if((V25!= VV[13]))goto T53;
	{object V39 = VV[13];
	VMR2(V39)}
	goto T53;
T53:;
	base[0]= (V23);
	base[1]= VV[10];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	{object V40 = VV[10];
	VMR2(V40)}
	goto T55;
T55:;
	base[0]= (V23);
	base[1]= VV[11];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T60;}
	{object V41 = VV[11];
	VMR2(V41)}
	goto T60;
T60:;
	base[0]= (V23);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T65;}
	{object V42 = VV[0];
	VMR2(V42)}
	goto T65;
T65:;
	base[0]= (V23);
	base[1]= VV[12];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T70;}
	{object V43 = VV[12];
	VMR2(V43)}
	goto T70;
T70:;
	base[0]= (V23);
	base[1]= VV[3];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T75;}
	{object V44 = VV[3];
	VMR2(V44)}
	goto T75;
T75:;
	base[0]= (V23);
	base[1]= VV[14];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	{object V45 = VV[15];
	VMR2(V45)}
	goto T80;
T80:;
	base[0]= (V23);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T85;}
	{object V46 = VV[5];
	VMR2(V46)}
	goto T85;
T85:;
	base[0]= (V23);
	base[1]= VV[6];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T90;}
	{object V47 = VV[6];
	VMR2(V47)}
	goto T90;
T90:;
	base[0]= (V23);
	base[1]= VV[16];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T95;}
	{object V48 = VV[17];
	VMR2(V48)}
	goto T95;
T95:;
	base[0]= (V23);
	base[1]= VV[18];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T100;}
	{object V49 = VV[19];
	VMR2(V49)}
	goto T100;
T100:;
	base[0]= (V23);
	base[1]= VV[20];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T105;}
	{object V50 = VV[21];
	VMR2(V50)}
	goto T105;
T105:;
	base[0]= (V23);
	base[1]= VV[22];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T110;}
	{object V51 = VV[23];
	VMR2(V51)}
	goto T110;
T110:;
	base[0]= (V23);
	base[1]= VV[24];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T115;}
	{object V52 = VV[25];
	VMR2(V52)}
	goto T115;
T115:;
	base[0]= (V23);
	base[1]= VV[26];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T120;}
	{object V53 = VV[27];
	VMR2(V53)}
	goto T120;
T120:;
	base[0]= (V23);
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T125;}
	{object V54 = VV[29];
	VMR2(V54)}
	goto T125;
T125:;
	base[0]= (V23);
	base[1]= VV[30];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T130;}
	{object V55 = VV[31];
	VMR2(V55)}
	goto T130;
T130:;
	base[0]= (V23);
	base[1]= VV[32];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T135;}
	{object V56 = VV[33];
	VMR2(V56)}
	goto T135;
T135:;
	if(!((CMPcar((V23)))==(VV[34]))){
	goto T140;}
	if((CMPcddr((V23)))!=Cnil){
	goto T143;}
	{object V57 = list(2,VV[34],(*(LnkLI36))(CMPcadr((V23))));
	VMR2(V57)}
	goto T143;
T143:;
	{object V58 = Ct;
	VMR2(V58)}
	goto T140;
T140:;
	{object V59;
	if((CMPcar((V23)))==(VV[35])){
	goto T146;}
	V59= Cnil;
	goto T145;
	goto T146;
T146:;
	if(type_of(CMPcadr((V23)))==t_symbol){
	goto T148;}
	V59= Cnil;
	goto T145;
	goto T148;
T148:;
	{object V60 =(CMPcadr((V23)))->s.s_plist;
	 object ind= VV[36];
	while(V60!=Cnil){
	if(V60->c.c_car==ind){
	V59= (V60->c.c_cdr->c.c_car);
	goto T145;
	}else V60=V60->c.c_cdr->c.c_cdr;}
	V59= Cnil;}
	goto T145;
T145:;
	if(((V59))==Cnil){
	goto T151;}
	{object V61 = (V59);
	VMR2(V61)}
	goto T151;
T151:;
	{object V62 = Ct;
	VMR2(V62)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TYPE-AND	*/

static object LI3(V65,V66)

register object V65;register object V66;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(equal((V65),(V66)))){
	goto T154;}
	{object V67 = (V65);
	VMR3(V67)}
	goto T154;
T154:;
	if(!(((V65))==(Ct))){
	goto T157;}
	{object V68 = (V66);
	VMR3(V68)}
	goto T157;
T157:;
	if(!(((V65))==(VV[7]))){
	goto T160;}
	{object V69 = (V66);
	VMR3(V69)}
	goto T160;
T160:;
	if(!(((V65))==(VV[37]))){
	goto T163;}
	{object V70 = (V66);
	VMR3(V70)}
	goto T163;
T163:;
	if(!(((V66))==(VV[37]))){
	goto T166;}
	{object V71 = (V65);
	VMR3(V71)}
	goto T166;
T166:;
	if(!(((V66))==(Ct))){
	goto T169;}
	{object V72 = (V65);
	VMR3(V72)}
	goto T169;
T169:;
	if(!(((V66))==(VV[7]))){
	goto T172;}
	{object V73 = (V65);
	VMR3(V73)}
	goto T172;
T172:;
	if(!(type_of((V66))==t_cons)){
	goto T175;}
	if(!((CMPcar((V66)))==(VV[34]))){
	goto T175;}
	V66= CMPcadr((V66));
	goto TTL;
	goto T175;
T175:;
	if(!(type_of((V65))==t_cons)){
	goto T183;}
	{object V74= CMPcar((V65));
	if((V74!= VV[2]))goto T185;
	{object V75= CMPcadr((V65));
	if((V75!= VV[38]))goto T186;
	if(!(((V66))==(VV[5]))){
	goto T188;}
	{object V76 = (V66);
	VMR3(V76)}
	goto T188;
T188:;
	{object V77 = Cnil;
	VMR3(V77)}
	goto T186;
T186:;
	if((V75!= VV[39]))goto T190;
	if(!(((V66))==(VV[6]))){
	goto T192;}
	{object V78 = (V66);
	VMR3(V78)}
	goto T192;
T192:;
	{object V79 = Cnil;
	VMR3(V79)}
	goto T190;
T190:;
	if(!(type_of((V66))==t_cons)){
	goto T195;}
	if(!((CMPcar((V66)))==(VV[1]))){
	goto T195;}
	if(!((CMPcadr((V65)))==(CMPcadr((V66))))){
	goto T195;}
	{object V80 = (V66);
	VMR3(V80)}
	goto T195;
T195:;
	{object V81 = Cnil;
	VMR3(V81)}}
	goto T185;
T185:;
	if((V74!= VV[1]))goto T201;
	if(!(type_of((V66))==t_cons)){
	goto T203;}
	if(!((CMPcar((V66)))==(VV[2]))){
	goto T203;}
	if(!((CMPcadr((V65)))==(CMPcadr((V66))))){
	goto T203;}
	{object V82 = (V65);
	VMR3(V82)}
	goto T203;
T203:;
	{object V83 = Cnil;
	VMR3(V83)}
	goto T201;
T201:;
	if((V74!= VV[34]))goto T209;
	V65= CMPcadr((V65));
	goto TTL;
	goto T209;
T209:;
	{object V84 = Cnil;
	VMR3(V84)}}
	goto T183;
T183:;
	{object V85= (V65);
	if((V85!= VV[5]))goto T213;
	if(!(type_of((V66))==t_cons)){
	goto T215;}
	if(!((CMPcar((V66)))==(VV[2]))){
	goto T215;}
	if(!((CMPcadr((V66)))==(VV[38]))){
	goto T215;}
	{object V86 = (V65);
	VMR3(V86)}
	goto T215;
T215:;
	{object V87 = Cnil;
	VMR3(V87)}
	goto T213;
T213:;
	if((V85!= VV[6]))goto T221;
	if(!(type_of((V66))==t_cons)){
	goto T223;}
	if(!((CMPcar((V66)))==(VV[2]))){
	goto T223;}
	if(!((CMPcadr((V66)))==(VV[39]))){
	goto T223;}
	{object V88 = (V65);
	VMR3(V88)}
	goto T223;
T223:;
	{object V89 = Cnil;
	VMR3(V89)}
	goto T221;
T221:;
	if((V85!= VV[61]))goto T229;
	{register object x= (V66),V90= VV[40];
	while(V90!=Cnil)
	if(eql(x,V90->c.c_car)){
	goto T232;
	}else V90=V90->c.c_cdr;
	goto T231;}
	goto T232;
T232:;
	{object V91 = (V66);
	VMR3(V91)}
	goto T231;
T231:;
	{object V92 = Cnil;
	VMR3(V92)}
	goto T229;
T229:;
	if((V85!= VV[62]))goto T233;
	{register object x= (V66),V93= VV[41];
	while(V93!=Cnil)
	if(eql(x,V93->c.c_car)){
	goto T236;
	}else V93=V93->c.c_cdr;
	goto T235;}
	goto T236;
T236:;
	{object V94 = (V66);
	VMR3(V94)}
	goto T235;
T235:;
	{object V95 = Cnil;
	VMR3(V95)}
	goto T233;
T233:;
	if((V85!= VV[3])
	&& (V85!= VV[12]))goto T237;
	{register object x= (V66),V96= VV[42];
	while(V96!=Cnil)
	if(eql(x,V96->c.c_car)){
	goto T240;
	}else V96=V96->c.c_cdr;
	goto T239;}
	goto T240;
T240:;
	{object V97 = (V65);
	VMR3(V97)}
	goto T239;
T239:;
	{object V98 = Cnil;
	VMR3(V98)}
	goto T237;
T237:;
	if((V85!= VV[63])
	&& (V85!= VV[64])
	&& (V85!= VV[65]))goto T241;
	if(!(((V66))==(VV[10]))){
	goto T243;}
	{object V99 = (V65);
	VMR3(V99)}
	goto T243;
T243:;
	{object V100 = Cnil;
	VMR3(V100)}
	goto T241;
T241:;
	if((V85!= VV[66]))goto T245;
	base[0]= (V65);
	base[1]= (V66);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T247;}
	{object V101 = (V65);
	VMR3(V101)}
	goto T247;
T247:;
	{object V102 = Cnil;
	VMR3(V102)}
	goto T245;
T245:;
	if((V85!= VV[11]))goto T251;
	{object V103= (V66);
	if((V103!= VV[10]))goto T252;
	{object V104 = (V66);
	VMR3(V104)}
	goto T252;
T252:;
	{object V105 = Cnil;
	VMR3(V105)}}
	goto T251;
T251:;
	if((V85!= VV[10]))goto T253;
	{object V106= (V66);
	if((V106!= VV[11])
	&& (V106!= VV[61]))goto T254;
	{object V107 = VV[10];
	VMR3(V107)}
	goto T254;
T254:;
	if((V106!= VV[63])
	&& (V106!= VV[64])
	&& (V106!= VV[65])
	&& (V106!= VV[39]))goto T255;
	{object V108 = (V66);
	VMR3(V108)}
	goto T255;
T255:;
	if((V106!= VV[66]))goto T256;
	base[0]= (V66);
	base[1]= (V65);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T258;}
	{object V109 = (V66);
	VMR3(V109)}
	goto T258;
T258:;
	{object V110 = Cnil;
	VMR3(V110)}
	goto T256;
T256:;
	{object V111 = Cnil;
	VMR3(V111)}}
	goto T253;
T253:;
	{object V112 = Cnil;
	VMR3(V112)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TYPE>=	*/

static object LI4(V115,V116)

object V115;object V116;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	V117= (*(LnkLI67))((V115),(V116));
	{object V118 = (equal(/* INLINE-ARGS */V117,(V116))?Ct:Cnil);
	VMR4(V118)}
	return Cnil;
}
/*	local entry for function RESET-INFO-TYPE	*/

static object LI5(V120)

object V120;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if((STREF(object,(V120),8))==Cnil){
	goto T263;}
	{object V121;
	base[0]= (V120);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V121= vs_base[0];
	V122= Ct;
	STSET(object,(V121),8, Ct);
	(void)(Ct);
	{object V123 = (V121);
	VMR5(V123)}}
	goto T263;
T263:;
	{object V124 = (V120);
	VMR5(V124)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function AND-FORM-TYPE	*/

static object LI6(V128,V129,V130)

object V128;register object V129;object V130;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V131;
	V131= Cnil;
	V131= (*(LnkLI67))((V128),STREF(object,CMPcadr((V129)),8));
	if(((V131))!=Cnil){
	goto T271;}
	(void)((VFUN_NARGS=3,(*(LnkLI69))(VV[44],(V130),(V128))));
	goto T271;
T271:;
	if(!(((V131))==(STREF(object,CMPcadr((V129)),8)))){
	goto T275;}
	{object V132 = (V129);
	VMR6(V132)}
	goto T275;
T275:;
	{object V133;
	base[0]= CMPcadr((V129));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V133= vs_base[0];
	V134= Ct;
	STSET(object,(V133),8, (V131));
	(void)((V131));
	{object V135 = listA(3,CMPcar((V129)),(V133),CMPcddr((V129)));
	VMR6(V135)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-FORM-TYPE	*/

static object LI7(V139,V140,V141)

object V139;object V140;object V141;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(((*(LnkLI67))((V139),STREF(object,CMPcadr((V140)),8)))!=Cnil){
	goto T281;}
	{object V142 = (VFUN_NARGS=3,(*(LnkLI69))(VV[45],(V141),(V139)));
	VMR7(V142)}
	goto T281;
T281:;
	{object V143 = Cnil;
	VMR7(V143)}
	return Cnil;
}
/*	local entry for function DEFAULT-INIT	*/

static object LI8(V145)

object V145;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V146= (V145);
	if((V146!= VV[10]))goto T284;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[46])));
	goto T283;
	goto T284;
T284:;
	if((V146!= VV[0]))goto T285;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[47])));
	goto T283;
	goto T285;
T285:;
	if((V146!= VV[3]))goto T286;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[48])));
	goto T283;
	goto T286;
T286:;
	if((V146!= VV[12]))goto T287;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[49])));
	goto T283;
	goto T287;
T287:;
	if((V146!= VV[11]))goto T288;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[50])));
	goto T283;
	goto T288;
T288:;}
	goto T283;
T283:;
	{object V147 = (*(LnkLI70))();
	VMR8(V147)}
	return Cnil;
}
static object  LnkTLI70(){return call_proc0(VV[70],(void **)(void *)&LnkLI70);} /* C1NIL */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[69],(void **)(void *)&LnkLI69,first,ap);va_end(ap);return V1;} /* CMPWARN */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* COPY-INFO */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static void LnkT60(){ call_or_link(VV[60],(void **)(void *)&Lnk60);} /* SUBTYPEP */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],(void **)(void *)&LnkLI59,2,first,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

