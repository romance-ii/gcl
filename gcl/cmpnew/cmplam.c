
#include "cmpinclude.h"
#include "cmplam.h"
void init_cmplam(){do_init(VV);}
/*	macro definition for CK-SPEC	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	base[3]= list(3,VV[0],base[2],VV[1]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for CK-VL	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[2]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	base[3]= list(3,VV[0],base[2],VV[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DOWNWARD-FUNCTION	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[2]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(!endp(V3))invalid_macro_call();}
	base[3]= list(2,VV[3],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function C1DOWNWARD-FUNCTION	*/

static object LI4(V5)

register object V5;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{register object V6;
	object V7;
	V8= list(2,VV[3],car((V5)));
	V6= (*(LnkLI79))(/* INLINE-ARGS */V8);
	V7= cadr((V6));
	if(!(type_of((V5))==t_cons)){
	goto T4;}
	if(!(type_of(car((V5)))==t_cons)){
	goto T4;}
	if(!((caar((V5)))==(VV[4]))){
	goto T4;}
	if((cadr(car((V5))))!=Cnil){
	goto T4;}
	{register object V9;
	register object V10;
	V9= structure_ref((V7),VV[5],1);
	V10= car((V9));
	goto T16;
T16:;
	if(!(endp_prop((V9)))){
	goto T17;}
	goto T12;
	goto T17;
T17:;
	V11= structure_ref((V10),VV[6],1);
	if(!((/* INLINE-ARGS */V11)==(VV[7]))){
	goto T21;}
	if((structure_ref((V10),VV[6],3))==Cnil){
	goto T21;}
	(void)(structure_set((V10),VV[6],1,VV[8]));
	goto T21;
T21:;
	V9= cdr((V9));
	V10= car((V9));
	goto T16;}
	goto T12;
T12:;
	if(type_of(V6)!=t_cons)FEwrong_type_argument(Scons,V6);
	(V6)->c.c_car = VV[9];
	{object V14 = (V6);
	VMR4(V14)}
	goto T4;
T4:;
	{object V15 = (V6);
	VMR4(V15)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-MAKE-DCLOSURE	*/

static object LI5(V18,V19)

register object V18;object V19;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	princ_str("\n	(DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_str(".t=t_dclosure,DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_str(".dc_self=LC",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_char(44,VV[10]);
	princ_str("DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_str(".dc_env=base0,(object)&DownClose",VV[10]);
	(void)((*(LnkLI80))((V18)));
	princ_char(41,VV[10]);
	{object V20 = Cnil;
	VMR5(V20)}
	return Cnil;
}
/*	local entry for function WFS-ERROR	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[11];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V21 = vs_base[0];
	VMR6(V21)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-DOWNWARD-CLOSURE-MACRO	*/

static object LI7(V23)

object V23;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if((symbol_value(VV[12]))==Cnil){
	goto T49;}
	princ_str("\n#define DCnames",VV[13]);
	(void)((*(LnkLI81))((V23)));
	princ_char(32,VV[13]);
	setq(VV[12],(VFUN_NARGS=2,(*(LnkLI82))(VV[14],symbol_value(VV[12]))));
	if((symbol_value(VV[12]))==Cnil){
	goto T58;}
	(void)((*(LnkLI81))(VV[15]));
	{register object V24;
	V24= symbol_value(VV[12]);
	goto T63;
T63:;
	if(((V24))!=Cnil){
	goto T64;}
	goto T61;
	goto T64;
T64:;
	(void)((*(LnkLI81))(VV[16]));
	(void)((*(LnkLI81))(car((V24))));
	if((cdr((V24)))==Cnil){
	goto T70;}
	(void)((*(LnkLI81))(VV[17]));
	goto T70;
T70:;
	V24= cdr((V24));
	goto T63;}
	goto T61;
T61:;
	{object V25 = (*(LnkLI81))(VV[18]);
	VMR7(V25)}
	goto T58;
T58:;
	{object V26 = Cnil;
	VMR7(V26)}
	goto T49;
T49:;
	{object V27 = Cnil;
	VMR7(V27)}
	return Cnil;
}
/*	local entry for function C2DOWNWARD-FUNCTION	*/

static object LI8(V29)

object V29;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V30;
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V30= (VFUN_NARGS=4,(*(LnkLI83))(VV[19],VV[20],VV[21],symbol_value(VV[22])));
	{object V31;
	if((symbol_value(VV[24]))!=Cnil){
	goto T82;}
	V32= Cnil;
	goto T80;
	goto T82;
T82:;
	V32= make_cons(small_fixnum(0),small_fixnum(0));
	goto T80;
T80:;
	V31= list(5,VV[23],V32,symbol_value(VV[25]),(V30),(V29));
	setq(VV[26],make_cons((V31),symbol_value(VV[26])));}
	setq(VV[27],make_cons(V30,symbol_value(VV[27])));
	{object V34;
	V34= structure_ref((V30),VV[28],3);
	setq(VV[12],make_cons((V34),symbol_value(VV[12])));}
	V35= list(3,VV[29],structure_ref((V30),VV[28],3),symbol_value(VV[24]));
	{object V36 = (VFUN_NARGS=1,(*(LnkLI84))(/* INLINE-ARGS */V35));
	VMR8(V36)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LAMBDA-EXPR	*/

static object LI9(object V37,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	bds_check;
	{object V38;
	object V39;
	object V40;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V38= V37;
	narg = narg - 1;
	if (narg <= 0) goto T90;
	else {
	V39= first;}
	V40= Ct;
	--narg; goto T91;
	goto T90;
T90:;
	V39= Cnil;
	V40= Cnil;
	goto T91;
T91:;
	{object V41;
	object V42;
	object V43;
	object V44;
	object V45;
	object V46;
	object V47;
	object V48;
	object V49;
	object V50;
	register object V51;
	register object V52;
	object V53;
	register object V54;
	register object V55;
	register object V56;
	object V57;
	register object V58;
	object V59;
	object V60;
	object V61;
	V41= Cnil;
	V42= Cnil;
	V43= Cnil;
	V44= Cnil;
	V45= Cnil;
	V46= Cnil;
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	V51= Cnil;
	V52= Cnil;
	V53= Cnil;
	V54= Cnil;
	V55= Cnil;
	V56= Cnil;
	V57= Cnil;
	V58= Cnil;
	bds_bind(VV[30],symbol_value(VV[30]));
	V59= (VFUN_NARGS=0,(*(LnkLI85))());
	V60= Cnil;
	V61= symbol_value(VV[31]);
	if(!(endp_prop((V38)))){
	goto T114;}
	V62= make_cons(VV[4],(V38));
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[32],/* INLINE-ARGS */V62)));
	goto T114;
T114:;
	base[2]= cdr((V38));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk87)();
	if(vs_base<vs_top){
	V53= vs_base[0];
	vs_base++;
	}else{
	V53= Cnil;}
	if(vs_base<vs_top){
	V54= vs_base[0];
	vs_base++;
	}else{
	V54= Cnil;}
	if(vs_base<vs_top){
	V56= vs_base[0];
	vs_base++;
	}else{
	V56= Cnil;}
	if(vs_base<vs_top){
	V55= vs_base[0];
	vs_base++;
	}else{
	V55= Cnil;}
	if(vs_base<vs_top){
	V57= vs_base[0];
	vs_base++;
	}else{
	V57= Cnil;}
	if(vs_base<vs_top){
	V50= vs_base[0];
	}else{
	V50= Cnil;}
	vs_top=sup;
	if(((V40))==Cnil){
	goto T121;}
	V63= listA(3,VV[33],(V39),(V53));
	V53= make_cons(/* INLINE-ARGS */V63,Cnil);
	goto T121;
T121:;
	(void)((*(LnkLI88))((V54)));
	V51= car((V38));
	goto T130;
T130:;
	if(((V51))!=Cnil){
	goto T136;}
	goto T128;
	goto T136;
T136:;
	if(type_of((V51))==t_cons){
	goto T139;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V51))));
	goto T139;
T139:;
	{object V65;
	V65= car((V51));
	V51= cdr((V51));
	V52= (V65);}
	{object V64= (V52);
	if((V64!= VV[69]))goto T147;
	goto T131;
	goto T147;
T147:;
	if((V64!= VV[68]))goto T148;
	goto T132;
	goto T148;
T148:;
	if((V64!= VV[71]))goto T149;
	goto T133;
	goto T149;
T149:;
	if((V64!= VV[73]))goto T150;
	goto T134;
	goto T150;
T150:;}
	{object V66;
	V66= (*(LnkLI89))((V52),(V54),(V55),(V56));
	V58= make_cons(V52,(V58));
	(VV[30]->s.s_dbind)= make_cons(V66,(VV[30]->s.s_dbind));
	V41= make_cons(V66,(V41));}
	goto T130;
	goto T131;
T131:;
	if(((V51))!=Cnil){
	goto T158;}
	goto T128;
	goto T158;
T158:;
	if(type_of((V51))==t_cons){
	goto T161;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V51))));
	goto T161;
T161:;
	{object V71;
	V71= car((V51));
	V51= cdr((V51));
	V52= (V71);}
	{object V70= (V52);
	if((V70!= VV[68]))goto T169;
	goto T132;
	goto T169;
T169:;
	if((V70!= VV[71]))goto T170;
	goto T133;
	goto T170;
T170:;
	if((V70!= VV[73]))goto T171;
	goto T134;
	goto T171;
T171:;}
	if(type_of((V52))==t_cons){
	goto T174;}
	{object V72;
	V72= (*(LnkLI89))((V52),(V54),(V55),(V56));
	V58= make_cons(V52,(V58));
	{object V74;
	V75= structure_ref((V72),VV[6],5);
	V76= (*(LnkLI90))(/* INLINE-ARGS */V75);
	V74= list(3,(V72),/* INLINE-ARGS */V76,Cnil);
	V42= make_cons((V74),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V72,(VV[30]->s.s_dbind));
	goto T172;}
	goto T174;
T174:;
	if(type_of(cdr((V52)))==t_cons){
	goto T184;}
	if((cdr((V52)))==Cnil){
	goto T186;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T186;
T186:;
	{object V78;
	V78= (*(LnkLI89))(car((V52)),(V54),(V55),(V56));
	{object V79;
	V79= car((V52));
	V58= make_cons((V79),(V58));}
	{object V80;
	V81= structure_ref((V78),VV[6],5);
	V82= (*(LnkLI90))(/* INLINE-ARGS */V81);
	V80= list(3,(V78),/* INLINE-ARGS */V82,Cnil);
	V42= make_cons((V80),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V78,(VV[30]->s.s_dbind));
	goto T172;}
	goto T184;
T184:;
	if(type_of(cddr((V52)))==t_cons){
	goto T198;}
	if((cddr((V52)))==Cnil){
	goto T200;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T200;
T200:;
	{object V84;
	object V85;
	V84= (*(LnkLI91))(cadr((V52)),(V59));
	V85= (*(LnkLI89))(car((V52)),(V54),(V55),(V56));
	{object V86;
	V86= car((V52));
	V58= make_cons((V86),(V58));}
	{object V87;
	V88= structure_ref((V85),VV[6],5);
	V89= (*(LnkLI92))(/* INLINE-ARGS */V88,(V84),cadr((V52)));
	V87= list(3,(V85),/* INLINE-ARGS */V89,Cnil);
	V42= make_cons((V87),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V85,(VV[30]->s.s_dbind));
	goto T172;}
	goto T198;
T198:;
	if((cdddr((V52)))==Cnil){
	goto T212;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T212;
T212:;
	{object V91;
	object V92;
	object V93;
	V91= (*(LnkLI91))(cadr((V52)),(V59));
	V92= (*(LnkLI89))(car((V52)),(V54),(V55),(V56));
	V93= (*(LnkLI89))(caddr((V52)),(V54),(V55),(V56));
	{object V94;
	V94= car((V52));
	V58= make_cons((V94),(V58));}
	{object V95;
	V95= caddr((V52));
	V58= make_cons((V95),(V58));}
	{object V96;
	V97= structure_ref((V92),VV[6],5);
	V98= (*(LnkLI92))(/* INLINE-ARGS */V97,(V91),cadr((V52)));
	V96= list(3,(V92),/* INLINE-ARGS */V98,(V93));
	V42= make_cons((V96),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V92,(VV[30]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons(V93,(VV[30]->s.s_dbind));}
	goto T172;
T172:;
	goto T131;
	goto T132;
T132:;
	if(type_of((V51))==t_cons){
	goto T230;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V51))));
	goto T230;
T230:;
	{object V101;
	V101= car((V51));
	V58= make_cons((V101),(V58));}
	{object V103;
	V103= car((V51));
	V51= cdr((V51));
	V102= (V103);}
	V43= (*(LnkLI89))(V102,(V54),(V55),(V56));
	(VV[30]->s.s_dbind)= make_cons(V43,(VV[30]->s.s_dbind));
	if(((V51))!=Cnil){
	goto T244;}
	goto T128;
	goto T244;
T244:;
	if(type_of((V51))==t_cons){
	goto T247;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V51))));
	goto T247;
T247:;
	{object V106;
	V106= car((V51));
	V51= cdr((V51));
	V52= (V106);}
	{object V105= (V52);
	if((V105!= VV[71]))goto T255;
	goto T133;
	goto T255;
T255:;
	if((V105!= VV[73]))goto T256;
	goto T134;
	goto T256;
T256:;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[36],(V52))));
	goto T133;
T133:;
	V45= Ct;
	if(((V51))!=Cnil){
	goto T259;}
	goto T128;
	goto T259;
T259:;
	if(type_of((V51))==t_cons){
	goto T262;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V51))));
	goto T262;
T262:;
	{object V108;
	V108= car((V51));
	V51= cdr((V51));
	V52= (V108);}
	{object V107= (V52);
	if((V107!= VV[73]))goto T270;
	goto T134;
	goto T270;
T270:;
	if((V107!= VV[72]))goto T271;
	V47= Ct;
	if(((V51))!=Cnil){
	goto T274;}
	goto T128;
	goto T274;
T274:;
	if(type_of((V51))==t_cons){
	goto T277;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V51))));
	goto T277;
T277:;
	{object V110;
	V110= car((V51));
	V51= cdr((V51));
	V52= (V110);}
	{object V109= (V52);
	if((V109!= VV[73]))goto T285;
	goto T134;
	goto T285;
T285:;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[37],(V52))));
	goto T265;
	goto T271;
T271:;}
	goto T265;
T265:;
	if(type_of((V52))==t_cons){
	goto T286;}
	V52= make_cons((V52),Cnil);
	goto T286;
T286:;
	if(!(type_of(car((V52)))==t_cons)){
	goto T292;}
	{object V111= caar((V52));
	if(!((type_of(V111)==t_symbol&&(V111)->s.s_hpack==keyword_package))){
	goto T295;}}
	if(!(type_of(cdar((V52)))==t_cons)){
	goto T295;}
	if((cddar((V52)))==Cnil){
	goto T294;}
	goto T295;
T295:;
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T294;
T294:;
	V52= listA(3,caar((V52)),cadar((V52)),cdr((V52)));
	goto T290;
	goto T292;
T292:;
	if(type_of(car((V52)))==t_symbol){
	goto T302;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T302;
T302:;
	base[2]= coerce_to_string(car((V52)));
	base[3]= VV[38];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V112= vs_base[0];
	V52= listA(3,V112,car((V52)),cdr((V52)));
	goto T290;
T290:;
	if(type_of(cddr((V52)))==t_cons){
	goto T311;}
	if((cddr((V52)))==Cnil){
	goto T313;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T313;
T313:;
	{object V113;
	V113= (*(LnkLI89))(cadr((V52)),(V54),(V55),(V56));
	{object V114;
	V114= cadr((V52));
	V58= make_cons((V114),(V58));}
	{object V115;
	V116= car((V52));
	V117= structure_ref((V113),VV[6],5);
	V118= (*(LnkLI90))(/* INLINE-ARGS */V117);
	V115= list(4,/* INLINE-ARGS */V116,(V113),/* INLINE-ARGS */V118,(VFUN_NARGS=2,(*(LnkLI93))(VV[39],VV[40])));
	V44= make_cons((V115),(V44));}
	(VV[30]->s.s_dbind)= make_cons(V113,(VV[30]->s.s_dbind));
	goto T309;}
	goto T311;
T311:;
	if(type_of(cdddr((V52)))==t_cons){
	goto T325;}
	if((cdddr((V52)))==Cnil){
	goto T327;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T327;
T327:;
	{object V120;
	object V121;
	V120= (*(LnkLI91))(caddr((V52)),(V59));
	V121= (*(LnkLI89))(cadr((V52)),(V54),(V55),(V56));
	{object V122;
	V122= cadr((V52));
	V58= make_cons((V122),(V58));}
	{object V123;
	V124= car((V52));
	V125= structure_ref((V121),VV[6],5);
	V126= (*(LnkLI92))(/* INLINE-ARGS */V125,(V120),caddr((V52)));
	V123= list(4,/* INLINE-ARGS */V124,(V121),/* INLINE-ARGS */V126,(VFUN_NARGS=2,(*(LnkLI93))(VV[39],VV[40])));
	V44= make_cons((V123),(V44));}
	(VV[30]->s.s_dbind)= make_cons(V121,(VV[30]->s.s_dbind));
	goto T309;}
	goto T325;
T325:;
	if((cddddr((V52)))==Cnil){
	goto T339;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T339;
T339:;
	{object V128;
	object V129;
	object V130;
	V128= (*(LnkLI91))(caddr((V52)),(V59));
	V129= (*(LnkLI89))(cadr((V52)),(V54),(V55),(V56));
	V130= (*(LnkLI89))(cadddr((V52)),(V54),(V55),(V56));
	{object V131;
	V131= cadr((V52));
	V58= make_cons((V131),(V58));}
	{object V132;
	V132= cadddr((V52));
	V58= make_cons((V132),(V58));}
	{object V133;
	V134= car((V52));
	V135= structure_ref((V129),VV[6],5);
	V136= (*(LnkLI92))(/* INLINE-ARGS */V135,(V128),caddr((V52)));
	V133= list(4,/* INLINE-ARGS */V134,(V129),/* INLINE-ARGS */V136,(V130));
	V44= make_cons((V133),(V44));}
	(VV[30]->s.s_dbind)= make_cons(V129,(VV[30]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons(V130,(VV[30]->s.s_dbind));}
	goto T309;
T309:;
	goto T133;
	goto T134;
T134:;
	V60= (VFUN_NARGS=0,(*(LnkLI85))());
	goto T135;
T135:;
	if(((V51))!=Cnil){
	goto T358;}
	(void)((*(LnkLI94))((V59),(V60)));
	goto T128;
	goto T358;
T358:;
	if(type_of((V51))==t_cons){
	goto T362;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[34],(V51))));
	goto T362;
T362:;
	{object V139;
	V139= car((V51));
	V51= cdr((V51));
	V52= (V139);}
	if(!(type_of((V52))==t_cons)){
	goto T372;}
	if(type_of(cdr((V52)))==t_cons){
	goto T375;}
	if((cdr((V52)))==Cnil){
	goto T377;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T377;
T377:;
	{object V140;
	V140= (*(LnkLI89))(car((V52)),(V54),(V55),(V56));
	{object V141;
	V141= car((V52));
	V58= make_cons((V141),(V58));}
	{object V142;
	V143= structure_ref((V140),VV[6],5);
	V142= (*(LnkLI90))(/* INLINE-ARGS */V143);
	V49= make_cons((V142),(V49));}
	V48= make_cons(V140,(V48));
	(VV[30]->s.s_dbind)= make_cons(V140,(VV[30]->s.s_dbind));
	goto T370;}
	goto T375;
T375:;
	if((cddr((V52)))==Cnil){
	goto T390;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[35],(V52))));
	goto T390;
T390:;
	{object V146;
	object V147;
	V146= (*(LnkLI91))(cadr((V52)),(V60));
	V147= (*(LnkLI89))(car((V52)),(V54),(V55),(V56));
	{object V148;
	V148= car((V52));
	V58= make_cons((V148),(V58));}
	{object V149;
	V150= structure_ref((V147),VV[6],5);
	V149= (*(LnkLI92))(/* INLINE-ARGS */V150,(V146),cadr((V52)));
	V49= make_cons((V149),(V49));}
	V48= make_cons(V147,(V48));
	(VV[30]->s.s_dbind)= make_cons(V147,(VV[30]->s.s_dbind));
	goto T370;}
	goto T372;
T372:;
	{object V153;
	V153= (*(LnkLI89))((V52),(V54),(V55),(V56));
	V58= make_cons(V52,(V58));
	{object V155;
	V156= structure_ref((V153),VV[6],5);
	V155= (*(LnkLI90))(/* INLINE-ARGS */V156);
	V49= make_cons((V155),(V49));}
	V48= make_cons(V153,(V48));
	(VV[30]->s.s_dbind)= make_cons(V153,(VV[30]->s.s_dbind));}
	goto T370;
T370:;
	goto T135;
	goto T128;
T128:;
	V41= reverse((V41));
	V42= reverse((V42));
	V44= reverse((V44));
	V48= reverse((V48));
	V49= reverse((V49));
	(void)((*(LnkLI95))((V58),(V56),(V55)));
	V53= (*(LnkLI96))((V57),(V53));
	(void)((*(LnkLI94))((V59),cadr((V53))));
	{object V159;
	object V160;
	V159= (V41);
	V160= car((V159));
	goto T432;
T432:;
	if(!(endp_prop((V159)))){
	goto T433;}
	goto T428;
	goto T433;
T433:;
	(void)((*(LnkLI97))((V160)));
	V159= cdr((V159));
	V160= car((V159));
	goto T432;}
	goto T428;
T428:;
	{object V161;
	object V162;
	V161= (V42);
	V162= car((V161));
	goto T447;
T447:;
	if(!(endp_prop((V161)))){
	goto T448;}
	goto T443;
	goto T448;
T448:;
	(void)((*(LnkLI97))(car((V162))));
	if((caddr((V162)))==Cnil){
	goto T453;}
	(void)((*(LnkLI97))(caddr((V162))));
	goto T453;
T453:;
	V161= cdr((V161));
	V162= car((V161));
	goto T447;}
	goto T443;
T443:;
	if(((V43))==Cnil){
	goto T461;}
	(void)((*(LnkLI97))((V43)));
	goto T461;
T461:;
	{object V163;
	object V164;
	V163= (V44);
	V164= car((V163));
	goto T468;
T468:;
	if(!(endp_prop((V163)))){
	goto T469;}
	goto T464;
	goto T469;
T469:;
	(void)((*(LnkLI97))(cadr((V164))));
	if((cadddr((V164)))==Cnil){
	goto T474;}
	(void)((*(LnkLI97))(cadddr((V164))));
	goto T474;
T474:;
	V163= cdr((V163));
	V164= car((V163));
	goto T468;}
	goto T464;
T464:;
	{object V165;
	object V166;
	V165= (V48);
	V166= car((V165));
	goto T486;
T486:;
	if(!(endp_prop((V165)))){
	goto T487;}
	goto T482;
	goto T487;
T487:;
	(void)((*(LnkLI97))((V166)));
	V165= cdr((V165));
	V166= car((V165));
	goto T486;}
	goto T482;
T482:;
	if(((V48))==Cnil){
	goto T497;}
	(void)((*(LnkLI94))((V60),cadr((V53))));
	V53= list(5,VV[41],(V60),(V48),(V49),(V53));
	if(!(eql((V61),symbol_value(VV[31])))){
	goto T503;}
	goto T497;
	goto T503;
T503:;
	(void)(structure_set((V60),VV[5],4,Ct));
	goto T497;
T497:;
	V53= (*(LnkLI98))((V41),(V53),(V39));
	V46= list(6,(V41),(V42),(V43),(V45),(V44),(V47));
	if(symbol_value(VV[42])==Cnil){
	goto T509;}
	(void)((*(LnkLI99))((V46)));
	goto T509;
T509:;
	{object V167 = list(5,VV[4],(V59),(V46),(V50),(V53));
	bds_unwind1;
	VMR9(V167)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIX-DOWN-ARGS	*/

static object LI10(V171,V172,V173)

object V171;object V172;object V173;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V174;
	object V175;
	register object V176;
	register object V177;
	V174= Cnil;
	V175= Cnil;
	V176= Cnil;
	V177= Cnil;
	{object V178;
	object V179;
	V178= get((V173),VV[43],Cnil);
	V179= get((V173),VV[44],Cnil);
	{register object V180;
	register object V181;
	V180= (V171);
	V181= (V178);
	goto T518;
T518:;
	if(((V180))!=Cnil){
	goto T519;}
	goto T516;
	goto T519;
T519:;
	V177= car((V180));
	if(((V179))!=Cnil){
	goto T527;}
	if((car((V181)))==(Ct)){
	goto T527;}
	{object V182 = (V172);
	VMR10(V182)}
	goto T527;
T527:;
	V183= structure_ref((V177),VV[6],1);
	if(!((/* INLINE-ARGS */V183)==(VV[8]))){
	goto T525;}
	V184= structure_ref((V177),VV[6],4);
	if(!((/* INLINE-ARGS */V184)==(VV[45]))){
	goto T525;}
	{register object V185;
	object V186;
	V187= structure_ref((V177),VV[6],0);
	V185= (*(LnkLI89))(/* INLINE-ARGS */V187,Cnil,Cnil,Cnil);
	if((V176)!=Cnil){
	V188= (V176);
	goto T537;}
	V176= (VFUN_NARGS=0,(*(LnkLI85))());
	V188= (V176);
	goto T537;
T537:;
	V186= list(3,VV[6],V188,list(2,(V185),Cnil));
	V174= make_cons(V177,(V174));
	{register object V191;
	V191= (V185);
	if(type_of(V180)!=t_cons)FEwrong_type_argument(Scons,V180);
	(V180)->c.c_car = (V191);}
	{register object V193;
	object V194;
	V193= (V176);
	V195= structure_ref((V193),VV[5],1);
	V194= make_cons(V185,/* INLINE-ARGS */V195);
	(void)(structure_set((V193),VV[5],1,(V194)));}
	V175= make_cons(V186,(V175));}
	goto T525;
T525:;
	V180= cdr((V180));
	V181= cdr((V181));
	goto T518;}
	goto T516;
T516:;
	if(((V174))==Cnil){
	goto T553;}
	{object V197 = list(5,VV[41],(V176),(V174),(V175),(V172));
	VMR10(V197)}
	goto T553;
T553:;
	{object V198 = (V172);
	VMR10(V198)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function THE-PARAMETER	*/

static object LI11(V200)

register object V200;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(type_of((V200))==t_symbol){
	goto T555;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[46],(V200))));
	goto T555;
T555:;
	base[0]= (V200);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T558;}
	(void)((VFUN_NARGS=2,(*(LnkLI86))(VV[47],(V200))));
	goto T558;
T558:;
	{object V201 = (V200);
	VMR11(V201)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LAMBDA-EXPR	*/

static object LI12(object V203,object V202,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	bds_check;
	{register object V204;
	object V205;
	object V206;
	object V207;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V204= V203;
	V205= V202;
	narg = narg - 2;
	if (narg <= 0) goto T562;
	else {
	V206= first;}
	V207= Ct;
	--narg; goto T563;
	goto T562;
T562:;
	V206= Cnil;
	V207= Cnil;
	goto T563;
T563:;
	if((symbol_value(VV[49]))==Cnil){
	goto T567;}
	if(((V207))==Cnil){
	goto T567;}
	{register object V208;
	register object V209;
	V208= car((V204));
	V209= car((V208));
	goto T577;
T577:;
	if(!(endp_prop((V208)))){
	goto T578;}
	goto T573;
	goto T578;
T578:;
	if((structure_ref((V209),VV[6],3))==Cnil){
	goto T582;}
	goto T567;
	goto T582;
T582:;
	V208= cdr((V208));
	V209= car((V208));
	goto T577;}
	goto T573;
T573:;
	if((cadr((V204)))!=Cnil){
	goto T567;}
	if((caddr((V204)))!=Cnil){
	goto T567;}
	if((cadddr((V204)))!=Cnil){
	goto T567;}
	base[0]= make_cons((V206),car((V204)));
	goto T565;
	goto T567;
T567:;
	base[0]= Cnil;
	goto T565;
T565:;
	bds_bind(VV[48],base[0]);
	if((caddr((V204)))==Cnil){
	goto T597;}
	V210= structure_ref(caddr((V204)),VV[6],5);
	if(!((/* INLINE-ARGS */V210)==(VV[51]))){
	goto T597;}
	base[1]= Ct;
	goto T595;
	goto T597;
T597:;
	base[1]= symbol_value(VV[50]);
	goto T595;
T595:;
	bds_bind(VV[50],base[1]);
	if((cadddr((V204)))==Cnil){
	goto T602;}
	{object V211 = (*(LnkLI100))((V204),(V205));
	bds_unwind1;
	bds_unwind1;
	VMR12(V211)}
	goto T602;
T602:;
	{object V212 = (*(LnkLI101))((V204),(V205));
	bds_unwind1;
	bds_unwind1;
	VMR12(V212)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function C2LAMBDA-EXPR-WITHOUT-KEY	*/

static object LI13(V215,V216)

object V215;object V216;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	{object V217;
	object V218;
	object V219;
	register object V220;
	V217= car((V215));
	V218= cadr((V215));
	V219= caddr((V215));
	V220= Cnil;
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[24],symbol_value(VV[24]));
	bds_bind(VV[25],symbol_value(VV[25]));
	base[7]= Cnil;
	{register object V221;
	object V222;
	V221= (V217);
	V222= car((V221));
	goto T613;
T613:;
	if(!(endp_prop((V221)))){
	goto T614;}
	goto T609;
	goto T614;
T614:;
	base[9]= (V222);
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	V221= cdr((V221));
	V222= car((V221));
	goto T613;}
	goto T609;
T609:;
	{register object V223;
	object V224;
	V223= (V218);
	V224= car((V223));
	goto T629;
T629:;
	if(!(endp_prop((V223)))){
	goto T630;}
	goto T625;
	goto T630;
T630:;
	base[9]= car((V224));
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	if((caddr((V224)))==Cnil){
	goto T636;}
	base[9]= caddr((V224));
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	goto T636;
T636:;
	V223= cdr((V223));
	V224= car((V223));
	goto T629;}
	goto T625;
T625:;
	if(((V219))==Cnil){
	goto T608;}
	base[8]= (V219);
	vs_top=(vs_base=base+8)+1;
	L14(base);
	vs_top=sup;
	goto T608;
T608:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T649;}
	if((symbol_value(VV[56]))==Cnil){
	goto T648;}
	goto T649;
T649:;
	if(((V219))!=Cnil){
	goto T653;}
	if(((V218))==Cnil){
	goto T654;}
	goto T653;
T653:;
	if(((V217))==Cnil){
	goto T658;}
	princ_str("\n	if(vs_top-vs_base<",VV[10]);
	V225 = make_fixnum((long)length((V217)));
	(void)((*(LnkLI80))(V225));
	princ_str(") too_few_arguments();",VV[10]);
	goto T658;
T658:;
	if(((V219))!=Cnil){
	goto T648;}
	princ_str("\n	if(vs_top-vs_base>",VV[10]);
	V226 = make_fixnum((long)length((V217)));
	V227 = make_fixnum((long)length((V218)));
	V228= number_plus(V226,V227);
	(void)((*(LnkLI80))(/* INLINE-ARGS */V228));
	princ_str(") too_many_arguments();",VV[10]);
	goto T648;
	goto T654;
T654:;
	princ_str("\n	check_arg(",VV[10]);
	V229 = make_fixnum((long)length((V217)));
	(void)((*(LnkLI80))(V229));
	princ_str(");",VV[10]);
	goto T648;
T648:;
	{register object V230;
	object V231;
	V230= (V217);
	V231= car((V230));
	goto T676;
T676:;
	if(!(endp_prop((V230)))){
	goto T677;}
	goto T672;
	goto T677;
T677:;
	V232= (*(LnkLI102))();
	(void)(structure_set((V231),VV[6],2,/* INLINE-ARGS */V232));
	V230= cdr((V230));
	V231= car((V230));
	goto T676;}
	goto T672;
T672:;
	{register object V233;
	object V234;
	V233= (V218);
	V234= car((V233));
	goto T691;
T691:;
	if(!(endp_prop((V233)))){
	goto T692;}
	goto T687;
	goto T692;
T692:;
	V235= car((V234));
	V236= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V235,VV[6],2,/* INLINE-ARGS */V236));
	V233= cdr((V233));
	V234= car((V233));
	goto T691;}
	goto T687;
T687:;
	if(((V219))==Cnil){
	goto T702;}
	V237= (*(LnkLI102))();
	(void)(structure_set((V219),VV[6],2,/* INLINE-ARGS */V237));
	goto T702;
T702:;
	{register object V238;
	object V239;
	V238= (V218);
	V239= car((V238));
	goto T709;
T709:;
	if(!(endp_prop((V238)))){
	goto T710;}
	goto T705;
	goto T710;
T710:;
	if((caddr((V239)))==Cnil){
	goto T714;}
	V240= caddr((V239));
	V241= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V240,VV[6],2,/* INLINE-ARGS */V241));
	goto T714;
T714:;
	V238= cdr((V238));
	V239= car((V238));
	goto T709;}
	goto T705;
T705:;
	{register object V242;
	object V243;
	V242= (V217);
	V243= car((V242));
	goto T726;
T726:;
	if(!(endp_prop((V242)))){
	goto T727;}
	goto T722;
	goto T727;
T727:;
	(void)((*(LnkLI103))((V243)));
	V242= cdr((V242));
	V243= car((V242));
	goto T726;}
	goto T722;
T722:;
	if(((V218))!=Cnil){
	goto T739;}
	if(((V219))==Cnil){
	goto T737;}
	goto T739;
T739:;
	if(((V217))==Cnil){
	goto T737;}
	princ_str("\n	vs_base=vs_base+",VV[10]);
	V244 = make_fixnum((long)length((V217)));
	(void)((*(LnkLI80))(V244));
	princ_char(59,VV[10]);
	goto T737;
T737:;
	if(((V218))==Cnil){
	goto T749;}
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	if(((V219))==Cnil){
	goto T752;}
	princ_str("\n	vs_top[0]=Cnil;",VV[10]);
	princ_str("\n	{object *p=vs_top, *q=vs_base+",VV[10]);
	V245 = make_fixnum((long)length((V218)));
	(void)((*(LnkLI80))(V245));
	princ_char(59,VV[10]);
	princ_str("\n	 for(;p>q;p--)p[-1]=MMcons(p[-1],p[0]);}",VV[10]);
	goto T752;
T752:;
	{register object V246;
	V246= (V218);
	goto T764;
T764:;
	if(!(endp_prop((V246)))){
	goto T765;}
	goto T762;
	goto T765;
T765:;
	{object V247;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V247= make_cons(symbol_value(VV[57]),Cnil);
	V220= make_cons((V247),(V220));}
	princ_str("\n	if(vs_base>=vs_top){",VV[10]);
	(void)((*(LnkLI104))());
	if(type_of(car((V220)))!=t_cons)FEwrong_type_argument(Scons,car((V220)));
	(car((V220)))->c.c_cdr = Ct;
	(void)(car((V220)));
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car(car((V220)))));
	princ_char(59,VV[10]);
	princ_char(125,VV[10]);
	(void)((*(LnkLI103))(caar((V246))));
	if((caddar((V246)))==Cnil){
	goto T784;}
	(void)((*(LnkLI105))(caddar((V246)),Ct));
	goto T784;
T784:;
	if((cdr((V246)))==Cnil){
	goto T787;}
	princ_str("\n	vs_base++;",VV[10]);
	goto T787;
T787:;
	V246= cdr((V246));
	goto T764;}
	goto T762;
T762:;
	if(((V219))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T751;}
	V248= (*(LnkLI103))((V219));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T751;
T751:;
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI104))());
	{object V249;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V249= make_cons(symbol_value(VV[57]),Cnil);
	princ_str("\n	",VV[10]);
	if(type_of((V249))!=t_cons)FEwrong_type_argument(Scons,(V249));
	((V249))->c.c_cdr = Ct;
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car((V249))));
	princ_char(59,VV[10]);
	V220= reverse((V220));
	{register object V250;
	register object V251;
	V250= (V218);
	V251= car((V250));
	goto T812;
T812:;
	if(!(endp_prop((V250)))){
	goto T813;}
	goto T808;
	goto T813;
T813:;
	if((cdr(car((V220))))==Cnil){
	goto T817;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI80))(car(car((V220)))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car(car((V220)))));
	princ_str(":;",VV[10]);
	goto T817;
T817:;
	{object V252;
	V252= car((V220));
	V220= cdr((V220));}
	(void)((*(LnkLI106))(car((V251)),cadr((V251))));
	if((caddr((V251)))==Cnil){
	goto T832;}
	(void)((*(LnkLI105))(caddr((V251)),Cnil));
	goto T832;
T832:;
	V250= cdr((V250));
	V251= car((V250));
	goto T812;}
	goto T808;
T808:;
	if(((V219))==Cnil){
	goto T840;}
	(void)((*(LnkLI105))((V219),Cnil));
	goto T840;
T840:;
	if((cdr((V249)))==Cnil){
	goto T747;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI80))(car((V249))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car((V249))));
	princ_str(":;",VV[10]);
	goto T747;}
	goto T749;
T749:;
	if(((V219))==Cnil){
	goto T853;}
	princ_str("\n	vs_top[0]=Cnil;",VV[10]);
	princ_str("\n	{object *p=vs_top;",VV[10]);
	princ_str("\n	 for(;p>vs_base;p--)p[-1]=",VV[10]);
	if((symbol_value(VV[50]))==Cnil){
	goto T864;}
	V253= VV[58];
	goto T862;
	goto T864;
T864:;
	V253= VV[59];
	goto T862;
T862:;
	(void)((*(LnkLI80))(V253));
	princ_str("(p[-1],p[0]);}",VV[10]);
	(void)((*(LnkLI103))((V219)));
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI104))());
	goto T747;
	goto T853;
T853:;
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI104))());
	goto T747;
T747:;
	if((symbol_value(VV[48]))==Cnil){
	goto T870;}
	(VV[52]->s.s_dbind)= make_cons(VV[60],(VV[52]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[10]);
	princ_str("\nTTL:;",VV[10]);
	goto T870;
T870:;
	base[8]= (V216);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	if((base[7])==Cnil){
	goto T881;}
	princ_str("\n	}",VV[10]);
	{object V255 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR13(V255)}
	goto T881;
T881:;
	{object V256 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR13(V256)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LAMBDA-EXPR-WITH-KEY	*/

static object LI15(V259,V260)

object V259;object V260;
{	 VMB14 VMS14 VMV14
	bds_check;
	goto TTL;
TTL:;
	{object V261;
	object V262;
	object V263;
	object V264;
	object V265;
	register object V266;
	V261= car((V259));
	V262= cadr((V259));
	V263= caddr((V259));
	V264= car(cddddr((V259)));
	V265= cadr(cddddr((V259)));
	V266= Cnil;
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[24],symbol_value(VV[24]));
	bds_bind(VV[25],symbol_value(VV[25]));
	base[9]= Cnil;
	{register object V267;
	object V268;
	V267= (V261);
	V268= car((V267));
	goto T895;
T895:;
	if(!(endp_prop((V267)))){
	goto T896;}
	goto T891;
	goto T896;
T896:;
	base[11]= (V268);
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	V267= cdr((V267));
	V268= car((V267));
	goto T895;}
	goto T891;
T891:;
	{register object V269;
	object V270;
	V269= (V262);
	V270= car((V269));
	goto T911;
T911:;
	if(!(endp_prop((V269)))){
	goto T912;}
	goto T907;
	goto T912;
T912:;
	base[11]= car((V270));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	if((caddr((V270)))==Cnil){
	goto T918;}
	base[11]= caddr((V270));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	goto T918;
T918:;
	V269= cdr((V269));
	V270= car((V269));
	goto T911;}
	goto T907;
T907:;
	if(((V263))==Cnil){
	goto T927;}
	base[10]= (V263);
	vs_top=(vs_base=base+10)+1;
	L16(base);
	vs_top=sup;
	goto T927;
T927:;
	{register object V271;
	object V272;
	V271= (V264);
	V272= car((V271));
	goto T934;
T934:;
	if(!(endp_prop((V271)))){
	goto T935;}
	goto T890;
	goto T935;
T935:;
	base[11]= cadr((V272));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	if((cadddr((V272)))==Cnil){
	goto T941;}
	base[11]= cadddr((V272));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	goto T941;
T941:;
	V271= cdr((V271));
	V272= car((V271));
	goto T934;}
	goto T890;
T890:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T952;}
	if((symbol_value(VV[56]))==Cnil){
	goto T950;}
	goto T952;
T952:;
	if(((V261))==Cnil){
	goto T950;}
	if(((V261))==Cnil){
	goto T950;}
	princ_str("\n	if(vs_top-vs_base<",VV[10]);
	V273 = make_fixnum((long)length((V261)));
	(void)((*(LnkLI80))(V273));
	princ_str(") too_few_arguments();",VV[10]);
	goto T950;
T950:;
	{register object V274;
	object V275;
	V274= (V261);
	V275= car((V274));
	goto T966;
T966:;
	if(!(endp_prop((V274)))){
	goto T967;}
	goto T962;
	goto T967;
T967:;
	V276= (*(LnkLI102))();
	(void)(structure_set((V275),VV[6],2,/* INLINE-ARGS */V276));
	V274= cdr((V274));
	V275= car((V274));
	goto T966;}
	goto T962;
T962:;
	{register object V277;
	object V278;
	V277= (V262);
	V278= car((V277));
	goto T981;
T981:;
	if(!(endp_prop((V277)))){
	goto T982;}
	goto T977;
	goto T982;
T982:;
	V279= car((V278));
	V280= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V279,VV[6],2,/* INLINE-ARGS */V280));
	V277= cdr((V277));
	V278= car((V277));
	goto T981;}
	goto T977;
T977:;
	if(((V263))==Cnil){
	goto T992;}
	V281= (*(LnkLI102))();
	(void)(structure_set((V263),VV[6],2,/* INLINE-ARGS */V281));
	goto T992;
T992:;
	{register object V282;
	object V283;
	V282= (V264);
	V283= car((V282));
	goto T999;
T999:;
	if(!(endp_prop((V282)))){
	goto T1000;}
	goto T995;
	goto T1000;
T1000:;
	V284= cadr((V283));
	V285= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V284,VV[6],2,/* INLINE-ARGS */V285));
	V282= cdr((V282));
	V283= car((V282));
	goto T999;}
	goto T995;
T995:;
	{register object V286;
	object V287;
	V286= (V264);
	V287= car((V286));
	goto T1014;
T1014:;
	if(!(endp_prop((V286)))){
	goto T1015;}
	goto T1010;
	goto T1015;
T1015:;
	V288= cadddr((V287));
	V289= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V288,VV[6],2,/* INLINE-ARGS */V289));
	V286= cdr((V286));
	V287= car((V286));
	goto T1014;}
	goto T1010;
T1010:;
	{register object V290;
	object V291;
	V290= (V262);
	V291= car((V290));
	goto T1029;
T1029:;
	if(!(endp_prop((V290)))){
	goto T1030;}
	goto T1025;
	goto T1030;
T1030:;
	if((caddr((V291)))==Cnil){
	goto T1034;}
	V292= caddr((V291));
	V293= (*(LnkLI102))();
	(void)(structure_set(/* INLINE-ARGS */V292,VV[6],2,/* INLINE-ARGS */V293));
	goto T1034;
T1034:;
	V290= cdr((V290));
	V291= car((V290));
	goto T1029;}
	goto T1025;
T1025:;
	princ_str("\n	parse_key(vs_base",VV[10]);
	if(((V261))!=Cnil){
	goto T1045;}
	if(((V262))==Cnil){
	goto T1044;}
	goto T1045;
T1045:;
	princ_char(43,VV[10]);
	V294 = make_fixnum((long)length((V261)));
	V295 = make_fixnum((long)length((V262)));
	V296= number_plus(V294,V295);
	(void)((*(LnkLI80))(/* INLINE-ARGS */V296));
	goto T1044;
T1044:;
	if(((V263))==Cnil){
	goto T1053;}
	princ_str(",TRUE,",VV[10]);
	goto T1051;
	goto T1053;
T1053:;
	princ_str(",FALSE,",VV[10]);
	goto T1051;
T1051:;
	if(((V265))==Cnil){
	goto T1059;}
	princ_str("TRUE,",VV[10]);
	goto T1057;
	goto T1059;
T1059:;
	princ_str("FALSE,",VV[10]);
	goto T1057;
T1057:;
	V297 = make_fixnum((long)length((V264)));
	(void)((*(LnkLI80))(V297));
	{register object V298;
	object V299;
	V298= (V264);
	V299= car((V298));
	goto T1069;
T1069:;
	if(!(endp_prop((V298)))){
	goto T1070;}
	goto T1065;
	goto T1070;
T1070:;
	princ_str(",VV[",VV[10]);
	V300= (*(LnkLI108))(car((V299)));
	(void)((*(LnkLI80))(/* INLINE-ARGS */V300));
	princ_char(93,VV[10]);
	V298= cdr((V298));
	V299= car((V298));
	goto T1069;}
	goto T1065;
T1065:;
	princ_str(");",VV[10]);
	{register object V301;
	object V302;
	V301= (V261);
	V302= car((V301));
	goto T1089;
T1089:;
	if(!(endp_prop((V301)))){
	goto T1090;}
	goto T1085;
	goto T1090;
T1090:;
	(void)((*(LnkLI103))((V302)));
	V301= cdr((V301));
	V302= car((V301));
	goto T1089;}
	goto T1085;
T1085:;
	if(((V262))==Cnil){
	goto T1100;}
	if(((V261))==Cnil){
	goto T1103;}
	princ_str("\n	vs_base += ",VV[10]);
	V303 = make_fixnum((long)length((V261)));
	(void)((*(LnkLI80))(V303));
	princ_char(59,VV[10]);
	goto T1103;
T1103:;
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	{register object V304;
	V304= (V262);
	goto T1111;
T1111:;
	if(!(endp_prop((V304)))){
	goto T1112;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1109;
	goto T1112;
T1112:;
	{object V305;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V305= make_cons(symbol_value(VV[57]),Cnil);
	V266= make_cons((V305),(V266));}
	princ_str("\n	if(vs_base>=vs_top){vs_top=sup;",VV[10]);
	if(type_of(car((V266)))!=t_cons)FEwrong_type_argument(Scons,car((V266)));
	(car((V266)))->c.c_cdr = Ct;
	(void)(car((V266)));
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car(car((V266)))));
	princ_char(59,VV[10]);
	princ_char(125,VV[10]);
	(void)((*(LnkLI103))(caar((V304))));
	if((caddar((V304)))==Cnil){
	goto T1130;}
	(void)((*(LnkLI105))(caddar((V304)),Ct));
	goto T1130;
T1130:;
	if((cdr((V304)))==Cnil){
	goto T1133;}
	princ_str("\n	vs_base++;",VV[10]);
	goto T1133;
T1133:;
	V304= cdr((V304));
	goto T1111;}
	goto T1109;
T1109:;
	V266= reverse((V266));
	goto T1100;
T1100:;
	princ_str("\n	vs_top=sup;",VV[10]);
	if(((V262))==Cnil){
	goto T1143;}
	{object V306;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V306= make_cons(symbol_value(VV[57]),Cnil);
	if(type_of((V306))!=t_cons)FEwrong_type_argument(Scons,(V306));
	((V306))->c.c_cdr = Ct;
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI80))(car((V306))));
	princ_char(59,VV[10]);
	{register object V307;
	register object V308;
	V307= (V262);
	V308= car((V307));
	goto T1157;
T1157:;
	if(!(endp_prop((V307)))){
	goto T1158;}
	goto T1153;
	goto T1158;
T1158:;
	if((cdr(car((V266))))==Cnil){
	goto T1162;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI80))(car(car((V266)))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car(car((V266)))));
	princ_str(":;",VV[10]);
	goto T1162;
T1162:;
	{object V309;
	V309= car((V266));
	V266= cdr((V266));}
	(void)((*(LnkLI106))(car((V308)),cadr((V308))));
	if((caddr((V308)))==Cnil){
	goto T1177;}
	(void)((*(LnkLI105))(caddr((V308)),Cnil));
	goto T1177;
T1177:;
	V307= cdr((V307));
	V308= car((V307));
	goto T1157;}
	goto T1153;
T1153:;
	if((cdr((V306)))==Cnil){
	goto T1143;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI80))(car((V306))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI80))(car((V306))));
	princ_str(":;",VV[10]);}
	goto T1143;
T1143:;
	if(((V263))==Cnil){
	goto T1194;}
	(void)((*(LnkLI103))((V263)));
	goto T1194;
T1194:;
	{register object V310;
	register object V311;
	V310= (V264);
	V311= car((V310));
	goto T1201;
T1201:;
	if(!(endp_prop((V310)))){
	goto T1202;}
	goto T1197;
	goto T1202;
T1202:;
	if(!((caaddr((V311)))==(VV[61]))){
	goto T1208;}
	if((caddr(caddr((V311))))!=Cnil){
	goto T1208;}
	(void)((*(LnkLI103))(cadr((V311))));
	goto T1206;
	goto T1208;
T1208:;
	princ_str("\n	if(",VV[10]);
	V312= structure_ref(cadddr((V311)),VV[6],2);
	(void)((*(LnkLI109))(/* INLINE-ARGS */V312));
	princ_str("==Cnil){",VV[10]);
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	V313= (*(LnkLI106))(cadr((V311)),caddr((V311)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	princ_str("\n	}else{",VV[10]);
	(void)((*(LnkLI103))(cadr((V311))));
	princ_char(125,VV[10]);
	goto T1206;
T1206:;
	V314= structure_ref(cadddr((V311)),VV[6],1);
	if((/* INLINE-ARGS */V314)==(VV[40])){
	goto T1222;}
	(void)((*(LnkLI103))(cadddr((V311))));
	goto T1222;
T1222:;
	V310= cdr((V310));
	V311= car((V310));
	goto T1201;}
	goto T1197;
T1197:;
	base[10]= (V260);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	if((base[9])==Cnil){
	goto T1233;}
	princ_str("\n	}",VV[10]);
	{object V315 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR14(V315)}
	goto T1233;
T1233:;
	{object V316 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR14(V316)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NEED-TO-SET-VS-POINTERS	*/

static object LI17(V318)

object V318;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(symbol_value(VV[55])!=Cnil){
	{object V319 = symbol_value(VV[55]);
	VMR15(V319)}}
	if(symbol_value(VV[56])!=Cnil){
	{object V320 = symbol_value(VV[56]);
	VMR15(V320)}}{object V321;
	V321= cadr((V318));
	if(V321==Cnil)goto T1236;
	{object V322 = V321;
	VMR15(V322)}
	goto T1236;
T1236:;}{object V323;
	V323= caddr((V318));
	if(V323==Cnil)goto T1238;
	{object V324 = V323;
	VMR15(V324)}
	goto T1238;
T1238:;}
	{object V325 = cadddr((V318));
	VMR15(V325)}
	return Cnil;
}
/*	local entry for function C1DM	*/

static object LI18(V329,V330,V331)

object V329;register object V330;register object V331;
{	 VMB16 VMS16 VMV16
	bds_check;
	goto TTL;
TTL:;
	{object V332;
	object V333;
	object V334;
	object V335;
	register object V336;
	register object V337;
	register object V338;
	object V339;
	object V340;
	bds_bind(VV[53],symbol_value(VV[53]));
	V332= Cnil;
	V333= Cnil;
	V334= symbol_value(VV[31]);
	bds_bind(VV[62],Cnil);
	bds_bind(VV[63],(VFUN_NARGS=0,(*(LnkLI85))()));
	bds_bind(VV[64],Cnil);
	V335= Cnil;
	V336= Cnil;
	V337= Cnil;
	V338= Cnil;
	V339= Cnil;
	V340= Cnil;
	base[4]= (V331);
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk87)();
	if(vs_base<vs_top){
	V331= vs_base[0];
	vs_base++;
	}else{
	V331= Cnil;}
	if(vs_base<vs_top){
	V336= vs_base[0];
	vs_base++;
	}else{
	V336= Cnil;}
	if(vs_base<vs_top){
	V338= vs_base[0];
	vs_base++;
	}else{
	V338= Cnil;}
	if(vs_base<vs_top){
	V337= vs_base[0];
	vs_base++;
	}else{
	V337= Cnil;}
	if(vs_base<vs_top){
	V339= vs_base[0];
	vs_base++;
	}else{
	V339= Cnil;}
	if(vs_base<vs_top){
	V335= vs_base[0];
	}else{
	V335= Cnil;}
	vs_top=sup;
	V341= listA(3,VV[33],(V329),(V331));
	V331= make_cons(/* INLINE-ARGS */V341,Cnil);
	(void)((*(LnkLI88))((V336)));
	if(!(type_of((V330))==t_cons||((V330))==Cnil)){
	goto T1257;}
	if(!((car((V330)))==(VV[65]))){
	goto T1257;}
	{object V342;
	V342= cadr((V330));
	(VV[62]->s.s_dbind)= make_cons((V342),(VV[62]->s.s_dbind));}
	V332= (*(LnkLI89))(cadr((V330)),(V336),(V337),(V338));
	(VV[64]->s.s_dbind)= make_cons(V332,(VV[64]->s.s_dbind));
	setq(VV[30],make_cons(V332,symbol_value(VV[30])));
	V330= cddr((V330));
	goto T1257;
T1257:;
	{register object V345;
	if(type_of((V330))==t_cons||((V330))==Cnil){
	goto T1274;}
	V345= Cnil;
	goto T1273;
	goto T1274;
T1274:;
	{register object V346;
	V346= (V330);
	goto T1277;
T1277:;
	if(type_of((V346))==t_cons){
	goto T1278;}
	V345= Cnil;
	goto T1273;
	goto T1278;
T1278:;
	if(!((VV[66])==(car((V346))))){
	goto T1282;}
	V345= (V346);
	goto T1273;
	goto T1282;
T1282:;
	V346= cdr((V346));
	goto T1277;}
	goto T1273;
T1273:;
	if(((V345))==Cnil){
	goto T1272;}
	{object V347;
	V347= cadr((V345));
	(VV[62]->s.s_dbind)= make_cons((V347),(VV[62]->s.s_dbind));}
	V333= (*(LnkLI89))(cadr((V345)),(V336),(V337),(V338));
	(VV[64]->s.s_dbind)= make_cons(V333,(VV[64]->s.s_dbind));
	setq(VV[30],make_cons(V333,symbol_value(VV[30])));
	base[4]= (V330);
	base[5]= (V345);
	vs_top=(vs_base=base+4)+2;
	Lldiff();
	vs_top=sup;
	V350= vs_base[0];
	V330= append(V350,cddr((V345)));}
	goto T1272;
T1272:;
	base[4]= (V330);
	base[5]= (V336);
	base[6]= (V337);
	base[7]= (V338);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk110)();
	if(vs_base<vs_top){
	V330= vs_base[0];
	vs_base++;
	}else{
	V330= Cnil;}
	if(vs_base<vs_top){
	V340= vs_base[0];
	}else{
	V340= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI95))((VV[62]->s.s_dbind),(V338),(V337)));
	V331= (*(LnkLI96))((V339),(V331));{object V351;
	V351= (VV[63]->s.s_dbind);
	(void)((*(LnkLI94))(V351,cadr((V331))));}
	{object V352;
	V352= (eql((V334),symbol_value(VV[31]))?Ct:Cnil);
	if(((V352))==Cnil){
	goto T1316;}
	goto T1313;
	goto T1316;
T1316:;
	(void)(structure_set((VV[63]->s.s_dbind),VV[5],4,Ct));
	(void)(sputprop((V329),VV[67],Ct));}
	goto T1313;
T1313:;
	{register object V353;
	register object V354;
	V353= (VV[64]->s.s_dbind);
	V354= car((V353));
	goto T1323;
T1323:;
	if(!(endp_prop((V353)))){
	goto T1324;}
	goto T1319;
	goto T1324;
T1324:;
	(void)((*(LnkLI97))((V354)));
	V353= cdr((V353));
	V354= car((V353));
	goto T1323;}
	goto T1319;
T1319:;
	{object V355 = list(7,(V335),(V340),(V332),(V333),(V330),(V331),(VV[63]->s.s_dbind));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR16(V355)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C1DM-VL	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{register object V356;
	register object V357;
	register object V358;
	register object V359;
	check_arg(4);
	V356=(base[0]);
	V357=(base[1]);
	V358=(base[2]);
	V359=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V360;
	object V361;
	object V362;
	object V363;
	object V364;
	object V365;
	object V366;
	object V367;
	object V368;
	object V369;
	object V370;
	object V371;
	object V372;
	object V373;
	V360= Cnil;
	V361= Cnil;
	V362= Cnil;
	V363= Cnil;
	V364= Cnil;
	V365= Cnil;
	V366= Cnil;
	V367= Cnil;
	V368= Cnil;
	V369= Cnil;
	V370= Cnil;
	V371= Cnil;
	V372= small_fixnum(0);
	V373= Cnil;
	goto T1335;
T1335:;
	if(type_of((V356))==t_cons){
	goto T1336;}
	if(((V356))==Cnil){
	goto T1339;}
	if(((V361))==Cnil){
	goto T1342;}
	base[4]= VV[68];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	goto T1342;
T1342:;
	base[4]= (V356);
	base[5]= (V357);
	base[6]= (V358);
	base[7]= (V359);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V367= vs_base[0];
	goto T1339;
T1339:;
	V374= reverse((V365));
	V375= reverse((V366));
	V376= reverse((V369));
	base[4]= list(7,/* INLINE-ARGS */V374,/* INLINE-ARGS */V375,(V367),(V368),/* INLINE-ARGS */V376,(V371),reverse((V370)));
	base[5]= (V373);
	vs_top=(vs_base=base+4)+2;
	return;
	goto T1336;
T1336:;
	{register object V377;
	V377= car((V356));
	if(!(((V377))==(VV[69]))){
	goto T1357;}
	if(((V360))==Cnil){
	goto T1359;}
	base[4]= VV[69];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	goto T1359;
T1359:;
	V360= Ct;
	{object V378;
	V378= car((V356));
	V356= cdr((V356));
	goto T1354;}
	goto T1357;
T1357:;
	if(((V377))==(VV[68])){
	goto T1368;}
	if(!(((V377))==(VV[70]))){
	goto T1369;}
	goto T1368;
T1368:;
	if(((V361))==Cnil){
	goto T1373;}
	base[4]= (V377);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	goto T1373;
T1373:;
	base[4]= cadr((V356));
	base[5]= (V357);
	base[6]= (V358);
	base[7]= (V359);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V367= vs_base[0];
	V361= Ct;
	V360= Ct;
	V356= cddr((V356));
	if(!(((V377))==(VV[70]))){
	goto T1354;}
	V373= (V372);
	goto T1354;
	goto T1369;
T1369:;
	if(!(((V377))==(VV[71]))){
	goto T1393;}
	if(((V362))==Cnil){
	goto T1395;}
	base[4]= VV[71];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	goto T1395;
T1395:;
	V362= Ct;
	V361= Ct;
	V360= Ct;
	V368= Ct;
	{object V379;
	V379= car((V356));
	V356= cdr((V356));
	goto T1354;}
	goto T1393;
T1393:;
	if(!(((V377))==(VV[72]))){
	goto T1411;}
	if(((V362))==Cnil){
	goto T1414;}
	if(((V363))==Cnil){
	goto T1413;}
	goto T1414;
T1414:;
	base[4]= VV[72];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	goto T1413;
T1413:;
	V363= Ct;
	V371= Ct;
	{object V380;
	V380= car((V356));
	V356= cdr((V356));
	goto T1354;}
	goto T1411;
T1411:;
	if(!(((V377))==(VV[73]))){
	goto T1427;}
	if(((V364))==Cnil){
	goto T1429;}
	base[4]= VV[73];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	goto T1429;
T1429:;
	V364= Ct;
	V363= Ct;
	V362= Ct;
	V361= Ct;
	V360= Ct;
	{object V381;
	V381= car((V356));
	V356= cdr((V356));
	goto T1354;}
	goto T1427;
T1427:;
	if(((V364))==Cnil){
	goto T1447;}
	{object V382;
	object V383;
	V382= Cnil;
	V383= Cnil;
	if(!(type_of((V377))==t_symbol)){
	goto T1452;}
	V382= (V377);
	V383= (*(LnkLI113))();
	goto T1450;
	goto T1452;
T1452:;
	V382= car((V377));
	if(!(endp_prop(cdr((V377))))){
	goto T1460;}
	V383= (*(LnkLI113))();
	goto T1450;
	goto T1460;
T1460:;
	V383= (*(LnkLI91))(cadr((V377)),symbol_value(VV[63]));
	goto T1450;
T1450:;
	{object V384;
	base[5]= (V382);
	base[6]= (V357);
	base[7]= (V358);
	base[8]= (V359);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V385= vs_base[0];
	V384= list(2,V385,(V383));
	V370= make_cons((V384),(V370));}}
	{object V386;
	V386= car((V356));
	V356= cdr((V356));
	goto T1354;}
	goto T1447;
T1447:;
	if(((V362))==Cnil){
	goto T1475;}
	{object V387;
	object V388;
	object V389;
	object V390;
	V387= Cnil;
	V388= Cnil;
	V389= Cnil;
	V390= Cnil;
	if(!(type_of((V377))==t_symbol)){
	goto T1480;}
	V387= (V377);
	base[4]= coerce_to_string((V377));
	base[5]= VV[38];
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V388= vs_base[0];
	V389= (*(LnkLI113))();
	goto T1478;
	goto T1480;
T1480:;
	if(!(type_of(car((V377)))==t_symbol)){
	goto T1491;}
	V387= car((V377));
	base[4]= coerce_to_string(car((V377)));
	base[5]= VV[38];
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V388= vs_base[0];
	goto T1489;
	goto T1491;
T1491:;
	V387= cadar((V377));
	V388= caar((V377));
	goto T1489;
T1489:;
	if(!(endp_prop(cdr((V377))))){
	goto T1502;}
	V389= (*(LnkLI113))();
	goto T1478;
	goto T1502;
T1502:;
	V389= (*(LnkLI91))(cadr((V377)),symbol_value(VV[63]));
	if(endp_prop(cddr((V377)))){
	goto T1478;}
	V390= caddr((V377));
	goto T1478;
T1478:;
	{object V391;
	base[5]= (V387);
	base[6]= (V357);
	base[7]= (V358);
	base[8]= (V359);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V392= vs_base[0];
	if(((V390))==Cnil){
	goto T1518;}
	base[5]= (V390);
	base[6]= (V357);
	base[7]= (V358);
	base[8]= (V359);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V393= vs_base[0];
	goto T1516;
	goto T1518;
T1518:;
	V393= Cnil;
	goto T1516;
T1516:;
	V391= list(4,(V388),V392,(V389),V393);
	V369= make_cons((V391),(V369));}}
	{object V394;
	V394= car((V356));
	V356= cdr((V356));
	goto T1354;}
	goto T1475;
T1475:;
	if(((V360))==Cnil){
	goto T1529;}
	{object V395;
	object V396;
	object V397;
	V395= Cnil;
	V396= Cnil;
	V397= Cnil;
	if(!(type_of((V377))==t_symbol)){
	goto T1534;}
	V395= (V377);
	V396= (*(LnkLI113))();
	goto T1532;
	goto T1534;
T1534:;
	V395= car((V377));
	if(!(endp_prop(cdr((V377))))){
	goto T1542;}
	V396= (*(LnkLI113))();
	goto T1532;
	goto T1542;
T1542:;
	V396= (*(LnkLI91))(cadr((V377)),symbol_value(VV[63]));
	if(endp_prop(cddr((V377)))){
	goto T1532;}
	V397= caddr((V377));
	goto T1532;
T1532:;
	{object V398;
	base[5]= (V395);
	base[6]= (V357);
	base[7]= (V358);
	base[8]= (V359);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V399= vs_base[0];
	if(((V397))==Cnil){
	goto T1558;}
	base[5]= (V397);
	base[6]= (V357);
	base[7]= (V358);
	base[8]= (V359);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V400= vs_base[0];
	goto T1556;
	goto T1558;
T1558:;
	V400= Cnil;
	goto T1556;
T1556:;
	V398= list(3,V399,(V396),V400);
	V366= make_cons((V398),(V366));}}
	{object V401;
	V401= car((V356));
	V356= cdr((V356));}
	V372= number_plus((V372),small_fixnum(1));
	goto T1354;
	goto T1529;
T1529:;
	{object V402;
	base[5]= (V377);
	base[6]= (V357);
	base[7]= (V358);
	base[8]= (V359);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk112)();
	vs_top=sup;
	V402= vs_base[0];
	V365= make_cons((V402),(V365));}
	{object V403;
	V403= car((V356));
	V356= cdr((V356));}
	V372= number_plus((V372),small_fixnum(1));}
	goto T1354;
T1354:;
	goto T1335;}
	}
}
/*	function definition for C1DM-V	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V404;
	object V405;
	object V406;
	object V407;
	check_arg(4);
	V404=(base[0]);
	V405=(base[1]);
	V406=(base[2]);
	V407=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V404))==t_symbol)){
	goto T1585;}
	setq(VV[62],make_cons(V404,symbol_value(VV[62])));
	V404= (*(LnkLI89))((V404),(V405),(V406),(V407));
	setq(VV[30],make_cons(V404,symbol_value(VV[30])));
	setq(VV[64],make_cons(V404,symbol_value(VV[64])));
	base[4]= (V404);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1585;
T1585:;
	base[4]= (V404);
	base[5]= (V405);
	base[6]= (V406);
	base[7]= (V407);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk110)();
	return;
	}
}
/*	local entry for function C1DM-BAD-KEY	*/

static object LI21(V412)

object V412;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V413 = (VFUN_NARGS=2,(*(LnkLI86))(VV[74],(V412)));
	VMR19(V413)}
	return Cnil;
}
/*	function definition for C2DM	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{register object V414;
	register object V415;
	object V416;
	object V417;
	check_arg(4);
	V414=(base[0]);
	V415=(base[1]);
	V416=(base[2]);
	V417=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V418;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V418= symbol_value(VV[54]);
	if((symbol_value(VV[55]))!=Cnil){
	goto T1602;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1601;}
	goto T1602;
T1602:;
	princ_str("\n	check_arg(2);",VV[10]);
	goto T1601;
T1601:;
	if(((V414))==Cnil){
	goto T1609;}
	V419= (*(LnkLI102))();
	(void)(structure_set((V414),VV[6],2,/* INLINE-ARGS */V419));
	goto T1607;
	goto T1609;
T1609:;
	(void)((*(LnkLI102))());
	goto T1607;
T1607:;
	if(((V415))==Cnil){
	goto T1613;}
	V420= (*(LnkLI102))();
	(void)(structure_set((V415),VV[6],2,/* INLINE-ARGS */V420));
	goto T1611;
	goto T1613;
T1613:;
	(void)((*(LnkLI102))());
	goto T1611;
T1611:;
	(void)((*(LnkLI114))((V416)));
	princ_str("\n	vs_top=sup;",VV[10]);
	if(((V414))==Cnil){
	goto T1618;}
	(void)((*(LnkLI103))((V414)));
	goto T1618;
T1618:;
	if(((V415))==Cnil){
	goto T1621;}
	(void)((*(LnkLI103))((V415)));
	goto T1621;
T1621:;
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V418)));
	princ_str("=base[0]->c.c_cdr;",VV[10]);
	(void)((*(LnkLI115))((V416),(V418)));
	princ_char(125,VV[10]);
	base[5]= (V417);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk107)();
	return;}
	}
}
/*	local entry for function C2DM-RESERVE-VL	*/

static object LI23(V422)

object V422;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V423;
	object V424;
	V423= car((V422));
	V424= car((V423));
	goto T1636;
T1636:;
	if(!(endp_prop((V423)))){
	goto T1637;}
	goto T1632;
	goto T1637;
T1637:;
	(void)((*(LnkLI116))((V424)));
	V423= cdr((V423));
	V424= car((V423));
	goto T1636;}
	goto T1632;
T1632:;
	{register object V425;
	register object V426;
	V425= cadr((V422));
	V426= car((V425));
	goto T1651;
T1651:;
	if(!(endp_prop((V425)))){
	goto T1652;}
	goto T1647;
	goto T1652;
T1652:;
	(void)((*(LnkLI116))(car((V426))));
	if((caddr((V426)))==Cnil){
	goto T1657;}
	(void)((*(LnkLI116))(caddr((V426))));
	goto T1657;
T1657:;
	V425= cdr((V425));
	V426= car((V425));
	goto T1651;}
	goto T1647;
T1647:;
	if((caddr((V422)))==Cnil){
	goto T1665;}
	(void)((*(LnkLI116))(caddr((V422))));
	goto T1665;
T1665:;
	{register object V427;
	register object V428;
	V427= car(cddddr((V422)));
	V428= car((V427));
	goto T1672;
T1672:;
	if(!(endp_prop((V427)))){
	goto T1673;}
	goto T1668;
	goto T1673;
T1673:;
	(void)((*(LnkLI116))(cadr((V428))));
	if((cadddr((V428)))==Cnil){
	goto T1678;}
	(void)((*(LnkLI116))(cadddr((V428))));
	goto T1678;
T1678:;
	V427= cdr((V427));
	V428= car((V427));
	goto T1672;}
	goto T1668;
T1668:;
	{register object V429;
	object V430;
	V429= caddr(cddddr((V422)));
	V430= car((V429));
	goto T1689;
T1689:;
	if(!(endp_prop((V429)))){
	goto T1690;}
	{object V431 = Cnil;
	VMR21(V431)}
	goto T1690;
T1690:;
	(void)((*(LnkLI116))(car((V430))));
	V429= cdr((V429));
	V430= car((V429));
	goto T1689;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2DM-RESERVE-V	*/

static object LI24(V433)

object V433;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	if(!(type_of((V433))==t_cons)){
	goto T1701;}
	{object V434 = (*(LnkLI114))((V433));
	VMR22(V434)}
	goto T1701;
T1701:;
	V435= (*(LnkLI102))();
	{object V436 = structure_set((V433),VV[6],2,/* INLINE-ARGS */V435);
	VMR22(V436)}
	return Cnil;
}
/*	local entry for function C2DM-BIND-VL	*/

static object LI25(V439,V440)

object V439;register object V440;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{object V441;
	object V442;
	object V443;
	object V444;
	object V445;
	object V446;
	object V447;
	V441= car((V439));
	V442= cadr((V439));
	V443= caddr((V439));
	V444= cadddr((V439));
	V445= car(cddddr((V439)));
	V446= cadr(cddddr((V439)));
	V447= caddr(cddddr((V439)));
	{register object V448;
	V448= (V441);
	goto T1712;
T1712:;
	if(!(endp_prop((V448)))){
	goto T1713;}
	goto T1710;
	goto T1713;
T1713:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T1718;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1717;}
	goto T1718;
T1718:;
	princ_str("\n	if(endp(V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str("))invalid_macro_call();",VV[10]);
	goto T1717;
T1717:;
	V449= car((V448));
	V450= list(2,VV[75],(V440));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V449,/* INLINE-ARGS */V450));
	if((cdr((V448)))!=Cnil){
	goto T1727;}
	if(((V442))!=Cnil){
	goto T1727;}
	if(((V443))!=Cnil){
	goto T1727;}
	if(((V444))!=Cnil){
	goto T1727;}
	if((symbol_value(VV[55]))!=Cnil){
	goto T1727;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1726;}
	goto T1727;
T1727:;
	princ_str("\n	V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str("=V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str("->c.c_cdr;",VV[10]);
	goto T1726;
T1726:;
	V448= cdr((V448));
	goto T1712;}
	goto T1710;
T1710:;
	{register object V451;
	V451= (V442);
	goto T1749;
T1749:;
	if(!(endp_prop((V451)))){
	goto T1750;}
	goto T1747;
	goto T1750;
T1750:;
	{register object V452;
	V452= car((V451));
	princ_str("\n	if(endp(V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str(")){",VV[10]);
	bds_bind(VV[24],symbol_value(VV[24]));
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[25],symbol_value(VV[25]));
	(void)((*(LnkLI118))(car((V452)),cadr((V452))));
	if((caddr((V452)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1760;}
	V453= (*(LnkLI117))(caddr((V452)),Cnil);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1760;
T1760:;
	princ_str("\n	} else {",VV[10]);
	V454= car((V452));
	V455= list(2,VV[75],(V440));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V454,/* INLINE-ARGS */V455));
	if((caddr((V452)))==Cnil){
	goto T1754;}
	(void)((*(LnkLI117))(caddr((V452)),Ct));}
	goto T1754;
T1754:;
	if((cdr((V451)))!=Cnil){
	goto T1770;}
	if(((V443))!=Cnil){
	goto T1770;}
	if(((V444))!=Cnil){
	goto T1770;}
	if((symbol_value(VV[55]))!=Cnil){
	goto T1770;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1769;}
	goto T1770;
T1770:;
	princ_str("\n	V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str("=V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str("->c.c_cdr;",VV[10]);
	goto T1769;
T1769:;
	princ_char(125,VV[10]);
	V451= cdr((V451));
	goto T1749;}
	goto T1747;
T1747:;
	if(((V443))==Cnil){
	goto T1790;}
	V456= list(2,VV[76],(V440));
	(void)((*(LnkLI117))((V443),/* INLINE-ARGS */V456));
	goto T1790;
T1790:;
	{object V457;
	register object V458;
	V457= (V445);
	V458= car((V457));
	goto T1797;
T1797:;
	if(!(endp_prop((V457)))){
	goto T1798;}
	goto T1793;
	goto T1798;
T1798:;
	{object V459;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V459= symbol_value(VV[54]);
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V459)));
	princ_str("=getf(V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str(",VV[",VV[10]);
	V460= (*(LnkLI108))(car((V458)));
	(void)((*(LnkLI80))(/* INLINE-ARGS */V460));
	princ_str("],OBJNULL);",VV[10]);
	princ_str("\n	if(V",VV[10]);
	(void)((*(LnkLI80))((V459)));
	princ_str("==OBJNULL){",VV[10]);
	bds_bind(VV[24],symbol_value(VV[24]));
	bds_bind(VV[52],symbol_value(VV[52]));
	bds_bind(VV[25],symbol_value(VV[25]));
	(void)((*(LnkLI118))(cadr((V458)),caddr((V458))));
	if((cadddr((V458)))==Cnil){
	goto T1819;}
	(void)((*(LnkLI117))(cadddr((V458)),Cnil));
	goto T1819;
T1819:;
	princ_str("\n	} else {",VV[10]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V461= cadr((V458));
	V462= list(2,VV[76],(V459));
	(void)((*(LnkLI117))(/* INLINE-ARGS */V461,/* INLINE-ARGS */V462));
	if((cadddr((V458)))==Cnil){
	goto T1824;}
	(void)((*(LnkLI117))(cadddr((V458)),Ct));
	goto T1824;
T1824:;
	princ_str("}}",VV[10]);}
	V457= cdr((V457));
	V458= car((V457));
	goto T1797;}
	goto T1793;
T1793:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T1835;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1833;}
	goto T1835;
T1835:;
	if(((V443))!=Cnil){
	goto T1833;}
	if(((V444))!=Cnil){
	goto T1833;}
	princ_str("\n	if(!endp(V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_str("))invalid_macro_call();",VV[10]);
	goto T1833;
T1833:;
	if((symbol_value(VV[55]))!=Cnil){
	goto T1847;}
	if((symbol_value(VV[56]))==Cnil){
	goto T1845;}
	goto T1847;
T1847:;
	if(((V444))==Cnil){
	goto T1845;}
	if(((V446))!=Cnil){
	goto T1845;}
	princ_str("\n	check_other_key(V",VV[10]);
	(void)((*(LnkLI80))((V440)));
	princ_char(44,VV[10]);
	V463 = make_fixnum((long)length((V445)));
	(void)((*(LnkLI80))(V463));
	{object V464;
	object V465;
	V464= (V445);
	V465= car((V464));
	goto T1863;
T1863:;
	if(!(endp_prop((V464)))){
	goto T1864;}
	goto T1859;
	goto T1864;
T1864:;
	princ_str(",VV[",VV[10]);
	V466= (*(LnkLI108))(car((V465)));
	(void)((*(LnkLI80))(/* INLINE-ARGS */V466));
	princ_char(93,VV[10]);
	V464= cdr((V464));
	V465= car((V464));
	goto T1863;}
	goto T1859;
T1859:;
	princ_str(");",VV[10]);
	goto T1845;
T1845:;
	{object V467;
	object V468;
	V467= (V447);
	V468= car((V467));
	goto T1881;
T1881:;
	if(!(endp_prop((V467)))){
	goto T1882;}
	{object V469 = Cnil;
	VMR23(V469)}
	goto T1882;
T1882:;
	(void)((*(LnkLI118))(car((V468)),cadr((V468))));
	V467= cdr((V467));
	V468= car((V467));
	goto T1881;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2DM-BIND-LOC	*/

static object LI26(V472,V473)

object V472;object V473;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if(!(type_of((V472))==t_cons)){
	goto T1893;}
	{object V474;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V474= symbol_value(VV[54]);
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V474)));
	princ_str("= ",VV[10]);
	(void)((*(LnkLI80))((V473)));
	princ_char(59,VV[10]);
	(void)((*(LnkLI115))((V472),(V474)));
	princ_char(125,VV[10]);
	{object V475 = Cnil;
	VMR24(V475)}}
	goto T1893;
T1893:;
	{object V476 = (*(LnkLI105))((V472),(V473));
	VMR24(V476)}
	return Cnil;
}
/*	local entry for function C2DM-BIND-INIT	*/

static object LI27(V479,V480)

object V479;object V480;
{	 VMB25 VMS25 VMV25
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V479))==t_cons)){
	goto T1906;}
	{object V481;
	object V482;
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[77],small_fixnum(0));
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V481= symbol_value(VV[54]);
	V483= make_cons((V480),Cnil);
	V484= (VFUN_NARGS=2,(*(LnkLI119))(/* INLINE-ARGS */V483,VV[78]));
	V482= car(/* INLINE-ARGS */V484);
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI80))((V481)));
	princ_str("= ",VV[10]);
	(void)((*(LnkLI80))((V482)));
	princ_char(59,VV[10]);
	(void)((*(LnkLI115))((V479),(V481)));
	princ_char(125,VV[10]);
	{object V485 = (*(LnkLI120))();
	bds_unwind1;
	bds_unwind1;
	VMR25(V485)}}
	goto T1906;
T1906:;
	{object V486 = (*(LnkLI106))((V479),(V480));
	VMR25(V486)}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V487;
	check_arg(1);
	V487=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V488;
	V488= (*(LnkLI121))((V487));
	if(((V488))==Cnil){
	goto T1922;}
	{object V489;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V489= symbol_value(VV[54]);
	(void)(structure_set((V487),VV[6],1,(V488)));
	(void)(structure_set((V487),VV[6],4,(V489)));
	princ_str("\n	",VV[10]);
	if((base0[9])!=Cnil){
	goto T1929;}
	princ_char(123,VV[10]);
	base0[9]= Ct;
	goto T1929;
T1929:;
	base[1]= (V487);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	return;}
	goto T1922;
T1922:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function DO-DECL	*/

static void L14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V490;
	check_arg(1);
	V490=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V491;
	V491= (*(LnkLI121))((V490));
	if(((V491))==Cnil){
	goto T1938;}
	{object V492;
	setq(VV[54],number_plus(symbol_value(VV[54]),small_fixnum(1)));
	V492= symbol_value(VV[54]);
	(void)(structure_set((V490),VV[6],1,(V491)));
	(void)(structure_set((V490),VV[6],4,(V492)));
	princ_str("\n	",VV[10]);
	if((base0[7])!=Cnil){
	goto T1945;}
	princ_char(123,VV[10]);
	base0[7]= Ct;
	goto T1945;
T1945:;
	base[1]= (V490);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	return;}
	goto T1938;
T1938:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* WT-VAR-DECL */
static object  LnkTLI121(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[121],(void **)(void *)&LnkLI121,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI120(){return call_proc0(VV[120],(void **)(void *)&LnkLI120);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI119(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[119],(void **)(void *)&LnkLI119,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI118(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[118],(void **)(void *)&LnkLI118,2,first,ap);va_end(ap);return V1;} /* C2DM-BIND-INIT */
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)(void *)&LnkLI117,2,first,ap);va_end(ap);return V1;} /* C2DM-BIND-LOC */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* C2DM-RESERVE-V */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,2,first,ap);va_end(ap);return V1;} /* C2DM-BIND-VL */
static object  LnkTLI114(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[114],(void **)(void *)&LnkLI114,1,first,ap);va_end(ap);return V1;} /* C2DM-RESERVE-VL */
static object  LnkTLI113(){return call_proc0(VV[113],(void **)(void *)&LnkLI113);} /* C1NIL */
static void LnkT112(){ call_or_link(VV[112],(void **)(void *)&Lnk112);} /* C1DM-V */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* DM-BAD-KEY */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* C1DM-VL */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* C2EXPR */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI104(){return call_proc0(VV[104],(void **)(void *)&LnkLI104);} /* RESET-TOP */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI102(){return call_proc0(VV[102],(void **)(void *)&LnkLI102);} /* VS-PUSH */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,2,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR-WITHOUT-KEY */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[100],(void **)(void *)&LnkLI100,2,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR-WITH-KEY */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[99],(void **)(void *)&LnkLI99,1,first,ap);va_end(ap);return V1;} /* RECORD-ARG-INFO */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,3,first,ap);va_end(ap);return V1;} /* FIX-DOWN-ARGS */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,1,first,ap);va_end(ap);return V1;} /* CHECK-VREF */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[96],(void **)(void *)&LnkLI96,2,first,ap);va_end(ap);return V1;} /* C1DECL-BODY */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],(void **)(void *)&LnkLI95,3,first,ap);va_end(ap);return V1;} /* CHECK-VDECL */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[94],(void **)(void *)&LnkLI94,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[93],(void **)(void *)&LnkLI93,first,ap);va_end(ap);return V1;} /* MAKE-VAR */
static object  LnkTLI92(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[92],(void **)(void *)&LnkLI92,3,first,ap);va_end(ap);return V1;} /* AND-FORM-TYPE */
static object  LnkTLI91(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[91],(void **)(void *)&LnkLI91,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[90],(void **)(void *)&LnkLI90,1,first,ap);va_end(ap);return V1;} /* DEFAULT-INIT */
static object  LnkTLI89(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[89],(void **)(void *)&LnkLI89,4,first,ap);va_end(ap);return V1;} /* C1MAKE-VAR */
static object  LnkTLI88(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[88],(void **)(void *)&LnkLI88,1,first,ap);va_end(ap);return V1;} /* C1ADD-GLOBALS */
static void LnkT87(){ call_or_link(VV[87],(void **)(void *)&Lnk87);} /* C1BODY */
static object  LnkTLI86(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[86],(void **)(void *)&LnkLI86,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI85(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[85],(void **)(void *)&LnkLI85,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[84],(void **)(void *)&LnkLI84,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI83(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[83],(void **)(void *)&LnkLI83,first,ap);va_end(ap);return V1;} /* MAKE-FUN */
static object  LnkTLI82(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[82],(void **)(void *)&LnkLI82,first,ap);va_end(ap);return V1;} /* DELETE */
static object  LnkTLI81(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[81],(void **)(void *)&LnkLI81,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[80],(void **)(void *)&LnkLI80,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI79(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[79],(void **)(void *)&LnkLI79,1,first,ap);va_end(ap);return V1;} /* C1EXPR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

