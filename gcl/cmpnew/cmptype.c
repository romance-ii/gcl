
#include "cmpinclude.h"
#include "cmptype.h"
init_cmptype(){do_init(VV);}
/*	local entry for function OBJECT-TYPE	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
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
T3:;
	if((V4!= VV[38])
	&& (V4!= VV[51])
	&& (V4!= VV[0]))goto T4;
	{object V6 = VV[0];
	VMR1(V6)}
T4:;
	if((V4!= VV[5])
	&& (V4!= VV[6]))goto T5;
	{object V7 = (V3);
	VMR1(V7)}
T5:;
	if((V4!= VV[1]))goto T6;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V8= vs_base[0];
	{object V9 = list(2,VV[1],V8);
	VMR1(V9)}
T6:;
	if((V4!= VV[2]))goto T9;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V10= vs_base[0];
	{object V11 = list(2,VV[2],V10);
	VMR1(V11)}
T9:;
	{object V12 = Ct;
	VMR1(V12)}}}
}
/*	local entry for function TYPE-FILTER	*/

static object LI2(V14)

object V14;
{	 VMB2 VMS2 VMV2
TTL:;
	{object V15= (V14);
	if((V15!= VV[10])
	&& (V15!= VV[0])
	&& (V15!= VV[12])
	&& (V15!= VV[3]))goto T12;
	{object V16 = (V14);
	VMR2(V16)}
T12:;
	if((V15!= VV[52]))goto T13;
	{object V17 = VV[3];
	VMR2(V17)}
T13:;
	if((V15!= VV[4]))goto T14;
	{object V18 = VV[4];
	VMR2(V18)}
T14:;
	if((V15!= VV[53]))goto T15;
	{object V19 = VV[3];
	VMR2(V19)}
T15:;
	if((V15!= VV[54])
	&& (V15!= VV[5]))goto T16;
	{object V20 = VV[5];
	VMR2(V20)}
T16:;
	if((V15!= VV[55])
	&& (V15!= VV[6]))goto T17;
	{object V21 = VV[6];
	VMR2(V21)}
T17:;
	if((V15!= Cnil)
	&& (V15!= Ct))goto T18;
	{object V22 = Ct;
	VMR2(V22)}
T18:;
	{register object V23;
	register object V24;
	V23= (*(LnkLI56))((V14));
	V24= Cnil;
	{object V25= car((V23));
	if((V25!= VV[57])
	&& (V25!= VV[2]))goto T20;
	if(endp(cdr((V23)))){
	goto T21;}
	if(!((VV[7])==(cadr((V23))))){
	goto T28;}
	V24= Cnil;
	goto T26;
T28:;
	{object V26;
	V26= (*(LnkLI58))(cadr((V23)));
	if(((V26))==Cnil){
	goto T32;}
	V24= (V26);
	goto T26;
T32:;
	V24= Ct;}
T26:;
	if(((V24))!=Cnil){
	goto T22;}
T21:;
	{object V27 = Ct;
	VMR2(V27)}
T22:;
	if(endp(cddr((V23)))){
	goto T35;}
	if((caddr((V23)))==(VV[7])){
	goto T35;}
	if(eql(caddr((V23)),small_fixnum(1))){
	goto T34;}
	if(!(type_of(caddr((V23)))==t_cons)){
	goto T35;}
	if(!((length(caddr((V23))))==(1))){
	goto T35;}
T34:;
	{object V28= (V24);
	if((V28!= VV[38]))goto T45;
	{object V29 = VV[5];
	VMR2(V29)}
T45:;
	if((V28!= VV[39]))goto T46;
	{object V30 = VV[6];
	VMR2(V30)}
T46:;
	{object V31 = list(2,VV[1],(V24));
	VMR2(V31)}}
T35:;
	{object V32 = list(2,VV[2],(V24));
	VMR2(V32)}
T20:;
	if((V25!= VV[11]))goto T47;
	V33= cdr((V23));
	V34= list(2,VV[8],VV[9]);
	if(((*(LnkLI59))(/* INLINE-ARGS */V33,/* INLINE-ARGS */V34))==Cnil){
	goto T49;}
	{object V35 = VV[10];
	VMR2(V35)}
T49:;
	{object V36 = VV[11];
	VMR2(V36)}
T47:;
	if((V25!= VV[12]))goto T51;
	{object V37 = VV[12];
	VMR2(V37)}
T51:;
	if((V25!= VV[3])
	&& (V25!= VV[53])
	&& (V25!= VV[52]))goto T52;
	{object V38 = VV[3];
	VMR2(V38)}
T52:;
	if((V25!= VV[13]))goto T53;
	{object V39 = VV[13];
	VMR2(V39)}
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
T135:;
	if(!((car((V23)))==(VV[34]))){
	goto T140;}
	if((cddr((V23)))!=Cnil){
	goto T143;}
	{object V57 = list(2,VV[34],(*(LnkLI36))(cadr((V23))));
	VMR2(V57)}
T143:;
	{object V58 = Ct;
	VMR2(V58)}
T140:;
	{object V59;
	if((car((V23)))==(VV[35])){
	goto T146;}
	V59= Cnil;
	goto T145;
T146:;
	if(type_of(cadr((V23)))==t_symbol){
	goto T148;}
	V59= Cnil;
	goto T145;
T148:;
	V59= get(cadr((V23)),VV[36],Cnil);
T145:;
	if(((V59))==Cnil){
	goto T151;}
	{object V60 = (V59);
	VMR2(V60)}
T151:;
	{object V61 = Ct;
	VMR2(V61)}}}}}
}
/*	local entry for function TYPE-AND	*/

static object LI3(V64,V65)

register object V64;register object V65;
{	 VMB3 VMS3 VMV3
TTL:;
	if(!(equal((V64),(V65)))){
	goto T154;}
	{object V66 = (V64);
	VMR3(V66)}
T154:;
	if(!(((V64))==(Ct))){
	goto T157;}
	{object V67 = (V65);
	VMR3(V67)}
T157:;
	if(!(((V64))==(VV[7]))){
	goto T160;}
	{object V68 = (V65);
	VMR3(V68)}
T160:;
	if(!(((V64))==(VV[37]))){
	goto T163;}
	{object V69 = (V65);
	VMR3(V69)}
T163:;
	if(!(((V65))==(VV[37]))){
	goto T166;}
	{object V70 = (V64);
	VMR3(V70)}
T166:;
	if(!(((V65))==(Ct))){
	goto T169;}
	{object V71 = (V64);
	VMR3(V71)}
T169:;
	if(!(((V65))==(VV[7]))){
	goto T172;}
	{object V72 = (V64);
	VMR3(V72)}
T172:;
	if(!(type_of((V65))==t_cons)){
	goto T175;}
	if(!((car((V65)))==(VV[34]))){
	goto T175;}
	V65= cadr((V65));
	goto TTL;
T175:;
	if(!(type_of((V64))==t_cons)){
	goto T183;}
	{object V73= car((V64));
	if((V73!= VV[2]))goto T185;
	{object V74= cadr((V64));
	if((V74!= VV[38]))goto T186;
	if(!(((V65))==(VV[5]))){
	goto T188;}
	{object V75 = (V65);
	VMR3(V75)}
T188:;
	{object V76 = Cnil;
	VMR3(V76)}
T186:;
	if((V74!= VV[39]))goto T190;
	if(!(((V65))==(VV[6]))){
	goto T192;}
	{object V77 = (V65);
	VMR3(V77)}
T192:;
	{object V78 = Cnil;
	VMR3(V78)}
T190:;
	if(!(type_of((V65))==t_cons)){
	goto T195;}
	if(!((car((V65)))==(VV[1]))){
	goto T195;}
	if(!((cadr((V64)))==(cadr((V65))))){
	goto T195;}
	{object V79 = (V65);
	VMR3(V79)}
T195:;
	{object V80 = Cnil;
	VMR3(V80)}}
T185:;
	if((V73!= VV[1]))goto T201;
	if(!(type_of((V65))==t_cons)){
	goto T203;}
	if(!((car((V65)))==(VV[2]))){
	goto T203;}
	if(!((cadr((V64)))==(cadr((V65))))){
	goto T203;}
	{object V81 = (V64);
	VMR3(V81)}
T203:;
	{object V82 = Cnil;
	VMR3(V82)}
T201:;
	if((V73!= VV[34]))goto T209;
	V64= cadr((V64));
	goto TTL;
T209:;
	{object V83 = Cnil;
	VMR3(V83)}}
T183:;
	{object V84= (V64);
	if((V84!= VV[5]))goto T213;
	if(!(type_of((V65))==t_cons)){
	goto T215;}
	if(!((car((V65)))==(VV[2]))){
	goto T215;}
	if(!((cadr((V65)))==(VV[38]))){
	goto T215;}
	{object V85 = (V64);
	VMR3(V85)}
T215:;
	{object V86 = Cnil;
	VMR3(V86)}
T213:;
	if((V84!= VV[6]))goto T221;
	if(!(type_of((V65))==t_cons)){
	goto T223;}
	if(!((car((V65)))==(VV[2]))){
	goto T223;}
	if(!((cadr((V65)))==(VV[39]))){
	goto T223;}
	{object V87 = (V64);
	VMR3(V87)}
T223:;
	{object V88 = Cnil;
	VMR3(V88)}
T221:;
	if((V84!= VV[61]))goto T229;
	{register object x= (V65),V89= VV[40];
	while(!endp(V89))
	if(eql(x,V89->c.c_car)){
	goto T232;
	}else V89=V89->c.c_cdr;
	goto T231;}
T232:;
	{object V90 = (V65);
	VMR3(V90)}
T231:;
	{object V91 = Cnil;
	VMR3(V91)}
T229:;
	if((V84!= VV[62]))goto T233;
	{register object x= (V65),V92= VV[41];
	while(!endp(V92))
	if(eql(x,V92->c.c_car)){
	goto T236;
	}else V92=V92->c.c_cdr;
	goto T235;}
T236:;
	{object V93 = (V65);
	VMR3(V93)}
T235:;
	{object V94 = Cnil;
	VMR3(V94)}
T233:;
	if((V84!= VV[3])
	&& (V84!= VV[12]))goto T237;
	{register object x= (V65),V95= VV[42];
	while(!endp(V95))
	if(eql(x,V95->c.c_car)){
	goto T240;
	}else V95=V95->c.c_cdr;
	goto T239;}
T240:;
	{object V96 = (V64);
	VMR3(V96)}
T239:;
	{object V97 = Cnil;
	VMR3(V97)}
T237:;
	if((V84!= VV[63])
	&& (V84!= VV[64])
	&& (V84!= VV[65]))goto T241;
	if(!(((V65))==(VV[10]))){
	goto T243;}
	{object V98 = (V64);
	VMR3(V98)}
T243:;
	{object V99 = Cnil;
	VMR3(V99)}
T241:;
	if((V84!= VV[66]))goto T245;
	base[0]= (V64);
	base[1]= (V65);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T247;}
	{object V100 = (V64);
	VMR3(V100)}
T247:;
	{object V101 = Cnil;
	VMR3(V101)}
T245:;
	if((V84!= VV[11]))goto T251;
	{object V102= (V65);
	if((V102!= VV[10]))goto T252;
	{object V103 = (V65);
	VMR3(V103)}
T252:;
	{object V104 = Cnil;
	VMR3(V104)}}
T251:;
	if((V84!= VV[10]))goto T253;
	{object V105= (V65);
	if((V105!= VV[11])
	&& (V105!= VV[61]))goto T254;
	{object V106 = VV[10];
	VMR3(V106)}
T254:;
	if((V105!= VV[63])
	&& (V105!= VV[64])
	&& (V105!= VV[65])
	&& (V105!= VV[39]))goto T255;
	{object V107 = (V65);
	VMR3(V107)}
T255:;
	if((V105!= VV[66]))goto T256;
	base[0]= (V65);
	base[1]= (V64);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk60)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T258;}
	{object V108 = (V65);
	VMR3(V108)}
T258:;
	{object V109 = Cnil;
	VMR3(V109)}
T256:;
	{object V110 = Cnil;
	VMR3(V110)}}
T253:;
	{object V111 = Cnil;
	VMR3(V111)}}
}
/*	local entry for function TYPE>=	*/

static object LI4(V114,V115)

object V114;object V115;
{	 VMB4 VMS4 VMV4
TTL:;
	V116= (*(LnkLI67))((V114),(V115));
	{object V117 = (equal(/* INLINE-ARGS */V116,(V115))?Ct:Cnil);
	VMR4(V117)}
}
/*	local entry for function RESET-INFO-TYPE	*/

static object LI5(V119)

object V119;
{	 VMB5 VMS5 VMV5
TTL:;
	if((structure_ref((V119),VV[43],2))==Cnil){
	goto T263;}
	{object V120;
	base[0]= (V119);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V120= vs_base[0];
	(void)(structure_set((V120),VV[43],2,Ct));
	{object V121 = (V120);
	VMR5(V121)}}
T263:;
	{object V122 = (V119);
	VMR5(V122)}
}
/*	local entry for function AND-FORM-TYPE	*/

static object LI6(V126,V127,V128)

object V126;register object V127;object V128;
{	 VMB6 VMS6 VMV6
TTL:;
	{register object V129;
	V129= Cnil;
	V130= structure_ref(cadr((V127)),VV[43],2);
	V129= (*(LnkLI67))((V126),/* INLINE-ARGS */V130);
	if(((V129))!=Cnil){
	goto T271;}
	(void)((VFUN_NARGS=3,(*(LnkLI69))(VV[44],(V128),(V126))));
T271:;
	V131= structure_ref(cadr((V127)),VV[43],2);
	if(!(((V129))==(/* INLINE-ARGS */V131))){
	goto T275;}
	{object V132 = (V127);
	VMR6(V132)}
T275:;
	{object V133;
	base[0]= cadr((V127));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V133= vs_base[0];
	(void)(structure_set((V133),VV[43],2,(V129)));
	{object V134 = listA(3,car((V127)),(V133),cddr((V127)));
	VMR6(V134)}}}
}
/*	local entry for function CHECK-FORM-TYPE	*/

static object LI7(V138,V139,V140)

object V138;object V139;object V140;
{	 VMB7 VMS7 VMV7
TTL:;
	V141= structure_ref(cadr((V139)),VV[43],2);
	if(((*(LnkLI67))((V138),/* INLINE-ARGS */V141))!=Cnil){
	goto T281;}
	{object V142 = (VFUN_NARGS=3,(*(LnkLI69))(VV[45],(V140),(V138)));
	VMR7(V142)}
T281:;
	{object V143 = Cnil;
	VMR7(V143)}
}
/*	local entry for function DEFAULT-INIT	*/

static object LI8(V145)

object V145;
{	 VMB8 VMS8 VMV8
TTL:;
	{object V146= (V145);
	if((V146!= VV[10]))goto T284;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[46])));
	goto T283;
T284:;
	if((V146!= VV[0]))goto T285;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[47])));
	goto T283;
T285:;
	if((V146!= VV[3]))goto T286;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[48])));
	goto T283;
T286:;
	if((V146!= VV[12]))goto T287;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[49])));
	goto T283;
T287:;
	if((V146!= VV[11]))goto T288;
	(void)((VFUN_NARGS=1,(*(LnkLI69))(VV[50])));
	goto T283;
T288:;}
T283:;
	{object V147 = (*(LnkLI70))();
	VMR8(V147)}
}
static object  LnkTLI70(){return call_proc0(VV[70],&LnkLI70);} /* C1NIL */
static object  LnkTLI69(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[69],&LnkLI69,ap);} /* CMPWARN */
static LnkT68(){ call_or_link(VV[68],&Lnk68);} /* COPY-INFO */
static object  LnkTLI67(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[67],&LnkLI67,2,ap);} /* TYPE-AND */
static object  LnkTLI36(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[36],&LnkLI36,1,ap);} /* TYPE-FILTER */
static LnkT60(){ call_or_link(VV[60],&Lnk60);} /* SUBTYPEP */
static object  LnkTLI59(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[59],&LnkLI59,2,ap);} /* SUB-INTERVAL-P */
static object  LnkTLI58(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[58],&LnkLI58,1,ap);} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI56(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[56],&LnkLI56,1,ap);} /* NORMALIZE-TYPE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

