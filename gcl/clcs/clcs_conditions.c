
#include "cmpinclude.h"
#include "clcs_conditions.h"
void init_clcs_conditions(){do_init(VV);}
/*	local entry for function progn 'compile2168	*/

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
/*	local entry for function progn 'compile2184	*/

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
/*	local entry for function progn 'compile2196	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!((VV[1])->s.s_dbind!=OBJNULL)){
	goto T8;}
	goto T7;
	goto T8;
T8:;
	(VV[1]->s.s_dbind)= Cnil;
	goto T7;
T7:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	local entry for function progn 'compile2209	*/

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
	vs_check;
	vs_top=sup;
	{object V5=base[0]->c.c_cdr;
	base[2]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	base[3]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	base[4]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	base[5]= V5;}
	if((base[3])!=Cnil){
	goto T12;}
	if((base[2])==(VV[2])){
	goto T12;}
	base[3]= make_cons(VV[2],Cnil);
	goto T12;
T12:;
	{register object V6;
	register object V7;
	register object V8;
	V6= Cnil;
	V7= Cnil;
	V8= Cnil;
	{register object V9;
	V9= base[5];
	goto T23;
T23:;
	if(((V9))!=Cnil){
	goto T24;}
	goto T21;
	goto T24;
T24:;
	{register object V10;
	V10= CMPcar((V9));
	{object V11= CMPcar((V10));
	if((V11!= VV[51]))goto T30;
	if(!(type_of(CMPcadr((V10)))==t_string)){
	goto T33;}
	V6= list(4,VV[3],VV[4],VV[5],list(3,VV[6],CMPcadr((V10)),VV[7]));
	goto T31;
	goto T33;
T33:;
	V6= CMPcadr((V10));
	goto T31;
T31:;
	goto T28;
	goto T30;
T30:;
	if((V11!= VV[52]))goto T35;
	V7= (V10);
	goto T28;
	goto T35;
T35:;
	if((V11!= VV[53]))goto T37;
	V8= CMPcadr((V10));
	goto T28;
	goto T37;
T37:;
	(void)((VFUN_NARGS=3,(*(LnkLI54))(VV[8],VV[9],(V10))));}}
	goto T28;
T28:;
	V9= CMPcdr((V9));
	goto T23;}
	goto T21;
T21:;
	if(((V7))==Cnil){
	goto T44;}
	V12= list(5,VV[12],base[2],base[3],base[4],(V7));
	goto T42;
	goto T44;
T44:;
	V12= list(4,VV[12],base[2],base[3],base[4]);
	goto T42;
T42:;
	V13 = base[2];
	V14 = base[3];
	{object V16;
	object V17= base[4];
	if(V17==Cnil){
	V15= Cnil;
	goto T46;}
	base[6]=V16=MMcons(Cnil,Cnil);
	goto T47;
T47:;
	{object V19;
	base[8]= CMPcdr((V17->c.c_car));
	base[9]= VV[17];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V19= vs_base[0];
	if(((V19))==Cnil){
	goto T53;}
	V20 = (V19);{object V22;
	base[8]= CMPcdr((V17->c.c_car));
	base[9]= VV[18];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V22= vs_base[0];
	if(V22==Cnil)goto T56;
	V21= V22;
	goto T55;
	goto T56;
T56:;}
	V21= Ct;
	goto T55;
T55:;
	V23= make_cons(V20,V21);
	(V16->c.c_cdr)= make_cons(/* INLINE-ARGS */V23,Cnil);
	goto T48;
	goto T53;
T53:;
	(V16->c.c_cdr)= Cnil;}
	goto T48;
T48:;
	while(MMcdr(V16)!=Cnil)V16=MMcdr(V16);
	if((V17=MMcdr(V17))==Cnil){
	base[6]=base[6]->c.c_cdr;
	V15= base[6];
	goto T46;}
	goto T47;}
	goto T46;
T46:;
	V24= list(3,VV[15],list(2,VV[16],listA(3,V13,V14,V15)),VV[1]);
	V25= list(4,VV[13],VV[14],/* INLINE-ARGS */V24,list(3,VV[19],list(3,VV[20],list(2,VV[16],base[2]),VV[21]),Cnil));
	if(((V6))==Cnil){
	goto T62;}
	V27= list(2,list(2,VV[24],base[2]),VV[7]);
	V28= list(4,VV[22],VV[23],/* INLINE-ARGS */V27,list(4,VV[25],VV[26],VV[27],make_cons((V6),VV[28])));
	V26= make_cons(/* INLINE-ARGS */V28,Cnil);
	goto T60;
	goto T62;
T62:;
	V26= Cnil;
	goto T60;
T60:;
	V29= list(2,VV[16],base[2]);
	V30= make_cons(/* INLINE-ARGS */V29,Cnil);
	base[6]= listA(5,VV[10],VV[11],V12,/* INLINE-ARGS */V25,append(V26,/* INLINE-ARGS */V30));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	function definition for Defclass CONDITION2286	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[2];
	base[1]= VV[29];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[55],base+0,6);
	return;
}
/*	local entry for function progn 'compile2302	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk56)();
	vs_top=sup;
	{object V31 = Cnil;
	VMR7(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2319	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= VV[30];
	base[1]= (VV[1]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[1]->s.s_dbind)= vs_base[0];
	{object V33 = Cnil;
	VMR8(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2343	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	(void)(sputprop(VV[2],VV[31],Cnil));
	{object V34 = Cnil;
	VMR9(V34)}
	return Cnil;
}
/*	local entry for function progn 'compile2355	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V35 = Cnil;
	VMR10(V35)}
	return Cnil;
}
/*	local entry for function progn 'compile2371	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= VV[32];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T77;}
	base[0]=VV[32]->s.s_gfdef;
	{
	object V36= VV[33];
	if(V36==Cnil){
	goto T77;}
	goto T81;
T81:;
	base[1]= (V36->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	if((V36=MMcdr(V36))==Cnil){
	goto T77;}
	goto T81;}
	goto T77;
T77:;
	{object V37 = Cnil;
	VMR11(V37)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CONDITIONP	*/

static object LI12(V39)

object V39;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V39);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk57)();
	vs_top=sup;
	{object V40 = vs_base[0];
	VMR12(V40)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2395	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= VV[23];
	base[1]= VV[34];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk58)();
	vs_top=sup;
	{object V41 = Cnil;
	VMR13(V41)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (PCL::FAST-METHOD PRINT-OBJECT (CONDITION T))	*/

static object LI14(V46,V47,V48,V49)

object V46;object V47;register object V48;object V49;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(((VV[26]->s.s_dbind))==Cnil){
	goto T93;}
	base[0]= (V49);
	base[1]= VV[35];
	base[4]= (V48);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk59)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (*(LnkLI61))((V48));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V51 = vs_base[0];
	VMR14(V51)}
	goto T93;
T93:;
	base[0]= (V49);
	base[1]= VV[36];
	base[3]= (V48);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V52 = vs_base[0];
	VMR14(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2464	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= VV[23];
	base[2]= Cnil;
	base[3]= VV[38];
	base[4]= VV[39];
	V53= (VV[62]->s.s_gfdef);
	base[5]= listA(3,VV[40],V53,VV[41]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk63)();
	vs_top=sup;
	{object V54 = Cnil;
	VMR15(V54)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2476	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= VV[42];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V55 = Cnil;
	VMR16(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2488	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(!((VV[42])->s.s_dbind!=OBJNULL)){
	goto T117;}
	goto T116;
	goto T117;
T117:;
	base[0]= VV[2];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	(VV[42]->s.s_dbind)= vs_base[0];
	goto T116;
T116:;
	{object V56 = Cnil;
	VMR17(V56)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2501	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V57 = Cnil;
	VMR18(V57)}
	return Cnil;
}
/*	local entry for function CONDITION-CLASS-P	*/

static object LI19(V59)

register object V59;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(!(type_of((V59))==t_symbol)){
	goto T122;}
	base[0]= (V59);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	V59= vs_base[0];
	goto T122;
T122:;
	base[0]= (V59);
	base[1]= VV[29];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk57)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T127;}
	{object V60 = Cnil;
	VMR19(V60)}
	goto T127;
T127:;{object V62;
	V62= (VV[42]->s.s_dbind);
	base[0]= (V59);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk65)(Lclptr65);
	vs_top=sup;
	V63= vs_base[0];
	{register object x= V62,V61= V63;
	while(V61!=Cnil)
	if(eql(x,V61->c.c_car)){
	{object V64 = V61;
	VMR19(V64)}
	}else V61=V61->c.c_cdr;
	{object V65 = Cnil;
	VMR19(V65)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-CONDITION	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V66;
	object V67;
	V66=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V67=(base[1]);
	vs_top=sup;
	if(((*(LnkLI66))((V66)))!=Cnil){
	goto T133;}
	base[2]= VV[43];
	base[3]= VV[44];
	base[4]= (V66);
	base[5]= VV[45];
	base[6]= VV[46];
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[49];
	base[10]= make_cons((V66),Cnil);
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk67)();
	vs_top=sup;
	goto T133;
T133:;
	base[2]=VV[68]->s.s_gfdef;
	base[3]= (V66);
	{object V68;
	V68= (V67);
	 vs_top=base+4;
	 while(V68!=Cnil)
	 {vs_push((V68)->c.c_car);V68=(V68)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk68)(Lclptr68);
	return;
	}
}
static void LnkT68(ptr) object *ptr;{ call_or_link_closure(VV[68],(void **)(void *)&Lnk68,(void **)(void *)&Lclptr68);} /* MAKE-INSTANCE */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* ERROR */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,1,first,ap);va_end(ap);return V1;} /* CONDITION-CLASS-P */
static void LnkT65(ptr) object *ptr;{ call_or_link_closure(VV[65],(void **)(void *)&Lnk65,(void **)(void *)&Lclptr65);} /* CLASS-PRECEDENCE-LIST */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* FIND-CLASS */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* LOAD-DEFMETHOD */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],(void **)(void *)&LnkLI61,1,first,ap);va_end(ap);return V1;} /* UNIQUE-ID */
static void LnkT60(ptr) object *ptr;{ call_or_link_closure(VV[60],(void **)(void *)&Lnk60,(void **)(void *)&Lclptr60);} /* CLASS-NAME */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* CLASS-OF */
static void LnkT58(){ call_or_link(VV[58],(void **)(void *)&Lnk58);} /* PROCLAIM-DEFGENERIC */
static void LnkT57(){ call_or_link(VV[57],(void **)(void *)&Lnk57);} /* TYPEP */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* PROCLAIM-INCOMPATIBLE-SUPERCLASSES */
static void LnkT56(){ call_or_link(VV[56],(void **)(void *)&Lnk56);} /* Defclass CONDITION2286 */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[54],(void **)(void *)&LnkLI54,first,ap);va_end(ap);return V1;} /* CERROR */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* *MAKE-SPECIAL */
static void LnkT0(){ call_or_link(VV[0],(void **)(void *)&Lnk0);} /* REMOVE-CLCS-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

