
#include "cmpinclude.h"
#include "pcl_gazonk2.h"
void init_pcl_gazonk2(){do_init(VV);}
/*	function definition for CMP-ANON	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC2,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V1;
	object V2;
	register object V3;
	register object V4;
	register object V5;
	check_arg(5);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	V5=(base[4]);
	vs_top=sup;
	{object V8;
	register object V9;
	V8= (base0[2]->c.c_car);
	V9= CMPcar((V8));
	goto T6;
T6:;
	if(!(((V8))==Cnil)){
	goto T7;}
	goto T2;
	goto T7;
T7:;
	base[6]= (V9);
	base[7]= VV[0];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk7)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T14;}
	(void)((
	V10 = STREF(object,(V9),0),
	(type_of(V10) == t_sfun ?(*((V10)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V10)==t_vfun) ?
	(*((V10)->sfn.sfn_self)):
	(fcall.fun=(V10),fcalln))(STREF(object,(V9),4),STREF(object,(V9),8),(V3),(V4),(V5))));
	goto T11;
	goto T14;
T14:;
	base[6]= V9;
	base[7]= VV[1];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk7)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T19;}
	{object V12;
	object V13;
	register object V14;
	V12= STREF(object,(V9),0);
	V13= listA(3,(V3),(V4),(V5));
	V14= STREF(object,(V9),4);
	if(((V14))==Cnil){
	goto T27;}
	if((CMPcdr((V14)))!=Cnil){
	goto T27;}
	(void)((
	(type_of((V12)) == t_sfun ?(*(((V12))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V12))==t_vfun) ?
	(*(((V12))->sfn.sfn_self)):
	(fcall.fun=((V12)),fcalln))((V13),CMPcar((V14)))));
	goto T11;
	goto T27;
T27:;
	base[6]= (V12);
	base[7]= (V13);
	{object V15;
	V15= (V14);
	 vs_top=base+8;
	 while(V15!=Cnil)
	 {vs_push((V15)->c.c_car);V15=(V15)->c.c_cdr;}
	vs_base=base+7;}
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T11;}
	goto T19;
T19:;
	base[6]= V9;
	vs_top=(vs_base=base+6)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T35;}
	base[6]= (V9);
	base[7]= (V3);
	base[8]= (V4);
	{object V16;
	V16= (V5);
	 vs_top=base+9;
	 while(V16!=Cnil)
	 {vs_push((V16)->c.c_car);V16=(V16)->c.c_cdr;}
	vs_base=base+7;}
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T11;
	goto T35;
T35:;
	base[7]= VV[2];
	base[8]= V9;
	base[9]= VV[3];
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+6)+1;
	Lerror();
	vs_top=sup;
	goto T11;
T11:;
	V8= CMPcdr((V8));
	V9= CMPcar((V8));
	goto T6;}
	goto T2;
T2:;
	base[5]= (base0[1]->c.c_car);
	base[6]= VV[0];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk7)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T53;}
	base[5]= STREF(object,(base0[1]->c.c_car),0);
	base[6]= STREF(object,(base0[1]->c.c_car),4);
	base[7]= STREF(object,(base0[1]->c.c_car),8);
	base[8]= (V3);
	base[9]= (V4);
	base[10]= (V5);
	vs_top=(vs_base=base+6)+5;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T53;
T53:;
	{object V17;
	V17= (base0[1]->c.c_car);
	base[5]= (V17);
	base[6]= VV[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk7)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T64;}
	{object V18;
	object V19;
	object V20;
	V18= STREF(object,(base0[1]->c.c_car),0);
	V19= listA(3,(V3),(V4),(V5));
	V20= STREF(object,(base0[1]->c.c_car),4);
	if(((V20))==Cnil){
	goto T72;}
	if((CMPcdr((V20)))!=Cnil){
	goto T72;}
	base[5]= (V19);
	base[6]= CMPcar((V20));
	vs_top=(vs_base=base+5)+2;
	{object _funobj = (V18);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T72;
T72:;
	base[5]= (V18);
	base[6]= (V19);
	{object V21;
	V21= (V20);
	 vs_top=base+7;
	 while(V21!=Cnil)
	 {vs_push((V21)->c.c_car);V21=(V21)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;}
	goto T64;
T64:;
	base[5]= (V17);
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T82;}
	base[5]= (base0[1]->c.c_car);
	base[6]= (V3);
	base[7]= (V4);
	{object V22;
	V22= (V5);
	 vs_top=base+8;
	 while(V22!=Cnil)
	 {vs_push((V22)->c.c_car);V22=(V22)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T82;
T82:;
	base[6]= VV[4];
	base[7]= (V17);
	base[8]= VV[5];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();}
	goto T1;
T1:;
	{object *V7=vs_top;object *V6=vs_base; vs_base=V7;
	{register object *base1=base;
	{register object *base=V7;
	register object *sup=vs_base+VM3;
	base1[0]=base1[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{object V23;
	register object V24;
	V23= (base0[0]->c.c_car);
	V24= CMPcar((V23));
	goto T97;
T97:;
	if(!(((V23))==Cnil)){
	goto T98;}
	goto T93;
	goto T98;
T98:;
	base[1]= (V24);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk7)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T105;}
	(void)((
	V25 = STREF(object,(V24),0),
	(type_of(V25) == t_sfun ?(*((V25)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V25)==t_vfun) ?
	(*((V25)->sfn.sfn_self)):
	(fcall.fun=(V25),fcalln))(STREF(object,(V24),4),STREF(object,(V24),8),(V3),(V4),(V5))));
	goto T102;
	goto T105;
T105:;
	base[1]= V24;
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk7)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T110;}
	{object V27;
	object V28;
	register object V29;
	V27= STREF(object,(V24),0);
	V28= listA(3,(V3),(V4),(V5));
	V29= STREF(object,(V24),4);
	if(((V29))==Cnil){
	goto T118;}
	if((CMPcdr((V29)))!=Cnil){
	goto T118;}
	(void)((
	(type_of((V27)) == t_sfun ?(*(((V27))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V27))==t_vfun) ?
	(*(((V27))->sfn.sfn_self)):
	(fcall.fun=((V27)),fcalln))((V28),CMPcar((V29)))));
	goto T102;
	goto T118;
T118:;
	base[1]= (V27);
	base[2]= (V28);
	{object V30;
	V30= (V29);
	 vs_top=base+3;
	 while(V30!=Cnil)
	 {vs_push((V30)->c.c_car);V30=(V30)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T102;}
	goto T110;
T110:;
	base[1]= V24;
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T126;}
	base[1]= (V24);
	base[2]= (V3);
	base[3]= (V4);
	{object V31;
	V31= (V5);
	 vs_top=base+4;
	 while(V31!=Cnil)
	 {vs_push((V31)->c.c_car);V31=(V31)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T102;
	goto T126;
T126:;
	base[2]= VV[2];
	base[3]= V24;
	base[4]= VV[6];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T102;
T102:;
	V23= CMPcdr((V23));
	V24= CMPcar((V23));
	goto T97;}
	}}
	goto T93;
T93:;
	vs_base=V6;vs_top=V7;}
	return;
	}
}
static void LnkT8(){ call_or_link(VV[8],(void **)(void *)&Lnk8);} /* TYPECASE-ERROR-STRING */
static void LnkT7(){ call_or_link(VV[7],(void **)(void *)&Lnk7);} /* STRUCTURE-SUBTYPE-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

