
#include "cmpinclude.h"
#include "pcl_vector.h"
void init_pcl_vector(){do_init(VV);}
/*	macro definition for INSTANCE-SLOT-INDEX	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[3]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	V2= list(2,VV[6],list(2,VV[7],base[2]));
	base[4]= list(4,VV[0],VV[1],VV[2],list(3,VV[3],VV[4],list(4,VV[5],/* INLINE-ARGS */V2,list(3,VV[8],list(3,VV[9],base[3],VV[6]),VV[10]),VV[11])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function PV-CACHE-LIMIT-FN	*/

static object LI2(V4)

object V4;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{long V5 = (long)(*(LnkLI152))((V4));
	VMR2((object)V5)}
}
/*	local entry for function __si::MAKE-PV-TABLE	*/

static object LI3(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V6;
	object V7;
	object V8;
	object V9;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI3key,first,ap);
	V6=(Vcs[0]);
	V7=(Vcs[1]);
	V8=(Vcs[2]);
	V9=(Vcs[3]);
	base[0]= VV[12];
	base[1]= (V6);
	base[2]= (V7);
	base[3]= (V8);
	base[4]= (V9);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V10 = vs_base[0];
	VMR3(V10)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-PV-TABLE-INTERNAL	*/

static object LI4(V13,V14)

object V13;object V14;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= Cnil;
	base[2]= small_fixnum(0);
	base[3]= (V13);
	base[4]= (V14);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V17 = vs_base[0];
	VMR4(V17)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-PV-TABLE	*/

static object LI5(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V18;
	object V19;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI5key,first,ap);
	V18=(Vcs[0]);
	V19=(Vcs[1]);
	{object V20;
	V20= (*(LnkLI156))((V18),(V19));
	(VV[13]->s.s_dbind)= make_cons(V20,(VV[13]->s.s_dbind));
	{object V22 = (V20);
	VMR5(V22)}}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function MAKE-PV-TABLE-TYPE-DECLARATION	*/

static object LI6(V24)

object V24;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V25 = list(3,VV[14],VV[12],(V24));
	VMR6(V25)}
	return Cnil;
}
/*	local entry for function INTERN-PV-TABLE	*/

static object LI7(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V26;
	object V27;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI7key,first,ap);
	V26=(Vcs[0]);
	V27=(Vcs[1]);
	base[0]= Cnil;
	{register object V28;
	V31= make_cons((V27),(V26));
	{object V29;
	object V30= /* INLINE-ARGS */V31;
	if(V30==Cnil){
	base[1]= Cnil;
	goto T15;}
	base[2]=V29=MMcons(Cnil,Cnil);
	goto T16;
T16:;
	base[3]= (V30->c.c_car);
	vs_top=(vs_base=base+3)+1;
	L8(base);
	vs_top=sup;
	(V29->c.c_car)= vs_base[0];
	if((V30=MMcdr(V30))==Cnil){
	base[1]= base[2];
	goto T15;}
	V29=MMcdr(V29)=MMcons(Cnil,Cnil);
	goto T16;}
	goto T15;
T15:;
	vs_top=(vs_base=base+1)+1;
	L9(base);
	vs_top=sup;
	V28= vs_base[0];
	if((base[0])==Cnil){
	goto T19;}
	{register long V32;
	V32= 1;
	{register object V33;
	object V34;
	V33= (V26);
	V34= CMPcar((V33));
	goto T27;
T27:;
	if(!(((V33))==Cnil)){
	goto T28;}
	goto T23;
	goto T28;
T28:;
	{register object V35;
	register object V36;
	V35= CMPcdr((V34));
	V36= CMPcar((V35));
	goto T36;
T36:;
	if(!(((V35))==Cnil)){
	goto T37;}
	goto T32;
	goto T37;
T37:;
	V37 = CMPmake_fixnum(V32);
	(void)((*(LnkLI157))((V36),V37,(V28)));
	V32= (long)(V32)+(1);
	V35= CMPcdr((V35));
	V36= CMPcar((V35));
	goto T36;}
	goto T32;
T32:;
	V33= CMPcdr((V33));
	V34= CMPcar((V33));
	goto T27;}
	goto T23;
T23:;
	{register object V38;
	object V39;
	V38= (V27);
	V39= CMPcar((V38));
	goto T58;
T58:;
	if(!(((V38))==Cnil)){
	goto T59;}
	goto T54;
	goto T59;
T59:;
	V40 = CMPmake_fixnum(V32);
	(void)((*(LnkLI157))((V39),V40,(V28)));
	V32= (long)(V32)+(1);
	V38= CMPcdr((V38));
	V39= CMPcar((V38));
	goto T58;}
	goto T54;
T54:;
	V41 = (V28);
	V42 = V32;
	V43= Ct;
	STSET(fixnum,V41,4, V42);
	(void)(V42);}
	goto T19;
T19:;
	{object V44 = (V28);
	VMR7(V44)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NOTE-PV-TABLE-REFERENCE	*/

static object LI10(V48,V49,V50)

object V48;object V49;object V50;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V51;
	base[0]= (V48);
	base[1]= (VV[19]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V51= vs_base[0];
	if(!(type_of((V51))==t_cons||((V51))==Cnil)){
	goto T75;}
	{object V52;
	{register object x= (V50),V53= (V51);
	while(V53!=Cnil)
	if(EQ(x,V53->c.c_car->c.c_car) &&V53->c.c_car != Cnil){
	V52= (V53->c.c_car);
	goto T78;
	}else V53=V53->c.c_cdr;
	V52= Cnil;}
	goto T78;
T78:;
	if(((V52))!=Cnil){
	goto T79;}
	if(!(((long)length((V51)))>(8))){
	goto T79;}
	{register object V54;
	base[0]= VV[20];
	base[1]= small_fixnum(16);
	base[2]= VV[21];
	base[3]= VV[9];
	vs_top=(vs_base=base+0)+4;
	Lmake_hash_table();
	vs_top=sup;
	V54= vs_base[0];
	{register object V55;
	register object V56;
	V55= (V51);
	V56= CMPcar((V55));
	goto T93;
T93:;
	if(!(((V55))==Cnil)){
	goto T94;}
	goto T89;
	goto T94;
T94:;
	{register object V57;
	register object V58;
	register object V59;
	V57= CMPcar((V56));
	V58= (V54);
	V59= CMPcdr((V56));
	base[3]= (V57);
	base[4]= (V58);
	base[5]= (V59);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V55= CMPcdr((V55));
	V56= CMPcar((V55));
	goto T93;}
	goto T89;
T89:;
	{object V61;
	V61= (VV[19]->s.s_dbind);
	base[0]= V48;
	base[1]= (V61);
	base[2]= V54;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}}
	goto T79;
T79:;
	if(!(type_of((V51))==t_cons||((V51))==Cnil)){
	goto T75;}
	if(((V52))!=Cnil){
	goto T118;}
	{object V63;
	V63= make_cons((V50),(V49));
	if(!(type_of((V51))==t_cons)){
	goto T122;}
	{object V66;
	V66= make_cons(V63,CMPcdr(V51));
	(V51)->c.c_cdr = (V66);
	goto T116;}
	goto T122;
T122:;
	{object V68;
	object V69;
	V68= (VV[19]->s.s_dbind);
	V69= make_cons((V63),Cnil);
	base[1]= V48;
	base[2]= (V68);
	base[3]= (V69);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	goto T116;}}
	goto T118;
T118:;
	{object V72;
	V72= make_cons(V49,CMPcdr(V52));
	(V52)->c.c_cdr = (V72);}
	goto T116;
T116:;
	{object V73 = Cnil;
	VMR8(V73)}}
	goto T75;
T75:;
	{object V74;
	base[0]= (V50);
	base[1]= (V51);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V74= vs_base[0];
	if(!(type_of((V74))==t_cons)){
	goto T137;}
	{object V77;
	V77= make_cons(V49,CMPcdr(V74));
	(V74)->c.c_cdr = (V77);
	goto T71;}
	goto T137;
T137:;
	{object V80;
	V80= make_cons((V49),Cnil);
	base[1]= V50;
	base[2]= V51;
	base[3]= (V80);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}}}
	goto T71;
T71:;
	{object V81 = Cnil;
	VMR8(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-PV-TABLE-REFERENCES-OF	*/

static object LI11(V84,V85)

object V84;register object V85;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V86;
	base[0]= (V84);
	base[1]= (VV[19]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V86= vs_base[0];
	if(!(type_of((V86))==t_cons||((V86))==Cnil)){
	goto T150;}
	{register object V87;
	register object V88;
	V87= (V86);
	V88= CMPcar((V87));
	goto T155;
T155:;
	if(!(((V87))==Cnil)){
	goto T156;}
	goto T145;
	goto T156;
T156:;
	(void)((
	(type_of((V85)) == t_sfun ?(*(((V85))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V85))==t_vfun) ?
	(*(((V85))->sfn.sfn_self)):
	(fcall.fun=((V85)),fcalln))(CMPcar((V88)),CMPcdr((V88)))));
	V87= CMPcdr((V87));
	V88= CMPcar((V87));
	goto T155;}
	goto T150;
T150:;
	base[0]= (V85);
	base[1]= (V86);
	vs_top=(vs_base=base+0)+2;
	Lmaphash();
	vs_top=sup;}
	goto T145;
T145:;
	{object V89 = (V84);
	VMR9(V89)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for OPTIMIZE-SLOT-VALUE-BY-CLASS-P	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V90;
	object V91;
	object V92;
	check_arg(3);
	V90=(base[0]);
	V91=(base[1]);
	V92=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((((VV[22]->s.s_dbind))==(VV[23])?Ct:Cnil))==Cnil)){
	goto T168;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T168;
T168:;
	{object V93;
	V93= (*(LnkLI158))((V90),(V91));
	if((V93)==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	base[3]= (V93);
	base[4]= (V92);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk159)(Lclptr159);
	return;}
	}
}
/*	local entry for function COMPUTE-PV-SLOT	*/

static object LI13(V99,V100,V101,V102,V103)

register object V99;object V100;object V101;object V102;object V103;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(!(type_of((V99))==t_symbol)){
	goto T174;}
	base[0]= (V101);
	base[1]= (V99);
	base[2]= VV[24];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk160)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T177;}{object V104;
	{register long V105;
	V105= 0;
	{register object V106;
	object V107;
	V106= ((V100))->v.v_self[9];
	V107= CMPcar((V106));
	goto T188;
T188:;
	if(!(((V106))==Cnil)){
	goto T189;}
	V104= Cnil;
	goto T183;
	goto T189;
T189:;
	if(!(((V99))==((V107)))){
	goto T193;}
	V104= CMPmake_fixnum(V105);
	goto T183;
	goto T193;
T193:;
	V105= (long)(V105)+(1);
	V106= CMPcdr((V106));
	V107= CMPcar((V106));
	goto T188;}}
	goto T183;
T183:;
	if(V104==Cnil)goto T182;
	{object V108 = V104;
	VMR11(V108)}
	goto T182;
T182:;}
	{object V109;
	{register object x= (V99),V110= (V102);
	while(V110!=Cnil)
	if(EQ(x,V110->c.c_car->c.c_car) &&V110->c.c_car != Cnil){
	V109= (V110->c.c_car);
	goto T203;
	}else V110=V110->c.c_cdr;
	V109= Cnil;}
	goto T203;
T203:;
	if(((V109))==Cnil){
	goto T205;}
	(V103)->c.c_car = Ct;
	{object V113 = (V109);
	VMR11(V113)}
	goto T205;
T205:;
	{object V114 = Cnil;
	VMR11(V114)}}
	goto T177;
T177:;
	{object V115 = Cnil;
	VMR11(V115)}
	goto T174;
T174:;
	if(!(type_of((V99))==t_cons)){
	goto T210;}
	{register object V116;
	register object V117;
	V116= VV[25];
	V117= CMPcar((V116));
	goto T215;
T215:;
	if(!(((V116))==Cnil)){
	goto T216;}
	{object V118 = Cnil;
	VMR11(V118)}
	goto T216;
T216:;
	if(!((CMPcar((V99)))==((V117)))){
	goto T220;}
	{object V119;
	object V120;
	register object V121;
	V119= CMPcadr((V99));
	V120= (*(LnkLI161))((V119));
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T227;}
	base[4]= (V120);
	base[5]= (V117);
	base[6]= (V101);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk162)();
	vs_top=sup;
	V121= vs_base[0];
	goto T225;
	goto T227;
T227:;
	V121= Cnil;
	goto T225;
T225:;
	if(!(type_of((V121))==t_cons)){
	goto T232;}
	{register object V123;
	V123= Ct;
	(V103)->c.c_car = (V123);}
	goto T232;
T232:;
	{object V124 = (V121);
	VMR11(V124)}}
	goto T220;
T220:;
	V116= CMPcdr((V116));
	V117= CMPcar((V116));
	goto T215;}
	goto T210;
T210:;
	{object V125 = Cnil;
	VMR11(V125)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-PV	*/

static object LI14(V128,V129)

object V128;object V129;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(type_of((V129))==t_cons||((V129))==Cnil){
	goto T242;}
	V129= make_cons((V129),Cnil);
	goto T242;
T242:;
	{object V130;
	object V131;
	V130= make_cons(Cnil,Cnil);
	{object V132;
	register object V133;
	V132= Cnil;
	V133= Cnil;
	{register object V134;
	object V135;
	V134= (V128);
	V135= Cnil;
	goto T254;
T254:;
	{object V136;
	if(!(((V134))==Cnil)){
	goto T260;}
	goto T250;
	goto T260;
T260:;
	V136= CMPcar((V134));
	V134= CMPcdr((V134));
	V135= (V136);}
	if(((V135))==Cnil){
	goto T255;}
	{register object V137;
	object V139;
	object V140;
	{object V141;
	V141= CMPcar((V129));
	V129= CMPcdr((V129));
	V137= (V141);}
	V139= ((V137))->v.v_self[11];
	if(Ct==Cnil){
	V140= Cnil;
	goto T271;}
	V140= ((V137))->v.v_self[10];
	goto T271;
T271:;
	{register object V142;
	register object V143;
	V142= CMPcdr((V135));
	V143= CMPcar((V142));
	goto T275;
T275:;
	if(!(((V142))==Cnil)){
	goto T276;}
	goto T255;
	goto T276;
T276:;
	{register object V144;
	if((Ct)==Cnil){
	goto T283;}
	V144= (*(LnkLI163))((V143),(V137),(V139),(V140),(V130));
	goto T281;
	goto T283;
T283:;
	V144= Cnil;
	goto T281;
T281:;
	if(((V132))!=Cnil){
	goto T286;}
	V133= make_cons((V144),Cnil);
	V132= (V133);
	goto T280;
	goto T286;
T286:;
	V146= make_cons((V144),Cnil);
	((V133))->c.c_cdr = /* INLINE-ARGS */V146;
	V145= (V133);
	V133= CMPcdr(V145);}
	goto T280;
T280:;
	V142= CMPcdr((V142));
	V143= CMPcar((V142));
	goto T275;}}
	goto T255;
T255:;
	goto T254;}
	goto T250;
T250:;
	V131= (V132);}
	if((CMPcar((V130)))==Cnil){
	goto T299;}
	V147= make_cons(Ct,(V131));
	{object V148 = (*(LnkLI164))(/* INLINE-ARGS */V147);
	VMR12(V148)}
	goto T299;
T299:;{object V149;
	base[2]= (V131);
	base[3]= (VV[26]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V149= vs_base[0];
	if(V149==Cnil)goto T301;
	{object V150 = V149;
	VMR12(V150)}
	goto T301;
T301:;}
	{object V152;
	object V153;
	V152= (VV[26]->s.s_dbind);
	V154= make_cons(Cnil,(V131));
	V153= (*(LnkLI164))(/* INLINE-ARGS */V154);
	base[3]= V131;
	base[4]= (V152);
	base[5]= (V153);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	{object V155 = vs_base[0];
	VMR12(V155)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-CALLS	*/

static object LI15(V158,V159)

object V158;object V159;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V160 = VV[27];
	VMR13(V160)}
	return Cnil;
}
/*	local entry for function MAKE-PERMUTATION-VECTOR	*/

static object LI16(V162)

object V162;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= CMPmake_fixnum((long)length((V162)));
	base[1]= VV[28];
	base[2]= (V162);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk165)();
	vs_top=sup;
	{object V163 = vs_base[0];
	VMR14(V163)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PV-TABLE-LOOKUP	*/

static object LI17(V166,V167)

register object V166;register object V167;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V168;
	object V169;
	register object V170;
	V168= STREF(object,(V166),8);
	V169= STREF(object,(V166),12);{object V171;
	V171= STREF(object,(V166),0);
	if(V171==Cnil)goto T316;
	V170= V171;
	goto T315;
	goto T316;
T316:;}
	V172 = (V166);
	V173 = CMPmake_fixnum((long)length((V168)));
	base[3]= Cnil;
	base[4]= (V168);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk167)();
	vs_top=sup;
	V174= vs_base[0];
	V175= number_minus(V173,V174);
	V176= (VV[168]->s.s_gfdef);
	V177= (*(LnkLI166))(/* INLINE-ARGS */V175,Ct,V176,2);
	V178= Ct;
	STSET(object,V172,0, /* INLINE-ARGS */V177);
	V170= /* INLINE-ARGS */V177;
	goto T315;
T315:;{object V179;
	V179= (VFUN_NARGS=2,(*(LnkLI169))((V170),(V167)));
	if(V179==Cnil)goto T322;
	{object V180 = V179;
	VMR15(V180)}
	goto T322;
T322:;}
	{object V181;
	object V182;
	object V183;
	object V184;
	V181= (*(LnkLI170))((V168),(V167));
	V182= (*(LnkLI171))((V169),(V167));
	V183= make_cons((V181),(V182));
	V184= (VFUN_NARGS=3,(*(LnkLI172))((V170),(V167),(V183)));
	if(((V184))==((V170))){
	goto T328;}
	V185 = (V166);
	V186 = (V184);
	V187= Ct;
	STSET(object,V185,0, V186);
	(void)(V186);
	(void)((*(LnkLI173))((V170)));
	goto T328;
T328:;
	{object V188 = (V183);
	VMR15(V188)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-PV-TYPE-DECLARATION	*/

static object LI18(V190)

object V190;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V191 = list(3,VV[14],VV[29],(V190));
	VMR16(V191)}
	return Cnil;
}
/*	macro definition for PVREF	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V192=base[0]->c.c_cdr;
	if(endp(V192))invalid_macro_call();
	base[2]= (V192->c.c_car);
	V192=V192->c.c_cdr;
	if(endp(V192))invalid_macro_call();
	base[3]= (V192->c.c_car);
	V192=V192->c.c_cdr;
	if(!endp(V192))invalid_macro_call();}
	base[4]= list(3,VV[30],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for COPY-PV	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V193=base[0]->c.c_cdr;
	if(endp(V193))invalid_macro_call();
	base[2]= (V193->c.c_car);
	V193=V193->c.c_cdr;
	if(!endp(V193))invalid_macro_call();}
	base[3]= list(2,VV[31],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function MAKE-CALLS-TYPE-DECLARATION	*/

static object LI21(V195)

object V195;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V196 = list(3,VV[14],VV[29],(V195));
	VMR19(V196)}
	return Cnil;
}
/*	macro definition for CALLSREF	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V197=base[0]->c.c_cdr;
	if(endp(V197))invalid_macro_call();
	base[2]= (V197->c.c_car);
	V197=V197->c.c_cdr;
	if(endp(V197))invalid_macro_call();
	base[3]= (V197->c.c_car);
	V197=V197->c.c_cdr;
	if(!endp(V197))invalid_macro_call();}
	base[4]= list(3,VV[30],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function UPDATE-PV-TABLE-CACHE-INFO	*/

static object LI23(V199)

object V199;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V200;
	register object V201;
	V200= Cnil;
	V201= Cnil;
	{register object V202;
	register object V203;
	V202= (VV[32]->s.s_dbind);
	V203= CMPcar((V202));
	goto T336;
T336:;
	if(!(((V202))==Cnil)){
	goto T337;}
	goto T332;
	goto T337;
T337:;
	if(!((CMPcar((V203)))==((V199)))){
	goto T343;}
	{register object V204;
	V204= CMPcdr((V203));
	base[2]= (V204);
	base[3]= (V200);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	V200= vs_base[0];
	goto T341;}
	goto T343;
T343:;
	{register object V205;
	V205= (V203);
	V201= make_cons((V205),(V201));}
	goto T341;
T341:;
	V202= CMPcdr((V202));
	V203= CMPcar((V202));
	goto T336;}
	goto T332;
T332:;
	(VV[32]->s.s_dbind)= (V201);
	if(((V200))==Cnil){
	goto T359;}
	{object V206 = (*(LnkLI174))((V199),(V200));
	VMR21(V206)}
	goto T359;
T359:;
	{object V207 = Cnil;
	VMR21(V207)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-ALL-PV-TABLE-CACHES	*/

static object LI24(V210,V211)

object V210;object V211;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V213;
	object V214;
	object V215;
	base[5]= (V210);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk175)(Lclptr175);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	if(Ct==Cnil){
	V213= Cnil;
	goto T363;}
	V213= ((base[0]->c.c_car))->v.v_self[10];
	goto T363;
T363:;
	V214= make_cons(Cnil,Cnil);
	{object V216;
	object V217= (V211);
	if(V217==Cnil){
	V215= Cnil;
	goto T365;}
	base[5]=V216=MMcons(Cnil,Cnil);
	goto T366;
T366:;
	V219 = (V217->c.c_car);
	if((Ct)==Cnil){
	goto T370;}
	V220= (*(LnkLI163))((V217->c.c_car),(base[0]->c.c_car),(V210),(V213),(V214));
	goto T368;
	goto T370;
T370:;
	V220= Cnil;
	goto T368;
T368:;
	(V216->c.c_car)= make_cons(V219,V220);
	if((V217=MMcdr(V217))==Cnil){
	V215= base[5];
	goto T365;}
	V216=MMcdr(V216)=MMcons(Cnil,Cnil);
	goto T366;}
	goto T365;
T365:;
	base[4]=MMcons(Cnil,base[0]);
	{object V221;
	object V222;
	V221= (V211);
	V222= CMPcar((V221));
	goto T376;
T376:;
	if(!(((V221))==Cnil)){
	goto T377;}
	goto T372;
	goto T377;
T377:;
	V223 = (V222);
	V224= 
	make_cclosure_new(LC72,Cnil,base[4],Cdata);
	(void)((*(LnkLI176))(V223,V224));
	V221= CMPcdr((V221));
	V222= CMPcar((V221));
	goto T376;}
	goto T372;
T372:;
	{object V225;
	object V226;
	V225= (base[4]->c.c_car);
	V226= CMPcar((V225));
	goto T391;
T391:;
	if(!(((V225))==Cnil)){
	goto T392;}
	{object V227 = Cnil;
	VMR22(V227)}
	goto T392;
T392:;
	{object V228;
	object V229;
	V228= STREF(object,(V226),0);
	V229= STREF(object,(V226),8);
	base[8]= CMPmake_fixnum((long)STREF(fixnum,(V226),4));
	base[8]=MMcons(base[8],base[4]);
	base[10]= (base[8]->c.c_car);
	base[11]= VV[33];
	base[12]= Cnil;
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk165)();
	vs_top=sup;
	base[9]= vs_base[0];
	base[9]=MMcons(base[9],base[8]);
	{register long V230;
	register long V231;
	V230= 1;
	V231= 0;
	{register object V232;
	object V233;
	V232= (V229);
	V233= CMPcar((V232));
	goto T410;
T410:;
	if(!(((V232))==Cnil)){
	goto T411;}
	goto T404;
	goto T411;
T411:;
	{register object V234;
	register object V235;
	V234= CMPcdr((V233));
	V235= CMPcar((V234));
	goto T419;
T419:;
	if(!(((V234))==Cnil)){
	goto T420;}
	goto T415;
	goto T420;
T420:;
	{register object V236;
	{register object x= (V235),V237= (V215);
	while(V237!=Cnil)
	if(eql(x,V237->c.c_car->c.c_car) &&V237->c.c_car != Cnil){
	V236= (V237->c.c_car);
	goto T425;
	}else V237=V237->c.c_cdr;
	V236= Cnil;}
	goto T425;
T425:;
	V238 = (base[9]->c.c_car);
	V239 = V230;
	if((V236)==Cnil){
	V240= Cnil;
	goto T426;}
	V241 = CMPmake_fixnum(V231);
	V240= make_cons(V241,CMPcdr((V236)));
	goto T426;
T426:;
	(void)((V238)->v.v_self[V239]= (V240));}
	V230= (long)(V230)+(1);
	V234= CMPcdr((V234));
	V235= CMPcar((V234));
	goto T419;}
	goto T415;
T415:;
	V231= (long)(V231)+(1);
	V232= CMPcdr((V232));
	V233= CMPcar((V232));
	goto T410;}}
	goto T404;
T404:;
	if(((V228))==Cnil){
	goto T396;}
	V242= 
	make_cclosure_new(LC73,Cnil,base[9],Cdata);
	V243 = (V228);
	(void)((VFUN_NARGS=2,(*(LnkLI177))(V242,V243)));}
	goto T396;
T396:;
	V225= CMPcdr((V225));
	V226= CMPcar((V225));
	goto T391;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-SLOTS-IN-PV	*/

static object LI25(V249,V250,V251,V252,V253)

object V249;object V250;object V251;object V252;object V253;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(!(type_of((V249))!=t_cons)){
	goto T453;}
	if(((V251))==((V249))){
	goto T450;}
	goto T451;
	goto T453;
T453:;
	{register object V254;
	object V255;
	V254= (V249);
	V255= CMPcar((V254));
	goto T458;
T458:;
	if(!(((V254))==Cnil)){
	goto T459;}
	goto T451;
	goto T459;
T459:;
	if(!(((V255))==((V251)))){
	goto T463;}
	goto T450;
	goto T463;
T463:;
	V254= CMPcdr((V254));
	V255= CMPcar((V254));
	goto T458;}
	goto T451;
T451:;
	{object V256 = (V250);
	VMR23(V256)}
	goto T450;
T450:;
	{object V257;
	register object V258;
	object V259;
	{object V260= ((V250))->v.v_self[0];
	V257= (type_of(V260)==t_cons||(V260)==Cnil?Ct:Cnil);}
	if(((V257))==Cnil){
	goto T474;}
	base[2]= (V250);
	vs_top=(vs_base=base+2)+1;
	Lcopy_seq();
	vs_top=sup;
	V258= vs_base[0];
	goto T472;
	goto T474;
T474:;
	V258= (V250);
	goto T472;
T472:;
	V259= Ct;
	if(!(type_of((V249))!=t_cons)){
	goto T480;}
	{long V261;
	register long V262;
	V261= fix((V252));
	V262= 0;
	goto T485;
T485:;
	if(!((V262)>=(V261))){
	goto T486;}
	goto T478;
	goto T486;
T486:;
	{object V264;
	V264= ((V253))->v.v_self[V262];
	if(((V264))==Cnil){
	goto T495;}
	V263= ((V258))->v.v_self[V262]= (CMPcdr((V264)));
	goto T492;
	goto T495;
T495:;
	V263= ((V258))->v.v_self[V262];}
	goto T492;
T492:;
	if(!(type_of(V263)==t_cons)){
	goto T489;}
	V259= Cnil;
	goto T489;
T489:;
	V262= (long)(V262)+1;
	goto T485;}
	goto T480;
T480:;
	{long V265;
	V265= 0;
	{register object V266;
	object V267;
	V266= (V249);
	V267= CMPcar((V266));
	goto T505;
T505:;
	if(!(((V266))==Cnil)){
	goto T506;}
	goto T478;
	goto T506;
T506:;
	if(!(((V267))==((V251)))){
	goto T510;}
	{long V268;
	register long V269;
	V268= fix((V252));
	V269= 0;
	goto T516;
T516:;
	if(!((V269)>=(V268))){
	goto T517;}
	goto T510;
	goto T517;
T517:;
	{register object V271;
	V271= ((V253))->v.v_self[V269];
	if(((V271))==Cnil){
	goto T526;}
	V272= CMPcar((V271));
	V273 = CMPmake_fixnum(V265);
	if(!(number_compare(/* INLINE-ARGS */V272,V273)==0)){
	goto T526;}
	V270= ((V258))->v.v_self[V269]= (CMPcdr((V271)));
	goto T523;
	goto T526;
T526:;
	V270= ((V258))->v.v_self[V269];}
	goto T523;
T523:;
	if(!(type_of(V270)==t_cons)){
	goto T520;}
	V259= Cnil;
	goto T520;
T520:;
	V269= (long)(V269)+1;
	goto T516;}
	goto T510;
T510:;
	V265= (long)(V265)+(1);
	V266= CMPcdr((V266));
	V267= CMPcar((V266));
	goto T505;}}
	goto T478;
T478:;
	if(((V259))==Cnil){
	goto T541;}
	{object V274;
	base[2]= (V250);
	base[3]= VV[34];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	V274= vs_base[0];{object V275;
	base[2]= CMPcdr((V274));
	base[3]= (VV[26]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V275= vs_base[0];
	if(V275==Cnil)goto T548;
	V258= V275;
	goto T544;
	goto T548;
T548:;}
	{object V276;
	object V277;
	object V278;
	V276= CMPcdr((V274));
	V277= (VV[26]->s.s_dbind);
	if(((V257))==Cnil){
	goto T556;}
	V278= (V258);
	goto T554;
	goto T556;
T556:;
	V278= (*(LnkLI164))((V274));
	goto T554;
T554:;
	base[4]= (V276);
	base[5]= (V277);
	base[6]= (V278);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;
	V258= vs_base[0];}}
	goto T544;
T544:;
	goto T541;
T541:;
	{object V279 = (V258);
	VMR23(V279)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EXPAND-ACCESSOR-FORM	*/

static object LI26(V284,V285,V286,V287)

register object V284;object V285;object V286;object V287;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V288;
	register object V289;
	V288= CMPcar((V284));
	if(!(type_of((V288))==t_symbol)){
	goto T564;}
	V289= (*(LnkLI179))((V288));
	goto T562;
	goto T564;
T564:;
	V289= (*(LnkLI161))((V288));
	goto T562;
T562:;
	if(!(type_of(CMPcadr((V284)))==t_cons)){
	goto T566;}
	if((VV[35])==(CMPcaadr((V284)))){
	goto T567;}
	goto T566;
T566:;
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T572;}
	base[2]= (V289);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk180)(Lclptr180);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T572;}
	{object V290;
	base[2]= (V289);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk181)(Lclptr181);
	vs_top=sup;
	V290= vs_base[0];
	if(((V290))==Cnil){
	goto T580;}
	{register object V291;
	object V292;
	object V293;
	object V294;
	object V295;
	base[7]= (V289);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk182)(Lclptr182);
	vs_top=sup;
	V291= vs_base[0];
	base[7]= (V289);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk183)(Lclptr183);
	vs_top=sup;
	V292= vs_base[0];
	V293= STREF(object,(V292),8);
	V294= CMPmake_fixnum((long)length((V293)));
	V295= (*(LnkLI184))((V292));
	if(((V295))!=Cnil){
	goto T590;}
	if(!(number_compare((V294),small_fixnum(1))==0)){
	goto T593;}
	base[7]= (VV[185]->s.s_gfdef);
	base[8]= (V290);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk186)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T596;}
	{object V296;
	V296= (VFUN_NARGS=3,(*(LnkLI187))(CMPcadr((V284)),(V285),(V287)));
	if(((V296))==Cnil){
	goto T602;}
	{object V297 = (*(LnkLI188))((V286),(V296),(V291),(V284));
	VMR24(V297)}
	goto T602;
T602:;
	{object V298 = Cnil;
	VMR24(V298)}}
	goto T596;
T596:;
	{object V299 = Cnil;
	VMR24(V299)}
	goto T593;
T593:;
	if(!(number_compare((V294),small_fixnum(2))==0)){
	goto T605;}
	if(!(type_of((V291))==t_cons)){
	goto T605;}
	if(!((CMPcar((V291)))==(VV[37]))){
	goto T605;}
	base[7]= (VV[189]->s.s_gfdef);
	base[8]= (V290);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk186)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T612;}
	{object V300;
	V300= (VFUN_NARGS=3,(*(LnkLI187))(CMPcaddr((V284)),(V285),(V287)));
	if(((V300))==Cnil){
	goto T618;}
	{object V301 = (*(LnkLI190))((V286),(V300),(V291),(V284));
	VMR24(V301)}
	goto T618;
T618:;
	{object V302 = Cnil;
	VMR24(V302)}}
	goto T612;
T612:;
	{object V303 = Cnil;
	VMR24(V303)}
	goto T605;
T605:;
	{object V304 = Cnil;
	VMR24(V304)}
	goto T590;
T590:;
	{object V305 = Cnil;
	VMR24(V305)}}
	goto T580;
T580:;
	{object V306 = Cnil;
	VMR24(V306)}}
	goto T572;
T572:;
	{object V307 = Cnil;
	VMR24(V307)}
	goto T567;
T567:;
	{object V308 = Cnil;
	VMR24(V308)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GENERIC-FUNCTION-CALL	*/

static object LI27(V314,V315,V316,V317,V318)

object V314;object V315;object V316;object V317;object V318;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;{object V319;
	if((CMPcar((V314)))==(VV[38])){
	goto T622;}
	V319= Cnil;
	goto T621;
	goto T622;
T622:;
	V319= (*(LnkLI191))((V314));
	goto T621;
T621:;
	if(V319==Cnil)goto T620;
	{object V320 = V319;
	VMR25(V320)}
	goto T620;
T620:;}
	{object V321 = (V314);
	VMR25(V321)}
	return Cnil;
}
/*	local entry for function CAN-OPTIMIZE-ACCESS	*/

static object LI28(V325,V326,V327)

object V325;object V326;object V327;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V328;
	object V329;
	object V330;
	{object V331= CMPcar((V325));
	if((V331!= VV[192]))goto T625;
	V328= VV[39];
	goto T624;
	goto T625;
T625:;
	if((V331!= VV[193]))goto T626;
	V328= VV[40];
	goto T624;
	goto T626;
T626:;
	if((V331!= VV[194]))goto T627;
	V328= VV[41];
	goto T624;
	goto T627;
T627:;
	FEerror("The ECASE key value ~s is illegal.",1,V331);
	V328= Cnil;
	goto T624;}
	goto T624;
T624:;
	V329= CMPcadr((V325));
	base[0]= CMPcaddr((V325));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V330= vs_base[0];
	{object V332 = (VFUN_NARGS=5,(*(LnkLI187))((V329),(V326),(V327),(V328),(V330)));
	VMR26(V332)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CAN-OPTIMIZE-ACCESS1	*/

static object LI29(object V335,object V334,object V333,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{register object V336;
	object V337;
	object V338;
	object V339;
	object V340;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V336= V335;
	V337= V334;
	V338= V333;
	narg = narg - 3;
	if (narg <= 0) goto T631;
	else {
	V339= first;}
	if (--narg <= 0) goto T632;
	else {
	V340= va_arg(ap,object);}
	--narg; goto T633;
	goto T631;
T631:;
	V339= Cnil;
	goto T632;
T632:;
	V340= Cnil;
	goto T633;
T633:;
	if(!(type_of((V336))==t_cons)){
	goto T636;}
	if(!((VV[42])==(CMPcar((V336))))){
	goto T636;}
	V336= CMPcaddr((V336));
	goto T636;
T636:;
	if(!(type_of((V336))==t_symbol)){
	goto T643;}
	{object V341;
	object V342;
	V343= (*(LnkLI195))(VV[43],(V336),(V338));
	V341= CMPcaddr(/* INLINE-ARGS */V343);
	if((V341)!=Cnil){
	V346= (V341);
	goto T648;}
	V346= (V336);
	goto T648;
T648:;
	V347 = (V337);
	{register object x= V346,V345= V347;
	while(V345!=Cnil)
	if(x==(V345->c.c_car)){
	V344= V345;
	goto T647;
	}else V345=V345->c.c_cdr;
	V344= Cnil;}
	goto T647;
T647:;
	V342= CMPcar(V344);
	if(((V342))==Cnil){
	goto T650;}
	{register object V348;
	register object V349;
	V350= (*(LnkLI195))(VV[44],(V342),(V338));
	V348= CMPcaddr(/* INLINE-ARGS */V350);
	V349= (VFUN_NARGS=2,(*(LnkLI196))((V348),Cnil));
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T655;}
	if(((V349))==Cnil){
	goto T654;}
	base[4]= (V349);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk197)(Lclptr197);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T654;}
	goto T655;
T655:;
	V349= Cnil;
	goto T654;
T654:;
	if(((V348))==Cnil){
	goto T664;}
	if(((V348))==(Ct)){
	goto T664;}
	if(((V339))==Cnil){
	goto T668;}
	if(((V349))==Cnil){
	goto T668;}{object V352;
	V352= (VV[45]->s.s_dbind);
	base[4]= (V349);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk198)(Lclptr198);
	vs_top=sup;
	V353= vs_base[0];
	{register object x= V352,V351= V353;
	while(V351!=Cnil)
	if(x==(V351->c.c_car)){
	goto T675;
	}else V351=V351->c.c_cdr;
	goto T668;}}
	goto T675;
T675:;
	base[4]= (V349);
	base[5]= (V340);
	base[6]= (V339);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk160)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T669;}
	goto T668;
T668:;
	V354 = (V342);
	if((V349)!=Cnil){
	V355= (V349);
	goto T682;}
	V355= (V348);
	goto T682;
T682:;
	{object V356 = make_cons(V354,V355);
	VMR27(V356)}
	goto T669;
T669:;
	{object V357 = Cnil;
	VMR27(V357)}
	goto T664;
T664:;
	{object V358 = Cnil;
	VMR27(V358)}}
	goto T650;
T650:;
	{object V359 = Cnil;
	VMR27(V359)}}
	goto T643;
T643:;
	{object V360 = Cnil;
	VMR27(V360)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function OPTIMIZE-SLOT-VALUE	*/

static object LI30(V364,V365,V366)

object V364;object V365;object V366;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	if(((V365))==Cnil){
	goto T684;}
	{object V367;
	object V368;
	V367= Cnil;
	V368= Cnil;
	V368= (V366);
	V367= CMPcaddr((V368));
	{object V369;
	base[0]= (V367);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V369= vs_base[0];
	{object V370 = (*(LnkLI199))((V364),VV[46],(V365),(V369),Cnil);
	VMR28(V370)}}}
	goto T684;
T684:;
	{object V371 = make_cons(VV[47],CMPcdr((V366)));
	VMR28(V371)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-SET-SLOT-VALUE	*/

static object LI31(V375,V376,V377)

object V375;object V376;object V377;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((V376))==Cnil){
	goto T694;}
	{object V378;
	object V379;
	register object V380;
	V378= Cnil;
	V379= Cnil;
	V380= Cnil;
	V380= (V377);
	V380= CMPcddr((V380));
	{object V381;
	V381= CMPcar((V380));
	V380= CMPcdr((V380));
	V379= (V381);}
	V378= CMPcar((V380));
	{object V382;
	base[0]= (V379);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V382= vs_base[0];
	{object V383 = (*(LnkLI199))((V375),VV[48],(V376),(V382),(V378));
	VMR29(V383)}}}
	goto T694;
T694:;
	{object V384 = make_cons(VV[49],CMPcdr((V377)));
	VMR29(V384)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-SLOT-BOUNDP	*/

static object LI32(V388,V389,V390)

object V388;object V389;object V390;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V389))==Cnil){
	goto T712;}
	{object V391;
	object V392;
	register object V393;
	V391= Cnil;
	V392= Cnil;
	V393= Cnil;
	V393= (V390);
	V393= CMPcddr((V393));
	{object V394;
	V394= CMPcar((V393));
	V393= CMPcdr((V393));
	V392= (V394);}
	V391= CMPcar((V393));
	{object V395;
	base[0]= (V392);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V395= vs_base[0];
	{object V396 = (*(LnkLI199))((V388),VV[50],(V389),(V395),(V391));
	VMR30(V396)}}}
	goto T712;
T712:;
	{object V397 = make_cons(VV[51],CMPcdr((V390)));
	VMR30(V397)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-READER	*/

static object LI33(V402,V403,V404,V405)

object V402;object V403;object V404;object V405;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(((V403))==Cnil){
	goto T730;}
	{object V406 = (*(LnkLI200))((V402),VV[46],(V403),(V404),Cnil);
	VMR31(V406)}
	goto T730;
T730:;
	{object V407 = (V405);
	VMR31(V407)}
	return Cnil;
}
/*	local entry for function OPTIMIZE-WRITER	*/

static object LI34(V412,V413,V414,V415)

object V412;object V413;object V414;object V415;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(((V413))==Cnil){
	goto T733;}
	{object V416;
	object V417;
	V416= Cnil;
	V417= Cnil;
	V417= (V415);
	V416= CMPcaddr((V417));
	{object V418 = (*(LnkLI200))((V412),VV[48],(V413),(V414),(V416));
	VMR32(V418)}}
	goto T733;
T733:;
	{object V419 = (V415);
	VMR32(V419)}
	return Cnil;
}
/*	local entry for function OPTIMIZE-INSTANCE-ACCESS	*/

static object LI35(V425,V426,V427,V428,V429)

object V425;object V426;register object V427;register object V428;object V429;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V430;
	register object V431;
	if(!(type_of((V427))==t_cons)){
	goto T742;}
	V430= CMPcdr((V427));
	goto T740;
	goto T742;
T742:;
	V430= (VV[52]->s.s_dbind);
	goto T740;
T740:;
	if(!(type_of((V427))==t_cons)){
	goto T746;}
	V431= CMPcar((V427));
	goto T744;
	goto T746;
T746:;
	V431= (V427);
	goto T744;
T744:;
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T749;}
	base[0]= (V430);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T749;}{object V433;
	V433= (VV[45]->s.s_dbind);
	base[0]= (V430);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk198)(Lclptr198);
	vs_top=sup;
	V434= vs_base[0];
	{register object x= V433,V432= V434;
	while(V432!=Cnil)
	if(x==(V432->c.c_car)){
	goto T755;
	}else V432=V432->c.c_cdr;
	goto T749;}}
	goto T755;
T755:;
	{object V435;
	V435= (*(LnkLI158))((V430),(V428));
	{object V436= (V426);
	if((V436!= VV[46]))goto T759;
	base[0]= (V435);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V437= vs_base[0];
	V438 = (V431);
	{object V439 = list(2,V437,V438);
	VMR33(V439)}
	goto T759;
T759:;
	if((V436!= VV[48]))goto T762;
	base[0]= (V435);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V440= vs_base[0];
	V441 = (V431);
	{object V442 = list(3,VV[37],list(2,V440,V441),(V429));
	VMR33(V442)}
	goto T762;
T762:;
	if((V436!= VV[50]))goto T765;
	{object V443 = Ct;
	VMR33(V443)}
	goto T765;
T765:;
	FEerror("The ECASE key value ~s is illegal.",1,V436);
	{object V444 = Cnil;
	VMR33(V444)}}}
	goto T749;
T749:;
	{register object V445;
	register object V446;
	object V447;
	register object V448;
	{register object x= (V431),V449= (V425);
	while(V449!=Cnil)
	if(EQ(x,V449->c.c_car->c.c_car) &&V449->c.c_car != Cnil){
	V445= (V449->c.c_car);
	goto T766;
	}else V449=V449->c.c_cdr;
	V445= Cnil;}
	goto T766;
T766:;
	{register object x= (V428),V450= CMPcdr((V445));
	while(V450!=Cnil)
	if(EQ(x,V450->c.c_car->c.c_car) &&V450->c.c_car != Cnil){
	V446= (V450->c.c_car);
	goto T767;
	}else V450=V450->c.c_cdr;
	V446= Cnil;}
	goto T767;
T767:;
	base[4]= (V445);
	base[5]= (V425);
	base[6]= VV[21];
	base[7]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk203)();
	vs_top=sup;
	V447= vs_base[0];
	V448= list(2,VV[53],VV[54]);
	if(((V445))!=Cnil){
	goto T774;}
	base[4]= VV[55];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T774;
T774:;
	if(((V446))!=Cnil){
	goto T778;}
	V446= make_cons((V428),Cnil);
	{object V453;
	V453= make_cons(V446,CMPcdr(V445));
	(V445)->c.c_cdr = (V453);}
	goto T778;
T778:;
	{object V456;
	V456= make_cons(V448,CMPcdr(V446));
	(V446)->c.c_cdr = (V456);}
	{object V457= (V426);
	if((V457!= VV[46]))goto T788;
	V458= list(2,VV[57],(V428));
	{object V459 = list(6,VV[56],(V448),(V431),(V447),/* INLINE-ARGS */V458,list(2,VV[57],(V430)));
	VMR33(V459)}
	goto T788;
T788:;
	if((V457!= VV[48]))goto T789;
	V460= list(2,VV[58],(V429));
	V461= make_cons(/* INLINE-ARGS */V460,Cnil);
	V462= list(2,VV[57],(V428));
	{object V463 = list(3,VV[0],/* INLINE-ARGS */V461,list(7,VV[59],(V448),(V431),(V447),/* INLINE-ARGS */V462,list(2,VV[57],(V430)),VV[58]));
	VMR33(V463)}
	goto T789;
T789:;
	if((V457!= VV[50]))goto T790;
	V464= list(2,VV[57],(V428));
	{object V465 = list(6,VV[60],(V448),(V431),(V447),/* INLINE-ARGS */V464,list(2,VV[57],(V430)));
	VMR33(V465)}
	goto T790;
T790:;
	FEerror("The ECASE key value ~s is illegal.",1,V457);
	{object V466 = Cnil;
	VMR33(V466)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-ACCESSOR-CALL	*/

static object LI36(V472,V473,V474,V475,V476)

object V472;object V473;register object V474;register object V475;object V476;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V477;
	object V478;
	register object V479;
	object V480;
	register object V481;
	object V482;
	object V483;
	if(!(type_of((V474))==t_cons)){
	goto T793;}
	V477= CMPcdr((V474));
	goto T791;
	goto T793;
T793:;
	V477= (VV[52]->s.s_dbind);
	goto T791;
T791:;
	if(!(type_of((V474))==t_cons)){
	goto T797;}
	V478= CMPcar((V474));
	goto T795;
	goto T797;
T797:;
	V478= (V474);
	goto T795;
T795:;
	{register object x= (V478),V484= (V472);
	while(V484!=Cnil)
	if(EQ(x,V484->c.c_car->c.c_car) &&V484->c.c_car != Cnil){
	V479= (V484->c.c_car);
	goto T799;
	}else V484=V484->c.c_cdr;
	V479= Cnil;}
	goto T799;
T799:;
	{object V485= (V473);
	if((V485!= VV[46]))goto T801;
	V480= list(2,VV[39],(V475));
	goto T800;
	goto T801;
T801:;
	if((V485!= VV[48]))goto T802;
	V480= list(2,VV[40],(V475));
	goto T800;
	goto T802;
T802:;
	V480= Cnil;}
	goto T800;
T800:;
	{register object x= (V480),V486= CMPcdr((V479));
	while(V486!=Cnil)
	if(equal(x,V486->c.c_car->c.c_car) &&V486->c.c_car != Cnil){
	V481= (V486->c.c_car);
	goto T803;
	}else V486=V486->c.c_cdr;
	V481= Cnil;}
	goto T803;
T803:;
	base[7]= (V479);
	base[8]= (V472);
	base[9]= VV[21];
	base[10]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk203)();
	vs_top=sup;
	V482= vs_base[0];
	V483= list(2,VV[53],VV[61]);
	if(((V479))!=Cnil){
	goto T810;}
	base[7]= VV[62];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	goto T810;
T810:;
	if(((V481))!=Cnil){
	goto T814;}
	V481= make_cons((V480),Cnil);
	{object V489;
	V489= make_cons(V481,CMPcdr(V479));
	(V479)->c.c_cdr = (V489);}
	goto T814;
T814:;
	{object V492;
	V492= make_cons(V483,CMPcdr(V481));
	(V481)->c.c_cdr = (V492);}
	{object V493= (V473);
	if((V493!= VV[46]))goto T824;
	{object V494 = list(6,VV[63],(V483),(V478),(V482),(V475),list(2,VV[57],(V477)));
	VMR34(V494)}
	goto T824;
T824:;
	if((V493!= VV[48]))goto T825;
	V495= list(2,VV[58],(V476));
	V496= make_cons(/* INLINE-ARGS */V495,Cnil);
	{object V497 = list(3,VV[0],/* INLINE-ARGS */V496,list(7,VV[64],(V483),(V478),(V482),(V475),list(2,VV[57],(V477)),VV[58]));
	VMR34(V497)}
	goto T825;
T825:;
	FEerror("The ECASE key value ~s is illegal.",1,V493);
	{object V498 = Cnil;
	VMR34(V498)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GF-CALL-INTERNAL	*/

static object LI37(V502,V503,V504)

register object V502;object V503;object V504;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(!(type_of((V502))==t_cons)){
	goto T826;}
	if(!((CMPcar((V502)))==(VV[42]))){
	goto T826;}
	V502= CMPcaddr((V502));
	goto T826;
T826:;{object V505;
	if(type_of((V502))==t_symbol){
	goto T834;}
	V505= Cnil;
	goto T833;
	goto T834;
T834:;
	{object V506;
	object V507;
	V508= (*(LnkLI195))(VV[43],(V502),(V504));
	V506= CMPcaddr(/* INLINE-ARGS */V508);
	if((V506)!=Cnil){
	V511= (V506);
	goto T839;}
	V511= (V502);
	goto T839;
T839:;
	V512 = (V503);
	{register object x= V511,V510= V512;
	while(V510!=Cnil)
	if(EQ(x,V510->c.c_car->c.c_car) &&V510->c.c_car != Cnil){
	V509= (V510->c.c_car);
	goto T838;
	}else V510=V510->c.c_cdr;
	V509= Cnil;}
	goto T838;
T838:;
	V507= CMPcar(V509);
	if(((V507))==Cnil){
	goto T841;}
	{object V513;
	V514= (*(LnkLI195))(VV[44],(V507),(V504));
	V513= CMPcaddr(/* INLINE-ARGS */V514);
	if(((V513))==Cnil){
	goto T845;}
	if(((V513))==(Ct)){
	goto T845;}
	base[3]= (V507);
	base[4]= (V503);
	base[5]= VV[65];
	base[6]= (VV[204]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk203)();
	vs_top=sup;
	V505= vs_base[0];
	goto T833;
	goto T845;
T845:;
	V505= Cnil;
	goto T833;}
	goto T841;
T841:;
	V505= Cnil;}
	goto T833;
T833:;
	if(V505==Cnil)goto T832;
	{object V515 = V505;
	VMR35(V515)}
	goto T832;
T832:;}
	base[0]= (V502);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T854;}
	{object V516;
	base[0]= (V502);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V516= vs_base[0];
	if(!(type_of((V516))==t_symbol)){
	goto T860;}
	{object V517 = (V516);
	VMR35(V517)}
	goto T860;
T860:;
	{object V518 = (VV[66]->s.s_dbind);
	VMR35(V518)}}
	goto T854;
T854:;
	{object V519 = (VV[66]->s.s_dbind);
	VMR35(V519)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GF-CALL	*/

static object LI38(V526,V527,V528,V529,V530,V531)

object V526;object V527;register object V528;object V529;object V530;object V531;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	if((CMPcar((V528)))==(VV[38])){
	goto T863;}
	{object V532;
	object V533;
	object V534;
	object V535;
	register object V536;
	register object V537;
	object V538;
	V532= CMPcdr((V528));
	V533= ((CMPcar((V528)))==(VV[38])?Ct:Cnil);
	V534= nthcdr(fix((V529)),(V532));
	base[7]= (V532);
	base[8]= (V534);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V535= vs_base[0];
	V539= CMPcar((V528));
	V540 = (V529);
	V541 = (V530);
	if(((V533))==Cnil){
	goto T876;}
	V545= (V532);
	goto T874;
	goto T876;
T876:;
	V545= (V535);
	goto T874;
T874:;
	{object V543;
	object V544= V545;
	if(V544==Cnil){
	V542= Cnil;
	goto T872;}
	base[7]=V543=MMcons(Cnil,Cnil);
	goto T873;
T873:;
	(V543->c.c_car)= (*(LnkLI205))((V544->c.c_car),(V526),(V531));
	if((V544=MMcdr(V544))==Cnil){
	V542= base[7];
	goto T872;}
	V543=MMcdr(V543)=MMcons(Cnil,Cnil);
	goto T873;}
	goto T872;
T872:;
	V536= list(4,/* INLINE-ARGS */V539,V540,V541,V542);
	{register object x= (V536),V547= (V527);
	while(V547!=Cnil)
	if(equal(x,V547->c.c_car->c.c_car) &&V547->c.c_car != Cnil){
	V537= (V547->c.c_car);
	goto T879;
	}else V547=V547->c.c_cdr;
	V537= Cnil;}
	goto T879;
T879:;
	V538= list(2,VV[53],VV[67]);
	base[7]= (VV[206]->s.s_gfdef);
	{object V548;
	V548= CMPcdr((V536));
	if(((V533))==Cnil){
	goto T888;}
	base[9]= (V548);
	base[10]= nthcdr(fix((V529)),(V548));
	vs_top=(vs_base=base+9)+2;
	Lldiff();
	vs_top=sup;
	base[8]= vs_base[0];
	goto T885;
	goto T888;
T888:;
	base[8]= (V548);}
	goto T885;
T885:;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk186)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T881;}
	{object V549 = Cnil;
	VMR36(V549)}
	goto T881;
T881:;
	if(((V537))!=Cnil){
	goto T892;}
	V537= make_cons((V536),Cnil);
	{object V552;
	V552= make_cons(V537,CMPcdr(V527));
	(V527)->c.c_cdr = (V552);}
	goto T892;
T892:;
	{object V555;
	V555= make_cons(V538,CMPcdr(V537));
	(V537)->c.c_cdr = (V555);}
	if(!((CMPcar((V536)))==(VV[38]))){
	goto T903;}
	{object V556 = listA(3,VV[68],list(3,VV[69],VV[70],(V538)),CMPcdr((V528)));
	VMR36(V556)}
	goto T903;
T903:;
	V557= list(2,VV[71],list(3,VV[69],VV[70],(V538)));
	V558= make_cons(/* INLINE-ARGS */V557,Cnil);
	V559 = (V535);
	if(((V530))==Cnil){
	goto T907;}
	V561= make_cons(VV[34],(V534));
	V560= make_cons(/* INLINE-ARGS */V561,Cnil);
	goto T905;
	goto T907;
T907:;
	V560= Cnil;
	goto T905;
T905:;
	{object V562 = list(3,VV[0],/* INLINE-ARGS */V558,listA(4,VV[72],VV[71],(V530),append(V559,V560)));
	VMR36(V562)}}
	goto T863;
T863:;
	{object V563 = Cnil;
	VMR36(V563)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PV-OFFSET	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V564=base[0]->c.c_cdr;
	if(endp(V564))invalid_macro_call();
	base[2]= (V564->c.c_car);
	V564=V564->c.c_cdr;
	if(!endp(V564))invalid_macro_call();}
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for INSTANCE-ACCESSOR-PARAMETER	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V565=base[0]->c.c_cdr;
	if(endp(V565))invalid_macro_call();
	base[2]= (V565->c.c_car);
	V565=V565->c.c_cdr;
	if(!endp(V565))invalid_macro_call();}
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for GENERATE-FAST-CLASS-SLOT-ACCESS-P	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V566;
	object V567;
	check_arg(2);
	V566=(base[0]);
	V567=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V568;
	object V569;
	base[2]= (V566);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T910;}
	V568= Cnil;
	goto T909;
	goto T910;
T910:;
	base[2]= (V566);
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V568= vs_base[0];
	goto T909;
T909:;
	base[2]= (V567);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T915;}
	V569= Cnil;
	goto T914;
	goto T915;
T915:;
	base[2]= (V567);
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V569= vs_base[0];
	goto T914;
T914:;
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T919;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T919;
T919:;
	base[2]= (V568);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T921;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T921;
T921:;
	if(((((V568))==((VV[52]->s.s_dbind))?Ct:Cnil))==Cnil){
	goto T924;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T924;
T924:;
	{object V570;
	V570= (*(LnkLI158))((V568),(V569));
	if((V570)==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[3]= (V570);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk208)(Lclptr208);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk201)(Lclptr201);
	return;}}
	}
}
/*	local entry for function SKIP-FAST-SLOT-ACCESS-P	*/

static object LI42(V574,V575,V576)

object V574;object V575;object V576;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{register object V577;
	object V578;
	base[0]= (V574);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T930;}
	V577= Cnil;
	goto T929;
	goto T930;
T930:;
	base[0]= (V574);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V577= vs_base[0];
	goto T929;
T929:;
	base[0]= (V575);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T935;}
	V578= Cnil;
	goto T934;
	goto T935;
T935:;
	base[0]= (V575);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V578= vs_base[0];
	goto T934;
T934:;
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T939;}
	{object V579 = Cnil;
	VMR40(V579)}
	goto T939;
T939:;
	base[0]= (V577);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T941;}
	{object V580 = Cnil;
	VMR40(V580)}
	goto T941;
T941:;
	if(((((V577))==((VV[52]->s.s_dbind))?Ct:Cnil))==Cnil){
	goto T944;}
	{object V581 = Cnil;
	VMR40(V581)}
	goto T944;
T944:;
	{object V582;
	V582= (*(LnkLI158))((V577),(V578));
	if((V582)==Cnil){
	{object V583 = Cnil;
	VMR40(V583)}}
	{object V584 = (*(LnkLI209))((V577),(V578),(V576));
	VMR40(V584)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SKIP-OPTIMIZE-SLOT-VALUE-BY-CLASS-P	*/

static object LI43(V588,V589,V590)

object V588;object V589;object V590;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V591;
	V591= (*(LnkLI158))((V588),(V589));
	if((V591)==Cnil){
	{object V592 = Cnil;
	VMR41(V592)}}
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T948;}
	{object V593 = Cnil;
	VMR41(V593)}
	goto T948;
T948:;
	base[0]= (V591);
	base[1]= (V590);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk159)(Lclptr159);
	vs_top=sup;
	V594= vs_base[0];
	{object V595 = ((V594)==Cnil?Ct:Cnil);
	VMR41(V595)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for INSTANCE-READ-INTERNAL	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V596=base[0]->c.c_cdr;
	if(endp(V596))invalid_macro_call();
	base[2]= (V596->c.c_car);
	V596=V596->c.c_cdr;
	if(endp(V596))invalid_macro_call();
	base[3]= (V596->c.c_car);
	V596=V596->c.c_cdr;
	if(endp(V596))invalid_macro_call();
	base[4]= (V596->c.c_car);
	V596=V596->c.c_cdr;
	if(endp(V596))invalid_macro_call();
	base[5]= (V596->c.c_car);
	V596=V596->c.c_cdr;
	if(endp(V596)){
	base[6]= Cnil;
	} else {
	base[6]= (V596->c.c_car);
	V596=V596->c.c_cdr;}
	if(!endp(V596))invalid_macro_call();}
	{register object x= base[6],V597= VV[73];
	while(V597!=Cnil)
	if(eql(x,V597->c.c_car)){
	goto T954;
	}else V597=V597->c.c_cdr;}
	base[7]= VV[74];
	base[8]= VV[75];
	base[9]= base[6];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	goto T954;
T954:;
	if(!((base[6])==(VV[76]))){
	goto T961;}
	vs_top=(vs_base=base+5)+1;
	return;
	goto T961;
T961:;
	{register object V598;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V598= vs_base[0];
	V600= list(2,(V598),list(3,VV[79],base[2],base[4]));
	V601= make_cons(/* INLINE-ARGS */V600,Cnil);
	V602 = (V598);
	if((base[6])==Cnil){
	goto T966;}
	if(!((base[6])==(VV[82]))){
	goto T967;}
	goto T966;
T966:;
	V604= list(2,VV[83],list(3,VV[84],base[3],(V598)));
	base[8]= make_cons(/* INLINE-ARGS */V604,Cnil);
	goto T965;
	goto T967;
T967:;
	base[8]= Cnil;
	goto T965;
T965:;
	if((base[6])==Cnil){
	goto T972;}
	if(!((base[6])==(VV[85]))){
	goto T973;}
	goto T972;
T972:;
	V605= list(2,VV[86],list(2,VV[87],(V598)));
	base[9]= make_cons(/* INLINE-ARGS */V605,Cnil);
	goto T971;
	goto T973;
T973:;
	base[9]= Cnil;
	goto T971;
T971:;
	V606= list(2,Ct,list(2,VV[57],(VV[88]->s.s_dbind)));
	base[10]= make_cons(/* INLINE-ARGS */V606,Cnil);
	vs_top=(vs_base=base+8)+3;
	Lappend();
	vs_top=sup;
	V603= vs_base[0];
	V607= list(3,VV[80],V598,listA(3,VV[81],V602,V603));
	base[8]= list(3,VV[77],VV[78],list(4,VV[0],/* INLINE-ARGS */V601,/* INLINE-ARGS */V607,list(4,VV[89],list(3,VV[9],V598,list(2,VV[57],(VV[88]->s.s_dbind))),base[5],V598)));
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	macro definition for INSTANCE-READ	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V608=base[0]->c.c_cdr;
	if(endp(V608))invalid_macro_call();
	base[2]= (V608->c.c_car);
	V608=V608->c.c_cdr;
	if(endp(V608))invalid_macro_call();
	base[3]= (V608->c.c_car);
	V608=V608->c.c_cdr;
	if(endp(V608))invalid_macro_call();
	base[4]= (V608->c.c_car);
	V608=V608->c.c_cdr;
	if(endp(V608))invalid_macro_call();
	base[5]= (V608->c.c_car);
	V608=V608->c.c_cdr;
	if(endp(V608))invalid_macro_call();
	base[6]= (V608->c.c_car);
	V608=V608->c.c_cdr;
	if(!endp(V608))invalid_macro_call();}
	if(((*(LnkLI210))(base[6],base[5],VV[39]))==Cnil){
	goto T979;}
	base[7]= list(3,VV[47],base[3],base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T979;
T979:;
	V609= (*(LnkLI211))(base[4]);
	V610 = base[2];
	V611= list(3,VV[47],base[3],base[5]);
	base[7]= base[6];
	base[8]= base[5];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T983;}
	V612= VV[85];
	goto T981;
	goto T983;
T983:;
	V612= VV[82];
	goto T981;
T981:;
	base[7]= list(6,VV[75],VV[70],/* INLINE-ARGS */V609,V610,/* INLINE-ARGS */V611,V612);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for INSTANCE-READER	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V613=base[0]->c.c_cdr;
	if(endp(V613))invalid_macro_call();
	base[2]= (V613->c.c_car);
	V613=V613->c.c_cdr;
	if(endp(V613))invalid_macro_call();
	base[3]= (V613->c.c_car);
	V613=V613->c.c_cdr;
	if(endp(V613))invalid_macro_call();
	base[4]= (V613->c.c_car);
	V613=V613->c.c_cdr;
	if(endp(V613))invalid_macro_call();
	base[5]= (V613->c.c_car);
	V613=V613->c.c_cdr;
	if(endp(V613))invalid_macro_call();
	base[6]= (V613->c.c_car);
	V613=V613->c.c_cdr;
	if(!endp(V613))invalid_macro_call();}
	V614= (*(LnkLI211))(base[4]);
	V615 = base[2];
	base[7]= list(6,VV[75],VV[70],/* INLINE-ARGS */V614,V615,list(2,base[5],list(2,VV[35],base[3])),VV[82]);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	macro definition for INSTANCE-WRITE-INTERNAL	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V616=base[0]->c.c_cdr;
	if(endp(V616))invalid_macro_call();
	base[2]= (V616->c.c_car);
	V616=V616->c.c_cdr;
	if(endp(V616))invalid_macro_call();
	base[3]= (V616->c.c_car);
	V616=V616->c.c_cdr;
	if(endp(V616))invalid_macro_call();
	base[4]= (V616->c.c_car);
	V616=V616->c.c_cdr;
	if(endp(V616))invalid_macro_call();
	base[5]= (V616->c.c_car);
	V616=V616->c.c_cdr;
	if(endp(V616))invalid_macro_call();
	base[6]= (V616->c.c_car);
	V616=V616->c.c_cdr;
	if(endp(V616)){
	base[7]= Cnil;
	} else {
	base[7]= (V616->c.c_car);
	V616=V616->c.c_cdr;}
	if(!endp(V616))invalid_macro_call();}
	{register object x= base[7],V617= VV[90];
	while(V617!=Cnil)
	if(eql(x,V617->c.c_car)){
	goto T988;
	}else V617=V617->c.c_cdr;}
	base[8]= VV[91];
	base[9]= VV[92];
	base[10]= base[7];
	vs_top=(vs_base=base+8)+3;
	Lerror();
	vs_top=sup;
	goto T988;
T988:;
	if(!((base[7])==(VV[76]))){
	goto T995;}
	vs_top=(vs_base=base+6)+1;
	return;
	goto T995;
T995:;
	{register object V618;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V618= vs_base[0];
	V619= list(2,(V618),list(3,VV[79],base[2],base[4]));
	V620= make_cons(/* INLINE-ARGS */V619,Cnil);
	V621 = (V618);
	if((base[7])==Cnil){
	goto T1000;}
	if(!((base[7])==(VV[82]))){
	goto T1001;}
	goto T1000;
T1000:;
	V623= list(2,VV[83],list(3,VV[37],list(3,VV[84],base[3],(V618)),base[5]));
	base[9]= make_cons(/* INLINE-ARGS */V623,Cnil);
	goto T999;
	goto T1001;
T1001:;
	base[9]= Cnil;
	goto T999;
T999:;
	if((base[7])==Cnil){
	goto T1006;}
	if(!((base[7])==(VV[85]))){
	goto T1007;}
	goto T1006;
T1006:;
	V624= list(2,VV[86],list(3,VV[37],list(2,VV[87],(V618)),base[5]));
	base[10]= make_cons(/* INLINE-ARGS */V624,Cnil);
	goto T1005;
	goto T1007;
T1007:;
	base[10]= Cnil;
	goto T1005;
T1005:;
	V625= list(2,Ct,base[6]);
	base[11]= make_cons(/* INLINE-ARGS */V625,Cnil);
	vs_top=(vs_base=base+9)+3;
	Lappend();
	vs_top=sup;
	V622= vs_base[0];
	base[9]= list(3,VV[77],VV[93],list(3,VV[0],/* INLINE-ARGS */V620,listA(3,VV[81],V621,V622)));
	vs_top=(vs_base=base+9)+1;
	return;}
}
/*	macro definition for INSTANCE-WRITE	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V626=base[0]->c.c_cdr;
	if(endp(V626))invalid_macro_call();
	base[2]= (V626->c.c_car);
	V626=V626->c.c_cdr;
	if(endp(V626))invalid_macro_call();
	base[3]= (V626->c.c_car);
	V626=V626->c.c_cdr;
	if(endp(V626))invalid_macro_call();
	base[4]= (V626->c.c_car);
	V626=V626->c.c_cdr;
	if(endp(V626))invalid_macro_call();
	base[5]= (V626->c.c_car);
	V626=V626->c.c_cdr;
	if(endp(V626))invalid_macro_call();
	base[6]= (V626->c.c_car);
	V626=V626->c.c_cdr;
	if(endp(V626))invalid_macro_call();
	base[7]= (V626->c.c_car);
	V626=V626->c.c_cdr;
	if(!endp(V626))invalid_macro_call();}
	if(((*(LnkLI210))(base[6],base[5],VV[40]))==Cnil){
	goto T1013;}
	base[8]= list(4,VV[49],base[3],base[5],base[7]);
	vs_top=(vs_base=base+8)+1;
	return;
	goto T1013;
T1013:;
	V627= (*(LnkLI211))(base[4]);
	V628 = base[2];
	V629 = base[7];
	V630= list(4,VV[49],base[3],base[5],base[7]);
	base[8]= base[6];
	base[9]= base[5];
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1017;}
	V631= VV[85];
	goto T1015;
	goto T1017;
T1017:;
	V631= VV[82];
	goto T1015;
T1015:;
	base[8]= list(7,VV[92],VV[70],/* INLINE-ARGS */V627,V628,V629,/* INLINE-ARGS */V630,V631);
	vs_top=(vs_base=base+8)+1;
	return;
}
/*	macro definition for INSTANCE-WRITER	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V632=base[0]->c.c_cdr;
	if(endp(V632))invalid_macro_call();
	base[2]= (V632->c.c_car);
	V632=V632->c.c_cdr;
	if(endp(V632))invalid_macro_call();
	base[3]= (V632->c.c_car);
	V632=V632->c.c_cdr;
	if(endp(V632))invalid_macro_call();
	base[4]= (V632->c.c_car);
	V632=V632->c.c_cdr;
	if(endp(V632))invalid_macro_call();
	base[5]= (V632->c.c_car);
	V632=V632->c.c_cdr;
	if(endp(V632))invalid_macro_call();
	base[6]= (V632->c.c_car);
	V632=V632->c.c_cdr;
	if(endp(V632))invalid_macro_call();
	base[7]= (V632->c.c_car);
	V632=V632->c.c_cdr;
	if(!endp(V632))invalid_macro_call();}
	V633= (*(LnkLI211))(base[4]);
	V634 = base[2];
	V635 = base[7];
	if(!(type_of(base[5])==t_cons)){
	goto T1023;}
	V636= (*(LnkLI213))(base[5]);
	goto T1021;
	goto T1023;
T1023:;
	V636= base[5];
	goto T1021;
T1021:;
	V637 = base[7];
	base[8]= list(7,VV[92],VV[70],/* INLINE-ARGS */V633,V634,V635,list(3,V636,list(2,VV[35],base[3]),V637),VV[82]);
	vs_top=(vs_base=base+8)+1;
	return;
}
/*	macro definition for INSTANCE-BOUNDP-INTERNAL	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V638=base[0]->c.c_cdr;
	if(endp(V638))invalid_macro_call();
	base[2]= (V638->c.c_car);
	V638=V638->c.c_cdr;
	if(endp(V638))invalid_macro_call();
	base[3]= (V638->c.c_car);
	V638=V638->c.c_cdr;
	if(endp(V638))invalid_macro_call();
	base[4]= (V638->c.c_car);
	V638=V638->c.c_cdr;
	if(endp(V638))invalid_macro_call();
	base[5]= (V638->c.c_car);
	V638=V638->c.c_cdr;
	if(endp(V638)){
	base[6]= Cnil;
	} else {
	base[6]= (V638->c.c_car);
	V638=V638->c.c_cdr;}
	if(!endp(V638))invalid_macro_call();}
	{register object x= base[6],V639= VV[94];
	while(V639!=Cnil)
	if(eql(x,V639->c.c_car)){
	goto T1026;
	}else V639=V639->c.c_cdr;}
	base[7]= VV[95];
	base[8]= VV[96];
	base[9]= base[6];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	goto T1026;
T1026:;
	if(!((base[6])==(VV[76]))){
	goto T1033;}
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1033;
T1033:;
	{register object V640;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V640= vs_base[0];
	V641= list(2,(V640),list(3,VV[79],base[2],base[4]));
	V642= make_cons(/* INLINE-ARGS */V641,Cnil);
	V643 = (V640);
	if((base[6])==Cnil){
	goto T1038;}
	if(!((base[6])==(VV[82]))){
	goto T1039;}
	goto T1038;
T1038:;
	V645= list(3,VV[84],base[3],(V640));
	V646= list(2,VV[83],list(2,VV[98],list(3,VV[9],/* INLINE-ARGS */V645,list(2,VV[57],(VV[88]->s.s_dbind)))));
	base[8]= make_cons(/* INLINE-ARGS */V646,Cnil);
	goto T1037;
	goto T1039;
T1039:;
	base[8]= Cnil;
	goto T1037;
T1037:;
	if((base[6])==Cnil){
	goto T1044;}
	if(!((base[6])==(VV[85]))){
	goto T1045;}
	goto T1044;
T1044:;
	V647= list(2,VV[87],(V640));
	V648= list(2,VV[86],list(2,VV[98],list(3,VV[9],/* INLINE-ARGS */V647,list(2,VV[57],(VV[88]->s.s_dbind)))));
	base[9]= make_cons(/* INLINE-ARGS */V648,Cnil);
	goto T1043;
	goto T1045;
T1045:;
	base[9]= Cnil;
	goto T1043;
T1043:;
	V649= list(2,Ct,base[5]);
	base[10]= make_cons(/* INLINE-ARGS */V649,Cnil);
	vs_top=(vs_base=base+8)+3;
	Lappend();
	vs_top=sup;
	V644= vs_base[0];
	base[8]= list(3,VV[77],VV[97],list(3,VV[0],/* INLINE-ARGS */V642,listA(3,VV[81],V643,V644)));
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	macro definition for INSTANCE-BOUNDP	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V650=base[0]->c.c_cdr;
	if(endp(V650))invalid_macro_call();
	base[2]= (V650->c.c_car);
	V650=V650->c.c_cdr;
	if(endp(V650))invalid_macro_call();
	base[3]= (V650->c.c_car);
	V650=V650->c.c_cdr;
	if(endp(V650))invalid_macro_call();
	base[4]= (V650->c.c_car);
	V650=V650->c.c_cdr;
	if(endp(V650))invalid_macro_call();
	base[5]= (V650->c.c_car);
	V650=V650->c.c_cdr;
	if(endp(V650))invalid_macro_call();
	base[6]= (V650->c.c_car);
	V650=V650->c.c_cdr;
	if(!endp(V650))invalid_macro_call();}
	if(((*(LnkLI210))(base[6],base[5],VV[41]))==Cnil){
	goto T1051;}
	base[7]= list(3,VV[51],base[3],base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T1051;
T1051:;
	V651= (*(LnkLI211))(base[4]);
	V652 = base[2];
	V653= list(3,VV[51],base[3],base[5]);
	base[7]= base[6];
	base[8]= base[5];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1055;}
	V654= VV[85];
	goto T1053;
	goto T1055;
T1055:;
	V654= VV[82];
	goto T1053;
T1053:;
	base[7]= list(6,VV[96],VV[70],/* INLINE-ARGS */V651,V652,/* INLINE-ARGS */V653,V654);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for SLOT-NAME-LISTS-FROM-SLOTS	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V655;
	object V656;
	check_arg(2);
	V655=(base[0]);
	V656=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V657;
	object V658;
	base[2]= (V655);
	base[3]= (V656);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk214)();
	if(vs_base>=vs_top){vs_top=sup;goto T1062;}
	V657= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1063;}
	V658= vs_base[0];
	vs_top=sup;
	goto T1064;
	goto T1062;
T1062:;
	V657= Cnil;
	goto T1063;
T1063:;
	V658= Cnil;
	goto T1064;
T1064:;
	{register object V659;
	object V660;
	{object V661;
	object V662= (V657);
	if(V662==Cnil){
	V659= Cnil;
	goto T1065;}
	base[4]=V661=MMcons(Cnil,Cnil);
	goto T1066;
T1066:;
	{object V665;
	object V666= CMPcdr((V662->c.c_car));
	if(V666==Cnil){
	V664= Cnil;
	goto T1068;}
	base[5]=V665=MMcons(Cnil,Cnil);
	goto T1069;
T1069:;
	(V665->c.c_car)= CMPcar((V666->c.c_car));
	if((V666=MMcdr(V666))==Cnil){
	V664= base[5];
	goto T1068;}
	V665=MMcdr(V665)=MMcons(Cnil,Cnil);
	goto T1069;}
	goto T1068;
T1068:;
	(V661->c.c_car)= make_cons(Cnil,V664);
	if((V662=MMcdr(V662))==Cnil){
	V659= base[4];
	goto T1065;}
	V661=MMcdr(V661)=MMcons(Cnil,Cnil);
	goto T1066;}
	goto T1065;
T1065:;
	{object V667;
	object V668= (V658);
	if(V668==Cnil){
	V660= Cnil;
	goto T1071;}
	base[4]=V667=MMcons(Cnil,Cnil);
	goto T1072;
T1072:;
	(V667->c.c_car)= CMPcar((V668->c.c_car));
	if((V668=MMcdr(V668))==Cnil){
	V660= base[4];
	goto T1071;}
	V667=MMcdr(V667)=MMcons(Cnil,Cnil);
	goto T1072;}
	goto T1071;
T1071:;
	{register object V669;
	object V670;
	V669= (V660);
	V670= CMPcar((V669));
	goto T1078;
T1078:;
	if(!(((V669))==Cnil)){
	goto T1079;}
	goto T1074;
	goto T1079;
T1079:;
	{register object V671;
	register object V672;
	V671= CMPcdr((V670));
	V672= CMPcar((V671));
	goto T1087;
T1087:;
	if(!(((V671))==Cnil)){
	goto T1088;}
	goto T1083;
	goto T1088;
T1088:;
	if(!(type_of((V672))==t_fixnum||type_of((V672))==t_bignum)){
	goto T1092;}
	{register object V673;
	register object V674;
	V673= nth(fix((V672)),(V659));
	V674= Ct;
	((V673))->c.c_car = (V674);}
	goto T1092;
T1092:;
	V671= CMPcdr((V671));
	V672= CMPcar((V671));
	goto T1087;}
	goto T1083;
T1083:;
	V669= CMPcdr((V669));
	V670= CMPcar((V669));
	goto T1078;}
	goto T1074;
T1074:;
	{object V675;
	object V676= (V659);
	if(V676==Cnil){
	V659= Cnil;
	goto T1109;}
	base[4]=V675=MMcons(Cnil,Cnil);
	goto T1110;
T1110:;
	if((CMPcar((V676->c.c_car)))!=Cnil){
	goto T1112;}
	if((CMPcdr((V676->c.c_car)))==Cnil){
	goto T1113;}
	goto T1112;
T1112:;
	(V675->c.c_car)= (V676->c.c_car);
	goto T1111;
	goto T1113;
T1113:;
	(V675->c.c_car)= Cnil;
	goto T1111;
T1111:;
	if((V676=MMcdr(V676))==Cnil){
	V659= base[4];
	goto T1109;}
	V675=MMcdr(V675)=MMcons(Cnil,Cnil);
	goto T1110;}
	goto T1109;
T1109:;
	{object V678;
	base[4]=VV[215]->s.s_gfdef;
	{object V679;
	{long V680;
	V680= -1;
	{object V681;
	object V682= (V659);
	if(V682==Cnil){
	V679= Cnil;
	goto T1119;}
	base[5]=V681=MMcons(Cnil,Cnil);
	goto T1121;
T1121:;
	if(((V682->c.c_car))==Cnil){
	goto T1124;}
	V680= (long)(V680)+(1);
	(V681->c.c_car)= CMPmake_fixnum(V680);
	goto T1122;
	goto T1124;
T1124:;
	(V681->c.c_car)= Cnil;
	goto T1122;
T1122:;
	if((V682=MMcdr(V682))==Cnil){
	V679= base[5];
	goto T1119;}
	V681=MMcdr(V681)=MMcons(Cnil,Cnil);
	goto T1121;}}
	goto T1119;
T1119:;
	 vs_top=base+5;
	 while(V679!=Cnil)
	 {vs_push((V679)->c.c_car);V679=(V679)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk215)();
	vs_top=sup;
	V678= vs_base[0];
	{object V684;
	object V685= (V660);
	if(V685==Cnil){
	V660= Cnil;
	goto T1127;}
	base[4]=V684=MMcons(Cnil,Cnil);
	goto T1128;
T1128:;
	V687= CMPcar((V685->c.c_car));
	{object V689;
	object V690= CMPcdr((V685->c.c_car));
	if(V690==Cnil){
	V688= Cnil;
	goto T1130;}
	base[5]=V689=MMcons(Cnil,Cnil);
	goto T1131;
T1131:;
	if(!(type_of((V690->c.c_car))==t_fixnum||type_of((V690->c.c_car))==t_bignum)){
	goto T1134;}
	(V689->c.c_car)= ((V678))->v.v_self[fix((V690->c.c_car))];
	goto T1132;
	goto T1134;
T1134:;
	(V689->c.c_car)= (V690->c.c_car);
	goto T1132;
T1132:;
	if((V690=MMcdr(V690))==Cnil){
	V688= base[5];
	goto T1130;}
	V689=MMcdr(V689)=MMcons(Cnil,Cnil);
	goto T1131;}
	goto T1130;
T1130:;
	(V684->c.c_car)= make_cons(/* INLINE-ARGS */V687,V688);
	if((V685=MMcdr(V685))==Cnil){
	V660= base[4];
	goto T1127;}
	V684=MMcdr(V684)=MMcons(Cnil,Cnil);
	goto T1128;}
	goto T1127;
T1127:;}
	base[4]= (V659);
	base[5]= (V660);
	vs_top=(vs_base=base+4)+2;
	return;}}
	}
}
/*	function definition for MUTATE-SLOTS-AND-CALLS	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V692;
	object V693;
	check_arg(2);
	V692=(base[0]);
	V693=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V694;
	object V695;
	register long V696;
	V694= (*(LnkLI216))((V692));
	V695= (*(LnkLI217))(CMPcdr((V693)));
	V696= 0;
	{object V697;
	object V698;
	V697= (V694);
	V698= CMPcar((V697));
	goto T1145;
T1145:;
	if(!(((V697))==Cnil)){
	goto T1146;}
	goto T1141;
	goto T1146;
T1146:;
	{register object V699;
	object V700;
	V699= CMPcdr((V698));
	V700= CMPcar((V699));
	goto T1154;
T1154:;
	if(!(((V699))==Cnil)){
	goto T1155;}
	goto T1150;
	goto T1155;
T1155:;
	V696= (long)(V696)+(1);
	{register object V701;
	register object V702;
	V701= CMPcdr((V700));
	V702= CMPcar((V701));
	goto T1165;
T1165:;
	if(!(((V701))==Cnil)){
	goto T1166;}
	goto T1161;
	goto T1166;
T1166:;
	{register object V704;
	V704= CMPmake_fixnum(V696);
	(CMPcdr(V702))->c.c_car = (V704);
	(void)(CMPcdr(V702));}
	V701= CMPcdr((V701));
	V702= CMPcar((V701));
	goto T1165;}
	goto T1161;
T1161:;
	V699= CMPcdr((V699));
	V700= CMPcar((V699));
	goto T1154;}
	goto T1150;
T1150:;
	V697= CMPcdr((V697));
	V698= CMPcar((V697));
	goto T1145;}
	goto T1141;
T1141:;
	{object V705;
	object V706;
	V705= (V695);
	V706= CMPcar((V705));
	goto T1192;
T1192:;
	if(!(((V705))==Cnil)){
	goto T1193;}
	goto T1188;
	goto T1193;
T1193:;
	V696= (long)(V696)+(1);
	{register object V707;
	object V708;
	V707= CMPcdr((V706));
	V708= CMPcar((V707));
	goto T1203;
T1203:;
	if(!(((V707))==Cnil)){
	goto T1204;}
	goto T1199;
	goto T1204;
T1204:;
	{object V710;
	V710= CMPmake_fixnum(V696);
	(CMPcdr(V708))->c.c_car = (V710);
	(void)(CMPcdr(V708));}
	V707= CMPcdr((V707));
	V708= CMPcar((V707));
	goto T1203;}
	goto T1199;
T1199:;
	V705= CMPcdr((V705));
	V706= CMPcar((V705));
	goto T1192;}
	goto T1188;
T1188:;
	base[2]= (V694);
	base[3]= (V695);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function SYMBOL-PKG-NAME	*/

static object LI54(V712)

object V712;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V713;
	base[0]= (V712);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V713= vs_base[0];
	if(((V713))==Cnil){
	goto T1226;}
	base[0]= (V713);
	vs_top=(vs_base=base+0)+1;
	Lpackage_name();
	vs_top=sup;
	{object V714 = vs_base[0];
	VMR52(V714)}
	goto T1226;
T1226:;
	{object V715 = VV[99];
	VMR52(V715)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SYMBOL-LESSP	*/

static object LI55(V718,V719)

object V718;object V719;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V718);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V720= vs_base[0];
	base[0]= (V719);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V721= vs_base[0];
	if(!((V720)==(V721))){
	goto T1230;}
	base[0]= symbol_name((V718));
	base[1]= symbol_name((V719));
	vs_top=(vs_base=base+0)+2;
	Lstring_lessp();
	vs_top=sup;
	{object V722 = vs_base[0];
	VMR53(V722)}
	goto T1230;
T1230:;
	base[0]= (*(LnkLI218))((V718));
	base[1]= (*(LnkLI218))((V719));
	vs_top=(vs_base=base+0)+2;
	Lstring_lessp();
	vs_top=sup;
	{object V723 = vs_base[0];
	VMR53(V723)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SYMBOL-OR-CONS-LESSP	*/

static object LI56(V726,V727)

register object V726;register object V727;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{register object V728;
	V728= (V726);
	if(!(type_of((V728))==t_symbol)){
	goto T1241;}
	{register object V729;
	V729= (V727);
	if(!(type_of((V729))==t_symbol)){
	goto T1244;}
	{object V730 = (*(LnkLI219))((V726),(V727));
	VMR54(V730)}
	goto T1244;
T1244:;
	if(!(type_of((V729))==t_cons)){
	goto T1247;}
	{object V731 = Ct;
	VMR54(V731)}
	goto T1247;
T1247:;
	base[1]= VV[100];
	base[2]= (V729);
	base[3]= VV[101];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk220)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V732 = vs_base[0];
	VMR54(V732)}}
	goto T1241;
T1241:;
	if(!(type_of((V728))==t_cons)){
	goto T1254;}
	{register object V733;
	V733= (V727);
	if(!(type_of((V733))==t_symbol)){
	goto T1257;}
	{object V734 = Cnil;
	VMR54(V734)}
	goto T1257;
T1257:;
	if(!(type_of((V733))==t_cons)){
	goto T1260;}
	if(!((CMPcar((V726)))==(CMPcar((V727))))){
	goto T1263;}
	V726= CMPcdr((V726));
	V727= CMPcdr((V727));
	goto TTL;
	goto T1263;
T1263:;
	V726= CMPcar((V726));
	V727= CMPcar((V727));
	goto TTL;
	goto T1260;
T1260:;
	base[1]= VV[100];
	base[2]= (V733);
	base[3]= VV[102];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk220)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V735 = vs_base[0];
	VMR54(V735)}}
	goto T1254;
T1254:;
	base[1]= VV[103];
	base[2]= (V728);
	base[3]= VV[104];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk220)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V736 = vs_base[0];
	VMR54(V736)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-SLOTS	*/

static object LI57(V738)

object V738;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V739;
	object V740= (V738);
	if(V740==Cnil){
	{object V741 = Cnil;
	VMR55(V741)}}
	base[0]=V739=MMcons(Cnil,Cnil);
	goto T1279;
T1279:;
	V743= CMPcar((V740->c.c_car));
	base[1]= CMPcdr((V740->c.c_car));
	base[2]= (VV[221]->s.s_gfdef);
	base[3]= VV[65];
	base[4]= (VV[204]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk222)();
	vs_top=sup;
	V744= vs_base[0];
	(V739->c.c_car)= make_cons(/* INLINE-ARGS */V743,V744);
	if((V740=MMcdr(V740))==Cnil){
	{object V745 = base[0];
	VMR55(V745)}}
	V739=MMcdr(V739)=MMcons(Cnil,Cnil);
	goto T1279;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-CALLS	*/

static object LI58(V747)

object V747;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= (V747);
	base[1]= (VV[221]->s.s_gfdef);
	base[2]= VV[65];
	base[3]= (VV[204]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk222)();
	vs_top=sup;
	{object V748 = vs_base[0];
	VMR56(V748)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PV-BINDING	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V749=base[0]->c.c_cdr;
	if(endp(V749))invalid_macro_call();
	{object V750= (V749->c.c_car);
	if(endp(V750))invalid_macro_call();
	base[2]= (V750->c.c_car);
	V750=V750->c.c_cdr;
	if(endp(V750))invalid_macro_call();
	base[3]= (V750->c.c_car);
	V750=V750->c.c_cdr;
	if(endp(V750))invalid_macro_call();
	base[4]= (V750->c.c_car);
	V750=V750->c.c_cdr;
	if(!endp(V750))invalid_macro_call();}
	V749=V749->c.c_cdr;
	base[5]= V749;}
	{object V751;
	object V752;
	{register object V753;
	register object V754;
	register object V755;
	register object V756;
	V753= Cnil;
	V754= Cnil;
	V755= Cnil;
	V756= Cnil;
	{register object V757;
	register object V758;
	register object V759;
	register object V760;
	register object V761;
	register object V762;
	V757= base[3];
	V758= Cnil;
	V759= base[2];
	V760= Cnil;
	V761= small_fixnum(0);
	V762= Cnil;
	goto T1303;
T1303:;
	{register object V763;
	if(!(((V757))==Cnil)){
	goto T1309;}
	goto T1295;
	goto T1309;
T1309:;
	V763= CMPcar((V757));
	V757= CMPcdr((V757));
	V758= (V763);}
	{register object V764;
	if(!(((V759))==Cnil)){
	goto T1317;}
	goto T1295;
	goto T1317;
T1317:;
	V764= CMPcar((V759));
	V759= CMPcdr((V759));
	V760= (V764);}
	{register object V765;
	V765= (V761);
	V761= number_plus((V761),small_fixnum(1));
	V762= (V765);}
	if(((V758))==Cnil){
	goto T1304;}
	{register object V766;
	V766= (V760);
	if(((V755))!=Cnil){
	goto T1329;}
	V756= make_cons((V766),Cnil);
	V755= (V756);
	goto T1327;
	goto T1329;
T1329:;
	V768= make_cons((V766),Cnil);
	((V756))->c.c_cdr = /* INLINE-ARGS */V768;
	V767= (V756);
	V756= CMPcdr(V767);}
	goto T1327;
T1327:;
	{register object V769;
	V769= (*(LnkLI211))((V762));
	if(((V753))!=Cnil){
	goto T1337;}
	V754= make_cons((V769),Cnil);
	V753= (V754);
	goto T1304;
	goto T1337;
T1337:;
	V771= make_cons((V769),Cnil);
	((V754))->c.c_cdr = /* INLINE-ARGS */V771;
	V770= (V754);
	V754= CMPcdr(V770);}
	goto T1304;
T1304:;
	goto T1303;}
	goto T1295;
T1295:;
	base[6]= (V753);
	base[7]= (V755);
	vs_top=(vs_base=base+6)+2;}
	if(vs_base>=vs_top){vs_top=sup;goto T1346;}
	V751= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1347;}
	V752= vs_base[0];
	vs_top=sup;
	goto T1348;
	goto T1346;
T1346:;
	V751= Cnil;
	goto T1347;
T1347:;
	V752= Cnil;
	goto T1348;
T1348:;
	base[6]= listA(3,VV[105],list(5,VV[70],VV[106],base[4],(V752),(V751)),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for PV-BINDING1	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V772=base[0]->c.c_cdr;
	if(endp(V772))invalid_macro_call();
	{object V773= (V772->c.c_car);
	if(endp(V773))invalid_macro_call();
	base[2]= (V773->c.c_car);
	V773=V773->c.c_cdr;
	if(endp(V773))invalid_macro_call();
	base[3]= (V773->c.c_car);
	V773=V773->c.c_cdr;
	if(endp(V773))invalid_macro_call();
	base[4]= (V773->c.c_car);
	V773=V773->c.c_cdr;
	if(endp(V773))invalid_macro_call();
	base[5]= (V773->c.c_car);
	V773=V773->c.c_cdr;
	if(endp(V773))invalid_macro_call();
	base[6]= (V773->c.c_car);
	V773=V773->c.c_cdr;
	if(!endp(V773))invalid_macro_call();}
	V772=V772->c.c_cdr;
	base[7]= V772;}
	V774= list(4,base[2],base[3],base[4],base[5]);
	{object V776;
	object V777= base[6];
	object V778= base[5];
	if(V777==Cnil||V778==Cnil){
	V775= Cnil;
	goto T1349;}
	base[8]=V776=MMcons(Cnil,Cnil);
	goto T1350;
T1350:;
	(V776->c.c_car)= list(2,(V777->c.c_car),list(2,VV[108],(V778->c.c_car)));
	if((V777=MMcdr(V777))==Cnil||(V778=MMcdr(V778))==Cnil){
	V775= base[8];
	goto T1349;}
	V776=MMcdr(V776)=MMcons(Cnil,Cnil);
	goto T1350;}
	goto T1349;
T1349:;
	V781 = base[7];
	base[8]= list(3,VV[107],/* INLINE-ARGS */V774,listA(3,VV[0],V775,V781));
	vs_top=(vs_base=base+8)+1;
	return;
}
/*	macro definition for PV-ENV	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V782=base[0]->c.c_cdr;
	if(endp(V782))invalid_macro_call();
	{object V783= (V782->c.c_car);
	if(endp(V783))invalid_macro_call();
	base[2]= (V783->c.c_car);
	V783=V783->c.c_cdr;
	if(endp(V783))invalid_macro_call();
	base[3]= (V783->c.c_car);
	V783=V783->c.c_cdr;
	if(endp(V783))invalid_macro_call();
	base[4]= (V783->c.c_car);
	V783=V783->c.c_cdr;
	if(endp(V783))invalid_macro_call();
	base[5]= (V783->c.c_car);
	V783=V783->c.c_cdr;
	if(!endp(V783))invalid_macro_call();}
	V782=V782->c.c_cdr;
	base[6]= V782;}
	V784= list(2,VV[110],base[4]);
	V785= list(2,VV[111],listA(3,VV[112],VV[110],base[5]));
	V786= list(2,base[2],VV[113]);
	V787= list(4,/* INLINE-ARGS */V784,/* INLINE-ARGS */V785,/* INLINE-ARGS */V786,list(2,base[3],VV[114]));
	V788= list(2,VV[115],(*(LnkLI223))(base[2]));
	V789= list(2,VV[115],(*(LnkLI224))(base[3]));
	if(!(type_of(base[4])==t_symbol)){
	goto T1355;}
	V791= list(2,VV[115],list(2,VV[116],base[4]));
	base[7]= make_cons(/* INLINE-ARGS */V791,Cnil);
	goto T1353;
	goto T1355;
T1355:;
	base[7]= Cnil;
	goto T1353;
T1353:;
	base[8]= list(2,base[2],base[3]);
	base[9]= base[6];
	vs_top=(vs_base=base+7)+3;
	Lappend();
	vs_top=sup;
	V790= vs_base[0];
	base[7]= listA(5,VV[109],/* INLINE-ARGS */V787,/* INLINE-ARGS */V788,/* INLINE-ARGS */V789,V790);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for SPLIT-DECLARATIONS	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	{object V792;
	object V793;
	check_arg(2);
	V792=(base[0]);
	V793=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V794;
	object V795;
	object V796;
	V794= Cnil;
	V795= Cnil;
	V796= Cnil;
	goto T1361;
T1361:;
	if(((V792))!=Cnil){
	goto T1363;}
	goto T1359;
	goto T1363;
T1363:;
	V796= CMPcar((V792));
	if(!(type_of((V796))==t_cons)){
	goto T1369;}
	if((CMPcar((V796)))==(VV[115])){
	goto T1368;}
	goto T1369;
T1369:;
	goto T1359;
	goto T1368;
T1368:;
	{object V797;
	register object V798;
	V797= CMPcdr((V796));
	V798= CMPcar((V797));
	goto T1377;
T1377:;
	if(!(((V797))==Cnil)){
	goto T1378;}
	goto T1373;
	goto T1378;
T1378:;
	if(!(type_of((V798))==t_cons)){
	goto T1382;}
	{register object V799;
	V799= CMPcar((V798));
	{register object x= (V799),V800= (VV[117]->s.s_dbind);
	while(V800!=Cnil)
	if(eql(x,V800->c.c_car)){
	goto T1388;
	}else V800=V800->c.c_cdr;
	goto T1387;}
	goto T1388;
T1388:;
	{object V801;
	V801= list(2,VV[115],(V798));
	V795= make_cons((V801),(V795));
	goto T1382;}
	goto T1387;
T1387:;
	{object V802;
	object V803;
	object V804;
	register object V805;
	register object V806;
	{register object x= (V799),V807= (VV[118]->s.s_dbind);
	while(V807!=Cnil)
	if(eql(x,V807->c.c_car)){
	V802= V807;
	goto T1391;
	}else V807=V807->c.c_cdr;
	V802= Cnil;}
	goto T1391;
T1391:;
	{register object x= (V799),V808= (VV[119]->s.s_dbind);
	while(V808!=Cnil)
	if(eql(x,V808->c.c_car)){
	V803= V808;
	goto T1392;
	}else V808=V808->c.c_cdr;
	V803= Cnil;}
	goto T1392;
T1392:;
	{object V810;
	V810= CMPcar((V798));
	V798= CMPcdr((V798));
	V809= (V810);}
	V804= make_cons(V809,Cnil);
	V805= Cnil;
	V806= Cnil;
	if(((V802))!=Cnil){
	goto T1398;}
	if(((V803))!=Cnil){
	goto T1398;}
	base[4]= VV[120];
	base[5]= (V799);
	base[6]= VV[121];
	base[7]= (V799);
	base[8]= VV[117];
	base[9]= VV[118];
	base[10]= VV[119];
	vs_top=(vs_base=base+4)+7;
	(void) (*Lnk225)();
	vs_top=sup;
	(VV[119]->s.s_dbind)= make_cons(V799,(VV[119]->s.s_dbind));
	goto T1398;
T1398:;
	if(((V802))==Cnil){
	goto T1412;}
	{object V813;
	V813= CMPcar((V798));
	V798= CMPcdr((V798));
	V812= (V813);}
	V814= make_cons(V812,Cnil);
	V804= append((V804),/* INLINE-ARGS */V814);
	goto T1412;
T1412:;
	{register object V815;
	register object V816;
	V815= (V798);
	V816= CMPcar((V815));
	goto T1424;
T1424:;
	if(!(((V815))==Cnil)){
	goto T1425;}
	goto T1420;
	goto T1425;
T1425:;
	{register object x= (V816),V817= (V793);
	while(V817!=Cnil)
	if(eql(x,V817->c.c_car)){
	goto T1432;
	}else V817=V817->c.c_cdr;
	goto T1431;}
	goto T1432;
T1432:;
	V806= make_cons(V816,(V806));
	goto T1429;
	goto T1431;
T1431:;
	V805= make_cons(V816,(V805));
	goto T1429;
T1429:;
	V815= CMPcdr((V815));
	V816= CMPcar((V815));
	goto T1424;}
	goto T1420;
T1420:;
	if(((V806))==Cnil){
	goto T1440;}
	{object V820;
	V820= list(2,VV[115],append((V804),(V806)));
	V795= make_cons((V820),(V795));}
	goto T1440;
T1440:;
	if(((V805))==Cnil){
	goto T1382;}
	{object V821;
	V821= list(2,VV[115],append((V804),(V805)));
	V794= make_cons((V821),(V794));}}}
	goto T1382;
T1382:;
	V797= CMPcdr((V797));
	V798= CMPcar((V797));
	goto T1377;}
	goto T1373;
T1373:;
	V792= CMPcdr((V792));
	goto T1361;
	goto T1359;
T1359:;
	base[2]= (V795);
	base[3]= (V794);
	base[4]= (V792);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function MAKE-METHOD-INITARGS-FORM-INTERNAL	*/

static object LI63(V825,V826,V827)

object V825;object V826;object V827;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	{object V828;
	object V829;
	object V830;
	V828= Cnil;
	V829= Cnil;
	V830= Cnil;
	if(!((3)==((long)length((V825))))){
	goto T1459;}
	V828= CMPcadr((V825));
	V831 = (V828);
	if(!((2)==((long)length(V831)))){
	goto T1459;}
	V829= CMPcaddr((V825));
	V832 = (V829);
	if(!(type_of(V832)==t_cons)){
	goto T1459;}
	if(!((VV[122])==(CMPcar((V829))))){
	goto T1459;}
	V833= CMPcar((V828));
	V830= CMPcadr((V829));
	V834 = (V830);
	if(!((/* INLINE-ARGS */V833)==(CMPcadr(V834)))){
	goto T1459;}
	if((CMPcadr((V828)))==(CMPcaddr((V830)))){
	goto T1460;}
	goto T1459;
T1459:;
	V835= list(2,VV[125],(V825));
	{object V836 = list(4,VV[123],VV[124],/* INLINE-ARGS */V835,list(2,VV[57],(V826)));
	VMR61(V836)}
	goto T1460;
T1460:;
	{object V837;
	register object V838;
	register object V839;
	register object V840;
	V837= CMPcar((V830));
	V838= small_fixnum(0);
	V839= Cnil;
	V840= Cnil;
	{register object V841;
	register object V842;
	V841= (V837);
	V842= CMPcar((V841));
	goto T1483;
T1483:;
	if(!(((V841))==Cnil)){
	goto T1484;}
	goto T1479;
	goto T1484;
T1484:;
	{register object x= (V842),V843= VV[126];
	while(V843!=Cnil)
	if(eql(x,V843->c.c_car)){
	goto T1490;
	}else V843=V843->c.c_cdr;
	goto T1488;}
	goto T1490;
T1490:;
	V839= Ct;
	goto T1479;
	goto T1488;
T1488:;
	if(!(((V842))==(VV[127]))){
	goto T1493;}
	goto T1479;
	goto T1493;
T1493:;
	V838= number_plus((V838),small_fixnum(1));
	{register object V844;
	V844= (V842);
	V840= make_cons((V844),(V840));}
	V841= CMPcdr((V841));
	V842= CMPcar((V841));
	goto T1483;}
	goto T1479;
T1479:;
	V840= nreverse((V840));
	{object V847;
	V847= make_cons((V838),(V839));
	{object V848;
	base[3]= (V826);
	base[4]= VV[128];
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	Lgetf();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V847);
	base[4]= VV[129];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V848= vs_base[0];
	{object V849;
	base[2]= (V826);
	base[3]= (V848);
	base[4]= VV[128];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V849= vs_base[0];
	V826= (V849);}}}
	{object V850 = (*(LnkLI226))((V826),CMPcddr((V829)),(V840),(V830),(V839));
	VMR61(V850)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-INITARGS-FORM-INTERNAL1	*/

static object LI64(V856,V857,V858,V859,V860)

object V856;object V857;register object V858;object V859;object V860;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{object V861;
	object V862;
	object V863;
	base[0]= (V857);
	base[1]= (V858);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	if(vs_base>=vs_top){vs_top=sup;goto T1527;}
	V861= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1528;}
	V862= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1529;}
	V863= vs_base[0];
	vs_top=sup;
	goto T1530;
	goto T1527;
T1527:;
	V861= Cnil;
	goto T1528;
T1528:;
	V862= Cnil;
	goto T1529;
T1529:;
	V863= Cnil;
	goto T1530;
T1530:;
	{object V864;
	object V865;
	if(((V860))==Cnil){
	goto T1533;}
	V864= VV[130];
	goto T1531;
	goto T1533;
T1533:;
	V864= Cnil;
	goto T1531;
T1531:;
	if(((V860))==Cnil){
	goto T1537;}
	V866= make_cons((V864),Cnil);
	V865= append((V858),/* INLINE-ARGS */V866);
	goto T1535;
	goto T1537;
T1537:;
	V865= (V858);
	goto T1535;
T1535:;
	V867= listA(3,VV[111],VV[133],(V865));
	V868= listA(5,CMPcar((V859)),VV[133],(V858),(V864),CMPcdddr((V859)));
	V869= list(3,VV[111],VV[133],list(3,VV[134],VV[135],listA(3,VV[136],/* INLINE-ARGS */V868,append((V862),(V863)))));
	V870= list(2,VV[125],listA(3,VV[132],/* INLINE-ARGS */V867,append((V861),/* INLINE-ARGS */V869)));
	{object V871 = list(4,VV[123],VV[131],/* INLINE-ARGS */V870,list(2,VV[57],(V856)));
	VMR62(V871)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-FROM-FAST-FUNCTION	*/

static object LI66(V873)

object V873;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]=MMcons((V873),Cnil);
	{object V874;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	V874= (VFUN_NARGS=2,(*(LnkLI227))((base[0]->c.c_car),VV[129]));
	base[4]= CMPcar((V874));
	base[4]=MMcons(base[4],base[2]);
	base[5]= CMPcdr((V874));
	base[5]=MMcons(base[5],base[4]);
	(base[1]->c.c_car)= 
	make_cclosure_new(LC74,Cnil,base[5],Cdata);
	{register object V875;
	object V876;
	V875= (VFUN_NARGS=2,(*(LnkLI227))((base[0]->c.c_car),VV[139]));{object V878;
	{object V879 =(CMPcar((V875)))->s.s_plist;
	 object ind= VV[140];
	while(V879!=Cnil){
	if(V879->c.c_car==ind){
	V878= (V879->c.c_cdr->c.c_car);
	goto T1549;
	}else V879=V879->c.c_cdr->c.c_cdr;}
	V878= Cnil;}
	goto T1549;
T1549:;
	if(V878==Cnil)goto T1548;
	V877= V878;
	goto T1547;
	goto T1548;
T1548:;}
	V880= CMPcar((V875));
	{object V882;
	V882= symbol_name(CMPcar((V875)));
	base[8]= VV[141];
	base[9]= (V882);
	base[10]= VV[142];
	base[11]= small_fixnum(5);
	vs_top=(vs_base=base+8)+4;
	Lstring_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1553;}
	base[9]= (V882);
	base[10]= small_fixnum(5);
	vs_top=(vs_base=base+9)+2;
	Lsubseq();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (VV[143]->s.s_dbind);
	vs_top=(vs_base=base+8)+2;
	Lintern();
	vs_top=sup;
	V881= vs_base[0];
	goto T1550;
	goto T1553;
T1553:;
	V881= CMPcar((V875));}
	goto T1550;
T1550:;
	V877= sputprop(/* INLINE-ARGS */V880,VV[140],V881);
	goto T1547;
T1547:;
	V876= make_cons(V877,CMPcdr((V875)));
	base[8]= (base[1]->c.c_car);
	base[9]= (V876);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk228)();
	vs_top=sup;}
	{object V883;
	V883= (base[1]->c.c_car);
	(void)((*(LnkLI229))((base[0]->c.c_car),(V883),VV[131]));}
	{object V885 = (base[1]->c.c_car);
	VMR63(V885)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD-FUNCTION-PV-CELL	*/

static object LI67(object V887,object V886,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB64 VMS64 VMV64
	{object V888;
	object V889;
	object V890;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V888= V887;
	V889= V886;
	narg = narg - 2;
	if (narg <= 0) goto T1566;
	else {
	V890= first;}
	--narg; goto T1567;
	goto T1566;
T1566:;
	V890= Cnil;
	goto T1567;
T1567:;
	{object V891;
	if((V890)!=Cnil){
	V891= (V890);
	goto T1569;}
	V891= (*(LnkLI230))((V888));
	goto T1569;
T1569:;
	if(((V891))==Cnil){
	goto T1571;}
	{object V892;
	V892= (*(LnkLI231))((V891),(V889));
	if(((V892))==Cnil){
	goto T1575;}
	{object V893 = (*(LnkLI232))((V891),(V892));
	VMR64(V893)}
	goto T1575;
T1575:;
	{object V894 = Cnil;
	VMR64(V894)}}
	goto T1571;
T1571:;
	{object V895 = Cnil;
	VMR64(V895)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function PV-TABLE-LOOKUP-PV-ARGS	*/

static object LI68(object V896,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB65 VMS65 VMV65
	{object V897;
	object V898;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V897= V896;
	narg= narg - 1;
	V899 = list_vector_new(narg,first,ap);
	V898= V899;
	V900 = (V897);
	V901= (VFUN_NARGS=1,(*(LnkLI233))((V898)));
	{object V902 = (*(LnkLI232))(V900,/* INLINE-ARGS */V901);
	VMR65(V902)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function PV-WRAPPERS-FROM-PV-ARGS	*/

static object LI69(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB66 VMS66 VMV66
	{object V903;
	va_start(ap,first);
	narg= narg - 0;
	V904 = list_vector_new(narg,first,ap);
	V903= V904;
	{long V905;
	object V906;
	register object V907;
	object V908;
	V905= (long)length((V903));
	base[1]= CMPmake_fixnum(V905);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V906= vs_base[0];
	V907= Cnil;
	V908= (V906);
	{register object V909;
	register object V910;
	V909= (V903);
	V910= CMPcar((V909));
	goto T1586;
T1586:;
	if(!(((V909))==Cnil)){
	goto T1587;}
	goto T1582;
	goto T1587;
T1587:;
	{register object V911;
	V911= (V910);
	if(type_of((V911))==t_structure){
	goto T1596;}
	goto T1594;
	goto T1596;
T1596:;
	if(!((((V911))->str.str_def)==(VV[145]))){
	goto T1594;}}
	V907= STREF(object,(V910),0);
	goto T1592;
	goto T1594;
T1594:;{object V912;
	V912= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V910);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk234)();
	vs_top=sup;
	V913= vs_base[0];
	if(!((V912)==(CMPcar(V913)))){
	goto T1599;}}
	V907= CMPcar(((V910))->cc.cc_turbo[13]);
	goto T1592;
	goto T1599;
T1599:;
	if(!(type_of((V910))==t_structure)){
	goto T1605;}
	V907= (*(LnkLI236))((V910));
	goto T1592;
	goto T1605;
T1605:;
	if(!(type_of((V910))==t_symbol)){
	goto T1608;}
	if(((V910))==Cnil){
	goto T1611;}
	V907= (VV[148]->s.s_dbind);
	goto T1592;
	goto T1611;
T1611:;
	V907= (VV[149]->s.s_dbind);
	goto T1592;
	goto T1608;
T1608:;
	V907= (*(LnkLI237))((V910));
	goto T1592;
T1592:;
	if((Ct)==(((V907))->v.v_self[8])){
	goto T1613;}
	V907= (*(LnkLI238))((V910));
	goto T1613;
T1613:;
	{register object V914;
	register object V915;
	V914= (V908);
	V915= (V907);
	((V914))->c.c_car = (V915);}
	V909= CMPcdr((V909));
	V910= CMPcar((V909));
	goto T1586;}
	goto T1582;
T1582:;
	V908= CMPcdr((V908));
	if(!((V905)==(1))){
	goto T1628;}
	V906= CMPcar((V906));
	goto T1628;
T1628:;
	{object V916 = (V906);
	VMR66(V916)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PV-WRAPPERS-FROM-ALL-ARGS	*/

static object LI70(V919,V920)

object V919;register object V920;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V921;
	object V922;
	V921= 0;
	V922= STREF(object,(V919),8);
	{register object V923;
	object V924;
	V923= (V922);
	V924= CMPcar((V923));
	goto T1638;
T1638:;
	if(!(((V923))==Cnil)){
	goto T1639;}
	goto T1634;
	goto T1639;
T1639:;
	if(((V924))==Cnil){
	goto T1643;}
	V921= (long)(V921)+(1);
	goto T1643;
T1643:;
	V923= CMPcdr((V923));
	V924= CMPcar((V923));
	goto T1638;}
	goto T1634;
T1634:;
	{object V925;
	register object V926;
	base[1]= CMPmake_fixnum(V921);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V925= vs_base[0];
	V926= (V925);
	{register object V927;
	object V928;
	V927= (V922);
	V928= CMPcar((V927));
	goto T1659;
T1659:;
	if(!(((V927))==Cnil)){
	goto T1660;}
	goto T1655;
	goto T1660;
T1660:;
	if(((V928))==Cnil){
	goto T1664;}
	{object V929;
	register object V930;
	V929= CMPcar((V920));
	V930= (*(LnkLI239))((V929));
	if(((V930))!=Cnil){
	goto T1669;}
	base[4]= VV[150];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T1669;
T1669:;
	{register object V932;
	V932= (V930);
	(V926)->c.c_car = (V932);}
	V926= CMPcdr((V926));}
	goto T1664;
T1664:;
	V920= CMPcdr((V920));
	V927= CMPcdr((V927));
	V928= CMPcar((V927));
	goto T1659;}
	goto T1655;
T1655:;
	if(!((V921)==(1))){
	goto T1684;}
	V925= CMPcar((V925));
	goto T1684;
T1684:;
	{object V933 = (V925);
	VMR67(V933)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PV-WRAPPERS-FROM-ALL-WRAPPERS	*/

static object LI71(V936,V937)

object V936;register object V937;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{long V938;
	object V939;
	V938= 0;
	V939= STREF(object,(V936),8);
	{register object V940;
	object V941;
	V940= (V939);
	V941= CMPcar((V940));
	goto T1694;
T1694:;
	if(!(((V940))==Cnil)){
	goto T1695;}
	goto T1690;
	goto T1695;
T1695:;
	if(((V941))==Cnil){
	goto T1699;}
	V938= (long)(V938)+(1);
	goto T1699;
T1699:;
	V940= CMPcdr((V940));
	V941= CMPcar((V940));
	goto T1694;}
	goto T1690;
T1690:;
	{object V942;
	register object V943;
	base[1]= CMPmake_fixnum(V938);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V942= vs_base[0];
	V943= (V942);
	{register object V944;
	object V945;
	V944= (V939);
	V945= CMPcar((V944));
	goto T1715;
T1715:;
	if(!(((V944))==Cnil)){
	goto T1716;}
	goto T1711;
	goto T1716;
T1716:;
	if(((V945))==Cnil){
	goto T1720;}
	{register object V946;
	V946= CMPcar((V937));
	if(((V946))!=Cnil){
	goto T1724;}
	base[2]= VV[151];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1724;
T1724:;
	{register object V948;
	V948= (V946);
	(V943)->c.c_car = (V948);}
	V943= CMPcdr((V943));}
	goto T1720;
T1720:;
	V937= CMPcdr((V937));
	V944= CMPcdr((V944));
	V945= CMPcar((V944));
	goto T1715;}
	goto T1711;
T1711:;
	if(!((V938)==(1))){
	goto T1739;}
	V942= CMPcar((V942));
	goto T1739;
T1739:;
	{object V949 = (V942);
	VMR68(V949)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC74(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{register object V950;
	object V951;
	check_arg(2);
	V950=(base[0]);
	V951=(base[1]);
	vs_top=sup;
	if(((base0[2]->c.c_car))!=Cnil){
	goto T1743;}
	(base0[2]->c.c_car)= (*(LnkLI230))((base0[4]->c.c_car));
	goto T1743;
T1743:;
	{object V952;
	register object V953;
	object V954;
	object V955;
	if(((base0[2]->c.c_car))==Cnil){
	goto T1749;}
	V952= (VFUN_NARGS=3,(*(LnkLI240))((base0[3]->c.c_car),(V950),(base0[2]->c.c_car)));
	goto T1747;
	goto T1749;
T1749:;
	V952= Cnil;
	goto T1747;
T1747:;
	V953= CMPcar((V951));
	V954= CMPcdr((V951));
	if(((V953))==Cnil){
	goto T1755;}
	if(type_of(V953)==t_structure){
	goto T1761;}
	goto T1759;
	goto T1761;
T1761:;
	if(!(((V953)->str.str_def)==(VV[144]))){
	goto T1759;}
	base[6]= (V953);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V956= vs_base[0];
	goto T1757;
	goto T1759;
T1759:;
	V956= (V953);
	goto T1757;
T1757:;
	V958= make_cons((V954),Cnil);
	V955= (VFUN_NARGS=4,(*(LnkLI241))(VV[124],V956,VV[138],/* INLINE-ARGS */V958));
	goto T1753;
	goto T1755;
T1755:;
	V955= Cnil;
	goto T1753;
T1753:;
	if(((base0[0]->c.c_car))==Cnil){
	goto T1765;}
	{object V959;
	object V960;
	V959= nthcdr(fix((base0[1]->c.c_car)),(V950));
	base[8]= (V950);
	base[9]= (V959);
	vs_top=(vs_base=base+8)+2;
	Lldiff();
	vs_top=sup;
	V960= vs_base[0];
	base[8]= (base0[4]->c.c_car);
	base[9]= (V952);
	base[10]= (V955);
	{object V961;
	V962= make_cons((V959),Cnil);
	V961= nconc((V960),/* INLINE-ARGS */V962);
	 vs_top=base+11;
	 while(V961!=Cnil)
	 {vs_push((V961)->c.c_car);V961=(V961)->c.c_cdr;}
	vs_base=base+9;}
	{object _funobj = base[8];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1765;
T1765:;
	base[6]= (base0[4]->c.c_car);
	base[7]= (V952);
	base[8]= (V955);
	{object V963;
	V963= (V950);
	 vs_top=base+9;
	 while(V963!=Cnil)
	 {vs_push((V963)->c.c_car);V963=(V963)->c.c_cdr;}
	vs_base=base+7;}
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC73(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	{object V964;
	object V965;
	check_arg(2);
	V964=(base[0]);
	V965=(base[1]);
	vs_top=sup;
	{object V967;
	V967= (*(LnkLI243))((V964),CMPcar((V965)),(base0[3]->c.c_car),(base0[1]->c.c_car),(base0[0]->c.c_car));
	(V965)->c.c_car = (V967);
	base[3]= (V967);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC72(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{object V968;
	register object V969;
	check_arg(2);
	V968=(base[0]);
	V969=(base[1]);
	vs_top=sup;
	base[2]= V968;
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	(base0[0]->c.c_car)= vs_base[0];
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function OUTER	*/

static void L9(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_check;
	{object V971;
	check_arg(1);
	V971=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V972;
	base[1]= (V971);
	base[2]= (VV[16]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V972= vs_base[0];
	if(V972==Cnil)goto T1784;
	base[1]= V972;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1784;
T1784:;}
	{object V974;
	object V975;
	V974= (VV[16]->s.s_dbind);
	{object V976;
	object V977;
	base[2]= CMPcdr((V971));
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V976= vs_base[0];
	V977= CMPcar((V971));
	base0[0]= Ct;
	V975= (VFUN_NARGS=4,(*(LnkLI244))(VV[17],(V976),VV[18],(V977)));}
	base[2]= V971;
	base[3]= (V974);
	base[4]= (V975);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	return;}
	}
}
/*	local function INNER	*/

static void L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	{object V978;
	check_arg(1);
	V978=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V979;
	base[1]= (V978);
	base[2]= (VV[15]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V979= vs_base[0];
	if(V979==Cnil)goto T1798;
	base[1]= V979;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1798;
T1798:;}
	{object V981;
	object V982;
	V981= (VV[15]->s.s_dbind);
	base[2]= (V978);
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V982= vs_base[0];
	base[2]= V978;
	base[3]= (V981);
	base[4]= (V982);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	return;}
	}
}
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[244],(void **)(void *)&LnkLI244,first,ap);va_end(ap);return V1;} /* MAKE-PV-TABLE */
static object  LnkTLI243(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[243],(void **)(void *)&LnkLI243,5,first,ap);va_end(ap);return V1;} /* UPDATE-SLOTS-IN-PV */
static void LnkT242(ptr) object *ptr;{ call_or_link_closure(VV[242],(void **)(void *)&Lnk242,(void **)(void *)&Lclptr242);} /* METHOD-FUNCTION */
static object  LnkTLI241(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[241],(void **)(void *)&LnkLI241,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-CALL */
static object  LnkTLI240(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[240],(void **)(void *)&LnkLI240,first,ap);va_end(ap);return V1;} /* GET-METHOD-FUNCTION-PV-CELL */
static object  LnkTLI239(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[239],(void **)(void *)&LnkLI239,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static object  LnkTLI238(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[238],(void **)(void *)&LnkLI238,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static object  LnkTLI237(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[237],(void **)(void *)&LnkLI237,1,first,ap);va_end(ap);return V1;} /* BUILT-IN-WRAPPER-OF */
static object  LnkTLI236(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[236],(void **)(void *)&LnkLI236,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FOR-STRUCTURE */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[235],(void **)(void *)&LnkLI235,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT234(){ call_or_link(VV[234],(void **)(void *)&Lnk234);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI233(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[233],(void **)(void *)&LnkLI233,first,ap);va_end(ap);return V1;} /* PV-WRAPPERS-FROM-PV-ARGS */
static object  LnkTLI232(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[232],(void **)(void *)&LnkLI232,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI231(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[231],(void **)(void *)&LnkLI231,2,first,ap);va_end(ap);return V1;} /* PV-WRAPPERS-FROM-ALL-ARGS */
static object  LnkTLI230(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[230],(void **)(void *)&LnkLI230,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PV-TABLE */
static object  LnkTLI229(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[229],(void **)(void *)&LnkLI229,3,first,ap);va_end(ap);return V1;} /* SETF PCL METHOD-FUNCTION-GET */
static void LnkT228(){ call_or_link(VV[228],(void **)(void *)&Lnk228);} /* SET-FUNCTION-NAME */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[227],(void **)(void *)&LnkLI227,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* SPLIT-DECLARATIONS */
static object  LnkTLI226(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[226],(void **)(void *)&LnkLI226,5,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-INITARGS-FORM-INTERNAL1 */
static void LnkT225(){ call_or_link(VV[225],(void **)(void *)&Lnk225);} /* WARN */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[224],(void **)(void *)&LnkLI224,1,first,ap);va_end(ap);return V1;} /* MAKE-CALLS-TYPE-DECLARATION */
static object  LnkTLI223(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[223],(void **)(void *)&LnkLI223,1,first,ap);va_end(ap);return V1;} /* MAKE-PV-TYPE-DECLARATION */
static void LnkT222(){ call_or_link(VV[222],(void **)(void *)&Lnk222);} /* SORT */
static void LnkT220(){ call_or_link(VV[220],(void **)(void *)&Lnk220);} /* TYPECASE-ERROR-STRING */
static object  LnkTLI219(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[219],(void **)(void *)&LnkLI219,2,first,ap);va_end(ap);return V1;} /* SYMBOL-LESSP */
static object  LnkTLI218(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[218],(void **)(void *)&LnkLI218,1,first,ap);va_end(ap);return V1;} /* SYMBOL-PKG-NAME */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[217],(void **)(void *)&LnkLI217,1,first,ap);va_end(ap);return V1;} /* SORT-CALLS */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[216],(void **)(void *)&LnkLI216,1,first,ap);va_end(ap);return V1;} /* SORT-SLOTS */
static void LnkT215(){ call_or_link(VV[215],(void **)(void *)&Lnk215);} /* VECTOR */
static void LnkT214(){ call_or_link(VV[214],(void **)(void *)&Lnk214);} /* MUTATE-SLOTS-AND-CALLS */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[213],(void **)(void *)&LnkLI213,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static void LnkT212(){ call_or_link(VV[212],(void **)(void *)&Lnk212);} /* GENERATE-FAST-CLASS-SLOT-ACCESS-P */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[211],(void **)(void *)&LnkLI211,1,first,ap);va_end(ap);return V1;} /* SLOT-VECTOR-SYMBOL */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[210],(void **)(void *)&LnkLI210,3,first,ap);va_end(ap);return V1;} /* SKIP-FAST-SLOT-ACCESS-P */
static object  LnkTLI209(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[209],(void **)(void *)&LnkLI209,3,first,ap);va_end(ap);return V1;} /* SKIP-OPTIMIZE-SLOT-VALUE-BY-CLASS-P */
static void LnkT208(ptr) object *ptr;{ call_or_link_closure(VV[208],(void **)(void *)&Lnk208,(void **)(void *)&Lclptr208);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT207(ptr) object *ptr;{ call_or_link_closure(VV[207],(void **)(void *)&Lnk207,(void **)(void *)&Lclptr207);} /* STANDARD-CLASS-P */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[205],(void **)(void *)&LnkLI205,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-GF-CALL-INTERNAL */
static void LnkT203(){ call_or_link(VV[203],(void **)(void *)&Lnk203);} /* POSITION */
static void LnkT202(ptr) object *ptr;{ call_or_link_closure(VV[202],(void **)(void *)&Lnk202,(void **)(void *)&Lclptr202);} /* SLOT-DEFINITION-DEFSTRUCT-ACCESSOR-SYMBOL */
static void LnkT201(ptr) object *ptr;{ call_or_link_closure(VV[201],(void **)(void *)&Lnk201,(void **)(void *)&Lclptr201);} /* CLASSP */
static object  LnkTLI200(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[200],(void **)(void *)&LnkLI200,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-ACCESSOR-CALL */
static object  LnkTLI199(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[199],(void **)(void *)&LnkLI199,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-INSTANCE-ACCESS */
static void LnkT198(ptr) object *ptr;{ call_or_link_closure(VV[198],(void **)(void *)&Lnk198,(void **)(void *)&Lclptr198);} /* CLASS-PRECEDENCE-LIST */
static void LnkT197(ptr) object *ptr;{ call_or_link_closure(VV[197],(void **)(void *)&Lnk197,(void **)(void *)&Lclptr197);} /* CLASS-FINALIZED-P */
static object  LnkTLI196(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[196],(void **)(void *)&LnkLI196,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI195(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[195],(void **)(void *)&LnkLI195,3,first,ap);va_end(ap);return V1;} /* VARIABLE-DECLARATION */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,1,first,ap);va_end(ap);return V1;} /* EXPAND-MAKE-INSTANCE-FORM */
static object  LnkTLI190(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[190],(void **)(void *)&LnkLI190,4,first,ap);va_end(ap);return V1;} /* OPTIMIZE-WRITER */
static object  LnkTLI188(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[188],(void **)(void *)&LnkLI188,4,first,ap);va_end(ap);return V1;} /* OPTIMIZE-READER */
static object  LnkTLI187(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[187],(void **)(void *)&LnkLI187,first,ap);va_end(ap);return V1;} /* CAN-OPTIMIZE-ACCESS1 */
static void LnkT186(){ call_or_link(VV[186],(void **)(void *)&Lnk186);} /* SOME */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[184],(void **)(void *)&LnkLI184,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static void LnkT183(ptr) object *ptr;{ call_or_link_closure(VV[183],(void **)(void *)&Lnk183,(void **)(void *)&Lclptr183);} /* GF-ARG-INFO */
static void LnkT182(ptr) object *ptr;{ call_or_link_closure(VV[182],(void **)(void *)&Lnk182,(void **)(void *)&Lclptr182);} /* GENERIC-FUNCTION-NAME */
static void LnkT181(ptr) object *ptr;{ call_or_link_closure(VV[181],(void **)(void *)&Lnk181,(void **)(void *)&Lclptr181);} /* GENERIC-FUNCTION-METHODS */
static void LnkT180(ptr) object *ptr;{ call_or_link_closure(VV[180],(void **)(void *)&Lnk180,(void **)(void *)&Lclptr180);} /* GENERIC-FUNCTION-P */
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,1,first,ap);va_end(ap);return V1;} /* UNENCAPSULATED-FDEFINITION */
static void LnkT178(){ call_or_link(VV[178],(void **)(void *)&Lnk178);} /* COERCE */
static object  LnkTLI177(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[177],(void **)(void *)&LnkLI177,first,ap);va_end(ap);return V1;} /* MAP-CACHE */
static object  LnkTLI176(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[176],(void **)(void *)&LnkLI176,2,first,ap);va_end(ap);return V1;} /* MAP-PV-TABLE-REFERENCES-OF */
static void LnkT175(ptr) object *ptr;{ call_or_link_closure(VV[175],(void **)(void *)&Lnk175,(void **)(void *)&Lclptr175);} /* CLASS-WRAPPER */
static object  LnkTLI174(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[174],(void **)(void *)&LnkLI174,2,first,ap);va_end(ap);return V1;} /* UPDATE-ALL-PV-TABLE-CACHES */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE */
static object  LnkTLI172(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[172],(void **)(void *)&LnkLI172,first,ap);va_end(ap);return V1;} /* FILL-CACHE */
static object  LnkTLI171(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[171],(void **)(void *)&LnkLI171,2,first,ap);va_end(ap);return V1;} /* COMPUTE-CALLS */
static object  LnkTLI170(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[170],(void **)(void *)&LnkLI170,2,first,ap);va_end(ap);return V1;} /* COMPUTE-PV */
static object  LnkTLI169(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[169],(void **)(void *)&LnkLI169,first,ap);va_end(ap);return V1;} /* PROBE-CACHE */
static void LnkT167(){ call_or_link(VV[167],(void **)(void *)&Lnk167);} /* COUNT */
static object  LnkTLI166(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[166],(void **)(void *)&LnkLI166,262148,first,ap);va_end(ap);return V1;} /* GET-CACHE */
static void LnkT165(){ call_or_link(VV[165],(void **)(void *)&Lnk165);} /* MAKE-ARRAY */
static object  LnkTLI164(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[164],(void **)(void *)&LnkLI164,1,first,ap);va_end(ap);return V1;} /* MAKE-PERMUTATION-VECTOR */
static object  LnkTLI163(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[163],(void **)(void *)&LnkLI163,5,first,ap);va_end(ap);return V1;} /* COMPUTE-PV-SLOT */
static void LnkT162(){ call_or_link(VV[162],(void **)(void *)&Lnk162);} /* ACCESSOR-VALUES1 */
static object  LnkTLI161(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[161],(void **)(void *)&LnkLI161,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT160(){ call_or_link(VV[160],(void **)(void *)&Lnk160);} /* OPTIMIZE-SLOT-VALUE-BY-CLASS-P */
static void LnkT159(ptr) object *ptr;{ call_or_link_closure(VV[159],(void **)(void *)&Lnk159,(void **)(void *)&Lclptr159);} /* SLOT-ACCESSOR-STD-P */
static object  LnkTLI158(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[158],(void **)(void *)&LnkLI158,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI157(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[157],(void **)(void *)&LnkLI157,3,first,ap);va_end(ap);return V1;} /* NOTE-PV-TABLE-REFERENCE */
static object  LnkTLI156(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[156],(void **)(void *)&LnkLI156,2,first,ap);va_end(ap);return V1;} /* MAKE-PV-TABLE-INTERNAL */
static object  LnkTLI152(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[152],(void **)(void *)&LnkLI152,257,first,ap);va_end(ap);return V1;} /* DEFAULT-LIMIT-FN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

