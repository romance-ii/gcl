
#include "cmpinclude.h"
#include "clcs_restart.h"
void init_clcs_restart(){do_init(VV);}
/*	local entry for function progn 'compile2181	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2193	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	vs_base=vs_top;
	Lmake_hash_table();
	vs_top=sup;
	setq(VV[0],vs_base[0]);
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2206	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	local entry for function progn 'compile2222	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V4 = Cnil;
	VMR4(V4)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2234	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T12;}
	goto T11;
	goto T12;
T12:;
	setq(VV[1],small_fixnum(-1));
	goto T11;
T11:;
	{object V5 = Cnil;
	VMR5(V5)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2247	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V6 = Cnil;
	VMR6(V6)}
	return Cnil;
}
/*	local entry for function UNIQUE-ID	*/

static object LI7(V8)

object V8;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;{object V9;
	base[0]= (V8);
	base[1]= symbol_value(VV[0]);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V9= vs_base[0];
	if(V9==Cnil)goto T17;
	{object V10 = V9;
	VMR7(V10)}
	goto T17;
T17:;}
	{object V12;
	object V13;
	V12= symbol_value(VV[0]);
	setq(VV[1],number_plus(symbol_value(VV[1]),small_fixnum(1)));
	V13= symbol_value(VV[1]);
	base[1]= V8;
	base[2]= (V12);
	base[3]= (V13);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V14 = vs_base[0];
	VMR7(V14)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-KEYWORD-PAIRS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V15;
	register object V16;
	check_arg(2);
	V15=(base[0]);
	V16=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V17;
	register object V18;
	V17= (V15);
	V18= Cnil;
	goto T28;
T28:;
	if(((V17))==Cnil){
	goto T30;}
	{register object x= car((V17)),V19= (V16);
	while(!endp(V19))
	if(eql(x,V19->c.c_car)){
	goto T29;
	}else V19=V19->c.c_cdr;}
	goto T30;
T30:;
	base[2]= nreverse((V18));
	base[3]= (V17);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T29;
T29:;
	{object V20;
	V20= cddr((V17));
	V18= listA(3,cadr((V17)),car((V17)),(V18));
	V17= (V20);}
	goto T28;}
	}
}
/*	macro definition for WITH-KEYWORD-PAIRS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(2);
	vs_top=sup;
	{object V21=base[0]->c.c_cdr;
	if(endp(V21))invalid_macro_call();
	{object V22= (V21->c.c_car);
	if(endp(V22))invalid_macro_call();
	base[2]= (V22->c.c_car);
	V22=V22->c.c_cdr;
	if(endp(V22))invalid_macro_call();
	base[3]= (V22->c.c_car);
	V22=V22->c.c_cdr;
	if(endp(V22)){
	base[4]= Cnil;
	} else {
	base[4]= (V22->c.c_car);
	V22=V22->c.c_cdr;}
	if(!endp(V22))invalid_macro_call();}
	V21=V21->c.c_cdr;
	base[5]= V21;}
	{register object V23;
	{register object x= VV[2],V24= base[2];
	while(!endp(V24))
	if(eql(x,V24->c.c_car)){
	V23= V24;
	goto T42;
	}else V24=V24->c.c_cdr;
	V23= Cnil;}
	goto T42;
T42:;
	if(((long)length((V23)))==(2)){
	goto T43;}
	base[6]= VV[3];
	base[7]= (V23);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	goto T43;
T43:;
	{object V25;
	object V26;
	object V27;
	base[6]= base[2];
	base[7]= (V23);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V25= vs_base[0];
	if(base[4]!=Cnil){
	V26= base[4];
	goto T51;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V26= vs_base[0];
	goto T51;
T51:;
	V27= cadr((V23));
	{object V28;
	{object V29;
	object V30= (V25);
	if(endp(V30)){
	V28= Cnil;
	goto T53;}
	base[6]=V29=MMcons(Cnil,Cnil);
	goto T54;
T54:;
	base[7]= coerce_to_string((V30->c.c_car));
	base[9]= VV[4];
	vs_top=(vs_base=base+9)+1;
	Lfind_package();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+7)+2;
	Lintern();
	vs_top=sup;
	(V29->c.c_car)= vs_base[0];
	V30=MMcdr(V30);
	if(endp(V30)){
	V28= base[6];
	goto T53;}
	V29=MMcdr(V29)=MMcons(Cnil,Cnil);
	goto T54;}
	goto T53;
T53:;
	V32= list(2,(V26),(V27));
	V33= list(3,VV[6],base[3],list(2,VV[7],(V28)));
	{object V35;
	object V36= (V25);
	object V37= (V28);
	if(endp(V36)||endp(V37)){
	V34= Cnil;
	goto T59;}
	base[6]=V35=MMcons(Cnil,Cnil);
	goto T60;
T60:;
	(V35->c.c_car)= list(2,(V36->c.c_car),list(3,VV[9],(V26),(V37->c.c_car)));
	V36=MMcdr(V36);
	V37=MMcdr(V37);
	if(endp(V36)||endp(V37)){
	V34= base[6];
	goto T59;}
	V35=MMcdr(V35)=MMcons(Cnil,Cnil);
	goto T60;}
	goto T59;
T59:;
	base[6]= list(4,VV[5],/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,listA(3,VV[8],V34,base[5]));
	vs_top=(vs_base=base+6)+1;
	return;}}}
}
/*	local entry for function progn 'compile2348	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V40 = Cnil;
	VMR10(V40)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2360	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T65;}
	goto T64;
	goto T65;
T65:;
	setq(VV[10],Cnil);
	goto T64;
T64:;
	{object V41 = Cnil;
	VMR11(V41)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2373	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V42 = Cnil;
	VMR12(V42)}
	return Cnil;
}
/*	local entry for function COMPUTE-RESTARTS	*/

static object LI13(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V43;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T70;
	else {
	V43= first;}
	--narg; goto T71;
	goto T70;
T70:;
	V43= Cnil;
	goto T71;
T71:;
	base[1]= symbol_value(VV[10]);
	{object V45;
	object V46= base[1];
	if(endp(V46)){
	V44= Cnil;
	goto T73;}
	base[0]=V45=MMcons(Cnil,Cnil);
	goto T74;
T74:;
	base[2]= (V46->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	(V45->c.c_cdr)= vs_base[0];
	{object cdr_V45=MMcdr(V45);while(!endp(cdr_V45)) {cdr_V45=MMcdr(cdr_V45);V45=MMcdr(V45);}}
	V46=MMcdr(V46);
	if(endp(V46)){
	base[0]=base[0]->c.c_cdr;
	V44= base[0];
	goto T73;}
	goto T74;}
	goto T73;
T73:;
	V47= (*(LnkLI71))();
	{object V48 = nconc(V44,/* INLINE-ARGS */V47);
	VMR13(V48)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for RESTART-PRINT	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V49;
	object V50;
	object V51;
	check_arg(3);
	V49=(base[0]);
	V50=(base[1]);
	V51=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[11]))==Cnil){
	goto T78;}
	base[3]= (V50);
	base[4]= VV[12];
	base[6]= (V49);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (*(LnkLI72))((V49));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;
	goto T78;
T78:;
	base[3]= (V49);
	base[4]= (V50);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk73)();
	return;
	}
}
/*	local entry for function progn 'compile2413	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[13];
	base[1]= VV[14];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= VV[15];
	base[6]= VV[16];
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= VV[17];
	base[10]= VV[18];
	base[11]= small_fixnum(4);
	base[12]= VV[19];
	base[13]= Cnil;
	vs_top=(vs_base=base+0)+14;
	(void) (*Lnk74)();
	vs_top=sup;
	{object V52 = Cnil;
	VMR15(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-RESTART	*/

static object LI16(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V53;
	object V54;
	object V55;
	object V56;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI16key,first,ap);
	V53=(Vcs[0]);
	V54=(Vcs[1]);
	V55=(Vcs[2]);
	V56=(Vcs[3]);
	base[0]= VV[13];
	base[1]= (V53);
	base[2]= (V54);
	base[3]= (V55);
	base[4]= (V56);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V57 = vs_base[0];
	VMR16(V57)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function progn 'compile2433	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V58 = Cnil;
	VMR17(V58)}
	return Cnil;
}
/*	local entry for function progn 'compile2449	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= VV[20];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V59 = Cnil;
	VMR18(V59)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2461	*/

static object LI19()

{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	base[0]= VV[20];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T111;}
	goto T110;
	goto T111;
T111:;
	setq(VV[20],Cnil);
	goto T110;
T110:;
	{object V60 = Cnil;
	VMR19(V60)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2474	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V61 = Cnil;
	VMR20(V61)}
	return Cnil;
}
/*	local entry for function MAKE-KCL-TOP-RESTART	*/

static object LI22(V63)

object V63;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]=MMcons((V63),Cnil);
	V64= 
	make_cclosure_new(LC38,Cnil,base[0],Cdata);
	V65= 
	make_cclosure_new(LC39,Cnil,base[0],Cdata);
	{object V66 = (VFUN_NARGS=8,(*(LnkLI39))(VV[21],VV[22],VV[23],V64,VV[24],V65,VV[34],Cnil));
	VMR21(V66)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-KCL-TOP-RESTART	*/

static object LI23(V68)

object V68;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;{object V70;
	{register object x= (V68),V71= symbol_value(VV[20]);
	while(!endp(V71))
	if(type_of(V71->c.c_car)==t_cons &&eql(x,V71->c.c_car->c.c_car)){
	V70= (V71->c.c_car);
	goto T120;
	}else V71=V71->c.c_cdr;
	V70= Cnil;}
	goto T120;
T120:;
	if(V70==Cnil)goto T119;
	V69= V70;
	goto T118;
	goto T119;
T119:;}
	{object V73;
	V74= (*(LnkLI75))((V68));
	V73= make_cons((V68),/* INLINE-ARGS */V74);
	setq(VV[20],make_cons((V73),symbol_value(VV[20])));
	V72= symbol_value(VV[20]);}
	V69= car(V72);
	goto T118;
T118:;
	{object V75 = cdr(V69);
	VMR22(V75)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KCL-TOP-RESTARTS	*/

static object LI24()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V76;
	object V77;
	object V78;
	base[4]= symbol_value(VV[27]);
	{object V79;
	object V80= base[4];
	if(endp(V80)){
	V76= Cnil;
	goto T124;}
	base[3]=V79=MMcons(Cnil,Cnil);
	goto T125;
T125:;
	if((cdr((V80->c.c_car)))==Cnil){
	goto T128;}
	(V79->c.c_cdr)= make_cons(cdr((V80->c.c_car)),Cnil);
	goto T126;
	goto T128;
T128:;
	(V79->c.c_cdr)= Cnil;
	goto T126;
T126:;
	{object cdr_V79=MMcdr(V79);while(!endp(cdr_V79)) {cdr_V79=MMcdr(cdr_V79);V79=MMcdr(V79);}}
	V80=MMcdr(V80);
	if(endp(V80)){
	base[3]=base[3]->c.c_cdr;
	V76= base[3];
	goto T124;}
	goto T125;}
	goto T124;
T124:;
	if((symbol_value(VV[25]))==Cnil){
	goto T132;}
	V77= make_cons(symbol_value(VV[25]),(V76));
	goto T130;
	goto T132;
T132:;
	V77= (V76);
	goto T130;
T130:;
	{object V82;
	object V83= (V77);
	if(endp(V83)){
	V78= Cnil;
	goto T134;}
	base[3]=V82=MMcons(Cnil,Cnil);
	goto T135;
T135:;
	(V82->c.c_car)= (*(LnkLI76))((V83->c.c_car));
	V83=MMcdr(V83);
	if(endp(V83)){
	V78= base[3];
	goto T134;}
	V82=MMcdr(V82)=MMcons(Cnil,Cnil);
	goto T135;}
	goto T134;
T134:;
	{object V84;
	object V85= (V77);
	object V86= (V78);
	if(endp(V85)||endp(V86)){
	setq(VV[20],Cnil);
	goto T138;}
	base[3]=V84=MMcons(Cnil,Cnil);
	goto T139;
T139:;
	(V84->c.c_car)= make_cons((V85->c.c_car),(V86->c.c_car));
	V85=MMcdr(V85);
	V86=MMcdr(V86);
	if(endp(V85)||endp(V86)){
	setq(VV[20],base[3]);
	goto T138;}
	V84=MMcdr(V84)=MMcons(Cnil,Cnil);
	goto T139;}
	goto T138;
T138:;
	{object V87 = (V78);
	VMR23(V87)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for RESTART-REPORT	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V88;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V88=(base[1]);
	vs_top=sup;
	{object V89;
	V89= structure_ref((base[0]->c.c_car),VV[13],2);
	if(((V89))==Cnil){
	goto T144;}
	base[2]= (V89);
	goto T141;
	goto T144;
T144:;
	base[3]= structure_ref((base[0]->c.c_car),VV[13],0);
	base[3]=MMcons(base[3],base[0]);
	base[2]= 
	make_cclosure_new(LC40,Cnil,base[3],Cdata);}
	goto T141;
T141:;
	base[3]= (V88);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	macro definition for RESTART-BIND	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	check_arg(2);
	vs_top=sup;
	{object V90=base[0]->c.c_cdr;
	if(endp(V90))invalid_macro_call();
	base[2]= (V90->c.c_car);
	V90=V90->c.c_cdr;
	base[3]= V90;}
	{object V92;
	object V93= base[2];
	if(endp(V93)){
	V91= Cnil;
	goto T148;}
	base[4]=V92=MMcons(Cnil,Cnil);
	goto T149;
T149:;
	(V92->c.c_car)= listA(6,VV[39],VV[21],list(2,VV[7],car((V93->c.c_car))),VV[23],cadr((V93->c.c_car)),cddr((V93->c.c_car)));
	V93=MMcdr(V93);
	if(endp(V93)){
	V91= base[4];
	goto T148;}
	V92=MMcdr(V92)=MMcons(Cnil,Cnil);
	goto T149;}
	goto T148;
T148:;
	V95= list(2,VV[10],list(3,VV[37],make_cons(VV[38],V91),VV[10]));
	base[4]= listA(3,VV[8],make_cons(/* INLINE-ARGS */V95,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FIND-RESTART	*/

static object LI27(object V96,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{register object V97;
	object V98;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V97= V96;
	narg = narg - 1;
	if (narg <= 0) goto T151;
	else {
	V98= first;}
	--narg; goto T152;
	goto T151;
T151:;
	V98= Cnil;
	goto T152;
T152:;
	{register object V99;
	object V100;
	V99= symbol_value(VV[10]);
	V100= car((V99));
	goto T158;
T158:;
	if(!(endp_prop((V99)))){
	goto T159;}
	goto T154;
	goto T159;
T159:;
	{register object V101;
	register object V102;
	V101= (V100);
	V102= car((V101));
	goto T167;
T167:;
	if(!(endp_prop((V101)))){
	goto T168;}
	goto T163;
	goto T168;
T168:;
	if(((V102))==((V97))){
	goto T173;}
	V103= structure_ref((V102),VV[13],0);
	if(!((/* INLINE-ARGS */V103)==((V97)))){
	goto T172;}
	goto T173;
T173:;
	{object V104 = (V102);
	VMR26(V104)}
	goto T172;
T172:;
	V101= cdr((V101));
	V102= car((V101));
	goto T167;}
	goto T163;
T163:;
	V99= cdr((V99));
	V100= car((V99));
	goto T158;}
	goto T154;
T154:;
	{object V105;
	V105= (*(LnkLI71))();
	{register object V106;
	register object V107;
	V106= (V105);
	V107= car((V106));
	goto T191;
T191:;
	if(!(endp_prop((V106)))){
	goto T192;}
	{object V108 = Cnil;
	VMR26(V108)}
	goto T192;
T192:;
	if(((V107))==((V97))){
	goto T197;}
	V109= structure_ref((V107),VV[13],0);
	if(!((/* INLINE-ARGS */V109)==((V97)))){
	goto T196;}
	goto T197;
T197:;
	{object V110 = (V107);
	VMR26(V110)}
	goto T196;
T196:;
	V106= cdr((V106));
	V107= car((V106));
	goto T191;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for INVOKE-RESTART	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V111;
	object V112;
	if(vs_top-vs_base<1) too_few_arguments();
	V111=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V112=(base[1]);
	vs_top=sup;
	{object V113;{object V114;
	V114= (VFUN_NARGS=1,(*(LnkLI77))((V111)));
	if(V114==Cnil)goto T207;
	V113= V114;
	goto T206;
	goto T207;
T207:;}
	base[2]= VV[40];
	base[3]= (V111);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V113= vs_base[0];
	goto T206;
T206:;
	base[2]= structure_ref((V113),VV[13],1);
	{object V115;
	V115= (V112);
	 vs_top=base+3;
	 while(!endp(V115))
	 {vs_push(car(V115));V115=cdr(V115);}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for INVOKE-RESTART-INTERACTIVELY	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V116;
	check_arg(1);
	V116=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V117;{object V118;
	V118= (VFUN_NARGS=1,(*(LnkLI77))((V116)));
	if(V118==Cnil)goto T214;
	V117= V118;
	goto T213;
	goto T214;
T214:;}
	base[1]= VV[41];
	base[2]= (V116);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V117= vs_base[0];
	goto T213;
T213:;
	base[1]= structure_ref((V117),VV[13],1);
	{object V119;
	{object V120;
	V120= structure_ref((V117),VV[13],3);
	if(((V120))==Cnil){
	goto T222;}
	vs_base=vs_top;
	{object _funobj = (V120);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V119= vs_base[0];
	goto T219;
	goto T222;
T222:;
	V119= Cnil;}
	goto T219;
T219:;
	 vs_top=base+2;
	 while(!endp(V119))
	 {vs_push(car(V119));V119=cdr(V119);}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	macro definition for RESTART-CASE	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	check_arg(2);
	vs_top=sup;
	{object V121=base[0]->c.c_cdr;
	if(endp(V121))invalid_macro_call();
	base[2]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	base[3]= V121;}
	{object V122;
	object V123;
	object V124;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V122= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V123= vs_base[0];
	{object V125;
	object V126= base[3];
	if(endp(V126)){
	V124= Cnil;
	goto T226;}
	base[4]=V125=MMcons(Cnil,Cnil);
	goto T227;
T227:;
	{object V128;
	object V129;
	base[5]= cddr((V126->c.c_car));
	base[6]= VV[42];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T232;}
	V128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T233;}
	V129= vs_base[0];
	vs_top=sup;
	goto T234;
	goto T232;
T232:;
	V128= Cnil;
	goto T233;
T233:;
	V129= Cnil;
	goto T234;
T234:;
	{object V130;
	object V131;
	base[5]= (V128);
	base[6]= VV[43];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V130= vs_base[0];
	base[5]= (V128);
	base[6]= VV[44];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V131= vs_base[0];
	V132= car((V126->c.c_car));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V133= vs_base[0];
	base[5]= VV[43];
	base[6]= (V130);
	base[7]= VV[44];
	base[8]= (V131);
	vs_top=(vs_base=base+5)+4;
	L31(base);
	vs_top=sup;
	V134= vs_base[0];
	(V125->c.c_car)= list(5,/* INLINE-ARGS */V132,V133,V134,cadr((V126->c.c_car)),(V129));}}
	V126=MMcdr(V126);
	if(endp(V126)){
	V124= base[4];
	goto T226;}
	V125=MMcdr(V125)=MMcons(Cnil,Cnil);
	goto T227;}
	goto T226;
T226:;
	V135= list(2,(V123),Cnil);
	V136= make_cons(/* INLINE-ARGS */V135,Cnil);
	{object V138;
	object V139= (V124);
	if(endp(V139)){
	V137= Cnil;
	goto T247;}
	base[4]=V138=MMcons(Cnil,Cnil);
	goto T248;
T248:;
	{object V141;
	object V142;
	object V143;
	V141= car((V139->c.c_car));
	V142= cadr((V139->c.c_car));
	V143= caddr((V139->c.c_car));
	V144= list(3,VV[51],(V123),VV[52]);
	(V138->c.c_car)= listA(3,(V141),list(2,VV[48],list(4,VV[49],VV[50],/* INLINE-ARGS */V144,list(2,VV[53],(V142)))),(V143));}
	V139=MMcdr(V139);
	if(endp(V139)){
	V137= base[4];
	goto T247;}
	V138=MMcdr(V138)=MMcons(Cnil,Cnil);
	goto T248;}
	goto T247;
T247:;
	V145= list(3,VV[47],V137,list(3,VV[54],(V122),base[2]));
	{object V147;
	object V148= (V124);
	if(endp(V148)){
	V146= Cnil;
	goto T253;}
	base[4]=V147=MMcons(Cnil,Cnil);
	goto T254;
T254:;
	{object V150;
	object V151;
	object V152;
	V150= cadr((V148->c.c_car));
	V151= cadddr((V148->c.c_car));
	V152= car(cddddr((V148->c.c_car)));
	(V147->c.c_cdr)= list(2,(V150),list(3,VV[54],(V122),list(3,VV[55],list(2,VV[48],listA(3,VV[49],(V151),(V152))),(V123))));}
	{object cdr_V147=MMcdr(V147);while(!endp(cdr_V147)) {cdr_V147=MMcdr(cdr_V147);V147=MMcdr(V147);}}
	V148=MMcdr(V148);
	if(endp(V148)){
	base[4]=base[4]->c.c_cdr;
	V146= base[4];
	goto T253;}
	goto T254;}
	goto T253;
T253:;
	base[4]= list(3,VV[45],(V122),list(3,VV[8],/* INLINE-ARGS */V136,listA(3,VV[46],/* INLINE-ARGS */V145,V146)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for WITH-SIMPLE-RESTART	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	check_arg(2);
	vs_top=sup;
	{object V153=base[0]->c.c_cdr;
	if(endp(V153))invalid_macro_call();
	{object V154= (V153->c.c_car);
	if(endp(V154))invalid_macro_call();
	base[2]= (V154->c.c_car);
	V154=V154->c.c_cdr;
	if(endp(V154))invalid_macro_call();
	base[3]= (V154->c.c_car);
	V154=V154->c.c_cdr;
	base[4]= V154;}
	V153=V153->c.c_cdr;
	base[5]= V153;}
	V155= make_cons(VV[60],base[5]);
	base[6]= list(3,VV[59],/* INLINE-ARGS */V155,list(5,base[2],Cnil,VV[43],list(3,VV[49],VV[61],listA(4,VV[62],VV[58],base[3],base[4])),VV[63]));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	function definition for ABORT	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[22];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	vs_top=sup;
	base[0]= VV[64];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk70)();
	return;
}
/*	function definition for CONTINUE	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[65];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	return;
}
/*	function definition for MUFFLE-WARNING	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[66];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	return;
}
/*	function definition for STORE-VALUE	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V156;
	check_arg(1);
	V156=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[67];
	base[2]= (V156);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk78)();
	return;
	}
}
/*	function definition for USE-VALUE	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_reserve(VM35);
	{object V157;
	check_arg(1);
	V157=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[68];
	base[2]= (V157);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk78)();
	return;
	}
}
/*	local function TRANSFORM-KEYWORDS	*/

static void L31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{register object V158;
	object V159;
	parse_key(vs_base,FALSE,FALSE,2,VV[43],VV[44]);
	vs_top=sup;
	V158=(base[0]);
	V159=(base[1]);
	{register object V160;
	V160= Cnil;
	if(((V158))==Cnil){
	goto T268;}
	if(!(type_of((V158))==t_string)){
	goto T274;}
	V161= list(2,VV[48],list(3,VV[49],VV[56],list(3,VV[57],(V158),VV[58])));
	goto T272;
	goto T274;
T274:;
	V161= list(2,VV[48],(V158));
	goto T272;
T272:;
	V160= listA(3,V161,VV[24],(V160));
	goto T268;
T268:;
	if(((V159))==Cnil){
	goto T276;}
	V160= listA(3,list(2,VV[48],(V159)),VV[34],(V160));
	goto T276;
T276:;
	base[4]= nreverse((V160));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	{object V162;
	check_arg(1);
	V162=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T281;}
	base[1]= (V162);
	base[2]= VV[35];
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T281;
T281:;
	base[1]= (V162);
	base[2]= VV[36];
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC39(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	{object V163;
	check_arg(1);
	V163=(base[0]);
	vs_top=sup;
	{object V164;
	if(!(((base0[0]->c.c_car))==(symbol_value(VV[25])))){
	goto T291;}
	V164= symbol_value(VV[26]);
	goto T289;
	goto T291;
T291:;{object V166;
	base[1]= (base0[0]->c.c_car);
	base[2]= symbol_value(VV[27]);
	base[3]= VV[28];
	base[4]= symbol_function(VV[79]);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk80)();
	vs_top=sup;
	V166= vs_base[0];
	if(V166==Cnil)goto T294;
	V165= V166;
	goto T293;
	goto T294;
T294:;}
	V165= VV[29];
	goto T293;
T293:;
	V164= car(V165);
	goto T289;
T289:;
	if(!(((V164))==(VV[30]))){
	goto T301;}
	base[1]= (V163);
	base[2]= VV[31];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T301;
T301:;
	if(((V164))!=Cnil){
	goto T306;}
	base[1]= (V163);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T306;
T306:;
	base[1]= (V163);
	base[2]= VV[33];
	base[3]= make_fixnum((long)length((V164)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	check_arg(0);
	vs_top=sup;
	{frame_ptr fr;
	V167= make_cons((base0[0]->c.c_car),Cnil);
	base[0]= car(/* INLINE-ARGS */V167);
	fr=frs_sch_catch(base[0]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[0]);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,base[0]);}
}
static void LnkT80(){ call_or_link(VV[80],(void **)(void *)&Lnk80);} /* FIND */
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* INVOKE-RESTART */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* PARSE-KEYWORD-PAIRS */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[77],(void **)(void *)&LnkLI77,first,ap);va_end(ap);return V1;} /* FIND-RESTART */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* FIND-KCL-TOP-RESTART */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* MAKE-KCL-TOP-RESTART */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* DEFINE-STRUCTURE */
static void LnkT73(){ call_or_link(VV[73],(void **)(void *)&Lnk73);} /* RESTART-REPORT */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,1,first,ap);va_end(ap);return V1;} /* UNIQUE-ID */
static object  LnkTLI71(){return call_proc0(VV[71],(void **)(void *)&LnkLI71);} /* KCL-TOP-RESTARTS */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* ERROR */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

