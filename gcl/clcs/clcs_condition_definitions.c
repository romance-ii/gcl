
#include "cmpinclude.h"
#include "clcs_condition_definitions.h"
void init_clcs_condition_definitions(){do_init(VV);}
/*	local entry for function progn 'compile2195	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= (VV[1]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[1]->s.s_dbind)= vs_base[0];
	{object V2 = Cnil;
	VMR1(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2215	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{register object x= VV[0],V3= (VV[1]->s.s_dbind);
	while(V3!=Cnil)
	if(eql(x,V3->c.c_car)){
	goto T8;
	}else V3=V3->c.c_cdr;
	goto T5;}
	goto T8;
T8:;
	{register object x= VV[2],V4= (VV[1]->s.s_dbind);
	while(V4!=Cnil)
	if(eql(x,V4->c.c_car)){
	goto T9;
	}else V4=V4->c.c_cdr;
	goto T5;}
	goto T9;
T9:;
	{register object V5;
	register object V6;
	V5= VV[3];
	V6= CMPcar((V5));
	goto T14;
T14:;
	if(!(((V5))==Cnil)){
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
	V5= CMPcdr((V5));
	V6= CMPcar((V5));
	goto T14;}
	goto T10;
T10:;
	base[0]= VV[2];
	base[1]= (VV[1]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	(VV[1]->s.s_dbind)= vs_base[0];
	goto T5;
T5:;
	{object V7 = Cnil;
	VMR2(V7)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass WARNING2261	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[4];
	base[1]= VV[5];
	base[2]= VV[6];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile2277	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk337)();
	vs_top=sup;
	{object V8 = Cnil;
	VMR4(V8)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2294	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[7];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V10 = Cnil;
	VMR5(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2318	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	(void)(sputprop(VV[4],VV[9],Cnil));
	{object V11 = Cnil;
	VMR6(V11)}
	return Cnil;
}
/*	local entry for function progn 'compile2330	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	function definition for Defclass SERIOUS-CONDITION2350	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[10];
	base[1]= VV[5];
	base[2]= VV[11];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile2366	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk338)();
	vs_top=sup;
	{object V13 = Cnil;
	VMR9(V13)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2383	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V15 = Cnil;
	VMR10(V15)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2407	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	(void)(sputprop(VV[10],VV[9],Cnil));
	{object V16 = Cnil;
	VMR11(V16)}
	return Cnil;
}
/*	local entry for function progn 'compile2419	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V17 = Cnil;
	VMR12(V17)}
	return Cnil;
}
/*	function definition for Defclass ERROR2439	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[13];
	base[1]= VV[5];
	base[2]= VV[14];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile2455	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk339)();
	vs_top=sup;
	{object V18 = Cnil;
	VMR14(V18)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2472	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[15];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V20 = Cnil;
	VMR15(V20)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2496	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	(void)(sputprop(VV[13],VV[9],Cnil));
	{object V21 = Cnil;
	VMR16(V21)}
	return Cnil;
}
/*	local entry for function progn 'compile2508	*/

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
	(void) (*Lnk340)(Lclptr340);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V27;
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk341)(Lclptr341);
	vs_top=sup;
	V27= vs_base[0];
	 vs_top=base+2;
	 while(V27!=Cnil)
	 {vs_push((V27)->c.c_car);V27=(V27)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V28 = vs_base[0];
	VMR18(V28)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SIMPLE-CONDITION2536	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[16];
	base[1]= VV[5];
	base[2]= VV[17];
	V29= listA(9,VV[18],VV[19],VV[20],VV[21],VV[22],Cnil,VV[23],VV[24],VV[25]);
	base[4]= VV[26];
	base[5]= (VV[342]->s.s_gfdef);
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
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile2554	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk343)();
	vs_top=sup;
	{object V31 = Cnil;
	VMR20(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2571	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= VV[31];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V33 = Cnil;
	VMR21(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2595	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	(void)(sputprop(VV[16],VV[9],Cnil));
	{object V34 = Cnil;
	VMR22(V34)}
	return Cnil;
}
/*	local entry for function progn 'compile2611	*/

static object LI23()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[33];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
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
	vs_check;
	{object V36;
	V36=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T106;}
	vs_base=vs_top;
	L25(base);
	return;
	goto T106;
T106:;
	base[4]= (*(LnkLI345))(base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile2950	*/

static object LI26()

{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[52];
	base[4]= VV[53];
	V38= (VV[346]->s.s_gfdef);
	base[5]= listA(3,VV[54],V38,VV[55]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V39 = Cnil;
	VMR25(V39)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2958	*/

static object LI27()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V40 = Cnil;
	VMR26(V40)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-WARNING2978	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[56];
	base[1]= VV[5];
	base[2]= VV[57];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile2994	*/

static object LI29()

{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk348)();
	vs_top=sup;
	{object V41 = Cnil;
	VMR28(V41)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3011	*/

static object LI30()

{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[0]= VV[58];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V43 = Cnil;
	VMR29(V43)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3035	*/

static object LI31()

{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	(void)(sputprop(VV[56],VV[9],Cnil));
	{object V44 = Cnil;
	VMR30(V44)}
	return Cnil;
}
/*	local entry for function progn 'compile3047	*/

static object LI32()

{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V45 = Cnil;
	VMR31(V45)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-ERROR3067	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[59];
	base[1]= VV[5];
	base[2]= VV[60];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile3083	*/

static object LI34()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk349)();
	vs_top=sup;
	{object V46 = Cnil;
	VMR33(V46)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3100	*/

static object LI35()

{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]= VV[61];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V48 = Cnil;
	VMR34(V48)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3124	*/

static object LI36()

{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	(void)(sputprop(VV[59],VV[9],Cnil));
	{object V49 = Cnil;
	VMR35(V49)}
	return Cnil;
}
/*	local entry for function progn 'compile3136	*/

static object LI37()

{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V50 = Cnil;
	VMR36(V50)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-CONDITION3156	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[62];
	base[1]= VV[5];
	base[2]= VV[63];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile3172	*/

static object LI39()

{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	{object V51 = Cnil;
	VMR38(V51)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3189	*/

static object LI40()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]= VV[64];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V53 = Cnil;
	VMR39(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3213	*/

static object LI41()

{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	(void)(sputprop(VV[62],VV[9],Cnil));
	{object V54 = Cnil;
	VMR40(V54)}
	return Cnil;
}
/*	local entry for function progn 'compile3225	*/

static object LI42()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V55 = Cnil;
	VMR41(V55)}
	return Cnil;
}
/*	function definition for Defclass STACK-OVERFLOW3245	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[65];
	base[1]= VV[5];
	base[2]= VV[66];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile3261	*/

static object LI44()

{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk351)();
	vs_top=sup;
	{object V56 = Cnil;
	VMR43(V56)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3278	*/

static object LI45()

{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	base[0]= VV[67];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V58 = Cnil;
	VMR44(V58)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3302	*/

static object LI46()

{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	(void)(sputprop(VV[65],VV[9],Cnil));
	{object V59 = Cnil;
	VMR45(V59)}
	return Cnil;
}
/*	local entry for function progn 'compile3314	*/

static object LI47()

{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V60 = Cnil;
	VMR46(V60)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-EXHAUSTED3334	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[68];
	base[1]= VV[5];
	base[2]= VV[69];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile3350	*/

static object LI49()

{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk352)();
	vs_top=sup;
	{object V61 = Cnil;
	VMR48(V61)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3367	*/

static object LI50()

{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	base[0]= VV[70];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V63 = Cnil;
	VMR49(V63)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3391	*/

static object LI51()

{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)(sputprop(VV[68],VV[9],Cnil));
	{object V64 = Cnil;
	VMR50(V64)}
	return Cnil;
}
/*	local entry for function progn 'compile3403	*/

static object LI52()

{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V65 = Cnil;
	VMR51(V65)}
	return Cnil;
}
/*	function definition for Defclass TYPE-ERROR3423	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[71];
	base[1]= VV[5];
	base[2]= VV[72];
	V66= listA(9,VV[18],VV[73],VV[20],VV[74],VV[22],Cnil,VV[23],VV[75],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V66,listA(9,VV[18],VV[76],VV[20],VV[77],VV[22],Cnil,VV[23],VV[78],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile3441	*/

static object LI54()

{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk353)();
	vs_top=sup;
	{object V67 = Cnil;
	VMR53(V67)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3458	*/

static object LI55()

{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	base[0]= VV[79];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V69 = Cnil;
	VMR54(V69)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3482	*/

static object LI56()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	(void)(sputprop(VV[71],VV[9],Cnil));
	{object V70 = Cnil;
	VMR55(V70)}
	return Cnil;
}
/*	local entry for function progn 'compile3498	*/

static object LI57()

{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[80];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V71 = Cnil;
	VMR56(V71)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (TYPE-ERROR T))	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V72;
	V72=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T201;}
	vs_base=vs_top;
	L59(base);
	return;
	goto T201;
T201:;
	base[4]= base[3];
	base[5]= VV[81];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk354)(Lclptr354);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= base[2];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk355)(Lclptr355);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3845	*/

static object LI60()

{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[89];
	base[4]= VV[90];
	V76= (VV[356]->s.s_gfdef);
	base[5]= listA(3,VV[54],V76,VV[91]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V77 = Cnil;
	VMR58(V77)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3853	*/

static object LI61()

{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V78 = Cnil;
	VMR59(V78)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-TYPE-ERROR3873	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[92];
	base[1]= VV[5];
	base[2]= VV[93];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile3889	*/

static object LI63()

{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk357)();
	vs_top=sup;
	{object V79 = Cnil;
	VMR61(V79)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3906	*/

static object LI64()

{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= VV[94];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V81 = Cnil;
	VMR62(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3930	*/

static object LI65()

{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	(void)(sputprop(VV[92],VV[9],Cnil));
	{object V82 = Cnil;
	VMR63(V82)}
	return Cnil;
}
/*	local entry for function progn 'compile3942	*/

static object LI66()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V83 = Cnil;
	VMR64(V83)}
	return Cnil;
}
/*	function definition for Defclass CASE-FAILURE3962	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= VV[5];
	base[2]= VV[95];
	V84= listA(9,VV[18],VV[96],VV[20],VV[97],VV[22],Cnil,VV[23],VV[98],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V84,listA(9,VV[18],VV[99],VV[20],VV[100],VV[22],Cnil,VV[23],VV[101],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile3980	*/

static object LI68()

{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk358)();
	vs_top=sup;
	{object V85 = Cnil;
	VMR66(V85)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3997	*/

static object LI69()

{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	base[0]= VV[102];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V87 = Cnil;
	VMR67(V87)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4021	*/

static object LI70()

{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	(void)(sputprop(VV[40],VV[9],Cnil));
	{object V88 = Cnil;
	VMR68(V88)}
	return Cnil;
}
/*	local entry for function progn 'compile4037	*/

static object LI71()

{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[103];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V89 = Cnil;
	VMR69(V89)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (CASE-FAILURE T))	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	{object V90;
	V90=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T250;}
	vs_base=vs_top;
	L73(base);
	return;
	goto T250;
T250:;
	base[4]= base[3];
	base[5]= VV[104];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk354)(Lclptr354);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= base[2];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk359)(Lclptr359);
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= base[2];
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk360)(Lclptr360);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4384	*/

static object LI74()

{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[112];
	base[4]= VV[113];
	V94= (VV[361]->s.s_gfdef);
	base[5]= listA(3,VV[54],V94,VV[114]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V95 = Cnil;
	VMR71(V95)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4392	*/

static object LI75()

{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V96 = Cnil;
	VMR72(V96)}
	return Cnil;
}
/*	function definition for Defclass PROGRAM-ERROR4412	*/

static void L76()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[115];
	base[1]= VV[5];
	base[2]= VV[116];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile4428	*/

static object LI77()

{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk362)();
	vs_top=sup;
	{object V97 = Cnil;
	VMR74(V97)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4445	*/

static object LI78()

{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	base[0]= VV[117];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V99 = Cnil;
	VMR75(V99)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4469	*/

static object LI79()

{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	(void)(sputprop(VV[115],VV[9],Cnil));
	{object V100 = Cnil;
	VMR76(V100)}
	return Cnil;
}
/*	local entry for function progn 'compile4481	*/

static object LI80()

{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V101 = Cnil;
	VMR77(V101)}
	return Cnil;
}
/*	function definition for Defclass CONTROL-ERROR4501	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[118];
	base[1]= VV[5];
	base[2]= VV[119];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile4517	*/

static object LI82()

{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	{object V102 = Cnil;
	VMR79(V102)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4534	*/

static object LI83()

{	 VMB80 VMS80 VMV80
	goto TTL;
TTL:;
	base[0]= VV[120];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V104 = Cnil;
	VMR80(V104)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4558	*/

static object LI84()

{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)(sputprop(VV[118],VV[9],Cnil));
	{object V105 = Cnil;
	VMR81(V105)}
	return Cnil;
}
/*	local entry for function progn 'compile4570	*/

static object LI85()

{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	{object V106 = Cnil;
	VMR82(V106)}
	return Cnil;
}
/*	function definition for Defclass PARSE-ERROR4590	*/

static void L86()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[121];
	base[1]= VV[5];
	base[2]= VV[122];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile4606	*/

static object LI87()

{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk364)();
	vs_top=sup;
	{object V107 = Cnil;
	VMR84(V107)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4623	*/

static object LI88()

{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	base[0]= VV[123];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V109 = Cnil;
	VMR85(V109)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4647	*/

static object LI89()

{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	(void)(sputprop(VV[121],VV[9],Cnil));
	{object V110 = Cnil;
	VMR86(V110)}
	return Cnil;
}
/*	local entry for function progn 'compile4659	*/

static object LI90()

{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{object V111 = Cnil;
	VMR87(V111)}
	return Cnil;
}
/*	function definition for Defclass STREAM-ERROR4679	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[124];
	base[1]= VV[5];
	base[2]= VV[125];
	V112= listA(9,VV[18],VV[126],VV[20],VV[127],VV[22],Cnil,VV[23],VV[128],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V112,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile4696	*/

static object LI92()

{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk365)();
	vs_top=sup;
	{object V113 = Cnil;
	VMR89(V113)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4713	*/

static object LI93()

{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	base[0]= VV[129];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V115 = Cnil;
	VMR90(V115)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4737	*/

static object LI94()

{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	(void)(sputprop(VV[124],VV[9],Cnil));
	{object V116 = Cnil;
	VMR91(V116)}
	return Cnil;
}
/*	local entry for function progn 'compile4749	*/

static object LI95()

{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	{object V117 = Cnil;
	VMR92(V117)}
	return Cnil;
}
/*	function definition for Defclass END-OF-FILE4769	*/

static void L96()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[130];
	base[1]= VV[5];
	base[2]= VV[131];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile4785	*/

static object LI97()

{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk366)();
	vs_top=sup;
	{object V118 = Cnil;
	VMR94(V118)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4802	*/

static object LI98()

{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	base[0]= VV[132];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V120 = Cnil;
	VMR95(V120)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4826	*/

static object LI99()

{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	(void)(sputprop(VV[130],VV[9],Cnil));
	{object V121 = Cnil;
	VMR96(V121)}
	return Cnil;
}
/*	local entry for function progn 'compile4842	*/

static object LI100()

{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[133];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V122 = Cnil;
	VMR97(V122)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (END-OF-FILE T))	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{object V123;
	V123=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T340;}
	vs_base=vs_top;
	L102(base);
	return;
	goto T340;
T340:;
	base[4]= base[3];
	base[5]= VV[134];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk367)(Lclptr367);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5189	*/

static object LI103()

{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[142];
	base[4]= VV[143];
	V127= (VV[368]->s.s_gfdef);
	base[5]= listA(3,VV[54],V127,VV[144]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V128 = Cnil;
	VMR99(V128)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5197	*/

static object LI104()

{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V129 = Cnil;
	VMR100(V129)}
	return Cnil;
}
/*	function definition for Defclass FILE-ERROR5217	*/

static void L105()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[145];
	base[1]= VV[5];
	base[2]= VV[146];
	V130= listA(9,VV[18],VV[147],VV[20],VV[148],VV[22],Cnil,VV[23],VV[149],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V130,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile5234	*/

static object LI106()

{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk369)();
	vs_top=sup;
	{object V131 = Cnil;
	VMR102(V131)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5251	*/

static object LI107()

{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[150];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V133 = Cnil;
	VMR103(V133)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5275	*/

static object LI108()

{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	(void)(sputprop(VV[145],VV[9],Cnil));
	{object V134 = Cnil;
	VMR104(V134)}
	return Cnil;
}
/*	local entry for function progn 'compile5287	*/

static object LI109()

{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V135 = Cnil;
	VMR105(V135)}
	return Cnil;
}
/*	function definition for Defclass PACKAGE-ERROR5307	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[151];
	base[1]= VV[5];
	base[2]= VV[152];
	V136= listA(9,VV[18],VV[153],VV[20],VV[154],VV[22],Cnil,VV[23],VV[155],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V136,listA(9,VV[18],VV[156],VV[20],VV[157],VV[22],Cnil,VV[23],VV[158],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile5325	*/

static object LI111()

{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk370)();
	vs_top=sup;
	{object V137 = Cnil;
	VMR107(V137)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5342	*/

static object LI112()

{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	base[0]= VV[159];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V139 = Cnil;
	VMR108(V139)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5366	*/

static object LI113()

{	 VMB109 VMS109 VMV109
	goto TTL;
TTL:;
	(void)(sputprop(VV[151],VV[9],Cnil));
	{object V140 = Cnil;
	VMR109(V140)}
	return Cnil;
}
/*	local entry for function progn 'compile5382	*/

static object LI114()

{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[160];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V141 = Cnil;
	VMR110(V141)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (PACKAGE-ERROR T))	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{object V142;
	V142=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T387;}
	vs_base=vs_top;
	L116(base);
	return;
	goto T387;
T387:;
	base[4]= base[3];
	base[5]= VV[161];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk371)(Lclptr371);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= base[2];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5729	*/

static object LI117()

{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[169];
	base[4]= VV[170];
	V146= (VV[373]->s.s_gfdef);
	base[5]= listA(3,VV[54],V146,VV[171]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V147 = Cnil;
	VMR112(V147)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5737	*/

static object LI118()

{	 VMB113 VMS113 VMV113
	goto TTL;
TTL:;
	{object V148 = Cnil;
	VMR113(V148)}
	return Cnil;
}
/*	function definition for Defclass CELL-ERROR5757	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[172];
	base[1]= VV[5];
	base[2]= VV[173];
	V149= listA(9,VV[18],VV[96],VV[20],VV[174],VV[22],Cnil,VV[23],VV[175],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V149,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile5774	*/

static object LI120()

{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk374)();
	vs_top=sup;
	{object V150 = Cnil;
	VMR115(V150)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5791	*/

static object LI121()

{	 VMB116 VMS116 VMV116
	goto TTL;
TTL:;
	base[0]= VV[176];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V152 = Cnil;
	VMR116(V152)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5815	*/

static object LI122()

{	 VMB117 VMS117 VMV117
	goto TTL;
TTL:;
	(void)(sputprop(VV[172],VV[9],Cnil));
	{object V153 = Cnil;
	VMR117(V153)}
	return Cnil;
}
/*	local entry for function progn 'compile5827	*/

static object LI123()

{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	{object V154 = Cnil;
	VMR118(V154)}
	return Cnil;
}
/*	function definition for Defclass UNBOUND-VARIABLE5847	*/

static void L124()
{register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[177];
	base[1]= VV[5];
	base[2]= VV[178];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile5863	*/

static object LI125()

{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk375)();
	vs_top=sup;
	{object V155 = Cnil;
	VMR120(V155)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5880	*/

static object LI126()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	base[0]= VV[179];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V157 = Cnil;
	VMR121(V157)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5904	*/

static object LI127()

{	 VMB122 VMS122 VMV122
	goto TTL;
TTL:;
	(void)(sputprop(VV[177],VV[9],Cnil));
	{object V158 = Cnil;
	VMR122(V158)}
	return Cnil;
}
/*	local entry for function progn 'compile5920	*/

static object LI128()

{	 VMB123 VMS123 VMV123
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[180];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V159 = Cnil;
	VMR123(V159)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNBOUND-VARIABLE T))	*/

static void L129()
{register object *base=vs_base;
	register object *sup=base+VM124; VC124
	vs_check;
	{object V160;
	V160=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T436;}
	vs_base=vs_top;
	L130(base);
	return;
	goto T436;
T436:;
	base[4]= base[3];
	base[5]= VV[181];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk376)(Lclptr376);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile6267	*/

static object LI131()

{	 VMB125 VMS125 VMV125
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[189];
	base[4]= VV[190];
	V164= (VV[377]->s.s_gfdef);
	base[5]= listA(3,VV[54],V164,VV[191]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V165 = Cnil;
	VMR125(V165)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6275	*/

static object LI132()

{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	{object V166 = Cnil;
	VMR126(V166)}
	return Cnil;
}
/*	function definition for Defclass UNDEFINED-FUNCTION6295	*/

static void L133()
{register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[192];
	base[1]= VV[5];
	base[2]= VV[193];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile6311	*/

static object LI134()

{	 VMB128 VMS128 VMV128
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	{object V167 = Cnil;
	VMR128(V167)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6328	*/

static object LI135()

{	 VMB129 VMS129 VMV129
	goto TTL;
TTL:;
	base[0]= VV[194];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V169 = Cnil;
	VMR129(V169)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6352	*/

static object LI136()

{	 VMB130 VMS130 VMV130
	goto TTL;
TTL:;
	(void)(sputprop(VV[192],VV[9],Cnil));
	{object V170 = Cnil;
	VMR130(V170)}
	return Cnil;
}
/*	local entry for function progn 'compile6368	*/

static object LI137()

{	 VMB131 VMS131 VMV131
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[195];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V171 = Cnil;
	VMR131(V171)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNDEFINED-FUNCTION T))	*/

static void L138()
{register object *base=vs_base;
	register object *sup=base+VM132; VC132
	vs_check;
	{object V172;
	V172=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T470;}
	vs_base=vs_top;
	L139(base);
	return;
	goto T470;
T470:;
	base[4]= base[3];
	base[5]= VV[196];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk376)(Lclptr376);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile6715	*/

static object LI140()

{	 VMB133 VMS133 VMV133
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[204];
	base[4]= VV[205];
	V176= (VV[379]->s.s_gfdef);
	base[5]= listA(3,VV[54],V176,VV[206]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V177 = Cnil;
	VMR133(V177)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6723	*/

static object LI141()

{	 VMB134 VMS134 VMV134
	goto TTL;
TTL:;
	{object V178 = Cnil;
	VMR134(V178)}
	return Cnil;
}
/*	function definition for Defclass ARITHMETIC-ERROR6743	*/

static void L142()
{register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[207];
	base[1]= VV[5];
	base[2]= VV[208];
	V179= listA(9,VV[18],VV[209],VV[20],VV[210],VV[22],Cnil,VV[23],VV[211],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V179,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile6760	*/

static object LI143()

{	 VMB136 VMS136 VMV136
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk380)();
	vs_top=sup;
	{object V180 = Cnil;
	VMR136(V180)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6777	*/

static object LI144()

{	 VMB137 VMS137 VMV137
	goto TTL;
TTL:;
	base[0]= VV[212];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V182 = Cnil;
	VMR137(V182)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6801	*/

static object LI145()

{	 VMB138 VMS138 VMV138
	goto TTL;
TTL:;
	(void)(sputprop(VV[207],VV[9],Cnil));
	{object V183 = Cnil;
	VMR138(V183)}
	return Cnil;
}
/*	local entry for function progn 'compile6813	*/

static object LI146()

{	 VMB139 VMS139 VMV139
	goto TTL;
TTL:;
	{object V184 = Cnil;
	VMR139(V184)}
	return Cnil;
}
/*	function definition for Defclass DIVISION-BY-ZERO6833	*/

static void L147()
{register object *base=vs_base;
	register object *sup=base+VM140; VC140
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[213];
	base[1]= VV[5];
	base[2]= VV[214];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile6849	*/

static object LI148()

{	 VMB141 VMS141 VMV141
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk381)();
	vs_top=sup;
	{object V185 = Cnil;
	VMR141(V185)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6866	*/

static object LI149()

{	 VMB142 VMS142 VMV142
	goto TTL;
TTL:;
	base[0]= VV[215];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V187 = Cnil;
	VMR142(V187)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6890	*/

static object LI150()

{	 VMB143 VMS143 VMV143
	goto TTL;
TTL:;
	(void)(sputprop(VV[213],VV[9],Cnil));
	{object V188 = Cnil;
	VMR143(V188)}
	return Cnil;
}
/*	local entry for function progn 'compile6902	*/

static object LI151()

{	 VMB144 VMS144 VMV144
	goto TTL;
TTL:;
	{object V189 = Cnil;
	VMR144(V189)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-OVERFLOW6922	*/

static void L152()
{register object *base=vs_base;
	register object *sup=base+VM145; VC145
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[216];
	base[1]= VV[5];
	base[2]= VV[217];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile6938	*/

static object LI153()

{	 VMB146 VMS146 VMV146
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk382)();
	vs_top=sup;
	{object V190 = Cnil;
	VMR146(V190)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6955	*/

static object LI154()

{	 VMB147 VMS147 VMV147
	goto TTL;
TTL:;
	base[0]= VV[218];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V192 = Cnil;
	VMR147(V192)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6979	*/

static object LI155()

{	 VMB148 VMS148 VMV148
	goto TTL;
TTL:;
	(void)(sputprop(VV[216],VV[9],Cnil));
	{object V193 = Cnil;
	VMR148(V193)}
	return Cnil;
}
/*	local entry for function progn 'compile6991	*/

static object LI156()

{	 VMB149 VMS149 VMV149
	goto TTL;
TTL:;
	{object V194 = Cnil;
	VMR149(V194)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-UNDERFLOW7011	*/

static void L157()
{register object *base=vs_base;
	register object *sup=base+VM150; VC150
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[219];
	base[1]= VV[5];
	base[2]= VV[220];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile7027	*/

static object LI158()

{	 VMB151 VMS151 VMV151
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk383)();
	vs_top=sup;
	{object V195 = Cnil;
	VMR151(V195)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7044	*/

static object LI159()

{	 VMB152 VMS152 VMV152
	goto TTL;
TTL:;
	base[0]= VV[221];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V197 = Cnil;
	VMR152(V197)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7068	*/

static object LI160()

{	 VMB153 VMS153 VMV153
	goto TTL;
TTL:;
	(void)(sputprop(VV[219],VV[9],Cnil));
	{object V198 = Cnil;
	VMR153(V198)}
	return Cnil;
}
/*	local entry for function progn 'compile7080	*/

static object LI161()

{	 VMB154 VMS154 VMV154
	goto TTL;
TTL:;
	{object V199 = Cnil;
	VMR154(V199)}
	return Cnil;
}
/*	function definition for Defclass ABORT-FAILURE7100	*/

static void L162()
{register object *base=vs_base;
	register object *sup=base+VM155; VC155
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[222];
	base[1]= VV[5];
	base[2]= VV[223];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile7116	*/

static object LI163()

{	 VMB156 VMS156 VMV156
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk384)();
	vs_top=sup;
	{object V200 = Cnil;
	VMR156(V200)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7133	*/

static object LI164()

{	 VMB157 VMS157 VMV157
	goto TTL;
TTL:;
	base[0]= VV[224];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V202 = Cnil;
	VMR157(V202)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7157	*/

static object LI165()

{	 VMB158 VMS158 VMV158
	goto TTL;
TTL:;
	(void)(sputprop(VV[222],VV[9],Cnil));
	{object V203 = Cnil;
	VMR158(V203)}
	return Cnil;
}
/*	local entry for function progn 'compile7173	*/

static object LI166()

{	 VMB159 VMS159 VMV159
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[225];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V204 = Cnil;
	VMR159(V204)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (ABORT-FAILURE T))	*/

static void L167()
{register object *base=vs_base;
	register object *sup=base+VM160; VC160
	vs_check;
	{object V205;
	V205=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T556;}
	vs_base=vs_top;
	L168(base);
	return;
	goto T556;
T556:;
	base[4]= VV[226];
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	Lwrite_string();
	return;
	}
}
/*	local entry for function progn 'compile7528	*/

static object LI169()

{	 VMB161 VMS161 VMV161
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[234];
	base[4]= VV[235];
	V209= (VV[385]->s.s_gfdef);
	base[5]= listA(3,VV[54],V209,VV[236]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V210 = Cnil;
	VMR161(V210)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7536	*/

static object LI170()

{	 VMB162 VMS162 VMV162
	goto TTL;
TTL:;
	{object V211 = Cnil;
	VMR162(V211)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-WARNING7556	*/

static void L171()
{register object *base=vs_base;
	register object *sup=base+VM163; VC163
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[237];
	base[1]= VV[5];
	base[2]= VV[238];
	base[4]= VV[26];
	base[5]= (VV[342]->s.s_gfdef);
	base[6]= VV[18];
	base[7]= VV[239];
	base[8]= VV[20];
	base[9]= VV[240];
	base[10]= VV[22];
	base[11]= Cnil;
	base[12]= VV[23];
	base[13]= VV[241];
	base[14]= VV[242];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V212= vs_base[0];
	base[3]= make_cons(V212,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile7573	*/

static object LI172()

{	 VMB164 VMS164 VMV164
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk386)();
	vs_top=sup;
	{object V213 = Cnil;
	VMR164(V213)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7590	*/

static object LI173()

{	 VMB165 VMS165 VMV165
	goto TTL;
TTL:;
	base[0]= VV[243];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V215 = Cnil;
	VMR165(V215)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7614	*/

static object LI174()

{	 VMB166 VMS166 VMV166
	goto TTL;
TTL:;
	(void)(sputprop(VV[237],VV[9],Cnil));
	{object V216 = Cnil;
	VMR166(V216)}
	return Cnil;
}
/*	local entry for function progn 'compile7630	*/

static object LI175()

{	 VMB167 VMS167 VMV167
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[244];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V217 = Cnil;
	VMR167(V217)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-WARNING T))	*/

static void L176()
{register object *base=vs_base;
	register object *sup=base+VM168; VC168
	vs_check;
	{object V218;
	V218=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T600;}
	vs_base=vs_top;
	L177(base);
	return;
	goto T600;
T600:;
	base[4]= base[2];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T602;}
	base[4]= base[3];
	base[5]= VV[245];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T602;
T602:;
	vs_base=vs_top;
	L177(base);
	return;
	}
}
/*	local entry for function progn 'compile7985	*/

static object LI178()

{	 VMB169 VMS169 VMV169
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[253];
	base[4]= VV[254];
	V222= (VV[388]->s.s_gfdef);
	base[5]= listA(3,VV[54],V222,VV[255]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V223 = Cnil;
	VMR169(V223)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7993	*/

static object LI179()

{	 VMB170 VMS170 VMV170
	goto TTL;
TTL:;
	{object V224 = Cnil;
	VMR170(V224)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-ERROR8013	*/

static void L180()
{register object *base=vs_base;
	register object *sup=base+VM171; VC171
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[256];
	base[1]= VV[5];
	base[2]= VV[257];
	base[4]= VV[26];
	base[5]= (VV[342]->s.s_gfdef);
	base[6]= VV[18];
	base[7]= VV[239];
	base[8]= VV[20];
	base[9]= VV[258];
	base[10]= VV[22];
	base[11]= Cnil;
	base[12]= VV[23];
	base[13]= VV[259];
	base[14]= VV[260];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V225= vs_base[0];
	base[3]= make_cons(V225,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile8030	*/

static object LI181()

{	 VMB172 VMS172 VMV172
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk389)();
	vs_top=sup;
	{object V226 = Cnil;
	VMR172(V226)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8047	*/

static object LI182()

{	 VMB173 VMS173 VMV173
	goto TTL;
TTL:;
	base[0]= VV[261];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V228 = Cnil;
	VMR173(V228)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8071	*/

static object LI183()

{	 VMB174 VMS174 VMV174
	goto TTL;
TTL:;
	(void)(sputprop(VV[256],VV[9],Cnil));
	{object V229 = Cnil;
	VMR174(V229)}
	return Cnil;
}
/*	local entry for function progn 'compile8087	*/

static object LI184()

{	 VMB175 VMS175 VMV175
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[262];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V230 = Cnil;
	VMR175(V230)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-ERROR T))	*/

static void L185()
{register object *base=vs_base;
	register object *sup=base+VM176; VC176
	vs_check;
	{object V231;
	V231=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T650;}
	vs_base=vs_top;
	L186(base);
	return;
	goto T650;
T650:;
	base[4]= base[2];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T652;}
	base[4]= base[3];
	base[5]= VV[263];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T652;
T652:;
	vs_base=vs_top;
	L186(base);
	return;
	}
}
/*	local entry for function progn 'compile8442	*/

static object LI187()

{	 VMB177 VMS177 VMV177
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[271];
	base[4]= VV[272];
	V235= (VV[390]->s.s_gfdef);
	base[5]= listA(3,VV[54],V235,VV[273]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V236 = Cnil;
	VMR177(V236)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8450	*/

static object LI188()

{	 VMB178 VMS178 VMV178
	goto TTL;
TTL:;
	{object V237 = Cnil;
	VMR178(V237)}
	return Cnil;
}
/*	local entry for function INTERNAL-SIMPLE-ERROR-PRINTER	*/

static object LI189(V240,V241)

register object V240;object V241;
{	 VMB179 VMS179 VMV179
	goto TTL;
TTL:;
	base[0]= (V240);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T670;}
	base[0]= (V241);
	base[1]= VV[274];
	base[3]= (V240);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T670;
T670:;
	base[0]= (V241);
	base[2]= (V240);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk340)(Lclptr340);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V242;
	base[2]= (V240);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk341)(Lclptr341);
	vs_top=sup;
	V242= vs_base[0];
	 vs_top=base+2;
	 while(V242!=Cnil)
	 {vs_push((V242)->c.c_car);V242=(V242)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V243 = vs_base[0];
	VMR179(V243)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INTERNAL-SIMPLE-WARNING-PRINTER	*/

static void L190()
{register object *base=vs_base;
	register object *sup=base+VM180; VC180
	vs_check;
	{register object V244;
	object V245;
	V244=(base[0]);
	V245=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V244);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T683;}
	base[2]= (V245);
	base[3]= VV[275];
	base[5]= (V244);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T683;
T683:;
	base[2]= (V245);
	base[4]= (V244);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk340)(Lclptr340);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V246;
	base[4]= (V244);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk341)(Lclptr341);
	vs_top=sup;
	V246= vs_base[0];
	 vs_top=base+4;
	 while(V246!=Cnil)
	 {vs_push((V246)->c.c_car);V246=(V246)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	return;
	}
}
/*	function definition for Defclass INTERNAL-SIMPLE-ERROR8494	*/

static void L191()
{register object *base=vs_base;
	register object *sup=base+VM181; VC181
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[276];
	base[1]= VV[5];
	base[2]= VV[277];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile8510	*/

static object LI192()

{	 VMB182 VMS182 VMV182
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk391)();
	vs_top=sup;
	{object V247 = Cnil;
	VMR182(V247)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8527	*/

static object LI193()

{	 VMB183 VMS183 VMV183
	goto TTL;
TTL:;
	base[0]= VV[278];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V249 = Cnil;
	VMR183(V249)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8551	*/

static object LI194()

{	 VMB184 VMS184 VMV184
	goto TTL;
TTL:;
	(void)(sputprop(VV[276],VV[9],Cnil));
	{object V250 = Cnil;
	VMR184(V250)}
	return Cnil;
}
/*	local entry for function progn 'compile8567	*/

static object LI195()

{	 VMB185 VMS185 VMV185
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[279];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V251 = Cnil;
	VMR185(V251)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-ERROR T))	*/

static void L196()
{register object *base=vs_base;
	register object *sup=base+VM186; VC186
	vs_check;
	{object V252;
	V252=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T714;}
	vs_base=vs_top;
	L197(base);
	return;
	goto T714;
T714:;
	base[4]= (*(LnkLI392))(base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile8906	*/

static object LI198()

{	 VMB187 VMS187 VMV187
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[287];
	base[4]= VV[288];
	V254= (VV[393]->s.s_gfdef);
	base[5]= listA(3,VV[54],V254,VV[289]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V255 = Cnil;
	VMR187(V255)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8914	*/

static object LI199()

{	 VMB188 VMS188 VMV188
	goto TTL;
TTL:;
	{object V256 = Cnil;
	VMR188(V256)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-WARNING8934	*/

static void L200()
{register object *base=vs_base;
	register object *sup=base+VM189; VC189
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[290];
	base[1]= VV[5];
	base[2]= VV[291];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile8950	*/

static object LI201()

{	 VMB190 VMS190 VMV190
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk394)();
	vs_top=sup;
	{object V257 = Cnil;
	VMR190(V257)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8967	*/

static object LI202()

{	 VMB191 VMS191 VMV191
	goto TTL;
TTL:;
	base[0]= VV[292];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V259 = Cnil;
	VMR191(V259)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8991	*/

static object LI203()

{	 VMB192 VMS192 VMV192
	goto TTL;
TTL:;
	(void)(sputprop(VV[290],VV[9],Cnil));
	{object V260 = Cnil;
	VMR192(V260)}
	return Cnil;
}
/*	local entry for function progn 'compile9007	*/

static object LI204()

{	 VMB193 VMS193 VMV193
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[293];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V261 = Cnil;
	VMR193(V261)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-WARNING T))	*/

static void L205()
{register object *base=vs_base;
	register object *sup=base+VM194; VC194
	vs_check;
	{object V262;
	V262=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T744;}
	vs_base=vs_top;
	L206(base);
	return;
	goto T744;
T744:;
	base[4]= base[2];
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk395)();
	return;
	}
}
/*	local entry for function progn 'compile9346	*/

static object LI207()

{	 VMB195 VMS195 VMV195
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[301];
	base[4]= VV[302];
	V264= (VV[396]->s.s_gfdef);
	base[5]= listA(3,VV[54],V264,VV[303]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk347)();
	vs_top=sup;
	{object V265 = Cnil;
	VMR195(V265)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9354	*/

static object LI208()

{	 VMB196 VMS196 VMV196
	goto TTL;
TTL:;
	{object V266 = Cnil;
	VMR196(V266)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-TYPE-ERROR9374	*/

static void L209()
{register object *base=vs_base;
	register object *sup=base+VM197; VC197
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[304];
	base[1]= VV[5];
	base[2]= VV[305];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile9390	*/

static object LI210()

{	 VMB198 VMS198 VMV198
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk397)();
	vs_top=sup;
	{object V267 = Cnil;
	VMR198(V267)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9407	*/

static object LI211()

{	 VMB199 VMS199 VMV199
	goto TTL;
TTL:;
	base[0]= VV[306];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V269 = Cnil;
	VMR199(V269)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9431	*/

static object LI212()

{	 VMB200 VMS200 VMV200
	goto TTL;
TTL:;
	(void)(sputprop(VV[304],VV[9],Cnil));
	{object V270 = Cnil;
	VMR200(V270)}
	return Cnil;
}
/*	local entry for function progn 'compile9443	*/

static object LI213()

{	 VMB201 VMS201 VMV201
	goto TTL;
TTL:;
	{object V271 = Cnil;
	VMR201(V271)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-PACKAGE-ERROR9463	*/

static void L214()
{register object *base=vs_base;
	register object *sup=base+VM202; VC202
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[307];
	base[1]= VV[5];
	base[2]= VV[308];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile9479	*/

static object LI215()

{	 VMB203 VMS203 VMV203
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk398)();
	vs_top=sup;
	{object V272 = Cnil;
	VMR203(V272)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9496	*/

static object LI216()

{	 VMB204 VMS204 VMV204
	goto TTL;
TTL:;
	base[0]= VV[309];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V274 = Cnil;
	VMR204(V274)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9520	*/

static object LI217()

{	 VMB205 VMS205 VMV205
	goto TTL;
TTL:;
	(void)(sputprop(VV[307],VV[9],Cnil));
	{object V275 = Cnil;
	VMR205(V275)}
	return Cnil;
}
/*	local entry for function progn 'compile9532	*/

static object LI218()

{	 VMB206 VMS206 VMV206
	goto TTL;
TTL:;
	{object V276 = Cnil;
	VMR206(V276)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PROGRAM-ERROR9552	*/

static void L219()
{register object *base=vs_base;
	register object *sup=base+VM207; VC207
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[310];
	base[1]= VV[5];
	base[2]= VV[311];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile9568	*/

static object LI220()

{	 VMB208 VMS208 VMV208
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk399)();
	vs_top=sup;
	{object V277 = Cnil;
	VMR208(V277)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9585	*/

static object LI221()

{	 VMB209 VMS209 VMV209
	goto TTL;
TTL:;
	base[0]= VV[312];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V279 = Cnil;
	VMR209(V279)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9609	*/

static object LI222()

{	 VMB210 VMS210 VMV210
	goto TTL;
TTL:;
	(void)(sputprop(VV[310],VV[9],Cnil));
	{object V280 = Cnil;
	VMR210(V280)}
	return Cnil;
}
/*	local entry for function progn 'compile9621	*/

static object LI223()

{	 VMB211 VMS211 VMV211
	goto TTL;
TTL:;
	{object V281 = Cnil;
	VMR211(V281)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PARSE-ERROR9641	*/

static void L224()
{register object *base=vs_base;
	register object *sup=base+VM212; VC212
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[313];
	base[1]= VV[5];
	base[2]= VV[314];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile9657	*/

static object LI225()

{	 VMB213 VMS213 VMV213
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk400)();
	vs_top=sup;
	{object V282 = Cnil;
	VMR213(V282)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9674	*/

static object LI226()

{	 VMB214 VMS214 VMV214
	goto TTL;
TTL:;
	base[0]= VV[315];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V284 = Cnil;
	VMR214(V284)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9698	*/

static object LI227()

{	 VMB215 VMS215 VMV215
	goto TTL;
TTL:;
	(void)(sputprop(VV[313],VV[9],Cnil));
	{object V285 = Cnil;
	VMR215(V285)}
	return Cnil;
}
/*	local entry for function progn 'compile9710	*/

static object LI228()

{	 VMB216 VMS216 VMV216
	goto TTL;
TTL:;
	{object V286 = Cnil;
	VMR216(V286)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-CONTROL-ERROR9730	*/

static void L229()
{register object *base=vs_base;
	register object *sup=base+VM217; VC217
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[316];
	base[1]= VV[5];
	base[2]= VV[317];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile9746	*/

static object LI230()

{	 VMB218 VMS218 VMV218
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk401)();
	vs_top=sup;
	{object V287 = Cnil;
	VMR218(V287)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9763	*/

static object LI231()

{	 VMB219 VMS219 VMV219
	goto TTL;
TTL:;
	base[0]= VV[318];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V289 = Cnil;
	VMR219(V289)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9787	*/

static object LI232()

{	 VMB220 VMS220 VMV220
	goto TTL;
TTL:;
	(void)(sputprop(VV[316],VV[9],Cnil));
	{object V290 = Cnil;
	VMR220(V290)}
	return Cnil;
}
/*	local entry for function progn 'compile9799	*/

static object LI233()

{	 VMB221 VMS221 VMV221
	goto TTL;
TTL:;
	{object V291 = Cnil;
	VMR221(V291)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNBOUND-VARIABLE9819	*/

static void L234()
{register object *base=vs_base;
	register object *sup=base+VM222; VC222
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[319];
	base[1]= VV[5];
	base[2]= VV[320];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile9835	*/

static object LI235()

{	 VMB223 VMS223 VMV223
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk402)();
	vs_top=sup;
	{object V292 = Cnil;
	VMR223(V292)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9852	*/

static object LI236()

{	 VMB224 VMS224 VMV224
	goto TTL;
TTL:;
	base[0]= VV[321];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V294 = Cnil;
	VMR224(V294)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9876	*/

static object LI237()

{	 VMB225 VMS225 VMV225
	goto TTL;
TTL:;
	(void)(sputprop(VV[319],VV[9],Cnil));
	{object V295 = Cnil;
	VMR225(V295)}
	return Cnil;
}
/*	local entry for function progn 'compile9888	*/

static object LI238()

{	 VMB226 VMS226 VMV226
	goto TTL;
TTL:;
	{object V296 = Cnil;
	VMR226(V296)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNDEFINED-FUNCTION9908	*/

static void L239()
{register object *base=vs_base;
	register object *sup=base+VM227; VC227
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[322];
	base[1]= VV[5];
	base[2]= VV[323];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile9924	*/

static object LI240()

{	 VMB228 VMS228 VMV228
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk403)();
	vs_top=sup;
	{object V297 = Cnil;
	VMR228(V297)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9941	*/

static object LI241()

{	 VMB229 VMS229 VMV229
	goto TTL;
TTL:;
	base[0]= VV[324];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V299 = Cnil;
	VMR229(V299)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile9965	*/

static object LI242()

{	 VMB230 VMS230 VMV230
	goto TTL;
TTL:;
	(void)(sputprop(VV[322],VV[9],Cnil));
	{object V300 = Cnil;
	VMR230(V300)}
	return Cnil;
}
/*	local entry for function progn 'compile9977	*/

static object LI243()

{	 VMB231 VMS231 VMV231
	goto TTL;
TTL:;
	{object V301 = Cnil;
	VMR231(V301)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-END-OF-FILE9997	*/

static void L244()
{register object *base=vs_base;
	register object *sup=base+VM232; VC232
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[325];
	base[1]= VV[5];
	base[2]= VV[326];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile10013	*/

static object LI245()

{	 VMB233 VMS233 VMV233
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk404)();
	vs_top=sup;
	{object V302 = Cnil;
	VMR233(V302)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10030	*/

static object LI246()

{	 VMB234 VMS234 VMV234
	goto TTL;
TTL:;
	base[0]= VV[327];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V304 = Cnil;
	VMR234(V304)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10054	*/

static object LI247()

{	 VMB235 VMS235 VMV235
	goto TTL;
TTL:;
	(void)(sputprop(VV[325],VV[9],Cnil));
	{object V305 = Cnil;
	VMR235(V305)}
	return Cnil;
}
/*	local entry for function progn 'compile10066	*/

static object LI248()

{	 VMB236 VMS236 VMV236
	goto TTL;
TTL:;
	{object V306 = Cnil;
	VMR236(V306)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-FILE-ERROR10086	*/

static void L249()
{register object *base=vs_base;
	register object *sup=base+VM237; VC237
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[328];
	base[1]= VV[5];
	base[2]= VV[329];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile10102	*/

static object LI250()

{	 VMB238 VMS238 VMV238
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk405)();
	vs_top=sup;
	{object V307 = Cnil;
	VMR238(V307)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10119	*/

static object LI251()

{	 VMB239 VMS239 VMV239
	goto TTL;
TTL:;
	base[0]= VV[330];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V309 = Cnil;
	VMR239(V309)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10143	*/

static object LI252()

{	 VMB240 VMS240 VMV240
	goto TTL;
TTL:;
	(void)(sputprop(VV[328],VV[9],Cnil));
	{object V310 = Cnil;
	VMR240(V310)}
	return Cnil;
}
/*	local entry for function progn 'compile10155	*/

static object LI253()

{	 VMB241 VMS241 VMV241
	goto TTL;
TTL:;
	{object V311 = Cnil;
	VMR241(V311)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-STREAM-ERROR10175	*/

static void L254()
{register object *base=vs_base;
	register object *sup=base+VM242; VC242
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[331];
	base[1]= VV[5];
	base[2]= VV[332];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[336],base+0,6);
	return;
}
/*	local entry for function progn 'compile10191	*/

static object LI255()

{	 VMB243 VMS243 VMV243
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk406)();
	vs_top=sup;
	{object V312 = Cnil;
	VMR243(V312)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10208	*/

static object LI256()

{	 VMB244 VMS244 VMV244
	goto TTL;
TTL:;
	base[0]= VV[333];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V314 = Cnil;
	VMR244(V314)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10232	*/

static object LI257()

{	 VMB245 VMS245 VMV245
	goto TTL;
TTL:;
	(void)(sputprop(VV[331],VV[9],Cnil));
	{object V315 = Cnil;
	VMR245(V315)}
	return Cnil;
}
/*	local entry for function progn 'compile10244	*/

static object LI258()

{	 VMB246 VMS246 VMV246
	goto TTL;
TTL:;
	{object V316 = Cnil;
	VMR246(V316)}
	return Cnil;
}
/*	local entry for function progn 'compile10260	*/

static object LI259()

{	 VMB247 VMS247 VMV247
	goto TTL;
TTL:;
	base[0]= VV[334];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk407)();
	vs_top=sup;
	{object V317 = Cnil;
	VMR247(V317)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10272	*/

static object LI260()

{	 VMB248 VMS248 VMV248
	goto TTL;
TTL:;
	if(!((VV[334])->s.s_dbind!=OBJNULL)){
	goto T891;}
	goto T890;
	goto T891;
T891:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk408)();
	vs_top=sup;
	(VV[334]->s.s_dbind)= vs_base[0];
	goto T890;
T890:;
	{object V318 = Cnil;
	VMR248(V318)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile10285	*/

static object LI261()

{	 VMB249 VMS249 VMV249
	goto TTL;
TTL:;
	{object V319 = Cnil;
	VMR249(V319)}
	return Cnil;
}
/*	local entry for function SIMPLE-CONDITION-CLASS-P	*/

static object LI262(V321)

register object V321;
{	 VMB250 VMS250 VMV250
	goto TTL;
TTL:;
	if(!(type_of((V321))==t_symbol)){
	goto T896;}
	base[0]= (V321);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk408)();
	vs_top=sup;
	V321= vs_base[0];
	goto T896;
T896:;
	base[0]= (V321);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk409)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T901;}
	{object V322 = Cnil;
	VMR250(V322)}
	goto T901;
T901:;{object V324;
	V324= (VV[334]->s.s_dbind);
	base[0]= (V321);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk410)(Lclptr410);
	vs_top=sup;
	V325= vs_base[0];
	{register object x= V324,V323= V325;
	while(V323!=Cnil)
	if(eql(x,V323->c.c_car)){
	{object V326 = V323;
	VMR250(V326)}
	}else V323=V323->c.c_cdr;
	{object V327 = Cnil;
	VMR250(V327)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CALL-NEXT-METHOD	*/

static void L206(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM251; VC251
	vs_check;
	{object V328;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V328=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T908;}
	if(((V328))==Cnil){
	goto T911;}
	{register object V329;
	register object V330;
	object V331;
	V329= (V328);
	{object V332;
	V332= CMPcar((V329));
	V329= CMPcdr((V329));
	V330= (V332);}
	{object V333;
	V333= CMPcar((V329));
	V329= CMPcdr((V329));
	V331= (V333);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T924;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V330);
	base[7]= (V331);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T924;
T924:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T934;}
	{object V335;
	if(type_of(V330)==t_structure){
	goto T940;}
	goto T938;
	goto T940;
T940:;
	if(!(((V330)->str.str_def)==(VV[294]))){
	goto T938;}
	V335= STREF(object,(V330),4);
	goto T936;
	goto T938;
T938:;{object V337;
	V337= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V330);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V338= vs_base[0];
	if(!((V337)==(CMPcar(V338)))){
	goto T943;}}
	V335= CMPcar(((V330))->cc.cc_turbo[12]);
	goto T936;
	goto T943;
T943:;
	V335= Cnil;
	goto T936;
T936:;
	if(((V335))==Cnil){
	goto T949;}
	base[3]= ((V335))->v.v_self[fix(base0[1])]= (V330);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T949;
T949:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T934;
T934:;
	{register object V340;
	V340= base0[1];
	base[3]= (V340);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T952;}
	{object V341;
	object V342;
	register object V343;
	V341= STREF(object,base0[1],0);
	V342= list(2,(V330),(V331));
	V343= STREF(object,base0[1],4);
	if(((V343))==Cnil){
	goto T960;}
	if((CMPcdr((V343)))!=Cnil){
	goto T960;}
	base[3]= (V342);
	base[4]= CMPcar((V343));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V341);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T960;
T960:;
	base[3]= (V341);
	base[4]= (V342);
	{object V344;
	V344= (V343);
	 vs_top=base+5;
	 while(V344!=Cnil)
	 {vs_push((V344)->c.c_car);V344=(V344)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T952;
T952:;
	base[3]= (V340);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T970;}
	base[3]= (V330);
	base[4]= (V331);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T970;
T970:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[295];
	base[10]= VV[45];
	base[11]= VV[296];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T911;
T911:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T986;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T986;
T986:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T996;}
	{object V346;
	if(type_of(base0[2])==t_structure){
	goto T1002;}
	goto T1000;
	goto T1002;
T1002:;
	if(!(((base0[2])->str.str_def)==(VV[297]))){
	goto T1000;}
	V346= STREF(object,base0[2],4);
	goto T998;
	goto T1000;
T1000:;{object V348;
	V348= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V349= vs_base[0];
	if(!((V348)==(CMPcar(V349)))){
	goto T1005;}}
	V346= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T998;
	goto T1005;
T1005:;
	V346= Cnil;
	goto T998;
T998:;
	if(((V346))==Cnil){
	goto T1011;}
	base[1]= ((V346))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1011;
T1011:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T996;
T996:;
	{register object V351;
	V351= base0[1];
	base[1]= (V351);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1014;}
	{object V352;
	object V353;
	register object V354;
	V352= STREF(object,base0[1],0);
	V353= list(2,base0[2],base0[3]);
	V354= STREF(object,base0[1],4);
	if(((V354))==Cnil){
	goto T1022;}
	if((CMPcdr((V354)))!=Cnil){
	goto T1022;}
	base[1]= (V353);
	base[2]= CMPcar((V354));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V352);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1022;
T1022:;
	base[1]= (V352);
	base[2]= (V353);
	{object V355;
	V355= (V354);
	 vs_top=base+3;
	 while(V355!=Cnil)
	 {vs_push((V355)->c.c_car);V355=(V355)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1014;
T1014:;
	base[1]= (V351);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1032;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1032;
T1032:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[298];
	base[8]= VV[45];
	base[9]= VV[299];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T908;
T908:;
	base[1]= VV[300];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L197(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM252; VC252
	vs_check;
	{object V356;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V356=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T1050;}
	if(((V356))==Cnil){
	goto T1053;}
	{register object V357;
	register object V358;
	object V359;
	V357= (V356);
	{object V360;
	V360= CMPcar((V357));
	V357= CMPcdr((V357));
	V358= (V360);}
	{object V361;
	V361= CMPcar((V357));
	V357= CMPcdr((V357));
	V359= (V361);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1066;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V358);
	base[7]= (V359);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1066;
T1066:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1076;}
	{object V363;
	if(type_of(V358)==t_structure){
	goto T1082;}
	goto T1080;
	goto T1082;
T1082:;
	if(!(((V358)->str.str_def)==(VV[280]))){
	goto T1080;}
	V363= STREF(object,(V358),4);
	goto T1078;
	goto T1080;
T1080:;{object V365;
	V365= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V358);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V366= vs_base[0];
	if(!((V365)==(CMPcar(V366)))){
	goto T1085;}}
	V363= CMPcar(((V358))->cc.cc_turbo[12]);
	goto T1078;
	goto T1085;
T1085:;
	V363= Cnil;
	goto T1078;
T1078:;
	if(((V363))==Cnil){
	goto T1091;}
	base[3]= ((V363))->v.v_self[fix(base0[1])]= (V358);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1091;
T1091:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1076;
T1076:;
	{register object V368;
	V368= base0[1];
	base[3]= (V368);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1094;}
	{object V369;
	object V370;
	register object V371;
	V369= STREF(object,base0[1],0);
	V370= list(2,(V358),(V359));
	V371= STREF(object,base0[1],4);
	if(((V371))==Cnil){
	goto T1102;}
	if((CMPcdr((V371)))!=Cnil){
	goto T1102;}
	base[3]= (V370);
	base[4]= CMPcar((V371));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V369);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1102;
T1102:;
	base[3]= (V369);
	base[4]= (V370);
	{object V372;
	V372= (V371);
	 vs_top=base+5;
	 while(V372!=Cnil)
	 {vs_push((V372)->c.c_car);V372=(V372)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1094;
T1094:;
	base[3]= (V368);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1112;}
	base[3]= (V358);
	base[4]= (V359);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1112;
T1112:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[281];
	base[10]= VV[45];
	base[11]= VV[282];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T1053;
T1053:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1128;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1128;
T1128:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1138;}
	{object V374;
	if(type_of(base0[2])==t_structure){
	goto T1144;}
	goto T1142;
	goto T1144;
T1144:;
	if(!(((base0[2])->str.str_def)==(VV[283]))){
	goto T1142;}
	V374= STREF(object,base0[2],4);
	goto T1140;
	goto T1142;
T1142:;{object V376;
	V376= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V377= vs_base[0];
	if(!((V376)==(CMPcar(V377)))){
	goto T1147;}}
	V374= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T1140;
	goto T1147;
T1147:;
	V374= Cnil;
	goto T1140;
T1140:;
	if(((V374))==Cnil){
	goto T1153;}
	base[1]= ((V374))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1153;
T1153:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1138;
T1138:;
	{register object V379;
	V379= base0[1];
	base[1]= (V379);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1156;}
	{object V380;
	object V381;
	register object V382;
	V380= STREF(object,base0[1],0);
	V381= list(2,base0[2],base0[3]);
	V382= STREF(object,base0[1],4);
	if(((V382))==Cnil){
	goto T1164;}
	if((CMPcdr((V382)))!=Cnil){
	goto T1164;}
	base[1]= (V381);
	base[2]= CMPcar((V382));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V380);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1164;
T1164:;
	base[1]= (V380);
	base[2]= (V381);
	{object V383;
	V383= (V382);
	 vs_top=base+3;
	 while(V383!=Cnil)
	 {vs_push((V383)->c.c_car);V383=(V383)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1156;
T1156:;
	base[1]= (V379);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1174;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1174;
T1174:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[284];
	base[8]= VV[45];
	base[9]= VV[285];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T1050;
T1050:;
	base[1]= VV[286];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L186(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM253; VC253
	vs_check;
	{object V384;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V384=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T1192;}
	if(((V384))==Cnil){
	goto T1195;}
	{register object V385;
	register object V386;
	object V387;
	V385= (V384);
	{object V388;
	V388= CMPcar((V385));
	V385= CMPcdr((V385));
	V386= (V388);}
	{object V389;
	V389= CMPcar((V385));
	V385= CMPcdr((V385));
	V387= (V389);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1208;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V386);
	base[7]= (V387);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1208;
T1208:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1218;}
	{object V391;
	if(type_of(V386)==t_structure){
	goto T1224;}
	goto T1222;
	goto T1224;
T1224:;
	if(!(((V386)->str.str_def)==(VV[264]))){
	goto T1222;}
	V391= STREF(object,(V386),4);
	goto T1220;
	goto T1222;
T1222:;{object V393;
	V393= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V386);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V394= vs_base[0];
	if(!((V393)==(CMPcar(V394)))){
	goto T1227;}}
	V391= CMPcar(((V386))->cc.cc_turbo[12]);
	goto T1220;
	goto T1227;
T1227:;
	V391= Cnil;
	goto T1220;
T1220:;
	if(((V391))==Cnil){
	goto T1233;}
	base[3]= ((V391))->v.v_self[fix(base0[1])]= (V386);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1233;
T1233:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1218;
T1218:;
	{register object V396;
	V396= base0[1];
	base[3]= (V396);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1236;}
	{object V397;
	object V398;
	register object V399;
	V397= STREF(object,base0[1],0);
	V398= list(2,(V386),(V387));
	V399= STREF(object,base0[1],4);
	if(((V399))==Cnil){
	goto T1244;}
	if((CMPcdr((V399)))!=Cnil){
	goto T1244;}
	base[3]= (V398);
	base[4]= CMPcar((V399));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V397);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1244;
T1244:;
	base[3]= (V397);
	base[4]= (V398);
	{object V400;
	V400= (V399);
	 vs_top=base+5;
	 while(V400!=Cnil)
	 {vs_push((V400)->c.c_car);V400=(V400)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1236;
T1236:;
	base[3]= (V396);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1254;}
	base[3]= (V386);
	base[4]= (V387);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1254;
T1254:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[265];
	base[10]= VV[45];
	base[11]= VV[266];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T1195;
T1195:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1270;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1270;
T1270:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1280;}
	{object V402;
	if(type_of(base0[2])==t_structure){
	goto T1286;}
	goto T1284;
	goto T1286;
T1286:;
	if(!(((base0[2])->str.str_def)==(VV[267]))){
	goto T1284;}
	V402= STREF(object,base0[2],4);
	goto T1282;
	goto T1284;
T1284:;{object V404;
	V404= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V405= vs_base[0];
	if(!((V404)==(CMPcar(V405)))){
	goto T1289;}}
	V402= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T1282;
	goto T1289;
T1289:;
	V402= Cnil;
	goto T1282;
T1282:;
	if(((V402))==Cnil){
	goto T1295;}
	base[1]= ((V402))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1295;
T1295:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1280;
T1280:;
	{register object V407;
	V407= base0[1];
	base[1]= (V407);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1298;}
	{object V408;
	object V409;
	register object V410;
	V408= STREF(object,base0[1],0);
	V409= list(2,base0[2],base0[3]);
	V410= STREF(object,base0[1],4);
	if(((V410))==Cnil){
	goto T1306;}
	if((CMPcdr((V410)))!=Cnil){
	goto T1306;}
	base[1]= (V409);
	base[2]= CMPcar((V410));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V408);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1306;
T1306:;
	base[1]= (V408);
	base[2]= (V409);
	{object V411;
	V411= (V410);
	 vs_top=base+3;
	 while(V411!=Cnil)
	 {vs_push((V411)->c.c_car);V411=(V411)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1298;
T1298:;
	base[1]= (V407);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1316;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1316;
T1316:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[268];
	base[8]= VV[45];
	base[9]= VV[269];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T1192;
T1192:;
	base[1]= VV[270];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L177(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM254; VC254
	vs_check;
	{object V412;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V412=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T1334;}
	if(((V412))==Cnil){
	goto T1337;}
	{register object V413;
	register object V414;
	object V415;
	V413= (V412);
	{object V416;
	V416= CMPcar((V413));
	V413= CMPcdr((V413));
	V414= (V416);}
	{object V417;
	V417= CMPcar((V413));
	V413= CMPcdr((V413));
	V415= (V417);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1350;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V414);
	base[7]= (V415);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1350;
T1350:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1360;}
	{object V419;
	if(type_of(V414)==t_structure){
	goto T1366;}
	goto T1364;
	goto T1366;
T1366:;
	if(!(((V414)->str.str_def)==(VV[246]))){
	goto T1364;}
	V419= STREF(object,(V414),4);
	goto T1362;
	goto T1364;
T1364:;{object V421;
	V421= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V414);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V422= vs_base[0];
	if(!((V421)==(CMPcar(V422)))){
	goto T1369;}}
	V419= CMPcar(((V414))->cc.cc_turbo[12]);
	goto T1362;
	goto T1369;
T1369:;
	V419= Cnil;
	goto T1362;
T1362:;
	if(((V419))==Cnil){
	goto T1375;}
	base[3]= ((V419))->v.v_self[fix(base0[1])]= (V414);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1375;
T1375:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1360;
T1360:;
	{register object V424;
	V424= base0[1];
	base[3]= (V424);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1378;}
	{object V425;
	object V426;
	register object V427;
	V425= STREF(object,base0[1],0);
	V426= list(2,(V414),(V415));
	V427= STREF(object,base0[1],4);
	if(((V427))==Cnil){
	goto T1386;}
	if((CMPcdr((V427)))!=Cnil){
	goto T1386;}
	base[3]= (V426);
	base[4]= CMPcar((V427));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V425);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1386;
T1386:;
	base[3]= (V425);
	base[4]= (V426);
	{object V428;
	V428= (V427);
	 vs_top=base+5;
	 while(V428!=Cnil)
	 {vs_push((V428)->c.c_car);V428=(V428)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1378;
T1378:;
	base[3]= (V424);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1396;}
	base[3]= (V414);
	base[4]= (V415);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1396;
T1396:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[247];
	base[10]= VV[45];
	base[11]= VV[248];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T1337;
T1337:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1412;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1412;
T1412:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1422;}
	{object V430;
	if(type_of(base0[2])==t_structure){
	goto T1428;}
	goto T1426;
	goto T1428;
T1428:;
	if(!(((base0[2])->str.str_def)==(VV[249]))){
	goto T1426;}
	V430= STREF(object,base0[2],4);
	goto T1424;
	goto T1426;
T1426:;{object V432;
	V432= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V433= vs_base[0];
	if(!((V432)==(CMPcar(V433)))){
	goto T1431;}}
	V430= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T1424;
	goto T1431;
T1431:;
	V430= Cnil;
	goto T1424;
T1424:;
	if(((V430))==Cnil){
	goto T1437;}
	base[1]= ((V430))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1437;
T1437:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1422;
T1422:;
	{register object V435;
	V435= base0[1];
	base[1]= (V435);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1440;}
	{object V436;
	object V437;
	register object V438;
	V436= STREF(object,base0[1],0);
	V437= list(2,base0[2],base0[3]);
	V438= STREF(object,base0[1],4);
	if(((V438))==Cnil){
	goto T1448;}
	if((CMPcdr((V438)))!=Cnil){
	goto T1448;}
	base[1]= (V437);
	base[2]= CMPcar((V438));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V436);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1448;
T1448:;
	base[1]= (V436);
	base[2]= (V437);
	{object V439;
	V439= (V438);
	 vs_top=base+3;
	 while(V439!=Cnil)
	 {vs_push((V439)->c.c_car);V439=(V439)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1440;
T1440:;
	base[1]= (V435);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1458;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1458;
T1458:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[250];
	base[8]= VV[45];
	base[9]= VV[251];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T1334;
T1334:;
	base[1]= VV[252];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L168(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM255; VC255
	vs_check;
	{object V440;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V440=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T1476;}
	if(((V440))==Cnil){
	goto T1479;}
	{register object V441;
	register object V442;
	object V443;
	V441= (V440);
	{object V444;
	V444= CMPcar((V441));
	V441= CMPcdr((V441));
	V442= (V444);}
	{object V445;
	V445= CMPcar((V441));
	V441= CMPcdr((V441));
	V443= (V445);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1492;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V442);
	base[7]= (V443);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1492;
T1492:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1502;}
	{object V447;
	if(type_of(V442)==t_structure){
	goto T1508;}
	goto T1506;
	goto T1508;
T1508:;
	if(!(((V442)->str.str_def)==(VV[227]))){
	goto T1506;}
	V447= STREF(object,(V442),4);
	goto T1504;
	goto T1506;
T1506:;{object V449;
	V449= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V442);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V450= vs_base[0];
	if(!((V449)==(CMPcar(V450)))){
	goto T1511;}}
	V447= CMPcar(((V442))->cc.cc_turbo[12]);
	goto T1504;
	goto T1511;
T1511:;
	V447= Cnil;
	goto T1504;
T1504:;
	if(((V447))==Cnil){
	goto T1517;}
	base[3]= ((V447))->v.v_self[fix(base0[1])]= (V442);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1517;
T1517:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1502;
T1502:;
	{register object V452;
	V452= base0[1];
	base[3]= (V452);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1520;}
	{object V453;
	object V454;
	register object V455;
	V453= STREF(object,base0[1],0);
	V454= list(2,(V442),(V443));
	V455= STREF(object,base0[1],4);
	if(((V455))==Cnil){
	goto T1528;}
	if((CMPcdr((V455)))!=Cnil){
	goto T1528;}
	base[3]= (V454);
	base[4]= CMPcar((V455));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V453);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1528;
T1528:;
	base[3]= (V453);
	base[4]= (V454);
	{object V456;
	V456= (V455);
	 vs_top=base+5;
	 while(V456!=Cnil)
	 {vs_push((V456)->c.c_car);V456=(V456)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1520;
T1520:;
	base[3]= (V452);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1538;}
	base[3]= (V442);
	base[4]= (V443);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1538;
T1538:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[228];
	base[10]= VV[45];
	base[11]= VV[229];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T1479;
T1479:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1554;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1554;
T1554:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1564;}
	{object V458;
	if(type_of(base0[2])==t_structure){
	goto T1570;}
	goto T1568;
	goto T1570;
T1570:;
	if(!(((base0[2])->str.str_def)==(VV[230]))){
	goto T1568;}
	V458= STREF(object,base0[2],4);
	goto T1566;
	goto T1568;
T1568:;{object V460;
	V460= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V461= vs_base[0];
	if(!((V460)==(CMPcar(V461)))){
	goto T1573;}}
	V458= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T1566;
	goto T1573;
T1573:;
	V458= Cnil;
	goto T1566;
T1566:;
	if(((V458))==Cnil){
	goto T1579;}
	base[1]= ((V458))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1579;
T1579:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1564;
T1564:;
	{register object V463;
	V463= base0[1];
	base[1]= (V463);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1582;}
	{object V464;
	object V465;
	register object V466;
	V464= STREF(object,base0[1],0);
	V465= list(2,base0[2],base0[3]);
	V466= STREF(object,base0[1],4);
	if(((V466))==Cnil){
	goto T1590;}
	if((CMPcdr((V466)))!=Cnil){
	goto T1590;}
	base[1]= (V465);
	base[2]= CMPcar((V466));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V464);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1590;
T1590:;
	base[1]= (V464);
	base[2]= (V465);
	{object V467;
	V467= (V466);
	 vs_top=base+3;
	 while(V467!=Cnil)
	 {vs_push((V467)->c.c_car);V467=(V467)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1582;
T1582:;
	base[1]= (V463);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1600;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1600;
T1600:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[231];
	base[8]= VV[45];
	base[9]= VV[232];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T1476;
T1476:;
	base[1]= VV[233];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L139(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM256; VC256
	vs_check;
	{object V468;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V468=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T1618;}
	if(((V468))==Cnil){
	goto T1621;}
	{register object V469;
	register object V470;
	object V471;
	V469= (V468);
	{object V472;
	V472= CMPcar((V469));
	V469= CMPcdr((V469));
	V470= (V472);}
	{object V473;
	V473= CMPcar((V469));
	V469= CMPcdr((V469));
	V471= (V473);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1634;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V470);
	base[7]= (V471);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1634;
T1634:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1644;}
	{object V475;
	if(type_of(V470)==t_structure){
	goto T1650;}
	goto T1648;
	goto T1650;
T1650:;
	if(!(((V470)->str.str_def)==(VV[197]))){
	goto T1648;}
	V475= STREF(object,(V470),4);
	goto T1646;
	goto T1648;
T1648:;{object V477;
	V477= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V470);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V478= vs_base[0];
	if(!((V477)==(CMPcar(V478)))){
	goto T1653;}}
	V475= CMPcar(((V470))->cc.cc_turbo[12]);
	goto T1646;
	goto T1653;
T1653:;
	V475= Cnil;
	goto T1646;
T1646:;
	if(((V475))==Cnil){
	goto T1659;}
	base[3]= ((V475))->v.v_self[fix(base0[1])]= (V470);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1659;
T1659:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1644;
T1644:;
	{register object V480;
	V480= base0[1];
	base[3]= (V480);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1662;}
	{object V481;
	object V482;
	register object V483;
	V481= STREF(object,base0[1],0);
	V482= list(2,(V470),(V471));
	V483= STREF(object,base0[1],4);
	if(((V483))==Cnil){
	goto T1670;}
	if((CMPcdr((V483)))!=Cnil){
	goto T1670;}
	base[3]= (V482);
	base[4]= CMPcar((V483));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V481);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1670;
T1670:;
	base[3]= (V481);
	base[4]= (V482);
	{object V484;
	V484= (V483);
	 vs_top=base+5;
	 while(V484!=Cnil)
	 {vs_push((V484)->c.c_car);V484=(V484)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1662;
T1662:;
	base[3]= (V480);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1680;}
	base[3]= (V470);
	base[4]= (V471);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1680;
T1680:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[198];
	base[10]= VV[45];
	base[11]= VV[199];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T1621;
T1621:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1696;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1696;
T1696:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1706;}
	{object V486;
	if(type_of(base0[2])==t_structure){
	goto T1712;}
	goto T1710;
	goto T1712;
T1712:;
	if(!(((base0[2])->str.str_def)==(VV[200]))){
	goto T1710;}
	V486= STREF(object,base0[2],4);
	goto T1708;
	goto T1710;
T1710:;{object V488;
	V488= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V489= vs_base[0];
	if(!((V488)==(CMPcar(V489)))){
	goto T1715;}}
	V486= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T1708;
	goto T1715;
T1715:;
	V486= Cnil;
	goto T1708;
T1708:;
	if(((V486))==Cnil){
	goto T1721;}
	base[1]= ((V486))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1721;
T1721:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1706;
T1706:;
	{register object V491;
	V491= base0[1];
	base[1]= (V491);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1724;}
	{object V492;
	object V493;
	register object V494;
	V492= STREF(object,base0[1],0);
	V493= list(2,base0[2],base0[3]);
	V494= STREF(object,base0[1],4);
	if(((V494))==Cnil){
	goto T1732;}
	if((CMPcdr((V494)))!=Cnil){
	goto T1732;}
	base[1]= (V493);
	base[2]= CMPcar((V494));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V492);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1732;
T1732:;
	base[1]= (V492);
	base[2]= (V493);
	{object V495;
	V495= (V494);
	 vs_top=base+3;
	 while(V495!=Cnil)
	 {vs_push((V495)->c.c_car);V495=(V495)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1724;
T1724:;
	base[1]= (V491);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1742;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1742;
T1742:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[201];
	base[8]= VV[45];
	base[9]= VV[202];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T1618;
T1618:;
	base[1]= VV[203];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L130(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM257; VC257
	vs_check;
	{object V496;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V496=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T1760;}
	if(((V496))==Cnil){
	goto T1763;}
	{register object V497;
	register object V498;
	object V499;
	V497= (V496);
	{object V500;
	V500= CMPcar((V497));
	V497= CMPcdr((V497));
	V498= (V500);}
	{object V501;
	V501= CMPcar((V497));
	V497= CMPcdr((V497));
	V499= (V501);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1776;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V498);
	base[7]= (V499);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1776;
T1776:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1786;}
	{object V503;
	if(type_of(V498)==t_structure){
	goto T1792;}
	goto T1790;
	goto T1792;
T1792:;
	if(!(((V498)->str.str_def)==(VV[182]))){
	goto T1790;}
	V503= STREF(object,(V498),4);
	goto T1788;
	goto T1790;
T1790:;{object V505;
	V505= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V498);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V506= vs_base[0];
	if(!((V505)==(CMPcar(V506)))){
	goto T1795;}}
	V503= CMPcar(((V498))->cc.cc_turbo[12]);
	goto T1788;
	goto T1795;
T1795:;
	V503= Cnil;
	goto T1788;
T1788:;
	if(((V503))==Cnil){
	goto T1801;}
	base[3]= ((V503))->v.v_self[fix(base0[1])]= (V498);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1801;
T1801:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1786;
T1786:;
	{register object V508;
	V508= base0[1];
	base[3]= (V508);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1804;}
	{object V509;
	object V510;
	register object V511;
	V509= STREF(object,base0[1],0);
	V510= list(2,(V498),(V499));
	V511= STREF(object,base0[1],4);
	if(((V511))==Cnil){
	goto T1812;}
	if((CMPcdr((V511)))!=Cnil){
	goto T1812;}
	base[3]= (V510);
	base[4]= CMPcar((V511));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V509);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1812;
T1812:;
	base[3]= (V509);
	base[4]= (V510);
	{object V512;
	V512= (V511);
	 vs_top=base+5;
	 while(V512!=Cnil)
	 {vs_push((V512)->c.c_car);V512=(V512)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1804;
T1804:;
	base[3]= (V508);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1822;}
	base[3]= (V498);
	base[4]= (V499);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1822;
T1822:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[183];
	base[10]= VV[45];
	base[11]= VV[184];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T1763;
T1763:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1838;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1838;
T1838:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1848;}
	{object V514;
	if(type_of(base0[2])==t_structure){
	goto T1854;}
	goto T1852;
	goto T1854;
T1854:;
	if(!(((base0[2])->str.str_def)==(VV[185]))){
	goto T1852;}
	V514= STREF(object,base0[2],4);
	goto T1850;
	goto T1852;
T1852:;{object V516;
	V516= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V517= vs_base[0];
	if(!((V516)==(CMPcar(V517)))){
	goto T1857;}}
	V514= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T1850;
	goto T1857;
T1857:;
	V514= Cnil;
	goto T1850;
T1850:;
	if(((V514))==Cnil){
	goto T1863;}
	base[1]= ((V514))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1863;
T1863:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1848;
T1848:;
	{register object V519;
	V519= base0[1];
	base[1]= (V519);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1866;}
	{object V520;
	object V521;
	register object V522;
	V520= STREF(object,base0[1],0);
	V521= list(2,base0[2],base0[3]);
	V522= STREF(object,base0[1],4);
	if(((V522))==Cnil){
	goto T1874;}
	if((CMPcdr((V522)))!=Cnil){
	goto T1874;}
	base[1]= (V521);
	base[2]= CMPcar((V522));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V520);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1874;
T1874:;
	base[1]= (V520);
	base[2]= (V521);
	{object V523;
	V523= (V522);
	 vs_top=base+3;
	 while(V523!=Cnil)
	 {vs_push((V523)->c.c_car);V523=(V523)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1866;
T1866:;
	base[1]= (V519);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1884;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1884;
T1884:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[186];
	base[8]= VV[45];
	base[9]= VV[187];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T1760;
T1760:;
	base[1]= VV[188];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L116(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM258; VC258
	vs_check;
	{object V524;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V524=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T1902;}
	if(((V524))==Cnil){
	goto T1905;}
	{register object V525;
	register object V526;
	object V527;
	V525= (V524);
	{object V528;
	V528= CMPcar((V525));
	V525= CMPcdr((V525));
	V526= (V528);}
	{object V529;
	V529= CMPcar((V525));
	V525= CMPcdr((V525));
	V527= (V529);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1918;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V526);
	base[7]= (V527);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1918;
T1918:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1928;}
	{object V531;
	if(type_of(V526)==t_structure){
	goto T1934;}
	goto T1932;
	goto T1934;
T1934:;
	if(!(((V526)->str.str_def)==(VV[162]))){
	goto T1932;}
	V531= STREF(object,(V526),4);
	goto T1930;
	goto T1932;
T1932:;{object V533;
	V533= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V526);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V534= vs_base[0];
	if(!((V533)==(CMPcar(V534)))){
	goto T1937;}}
	V531= CMPcar(((V526))->cc.cc_turbo[12]);
	goto T1930;
	goto T1937;
T1937:;
	V531= Cnil;
	goto T1930;
T1930:;
	if(((V531))==Cnil){
	goto T1943;}
	base[3]= ((V531))->v.v_self[fix(base0[1])]= (V526);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1943;
T1943:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T1928;
T1928:;
	{register object V536;
	V536= base0[1];
	base[3]= (V536);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1946;}
	{object V537;
	object V538;
	register object V539;
	V537= STREF(object,base0[1],0);
	V538= list(2,(V526),(V527));
	V539= STREF(object,base0[1],4);
	if(((V539))==Cnil){
	goto T1954;}
	if((CMPcdr((V539)))!=Cnil){
	goto T1954;}
	base[3]= (V538);
	base[4]= CMPcar((V539));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V537);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1954;
T1954:;
	base[3]= (V537);
	base[4]= (V538);
	{object V540;
	V540= (V539);
	 vs_top=base+5;
	 while(V540!=Cnil)
	 {vs_push((V540)->c.c_car);V540=(V540)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1946;
T1946:;
	base[3]= (V536);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1964;}
	base[3]= (V526);
	base[4]= (V527);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1964;
T1964:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[163];
	base[10]= VV[45];
	base[11]= VV[164];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T1905;
T1905:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1980;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1980;
T1980:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T1990;}
	{object V542;
	if(type_of(base0[2])==t_structure){
	goto T1996;}
	goto T1994;
	goto T1996;
T1996:;
	if(!(((base0[2])->str.str_def)==(VV[165]))){
	goto T1994;}
	V542= STREF(object,base0[2],4);
	goto T1992;
	goto T1994;
T1994:;{object V544;
	V544= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V545= vs_base[0];
	if(!((V544)==(CMPcar(V545)))){
	goto T1999;}}
	V542= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T1992;
	goto T1999;
T1999:;
	V542= Cnil;
	goto T1992;
T1992:;
	if(((V542))==Cnil){
	goto T2005;}
	base[1]= ((V542))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2005;
T2005:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1990;
T1990:;
	{register object V547;
	V547= base0[1];
	base[1]= (V547);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2008;}
	{object V548;
	object V549;
	register object V550;
	V548= STREF(object,base0[1],0);
	V549= list(2,base0[2],base0[3]);
	V550= STREF(object,base0[1],4);
	if(((V550))==Cnil){
	goto T2016;}
	if((CMPcdr((V550)))!=Cnil){
	goto T2016;}
	base[1]= (V549);
	base[2]= CMPcar((V550));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V548);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2016;
T2016:;
	base[1]= (V548);
	base[2]= (V549);
	{object V551;
	V551= (V550);
	 vs_top=base+3;
	 while(V551!=Cnil)
	 {vs_push((V551)->c.c_car);V551=(V551)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2008;
T2008:;
	base[1]= (V547);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2026;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2026;
T2026:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[166];
	base[8]= VV[45];
	base[9]= VV[167];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T1902;
T1902:;
	base[1]= VV[168];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L102(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM259; VC259
	vs_check;
	{object V552;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V552=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T2044;}
	if(((V552))==Cnil){
	goto T2047;}
	{register object V553;
	register object V554;
	object V555;
	V553= (V552);
	{object V556;
	V556= CMPcar((V553));
	V553= CMPcdr((V553));
	V554= (V556);}
	{object V557;
	V557= CMPcar((V553));
	V553= CMPcdr((V553));
	V555= (V557);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2060;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V554);
	base[7]= (V555);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2060;
T2060:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2070;}
	{object V559;
	if(type_of(V554)==t_structure){
	goto T2076;}
	goto T2074;
	goto T2076;
T2076:;
	if(!(((V554)->str.str_def)==(VV[135]))){
	goto T2074;}
	V559= STREF(object,(V554),4);
	goto T2072;
	goto T2074;
T2074:;{object V561;
	V561= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V554);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V562= vs_base[0];
	if(!((V561)==(CMPcar(V562)))){
	goto T2079;}}
	V559= CMPcar(((V554))->cc.cc_turbo[12]);
	goto T2072;
	goto T2079;
T2079:;
	V559= Cnil;
	goto T2072;
T2072:;
	if(((V559))==Cnil){
	goto T2085;}
	base[3]= ((V559))->v.v_self[fix(base0[1])]= (V554);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2085;
T2085:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2070;
T2070:;
	{register object V564;
	V564= base0[1];
	base[3]= (V564);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2088;}
	{object V565;
	object V566;
	register object V567;
	V565= STREF(object,base0[1],0);
	V566= list(2,(V554),(V555));
	V567= STREF(object,base0[1],4);
	if(((V567))==Cnil){
	goto T2096;}
	if((CMPcdr((V567)))!=Cnil){
	goto T2096;}
	base[3]= (V566);
	base[4]= CMPcar((V567));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V565);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2096;
T2096:;
	base[3]= (V565);
	base[4]= (V566);
	{object V568;
	V568= (V567);
	 vs_top=base+5;
	 while(V568!=Cnil)
	 {vs_push((V568)->c.c_car);V568=(V568)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2088;
T2088:;
	base[3]= (V564);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2106;}
	base[3]= (V554);
	base[4]= (V555);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2106;
T2106:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[136];
	base[10]= VV[45];
	base[11]= VV[137];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T2047;
T2047:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2122;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2122;
T2122:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2132;}
	{object V570;
	if(type_of(base0[2])==t_structure){
	goto T2138;}
	goto T2136;
	goto T2138;
T2138:;
	if(!(((base0[2])->str.str_def)==(VV[138]))){
	goto T2136;}
	V570= STREF(object,base0[2],4);
	goto T2134;
	goto T2136;
T2136:;{object V572;
	V572= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V573= vs_base[0];
	if(!((V572)==(CMPcar(V573)))){
	goto T2141;}}
	V570= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T2134;
	goto T2141;
T2141:;
	V570= Cnil;
	goto T2134;
T2134:;
	if(((V570))==Cnil){
	goto T2147;}
	base[1]= ((V570))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2147;
T2147:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2132;
T2132:;
	{register object V575;
	V575= base0[1];
	base[1]= (V575);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2150;}
	{object V576;
	object V577;
	register object V578;
	V576= STREF(object,base0[1],0);
	V577= list(2,base0[2],base0[3]);
	V578= STREF(object,base0[1],4);
	if(((V578))==Cnil){
	goto T2158;}
	if((CMPcdr((V578)))!=Cnil){
	goto T2158;}
	base[1]= (V577);
	base[2]= CMPcar((V578));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V576);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2158;
T2158:;
	base[1]= (V576);
	base[2]= (V577);
	{object V579;
	V579= (V578);
	 vs_top=base+3;
	 while(V579!=Cnil)
	 {vs_push((V579)->c.c_car);V579=(V579)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2150;
T2150:;
	base[1]= (V575);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2168;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2168;
T2168:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[139];
	base[8]= VV[45];
	base[9]= VV[140];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T2044;
T2044:;
	base[1]= VV[141];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L73(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM260; VC260
	vs_check;
	{object V580;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V580=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T2186;}
	if(((V580))==Cnil){
	goto T2189;}
	{register object V581;
	register object V582;
	object V583;
	V581= (V580);
	{object V584;
	V584= CMPcar((V581));
	V581= CMPcdr((V581));
	V582= (V584);}
	{object V585;
	V585= CMPcar((V581));
	V581= CMPcdr((V581));
	V583= (V585);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2202;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V582);
	base[7]= (V583);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2202;
T2202:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2212;}
	{object V587;
	if(type_of(V582)==t_structure){
	goto T2218;}
	goto T2216;
	goto T2218;
T2218:;
	if(!(((V582)->str.str_def)==(VV[105]))){
	goto T2216;}
	V587= STREF(object,(V582),4);
	goto T2214;
	goto T2216;
T2216:;{object V589;
	V589= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V582);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V590= vs_base[0];
	if(!((V589)==(CMPcar(V590)))){
	goto T2221;}}
	V587= CMPcar(((V582))->cc.cc_turbo[12]);
	goto T2214;
	goto T2221;
T2221:;
	V587= Cnil;
	goto T2214;
T2214:;
	if(((V587))==Cnil){
	goto T2227;}
	base[3]= ((V587))->v.v_self[fix(base0[1])]= (V582);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2227;
T2227:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2212;
T2212:;
	{register object V592;
	V592= base0[1];
	base[3]= (V592);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2230;}
	{object V593;
	object V594;
	register object V595;
	V593= STREF(object,base0[1],0);
	V594= list(2,(V582),(V583));
	V595= STREF(object,base0[1],4);
	if(((V595))==Cnil){
	goto T2238;}
	if((CMPcdr((V595)))!=Cnil){
	goto T2238;}
	base[3]= (V594);
	base[4]= CMPcar((V595));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V593);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2238;
T2238:;
	base[3]= (V593);
	base[4]= (V594);
	{object V596;
	V596= (V595);
	 vs_top=base+5;
	 while(V596!=Cnil)
	 {vs_push((V596)->c.c_car);V596=(V596)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2230;
T2230:;
	base[3]= (V592);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2248;}
	base[3]= (V582);
	base[4]= (V583);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2248;
T2248:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[106];
	base[10]= VV[45];
	base[11]= VV[107];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T2189;
T2189:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2264;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2264;
T2264:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2274;}
	{object V598;
	if(type_of(base0[2])==t_structure){
	goto T2280;}
	goto T2278;
	goto T2280;
T2280:;
	if(!(((base0[2])->str.str_def)==(VV[108]))){
	goto T2278;}
	V598= STREF(object,base0[2],4);
	goto T2276;
	goto T2278;
T2278:;{object V600;
	V600= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V601= vs_base[0];
	if(!((V600)==(CMPcar(V601)))){
	goto T2283;}}
	V598= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T2276;
	goto T2283;
T2283:;
	V598= Cnil;
	goto T2276;
T2276:;
	if(((V598))==Cnil){
	goto T2289;}
	base[1]= ((V598))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2289;
T2289:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2274;
T2274:;
	{register object V603;
	V603= base0[1];
	base[1]= (V603);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2292;}
	{object V604;
	object V605;
	register object V606;
	V604= STREF(object,base0[1],0);
	V605= list(2,base0[2],base0[3]);
	V606= STREF(object,base0[1],4);
	if(((V606))==Cnil){
	goto T2300;}
	if((CMPcdr((V606)))!=Cnil){
	goto T2300;}
	base[1]= (V605);
	base[2]= CMPcar((V606));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V604);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2300;
T2300:;
	base[1]= (V604);
	base[2]= (V605);
	{object V607;
	V607= (V606);
	 vs_top=base+3;
	 while(V607!=Cnil)
	 {vs_push((V607)->c.c_car);V607=(V607)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2292;
T2292:;
	base[1]= (V603);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2310;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2310;
T2310:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[109];
	base[8]= VV[45];
	base[9]= VV[110];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T2186;
T2186:;
	base[1]= VV[111];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM261; VC261
	vs_check;
	{object V608;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V608=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T2328;}
	if(((V608))==Cnil){
	goto T2331;}
	{register object V609;
	register object V610;
	object V611;
	V609= (V608);
	{object V612;
	V612= CMPcar((V609));
	V609= CMPcdr((V609));
	V610= (V612);}
	{object V613;
	V613= CMPcar((V609));
	V609= CMPcdr((V609));
	V611= (V613);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2344;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V610);
	base[7]= (V611);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2344;
T2344:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2354;}
	{object V615;
	if(type_of(V610)==t_structure){
	goto T2360;}
	goto T2358;
	goto T2360;
T2360:;
	if(!(((V610)->str.str_def)==(VV[82]))){
	goto T2358;}
	V615= STREF(object,(V610),4);
	goto T2356;
	goto T2358;
T2358:;{object V617;
	V617= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V610);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V618= vs_base[0];
	if(!((V617)==(CMPcar(V618)))){
	goto T2363;}}
	V615= CMPcar(((V610))->cc.cc_turbo[12]);
	goto T2356;
	goto T2363;
T2363:;
	V615= Cnil;
	goto T2356;
T2356:;
	if(((V615))==Cnil){
	goto T2369;}
	base[3]= ((V615))->v.v_self[fix(base0[1])]= (V610);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2369;
T2369:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2354;
T2354:;
	{register object V620;
	V620= base0[1];
	base[3]= (V620);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2372;}
	{object V621;
	object V622;
	register object V623;
	V621= STREF(object,base0[1],0);
	V622= list(2,(V610),(V611));
	V623= STREF(object,base0[1],4);
	if(((V623))==Cnil){
	goto T2380;}
	if((CMPcdr((V623)))!=Cnil){
	goto T2380;}
	base[3]= (V622);
	base[4]= CMPcar((V623));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V621);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2380;
T2380:;
	base[3]= (V621);
	base[4]= (V622);
	{object V624;
	V624= (V623);
	 vs_top=base+5;
	 while(V624!=Cnil)
	 {vs_push((V624)->c.c_car);V624=(V624)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2372;
T2372:;
	base[3]= (V620);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2390;}
	base[3]= (V610);
	base[4]= (V611);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2390;
T2390:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[83];
	base[10]= VV[45];
	base[11]= VV[84];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T2331;
T2331:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2406;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2406;
T2406:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2416;}
	{object V626;
	if(type_of(base0[2])==t_structure){
	goto T2422;}
	goto T2420;
	goto T2422;
T2422:;
	if(!(((base0[2])->str.str_def)==(VV[85]))){
	goto T2420;}
	V626= STREF(object,base0[2],4);
	goto T2418;
	goto T2420;
T2420:;{object V628;
	V628= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V629= vs_base[0];
	if(!((V628)==(CMPcar(V629)))){
	goto T2425;}}
	V626= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T2418;
	goto T2425;
T2425:;
	V626= Cnil;
	goto T2418;
T2418:;
	if(((V626))==Cnil){
	goto T2431;}
	base[1]= ((V626))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2431;
T2431:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2416;
T2416:;
	{register object V631;
	V631= base0[1];
	base[1]= (V631);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2434;}
	{object V632;
	object V633;
	register object V634;
	V632= STREF(object,base0[1],0);
	V633= list(2,base0[2],base0[3]);
	V634= STREF(object,base0[1],4);
	if(((V634))==Cnil){
	goto T2442;}
	if((CMPcdr((V634)))!=Cnil){
	goto T2442;}
	base[1]= (V633);
	base[2]= CMPcar((V634));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V632);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2442;
T2442:;
	base[1]= (V632);
	base[2]= (V633);
	{object V635;
	V635= (V634);
	 vs_top=base+3;
	 while(V635!=Cnil)
	 {vs_push((V635)->c.c_car);V635=(V635)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2434;
T2434:;
	base[1]= (V631);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2452;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2452;
T2452:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[86];
	base[8]= VV[45];
	base[9]= VV[87];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T2328;
T2328:;
	base[1]= VV[88];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM262; VC262
	vs_check;
	{object V636;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V636=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T2470;}
	if(((V636))==Cnil){
	goto T2473;}
	{register object V637;
	register object V638;
	object V639;
	V637= (V636);
	{object V640;
	V640= CMPcar((V637));
	V637= CMPcdr((V637));
	V638= (V640);}
	{object V641;
	V641= CMPcar((V637));
	V637= CMPcdr((V637));
	V639= (V641);}
	base[3]= base0[1];
	base[4]= VV[35];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2486;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V638);
	base[7]= (V639);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2486;
T2486:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2496;}
	{object V643;
	if(type_of(V638)==t_structure){
	goto T2502;}
	goto T2500;
	goto T2502;
T2502:;
	if(!(((V638)->str.str_def)==(VV[36]))){
	goto T2500;}
	V643= STREF(object,(V638),4);
	goto T2498;
	goto T2500;
T2500:;{object V645;
	V645= (VV[38]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V638);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V646= vs_base[0];
	if(!((V645)==(CMPcar(V646)))){
	goto T2505;}}
	V643= CMPcar(((V638))->cc.cc_turbo[12]);
	goto T2498;
	goto T2505;
T2505:;
	V643= Cnil;
	goto T2498;
T2498:;
	if(((V643))==Cnil){
	goto T2511;}
	base[3]= ((V643))->v.v_self[fix(base0[1])]= (V638);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2511;
T2511:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2496;
T2496:;
	{register object V648;
	V648= base0[1];
	base[3]= (V648);
	base[4]= VV[39];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2514;}
	{object V649;
	object V650;
	register object V651;
	V649= STREF(object,base0[1],0);
	V650= list(2,(V638),(V639));
	V651= STREF(object,base0[1],4);
	if(((V651))==Cnil){
	goto T2522;}
	if((CMPcdr((V651)))!=Cnil){
	goto T2522;}
	base[3]= (V650);
	base[4]= CMPcar((V651));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V649);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2522;
T2522:;
	base[3]= (V649);
	base[4]= (V650);
	{object V652;
	V652= (V651);
	 vs_top=base+5;
	 while(V652!=Cnil)
	 {vs_push((V652)->c.c_car);V652=(V652)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2514;
T2514:;
	base[3]= (V648);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2532;}
	base[3]= (V638);
	base[4]= (V639);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2532;
T2532:;
	base[3]= VV[40];
	base[4]= VV[18];
	base[5]= VV[41];
	base[6]= VV[42];
	base[7]= base0[1];
	base[8]= VV[43];
	base[9]= VV[44];
	base[10]= VV[45];
	base[11]= VV[46];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk13)();
	return;}}
	goto T2473;
T2473:;
	base[1]= base0[1];
	base[2]= VV[35];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2548;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2548;
T2548:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T2558;}
	{object V654;
	if(type_of(base0[2])==t_structure){
	goto T2564;}
	goto T2562;
	goto T2564;
T2564:;
	if(!(((base0[2])->str.str_def)==(VV[47]))){
	goto T2562;}
	V654= STREF(object,base0[2],4);
	goto T2560;
	goto T2562;
T2562:;{object V656;
	V656= (VV[38]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk412)();
	vs_top=sup;
	V657= vs_base[0];
	if(!((V656)==(CMPcar(V657)))){
	goto T2567;}}
	V654= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T2560;
	goto T2567;
T2567:;
	V654= Cnil;
	goto T2560;
T2560:;
	if(((V654))==Cnil){
	goto T2573;}
	base[1]= ((V654))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2573;
T2573:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2558;
T2558:;
	{register object V659;
	V659= base0[1];
	base[1]= (V659);
	base[2]= VV[39];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk411)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2576;}
	{object V660;
	object V661;
	register object V662;
	V660= STREF(object,base0[1],0);
	V661= list(2,base0[2],base0[3]);
	V662= STREF(object,base0[1],4);
	if(((V662))==Cnil){
	goto T2584;}
	if((CMPcdr((V662)))!=Cnil){
	goto T2584;}
	base[1]= (V661);
	base[2]= CMPcar((V662));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V660);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2584;
T2584:;
	base[1]= (V660);
	base[2]= (V661);
	{object V663;
	V663= (V662);
	 vs_top=base+3;
	 while(V663!=Cnil)
	 {vs_push((V663)->c.c_car);V663=(V663)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T2576;
T2576:;
	base[1]= (V659);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2594;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2594;
T2594:;
	base[1]= VV[40];
	base[2]= VV[18];
	base[3]= VV[41];
	base[4]= VV[42];
	base[5]= base0[1];
	base[6]= VV[43];
	base[7]= VV[48];
	base[8]= VV[45];
	base[9]= VV[49];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	return;}
	goto T2470;
T2470:;
	base[1]= VV[50];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk413)();
	return;
	}
}
static void LnkT413(){ call_or_link(VV[413],(void **)(void *)&Lnk413);} /* CALL-NO-NEXT-METHOD */
static void LnkT13(){ call_or_link(VV[13],(void **)(void *)&Lnk13);} /* ERROR */
static void LnkT412(){ call_or_link(VV[412],(void **)(void *)&Lnk412);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT411(){ call_or_link(VV[411],(void **)(void *)&Lnk411);} /* STRUCTURE-SUBTYPE-P */
static void LnkT410(ptr) object *ptr;{ call_or_link_closure(VV[410],(void **)(void *)&Lnk410,(void **)(void *)&Lclptr410);} /* CLASS-PRECEDENCE-LIST */
static void LnkT409(){ call_or_link(VV[409],(void **)(void *)&Lnk409);} /* TYPEP */
static void LnkT408(){ call_or_link(VV[408],(void **)(void *)&Lnk408);} /* FIND-CLASS */
static void LnkT407(){ call_or_link(VV[407],(void **)(void *)&Lnk407);} /* *MAKE-SPECIAL */
static void LnkT406(){ call_or_link(VV[406],(void **)(void *)&Lnk406);} /* Defclass INTERNAL-SIMPLE-STREAM-ERROR10175 */
static void LnkT405(){ call_or_link(VV[405],(void **)(void *)&Lnk405);} /* Defclass INTERNAL-SIMPLE-FILE-ERROR10086 */
static void LnkT404(){ call_or_link(VV[404],(void **)(void *)&Lnk404);} /* Defclass INTERNAL-END-OF-FILE9997 */
static void LnkT403(){ call_or_link(VV[403],(void **)(void *)&Lnk403);} /* Defclass INTERNAL-UNDEFINED-FUNCTION9908 */
static void LnkT402(){ call_or_link(VV[402],(void **)(void *)&Lnk402);} /* Defclass INTERNAL-UNBOUND-VARIABLE9819 */
static void LnkT401(){ call_or_link(VV[401],(void **)(void *)&Lnk401);} /* Defclass INTERNAL-SIMPLE-CONTROL-ERROR9730 */
static void LnkT400(){ call_or_link(VV[400],(void **)(void *)&Lnk400);} /* Defclass INTERNAL-SIMPLE-PARSE-ERROR9641 */
static void LnkT399(){ call_or_link(VV[399],(void **)(void *)&Lnk399);} /* Defclass INTERNAL-SIMPLE-PROGRAM-ERROR9552 */
static void LnkT398(){ call_or_link(VV[398],(void **)(void *)&Lnk398);} /* Defclass INTERNAL-PACKAGE-ERROR9463 */
static void LnkT397(){ call_or_link(VV[397],(void **)(void *)&Lnk397);} /* Defclass INTERNAL-TYPE-ERROR9374 */
static void LnkT395(){ call_or_link(VV[395],(void **)(void *)&Lnk395);} /* INTERNAL-SIMPLE-WARNING-PRINTER */
static void LnkT394(){ call_or_link(VV[394],(void **)(void *)&Lnk394);} /* Defclass INTERNAL-SIMPLE-WARNING8934 */
static object  LnkTLI392(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[392],(void **)(void *)&LnkLI392,2,first,ap);va_end(ap);return V1;} /* INTERNAL-SIMPLE-ERROR-PRINTER */
static void LnkT391(){ call_or_link(VV[391],(void **)(void *)&Lnk391);} /* Defclass INTERNAL-SIMPLE-ERROR8494 */
static void LnkT389(){ call_or_link(VV[389],(void **)(void *)&Lnk389);} /* Defclass INTERNAL-ERROR8013 */
static void LnkT387(ptr) object *ptr;{ call_or_link_closure(VV[387],(void **)(void *)&Lnk387,(void **)(void *)&Lclptr387);} /* INTERNAL-ERROR-FUNCTION-NAME */
static void LnkT386(){ call_or_link(VV[386],(void **)(void *)&Lnk386);} /* Defclass INTERNAL-WARNING7556 */
static void LnkT384(){ call_or_link(VV[384],(void **)(void *)&Lnk384);} /* Defclass ABORT-FAILURE7100 */
static void LnkT383(){ call_or_link(VV[383],(void **)(void *)&Lnk383);} /* Defclass FLOATING-POINT-UNDERFLOW7011 */
static void LnkT382(){ call_or_link(VV[382],(void **)(void *)&Lnk382);} /* Defclass FLOATING-POINT-OVERFLOW6922 */
static void LnkT381(){ call_or_link(VV[381],(void **)(void *)&Lnk381);} /* Defclass DIVISION-BY-ZERO6833 */
static void LnkT380(){ call_or_link(VV[380],(void **)(void *)&Lnk380);} /* Defclass ARITHMETIC-ERROR6743 */
static void LnkT378(){ call_or_link(VV[378],(void **)(void *)&Lnk378);} /* Defclass UNDEFINED-FUNCTION6295 */
static void LnkT376(ptr) object *ptr;{ call_or_link_closure(VV[376],(void **)(void *)&Lnk376,(void **)(void *)&Lclptr376);} /* CELL-ERROR-NAME */
static void LnkT375(){ call_or_link(VV[375],(void **)(void *)&Lnk375);} /* Defclass UNBOUND-VARIABLE5847 */
static void LnkT374(){ call_or_link(VV[374],(void **)(void *)&Lnk374);} /* Defclass CELL-ERROR5757 */
static void LnkT372(ptr) object *ptr;{ call_or_link_closure(VV[372],(void **)(void *)&Lnk372,(void **)(void *)&Lclptr372);} /* PACKAGE-ERROR-MESSAGE */
static void LnkT371(ptr) object *ptr;{ call_or_link_closure(VV[371],(void **)(void *)&Lnk371,(void **)(void *)&Lclptr371);} /* PACKAGE-ERROR-PACKAGE */
static void LnkT370(){ call_or_link(VV[370],(void **)(void *)&Lnk370);} /* Defclass PACKAGE-ERROR5307 */
static void LnkT369(){ call_or_link(VV[369],(void **)(void *)&Lnk369);} /* Defclass FILE-ERROR5217 */
static void LnkT367(ptr) object *ptr;{ call_or_link_closure(VV[367],(void **)(void *)&Lnk367,(void **)(void *)&Lclptr367);} /* STREAM-ERROR-STREAM */
static void LnkT366(){ call_or_link(VV[366],(void **)(void *)&Lnk366);} /* Defclass END-OF-FILE4769 */
static void LnkT365(){ call_or_link(VV[365],(void **)(void *)&Lnk365);} /* Defclass STREAM-ERROR4679 */
static void LnkT364(){ call_or_link(VV[364],(void **)(void *)&Lnk364);} /* Defclass PARSE-ERROR4590 */
static void LnkT363(){ call_or_link(VV[363],(void **)(void *)&Lnk363);} /* Defclass CONTROL-ERROR4501 */
static void LnkT362(){ call_or_link(VV[362],(void **)(void *)&Lnk362);} /* Defclass PROGRAM-ERROR4412 */
static void LnkT360(ptr) object *ptr;{ call_or_link_closure(VV[360],(void **)(void *)&Lnk360,(void **)(void *)&Lclptr360);} /* CASE-FAILURE-POSSIBILITIES */
static void LnkT359(ptr) object *ptr;{ call_or_link_closure(VV[359],(void **)(void *)&Lnk359,(void **)(void *)&Lclptr359);} /* CASE-FAILURE-NAME */
static void LnkT358(){ call_or_link(VV[358],(void **)(void *)&Lnk358);} /* Defclass CASE-FAILURE3962 */
static void LnkT357(){ call_or_link(VV[357],(void **)(void *)&Lnk357);} /* Defclass SIMPLE-TYPE-ERROR3873 */
static void LnkT355(ptr) object *ptr;{ call_or_link_closure(VV[355],(void **)(void *)&Lnk355,(void **)(void *)&Lclptr355);} /* TYPE-ERROR-EXPECTED-TYPE */
static void LnkT354(ptr) object *ptr;{ call_or_link_closure(VV[354],(void **)(void *)&Lnk354,(void **)(void *)&Lclptr354);} /* TYPE-ERROR-DATUM */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* Defclass TYPE-ERROR3423 */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* Defclass STORAGE-EXHAUSTED3334 */
static void LnkT351(){ call_or_link(VV[351],(void **)(void *)&Lnk351);} /* Defclass STACK-OVERFLOW3245 */
static void LnkT350(){ call_or_link(VV[350],(void **)(void *)&Lnk350);} /* Defclass STORAGE-CONDITION3156 */
static void LnkT349(){ call_or_link(VV[349],(void **)(void *)&Lnk349);} /* Defclass SIMPLE-ERROR3067 */
static void LnkT348(){ call_or_link(VV[348],(void **)(void *)&Lnk348);} /* Defclass SIMPLE-WARNING2978 */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* LOAD-DEFMETHOD */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[345],(void **)(void *)&LnkLI345,2,first,ap);va_end(ap);return V1;} /* SIMPLE-CONDITION-PRINTER */
static void LnkT344(){ call_or_link(VV[344],(void **)(void *)&Lnk344);} /* PROCLAIM-DEFGENERIC */
static void LnkT343(){ call_or_link(VV[343],(void **)(void *)&Lnk343);} /* Defclass SIMPLE-CONDITION2536 */
static void LnkT341(ptr) object *ptr;{ call_or_link_closure(VV[341],(void **)(void *)&Lnk341,(void **)(void *)&Lclptr341);} /* SIMPLE-CONDITION-FORMAT-ARGUMENTS */
static void LnkT340(ptr) object *ptr;{ call_or_link_closure(VV[340],(void **)(void *)&Lnk340,(void **)(void *)&Lclptr340);} /* SIMPLE-CONDITION-FORMAT-STRING */
static void LnkT339(){ call_or_link(VV[339],(void **)(void *)&Lnk339);} /* Defclass ERROR2439 */
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* Defclass SERIOUS-CONDITION2350 */
static void LnkT337(){ call_or_link(VV[337],(void **)(void *)&Lnk337);} /* Defclass WARNING2261 */
static void LnkT335(){ call_or_link(VV[335],(void **)(void *)&Lnk335);} /* REMOVE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

