
#include "cmpinclude.h"
#include "pcl_gazonk6.h"
void init_pcl_gazonk6(){do_init(VV);}
/*	function definition for CMP-ANON	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	base[4]= 
	make_cclosure_new(LC2,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V1;
	register object V2;
	object V3;
	check_arg(3);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	vs_top=sup;
	{register object V4;
	base[3]= (V1);
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk4)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3;}
	{register object V5;
	register object V6;
	V5= (base0[3]->c.c_car);
	V6= CMPcar((V5));
	goto T10;
T10:;
	if(!(((V5))==Cnil)){
	goto T11;}
	V4= (base0[2]->c.c_car);
	goto T1;
	goto T11;
T11:;
	if(!((CMPcar((V6)))==((V2)))){
	goto T15;}
	V4= CMPcdr((V6));
	goto T1;
	goto T15;
T15:;
	V5= CMPcdr((V5));
	V6= CMPcar((V5));
	goto T10;}
	goto T3;
T3:;
	V4= (base0[1]->c.c_car);
	goto T1;
T1:;
	base[3]= (V4);
	base[4]= VV[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk5)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T25;}
	base[3]= STREF(object,(V4),0);
	base[4]= STREF(object,(V4),4);
	base[5]= STREF(object,(V4),8);
	base[6]= (V1);
	base[7]= (V2);
	base[8]= (V3);
	vs_top=(vs_base=base+4)+5;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T25;
T25:;
	{register object V7;
	V7= (V4);
	base[3]= (V7);
	base[4]= VV[2];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk5)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T36;}
	{object V8;
	object V9;
	object V10;
	V8= STREF(object,(V4),0);
	V9= list(3,(V1),(V2),(V3));
	V10= STREF(object,(V4),4);
	if(((V10))==Cnil){
	goto T47;}
	if(!((CMPcdr((V10)))==Cnil)){
	goto T44;}
	goto T45;
	goto T47;
T47:;
	goto T44;
	goto T45;
T45:;
	base[3]= (V9);
	base[4]= CMPcar((V10));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V8);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T44;
T44:;
	base[3]= (V8);
	base[4]= (V9);
	{object V11;
	V11= (V10);
	 vs_top=base+5;
	 while(V11!=Cnil)
	 {vs_push((V11)->c.c_car);V11=(V11)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T36;
T36:;
	base[3]= (V7);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	base[3]= (V1);
	base[4]= (V2);
	base[5]= (V3);
	vs_top=(vs_base=base+3)+3;
	{object _funobj = (V4);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T55;
T55:;
	base[4]= VV[3];
	base[5]= (V7);
	base[6]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk6)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	return;}}
	}
}
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* TYPECASE-ERROR-STRING */
static void LnkT5(){ call_or_link(VV[5],(void **)(void *)&Lnk5);} /* STRUCTURE-SUBTYPE-P */
static void LnkT4(){ call_or_link(VV[4],(void **)(void *)&Lnk4);} /* TYPEP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

