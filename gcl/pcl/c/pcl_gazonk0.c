
#include "cmpinclude.h"
#include "pcl_gazonk0.h"
void init_pcl_gazonk0(){do_init(VV);}
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
	{register object V8;
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
	(void)((
	V10 = STREF(object,(V9),0),
	(type_of(V10) == t_sfun ?(*((V10)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V10)==t_vfun) ?
	(*((V10)->sfn.sfn_self)):
	(fcall.fun=(V10),fcalln))(STREF(object,(V9),4),STREF(object,(V9),8),(V3),(V4),(V5))));
	V8= CMPcdr((V8));
	V9= CMPcar((V8));
	goto T6;}
	goto T2;
T2:;
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
	{object *V7=vs_top;object *V6=vs_base; vs_base=V7;
	{register object *base1=base;
	{register object *base=V7;
	register object *sup=vs_base+VM3;
	base1[0]=base1[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{register object V11;
	register object V12;
	V11= (base0[0]->c.c_car);
	V12= CMPcar((V11));
	goto T29;
T29:;
	if(!(((V11))==Cnil)){
	goto T30;}
	goto T25;
	goto T30;
T30:;
	(void)((
	V13 = STREF(object,(V12),0),
	(type_of(V13) == t_sfun ?(*((V13)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V13)==t_vfun) ?
	(*((V13)->sfn.sfn_self)):
	(fcall.fun=(V13),fcalln))(STREF(object,(V12),4),STREF(object,(V12),8),(V3),(V4),(V5))));
	V11= CMPcdr((V11));
	V12= CMPcar((V11));
	goto T29;}
	}}
	goto T25;
T25:;
	vs_base=V6;vs_top=V7;}
	return;
	}
}

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

