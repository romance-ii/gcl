
#include "cmpinclude.h"
#include "sloop.h"
init_sloop(){do_init(VV);}
/*	macro definition for LCASE	*/

static L1()
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
T3:;
	if(((V3))!=Cnil){
	goto T5;}
	if(((V5))!=Cnil){
	goto T4;}
T5:;
	goto T1;
T4:;
	V6= car((V5));
	if(!(eql(car((V6)),Ct))){
	goto T16;}
	V3= Ct;
	V7= (V6);
	goto T14;
T16:;
	if(!(eql(car((V6)),VV[0]))){
	goto T21;}
	V7= make_cons(VV[1],cdr((V6)));
	goto T14;
T21:;
	if(!(eql(car((V6)),VV[2]))){
	goto T24;}
	V7= make_cons(VV[3],cdr((V6)));
	goto T14;
T24:;
	{register object x= car((V6)),V8= VV[4];
	while(!endp(V8))
	if(eql(x,V8->c.c_car)){
	V4= V8;
	goto T29;
	}else V8=V8->c.c_cdr;
	V4= Cnil;}
T29:;
	if(((V4))==Cnil){
	goto T27;}
	V9= list(3,VV[5],VV[6],list(3,VV[7],VV[8],car((V4))));
	V7= make_cons(/* INLINE-ARGS */V9,cdr((V6)));
	goto T14;
T27:;
	V10= list(3,VV[9],VV[8],list(2,VV[10],car((V6))));
	V7= make_cons(/* INLINE-ARGS */V10,cdr((V6)));
T14:;
	V2= make_cons(V7,(V2));
	V5= cdr((V5));
	goto T3;}
T1:;
	if((V3)!=Cnil){
	goto T33;}
	V2= make_cons(VV[11],(V2));
T33:;
	V11= list(2,VV[8],list(2,VV[13],base[2]));
	V12= make_cons(/* INLINE-ARGS */V11,Cnil);
	V13= nreverse((V2));
	base[4]= list(3,VV[12],/* INLINE-ARGS */V12,make_cons(VV[14],/* INLINE-ARGS */V13));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function DESETQ1	*/

static object LI2(V16,V17)

register object V16;register object V17;
{	 VMB2 VMS2 VMV2
TTL:;
	if(!(type_of((V16))==t_symbol)){
	goto T36;}
	if((V16)==Cnil){
	{object V18 = Cnil;
	VMR2(V18)}}
	{object V19 = list(3,VV[15],(V16),(V17));
	VMR2(V19)}
T36:;
	if(!(type_of((V16))==t_cons)){
	goto T39;}
	V20= car((V16));
	V21= list(2,VV[17],(V17));
	V22= (*(LnkLI246))(/* INLINE-ARGS */V20,/* INLINE-ARGS */V21);
	if(!(type_of(cdr((V16)))==t_cons)){
	goto T43;}
	V24= cdr((V16));
	V25= list(2,VV[18],(V17));
	V26= (*(LnkLI246))(/* INLINE-ARGS */V24,/* INLINE-ARGS */V25);
	V23= make_cons(/* INLINE-ARGS */V26,Cnil);
	goto T41;
T43:;
	if((cdr((V16)))!=Cnil){
	goto T45;}
	V23= Cnil;
	goto T41;
T45:;
	V27= cdr((V16));
	V28= list(3,VV[15],/* INLINE-ARGS */V27,list(2,VV[18],(V17)));
	V23= make_cons(/* INLINE-ARGS */V28,Cnil);
T41:;
	{object V29 = listA(3,VV[16],/* INLINE-ARGS */V22,V23);
	VMR2(V29)}
T39:;
	base[0]= VV[19];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V30 = vs_base[0];
	VMR2(V30)}
}
/*	macro definition for DESETQ	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V31=base[0]->c.c_cdr;
	if(endp(V31))invalid_macro_call();
	base[2]= (V31->c.c_car);
	V31=V31->c.c_cdr;
	if(endp(V31))invalid_macro_call();
	base[3]= (V31->c.c_car);
	V31=V31->c.c_cdr;
	if(!endp(V31))invalid_macro_call();}
	if(!(type_of(base[3])!=t_cons)){
	goto T49;}
	base[4]= (*(LnkLI246))(base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
T49:;
	{object V32;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V32= vs_base[0];
	V33= list(2,(V32),base[3]);
	V34= make_cons(/* INLINE-ARGS */V33,Cnil);
	base[4]= list(3,VV[12],/* INLINE-ARGS */V34,(*(LnkLI246))(base[2],(V32)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-RETURN	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V35=base[0]->c.c_cdr;
	base[2]= V35;}
	if(!((length(base[2]))<=(1))){
	goto T53;}
	base[3]= make_cons(VV[20],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
T53:;
	base[3]= list(2,VV[20],make_cons(VV[21],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LOOP-FINISH	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V36=base[0]->c.c_cdr;
	if(!endp(V36))invalid_macro_call();}
	base[2]= VV[22];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for LOCAL-FINISH	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V37=base[0]->c.c_cdr;
	if(!endp(V37))invalid_macro_call();}
	base[2]= VV[23];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for SLOOP	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V38=base[0]->c.c_cdr;
	base[2]= V38;}
	base[3]= (*(LnkLI247))(base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DEF-LOOP-MAP	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V39=base[0]->c.c_cdr;
	if(endp(V39))invalid_macro_call();
	base[2]= (V39->c.c_car);
	V39=V39->c.c_cdr;
	if(endp(V39))invalid_macro_call();
	base[3]= (V39->c.c_car);
	V39=V39->c.c_cdr;
	base[4]= V39;}
	base[5]= (VFUN_NARGS=4,(*(LnkLI248))(base[2],base[3],base[4],VV[24]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-FOR	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
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
	base[5]= (VFUN_NARGS=6,(*(LnkLI248))(base[2],base[3],base[4],VV[25],Cnil,small_fixnum(1)));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-MACRO	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
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
	base[5]= (VFUN_NARGS=4,(*(LnkLI248))(base[2],base[3],base[4],VV[26]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-COLLECT	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
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
	base[5]= (VFUN_NARGS=7,(*(LnkLI248))(base[2],base[3],base[4],VV[27],VV[28],small_fixnum(2),small_fixnum(2)));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for SLOOP-SWAP	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	if(!endp(V43))invalid_macro_call();}
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function L-EQUAL	*/

static object LI13(V46,V47)

object V46;register object V47;
{	 VMB13 VMS13 VMV13
TTL:;
	if(type_of((V46))==t_symbol){
	goto T55;}
	{object V48 = Cnil;
	VMR13(V48)}
T55:;
	if(!(type_of((V47))==t_symbol)){
	goto T58;}
	V49= symbol_name((V46));
	V50= symbol_name((V47));
	{object V51 = (equal(/* INLINE-ARGS */V49,/* INLINE-ARGS */V50)?Ct:Cnil);
	VMR13(V51)}
T58:;
	if(!(type_of((V47))==t_cons||((V47))==Cnil)){
	goto T61;}
	base[0]= (V46);
	base[1]= (V47);
	base[2]= VV[30];
	base[3]= VV[9];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	{object V52 = vs_base[0];
	VMR13(V52)}
T61:;
	{object V53 = Cnil;
	VMR13(V53)}
}
/*	local entry for function LOOP-COLLECT-KEYWORD-P	*/

static object LI14(V55)

object V55;
{	 VMB14 VMS14 VMV14
TTL:;{object V56;
	base[0]= (V55);
	base[1]= VV[31];
	base[2]= VV[30];
	base[3]= VV[9];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V56= vs_base[0];
	if(V56==Cnil)goto T67;
	{object V57 = V56;
	VMR14(V57)}
T67:;}
	{object V58 = (VFUN_NARGS=4,(*(LnkLI249))((V55),symbol_value(VV[28]),VV[30],VV[9]));
	VMR14(V58)}
}
/*	local entry for function TRANSLATE-NAME	*/

static object LI15(V60)

object V60;
{	 VMB15 VMS15 VMV15
TTL:;
	{object V61;
	if(type_of((V60))==t_symbol){
	goto T74;}
	V61= Cnil;
	goto T73;
T74:;
	base[0]= (V60);
	base[1]= symbol_value(VV[32]);
	base[2]= VV[30];
	base[3]= VV[9];
	base[4]= VV[33];
	base[5]= VV[17];
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V62= vs_base[0];
	V61= cdar(V62);
T73:;
	if(((V61))==Cnil){
	goto T84;}
	{object V63 = (V61);
	VMR15(V63)}
T84:;
	{object V64 = (V60);
	VMR15(V64)}}
}
/*	local entry for function LOOP-POP	*/

static object LI16()

{	 VMB16 VMS16 VMV16
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T87;}
	{object V65;
	V65= car(symbol_value(VV[34]));
	setq(VV[34],cdr(symbol_value(VV[34])));
	setq(VV[35],(V65));}
	{object V66 = symbol_value(VV[35]);
	VMR16(V66)}
T87:;
	setq(VV[35],VV[36]);
	{object V67 = Cnil;
	VMR16(V67)}
}
/*	local entry for function LOOP-UN-POP	*/

static object LI17()

{	 VMB17 VMS17 VMV17
TTL:;
	{object V68= symbol_value(VV[35]);
	if((V68!= VV[36]))goto T95;
	{object V69 = Cnil;
	VMR17(V69)}
T95:;
	if((V68!= VV[250]))goto T96;
	base[0]= VV[37];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V70 = vs_base[0];
	VMR17(V70)}
T96:;
	setq(VV[34],make_cons(symbol_value(VV[35]),symbol_value(VV[34])));
	setq(VV[35],VV[38]);
	{object V71 = VV[38];
	VMR17(V71)}}
}
/*	local entry for function LOOP-PEEK	*/

static object LI18()

{	 VMB18 VMS18 VMV18
TTL:;
	{object V72 = car(symbol_value(VV[34]));
	VMR18(V72)}
}
/*	local entry for function LOOP-LET-BINDINGS	*/

static object LI19(V74)

register object V74;
{	 VMB19 VMS19 VMV19
TTL:;
	{register object V75;
	V75= car((V74));
T103:;
	if(((V75))!=Cnil){
	goto T104;}
	{object V76 = nreverse(car((V74)));
	VMR19(V76)}
T104:;{object V77;
	V77= cdar((V75));
	if(V77==Cnil)goto T109;
	goto T108;
T109:;}
	{register object V78;
	register object V79;
	V78= (V75);
	V79= caar((V75));
	if(type_of((V78))!=t_cons)FEwrong_type_argument(Scons,(V78));
	((V78))->c.c_car = (V79);}
T108:;
	V75= cdr((V75));
	goto T103;}
}
/*	local entry for function PARSE-LOOP	*/

static object LI20(V81)

object V81;
{	 VMB20 VMS20 VMV20
	bds_check;
TTL:;
	{register object V82;
	V82= Cnil;
	{register object V83;
	register object V84;
	bds_bind(VV[34],(V81));
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
	V83= Cnil;
	V84= VV[55];
	if(!(type_of(car((VV[34]->s.s_dbind)))==t_symbol)){
	goto T119;}
	if((car((VV[34]->s.s_dbind)))!=Cnil){
	goto T118;}
T119:;
	(VV[34]->s.s_dbind)= make_cons(VV[56],(VV[34]->s.s_dbind));
T118:;
	(void)((*(LnkLI251))());
	if(((VV[53]->s.s_dbind))!=Cnil){
	goto T126;}
	if(((VV[40]->s.s_dbind))==Cnil){
	goto T125;}
T126:;
	if((VV[51]->s.s_dbind)!=Cnil){
	goto T130;}
	base[18]= VV[57];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	(VV[51]->s.s_dbind)= vs_base[0];
T130:;
	if(eql(VV[55],(V84))){
	goto T133;}
	goto T125;
T133:;
	base[18]= VV[58];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	V84= vs_base[0];
T125:;
	V85= list(3,VV[59],VV[60],list(4,VV[61],VV[62],list(2,VV[10],(VV[51]->s.s_dbind)),VV[63]));
	V83= make_cons(/* INLINE-ARGS */V85,(V83));
	V86= list(3,VV[64],Cnil,list(3,VV[61],VV[65],list(2,VV[10],(V84))));
	V83= make_cons(/* INLINE-ARGS */V86,(V83));
	V87= list(3,VV[66],Cnil,list(3,VV[61],VV[67],list(2,VV[10],(V84))));
	V83= make_cons(/* INLINE-ARGS */V87,(V83));
	if((VV[45]->s.s_dbind)==Cnil){
	goto T143;}
	V88= list(3,VV[68],(VV[51]->s.s_dbind),(VV[45]->s.s_dbind));
	(VV[43]->s.s_dbind)= make_cons(/* INLINE-ARGS */V88,(VV[43]->s.s_dbind));
T143:;
	base[18]= (VV[41]->s.s_dbind);
	base[19]= nreverse((VV[49]->s.s_dbind));
	base[20]= nreverse((VV[42]->s.s_dbind));
	vs_top=(vs_base=base+18)+3;
	Lappend();
	vs_top=sup;
	V82= vs_base[0];
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T152;}
	V82= (*(LnkLI252))((V82));
	goto T150;
T152:;
	V89= append((V82),VV[70]);
	V82= make_cons(VV[69],/* INLINE-ARGS */V89);
T150:;
	{register object V90;{object V91;
	V91= (VV[51]->s.s_dbind);
	base[18]= nreverse((VV[48]->s.s_dbind));
	base[19]= (V82);
	base[20]= make_cons((V84),Cnil);
	base[21]= nreverse((VV[43]->s.s_dbind));
	base[22]= VV[74];
	vs_top=(vs_base=base+18)+5;
	Lappend();
	vs_top=sup;
	V92= vs_base[0];
	V90= list(3,VV[71],(V83),list(3,VV[72],V91,make_cons(VV[73],V92)));}
	if(eql(symbol_value(VV[75]),symbol_value(VV[76]))){
	goto T163;}
	base[18]= (V90);
	vs_top=(vs_base=base+18)+1;
	Lcopy_tree();
	vs_top=sup;
	V90= vs_base[0];
T163:;
	{register object V93;
	register object V94;
	V93= (VV[46]->s.s_dbind);
	V94= car((V93));
T172:;
	if(!(endp((V93)))){
	goto T173;}
	goto T168;
T173:;
	V95= (*(LnkLI253))((V94));
	if((cdr((V94)))!=Cnil){
	goto T180;}
	V96= Cnil;
	goto T179;
T180:;
	V97= make_cons(VV[77],cdr((V94)));
	V96= make_cons(/* INLINE-ARGS */V97,Cnil);
T179:;
	V98= make_cons((V90),Cnil);
	V90= listA(3,VV[12],/* INLINE-ARGS */V95,append(V96,/* INLINE-ARGS */V98));
	V93= cdr((V93));
	V94= car((V93));
	goto T172;}
T168:;
	{object V99 = (V90);
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
	VMR20(V99)}}}}
}
/*	local entry for function PARSE-LOOP1	*/

static object LI21()

{	 VMB21 VMS21 VMV21
TTL:;
	{object V100;
	V101= (*(LnkLI254))();
	V100= (*(LnkLI13))(/* INLINE-ARGS */V101);
	if(((*(LnkLI9))((V100),VV[78]))==Cnil){
	goto T187;}
	(void)((*(LnkLI255))());
	setq(VV[51],(*(LnkLI255))());}
T187:;
	{register object V102;
	V102= (*(LnkLI255))();
T195:;
	if(((V102))!=Cnil){
	goto T196;}
	if((symbol_value(VV[34]))!=Cnil){
	goto T196;}
	{object V103 = Cnil;
	VMR21(V103)}
T196:;
	{register object V104;
	V104= (*(LnkLI13))((V102));
	{register object V105;
	V105= (*(LnkLI256))((V104));
	if(((V105))==Cnil){
	goto T206;}
	goto T202;
T206:;
	if(((*(LnkLI9))((V104),VV[25]))==Cnil){
	goto T209;}
	(void)((*(LnkLI257))());
	goto T202;
T209:;
	if(((*(LnkLI9))((V104),VV[79]))==Cnil){
	goto T212;}
	V106= (*(LnkLI255))();
	V107= list(3,VV[80],/* INLINE-ARGS */V106,VV[81]);
	setq(VV[49],make_cons(/* INLINE-ARGS */V107,symbol_value(VV[49])));
	goto T202;
T212:;
	if(((*(LnkLI9))((V104),VV[82]))==Cnil){
	goto T216;}
	V108= (*(LnkLI255))();
	V109= list(3,VV[5],/* INLINE-ARGS */V108,VV[83]);
	setq(VV[49],make_cons(/* INLINE-ARGS */V109,symbol_value(VV[49])));
	goto T202;
T216:;
	if(((*(LnkLI9))((V104),VV[56]))==Cnil){
	goto T220;}
	V110= (*(LnkLI258))();
	setq(VV[49],append(/* INLINE-ARGS */V110,symbol_value(VV[49])));
	goto T202;
T220:;
	if(((*(LnkLI9))((V104),VV[84]))==Cnil){
	goto T224;}
	V111= (*(LnkLI259))();
	setq(VV[49],append(/* INLINE-ARGS */V111,symbol_value(VV[49])));
	goto T202;
T224:;
	if(((*(LnkLI260))((V104)))==Cnil){
	goto T228;}
	V112= (*(LnkLI261))();
	setq(VV[49],append(/* INLINE-ARGS */V112,symbol_value(VV[49])));
	goto T202;
T228:;
	base[0]= VV[85];
	base[1]= (V104);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
T202:;
	V102= (*(LnkLI255))();
	goto T195;}
}
/*	local entry for function PARSE-NO-BODY	*/

static object LI22(V114)

object V114;
{	 VMB22 VMS22 VMV22
TTL:;
	{register object V115;
	register object V116;
	V115= Ct;
	V116= Ct;
	{register object V117;
	V117= (V114);
T240:;
	if(((V116))!=Cnil){
	goto T241;}
	if((symbol_value(VV[34]))!=Cnil){
	goto T241;}
	goto T238;
T241:;
	{register object V118;
	V118= (*(LnkLI13))((V117));
	if(((*(LnkLI9))((V118),VV[86]))==Cnil){
	goto T250;}
	(void)((*(LnkLI262))((V117)));
	goto T247;
T250:;
	if(((*(LnkLI9))((V118),Cnil))==Cnil){
	goto T253;}
	goto T247;
T253:;
	if(((*(LnkLI9))((V118),VV[87]))==Cnil){
	goto T256;}
	(void)((VFUN_NARGS=0,(*(LnkLI263))()));
	goto T247;
T256:;
	if(((*(LnkLI9))((V118),VV[77]))==Cnil){
	goto T259;}
	V119= (*(LnkLI255))();
	(void)((VFUN_NARGS=2,(*(LnkLI264))(/* INLINE-ARGS */V119,Ct)));
	goto T247;
T259:;
	if(((*(LnkLI9))((V118),VV[88]))==Cnil){
	goto T262;}
	setq(VV[47],(*(LnkLI255))());
	goto T247;
T262:;
	if(((*(LnkLI9))((V118),VV[89]))==Cnil){
	goto T266;}
	V120= (*(LnkLI258))();
	setq(VV[42],append(/* INLINE-ARGS */V120,symbol_value(VV[42])));
	goto T247;
T266:;
	if(((*(LnkLI9))((V118),VV[90]))==Cnil){
	goto T270;}
	V121= (*(LnkLI258))();
	setq(VV[41],append(/* INLINE-ARGS */V121,symbol_value(VV[41])));
	goto T247;
T270:;
	if(((*(LnkLI9))((V118),VV[91]))==Cnil){
	goto T274;}
	(void)((VFUN_NARGS=2,(*(LnkLI263))(Cnil,Ct)));
	goto T247;
T274:;
	if(!(type_of((V118))==t_symbol)){
	goto T277;}
	if((get((V118),VV[92],Cnil))==Cnil){
	goto T277;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))((V117),VV[92])));
	goto T247;
T277:;
	if(((V116))==Cnil){
	goto T283;}
	V115= Cnil;
	goto T281;
T283:;
	(void)((*(LnkLI266))());
T281:;
	goto T238;}
T247:;
	V116= Cnil;
	V117= (*(LnkLI255))();
	goto T240;}
T238:;
	{object V122 = (V115);
	VMR22(V122)}}
}
/*	local entry for function PARSE-LOOP-WITH	*/

static object LI23(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V123;
	object V124;
	narg = narg - 0;
	if (narg <= 0) goto T291;
	else {
	va_start(ap);
	V123= va_arg(ap,object);}
	if (--narg <= 0) goto T292;
	else {
	V124= va_arg(ap,object);}
	--narg; goto T293;
T291:;
	V123= Cnil;
T292:;
	V124= Cnil;
T293:;
	{register object V125;
	V125= (*(LnkLI255))();
	{object V126;
	V127= (*(LnkLI254))();
	V126= (*(LnkLI13))(/* INLINE-ARGS */V127);
	if(((*(LnkLI9))((V126),VV[94]))==Cnil){
	goto T300;}
	(void)((*(LnkLI255))());
	if(!(type_of((V125))==t_symbol)){
	goto T304;}
	goto T303;
T304:;
	base[0]= VV[95];
	base[1]= (V125);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T303:;
	V128= (*(LnkLI255))();
	(void)((VFUN_NARGS=7,(*(LnkLI267))((V125),/* INLINE-ARGS */V128,(((V123))==Cnil?Ct:Cnil),Cnil,Cnil,Ct,(V124))));
	goto T297;
T300:;
	(void)((VFUN_NARGS=5,(*(LnkLI268))((V125),Cnil,Cnil,(((V123))==Cnil?Ct:Cnil),(V124))));}
T297:;
	{object V129;
	V130= (*(LnkLI254))();
	V129= (*(LnkLI13))(/* INLINE-ARGS */V130);
	if(((*(LnkLI9))((V129),VV[5]))==Cnil){
	goto T310;}
	(void)((*(LnkLI255))());
	{object V131;
	V132= (*(LnkLI255))();
	V131= (*(LnkLI13))(/* INLINE-ARGS */V132);
	if(((*(LnkLI9))((V131),VV[87]))==Cnil){
	goto T315;}
	{object V133 = (VFUN_NARGS=1,(*(LnkLI263))(Ct));
	VMR23(V133)}
T315:;
	if(((*(LnkLI9))((V131),VV[91]))==Cnil){
	goto T318;}
	{object V134 = (VFUN_NARGS=2,(*(LnkLI263))(Ct,Ct));
	VMR23(V134)}
T318:;
	(void)((*(LnkLI266))());
	{object V135 = (VFUN_NARGS=1,(*(LnkLI263))(Ct));
	VMR23(V135)}}
T310:;
	{object V136 = Cnil;
	VMR23(V136)}}}}
	}
/*	local entry for function PARSE-LOOP-DO	*/

static object LI24()

{	 VMB24 VMS24 VMV24
TTL:;
	{register object V137;
	V137= Cnil;
	{register object V138;
	V138= (*(LnkLI255))();
T325:;
	if(!(type_of((V138))==t_cons||((V138))==Cnil)){
	goto T330;}
	V137= make_cons((V138),(V137));
	if(symbol_value(VV[34])!=Cnil){
	goto T328;}
	goto T322;
T330:;
	(void)((*(LnkLI266))());
	goto T322;
T328:;
	V138= (*(LnkLI255))();
	goto T325;}
T322:;
	if((V137)!=Cnil){
	goto T338;}
	base[0]= VV[96];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T338:;
	{object V139 = (V137);
	VMR24(V139)}}
}
/*	local entry for function PARSE-LOOP-INITIALLY	*/

static object LI25(V141)

object V141;
{	 VMB25 VMS25 VMV25
TTL:;
	{object V142;
	V142= (*(LnkLI13))((V141));
	if(((*(LnkLI9))((V142),VV[97]))==Cnil){
	goto T342;}
	{object V143;
	V143= (*(LnkLI258))();
	{register object V144;
	register object V145;
	V144= nreverse((V143));
	V145= car((V144));
T348:;
	if(!(endp((V144)))){
	goto T349;}
	{object V146 = Cnil;
	VMR25(V146)}
T349:;
	{register object V147;
	if(type_of((V145))==t_cons||((V145))==Cnil){
	goto T355;}
	V147= Cnil;
	goto T354;
T355:;
	{register object x= car((V145)),V148= VV[98];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T357;
	}else V148=V148->c.c_cdr;}
	V147= Cnil;
	goto T354;
T357:;
	if((length((V145)))==(3)){
	goto T359;}
	V147= Cnil;
	goto T354;
T359:;
	if(type_of(cadr((V145)))==t_symbol){
	goto T361;}
	V147= Cnil;
	goto T354;
T361:;
	base[2]= caddr((V145));
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T363;}
	V147= Cnil;
	goto T354;
T363:;
	{register object x= cadr((V145)),V149= caar(symbol_value(VV[46]));
	while(!endp(V149))
	if(type_of(V149->c.c_car)==t_cons &&eql(x,V149->c.c_car->c.c_car)){
	goto T366;
	}else V149=V149->c.c_cdr;}
	V147= Cnil;
	goto T354;
T366:;
	V147= (VFUN_NARGS=7,(*(LnkLI267))(cadr((V145)),caddr((V145)),Cnil,Cnil,Cnil,Ct,Ct));
T354:;
	if(((V147))==Cnil){
	goto T369;}
	goto T353;
T369:;
	setq(VV[48],make_cons((V145),symbol_value(VV[48])));}
T353:;
	V144= cdr((V144));
	V145= car((V144));
	goto T348;}}
T342:;
	if(((*(LnkLI9))((V142),VV[99]))==Cnil){
	goto T378;}
	V150= (*(LnkLI258))();
	setq(VV[43],append(/* INLINE-ARGS */V150,symbol_value(VV[43])));
	{object V151 = symbol_value(VV[43]);
	VMR25(V151)}
T378:;
	base[0]= VV[85];
	base[1]= (V142);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V152 = vs_base[0];
	VMR25(V152)}}
}
/*	local entry for function PARSE-ONE-WHEN-CLAUSE	*/

static object LI26()

{	 VMB26 VMS26 VMV26
TTL:;
	{register object V153;
	register object V154;
	register object V155;
	V153= Cnil;
	V154= VV[100];
	V155= Cnil;
T388:;
	if((symbol_value(VV[34]))==Cnil){
	goto T391;}
	goto T390;
T391:;
	goto T386;
T390:;
	V155= (*(LnkLI255))();
	{register object V156;
	V156= (*(LnkLI13))((V155));
	{register object V157;
	V157= (*(LnkLI256))((V156));
	if(((V157))==Cnil){
	goto T399;}
	goto T395;
T399:;
	if(((*(LnkLI260))((V156)))==Cnil){
	goto T402;}
	if(!(eql(VV[100],(V154)))){
	goto T405;}
	goto T404;
T405:;
	goto T389;
T404:;
	V158= (*(LnkLI261))();
	V153= append(/* INLINE-ARGS */V158,(V153));
	V154= VV[5];
	goto T395;
T402:;
	if(((*(LnkLI9))((V156),VV[101]))==Cnil){
	goto T411;}
	if(!(eql(VV[100],(V154)))){
	goto T414;}
	goto T413;
T414:;
	goto T389;
T413:;
	V159= (*(LnkLI259))();
	V153= append(/* INLINE-ARGS */V159,(V153));
	V154= VV[5];
	goto T395;
T411:;
	if(((*(LnkLI9))((V156),VV[56]))==Cnil){
	goto T420;}
	if(!(eql(VV[100],(V154)))){
	goto T423;}
	goto T422;
T423:;
	goto T389;
T422:;
	V160= (*(LnkLI258))();
	V153= append(/* INLINE-ARGS */V160,(V153));
	V154= VV[5];
	goto T395;
T420:;
	if(((*(LnkLI9))((V156),VV[5]))==Cnil){
	goto T429;}
	if(!(eql(VV[5],(V154)))){
	goto T432;}
	goto T431;
T432:;
	base[0]= VV[102];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T431:;
	V154= VV[100];
	goto T395;
T429:;
	(void)((*(LnkLI266))());
	goto T386;}}
T395:;
	goto T388;
T389:;
	(void)((*(LnkLI266))());
	goto T386;
T386:;
	if((V153)!=Cnil){
	goto T438;}
	base[0]= VV[103];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T438:;
	{object V161 = (V153);
	VMR26(V161)}}
}
/*	local entry for function PARSE-LOOP-WHEN	*/

static object LI27()

{	 VMB27 VMS27 VMV27
TTL:;
	{object V162;
	object V163;
	object V164;
	V162= Cnil;
	V163= Cnil;
	V164= Cnil;
	{object V165;
	if(((*(LnkLI9))(symbol_value(VV[35]),VV[104]))==Cnil){
	goto T445;}
	V165= list(2,VV[105],(*(LnkLI255))());
	goto T443;
T445:;
	V165= (*(LnkLI255))();
T443:;
	V162= (*(LnkLI269))();
	{object V166;
	V167= (*(LnkLI254))();
	V166= (*(LnkLI13))(/* INLINE-ARGS */V167);
	if(((*(LnkLI9))((V166),VV[106]))==Cnil){
	goto T449;}
	(void)((*(LnkLI255))());
	V163= Ct;
	V164= (*(LnkLI269))();}
T449:;
	V168= nreverse((V162));
	V169= make_cons((V165),/* INLINE-ARGS */V168);
	if((V163)==Cnil){
	V170= Cnil;
	goto T457;}
	V171= nreverse((V164));
	V172= make_cons(Ct,/* INLINE-ARGS */V171);
	V170= make_cons(/* INLINE-ARGS */V172,Cnil);
T457:;
	V173= listA(3,VV[14],/* INLINE-ARGS */V169,V170);
	{object V174 = make_cons(/* INLINE-ARGS */V173,Cnil);
	VMR27(V174)}}}
}
/*	local entry for function POINTER-FOR-COLLECT	*/

static object LI28(V176)

object V176;
{	 VMB28 VMS28 VMV28
TTL:;{object V177;
	{register object x= (V176),V179= symbol_value(VV[52]);
	while(!endp(V179))
	if(type_of(V179->c.c_car)==t_cons &&eql(x,V179->c.c_car->c.c_car)){
	V178= (V179->c.c_car);
	goto T460;
	}else V179=V179->c.c_cdr;
	V178= Cnil;}
T460:;
	V177= cdr(V178);
	if(V177==Cnil)goto T458;
	{object V180 = V177;
	VMR28(V180)}
T458:;}
	{object V181;
	base[0]= VV[107];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V182= vs_base[0];
	V181= (VFUN_NARGS=4,(*(LnkLI267))(V182,Cnil,Cnil,VV[0]));
	V183= make_cons((V176),(V181));
	setq(VV[52],make_cons(/* INLINE-ARGS */V183,symbol_value(VV[52])));
	{object V184 = (V181);
	VMR28(V184)}}
}
/*	local entry for function PARSE-LOOP-COLLECT	*/

static object LI29()

{	 VMB29 VMS29 VMV29
TTL:;
	{register object V185;
	register object V186;
	register object V187;
	V185= Cnil;
	V186= Cnil;
	V187= Cnil;
	if(symbol_value(VV[50])==Cnil){
	goto T469;}
	{frame_ptr fr;
	fr=frs_sch_catch(VV[27]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[27]);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	unwind(fr,VV[27]);}
T469:;
	{register object V188;
	register object V189;
	V188= symbol_value(VV[35]);
	V189= (*(LnkLI255))();
	{object V190;
	V191= (*(LnkLI255))();
	V190= (*(LnkLI13))(/* INLINE-ARGS */V191);
	if(((*(LnkLI9))((V190),VV[108]))==Cnil){
	goto T476;}
	V185= (*(LnkLI255))();
	(void)((VFUN_NARGS=6,(*(LnkLI267))((V185),Cnil,Cnil,Ct,Cnil,Ct)));
	goto T473;
T476:;
	(void)((*(LnkLI266))());
	if((symbol_value(VV[45]))==Cnil){
	goto T481;}
	V185= symbol_value(VV[45]);
	goto T473;
T481:;
	base[0]= VV[109];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V192= vs_base[0];
	setq(VV[45],(VFUN_NARGS=2,(*(LnkLI267))(V192,Cnil)));
	V185= symbol_value(VV[45]);}
T473:;
	{object V193;
	V193= (*(LnkLI13))((V188));
	if(((*(LnkLI9))((V193),VV[110]))==Cnil){
	goto T488;}
	V186= (*(LnkLI270))((V185));
	if((symbol_value(VV[111]))==Cnil){
	goto T494;}
	base[0]= list(3,VV[15],(V186),list(2,VV[112],(V185)));
	base[1]= symbol_value(VV[48]);
	base[2]= VV[30];
	base[3]= VV[113];
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	setq(VV[48],vs_base[0]);
T494:;
	{object V194;
	V194= (*(LnkLI13))((V188));
	if(((*(LnkLI9))((V194),VV[114]))==Cnil){
	goto T488;}
	if(!(type_of((V189))==t_cons||((V189))==Cnil)){
	goto T505;}
	if(eql(car((V189)),VV[61])){
	goto T488;}
T505:;
	V189= list(2,VV[115],(V189));}}
T488:;
	if(!(type_of((V189))==t_cons||((V189))==Cnil)){
	goto T512;}
	if((symbol_value(VV[111]))!=Cnil){
	goto T512;}
	base[0]= VV[116];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V195= vs_base[0];
	V187= (VFUN_NARGS=3,(*(LnkLI267))(V195,Cnil,Cnil));
	goto T510;
T512:;
	V187= (V189);
T510:;
	{object V196;
	{object V197;
	V197= (*(LnkLI13))((V188));
	if(((*(LnkLI9))((V197),VV[117]))==Cnil){
	goto T523;}
	{object V198;
	V199= list(3,VV[15],list(2,VV[18],(V186)),(V187));
	V198= list(3,VV[5],/* INLINE-ARGS */V199,list(3,VV[15],(V186),list(2,VV[118],list(2,VV[18],(V186)))));
	if((symbol_value(VV[111]))==Cnil){
	goto T527;}
	V196= make_cons((V198),Cnil);
	goto T520;
T527:;
	V200= list(2,(V186),(V198));
	V201= list(3,VV[14],/* INLINE-ARGS */V200,list(2,Ct,list(3,VV[15],(V186),list(2,VV[118],list(3,VV[15],(V185),(V187))))));
	V196= make_cons(/* INLINE-ARGS */V201,Cnil);
	goto T520;}
T523:;
	if(((*(LnkLI9))((V197),VV[27]))==Cnil){
	goto T530;}
	if((symbol_value(VV[111]))==Cnil){
	goto T533;}
	V202= list(2,VV[18],(V186));
	V203= list(3,VV[15],/* INLINE-ARGS */V202,list(3,VV[15],(V186),list(3,VV[119],(V187),Cnil)));
	V196= make_cons(/* INLINE-ARGS */V203,Cnil);
	goto T520;
T533:;
	V204= list(2,VV[18],(V186));
	V205= list(2,(V186),list(3,VV[15],/* INLINE-ARGS */V204,list(3,VV[15],(V186),list(3,VV[119],(V187),Cnil))));
	V206= list(3,VV[14],/* INLINE-ARGS */V205,list(2,Ct,list(3,VV[15],(V185),list(3,VV[15],(V186),list(3,VV[119],(V187),Cnil)))));
	V196= make_cons(/* INLINE-ARGS */V206,Cnil);
	goto T520;
T530:;
	V188= (*(LnkLI13))((V188));
	if(((VFUN_NARGS=4,(*(LnkLI249))((V188),symbol_value(VV[28]),VV[30],VV[9])))==Cnil){
	goto T538;}
	V196= (*(LnkLI271))((V188),(V185),(V187));
	goto T520;
T538:;
	base[0]= VV[120];
	base[1]= (V188);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V196= vs_base[0];}
T520:;
	if(!(eql((V187),(V189)))){
	goto T543;}
	{object V207 = (V196);
	VMR29(V207)}
T543:;
	V208= list(3,VV[15],(V187),(V189));
	V209= make_cons(/* INLINE-ARGS */V208,Cnil);
	{object V210 = nconc((V196),/* INLINE-ARGS */V209);
	VMR29(V210)}}}}
}
/*	local entry for function LOOP-PARSE-ADDITIONAL-COLLECTIONS	*/

static object LI30(V214,V215,V216)

object V214;object V215;object V216;
{	 VMB30 VMS30 VMV30
	bds_check;
TTL:;
	{register object V217;
	V217= Cnil;
	{object V218;
	object V219;
	V218= (VFUN_NARGS=4,(*(LnkLI249))((V214),symbol_value(VV[28]),VV[30],VV[9]));
	V219= get((V218),VV[121],Cnil);
	{object V220;
	V220= (
	(type_of((V219)) == t_sfun ?(*(object (*)())(((V219))->sfn.sfn_self)):
	(fcall.fun=((V219)),fcall.argd=2,fcalln))((V215),(V216)));
	bds_bind(VV[34],(V220));
	bds_bind(VV[35],Cnil);
	{register object V221;
	V221= (*(LnkLI255))();
T552:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T553;}
	goto T549;
T553:;
	{register object V222;
	V222= (*(LnkLI13))((V221));
	{register object V223;
	V223= (*(LnkLI256))((V222));
	if(((V223))==Cnil){
	goto T561;}
	goto T557;
T561:;
	if(((*(LnkLI9))((V222),VV[56]))==Cnil){
	goto T564;}
	V217= (*(LnkLI258))();
	goto T557;
T564:;
	base[4]= VV[85];
	base[5]= (V222);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}}
T557:;
	V221= (*(LnkLI255))();
	goto T552;}
T549:;
	{object V224 = (V217);
	bds_unwind1;
	bds_unwind1;
	VMR30(V224)}}}}
}
/*	local entry for function THE-TYPE	*/

static object LI31(V227,V228)

object V227;register object V228;
{	 VMB31 VMS31 VMV31
TTL:;
	if(symbol_value(VV[47])==Cnil){
	goto T572;}
	V228= Cnil;
T572:;
	if((V228)==Cnil){
	goto T574;}{object V229;
	base[0]= symbol_value(VV[54]);
	base[1]= (V228);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V229= vs_base[0];
	if(V229==Cnil)goto T576;
	V228= V229;
	goto T575;
T576:;}
	if((((type_of((V228))==t_symbol&&((V228))->s.s_hpack==keyword_package)?Ct:Cnil))==Cnil){
	goto T580;}
	V228= Cnil;
	goto T575;
T580:;
T575:;
T574:;
	if(type_of((V228))==t_cons){
	goto T583;}
	goto T582;
T583:;
	if((car((V228)))==(VV[122])){
	goto T585;}
	goto T582;
T585:;
	V228= cadr((V228));
T582:;
	if(((V228))==Cnil){
	goto T589;}
	{object V230 = list(3,VV[123],(V228),(V227));
	VMR31(V230)}
T589:;
	{object V231 = (V227);
	VMR31(V231)}
}
/*	local entry for function TYPE-ERROR	*/

static object LI32()

{	 VMB32 VMS32 VMV32
TTL:;
	base[0]= VV[124];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V232 = vs_base[0];
	VMR32(V232)}
}
/*	local entry for function MAKE-VALUE	*/

static object LI33(V235,V236)

register object V235;object V236;
{	 VMB33 VMS33 VMV33
TTL:;
	{register object V237;
	V237= Cnil;
	if((symbol_value(VV[47]))!=Cnil){
	goto T594;}
	if((symbol_value(VV[125]))==Cnil){
	goto T594;}
	if(!(((V236))==(VV[126]))){
	goto T594;}
	base[0]= symbol_value(VV[54]);
	base[1]= (V236);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V237= vs_base[0];
	if(((V237))==Cnil){
	goto T594;}
	if(!(type_of((V237))==t_cons)){
	goto T608;}
	if(!((car((V237)))==(VV[122]))){
	goto T608;}
	V237= cadr((V237));
	goto T606;
T608:;
T606:;
	base[0]= (V235);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T613;}
	{object V238;
	if((symbol_value(VV[39]))==Cnil){
	goto T618;}
	base[1]= (V235);
	base[2]= VV[127];
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+1)+3;
	Lsubst();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V238= vs_base[0];
	goto T616;
T618:;
	base[0]= (V235);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V238= vs_base[0];
T616:;{object V239;
	base[0]= (V238);
	base[1]= (V237);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk129)();
	vs_top=sup;
	V239= vs_base[0];
	if(V239==Cnil)goto T626;
	goto T625;
T626:;}
	base[0]= VV[128];
	base[1]= (V235);
	base[2]= (V237);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
T625:;
	{object V240 = make_cons((V235),Cnil);
	VMR33(V240)}}
T613:;
	{register object V241;
	V241= Cnil;
	if(!(type_of((V235))!=t_cons)){
	goto T635;}
	V242= Cnil;
	goto T633;
T635:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V241= vs_base[0];
	V243= list(2,(V241),(V235));
	V242= make_cons(/* INLINE-ARGS */V243,Cnil);
T633:;
	if((symbol_value(VV[39]))==Cnil){
	goto T640;}
	if((V241)!=Cnil){
	base[0]= (V241);
	goto T642;}
	base[0]= (V235);
T642:;
	base[1]= VV[127];
	base[2]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V244= vs_base[0];
	goto T638;
T640:;
	if((V241)!=Cnil){
	V244= (V241);
	goto T638;}
	V244= (V235);
T638:;
	V245= list(3,VV[80],list(3,VV[129],V244,list(2,VV[10],(V237))),VV[130]);
	if((V241)!=Cnil){
	V246= (V241);
	goto T645;}
	V246= (V235);
T645:;
	V247= list(4,VV[12],V242,/* INLINE-ARGS */V245,V246);
	{object V248 = make_cons(/* INLINE-ARGS */V247,Cnil);
	VMR33(V248)}}
T594:;
	{object V249 = make_cons((V235),Cnil);
	VMR33(V249)}}
}
/*	local entry for function LOOP-ADD-BINDING	*/

static object LI34(V251,V250,va_alist)
	object V251,V250;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V252;
	register object V253;
	object V254;
	object V255;
	object V256;
	object V257;
	object V258;
	if(narg <2) too_few_arguments();
	V252= V251;
	V253= V250;
	narg = narg - 2;
	if (narg <= 0) goto T646;
	else {
	va_start(ap);
	V254= va_arg(ap,object);}
	if (--narg <= 0) goto T647;
	else {
	V255= va_arg(ap,object);}
	if (--narg <= 0) goto T648;
	else {
	V256= va_arg(ap,object);}
	if (--narg <= 0) goto T649;
	else {
	V257= va_arg(ap,object);}
	if (--narg <= 0) goto T650;
	else {
	V258= va_arg(ap,object);}
	--narg; goto T651;
T646:;
	V254= Ct;
T647:;
	V255= Cnil;
T648:;
	V256= Cnil;
T649:;
	V257= Ct;
T650:;
	V258= Cnil;
T651:;
	{register object V259;
	V259= Cnil;
	if(((V254))!=Cnil){
	goto T659;}
	if((symbol_value(VV[46]))!=Cnil){
	goto T658;}
T659:;
	V260= make_cons(Cnil,Cnil);
	setq(VV[46],make_cons(/* INLINE-ARGS */V260,symbol_value(VV[46])));
T658:;
	{register object x= (V252),V261= caar(symbol_value(VV[46]));
	while(!endp(V261))
	if(type_of(V261->c.c_car)==t_cons &&eql(x,V261->c.c_car->c.c_car)){
	V259= (V261->c.c_car);
	goto T668;
	}else V261=V261->c.c_cdr;
	V259= Cnil;}
T668:;
	if(((V259))==Cnil){
	goto T666;}
	if((V257)==Cnil){
	goto T664;}
	{object V263;
	if((V253)==Cnil){
	V263= Cnil;
	goto T669;}
	V263= (*(LnkLI272))((V253),(V255));
T669:;
	if(type_of(V259)!=t_cons)FEwrong_type_argument(Scons,V259);
	(V259)->c.c_cdr = (V263);
	goto T664;}
T666:;
	{object V264;
	if((V258)!=Cnil){
	if(((V258))!=Cnil){
	goto T672;}
	goto T673;}
	base[0]= (V252);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V265= vs_base[0];
	if((V265)==Cnil){
	goto T674;}
	goto T673;
T674:;
	base[0]= (V253);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T672;}
T673:;
	V264= Cnil;
	goto T671;
T672:;
	{register object V266;
	register object V267;
	V266= cdr(symbol_value(VV[46]));
	V267= car((V266));
T682:;
	if(!(endp((V266)))){
	goto T683;}
	V264= Cnil;
	goto T671;
T683:;
	{register object x= (V252),V268= car((V267));
	while(!endp(V268))
	if(type_of(V268->c.c_car)==t_cons &&eql(x,V268->c.c_car->c.c_car)){
	V259= (V268->c.c_car);
	goto T690;
	}else V268=V268->c.c_cdr;
	V259= Cnil;}
T690:;
	if(((V259))==Cnil){
	goto T687;}
	if((V257)==Cnil){
	goto T691;}
	{register object V269;
	register object V270;
	V269= (V259);
	if((V253)==Cnil){
	V270= Cnil;
	goto T693;}
	V270= (*(LnkLI272))((V253),(V255));
T693:;
	if(type_of((V269))!=t_cons)FEwrong_type_argument(Scons,(V269));
	((V269))->c.c_cdr = (V270);}
T691:;
	V264= Ct;
	goto T671;
T687:;
	V266= cdr((V266));
	V267= car((V266));
	goto T682;}
T671:;
	if(((V264))==Cnil){
	goto T701;}
	goto T664;
T701:;
	{object V271;
	object V272;
	V271= symbol_value(VV[46]);
	if((V253)==Cnil){
	V273= Cnil;
	goto T705;}
	V273= (*(LnkLI272))((V253),(V255));
T705:;
	V274= make_cons((V252),V273);
	V272= make_cons(/* INLINE-ARGS */V274,caar((V271)));
	if(type_of(car((V271)))!=t_cons)FEwrong_type_argument(Scons,car((V271)));
	(car((V271)))->c.c_car = (V272);
	(void)(car((V271)));}}
T664:;
	if((V255)==Cnil){
	goto T707;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V252),(V255),(V256))));
T707:;
	{object V275 = (V252);
	VMR34(V275)}}}
	}
/*	local entry for function LOOP-DECLARE-BINDING	*/

static object LI35(V278,V277,V276,va_alist)
	object V278,V277,V276;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{register object V279;
	register object V280;
	object V281;
	object V282;
	if(narg <3) too_few_arguments();
	V279= V278;
	V280= V277;
	V281= V276;
	narg = narg - 3;
	if (narg <= 0) goto T708;
	else {
	va_start(ap);
	V282= va_arg(ap,object);}
	--narg; goto T709;
T708:;
	V282= Cnil;
T709:;
	{object V283;
	V283= Cnil;
	if((V280)==Cnil){
	goto T713;}
	{register object x= (V280),V284= symbol_value(VV[131]);
	while(!endp(V284))
	if(eql(x,V284->c.c_car)){
	goto T714;
	}else V284=V284->c.c_cdr;}
	goto T713;
T714:;
	base[0]= symbol_value(VV[54]);
	base[1]= (V280);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V280= vs_base[0];
	if(((V280))!=Cnil){
	goto T716;}
	goto T713;
T716:;
	if(symbol_value(VV[132])==Cnil){
	goto T713;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V279),VV[133],(V281))));
T713:;
	if(((V280))==Cnil){
	goto T721;}
	if(((V281))!=Cnil){
	goto T722;}
	if((symbol_value(VV[47]))!=Cnil){
	goto T721;}
T722:;
	{register object V285;
	register object V286;
	V285= symbol_value(VV[46]);
	V286= car((V285));
T732:;
	if(!(endp((V285)))){
	goto T733;}
	goto T728;
T733:;
	{register object x= (V279),V287= car((V286));
	while(!endp(V287))
	if(type_of(V287->c.c_car)==t_cons &&eql(x,V287->c.c_car->c.c_car)){
	goto T739;
	}else V287=V287->c.c_cdr;
	goto T737;}
T739:;
	V283= Ct;
	{register object V288;
	register object V289;
	V288= (V286);
	if(!(type_of((V280))==t_cons)){
	goto T747;}
	if(!((car((V280)))==(VV[122]))){
	goto T747;}
	base[2]= list(3,VV[122],cadr((V280)),(V279));
	goto T745;
T747:;
	if(((V282))==Cnil){
	goto T752;}
	base[2]= list(3,VV[122],(V280),(V279));
	goto T745;
T752:;
	base[2]= list(2,(V280),(V279));
T745:;
	base[3]= cdr((V288));
	base[4]= VV[30];
	base[5]= VV[113];
	vs_top=(vs_base=base+2)+4;
	Ladjoin();
	vs_top=sup;
	V289= vs_base[0];
	if(type_of((V288))!=t_cons)FEwrong_type_argument(Scons,(V288));
	((V288))->c.c_cdr = (V289);}
	goto T728;
T737:;
	V285= cdr((V285));
	V286= car((V285));
	goto T732;}
T728:;
	if((V283)!=Cnil){
	goto T721;}
	if(symbol_value(VV[53])!=Cnil){
	goto T721;}
	base[0]= VV[134];
	base[1]= (V279);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T721:;
	{object V290 = (V279);
	VMR35(V290)}}}
	}
/*	local entry for function PARSE-LOOP-DECLARE	*/

static object LI36(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V291;
	register object V292;
	narg = narg - 0;
	if (narg <= 0) goto T765;
	else {
	va_start(ap);
	V291= va_arg(ap,object);}
	if (--narg <= 0) goto T766;
	else {
	V292= va_arg(ap,object);}
	--narg; goto T767;
T765:;
	V291= (*(LnkLI255))();
T766:;
	V292= Ct;
T767:;
	{object V293;
	register object V294;
	V293= car((V291));
	V294= Cnil;
	if(!(((V293))==(VV[122]))){
	goto T771;}
	V291= cdr((V291));
	V293= car((V291));
	V294= Ct;
T771:;
	{register object V295;
	register object V296;
	V295= cdr((V291));
	V296= car((V295));
T782:;
	if(!(endp((V295)))){
	goto T783;}
	{object V297 = Cnil;
	VMR36(V297)}
T783:;
	(void)((VFUN_NARGS=4,(*(LnkLI273))((V296),car((V291)),(V292),(V294))));
	V295= cdr((V295));
	V296= car((V295));
	goto T782;}}}
	}
/*	local entry for function LOOP-ADD-TEMPS	*/

static object LI37(V298,va_alist)
	object V298;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	{register object V299;
	object V300;
	object V301;
	object V302;
	object V303;
	if(narg <1) too_few_arguments();
	V299= V298;
	narg = narg - 1;
	if (narg <= 0) goto T793;
	else {
	va_start(ap);
	V300= va_arg(ap,object);}
	if (--narg <= 0) goto T794;
	else {
	V301= va_arg(ap,object);}
	if (--narg <= 0) goto T795;
	else {
	V302= va_arg(ap,object);}
	if (--narg <= 0) goto T796;
	else {
	V303= va_arg(ap,object);}
	--narg; goto T797;
T793:;
	V300= Cnil;
T794:;
	V301= Cnil;
T795:;
	V302= Cnil;
T796:;
	V303= Cnil;
T797:;
	{object V304;
	V304= (((V299))==Cnil?Ct:Cnil);
	if(((V304))==Cnil){
	goto T804;}
	{object V305 = (V304);
	VMR37(V305)}
T804:;
	if(!(type_of((V299))==t_symbol)){
	goto T807;}
	{object V306 = (VFUN_NARGS=7,(*(LnkLI267))((V299),(V300),(V302),(V301),Cnil,Ct,(V303)));
	VMR37(V306)}
T807:;
	if(!(type_of((V299))==t_cons||((V299))==Cnil)){
	goto T810;}
	(void)((VFUN_NARGS=1,(*(LnkLI268))(car((V299)))));
	{object V307 = (VFUN_NARGS=1,(*(LnkLI268))(cdr((V299))));
	VMR37(V307)}
T810:;
	{object V308 = Cnil;
	VMR37(V308)}}}
	}
/*	local entry for function ADD-FROM-DATA	*/

static object LI38(V309,va_alist)
	object V309;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB38 VMS38 VMV38
	{register object V310;
	object V311;
	if(narg <1) too_few_arguments();
	V310= V309;
	narg= narg - 1;
	va_start(ap);
	V312 = list_vector(narg,ap);
	V311= V312;
	if((V310)!=Cnil){
	goto T813;}
	base[0]= VV[135];
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V310= vs_base[0];
T813:;
	{register object V313;
	register object V314;
	V313= (V310);
	V314= (V311);
T818:;
	if(((V314))!=Cnil){
	goto T819;}
	goto T816;
T819:;
	if((car((V314)))!=Cnil){
	goto T824;}
	goto T823;
T824:;
	{register object V315;
	register object V316;
	V315= (V313);
	V316= car((V314));
	if(type_of((V315))!=t_cons)FEwrong_type_argument(Scons,(V315));
	((V315))->c.c_car = (V316);}
T823:;
	V313= cdr((V313));
	V314= cdr((V314));
	goto T818;}
T816:;
	{object V317 = (V310);
	VMR38(V317)}}
	}
/*	local entry for function PARSE-LOOP-FOR	*/

static object LI39()

{	 VMB39 VMS39 VMV39
	bds_check;
TTL:;
	{register object V318;
	register object V319;
	V318= Cnil;
	V319= Cnil;
	{register object V320;
	object V321;
	register object V322;
	V320= (*(LnkLI255))();
	V321= Cnil;
	V322= Cnil;
	{object V323;
	V323= (*(LnkLI255))();
T841:;
	{register object V324;
	V324= (*(LnkLI13))((V323));
	if(((*(LnkLI9))((V324),VV[136]))==Cnil){
	goto T847;}
	{object V325;
	base[1]= VV[137];
	vs_top=(vs_base=base+1)+1;
	Lgensym();
	vs_top=sup;
	V325= vs_base[0];
	(void)((VFUN_NARGS=4,(*(LnkLI268))((V320),Cnil,VV[138],Ct)));
	V326= (*(LnkLI255))();
	(void)((VFUN_NARGS=3,(*(LnkLI267))((V325),/* INLINE-ARGS */V326,Cnil)));
	V327= list(3,VV[139],(V320),list(2,VV[17],(V325)));
	setq(VV[49],make_cons(/* INLINE-ARGS */V327,symbol_value(VV[49])));
	V322= list(3,VV[15],(V325),list(2,VV[18],(V325)));
	V321= list(2,VV[140],(V325));
	goto T844;}
T847:;
	if(((*(LnkLI9))((V324),VV[141]))==Cnil){
	goto T859;}
	{register object V328;
	if(!(type_of((V320))==t_symbol)){
	goto T863;}
	V328= (V320);
	goto T861;
T863:;
	base[1]= VV[142];
	vs_top=(vs_base=base+1)+1;
	Lgensym();
	vs_top=sup;
	V328= vs_base[0];
T861:;
	(void)((VFUN_NARGS=4,(*(LnkLI268))((V320),Cnil,VV[138],Ct)));
	V329= (*(LnkLI255))();
	(void)((VFUN_NARGS=3,(*(LnkLI267))((V328),/* INLINE-ARGS */V329,Cnil)));
	V322= list(3,VV[15],(V328),list(2,VV[18],(V328)));
	if(eql((V328),(V320))){
	goto T870;}
	V330= list(3,VV[139],(V320),(V328));
	setq(VV[49],make_cons(/* INLINE-ARGS */V330,symbol_value(VV[49])));
T870:;
	V321= list(2,VV[140],(V328));
	goto T844;}
T859:;
	if(((*(LnkLI9))((V324),VV[143]))==Cnil){
	goto T876;}
	V331= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),/* INLINE-ARGS */V331,Cnil,Cnil,VV[144]));
	goto T844;
T876:;
	if(((*(LnkLI9))((V324),VV[145]))==Cnil){
	goto T880;}
	V332= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),/* INLINE-ARGS */V332,Cnil,Cnil,VV[146]));
	goto T844;
T880:;
	if(((*(LnkLI9))((V324),VV[147]))==Cnil){
	goto T884;}
	V318= (*(LnkLI255))();
	if(((V319))==Cnil){
	goto T889;}
	V319= (VFUN_NARGS=5,(*(LnkLI274))((V319),Cnil,Cnil,Cnil,(V318)));
	goto T844;
T889:;
	bds_bind(VV[148],small_fixnum(4));
	bds_bind(VV[149],small_fixnum(4));
T894:;
	if(!((car(caddr((V322))))==(VV[18]))){
	goto T895;}
	bds_unwind1;
	bds_unwind1;
	goto T892;
T895:;
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
	goto T894;
T892:;
	V333= cadr((V322));
	if(!(type_of((V318))==t_cons)){
	goto T911;}
	{register object x= car((V318)),V335= VV[155];
	while(!endp(V335))
	if(eql(x,V335->c.c_car)){
	goto T914;
	}else V335=V335->c.c_cdr;
	goto T911;}
T914:;
	V334= list(2,cadr((V318)),cadr((V322)));
	goto T909;
T911:;
	V334= list(3,VV[156],(V318),cadr((V322)));
T909:;
	V322= list(3,VV[15],/* INLINE-ARGS */V333,V334);
	goto T844;
T884:;
	if(((*(LnkLI9))((V324),VV[157]))==Cnil){
	goto T916;}
	V336= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),Cnil,/* INLINE-ARGS */V336,Cnil,VV[144]));
	goto T844;
T916:;
	if(((*(LnkLI9))((V324),VV[158]))==Cnil){
	goto T920;}
	V337= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),Cnil,/* INLINE-ARGS */V337,Cnil,VV[146]));
	goto T844;
T920:;
	if(((*(LnkLI9))((V324),VV[159]))==Cnil){
	goto T924;}
	V338= (*(LnkLI255))();
	V319= (VFUN_NARGS=7,(*(LnkLI274))((V319),(V320),Cnil,/* INLINE-ARGS */V338,Cnil,Cnil,Ct));
	goto T844;
T924:;
	if(!(type_of((V324))==t_symbol)){
	goto T928;}
	if((get((V324),VV[160],Cnil))==Cnil){
	goto T928;}
	V339= (*(LnkLI13))((V323));
	(void)((VFUN_NARGS=3,(*(LnkLI265))(/* INLINE-ARGS */V339,VV[160],(V320))));
	goto T838;
T928:;
	if(!(type_of((V324))==t_symbol)){
	goto T934;}
	if((get((V324),VV[161],Cnil))==Cnil){
	goto T934;}
	V340= (*(LnkLI13))((V323));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V340,(V320)));
	goto T838;
T934:;
	(void)((*(LnkLI266))());
	goto T838;}
T844:;
	V323= (*(LnkLI255))();
	goto T841;}
T838:;
	if(((V319))==Cnil){
	goto T943;}
	{object V341;
	object V342;
	object V343;
	object V344;
	object V345;
	object V346;
	V341= car(cddddr((V319)));
	V342= cadr(cddddr((V319)));
	V343= car((V319));
	V344= caddr((V319));
	V345= cadddr((V319));
	V346= Cnil;
	(void)((VFUN_NARGS=4,(*(LnkLI267))((V343),cadr((V319)),Ct,VV[126])));
	base[1]= (V345);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T953;}
	goto T952;
T953:;
	setq(VV[47],Ct);
T952:;
	V347= list(3,(V341),(V343),(V345));
	V322= list(3,VV[15],(V343),(*(LnkLI276))(/* INLINE-ARGS */V347,VV[126]));
	if(((V344))==Cnil){
	goto T960;}
	{object V348;
	base[2]= VV[162];
	vs_top=(vs_base=base+2)+1;
	Lgensym();
	vs_top=sup;
	V348= vs_base[0];
	if(!(eql((V345),small_fixnum(1)))){
	goto T966;}
	if((cadr(cddddr((V319))))!=Cnil){
	goto T966;}
	base[1]= Cnil;
	goto T964;
T966:;
	base[1]= list(3,(V341),VV[127],(V345));
T964:;
	bds_bind(VV[39],base[1]);
	(void)((VFUN_NARGS=6,(*(LnkLI267))((V348),(V344),Cnil,VV[126],Cnil,Cnil)));
	if(((V342))==Cnil){
	goto T974;}
	if(!(((V341))==(VV[144]))){
	goto T977;}
	V349= VV[163];
	goto T972;
T977:;
	V349= VV[164];
	goto T972;
T974:;
	if(!(((V341))==(VV[144]))){
	goto T980;}
	V349= VV[165];
	goto T972;
T980:;
	V349= VV[166];
T972:;
	V321= list(3,V349,(V343),(V348));
	bds_unwind1;
	goto T943;}
T960:;
	if((symbol_value(VV[47]))!=Cnil){
	goto T943;}
	if((symbol_value(VV[125]))==Cnil){
	goto T943;}
	base[1]= symbol_value(VV[54]);
	base[2]= VV[126];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	V346= vs_base[0];
	if(((V346))==Cnil){
	goto T943;}
	if(!(type_of((V346))==t_cons)){
	goto T993;}
	if(!((car((V346)))==(VV[122]))){
	goto T993;}
	V346= cadr((V346));
T993:;
	base[1]= (V346);
	base[2]= VV[167];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T943;}
	base[1]= (V345);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1002;}
	goto T1001;
T1002:;
	base[1]= VV[168];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
T1001:;
	if(!(((V341))==(VV[144]))){
	goto T1009;}
	if((V345)!=Cnil){
	V351= (V345);
	goto T1011;}
	V351= small_fixnum(1);
T1011:;
	V350= list(3,VV[164],(V343),number_minus(VV[169],V351));
	goto T1007;
T1009:;
	if((V345)!=Cnil){
	V352= (V345);
	goto T1012;}
	V352= small_fixnum(1);
T1012:;
	V350= list(3,VV[163],(V343),number_plus(VV[170],V352));
T1007:;
	V353= list(3,VV[80],V350,VV[171]);
	setq(VV[42],make_cons(/* INLINE-ARGS */V353,symbol_value(VV[42])));}
T943:;
	if((V321)==Cnil){
	goto T1013;}
	base[1]= list(3,VV[5],(V321),VV[172]);
	vs_top=(vs_base=base+1)+1;
	Lcopy_tree();
	vs_top=sup;
	V354= vs_base[0];
	setq(VV[41],make_cons(V354,symbol_value(VV[41])));
T1013:;
	if((V322)==Cnil){
	{object V355 = Cnil;
	VMR39(V355)}}
	setq(VV[42],make_cons((V322),symbol_value(VV[42])));
	{object V356 = symbol_value(VV[42]);
	VMR39(V356)}}}
}
/*	local entry for function PARSE-LOOP-MACRO	*/

static object LI40(V358,V357,va_alist)
	object V358,V357;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB40 VMS40 VMV40
	{object V359;
	object V360;
	object V361;
	if(narg <2) too_few_arguments();
	V359= V358;
	V360= V357;
	narg = narg - 2;
	if (narg <= 0) goto T1018;
	else {
	va_start(ap);
	V361= va_arg(ap,object);}
	--narg; goto T1019;
T1018:;
	V361= Cnil;
T1019:;
	{register object V362;
	V362= Cnil;
	{object V363;
	object V364;
	V363= get((V359),(V360),Cnil);
	V364= Cnil;
	{object V365= (V360);
	if((V365!= VV[160]))goto T1025;
	{object V366;
	V366= get((V359),VV[173],Cnil);{object V367;
	V367= cdr((V366));
	if(V367==Cnil)goto T1028;
	goto T1027;
T1028:;}
	base[0]= VV[174];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1027:;
	V364= cdr((V366));
	goto T1024;}
T1025:;
	if((V365!= VV[92]))goto T1031;
	V364= get((V359),VV[175],Cnil);
	goto T1024;
T1031:;
	FEerror("The ECASE key value ~s is illegal.",1,V365);}
T1024:;
	{object V368;
	{register object x= VV[176],V369= (V364);
	while(!endp(V369))
	if(eql(x,V369->c.c_car)){
	goto T1035;
	}else V369=V369->c.c_cdr;
	goto T1034;}
T1035:;
	{object V370;
	V370= symbol_value(VV[34]);
	setq(VV[34],Cnil);
	V368= (V370);
	goto T1032;}
T1034:;
	{register object V371;
	register object V372;
	V371= make_fixnum(length((V364)));
	V372= small_fixnum(0);
T1041:;
	if(!(number_compare((V372),(V371))>=0)){
	goto T1042;}
	V368= nreverse((V362));
	goto T1032;
T1042:;
	V362= make_cons(car(symbol_value(VV[34])),(V362));
	setq(VV[34],cdr(symbol_value(VV[34])));
	V372= one_plus((V372));
	goto T1041;}
T1032:;
	{object V374= (V360);
	if((V374!= VV[160]))goto T1055;
	base[0]= (V363);
	base[1]= (V361);
	{object V375;
	V375= (V368);
	 vs_top=base+2;
	 while(!endp(V375))
	 {vs_push(car(V375));V375=cdr(V375);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V373= vs_base[0];
	goto T1054;
T1055:;
	if((V374!= VV[92]))goto T1059;
	base[0]= (V363);
	{object V376;
	V376= (V368);
	 vs_top=base+1;
	 while(!endp(V376))
	 {vs_push(car(V376));V376=cdr(V376);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V373= vs_base[0];
	goto T1054;
T1059:;
	V373= Cnil;}
T1054:;
	setq(VV[34],append(V373,symbol_value(VV[34])));
	{object V377 = symbol_value(VV[34]);
	VMR40(V377)}}}}}
	}
/*	local entry for function PARSE-LOOP-MAP	*/

static object LI41(V380,V381)

object V380;object V381;
{	 VMB41 VMS41 VMV41
TTL:;
	if(symbol_value(VV[53])==Cnil){
	goto T1062;}
	base[0]= VV[177];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1062:;
	{object V382;
	object V383;
	V382= get((V380),VV[161],Cnil);
	V383= get((V380),VV[178],Cnil);
	if((V383)!=Cnil){
	goto T1066;}
	base[0]= VV[179];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1066:;
	{register object x= VV[176],V384= (V383);
	while(!endp(V384))
	if(eql(x,V384->c.c_car)){
	goto T1070;
	}else V384=V384->c.c_cdr;
	goto T1068;}
T1070:;
	base[0]= VV[180];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1068:;
	{register object V385;
	object V386;
	V385= Cnil;
	{register object V387;
	register object V388;
	V389 = make_fixnum(length((V383)));
	V387= one_minus(V389);
	V388= small_fixnum(0);
T1077:;
	if(!(number_compare((V388),(V387))>=0)){
	goto T1078;}
	V386= nreverse((V385));
	goto T1073;
T1078:;
	V385= make_cons(car(symbol_value(VV[34])),(V385));
	setq(VV[34],cdr(symbol_value(VV[34])));
	V388= one_plus((V388));
	goto T1077;}
T1073:;
	{register object V390;
	register object V391;
	V390= (*(LnkLI255))();
	V391= Cnil;
T1093:;
	if(((*(LnkLI9))((V390),VV[77]))!=Cnil){
	goto T1094;}
	(void)((*(LnkLI266))());
	if((V391)==Cnil){
	setq(VV[44],Cnil);
	goto T1090;}
	setq(VV[44],make_cons(VV[77],(V391)));
	goto T1090;
T1094:;
	V392= (*(LnkLI255))();
	V391= make_cons(/* INLINE-ARGS */V392,(V391));
	V390= (*(LnkLI255))();
	goto T1093;}
T1090:;
	base[1]= (V382);
	base[2]= (V381);
	{object V393;
	V393= (V386);
	 vs_top=base+3;
	 while(!endp(V393))
	 {vs_push(car(V393));V393=cdr(V393);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	setq(VV[53],vs_base[0]);
	{object V394 = Cnil;
	VMR41(V394)}}}
}
/*	local entry for function SUBSTITUTE-SLOOP-BODY	*/

static object LI42(V396)

register object V396;
{	 VMB42 VMS42 VMV42
TTL:;
	if((symbol_value(VV[53]))==Cnil){
	goto T1109;}
	base[0]= make_cons(VV[16],(V396));
	base[1]= VV[181];
	base[2]= symbol_value(VV[53]);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V397= vs_base[0];
	V396= make_cons(V397,Cnil);
	if(symbol_value(VV[44])==Cnil){
	goto T1109;}
	base[0]= symbol_value(VV[44]);
	base[1]= VV[182];
	base[2]= (V396);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V396= vs_base[0];
T1109:;
	{object V398 = (V396);
	VMR42(V398)}
}
/*	local entry for function DEF-LOOP-INTERNAL	*/

static object LI43(V402,V401,V400,V399,va_alist)
	object V402,V401,V400,V399;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	bds_check;
	{register object V403;
	register object V404;
	object V405;
	object V406;
	object V407;
	object V408;
	object V409;
	if(narg <4) too_few_arguments();
	V403= V402;
	V404= V401;
	V405= V400;
	V406= V399;
	narg = narg - 4;
	if (narg <= 0) goto T1122;
	else {
	va_start(ap);
	V407= va_arg(ap,object);}
	if (--narg <= 0) goto T1123;
	else {
	V408= va_arg(ap,object);}
	if (--narg <= 0) goto T1124;
	else {
	V409= va_arg(ap,object);}
	--narg; goto T1125;
T1122:;
	V407= Cnil;
T1123:;
	V408= Cnil;
T1124:;
	V409= Cnil;
T1125:;
	{object V410;
	bds_bind(VV[184],VV[183]);
	base[3]= Cnil;
	base[4]= VV[185];
	base[5]= (V403);
	base[6]= (V406);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lintern();
	vs_top=sup;
	V410= vs_base[0];
	if((V408)==Cnil){
	goto T1135;}
	V411 = make_fixnum(length((V404)));
	if(!(number_compare(V411,(V408))>=0)){
	goto T1136;}
	goto T1135;
T1136:;
	base[2]= VV[186];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
T1135:;
	if((V409)==Cnil){
	goto T1139;}
	V412 = make_fixnum(length((V404)));
	if(!(number_compare(V412,(V409))<=0)){
	goto T1140;}
	goto T1139;
T1140:;
	base[2]= VV[187];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
T1139:;
	V413= listA(4,VV[190],(V410),(V404),(V405));
	if((V407)==Cnil){
	V414= Cnil;
	goto T1143;}
	V415= list(3,VV[191],list(2,VV[10],(V403)),(V407));
	V414= make_cons(/* INLINE-ARGS */V415,Cnil);
T1143:;
	V416= list(2,VV[10],(V403));
	base[3]= Cnil;
	base[4]= VV[192];
	base[5]= (V406);
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
	V417= vs_base[0];
	V418= list(3,VV[7],/* INLINE-ARGS */V416,V417);
	V419= list(3,VV[15],/* INLINE-ARGS */V418,list(2,VV[10],(V410)));
	V420= list(2,VV[10],(V403));
	base[3]= Cnil;
	base[4]= VV[194];
	base[5]= (V406);
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
	V421= vs_base[0];
	V422= list(3,VV[7],/* INLINE-ARGS */V420,V421);
	V423= list(2,/* INLINE-ARGS */V419,list(3,VV[15],/* INLINE-ARGS */V422,list(2,VV[10],(V404))));
	{object V424 = listA(4,VV[188],VV[189],/* INLINE-ARGS */V413,append(V414,/* INLINE-ARGS */V423));
	bds_unwind1;
	VMR43(V424)}}}
	}
/*	local entry for function SUM-SLOOP-COLLECT	*/

static object LI44(V427,V428)

object V427;object V428;
{	 VMB44 VMS44 VMV44
TTL:;
	V429= list(3,VV[195],(V427),small_fixnum(0));
	{object V430 = list(4,VV[97],/* INLINE-ARGS */V429,VV[56],list(3,VV[195],(V427),list(3,VV[144],(V427),(V428))));
	VMR44(V430)}
}
/*	local entry for function LOGXOR-SLOOP-COLLECT	*/

static object LI45(V433,V434)

register object V433;object V434;
{	 VMB45 VMS45 VMV45
TTL:;
	V435= list(3,VV[15],(V433),small_fixnum(0));
	V436= list(3,VV[15],(V433),list(3,VV[196],(V433),(V434)));
	{object V437 = list(6,VV[97],/* INLINE-ARGS */V435,VV[56],/* INLINE-ARGS */V436,VV[77],list(3,VV[167],(V433),(V434)));
	VMR45(V437)}
}
/*	local entry for function MAXIMIZE-SLOOP-COLLECT	*/

static object LI46(V440,V441)

register object V440;object V441;
{	 VMB46 VMS46 VMV46
TTL:;
	V442= list(3,VV[195],(V440),Cnil);
	V443= list(3,VV[15],(V440),list(3,VV[198],(V440),(V441)));
	{object V444 = list(4,VV[97],/* INLINE-ARGS */V442,VV[56],list(4,VV[197],(V440),/* INLINE-ARGS */V443,list(3,VV[15],(V440),(V441))));
	VMR46(V444)}
}
/*	local entry for function MINIMIZE-SLOOP-COLLECT	*/

static object LI47(V447,V448)

register object V447;object V448;
{	 VMB47 VMS47 VMV47
TTL:;
	V449= list(3,VV[195],(V447),Cnil);
	V450= list(3,VV[15],(V447),list(3,VV[199],(V447),(V448)));
	{object V451 = list(4,VV[97],/* INLINE-ARGS */V449,VV[56],list(4,VV[197],(V447),/* INLINE-ARGS */V450,list(3,VV[15],(V447),(V448))));
	VMR47(V451)}
}
/*	local entry for function COUNT-SLOOP-COLLECT	*/

static object LI48(V454,V455)

object V454;object V455;
{	 VMB48 VMS48 VMV48
TTL:;
	V456= list(3,VV[195],(V454),small_fixnum(0));
	{object V457 = list(4,VV[97],/* INLINE-ARGS */V456,VV[56],list(3,VV[5],(V455),list(3,VV[15],(V454),list(2,VV[200],(V454)))));
	VMR48(V457)}
}
/*	local entry for function THEREIS-SLOOP-COLLECT	*/

static object LI49(V460,V461)

object V460;object V461;
{	 VMB49 VMS49 VMV49
TTL:;
	{object V462 = list(2,VV[56],list(3,VV[197],(V461),list(2,VV[59],(V461))));
	VMR49(V462)}
}
/*	local entry for function ALWAYS-SLOOP-COLLECT	*/

static object LI50(V465,V466)

object V465;object V466;
{	 VMB50 VMS50 VMV50
TTL:;
	V467= list(3,VV[195],(V465),Ct);
	{object V468 = list(4,VV[97],/* INLINE-ARGS */V467,VV[56],list(3,VV[5],list(2,VV[140],(V466)),VV[201]));
	VMR50(V468)}
}
/*	local entry for function NEVER-SLOOP-COLLECT	*/

static object LI51(V471,V472)

object V471;object V472;
{	 VMB51 VMS51 VMV51
TTL:;
	V473= list(3,VV[195],(V471),Ct);
	{object V474 = list(4,VV[97],/* INLINE-ARGS */V473,VV[56],list(3,VV[5],(V472),VV[202]));
	VMR51(V474)}
}
/*	local entry for function AVERAGING-SLOOP-MACRO	*/

static object LI52(V476)

object V476;
{	 VMB52 VMS52 VMV52
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
	base[14]= list(3,VV[15],VV[203],list(3,VV[208],list(3,VV[144],VV[209],(V476)),VV[210]));
	base[15]= VV[211];
	vs_top=(vs_base=base+0)+16;
	LlistA();
	vs_top=sup;
	{object V477 = vs_base[0];
	VMR52(V477)}
}
/*	local entry for function REPEAT-SLOOP-MACRO	*/

static object LI53(V479)

object V479;
{	 VMB53 VMS53 VMV53
TTL:;
	{object V480;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V480= vs_base[0];
	{object V481 = list(4,VV[25],(V480),VV[157],(V479));
	VMR53(V481)}}
}
/*	local entry for function RETURN-SLOOP-MACRO	*/

static object LI54(V483)

register object V483;
{	 VMB54 VMS54 VMV54
TTL:;
	if(!(type_of((V483))==t_cons)){
	goto T1177;}
	if(!((car((V483)))==(VV[21]))){
	goto T1177;}
	V484= cdr((V483));
	goto T1175;
T1177:;
	V484= make_cons((V483),Cnil);
T1175:;
	{object V485 = list(2,VV[56],make_cons(VV[59],V484));
	VMR54(V485)}
}
/*	local entry for function IN-TABLE-SLOOP-MAP	*/

static object LI55(V488,V489)

object V488;object V489;
{	 VMB55 VMS55 VMV55
TTL:;
	{object V490 = list(3,VV[212],list(2,VV[213],listA(3,VV[214],(V488),VV[215])),(V489));
	VMR55(V490)}
}
/*	local entry for function IN-PACKAGE-SLOOP-MAP	*/

static object LI56(V493,V494)

object V493;object V494;
{	 VMB56 VMS56 VMV56
TTL:;
	{object V495 = list(3,VV[216],list(2,(V493),list(2,VV[217],(V494))),VV[181]);
	VMR56(V495)}
}
/*	local entry for function IN-ARRAY-SLOOP-FOR	*/

static object LI57(V497,V496,va_alist)
	object V497,V496;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{object V498;
	object V499;
	register object V500;
	if(narg <2) too_few_arguments();
	V498= V497;
	V499= V496;
	narg= narg - 2;
	va_start(ap);
	V501 = list_vector(narg,ap);
	V500= V501;
	{object V502;
	object V503;
	object V504;
	V502= Cnil;
	V503= Cnil;
	V504= Cnil;
	if(!(type_of((V498))==t_cons||((V498))==Cnil)){
	goto T1183;}
	V502= car((V498));
	V503= cadr((V498));
	goto T1181;
T1183:;
	V502= (V498);
	base[0]= VV[218];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V503= vs_base[0];
T1181:;
	{object V505;
	{register object V506;
	register object V507;
	V506= (V500);
	V507= Cnil;
T1194:;
	{register object V508;
	V508= (*(LnkLI13))(car((V506)));
	{register object V509;
	V509= (*(LnkLI9))((V508),VV[219]);
	if(((V509))==Cnil){
	goto T1201;}
	goto T1197;
T1201:;
	if(((*(LnkLI9))((V508),VV[220]))==Cnil){
	goto T1204;}
	V504= Ct;
	goto T1197;
T1204:;
	{register object V510;
	V510= (*(LnkLI9))((V508),VV[147]);
	if(((V510))==Cnil){
	goto T1209;}
	goto T1197;
T1209:;
	base[0]= (V506);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V500= vs_base[0];
	V505= nreverse((V507));
	goto T1192;}}}
T1197:;
	V507= make_cons(car((V506)),(V507));
	V507= make_cons(cadr((V506)),(V507));
	V506= cddr((V506));
	goto T1194;}
T1192:;
	if((V504)!=Cnil){
	goto T1221;}
	V511= list(2,VV[157],list(2,VV[221],(V499)));
	V505= nconc(/* INLINE-ARGS */V511,(V505));
T1221:;
	V512= listA(5,VV[87],(V502),VV[56],list(3,VV[15],(V502),list(3,VV[222],(V499),(V503))),(V500));
	{object V513 = listA(3,VV[25],(V503),append((V505),/* INLINE-ARGS */V512));
	VMR57(V513)}}}}
	}
/*	local entry for function =-SLOOP-FOR	*/

static object LI58(V516,V517)

register object V516;object V517;
{	 VMB58 VMS58 VMV58
TTL:;
	{object V518;
	V519= (*(LnkLI254))();
	V518= (*(LnkLI13))(/* INLINE-ARGS */V519);
	if(((*(LnkLI9))((V518),VV[223]))==Cnil){
	goto T1225;}
	(void)((*(LnkLI255))());
	V520= list(3,VV[139],(V516),(V517));
	{object V521 = list(6,VV[87],(V516),VV[97],/* INLINE-ARGS */V520,VV[89],list(3,VV[139],(V516),(*(LnkLI255))()));
	VMR58(V521)}
T1225:;
	{object V522 = list(4,VV[87],(V516),VV[56],list(3,VV[139],(V516),(V517)));
	VMR58(V522)}}
}
/*	local entry for function SLOOP-SLOOP-MACRO	*/

static object LI59(V524)

VOL object V524;
{	 VMB59 VMS59 VMV59
	bds_check;
TTL:;
	{object V525;
	V525= (*(LnkLI13))(car((V524)));
	{object V526;
	V526= (*(LnkLI9))((V525),VV[25]);
	if(((V526))==Cnil){
	goto T1232;}
	goto T1228;
T1232:;
	base[0]= VV[85];
	base[1]= (V525);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
T1228:;
	{VOL object V527;
	VOL object V528;
	VOL object V529;
	VOL object V530;
	VOL object V531;
	VOL object V532;
	VOL object V533;
	base[4]= VV[224];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V528= vs_base[0];
	bds_bind(VV[50],Cnil);
	bds_bind(VV[49],Cnil);
	bds_bind(VV[53],Cnil);
	V527= Cnil;
	V529= Cnil;
	V530= Cnil;
	V531= Cnil;
	V532= Cnil;
	V533= Cnil;
	bds_bind(VV[34],(V524));
	setq(VV[40],Ct);
	(void)((*(LnkLI255))());
	{object V534;
	object V535;
	V534= symbol_value(VV[46]);
	V535= (V529);
	V529= (V534);
	setq(VV[46],(V535));}
	{object V536;
	object V537;
	V536= symbol_value(VV[48]);
	V537= (V530);
	V530= (V536);
	setq(VV[48],(V537));}
	{object V538;
	object V539;
	V538= symbol_value(VV[43]);
	V539= (V531);
	V531= (V538);
	setq(VV[43],(V539));}
	{object V540;
	object V541;
	V540= symbol_value(VV[41]);
	V541= (V532);
	V532= (V540);
	setq(VV[41],(V541));}
	{object V542;
	object V543;
	V542= symbol_value(VV[42]);
	V543= (V533);
	V533= (V542);
	setq(VV[42],(V543));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI257))());
	{object V544;
	object V545;
	V544= symbol_value(VV[46]);
	V545= (V529);
	V529= (V544);
	setq(VV[46],(V545));}
	{object V546;
	object V547;
	V546= symbol_value(VV[48]);
	V547= (V530);
	V530= (V546);
	setq(VV[48],(V547));}
	{object V548;
	object V549;
	V548= symbol_value(VV[43]);
	V549= (V531);
	V531= (V548);
	setq(VV[43],(V549));}
	{object V550;
	object V551;
	V550= symbol_value(VV[41]);
	V551= (V532);
	V532= (V550);
	setq(VV[41],(V551));}
	{object V552;
	object V553;
	V552= symbol_value(VV[42]);
	V553= (V533);
	V533= (V552);
	setq(VV[42],(V553));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
T1318:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1319;}
	goto T1316;
T1319:;
	{VOL object V554;
	frs_push(FRS_CATCH,VV[27]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V554= vs_base[0];
	goto T1324;}
	else{
	V555= (*(LnkLI251))();
	frs_pop();
	V554= V555;}
T1324:;
	if(((V554))==Cnil){
	goto T1327;}
	goto T1323;
T1327:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1330;}
	goto T1316;
T1330:;
	(void)(print((VV[34]->s.s_dbind),Cnil));
	{object V556;
	object V557;
	V556= symbol_value(VV[46]);
	V557= (V529);
	V529= (V556);
	setq(VV[46],(V557));}
	{object V558;
	object V559;
	V558= symbol_value(VV[48]);
	V559= (V530);
	V530= (V558);
	setq(VV[48],(V559));}
	{object V560;
	object V561;
	V560= symbol_value(VV[43]);
	V561= (V531);
	V531= (V560);
	setq(VV[43],(V561));}
	{object V562;
	object V563;
	V562= symbol_value(VV[41]);
	V563= (V532);
	V532= (V562);
	setq(VV[41],(V563));}
	{object V564;
	object V565;
	V564= symbol_value(VV[42]);
	V565= (V533);
	V533= (V564);
	setq(VV[42],(V565));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI261))());
	{object V566;
	object V567;
	V566= symbol_value(VV[46]);
	V567= (V529);
	V529= (V566);
	setq(VV[46],(V567));}
	{object V568;
	object V569;
	V568= symbol_value(VV[48]);
	V569= (V530);
	V530= (V568);
	setq(VV[48],(V569));}
	{object V570;
	object V571;
	V570= symbol_value(VV[43]);
	V571= (V531);
	V531= (V570);
	setq(VV[43],(V571));}
	{object V572;
	object V573;
	V572= symbol_value(VV[41]);
	V573= (V532);
	V532= (V572);
	setq(VV[41],(V573));}
	{object V574;
	object V575;
	V574= symbol_value(VV[42]);
	V575= (V533);
	V533= (V574);
	setq(VV[42],(V575));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)(print((VV[34]->s.s_dbind),Cnil));}
T1323:;
	goto T1318;
T1316:;
	{object V576;
	object V577;
	V576= symbol_value(VV[46]);
	V577= (V529);
	V529= (V576);
	setq(VV[46],(V577));}
	{object V578;
	object V579;
	V578= symbol_value(VV[48]);
	V579= (V530);
	V530= (V578);
	setq(VV[48],(V579));}
	{object V580;
	object V581;
	V580= symbol_value(VV[43]);
	V581= (V531);
	V531= (V580);
	setq(VV[43],(V581));}
	{object V582;
	object V583;
	V582= symbol_value(VV[41]);
	V583= (V532);
	V532= (V582);
	setq(VV[41],(V583));}
	{object V584;
	object V585;
	V584= symbol_value(VV[42]);
	V585= (V533);
	V533= (V584);
	setq(VV[42],(V585));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	V527= nreverse((VV[49]->s.s_dbind));
	if((VV[53]->s.s_dbind)==Cnil){
	goto T1449;}
	V527= (*(LnkLI252))((V527));
T1449:;
	{object V586;
	V587= list(3,VV[66],Cnil,list(3,VV[61],VV[225],list(2,VV[10],(V528))));
	V588= make_cons(/* INLINE-ARGS */V587,Cnil);
	base[4]= nreverse(symbol_value(VV[48]));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1455;}
	base[5]= Cnil;
	goto T1454;
T1455:;
	base[5]= VV[226];
T1454:;
	base[6]= nreverse(symbol_value(VV[41]));
	base[7]= (V527);
	base[8]= nreverse(symbol_value(VV[42]));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1461;}
	base[9]= Cnil;
	goto T1460;
T1461:;
	base[9]= VV[227];
T1460:;
	V590= nreverse(symbol_value(VV[43]));
	base[10]= make_cons((V528),/* INLINE-ARGS */V590);
	vs_top=(vs_base=base+4)+7;
	Lappend();
	vs_top=sup;
	V589= vs_base[0];
	V586= list(3,VV[71],/* INLINE-ARGS */V588,make_cons(VV[73],V589));
	{object V591;
	object V592;
	V591= symbol_value(VV[46]);
	V592= car((V591));
T1468:;
	if(!(endp((V591)))){
	goto T1469;}
	goto T1464;
T1469:;
	V593= (*(LnkLI253))((V592));
	if((cdr((V592)))!=Cnil){
	goto T1476;}
	V594= Cnil;
	goto T1475;
T1476:;
	V595= make_cons(VV[77],cdr((V592)));
	V594= make_cons(/* INLINE-ARGS */V595,Cnil);
T1475:;
	V596= make_cons((V586),Cnil);
	V586= listA(3,VV[12],/* INLINE-ARGS */V593,append(V594,/* INLINE-ARGS */V596));
	V591= cdr((V591));
	V592= car((V591));
	goto T1468;}
T1464:;
	{object V597;
	object V598;
	V597= symbol_value(VV[46]);
	V598= (V529);
	V529= (V597);
	setq(VV[46],(V598));}
	{object V599;
	object V600;
	V599= symbol_value(VV[48]);
	V600= (V530);
	V530= (V599);
	setq(VV[48],(V600));}
	{object V601;
	object V602;
	V601= symbol_value(VV[43]);
	V602= (V531);
	V531= (V601);
	setq(VV[43],(V602));}
	{object V603;
	object V604;
	V603= symbol_value(VV[41]);
	V604= (V532);
	V532= (V603);
	setq(VV[41],(V604));}
	{object V605;
	object V606;
	V605= symbol_value(VV[42]);
	V606= (V533);
	V533= (V605);
	setq(VV[42],(V606));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	{object V607 = list(2,VV[56],(V586));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR59(V607)}}}
}
/*	local entry for function IN-CAREFULLY-SLOOP-FOR	*/

static object LI60(V610,V611)

object V610;object V611;
{	 VMB60 VMS60 VMV60
TTL:;
	{register object V612;
	base[0]= VV[228];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V612= vs_base[0];
	base[0]= VV[87];
	base[1]= (V612);
	base[2]= VV[5];
	base[3]= VV[87];
	base[4]= (V610);
	base[5]= VV[97];
	base[6]= list(3,VV[15],(V612),(V611));
	base[7]= VV[56];
	base[8]= list(3,VV[139],(V610),list(2,VV[17],(V612)));
	base[9]= VV[90];
	base[10]= list(3,VV[5],list(2,VV[229],(V612)),VV[230]);
	base[11]= VV[89];
	base[12]= list(3,VV[15],(V612),list(2,VV[18],(V612)));
	vs_top=(vs_base=base+0)+13;
	Llist();
	vs_top=sup;
	{object V613 = vs_base[0];
	VMR60(V613)}}
}
/*	local entry for function FIRST-USE-SLOOP-FOR	*/

static object LI61(V618,V619,V620,V621)

object V618;object V619;object V620;object V621;
{	 VMB61 VMS61 VMV61
TTL:;{object V622;
	V622= (*(LnkLI9))((V620),VV[223]);
	if(V622==Cnil)goto T1536;
	goto T1535;
T1536:;}
	base[0]= VV[231];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1535:;
	V623= list(3,VV[139],(V618),(V619));
	{object V624 = list(6,VV[87],(V618),VV[97],/* INLINE-ARGS */V623,VV[89],list(3,VV[139],(V618),(V621)));
	VMR61(V624)}
}
/*	local entry for function FIRST-SLOOP-FOR	*/

static object LI62(V629,V630,V631,V632)

register object V629;object V630;object V631;object V632;
{	 VMB62 VMS62 VMV62
TTL:;{object V633;
	V633= (*(LnkLI9))((V631),VV[223]);
	if(V633==Cnil)goto T1540;
	goto T1539;
T1540:;}
	base[0]= VV[232];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1539:;
	if((symbol_value(VV[42]))!=Cnil){
	goto T1544;}
	V634= list(3,VV[139],(V629),(V630));
	{object V635 = list(6,VV[87],(V629),VV[97],/* INLINE-ARGS */V634,VV[89],list(3,VV[139],(V629),(V632)));
	VMR62(V635)}
T1544:;
	{object V636;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V636= vs_base[0];
	V637= list(2,(V636),list(3,VV[139],(V629),(V632)));
	V638= list(3,VV[14],/* INLINE-ARGS */V637,list(2,Ct,list(3,VV[139],(V629),(V630))));
	{object V639 = list(8,VV[87],(V629),VV[87],(V636),VV[56],/* INLINE-ARGS */V638,VV[89],list(3,VV[139],(V636),Ct));
	VMR62(V639)}}
}
/*	function definition for FIND-IN-ORDERED-LIST	*/

static L63()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_reserve(VM63);
	{register object V640;
	object V641;
	register object V642;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V640=(base[0]);
	V641=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1547;}
	V642=(base[2]);
	vs_top=sup;
	goto T1548;
T1547:;
	V642= symbol_value(VV[233]);
T1548:;
	{register object V643;
	V643= Cnil;
	{register object V644;
	V644= (V641);
T1552:;
	if(((V644))!=Cnil){
	goto T1553;}
	base[3]= (V643);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
T1553:;
	if(!(eql(car((V644)),(V640)))){
	goto T1561;}
	base[3]= (V644);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
T1561:;
	base[3]= (V640);
	base[4]= car((V644));
	vs_top=(vs_base=base+3)+2;
	super_funcall_no_event((V642));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1559;}
	base[3]= (V643);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
T1559:;
	V643= (V644);
	V644= cdr((V644));
	goto T1552;}}
	}
}
/*	local entry for function COLLATE-SLOOP-COLLECT	*/

static object LI64(V647,V648)

object V647;object V648;
{	 VMB64 VMS64 VMV64
TTL:;
	V649= list(3,VV[236],(V648),(V647));
	V650= list(2,VV[238],list(3,VV[15],VV[239],list(3,VV[119],(V648),VV[240])));
	{object V651 = list(2,VV[56],list(4,VV[234],VV[235],/* INLINE-ARGS */V649,list(3,VV[104],VV[237],list(3,VV[14],/* INLINE-ARGS */V650,list(2,Ct,list(3,VV[15],(V647),list(3,VV[119],(V648),(V647))))))));
	VMR64(V651)}
}
/*	local entry for function IN-FRINGE-SLOOP-MAP	*/

static object LI65(V654,V655)

register object V654;object V655;
{	 VMB65 VMS65 VMV65
TTL:;
	{register object V656;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V656= vs_base[0];
	V657= make_cons((V654),Cnil);
	V658= list(2,(V656),VV[244]);
	V659= make_cons(/* INLINE-ARGS */V658,Cnil);
	V660= list(2,VV[140],(V656));
	V661= make_cons(/* INLINE-ARGS */V660,Cnil);
	V662= list(2,VV[229],(V656));
	V663= list(3,VV[15],(V654),(V656));
	V664= list(3,/* INLINE-ARGS */V662,/* INLINE-ARGS */V663,list(3,VV[15],(V656),Cnil));
	V665= list(3,VV[15],(V654),list(2,VV[17],(V656)));
	V666= list(3,VV[14],/* INLINE-ARGS */V664,list(3,Ct,/* INLINE-ARGS */V665,list(3,VV[15],(V656),list(2,VV[18],(V656)))));
	V667= list(2,VV[140],(V654));
	V668= make_cons(/* INLINE-ARGS */V667,Cnil);
	V669= list(2,VV[229],(V654));
	V670= make_cons(/* INLINE-ARGS */V669,VV[245]);
	V671= list(3,VV[242],VV[243],list(5,VV[56],/* INLINE-ARGS */V659,/* INLINE-ARGS */V661,/* INLINE-ARGS */V666,list(4,VV[14],/* INLINE-ARGS */V668,/* INLINE-ARGS */V670,list(2,Ct,list(2,VV[242],(V654))))));
	V672= make_cons(/* INLINE-ARGS */V671,Cnil);
	{object V673 = list(3,VV[12],/* INLINE-ARGS */V657,list(3,VV[241],/* INLINE-ARGS */V672,list(2,VV[242],(V655))));
	VMR65(V673)}}
}
static LnkT277(){ call_or_link(VV[277],&Lnk277);} /* SUBTYPEP */
static object  LnkTLI276(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[276],&LnkLI276,2,ap);} /* THE-TYPE */
static object  LnkTLI275(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[275],&LnkLI275,2,ap);} /* PARSE-LOOP-MAP */
static object  LnkTLI274(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[274],&LnkLI274,ap);} /* ADD-FROM-DATA */
static object  LnkTLI273(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[273],&LnkLI273,ap);} /* LOOP-DECLARE-BINDING */
static object  LnkTLI272(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[272],&LnkLI272,2,ap);} /* MAKE-VALUE */
static LnkT129(){ call_or_link(VV[129],&Lnk129);} /* TYPEP */
static object  LnkTLI271(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[271],&LnkLI271,3,ap);} /* LOOP-PARSE-ADDITIONAL-COLLECTIONS */
static object  LnkTLI270(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[270],&LnkLI270,1,ap);} /* POINTER-FOR-COLLECT */
static object  LnkTLI269(){return call_proc0(VV[269],&LnkLI269);} /* PARSE-ONE-WHEN-CLAUSE */
static object  LnkTLI268(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[268],&LnkLI268,ap);} /* LOOP-ADD-TEMPS */
static object  LnkTLI267(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[267],&LnkLI267,ap);} /* LOOP-ADD-BINDING */
static object  LnkTLI266(){return call_proc0(VV[266],&LnkLI266);} /* LOOP-UN-POP */
static object  LnkTLI265(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[265],&LnkLI265,ap);} /* PARSE-LOOP-MACRO */
static object  LnkTLI264(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[264],&LnkLI264,ap);} /* PARSE-LOOP-DECLARE */
static object  LnkTLI263(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[263],&LnkLI263,ap);} /* PARSE-LOOP-WITH */
static object  LnkTLI262(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[262],&LnkLI262,1,ap);} /* PARSE-LOOP-INITIALLY */
static object  LnkTLI261(){return call_proc0(VV[261],&LnkLI261);} /* PARSE-LOOP-COLLECT */
static object  LnkTLI260(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[260],&LnkLI260,1,ap);} /* LOOP-COLLECT-KEYWORD-P */
static object  LnkTLI259(){return call_proc0(VV[259],&LnkLI259);} /* PARSE-LOOP-WHEN */
static object  LnkTLI258(){return call_proc0(VV[258],&LnkLI258);} /* PARSE-LOOP-DO */
static object  LnkTLI257(){return call_proc0(VV[257],&LnkLI257);} /* PARSE-LOOP-FOR */
static object  LnkTLI256(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[256],&LnkLI256,1,ap);} /* PARSE-NO-BODY */
static object  LnkTLI255(){return call_proc0(VV[255],&LnkLI255);} /* LOOP-POP */
static object  LnkTLI9(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[9],&LnkLI9,2,ap);} /* L-EQUAL */
static object  LnkTLI254(){return call_proc0(VV[254],&LnkLI254);} /* LOOP-PEEK */
static object  LnkTLI13(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[13],&LnkLI13,1,ap);} /* TRANSLATE-NAME */
static object  LnkTLI253(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[253],&LnkLI253,1,ap);} /* LOOP-LET-BINDINGS */
static object  LnkTLI252(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[252],&LnkLI252,1,ap);} /* SUBSTITUTE-SLOOP-BODY */
static object  LnkTLI251(){return call_proc0(VV[251],&LnkLI251);} /* PARSE-LOOP1 */
static object  LnkTLI249(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[249],&LnkLI249,ap);} /* FIND */
static object  LnkTLI248(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[248],&LnkLI248,ap);} /* DEF-LOOP-INTERNAL */
static object  LnkTLI247(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[247],&LnkLI247,1,ap);} /* PARSE-LOOP */
static object  LnkTLI246(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[246],&LnkLI246,2,ap);} /* DESETQ1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

