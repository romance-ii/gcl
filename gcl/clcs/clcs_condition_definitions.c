
#include "cmpinclude.h"
#include "clcs_condition_definitions.h"
void init_clcs_condition_definitions(){do_init(VV);}
/*	local entry for function progn 'compile2182	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= symbol_value(VV[1]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[1],vs_base[0]);
	{object V2 = Cnil;
	VMR1(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2202	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{register object x= VV[0],V3= symbol_value(VV[1]);
	while(!endp(V3))
	if(eql(x,V3->c.c_car)){
	goto T8;
	}else V3=V3->c.c_cdr;
	goto T5;}
	goto T8;
T8:;
	{register object x= VV[2],V4= symbol_value(VV[1]);
	while(!endp(V4))
	if(eql(x,V4->c.c_car)){
	goto T9;
	}else V4=V4->c.c_cdr;
	goto T5;}
	goto T9;
T9:;
	{register object V5;
	register object V6;
	V5= VV[3];
	V6= car((V5));
	goto T14;
T14:;
	if(!(endp_prop((V5)))){
	goto T15;}
	goto T10;
	goto T15;
T15:;
	base[1]= (V6);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T19;}
	base[1]= (V6);
	vs_top=(vs_base=base+1)+1;
	Lfmakunbound();
	vs_top=sup;
	goto T19;
T19:;
	V5= cdr((V5));
	V6= car((V5));
	goto T14;}
	goto T10;
T10:;
	base[0]= VV[2];
	base[1]= symbol_value(VV[1]);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk260)();
	vs_top=sup;
	setq(VV[1],vs_base[0]);
	goto T5;
T5:;
	{object V7 = Cnil;
	VMR2(V7)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass WARNING2248	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[4];
	base[1]= VV[5];
	base[2]= VV[6];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2264	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk262)();
	vs_top=sup;
	{object V8 = Cnil;
	VMR4(V8)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2281	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[7];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V10 = Cnil;
	VMR5(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2305	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	(void)(sputprop(VV[4],VV[9],Cnil));
	{object V11 = Cnil;
	VMR6(V11)}
	return Cnil;
}
/*	local entry for function progn 'compile2317	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	function definition for Defclass SERIOUS-CONDITION2337	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[10];
	base[1]= VV[5];
	base[2]= VV[11];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2353	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk263)();
	vs_top=sup;
	{object V13 = Cnil;
	VMR9(V13)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2370	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V15 = Cnil;
	VMR10(V15)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2394	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	(void)(sputprop(VV[10],VV[9],Cnil));
	{object V16 = Cnil;
	VMR11(V16)}
	return Cnil;
}
/*	local entry for function progn 'compile2406	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V17 = Cnil;
	VMR12(V17)}
	return Cnil;
}
/*	function definition for Defclass ERROR2426	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[13];
	base[1]= VV[5];
	base[2]= VV[14];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2442	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk264)();
	vs_top=sup;
	{object V18 = Cnil;
	VMR14(V18)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2459	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[15];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V20 = Cnil;
	VMR15(V20)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2483	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	(void)(sputprop(VV[13],VV[9],Cnil));
	{object V21 = Cnil;
	VMR16(V21)}
	return Cnil;
}
/*	local entry for function progn 'compile2495	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V22 = Cnil;
	VMR17(V22)}
	return Cnil;
}
/*	local entry for function SIMPLE-CONDITION-PRINTER	*/

static object LI18(V25,V26)

object V25;object V26;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= (V26);
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V27;
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V27= vs_base[0];
	 vs_top=base+2;
	 while(!endp(V27))
	 {vs_push(car(V27));V27=cdr(V27);}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V28 = vs_base[0];
	VMR18(V28)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SIMPLE-CONDITION2523	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[16];
	base[1]= VV[5];
	base[2]= VV[17];
	V29= listA(9,VV[18],VV[19],VV[20],VV[21],VV[22],Cnil,VV[23],VV[24],VV[25]);
	base[4]= VV[26];
	base[5]= symbol_function(VV[267]);
	base[6]= VV[18];
	base[7]= VV[27];
	base[8]= VV[20];
	base[9]= VV[28];
	base[10]= VV[22];
	base[11]= Cnil;
	base[12]= VV[23];
	base[13]= VV[29];
	base[14]= VV[30];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V30= vs_base[0];
	base[3]= list(2,/* INLINE-ARGS */V29,V30);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2541	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk268)();
	vs_top=sup;
	{object V31 = Cnil;
	VMR20(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2558	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= VV[31];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V33 = Cnil;
	VMR21(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2582	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	(void)(sputprop(VV[16],VV[9],Cnil));
	{object V34 = Cnil;
	VMR22(V34)}
	return Cnil;
}
/*	local entry for function progn 'compile2598	*/

static object LI23()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[33];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V35 = Cnil;
	VMR23(V35)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (SIMPLE-CONDITION T))	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V36;
	register object V37;
	register object V38;
	register object V39;
	check_arg(4);
	V36=(base[0]);
	V37=(base[1]);
	V38=(base[2]);
	V39=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T107;}
	if(((V37))==Cnil){
	goto T110;}
	base[4]= (V37);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T114;}
	base[4]= structure_ref((V37),VV[35],0);
	base[5]= structure_ref((V37),VV[35],1);
	base[6]= structure_ref((V37),VV[35],2);
	base[7]= (V38);
	base[8]= (V39);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T114;
T114:;
	if(!(type_of((V37))==t_fixnum)){
	goto T124;}
	{object V42;
	if(type_of(V38)==t_structure){
	goto T130;}
	goto T128;
	goto T130;
T130:;
	base[4]= V38;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V44= vs_base[0];
	if(!((V44)==(VV[36]))){
	goto T128;}
	V42= structure_ref((V38),VV[37],1);
	goto T126;
	goto T128;
T128:;{object V45;
	V45= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V38);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V46= vs_base[0];
	if(!((V45)==(car(V46)))){
	goto T135;}}
	V42= car(((V38))->cc.cc_turbo[12]);
	goto T126;
	goto T135;
T135:;
	V42= Cnil;
	goto T126;
T126:;
	if(((V42))==Cnil){
	goto T141;}
	base[4]= aset1((V42),fix((V37)),V38);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T141;
T141:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T124;
T124:;
	{register object V48;
	V48= V37;
	base[4]= (V48);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T144;}
	{object V49;
	object V50;
	register object V51;
	V49= structure_ref((V37),VV[39],0);
	V50= list(2,(V38),(V39));
	V51= structure_ref((V37),VV[39],1);
	if(((V51))==Cnil){
	goto T152;}
	if((cdr((V51)))!=Cnil){
	goto T152;}
	base[4]= (V50);
	base[5]= car((V51));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V49);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T152;
T152:;
	base[4]= (V49);
	base[5]= (V50);
	{object V52;
	V52= (V51);
	 vs_top=base+6;
	 while(!endp(V52))
	 {vs_push(car(V52));V52=cdr(V52);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T144;
T144:;
	base[4]= (V48);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T162;}
	base[4]= (V38);
	base[5]= (V39);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V37);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T162;
T162:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V37;
	base[9]= VV[43];
	base[10]= VV[44];
	base[11]= VV[45];
	base[12]= VV[46];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T110;
T110:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T107;
T107:;
	base[4]= (*(LnkLI274))((V38),(V39));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile2791	*/

static object LI25()

{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[49];
	base[4]= VV[50];
	V53= symbol_function(VV[275]);
	base[5]= listA(3,VV[51],V53,VV[52]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V54 = Cnil;
	VMR25(V54)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2799	*/

static object LI26()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V55 = Cnil;
	VMR26(V55)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-WARNING2819	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[53];
	base[1]= VV[5];
	base[2]= VV[54];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2835	*/

static object LI28()

{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk277)();
	vs_top=sup;
	{object V56 = Cnil;
	VMR28(V56)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2852	*/

static object LI29()

{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[0]= VV[55];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V58 = Cnil;
	VMR29(V58)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2876	*/

static object LI30()

{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	(void)(sputprop(VV[53],VV[9],Cnil));
	{object V59 = Cnil;
	VMR30(V59)}
	return Cnil;
}
/*	local entry for function progn 'compile2888	*/

static object LI31()

{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V60 = Cnil;
	VMR31(V60)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-ERROR2908	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[56];
	base[1]= VV[5];
	base[2]= VV[57];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2924	*/

static object LI33()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk278)();
	vs_top=sup;
	{object V61 = Cnil;
	VMR33(V61)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2941	*/

static object LI34()

{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]= VV[58];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V63 = Cnil;
	VMR34(V63)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2965	*/

static object LI35()

{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	(void)(sputprop(VV[56],VV[9],Cnil));
	{object V64 = Cnil;
	VMR35(V64)}
	return Cnil;
}
/*	local entry for function progn 'compile2977	*/

static object LI36()

{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V65 = Cnil;
	VMR36(V65)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-CONDITION2997	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[59];
	base[1]= VV[5];
	base[2]= VV[60];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3013	*/

static object LI38()

{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V66 = Cnil;
	VMR38(V66)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3030	*/

static object LI39()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]= VV[61];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V68 = Cnil;
	VMR39(V68)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3054	*/

static object LI40()

{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	(void)(sputprop(VV[59],VV[9],Cnil));
	{object V69 = Cnil;
	VMR40(V69)}
	return Cnil;
}
/*	local entry for function progn 'compile3066	*/

static object LI41()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V70 = Cnil;
	VMR41(V70)}
	return Cnil;
}
/*	function definition for Defclass STACK-OVERFLOW3086	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[62];
	base[1]= VV[5];
	base[2]= VV[63];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3102	*/

static object LI43()

{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk280)();
	vs_top=sup;
	{object V71 = Cnil;
	VMR43(V71)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3119	*/

static object LI44()

{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	base[0]= VV[64];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V73 = Cnil;
	VMR44(V73)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3143	*/

static object LI45()

{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	(void)(sputprop(VV[62],VV[9],Cnil));
	{object V74 = Cnil;
	VMR45(V74)}
	return Cnil;
}
/*	local entry for function progn 'compile3155	*/

static object LI46()

{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V75 = Cnil;
	VMR46(V75)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-EXHAUSTED3175	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[65];
	base[1]= VV[5];
	base[2]= VV[66];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3191	*/

static object LI48()

{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V76 = Cnil;
	VMR48(V76)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3208	*/

static object LI49()

{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	base[0]= VV[67];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V78 = Cnil;
	VMR49(V78)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3232	*/

static object LI50()

{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)(sputprop(VV[65],VV[9],Cnil));
	{object V79 = Cnil;
	VMR50(V79)}
	return Cnil;
}
/*	local entry for function progn 'compile3244	*/

static object LI51()

{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V80 = Cnil;
	VMR51(V80)}
	return Cnil;
}
/*	function definition for Defclass TYPE-ERROR3264	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_reserve(VM52);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[68];
	base[1]= VV[5];
	base[2]= VV[69];
	V81= listA(9,VV[18],VV[70],VV[20],VV[71],VV[22],Cnil,VV[23],VV[72],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V81,listA(9,VV[18],VV[73],VV[20],VV[74],VV[22],Cnil,VV[23],VV[75],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3282	*/

static object LI53()

{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk282)();
	vs_top=sup;
	{object V82 = Cnil;
	VMR53(V82)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3299	*/

static object LI54()

{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	base[0]= VV[76];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V84 = Cnil;
	VMR54(V84)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3323	*/

static object LI55()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	(void)(sputprop(VV[68],VV[9],Cnil));
	{object V85 = Cnil;
	VMR55(V85)}
	return Cnil;
}
/*	local entry for function progn 'compile3339	*/

static object LI56()

{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[77];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V86 = Cnil;
	VMR56(V86)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (TYPE-ERROR T))	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_reserve(VM57);
	{object V87;
	register object V88;
	register object V89;
	register object V90;
	check_arg(4);
	V87=(base[0]);
	V88=(base[1]);
	V89=(base[2]);
	V90=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T271;}
	if(((V88))==Cnil){
	goto T274;}
	base[4]= (V88);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T278;}
	base[4]= structure_ref((V88),VV[35],0);
	base[5]= structure_ref((V88),VV[35],1);
	base[6]= structure_ref((V88),VV[35],2);
	base[7]= (V89);
	base[8]= (V90);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T278;
T278:;
	if(!(type_of((V88))==t_fixnum)){
	goto T288;}
	{object V93;
	if(type_of(V89)==t_structure){
	goto T294;}
	goto T292;
	goto T294;
T294:;
	base[4]= V89;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V95= vs_base[0];
	if(!((V95)==(VV[78]))){
	goto T292;}
	V93= structure_ref((V89),VV[37],1);
	goto T290;
	goto T292;
T292:;{object V96;
	V96= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V89);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V97= vs_base[0];
	if(!((V96)==(car(V97)))){
	goto T299;}}
	V93= car(((V89))->cc.cc_turbo[12]);
	goto T290;
	goto T299;
T299:;
	V93= Cnil;
	goto T290;
T290:;
	if(((V93))==Cnil){
	goto T305;}
	base[4]= aset1((V93),fix((V88)),V89);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T305;
T305:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T288;
T288:;
	{register object V99;
	V99= V88;
	base[4]= (V99);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T308;}
	{object V100;
	object V101;
	register object V102;
	V100= structure_ref((V88),VV[39],0);
	V101= list(2,(V89),(V90));
	V102= structure_ref((V88),VV[39],1);
	if(((V102))==Cnil){
	goto T316;}
	if((cdr((V102)))!=Cnil){
	goto T316;}
	base[4]= (V101);
	base[5]= car((V102));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V100);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T316;
T316:;
	base[4]= (V100);
	base[5]= (V101);
	{object V103;
	V103= (V102);
	 vs_top=base+6;
	 while(!endp(V103))
	 {vs_push(car(V103));V103=cdr(V103);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T308;
T308:;
	base[4]= (V99);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T326;}
	base[4]= (V89);
	base[5]= (V90);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V88);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T326;
T326:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V88;
	base[9]= VV[43];
	base[10]= VV[79];
	base[11]= VV[45];
	base[12]= VV[80];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T274;
T274:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T271;
T271:;
	base[4]= V90;
	base[5]= VV[81];
	base[7]= V89;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V89;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3536	*/

static object LI58()

{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[82];
	base[4]= VV[83];
	V106= symbol_function(VV[285]);
	base[5]= listA(3,VV[51],V106,VV[84]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V107 = Cnil;
	VMR58(V107)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3544	*/

static object LI59()

{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V108 = Cnil;
	VMR59(V108)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-TYPE-ERROR3564	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_reserve(VM60);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[85];
	base[1]= VV[5];
	base[2]= VV[86];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3580	*/

static object LI61()

{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk286)();
	vs_top=sup;
	{object V109 = Cnil;
	VMR61(V109)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3597	*/

static object LI62()

{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= VV[87];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V111 = Cnil;
	VMR62(V111)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3621	*/

static object LI63()

{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	(void)(sputprop(VV[85],VV[9],Cnil));
	{object V112 = Cnil;
	VMR63(V112)}
	return Cnil;
}
/*	local entry for function progn 'compile3633	*/

static object LI64()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V113 = Cnil;
	VMR64(V113)}
	return Cnil;
}
/*	function definition for Defclass CASE-FAILURE3653	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_reserve(VM65);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= VV[5];
	base[2]= VV[88];
	V114= listA(9,VV[18],VV[89],VV[20],VV[90],VV[22],Cnil,VV[23],VV[91],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V114,listA(9,VV[18],VV[92],VV[20],VV[93],VV[22],Cnil,VV[23],VV[94],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3671	*/

static object LI66()

{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk287)();
	vs_top=sup;
	{object V115 = Cnil;
	VMR66(V115)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3688	*/

static object LI67()

{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	base[0]= VV[95];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V117 = Cnil;
	VMR67(V117)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3712	*/

static object LI68()

{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	(void)(sputprop(VV[40],VV[9],Cnil));
	{object V118 = Cnil;
	VMR68(V118)}
	return Cnil;
}
/*	local entry for function progn 'compile3728	*/

static object LI69()

{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V119 = Cnil;
	VMR69(V119)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (CASE-FAILURE T))	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_reserve(VM70);
	{object V120;
	register object V121;
	register object V122;
	register object V123;
	check_arg(4);
	V120=(base[0]);
	V121=(base[1]);
	V122=(base[2]);
	V123=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T389;}
	if(((V121))==Cnil){
	goto T392;}
	base[4]= (V121);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T396;}
	base[4]= structure_ref((V121),VV[35],0);
	base[5]= structure_ref((V121),VV[35],1);
	base[6]= structure_ref((V121),VV[35],2);
	base[7]= (V122);
	base[8]= (V123);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T396;
T396:;
	if(!(type_of((V121))==t_fixnum)){
	goto T406;}
	{object V126;
	if(type_of(V122)==t_structure){
	goto T412;}
	goto T410;
	goto T412;
T412:;
	base[4]= V122;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V128= vs_base[0];
	if(!((V128)==(VV[97]))){
	goto T410;}
	V126= structure_ref((V122),VV[37],1);
	goto T408;
	goto T410;
T410:;{object V129;
	V129= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V122);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V130= vs_base[0];
	if(!((V129)==(car(V130)))){
	goto T417;}}
	V126= car(((V122))->cc.cc_turbo[12]);
	goto T408;
	goto T417;
T417:;
	V126= Cnil;
	goto T408;
T408:;
	if(((V126))==Cnil){
	goto T423;}
	base[4]= aset1((V126),fix((V121)),V122);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T423;
T423:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T406;
T406:;
	{register object V132;
	V132= V121;
	base[4]= (V132);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T426;}
	{object V133;
	object V134;
	register object V135;
	V133= structure_ref((V121),VV[39],0);
	V134= list(2,(V122),(V123));
	V135= structure_ref((V121),VV[39],1);
	if(((V135))==Cnil){
	goto T434;}
	if((cdr((V135)))!=Cnil){
	goto T434;}
	base[4]= (V134);
	base[5]= car((V135));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V133);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T434;
T434:;
	base[4]= (V133);
	base[5]= (V134);
	{object V136;
	V136= (V135);
	 vs_top=base+6;
	 while(!endp(V136))
	 {vs_push(car(V136));V136=cdr(V136);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T426;
T426:;
	base[4]= (V132);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T444;}
	base[4]= (V122);
	base[5]= (V123);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V121);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T444;
T444:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V121;
	base[9]= VV[43];
	base[10]= VV[98];
	base[11]= VV[45];
	base[12]= VV[99];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T392;
T392:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T389;
T389:;
	base[4]= V123;
	base[5]= VV[100];
	base[7]= V122;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V122;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= V122;
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3925	*/

static object LI71()

{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[101];
	base[4]= VV[102];
	V139= symbol_function(VV[290]);
	base[5]= listA(3,VV[51],V139,VV[103]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V140 = Cnil;
	VMR71(V140)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3933	*/

static object LI72()

{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V141 = Cnil;
	VMR72(V141)}
	return Cnil;
}
/*	function definition for Defclass PROGRAM-ERROR3953	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_reserve(VM73);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[104];
	base[1]= VV[5];
	base[2]= VV[105];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3969	*/

static object LI74()

{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk291)();
	vs_top=sup;
	{object V142 = Cnil;
	VMR74(V142)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3986	*/

static object LI75()

{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	base[0]= VV[106];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V144 = Cnil;
	VMR75(V144)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4010	*/

static object LI76()

{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	(void)(sputprop(VV[104],VV[9],Cnil));
	{object V145 = Cnil;
	VMR76(V145)}
	return Cnil;
}
/*	local entry for function progn 'compile4022	*/

static object LI77()

{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V146 = Cnil;
	VMR77(V146)}
	return Cnil;
}
/*	function definition for Defclass CONTROL-ERROR4042	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_reserve(VM78);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[107];
	base[1]= VV[5];
	base[2]= VV[108];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4058	*/

static object LI79()

{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk292)();
	vs_top=sup;
	{object V147 = Cnil;
	VMR79(V147)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4075	*/

static object LI80()

{	 VMB80 VMS80 VMV80
	goto TTL;
TTL:;
	base[0]= VV[109];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V149 = Cnil;
	VMR80(V149)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4099	*/

static object LI81()

{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)(sputprop(VV[107],VV[9],Cnil));
	{object V150 = Cnil;
	VMR81(V150)}
	return Cnil;
}
/*	local entry for function progn 'compile4111	*/

static object LI82()

{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	{object V151 = Cnil;
	VMR82(V151)}
	return Cnil;
}
/*	function definition for Defclass STREAM-ERROR4131	*/

static void L83()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_reserve(VM83);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[110];
	base[1]= VV[5];
	base[2]= VV[111];
	V152= listA(9,VV[18],VV[112],VV[20],VV[113],VV[22],Cnil,VV[23],VV[114],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V152,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4148	*/

static object LI84()

{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk293)();
	vs_top=sup;
	{object V153 = Cnil;
	VMR84(V153)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4165	*/

static object LI85()

{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	base[0]= VV[115];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V155 = Cnil;
	VMR85(V155)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4189	*/

static object LI86()

{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	(void)(sputprop(VV[110],VV[9],Cnil));
	{object V156 = Cnil;
	VMR86(V156)}
	return Cnil;
}
/*	local entry for function progn 'compile4201	*/

static object LI87()

{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{object V157 = Cnil;
	VMR87(V157)}
	return Cnil;
}
/*	function definition for Defclass END-OF-FILE4221	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_reserve(VM88);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[116];
	base[1]= VV[5];
	base[2]= VV[117];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4237	*/

static object LI89()

{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk294)();
	vs_top=sup;
	{object V158 = Cnil;
	VMR89(V158)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4254	*/

static object LI90()

{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	base[0]= VV[118];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V160 = Cnil;
	VMR90(V160)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4278	*/

static object LI91()

{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	(void)(sputprop(VV[116],VV[9],Cnil));
	{object V161 = Cnil;
	VMR91(V161)}
	return Cnil;
}
/*	local entry for function progn 'compile4294	*/

static object LI92()

{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[119];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V162 = Cnil;
	VMR92(V162)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (END-OF-FILE T))	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_reserve(VM93);
	{object V163;
	register object V164;
	register object V165;
	register object V166;
	check_arg(4);
	V163=(base[0]);
	V164=(base[1]);
	V165=(base[2]);
	V166=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T535;}
	if(((V164))==Cnil){
	goto T538;}
	base[4]= (V164);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T542;}
	base[4]= structure_ref((V164),VV[35],0);
	base[5]= structure_ref((V164),VV[35],1);
	base[6]= structure_ref((V164),VV[35],2);
	base[7]= (V165);
	base[8]= (V166);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T542;
T542:;
	if(!(type_of((V164))==t_fixnum)){
	goto T552;}
	{object V169;
	if(type_of(V165)==t_structure){
	goto T558;}
	goto T556;
	goto T558;
T558:;
	base[4]= V165;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V171= vs_base[0];
	if(!((V171)==(VV[120]))){
	goto T556;}
	V169= structure_ref((V165),VV[37],1);
	goto T554;
	goto T556;
T556:;{object V172;
	V172= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V165);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V173= vs_base[0];
	if(!((V172)==(car(V173)))){
	goto T563;}}
	V169= car(((V165))->cc.cc_turbo[12]);
	goto T554;
	goto T563;
T563:;
	V169= Cnil;
	goto T554;
T554:;
	if(((V169))==Cnil){
	goto T569;}
	base[4]= aset1((V169),fix((V164)),V165);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T569;
T569:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T552;
T552:;
	{register object V175;
	V175= V164;
	base[4]= (V175);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T572;}
	{object V176;
	object V177;
	register object V178;
	V176= structure_ref((V164),VV[39],0);
	V177= list(2,(V165),(V166));
	V178= structure_ref((V164),VV[39],1);
	if(((V178))==Cnil){
	goto T580;}
	if((cdr((V178)))!=Cnil){
	goto T580;}
	base[4]= (V177);
	base[5]= car((V178));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V176);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T580;
T580:;
	base[4]= (V176);
	base[5]= (V177);
	{object V179;
	V179= (V178);
	 vs_top=base+6;
	 while(!endp(V179))
	 {vs_push(car(V179));V179=cdr(V179);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T572;
T572:;
	base[4]= (V175);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T590;}
	base[4]= (V165);
	base[5]= (V166);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V164);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T590;
T590:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V164;
	base[9]= VV[43];
	base[10]= VV[121];
	base[11]= VV[45];
	base[12]= VV[122];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T538;
T538:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T535;
T535:;
	base[4]= V166;
	base[5]= VV[123];
	base[7]= V165;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk295)(Lclptr295);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4491	*/

static object LI94()

{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[124];
	base[4]= VV[125];
	V182= symbol_function(VV[296]);
	base[5]= listA(3,VV[51],V182,VV[126]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V183 = Cnil;
	VMR94(V183)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4499	*/

static object LI95()

{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{object V184 = Cnil;
	VMR95(V184)}
	return Cnil;
}
/*	function definition for Defclass FILE-ERROR4519	*/

static void L96()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_reserve(VM96);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[127];
	base[1]= VV[5];
	base[2]= VV[128];
	V185= listA(9,VV[18],VV[129],VV[20],VV[130],VV[22],Cnil,VV[23],VV[131],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V185,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4536	*/

static object LI97()

{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk297)();
	vs_top=sup;
	{object V186 = Cnil;
	VMR97(V186)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4553	*/

static object LI98()

{	 VMB98 VMS98 VMV98
	goto TTL;
TTL:;
	base[0]= VV[132];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V188 = Cnil;
	VMR98(V188)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4577	*/

static object LI99()

{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	(void)(sputprop(VV[127],VV[9],Cnil));
	{object V189 = Cnil;
	VMR99(V189)}
	return Cnil;
}
/*	local entry for function progn 'compile4589	*/

static object LI100()

{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V190 = Cnil;
	VMR100(V190)}
	return Cnil;
}
/*	function definition for Defclass PACKAGE-ERROR4609	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_reserve(VM101);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[133];
	base[1]= VV[5];
	base[2]= VV[134];
	V191= listA(9,VV[18],VV[135],VV[20],VV[136],VV[22],Cnil,VV[23],VV[137],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V191,listA(9,VV[18],VV[138],VV[20],VV[139],VV[22],Cnil,VV[23],VV[140],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4627	*/

static object LI102()

{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk298)();
	vs_top=sup;
	{object V192 = Cnil;
	VMR102(V192)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4644	*/

static object LI103()

{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[141];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V194 = Cnil;
	VMR103(V194)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4668	*/

static object LI104()

{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	(void)(sputprop(VV[133],VV[9],Cnil));
	{object V195 = Cnil;
	VMR104(V195)}
	return Cnil;
}
/*	local entry for function progn 'compile4684	*/

static object LI105()

{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[142];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V196 = Cnil;
	VMR105(V196)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (PACKAGE-ERROR T))	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_reserve(VM106);
	{object V197;
	register object V198;
	register object V199;
	register object V200;
	check_arg(4);
	V197=(base[0]);
	V198=(base[1]);
	V199=(base[2]);
	V200=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T651;}
	if(((V198))==Cnil){
	goto T654;}
	base[4]= (V198);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T658;}
	base[4]= structure_ref((V198),VV[35],0);
	base[5]= structure_ref((V198),VV[35],1);
	base[6]= structure_ref((V198),VV[35],2);
	base[7]= (V199);
	base[8]= (V200);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T658;
T658:;
	if(!(type_of((V198))==t_fixnum)){
	goto T668;}
	{object V203;
	if(type_of(V199)==t_structure){
	goto T674;}
	goto T672;
	goto T674;
T674:;
	base[4]= V199;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V205= vs_base[0];
	if(!((V205)==(VV[143]))){
	goto T672;}
	V203= structure_ref((V199),VV[37],1);
	goto T670;
	goto T672;
T672:;{object V206;
	V206= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V199);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V207= vs_base[0];
	if(!((V206)==(car(V207)))){
	goto T679;}}
	V203= car(((V199))->cc.cc_turbo[12]);
	goto T670;
	goto T679;
T679:;
	V203= Cnil;
	goto T670;
T670:;
	if(((V203))==Cnil){
	goto T685;}
	base[4]= aset1((V203),fix((V198)),V199);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T685;
T685:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T668;
T668:;
	{register object V209;
	V209= V198;
	base[4]= (V209);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T688;}
	{object V210;
	object V211;
	register object V212;
	V210= structure_ref((V198),VV[39],0);
	V211= list(2,(V199),(V200));
	V212= structure_ref((V198),VV[39],1);
	if(((V212))==Cnil){
	goto T696;}
	if((cdr((V212)))!=Cnil){
	goto T696;}
	base[4]= (V211);
	base[5]= car((V212));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V210);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T696;
T696:;
	base[4]= (V210);
	base[5]= (V211);
	{object V213;
	V213= (V212);
	 vs_top=base+6;
	 while(!endp(V213))
	 {vs_push(car(V213));V213=cdr(V213);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T688;
T688:;
	base[4]= (V209);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	base[4]= (V199);
	base[5]= (V200);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V198);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T706;
T706:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V198;
	base[9]= VV[43];
	base[10]= VV[144];
	base[11]= VV[45];
	base[12]= VV[145];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T654;
T654:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T651;
T651:;
	base[4]= V200;
	base[5]= VV[146];
	base[7]= V199;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V199;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4881	*/

static object LI107()

{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[147];
	base[4]= VV[148];
	V216= symbol_function(VV[301]);
	base[5]= listA(3,VV[51],V216,VV[149]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V217 = Cnil;
	VMR107(V217)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4889	*/

static object LI108()

{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V218 = Cnil;
	VMR108(V218)}
	return Cnil;
}
/*	function definition for Defclass CELL-ERROR4909	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_reserve(VM109);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[150];
	base[1]= VV[5];
	base[2]= VV[151];
	V219= listA(9,VV[18],VV[89],VV[20],VV[152],VV[22],Cnil,VV[23],VV[153],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V219,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4926	*/

static object LI110()

{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk302)();
	vs_top=sup;
	{object V220 = Cnil;
	VMR110(V220)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4943	*/

static object LI111()

{	 VMB111 VMS111 VMV111
	goto TTL;
TTL:;
	base[0]= VV[154];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V222 = Cnil;
	VMR111(V222)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4967	*/

static object LI112()

{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	(void)(sputprop(VV[150],VV[9],Cnil));
	{object V223 = Cnil;
	VMR112(V223)}
	return Cnil;
}
/*	local entry for function progn 'compile4979	*/

static object LI113()

{	 VMB113 VMS113 VMV113
	goto TTL;
TTL:;
	{object V224 = Cnil;
	VMR113(V224)}
	return Cnil;
}
/*	function definition for Defclass UNBOUND-VARIABLE4999	*/

static void L114()
{register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_reserve(VM114);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[155];
	base[1]= VV[5];
	base[2]= VV[156];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5015	*/

static object LI115()

{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk303)();
	vs_top=sup;
	{object V225 = Cnil;
	VMR115(V225)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5032	*/

static object LI116()

{	 VMB116 VMS116 VMV116
	goto TTL;
TTL:;
	base[0]= VV[157];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V227 = Cnil;
	VMR116(V227)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5056	*/

static object LI117()

{	 VMB117 VMS117 VMV117
	goto TTL;
TTL:;
	(void)(sputprop(VV[155],VV[9],Cnil));
	{object V228 = Cnil;
	VMR117(V228)}
	return Cnil;
}
/*	local entry for function progn 'compile5072	*/

static object LI118()

{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[158];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V229 = Cnil;
	VMR118(V229)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNBOUND-VARIABLE T))	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_reserve(VM119);
	{object V230;
	register object V231;
	register object V232;
	register object V233;
	check_arg(4);
	V230=(base[0]);
	V231=(base[1]);
	V232=(base[2]);
	V233=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T769;}
	if(((V231))==Cnil){
	goto T772;}
	base[4]= (V231);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T776;}
	base[4]= structure_ref((V231),VV[35],0);
	base[5]= structure_ref((V231),VV[35],1);
	base[6]= structure_ref((V231),VV[35],2);
	base[7]= (V232);
	base[8]= (V233);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T776;
T776:;
	if(!(type_of((V231))==t_fixnum)){
	goto T786;}
	{object V236;
	if(type_of(V232)==t_structure){
	goto T792;}
	goto T790;
	goto T792;
T792:;
	base[4]= V232;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V238= vs_base[0];
	if(!((V238)==(VV[159]))){
	goto T790;}
	V236= structure_ref((V232),VV[37],1);
	goto T788;
	goto T790;
T790:;{object V239;
	V239= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V232);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V240= vs_base[0];
	if(!((V239)==(car(V240)))){
	goto T797;}}
	V236= car(((V232))->cc.cc_turbo[12]);
	goto T788;
	goto T797;
T797:;
	V236= Cnil;
	goto T788;
T788:;
	if(((V236))==Cnil){
	goto T803;}
	base[4]= aset1((V236),fix((V231)),V232);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T803;
T803:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T786;
T786:;
	{register object V242;
	V242= V231;
	base[4]= (V242);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T806;}
	{object V243;
	object V244;
	register object V245;
	V243= structure_ref((V231),VV[39],0);
	V244= list(2,(V232),(V233));
	V245= structure_ref((V231),VV[39],1);
	if(((V245))==Cnil){
	goto T814;}
	if((cdr((V245)))!=Cnil){
	goto T814;}
	base[4]= (V244);
	base[5]= car((V245));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V243);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T814;
T814:;
	base[4]= (V243);
	base[5]= (V244);
	{object V246;
	V246= (V245);
	 vs_top=base+6;
	 while(!endp(V246))
	 {vs_push(car(V246));V246=cdr(V246);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T806;
T806:;
	base[4]= (V242);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T824;}
	base[4]= (V232);
	base[5]= (V233);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V231);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T824;
T824:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V231;
	base[9]= VV[43];
	base[10]= VV[160];
	base[11]= VV[45];
	base[12]= VV[161];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T772;
T772:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T769;
T769:;
	base[4]= V233;
	base[5]= VV[162];
	base[7]= V232;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5269	*/

static object LI120()

{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[163];
	base[4]= VV[164];
	V249= symbol_function(VV[305]);
	base[5]= listA(3,VV[51],V249,VV[165]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V250 = Cnil;
	VMR120(V250)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5277	*/

static object LI121()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	{object V251 = Cnil;
	VMR121(V251)}
	return Cnil;
}
/*	function definition for Defclass UNDEFINED-FUNCTION5297	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_reserve(VM122);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[166];
	base[1]= VV[5];
	base[2]= VV[167];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5313	*/

static object LI123()

{	 VMB123 VMS123 VMV123
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk306)();
	vs_top=sup;
	{object V252 = Cnil;
	VMR123(V252)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5330	*/

static object LI124()

{	 VMB124 VMS124 VMV124
	goto TTL;
TTL:;
	base[0]= VV[168];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V254 = Cnil;
	VMR124(V254)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5354	*/

static object LI125()

{	 VMB125 VMS125 VMV125
	goto TTL;
TTL:;
	(void)(sputprop(VV[166],VV[9],Cnil));
	{object V255 = Cnil;
	VMR125(V255)}
	return Cnil;
}
/*	local entry for function progn 'compile5370	*/

static object LI126()

{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[169];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V256 = Cnil;
	VMR126(V256)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNDEFINED-FUNCTION T))	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_reserve(VM127);
	{object V257;
	register object V258;
	register object V259;
	register object V260;
	check_arg(4);
	V257=(base[0]);
	V258=(base[1]);
	V259=(base[2]);
	V260=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T872;}
	if(((V258))==Cnil){
	goto T875;}
	base[4]= (V258);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T879;}
	base[4]= structure_ref((V258),VV[35],0);
	base[5]= structure_ref((V258),VV[35],1);
	base[6]= structure_ref((V258),VV[35],2);
	base[7]= (V259);
	base[8]= (V260);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T879;
T879:;
	if(!(type_of((V258))==t_fixnum)){
	goto T889;}
	{object V263;
	if(type_of(V259)==t_structure){
	goto T895;}
	goto T893;
	goto T895;
T895:;
	base[4]= V259;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V265= vs_base[0];
	if(!((V265)==(VV[170]))){
	goto T893;}
	V263= structure_ref((V259),VV[37],1);
	goto T891;
	goto T893;
T893:;{object V266;
	V266= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V259);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V267= vs_base[0];
	if(!((V266)==(car(V267)))){
	goto T900;}}
	V263= car(((V259))->cc.cc_turbo[12]);
	goto T891;
	goto T900;
T900:;
	V263= Cnil;
	goto T891;
T891:;
	if(((V263))==Cnil){
	goto T906;}
	base[4]= aset1((V263),fix((V258)),V259);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T906;
T906:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T889;
T889:;
	{register object V269;
	V269= V258;
	base[4]= (V269);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T909;}
	{object V270;
	object V271;
	register object V272;
	V270= structure_ref((V258),VV[39],0);
	V271= list(2,(V259),(V260));
	V272= structure_ref((V258),VV[39],1);
	if(((V272))==Cnil){
	goto T917;}
	if((cdr((V272)))!=Cnil){
	goto T917;}
	base[4]= (V271);
	base[5]= car((V272));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V270);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T917;
T917:;
	base[4]= (V270);
	base[5]= (V271);
	{object V273;
	V273= (V272);
	 vs_top=base+6;
	 while(!endp(V273))
	 {vs_push(car(V273));V273=cdr(V273);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T909;
T909:;
	base[4]= (V269);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T927;}
	base[4]= (V259);
	base[5]= (V260);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V258);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T927;
T927:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V258;
	base[9]= VV[43];
	base[10]= VV[171];
	base[11]= VV[45];
	base[12]= VV[172];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T875;
T875:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T872;
T872:;
	base[4]= V260;
	base[5]= VV[173];
	base[7]= V259;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5567	*/

static object LI128()

{	 VMB128 VMS128 VMV128
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[174];
	base[4]= VV[175];
	V276= symbol_function(VV[307]);
	base[5]= listA(3,VV[51],V276,VV[176]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V277 = Cnil;
	VMR128(V277)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5575	*/

static object LI129()

{	 VMB129 VMS129 VMV129
	goto TTL;
TTL:;
	{object V278 = Cnil;
	VMR129(V278)}
	return Cnil;
}
/*	function definition for Defclass ARITHMETIC-ERROR5595	*/

static void L130()
{register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_reserve(VM130);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[177];
	base[1]= VV[5];
	base[2]= VV[178];
	V279= listA(9,VV[18],VV[179],VV[20],VV[180],VV[22],Cnil,VV[23],VV[181],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V279,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5612	*/

static object LI131()

{	 VMB131 VMS131 VMV131
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk308)();
	vs_top=sup;
	{object V280 = Cnil;
	VMR131(V280)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5629	*/

static object LI132()

{	 VMB132 VMS132 VMV132
	goto TTL;
TTL:;
	base[0]= VV[182];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V282 = Cnil;
	VMR132(V282)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5653	*/

static object LI133()

{	 VMB133 VMS133 VMV133
	goto TTL;
TTL:;
	(void)(sputprop(VV[177],VV[9],Cnil));
	{object V283 = Cnil;
	VMR133(V283)}
	return Cnil;
}
/*	local entry for function progn 'compile5665	*/

static object LI134()

{	 VMB134 VMS134 VMV134
	goto TTL;
TTL:;
	{object V284 = Cnil;
	VMR134(V284)}
	return Cnil;
}
/*	function definition for Defclass DIVISION-BY-ZERO5685	*/

static void L135()
{register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_reserve(VM135);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[183];
	base[1]= VV[5];
	base[2]= VV[184];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5701	*/

static object LI136()

{	 VMB136 VMS136 VMV136
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V285 = Cnil;
	VMR136(V285)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5718	*/

static object LI137()

{	 VMB137 VMS137 VMV137
	goto TTL;
TTL:;
	base[0]= VV[185];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V287 = Cnil;
	VMR137(V287)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5742	*/

static object LI138()

{	 VMB138 VMS138 VMV138
	goto TTL;
TTL:;
	(void)(sputprop(VV[183],VV[9],Cnil));
	{object V288 = Cnil;
	VMR138(V288)}
	return Cnil;
}
/*	local entry for function progn 'compile5754	*/

static object LI139()

{	 VMB139 VMS139 VMV139
	goto TTL;
TTL:;
	{object V289 = Cnil;
	VMR139(V289)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-OVERFLOW5774	*/

static void L140()
{register object *base=vs_base;
	register object *sup=base+VM140; VC140
	vs_reserve(VM140);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[186];
	base[1]= VV[5];
	base[2]= VV[187];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5790	*/

static object LI141()

{	 VMB141 VMS141 VMV141
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk310)();
	vs_top=sup;
	{object V290 = Cnil;
	VMR141(V290)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5807	*/

static object LI142()

{	 VMB142 VMS142 VMV142
	goto TTL;
TTL:;
	base[0]= VV[188];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V292 = Cnil;
	VMR142(V292)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5831	*/

static object LI143()

{	 VMB143 VMS143 VMV143
	goto TTL;
TTL:;
	(void)(sputprop(VV[186],VV[9],Cnil));
	{object V293 = Cnil;
	VMR143(V293)}
	return Cnil;
}
/*	local entry for function progn 'compile5843	*/

static object LI144()

{	 VMB144 VMS144 VMV144
	goto TTL;
TTL:;
	{object V294 = Cnil;
	VMR144(V294)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-UNDERFLOW5863	*/

static void L145()
{register object *base=vs_base;
	register object *sup=base+VM145; VC145
	vs_reserve(VM145);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[189];
	base[1]= VV[5];
	base[2]= VV[190];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5879	*/

static object LI146()

{	 VMB146 VMS146 VMV146
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk311)();
	vs_top=sup;
	{object V295 = Cnil;
	VMR146(V295)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5896	*/

static object LI147()

{	 VMB147 VMS147 VMV147
	goto TTL;
TTL:;
	base[0]= VV[191];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V297 = Cnil;
	VMR147(V297)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5920	*/

static object LI148()

{	 VMB148 VMS148 VMV148
	goto TTL;
TTL:;
	(void)(sputprop(VV[189],VV[9],Cnil));
	{object V298 = Cnil;
	VMR148(V298)}
	return Cnil;
}
/*	local entry for function progn 'compile5932	*/

static object LI149()

{	 VMB149 VMS149 VMV149
	goto TTL;
TTL:;
	{object V299 = Cnil;
	VMR149(V299)}
	return Cnil;
}
/*	function definition for Defclass ABORT-FAILURE5952	*/

static void L150()
{register object *base=vs_base;
	register object *sup=base+VM150; VC150
	vs_reserve(VM150);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[192];
	base[1]= VV[5];
	base[2]= VV[193];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5968	*/

static object LI151()

{	 VMB151 VMS151 VMV151
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk312)();
	vs_top=sup;
	{object V300 = Cnil;
	VMR151(V300)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5985	*/

static object LI152()

{	 VMB152 VMS152 VMV152
	goto TTL;
TTL:;
	base[0]= VV[194];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V302 = Cnil;
	VMR152(V302)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6009	*/

static object LI153()

{	 VMB153 VMS153 VMV153
	goto TTL;
TTL:;
	(void)(sputprop(VV[192],VV[9],Cnil));
	{object V303 = Cnil;
	VMR153(V303)}
	return Cnil;
}
/*	local entry for function progn 'compile6025	*/

static object LI154()

{	 VMB154 VMS154 VMV154
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[195];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V304 = Cnil;
	VMR154(V304)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (ABORT-FAILURE T))	*/

static void L155()
{register object *base=vs_base;
	register object *sup=base+VM155; VC155
	vs_reserve(VM155);
	{object V305;
	register object V306;
	register object V307;
	register object V308;
	check_arg(4);
	V305=(base[0]);
	V306=(base[1]);
	V307=(base[2]);
	V308=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T1027;}
	if(((V306))==Cnil){
	goto T1030;}
	base[4]= (V306);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1034;}
	base[4]= structure_ref((V306),VV[35],0);
	base[5]= structure_ref((V306),VV[35],1);
	base[6]= structure_ref((V306),VV[35],2);
	base[7]= (V307);
	base[8]= (V308);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1034;
T1034:;
	if(!(type_of((V306))==t_fixnum)){
	goto T1044;}
	{object V311;
	if(type_of(V307)==t_structure){
	goto T1050;}
	goto T1048;
	goto T1050;
T1050:;
	base[4]= V307;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V313= vs_base[0];
	if(!((V313)==(VV[196]))){
	goto T1048;}
	V311= structure_ref((V307),VV[37],1);
	goto T1046;
	goto T1048;
T1048:;{object V314;
	V314= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V307);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V315= vs_base[0];
	if(!((V314)==(car(V315)))){
	goto T1055;}}
	V311= car(((V307))->cc.cc_turbo[12]);
	goto T1046;
	goto T1055;
T1055:;
	V311= Cnil;
	goto T1046;
T1046:;
	if(((V311))==Cnil){
	goto T1061;}
	base[4]= aset1((V311),fix((V306)),V307);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1061;
T1061:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1044;
T1044:;
	{register object V317;
	V317= V306;
	base[4]= (V317);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1064;}
	{object V318;
	object V319;
	register object V320;
	V318= structure_ref((V306),VV[39],0);
	V319= list(2,(V307),(V308));
	V320= structure_ref((V306),VV[39],1);
	if(((V320))==Cnil){
	goto T1072;}
	if((cdr((V320)))!=Cnil){
	goto T1072;}
	base[4]= (V319);
	base[5]= car((V320));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V318);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1072;
T1072:;
	base[4]= (V318);
	base[5]= (V319);
	{object V321;
	V321= (V320);
	 vs_top=base+6;
	 while(!endp(V321))
	 {vs_push(car(V321));V321=cdr(V321);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1064;
T1064:;
	base[4]= (V317);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1082;}
	base[4]= (V307);
	base[5]= (V308);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V306);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1082;
T1082:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V306;
	base[9]= VV[43];
	base[10]= VV[197];
	base[11]= VV[45];
	base[12]= VV[198];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1030;
T1030:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T1027;
T1027:;
	base[4]= VV[199];
	base[5]= V308;
	vs_top=(vs_base=base+4)+2;
	Lwrite_string();
	return;
	}
}
/*	local entry for function progn 'compile6226	*/

static object LI156()

{	 VMB156 VMS156 VMV156
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[200];
	base[4]= VV[201];
	V324= symbol_function(VV[313]);
	base[5]= listA(3,VV[51],V324,VV[202]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V325 = Cnil;
	VMR156(V325)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6234	*/

static object LI157()

{	 VMB157 VMS157 VMV157
	goto TTL;
TTL:;
	{object V326 = Cnil;
	VMR157(V326)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-ERROR6254	*/

static void L158()
{register object *base=vs_base;
	register object *sup=base+VM158; VC158
	vs_reserve(VM158);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[203];
	base[1]= VV[5];
	base[2]= VV[204];
	base[4]= VV[26];
	base[5]= symbol_function(VV[267]);
	base[6]= VV[18];
	base[7]= VV[205];
	base[8]= VV[20];
	base[9]= VV[206];
	base[10]= VV[22];
	base[11]= Cnil;
	base[12]= VV[23];
	base[13]= VV[207];
	base[14]= VV[208];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V327= vs_base[0];
	base[3]= make_cons(V327,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile6271	*/

static object LI159()

{	 VMB159 VMS159 VMV159
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk314)();
	vs_top=sup;
	{object V328 = Cnil;
	VMR159(V328)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6288	*/

static object LI160()

{	 VMB160 VMS160 VMV160
	goto TTL;
TTL:;
	base[0]= VV[209];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V330 = Cnil;
	VMR160(V330)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6312	*/

static object LI161()

{	 VMB161 VMS161 VMV161
	goto TTL;
TTL:;
	(void)(sputprop(VV[203],VV[9],Cnil));
	{object V331 = Cnil;
	VMR161(V331)}
	return Cnil;
}
/*	local entry for function progn 'compile6328	*/

static object LI162()

{	 VMB162 VMS162 VMV162
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[210];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V332 = Cnil;
	VMR162(V332)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-ERROR T))	*/

static void L163()
{register object *base=vs_base;
	register object *sup=base+VM163; VC163
	vs_reserve(VM163);
	{object V333;
	register object V334;
	register object V335;
	register object V336;
	check_arg(4);
	V333=(base[0]);
	V334=(base[1]);
	V335=(base[2]);
	V336=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T1140;}
	if(((V334))==Cnil){
	goto T1143;}
	base[4]= (V334);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1147;}
	base[4]= structure_ref((V334),VV[35],0);
	base[5]= structure_ref((V334),VV[35],1);
	base[6]= structure_ref((V334),VV[35],2);
	base[7]= (V335);
	base[8]= (V336);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1147;
T1147:;
	if(!(type_of((V334))==t_fixnum)){
	goto T1157;}
	{object V339;
	if(type_of(V335)==t_structure){
	goto T1163;}
	goto T1161;
	goto T1163;
T1163:;
	base[4]= V335;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V341= vs_base[0];
	if(!((V341)==(VV[211]))){
	goto T1161;}
	V339= structure_ref((V335),VV[37],1);
	goto T1159;
	goto T1161;
T1161:;{object V342;
	V342= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V335);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V343= vs_base[0];
	if(!((V342)==(car(V343)))){
	goto T1168;}}
	V339= car(((V335))->cc.cc_turbo[12]);
	goto T1159;
	goto T1168;
T1168:;
	V339= Cnil;
	goto T1159;
T1159:;
	if(((V339))==Cnil){
	goto T1174;}
	base[4]= aset1((V339),fix((V334)),V335);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1174;
T1174:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1157;
T1157:;
	{register object V345;
	V345= V334;
	base[4]= (V345);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1177;}
	{object V346;
	object V347;
	register object V348;
	V346= structure_ref((V334),VV[39],0);
	V347= list(2,(V335),(V336));
	V348= structure_ref((V334),VV[39],1);
	if(((V348))==Cnil){
	goto T1185;}
	if((cdr((V348)))!=Cnil){
	goto T1185;}
	base[4]= (V347);
	base[5]= car((V348));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V346);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1185;
T1185:;
	base[4]= (V346);
	base[5]= (V347);
	{object V349;
	V349= (V348);
	 vs_top=base+6;
	 while(!endp(V349))
	 {vs_push(car(V349));V349=cdr(V349);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1177;
T1177:;
	base[4]= (V345);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1195;}
	base[4]= (V335);
	base[5]= (V336);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V334);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1195;
T1195:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V334;
	base[9]= VV[43];
	base[10]= VV[212];
	base[11]= VV[45];
	base[12]= VV[213];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1143;
T1143:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T1140;
T1140:;
	{register object V351;
	V351= (V336);
	base[4]= V335;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1210;}
	base[4]= (V351);
	base[5]= VV[214];
	base[7]= V335;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T1210;
T1210:;
	if(((V334))==Cnil){
	goto T1219;}
	base[4]= (V334);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1223;}
	base[4]= structure_ref((V334),VV[35],0);
	base[5]= structure_ref((V334),VV[35],1);
	base[6]= structure_ref((V334),VV[35],2);
	base[7]= (V335);
	base[8]= (V351);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1223;
T1223:;
	if(!(type_of((V334))==t_fixnum)){
	goto T1233;}
	{object V353;
	if(type_of(V335)==t_structure){
	goto T1239;}
	goto T1237;
	goto T1239;
T1239:;
	base[4]= V335;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V355= vs_base[0];
	if(!((V355)==(VV[215]))){
	goto T1237;}
	V353= structure_ref((V335),VV[37],1);
	goto T1235;
	goto T1237;
T1237:;{object V356;
	V356= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V335);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V357= vs_base[0];
	if(!((V356)==(car(V357)))){
	goto T1244;}}
	V353= car(((V335))->cc.cc_turbo[12]);
	goto T1235;
	goto T1244;
T1244:;
	V353= Cnil;
	goto T1235;
T1235:;
	if(((V353))==Cnil){
	goto T1250;}
	base[4]= aset1((V353),fix((V334)),V335);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1250;
T1250:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1233;
T1233:;
	{register object V359;
	V359= V334;
	base[4]= (V359);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1253;}
	{object V360;
	object V361;
	register object V362;
	V360= structure_ref((V334),VV[39],0);
	V361= list(2,(V335),(V351));
	V362= structure_ref((V334),VV[39],1);
	if(((V362))==Cnil){
	goto T1261;}
	if((cdr((V362)))!=Cnil){
	goto T1261;}
	base[4]= (V361);
	base[5]= car((V362));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V360);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1261;
T1261:;
	base[4]= (V360);
	base[5]= (V361);
	{object V363;
	V363= (V362);
	 vs_top=base+6;
	 while(!endp(V363))
	 {vs_push(car(V363));V363=cdr(V363);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1253;
T1253:;
	base[4]= (V359);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1271;}
	base[4]= (V335);
	base[5]= (V351);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V334);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1271;
T1271:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V334;
	base[9]= VV[43];
	base[10]= VV[216];
	base[11]= VV[45];
	base[12]= VV[217];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1219;
T1219:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;}
	}
}
/*	local entry for function progn 'compile6641	*/

static object LI164()

{	 VMB164 VMS164 VMV164
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[218];
	base[4]= VV[219];
	V364= symbol_function(VV[316]);
	base[5]= listA(3,VV[51],V364,VV[220]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V365 = Cnil;
	VMR164(V365)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6649	*/

static object LI165()

{	 VMB165 VMS165 VMV165
	goto TTL;
TTL:;
	{object V366 = Cnil;
	VMR165(V366)}
	return Cnil;
}
/*	local entry for function INTERNAL-SIMPLE-ERROR-PRINTER	*/

static object LI166(V369,V370)

register object V369;object V370;
{	 VMB166 VMS166 VMV166
	goto TTL;
TTL:;
	base[0]= (V369);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1296;}
	base[0]= (V370);
	base[1]= VV[221];
	base[3]= (V369);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T1296;
T1296:;
	base[0]= (V370);
	base[2]= (V369);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V371;
	base[2]= (V369);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V371= vs_base[0];
	 vs_top=base+2;
	 while(!endp(V371))
	 {vs_push(car(V371));V371=cdr(V371);}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V372 = vs_base[0];
	VMR166(V372)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-ERROR6681	*/

static void L167()
{register object *base=vs_base;
	register object *sup=base+VM167; VC167
	vs_reserve(VM167);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[222];
	base[1]= VV[5];
	base[2]= VV[223];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile6697	*/

static object LI168()

{	 VMB168 VMS168 VMV168
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk317)();
	vs_top=sup;
	{object V373 = Cnil;
	VMR168(V373)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6714	*/

static object LI169()

{	 VMB169 VMS169 VMV169
	goto TTL;
TTL:;
	base[0]= VV[224];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V375 = Cnil;
	VMR169(V375)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6738	*/

static object LI170()

{	 VMB170 VMS170 VMV170
	goto TTL;
TTL:;
	(void)(sputprop(VV[222],VV[9],Cnil));
	{object V376 = Cnil;
	VMR170(V376)}
	return Cnil;
}
/*	local entry for function progn 'compile6754	*/

static object LI171()

{	 VMB171 VMS171 VMV171
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[225];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V377 = Cnil;
	VMR171(V377)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-ERROR T))	*/

static void L172()
{register object *base=vs_base;
	register object *sup=base+VM172; VC172
	vs_reserve(VM172);
	{object V378;
	register object V379;
	register object V380;
	register object V381;
	check_arg(4);
	V378=(base[0]);
	V379=(base[1]);
	V380=(base[2]);
	V381=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T1328;}
	if(((V379))==Cnil){
	goto T1331;}
	base[4]= (V379);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1335;}
	base[4]= structure_ref((V379),VV[35],0);
	base[5]= structure_ref((V379),VV[35],1);
	base[6]= structure_ref((V379),VV[35],2);
	base[7]= (V380);
	base[8]= (V381);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1335;
T1335:;
	if(!(type_of((V379))==t_fixnum)){
	goto T1345;}
	{object V384;
	if(type_of(V380)==t_structure){
	goto T1351;}
	goto T1349;
	goto T1351;
T1351:;
	base[4]= V380;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V386= vs_base[0];
	if(!((V386)==(VV[226]))){
	goto T1349;}
	V384= structure_ref((V380),VV[37],1);
	goto T1347;
	goto T1349;
T1349:;{object V387;
	V387= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V380);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V388= vs_base[0];
	if(!((V387)==(car(V388)))){
	goto T1356;}}
	V384= car(((V380))->cc.cc_turbo[12]);
	goto T1347;
	goto T1356;
T1356:;
	V384= Cnil;
	goto T1347;
T1347:;
	if(((V384))==Cnil){
	goto T1362;}
	base[4]= aset1((V384),fix((V379)),V380);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1362;
T1362:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1345;
T1345:;
	{register object V390;
	V390= V379;
	base[4]= (V390);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1365;}
	{object V391;
	object V392;
	register object V393;
	V391= structure_ref((V379),VV[39],0);
	V392= list(2,(V380),(V381));
	V393= structure_ref((V379),VV[39],1);
	if(((V393))==Cnil){
	goto T1373;}
	if((cdr((V393)))!=Cnil){
	goto T1373;}
	base[4]= (V392);
	base[5]= car((V393));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V391);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1373;
T1373:;
	base[4]= (V391);
	base[5]= (V392);
	{object V394;
	V394= (V393);
	 vs_top=base+6;
	 while(!endp(V394))
	 {vs_push(car(V394));V394=cdr(V394);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1365;
T1365:;
	base[4]= (V390);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1383;}
	base[4]= (V380);
	base[5]= (V381);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V379);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1383;
T1383:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V379;
	base[9]= VV[43];
	base[10]= VV[227];
	base[11]= VV[45];
	base[12]= VV[228];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1331;
T1331:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk273)();
	return;
	goto T1328;
T1328:;
	base[4]= (*(LnkLI318))((V380),(V381));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile6947	*/

static object LI173()

{	 VMB173 VMS173 VMV173
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[229];
	base[4]= VV[230];
	V395= symbol_function(VV[319]);
	base[5]= listA(3,VV[51],V395,VV[231]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V396 = Cnil;
	VMR173(V396)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6955	*/

static object LI174()

{	 VMB174 VMS174 VMV174
	goto TTL;
TTL:;
	{object V397 = Cnil;
	VMR174(V397)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-TYPE-ERROR6975	*/

static void L175()
{register object *base=vs_base;
	register object *sup=base+VM175; VC175
	vs_reserve(VM175);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[232];
	base[1]= VV[5];
	base[2]= VV[233];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile6991	*/

static object LI176()

{	 VMB176 VMS176 VMV176
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk320)();
	vs_top=sup;
	{object V398 = Cnil;
	VMR176(V398)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7008	*/

static object LI177()

{	 VMB177 VMS177 VMV177
	goto TTL;
TTL:;
	base[0]= VV[234];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V400 = Cnil;
	VMR177(V400)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7032	*/

static object LI178()

{	 VMB178 VMS178 VMV178
	goto TTL;
TTL:;
	(void)(sputprop(VV[232],VV[9],Cnil));
	{object V401 = Cnil;
	VMR178(V401)}
	return Cnil;
}
/*	local entry for function progn 'compile7044	*/

static object LI179()

{	 VMB179 VMS179 VMV179
	goto TTL;
TTL:;
	{object V402 = Cnil;
	VMR179(V402)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-PACKAGE-ERROR7064	*/

static void L180()
{register object *base=vs_base;
	register object *sup=base+VM180; VC180
	vs_reserve(VM180);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[235];
	base[1]= VV[5];
	base[2]= VV[236];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7080	*/

static object LI181()

{	 VMB181 VMS181 VMV181
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk321)();
	vs_top=sup;
	{object V403 = Cnil;
	VMR181(V403)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7097	*/

static object LI182()

{	 VMB182 VMS182 VMV182
	goto TTL;
TTL:;
	base[0]= VV[237];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V405 = Cnil;
	VMR182(V405)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7121	*/

static object LI183()

{	 VMB183 VMS183 VMV183
	goto TTL;
TTL:;
	(void)(sputprop(VV[235],VV[9],Cnil));
	{object V406 = Cnil;
	VMR183(V406)}
	return Cnil;
}
/*	local entry for function progn 'compile7133	*/

static object LI184()

{	 VMB184 VMS184 VMV184
	goto TTL;
TTL:;
	{object V407 = Cnil;
	VMR184(V407)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7153	*/

static void L185()
{register object *base=vs_base;
	register object *sup=base+VM185; VC185
	vs_reserve(VM185);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[238];
	base[1]= VV[5];
	base[2]= VV[239];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7169	*/

static object LI186()

{	 VMB186 VMS186 VMV186
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk322)();
	vs_top=sup;
	{object V408 = Cnil;
	VMR186(V408)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7186	*/

static object LI187()

{	 VMB187 VMS187 VMV187
	goto TTL;
TTL:;
	base[0]= VV[240];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V410 = Cnil;
	VMR187(V410)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7210	*/

static object LI188()

{	 VMB188 VMS188 VMV188
	goto TTL;
TTL:;
	(void)(sputprop(VV[238],VV[9],Cnil));
	{object V411 = Cnil;
	VMR188(V411)}
	return Cnil;
}
/*	local entry for function progn 'compile7222	*/

static object LI189()

{	 VMB189 VMS189 VMV189
	goto TTL;
TTL:;
	{object V412 = Cnil;
	VMR189(V412)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-CONTROL-ERROR7242	*/

static void L190()
{register object *base=vs_base;
	register object *sup=base+VM190; VC190
	vs_reserve(VM190);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[241];
	base[1]= VV[5];
	base[2]= VV[242];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7258	*/

static object LI191()

{	 VMB191 VMS191 VMV191
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk323)();
	vs_top=sup;
	{object V413 = Cnil;
	VMR191(V413)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7275	*/

static object LI192()

{	 VMB192 VMS192 VMV192
	goto TTL;
TTL:;
	base[0]= VV[243];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V415 = Cnil;
	VMR192(V415)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7299	*/

static object LI193()

{	 VMB193 VMS193 VMV193
	goto TTL;
TTL:;
	(void)(sputprop(VV[241],VV[9],Cnil));
	{object V416 = Cnil;
	VMR193(V416)}
	return Cnil;
}
/*	local entry for function progn 'compile7311	*/

static object LI194()

{	 VMB194 VMS194 VMV194
	goto TTL;
TTL:;
	{object V417 = Cnil;
	VMR194(V417)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNBOUND-VARIABLE7331	*/

static void L195()
{register object *base=vs_base;
	register object *sup=base+VM195; VC195
	vs_reserve(VM195);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[244];
	base[1]= VV[5];
	base[2]= VV[245];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7347	*/

static object LI196()

{	 VMB196 VMS196 VMV196
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	{object V418 = Cnil;
	VMR196(V418)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7364	*/

static object LI197()

{	 VMB197 VMS197 VMV197
	goto TTL;
TTL:;
	base[0]= VV[246];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V420 = Cnil;
	VMR197(V420)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7388	*/

static object LI198()

{	 VMB198 VMS198 VMV198
	goto TTL;
TTL:;
	(void)(sputprop(VV[244],VV[9],Cnil));
	{object V421 = Cnil;
	VMR198(V421)}
	return Cnil;
}
/*	local entry for function progn 'compile7400	*/

static object LI199()

{	 VMB199 VMS199 VMV199
	goto TTL;
TTL:;
	{object V422 = Cnil;
	VMR199(V422)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNDEFINED-FUNCTION7420	*/

static void L200()
{register object *base=vs_base;
	register object *sup=base+VM200; VC200
	vs_reserve(VM200);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[247];
	base[1]= VV[5];
	base[2]= VV[248];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7436	*/

static object LI201()

{	 VMB201 VMS201 VMV201
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk325)();
	vs_top=sup;
	{object V423 = Cnil;
	VMR201(V423)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7453	*/

static object LI202()

{	 VMB202 VMS202 VMV202
	goto TTL;
TTL:;
	base[0]= VV[249];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V425 = Cnil;
	VMR202(V425)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7477	*/

static object LI203()

{	 VMB203 VMS203 VMV203
	goto TTL;
TTL:;
	(void)(sputprop(VV[247],VV[9],Cnil));
	{object V426 = Cnil;
	VMR203(V426)}
	return Cnil;
}
/*	local entry for function progn 'compile7489	*/

static object LI204()

{	 VMB204 VMS204 VMV204
	goto TTL;
TTL:;
	{object V427 = Cnil;
	VMR204(V427)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-END-OF-FILE7509	*/

static void L205()
{register object *base=vs_base;
	register object *sup=base+VM205; VC205
	vs_reserve(VM205);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[250];
	base[1]= VV[5];
	base[2]= VV[251];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7525	*/

static object LI206()

{	 VMB206 VMS206 VMV206
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk326)();
	vs_top=sup;
	{object V428 = Cnil;
	VMR206(V428)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7542	*/

static object LI207()

{	 VMB207 VMS207 VMV207
	goto TTL;
TTL:;
	base[0]= VV[252];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V430 = Cnil;
	VMR207(V430)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7566	*/

static object LI208()

{	 VMB208 VMS208 VMV208
	goto TTL;
TTL:;
	(void)(sputprop(VV[250],VV[9],Cnil));
	{object V431 = Cnil;
	VMR208(V431)}
	return Cnil;
}
/*	local entry for function progn 'compile7578	*/

static object LI209()

{	 VMB209 VMS209 VMV209
	goto TTL;
TTL:;
	{object V432 = Cnil;
	VMR209(V432)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-FILE-ERROR7598	*/

static void L210()
{register object *base=vs_base;
	register object *sup=base+VM210; VC210
	vs_reserve(VM210);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[253];
	base[1]= VV[5];
	base[2]= VV[254];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7614	*/

static object LI211()

{	 VMB211 VMS211 VMV211
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	{object V433 = Cnil;
	VMR211(V433)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7631	*/

static object LI212()

{	 VMB212 VMS212 VMV212
	goto TTL;
TTL:;
	base[0]= VV[255];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V435 = Cnil;
	VMR212(V435)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7655	*/

static object LI213()

{	 VMB213 VMS213 VMV213
	goto TTL;
TTL:;
	(void)(sputprop(VV[253],VV[9],Cnil));
	{object V436 = Cnil;
	VMR213(V436)}
	return Cnil;
}
/*	local entry for function progn 'compile7667	*/

static object LI214()

{	 VMB214 VMS214 VMV214
	goto TTL;
TTL:;
	{object V437 = Cnil;
	VMR214(V437)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-STREAM-ERROR7687	*/

static void L215()
{register object *base=vs_base;
	register object *sup=base+VM215; VC215
	vs_reserve(VM215);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[256];
	base[1]= VV[5];
	base[2]= VV[257];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7703	*/

static object LI216()

{	 VMB216 VMS216 VMV216
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk328)();
	vs_top=sup;
	{object V438 = Cnil;
	VMR216(V438)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7720	*/

static object LI217()

{	 VMB217 VMS217 VMV217
	goto TTL;
TTL:;
	base[0]= VV[258];
	base[1]= symbol_value(VV[8]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[8],vs_base[0]);
	{object V440 = Cnil;
	VMR217(V440)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7744	*/

static object LI218()

{	 VMB218 VMS218 VMV218
	goto TTL;
TTL:;
	(void)(sputprop(VV[256],VV[9],Cnil));
	{object V441 = Cnil;
	VMR218(V441)}
	return Cnil;
}
/*	local entry for function progn 'compile7756	*/

static object LI219()

{	 VMB219 VMS219 VMV219
	goto TTL;
TTL:;
	{object V442 = Cnil;
	VMR219(V442)}
	return Cnil;
}
/*	local entry for function progn 'compile7772	*/

static object LI220()

{	 VMB220 VMS220 VMV220
	goto TTL;
TTL:;
	base[0]= VV[259];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	{object V443 = Cnil;
	VMR220(V443)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7784	*/

static object LI221()

{	 VMB221 VMS221 VMV221
	goto TTL;
TTL:;
	base[0]= VV[259];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1528;}
	goto T1527;
	goto T1528;
T1528:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk330)();
	vs_top=sup;
	setq(VV[259],vs_base[0]);
	goto T1527;
T1527:;
	{object V444 = Cnil;
	VMR221(V444)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7797	*/

static object LI222()

{	 VMB222 VMS222 VMV222
	goto TTL;
TTL:;
	{object V445 = Cnil;
	VMR222(V445)}
	return Cnil;
}
/*	local entry for function SIMPLE-CONDITION-CLASS-P	*/

static object LI223(V447)

register object V447;
{	 VMB223 VMS223 VMV223
	goto TTL;
TTL:;
	if(!(type_of((V447))==t_symbol)){
	goto T1534;}
	base[0]= (V447);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk330)();
	vs_top=sup;
	V447= vs_base[0];
	goto T1534;
T1534:;
	base[0]= (V447);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk331)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1539;}
	{object V448 = Cnil;
	VMR223(V448)}
	goto T1539;
T1539:;{object V450;
	V450= symbol_value(VV[259]);
	base[0]= (V447);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk332)(Lclptr332);
	vs_top=sup;
	V451= vs_base[0];
	{register object x= V450,V449= V451;
	while(!endp(V449))
	if(eql(x,V449->c.c_car)){
	{object V452 = V449;
	VMR223(V452)}
	}else V449=V449->c.c_cdr;
	{object V453 = Cnil;
	VMR223(V453)}}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT332(ptr) object *ptr;{ call_or_link_closure(VV[332],(void **)(void *)&Lnk332,(void **)(void *)&Lclptr332);} /* CLASS-PRECEDENCE-LIST */
static void LnkT331(){ call_or_link(VV[331],(void **)(void *)&Lnk331);} /* TYPEP */
static void LnkT330(){ call_or_link(VV[330],(void **)(void *)&Lnk330);} /* FIND-CLASS */
static void LnkT329(){ call_or_link(VV[329],(void **)(void *)&Lnk329);} /* *MAKE-SPECIAL */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* Defclass INTERNAL-SIMPLE-STREAM-ERROR7687 */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* Defclass INTERNAL-SIMPLE-FILE-ERROR7598 */
static void LnkT326(){ call_or_link(VV[326],(void **)(void *)&Lnk326);} /* Defclass INTERNAL-END-OF-FILE7509 */
static void LnkT325(){ call_or_link(VV[325],(void **)(void *)&Lnk325);} /* Defclass INTERNAL-UNDEFINED-FUNCTION7420 */
static void LnkT324(){ call_or_link(VV[324],(void **)(void *)&Lnk324);} /* Defclass INTERNAL-UNBOUND-VARIABLE7331 */
static void LnkT323(){ call_or_link(VV[323],(void **)(void *)&Lnk323);} /* Defclass INTERNAL-SIMPLE-CONTROL-ERROR7242 */
static void LnkT322(){ call_or_link(VV[322],(void **)(void *)&Lnk322);} /* Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7153 */
static void LnkT321(){ call_or_link(VV[321],(void **)(void *)&Lnk321);} /* Defclass INTERNAL-PACKAGE-ERROR7064 */
static void LnkT320(){ call_or_link(VV[320],(void **)(void *)&Lnk320);} /* Defclass INTERNAL-TYPE-ERROR6975 */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[318],(void **)(void *)&LnkLI318,2,first,ap);va_end(ap);return V1;} /* INTERNAL-SIMPLE-ERROR-PRINTER */
static void LnkT317(){ call_or_link(VV[317],(void **)(void *)&Lnk317);} /* Defclass INTERNAL-SIMPLE-ERROR6681 */
static void LnkT315(ptr) object *ptr;{ call_or_link_closure(VV[315],(void **)(void *)&Lnk315,(void **)(void *)&Lclptr315);} /* INTERNAL-ERROR-FUNCTION-NAME */
static void LnkT314(){ call_or_link(VV[314],(void **)(void *)&Lnk314);} /* Defclass INTERNAL-ERROR6254 */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* Defclass ABORT-FAILURE5952 */
static void LnkT311(){ call_or_link(VV[311],(void **)(void *)&Lnk311);} /* Defclass FLOATING-POINT-UNDERFLOW5863 */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* Defclass FLOATING-POINT-OVERFLOW5774 */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* Defclass DIVISION-BY-ZERO5685 */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* Defclass ARITHMETIC-ERROR5595 */
static void LnkT306(){ call_or_link(VV[306],(void **)(void *)&Lnk306);} /* Defclass UNDEFINED-FUNCTION5297 */
static void LnkT304(ptr) object *ptr;{ call_or_link_closure(VV[304],(void **)(void *)&Lnk304,(void **)(void *)&Lclptr304);} /* CELL-ERROR-NAME */
static void LnkT303(){ call_or_link(VV[303],(void **)(void *)&Lnk303);} /* Defclass UNBOUND-VARIABLE4999 */
static void LnkT302(){ call_or_link(VV[302],(void **)(void *)&Lnk302);} /* Defclass CELL-ERROR4909 */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* PACKAGE-ERROR-MESSAGE */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* PACKAGE-ERROR-PACKAGE */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* Defclass PACKAGE-ERROR4609 */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* Defclass FILE-ERROR4519 */
static void LnkT295(ptr) object *ptr;{ call_or_link_closure(VV[295],(void **)(void *)&Lnk295,(void **)(void *)&Lclptr295);} /* STREAM-ERROR-STREAM */
static void LnkT294(){ call_or_link(VV[294],(void **)(void *)&Lnk294);} /* Defclass END-OF-FILE4221 */
static void LnkT293(){ call_or_link(VV[293],(void **)(void *)&Lnk293);} /* Defclass STREAM-ERROR4131 */
static void LnkT292(){ call_or_link(VV[292],(void **)(void *)&Lnk292);} /* Defclass CONTROL-ERROR4042 */
static void LnkT291(){ call_or_link(VV[291],(void **)(void *)&Lnk291);} /* Defclass PROGRAM-ERROR3953 */
static void LnkT289(ptr) object *ptr;{ call_or_link_closure(VV[289],(void **)(void *)&Lnk289,(void **)(void *)&Lclptr289);} /* CASE-FAILURE-POSSIBILITIES */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* CASE-FAILURE-NAME */
static void LnkT287(){ call_or_link(VV[287],(void **)(void *)&Lnk287);} /* Defclass CASE-FAILURE3653 */
static void LnkT286(){ call_or_link(VV[286],(void **)(void *)&Lnk286);} /* Defclass SIMPLE-TYPE-ERROR3564 */
static void LnkT284(ptr) object *ptr;{ call_or_link_closure(VV[284],(void **)(void *)&Lnk284,(void **)(void *)&Lclptr284);} /* TYPE-ERROR-EXPECTED-TYPE */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* TYPE-ERROR-DATUM */
static void LnkT282(){ call_or_link(VV[282],(void **)(void *)&Lnk282);} /* Defclass TYPE-ERROR3264 */
static void LnkT281(){ call_or_link(VV[281],(void **)(void *)&Lnk281);} /* Defclass STORAGE-EXHAUSTED3175 */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* Defclass STACK-OVERFLOW3086 */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* Defclass STORAGE-CONDITION2997 */
static void LnkT278(){ call_or_link(VV[278],(void **)(void *)&Lnk278);} /* Defclass SIMPLE-ERROR2908 */
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* Defclass SIMPLE-WARNING2819 */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* LOAD-DEFMETHOD */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[274],(void **)(void *)&LnkLI274,2,first,ap);va_end(ap);return V1;} /* SIMPLE-CONDITION-PRINTER */
static void LnkT273(){ call_or_link(VV[273],(void **)(void *)&Lnk273);} /* ERROR */
static void LnkT13(){ call_or_link(VV[13],(void **)(void *)&Lnk13);} /* ERROR */
static void LnkT272(){ call_or_link(VV[272],(void **)(void *)&Lnk272);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT271(){ call_or_link(VV[271],(void **)(void *)&Lnk271);} /* STRUCTURE-DEF */
static void LnkT270(){ call_or_link(VV[270],(void **)(void *)&Lnk270);} /* STRUCTURE-SUBTYPE-P */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* PROCLAIM-DEFGENERIC */
static void LnkT268(){ call_or_link(VV[268],(void **)(void *)&Lnk268);} /* Defclass SIMPLE-CONDITION2523 */
static void LnkT266(ptr) object *ptr;{ call_or_link_closure(VV[266],(void **)(void *)&Lnk266,(void **)(void *)&Lclptr266);} /* SIMPLE-CONDITION-FORMAT-ARGUMENTS */
static void LnkT265(ptr) object *ptr;{ call_or_link_closure(VV[265],(void **)(void *)&Lnk265,(void **)(void *)&Lclptr265);} /* SIMPLE-CONDITION-FORMAT-STRING */
static void LnkT264(){ call_or_link(VV[264],(void **)(void *)&Lnk264);} /* Defclass ERROR2426 */
static void LnkT263(){ call_or_link(VV[263],(void **)(void *)&Lnk263);} /* Defclass SERIOUS-CONDITION2337 */
static void LnkT262(){ call_or_link(VV[262],(void **)(void *)&Lnk262);} /* Defclass WARNING2248 */
static void LnkT260(){ call_or_link(VV[260],(void **)(void *)&Lnk260);} /* REMOVE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

