
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
	{long V5 = (long)(*(LnkLI167))((V4));
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
	V20= (*(LnkLI171))((V18),(V19));
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
	{object V28;
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
	{object V33;
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
	(void)((*(LnkLI172))((V36),V37,(V28)));
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
	{object V38;
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
	(void)((*(LnkLI172))((V39),V40,(V28)));
	V32= (long)(V32)+(1);
	V38= CMPcdr((V38));
	V39= CMPcar((V38));
	goto T58;}
	goto T54;
T54:;
	V41= Ct;
	STSET(fixnum,(V28),4, V32);
	(void)(V32);}
	goto T19;
T19:;
	{object V42 = (V28);
	VMR7(V42)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NOTE-PV-TABLE-REFERENCE	*/

static object LI10(V46,V47,V48)

object V46;object V47;object V48;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V49;
	base[0]= (V46);
	base[1]= (VV[19]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V49= vs_base[0];
	if(!(type_of((V49))==t_cons||((V49))==Cnil)){
	goto T75;}
	{object V50;
	{register object x= (V48),V51= (V49);
	while(V51!=Cnil)
	if(EQ(x,V51->c.c_car->c.c_car) &&V51->c.c_car != Cnil){
	V50= (V51->c.c_car);
	goto T78;
	}else V51=V51->c.c_cdr;
	V50= Cnil;}
	goto T78;
T78:;
	if(((V50))!=Cnil){
	goto T79;}
	if(!(((long)length((V49)))>(8))){
	goto T79;}
	{register object V52;
	base[0]= VV[20];
	base[1]= small_fixnum(16);
	base[2]= VV[21];
	base[3]= VV[9];
	vs_top=(vs_base=base+0)+4;
	Lmake_hash_table();
	vs_top=sup;
	V52= vs_base[0];
	{register object V53;
	register object V54;
	V53= (V49);
	V54= CMPcar((V53));
	goto T93;
T93:;
	if(!(((V53))==Cnil)){
	goto T94;}
	goto T89;
	goto T94;
T94:;
	{register object V55;
	register object V56;
	register object V57;
	V55= CMPcar((V54));
	V56= (V52);
	V57= CMPcdr((V54));
	base[3]= (V55);
	base[4]= (V56);
	base[5]= (V57);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V53= CMPcdr((V53));
	V54= CMPcar((V53));
	goto T93;}
	goto T89;
T89:;
	{object V59;
	V59= (VV[19]->s.s_dbind);
	base[0]= V46;
	base[1]= (V59);
	base[2]= V52;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}}
	goto T79;
T79:;
	if(!(type_of((V49))==t_cons||((V49))==Cnil)){
	goto T75;}
	if(((V50))!=Cnil){
	goto T118;}
	{object V61;
	V61= make_cons((V48),(V47));
	if(!(type_of((V49))==t_cons)){
	goto T122;}
	{object V64;
	V64= make_cons(V61,CMPcdr(V49));
	(V49)->c.c_cdr = (V64);
	goto T116;}
	goto T122;
T122:;
	{object V66;
	object V67;
	V66= (VV[19]->s.s_dbind);
	V67= make_cons((V61),Cnil);
	base[1]= V46;
	base[2]= (V66);
	base[3]= (V67);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	goto T116;}}
	goto T118;
T118:;
	{object V70;
	V70= make_cons(V47,CMPcdr(V50));
	(V50)->c.c_cdr = (V70);}
	goto T116;
T116:;
	{object V71 = Cnil;
	VMR8(V71)}}
	goto T75;
T75:;
	{object V72;
	base[0]= (V48);
	base[1]= (V49);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V72= vs_base[0];
	if(!(type_of((V72))==t_cons)){
	goto T137;}
	{object V75;
	V75= make_cons(V47,CMPcdr(V72));
	(V72)->c.c_cdr = (V75);
	goto T71;}
	goto T137;
T137:;
	{object V78;
	V78= make_cons((V47),Cnil);
	base[1]= V48;
	base[2]= V49;
	base[3]= (V78);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}}}
	goto T71;
T71:;
	{object V79 = Cnil;
	VMR8(V79)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-PV-TABLE-REFERENCES-OF	*/

static object LI11(V82,V83)

object V82;register object V83;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V84;
	base[0]= (V82);
	base[1]= (VV[19]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V84= vs_base[0];
	if(!(type_of((V84))==t_cons||((V84))==Cnil)){
	goto T150;}
	{register object V85;
	register object V86;
	V85= (V84);
	V86= CMPcar((V85));
	goto T155;
T155:;
	if(!(((V85))==Cnil)){
	goto T156;}
	goto T145;
	goto T156;
T156:;
	(void)((
	(type_of((V83)) == t_sfun ?(*(((V83))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V83))==t_vfun) ?
	(*(((V83))->sfn.sfn_self)):
	(fcall.fun=((V83)),fcalln))(CMPcar((V86)),CMPcdr((V86)))));
	V85= CMPcdr((V85));
	V86= CMPcar((V85));
	goto T155;}
	goto T150;
T150:;
	base[0]= (V83);
	base[1]= (V84);
	vs_top=(vs_base=base+0)+2;
	Lmaphash();
	vs_top=sup;}
	goto T145;
T145:;
	{object V87 = (V82);
	VMR9(V87)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for OPTIMIZE-SLOT-VALUE-BY-CLASS-P	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V88;
	object V89;
	object V90;
	check_arg(3);
	V88=(base[0]);
	V89=(base[1]);
	V90=(base[2]);
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
	{object V91;
	V91= (*(LnkLI173))((V88),(V89));
	if((V91)==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	base[3]= (V91);
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk174)(Lclptr174);
	return;}
	}
}
/*	local entry for function COMPUTE-PV-SLOT	*/

static object LI13(V97,V98,V99,V100,V101)

register object V97;object V98;object V99;object V100;object V101;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(!(type_of((V97))==t_symbol)){
	goto T174;}
	base[0]= (V99);
	base[1]= (V97);
	base[2]= VV[24];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk175)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T177;}{object V102;
	{register long V103;
	V103= 0;
	{register object V104;
	object V105;
	V104= ((V98))->v.v_self[9];
	V105= CMPcar((V104));
	goto T188;
T188:;
	if(!(((V104))==Cnil)){
	goto T189;}
	V102= Cnil;
	goto T183;
	goto T189;
T189:;
	if(!(((V97))==((V105)))){
	goto T193;}
	V102= CMPmake_fixnum(V103);
	goto T183;
	goto T193;
T193:;
	V103= (long)(V103)+(1);
	V104= CMPcdr((V104));
	V105= CMPcar((V104));
	goto T188;}}
	goto T183;
T183:;
	if(V102==Cnil)goto T182;
	{object V106 = V102;
	VMR11(V106)}
	goto T182;
T182:;}
	{object V107;
	{register object x= (V97),V108= (V100);
	while(V108!=Cnil)
	if(EQ(x,V108->c.c_car->c.c_car) &&V108->c.c_car != Cnil){
	V107= (V108->c.c_car);
	goto T203;
	}else V108=V108->c.c_cdr;
	V107= Cnil;}
	goto T203;
T203:;
	if(((V107))==Cnil){
	goto T205;}
	(V101)->c.c_car = Ct;
	{object V111 = (V107);
	VMR11(V111)}
	goto T205;
T205:;
	{object V112 = Cnil;
	VMR11(V112)}}
	goto T177;
T177:;
	{object V113 = Cnil;
	VMR11(V113)}
	goto T174;
T174:;
	if(!(type_of((V97))==t_cons)){
	goto T210;}
	{register object V114;
	register object V115;
	V114= VV[25];
	V115= CMPcar((V114));
	goto T215;
T215:;
	if(!(((V114))==Cnil)){
	goto T216;}
	{object V116 = Cnil;
	VMR11(V116)}
	goto T216;
T216:;
	if(!((CMPcar((V97)))==((V115)))){
	goto T220;}
	{object V117;
	object V118;
	register object V119;
	V117= CMPcadr((V97));
	V118= (*(LnkLI176))((V117));
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T227;}
	base[4]= (V118);
	base[5]= (V115);
	base[6]= (V99);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk177)();
	vs_top=sup;
	V119= vs_base[0];
	goto T225;
	goto T227;
T227:;
	V119= Cnil;
	goto T225;
T225:;
	if(!(type_of((V119))==t_cons)){
	goto T232;}
	{register object V121;
	V121= Ct;
	(V101)->c.c_car = (V121);}
	goto T232;
T232:;
	{object V122 = (V119);
	VMR11(V122)}}
	goto T220;
T220:;
	V114= CMPcdr((V114));
	V115= CMPcar((V114));
	goto T215;}
	goto T210;
T210:;
	{object V123 = Cnil;
	VMR11(V123)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-PV	*/

static object LI14(V126,V127)

object V126;object V127;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(type_of((V127))==t_cons||((V127))==Cnil){
	goto T242;}
	V127= make_cons((V127),Cnil);
	goto T242;
T242:;
	{object V128;
	object V129;
	V128= make_cons(Cnil,Cnil);
	{object V130;
	register object V131;
	V130= Cnil;
	V131= Cnil;
	{register object V132;
	object V133;
	V132= (V126);
	V133= Cnil;
	goto T254;
T254:;
	{object V134;
	if(!(((V132))==Cnil)){
	goto T260;}
	goto T250;
	goto T260;
T260:;
	V134= CMPcar((V132));
	V132= CMPcdr((V132));
	V133= (V134);}
	if(((V133))==Cnil){
	goto T255;}
	{register object V135;
	object V137;
	object V138;
	{object V139;
	V139= CMPcar((V127));
	V127= CMPcdr((V127));
	V135= (V139);}
	V137= ((V135))->v.v_self[11];
	if(Ct==Cnil){
	V138= Cnil;
	goto T271;}
	V138= ((V135))->v.v_self[10];
	goto T271;
T271:;
	{register object V140;
	register object V141;
	V140= CMPcdr((V133));
	V141= CMPcar((V140));
	goto T275;
T275:;
	if(!(((V140))==Cnil)){
	goto T276;}
	goto T255;
	goto T276;
T276:;
	{register object V142;
	if((Ct)==Cnil){
	goto T283;}
	V142= (*(LnkLI178))((V141),(V135),(V137),(V138),(V128));
	goto T281;
	goto T283;
T283:;
	V142= Cnil;
	goto T281;
T281:;
	if(((V130))!=Cnil){
	goto T286;}
	V131= make_cons((V142),Cnil);
	V130= (V131);
	goto T280;
	goto T286;
T286:;
	V144= make_cons((V142),Cnil);
	((V131))->c.c_cdr = /* INLINE-ARGS */V144;
	V143= (V131);
	V131= CMPcdr(V143);}
	goto T280;
T280:;
	V140= CMPcdr((V140));
	V141= CMPcar((V140));
	goto T275;}}
	goto T255;
T255:;
	goto T254;}
	goto T250;
T250:;
	V129= (V130);}
	if((CMPcar((V128)))==Cnil){
	goto T299;}
	V145= make_cons(Ct,(V129));
	{object V146 = (*(LnkLI179))(/* INLINE-ARGS */V145);
	VMR12(V146)}
	goto T299;
T299:;{object V147;
	base[2]= (V129);
	base[3]= (VV[26]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V147= vs_base[0];
	if(V147==Cnil)goto T301;
	{object V148 = V147;
	VMR12(V148)}
	goto T301;
T301:;}
	{object V150;
	object V151;
	V150= (VV[26]->s.s_dbind);
	V152= make_cons(Cnil,(V129));
	V151= (*(LnkLI179))(/* INLINE-ARGS */V152);
	base[3]= V129;
	base[4]= (V150);
	base[5]= (V151);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	{object V153 = vs_base[0];
	VMR12(V153)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-CALLS	*/

static object LI15(V156,V157)

object V156;object V157;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V158 = VV[27];
	VMR13(V158)}
	return Cnil;
}
/*	local entry for function MAKE-PERMUTATION-VECTOR	*/

static object LI16(V160)

object V160;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= CMPmake_fixnum((long)length((V160)));
	base[1]= VV[28];
	base[2]= (V160);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk180)();
	vs_top=sup;
	{object V161 = vs_base[0];
	VMR14(V161)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PV-TABLE-LOOKUP	*/

static object LI17(V164,V165)

register object V164;register object V165;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V166;
	object V167;
	register object V168;
	V166= STREF(object,(V164),8);
	V167= STREF(object,(V164),12);{object V169;
	V169= STREF(object,(V164),0);
	if(V169==Cnil)goto T316;
	V168= V169;
	goto T315;
	goto T316;
T316:;}
	V170 = CMPmake_fixnum((long)length((V166)));
	base[3]= Cnil;
	base[4]= (V166);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk182)();
	vs_top=sup;
	V171= vs_base[0];
	V172= number_minus(V170,V171);
	V173= (VV[183]->s.s_gfdef);
	V174= (*(LnkLI181))(/* INLINE-ARGS */V172,Ct,V173,2);
	V175= Ct;
	STSET(object,(V164),0, /* INLINE-ARGS */V174);
	V168= /* INLINE-ARGS */V174;
	goto T315;
T315:;{object V176;
	V176= (VFUN_NARGS=2,(*(LnkLI184))((V168),(V165)));
	if(V176==Cnil)goto T322;
	{object V177 = V176;
	VMR15(V177)}
	goto T322;
T322:;}
	{object V178;
	object V179;
	object V180;
	object V181;
	V178= (*(LnkLI185))((V166),(V165));
	V179= (*(LnkLI186))((V167),(V165));
	V180= make_cons((V178),(V179));
	V181= (VFUN_NARGS=3,(*(LnkLI187))((V168),(V165),(V180)));
	if(((V181))==((V168))){
	goto T328;}
	V182= Ct;
	STSET(object,(V164),0, (V181));
	(void)((V181));
	(void)((*(LnkLI188))((V168)));
	goto T328;
T328:;
	{object V183 = (V180);
	VMR15(V183)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-PV-TYPE-DECLARATION	*/

static object LI18(V185)

object V185;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V186 = list(3,VV[14],VV[29],(V185));
	VMR16(V186)}
	return Cnil;
}
/*	macro definition for PVREF	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V187=base[0]->c.c_cdr;
	if(endp(V187))invalid_macro_call();
	base[2]= (V187->c.c_car);
	V187=V187->c.c_cdr;
	if(endp(V187))invalid_macro_call();
	base[3]= (V187->c.c_car);
	V187=V187->c.c_cdr;
	if(!endp(V187))invalid_macro_call();}
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
	{object V188=base[0]->c.c_cdr;
	if(endp(V188))invalid_macro_call();
	base[2]= (V188->c.c_car);
	V188=V188->c.c_cdr;
	if(!endp(V188))invalid_macro_call();}
	base[3]= list(2,VV[31],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function MAKE-CALLS-TYPE-DECLARATION	*/

static object LI21(V190)

object V190;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V191 = list(3,VV[14],VV[29],(V190));
	VMR19(V191)}
	return Cnil;
}
/*	macro definition for CALLSREF	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
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
/*	local entry for function UPDATE-PV-TABLE-CACHE-INFO	*/

static object LI23(V194)

object V194;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V195;
	register object V196;
	V195= Cnil;
	V196= Cnil;
	{register object V197;
	register object V198;
	V197= (VV[32]->s.s_dbind);
	V198= CMPcar((V197));
	goto T336;
T336:;
	if(!(((V197))==Cnil)){
	goto T337;}
	goto T332;
	goto T337;
T337:;
	if(!((CMPcar((V198)))==((V194)))){
	goto T343;}
	{register object V199;
	V199= CMPcdr((V198));
	base[2]= (V199);
	base[3]= (V195);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	V195= vs_base[0];
	goto T341;}
	goto T343;
T343:;
	{register object V200;
	V200= (V198);
	V196= make_cons((V200),(V196));}
	goto T341;
T341:;
	V197= CMPcdr((V197));
	V198= CMPcar((V197));
	goto T336;}
	goto T332;
T332:;
	(VV[32]->s.s_dbind)= (V196);
	if(((V195))==Cnil){
	goto T359;}
	{object V201 = (*(LnkLI189))((V194),(V195));
	VMR21(V201)}
	goto T359;
T359:;
	{object V202 = Cnil;
	VMR21(V202)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-ALL-PV-TABLE-CACHES	*/

static object LI24(V205,V206)

object V205;object V206;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V208;
	object V209;
	object V210;
	base[5]= (V205);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk190)(Lclptr190);
	vs_top=sup;
	base[0]= vs_base[0];
	base[0]=MMcons(base[0],Cnil);
	if(Ct==Cnil){
	V208= Cnil;
	goto T363;}
	V208= ((base[0]->c.c_car))->v.v_self[10];
	goto T363;
T363:;
	V209= make_cons(Cnil,Cnil);
	{object V211;
	object V212= (V206);
	if(V212==Cnil){
	V210= Cnil;
	goto T365;}
	base[5]=V211=MMcons(Cnil,Cnil);
	goto T366;
T366:;
	if((Ct)==Cnil){
	goto T370;}
	V214= (*(LnkLI178))((V212->c.c_car),(base[0]->c.c_car),(V205),(V208),(V209));
	goto T368;
	goto T370;
T370:;
	V214= Cnil;
	goto T368;
T368:;
	(V211->c.c_car)= make_cons((V212->c.c_car),V214);
	if((V212=MMcdr(V212))==Cnil){
	V210= base[5];
	goto T365;}
	V211=MMcdr(V211)=MMcons(Cnil,Cnil);
	goto T366;}
	goto T365;
T365:;
	base[4]=MMcons(Cnil,base[0]);
	{object V215;
	object V216;
	V215= (V206);
	V216= CMPcar((V215));
	goto T376;
T376:;
	if(!(((V215))==Cnil)){
	goto T377;}
	goto T372;
	goto T377;
T377:;
	V217= 
	make_cclosure_new(LC72,Cnil,base[4],Cdata);
	(void)((*(LnkLI191))((V216),V217));
	V215= CMPcdr((V215));
	V216= CMPcar((V215));
	goto T376;}
	goto T372;
T372:;
	{object V218;
	object V219;
	V218= (base[4]->c.c_car);
	V219= CMPcar((V218));
	goto T391;
T391:;
	if(!(((V218))==Cnil)){
	goto T392;}
	{object V220 = Cnil;
	VMR22(V220)}
	goto T392;
T392:;
	{object V221;
	object V222;
	V221= STREF(object,(V219),0);
	V222= STREF(object,(V219),8);
	base[8]= CMPmake_fixnum((long)STREF(fixnum,(V219),4));
	base[8]=MMcons(base[8],base[4]);
	base[10]= (base[8]->c.c_car);
	base[11]= VV[33];
	base[12]= Cnil;
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk180)();
	vs_top=sup;
	base[9]= vs_base[0];
	base[9]=MMcons(base[9],base[8]);
	{register long V223;
	register long V224;
	V223= 1;
	V224= 0;
	{register object V225;
	object V226;
	V225= (V222);
	V226= CMPcar((V225));
	goto T410;
T410:;
	if(!(((V225))==Cnil)){
	goto T411;}
	goto T404;
	goto T411;
T411:;
	{register object V227;
	register object V228;
	V227= CMPcdr((V226));
	V228= CMPcar((V227));
	goto T419;
T419:;
	if(!(((V227))==Cnil)){
	goto T420;}
	goto T415;
	goto T420;
T420:;
	{register object V229;
	{register object x= (V228),V230= (V210);
	while(V230!=Cnil)
	if(eql(x,V230->c.c_car->c.c_car) &&V230->c.c_car != Cnil){
	V229= (V230->c.c_car);
	goto T425;
	}else V230=V230->c.c_cdr;
	V229= Cnil;}
	goto T425;
T425:;
	if((V229)==Cnil){
	V231= Cnil;
	goto T426;}
	V232 = CMPmake_fixnum(V224);
	V231= make_cons(V232,CMPcdr((V229)));
	goto T426;
T426:;
	(void)(((base[9]->c.c_car))->v.v_self[V223]= (V231));}
	V223= (long)(V223)+(1);
	V227= CMPcdr((V227));
	V228= CMPcar((V227));
	goto T419;}
	goto T415;
T415:;
	V224= (long)(V224)+(1);
	V225= CMPcdr((V225));
	V226= CMPcar((V225));
	goto T410;}}
	goto T404;
T404:;
	if(((V221))==Cnil){
	goto T396;}
	V233= 
	make_cclosure_new(LC73,Cnil,base[9],Cdata);
	(void)((VFUN_NARGS=2,(*(LnkLI192))(V233,(V221))));}
	goto T396;
T396:;
	V218= CMPcdr((V218));
	V219= CMPcar((V218));
	goto T391;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-SLOTS-IN-PV	*/

static object LI25(V239,V240,V241,V242,V243)

object V239;object V240;object V241;object V242;object V243;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(!(type_of((V239))!=t_cons)){
	goto T453;}
	if(((V241))==((V239))){
	goto T450;}
	goto T451;
	goto T453;
T453:;
	{register object V244;
	object V245;
	V244= (V239);
	V245= CMPcar((V244));
	goto T458;
T458:;
	if(!(((V244))==Cnil)){
	goto T459;}
	goto T451;
	goto T459;
T459:;
	if(!(((V245))==((V241)))){
	goto T463;}
	goto T450;
	goto T463;
T463:;
	V244= CMPcdr((V244));
	V245= CMPcar((V244));
	goto T458;}
	goto T451;
T451:;
	{object V246 = (V240);
	VMR23(V246)}
	goto T450;
T450:;
	{object V247;
	register object V248;
	object V249;
	{object V250= ((V240))->v.v_self[0];
	V247= (type_of(V250)==t_cons||(V250)==Cnil?Ct:Cnil);}
	if(((V247))==Cnil){
	goto T474;}
	base[2]= (V240);
	vs_top=(vs_base=base+2)+1;
	Lcopy_seq();
	vs_top=sup;
	V248= vs_base[0];
	goto T472;
	goto T474;
T474:;
	V248= (V240);
	goto T472;
T472:;
	V249= Ct;
	if(!(type_of((V239))!=t_cons)){
	goto T480;}
	{long V251;
	register long V252;
	V251= fix((V242));
	V252= 0;
	goto T485;
T485:;
	if(!((V252)>=(V251))){
	goto T486;}
	goto T478;
	goto T486;
T486:;
	{object V254;
	V254= ((V243))->v.v_self[V252];
	if(((V254))==Cnil){
	goto T495;}
	V253= ((V248))->v.v_self[V252]= (CMPcdr((V254)));
	goto T492;
	goto T495;
T495:;
	V253= ((V248))->v.v_self[V252];}
	goto T492;
T492:;
	if(!(type_of(V253)==t_cons)){
	goto T489;}
	V249= Cnil;
	goto T489;
T489:;
	V252= (long)(V252)+1;
	goto T485;}
	goto T480;
T480:;
	{long V255;
	V255= 0;
	{register object V256;
	object V257;
	V256= (V239);
	V257= CMPcar((V256));
	goto T505;
T505:;
	if(!(((V256))==Cnil)){
	goto T506;}
	goto T478;
	goto T506;
T506:;
	if(!(((V257))==((V241)))){
	goto T510;}
	{long V258;
	register long V259;
	V258= fix((V242));
	V259= 0;
	goto T516;
T516:;
	if(!((V259)>=(V258))){
	goto T517;}
	goto T510;
	goto T517;
T517:;
	{register object V261;
	V261= ((V243))->v.v_self[V259];
	if(((V261))==Cnil){
	goto T526;}
	V262= CMPcar((V261));
	V263 = CMPmake_fixnum(V255);
	if(!(number_compare(/* INLINE-ARGS */V262,V263)==0)){
	goto T526;}
	V260= ((V248))->v.v_self[V259]= (CMPcdr((V261)));
	goto T523;
	goto T526;
T526:;
	V260= ((V248))->v.v_self[V259];}
	goto T523;
T523:;
	if(!(type_of(V260)==t_cons)){
	goto T520;}
	V249= Cnil;
	goto T520;
T520:;
	V259= (long)(V259)+1;
	goto T516;}
	goto T510;
T510:;
	V255= (long)(V255)+(1);
	V256= CMPcdr((V256));
	V257= CMPcar((V256));
	goto T505;}}
	goto T478;
T478:;
	if(((V249))==Cnil){
	goto T541;}
	{object V264;
	base[2]= (V240);
	base[3]= VV[34];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V264= vs_base[0];{object V265;
	base[2]= CMPcdr((V264));
	base[3]= (VV[26]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V265= vs_base[0];
	if(V265==Cnil)goto T548;
	V248= V265;
	goto T544;
	goto T548;
T548:;}
	{object V266;
	object V267;
	object V268;
	V266= CMPcdr((V264));
	V267= (VV[26]->s.s_dbind);
	if(((V247))==Cnil){
	goto T556;}
	V268= (V248);
	goto T554;
	goto T556;
T556:;
	V268= (*(LnkLI179))((V264));
	goto T554;
T554:;
	base[4]= (V266);
	base[5]= (V267);
	base[6]= (V268);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;
	V248= vs_base[0];}}
	goto T544;
T544:;
	goto T541;
T541:;
	{object V269 = (V248);
	VMR23(V269)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EXPAND-ACCESSOR-FORM	*/

static object LI26(V274,V275,V276,V277)

register object V274;object V275;object V276;object V277;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V278;
	register object V279;
	V278= CMPcar((V274));
	if(!(type_of((V278))==t_symbol)){
	goto T564;}
	V279= (*(LnkLI194))((V278));
	goto T562;
	goto T564;
T564:;
	V279= (*(LnkLI176))((V278));
	goto T562;
T562:;
	if(!(type_of(CMPcadr((V274)))==t_cons)){
	goto T566;}
	if((VV[35])==(CMPcaadr((V274)))){
	goto T567;}
	goto T566;
T566:;
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T572;}
	base[2]= (V279);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk195)(Lclptr195);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T572;}
	{object V280;
	base[2]= (V279);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk196)(Lclptr196);
	vs_top=sup;
	V280= vs_base[0];
	if(((V280))==Cnil){
	goto T580;}
	{register object V281;
	object V282;
	object V283;
	object V284;
	object V285;
	base[7]= (V279);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk197)(Lclptr197);
	vs_top=sup;
	V281= vs_base[0];
	base[7]= (V279);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk198)(Lclptr198);
	vs_top=sup;
	V282= vs_base[0];
	V283= STREF(object,(V282),8);
	V284= CMPmake_fixnum((long)length((V283)));
	V285= (*(LnkLI199))((V282));
	if(((V285))!=Cnil){
	goto T590;}
	if(!(number_compare((V284),small_fixnum(1))==0)){
	goto T593;}
	base[7]= (VV[200]->s.s_gfdef);
	base[8]= (V280);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk201)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T596;}
	{object V286;
	V286= (VFUN_NARGS=3,(*(LnkLI202))(CMPcadr((V274)),(V275),(V277)));
	if(((V286))==Cnil){
	goto T602;}
	{object V287 = (*(LnkLI203))((V276),(V286),(V281),(V274));
	VMR24(V287)}
	goto T602;
T602:;
	{object V288 = Cnil;
	VMR24(V288)}}
	goto T596;
T596:;
	{object V289 = Cnil;
	VMR24(V289)}
	goto T593;
T593:;
	if(!(number_compare((V284),small_fixnum(2))==0)){
	goto T605;}
	if(!(type_of((V281))==t_cons)){
	goto T605;}
	if(!((CMPcar((V281)))==(VV[37]))){
	goto T605;}
	base[7]= (VV[204]->s.s_gfdef);
	base[8]= (V280);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk201)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T612;}
	{object V290;
	V290= (VFUN_NARGS=3,(*(LnkLI202))(CMPcaddr((V274)),(V275),(V277)));
	if(((V290))==Cnil){
	goto T618;}
	{object V291 = (*(LnkLI205))((V276),(V290),(V281),(V274));
	VMR24(V291)}
	goto T618;
T618:;
	{object V292 = Cnil;
	VMR24(V292)}}
	goto T612;
T612:;
	{object V293 = Cnil;
	VMR24(V293)}
	goto T605;
T605:;
	{object V294 = Cnil;
	VMR24(V294)}
	goto T590;
T590:;
	{object V295 = Cnil;
	VMR24(V295)}}
	goto T580;
T580:;
	{object V296 = Cnil;
	VMR24(V296)}}
	goto T572;
T572:;
	{object V297 = Cnil;
	VMR24(V297)}
	goto T567;
T567:;
	{object V298 = Cnil;
	VMR24(V298)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GENERIC-FUNCTION-CALL	*/

static object LI27(V304,V305,V306,V307,V308)

object V304;object V305;object V306;object V307;object V308;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;{object V309;
	if((CMPcar((V304)))==(VV[38])){
	goto T622;}
	V309= Cnil;
	goto T621;
	goto T622;
T622:;
	V309= (*(LnkLI206))((V304));
	goto T621;
T621:;
	if(V309==Cnil)goto T620;
	{object V310 = V309;
	VMR25(V310)}
	goto T620;
T620:;}
	{object V311 = (V304);
	VMR25(V311)}
	return Cnil;
}
/*	local entry for function CAN-OPTIMIZE-ACCESS	*/

static object LI28(V315,V316,V317)

object V315;object V316;object V317;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V318;
	object V319;
	object V320;
	{object V321;
	V321= CMPcar((V315));
	{object V322= (V321);
	if((V322!= VV[207]))goto T626;
	V318= VV[39];
	goto T624;
	goto T626;
T626:;
	if((V322!= VV[208]))goto T627;
	V318= VV[40];
	goto T624;
	goto T627;
T627:;
	if((V322!= VV[209]))goto T628;
	V318= VV[41];
	goto T624;
	goto T628;
T628:;
	base[0]= VV[42];
	base[1]= VV[43];
	base[2]= VV[44];
	base[3]= VV[45];
	base[4]= (V321);
	base[5]= VV[46];
	base[6]= VV[47];
	base[7]= VV[48];
	base[8]= VV[49];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk210)();
	vs_top=sup;
	V318= vs_base[0];}}
	goto T624;
T624:;
	V319= CMPcadr((V315));
	base[0]= CMPcaddr((V315));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V320= vs_base[0];
	{object V323 = (VFUN_NARGS=5,(*(LnkLI202))((V319),(V316),(V317),(V318),(V320)));
	VMR26(V323)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CAN-OPTIMIZE-ACCESS1	*/

static object LI29(object V326,object V325,object V324,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{register object V327;
	object V328;
	object V329;
	object V330;
	object V331;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V327= V326;
	V328= V325;
	V329= V324;
	narg = narg - 3;
	if (narg <= 0) goto T641;
	else {
	V330= first;}
	if (--narg <= 0) goto T642;
	else {
	V331= va_arg(ap,object);}
	--narg; goto T643;
	goto T641;
T641:;
	V330= Cnil;
	goto T642;
T642:;
	V331= Cnil;
	goto T643;
T643:;
	if(!(type_of((V327))==t_cons)){
	goto T646;}
	if(!((VV[50])==(CMPcar((V327))))){
	goto T646;}
	V327= CMPcaddr((V327));
	goto T646;
T646:;
	if(!(type_of((V327))==t_symbol)){
	goto T653;}
	{object V332;
	object V333;
	V334= (*(LnkLI211))(VV[51],(V327),(V329));
	V332= CMPcaddr(/* INLINE-ARGS */V334);
	if((V332)!=Cnil){
	V337= (V332);
	goto T658;}
	V337= (V327);
	goto T658;
T658:;
	{register object x= V337,V336= (V328);
	while(V336!=Cnil)
	if(x==(V336->c.c_car)){
	V335= V336;
	goto T657;
	}else V336=V336->c.c_cdr;
	V335= Cnil;}
	goto T657;
T657:;
	V333= CMPcar(V335);
	if(((V333))==Cnil){
	goto T660;}
	{register object V338;
	register object V339;
	V340= (*(LnkLI211))(VV[52],(V333),(V329));
	V338= CMPcaddr(/* INLINE-ARGS */V340);
	V339= (VFUN_NARGS=2,(*(LnkLI212))((V338),Cnil));
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T665;}
	if(((V339))==Cnil){
	goto T664;}
	base[4]= (V339);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk213)(Lclptr213);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T664;}
	goto T665;
T665:;
	V339= Cnil;
	goto T664;
T664:;
	if(((V338))==Cnil){
	goto T674;}
	if(((V338))==(Ct)){
	goto T674;}
	if(((V330))==Cnil){
	goto T678;}
	if(((V339))==Cnil){
	goto T678;}{object V342;
	V342= (VV[53]->s.s_dbind);
	base[4]= (V339);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk214)(Lclptr214);
	vs_top=sup;
	V343= vs_base[0];
	{register object x= V342,V341= V343;
	while(V341!=Cnil)
	if(x==(V341->c.c_car)){
	goto T685;
	}else V341=V341->c.c_cdr;
	goto T678;}}
	goto T685;
T685:;
	base[4]= (V339);
	base[5]= (V331);
	base[6]= (V330);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk175)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T679;}
	goto T678;
T678:;
	if((V339)!=Cnil){
	V344= (V339);
	goto T692;}
	V344= (V338);
	goto T692;
T692:;
	{object V345 = make_cons((V333),V344);
	VMR27(V345)}
	goto T679;
T679:;
	{object V346 = Cnil;
	VMR27(V346)}
	goto T674;
T674:;
	{object V347 = Cnil;
	VMR27(V347)}}
	goto T660;
T660:;
	{object V348 = Cnil;
	VMR27(V348)}}
	goto T653;
T653:;
	{object V349 = Cnil;
	VMR27(V349)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function OPTIMIZE-SLOT-VALUE	*/

static object LI30(V353,V354,V355)

object V353;object V354;object V355;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	if(((V354))==Cnil){
	goto T694;}
	{object V356;
	object V357;
	V356= Cnil;
	V357= Cnil;
	V357= (V355);
	V356= CMPcaddr((V357));
	{object V358;
	base[0]= (V356);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V358= vs_base[0];
	{object V359 = (*(LnkLI215))((V353),VV[54],(V354),(V358),Cnil);
	VMR28(V359)}}}
	goto T694;
T694:;
	{object V360 = make_cons(VV[55],CMPcdr((V355)));
	VMR28(V360)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-SET-SLOT-VALUE	*/

static object LI31(V364,V365,V366)

object V364;object V365;object V366;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((V365))==Cnil){
	goto T704;}
	{object V367;
	object V368;
	register object V369;
	V367= Cnil;
	V368= Cnil;
	V369= Cnil;
	V369= (V366);
	V369= CMPcddr((V369));
	{object V370;
	V370= CMPcar((V369));
	V369= CMPcdr((V369));
	V368= (V370);}
	V367= CMPcar((V369));
	{object V371;
	base[0]= (V368);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V371= vs_base[0];
	{object V372 = (*(LnkLI215))((V364),VV[56],(V365),(V371),(V367));
	VMR29(V372)}}}
	goto T704;
T704:;
	{object V373 = make_cons(VV[57],CMPcdr((V366)));
	VMR29(V373)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-SLOT-BOUNDP	*/

static object LI32(V377,V378,V379)

object V377;object V378;object V379;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V378))==Cnil){
	goto T722;}
	{object V380;
	object V381;
	register object V382;
	V380= Cnil;
	V381= Cnil;
	V382= Cnil;
	V382= (V379);
	V382= CMPcddr((V382));
	{object V383;
	V383= CMPcar((V382));
	V382= CMPcdr((V382));
	V381= (V383);}
	V380= CMPcar((V382));
	{object V384;
	base[0]= (V381);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V384= vs_base[0];
	{object V385 = (*(LnkLI215))((V377),VV[58],(V378),(V384),(V380));
	VMR30(V385)}}}
	goto T722;
T722:;
	{object V386 = make_cons(VV[59],CMPcdr((V379)));
	VMR30(V386)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-READER	*/

static object LI33(V391,V392,V393,V394)

object V391;object V392;object V393;object V394;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(((V392))==Cnil){
	goto T740;}
	{object V395 = (*(LnkLI216))((V391),VV[54],(V392),(V393),Cnil);
	VMR31(V395)}
	goto T740;
T740:;
	{object V396 = (V394);
	VMR31(V396)}
	return Cnil;
}
/*	local entry for function OPTIMIZE-WRITER	*/

static object LI34(V401,V402,V403,V404)

object V401;object V402;object V403;object V404;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(((V402))==Cnil){
	goto T743;}
	{object V405;
	object V406;
	V405= Cnil;
	V406= Cnil;
	V406= (V404);
	V405= CMPcaddr((V406));
	{object V407 = (*(LnkLI216))((V401),VV[56],(V402),(V403),(V405));
	VMR32(V407)}}
	goto T743;
T743:;
	{object V408 = (V404);
	VMR32(V408)}
	return Cnil;
}
/*	local entry for function OPTIMIZE-INSTANCE-ACCESS	*/

static object LI35(V414,V415,V416,V417,V418)

object V414;object V415;register object V416;register object V417;object V418;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V419;
	register object V420;
	if(!(type_of((V416))==t_cons)){
	goto T752;}
	V419= CMPcdr((V416));
	goto T750;
	goto T752;
T752:;
	V419= (VV[60]->s.s_dbind);
	goto T750;
T750:;
	if(!(type_of((V416))==t_cons)){
	goto T756;}
	V420= CMPcar((V416));
	goto T754;
	goto T756;
T756:;
	V420= (V416);
	goto T754;
T754:;
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T759;}
	base[0]= (V419);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T759;}{object V422;
	V422= (VV[53]->s.s_dbind);
	base[0]= (V419);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk214)(Lclptr214);
	vs_top=sup;
	V423= vs_base[0];
	{register object x= V422,V421= V423;
	while(V421!=Cnil)
	if(x==(V421->c.c_car)){
	goto T765;
	}else V421=V421->c.c_cdr;
	goto T759;}}
	goto T765;
T765:;
	{object V424;
	V424= (*(LnkLI173))((V419),(V417));
	{object V426= V415;
	if((V426!= VV[54]))goto T769;
	base[0]= (V424);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V427= vs_base[0];
	{object V428 = list(2,V427,(V420));
	VMR33(V428)}
	goto T769;
T769:;
	if((V426!= VV[56]))goto T772;
	base[0]= (V424);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V429= vs_base[0];
	{object V430 = list(3,VV[37],list(2,V429,(V420)),(V418));
	VMR33(V430)}
	goto T772;
T772:;
	if((V426!= VV[58]))goto T775;
	{object V431 = Ct;
	VMR33(V431)}
	goto T775;
T775:;
	base[0]= VV[42];
	base[1]= VV[43];
	base[2]= VV[44];
	base[3]= VV[45];
	base[4]= V415;
	base[5]= VV[46];
	base[6]= VV[61];
	base[7]= VV[48];
	base[8]= VV[62];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk210)();
	vs_top=sup;
	{object V432 = vs_base[0];
	VMR33(V432)}}}
	goto T759;
T759:;
	{register object V433;
	register object V434;
	object V435;
	register object V436;
	{register object x= (V420),V437= (V414);
	while(V437!=Cnil)
	if(EQ(x,V437->c.c_car->c.c_car) &&V437->c.c_car != Cnil){
	V433= (V437->c.c_car);
	goto T785;
	}else V437=V437->c.c_cdr;
	V433= Cnil;}
	goto T785;
T785:;
	{register object x= (V417),V438= CMPcdr((V433));
	while(V438!=Cnil)
	if(EQ(x,V438->c.c_car->c.c_car) &&V438->c.c_car != Cnil){
	V434= (V438->c.c_car);
	goto T786;
	}else V438=V438->c.c_cdr;
	V434= Cnil;}
	goto T786;
T786:;
	base[4]= (V433);
	base[5]= (V414);
	base[6]= VV[21];
	base[7]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk219)();
	vs_top=sup;
	V435= vs_base[0];
	V436= list(2,VV[63],VV[64]);
	if(((V433))!=Cnil){
	goto T793;}
	base[4]= VV[65];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T793;
T793:;
	if(((V434))!=Cnil){
	goto T797;}
	V434= make_cons((V417),Cnil);
	{object V441;
	V441= make_cons(V434,CMPcdr(V433));
	(V433)->c.c_cdr = (V441);}
	goto T797;
T797:;
	{object V444;
	V444= make_cons(V436,CMPcdr(V434));
	(V434)->c.c_cdr = (V444);}
	{object V446= V415;
	if((V446!= VV[54]))goto T807;
	V447= list(2,VV[67],(V417));
	{object V448 = list(6,VV[66],(V436),(V420),(V435),/* INLINE-ARGS */V447,list(2,VV[67],(V419)));
	VMR33(V448)}
	goto T807;
T807:;
	if((V446!= VV[56]))goto T808;
	V449= list(2,VV[68],(V418));
	V450= make_cons(/* INLINE-ARGS */V449,Cnil);
	V451= list(2,VV[67],(V417));
	{object V452 = list(3,VV[0],/* INLINE-ARGS */V450,list(7,VV[69],(V436),(V420),(V435),/* INLINE-ARGS */V451,list(2,VV[67],(V419)),VV[68]));
	VMR33(V452)}
	goto T808;
T808:;
	if((V446!= VV[58]))goto T809;
	V453= list(2,VV[67],(V417));
	{object V454 = list(6,VV[70],(V436),(V420),(V435),/* INLINE-ARGS */V453,list(2,VV[67],(V419)));
	VMR33(V454)}
	goto T809;
T809:;
	base[4]= VV[42];
	base[5]= VV[43];
	base[6]= VV[44];
	base[7]= VV[45];
	base[8]= V415;
	base[9]= VV[46];
	base[10]= VV[71];
	base[11]= VV[48];
	base[12]= VV[72];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk210)();
	vs_top=sup;
	{object V455 = vs_base[0];
	VMR33(V455)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-ACCESSOR-CALL	*/

static object LI36(V461,V462,V463,V464,V465)

object V461;object V462;register object V463;register object V464;object V465;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V466;
	object V467;
	register object V468;
	object V469;
	register object V470;
	object V471;
	object V472;
	if(!(type_of((V463))==t_cons)){
	goto T821;}
	V466= CMPcdr((V463));
	goto T819;
	goto T821;
T821:;
	V466= (VV[60]->s.s_dbind);
	goto T819;
T819:;
	if(!(type_of((V463))==t_cons)){
	goto T825;}
	V467= CMPcar((V463));
	goto T823;
	goto T825;
T825:;
	V467= (V463);
	goto T823;
T823:;
	{register object x= (V467),V473= (V461);
	while(V473!=Cnil)
	if(EQ(x,V473->c.c_car->c.c_car) &&V473->c.c_car != Cnil){
	V468= (V473->c.c_car);
	goto T827;
	}else V473=V473->c.c_cdr;
	V468= Cnil;}
	goto T827;
T827:;
	{object V474= (V462);
	if((V474!= VV[54]))goto T829;
	V469= list(2,VV[39],(V464));
	goto T828;
	goto T829;
T829:;
	if((V474!= VV[56]))goto T830;
	V469= list(2,VV[40],(V464));
	goto T828;
	goto T830;
T830:;
	V469= Cnil;}
	goto T828;
T828:;
	{register object x= (V469),V475= CMPcdr((V468));
	while(V475!=Cnil)
	if(equal(x,V475->c.c_car->c.c_car) &&V475->c.c_car != Cnil){
	V470= (V475->c.c_car);
	goto T831;
	}else V475=V475->c.c_cdr;
	V470= Cnil;}
	goto T831;
T831:;
	base[7]= (V468);
	base[8]= (V461);
	base[9]= VV[21];
	base[10]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk219)();
	vs_top=sup;
	V471= vs_base[0];
	V472= list(2,VV[63],VV[73]);
	if(((V468))!=Cnil){
	goto T838;}
	base[7]= VV[74];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	goto T838;
T838:;
	if(((V470))!=Cnil){
	goto T842;}
	V470= make_cons((V469),Cnil);
	{object V478;
	V478= make_cons(V470,CMPcdr(V468));
	(V468)->c.c_cdr = (V478);}
	goto T842;
T842:;
	{object V481;
	V481= make_cons(V472,CMPcdr(V470));
	(V470)->c.c_cdr = (V481);}
	{object V483= V462;
	if((V483!= VV[54]))goto T852;
	{object V484 = list(6,VV[75],(V472),(V467),(V471),(V464),list(2,VV[67],(V466)));
	VMR34(V484)}
	goto T852;
T852:;
	if((V483!= VV[56]))goto T853;
	V485= list(2,VV[68],(V465));
	V486= make_cons(/* INLINE-ARGS */V485,Cnil);
	{object V487 = list(3,VV[0],/* INLINE-ARGS */V486,list(7,VV[76],(V472),(V467),(V471),(V464),list(2,VV[67],(V466)),VV[68]));
	VMR34(V487)}
	goto T853;
T853:;
	base[7]= VV[42];
	base[8]= VV[43];
	base[9]= VV[44];
	base[10]= VV[45];
	base[11]= V462;
	base[12]= VV[46];
	base[13]= VV[77];
	base[14]= VV[48];
	base[15]= VV[78];
	vs_top=(vs_base=base+7)+9;
	(void) (*Lnk210)();
	vs_top=sup;
	{object V488 = vs_base[0];
	VMR34(V488)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GF-CALL-INTERNAL	*/

static object LI37(V492,V493,V494)

register object V492;object V493;object V494;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(!(type_of((V492))==t_cons)){
	goto T863;}
	if(!((CMPcar((V492)))==(VV[50]))){
	goto T863;}
	V492= CMPcaddr((V492));
	goto T863;
T863:;{object V495;
	if(type_of((V492))==t_symbol){
	goto T871;}
	V495= Cnil;
	goto T870;
	goto T871;
T871:;
	{object V496;
	object V497;
	V498= (*(LnkLI211))(VV[51],(V492),(V494));
	V496= CMPcaddr(/* INLINE-ARGS */V498);
	if((V496)!=Cnil){
	V501= (V496);
	goto T876;}
	V501= (V492);
	goto T876;
T876:;
	{register object x= V501,V500= (V493);
	while(V500!=Cnil)
	if(EQ(x,V500->c.c_car->c.c_car) &&V500->c.c_car != Cnil){
	V499= (V500->c.c_car);
	goto T875;
	}else V500=V500->c.c_cdr;
	V499= Cnil;}
	goto T875;
T875:;
	V497= CMPcar(V499);
	if(((V497))==Cnil){
	goto T878;}
	{object V502;
	V503= (*(LnkLI211))(VV[52],(V497),(V494));
	V502= CMPcaddr(/* INLINE-ARGS */V503);
	if(((V502))==Cnil){
	goto T882;}
	if(((V502))==(Ct)){
	goto T882;}
	base[3]= (V497);
	base[4]= (V493);
	base[5]= VV[79];
	base[6]= (VV[220]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk219)();
	vs_top=sup;
	V495= vs_base[0];
	goto T870;
	goto T882;
T882:;
	V495= Cnil;
	goto T870;}
	goto T878;
T878:;
	V495= Cnil;}
	goto T870;
T870:;
	if(V495==Cnil)goto T869;
	{object V504 = V495;
	VMR35(V504)}
	goto T869;
T869:;}
	base[0]= (V492);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T891;}
	{object V505;
	base[0]= (V492);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V505= vs_base[0];
	if(!(type_of((V505))==t_symbol)){
	goto T897;}
	{object V506 = (V505);
	VMR35(V506)}
	goto T897;
T897:;
	{object V507 = (VV[80]->s.s_dbind);
	VMR35(V507)}}
	goto T891;
T891:;
	{object V508 = (VV[80]->s.s_dbind);
	VMR35(V508)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GF-CALL	*/

static object LI38(V515,V516,V517,V518,V519,V520)

object V515;object V516;register object V517;object V518;object V519;object V520;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	if((CMPcar((V517)))==(VV[38])){
	goto T900;}
	{object V521;
	object V522;
	object V523;
	object V524;
	register object V525;
	register object V526;
	object V527;
	V521= CMPcdr((V517));
	V522= ((CMPcar((V517)))==(VV[38])?Ct:Cnil);
	V523= nthcdr(fix((V518)),(V521));
	base[7]= (V521);
	base[8]= (V523);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V524= vs_base[0];
	V528= CMPcar((V517));
	if(((V522))==Cnil){
	goto T913;}
	V532= (V521);
	goto T911;
	goto T913;
T913:;
	V532= (V524);
	goto T911;
T911:;
	{object V530;
	object V531= V532;
	if(V531==Cnil){
	V529= Cnil;
	goto T909;}
	base[7]=V530=MMcons(Cnil,Cnil);
	goto T910;
T910:;
	(V530->c.c_car)= (*(LnkLI221))((V531->c.c_car),(V515),(V520));
	if((V531=MMcdr(V531))==Cnil){
	V529= base[7];
	goto T909;}
	V530=MMcdr(V530)=MMcons(Cnil,Cnil);
	goto T910;}
	goto T909;
T909:;
	V525= list(4,/* INLINE-ARGS */V528,(V518),(V519),V529);
	{register object x= (V525),V534= (V516);
	while(V534!=Cnil)
	if(equal(x,V534->c.c_car->c.c_car) &&V534->c.c_car != Cnil){
	V526= (V534->c.c_car);
	goto T916;
	}else V534=V534->c.c_cdr;
	V526= Cnil;}
	goto T916;
T916:;
	V527= list(2,VV[63],VV[81]);
	base[7]= (VV[222]->s.s_gfdef);
	{object V535;
	V535= CMPcdr((V525));
	if(((V522))==Cnil){
	goto T925;}
	base[9]= (V535);
	base[10]= nthcdr(fix((V518)),(V535));
	vs_top=(vs_base=base+9)+2;
	Lldiff();
	vs_top=sup;
	base[8]= vs_base[0];
	goto T922;
	goto T925;
T925:;
	base[8]= (V535);}
	goto T922;
T922:;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk201)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T918;}
	{object V536 = Cnil;
	VMR36(V536)}
	goto T918;
T918:;
	if(((V526))!=Cnil){
	goto T929;}
	V526= make_cons((V525),Cnil);
	{object V539;
	V539= make_cons(V526,CMPcdr(V516));
	(V516)->c.c_cdr = (V539);}
	goto T929;
T929:;
	{object V542;
	V542= make_cons(V527,CMPcdr(V526));
	(V526)->c.c_cdr = (V542);}
	if(!((CMPcar((V525)))==(VV[38]))){
	goto T940;}
	{object V543 = listA(3,VV[82],list(3,VV[83],VV[84],(V527)),CMPcdr((V517)));
	VMR36(V543)}
	goto T940;
T940:;
	V544= list(2,VV[85],list(3,VV[83],VV[84],(V527)));
	V545= make_cons(/* INLINE-ARGS */V544,Cnil);
	if(((V519))==Cnil){
	goto T944;}
	V547= make_cons(VV[34],(V523));
	V546= make_cons(/* INLINE-ARGS */V547,Cnil);
	goto T942;
	goto T944;
T944:;
	V546= Cnil;
	goto T942;
T942:;
	{object V548 = list(3,VV[0],/* INLINE-ARGS */V545,listA(4,VV[86],VV[85],(V519),append((V524),V546)));
	VMR36(V548)}}
	goto T900;
T900:;
	{object V549 = Cnil;
	VMR36(V549)}
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
	{object V550=base[0]->c.c_cdr;
	if(endp(V550))invalid_macro_call();
	base[2]= (V550->c.c_car);
	V550=V550->c.c_cdr;
	if(!endp(V550))invalid_macro_call();}
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
	{object V551=base[0]->c.c_cdr;
	if(endp(V551))invalid_macro_call();
	base[2]= (V551->c.c_car);
	V551=V551->c.c_cdr;
	if(!endp(V551))invalid_macro_call();}
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for GENERATE-FAST-CLASS-SLOT-ACCESS-P	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V552;
	object V553;
	check_arg(2);
	V552=(base[0]);
	V553=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V554;
	object V555;
	base[2]= (V552);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T947;}
	V554= Cnil;
	goto T946;
	goto T947;
T947:;
	base[2]= (V552);
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V554= vs_base[0];
	goto T946;
T946:;
	base[2]= (V553);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T952;}
	V555= Cnil;
	goto T951;
	goto T952;
T952:;
	base[2]= (V553);
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V555= vs_base[0];
	goto T951;
T951:;
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T956;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T956;
T956:;
	base[2]= (V554);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T958;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T958;
T958:;
	if(((((V554))==((VV[60]->s.s_dbind))?Ct:Cnil))==Cnil){
	goto T961;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T961;
T961:;
	{object V556;
	V556= (*(LnkLI173))((V554),(V555));
	if((V556)==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[3]= (V556);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk224)(Lclptr224);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk217)(Lclptr217);
	return;}}
	}
}
/*	local entry for function SKIP-FAST-SLOT-ACCESS-P	*/

static object LI42(V560,V561,V562)

object V560;object V561;object V562;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{register object V563;
	object V564;
	base[0]= (V560);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T967;}
	V563= Cnil;
	goto T966;
	goto T967;
T967:;
	base[0]= (V560);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V563= vs_base[0];
	goto T966;
T966:;
	base[0]= (V561);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T972;}
	V564= Cnil;
	goto T971;
	goto T972;
T972:;
	base[0]= (V561);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V564= vs_base[0];
	goto T971;
T971:;
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T976;}
	{object V565 = Cnil;
	VMR40(V565)}
	goto T976;
T976:;
	base[0]= (V563);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T978;}
	{object V566 = Cnil;
	VMR40(V566)}
	goto T978;
T978:;
	if(((((V563))==((VV[60]->s.s_dbind))?Ct:Cnil))==Cnil){
	goto T981;}
	{object V567 = Cnil;
	VMR40(V567)}
	goto T981;
T981:;
	{object V568;
	V568= (*(LnkLI173))((V563),(V564));
	if((V568)==Cnil){
	{object V569 = Cnil;
	VMR40(V569)}}
	{object V570 = (*(LnkLI225))((V563),(V564),(V562));
	VMR40(V570)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SKIP-OPTIMIZE-SLOT-VALUE-BY-CLASS-P	*/

static object LI43(V574,V575,V576)

object V574;object V575;object V576;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V577;
	V577= (*(LnkLI173))((V574),(V575));
	if((V577)==Cnil){
	{object V578 = Cnil;
	VMR41(V578)}}
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T985;}
	{object V579 = Cnil;
	VMR41(V579)}
	goto T985;
T985:;
	base[0]= (V577);
	base[1]= (V576);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)(Lclptr174);
	vs_top=sup;
	V580= vs_base[0];
	{object V581 = ((V580)==Cnil?Ct:Cnil);
	VMR41(V581)}}
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
	{object V582=base[0]->c.c_cdr;
	if(endp(V582))invalid_macro_call();
	base[2]= (V582->c.c_car);
	V582=V582->c.c_cdr;
	if(endp(V582))invalid_macro_call();
	base[3]= (V582->c.c_car);
	V582=V582->c.c_cdr;
	if(endp(V582))invalid_macro_call();
	base[4]= (V582->c.c_car);
	V582=V582->c.c_cdr;
	if(endp(V582))invalid_macro_call();
	base[5]= (V582->c.c_car);
	V582=V582->c.c_cdr;
	if(endp(V582)){
	base[6]= Cnil;
	} else {
	base[6]= (V582->c.c_car);
	V582=V582->c.c_cdr;}
	if(!endp(V582))invalid_macro_call();}
	{register object x= base[6],V583= VV[87];
	while(V583!=Cnil)
	if(eql(x,V583->c.c_car)){
	goto T991;
	}else V583=V583->c.c_cdr;}
	base[7]= VV[88];
	base[8]= VV[89];
	base[9]= base[6];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	goto T991;
T991:;
	if(!((base[6])==(VV[90]))){
	goto T998;}
	vs_top=(vs_base=base+5)+1;
	return;
	goto T998;
T998:;
	{register object V584;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V584= vs_base[0];
	V586= list(2,(V584),list(3,VV[93],base[2],base[4]));
	V587= make_cons(/* INLINE-ARGS */V586,Cnil);
	if((base[6])==Cnil){
	goto T1003;}
	if(!((base[6])==(VV[96]))){
	goto T1004;}
	goto T1003;
T1003:;
	V589= list(2,VV[97],list(3,VV[98],base[3],(V584)));
	base[8]= make_cons(/* INLINE-ARGS */V589,Cnil);
	goto T1002;
	goto T1004;
T1004:;
	base[8]= Cnil;
	goto T1002;
T1002:;
	if((base[6])==Cnil){
	goto T1009;}
	if(!((base[6])==(VV[99]))){
	goto T1010;}
	goto T1009;
T1009:;
	V590= list(2,VV[100],list(2,VV[101],(V584)));
	base[9]= make_cons(/* INLINE-ARGS */V590,Cnil);
	goto T1008;
	goto T1010;
T1010:;
	base[9]= Cnil;
	goto T1008;
T1008:;
	V591= list(2,Ct,list(2,VV[67],(VV[102]->s.s_dbind)));
	base[10]= make_cons(/* INLINE-ARGS */V591,Cnil);
	vs_top=(vs_base=base+8)+3;
	Lappend();
	vs_top=sup;
	V588= vs_base[0];
	V592= list(3,VV[94],V584,listA(3,VV[95],(V584),V588));
	base[8]= list(3,VV[91],VV[92],list(4,VV[0],/* INLINE-ARGS */V587,/* INLINE-ARGS */V592,list(4,VV[103],list(3,VV[9],V584,list(2,VV[67],(VV[102]->s.s_dbind))),base[5],V584)));
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
	{object V593=base[0]->c.c_cdr;
	if(endp(V593))invalid_macro_call();
	base[2]= (V593->c.c_car);
	V593=V593->c.c_cdr;
	if(endp(V593))invalid_macro_call();
	base[3]= (V593->c.c_car);
	V593=V593->c.c_cdr;
	if(endp(V593))invalid_macro_call();
	base[4]= (V593->c.c_car);
	V593=V593->c.c_cdr;
	if(endp(V593))invalid_macro_call();
	base[5]= (V593->c.c_car);
	V593=V593->c.c_cdr;
	if(endp(V593))invalid_macro_call();
	base[6]= (V593->c.c_car);
	V593=V593->c.c_cdr;
	if(!endp(V593))invalid_macro_call();}
	if(((*(LnkLI226))(base[6],base[5],VV[39]))==Cnil){
	goto T1016;}
	base[7]= list(3,VV[55],base[3],base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T1016;
T1016:;
	V594= (*(LnkLI227))(base[4]);
	V595= list(3,VV[55],base[3],base[5]);
	base[7]= base[6];
	base[8]= base[5];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1020;}
	V596= VV[99];
	goto T1018;
	goto T1020;
T1020:;
	V596= VV[96];
	goto T1018;
T1018:;
	base[7]= list(6,VV[89],VV[84],/* INLINE-ARGS */V594,base[2],/* INLINE-ARGS */V595,V596);
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
	{object V597=base[0]->c.c_cdr;
	if(endp(V597))invalid_macro_call();
	base[2]= (V597->c.c_car);
	V597=V597->c.c_cdr;
	if(endp(V597))invalid_macro_call();
	base[3]= (V597->c.c_car);
	V597=V597->c.c_cdr;
	if(endp(V597))invalid_macro_call();
	base[4]= (V597->c.c_car);
	V597=V597->c.c_cdr;
	if(endp(V597))invalid_macro_call();
	base[5]= (V597->c.c_car);
	V597=V597->c.c_cdr;
	if(endp(V597))invalid_macro_call();
	base[6]= (V597->c.c_car);
	V597=V597->c.c_cdr;
	if(!endp(V597))invalid_macro_call();}
	V598= (*(LnkLI227))(base[4]);
	base[7]= list(6,VV[89],VV[84],/* INLINE-ARGS */V598,base[2],list(2,base[5],list(2,VV[35],base[3])),VV[96]);
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
	{object V599=base[0]->c.c_cdr;
	if(endp(V599))invalid_macro_call();
	base[2]= (V599->c.c_car);
	V599=V599->c.c_cdr;
	if(endp(V599))invalid_macro_call();
	base[3]= (V599->c.c_car);
	V599=V599->c.c_cdr;
	if(endp(V599))invalid_macro_call();
	base[4]= (V599->c.c_car);
	V599=V599->c.c_cdr;
	if(endp(V599))invalid_macro_call();
	base[5]= (V599->c.c_car);
	V599=V599->c.c_cdr;
	if(endp(V599))invalid_macro_call();
	base[6]= (V599->c.c_car);
	V599=V599->c.c_cdr;
	if(endp(V599)){
	base[7]= Cnil;
	} else {
	base[7]= (V599->c.c_car);
	V599=V599->c.c_cdr;}
	if(!endp(V599))invalid_macro_call();}
	{register object x= base[7],V600= VV[104];
	while(V600!=Cnil)
	if(eql(x,V600->c.c_car)){
	goto T1025;
	}else V600=V600->c.c_cdr;}
	base[8]= VV[105];
	base[9]= VV[106];
	base[10]= base[7];
	vs_top=(vs_base=base+8)+3;
	Lerror();
	vs_top=sup;
	goto T1025;
T1025:;
	if(!((base[7])==(VV[90]))){
	goto T1032;}
	vs_top=(vs_base=base+6)+1;
	return;
	goto T1032;
T1032:;
	{register object V601;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V601= vs_base[0];
	V602= list(2,(V601),list(3,VV[93],base[2],base[4]));
	V603= make_cons(/* INLINE-ARGS */V602,Cnil);
	if((base[7])==Cnil){
	goto T1037;}
	if(!((base[7])==(VV[96]))){
	goto T1038;}
	goto T1037;
T1037:;
	V605= list(2,VV[97],list(3,VV[37],list(3,VV[98],base[3],(V601)),base[5]));
	base[9]= make_cons(/* INLINE-ARGS */V605,Cnil);
	goto T1036;
	goto T1038;
T1038:;
	base[9]= Cnil;
	goto T1036;
T1036:;
	if((base[7])==Cnil){
	goto T1043;}
	if(!((base[7])==(VV[99]))){
	goto T1044;}
	goto T1043;
T1043:;
	V606= list(2,VV[100],list(3,VV[37],list(2,VV[101],(V601)),base[5]));
	base[10]= make_cons(/* INLINE-ARGS */V606,Cnil);
	goto T1042;
	goto T1044;
T1044:;
	base[10]= Cnil;
	goto T1042;
T1042:;
	V607= list(2,Ct,base[6]);
	base[11]= make_cons(/* INLINE-ARGS */V607,Cnil);
	vs_top=(vs_base=base+9)+3;
	Lappend();
	vs_top=sup;
	V604= vs_base[0];
	base[9]= list(3,VV[91],VV[107],list(3,VV[0],/* INLINE-ARGS */V603,listA(3,VV[95],(V601),V604)));
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
	if(endp(V608))invalid_macro_call();
	base[7]= (V608->c.c_car);
	V608=V608->c.c_cdr;
	if(!endp(V608))invalid_macro_call();}
	if(((*(LnkLI226))(base[6],base[5],VV[40]))==Cnil){
	goto T1050;}
	base[8]= list(4,VV[57],base[3],base[5],base[7]);
	vs_top=(vs_base=base+8)+1;
	return;
	goto T1050;
T1050:;
	V609= (*(LnkLI227))(base[4]);
	V610= list(4,VV[57],base[3],base[5],base[7]);
	base[8]= base[6];
	base[9]= base[5];
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1054;}
	V611= VV[99];
	goto T1052;
	goto T1054;
T1054:;
	V611= VV[96];
	goto T1052;
T1052:;
	base[8]= list(7,VV[106],VV[84],/* INLINE-ARGS */V609,base[2],base[7],/* INLINE-ARGS */V610,V611);
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
	{object V612=base[0]->c.c_cdr;
	if(endp(V612))invalid_macro_call();
	base[2]= (V612->c.c_car);
	V612=V612->c.c_cdr;
	if(endp(V612))invalid_macro_call();
	base[3]= (V612->c.c_car);
	V612=V612->c.c_cdr;
	if(endp(V612))invalid_macro_call();
	base[4]= (V612->c.c_car);
	V612=V612->c.c_cdr;
	if(endp(V612))invalid_macro_call();
	base[5]= (V612->c.c_car);
	V612=V612->c.c_cdr;
	if(endp(V612))invalid_macro_call();
	base[6]= (V612->c.c_car);
	V612=V612->c.c_cdr;
	if(endp(V612))invalid_macro_call();
	base[7]= (V612->c.c_car);
	V612=V612->c.c_cdr;
	if(!endp(V612))invalid_macro_call();}
	V613= (*(LnkLI227))(base[4]);
	if(!(type_of(base[5])==t_cons)){
	goto T1060;}
	V614= (*(LnkLI229))(base[5]);
	goto T1058;
	goto T1060;
T1060:;
	V614= base[5];
	goto T1058;
T1058:;
	base[8]= list(7,VV[106],VV[84],/* INLINE-ARGS */V613,base[2],base[7],list(3,V614,list(2,VV[35],base[3]),base[7]),VV[96]);
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
	{object V615=base[0]->c.c_cdr;
	if(endp(V615))invalid_macro_call();
	base[2]= (V615->c.c_car);
	V615=V615->c.c_cdr;
	if(endp(V615))invalid_macro_call();
	base[3]= (V615->c.c_car);
	V615=V615->c.c_cdr;
	if(endp(V615))invalid_macro_call();
	base[4]= (V615->c.c_car);
	V615=V615->c.c_cdr;
	if(endp(V615))invalid_macro_call();
	base[5]= (V615->c.c_car);
	V615=V615->c.c_cdr;
	if(endp(V615)){
	base[6]= Cnil;
	} else {
	base[6]= (V615->c.c_car);
	V615=V615->c.c_cdr;}
	if(!endp(V615))invalid_macro_call();}
	{register object x= base[6],V616= VV[108];
	while(V616!=Cnil)
	if(eql(x,V616->c.c_car)){
	goto T1063;
	}else V616=V616->c.c_cdr;}
	base[7]= VV[109];
	base[8]= VV[110];
	base[9]= base[6];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	goto T1063;
T1063:;
	if(!((base[6])==(VV[90]))){
	goto T1070;}
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1070;
T1070:;
	{register object V617;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V617= vs_base[0];
	V618= list(2,(V617),list(3,VV[93],base[2],base[4]));
	V619= make_cons(/* INLINE-ARGS */V618,Cnil);
	if((base[6])==Cnil){
	goto T1075;}
	if(!((base[6])==(VV[96]))){
	goto T1076;}
	goto T1075;
T1075:;
	V621= list(3,VV[98],base[3],(V617));
	V622= list(2,VV[97],list(2,VV[112],list(3,VV[9],/* INLINE-ARGS */V621,list(2,VV[67],(VV[102]->s.s_dbind)))));
	base[8]= make_cons(/* INLINE-ARGS */V622,Cnil);
	goto T1074;
	goto T1076;
T1076:;
	base[8]= Cnil;
	goto T1074;
T1074:;
	if((base[6])==Cnil){
	goto T1081;}
	if(!((base[6])==(VV[99]))){
	goto T1082;}
	goto T1081;
T1081:;
	V623= list(2,VV[101],(V617));
	V624= list(2,VV[100],list(2,VV[112],list(3,VV[9],/* INLINE-ARGS */V623,list(2,VV[67],(VV[102]->s.s_dbind)))));
	base[9]= make_cons(/* INLINE-ARGS */V624,Cnil);
	goto T1080;
	goto T1082;
T1082:;
	base[9]= Cnil;
	goto T1080;
T1080:;
	V625= list(2,Ct,base[5]);
	base[10]= make_cons(/* INLINE-ARGS */V625,Cnil);
	vs_top=(vs_base=base+8)+3;
	Lappend();
	vs_top=sup;
	V620= vs_base[0];
	base[8]= list(3,VV[91],VV[111],list(3,VV[0],/* INLINE-ARGS */V619,listA(3,VV[95],(V617),V620)));
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
	if(!endp(V626))invalid_macro_call();}
	if(((*(LnkLI226))(base[6],base[5],VV[41]))==Cnil){
	goto T1088;}
	base[7]= list(3,VV[59],base[3],base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T1088;
T1088:;
	V627= (*(LnkLI227))(base[4]);
	V628= list(3,VV[59],base[3],base[5]);
	base[7]= base[6];
	base[8]= base[5];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk228)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1092;}
	V629= VV[99];
	goto T1090;
	goto T1092;
T1092:;
	V629= VV[96];
	goto T1090;
T1090:;
	base[7]= list(6,VV[110],VV[84],/* INLINE-ARGS */V627,base[2],/* INLINE-ARGS */V628,V629);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for SLOT-NAME-LISTS-FROM-SLOTS	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V630;
	object V631;
	check_arg(2);
	V630=(base[0]);
	V631=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V632;
	object V633;
	base[2]= (V630);
	base[3]= (V631);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk230)();
	if(vs_base>=vs_top){vs_top=sup;goto T1099;}
	V632= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1100;}
	V633= vs_base[0];
	vs_top=sup;
	goto T1101;
	goto T1099;
T1099:;
	V632= Cnil;
	goto T1100;
T1100:;
	V633= Cnil;
	goto T1101;
T1101:;
	{register object V634;
	object V635;
	{object V636;
	object V637= (V632);
	if(V637==Cnil){
	V634= Cnil;
	goto T1102;}
	base[4]=V636=MMcons(Cnil,Cnil);
	goto T1103;
T1103:;
	{object V640;
	object V641= CMPcdr((V637->c.c_car));
	if(V641==Cnil){
	V639= Cnil;
	goto T1105;}
	base[5]=V640=MMcons(Cnil,Cnil);
	goto T1106;
T1106:;
	(V640->c.c_car)= CMPcar((V641->c.c_car));
	if((V641=MMcdr(V641))==Cnil){
	V639= base[5];
	goto T1105;}
	V640=MMcdr(V640)=MMcons(Cnil,Cnil);
	goto T1106;}
	goto T1105;
T1105:;
	(V636->c.c_car)= make_cons(Cnil,V639);
	if((V637=MMcdr(V637))==Cnil){
	V634= base[4];
	goto T1102;}
	V636=MMcdr(V636)=MMcons(Cnil,Cnil);
	goto T1103;}
	goto T1102;
T1102:;
	{object V642;
	object V643= (V633);
	if(V643==Cnil){
	V635= Cnil;
	goto T1108;}
	base[4]=V642=MMcons(Cnil,Cnil);
	goto T1109;
T1109:;
	(V642->c.c_car)= CMPcar((V643->c.c_car));
	if((V643=MMcdr(V643))==Cnil){
	V635= base[4];
	goto T1108;}
	V642=MMcdr(V642)=MMcons(Cnil,Cnil);
	goto T1109;}
	goto T1108;
T1108:;
	{register object V644;
	object V645;
	V644= (V635);
	V645= CMPcar((V644));
	goto T1115;
T1115:;
	if(!(((V644))==Cnil)){
	goto T1116;}
	goto T1111;
	goto T1116;
T1116:;
	{register object V646;
	register object V647;
	V646= CMPcdr((V645));
	V647= CMPcar((V646));
	goto T1124;
T1124:;
	if(!(((V646))==Cnil)){
	goto T1125;}
	goto T1120;
	goto T1125;
T1125:;
	if(!(type_of((V647))==t_fixnum||type_of((V647))==t_bignum)){
	goto T1129;}
	{register object V648;
	register object V649;
	V648= nth(fix((V647)),(V634));
	V649= Ct;
	((V648))->c.c_car = (V649);}
	goto T1129;
T1129:;
	V646= CMPcdr((V646));
	V647= CMPcar((V646));
	goto T1124;}
	goto T1120;
T1120:;
	V644= CMPcdr((V644));
	V645= CMPcar((V644));
	goto T1115;}
	goto T1111;
T1111:;
	{object V650;
	object V651= (V634);
	if(V651==Cnil){
	V634= Cnil;
	goto T1146;}
	base[4]=V650=MMcons(Cnil,Cnil);
	goto T1147;
T1147:;
	if((CMPcar((V651->c.c_car)))!=Cnil){
	goto T1149;}
	if((CMPcdr((V651->c.c_car)))==Cnil){
	goto T1150;}
	goto T1149;
T1149:;
	(V650->c.c_car)= (V651->c.c_car);
	goto T1148;
	goto T1150;
T1150:;
	(V650->c.c_car)= Cnil;
	goto T1148;
T1148:;
	if((V651=MMcdr(V651))==Cnil){
	V634= base[4];
	goto T1146;}
	V650=MMcdr(V650)=MMcons(Cnil,Cnil);
	goto T1147;}
	goto T1146;
T1146:;
	{object V653;
	base[4]=VV[231]->s.s_gfdef;
	{object V654;
	{long V655;
	V655= -1;
	{object V656;
	object V657= (V634);
	if(V657==Cnil){
	V654= Cnil;
	goto T1156;}
	base[5]=V656=MMcons(Cnil,Cnil);
	goto T1158;
T1158:;
	if(((V657->c.c_car))==Cnil){
	goto T1161;}
	V655= (long)(V655)+(1);
	(V656->c.c_car)= CMPmake_fixnum(V655);
	goto T1159;
	goto T1161;
T1161:;
	(V656->c.c_car)= Cnil;
	goto T1159;
T1159:;
	if((V657=MMcdr(V657))==Cnil){
	V654= base[5];
	goto T1156;}
	V656=MMcdr(V656)=MMcons(Cnil,Cnil);
	goto T1158;}}
	goto T1156;
T1156:;
	 vs_top=base+5;
	 while(V654!=Cnil)
	 {vs_push((V654)->c.c_car);V654=(V654)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk231)();
	vs_top=sup;
	V653= vs_base[0];
	{object V659;
	object V660= (V635);
	if(V660==Cnil){
	V635= Cnil;
	goto T1164;}
	base[4]=V659=MMcons(Cnil,Cnil);
	goto T1165;
T1165:;
	V662= CMPcar((V660->c.c_car));
	{object V664;
	object V665= CMPcdr((V660->c.c_car));
	if(V665==Cnil){
	V663= Cnil;
	goto T1167;}
	base[5]=V664=MMcons(Cnil,Cnil);
	goto T1168;
T1168:;
	if(!(type_of((V665->c.c_car))==t_fixnum||type_of((V665->c.c_car))==t_bignum)){
	goto T1171;}
	(V664->c.c_car)= ((V653))->v.v_self[fix((V665->c.c_car))];
	goto T1169;
	goto T1171;
T1171:;
	(V664->c.c_car)= (V665->c.c_car);
	goto T1169;
T1169:;
	if((V665=MMcdr(V665))==Cnil){
	V663= base[5];
	goto T1167;}
	V664=MMcdr(V664)=MMcons(Cnil,Cnil);
	goto T1168;}
	goto T1167;
T1167:;
	(V659->c.c_car)= make_cons(/* INLINE-ARGS */V662,V663);
	if((V660=MMcdr(V660))==Cnil){
	V635= base[4];
	goto T1164;}
	V659=MMcdr(V659)=MMcons(Cnil,Cnil);
	goto T1165;}
	goto T1164;
T1164:;}
	base[4]= (V634);
	base[5]= (V635);
	vs_top=(vs_base=base+4)+2;
	return;}}
	}
}
/*	function definition for MUTATE-SLOTS-AND-CALLS	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V667;
	object V668;
	check_arg(2);
	V667=(base[0]);
	V668=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V669;
	object V670;
	register long V671;
	V669= (*(LnkLI232))((V667));
	V670= (*(LnkLI233))(CMPcdr((V668)));
	V671= 0;
	{object V672;
	object V673;
	V672= (V669);
	V673= CMPcar((V672));
	goto T1182;
T1182:;
	if(!(((V672))==Cnil)){
	goto T1183;}
	goto T1178;
	goto T1183;
T1183:;
	{register object V674;
	object V675;
	V674= CMPcdr((V673));
	V675= CMPcar((V674));
	goto T1191;
T1191:;
	if(!(((V674))==Cnil)){
	goto T1192;}
	goto T1187;
	goto T1192;
T1192:;
	V671= (long)(V671)+(1);
	{register object V676;
	register object V677;
	V676= CMPcdr((V675));
	V677= CMPcar((V676));
	goto T1202;
T1202:;
	if(!(((V676))==Cnil)){
	goto T1203;}
	goto T1198;
	goto T1203;
T1203:;
	{register object V679;
	V679= CMPmake_fixnum(V671);
	(CMPcdr(V677))->c.c_car = (V679);
	(void)(CMPcdr(V677));}
	V676= CMPcdr((V676));
	V677= CMPcar((V676));
	goto T1202;}
	goto T1198;
T1198:;
	V674= CMPcdr((V674));
	V675= CMPcar((V674));
	goto T1191;}
	goto T1187;
T1187:;
	V672= CMPcdr((V672));
	V673= CMPcar((V672));
	goto T1182;}
	goto T1178;
T1178:;
	{object V680;
	object V681;
	V680= (V670);
	V681= CMPcar((V680));
	goto T1229;
T1229:;
	if(!(((V680))==Cnil)){
	goto T1230;}
	goto T1225;
	goto T1230;
T1230:;
	V671= (long)(V671)+(1);
	{register object V682;
	object V683;
	V682= CMPcdr((V681));
	V683= CMPcar((V682));
	goto T1240;
T1240:;
	if(!(((V682))==Cnil)){
	goto T1241;}
	goto T1236;
	goto T1241;
T1241:;
	{object V685;
	V685= CMPmake_fixnum(V671);
	(CMPcdr(V683))->c.c_car = (V685);
	(void)(CMPcdr(V683));}
	V682= CMPcdr((V682));
	V683= CMPcar((V682));
	goto T1240;}
	goto T1236;
T1236:;
	V680= CMPcdr((V680));
	V681= CMPcar((V680));
	goto T1229;}
	goto T1225;
T1225:;
	base[2]= (V669);
	base[3]= (V670);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function SYMBOL-PKG-NAME	*/

static object LI54(V687)

object V687;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V688;
	base[0]= (V687);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V688= vs_base[0];
	if(((V688))==Cnil){
	goto T1263;}
	base[0]= (V688);
	vs_top=(vs_base=base+0)+1;
	Lpackage_name();
	vs_top=sup;
	{object V689 = vs_base[0];
	VMR52(V689)}
	goto T1263;
T1263:;
	{object V690 = VV[113];
	VMR52(V690)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SYMBOL-LESSP	*/

static object LI55(V693,V694)

object V693;object V694;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V693);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V695= vs_base[0];
	base[0]= (V694);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V696= vs_base[0];
	if(!((V695)==(V696))){
	goto T1267;}
	base[0]= symbol_name((V693));
	base[1]= symbol_name((V694));
	vs_top=(vs_base=base+0)+2;
	Lstring_lessp();
	vs_top=sup;
	{object V697 = vs_base[0];
	VMR53(V697)}
	goto T1267;
T1267:;
	base[0]= (*(LnkLI234))((V693));
	base[1]= (*(LnkLI234))((V694));
	vs_top=(vs_base=base+0)+2;
	Lstring_lessp();
	vs_top=sup;
	{object V698 = vs_base[0];
	VMR53(V698)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SYMBOL-OR-CONS-LESSP	*/

static object LI56(V701,V702)

register object V701;register object V702;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{register object V704;
	V704= V701;
	if(!(type_of((V704))==t_symbol)){
	goto T1278;}
	{register object V706;
	V706= V702;
	if(!(type_of((V706))==t_symbol)){
	goto T1281;}
	{object V707 = (*(LnkLI235))((V701),(V702));
	VMR54(V707)}
	goto T1281;
T1281:;
	if(!(type_of((V706))==t_cons)){
	goto T1284;}
	{object V708 = Ct;
	VMR54(V708)}
	goto T1284;
T1284:;
	base[0]= VV[42];
	base[1]= VV[43];
	base[2]= VV[114];
	base[3]= VV[45];
	base[4]= V702;
	base[5]= VV[46];
	base[6]= VV[115];
	base[7]= VV[48];
	base[8]= VV[116];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk210)();
	vs_top=sup;
	{object V709 = vs_base[0];
	VMR54(V709)}}
	goto T1278;
T1278:;
	if(!(type_of((V704))==t_cons)){
	goto T1296;}
	{register object V711;
	V711= V702;
	if(!(type_of((V711))==t_symbol)){
	goto T1299;}
	{object V712 = Cnil;
	VMR54(V712)}
	goto T1299;
T1299:;
	if(!(type_of((V711))==t_cons)){
	goto T1302;}
	if(!((CMPcar((V701)))==(CMPcar((V702))))){
	goto T1305;}
	V701= CMPcdr((V701));
	V702= CMPcdr((V702));
	goto TTL;
	goto T1305;
T1305:;
	V701= CMPcar((V701));
	V702= CMPcar((V702));
	goto TTL;
	goto T1302;
T1302:;
	base[0]= VV[42];
	base[1]= VV[43];
	base[2]= VV[114];
	base[3]= VV[45];
	base[4]= V702;
	base[5]= VV[46];
	base[6]= VV[117];
	base[7]= VV[48];
	base[8]= VV[118];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk210)();
	vs_top=sup;
	{object V713 = vs_base[0];
	VMR54(V713)}}
	goto T1296;
T1296:;
	base[0]= VV[42];
	base[1]= VV[43];
	base[2]= VV[114];
	base[3]= VV[45];
	base[4]= V701;
	base[5]= VV[46];
	base[6]= VV[119];
	base[7]= VV[48];
	base[8]= VV[120];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk210)();
	vs_top=sup;
	{object V714 = vs_base[0];
	VMR54(V714)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-SLOTS	*/

static object LI57(V716)

object V716;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V717;
	object V718= (V716);
	if(V718==Cnil){
	{object V719 = Cnil;
	VMR55(V719)}}
	base[0]=V717=MMcons(Cnil,Cnil);
	goto T1331;
T1331:;
	V721= CMPcar((V718->c.c_car));
	base[1]= CMPcdr((V718->c.c_car));
	base[2]= (VV[236]->s.s_gfdef);
	base[3]= VV[79];
	base[4]= (VV[220]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk237)();
	vs_top=sup;
	V722= vs_base[0];
	(V717->c.c_car)= make_cons(/* INLINE-ARGS */V721,V722);
	if((V718=MMcdr(V718))==Cnil){
	{object V723 = base[0];
	VMR55(V723)}}
	V717=MMcdr(V717)=MMcons(Cnil,Cnil);
	goto T1331;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-CALLS	*/

static object LI58(V725)

object V725;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= (V725);
	base[1]= (VV[236]->s.s_gfdef);
	base[2]= VV[79];
	base[3]= (VV[220]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk237)();
	vs_top=sup;
	{object V726 = vs_base[0];
	VMR56(V726)}
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
	{object V727=base[0]->c.c_cdr;
	if(endp(V727))invalid_macro_call();
	{object V728= (V727->c.c_car);
	if(endp(V728))invalid_macro_call();
	base[2]= (V728->c.c_car);
	V728=V728->c.c_cdr;
	if(endp(V728))invalid_macro_call();
	base[3]= (V728->c.c_car);
	V728=V728->c.c_cdr;
	if(endp(V728))invalid_macro_call();
	base[4]= (V728->c.c_car);
	V728=V728->c.c_cdr;
	if(!endp(V728))invalid_macro_call();}
	V727=V727->c.c_cdr;
	base[5]= V727;}
	{object V729;
	object V730;
	{register object V731;
	register object V732;
	register object V733;
	register object V734;
	V731= Cnil;
	V732= Cnil;
	V733= Cnil;
	V734= Cnil;
	{register object V735;
	register object V736;
	register object V737;
	register object V738;
	register object V739;
	register object V740;
	V735= base[3];
	V736= Cnil;
	V737= base[2];
	V738= Cnil;
	V739= small_fixnum(0);
	V740= Cnil;
	goto T1355;
T1355:;
	{register object V741;
	if(!(((V735))==Cnil)){
	goto T1361;}
	goto T1347;
	goto T1361;
T1361:;
	V741= CMPcar((V735));
	V735= CMPcdr((V735));
	V736= (V741);}
	{register object V742;
	if(!(((V737))==Cnil)){
	goto T1369;}
	goto T1347;
	goto T1369;
T1369:;
	V742= CMPcar((V737));
	V737= CMPcdr((V737));
	V738= (V742);}
	{register object V743;
	V743= (V739);
	V739= number_plus((V739),small_fixnum(1));
	V740= (V743);}
	if(((V736))==Cnil){
	goto T1356;}
	{register object V744;
	V744= (V738);
	if(((V733))!=Cnil){
	goto T1381;}
	V734= make_cons((V744),Cnil);
	V733= (V734);
	goto T1379;
	goto T1381;
T1381:;
	V746= make_cons((V744),Cnil);
	((V734))->c.c_cdr = /* INLINE-ARGS */V746;
	V745= (V734);
	V734= CMPcdr(V745);}
	goto T1379;
T1379:;
	{register object V747;
	V747= (*(LnkLI227))((V740));
	if(((V731))!=Cnil){
	goto T1389;}
	V732= make_cons((V747),Cnil);
	V731= (V732);
	goto T1356;
	goto T1389;
T1389:;
	V749= make_cons((V747),Cnil);
	((V732))->c.c_cdr = /* INLINE-ARGS */V749;
	V748= (V732);
	V732= CMPcdr(V748);}
	goto T1356;
T1356:;
	goto T1355;}
	goto T1347;
T1347:;
	base[6]= (V731);
	base[7]= (V733);
	vs_top=(vs_base=base+6)+2;}
	if(vs_base>=vs_top){vs_top=sup;goto T1398;}
	V729= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1399;}
	V730= vs_base[0];
	vs_top=sup;
	goto T1400;
	goto T1398;
T1398:;
	V729= Cnil;
	goto T1399;
T1399:;
	V730= Cnil;
	goto T1400;
T1400:;
	base[6]= listA(3,VV[121],list(5,VV[84],VV[122],base[4],(V730),(V729)),base[5]);
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
	{object V750=base[0]->c.c_cdr;
	if(endp(V750))invalid_macro_call();
	{object V751= (V750->c.c_car);
	if(endp(V751))invalid_macro_call();
	base[2]= (V751->c.c_car);
	V751=V751->c.c_cdr;
	if(endp(V751))invalid_macro_call();
	base[3]= (V751->c.c_car);
	V751=V751->c.c_cdr;
	if(endp(V751))invalid_macro_call();
	base[4]= (V751->c.c_car);
	V751=V751->c.c_cdr;
	if(endp(V751))invalid_macro_call();
	base[5]= (V751->c.c_car);
	V751=V751->c.c_cdr;
	if(endp(V751))invalid_macro_call();
	base[6]= (V751->c.c_car);
	V751=V751->c.c_cdr;
	if(!endp(V751))invalid_macro_call();}
	V750=V750->c.c_cdr;
	base[7]= V750;}
	V752= list(4,base[2],base[3],base[4],base[5]);
	{object V754;
	object V755= base[6];
	object V756= base[5];
	if(V755==Cnil||V756==Cnil){
	V753= Cnil;
	goto T1401;}
	base[8]=V754=MMcons(Cnil,Cnil);
	goto T1402;
T1402:;
	(V754->c.c_car)= list(2,(V755->c.c_car),list(2,VV[124],(V756->c.c_car)));
	if((V755=MMcdr(V755))==Cnil||(V756=MMcdr(V756))==Cnil){
	V753= base[8];
	goto T1401;}
	V754=MMcdr(V754)=MMcons(Cnil,Cnil);
	goto T1402;}
	goto T1401;
T1401:;
	base[8]= list(3,VV[123],/* INLINE-ARGS */V752,listA(3,VV[0],V753,base[7]));
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
	{object V759=base[0]->c.c_cdr;
	if(endp(V759))invalid_macro_call();
	{object V760= (V759->c.c_car);
	if(endp(V760))invalid_macro_call();
	base[2]= (V760->c.c_car);
	V760=V760->c.c_cdr;
	if(endp(V760))invalid_macro_call();
	base[3]= (V760->c.c_car);
	V760=V760->c.c_cdr;
	if(endp(V760))invalid_macro_call();
	base[4]= (V760->c.c_car);
	V760=V760->c.c_cdr;
	if(endp(V760))invalid_macro_call();
	base[5]= (V760->c.c_car);
	V760=V760->c.c_cdr;
	if(!endp(V760))invalid_macro_call();}
	V759=V759->c.c_cdr;
	base[6]= V759;}
	V761= list(2,VV[126],base[4]);
	V762= list(2,VV[127],listA(3,VV[128],VV[126],base[5]));
	V763= list(2,base[2],VV[129]);
	V764= list(4,/* INLINE-ARGS */V761,/* INLINE-ARGS */V762,/* INLINE-ARGS */V763,list(2,base[3],VV[130]));
	V765= list(2,VV[131],(*(LnkLI238))(base[2]));
	V766= list(2,VV[131],(*(LnkLI239))(base[3]));
	if(!(type_of(base[4])==t_symbol)){
	goto T1407;}
	V768= list(2,VV[131],list(2,VV[132],base[4]));
	base[7]= make_cons(/* INLINE-ARGS */V768,Cnil);
	goto T1405;
	goto T1407;
T1407:;
	base[7]= Cnil;
	goto T1405;
T1405:;
	base[8]= list(2,base[2],base[3]);
	base[9]= base[6];
	vs_top=(vs_base=base+7)+3;
	Lappend();
	vs_top=sup;
	V767= vs_base[0];
	base[7]= listA(5,VV[125],/* INLINE-ARGS */V764,/* INLINE-ARGS */V765,/* INLINE-ARGS */V766,V767);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for SPLIT-DECLARATIONS	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	{object V769;
	object V770;
	check_arg(2);
	V769=(base[0]);
	V770=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V771;
	object V772;
	object V773;
	V771= Cnil;
	V772= Cnil;
	V773= Cnil;
	goto T1413;
T1413:;
	if(((V769))!=Cnil){
	goto T1415;}
	goto T1411;
	goto T1415;
T1415:;
	V773= CMPcar((V769));
	if(!(type_of((V773))==t_cons)){
	goto T1421;}
	if((CMPcar((V773)))==(VV[131])){
	goto T1420;}
	goto T1421;
T1421:;
	goto T1411;
	goto T1420;
T1420:;
	{object V774;
	register object V775;
	V774= CMPcdr((V773));
	V775= CMPcar((V774));
	goto T1429;
T1429:;
	if(!(((V774))==Cnil)){
	goto T1430;}
	goto T1425;
	goto T1430;
T1430:;
	if(!(type_of((V775))==t_cons)){
	goto T1434;}
	{register object V776;
	V776= CMPcar((V775));
	{register object x= (V776),V777= (VV[133]->s.s_dbind);
	while(V777!=Cnil)
	if(eql(x,V777->c.c_car)){
	goto T1440;
	}else V777=V777->c.c_cdr;
	goto T1439;}
	goto T1440;
T1440:;
	{object V778;
	V778= list(2,VV[131],(V775));
	V772= make_cons((V778),(V772));
	goto T1434;}
	goto T1439;
T1439:;
	{object V779;
	object V780;
	object V781;
	register object V782;
	register object V783;
	{register object x= (V776),V784= (VV[134]->s.s_dbind);
	while(V784!=Cnil)
	if(eql(x,V784->c.c_car)){
	V779= V784;
	goto T1443;
	}else V784=V784->c.c_cdr;
	V779= Cnil;}
	goto T1443;
T1443:;
	{register object x= (V776),V785= (VV[135]->s.s_dbind);
	while(V785!=Cnil)
	if(eql(x,V785->c.c_car)){
	V780= V785;
	goto T1444;
	}else V785=V785->c.c_cdr;
	V780= Cnil;}
	goto T1444;
T1444:;
	{object V787;
	V787= CMPcar((V775));
	V775= CMPcdr((V775));
	V786= (V787);}
	V781= make_cons(V786,Cnil);
	V782= Cnil;
	V783= Cnil;
	if(((V779))!=Cnil){
	goto T1450;}
	if(((V780))!=Cnil){
	goto T1450;}
	base[4]= VV[136];
	base[5]= (V776);
	base[6]= VV[137];
	base[7]= (V776);
	base[8]= VV[133];
	base[9]= VV[134];
	base[10]= VV[135];
	vs_top=(vs_base=base+4)+7;
	(void) (*Lnk240)();
	vs_top=sup;
	(VV[135]->s.s_dbind)= make_cons(V776,(VV[135]->s.s_dbind));
	goto T1450;
T1450:;
	if(((V779))==Cnil){
	goto T1464;}
	{object V790;
	V790= CMPcar((V775));
	V775= CMPcdr((V775));
	V789= (V790);}
	V791= make_cons(V789,Cnil);
	V781= append((V781),/* INLINE-ARGS */V791);
	goto T1464;
T1464:;
	{register object V792;
	register object V793;
	V792= (V775);
	V793= CMPcar((V792));
	goto T1476;
T1476:;
	if(!(((V792))==Cnil)){
	goto T1477;}
	goto T1472;
	goto T1477;
T1477:;
	{register object x= (V793),V794= (V770);
	while(V794!=Cnil)
	if(eql(x,V794->c.c_car)){
	goto T1484;
	}else V794=V794->c.c_cdr;
	goto T1483;}
	goto T1484;
T1484:;
	V783= make_cons(V793,(V783));
	goto T1481;
	goto T1483;
T1483:;
	V782= make_cons(V793,(V782));
	goto T1481;
T1481:;
	V792= CMPcdr((V792));
	V793= CMPcar((V792));
	goto T1476;}
	goto T1472;
T1472:;
	if(((V783))==Cnil){
	goto T1492;}
	{object V797;
	V797= list(2,VV[131],append((V781),(V783)));
	V772= make_cons((V797),(V772));}
	goto T1492;
T1492:;
	if(((V782))==Cnil){
	goto T1434;}
	{object V798;
	V798= list(2,VV[131],append((V781),(V782)));
	V771= make_cons((V798),(V771));}}}
	goto T1434;
T1434:;
	V774= CMPcdr((V774));
	V775= CMPcar((V774));
	goto T1429;}
	goto T1425;
T1425:;
	V769= CMPcdr((V769));
	goto T1413;
	goto T1411;
T1411:;
	base[2]= (V772);
	base[3]= (V771);
	base[4]= (V769);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function MAKE-METHOD-INITARGS-FORM-INTERNAL	*/

static object LI63(V802,V803,V804)

object V802;object V803;object V804;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	{object V805;
	object V806;
	object V807;
	V805= Cnil;
	V806= Cnil;
	V807= Cnil;
	if(!((3)==((long)length((V802))))){
	goto T1511;}
	V805= CMPcadr((V802));
	if(!((2)==((long)length((V805))))){
	goto T1511;}
	V806= CMPcaddr((V802));
	if(!(type_of((V806))==t_cons)){
	goto T1511;}
	if(!((VV[138])==(CMPcar((V806))))){
	goto T1511;}
	V808= CMPcar((V805));
	V807= CMPcadr((V806));
	if(!((/* INLINE-ARGS */V808)==(CMPcadr((V807))))){
	goto T1511;}
	if((CMPcadr((V805)))==(CMPcaddr((V807)))){
	goto T1512;}
	goto T1511;
T1511:;
	V809= list(2,VV[141],(V802));
	{object V810 = list(4,VV[139],VV[140],/* INLINE-ARGS */V809,list(2,VV[67],(V803)));
	VMR61(V810)}
	goto T1512;
T1512:;
	{object V811;
	register object V812;
	register object V813;
	register object V814;
	V811= CMPcar((V807));
	V812= small_fixnum(0);
	V813= Cnil;
	V814= Cnil;
	{register object V815;
	register object V816;
	V815= (V811);
	V816= CMPcar((V815));
	goto T1535;
T1535:;
	if(!(((V815))==Cnil)){
	goto T1536;}
	goto T1531;
	goto T1536;
T1536:;
	{register object x= (V816),V817= VV[142];
	while(V817!=Cnil)
	if(eql(x,V817->c.c_car)){
	goto T1542;
	}else V817=V817->c.c_cdr;
	goto T1540;}
	goto T1542;
T1542:;
	V813= Ct;
	goto T1531;
	goto T1540;
T1540:;
	if(!(((V816))==(VV[143]))){
	goto T1545;}
	goto T1531;
	goto T1545;
T1545:;
	V812= number_plus((V812),small_fixnum(1));
	{register object V818;
	V818= (V816);
	V814= make_cons((V818),(V814));}
	V815= CMPcdr((V815));
	V816= CMPcar((V815));
	goto T1535;}
	goto T1531;
T1531:;
	V814= nreverse((V814));
	{object V821;
	V821= make_cons((V812),(V813));
	{object V822;
	base[3]= (V803);
	base[4]= VV[144];
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	Lgetf();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V821);
	base[4]= VV[145];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V822= vs_base[0];
	{object V823;
	base[2]= (V803);
	base[3]= (V822);
	base[4]= VV[144];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V823= vs_base[0];
	V803= (V823);}}}
	{object V824 = (*(LnkLI241))((V803),CMPcddr((V806)),(V814),(V807),(V813));
	VMR61(V824)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-INITARGS-FORM-INTERNAL1	*/

static object LI64(V830,V831,V832,V833,V834)

object V830;object V831;register object V832;object V833;object V834;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{object V835;
	object V836;
	object V837;
	base[0]= (V831);
	base[1]= (V832);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk137)();
	if(vs_base>=vs_top){vs_top=sup;goto T1579;}
	V835= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1580;}
	V836= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1581;}
	V837= vs_base[0];
	vs_top=sup;
	goto T1582;
	goto T1579;
T1579:;
	V835= Cnil;
	goto T1580;
T1580:;
	V836= Cnil;
	goto T1581;
T1581:;
	V837= Cnil;
	goto T1582;
T1582:;
	{object V838;
	object V839;
	if(((V834))==Cnil){
	goto T1585;}
	V838= VV[146];
	goto T1583;
	goto T1585;
T1585:;
	V838= Cnil;
	goto T1583;
T1583:;
	if(((V834))==Cnil){
	goto T1589;}
	V840= make_cons((V838),Cnil);
	V839= append((V832),/* INLINE-ARGS */V840);
	goto T1587;
	goto T1589;
T1589:;
	V839= (V832);
	goto T1587;
T1587:;
	V841= listA(3,VV[127],VV[149],(V839));
	V842= listA(5,CMPcar((V833)),VV[149],(V832),(V838),CMPcdddr((V833)));
	V843= list(3,VV[127],VV[149],list(3,VV[150],VV[151],listA(3,VV[152],/* INLINE-ARGS */V842,append((V836),(V837)))));
	V844= list(2,VV[141],listA(3,VV[148],/* INLINE-ARGS */V841,append((V835),/* INLINE-ARGS */V843)));
	{object V845 = list(4,VV[139],VV[147],/* INLINE-ARGS */V844,list(2,VV[67],(V830)));
	VMR62(V845)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-FROM-FAST-FUNCTION	*/

static object LI66(V847)

object V847;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]=MMcons((V847),Cnil);
	{object V848;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	V848= (VFUN_NARGS=2,(*(LnkLI242))((base[0]->c.c_car),VV[145]));
	base[4]= CMPcar((V848));
	base[4]=MMcons(base[4],base[2]);
	base[5]= CMPcdr((V848));
	base[5]=MMcons(base[5],base[4]);
	(base[1]->c.c_car)= 
	make_cclosure_new(LC74,Cnil,base[5],Cdata);
	{register object V849;
	object V850;
	V849= (VFUN_NARGS=2,(*(LnkLI242))((base[0]->c.c_car),VV[43]));{object V852;
	{object V853 =(CMPcar((V849)))->s.s_plist;
	 object ind= VV[155];
	while(V853!=Cnil){
	if(V853->c.c_car==ind){
	V852= (V853->c.c_cdr->c.c_car);
	goto T1601;
	}else V853=V853->c.c_cdr->c.c_cdr;}
	V852= Cnil;}
	goto T1601;
T1601:;
	if(V852==Cnil)goto T1600;
	V851= V852;
	goto T1599;
	goto T1600;
T1600:;}
	V854= CMPcar((V849));
	{object V856;
	V856= symbol_name(CMPcar((V849)));
	base[8]= VV[156];
	base[9]= (V856);
	base[10]= VV[157];
	base[11]= small_fixnum(5);
	vs_top=(vs_base=base+8)+4;
	Lstring_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1605;}
	base[9]= (V856);
	base[10]= small_fixnum(5);
	vs_top=(vs_base=base+9)+2;
	Lsubseq();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (VV[158]->s.s_dbind);
	vs_top=(vs_base=base+8)+2;
	Lintern();
	vs_top=sup;
	V855= vs_base[0];
	goto T1602;
	goto T1605;
T1605:;
	V855= CMPcar((V849));}
	goto T1602;
T1602:;
	V851= sputprop(/* INLINE-ARGS */V854,VV[155],V855);
	goto T1599;
T1599:;
	V850= make_cons(V851,CMPcdr((V849)));
	base[8]= (base[1]->c.c_car);
	base[9]= (V850);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk243)();
	vs_top=sup;}
	{object V857;
	object V859;
	V857= (base[1]->c.c_car);
	V859= (base[0]->c.c_car);
	V860= ({object _tmp=get(VV[242],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[242])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[242])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V861 = V860,
	(type_of(V861) == t_sfun ?(*((V861)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V861)==t_vfun) ?
	(*((V861)->sfn.sfn_self)):
	(fcall.fun=(V861),fcalln))((V859),(V857),VV[147])));}
	{object V862 = (base[1]->c.c_car);
	VMR63(V862)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD-FUNCTION-PV-CELL	*/

static object LI67(object V864,object V863,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB64 VMS64 VMV64
	{object V865;
	object V866;
	object V867;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V865= V864;
	V866= V863;
	narg = narg - 2;
	if (narg <= 0) goto T1621;
	else {
	V867= first;}
	--narg; goto T1622;
	goto T1621;
T1621:;
	V867= Cnil;
	goto T1622;
T1622:;
	{object V868;
	if((V867)!=Cnil){
	V868= (V867);
	goto T1624;}
	V868= (*(LnkLI244))((V865));
	goto T1624;
T1624:;
	if(((V868))==Cnil){
	goto T1626;}
	{object V869;
	V869= (*(LnkLI245))((V868),(V866));
	if(((V869))==Cnil){
	goto T1630;}
	{object V870 = (*(LnkLI246))((V868),(V869));
	VMR64(V870)}
	goto T1630;
T1630:;
	{object V871 = Cnil;
	VMR64(V871)}}
	goto T1626;
T1626:;
	{object V872 = Cnil;
	VMR64(V872)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function PV-TABLE-LOOKUP-PV-ARGS	*/

static object LI68(object V873,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB65 VMS65 VMV65
	{object V874;
	object V875;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V874= V873;
	narg= narg - 1;
	V876 = list_vector_new(narg,first,ap);
	V875= V876;
	V877= (VFUN_NARGS=1,(*(LnkLI247))((V875)));
	{object V878 = (*(LnkLI246))((V874),/* INLINE-ARGS */V877);
	VMR65(V878)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function PV-WRAPPERS-FROM-PV-ARGS	*/

static object LI69(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB66 VMS66 VMV66
	{object V879;
	va_start(ap,first);
	narg= narg - 0;
	V880 = list_vector_new(narg,first,ap);
	V879= V880;
	{long V881;
	object V882;
	register object V883;
	object V884;
	V881= (long)length((V879));
	base[1]= CMPmake_fixnum(V881);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V882= vs_base[0];
	V883= Cnil;
	V884= (V882);
	{register object V885;
	register object V886;
	V885= (V879);
	V886= CMPcar((V885));
	goto T1641;
T1641:;
	if(!(((V885))==Cnil)){
	goto T1642;}
	goto T1637;
	goto T1642;
T1642:;
	{register object V887;
	V887= (V886);
	if(type_of((V887))==t_structure){
	goto T1651;}
	goto T1649;
	goto T1651;
T1651:;
	if(!((((V887))->str.str_def)==(VV[160]))){
	goto T1649;}}
	V883= STREF(object,(V886),0);
	goto T1647;
	goto T1649;
T1649:;{object V888;
	V888= (VV[162]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V886);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk248)();
	vs_top=sup;
	V889= vs_base[0];
	if(!((V888)==(CMPcar(V889)))){
	goto T1654;}}
	V883= CMPcar(((V886))->cc.cc_turbo[13]);
	goto T1647;
	goto T1654;
T1654:;
	if(!(type_of((V886))==t_structure)){
	goto T1660;}
	V883= (*(LnkLI250))((V886));
	goto T1647;
	goto T1660;
T1660:;
	if(!(type_of((V886))==t_symbol)){
	goto T1663;}
	if(((V886))==Cnil){
	goto T1666;}
	V883= (VV[163]->s.s_dbind);
	goto T1647;
	goto T1666;
T1666:;
	V883= (VV[164]->s.s_dbind);
	goto T1647;
	goto T1663;
T1663:;
	V883= (*(LnkLI251))((V886));
	goto T1647;
T1647:;
	if((Ct)==(((V883))->v.v_self[8])){
	goto T1668;}
	V883= (*(LnkLI252))((V886));
	goto T1668;
T1668:;
	{register object V890;
	register object V891;
	V890= (V884);
	V891= (V883);
	((V890))->c.c_car = (V891);}
	V885= CMPcdr((V885));
	V886= CMPcar((V885));
	goto T1641;}
	goto T1637;
T1637:;
	V884= CMPcdr((V884));
	if(!((V881)==(1))){
	goto T1683;}
	V882= CMPcar((V882));
	goto T1683;
T1683:;
	{object V892 = (V882);
	VMR66(V892)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PV-WRAPPERS-FROM-ALL-ARGS	*/

static object LI70(V895,V896)

object V895;register object V896;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V897;
	object V898;
	V897= 0;
	V898= STREF(object,(V895),8);
	{register object V899;
	object V900;
	V899= (V898);
	V900= CMPcar((V899));
	goto T1693;
T1693:;
	if(!(((V899))==Cnil)){
	goto T1694;}
	goto T1689;
	goto T1694;
T1694:;
	if(((V900))==Cnil){
	goto T1698;}
	V897= (long)(V897)+(1);
	goto T1698;
T1698:;
	V899= CMPcdr((V899));
	V900= CMPcar((V899));
	goto T1693;}
	goto T1689;
T1689:;
	{object V901;
	register object V902;
	base[1]= CMPmake_fixnum(V897);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V901= vs_base[0];
	V902= (V901);
	{register object V903;
	object V904;
	V903= (V898);
	V904= CMPcar((V903));
	goto T1714;
T1714:;
	if(!(((V903))==Cnil)){
	goto T1715;}
	goto T1710;
	goto T1715;
T1715:;
	if(((V904))==Cnil){
	goto T1719;}
	{object V905;
	register object V906;
	V905= CMPcar((V896));
	V906= (*(LnkLI253))((V905));
	if(((V906))!=Cnil){
	goto T1724;}
	base[4]= VV[165];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T1724;
T1724:;
	{register object V908;
	V908= (V906);
	(V902)->c.c_car = (V908);}
	V902= CMPcdr((V902));}
	goto T1719;
T1719:;
	V896= CMPcdr((V896));
	V903= CMPcdr((V903));
	V904= CMPcar((V903));
	goto T1714;}
	goto T1710;
T1710:;
	if(!((V897)==(1))){
	goto T1739;}
	V901= CMPcar((V901));
	goto T1739;
T1739:;
	{object V909 = (V901);
	VMR67(V909)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PV-WRAPPERS-FROM-ALL-WRAPPERS	*/

static object LI71(V912,V913)

object V912;register object V913;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{long V914;
	object V915;
	V914= 0;
	V915= STREF(object,(V912),8);
	{register object V916;
	object V917;
	V916= (V915);
	V917= CMPcar((V916));
	goto T1749;
T1749:;
	if(!(((V916))==Cnil)){
	goto T1750;}
	goto T1745;
	goto T1750;
T1750:;
	if(((V917))==Cnil){
	goto T1754;}
	V914= (long)(V914)+(1);
	goto T1754;
T1754:;
	V916= CMPcdr((V916));
	V917= CMPcar((V916));
	goto T1749;}
	goto T1745;
T1745:;
	{object V918;
	register object V919;
	base[1]= CMPmake_fixnum(V914);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V918= vs_base[0];
	V919= (V918);
	{register object V920;
	object V921;
	V920= (V915);
	V921= CMPcar((V920));
	goto T1770;
T1770:;
	if(!(((V920))==Cnil)){
	goto T1771;}
	goto T1766;
	goto T1771;
T1771:;
	if(((V921))==Cnil){
	goto T1775;}
	{register object V922;
	V922= CMPcar((V913));
	if(((V922))!=Cnil){
	goto T1779;}
	base[2]= VV[166];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1779;
T1779:;
	{register object V924;
	V924= (V922);
	(V919)->c.c_car = (V924);}
	V919= CMPcdr((V919));}
	goto T1775;
T1775:;
	V913= CMPcdr((V913));
	V920= CMPcdr((V920));
	V921= CMPcar((V920));
	goto T1770;}
	goto T1766;
T1766:;
	if(!((V914)==(1))){
	goto T1794;}
	V918= CMPcar((V918));
	goto T1794;
T1794:;
	{object V925 = (V918);
	VMR68(V925)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC74(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{register object V926;
	object V927;
	check_arg(2);
	V926=(base[0]);
	V927=(base[1]);
	vs_top=sup;
	if(((base0[2]->c.c_car))!=Cnil){
	goto T1798;}
	(base0[2]->c.c_car)= (*(LnkLI244))((base0[4]->c.c_car));
	goto T1798;
T1798:;
	{object V928;
	register object V929;
	object V930;
	object V931;
	if(((base0[2]->c.c_car))==Cnil){
	goto T1804;}
	V928= (VFUN_NARGS=3,(*(LnkLI254))((base0[3]->c.c_car),(V926),(base0[2]->c.c_car)));
	goto T1802;
	goto T1804;
T1804:;
	V928= Cnil;
	goto T1802;
T1802:;
	V929= CMPcar((V927));
	V930= CMPcdr((V927));
	if(((V929))==Cnil){
	goto T1810;}
	if(type_of(V929)==t_structure){
	goto T1816;}
	goto T1814;
	goto T1816;
T1816:;
	if(!(((V929)->str.str_def)==(VV[159]))){
	goto T1814;}
	base[6]= (V929);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk256)(Lclptr256);
	vs_top=sup;
	V932= vs_base[0];
	goto T1812;
	goto T1814;
T1814:;
	V932= (V929);
	goto T1812;
T1812:;
	V934= make_cons((V930),Cnil);
	V931= (VFUN_NARGS=4,(*(LnkLI255))(VV[140],V932,VV[154],/* INLINE-ARGS */V934));
	goto T1808;
	goto T1810;
T1810:;
	V931= Cnil;
	goto T1808;
T1808:;
	if(((base0[0]->c.c_car))==Cnil){
	goto T1820;}
	{object V935;
	object V936;
	V935= nthcdr(fix((base0[1]->c.c_car)),(V926));
	base[8]= (V926);
	base[9]= (V935);
	vs_top=(vs_base=base+8)+2;
	Lldiff();
	vs_top=sup;
	V936= vs_base[0];
	base[8]= (base0[4]->c.c_car);
	base[9]= (V928);
	base[10]= (V931);
	{object V937;
	V938= make_cons((V935),Cnil);
	V937= nconc((V936),/* INLINE-ARGS */V938);
	 vs_top=base+11;
	 while(V937!=Cnil)
	 {vs_push((V937)->c.c_car);V937=(V937)->c.c_cdr;}
	vs_base=base+9;}
	{object _funobj = base[8];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1820;
T1820:;
	base[6]= (base0[4]->c.c_car);
	base[7]= (V928);
	base[8]= (V931);
	{object V939;
	V939= (V926);
	 vs_top=base+9;
	 while(V939!=Cnil)
	 {vs_push((V939)->c.c_car);V939=(V939)->c.c_cdr;}
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
	{object V940;
	object V941;
	check_arg(2);
	V940=(base[0]);
	V941=(base[1]);
	vs_top=sup;
	{object V943;
	V943= (*(LnkLI257))((V940),CMPcar((V941)),(base0[3]->c.c_car),(base0[1]->c.c_car),(base0[0]->c.c_car));
	(V941)->c.c_car = (V943);
	base[3]= (V943);
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
	{object V944;
	register object V945;
	check_arg(2);
	V944=(base[0]);
	V945=(base[1]);
	vs_top=sup;
	base[2]= V944;
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
	{object V947;
	check_arg(1);
	V947=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V948;
	base[1]= (V947);
	base[2]= (VV[16]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V948= vs_base[0];
	if(V948==Cnil)goto T1839;
	base[1]= V948;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1839;
T1839:;}
	{object V950;
	object V951;
	V950= (VV[16]->s.s_dbind);
	{object V952;
	object V953;
	base[2]= CMPcdr((V947));
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V952= vs_base[0];
	V953= CMPcar((V947));
	base0[0]= Ct;
	V951= (VFUN_NARGS=4,(*(LnkLI258))(VV[17],(V952),VV[18],(V953)));}
	base[2]= V947;
	base[3]= (V950);
	base[4]= (V951);
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
	{object V954;
	check_arg(1);
	V954=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V955;
	base[1]= (V954);
	base[2]= (VV[15]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V955= vs_base[0];
	if(V955==Cnil)goto T1853;
	base[1]= V955;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1853;
T1853:;}
	{object V957;
	object V958;
	V957= (VV[15]->s.s_dbind);
	base[2]= (V954);
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V958= vs_base[0];
	base[2]= V954;
	base[3]= (V957);
	base[4]= (V958);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	return;}
	}
}
static object  LnkTLI258(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[258],(void **)(void *)&LnkLI258,first,ap);va_end(ap);return V1;} /* MAKE-PV-TABLE */
static object  LnkTLI257(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[257],(void **)(void *)&LnkLI257,5,first,ap);va_end(ap);return V1;} /* UPDATE-SLOTS-IN-PV */
static void LnkT256(ptr) object *ptr;{ call_or_link_closure(VV[256],(void **)(void *)&Lnk256,(void **)(void *)&Lclptr256);} /* METHOD-FUNCTION */
static object  LnkTLI255(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[255],(void **)(void *)&LnkLI255,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-CALL */
static object  LnkTLI254(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[254],(void **)(void *)&LnkLI254,first,ap);va_end(ap);return V1;} /* GET-METHOD-FUNCTION-PV-CELL */
static object  LnkTLI253(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[253],(void **)(void *)&LnkLI253,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static object  LnkTLI252(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[252],(void **)(void *)&LnkLI252,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static object  LnkTLI251(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[251],(void **)(void *)&LnkLI251,1,first,ap);va_end(ap);return V1;} /* BUILT-IN-WRAPPER-OF */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[250],(void **)(void *)&LnkLI250,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FOR-STRUCTURE */
static object  LnkTLI249(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[249],(void **)(void *)&LnkLI249,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT248(){ call_or_link(VV[248],(void **)(void *)&Lnk248);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[247],(void **)(void *)&LnkLI247,first,ap);va_end(ap);return V1;} /* PV-WRAPPERS-FROM-PV-ARGS */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[246],(void **)(void *)&LnkLI246,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI245(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[245],(void **)(void *)&LnkLI245,2,first,ap);va_end(ap);return V1;} /* PV-WRAPPERS-FROM-ALL-ARGS */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PV-TABLE */
static void LnkT243(){ call_or_link(VV[243],(void **)(void *)&Lnk243);} /* SET-FUNCTION-NAME */
static object  LnkTLI242(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[242],(void **)(void *)&LnkLI242,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* SPLIT-DECLARATIONS */
static object  LnkTLI241(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[241],(void **)(void *)&LnkLI241,5,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-INITARGS-FORM-INTERNAL1 */
static void LnkT240(){ call_or_link(VV[240],(void **)(void *)&Lnk240);} /* WARN */
static object  LnkTLI239(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[239],(void **)(void *)&LnkLI239,1,first,ap);va_end(ap);return V1;} /* MAKE-CALLS-TYPE-DECLARATION */
static object  LnkTLI238(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[238],(void **)(void *)&LnkLI238,1,first,ap);va_end(ap);return V1;} /* MAKE-PV-TYPE-DECLARATION */
static void LnkT237(){ call_or_link(VV[237],(void **)(void *)&Lnk237);} /* SORT */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[235],(void **)(void *)&LnkLI235,2,first,ap);va_end(ap);return V1;} /* SYMBOL-LESSP */
static object  LnkTLI234(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[234],(void **)(void *)&LnkLI234,1,first,ap);va_end(ap);return V1;} /* SYMBOL-PKG-NAME */
static object  LnkTLI233(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[233],(void **)(void *)&LnkLI233,1,first,ap);va_end(ap);return V1;} /* SORT-CALLS */
static object  LnkTLI232(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[232],(void **)(void *)&LnkLI232,1,first,ap);va_end(ap);return V1;} /* SORT-SLOTS */
static void LnkT231(){ call_or_link(VV[231],(void **)(void *)&Lnk231);} /* VECTOR */
static void LnkT230(){ call_or_link(VV[230],(void **)(void *)&Lnk230);} /* MUTATE-SLOTS-AND-CALLS */
static object  LnkTLI229(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[229],(void **)(void *)&LnkLI229,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static void LnkT228(){ call_or_link(VV[228],(void **)(void *)&Lnk228);} /* GENERATE-FAST-CLASS-SLOT-ACCESS-P */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,1,first,ap);va_end(ap);return V1;} /* SLOT-VECTOR-SYMBOL */
static object  LnkTLI226(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[226],(void **)(void *)&LnkLI226,3,first,ap);va_end(ap);return V1;} /* SKIP-FAST-SLOT-ACCESS-P */
static object  LnkTLI225(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[225],(void **)(void *)&LnkLI225,3,first,ap);va_end(ap);return V1;} /* SKIP-OPTIMIZE-SLOT-VALUE-BY-CLASS-P */
static void LnkT224(ptr) object *ptr;{ call_or_link_closure(VV[224],(void **)(void *)&Lnk224,(void **)(void *)&Lclptr224);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT223(ptr) object *ptr;{ call_or_link_closure(VV[223],(void **)(void *)&Lnk223,(void **)(void *)&Lclptr223);} /* STANDARD-CLASS-P */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,3,first,ap);va_end(ap);return V1;} /* OPTIMIZE-GF-CALL-INTERNAL */
static void LnkT219(){ call_or_link(VV[219],(void **)(void *)&Lnk219);} /* POSITION */
static void LnkT218(ptr) object *ptr;{ call_or_link_closure(VV[218],(void **)(void *)&Lnk218,(void **)(void *)&Lclptr218);} /* SLOT-DEFINITION-DEFSTRUCT-ACCESSOR-SYMBOL */
static void LnkT217(ptr) object *ptr;{ call_or_link_closure(VV[217],(void **)(void *)&Lnk217,(void **)(void *)&Lclptr217);} /* CLASSP */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[216],(void **)(void *)&LnkLI216,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-ACCESSOR-CALL */
static object  LnkTLI215(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[215],(void **)(void *)&LnkLI215,5,first,ap);va_end(ap);return V1;} /* OPTIMIZE-INSTANCE-ACCESS */
static void LnkT214(ptr) object *ptr;{ call_or_link_closure(VV[214],(void **)(void *)&Lnk214,(void **)(void *)&Lclptr214);} /* CLASS-PRECEDENCE-LIST */
static void LnkT213(ptr) object *ptr;{ call_or_link_closure(VV[213],(void **)(void *)&Lnk213,(void **)(void *)&Lclptr213);} /* CLASS-FINALIZED-P */
static object  LnkTLI212(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[212],(void **)(void *)&LnkLI212,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[211],(void **)(void *)&LnkLI211,3,first,ap);va_end(ap);return V1;} /* VARIABLE-DECLARATION */
static void LnkT210(){ call_or_link(VV[210],(void **)(void *)&Lnk210);} /* ERROR */
static object  LnkTLI206(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[206],(void **)(void *)&LnkLI206,1,first,ap);va_end(ap);return V1;} /* EXPAND-MAKE-INSTANCE-FORM */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[205],(void **)(void *)&LnkLI205,4,first,ap);va_end(ap);return V1;} /* OPTIMIZE-WRITER */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[203],(void **)(void *)&LnkLI203,4,first,ap);va_end(ap);return V1;} /* OPTIMIZE-READER */
static object  LnkTLI202(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[202],(void **)(void *)&LnkLI202,first,ap);va_end(ap);return V1;} /* CAN-OPTIMIZE-ACCESS1 */
static void LnkT201(){ call_or_link(VV[201],(void **)(void *)&Lnk201);} /* SOME */
static object  LnkTLI199(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[199],(void **)(void *)&LnkLI199,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-APPLYP */
static void LnkT198(ptr) object *ptr;{ call_or_link_closure(VV[198],(void **)(void *)&Lnk198,(void **)(void *)&Lclptr198);} /* GF-ARG-INFO */
static void LnkT197(ptr) object *ptr;{ call_or_link_closure(VV[197],(void **)(void *)&Lnk197,(void **)(void *)&Lclptr197);} /* GENERIC-FUNCTION-NAME */
static void LnkT196(ptr) object *ptr;{ call_or_link_closure(VV[196],(void **)(void *)&Lnk196,(void **)(void *)&Lclptr196);} /* GENERIC-FUNCTION-METHODS */
static void LnkT195(ptr) object *ptr;{ call_or_link_closure(VV[195],(void **)(void *)&Lnk195,(void **)(void *)&Lclptr195);} /* GENERIC-FUNCTION-P */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[194],(void **)(void *)&LnkLI194,1,first,ap);va_end(ap);return V1;} /* UNENCAPSULATED-FDEFINITION */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* COERCE */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[192],(void **)(void *)&LnkLI192,first,ap);va_end(ap);return V1;} /* MAP-CACHE */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,2,first,ap);va_end(ap);return V1;} /* MAP-PV-TABLE-REFERENCES-OF */
static void LnkT190(ptr) object *ptr;{ call_or_link_closure(VV[190],(void **)(void *)&Lnk190,(void **)(void *)&Lclptr190);} /* CLASS-WRAPPER */
static object  LnkTLI189(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[189],(void **)(void *)&LnkLI189,2,first,ap);va_end(ap);return V1;} /* UPDATE-ALL-PV-TABLE-CACHES */
static object  LnkTLI188(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[188],(void **)(void *)&LnkLI188,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE */
static object  LnkTLI187(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[187],(void **)(void *)&LnkLI187,first,ap);va_end(ap);return V1;} /* FILL-CACHE */
static object  LnkTLI186(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[186],(void **)(void *)&LnkLI186,2,first,ap);va_end(ap);return V1;} /* COMPUTE-CALLS */
static object  LnkTLI185(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[185],(void **)(void *)&LnkLI185,2,first,ap);va_end(ap);return V1;} /* COMPUTE-PV */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[184],(void **)(void *)&LnkLI184,first,ap);va_end(ap);return V1;} /* PROBE-CACHE */
static void LnkT182(){ call_or_link(VV[182],(void **)(void *)&Lnk182);} /* COUNT */
static object  LnkTLI181(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[181],(void **)(void *)&LnkLI181,262148,first,ap);va_end(ap);return V1;} /* GET-CACHE */
static void LnkT180(){ call_or_link(VV[180],(void **)(void *)&Lnk180);} /* MAKE-ARRAY */
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,1,first,ap);va_end(ap);return V1;} /* MAKE-PERMUTATION-VECTOR */
static object  LnkTLI178(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[178],(void **)(void *)&LnkLI178,5,first,ap);va_end(ap);return V1;} /* COMPUTE-PV-SLOT */
static void LnkT177(){ call_or_link(VV[177],(void **)(void *)&Lnk177);} /* ACCESSOR-VALUES1 */
static object  LnkTLI176(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[176],(void **)(void *)&LnkLI176,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT175(){ call_or_link(VV[175],(void **)(void *)&Lnk175);} /* OPTIMIZE-SLOT-VALUE-BY-CLASS-P */
static void LnkT174(ptr) object *ptr;{ call_or_link_closure(VV[174],(void **)(void *)&Lnk174,(void **)(void *)&Lclptr174);} /* SLOT-ACCESSOR-STD-P */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI172(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[172],(void **)(void *)&LnkLI172,3,first,ap);va_end(ap);return V1;} /* NOTE-PV-TABLE-REFERENCE */
static object  LnkTLI171(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[171],(void **)(void *)&LnkLI171,2,first,ap);va_end(ap);return V1;} /* MAKE-PV-TABLE-INTERNAL */
static object  LnkTLI167(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[167],(void **)(void *)&LnkLI167,257,first,ap);va_end(ap);return V1;} /* DEFAULT-LIMIT-FN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

