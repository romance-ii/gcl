
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
	V91= (*(LnkLI158))((V88),(V89));
	if((V91)==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	base[3]= (V91);
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk159)(Lclptr159);
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
	(void) (*Lnk160)();
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
	V118= (*(LnkLI161))((V117));
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T227;}
	base[4]= (V118);
	base[5]= (V115);
	base[6]= (V99);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk162)();
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
	V142= (*(LnkLI163))((V141),(V135),(V137),(V138),(V128));
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
	{object V146 = (*(LnkLI164))(/* INLINE-ARGS */V145);
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
	V151= (*(LnkLI164))(/* INLINE-ARGS */V152);
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
	(void) (*Lnk165)();
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
	(void) (*Lnk167)();
	vs_top=sup;
	V171= vs_base[0];
	V172= number_minus(V170,V171);
	V173= (VV[168]->s.s_gfdef);
	V174= (*(LnkLI166))(/* INLINE-ARGS */V172,Ct,V173,2);
	V175= Ct;
	STSET(object,(V164),0, /* INLINE-ARGS */V174);
	V168= /* INLINE-ARGS */V174;
	goto T315;
T315:;{object V176;
	V176= (VFUN_NARGS=2,(*(LnkLI169))((V168),(V165)));
	if(V176==Cnil)goto T322;
	{object V177 = V176;
	VMR15(V177)}
	goto T322;
T322:;}
	{object V178;
	object V179;
	object V180;
	object V181;
	V178= (*(LnkLI170))((V166),(V165));
	V179= (*(LnkLI171))((V167),(V165));
	V180= make_cons((V178),(V179));
	V181= (VFUN_NARGS=3,(*(LnkLI172))((V168),(V165),(V180)));
	if(((V181))==((V168))){
	goto T328;}
	V182= Ct;
	STSET(object,(V164),0, (V181));
	(void)((V181));
	(void)((*(LnkLI173))((V168)));
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
	{object V201 = (*(LnkLI174))((V194),(V195));
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
	(void) (*Lnk175)(Lclptr175);
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
	V214= (*(LnkLI163))((V212->c.c_car),(base[0]->c.c_car),(V205),(V208),(V209));
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
	(void)((*(LnkLI176))((V216),V217));
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
	(void) (*Lnk165)();
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
	(void)((VFUN_NARGS=2,(*(LnkLI177))(V233,(V221))));}
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
	(void) (*Lnk178)();
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
	V268= (*(LnkLI164))((V264));
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
	V279= (*(LnkLI179))((V278));
	goto T562;
	goto T564;
T564:;
	V279= (*(LnkLI161))((V278));
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
	(void) (*Lnk180)(Lclptr180);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T572;}
	{object V280;
	base[2]= (V279);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk181)(Lclptr181);
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
	(void) (*Lnk182)(Lclptr182);
	vs_top=sup;
	V281= vs_base[0];
	base[7]= (V279);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk183)(Lclptr183);
	vs_top=sup;
	V282= vs_base[0];
	V283= STREF(object,(V282),8);
	V284= CMPmake_fixnum((long)length((V283)));
	V285= (*(LnkLI184))((V282));
	if(((V285))!=Cnil){
	goto T590;}
	if(!(number_compare((V284),small_fixnum(1))==0)){
	goto T593;}
	base[7]= (VV[185]->s.s_gfdef);
	base[8]= (V280);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk186)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T596;}
	{object V286;
	V286= (VFUN_NARGS=3,(*(LnkLI187))(CMPcadr((V274)),(V275),(V277)));
	if(((V286))==Cnil){
	goto T602;}
	{object V287 = (*(LnkLI188))((V276),(V286),(V281),(V274));
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
	base[7]= (VV[189]->s.s_gfdef);
	base[8]= (V280);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk186)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T612;}
	{object V290;
	V290= (VFUN_NARGS=3,(*(LnkLI187))(CMPcaddr((V274)),(V275),(V277)));
	if(((V290))==Cnil){
	goto T618;}
	{object V291 = (*(LnkLI190))((V276),(V290),(V281),(V274));
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
	V309= (*(LnkLI191))((V304));
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
	{object V321= CMPcar((V315));
	if((V321!= VV[192]))goto T625;
	V318= VV[39];
	goto T624;
	goto T625;
T625:;
	if((V321!= VV[193]))goto T626;
	V318= VV[40];
	goto T624;
	goto T626;
T626:;
	if((V321!= VV[194]))goto T627;
	V318= VV[41];
	goto T624;
	goto T627;
T627:;
	FEerror("The ECASE key value ~s is illegal.",1,V321);
	V318= Cnil;
	goto T624;}
	goto T624;
T624:;
	V319= CMPcadr((V315));
	base[0]= CMPcaddr((V315));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V320= vs_base[0];
	{object V322 = (VFUN_NARGS=5,(*(LnkLI187))((V319),(V316),(V317),(V318),(V320)));
	VMR26(V322)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CAN-OPTIMIZE-ACCESS1	*/

static object LI29(object V325,object V324,object V323,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{register object V326;
	object V327;
	object V328;
	object V329;
	object V330;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V326= V325;
	V327= V324;
	V328= V323;
	narg = narg - 3;
	if (narg <= 0) goto T631;
	else {
	V329= first;}
	if (--narg <= 0) goto T632;
	else {
	V330= va_arg(ap,object);}
	--narg; goto T633;
	goto T631;
T631:;
	V329= Cnil;
	goto T632;
T632:;
	V330= Cnil;
	goto T633;
T633:;
	if(!(type_of((V326))==t_cons)){
	goto T636;}
	if(!((VV[42])==(CMPcar((V326))))){
	goto T636;}
	V326= CMPcaddr((V326));
	goto T636;
T636:;
	if(!(type_of((V326))==t_symbol)){
	goto T643;}
	{object V331;
	object V332;
	V333= (*(LnkLI195))(VV[43],(V326),(V328));
	V331= CMPcaddr(/* INLINE-ARGS */V333);
	if((V331)!=Cnil){
	V336= (V331);
	goto T648;}
	V336= (V326);
	goto T648;
T648:;
	{register object x= V336,V335= (V327);
	while(V335!=Cnil)
	if(x==(V335->c.c_car)){
	V334= V335;
	goto T647;
	}else V335=V335->c.c_cdr;
	V334= Cnil;}
	goto T647;
T647:;
	V332= CMPcar(V334);
	if(((V332))==Cnil){
	goto T650;}
	{register object V337;
	register object V338;
	V339= (*(LnkLI195))(VV[44],(V332),(V328));
	V337= CMPcaddr(/* INLINE-ARGS */V339);
	V338= (VFUN_NARGS=2,(*(LnkLI196))((V337),Cnil));
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T655;}
	if(((V338))==Cnil){
	goto T654;}
	base[4]= (V338);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk197)(Lclptr197);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T654;}
	goto T655;
T655:;
	V338= Cnil;
	goto T654;
T654:;
	if(((V337))==Cnil){
	goto T664;}
	if(((V337))==(Ct)){
	goto T664;}
	if(((V329))==Cnil){
	goto T668;}
	if(((V338))==Cnil){
	goto T668;}{object V341;
	V341= (VV[45]->s.s_dbind);
	base[4]= (V338);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk198)(Lclptr198);
	vs_top=sup;
	V342= vs_base[0];
	{register object x= V341,V340= V342;
	while(V340!=Cnil)
	if(x==(V340->c.c_car)){
	goto T675;
	}else V340=V340->c.c_cdr;
	goto T668;}}
	goto T675;
T675:;
	base[4]= (V338);
	base[5]= (V330);
	base[6]= (V329);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk160)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T669;}
	goto T668;
T668:;
	if((V338)!=Cnil){
	V343= (V338);
	goto T682;}
	V343= (V337);
	goto T682;
T682:;
	{object V344 = make_cons((V332),V343);
	VMR27(V344)}
	goto T669;
T669:;
	{object V345 = Cnil;
	VMR27(V345)}
	goto T664;
T664:;
	{object V346 = Cnil;
	VMR27(V346)}}
	goto T650;
T650:;
	{object V347 = Cnil;
	VMR27(V347)}}
	goto T643;
T643:;
	{object V348 = Cnil;
	VMR27(V348)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function OPTIMIZE-SLOT-VALUE	*/

static object LI30(V352,V353,V354)

object V352;object V353;object V354;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	if(((V353))==Cnil){
	goto T684;}
	{object V355;
	object V356;
	V355= Cnil;
	V356= Cnil;
	V356= (V354);
	V355= CMPcaddr((V356));
	{object V357;
	base[0]= (V355);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V357= vs_base[0];
	{object V358 = (*(LnkLI199))((V352),VV[46],(V353),(V357),Cnil);
	VMR28(V358)}}}
	goto T684;
T684:;
	{object V359 = make_cons(VV[47],CMPcdr((V354)));
	VMR28(V359)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-SET-SLOT-VALUE	*/

static object LI31(V363,V364,V365)

object V363;object V364;object V365;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((V364))==Cnil){
	goto T694;}
	{object V366;
	object V367;
	register object V368;
	V366= Cnil;
	V367= Cnil;
	V368= Cnil;
	V368= (V365);
	V368= CMPcddr((V368));
	{object V369;
	V369= CMPcar((V368));
	V368= CMPcdr((V368));
	V367= (V369);}
	V366= CMPcar((V368));
	{object V370;
	base[0]= (V367);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V370= vs_base[0];
	{object V371 = (*(LnkLI199))((V363),VV[48],(V364),(V370),(V366));
	VMR29(V371)}}}
	goto T694;
T694:;
	{object V372 = make_cons(VV[49],CMPcdr((V365)));
	VMR29(V372)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-SLOT-BOUNDP	*/

static object LI32(V376,V377,V378)

object V376;object V377;object V378;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V377))==Cnil){
	goto T712;}
	{object V379;
	object V380;
	register object V381;
	V379= Cnil;
	V380= Cnil;
	V381= Cnil;
	V381= (V378);
	V381= CMPcddr((V381));
	{object V382;
	V382= CMPcar((V381));
	V381= CMPcdr((V381));
	V380= (V382);}
	V379= CMPcar((V381));
	{object V383;
	base[0]= (V380);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V383= vs_base[0];
	{object V384 = (*(LnkLI199))((V376),VV[50],(V377),(V383),(V379));
	VMR30(V384)}}}
	goto T712;
T712:;
	{object V385 = make_cons(VV[51],CMPcdr((V378)));
	VMR30(V385)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-READER	*/

static object LI33(V390,V391,V392,V393)

object V390;object V391;object V392;object V393;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(((V391))==Cnil){
	goto T730;}
	{object V394 = (*(LnkLI200))((V390),VV[46],(V391),(V392),Cnil);
	VMR31(V394)}
	goto T730;
T730:;
	{object V395 = (V393);
	VMR31(V395)}
	return Cnil;
}
/*	local entry for function OPTIMIZE-WRITER	*/

static object LI34(V400,V401,V402,V403)

object V400;object V401;object V402;object V403;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(((V401))==Cnil){
	goto T733;}
	{object V404;
	object V405;
	V404= Cnil;
	V405= Cnil;
	V405= (V403);
	V404= CMPcaddr((V405));
	{object V406 = (*(LnkLI200))((V400),VV[48],(V401),(V402),(V404));
	VMR32(V406)}}
	goto T733;
T733:;
	{object V407 = (V403);
	VMR32(V407)}
	return Cnil;
}
/*	local entry for function OPTIMIZE-INSTANCE-ACCESS	*/

static object LI35(V413,V414,V415,V416,V417)

object V413;object V414;register object V415;register object V416;object V417;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V418;
	register object V419;
	if(!(type_of((V415))==t_cons)){
	goto T742;}
	V418= CMPcdr((V415));
	goto T740;
	goto T742;
T742:;
	V418= (VV[52]->s.s_dbind);
	goto T740;
T740:;
	if(!(type_of((V415))==t_cons)){
	goto T746;}
	V419= CMPcar((V415));
	goto T744;
	goto T746;
T746:;
	V419= (V415);
	goto T744;
T744:;
	if(!(((VV[22]->s.s_dbind))==(VV[23]))){
	goto T749;}
	base[0]= (V418);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T749;}{object V421;
	V421= (VV[45]->s.s_dbind);
	base[0]= (V418);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk198)(Lclptr198);
	vs_top=sup;
	V422= vs_base[0];
	{register object x= V421,V420= V422;
	while(V420!=Cnil)
	if(x==(V420->c.c_car)){
	goto T755;
	}else V420=V420->c.c_cdr;
	goto T749;}}
	goto T755;
T755:;
	{object V423;
	V423= (*(LnkLI158))((V418),(V416));
	{object V424= (V414);
	if((V424!= VV[46]))goto T759;
	base[0]= (V423);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V425= vs_base[0];
	{object V426 = list(2,V425,(V419));
	VMR33(V426)}
	goto T759;
T759:;
	if((V424!= VV[48]))goto T762;
	base[0]= (V423);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V427= vs_base[0];
	{object V428 = list(3,VV[37],list(2,V427,(V419)),(V417));
	VMR33(V428)}
	goto T762;
T762:;
	if((V424!= VV[50]))goto T765;
	{object V429 = Ct;
	VMR33(V429)}
	goto T765;
T765:;
	FEerror("The ECASE key value ~s is illegal.",1,V424);
	{object V430 = Cnil;
	VMR33(V430)}}}
	goto T749;
T749:;
	{register object V431;
	register object V432;
	object V433;
	register object V434;
	{register object x= (V419),V435= (V413);
	while(V435!=Cnil)
	if(EQ(x,V435->c.c_car->c.c_car) &&V435->c.c_car != Cnil){
	V431= (V435->c.c_car);
	goto T766;
	}else V435=V435->c.c_cdr;
	V431= Cnil;}
	goto T766;
T766:;
	{register object x= (V416),V436= CMPcdr((V431));
	while(V436!=Cnil)
	if(EQ(x,V436->c.c_car->c.c_car) &&V436->c.c_car != Cnil){
	V432= (V436->c.c_car);
	goto T767;
	}else V436=V436->c.c_cdr;
	V432= Cnil;}
	goto T767;
T767:;
	base[4]= (V431);
	base[5]= (V413);
	base[6]= VV[21];
	base[7]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk203)();
	vs_top=sup;
	V433= vs_base[0];
	V434= list(2,VV[53],VV[54]);
	if(((V431))!=Cnil){
	goto T774;}
	base[4]= VV[55];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T774;
T774:;
	if(((V432))!=Cnil){
	goto T778;}
	V432= make_cons((V416),Cnil);
	{object V439;
	V439= make_cons(V432,CMPcdr(V431));
	(V431)->c.c_cdr = (V439);}
	goto T778;
T778:;
	{object V442;
	V442= make_cons(V434,CMPcdr(V432));
	(V432)->c.c_cdr = (V442);}
	{object V443= (V414);
	if((V443!= VV[46]))goto T788;
	V444= list(2,VV[57],(V416));
	{object V445 = list(6,VV[56],(V434),(V419),(V433),/* INLINE-ARGS */V444,list(2,VV[57],(V418)));
	VMR33(V445)}
	goto T788;
T788:;
	if((V443!= VV[48]))goto T789;
	V446= list(2,VV[58],(V417));
	V447= make_cons(/* INLINE-ARGS */V446,Cnil);
	V448= list(2,VV[57],(V416));
	{object V449 = list(3,VV[0],/* INLINE-ARGS */V447,list(7,VV[59],(V434),(V419),(V433),/* INLINE-ARGS */V448,list(2,VV[57],(V418)),VV[58]));
	VMR33(V449)}
	goto T789;
T789:;
	if((V443!= VV[50]))goto T790;
	V450= list(2,VV[57],(V416));
	{object V451 = list(6,VV[60],(V434),(V419),(V433),/* INLINE-ARGS */V450,list(2,VV[57],(V418)));
	VMR33(V451)}
	goto T790;
T790:;
	FEerror("The ECASE key value ~s is illegal.",1,V443);
	{object V452 = Cnil;
	VMR33(V452)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-ACCESSOR-CALL	*/

static object LI36(V458,V459,V460,V461,V462)

object V458;object V459;register object V460;register object V461;object V462;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V463;
	object V464;
	register object V465;
	object V466;
	register object V467;
	object V468;
	object V469;
	if(!(type_of((V460))==t_cons)){
	goto T793;}
	V463= CMPcdr((V460));
	goto T791;
	goto T793;
T793:;
	V463= (VV[52]->s.s_dbind);
	goto T791;
T791:;
	if(!(type_of((V460))==t_cons)){
	goto T797;}
	V464= CMPcar((V460));
	goto T795;
	goto T797;
T797:;
	V464= (V460);
	goto T795;
T795:;
	{register object x= (V464),V470= (V458);
	while(V470!=Cnil)
	if(EQ(x,V470->c.c_car->c.c_car) &&V470->c.c_car != Cnil){
	V465= (V470->c.c_car);
	goto T799;
	}else V470=V470->c.c_cdr;
	V465= Cnil;}
	goto T799;
T799:;
	{object V471= (V459);
	if((V471!= VV[46]))goto T801;
	V466= list(2,VV[39],(V461));
	goto T800;
	goto T801;
T801:;
	if((V471!= VV[48]))goto T802;
	V466= list(2,VV[40],(V461));
	goto T800;
	goto T802;
T802:;
	V466= Cnil;}
	goto T800;
T800:;
	{register object x= (V466),V472= CMPcdr((V465));
	while(V472!=Cnil)
	if(equal(x,V472->c.c_car->c.c_car) &&V472->c.c_car != Cnil){
	V467= (V472->c.c_car);
	goto T803;
	}else V472=V472->c.c_cdr;
	V467= Cnil;}
	goto T803;
T803:;
	base[7]= (V465);
	base[8]= (V458);
	base[9]= VV[21];
	base[10]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk203)();
	vs_top=sup;
	V468= vs_base[0];
	V469= list(2,VV[53],VV[61]);
	if(((V465))!=Cnil){
	goto T810;}
	base[7]= VV[62];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	goto T810;
T810:;
	if(((V467))!=Cnil){
	goto T814;}
	V467= make_cons((V466),Cnil);
	{object V475;
	V475= make_cons(V467,CMPcdr(V465));
	(V465)->c.c_cdr = (V475);}
	goto T814;
T814:;
	{object V478;
	V478= make_cons(V469,CMPcdr(V467));
	(V467)->c.c_cdr = (V478);}
	{object V479= (V459);
	if((V479!= VV[46]))goto T824;
	{object V480 = list(6,VV[63],(V469),(V464),(V468),(V461),list(2,VV[57],(V463)));
	VMR34(V480)}
	goto T824;
T824:;
	if((V479!= VV[48]))goto T825;
	V481= list(2,VV[58],(V462));
	V482= make_cons(/* INLINE-ARGS */V481,Cnil);
	{object V483 = list(3,VV[0],/* INLINE-ARGS */V482,list(7,VV[64],(V469),(V464),(V468),(V461),list(2,VV[57],(V463)),VV[58]));
	VMR34(V483)}
	goto T825;
T825:;
	FEerror("The ECASE key value ~s is illegal.",1,V479);
	{object V484 = Cnil;
	VMR34(V484)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GF-CALL-INTERNAL	*/

static object LI37(V488,V489,V490)

register object V488;object V489;object V490;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(!(type_of((V488))==t_cons)){
	goto T826;}
	if(!((CMPcar((V488)))==(VV[42]))){
	goto T826;}
	V488= CMPcaddr((V488));
	goto T826;
T826:;{object V491;
	if(type_of((V488))==t_symbol){
	goto T834;}
	V491= Cnil;
	goto T833;
	goto T834;
T834:;
	{object V492;
	object V493;
	V494= (*(LnkLI195))(VV[43],(V488),(V490));
	V492= CMPcaddr(/* INLINE-ARGS */V494);
	if((V492)!=Cnil){
	V497= (V492);
	goto T839;}
	V497= (V488);
	goto T839;
T839:;
	{register object x= V497,V496= (V489);
	while(V496!=Cnil)
	if(EQ(x,V496->c.c_car->c.c_car) &&V496->c.c_car != Cnil){
	V495= (V496->c.c_car);
	goto T838;
	}else V496=V496->c.c_cdr;
	V495= Cnil;}
	goto T838;
T838:;
	V493= CMPcar(V495);
	if(((V493))==Cnil){
	goto T841;}
	{object V498;
	V499= (*(LnkLI195))(VV[44],(V493),(V490));
	V498= CMPcaddr(/* INLINE-ARGS */V499);
	if(((V498))==Cnil){
	goto T845;}
	if(((V498))==(Ct)){
	goto T845;}
	base[3]= (V493);
	base[4]= (V489);
	base[5]= VV[65];
	base[6]= (VV[204]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk203)();
	vs_top=sup;
	V491= vs_base[0];
	goto T833;
	goto T845;
T845:;
	V491= Cnil;
	goto T833;}
	goto T841;
T841:;
	V491= Cnil;}
	goto T833;
T833:;
	if(V491==Cnil)goto T832;
	{object V500 = V491;
	VMR35(V500)}
	goto T832;
T832:;}
	base[0]= (V488);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T854;}
	{object V501;
	base[0]= (V488);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V501= vs_base[0];
	if(!(type_of((V501))==t_symbol)){
	goto T860;}
	{object V502 = (V501);
	VMR35(V502)}
	goto T860;
T860:;
	{object V503 = (VV[66]->s.s_dbind);
	VMR35(V503)}}
	goto T854;
T854:;
	{object V504 = (VV[66]->s.s_dbind);
	VMR35(V504)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OPTIMIZE-GF-CALL	*/

static object LI38(V511,V512,V513,V514,V515,V516)

object V511;object V512;register object V513;object V514;object V515;object V516;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	if((CMPcar((V513)))==(VV[38])){
	goto T863;}
	{object V517;
	object V518;
	object V519;
	object V520;
	register object V521;
	register object V522;
	object V523;
	V517= CMPcdr((V513));
	V518= ((CMPcar((V513)))==(VV[38])?Ct:Cnil);
	V519= nthcdr(fix((V514)),(V517));
	base[7]= (V517);
	base[8]= (V519);
	vs_top=(vs_base=base+7)+2;
	Lldiff();
	vs_top=sup;
	V520= vs_base[0];
	V524= CMPcar((V513));
	if(((V518))==Cnil){
	goto T876;}
	V528= (V517);
	goto T874;
	goto T876;
T876:;
	V528= (V520);
	goto T874;
T874:;
	{object V526;
	object V527= V528;
	if(V527==Cnil){
	V525= Cnil;
	goto T872;}
	base[7]=V526=MMcons(Cnil,Cnil);
	goto T873;
T873:;
	(V526->c.c_car)= (*(LnkLI205))((V527->c.c_car),(V511),(V516));
	if((V527=MMcdr(V527))==Cnil){
	V525= base[7];
	goto T872;}
	V526=MMcdr(V526)=MMcons(Cnil,Cnil);
	goto T873;}
	goto T872;
T872:;
	V521= list(4,/* INLINE-ARGS */V524,(V514),(V515),V525);
	{register object x= (V521),V530= (V512);
	while(V530!=Cnil)
	if(equal(x,V530->c.c_car->c.c_car) &&V530->c.c_car != Cnil){
	V522= (V530->c.c_car);
	goto T879;
	}else V530=V530->c.c_cdr;
	V522= Cnil;}
	goto T879;
T879:;
	V523= list(2,VV[53],VV[67]);
	base[7]= (VV[206]->s.s_gfdef);
	{object V531;
	V531= CMPcdr((V521));
	if(((V518))==Cnil){
	goto T888;}
	base[9]= (V531);
	base[10]= nthcdr(fix((V514)),(V531));
	vs_top=(vs_base=base+9)+2;
	Lldiff();
	vs_top=sup;
	base[8]= vs_base[0];
	goto T885;
	goto T888;
T888:;
	base[8]= (V531);}
	goto T885;
T885:;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk186)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T881;}
	{object V532 = Cnil;
	VMR36(V532)}
	goto T881;
T881:;
	if(((V522))!=Cnil){
	goto T892;}
	V522= make_cons((V521),Cnil);
	{object V535;
	V535= make_cons(V522,CMPcdr(V512));
	(V512)->c.c_cdr = (V535);}
	goto T892;
T892:;
	{object V538;
	V538= make_cons(V523,CMPcdr(V522));
	(V522)->c.c_cdr = (V538);}
	if(!((CMPcar((V521)))==(VV[38]))){
	goto T903;}
	{object V539 = listA(3,VV[68],list(3,VV[69],VV[70],(V523)),CMPcdr((V513)));
	VMR36(V539)}
	goto T903;
T903:;
	V540= list(2,VV[71],list(3,VV[69],VV[70],(V523)));
	V541= make_cons(/* INLINE-ARGS */V540,Cnil);
	if(((V515))==Cnil){
	goto T907;}
	V543= make_cons(VV[34],(V519));
	V542= make_cons(/* INLINE-ARGS */V543,Cnil);
	goto T905;
	goto T907;
T907:;
	V542= Cnil;
	goto T905;
T905:;
	{object V544 = list(3,VV[0],/* INLINE-ARGS */V541,listA(4,VV[72],VV[71],(V515),append((V520),V542)));
	VMR36(V544)}}
	goto T863;
T863:;
	{object V545 = Cnil;
	VMR36(V545)}
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
	{object V546=base[0]->c.c_cdr;
	if(endp(V546))invalid_macro_call();
	base[2]= (V546->c.c_car);
	V546=V546->c.c_cdr;
	if(!endp(V546))invalid_macro_call();}
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
	{object V547=base[0]->c.c_cdr;
	if(endp(V547))invalid_macro_call();
	base[2]= (V547->c.c_car);
	V547=V547->c.c_cdr;
	if(!endp(V547))invalid_macro_call();}
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for GENERATE-FAST-CLASS-SLOT-ACCESS-P	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V548;
	object V549;
	check_arg(2);
	V548=(base[0]);
	V549=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V550;
	object V551;
	base[2]= (V548);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T910;}
	V550= Cnil;
	goto T909;
	goto T910;
T910:;
	base[2]= (V548);
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V550= vs_base[0];
	goto T909;
T909:;
	base[2]= (V549);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T915;}
	V551= Cnil;
	goto T914;
	goto T915;
T915:;
	base[2]= (V549);
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V551= vs_base[0];
	goto T914;
T914:;
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T919;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T919;
T919:;
	base[2]= (V550);
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
	if(((((V550))==((VV[52]->s.s_dbind))?Ct:Cnil))==Cnil){
	goto T924;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T924;
T924:;
	{object V552;
	V552= (*(LnkLI158))((V550),(V551));
	if((V552)==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[3]= (V552);
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

static object LI42(V556,V557,V558)

object V556;object V557;object V558;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{register object V559;
	object V560;
	base[0]= (V556);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T930;}
	V559= Cnil;
	goto T929;
	goto T930;
T930:;
	base[0]= (V556);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V559= vs_base[0];
	goto T929;
T929:;
	base[0]= (V557);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T935;}
	V560= Cnil;
	goto T934;
	goto T935;
T935:;
	base[0]= (V557);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V560= vs_base[0];
	goto T934;
T934:;
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T939;}
	{object V561 = Cnil;
	VMR40(V561)}
	goto T939;
T939:;
	base[0]= (V559);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T941;}
	{object V562 = Cnil;
	VMR40(V562)}
	goto T941;
T941:;
	if(((((V559))==((VV[52]->s.s_dbind))?Ct:Cnil))==Cnil){
	goto T944;}
	{object V563 = Cnil;
	VMR40(V563)}
	goto T944;
T944:;
	{object V564;
	V564= (*(LnkLI158))((V559),(V560));
	if((V564)==Cnil){
	{object V565 = Cnil;
	VMR40(V565)}}
	{object V566 = (*(LnkLI209))((V559),(V560),(V558));
	VMR40(V566)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SKIP-OPTIMIZE-SLOT-VALUE-BY-CLASS-P	*/

static object LI43(V570,V571,V572)

object V570;object V571;object V572;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V573;
	V573= (*(LnkLI158))((V570),(V571));
	if((V573)==Cnil){
	{object V574 = Cnil;
	VMR41(V574)}}
	if(((VV[22]->s.s_dbind))==(VV[23])){
	goto T948;}
	{object V575 = Cnil;
	VMR41(V575)}
	goto T948;
T948:;
	base[0]= (V573);
	base[1]= (V572);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk159)(Lclptr159);
	vs_top=sup;
	V576= vs_base[0];
	{object V577 = ((V576)==Cnil?Ct:Cnil);
	VMR41(V577)}}
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
	{object V578=base[0]->c.c_cdr;
	if(endp(V578))invalid_macro_call();
	base[2]= (V578->c.c_car);
	V578=V578->c.c_cdr;
	if(endp(V578))invalid_macro_call();
	base[3]= (V578->c.c_car);
	V578=V578->c.c_cdr;
	if(endp(V578))invalid_macro_call();
	base[4]= (V578->c.c_car);
	V578=V578->c.c_cdr;
	if(endp(V578))invalid_macro_call();
	base[5]= (V578->c.c_car);
	V578=V578->c.c_cdr;
	if(endp(V578)){
	base[6]= Cnil;
	} else {
	base[6]= (V578->c.c_car);
	V578=V578->c.c_cdr;}
	if(!endp(V578))invalid_macro_call();}
	{register object x= base[6],V579= VV[73];
	while(V579!=Cnil)
	if(eql(x,V579->c.c_car)){
	goto T954;
	}else V579=V579->c.c_cdr;}
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
	{register object V580;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V580= vs_base[0];
	V582= list(2,(V580),list(3,VV[79],base[2],base[4]));
	V583= make_cons(/* INLINE-ARGS */V582,Cnil);
	if((base[6])==Cnil){
	goto T966;}
	if(!((base[6])==(VV[82]))){
	goto T967;}
	goto T966;
T966:;
	V585= list(2,VV[83],list(3,VV[84],base[3],(V580)));
	base[8]= make_cons(/* INLINE-ARGS */V585,Cnil);
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
	V586= list(2,VV[86],list(2,VV[87],(V580)));
	base[9]= make_cons(/* INLINE-ARGS */V586,Cnil);
	goto T971;
	goto T973;
T973:;
	base[9]= Cnil;
	goto T971;
T971:;
	V587= list(2,Ct,list(2,VV[57],(VV[88]->s.s_dbind)));
	base[10]= make_cons(/* INLINE-ARGS */V587,Cnil);
	vs_top=(vs_base=base+8)+3;
	Lappend();
	vs_top=sup;
	V584= vs_base[0];
	V588= list(3,VV[80],V580,listA(3,VV[81],(V580),V584));
	base[8]= list(3,VV[77],VV[78],list(4,VV[0],/* INLINE-ARGS */V583,/* INLINE-ARGS */V588,list(4,VV[89],list(3,VV[9],V580,list(2,VV[57],(VV[88]->s.s_dbind))),base[5],V580)));
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
	{object V589=base[0]->c.c_cdr;
	if(endp(V589))invalid_macro_call();
	base[2]= (V589->c.c_car);
	V589=V589->c.c_cdr;
	if(endp(V589))invalid_macro_call();
	base[3]= (V589->c.c_car);
	V589=V589->c.c_cdr;
	if(endp(V589))invalid_macro_call();
	base[4]= (V589->c.c_car);
	V589=V589->c.c_cdr;
	if(endp(V589))invalid_macro_call();
	base[5]= (V589->c.c_car);
	V589=V589->c.c_cdr;
	if(endp(V589))invalid_macro_call();
	base[6]= (V589->c.c_car);
	V589=V589->c.c_cdr;
	if(!endp(V589))invalid_macro_call();}
	if(((*(LnkLI210))(base[6],base[5],VV[39]))==Cnil){
	goto T979;}
	base[7]= list(3,VV[47],base[3],base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T979;
T979:;
	V590= (*(LnkLI211))(base[4]);
	V591= list(3,VV[47],base[3],base[5]);
	base[7]= base[6];
	base[8]= base[5];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T983;}
	V592= VV[85];
	goto T981;
	goto T983;
T983:;
	V592= VV[82];
	goto T981;
T981:;
	base[7]= list(6,VV[75],VV[70],/* INLINE-ARGS */V590,base[2],/* INLINE-ARGS */V591,V592);
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
	V594= (*(LnkLI211))(base[4]);
	base[7]= list(6,VV[75],VV[70],/* INLINE-ARGS */V594,base[2],list(2,base[5],list(2,VV[35],base[3])),VV[82]);
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
	{object V595=base[0]->c.c_cdr;
	if(endp(V595))invalid_macro_call();
	base[2]= (V595->c.c_car);
	V595=V595->c.c_cdr;
	if(endp(V595))invalid_macro_call();
	base[3]= (V595->c.c_car);
	V595=V595->c.c_cdr;
	if(endp(V595))invalid_macro_call();
	base[4]= (V595->c.c_car);
	V595=V595->c.c_cdr;
	if(endp(V595))invalid_macro_call();
	base[5]= (V595->c.c_car);
	V595=V595->c.c_cdr;
	if(endp(V595))invalid_macro_call();
	base[6]= (V595->c.c_car);
	V595=V595->c.c_cdr;
	if(endp(V595)){
	base[7]= Cnil;
	} else {
	base[7]= (V595->c.c_car);
	V595=V595->c.c_cdr;}
	if(!endp(V595))invalid_macro_call();}
	{register object x= base[7],V596= VV[90];
	while(V596!=Cnil)
	if(eql(x,V596->c.c_car)){
	goto T988;
	}else V596=V596->c.c_cdr;}
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
	{register object V597;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V597= vs_base[0];
	V598= list(2,(V597),list(3,VV[79],base[2],base[4]));
	V599= make_cons(/* INLINE-ARGS */V598,Cnil);
	if((base[7])==Cnil){
	goto T1000;}
	if(!((base[7])==(VV[82]))){
	goto T1001;}
	goto T1000;
T1000:;
	V601= list(2,VV[83],list(3,VV[37],list(3,VV[84],base[3],(V597)),base[5]));
	base[9]= make_cons(/* INLINE-ARGS */V601,Cnil);
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
	V602= list(2,VV[86],list(3,VV[37],list(2,VV[87],(V597)),base[5]));
	base[10]= make_cons(/* INLINE-ARGS */V602,Cnil);
	goto T1005;
	goto T1007;
T1007:;
	base[10]= Cnil;
	goto T1005;
T1005:;
	V603= list(2,Ct,base[6]);
	base[11]= make_cons(/* INLINE-ARGS */V603,Cnil);
	vs_top=(vs_base=base+9)+3;
	Lappend();
	vs_top=sup;
	V600= vs_base[0];
	base[9]= list(3,VV[77],VV[93],list(3,VV[0],/* INLINE-ARGS */V599,listA(3,VV[81],(V597),V600)));
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
	{object V604=base[0]->c.c_cdr;
	if(endp(V604))invalid_macro_call();
	base[2]= (V604->c.c_car);
	V604=V604->c.c_cdr;
	if(endp(V604))invalid_macro_call();
	base[3]= (V604->c.c_car);
	V604=V604->c.c_cdr;
	if(endp(V604))invalid_macro_call();
	base[4]= (V604->c.c_car);
	V604=V604->c.c_cdr;
	if(endp(V604))invalid_macro_call();
	base[5]= (V604->c.c_car);
	V604=V604->c.c_cdr;
	if(endp(V604))invalid_macro_call();
	base[6]= (V604->c.c_car);
	V604=V604->c.c_cdr;
	if(endp(V604))invalid_macro_call();
	base[7]= (V604->c.c_car);
	V604=V604->c.c_cdr;
	if(!endp(V604))invalid_macro_call();}
	if(((*(LnkLI210))(base[6],base[5],VV[40]))==Cnil){
	goto T1013;}
	base[8]= list(4,VV[49],base[3],base[5],base[7]);
	vs_top=(vs_base=base+8)+1;
	return;
	goto T1013;
T1013:;
	V605= (*(LnkLI211))(base[4]);
	V606= list(4,VV[49],base[3],base[5],base[7]);
	base[8]= base[6];
	base[9]= base[5];
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1017;}
	V607= VV[85];
	goto T1015;
	goto T1017;
T1017:;
	V607= VV[82];
	goto T1015;
T1015:;
	base[8]= list(7,VV[92],VV[70],/* INLINE-ARGS */V605,base[2],base[7],/* INLINE-ARGS */V606,V607);
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
	V609= (*(LnkLI211))(base[4]);
	if(!(type_of(base[5])==t_cons)){
	goto T1023;}
	V610= (*(LnkLI213))(base[5]);
	goto T1021;
	goto T1023;
T1023:;
	V610= base[5];
	goto T1021;
T1021:;
	base[8]= list(7,VV[92],VV[70],/* INLINE-ARGS */V609,base[2],base[7],list(3,V610,list(2,VV[35],base[3]),base[7]),VV[82]);
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
	{object V611=base[0]->c.c_cdr;
	if(endp(V611))invalid_macro_call();
	base[2]= (V611->c.c_car);
	V611=V611->c.c_cdr;
	if(endp(V611))invalid_macro_call();
	base[3]= (V611->c.c_car);
	V611=V611->c.c_cdr;
	if(endp(V611))invalid_macro_call();
	base[4]= (V611->c.c_car);
	V611=V611->c.c_cdr;
	if(endp(V611))invalid_macro_call();
	base[5]= (V611->c.c_car);
	V611=V611->c.c_cdr;
	if(endp(V611)){
	base[6]= Cnil;
	} else {
	base[6]= (V611->c.c_car);
	V611=V611->c.c_cdr;}
	if(!endp(V611))invalid_macro_call();}
	{register object x= base[6],V612= VV[94];
	while(V612!=Cnil)
	if(eql(x,V612->c.c_car)){
	goto T1026;
	}else V612=V612->c.c_cdr;}
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
	{register object V613;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V613= vs_base[0];
	V614= list(2,(V613),list(3,VV[79],base[2],base[4]));
	V615= make_cons(/* INLINE-ARGS */V614,Cnil);
	if((base[6])==Cnil){
	goto T1038;}
	if(!((base[6])==(VV[82]))){
	goto T1039;}
	goto T1038;
T1038:;
	V617= list(3,VV[84],base[3],(V613));
	V618= list(2,VV[83],list(2,VV[98],list(3,VV[9],/* INLINE-ARGS */V617,list(2,VV[57],(VV[88]->s.s_dbind)))));
	base[8]= make_cons(/* INLINE-ARGS */V618,Cnil);
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
	V619= list(2,VV[87],(V613));
	V620= list(2,VV[86],list(2,VV[98],list(3,VV[9],/* INLINE-ARGS */V619,list(2,VV[57],(VV[88]->s.s_dbind)))));
	base[9]= make_cons(/* INLINE-ARGS */V620,Cnil);
	goto T1043;
	goto T1045;
T1045:;
	base[9]= Cnil;
	goto T1043;
T1043:;
	V621= list(2,Ct,base[5]);
	base[10]= make_cons(/* INLINE-ARGS */V621,Cnil);
	vs_top=(vs_base=base+8)+3;
	Lappend();
	vs_top=sup;
	V616= vs_base[0];
	base[8]= list(3,VV[77],VV[97],list(3,VV[0],/* INLINE-ARGS */V615,listA(3,VV[81],(V613),V616)));
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
	{object V622=base[0]->c.c_cdr;
	if(endp(V622))invalid_macro_call();
	base[2]= (V622->c.c_car);
	V622=V622->c.c_cdr;
	if(endp(V622))invalid_macro_call();
	base[3]= (V622->c.c_car);
	V622=V622->c.c_cdr;
	if(endp(V622))invalid_macro_call();
	base[4]= (V622->c.c_car);
	V622=V622->c.c_cdr;
	if(endp(V622))invalid_macro_call();
	base[5]= (V622->c.c_car);
	V622=V622->c.c_cdr;
	if(endp(V622))invalid_macro_call();
	base[6]= (V622->c.c_car);
	V622=V622->c.c_cdr;
	if(!endp(V622))invalid_macro_call();}
	if(((*(LnkLI210))(base[6],base[5],VV[41]))==Cnil){
	goto T1051;}
	base[7]= list(3,VV[51],base[3],base[5]);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T1051;
T1051:;
	V623= (*(LnkLI211))(base[4]);
	V624= list(3,VV[51],base[3],base[5]);
	base[7]= base[6];
	base[8]= base[5];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1055;}
	V625= VV[85];
	goto T1053;
	goto T1055;
T1055:;
	V625= VV[82];
	goto T1053;
T1053:;
	base[7]= list(6,VV[96],VV[70],/* INLINE-ARGS */V623,base[2],/* INLINE-ARGS */V624,V625);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for SLOT-NAME-LISTS-FROM-SLOTS	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V626;
	object V627;
	check_arg(2);
	V626=(base[0]);
	V627=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V628;
	object V629;
	base[2]= (V626);
	base[3]= (V627);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk214)();
	if(vs_base>=vs_top){vs_top=sup;goto T1062;}
	V628= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1063;}
	V629= vs_base[0];
	vs_top=sup;
	goto T1064;
	goto T1062;
T1062:;
	V628= Cnil;
	goto T1063;
T1063:;
	V629= Cnil;
	goto T1064;
T1064:;
	{register object V630;
	object V631;
	{object V632;
	object V633= (V628);
	if(V633==Cnil){
	V630= Cnil;
	goto T1065;}
	base[4]=V632=MMcons(Cnil,Cnil);
	goto T1066;
T1066:;
	{object V636;
	object V637= CMPcdr((V633->c.c_car));
	if(V637==Cnil){
	V635= Cnil;
	goto T1068;}
	base[5]=V636=MMcons(Cnil,Cnil);
	goto T1069;
T1069:;
	(V636->c.c_car)= CMPcar((V637->c.c_car));
	if((V637=MMcdr(V637))==Cnil){
	V635= base[5];
	goto T1068;}
	V636=MMcdr(V636)=MMcons(Cnil,Cnil);
	goto T1069;}
	goto T1068;
T1068:;
	(V632->c.c_car)= make_cons(Cnil,V635);
	if((V633=MMcdr(V633))==Cnil){
	V630= base[4];
	goto T1065;}
	V632=MMcdr(V632)=MMcons(Cnil,Cnil);
	goto T1066;}
	goto T1065;
T1065:;
	{object V638;
	object V639= (V629);
	if(V639==Cnil){
	V631= Cnil;
	goto T1071;}
	base[4]=V638=MMcons(Cnil,Cnil);
	goto T1072;
T1072:;
	(V638->c.c_car)= CMPcar((V639->c.c_car));
	if((V639=MMcdr(V639))==Cnil){
	V631= base[4];
	goto T1071;}
	V638=MMcdr(V638)=MMcons(Cnil,Cnil);
	goto T1072;}
	goto T1071;
T1071:;
	{register object V640;
	object V641;
	V640= (V631);
	V641= CMPcar((V640));
	goto T1078;
T1078:;
	if(!(((V640))==Cnil)){
	goto T1079;}
	goto T1074;
	goto T1079;
T1079:;
	{register object V642;
	register object V643;
	V642= CMPcdr((V641));
	V643= CMPcar((V642));
	goto T1087;
T1087:;
	if(!(((V642))==Cnil)){
	goto T1088;}
	goto T1083;
	goto T1088;
T1088:;
	if(!(type_of((V643))==t_fixnum||type_of((V643))==t_bignum)){
	goto T1092;}
	{register object V644;
	register object V645;
	V644= nth(fix((V643)),(V630));
	V645= Ct;
	((V644))->c.c_car = (V645);}
	goto T1092;
T1092:;
	V642= CMPcdr((V642));
	V643= CMPcar((V642));
	goto T1087;}
	goto T1083;
T1083:;
	V640= CMPcdr((V640));
	V641= CMPcar((V640));
	goto T1078;}
	goto T1074;
T1074:;
	{object V646;
	object V647= (V630);
	if(V647==Cnil){
	V630= Cnil;
	goto T1109;}
	base[4]=V646=MMcons(Cnil,Cnil);
	goto T1110;
T1110:;
	if((CMPcar((V647->c.c_car)))!=Cnil){
	goto T1112;}
	if((CMPcdr((V647->c.c_car)))==Cnil){
	goto T1113;}
	goto T1112;
T1112:;
	(V646->c.c_car)= (V647->c.c_car);
	goto T1111;
	goto T1113;
T1113:;
	(V646->c.c_car)= Cnil;
	goto T1111;
T1111:;
	if((V647=MMcdr(V647))==Cnil){
	V630= base[4];
	goto T1109;}
	V646=MMcdr(V646)=MMcons(Cnil,Cnil);
	goto T1110;}
	goto T1109;
T1109:;
	{object V649;
	base[4]=VV[215]->s.s_gfdef;
	{object V650;
	{long V651;
	V651= -1;
	{object V652;
	object V653= (V630);
	if(V653==Cnil){
	V650= Cnil;
	goto T1119;}
	base[5]=V652=MMcons(Cnil,Cnil);
	goto T1121;
T1121:;
	if(((V653->c.c_car))==Cnil){
	goto T1124;}
	V651= (long)(V651)+(1);
	(V652->c.c_car)= CMPmake_fixnum(V651);
	goto T1122;
	goto T1124;
T1124:;
	(V652->c.c_car)= Cnil;
	goto T1122;
T1122:;
	if((V653=MMcdr(V653))==Cnil){
	V650= base[5];
	goto T1119;}
	V652=MMcdr(V652)=MMcons(Cnil,Cnil);
	goto T1121;}}
	goto T1119;
T1119:;
	 vs_top=base+5;
	 while(V650!=Cnil)
	 {vs_push((V650)->c.c_car);V650=(V650)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk215)();
	vs_top=sup;
	V649= vs_base[0];
	{object V655;
	object V656= (V631);
	if(V656==Cnil){
	V631= Cnil;
	goto T1127;}
	base[4]=V655=MMcons(Cnil,Cnil);
	goto T1128;
T1128:;
	V658= CMPcar((V656->c.c_car));
	{object V660;
	object V661= CMPcdr((V656->c.c_car));
	if(V661==Cnil){
	V659= Cnil;
	goto T1130;}
	base[5]=V660=MMcons(Cnil,Cnil);
	goto T1131;
T1131:;
	if(!(type_of((V661->c.c_car))==t_fixnum||type_of((V661->c.c_car))==t_bignum)){
	goto T1134;}
	(V660->c.c_car)= ((V649))->v.v_self[fix((V661->c.c_car))];
	goto T1132;
	goto T1134;
T1134:;
	(V660->c.c_car)= (V661->c.c_car);
	goto T1132;
T1132:;
	if((V661=MMcdr(V661))==Cnil){
	V659= base[5];
	goto T1130;}
	V660=MMcdr(V660)=MMcons(Cnil,Cnil);
	goto T1131;}
	goto T1130;
T1130:;
	(V655->c.c_car)= make_cons(/* INLINE-ARGS */V658,V659);
	if((V656=MMcdr(V656))==Cnil){
	V631= base[4];
	goto T1127;}
	V655=MMcdr(V655)=MMcons(Cnil,Cnil);
	goto T1128;}
	goto T1127;
T1127:;}
	base[4]= (V630);
	base[5]= (V631);
	vs_top=(vs_base=base+4)+2;
	return;}}
	}
}
/*	function definition for MUTATE-SLOTS-AND-CALLS	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V663;
	object V664;
	check_arg(2);
	V663=(base[0]);
	V664=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V665;
	object V666;
	register long V667;
	V665= (*(LnkLI216))((V663));
	V666= (*(LnkLI217))(CMPcdr((V664)));
	V667= 0;
	{object V668;
	object V669;
	V668= (V665);
	V669= CMPcar((V668));
	goto T1145;
T1145:;
	if(!(((V668))==Cnil)){
	goto T1146;}
	goto T1141;
	goto T1146;
T1146:;
	{register object V670;
	object V671;
	V670= CMPcdr((V669));
	V671= CMPcar((V670));
	goto T1154;
T1154:;
	if(!(((V670))==Cnil)){
	goto T1155;}
	goto T1150;
	goto T1155;
T1155:;
	V667= (long)(V667)+(1);
	{register object V672;
	register object V673;
	V672= CMPcdr((V671));
	V673= CMPcar((V672));
	goto T1165;
T1165:;
	if(!(((V672))==Cnil)){
	goto T1166;}
	goto T1161;
	goto T1166;
T1166:;
	{register object V675;
	V675= CMPmake_fixnum(V667);
	(CMPcdr(V673))->c.c_car = (V675);
	(void)(CMPcdr(V673));}
	V672= CMPcdr((V672));
	V673= CMPcar((V672));
	goto T1165;}
	goto T1161;
T1161:;
	V670= CMPcdr((V670));
	V671= CMPcar((V670));
	goto T1154;}
	goto T1150;
T1150:;
	V668= CMPcdr((V668));
	V669= CMPcar((V668));
	goto T1145;}
	goto T1141;
T1141:;
	{object V676;
	object V677;
	V676= (V666);
	V677= CMPcar((V676));
	goto T1192;
T1192:;
	if(!(((V676))==Cnil)){
	goto T1193;}
	goto T1188;
	goto T1193;
T1193:;
	V667= (long)(V667)+(1);
	{register object V678;
	object V679;
	V678= CMPcdr((V677));
	V679= CMPcar((V678));
	goto T1203;
T1203:;
	if(!(((V678))==Cnil)){
	goto T1204;}
	goto T1199;
	goto T1204;
T1204:;
	{object V681;
	V681= CMPmake_fixnum(V667);
	(CMPcdr(V679))->c.c_car = (V681);
	(void)(CMPcdr(V679));}
	V678= CMPcdr((V678));
	V679= CMPcar((V678));
	goto T1203;}
	goto T1199;
T1199:;
	V676= CMPcdr((V676));
	V677= CMPcar((V676));
	goto T1192;}
	goto T1188;
T1188:;
	base[2]= (V665);
	base[3]= (V666);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function SYMBOL-PKG-NAME	*/

static object LI54(V683)

object V683;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V684;
	base[0]= (V683);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V684= vs_base[0];
	if(((V684))==Cnil){
	goto T1226;}
	base[0]= (V684);
	vs_top=(vs_base=base+0)+1;
	Lpackage_name();
	vs_top=sup;
	{object V685 = vs_base[0];
	VMR52(V685)}
	goto T1226;
T1226:;
	{object V686 = VV[99];
	VMR52(V686)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SYMBOL-LESSP	*/

static object LI55(V689,V690)

object V689;object V690;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V689);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V691= vs_base[0];
	base[0]= (V690);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V692= vs_base[0];
	if(!((V691)==(V692))){
	goto T1230;}
	base[0]= symbol_name((V689));
	base[1]= symbol_name((V690));
	vs_top=(vs_base=base+0)+2;
	Lstring_lessp();
	vs_top=sup;
	{object V693 = vs_base[0];
	VMR53(V693)}
	goto T1230;
T1230:;
	base[0]= (*(LnkLI218))((V689));
	base[1]= (*(LnkLI218))((V690));
	vs_top=(vs_base=base+0)+2;
	Lstring_lessp();
	vs_top=sup;
	{object V694 = vs_base[0];
	VMR53(V694)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SYMBOL-OR-CONS-LESSP	*/

static object LI56(V697,V698)

register object V697;register object V698;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{register object V699;
	V699= (V697);
	if(!(type_of((V699))==t_symbol)){
	goto T1241;}
	{register object V700;
	V700= (V698);
	if(!(type_of((V700))==t_symbol)){
	goto T1244;}
	{object V701 = (*(LnkLI219))((V697),(V698));
	VMR54(V701)}
	goto T1244;
T1244:;
	if(!(type_of((V700))==t_cons)){
	goto T1247;}
	{object V702 = Ct;
	VMR54(V702)}
	goto T1247;
T1247:;
	base[1]= VV[100];
	base[2]= (V700);
	base[3]= VV[101];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk220)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V703 = vs_base[0];
	VMR54(V703)}}
	goto T1241;
T1241:;
	if(!(type_of((V699))==t_cons)){
	goto T1254;}
	{register object V704;
	V704= (V698);
	if(!(type_of((V704))==t_symbol)){
	goto T1257;}
	{object V705 = Cnil;
	VMR54(V705)}
	goto T1257;
T1257:;
	if(!(type_of((V704))==t_cons)){
	goto T1260;}
	if(!((CMPcar((V697)))==(CMPcar((V698))))){
	goto T1263;}
	V697= CMPcdr((V697));
	V698= CMPcdr((V698));
	goto TTL;
	goto T1263;
T1263:;
	V697= CMPcar((V697));
	V698= CMPcar((V698));
	goto TTL;
	goto T1260;
T1260:;
	base[1]= VV[100];
	base[2]= (V704);
	base[3]= VV[102];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk220)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V706 = vs_base[0];
	VMR54(V706)}}
	goto T1254;
T1254:;
	base[1]= VV[103];
	base[2]= (V699);
	base[3]= VV[104];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk220)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V707 = vs_base[0];
	VMR54(V707)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-SLOTS	*/

static object LI57(V709)

object V709;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V710;
	object V711= (V709);
	if(V711==Cnil){
	{object V712 = Cnil;
	VMR55(V712)}}
	base[0]=V710=MMcons(Cnil,Cnil);
	goto T1279;
T1279:;
	V714= CMPcar((V711->c.c_car));
	base[1]= CMPcdr((V711->c.c_car));
	base[2]= (VV[221]->s.s_gfdef);
	base[3]= VV[65];
	base[4]= (VV[204]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk222)();
	vs_top=sup;
	V715= vs_base[0];
	(V710->c.c_car)= make_cons(/* INLINE-ARGS */V714,V715);
	if((V711=MMcdr(V711))==Cnil){
	{object V716 = base[0];
	VMR55(V716)}}
	V710=MMcdr(V710)=MMcons(Cnil,Cnil);
	goto T1279;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-CALLS	*/

static object LI58(V718)

object V718;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= (V718);
	base[1]= (VV[221]->s.s_gfdef);
	base[2]= VV[65];
	base[3]= (VV[204]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk222)();
	vs_top=sup;
	{object V719 = vs_base[0];
	VMR56(V719)}
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
	{object V720=base[0]->c.c_cdr;
	if(endp(V720))invalid_macro_call();
	{object V721= (V720->c.c_car);
	if(endp(V721))invalid_macro_call();
	base[2]= (V721->c.c_car);
	V721=V721->c.c_cdr;
	if(endp(V721))invalid_macro_call();
	base[3]= (V721->c.c_car);
	V721=V721->c.c_cdr;
	if(endp(V721))invalid_macro_call();
	base[4]= (V721->c.c_car);
	V721=V721->c.c_cdr;
	if(!endp(V721))invalid_macro_call();}
	V720=V720->c.c_cdr;
	base[5]= V720;}
	{object V722;
	object V723;
	{register object V724;
	register object V725;
	register object V726;
	register object V727;
	V724= Cnil;
	V725= Cnil;
	V726= Cnil;
	V727= Cnil;
	{register object V728;
	register object V729;
	register object V730;
	register object V731;
	register object V732;
	register object V733;
	V728= base[3];
	V729= Cnil;
	V730= base[2];
	V731= Cnil;
	V732= small_fixnum(0);
	V733= Cnil;
	goto T1303;
T1303:;
	{register object V734;
	if(!(((V728))==Cnil)){
	goto T1309;}
	goto T1295;
	goto T1309;
T1309:;
	V734= CMPcar((V728));
	V728= CMPcdr((V728));
	V729= (V734);}
	{register object V735;
	if(!(((V730))==Cnil)){
	goto T1317;}
	goto T1295;
	goto T1317;
T1317:;
	V735= CMPcar((V730));
	V730= CMPcdr((V730));
	V731= (V735);}
	{register object V736;
	V736= (V732);
	V732= number_plus((V732),small_fixnum(1));
	V733= (V736);}
	if(((V729))==Cnil){
	goto T1304;}
	{register object V737;
	V737= (V731);
	if(((V726))!=Cnil){
	goto T1329;}
	V727= make_cons((V737),Cnil);
	V726= (V727);
	goto T1327;
	goto T1329;
T1329:;
	V739= make_cons((V737),Cnil);
	((V727))->c.c_cdr = /* INLINE-ARGS */V739;
	V738= (V727);
	V727= CMPcdr(V738);}
	goto T1327;
T1327:;
	{register object V740;
	V740= (*(LnkLI211))((V733));
	if(((V724))!=Cnil){
	goto T1337;}
	V725= make_cons((V740),Cnil);
	V724= (V725);
	goto T1304;
	goto T1337;
T1337:;
	V742= make_cons((V740),Cnil);
	((V725))->c.c_cdr = /* INLINE-ARGS */V742;
	V741= (V725);
	V725= CMPcdr(V741);}
	goto T1304;
T1304:;
	goto T1303;}
	goto T1295;
T1295:;
	base[6]= (V724);
	base[7]= (V726);
	vs_top=(vs_base=base+6)+2;}
	if(vs_base>=vs_top){vs_top=sup;goto T1346;}
	V722= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1347;}
	V723= vs_base[0];
	vs_top=sup;
	goto T1348;
	goto T1346;
T1346:;
	V722= Cnil;
	goto T1347;
T1347:;
	V723= Cnil;
	goto T1348;
T1348:;
	base[6]= listA(3,VV[105],list(5,VV[70],VV[106],base[4],(V723),(V722)),base[5]);
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
	{object V743=base[0]->c.c_cdr;
	if(endp(V743))invalid_macro_call();
	{object V744= (V743->c.c_car);
	if(endp(V744))invalid_macro_call();
	base[2]= (V744->c.c_car);
	V744=V744->c.c_cdr;
	if(endp(V744))invalid_macro_call();
	base[3]= (V744->c.c_car);
	V744=V744->c.c_cdr;
	if(endp(V744))invalid_macro_call();
	base[4]= (V744->c.c_car);
	V744=V744->c.c_cdr;
	if(endp(V744))invalid_macro_call();
	base[5]= (V744->c.c_car);
	V744=V744->c.c_cdr;
	if(endp(V744))invalid_macro_call();
	base[6]= (V744->c.c_car);
	V744=V744->c.c_cdr;
	if(!endp(V744))invalid_macro_call();}
	V743=V743->c.c_cdr;
	base[7]= V743;}
	V745= list(4,base[2],base[3],base[4],base[5]);
	{object V747;
	object V748= base[6];
	object V749= base[5];
	if(V748==Cnil||V749==Cnil){
	V746= Cnil;
	goto T1349;}
	base[8]=V747=MMcons(Cnil,Cnil);
	goto T1350;
T1350:;
	(V747->c.c_car)= list(2,(V748->c.c_car),list(2,VV[108],(V749->c.c_car)));
	if((V748=MMcdr(V748))==Cnil||(V749=MMcdr(V749))==Cnil){
	V746= base[8];
	goto T1349;}
	V747=MMcdr(V747)=MMcons(Cnil,Cnil);
	goto T1350;}
	goto T1349;
T1349:;
	base[8]= list(3,VV[107],/* INLINE-ARGS */V745,listA(3,VV[0],V746,base[7]));
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
	{object V752=base[0]->c.c_cdr;
	if(endp(V752))invalid_macro_call();
	{object V753= (V752->c.c_car);
	if(endp(V753))invalid_macro_call();
	base[2]= (V753->c.c_car);
	V753=V753->c.c_cdr;
	if(endp(V753))invalid_macro_call();
	base[3]= (V753->c.c_car);
	V753=V753->c.c_cdr;
	if(endp(V753))invalid_macro_call();
	base[4]= (V753->c.c_car);
	V753=V753->c.c_cdr;
	if(endp(V753))invalid_macro_call();
	base[5]= (V753->c.c_car);
	V753=V753->c.c_cdr;
	if(!endp(V753))invalid_macro_call();}
	V752=V752->c.c_cdr;
	base[6]= V752;}
	V754= list(2,VV[110],base[4]);
	V755= list(2,VV[111],listA(3,VV[112],VV[110],base[5]));
	V756= list(2,base[2],VV[113]);
	V757= list(4,/* INLINE-ARGS */V754,/* INLINE-ARGS */V755,/* INLINE-ARGS */V756,list(2,base[3],VV[114]));
	V758= list(2,VV[115],(*(LnkLI223))(base[2]));
	V759= list(2,VV[115],(*(LnkLI224))(base[3]));
	if(!(type_of(base[4])==t_symbol)){
	goto T1355;}
	V761= list(2,VV[115],list(2,VV[116],base[4]));
	base[7]= make_cons(/* INLINE-ARGS */V761,Cnil);
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
	V760= vs_base[0];
	base[7]= listA(5,VV[109],/* INLINE-ARGS */V757,/* INLINE-ARGS */V758,/* INLINE-ARGS */V759,V760);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	function definition for SPLIT-DECLARATIONS	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	{object V762;
	object V763;
	check_arg(2);
	V762=(base[0]);
	V763=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V764;
	object V765;
	object V766;
	V764= Cnil;
	V765= Cnil;
	V766= Cnil;
	goto T1361;
T1361:;
	if(((V762))!=Cnil){
	goto T1363;}
	goto T1359;
	goto T1363;
T1363:;
	V766= CMPcar((V762));
	if(!(type_of((V766))==t_cons)){
	goto T1369;}
	if((CMPcar((V766)))==(VV[115])){
	goto T1368;}
	goto T1369;
T1369:;
	goto T1359;
	goto T1368;
T1368:;
	{object V767;
	register object V768;
	V767= CMPcdr((V766));
	V768= CMPcar((V767));
	goto T1377;
T1377:;
	if(!(((V767))==Cnil)){
	goto T1378;}
	goto T1373;
	goto T1378;
T1378:;
	if(!(type_of((V768))==t_cons)){
	goto T1382;}
	{register object V769;
	V769= CMPcar((V768));
	{register object x= (V769),V770= (VV[117]->s.s_dbind);
	while(V770!=Cnil)
	if(eql(x,V770->c.c_car)){
	goto T1388;
	}else V770=V770->c.c_cdr;
	goto T1387;}
	goto T1388;
T1388:;
	{object V771;
	V771= list(2,VV[115],(V768));
	V765= make_cons((V771),(V765));
	goto T1382;}
	goto T1387;
T1387:;
	{object V772;
	object V773;
	object V774;
	register object V775;
	register object V776;
	{register object x= (V769),V777= (VV[118]->s.s_dbind);
	while(V777!=Cnil)
	if(eql(x,V777->c.c_car)){
	V772= V777;
	goto T1391;
	}else V777=V777->c.c_cdr;
	V772= Cnil;}
	goto T1391;
T1391:;
	{register object x= (V769),V778= (VV[119]->s.s_dbind);
	while(V778!=Cnil)
	if(eql(x,V778->c.c_car)){
	V773= V778;
	goto T1392;
	}else V778=V778->c.c_cdr;
	V773= Cnil;}
	goto T1392;
T1392:;
	{object V780;
	V780= CMPcar((V768));
	V768= CMPcdr((V768));
	V779= (V780);}
	V774= make_cons(V779,Cnil);
	V775= Cnil;
	V776= Cnil;
	if(((V772))!=Cnil){
	goto T1398;}
	if(((V773))!=Cnil){
	goto T1398;}
	base[4]= VV[120];
	base[5]= (V769);
	base[6]= VV[121];
	base[7]= (V769);
	base[8]= VV[117];
	base[9]= VV[118];
	base[10]= VV[119];
	vs_top=(vs_base=base+4)+7;
	(void) (*Lnk225)();
	vs_top=sup;
	(VV[119]->s.s_dbind)= make_cons(V769,(VV[119]->s.s_dbind));
	goto T1398;
T1398:;
	if(((V772))==Cnil){
	goto T1412;}
	{object V783;
	V783= CMPcar((V768));
	V768= CMPcdr((V768));
	V782= (V783);}
	V784= make_cons(V782,Cnil);
	V774= append((V774),/* INLINE-ARGS */V784);
	goto T1412;
T1412:;
	{register object V785;
	register object V786;
	V785= (V768);
	V786= CMPcar((V785));
	goto T1424;
T1424:;
	if(!(((V785))==Cnil)){
	goto T1425;}
	goto T1420;
	goto T1425;
T1425:;
	{register object x= (V786),V787= (V763);
	while(V787!=Cnil)
	if(eql(x,V787->c.c_car)){
	goto T1432;
	}else V787=V787->c.c_cdr;
	goto T1431;}
	goto T1432;
T1432:;
	V776= make_cons(V786,(V776));
	goto T1429;
	goto T1431;
T1431:;
	V775= make_cons(V786,(V775));
	goto T1429;
T1429:;
	V785= CMPcdr((V785));
	V786= CMPcar((V785));
	goto T1424;}
	goto T1420;
T1420:;
	if(((V776))==Cnil){
	goto T1440;}
	{object V790;
	V790= list(2,VV[115],append((V774),(V776)));
	V765= make_cons((V790),(V765));}
	goto T1440;
T1440:;
	if(((V775))==Cnil){
	goto T1382;}
	{object V791;
	V791= list(2,VV[115],append((V774),(V775)));
	V764= make_cons((V791),(V764));}}}
	goto T1382;
T1382:;
	V767= CMPcdr((V767));
	V768= CMPcar((V767));
	goto T1377;}
	goto T1373;
T1373:;
	V762= CMPcdr((V762));
	goto T1361;
	goto T1359;
T1359:;
	base[2]= (V765);
	base[3]= (V764);
	base[4]= (V762);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function MAKE-METHOD-INITARGS-FORM-INTERNAL	*/

static object LI63(V795,V796,V797)

object V795;object V796;object V797;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	{object V798;
	object V799;
	object V800;
	V798= Cnil;
	V799= Cnil;
	V800= Cnil;
	if(!((3)==((long)length((V795))))){
	goto T1459;}
	V798= CMPcadr((V795));
	if(!((2)==((long)length((V798))))){
	goto T1459;}
	V799= CMPcaddr((V795));
	if(!(type_of((V799))==t_cons)){
	goto T1459;}
	if(!((VV[122])==(CMPcar((V799))))){
	goto T1459;}
	V801= CMPcar((V798));
	V800= CMPcadr((V799));
	if(!((/* INLINE-ARGS */V801)==(CMPcadr((V800))))){
	goto T1459;}
	if((CMPcadr((V798)))==(CMPcaddr((V800)))){
	goto T1460;}
	goto T1459;
T1459:;
	V802= list(2,VV[125],(V795));
	{object V803 = list(4,VV[123],VV[124],/* INLINE-ARGS */V802,list(2,VV[57],(V796)));
	VMR61(V803)}
	goto T1460;
T1460:;
	{object V804;
	register object V805;
	register object V806;
	register object V807;
	V804= CMPcar((V800));
	V805= small_fixnum(0);
	V806= Cnil;
	V807= Cnil;
	{register object V808;
	register object V809;
	V808= (V804);
	V809= CMPcar((V808));
	goto T1483;
T1483:;
	if(!(((V808))==Cnil)){
	goto T1484;}
	goto T1479;
	goto T1484;
T1484:;
	{register object x= (V809),V810= VV[126];
	while(V810!=Cnil)
	if(eql(x,V810->c.c_car)){
	goto T1490;
	}else V810=V810->c.c_cdr;
	goto T1488;}
	goto T1490;
T1490:;
	V806= Ct;
	goto T1479;
	goto T1488;
T1488:;
	if(!(((V809))==(VV[127]))){
	goto T1493;}
	goto T1479;
	goto T1493;
T1493:;
	V805= number_plus((V805),small_fixnum(1));
	{register object V811;
	V811= (V809);
	V807= make_cons((V811),(V807));}
	V808= CMPcdr((V808));
	V809= CMPcar((V808));
	goto T1483;}
	goto T1479;
T1479:;
	V807= nreverse((V807));
	{object V814;
	V814= make_cons((V805),(V806));
	{object V815;
	base[3]= (V796);
	base[4]= VV[128];
	base[5]= Cnil;
	vs_top=(vs_base=base+3)+3;
	Lgetf();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V814);
	base[4]= VV[129];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V815= vs_base[0];
	{object V816;
	base[2]= (V796);
	base[3]= (V815);
	base[4]= VV[128];
	vs_top=(vs_base=base+2)+3;
	siLput_f();
	vs_top=sup;
	V816= vs_base[0];
	V796= (V816);}}}
	{object V817 = (*(LnkLI226))((V796),CMPcddr((V799)),(V807),(V800),(V806));
	VMR61(V817)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-METHOD-INITARGS-FORM-INTERNAL1	*/

static object LI64(V823,V824,V825,V826,V827)

object V823;object V824;register object V825;object V826;object V827;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{object V828;
	object V829;
	object V830;
	base[0]= (V824);
	base[1]= (V825);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	if(vs_base>=vs_top){vs_top=sup;goto T1527;}
	V828= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1528;}
	V829= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1529;}
	V830= vs_base[0];
	vs_top=sup;
	goto T1530;
	goto T1527;
T1527:;
	V828= Cnil;
	goto T1528;
T1528:;
	V829= Cnil;
	goto T1529;
T1529:;
	V830= Cnil;
	goto T1530;
T1530:;
	{object V831;
	object V832;
	if(((V827))==Cnil){
	goto T1533;}
	V831= VV[130];
	goto T1531;
	goto T1533;
T1533:;
	V831= Cnil;
	goto T1531;
T1531:;
	if(((V827))==Cnil){
	goto T1537;}
	V833= make_cons((V831),Cnil);
	V832= append((V825),/* INLINE-ARGS */V833);
	goto T1535;
	goto T1537;
T1537:;
	V832= (V825);
	goto T1535;
T1535:;
	V834= listA(3,VV[111],VV[133],(V832));
	V835= listA(5,CMPcar((V826)),VV[133],(V825),(V831),CMPcdddr((V826)));
	V836= list(3,VV[111],VV[133],list(3,VV[134],VV[135],listA(3,VV[136],/* INLINE-ARGS */V835,append((V829),(V830)))));
	V837= list(2,VV[125],listA(3,VV[132],/* INLINE-ARGS */V834,append((V828),/* INLINE-ARGS */V836)));
	{object V838 = list(4,VV[123],VV[131],/* INLINE-ARGS */V837,list(2,VV[57],(V823)));
	VMR62(V838)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-FROM-FAST-FUNCTION	*/

static object LI66(V840)

object V840;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]=MMcons((V840),Cnil);
	{object V841;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	V841= (VFUN_NARGS=2,(*(LnkLI227))((base[0]->c.c_car),VV[129]));
	base[4]= CMPcar((V841));
	base[4]=MMcons(base[4],base[2]);
	base[5]= CMPcdr((V841));
	base[5]=MMcons(base[5],base[4]);
	(base[1]->c.c_car)= 
	make_cclosure_new(LC74,Cnil,base[5],Cdata);
	{register object V842;
	object V843;
	V842= (VFUN_NARGS=2,(*(LnkLI227))((base[0]->c.c_car),VV[139]));{object V845;
	{object V846 =(CMPcar((V842)))->s.s_plist;
	 object ind= VV[140];
	while(V846!=Cnil){
	if(V846->c.c_car==ind){
	V845= (V846->c.c_cdr->c.c_car);
	goto T1549;
	}else V846=V846->c.c_cdr->c.c_cdr;}
	V845= Cnil;}
	goto T1549;
T1549:;
	if(V845==Cnil)goto T1548;
	V844= V845;
	goto T1547;
	goto T1548;
T1548:;}
	V847= CMPcar((V842));
	{object V849;
	V849= symbol_name(CMPcar((V842)));
	base[8]= VV[141];
	base[9]= (V849);
	base[10]= VV[142];
	base[11]= small_fixnum(5);
	vs_top=(vs_base=base+8)+4;
	Lstring_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1553;}
	base[9]= (V849);
	base[10]= small_fixnum(5);
	vs_top=(vs_base=base+9)+2;
	Lsubseq();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (VV[143]->s.s_dbind);
	vs_top=(vs_base=base+8)+2;
	Lintern();
	vs_top=sup;
	V848= vs_base[0];
	goto T1550;
	goto T1553;
T1553:;
	V848= CMPcar((V842));}
	goto T1550;
T1550:;
	V844= sputprop(/* INLINE-ARGS */V847,VV[140],V848);
	goto T1547;
T1547:;
	V843= make_cons(V844,CMPcdr((V842)));
	base[8]= (base[1]->c.c_car);
	base[9]= (V843);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk228)();
	vs_top=sup;}
	{object V850;
	V850= (base[1]->c.c_car);
	(void)((*(LnkLI229))((base[0]->c.c_car),(V850),VV[131]));}
	{object V852 = (base[1]->c.c_car);
	VMR63(V852)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-METHOD-FUNCTION-PV-CELL	*/

static object LI67(object V854,object V853,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB64 VMS64 VMV64
	{object V855;
	object V856;
	object V857;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V855= V854;
	V856= V853;
	narg = narg - 2;
	if (narg <= 0) goto T1566;
	else {
	V857= first;}
	--narg; goto T1567;
	goto T1566;
T1566:;
	V857= Cnil;
	goto T1567;
T1567:;
	{object V858;
	if((V857)!=Cnil){
	V858= (V857);
	goto T1569;}
	V858= (*(LnkLI230))((V855));
	goto T1569;
T1569:;
	if(((V858))==Cnil){
	goto T1571;}
	{object V859;
	V859= (*(LnkLI231))((V858),(V856));
	if(((V859))==Cnil){
	goto T1575;}
	{object V860 = (*(LnkLI232))((V858),(V859));
	VMR64(V860)}
	goto T1575;
T1575:;
	{object V861 = Cnil;
	VMR64(V861)}}
	goto T1571;
T1571:;
	{object V862 = Cnil;
	VMR64(V862)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function PV-TABLE-LOOKUP-PV-ARGS	*/

static object LI68(object V863,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB65 VMS65 VMV65
	{object V864;
	object V865;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V864= V863;
	narg= narg - 1;
	V866 = list_vector_new(narg,first,ap);
	V865= V866;
	V867= (VFUN_NARGS=1,(*(LnkLI233))((V865)));
	{object V868 = (*(LnkLI232))((V864),/* INLINE-ARGS */V867);
	VMR65(V868)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function PV-WRAPPERS-FROM-PV-ARGS	*/

static object LI69(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB66 VMS66 VMV66
	{object V869;
	va_start(ap,first);
	narg= narg - 0;
	V870 = list_vector_new(narg,first,ap);
	V869= V870;
	{long V871;
	object V872;
	register object V873;
	object V874;
	V871= (long)length((V869));
	base[1]= CMPmake_fixnum(V871);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V872= vs_base[0];
	V873= Cnil;
	V874= (V872);
	{register object V875;
	register object V876;
	V875= (V869);
	V876= CMPcar((V875));
	goto T1586;
T1586:;
	if(!(((V875))==Cnil)){
	goto T1587;}
	goto T1582;
	goto T1587;
T1587:;
	{register object V877;
	V877= (V876);
	if(type_of((V877))==t_structure){
	goto T1596;}
	goto T1594;
	goto T1596;
T1596:;
	if(!((((V877))->str.str_def)==(VV[145]))){
	goto T1594;}}
	V873= STREF(object,(V876),0);
	goto T1592;
	goto T1594;
T1594:;{object V878;
	V878= (VV[147]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V876);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk234)();
	vs_top=sup;
	V879= vs_base[0];
	if(!((V878)==(CMPcar(V879)))){
	goto T1599;}}
	V873= CMPcar(((V876))->cc.cc_turbo[13]);
	goto T1592;
	goto T1599;
T1599:;
	if(!(type_of((V876))==t_structure)){
	goto T1605;}
	V873= (*(LnkLI236))((V876));
	goto T1592;
	goto T1605;
T1605:;
	if(!(type_of((V876))==t_symbol)){
	goto T1608;}
	if(((V876))==Cnil){
	goto T1611;}
	V873= (VV[148]->s.s_dbind);
	goto T1592;
	goto T1611;
T1611:;
	V873= (VV[149]->s.s_dbind);
	goto T1592;
	goto T1608;
T1608:;
	V873= (*(LnkLI237))((V876));
	goto T1592;
T1592:;
	if((Ct)==(((V873))->v.v_self[8])){
	goto T1613;}
	V873= (*(LnkLI238))((V876));
	goto T1613;
T1613:;
	{register object V880;
	register object V881;
	V880= (V874);
	V881= (V873);
	((V880))->c.c_car = (V881);}
	V875= CMPcdr((V875));
	V876= CMPcar((V875));
	goto T1586;}
	goto T1582;
T1582:;
	V874= CMPcdr((V874));
	if(!((V871)==(1))){
	goto T1628;}
	V872= CMPcar((V872));
	goto T1628;
T1628:;
	{object V882 = (V872);
	VMR66(V882)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PV-WRAPPERS-FROM-ALL-ARGS	*/

static object LI70(V885,V886)

object V885;register object V886;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V887;
	object V888;
	V887= 0;
	V888= STREF(object,(V885),8);
	{register object V889;
	object V890;
	V889= (V888);
	V890= CMPcar((V889));
	goto T1638;
T1638:;
	if(!(((V889))==Cnil)){
	goto T1639;}
	goto T1634;
	goto T1639;
T1639:;
	if(((V890))==Cnil){
	goto T1643;}
	V887= (long)(V887)+(1);
	goto T1643;
T1643:;
	V889= CMPcdr((V889));
	V890= CMPcar((V889));
	goto T1638;}
	goto T1634;
T1634:;
	{object V891;
	register object V892;
	base[1]= CMPmake_fixnum(V887);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V891= vs_base[0];
	V892= (V891);
	{register object V893;
	object V894;
	V893= (V888);
	V894= CMPcar((V893));
	goto T1659;
T1659:;
	if(!(((V893))==Cnil)){
	goto T1660;}
	goto T1655;
	goto T1660;
T1660:;
	if(((V894))==Cnil){
	goto T1664;}
	{object V895;
	register object V896;
	V895= CMPcar((V886));
	V896= (*(LnkLI239))((V895));
	if(((V896))!=Cnil){
	goto T1669;}
	base[4]= VV[150];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T1669;
T1669:;
	{register object V898;
	V898= (V896);
	(V892)->c.c_car = (V898);}
	V892= CMPcdr((V892));}
	goto T1664;
T1664:;
	V886= CMPcdr((V886));
	V893= CMPcdr((V893));
	V894= CMPcar((V893));
	goto T1659;}
	goto T1655;
T1655:;
	if(!((V887)==(1))){
	goto T1684;}
	V891= CMPcar((V891));
	goto T1684;
T1684:;
	{object V899 = (V891);
	VMR67(V899)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PV-WRAPPERS-FROM-ALL-WRAPPERS	*/

static object LI71(V902,V903)

object V902;register object V903;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{long V904;
	object V905;
	V904= 0;
	V905= STREF(object,(V902),8);
	{register object V906;
	object V907;
	V906= (V905);
	V907= CMPcar((V906));
	goto T1694;
T1694:;
	if(!(((V906))==Cnil)){
	goto T1695;}
	goto T1690;
	goto T1695;
T1695:;
	if(((V907))==Cnil){
	goto T1699;}
	V904= (long)(V904)+(1);
	goto T1699;
T1699:;
	V906= CMPcdr((V906));
	V907= CMPcar((V906));
	goto T1694;}
	goto T1690;
T1690:;
	{object V908;
	register object V909;
	base[1]= CMPmake_fixnum(V904);
	vs_top=(vs_base=base+1)+1;
	Lmake_list();
	vs_top=sup;
	V908= vs_base[0];
	V909= (V908);
	{register object V910;
	object V911;
	V910= (V905);
	V911= CMPcar((V910));
	goto T1715;
T1715:;
	if(!(((V910))==Cnil)){
	goto T1716;}
	goto T1711;
	goto T1716;
T1716:;
	if(((V911))==Cnil){
	goto T1720;}
	{register object V912;
	V912= CMPcar((V903));
	if(((V912))!=Cnil){
	goto T1724;}
	base[2]= VV[151];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1724;
T1724:;
	{register object V914;
	V914= (V912);
	(V909)->c.c_car = (V914);}
	V909= CMPcdr((V909));}
	goto T1720;
T1720:;
	V903= CMPcdr((V903));
	V910= CMPcdr((V910));
	V911= CMPcar((V910));
	goto T1715;}
	goto T1711;
T1711:;
	if(!((V904)==(1))){
	goto T1739;}
	V908= CMPcar((V908));
	goto T1739;
T1739:;
	{object V915 = (V908);
	VMR68(V915)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC74(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{register object V916;
	object V917;
	check_arg(2);
	V916=(base[0]);
	V917=(base[1]);
	vs_top=sup;
	if(((base0[2]->c.c_car))!=Cnil){
	goto T1743;}
	(base0[2]->c.c_car)= (*(LnkLI230))((base0[4]->c.c_car));
	goto T1743;
T1743:;
	{object V918;
	register object V919;
	object V920;
	object V921;
	if(((base0[2]->c.c_car))==Cnil){
	goto T1749;}
	V918= (VFUN_NARGS=3,(*(LnkLI240))((base0[3]->c.c_car),(V916),(base0[2]->c.c_car)));
	goto T1747;
	goto T1749;
T1749:;
	V918= Cnil;
	goto T1747;
T1747:;
	V919= CMPcar((V917));
	V920= CMPcdr((V917));
	if(((V919))==Cnil){
	goto T1755;}
	if(type_of(V919)==t_structure){
	goto T1761;}
	goto T1759;
	goto T1761;
T1761:;
	if(!(((V919)->str.str_def)==(VV[144]))){
	goto T1759;}
	base[6]= (V919);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V922= vs_base[0];
	goto T1757;
	goto T1759;
T1759:;
	V922= (V919);
	goto T1757;
T1757:;
	V924= make_cons((V920),Cnil);
	V921= (VFUN_NARGS=4,(*(LnkLI241))(VV[124],V922,VV[138],/* INLINE-ARGS */V924));
	goto T1753;
	goto T1755;
T1755:;
	V921= Cnil;
	goto T1753;
T1753:;
	if(((base0[0]->c.c_car))==Cnil){
	goto T1765;}
	{object V925;
	object V926;
	V925= nthcdr(fix((base0[1]->c.c_car)),(V916));
	base[8]= (V916);
	base[9]= (V925);
	vs_top=(vs_base=base+8)+2;
	Lldiff();
	vs_top=sup;
	V926= vs_base[0];
	base[8]= (base0[4]->c.c_car);
	base[9]= (V918);
	base[10]= (V921);
	{object V927;
	V928= make_cons((V925),Cnil);
	V927= nconc((V926),/* INLINE-ARGS */V928);
	 vs_top=base+11;
	 while(V927!=Cnil)
	 {vs_push((V927)->c.c_car);V927=(V927)->c.c_cdr;}
	vs_base=base+9;}
	{object _funobj = base[8];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1765;
T1765:;
	base[6]= (base0[4]->c.c_car);
	base[7]= (V918);
	base[8]= (V921);
	{object V929;
	V929= (V916);
	 vs_top=base+9;
	 while(V929!=Cnil)
	 {vs_push((V929)->c.c_car);V929=(V929)->c.c_cdr;}
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
	{object V930;
	object V931;
	check_arg(2);
	V930=(base[0]);
	V931=(base[1]);
	vs_top=sup;
	{object V933;
	V933= (*(LnkLI243))((V930),CMPcar((V931)),(base0[3]->c.c_car),(base0[1]->c.c_car),(base0[0]->c.c_car));
	(V931)->c.c_car = (V933);
	base[3]= (V933);
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
	{object V934;
	register object V935;
	check_arg(2);
	V934=(base[0]);
	V935=(base[1]);
	vs_top=sup;
	base[2]= V934;
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
	{object V937;
	check_arg(1);
	V937=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V938;
	base[1]= (V937);
	base[2]= (VV[16]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V938= vs_base[0];
	if(V938==Cnil)goto T1784;
	base[1]= V938;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1784;
T1784:;}
	{object V940;
	object V941;
	V940= (VV[16]->s.s_dbind);
	{object V942;
	object V943;
	base[2]= CMPcdr((V937));
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V942= vs_base[0];
	V943= CMPcar((V937));
	base0[0]= Ct;
	V941= (VFUN_NARGS=4,(*(LnkLI244))(VV[17],(V942),VV[18],(V943)));}
	base[2]= V937;
	base[3]= (V940);
	base[4]= (V941);
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
	{object V944;
	check_arg(1);
	V944=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V945;
	base[1]= (V944);
	base[2]= (VV[15]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V945= vs_base[0];
	if(V945==Cnil)goto T1798;
	base[1]= V945;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1798;
T1798:;}
	{object V947;
	object V948;
	V947= (VV[15]->s.s_dbind);
	base[2]= (V944);
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V948= vs_base[0];
	base[2]= V944;
	base[3]= (V947);
	base[4]= (V948);
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

