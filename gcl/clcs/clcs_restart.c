
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
/*	function definition for UNIQUE-ID	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V7;
	check_arg(1);
	V7=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V8;
	base[1]= (V7);
	base[2]= symbol_value(VV[0]);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V8= vs_base[0];
	if(V8==Cnil)goto T17;
	base[1]= V8;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T17;
T17:;}
	{object V10;
	object V11;
	V10= symbol_value(VV[0]);
	setq(VV[1],number_plus(symbol_value(VV[1]),small_fixnum(1)));
	V11= symbol_value(VV[1]);
	base[2]= V7;
	base[3]= (V10);
	base[4]= (V11);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	return;}
	}
}
/*	function definition for PARSE-KEYWORD-PAIRS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V12;
	register object V13;
	check_arg(2);
	V12=(base[0]);
	V13=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V14;
	register object V15;
	V14= (V12);
	V15= Cnil;
	goto T28;
T28:;
	if(((V14))==Cnil){
	goto T30;}
	{register object x= car((V14)),V16= (V13);
	while(!endp(V16))
	if(eql(x,V16->c.c_car)){
	goto T29;
	}else V16=V16->c.c_cdr;}
	goto T30;
T30:;
	base[2]= nreverse((V15));
	base[3]= (V14);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T29;
T29:;
	{object V17;
	V17= cddr((V14));
	V15= listA(3,cadr((V14)),car((V14)),(V15));
	V14= (V17);}
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
	{object V18=base[0]->c.c_cdr;
	if(endp(V18))invalid_macro_call();
	{object V19= (V18->c.c_car);
	if(endp(V19))invalid_macro_call();
	base[2]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	if(endp(V19))invalid_macro_call();
	base[3]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	if(endp(V19)){
	base[4]= Cnil;
	} else {
	base[4]= (V19->c.c_car);
	V19=V19->c.c_cdr;}
	if(!endp(V19))invalid_macro_call();}
	V18=V18->c.c_cdr;
	base[5]= V18;}
	{register object V20;
	{register object x= VV[2],V21= base[2];
	while(!endp(V21))
	if(eql(x,V21->c.c_car)){
	V20= V21;
	goto T42;
	}else V21=V21->c.c_cdr;
	V20= Cnil;}
	goto T42;
T42:;
	if(((long)length((V20)))==(2)){
	goto T43;}
	base[6]= VV[3];
	base[7]= (V20);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	goto T43;
T43:;
	{object V22;
	object V23;
	object V24;
	base[6]= base[2];
	base[7]= (V20);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V22= vs_base[0];
	if(base[4]!=Cnil){
	V23= base[4];
	goto T51;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V23= vs_base[0];
	goto T51;
T51:;
	V24= cadr((V20));
	{object V25;
	{object V26;
	object V27= (V22);
	if(endp(V27)){
	V25= Cnil;
	goto T53;}
	base[6]=V26=MMcons(Cnil,Cnil);
	goto T54;
T54:;
	base[7]= coerce_to_string((V27->c.c_car));
	base[9]= VV[4];
	vs_top=(vs_base=base+9)+1;
	Lfind_package();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+7)+2;
	Lintern();
	vs_top=sup;
	(V26->c.c_car)= vs_base[0];
	V27=MMcdr(V27);
	if(endp(V27)){
	V25= base[6];
	goto T53;}
	V26=MMcdr(V26)=MMcons(Cnil,Cnil);
	goto T54;}
	goto T53;
T53:;
	V29= list(2,(V23),(V24));
	V30= list(3,VV[6],base[3],list(2,VV[7],(V25)));
	{object V32;
	object V33= (V22);
	object V34= (V25);
	if(endp(V33)||endp(V34)){
	V31= Cnil;
	goto T59;}
	base[6]=V32=MMcons(Cnil,Cnil);
	goto T60;
T60:;
	(V32->c.c_car)= list(2,(V33->c.c_car),list(3,VV[9],(V23),(V34->c.c_car)));
	V33=MMcdr(V33);
	V34=MMcdr(V34);
	if(endp(V33)||endp(V34)){
	V31= base[6];
	goto T59;}
	V32=MMcdr(V32)=MMcons(Cnil,Cnil);
	goto T60;}
	goto T59;
T59:;
	base[6]= list(4,VV[5],/* INLINE-ARGS */V29,/* INLINE-ARGS */V30,listA(3,VV[8],V31,base[5]));
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
	{object V37 = Cnil;
	VMR10(V37)}
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
	{object V38 = Cnil;
	VMR11(V38)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2373	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V39 = Cnil;
	VMR12(V39)}
	return Cnil;
}
/*	function definition for COMPUTE-RESTARTS	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V40;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T70;}
	V40=(base[0]);
	vs_top=sup;
	goto T71;
	goto T70;
T70:;
	V40= Cnil;
	goto T71;
T71:;
	base[2]= symbol_value(VV[10]);
	{object V42;
	object V43= base[2];
	if(endp(V43)){
	V41= Cnil;
	goto T73;}
	base[1]=V42=MMcons(Cnil,Cnil);
	goto T74;
T74:;
	base[3]= (V43->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	(V42->c.c_cdr)= vs_base[0];
	{object cdr_V42=MMcdr(V42);while(!endp(cdr_V42)) {cdr_V42=MMcdr(cdr_V42);V42=MMcdr(V42);}}
	V43=MMcdr(V43);
	if(endp(V43)){
	base[1]=base[1]->c.c_cdr;
	V41= base[1];
	goto T73;}
	goto T74;}
	goto T73;
T73:;
	vs_base=vs_top;
	(void) (*Lnk71)();
	vs_top=sup;
	V44= vs_base[0];
	base[1]= nconc(V41,V44);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for RESTART-PRINT	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V45;
	object V46;
	object V47;
	check_arg(3);
	V45=(base[0]);
	V46=(base[1]);
	V47=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[11]))==Cnil){
	goto T79;}
	base[3]= (V46);
	base[4]= VV[12];
	base[6]= (V45);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V45);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk72)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;
	goto T79;
T79:;
	base[3]= (V45);
	base[4]= (V46);
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
	{object V48 = Cnil;
	VMR15(V48)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-RESTART	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V49;
	object V50;
	object V51;
	object V52;
	parse_key(vs_base,FALSE,FALSE,4,VV[21],VV[23],VV[24],VV[34]);
	vs_top=sup;
	V49=(base[0]);
	V50=(base[1]);
	V51=(base[2]);
	V52=(base[3]);
	base[8]= VV[13];
	base[9]= (V49);
	base[10]= (V50);
	base[11]= (V51);
	base[12]= (V52);
	vs_top=(vs_base=base+8)+5;
	siLmake_structure();
	return;
	}
}
/*	local entry for function progn 'compile2433	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V53 = Cnil;
	VMR17(V53)}
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
	{object V54 = Cnil;
	VMR18(V54)}
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
	goto T113;}
	goto T112;
	goto T113;
T113:;
	setq(VV[20],Cnil);
	goto T112;
T112:;
	{object V55 = Cnil;
	VMR19(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2474	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V56 = Cnil;
	VMR20(V56)}
	return Cnil;
}
/*	function definition for MAKE-KCL-TOP-RESTART	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	check_arg(1);
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]= VV[21];
	base[2]= VV[22];
	base[3]= VV[23];
	base[4]= 
	make_cclosure_new(LC37,Cnil,base[0],Cdata);
	base[5]= VV[24];
	base[6]= 
	make_cclosure_new(LC38,Cnil,base[0],Cdata);
	base[7]= VV[34];
	base[8]= Cnil;
	vs_top=(vs_base=base+1)+8;
	(void) (*Lnk39)();
	return;
}
/*	function definition for FIND-KCL-TOP-RESTART	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V57;
	check_arg(1);
	V57=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V59;
	{register object x= (V57),V60= symbol_value(VV[20]);
	while(!endp(V60))
	if(type_of(V60->c.c_car)==t_cons &&eql(x,V60->c.c_car->c.c_car)){
	V59= (V60->c.c_car);
	goto T128;
	}else V60=V60->c.c_cdr;
	V59= Cnil;}
	goto T128;
T128:;
	if(V59==Cnil)goto T127;
	V58= V59;
	goto T126;
	goto T127;
T127:;}
	{object V62;
	base[2]= (V57);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk75)();
	vs_top=sup;
	V63= vs_base[0];
	V62= make_cons((V57),V63);
	setq(VV[20],make_cons((V62),symbol_value(VV[20])));
	V61= symbol_value(VV[20]);}
	V58= car(V61);
	goto T126;
T126:;
	base[1]= cdr(V58);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for KCL-TOP-RESTARTS	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V64;
	object V65;
	object V66;
	base[4]= symbol_value(VV[27]);
	{object V67;
	object V68= base[4];
	if(endp(V68)){
	V64= Cnil;
	goto T134;}
	base[3]=V67=MMcons(Cnil,Cnil);
	goto T135;
T135:;
	if((cdr((V68->c.c_car)))==Cnil){
	goto T138;}
	(V67->c.c_cdr)= make_cons(cdr((V68->c.c_car)),Cnil);
	goto T136;
	goto T138;
T138:;
	(V67->c.c_cdr)= Cnil;
	goto T136;
T136:;
	{object cdr_V67=MMcdr(V67);while(!endp(cdr_V67)) {cdr_V67=MMcdr(cdr_V67);V67=MMcdr(V67);}}
	V68=MMcdr(V68);
	if(endp(V68)){
	base[3]=base[3]->c.c_cdr;
	V64= base[3];
	goto T134;}
	goto T135;}
	goto T134;
T134:;
	if((symbol_value(VV[25]))==Cnil){
	goto T142;}
	V65= make_cons(symbol_value(VV[25]),(V64));
	goto T140;
	goto T142;
T142:;
	V65= (V64);
	goto T140;
T140:;
	{object V70;
	object V71= (V65);
	if(endp(V71)){
	V66= Cnil;
	goto T144;}
	base[3]=V70=MMcons(Cnil,Cnil);
	goto T145;
T145:;
	base[4]= (V71->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk76)();
	vs_top=sup;
	(V70->c.c_car)= vs_base[0];
	V71=MMcdr(V71);
	if(endp(V71)){
	V66= base[3];
	goto T144;}
	V70=MMcdr(V70)=MMcons(Cnil,Cnil);
	goto T145;}
	goto T144;
T144:;
	{object V72;
	object V73= (V65);
	object V74= (V66);
	if(endp(V73)||endp(V74)){
	setq(VV[20],Cnil);
	goto T149;}
	base[3]=V72=MMcons(Cnil,Cnil);
	goto T150;
T150:;
	(V72->c.c_car)= make_cons((V73->c.c_car),(V74->c.c_car));
	V73=MMcdr(V73);
	V74=MMcdr(V74);
	if(endp(V73)||endp(V74)){
	setq(VV[20],base[3]);
	goto T149;}
	V72=MMcdr(V72)=MMcons(Cnil,Cnil);
	goto T150;}
	goto T149;
T149:;
	base[3]= (V66);
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	function definition for RESTART-REPORT	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V75;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	V75=(base[1]);
	vs_top=sup;
	{object V76;
	V76= structure_ref((base[0]->c.c_car),VV[13],2);
	if(((V76))==Cnil){
	goto T155;}
	base[2]= (V76);
	goto T152;
	goto T155;
T155:;
	base[3]= structure_ref((base[0]->c.c_car),VV[13],0);
	base[3]=MMcons(base[3],base[0]);
	base[2]= 
	make_cclosure_new(LC39,Cnil,base[3],Cdata);}
	goto T152;
T152:;
	base[3]= (V75);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	macro definition for RESTART-BIND	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	check_arg(2);
	vs_top=sup;
	{object V77=base[0]->c.c_cdr;
	if(endp(V77))invalid_macro_call();
	base[2]= (V77->c.c_car);
	V77=V77->c.c_cdr;
	base[3]= V77;}
	{object V79;
	object V80= base[2];
	if(endp(V80)){
	V78= Cnil;
	goto T159;}
	base[4]=V79=MMcons(Cnil,Cnil);
	goto T160;
T160:;
	(V79->c.c_car)= listA(6,VV[39],VV[21],list(2,VV[7],car((V80->c.c_car))),VV[23],cadr((V80->c.c_car)),cddr((V80->c.c_car)));
	V80=MMcdr(V80);
	if(endp(V80)){
	V78= base[4];
	goto T159;}
	V79=MMcdr(V79)=MMcons(Cnil,Cnil);
	goto T160;}
	goto T159;
T159:;
	V82= list(2,VV[10],list(3,VV[37],make_cons(VV[38],V78),VV[10]));
	base[4]= listA(3,VV[8],make_cons(/* INLINE-ARGS */V82,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for FIND-RESTART	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{register object V83;
	object V84;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V83=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T162;}
	V84=(base[1]);
	vs_top=sup;
	goto T163;
	goto T162;
T162:;
	V84= Cnil;
	goto T163;
T163:;
	{register object V85;
	object V86;
	V85= symbol_value(VV[10]);
	V86= car((V85));
	goto T169;
T169:;
	if(!(endp_prop((V85)))){
	goto T170;}
	goto T165;
	goto T170;
T170:;
	{register object V87;
	register object V88;
	V87= (V86);
	V88= car((V87));
	goto T178;
T178:;
	if(!(endp_prop((V87)))){
	goto T179;}
	goto T174;
	goto T179;
T179:;
	if(((V88))==((V83))){
	goto T184;}
	V89= structure_ref((V88),VV[13],0);
	if(!((/* INLINE-ARGS */V89)==((V83)))){
	goto T183;}
	goto T184;
T184:;
	base[4]= (V88);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T183;
T183:;
	V87= cdr((V87));
	V88= car((V87));
	goto T178;}
	goto T174;
T174:;
	V85= cdr((V85));
	V86= car((V85));
	goto T169;}
	goto T165;
T165:;
	{object V90;
	vs_base=vs_top;
	(void) (*Lnk71)();
	vs_top=sup;
	V90= vs_base[0];
	{register object V91;
	register object V92;
	V91= (V90);
	V92= car((V91));
	goto T202;
T202:;
	if(!(endp_prop((V91)))){
	goto T203;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T203;
T203:;
	if(((V92))==((V83))){
	goto T208;}
	V93= structure_ref((V92),VV[13],0);
	if(!((/* INLINE-ARGS */V93)==((V83)))){
	goto T207;}
	goto T208;
T208:;
	base[3]= (V92);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T207;
T207:;
	V91= cdr((V91));
	V92= car((V91));
	goto T202;}}
	}
}
/*	function definition for INVOKE-RESTART	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V94;
	object V95;
	if(vs_top-vs_base<1) too_few_arguments();
	V94=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V95=(base[1]);
	vs_top=sup;
	{object V96;{object V97;
	base[2]= (V94);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk77)();
	vs_top=sup;
	V97= vs_base[0];
	if(V97==Cnil)goto T218;
	V96= V97;
	goto T217;
	goto T218;
T218:;}
	base[2]= VV[40];
	base[3]= (V94);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V96= vs_base[0];
	goto T217;
T217:;
	base[2]= structure_ref((V96),VV[13],1);
	{object V98;
	V98= (V95);
	 vs_top=base+3;
	 while(!endp(V98))
	 {vs_push(car(V98));V98=cdr(V98);}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for INVOKE-RESTART-INTERACTIVELY	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V99;
	check_arg(1);
	V99=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V100;{object V101;
	base[1]= (V99);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk77)();
	vs_top=sup;
	V101= vs_base[0];
	if(V101==Cnil)goto T226;
	V100= V101;
	goto T225;
	goto T226;
T226:;}
	base[1]= VV[41];
	base[2]= (V99);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V100= vs_base[0];
	goto T225;
T225:;
	base[1]= structure_ref((V100),VV[13],1);
	{object V102;
	{object V103;
	V103= structure_ref((V100),VV[13],3);
	if(((V103))==Cnil){
	goto T235;}
	vs_base=vs_top;
	{object _funobj = (V103);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V102= vs_base[0];
	goto T232;
	goto T235;
T235:;
	V102= Cnil;}
	goto T232;
T232:;
	 vs_top=base+2;
	 while(!endp(V102))
	 {vs_push(car(V102));V102=cdr(V102);}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	macro definition for RESTART-CASE	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	check_arg(2);
	vs_top=sup;
	{object V104=base[0]->c.c_cdr;
	if(endp(V104))invalid_macro_call();
	base[2]= (V104->c.c_car);
	V104=V104->c.c_cdr;
	base[3]= V104;}
	{object V105;
	object V106;
	object V107;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V105= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V106= vs_base[0];
	{object V108;
	object V109= base[3];
	if(endp(V109)){
	V107= Cnil;
	goto T239;}
	base[4]=V108=MMcons(Cnil,Cnil);
	goto T240;
T240:;
	{object V111;
	object V112;
	base[5]= cddr((V109->c.c_car));
	base[6]= VV[42];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T245;}
	V111= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T246;}
	V112= vs_base[0];
	vs_top=sup;
	goto T247;
	goto T245;
T245:;
	V111= Cnil;
	goto T246;
T246:;
	V112= Cnil;
	goto T247;
T247:;
	{object V113;
	object V114;
	base[5]= (V111);
	base[6]= VV[43];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V113= vs_base[0];
	base[5]= (V111);
	base[6]= VV[44];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V114= vs_base[0];
	V115= car((V109->c.c_car));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V116= vs_base[0];
	base[5]= VV[43];
	base[6]= (V113);
	base[7]= VV[44];
	base[8]= (V114);
	vs_top=(vs_base=base+5)+4;
	L30(base);
	vs_top=sup;
	V117= vs_base[0];
	(V108->c.c_car)= list(5,/* INLINE-ARGS */V115,V116,V117,cadr((V109->c.c_car)),(V112));}}
	V109=MMcdr(V109);
	if(endp(V109)){
	V107= base[4];
	goto T239;}
	V108=MMcdr(V108)=MMcons(Cnil,Cnil);
	goto T240;}
	goto T239;
T239:;
	V118= list(2,(V106),Cnil);
	V119= make_cons(/* INLINE-ARGS */V118,Cnil);
	{object V121;
	object V122= (V107);
	if(endp(V122)){
	V120= Cnil;
	goto T260;}
	base[4]=V121=MMcons(Cnil,Cnil);
	goto T261;
T261:;
	{object V124;
	object V125;
	object V126;
	V124= car((V122->c.c_car));
	V125= cadr((V122->c.c_car));
	V126= caddr((V122->c.c_car));
	V127= list(3,VV[51],(V106),VV[52]);
	(V121->c.c_car)= listA(3,(V124),list(2,VV[48],list(4,VV[49],VV[50],/* INLINE-ARGS */V127,list(2,VV[53],(V125)))),(V126));}
	V122=MMcdr(V122);
	if(endp(V122)){
	V120= base[4];
	goto T260;}
	V121=MMcdr(V121)=MMcons(Cnil,Cnil);
	goto T261;}
	goto T260;
T260:;
	V128= list(3,VV[47],V120,list(3,VV[54],(V105),base[2]));
	{object V130;
	object V131= (V107);
	if(endp(V131)){
	V129= Cnil;
	goto T266;}
	base[4]=V130=MMcons(Cnil,Cnil);
	goto T267;
T267:;
	{object V133;
	object V134;
	object V135;
	V133= cadr((V131->c.c_car));
	V134= cadddr((V131->c.c_car));
	V135= car(cddddr((V131->c.c_car)));
	(V130->c.c_cdr)= list(2,(V133),list(3,VV[54],(V105),list(3,VV[55],list(2,VV[48],listA(3,VV[49],(V134),(V135))),(V106))));}
	{object cdr_V130=MMcdr(V130);while(!endp(cdr_V130)) {cdr_V130=MMcdr(cdr_V130);V130=MMcdr(V130);}}
	V131=MMcdr(V131);
	if(endp(V131)){
	base[4]=base[4]->c.c_cdr;
	V129= base[4];
	goto T266;}
	goto T267;}
	goto T266;
T266:;
	base[4]= list(3,VV[45],(V105),list(3,VV[8],/* INLINE-ARGS */V119,listA(3,VV[46],/* INLINE-ARGS */V128,V129)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for WITH-SIMPLE-RESTART	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	check_arg(2);
	vs_top=sup;
	{object V136=base[0]->c.c_cdr;
	if(endp(V136))invalid_macro_call();
	{object V137= (V136->c.c_car);
	if(endp(V137))invalid_macro_call();
	base[2]= (V137->c.c_car);
	V137=V137->c.c_cdr;
	if(endp(V137))invalid_macro_call();
	base[3]= (V137->c.c_car);
	V137=V137->c.c_cdr;
	base[4]= V137;}
	V136=V136->c.c_cdr;
	base[5]= V136;}
	V138= make_cons(VV[60],base[5]);
	base[6]= list(3,VV[59],/* INLINE-ARGS */V138,list(5,base[2],Cnil,VV[43],list(3,VV[49],VV[61],listA(4,VV[62],VV[58],base[3],base[4])),VV[63]));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	function definition for ABORT	*/

static void L32()
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

static void L33()
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

static void L34()
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

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V139;
	check_arg(1);
	V139=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[67];
	base[2]= (V139);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk78)();
	return;
	}
}
/*	function definition for USE-VALUE	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_reserve(VM35);
	{object V140;
	check_arg(1);
	V140=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[68];
	base[2]= (V140);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk78)();
	return;
	}
}
/*	local function TRANSFORM-KEYWORDS	*/

static void L30(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{register object V141;
	object V142;
	parse_key(vs_base,FALSE,FALSE,2,VV[43],VV[44]);
	vs_top=sup;
	V141=(base[0]);
	V142=(base[1]);
	{register object V143;
	V143= Cnil;
	if(((V141))==Cnil){
	goto T281;}
	if(!(type_of((V141))==t_string)){
	goto T287;}
	V144= list(2,VV[48],list(3,VV[49],VV[56],list(3,VV[57],(V141),VV[58])));
	goto T285;
	goto T287;
T287:;
	V144= list(2,VV[48],(V141));
	goto T285;
T285:;
	V143= listA(3,V144,VV[24],(V143));
	goto T281;
T281:;
	if(((V142))==Cnil){
	goto T289;}
	V143= listA(3,list(2,VV[48],(V142)),VV[34],(V143));
	goto T289;
T289:;
	base[4]= nreverse((V143));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC39(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	{object V145;
	check_arg(1);
	V145=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T294;}
	base[1]= (V145);
	base[2]= VV[35];
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T294;
T294:;
	base[1]= (V145);
	base[2]= VV[36];
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	{object V146;
	check_arg(1);
	V146=(base[0]);
	vs_top=sup;
	{object V147;
	if(!(((base0[0]->c.c_car))==(symbol_value(VV[25])))){
	goto T304;}
	V147= symbol_value(VV[26]);
	goto T302;
	goto T304;
T304:;{object V149;
	base[1]= (base0[0]->c.c_car);
	base[2]= symbol_value(VV[27]);
	base[3]= VV[28];
	base[4]= symbol_function(VV[79]);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk80)();
	vs_top=sup;
	V149= vs_base[0];
	if(V149==Cnil)goto T307;
	V148= V149;
	goto T306;
	goto T307;
T307:;}
	V148= VV[29];
	goto T306;
T306:;
	V147= car(V148);
	goto T302;
T302:;
	if(!(((V147))==(VV[30]))){
	goto T314;}
	base[1]= (V146);
	base[2]= VV[31];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T314;
T314:;
	if(((V147))!=Cnil){
	goto T319;}
	base[1]= (V146);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T319;
T319:;
	base[1]= (V146);
	base[2]= VV[33];
	base[3]= make_fixnum((long)length((V147)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC37(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	check_arg(0);
	vs_top=sup;
	{frame_ptr fr;
	V150= make_cons((base0[0]->c.c_car),Cnil);
	base[0]= car(/* INLINE-ARGS */V150);
	fr=frs_sch_catch(base[0]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[0]);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,base[0]);}
}
static void LnkT80(){ call_or_link(VV[80],(void **)&Lnk80);} /* FIND */
static void LnkT78(){ call_or_link(VV[78],(void **)&Lnk78);} /* INVOKE-RESTART */
static void LnkT6(){ call_or_link(VV[6],(void **)&Lnk6);} /* PARSE-KEYWORD-PAIRS */
static void LnkT77(){ call_or_link(VV[77],(void **)&Lnk77);} /* FIND-RESTART */
static void LnkT76(){ call_or_link(VV[76],(void **)&Lnk76);} /* FIND-KCL-TOP-RESTART */
static void LnkT75(){ call_or_link(VV[75],(void **)&Lnk75);} /* MAKE-KCL-TOP-RESTART */
static void LnkT39(){ call_or_link(VV[39],(void **)&Lnk39);} /* MAKE-RESTART */
static void LnkT74(){ call_or_link(VV[74],(void **)&Lnk74);} /* DEFINE-STRUCTURE */
static void LnkT73(){ call_or_link(VV[73],(void **)&Lnk73);} /* RESTART-REPORT */
static void LnkT72(){ call_or_link(VV[72],(void **)&Lnk72);} /* UNIQUE-ID */
static void LnkT71(){ call_or_link(VV[71],(void **)&Lnk71);} /* KCL-TOP-RESTARTS */
static void LnkT70(){ call_or_link(VV[70],(void **)&Lnk70);} /* ERROR */
static void LnkT69(){ call_or_link(VV[69],(void **)&Lnk69);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

