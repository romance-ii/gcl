
#include "cmpinclude.h"
#include "module.h"
void init_module(){do_init(VV);}
/*	local entry for function PROVIDE	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
goto TTL;
TTL:;
	base[0]= coerce_to_string((V2));
	base[1]= symbol_value(VV[0]);
	base[2]= VV[1];
	base[3]= symbol_function(VV[10]);
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	setq(VV[0],vs_base[0]);
	{object V3 = symbol_value(VV[0]);
	VMR1(V3)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REQUIRE	*/

static object LI2(V4,va_alist)
	object V4;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	bds_check;
	{object V5;
	object V6;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V5= V4;
	narg = narg - 1;
	if (narg <= 0) goto T6;
	else {
	V6= va_arg(ap,object);}
	--narg; goto T7;
goto T6;
T6:;
	base[0]= coerce_to_string((V5));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V6= vs_base[0];
goto T7;
T7:;
	bds_bind(VV[2],VV[3]);
	base[1]= coerce_to_string((V5));
	base[2]= symbol_value(VV[0]);
	base[3]= VV[1];
	base[4]= symbol_function(VV[10]);
	vs_top=(vs_base=base+1)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T11;}
	if(!(type_of((V6))!=t_cons)){
	goto T18;}
	base[1]= (V6);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk11)();
	vs_top=sup;
	{object V7 = vs_base[0];
	bds_unwind1;
	VMR2(V7)}
goto T18;
T18:;
	{register object V8;
	V8= (V6);
goto T22;
T22:;
	if(!(endp_prop((V8)))){
	goto T23;}
	{object V9 = Cnil;
	bds_unwind1;
	VMR2(V9)}
goto T23;
T23:;
	base[1]= car((V8));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk11)();
	vs_top=sup;
	V8= cdr((V8));
	goto T22;}
goto T11;
T11:;
	{object V10 = Cnil;
	bds_unwind1;
	VMR2(V10)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function DOCUMENTATION	*/

static object LI3(V13,V14)

register object V13;object V14;
{	 VMB3 VMS3 VMV3
goto TTL;
TTL:;
	{object V15= (V14);
	if((V15!= VV[12]))goto T32;
	{object V16 = get((V13),VV[4],Cnil);
	VMR3(V16)}
goto T32;
T32:;
	if((V15!= VV[13]))goto T33;
	{object V17 = get((V13),VV[5],Cnil);
	VMR3(V17)}
goto T33;
T33:;
	if((V15!= VV[14]))goto T34;
	{object V18 = get((V13),VV[6],Cnil);
	VMR3(V18)}
goto T34;
T34:;
	if((V15!= VV[15]))goto T35;
	{object V19 = get((V13),VV[7],Cnil);
	VMR3(V19)}
goto T35;
T35:;
	if((V15!= VV[16]))goto T36;
	{object V20 = get((V13),VV[8],Cnil);
	VMR3(V20)}
goto T36;
T36:;
	{object V21 = Cnil;
	VMR3(V21)}}
	return Cnil;
}
/*	local entry for function FIND-DOCUMENTATION	*/

static object LI4(V23)

register object V23;
{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	if(endp_prop((V23))){
	goto T37;}
	if(!(endp_prop(cdr((V23))))){
	goto T38;}
goto T37;
T37:;
	{object V24 = Cnil;
	VMR4(V24)}
goto T38;
T38:;
	{register object V25;
	base[0]= car((V23));
	vs_top=(vs_base=base+0)+1;
	Lmacroexpand();
	vs_top=sup;
	V25= vs_base[0];
	if(!(type_of((V25))==t_string)){
	goto T45;}
	{object V26 = (V25);
	VMR4(V26)}
goto T45;
T45:;
	if(!(type_of((V25))==t_cons)){
	goto T48;}
	if(!((car((V25)))==(VV[9]))){
	goto T48;}
	V23= cdr((V23));
	goto TTL;
goto T48;
T48:;
	{object V27 = Cnil;
	VMR4(V27)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT11(){ call_or_link(VV[11],(void **)&Lnk11);} /* LOAD */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

