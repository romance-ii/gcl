
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
	base[8]= list(3,VV[2],V13,(V6));
	vs_top=(vs_base=base+8)+1;
	return;}
}
/*	local entry for function UNENCAPSULATED-FDEFINITION	*/

static object LI2(V20)

object V20;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= (V20);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk363)();
	vs_top=sup;
	{object V21 = vs_base[0];
	VMR2(V21)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FDEFINE-CAREFULLY	*/

static object LI3(V24,V25)

register object V24;object V25;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V26;
	object V27;
	if(!(type_of((V24))==t_symbol)){
	goto T26;}
	{object V28 =((V24))->s.s_plist;
	 object ind= VV[3];
	while(V28!=Cnil){
	if(V28->c.c_car==ind){
	V26= (V28->c.c_cdr->c.c_car);
	goto T24;
	}else V28=V28->c.c_cdr->c.c_cdr;}
	V26= Cnil;
	goto T24;}
	goto T26;
T26:;
	V26= Cnil;
	goto T24;
T24:;
	V27= Cnil;
	if(((V26))==Cnil){
	goto T29;}
	base[1]= (V24);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V29= vs_base[0];
	if(!(type_of(V29)==t_cons)){
	goto T29;}
	base[1]= (V24);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V30= vs_base[0];
	V27= CMPcadddr(V30);
	if(!(type_of((V27))==t_cons)){
	goto T29;}
	if(!((CMPcar((V27)))==(VV[4]))){
	goto T29;}
	base[0]= (V26);
	goto T23;
	goto T29;
T29:;
	base[0]= (V24);}
	goto T23;
T23:;
	base[1]= (V25);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V31 = vs_base[0];
	VMR3(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GBOUNDP	*/

static object LI4(V33)

object V33;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	base[0]= V33;
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	{object V35 = vs_base[0];
	VMR4(V35)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GMAKUNBOUND	*/

static object LI5(V37)

object V37;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= V37;
	vs_top=(vs_base=base+0)+1;
	Lfmakunbound();
	vs_top=sup;
	{object V39 = vs_base[0];
	VMR5(V39)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GDEFINITION	*/

static object LI6(V41)

object V41;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V43 = (*(LnkLI364))(V41);
	VMR6(V43)}
	return Cnil;
}
/*	function definition for G2527	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V44;
	object V45;
	check_arg(2);
	V44=(base[0]);
	V45=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI365))(V45,(V44));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for COERCE-TO-CLASS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{register object V47;
	object V48;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V47=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T45;}
	V48=(base[1]);
	vs_top=sup;
	goto T46;
	goto T45;
T45:;
	V48= Cnil;
	goto T46;
T46:;
	if(!(type_of((V47))==t_symbol)){
	goto T49;}{object V49;
	V49= (VFUN_NARGS=2,(*(LnkLI366))((V47),(((V48))==Cnil?Ct:Cnil)));
	if(V49==Cnil)goto T51;
	base[2]= V49;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T51;
T51:;}
	base[2]= (V47);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk367)();
	return;
	goto T49;
T49:;
	base[2]= (V47);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for SPECIALIZER-FROM-TYPE	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{register object V50;
	check_arg(1);
	V50=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V51;
	V51= Cnil;
	if(!(type_of((V50))==t_cons)){
	goto T55;}
	V51= CMPcdr((V50));
	V50= CMPcar((V50));
	goto T55;
T55:;
	if(!(type_of((V50))==t_symbol)){
	goto T62;}{object V52;
	if(((V51))==Cnil){
	goto T66;}
	V52= Cnil;
	goto T65;
	goto T66;
T66:;
	V52= (VFUN_NARGS=1,(*(LnkLI366))((V50)));
	goto T65;
T65:;
	if(V52==Cnil)goto T64;
	base[1]= V52;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T64;
T64:;}
	{object V54= V50;
	if((V54!= VV[37]))goto T68;
	base[1]= CMPcar((V51));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk368)();
	return;
	goto T68;
T68:;
	if((V54!= VV[116]))goto T70;
	base[1]= VV[5];
	base[2]= VV[6];
	base[4]= CMPcar((V51));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk368)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk369)(Lclptr369);
	return;
	goto T70;
T70:;
	if((V54!= VV[370]))goto T75;
	base[2]= CMPcar((V51));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk368)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk87)(Lclptr87);
	return;
	goto T75;
T75:;
	if((V54!= VV[371]))goto T78;
	base[1]= (*(LnkLI372))(CMPcar((V51)));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T78;
T78:;
	base[1]= VV[7];
	base[2]= VV[8];
	base[3]= VV[9];
	base[4]= VV[10];
	base[5]= V50;
	base[6]= VV[11];
	base[7]= VV[12];
	base[8]= VV[13];
	base[9]= VV[14];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk373)();
	return;}
	goto T62;
T62:;
	base[1]= (V50);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk374)(Lclptr374);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T89;}
	base[1]= (V50);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T89;
T89:;
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
	{register object V55;
	check_arg(1);
	V55=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V55))==(Ct))){
	goto T93;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T93;
T93:;
	if(!(type_of((V55))==t_cons)){
	goto T96;}
	{register object x= CMPcar((V55)),V56= VV[15];
	while(V56!=Cnil)
	if(eql(x,V56->c.c_car)){
	goto T98;
	}else V56=V56->c.c_cdr;}
	base[1]= VV[16];
	base[2]= (V55);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T98;
T98:;
	base[1]= (V55);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T96;
T96:;
	if(!(type_of((V55))==t_symbol)){
	goto T106;}
	V55= (VFUN_NARGS=1,(*(LnkLI366))((V55)));
	goto T106;
T106:;
	if(!(((((VV[17]->s.s_dbind))==(VV[18])?Ct:Cnil))==Cnil)){
	goto T110;}
	goto T105;
	goto T110;
T110:;
	base[1]= (V55);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk374)(Lclptr374);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T104;}
	goto T105;
T105:;
	base[1]= (V55);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk375)(Lclptr375);
	return;
	goto T104;
T104:;
	base[1]= VV[19];
	base[2]= (V55);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local entry for function TYPE-CLASS	*/

static object LI11(V58)

register object V58;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V58);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk376)();
	vs_top=sup;
	V58= vs_base[0];
	if(!(type_of((V58))!=t_cons)){
	goto T120;}
	if(!(((V58))==(Ct))){
	goto T123;}
	{object V59 = (VV[20]->s.s_dbind);
	VMR11(V59)}
	goto T123;
T123:;
	base[0]= VV[21];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V60 = vs_base[0];
	VMR11(V60)}
	goto T120;
T120:;
	{object V61= CMPcar((V58));
	if((V61!= VV[371]))goto T126;
	{object V62 = (*(LnkLI377))(CMPcadr((V58)));
	VMR11(V62)}
	goto T126;
T126:;
	if((V61!= VV[116]))goto T127;
	{object V63 = (*(LnkLI377))(CMPcadr((V58)));
	VMR11(V63)}
	goto T127;
T127:;
	if((V61!= VV[370]))goto T128;
	{object V64 = CMPcadr((V58));
	VMR11(V64)}
	goto T128;
T128:;
	if((V61!= VV[37]))goto T129;
	{object V65 = CMPcadr((V58));
	VMR11(V65)}
	goto T129;
T129:;
	{object V66 = Cnil;
	VMR11(V66)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CLASS-EQ-TYPE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V67;
	check_arg(1);
	V67=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V67);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk87)(Lclptr87);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk375)(Lclptr375);
	return;
	}
}
/*	local entry for function INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS	*/

static object LI13(V69)

object V69;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V70;
	V70= (VFUN_NARGS=1,(*(LnkLI378))((V69)));
	{object V72;
	V72= (*(LnkLI379))((V69));
	V73= ({object _tmp=get(VV[380],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[380])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[380])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V74 = V73,
	(type_of(V74) == t_sfun ?(*((V74)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V74)==t_vfun) ?
	(*((V74)->sfn.sfn_self)):
	(fcall.fun=(V74),fcalln))((V72),V70)));}
	{object V75 = (*(LnkLI381))((V69),(V70));
	VMR13(V75)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-TYPE-PREDICATE	*/

static object LI14(V77)

object V77;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= (VFUN_NARGS=1,(*(LnkLI382))((V77)));
	base[0]=MMcons(base[0],Cnil);
	{object V78 = 
	make_cclosure_new(LC80,Cnil,base[0],Cdata);
	VMR14(V78)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-PREDICATE	*/

static object LI16(V80)

object V80;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]=MMcons((V80),Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T137;}
	(base[0]->c.c_car)= (VFUN_NARGS=1,(*(LnkLI366))((base[0]->c.c_car)));
	goto T137;
T137:;
	{object V81 = 
	make_cclosure_new(LC81,Cnil,base[0],Cdata);
	VMR15(V81)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-CLASS-EQ-PREDICATE	*/

static object LI18(V83)

object V83;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]=MMcons((V83),Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T141;}
	(base[0]->c.c_car)= (VFUN_NARGS=1,(*(LnkLI366))((base[0]->c.c_car)));
	goto T141;
T141:;
	{object V84 = 
	make_cclosure_new(LC82,Cnil,base[0],Cdata);
	VMR16(V84)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EQL-PREDICATE	*/

static object LI20(V86)

object V86;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]=MMcons((V86),Cnil);
	{object V87 = 
	make_cclosure_new(LC83,Cnil,base[0],Cdata);
	VMR17(V87)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G2537	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V88;
	check_arg(1);
	V88=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= list(2,VV[22],(V88));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for *NORMALIZE-TYPE	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V89;
	check_arg(1);
	V89=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V89))==t_cons)){
	goto T146;}
	{register object x= CMPcar((V89)),V90= VV[23];
	while(V90!=Cnil)
	if(eql(x,V90->c.c_car)){
	goto T150;
	}else V90=V90->c.c_cdr;
	goto T149;}
	goto T150;
T150:;
	V91= CMPcar((V89));
	{object V93;
	object V94= CMPcdr((V89));
	if(V94==Cnil){
	V92= Cnil;
	goto T151;}
	base[1]=V93=MMcons(Cnil,Cnil);
	goto T152;
T152:;
	base[2]= (V94->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk383)();
	vs_top=sup;
	(V93->c.c_car)= vs_base[0];
	if((V94=MMcdr(V94))==Cnil){
	V92= base[1];
	goto T151;}
	V93=MMcdr(V93)=MMcons(Cnil,Cnil);
	goto T152;}
	goto T151;
T151:;
	base[1]= make_cons(/* INLINE-ARGS */V91,V92);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T149;
T149:;
	if((CMPcdr((V89)))!=Cnil){
	goto T156;}
	V89= CMPcar((V89));
	goto TTL;
	goto T156;
T156:;
	base[1]= (V89);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T146;
T146:;
	if(!(type_of((V89))==t_symbol)){
	goto T161;}
	{object V95;
	V95= (VFUN_NARGS=2,(*(LnkLI366))((V89),Cnil));
	if(((V95))==Cnil){
	goto T165;}
	{object V96;
	base[1]= (V95);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk375)(Lclptr375);
	vs_top=sup;
	V96= vs_base[0];
	if(!(type_of((V96))==t_cons||((V96))==Cnil)){
	goto T170;}
	base[1]= (V96);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T170;
T170:;
	base[1]= make_cons((V96),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T165;
T165:;
	base[1]= make_cons((V89),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T161;
T161:;
	if(!(((VV[17]->s.s_dbind))==(VV[18]))){
	goto T172;}
	base[1]= (V89);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk374)(Lclptr374);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T173;}
	goto T172;
T172:;
	base[1]= (V89);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk375)(Lclptr375);
	return;
	goto T173;
T173:;
	base[1]= VV[24];
	base[2]= (V89);
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
	{register object V97;
	check_arg(1);
	V97=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V98= CMPcar((V97));
	if((V98!= VV[384])
	&& (V98!= VV[385])
	&& (V98!= VV[386]))goto T181;
	V99= CMPcar((V97));
	{object V101;
	object V102= CMPcdr((V97));
	if(V102==Cnil){
	V100= Cnil;
	goto T182;}
	base[1]=V101=MMcons(Cnil,Cnil);
	goto T183;
T183:;
	base[2]= (V102->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk387)();
	vs_top=sup;
	(V101->c.c_car)= vs_base[0];
	if((V102=MMcdr(V102))==Cnil){
	V100= base[1];
	goto T182;}
	V101=MMcdr(V101)=MMcons(Cnil,Cnil);
	goto T183;}
	goto T182;
T182:;
	base[1]= make_cons(/* INLINE-ARGS */V99,V100);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T181;
T181:;
	if((V98!= VV[37])
	&& (V98!= VV[370]))goto T186;
	base[1]= CMPcadr((V97));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk388)(Lclptr388);
	return;
	goto T186;
T186:;
	if((V98!= VV[371]))goto T188;
	base[1]= (V97);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T188;
T188:;
	if((CMPcdr((V97)))!=Cnil){
	goto T190;}
	base[1]= CMPcar((V97));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T190;
T190:;
	base[1]= (V97);
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
	{register object V103;
	register object V104;
	check_arg(2);
	V103=(base[0]);
	V104=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(equal((V103),(V104)))){
	goto T193;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T193;
T193:;
	if(!(((VV[17]->s.s_dbind))==(VV[25]))){
	goto T198;}
	base[2]= (((V103))==((V104))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T198;
T198:;
	bds_bind(VV[26],Ct);
	base[3]= (V103);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk383)();
	vs_top=sup;
	V103= vs_base[0];
	base[3]= (V104);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk383)();
	vs_top=sup;
	V104= vs_base[0];
	{object V105= CMPcar((V104));
	if((V105!= VV[384]))goto T208;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;
	goto T208;
T208:;
	if((V105!= VV[385]))goto T211;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;
	goto T211;
T211:;
	if((V105!= VV[371])
	&& (V105!= VV[389])
	&& (V105!= VV[370])
	&& (V105!= VV[37]))goto T214;
	{object V106;
	object V107;
	base[3]= (V104);
	base[4]= (V103);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk390)();
	if(vs_base>=vs_top){vs_top=sup;goto T218;}
	V106= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T219;}
	V107= vs_base[0];
	vs_top=sup;
	goto T220;
	goto T218;
T218:;
	V106= Cnil;
	goto T219;
T219:;
	V107= Cnil;
	goto T220;
T220:;
	base[3]= (V106);
	if((V106)!=Cnil){
	base[4]= (V106);
	goto T222;}
	base[4]= (((V107))==Cnil?Ct:Cnil);
	goto T222;
T222:;
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;}
	goto T214;
T214:;
	base[4]= (V103);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk387)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= (V104);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk387)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk391)();
	bds_unwind1;
	return;}
	}
}
/*	local entry for function DO-SATISFIES-DEFTYPE	*/

static object LI25(V110,V111)

object V110;object V111;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= list(4,VV[27],(V110),Cnil,list(2,VV[28],list(2,VV[29],(V111))));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	{object V112 = vs_base[0];
	VMR22(V112)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-TYPE-PREDICATE-NAME	*/

static object LI26(object V113,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{register object V114;
	object V115;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V114= V113;
	narg = narg - 1;
	if (narg <= 0) goto T228;
	else {
	V115= first;}
	--narg; goto T229;
	goto T228;
T228:;
	V115= Cnil;
	goto T229;
T229:;
	base[0]= (V114);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T232;}
	base[1]= Cnil;
	base[2]= VV[30];
	base[3]= (V115);
	base[6]= (V114);
	vs_top=(vs_base=base+6)+1;
	Lsymbol_package();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= symbol_name((V114));
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V116 = vs_base[0];
	VMR23(V116)}
	goto T232;
T232:;
	base[1]= Cnil;
	base[2]= VV[32];
	base[3]= (V115);
	base[4]= symbol_name((V114));
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lmake_symbol();
	vs_top=sup;
	{object V117 = vs_base[0];
	VMR23(V117)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GET-BUILT-IN-CLASS-SYMBOL	*/

static object LI27(V119)

object V119;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;{object V120;
	{register object x= (V119),V122= (VV[33]->s.s_dbind);
	while(V122!=Cnil)
	if(EQ(x,V122->c.c_car->c.c_car) &&V122->c.c_car != Cnil){
	V121= (V122->c.c_car);
	goto T251;
	}else V122=V122->c.c_cdr;
	V121= Cnil;}
	goto T251;
T251:;
	V120= CMPcadr(V121);
	if(V120==Cnil)goto T249;
	{object V123 = V120;
	VMR24(V123)}
	goto T249;
T249:;}
	{object V124;
	base[1]= Cnil;
	base[2]= VV[34];
	base[3]= symbol_name((V119));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V124= vs_base[0];
	{object V125;
	V125= list(2,(V119),(V124));
	(VV[33]->s.s_dbind)= make_cons((V125),(VV[33]->s.s_dbind));}
	{object V126 = (V124);
	VMR24(V126)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-BUILT-IN-WRAPPER-SYMBOL	*/

static object LI28(V128)

object V128;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;{object V129;
	{register object x= (V128),V131= (VV[35]->s.s_dbind);
	while(V131!=Cnil)
	if(EQ(x,V131->c.c_car->c.c_car) &&V131->c.c_car != Cnil){
	V130= (V131->c.c_car);
	goto T263;
	}else V131=V131->c.c_cdr;
	V130= Cnil;}
	goto T263;
T263:;
	V129= CMPcadr(V130);
	if(V129==Cnil)goto T261;
	{object V132 = V129;
	VMR25(V132)}
	goto T261;
T261:;}
	{object V133;
	base[1]= Cnil;
	base[2]= VV[36];
	base[3]= symbol_name((V128));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V133= vs_base[0];
	{object V134;
	V134= list(2,(V128),(V133));
	(VV[35]->s.s_dbind)= make_cons((V134),(VV[35]->s.s_dbind));}
	{object V135 = (V133);
	VMR25(V135)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-CLASS	*/

static object LI29(V138,V139)

object V138;object V139;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	V140= (*(LnkLI392))(VV[37],(V138),(V139));
	{object V141 = CMPcaddr(/* INLINE-ARGS */V140);
	VMR26(V141)}
	return Cnil;
}
/*	macro definition for DEFINE-GF-PREDICATE	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V142=base[0]->c.c_cdr;
	if(endp(V142))invalid_macro_call();
	base[2]= (V142->c.c_car);
	V142=V142->c.c_cdr;
	base[3]= V142;}
	V143= listA(3,VV[39],base[2],VV[40]);
	{object V145;
	object V146= base[3];
	if(V146==Cnil){
	V144= Cnil;
	goto T273;}
	base[4]=V145=MMcons(Cnil,Cnil);
	goto T274;
T274:;
	V148= list(2,VV[41],(V146->c.c_car));
	(V145->c.c_car)= list(4,VV[39],base[2],make_cons(/* INLINE-ARGS */V148,Cnil),Ct);
	if((V146=MMcdr(V146))==Cnil){
	V144= base[4];
	goto T273;}
	V145=MMcdr(V145)=MMcons(Cnil,Cnil);
	goto T274;}
	goto T273;
T273:;
	base[4]= listA(3,VV[38],/* INLINE-ARGS */V143,V144);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-CLASS-PREDICATE-NAME	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V149;
	check_arg(1);
	V149=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= Cnil;
	base[3]= VV[42];
	base[6]= (V149);
	vs_top=(vs_base=base+6)+1;
	Lsymbol_package();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V149);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lintern();
	return;
	}
}
/*	local entry for function PLIST-VALUE	*/

static object LI32(V152,V153)

object V152;object V153;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	base[1]= (V152);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V153);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	{object V154 = vs_base[0];
	VMR29(V154)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G2549	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V155;
	object V156;
	object V157;
	check_arg(3);
	V155=(base[0]);
	V156=(base[1]);
	V157=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V155))==Cnil){
	goto T288;}
	{object V161;
	base[4]= V156;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= V155;
	base[5]= V157;
	vs_top=(vs_base=base+3)+3;
	siLput_f();
	vs_top=sup;
	V161= vs_base[0];
	V162= ({object _tmp=get(VV[393],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[393])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[393])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V163 = V162,
	(type_of(V163) == t_sfun ?(*((V163)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V163)==t_vfun) ?
	(*((V163)->sfn.sfn_self)):
	(fcall.fun=(V163),fcalln))((V161),V156)));
	base[3]= V155;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T288;
T288:;
	{object V165;
	object V166;
	base[4]= V156;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V157);
	vs_top=(vs_base=base+3)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T302;}
	V165= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T303;}
	V166= vs_base[0];
	vs_top=sup;
	goto T304;
	goto T302;
T302:;
	V165= Cnil;
	goto T303;
T303:;
	V166= Cnil;
	goto T304;
T304:;
	V167= ({object _tmp=get(VV[393],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[393])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[393])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V168 = V167,
	(type_of(V168) == t_sfun ?(*((V168)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V168)==t_vfun) ?
	(*((V168)->sfn.sfn_self)):
	(fcall.fun=(V168),fcalln))((V165),V156)));}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for Defclass T2557	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Ct;
	base[1]= VV[43];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass SLOT-OBJECT2557	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[44];
	base[1]= VV[45];
	base[2]= VV[46];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-OBJECT2557	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[47];
	base[1]= VV[48];
	base[2]= VV[49];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
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
	base[0]= VV[47];
	vs_top=(vs_base=base+0)+1;
	siLmake_structure();
	vs_top=sup;
	{object V169 = vs_base[0];
	VMR34(V169)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}}
/*	function definition for Defclass STANDARD-OBJECT2557	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[50];
	base[1]= VV[51];
	base[2]= VV[52];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass METAOBJECT2557	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[53];
	base[1]= VV[51];
	base[2]= VV[54];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass SPECIALIZER2557	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[55];
	base[1]= VV[51];
	base[2]= VV[56];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[58];
	base[8]= VV[59];
	base[9]= VV[60];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[63];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V170= vs_base[0];
	base[3]= make_cons(V170,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass DEFINITION-SOURCE-MIXIN2558	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V171;
	V171= VV[396];
	base[0]= VV[64];
	base[1]= VV[51];
	base[2]= VV[65];
	base[4]= VV[57];
	base[5]= (V171);
	base[6]= VV[8];
	base[7]= VV[66];
	base[8]= VV[59];
	base[9]= VV[67];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[68];
	base[14]= VV[69];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V172= vs_base[0];
	base[3]= make_cons(V172,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;}
}
/*	function definition for Defclass PLIST-MIXIN2558	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[70];
	base[1]= VV[51];
	base[2]= VV[71];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[72];
	base[8]= VV[59];
	base[9]= VV[73];
	base[10]= VV[61];
	base[11]= VV[74];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[75];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V173= vs_base[0];
	base[3]= make_cons(V173,Cnil);
	base[4]= Cnil;
	base[5]= VV[76];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass DOCUMENTATION-MIXIN2558	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[77];
	base[1]= VV[51];
	base[2]= VV[78];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass DEPENDENT-UPDATE-MIXIN2558	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[79];
	base[1]= VV[51];
	base[2]= VV[80];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass CLASS2559	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V174;
	V174= VV[397];
	base[0]= VV[37];
	base[1]= VV[51];
	base[2]= VV[81];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[82];
	base[8]= VV[59];
	base[9]= VV[83];
	base[10]= VV[61];
	base[11]= VV[84];
	base[12]= VV[62];
	base[13]= VV[85];
	base[14]= VV[86];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V175= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[87];
	base[8]= VV[59];
	base[9]= VV[88];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[89];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V176= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[90];
	base[8]= VV[59];
	base[9]= VV[91];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[92];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V177= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[93];
	base[8]= VV[59];
	base[9]= VV[94];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[95];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V178= vs_base[0];
	base[4]= VV[57];
	base[5]= (V174);
	base[6]= VV[8];
	base[7]= VV[96];
	base[8]= VV[59];
	base[9]= Cnil;
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[97];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V179= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[98];
	base[8]= VV[59];
	base[9]= VV[99];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[100];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V180= vs_base[0];
	base[3]= list(6,V175,V176,V177,V178,V179,V180);
	base[4]= Cnil;
	base[5]= VV[101];
	symlispcall(VV[394],base+0,6);
	return;}
}
/*	function definition for Defclass PCL-CLASS2559	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[102];
	base[1]= VV[51];
	base[2]= VV[103];
	V181= listA(9,VV[8],VV[104],VV[59],VV[105],VV[61],Cnil,VV[62],Cnil,Cnil);
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[106];
	base[8]= VV[59];
	base[9]= VV[107];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[108];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V182= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[109];
	base[8]= VV[59];
	base[9]= VV[110];
	base[10]= VV[61];
	base[11]= VV[111];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[112];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V183= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[113];
	base[8]= VV[59];
	base[9]= VV[114];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[115];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V184= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[116];
	base[8]= VV[59];
	base[9]= VV[117];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[118];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V185= vs_base[0];
	base[3]= list(5,/* INLINE-ARGS */V181,V182,V183,V184,V185);
	base[4]= Cnil;
	base[5]= VV[119];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass SLOT-CLASS2559	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[45];
	base[1]= VV[51];
	base[2]= VV[120];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[121];
	base[8]= VV[59];
	base[9]= VV[122];
	base[10]= VV[61];
	base[11]= VV[123];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[124];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V186= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[125];
	base[8]= VV[59];
	base[9]= VV[126];
	base[10]= VV[61];
	base[11]= VV[127];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[128];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V187= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[129];
	base[8]= VV[59];
	base[9]= VV[130];
	base[10]= VV[61];
	base[11]= VV[131];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[132];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V188= vs_base[0];
	base[3]= list(3,V186,V187,V188);
	base[4]= Cnil;
	base[5]= VV[133];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STD-CLASS2559	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[134];
	base[1]= VV[51];
	base[2]= VV[135];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-CLASS2559	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= VV[51];
	base[2]= VV[136];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass FUNCALLABLE-STANDARD-CLASS2559	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[137];
	base[1]= VV[51];
	base[2]= VV[138];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass FORWARD-REFERENCED-CLASS2559	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[139];
	base[1]= VV[51];
	base[2]= VV[140];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass BUILT-IN-CLASS2559	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[43];
	base[1]= VV[51];
	base[2]= VV[141];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-CLASS2559	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[48];
	base[1]= VV[51];
	base[2]= VV[142];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[143];
	base[8]= VV[59];
	base[9]= VV[144];
	base[10]= VV[61];
	base[11]= VV[145];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[146];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V189= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[147];
	base[8]= VV[59];
	base[9]= VV[148];
	base[10]= VV[61];
	base[11]= VV[149];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[150];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V190= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[151];
	base[8]= VV[59];
	base[9]= Cnil;
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[152];
	base[14]= VV[153];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V191= vs_base[0];
	base[3]= list(3,V189,V190,V191);
	base[4]= Cnil;
	base[5]= VV[154];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass SPECIALIZER-WITH-OBJECT2559	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[155];
	base[1]= VV[51];
	base[2]= VV[156];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass EXACT-CLASS-SPECIALIZER2559	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[157];
	base[1]= VV[51];
	base[2]= VV[158];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass CLASS-EQ-SPECIALIZER2559	*/

static void L56()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[87];
	base[1]= VV[51];
	base[2]= VV[159];
	V192= listA(9,VV[8],VV[160],VV[59],VV[161],VV[61],Cnil,VV[62],VV[162],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V192,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass CLASS-PROTOTYPE-SPECIALIZER2559	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[5];
	base[1]= VV[51];
	base[2]= VV[163];
	V193= listA(9,VV[8],VV[160],VV[59],VV[164],VV[61],Cnil,VV[62],VV[165],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V193,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass EQL-SPECIALIZER2559	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[166];
	base[1]= VV[51];
	base[2]= VV[167];
	V194= listA(9,VV[8],VV[160],VV[59],VV[168],VV[61],Cnil,VV[62],VV[169],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V194,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	local entry for function INTERN-EQL-SPECIALIZER	*/

static object LI59(V196)

object V196;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;{object V197;
	base[0]= (V196);
	base[1]= (VV[170]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V197= vs_base[0];
	if(V197==Cnil)goto T682;
	{object V198 = V197;
	VMR56(V198)}
	goto T682;
T682:;}
	{object V200;
	object V201;
	V200= (VV[170]->s.s_dbind);
	base[1]= VV[166];
	base[2]= VV[6];
	base[3]= (V196);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk369)(Lclptr369);
	vs_top=sup;
	V201= vs_base[0];
	base[1]= V196;
	base[2]= (V200);
	base[3]= (V201);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V202 = vs_base[0];
	VMR56(V202)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass SLOT-DEFINITION2564	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V203;
	V203= VV[398];
	base[0]= VV[172];
	base[1]= VV[51];
	base[2]= VV[173];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[82];
	base[8]= VV[59];
	base[9]= VV[174];
	base[10]= VV[61];
	base[11]= VV[175];
	base[12]= VV[62];
	base[13]= VV[176];
	base[14]= VV[177];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V204= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[178];
	base[8]= VV[59];
	base[9]= VV[179];
	base[10]= VV[61];
	base[11]= VV[180];
	base[12]= VV[62];
	base[13]= VV[181];
	base[14]= VV[182];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V205= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[183];
	base[8]= VV[59];
	base[9]= VV[184];
	base[10]= VV[61];
	base[11]= VV[185];
	base[12]= VV[62];
	base[13]= VV[186];
	base[14]= VV[187];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V206= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[188];
	base[8]= VV[59];
	base[9]= VV[189];
	base[10]= VV[61];
	base[11]= VV[190];
	base[12]= VV[62];
	base[13]= VV[191];
	base[14]= VV[192];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V207= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[193];
	base[8]= VV[59];
	base[9]= VV[194];
	base[10]= VV[61];
	base[11]= VV[195];
	base[12]= VV[62];
	base[13]= VV[196];
	base[14]= VV[197];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V208= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[198];
	base[8]= VV[59];
	base[9]= VV[199];
	base[10]= VV[61];
	base[11]= VV[200];
	base[12]= VV[62];
	base[13]= VV[201];
	base[14]= VV[202];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V209= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[399]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[58];
	base[8]= VV[59];
	base[9]= VV[203];
	base[10]= VV[61];
	base[11]= VV[204];
	base[12]= VV[62];
	base[13]= VV[205];
	base[14]= VV[206];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V210= vs_base[0];
	base[4]= VV[57];
	base[5]= (V203);
	base[6]= VV[8];
	base[7]= VV[207];
	base[8]= VV[59];
	base[9]= Cnil;
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[208];
	base[14]= VV[209];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V211= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[37];
	base[8]= VV[59];
	base[9]= VV[210];
	base[10]= VV[61];
	base[11]= VV[211];
	base[12]= VV[62];
	base[13]= VV[212];
	base[14]= VV[213];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V212= vs_base[0];
	base[3]= list(9,V204,V205,V206,V207,V208,V209,V210,V211,V212);
	base[4]= Cnil;
	base[5]= VV[214];
	symlispcall(VV[394],base+0,6);
	return;}
}
/*	function definition for Defclass STANDARD-SLOT-DEFINITION2565	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V213;
	V213= VV[400];
	base[0]= VV[216];
	base[1]= VV[51];
	base[2]= VV[217];
	base[4]= VV[57];
	base[5]= (V213);
	base[6]= VV[8];
	base[7]= VV[218];
	base[8]= VV[59];
	base[9]= VV[219];
	base[10]= VV[61];
	base[11]= VV[220];
	base[12]= VV[62];
	base[13]= VV[221];
	base[14]= VV[222];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V214= vs_base[0];
	base[3]= make_cons(V214,Cnil);
	base[4]= Cnil;
	base[5]= VV[223];
	symlispcall(VV[394],base+0,6);
	return;}
}
/*	function definition for Defclass STRUCTURE-SLOT-DEFINITION2565	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[224];
	base[1]= VV[51];
	base[2]= VV[225];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[226];
	base[8]= VV[59];
	base[9]= VV[227];
	base[10]= VV[61];
	base[11]= VV[228];
	base[12]= VV[62];
	base[13]= VV[229];
	base[14]= VV[230];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V215= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[231];
	base[8]= VV[59];
	base[9]= VV[232];
	base[10]= VV[61];
	base[11]= VV[233];
	base[12]= VV[62];
	base[13]= VV[234];
	base[14]= VV[235];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V216= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[236];
	base[8]= VV[59];
	base[9]= VV[237];
	base[10]= VV[61];
	base[11]= VV[238];
	base[12]= VV[62];
	base[13]= VV[239];
	base[14]= VV[240];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V217= vs_base[0];
	base[3]= list(3,V215,V216,V217);
	base[4]= Cnil;
	base[5]= VV[241];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass DIRECT-SLOT-DEFINITION2565	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[242];
	base[1]= VV[51];
	base[2]= VV[243];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass EFFECTIVE-SLOT-DEFINITION2565	*/

static void L64()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[244];
	base[1]= VV[51];
	base[2]= VV[245];
	V218= listA(9,VV[8],VV[246],VV[59],VV[247],VV[61],VV[248],VV[62],Cnil,Cnil);
	V219= listA(9,VV[8],VV[249],VV[59],VV[250],VV[61],VV[251],VV[62],Cnil,Cnil);
	V220= listA(9,VV[8],VV[252],VV[59],VV[253],VV[61],VV[254],VV[62],Cnil,Cnil);
	base[4]= VV[57];
	base[5]= (VV[401]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[255];
	base[8]= VV[59];
	base[9]= Cnil;
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[256];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V221= vs_base[0];
	base[3]= list(4,/* INLINE-ARGS */V218,/* INLINE-ARGS */V219,/* INLINE-ARGS */V220,V221);
	base[4]= Cnil;
	base[5]= VV[257];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-DIRECT-SLOT-DEFINITION2565	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[258];
	base[1]= VV[51];
	base[2]= VV[259];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-EFFECTIVE-SLOT-DEFINITION2565	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[260];
	base[1]= VV[51];
	base[2]= VV[261];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[262];
	base[8]= VV[59];
	base[9]= VV[263];
	base[10]= VV[61];
	base[11]= VV[264];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[265];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V222= vs_base[0];
	base[3]= make_cons(V222,Cnil);
	base[4]= Cnil;
	base[5]= VV[266];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-DIRECT-SLOT-DEFINITION2565	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[267];
	base[1]= VV[51];
	base[2]= VV[268];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STRUCTURE-EFFECTIVE-SLOT-DEFINITION2565	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[269];
	base[1]= VV[51];
	base[2]= VV[270];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass METHOD2565	*/

static void L69()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[271];
	base[1]= VV[51];
	base[2]= VV[272];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-METHOD2565	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[273];
	base[1]= VV[51];
	base[2]= VV[274];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[275];
	base[8]= VV[59];
	base[9]= VV[276];
	base[10]= VV[61];
	base[11]= VV[277];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[278];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V223= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[279];
	base[8]= VV[59];
	base[9]= VV[280];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[281];
	base[14]= VV[282];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V224= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[283];
	base[8]= VV[59];
	base[9]= VV[284];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[285];
	base[14]= VV[286];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V225= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[287];
	base[8]= VV[59];
	base[9]= Cnil;
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[288];
	base[14]= VV[289];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V226= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[290];
	base[8]= VV[59];
	base[9]= VV[291];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[292];
	base[14]= VV[293];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V227= vs_base[0];
	base[3]= list(5,V223,V224,V225,V226,V227);
	base[4]= Cnil;
	base[5]= VV[294];
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-ACCESSOR-METHOD2565	*/

static void L71()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[295];
	base[1]= VV[51];
	base[2]= VV[296];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[297];
	base[8]= VV[59];
	base[9]= VV[298];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[299];
	base[14]= VV[300];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V228= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[172];
	base[8]= VV[59];
	base[9]= VV[301];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= VV[302];
	base[14]= VV[303];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V229= vs_base[0];
	base[3]= list(2,V228,V229);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-READER-METHOD2565	*/

static void L72()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[304];
	base[1]= VV[51];
	base[2]= VV[305];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-WRITER-METHOD2565	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[306];
	base[1]= VV[51];
	base[2]= VV[307];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-BOUNDP-METHOD2565	*/

static void L74()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[308];
	base[1]= VV[51];
	base[2]= VV[309];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass GENERIC-FUNCTION2565	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[275];
	base[1]= VV[137];
	base[2]= VV[310];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-GENERIC-FUNCTION2568	*/

static void L76()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V230;
	object V231;
	object V232;
	V230= VV[402];
	V231= VV[403];
	V232= VV[404];
	base[0]= VV[313];
	base[1]= VV[137];
	base[2]= VV[314];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[82];
	base[8]= VV[59];
	base[9]= VV[315];
	base[10]= VV[61];
	base[11]= VV[316];
	base[12]= VV[62];
	base[13]= VV[317];
	base[14]= VV[318];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V233= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[319];
	base[8]= VV[59];
	base[9]= VV[320];
	base[10]= VV[61];
	base[11]= VV[321];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[322];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V234= vs_base[0];
	V235= listA(9,VV[8],VV[323],VV[59],VV[324],VV[61],VV[325],VV[62],VV[326],Cnil);
	V236= listA(9,VV[8],VV[327],VV[59],VV[328],VV[61],VV[329],VV[62],VV[330],Cnil);
	base[4]= VV[57];
	base[5]= (V232);
	base[6]= VV[8];
	base[7]= VV[331];
	base[8]= VV[59];
	base[9]= VV[332];
	base[10]= VV[61];
	base[11]= Cnil;
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[333];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V237= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[334];
	base[8]= VV[59];
	base[9]= VV[335];
	base[10]= VV[61];
	base[11]= VV[336];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[337];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V238= vs_base[0];
	base[4]= VV[57];
	base[5]= (VV[395]->s.s_gfdef);
	base[6]= VV[8];
	base[7]= VV[338];
	base[8]= VV[59];
	base[9]= VV[339];
	base[10]= VV[61];
	base[11]= VV[340];
	base[12]= VV[62];
	base[13]= Cnil;
	base[14]= VV[341];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V239= vs_base[0];
	base[3]= list(7,V233,V234,/* INLINE-ARGS */V235,/* INLINE-ARGS */V236,V237,V238,V239);
	V240= list(3,VV[343],(V231),VV[312]);
	base[4]= list(2,VV[342],list(2,/* INLINE-ARGS */V240,list(3,VV[344],(V230),VV[311])));
	base[5]= VV[345];
	symlispcall(VV[394],base+0,6);
	return;}
}
/*	function definition for Defclass METHOD-COMBINATION2568	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[327];
	base[1]= VV[51];
	base[2]= VV[346];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass STANDARD-METHOD-COMBINATION2568	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[347];
	base[1]= VV[51];
	base[2]= VV[348];
	V241= listA(9,VV[8],VV[58],VV[59],VV[349],VV[61],Cnil,VV[62],VV[350],Cnil);
	V242= listA(9,VV[8],VV[207],VV[59],VV[351],VV[61],Cnil,VV[62],VV[352],Cnil);
	base[3]= list(3,/* INLINE-ARGS */V241,/* INLINE-ARGS */V242,listA(9,VV[8],VV[353],VV[59],VV[354],VV[61],Cnil,VV[62],VV[355],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	function definition for Defclass LONG-METHOD-COMBINATION2568	*/

static void L79()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[356];
	base[1]= VV[51];
	base[2]= VV[357];
	V243= listA(9,VV[8],VV[287],VV[59],VV[358],VV[61],Cnil,VV[62],VV[359],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V243,listA(9,VV[8],VV[360],VV[59],VV[361],VV[61],Cnil,VV[62],VV[362],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[394],base+0,6);
	return;
}
/*	local function CLOSURE	*/

static void LC90(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (*(LnkLI405))();
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC89(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (VV[312]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC88(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (VV[311]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC87(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= VV[215];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC86(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= VV[171];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= make_cons(Cnil,Cnil);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC84(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	check_arg(0);
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk406)();
	return;
}
/*	local function CLOSURE	*/

static void LC83(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_check;
	{object V244;
	check_arg(1);
	V244=(base[0]);
	vs_top=sup;
	base[1]= (eql((base0[0]->c.c_car),(V244))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	{object V245;
	check_arg(1);
	V245=(base[0]);
	vs_top=sup;
	V246= (*(LnkLI377))((V245));
	base[1]= (((base0[0]->c.c_car))==(/* INLINE-ARGS */V246)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC81(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	{object V247;
	check_arg(1);
	V247=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI377))((V247));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	V249= vs_base[0];
	{register object x= (base0[0]->c.c_car),V248= V249;
	while(V248!=Cnil)
	if(x==(V248->c.c_car)){
	base[1]= V248;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V248=V248->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC80(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_check;
	{object V250;
	check_arg(1);
	V250=(base[0]);
	vs_top=sup;
	base[1]= CMPcadr((base0[0]->c.c_car));
	base[2]= (V250);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* CLASS-PRECEDENCE-LIST */
static void LnkT406(){ call_or_link(VV[406],(void **)(void *)&Lnk406);} /* LOAD-TRUENAME */
static object  LnkTLI405(){return call_proc0(VV[405],(void **)(void *)&LnkLI405);} /* MAKE-ARG-INFO */
static void LnkT393(ptr) object *ptr;{ call_or_link_closure(VV[393],(void **)(void *)&Lnk393,(void **)(void *)&Lclptr393);} /* OBJECT-PLIST */
static object  LnkTLI392(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[392],(void **)(void *)&LnkLI392,3,first,ap);va_end(ap);return V1;} /* VARIABLE-DECLARATION */
static void LnkT391(){ call_or_link(VV[391],(void **)(void *)&Lnk391);} /* SUBTYPEP */
static void LnkT390(){ call_or_link(VV[390],(void **)(void *)&Lnk390);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT388(ptr) object *ptr;{ call_or_link_closure(VV[388],(void **)(void *)&Lnk388,(void **)(void *)&Lclptr388);} /* CLASS-NAME */
static void LnkT387(){ call_or_link(VV[387],(void **)(void *)&Lnk387);} /* CONVERT-TO-SYSTEM-TYPE */
static void LnkT383(){ call_or_link(VV[383],(void **)(void *)&Lnk383);} /* *NORMALIZE-TYPE */
static object  LnkTLI382(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[382],(void **)(void *)&LnkLI382,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI381(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[381],(void **)(void *)&LnkLI381,2,first,ap);va_end(ap);return V1;} /* DO-SATISFIES-DEFTYPE */
static object  LnkTLI379(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[379],(void **)(void *)&LnkLI379,1,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE */
static object  LnkTLI378(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[378],(void **)(void *)&LnkLI378,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE-NAME */
static object  LnkTLI377(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[377],(void **)(void *)&LnkLI377,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT376(){ call_or_link(VV[376],(void **)(void *)&Lnk376);} /* TYPE-FROM-SPECIALIZER */
static void LnkT375(ptr) object *ptr;{ call_or_link_closure(VV[375],(void **)(void *)&Lnk375,(void **)(void *)&Lclptr375);} /* SPECIALIZER-TYPE */
static void LnkT374(ptr) object *ptr;{ call_or_link_closure(VV[374],(void **)(void *)&Lnk374,(void **)(void *)&Lclptr374);} /* SPECIALIZERP */
static void LnkT373(){ call_or_link(VV[373],(void **)(void *)&Lnk373);} /* ERROR */
static object  LnkTLI372(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[372],(void **)(void *)&LnkLI372,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static void LnkT87(ptr) object *ptr;{ call_or_link_closure(VV[87],(void **)(void *)&Lnk87,(void **)(void *)&Lclptr87);} /* CLASS-EQ-SPECIALIZER */
static void LnkT369(ptr) object *ptr;{ call_or_link_closure(VV[369],(void **)(void *)&Lnk369,(void **)(void *)&Lclptr369);} /* MAKE-INSTANCE */
static void LnkT368(){ call_or_link(VV[368],(void **)(void *)&Lnk368);} /* COERCE-TO-CLASS */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* ENSURE-CLASS */
static object  LnkTLI366(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[366],(void **)(void *)&LnkLI366,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI365(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[365],(void **)(void *)&LnkLI365,2,first,ap);va_end(ap);return V1;} /* FDEFINE-CAREFULLY */
static object  LnkTLI364(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[364],(void **)(void *)&LnkLI364,1,first,ap);va_end(ap);return V1;} /* UNENCAPSULATED-FDEFINITION */
static void LnkT363(){ call_or_link(VV[363],(void **)(void *)&Lnk363);} /* FDEFINITION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

