
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
	(void) (*Lnk14)();
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
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T19;}
	{object V13;
	object V14;
	register object V15;
	V13= STREF(object,(V9),0);
	V14= listA(3,(V3),(V4),(V5));
	V15= STREF(object,(V9),4);
	if(((V15))==Cnil){
	goto T27;}
	if((CMPcdr((V15)))!=Cnil){
	goto T27;}
	(void)((
	(type_of((V13)) == t_sfun ?(*(((V13))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V13))==t_vfun) ?
	(*(((V13))->sfn.sfn_self)):
	(fcall.fun=((V13)),fcalln))((V14),CMPcar((V15)))));
	goto T11;
	goto T27;
T27:;
	base[6]= (V13);
	base[7]= (V14);
	{object V16;
	V16= (V15);
	 vs_top=base+8;
	 while(V16!=Cnil)
	 {vs_push((V16)->c.c_car);V16=(V16)->c.c_cdr;}
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
	{object V17;
	V17= (V5);
	 vs_top=base+9;
	 while(V17!=Cnil)
	 {vs_push((V17)->c.c_car);V17=(V17)->c.c_cdr;}
	vs_base=base+7;}
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T11;
	goto T35;
T35:;
	base[6]= VV[2];
	base[7]= VV[3];
	base[8]= VV[4];
	base[9]= VV[5];
	base[10]= V9;
	base[11]= VV[6];
	base[12]= VV[7];
	base[13]= VV[8];
	base[14]= VV[9];
	vs_top=(vs_base=base+6)+9;
	(void) (*Lnk15)();
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
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T58;}
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
	goto T58;
T58:;
	{object V18;
	V18= (base0[1]->c.c_car);
	base[5]= V18;
	base[6]= VV[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T69;}
	{object V20;
	object V21;
	object V22;
	V20= STREF(object,(base0[1]->c.c_car),0);
	V21= listA(3,(V3),(V4),(V5));
	V22= STREF(object,(base0[1]->c.c_car),4);
	if(((V22))==Cnil){
	goto T77;}
	if((CMPcdr((V22)))!=Cnil){
	goto T77;}
	base[5]= (V21);
	base[6]= CMPcar((V22));
	vs_top=(vs_base=base+5)+2;
	{object _funobj = (V20);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T77;
T77:;
	base[5]= (V20);
	base[6]= (V21);
	{object V23;
	V23= (V22);
	 vs_top=base+7;
	 while(V23!=Cnil)
	 {vs_push((V23)->c.c_car);V23=(V23)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;}
	goto T69;
T69:;
	base[5]= V18;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T87;}
	base[5]= (base0[1]->c.c_car);
	base[6]= (V3);
	base[7]= (V4);
	{object V24;
	V24= (V5);
	 vs_top=base+8;
	 while(V24!=Cnil)
	 {vs_push((V24)->c.c_car);V24=(V24)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T87;
T87:;
	base[5]= VV[2];
	base[6]= VV[3];
	base[7]= VV[4];
	base[8]= VV[5];
	base[9]= (V18);
	base[10]= VV[6];
	base[11]= VV[10];
	base[12]= VV[8];
	base[13]= VV[11];
	vs_top=(vs_base=base+5)+9;
	(void) (*Lnk15)();}
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
	{object V25;
	register object V26;
	V25= (base0[0]->c.c_car);
	V26= CMPcar((V25));
	goto T107;
T107:;
	if(!(((V25))==Cnil)){
	goto T108;}
	goto T103;
	goto T108;
T108:;
	base[1]= (V26);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T115;}
	(void)((
	V27 = STREF(object,(V26),0),
	(type_of(V27) == t_sfun ?(*((V27)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V27)==t_vfun) ?
	(*((V27)->sfn.sfn_self)):
	(fcall.fun=(V27),fcalln))(STREF(object,(V26),4),STREF(object,(V26),8),(V3),(V4),(V5))));
	goto T112;
	goto T115;
T115:;
	base[1]= V26;
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk14)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T120;}
	{object V30;
	object V31;
	register object V32;
	V30= STREF(object,(V26),0);
	V31= listA(3,(V3),(V4),(V5));
	V32= STREF(object,(V26),4);
	if(((V32))==Cnil){
	goto T128;}
	if((CMPcdr((V32)))!=Cnil){
	goto T128;}
	(void)((
	(type_of((V30)) == t_sfun ?(*(((V30))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V30))==t_vfun) ?
	(*(((V30))->sfn.sfn_self)):
	(fcall.fun=((V30)),fcalln))((V31),CMPcar((V32)))));
	goto T112;
	goto T128;
T128:;
	base[1]= (V30);
	base[2]= (V31);
	{object V33;
	V33= (V32);
	 vs_top=base+3;
	 while(V33!=Cnil)
	 {vs_push((V33)->c.c_car);V33=(V33)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T112;}
	goto T120;
T120:;
	base[1]= V26;
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T136;}
	base[1]= (V26);
	base[2]= (V3);
	base[3]= (V4);
	{object V34;
	V34= (V5);
	 vs_top=base+4;
	 while(V34!=Cnil)
	 {vs_push((V34)->c.c_car);V34=(V34)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T112;
	goto T136;
T136:;
	base[1]= VV[2];
	base[2]= VV[3];
	base[3]= VV[4];
	base[4]= VV[5];
	base[5]= V26;
	base[6]= VV[6];
	base[7]= VV[12];
	base[8]= VV[8];
	base[9]= VV[13];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk15)();
	vs_top=sup;
	goto T112;
T112:;
	V25= CMPcdr((V25));
	V26= CMPcar((V25));
	goto T107;}
	}}
	goto T103;
T103:;
	vs_base=V6;vs_top=V7;}
	return;
	}
}
static void LnkT15(){ call_or_link(VV[15],(void **)(void *)&Lnk15);} /* ERROR */
static void LnkT14(){ call_or_link(VV[14],(void **)(void *)&Lnk14);} /* STRUCTURE-SUBTYPE-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

