
#include "cmpinclude.h"
#include "clcs_condition_definitions.h"
void init_clcs_condition_definitions(){do_init(VV);}
/*	local entry for function progn 'compile2187	*/

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
/*	local entry for function progn 'compile2207	*/

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
	(void) (*Lnk260)();
	vs_top=sup;
	(VV[1]->s.s_dbind)= vs_base[0];
	goto T5;
T5:;
	{object V7 = Cnil;
	VMR2(V7)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass WARNING2253	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2269	*/

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
/*	local entry for function progn 'compile2286	*/

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
/*	local entry for function progn 'compile2310	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	(void)(sputprop(VV[4],VV[9],Cnil));
	{object V11 = Cnil;
	VMR6(V11)}
	return Cnil;
}
/*	local entry for function progn 'compile2322	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	function definition for Defclass SERIOUS-CONDITION2342	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2358	*/

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
/*	local entry for function progn 'compile2375	*/

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
/*	local entry for function progn 'compile2399	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	(void)(sputprop(VV[10],VV[9],Cnil));
	{object V16 = Cnil;
	VMR11(V16)}
	return Cnil;
}
/*	local entry for function progn 'compile2411	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V17 = Cnil;
	VMR12(V17)}
	return Cnil;
}
/*	function definition for Defclass ERROR2431	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2447	*/

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
/*	local entry for function progn 'compile2464	*/

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
/*	local entry for function progn 'compile2488	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	(void)(sputprop(VV[13],VV[9],Cnil));
	{object V21 = Cnil;
	VMR16(V21)}
	return Cnil;
}
/*	local entry for function progn 'compile2500	*/

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
/*	function definition for Defclass SIMPLE-CONDITION2528	*/

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
	base[5]= (VV[267]->s.s_gfdef);
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
/*	local entry for function progn 'compile2546	*/

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
/*	local entry for function progn 'compile2563	*/

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
/*	local entry for function progn 'compile2587	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	(void)(sputprop(VV[16],VV[9],Cnil));
	{object V34 = Cnil;
	VMR22(V34)}
	return Cnil;
}
/*	local entry for function progn 'compile2603	*/

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
	(void) (*Lnk270)();
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
	(void) (*Lnk271)();
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
	(void) (*Lnk270)();
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
	(void) (*Lnk272)();
	return;
	goto T107;
T107:;
	base[4]= (*(LnkLI273))((V38),(V39));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile2796	*/

static object LI25()

{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[49];
	base[4]= VV[50];
	V52= (VV[274]->s.s_gfdef);
	base[5]= listA(3,VV[51],V52,VV[52]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V53 = Cnil;
	VMR25(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2804	*/

static object LI26()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V54 = Cnil;
	VMR26(V54)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-WARNING2824	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2840	*/

static object LI28()

{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk276)();
	vs_top=sup;
	{object V55 = Cnil;
	VMR28(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2857	*/

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
/*	local entry for function progn 'compile2881	*/

static object LI30()

{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	(void)(sputprop(VV[53],VV[9],Cnil));
	{object V58 = Cnil;
	VMR30(V58)}
	return Cnil;
}
/*	local entry for function progn 'compile2893	*/

static object LI31()

{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V59 = Cnil;
	VMR31(V59)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-ERROR2913	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile2929	*/

static object LI33()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk277)();
	vs_top=sup;
	{object V60 = Cnil;
	VMR33(V60)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2946	*/

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
/*	local entry for function progn 'compile2970	*/

static object LI35()

{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	(void)(sputprop(VV[56],VV[9],Cnil));
	{object V63 = Cnil;
	VMR35(V63)}
	return Cnil;
}
/*	local entry for function progn 'compile2982	*/

static object LI36()

{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V64 = Cnil;
	VMR36(V64)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-CONDITION3002	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3018	*/

static object LI38()

{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk278)();
	vs_top=sup;
	{object V65 = Cnil;
	VMR38(V65)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3035	*/

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
/*	local entry for function progn 'compile3059	*/

static object LI40()

{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	(void)(sputprop(VV[59],VV[9],Cnil));
	{object V68 = Cnil;
	VMR40(V68)}
	return Cnil;
}
/*	local entry for function progn 'compile3071	*/

static object LI41()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V69 = Cnil;
	VMR41(V69)}
	return Cnil;
}
/*	function definition for Defclass STACK-OVERFLOW3091	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3107	*/

static object LI43()

{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V70 = Cnil;
	VMR43(V70)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3124	*/

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
/*	local entry for function progn 'compile3148	*/

static object LI45()

{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	(void)(sputprop(VV[62],VV[9],Cnil));
	{object V73 = Cnil;
	VMR45(V73)}
	return Cnil;
}
/*	local entry for function progn 'compile3160	*/

static object LI46()

{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V74 = Cnil;
	VMR46(V74)}
	return Cnil;
}
/*	function definition for Defclass STORAGE-EXHAUSTED3180	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3196	*/

static object LI48()

{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk280)();
	vs_top=sup;
	{object V75 = Cnil;
	VMR48(V75)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3213	*/

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
/*	local entry for function progn 'compile3237	*/

static object LI50()

{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)(sputprop(VV[65],VV[9],Cnil));
	{object V78 = Cnil;
	VMR50(V78)}
	return Cnil;
}
/*	local entry for function progn 'compile3249	*/

static object LI51()

{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V79 = Cnil;
	VMR51(V79)}
	return Cnil;
}
/*	function definition for Defclass TYPE-ERROR3269	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3287	*/

static object LI53()

{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V81 = Cnil;
	VMR53(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3304	*/

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
/*	local entry for function progn 'compile3328	*/

static object LI55()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	(void)(sputprop(VV[68],VV[9],Cnil));
	{object V84 = Cnil;
	VMR55(V84)}
	return Cnil;
}
/*	local entry for function progn 'compile3344	*/

static object LI56()

{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[77];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
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
	(void) (*Lnk270)();
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
	(void) (*Lnk271)();
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
	(void) (*Lnk270)();
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
	(void) (*Lnk272)();
	return;
	goto T269;
T269:;
	base[4]= V89;
	base[5]= VV[81];
	base[7]= V88;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V88;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3541	*/

static object LI58()

{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[82];
	base[4]= VV[83];
	V104= (VV[284]->s.s_gfdef);
	base[5]= listA(3,VV[51],V104,VV[84]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V105 = Cnil;
	VMR58(V105)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3549	*/

static object LI59()

{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V106 = Cnil;
	VMR59(V106)}
	return Cnil;
}
/*	function definition for Defclass SIMPLE-TYPE-ERROR3569	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3585	*/

static object LI61()

{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk285)();
	vs_top=sup;
	{object V107 = Cnil;
	VMR61(V107)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3602	*/

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
/*	local entry for function progn 'compile3626	*/

static object LI63()

{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	(void)(sputprop(VV[85],VV[9],Cnil));
	{object V110 = Cnil;
	VMR63(V110)}
	return Cnil;
}
/*	local entry for function progn 'compile3638	*/

static object LI64()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V111 = Cnil;
	VMR64(V111)}
	return Cnil;
}
/*	function definition for Defclass CASE-FAILURE3658	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3676	*/

static object LI66()

{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk286)();
	vs_top=sup;
	{object V113 = Cnil;
	VMR66(V113)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile3693	*/

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
/*	local entry for function progn 'compile3717	*/

static object LI68()

{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	(void)(sputprop(VV[40],VV[9],Cnil));
	{object V116 = Cnil;
	VMR68(V116)}
	return Cnil;
}
/*	local entry for function progn 'compile3733	*/

static object LI69()

{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
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
	(void) (*Lnk270)();
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
	(void) (*Lnk271)();
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
	(void) (*Lnk270)();
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
	(void) (*Lnk272)();
	return;
	goto T385;
T385:;
	base[4]= V121;
	base[5]= VV[100];
	base[7]= V120;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V120;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= V120;
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile3930	*/

static object LI71()

{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[101];
	base[4]= VV[102];
	V136= (VV[289]->s.s_gfdef);
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
/*	local entry for function progn 'compile3938	*/

static object LI72()

{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V138 = Cnil;
	VMR72(V138)}
	return Cnil;
}
/*	function definition for Defclass PROGRAM-ERROR3958	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile3974	*/

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
/*	local entry for function progn 'compile3991	*/

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
/*	local entry for function progn 'compile4015	*/

static object LI76()

{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	(void)(sputprop(VV[104],VV[9],Cnil));
	{object V142 = Cnil;
	VMR76(V142)}
	return Cnil;
}
/*	local entry for function progn 'compile4027	*/

static object LI77()

{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V143 = Cnil;
	VMR77(V143)}
	return Cnil;
}
/*	function definition for Defclass CONTROL-ERROR4047	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4063	*/

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
/*	local entry for function progn 'compile4080	*/

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
/*	local entry for function progn 'compile4104	*/

static object LI81()

{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)(sputprop(VV[107],VV[9],Cnil));
	{object V147 = Cnil;
	VMR81(V147)}
	return Cnil;
}
/*	local entry for function progn 'compile4116	*/

static object LI82()

{	 VMB82 VMS82 VMV82
	goto TTL;
TTL:;
	{object V148 = Cnil;
	VMR82(V148)}
	return Cnil;
}
/*	function definition for Defclass STREAM-ERROR4136	*/

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
	V149= listA(9,VV[18],VV[112],VV[20],VV[113],VV[22],Cnil,VV[23],VV[114],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V149,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4153	*/

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
/*	local entry for function progn 'compile4170	*/

static object LI85()

{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	base[0]= VV[115];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V152 = Cnil;
	VMR85(V152)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4194	*/

static object LI86()

{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	(void)(sputprop(VV[110],VV[9],Cnil));
	{object V153 = Cnil;
	VMR86(V153)}
	return Cnil;
}
/*	local entry for function progn 'compile4206	*/

static object LI87()

{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{object V154 = Cnil;
	VMR87(V154)}
	return Cnil;
}
/*	function definition for Defclass END-OF-FILE4226	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
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
/*	local entry for function progn 'compile4242	*/

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
/*	local entry for function progn 'compile4259	*/

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
/*	local entry for function progn 'compile4283	*/

static object LI91()

{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	(void)(sputprop(VV[116],VV[9],Cnil));
	{object V158 = Cnil;
	VMR91(V158)}
	return Cnil;
}
/*	local entry for function progn 'compile4299	*/

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
	vs_check;
	{object V160;
	register object V161;
	register object V162;
	register object V163;
	V160=(base[0]);
	V161=(base[1]);
	V162=(base[2]);
	V163=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T529;}
	if(((V161))==Cnil){
	goto T532;}
	base[4]= (V161);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T536;}
	base[4]= STREF(object,(V161),0);
	base[5]= STREF(object,(V161),4);
	base[6]= STREF(object,(V161),8);
	base[7]= (V162);
	base[8]= (V163);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T536;
T536:;
	if(!(type_of((V161))==t_fixnum)){
	goto T546;}
	{object V166;
	if(type_of(V162)==t_structure){
	goto T552;}
	goto T550;
	goto T552;
T552:;
	if(!(((V162)->str.str_def)==(VV[120]))){
	goto T550;}
	V166= STREF(object,(V162),4);
	goto T548;
	goto T550;
T550:;{object V168;
	V168= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V162);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V169= vs_base[0];
	if(!((V168)==(CMPcar(V169)))){
	goto T555;}}
	V166= CMPcar(((V162))->cc.cc_turbo[12]);
	goto T548;
	goto T555;
T555:;
	V166= Cnil;
	goto T548;
T548:;
	if(((V166))==Cnil){
	goto T561;}
	base[4]= ((V166))->v.v_self[fix((V161))]= (V162);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T561;
T561:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T546;
T546:;
	{register object V171;
	V171= V161;
	base[4]= (V171);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T564;}
	{object V172;
	object V173;
	register object V174;
	V172= STREF(object,(V161),0);
	V173= list(2,(V162),(V163));
	V174= STREF(object,(V161),4);
	if(((V174))==Cnil){
	goto T572;}
	if((CMPcdr((V174)))!=Cnil){
	goto T572;}
	base[4]= (V173);
	base[5]= CMPcar((V174));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V172);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T572;
T572:;
	base[4]= (V172);
	base[5]= (V173);
	{object V175;
	V175= (V174);
	 vs_top=base+6;
	 while(V175!=Cnil)
	 {vs_push((V175)->c.c_car);V175=(V175)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T564;
T564:;
	base[4]= (V171);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T582;}
	base[4]= (V162);
	base[5]= (V163);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V161);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T582;
T582:;
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
	goto T532;
T532:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;
	goto T529;
T529:;
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
/*	local entry for function progn 'compile4496	*/

static object LI94()

{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[124];
	base[4]= VV[125];
	V178= (VV[295]->s.s_gfdef);
	base[5]= listA(3,VV[51],V178,VV[126]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V179 = Cnil;
	VMR94(V179)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4504	*/

static object LI95()

{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{object V180 = Cnil;
	VMR95(V180)}
	return Cnil;
}
/*	function definition for Defclass FILE-ERROR4524	*/

static void L96()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[127];
	base[1]= VV[5];
	base[2]= VV[128];
	V181= listA(9,VV[18],VV[129],VV[20],VV[130],VV[22],Cnil,VV[23],VV[131],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V181,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4541	*/

static object LI97()

{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk296)();
	vs_top=sup;
	{object V182 = Cnil;
	VMR97(V182)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4558	*/

static object LI98()

{	 VMB98 VMS98 VMV98
	goto TTL;
TTL:;
	base[0]= VV[132];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V184 = Cnil;
	VMR98(V184)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4582	*/

static object LI99()

{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	(void)(sputprop(VV[127],VV[9],Cnil));
	{object V185 = Cnil;
	VMR99(V185)}
	return Cnil;
}
/*	local entry for function progn 'compile4594	*/

static object LI100()

{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V186 = Cnil;
	VMR100(V186)}
	return Cnil;
}
/*	function definition for Defclass PACKAGE-ERROR4614	*/

static void L101()
{register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[133];
	base[1]= VV[5];
	base[2]= VV[134];
	V187= listA(9,VV[18],VV[135],VV[20],VV[136],VV[22],Cnil,VV[23],VV[137],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V187,listA(9,VV[18],VV[138],VV[20],VV[139],VV[22],Cnil,VV[23],VV[140],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4632	*/

static object LI102()

{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk297)();
	vs_top=sup;
	{object V188 = Cnil;
	VMR102(V188)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4649	*/

static object LI103()

{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[141];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V190 = Cnil;
	VMR103(V190)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4673	*/

static object LI104()

{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	(void)(sputprop(VV[133],VV[9],Cnil));
	{object V191 = Cnil;
	VMR104(V191)}
	return Cnil;
}
/*	local entry for function progn 'compile4689	*/

static object LI105()

{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[142];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V192 = Cnil;
	VMR105(V192)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (PACKAGE-ERROR T))	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{object V193;
	register object V194;
	register object V195;
	register object V196;
	V193=(base[0]);
	V194=(base[1]);
	V195=(base[2]);
	V196=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T643;}
	if(((V194))==Cnil){
	goto T646;}
	base[4]= (V194);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T650;}
	base[4]= STREF(object,(V194),0);
	base[5]= STREF(object,(V194),4);
	base[6]= STREF(object,(V194),8);
	base[7]= (V195);
	base[8]= (V196);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T650;
T650:;
	if(!(type_of((V194))==t_fixnum)){
	goto T660;}
	{object V199;
	if(type_of(V195)==t_structure){
	goto T666;}
	goto T664;
	goto T666;
T666:;
	if(!(((V195)->str.str_def)==(VV[143]))){
	goto T664;}
	V199= STREF(object,(V195),4);
	goto T662;
	goto T664;
T664:;{object V201;
	V201= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V195);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V202= vs_base[0];
	if(!((V201)==(CMPcar(V202)))){
	goto T669;}}
	V199= CMPcar(((V195))->cc.cc_turbo[12]);
	goto T662;
	goto T669;
T669:;
	V199= Cnil;
	goto T662;
T662:;
	if(((V199))==Cnil){
	goto T675;}
	base[4]= ((V199))->v.v_self[fix((V194))]= (V195);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T675;
T675:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T660;
T660:;
	{register object V204;
	V204= V194;
	base[4]= (V204);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T678;}
	{object V205;
	object V206;
	register object V207;
	V205= STREF(object,(V194),0);
	V206= list(2,(V195),(V196));
	V207= STREF(object,(V194),4);
	if(((V207))==Cnil){
	goto T686;}
	if((CMPcdr((V207)))!=Cnil){
	goto T686;}
	base[4]= (V206);
	base[5]= CMPcar((V207));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V205);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T686;
T686:;
	base[4]= (V205);
	base[5]= (V206);
	{object V208;
	V208= (V207);
	 vs_top=base+6;
	 while(V208!=Cnil)
	 {vs_push((V208)->c.c_car);V208=(V208)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T678;
T678:;
	base[4]= (V204);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T696;}
	base[4]= (V195);
	base[5]= (V196);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V194);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T696;
T696:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V194;
	base[9]= VV[43];
	base[10]= VV[144];
	base[11]= VV[45];
	base[12]= VV[145];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T646;
T646:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;
	goto T643;
T643:;
	base[4]= V196;
	base[5]= VV[146];
	base[7]= V195;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk298)(Lclptr298);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V195;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile4886	*/

static object LI107()

{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[147];
	base[4]= VV[148];
	V211= (VV[300]->s.s_gfdef);
	base[5]= listA(3,VV[51],V211,VV[149]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V212 = Cnil;
	VMR107(V212)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4894	*/

static object LI108()

{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V213 = Cnil;
	VMR108(V213)}
	return Cnil;
}
/*	function definition for Defclass CELL-ERROR4914	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[150];
	base[1]= VV[5];
	base[2]= VV[151];
	V214= listA(9,VV[18],VV[89],VV[20],VV[152],VV[22],Cnil,VV[23],VV[153],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V214,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile4931	*/

static object LI110()

{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk301)();
	vs_top=sup;
	{object V215 = Cnil;
	VMR110(V215)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4948	*/

static object LI111()

{	 VMB111 VMS111 VMV111
	goto TTL;
TTL:;
	base[0]= VV[154];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V217 = Cnil;
	VMR111(V217)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile4972	*/

static object LI112()

{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	(void)(sputprop(VV[150],VV[9],Cnil));
	{object V218 = Cnil;
	VMR112(V218)}
	return Cnil;
}
/*	local entry for function progn 'compile4984	*/

static object LI113()

{	 VMB113 VMS113 VMV113
	goto TTL;
TTL:;
	{object V219 = Cnil;
	VMR113(V219)}
	return Cnil;
}
/*	function definition for Defclass UNBOUND-VARIABLE5004	*/

static void L114()
{register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
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
/*	local entry for function progn 'compile5020	*/

static object LI115()

{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk302)();
	vs_top=sup;
	{object V220 = Cnil;
	VMR115(V220)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5037	*/

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
/*	local entry for function progn 'compile5061	*/

static object LI117()

{	 VMB117 VMS117 VMV117
	goto TTL;
TTL:;
	(void)(sputprop(VV[155],VV[9],Cnil));
	{object V223 = Cnil;
	VMR117(V223)}
	return Cnil;
}
/*	local entry for function progn 'compile5077	*/

static object LI118()

{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[158];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V224 = Cnil;
	VMR118(V224)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNBOUND-VARIABLE T))	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V225;
	register object V226;
	register object V227;
	register object V228;
	V225=(base[0]);
	V226=(base[1]);
	V227=(base[2]);
	V228=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T759;}
	if(((V226))==Cnil){
	goto T762;}
	base[4]= (V226);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T766;}
	base[4]= STREF(object,(V226),0);
	base[5]= STREF(object,(V226),4);
	base[6]= STREF(object,(V226),8);
	base[7]= (V227);
	base[8]= (V228);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T766;
T766:;
	if(!(type_of((V226))==t_fixnum)){
	goto T776;}
	{object V231;
	if(type_of(V227)==t_structure){
	goto T782;}
	goto T780;
	goto T782;
T782:;
	if(!(((V227)->str.str_def)==(VV[159]))){
	goto T780;}
	V231= STREF(object,(V227),4);
	goto T778;
	goto T780;
T780:;{object V233;
	V233= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V227);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V234= vs_base[0];
	if(!((V233)==(CMPcar(V234)))){
	goto T785;}}
	V231= CMPcar(((V227))->cc.cc_turbo[12]);
	goto T778;
	goto T785;
T785:;
	V231= Cnil;
	goto T778;
T778:;
	if(((V231))==Cnil){
	goto T791;}
	base[4]= ((V231))->v.v_self[fix((V226))]= (V227);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T791;
T791:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T776;
T776:;
	{register object V236;
	V236= V226;
	base[4]= (V236);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T794;}
	{object V237;
	object V238;
	register object V239;
	V237= STREF(object,(V226),0);
	V238= list(2,(V227),(V228));
	V239= STREF(object,(V226),4);
	if(((V239))==Cnil){
	goto T802;}
	if((CMPcdr((V239)))!=Cnil){
	goto T802;}
	base[4]= (V238);
	base[5]= CMPcar((V239));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V237);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T802;
T802:;
	base[4]= (V237);
	base[5]= (V238);
	{object V240;
	V240= (V239);
	 vs_top=base+6;
	 while(V240!=Cnil)
	 {vs_push((V240)->c.c_car);V240=(V240)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T794;
T794:;
	base[4]= (V236);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T812;}
	base[4]= (V227);
	base[5]= (V228);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V226);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T812;
T812:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V226;
	base[9]= VV[43];
	base[10]= VV[160];
	base[11]= VV[45];
	base[12]= VV[161];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T762;
T762:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;
	goto T759;
T759:;
	base[4]= V228;
	base[5]= VV[162];
	base[7]= V227;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5274	*/

static object LI120()

{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[163];
	base[4]= VV[164];
	V243= (VV[304]->s.s_gfdef);
	base[5]= listA(3,VV[51],V243,VV[165]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V244 = Cnil;
	VMR120(V244)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5282	*/

static object LI121()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	{object V245 = Cnil;
	VMR121(V245)}
	return Cnil;
}
/*	function definition for Defclass UNDEFINED-FUNCTION5302	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_check;
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
/*	local entry for function progn 'compile5318	*/

static object LI123()

{	 VMB123 VMS123 VMV123
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk305)();
	vs_top=sup;
	{object V246 = Cnil;
	VMR123(V246)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5335	*/

static object LI124()

{	 VMB124 VMS124 VMV124
	goto TTL;
TTL:;
	base[0]= VV[168];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V248 = Cnil;
	VMR124(V248)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5359	*/

static object LI125()

{	 VMB125 VMS125 VMV125
	goto TTL;
TTL:;
	(void)(sputprop(VV[166],VV[9],Cnil));
	{object V249 = Cnil;
	VMR125(V249)}
	return Cnil;
}
/*	local entry for function progn 'compile5375	*/

static object LI126()

{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[169];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V250 = Cnil;
	VMR126(V250)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNDEFINED-FUNCTION T))	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V251;
	register object V252;
	register object V253;
	register object V254;
	V251=(base[0]);
	V252=(base[1]);
	V253=(base[2]);
	V254=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T860;}
	if(((V252))==Cnil){
	goto T863;}
	base[4]= (V252);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T867;}
	base[4]= STREF(object,(V252),0);
	base[5]= STREF(object,(V252),4);
	base[6]= STREF(object,(V252),8);
	base[7]= (V253);
	base[8]= (V254);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T867;
T867:;
	if(!(type_of((V252))==t_fixnum)){
	goto T877;}
	{object V257;
	if(type_of(V253)==t_structure){
	goto T883;}
	goto T881;
	goto T883;
T883:;
	if(!(((V253)->str.str_def)==(VV[170]))){
	goto T881;}
	V257= STREF(object,(V253),4);
	goto T879;
	goto T881;
T881:;{object V259;
	V259= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V253);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V260= vs_base[0];
	if(!((V259)==(CMPcar(V260)))){
	goto T886;}}
	V257= CMPcar(((V253))->cc.cc_turbo[12]);
	goto T879;
	goto T886;
T886:;
	V257= Cnil;
	goto T879;
T879:;
	if(((V257))==Cnil){
	goto T892;}
	base[4]= ((V257))->v.v_self[fix((V252))]= (V253);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T892;
T892:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T877;
T877:;
	{register object V262;
	V262= V252;
	base[4]= (V262);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T895;}
	{object V263;
	object V264;
	register object V265;
	V263= STREF(object,(V252),0);
	V264= list(2,(V253),(V254));
	V265= STREF(object,(V252),4);
	if(((V265))==Cnil){
	goto T903;}
	if((CMPcdr((V265)))!=Cnil){
	goto T903;}
	base[4]= (V264);
	base[5]= CMPcar((V265));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V263);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T903;
T903:;
	base[4]= (V263);
	base[5]= (V264);
	{object V266;
	V266= (V265);
	 vs_top=base+6;
	 while(V266!=Cnil)
	 {vs_push((V266)->c.c_car);V266=(V266)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T895;
T895:;
	base[4]= (V262);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T913;}
	base[4]= (V253);
	base[5]= (V254);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V252);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T913;
T913:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V252;
	base[9]= VV[43];
	base[10]= VV[171];
	base[11]= VV[45];
	base[12]= VV[172];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T863;
T863:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;
	goto T860;
T860:;
	base[4]= V254;
	base[5]= VV[173];
	base[7]= V253;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	local entry for function progn 'compile5572	*/

static object LI128()

{	 VMB128 VMS128 VMV128
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[174];
	base[4]= VV[175];
	V269= (VV[306]->s.s_gfdef);
	base[5]= listA(3,VV[51],V269,VV[176]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V270 = Cnil;
	VMR128(V270)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5580	*/

static object LI129()

{	 VMB129 VMS129 VMV129
	goto TTL;
TTL:;
	{object V271 = Cnil;
	VMR129(V271)}
	return Cnil;
}
/*	function definition for Defclass ARITHMETIC-ERROR5600	*/

static void L130()
{register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[177];
	base[1]= VV[5];
	base[2]= VV[178];
	V272= listA(9,VV[18],VV[179],VV[20],VV[180],VV[22],Cnil,VV[23],VV[181],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V272,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5617	*/

static object LI131()

{	 VMB131 VMS131 VMV131
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk307)();
	vs_top=sup;
	{object V273 = Cnil;
	VMR131(V273)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5634	*/

static object LI132()

{	 VMB132 VMS132 VMV132
	goto TTL;
TTL:;
	base[0]= VV[182];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V275 = Cnil;
	VMR132(V275)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5658	*/

static object LI133()

{	 VMB133 VMS133 VMV133
	goto TTL;
TTL:;
	(void)(sputprop(VV[177],VV[9],Cnil));
	{object V276 = Cnil;
	VMR133(V276)}
	return Cnil;
}
/*	local entry for function progn 'compile5670	*/

static object LI134()

{	 VMB134 VMS134 VMV134
	goto TTL;
TTL:;
	{object V277 = Cnil;
	VMR134(V277)}
	return Cnil;
}
/*	function definition for Defclass DIVISION-BY-ZERO5690	*/

static void L135()
{register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_check;
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
/*	local entry for function progn 'compile5706	*/

static object LI136()

{	 VMB136 VMS136 VMV136
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk308)();
	vs_top=sup;
	{object V278 = Cnil;
	VMR136(V278)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5723	*/

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
/*	local entry for function progn 'compile5747	*/

static object LI138()

{	 VMB138 VMS138 VMV138
	goto TTL;
TTL:;
	(void)(sputprop(VV[183],VV[9],Cnil));
	{object V281 = Cnil;
	VMR138(V281)}
	return Cnil;
}
/*	local entry for function progn 'compile5759	*/

static object LI139()

{	 VMB139 VMS139 VMV139
	goto TTL;
TTL:;
	{object V282 = Cnil;
	VMR139(V282)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-OVERFLOW5779	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5795	*/

static object LI141()

{	 VMB141 VMS141 VMV141
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk309)();
	vs_top=sup;
	{object V283 = Cnil;
	VMR141(V283)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5812	*/

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
/*	local entry for function progn 'compile5836	*/

static object LI143()

{	 VMB143 VMS143 VMV143
	goto TTL;
TTL:;
	(void)(sputprop(VV[186],VV[9],Cnil));
	{object V286 = Cnil;
	VMR143(V286)}
	return Cnil;
}
/*	local entry for function progn 'compile5848	*/

static object LI144()

{	 VMB144 VMS144 VMV144
	goto TTL;
TTL:;
	{object V287 = Cnil;
	VMR144(V287)}
	return Cnil;
}
/*	function definition for Defclass FLOATING-POINT-UNDERFLOW5868	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5884	*/

static object LI146()

{	 VMB146 VMS146 VMV146
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk310)();
	vs_top=sup;
	{object V288 = Cnil;
	VMR146(V288)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5901	*/

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
/*	local entry for function progn 'compile5925	*/

static object LI148()

{	 VMB148 VMS148 VMV148
	goto TTL;
TTL:;
	(void)(sputprop(VV[189],VV[9],Cnil));
	{object V291 = Cnil;
	VMR148(V291)}
	return Cnil;
}
/*	local entry for function progn 'compile5937	*/

static object LI149()

{	 VMB149 VMS149 VMV149
	goto TTL;
TTL:;
	{object V292 = Cnil;
	VMR149(V292)}
	return Cnil;
}
/*	function definition for Defclass ABORT-FAILURE5957	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile5973	*/

static object LI151()

{	 VMB151 VMS151 VMV151
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk311)();
	vs_top=sup;
	{object V293 = Cnil;
	VMR151(V293)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile5990	*/

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
/*	local entry for function progn 'compile6014	*/

static object LI153()

{	 VMB153 VMS153 VMV153
	goto TTL;
TTL:;
	(void)(sputprop(VV[192],VV[9],Cnil));
	{object V296 = Cnil;
	VMR153(V296)}
	return Cnil;
}
/*	local entry for function progn 'compile6030	*/

static object LI154()

{	 VMB154 VMS154 VMV154
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[195];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V297 = Cnil;
	VMR154(V297)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (ABORT-FAILURE T))	*/

static void L155()
{register object *base=vs_base;
	register object *sup=base+VM155; VC155
	vs_check;
	{object V298;
	register object V299;
	register object V300;
	register object V301;
	V298=(base[0]);
	V299=(base[1]);
	V300=(base[2]);
	V301=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1013;}
	if(((V299))==Cnil){
	goto T1016;}
	base[4]= (V299);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1020;}
	base[4]= STREF(object,(V299),0);
	base[5]= STREF(object,(V299),4);
	base[6]= STREF(object,(V299),8);
	base[7]= (V300);
	base[8]= (V301);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1020;
T1020:;
	if(!(type_of((V299))==t_fixnum)){
	goto T1030;}
	{object V304;
	if(type_of(V300)==t_structure){
	goto T1036;}
	goto T1034;
	goto T1036;
T1036:;
	if(!(((V300)->str.str_def)==(VV[196]))){
	goto T1034;}
	V304= STREF(object,(V300),4);
	goto T1032;
	goto T1034;
T1034:;{object V306;
	V306= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V300);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V307= vs_base[0];
	if(!((V306)==(CMPcar(V307)))){
	goto T1039;}}
	V304= CMPcar(((V300))->cc.cc_turbo[12]);
	goto T1032;
	goto T1039;
T1039:;
	V304= Cnil;
	goto T1032;
T1032:;
	if(((V304))==Cnil){
	goto T1045;}
	base[4]= ((V304))->v.v_self[fix((V299))]= (V300);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1045;
T1045:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1030;
T1030:;
	{register object V309;
	V309= V299;
	base[4]= (V309);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1048;}
	{object V310;
	object V311;
	register object V312;
	V310= STREF(object,(V299),0);
	V311= list(2,(V300),(V301));
	V312= STREF(object,(V299),4);
	if(((V312))==Cnil){
	goto T1056;}
	if((CMPcdr((V312)))!=Cnil){
	goto T1056;}
	base[4]= (V311);
	base[5]= CMPcar((V312));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V310);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1056;
T1056:;
	base[4]= (V310);
	base[5]= (V311);
	{object V313;
	V313= (V312);
	 vs_top=base+6;
	 while(V313!=Cnil)
	 {vs_push((V313)->c.c_car);V313=(V313)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1048;
T1048:;
	base[4]= (V309);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1066;}
	base[4]= (V300);
	base[5]= (V301);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V299);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1066;
T1066:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V299;
	base[9]= VV[43];
	base[10]= VV[197];
	base[11]= VV[45];
	base[12]= VV[198];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1016;
T1016:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;
	goto T1013;
T1013:;
	base[4]= VV[199];
	base[5]= V301;
	vs_top=(vs_base=base+4)+2;
	Lwrite_string();
	return;
	}
}
/*	local entry for function progn 'compile6231	*/

static object LI156()

{	 VMB156 VMS156 VMV156
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[200];
	base[4]= VV[201];
	V316= (VV[312]->s.s_gfdef);
	base[5]= listA(3,VV[51],V316,VV[202]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V317 = Cnil;
	VMR156(V317)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6239	*/

static object LI157()

{	 VMB157 VMS157 VMV157
	goto TTL;
TTL:;
	{object V318 = Cnil;
	VMR157(V318)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-ERROR6259	*/

static void L158()
{register object *base=vs_base;
	register object *sup=base+VM158; VC158
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[203];
	base[1]= VV[5];
	base[2]= VV[204];
	base[4]= VV[26];
	base[5]= (VV[267]->s.s_gfdef);
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
	V319= vs_base[0];
	base[3]= make_cons(V319,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile6276	*/

static object LI159()

{	 VMB159 VMS159 VMV159
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk313)();
	vs_top=sup;
	{object V320 = Cnil;
	VMR159(V320)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6293	*/

static object LI160()

{	 VMB160 VMS160 VMV160
	goto TTL;
TTL:;
	base[0]= VV[209];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V322 = Cnil;
	VMR160(V322)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6317	*/

static object LI161()

{	 VMB161 VMS161 VMV161
	goto TTL;
TTL:;
	(void)(sputprop(VV[203],VV[9],Cnil));
	{object V323 = Cnil;
	VMR161(V323)}
	return Cnil;
}
/*	local entry for function progn 'compile6333	*/

static object LI162()

{	 VMB162 VMS162 VMV162
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[210];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V324 = Cnil;
	VMR162(V324)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-ERROR T))	*/

static void L163()
{register object *base=vs_base;
	register object *sup=base+VM163; VC163
	vs_check;
	{object V325;
	register object V326;
	register object V327;
	register object V328;
	V325=(base[0]);
	V326=(base[1]);
	V327=(base[2]);
	V328=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T1124;}
	if(((V326))==Cnil){
	goto T1127;}
	base[4]= (V326);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1131;}
	base[4]= STREF(object,(V326),0);
	base[5]= STREF(object,(V326),4);
	base[6]= STREF(object,(V326),8);
	base[7]= (V327);
	base[8]= (V328);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1131;
T1131:;
	if(!(type_of((V326))==t_fixnum)){
	goto T1141;}
	{object V331;
	if(type_of(V327)==t_structure){
	goto T1147;}
	goto T1145;
	goto T1147;
T1147:;
	if(!(((V327)->str.str_def)==(VV[211]))){
	goto T1145;}
	V331= STREF(object,(V327),4);
	goto T1143;
	goto T1145;
T1145:;{object V333;
	V333= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V327);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V334= vs_base[0];
	if(!((V333)==(CMPcar(V334)))){
	goto T1150;}}
	V331= CMPcar(((V327))->cc.cc_turbo[12]);
	goto T1143;
	goto T1150;
T1150:;
	V331= Cnil;
	goto T1143;
T1143:;
	if(((V331))==Cnil){
	goto T1156;}
	base[4]= ((V331))->v.v_self[fix((V326))]= (V327);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1156;
T1156:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1141;
T1141:;
	{register object V336;
	V336= V326;
	base[4]= (V336);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1159;}
	{object V337;
	object V338;
	register object V339;
	V337= STREF(object,(V326),0);
	V338= list(2,(V327),(V328));
	V339= STREF(object,(V326),4);
	if(((V339))==Cnil){
	goto T1167;}
	if((CMPcdr((V339)))!=Cnil){
	goto T1167;}
	base[4]= (V338);
	base[5]= CMPcar((V339));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V337);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1167;
T1167:;
	base[4]= (V337);
	base[5]= (V338);
	{object V340;
	V340= (V339);
	 vs_top=base+6;
	 while(V340!=Cnil)
	 {vs_push((V340)->c.c_car);V340=(V340)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1159;
T1159:;
	base[4]= (V336);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1177;}
	base[4]= (V327);
	base[5]= (V328);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V326);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1177;
T1177:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V326;
	base[9]= VV[43];
	base[10]= VV[212];
	base[11]= VV[45];
	base[12]= VV[213];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1127;
T1127:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;
	goto T1124;
T1124:;
	{register object V342;
	V342= (V328);
	base[4]= V327;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1192;}
	base[4]= (V342);
	base[5]= VV[214];
	base[7]= V327;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T1192;
T1192:;
	if(((V326))==Cnil){
	goto T1201;}
	base[4]= (V326);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1205;}
	base[4]= STREF(object,(V326),0);
	base[5]= STREF(object,(V326),4);
	base[6]= STREF(object,(V326),8);
	base[7]= (V327);
	base[8]= (V342);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1205;
T1205:;
	if(!(type_of((V326))==t_fixnum)){
	goto T1215;}
	{object V344;
	if(type_of(V327)==t_structure){
	goto T1221;}
	goto T1219;
	goto T1221;
T1221:;
	if(!(((V327)->str.str_def)==(VV[215]))){
	goto T1219;}
	V344= STREF(object,(V327),4);
	goto T1217;
	goto T1219;
T1219:;{object V346;
	V346= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V327);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V347= vs_base[0];
	if(!((V346)==(CMPcar(V347)))){
	goto T1224;}}
	V344= CMPcar(((V327))->cc.cc_turbo[12]);
	goto T1217;
	goto T1224;
T1224:;
	V344= Cnil;
	goto T1217;
T1217:;
	if(((V344))==Cnil){
	goto T1230;}
	base[4]= ((V344))->v.v_self[fix((V326))]= (V327);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1230;
T1230:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1215;
T1215:;
	{register object V349;
	V349= V326;
	base[4]= (V349);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1233;}
	{object V350;
	object V351;
	register object V352;
	V350= STREF(object,(V326),0);
	V351= list(2,(V327),(V342));
	V352= STREF(object,(V326),4);
	if(((V352))==Cnil){
	goto T1241;}
	if((CMPcdr((V352)))!=Cnil){
	goto T1241;}
	base[4]= (V351);
	base[5]= CMPcar((V352));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V350);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1241;
T1241:;
	base[4]= (V350);
	base[5]= (V351);
	{object V353;
	V353= (V352);
	 vs_top=base+6;
	 while(V353!=Cnil)
	 {vs_push((V353)->c.c_car);V353=(V353)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1233;
T1233:;
	base[4]= (V349);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1251;}
	base[4]= (V327);
	base[5]= (V342);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V326);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1251;
T1251:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V326;
	base[9]= VV[43];
	base[10]= VV[216];
	base[11]= VV[45];
	base[12]= VV[217];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1201;
T1201:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;}
	}
}
/*	local entry for function progn 'compile6646	*/

static object LI164()

{	 VMB164 VMS164 VMV164
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[218];
	base[4]= VV[219];
	V354= (VV[315]->s.s_gfdef);
	base[5]= listA(3,VV[51],V354,VV[220]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V355 = Cnil;
	VMR164(V355)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6654	*/

static object LI165()

{	 VMB165 VMS165 VMV165
	goto TTL;
TTL:;
	{object V356 = Cnil;
	VMR165(V356)}
	return Cnil;
}
/*	local entry for function INTERNAL-SIMPLE-ERROR-PRINTER	*/

static object LI166(V359,V360)

register object V359;object V360;
{	 VMB166 VMS166 VMV166
	goto TTL;
TTL:;
	base[0]= (V359);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1276;}
	base[0]= (V360);
	base[1]= VV[221];
	base[3]= (V359);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T1276;
T1276:;
	base[0]= (V360);
	base[2]= (V359);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V361;
	base[2]= (V359);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V361= vs_base[0];
	 vs_top=base+2;
	 while(V361!=Cnil)
	 {vs_push((V361)->c.c_car);V361=(V361)->c.c_cdr;}
	vs_base=base+0;}
	Lformat();
	vs_top=sup;
	{object V362 = vs_base[0];
	VMR166(V362)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-ERROR6686	*/

static void L167()
{register object *base=vs_base;
	register object *sup=base+VM167; VC167
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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile6702	*/

static object LI168()

{	 VMB168 VMS168 VMV168
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk316)();
	vs_top=sup;
	{object V363 = Cnil;
	VMR168(V363)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6719	*/

static object LI169()

{	 VMB169 VMS169 VMV169
	goto TTL;
TTL:;
	base[0]= VV[224];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V365 = Cnil;
	VMR169(V365)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6743	*/

static object LI170()

{	 VMB170 VMS170 VMV170
	goto TTL;
TTL:;
	(void)(sputprop(VV[222],VV[9],Cnil));
	{object V366 = Cnil;
	VMR170(V366)}
	return Cnil;
}
/*	local entry for function progn 'compile6759	*/

static object LI171()

{	 VMB171 VMS171 VMV171
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= VV[225];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk269)();
	vs_top=sup;
	{object V367 = Cnil;
	VMR171(V367)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-ERROR T))	*/

static void L172()
{register object *base=vs_base;
	register object *sup=base+VM172; VC172
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
	goto T1308;}
	if(((V369))==Cnil){
	goto T1311;}
	base[4]= (V369);
	base[5]= VV[35];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1315;}
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
	goto T1315;
T1315:;
	if(!(type_of((V369))==t_fixnum)){
	goto T1325;}
	{object V374;
	if(type_of(V370)==t_structure){
	goto T1331;}
	goto T1329;
	goto T1331;
T1331:;
	if(!(((V370)->str.str_def)==(VV[226]))){
	goto T1329;}
	V374= STREF(object,(V370),4);
	goto T1327;
	goto T1329;
T1329:;{object V376;
	V376= (VV[38]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V370);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V377= vs_base[0];
	if(!((V376)==(CMPcar(V377)))){
	goto T1334;}}
	V374= CMPcar(((V370))->cc.cc_turbo[12]);
	goto T1327;
	goto T1334;
T1334:;
	V374= Cnil;
	goto T1327;
T1327:;
	if(((V374))==Cnil){
	goto T1340;}
	base[4]= ((V374))->v.v_self[fix((V369))]= (V370);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1340;
T1340:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1325;
T1325:;
	{register object V379;
	V379= V369;
	base[4]= (V379);
	base[5]= VV[39];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1343;}
	{object V380;
	object V381;
	register object V382;
	V380= STREF(object,(V369),0);
	V381= list(2,(V370),(V371));
	V382= STREF(object,(V369),4);
	if(((V382))==Cnil){
	goto T1351;}
	if((CMPcdr((V382)))!=Cnil){
	goto T1351;}
	base[4]= (V381);
	base[5]= CMPcar((V382));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V380);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1351;
T1351:;
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
	goto T1343;
T1343:;
	base[4]= (V379);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1361;}
	base[4]= (V370);
	base[5]= (V371);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V369);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1361;
T1361:;
	base[4]= VV[40];
	base[5]= VV[18];
	base[6]= VV[41];
	base[7]= VV[42];
	base[8]= V369;
	base[9]= VV[43];
	base[10]= VV[227];
	base[11]= VV[45];
	base[12]= VV[228];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();
	return;}
	goto T1311;
T1311:;
	base[4]= VV[47];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk272)();
	return;
	goto T1308;
T1308:;
	base[4]= (*(LnkLI317))((V370),(V371));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function progn 'compile6952	*/

static object LI173()

{	 VMB173 VMS173 VMV173
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[32];
	base[2]= Cnil;
	base[3]= VV[229];
	base[4]= VV[230];
	V384= (VV[318]->s.s_gfdef);
	base[5]= listA(3,VV[51],V384,VV[231]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk275)();
	vs_top=sup;
	{object V385 = Cnil;
	VMR173(V385)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile6960	*/

static object LI174()

{	 VMB174 VMS174 VMV174
	goto TTL;
TTL:;
	{object V386 = Cnil;
	VMR174(V386)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-TYPE-ERROR6980	*/

static void L175()
{register object *base=vs_base;
	register object *sup=base+VM175; VC175
	vs_check;
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
/*	local entry for function progn 'compile6996	*/

static object LI176()

{	 VMB176 VMS176 VMV176
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk319)();
	vs_top=sup;
	{object V387 = Cnil;
	VMR176(V387)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7013	*/

static object LI177()

{	 VMB177 VMS177 VMV177
	goto TTL;
TTL:;
	base[0]= VV[234];
	base[1]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[8]->s.s_dbind)= vs_base[0];
	{object V389 = Cnil;
	VMR177(V389)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7037	*/

static object LI178()

{	 VMB178 VMS178 VMV178
	goto TTL;
TTL:;
	(void)(sputprop(VV[232],VV[9],Cnil));
	{object V390 = Cnil;
	VMR178(V390)}
	return Cnil;
}
/*	local entry for function progn 'compile7049	*/

static object LI179()

{	 VMB179 VMS179 VMV179
	goto TTL;
TTL:;
	{object V391 = Cnil;
	VMR179(V391)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-PACKAGE-ERROR7069	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7085	*/

static object LI181()

{	 VMB181 VMS181 VMV181
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk320)();
	vs_top=sup;
	{object V392 = Cnil;
	VMR181(V392)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7102	*/

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
/*	local entry for function progn 'compile7126	*/

static object LI183()

{	 VMB183 VMS183 VMV183
	goto TTL;
TTL:;
	(void)(sputprop(VV[235],VV[9],Cnil));
	{object V395 = Cnil;
	VMR183(V395)}
	return Cnil;
}
/*	local entry for function progn 'compile7138	*/

static object LI184()

{	 VMB184 VMS184 VMV184
	goto TTL;
TTL:;
	{object V396 = Cnil;
	VMR184(V396)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7158	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7174	*/

static object LI186()

{	 VMB186 VMS186 VMV186
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk321)();
	vs_top=sup;
	{object V397 = Cnil;
	VMR186(V397)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7191	*/

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
/*	local entry for function progn 'compile7215	*/

static object LI188()

{	 VMB188 VMS188 VMV188
	goto TTL;
TTL:;
	(void)(sputprop(VV[238],VV[9],Cnil));
	{object V400 = Cnil;
	VMR188(V400)}
	return Cnil;
}
/*	local entry for function progn 'compile7227	*/

static object LI189()

{	 VMB189 VMS189 VMV189
	goto TTL;
TTL:;
	{object V401 = Cnil;
	VMR189(V401)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-CONTROL-ERROR7247	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7263	*/

static object LI191()

{	 VMB191 VMS191 VMV191
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk322)();
	vs_top=sup;
	{object V402 = Cnil;
	VMR191(V402)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7280	*/

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
/*	local entry for function progn 'compile7304	*/

static object LI193()

{	 VMB193 VMS193 VMV193
	goto TTL;
TTL:;
	(void)(sputprop(VV[241],VV[9],Cnil));
	{object V405 = Cnil;
	VMR193(V405)}
	return Cnil;
}
/*	local entry for function progn 'compile7316	*/

static object LI194()

{	 VMB194 VMS194 VMV194
	goto TTL;
TTL:;
	{object V406 = Cnil;
	VMR194(V406)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNBOUND-VARIABLE7336	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7352	*/

static object LI196()

{	 VMB196 VMS196 VMV196
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk323)();
	vs_top=sup;
	{object V407 = Cnil;
	VMR196(V407)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7369	*/

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
/*	local entry for function progn 'compile7393	*/

static object LI198()

{	 VMB198 VMS198 VMV198
	goto TTL;
TTL:;
	(void)(sputprop(VV[244],VV[9],Cnil));
	{object V410 = Cnil;
	VMR198(V410)}
	return Cnil;
}
/*	local entry for function progn 'compile7405	*/

static object LI199()

{	 VMB199 VMS199 VMV199
	goto TTL;
TTL:;
	{object V411 = Cnil;
	VMR199(V411)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-UNDEFINED-FUNCTION7425	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7441	*/

static object LI201()

{	 VMB201 VMS201 VMV201
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	{object V412 = Cnil;
	VMR201(V412)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7458	*/

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
/*	local entry for function progn 'compile7482	*/

static object LI203()

{	 VMB203 VMS203 VMV203
	goto TTL;
TTL:;
	(void)(sputprop(VV[247],VV[9],Cnil));
	{object V415 = Cnil;
	VMR203(V415)}
	return Cnil;
}
/*	local entry for function progn 'compile7494	*/

static object LI204()

{	 VMB204 VMS204 VMV204
	goto TTL;
TTL:;
	{object V416 = Cnil;
	VMR204(V416)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-END-OF-FILE7514	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7530	*/

static object LI206()

{	 VMB206 VMS206 VMV206
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk325)();
	vs_top=sup;
	{object V417 = Cnil;
	VMR206(V417)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7547	*/

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
/*	local entry for function progn 'compile7571	*/

static object LI208()

{	 VMB208 VMS208 VMV208
	goto TTL;
TTL:;
	(void)(sputprop(VV[250],VV[9],Cnil));
	{object V420 = Cnil;
	VMR208(V420)}
	return Cnil;
}
/*	local entry for function progn 'compile7583	*/

static object LI209()

{	 VMB209 VMS209 VMV209
	goto TTL;
TTL:;
	{object V421 = Cnil;
	VMR209(V421)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-FILE-ERROR7603	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7619	*/

static object LI211()

{	 VMB211 VMS211 VMV211
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk326)();
	vs_top=sup;
	{object V422 = Cnil;
	VMR211(V422)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7636	*/

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
/*	local entry for function progn 'compile7660	*/

static object LI213()

{	 VMB213 VMS213 VMV213
	goto TTL;
TTL:;
	(void)(sputprop(VV[253],VV[9],Cnil));
	{object V425 = Cnil;
	VMR213(V425)}
	return Cnil;
}
/*	local entry for function progn 'compile7672	*/

static object LI214()

{	 VMB214 VMS214 VMV214
	goto TTL;
TTL:;
	{object V426 = Cnil;
	VMR214(V426)}
	return Cnil;
}
/*	function definition for Defclass INTERNAL-SIMPLE-STREAM-ERROR7692	*/

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
	symlispcall(VV[261],base+0,6);
	return;
}
/*	local entry for function progn 'compile7708	*/

static object LI216()

{	 VMB216 VMS216 VMV216
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	{object V427 = Cnil;
	VMR216(V427)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7725	*/

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
/*	local entry for function progn 'compile7749	*/

static object LI218()

{	 VMB218 VMS218 VMV218
	goto TTL;
TTL:;
	(void)(sputprop(VV[256],VV[9],Cnil));
	{object V430 = Cnil;
	VMR218(V430)}
	return Cnil;
}
/*	local entry for function progn 'compile7761	*/

static object LI219()

{	 VMB219 VMS219 VMV219
	goto TTL;
TTL:;
	{object V431 = Cnil;
	VMR219(V431)}
	return Cnil;
}
/*	local entry for function progn 'compile7777	*/

static object LI220()

{	 VMB220 VMS220 VMV220
	goto TTL;
TTL:;
	base[0]= VV[259];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk328)();
	vs_top=sup;
	{object V432 = Cnil;
	VMR220(V432)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7789	*/

static object LI221()

{	 VMB221 VMS221 VMV221
	goto TTL;
TTL:;
	if(!((VV[259])->s.s_dbind!=OBJNULL)){
	goto T1506;}
	goto T1505;
	goto T1506;
T1506:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	(VV[259]->s.s_dbind)= vs_base[0];
	goto T1505;
T1505:;
	{object V433 = Cnil;
	VMR221(V433)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile7802	*/

static object LI222()

{	 VMB222 VMS222 VMV222
	goto TTL;
TTL:;
	{object V434 = Cnil;
	VMR222(V434)}
	return Cnil;
}
/*	local entry for function SIMPLE-CONDITION-CLASS-P	*/

static object LI223(V436)

register object V436;
{	 VMB223 VMS223 VMV223
	goto TTL;
TTL:;
	if(!(type_of((V436))==t_symbol)){
	goto T1511;}
	base[0]= (V436);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk329)();
	vs_top=sup;
	V436= vs_base[0];
	goto T1511;
T1511:;
	base[0]= (V436);
	base[1]= VV[5];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk330)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1516;}
	{object V437 = Cnil;
	VMR223(V437)}
	goto T1516;
T1516:;{object V439;
	V439= (VV[259]->s.s_dbind);
	base[0]= (V436);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk331)(Lclptr331);
	vs_top=sup;
	V440= vs_base[0];
	{register object x= V439,V438= V440;
	while(V438!=Cnil)
	if(eql(x,V438->c.c_car)){
	{object V441 = V438;
	VMR223(V441)}
	}else V438=V438->c.c_cdr;
	{object V442 = Cnil;
	VMR223(V442)}}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT331(ptr) object *ptr;{ call_or_link_closure(VV[331],(void **)(void *)&Lnk331,(void **)(void *)&Lclptr331);} /* CLASS-PRECEDENCE-LIST */
static void LnkT330(){ call_or_link(VV[330],(void **)(void *)&Lnk330);} /* TYPEP */
static void LnkT329(){ call_or_link(VV[329],(void **)(void *)&Lnk329);} /* FIND-CLASS */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* *MAKE-SPECIAL */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* Defclass INTERNAL-SIMPLE-STREAM-ERROR7692 */
static void LnkT326(){ call_or_link(VV[326],(void **)(void *)&Lnk326);} /* Defclass INTERNAL-SIMPLE-FILE-ERROR7603 */
static void LnkT325(){ call_or_link(VV[325],(void **)(void *)&Lnk325);} /* Defclass INTERNAL-END-OF-FILE7514 */
static void LnkT324(){ call_or_link(VV[324],(void **)(void *)&Lnk324);} /* Defclass INTERNAL-UNDEFINED-FUNCTION7425 */
static void LnkT323(){ call_or_link(VV[323],(void **)(void *)&Lnk323);} /* Defclass INTERNAL-UNBOUND-VARIABLE7336 */
static void LnkT322(){ call_or_link(VV[322],(void **)(void *)&Lnk322);} /* Defclass INTERNAL-SIMPLE-CONTROL-ERROR7247 */
static void LnkT321(){ call_or_link(VV[321],(void **)(void *)&Lnk321);} /* Defclass INTERNAL-SIMPLE-PROGRAM-ERROR7158 */
static void LnkT320(){ call_or_link(VV[320],(void **)(void *)&Lnk320);} /* Defclass INTERNAL-PACKAGE-ERROR7069 */
static void LnkT319(){ call_or_link(VV[319],(void **)(void *)&Lnk319);} /* Defclass INTERNAL-TYPE-ERROR6980 */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,2,first,ap);va_end(ap);return V1;} /* INTERNAL-SIMPLE-ERROR-PRINTER */
static void LnkT316(){ call_or_link(VV[316],(void **)(void *)&Lnk316);} /* Defclass INTERNAL-SIMPLE-ERROR6686 */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)(void *)&Lnk314,(void **)(void *)&Lclptr314);} /* INTERNAL-ERROR-FUNCTION-NAME */
static void LnkT313(){ call_or_link(VV[313],(void **)(void *)&Lnk313);} /* Defclass INTERNAL-ERROR6259 */
static void LnkT311(){ call_or_link(VV[311],(void **)(void *)&Lnk311);} /* Defclass ABORT-FAILURE5957 */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* Defclass FLOATING-POINT-UNDERFLOW5868 */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* Defclass FLOATING-POINT-OVERFLOW5779 */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* Defclass DIVISION-BY-ZERO5690 */
static void LnkT307(){ call_or_link(VV[307],(void **)(void *)&Lnk307);} /* Defclass ARITHMETIC-ERROR5600 */
static void LnkT305(){ call_or_link(VV[305],(void **)(void *)&Lnk305);} /* Defclass UNDEFINED-FUNCTION5302 */
static void LnkT303(ptr) object *ptr;{ call_or_link_closure(VV[303],(void **)(void *)&Lnk303,(void **)(void *)&Lclptr303);} /* CELL-ERROR-NAME */
static void LnkT302(){ call_or_link(VV[302],(void **)(void *)&Lnk302);} /* Defclass UNBOUND-VARIABLE5004 */
static void LnkT301(){ call_or_link(VV[301],(void **)(void *)&Lnk301);} /* Defclass CELL-ERROR4914 */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* PACKAGE-ERROR-MESSAGE */
static void LnkT298(ptr) object *ptr;{ call_or_link_closure(VV[298],(void **)(void *)&Lnk298,(void **)(void *)&Lclptr298);} /* PACKAGE-ERROR-PACKAGE */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* Defclass PACKAGE-ERROR4614 */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* Defclass FILE-ERROR4524 */
static void LnkT294(ptr) object *ptr;{ call_or_link_closure(VV[294],(void **)(void *)&Lnk294,(void **)(void *)&Lclptr294);} /* STREAM-ERROR-STREAM */
static void LnkT293(){ call_or_link(VV[293],(void **)(void *)&Lnk293);} /* Defclass END-OF-FILE4226 */
static void LnkT292(){ call_or_link(VV[292],(void **)(void *)&Lnk292);} /* Defclass STREAM-ERROR4136 */
static void LnkT291(){ call_or_link(VV[291],(void **)(void *)&Lnk291);} /* Defclass CONTROL-ERROR4047 */
static void LnkT290(){ call_or_link(VV[290],(void **)(void *)&Lnk290);} /* Defclass PROGRAM-ERROR3958 */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* CASE-FAILURE-POSSIBILITIES */
static void LnkT287(ptr) object *ptr;{ call_or_link_closure(VV[287],(void **)(void *)&Lnk287,(void **)(void *)&Lclptr287);} /* CASE-FAILURE-NAME */
static void LnkT286(){ call_or_link(VV[286],(void **)(void *)&Lnk286);} /* Defclass CASE-FAILURE3658 */
static void LnkT285(){ call_or_link(VV[285],(void **)(void *)&Lnk285);} /* Defclass SIMPLE-TYPE-ERROR3569 */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* TYPE-ERROR-EXPECTED-TYPE */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* TYPE-ERROR-DATUM */
static void LnkT281(){ call_or_link(VV[281],(void **)(void *)&Lnk281);} /* Defclass TYPE-ERROR3269 */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* Defclass STORAGE-EXHAUSTED3180 */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* Defclass STACK-OVERFLOW3091 */
static void LnkT278(){ call_or_link(VV[278],(void **)(void *)&Lnk278);} /* Defclass STORAGE-CONDITION3002 */
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* Defclass SIMPLE-ERROR2913 */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* Defclass SIMPLE-WARNING2824 */
static void LnkT275(){ call_or_link(VV[275],(void **)(void *)&Lnk275);} /* LOAD-DEFMETHOD */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[273],(void **)(void *)&LnkLI273,2,first,ap);va_end(ap);return V1;} /* SIMPLE-CONDITION-PRINTER */
static void LnkT272(){ call_or_link(VV[272],(void **)(void *)&Lnk272);} /* ERROR */
static void LnkT13(){ call_or_link(VV[13],(void **)(void *)&Lnk13);} /* ERROR */
static void LnkT271(){ call_or_link(VV[271],(void **)(void *)&Lnk271);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT270(){ call_or_link(VV[270],(void **)(void *)&Lnk270);} /* STRUCTURE-SUBTYPE-P */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* PROCLAIM-DEFGENERIC */
static void LnkT268(){ call_or_link(VV[268],(void **)(void *)&Lnk268);} /* Defclass SIMPLE-CONDITION2528 */
static void LnkT266(ptr) object *ptr;{ call_or_link_closure(VV[266],(void **)(void *)&Lnk266,(void **)(void *)&Lclptr266);} /* SIMPLE-CONDITION-FORMAT-ARGUMENTS */
static void LnkT265(ptr) object *ptr;{ call_or_link_closure(VV[265],(void **)(void *)&Lnk265,(void **)(void *)&Lclptr265);} /* SIMPLE-CONDITION-FORMAT-STRING */
static void LnkT264(){ call_or_link(VV[264],(void **)(void *)&Lnk264);} /* Defclass ERROR2431 */
static void LnkT263(){ call_or_link(VV[263],(void **)(void *)&Lnk263);} /* Defclass SERIOUS-CONDITION2342 */
static void LnkT262(){ call_or_link(VV[262],(void **)(void *)&Lnk262);} /* Defclass WARNING2253 */
static void LnkT260(){ call_or_link(VV[260],(void **)(void *)&Lnk260);} /* REMOVE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

