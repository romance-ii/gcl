
#include "cmpinclude.h"
#include "pcl_gazonk7.h"
void init_pcl_gazonk7(){do_init(VV);}
/*	function definition for CMP-ANON	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC2,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V1;
	object V2;
	check_arg(2);
	V1=(base[0]);
	V2=(base[1]);
	vs_top=sup;
	{register object V3;
	V3= (base0[1]->c.c_car);
	base[2]= (V3);
	base[3]= VV[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk6)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3;}
	base[2]= STREF(object,(V3),0);
	base[3]= STREF(object,(V3),4);
	base[4]= STREF(object,(V3),8);
	base[5]= (V1);
	base[6]= (V2);
	vs_top=(vs_base=base+3)+4;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3;
T3:;
	if(!(type_of((V3))==t_fixnum)){
	goto T13;}
	{object V5;
	if(type_of(V1)==t_structure){
	goto T19;}
	goto T17;
	goto T19;
T19:;
	if(!(((V1)->str.str_def)==(VV[1]))){
	goto T17;}
	V5= STREF(object,(V1),4);
	goto T15;
	goto T17;
T17:;{object V7;
	V7= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk7)();
	vs_top=sup;
	V8= vs_base[0];
	if(!((V7)==(CMPcar(V8)))){
	goto T22;}}
	V5= CMPcar(((V1))->cc.cc_turbo[12]);
	goto T15;
	goto T22;
T22:;
	V5= Cnil;
	goto T15;
T15:;
	if(((V5))==Cnil){
	goto T28;}
	base[2]= ((V5))->v.v_self[fix((V3))]= (V1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T28;
T28:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T13;
T13:;
	{register object V9;
	V9= (V3);
	base[2]= (V9);
	base[3]= VV[4];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk6)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T31;}
	{object V10;
	object V11;
	register object V12;
	V10= STREF(object,(V3),0);
	V11= list(2,(V1),(V2));
	V12= STREF(object,(V3),4);
	if(((V12))==Cnil){
	goto T42;}
	if(!((CMPcdr((V12)))==Cnil)){
	goto T39;}
	goto T40;
	goto T42;
T42:;
	goto T39;
	goto T40;
T40:;
	base[2]= (V11);
	base[3]= CMPcar((V12));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V10);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T39;
T39:;
	base[2]= (V10);
	base[3]= (V11);
	{object V13;
	V13= (V12);
	 vs_top=base+4;
	 while(V13!=Cnil)
	 {vs_push((V13)->c.c_car);V13=(V13)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T31;
T31:;
	base[2]= (V9);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T50;}
	base[2]= (V1);
	base[3]= (V2);
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V3);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T50;
T50:;
	base[3]= VV[5];
	base[4]= (V9);
	base[5]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk9)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;}}
	}
}
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* TYPECASE-ERROR-STRING */
static object  LnkTLI8(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[8],(void **)(void *)&LnkLI8,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT7(){ call_or_link(VV[7],(void **)(void *)&Lnk7);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* STRUCTURE-SUBTYPE-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

