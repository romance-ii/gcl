
#include "cmpinclude.h"
#include "clcs_conditions.h"
void init_clcs_conditions(){do_init(VV);}
/*	local entry for function progn 'compile2186	*/

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
/*	local entry for function progn 'compile2202	*/

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
/*	local entry for function progn 'compile2214	*/

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
/*	local entry for function progn 'compile2227	*/

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
	{object V14;
	object V15= base[4];
	if(V15==Cnil){
	V13= Cnil;
	goto T46;}
	base[6]=V14=MMcons(Cnil,Cnil);
	goto T47;
T47:;
	{object V17;
	base[8]= CMPcdr((V15->c.c_car));
	base[9]= VV[17];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V17= vs_base[0];
	if(((V17))==Cnil){
	goto T53;}{object V19;
	base[8]= CMPcdr((V15->c.c_car));
	base[9]= VV[18];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V19= vs_base[0];
	if(V19==Cnil)goto T56;
	V18= V19;
	goto T55;
	goto T56;
T56:;}
	V18= Ct;
	goto T55;
T55:;
	V20= make_cons((V17),V18);
	(V14->c.c_cdr)= make_cons(/* INLINE-ARGS */V20,Cnil);
	goto T48;
	goto T53;
T53:;
	(V14->c.c_cdr)= Cnil;}
	goto T48;
T48:;
	while(MMcdr(V14)!=Cnil)V14=MMcdr(V14);
	if((V15=MMcdr(V15))==Cnil){
	base[6]=base[6]->c.c_cdr;
	V13= base[6];
	goto T46;}
	goto T47;}
	goto T46;
T46:;
	V21= list(3,VV[15],list(2,VV[16],listA(3,base[2],base[3],V13)),VV[1]);
	V22= list(4,VV[13],VV[14],/* INLINE-ARGS */V21,list(3,VV[19],list(3,VV[20],list(2,VV[16],base[2]),VV[21]),Cnil));
	if(((V6))==Cnil){
	goto T62;}
	V24= list(2,list(2,VV[24],base[2]),VV[7]);
	V25= list(4,VV[22],VV[23],/* INLINE-ARGS */V24,list(4,VV[25],VV[26],VV[27],make_cons((V6),VV[28])));
	V23= make_cons(/* INLINE-ARGS */V25,Cnil);
	goto T60;
	goto T62;
T62:;
	V23= Cnil;
	goto T60;
T60:;
	V26= list(2,VV[16],base[2]);
	V27= make_cons(/* INLINE-ARGS */V26,Cnil);
	base[6]= listA(5,VV[10],VV[11],V12,/* INLINE-ARGS */V22,append(V23,/* INLINE-ARGS */V27));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	function definition for Defclass CONDITION2304	*/

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
/*	local entry for function progn 'compile2320	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk56)();
	vs_top=sup;
	{object V28 = Cnil;
	VMR7(V28)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2337	*/

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
	{object V30 = Cnil;
	VMR8(V30)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2361	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	(void)(sputprop(VV[2],VV[31],Cnil));
	{object V31 = Cnil;
	VMR9(V31)}
	return Cnil;
}
/*	local entry for function progn 'compile2373	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V32 = Cnil;
	VMR10(V32)}
	return Cnil;
}
/*	local entry for function progn 'compile2389	*/

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
	object V33= VV[33];
	if(V33==Cnil){
	goto T77;}
	goto T81;
T81:;
	base[1]= (V33->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	if((V33=MMcdr(V33))==Cnil){
	goto T77;}
	goto T81;}
	goto T77;
T77:;
	{object V34 = Cnil;
	VMR11(V34)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CONDITIONP	*/

static object LI12(V36)

object V36;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V36);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk57)();
	vs_top=sup;
	{object V37 = vs_base[0];
	VMR12(V37)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2413	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= VV[23];
	base[1]= VV[34];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk58)();
	vs_top=sup;
	{object V38 = Cnil;
	VMR13(V38)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (PCL::FAST-METHOD PRINT-OBJECT (CONDITION T))	*/

static object LI14(V43,V44,V45,V46)

object V43;object V44;register object V45;object V46;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(((VV[26]->s.s_dbind))==Cnil){
	goto T93;}
	base[0]= (V46);
	base[1]= VV[35];
	base[4]= (V45);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk59)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (*(LnkLI61))((V45));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V48 = vs_base[0];
	VMR14(V48)}
	goto T93;
T93:;
	base[0]= (V46);
	base[1]= VV[36];
	base[3]= (V45);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V49 = vs_base[0];
	VMR14(V49)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2482	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= VV[23];
	base[2]= Cnil;
	base[3]= VV[38];
	base[4]= VV[39];
	V50= (VV[62]->s.s_gfdef);
	base[5]= listA(3,VV[40],V50,VV[41]);
	base[6]= Cnil;
	vs_top=(vs_base=base+0)+7;
	(void) (*Lnk63)();
	vs_top=sup;
	{object V51 = Cnil;
	VMR15(V51)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2494	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= VV[42];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V52 = Cnil;
	VMR16(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2506	*/

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
	{object V53 = Cnil;
	VMR17(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2519	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V54 = Cnil;
	VMR18(V54)}
	return Cnil;
}
/*	local entry for function CONDITION-CLASS-P	*/

static object LI19(V56)

register object V56;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(!(type_of((V56))==t_symbol)){
	goto T122;}
	base[0]= (V56);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	V56= vs_base[0];
	goto T122;
T122:;
	base[0]= (V56);
	base[1]= VV[29];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk57)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T127;}
	{object V57 = Cnil;
	VMR19(V57)}
	goto T127;
T127:;{object V59;
	V59= (VV[42]->s.s_dbind);
	base[0]= (V56);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk65)(Lclptr65);
	vs_top=sup;
	V60= vs_base[0];
	{register object x= V59,V58= V60;
	while(V58!=Cnil)
	if(eql(x,V58->c.c_car)){
	{object V61 = V58;
	VMR19(V61)}
	}else V58=V58->c.c_cdr;
	{object V62 = Cnil;
	VMR19(V62)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-CONDITION	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V63;
	object V64;
	V63=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V64=(base[1]);
	vs_top=sup;
	if(((*(LnkLI66))((V63)))!=Cnil){
	goto T133;}
	base[2]= VV[43];
	base[3]= VV[44];
	base[4]= (V63);
	base[5]= VV[45];
	base[6]= VV[46];
	base[7]= VV[47];
	base[8]= VV[48];
	base[9]= VV[49];
	base[10]= make_cons((V63),Cnil);
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk67)();
	vs_top=sup;
	goto T133;
T133:;
	base[2]=VV[68]->s.s_gfdef;
	base[3]= (V63);
	{object V65;
	V65= (V64);
	 vs_top=base+4;
	 while(V65!=Cnil)
	 {vs_push((V65)->c.c_car);V65=(V65)->c.c_cdr;}
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
static void LnkT56(){ call_or_link(VV[56],(void **)(void *)&Lnk56);} /* Defclass CONDITION2304 */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[54],(void **)(void *)&LnkLI54,first,ap);va_end(ap);return V1;} /* CERROR */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* *MAKE-SPECIAL */
static void LnkT0(){ call_or_link(VV[0],(void **)(void *)&Lnk0);} /* REMOVE-CLCS-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

