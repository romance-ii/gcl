
#include "cmpinclude.h"
#include "pcl_defs.h"
void init_pcl_defs(){do_init(VV);}
/*	macro definition for PARSE-GSPEC	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	{object V2= (V1->c.c_car);
	if(endp(V2))invalid_macro_call();
	base[3]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	base[4]= V2;}
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	{object V3= (V1->c.c_car);
	if(endp(V3))invalid_macro_call();
	base[5]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	base[6]= V3;}
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	{object V4;
	object V5;
	object V6;
	V4= Cnil;
	V5= Cnil;
	{object V7;
	if(type_of(base[2])==t_symbol){
	goto T5;}
	if(type_of(base[2])==t_fixnum||
type_of(base[2])==t_bignum||
type_of(base[2])==t_ratio||
type_of(base[2])==t_shortfloat||
type_of(base[2])==t_longfloat||
type_of(base[2])==t_complex){
	goto T5;}
	if(!(type_of(base[2])==t_cons||(base[2])==Cnil)){
	goto T6;}
	{register object x= CMPcar(base[2]),V8= VV[0];
	while(V8!=Cnil)
	if(eql(x,V8->c.c_car)){
	goto T13;
	}else V8=V8->c.c_cdr;
	goto T6;}
	goto T13;
T13:;
	goto T5;
T5:;
	V7= base[2];
	goto T4;
	goto T6;
T6:;
	{object V9;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V9= vs_base[0];
	V4= make_cons(V9,(V4));
	V5= make_cons(base[2],(V5));
	V7= (V9);}
	goto T4;
T4:;
	V12= list(2,base[3],(V7));
	V6= list(2,VV[1],list(2,Ct,listA(3,VV[2],make_cons(/* INLINE-ARGS */V12,Cnil),base[4])));}
	V17= reverse((V4));
	V18= reverse((V5));
	{object V14;
	object V15= /* INLINE-ARGS */V17;
	object V16= /* INLINE-ARGS */V18;
	if(V15==Cnil||V16==Cnil){
	V13= Cnil;
	goto T19;}
	base[8]=V14=MMcons(Cnil,Cnil);
	goto T20;
T20:;
	(V14->c.c_car)= list(2,(V15->c.c_car),(V16->c.c_car));
	if((V15=MMcdr(V15))==Cnil||(V16=MMcdr(V16))==Cnil){
	V13= base[8];
	goto T19;}
	V14=MMcdr(V14)=MMcons(Cnil,Cnil);
	goto T20;}
	goto T19;
T19:;
	V19 = (V6);
	base[8]= list(3,VV[2],V13,V19);
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	local entry for function UNENCAPSULATED-FDEFINITION	*/

static object LI2(V21)

object V21;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= (V21);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk349)();
	vs_top=sup;
	{object V22 = vs_base[0];
	VMR2(V22)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FDEFINE-CAREFULLY	*/

static object LI3(V25,V26)

register object V25;object V26;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V27;
	object V28;
	if(!(type_of((V25))==t_symbol)){
	goto T26;}
	{object V29 =((V25))->s.s_plist;
	 object ind= VV[3];
	while(V29!=Cnil){
	if(V29->c.c_car==ind){
	V27= (V29->c.c_cdr->c.c_car);
	goto T24;
	}else V29=V29->c.c_cdr->c.c_cdr;}
	V27= Cnil;
	goto T24;}
	goto T26;
T26:;
	V27= Cnil;
	goto T24;
T24:;
	V28= Cnil;
	if(((V27))==Cnil){
	goto T29;}
	base[1]= (V25);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V30= vs_base[0];
	if(!(type_of(V30)==t_cons)){
	goto T29;}
	base[1]= (V25);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V31= vs_base[0];
	V28= CMPcadddr(V31);
	V32 = (V28);
	if(!(type_of(V32)==t_cons)){
	goto T29;}
	if(!((CMPcar((V28)))==(VV[4]))){
	goto T29;}
	base[0]= (V27);
	goto T23;
	goto T29;
T29:;
	base[0]= (V25);}
	goto T23;
T23:;
	base[1]= (V26);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V33 = vs_base[0];
	VMR3(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GBOUNDP	*/

static object LI4(V35)

object V35;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	base[0]= V35;
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	{object V37 = vs_base[0];
	VMR4(V37)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GMAKUNBOUND	*/

static object LI5(V39)

object V39;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= V39;
	vs_top=(vs_base=base+0)+1;
	Lfmakunbound();
	vs_top=sup;
	{object V41 = vs_base[0];
	VMR5(V41)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GDEFINITION	*/

static object LI6(V43)

object V43;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V45 = (*(LnkLI350))(V43);
	VMR6(V45)}
	return Cnil;
}
/*	function definition for G2402	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V46;
	object V47;
	check_arg(2);
	V46=(base[0]);
	V47=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI351))(V47,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for COERCE-TO-CLASS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{register object V49;
	object V50;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V49=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T45;}
	V50=(base[1]);
	vs_top=sup;
	goto T46;
	goto T45;
T45:;
	V50= Cnil;
	goto T46;
T46:;
	if(!(type_of((V49))==t_symbol)){
	goto T49;}{object V51;
	V51= (VFUN_NARGS=2,(*(LnkLI352))((V49),(((V50))==Cnil?Ct:Cnil)));
	if(V51==Cnil)goto T51;
	base[2]= V51;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T51;
T51:;}
	base[2]= (V49);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk353)();
	return;
	goto T49;
T49:;
	base[2]= (V49);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for SPECIALIZER-FROM-TYPE	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{register object V52;
	check_arg(1);
	V52=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V53;
	V53= Cnil;
	if(!(type_of((V52))==t_cons)){
	goto T55;}
	V53= CMPcdr((V52));
	V52= CMPcar((V52));
	goto T55;
T55:;
	if(!(type_of((V52))==t_symbol)){
	goto T62;}{object V54;
	if(((V53))==Cnil){
	goto T66;}
	V54= Cnil;
	goto T65;
	goto T66;
T66:;
	V54= (VFUN_NARGS=1,(*(LnkLI352))((V52)));
	goto T65;
T65:;
	if(V54==Cnil)goto T64;
	base[1]= V54;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T64;
T64:;}
	{object V55= (V52);
	if((V55!= VV[29]))goto T68;
	base[1]= CMPcar((V53));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk354)();
	return;
	goto T68;
T68:;
	if((V55!= VV[109]))goto T70;
	base[1]= VV[5];
	base[2]= VV[6];
	base[4]= CMPcar((V53));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk355)(Lclptr355);
	return;
	goto T70;
T70:;
	if((V55!= VV[356]))goto T75;
	base[2]= CMPcar((V53));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk80)(Lclptr80);
	return;
	goto T75;
T75:;
	if((V55!= VV[357]))goto T78;
	base[1]= (*(LnkLI358))(CMPcar((V53)));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T78;
T78:;
	FEerror("The ECASE key value ~s is illegal.",1,V55);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T62;
T62:;
	base[1]= (V52);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk359)(Lclptr359);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	base[1]= (V52);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T80;
T80:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for TYPE-FROM-SPECIALIZER	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{register object V56;
	check_arg(1);
	V56=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V56))==(Ct))){
	goto T84;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T84;
T84:;
	if(!(type_of((V56))==t_cons)){
	goto T87;}
	{register object x= CMPcar((V56)),V57= VV[7];
	while(V57!=Cnil)
	if(eql(x,V57->c.c_car)){
	goto T89;
	}else V57=V57->c.c_cdr;}
	base[1]= VV[8];
	base[2]= (V56);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T89;
T89:;
	base[1]= (V56);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T87;
T87:;
	if(!(type_of((V56))==t_symbol)){
	goto T97;}
	V56= (VFUN_NARGS=1,(*(LnkLI352))((V56)));
	goto T97;
T97:;
	if(!(((((VV[9]->s.s_dbind))==(VV[10])?Ct:Cnil))==Cnil)){
	goto T101;}
	goto T96;
	goto T101;
T101:;
	base[1]= (V56);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk359)(Lclptr359);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T95;}
	goto T96;
T96:;
	base[1]= (V56);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)(Lclptr360);
	return;
	goto T95;
T95:;
	base[1]= VV[11];
	base[2]= (V56);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local entry for function TYPE-CLASS	*/

static object LI11(V59)

register object V59;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V59);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk361)();
	vs_top=sup;
	V59= vs_base[0];
	if(!(type_of((V59))!=t_cons)){
	goto T111;}
	if(!(((V59))==(Ct))){
	goto T114;}
	{object V60 = (VV[12]->s.s_dbind);
	VMR11(V60)}
	goto T114;
T114:;
	base[0]= VV[13];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V61 = vs_base[0];
	VMR11(V61)}
	goto T111;
T111:;
	{object V62= CMPcar((V59));
	if((V62!= VV[357]))goto T117;
	{object V63 = (*(LnkLI362))(CMPcadr((V59)));
	VMR11(V63)}
	goto T117;
T117:;
	if((V62!= VV[109]))goto T118;
	{object V64 = (*(LnkLI362))(CMPcadr((V59)));
	VMR11(V64)}
	goto T118;
T118:;
	if((V62!= VV[356]))goto T119;
	{object V65 = CMPcadr((V59));
	VMR11(V65)}
	goto T119;
T119:;
	if((V62!= VV[29]))goto T120;
	{object V66 = CMPcadr((V59));
	VMR11(V66)}
	goto T120;
T120:;
	{object V67 = Cnil;
	VMR11(V67)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CLASS-EQ-TYPE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V68;
	check_arg(1);
	V68=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V68);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk80)(Lclptr80);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)(Lclptr360);
	return;
	}
}
/*	local entry for function INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS	*/

static object LI13(V70)

object V70;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V71;
	V71= (VFUN_NARGS=1,(*(LnkLI363))((V70)));
	{object V73;
	V73= (*(LnkLI364))((V70));
	V74= ({object _tmp=get(VV[365],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[365])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[365])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V75 = (V73);
	V76 = V71;
	(void)((
	V77 = V74,
	(type_of(V77) == t_sfun ?(*((V77)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V77)==t_vfun) ?
	(*((V77)->sfn.sfn_self)):
	(fcall.fun=(V77),fcalln))(V75,V76)));}
	{object V78 = (*(LnkLI366))((V70),(V71));
	VMR13(V78)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-TYPE-PREDICATE	*/

static object LI14(V80)

object V80;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= (VFUN_NARGS=1,(*(LnkLI367))((V80)));
	base[0]=MMcons(base[0],Cnil);
	{object V81 = 
	make_cclosure_new(LC79,Cnil,base[0],Cdata);
	VMR14(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-PREDICATE	*/

static object LI16(V83)

object V83;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]=MMcons((V83),Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T128;}
	(base[0]->c.c_car)= (VFUN_NARGS=1,(*(LnkLI352))((base[0]->c.c_car)));
	goto T128;
T128:;
	{object V84 = 
	make_cclosure_new(LC80,Cnil,base[0],Cdata);
	VMR15(V84)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-CLASS-EQ-PREDICATE	*/

static object LI18(V86)

object V86;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]=MMcons((V86),Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T132;}
	(base[0]->c.c_car)= (VFUN_NARGS=1,(*(LnkLI352))((base[0]->c.c_car)));
	goto T132;
T132:;
	{object V87 = 
	make_cclosure_new(LC81,Cnil,base[0],Cdata);
	VMR16(V87)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EQL-PREDICATE	*/

static object LI20(V89)

object V89;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]=MMcons((V89),Cnil);
	{object V90 = 
	make_cclosure_new(LC82,Cnil,base[0],Cdata);
	VMR17(V90)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G2410	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V91;
	check_arg(1);
	V91=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= list(2,VV[14],(V91));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for *NORMALIZE-TYPE	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V92;
	check_arg(1);
	V92=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V92))==t_cons)){
	goto T137;}
	{register object x= CMPcar((V92)),V93= VV[15];
	while(V93!=Cnil)
	if(eql(x,V93->c.c_car)){
	goto T141;
	}else V93=V93->c.c_cdr;
	goto T140;}
	goto T141;
T141:;
	V94= CMPcar((V92));
	{object V96;
	object V97= CMPcdr((V92));
	if(V97==Cnil){
	V95= Cnil;
	goto T142;}
	base[1]=V96=MMcons(Cnil,Cnil);
	goto T143;
T143:;
	base[2]= (V97->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk368)();
	vs_top=sup;
	(V96->c.c_car)= vs_base[0];
	if((V97=MMcdr(V97))==Cnil){
	V95= base[1];
	goto T142;}
	V96=MMcdr(V96)=MMcons(Cnil,Cnil);
	goto T143;}
	goto T142;
T142:;
	base[1]= make_cons(/* INLINE-ARGS */V94,V95);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T140;
T140:;
	if((CMPcdr((V92)))!=Cnil){
	goto T147;}
	V92= CMPcar((V92));
	goto TTL;
	goto T147;
T147:;
	base[1]= (V92);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T137;
T137:;
	if(!(type_of((V92))==t_symbol)){
	goto T152;}
	{object V98;
	V98= (VFUN_NARGS=2,(*(LnkLI352))((V92),Cnil));
	if(((V98))==Cnil){
	goto T156;}
	{object V99;
	base[1]= (V98);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)(Lclptr360);
	vs_top=sup;
	V99= vs_base[0];
	if(!(type_of((V99))==t_cons||((V99))==Cnil)){
	goto T161;}
	base[1]= (V99);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T161;
T161:;
	base[1]= make_cons((V99),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T156;
T156:;
	base[1]= make_cons((V92),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T152;
T152:;
	if(!(((VV[9]->s.s_dbind))==(VV[10]))){
	goto T163;}
	base[1]= (V92);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk359)(Lclptr359);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T164;}
	goto T163;
T163:;
	base[1]= (V92);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk360)(Lclptr360);
	return;
	goto T164;
T164:;
	base[1]= VV[16];
	base[2]= (V92);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	function definition for CONVERT-TO-SYSTEM-TYPE	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V100;
	check_arg(1);
	V100=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V101= CMPcar((V100));
	if((V101!= VV[369])
	&& (V101!= VV[370])
	&& (V101!= VV[371]))goto T172;
	V102= CMPcar((V100));
	{object V104;
	object V105= CMPcdr((V100));
	if(V105==Cnil){
	V103= Cnil;
	goto T173;}
	base[1]=V104=MMcons(Cnil,Cnil);
	goto T174;
T174:;
	base[2]= (V105->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk372)();
	vs_top=sup;
	(V104->c.c_car)= vs_base[0];
	if((V105=MMcdr(V105))==Cnil){
	V103= base[1];
	goto T173;}
	V104=MMcdr(V104)=MMcons(Cnil,Cnil);
	goto T174;}
	goto T173;
T173:;
	base[1]= make_cons(/* INLINE-ARGS */V102,V103);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T172;
T172:;
	if((V101!= VV[29])
	&& (V101!= VV[356]))goto T177;
	base[1]= CMPcadr((V100));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk373)(Lclptr373);
	return;
	goto T177;
T177:;
	if((V101!= VV[357]))goto T179;
	base[1]= (V100);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T179;
T179:;
	if((CMPcdr((V100)))!=Cnil){
	goto T181;}
	base[1]= CMPcar((V100));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T181;
T181:;
	base[1]= (V100);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for *SUBTYPEP	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	bds_check;
	{register object V106;
	register object V107;
	check_arg(2);
	V106=(base[0]);
	V107=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(equal((V106),(V107)))){
	goto T184;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T184;
T184:;
	if(!(((VV[9]->s.s_dbind))==(VV[17]))){
	goto T189;}
	base[2]= (((V106))==((V107))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T189;
T189:;
	bds_bind(VV[18],Ct);
	base[3]= (V106);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)();
	vs_top=sup;
	V106= vs_base[0];
	base[3]= (V107);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk368)();
	vs_top=sup;
	V107= vs_base[0];
	{object V108= CMPcar((V107));
	if((V108!= VV[369]))goto T199;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;
	goto T199;
T199:;
	if((V108!= VV[370]))goto T202;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;
	goto T202;
T202:;
	if((V108!= VV[357])
	&& (V108!= VV[374])
	&& (V108!= VV[356])
	&& (V108!= VV[29]))goto T205;
	{object V109;
	object V110;
	base[3]= (V107);
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk375)();
	if(vs_base>=vs_top){vs_top=sup;goto T209;}
	V109= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T210;}
	V110= vs_base[0];
	vs_top=sup;
	goto T211;
	goto T209;
T209:;
	V109= Cnil;
	goto T210;
T210:;
	V110= Cnil;
	goto T211;
T211:;
	base[3]= (V109);
	if((V109)!=Cnil){
	base[4]= (V109);
	goto T213;}
	base[4]= (((V110))==Cnil?Ct:Cnil);
	goto T213;
T213:;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;}
	goto T205;
T205:;
	base[4]= (V106);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk372)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= (V107);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk372)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk376)();
	bds_unwind1;
	return;}
	}
}
/*	local entry for function DO-SATISFIES-DEFTYPE	*/

static object LI25(V113,V114)

object V113;object V114;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= list(4,VV[19],(V113),Cnil,list(2,VV[20],list(2,VV[21],(V114))));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	{object V115 = vs_base[0];
	VMR22(V115)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-TYPE-PREDICATE-NAME	*/

static object LI26(object V116,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{register object V117;
	object V118;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V117= V116;
	narg = narg - 1;
	if (narg <= 0) goto T219;
	else {
	V118= first;}
	--narg; goto T220;
	goto T219;
T219:;
	V118= Cnil;
	goto T220;
T220:;
	base[0]= (V117);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T223;}
	base[1]= Cnil;
	base[2]= VV[22];
	base[3]= (V118);
	base[6]= (V117);
	vs_top=(vs_base=base+6)+1;
	Lsymbol_package();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= symbol_name((V117));
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[23]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V119 = vs_base[0];
	VMR23(V119)}
	goto T223;
T223:;
	base[1]= Cnil;
	base[2]= VV[24];
	base[3]= (V118);
	base[4]= symbol_name((V117));
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lmake_symbol();
	vs_top=sup;
	{object V120 = vs_base[0];
	VMR23(V120)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GET-BUILT-IN-CLASS-SYMBOL	*/

static object LI27(V122)

object V122;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;{object V123;
	{register object x= (V122),V125= (VV[25]->s.s_dbind);
	while(V125!=Cnil)
	if(EQ(x,V125->c.c_car->c.c_car) &&V125->c.c_car != Cnil){
	V124= (V125->c.c_car);
	goto T242;
	}else V125=V125->c.c_cdr;
	V124= Cnil;}
	goto T242;
T242:;
	V123= CMPcadr(V124);
	if(V123==Cnil)goto T240;
	{object V126 = V123;
	VMR24(V126)}
	goto T240;
T240:;}
	{object V127;
	base[1]= Cnil;
	base[2]= VV[26];
	base[3]= symbol_name((V122));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[23]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V127= vs_base[0];
	{object V128;
	V128= list(2,(V122),(V127));
	(VV[25]->s.s_dbind)= make_cons((V128),(VV[25]->s.s_dbind));}
	{object V129 = (V127);
	VMR24(V129)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-BUILT-IN-WRAPPER-SYMBOL	*/

static object LI28(V131)

object V131;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;{object V132;
	{register object x= (V131),V134= (VV[27]->s.s_dbind);
	while(V134!=Cnil)
	if(EQ(x,V134->c.c_car->c.c_car) &&V134->c.c_car != Cnil){
	V133= (V134->c.c_car);
	goto T254;
	}else V134=V134->c.c_cdr;
	V133= Cnil;}
	goto T254;
T254:;
	V132= CMPcadr(V133);
	if(V132==Cnil)goto T252;
	{object V135 = V132;
	VMR25(V135)}
	goto T252;
T252:;}
	{object V136;
	base[1]= Cnil;
	base[2]= VV[28];
	base[3]= symbol_name((V131));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[23]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V136= vs_base[0];
	{object V137;
	V137= list(2,(V131),(V136));
	(VV[27]->s.s_dbind)= make_cons((V137),(VV[27]->s.s_dbind));}
	{object V138 = (V136);
	VMR25(V138)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-CLASS	*/

static object LI29(V141,V142)

object V141;object V142;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	V143= (*(LnkLI377))(VV[29],(V141),(V142));
	{object V144 = CMPcaddr(/* INLINE-ARGS */V143);
	VMR26(V144)}
	return Cnil;
}
/*	macro definition for DEFINE-GF-PREDICATE	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V145=base[0]->c.c_cdr;
	if(endp(V145))invalid_macro_call();
	base[2]= (V145->c.c_car);
	V145=V145->c.c_cdr;
	base[3]= V145;}
	V146= listA(3,VV[31],base[2],VV[32]);
	{object V148;
	object V149= base[3];
	if(V149==Cnil){
	V147= Cnil;
	goto T264;}
	base[4]=V148=MMcons(Cnil,Cnil);
	goto T265;
T265:;
	V151= list(2,VV[33],(V149->c.c_car));
	(V148->c.c_car)= list(4,VV[31],base[2],make_cons(/* INLINE-ARGS */V151,Cnil),Ct);
	if((V149=MMcdr(V149))==Cnil){
	V147= base[4];
	goto T264;}
	V148=MMcdr(V148)=MMcons(Cnil,Cnil);
	goto T265;}
	goto T264;
T264:;
	base[4]= listA(3,VV[30],/* INLINE-ARGS */V146,V147);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-CLASS-PREDICATE-NAME	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V152;
	check_arg(1);
	V152=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= Cnil;
	base[3]= VV[34];
	base[6]= (V152);
	vs_top=(vs_base=base+6)+1;
	Lsymbol_package();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V152);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (VV[23]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lintern();
	return;
	}
}
/*	local entry for function PLIST-VALUE	*/

static object LI32(V155,V156)

object V155;object V156;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[1]= (V155);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk378)(Lclptr378);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V156);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	{object V157 = vs_base[0];
	VMR29(V157)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G2422	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V158;
	object V159;
	object V160;
	check_arg(3);
	V158=(base[0]);
	V159=(base[1]);
	V160=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V158))==Cnil){
	goto T279;}
	{object V164;
	base[4]= V159;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk378)(Lclptr378);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V158;
	base[5]= V160;
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V164= vs_base[0];
	V165= ({object _tmp=get(VV[378],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[378])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[378])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V166 = (V164);
	V167 = V159;
	(void)((
	V168 = V165,
	(type_of(V168) == t_sfun ?(*((V168)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V168)==t_vfun) ?
	(*((V168)->sfn.sfn_self)):
	(fcall.fun=(V168),fcalln))(V166,V167)));
	base[3]= V158;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T279;
T279:;
	{object V170;
	object V171;
	base[4]= V159;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk378)(Lclptr378);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V160);
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T293;}
	V170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T294;}
	V171= vs_base[0];
	vs_top=sup;
	goto T295;
	goto T293;
T293:;
	V170= Cnil;
	goto T294;
T294:;
	V171= Cnil;
	goto T295;
T295:;
	V172= ({object _tmp=get(VV[378],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[378])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[378])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V173 = (V170);
	V174 = V159;
	(void)((
	V175 = V172,
	(type_of(V175) == t_sfun ?(*((V175)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V175)==t_vfun) ?
	(*((V175)->sfn.sfn_self)):
	(fcall.fun=(V175),fcalln))(V173,V174)));}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for Defclass T2430	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Ct;
	base[1]= VV[35];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass SLOT-OBJECT2430	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[36];
	base[1]= VV[37];
	base[2]= VV[38];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-OBJECT2430	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[39];
	base[1]= VV[40];
	base[2]= VV[41];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	local entry for function STRUCTURE-OBJECT class constructor	*/

static object LI37(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI37key,first,ap);
	goto TTL;
TTL:;
	base[0]= VV[39];
	vs_top=(vs_base=base+0)+1;
	siLmake_structure();
	vs_top=sup;
	{object V176 = vs_base[0];
	VMR34(V176)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}}
/*	function definition for Defclass STANDARD-OBJECT2430	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[42];
	base[1]= VV[43];
	base[2]= VV[44];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass METAOBJECT2430	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[45];
	base[1]= VV[43];
	base[2]= VV[46];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass SPECIALIZER2430	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[47];
	base[1]= VV[43];
	base[2]= VV[48];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[51];
	base[8]= VV[52];
	base[9]= VV[53];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[56];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V177= vs_base[0];
	base[3]= make_cons(V177,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass DEFINITION-SOURCE-MIXIN2431	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V178;
	V178= VV[381];
	base[0]= VV[57];
	base[1]= VV[43];
	base[2]= VV[58];
	base[4]= VV[49];
	base[5]= (V178);
	base[6]= VV[50];
	base[7]= VV[59];
	base[8]= VV[52];
	base[9]= VV[60];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[61];
	base[14]= VV[62];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V179= vs_base[0];
	base[3]= make_cons(V179,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;}
}
/*	function definition for Defclass PLIST-MIXIN2431	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[63];
	base[1]= VV[43];
	base[2]= VV[64];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[65];
	base[8]= VV[52];
	base[9]= VV[66];
	base[10]= VV[54];
	base[11]= VV[67];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[68];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V180= vs_base[0];
	base[3]= make_cons(V180,Cnil);
	base[4]= Cnil;
	base[5]= VV[69];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass DOCUMENTATION-MIXIN2431	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[70];
	base[1]= VV[43];
	base[2]= VV[71];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass DEPENDENT-UPDATE-MIXIN2431	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[72];
	base[1]= VV[43];
	base[2]= VV[73];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass CLASS2432	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V181;
	V181= VV[382];
	base[0]= VV[29];
	base[1]= VV[43];
	base[2]= VV[74];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[75];
	base[8]= VV[52];
	base[9]= VV[76];
	base[10]= VV[54];
	base[11]= VV[77];
	base[12]= VV[55];
	base[13]= VV[78];
	base[14]= VV[79];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V182= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[80];
	base[8]= VV[52];
	base[9]= VV[81];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[82];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V183= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[83];
	base[8]= VV[52];
	base[9]= VV[84];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[85];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V184= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[86];
	base[8]= VV[52];
	base[9]= VV[87];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[88];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V185= vs_base[0];
	base[4]= VV[49];
	base[5]= (V181);
	base[6]= VV[50];
	base[7]= VV[89];
	base[8]= VV[52];
	base[9]= Cnil;
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[90];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V186= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[91];
	base[8]= VV[52];
	base[9]= VV[92];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[93];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V187= vs_base[0];
	base[3]= list(6,V182,V183,V184,V185,V186,V187);
	base[4]= Cnil;
	base[5]= VV[94];
	symlispcall(VV[379],base+0,6);
	return;}
}
/*	function definition for Defclass PCL-CLASS2432	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[95];
	base[1]= VV[43];
	base[2]= VV[96];
	V188= listA(9,VV[50],VV[97],VV[52],VV[98],VV[54],Cnil,VV[55],Cnil,Cnil);
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[99];
	base[8]= VV[52];
	base[9]= VV[100];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[101];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V189= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[102];
	base[8]= VV[52];
	base[9]= VV[103];
	base[10]= VV[54];
	base[11]= VV[104];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[105];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V190= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[106];
	base[8]= VV[52];
	base[9]= VV[107];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[108];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V191= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[109];
	base[8]= VV[52];
	base[9]= VV[110];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[111];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V192= vs_base[0];
	base[3]= list(5,/* INLINE-ARGS */V188,V189,V190,V191,V192);
	base[4]= Cnil;
	base[5]= VV[112];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass SLOT-CLASS2432	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= VV[43];
	base[2]= VV[113];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[114];
	base[8]= VV[52];
	base[9]= VV[115];
	base[10]= VV[54];
	base[11]= VV[116];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[117];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V193= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[118];
	base[8]= VV[52];
	base[9]= VV[119];
	base[10]= VV[54];
	base[11]= VV[120];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[121];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V194= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[122];
	base[8]= VV[52];
	base[9]= VV[123];
	base[10]= VV[54];
	base[11]= VV[124];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[125];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V195= vs_base[0];
	base[3]= list(3,V193,V194,V195);
	base[4]= Cnil;
	base[5]= VV[126];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STD-CLASS2432	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[127];
	base[1]= VV[43];
	base[2]= VV[128];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-CLASS2432	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[43];
	base[1]= VV[43];
	base[2]= VV[129];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass FUNCALLABLE-STANDARD-CLASS2432	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[130];
	base[1]= VV[43];
	base[2]= VV[131];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass FORWARD-REFERENCED-CLASS2432	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[132];
	base[1]= VV[43];
	base[2]= VV[133];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass BUILT-IN-CLASS2432	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[35];
	base[1]= VV[43];
	base[2]= VV[134];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-CLASS2432	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= VV[43];
	base[2]= VV[135];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[136];
	base[8]= VV[52];
	base[9]= VV[137];
	base[10]= VV[54];
	base[11]= VV[138];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[139];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V196= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[140];
	base[8]= VV[52];
	base[9]= VV[141];
	base[10]= VV[54];
	base[11]= VV[142];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[143];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V197= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[144];
	base[8]= VV[52];
	base[9]= Cnil;
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[145];
	base[14]= VV[146];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V198= vs_base[0];
	base[3]= list(3,V196,V197,V198);
	base[4]= Cnil;
	base[5]= VV[147];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass SPECIALIZER-WITH-OBJECT2432	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[148];
	base[1]= VV[43];
	base[2]= VV[149];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass EXACT-CLASS-SPECIALIZER2432	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[150];
	base[1]= VV[43];
	base[2]= VV[151];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass CLASS-EQ-SPECIALIZER2432	*/

static void L56()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[80];
	base[1]= VV[43];
	base[2]= VV[152];
	V199= listA(9,VV[50],VV[153],VV[52],VV[154],VV[54],Cnil,VV[55],VV[155],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V199,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass CLASS-PROTOTYPE-SPECIALIZER2432	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[5];
	base[1]= VV[43];
	base[2]= VV[156];
	V200= listA(9,VV[50],VV[153],VV[52],VV[157],VV[54],Cnil,VV[55],VV[158],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V200,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass EQL-SPECIALIZER2432	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[159];
	base[1]= VV[43];
	base[2]= VV[160];
	V201= listA(9,VV[50],VV[153],VV[52],VV[161],VV[54],Cnil,VV[55],VV[162],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V201,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	local entry for function INTERN-EQL-SPECIALIZER	*/

static object LI59(V203)

object V203;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;{object V204;
	base[0]= (V203);
	base[1]= (VV[163]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V204= vs_base[0];
	if(V204==Cnil)goto T673;
	{object V205 = V204;
	VMR56(V205)}
	goto T673;
T673:;}
	{object V207;
	object V208;
	V207= (VV[163]->s.s_dbind);
	base[1]= VV[159];
	base[2]= VV[6];
	base[3]= (V203);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk355)(Lclptr355);
	vs_top=sup;
	V208= vs_base[0];
	base[1]= V203;
	base[2]= (V207);
	base[3]= (V208);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V209 = vs_base[0];
	VMR56(V209)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SLOT-DEFINITION2437	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V210;
	V210= VV[383];
	base[0]= VV[165];
	base[1]= VV[43];
	base[2]= VV[166];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[75];
	base[8]= VV[52];
	base[9]= VV[167];
	base[10]= VV[54];
	base[11]= VV[168];
	base[12]= VV[55];
	base[13]= VV[169];
	base[14]= VV[170];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V211= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[171];
	base[8]= VV[52];
	base[9]= VV[172];
	base[10]= VV[54];
	base[11]= VV[173];
	base[12]= VV[55];
	base[13]= VV[174];
	base[14]= VV[175];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V212= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[176];
	base[8]= VV[52];
	base[9]= VV[177];
	base[10]= VV[54];
	base[11]= VV[178];
	base[12]= VV[55];
	base[13]= VV[179];
	base[14]= VV[180];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V213= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[181];
	base[8]= VV[52];
	base[9]= VV[182];
	base[10]= VV[54];
	base[11]= VV[183];
	base[12]= VV[55];
	base[13]= VV[184];
	base[14]= VV[185];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V214= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[186];
	base[8]= VV[52];
	base[9]= VV[187];
	base[10]= VV[54];
	base[11]= VV[188];
	base[12]= VV[55];
	base[13]= VV[189];
	base[14]= VV[190];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V215= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[191];
	base[8]= VV[52];
	base[9]= VV[192];
	base[10]= VV[54];
	base[11]= VV[193];
	base[12]= VV[55];
	base[13]= VV[194];
	base[14]= VV[195];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V216= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[384]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[51];
	base[8]= VV[52];
	base[9]= VV[196];
	base[10]= VV[54];
	base[11]= VV[197];
	base[12]= VV[55];
	base[13]= VV[198];
	base[14]= VV[199];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V217= vs_base[0];
	base[4]= VV[49];
	base[5]= (V210);
	base[6]= VV[50];
	base[7]= VV[200];
	base[8]= VV[52];
	base[9]= Cnil;
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[201];
	base[14]= VV[202];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V218= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[29];
	base[8]= VV[52];
	base[9]= VV[203];
	base[10]= VV[54];
	base[11]= VV[204];
	base[12]= VV[55];
	base[13]= VV[205];
	base[14]= VV[206];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V219= vs_base[0];
	base[3]= list(9,V211,V212,V213,V214,V215,V216,V217,V218,V219);
	base[4]= Cnil;
	base[5]= VV[207];
	symlispcall(VV[379],base+0,6);
	return;}
}
/*	function definition for Defclass STANDARD-SLOT-DEFINITION2438	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V220;
	V220= VV[385];
	base[0]= VV[209];
	base[1]= VV[43];
	base[2]= VV[210];
	base[4]= VV[49];
	base[5]= (V220);
	base[6]= VV[50];
	base[7]= VV[211];
	base[8]= VV[52];
	base[9]= VV[212];
	base[10]= VV[54];
	base[11]= VV[213];
	base[12]= VV[55];
	base[13]= VV[214];
	base[14]= VV[215];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V221= vs_base[0];
	base[3]= make_cons(V221,Cnil);
	base[4]= Cnil;
	base[5]= VV[216];
	symlispcall(VV[379],base+0,6);
	return;}
}
/*	function definition for Defclass STRUCTURE-SLOT-DEFINITION2438	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[217];
	base[1]= VV[43];
	base[2]= VV[218];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[219];
	base[8]= VV[52];
	base[9]= VV[220];
	base[10]= VV[54];
	base[11]= VV[221];
	base[12]= VV[55];
	base[13]= VV[222];
	base[14]= VV[223];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V222= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[224];
	base[8]= VV[52];
	base[9]= VV[225];
	base[10]= VV[54];
	base[11]= VV[226];
	base[12]= VV[55];
	base[13]= VV[227];
	base[14]= VV[228];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V223= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[229];
	base[8]= VV[52];
	base[9]= VV[230];
	base[10]= VV[54];
	base[11]= VV[231];
	base[12]= VV[55];
	base[13]= VV[232];
	base[14]= VV[233];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V224= vs_base[0];
	base[3]= list(3,V222,V223,V224);
	base[4]= Cnil;
	base[5]= VV[234];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass DIRECT-SLOT-DEFINITION2438	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[235];
	base[1]= VV[43];
	base[2]= VV[236];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass EFFECTIVE-SLOT-DEFINITION2438	*/

static void L64()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[237];
	base[1]= VV[43];
	base[2]= VV[238];
	V225= listA(9,VV[50],VV[239],VV[52],VV[240],VV[54],VV[241],VV[55],Cnil,Cnil);
	V226= listA(9,VV[50],VV[242],VV[52],VV[243],VV[54],VV[244],VV[55],Cnil,Cnil);
	V227= listA(9,VV[50],VV[245],VV[52],VV[246],VV[54],VV[247],VV[55],Cnil,Cnil);
	base[4]= VV[49];
	base[5]= (VV[386]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[248];
	base[8]= VV[52];
	base[9]= Cnil;
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[249];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V228= vs_base[0];
	base[3]= list(4,/* INLINE-ARGS */V225,/* INLINE-ARGS */V226,/* INLINE-ARGS */V227,V228);
	base[4]= Cnil;
	base[5]= VV[250];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-DIRECT-SLOT-DEFINITION2438	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[251];
	base[1]= VV[43];
	base[2]= VV[252];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-EFFECTIVE-SLOT-DEFINITION2438	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[253];
	base[1]= VV[43];
	base[2]= VV[254];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[255];
	base[8]= VV[52];
	base[9]= VV[256];
	base[10]= VV[54];
	base[11]= VV[257];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[258];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V229= vs_base[0];
	base[3]= make_cons(V229,Cnil);
	base[4]= Cnil;
	base[5]= VV[259];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-DIRECT-SLOT-DEFINITION2438	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[260];
	base[1]= VV[43];
	base[2]= VV[261];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-EFFECTIVE-SLOT-DEFINITION2438	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[262];
	base[1]= VV[43];
	base[2]= VV[263];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass METHOD2438	*/

static void L69()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[264];
	base[1]= VV[43];
	base[2]= VV[265];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-METHOD2438	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[266];
	base[1]= VV[43];
	base[2]= VV[267];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[268];
	base[8]= VV[52];
	base[9]= VV[269];
	base[10]= VV[54];
	base[11]= VV[270];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[271];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V230= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[272];
	base[8]= VV[52];
	base[9]= VV[273];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[274];
	base[14]= VV[275];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V231= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[276];
	base[8]= VV[52];
	base[9]= VV[277];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[278];
	base[14]= VV[279];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V232= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[280];
	base[8]= VV[52];
	base[9]= Cnil;
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[281];
	base[14]= VV[282];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V233= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[283];
	base[8]= VV[52];
	base[9]= VV[284];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[285];
	base[14]= VV[286];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V234= vs_base[0];
	base[3]= list(5,V230,V231,V232,V233,V234);
	base[4]= Cnil;
	base[5]= VV[287];
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-ACCESSOR-METHOD2438	*/

static void L71()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[288];
	base[1]= VV[43];
	base[2]= VV[289];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[290];
	base[8]= VV[52];
	base[9]= VV[291];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[292];
	base[14]= VV[293];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V235= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[165];
	base[8]= VV[52];
	base[9]= VV[294];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= VV[295];
	base[14]= VV[296];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V236= vs_base[0];
	base[3]= list(2,V235,V236);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-READER-METHOD2438	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[297];
	base[1]= VV[43];
	base[2]= VV[298];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-WRITER-METHOD2438	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[299];
	base[1]= VV[43];
	base[2]= VV[300];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-BOUNDP-METHOD2438	*/

static void L74()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[301];
	base[1]= VV[43];
	base[2]= VV[302];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass GENERIC-FUNCTION2438	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[268];
	base[1]= VV[130];
	base[2]= VV[303];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-GENERIC-FUNCTION2441	*/

static void L76()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V237;
	object V238;
	object V239;
	V237= VV[387];
	V238= VV[388];
	V239= VV[389];
	base[0]= VV[306];
	base[1]= VV[130];
	base[2]= VV[307];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[75];
	base[8]= VV[52];
	base[9]= VV[308];
	base[10]= VV[54];
	base[11]= VV[309];
	base[12]= VV[55];
	base[13]= VV[310];
	base[14]= VV[311];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V240= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[312];
	base[8]= VV[52];
	base[9]= VV[313];
	base[10]= VV[54];
	base[11]= VV[314];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[315];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V241= vs_base[0];
	V242= listA(9,VV[50],VV[316],VV[52],VV[317],VV[54],VV[318],VV[55],VV[319],Cnil);
	V243= listA(9,VV[50],VV[320],VV[52],VV[321],VV[54],VV[322],VV[55],VV[323],Cnil);
	base[4]= VV[49];
	base[5]= (V239);
	base[6]= VV[50];
	base[7]= VV[324];
	base[8]= VV[52];
	base[9]= VV[325];
	base[10]= VV[54];
	base[11]= Cnil;
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[326];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V244= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[327];
	base[8]= VV[52];
	base[9]= VV[328];
	base[10]= VV[54];
	base[11]= VV[329];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[330];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V245= vs_base[0];
	base[4]= VV[49];
	base[5]= (VV[380]->s.s_gfdef);
	base[6]= VV[50];
	base[7]= VV[331];
	base[8]= VV[52];
	base[9]= VV[332];
	base[10]= VV[54];
	base[11]= VV[333];
	base[12]= VV[55];
	base[13]= Cnil;
	base[14]= VV[334];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V246= vs_base[0];
	base[3]= list(7,V240,V241,/* INLINE-ARGS */V242,/* INLINE-ARGS */V243,V244,V245,V246);
	V247= list(3,VV[336],(V238),VV[305]);
	base[4]= list(2,VV[335],list(2,/* INLINE-ARGS */V247,list(3,VV[337],(V237),VV[304])));
	base[5]= VV[338];
	symlispcall(VV[379],base+0,6);
	return;}
}
/*	function definition for Defclass METHOD-COMBINATION2441	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[320];
	base[1]= VV[43];
	base[2]= VV[339];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-METHOD-COMBINATION2441	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[340];
	base[1]= VV[43];
	base[2]= VV[341];
	V248= listA(9,VV[50],VV[51],VV[52],VV[342],VV[54],Cnil,VV[55],VV[343],Cnil);
	V249= listA(9,VV[50],VV[200],VV[52],VV[344],VV[54],Cnil,VV[55],VV[345],Cnil);
	base[3]= list(3,/* INLINE-ARGS */V248,/* INLINE-ARGS */V249,listA(9,VV[50],VV[346],VV[52],VV[347],VV[54],Cnil,VV[55],VV[348],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[379],base+0,6);
	return;
}
/*	local function CLOSURE	*/

static void LC89(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (*(LnkLI390))();
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC88(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (VV[305]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC87(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (VV[304]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC86(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= VV[208];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC84(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= make_cons(Cnil,Cnil);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC83(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	check_arg(0);
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk391)();
	return;
}
/*	local function CLOSURE	*/

static void LC82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{object V250;
	check_arg(1);
	V250=(base[0]);
	vs_top=sup;
	base[1]= (eql((base0[0]->c.c_car),(V250))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC81(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_check;
	{object V251;
	check_arg(1);
	V251=(base[0]);
	vs_top=sup;
	V252 = (base0[0]->c.c_car);
	V253= (*(LnkLI362))((V251));
	base[1]= ((V252)==(/* INLINE-ARGS */V253)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC80(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V254;
	check_arg(1);
	V254=(base[0]);
	vs_top=sup;
	V256 = (base0[0]->c.c_car);
	base[1]= (*(LnkLI362))((V254));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk97)(Lclptr97);
	vs_top=sup;
	V257= vs_base[0];
	{register object x= V256,V255= V257;
	while(V255!=Cnil)
	if(x==(V255->c.c_car)){
	base[1]= V255;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V255=V255->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC79(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	{object V258;
	check_arg(1);
	V258=(base[0]);
	vs_top=sup;
	base[1]= CMPcadr((base0[0]->c.c_car));
	base[2]= (V258);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static void LnkT97(ptr) object *ptr;{ call_or_link_closure(VV[97],(void **)(void *)&Lnk97,(void **)(void *)&Lclptr97);} /* CLASS-PRECEDENCE-LIST */
static void LnkT391(){ call_or_link(VV[391],(void **)(void *)&Lnk391);} /* LOAD-TRUENAME */
static object  LnkTLI390(){return call_proc0(VV[390],(void **)(void *)&LnkLI390);} /* MAKE-ARG-INFO */
static void LnkT378(ptr) object *ptr;{ call_or_link_closure(VV[378],(void **)(void *)&Lnk378,(void **)(void *)&Lclptr378);} /* OBJECT-PLIST */
static object  LnkTLI377(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[377],(void **)(void *)&LnkLI377,3,first,ap);va_end(ap);return V1;} /* VARIABLE-DECLARATION */
static void LnkT376(){ call_or_link(VV[376],(void **)(void *)&Lnk376);} /* SUBTYPEP */
static void LnkT375(){ call_or_link(VV[375],(void **)(void *)&Lnk375);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT373(ptr) object *ptr;{ call_or_link_closure(VV[373],(void **)(void *)&Lnk373,(void **)(void *)&Lclptr373);} /* CLASS-NAME */
static void LnkT372(){ call_or_link(VV[372],(void **)(void *)&Lnk372);} /* CONVERT-TO-SYSTEM-TYPE */
static void LnkT368(){ call_or_link(VV[368],(void **)(void *)&Lnk368);} /* *NORMALIZE-TYPE */
static object  LnkTLI367(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[367],(void **)(void *)&LnkLI367,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI366(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[366],(void **)(void *)&LnkLI366,2,first,ap);va_end(ap);return V1;} /* DO-SATISFIES-DEFTYPE */
static object  LnkTLI364(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[364],(void **)(void *)&LnkLI364,1,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE */
static object  LnkTLI363(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[363],(void **)(void *)&LnkLI363,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE-NAME */
static object  LnkTLI362(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[362],(void **)(void *)&LnkLI362,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT361(){ call_or_link(VV[361],(void **)(void *)&Lnk361);} /* TYPE-FROM-SPECIALIZER */
static void LnkT360(ptr) object *ptr;{ call_or_link_closure(VV[360],(void **)(void *)&Lnk360,(void **)(void *)&Lclptr360);} /* SPECIALIZER-TYPE */
static void LnkT359(ptr) object *ptr;{ call_or_link_closure(VV[359],(void **)(void *)&Lnk359,(void **)(void *)&Lclptr359);} /* SPECIALIZERP */
static object  LnkTLI358(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[358],(void **)(void *)&LnkLI358,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static void LnkT80(ptr) object *ptr;{ call_or_link_closure(VV[80],(void **)(void *)&Lnk80,(void **)(void *)&Lclptr80);} /* CLASS-EQ-SPECIALIZER */
static void LnkT355(ptr) object *ptr;{ call_or_link_closure(VV[355],(void **)(void *)&Lnk355,(void **)(void *)&Lclptr355);} /* MAKE-INSTANCE */
static void LnkT354(){ call_or_link(VV[354],(void **)(void *)&Lnk354);} /* COERCE-TO-CLASS */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* ENSURE-CLASS */
static object  LnkTLI352(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[352],(void **)(void *)&LnkLI352,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI351(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[351],(void **)(void *)&LnkLI351,2,first,ap);va_end(ap);return V1;} /* FDEFINE-CAREFULLY */
static object  LnkTLI350(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[350],(void **)(void *)&LnkLI350,1,first,ap);va_end(ap);return V1;} /* UNENCAPSULATED-FDEFINITION */
static void LnkT349(){ call_or_link(VV[349],(void **)(void *)&Lnk349);} /* FDEFINITION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

