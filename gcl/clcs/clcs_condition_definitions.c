
#include "cmpinclude.h"
#include "clcs_condition_definitions.h"
void init_clcs_condition_definitions(){do_init(VV);}
/*	local entry for function progn 'compile2192	*/

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
/*	local entry for function progn 'compile2212	*/

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
	(void) (*Lnk266)();
	vs_top=sup;
	(VV[1]->s.s_dbind)= vs_base[0];
	goto T5;
T5:;
	{object V7 = Cnil;
	VMR2(V7)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass WARNING2258	*/

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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile2274	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk268)();
	vs_top=sup;
	{object V8 = Cnil;
	VMR4(V8)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2291	*/

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
/*	local entry for function progn 'compile2315	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	(void)(sputprop(VV[4],VV[9],Cnil));
	{object V11 = Cnil;
	VMR6(V11)}
	return Cnil;
}
/*	local entry for function progn 'compile2327	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	function definition for Defclass SERIOUS-CONDITION2347	*/

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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile2363	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V13 = Cnil;
	VMR9(V13)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2380	*/

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
/*	local entry for function progn 'compile2404	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	(void)(sputprop(VV[10],VV[9],Cnil));
	{object V16 = Cnil;
	VMR11(V16)}
	return Cnil;
}
/*	local entry for function progn 'compile2416	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V17 = Cnil;
	VMR12(V17)}
	return Cnil;
}
/*	function definition for Defclass ERROR2436	*/

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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile2452	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk270)();
	vs_top=sup;
	{object V18 = Cnil;
	VMR14(V18)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2469	*/

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
/*	local entry for function progn 'compile2493	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	(void)(sputprop(VV[13],VV[9],Cnil));
	{object V21 = Cnil;
	VMR16(V21)}
	return Cnil;
}
/*	local entry for function progn 'compile2505	*/

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
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V27;
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk272)(Lclptr272);
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
/*	function definition for Defclass SIMPLE-CONDITION2533	*/

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
	base[5]= (VV[273]->s.s_gfdef);
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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile2551	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk274)();
	vs_top=sup;
	{object V31 = Cnil;
	VMR20(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2568	*/

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
/*	local entry for function progn 'compile2592	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	(void)(sputprop(VV[16],VV[9],Cnil));
	{object V34 = Cnil;
	VMR22(V34)}
	return Cnil;
}
/*	local entry for function progn 'compile2608	*/

static object LI23()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[33];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
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
	register object V37;
	register object V38;
	register object V39;
	V36=(base[0]);
	V37=(base[1]);
	V38=(base[2]);
	V39=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T107;}
	if(((V37))==Cnil){
	goto T110;}
	base[4]= (V37);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T114;}
	base[4]= STREF(object,(V37),0);
	base[5]= STREF(object,(V37),4);
	base[6]= STREF(object,(V37),8);
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
	if(!(((V38)->str.str_def)==(VV[36]))){
	goto T128;}
	V42= STREF(object,(V38),4);
	goto T126;
	goto T128;
T128:;{object V44;
	V44= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V38);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V45= vs_base[0];
	if(!((V44)==(CMPcar(V45)))){
	goto T133;}}
	V42= CMPcar(((V38))->cc.cc_turbo[12]);
	goto T126;
	goto T133;
T133:;
	V42= Cnil;
	goto T126;
T126:;
	if(((V42))==Cnil){
	goto T139;}
	base[4]= ((V42))->v.v_self[fix((V37))]= (V38);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T139;
T139:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T124;
T124:;
	{register object V47;
	V47= V37;
	base[4]= (V47);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T142;}
	{object V48;
	object V49;
	register object V50;
	V48= STREF(object,(V37),0);
	V49= list(2,(V38),(V39));
	V50= STREF(object,(V37),4);
	if(((V50))==Cnil){
	goto T150;}
	if((CMPcdr((V50)))!=Cnil){
	goto T150;}
	base[4]= (V49);
	base[5]= CMPcar((V50));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V48);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T150;
T150:;
	base[4]= (V48);
	base[5]= (V49);
	{object V51;
	V51= (V50);
	 vs_top=base+6;
	 while(V51!=Cnil)
	 {vs_push((V51)->c.c_car);V51=(V51)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T142;
T142:;
	base[4]= (V47);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T160;}
	base[4]= (V38);
	base[5]= (V39);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V37);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T160;
T160:;
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
	(void) (*Lnk278)();
	return;
	goto T107;
T107:;
	base[4]= (*(LnkLI279))((V38),(V39));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile2801	*/

static object LI25()

{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[49];
	base[4]= VV[50];
	V52= (VV[280]->s.s_gfdef);
	base[5]= listA(3,VV[51],V52,VV[52]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V53 = Cnil;
	VMR25(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2809	*/

static object LI26()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V54 = Cnil;
	VMR26(V54)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-WARNING2829	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[53];
	base[1]= VV[5];
	base[2]= VV[54];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile2845	*/

static object LI28()

{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk282)();
	vs_top=sup;
	{object V55 = Cnil;
	VMR28(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2862	*/

static object LI29()

{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[0]= VV[55];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V57 = Cnil;
	VMR29(V57)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2886	*/

static object LI30()

{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	(void)(sputprop(VV[53],VV[9],Cnil));
	{object V58 = Cnil;
	VMR30(V58)}
	return Cnil;
}
/*	local entry for function progn 'compile2898	*/

static object LI31()

{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V59 = Cnil;
	VMR31(V59)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-ERROR2918	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile2934	*/

static object LI33()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk283)();
	vs_top=sup;
	{object V60 = Cnil;
	VMR33(V60)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2951	*/

static object LI34()

{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]= VV[58];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V62 = Cnil;
	VMR34(V62)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2975	*/

static object LI35()

{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	(void)(sputprop(VV[56],VV[9],Cnil));
	{object V63 = Cnil;
	VMR35(V63)}
	return Cnil;
}
/*	local entry for function progn 'compile2987	*/

static object LI36()

{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V64 = Cnil;
	VMR36(V64)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-CONDITION3007	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile3023	*/

static object LI38()

{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk284)();
	vs_top=sup;
	{object V65 = Cnil;
	VMR38(V65)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3040	*/

static object LI39()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]= VV[61];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V67 = Cnil;
	VMR39(V67)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3064	*/

static object LI40()

{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	(void)(sputprop(VV[59],VV[9],Cnil));
	{object V68 = Cnil;
	VMR40(V68)}
	return Cnil;
}
/*	local entry for function progn 'compile3076	*/

static object LI41()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V69 = Cnil;
	VMR41(V69)}
	return Cnil;
}
/*	function definition for Defclass STACK-OVERFLOW3096	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile3112	*/

static object LI43()

{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk285)();
	vs_top=sup;
	{object V70 = Cnil;
	VMR43(V70)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3129	*/

static object LI44()

{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	base[0]= VV[64];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V72 = Cnil;
	VMR44(V72)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3153	*/

static object LI45()

{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	(void)(sputprop(VV[62],VV[9],Cnil));
	{object V73 = Cnil;
	VMR45(V73)}
	return Cnil;
}
/*	local entry for function progn 'compile3165	*/

static object LI46()

{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V74 = Cnil;
	VMR46(V74)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-EXHAUSTED3185	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile3201	*/

static object LI48()

{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk286)();
	vs_top=sup;
	{object V75 = Cnil;
	VMR48(V75)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3218	*/

static object LI49()

{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	base[0]= VV[67];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V77 = Cnil;
	VMR49(V77)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3242	*/

static object LI50()

{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)(sputprop(VV[65],VV[9],Cnil));
	{object V78 = Cnil;
	VMR50(V78)}
	return Cnil;
}
/*	local entry for function progn 'compile3254	*/

static object LI51()

{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V79 = Cnil;
	VMR51(V79)}
	return Cnil;
}
/*	function definition for Defclass TYPE-ERROR3274	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[68];
	base[1]= VV[5];
	base[2]= VV[69];
	V80= listA(9,VV[18],VV[70],VV[20],VV[71],VV[22],Cnil,VV[23],VV[72],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V80,listA(9,VV[18],VV[73],VV[20],VV[74],VV[22],Cnil,VV[23],VV[75],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile3292	*/

static object LI53()

{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk287)();
	vs_top=sup;
	{object V81 = Cnil;
	VMR53(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3309	*/

static object LI54()

{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	base[0]= VV[76];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V83 = Cnil;
	VMR54(V83)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3333	*/

static object LI55()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	(void)(sputprop(VV[68],VV[9],Cnil));
	{object V84 = Cnil;
	VMR55(V84)}
	return Cnil;
}
/*	local entry for function progn 'compile3349	*/

static object LI56()

{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[77];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V85 = Cnil;
	VMR56(V85)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (TYPE-ERROR T))	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V86;
	register object V87;
	register object V88;
	register object V89;
	V86=(base[0]);
	V87=(base[1]);
	V88=(base[2]);
	V89=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T269;}
	if(((V87))==Cnil){
	goto T272;}
	base[4]= (V87);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T276;}
	base[4]= STREF(object,(V87),0);
	base[5]= STREF(object,(V87),4);
	base[6]= STREF(object,(V87),8);
	base[7]= (V88);
	base[8]= (V89);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T276;
T276:;
	if(!(type_of((V87))==t_fixnum)){
	goto T286;}
	{object V92;
	if(type_of(V88)==t_structure){
	goto T292;}
	goto T290;
	goto T292;
T292:;
	if(!(((V88)->str.str_def)==(VV[78]))){
	goto T290;}
	V92= STREF(object,(V88),4);
	goto T288;
	goto T290;
T290:;{object V94;
	V94= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V88);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V95= vs_base[0];
	if(!((V94)==(CMPcar(V95)))){
	goto T295;}}
	V92= CMPcar(((V88))->cc.cc_turbo[12]);
	goto T288;
	goto T295;
T295:;
	V92= Cnil;
	goto T288;
T288:;
	if(((V92))==Cnil){
	goto T301;}
	base[4]= ((V92))->v.v_self[fix((V87))]= (V88);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T301;
T301:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T286;
T286:;
	{register object V97;
	V97= V87;
	base[4]= (V97);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T304;}
	{object V98;
	object V99;
	register object V100;
	V98= STREF(object,(V87),0);
	V99= list(2,(V88),(V89));
	V100= STREF(object,(V87),4);
	if(((V100))==Cnil){
	goto T312;}
	if((CMPcdr((V100)))!=Cnil){
	goto T312;}
	base[4]= (V99);
	base[5]= CMPcar((V100));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V98);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T312;
T312:;
	base[4]= (V98);
	base[5]= (V99);
	{object V101;
	V101= (V100);
	 vs_top=base+6;
	 while(V101!=Cnil)
	 {vs_push((V101)->c.c_car);V101=(V101)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T304;
T304:;
	base[4]= (V97);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T322;}
	base[4]= (V88);
	base[5]= (V89);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V87);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T322;
T322:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V87;
	base[9]= VV[43];
	base[10]= VV[79];
	base[11]= VV[45];
	base[12]= VV[80];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T272;
T272:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T269;
T269:;
	base[4]= V89;
	base[5]= VV[81];
	base[7]= V88;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V88;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3546	*/

static object LI58()

{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[82];
	base[4]= VV[83];
	V104= (VV[290]->s.s_gfdef);
	base[5]= listA(3,VV[51],V104,VV[84]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V105 = Cnil;
	VMR58(V105)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3554	*/

static object LI59()

{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V106 = Cnil;
	VMR59(V106)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-TYPE-ERROR3574	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[85];
	base[1]= VV[5];
	base[2]= VV[86];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile3590	*/

static object LI61()

{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk291)();
	vs_top=sup;
	{object V107 = Cnil;
	VMR61(V107)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3607	*/

static object LI62()

{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= VV[87];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V109 = Cnil;
	VMR62(V109)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3631	*/

static object LI63()

{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	(void)(sputprop(VV[85],VV[9],Cnil));
	{object V110 = Cnil;
	VMR63(V110)}
	return Cnil;
}
/*	local entry for function progn 'compile3643	*/

static object LI64()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V111 = Cnil;
	VMR64(V111)}
	return Cnil;
}
/*	function definition for Defclass CASE-FAILURE3663	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= VV[5];
	base[2]= VV[88];
	V112= listA(9,VV[18],VV[89],VV[20],VV[90],VV[22],Cnil,VV[23],VV[91],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V112,listA(9,VV[18],VV[92],VV[20],VV[93],VV[22],Cnil,VV[23],VV[94],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile3681	*/

static object LI66()

{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk292)();
	vs_top=sup;
	{object V113 = Cnil;
	VMR66(V113)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3698	*/

static object LI67()

{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	base[0]= VV[95];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V115 = Cnil;
	VMR67(V115)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3722	*/

static object LI68()

{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	(void)(sputprop(VV[40],VV[9],Cnil));
	{object V116 = Cnil;
	VMR68(V116)}
	return Cnil;
}
/*	local entry for function progn 'compile3738	*/

static object LI69()

{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V117 = Cnil;
	VMR69(V117)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (CASE-FAILURE T))	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	{object V118;
	register object V119;
	register object V120;
	register object V121;
	V118=(base[0]);
	V119=(base[1]);
	V120=(base[2]);
	V121=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T385;}
	if(((V119))==Cnil){
	goto T388;}
	base[4]= (V119);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T392;}
	base[4]= STREF(object,(V119),0);
	base[5]= STREF(object,(V119),4);
	base[6]= STREF(object,(V119),8);
	base[7]= (V120);
	base[8]= (V121);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T392;
T392:;
	if(!(type_of((V119))==t_fixnum)){
	goto T402;}
	{object V124;
	if(type_of(V120)==t_structure){
	goto T408;}
	goto T406;
	goto T408;
T408:;
	if(!(((V120)->str.str_def)==(VV[97]))){
	goto T406;}
	V124= STREF(object,(V120),4);
	goto T404;
	goto T406;
T406:;{object V126;
	V126= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V120);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V127= vs_base[0];
	if(!((V126)==(CMPcar(V127)))){
	goto T411;}}
	V124= CMPcar(((V120))->cc.cc_turbo[12]);
	goto T404;
	goto T411;
T411:;
	V124= Cnil;
	goto T404;
T404:;
	if(((V124))==Cnil){
	goto T417;}
	base[4]= ((V124))->v.v_self[fix((V119))]= (V120);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T417;
T417:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T402;
T402:;
	{register object V129;
	V129= V119;
	base[4]= (V129);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T420;}
	{object V130;
	object V131;
	register object V132;
	V130= STREF(object,(V119),0);
	V131= list(2,(V120),(V121));
	V132= STREF(object,(V119),4);
	if(((V132))==Cnil){
	goto T428;}
	if((CMPcdr((V132)))!=Cnil){
	goto T428;}
	base[4]= (V131);
	base[5]= CMPcar((V132));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V130);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T428;
T428:;
	base[4]= (V130);
	base[5]= (V131);
	{object V133;
	V133= (V132);
	 vs_top=base+6;
	 while(V133!=Cnil)
	 {vs_push((V133)->c.c_car);V133=(V133)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T420;
T420:;
	base[4]= (V129);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T438;}
	base[4]= (V120);
	base[5]= (V121);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V119);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T438;
T438:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V119;
	base[9]= VV[43];
	base[10]= VV[98];
	base[11]= VV[45];
	base[12]= VV[99];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T388;
T388:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T385;
T385:;
	base[4]= V121;
	base[5]= VV[100];
	base[7]= V120;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V120;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= V120;
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3935	*/

static object LI71()

{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[101];
	base[4]= VV[102];
	V136= (VV[295]->s.s_gfdef);
	base[5]= listA(3,VV[51],V136,VV[103]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V137 = Cnil;
	VMR71(V137)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3943	*/

static object LI72()

{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V138 = Cnil;
	VMR72(V138)}
	return Cnil;
}
/*	function definition for Defclass PROGRAM-ERROR3963	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[104];
	base[1]= VV[5];
	base[2]= VV[105];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile3979	*/

static object LI74()

{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk296)();
	vs_top=sup;
	{object V139 = Cnil;
	VMR74(V139)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3996	*/

static object LI75()

{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	base[0]= VV[106];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V141 = Cnil;
	VMR75(V141)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4020	*/

static object LI76()

{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	(void)(sputprop(VV[104],VV[9],Cnil));
	{object V142 = Cnil;
	VMR76(V142)}
	return Cnil;
}
/*	local entry for function progn 'compile4032	*/

static object LI77()

{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V143 = Cnil;
	VMR77(V143)}
	return Cnil;
}
/*	function definition for Defclass CONTROL-ERROR4052	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[107];
	base[1]= VV[5];
	base[2]= VV[108];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile4068	*/

static object LI79()

{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk297)();
	vs_top=sup;
	{object V144 = Cnil;
	VMR79(V144)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4085	*/

static object LI80()

{	 VMB80 VMS80 VMV80
	goto TTL;
TTL:;
	base[0]= VV[109];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V146 = Cnil;
	VMR80(V146)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4109	*/

static object LI81()

{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)(sputprop(VV[107],VV[9],Cnil));
	{object V147 = Cnil;
	VMR81(V147)}
	return Cnil;
}
/*	local entry for function progn 'compile4121	*/

static object LI82()

{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	{object V148 = Cnil;
	VMR82(V148)}
	return Cnil;
}
/*	function definition for Defclass PARSE-ERROR4141	*/

static void L83()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[110];
	base[1]= VV[5];
	base[2]= VV[111];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile4157	*/

static object LI84()

{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk298)();
	vs_top=sup;
	{object V149 = Cnil;
	VMR84(V149)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4174	*/

static object LI85()

{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	base[0]= VV[112];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V151 = Cnil;
	VMR85(V151)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4198	*/

static object LI86()

{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	(void)(sputprop(VV[110],VV[9],Cnil));
	{object V152 = Cnil;
	VMR86(V152)}
	return Cnil;
}
/*	local entry for function progn 'compile4210	*/

static object LI87()

{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{object V153 = Cnil;
	VMR87(V153)}
	return Cnil;
}
/*	function definition for Defclass STREAM-ERROR4230	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[113];
	base[1]= VV[5];
	base[2]= VV[114];
	V154= listA(9,VV[18],VV[115],VV[20],VV[116],VV[22],Cnil,VV[23],VV[117],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V154,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile4247	*/

static object LI89()

{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk299)();
	vs_top=sup;
	{object V155 = Cnil;
	VMR89(V155)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4264	*/

static object LI90()

{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	base[0]= VV[118];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V157 = Cnil;
	VMR90(V157)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4288	*/

static object LI91()

{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	(void)(sputprop(VV[113],VV[9],Cnil));
	{object V158 = Cnil;
	VMR91(V158)}
	return Cnil;
}
/*	local entry for function progn 'compile4300	*/

static object LI92()

{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	{object V159 = Cnil;
	VMR92(V159)}
	return Cnil;
}
/*	function definition for Defclass END-OF-FILE4320	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[119];
	base[1]= VV[5];
	base[2]= VV[120];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile4336	*/

static object LI94()

{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk300)();
	vs_top=sup;
	{object V160 = Cnil;
	VMR94(V160)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4353	*/

static object LI95()

{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	base[0]= VV[121];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V162 = Cnil;
	VMR95(V162)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4377	*/

static object LI96()

{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	(void)(sputprop(VV[119],VV[9],Cnil));
	{object V163 = Cnil;
	VMR96(V163)}
	return Cnil;
}
/*	local entry for function progn 'compile4393	*/

static object LI97()

{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[122];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V164 = Cnil;
	VMR97(V164)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (END-OF-FILE T))	*/

static void L98()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{object V165;
	register object V166;
	register object V167;
	register object V168;
	V165=(base[0]);
	V166=(base[1]);
	V167=(base[2]);
	V168=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T542;}
	if(((V166))==Cnil){
	goto T545;}
	base[4]= (V166);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T549;}
	base[4]= STREF(object,(V166),0);
	base[5]= STREF(object,(V166),4);
	base[6]= STREF(object,(V166),8);
	base[7]= (V167);
	base[8]= (V168);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T549;
T549:;
	if(!(type_of((V166))==t_fixnum)){
	goto T559;}
	{object V171;
	if(type_of(V167)==t_structure){
	goto T565;}
	goto T563;
	goto T565;
T565:;
	if(!(((V167)->str.str_def)==(VV[123]))){
	goto T563;}
	V171= STREF(object,(V167),4);
	goto T561;
	goto T563;
T563:;{object V173;
	V173= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V167);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V174= vs_base[0];
	if(!((V173)==(CMPcar(V174)))){
	goto T568;}}
	V171= CMPcar(((V167))->cc.cc_turbo[12]);
	goto T561;
	goto T568;
T568:;
	V171= Cnil;
	goto T561;
T561:;
	if(((V171))==Cnil){
	goto T574;}
	base[4]= ((V171))->v.v_self[fix((V166))]= (V167);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T574;
T574:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T559;
T559:;
	{register object V176;
	V176= V166;
	base[4]= (V176);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T577;}
	{object V177;
	object V178;
	register object V179;
	V177= STREF(object,(V166),0);
	V178= list(2,(V167),(V168));
	V179= STREF(object,(V166),4);
	if(((V179))==Cnil){
	goto T585;}
	if((CMPcdr((V179)))!=Cnil){
	goto T585;}
	base[4]= (V178);
	base[5]= CMPcar((V179));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V177);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T585;
T585:;
	base[4]= (V177);
	base[5]= (V178);
	{object V180;
	V180= (V179);
	 vs_top=base+6;
	 while(V180!=Cnil)
	 {vs_push((V180)->c.c_car);V180=(V180)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T577;
T577:;
	base[4]= (V176);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T595;}
	base[4]= (V167);
	base[5]= (V168);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V166);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T595;
T595:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V166;
	base[9]= VV[43];
	base[10]= VV[124];
	base[11]= VV[45];
	base[12]= VV[125];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T545;
T545:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T542;
T542:;
	base[4]= V168;
	base[5]= VV[126];
	base[7]= V167;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4590	*/

static object LI99()

{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[127];
	base[4]= VV[128];
	V183= (VV[302]->s.s_gfdef);
	base[5]= listA(3,VV[51],V183,VV[129]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V184 = Cnil;
	VMR99(V184)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4598	*/

static object LI100()

{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V185 = Cnil;
	VMR100(V185)}
	return Cnil;
}
/*	function definition for Defclass FILE-ERROR4618	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[130];
	base[1]= VV[5];
	base[2]= VV[131];
	V186= listA(9,VV[18],VV[132],VV[20],VV[133],VV[22],Cnil,VV[23],VV[134],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V186,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile4635	*/

static object LI102()

{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk303)();
	vs_top=sup;
	{object V187 = Cnil;
	VMR102(V187)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4652	*/

static object LI103()

{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[135];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V189 = Cnil;
	VMR103(V189)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4676	*/

static object LI104()

{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	(void)(sputprop(VV[130],VV[9],Cnil));
	{object V190 = Cnil;
	VMR104(V190)}
	return Cnil;
}
/*	local entry for function progn 'compile4688	*/

static object LI105()

{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V191 = Cnil;
	VMR105(V191)}
	return Cnil;
}
/*	function definition for Defclass PACKAGE-ERROR4708	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[136];
	base[1]= VV[5];
	base[2]= VV[137];
	V192= listA(9,VV[18],VV[138],VV[20],VV[139],VV[22],Cnil,VV[23],VV[140],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V192,listA(9,VV[18],VV[141],VV[20],VV[142],VV[22],Cnil,VV[23],VV[143],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile4726	*/

static object LI107()

{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk304)();
	vs_top=sup;
	{object V193 = Cnil;
	VMR107(V193)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4743	*/

static object LI108()

{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	base[0]= VV[144];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V195 = Cnil;
	VMR108(V195)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4767	*/

static object LI109()

{	 VMB109 VMS109 VMV109
	goto TTL;
TTL:;
	(void)(sputprop(VV[136],VV[9],Cnil));
	{object V196 = Cnil;
	VMR109(V196)}
	return Cnil;
}
/*	local entry for function progn 'compile4783	*/

static object LI110()

{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[145];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V197 = Cnil;
	VMR110(V197)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (PACKAGE-ERROR T))	*/

static void L111()
{register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{object V198;
	register object V199;
	register object V200;
	register object V201;
	V198=(base[0]);
	V199=(base[1]);
	V200=(base[2]);
	V201=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T656;}
	if(((V199))==Cnil){
	goto T659;}
	base[4]= (V199);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T663;}
	base[4]= STREF(object,(V199),0);
	base[5]= STREF(object,(V199),4);
	base[6]= STREF(object,(V199),8);
	base[7]= (V200);
	base[8]= (V201);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T663;
T663:;
	if(!(type_of((V199))==t_fixnum)){
	goto T673;}
	{object V204;
	if(type_of(V200)==t_structure){
	goto T679;}
	goto T677;
	goto T679;
T679:;
	if(!(((V200)->str.str_def)==(VV[146]))){
	goto T677;}
	V204= STREF(object,(V200),4);
	goto T675;
	goto T677;
T677:;{object V206;
	V206= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V200);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V207= vs_base[0];
	if(!((V206)==(CMPcar(V207)))){
	goto T682;}}
	V204= CMPcar(((V200))->cc.cc_turbo[12]);
	goto T675;
	goto T682;
T682:;
	V204= Cnil;
	goto T675;
T675:;
	if(((V204))==Cnil){
	goto T688;}
	base[4]= ((V204))->v.v_self[fix((V199))]= (V200);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T688;
T688:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T673;
T673:;
	{register object V209;
	V209= V199;
	base[4]= (V209);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T691;}
	{object V210;
	object V211;
	register object V212;
	V210= STREF(object,(V199),0);
	V211= list(2,(V200),(V201));
	V212= STREF(object,(V199),4);
	if(((V212))==Cnil){
	goto T699;}
	if((CMPcdr((V212)))!=Cnil){
	goto T699;}
	base[4]= (V211);
	base[5]= CMPcar((V212));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V210);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T699;
T699:;
	base[4]= (V210);
	base[5]= (V211);
	{object V213;
	V213= (V212);
	 vs_top=base+6;
	 while(V213!=Cnil)
	 {vs_push((V213)->c.c_car);V213=(V213)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T691;
T691:;
	base[4]= (V209);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T709;}
	base[4]= (V200);
	base[5]= (V201);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V199);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T709;
T709:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V199;
	base[9]= VV[43];
	base[10]= VV[147];
	base[11]= VV[45];
	base[12]= VV[148];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T659;
T659:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T656;
T656:;
	base[4]= V201;
	base[5]= VV[149];
	base[7]= V200;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V200;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4980	*/

static object LI112()

{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[150];
	base[4]= VV[151];
	V216= (VV[307]->s.s_gfdef);
	base[5]= listA(3,VV[51],V216,VV[152]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V217 = Cnil;
	VMR112(V217)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4988	*/

static object LI113()

{	 VMB113 VMS113 VMV113
	goto TTL;
TTL:;
	{object V218 = Cnil;
	VMR113(V218)}
	return Cnil;
}
/*	function definition for Defclass CELL-ERROR5008	*/

static void L114()
{register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[153];
	base[1]= VV[5];
	base[2]= VV[154];
	V219= listA(9,VV[18],VV[89],VV[20],VV[155],VV[22],Cnil,VV[23],VV[156],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V219,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile5025	*/

static object LI115()

{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk308)();
	vs_top=sup;
	{object V220 = Cnil;
	VMR115(V220)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5042	*/

static object LI116()

{	 VMB116 VMS116 VMV116
	goto TTL;
TTL:;
	base[0]= VV[157];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V222 = Cnil;
	VMR116(V222)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5066	*/

static object LI117()

{	 VMB117 VMS117 VMV117
	goto TTL;
TTL:;
	(void)(sputprop(VV[153],VV[9],Cnil));
	{object V223 = Cnil;
	VMR117(V223)}
	return Cnil;
}
/*	local entry for function progn 'compile5078	*/

static object LI118()

{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	{object V224 = Cnil;
	VMR118(V224)}
	return Cnil;
}
/*	function definition for Defclass UNBOUND-VARIABLE5098	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[158];
	base[1]= VV[5];
	base[2]= VV[159];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile5114	*/

static object LI120()

{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V225 = Cnil;
	VMR120(V225)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5131	*/

static object LI121()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	base[0]= VV[160];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V227 = Cnil;
	VMR121(V227)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5155	*/

static object LI122()

{	 VMB122 VMS122 VMV122
	goto TTL;
TTL:;
	(void)(sputprop(VV[158],VV[9],Cnil));
	{object V228 = Cnil;
	VMR122(V228)}
	return Cnil;
}
/*	local entry for function progn 'compile5171	*/

static object LI123()

{	 VMB123 VMS123 VMV123
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[161];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V229 = Cnil;
	VMR123(V229)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNBOUND-VARIABLE T))	*/

static void L124()
{register object *base=vs_base;
	register object *sup=base+VM124; VC124
	vs_check;
	{object V230;
	register object V231;
	register object V232;
	register object V233;
	V230=(base[0]);
	V231=(base[1]);
	V232=(base[2]);
	V233=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T772;}
	if(((V231))==Cnil){
	goto T775;}
	base[4]= (V231);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T779;}
	base[4]= STREF(object,(V231),0);
	base[5]= STREF(object,(V231),4);
	base[6]= STREF(object,(V231),8);
	base[7]= (V232);
	base[8]= (V233);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T779;
T779:;
	if(!(type_of((V231))==t_fixnum)){
	goto T789;}
	{object V236;
	if(type_of(V232)==t_structure){
	goto T795;}
	goto T793;
	goto T795;
T795:;
	if(!(((V232)->str.str_def)==(VV[162]))){
	goto T793;}
	V236= STREF(object,(V232),4);
	goto T791;
	goto T793;
T793:;{object V238;
	V238= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V232);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V239= vs_base[0];
	if(!((V238)==(CMPcar(V239)))){
	goto T798;}}
	V236= CMPcar(((V232))->cc.cc_turbo[12]);
	goto T791;
	goto T798;
T798:;
	V236= Cnil;
	goto T791;
T791:;
	if(((V236))==Cnil){
	goto T804;}
	base[4]= ((V236))->v.v_self[fix((V231))]= (V232);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T804;
T804:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T789;
T789:;
	{register object V241;
	V241= V231;
	base[4]= (V241);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T807;}
	{object V242;
	object V243;
	register object V244;
	V242= STREF(object,(V231),0);
	V243= list(2,(V232),(V233));
	V244= STREF(object,(V231),4);
	if(((V244))==Cnil){
	goto T815;}
	if((CMPcdr((V244)))!=Cnil){
	goto T815;}
	base[4]= (V243);
	base[5]= CMPcar((V244));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V242);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T815;
T815:;
	base[4]= (V242);
	base[5]= (V243);
	{object V245;
	V245= (V244);
	 vs_top=base+6;
	 while(V245!=Cnil)
	 {vs_push((V245)->c.c_car);V245=(V245)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T807;
T807:;
	base[4]= (V241);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T825;}
	base[4]= (V232);
	base[5]= (V233);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V231);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T825;
T825:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V231;
	base[9]= VV[43];
	base[10]= VV[163];
	base[11]= VV[45];
	base[12]= VV[164];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T775;
T775:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T772;
T772:;
	base[4]= V233;
	base[5]= VV[165];
	base[7]= V232;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5368	*/

static object LI125()

{	 VMB125 VMS125 VMV125
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[166];
	base[4]= VV[167];
	V248= (VV[311]->s.s_gfdef);
	base[5]= listA(3,VV[51],V248,VV[168]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V249 = Cnil;
	VMR125(V249)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5376	*/

static object LI126()

{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	{object V250 = Cnil;
	VMR126(V250)}
	return Cnil;
}
/*	function definition for Defclass UNDEFINED-FUNCTION5396	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[169];
	base[1]= VV[5];
	base[2]= VV[170];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile5412	*/

static object LI128()

{	 VMB128 VMS128 VMV128
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk312)();
	vs_top=sup;
	{object V251 = Cnil;
	VMR128(V251)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5429	*/

static object LI129()

{	 VMB129 VMS129 VMV129
	goto TTL;
TTL:;
	base[0]= VV[171];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V253 = Cnil;
	VMR129(V253)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5453	*/

static object LI130()

{	 VMB130 VMS130 VMV130
	goto TTL;
TTL:;
	(void)(sputprop(VV[169],VV[9],Cnil));
	{object V254 = Cnil;
	VMR130(V254)}
	return Cnil;
}
/*	local entry for function progn 'compile5469	*/

static object LI131()

{	 VMB131 VMS131 VMV131
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[172];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V255 = Cnil;
	VMR131(V255)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNDEFINED-FUNCTION T))	*/

static void L132()
{register object *base=vs_base;
	register object *sup=base+VM132; VC132
	vs_check;
	{object V256;
	register object V257;
	register object V258;
	register object V259;
	V256=(base[0]);
	V257=(base[1]);
	V258=(base[2]);
	V259=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T873;}
	if(((V257))==Cnil){
	goto T876;}
	base[4]= (V257);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T880;}
	base[4]= STREF(object,(V257),0);
	base[5]= STREF(object,(V257),4);
	base[6]= STREF(object,(V257),8);
	base[7]= (V258);
	base[8]= (V259);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T880;
T880:;
	if(!(type_of((V257))==t_fixnum)){
	goto T890;}
	{object V262;
	if(type_of(V258)==t_structure){
	goto T896;}
	goto T894;
	goto T896;
T896:;
	if(!(((V258)->str.str_def)==(VV[173]))){
	goto T894;}
	V262= STREF(object,(V258),4);
	goto T892;
	goto T894;
T894:;{object V264;
	V264= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V258);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V265= vs_base[0];
	if(!((V264)==(CMPcar(V265)))){
	goto T899;}}
	V262= CMPcar(((V258))->cc.cc_turbo[12]);
	goto T892;
	goto T899;
T899:;
	V262= Cnil;
	goto T892;
T892:;
	if(((V262))==Cnil){
	goto T905;}
	base[4]= ((V262))->v.v_self[fix((V257))]= (V258);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T905;
T905:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T890;
T890:;
	{register object V267;
	V267= V257;
	base[4]= (V267);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T908;}
	{object V268;
	object V269;
	register object V270;
	V268= STREF(object,(V257),0);
	V269= list(2,(V258),(V259));
	V270= STREF(object,(V257),4);
	if(((V270))==Cnil){
	goto T916;}
	if((CMPcdr((V270)))!=Cnil){
	goto T916;}
	base[4]= (V269);
	base[5]= CMPcar((V270));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V268);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T916;
T916:;
	base[4]= (V268);
	base[5]= (V269);
	{object V271;
	V271= (V270);
	 vs_top=base+6;
	 while(V271!=Cnil)
	 {vs_push((V271)->c.c_car);V271=(V271)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T908;
T908:;
	base[4]= (V267);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T926;}
	base[4]= (V258);
	base[5]= (V259);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V257);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T926;
T926:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V257;
	base[9]= VV[43];
	base[10]= VV[174];
	base[11]= VV[45];
	base[12]= VV[175];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T876;
T876:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T873;
T873:;
	base[4]= V259;
	base[5]= VV[176];
	base[7]= V258;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5666	*/

static object LI133()

{	 VMB133 VMS133 VMV133
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[177];
	base[4]= VV[178];
	V274= (VV[313]->s.s_gfdef);
	base[5]= listA(3,VV[51],V274,VV[179]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V275 = Cnil;
	VMR133(V275)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5674	*/

static object LI134()

{	 VMB134 VMS134 VMV134
	goto TTL;
TTL:;
	{object V276 = Cnil;
	VMR134(V276)}
	return Cnil;
}
/*	function definition for Defclass ARITHMETIC-ERROR5694	*/

static void L135()
{register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[180];
	base[1]= VV[5];
	base[2]= VV[181];
	V277= listA(9,VV[18],VV[182],VV[20],VV[183],VV[22],Cnil,VV[23],VV[184],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V277,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile5711	*/

static object LI136()

{	 VMB136 VMS136 VMV136
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk314)();
	vs_top=sup;
	{object V278 = Cnil;
	VMR136(V278)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5728	*/

static object LI137()

{	 VMB137 VMS137 VMV137
	goto TTL;
TTL:;
	base[0]= VV[185];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V280 = Cnil;
	VMR137(V280)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5752	*/

static object LI138()

{	 VMB138 VMS138 VMV138
	goto TTL;
TTL:;
	(void)(sputprop(VV[180],VV[9],Cnil));
	{object V281 = Cnil;
	VMR138(V281)}
	return Cnil;
}
/*	local entry for function progn 'compile5764	*/

static object LI139()

{	 VMB139 VMS139 VMV139
	goto TTL;
TTL:;
	{object V282 = Cnil;
	VMR139(V282)}
	return Cnil;
}
/*	function definition for Defclass DIVISION-BY-ZERO5784	*/

static void L140()
{register object *base=vs_base;
	register object *sup=base+VM140; VC140
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[186];
	base[1]= VV[5];
	base[2]= VV[187];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile5800	*/

static object LI141()

{	 VMB141 VMS141 VMV141
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk315)();
	vs_top=sup;
	{object V283 = Cnil;
	VMR141(V283)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5817	*/

static object LI142()

{	 VMB142 VMS142 VMV142
	goto TTL;
TTL:;
	base[0]= VV[188];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V285 = Cnil;
	VMR142(V285)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5841	*/

static object LI143()

{	 VMB143 VMS143 VMV143
	goto TTL;
TTL:;
	(void)(sputprop(VV[186],VV[9],Cnil));
	{object V286 = Cnil;
	VMR143(V286)}
	return Cnil;
}
/*	local entry for function progn 'compile5853	*/

static object LI144()

{	 VMB144 VMS144 VMV144
	goto TTL;
TTL:;
	{object V287 = Cnil;
	VMR144(V287)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-OVERFLOW5873	*/

static void L145()
{register object *base=vs_base;
	register object *sup=base+VM145; VC145
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[189];
	base[1]= VV[5];
	base[2]= VV[190];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile5889	*/

static object LI146()

{	 VMB146 VMS146 VMV146
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk316)();
	vs_top=sup;
	{object V288 = Cnil;
	VMR146(V288)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5906	*/

static object LI147()

{	 VMB147 VMS147 VMV147
	goto TTL;
TTL:;
	base[0]= VV[191];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V290 = Cnil;
	VMR147(V290)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5930	*/

static object LI148()

{	 VMB148 VMS148 VMV148
	goto TTL;
TTL:;
	(void)(sputprop(VV[189],VV[9],Cnil));
	{object V291 = Cnil;
	VMR148(V291)}
	return Cnil;
}
/*	local entry for function progn 'compile5942	*/

static object LI149()

{	 VMB149 VMS149 VMV149
	goto TTL;
TTL:;
	{object V292 = Cnil;
	VMR149(V292)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-UNDERFLOW5962	*/

static void L150()
{register object *base=vs_base;
	register object *sup=base+VM150; VC150
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
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile5978	*/

static object LI151()

{	 VMB151 VMS151 VMV151
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk317)();
	vs_top=sup;
	{object V293 = Cnil;
	VMR151(V293)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5995	*/

static object LI152()

{	 VMB152 VMS152 VMV152
	goto TTL;
TTL:;
	base[0]= VV[194];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V295 = Cnil;
	VMR152(V295)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6019	*/

static object LI153()

{	 VMB153 VMS153 VMV153
	goto TTL;
TTL:;
	(void)(sputprop(VV[192],VV[9],Cnil));
	{object V296 = Cnil;
	VMR153(V296)}
	return Cnil;
}
/*	local entry for function progn 'compile6031	*/

static object LI154()

{	 VMB154 VMS154 VMV154
	goto TTL;
TTL:;
	{object V297 = Cnil;
	VMR154(V297)}
	return Cnil;
}
/*	function definition for Defclass ABORT-FAILURE6051	*/

static void L155()
{register object *base=vs_base;
	register object *sup=base+VM155; VC155
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[195];
	base[1]= VV[5];
	base[2]= VV[196];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile6067	*/

static object LI156()

{	 VMB156 VMS156 VMV156
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk318)();
	vs_top=sup;
	{object V298 = Cnil;
	VMR156(V298)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6084	*/

static object LI157()

{	 VMB157 VMS157 VMV157
	goto TTL;
TTL:;
	base[0]= VV[197];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V300 = Cnil;
	VMR157(V300)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6108	*/

static object LI158()

{	 VMB158 VMS158 VMV158
	goto TTL;
TTL:;
	(void)(sputprop(VV[195],VV[9],Cnil));
	{object V301 = Cnil;
	VMR158(V301)}
	return Cnil;
}
/*	local entry for function progn 'compile6124	*/

static object LI159()

{	 VMB159 VMS159 VMV159
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[198];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V302 = Cnil;
	VMR159(V302)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (ABORT-FAILURE T))	*/

static void L160()
{register object *base=vs_base;
	register object *sup=base+VM160; VC160
	vs_check;
	{object V303;
	register object V304;
	register object V305;
	register object V306;
	V303=(base[0]);
	V304=(base[1]);
	V305=(base[2]);
	V306=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1026;}
	if(((V304))==Cnil){
	goto T1029;}
	base[4]= (V304);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1033;}
	base[4]= STREF(object,(V304),0);
	base[5]= STREF(object,(V304),4);
	base[6]= STREF(object,(V304),8);
	base[7]= (V305);
	base[8]= (V306);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1033;
T1033:;
	if(!(type_of((V304))==t_fixnum)){
	goto T1043;}
	{object V309;
	if(type_of(V305)==t_structure){
	goto T1049;}
	goto T1047;
	goto T1049;
T1049:;
	if(!(((V305)->str.str_def)==(VV[199]))){
	goto T1047;}
	V309= STREF(object,(V305),4);
	goto T1045;
	goto T1047;
T1047:;{object V311;
	V311= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V305);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V312= vs_base[0];
	if(!((V311)==(CMPcar(V312)))){
	goto T1052;}}
	V309= CMPcar(((V305))->cc.cc_turbo[12]);
	goto T1045;
	goto T1052;
T1052:;
	V309= Cnil;
	goto T1045;
T1045:;
	if(((V309))==Cnil){
	goto T1058;}
	base[4]= ((V309))->v.v_self[fix((V304))]= (V305);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1058;
T1058:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1043;
T1043:;
	{register object V314;
	V314= V304;
	base[4]= (V314);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1061;}
	{object V315;
	object V316;
	register object V317;
	V315= STREF(object,(V304),0);
	V316= list(2,(V305),(V306));
	V317= STREF(object,(V304),4);
	if(((V317))==Cnil){
	goto T1069;}
	if((CMPcdr((V317)))!=Cnil){
	goto T1069;}
	base[4]= (V316);
	base[5]= CMPcar((V317));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V315);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1069;
T1069:;
	base[4]= (V315);
	base[5]= (V316);
	{object V318;
	V318= (V317);
	 vs_top=base+6;
	 while(V318!=Cnil)
	 {vs_push((V318)->c.c_car);V318=(V318)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1061;
T1061:;
	base[4]= (V314);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1079;}
	base[4]= (V305);
	base[5]= (V306);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V304);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1079;
T1079:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V304;
	base[9]= VV[43];
	base[10]= VV[200];
	base[11]= VV[45];
	base[12]= VV[201];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1029;
T1029:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T1026;
T1026:;
	base[4]= VV[202];
	base[5]= V306;
	vs_top=(vs_base=base+4)+2;
	Lwrite_string();
	return;
	}
}
/*	local entry for function progn 'compile6325	*/

static object LI161()

{	 VMB161 VMS161 VMV161
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[203];
	base[4]= VV[204];
	V321= (VV[319]->s.s_gfdef);
	base[5]= listA(3,VV[51],V321,VV[205]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V322 = Cnil;
	VMR161(V322)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6333	*/

static object LI162()

{	 VMB162 VMS162 VMV162
	goto TTL;
TTL:;
	{object V323 = Cnil;
	VMR162(V323)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-ERROR6353	*/

static void L163()
{register object *base=vs_base;
	register object *sup=base+VM163; VC163
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[206];
	base[1]= VV[5];
	base[2]= VV[207];
	base[4]= VV[26];
	base[5]= (VV[273]->s.s_gfdef);
	base[6]= VV[18];
	base[7]= VV[208];
	base[8]= VV[20];
	base[9]= VV[209];
	base[10]= VV[22];
	base[11]= Cnil;
	base[12]= VV[23];
	base[13]= VV[210];
	base[14]= VV[211];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V324= vs_base[0];
	base[3]= make_cons(V324,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile6370	*/

static object LI164()

{	 VMB164 VMS164 VMV164
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk320)();
	vs_top=sup;
	{object V325 = Cnil;
	VMR164(V325)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6387	*/

static object LI165()

{	 VMB165 VMS165 VMV165
	goto TTL;
TTL:;
	base[0]= VV[212];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V327 = Cnil;
	VMR165(V327)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6411	*/

static object LI166()

{	 VMB166 VMS166 VMV166
	goto TTL;
TTL:;
	(void)(sputprop(VV[206],VV[9],Cnil));
	{object V328 = Cnil;
	VMR166(V328)}
	return Cnil;
}
/*	local entry for function progn 'compile6427	*/

static object LI167()

{	 VMB167 VMS167 VMV167
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[213];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V329 = Cnil;
	VMR167(V329)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-ERROR T))	*/

static void L168()
{register object *base=vs_base;
	register object *sup=base+VM168; VC168
	vs_check;
	{object V330;
	register object V331;
	register object V332;
	register object V333;
	V330=(base[0]);
	V331=(base[1]);
	V332=(base[2]);
	V333=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1137;}
	if(((V331))==Cnil){
	goto T1140;}
	base[4]= (V331);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1144;}
	base[4]= STREF(object,(V331),0);
	base[5]= STREF(object,(V331),4);
	base[6]= STREF(object,(V331),8);
	base[7]= (V332);
	base[8]= (V333);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1144;
T1144:;
	if(!(type_of((V331))==t_fixnum)){
	goto T1154;}
	{object V336;
	if(type_of(V332)==t_structure){
	goto T1160;}
	goto T1158;
	goto T1160;
T1160:;
	if(!(((V332)->str.str_def)==(VV[214]))){
	goto T1158;}
	V336= STREF(object,(V332),4);
	goto T1156;
	goto T1158;
T1158:;{object V338;
	V338= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V332);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V339= vs_base[0];
	if(!((V338)==(CMPcar(V339)))){
	goto T1163;}}
	V336= CMPcar(((V332))->cc.cc_turbo[12]);
	goto T1156;
	goto T1163;
T1163:;
	V336= Cnil;
	goto T1156;
T1156:;
	if(((V336))==Cnil){
	goto T1169;}
	base[4]= ((V336))->v.v_self[fix((V331))]= (V332);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1169;
T1169:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1154;
T1154:;
	{register object V341;
	V341= V331;
	base[4]= (V341);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1172;}
	{object V342;
	object V343;
	register object V344;
	V342= STREF(object,(V331),0);
	V343= list(2,(V332),(V333));
	V344= STREF(object,(V331),4);
	if(((V344))==Cnil){
	goto T1180;}
	if((CMPcdr((V344)))!=Cnil){
	goto T1180;}
	base[4]= (V343);
	base[5]= CMPcar((V344));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V342);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1180;
T1180:;
	base[4]= (V342);
	base[5]= (V343);
	{object V345;
	V345= (V344);
	 vs_top=base+6;
	 while(V345!=Cnil)
	 {vs_push((V345)->c.c_car);V345=(V345)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1172;
T1172:;
	base[4]= (V341);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1190;}
	base[4]= (V332);
	base[5]= (V333);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V331);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1190;
T1190:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V331;
	base[9]= VV[43];
	base[10]= VV[215];
	base[11]= VV[45];
	base[12]= VV[216];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1140;
T1140:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T1137;
T1137:;
	{register object V347;
	V347= (V333);
	base[4]= V332;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1205;}
	base[4]= (V347);
	base[5]= VV[217];
	base[7]= V332;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T1205;
T1205:;
	if(((V331))==Cnil){
	goto T1214;}
	base[4]= (V331);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1218;}
	base[4]= STREF(object,(V331),0);
	base[5]= STREF(object,(V331),4);
	base[6]= STREF(object,(V331),8);
	base[7]= (V332);
	base[8]= (V347);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1218;
T1218:;
	if(!(type_of((V331))==t_fixnum)){
	goto T1228;}
	{object V349;
	if(type_of(V332)==t_structure){
	goto T1234;}
	goto T1232;
	goto T1234;
T1234:;
	if(!(((V332)->str.str_def)==(VV[218]))){
	goto T1232;}
	V349= STREF(object,(V332),4);
	goto T1230;
	goto T1232;
T1232:;{object V351;
	V351= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V332);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V352= vs_base[0];
	if(!((V351)==(CMPcar(V352)))){
	goto T1237;}}
	V349= CMPcar(((V332))->cc.cc_turbo[12]);
	goto T1230;
	goto T1237;
T1237:;
	V349= Cnil;
	goto T1230;
T1230:;
	if(((V349))==Cnil){
	goto T1243;}
	base[4]= ((V349))->v.v_self[fix((V331))]= (V332);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1243;
T1243:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1228;
T1228:;
	{register object V354;
	V354= V331;
	base[4]= (V354);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1246;}
	{object V355;
	object V356;
	register object V357;
	V355= STREF(object,(V331),0);
	V356= list(2,(V332),(V347));
	V357= STREF(object,(V331),4);
	if(((V357))==Cnil){
	goto T1254;}
	if((CMPcdr((V357)))!=Cnil){
	goto T1254;}
	base[4]= (V356);
	base[5]= CMPcar((V357));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V355);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1254;
T1254:;
	base[4]= (V355);
	base[5]= (V356);
	{object V358;
	V358= (V357);
	 vs_top=base+6;
	 while(V358!=Cnil)
	 {vs_push((V358)->c.c_car);V358=(V358)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1246;
T1246:;
	base[4]= (V354);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1264;}
	base[4]= (V332);
	base[5]= (V347);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V331);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1264;
T1264:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V331;
	base[9]= VV[43];
	base[10]= VV[219];
	base[11]= VV[45];
	base[12]= VV[220];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1214;
T1214:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;}
	}
}
/*	local entry for function progn 'compile6740	*/

static object LI169()

{	 VMB169 VMS169 VMV169
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[221];
	base[4]= VV[222];
	V359= (VV[322]->s.s_gfdef);
	base[5]= listA(3,VV[51],V359,VV[223]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V360 = Cnil;
	VMR169(V360)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6748	*/

static object LI170()

{	 VMB170 VMS170 VMV170
	goto TTL;
TTL:;
	{object V361 = Cnil;
	VMR170(V361)}
	return Cnil;
}
/*	local entry for function INTERNAL-SIMPLE-ERROR-PRINTER	*/

static object LI171(V364,V365)

register object V364;object V365;
{	 VMB171 VMS171 VMV171
	goto TTL;
TTL:;
	base[0]= (V364);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1289;}
	base[0]= (V365);
	base[1]= VV[224];
	base[3]= (V364);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T1289;
T1289:;
	base[0]= (V365);
	base[2]= (V364);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V366;
	base[2]= (V364);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	V366= vs_base[0];
	 vs_top=base+2;
	 while(V366!=Cnil)
	 {vs_push((V366)->c.c_car);V366=(V366)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V367 = vs_base[0];
	VMR171(V367)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-ERROR6780	*/

static void L172()
{register object *base=vs_base;
	register object *sup=base+VM172; VC172
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[225];
	base[1]= VV[5];
	base[2]= VV[226];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile6796	*/

static object LI173()

{	 VMB173 VMS173 VMV173
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk323)();
	vs_top=sup;
	{object V368 = Cnil;
	VMR173(V368)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6813	*/

static object LI174()

{	 VMB174 VMS174 VMV174
	goto TTL;
TTL:;
	base[0]= VV[227];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V370 = Cnil;
	VMR174(V370)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6837	*/

static object LI175()

{	 VMB175 VMS175 VMV175
	goto TTL;
TTL:;
	(void)(sputprop(VV[225],VV[9],Cnil));
	{object V371 = Cnil;
	VMR175(V371)}
	return Cnil;
}
/*	local entry for function progn 'compile6853	*/

static object LI176()

{	 VMB176 VMS176 VMV176
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[228];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V372 = Cnil;
	VMR176(V372)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-ERROR T))	*/

static void L177()
{register object *base=vs_base;
	register object *sup=base+VM177; VC177
	vs_check;
	{object V373;
	register object V374;
	register object V375;
	register object V376;
	V373=(base[0]);
	V374=(base[1]);
	V375=(base[2]);
	V376=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1321;}
	if(((V374))==Cnil){
	goto T1324;}
	base[4]= (V374);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1328;}
	base[4]= STREF(object,(V374),0);
	base[5]= STREF(object,(V374),4);
	base[6]= STREF(object,(V374),8);
	base[7]= (V375);
	base[8]= (V376);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1328;
T1328:;
	if(!(type_of((V374))==t_fixnum)){
	goto T1338;}
	{object V379;
	if(type_of(V375)==t_structure){
	goto T1344;}
	goto T1342;
	goto T1344;
T1344:;
	if(!(((V375)->str.str_def)==(VV[229]))){
	goto T1342;}
	V379= STREF(object,(V375),4);
	goto T1340;
	goto T1342;
T1342:;{object V381;
	V381= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V375);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	V382= vs_base[0];
	if(!((V381)==(CMPcar(V382)))){
	goto T1347;}}
	V379= CMPcar(((V375))->cc.cc_turbo[12]);
	goto T1340;
	goto T1347;
T1347:;
	V379= Cnil;
	goto T1340;
T1340:;
	if(((V379))==Cnil){
	goto T1353;}
	base[4]= ((V379))->v.v_self[fix((V374))]= (V375);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1353;
T1353:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1338;
T1338:;
	{register object V384;
	V384= V374;
	base[4]= (V384);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1356;}
	{object V385;
	object V386;
	register object V387;
	V385= STREF(object,(V374),0);
	V386= list(2,(V375),(V376));
	V387= STREF(object,(V374),4);
	if(((V387))==Cnil){
	goto T1364;}
	if((CMPcdr((V387)))!=Cnil){
	goto T1364;}
	base[4]= (V386);
	base[5]= CMPcar((V387));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V385);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1364;
T1364:;
	base[4]= (V385);
	base[5]= (V386);
	{object V388;
	V388= (V387);
	 vs_top=base+6;
	 while(V388!=Cnil)
	 {vs_push((V388)->c.c_car);V388=(V388)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1356;
T1356:;
	base[4]= (V384);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1374;}
	base[4]= (V375);
	base[5]= (V376);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V374);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1374;
T1374:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V374;
	base[9]= VV[43];
	base[10]= VV[230];
	base[11]= VV[45];
	base[12]= VV[231];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1324;
T1324:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk278)();
	return;
	goto T1321;
T1321:;
	base[4]= (*(LnkLI324))((V375),(V376));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile7046	*/

static object LI178()

{	 VMB178 VMS178 VMV178
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[232];
	base[4]= VV[233];
	V389= (VV[325]->s.s_gfdef);
	base[5]= listA(3,VV[51],V389,VV[234]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V390 = Cnil;
	VMR178(V390)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7054	*/

static object LI179()

{	 VMB179 VMS179 VMV179
	goto TTL;
TTL:;
	{object V391 = Cnil;
	VMR179(V391)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-TYPE-ERROR7074	*/

static void L180()
{register object *base=vs_base;
	register object *sup=base+VM180; VC180
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[235];
	base[1]= VV[5];
	base[2]= VV[236];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7090	*/

static object LI181()

{	 VMB181 VMS181 VMV181
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk326)();
	vs_top=sup;
	{object V392 = Cnil;
	VMR181(V392)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7107	*/

static object LI182()

{	 VMB182 VMS182 VMV182
	goto TTL;
TTL:;
	base[0]= VV[237];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V394 = Cnil;
	VMR182(V394)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7131	*/

static object LI183()

{	 VMB183 VMS183 VMV183
	goto TTL;
TTL:;
	(void)(sputprop(VV[235],VV[9],Cnil));
	{object V395 = Cnil;
	VMR183(V395)}
	return Cnil;
}
/*	local entry for function progn 'compile7143	*/

static object LI184()

{	 VMB184 VMS184 VMV184
	goto TTL;
TTL:;
	{object V396 = Cnil;
	VMR184(V396)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-PACKAGE-ERROR7163	*/

static void L185()
{register object *base=vs_base;
	register object *sup=base+VM185; VC185
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[238];
	base[1]= VV[5];
	base[2]= VV[239];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7179	*/

static object LI186()

{	 VMB186 VMS186 VMV186
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	{object V397 = Cnil;
	VMR186(V397)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7196	*/

static object LI187()

{	 VMB187 VMS187 VMV187
	goto TTL;
TTL:;
	base[0]= VV[240];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V399 = Cnil;
	VMR187(V399)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7220	*/

static object LI188()

{	 VMB188 VMS188 VMV188
	goto TTL;
TTL:;
	(void)(sputprop(VV[238],VV[9],Cnil));
	{object V400 = Cnil;
	VMR188(V400)}
	return Cnil;
}
/*	local entry for function progn 'compile7232	*/

static object LI189()

{	 VMB189 VMS189 VMV189
	goto TTL;
TTL:;
	{object V401 = Cnil;
	VMR189(V401)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7252	*/

static void L190()
{register object *base=vs_base;
	register object *sup=base+VM190; VC190
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[241];
	base[1]= VV[5];
	base[2]= VV[242];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7268	*/

static object LI191()

{	 VMB191 VMS191 VMV191
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk328)();
	vs_top=sup;
	{object V402 = Cnil;
	VMR191(V402)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7285	*/

static object LI192()

{	 VMB192 VMS192 VMV192
	goto TTL;
TTL:;
	base[0]= VV[243];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V404 = Cnil;
	VMR192(V404)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7309	*/

static object LI193()

{	 VMB193 VMS193 VMV193
	goto TTL;
TTL:;
	(void)(sputprop(VV[241],VV[9],Cnil));
	{object V405 = Cnil;
	VMR193(V405)}
	return Cnil;
}
/*	local entry for function progn 'compile7321	*/

static object LI194()

{	 VMB194 VMS194 VMV194
	goto TTL;
TTL:;
	{object V406 = Cnil;
	VMR194(V406)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PARSE-ERROR7341	*/

static void L195()
{register object *base=vs_base;
	register object *sup=base+VM195; VC195
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[244];
	base[1]= VV[5];
	base[2]= VV[245];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7357	*/

static object LI196()

{	 VMB196 VMS196 VMV196
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk329)();
	vs_top=sup;
	{object V407 = Cnil;
	VMR196(V407)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7374	*/

static object LI197()

{	 VMB197 VMS197 VMV197
	goto TTL;
TTL:;
	base[0]= VV[246];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V409 = Cnil;
	VMR197(V409)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7398	*/

static object LI198()

{	 VMB198 VMS198 VMV198
	goto TTL;
TTL:;
	(void)(sputprop(VV[244],VV[9],Cnil));
	{object V410 = Cnil;
	VMR198(V410)}
	return Cnil;
}
/*	local entry for function progn 'compile7410	*/

static object LI199()

{	 VMB199 VMS199 VMV199
	goto TTL;
TTL:;
	{object V411 = Cnil;
	VMR199(V411)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-CONTROL-ERROR7430	*/

static void L200()
{register object *base=vs_base;
	register object *sup=base+VM200; VC200
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[247];
	base[1]= VV[5];
	base[2]= VV[248];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7446	*/

static object LI201()

{	 VMB201 VMS201 VMV201
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk330)();
	vs_top=sup;
	{object V412 = Cnil;
	VMR201(V412)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7463	*/

static object LI202()

{	 VMB202 VMS202 VMV202
	goto TTL;
TTL:;
	base[0]= VV[249];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V414 = Cnil;
	VMR202(V414)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7487	*/

static object LI203()

{	 VMB203 VMS203 VMV203
	goto TTL;
TTL:;
	(void)(sputprop(VV[247],VV[9],Cnil));
	{object V415 = Cnil;
	VMR203(V415)}
	return Cnil;
}
/*	local entry for function progn 'compile7499	*/

static object LI204()

{	 VMB204 VMS204 VMV204
	goto TTL;
TTL:;
	{object V416 = Cnil;
	VMR204(V416)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNBOUND-VARIABLE7519	*/

static void L205()
{register object *base=vs_base;
	register object *sup=base+VM205; VC205
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[250];
	base[1]= VV[5];
	base[2]= VV[251];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7535	*/

static object LI206()

{	 VMB206 VMS206 VMV206
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk331)();
	vs_top=sup;
	{object V417 = Cnil;
	VMR206(V417)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7552	*/

static object LI207()

{	 VMB207 VMS207 VMV207
	goto TTL;
TTL:;
	base[0]= VV[252];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V419 = Cnil;
	VMR207(V419)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7576	*/

static object LI208()

{	 VMB208 VMS208 VMV208
	goto TTL;
TTL:;
	(void)(sputprop(VV[250],VV[9],Cnil));
	{object V420 = Cnil;
	VMR208(V420)}
	return Cnil;
}
/*	local entry for function progn 'compile7588	*/

static object LI209()

{	 VMB209 VMS209 VMV209
	goto TTL;
TTL:;
	{object V421 = Cnil;
	VMR209(V421)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNDEFINED-FUNCTION7608	*/

static void L210()
{register object *base=vs_base;
	register object *sup=base+VM210; VC210
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[253];
	base[1]= VV[5];
	base[2]= VV[254];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7624	*/

static object LI211()

{	 VMB211 VMS211 VMV211
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk332)();
	vs_top=sup;
	{object V422 = Cnil;
	VMR211(V422)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7641	*/

static object LI212()

{	 VMB212 VMS212 VMV212
	goto TTL;
TTL:;
	base[0]= VV[255];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V424 = Cnil;
	VMR212(V424)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7665	*/

static object LI213()

{	 VMB213 VMS213 VMV213
	goto TTL;
TTL:;
	(void)(sputprop(VV[253],VV[9],Cnil));
	{object V425 = Cnil;
	VMR213(V425)}
	return Cnil;
}
/*	local entry for function progn 'compile7677	*/

static object LI214()

{	 VMB214 VMS214 VMV214
	goto TTL;
TTL:;
	{object V426 = Cnil;
	VMR214(V426)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-END-OF-FILE7697	*/

static void L215()
{register object *base=vs_base;
	register object *sup=base+VM215; VC215
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[256];
	base[1]= VV[5];
	base[2]= VV[257];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7713	*/

static object LI216()

{	 VMB216 VMS216 VMV216
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk333)();
	vs_top=sup;
	{object V427 = Cnil;
	VMR216(V427)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7730	*/

static object LI217()

{	 VMB217 VMS217 VMV217
	goto TTL;
TTL:;
	base[0]= VV[258];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V429 = Cnil;
	VMR217(V429)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7754	*/

static object LI218()

{	 VMB218 VMS218 VMV218
	goto TTL;
TTL:;
	(void)(sputprop(VV[256],VV[9],Cnil));
	{object V430 = Cnil;
	VMR218(V430)}
	return Cnil;
}
/*	local entry for function progn 'compile7766	*/

static object LI219()

{	 VMB219 VMS219 VMV219
	goto TTL;
TTL:;
	{object V431 = Cnil;
	VMR219(V431)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-FILE-ERROR7786	*/

static void L220()
{register object *base=vs_base;
	register object *sup=base+VM220; VC220
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[259];
	base[1]= VV[5];
	base[2]= VV[260];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7802	*/

static object LI221()

{	 VMB221 VMS221 VMV221
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk334)();
	vs_top=sup;
	{object V432 = Cnil;
	VMR221(V432)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7819	*/

static object LI222()

{	 VMB222 VMS222 VMV222
	goto TTL;
TTL:;
	base[0]= VV[261];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V434 = Cnil;
	VMR222(V434)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7843	*/

static object LI223()

{	 VMB223 VMS223 VMV223
	goto TTL;
TTL:;
	(void)(sputprop(VV[259],VV[9],Cnil));
	{object V435 = Cnil;
	VMR223(V435)}
	return Cnil;
}
/*	local entry for function progn 'compile7855	*/

static object LI224()

{	 VMB224 VMS224 VMV224
	goto TTL;
TTL:;
	{object V436 = Cnil;
	VMR224(V436)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-STREAM-ERROR7875	*/

static void L225()
{register object *base=vs_base;
	register object *sup=base+VM225; VC225
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[262];
	base[1]= VV[5];
	base[2]= VV[263];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[267],base+0,6);
	return;
}
/*	local entry for function progn 'compile7891	*/

static object LI226()

{	 VMB226 VMS226 VMV226
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk335)();
	vs_top=sup;
	{object V437 = Cnil;
	VMR226(V437)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7908	*/

static object LI227()

{	 VMB227 VMS227 VMV227
	goto TTL;
TTL:;
	base[0]= VV[264];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V439 = Cnil;
	VMR227(V439)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7932	*/

static object LI228()

{	 VMB228 VMS228 VMV228
	goto TTL;
TTL:;
	(void)(sputprop(VV[262],VV[9],Cnil));
	{object V440 = Cnil;
	VMR228(V440)}
	return Cnil;
}
/*	local entry for function progn 'compile7944	*/

static object LI229()

{	 VMB229 VMS229 VMV229
	goto TTL;
TTL:;
	{object V441 = Cnil;
	VMR229(V441)}
	return Cnil;
}
/*	local entry for function progn 'compile7960	*/

static object LI230()

{	 VMB230 VMS230 VMV230
	goto TTL;
TTL:;
	base[0]= VV[265];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk336)();
	vs_top=sup;
	{object V442 = Cnil;
	VMR230(V442)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7972	*/

static object LI231()

{	 VMB231 VMS231 VMV231
	goto TTL;
TTL:;
	if(!((VV[265])->s.s_dbind!=OBJNULL)){
	goto T1532;}
	goto T1531;
	goto T1532;
T1532:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk337)();
	vs_top=sup;
	(VV[265]->s.s_dbind)= vs_base[0];
	goto T1531;
T1531:;
	{object V443 = Cnil;
	VMR231(V443)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7985	*/

static object LI232()

{	 VMB232 VMS232 VMV232
	goto TTL;
TTL:;
	{object V444 = Cnil;
	VMR232(V444)}
	return Cnil;
}
/*	local entry for function SIMPLE-CONDITION-CLASS-P	*/

static object LI233(V446)

register object V446;
{	 VMB233 VMS233 VMV233
	goto TTL;
TTL:;
	if(!(type_of((V446))==t_symbol)){
	goto T1537;}
	base[0]= (V446);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk337)();
	vs_top=sup;
	V446= vs_base[0];
	goto T1537;
T1537:;
	base[0]= (V446);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk338)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1542;}
	{object V447 = Cnil;
	VMR233(V447)}
	goto T1542;
T1542:;{object V449;
	V449= (VV[265]->s.s_dbind);
	base[0]= (V446);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk339)(Lclptr339);
	vs_top=sup;
	V450= vs_base[0];
	{register object x= V449,V448= V450;
	while(V448!=Cnil)
	if(eql(x,V448->c.c_car)){
	{object V451 = V448;
	VMR233(V451)}
	}else V448=V448->c.c_cdr;
	{object V452 = Cnil;
	VMR233(V452)}}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT339(ptr) object *ptr;{ call_or_link_closure(VV[339],(void **)(void *)&Lnk339,(void **)(void *)&Lclptr339);} /* CLASS-PRECEDENCE-LIST */
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* TYPEP */
static void LnkT337(){ call_or_link(VV[337],(void **)(void *)&Lnk337);} /* FIND-CLASS */
static void LnkT336(){ call_or_link(VV[336],(void **)(void *)&Lnk336);} /* *MAKE-SPECIAL */
static void LnkT335(){ call_or_link(VV[335],(void **)(void *)&Lnk335);} /* Defclass INTERNAL-SIMPLE-STREAM-ERROR7875 */
static void LnkT334(){ call_or_link(VV[334],(void **)(void *)&Lnk334);} /* Defclass INTERNAL-SIMPLE-FILE-ERROR7786 */
static void LnkT333(){ call_or_link(VV[333],(void **)(void *)&Lnk333);} /* Defclass INTERNAL-END-OF-FILE7697 */
static void LnkT332(){ call_or_link(VV[332],(void **)(void *)&Lnk332);} /* Defclass INTERNAL-UNDEFINED-FUNCTION7608 */
static void LnkT331(){ call_or_link(VV[331],(void **)(void *)&Lnk331);} /* Defclass INTERNAL-UNBOUND-VARIABLE7519 */
static void LnkT330(){ call_or_link(VV[330],(void **)(void *)&Lnk330);} /* Defclass INTERNAL-SIMPLE-CONTROL-ERROR7430 */
static void LnkT329(){ call_or_link(VV[329],(void **)(void *)&Lnk329);} /* Defclass INTERNAL-SIMPLE-PARSE-ERROR7341 */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7252 */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* Defclass INTERNAL-PACKAGE-ERROR7163 */
static void LnkT326(){ call_or_link(VV[326],(void **)(void *)&Lnk326);} /* Defclass INTERNAL-TYPE-ERROR7074 */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[324],(void **)(void *)&LnkLI324,2,first,ap);va_end(ap);return V1;} /* INTERNAL-SIMPLE-ERROR-PRINTER */
static void LnkT323(){ call_or_link(VV[323],(void **)(void *)&Lnk323);} /* Defclass INTERNAL-SIMPLE-ERROR6780 */
static void LnkT321(ptr) object *ptr;{ call_or_link_closure(VV[321],(void **)(void *)&Lnk321,(void **)(void *)&Lclptr321);} /* INTERNAL-ERROR-FUNCTION-NAME */
static void LnkT320(){ call_or_link(VV[320],(void **)(void *)&Lnk320);} /* Defclass INTERNAL-ERROR6353 */
static void LnkT318(){ call_or_link(VV[318],(void **)(void *)&Lnk318);} /* Defclass ABORT-FAILURE6051 */
static void LnkT317(){ call_or_link(VV[317],(void **)(void *)&Lnk317);} /* Defclass FLOATING-POINT-UNDERFLOW5962 */
static void LnkT316(){ call_or_link(VV[316],(void **)(void *)&Lnk316);} /* Defclass FLOATING-POINT-OVERFLOW5873 */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* Defclass DIVISION-BY-ZERO5784 */
static void LnkT314(){ call_or_link(VV[314],(void **)(void *)&Lnk314);} /* Defclass ARITHMETIC-ERROR5694 */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* Defclass UNDEFINED-FUNCTION5396 */
static void LnkT310(ptr) object *ptr;{ call_or_link_closure(VV[310],(void **)(void *)&Lnk310,(void **)(void *)&Lclptr310);} /* CELL-ERROR-NAME */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* Defclass UNBOUND-VARIABLE5098 */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* Defclass CELL-ERROR5008 */
static void LnkT306(ptr) object *ptr;{ call_or_link_closure(VV[306],(void **)(void *)&Lnk306,(void **)(void *)&Lclptr306);} /* PACKAGE-ERROR-MESSAGE */
static void LnkT305(ptr) object *ptr;{ call_or_link_closure(VV[305],(void **)(void *)&Lnk305,(void **)(void *)&Lclptr305);} /* PACKAGE-ERROR-PACKAGE */
static void LnkT304(){ call_or_link(VV[304],(void **)(void *)&Lnk304);} /* Defclass PACKAGE-ERROR4708 */
static void LnkT303(){ call_or_link(VV[303],(void **)(void *)&Lnk303);} /* Defclass FILE-ERROR4618 */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)(void *)&Lnk301,(void **)(void *)&Lclptr301);} /* STREAM-ERROR-STREAM */
static void LnkT300(){ call_or_link(VV[300],(void **)(void *)&Lnk300);} /* Defclass END-OF-FILE4320 */
static void LnkT299(){ call_or_link(VV[299],(void **)(void *)&Lnk299);} /* Defclass STREAM-ERROR4230 */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* Defclass PARSE-ERROR4141 */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* Defclass CONTROL-ERROR4052 */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* Defclass PROGRAM-ERROR3963 */
static void LnkT294(ptr) object *ptr;{ call_or_link_closure(VV[294],(void **)(void *)&Lnk294,(void **)(void *)&Lclptr294);} /* CASE-FAILURE-POSSIBILITIES */
static void LnkT293(ptr) object *ptr;{ call_or_link_closure(VV[293],(void **)(void *)&Lnk293,(void **)(void *)&Lclptr293);} /* CASE-FAILURE-NAME */
static void LnkT292(){ call_or_link(VV[292],(void **)(void *)&Lnk292);} /* Defclass CASE-FAILURE3663 */
static void LnkT291(){ call_or_link(VV[291],(void **)(void *)&Lnk291);} /* Defclass SIMPLE-TYPE-ERROR3574 */
static void LnkT289(ptr) object *ptr;{ call_or_link_closure(VV[289],(void **)(void *)&Lnk289,(void **)(void *)&Lclptr289);} /* TYPE-ERROR-EXPECTED-TYPE */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* TYPE-ERROR-DATUM */
static void LnkT287(){ call_or_link(VV[287],(void **)(void *)&Lnk287);} /* Defclass TYPE-ERROR3274 */
static void LnkT286(){ call_or_link(VV[286],(void **)(void *)&Lnk286);} /* Defclass STORAGE-EXHAUSTED3185 */
static void LnkT285(){ call_or_link(VV[285],(void **)(void *)&Lnk285);} /* Defclass STACK-OVERFLOW3096 */
static void LnkT284(){ call_or_link(VV[284],(void **)(void *)&Lnk284);} /* Defclass STORAGE-CONDITION3007 */
static void LnkT283(){ call_or_link(VV[283],(void **)(void *)&Lnk283);} /* Defclass SIMPLE-ERROR2918 */
static void LnkT282(){ call_or_link(VV[282],(void **)(void *)&Lnk282);} /* Defclass SIMPLE-WARNING2829 */
static void LnkT281(){ call_or_link(VV[281],(void **)(void *)&Lnk281);} /* LOAD-DEFMETHOD */
static object  LnkTLI279(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[279],(void **)(void *)&LnkLI279,2,first,ap);va_end(ap);return V1;} /* SIMPLE-CONDITION-PRINTER */
static void LnkT278(){ call_or_link(VV[278],(void **)(void *)&Lnk278);} /* ERROR */
static void LnkT13(){ call_or_link(VV[13],(void **)(void *)&Lnk13);} /* ERROR */
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* STRUCTURE-SUBTYPE-P */
static void LnkT275(){ call_or_link(VV[275],(void **)(void *)&Lnk275);} /* PROCLAIM-DEFGENERIC */
static void LnkT274(){ call_or_link(VV[274],(void **)(void *)&Lnk274);} /* Defclass SIMPLE-CONDITION2533 */
static void LnkT272(ptr) object *ptr;{ call_or_link_closure(VV[272],(void **)(void *)&Lnk272,(void **)(void *)&Lclptr272);} /* SIMPLE-CONDITION-FORMAT-ARGUMENTS */
static void LnkT271(ptr) object *ptr;{ call_or_link_closure(VV[271],(void **)(void *)&Lnk271,(void **)(void *)&Lclptr271);} /* SIMPLE-CONDITION-FORMAT-STRING */
static void LnkT270(){ call_or_link(VV[270],(void **)(void *)&Lnk270);} /* Defclass ERROR2436 */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* Defclass SERIOUS-CONDITION2347 */
static void LnkT268(){ call_or_link(VV[268],(void **)(void *)&Lnk268);} /* Defclass WARNING2258 */
static void LnkT266(){ call_or_link(VV[266],(void **)(void *)&Lnk266);} /* REMOVE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

