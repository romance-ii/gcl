
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
	if(!(eql(car((V6)),Ct))){
	goto T16;}
	V3= Ct;
	V7= (V6);
	goto T14;
goto T16;
T16:;
	if(!(eql(car((V6)),VV[0]))){
	goto T21;}
	V7= make_cons(VV[1],cdr((V6)));
	goto T14;
goto T21;
T21:;
	if(!(eql(car((V6)),VV[2]))){
	goto T24;}
	V7= make_cons(VV[3],cdr((V6)));
	goto T14;
goto T24;
T24:;
	{register object x= car((V6)),V8= VV[4];
	while(!endp(V8))
	if(eql(x,V8->c.c_car)){
	V4= V8;
	goto T29;
	}else V8=V8->c.c_cdr;
	V4= Cnil;}
goto T29;
T29:;
	if(((V4))==Cnil){
	goto T27;}
	V9= list(3,VV[5],VV[6],list(3,VV[7],VV[8],car((V4))));
	V7= make_cons(/* INLINE-ARGS */V9,cdr((V6)));
	goto T14;
goto T27;
T27:;
	V10= list(3,VV[9],VV[8],list(2,VV[10],car((V6))));
	V7= make_cons(/* INLINE-ARGS */V10,cdr((V6)));
goto T14;
T14:;
	V2= make_cons(V7,(V2));
	V5= cdr((V5));
	goto T3;}
goto T1;
T1:;
	if((V3)!=Cnil){
	goto T33;}
	V2= make_cons(VV[11],(V2));
goto T33;
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
goto TTL;
TTL:;
	if(!(type_of((V16))==t_symbol)){
	goto T36;}
	if((V16)==Cnil){
	{object V18 = Cnil;
	VMR2(V18)}}
	{object V19 = list(3,VV[15],(V16),(V17));
	VMR2(V19)}
goto T36;
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
goto T43;
T43:;
	if((cdr((V16)))!=Cnil){
	goto T45;}
	V23= Cnil;
	goto T41;
goto T45;
T45:;
	V27= cdr((V16));
	V28= list(3,VV[15],/* INLINE-ARGS */V27,list(2,VV[18],(V17)));
	V23= make_cons(/* INLINE-ARGS */V28,Cnil);
goto T41;
T41:;
	{object V29 = listA(3,VV[16],/* INLINE-ARGS */V22,V23);
	VMR2(V29)}
goto T39;
T39:;
	base[0]= VV[19];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V30 = vs_base[0];
	VMR2(V30)}
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
goto T49;
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

static void L4()
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
	{object V36=base[0]->c.c_cdr;
	if(!endp(V36))invalid_macro_call();}
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
	{object V37=base[0]->c.c_cdr;
	if(!endp(V37))invalid_macro_call();}
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
	{object V38=base[0]->c.c_cdr;
	base[2]= V38;}
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

static void L9()
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

static void L10()
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

static void L11()
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

static void L12()
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
goto TTL;
TTL:;
	if(type_of((V46))==t_symbol){
	goto T55;}
	{object V48 = Cnil;
	VMR13(V48)}
goto T55;
T55:;
	if(!(type_of((V47))==t_symbol)){
	goto T58;}
	V49= symbol_name((V46));
	V50= symbol_name((V47));
	{object V51 = (equal(/* INLINE-ARGS */V49,/* INLINE-ARGS */V50)?Ct:Cnil);
	VMR13(V51)}
goto T58;
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
goto T61;
T61:;
	{object V53 = Cnil;
	VMR13(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-COLLECT-KEYWORD-P	*/

static object LI14(V55)

object V55;
{	 VMB14 VMS14 VMV14
goto TTL;
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
goto T67;
T67:;}
	{object V58 = (VFUN_NARGS=4,(*(LnkLI249))((V55),symbol_value(VV[28]),VV[30],VV[9]));
	VMR14(V58)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRANSLATE-NAME	*/

static object LI15(V60)

object V60;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	{object V61;
	if(type_of((V60))==t_symbol){
	goto T74;}
	V61= Cnil;
	goto T73;
goto T74;
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
goto T73;
T73:;
	if(((V61))==Cnil){
	goto T84;}
	{object V63 = (V61);
	VMR15(V63)}
goto T84;
T84:;
	{object V64 = (V60);
	VMR15(V64)}}
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
	{object V65;
	V65= car(symbol_value(VV[34]));
	setq(VV[34],cdr(symbol_value(VV[34])));
	setq(VV[35],(V65));}
	{object V66 = symbol_value(VV[35]);
	VMR16(V66)}
goto T87;
T87:;
	setq(VV[35],VV[36]);
	{object V67 = Cnil;
	VMR16(V67)}
	return Cnil;
}
/*	local entry for function LOOP-UN-POP	*/

static object LI17()

{	 VMB17 VMS17 VMV17
goto TTL;
TTL:;
	{object V68= symbol_value(VV[35]);
	if((V68!= VV[36]))goto T95;
	{object V69 = Cnil;
	VMR17(V69)}
goto T95;
T95:;
	if((V68!= VV[250]))goto T96;
	base[0]= VV[37];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V70 = vs_base[0];
	VMR17(V70)}
goto T96;
T96:;
	setq(VV[34],make_cons(symbol_value(VV[35]),symbol_value(VV[34])));
	setq(VV[35],VV[38]);
	{object V71 = VV[38];
	VMR17(V71)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-PEEK	*/

static object LI18()

{	 VMB18 VMS18 VMV18
goto TTL;
TTL:;
	{object V72 = car(symbol_value(VV[34]));
	VMR18(V72)}
	return Cnil;
}
/*	local entry for function LOOP-LET-BINDINGS	*/

static object LI19(V74)

register object V74;
{	 VMB19 VMS19 VMV19
goto TTL;
TTL:;
	{register object V75;
	V75= car((V74));
goto T103;
T103:;
	if(((V75))!=Cnil){
	goto T104;}
	{object V76 = nreverse(car((V74)));
	VMR19(V76)}
goto T104;
T104:;{object V77;
	V77= cdar((V75));
	if(V77==Cnil)goto T109;
	goto T108;
goto T109;
T109:;}
	{register object V78;
	register object V79;
	V78= (V75);
	V79= caar((V75));
	if(type_of((V78))!=t_cons)FEwrong_type_argument(Scons,(V78));
	((V78))->c.c_car = (V79);}
goto T108;
T108:;
	V75= cdr((V75));
	goto T103;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP	*/

static object LI20(V81)

object V81;
{	 VMB20 VMS20 VMV20
	bds_check;
goto TTL;
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
goto T119;
T119:;
	(VV[34]->s.s_dbind)= make_cons(VV[56],(VV[34]->s.s_dbind));
goto T118;
T118:;
	(void)((*(LnkLI251))());
	if(((VV[53]->s.s_dbind))!=Cnil){
	goto T126;}
	if(((VV[40]->s.s_dbind))==Cnil){
	goto T125;}
goto T126;
T126:;
	if((VV[51]->s.s_dbind)!=Cnil){
	goto T130;}
	base[18]= VV[57];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	(VV[51]->s.s_dbind)= vs_base[0];
goto T130;
T130:;
	if(eql(VV[55],(V84))){
	goto T133;}
	goto T125;
goto T133;
T133:;
	base[18]= VV[58];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	V84= vs_base[0];
goto T125;
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
goto T143;
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
goto T152;
T152:;
	V89= append((V82),VV[70]);
	V82= make_cons(VV[69],/* INLINE-ARGS */V89);
goto T150;
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
goto T163;
T163:;
	{register object V93;
	register object V94;
	V93= (VV[46]->s.s_dbind);
	V94= car((V93));
goto T172;
T172:;
	if(!(endp((V93)))){
	goto T173;}
	goto T168;
goto T173;
T173:;
	V95= (*(LnkLI253))((V94));
	if((cdr((V94)))!=Cnil){
	goto T180;}
	V96= Cnil;
	goto T179;
goto T180;
T180:;
	V97= make_cons(VV[77],cdr((V94)));
	V96= make_cons(/* INLINE-ARGS */V97,Cnil);
goto T179;
T179:;
	V98= make_cons((V90),Cnil);
	V90= listA(3,VV[12],/* INLINE-ARGS */V95,append(V96,/* INLINE-ARGS */V98));
	V93= cdr((V93));
	V94= car((V93));
	goto T172;}
goto T168;
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
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP1	*/

static object LI21()

{	 VMB21 VMS21 VMV21
goto TTL;
TTL:;
	{object V100;
	V101= (*(LnkLI254))();
	V100= (*(LnkLI13))(/* INLINE-ARGS */V101);
	if(((*(LnkLI9))((V100),VV[78]))==Cnil){
	goto T187;}
	(void)((*(LnkLI255))());
	setq(VV[51],(*(LnkLI255))());}
goto T187;
T187:;
	{register object V102;
	V102= (*(LnkLI255))();
goto T195;
T195:;
	if(((V102))!=Cnil){
	goto T196;}
	if((symbol_value(VV[34]))!=Cnil){
	goto T196;}
	{object V103 = Cnil;
	VMR21(V103)}
goto T196;
T196:;
	{register object V104;
	V104= (*(LnkLI13))((V102));
	{register object V105;
	V105= (*(LnkLI256))((V104));
	if(((V105))==Cnil){
	goto T206;}
	goto T202;
goto T206;
T206:;
	if(((*(LnkLI9))((V104),VV[25]))==Cnil){
	goto T209;}
	(void)((*(LnkLI257))());
	goto T202;
goto T209;
T209:;
	if(((*(LnkLI9))((V104),VV[79]))==Cnil){
	goto T212;}
	V106= (*(LnkLI255))();
	V107= list(3,VV[80],/* INLINE-ARGS */V106,VV[81]);
	setq(VV[49],make_cons(/* INLINE-ARGS */V107,symbol_value(VV[49])));
	goto T202;
goto T212;
T212:;
	if(((*(LnkLI9))((V104),VV[82]))==Cnil){
	goto T216;}
	V108= (*(LnkLI255))();
	V109= list(3,VV[5],/* INLINE-ARGS */V108,VV[83]);
	setq(VV[49],make_cons(/* INLINE-ARGS */V109,symbol_value(VV[49])));
	goto T202;
goto T216;
T216:;
	if(((*(LnkLI9))((V104),VV[56]))==Cnil){
	goto T220;}
	V110= (*(LnkLI258))();
	setq(VV[49],append(/* INLINE-ARGS */V110,symbol_value(VV[49])));
	goto T202;
goto T220;
T220:;
	if(((*(LnkLI9))((V104),VV[84]))==Cnil){
	goto T224;}
	V111= (*(LnkLI259))();
	setq(VV[49],append(/* INLINE-ARGS */V111,symbol_value(VV[49])));
	goto T202;
goto T224;
T224:;
	if(((*(LnkLI260))((V104)))==Cnil){
	goto T228;}
	V112= (*(LnkLI261))();
	setq(VV[49],append(/* INLINE-ARGS */V112,symbol_value(VV[49])));
	goto T202;
goto T228;
T228:;
	base[0]= VV[85];
	base[1]= (V104);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
goto T202;
T202:;
	V102= (*(LnkLI255))();
	goto T195;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-NO-BODY	*/

static object LI22(V114)

object V114;
{	 VMB22 VMS22 VMV22
goto TTL;
TTL:;
	{register object V115;
	register object V116;
	V115= Ct;
	V116= Ct;
	{register object V117;
	V117= (V114);
goto T240;
T240:;
	if(((V116))!=Cnil){
	goto T241;}
	if((symbol_value(VV[34]))!=Cnil){
	goto T241;}
	goto T238;
goto T241;
T241:;
	{register object V118;
	V118= (*(LnkLI13))((V117));
	if(((*(LnkLI9))((V118),VV[86]))==Cnil){
	goto T250;}
	(void)((*(LnkLI262))((V117)));
	goto T247;
goto T250;
T250:;
	if(((*(LnkLI9))((V118),Cnil))==Cnil){
	goto T253;}
	goto T247;
goto T253;
T253:;
	if(((*(LnkLI9))((V118),VV[87]))==Cnil){
	goto T256;}
	(void)((VFUN_NARGS=0,(*(LnkLI263))()));
	goto T247;
goto T256;
T256:;
	if(((*(LnkLI9))((V118),VV[77]))==Cnil){
	goto T259;}
	V119= (*(LnkLI255))();
	(void)((VFUN_NARGS=2,(*(LnkLI264))(/* INLINE-ARGS */V119,Ct)));
	goto T247;
goto T259;
T259:;
	if(((*(LnkLI9))((V118),VV[88]))==Cnil){
	goto T262;}
	setq(VV[47],(*(LnkLI255))());
	goto T247;
goto T262;
T262:;
	if(((*(LnkLI9))((V118),VV[89]))==Cnil){
	goto T266;}
	V120= (*(LnkLI258))();
	setq(VV[42],append(/* INLINE-ARGS */V120,symbol_value(VV[42])));
	goto T247;
goto T266;
T266:;
	if(((*(LnkLI9))((V118),VV[90]))==Cnil){
	goto T270;}
	V121= (*(LnkLI258))();
	setq(VV[41],append(/* INLINE-ARGS */V121,symbol_value(VV[41])));
	goto T247;
goto T270;
T270:;
	if(((*(LnkLI9))((V118),VV[91]))==Cnil){
	goto T274;}
	(void)((VFUN_NARGS=2,(*(LnkLI263))(Cnil,Ct)));
	goto T247;
goto T274;
T274:;
	if(!(type_of((V118))==t_symbol)){
	goto T277;}
	if((get((V118),VV[92],Cnil))==Cnil){
	goto T277;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))((V117),VV[92])));
	goto T247;
goto T277;
T277:;
	if(((V116))==Cnil){
	goto T283;}
	V115= Cnil;
	goto T281;
goto T283;
T283:;
	(void)((*(LnkLI266))());
goto T281;
T281:;
	goto T238;}
goto T247;
T247:;
	V116= Cnil;
	V117= (*(LnkLI255))();
	goto T240;}
goto T238;
T238:;
	{object V122 = (V115);
	VMR22(V122)}}
	return Cnil;
}
/*	local entry for function PARSE-LOOP-WITH	*/

static object LI23(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V123;
	object V124;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg = narg - 0;
	if (narg <= 0) goto T291;
	else {
	V123= va_arg(ap,object);}
	if (--narg <= 0) goto T292;
	else {
	V124= va_arg(ap,object);}
	--narg; goto T293;
goto T291;
T291:;
	V123= Cnil;
goto T292;
T292:;
	V124= Cnil;
goto T293;
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
goto T304;
T304:;
	base[0]= VV[95];
	base[1]= (V125);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T303;
T303:;
	V128= (*(LnkLI255))();
	(void)((VFUN_NARGS=7,(*(LnkLI267))((V125),/* INLINE-ARGS */V128,(((V123))==Cnil?Ct:Cnil),Cnil,Cnil,Ct,(V124))));
	goto T297;
goto T300;
T300:;
	(void)((VFUN_NARGS=5,(*(LnkLI268))((V125),Cnil,Cnil,(((V123))==Cnil?Ct:Cnil),(V124))));}
goto T297;
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
goto T315;
T315:;
	if(((*(LnkLI9))((V131),VV[91]))==Cnil){
	goto T318;}
	{object V134 = (VFUN_NARGS=2,(*(LnkLI263))(Ct,Ct));
	VMR23(V134)}
goto T318;
T318:;
	(void)((*(LnkLI266))());
	{object V135 = (VFUN_NARGS=1,(*(LnkLI263))(Ct));
	VMR23(V135)}}
goto T310;
T310:;
	{object V136 = Cnil;
	VMR23(V136)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-DO	*/

static object LI24()

{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	{register object V137;
	V137= Cnil;
	{register object V138;
	V138= (*(LnkLI255))();
goto T325;
T325:;
	if(!(type_of((V138))==t_cons||((V138))==Cnil)){
	goto T330;}
	V137= make_cons((V138),(V137));
	if(symbol_value(VV[34])!=Cnil){
	goto T328;}
	goto T322;
goto T330;
T330:;
	(void)((*(LnkLI266))());
	goto T322;
goto T328;
T328:;
	V138= (*(LnkLI255))();
	goto T325;}
goto T322;
T322:;
	if((V137)!=Cnil){
	goto T338;}
	base[0]= VV[96];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T338;
T338:;
	{object V139 = (V137);
	VMR24(V139)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-INITIALLY	*/

static object LI25(V141)

object V141;
{	 VMB25 VMS25 VMV25
goto TTL;
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
goto T348;
T348:;
	if(!(endp((V144)))){
	goto T349;}
	{object V146 = Cnil;
	VMR25(V146)}
goto T349;
T349:;
	{register object V147;
	if(type_of((V145))==t_cons||((V145))==Cnil){
	goto T355;}
	V147= Cnil;
	goto T354;
goto T355;
T355:;
	{register object x= car((V145)),V148= VV[98];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T357;
	}else V148=V148->c.c_cdr;}
	V147= Cnil;
	goto T354;
goto T357;
T357:;
	if((length((V145)))==(3)){
	goto T359;}
	V147= Cnil;
	goto T354;
goto T359;
T359:;
	if(type_of(cadr((V145)))==t_symbol){
	goto T361;}
	V147= Cnil;
	goto T354;
goto T361;
T361:;
	base[2]= caddr((V145));
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T363;}
	V147= Cnil;
	goto T354;
goto T363;
T363:;
	{register object x= cadr((V145)),V149= caar(symbol_value(VV[46]));
	while(!endp(V149))
	if(type_of(V149->c.c_car)==t_cons &&eql(x,V149->c.c_car->c.c_car)){
	goto T366;
	}else V149=V149->c.c_cdr;}
	V147= Cnil;
	goto T354;
goto T366;
T366:;
	V147= (VFUN_NARGS=7,(*(LnkLI267))(cadr((V145)),caddr((V145)),Cnil,Cnil,Cnil,Ct,Ct));
goto T354;
T354:;
	if(((V147))==Cnil){
	goto T369;}
	goto T353;
goto T369;
T369:;
	setq(VV[48],make_cons((V145),symbol_value(VV[48])));}
goto T353;
T353:;
	V144= cdr((V144));
	V145= car((V144));
	goto T348;}}
goto T342;
T342:;
	if(((*(LnkLI9))((V142),VV[99]))==Cnil){
	goto T378;}
	V150= (*(LnkLI258))();
	setq(VV[43],append(/* INLINE-ARGS */V150,symbol_value(VV[43])));
	{object V151 = symbol_value(VV[43]);
	VMR25(V151)}
goto T378;
T378:;
	base[0]= VV[85];
	base[1]= (V142);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V152 = vs_base[0];
	VMR25(V152)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-ONE-WHEN-CLAUSE	*/

static object LI26()

{	 VMB26 VMS26 VMV26
goto TTL;
TTL:;
	{register object V153;
	register object V154;
	register object V155;
	V153= Cnil;
	V154= VV[100];
	V155= Cnil;
goto T388;
T388:;
	if((symbol_value(VV[34]))==Cnil){
	goto T391;}
	goto T390;
goto T391;
T391:;
	goto T386;
goto T390;
T390:;
	V155= (*(LnkLI255))();
	{register object V156;
	V156= (*(LnkLI13))((V155));
	{register object V157;
	V157= (*(LnkLI256))((V156));
	if(((V157))==Cnil){
	goto T399;}
	goto T395;
goto T399;
T399:;
	if(((*(LnkLI260))((V156)))==Cnil){
	goto T402;}
	if(!(eql(VV[100],(V154)))){
	goto T405;}
	goto T404;
goto T405;
T405:;
	goto T389;
goto T404;
T404:;
	V158= (*(LnkLI261))();
	V153= append(/* INLINE-ARGS */V158,(V153));
	V154= VV[5];
	goto T395;
goto T402;
T402:;
	if(((*(LnkLI9))((V156),VV[101]))==Cnil){
	goto T411;}
	if(!(eql(VV[100],(V154)))){
	goto T414;}
	goto T413;
goto T414;
T414:;
	goto T389;
goto T413;
T413:;
	V159= (*(LnkLI259))();
	V153= append(/* INLINE-ARGS */V159,(V153));
	V154= VV[5];
	goto T395;
goto T411;
T411:;
	if(((*(LnkLI9))((V156),VV[56]))==Cnil){
	goto T420;}
	if(!(eql(VV[100],(V154)))){
	goto T423;}
	goto T422;
goto T423;
T423:;
	goto T389;
goto T422;
T422:;
	V160= (*(LnkLI258))();
	V153= append(/* INLINE-ARGS */V160,(V153));
	V154= VV[5];
	goto T395;
goto T420;
T420:;
	if(((*(LnkLI9))((V156),VV[5]))==Cnil){
	goto T429;}
	if(!(eql(VV[5],(V154)))){
	goto T432;}
	goto T431;
goto T432;
T432:;
	base[0]= VV[102];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T431;
T431:;
	V154= VV[100];
	goto T395;
goto T429;
T429:;
	(void)((*(LnkLI266))());
	goto T386;}}
goto T395;
T395:;
	goto T388;
goto T389;
T389:;
	(void)((*(LnkLI266))());
	goto T386;
goto T386;
T386:;
	if((V153)!=Cnil){
	goto T438;}
	base[0]= VV[103];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T438;
T438:;
	{object V161 = (V153);
	VMR26(V161)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-WHEN	*/

static object LI27()

{	 VMB27 VMS27 VMV27
goto TTL;
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
goto T445;
T445:;
	V165= (*(LnkLI255))();
goto T443;
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
goto T449;
T449:;
	V168= nreverse((V162));
	V169= make_cons((V165),/* INLINE-ARGS */V168);
	if((V163)==Cnil){
	V170= Cnil;
	goto T457;}
	V171= nreverse((V164));
	V172= make_cons(Ct,/* INLINE-ARGS */V171);
	V170= make_cons(/* INLINE-ARGS */V172,Cnil);
goto T457;
T457:;
	V173= listA(3,VV[14],/* INLINE-ARGS */V169,V170);
	{object V174 = make_cons(/* INLINE-ARGS */V173,Cnil);
	VMR27(V174)}}}
	return Cnil;
}
/*	local entry for function POINTER-FOR-COLLECT	*/

static object LI28(V176)

object V176;
{	 VMB28 VMS28 VMV28
goto TTL;
TTL:;{object V177;
	{register object x= (V176),V179= symbol_value(VV[52]);
	while(!endp(V179))
	if(type_of(V179->c.c_car)==t_cons &&eql(x,V179->c.c_car->c.c_car)){
	V178= (V179->c.c_car);
	goto T460;
	}else V179=V179->c.c_cdr;
	V178= Cnil;}
goto T460;
T460:;
	V177= cdr(V178);
	if(V177==Cnil)goto T458;
	{object V180 = V177;
	VMR28(V180)}
goto T458;
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
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-COLLECT	*/

static object LI29()

{	 VMB29 VMS29 VMV29
goto TTL;
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
goto T469;
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
goto T476;
T476:;
	(void)((*(LnkLI266))());
	if((symbol_value(VV[45]))==Cnil){
	goto T481;}
	V185= symbol_value(VV[45]);
	goto T473;
goto T481;
T481:;
	base[0]= VV[109];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V192= vs_base[0];
	setq(VV[45],(VFUN_NARGS=2,(*(LnkLI267))(V192,Cnil)));
	V185= symbol_value(VV[45]);}
goto T473;
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
goto T494;
T494:;
	{object V194;
	V194= (*(LnkLI13))((V188));
	if(((*(LnkLI9))((V194),VV[114]))==Cnil){
	goto T488;}
	if(!(type_of((V189))==t_cons||((V189))==Cnil)){
	goto T505;}
	if(eql(car((V189)),VV[61])){
	goto T488;}
goto T505;
T505:;
	V189= list(2,VV[115],(V189));}}
goto T488;
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
goto T512;
T512:;
	V187= (V189);
goto T510;
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
goto T527;
T527:;
	V200= list(2,(V186),(V198));
	V201= list(3,VV[14],/* INLINE-ARGS */V200,list(2,Ct,list(3,VV[15],(V186),list(2,VV[118],list(3,VV[15],(V185),(V187))))));
	V196= make_cons(/* INLINE-ARGS */V201,Cnil);
	goto T520;}
goto T523;
T523:;
	if(((*(LnkLI9))((V197),VV[27]))==Cnil){
	goto T530;}
	if((symbol_value(VV[111]))==Cnil){
	goto T533;}
	V202= list(2,VV[18],(V186));
	V203= list(3,VV[15],/* INLINE-ARGS */V202,list(3,VV[15],(V186),list(3,VV[119],(V187),Cnil)));
	V196= make_cons(/* INLINE-ARGS */V203,Cnil);
	goto T520;
goto T533;
T533:;
	V204= list(2,VV[18],(V186));
	V205= list(2,(V186),list(3,VV[15],/* INLINE-ARGS */V204,list(3,VV[15],(V186),list(3,VV[119],(V187),Cnil))));
	V206= list(3,VV[14],/* INLINE-ARGS */V205,list(2,Ct,list(3,VV[15],(V185),list(3,VV[15],(V186),list(3,VV[119],(V187),Cnil)))));
	V196= make_cons(/* INLINE-ARGS */V206,Cnil);
	goto T520;
goto T530;
T530:;
	V188= (*(LnkLI13))((V188));
	if(((VFUN_NARGS=4,(*(LnkLI249))((V188),symbol_value(VV[28]),VV[30],VV[9])))==Cnil){
	goto T538;}
	V196= (*(LnkLI271))((V188),(V185),(V187));
	goto T520;
goto T538;
T538:;
	base[0]= VV[120];
	base[1]= (V188);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V196= vs_base[0];}
goto T520;
T520:;
	if(!(eql((V187),(V189)))){
	goto T543;}
	{object V207 = (V196);
	VMR29(V207)}
goto T543;
T543:;
	V208= list(3,VV[15],(V187),(V189));
	V209= make_cons(/* INLINE-ARGS */V208,Cnil);
	{object V210 = nconc((V196),/* INLINE-ARGS */V209);
	VMR29(V210)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-PARSE-ADDITIONAL-COLLECTIONS	*/

static object LI30(V214,V215,V216)

object V214;object V215;object V216;
{	 VMB30 VMS30 VMV30
	bds_check;
goto TTL;
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
goto T552;
T552:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T553;}
	goto T549;
goto T553;
T553:;
	{register object V222;
	V222= (*(LnkLI13))((V221));
	{register object V223;
	V223= (*(LnkLI256))((V222));
	if(((V223))==Cnil){
	goto T561;}
	goto T557;
goto T561;
T561:;
	if(((*(LnkLI9))((V222),VV[56]))==Cnil){
	goto T564;}
	V217= (*(LnkLI258))();
	goto T557;
goto T564;
T564:;
	base[4]= VV[85];
	base[5]= (V222);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}}
goto T557;
T557:;
	V221= (*(LnkLI255))();
	goto T552;}
goto T549;
T549:;
	{object V224 = (V217);
	bds_unwind1;
	bds_unwind1;
	VMR30(V224)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function THE-TYPE	*/

static object LI31(V227,V228)

object V227;register object V228;
{	 VMB31 VMS31 VMV31
goto TTL;
TTL:;
	if(symbol_value(VV[47])==Cnil){
	goto T572;}
	V228= Cnil;
goto T572;
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
goto T576;
T576:;}
	if((((type_of((V228))==t_symbol&&((V228))->s.s_hpack==keyword_package)?Ct:Cnil))==Cnil){
	goto T580;}
	V228= Cnil;
	goto T575;
goto T580;
T580:;
goto T575;
T575:;
goto T574;
T574:;
	if(type_of((V228))==t_cons){
	goto T583;}
	goto T582;
goto T583;
T583:;
	if((car((V228)))==(VV[122])){
	goto T585;}
	goto T582;
goto T585;
T585:;
	V228= cadr((V228));
goto T582;
T582:;
	if(((V228))==Cnil){
	goto T589;}
	{object V230 = list(3,VV[123],(V228),(V227));
	VMR31(V230)}
goto T589;
T589:;
	{object V231 = (V227);
	VMR31(V231)}
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
	{object V232 = vs_base[0];
	VMR32(V232)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-VALUE	*/

static object LI33(V235,V236)

register object V235;object V236;
{	 VMB33 VMS33 VMV33
goto TTL;
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
goto T608;
T608:;
goto T606;
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
goto T618;
T618:;
	base[0]= (V235);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V238= vs_base[0];
goto T616;
T616:;{object V239;
	base[0]= (V238);
	base[1]= (V237);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk129)();
	vs_top=sup;
	V239= vs_base[0];
	if(V239==Cnil)goto T626;
	goto T625;
goto T626;
T626:;}
	base[0]= VV[128];
	base[1]= (V235);
	base[2]= (V237);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
goto T625;
T625:;
	{object V240 = make_cons((V235),Cnil);
	VMR33(V240)}}
goto T613;
T613:;
	{register object V241;
	V241= Cnil;
	if(!(type_of((V235))!=t_cons)){
	goto T635;}
	V242= Cnil;
	goto T633;
goto T635;
T635:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V241= vs_base[0];
	V243= list(2,(V241),(V235));
	V242= make_cons(/* INLINE-ARGS */V243,Cnil);
goto T633;
T633:;
	if((symbol_value(VV[39]))==Cnil){
	goto T640;}
	if((V241)!=Cnil){
	base[0]= (V241);
	goto T642;}
	base[0]= (V235);
goto T642;
T642:;
	base[1]= VV[127];
	base[2]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V244= vs_base[0];
	goto T638;
goto T640;
T640:;
	if((V241)!=Cnil){
	V244= (V241);
	goto T638;}
	V244= (V235);
goto T638;
T638:;
	V245= list(3,VV[80],list(3,VV[129],V244,list(2,VV[10],(V237))),VV[130]);
	if((V241)!=Cnil){
	V246= (V241);
	goto T645;}
	V246= (V235);
goto T645;
T645:;
	V247= list(4,VV[12],V242,/* INLINE-ARGS */V245,V246);
	{object V248 = make_cons(/* INLINE-ARGS */V247,Cnil);
	VMR33(V248)}}
goto T594;
T594:;
	{object V249 = make_cons((V235),Cnil);
	VMR33(V249)}}
	base[0]=base[0];
	return Cnil;
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
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V252= V251;
	V253= V250;
	narg = narg - 2;
	if (narg <= 0) goto T646;
	else {
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
goto T646;
T646:;
	V254= Ct;
goto T647;
T647:;
	V255= Cnil;
goto T648;
T648:;
	V256= Cnil;
goto T649;
T649:;
	V257= Ct;
goto T650;
T650:;
	V258= Cnil;
goto T651;
T651:;
	{register object V259;
	V259= Cnil;
	if(((V254))!=Cnil){
	goto T659;}
	if((symbol_value(VV[46]))!=Cnil){
	goto T658;}
goto T659;
T659:;
	V260= make_cons(Cnil,Cnil);
	setq(VV[46],make_cons(/* INLINE-ARGS */V260,symbol_value(VV[46])));
goto T658;
T658:;
	{register object x= (V252),V261= caar(symbol_value(VV[46]));
	while(!endp(V261))
	if(type_of(V261->c.c_car)==t_cons &&eql(x,V261->c.c_car->c.c_car)){
	V259= (V261->c.c_car);
	goto T668;
	}else V261=V261->c.c_cdr;
	V259= Cnil;}
goto T668;
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
goto T669;
T669:;
	if(type_of(V259)!=t_cons)FEwrong_type_argument(Scons,V259);
	(V259)->c.c_cdr = (V263);
	goto T664;}
goto T666;
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
goto T674;
T674:;
	base[0]= (V253);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T672;}
goto T673;
T673:;
	V264= Cnil;
	goto T671;
goto T672;
T672:;
	{register object V266;
	register object V267;
	V266= cdr(symbol_value(VV[46]));
	V267= car((V266));
goto T682;
T682:;
	if(!(endp((V266)))){
	goto T683;}
	V264= Cnil;
	goto T671;
goto T683;
T683:;
	{register object x= (V252),V268= car((V267));
	while(!endp(V268))
	if(type_of(V268->c.c_car)==t_cons &&eql(x,V268->c.c_car->c.c_car)){
	V259= (V268->c.c_car);
	goto T690;
	}else V268=V268->c.c_cdr;
	V259= Cnil;}
goto T690;
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
goto T693;
T693:;
	if(type_of((V269))!=t_cons)FEwrong_type_argument(Scons,(V269));
	((V269))->c.c_cdr = (V270);}
goto T691;
T691:;
	V264= Ct;
	goto T671;
goto T687;
T687:;
	V266= cdr((V266));
	V267= car((V266));
	goto T682;}
goto T671;
T671:;
	if(((V264))==Cnil){
	goto T701;}
	goto T664;
goto T701;
T701:;
	{object V271;
	object V272;
	V271= symbol_value(VV[46]);
	if((V253)==Cnil){
	V273= Cnil;
	goto T705;}
	V273= (*(LnkLI272))((V253),(V255));
goto T705;
T705:;
	V274= make_cons((V252),V273);
	V272= make_cons(/* INLINE-ARGS */V274,caar((V271)));
	if(type_of(car((V271)))!=t_cons)FEwrong_type_argument(Scons,car((V271)));
	(car((V271)))->c.c_car = (V272);
	(void)(car((V271)));}}
goto T664;
T664:;
	if((V255)==Cnil){
	goto T707;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V252),(V255),(V256))));
goto T707;
T707:;
	{object V275 = (V252);
	VMR34(V275)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
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
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <3) too_few_arguments();
	V279= V278;
	V280= V277;
	V281= V276;
	narg = narg - 3;
	if (narg <= 0) goto T708;
	else {
	V282= va_arg(ap,object);}
	--narg; goto T709;
goto T708;
T708:;
	V282= Cnil;
goto T709;
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
goto T714;
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
goto T716;
T716:;
	if(symbol_value(VV[132])==Cnil){
	goto T713;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V279),VV[133],(V281))));
goto T713;
T713:;
	if(((V280))==Cnil){
	goto T721;}
	if(((V281))!=Cnil){
	goto T722;}
	if((symbol_value(VV[47]))!=Cnil){
	goto T721;}
goto T722;
T722:;
	{register object V285;
	register object V286;
	V285= symbol_value(VV[46]);
	V286= car((V285));
goto T732;
T732:;
	if(!(endp((V285)))){
	goto T733;}
	goto T728;
goto T733;
T733:;
	{register object x= (V279),V287= car((V286));
	while(!endp(V287))
	if(type_of(V287->c.c_car)==t_cons &&eql(x,V287->c.c_car->c.c_car)){
	goto T739;
	}else V287=V287->c.c_cdr;
	goto T737;}
goto T739;
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
goto T747;
T747:;
	if(((V282))==Cnil){
	goto T752;}
	base[2]= list(3,VV[122],(V280),(V279));
	goto T745;
goto T752;
T752:;
	base[2]= list(2,(V280),(V279));
goto T745;
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
goto T737;
T737:;
	V285= cdr((V285));
	V286= car((V285));
	goto T732;}
goto T728;
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
goto T721;
T721:;
	{object V290 = (V279);
	VMR35(V290)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-DECLARE	*/

static object LI36(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V291;
	register object V292;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg = narg - 0;
	if (narg <= 0) goto T765;
	else {
	V291= va_arg(ap,object);}
	if (--narg <= 0) goto T766;
	else {
	V292= va_arg(ap,object);}
	--narg; goto T767;
goto T765;
T765:;
	V291= (*(LnkLI255))();
goto T766;
T766:;
	V292= Ct;
goto T767;
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
goto T771;
T771:;
	{register object V295;
	register object V296;
	V295= cdr((V291));
	V296= car((V295));
goto T782;
T782:;
	if(!(endp((V295)))){
	goto T783;}
	{object V297 = Cnil;
	VMR36(V297)}
goto T783;
T783:;
	(void)((VFUN_NARGS=4,(*(LnkLI273))((V296),car((V291)),(V292),(V294))));
	V295= cdr((V295));
	V296= car((V295));
	goto T782;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
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
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V299= V298;
	narg = narg - 1;
	if (narg <= 0) goto T793;
	else {
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
goto T793;
T793:;
	V300= Cnil;
goto T794;
T794:;
	V301= Cnil;
goto T795;
T795:;
	V302= Cnil;
goto T796;
T796:;
	V303= Cnil;
goto T797;
T797:;
	{object V304;
	V304= (((V299))==Cnil?Ct:Cnil);
	if(((V304))==Cnil){
	goto T804;}
	{object V305 = (V304);
	VMR37(V305)}
goto T804;
T804:;
	if(!(type_of((V299))==t_symbol)){
	goto T807;}
	{object V306 = (VFUN_NARGS=7,(*(LnkLI267))((V299),(V300),(V302),(V301),Cnil,Ct,(V303)));
	VMR37(V306)}
goto T807;
T807:;
	if(!(type_of((V299))==t_cons||((V299))==Cnil)){
	goto T810;}
	(void)((VFUN_NARGS=1,(*(LnkLI268))(car((V299)))));
	{object V307 = (VFUN_NARGS=1,(*(LnkLI268))(cdr((V299))));
	VMR37(V307)}
goto T810;
T810:;
	{object V308 = Cnil;
	VMR37(V308)}}
	va_end(ap);
	return Cnil;}
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
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V310= V309;
	narg= narg - 1;
	V312 = list_vector(narg,ap);
	V311= V312;
	if((V310)!=Cnil){
	goto T813;}
	base[0]= VV[135];
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V310= vs_base[0];
goto T813;
T813:;
	{register object V313;
	register object V314;
	V313= (V310);
	V314= (V311);
goto T818;
T818:;
	if(((V314))!=Cnil){
	goto T819;}
	goto T816;
goto T819;
T819:;
	if((car((V314)))!=Cnil){
	goto T824;}
	goto T823;
goto T824;
T824:;
	{register object V315;
	register object V316;
	V315= (V313);
	V316= car((V314));
	if(type_of((V315))!=t_cons)FEwrong_type_argument(Scons,(V315));
	((V315))->c.c_car = (V316);}
goto T823;
T823:;
	V313= cdr((V313));
	V314= cdr((V314));
	goto T818;}
goto T816;
T816:;
	{object V317 = (V310);
	VMR38(V317)}
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
goto T841;
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
goto T847;
T847:;
	if(((*(LnkLI9))((V324),VV[141]))==Cnil){
	goto T859;}
	{register object V328;
	if(!(type_of((V320))==t_symbol)){
	goto T863;}
	V328= (V320);
	goto T861;
goto T863;
T863:;
	base[1]= VV[142];
	vs_top=(vs_base=base+1)+1;
	Lgensym();
	vs_top=sup;
	V328= vs_base[0];
goto T861;
T861:;
	(void)((VFUN_NARGS=4,(*(LnkLI268))((V320),Cnil,VV[138],Ct)));
	V329= (*(LnkLI255))();
	(void)((VFUN_NARGS=3,(*(LnkLI267))((V328),/* INLINE-ARGS */V329,Cnil)));
	V322= list(3,VV[15],(V328),list(2,VV[18],(V328)));
	if(eql((V328),(V320))){
	goto T870;}
	V330= list(3,VV[139],(V320),(V328));
	setq(VV[49],make_cons(/* INLINE-ARGS */V330,symbol_value(VV[49])));
goto T870;
T870:;
	V321= list(2,VV[140],(V328));
	goto T844;}
goto T859;
T859:;
	if(((*(LnkLI9))((V324),VV[143]))==Cnil){
	goto T876;}
	V331= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),/* INLINE-ARGS */V331,Cnil,Cnil,VV[144]));
	goto T844;
goto T876;
T876:;
	if(((*(LnkLI9))((V324),VV[145]))==Cnil){
	goto T880;}
	V332= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),/* INLINE-ARGS */V332,Cnil,Cnil,VV[146]));
	goto T844;
goto T880;
T880:;
	if(((*(LnkLI9))((V324),VV[147]))==Cnil){
	goto T884;}
	V318= (*(LnkLI255))();
	if(((V319))==Cnil){
	goto T889;}
	V319= (VFUN_NARGS=5,(*(LnkLI274))((V319),Cnil,Cnil,Cnil,(V318)));
	goto T844;
goto T889;
T889:;
	bds_bind(VV[148],small_fixnum(4));
	bds_bind(VV[149],small_fixnum(4));
goto T894;
T894:;
	if(!((car(caddr((V322))))==(VV[18]))){
	goto T895;}
	bds_unwind1;
	bds_unwind1;
	goto T892;
goto T895;
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
goto T892;
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
goto T914;
T914:;
	V334= list(2,cadr((V318)),cadr((V322)));
	goto T909;
goto T911;
T911:;
	V334= list(3,VV[156],(V318),cadr((V322)));
goto T909;
T909:;
	V322= list(3,VV[15],/* INLINE-ARGS */V333,V334);
	goto T844;
goto T884;
T884:;
	if(((*(LnkLI9))((V324),VV[157]))==Cnil){
	goto T916;}
	V336= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),Cnil,/* INLINE-ARGS */V336,Cnil,VV[144]));
	goto T844;
goto T916;
T916:;
	if(((*(LnkLI9))((V324),VV[158]))==Cnil){
	goto T920;}
	V337= (*(LnkLI255))();
	V319= (VFUN_NARGS=6,(*(LnkLI274))((V319),(V320),Cnil,/* INLINE-ARGS */V337,Cnil,VV[146]));
	goto T844;
goto T920;
T920:;
	if(((*(LnkLI9))((V324),VV[159]))==Cnil){
	goto T924;}
	V338= (*(LnkLI255))();
	V319= (VFUN_NARGS=7,(*(LnkLI274))((V319),(V320),Cnil,/* INLINE-ARGS */V338,Cnil,Cnil,Ct));
	goto T844;
goto T924;
T924:;
	if(!(type_of((V324))==t_symbol)){
	goto T928;}
	if((get((V324),VV[160],Cnil))==Cnil){
	goto T928;}
	V339= (*(LnkLI13))((V323));
	(void)((VFUN_NARGS=3,(*(LnkLI265))(/* INLINE-ARGS */V339,VV[160],(V320))));
	goto T838;
goto T928;
T928:;
	if(!(type_of((V324))==t_symbol)){
	goto T934;}
	if((get((V324),VV[161],Cnil))==Cnil){
	goto T934;}
	V340= (*(LnkLI13))((V323));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V340,(V320)));
	goto T838;
goto T934;
T934:;
	(void)((*(LnkLI266))());
	goto T838;}
goto T844;
T844:;
	V323= (*(LnkLI255))();
	goto T841;}
goto T838;
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
goto T953;
T953:;
	setq(VV[47],Ct);
goto T952;
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
goto T966;
T966:;
	base[1]= list(3,(V341),VV[127],(V345));
goto T964;
T964:;
	bds_bind(VV[39],base[1]);
	(void)((VFUN_NARGS=6,(*(LnkLI267))((V348),(V344),Cnil,VV[126],Cnil,Cnil)));
	if(((V342))==Cnil){
	goto T974;}
	if(!(((V341))==(VV[144]))){
	goto T977;}
	V349= VV[163];
	goto T972;
goto T977;
T977:;
	V349= VV[164];
	goto T972;
goto T974;
T974:;
	if(!(((V341))==(VV[144]))){
	goto T980;}
	V349= VV[165];
	goto T972;
goto T980;
T980:;
	V349= VV[166];
goto T972;
T972:;
	V321= list(3,V349,(V343),(V348));
	bds_unwind1;
	goto T943;}
goto T960;
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
goto T993;
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
goto T1002;
T1002:;
	base[1]= VV[168];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
goto T1001;
T1001:;
	if(!(((V341))==(VV[144]))){
	goto T1009;}
	if((V345)!=Cnil){
	V351= (V345);
	goto T1011;}
	V351= small_fixnum(1);
goto T1011;
T1011:;
	V350= list(3,VV[164],(V343),number_minus(VV[169],V351));
	goto T1007;
goto T1009;
T1009:;
	if((V345)!=Cnil){
	V352= (V345);
	goto T1012;}
	V352= small_fixnum(1);
goto T1012;
T1012:;
	V350= list(3,VV[163],(V343),number_plus(VV[170],V352));
goto T1007;
T1007:;
	V353= list(3,VV[80],V350,VV[171]);
	setq(VV[42],make_cons(/* INLINE-ARGS */V353,symbol_value(VV[42])));}
goto T943;
T943:;
	if((V321)==Cnil){
	goto T1013;}
	base[1]= list(3,VV[5],(V321),VV[172]);
	vs_top=(vs_base=base+1)+1;
	Lcopy_tree();
	vs_top=sup;
	V354= vs_base[0];
	setq(VV[41],make_cons(V354,symbol_value(VV[41])));
goto T1013;
T1013:;
	if((V322)==Cnil){
	{object V355 = Cnil;
	VMR39(V355)}}
	setq(VV[42],make_cons((V322),symbol_value(VV[42])));
	{object V356 = symbol_value(VV[42]);
	VMR39(V356)}}}
	base[0]=base[0];
	return Cnil;
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
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V359= V358;
	V360= V357;
	narg = narg - 2;
	if (narg <= 0) goto T1018;
	else {
	V361= va_arg(ap,object);}
	--narg; goto T1019;
goto T1018;
T1018:;
	V361= Cnil;
goto T1019;
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
goto T1028;
T1028:;}
	base[0]= VV[174];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1027;
T1027:;
	V364= cdr((V366));
	goto T1024;}
goto T1025;
T1025:;
	if((V365!= VV[92]))goto T1031;
	V364= get((V359),VV[175],Cnil);
	goto T1024;
goto T1031;
T1031:;
	FEerror("The ECASE key value ~s is illegal.",1,V365);
	{object V366;
	V366= get((V359),VV[173],Cnil);{object V368;
	V368= cdr((V366));
	if(V368==Cnil)goto T1034;
	goto T1033;
goto T1034;
T1034:;}
	base[1]= VV[174];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
goto T1033;
T1033:;
	V364= cdr((V366));}}
goto T1024;
T1024:;
	{object V369;
	{register object x= VV[176],V370= (V364);
	while(!endp(V370))
	if(eql(x,V370->c.c_car)){
	goto T1040;
	}else V370=V370->c.c_cdr;
	goto T1039;}
goto T1040;
T1040:;
	{object V371;
	V371= symbol_value(VV[34]);
	setq(VV[34],Cnil);
	V369= (V371);
	goto T1037;}
goto T1039;
T1039:;
	{register object V372;
	register object V373;
	V372= make_fixnum(length((V364)));
	V373= small_fixnum(0);
goto T1046;
T1046:;
	if(!(number_compare((V373),(V372))>=0)){
	goto T1047;}
	V369= nreverse((V362));
	goto T1037;
goto T1047;
T1047:;
	V362= make_cons(car(symbol_value(VV[34])),(V362));
	setq(VV[34],cdr(symbol_value(VV[34])));
	V373= one_plus((V373));
	goto T1046;}
goto T1037;
T1037:;
	{object V375= (V360);
	if((V375!= VV[160]))goto T1060;
	base[0]= (V363);
	base[1]= (V361);
	{object V376;
	V376= (V369);
	 vs_top=base+2;
	 while(!endp(V376))
	 {vs_push(car(V376));V376=cdr(V376);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V374= vs_base[0];
	goto T1059;
goto T1060;
T1060:;
	if((V375!= VV[92]))goto T1064;
	base[0]= (V363);
	{object V377;
	V377= (V369);
	 vs_top=base+1;
	 while(!endp(V377))
	 {vs_push(car(V377));V377=cdr(V377);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V374= vs_base[0];
	goto T1059;
goto T1064;
T1064:;
	V374= Cnil;}
goto T1059;
T1059:;
	setq(VV[34],append(V374,symbol_value(VV[34])));
	{object V378 = symbol_value(VV[34]);
	VMR40(V378)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-MAP	*/

static object LI41(V381,V382)

object V381;object V382;
{	 VMB41 VMS41 VMV41
goto TTL;
TTL:;
	if(symbol_value(VV[53])==Cnil){
	goto T1067;}
	base[0]= VV[177];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1067;
T1067:;
	{object V383;
	object V384;
	V383= get((V381),VV[161],Cnil);
	V384= get((V381),VV[178],Cnil);
	if((V384)!=Cnil){
	goto T1071;}
	base[0]= VV[179];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1071;
T1071:;
	{register object x= VV[176],V385= (V384);
	while(!endp(V385))
	if(eql(x,V385->c.c_car)){
	goto T1075;
	}else V385=V385->c.c_cdr;
	goto T1073;}
goto T1075;
T1075:;
	base[0]= VV[180];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1073;
T1073:;
	{register object V386;
	object V387;
	V386= Cnil;
	{register object V388;
	register object V389;
	V390 = make_fixnum(length((V384)));
	V388= one_minus(V390);
	V389= small_fixnum(0);
goto T1082;
T1082:;
	if(!(number_compare((V389),(V388))>=0)){
	goto T1083;}
	V387= nreverse((V386));
	goto T1078;
goto T1083;
T1083:;
	V386= make_cons(car(symbol_value(VV[34])),(V386));
	setq(VV[34],cdr(symbol_value(VV[34])));
	V389= one_plus((V389));
	goto T1082;}
goto T1078;
T1078:;
	{register object V391;
	register object V392;
	V391= (*(LnkLI255))();
	V392= Cnil;
goto T1098;
T1098:;
	if(((*(LnkLI9))((V391),VV[77]))!=Cnil){
	goto T1099;}
	(void)((*(LnkLI266))());
	if((V392)==Cnil){
	setq(VV[44],Cnil);
	goto T1095;}
	setq(VV[44],make_cons(VV[77],(V392)));
	goto T1095;
goto T1099;
T1099:;
	V393= (*(LnkLI255))();
	V392= make_cons(/* INLINE-ARGS */V393,(V392));
	V391= (*(LnkLI255))();
	goto T1098;}
goto T1095;
T1095:;
	base[1]= (V383);
	base[2]= (V382);
	{object V394;
	V394= (V387);
	 vs_top=base+3;
	 while(!endp(V394))
	 {vs_push(car(V394));V394=cdr(V394);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	setq(VV[53],vs_base[0]);
	{object V395 = Cnil;
	VMR41(V395)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUBSTITUTE-SLOOP-BODY	*/

static object LI42(V397)

register object V397;
{	 VMB42 VMS42 VMV42
goto TTL;
TTL:;
	if((symbol_value(VV[53]))==Cnil){
	goto T1114;}
	base[0]= make_cons(VV[16],(V397));
	base[1]= VV[181];
	base[2]= symbol_value(VV[53]);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V398= vs_base[0];
	V397= make_cons(V398,Cnil);
	if(symbol_value(VV[44])==Cnil){
	goto T1114;}
	base[0]= symbol_value(VV[44]);
	base[1]= VV[182];
	base[2]= (V397);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V397= vs_base[0];
goto T1114;
T1114:;
	{object V399 = (V397);
	VMR42(V399)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEF-LOOP-INTERNAL	*/

static object LI43(V403,V402,V401,V400,va_alist)
	object V403,V402,V401,V400;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	bds_check;
	{register object V404;
	register object V405;
	object V406;
	object V407;
	object V408;
	object V409;
	object V410;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <4) too_few_arguments();
	V404= V403;
	V405= V402;
	V406= V401;
	V407= V400;
	narg = narg - 4;
	if (narg <= 0) goto T1127;
	else {
	V408= va_arg(ap,object);}
	if (--narg <= 0) goto T1128;
	else {
	V409= va_arg(ap,object);}
	if (--narg <= 0) goto T1129;
	else {
	V410= va_arg(ap,object);}
	--narg; goto T1130;
goto T1127;
T1127:;
	V408= Cnil;
goto T1128;
T1128:;
	V409= Cnil;
goto T1129;
T1129:;
	V410= Cnil;
goto T1130;
T1130:;
	{object V411;
	bds_bind(VV[184],VV[183]);
	base[3]= Cnil;
	base[4]= VV[185];
	base[5]= (V404);
	base[6]= (V407);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lintern();
	vs_top=sup;
	V411= vs_base[0];
	if((V409)==Cnil){
	goto T1140;}
	V412 = make_fixnum(length((V405)));
	if(!(number_compare(V412,(V409))>=0)){
	goto T1141;}
	goto T1140;
goto T1141;
T1141:;
	base[2]= VV[186];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
goto T1140;
T1140:;
	if((V410)==Cnil){
	goto T1144;}
	V413 = make_fixnum(length((V405)));
	if(!(number_compare(V413,(V410))<=0)){
	goto T1145;}
	goto T1144;
goto T1145;
T1145:;
	base[2]= VV[187];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
goto T1144;
T1144:;
	V414= listA(4,VV[190],(V411),(V405),(V406));
	if((V408)==Cnil){
	V415= Cnil;
	goto T1148;}
	V416= list(3,VV[191],list(2,VV[10],(V404)),(V408));
	V415= make_cons(/* INLINE-ARGS */V416,Cnil);
goto T1148;
T1148:;
	V417= list(2,VV[10],(V404));
	base[3]= Cnil;
	base[4]= VV[192];
	base[5]= (V407);
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
	V418= vs_base[0];
	V419= list(3,VV[7],/* INLINE-ARGS */V417,V418);
	V420= list(3,VV[15],/* INLINE-ARGS */V419,list(2,VV[10],(V411)));
	V421= list(2,VV[10],(V404));
	base[3]= Cnil;
	base[4]= VV[194];
	base[5]= (V407);
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
	V422= vs_base[0];
	V423= list(3,VV[7],/* INLINE-ARGS */V421,V422);
	V424= list(2,/* INLINE-ARGS */V420,list(3,VV[15],/* INLINE-ARGS */V423,list(2,VV[10],(V405))));
	{object V425 = listA(4,VV[188],VV[189],/* INLINE-ARGS */V414,append(V415,/* INLINE-ARGS */V424));
	bds_unwind1;
	VMR43(V425)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SUM-SLOOP-COLLECT	*/

static object LI44(V428,V429)

object V428;object V429;
{	 VMB44 VMS44 VMV44
goto TTL;
TTL:;
	V430= list(3,VV[195],(V428),small_fixnum(0));
	{object V431 = list(4,VV[97],/* INLINE-ARGS */V430,VV[56],list(3,VV[195],(V428),list(3,VV[144],(V428),(V429))));
	VMR44(V431)}
	return Cnil;
}
/*	local entry for function LOGXOR-SLOOP-COLLECT	*/

static object LI45(V434,V435)

register object V434;object V435;
{	 VMB45 VMS45 VMV45
goto TTL;
TTL:;
	V436= list(3,VV[15],(V434),small_fixnum(0));
	V437= list(3,VV[15],(V434),list(3,VV[196],(V434),(V435)));
	{object V438 = list(6,VV[97],/* INLINE-ARGS */V436,VV[56],/* INLINE-ARGS */V437,VV[77],list(3,VV[167],(V434),(V435)));
	VMR45(V438)}
	return Cnil;
}
/*	local entry for function MAXIMIZE-SLOOP-COLLECT	*/

static object LI46(V441,V442)

register object V441;object V442;
{	 VMB46 VMS46 VMV46
goto TTL;
TTL:;
	V443= list(3,VV[195],(V441),Cnil);
	V444= list(3,VV[15],(V441),list(3,VV[198],(V441),(V442)));
	{object V445 = list(4,VV[97],/* INLINE-ARGS */V443,VV[56],list(4,VV[197],(V441),/* INLINE-ARGS */V444,list(3,VV[15],(V441),(V442))));
	VMR46(V445)}
	return Cnil;
}
/*	local entry for function MINIMIZE-SLOOP-COLLECT	*/

static object LI47(V448,V449)

register object V448;object V449;
{	 VMB47 VMS47 VMV47
goto TTL;
TTL:;
	V450= list(3,VV[195],(V448),Cnil);
	V451= list(3,VV[15],(V448),list(3,VV[199],(V448),(V449)));
	{object V452 = list(4,VV[97],/* INLINE-ARGS */V450,VV[56],list(4,VV[197],(V448),/* INLINE-ARGS */V451,list(3,VV[15],(V448),(V449))));
	VMR47(V452)}
	return Cnil;
}
/*	local entry for function COUNT-SLOOP-COLLECT	*/

static object LI48(V455,V456)

object V455;object V456;
{	 VMB48 VMS48 VMV48
goto TTL;
TTL:;
	V457= list(3,VV[195],(V455),small_fixnum(0));
	{object V458 = list(4,VV[97],/* INLINE-ARGS */V457,VV[56],list(3,VV[5],(V456),list(3,VV[15],(V455),list(2,VV[200],(V455)))));
	VMR48(V458)}
	return Cnil;
}
/*	local entry for function THEREIS-SLOOP-COLLECT	*/

static object LI49(V461,V462)

object V461;object V462;
{	 VMB49 VMS49 VMV49
goto TTL;
TTL:;
	{object V463 = list(2,VV[56],list(3,VV[197],(V462),list(2,VV[59],(V462))));
	VMR49(V463)}
	return Cnil;
}
/*	local entry for function ALWAYS-SLOOP-COLLECT	*/

static object LI50(V466,V467)

object V466;object V467;
{	 VMB50 VMS50 VMV50
goto TTL;
TTL:;
	V468= list(3,VV[195],(V466),Ct);
	{object V469 = list(4,VV[97],/* INLINE-ARGS */V468,VV[56],list(3,VV[5],list(2,VV[140],(V467)),VV[201]));
	VMR50(V469)}
	return Cnil;
}
/*	local entry for function NEVER-SLOOP-COLLECT	*/

static object LI51(V472,V473)

object V472;object V473;
{	 VMB51 VMS51 VMV51
goto TTL;
TTL:;
	V474= list(3,VV[195],(V472),Ct);
	{object V475 = list(4,VV[97],/* INLINE-ARGS */V474,VV[56],list(3,VV[5],(V473),VV[202]));
	VMR51(V475)}
	return Cnil;
}
/*	local entry for function AVERAGING-SLOOP-MACRO	*/

static object LI52(V477)

object V477;
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
	base[14]= list(3,VV[15],VV[203],list(3,VV[208],list(3,VV[144],VV[209],(V477)),VV[210]));
	base[15]= VV[211];
	vs_top=(vs_base=base+0)+16;
	LlistA();
	vs_top=sup;
	{object V478 = vs_base[0];
	VMR52(V478)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REPEAT-SLOOP-MACRO	*/

static object LI53(V480)

object V480;
{	 VMB53 VMS53 VMV53
goto TTL;
TTL:;
	{object V481;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V481= vs_base[0];
	{object V482 = list(4,VV[25],(V481),VV[157],(V480));
	VMR53(V482)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RETURN-SLOOP-MACRO	*/

static object LI54(V484)

register object V484;
{	 VMB54 VMS54 VMV54
goto TTL;
TTL:;
	if(!(type_of((V484))==t_cons)){
	goto T1182;}
	if(!((car((V484)))==(VV[21]))){
	goto T1182;}
	V485= cdr((V484));
	goto T1180;
goto T1182;
T1182:;
	V485= make_cons((V484),Cnil);
goto T1180;
T1180:;
	{object V486 = list(2,VV[56],make_cons(VV[59],V485));
	VMR54(V486)}
	return Cnil;
}
/*	local entry for function IN-TABLE-SLOOP-MAP	*/

static object LI55(V489,V490)

object V489;object V490;
{	 VMB55 VMS55 VMV55
goto TTL;
TTL:;
	{object V491 = list(3,VV[212],list(2,VV[213],listA(3,VV[214],(V489),VV[215])),(V490));
	VMR55(V491)}
	return Cnil;
}
/*	local entry for function IN-PACKAGE-SLOOP-MAP	*/

static object LI56(V494,V495)

object V494;object V495;
{	 VMB56 VMS56 VMV56
goto TTL;
TTL:;
	{object V496 = list(3,VV[216],list(2,(V494),list(2,VV[217],(V495))),VV[181]);
	VMR56(V496)}
	return Cnil;
}
/*	local entry for function IN-ARRAY-SLOOP-FOR	*/

static object LI57(V498,V497,va_alist)
	object V498,V497;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{object V499;
	object V500;
	register object V501;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V499= V498;
	V500= V497;
	narg= narg - 2;
	V502 = list_vector(narg,ap);
	V501= V502;
	{object V503;
	object V504;
	object V505;
	V503= Cnil;
	V504= Cnil;
	V505= Cnil;
	if(!(type_of((V499))==t_cons||((V499))==Cnil)){
	goto T1188;}
	V503= car((V499));
	V504= cadr((V499));
	goto T1186;
goto T1188;
T1188:;
	V503= (V499);
	base[0]= VV[218];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V504= vs_base[0];
goto T1186;
T1186:;
	{object V506;
	{register object V507;
	register object V508;
	V507= (V501);
	V508= Cnil;
goto T1199;
T1199:;
	{register object V509;
	V509= (*(LnkLI13))(car((V507)));
	{register object V510;
	V510= (*(LnkLI9))((V509),VV[219]);
	if(((V510))==Cnil){
	goto T1206;}
	goto T1202;
goto T1206;
T1206:;
	if(((*(LnkLI9))((V509),VV[220]))==Cnil){
	goto T1209;}
	V505= Ct;
	goto T1202;
goto T1209;
T1209:;
	{register object V511;
	V511= (*(LnkLI9))((V509),VV[147]);
	if(((V511))==Cnil){
	goto T1214;}
	goto T1202;
goto T1214;
T1214:;
	base[0]= (V507);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V501= vs_base[0];
	V506= nreverse((V508));
	goto T1197;}}}
goto T1202;
T1202:;
	V508= make_cons(car((V507)),(V508));
	V508= make_cons(cadr((V507)),(V508));
	V507= cddr((V507));
	goto T1199;}
goto T1197;
T1197:;
	if((V505)!=Cnil){
	goto T1226;}
	V512= list(2,VV[157],list(2,VV[221],(V500)));
	V506= nconc(/* INLINE-ARGS */V512,(V506));
goto T1226;
T1226:;
	V513= listA(5,VV[87],(V503),VV[56],list(3,VV[15],(V503),list(3,VV[222],(V500),(V504))),(V501));
	{object V514 = listA(3,VV[25],(V504),append((V506),/* INLINE-ARGS */V513));
	VMR57(V514)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function =-SLOOP-FOR	*/

static object LI58(V517,V518)

register object V517;object V518;
{	 VMB58 VMS58 VMV58
goto TTL;
TTL:;
	{object V519;
	V520= (*(LnkLI254))();
	V519= (*(LnkLI13))(/* INLINE-ARGS */V520);
	if(((*(LnkLI9))((V519),VV[223]))==Cnil){
	goto T1230;}
	(void)((*(LnkLI255))());
	V521= list(3,VV[139],(V517),(V518));
	{object V522 = list(6,VV[87],(V517),VV[97],/* INLINE-ARGS */V521,VV[89],list(3,VV[139],(V517),(*(LnkLI255))()));
	VMR58(V522)}
goto T1230;
T1230:;
	{object V523 = list(4,VV[87],(V517),VV[56],list(3,VV[139],(V517),(V518)));
	VMR58(V523)}}
	return Cnil;
}
/*	local entry for function SLOOP-SLOOP-MACRO	*/

static object LI59(V525)

VOL object V525;
{	 VMB59 VMS59 VMV59
	bds_check;
goto TTL;
TTL:;
	{object V526;
	V526= (*(LnkLI13))(car((V525)));
	{object V527;
	V527= (*(LnkLI9))((V526),VV[25]);
	if(((V527))==Cnil){
	goto T1237;}
	goto T1233;
goto T1237;
T1237:;
	base[0]= VV[85];
	base[1]= (V526);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
goto T1233;
T1233:;
	{VOL object V528;
	VOL object V529;
	VOL object V530;
	VOL object V531;
	VOL object V532;
	VOL object V533;
	VOL object V534;
	base[4]= VV[224];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V529= vs_base[0];
	bds_bind(VV[50],Cnil);
	bds_bind(VV[49],Cnil);
	bds_bind(VV[53],Cnil);
	V528= Cnil;
	V530= Cnil;
	V531= Cnil;
	V532= Cnil;
	V533= Cnil;
	V534= Cnil;
	bds_bind(VV[34],(V525));
	setq(VV[40],Ct);
	(void)((*(LnkLI255))());
	{object V535;
	object V536;
	V535= symbol_value(VV[46]);
	V536= (V530);
	V530= (V535);
	setq(VV[46],(V536));}
	{object V537;
	object V538;
	V537= symbol_value(VV[48]);
	V538= (V531);
	V531= (V537);
	setq(VV[48],(V538));}
	{object V539;
	object V540;
	V539= symbol_value(VV[43]);
	V540= (V532);
	V532= (V539);
	setq(VV[43],(V540));}
	{object V541;
	object V542;
	V541= symbol_value(VV[41]);
	V542= (V533);
	V533= (V541);
	setq(VV[41],(V542));}
	{object V543;
	object V544;
	V543= symbol_value(VV[42]);
	V544= (V534);
	V534= (V543);
	setq(VV[42],(V544));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI257))());
	{object V545;
	object V546;
	V545= symbol_value(VV[46]);
	V546= (V530);
	V530= (V545);
	setq(VV[46],(V546));}
	{object V547;
	object V548;
	V547= symbol_value(VV[48]);
	V548= (V531);
	V531= (V547);
	setq(VV[48],(V548));}
	{object V549;
	object V550;
	V549= symbol_value(VV[43]);
	V550= (V532);
	V532= (V549);
	setq(VV[43],(V550));}
	{object V551;
	object V552;
	V551= symbol_value(VV[41]);
	V552= (V533);
	V533= (V551);
	setq(VV[41],(V552));}
	{object V553;
	object V554;
	V553= symbol_value(VV[42]);
	V554= (V534);
	V534= (V553);
	setq(VV[42],(V554));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
goto T1323;
T1323:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1324;}
	goto T1321;
goto T1324;
T1324:;
	{VOL object V555;
	frs_push(FRS_CATCH,VV[27]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V555= vs_base[0];
	goto T1329;}
	else{
	V556= (*(LnkLI251))();
	frs_pop();
	V555= V556;}
goto T1329;
T1329:;
	if(((V555))==Cnil){
	goto T1332;}
	goto T1328;
goto T1332;
T1332:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1335;}
	goto T1321;
goto T1335;
T1335:;
	(void)(print((VV[34]->s.s_dbind),Cnil));
	{object V557;
	object V558;
	V557= symbol_value(VV[46]);
	V558= (V530);
	V530= (V557);
	setq(VV[46],(V558));}
	{object V559;
	object V560;
	V559= symbol_value(VV[48]);
	V560= (V531);
	V531= (V559);
	setq(VV[48],(V560));}
	{object V561;
	object V562;
	V561= symbol_value(VV[43]);
	V562= (V532);
	V532= (V561);
	setq(VV[43],(V562));}
	{object V563;
	object V564;
	V563= symbol_value(VV[41]);
	V564= (V533);
	V533= (V563);
	setq(VV[41],(V564));}
	{object V565;
	object V566;
	V565= symbol_value(VV[42]);
	V566= (V534);
	V534= (V565);
	setq(VV[42],(V566));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI261))());
	{object V567;
	object V568;
	V567= symbol_value(VV[46]);
	V568= (V530);
	V530= (V567);
	setq(VV[46],(V568));}
	{object V569;
	object V570;
	V569= symbol_value(VV[48]);
	V570= (V531);
	V531= (V569);
	setq(VV[48],(V570));}
	{object V571;
	object V572;
	V571= symbol_value(VV[43]);
	V572= (V532);
	V532= (V571);
	setq(VV[43],(V572));}
	{object V573;
	object V574;
	V573= symbol_value(VV[41]);
	V574= (V533);
	V533= (V573);
	setq(VV[41],(V574));}
	{object V575;
	object V576;
	V575= symbol_value(VV[42]);
	V576= (V534);
	V534= (V575);
	setq(VV[42],(V576));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)(print((VV[34]->s.s_dbind),Cnil));}
goto T1328;
T1328:;
	goto T1323;
goto T1321;
T1321:;
	{object V577;
	object V578;
	V577= symbol_value(VV[46]);
	V578= (V530);
	V530= (V577);
	setq(VV[46],(V578));}
	{object V579;
	object V580;
	V579= symbol_value(VV[48]);
	V580= (V531);
	V531= (V579);
	setq(VV[48],(V580));}
	{object V581;
	object V582;
	V581= symbol_value(VV[43]);
	V582= (V532);
	V532= (V581);
	setq(VV[43],(V582));}
	{object V583;
	object V584;
	V583= symbol_value(VV[41]);
	V584= (V533);
	V533= (V583);
	setq(VV[41],(V584));}
	{object V585;
	object V586;
	V585= symbol_value(VV[42]);
	V586= (V534);
	V534= (V585);
	setq(VV[42],(V586));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	V528= nreverse((VV[49]->s.s_dbind));
	if((VV[53]->s.s_dbind)==Cnil){
	goto T1454;}
	V528= (*(LnkLI252))((V528));
goto T1454;
T1454:;
	{object V587;
	V588= list(3,VV[66],Cnil,list(3,VV[61],VV[225],list(2,VV[10],(V529))));
	V589= make_cons(/* INLINE-ARGS */V588,Cnil);
	base[4]= nreverse(symbol_value(VV[48]));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1460;}
	base[5]= Cnil;
	goto T1459;
goto T1460;
T1460:;
	base[5]= VV[226];
goto T1459;
T1459:;
	base[6]= nreverse(symbol_value(VV[41]));
	base[7]= (V528);
	base[8]= nreverse(symbol_value(VV[42]));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1466;}
	base[9]= Cnil;
	goto T1465;
goto T1466;
T1466:;
	base[9]= VV[227];
goto T1465;
T1465:;
	V591= nreverse(symbol_value(VV[43]));
	base[10]= make_cons((V529),/* INLINE-ARGS */V591);
	vs_top=(vs_base=base+4)+7;
	Lappend();
	vs_top=sup;
	V590= vs_base[0];
	V587= list(3,VV[71],/* INLINE-ARGS */V589,make_cons(VV[73],V590));
	{object V592;
	object V593;
	V592= symbol_value(VV[46]);
	V593= car((V592));
goto T1473;
T1473:;
	if(!(endp((V592)))){
	goto T1474;}
	goto T1469;
goto T1474;
T1474:;
	V594= (*(LnkLI253))((V593));
	if((cdr((V593)))!=Cnil){
	goto T1481;}
	V595= Cnil;
	goto T1480;
goto T1481;
T1481:;
	V596= make_cons(VV[77],cdr((V593)));
	V595= make_cons(/* INLINE-ARGS */V596,Cnil);
goto T1480;
T1480:;
	V597= make_cons((V587),Cnil);
	V587= listA(3,VV[12],/* INLINE-ARGS */V594,append(V595,/* INLINE-ARGS */V597));
	V592= cdr((V592));
	V593= car((V592));
	goto T1473;}
goto T1469;
T1469:;
	{object V598;
	object V599;
	V598= symbol_value(VV[46]);
	V599= (V530);
	V530= (V598);
	setq(VV[46],(V599));}
	{object V600;
	object V601;
	V600= symbol_value(VV[48]);
	V601= (V531);
	V531= (V600);
	setq(VV[48],(V601));}
	{object V602;
	object V603;
	V602= symbol_value(VV[43]);
	V603= (V532);
	V532= (V602);
	setq(VV[43],(V603));}
	{object V604;
	object V605;
	V604= symbol_value(VV[41]);
	V605= (V533);
	V533= (V604);
	setq(VV[41],(V605));}
	{object V606;
	object V607;
	V606= symbol_value(VV[42]);
	V607= (V534);
	V534= (V606);
	setq(VV[42],(V607));}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	{object V608 = list(2,VV[56],(V587));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR59(V608)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function IN-CAREFULLY-SLOOP-FOR	*/

static object LI60(V611,V612)

object V611;object V612;
{	 VMB60 VMS60 VMV60
goto TTL;
TTL:;
	{register object V613;
	base[0]= VV[228];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V613= vs_base[0];
	base[0]= VV[87];
	base[1]= (V613);
	base[2]= VV[5];
	base[3]= VV[87];
	base[4]= (V611);
	base[5]= VV[97];
	base[6]= list(3,VV[15],(V613),(V612));
	base[7]= VV[56];
	base[8]= list(3,VV[139],(V611),list(2,VV[17],(V613)));
	base[9]= VV[90];
	base[10]= list(3,VV[5],list(2,VV[229],(V613)),VV[230]);
	base[11]= VV[89];
	base[12]= list(3,VV[15],(V613),list(2,VV[18],(V613)));
	vs_top=(vs_base=base+0)+13;
	Llist();
	vs_top=sup;
	{object V614 = vs_base[0];
	VMR60(V614)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-USE-SLOOP-FOR	*/

static object LI61(V619,V620,V621,V622)

object V619;object V620;object V621;object V622;
{	 VMB61 VMS61 VMV61
goto TTL;
TTL:;{object V623;
	V623= (*(LnkLI9))((V621),VV[223]);
	if(V623==Cnil)goto T1541;
	goto T1540;
goto T1541;
T1541:;}
	base[0]= VV[231];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1540;
T1540:;
	V624= list(3,VV[139],(V619),(V620));
	{object V625 = list(6,VV[87],(V619),VV[97],/* INLINE-ARGS */V624,VV[89],list(3,VV[139],(V619),(V622)));
	VMR61(V625)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-SLOOP-FOR	*/

static object LI62(V630,V631,V632,V633)

register object V630;object V631;object V632;object V633;
{	 VMB62 VMS62 VMV62
goto TTL;
TTL:;{object V634;
	V634= (*(LnkLI9))((V632),VV[223]);
	if(V634==Cnil)goto T1545;
	goto T1544;
goto T1545;
T1545:;}
	base[0]= VV[232];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1544;
T1544:;
	if((symbol_value(VV[42]))!=Cnil){
	goto T1549;}
	V635= list(3,VV[139],(V630),(V631));
	{object V636 = list(6,VV[87],(V630),VV[97],/* INLINE-ARGS */V635,VV[89],list(3,VV[139],(V630),(V633)));
	VMR62(V636)}
goto T1549;
T1549:;
	{object V637;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V637= vs_base[0];
	V638= list(2,(V637),list(3,VV[139],(V630),(V633)));
	V639= list(3,VV[14],/* INLINE-ARGS */V638,list(2,Ct,list(3,VV[139],(V630),(V631))));
	{object V640 = list(8,VV[87],(V630),VV[87],(V637),VV[56],/* INLINE-ARGS */V639,VV[89],list(3,VV[139],(V637),Ct));
	VMR62(V640)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-IN-ORDERED-LIST	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_reserve(VM63);
	{register object V641;
	object V642;
	register object V643;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V641=(base[0]);
	V642=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1552;}
	V643=(base[2]);
	vs_top=sup;
	goto T1553;
goto T1552;
T1552:;
	V643= symbol_value(VV[233]);
goto T1553;
T1553:;
	{register object V644;
	V644= Cnil;
	{register object V645;
	V645= (V642);
goto T1557;
T1557:;
	if(((V645))!=Cnil){
	goto T1558;}
	base[3]= (V644);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
goto T1558;
T1558:;
	if(!(eql(car((V645)),(V641)))){
	goto T1566;}
	base[3]= (V645);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
goto T1566;
T1566:;
	base[3]= (V641);
	base[4]= car((V645));
	vs_top=(vs_base=base+3)+2;
	super_funcall_no_event((V643));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1564;}
	base[3]= (V644);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
goto T1564;
T1564:;
	V644= (V645);
	V645= cdr((V645));
	goto T1557;}}
	}
}
/*	local entry for function COLLATE-SLOOP-COLLECT	*/

static object LI64(V648,V649)

object V648;object V649;
{	 VMB64 VMS64 VMV64
goto TTL;
TTL:;
	V650= list(3,VV[236],(V649),(V648));
	V651= list(2,VV[238],list(3,VV[15],VV[239],list(3,VV[119],(V649),VV[240])));
	{object V652 = list(2,VV[56],list(4,VV[234],VV[235],/* INLINE-ARGS */V650,list(3,VV[104],VV[237],list(3,VV[14],/* INLINE-ARGS */V651,list(2,Ct,list(3,VV[15],(V648),list(3,VV[119],(V649),(V648))))))));
	VMR64(V652)}
	return Cnil;
}
/*	local entry for function IN-FRINGE-SLOOP-MAP	*/

static object LI65(V655,V656)

register object V655;object V656;
{	 VMB65 VMS65 VMV65
goto TTL;
TTL:;
	{register object V657;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V657= vs_base[0];
	V658= make_cons((V655),Cnil);
	V659= list(2,(V657),VV[244]);
	V660= make_cons(/* INLINE-ARGS */V659,Cnil);
	V661= list(2,VV[140],(V657));
	V662= make_cons(/* INLINE-ARGS */V661,Cnil);
	V663= list(2,VV[229],(V657));
	V664= list(3,VV[15],(V655),(V657));
	V665= list(3,/* INLINE-ARGS */V663,/* INLINE-ARGS */V664,list(3,VV[15],(V657),Cnil));
	V666= list(3,VV[15],(V655),list(2,VV[17],(V657)));
	V667= list(3,VV[14],/* INLINE-ARGS */V665,list(3,Ct,/* INLINE-ARGS */V666,list(3,VV[15],(V657),list(2,VV[18],(V657)))));
	V668= list(2,VV[140],(V655));
	V669= make_cons(/* INLINE-ARGS */V668,Cnil);
	V670= list(2,VV[229],(V655));
	V671= make_cons(/* INLINE-ARGS */V670,VV[245]);
	V672= list(3,VV[242],VV[243],list(5,VV[56],/* INLINE-ARGS */V660,/* INLINE-ARGS */V662,/* INLINE-ARGS */V667,list(4,VV[14],/* INLINE-ARGS */V669,/* INLINE-ARGS */V671,list(2,Ct,list(2,VV[242],(V655))))));
	V673= make_cons(/* INLINE-ARGS */V672,Cnil);
	{object V674 = list(3,VV[12],/* INLINE-ARGS */V658,list(3,VV[241],/* INLINE-ARGS */V673,list(2,VV[242],(V656))));
	VMR65(V674)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT277(){ call_or_link(VV[277],(void **)&Lnk277);} /* SUBTYPEP */
static object  LnkTLI276(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[276],(void **)&LnkLI276,2,ap);} /* THE-TYPE */
static object  LnkTLI275(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[275],(void **)&LnkLI275,2,ap);} /* PARSE-LOOP-MAP */
static object  LnkTLI274(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[274],(void **)&LnkLI274,ap);} /* ADD-FROM-DATA */
static object  LnkTLI273(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[273],(void **)&LnkLI273,ap);} /* LOOP-DECLARE-BINDING */
static object  LnkTLI272(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[272],(void **)&LnkLI272,2,ap);} /* MAKE-VALUE */
static void LnkT129(){ call_or_link(VV[129],(void **)&Lnk129);} /* TYPEP */
static object  LnkTLI271(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[271],(void **)&LnkLI271,3,ap);} /* LOOP-PARSE-ADDITIONAL-COLLECTIONS */
static object  LnkTLI270(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[270],(void **)&LnkLI270,1,ap);} /* POINTER-FOR-COLLECT */
static object  LnkTLI269(){return call_proc0(VV[269],(void **)&LnkLI269);} /* PARSE-ONE-WHEN-CLAUSE */
static object  LnkTLI268(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[268],(void **)&LnkLI268,ap);} /* LOOP-ADD-TEMPS */
static object  LnkTLI267(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[267],(void **)&LnkLI267,ap);} /* LOOP-ADD-BINDING */
static object  LnkTLI266(){return call_proc0(VV[266],(void **)&LnkLI266);} /* LOOP-UN-POP */
static object  LnkTLI265(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[265],(void **)&LnkLI265,ap);} /* PARSE-LOOP-MACRO */
static object  LnkTLI264(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[264],(void **)&LnkLI264,ap);} /* PARSE-LOOP-DECLARE */
static object  LnkTLI263(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[263],(void **)&LnkLI263,ap);} /* PARSE-LOOP-WITH */
static object  LnkTLI262(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[262],(void **)&LnkLI262,1,ap);} /* PARSE-LOOP-INITIALLY */
static object  LnkTLI261(){return call_proc0(VV[261],(void **)&LnkLI261);} /* PARSE-LOOP-COLLECT */
static object  LnkTLI260(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[260],(void **)&LnkLI260,1,ap);} /* LOOP-COLLECT-KEYWORD-P */
static object  LnkTLI259(){return call_proc0(VV[259],(void **)&LnkLI259);} /* PARSE-LOOP-WHEN */
static object  LnkTLI258(){return call_proc0(VV[258],(void **)&LnkLI258);} /* PARSE-LOOP-DO */
static object  LnkTLI257(){return call_proc0(VV[257],(void **)&LnkLI257);} /* PARSE-LOOP-FOR */
static object  LnkTLI256(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[256],(void **)&LnkLI256,1,ap);} /* PARSE-NO-BODY */
static object  LnkTLI255(){return call_proc0(VV[255],(void **)&LnkLI255);} /* LOOP-POP */
static object  LnkTLI9(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[9],(void **)&LnkLI9,2,ap);} /* L-EQUAL */
static object  LnkTLI254(){return call_proc0(VV[254],(void **)&LnkLI254);} /* LOOP-PEEK */
static object  LnkTLI13(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[13],(void **)&LnkLI13,1,ap);} /* TRANSLATE-NAME */
static object  LnkTLI253(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[253],(void **)&LnkLI253,1,ap);} /* LOOP-LET-BINDINGS */
static object  LnkTLI252(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[252],(void **)&LnkLI252,1,ap);} /* SUBSTITUTE-SLOOP-BODY */
static object  LnkTLI251(){return call_proc0(VV[251],(void **)&LnkLI251);} /* PARSE-LOOP1 */
static object  LnkTLI249(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[249],(void **)&LnkLI249,ap);} /* FIND */
static object  LnkTLI248(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[248],(void **)&LnkLI248,ap);} /* DEF-LOOP-INTERNAL */
static object  LnkTLI247(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[247],(void **)&LnkLI247,1,ap);} /* PARSE-LOOP */
static object  LnkTLI246(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[246],(void **)&LnkLI246,2,ap);} /* DESETQ1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

