
#include "cmpinclude.h"
#include "defmacro.h"
init_defmacro(){do_init(VV);}
/*	function definition for GET-&ENVIRONMENT	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{register object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
TTL:;
	{object V2;
	V2= Cnil;
	{register object V3;
	if(type_of((V1))==t_cons||((V1))==Cnil){
	goto T3;}
	V3= Cnil;
	goto T2;
T3:;
	{register object V4;
	V4= (V1);
T6:;
	if(type_of((V4))==t_cons){
	goto T7;}
	V3= Cnil;
	goto T2;
T7:;
	if(!((VV[0])==(car((V4))))){
	goto T11;}
	V3= (V4);
	goto T2;
T11:;
	V4= cdr((V4));
	goto T6;}
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
T17:;
	base[1]= (V1);
	base[2]= (V2);
	vs_top=(vs_base=base+1)+2;
	return;}}
	}
}
/*	local entry for function DEFMACRO*	*/

static object LI2(V9,V10,V11)

object V9;register object V10;register object V11;
{	 VMB2 VMS2 VMV2
	bds_check;
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
T37:;
	if(!(type_of((V10))==t_symbol)){
	goto T40;}
	V10= list(2,VV[4],(V10));
	goto T34;
T40:;
	base[3]= VV[5];
	base[4]= (V10);
	vs_top=(vs_base=base+3)+2;
	Lerror();
	vs_top=sup;}
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
T51:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V14= vs_base[0];
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
T64:;
	(VV[1]->s.s_dbind)= list(3,VV[7],(V16),(V14));
	V15= (*(LnkLI55))((V10),(V14),Ct);
	{register object V19;
	register object V20;
	V19= (VV[2]->s.s_dbind);
	V20= car((V19));
T74:;
	if(!(endp((V19)))){
	goto T75;}
	goto T70;
T75:;
	V21= list(3,VV[9],car((V20)),VV[10]);
	V22= list(3,VV[12],car((V20)),VV[13]);
	V23= make_cons(/* INLINE-ARGS */V22,Cnil);
	V24= list(3,VV[8],/* INLINE-ARGS */V21,list(4,VV[11],/* INLINE-ARGS */V23,VV[14],list(3,VV[8],list(3,VV[15],VV[16],list(2,VV[17],cdr((V20)))),VV[18])));
	V11= make_cons(/* INLINE-ARGS */V24,(V11));
	V19= cdr((V19));
	V20= car((V19));
	goto T74;}
T70:;
	{register object V25;
	register object V26;
	V25= (VV[3]->s.s_dbind);
	V26= car((V25));
T90:;
	if(!(endp((V25)))){
	goto T91;}
	goto T86;
T91:;
	V27= list(3,VV[8],list(2,VV[19],(*(LnkLI56))(cdr((V26)),car((V26)))),VV[20]);
	V11= make_cons(/* INLINE-ARGS */V27,(V11));
	V25= cdr((V25));
	V26= car((V25));
	goto T90;}
T86:;
	if(((V17))!=Cnil){
	goto T102;}
	V28= list(2,VV[21],list(2,VV[22],(V16)));
	V11= make_cons(/* INLINE-ARGS */V28,(V11));
T102:;
	V29= reverse((VV[1]->s.s_dbind));
	{object V30 = list(3,(V12),(V15),listA(4,VV[23],(V9),/* INLINE-ARGS */V29,append((V13),(V11))));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V30)}}
}
/*	local entry for function DM-VL	*/

static object LI3(V34,V35,V36)

register object V34;register object V35;object V36;
{	 VMB3 VMS3 VMV3
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
	goto T108;}
	V46= small_fixnum(1);
	goto T106;
T108:;
	V46= small_fixnum(0);
T106:;
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
T111:;
	if(type_of((V34))==t_cons){
	goto T112;}
	if(((V34))==Cnil){
	goto T115;}
	if(((V38))==Cnil){
	goto T118;}
	(void)((*(LnkLI57))(VV[4]));
T118:;
	V48= list(2,(V34),(*(LnkLI56))((V46),(V35)));
	setq(VV[1],make_cons(/* INLINE-ARGS */V48,symbol_value(VV[1])));
	V45= Ct;
T115:;
	if(((V42))==Cnil){
	goto T124;}
	if(((V43))!=Cnil){
	goto T124;}
	V49= make_cons((V42),(V44));
	setq(VV[2],make_cons(/* INLINE-ARGS */V49,symbol_value(VV[2])));
T124:;
	if(((V45))!=Cnil){
	goto T130;}
	V50= make_cons((V35),(V46));
	setq(VV[3],make_cons(/* INLINE-ARGS */V50,symbol_value(VV[3])));
T130:;
	{object V51 = (V47);
	VMR3(V51)}
T112:;
	{register object V52;
	V52= car((V34));
	if(!(((V52))==(VV[24]))){
	goto T138;}
	if(((V37))==Cnil){
	goto T140;}
	(void)((*(LnkLI57))(VV[24]));
T140:;
	V37= Ct;
	{object V53;
	V53= car((V34));
	V34= cdr((V34));
	goto T135;}
T138:;
	if(((V52))==(VV[4])){
	goto T148;}
	if(!(((V52))==(VV[25]))){
	goto T149;}
T148:;
	if(((V38))==Cnil){
	goto T153;}
	(void)((*(LnkLI57))((V52)));
T153:;
	V54= cadr((V34));
	V55= (*(LnkLI56))((V46),(V35));
	(void)((*(LnkLI58))(/* INLINE-ARGS */V54,/* INLINE-ARGS */V55));
	V38= Ct;
	V37= Ct;
	V45= Ct;
	V34= cddr((V34));
	if(!(((V52))==(VV[25]))){
	goto T135;}
	if(((V36))==Cnil){
	goto T169;}
	V47= one_minus((V46));
	goto T167;
T169:;
	V47= (V46);
T167:;
	goto T135;
T149:;
	if(!(((V52))==(VV[26]))){
	goto T172;}
	if(((V39))==Cnil){
	goto T174;}
	(void)((*(LnkLI57))(VV[26]));
T174:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V42= vs_base[0];
	V56= list(2,(V42),(*(LnkLI56))((V46),(V35)));
	setq(VV[1],make_cons(/* INLINE-ARGS */V56,symbol_value(VV[1])));
	V39= Ct;
	V38= Ct;
	V37= Ct;
	V45= Ct;
	{object V57;
	V57= car((V34));
	V34= cdr((V34));
	goto T135;}
T172:;
	if(!(((V52))==(VV[27]))){
	goto T193;}
	if(((V39))==Cnil){
	goto T196;}
	if(((V40))==Cnil){
	goto T195;}
T196:;
	(void)((*(LnkLI57))(VV[27]));
T195:;
	V40= Ct;
	V43= Ct;
	{object V58;
	V58= car((V34));
	V34= cdr((V34));
	goto T135;}
T193:;
	if(!(((V52))==(VV[7]))){
	goto T208;}
	if(((V41))==Cnil){
	goto T210;}
	(void)((*(LnkLI57))(VV[7]));
T210:;
	V41= Ct;
	V40= Ct;
	V39= Ct;
	V38= Ct;
	V37= Ct;
	{object V59;
	V59= car((V34));
	V34= cdr((V34));
	goto T135;}
T208:;
	if(((V41))==Cnil){
	goto T227;}
	{object V60;
	object V61;
	V60= Cnil;
	V61= Cnil;
	if(!(type_of((V52))==t_symbol)){
	goto T232;}
	V60= (V52);
	goto T230;
T232:;
	V60= car((V52));
	if(endp(cdr((V52)))){
	goto T230;}
	V61= cadr((V52));
T230:;
	(void)((*(LnkLI58))((V60),(V61)));}
	{object V62;
	V62= car((V34));
	V34= cdr((V34));
	goto T135;}
T227:;
	if(((V39))==Cnil){
	goto T244;}
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
	goto T250;}
	V64= (V52);
	base[0]= coerce_to_string((V52));
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V65= vs_base[0];
	goto T248;
T250:;
	if(!(type_of(car((V52)))==t_symbol)){
	goto T259;}
	V64= car((V52));
	base[0]= coerce_to_string(car((V52)));
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V65= vs_base[0];
	goto T257;
T259:;
	V64= cadar((V52));
	V65= caar((V52));
T257:;
	if(endp(cdr((V52)))){
	goto T248;}
	V66= cadr((V52));
	if(endp(cddr((V52)))){
	goto T248;}
	V67= caddr((V52));
T248:;
	V68= list(4,VV[9],(V42),(V65),VV[29]);
	(void)((*(LnkLI58))((V63),/* INLINE-ARGS */V68));
	V69= list(4,VV[30],list(3,VV[31],(V63),VV[32]),(V66),(V63));
	(void)((*(LnkLI58))((V64),/* INLINE-ARGS */V69));
	if(((V67))==Cnil){
	goto T278;}
	V70= list(2,VV[33],list(3,VV[31],(V63),VV[34]));
	(void)((*(LnkLI58))((V67),/* INLINE-ARGS */V70));
T278:;
	V44= make_cons((V65),(V44));}
	{object V71;
	V71= car((V34));
	V34= cdr((V34));
	goto T135;}
T244:;
	if(((V37))==Cnil){
	goto T286;}
	{object V72;
	object V73;
	object V74;
	V72= Cnil;
	V73= Cnil;
	V74= Cnil;
	if(!(type_of((V52))==t_symbol)){
	goto T291;}
	V72= (V52);
	goto T289;
T291:;
	V72= car((V52));
	if(endp(cdr((V52)))){
	goto T289;}
	V73= cadr((V52));
	if(endp(cddr((V52)))){
	goto T289;}
	V74= caddr((V52));
T289:;
	V75= (*(LnkLI56))((V46),(V35));
	V76= (*(LnkLI59))((V46),(V35));
	V77= list(4,VV[30],/* INLINE-ARGS */V75,/* INLINE-ARGS */V76,(V73));
	(void)((*(LnkLI58))((V72),/* INLINE-ARGS */V77));
	if(((V74))==Cnil){
	goto T288;}
	V78= list(2,VV[33],list(2,VV[35],(*(LnkLI56))((V46),(V35))));
	(void)((*(LnkLI58))((V74),/* INLINE-ARGS */V78));}
T288:;
	V46= number_plus((V46),small_fixnum(1));
	{object V79;
	V79= car((V34));
	V34= cdr((V34));
	goto T135;}
T286:;
	V80= (*(LnkLI56))((V46),(V35));
	V81= (*(LnkLI59))((V46),(V35));
	V82= list(4,VV[30],/* INLINE-ARGS */V80,/* INLINE-ARGS */V81,VV[36]);
	(void)((*(LnkLI58))((V52),/* INLINE-ARGS */V82));
	V46= number_plus((V46),small_fixnum(1));
	{object V83;
	V83= car((V34));
	V34= cdr((V34));}}
T135:;
	goto T111;}
}
/*	local entry for function DM-V	*/

static object LI4(V86,V87)

register object V86;register object V87;
{	 VMB4 VMS4 VMV4
TTL:;
	if(!(type_of((V86))==t_symbol)){
	goto T320;}
	if(((V87))==Cnil){
	goto T325;}
	V88= list(2,(V86),(V87));
	goto T323;
T325:;
	V88= (V86);
T323:;
	setq(VV[1],make_cons(V88,symbol_value(VV[1])));
	{object V89 = symbol_value(VV[1]);
	VMR4(V89)}
T320:;
	{object V90;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V90= vs_base[0];
	if(((V87))==Cnil){
	goto T332;}
	V91= list(2,(V90),(V87));
	goto T330;
T332:;
	V91= (V90);
T330:;
	setq(VV[1],make_cons(V91,symbol_value(VV[1])));
	{object V92 = (*(LnkLI55))((V86),(V90),Cnil);
	VMR4(V92)}}
}
/*	local entry for function DM-NTH	*/

static object LI5(V95,V96)

object V95;register object V96;
{	 VMB5 VMS5 VMV5
TTL:;
	{object V97;
	object V98;
	base[0]= (V95);
	base[1]= small_fixnum(4);
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	if(vs_base>=vs_top){vs_top=sup;goto T337;}
	V97= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T338;}
	V98= vs_base[0];
	vs_top=sup;
	goto T339;
T337:;
	V97= Cnil;
T338:;
	V98= Cnil;
T339:;
	{register object V99;
	register object V100;
	V99= (V97);
	V100= small_fixnum(0);
T344:;
	if(!(number_compare((V100),(V99))>=0)){
	goto T345;}
	goto T340;
T345:;
	V96= list(2,VV[37],(V96));
	V100= one_plus((V100));
	goto T344;}
T340:;
	{object V101= (V98);
	if(!eql(V101,VV[38]))goto T354;
	{object V102 = list(2,VV[39],(V96));
	VMR5(V102)}
T354:;
	if(!eql(V101,VV[40]))goto T355;
	{object V103 = list(2,VV[41],(V96));
	VMR5(V103)}
T355:;
	if(!eql(V101,VV[42]))goto T356;
	{object V104 = list(2,VV[43],(V96));
	VMR5(V104)}
T356:;
	if(!eql(V101,VV[44]))goto T357;
	{object V105 = list(2,VV[45],(V96));
	VMR5(V105)}
T357:;
	{object V106 = Cnil;
	VMR5(V106)}}}
}
/*	local entry for function DM-NTH-CDR	*/

static object LI6(V109,V110)

object V109;register object V110;
{	 VMB6 VMS6 VMV6
TTL:;
	{object V111;
	object V112;
	base[0]= (V109);
	base[1]= small_fixnum(4);
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	if(vs_base>=vs_top){vs_top=sup;goto T361;}
	V111= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T362;}
	V112= vs_base[0];
	vs_top=sup;
	goto T363;
T361:;
	V111= Cnil;
T362:;
	V112= Cnil;
T363:;
	{register object V113;
	register object V114;
	V113= (V111);
	V114= small_fixnum(0);
T368:;
	if(!(number_compare((V114),(V113))>=0)){
	goto T369;}
	goto T364;
T369:;
	V110= list(2,VV[37],(V110));
	V114= one_plus((V114));
	goto T368;}
T364:;
	{object V115= (V112);
	if(!eql(V115,VV[38]))goto T378;
	{object V116 = (V110);
	VMR6(V116)}
T378:;
	if(!eql(V115,VV[40]))goto T379;
	{object V117 = list(2,VV[46],(V110));
	VMR6(V117)}
T379:;
	if(!eql(V115,VV[42]))goto T380;
	{object V118 = list(2,VV[47],(V110));
	VMR6(V118)}
T380:;
	if(!eql(V115,VV[44]))goto T381;
	{object V119 = list(2,VV[48],(V110));
	VMR6(V119)}
T381:;
	{object V120 = Cnil;
	VMR6(V120)}}}
}
/*	local entry for function DM-BAD-KEY	*/

static object LI7(V122)

object V122;
{	 VMB7 VMS7 VMV7
TTL:;
	base[0]= VV[49];
	base[1]= (V122);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V123 = vs_base[0];
	VMR7(V123)}
}
/*	local entry for function DM-TOO-FEW-ARGUMENTS	*/

static object LI8()

{	 VMB8 VMS8 VMV8
TTL:;
	base[0]= VV[50];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V124 = vs_base[0];
	VMR8(V124)}
}
/*	local entry for function DM-TOO-MANY-ARGUMENTS	*/

static object LI9()

{	 VMB9 VMS9 VMV9
TTL:;
	base[0]= VV[51];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V125 = vs_base[0];
	VMR9(V125)}
}
/*	local entry for function DM-KEY-NOT-ALLOWED	*/

static object LI10(V127)

object V127;
{	 VMB10 VMS10 VMV10
TTL:;
	base[0]= VV[52];
	base[1]= (V127);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V128 = vs_base[0];
	VMR10(V128)}
}
/*	function definition for FIND-DOC	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{register object V129;
	object V130;
	check_arg(2);
	V129=(base[0]);
	V130=(base[1]);
	vs_top=sup;
TTL:;
	if(!(endp((V129)))){
	goto T389;}
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	return;
T389:;
	{register object V131;
	base[2]= car((V129));
	vs_top=(vs_base=base+2)+1;
	Lmacroexpand();
	vs_top=sup;
	V131= vs_base[0];
	if(!(type_of((V131))==t_string)){
	goto T397;}
	if(endp(cdr((V129)))){
	goto T399;}
	if(((V130))==Cnil){
	goto T400;}
T399:;
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= make_cons((V131),cdr((V129)));
	vs_top=(vs_base=base+2)+3;
	return;
T400:;
	{object V132;
	object V133;
	object V134;
	base[2]= cdr((V129));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk53)();
	if(vs_base>=vs_top){vs_top=sup;goto T410;}
	V132= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T411;}
	V133= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T412;}
	V134= vs_base[0];
	vs_top=sup;
	goto T413;
T410:;
	V132= Cnil;
T411:;
	V133= Cnil;
T412:;
	V134= Cnil;
T413:;
	base[2]= (V131);
	base[3]= (V133);
	base[4]= (V134);
	vs_top=(vs_base=base+2)+3;
	return;}
T397:;
	if(!(type_of((V131))==t_cons)){
	goto T418;}
	if(!((car((V131)))==(VV[21]))){
	goto T418;}
	{object V135;
	object V136;
	object V137;
	base[2]= cdr((V129));
	base[3]= (V130);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk53)();
	if(vs_base>=vs_top){vs_top=sup;goto T425;}
	V135= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T426;}
	V136= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T427;}
	V137= vs_base[0];
	vs_top=sup;
	goto T428;
T425:;
	V135= Cnil;
T426:;
	V136= Cnil;
T427:;
	V137= Cnil;
T428:;
	base[2]= (V135);
	base[3]= make_cons((V131),(V136));
	base[4]= (V137);
	vs_top=(vs_base=base+2)+3;
	return;}
T418:;
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= make_cons((V131),cdr((V129)));
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	function definition for FIND-DECLARATIONS	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{register object V138;
	check_arg(1);
	V138=(base[0]);
	vs_top=sup;
TTL:;
	if(!(endp((V138)))){
	goto T436;}
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
T436:;
	{register object V139;
	base[1]= car((V138));
	vs_top=(vs_base=base+1)+1;
	Lmacroexpand();
	vs_top=sup;
	V139= vs_base[0];
	if(!(type_of((V139))==t_string)){
	goto T443;}
	if(!(endp(cdr((V138))))){
	goto T446;}
	base[1]= Cnil;
	base[2]= make_cons((V139),Cnil);
	vs_top=(vs_base=base+1)+2;
	return;
T446:;
	{object V140;
	object V141;
	base[1]= cdr((V138));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk60)();
	if(vs_base>=vs_top){vs_top=sup;goto T452;}
	V140= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T453;}
	V141= vs_base[0];
	vs_top=sup;
	goto T454;
T452:;
	V140= Cnil;
T453:;
	V141= Cnil;
T454:;
	base[1]= make_cons((V139),(V140));
	base[2]= (V141);
	vs_top=(vs_base=base+1)+2;
	return;}
T443:;
	if(!(type_of((V139))==t_cons)){
	goto T458;}
	if(!((car((V139)))==(VV[21]))){
	goto T458;}
	{object V142;
	object V143;
	base[1]= cdr((V138));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk60)();
	if(vs_base>=vs_top){vs_top=sup;goto T464;}
	V142= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V143= vs_base[0];
	vs_top=sup;
	goto T466;
T464:;
	V142= Cnil;
T465:;
	V143= Cnil;
T466:;
	base[1]= make_cons((V139),(V142));
	base[2]= (V143);
	vs_top=(vs_base=base+1)+2;
	return;}
T458:;
	base[1]= Cnil;
	base[2]= make_cons((V139),cdr((V138)));
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
static LnkT60(){ call_or_link(VV[60],&Lnk60);} /* FIND-DECLARATIONS */
static object  LnkTLI59(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[59],&LnkLI59,2,ap);} /* DM-NTH */
static object  LnkTLI58(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[58],&LnkLI58,2,ap);} /* DM-V */
static object  LnkTLI57(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[57],&LnkLI57,1,ap);} /* DM-BAD-KEY */
static object  LnkTLI56(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[56],&LnkLI56,2,ap);} /* DM-NTH-CDR */
static object  LnkTLI55(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[55],&LnkLI55,3,ap);} /* DM-VL */
static LnkT54(){ call_or_link(VV[54],&Lnk54);} /* GET-&ENVIRONMENT */
static LnkT53(){ call_or_link(VV[53],&Lnk53);} /* FIND-DOC */
