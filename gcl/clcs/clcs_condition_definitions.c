
#include "cmpinclude.h"
#include "clcs_condition_definitions.h"
void init_clcs_condition_definitions(){do_init(VV);}
/*	local entry for function progn 'compile1789	*/

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
/*	local entry for function progn 'compile1789	*/

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
/*	function definition for Defclass WARNING1791	*/

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
/*	local entry for function progn 'compile1791	*/

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
/*	local entry for function progn 'compile1792	*/

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
/*	local entry for function progn 'compile1792	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	(void)(sputprop(VV[4],VV[9],Cnil));
	{object V11 = Cnil;
	VMR6(V11)}
	return Cnil;
}
/*	local entry for function progn 'compile1792	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	function definition for Defclass SERIOUS-CONDITION1792	*/

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
/*	local entry for function progn 'compile1792	*/

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
/*	local entry for function progn 'compile1793	*/

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
/*	local entry for function progn 'compile1793	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	(void)(sputprop(VV[10],VV[9],Cnil));
	{object V16 = Cnil;
	VMR11(V16)}
	return Cnil;
}
/*	local entry for function progn 'compile1793	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V17 = Cnil;
	VMR12(V17)}
	return Cnil;
}
/*	function definition for Defclass ERROR1793	*/

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
/*	local entry for function progn 'compile1793	*/

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
/*	local entry for function progn 'compile1794	*/

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
/*	local entry for function progn 'compile1794	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	(void)(sputprop(VV[13],VV[9],Cnil));
	{object V21 = Cnil;
	VMR16(V21)}
	return Cnil;
}
/*	local entry for function progn 'compile1794	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V22 = Cnil;
	VMR17(V22)}
	return Cnil;
}
/*	function definition for SIMPLE-CONDITION-PRINTER	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V23;
	object V24;
	check_arg(2);
	V23=(base[0]);
	V24=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V24);
	base[4]= (V23);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V25;
	base[4]= (V23);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V25= vs_base[0];
	 vs_top=base+4;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+2;}
	Lformat();
	return;
	}
}
/*	function definition for Defclass SIMPLE-CONDITION1794	*/

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
	V26= listA(9,VV[18],VV[19],VV[20],VV[21],VV[22],Cnil,VV[23],VV[24],VV[25]);
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
	V27= vs_base[0];
	base[3]= list(2,/* INLINE-ARGS */V26,V27);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1796	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk268)();
	vs_top=sup;
	{object V28 = Cnil;
	VMR20(V28)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1797	*/

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
	{object V30 = Cnil;
	VMR21(V30)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1797	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	(void)(sputprop(VV[16],VV[9],Cnil));
	{object V31 = Cnil;
	VMR22(V31)}
	return Cnil;
}
/*	local entry for function progn 'compile1797	*/

static object LI23()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[33];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V32 = Cnil;
	VMR23(V32)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (SIMPLE-CONDITION T))	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V33;
	register object V34;
	register object V35;
	register object V36;
	check_arg(4);
	V33=(base[0]);
	V34=(base[1]);
	V35=(base[2]);
	V36=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T107;}
	if(((V34))==Cnil){
	goto T110;}
	base[4]= (V34);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T114;}
	base[4]= structure_ref((V34),VV[35],0);
	base[5]= structure_ref((V34),VV[35],1);
	base[6]= structure_ref((V34),VV[35],2);
	base[7]= (V35);
	base[8]= (V36);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T114;
T114:;
	if(!(type_of((V34))==t_fixnum)){
	goto T124;}
	{object V39;
	if(type_of(V35)==t_structure){
	goto T130;}
	goto T128;
	goto T130;
T130:;
	base[4]= V35;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V41= vs_base[0];
	if(!((V41)==(VV[36]))){
	goto T128;}
	V39= structure_ref((V35),VV[37],1);
	goto T126;
	goto T128;
T128:;{object V42;
	V42= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V35);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V43= vs_base[0];
	if(!((V42)==(car(V43)))){
	goto T135;}}
	V39= car(((V35))->cc.cc_turbo[12]);
	goto T126;
	goto T135;
T135:;
	V39= Cnil;
	goto T126;
T126:;
	if(((V39))==Cnil){
	goto T141;}
	base[4]= aset1((V39),fix((V34)),V35);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T141;
T141:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T124;
T124:;
	{register object V45;
	V45= V34;
	base[4]= (V45);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T144;}
	{object V46;
	object V47;
	register object V48;
	V46= structure_ref((V34),VV[39],0);
	V47= list(2,(V35),(V36));
	V48= structure_ref((V34),VV[39],1);
	if(((V48))==Cnil){
	goto T152;}
	if((cdr((V48)))!=Cnil){
	goto T152;}
	base[4]= (V47);
	base[5]= car((V48));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V46);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T152;
T152:;
	base[4]= (V46);
	base[5]= (V47);
	{object V49;
	V49= (V48);
	 vs_top=base+6;
	 while(!endp(V49))
	 {vs_push(car(V49));V49=cdr(V49);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T144;
T144:;
	base[4]= (V45);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T162;}
	base[4]= (V35);
	base[5]= (V36);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V34);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
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
	base[8]= V34;
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
	Lerror();
	return;
	goto T107;
T107:;
	base[4]= (V35);
	base[5]= (V36);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk273)();
	return;
	}
}
/*	local entry for function progn 'compile1814	*/

static object LI25()

{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[49];
	base[4]= VV[50];
	V50= symbol_function(VV[274]);
	base[5]= listA(3,VV[51],V50,VV[52]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V51 = Cnil;
	VMR25(V51)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1814	*/

static object LI26()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V52 = Cnil;
	VMR26(V52)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-WARNING1814	*/

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
/*	local entry for function progn 'compile1814	*/

static object LI28()

{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V53 = Cnil;
	VMR28(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1815	*/

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
	{object V55 = Cnil;
	VMR29(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1815	*/

static object LI30()

{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	(void)(sputprop(VV[53],VV[9],Cnil));
	{object V56 = Cnil;
	VMR30(V56)}
	return Cnil;
}
/*	local entry for function progn 'compile1815	*/

static object LI31()

{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V57 = Cnil;
	VMR31(V57)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-ERROR1815	*/

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
/*	local entry for function progn 'compile1815	*/

static object LI33()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk277)();
	vs_top=sup;
	{object V58 = Cnil;
	VMR33(V58)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1816	*/

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
	{object V60 = Cnil;
	VMR34(V60)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1816	*/

static object LI35()

{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	(void)(sputprop(VV[56],VV[9],Cnil));
	{object V61 = Cnil;
	VMR35(V61)}
	return Cnil;
}
/*	local entry for function progn 'compile1816	*/

static object LI36()

{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V62 = Cnil;
	VMR36(V62)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-CONDITION1816	*/

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
/*	local entry for function progn 'compile1816	*/

static object LI38()

{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk278)();
	vs_top=sup;
	{object V63 = Cnil;
	VMR38(V63)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1817	*/

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
	{object V65 = Cnil;
	VMR39(V65)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1817	*/

static object LI40()

{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	(void)(sputprop(VV[59],VV[9],Cnil));
	{object V66 = Cnil;
	VMR40(V66)}
	return Cnil;
}
/*	local entry for function progn 'compile1817	*/

static object LI41()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V67 = Cnil;
	VMR41(V67)}
	return Cnil;
}
/*	function definition for Defclass STACK-OVERFLOW1817	*/

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
/*	local entry for function progn 'compile1817	*/

static object LI43()

{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V68 = Cnil;
	VMR43(V68)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1818	*/

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
	{object V70 = Cnil;
	VMR44(V70)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1818	*/

static object LI45()

{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	(void)(sputprop(VV[62],VV[9],Cnil));
	{object V71 = Cnil;
	VMR45(V71)}
	return Cnil;
}
/*	local entry for function progn 'compile1818	*/

static object LI46()

{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V72 = Cnil;
	VMR46(V72)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-EXHAUSTED1818	*/

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
/*	local entry for function progn 'compile1818	*/

static object LI48()

{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk280)();
	vs_top=sup;
	{object V73 = Cnil;
	VMR48(V73)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1819	*/

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
	{object V75 = Cnil;
	VMR49(V75)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1819	*/

static object LI50()

{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)(sputprop(VV[65],VV[9],Cnil));
	{object V76 = Cnil;
	VMR50(V76)}
	return Cnil;
}
/*	local entry for function progn 'compile1819	*/

static object LI51()

{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V77 = Cnil;
	VMR51(V77)}
	return Cnil;
}
/*	function definition for Defclass TYPE-ERROR1819	*/

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
	V78= listA(9,VV[18],VV[70],VV[20],VV[71],VV[22],Cnil,VV[23],VV[72],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V78,listA(9,VV[18],VV[73],VV[20],VV[74],VV[22],Cnil,VV[23],VV[75],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1821	*/

static object LI53()

{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V79 = Cnil;
	VMR53(V79)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1822	*/

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
	{object V81 = Cnil;
	VMR54(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1822	*/

static object LI55()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	(void)(sputprop(VV[68],VV[9],Cnil));
	{object V82 = Cnil;
	VMR55(V82)}
	return Cnil;
}
/*	local entry for function progn 'compile1822	*/

static object LI56()

{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[77];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V83 = Cnil;
	VMR56(V83)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (TYPE-ERROR T))	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_reserve(VM57);
	{object V84;
	register object V85;
	register object V86;
	register object V87;
	check_arg(4);
	V84=(base[0]);
	V85=(base[1]);
	V86=(base[2]);
	V87=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T273;}
	if(((V85))==Cnil){
	goto T276;}
	base[4]= (V85);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T280;}
	base[4]= structure_ref((V85),VV[35],0);
	base[5]= structure_ref((V85),VV[35],1);
	base[6]= structure_ref((V85),VV[35],2);
	base[7]= (V86);
	base[8]= (V87);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T280;
T280:;
	if(!(type_of((V85))==t_fixnum)){
	goto T290;}
	{object V90;
	if(type_of(V86)==t_structure){
	goto T296;}
	goto T294;
	goto T296;
T296:;
	base[4]= V86;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V92= vs_base[0];
	if(!((V92)==(VV[78]))){
	goto T294;}
	V90= structure_ref((V86),VV[37],1);
	goto T292;
	goto T294;
T294:;{object V93;
	V93= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V86);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V94= vs_base[0];
	if(!((V93)==(car(V94)))){
	goto T301;}}
	V90= car(((V86))->cc.cc_turbo[12]);
	goto T292;
	goto T301;
T301:;
	V90= Cnil;
	goto T292;
T292:;
	if(((V90))==Cnil){
	goto T307;}
	base[4]= aset1((V90),fix((V85)),V86);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T307;
T307:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T290;
T290:;
	{register object V96;
	V96= V85;
	base[4]= (V96);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T310;}
	{object V97;
	object V98;
	register object V99;
	V97= structure_ref((V85),VV[39],0);
	V98= list(2,(V86),(V87));
	V99= structure_ref((V85),VV[39],1);
	if(((V99))==Cnil){
	goto T318;}
	if((cdr((V99)))!=Cnil){
	goto T318;}
	base[4]= (V98);
	base[5]= car((V99));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V97);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T318;
T318:;
	base[4]= (V97);
	base[5]= (V98);
	{object V100;
	V100= (V99);
	 vs_top=base+6;
	 while(!endp(V100))
	 {vs_push(car(V100));V100=cdr(V100);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T310;
T310:;
	base[4]= (V96);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T328;}
	base[4]= (V86);
	base[5]= (V87);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V85);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T328;
T328:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V85;
	base[9]= VV[43];
	base[10]= VV[79];
	base[11]= VV[45];
	base[12]= VV[80];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T276;
T276:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T273;
T273:;
	base[4]= V87;
	base[5]= VV[81];
	base[7]= V86;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V86;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile1839	*/

static object LI58()

{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[82];
	base[4]= VV[83];
	V103= symbol_function(VV[284]);
	base[5]= listA(3,VV[51],V103,VV[84]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V104 = Cnil;
	VMR58(V104)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1839	*/

static object LI59()

{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V105 = Cnil;
	VMR59(V105)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-TYPE-ERROR1839	*/

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
/*	local entry for function progn 'compile1839	*/

static object LI61()

{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk285)();
	vs_top=sup;
	{object V106 = Cnil;
	VMR61(V106)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1840	*/

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
	{object V108 = Cnil;
	VMR62(V108)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1840	*/

static object LI63()

{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	(void)(sputprop(VV[85],VV[9],Cnil));
	{object V109 = Cnil;
	VMR63(V109)}
	return Cnil;
}
/*	local entry for function progn 'compile1840	*/

static object LI64()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V110 = Cnil;
	VMR64(V110)}
	return Cnil;
}
/*	function definition for Defclass CASE-FAILURE1840	*/

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
	V111= listA(9,VV[18],VV[89],VV[20],VV[90],VV[22],Cnil,VV[23],VV[91],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V111,listA(9,VV[18],VV[92],VV[20],VV[93],VV[22],Cnil,VV[23],VV[94],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1842	*/

static object LI66()

{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk286)();
	vs_top=sup;
	{object V112 = Cnil;
	VMR66(V112)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1843	*/

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
	{object V114 = Cnil;
	VMR67(V114)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1843	*/

static object LI68()

{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	(void)(sputprop(VV[40],VV[9],Cnil));
	{object V115 = Cnil;
	VMR68(V115)}
	return Cnil;
}
/*	local entry for function progn 'compile1843	*/

static object LI69()

{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V116 = Cnil;
	VMR69(V116)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (CASE-FAILURE T))	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_reserve(VM70);
	{object V117;
	register object V118;
	register object V119;
	register object V120;
	check_arg(4);
	V117=(base[0]);
	V118=(base[1]);
	V119=(base[2]);
	V120=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T391;}
	if(((V118))==Cnil){
	goto T394;}
	base[4]= (V118);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T398;}
	base[4]= structure_ref((V118),VV[35],0);
	base[5]= structure_ref((V118),VV[35],1);
	base[6]= structure_ref((V118),VV[35],2);
	base[7]= (V119);
	base[8]= (V120);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T398;
T398:;
	if(!(type_of((V118))==t_fixnum)){
	goto T408;}
	{object V123;
	if(type_of(V119)==t_structure){
	goto T414;}
	goto T412;
	goto T414;
T414:;
	base[4]= V119;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V125= vs_base[0];
	if(!((V125)==(VV[97]))){
	goto T412;}
	V123= structure_ref((V119),VV[37],1);
	goto T410;
	goto T412;
T412:;{object V126;
	V126= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V119);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V127= vs_base[0];
	if(!((V126)==(car(V127)))){
	goto T419;}}
	V123= car(((V119))->cc.cc_turbo[12]);
	goto T410;
	goto T419;
T419:;
	V123= Cnil;
	goto T410;
T410:;
	if(((V123))==Cnil){
	goto T425;}
	base[4]= aset1((V123),fix((V118)),V119);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T425;
T425:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T408;
T408:;
	{register object V129;
	V129= V118;
	base[4]= (V129);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T428;}
	{object V130;
	object V131;
	register object V132;
	V130= structure_ref((V118),VV[39],0);
	V131= list(2,(V119),(V120));
	V132= structure_ref((V118),VV[39],1);
	if(((V132))==Cnil){
	goto T436;}
	if((cdr((V132)))!=Cnil){
	goto T436;}
	base[4]= (V131);
	base[5]= car((V132));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V130);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T436;
T436:;
	base[4]= (V130);
	base[5]= (V131);
	{object V133;
	V133= (V132);
	 vs_top=base+6;
	 while(!endp(V133))
	 {vs_push(car(V133));V133=cdr(V133);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T428;
T428:;
	base[4]= (V129);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T446;}
	base[4]= (V119);
	base[5]= (V120);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V118);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T446;
T446:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V118;
	base[9]= VV[43];
	base[10]= VV[98];
	base[11]= VV[45];
	base[12]= VV[99];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T394;
T394:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T391;
T391:;
	base[4]= V120;
	base[5]= VV[100];
	base[7]= V119;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V119;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= V119;
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile1860	*/

static object LI71()

{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[101];
	base[4]= VV[102];
	V136= symbol_function(VV[289]);
	base[5]= listA(3,VV[51],V136,VV[103]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V137 = Cnil;
	VMR71(V137)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1860	*/

static object LI72()

{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V138 = Cnil;
	VMR72(V138)}
	return Cnil;
}
/*	function definition for Defclass PROGRAM-ERROR1860	*/

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
/*	local entry for function progn 'compile1860	*/

static object LI74()

{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk290)();
	vs_top=sup;
	{object V139 = Cnil;
	VMR74(V139)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1861	*/

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
	{object V141 = Cnil;
	VMR75(V141)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1861	*/

static object LI76()

{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	(void)(sputprop(VV[104],VV[9],Cnil));
	{object V142 = Cnil;
	VMR76(V142)}
	return Cnil;
}
/*	local entry for function progn 'compile1861	*/

static object LI77()

{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V143 = Cnil;
	VMR77(V143)}
	return Cnil;
}
/*	function definition for Defclass CONTROL-ERROR1861	*/

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
/*	local entry for function progn 'compile1861	*/

static object LI79()

{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk291)();
	vs_top=sup;
	{object V144 = Cnil;
	VMR79(V144)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1862	*/

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
	{object V146 = Cnil;
	VMR80(V146)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1862	*/

static object LI81()

{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)(sputprop(VV[107],VV[9],Cnil));
	{object V147 = Cnil;
	VMR81(V147)}
	return Cnil;
}
/*	local entry for function progn 'compile1862	*/

static object LI82()

{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	{object V148 = Cnil;
	VMR82(V148)}
	return Cnil;
}
/*	function definition for Defclass STREAM-ERROR1862	*/

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
	V149= listA(9,VV[18],VV[112],VV[20],VV[113],VV[22],Cnil,VV[23],VV[114],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V149,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1863	*/

static object LI84()

{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk292)();
	vs_top=sup;
	{object V150 = Cnil;
	VMR84(V150)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1864	*/

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
	{object V152 = Cnil;
	VMR85(V152)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1864	*/

static object LI86()

{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	(void)(sputprop(VV[110],VV[9],Cnil));
	{object V153 = Cnil;
	VMR86(V153)}
	return Cnil;
}
/*	local entry for function progn 'compile1864	*/

static object LI87()

{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{object V154 = Cnil;
	VMR87(V154)}
	return Cnil;
}
/*	function definition for Defclass END-OF-FILE1864	*/

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
/*	local entry for function progn 'compile1864	*/

static object LI89()

{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk293)();
	vs_top=sup;
	{object V155 = Cnil;
	VMR89(V155)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1865	*/

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
	{object V157 = Cnil;
	VMR90(V157)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1865	*/

static object LI91()

{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	(void)(sputprop(VV[116],VV[9],Cnil));
	{object V158 = Cnil;
	VMR91(V158)}
	return Cnil;
}
/*	local entry for function progn 'compile1865	*/

static object LI92()

{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[119];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V159 = Cnil;
	VMR92(V159)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (END-OF-FILE T))	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_reserve(VM93);
	{object V160;
	register object V161;
	register object V162;
	register object V163;
	check_arg(4);
	V160=(base[0]);
	V161=(base[1]);
	V162=(base[2]);
	V163=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T537;}
	if(((V161))==Cnil){
	goto T540;}
	base[4]= (V161);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T544;}
	base[4]= structure_ref((V161),VV[35],0);
	base[5]= structure_ref((V161),VV[35],1);
	base[6]= structure_ref((V161),VV[35],2);
	base[7]= (V162);
	base[8]= (V163);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T544;
T544:;
	if(!(type_of((V161))==t_fixnum)){
	goto T554;}
	{object V166;
	if(type_of(V162)==t_structure){
	goto T560;}
	goto T558;
	goto T560;
T560:;
	base[4]= V162;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V168= vs_base[0];
	if(!((V168)==(VV[120]))){
	goto T558;}
	V166= structure_ref((V162),VV[37],1);
	goto T556;
	goto T558;
T558:;{object V169;
	V169= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V162);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V170= vs_base[0];
	if(!((V169)==(car(V170)))){
	goto T565;}}
	V166= car(((V162))->cc.cc_turbo[12]);
	goto T556;
	goto T565;
T565:;
	V166= Cnil;
	goto T556;
T556:;
	if(((V166))==Cnil){
	goto T571;}
	base[4]= aset1((V166),fix((V161)),V162);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T571;
T571:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T554;
T554:;
	{register object V172;
	V172= V161;
	base[4]= (V172);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T574;}
	{object V173;
	object V174;
	register object V175;
	V173= structure_ref((V161),VV[39],0);
	V174= list(2,(V162),(V163));
	V175= structure_ref((V161),VV[39],1);
	if(((V175))==Cnil){
	goto T582;}
	if((cdr((V175)))!=Cnil){
	goto T582;}
	base[4]= (V174);
	base[5]= car((V175));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V173);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T582;
T582:;
	base[4]= (V173);
	base[5]= (V174);
	{object V176;
	V176= (V175);
	 vs_top=base+6;
	 while(!endp(V176))
	 {vs_push(car(V176));V176=cdr(V176);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T574;
T574:;
	base[4]= (V172);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T592;}
	base[4]= (V162);
	base[5]= (V163);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V161);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T592;
T592:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V161;
	base[9]= VV[43];
	base[10]= VV[121];
	base[11]= VV[45];
	base[12]= VV[122];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T540;
T540:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T537;
T537:;
	base[4]= V163;
	base[5]= VV[123];
	base[7]= V162;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile1882	*/

static object LI94()

{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[124];
	base[4]= VV[125];
	V179= symbol_function(VV[295]);
	base[5]= listA(3,VV[51],V179,VV[126]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V180 = Cnil;
	VMR94(V180)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1882	*/

static object LI95()

{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{object V181 = Cnil;
	VMR95(V181)}
	return Cnil;
}
/*	function definition for Defclass FILE-ERROR1882	*/

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
	V182= listA(9,VV[18],VV[129],VV[20],VV[130],VV[22],Cnil,VV[23],VV[131],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V182,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1883	*/

static object LI97()

{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk296)();
	vs_top=sup;
	{object V183 = Cnil;
	VMR97(V183)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1884	*/

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
	{object V185 = Cnil;
	VMR98(V185)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1884	*/

static object LI99()

{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	(void)(sputprop(VV[127],VV[9],Cnil));
	{object V186 = Cnil;
	VMR99(V186)}
	return Cnil;
}
/*	local entry for function progn 'compile1884	*/

static object LI100()

{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V187 = Cnil;
	VMR100(V187)}
	return Cnil;
}
/*	function definition for Defclass PACKAGE-ERROR1884	*/

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
	V188= listA(9,VV[18],VV[135],VV[20],VV[136],VV[22],Cnil,VV[23],VV[137],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V188,listA(9,VV[18],VV[138],VV[20],VV[139],VV[22],Cnil,VV[23],VV[140],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1886	*/

static object LI102()

{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk297)();
	vs_top=sup;
	{object V189 = Cnil;
	VMR102(V189)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1887	*/

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
	{object V191 = Cnil;
	VMR103(V191)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1887	*/

static object LI104()

{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	(void)(sputprop(VV[133],VV[9],Cnil));
	{object V192 = Cnil;
	VMR104(V192)}
	return Cnil;
}
/*	local entry for function progn 'compile1887	*/

static object LI105()

{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[142];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V193 = Cnil;
	VMR105(V193)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (PACKAGE-ERROR T))	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_reserve(VM106);
	{object V194;
	register object V195;
	register object V196;
	register object V197;
	check_arg(4);
	V194=(base[0]);
	V195=(base[1]);
	V196=(base[2]);
	V197=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T653;}
	if(((V195))==Cnil){
	goto T656;}
	base[4]= (V195);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T660;}
	base[4]= structure_ref((V195),VV[35],0);
	base[5]= structure_ref((V195),VV[35],1);
	base[6]= structure_ref((V195),VV[35],2);
	base[7]= (V196);
	base[8]= (V197);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T660;
T660:;
	if(!(type_of((V195))==t_fixnum)){
	goto T670;}
	{object V200;
	if(type_of(V196)==t_structure){
	goto T676;}
	goto T674;
	goto T676;
T676:;
	base[4]= V196;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V202= vs_base[0];
	if(!((V202)==(VV[143]))){
	goto T674;}
	V200= structure_ref((V196),VV[37],1);
	goto T672;
	goto T674;
T674:;{object V203;
	V203= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V196);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V204= vs_base[0];
	if(!((V203)==(car(V204)))){
	goto T681;}}
	V200= car(((V196))->cc.cc_turbo[12]);
	goto T672;
	goto T681;
T681:;
	V200= Cnil;
	goto T672;
T672:;
	if(((V200))==Cnil){
	goto T687;}
	base[4]= aset1((V200),fix((V195)),V196);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T687;
T687:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T670;
T670:;
	{register object V206;
	V206= V195;
	base[4]= (V206);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T690;}
	{object V207;
	object V208;
	register object V209;
	V207= structure_ref((V195),VV[39],0);
	V208= list(2,(V196),(V197));
	V209= structure_ref((V195),VV[39],1);
	if(((V209))==Cnil){
	goto T698;}
	if((cdr((V209)))!=Cnil){
	goto T698;}
	base[4]= (V208);
	base[5]= car((V209));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V207);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T698;
T698:;
	base[4]= (V207);
	base[5]= (V208);
	{object V210;
	V210= (V209);
	 vs_top=base+6;
	 while(!endp(V210))
	 {vs_push(car(V210));V210=cdr(V210);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T690;
T690:;
	base[4]= (V206);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T708;}
	base[4]= (V196);
	base[5]= (V197);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V195);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T708;
T708:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V195;
	base[9]= VV[43];
	base[10]= VV[144];
	base[11]= VV[45];
	base[12]= VV[145];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T656;
T656:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T653;
T653:;
	base[4]= V197;
	base[5]= VV[146];
	base[7]= V196;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk298)(Lclptr298);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V196;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile1904	*/

static object LI107()

{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[147];
	base[4]= VV[148];
	V213= symbol_function(VV[300]);
	base[5]= listA(3,VV[51],V213,VV[149]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V214 = Cnil;
	VMR107(V214)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1904	*/

static object LI108()

{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V215 = Cnil;
	VMR108(V215)}
	return Cnil;
}
/*	function definition for Defclass CELL-ERROR1904	*/

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
	V216= listA(9,VV[18],VV[89],VV[20],VV[152],VV[22],Cnil,VV[23],VV[153],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V216,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1905	*/

static object LI110()

{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk301)();
	vs_top=sup;
	{object V217 = Cnil;
	VMR110(V217)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1906	*/

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
	{object V219 = Cnil;
	VMR111(V219)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1906	*/

static object LI112()

{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	(void)(sputprop(VV[150],VV[9],Cnil));
	{object V220 = Cnil;
	VMR112(V220)}
	return Cnil;
}
/*	local entry for function progn 'compile1906	*/

static object LI113()

{	 VMB113 VMS113 VMV113
	goto TTL;
TTL:;
	{object V221 = Cnil;
	VMR113(V221)}
	return Cnil;
}
/*	function definition for Defclass UNBOUND-VARIABLE1906	*/

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
/*	local entry for function progn 'compile1906	*/

static object LI115()

{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk302)();
	vs_top=sup;
	{object V222 = Cnil;
	VMR115(V222)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1907	*/

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
	{object V224 = Cnil;
	VMR116(V224)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1907	*/

static object LI117()

{	 VMB117 VMS117 VMV117
	goto TTL;
TTL:;
	(void)(sputprop(VV[155],VV[9],Cnil));
	{object V225 = Cnil;
	VMR117(V225)}
	return Cnil;
}
/*	local entry for function progn 'compile1907	*/

static object LI118()

{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[158];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V226 = Cnil;
	VMR118(V226)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNBOUND-VARIABLE T))	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_reserve(VM119);
	{object V227;
	register object V228;
	register object V229;
	register object V230;
	check_arg(4);
	V227=(base[0]);
	V228=(base[1]);
	V229=(base[2]);
	V230=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T771;}
	if(((V228))==Cnil){
	goto T774;}
	base[4]= (V228);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T778;}
	base[4]= structure_ref((V228),VV[35],0);
	base[5]= structure_ref((V228),VV[35],1);
	base[6]= structure_ref((V228),VV[35],2);
	base[7]= (V229);
	base[8]= (V230);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T778;
T778:;
	if(!(type_of((V228))==t_fixnum)){
	goto T788;}
	{object V233;
	if(type_of(V229)==t_structure){
	goto T794;}
	goto T792;
	goto T794;
T794:;
	base[4]= V229;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V235= vs_base[0];
	if(!((V235)==(VV[159]))){
	goto T792;}
	V233= structure_ref((V229),VV[37],1);
	goto T790;
	goto T792;
T792:;{object V236;
	V236= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V229);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V237= vs_base[0];
	if(!((V236)==(car(V237)))){
	goto T799;}}
	V233= car(((V229))->cc.cc_turbo[12]);
	goto T790;
	goto T799;
T799:;
	V233= Cnil;
	goto T790;
T790:;
	if(((V233))==Cnil){
	goto T805;}
	base[4]= aset1((V233),fix((V228)),V229);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T805;
T805:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T788;
T788:;
	{register object V239;
	V239= V228;
	base[4]= (V239);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T808;}
	{object V240;
	object V241;
	register object V242;
	V240= structure_ref((V228),VV[39],0);
	V241= list(2,(V229),(V230));
	V242= structure_ref((V228),VV[39],1);
	if(((V242))==Cnil){
	goto T816;}
	if((cdr((V242)))!=Cnil){
	goto T816;}
	base[4]= (V241);
	base[5]= car((V242));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V240);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T816;
T816:;
	base[4]= (V240);
	base[5]= (V241);
	{object V243;
	V243= (V242);
	 vs_top=base+6;
	 while(!endp(V243))
	 {vs_push(car(V243));V243=cdr(V243);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T808;
T808:;
	base[4]= (V239);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T826;}
	base[4]= (V229);
	base[5]= (V230);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V228);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T826;
T826:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V228;
	base[9]= VV[43];
	base[10]= VV[160];
	base[11]= VV[45];
	base[12]= VV[161];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T774;
T774:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T771;
T771:;
	base[4]= V230;
	base[5]= VV[162];
	base[7]= V229;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile1924	*/

static object LI120()

{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[163];
	base[4]= VV[164];
	V246= symbol_function(VV[304]);
	base[5]= listA(3,VV[51],V246,VV[165]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V247 = Cnil;
	VMR120(V247)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1924	*/

static object LI121()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	{object V248 = Cnil;
	VMR121(V248)}
	return Cnil;
}
/*	function definition for Defclass UNDEFINED-FUNCTION1924	*/

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
/*	local entry for function progn 'compile1924	*/

static object LI123()

{	 VMB123 VMS123 VMV123
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk305)();
	vs_top=sup;
	{object V249 = Cnil;
	VMR123(V249)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1925	*/

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
	{object V251 = Cnil;
	VMR124(V251)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1925	*/

static object LI125()

{	 VMB125 VMS125 VMV125
	goto TTL;
TTL:;
	(void)(sputprop(VV[166],VV[9],Cnil));
	{object V252 = Cnil;
	VMR125(V252)}
	return Cnil;
}
/*	local entry for function progn 'compile1925	*/

static object LI126()

{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[169];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V253 = Cnil;
	VMR126(V253)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNDEFINED-FUNCTION T))	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_reserve(VM127);
	{object V254;
	register object V255;
	register object V256;
	register object V257;
	check_arg(4);
	V254=(base[0]);
	V255=(base[1]);
	V256=(base[2]);
	V257=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T874;}
	if(((V255))==Cnil){
	goto T877;}
	base[4]= (V255);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T881;}
	base[4]= structure_ref((V255),VV[35],0);
	base[5]= structure_ref((V255),VV[35],1);
	base[6]= structure_ref((V255),VV[35],2);
	base[7]= (V256);
	base[8]= (V257);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T881;
T881:;
	if(!(type_of((V255))==t_fixnum)){
	goto T891;}
	{object V260;
	if(type_of(V256)==t_structure){
	goto T897;}
	goto T895;
	goto T897;
T897:;
	base[4]= V256;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V262= vs_base[0];
	if(!((V262)==(VV[170]))){
	goto T895;}
	V260= structure_ref((V256),VV[37],1);
	goto T893;
	goto T895;
T895:;{object V263;
	V263= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V256);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V264= vs_base[0];
	if(!((V263)==(car(V264)))){
	goto T902;}}
	V260= car(((V256))->cc.cc_turbo[12]);
	goto T893;
	goto T902;
T902:;
	V260= Cnil;
	goto T893;
T893:;
	if(((V260))==Cnil){
	goto T908;}
	base[4]= aset1((V260),fix((V255)),V256);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T908;
T908:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T891;
T891:;
	{register object V266;
	V266= V255;
	base[4]= (V266);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T911;}
	{object V267;
	object V268;
	register object V269;
	V267= structure_ref((V255),VV[39],0);
	V268= list(2,(V256),(V257));
	V269= structure_ref((V255),VV[39],1);
	if(((V269))==Cnil){
	goto T919;}
	if((cdr((V269)))!=Cnil){
	goto T919;}
	base[4]= (V268);
	base[5]= car((V269));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V267);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T919;
T919:;
	base[4]= (V267);
	base[5]= (V268);
	{object V270;
	V270= (V269);
	 vs_top=base+6;
	 while(!endp(V270))
	 {vs_push(car(V270));V270=cdr(V270);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T911;
T911:;
	base[4]= (V266);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T929;}
	base[4]= (V256);
	base[5]= (V257);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V255);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T929;
T929:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V255;
	base[9]= VV[43];
	base[10]= VV[171];
	base[11]= VV[45];
	base[12]= VV[172];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T877;
T877:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T874;
T874:;
	base[4]= V257;
	base[5]= VV[173];
	base[7]= V256;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile1942	*/

static object LI128()

{	 VMB128 VMS128 VMV128
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[174];
	base[4]= VV[175];
	V273= symbol_function(VV[306]);
	base[5]= listA(3,VV[51],V273,VV[176]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V274 = Cnil;
	VMR128(V274)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1942	*/

static object LI129()

{	 VMB129 VMS129 VMV129
	goto TTL;
TTL:;
	{object V275 = Cnil;
	VMR129(V275)}
	return Cnil;
}
/*	function definition for Defclass ARITHMETIC-ERROR1942	*/

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
	V276= listA(9,VV[18],VV[179],VV[20],VV[180],VV[22],Cnil,VV[23],VV[181],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V276,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1943	*/

static object LI131()

{	 VMB131 VMS131 VMV131
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk307)();
	vs_top=sup;
	{object V277 = Cnil;
	VMR131(V277)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1944	*/

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
	{object V279 = Cnil;
	VMR132(V279)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1944	*/

static object LI133()

{	 VMB133 VMS133 VMV133
	goto TTL;
TTL:;
	(void)(sputprop(VV[177],VV[9],Cnil));
	{object V280 = Cnil;
	VMR133(V280)}
	return Cnil;
}
/*	local entry for function progn 'compile1944	*/

static object LI134()

{	 VMB134 VMS134 VMV134
	goto TTL;
TTL:;
	{object V281 = Cnil;
	VMR134(V281)}
	return Cnil;
}
/*	function definition for Defclass DIVISION-BY-ZERO1944	*/

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
/*	local entry for function progn 'compile1944	*/

static object LI136()

{	 VMB136 VMS136 VMV136
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk308)();
	vs_top=sup;
	{object V282 = Cnil;
	VMR136(V282)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1945	*/

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
	{object V284 = Cnil;
	VMR137(V284)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1945	*/

static object LI138()

{	 VMB138 VMS138 VMV138
	goto TTL;
TTL:;
	(void)(sputprop(VV[183],VV[9],Cnil));
	{object V285 = Cnil;
	VMR138(V285)}
	return Cnil;
}
/*	local entry for function progn 'compile1945	*/

static object LI139()

{	 VMB139 VMS139 VMV139
	goto TTL;
TTL:;
	{object V286 = Cnil;
	VMR139(V286)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-OVERFLOW1945	*/

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
/*	local entry for function progn 'compile1945	*/

static object LI141()

{	 VMB141 VMS141 VMV141
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V287 = Cnil;
	VMR141(V287)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1946	*/

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
	{object V289 = Cnil;
	VMR142(V289)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1946	*/

static object LI143()

{	 VMB143 VMS143 VMV143
	goto TTL;
TTL:;
	(void)(sputprop(VV[186],VV[9],Cnil));
	{object V290 = Cnil;
	VMR143(V290)}
	return Cnil;
}
/*	local entry for function progn 'compile1946	*/

static object LI144()

{	 VMB144 VMS144 VMV144
	goto TTL;
TTL:;
	{object V291 = Cnil;
	VMR144(V291)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-UNDERFLOW1946	*/

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
/*	local entry for function progn 'compile1946	*/

static object LI146()

{	 VMB146 VMS146 VMV146
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk310)();
	vs_top=sup;
	{object V292 = Cnil;
	VMR146(V292)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1947	*/

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
	{object V294 = Cnil;
	VMR147(V294)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1947	*/

static object LI148()

{	 VMB148 VMS148 VMV148
	goto TTL;
TTL:;
	(void)(sputprop(VV[189],VV[9],Cnil));
	{object V295 = Cnil;
	VMR148(V295)}
	return Cnil;
}
/*	local entry for function progn 'compile1947	*/

static object LI149()

{	 VMB149 VMS149 VMV149
	goto TTL;
TTL:;
	{object V296 = Cnil;
	VMR149(V296)}
	return Cnil;
}
/*	function definition for Defclass ABORT-FAILURE1947	*/

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
/*	local entry for function progn 'compile1947	*/

static object LI151()

{	 VMB151 VMS151 VMV151
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk311)();
	vs_top=sup;
	{object V297 = Cnil;
	VMR151(V297)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1948	*/

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
	{object V299 = Cnil;
	VMR152(V299)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1948	*/

static object LI153()

{	 VMB153 VMS153 VMV153
	goto TTL;
TTL:;
	(void)(sputprop(VV[192],VV[9],Cnil));
	{object V300 = Cnil;
	VMR153(V300)}
	return Cnil;
}
/*	local entry for function progn 'compile1948	*/

static object LI154()

{	 VMB154 VMS154 VMV154
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[195];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V301 = Cnil;
	VMR154(V301)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (ABORT-FAILURE T))	*/

static void L155()
{register object *base=vs_base;
	register object *sup=base+VM155; VC155
	vs_reserve(VM155);
	{object V302;
	register object V303;
	register object V304;
	register object V305;
	check_arg(4);
	V302=(base[0]);
	V303=(base[1]);
	V304=(base[2]);
	V305=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T1029;}
	if(((V303))==Cnil){
	goto T1032;}
	base[4]= (V303);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1036;}
	base[4]= structure_ref((V303),VV[35],0);
	base[5]= structure_ref((V303),VV[35],1);
	base[6]= structure_ref((V303),VV[35],2);
	base[7]= (V304);
	base[8]= (V305);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1036;
T1036:;
	if(!(type_of((V303))==t_fixnum)){
	goto T1046;}
	{object V308;
	if(type_of(V304)==t_structure){
	goto T1052;}
	goto T1050;
	goto T1052;
T1052:;
	base[4]= V304;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V310= vs_base[0];
	if(!((V310)==(VV[196]))){
	goto T1050;}
	V308= structure_ref((V304),VV[37],1);
	goto T1048;
	goto T1050;
T1050:;{object V311;
	V311= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V304);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V312= vs_base[0];
	if(!((V311)==(car(V312)))){
	goto T1057;}}
	V308= car(((V304))->cc.cc_turbo[12]);
	goto T1048;
	goto T1057;
T1057:;
	V308= Cnil;
	goto T1048;
T1048:;
	if(((V308))==Cnil){
	goto T1063;}
	base[4]= aset1((V308),fix((V303)),V304);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1063;
T1063:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1046;
T1046:;
	{register object V314;
	V314= V303;
	base[4]= (V314);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1066;}
	{object V315;
	object V316;
	register object V317;
	V315= structure_ref((V303),VV[39],0);
	V316= list(2,(V304),(V305));
	V317= structure_ref((V303),VV[39],1);
	if(((V317))==Cnil){
	goto T1074;}
	if((cdr((V317)))!=Cnil){
	goto T1074;}
	base[4]= (V316);
	base[5]= car((V317));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V315);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1074;
T1074:;
	base[4]= (V315);
	base[5]= (V316);
	{object V318;
	V318= (V317);
	 vs_top=base+6;
	 while(!endp(V318))
	 {vs_push(car(V318));V318=cdr(V318);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1066;
T1066:;
	base[4]= (V314);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1084;}
	base[4]= (V304);
	base[5]= (V305);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V303);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1084;
T1084:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V303;
	base[9]= VV[43];
	base[10]= VV[197];
	base[11]= VV[45];
	base[12]= VV[198];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1032;
T1032:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T1029;
T1029:;
	base[4]= VV[199];
	base[5]= V305;
	vs_top=(vs_base=base+4)+2;
	Lwrite_string();
	return;
	}
}
/*	local entry for function progn 'compile1965	*/

static object LI156()

{	 VMB156 VMS156 VMV156
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[200];
	base[4]= VV[201];
	V321= symbol_function(VV[312]);
	base[5]= listA(3,VV[51],V321,VV[202]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V322 = Cnil;
	VMR156(V322)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1965	*/

static object LI157()

{	 VMB157 VMS157 VMV157
	goto TTL;
TTL:;
	{object V323 = Cnil;
	VMR157(V323)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-ERROR1965	*/

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
	V324= vs_base[0];
	base[3]= make_cons(V324,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile1966	*/

static object LI159()

{	 VMB159 VMS159 VMV159
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk313)();
	vs_top=sup;
	{object V325 = Cnil;
	VMR159(V325)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1967	*/

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
	{object V327 = Cnil;
	VMR160(V327)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1967	*/

static object LI161()

{	 VMB161 VMS161 VMV161
	goto TTL;
TTL:;
	(void)(sputprop(VV[203],VV[9],Cnil));
	{object V328 = Cnil;
	VMR161(V328)}
	return Cnil;
}
/*	local entry for function progn 'compile1967	*/

static object LI162()

{	 VMB162 VMS162 VMV162
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[210];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V329 = Cnil;
	VMR162(V329)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-ERROR T))	*/

static void L163()
{register object *base=vs_base;
	register object *sup=base+VM163; VC163
	vs_reserve(VM163);
	{object V330;
	register object V331;
	register object V332;
	register object V333;
	check_arg(4);
	V330=(base[0]);
	V331=(base[1]);
	V332=(base[2]);
	V333=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T1142;}
	if(((V331))==Cnil){
	goto T1145;}
	base[4]= (V331);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1149;}
	base[4]= structure_ref((V331),VV[35],0);
	base[5]= structure_ref((V331),VV[35],1);
	base[6]= structure_ref((V331),VV[35],2);
	base[7]= (V332);
	base[8]= (V333);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1149;
T1149:;
	if(!(type_of((V331))==t_fixnum)){
	goto T1159;}
	{object V336;
	if(type_of(V332)==t_structure){
	goto T1165;}
	goto T1163;
	goto T1165;
T1165:;
	base[4]= V332;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V338= vs_base[0];
	if(!((V338)==(VV[211]))){
	goto T1163;}
	V336= structure_ref((V332),VV[37],1);
	goto T1161;
	goto T1163;
T1163:;{object V339;
	V339= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V332);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V340= vs_base[0];
	if(!((V339)==(car(V340)))){
	goto T1170;}}
	V336= car(((V332))->cc.cc_turbo[12]);
	goto T1161;
	goto T1170;
T1170:;
	V336= Cnil;
	goto T1161;
T1161:;
	if(((V336))==Cnil){
	goto T1176;}
	base[4]= aset1((V336),fix((V331)),V332);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1176;
T1176:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1159;
T1159:;
	{register object V342;
	V342= V331;
	base[4]= (V342);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1179;}
	{object V343;
	object V344;
	register object V345;
	V343= structure_ref((V331),VV[39],0);
	V344= list(2,(V332),(V333));
	V345= structure_ref((V331),VV[39],1);
	if(((V345))==Cnil){
	goto T1187;}
	if((cdr((V345)))!=Cnil){
	goto T1187;}
	base[4]= (V344);
	base[5]= car((V345));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V343);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1187;
T1187:;
	base[4]= (V343);
	base[5]= (V344);
	{object V346;
	V346= (V345);
	 vs_top=base+6;
	 while(!endp(V346))
	 {vs_push(car(V346));V346=cdr(V346);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1179;
T1179:;
	base[4]= (V342);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1197;}
	base[4]= (V332);
	base[5]= (V333);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V331);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1197;
T1197:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V331;
	base[9]= VV[43];
	base[10]= VV[212];
	base[11]= VV[45];
	base[12]= VV[213];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1145;
T1145:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T1142;
T1142:;
	{register object V348;
	V348= (V333);
	base[4]= V332;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1212;}
	base[4]= (V348);
	base[5]= VV[214];
	base[7]= V332;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T1212;
T1212:;
	if(((V331))==Cnil){
	goto T1221;}
	base[4]= (V331);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1225;}
	base[4]= structure_ref((V331),VV[35],0);
	base[5]= structure_ref((V331),VV[35],1);
	base[6]= structure_ref((V331),VV[35],2);
	base[7]= (V332);
	base[8]= (V348);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1225;
T1225:;
	if(!(type_of((V331))==t_fixnum)){
	goto T1235;}
	{object V350;
	if(type_of(V332)==t_structure){
	goto T1241;}
	goto T1239;
	goto T1241;
T1241:;
	base[4]= V332;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V352= vs_base[0];
	if(!((V352)==(VV[215]))){
	goto T1239;}
	V350= structure_ref((V332),VV[37],1);
	goto T1237;
	goto T1239;
T1239:;{object V353;
	V353= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V332);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V354= vs_base[0];
	if(!((V353)==(car(V354)))){
	goto T1246;}}
	V350= car(((V332))->cc.cc_turbo[12]);
	goto T1237;
	goto T1246;
T1246:;
	V350= Cnil;
	goto T1237;
T1237:;
	if(((V350))==Cnil){
	goto T1252;}
	base[4]= aset1((V350),fix((V331)),V332);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1252;
T1252:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1235;
T1235:;
	{register object V356;
	V356= V331;
	base[4]= (V356);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1255;}
	{object V357;
	object V358;
	register object V359;
	V357= structure_ref((V331),VV[39],0);
	V358= list(2,(V332),(V348));
	V359= structure_ref((V331),VV[39],1);
	if(((V359))==Cnil){
	goto T1263;}
	if((cdr((V359)))!=Cnil){
	goto T1263;}
	base[4]= (V358);
	base[5]= car((V359));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V357);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1263;
T1263:;
	base[4]= (V357);
	base[5]= (V358);
	{object V360;
	V360= (V359);
	 vs_top=base+6;
	 while(!endp(V360))
	 {vs_push(car(V360));V360=cdr(V360);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1255;
T1255:;
	base[4]= (V356);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1273;}
	base[4]= (V332);
	base[5]= (V348);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V331);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1273;
T1273:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V331;
	base[9]= VV[43];
	base[10]= VV[216];
	base[11]= VV[45];
	base[12]= VV[217];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1221;
T1221:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;}
	}
}
/*	local entry for function progn 'compile1988	*/

static object LI164()

{	 VMB164 VMS164 VMV164
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[218];
	base[4]= VV[219];
	V361= symbol_function(VV[315]);
	base[5]= listA(3,VV[51],V361,VV[220]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V362 = Cnil;
	VMR164(V362)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1988	*/

static object LI165()

{	 VMB165 VMS165 VMV165
	goto TTL;
TTL:;
	{object V363 = Cnil;
	VMR165(V363)}
	return Cnil;
}
/*	function definition for INTERNAL-SIMPLE-ERROR-PRINTER	*/

static void L166()
{register object *base=vs_base;
	register object *sup=base+VM166; VC166
	vs_reserve(VM166);
	{register object V364;
	object V365;
	check_arg(2);
	V364=(base[0]);
	V365=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V364);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1298;}
	base[2]= (V365);
	base[3]= VV[221];
	base[5]= (V364);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T1298;
T1298:;
	base[2]= (V365);
	base[4]= (V364);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V366;
	base[4]= (V364);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V366= vs_base[0];
	 vs_top=base+4;
	 while(!endp(V366))
	 {vs_push(car(V366));V366=cdr(V366);}
	vs_base=base+2;}
	Lformat();
	return;
	}
}
/*	function definition for Defclass INTERNAL-SIMPLE-ERROR1988	*/

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
/*	local entry for function progn 'compile1988	*/

static object LI168()

{	 VMB168 VMS168 VMV168
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk316)();
	vs_top=sup;
	{object V367 = Cnil;
	VMR168(V367)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1989	*/

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
	{object V369 = Cnil;
	VMR169(V369)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1989	*/

static object LI170()

{	 VMB170 VMS170 VMV170
	goto TTL;
TTL:;
	(void)(sputprop(VV[222],VV[9],Cnil));
	{object V370 = Cnil;
	VMR170(V370)}
	return Cnil;
}
/*	local entry for function progn 'compile1989	*/

static object LI171()

{	 VMB171 VMS171 VMV171
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[225];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V371 = Cnil;
	VMR171(V371)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-ERROR T))	*/

static void L172()
{register object *base=vs_base;
	register object *sup=base+VM172; VC172
	vs_reserve(VM172);
	{object V372;
	register object V373;
	register object V374;
	register object V375;
	check_arg(4);
	V372=(base[0]);
	V373=(base[1]);
	V374=(base[2]);
	V375=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((symbol_value(VV[34]))==Cnil){
	goto T1330;}
	if(((V373))==Cnil){
	goto T1333;}
	base[4]= (V373);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1337;}
	base[4]= structure_ref((V373),VV[35],0);
	base[5]= structure_ref((V373),VV[35],1);
	base[6]= structure_ref((V373),VV[35],2);
	base[7]= (V374);
	base[8]= (V375);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1337;
T1337:;
	if(!(type_of((V373))==t_fixnum)){
	goto T1347;}
	{object V378;
	if(type_of(V374)==t_structure){
	goto T1353;}
	goto T1351;
	goto T1353;
T1353:;
	base[4]= V374;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V380= vs_base[0];
	if(!((V380)==(VV[226]))){
	goto T1351;}
	V378= structure_ref((V374),VV[37],1);
	goto T1349;
	goto T1351;
T1351:;{object V381;
	V381= symbol_value(VV[38]);
	base[4]= small_fixnum(14);
	base[5]= (V374);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk272)();
	vs_top=sup;
	V382= vs_base[0];
	if(!((V381)==(car(V382)))){
	goto T1358;}}
	V378= car(((V374))->cc.cc_turbo[12]);
	goto T1349;
	goto T1358;
T1358:;
	V378= Cnil;
	goto T1349;
T1349:;
	if(((V378))==Cnil){
	goto T1364;}
	base[4]= aset1((V378),fix((V373)),V374);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1364;
T1364:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1347;
T1347:;
	{register object V384;
	V384= V373;
	base[4]= (V384);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1367;}
	{object V385;
	object V386;
	register object V387;
	V385= structure_ref((V373),VV[39],0);
	V386= list(2,(V374),(V375));
	V387= structure_ref((V373),VV[39],1);
	if(((V387))==Cnil){
	goto T1375;}
	if((cdr((V387)))!=Cnil){
	goto T1375;}
	base[4]= (V386);
	base[5]= car((V387));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V385);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1375;
T1375:;
	base[4]= (V385);
	base[5]= (V386);
	{object V388;
	V388= (V387);
	 vs_top=base+6;
	 while(!endp(V388))
	 {vs_push(car(V388));V388=cdr(V388);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1367;
T1367:;
	base[4]= (V384);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1385;}
	base[4]= (V374);
	base[5]= (V375);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V373);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1385;
T1385:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V373;
	base[9]= VV[43];
	base[10]= VV[227];
	base[11]= VV[45];
	base[12]= VV[228];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1333;
T1333:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T1330;
T1330:;
	base[4]= (V374);
	base[5]= (V375);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk317)();
	return;
	}
}
/*	local entry for function progn 'compile2006	*/

static object LI173()

{	 VMB173 VMS173 VMV173
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[229];
	base[4]= VV[230];
	V389= symbol_function(VV[318]);
	base[5]= listA(3,VV[51],V389,VV[231]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V390 = Cnil;
	VMR173(V390)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2006	*/

static object LI174()

{	 VMB174 VMS174 VMV174
	goto TTL;
TTL:;
	{object V391 = Cnil;
	VMR174(V391)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-TYPE-ERROR2006	*/

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
/*	local entry for function progn 'compile2006	*/

static object LI176()

{	 VMB176 VMS176 VMV176
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk319)();
	vs_top=sup;
	{object V392 = Cnil;
	VMR176(V392)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2007	*/

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
	{object V394 = Cnil;
	VMR177(V394)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2007	*/

static object LI178()

{	 VMB178 VMS178 VMV178
	goto TTL;
TTL:;
	(void)(sputprop(VV[232],VV[9],Cnil));
	{object V395 = Cnil;
	VMR178(V395)}
	return Cnil;
}
/*	local entry for function progn 'compile2007	*/

static object LI179()

{	 VMB179 VMS179 VMV179
	goto TTL;
TTL:;
	{object V396 = Cnil;
	VMR179(V396)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-PACKAGE-ERROR2007	*/

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
/*	local entry for function progn 'compile2007	*/

static object LI181()

{	 VMB181 VMS181 VMV181
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk320)();
	vs_top=sup;
	{object V397 = Cnil;
	VMR181(V397)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2008	*/

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
	{object V399 = Cnil;
	VMR182(V399)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2008	*/

static object LI183()

{	 VMB183 VMS183 VMV183
	goto TTL;
TTL:;
	(void)(sputprop(VV[235],VV[9],Cnil));
	{object V400 = Cnil;
	VMR183(V400)}
	return Cnil;
}
/*	local entry for function progn 'compile2008	*/

static object LI184()

{	 VMB184 VMS184 VMV184
	goto TTL;
TTL:;
	{object V401 = Cnil;
	VMR184(V401)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PROGRAM-ERROR2008	*/

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
/*	local entry for function progn 'compile2008	*/

static object LI186()

{	 VMB186 VMS186 VMV186
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk321)();
	vs_top=sup;
	{object V402 = Cnil;
	VMR186(V402)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2009	*/

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
	{object V404 = Cnil;
	VMR187(V404)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2009	*/

static object LI188()

{	 VMB188 VMS188 VMV188
	goto TTL;
TTL:;
	(void)(sputprop(VV[238],VV[9],Cnil));
	{object V405 = Cnil;
	VMR188(V405)}
	return Cnil;
}
/*	local entry for function progn 'compile2009	*/

static object LI189()

{	 VMB189 VMS189 VMV189
	goto TTL;
TTL:;
	{object V406 = Cnil;
	VMR189(V406)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-CONTROL-ERROR2009	*/

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
/*	local entry for function progn 'compile2009	*/

static object LI191()

{	 VMB191 VMS191 VMV191
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk322)();
	vs_top=sup;
	{object V407 = Cnil;
	VMR191(V407)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2010	*/

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
	{object V409 = Cnil;
	VMR192(V409)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2010	*/

static object LI193()

{	 VMB193 VMS193 VMV193
	goto TTL;
TTL:;
	(void)(sputprop(VV[241],VV[9],Cnil));
	{object V410 = Cnil;
	VMR193(V410)}
	return Cnil;
}
/*	local entry for function progn 'compile2010	*/

static object LI194()

{	 VMB194 VMS194 VMV194
	goto TTL;
TTL:;
	{object V411 = Cnil;
	VMR194(V411)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNBOUND-VARIABLE2010	*/

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
/*	local entry for function progn 'compile2010	*/

static object LI196()

{	 VMB196 VMS196 VMV196
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk323)();
	vs_top=sup;
	{object V412 = Cnil;
	VMR196(V412)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2011	*/

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
	{object V414 = Cnil;
	VMR197(V414)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2011	*/

static object LI198()

{	 VMB198 VMS198 VMV198
	goto TTL;
TTL:;
	(void)(sputprop(VV[244],VV[9],Cnil));
	{object V415 = Cnil;
	VMR198(V415)}
	return Cnil;
}
/*	local entry for function progn 'compile2011	*/

static object LI199()

{	 VMB199 VMS199 VMV199
	goto TTL;
TTL:;
	{object V416 = Cnil;
	VMR199(V416)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNDEFINED-FUNCTION2011	*/

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
/*	local entry for function progn 'compile2011	*/

static object LI201()

{	 VMB201 VMS201 VMV201
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	{object V417 = Cnil;
	VMR201(V417)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2012	*/

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
	{object V419 = Cnil;
	VMR202(V419)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2012	*/

static object LI203()

{	 VMB203 VMS203 VMV203
	goto TTL;
TTL:;
	(void)(sputprop(VV[247],VV[9],Cnil));
	{object V420 = Cnil;
	VMR203(V420)}
	return Cnil;
}
/*	local entry for function progn 'compile2012	*/

static object LI204()

{	 VMB204 VMS204 VMV204
	goto TTL;
TTL:;
	{object V421 = Cnil;
	VMR204(V421)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-END-OF-FILE2012	*/

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
/*	local entry for function progn 'compile2012	*/

static object LI206()

{	 VMB206 VMS206 VMV206
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk325)();
	vs_top=sup;
	{object V422 = Cnil;
	VMR206(V422)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2013	*/

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
	{object V424 = Cnil;
	VMR207(V424)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2013	*/

static object LI208()

{	 VMB208 VMS208 VMV208
	goto TTL;
TTL:;
	(void)(sputprop(VV[250],VV[9],Cnil));
	{object V425 = Cnil;
	VMR208(V425)}
	return Cnil;
}
/*	local entry for function progn 'compile2013	*/

static object LI209()

{	 VMB209 VMS209 VMV209
	goto TTL;
TTL:;
	{object V426 = Cnil;
	VMR209(V426)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-FILE-ERROR2013	*/

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
/*	local entry for function progn 'compile2013	*/

static object LI211()

{	 VMB211 VMS211 VMV211
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk326)();
	vs_top=sup;
	{object V427 = Cnil;
	VMR211(V427)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2014	*/

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
	{object V429 = Cnil;
	VMR212(V429)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2014	*/

static object LI213()

{	 VMB213 VMS213 VMV213
	goto TTL;
TTL:;
	(void)(sputprop(VV[253],VV[9],Cnil));
	{object V430 = Cnil;
	VMR213(V430)}
	return Cnil;
}
/*	local entry for function progn 'compile2014	*/

static object LI214()

{	 VMB214 VMS214 VMV214
	goto TTL;
TTL:;
	{object V431 = Cnil;
	VMR214(V431)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-STREAM-ERROR2014	*/

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
/*	local entry for function progn 'compile2014	*/

static object LI216()

{	 VMB216 VMS216 VMV216
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	{object V432 = Cnil;
	VMR216(V432)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2015	*/

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
	{object V434 = Cnil;
	VMR217(V434)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2015	*/

static object LI218()

{	 VMB218 VMS218 VMV218
	goto TTL;
TTL:;
	(void)(sputprop(VV[256],VV[9],Cnil));
	{object V435 = Cnil;
	VMR218(V435)}
	return Cnil;
}
/*	local entry for function progn 'compile2015	*/

static object LI219()

{	 VMB219 VMS219 VMV219
	goto TTL;
TTL:;
	{object V436 = Cnil;
	VMR219(V436)}
	return Cnil;
}
/*	local entry for function progn 'compile2015	*/

static object LI220()

{	 VMB220 VMS220 VMV220
	goto TTL;
TTL:;
	base[0]= VV[259];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk328)();
	vs_top=sup;
	{object V437 = Cnil;
	VMR220(V437)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2015	*/

static object LI221()

{	 VMB221 VMS221 VMV221
	goto TTL;
TTL:;
	base[0]= VV[259];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1532;}
	goto T1531;
	goto T1532;
T1532:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	setq(VV[259],vs_base[0]);
	goto T1531;
T1531:;
	{object V438 = Cnil;
	VMR221(V438)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2016	*/

static object LI222()

{	 VMB222 VMS222 VMV222
	goto TTL;
TTL:;
	{object V439 = Cnil;
	VMR222(V439)}
	return Cnil;
}
/*	function definition for SIMPLE-CONDITION-CLASS-P	*/

static void L223()
{register object *base=vs_base;
	register object *sup=base+VM223; VC223
	vs_reserve(VM223);
	{register object V440;
	check_arg(1);
	V440=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V440))==t_symbol)){
	goto T1538;}
	base[1]= (V440);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	V440= vs_base[0];
	goto T1538;
T1538:;
	base[1]= (V440);
	base[2]= VV[5];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1543;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1543;
T1543:;{object V442;
	V442= symbol_value(VV[259]);
	base[1]= (V440);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk331)(Lclptr331);
	vs_top=sup;
	V443= vs_base[0];
	{register object x= V442,V441= V443;
	while(!endp(V441))
	if(eql(x,V441->c.c_car)){
	base[1]= V441;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V441=V441->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
static void LnkT331(ptr) object *ptr;{ call_or_link_closure(VV[331],(void **)&Lnk331,(void **)&Lclptr331);} /* CLASS-PRECEDENCE-LIST */
static void LnkT330(){ call_or_link(VV[330],(void **)&Lnk330);} /* TYPEP */
static void LnkT329(){ call_or_link(VV[329],(void **)&Lnk329);} /* FIND-CLASS */
static void LnkT328(){ call_or_link(VV[328],(void **)&Lnk328);} /* *MAKE-SPECIAL */
static void LnkT327(){ call_or_link(VV[327],(void **)&Lnk327);} /* Defclass INTERNAL-SIMPLE-STREAM-ERROR2014 */
static void LnkT326(){ call_or_link(VV[326],(void **)&Lnk326);} /* Defclass INTERNAL-SIMPLE-FILE-ERROR2013 */
static void LnkT325(){ call_or_link(VV[325],(void **)&Lnk325);} /* Defclass INTERNAL-END-OF-FILE2012 */
static void LnkT324(){ call_or_link(VV[324],(void **)&Lnk324);} /* Defclass INTERNAL-UNDEFINED-FUNCTION2011 */
static void LnkT323(){ call_or_link(VV[323],(void **)&Lnk323);} /* Defclass INTERNAL-UNBOUND-VARIABLE2010 */
static void LnkT322(){ call_or_link(VV[322],(void **)&Lnk322);} /* Defclass INTERNAL-SIMPLE-CONTROL-ERROR2009 */
static void LnkT321(){ call_or_link(VV[321],(void **)&Lnk321);} /* Defclass INTERNAL-SIMPLE-PROGRAM-ERROR2008 */
static void LnkT320(){ call_or_link(VV[320],(void **)&Lnk320);} /* Defclass INTERNAL-PACKAGE-ERROR2007 */
static void LnkT319(){ call_or_link(VV[319],(void **)&Lnk319);} /* Defclass INTERNAL-TYPE-ERROR2006 */
static void LnkT317(){ call_or_link(VV[317],(void **)&Lnk317);} /* INTERNAL-SIMPLE-ERROR-PRINTER */
static void LnkT316(){ call_or_link(VV[316],(void **)&Lnk316);} /* Defclass INTERNAL-SIMPLE-ERROR1988 */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)&Lnk314,(void **)&Lclptr314);} /* INTERNAL-ERROR-FUNCTION-NAME */
static void LnkT313(){ call_or_link(VV[313],(void **)&Lnk313);} /* Defclass INTERNAL-ERROR1965 */
static void LnkT311(){ call_or_link(VV[311],(void **)&Lnk311);} /* Defclass ABORT-FAILURE1947 */
static void LnkT310(){ call_or_link(VV[310],(void **)&Lnk310);} /* Defclass FLOATING-POINT-UNDERFLOW1946 */
static void LnkT309(){ call_or_link(VV[309],(void **)&Lnk309);} /* Defclass FLOATING-POINT-OVERFLOW1945 */
static void LnkT308(){ call_or_link(VV[308],(void **)&Lnk308);} /* Defclass DIVISION-BY-ZERO1944 */
static void LnkT307(){ call_or_link(VV[307],(void **)&Lnk307);} /* Defclass ARITHMETIC-ERROR1942 */
static void LnkT305(){ call_or_link(VV[305],(void **)&Lnk305);} /* Defclass UNDEFINED-FUNCTION1924 */
static void LnkT303(ptr) object *ptr;{ call_or_link_closure(VV[303],(void **)&Lnk303,(void **)&Lclptr303);} /* CELL-ERROR-NAME */
static void LnkT302(){ call_or_link(VV[302],(void **)&Lnk302);} /* Defclass UNBOUND-VARIABLE1906 */
static void LnkT301(){ call_or_link(VV[301],(void **)&Lnk301);} /* Defclass CELL-ERROR1904 */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)&Lnk299,(void **)&Lclptr299);} /* PACKAGE-ERROR-MESSAGE */
static void LnkT298(ptr) object *ptr;{ call_or_link_closure(VV[298],(void **)&Lnk298,(void **)&Lclptr298);} /* PACKAGE-ERROR-PACKAGE */
static void LnkT297(){ call_or_link(VV[297],(void **)&Lnk297);} /* Defclass PACKAGE-ERROR1884 */
static void LnkT296(){ call_or_link(VV[296],(void **)&Lnk296);} /* Defclass FILE-ERROR1882 */
static void LnkT294(ptr) object *ptr;{ call_or_link_closure(VV[294],(void **)&Lnk294,(void **)&Lclptr294);} /* STREAM-ERROR-STREAM */
static void LnkT293(){ call_or_link(VV[293],(void **)&Lnk293);} /* Defclass END-OF-FILE1864 */
static void LnkT292(){ call_or_link(VV[292],(void **)&Lnk292);} /* Defclass STREAM-ERROR1862 */
static void LnkT291(){ call_or_link(VV[291],(void **)&Lnk291);} /* Defclass CONTROL-ERROR1861 */
static void LnkT290(){ call_or_link(VV[290],(void **)&Lnk290);} /* Defclass PROGRAM-ERROR1860 */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)&Lnk288,(void **)&Lclptr288);} /* CASE-FAILURE-POSSIBILITIES */
static void LnkT287(ptr) object *ptr;{ call_or_link_closure(VV[287],(void **)&Lnk287,(void **)&Lclptr287);} /* CASE-FAILURE-NAME */
static void LnkT286(){ call_or_link(VV[286],(void **)&Lnk286);} /* Defclass CASE-FAILURE1840 */
static void LnkT285(){ call_or_link(VV[285],(void **)&Lnk285);} /* Defclass SIMPLE-TYPE-ERROR1839 */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)&Lnk283,(void **)&Lclptr283);} /* TYPE-ERROR-EXPECTED-TYPE */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)&Lnk282,(void **)&Lclptr282);} /* TYPE-ERROR-DATUM */
static void LnkT281(){ call_or_link(VV[281],(void **)&Lnk281);} /* Defclass TYPE-ERROR1819 */
static void LnkT280(){ call_or_link(VV[280],(void **)&Lnk280);} /* Defclass STORAGE-EXHAUSTED1818 */
static void LnkT279(){ call_or_link(VV[279],(void **)&Lnk279);} /* Defclass STACK-OVERFLOW1817 */
static void LnkT278(){ call_or_link(VV[278],(void **)&Lnk278);} /* Defclass STORAGE-CONDITION1816 */
static void LnkT277(){ call_or_link(VV[277],(void **)&Lnk277);} /* Defclass SIMPLE-ERROR1815 */
static void LnkT276(){ call_or_link(VV[276],(void **)&Lnk276);} /* Defclass SIMPLE-WARNING1814 */
static void LnkT275(){ call_or_link(VV[275],(void **)&Lnk275);} /* LOAD-DEFMETHOD */
static void LnkT273(){ call_or_link(VV[273],(void **)&Lnk273);} /* SIMPLE-CONDITION-PRINTER */
static void LnkT13(){ call_or_link(VV[13],(void **)&Lnk13);} /* ERROR */
static void LnkT272(){ call_or_link(VV[272],(void **)&Lnk272);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT271(){ call_or_link(VV[271],(void **)&Lnk271);} /* STRUCTURE-DEF */
static void LnkT270(){ call_or_link(VV[270],(void **)&Lnk270);} /* STRUCTURE-SUBTYPE-P */
static void LnkT269(){ call_or_link(VV[269],(void **)&Lnk269);} /* PROCLAIM-DEFGENERIC */
static void LnkT268(){ call_or_link(VV[268],(void **)&Lnk268);} /* Defclass SIMPLE-CONDITION1794 */
static void LnkT266(ptr) object *ptr;{ call_or_link_closure(VV[266],(void **)&Lnk266,(void **)&Lclptr266);} /* SIMPLE-CONDITION-FORMAT-ARGUMENTS */
static void LnkT265(ptr) object *ptr;{ call_or_link_closure(VV[265],(void **)&Lnk265,(void **)&Lclptr265);} /* SIMPLE-CONDITION-FORMAT-STRING */
static void LnkT264(){ call_or_link(VV[264],(void **)&Lnk264);} /* Defclass ERROR1793 */
static void LnkT263(){ call_or_link(VV[263],(void **)&Lnk263);} /* Defclass SERIOUS-CONDITION1792 */
static void LnkT262(){ call_or_link(VV[262],(void **)&Lnk262);} /* Defclass WARNING1791 */
static void LnkT260(){ call_or_link(VV[260],(void **)&Lnk260);} /* REMOVE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

