
#include "cmpinclude.h"
#include "pcl_gazonk3.h"
void init_pcl_gazonk3(){do_init(VV);}
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
	check_arg(4);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	vs_top=sup;
	{register object V7;
	object V8;
	V7= (base0[2]->c.c_car);
	V8= CMPcar((V7));
	goto T6;
T6:;
	if(!(((V7))==Cnil)){
	goto T7;}
	goto T2;
	goto T7;
T7:;
	(void)((
	V9 = STREF(object,(V8),0),
	(type_of(V9) == t_sfun ?(*((V9)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V9)==t_vfun) ?
	(*((V9)->sfn.sfn_self)):
	(fcall.fun=(V9),fcalln))(STREF(object,(V8),4),STREF(object,(V8),8),(V3),(V4))));
	V7= CMPcdr((V7));
	V8= CMPcar((V7));
	goto T6;}
	goto T2;
T2:;
	base[4]= (base0[1]->c.c_car);
	base[5]= VV[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T20;}
	base[4]= STREF(object,(base0[1]->c.c_car),0);
	base[5]= STREF(object,(base0[1]->c.c_car),4);
	base[6]= STREF(object,(base0[1]->c.c_car),8);
	base[7]= (V3);
	base[8]= (V4);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T20;
T20:;
	{object V10;
	V10= (base0[1]->c.c_car);
	base[4]= V10;
	base[5]= VV[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T30;}
	{object V12;
	object V13;
	object V14;
	V12= STREF(object,(base0[1]->c.c_car),0);
	V13= make_cons((V3),(V4));
	V14= STREF(object,(base0[1]->c.c_car),4);
	if(((V14))==Cnil){
	goto T38;}
	if((CMPcdr((V14)))!=Cnil){
	goto T38;}
	base[4]= (V13);
	base[5]= CMPcar((V14));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V12);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T38;
T38:;
	base[4]= (V12);
	base[5]= (V13);
	{object V15;
	V15= (V14);
	 vs_top=base+6;
	 while(V15!=Cnil)
	 {vs_push((V15)->c.c_car);V15=(V15)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;}
	goto T30;
T30:;
	base[4]= V10;
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T48;}
	base[4]= (base0[1]->c.c_car);
	base[5]= (V3);
	{object V16;
	V16= (V4);
	 vs_top=base+6;
	 while(V16!=Cnil)
	 {vs_push((V16)->c.c_car);V16=(V16)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T48;
T48:;
	base[4]= VV[2];
	base[5]= VV[3];
	base[6]= VV[4];
	base[7]= VV[5];
	base[8]= (V10);
	base[9]= VV[6];
	base[10]= VV[7];
	base[11]= VV[8];
	base[12]= VV[9];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk13)();}
	goto T1;
T1:;
	{object *V6=vs_top;object *V5=vs_base; vs_base=V6;
	{register object *base1=base;
	{register object *base=V6;
	register object *sup=vs_base+VM3;
	base1[0]=base1[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{register object V17;
	register object V18;
	V17= (base0[0]->c.c_car);
	V18= CMPcar((V17));
	goto T67;
T67:;
	if(!(((V17))==Cnil)){
	goto T68;}
	goto T63;
	goto T68;
T68:;
	base[1]= (V18);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T75;}
	(void)((
	V19 = STREF(object,(V18),0),
	(type_of(V19) == t_sfun ?(*((V19)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V19)==t_vfun) ?
	(*((V19)->sfn.sfn_self)):
	(fcall.fun=(V19),fcalln))(STREF(object,(V18),4),STREF(object,(V18),8),(V3),(V4))));
	goto T72;
	goto T75;
T75:;
	base[1]= V18;
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk12)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	{object V22;
	object V23;
	register object V24;
	V22= STREF(object,(V18),0);
	V23= make_cons((V3),(V4));
	V24= STREF(object,(V18),4);
	if(((V24))==Cnil){
	goto T88;}
	if((CMPcdr((V24)))!=Cnil){
	goto T88;}
	(void)((
	(type_of((V22)) == t_sfun ?(*(((V22))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V22))==t_vfun) ?
	(*(((V22))->sfn.sfn_self)):
	(fcall.fun=((V22)),fcalln))((V23),CMPcar((V24)))));
	goto T72;
	goto T88;
T88:;
	base[1]= (V22);
	base[2]= (V23);
	{object V25;
	V25= (V24);
	 vs_top=base+3;
	 while(V25!=Cnil)
	 {vs_push((V25)->c.c_car);V25=(V25)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T72;}
	goto T80;
T80:;
	base[1]= V18;
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T96;}
	base[1]= (V18);
	base[2]= (V3);
	{object V26;
	V26= (V4);
	 vs_top=base+3;
	 while(V26!=Cnil)
	 {vs_push((V26)->c.c_car);V26=(V26)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T72;
	goto T96;
T96:;
	base[1]= VV[2];
	base[2]= VV[3];
	base[3]= VV[4];
	base[4]= VV[5];
	base[5]= V18;
	base[6]= VV[6];
	base[7]= VV[10];
	base[8]= VV[8];
	base[9]= VV[11];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk13)();
	vs_top=sup;
	goto T72;
T72:;
	V17= CMPcdr((V17));
	V18= CMPcar((V17));
	goto T67;}
	}}
	goto T63;
T63:;
	vs_base=V5;vs_top=V6;}
	return;
	}
}
static void LnkT13(){ call_or_link(VV[13],(void **)(void *)&Lnk13);} /* ERROR */
static void LnkT12(){ call_or_link(VV[12],(void **)(void *)&Lnk12);} /* STRUCTURE-SUBTYPE-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

