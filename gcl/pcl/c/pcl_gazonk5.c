
#include "cmpinclude.h"
#include "pcl_gazonk5.h"
void init_pcl_gazonk5(){do_init(VV);}
/*	function definition for CMP-ANON	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(5);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	base[4]=MMcons(base[4],base[3]);
	vs_top=sup;
	base[5]= 
	make_cclosure_new(LC2,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+1;
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
	(void) (*Lnk9)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3;}
	if(!(((V2))==(CMPcar((base0[4]->c.c_car))))){
	goto T8;}
	V4= CMPcdr((base0[4]->c.c_car));
	goto T1;
	goto T8;
T8:;
	V4= (base0[3]->c.c_car);
	goto T1;
	goto T3;
T3:;
	V4= (base0[2]->c.c_car);
	goto T1;
T1:;
	base[3]= (V4);
	base[4]= VV[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk10)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T12;}
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
	goto T12;
T12:;
	{register object V6;
	V6= V4;
	base[3]= (V6);
	base[4]= VV[2];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk10)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T23;}
	{object V7;
	object V8;
	register object V9;
	V7= STREF(object,(V4),0);
	V8= list(3,(V1),(V2),(V3));
	V9= STREF(object,(V4),4);
	if(((V9))==Cnil){
	goto T34;}
	if(!((CMPcdr((V9)))==Cnil)){
	goto T31;}
	goto T32;
	goto T34;
T34:;
	goto T31;
	goto T32;
T32:;
	base[3]= (V8);
	base[4]= CMPcar((V9));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V7);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T31;
T31:;
	base[3]= (V7);
	base[4]= (V8);
	{object V10;
	V10= (V9);
	 vs_top=base+5;
	 while(V10!=Cnil)
	 {vs_push((V10)->c.c_car);V10=(V10)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T23;
T23:;
	base[3]= (V6);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T42;}
	base[3]= (V1);
	base[4]= (V2);
	base[5]= (V3);
	vs_top=(vs_base=base+3)+3;
	{object _funobj = (V4);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T42;
T42:;
	base[3]= VV[3];
	base[4]= VV[4];
	base[5]= VV[5];
	base[6]= VV[6];
	base[7]= V4;
	base[8]= VV[7];
	base[9]= (base0[1]->c.c_car);
	base[10]= VV[8];
	base[11]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk11)();
	return;}}
	}
}
static void LnkT11(){ call_or_link(VV[11],(void **)(void *)&Lnk11);} /* ERROR */
static void LnkT10(){ call_or_link(VV[10],(void **)(void *)&Lnk10);} /* STRUCTURE-SUBTYPE-P */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* TYPEP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

