
#include "cmpinclude.h"
#include "pcl_gazonk1.h"
void init_pcl_gazonk1(){do_init(VV);}
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
	register object V8;
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
	{object *V6=vs_top;object *V5=vs_base; vs_base=V6;
	{register object *base1=base;
	{register object *base=V6;
	register object *sup=vs_base+VM3;
	base1[0]=base1[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{register object V10;
	register object V11;
	V10= (base0[0]->c.c_car);
	V11= CMPcar((V10));
	goto T28;
T28:;
	if(!(((V10))==Cnil)){
	goto T29;}
	goto T24;
	goto T29;
T29:;
	(void)((
	V12 = STREF(object,(V11),0),
	(type_of(V12) == t_sfun ?(*((V12)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V12)==t_vfun) ?
	(*((V12)->sfn.sfn_self)):
	(fcall.fun=(V12),fcalln))(STREF(object,(V11),4),STREF(object,(V11),8),(V3),(V4))));
	V10= CMPcdr((V10));
	V11= CMPcar((V10));
	goto T28;}
	}}
	goto T24;
T24:;
	vs_base=V5;vs_top=V6;}
	return;
	}
}

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

