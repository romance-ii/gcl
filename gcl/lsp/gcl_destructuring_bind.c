
#include "cmpinclude.h"
#include "gcl_destructuring_bind.h"
void init_gcl_destructuring_bind(){do_init(VV);}
/*	function definition for DO-ARG-COUNT-ERROR	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	check_arg(6);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	V5=(base[4]);
	V6=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[6]= VV[0];
	base[7]= (V1);
	base[8]= (V2);
	base[9]= (V3);
	base[10]= (V4);
	base[11]= (V5);
	base[12]= (V6);
	vs_top=(vs_base=base+6)+7;
	Lerror();
	return;
	}
}
/*	function definition for PARSE-DEFMACRO	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	bds_check;
	{object V7;
	object V8;
	object V9;
	object V10;
	object V11;
	object V12;
	object V13;
	object V14;
	object V15;
	if(vs_top-vs_base<5) too_few_arguments();
	parse_key(vs_base+5,FALSE,FALSE,5,VV[83],VV[84],VV[85],VV[86],VV[87]);
	V7=(base[0]);
	V8=(base[1]);
	V9=(base[2]);
	V10=(base[3]);
	V11=(base[4]);
	vs_top=sup;
	V12=(base[5]);
	if(base[11]==Cnil){
	V13= Ct;
	}else{
	V13=(base[6]);}
	V14=(base[7]);
	bds_bind(VV[1],base[8]);
	if(base[14]==Cnil){
	V15= VV[2];
	}else{
	V15=(base[9]);}
	{object V16;
	object V17;
	object V18;
	base[15]= (V9);
	base[16]= Cnil;
	base[17]= (V13);
	vs_top=(vs_base=base+15)+3;
	(void) (*Lnk30)();
	if(vs_base>=vs_top){vs_top=sup;goto T14;}
	V16= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T15;}
	V17= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T16;}
	V18= vs_base[0];
	vs_top=sup;
	goto T17;
	goto T14;
T14:;
	V16= Cnil;
	goto T15;
T15:;
	V17= Cnil;
	goto T16;
T16:;
	V18= Cnil;
	goto T17;
T17:;
	bds_bind(VV[3],Cnil);
	bds_bind(VV[4],Cnil);
	bds_bind(VV[5],Cnil);
	bds_bind(VV[6],Cnil);
	{object V19;
	object V20;
	object V21;
	base[19]= (V7);
	base[20]= (V8);
	base[21]= (V10);
	base[22]= (V11);
	base[23]= (V15);
	base[24]= (((V12))==Cnil?Ct:Cnil);
	base[25]= Cnil;
	base[26]= (V14);
	vs_top=(vs_base=base+19)+8;
	(void) (*Lnk88)();
	if(vs_base>=vs_top){vs_top=sup;goto T27;}
	V19= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T28;}
	V20= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T29;}
	V21= vs_base[0];
	vs_top=sup;
	goto T30;
	goto T27;
T27:;
	V19= Cnil;
	goto T28;
T28:;
	V20= Cnil;
	goto T29;
T29:;
	V21= Cnil;
	goto T30;
T30:;
	V22= nreverse((VV[5]->s.s_dbind));
	if(((VV[6]->s.s_dbind))==Cnil){
	goto T35;}
	V24= list(2,VV[8],make_cons(VV[9],(VV[6]->s.s_dbind)));
	base[20]= make_cons(/* INLINE-ARGS */V24,Cnil);
	goto T33;
	goto T35;
T35:;
	base[20]= Cnil;
	goto T33;
T33:;
	base[21]= (VV[3]->s.s_dbind);
	V25= nreverse((VV[4]->s.s_dbind));
	V26= listA(3,VV[7],/* INLINE-ARGS */V25,append((V17),(V16)));
	base[22]= make_cons(/* INLINE-ARGS */V26,Cnil);
	vs_top=(vs_base=base+20)+3;
	Lappend();
	vs_top=sup;
	V23= vs_base[0];
	base[19]= listA(3,VV[7],/* INLINE-ARGS */V22,V23);
	if(((V14))==Cnil){
	goto T41;}
	if(((V19))!=Cnil){
	goto T41;}
	V27= list(2,VV[8],list(2,VV[10],(V14)));
	base[20]= make_cons(/* INLINE-ARGS */V27,Cnil);
	goto T39;
	goto T41;
T41:;
	base[20]= Cnil;
	goto T39;
T39:;
	base[21]= (V18);
	base[22]= (V20);
	base[23]= (V21);
	vs_top=(vs_base=base+19)+5;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for MAKE-KEYWORD	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V28;
	check_arg(1);
	V28=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= symbol_name((V28));
	base[3]= VV[11];
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	Lintern();
	return;
	}
}
/*	function definition for DEFMACRO-ERROR	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V29;
	object V30;
	object V31;
	check_arg(3);
	V29=(base[0]);
	V30=(base[1]);
	V31=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[12];
	base[4]= VV[13];
	base[5]= (V29);
	base[6]= (V31);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk89)();
	return;
	}
}
/*	function definition for VERIFY-KEYWORDS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{register object V32;
	register object V33;
	object V34;
	check_arg(3);
	V32=(base[0]);
	V33=(base[1]);
	V34=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V35;
	register object V36;
	register object V37;
	V35= Cnil;
	V36= Cnil;
	V37= (V32);
	goto T56;
T56:;
	if(((V37))!=Cnil){
	goto T57;}
	if(((V36))==Cnil){
	goto T61;}
	if(((V34))!=Cnil){
	goto T61;}
	base[3]= VV[14];
	base[4]= (V32);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk49)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T61;}
	base[3]= VV[15];
	base[4]= list(2,(V36),(V33));
	vs_top=(vs_base=base+3)+2;
	return;
	goto T61;
T61:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T57;
T57:;
	if(!(type_of((V37))==t_cons)){
	goto T75;}
	{object V38= cdr((V37));
	if(type_of(V38)==t_cons||(V38)==Cnil){
	goto T76;}}
	goto T75;
T75:;
	base[3]= VV[16];
	base[4]= (V32);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T76;
T76:;
	if((cdr((V37)))!=Cnil){
	goto T83;}
	base[3]= VV[17];
	base[4]= (V32);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T83;
T83:;
	if((car((V37)))==(VV[14])){
	goto T87;}
	{register object x= car((V37)),V39= (V33);
	while(!endp(V39))
	if(eql(x,V39->c.c_car)){
	goto T91;
	}else V39=V39->c.c_cdr;
	goto T88;}
	goto T91;
T91:;
	goto T87;
T87:;
	{register object V40;
	V40= car((V37));
	V35= make_cons((V40),(V35));
	goto T74;}
	goto T88;
T88:;
	V36= car((V37));
	goto T74;
T74:;
	V37= cddr((V37));
	goto T56;}
	}
}
/*	function definition for LOOKUP-KEYWORD	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{register object V41;
	object V42;
	check_arg(2);
	V41=(base[0]);
	V42=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V43;
	V43= (V42);
	goto T99;
T99:;
	if(!(endp_prop((V43)))){
	goto T100;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T100;
T100:;
	if(!(((V41))==(car((V43))))){
	goto T104;}
	base[2]= cadr((V43));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T104;
T104:;
	V43= cddr((V43));
	goto T99;}
	}
}
/*	function definition for KEYWORD-SUPPLIED-P	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{register object V44;
	object V45;
	check_arg(2);
	V44=(base[0]);
	V45=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V46;
	V46= (V45);
	goto T111;
T111:;
	if(!(endp_prop((V46)))){
	goto T112;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T112;
T112:;
	if(!(((V44))==(car((V46))))){
	goto T116;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T116;
T116:;
	V46= cddr((V46));
	goto T111;}
	}
}
/*	function definition for PARSE-DEFMACRO-LAMBDA-LIST	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V47;
	object V48;
	register object V49;
	register object V50;
	object V51;
	object V52;
	object V53;
	object V54;
	if(vs_top-vs_base<5) too_few_arguments();
	if(vs_top-vs_base>8) too_many_arguments();
	V47=(base[0]);
	V48=(base[1]);
	V49=(base[2]);
	V50=(base[3]);
	V51=(base[4]);
	vs_base=vs_base+5;
	if(vs_base>=vs_top){vs_top=sup;goto T122;}
	V52=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T123;}
	V53=(base[6]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T124;}
	V54=(base[7]);
	vs_top=sup;
	goto T125;
	goto T122;
T122:;
	V52= Cnil;
	goto T123;
T123:;
	V53= Cnil;
	goto T124;
T124:;
	V54= Cnil;
	goto T125;
T125:;
	{register object V55;
	object V56;
	register object V57;
	object V58;
	object V59;
	object V60;
	object V61;
	object V62;
	object V63;
	if(((V52))==Cnil){
	goto T131;}
	V55= list(2,VV[18],(V48));
	goto T129;
	goto T131;
T131:;
	V55= (V48);
	goto T129;
T129:;
	V56= VV[19];
	V57= small_fixnum(0);
	V58= small_fixnum(0);
	V59= Cnil;
	V60= Cnil;
	V61= Cnil;
	V62= Cnil;
	V63= Cnil;
	{object V64;
	V64= (V47);
	goto T138;
T138:;
	if(!(type_of((V64))!=t_cons)){
	goto T139;}
	goto T133;
	goto T139;
T139:;
	if(!((car((V64)))==(VV[20]))){
	goto T143;}
	goto T136;
	goto T143;
T143:;
	V64= cdr((V64));
	goto T138;}
	goto T136;
T136:;
	if((car((V47)))==(VV[20])){
	goto T133;}
	base[8]= VV[21];
	base[9]= (V50);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	goto T133;
T133:;
	{register object V65;
	V65= (V47);
	goto T154;
T154:;
	if(!(type_of((V65))!=t_cons)){
	goto T155;}
	if(((V65))!=Cnil){
	goto T159;}
	goto T152;
	goto T159;
T159:;
	base[8]= (V65);
	base[9]= (V55);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	V61= Ct;
	goto T152;
	goto T155;
T155:;
	{register object V66;
	V66= car((V65));
	if(!(((V66))==(VV[20]))){
	goto T170;}
	if((cdr((V65)))==Cnil){
	goto T173;}
	if(!(type_of(cadr((V65)))==t_symbol)){
	goto T173;}
	V65= cdr((V65));
	base[8]= car((V65));
	base[9]= (V48);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T167;
	goto T173;
T173:;
	base[8]= VV[22];
	base[9]= (V50);
	base[10]= (V49);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T167;
	goto T170;
T170:;
	if(!(((V66))==(VV[23]))){
	goto T186;}
	if(((V53))==Cnil){
	goto T190;}
	base[8]= VV[24];
	base[9]= (V50);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	goto T188;
	goto T190;
T190:;
	if(((V52))!=Cnil){
	goto T188;}
	base[8]= VV[25];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
	goto T188;
T188:;
	if((cdr((V65)))==Cnil){
	goto T198;}
	if(!(type_of(cadr((V65)))==t_symbol)){
	goto T198;}
	V65= cdr((V65));
	base[8]= car((V65));
	base[9]= (V54);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	V63= Ct;
	goto T167;
	goto T198;
T198:;
	base[8]= VV[26];
	base[9]= (V50);
	base[10]= (V49);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T167;
	goto T186;
T186:;
	if(((V66))==(VV[27])){
	goto T212;}
	if(!(((V66))==(VV[28]))){
	goto T213;}
	goto T212;
T212:;
	if((cdr((V65)))==Cnil){
	goto T218;}
	if(!(type_of(cadr((V65)))==t_symbol)){
	goto T218;}
	V65= cdr((V65));
	V61= Ct;
	base[8]= car((V65));
	base[9]= (V55);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T167;
	goto T218;
T218:;
	if((cdr((V65)))==Cnil){
	goto T230;}
	if(!(type_of(cadr((V65)))==t_cons)){
	goto T230;}
	if(!(type_of(caadr((V65)))==t_symbol)){
	goto T230;}
	V65= cdr((V65));
	V61= Ct;
	{object V67;
	object V68;
	object V69;
	object V70;
	V67= caar((V65));
	V68= cadar((V65));
	V69= caddar((V65));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V70= vs_base[0];
	base[8]= (V70);
	base[9]= list(2,VV[29],list(4,VV[30],(V55),(V54),(((((V69))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil)));
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	V63= Ct;
	if(((V67))==Cnil){
	goto T250;}
	base[8]= (V67);
	base[9]= list(2,VV[31],(V70));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T250;
T250:;
	if(((V68))==Cnil){
	goto T256;}
	base[8]= (V68);
	base[9]= list(2,VV[32],(V70));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T256;
T256:;
	if(((V69))==Cnil){
	goto T167;}
	base[8]= (V69);
	base[9]= list(2,VV[33],(V70));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T167;}
	goto T230;
T230:;
	base[8]= symbol_name((V66));
	base[9]= (V50);
	base[10]= (V49);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T167;
	goto T213;
T213:;
	if(!(((V66))==(VV[34]))){
	goto T271;}
	V56= VV[35];
	goto T167;
	goto T271;
T271:;
	if(!(((V66))==(VV[36]))){
	goto T275;}
	V56= VV[37];
	base[8]= VV[38];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V60= vs_base[0];
	setq(VV[6],make_cons(V60,symbol_value(VV[6])));
	V61= Ct;
	base[8]= (V60);
	base[9]= (V55);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T167;
	goto T275;
T275:;
	if(!(((V66))==(VV[39]))){
	goto T290;}
	V62= Ct;
	goto T167;
	goto T290;
T290:;
	if(!(((V66))==(VV[40]))){
	goto T294;}
	V56= VV[41];
	goto T167;
	goto T294;
T294:;
	if(!(type_of((V66))==t_cons||((V66))==Cnil)){
	goto T298;}
	{object V72= (V56);
	if((V72!= VV[19]))goto T300;
	{object V73;
	base[8]= VV[42];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V73= vs_base[0];
	base[8]= (V73);
	base[9]= list(2,VV[31],(V55));
	base[10]= (V66);
	base[11]= (V49);
	base[12]= (V50);
	base[13]= (V51);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk92)();
	vs_top=sup;
	base[8]= (V66);
	base[9]= (V73);
	base[10]= (V49);
	base[11]= (V50);
	base[12]= (V51);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk88)();
	vs_top=sup;}
	V55= list(2,VV[18],(V55));
	V58= number_plus((V58),small_fixnum(1));
	V57= number_plus((V57),small_fixnum(1));
	goto T167;
	goto T300;
T300:;
	if((V72!= VV[35]))goto T321;
	if(!(((long)length((V66)))>(3))){
	goto T322;}
	base[8]= VV[43];
	base[9]= VV[44];
	base[10]= (V66);
	vs_top=(vs_base=base+8)+3;
	Lcerror();
	vs_top=sup;
	goto T322;
T322:;
	base[8]= car((V66));
	base[9]= cadr((V66));
	base[10]= caddr((V66));
	base[11]= list(2,VV[45],list(2,VV[46],(V55)));
	base[12]= list(2,VV[31],(V55));
	base[13]= (V49);
	base[14]= (V50);
	base[15]= (V51);
	vs_top=(vs_base=base+8)+8;
	(void) (*Lnk93)();
	vs_top=sup;
	V55= list(2,VV[18],(V55));
	V57= number_plus((V57),small_fixnum(1));
	goto T167;
	goto T321;
T321:;
	if((V72!= VV[37]))goto T340;
	{object V74;
	object V75;
	object V76;
	object V77;
	V74= (type_of(car((V66)))==t_cons?Ct:Cnil);
	if(((V74))==Cnil){
	goto T344;}
	V75= cadar((V66));
	goto T342;
	goto T344;
T344:;
	V75= car((V66));
	goto T342;
T342:;
	if(((V74))==Cnil){
	goto T348;}
	V76= caar((V66));
	goto T346;
	goto T348;
T348:;
	base[12]= (V75);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	V76= vs_base[0];
	goto T346;
T346:;
	V77= caddr((V66));
	base[12]= (V75);
	base[13]= cadr((V66));
	base[14]= (V77);
	base[15]= list(3,VV[47],list(2,VV[48],(V76)),(V60));
	base[16]= list(3,VV[49],list(2,VV[48],(V76)),(V60));
	base[17]= (V49);
	base[18]= (V50);
	base[19]= (V51);
	vs_top=(vs_base=base+12)+8;
	(void) (*Lnk93)();
	vs_top=sup;
	V59= make_cons(V76,(V59));
	goto T167;}
	goto T340;
T340:;
	if((V72!= VV[41]))goto T362;
	base[8]= car((V66));
	base[9]= cadr((V66));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T167;
	goto T362;
T362:;
	goto T167;}
	goto T298;
T298:;
	if(!(type_of((V66))==t_symbol)){
	goto T367;}
	{object V79= (V56);
	if((V79!= VV[19]))goto T369;
	V58= number_plus((V58),small_fixnum(1));
	V57= number_plus((V57),small_fixnum(1));
	base[8]= (V66);
	base[9]= list(2,VV[31],(V55));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	V55= list(2,VV[18],(V55));
	goto T167;
	goto T369;
T369:;
	if((V79!= VV[35]))goto T379;
	V57= number_plus((V57),small_fixnum(1));
	base[8]= (V66);
	base[9]= list(2,VV[31],(V55));
	base[10]= Cnil;
	base[11]= list(2,VV[45],list(2,VV[46],(V55)));
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk90)();
	vs_top=sup;
	V55= list(2,VV[18],(V55));
	goto T167;
	goto T379;
T379:;
	if((V79!= VV[37]))goto T388;
	{object V80;
	base[8]= (V66);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	V80= vs_base[0];
	base[8]= (V66);
	base[9]= list(3,VV[49],(V80),(V60));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	V59= make_cons(V80,(V59));
	goto T167;}
	goto T388;
T388:;
	if((V79!= VV[41]))goto T396;
	base[8]= (V66);
	base[9]= Cnil;
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T167;
	goto T396;
T396:;
	goto T167;}
	goto T367;
T367:;
	base[8]= VV[50];
	base[9]= (V66);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;}
	goto T167;
T167:;
	V65= cdr((V65));
	goto T154;}
	goto T152;
T152:;
	if(((V61))!=Cnil){
	goto T405;}
	{object V82;
	if(((V52))==Cnil){
	goto T411;}
	V83= list(2,VV[18],(V48));
	goto T409;
	goto T411;
T411:;
	V83= (V48);
	goto T409;
T409:;
	V84= list(2,VV[53],list(3,VV[54],VV[55],V83));
	if(((V61))!=Cnil){
	goto T415;}
	V85= make_cons((V57),Cnil);
	goto T413;
	goto T415;
T415:;
	V85= Cnil;
	goto T413;
T413:;
	V86= listA(4,VV[52],(V58),/* INLINE-ARGS */V84,V85);
	{object V88;
	if(((V52))==Cnil){
	goto T420;}
	V88= list(2,VV[18],(V48));
	goto T418;
	goto T420;
T420:;
	V88= (V48);
	goto T418;
T418:;
	if(!(((V51))==(VV[2]))){
	goto T423;}
	V89= list(2,VV[48],(V50));
	V90= list(2,VV[48],(V49));
	V91= list(2,VV[48],(V47));
	if(((V61))!=Cnil){
	goto T427;}
	V92= (V57);
	goto T425;
	goto T427;
T427:;
	V92= Cnil;
	goto T425;
T425:;
	V87= list(7,VV[56],/* INLINE-ARGS */V89,/* INLINE-ARGS */V90,(V88),/* INLINE-ARGS */V91,(V58),V92);
	goto T417;
	goto T423;
T423:;
	V93= list(2,VV[48],(V50));
	if(((V49))==Cnil){
	goto T431;}
	V94= list(2,VV[59],list(2,VV[48],(V49)));
	goto T429;
	goto T431;
T431:;
	V94= Cnil;
	goto T429;
T429:;
	V95= list(2,VV[48],(V47));
	if(((V61))!=Cnil){
	goto T435;}
	V96= list(2,VV[63],(V57));
	goto T433;
	goto T435;
T435:;
	V96= Cnil;
	goto T433;
T433:;
	V97= listA(7,VV[60],(V88),VV[61],/* INLINE-ARGS */V95,VV[62],(V58),V96);
	V87= listA(5,(V51),VV[57],VV[58],/* INLINE-ARGS */V93,append(V94,/* INLINE-ARGS */V97));}
	goto T417;
T417:;
	V82= list(3,VV[51],/* INLINE-ARGS */V86,V87);
	setq(VV[3],make_cons((V82),symbol_value(VV[3])));}
	goto T405;
T405:;
	if(((V59))==Cnil){
	goto T438;}
	{object V98;
	object V99;
	base[8]= VV[64];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V98= vs_base[0];
	base[8]= VV[65];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V99= vs_base[0];
	{object V100;
	V101= list(2,(V98),(V99));
	V102= list(2,VV[48],(V59));
	V103= list(4,VV[67],(V60),/* INLINE-ARGS */V102,list(2,VV[48],(V62)));
	V104= list(2,VV[48],(V50));
	if(((V49))==Cnil){
	goto T448;}
	V105= list(2,VV[59],list(2,VV[48],(V49)));
	goto T446;
	goto T448;
T448:;
	V105= Cnil;
	goto T446;
T446:;
	V106= list(4,VV[70],(V98),VV[71],(V99));
	V100= list(4,VV[66],/* INLINE-ARGS */V101,/* INLINE-ARGS */V103,list(3,VV[68],(V98),listA(5,(V51),VV[69],VV[58],/* INLINE-ARGS */V104,append(V105,/* INLINE-ARGS */V106))));
	setq(VV[3],make_cons((V100),symbol_value(VV[3])));}}
	goto T438;
T438:;
	base[8]= (V63);
	base[9]= (V58);
	if(((V61))!=Cnil){
	goto T455;}
	base[10]= (V57);
	goto T453;
	goto T455;
T455:;
	base[10]= Cnil;
	goto T453;
T453:;
	vs_top=(vs_base=base+8)+3;
	return;}
	}
}
/*	function definition for PUSH-SUB-LIST-BINDING	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V107;
	object V108;
	object V109;
	object V110;
	object V111;
	object V112;
	check_arg(6);
	V107=(base[0]);
	V108=(base[1]);
	V109=(base[2]);
	V110=(base[3]);
	V111=(base[4]);
	V112=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V113;
	base[6]= VV[72];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V113= vs_base[0];
	{object V114;
	V115= list(2,(V113),(V108));
	V116= make_cons(/* INLINE-ARGS */V115,Cnil);
	V117= list(2,VV[75],(V113));
	V118= list(2,VV[48],(V111));
	if(((V110))==Cnil){
	goto T462;}
	V119= list(2,VV[59],list(2,VV[48],(V110)));
	goto T460;
	goto T462;
T462:;
	V119= Cnil;
	goto T460;
T460:;
	V120= list(4,VV[77],(V113),VV[61],list(2,VV[48],(V109)));
	V114= list(2,(V107),list(3,VV[73],/* INLINE-ARGS */V116,list(4,VV[74],/* INLINE-ARGS */V117,(V113),listA(5,(V112),VV[76],VV[58],/* INLINE-ARGS */V118,append(V119,/* INLINE-ARGS */V120)))));
	setq(VV[5],make_cons((V114),symbol_value(VV[5])));
	base[7]= symbol_value(VV[5]);
	vs_top=(vs_base=base+7)+1;
	return;}}
	}
}
/*	function definition for PUSH-LET-BINDING	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V121;
	object V122;
	object V123;
	object V124;
	object V125;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V121=(base[0]);
	V122=(base[1]);
	V123=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V124=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T466;}
	V125=(base[4]);
	vs_top=sup;
	goto T467;
	goto T465;
T465:;
	V124= Cnil;
	goto T466;
T466:;
	V125= symbol_value(VV[1]);
	goto T467;
T467:;
	{object V126;
	if(((V124))==Cnil){
	goto T472;}
	V126= list(2,(V121),list(4,VV[74],(V124),(V122),(V125)));
	goto T470;
	goto T472;
T472:;
	V126= list(2,(V121),(V122));
	goto T470;
T470:;
	if(((V123))==Cnil){
	goto T475;}
	setq(VV[5],make_cons(V126,symbol_value(VV[5])));
	base[5]= symbol_value(VV[5]);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T475;
T475:;
	setq(VV[4],make_cons(V126,symbol_value(VV[4])));
	base[5]= symbol_value(VV[4]);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for PUSH-OPTIONAL-BINDING	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{register object V129;
	object V130;
	register object V131;
	object V132;
	object V133;
	object V134;
	object V135;
	object V136;
	check_arg(8);
	V129=(base[0]);
	V130=(base[1]);
	V131=(base[2]);
	V132=(base[3]);
	V133=(base[4]);
	V134=(base[5]);
	V135=(base[6]);
	V136=(base[7]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V131))!=Cnil){
	goto T479;}
	base[8]= VV[78];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V131= vs_base[0];
	goto T479;
T479:;
	base[8]= (V131);
	base[9]= (V132);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	if(!(type_of((V129))==t_cons)){
	goto T489;}
	{object V137;
	base[8]= VV[79];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V137= vs_base[0];
	base[8]= (V137);
	base[9]= list(4,VV[74],(V131),(V133),(V130));
	base[10]= (V129);
	base[11]= (V134);
	base[12]= (V135);
	base[13]= (V136);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk92)();
	vs_top=sup;
	base[8]= (V129);
	base[9]= (V137);
	base[10]= (V134);
	base[11]= (V135);
	base[12]= (V136);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk88)();
	return;}
	goto T489;
T489:;
	if(!(type_of((V129))==t_symbol)){
	goto T506;}
	base[8]= (V129);
	base[9]= (V133);
	base[10]= Cnil;
	base[11]= (V131);
	base[12]= (V130);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk90)();
	return;
	goto T506;
T506:;
	base[8]= VV[80];
	base[9]= (V129);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	return;
	}
}
/*	function definition for PARSE-BODY	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V138;
	object V139;
	register object V140;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V138=(base[0]);
	V139=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T515;}
	V140=(base[2]);
	vs_top=sup;
	goto T516;
	goto T515;
T515:;
	V140= Ct;
	goto T516;
T516:;
	{register object V141;
	register object V142;
	V141= Cnil;
	V142= Cnil;
	{register object V143;
	V143= (V138);
	goto T519;
T519:;
	if(!(endp_prop((V143)))){
	goto T520;}
	base[3]= (V143);
	base[4]= nreverse((V141));
	base[5]= (V142);
	vs_top=(vs_base=base+3)+3;
	return;
	goto T520;
T520:;
	{register object V144;
	V144= car((V143));
	if(!(type_of((V144))==t_string)){
	goto T530;}
	if((cdr((V143)))==Cnil){
	goto T530;}
	if(((V140))==Cnil){
	goto T535;}
	V142= (V144);
	V140= Cnil;
	goto T527;
	goto T535;
T535:;
	base[3]= (V143);
	base[4]= nreverse((V141));
	base[5]= (V142);
	vs_top=(vs_base=base+3)+3;
	return;
	goto T530;
T530:;
	if(!(type_of((V144))==t_cons)){
	goto T543;}
	if(type_of(car((V144)))==t_symbol){
	goto T544;}
	goto T543;
T543:;
	base[3]= (V143);
	base[4]= nreverse((V141));
	base[5]= (V142);
	vs_top=(vs_base=base+3)+3;
	return;
	goto T544;
T544:;
	if(!((car((V144)))==(VV[8]))){
	goto T552;}
	{register object V145;
	V145= (V144);
	V141= make_cons((V145),(V141));
	goto T527;}
	goto T552;
T552:;
	base[3]= (V143);
	base[4]= nreverse((V141));
	base[5]= (V142);
	vs_top=(vs_base=base+3)+3;
	return;}
	goto T527;
T527:;
	V143= cdr((V143));
	goto T519;}}
	}
}
/*	macro definition for DESTRUCTURING-BIND	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V146=base[0]->c.c_cdr;
	if(endp(V146))invalid_macro_call();
	base[2]= (V146->c.c_car);
	V146=V146->c.c_cdr;
	if(endp(V146))invalid_macro_call();
	base[3]= (V146->c.c_car);
	V146=V146->c.c_cdr;
	base[4]= V146;}
	{object V147;
	base[6]= VV[81];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V147= vs_base[0];
	{object V148;
	object V149;
	base[6]= base[2];
	base[7]= (V147);
	base[8]= base[4];
	base[9]= Cnil;
	base[10]= VV[82];
	base[11]= VV[83];
	base[12]= Ct;
	base[13]= VV[84];
	base[14]= Cnil;
	vs_top=(vs_base=base+6)+9;
	(void) (*Lnk95)();
	if(vs_base>=vs_top){vs_top=sup;goto T574;}
	V148= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T575;}
	V149= vs_base[0];
	vs_top=sup;
	goto T576;
	goto T574;
T574:;
	V148= Cnil;
	goto T575;
T575:;
	V149= Cnil;
	goto T576;
T576:;
	V150= list(2,(V147),base[3]);
	V151= make_cons(/* INLINE-ARGS */V150,Cnil);
	V152= make_cons((V148),Cnil);
	base[6]= listA(3,VV[73],/* INLINE-ARGS */V151,append((V149),/* INLINE-ARGS */V152));
	vs_top=(vs_base=base+6)+1;
	return;}}
}
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* PARSE-DEFMACRO */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* MAKE-KEYWORD */
static void LnkT93(){ call_or_link(VV[93],(void **)(void *)&Lnk93);} /* PUSH-OPTIONAL-BINDING */
static void LnkT92(){ call_or_link(VV[92],(void **)(void *)&Lnk92);} /* PUSH-SUB-LIST-BINDING */
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* DEFMACRO-ERROR */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* PUSH-LET-BINDING */
static void LnkT49(){ call_or_link(VV[49],(void **)(void *)&Lnk49);} /* LOOKUP-KEYWORD */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* SPECIFIC-ERROR */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* PARSE-DEFMACRO-LAMBDA-LIST */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* PARSE-BODY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

