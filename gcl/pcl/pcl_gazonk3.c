
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
	(void) (*Lnk6)();
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
	base[4]= (V10);
	base[5]= VV[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk6)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T30;}
	{object V11;
	object V12;
	object V13;
	V11= STREF(object,(base0[1]->c.c_car),0);
	V12= make_cons((V3),(V4));
	V13= STREF(object,(base0[1]->c.c_car),4);
	if(((V13))==Cnil){
	goto T38;}
	if((CMPcdr((V13)))!=Cnil){
	goto T38;}
	base[4]= (V12);
	base[5]= CMPcar((V13));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V11);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T38;
T38:;
	base[4]= (V11);
	base[5]= (V12);
	{object V14;
	V14= (V13);
	 vs_top=base+6;
	 while(V14!=Cnil)
	 {vs_push((V14)->c.c_car);V14=(V14)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;}
	goto T30;
T30:;
	base[4]= (V10);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T48;}
	base[4]= (base0[1]->c.c_car);
	base[5]= (V3);
	{object V15;
	V15= (V4);
	 vs_top=base+6;
	 while(V15!=Cnil)
	 {vs_push((V15)->c.c_car);V15=(V15)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	goto T1;
	goto T48;
T48:;
	base[5]= VV[2];
	base[6]= (V10);
	base[7]= VV[3];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk7)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();}
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
	{register object V16;
	register object V17;
	V16= (base0[0]->c.c_car);
	V17= CMPcar((V16));
	goto T62;
T62:;
	if(!(((V16))==Cnil)){
	goto T63;}
	goto T58;
	goto T63;
T63:;
	base[1]= (V17);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk6)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T70;}
	(void)((
	V18 = STREF(object,(V17),0),
	(type_of(V18) == t_sfun ?(*((V18)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V18)==t_vfun) ?
	(*((V18)->sfn.sfn_self)):
	(fcall.fun=(V18),fcalln))(STREF(object,(V17),4),STREF(object,(V17),8),(V3),(V4))));
	goto T67;
	goto T70;
T70:;
	{register object V19;
	V19= (V17);
	base[1]= (V19);
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk6)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T75;}
	{object V20;
	object V21;
	register object V22;
	V20= STREF(object,(V17),0);
	V21= make_cons((V3),(V4));
	V22= STREF(object,(V17),4);
	if(((V22))==Cnil){
	goto T83;}
	if((CMPcdr((V22)))!=Cnil){
	goto T83;}
	(void)((
	(type_of((V20)) == t_sfun ?(*(((V20))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V20))==t_vfun) ?
	(*(((V20))->sfn.sfn_self)):
	(fcall.fun=((V20)),fcalln))((V21),CMPcar((V22)))));
	goto T67;
	goto T83;
T83:;
	base[1]= (V20);
	base[2]= (V21);
	{object V23;
	V23= (V22);
	 vs_top=base+3;
	 while(V23!=Cnil)
	 {vs_push((V23)->c.c_car);V23=(V23)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T67;}
	goto T75;
T75:;
	base[1]= (V19);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T91;}
	base[1]= (V17);
	base[2]= (V3);
	{object V24;
	V24= (V4);
	 vs_top=base+3;
	 while(V24!=Cnil)
	 {vs_push((V24)->c.c_car);V24=(V24)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T67;
	goto T91;
T91:;
	base[2]= VV[4];
	base[3]= (V19);
	base[4]= VV[5];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk7)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;}
	goto T67;
T67:;
	V16= CMPcdr((V16));
	V17= CMPcar((V16));
	goto T62;}
	}}
	goto T58;
T58:;
	vs_base=V5;vs_top=V6;}
	return;
	}
}
static void LnkT7(){ call_or_link(VV[7],(void **)(void *)&Lnk7);} /* TYPECASE-ERROR-STRING */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* STRUCTURE-SUBTYPE-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

