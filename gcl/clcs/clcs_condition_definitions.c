
#include "cmpinclude.h"
#include "clcs_condition_definitions.h"
void init_clcs_condition_definitions(){do_init(VV);}
/*	local entry for function progn 'compile2169	*/

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
/*	local entry for function progn 'compile2189	*/

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
	(void) (*Lnk294)();
	vs_top=sup;
	(VV[1]->s.s_dbind)= vs_base[0];
	goto T5;
T5:;
	{object V7 = Cnil;
	VMR2(V7)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass WARNING2235	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile2251	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk296)();
	vs_top=sup;
	{object V8 = Cnil;
	VMR4(V8)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2268	*/

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
/*	local entry for function progn 'compile2292	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	(void)(sputprop(VV[4],VV[9],Cnil));
	{object V11 = Cnil;
	VMR6(V11)}
	return Cnil;
}
/*	local entry for function progn 'compile2304	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	function definition for Defclass SERIOUS-CONDITION2324	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile2340	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk297)();
	vs_top=sup;
	{object V13 = Cnil;
	VMR9(V13)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2357	*/

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
/*	local entry for function progn 'compile2381	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	(void)(sputprop(VV[10],VV[9],Cnil));
	{object V16 = Cnil;
	VMR11(V16)}
	return Cnil;
}
/*	local entry for function progn 'compile2393	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V17 = Cnil;
	VMR12(V17)}
	return Cnil;
}
/*	function definition for Defclass ERROR2413	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile2429	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk298)();
	vs_top=sup;
	{object V18 = Cnil;
	VMR14(V18)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2446	*/

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
/*	local entry for function progn 'compile2470	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	(void)(sputprop(VV[13],VV[9],Cnil));
	{object V21 = Cnil;
	VMR16(V21)}
	return Cnil;
}
/*	local entry for function progn 'compile2482	*/

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
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V27;
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk300)(Lclptr300);
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
/*	function definition for Defclass SIMPLE-CONDITION2510	*/

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
	base[5]= (VV[301]->s.s_gfdef);
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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile2528	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk302)();
	vs_top=sup;
	{object V31 = Cnil;
	VMR20(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2545	*/

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
/*	local entry for function progn 'compile2569	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	(void)(sputprop(VV[16],VV[9],Cnil));
	{object V34 = Cnil;
	VMR22(V34)}
	return Cnil;
}
/*	local entry for function progn 'compile2585	*/

static object LI23()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[33];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T107;
T107:;
	base[4]= (*(LnkLI307))((V38),(V39));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile2778	*/

static object LI25()

{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[49];
	base[4]= VV[50];
	V52= (VV[308]->s.s_gfdef);
	base[5]= listA(3,VV[51],V52,VV[52]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V53 = Cnil;
	VMR25(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2786	*/

static object LI26()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V54 = Cnil;
	VMR26(V54)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-WARNING2806	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile2822	*/

static object LI28()

{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk310)();
	vs_top=sup;
	{object V55 = Cnil;
	VMR28(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2839	*/

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
/*	local entry for function progn 'compile2863	*/

static object LI30()

{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	(void)(sputprop(VV[53],VV[9],Cnil));
	{object V58 = Cnil;
	VMR30(V58)}
	return Cnil;
}
/*	local entry for function progn 'compile2875	*/

static object LI31()

{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V59 = Cnil;
	VMR31(V59)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-ERROR2895	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile2911	*/

static object LI33()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk311)();
	vs_top=sup;
	{object V60 = Cnil;
	VMR33(V60)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2928	*/

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
/*	local entry for function progn 'compile2952	*/

static object LI35()

{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	(void)(sputprop(VV[56],VV[9],Cnil));
	{object V63 = Cnil;
	VMR35(V63)}
	return Cnil;
}
/*	local entry for function progn 'compile2964	*/

static object LI36()

{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V64 = Cnil;
	VMR36(V64)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-CONDITION2984	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile3000	*/

static object LI38()

{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk312)();
	vs_top=sup;
	{object V65 = Cnil;
	VMR38(V65)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3017	*/

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
/*	local entry for function progn 'compile3041	*/

static object LI40()

{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	(void)(sputprop(VV[59],VV[9],Cnil));
	{object V68 = Cnil;
	VMR40(V68)}
	return Cnil;
}
/*	local entry for function progn 'compile3053	*/

static object LI41()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V69 = Cnil;
	VMR41(V69)}
	return Cnil;
}
/*	function definition for Defclass STACK-OVERFLOW3073	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile3089	*/

static object LI43()

{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk313)();
	vs_top=sup;
	{object V70 = Cnil;
	VMR43(V70)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3106	*/

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
/*	local entry for function progn 'compile3130	*/

static object LI45()

{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	(void)(sputprop(VV[62],VV[9],Cnil));
	{object V73 = Cnil;
	VMR45(V73)}
	return Cnil;
}
/*	local entry for function progn 'compile3142	*/

static object LI46()

{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V74 = Cnil;
	VMR46(V74)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-EXHAUSTED3162	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile3178	*/

static object LI48()

{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk314)();
	vs_top=sup;
	{object V75 = Cnil;
	VMR48(V75)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3195	*/

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
/*	local entry for function progn 'compile3219	*/

static object LI50()

{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)(sputprop(VV[65],VV[9],Cnil));
	{object V78 = Cnil;
	VMR50(V78)}
	return Cnil;
}
/*	local entry for function progn 'compile3231	*/

static object LI51()

{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V79 = Cnil;
	VMR51(V79)}
	return Cnil;
}
/*	function definition for Defclass TYPE-ERROR3251	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile3269	*/

static object LI53()

{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk315)();
	vs_top=sup;
	{object V81 = Cnil;
	VMR53(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3286	*/

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
/*	local entry for function progn 'compile3310	*/

static object LI55()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	(void)(sputprop(VV[68],VV[9],Cnil));
	{object V84 = Cnil;
	VMR55(V84)}
	return Cnil;
}
/*	local entry for function progn 'compile3326	*/

static object LI56()

{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[77];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T269;
T269:;
	base[4]= V89;
	base[5]= VV[81];
	base[7]= V88;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V88;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3523	*/

static object LI58()

{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[82];
	base[4]= VV[83];
	V104= (VV[318]->s.s_gfdef);
	base[5]= listA(3,VV[51],V104,VV[84]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V105 = Cnil;
	VMR58(V105)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3531	*/

static object LI59()

{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V106 = Cnil;
	VMR59(V106)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-TYPE-ERROR3551	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile3567	*/

static object LI61()

{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk319)();
	vs_top=sup;
	{object V107 = Cnil;
	VMR61(V107)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3584	*/

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
/*	local entry for function progn 'compile3608	*/

static object LI63()

{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	(void)(sputprop(VV[85],VV[9],Cnil));
	{object V110 = Cnil;
	VMR63(V110)}
	return Cnil;
}
/*	local entry for function progn 'compile3620	*/

static object LI64()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V111 = Cnil;
	VMR64(V111)}
	return Cnil;
}
/*	function definition for Defclass CASE-FAILURE3640	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile3658	*/

static object LI66()

{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk320)();
	vs_top=sup;
	{object V113 = Cnil;
	VMR66(V113)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3675	*/

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
/*	local entry for function progn 'compile3699	*/

static object LI68()

{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	(void)(sputprop(VV[40],VV[9],Cnil));
	{object V116 = Cnil;
	VMR68(V116)}
	return Cnil;
}
/*	local entry for function progn 'compile3715	*/

static object LI69()

{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T385;
T385:;
	base[4]= V121;
	base[5]= VV[100];
	base[7]= V120;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V120;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= V120;
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk322)(Lclptr322);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3912	*/

static object LI71()

{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[101];
	base[4]= VV[102];
	V136= (VV[323]->s.s_gfdef);
	base[5]= listA(3,VV[51],V136,VV[103]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V137 = Cnil;
	VMR71(V137)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3920	*/

static object LI72()

{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V138 = Cnil;
	VMR72(V138)}
	return Cnil;
}
/*	function definition for Defclass PROGRAM-ERROR3940	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile3956	*/

static object LI74()

{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	{object V139 = Cnil;
	VMR74(V139)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3973	*/

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
/*	local entry for function progn 'compile3997	*/

static object LI76()

{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	(void)(sputprop(VV[104],VV[9],Cnil));
	{object V142 = Cnil;
	VMR76(V142)}
	return Cnil;
}
/*	local entry for function progn 'compile4009	*/

static object LI77()

{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V143 = Cnil;
	VMR77(V143)}
	return Cnil;
}
/*	function definition for Defclass CONTROL-ERROR4029	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile4045	*/

static object LI79()

{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk325)();
	vs_top=sup;
	{object V144 = Cnil;
	VMR79(V144)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4062	*/

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
/*	local entry for function progn 'compile4086	*/

static object LI81()

{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)(sputprop(VV[107],VV[9],Cnil));
	{object V147 = Cnil;
	VMR81(V147)}
	return Cnil;
}
/*	local entry for function progn 'compile4098	*/

static object LI82()

{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	{object V148 = Cnil;
	VMR82(V148)}
	return Cnil;
}
/*	function definition for Defclass PARSE-ERROR4118	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile4134	*/

static object LI84()

{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk326)();
	vs_top=sup;
	{object V149 = Cnil;
	VMR84(V149)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4151	*/

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
/*	local entry for function progn 'compile4175	*/

static object LI86()

{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	(void)(sputprop(VV[110],VV[9],Cnil));
	{object V152 = Cnil;
	VMR86(V152)}
	return Cnil;
}
/*	local entry for function progn 'compile4187	*/

static object LI87()

{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{object V153 = Cnil;
	VMR87(V153)}
	return Cnil;
}
/*	function definition for Defclass STREAM-ERROR4207	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile4224	*/

static object LI89()

{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	{object V155 = Cnil;
	VMR89(V155)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4241	*/

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
/*	local entry for function progn 'compile4265	*/

static object LI91()

{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	(void)(sputprop(VV[113],VV[9],Cnil));
	{object V158 = Cnil;
	VMR91(V158)}
	return Cnil;
}
/*	local entry for function progn 'compile4277	*/

static object LI92()

{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	{object V159 = Cnil;
	VMR92(V159)}
	return Cnil;
}
/*	function definition for Defclass END-OF-FILE4297	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile4313	*/

static object LI94()

{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk328)();
	vs_top=sup;
	{object V160 = Cnil;
	VMR94(V160)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4330	*/

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
/*	local entry for function progn 'compile4354	*/

static object LI96()

{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	(void)(sputprop(VV[119],VV[9],Cnil));
	{object V163 = Cnil;
	VMR96(V163)}
	return Cnil;
}
/*	local entry for function progn 'compile4370	*/

static object LI97()

{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[122];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T542;
T542:;
	base[4]= V168;
	base[5]= VV[126];
	base[7]= V167;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk329)(Lclptr329);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4567	*/

static object LI99()

{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[127];
	base[4]= VV[128];
	V183= (VV[330]->s.s_gfdef);
	base[5]= listA(3,VV[51],V183,VV[129]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V184 = Cnil;
	VMR99(V184)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4575	*/

static object LI100()

{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V185 = Cnil;
	VMR100(V185)}
	return Cnil;
}
/*	function definition for Defclass FILE-ERROR4595	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile4612	*/

static object LI102()

{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk331)();
	vs_top=sup;
	{object V187 = Cnil;
	VMR102(V187)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4629	*/

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
/*	local entry for function progn 'compile4653	*/

static object LI104()

{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	(void)(sputprop(VV[130],VV[9],Cnil));
	{object V190 = Cnil;
	VMR104(V190)}
	return Cnil;
}
/*	local entry for function progn 'compile4665	*/

static object LI105()

{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V191 = Cnil;
	VMR105(V191)}
	return Cnil;
}
/*	function definition for Defclass PACKAGE-ERROR4685	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile4703	*/

static object LI107()

{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk332)();
	vs_top=sup;
	{object V193 = Cnil;
	VMR107(V193)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4720	*/

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
/*	local entry for function progn 'compile4744	*/

static object LI109()

{	 VMB109 VMS109 VMV109
	goto TTL;
TTL:;
	(void)(sputprop(VV[136],VV[9],Cnil));
	{object V196 = Cnil;
	VMR109(V196)}
	return Cnil;
}
/*	local entry for function progn 'compile4760	*/

static object LI110()

{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[145];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T656;
T656:;
	base[4]= V201;
	base[5]= VV[149];
	base[7]= V200;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk333)(Lclptr333);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V200;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4957	*/

static object LI112()

{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[150];
	base[4]= VV[151];
	V216= (VV[335]->s.s_gfdef);
	base[5]= listA(3,VV[51],V216,VV[152]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V217 = Cnil;
	VMR112(V217)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4965	*/

static object LI113()

{	 VMB113 VMS113 VMV113
	goto TTL;
TTL:;
	{object V218 = Cnil;
	VMR113(V218)}
	return Cnil;
}
/*	function definition for Defclass CELL-ERROR4985	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile5002	*/

static object LI115()

{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk336)();
	vs_top=sup;
	{object V220 = Cnil;
	VMR115(V220)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5019	*/

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
/*	local entry for function progn 'compile5043	*/

static object LI117()

{	 VMB117 VMS117 VMV117
	goto TTL;
TTL:;
	(void)(sputprop(VV[153],VV[9],Cnil));
	{object V223 = Cnil;
	VMR117(V223)}
	return Cnil;
}
/*	local entry for function progn 'compile5055	*/

static object LI118()

{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	{object V224 = Cnil;
	VMR118(V224)}
	return Cnil;
}
/*	function definition for Defclass UNBOUND-VARIABLE5075	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile5091	*/

static object LI120()

{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk337)();
	vs_top=sup;
	{object V225 = Cnil;
	VMR120(V225)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5108	*/

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
/*	local entry for function progn 'compile5132	*/

static object LI122()

{	 VMB122 VMS122 VMV122
	goto TTL;
TTL:;
	(void)(sputprop(VV[158],VV[9],Cnil));
	{object V228 = Cnil;
	VMR122(V228)}
	return Cnil;
}
/*	local entry for function progn 'compile5148	*/

static object LI123()

{	 VMB123 VMS123 VMV123
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[161];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T772;
T772:;
	base[4]= V233;
	base[5]= VV[165];
	base[7]= V232;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk338)(Lclptr338);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5345	*/

static object LI125()

{	 VMB125 VMS125 VMV125
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[166];
	base[4]= VV[167];
	V248= (VV[339]->s.s_gfdef);
	base[5]= listA(3,VV[51],V248,VV[168]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V249 = Cnil;
	VMR125(V249)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5353	*/

static object LI126()

{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	{object V250 = Cnil;
	VMR126(V250)}
	return Cnil;
}
/*	function definition for Defclass UNDEFINED-FUNCTION5373	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile5389	*/

static object LI128()

{	 VMB128 VMS128 VMV128
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk340)();
	vs_top=sup;
	{object V251 = Cnil;
	VMR128(V251)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5406	*/

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
/*	local entry for function progn 'compile5430	*/

static object LI130()

{	 VMB130 VMS130 VMV130
	goto TTL;
TTL:;
	(void)(sputprop(VV[169],VV[9],Cnil));
	{object V254 = Cnil;
	VMR130(V254)}
	return Cnil;
}
/*	local entry for function progn 'compile5446	*/

static object LI131()

{	 VMB131 VMS131 VMV131
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[172];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T873;
T873:;
	base[4]= V259;
	base[5]= VV[176];
	base[7]= V258;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk338)(Lclptr338);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5643	*/

static object LI133()

{	 VMB133 VMS133 VMV133
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[177];
	base[4]= VV[178];
	V274= (VV[341]->s.s_gfdef);
	base[5]= listA(3,VV[51],V274,VV[179]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V275 = Cnil;
	VMR133(V275)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5651	*/

static object LI134()

{	 VMB134 VMS134 VMV134
	goto TTL;
TTL:;
	{object V276 = Cnil;
	VMR134(V276)}
	return Cnil;
}
/*	function definition for Defclass ARITHMETIC-ERROR5671	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile5688	*/

static object LI136()

{	 VMB136 VMS136 VMV136
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk342)();
	vs_top=sup;
	{object V278 = Cnil;
	VMR136(V278)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5705	*/

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
/*	local entry for function progn 'compile5729	*/

static object LI138()

{	 VMB138 VMS138 VMV138
	goto TTL;
TTL:;
	(void)(sputprop(VV[180],VV[9],Cnil));
	{object V281 = Cnil;
	VMR138(V281)}
	return Cnil;
}
/*	local entry for function progn 'compile5741	*/

static object LI139()

{	 VMB139 VMS139 VMV139
	goto TTL;
TTL:;
	{object V282 = Cnil;
	VMR139(V282)}
	return Cnil;
}
/*	function definition for Defclass DIVISION-BY-ZERO5761	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile5777	*/

static object LI141()

{	 VMB141 VMS141 VMV141
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk343)();
	vs_top=sup;
	{object V283 = Cnil;
	VMR141(V283)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5794	*/

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
/*	local entry for function progn 'compile5818	*/

static object LI143()

{	 VMB143 VMS143 VMV143
	goto TTL;
TTL:;
	(void)(sputprop(VV[186],VV[9],Cnil));
	{object V286 = Cnil;
	VMR143(V286)}
	return Cnil;
}
/*	local entry for function progn 'compile5830	*/

static object LI144()

{	 VMB144 VMS144 VMV144
	goto TTL;
TTL:;
	{object V287 = Cnil;
	VMR144(V287)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-OVERFLOW5850	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile5866	*/

static object LI146()

{	 VMB146 VMS146 VMV146
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk344)();
	vs_top=sup;
	{object V288 = Cnil;
	VMR146(V288)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5883	*/

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
/*	local entry for function progn 'compile5907	*/

static object LI148()

{	 VMB148 VMS148 VMV148
	goto TTL;
TTL:;
	(void)(sputprop(VV[189],VV[9],Cnil));
	{object V291 = Cnil;
	VMR148(V291)}
	return Cnil;
}
/*	local entry for function progn 'compile5919	*/

static object LI149()

{	 VMB149 VMS149 VMV149
	goto TTL;
TTL:;
	{object V292 = Cnil;
	VMR149(V292)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-UNDERFLOW5939	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile5955	*/

static object LI151()

{	 VMB151 VMS151 VMV151
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk345)();
	vs_top=sup;
	{object V293 = Cnil;
	VMR151(V293)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5972	*/

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
/*	local entry for function progn 'compile5996	*/

static object LI153()

{	 VMB153 VMS153 VMV153
	goto TTL;
TTL:;
	(void)(sputprop(VV[192],VV[9],Cnil));
	{object V296 = Cnil;
	VMR153(V296)}
	return Cnil;
}
/*	local entry for function progn 'compile6008	*/

static object LI154()

{	 VMB154 VMS154 VMV154
	goto TTL;
TTL:;
	{object V297 = Cnil;
	VMR154(V297)}
	return Cnil;
}
/*	function definition for Defclass ABORT-FAILURE6028	*/

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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile6044	*/

static object LI156()

{	 VMB156 VMS156 VMV156
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk346)();
	vs_top=sup;
	{object V298 = Cnil;
	VMR156(V298)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6061	*/

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
/*	local entry for function progn 'compile6085	*/

static object LI158()

{	 VMB158 VMS158 VMV158
	goto TTL;
TTL:;
	(void)(sputprop(VV[195],VV[9],Cnil));
	{object V301 = Cnil;
	VMR158(V301)}
	return Cnil;
}
/*	local entry for function progn 'compile6101	*/

static object LI159()

{	 VMB159 VMS159 VMV159
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[198];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
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
/*	local entry for function progn 'compile6302	*/

static object LI161()

{	 VMB161 VMS161 VMV161
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[203];
	base[4]= VV[204];
	V321= (VV[347]->s.s_gfdef);
	base[5]= listA(3,VV[51],V321,VV[205]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V322 = Cnil;
	VMR161(V322)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6310	*/

static object LI162()

{	 VMB162 VMS162 VMV162
	goto TTL;
TTL:;
	{object V323 = Cnil;
	VMR162(V323)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-WARNING6330	*/

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
	base[5]= (VV[301]->s.s_gfdef);
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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile6347	*/

static object LI164()

{	 VMB164 VMS164 VMV164
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk348)();
	vs_top=sup;
	{object V325 = Cnil;
	VMR164(V325)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6364	*/

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
/*	local entry for function progn 'compile6388	*/

static object LI166()

{	 VMB166 VMS166 VMV166
	goto TTL;
TTL:;
	(void)(sputprop(VV[206],VV[9],Cnil));
	{object V328 = Cnil;
	VMR166(V328)}
	return Cnil;
}
/*	local entry for function progn 'compile6404	*/

static object LI167()

{	 VMB167 VMS167 VMV167
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[213];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
	vs_top=sup;
	{object V329 = Cnil;
	VMR167(V329)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-WARNING T))	*/

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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;
	goto T1137;
T1137:;
	{register object V347;
	V347= (V333);
	base[4]= V332;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1205;}
	base[4]= (V347);
	base[5]= VV[217];
	base[7]= V332;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk349)(Lclptr349);
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
	(void) (*Lnk304)();
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
	(void) (*Lnk305)();
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
	(void) (*Lnk304)();
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
	(void) (*Lnk306)();
	return;}
	}
}
/*	local entry for function progn 'compile6717	*/

static object LI169()

{	 VMB169 VMS169 VMV169
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[221];
	base[4]= VV[222];
	V359= (VV[350]->s.s_gfdef);
	base[5]= listA(3,VV[51],V359,VV[223]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V360 = Cnil;
	VMR169(V360)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6725	*/

static object LI170()

{	 VMB170 VMS170 VMV170
	goto TTL;
TTL:;
	{object V361 = Cnil;
	VMR170(V361)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-ERROR6745	*/

static void L171()
{register object *base=vs_base;
	register object *sup=base+VM171; VC171
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[224];
	base[1]= VV[5];
	base[2]= VV[225];
	base[4]= VV[26];
	base[5]= (VV[301]->s.s_gfdef);
	base[6]= VV[18];
	base[7]= VV[208];
	base[8]= VV[20];
	base[9]= VV[226];
	base[10]= VV[22];
	base[11]= Cnil;
	base[12]= VV[23];
	base[13]= VV[227];
	base[14]= VV[228];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V362= vs_base[0];
	base[3]= make_cons(V362,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile6762	*/

static object LI172()

{	 VMB172 VMS172 VMV172
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk351)();
	vs_top=sup;
	{object V363 = Cnil;
	VMR172(V363)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6779	*/

static object LI173()

{	 VMB173 VMS173 VMV173
	goto TTL;
TTL:;
	base[0]= VV[229];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V365 = Cnil;
	VMR173(V365)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6803	*/

static object LI174()

{	 VMB174 VMS174 VMV174
	goto TTL;
TTL:;
	(void)(sputprop(VV[224],VV[9],Cnil));
	{object V366 = Cnil;
	VMR174(V366)}
	return Cnil;
}
/*	local entry for function progn 'compile6819	*/

static object LI175()

{	 VMB175 VMS175 VMV175
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[230];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
	vs_top=sup;
	{object V367 = Cnil;
	VMR175(V367)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-ERROR T))	*/

static void L176()
{register object *base=vs_base;
	register object *sup=base+VM176; VC176
	vs_check;
	{object V368;
	register object V369;
	register object V370;
	register object V371;
	V368=(base[0]);
	V369=(base[1]);
	V370=(base[2]);
	V371=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1320;}
	if(((V369))==Cnil){
	goto T1323;}
	base[4]= (V369);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1327;}
	base[4]= STREF(object,(V369),0);
	base[5]= STREF(object,(V369),4);
	base[6]= STREF(object,(V369),8);
	base[7]= (V370);
	base[8]= (V371);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1327;
T1327:;
	if(!(type_of((V369))==t_fixnum)){
	goto T1337;}
	{object V374;
	if(type_of(V370)==t_structure){
	goto T1343;}
	goto T1341;
	goto T1343;
T1343:;
	if(!(((V370)->str.str_def)==(VV[231]))){
	goto T1341;}
	V374= STREF(object,(V370),4);
	goto T1339;
	goto T1341;
T1341:;{object V376;
	V376= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V370);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	V377= vs_base[0];
	if(!((V376)==(CMPcar(V377)))){
	goto T1346;}}
	V374= CMPcar(((V370))->cc.cc_turbo[12]);
	goto T1339;
	goto T1346;
T1346:;
	V374= Cnil;
	goto T1339;
T1339:;
	if(((V374))==Cnil){
	goto T1352;}
	base[4]= ((V374))->v.v_self[fix((V369))]= (V370);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1352;
T1352:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1337;
T1337:;
	{register object V379;
	V379= V369;
	base[4]= (V379);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1355;}
	{object V380;
	object V381;
	register object V382;
	V380= STREF(object,(V369),0);
	V381= list(2,(V370),(V371));
	V382= STREF(object,(V369),4);
	if(((V382))==Cnil){
	goto T1363;}
	if((CMPcdr((V382)))!=Cnil){
	goto T1363;}
	base[4]= (V381);
	base[5]= CMPcar((V382));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V380);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1363;
T1363:;
	base[4]= (V380);
	base[5]= (V381);
	{object V383;
	V383= (V382);
	 vs_top=base+6;
	 while(V383!=Cnil)
	 {vs_push((V383)->c.c_car);V383=(V383)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1355;
T1355:;
	base[4]= (V379);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1373;}
	base[4]= (V370);
	base[5]= (V371);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V369);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1373;
T1373:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V369;
	base[9]= VV[43];
	base[10]= VV[232];
	base[11]= VV[45];
	base[12]= VV[233];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1323;
T1323:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	return;
	goto T1320;
T1320:;
	{register object V385;
	V385= (V371);
	base[4]= V370;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1388;}
	base[4]= (V385);
	base[5]= VV[234];
	base[7]= V370;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T1388;
T1388:;
	if(((V369))==Cnil){
	goto T1397;}
	base[4]= (V369);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1401;}
	base[4]= STREF(object,(V369),0);
	base[5]= STREF(object,(V369),4);
	base[6]= STREF(object,(V369),8);
	base[7]= (V370);
	base[8]= (V385);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1401;
T1401:;
	if(!(type_of((V369))==t_fixnum)){
	goto T1411;}
	{object V387;
	if(type_of(V370)==t_structure){
	goto T1417;}
	goto T1415;
	goto T1417;
T1417:;
	if(!(((V370)->str.str_def)==(VV[235]))){
	goto T1415;}
	V387= STREF(object,(V370),4);
	goto T1413;
	goto T1415;
T1415:;{object V389;
	V389= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V370);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	V390= vs_base[0];
	if(!((V389)==(CMPcar(V390)))){
	goto T1420;}}
	V387= CMPcar(((V370))->cc.cc_turbo[12]);
	goto T1413;
	goto T1420;
T1420:;
	V387= Cnil;
	goto T1413;
T1413:;
	if(((V387))==Cnil){
	goto T1426;}
	base[4]= ((V387))->v.v_self[fix((V369))]= (V370);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1426;
T1426:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1411;
T1411:;
	{register object V392;
	V392= V369;
	base[4]= (V392);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1429;}
	{object V393;
	object V394;
	register object V395;
	V393= STREF(object,(V369),0);
	V394= list(2,(V370),(V385));
	V395= STREF(object,(V369),4);
	if(((V395))==Cnil){
	goto T1437;}
	if((CMPcdr((V395)))!=Cnil){
	goto T1437;}
	base[4]= (V394);
	base[5]= CMPcar((V395));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V393);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1437;
T1437:;
	base[4]= (V393);
	base[5]= (V394);
	{object V396;
	V396= (V395);
	 vs_top=base+6;
	 while(V396!=Cnil)
	 {vs_push((V396)->c.c_car);V396=(V396)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1429;
T1429:;
	base[4]= (V392);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1447;}
	base[4]= (V370);
	base[5]= (V385);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V369);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1447;
T1447:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V369;
	base[9]= VV[43];
	base[10]= VV[236];
	base[11]= VV[45];
	base[12]= VV[237];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1397;
T1397:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	return;}
	}
}
/*	local entry for function progn 'compile7132	*/

static object LI177()

{	 VMB177 VMS177 VMV177
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[238];
	base[4]= VV[239];
	V397= (VV[352]->s.s_gfdef);
	base[5]= listA(3,VV[51],V397,VV[240]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V398 = Cnil;
	VMR177(V398)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7140	*/

static object LI178()

{	 VMB178 VMS178 VMV178
	goto TTL;
TTL:;
	{object V399 = Cnil;
	VMR178(V399)}
	return Cnil;
}
/*	local entry for function INTERNAL-SIMPLE-ERROR-PRINTER	*/

static object LI179(V402,V403)

register object V402;object V403;
{	 VMB179 VMS179 VMV179
	goto TTL;
TTL:;
	base[0]= (V402);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1472;}
	base[0]= (V403);
	base[1]= VV[241];
	base[3]= (V402);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T1472;
T1472:;
	base[0]= (V403);
	base[2]= (V402);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V404;
	base[2]= (V402);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V404= vs_base[0];
	 vs_top=base+2;
	 while(V404!=Cnil)
	 {vs_push((V404)->c.c_car);V404=(V404)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V405 = vs_base[0];
	VMR179(V405)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INTERNAL-SIMPLE-WARNING-PRINTER	*/

static void L180()
{register object *base=vs_base;
	register object *sup=base+VM180; VC180
	vs_check;
	{register object V406;
	object V407;
	V406=(base[0]);
	V407=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V406);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1485;}
	base[2]= (V407);
	base[3]= VV[242];
	base[5]= (V406);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T1485;
T1485:;
	base[2]= (V407);
	base[4]= (V406);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V408;
	base[4]= (V406);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V408= vs_base[0];
	 vs_top=base+4;
	 while(V408!=Cnil)
	 {vs_push((V408)->c.c_car);V408=(V408)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	return;
	}
}
/*	function definition for Defclass INTERNAL-SIMPLE-ERROR7184	*/

static void L181()
{register object *base=vs_base;
	register object *sup=base+VM181; VC181
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[243];
	base[1]= VV[5];
	base[2]= VV[244];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile7200	*/

static object LI182()

{	 VMB182 VMS182 VMV182
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk353)();
	vs_top=sup;
	{object V409 = Cnil;
	VMR182(V409)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7217	*/

static object LI183()

{	 VMB183 VMS183 VMV183
	goto TTL;
TTL:;
	base[0]= VV[245];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V411 = Cnil;
	VMR183(V411)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7241	*/

static object LI184()

{	 VMB184 VMS184 VMV184
	goto TTL;
TTL:;
	(void)(sputprop(VV[243],VV[9],Cnil));
	{object V412 = Cnil;
	VMR184(V412)}
	return Cnil;
}
/*	local entry for function progn 'compile7257	*/

static object LI185()

{	 VMB185 VMS185 VMV185
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[246];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
	vs_top=sup;
	{object V413 = Cnil;
	VMR185(V413)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-ERROR T))	*/

static void L186()
{register object *base=vs_base;
	register object *sup=base+VM186; VC186
	vs_check;
	{object V414;
	register object V415;
	register object V416;
	register object V417;
	V414=(base[0]);
	V415=(base[1]);
	V416=(base[2]);
	V417=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1517;}
	if(((V415))==Cnil){
	goto T1520;}
	base[4]= (V415);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1524;}
	base[4]= STREF(object,(V415),0);
	base[5]= STREF(object,(V415),4);
	base[6]= STREF(object,(V415),8);
	base[7]= (V416);
	base[8]= (V417);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1524;
T1524:;
	if(!(type_of((V415))==t_fixnum)){
	goto T1534;}
	{object V420;
	if(type_of(V416)==t_structure){
	goto T1540;}
	goto T1538;
	goto T1540;
T1540:;
	if(!(((V416)->str.str_def)==(VV[247]))){
	goto T1538;}
	V420= STREF(object,(V416),4);
	goto T1536;
	goto T1538;
T1538:;{object V422;
	V422= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V416);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	V423= vs_base[0];
	if(!((V422)==(CMPcar(V423)))){
	goto T1543;}}
	V420= CMPcar(((V416))->cc.cc_turbo[12]);
	goto T1536;
	goto T1543;
T1543:;
	V420= Cnil;
	goto T1536;
T1536:;
	if(((V420))==Cnil){
	goto T1549;}
	base[4]= ((V420))->v.v_self[fix((V415))]= (V416);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1549;
T1549:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1534;
T1534:;
	{register object V425;
	V425= V415;
	base[4]= (V425);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1552;}
	{object V426;
	object V427;
	register object V428;
	V426= STREF(object,(V415),0);
	V427= list(2,(V416),(V417));
	V428= STREF(object,(V415),4);
	if(((V428))==Cnil){
	goto T1560;}
	if((CMPcdr((V428)))!=Cnil){
	goto T1560;}
	base[4]= (V427);
	base[5]= CMPcar((V428));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V426);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1560;
T1560:;
	base[4]= (V426);
	base[5]= (V427);
	{object V429;
	V429= (V428);
	 vs_top=base+6;
	 while(V429!=Cnil)
	 {vs_push((V429)->c.c_car);V429=(V429)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1552;
T1552:;
	base[4]= (V425);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1570;}
	base[4]= (V416);
	base[5]= (V417);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V415);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1570;
T1570:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V415;
	base[9]= VV[43];
	base[10]= VV[248];
	base[11]= VV[45];
	base[12]= VV[249];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1520;
T1520:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	return;
	goto T1517;
T1517:;
	base[4]= (*(LnkLI354))((V416),(V417));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile7450	*/

static object LI187()

{	 VMB187 VMS187 VMV187
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[250];
	base[4]= VV[251];
	V430= (VV[355]->s.s_gfdef);
	base[5]= listA(3,VV[51],V430,VV[252]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V431 = Cnil;
	VMR187(V431)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7458	*/

static object LI188()

{	 VMB188 VMS188 VMV188
	goto TTL;
TTL:;
	{object V432 = Cnil;
	VMR188(V432)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-WARNING7478	*/

static void L189()
{register object *base=vs_base;
	register object *sup=base+VM189; VC189
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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile7494	*/

static object LI190()

{	 VMB190 VMS190 VMV190
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk356)();
	vs_top=sup;
	{object V433 = Cnil;
	VMR190(V433)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7511	*/

static object LI191()

{	 VMB191 VMS191 VMV191
	goto TTL;
TTL:;
	base[0]= VV[255];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V435 = Cnil;
	VMR191(V435)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7535	*/

static object LI192()

{	 VMB192 VMS192 VMV192
	goto TTL;
TTL:;
	(void)(sputprop(VV[253],VV[9],Cnil));
	{object V436 = Cnil;
	VMR192(V436)}
	return Cnil;
}
/*	local entry for function progn 'compile7551	*/

static object LI193()

{	 VMB193 VMS193 VMV193
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[256];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
	vs_top=sup;
	{object V437 = Cnil;
	VMR193(V437)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-WARNING T))	*/

static void L194()
{register object *base=vs_base;
	register object *sup=base+VM194; VC194
	vs_check;
	{object V438;
	register object V439;
	register object V440;
	register object V441;
	V438=(base[0]);
	V439=(base[1]);
	V440=(base[2]);
	V441=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1614;}
	if(((V439))==Cnil){
	goto T1617;}
	base[4]= (V439);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1621;}
	base[4]= STREF(object,(V439),0);
	base[5]= STREF(object,(V439),4);
	base[6]= STREF(object,(V439),8);
	base[7]= (V440);
	base[8]= (V441);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1621;
T1621:;
	if(!(type_of((V439))==t_fixnum)){
	goto T1631;}
	{object V444;
	if(type_of(V440)==t_structure){
	goto T1637;}
	goto T1635;
	goto T1637;
T1637:;
	if(!(((V440)->str.str_def)==(VV[257]))){
	goto T1635;}
	V444= STREF(object,(V440),4);
	goto T1633;
	goto T1635;
T1635:;{object V446;
	V446= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V440);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	V447= vs_base[0];
	if(!((V446)==(CMPcar(V447)))){
	goto T1640;}}
	V444= CMPcar(((V440))->cc.cc_turbo[12]);
	goto T1633;
	goto T1640;
T1640:;
	V444= Cnil;
	goto T1633;
T1633:;
	if(((V444))==Cnil){
	goto T1646;}
	base[4]= ((V444))->v.v_self[fix((V439))]= (V440);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1646;
T1646:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1631;
T1631:;
	{register object V449;
	V449= V439;
	base[4]= (V449);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk304)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1649;}
	{object V450;
	object V451;
	register object V452;
	V450= STREF(object,(V439),0);
	V451= list(2,(V440),(V441));
	V452= STREF(object,(V439),4);
	if(((V452))==Cnil){
	goto T1657;}
	if((CMPcdr((V452)))!=Cnil){
	goto T1657;}
	base[4]= (V451);
	base[5]= CMPcar((V452));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V450);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1657;
T1657:;
	base[4]= (V450);
	base[5]= (V451);
	{object V453;
	V453= (V452);
	 vs_top=base+6;
	 while(V453!=Cnil)
	 {vs_push((V453)->c.c_car);V453=(V453)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1649;
T1649:;
	base[4]= (V449);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1667;}
	base[4]= (V440);
	base[5]= (V441);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V439);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1667;
T1667:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V439;
	base[9]= VV[43];
	base[10]= VV[258];
	base[11]= VV[45];
	base[12]= VV[259];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1617;
T1617:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk306)();
	return;
	goto T1614;
T1614:;
	base[4]= (V440);
	base[5]= (V441);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk357)();
	return;
	}
}
/*	local entry for function progn 'compile7744	*/

static object LI195()

{	 VMB195 VMS195 VMV195
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[260];
	base[4]= VV[261];
	V454= (VV[358]->s.s_gfdef);
	base[5]= listA(3,VV[51],V454,VV[262]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V455 = Cnil;
	VMR195(V455)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7752	*/

static object LI196()

{	 VMB196 VMS196 VMV196
	goto TTL;
TTL:;
	{object V456 = Cnil;
	VMR196(V456)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-TYPE-ERROR7772	*/

static void L197()
{register object *base=vs_base;
	register object *sup=base+VM197; VC197
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[263];
	base[1]= VV[5];
	base[2]= VV[264];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile7788	*/

static object LI198()

{	 VMB198 VMS198 VMV198
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	{object V457 = Cnil;
	VMR198(V457)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7805	*/

static object LI199()

{	 VMB199 VMS199 VMV199
	goto TTL;
TTL:;
	base[0]= VV[265];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V459 = Cnil;
	VMR199(V459)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7829	*/

static object LI200()

{	 VMB200 VMS200 VMV200
	goto TTL;
TTL:;
	(void)(sputprop(VV[263],VV[9],Cnil));
	{object V460 = Cnil;
	VMR200(V460)}
	return Cnil;
}
/*	local entry for function progn 'compile7841	*/

static object LI201()

{	 VMB201 VMS201 VMV201
	goto TTL;
TTL:;
	{object V461 = Cnil;
	VMR201(V461)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-PACKAGE-ERROR7861	*/

static void L202()
{register object *base=vs_base;
	register object *sup=base+VM202; VC202
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[266];
	base[1]= VV[5];
	base[2]= VV[267];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile7877	*/

static object LI203()

{	 VMB203 VMS203 VMV203
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk360)();
	vs_top=sup;
	{object V462 = Cnil;
	VMR203(V462)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7894	*/

static object LI204()

{	 VMB204 VMS204 VMV204
	goto TTL;
TTL:;
	base[0]= VV[268];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V464 = Cnil;
	VMR204(V464)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7918	*/

static object LI205()

{	 VMB205 VMS205 VMV205
	goto TTL;
TTL:;
	(void)(sputprop(VV[266],VV[9],Cnil));
	{object V465 = Cnil;
	VMR205(V465)}
	return Cnil;
}
/*	local entry for function progn 'compile7930	*/

static object LI206()

{	 VMB206 VMS206 VMV206
	goto TTL;
TTL:;
	{object V466 = Cnil;
	VMR206(V466)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7950	*/

static void L207()
{register object *base=vs_base;
	register object *sup=base+VM207; VC207
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[269];
	base[1]= VV[5];
	base[2]= VV[270];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile7966	*/

static object LI208()

{	 VMB208 VMS208 VMV208
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	{object V467 = Cnil;
	VMR208(V467)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7983	*/

static object LI209()

{	 VMB209 VMS209 VMV209
	goto TTL;
TTL:;
	base[0]= VV[271];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V469 = Cnil;
	VMR209(V469)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8007	*/

static object LI210()

{	 VMB210 VMS210 VMV210
	goto TTL;
TTL:;
	(void)(sputprop(VV[269],VV[9],Cnil));
	{object V470 = Cnil;
	VMR210(V470)}
	return Cnil;
}
/*	local entry for function progn 'compile8019	*/

static object LI211()

{	 VMB211 VMS211 VMV211
	goto TTL;
TTL:;
	{object V471 = Cnil;
	VMR211(V471)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PARSE-ERROR8039	*/

static void L212()
{register object *base=vs_base;
	register object *sup=base+VM212; VC212
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[272];
	base[1]= VV[5];
	base[2]= VV[273];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile8055	*/

static object LI213()

{	 VMB213 VMS213 VMV213
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk362)();
	vs_top=sup;
	{object V472 = Cnil;
	VMR213(V472)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8072	*/

static object LI214()

{	 VMB214 VMS214 VMV214
	goto TTL;
TTL:;
	base[0]= VV[274];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V474 = Cnil;
	VMR214(V474)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8096	*/

static object LI215()

{	 VMB215 VMS215 VMV215
	goto TTL;
TTL:;
	(void)(sputprop(VV[272],VV[9],Cnil));
	{object V475 = Cnil;
	VMR215(V475)}
	return Cnil;
}
/*	local entry for function progn 'compile8108	*/

static object LI216()

{	 VMB216 VMS216 VMV216
	goto TTL;
TTL:;
	{object V476 = Cnil;
	VMR216(V476)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-CONTROL-ERROR8128	*/

static void L217()
{register object *base=vs_base;
	register object *sup=base+VM217; VC217
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[275];
	base[1]= VV[5];
	base[2]= VV[276];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile8144	*/

static object LI218()

{	 VMB218 VMS218 VMV218
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	{object V477 = Cnil;
	VMR218(V477)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8161	*/

static object LI219()

{	 VMB219 VMS219 VMV219
	goto TTL;
TTL:;
	base[0]= VV[277];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V479 = Cnil;
	VMR219(V479)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8185	*/

static object LI220()

{	 VMB220 VMS220 VMV220
	goto TTL;
TTL:;
	(void)(sputprop(VV[275],VV[9],Cnil));
	{object V480 = Cnil;
	VMR220(V480)}
	return Cnil;
}
/*	local entry for function progn 'compile8197	*/

static object LI221()

{	 VMB221 VMS221 VMV221
	goto TTL;
TTL:;
	{object V481 = Cnil;
	VMR221(V481)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNBOUND-VARIABLE8217	*/

static void L222()
{register object *base=vs_base;
	register object *sup=base+VM222; VC222
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[278];
	base[1]= VV[5];
	base[2]= VV[279];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile8233	*/

static object LI223()

{	 VMB223 VMS223 VMV223
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk364)();
	vs_top=sup;
	{object V482 = Cnil;
	VMR223(V482)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8250	*/

static object LI224()

{	 VMB224 VMS224 VMV224
	goto TTL;
TTL:;
	base[0]= VV[280];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V484 = Cnil;
	VMR224(V484)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8274	*/

static object LI225()

{	 VMB225 VMS225 VMV225
	goto TTL;
TTL:;
	(void)(sputprop(VV[278],VV[9],Cnil));
	{object V485 = Cnil;
	VMR225(V485)}
	return Cnil;
}
/*	local entry for function progn 'compile8286	*/

static object LI226()

{	 VMB226 VMS226 VMV226
	goto TTL;
TTL:;
	{object V486 = Cnil;
	VMR226(V486)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNDEFINED-FUNCTION8306	*/

static void L227()
{register object *base=vs_base;
	register object *sup=base+VM227; VC227
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[281];
	base[1]= VV[5];
	base[2]= VV[282];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile8322	*/

static object LI228()

{	 VMB228 VMS228 VMV228
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk365)();
	vs_top=sup;
	{object V487 = Cnil;
	VMR228(V487)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8339	*/

static object LI229()

{	 VMB229 VMS229 VMV229
	goto TTL;
TTL:;
	base[0]= VV[283];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V489 = Cnil;
	VMR229(V489)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8363	*/

static object LI230()

{	 VMB230 VMS230 VMV230
	goto TTL;
TTL:;
	(void)(sputprop(VV[281],VV[9],Cnil));
	{object V490 = Cnil;
	VMR230(V490)}
	return Cnil;
}
/*	local entry for function progn 'compile8375	*/

static object LI231()

{	 VMB231 VMS231 VMV231
	goto TTL;
TTL:;
	{object V491 = Cnil;
	VMR231(V491)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-END-OF-FILE8395	*/

static void L232()
{register object *base=vs_base;
	register object *sup=base+VM232; VC232
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[284];
	base[1]= VV[5];
	base[2]= VV[285];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile8411	*/

static object LI233()

{	 VMB233 VMS233 VMV233
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk366)();
	vs_top=sup;
	{object V492 = Cnil;
	VMR233(V492)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8428	*/

static object LI234()

{	 VMB234 VMS234 VMV234
	goto TTL;
TTL:;
	base[0]= VV[286];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V494 = Cnil;
	VMR234(V494)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8452	*/

static object LI235()

{	 VMB235 VMS235 VMV235
	goto TTL;
TTL:;
	(void)(sputprop(VV[284],VV[9],Cnil));
	{object V495 = Cnil;
	VMR235(V495)}
	return Cnil;
}
/*	local entry for function progn 'compile8464	*/

static object LI236()

{	 VMB236 VMS236 VMV236
	goto TTL;
TTL:;
	{object V496 = Cnil;
	VMR236(V496)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-FILE-ERROR8484	*/

static void L237()
{register object *base=vs_base;
	register object *sup=base+VM237; VC237
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[287];
	base[1]= VV[5];
	base[2]= VV[288];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile8500	*/

static object LI238()

{	 VMB238 VMS238 VMV238
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk367)();
	vs_top=sup;
	{object V497 = Cnil;
	VMR238(V497)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8517	*/

static object LI239()

{	 VMB239 VMS239 VMV239
	goto TTL;
TTL:;
	base[0]= VV[289];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V499 = Cnil;
	VMR239(V499)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8541	*/

static object LI240()

{	 VMB240 VMS240 VMV240
	goto TTL;
TTL:;
	(void)(sputprop(VV[287],VV[9],Cnil));
	{object V500 = Cnil;
	VMR240(V500)}
	return Cnil;
}
/*	local entry for function progn 'compile8553	*/

static object LI241()

{	 VMB241 VMS241 VMV241
	goto TTL;
TTL:;
	{object V501 = Cnil;
	VMR241(V501)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-STREAM-ERROR8573	*/

static void L242()
{register object *base=vs_base;
	register object *sup=base+VM242; VC242
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
	symlispcall(VV[295],base+0,6);
	return;
}
/*	local entry for function progn 'compile8589	*/

static object LI243()

{	 VMB243 VMS243 VMV243
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk368)();
	vs_top=sup;
	{object V502 = Cnil;
	VMR243(V502)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8606	*/

static object LI244()

{	 VMB244 VMS244 VMV244
	goto TTL;
TTL:;
	base[0]= VV[292];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V504 = Cnil;
	VMR244(V504)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8630	*/

static object LI245()

{	 VMB245 VMS245 VMV245
	goto TTL;
TTL:;
	(void)(sputprop(VV[290],VV[9],Cnil));
	{object V505 = Cnil;
	VMR245(V505)}
	return Cnil;
}
/*	local entry for function progn 'compile8642	*/

static object LI246()

{	 VMB246 VMS246 VMV246
	goto TTL;
TTL:;
	{object V506 = Cnil;
	VMR246(V506)}
	return Cnil;
}
/*	local entry for function progn 'compile8658	*/

static object LI247()

{	 VMB247 VMS247 VMV247
	goto TTL;
TTL:;
	base[0]= VV[293];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk369)();
	vs_top=sup;
	{object V507 = Cnil;
	VMR247(V507)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8670	*/

static object LI248()

{	 VMB248 VMS248 VMV248
	goto TTL;
TTL:;
	if(!((VV[293])->s.s_dbind!=OBJNULL)){
	goto T1827;}
	goto T1826;
	goto T1827;
T1827:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	vs_top=sup;
	(VV[293]->s.s_dbind)= vs_base[0];
	goto T1826;
T1826:;
	{object V508 = Cnil;
	VMR248(V508)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile8683	*/

static object LI249()

{	 VMB249 VMS249 VMV249
	goto TTL;
TTL:;
	{object V509 = Cnil;
	VMR249(V509)}
	return Cnil;
}
/*	local entry for function SIMPLE-CONDITION-CLASS-P	*/

static object LI250(V511)

register object V511;
{	 VMB250 VMS250 VMV250
	goto TTL;
TTL:;
	if(!(type_of((V511))==t_symbol)){
	goto T1832;}
	base[0]= (V511);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk370)();
	vs_top=sup;
	V511= vs_base[0];
	goto T1832;
T1832:;
	base[0]= (V511);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1837;}
	{object V512 = Cnil;
	VMR250(V512)}
	goto T1837;
T1837:;{object V514;
	V514= (VV[293]->s.s_dbind);
	base[0]= (V511);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	V515= vs_base[0];
	{register object x= V514,V513= V515;
	while(V513!=Cnil)
	if(eql(x,V513->c.c_car)){
	{object V516 = V513;
	VMR250(V516)}
	}else V513=V513->c.c_cdr;
	{object V517 = Cnil;
	VMR250(V517)}}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT372(ptr) object *ptr;{ call_or_link_closure(VV[372],(void **)(void *)&Lnk372,(void **)(void *)&Lclptr372);} /* CLASS-PRECEDENCE-LIST */
static void LnkT371(){ call_or_link(VV[371],(void **)(void *)&Lnk371);} /* TYPEP */
static void LnkT370(){ call_or_link(VV[370],(void **)(void *)&Lnk370);} /* FIND-CLASS */
static void LnkT369(){ call_or_link(VV[369],(void **)(void *)&Lnk369);} /* *MAKE-SPECIAL */
static void LnkT368(){ call_or_link(VV[368],(void **)(void *)&Lnk368);} /* Defclass INTERNAL-SIMPLE-STREAM-ERROR8573 */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* Defclass INTERNAL-SIMPLE-FILE-ERROR8484 */
static void LnkT366(){ call_or_link(VV[366],(void **)(void *)&Lnk366);} /* Defclass INTERNAL-END-OF-FILE8395 */
static void LnkT365(){ call_or_link(VV[365],(void **)(void *)&Lnk365);} /* Defclass INTERNAL-UNDEFINED-FUNCTION8306 */
static void LnkT364(){ call_or_link(VV[364],(void **)(void *)&Lnk364);} /* Defclass INTERNAL-UNBOUND-VARIABLE8217 */
static void LnkT363(){ call_or_link(VV[363],(void **)(void *)&Lnk363);} /* Defclass INTERNAL-SIMPLE-CONTROL-ERROR8128 */
static void LnkT362(){ call_or_link(VV[362],(void **)(void *)&Lnk362);} /* Defclass INTERNAL-SIMPLE-PARSE-ERROR8039 */
static void LnkT361(){ call_or_link(VV[361],(void **)(void *)&Lnk361);} /* Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7950 */
static void LnkT360(){ call_or_link(VV[360],(void **)(void *)&Lnk360);} /* Defclass INTERNAL-PACKAGE-ERROR7861 */
static void LnkT359(){ call_or_link(VV[359],(void **)(void *)&Lnk359);} /* Defclass INTERNAL-TYPE-ERROR7772 */
static void LnkT357(){ call_or_link(VV[357],(void **)(void *)&Lnk357);} /* INTERNAL-SIMPLE-WARNING-PRINTER */
static void LnkT356(){ call_or_link(VV[356],(void **)(void *)&Lnk356);} /* Defclass INTERNAL-SIMPLE-WARNING7478 */
static object  LnkTLI354(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[354],(void **)(void *)&LnkLI354,2,first,ap);va_end(ap);return V1;} /* INTERNAL-SIMPLE-ERROR-PRINTER */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* Defclass INTERNAL-SIMPLE-ERROR7184 */
static void LnkT351(){ call_or_link(VV[351],(void **)(void *)&Lnk351);} /* Defclass INTERNAL-ERROR6745 */
static void LnkT349(ptr) object *ptr;{ call_or_link_closure(VV[349],(void **)(void *)&Lnk349,(void **)(void *)&Lclptr349);} /* INTERNAL-ERROR-FUNCTION-NAME */
static void LnkT348(){ call_or_link(VV[348],(void **)(void *)&Lnk348);} /* Defclass INTERNAL-WARNING6330 */
static void LnkT346(){ call_or_link(VV[346],(void **)(void *)&Lnk346);} /* Defclass ABORT-FAILURE6028 */
static void LnkT345(){ call_or_link(VV[345],(void **)(void *)&Lnk345);} /* Defclass FLOATING-POINT-UNDERFLOW5939 */
static void LnkT344(){ call_or_link(VV[344],(void **)(void *)&Lnk344);} /* Defclass FLOATING-POINT-OVERFLOW5850 */
static void LnkT343(){ call_or_link(VV[343],(void **)(void *)&Lnk343);} /* Defclass DIVISION-BY-ZERO5761 */
static void LnkT342(){ call_or_link(VV[342],(void **)(void *)&Lnk342);} /* Defclass ARITHMETIC-ERROR5671 */
static void LnkT340(){ call_or_link(VV[340],(void **)(void *)&Lnk340);} /* Defclass UNDEFINED-FUNCTION5373 */
static void LnkT338(ptr) object *ptr;{ call_or_link_closure(VV[338],(void **)(void *)&Lnk338,(void **)(void *)&Lclptr338);} /* CELL-ERROR-NAME */
static void LnkT337(){ call_or_link(VV[337],(void **)(void *)&Lnk337);} /* Defclass UNBOUND-VARIABLE5075 */
static void LnkT336(){ call_or_link(VV[336],(void **)(void *)&Lnk336);} /* Defclass CELL-ERROR4985 */
static void LnkT334(ptr) object *ptr;{ call_or_link_closure(VV[334],(void **)(void *)&Lnk334,(void **)(void *)&Lclptr334);} /* PACKAGE-ERROR-MESSAGE */
static void LnkT333(ptr) object *ptr;{ call_or_link_closure(VV[333],(void **)(void *)&Lnk333,(void **)(void *)&Lclptr333);} /* PACKAGE-ERROR-PACKAGE */
static void LnkT332(){ call_or_link(VV[332],(void **)(void *)&Lnk332);} /* Defclass PACKAGE-ERROR4685 */
static void LnkT331(){ call_or_link(VV[331],(void **)(void *)&Lnk331);} /* Defclass FILE-ERROR4595 */
static void LnkT329(ptr) object *ptr;{ call_or_link_closure(VV[329],(void **)(void *)&Lnk329,(void **)(void *)&Lclptr329);} /* STREAM-ERROR-STREAM */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* Defclass END-OF-FILE4297 */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* Defclass STREAM-ERROR4207 */
static void LnkT326(){ call_or_link(VV[326],(void **)(void *)&Lnk326);} /* Defclass PARSE-ERROR4118 */
static void LnkT325(){ call_or_link(VV[325],(void **)(void *)&Lnk325);} /* Defclass CONTROL-ERROR4029 */
static void LnkT324(){ call_or_link(VV[324],(void **)(void *)&Lnk324);} /* Defclass PROGRAM-ERROR3940 */
static void LnkT322(ptr) object *ptr;{ call_or_link_closure(VV[322],(void **)(void *)&Lnk322,(void **)(void *)&Lclptr322);} /* CASE-FAILURE-POSSIBILITIES */
static void LnkT321(ptr) object *ptr;{ call_or_link_closure(VV[321],(void **)(void *)&Lnk321,(void **)(void *)&Lclptr321);} /* CASE-FAILURE-NAME */
static void LnkT320(){ call_or_link(VV[320],(void **)(void *)&Lnk320);} /* Defclass CASE-FAILURE3640 */
static void LnkT319(){ call_or_link(VV[319],(void **)(void *)&Lnk319);} /* Defclass SIMPLE-TYPE-ERROR3551 */
static void LnkT317(ptr) object *ptr;{ call_or_link_closure(VV[317],(void **)(void *)&Lnk317,(void **)(void *)&Lclptr317);} /* TYPE-ERROR-EXPECTED-TYPE */
static void LnkT316(ptr) object *ptr;{ call_or_link_closure(VV[316],(void **)(void *)&Lnk316,(void **)(void *)&Lclptr316);} /* TYPE-ERROR-DATUM */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* Defclass TYPE-ERROR3251 */
static void LnkT314(){ call_or_link(VV[314],(void **)(void *)&Lnk314);} /* Defclass STORAGE-EXHAUSTED3162 */
static void LnkT313(){ call_or_link(VV[313],(void **)(void *)&Lnk313);} /* Defclass STACK-OVERFLOW3073 */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* Defclass STORAGE-CONDITION2984 */
static void LnkT311(){ call_or_link(VV[311],(void **)(void *)&Lnk311);} /* Defclass SIMPLE-ERROR2895 */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* Defclass SIMPLE-WARNING2806 */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* LOAD-DEFMETHOD */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,2,first,ap);va_end(ap);return V1;} /* SIMPLE-CONDITION-PRINTER */
static void LnkT306(){ call_or_link(VV[306],(void **)(void *)&Lnk306);} /* ERROR */
static void LnkT13(){ call_or_link(VV[13],(void **)(void *)&Lnk13);} /* ERROR */
static void LnkT305(){ call_or_link(VV[305],(void **)(void *)&Lnk305);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT304(){ call_or_link(VV[304],(void **)(void *)&Lnk304);} /* STRUCTURE-SUBTYPE-P */
static void LnkT303(){ call_or_link(VV[303],(void **)(void *)&Lnk303);} /* PROCLAIM-DEFGENERIC */
static void LnkT302(){ call_or_link(VV[302],(void **)(void *)&Lnk302);} /* Defclass SIMPLE-CONDITION2510 */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* SIMPLE-CONDITION-FORMAT-ARGUMENTS */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* SIMPLE-CONDITION-FORMAT-STRING */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* Defclass ERROR2413 */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* Defclass SERIOUS-CONDITION2324 */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* Defclass WARNING2235 */
static void LnkT294(){ call_or_link(VV[294],(void **)(void *)&Lnk294);} /* REMOVE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

