
#include "cmpinclude.h"
#include "clcs_conditions.h"
void init_clcs_conditions(){do_init(VV);}
/*	local entry for function progn 'compile2181	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1;}
	vs_base=vs_top;
	(void) (*Lnk0)();
	vs_top=sup;
	goto T1;
T1:;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2197	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V2 = Cnil;
	VMR2(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2209	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T8;}
	goto T7;
	goto T8;
T8:;
	setq(VV[1],Cnil);
	goto T7;
T7:;
	{object V3 = Cnil;
	VMR3(V3)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2222	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V4 = Cnil;
	VMR4(V4)}
	return Cnil;
}
/*	macro definition for DEFINE-CONDITION	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V5=base[0]->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[2]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[3]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[4]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	base[5]= V5;}
	if((base[3])!=Cnil){
	goto T13;}
	if((base[2])==(VV[2])){
	goto T13;}
	base[3]= make_cons(VV[2],Cnil);
	goto T13;
T13:;
	{register object V6;
	register object V7;
	V6= Cnil;
	V7= Cnil;
	{register object V8;
	V8= base[5];
	goto T23;
T23:;
	if(((V8))!=Cnil){
	goto T24;}
	goto T21;
	goto T24;
T24:;
	{register object V9;
	V9= car((V8));
	{object V10= car((V9));
	if((V10!= VV[51]))goto T30;
	if(!(type_of(cadr((V9)))==t_string)){
	goto T33;}
	V6= list(4,VV[3],VV[4],VV[5],list(3,VV[6],cadr((V9)),VV[7]));
	goto T31;
	goto T33;
T33:;
	V6= cadr((V9));
	goto T31;
T31:;
	goto T28;
	goto T30;
T30:;
	if((V10!= VV[52]))goto T35;
	V7= cadr((V9));
	goto T28;
	goto T35;
T35:;
	(void)((VFUN_NARGS=3,(*(LnkLI53))(VV[8],VV[9],(V9))));}}
	goto T28;
T28:;
	V8= cdr((V8));
	goto T23;}
	goto T21;
T21:;
	V11= list(4,VV[12],base[2],base[3],base[4]);
	{object V13;
	object V14= base[4];
	if(endp(V14)){
	V12= Cnil;
	goto T40;}
	base[6]=V13=MMcons(Cnil,Cnil);
	goto T41;
T41:;
	{object V16;
	base[8]= cdr((V14->c.c_car));
	base[9]= VV[17];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V16= vs_base[0];
	if(((V16))==Cnil){
	goto T47;}{object V18;
	base[8]= cdr((V14->c.c_car));
	base[9]= VV[18];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V18= vs_base[0];
	if(V18==Cnil)goto T50;
	V17= V18;
	goto T49;
	goto T50;
T50:;}
	V17= Ct;
	goto T49;
T49:;
	V19= make_cons((V16),V17);
	(V13->c.c_cdr)= make_cons(/* INLINE-ARGS */V19,Cnil);
	goto T42;
	goto T47;
T47:;
	(V13->c.c_cdr)= Cnil;}
	goto T42;
T42:;
	{object cdr_V13=MMcdr(V13);while(!endp(cdr_V13)) {cdr_V13=MMcdr(cdr_V13);V13=MMcdr(V13);}}
	V14=MMcdr(V14);
	if(endp(V14)){
	base[6]=base[6]->c.c_cdr;
	V12= base[6];
	goto T40;}
	goto T41;}
	goto T40;
T40:;
	V20= list(3,VV[15],list(2,VV[16],listA(3,base[2],base[3],V12)),VV[1]);
	V21= list(4,VV[13],VV[14],/* INLINE-ARGS */V20,list(3,VV[19],list(3,VV[20],list(2,VV[16],base[2]),VV[21]),Cnil));
	if(((V6))==Cnil){
	goto T56;}
	V23= list(2,list(2,VV[24],base[2]),VV[7]);
	V24= list(4,VV[22],VV[23],/* INLINE-ARGS */V23,list(4,VV[25],VV[26],VV[27],make_cons((V6),VV[28])));
	V22= make_cons(/* INLINE-ARGS */V24,Cnil);
	goto T54;
	goto T56;
T56:;
	V22= Cnil;
	goto T54;
T54:;
	V25= list(2,VV[16],base[2]);
	V26= make_cons(/* INLINE-ARGS */V25,Cnil);
	base[6]= listA(5,VV[10],VV[11],/* INLINE-ARGS */V11,/* INLINE-ARGS */V21,append(V22,/* INLINE-ARGS */V26));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	function definition for Defclass CONDITION2299	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[2];
	base[1]= VV[29];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[54],base+0,6);
	return;
}
/*	local entry for function progn 'compile2315	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk55)();
	vs_top=sup;
	{object V27 = Cnil;
	VMR7(V27)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2332	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= VV[30];
	base[1]= symbol_value(VV[1]);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	setq(VV[1],vs_base[0]);
	{object V29 = Cnil;
	VMR8(V29)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2356	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	(void)(sputprop(VV[2],VV[31],Cnil));
	{object V30 = Cnil;
	VMR9(V30)}
	return Cnil;
}
/*	local entry for function progn 'compile2368	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V31 = Cnil;
	VMR10(V31)}
	return Cnil;
}
/*	local entry for function progn 'compile2384	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= VV[32];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T71;}
	base[0]=symbol_function(VV[32]);
	{
	object V32= VV[33];
	if(endp(V32)){
	goto T71;}
	goto T75;
T75:;
	base[1]= (V32->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	V32=MMcdr(V32);
	if(endp(V32)){
	goto T71;}
	goto T75;}
	goto T71;
T71:;
	{object V33 = Cnil;
	VMR11(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CONDITIONP	*/

static object LI12(V35)

object V35;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V35);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	{object V36 = vs_base[0];
	VMR12(V36)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2408	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= VV[23];
	base[1]= VV[34];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk57)();
	vs_top=sup;
	{object V37 = Cnil;
	VMR13(V37)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (PCL::FAST-METHOD PRINT-OBJECT (CONDITION T))	*/

static object LI14(V42,V43,V44,V45)

object V42;object V43;register object V44;object V45;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if((symbol_value(VV[26]))==Cnil){
	goto T87;}
	base[0]= (V45);
	base[1]= VV[35];
	base[4]= (V44);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk58)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk59)(Lclptr59);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (*(LnkLI60))((V44));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V47 = vs_base[0];
	VMR14(V47)}
	goto T87;
T87:;
	base[0]= (V45);
	base[1]= VV[36];
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V48 = vs_base[0];
	VMR14(V48)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2477	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= VV[23];
	base[2]= Cnil;
	base[3]= VV[38];
	base[4]= VV[39];
	V49= symbol_function(VV[61]);
	base[5]= listA(3,VV[40],V49,VV[41]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk62)();
	vs_top=sup;
	{object V50 = Cnil;
	VMR15(V50)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2489	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= VV[42];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V51 = Cnil;
	VMR16(V51)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2501	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]= VV[42];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T111;}
	goto T110;
	goto T111;
T111:;
	base[0]= VV[2];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk63)();
	vs_top=sup;
	setq(VV[42],vs_base[0]);
	goto T110;
T110:;
	{object V52 = Cnil;
	VMR17(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2514	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V53 = Cnil;
	VMR18(V53)}
	return Cnil;
}
/*	local entry for function CONDITION-CLASS-P	*/

static object LI19(V55)

register object V55;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(!(type_of((V55))==t_symbol)){
	goto T117;}
	base[0]= (V55);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk63)();
	vs_top=sup;
	V55= vs_base[0];
	goto T117;
T117:;
	base[0]= (V55);
	base[1]= VV[29];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk56)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T122;}
	{object V56 = Cnil;
	VMR19(V56)}
	goto T122;
T122:;{object V58;
	V58= symbol_value(VV[42]);
	base[0]= (V55);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk64)(Lclptr64);
	vs_top=sup;
	V59= vs_base[0];
	{register object x= V58,V57= V59;
	while(!endp(V57))
	if(eql(x,V57->c.c_car)){
	{object V60 = V57;
	VMR19(V60)}
	}else V57=V57->c.c_cdr;
	{object V61 = Cnil;
	VMR19(V61)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-CONDITION	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{register object V62;
	object V63;
	if(vs_top-vs_base<1) too_few_arguments();
	V62=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V63=(base[1]);
	vs_top=sup;
	if(((*(LnkLI65))((V62)))!=Cnil){
	goto T128;}
	base[2]= VV[43];
	base[3]= VV[44];
	base[4]= (V62);
	base[5]= VV[45];
	base[6]= VV[46];
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[49];
	base[10]= make_cons((V62),Cnil);
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk66)();
	vs_top=sup;
	goto T128;
T128:;
	base[2]=symbol_function(VV[67]);
	base[3]= (V62);
	{object V64;
	V64= (V63);
	 vs_top=base+4;
	 while(!endp(V64))
	 {vs_push(car(V64));V64=cdr(V64);}
	vs_base=base+3;}
	(void) (*Lnk67)(Lclptr67);
	return;
	}
}
static void LnkT67(ptr) object *ptr;{ call_or_link_closure(VV[67],(void **)(void *)&Lnk67,(void **)(void *)&Lclptr67);} /* MAKE-INSTANCE */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* ERROR */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[65],(void **)(void *)&LnkLI65,1,first,ap);va_end(ap);return V1;} /* CONDITION-CLASS-P */
static void LnkT64(ptr) object *ptr;{ call_or_link_closure(VV[64],(void **)(void *)&Lnk64,(void **)(void *)&Lclptr64);} /* CLASS-PRECEDENCE-LIST */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* FIND-CLASS */
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* LOAD-DEFMETHOD */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,1,first,ap);va_end(ap);return V1;} /* UNIQUE-ID */
static void LnkT59(ptr) object *ptr;{ call_or_link_closure(VV[59],(void **)(void *)&Lnk59,(void **)(void *)&Lclptr59);} /* CLASS-NAME */
static void LnkT58(){ call_or_link(VV[58],(void **)(void *)&Lnk58);} /* CLASS-OF */
static void LnkT57(){ call_or_link(VV[57],(void **)(void *)&Lnk57);} /* PROCLAIM-DEFGENERIC */
static void LnkT56(){ call_or_link(VV[56],(void **)(void *)&Lnk56);} /* TYPEP */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* PROCLAIM-INCOMPATIBLE-SUPERCLASSES */
static void LnkT55(){ call_or_link(VV[55],(void **)(void *)&Lnk55);} /* Defclass CONDITION2299 */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[53],(void **)(void *)&LnkLI53,first,ap);va_end(ap);return V1;} /* CERROR */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* *MAKE-SPECIAL */
static void LnkT0(){ call_or_link(VV[0],(void **)(void *)&Lnk0);} /* REMOVE-CLCS-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

