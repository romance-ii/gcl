
#include "cmpinclude.h"
#include "gcl_defmacro.h"
void init_gcl_defmacro(){do_init(VV);}
/*	function definition for GET-&ENVIRONMENT	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{register object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V2;
	V2= Cnil;
	{register object V3;
	if(type_of((V1))==t_cons||((V1))==Cnil){
	goto T3;}
	V3= Cnil;
	goto T2;
	goto T3;
T3:;
	{register object V4;
	V4= (V1);
	goto T6;
T6:;
	if(type_of((V4))==t_cons){
	goto T7;}
	V3= Cnil;
	goto T2;
	goto T7;
T7:;
	if(!((VV[0])==(car((V4))))){
	goto T11;}
	V3= (V4);
	goto T2;
	goto T11;
T11:;
	V4= cdr((V4));
	goto T6;}
	goto T2;
T2:;
	if(((V3))==Cnil){
	goto T17;}
	V2= cadr((V3));
	base[1]= (V1);
	base[2]= (V3);
	vs_top=(vs_base=base+1)+2;
	Lldiff();
	vs_top=sup;
	V5= vs_base[0];
	V1= append(V5,cddr((V3)));
	goto T17;
T17:;
	base[1]= (V1);
	base[2]= (V2);
	vs_top=(vs_base=base+1)+2;
	return;}}
	}
}
/*	local entry for function DEFMACRO*	*/

static object LI2(V9,V10,V11)

object V9;object V10;register object V11;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	{object V12;
	object V13;
	object V14;
	object V15;
	object V16;
	object V17;
	bds_bind(VV[1],Cnil);
	bds_bind(VV[2],Cnil);
	bds_bind(VV[3],Cnil);
	V12= Cnil;
	V13= Cnil;
	V14= Cnil;
	V15= Cnil;
	V16= Cnil;
	V17= Cnil;
	{object V18;
	V18= (type_of((V10))==t_cons||((V10))==Cnil?Ct:Cnil);
	if(((V18))==Cnil){
	goto T37;}
	goto T34;
	goto T37;
T37:;
	if(!(type_of((V10))==t_symbol)){
	goto T40;}
	V10= list(2,VV[4],(V10));
	goto T34;
	goto T40;
T40:;
	base[3]= VV[5];
	base[4]= (V10);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;}
	goto T34;
T34:;
	base[3]= (V11);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk53)();
	if(vs_base<vs_top){
	V12= vs_base[0];
	vs_base++;
	}else{
	V12= Cnil;}
	if(vs_base<vs_top){
	V13= vs_base[0];
	vs_base++;
	}else{
	V13= Cnil;}
	if(vs_base<vs_top){
	V11= vs_base[0];
	}else{
	V11= Cnil;}
	vs_top=sup;
	if(!(type_of((V10))==t_cons||((V10))==Cnil)){
	goto T51;}
	if(!((car((V10)))==(VV[6]))){
	goto T51;}
	V14= cadr((V10));
	V10= cddr((V10));
	goto T49;
	goto T51;
T51:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V14= vs_base[0];
	goto T49;
T49:;
	base[3]= (V10);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk54)();
	if(vs_base<vs_top){
	V10= vs_base[0];
	vs_base++;
	}else{
	V10= Cnil;}
	if(vs_base<vs_top){
	V16= vs_base[0];
	}else{
	V16= Cnil;}
	vs_top=sup;
	V17= (V16);
	if((V16)!=Cnil){
	goto T64;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V16= vs_base[0];
	goto T64;
T64:;
	(VV[1]->s.s_dbind)= list(3,VV[7],(V16),(V14));
	V15= (*(LnkLI55))((V10),(V14),Ct);
	{register object V19;
	register object V20;
	V19= (VV[2]->s.s_dbind);
	V20= car((V19));
	goto T74;
T74:;
	if(!(endp_prop((V19)))){
	goto T75;}
	goto T70;
	goto T75;
T75:;
	{register object V21;
	V22= list(3,VV[9],car((V20)),VV[10]);
	V23= list(3,VV[12],car((V20)),VV[13]);
	V24= make_cons(/* INLINE-ARGS */V23,Cnil);
	V21= list(3,VV[8],/* INLINE-ARGS */V22,list(4,VV[11],/* INLINE-ARGS */V24,VV[14],list(3,VV[8],list(3,VV[15],VV[16],list(2,VV[17],cdr((V20)))),VV[18])));
	V11= make_cons((V21),(V11));}
	V19= cdr((V19));
	V20= car((V19));
	goto T74;}
	goto T70;
T70:;
	{register object V25;
	register object V26;
	V25= (VV[3]->s.s_dbind);
	V26= car((V25));
	goto T91;
T91:;
	if(!(endp_prop((V25)))){
	goto T92;}
	goto T87;
	goto T92;
T92:;
	{register object V27;
	V27= list(3,VV[8],list(2,VV[19],(*(LnkLI56))(cdr((V26)),car((V26)))),VV[20]);
	V11= make_cons((V27),(V11));}
	V25= cdr((V25));
	V26= car((V25));
	goto T91;}
	goto T87;
T87:;
	if(((V17))!=Cnil){
	goto T104;}
	{object V28;
	V28= list(2,VV[21],list(2,VV[22],(V16)));
	V11= make_cons((V28),(V11));}
	goto T104;
T104:;
	V29= reverse((VV[1]->s.s_dbind));
	{object V30 = list(3,(V12),(V15),listA(4,VV[23],(V9),/* INLINE-ARGS */V29,append((V13),(V11))));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V30)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-VL	*/

static object LI3(V34,V35,V36)

register object V34;register object V35;object V36;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{register object V37;
	object V38;
	object V39;
	object V40;
	object V41;
	object V42;
	object V43;
	object V44;
	object V45;
	register object V46;
	object V47;
	if(((V36))==Cnil){
	goto T111;}
	V46= small_fixnum(1);
	goto T109;
	goto T111;
T111:;
	V46= small_fixnum(0);
	goto T109;
T109:;
	V37= Cnil;
	V38= Cnil;
	V39= Cnil;
	V40= Cnil;
	V41= Cnil;
	V42= Cnil;
	V43= Cnil;
	V44= Cnil;
	V45= Cnil;
	V47= Cnil;
	goto T114;
T114:;
	if(type_of((V34))==t_cons){
	goto T115;}
	if(((V34))==Cnil){
	goto T118;}
	if(((V38))==Cnil){
	goto T121;}
	(void)((*(LnkLI57))(VV[4]));
	goto T121;
T121:;
	{object V48;
	V48= list(2,(V34),(*(LnkLI56))((V46),(V35)));
	setq(VV[1],make_cons((V48),symbol_value(VV[1])));}
	V45= Ct;
	goto T118;
T118:;
	if(((V42))==Cnil){
	goto T128;}
	if(((V43))!=Cnil){
	goto T128;}
	{object V49;
	V49= make_cons((V42),(V44));
	setq(VV[2],make_cons((V49),symbol_value(VV[2])));}
	goto T128;
T128:;
	if(((V45))!=Cnil){
	goto T135;}
	{object V50;
	V50= make_cons((V35),(V46));
	setq(VV[3],make_cons((V50),symbol_value(VV[3])));}
	goto T135;
T135:;
	{object V51 = (V47);
	VMR3(V51)}
	goto T115;
T115:;
	{register object V52;
	V52= car((V34));
	if(!(((V52))==(VV[24]))){
	goto T144;}
	if(((V37))==Cnil){
	goto T146;}
	(void)((*(LnkLI57))(VV[24]));
	goto T146;
T146:;
	V37= Ct;
	{object V53;
	V53= car((V34));
	V34= cdr((V34));
	goto T141;}
	goto T144;
T144:;
	if(((V52))==(VV[4])){
	goto T154;}
	if(!(((V52))==(VV[25]))){
	goto T155;}
	goto T154;
T154:;
	if(((V38))==Cnil){
	goto T159;}
	(void)((*(LnkLI57))((V52)));
	goto T159;
T159:;
	V54= cadr((V34));
	V55= (*(LnkLI56))((V46),(V35));
	(void)((*(LnkLI58))(/* INLINE-ARGS */V54,/* INLINE-ARGS */V55));
	V38= Ct;
	V37= Ct;
	V45= Ct;
	V34= cddr((V34));
	if(!(((V52))==(VV[25]))){
	goto T141;}
	if(((V36))==Cnil){
	goto T175;}
	V47= one_minus((V46));
	goto T173;
	goto T175;
T175:;
	V47= (V46);
	goto T173;
T173:;
	goto T141;
	goto T155;
T155:;
	if(!(((V52))==(VV[26]))){
	goto T178;}
	if(((V39))==Cnil){
	goto T180;}
	(void)((*(LnkLI57))(VV[26]));
	goto T180;
T180:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V42= vs_base[0];
	{object V56;
	V56= list(2,(V42),(*(LnkLI56))((V46),(V35)));
	setq(VV[1],make_cons((V56),symbol_value(VV[1])));}
	V39= Ct;
	V38= Ct;
	V37= Ct;
	V45= Ct;
	{object V57;
	V57= car((V34));
	V34= cdr((V34));
	goto T141;}
	goto T178;
T178:;
	if(!(((V52))==(VV[27]))){
	goto T200;}
	if(((V39))==Cnil){
	goto T203;}
	if(((V40))==Cnil){
	goto T202;}
	goto T203;
T203:;
	(void)((*(LnkLI57))(VV[27]));
	goto T202;
T202:;
	V40= Ct;
	V43= Ct;
	{object V58;
	V58= car((V34));
	V34= cdr((V34));
	goto T141;}
	goto T200;
T200:;
	if(!(((V52))==(VV[7]))){
	goto T215;}
	if(((V41))==Cnil){
	goto T217;}
	(void)((*(LnkLI57))(VV[7]));
	goto T217;
T217:;
	V41= Ct;
	V40= Ct;
	V39= Ct;
	V38= Ct;
	V37= Ct;
	{object V59;
	V59= car((V34));
	V34= cdr((V34));
	goto T141;}
	goto T215;
T215:;
	if(((V41))==Cnil){
	goto T234;}
	{object V60;
	object V61;
	V60= Cnil;
	V61= Cnil;
	if(!(type_of((V52))==t_symbol)){
	goto T239;}
	V60= (V52);
	goto T237;
	goto T239;
T239:;
	V60= car((V52));
	if(endp_prop(cdr((V52)))){
	goto T237;}
	V61= cadr((V52));
	goto T237;
T237:;
	(void)((*(LnkLI58))((V60),(V61)));}
	{object V62;
	V62= car((V34));
	V34= cdr((V34));
	goto T141;}
	goto T234;
T234:;
	if(((V39))==Cnil){
	goto T251;}
	{object V63;
	object V64;
	register object V65;
	object V66;
	object V67;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V63= vs_base[0];
	V64= Cnil;
	V65= Cnil;
	V66= Cnil;
	V67= Cnil;
	if(!(type_of((V52))==t_symbol)){
	goto T257;}
	V64= (V52);
	base[0]= coerce_to_string((V52));
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V65= vs_base[0];
	goto T255;
	goto T257;
T257:;
	if(!(type_of(car((V52)))==t_symbol)){
	goto T266;}
	V64= car((V52));
	base[0]= coerce_to_string(car((V52)));
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V65= vs_base[0];
	goto T264;
	goto T266;
T266:;
	V64= cadar((V52));
	V65= caar((V52));
	goto T264;
T264:;
	if(endp_prop(cdr((V52)))){
	goto T255;}
	V66= cadr((V52));
	if(endp_prop(cddr((V52)))){
	goto T255;}
	V67= caddr((V52));
	goto T255;
T255:;
	V68= list(4,VV[9],(V42),(V65),VV[29]);
	(void)((*(LnkLI58))((V63),/* INLINE-ARGS */V68));
	V69= list(4,VV[30],list(3,VV[31],(V63),VV[32]),(V66),(V63));
	(void)((*(LnkLI58))((V64),/* INLINE-ARGS */V69));
	if(((V67))==Cnil){
	goto T285;}
	V70= list(2,VV[33],list(3,VV[31],(V63),VV[34]));
	(void)((*(LnkLI58))((V67),/* INLINE-ARGS */V70));
	goto T285;
T285:;
	V44= make_cons(V65,(V44));}
	{object V72;
	V72= car((V34));
	V34= cdr((V34));
	goto T141;}
	goto T251;
T251:;
	if(((V37))==Cnil){
	goto T293;}
	{object V73;
	object V74;
	object V75;
	V73= Cnil;
	V74= Cnil;
	V75= Cnil;
	if(!(type_of((V52))==t_symbol)){
	goto T298;}
	V73= (V52);
	goto T296;
	goto T298;
T298:;
	V73= car((V52));
	if(endp_prop(cdr((V52)))){
	goto T296;}
	V74= cadr((V52));
	if(endp_prop(cddr((V52)))){
	goto T296;}
	V75= caddr((V52));
	goto T296;
T296:;
	V76= (*(LnkLI56))((V46),(V35));
	V77= (*(LnkLI59))((V46),(V35));
	V78= list(4,VV[30],/* INLINE-ARGS */V76,/* INLINE-ARGS */V77,(V74));
	(void)((*(LnkLI58))((V73),/* INLINE-ARGS */V78));
	if(((V75))==Cnil){
	goto T295;}
	V79= list(2,VV[33],list(2,VV[35],(*(LnkLI56))((V46),(V35))));
	(void)((*(LnkLI58))((V75),/* INLINE-ARGS */V79));}
	goto T295;
T295:;
	V46= number_plus((V46),small_fixnum(1));
	{object V80;
	V80= car((V34));
	V34= cdr((V34));
	goto T141;}
	goto T293;
T293:;
	V81= (*(LnkLI56))((V46),(V35));
	V82= (*(LnkLI59))((V46),(V35));
	V83= list(4,VV[30],/* INLINE-ARGS */V81,/* INLINE-ARGS */V82,VV[36]);
	(void)((*(LnkLI58))((V52),/* INLINE-ARGS */V83));
	V46= number_plus((V46),small_fixnum(1));
	{object V84;
	V84= car((V34));
	V34= cdr((V34));}}
	goto T141;
T141:;
	goto T114;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-V	*/

static object LI4(V87,V88)

register object V87;register object V88;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(!(type_of((V87))==t_symbol)){
	goto T327;}
	{object V89;
	if(((V88))==Cnil){
	goto T331;}
	V89= list(2,(V87),(V88));
	goto T329;
	goto T331;
T331:;
	V89= (V87);
	goto T329;
T329:;
	setq(VV[1],make_cons((V89),symbol_value(VV[1])));
	{object V90 = symbol_value(VV[1]);
	VMR4(V90)}}
	goto T327;
T327:;
	{object V91;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V91= vs_base[0];
	{object V92;
	if(((V88))==Cnil){
	goto T338;}
	V92= list(2,(V91),(V88));
	goto T336;
	goto T338;
T338:;
	V92= (V91);
	goto T336;
T336:;
	setq(VV[1],make_cons((V92),symbol_value(VV[1])));}
	{object V93 = (*(LnkLI55))((V87),(V91),Cnil);
	VMR4(V93)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-NTH	*/

static object LI5(V96,V97)

object V96;register object V97;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V98;
	object V99;
	base[0]= (V96);
	base[1]= small_fixnum(4);
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	if(vs_base>=vs_top){vs_top=sup;goto T344;}
	V98= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T345;}
	V99= vs_base[0];
	vs_top=sup;
	goto T346;
	goto T344;
T344:;
	V98= Cnil;
	goto T345;
T345:;
	V99= Cnil;
	goto T346;
T346:;
	{register object V100;
	register object V101;
	V100= (V98);
	V101= small_fixnum(0);
	goto T351;
T351:;
	if(!(number_compare((V101),(V100))>=0)){
	goto T352;}
	goto T347;
	goto T352;
T352:;
	V97= list(2,VV[37],(V97));
	V101= one_plus((V101));
	goto T351;}
	goto T347;
T347:;
	{object V102= (V99);
	if(!eql(V102,VV[38]))goto T361;
	{object V103 = list(2,VV[39],(V97));
	VMR5(V103)}
	goto T361;
T361:;
	if(!eql(V102,VV[40]))goto T362;
	{object V104 = list(2,VV[41],(V97));
	VMR5(V104)}
	goto T362;
T362:;
	if(!eql(V102,VV[42]))goto T363;
	{object V105 = list(2,VV[43],(V97));
	VMR5(V105)}
	goto T363;
T363:;
	if(!eql(V102,VV[44]))goto T364;
	{object V106 = list(2,VV[45],(V97));
	VMR5(V106)}
	goto T364;
T364:;
	{object V107 = Cnil;
	VMR5(V107)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-NTH-CDR	*/

static object LI6(V110,V111)

object V110;register object V111;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V112;
	object V113;
	base[0]= (V110);
	base[1]= small_fixnum(4);
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	if(vs_base>=vs_top){vs_top=sup;goto T368;}
	V112= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T369;}
	V113= vs_base[0];
	vs_top=sup;
	goto T370;
	goto T368;
T368:;
	V112= Cnil;
	goto T369;
T369:;
	V113= Cnil;
	goto T370;
T370:;
	{register object V114;
	register object V115;
	V114= (V112);
	V115= small_fixnum(0);
	goto T375;
T375:;
	if(!(number_compare((V115),(V114))>=0)){
	goto T376;}
	goto T371;
	goto T376;
T376:;
	V111= list(2,VV[37],(V111));
	V115= one_plus((V115));
	goto T375;}
	goto T371;
T371:;
	{object V116= (V113);
	if(!eql(V116,VV[38]))goto T385;
	{object V117 = (V111);
	VMR6(V117)}
	goto T385;
T385:;
	if(!eql(V116,VV[40]))goto T386;
	{object V118 = list(2,VV[46],(V111));
	VMR6(V118)}
	goto T386;
T386:;
	if(!eql(V116,VV[42]))goto T387;
	{object V119 = list(2,VV[47],(V111));
	VMR6(V119)}
	goto T387;
T387:;
	if(!eql(V116,VV[44]))goto T388;
	{object V120 = list(2,VV[48],(V111));
	VMR6(V120)}
	goto T388;
T388:;
	{object V121 = Cnil;
	VMR6(V121)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-BAD-KEY	*/

static object LI7(V123)

object V123;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	base[0]= VV[49];
	base[1]= (V123);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V124 = vs_base[0];
	VMR7(V124)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-TOO-FEW-ARGUMENTS	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= VV[50];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V125 = vs_base[0];
	VMR8(V125)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-TOO-MANY-ARGUMENTS	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	base[0]= VV[51];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V126 = vs_base[0];
	VMR9(V126)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DM-KEY-NOT-ALLOWED	*/

static object LI10(V128)

object V128;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[52];
	base[1]= (V128);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V129 = vs_base[0];
	VMR10(V129)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-DOC	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{register object V130;
	object V131;
	check_arg(2);
	V130=(base[0]);
	V131=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(endp_prop((V130)))){
	goto T396;}
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	return;
	goto T396;
T396:;
	{register object V132;
	base[2]= car((V130));
	vs_top=(vs_base=base+2)+1;
	Lmacroexpand();
	vs_top=sup;
	V132= vs_base[0];
	if(!(type_of((V132))==t_string)){
	goto T404;}
	if(endp_prop(cdr((V130)))){
	goto T406;}
	if(((V131))==Cnil){
	goto T407;}
	goto T406;
T406:;
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= make_cons((V132),cdr((V130)));
	vs_top=(vs_base=base+2)+3;
	return;
	goto T407;
T407:;
	{object V133;
	object V134;
	object V135;
	base[2]= cdr((V130));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk53)();
	if(vs_base>=vs_top){vs_top=sup;goto T417;}
	V133= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T418;}
	V134= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T419;}
	V135= vs_base[0];
	vs_top=sup;
	goto T420;
	goto T417;
T417:;
	V133= Cnil;
	goto T418;
T418:;
	V134= Cnil;
	goto T419;
T419:;
	V135= Cnil;
	goto T420;
T420:;
	base[2]= (V132);
	base[3]= (V134);
	base[4]= (V135);
	vs_top=(vs_base=base+2)+3;
	return;}
	goto T404;
T404:;
	if(!(type_of((V132))==t_cons)){
	goto T425;}
	if(!((car((V132)))==(VV[21]))){
	goto T425;}
	{object V136;
	object V137;
	object V138;
	base[2]= cdr((V130));
	base[3]= (V131);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk53)();
	if(vs_base>=vs_top){vs_top=sup;goto T432;}
	V136= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T433;}
	V137= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T434;}
	V138= vs_base[0];
	vs_top=sup;
	goto T435;
	goto T432;
T432:;
	V136= Cnil;
	goto T433;
T433:;
	V137= Cnil;
	goto T434;
T434:;
	V138= Cnil;
	goto T435;
T435:;
	base[2]= (V136);
	base[3]= make_cons((V132),(V137));
	base[4]= (V138);
	vs_top=(vs_base=base+2)+3;
	return;}
	goto T425;
T425:;
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= make_cons((V132),cdr((V130)));
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	function definition for FIND-DECLARATIONS	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{register object V139;
	check_arg(1);
	V139=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(endp_prop((V139)))){
	goto T443;}
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T443;
T443:;
	{register object V140;
	base[1]= car((V139));
	vs_top=(vs_base=base+1)+1;
	Lmacroexpand();
	vs_top=sup;
	V140= vs_base[0];
	if(!(type_of((V140))==t_string)){
	goto T450;}
	if(!(endp_prop(cdr((V139))))){
	goto T453;}
	base[1]= Cnil;
	base[2]= make_cons((V140),Cnil);
	vs_top=(vs_base=base+1)+2;
	return;
	goto T453;
T453:;
	{object V141;
	object V142;
	base[1]= cdr((V139));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk60)();
	if(vs_base>=vs_top){vs_top=sup;goto T459;}
	V141= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T460;}
	V142= vs_base[0];
	vs_top=sup;
	goto T461;
	goto T459;
T459:;
	V141= Cnil;
	goto T460;
T460:;
	V142= Cnil;
	goto T461;
T461:;
	base[1]= make_cons((V140),(V141));
	base[2]= (V142);
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T450;
T450:;
	if(!(type_of((V140))==t_cons)){
	goto T465;}
	if(!((car((V140)))==(VV[21]))){
	goto T465;}
	{object V143;
	object V144;
	base[1]= cdr((V139));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk60)();
	if(vs_base>=vs_top){vs_top=sup;goto T471;}
	V143= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T472;}
	V144= vs_base[0];
	vs_top=sup;
	goto T473;
	goto T471;
T471:;
	V143= Cnil;
	goto T472;
T472:;
	V144= Cnil;
	goto T473;
T473:;
	base[1]= make_cons((V140),(V143));
	base[2]= (V144);
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T465;
T465:;
	base[1]= Cnil;
	base[2]= make_cons((V140),cdr((V139)));
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
static void LnkT60(){ call_or_link(VV[60],(void **)(void *)&Lnk60);} /* FIND-DECLARATIONS */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],(void **)(void *)&LnkLI59,2,first,ap);va_end(ap);return V1;} /* DM-NTH */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,2,first,ap);va_end(ap);return V1;} /* DM-V */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,1,first,ap);va_end(ap);return V1;} /* DM-BAD-KEY */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,2,first,ap);va_end(ap);return V1;} /* DM-NTH-CDR */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[55],(void **)(void *)&LnkLI55,3,first,ap);va_end(ap);return V1;} /* DM-VL */
static void LnkT54(){ call_or_link(VV[54],(void **)(void *)&Lnk54);} /* GET-&ENVIRONMENT */
static void LnkT53(){ call_or_link(VV[53],(void **)(void *)&Lnk53);} /* FIND-DOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

