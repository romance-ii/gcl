
#include "cmpinclude.h"
#include "sloop.h"
void init_sloop(){do_init(VV);}
/*	macro definition for LCASE	*/

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
	base[3]= V1;}
	{register object V2;
	register object V3;
	register object V4;
	V2= Cnil;
	V3= Cnil;
	V4= Cnil;
	{register object V5;
	register object V6;
	V5= base[3];
	V6= Cnil;
	goto T3;
T3:;
	if(((V3))!=Cnil){
	goto T5;}
	if(((V5))!=Cnil){
	goto T4;}
	goto T5;
T5:;
	goto T1;
	goto T4;
T4:;
	V6= car((V5));
	{register object V7;
	if(!(eql(car((V6)),Ct))){
	goto T15;}
	V3= Ct;
	V7= (V6);
	goto T13;
	goto T15;
T15:;
	if(!(eql(car((V6)),VV[0]))){
	goto T20;}
	V7= make_cons(VV[1],cdr((V6)));
	goto T13;
	goto T20;
T20:;
	if(!(eql(car((V6)),VV[2]))){
	goto T23;}
	V7= make_cons(VV[3],cdr((V6)));
	goto T13;
	goto T23;
T23:;
	{register object x= car((V6)),V8= VV[4];
	while(!endp(V8))
	if(eql(x,V8->c.c_car)){
	V4= V8;
	goto T28;
	}else V8=V8->c.c_cdr;
	V4= Cnil;}
	goto T28;
T28:;
	if(((V4))==Cnil){
	goto T26;}
	V9= list(3,VV[5],VV[6],list(3,VV[7],VV[8],list(2,VV[9],car((V4)))));
	V7= make_cons(/* INLINE-ARGS */V9,cdr((V6)));
	goto T13;
	goto T26;
T26:;
	V10= list(3,VV[10],VV[8],list(2,VV[9],car((V6))));
	V7= make_cons(/* INLINE-ARGS */V10,cdr((V6)));
	goto T13;
T13:;
	V2= make_cons((V7),(V2));}
	V5= cdr((V5));
	goto T3;}
	goto T1;
T1:;
	if((V3)!=Cnil){
	goto T33;}
	V2= make_cons(VV[11],(V2));
	goto T33;
T33:;
	V12= list(2,VV[8],list(2,VV[13],base[2]));
	V13= make_cons(/* INLINE-ARGS */V12,Cnil);
	V14= nreverse((V2));
	base[4]= list(3,VV[12],/* INLINE-ARGS */V13,make_cons(VV[14],/* INLINE-ARGS */V14));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function DESETQ1	*/

static object LI2(V17,V18)

register object V17;register object V18;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(type_of((V17))==t_symbol)){
	goto T36;}
	if((V17)==Cnil){
	{object V19 = Cnil;
	VMR2(V19)}}
	{object V20 = list(3,VV[15],(V17),(V18));
	VMR2(V20)}
	goto T36;
T36:;
	if(!(type_of((V17))==t_cons)){
	goto T39;}
	V21= car((V17));
	V22= list(2,VV[17],(V18));
	V23= (*(LnkLI246))(/* INLINE-ARGS */V21,/* INLINE-ARGS */V22);
	if(!(type_of(cdr((V17)))==t_cons)){
	goto T43;}
	V25= cdr((V17));
	V26= list(2,VV[18],(V18));
	V27= (*(LnkLI246))(/* INLINE-ARGS */V25,/* INLINE-ARGS */V26);
	V24= make_cons(/* INLINE-ARGS */V27,Cnil);
	goto T41;
	goto T43;
T43:;
	if((cdr((V17)))!=Cnil){
	goto T45;}
	V24= Cnil;
	goto T41;
	goto T45;
T45:;
	V28= cdr((V17));
	V29= list(3,VV[15],/* INLINE-ARGS */V28,list(2,VV[18],(V18)));
	V24= make_cons(/* INLINE-ARGS */V29,Cnil);
	goto T41;
T41:;
	{object V30 = listA(3,VV[16],/* INLINE-ARGS */V23,V24);
	VMR2(V30)}
	goto T39;
T39:;
	base[0]= VV[19];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V31 = vs_base[0];
	VMR2(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DESETQ	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V32=base[0]->c.c_cdr;
	if(endp(V32))invalid_macro_call();
	base[2]= (V32->c.c_car);
	V32=V32->c.c_cdr;
	if(endp(V32))invalid_macro_call();
	base[3]= (V32->c.c_car);
	V32=V32->c.c_cdr;
	if(!endp(V32))invalid_macro_call();}
	if(!(type_of(base[3])!=t_cons)){
	goto T49;}
	base[4]= (*(LnkLI246))(base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T49;
T49:;
	{object V33;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V33= vs_base[0];
	V34= list(2,(V33),base[3]);
	V35= make_cons(/* INLINE-ARGS */V34,Cnil);
	base[4]= list(3,VV[12],/* INLINE-ARGS */V35,(*(LnkLI246))(base[2],(V33)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-RETURN	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V36=base[0]->c.c_cdr;
	base[2]= V36;}
	if(!(((long)length(base[2]))<=(1))){
	goto T53;}
	base[3]= make_cons(VV[20],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T53;
T53:;
	base[3]= list(2,VV[20],make_cons(VV[21],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LOOP-FINISH	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V37=base[0]->c.c_cdr;
	if(!endp(V37))invalid_macro_call();}
	base[2]= VV[22];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for LOCAL-FINISH	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V38=base[0]->c.c_cdr;
	if(!endp(V38))invalid_macro_call();}
	base[2]= VV[23];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for SLOOP	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V39=base[0]->c.c_cdr;
	base[2]= V39;}
	base[3]= (*(LnkLI247))(base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DEF-LOOP-MAP	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V40=base[0]->c.c_cdr;
	if(endp(V40))invalid_macro_call();
	base[2]= (V40->c.c_car);
	V40=V40->c.c_cdr;
	if(endp(V40))invalid_macro_call();
	base[3]= (V40->c.c_car);
	V40=V40->c.c_cdr;
	base[4]= V40;}
	base[5]= (VFUN_NARGS=4,(*(LnkLI248))(base[2],base[3],base[4],VV[24]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-FOR	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(2);
	vs_top=sup;
	{object V41=base[0]->c.c_cdr;
	if(endp(V41))invalid_macro_call();
	base[2]= (V41->c.c_car);
	V41=V41->c.c_cdr;
	if(endp(V41))invalid_macro_call();
	base[3]= (V41->c.c_car);
	V41=V41->c.c_cdr;
	base[4]= V41;}
	base[5]= (VFUN_NARGS=6,(*(LnkLI248))(base[2],base[3],base[4],VV[25],Cnil,small_fixnum(1)));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-MACRO	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(2);
	vs_top=sup;
	{object V42=base[0]->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[2]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[3]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	base[4]= V42;}
	base[5]= (VFUN_NARGS=4,(*(LnkLI248))(base[2],base[3],base[4],VV[26]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-COLLECT	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(2);
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[3]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	base[4]= V43;}
	base[5]= (VFUN_NARGS=7,(*(LnkLI248))(base[2],base[3],base[4],VV[27],VV[28],small_fixnum(2),small_fixnum(2)));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for SLOOP-SWAP	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V44=base[0]->c.c_cdr;
	if(!endp(V44))invalid_macro_call();}
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function L-EQUAL	*/

static object LI13(V47,V48)

object V47;register object V48;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(type_of((V47))==t_symbol){
	goto T55;}
	{object V49 = Cnil;
	VMR13(V49)}
	goto T55;
T55:;
	if(!(type_of((V48))==t_symbol)){
	goto T58;}
	V50= symbol_name((V47));
	V51= symbol_name((V48));
	{object V52 = (equal(/* INLINE-ARGS */V50,/* INLINE-ARGS */V51)?Ct:Cnil);
	VMR13(V52)}
	goto T58;
T58:;
	if(!(type_of((V48))==t_cons||((V48))==Cnil)){
	goto T61;}
	base[0]= (V47);
	base[1]= (V48);
	base[2]= VV[30];
	base[3]= VV[10];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	{object V53 = vs_base[0];
	VMR13(V53)}
	goto T61;
T61:;
	{object V54 = Cnil;
	VMR13(V54)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-COLLECT-KEYWORD-P	*/

static object LI14(V56)

object V56;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;{object V57;
	base[0]= (V56);
	base[1]= VV[31];
	base[2]= VV[30];
	base[3]= VV[10];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V57= vs_base[0];
	if(V57==Cnil)goto T67;
	{object V58 = V57;
	VMR14(V58)}
	goto T67;
T67:;}
	{object V59 = (VFUN_NARGS=4,(*(LnkLI249))((V56),symbol_value(VV[28]),VV[30],VV[10]));
	VMR14(V59)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRANSLATE-NAME	*/

static object LI15(V61)

object V61;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V62;
	if(type_of((V61))==t_symbol){
	goto T74;}
	V62= Cnil;
	goto T73;
	goto T74;
T74:;
	base[0]= (V61);
	base[1]= symbol_value(VV[32]);
	base[2]= VV[30];
	base[3]= VV[10];
	base[4]= VV[33];
	base[5]= VV[17];
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V63= vs_base[0];
	V62= cdar(V63);
	goto T73;
T73:;
	if(((V62))==Cnil){
	goto T84;}
	{object V64 = (V62);
	VMR15(V64)}
	goto T84;
T84:;
	{object V65 = (V61);
	VMR15(V65)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-POP	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T87;}
	{object V66;
	V66= car(symbol_value(VV[34]));
	setq(VV[34],cdr(symbol_value(VV[34])));
	setq(VV[35],(V66));}
	{object V67 = symbol_value(VV[35]);
	VMR16(V67)}
	goto T87;
T87:;
	setq(VV[35],VV[36]);
	{object V68 = Cnil;
	VMR16(V68)}
	return Cnil;
}
/*	local entry for function LOOP-UN-POP	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V69= symbol_value(VV[35]);
	if((V69!= VV[36]))goto T95;
	{object V70 = Cnil;
	VMR17(V70)}
	goto T95;
T95:;
	if((V69!= VV[250]))goto T96;
	base[0]= VV[37];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V71 = vs_base[0];
	VMR17(V71)}
	goto T96;
T96:;
	{object V72;
	V72= symbol_value(VV[35]);
	setq(VV[34],make_cons((V72),symbol_value(VV[34])));}
	setq(VV[35],VV[38]);
	{object V73 = VV[38];
	VMR17(V73)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-PEEK	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V74 = car(symbol_value(VV[34]));
	VMR18(V74)}
	return Cnil;
}
/*	local entry for function LOOP-LET-BINDINGS	*/

static object LI19(V76)

register object V76;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{register object V77;
	V77= car((V76));
	goto T104;
T104:;
	if(((V77))!=Cnil){
	goto T105;}
	{object V78 = nreverse(car((V76)));
	VMR19(V78)}
	goto T105;
T105:;{object V79;
	V79= cdar((V77));
	if(V79==Cnil)goto T110;
	goto T109;
	goto T110;
T110:;}
	{register object V80;
	register object V81;
	V80= (V77);
	V81= caar((V77));
	if(type_of((V80))!=t_cons)FEwrong_type_argument(Scons,(V80));
	((V80))->c.c_car = (V81);}
	goto T109;
T109:;
	V77= cdr((V77));
	goto T104;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP	*/

static object LI20(V83)

object V83;
{	 VMB20 VMS20 VMV20
	bds_check;
	goto TTL;
TTL:;
	{register object V84;
	V84= Cnil;
	{register object V85;
	register object V86;
	bds_bind(VV[34],(V83));
	bds_bind(VV[54],symbol_value(VV[54]));
	bds_bind(VV[35],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[49],Cnil);
	bds_bind(VV[51],Cnil);
	bds_bind(VV[48],Cnil);
	bds_bind(VV[50],Cnil);
	bds_bind(VV[43],Cnil);
	bds_bind(VV[42],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[44],Cnil);
	bds_bind(VV[45],Cnil);
	bds_bind(VV[47],Cnil);
	bds_bind(VV[41],Cnil);
	bds_bind(VV[46],Cnil);
	bds_bind(VV[40],Cnil);
	bds_bind(VV[39],Cnil);
	V85= Cnil;
	V86= VV[55];
	if(!(type_of(car((VV[34]->s.s_dbind)))==t_symbol)){
	goto T120;}
	if((car((VV[34]->s.s_dbind)))!=Cnil){
	goto T119;}
	goto T120;
T120:;
	(VV[34]->s.s_dbind)= make_cons(VV[56],(VV[34]->s.s_dbind));
	goto T119;
T119:;
	(void)((*(LnkLI251))());
	if(((VV[53]->s.s_dbind))!=Cnil){
	goto T127;}
	if(((VV[40]->s.s_dbind))==Cnil){
	goto T126;}
	goto T127;
T127:;
	if((VV[51]->s.s_dbind)!=Cnil){
	goto T131;}
	base[18]= VV[57];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	(VV[51]->s.s_dbind)= vs_base[0];
	goto T131;
T131:;
	if(eql(VV[55],(V86))){
	goto T134;}
	goto T126;
	goto T134;
T134:;
	base[18]= VV[58];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	V86= vs_base[0];
	goto T126;
T126:;
	{object V88;
	V88= list(3,VV[59],VV[60],list(4,VV[61],VV[62],list(2,VV[9],(VV[51]->s.s_dbind)),VV[63]));
	V85= make_cons((V88),(V85));}
	{object V89;
	V89= list(3,VV[64],Cnil,list(3,VV[61],VV[65],list(2,VV[9],(V86))));
	V85= make_cons((V89),(V85));}
	{object V90;
	V90= list(3,VV[66],Cnil,list(3,VV[61],VV[67],list(2,VV[9],(V86))));
	V85= make_cons((V90),(V85));}
	if((VV[45]->s.s_dbind)==Cnil){
	goto T147;}
	{object V91;
	V91= list(3,VV[68],(VV[51]->s.s_dbind),(VV[45]->s.s_dbind));
	(VV[43]->s.s_dbind)= make_cons((V91),(VV[43]->s.s_dbind));}
	goto T147;
T147:;
	base[18]= (VV[41]->s.s_dbind);
	base[19]= nreverse((VV[49]->s.s_dbind));
	base[20]= nreverse((VV[42]->s.s_dbind));
	vs_top=(vs_base=base+18)+3;
	Lappend();
	vs_top=sup;
	V84= vs_base[0];
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T157;}
	V84= (*(LnkLI252))((V84));
	goto T155;
	goto T157;
T157:;
	V92= append((V84),VV[70]);
	V84= make_cons(VV[69],/* INLINE-ARGS */V92);
	goto T155;
T155:;
	{register object V93;{object V94;
	V94= (VV[51]->s.s_dbind);
	base[18]= nreverse((VV[48]->s.s_dbind));
	base[19]= (V84);
	base[20]= make_cons((V86),Cnil);
	base[21]= nreverse((VV[43]->s.s_dbind));
	base[22]= VV[74];
	vs_top=(vs_base=base+18)+5;
	Lappend();
	vs_top=sup;
	V95= vs_base[0];
	V93= list(3,VV[71],(V85),list(3,VV[72],V94,make_cons(VV[73],V95)));}
	if(eql(symbol_value(VV[75]),symbol_value(VV[76]))){
	goto T168;}
	base[18]= (V93);
	vs_top=(vs_base=base+18)+1;
	Lcopy_tree();
	vs_top=sup;
	V93= vs_base[0];
	goto T168;
T168:;
	{register object V96;
	register object V97;
	V96= (VV[46]->s.s_dbind);
	V97= car((V96));
	goto T177;
T177:;
	if(!(endp_prop((V96)))){
	goto T178;}
	goto T173;
	goto T178;
T178:;
	V98= (*(LnkLI253))((V97));
	if((cdr((V97)))!=Cnil){
	goto T185;}
	V99= Cnil;
	goto T184;
	goto T185;
T185:;
	V100= make_cons(VV[77],cdr((V97)));
	V99= make_cons(/* INLINE-ARGS */V100,Cnil);
	goto T184;
T184:;
	V101= make_cons((V93),Cnil);
	V93= listA(3,VV[12],/* INLINE-ARGS */V98,append(V99,/* INLINE-ARGS */V101));
	V96= cdr((V96));
	V97= car((V96));
	goto T177;}
	goto T173;
T173:;
	{object V102 = (V93);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR20(V102)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP1	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V103;
	V104= (*(LnkLI254))();
	V103= (*(LnkLI13))(/* INLINE-ARGS */V104);
	if(((*(LnkLI10))((V103),VV[78]))==Cnil){
	goto T192;}
	(void)((*(LnkLI255))());
	setq(VV[51],(*(LnkLI255))());}
	goto T192;
T192:;
	{register object V105;
	V105= (*(LnkLI255))();
	goto T200;
T200:;
	if(((V105))!=Cnil){
	goto T201;}
	if((symbol_value(VV[34]))!=Cnil){
	goto T201;}
	{object V106 = Cnil;
	VMR21(V106)}
	goto T201;
T201:;
	{register object V107;
	V107= (*(LnkLI13))((V105));
	{register object V108;
	V108= (*(LnkLI256))((V107));
	if(((V108))==Cnil){
	goto T211;}
	goto T207;
	goto T211;
T211:;
	if(((*(LnkLI10))((V107),VV[25]))==Cnil){
	goto T214;}
	(void)((*(LnkLI257))());
	goto T207;
	goto T214;
T214:;
	if(((*(LnkLI10))((V107),VV[79]))==Cnil){
	goto T217;}
	{register object V109;
	V110= (*(LnkLI255))();
	V109= list(3,VV[80],/* INLINE-ARGS */V110,VV[81]);
	setq(VV[49],make_cons((V109),symbol_value(VV[49])));
	goto T207;}
	goto T217;
T217:;
	if(((*(LnkLI10))((V107),VV[82]))==Cnil){
	goto T222;}
	{register object V111;
	V112= (*(LnkLI255))();
	V111= list(3,VV[5],/* INLINE-ARGS */V112,VV[83]);
	setq(VV[49],make_cons((V111),symbol_value(VV[49])));
	goto T207;}
	goto T222;
T222:;
	if(((*(LnkLI10))((V107),VV[56]))==Cnil){
	goto T227;}
	V113= (*(LnkLI258))();
	setq(VV[49],append(/* INLINE-ARGS */V113,symbol_value(VV[49])));
	goto T207;
	goto T227;
T227:;
	if(((*(LnkLI10))((V107),VV[84]))==Cnil){
	goto T231;}
	V114= (*(LnkLI259))();
	setq(VV[49],append(/* INLINE-ARGS */V114,symbol_value(VV[49])));
	goto T207;
	goto T231;
T231:;
	if(((*(LnkLI260))((V107)))==Cnil){
	goto T235;}
	V115= (*(LnkLI261))();
	setq(VV[49],append(/* INLINE-ARGS */V115,symbol_value(VV[49])));
	goto T207;
	goto T235;
T235:;
	base[0]= VV[85];
	base[1]= (V107);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
	goto T207;
T207:;
	V105= (*(LnkLI255))();
	goto T200;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-NO-BODY	*/

static object LI22(V117)

object V117;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V118;
	register object V119;
	V118= Ct;
	V119= Ct;
	{register object V120;
	V120= (V117);
	goto T247;
T247:;
	if(((V119))!=Cnil){
	goto T248;}
	if((symbol_value(VV[34]))!=Cnil){
	goto T248;}
	goto T245;
	goto T248;
T248:;
	{register object V121;
	V121= (*(LnkLI13))((V120));
	if(((*(LnkLI10))((V121),VV[86]))==Cnil){
	goto T257;}
	(void)((*(LnkLI262))((V120)));
	goto T254;
	goto T257;
T257:;
	if(((*(LnkLI10))((V121),Cnil))==Cnil){
	goto T260;}
	goto T254;
	goto T260;
T260:;
	if(((*(LnkLI10))((V121),VV[87]))==Cnil){
	goto T263;}
	(void)((VFUN_NARGS=0,(*(LnkLI263))()));
	goto T254;
	goto T263;
T263:;
	if(((*(LnkLI10))((V121),VV[77]))==Cnil){
	goto T266;}
	V122= (*(LnkLI255))();
	(void)((VFUN_NARGS=2,(*(LnkLI264))(/* INLINE-ARGS */V122,Ct)));
	goto T254;
	goto T266;
T266:;
	if(((*(LnkLI10))((V121),VV[88]))==Cnil){
	goto T269;}
	setq(VV[47],(*(LnkLI255))());
	goto T254;
	goto T269;
T269:;
	if(((*(LnkLI10))((V121),VV[89]))==Cnil){
	goto T273;}
	V123= (*(LnkLI258))();
	setq(VV[42],append(/* INLINE-ARGS */V123,symbol_value(VV[42])));
	goto T254;
	goto T273;
T273:;
	if(((*(LnkLI10))((V121),VV[90]))==Cnil){
	goto T277;}
	V124= (*(LnkLI258))();
	setq(VV[41],append(/* INLINE-ARGS */V124,symbol_value(VV[41])));
	goto T254;
	goto T277;
T277:;
	if(((*(LnkLI10))((V121),VV[91]))==Cnil){
	goto T281;}
	(void)((VFUN_NARGS=2,(*(LnkLI263))(Cnil,Ct)));
	goto T254;
	goto T281;
T281:;
	if(!(type_of((V121))==t_symbol)){
	goto T284;}
	if((get((V121),VV[92],Cnil))==Cnil){
	goto T284;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))((V120),VV[92])));
	goto T254;
	goto T284;
T284:;
	if(((V119))==Cnil){
	goto T290;}
	V118= Cnil;
	goto T288;
	goto T290;
T290:;
	(void)((*(LnkLI266))());
	goto T288;
T288:;
	goto T245;}
	goto T254;
T254:;
	V119= Cnil;
	V120= (*(LnkLI255))();
	goto T247;}
	goto T245;
T245:;
	{object V125 = (V118);
	VMR22(V125)}}
	return Cnil;
}
/*	local entry for function PARSE-LOOP-WITH	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V126;
	object V127;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T298;
	else {
	V126= first;}
	if (--narg <= 0) goto T299;
	else {
	V127= va_arg(ap,object);}
	--narg; goto T300;
	goto T298;
T298:;
	V126= Cnil;
	goto T299;
T299:;
	V127= Cnil;
	goto T300;
T300:;
	{register object V128;
	V128= (*(LnkLI255))();
	{object V129;
	V130= (*(LnkLI254))();
	V129= (*(LnkLI13))(/* INLINE-ARGS */V130);
	if(((*(LnkLI10))((V129),VV[94]))==Cnil){
	goto T307;}
	(void)((*(LnkLI255))());
	if(!(type_of((V128))==t_symbol)){
	goto T311;}
	goto T310;
	goto T311;
T311:;
	base[0]= VV[95];
	base[1]= (V128);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T310;
T310:;
	V131= (*(LnkLI255))();
	(void)((VFUN_NARGS=7,(*(LnkLI267))((V128),/* INLINE-ARGS */V131,(((V126))==Cnil?Ct:Cnil),Cnil,Cnil,Ct,(V127))));
	goto T304;
	goto T307;
T307:;
	(void)((VFUN_NARGS=5,(*(LnkLI268))((V128),Cnil,Cnil,(((V126))==Cnil?Ct:Cnil),(V127))));}
	goto T304;
T304:;
	{object V132;
	V133= (*(LnkLI254))();
	V132= (*(LnkLI13))(/* INLINE-ARGS */V133);
	if(((*(LnkLI10))((V132),VV[5]))==Cnil){
	goto T317;}
	(void)((*(LnkLI255))());
	{object V134;
	V135= (*(LnkLI255))();
	V134= (*(LnkLI13))(/* INLINE-ARGS */V135);
	if(((*(LnkLI10))((V134),VV[87]))==Cnil){
	goto T322;}
	{object V136 = (VFUN_NARGS=1,(*(LnkLI263))(Ct));
	VMR23(V136)}
	goto T322;
T322:;
	if(((*(LnkLI10))((V134),VV[91]))==Cnil){
	goto T325;}
	{object V137 = (VFUN_NARGS=2,(*(LnkLI263))(Ct,Ct));
	VMR23(V137)}
	goto T325;
T325:;
	(void)((*(LnkLI266))());
	{object V138 = (VFUN_NARGS=1,(*(LnkLI263))(Ct));
	VMR23(V138)}}
	goto T317;
T317:;
	{object V139 = Cnil;
	VMR23(V139)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-DO	*/

static object LI24()

{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V140;
	V140= Cnil;
	{register object V141;
	V141= (*(LnkLI255))();
	goto T332;
T332:;
	if(!(type_of((V141))==t_cons||((V141))==Cnil)){
	goto T337;}
	{register object V142;
	V142= (V141);
	V140= make_cons((V142),(V140));}
	if(symbol_value(VV[34])!=Cnil){
	goto T335;}
	goto T329;
	goto T337;
T337:;
	(void)((*(LnkLI266))());
	goto T329;
	goto T335;
T335:;
	V141= (*(LnkLI255))();
	goto T332;}
	goto T329;
T329:;
	if((V140)!=Cnil){
	goto T346;}
	base[0]= VV[96];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T346;
T346:;
	{object V143 = (V140);
	VMR24(V143)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-INITIALLY	*/

static object LI25(V145)

object V145;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V146;
	V146= (*(LnkLI13))((V145));
	if(((*(LnkLI10))((V146),VV[97]))==Cnil){
	goto T350;}
	{object V147;
	V147= (*(LnkLI258))();
	{register object V148;
	register object V149;
	V148= nreverse((V147));
	V149= car((V148));
	goto T356;
T356:;
	if(!(endp_prop((V148)))){
	goto T357;}
	{object V150 = Cnil;
	VMR25(V150)}
	goto T357;
T357:;
	{register object V151;
	if(type_of((V149))==t_cons||((V149))==Cnil){
	goto T363;}
	V151= Cnil;
	goto T362;
	goto T363;
T363:;
	{register object x= car((V149)),V152= VV[98];
	while(!endp(V152))
	if(eql(x,V152->c.c_car)){
	goto T365;
	}else V152=V152->c.c_cdr;}
	V151= Cnil;
	goto T362;
	goto T365;
T365:;
	if(((long)length((V149)))==(3)){
	goto T367;}
	V151= Cnil;
	goto T362;
	goto T367;
T367:;
	if(type_of(cadr((V149)))==t_symbol){
	goto T369;}
	V151= Cnil;
	goto T362;
	goto T369;
T369:;
	base[2]= caddr((V149));
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T371;}
	V151= Cnil;
	goto T362;
	goto T371;
T371:;
	{register object x= cadr((V149)),V153= caar(symbol_value(VV[46]));
	while(!endp(V153))
	if(type_of(V153->c.c_car)==t_cons &&eql(x,V153->c.c_car->c.c_car)){
	goto T374;
	}else V153=V153->c.c_cdr;}
	V151= Cnil;
	goto T362;
	goto T374;
T374:;
	V151= (VFUN_NARGS=7,(*(LnkLI267))(cadr((V149)),caddr((V149)),Cnil,Cnil,Cnil,Ct,Ct));
	goto T362;
T362:;
	if(((V151))==Cnil){
	goto T377;}
	goto T361;
	goto T377;
T377:;
	setq(VV[48],make_cons((V149),symbol_value(VV[48])));}
	goto T361;
T361:;
	V148= cdr((V148));
	V149= car((V148));
	goto T356;}}
	goto T350;
T350:;
	if(((*(LnkLI10))((V146),VV[99]))==Cnil){
	goto T386;}
	V154= (*(LnkLI258))();
	setq(VV[43],append(/* INLINE-ARGS */V154,symbol_value(VV[43])));
	{object V155 = symbol_value(VV[43]);
	VMR25(V155)}
	goto T386;
T386:;
	base[0]= VV[85];
	base[1]= (V146);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V156 = vs_base[0];
	VMR25(V156)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-ONE-WHEN-CLAUSE	*/

static object LI26()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{register object V157;
	register object V158;
	register object V159;
	V157= Cnil;
	V158= VV[100];
	V159= Cnil;
	goto T396;
T396:;
	if((symbol_value(VV[34]))==Cnil){
	goto T399;}
	goto T398;
	goto T399;
T399:;
	goto T394;
	goto T398;
T398:;
	V159= (*(LnkLI255))();
	{register object V160;
	V160= (*(LnkLI13))((V159));
	{register object V161;
	V161= (*(LnkLI256))((V160));
	if(((V161))==Cnil){
	goto T407;}
	goto T403;
	goto T407;
T407:;
	if(((*(LnkLI260))((V160)))==Cnil){
	goto T410;}
	if(!(eql(VV[100],(V158)))){
	goto T413;}
	goto T412;
	goto T413;
T413:;
	goto T397;
	goto T412;
T412:;
	V162= (*(LnkLI261))();
	V157= append(/* INLINE-ARGS */V162,(V157));
	V158= VV[5];
	goto T403;
	goto T410;
T410:;
	if(((*(LnkLI10))((V160),VV[101]))==Cnil){
	goto T419;}
	if(!(eql(VV[100],(V158)))){
	goto T422;}
	goto T421;
	goto T422;
T422:;
	goto T397;
	goto T421;
T421:;
	V163= (*(LnkLI259))();
	V157= append(/* INLINE-ARGS */V163,(V157));
	V158= VV[5];
	goto T403;
	goto T419;
T419:;
	if(((*(LnkLI10))((V160),VV[56]))==Cnil){
	goto T428;}
	if(!(eql(VV[100],(V158)))){
	goto T431;}
	goto T430;
	goto T431;
T431:;
	goto T397;
	goto T430;
T430:;
	V164= (*(LnkLI258))();
	V157= append(/* INLINE-ARGS */V164,(V157));
	V158= VV[5];
	goto T403;
	goto T428;
T428:;
	if(((*(LnkLI10))((V160),VV[5]))==Cnil){
	goto T437;}
	if(!(eql(VV[5],(V158)))){
	goto T440;}
	goto T439;
	goto T440;
T440:;
	base[0]= VV[102];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T439;
T439:;
	V158= VV[100];
	goto T403;
	goto T437;
T437:;
	(void)((*(LnkLI266))());
	goto T394;}}
	goto T403;
T403:;
	goto T396;
	goto T397;
T397:;
	(void)((*(LnkLI266))());
	goto T394;
	goto T394;
T394:;
	if((V157)!=Cnil){
	goto T446;}
	base[0]= VV[103];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T446;
T446:;
	{object V165 = (V157);
	VMR26(V165)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-WHEN	*/

static object LI27()

{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V166;
	object V167;
	object V168;
	V166= Cnil;
	V167= Cnil;
	V168= Cnil;
	{object V169;
	if(((*(LnkLI10))(symbol_value(VV[35]),VV[104]))==Cnil){
	goto T453;}
	V169= list(2,VV[105],(*(LnkLI255))());
	goto T451;
	goto T453;
T453:;
	V169= (*(LnkLI255))();
	goto T451;
T451:;
	V166= (*(LnkLI269))();
	{object V170;
	V171= (*(LnkLI254))();
	V170= (*(LnkLI13))(/* INLINE-ARGS */V171);
	if(((*(LnkLI10))((V170),VV[106]))==Cnil){
	goto T457;}
	(void)((*(LnkLI255))());
	V167= Ct;
	V168= (*(LnkLI269))();}
	goto T457;
T457:;
	V172= nreverse((V166));
	V173= make_cons((V169),/* INLINE-ARGS */V172);
	if((V167)==Cnil){
	V174= Cnil;
	goto T465;}
	V175= nreverse((V168));
	V176= make_cons(Ct,/* INLINE-ARGS */V175);
	V174= make_cons(/* INLINE-ARGS */V176,Cnil);
	goto T465;
T465:;
	V177= listA(3,VV[14],/* INLINE-ARGS */V173,V174);
	{object V178 = make_cons(/* INLINE-ARGS */V177,Cnil);
	VMR27(V178)}}}
	return Cnil;
}
/*	local entry for function POINTER-FOR-COLLECT	*/

static object LI28(V180)

object V180;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;{object V181;
	{register object x= (V180),V183= symbol_value(VV[52]);
	while(!endp(V183))
	if(type_of(V183->c.c_car)==t_cons &&eql(x,V183->c.c_car->c.c_car)){
	V182= (V183->c.c_car);
	goto T468;
	}else V183=V183->c.c_cdr;
	V182= Cnil;}
	goto T468;
T468:;
	V181= cdr(V182);
	if(V181==Cnil)goto T466;
	{object V184 = V181;
	VMR28(V184)}
	goto T466;
T466:;}
	{object V185;
	base[0]= VV[107];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V186= vs_base[0];
	V185= (VFUN_NARGS=4,(*(LnkLI267))(V186,Cnil,Cnil,VV[0]));
	{object V187;
	V187= make_cons((V180),(V185));
	setq(VV[52],make_cons((V187),symbol_value(VV[52])));}
	{object V188 = (V185);
	VMR28(V188)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-COLLECT	*/

static object LI29()

{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V189;
	register object V190;
	register object V191;
	V189= Cnil;
	V190= Cnil;
	V191= Cnil;
	if(symbol_value(VV[50])==Cnil){
	goto T478;}
	{frame_ptr fr;
	fr=frs_sch_catch(VV[27]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[27]);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	unwind(fr,VV[27]);}
	goto T478;
T478:;
	{register object V192;
	register object V193;
	V192= symbol_value(VV[35]);
	V193= (*(LnkLI255))();
	{object V194;
	V195= (*(LnkLI255))();
	V194= (*(LnkLI13))(/* INLINE-ARGS */V195);
	if(((*(LnkLI10))((V194),VV[108]))==Cnil){
	goto T485;}
	V189= (*(LnkLI255))();
	(void)((VFUN_NARGS=6,(*(LnkLI267))((V189),Cnil,Cnil,Ct,Cnil,Ct)));
	goto T482;
	goto T485;
T485:;
	(void)((*(LnkLI266))());
	if((symbol_value(VV[45]))==Cnil){
	goto T490;}
	V189= symbol_value(VV[45]);
	goto T482;
	goto T490;
T490:;
	base[0]= VV[109];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V196= vs_base[0];
	setq(VV[45],(VFUN_NARGS=2,(*(LnkLI267))(V196,Cnil)));
	V189= symbol_value(VV[45]);}
	goto T482;
T482:;
	{object V197;
	V197= (*(LnkLI13))((V192));
	if(((*(LnkLI10))((V197),VV[110]))==Cnil){
	goto T497;}
	V190= (*(LnkLI270))((V189));
	if((symbol_value(VV[111]))==Cnil){
	goto T503;}
	{object V198;
	V198= list(3,VV[15],(V190),list(2,VV[112],(V189)));
	base[1]= (V198);
	base[2]= symbol_value(VV[48]);
	base[3]= VV[30];
	base[4]= VV[113];
	vs_top=(vs_base=base+1)+4;
	Ladjoin();
	vs_top=sup;
	setq(VV[48],vs_base[0]);}
	goto T503;
T503:;
	{object V199;
	V199= (*(LnkLI13))((V192));
	if(((*(LnkLI10))((V199),VV[114]))==Cnil){
	goto T497;}
	if(!(type_of((V193))==t_cons||((V193))==Cnil)){
	goto T515;}
	if(eql(car((V193)),VV[61])){
	goto T497;}
	goto T515;
T515:;
	V193= list(2,VV[115],(V193));}}
	goto T497;
T497:;
	if(!(type_of((V193))==t_cons||((V193))==Cnil)){
	goto T522;}
	if((symbol_value(VV[111]))!=Cnil){
	goto T522;}
	base[0]= VV[116];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V200= vs_base[0];
	V191= (VFUN_NARGS=3,(*(LnkLI267))(V200,Cnil,Cnil));
	goto T520;
	goto T522;
T522:;
	V191= (V193);
	goto T520;
T520:;
	{object V201;
	{object V202;
	V202= (*(LnkLI13))((V192));
	if(((*(LnkLI10))((V202),VV[117]))==Cnil){
	goto T533;}
	{object V203;
	V204= list(3,VV[15],list(2,VV[18],(V190)),(V191));
	V203= list(3,VV[5],/* INLINE-ARGS */V204,list(3,VV[15],(V190),list(2,VV[118],list(2,VV[18],(V190)))));
	if((symbol_value(VV[111]))==Cnil){
	goto T537;}
	V201= make_cons((V203),Cnil);
	goto T530;
	goto T537;
T537:;
	V205= list(2,(V190),(V203));
	V206= list(3,VV[14],/* INLINE-ARGS */V205,list(2,Ct,list(3,VV[15],(V190),list(2,VV[118],list(3,VV[15],(V189),(V191))))));
	V201= make_cons(/* INLINE-ARGS */V206,Cnil);
	goto T530;}
	goto T533;
T533:;
	if(((*(LnkLI10))((V202),VV[27]))==Cnil){
	goto T540;}
	if((symbol_value(VV[111]))==Cnil){
	goto T543;}
	V207= list(2,VV[18],(V190));
	V208= list(3,VV[15],/* INLINE-ARGS */V207,list(3,VV[15],(V190),list(3,VV[119],(V191),Cnil)));
	V201= make_cons(/* INLINE-ARGS */V208,Cnil);
	goto T530;
	goto T543;
T543:;
	V209= list(2,VV[18],(V190));
	V210= list(2,(V190),list(3,VV[15],/* INLINE-ARGS */V209,list(3,VV[15],(V190),list(3,VV[119],(V191),Cnil))));
	V211= list(3,VV[14],/* INLINE-ARGS */V210,list(2,Ct,list(3,VV[15],(V189),list(3,VV[15],(V190),list(3,VV[119],(V191),Cnil)))));
	V201= make_cons(/* INLINE-ARGS */V211,Cnil);
	goto T530;
	goto T540;
T540:;
	V192= (*(LnkLI13))((V192));
	if(((VFUN_NARGS=4,(*(LnkLI249))((V192),symbol_value(VV[28]),VV[30],VV[10])))==Cnil){
	goto T548;}
	V201= (*(LnkLI271))((V192),(V189),(V191));
	goto T530;
	goto T548;
T548:;
	base[0]= VV[120];
	base[1]= (V192);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V201= vs_base[0];}
	goto T530;
T530:;
	if(!(eql((V191),(V193)))){
	goto T553;}
	{object V212 = (V201);
	VMR29(V212)}
	goto T553;
T553:;
	V213= list(3,VV[15],(V191),(V193));
	V214= make_cons(/* INLINE-ARGS */V213,Cnil);
	{object V215 = nconc((V201),/* INLINE-ARGS */V214);
	VMR29(V215)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-PARSE-ADDITIONAL-COLLECTIONS	*/

static object LI30(V219,V220,V221)

object V219;object V220;object V221;
{	 VMB30 VMS30 VMV30
	bds_check;
	goto TTL;
TTL:;
	{register object V222;
	V222= Cnil;
	{object V223;
	object V224;
	V223= (VFUN_NARGS=4,(*(LnkLI249))((V219),symbol_value(VV[28]),VV[30],VV[10]));
	V224= get((V223),VV[121],Cnil);
	{object V225;
	V225= (
	(type_of((V224)) == t_sfun ?(*(((V224))->sfn.sfn_self)):
	(fcall.fun=((V224)),fcall.argd=2,fcalln))((V220),(V221)));
	bds_bind(VV[34],(V225));
	bds_bind(VV[35],Cnil);
	{register object V226;
	V226= (*(LnkLI255))();
	goto T562;
T562:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T563;}
	goto T559;
	goto T563;
T563:;
	{register object V227;
	V227= (*(LnkLI13))((V226));
	{register object V228;
	V228= (*(LnkLI256))((V227));
	if(((V228))==Cnil){
	goto T571;}
	goto T567;
	goto T571;
T571:;
	if(((*(LnkLI10))((V227),VV[56]))==Cnil){
	goto T574;}
	V222= (*(LnkLI258))();
	goto T567;
	goto T574;
T574:;
	base[4]= VV[85];
	base[5]= (V227);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}}
	goto T567;
T567:;
	V226= (*(LnkLI255))();
	goto T562;}
	goto T559;
T559:;
	{object V229 = (V222);
	bds_unwind1;
	bds_unwind1;
	VMR30(V229)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function THE-TYPE	*/

static object LI31(V232,V233)

object V232;register object V233;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(symbol_value(VV[47])==Cnil){
	goto T582;}
	V233= Cnil;
	goto T582;
T582:;
	if((V233)==Cnil){
	goto T584;}{object V234;
	base[0]= symbol_value(VV[54]);
	base[1]= (V233);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V234= vs_base[0];
	if(V234==Cnil)goto T586;
	V233= V234;
	goto T585;
	goto T586;
T586:;}
	if((((type_of((V233))==t_symbol&&((V233))->s.s_hpack==keyword_package)?Ct:Cnil))==Cnil){
	goto T590;}
	V233= Cnil;
	goto T585;
	goto T590;
T590:;
	goto T585;
T585:;
	goto T584;
T584:;
	if(type_of((V233))==t_cons){
	goto T593;}
	goto T592;
	goto T593;
T593:;
	if((car((V233)))==(VV[122])){
	goto T595;}
	goto T592;
	goto T595;
T595:;
	V233= cadr((V233));
	goto T592;
T592:;
	if(((V233))==Cnil){
	goto T599;}
	{object V235 = list(3,VV[123],(V233),(V232));
	VMR31(V235)}
	goto T599;
T599:;
	{object V236 = (V232);
	VMR31(V236)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TYPE-ERROR	*/

static object LI32()

{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= VV[124];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V237 = vs_base[0];
	VMR32(V237)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-VALUE	*/

static object LI33(V240,V241)

register object V240;object V241;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V242;
	V242= Cnil;
	if((symbol_value(VV[47]))!=Cnil){
	goto T604;}
	if((symbol_value(VV[125]))==Cnil){
	goto T604;}
	if(!(((V241))==(VV[126]))){
	goto T604;}
	base[0]= symbol_value(VV[54]);
	base[1]= (V241);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V242= vs_base[0];
	if(((V242))==Cnil){
	goto T604;}
	if(!(type_of((V242))==t_cons)){
	goto T618;}
	if(!((car((V242)))==(VV[122]))){
	goto T618;}
	V242= cadr((V242));
	goto T616;
	goto T618;
T618:;
	goto T616;
T616:;
	base[0]= (V240);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T623;}
	{object V243;
	if((symbol_value(VV[39]))==Cnil){
	goto T628;}
	base[1]= (V240);
	base[2]= VV[127];
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+1)+3;
	Lsubst();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V243= vs_base[0];
	goto T626;
	goto T628;
T628:;
	base[0]= (V240);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V243= vs_base[0];
	goto T626;
T626:;{object V244;
	base[0]= (V243);
	base[1]= (V242);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk129)();
	vs_top=sup;
	V244= vs_base[0];
	if(V244==Cnil)goto T636;
	goto T635;
	goto T636;
T636:;}
	base[0]= VV[128];
	base[1]= (V240);
	base[2]= (V242);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	goto T635;
T635:;
	{object V245 = make_cons((V240),Cnil);
	VMR33(V245)}}
	goto T623;
T623:;
	{register object V246;
	V246= Cnil;
	if(!(type_of((V240))!=t_cons)){
	goto T645;}
	V247= Cnil;
	goto T643;
	goto T645;
T645:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V246= vs_base[0];
	V248= list(2,(V246),(V240));
	V247= make_cons(/* INLINE-ARGS */V248,Cnil);
	goto T643;
T643:;
	if((symbol_value(VV[39]))==Cnil){
	goto T650;}
	if((V246)!=Cnil){
	base[0]= (V246);
	goto T652;}
	base[0]= (V240);
	goto T652;
T652:;
	base[1]= VV[127];
	base[2]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V249= vs_base[0];
	goto T648;
	goto T650;
T650:;
	if((V246)!=Cnil){
	V249= (V246);
	goto T648;}
	V249= (V240);
	goto T648;
T648:;
	V250= list(3,VV[80],list(3,VV[129],V249,list(2,VV[9],(V242))),VV[130]);
	if((V246)!=Cnil){
	V251= (V246);
	goto T655;}
	V251= (V240);
	goto T655;
T655:;
	V252= list(4,VV[12],V247,/* INLINE-ARGS */V250,V251);
	{object V253 = make_cons(/* INLINE-ARGS */V252,Cnil);
	VMR33(V253)}}
	goto T604;
T604:;
	{object V254 = make_cons((V240),Cnil);
	VMR33(V254)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-ADD-BINDING	*/

static object LI34(object V256,object V255,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V257;
	register object V258;
	object V259;
	object V260;
	object V261;
	object V262;
	object V263;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V257= V256;
	V258= V255;
	narg = narg - 2;
	if (narg <= 0) goto T656;
	else {
	V259= first;}
	if (--narg <= 0) goto T657;
	else {
	V260= va_arg(ap,object);}
	if (--narg <= 0) goto T658;
	else {
	V261= va_arg(ap,object);}
	if (--narg <= 0) goto T659;
	else {
	V262= va_arg(ap,object);}
	if (--narg <= 0) goto T660;
	else {
	V263= va_arg(ap,object);}
	--narg; goto T661;
	goto T656;
T656:;
	V259= Ct;
	goto T657;
T657:;
	V260= Cnil;
	goto T658;
T658:;
	V261= Cnil;
	goto T659;
T659:;
	V262= Ct;
	goto T660;
T660:;
	V263= Cnil;
	goto T661;
T661:;
	{register object V264;
	V264= Cnil;
	if(((V259))!=Cnil){
	goto T669;}
	if((symbol_value(VV[46]))!=Cnil){
	goto T668;}
	goto T669;
T669:;
	{object V265;
	V265= make_cons(Cnil,Cnil);
	setq(VV[46],make_cons((V265),symbol_value(VV[46])));}
	goto T668;
T668:;
	{register object x= (V257),V266= caar(symbol_value(VV[46]));
	while(!endp(V266))
	if(type_of(V266->c.c_car)==t_cons &&eql(x,V266->c.c_car->c.c_car)){
	V264= (V266->c.c_car);
	goto T679;
	}else V266=V266->c.c_cdr;
	V264= Cnil;}
	goto T679;
T679:;
	if(((V264))==Cnil){
	goto T677;}
	if((V262)==Cnil){
	goto T675;}
	{object V268;
	if((V258)==Cnil){
	V268= Cnil;
	goto T680;}
	V268= (*(LnkLI272))((V258),(V260));
	goto T680;
T680:;
	if(type_of(V264)!=t_cons)FEwrong_type_argument(Scons,V264);
	(V264)->c.c_cdr = (V268);
	goto T675;}
	goto T677;
T677:;
	{object V269;
	if((V263)!=Cnil){
	if(((V263))!=Cnil){
	goto T683;}
	goto T684;}
	base[0]= (V257);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V270= vs_base[0];
	if((V270)==Cnil){
	goto T685;}
	goto T684;
	goto T685;
T685:;
	base[0]= (V258);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T683;}
	goto T684;
T684:;
	V269= Cnil;
	goto T682;
	goto T683;
T683:;
	{register object V271;
	register object V272;
	V271= cdr(symbol_value(VV[46]));
	V272= car((V271));
	goto T693;
T693:;
	if(!(endp_prop((V271)))){
	goto T694;}
	V269= Cnil;
	goto T682;
	goto T694;
T694:;
	{register object x= (V257),V273= car((V272));
	while(!endp(V273))
	if(type_of(V273->c.c_car)==t_cons &&eql(x,V273->c.c_car->c.c_car)){
	V264= (V273->c.c_car);
	goto T701;
	}else V273=V273->c.c_cdr;
	V264= Cnil;}
	goto T701;
T701:;
	if(((V264))==Cnil){
	goto T698;}
	if((V262)==Cnil){
	goto T702;}
	{register object V274;
	register object V275;
	V274= (V264);
	if((V258)==Cnil){
	V275= Cnil;
	goto T704;}
	V275= (*(LnkLI272))((V258),(V260));
	goto T704;
T704:;
	if(type_of((V274))!=t_cons)FEwrong_type_argument(Scons,(V274));
	((V274))->c.c_cdr = (V275);}
	goto T702;
T702:;
	V269= Ct;
	goto T682;
	goto T698;
T698:;
	V271= cdr((V271));
	V272= car((V271));
	goto T693;}
	goto T682;
T682:;
	if(((V269))==Cnil){
	goto T712;}
	goto T675;
	goto T712;
T712:;
	{object V276;
	object V277;
	object V278;
	if((V258)==Cnil){
	V279= Cnil;
	goto T715;}
	V279= (*(LnkLI272))((V258),(V260));
	goto T715;
T715:;
	V276= make_cons((V257),V279);
	V277= symbol_value(VV[46]);
	V278= make_cons((V276),caar((V277)));
	if(type_of(car((V277)))!=t_cons)FEwrong_type_argument(Scons,car((V277)));
	(car((V277)))->c.c_car = (V278);
	(void)(car((V277)));}}
	goto T675;
T675:;
	if((V260)==Cnil){
	goto T719;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V257),(V260),(V261))));
	goto T719;
T719:;
	{object V280 = (V257);
	VMR34(V280)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-DECLARE-BINDING	*/

static object LI35(object V283,object V282,object V281,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{register object V284;
	register object V285;
	object V286;
	object V287;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V284= V283;
	V285= V282;
	V286= V281;
	narg = narg - 3;
	if (narg <= 0) goto T720;
	else {
	V287= first;}
	--narg; goto T721;
	goto T720;
T720:;
	V287= Cnil;
	goto T721;
T721:;
	{object V288;
	V288= Cnil;
	if((V285)==Cnil){
	goto T725;}
	{register object x= (V285),V289= symbol_value(VV[131]);
	while(!endp(V289))
	if(eql(x,V289->c.c_car)){
	goto T726;
	}else V289=V289->c.c_cdr;}
	goto T725;
	goto T726;
T726:;
	base[0]= symbol_value(VV[54]);
	base[1]= (V285);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V285= vs_base[0];
	if(((V285))!=Cnil){
	goto T728;}
	goto T725;
	goto T728;
T728:;
	if(symbol_value(VV[132])==Cnil){
	goto T725;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V284),VV[133],(V286))));
	goto T725;
T725:;
	if(((V285))==Cnil){
	goto T733;}
	if(((V286))!=Cnil){
	goto T734;}
	if((symbol_value(VV[47]))!=Cnil){
	goto T733;}
	goto T734;
T734:;
	{register object V290;
	register object V291;
	V290= symbol_value(VV[46]);
	V291= car((V290));
	goto T744;
T744:;
	if(!(endp_prop((V290)))){
	goto T745;}
	goto T740;
	goto T745;
T745:;
	{register object x= (V284),V292= car((V291));
	while(!endp(V292))
	if(type_of(V292->c.c_car)==t_cons &&eql(x,V292->c.c_car->c.c_car)){
	goto T751;
	}else V292=V292->c.c_cdr;
	goto T749;}
	goto T751;
T751:;
	V288= Ct;
	{object V293;
	register object V294;
	register object V295;
	if(!(type_of((V285))==t_cons)){
	goto T757;}
	if(!((car((V285)))==(VV[122]))){
	goto T757;}
	V293= list(3,VV[122],cadr((V285)),(V284));
	goto T755;
	goto T757;
T757:;
	if(((V287))==Cnil){
	goto T762;}
	V293= list(3,VV[122],(V285),(V284));
	goto T755;
	goto T762;
T762:;
	V293= list(2,(V285),(V284));
	goto T755;
T755:;
	V294= (V291);
	base[3]= (V293);
	base[4]= cdr((V294));
	base[5]= VV[30];
	base[6]= VV[113];
	vs_top=(vs_base=base+3)+4;
	Ladjoin();
	vs_top=sup;
	V295= vs_base[0];
	if(type_of((V294))!=t_cons)FEwrong_type_argument(Scons,(V294));
	((V294))->c.c_cdr = (V295);}
	goto T740;
	goto T749;
T749:;
	V290= cdr((V290));
	V291= car((V290));
	goto T744;}
	goto T740;
T740:;
	if((V288)!=Cnil){
	goto T733;}
	if(symbol_value(VV[53])!=Cnil){
	goto T733;}
	base[0]= VV[134];
	base[1]= (V284);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T733;
T733:;
	{object V296 = (V284);
	VMR35(V296)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-DECLARE	*/

static object LI36(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V297;
	register object V298;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T778;
	else {
	V297= first;}
	if (--narg <= 0) goto T779;
	else {
	V298= va_arg(ap,object);}
	--narg; goto T780;
	goto T778;
T778:;
	V297= (*(LnkLI255))();
	goto T779;
T779:;
	V298= Ct;
	goto T780;
T780:;
	{object V299;
	register object V300;
	V299= car((V297));
	V300= Cnil;
	if(!(((V299))==(VV[122]))){
	goto T784;}
	V297= cdr((V297));
	V299= car((V297));
	V300= Ct;
	goto T784;
T784:;
	{register object V301;
	register object V302;
	V301= cdr((V297));
	V302= car((V301));
	goto T795;
T795:;
	if(!(endp_prop((V301)))){
	goto T796;}
	{object V303 = Cnil;
	VMR36(V303)}
	goto T796;
T796:;
	(void)((VFUN_NARGS=4,(*(LnkLI273))((V302),car((V297)),(V298),(V300))));
	V301= cdr((V301));
	V302= car((V301));
	goto T795;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-ADD-TEMPS	*/

static object LI37(object V304,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	{register object V305;
	object V306;
	object V307;
	object V308;
	object V309;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V305= V304;
	narg = narg - 1;
	if (narg <= 0) goto T806;
	else {
	V306= first;}
	if (--narg <= 0) goto T807;
	else {
	V307= va_arg(ap,object);}
	if (--narg <= 0) goto T808;
	else {
	V308= va_arg(ap,object);}
	if (--narg <= 0) goto T809;
	else {
	V309= va_arg(ap,object);}
	--narg; goto T810;
	goto T806;
T806:;
	V306= Cnil;
	goto T807;
T807:;
	V307= Cnil;
	goto T808;
T808:;
	V308= Cnil;
	goto T809;
T809:;
	V309= Cnil;
	goto T810;
T810:;
	{object V310;
	V310= (((V305))==Cnil?Ct:Cnil);
	if(((V310))==Cnil){
	goto T817;}
	{object V311 = (V310);
	VMR37(V311)}
	goto T817;
T817:;
	if(!(type_of((V305))==t_symbol)){
	goto T820;}
	{object V312 = (VFUN_NARGS=7,(*(LnkLI267))((V305),(V306),(V308),(V307),Cnil,Ct,(V309)));
	VMR37(V312)}
	goto T820;
T820:;
	if(!(type_of((V305))==t_cons||((V305))==Cnil)){
	goto T823;}
	(void)((VFUN_NARGS=1,(*(LnkLI268))(car((V305)))));
	{object V313 = (VFUN_NARGS=1,(*(LnkLI268))(cdr((V305))));
	VMR37(V313)}
	goto T823;
T823:;
	{object V314 = Cnil;
	VMR37(V314)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function ADD-FROM-DATA	*/

static object LI38(object V315,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB38 VMS38 VMV38
	{register object V316;
	object V317;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V316= V315;
	narg= narg - 1;
	V318 = list_vector_new(narg,first,ap);
	V317= V318;
	if((V316)!=Cnil){
	goto T826;}
	base[0]= VV[135];
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V316= vs_base[0];
	goto T826;
T826:;
	{register object V319;
	register object V320;
	V319= (V316);
	V320= (V317);
	goto T831;
T831:;
	if(((V320))!=Cnil){
	goto T832;}
	goto T829;
	goto T832;
T832:;
	if((car((V320)))!=Cnil){
	goto T837;}
	goto T836;
	goto T837;
T837:;
	{register object V321;
	register object V322;
	V321= (V319);
	V322= car((V320));
	if(type_of((V321))!=t_cons)FEwrong_type_argument(Scons,(V321));
	((V321))->c.c_car = (V322);}
	goto T836;
T836:;
	V319= cdr((V319));
	V320= cdr((V320));
	goto T831;}
	goto T829;
T829:;
	{object V323 = (V316);
	VMR38(V323)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-FOR	*/

static object LI39()

{	 VMB39 VMS39 VMV39
	bds_check;
	goto TTL;
TTL:;
	{register object V324;
	register object V325;
	V324= Cnil;
	V325= Cnil;
	{register object V326;
	object V327;
	register object V328;
	V326= (*(LnkLI255))();
	V327= Cnil;
	V328= Cnil;
	{object V329;
	V329= (*(LnkLI255))();
	goto T854;
T854:;
	{register object V330;
	V330= (*(LnkLI13))((V329));
	if(((*(LnkLI10))((V330),VV[136]))==Cnil){
	goto T860;}
	{object V331;
	base[1]= VV[137];
	vs_top=(vs_base=base+1)+1;
	Lgensym();
	vs_top=sup;
	V331= vs_base[0];
	(void)((VFUN_NARGS=4,(*(LnkLI268))((V326),Cnil,VV[138],Ct)));
	V332= (*(LnkLI255))();
	(void)((VFUN_NARGS=3,(*(LnkLI267))((V331),/* INLINE-ARGS */V332,Cnil)));
	{object V333;
	V333= list(3,VV[139],(V326),list(2,VV[17],(V331)));
	setq(VV[49],make_cons((V333),symbol_value(VV[49])));}
	V328= list(3,VV[15],(V331),list(2,VV[18],(V331)));
	V327= list(2,VV[140],(V331));
	goto T857;}
	goto T860;
T860:;
	if(((*(LnkLI10))((V330),VV[141]))==Cnil){
	goto T873;}
	{register object V334;
	if(!(type_of((V326))==t_symbol)){
	goto T877;}
	V334= (V326);
	goto T875;
	goto T877;
T877:;
	base[1]= VV[142];
	vs_top=(vs_base=base+1)+1;
	Lgensym();
	vs_top=sup;
	V334= vs_base[0];
	goto T875;
T875:;
	(void)((VFUN_NARGS=4,(*(LnkLI268))((V326),Cnil,VV[138],Ct)));
	V335= (*(LnkLI255))();
	(void)((VFUN_NARGS=3,(*(LnkLI267))((V334),/* INLINE-ARGS */V335,Cnil)));
	V328= list(3,VV[15],(V334),list(2,VV[18],(V334)));
	if(eql((V334),(V326))){
	goto T884;}
	{object V336;
	V336= list(3,VV[139],(V326),(V334));
	setq(VV[49],make_cons((V336),symbol_value(VV[49])));}
	goto T884;
T884:;
	V327= list(2,VV[140],(V334));
	goto T857;}
	goto T873;
T873:;
	if(((*(LnkLI10))((V330),VV[143]))==Cnil){
	goto T891;}
	V337= (*(LnkLI255))();
	V325= (VFUN_NARGS=6,(*(LnkLI274))((V325),(V326),/* INLINE-ARGS */V337,Cnil,Cnil,VV[144]));
	goto T857;
	goto T891;
T891:;
	if(((*(LnkLI10))((V330),VV[145]))==Cnil){
	goto T895;}
	V338= (*(LnkLI255))();
	V325= (VFUN_NARGS=6,(*(LnkLI274))((V325),(V326),/* INLINE-ARGS */V338,Cnil,Cnil,VV[146]));
	goto T857;
	goto T895;
T895:;
	if(((*(LnkLI10))((V330),VV[147]))==Cnil){
	goto T899;}
	V324= (*(LnkLI255))();
	if(((V325))==Cnil){
	goto T904;}
	V325= (VFUN_NARGS=5,(*(LnkLI274))((V325),Cnil,Cnil,Cnil,(V324)));
	goto T857;
	goto T904;
T904:;
	bds_bind(VV[148],small_fixnum(4));
	bds_bind(VV[149],small_fixnum(4));
	goto T909;
T909:;
	if(!((car(caddr((V328))))==(VV[18]))){
	goto T910;}
	bds_unwind1;
	bds_unwind1;
	goto T907;
	goto T910;
T910:;
	base[3]= VV[150];
	base[4]= VV[151];
	base[5]= VV[152];
	vs_top=(vs_base=base+3)+3;
	Lcerror();
	vs_top=sup;
	base[3]= symbol_value(VV[153]);
	base[4]= VV[154];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	goto T909;
	goto T907;
T907:;
	V339= cadr((V328));
	if(!(type_of((V324))==t_cons)){
	goto T926;}
	{register object x= car((V324)),V341= VV[155];
	while(!endp(V341))
	if(eql(x,V341->c.c_car)){
	goto T929;
	}else V341=V341->c.c_cdr;
	goto T926;}
	goto T929;
T929:;
	V340= list(2,cadr((V324)),cadr((V328)));
	goto T924;
	goto T926;
T926:;
	V340= list(3,VV[156],(V324),cadr((V328)));
	goto T924;
T924:;
	V328= list(3,VV[15],/* INLINE-ARGS */V339,V340);
	goto T857;
	goto T899;
T899:;
	if(((*(LnkLI10))((V330),VV[157]))==Cnil){
	goto T931;}
	V342= (*(LnkLI255))();
	V325= (VFUN_NARGS=6,(*(LnkLI274))((V325),(V326),Cnil,/* INLINE-ARGS */V342,Cnil,VV[144]));
	goto T857;
	goto T931;
T931:;
	if(((*(LnkLI10))((V330),VV[158]))==Cnil){
	goto T935;}
	V343= (*(LnkLI255))();
	V325= (VFUN_NARGS=6,(*(LnkLI274))((V325),(V326),Cnil,/* INLINE-ARGS */V343,Cnil,VV[146]));
	goto T857;
	goto T935;
T935:;
	if(((*(LnkLI10))((V330),VV[159]))==Cnil){
	goto T939;}
	V344= (*(LnkLI255))();
	V325= (VFUN_NARGS=7,(*(LnkLI274))((V325),(V326),Cnil,/* INLINE-ARGS */V344,Cnil,Cnil,Ct));
	goto T857;
	goto T939;
T939:;
	if(!(type_of((V330))==t_symbol)){
	goto T943;}
	if((get((V330),VV[160],Cnil))==Cnil){
	goto T943;}
	V345= (*(LnkLI13))((V329));
	(void)((VFUN_NARGS=3,(*(LnkLI265))(/* INLINE-ARGS */V345,VV[160],(V326))));
	goto T851;
	goto T943;
T943:;
	if(!(type_of((V330))==t_symbol)){
	goto T949;}
	if((get((V330),VV[161],Cnil))==Cnil){
	goto T949;}
	V346= (*(LnkLI13))((V329));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V346,(V326)));
	goto T851;
	goto T949;
T949:;
	(void)((*(LnkLI266))());
	goto T851;}
	goto T857;
T857:;
	V329= (*(LnkLI255))();
	goto T854;}
	goto T851;
T851:;
	if(((V325))==Cnil){
	goto T958;}
	{object V347;
	object V348;
	object V349;
	object V350;
	object V351;
	object V352;
	V347= car(cddddr((V325)));
	V348= cadr(cddddr((V325)));
	V349= car((V325));
	V350= caddr((V325));
	V351= cadddr((V325));
	V352= Cnil;
	(void)((VFUN_NARGS=4,(*(LnkLI267))((V349),cadr((V325)),Ct,VV[126])));
	base[1]= (V351);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T968;}
	goto T967;
	goto T968;
T968:;
	setq(VV[47],Ct);
	goto T967;
T967:;
	V353= list(3,(V347),(V349),(V351));
	V328= list(3,VV[15],(V349),(*(LnkLI276))(/* INLINE-ARGS */V353,VV[126]));
	if(((V350))==Cnil){
	goto T975;}
	{object V354;
	base[2]= VV[162];
	vs_top=(vs_base=base+2)+1;
	Lgensym();
	vs_top=sup;
	V354= vs_base[0];
	if(!(eql((V351),small_fixnum(1)))){
	goto T981;}
	if((cadr(cddddr((V325))))!=Cnil){
	goto T981;}
	base[1]= Cnil;
	goto T979;
	goto T981;
T981:;
	base[1]= list(3,(V347),VV[127],(V351));
	goto T979;
T979:;
	bds_bind(VV[39],base[1]);
	(void)((VFUN_NARGS=6,(*(LnkLI267))((V354),(V350),Cnil,VV[126],Cnil,Cnil)));
	if(((V348))==Cnil){
	goto T989;}
	if(!(((V347))==(VV[144]))){
	goto T992;}
	V355= VV[163];
	goto T987;
	goto T992;
T992:;
	V355= VV[164];
	goto T987;
	goto T989;
T989:;
	if(!(((V347))==(VV[144]))){
	goto T995;}
	V355= VV[165];
	goto T987;
	goto T995;
T995:;
	V355= VV[166];
	goto T987;
T987:;
	V327= list(3,V355,(V349),(V354));
	bds_unwind1;
	goto T958;}
	goto T975;
T975:;
	if((symbol_value(VV[47]))!=Cnil){
	goto T958;}
	if((symbol_value(VV[125]))==Cnil){
	goto T958;}
	base[1]= symbol_value(VV[54]);
	base[2]= VV[126];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	V352= vs_base[0];
	if(((V352))==Cnil){
	goto T958;}
	if(!(type_of((V352))==t_cons)){
	goto T1008;}
	if(!((car((V352)))==(VV[122]))){
	goto T1008;}
	V352= cadr((V352));
	goto T1008;
T1008:;
	base[1]= (V352);
	base[2]= VV[167];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T958;}
	base[1]= (V351);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1017;}
	goto T1016;
	goto T1017;
T1017:;
	base[1]= VV[168];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T1016;
T1016:;
	{object V356;
	if(!(((V347))==(VV[144]))){
	goto T1024;}
	if((V351)!=Cnil){
	V358= (V351);
	goto T1026;}
	V358= small_fixnum(1);
	goto T1026;
T1026:;
	V357= list(3,VV[164],(V349),number_minus(VV[169],V358));
	goto T1022;
	goto T1024;
T1024:;
	if((V351)!=Cnil){
	V359= (V351);
	goto T1027;}
	V359= small_fixnum(1);
	goto T1027;
T1027:;
	V357= list(3,VV[163],(V349),number_plus(VV[170],V359));
	goto T1022;
T1022:;
	V356= list(3,VV[80],V357,VV[171]);
	setq(VV[42],make_cons((V356),symbol_value(VV[42])));}}
	goto T958;
T958:;
	if((V327)==Cnil){
	goto T1029;}
	{object V360;
	base[2]= list(3,VV[5],(V327),VV[172]);
	vs_top=(vs_base=base+2)+1;
	Lcopy_tree();
	vs_top=sup;
	V360= vs_base[0];
	setq(VV[41],make_cons((V360),symbol_value(VV[41])));}
	goto T1029;
T1029:;
	if((V328)==Cnil){
	{object V361 = Cnil;
	VMR39(V361)}}
	setq(VV[42],make_cons(V328,symbol_value(VV[42])));
	{object V363 = symbol_value(VV[42]);
	VMR39(V363)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-MACRO	*/

static object LI40(object V365,object V364,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB40 VMS40 VMV40
	{object V366;
	object V367;
	object V368;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V366= V365;
	V367= V364;
	narg = narg - 2;
	if (narg <= 0) goto T1034;
	else {
	V368= first;}
	--narg; goto T1035;
	goto T1034;
T1034:;
	V368= Cnil;
	goto T1035;
T1035:;
	{register object V369;
	V369= Cnil;
	{object V370;
	object V371;
	V370= get((V366),(V367),Cnil);
	V371= Cnil;
	{object V372= (V367);
	if((V372!= VV[160]))goto T1041;
	{object V373;
	V373= get((V366),VV[173],Cnil);{object V374;
	V374= cdr((V373));
	if(V374==Cnil)goto T1044;
	goto T1043;
	goto T1044;
T1044:;}
	base[0]= VV[174];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1043;
T1043:;
	V371= cdr((V373));
	goto T1040;}
	goto T1041;
T1041:;
	if((V372!= VV[92]))goto T1047;
	V371= get((V366),VV[175],Cnil);
	goto T1040;
	goto T1047;
T1047:;
	FEerror("The ECASE key value ~s is illegal.",1,V372);
	V371= Cnil;
	goto T1040;}
	goto T1040;
T1040:;
	{object V375;
	{register object x= VV[176],V376= (V371);
	while(!endp(V376))
	if(eql(x,V376->c.c_car)){
	goto T1051;
	}else V376=V376->c.c_cdr;
	goto T1050;}
	goto T1051;
T1051:;
	{object V377;
	V377= symbol_value(VV[34]);
	setq(VV[34],Cnil);
	V375= (V377);
	goto T1048;}
	goto T1050;
T1050:;
	{register object V378;
	register object V379;
	V378= make_fixnum((long)length((V371)));
	V379= small_fixnum(0);
	goto T1057;
T1057:;
	if(!(number_compare((V379),(V378))>=0)){
	goto T1058;}
	V375= nreverse((V369));
	goto T1048;
	goto T1058;
T1058:;
	{register object V380;
	V380= car(symbol_value(VV[34]));
	V369= make_cons((V380),(V369));}
	setq(VV[34],cdr(symbol_value(VV[34])));
	V379= one_plus((V379));
	goto T1057;}
	goto T1048;
T1048:;
	{object V382= (V367);
	if((V382!= VV[160]))goto T1072;
	base[0]= (V370);
	base[1]= (V368);
	{object V383;
	V383= (V375);
	 vs_top=base+2;
	 while(!endp(V383))
	 {vs_push(car(V383));V383=cdr(V383);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V381= vs_base[0];
	goto T1071;
	goto T1072;
T1072:;
	if((V382!= VV[92]))goto T1076;
	base[0]= (V370);
	{object V384;
	V384= (V375);
	 vs_top=base+1;
	 while(!endp(V384))
	 {vs_push(car(V384));V384=cdr(V384);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V381= vs_base[0];
	goto T1071;
	goto T1076;
T1076:;
	V381= Cnil;}
	goto T1071;
T1071:;
	setq(VV[34],append(V381,symbol_value(VV[34])));
	{object V385 = symbol_value(VV[34]);
	VMR40(V385)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-MAP	*/

static object LI41(V388,V389)

object V388;object V389;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	if(symbol_value(VV[53])==Cnil){
	goto T1079;}
	base[0]= VV[177];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1079;
T1079:;
	{object V390;
	object V391;
	V390= get((V388),VV[161],Cnil);
	V391= get((V388),VV[178],Cnil);
	if((V391)!=Cnil){
	goto T1083;}
	base[0]= VV[179];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1083;
T1083:;
	{register object x= VV[176],V392= (V391);
	while(!endp(V392))
	if(eql(x,V392->c.c_car)){
	goto T1087;
	}else V392=V392->c.c_cdr;
	goto T1085;}
	goto T1087;
T1087:;
	base[0]= VV[180];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1085;
T1085:;
	{register object V393;
	object V394;
	V393= Cnil;
	{object V395;
	register object V396;
	V397 = make_fixnum((long)length((V391)));
	V395= one_minus(V397);
	V396= small_fixnum(0);
	goto T1094;
T1094:;
	if(!(number_compare((V396),(V395))>=0)){
	goto T1095;}
	V394= nreverse((V393));
	goto T1090;
	goto T1095;
T1095:;
	{register object V398;
	V398= car(symbol_value(VV[34]));
	V393= make_cons((V398),(V393));}
	setq(VV[34],cdr(symbol_value(VV[34])));
	V396= one_plus((V396));
	goto T1094;}
	goto T1090;
T1090:;
	{register object V399;
	register object V400;
	V399= (*(LnkLI255))();
	V400= Cnil;
	goto T1111;
T1111:;
	if(((*(LnkLI10))((V399),VV[77]))!=Cnil){
	goto T1112;}
	(void)((*(LnkLI266))());
	if((V400)==Cnil){
	setq(VV[44],Cnil);
	goto T1108;}
	setq(VV[44],make_cons(VV[77],(V400)));
	goto T1108;
	goto T1112;
T1112:;
	{register object V401;
	V401= (*(LnkLI255))();
	V400= make_cons((V401),(V400));}
	V399= (*(LnkLI255))();
	goto T1111;}
	goto T1108;
T1108:;
	base[1]= (V390);
	base[2]= (V389);
	{object V402;
	V402= (V394);
	 vs_top=base+3;
	 while(!endp(V402))
	 {vs_push(car(V402));V402=cdr(V402);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	setq(VV[53],vs_base[0]);
	{object V403 = Cnil;
	VMR41(V403)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUBSTITUTE-SLOOP-BODY	*/

static object LI42(V405)

register object V405;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	if((symbol_value(VV[53]))==Cnil){
	goto T1128;}
	base[0]= make_cons(VV[16],(V405));
	base[1]= VV[181];
	base[2]= symbol_value(VV[53]);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V406= vs_base[0];
	V405= make_cons(V406,Cnil);
	if(symbol_value(VV[44])==Cnil){
	goto T1128;}
	base[0]= symbol_value(VV[44]);
	base[1]= VV[182];
	base[2]= (V405);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V405= vs_base[0];
	goto T1128;
T1128:;
	{object V407 = (V405);
	VMR42(V407)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEF-LOOP-INTERNAL	*/

static object LI43(object V411,object V410,object V409,object V408,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	bds_check;
	{register object V412;
	register object V413;
	object V414;
	object V415;
	object V416;
	object V417;
	object V418;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V412= V411;
	V413= V410;
	V414= V409;
	V415= V408;
	narg = narg - 4;
	if (narg <= 0) goto T1141;
	else {
	V416= first;}
	if (--narg <= 0) goto T1142;
	else {
	V417= va_arg(ap,object);}
	if (--narg <= 0) goto T1143;
	else {
	V418= va_arg(ap,object);}
	--narg; goto T1144;
	goto T1141;
T1141:;
	V416= Cnil;
	goto T1142;
T1142:;
	V417= Cnil;
	goto T1143;
T1143:;
	V418= Cnil;
	goto T1144;
T1144:;
	{object V419;
	bds_bind(VV[184],VV[183]);
	base[3]= Cnil;
	base[4]= VV[185];
	base[5]= (V412);
	base[6]= (V415);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lintern();
	vs_top=sup;
	V419= vs_base[0];
	if((V417)==Cnil){
	goto T1154;}
	V420 = make_fixnum((long)length((V413)));
	if(!(number_compare(V420,(V417))>=0)){
	goto T1155;}
	goto T1154;
	goto T1155;
T1155:;
	base[2]= VV[186];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1154;
T1154:;
	if((V418)==Cnil){
	goto T1158;}
	V421 = make_fixnum((long)length((V413)));
	if(!(number_compare(V421,(V418))<=0)){
	goto T1159;}
	goto T1158;
	goto T1159;
T1159:;
	base[2]= VV[187];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1158;
T1158:;
	V422= listA(4,VV[190],(V419),(V413),(V414));
	if((V416)==Cnil){
	V423= Cnil;
	goto T1162;}
	V424= list(3,VV[191],list(2,VV[9],(V412)),(V416));
	V423= make_cons(/* INLINE-ARGS */V424,Cnil);
	goto T1162;
T1162:;
	V425= list(2,VV[9],(V412));
	base[3]= Cnil;
	base[4]= VV[192];
	base[5]= (V415);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= VV[193];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V426= vs_base[0];
	V427= list(3,VV[7],/* INLINE-ARGS */V425,list(2,VV[9],V426));
	V428= list(3,VV[15],/* INLINE-ARGS */V427,list(2,VV[9],(V419)));
	V429= list(2,VV[9],(V412));
	base[3]= Cnil;
	base[4]= VV[194];
	base[5]= (V415);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= VV[193];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V430= vs_base[0];
	V431= list(3,VV[7],/* INLINE-ARGS */V429,list(2,VV[9],V430));
	V432= list(2,/* INLINE-ARGS */V428,list(3,VV[15],/* INLINE-ARGS */V431,list(2,VV[9],(V413))));
	{object V433 = listA(4,VV[188],VV[189],/* INLINE-ARGS */V422,append(V423,/* INLINE-ARGS */V432));
	bds_unwind1;
	VMR43(V433)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SUM-SLOOP-COLLECT	*/

static object LI44(V436,V437)

object V436;object V437;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	V438= list(3,VV[195],(V436),small_fixnum(0));
	{object V439 = list(4,VV[97],/* INLINE-ARGS */V438,VV[56],list(3,VV[195],(V436),list(3,VV[144],(V436),(V437))));
	VMR44(V439)}
	return Cnil;
}
/*	local entry for function LOGXOR-SLOOP-COLLECT	*/

static object LI45(V442,V443)

register object V442;object V443;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	V444= list(3,VV[15],(V442),small_fixnum(0));
	V445= list(3,VV[15],(V442),list(3,VV[196],(V442),(V443)));
	{object V446 = list(6,VV[97],/* INLINE-ARGS */V444,VV[56],/* INLINE-ARGS */V445,VV[77],list(3,VV[167],(V442),(V443)));
	VMR45(V446)}
	return Cnil;
}
/*	local entry for function MAXIMIZE-SLOOP-COLLECT	*/

static object LI46(V449,V450)

register object V449;object V450;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	V451= list(3,VV[195],(V449),Cnil);
	V452= list(3,VV[15],(V449),list(3,VV[198],(V449),(V450)));
	{object V453 = list(4,VV[97],/* INLINE-ARGS */V451,VV[56],list(4,VV[197],(V449),/* INLINE-ARGS */V452,list(3,VV[15],(V449),(V450))));
	VMR46(V453)}
	return Cnil;
}
/*	local entry for function MINIMIZE-SLOOP-COLLECT	*/

static object LI47(V456,V457)

register object V456;object V457;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	V458= list(3,VV[195],(V456),Cnil);
	V459= list(3,VV[15],(V456),list(3,VV[199],(V456),(V457)));
	{object V460 = list(4,VV[97],/* INLINE-ARGS */V458,VV[56],list(4,VV[197],(V456),/* INLINE-ARGS */V459,list(3,VV[15],(V456),(V457))));
	VMR47(V460)}
	return Cnil;
}
/*	local entry for function COUNT-SLOOP-COLLECT	*/

static object LI48(V463,V464)

object V463;object V464;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	V465= list(3,VV[195],(V463),small_fixnum(0));
	{object V466 = list(4,VV[97],/* INLINE-ARGS */V465,VV[56],list(3,VV[5],(V464),list(3,VV[15],(V463),list(2,VV[200],(V463)))));
	VMR48(V466)}
	return Cnil;
}
/*	local entry for function THEREIS-SLOOP-COLLECT	*/

static object LI49(V469,V470)

object V469;object V470;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V471 = list(2,VV[56],list(3,VV[197],(V470),list(2,VV[59],(V470))));
	VMR49(V471)}
	return Cnil;
}
/*	local entry for function ALWAYS-SLOOP-COLLECT	*/

static object LI50(V474,V475)

object V474;object V475;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	V476= list(3,VV[195],(V474),Ct);
	{object V477 = list(4,VV[97],/* INLINE-ARGS */V476,VV[56],list(3,VV[5],list(2,VV[140],(V475)),VV[201]));
	VMR50(V477)}
	return Cnil;
}
/*	local entry for function NEVER-SLOOP-COLLECT	*/

static object LI51(V480,V481)

object V480;object V481;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	V482= list(3,VV[195],(V480),Ct);
	{object V483 = list(4,VV[97],/* INLINE-ARGS */V482,VV[56],list(3,VV[5],(V481),VV[202]));
	VMR51(V483)}
	return Cnil;
}
/*	local entry for function AVERAGING-SLOOP-MACRO	*/

static object LI52(V485)

object V485;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]= VV[91];
	base[1]= VV[203];
	base[2]= VV[94];
	base[3]= VV[204];
	base[4]= VV[5];
	base[5]= VV[91];
	base[6]= VV[205];
	base[7]= VV[94];
	base[8]= small_fixnum(0);
	base[9]= VV[77];
	base[10]= VV[206];
	base[11]= VV[77];
	base[12]= VV[207];
	base[13]= VV[56];
	base[14]= list(3,VV[15],VV[203],list(3,VV[208],list(3,VV[144],VV[209],(V485)),VV[210]));
	base[15]= VV[211];
	vs_top=(vs_base=base+0)+16;
	LlistA();
	vs_top=sup;
	{object V486 = vs_base[0];
	VMR52(V486)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REPEAT-SLOOP-MACRO	*/

static object LI53(V488)

object V488;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V489;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V489= vs_base[0];
	{object V490 = list(4,VV[25],(V489),VV[157],(V488));
	VMR53(V490)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RETURN-SLOOP-MACRO	*/

static object LI54(V492)

register object V492;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if(!(type_of((V492))==t_cons)){
	goto T1196;}
	if(!((car((V492)))==(VV[21]))){
	goto T1196;}
	V493= cdr((V492));
	goto T1194;
	goto T1196;
T1196:;
	V493= make_cons((V492),Cnil);
	goto T1194;
T1194:;
	{object V494 = list(2,VV[56],make_cons(VV[59],V493));
	VMR54(V494)}
	return Cnil;
}
/*	local entry for function IN-TABLE-SLOOP-MAP	*/

static object LI55(V497,V498)

object V497;object V498;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V499 = list(3,VV[212],list(2,VV[213],listA(3,VV[214],(V497),VV[215])),(V498));
	VMR55(V499)}
	return Cnil;
}
/*	local entry for function IN-PACKAGE-SLOOP-MAP	*/

static object LI56(V502,V503)

object V502;object V503;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V504 = list(3,VV[216],list(2,(V502),list(2,VV[217],(V503))),VV[181]);
	VMR56(V504)}
	return Cnil;
}
/*	local entry for function IN-ARRAY-SLOOP-FOR	*/

static object LI57(object V506,object V505,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{object V507;
	object V508;
	object V509;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V507= V506;
	V508= V505;
	narg= narg - 2;
	V510 = list_vector_new(narg,first,ap);
	V509= V510;
	{object V511;
	object V512;
	object V513;
	V511= Cnil;
	V512= Cnil;
	V513= Cnil;
	if(!(type_of((V507))==t_cons||((V507))==Cnil)){
	goto T1202;}
	V511= car((V507));
	V512= cadr((V507));
	goto T1200;
	goto T1202;
T1202:;
	V511= (V507);
	base[0]= VV[218];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V512= vs_base[0];
	goto T1200;
T1200:;
	{object V514;
	{register object V515;
	register object V516;
	V515= (V509);
	V516= Cnil;
	goto T1213;
T1213:;
	{register object V517;
	V517= (*(LnkLI13))(car((V515)));
	{register object V518;
	V518= (*(LnkLI10))((V517),VV[219]);
	if(((V518))==Cnil){
	goto T1220;}
	goto T1216;
	goto T1220;
T1220:;
	if(((*(LnkLI10))((V517),VV[220]))==Cnil){
	goto T1223;}
	V513= Ct;
	goto T1216;
	goto T1223;
T1223:;
	{register object V519;
	V519= (*(LnkLI10))((V517),VV[147]);
	if(((V519))==Cnil){
	goto T1228;}
	goto T1216;
	goto T1228;
T1228:;
	base[0]= (V515);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V509= vs_base[0];
	V514= nreverse((V516));
	goto T1211;}}}
	goto T1216;
T1216:;
	{register object V520;
	V520= car((V515));
	V516= make_cons((V520),(V516));}
	{register object V521;
	V521= cadr((V515));
	V516= make_cons((V521),(V516));}
	V515= cddr((V515));
	goto T1213;}
	goto T1211;
T1211:;
	if((V513)!=Cnil){
	goto T1242;}
	V522= list(2,VV[157],list(2,VV[221],(V508)));
	V514= nconc(/* INLINE-ARGS */V522,(V514));
	goto T1242;
T1242:;
	V523= listA(5,VV[87],(V511),VV[56],list(3,VV[15],(V511),list(3,VV[222],(V508),(V512))),(V509));
	{object V524 = listA(3,VV[25],(V512),append((V514),/* INLINE-ARGS */V523));
	VMR57(V524)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function =-SLOOP-FOR	*/

static object LI58(V527,V528)

register object V527;object V528;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{object V529;
	V530= (*(LnkLI254))();
	V529= (*(LnkLI13))(/* INLINE-ARGS */V530);
	if(((*(LnkLI10))((V529),VV[223]))==Cnil){
	goto T1246;}
	(void)((*(LnkLI255))());
	V531= list(3,VV[139],(V527),(V528));
	{object V532 = list(6,VV[87],(V527),VV[97],/* INLINE-ARGS */V531,VV[89],list(3,VV[139],(V527),(*(LnkLI255))()));
	VMR58(V532)}
	goto T1246;
T1246:;
	{object V533 = list(4,VV[87],(V527),VV[56],list(3,VV[139],(V527),(V528)));
	VMR58(V533)}}
	return Cnil;
}
/*	local entry for function SLOOP-SLOOP-MACRO	*/

static object LI59(V535)

VOL object V535;
{	 VMB59 VMS59 VMV59
	bds_check;
	goto TTL;
TTL:;
	{object V536;
	V536= (*(LnkLI13))(car((V535)));
	{object V537;
	V537= (*(LnkLI10))((V536),VV[25]);
	if(((V537))==Cnil){
	goto T1253;}
	goto T1249;
	goto T1253;
T1253:;
	base[0]= VV[85];
	base[1]= (V536);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
	goto T1249;
T1249:;
	{VOL object V538;
	VOL object V539;
	VOL object V540;
	VOL object V541;
	VOL object V542;
	VOL object V543;
	VOL object V544;
	base[4]= VV[224];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V539= vs_base[0];
	bds_bind(VV[50],Cnil);
	bds_bind(VV[49],Cnil);
	bds_bind(VV[53],Cnil);
	V538= Cnil;
	V540= Cnil;
	V541= Cnil;
	V542= Cnil;
	V543= Cnil;
	V544= Cnil;
	bds_bind(VV[34],(V535));
	setq(VV[40],Ct);
	(void)((*(LnkLI255))());
	{object V545;
	object V546;
	V545= symbol_value(VV[46]);
	V546= (V540);
	V540= (V545);
	setq(VV[46],(V546));}
	{object V547;
	object V548;
	V547= symbol_value(VV[48]);
	V548= (V541);
	V541= (V547);
	setq(VV[48],(V548));}
	{object V549;
	object V550;
	V549= symbol_value(VV[43]);
	V550= (V542);
	V542= (V549);
	setq(VV[43],(V550));}
	{object V551;
	object V552;
	V551= symbol_value(VV[41]);
	V552= (V543);
	V543= (V551);
	setq(VV[41],(V552));}
	{object V553;
	object V554;
	V553= symbol_value(VV[42]);
	V554= (V544);
	V544= (V553);
	setq(VV[42],(V554));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI257))());
	{object V555;
	object V556;
	V555= symbol_value(VV[46]);
	V556= (V540);
	V540= (V555);
	setq(VV[46],(V556));}
	{object V557;
	object V558;
	V557= symbol_value(VV[48]);
	V558= (V541);
	V541= (V557);
	setq(VV[48],(V558));}
	{object V559;
	object V560;
	V559= symbol_value(VV[43]);
	V560= (V542);
	V542= (V559);
	setq(VV[43],(V560));}
	{object V561;
	object V562;
	V561= symbol_value(VV[41]);
	V562= (V543);
	V543= (V561);
	setq(VV[41],(V562));}
	{object V563;
	object V564;
	V563= symbol_value(VV[42]);
	V564= (V544);
	V544= (V563);
	setq(VV[42],(V564));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	goto T1339;
T1339:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1340;}
	goto T1337;
	goto T1340;
T1340:;
	{VOL object V565;
	frs_push(FRS_CATCH,VV[27]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V565= vs_base[0];
	goto T1345;}
	else{
	V566= (*(LnkLI251))();
	frs_pop();
	V565= V566;}
	goto T1345;
T1345:;
	if(((V565))==Cnil){
	goto T1348;}
	goto T1344;
	goto T1348;
T1348:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1351;}
	goto T1337;
	goto T1351;
T1351:;
	(void)(print((VV[34]->s.s_dbind),Cnil));
	{object V567;
	object V568;
	V567= symbol_value(VV[46]);
	V568= (V540);
	V540= (V567);
	setq(VV[46],(V568));}
	{object V569;
	object V570;
	V569= symbol_value(VV[48]);
	V570= (V541);
	V541= (V569);
	setq(VV[48],(V570));}
	{object V571;
	object V572;
	V571= symbol_value(VV[43]);
	V572= (V542);
	V542= (V571);
	setq(VV[43],(V572));}
	{object V573;
	object V574;
	V573= symbol_value(VV[41]);
	V574= (V543);
	V543= (V573);
	setq(VV[41],(V574));}
	{object V575;
	object V576;
	V575= symbol_value(VV[42]);
	V576= (V544);
	V544= (V575);
	setq(VV[42],(V576));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI261))());
	{object V577;
	object V578;
	V577= symbol_value(VV[46]);
	V578= (V540);
	V540= (V577);
	setq(VV[46],(V578));}
	{object V579;
	object V580;
	V579= symbol_value(VV[48]);
	V580= (V541);
	V541= (V579);
	setq(VV[48],(V580));}
	{object V581;
	object V582;
	V581= symbol_value(VV[43]);
	V582= (V542);
	V542= (V581);
	setq(VV[43],(V582));}
	{object V583;
	object V584;
	V583= symbol_value(VV[41]);
	V584= (V543);
	V543= (V583);
	setq(VV[41],(V584));}
	{object V585;
	object V586;
	V585= symbol_value(VV[42]);
	V586= (V544);
	V544= (V585);
	setq(VV[42],(V586));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)(print((VV[34]->s.s_dbind),Cnil));}
	goto T1344;
T1344:;
	goto T1339;
	goto T1337;
T1337:;
	{object V587;
	object V588;
	V587= symbol_value(VV[46]);
	V588= (V540);
	V540= (V587);
	setq(VV[46],(V588));}
	{object V589;
	object V590;
	V589= symbol_value(VV[48]);
	V590= (V541);
	V541= (V589);
	setq(VV[48],(V590));}
	{object V591;
	object V592;
	V591= symbol_value(VV[43]);
	V592= (V542);
	V542= (V591);
	setq(VV[43],(V592));}
	{object V593;
	object V594;
	V593= symbol_value(VV[41]);
	V594= (V543);
	V543= (V593);
	setq(VV[41],(V594));}
	{object V595;
	object V596;
	V595= symbol_value(VV[42]);
	V596= (V544);
	V544= (V595);
	setq(VV[42],(V596));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	V538= nreverse((VV[49]->s.s_dbind));
	if((VV[53]->s.s_dbind)==Cnil){
	goto T1470;}
	V538= (*(LnkLI252))((V538));
	goto T1470;
T1470:;
	{object V597;
	V598= list(3,VV[66],Cnil,list(3,VV[61],VV[225],list(2,VV[9],(V539))));
	V599= make_cons(/* INLINE-ARGS */V598,Cnil);
	base[4]= nreverse(symbol_value(VV[48]));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1476;}
	base[5]= Cnil;
	goto T1475;
	goto T1476;
T1476:;
	base[5]= VV[226];
	goto T1475;
T1475:;
	base[6]= nreverse(symbol_value(VV[41]));
	base[7]= (V538);
	base[8]= nreverse(symbol_value(VV[42]));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1482;}
	base[9]= Cnil;
	goto T1481;
	goto T1482;
T1482:;
	base[9]= VV[227];
	goto T1481;
T1481:;
	V601= nreverse(symbol_value(VV[43]));
	base[10]= make_cons((V539),/* INLINE-ARGS */V601);
	vs_top=(vs_base=base+4)+7;
	Lappend();
	vs_top=sup;
	V600= vs_base[0];
	V597= list(3,VV[71],/* INLINE-ARGS */V599,make_cons(VV[73],V600));
	{object V602;
	object V603;
	V602= symbol_value(VV[46]);
	V603= car((V602));
	goto T1489;
T1489:;
	if(!(endp_prop((V602)))){
	goto T1490;}
	goto T1485;
	goto T1490;
T1490:;
	V604= (*(LnkLI253))((V603));
	if((cdr((V603)))!=Cnil){
	goto T1497;}
	V605= Cnil;
	goto T1496;
	goto T1497;
T1497:;
	V606= make_cons(VV[77],cdr((V603)));
	V605= make_cons(/* INLINE-ARGS */V606,Cnil);
	goto T1496;
T1496:;
	V607= make_cons((V597),Cnil);
	V597= listA(3,VV[12],/* INLINE-ARGS */V604,append(V605,/* INLINE-ARGS */V607));
	V602= cdr((V602));
	V603= car((V602));
	goto T1489;}
	goto T1485;
T1485:;
	{object V608;
	object V609;
	V608= symbol_value(VV[46]);
	V609= (V540);
	V540= (V608);
	setq(VV[46],(V609));}
	{object V610;
	object V611;
	V610= symbol_value(VV[48]);
	V611= (V541);
	V541= (V610);
	setq(VV[48],(V611));}
	{object V612;
	object V613;
	V612= symbol_value(VV[43]);
	V613= (V542);
	V542= (V612);
	setq(VV[43],(V613));}
	{object V614;
	object V615;
	V614= symbol_value(VV[41]);
	V615= (V543);
	V543= (V614);
	setq(VV[41],(V615));}
	{object V616;
	object V617;
	V616= symbol_value(VV[42]);
	V617= (V544);
	V544= (V616);
	setq(VV[42],(V617));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	{object V618 = list(2,VV[56],(V597));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR59(V618)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function IN-CAREFULLY-SLOOP-FOR	*/

static object LI60(V621,V622)

object V621;object V622;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	{register object V623;
	base[0]= VV[228];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V623= vs_base[0];
	base[0]= VV[87];
	base[1]= (V623);
	base[2]= VV[5];
	base[3]= VV[87];
	base[4]= (V621);
	base[5]= VV[97];
	base[6]= list(3,VV[15],(V623),(V622));
	base[7]= VV[56];
	base[8]= list(3,VV[139],(V621),list(2,VV[17],(V623)));
	base[9]= VV[90];
	base[10]= list(3,VV[5],list(2,VV[229],(V623)),VV[230]);
	base[11]= VV[89];
	base[12]= list(3,VV[15],(V623),list(2,VV[18],(V623)));
	vs_top=(vs_base=base+0)+13;
	Llist();
	vs_top=sup;
	{object V624 = vs_base[0];
	VMR60(V624)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-USE-SLOOP-FOR	*/

static object LI61(V629,V630,V631,V632)

object V629;object V630;object V631;object V632;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;{object V633;
	V633= (*(LnkLI10))((V631),VV[223]);
	if(V633==Cnil)goto T1557;
	goto T1556;
	goto T1557;
T1557:;}
	base[0]= VV[231];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1556;
T1556:;
	V634= list(3,VV[139],(V629),(V630));
	{object V635 = list(6,VV[87],(V629),VV[97],/* INLINE-ARGS */V634,VV[89],list(3,VV[139],(V629),(V632)));
	VMR61(V635)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-SLOOP-FOR	*/

static object LI62(V640,V641,V642,V643)

register object V640;object V641;object V642;object V643;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;{object V644;
	V644= (*(LnkLI10))((V642),VV[223]);
	if(V644==Cnil)goto T1561;
	goto T1560;
	goto T1561;
T1561:;}
	base[0]= VV[232];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1560;
T1560:;
	if((symbol_value(VV[42]))!=Cnil){
	goto T1565;}
	V645= list(3,VV[139],(V640),(V641));
	{object V646 = list(6,VV[87],(V640),VV[97],/* INLINE-ARGS */V645,VV[89],list(3,VV[139],(V640),(V643)));
	VMR62(V646)}
	goto T1565;
T1565:;
	{object V647;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V647= vs_base[0];
	V648= list(2,(V647),list(3,VV[139],(V640),(V643)));
	V649= list(3,VV[14],/* INLINE-ARGS */V648,list(2,Ct,list(3,VV[139],(V640),(V641))));
	{object V650 = list(8,VV[87],(V640),VV[87],(V647),VV[56],/* INLINE-ARGS */V649,VV[89],list(3,VV[139],(V647),Ct));
	VMR62(V650)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-IN-ORDERED-LIST	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_reserve(VM63);
	{register object V651;
	object V652;
	register object V653;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V651=(base[0]);
	V652=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1568;}
	V653=(base[2]);
	vs_top=sup;
	goto T1569;
	goto T1568;
T1568:;
	V653= symbol_value(VV[233]);
	goto T1569;
T1569:;
	{register object V654;
	V654= Cnil;
	{register object V655;
	V655= (V652);
	goto T1573;
T1573:;
	if(((V655))!=Cnil){
	goto T1574;}
	base[3]= (V654);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1574;
T1574:;
	if(!(eql(car((V655)),(V651)))){
	goto T1582;}
	base[3]= (V655);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1582;
T1582:;
	base[3]= (V651);
	base[4]= car((V655));
	vs_top=(vs_base=base+3)+2;
	super_funcall_no_event((V653));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1580;}
	base[3]= (V654);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1580;
T1580:;
	V654= (V655);
	V655= cdr((V655));
	goto T1573;}}
	}
}
/*	local entry for function COLLATE-SLOOP-COLLECT	*/

static object LI64(V658,V659)

object V658;object V659;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	V660= list(3,VV[236],(V659),(V658));
	V661= list(2,VV[238],list(3,VV[15],VV[239],list(3,VV[119],(V659),VV[240])));
	{object V662 = list(2,VV[56],list(4,VV[234],VV[235],/* INLINE-ARGS */V660,list(3,VV[104],VV[237],list(3,VV[14],/* INLINE-ARGS */V661,list(2,Ct,list(3,VV[15],(V658),list(3,VV[119],(V659),(V658))))))));
	VMR64(V662)}
	return Cnil;
}
/*	local entry for function IN-FRINGE-SLOOP-MAP	*/

static object LI65(V665,V666)

register object V665;object V666;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V667;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V667= vs_base[0];
	V668= make_cons((V665),Cnil);
	V669= list(2,(V667),VV[244]);
	V670= make_cons(/* INLINE-ARGS */V669,Cnil);
	V671= list(2,VV[140],(V667));
	V672= make_cons(/* INLINE-ARGS */V671,Cnil);
	V673= list(2,VV[229],(V667));
	V674= list(3,VV[15],(V665),(V667));
	V675= list(3,/* INLINE-ARGS */V673,/* INLINE-ARGS */V674,list(3,VV[15],(V667),Cnil));
	V676= list(3,VV[15],(V665),list(2,VV[17],(V667)));
	V677= list(3,VV[14],/* INLINE-ARGS */V675,list(3,Ct,/* INLINE-ARGS */V676,list(3,VV[15],(V667),list(2,VV[18],(V667)))));
	V678= list(2,VV[140],(V665));
	V679= make_cons(/* INLINE-ARGS */V678,Cnil);
	V680= list(2,VV[229],(V665));
	V681= make_cons(/* INLINE-ARGS */V680,VV[245]);
	V682= list(3,VV[242],VV[243],list(5,VV[56],/* INLINE-ARGS */V670,/* INLINE-ARGS */V672,/* INLINE-ARGS */V677,list(4,VV[14],/* INLINE-ARGS */V679,/* INLINE-ARGS */V681,list(2,Ct,list(2,VV[242],(V665))))));
	V683= make_cons(/* INLINE-ARGS */V682,Cnil);
	{object V684 = list(3,VV[12],/* INLINE-ARGS */V668,list(3,VV[241],/* INLINE-ARGS */V683,list(2,VV[242],(V666))));
	VMR65(V684)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* SUBTYPEP */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)(void *)&LnkLI276,2,first,ap);va_end(ap);return V1;} /* THE-TYPE */
static object  LnkTLI275(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[275],(void **)(void *)&LnkLI275,2,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-MAP */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[274],(void **)(void *)&LnkLI274,first,ap);va_end(ap);return V1;} /* ADD-FROM-DATA */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[273],(void **)(void *)&LnkLI273,first,ap);va_end(ap);return V1;} /* LOOP-DECLARE-BINDING */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,2,first,ap);va_end(ap);return V1;} /* MAKE-VALUE */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* TYPEP */
static object  LnkTLI271(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[271],(void **)(void *)&LnkLI271,3,first,ap);va_end(ap);return V1;} /* LOOP-PARSE-ADDITIONAL-COLLECTIONS */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,1,first,ap);va_end(ap);return V1;} /* POINTER-FOR-COLLECT */
static object  LnkTLI269(){return call_proc0(VV[269],(void **)(void *)&LnkLI269);} /* PARSE-ONE-WHEN-CLAUSE */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[268],(void **)(void *)&LnkLI268,first,ap);va_end(ap);return V1;} /* LOOP-ADD-TEMPS */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[267],(void **)(void *)&LnkLI267,first,ap);va_end(ap);return V1;} /* LOOP-ADD-BINDING */
static object  LnkTLI266(){return call_proc0(VV[266],(void **)(void *)&LnkLI266);} /* LOOP-UN-POP */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[265],(void **)(void *)&LnkLI265,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-MACRO */
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[264],(void **)(void *)&LnkLI264,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-DECLARE */
static object  LnkTLI263(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[263],(void **)(void *)&LnkLI263,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-WITH */
static object  LnkTLI262(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[262],(void **)(void *)&LnkLI262,1,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-INITIALLY */
static object  LnkTLI261(){return call_proc0(VV[261],(void **)(void *)&LnkLI261);} /* PARSE-LOOP-COLLECT */
static object  LnkTLI260(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[260],(void **)(void *)&LnkLI260,1,first,ap);va_end(ap);return V1;} /* LOOP-COLLECT-KEYWORD-P */
static object  LnkTLI259(){return call_proc0(VV[259],(void **)(void *)&LnkLI259);} /* PARSE-LOOP-WHEN */
static object  LnkTLI258(){return call_proc0(VV[258],(void **)(void *)&LnkLI258);} /* PARSE-LOOP-DO */
static object  LnkTLI257(){return call_proc0(VV[257],(void **)(void *)&LnkLI257);} /* PARSE-LOOP-FOR */
static object  LnkTLI256(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[256],(void **)(void *)&LnkLI256,1,first,ap);va_end(ap);return V1;} /* PARSE-NO-BODY */
static object  LnkTLI255(){return call_proc0(VV[255],(void **)(void *)&LnkLI255);} /* LOOP-POP */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[10],(void **)(void *)&LnkLI10,2,first,ap);va_end(ap);return V1;} /* L-EQUAL */
static object  LnkTLI254(){return call_proc0(VV[254],(void **)(void *)&LnkLI254);} /* LOOP-PEEK */
static object  LnkTLI13(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[13],(void **)(void *)&LnkLI13,1,first,ap);va_end(ap);return V1;} /* TRANSLATE-NAME */
static object  LnkTLI253(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[253],(void **)(void *)&LnkLI253,1,first,ap);va_end(ap);return V1;} /* LOOP-LET-BINDINGS */
static object  LnkTLI252(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[252],(void **)(void *)&LnkLI252,1,first,ap);va_end(ap);return V1;} /* SUBSTITUTE-SLOOP-BODY */
static object  LnkTLI251(){return call_proc0(VV[251],(void **)(void *)&LnkLI251);} /* PARSE-LOOP1 */
static object  LnkTLI249(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[249],(void **)(void *)&LnkLI249,first,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[248],(void **)(void *)&LnkLI248,first,ap);va_end(ap);return V1;} /* DEF-LOOP-INTERNAL */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[247],(void **)(void *)&LnkLI247,1,first,ap);va_end(ap);return V1;} /* PARSE-LOOP */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[246],(void **)(void *)&LnkLI246,2,first,ap);va_end(ap);return V1;} /* DESETQ1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

