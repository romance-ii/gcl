
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
	base[3]= symbol_function(VV[13]);
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

static object LI2(object V4,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	bds_check;
	{object V5;
	object V6;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V5= V4;
	narg = narg - 1;
	if (narg <= 0) goto T6;
	else {
	V6= first;}
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
	base[4]= symbol_function(VV[13]);
	vs_top=(vs_base=base+1)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T11;}
	if(!(type_of((V6))!=t_cons)){
	goto T18;}
	base[1]= (V6);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk14)();
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
	(void) (*Lnk14)();
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
	if((V15!= VV[15]))goto T32;
	{object V16 = get((V13),VV[4],Cnil);
	VMR3(V16)}
	goto T32;
T32:;
	if((V15!= VV[16]))goto T33;
	{object V17 = get((V13),VV[5],Cnil);
	VMR3(V17)}
	goto T33;
T33:;
	if((V15!= VV[17]))goto T34;
	{object V18 = get((V13),VV[6],Cnil);
	VMR3(V18)}
	goto T34;
T34:;
	if((V15!= VV[18]))goto T35;
	{object V19 = get((V13),VV[7],Cnil);
	VMR3(V19)}
	goto T35;
T35:;
	if((V15!= VV[19]))goto T36;
	{object V20 = get((V13),VV[8],Cnil);
	VMR3(V20)}
	goto T36;
T36:;
	base[0]= (V13);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T38;}
	base[1]= (V13);
	vs_top=(vs_base=base+1)+1;
	Lpackage_name();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[9];
	vs_top=(vs_base=base+0)+2;
	Lfind_symbol();
	vs_top=sup;
	V21= vs_base[0];
	{object V22 = get(V21,VV[10],Cnil);
	VMR3(V22)}
	goto T38;
T38:;
	base[0]= VV[11];
	base[1]= (V14);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V23 = vs_base[0];
	VMR3(V23)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-DOCUMENTATION	*/

static object LI4(V25)

register object V25;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(endp_prop((V25))){
	goto T47;}
	if(!(endp_prop(cdr((V25))))){
	goto T48;}
	goto T47;
T47:;
	{object V26 = Cnil;
	VMR4(V26)}
	goto T48;
T48:;
	{register object V27;
	base[0]= car((V25));
	vs_top=(vs_base=base+0)+1;
	Lmacroexpand();
	vs_top=sup;
	V27= vs_base[0];
	if(!(type_of((V27))==t_string)){
	goto T55;}
	{object V28 = (V27);
	VMR4(V28)}
	goto T55;
T55:;
	if(!(type_of((V27))==t_cons)){
	goto T58;}
	if(!((car((V27)))==(VV[12]))){
	goto T58;}
	V25= cdr((V25));
	goto TTL;
	goto T58;
T58:;
	{object V29 = Cnil;
	VMR4(V29)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT14(){ call_or_link(VV[14],(void **)(void *)&Lnk14);} /* LOAD */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

