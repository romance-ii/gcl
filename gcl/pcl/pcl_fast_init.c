
#include "cmpinclude.h"
#include "pcl_fast_init.h"
void init_pcl_fast_init(){do_init(VV);}
/*	function definition for UPDATE-MAKE-INSTANCE-FUNCTION-TABLE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{register object V1;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V1=(base[0]);
	vs_top=sup;
	goto T2;
	goto T1;
T1:;
	V1= (VV[0]->s.s_dbind);
	goto T2;
T2:;
	if(!(type_of((V1))==t_symbol)){
	goto T4;}
	V1= (VFUN_NARGS=1,(*(LnkLI243))((V1)));
	goto T4;
T4:;
	if(!(((V1))==((VV[0]->s.s_dbind)))){
	goto T8;}
	V1= (VV[1]->s.s_dbind);
	goto T8;
T8:;{object V3;
	V3= (VV[1]->s.s_dbind);
	base[1]= (V1);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk244)(Lclptr244);
	vs_top=sup;
	V4= vs_base[0];
	{register object x= V3,V2= V4;
	while(V2!=Cnil)
	if(x==(V2->c.c_car)){
	goto T14;
	}else V2=V2->c.c_cdr;
	goto T13;}}
	goto T14;
T14:;
	base[1]= (VV[245]->s.s_gfdef);
	base[2]= (V1);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk246)();
	return;
	goto T13;
T13:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CONSTANT-SYMBOL-P	*/

static object LI2(V6)

object V6;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T19;}
	{object V7 = Cnil;
	VMR2(V7)}
	goto T19;
T19:;
	{object V8;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V8= vs_base[0];
	if(type_of((V8))==t_symbol){
	goto T24;}
	{object V9 = Cnil;
	VMR2(V9)}
	goto T24;
T24:;
	base[0]= (V8);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	{object V10 = vs_base[0];
	VMR2(V10)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXPAND-MAKE-INSTANCE-FORM	*/

static object LI3(V12)

object V12;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V13;
	object V14;
	register object V15;
	object V16;
	register object V17;
	register object V18;
	V13= CMPcadr((V12));
	V14= CMPcddr((V12));
	V15= Cnil;
	V16= Cnil;
	V17= Cnil;
	V18= Cnil;
	if(((*(LnkLI247))((V13)))==Cnil){
	goto T30;}
	{register object V19;
	V19= (V14);
	goto T35;
T35:;
	if(((V19))!=Cnil){
	goto T37;}
	goto T33;
	goto T37;
T37:;
	if(((*(LnkLI247))(CMPcar((V19))))!=Cnil){
	goto T40;}
	goto T30;
	goto T40;
T40:;
	{register object V20;
	V20= CMPcar((V19));
	V19= CMPcdr((V19));
	base[0]= (V20);}
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V17= vs_base[0];
	{register object V21;
	V21= CMPcar((V19));
	V19= CMPcdr((V19));
	V18= (V21);}
	if(!((VV[2])==((V17)))){
	goto T54;}
	V16= (V18);
	goto T54;
T54:;
	{register object V22;
	V22= (V17);
	V15= make_cons((V22),(V15));}
	goto T35;}
	goto T33;
T33:;
	{object V23;
	object V24;
	object V25;
	object V26;
	base[4]= (V13);
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	V23= vs_base[0];
	V24= nreverse((V15));
	V25= list(3,(V23),(V24),(V16));
	V26= (*(LnkLI75))((V25));
	(VV[3]->s.s_dbind)= make_cons(V25,(VV[3]->s.s_dbind));
	if(((V26))==Cnil){
	goto T69;}
	{object V28 = listA(3,(V26),list(2,VV[4],(V23)),(V14));
	VMR3(V28)}
	goto T69;
T69:;
	{object V29 = Cnil;
	VMR3(V29)}}
	goto T30;
T30:;
	{object V30 = Cnil;
	VMR3(V30)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for EXPANDING-MAKE-INSTANCE-TOP-LEVEL	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V31=base[0]->c.c_cdr;
	base[2]= V31;}
	{object V32;
	bds_bind(VV[3],Cnil);
	base[5]= make_cons(VV[5],base[2]);
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	Lmacroexpand();
	vs_top=sup;
	V32= vs_base[0];
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T76;}
	V34= list(2,VV[7],list(2,VV[4],(VV[3]->s.s_dbind)));
	V33= make_cons(/* INLINE-ARGS */V34,Cnil);
	goto T74;
	goto T76;
T76:;
	V33= Cnil;
	goto T74;
T74:;
	V35= make_cons((V32),Cnil);
	V36= append(V33,/* INLINE-ARGS */V35);
	base[5]= make_cons(VV[6],/* INLINE-ARGS */V36);
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	return;}
}
/*	macro definition for EXPANDING-MAKE-INSTANCE	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V37=base[0]->c.c_cdr;
	base[2]= V37;}
	{object V39;
	object V40= base[2];
	if(V40==Cnil){
	V38= Cnil;
	goto T78;}
	base[3]=V39=MMcons(Cnil,Cnil);
	goto T79;
T79:;
	base[4]= (V40->c.c_car);
	base[5]= base[1];
	base[6]= VV[248];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk249)();
	vs_top=sup;
	(V39->c.c_car)= vs_base[0];
	if((V40=MMcdr(V40))==Cnil){
	V38= base[3];
	goto T78;}
	V39=MMcdr(V39)=MMcons(Cnil,Cnil);
	goto T79;}
	goto T78;
T78:;
	base[3]= make_cons(VV[6],V38);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DEFCONSTRUCTOR	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V42=base[0]->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[2]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[3]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[4]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	base[5]= V42;}
	base[6]= list(2,VV[10],list(4,VV[11],base[2],base[4],listA(3,VV[9],list(2,VV[4],base[3]),base[5])));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTIONS	*/

static object LI7(V44)

object V44;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V45;
	register object V46;
	V45= (V44);
	V46= CMPcar((V45));
	goto T87;
T87:;
	if(!(((V45))==Cnil)){
	goto T88;}
	{object V47 = Cnil;
	VMR7(V47)}
	goto T88;
T88:;
	{register object V48;
	object V49;
	register object V50;
	V48= (VFUN_NARGS=1,(*(LnkLI250))(CMPcar((V46))));
	V49= CMPcddr((V48));
	V50= make_cons(CMPcadr((V46)),CMPcaddr((V46)));
	base[4]= (V50);
	base[5]= (V49);
	base[6]= VV[12];
	base[7]= (VV[251]->s.s_gfdef);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk252)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T92;}
	{register object V52;
	register object V53;
	V52= (V48);
	V53= make_cons(V50,CMPcddr((V52)));
	(CMPcdr((V52)))->c.c_cdr = (V53);
	(void)(CMPcdr((V52)));}
	{register object V54;
	V54= CMPcar((V48));
	if(((V54))==Cnil){
	goto T92;}
	base[4]= (V54);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T92;}
	V55= (VFUN_NARGS=4,(*(LnkLI39))((V54),CMPcar((V50)),Cnil,CMPcdr((V50))));
	(void)((*(LnkLI61))(/* INLINE-ARGS */V55,VV[13]));}}
	goto T92;
T92:;
	V45= CMPcdr((V45));
	V46= CMPcar((V45));
	goto T87;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static object LI8(V57)

object V57;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{register object V58;
	object V59;
	V58= CMPcar((V57));
	V59= (type_of((V58))==t_symbol?Ct:Cnil);
	if(((V59))!=Cnil){
	goto T119;}
	base[2]= (V58);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk254)(Lclptr254);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T120;}
	goto T119;
T119:;
	{register object V60;
	object V61;
	object V62;
	if(!(type_of((V58))==t_symbol)){
	goto T127;}
	V60= (V58);
	goto T125;
	goto T127;
T127:;
	base[5]= (V58);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V60= vs_base[0];
	goto T125;
T125:;
	V61= CMPcadr((V57));
	V62= CMPcaddr((V57));
	if(((V59))!=Cnil){
	goto T134;}
	if(!(type_of((V60))==t_symbol)){
	goto T133;}
	V63= (VFUN_NARGS=2,(*(LnkLI243))((V60),Cnil));
	if(!(((V58))==(/* INLINE-ARGS */V63))){
	goto T133;}
	goto T134;
T134:;
	base[5]= (V60);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T133;}
	bds_bind(VV[14],(VV[15]->s.s_dbind));
	bds_bind(VV[16],Cnil);
	bds_bind(VV[17],Cnil);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[19],VV[20]);
	bds_bind(VV[21],Cnil);
	base[12]= Cnil;
	base[13]= VV[22];
	base[14]= (V60);
	base[15]= (V61);
	base[16]= (V62);
	vs_top=(vs_base=base+12)+5;
	Lformat();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	Lintern();
	vs_top=sup;
	{object V64 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR8(V64)}
	goto T133;
T133:;
	{object V65 = Cnil;
	VMR8(V65)}}
	goto T120;
T120:;
	{object V66 = Cnil;
	VMR8(V66)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-INSTANCE-1	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V67;
	object V68;
	if(vs_top-vs_base<1) too_few_arguments();
	V67=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V68=(base[1]);
	vs_top=sup;
	base[2]=VV[9]->s.s_gfdef;
	base[3]= (V67);
	{object V69;
	V69= (V68);
	 vs_top=base+4;
	 while(V69!=Cnil)
	 {vs_push((V69)->c.c_car);V69=(V69)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk9)(Lclptr9);
	return;
	}
}
/*	macro definition for DEFINE-CACHED-READER	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V70=base[0]->c.c_cdr;
	if(endp(V70))invalid_macro_call();
	base[2]= (V70->c.c_car);
	V70=V70->c.c_cdr;
	if(endp(V70))invalid_macro_call();
	base[3]= (V70->c.c_car);
	V70=V70->c.c_cdr;
	if(endp(V70))invalid_macro_call();
	base[4]= (V70->c.c_car);
	V70=V70->c.c_cdr;
	if(!endp(V70))invalid_macro_call();}
	{object V71;
	object V72;
	base[6]= Cnil;
	base[7]= VV[23];
	base[8]= base[2];
	base[9]= base[3];
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lintern();
	vs_top=sup;
	V71= vs_base[0];
	base[6]= Cnil;
	base[7]= VV[24];
	base[8]= base[2];
	base[9]= base[3];
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lintern();
	vs_top=sup;
	V72= vs_base[0];
	V73= list(2,VV[27],list(3,VV[27],VV[29],list(3,VV[27],list(2,VV[4],(V72)),VV[30])));
	V74= list(2,VV[4],base[4]);
	V75= list(4,VV[27],/* INLINE-ARGS */V74,VV[30],list(3,VV[27],VV[34],list(2,VV[4],base[3])));
	base[5]= list(4,VV[25],(V71),VV[26],list(4,VV[27],VV[28],/* INLINE-ARGS */V73,list(5,VV[27],VV[31],VV[32],list(4,VV[27],VV[33],/* INLINE-ARGS */V75,list(3,VV[27],list(2,VV[4],(V72)),VV[30])),VV[35])));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	macro definition for DEFINE-INITIALIZE-INFO	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V76=base[0]->c.c_cdr;
	if(!endp(V76))invalid_macro_call();}
	{object V77;
	object V78;
	base[3]= (VV[37]->s.s_dbind);
	{object V79;
	object V80= base[3];
	if(V80==Cnil){
	V77= Cnil;
	goto T162;}
	base[2]=V79=MMcons(Cnil,Cnil);
	goto T163;
T163:;
	base[5]= Cnil;
	base[6]= VV[36];
	base[7]= (V80->c.c_car);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	(V79->c.c_car)= vs_base[0];
	if((V80=MMcdr(V80))==Cnil){
	V77= base[2];
	goto T162;}
	V79=MMcdr(V79)=MMcons(Cnil,Cnil);
	goto T163;}
	goto T162;
T162:;
	base[3]= (VV[37]->s.s_dbind);
	{object V82;
	object V83= base[3];
	if(V83==Cnil){
	V78= Cnil;
	goto T169;}
	base[2]=V82=MMcons(Cnil,Cnil);
	goto T170;
T170:;
	base[5]= Cnil;
	base[6]= VV[38];
	base[7]= VV[39];
	base[8]= (V83->c.c_car);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	(V82->c.c_car)= vs_base[0];
	if((V83=MMcdr(V83))==Cnil){
	V78= base[2];
	goto T169;}
	V82=MMcdr(V82)=MMcons(Cnil,Cnil);
	goto T170;}
	goto T169;
T169:;
	{object V86;
	object V87= (V77);
	if(V87==Cnil){
	V85= Cnil;
	goto T177;}
	base[2]=V86=MMcons(Cnil,Cnil);
	goto T178;
T178:;
	(V86->c.c_car)= list(2,(V87->c.c_car),VV[43]);
	if((V87=MMcdr(V87))==Cnil){
	V85= base[2];
	goto T177;}
	V86=MMcdr(V86)=MMcons(Cnil,Cnil);
	goto T178;}
	goto T177;
T177:;
	V89= listA(5,VV[40],VV[39],VV[41],VV[42],V85);
	V90= list(4,VV[25],VV[44],VV[45],list(3,VV[46],VV[47],list(3,VV[48],VV[49],list(2,VV[4],(V78)))));
	base[3]= (VV[37]->s.s_dbind);
	{object V92;
	object V93= base[3];
	object V94= (V78);
	if(V93==Cnil||V94==Cnil){
	V91= Cnil;
	goto T180;}
	base[2]=V92=MMcons(Cnil,Cnil);
	goto T181;
T181:;
	V97= list(3,VV[55],VV[56],list(2,(V94->c.c_car),VV[30]));
	(V92->c.c_car)= list(3,VV[54],/* INLINE-ARGS */V97,list(3,VV[57],list(2,VV[4],(V93->c.c_car)),VV[58]));
	if((V93=MMcdr(V93))==Cnil||(V94=MMcdr(V94))==Cnil){
	V91= base[2];
	goto T180;}
	V92=MMcdr(V92)=MMcons(Cnil,Cnil);
	goto T181;}
	goto T180;
T180:;
	V98= list(4,VV[11],VV[50],VV[51],listA(3,VV[52],VV[53],append(V91,VV[59])));
	base[3]= (VV[37]->s.s_dbind);
	{object V100;
	object V101= base[3];
	if(V101==Cnil){
	V99= Cnil;
	goto T183;}
	base[2]=V100=MMcons(Cnil,Cnil);
	goto T184;
T184:;
	(V100->c.c_car)= list(4,VV[60],VV[39],(V101->c.c_car),VV[61]);
	if((V101=MMcdr(V101))==Cnil){
	V99= base[2];
	goto T183;}
	V100=MMcdr(V100)=MMcons(Cnil,Cnil);
	goto T184;}
	goto T183;
T183:;
	base[2]= listA(5,VV[6],/* INLINE-ARGS */V89,/* INLINE-ARGS */V90,/* INLINE-ARGS */V98,V99);
	vs_top=(vs_base=base+2)+1;
	return;}
}
/*	local entry for function MAKE-INITIALIZE-INFO	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V103;
	object V104;
	object V105;
	object V106;
	object V107;
	object V108;
	object V109;
	object V110;
	object V111;
	object V112;
	object V113;
	object V114;
	object V115;
	object V116;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI12key,first,ap);
	V103=(Vcs[0]);
	V104=(Vcs[1]);
	V105=(Vcs[2]);
	V106=(Vcs[3]);
	V107=(Vcs[4]);
	V108=(Vcs[5]);
	V109=(Vcs[6]);
	V110=(Vcs[7]);
	V111=(Vcs[8]);
	V112=(Vcs[9]);
	V113=(Vcs[10]);
	V114=(Vcs[11]);
	V115=(Vcs[12]);
	V116=(Vcs[13]);
	base[0]= VV[39];
	base[1]= (V103);
	base[2]= (V104);
	base[3]= (V105);
	base[4]= (V106);
	base[5]= (V107);
	base[6]= (V108);
	base[7]= (V109);
	base[8]= (V110);
	base[9]= (V111);
	base[10]= (V112);
	base[11]= (V113);
	base[12]= (V114);
	base[13]= (V115);
	base[14]= (V116);
	vs_top=(vs_base=base+0)+15;
	siLmake_structure();
	vs_top=sup;
	{object V117 = vs_base[0];
	VMR12(V117)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for RESET-INITIALIZE-INFO-INTERNAL	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V118=base[0]->c.c_cdr;
	if(endp(V118))invalid_macro_call();
	base[2]= (V118->c.c_car);
	V118=V118->c.c_cdr;
	if(!endp(V118))invalid_macro_call();}
	{object V120;
	object V121= VV[64];
	if(V121==Cnil){
	V119= Cnil;
	goto T201;}
	base[3]=V120=MMcons(Cnil,Cnil);
	goto T202;
T202:;
	(V120->c.c_car)= list(3,VV[62],list(2,(V121->c.c_car),base[2]),VV[63]);
	if((V121=MMcdr(V121))==Cnil){
	V119= base[3];
	goto T201;}
	V120=MMcdr(V120)=MMcons(Cnil,Cnil);
	goto T202;}
	goto T201;
T201:;
	base[3]= make_cons(VV[6],V119);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function INITIALIZE-INFO-BOUND-SLOTS	*/

static object LI14(V124)

register object V124;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V125;
	V125= Cnil;
	if((VV[43])==(STREF(object,(V124),8))){
	goto T204;}
	V125= make_cons(VV[65],(V125));
	goto T204;
T204:;
	if((VV[43])==(STREF(object,(V124),12))){
	goto T208;}
	V125= make_cons(VV[66],(V125));
	goto T208;
T208:;
	if((VV[43])==(STREF(object,(V124),16))){
	goto T212;}
	V125= make_cons(VV[67],(V125));
	goto T212;
T212:;
	if((VV[43])==(STREF(object,(V124),20))){
	goto T216;}
	V125= make_cons(VV[68],(V125));
	goto T216;
T216:;
	if((VV[43])==(STREF(object,(V124),24))){
	goto T220;}
	V125= make_cons(VV[69],(V125));
	goto T220;
T220:;
	if((VV[43])==(STREF(object,(V124),28))){
	goto T224;}
	V125= make_cons(VV[70],(V125));
	goto T224;
T224:;
	if((VV[43])==(STREF(object,(V124),32))){
	goto T228;}
	V125= make_cons(VV[71],(V125));
	goto T228;
T228:;
	if((VV[43])==(STREF(object,(V124),36))){
	goto T232;}
	V125= make_cons(VV[72],(V125));
	goto T232;
T232:;
	if((VV[43])==(STREF(object,(V124),40))){
	goto T236;}
	V125= make_cons(VV[73],(V125));
	goto T236;
T236:;
	if((VV[43])==(STREF(object,(V124),44))){
	goto T240;}
	V125= make_cons(VV[74],(V125));
	goto T240;
T240:;
	if((VV[43])==(STREF(object,(V124),48))){
	goto T244;}
	V125= make_cons(VV[13],(V125));
	goto T244;
T244:;
	if((VV[43])==(STREF(object,(V124),52))){
	goto T248;}
	V125= make_cons(VV[75],(V125));
	goto T248;
T248:;
	{object V138 = (V125);
	VMR14(V138)}}
	return Cnil;
}
/*	macro definition for INITIALIZE-INFO-VALID-P	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V139=base[0]->c.c_cdr;
	if(endp(V139))invalid_macro_call();
	base[2]= (V139->c.c_car);
	V139=V139->c.c_cdr;
	if(!endp(V139))invalid_macro_call();}
	V140= list(2,VV[76],list(2,VV[77],base[2]));
	V141= make_cons(/* INLINE-ARGS */V140,Cnil);
	V142= list(3,VV[61],base[2],list(2,VV[4],VV[65]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V141,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V142,list(2,VV[77],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-RI-VALID-P	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V143=base[0]->c.c_cdr;
	if(endp(V143))invalid_macro_call();
	base[2]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(!endp(V143))invalid_macro_call();}
	V144= list(2,VV[76],list(2,VV[80],base[2]));
	V145= make_cons(/* INLINE-ARGS */V144,Cnil);
	V146= list(3,VV[61],base[2],list(2,VV[4],VV[66]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V145,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V146,list(2,VV[80],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-INITARGS-FORM-LIST	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V147=base[0]->c.c_cdr;
	if(endp(V147))invalid_macro_call();
	base[2]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	if(!endp(V147))invalid_macro_call();}
	V148= list(2,VV[76],list(2,VV[81],base[2]));
	V149= make_cons(/* INLINE-ARGS */V148,Cnil);
	V150= list(3,VV[61],base[2],list(2,VV[4],VV[67]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V149,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V150,list(2,VV[81],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-COMBINED-INITARGS-FORM-LIST	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V151=base[0]->c.c_cdr;
	if(endp(V151))invalid_macro_call();
	base[2]= (V151->c.c_car);
	V151=V151->c.c_cdr;
	if(!endp(V151))invalid_macro_call();}
	V152= list(2,VV[76],list(2,VV[82],base[2]));
	V153= make_cons(/* INLINE-ARGS */V152,Cnil);
	V154= list(3,VV[61],base[2],list(2,VV[4],VV[68]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V153,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V154,list(2,VV[82],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-NEW-KEYS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V155=base[0]->c.c_cdr;
	if(endp(V155))invalid_macro_call();
	base[2]= (V155->c.c_car);
	V155=V155->c.c_cdr;
	if(!endp(V155))invalid_macro_call();}
	V156= list(2,VV[76],list(2,VV[83],base[2]));
	V157= make_cons(/* INLINE-ARGS */V156,Cnil);
	V158= list(3,VV[61],base[2],list(2,VV[4],VV[69]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V157,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V158,list(2,VV[83],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-DEFAULT-INITARGS-FUNCTION	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V159=base[0]->c.c_cdr;
	if(endp(V159))invalid_macro_call();
	base[2]= (V159->c.c_car);
	V159=V159->c.c_cdr;
	if(!endp(V159))invalid_macro_call();}
	V160= list(2,VV[76],list(2,VV[84],base[2]));
	V161= make_cons(/* INLINE-ARGS */V160,Cnil);
	V162= list(3,VV[61],base[2],list(2,VV[4],VV[70]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V161,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V162,list(2,VV[84],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-SHARED-INITIALIZE-T-FUNCTION	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V163=base[0]->c.c_cdr;
	if(endp(V163))invalid_macro_call();
	base[2]= (V163->c.c_car);
	V163=V163->c.c_cdr;
	if(!endp(V163))invalid_macro_call();}
	V164= list(2,VV[76],list(2,VV[85],base[2]));
	V165= make_cons(/* INLINE-ARGS */V164,Cnil);
	V166= list(3,VV[61],base[2],list(2,VV[4],VV[71]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V165,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V166,list(2,VV[85],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-SHARED-INITIALIZE-NIL-FUNCTION	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V167=base[0]->c.c_cdr;
	if(endp(V167))invalid_macro_call();
	base[2]= (V167->c.c_car);
	V167=V167->c.c_cdr;
	if(!endp(V167))invalid_macro_call();}
	V168= list(2,VV[76],list(2,VV[86],base[2]));
	V169= make_cons(/* INLINE-ARGS */V168,Cnil);
	V170= list(3,VV[61],base[2],list(2,VV[4],VV[72]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V169,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V170,list(2,VV[86],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-CONSTANTS	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V171=base[0]->c.c_cdr;
	if(endp(V171))invalid_macro_call();
	base[2]= (V171->c.c_car);
	V171=V171->c.c_cdr;
	if(!endp(V171))invalid_macro_call();}
	V172= list(2,VV[76],list(2,VV[87],base[2]));
	V173= make_cons(/* INLINE-ARGS */V172,Cnil);
	V174= list(3,VV[61],base[2],list(2,VV[4],VV[73]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V173,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V174,list(2,VV[87],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-COMBINED-INITIALIZE-FUNCTION	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V175=base[0]->c.c_cdr;
	if(endp(V175))invalid_macro_call();
	base[2]= (V175->c.c_car);
	V175=V175->c.c_cdr;
	if(!endp(V175))invalid_macro_call();}
	V176= list(2,VV[76],list(2,VV[88],base[2]));
	V177= make_cons(/* INLINE-ARGS */V176,Cnil);
	V178= list(3,VV[61],base[2],list(2,VV[4],VV[74]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V177,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V178,list(2,VV[88],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-MAKE-INSTANCE-FUNCTION	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V179=base[0]->c.c_cdr;
	if(endp(V179))invalid_macro_call();
	base[2]= (V179->c.c_car);
	V179=V179->c.c_cdr;
	if(!endp(V179))invalid_macro_call();}
	V180= list(2,VV[76],list(2,VV[89],base[2]));
	V181= make_cons(/* INLINE-ARGS */V180,Cnil);
	V182= list(3,VV[61],base[2],list(2,VV[4],VV[13]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V181,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V182,list(2,VV[89],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V183=base[0]->c.c_cdr;
	if(endp(V183))invalid_macro_call();
	base[2]= (V183->c.c_car);
	V183=V183->c.c_cdr;
	if(!endp(V183))invalid_macro_call();}
	V184= list(2,VV[76],list(2,VV[90],base[2]));
	V185= make_cons(/* INLINE-ARGS */V184,Cnil);
	V186= list(3,VV[61],base[2],list(2,VV[4],VV[75]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V185,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V186,list(2,VV[90],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function RESET-INITIALIZE-INFO	*/

static object LI27(V188)

register object V188;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	base[0]= CMPcar(STREF(object,(V188),0));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V189= vs_base[0];
	V190= Ct;
	STSET(object,(V188),4, V189);
	(void)(V189);
	{object V191;
	if(((VV[91]->s.s_dbind))==Cnil){
	goto T257;}
	V191= (*(LnkLI50))((V188));
	goto T255;
	goto T257;
T257:;
	V191= VV[92];
	goto T255;
T255:;
	V192= Ct;
	STSET(object,(V188),8, VV[43]);
	(void)(VV[43]);
	V193= Ct;
	STSET(object,(V188),12, VV[43]);
	(void)(VV[43]);
	V194= Ct;
	STSET(object,(V188),16, VV[43]);
	(void)(VV[43]);
	V195= Ct;
	STSET(object,(V188),20, VV[43]);
	(void)(VV[43]);
	V196= Ct;
	STSET(object,(V188),24, VV[43]);
	(void)(VV[43]);
	V197= Ct;
	STSET(object,(V188),28, VV[43]);
	(void)(VV[43]);
	V198= Ct;
	STSET(object,(V188),32, VV[43]);
	(void)(VV[43]);
	V199= Ct;
	STSET(object,(V188),36, VV[43]);
	(void)(VV[43]);
	V200= Ct;
	STSET(object,(V188),40, VV[43]);
	(void)(VV[43]);
	V201= Ct;
	STSET(object,(V188),44, VV[43]);
	(void)(VV[43]);
	V202= Ct;
	STSET(object,(V188),48, VV[43]);
	(void)(VV[43]);
	V203= Ct;
	STSET(object,(V188),52, VV[43]);
	(void)(VV[43]);
	{register object V204;
	register object V205;
	V204= (V191);
	V205= CMPcar((V204));
	goto T275;
T275:;
	if(!(((V204))==Cnil)){
	goto T276;}
	goto T271;
	goto T276;
T276:;
	(void)((*(LnkLI61))((V188),(V205)));
	V204= CMPcdr((V204));
	V205= CMPcar((V204));
	goto T275;}
	goto T271;
T271:;
	{object V206 = (V188);
	VMR27(V206)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESET-CLASS-INITIALIZE-INFO	*/

static object LI28(V208)

object V208;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]= (V208);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V209= vs_base[0];
	{object V210 = (*(LnkLI270))(V209);
	VMR28(V210)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESET-CLASS-INITIALIZE-INFO-1	*/

static object LI29(V212)

register object V212;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(!(type_of((V212))==t_cons)){
	goto T289;}
	if((CMPcar((V212)))==Cnil){
	goto T291;}
	(void)((*(LnkLI272))(CMPcar((V212))));
	goto T291;
T291:;
	{object V213;
	V213= CMPcdr((V212));
	{register object V214;
	register object V215;
	V214= (V213);
	V215= CMPcar((V214));
	goto T298;
T298:;
	if(!(((V214))==Cnil)){
	goto T299;}
	{object V216 = Cnil;
	VMR29(V216)}
	goto T299;
T299:;
	(void)((*(LnkLI270))(CMPcdr((V215))));
	V214= CMPcdr((V214));
	V215= CMPcar((V214));
	goto T298;}}
	goto T289;
T289:;
	{object V217 = Cnil;
	VMR29(V217)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INITIALIZE-INFO	*/

static object LI30(object V219,object V218,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V220;
	object V221;
	object V222;
	object V223;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V220= V219;
	V221= V218;
	narg = narg - 2;
	if (narg <= 0) goto T309;
	else {
	V222= first;}
	if (--narg <= 0) goto T310;
	else {
	V223= va_arg(ap,object);}
	--narg; goto T311;
	goto T309;
T309:;
	V222= Ct;
	goto T310;
T310:;
	V223= Cnil;
	goto T311;
T311:;
	{object V224;
	V224= Cnil;
	if(!(((VV[93]->s.s_dbind))==((V220)))){
	goto T316;}
	if(!(((VV[94]->s.s_dbind))==((V221)))){
	goto T316;}
	V224= (VV[95]->s.s_dbind);
	goto T314;
	goto T316;
T316:;
	{register object V225;
	object V226;
	register object V227;{object V228;
	base[0]= (V220);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V228= vs_base[0];
	if(V228==Cnil)goto T322;
	V227= V228;
	goto T321;
	goto T322;
T322:;}
	{object V230;
	V230= make_cons(Cnil,Cnil);
	V231= ({object _tmp=get(VV[271],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[271])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[271])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V227= (
	V232 = V231,
	(type_of(V232) == t_sfun ?(*((V232)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V232)==t_vfun) ?
	(*((V232)->sfn.sfn_self)):
	(fcall.fun=(V232),fcalln))((V230),V220));}
	goto T321;
T321:;
	V225= (V221);
	V226= Cnil;
	goto T329;
T329:;
	if(((V225))!=Cnil){
	goto T331;}
	goto T327;
	goto T331;
T331:;
	{register object V233;
	register object V234;
	{object V235;
	V235= CMPcar((V225));
	V225= CMPcdr((V225));
	V233= (V235);}
	V234= (V227);
	if(((V222))==Cnil){
	goto T338;}
	if(((V226))!=Cnil){
	goto T342;}
	if(!(((V233))==(VV[2]))){
	goto T342;}
	{object V236;
	V236= CMPcar((V225));
	V225= CMPcdr((V225));
	V223= (V236);}
	V226= Ct;
	goto T338;
	goto T342;
T342:;
	{object V237;
	V237= CMPcar((V225));
	V225= CMPcdr((V225));}
	goto T338;
T338:;
	goto T356;
T356:;
	{register object V238;
	V238= CMPcdr((V234));
	if(((V238))!=Cnil){
	goto T359;}
	V227= make_cons(Cnil,Cnil);
	{object V240;
	V241= make_cons((V233),(V227));
	V240= make_cons(/* INLINE-ARGS */V241,Cnil);
	(V234)->c.c_cdr = (V240);}
	goto T330;
	goto T359;
T359:;
	if(!(eql((V233),CMPcaar((V238))))){
	goto T367;}
	V227= CMPcdar((V238));
	goto T330;
	goto T367;
T367:;
	V234= (V238);}
	goto T356;}
	goto T330;
T330:;
	goto T329;
	goto T327;
T327:;{object V242;
	V242= CMPcar((V227));
	if(V242==Cnil)goto T376;
	V224= V242;
	goto T375;
	goto T376;
T376:;}
	{object V244;
	V244= (VFUN_NARGS=0,(*(LnkLI273))());
	(V227)->c.c_car = (V244);
	V224= (V244);}
	goto T375;
T375:;}
	goto T314;
T314:;
	{object V245;
	V245= STREF(object,(V224),4);
	base[0]= (V220);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V246= vs_base[0];
	if(((V245))==(V246)){
	goto T380;}
	if(((V245))!=Cnil){
	goto T386;}
	{register object V247;
	object V248;
	object V249;
	V247= (V221);
	V248= make_cons(Cnil,Cnil);
	V249= (V248);
	goto T394;
T394:;
	if(((V247))!=Cnil){
	goto T396;}
	goto T392;
	goto T396;
T396:;
	{object V250;
	{object V251;
	V251= CMPcar((V247));
	V247= CMPcdr((V247));
	V250= (V251);}
	{object V253;
	V253= make_cons((V250),Cnil);
	(V249)->c.c_cdr = (V253);}}
	V249= CMPcdr((V249));
	if(((V222))==Cnil){
	goto T395;}
	{object V254;
	V254= CMPcar((V247));
	V247= CMPcdr((V247));}
	goto T395;
T395:;
	goto T394;
	goto T392;
T392:;
	V255= list(3,(V220),CMPcdr((V248)),(V223));
	V256= Ct;
	STSET(object,(V224),0, /* INLINE-ARGS */V255);
	(void)(/* INLINE-ARGS */V255);}
	goto T386;
T386:;
	(void)((*(LnkLI272))((V224)));}
	goto T380;
T380:;
	(VV[93]->s.s_dbind)= (V220);
	(VV[94]->s.s_dbind)= (V221);
	(VV[95]->s.s_dbind)= (V224);
	{object V257 = (V224);
	VMR30(V257)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UPDATE-INITIALIZE-INFO-INTERNAL	*/

static object LI31(V260,V261)

register object V260;object V261;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register object V262;
	V262= STREF(object,(V260),0);
	base[1]= CMPcar((V262));
	base[2]= CMPcadr((V262));
	base[3]= CMPcaddr((V262));
	{object V264= V261;
	if((V264!= VV[67])
	&& (V264!= VV[69]))goto T425;
	{object V265;
	object V266;
	base[4]= base[1];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk274)();
	if(vs_base>=vs_top){vs_top=sup;goto T429;}
	V265= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T430;}
	V266= vs_base[0];
	vs_top=sup;
	goto T431;
	goto T429;
T429:;
	V265= Cnil;
	goto T430;
T430:;
	V266= Cnil;
	goto T431;
T431:;
	V267= Ct;
	STSET(object,(V260),16, (V265));
	(void)((V265));
	V268= Ct;
	STSET(object,(V260),24, (V266));
	(void)((V266));
	goto T420;}
	goto T425;
T425:;
	if((V264!= VV[68]))goto T433;
	{object V269;
	object V270;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk274)();
	if(vs_base>=vs_top){vs_top=sup;goto T438;}
	V269= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T439;}
	V270= vs_base[0];
	vs_top=sup;
	goto T440;
	goto T438;
T438:;
	V269= Cnil;
	goto T439;
T439:;
	V270= Cnil;
	goto T440;
T440:;
	V271= Ct;
	STSET(object,(V260),20, (V269));
	(void)((V269));
	V272= Ct;
	STSET(object,(V260),24, (V270));
	(void)((V270));
	goto T420;}
	goto T433;
T433:;
	if((V264!= VV[70]))goto T442;
	{object V273;
	{object V274;
	V274= STREF(object,(V260),16);
	if(!(((V274))==(VV[43]))){
	goto T446;}
	(void)((*(LnkLI61))((V260),VV[67]));
	V273= STREF(object,(V260),16);
	goto T443;
	goto T446;
T446:;
	V273= (V274);}
	goto T443;
T443:;
	base[4]= VV[70];
	base[5]= (V260);
	base[6]= base[1];
	base[7]= (V273);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk275)();
	vs_top=sup;
	V275= vs_base[0];
	V276= Ct;
	STSET(object,(V260),28, V275);
	(void)(V275);
	goto T420;}
	goto T442;
T442:;
	if((V264!= VV[65])
	&& (V264!= VV[66]))goto T454;
	{object V277;
	base[4]= base[1];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	V277= vs_base[0];
	V279= listA(3,VV[96],base[1],Cnil);
	V280= listA(3,VV[97],(V277),Cnil);
	base[4]= list(3,/* INLINE-ARGS */V279,/* INLINE-ARGS */V280,listA(4,VV[98],(V277),Ct,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V278= vs_base[0];
	V281= Ct;
	STSET(object,(V260),8, V278);
	(void)(V278);
	V283= listA(3,VV[99],(V277),Cnil);
	base[4]= list(2,/* INLINE-ARGS */V283,listA(4,VV[98],(V277),Cnil,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V282= vs_base[0];
	V284= Ct;
	STSET(object,(V260),12, V282);
	(void)(V282);
	goto T420;}
	goto T454;
T454:;
	if((V264!= VV[71]))goto T462;
	{object V285;
	object V286;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Ct;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk277)();
	if(vs_base>=vs_top){vs_top=sup;goto T468;}
	V285= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T469;}
	V286= vs_base[0];
	vs_top=sup;
	goto T470;
	goto T468;
T468:;
	V285= Cnil;
	goto T469;
T469:;
	V286= Cnil;
	goto T470;
T470:;
	base[4]= VV[71];
	base[5]= (V260);
	base[6]= base[1];
	base[7]= (V285);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk275)();
	vs_top=sup;
	V287= vs_base[0];
	V288= Ct;
	STSET(object,(V260),32, V287);
	(void)(V287);
	goto T420;}
	goto T462;
T462:;
	if((V264!= VV[72]))goto T476;
	{object V289;
	object V290;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk277)();
	if(vs_base>=vs_top){vs_top=sup;goto T482;}
	V289= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T483;}
	V290= vs_base[0];
	vs_top=sup;
	goto T484;
	goto T482;
T482:;
	V289= Cnil;
	goto T483;
T483:;
	V290= Cnil;
	goto T484;
T484:;
	base[4]= VV[72];
	base[5]= (V260);
	base[6]= base[1];
	base[7]= (V289);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk275)();
	vs_top=sup;
	V291= vs_base[0];
	V292= Ct;
	STSET(object,(V260),36, V291);
	(void)(V291);
	goto T420;}
	goto T476;
T476:;
	if((V264!= VV[73])
	&& (V264!= VV[74]))goto T490;
	{object V293;
	object V294;
	{object V295;
	V295= STREF(object,(V260),20);
	if(!(((V295))==(VV[43]))){
	goto T494;}
	(void)((*(LnkLI61))((V260),VV[68]));
	V293= STREF(object,(V260),20);
	goto T491;
	goto T494;
T494:;
	V293= (V295);}
	goto T491;
T491:;
	{object V296;
	V296= STREF(object,(V260),24);
	if(!(((V296))==(VV[43]))){
	goto T500;}
	(void)((*(LnkLI61))((V260),VV[69]));
	V294= STREF(object,(V260),24);
	goto T497;
	goto T500;
T500:;
	V294= (V296);}
	goto T497;
T497:;
	{object V297;
	object V298;
	base[4]= base[1];
	base[5]= (V294);
	base[6]= Ct;
	base[7]= Ct;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk277)();
	if(vs_base>=vs_top){vs_top=sup;goto T508;}
	V297= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T509;}
	V298= vs_base[0];
	vs_top=sup;
	goto T510;
	goto T508;
T508:;
	V297= Cnil;
	goto T509;
T509:;
	V298= Cnil;
	goto T510;
T510:;
	V299= Ct;
	STSET(object,(V260),40, (V298));
	(void)((V298));
	base[4]= VV[74];
	base[5]= (V260);
	base[6]= base[1];
	base[7]= append((V293),(V297));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk275)();
	vs_top=sup;
	V300= vs_base[0];
	V301= Ct;
	STSET(object,(V260),44, V300);
	(void)(V300);
	goto T420;}}
	goto T490;
T490:;
	if((V264!= VV[75]))goto T517;
	V302= (*(LnkLI75))((V262));
	V303= Ct;
	STSET(object,(V260),52, /* INLINE-ARGS */V302);
	(void)(/* INLINE-ARGS */V302);
	goto T420;
	goto T517;
T517:;
	if((V264!= VV[13]))goto T518;
	{object V304;
	object V305;
	V304= (*(LnkLI278))((V262));
	{object V306;
	V306= STREF(object,(V260),52);
	if(!(((V306))==(VV[43]))){
	goto T523;}
	(void)((*(LnkLI61))((V260),VV[75]));
	V305= STREF(object,(V260),52);
	goto T520;
	goto T523;
T523:;
	V305= (V306);}
	goto T520;
T520:;
	V307= Ct;
	STSET(object,(V260),48, (V304));
	(void)((V304));
	if(((V305))==Cnil){
	goto T420;}
	{object V309;
	if((V304)!=Cnil){
	V309= (V304);
	goto T529;}
	V309= (VV[279]->s.s_gfdef);
	goto T529;
T529:;
	V310= ({object _tmp=get(VV[280],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[280])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[280])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V311 = V310,
	(type_of(V311) == t_sfun ?(*((V311)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V311)==t_vfun) ?
	(*((V311)->sfn.sfn_self)):
	(fcall.fun=(V311),fcalln))((V309),V305)));
	goto T420;}}
	goto T518;
T518:;
	base[4]= VV[101];
	base[5]= VV[102];
	base[6]= VV[103];
	base[7]= VV[104];
	base[8]= V261;
	base[9]= VV[105];
	base[10]= VV[106];
	base[11]= VV[107];
	base[12]= VV[108];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk281)();
	vs_top=sup;}}
	goto T420;
T420:;
	{object V312 = (V260);
	VMR31(V312)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION	*/

static object LI33(V314)

object V314;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register object V315;
	object V316;
	V315= CMPcar((V314));
	V316= CMPcadr((V314));
	if(((VV[109]->s.s_dbind))==(VV[110])){
	goto T542;}
	{object V317 = Cnil;
	VMR32(V317)}
	goto T542;
T542:;
	if(!(type_of((V315))==t_symbol)){
	goto T545;}
	V315= (VFUN_NARGS=1,(*(LnkLI243))((V315)));
	goto T545;
T545:;
	base[2]= (V315);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk254)(Lclptr254);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T549;}
	base[2]= (V315);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T549;}
	base[2]= (V315);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	goto T549;
T549:;
	{register object V318;
	object V319;
	register object V320;
	object V321;
	object V322;
	object V323;
	object V324;
	register object V325;
	object V326;
	object V327;
	{object V328;
	object V329= (V316);
	if(V329==Cnil){
	V318= Cnil;
	goto T557;}
	base[13]=V328=MMcons(Cnil,Cnil);
	goto T558;
T558:;
	(V328->c.c_cdr)= list(2,(V329->c.c_car),Cnil);
	while(MMcdr(V328)!=Cnil)V328=MMcdr(V328);
	if((V329=MMcdr(V329))==Cnil){
	base[13]=base[13]->c.c_cdr;
	V318= base[13];
	goto T557;}
	goto T558;}
	goto T557;
T557:;
	V319= make_cons((V315),(V318));
	base[4]= (*(LnkLI280))(VV[9]);
	base[4]=MMcons(base[4],Cnil);
	base[13]= (base[4]->c.c_car);
	base[14]= (V319);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V320= vs_base[0];
	V321= (*(LnkLI285))((V320),VV[111]);
	V322= list(2,(V315),(V318));
	V323= (*(LnkLI280))(VV[112]);
	base[13]= (V323);
	base[14]= (V322);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V324= vs_base[0];
	base[13]= (V315);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk254)(Lclptr254);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T572;}
	V325= Cnil;
	goto T571;
	goto T572;
T572:;
	base[13]= (V315);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	V325= vs_base[0];
	goto T571;
T571:;
	if(((V325))==Cnil){
	goto T578;}
	base[13]= (*(LnkLI280))(VV[97]);
	base[14]= make_cons((V325),(V318));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V326= vs_base[0];
	goto T576;
	goto T578;
T578:;
	V326= Cnil;
	goto T576;
T576:;
	if(((V325))==Cnil){
	goto T584;}
	base[13]= (*(LnkLI280))(VV[98]);
	base[14]= listA(3,(V325),Ct,(V318));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V327= vs_base[0];
	goto T582;
	goto T584;
T584:;
	V327= Cnil;
	goto T582;
T582:;
	if(((V320))!=Cnil){
	goto T588;}
	{object V331 = 
	make_cclosure_new(LC66,Cnil,base[4],Cdata);
	VMR32(V331)}
	goto T588;
T588:;
	if((CMPcdr((V320)))!=Cnil){
	goto T592;}
	if(!((CMPcar((V320)))==((V321)))){
	goto T592;}
	if((CMPcdr((V324)))!=Cnil){
	goto T592;}
	base[13]= CMPcar((V324));
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V332= vs_base[0];
	if(!((CMPcar(V332))==((VV[113]->s.s_dbind)))){
	goto T592;}
	base[13]=make_cclosure_new(LC34,Cnil,base[4],Cdata);
	base[13]=MMcons(base[13],base[4]);
	base[14]= (base[13]->c.c_car);
	base[15]= (V326);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T604;}
	goto T603;
	goto T604;
T604:;
	base[14]= (base[13]->c.c_car);
	base[15]= (V327);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T591;}
	goto T603;
T603:;
	goto T592;
T592:;
	{object V333 = Cnil;
	VMR32(V333)}
	goto T591;
T591:;
	base[13]= (V315);
	base[14]= (V318);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk112)(Lclptr112);
	vs_top=sup;
	V334= vs_base[0];
	{object V335 = (*(LnkLI288))((V315),(V314),V334,(V326),(V327));
	VMR32(V335)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-INTERNAL	*/

static object LI35(V341,V342,V343,V344,V345)

register object V341;register object V342;object V343;register object V344;register object V345;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V346;
	object V347;
	object V348;
	V346= CMPcadr((V342));
	V347= CMPcaddr((V342));
	base[3]= (*(LnkLI280))(VV[96]);
	base[4]= make_cons((V341),(V343));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V348= vs_base[0];
	if(((V347))!=Cnil){
	goto T618;}
	base[3]= (V348);
	base[4]= (V344);
	base[5]= (V345);
	vs_top=(vs_base=base+3)+3;
	Lappend();
	vs_top=sup;
	V349= vs_base[0];
	if(((VFUN_NARGS=5,(*(LnkLI289))((V341),(V343),V349,Ct,Cnil)))!=Cnil){
	goto T618;}
	{object V350 = Cnil;
	VMR33(V350)}
	goto T618;
T618:;
	if((CMPcdr((V348)))!=Cnil){
	goto T627;}
	base[3]= (VV[290]->s.s_gfdef);
	base[4]= (V344);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk291)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T627;}
	base[3]= (VV[290]->s.s_gfdef);
	base[4]= (V345);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk291)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T628;}
	goto T627;
T627:;
	{object V351 = (*(LnkLI292))((V342),(V341),(V346),(V344),(V345));
	VMR33(V351)}
	goto T628;
T628:;
	{object V352 = (*(LnkLI293))((V342),(V341),(V346),(V344),(V345));
	VMR33(V352)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPLICATED-INSTANCE-CREATION-METHOD	*/

static object LI36(V354)

object V354;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V355;
	base[0]= (V354);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	V355= vs_base[0];
	if(((V355))==Cnil){
	goto T641;}
	if((CMPcdr((V355)))==Cnil){
	goto T644;}
	V356= Cnil;
	goto T643;
	goto T644;
T644:;
	V356= ((CMPcar((V355)))==(VV[115])?Ct:Cnil);
	goto T643;
T643:;
	{object V357 = ((V356)==Cnil?Ct:Cnil);
	VMR34(V357)}
	goto T641;
T641:;
	{object V358;
	base[0]= (V354);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V359= vs_base[0];
	V358= CMPcar(V359);
	base[0]= (V358);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk254)(Lclptr254);
	vs_top=sup;
	V360= vs_base[0];
	if(!((V360)==Cnil)){
	goto T649;}
	{object V361 = Ct;
	VMR34(V361)}
	goto T649;
T649:;
	base[0]= (V358);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V362= vs_base[0];
	{object V363 = ((((VV[116])==(V362)?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR34(V363)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-STANDARD-II-METHOD	*/

static object LI37(V366,V367)

object V366;register object V367;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{register object V368;
	register object V369;
	V368= (V366);
	V369= CMPcar((V368));
	goto T658;
T658:;
	if(!(((V368))==Cnil)){
	goto T659;}
	{object V370 = Cnil;
	VMR35(V370)}
	goto T659;
T659:;
	base[1]= (V369);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T663;}
	{register object V371;
	base[1]= (V369);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V372= vs_base[0];
	V371= CMPcar(V372);
	base[1]= (V371);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk254)(Lclptr254);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T663;}
	if(!(type_of((V367))==t_cons||((V367))==Cnil)){
	goto T676;}
	base[1]= (V371);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V374= vs_base[0];
	{register object x= V374,V373= (V367);
	while(V373!=Cnil)
	if(eql(x,V373->c.c_car)){
	goto T674;
	}else V373=V373->c.c_cdr;
	goto T663;}
	goto T676;
T676:;
	base[1]= (V371);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V375= vs_base[0];
	if(!((V375)==((V367)))){
	goto T663;}
	goto T674;
T674:;
	{object V376 = (V369);
	VMR35(V376)}}
	goto T663;
T663:;
	V368= CMPcdr((V368));
	V369= CMPcar((V368));
	goto T658;}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CALL-INITIALIZE-FUNCTION	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V377=base[0]->c.c_cdr;
	if(endp(V377))invalid_macro_call();
	base[2]= (V377->c.c_car);
	V377=V377->c.c_cdr;
	if(endp(V377))invalid_macro_call();
	base[3]= (V377->c.c_car);
	V377=V377->c.c_cdr;
	if(endp(V377))invalid_macro_call();
	base[4]= (V377->c.c_car);
	V377=V377->c.c_cdr;
	if(!endp(V377))invalid_macro_call();}
	V378= list(2,VV[117],base[2]);
	V379= make_cons(/* INLINE-ARGS */V378,Cnil);
	V380= list(5,VV[119],VV[120],VV[121],base[3],base[4]);
	base[5]= list(3,VV[52],/* INLINE-ARGS */V379,list(4,VV[78],VV[118],/* INLINE-ARGS */V380,list(4,VV[122],VV[123],base[3],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for COPY-SLOTS	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V381=base[0]->c.c_cdr;
	if(endp(V381))invalid_macro_call();
	base[2]= (V381->c.c_car);
	V381=V381->c.c_cdr;
	if(!endp(V381))invalid_macro_call();}
	base[3]= list(2,VV[124],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for ALLOCATE-STANDARD-INSTANCE--MACRO	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V382=base[0]->c.c_cdr;
	if(endp(V382))invalid_macro_call();
	base[2]= (V382->c.c_car);
	V382=V382->c.c_cdr;
	if(endp(V382))invalid_macro_call();
	base[3]= (V382->c.c_car);
	V382=V382->c.c_cdr;
	if(!endp(V382))invalid_macro_call();}
	V383= list(3,VV[62],VV[126],base[2]);
	base[4]= list(5,VV[52],VV[125],/* INLINE-ARGS */V383,list(3,VV[62],VV[127],list(2,VV[128],base[3])),VV[129]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for WITH-MAKE-INSTANCE-FUNCTION-VALID-P-CHECK	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V384=base[0]->c.c_cdr;
	if(endp(V384))invalid_macro_call();
	base[2]= (V384->c.c_car);
	V384=V384->c.c_cdr;
	base[3]= V384;}
	V385= list(3,VV[132],VV[133],base[2]);
	base[4]= list(3,VV[52],VV[130],list(4,VV[78],VV[131],/* INLINE-ARGS */V385,make_cons(VV[6],base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-INSTANCE-FUNCTION-TRAP	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V386;
	object V387;
	check_arg(2);
	V386=(base[0]);
	V387=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V388;
	object V389;
	V388= (VFUN_NARGS=2,(*(LnkLI39))((V386),(V387)));
	{object V390;
	V390= STREF(object,(V388),48);
	if(!(((V390))==(VV[43]))){
	goto T691;}
	(void)((*(LnkLI61))((V388),VV[13]));
	V389= STREF(object,(V388),48);
	goto T688;
	goto T691;
T691:;
	V389= (V390);}
	goto T688;
T688:;
	base[4]= (V386);
	base[5]= (V387);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V389);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-SIMPLE	*/

static object LI43(V396,V397,V398,V399,V400)

object V396;object V397;object V398;object V399;object V400;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V401;
	object V402;
	object V403;
	object V404;
	base[0]= CMPcar((V396));
	base[0]=MMcons(base[0],Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T699;}
	base[1]= (VFUN_NARGS=2,(*(LnkLI250))((base[0]->c.c_car),Cnil));
	goto T697;
	goto T699;
T699:;
	base[1]= Cnil;
	goto T697;
T697:;
	base[1]=MMcons(base[1],base[0]);
	base[10]= (V397);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	base[2]= vs_base[0];
	base[2]=MMcons(base[2],base[1]);
	V401= make_cons((base[2]->c.c_car),Cnil);
	base[10]= (V397);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk295)(Lclptr295);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	base[4]= (VV[296]->s.s_gfdef);
	goto T704;
	goto T706;
T706:;
	base[10]= (V397);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk297)(Lclptr297);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T710;}
	base[4]= (VV[298]->s.s_gfdef);
	goto T704;
	goto T710;
T710:;
	base[10]= (V397);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T714;}
	base[4]= (VV[300]->s.s_gfdef);
	goto T704;
	goto T714;
T714:;
	base[10]= VV[134];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T704;
T704:;
	base[4]=MMcons(base[4],base[2]);
	base[10]= (V397);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk297)(Lclptr297);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T720;}
	V402= VV[135];
	goto T718;
	goto T720;
T720:;
	V402= Cnil;
	goto T718;
T718:;
	V403= (*(LnkLI285))((V400),VV[116]);
	base[11]= (V403);
	base[12]= (V400);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	V408= vs_base[0];
	{object V406;
	object V407= V408;
	if(V407==Cnil){
	V405= Cnil;
	goto T725;}
	base[10]=V406=MMcons(Cnil,Cnil);
	goto T726;
T726:;
	base[11]= (VV[98]->s.s_gfdef);
	base[12]= list(3,VV[136],(V407->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V401);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk302)();
	vs_top=sup;
	(V406->c.c_car)= vs_base[0];
	if((V407=MMcdr(V407))==Cnil){
	V405= base[10];
	goto T725;}
	V406=MMcdr(V406)=MMcons(Cnil,Cnil);
	goto T726;}
	goto T725;
T725:;
	base[7]= nreverse(V405);
	base[7]=MMcons(base[7],base[4]);
	V404= (*(LnkLI285))((V399),VV[116]);
	base[11]= (V404);
	base[12]= (V399);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	V413= vs_base[0];
	{object V411;
	object V412= V413;
	if(V412==Cnil){
	V410= Cnil;
	goto T737;}
	base[10]=V411=MMcons(Cnil,Cnil);
	goto T738;
T738:;
	base[11]= (VV[97]->s.s_gfdef);
	base[12]= list(3,VV[136],(V412->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V401);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk302)();
	vs_top=sup;
	(V411->c.c_car)= vs_base[0];
	if((V412=MMcdr(V412))==Cnil){
	V410= base[10];
	goto T737;}
	V411=MMcdr(V411)=MMcons(Cnil,Cnil);
	goto T738;}
	goto T737;
T737:;
	base[9]= nreverse(V410);
	base[9]=MMcons(base[9],base[7]);
	base[12]= (V397);
	base[13]= (V398);
	base[14]= CMPcaddr((V396));
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk303)();
	if(vs_base>=vs_top){vs_top=sup;goto T751;}
	base[10]=MMcons(vs_base[0],base[9]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T752;}
	base[11]=MMcons(vs_base[0],base[10]);
	vs_top=sup;
	goto T753;
	goto T751;
T751:;
	base[10]=MMcons(Cnil,base[9]);
	goto T752;
T752:;
	base[11]=MMcons(Cnil,base[10]);
	goto T753;
T753:;
	if(!(((V402))==(VV[135]))){
	goto T755;}
	{object V415 = 
	make_cclosure_new(LC67,Cnil,base[11],Cdata);
	VMR41(V415)}
	goto T755;
T755:;
	{object V416 = 
	make_cclosure_new(LC68,Cnil,base[11],Cdata);
	VMR41(V416)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-COMPLEX	*/

static object LI45(V422,V423,V424,V425,V426)

object V422;object V423;object V424;object V425;object V426;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	base[0]=MMcons((V423),Cnil);
	base[3]= (base[0]->c.c_car);
	base[4]= (V424);
	base[5]= CMPcaddr((V422));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk304)();
	if(vs_base>=vs_top){vs_top=sup;goto T761;}
	base[1]=MMcons(vs_base[0],base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T762;}
	base[2]=MMcons(vs_base[0],base[1]);
	vs_top=sup;
	goto T763;
	goto T761;
T761:;
	base[1]=MMcons(Cnil,base[0]);
	goto T762;
T762:;
	base[2]=MMcons(Cnil,base[1]);
	goto T763;
T763:;
	base[3]= CMPcar((V422));
	base[3]=MMcons(base[3],base[2]);
	if(!(type_of((base[3]->c.c_car))==t_symbol)){
	goto T767;}
	base[4]= (VFUN_NARGS=2,(*(LnkLI250))((base[3]->c.c_car),Cnil));
	goto T765;
	goto T767;
T767:;
	base[4]= Cnil;
	goto T765;
T765:;
	base[4]=MMcons(base[4],base[3]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	base[5]= vs_base[0];
	base[5]=MMcons(base[5],base[4]);
	base[8]= (VV[98]->s.s_gfdef);
	base[9]= (V426);
	V427= list(2,VV[150],(base[0]->c.c_car));
	base[10]= make_cons(/* INLINE-ARGS */V427,VV[151]);
	V428= (*(LnkLI285))((V426),VV[116]);
	V429= 
	make_cclosure_new(LC69,Cnil,base[5],Cdata);
	V430= list(2,/* INLINE-ARGS */V428,V429);
	base[11]= make_cons(/* INLINE-ARGS */V430,Cnil);
	base[12]= list(3,(base[5]->c.c_car),(VV[152]->s.s_dbind),(VV[152]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk305)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[6]=MMcons(base[6],base[5]);
	base[8]= (VV[97]->s.s_gfdef);
	base[9]= (V425);
	base[10]= list(2,list(2,VV[150],(base[0]->c.c_car)),Ct);
	V431= (*(LnkLI285))((V425),VV[116]);
	V432= 
	make_cclosure_new(LC70,Cnil,base[6],Cdata);
	V433= list(2,/* INLINE-ARGS */V431,V432);
	base[11]= make_cons(/* INLINE-ARGS */V433,Cnil);
	base[12]= list(2,(base[5]->c.c_car),(VV[152]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk305)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[7]=MMcons(base[7],base[6]);
	{object V434 = 
	make_cclosure_new(LC71,Cnil,base[7],Cdata);
	VMR42(V434)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-SIMPLE-INITIALIZATION-FUNCTION	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V435;
	object V436;
	object V437;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V435=(base[0]);
	V436=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T785;}
	V437=(base[2]);
	vs_top=sup;
	goto T786;
	goto T785;
T785:;
	V437= Cnil;
	goto T786;
T786:;
	{register object V438;
	V438= (VFUN_NARGS=4,(*(LnkLI39))((V435),(V436),Cnil,(V437)));
	{object V439;
	V439= STREF(object,(V438),44);
	if(!(((V439))==(VV[43]))){
	goto T792;}
	(void)((*(LnkLI61))((V438),VV[74]));
	base[3]= STREF(object,(V438),44);
	goto T789;
	goto T792;
T792:;
	base[3]= (V439);}
	goto T789;
T789:;
	{object V440;
	V440= STREF(object,(V438),40);
	if(!(((V440))==(VV[43]))){
	goto T798;}
	(void)((*(LnkLI61))((V438),VV[73]));
	base[4]= STREF(object,(V438),40);
	goto T795;
	goto T798;
T798:;
	base[4]= (V440);}
	goto T795;
T795:;
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for GET-COMPLEX-INITIALIZATION-FUNCTIONS	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{register object V441;
	object V442;
	register object V443;
	object V444;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V441=(base[0]);
	V442=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T801;}
	V443=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T802;}
	V444=(base[3]);
	vs_top=sup;
	goto T803;
	goto T801;
T801:;
	V443= Cnil;
	goto T802;
T802:;
	V444= Cnil;
	goto T803;
T803:;
	{register object V445;
	object V446;
	V445= (VFUN_NARGS=4,(*(LnkLI39))((V441),(V442),Cnil,(V443)));
	{object V447;
	V447= STREF(object,(V445),28);
	if(!(((V447))==(VV[43]))){
	goto T810;}
	(void)((*(LnkLI61))((V445),VV[70]));
	V446= STREF(object,(V445),28);
	goto T807;
	goto T810;
T810:;
	V446= (V447);}
	goto T807;
T807:;
	if(((V444))==Cnil){
	goto T814;}
	base[6]= (V446);
	{object V448;
	V448= STREF(object,(V445),32);
	if(!(((V448))==(VV[43]))){
	goto T820;}
	(void)((*(LnkLI61))((V445),VV[71]));
	base[7]= STREF(object,(V445),32);
	goto T817;
	goto T820;
T820:;
	base[7]= (V448);}
	goto T817;
T817:;
	vs_top=(vs_base=base+6)+2;
	return;
	goto T814;
T814:;
	base[6]= (V446);
	{object V449;
	{object V451;
	V451= STREF(object,(V445),24);
	if(!(((V451))==(VV[43]))){
	goto T829;}
	(void)((*(LnkLI61))((V445),VV[69]));
	V450= STREF(object,(V445),24);
	goto T826;
	goto T829;
T829:;
	V450= (V451);}
	goto T826;
T826:;
	V452= (VFUN_NARGS=4,(*(LnkLI39))((V441),V450,Cnil,(V443)));
	V449= STREF(object,/* INLINE-ARGS */V452,32);
	if(!(((V449))==(VV[43]))){
	goto T833;}
	{object V454;
	V454= STREF(object,(V445),24);
	if(!(((V454))==(VV[43]))){
	goto T839;}
	(void)((*(LnkLI61))((V445),VV[69]));
	V453= STREF(object,(V445),24);
	goto T836;
	goto T839;
T839:;
	V453= (V454);}
	goto T836;
T836:;
	V455= (VFUN_NARGS=4,(*(LnkLI39))((V441),V453,Cnil,(V443)));
	(void)((*(LnkLI61))(/* INLINE-ARGS */V455,VV[71]));
	{object V457;
	V457= STREF(object,(V445),24);
	if(!(((V457))==(VV[43]))){
	goto T845;}
	(void)((*(LnkLI61))((V445),VV[69]));
	V456= STREF(object,(V445),24);
	goto T842;
	goto T845;
T845:;
	V456= (V457);}
	goto T842;
T842:;
	V458= (VFUN_NARGS=4,(*(LnkLI39))((V441),V456,Cnil,(V443)));
	base[7]= STREF(object,/* INLINE-ARGS */V458,32);
	goto T824;
	goto T833;
T833:;
	base[7]= (V449);}
	goto T824;
T824:;
	vs_top=(vs_base=base+6)+2;
	return;}
	}
}
/*	local entry for function ADD-FORMS	*/

static object LI48(V461,V462)

register object V461;register object V462;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	if(((V461))==Cnil){
	goto T848;}
	base[0]= (V461);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V461= vs_base[0];
	if((CMPcar((V462)))!=Cnil){
	goto T856;}
	(V462)->c.c_car = V461;
	goto T854;
	goto T856;
T856:;
	(CMPcdr(V462))->c.c_cdr = V461;
	(void)(CMPcdr(V462));
	goto T854;
T854:;
	{object V468;
	base[1]= (V461);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V468= vs_base[0];
	(V462)->c.c_cdr = (V468);}
	goto T848;
T848:;
	{object V469 = CMPcar((V462));
	VMR45(V469)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-DEFAULT-INITARGS-FORM-LIST	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V470;
	object V471;
	object V472;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V470=(base[0]);
	V471=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T863;}
	V472=(base[2]);
	vs_top=sup;
	goto T864;
	goto T863;
T863:;
	V472= Ct;
	goto T864;
T864:;
	{object V473;
	object V474;
	object V475;
	object V476;
	register object V477;
	V473= make_cons(Cnil,Cnil);
	base[3]= (V470);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	V474= vs_base[0];
	base[4]= (V470);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	V480= vs_base[0];
	{object V478;
	object V479= V480;
	if(V479==Cnil){
	V476= Cnil;
	goto T869;}
	base[3]=V478=MMcons(Cnil,Cnil);
	goto T870;
T870:;
	base[5]= (V479->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V484= vs_base[0];
	{object V482;
	object V483= V484;
	if(V483==Cnil){
	(V478->c.c_cdr)= Cnil;
	goto T873;}
	base[4]=V482=MMcons(Cnil,Cnil);
	goto T874;
T874:;
	(V482->c.c_car)= make_cons((V483->c.c_car),(V479->c.c_car));
	if((V483=MMcdr(V483))==Cnil){
	(V478->c.c_cdr)= base[4];
	goto T873;}
	V482=MMcdr(V482)=MMcons(Cnil,Cnil);
	goto T874;}
	goto T873;
T873:;
	while(MMcdr(V478)!=Cnil)V478=MMcdr(V478);
	if((V479=MMcdr(V479))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V476= base[3];
	goto T869;}
	goto T870;}
	goto T869;
T869:;
	V475= (V471);
	V477= Cnil;
	{register object V486;
	object V487;
	V486= (V475);
	V487= CMPcar((V486));
	goto T882;
T882:;
	if(!(((V486))==Cnil)){
	goto T883;}
	goto T878;
	goto T883;
T883:;
	{object V488;
	{register object x= (V487),V490= (V476);
	while(V490!=Cnil)
	if(eql(x,V490->c.c_car->c.c_car) &&V490->c.c_car != Cnil){
	V489= (V490->c.c_car);
	goto T889;
	}else V490=V490->c.c_cdr;
	V489= Cnil;}
	goto T889;
T889:;
	V488= CMPcdr(V489);
	base[5]= (V488);
	base[6]= (V477);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V477= vs_base[0];}
	V486= CMPcdr((V486));
	V487= CMPcar((V486));
	goto T882;}
	goto T878;
T878:;
	{register object V491;
	register object V492;
	V491= (V474);
	V492= CMPcar((V491));
	goto T902;
T902:;
	if(!(((V491))==Cnil)){
	goto T903;}
	goto T898;
	goto T903;
T903:;
	{register object V493;
	register object V494;
	object V495;
	V493= CMPcar((V492));
	{register object x= (V493),V497= (V476);
	while(V497!=Cnil)
	if(eql(x,V497->c.c_car->c.c_car) &&V497->c.c_car != Cnil){
	V496= (V497->c.c_car);
	goto T910;
	}else V497=V497->c.c_cdr;
	V496= Cnil;}
	goto T910;
T910:;
	V494= CMPcdr(V496);
	V495= CMPcadr((V492));
	{register object x= (V494),V498= (V477);
	while(V498!=Cnil)
	if(eql(x,V498->c.c_car)){
	goto T907;
	}else V498=V498->c.c_cdr;}
	V499= list(2,VV[122],(V495));
	V500= list(2,/* INLINE-ARGS */V499,list(2,VV[161],(V493)));
	(void)((*(LnkLI309))(/* INLINE-ARGS */V500,(V473)));
	V475= make_cons(V493,(V475));
	V477= make_cons(V494,(V477));}
	goto T907;
T907:;
	V491= CMPcdr((V491));
	V492= CMPcar((V491));
	goto T902;}
	goto T898;
T898:;
	if(((V472))==Cnil){
	goto T923;}
	V503= list(3,VV[162],(V470),(VFUN_NARGS=3,(*(LnkLI39))((V470),(V475),Cnil)));
	V504= make_cons(/* INLINE-ARGS */V503,Cnil);
	(void)((*(LnkLI309))(/* INLINE-ARGS */V504,(V473)));
	goto T923;
T923:;
	(void)((*(LnkLI309))(VV[163],(V473)));
	base[3]= CMPcar((V473));
	base[4]= (V475);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for MAKE-SHARED-INITIALIZE-FORM-LIST	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V505;
	object V506;
	object V507;
	object V508;
	check_arg(4);
	V505=(base[0]);
	V506=(base[1]);
	V507=(base[2]);
	V508=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V509;
	object V510;
	object V511;
	object V512;
	object V513;
	object V514;
	object V515;
	object V516;
	V509= make_cons(Cnil,Cnil);
	base[12]= (V505);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk295)(Lclptr295);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T932;}
	V510= VV[164];
	goto T930;
	goto T932;
T932:;
	base[12]= (V505);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk297)(Lclptr297);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T936;}
	V510= VV[165];
	goto T930;
	goto T936;
T936:;
	base[12]= (V505);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T940;}
	V510= VV[166];
	goto T930;
	goto T940;
T940:;
	base[12]= VV[167];
	vs_top=(vs_base=base+12)+1;
	Lerror();
	vs_top=sup;
	V510= vs_base[0];
	goto T930;
T930:;
	base[12]= (V505);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V511= vs_base[0];
	if(((V508))==Cnil){
	goto T948;}
	base[12]= ((V511))->v.v_self[12];
	base[13]= VV[168];
	base[14]= (VV[169]->s.s_dbind);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk310)();
	vs_top=sup;
	V512= vs_base[0];
	goto T946;
	goto T948;
T948:;
	V512= Cnil;
	goto T946;
T946:;
	base[12]= (V505);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	V513= vs_base[0];
	base[13]=VV[311]->s.s_gfdef;
	{object V517;
	object V518= (V513);
	if(V518==Cnil){
	V514= Cnil;
	goto T955;}
	base[12]=V517=MMcons(Cnil,Cnil);
	goto T956;
T956:;
	base[14]= (V518->c.c_car);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	(V517->c.c_car)= vs_base[0];
	if((V518=MMcdr(V518))==Cnil){
	V514= base[12];
	goto T955;}
	V517=MMcdr(V517)=MMcons(Cnil,Cnil);
	goto T956;}
	goto T955;
T955:;
	{object V519;
	object V520= (V513);
	if(V520==Cnil){
	V515= Cnil;
	goto T959;}
	base[12]=V519=MMcons(Cnil,Cnil);
	goto T960;
T960:;
	{object V522;
	V522= VV[170];
	{register object V523;
	object V524;
	base[15]= (V520->c.c_car);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V523= vs_base[0];
	V524= CMPcar((V523));
	goto T967;
T967:;
	if(!(((V523))==Cnil)){
	goto T968;}
	goto T962;
	goto T968;
T968:;
	{object V525;
	base[15]= (V524);
	base[16]= (V506);
	vs_top=(vs_base=base+15)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V525= vs_base[0];
	if(((V525))==Cnil){
	goto T972;}
	V522= (number_compare((V522),(V525))<=0?((V522)):(V525));}
	goto T972;
T972:;
	V523= CMPcdr((V523));
	V524= CMPcar((V523));
	goto T967;}
	goto T962;
T962:;
	(V519->c.c_car)= make_cons((V520->c.c_car),(V522));}
	if((V520=MMcdr(V520))==Cnil){
	V515= base[12];
	goto T959;}
	V519=MMcdr(V519)=MMcons(Cnil,Cnil);
	goto T960;}
	goto T959;
T959:;
	base[12]= (V515);
	base[13]= (VV[313]->s.s_gfdef);
	base[14]= VV[171];
	base[15]= (VV[207]->s.s_gfdef);
	vs_top=(vs_base=base+12)+4;
	(void) (*Lnk314)();
	vs_top=sup;
	V516= vs_base[0];
	{long V526;
	V526= 0;
	{register object V527;
	register object V528;
	V527= (V516);
	V528= CMPcar((V527));
	goto T994;
T994:;
	if(!(((V527))==Cnil)){
	goto T995;}
	goto T989;
	goto T995;
T995:;
	{object V529;
	object V530;
	register long V531;
	V529= CMPcar((V528));
	base[15]= (V529);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	V530= vs_base[0];
	V532= CMPcdr((V528));
	V533 = CMPmake_fixnum(V526);
	V534= number_minus(/* INLINE-ARGS */V532,V533);
	V531= fix(one_plus(/* INLINE-ARGS */V534));
	if(eql(CMPcdr((V528)),VV[170])){
	goto T999;}
	{object V535;
	base[16]= (V530);
	base[17]= (V514);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V536= vs_base[0];
	V535= one_plus(V536);
	if(!((V531)>0)){
	goto T1013;}
	V538 = CMPmake_fixnum((long)(2)*(V531));
	V539= list(2,VV[172],V538);
	V537= make_cons(/* INLINE-ARGS */V539,Cnil);
	goto T1011;
	goto T1013;
T1013:;
	V537= Cnil;
	goto T1011;
T1011:;
	V540= list(3,VV[173],(V535),(V529));
	V541= make_cons(/* INLINE-ARGS */V540,Cnil);
	V542= append(V537,/* INLINE-ARGS */V541);
	(void)((*(LnkLI309))(/* INLINE-ARGS */V542,(V509)));}
	V526= (long)(V526)+(V531);}
	goto T999;
T999:;
	V527= CMPcdr((V527));
	V528= CMPcar((V527));
	goto T994;}}
	goto T989;
T989:;
	{register object V543;
	object V544;
	V543= (V516);
	V544= CMPcar((V543));
	goto T1025;
T1025:;
	if(!(((V543))==Cnil)){
	goto T1026;}
	goto T1021;
	goto T1026;
T1026:;
	{register object V545;
	object V546;
	V545= CMPcar((V544));
	base[15]= (V545);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	V546= vs_base[0];
	if(!(eql(CMPcdr((V544)),VV[170]))){
	goto T1030;}
	if(((V507))==(Ct)){
	goto T1034;}
	{register object x= (V546),V547= (V507);
	while(V547!=Cnil)
	if(eql(x,V547->c.c_car)){
	goto T1039;
	}else V547=V547->c.c_cdr;
	goto T1030;}
	goto T1039;
T1039:;
	goto T1034;
T1034:;
	{object V548;
	object V549;
	object V550;
	register object V551;
	register object V552;
	base[20]= (V545);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V548= vs_base[0];
	base[20]= (V545);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	V549= vs_base[0];
	if(((V510))==(VV[164])){
	goto T1046;}
	base[20]= (V545);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V550= vs_base[0];
	goto T1044;
	goto T1046;
T1046:;
	V550= Cnil;
	goto T1044;
T1044:;
	base[20]= (V546);
	base[21]= (V514);
	vs_top=(vs_base=base+20)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V553= vs_base[0];
	V551= one_plus(V553);
	if(((V549))!=Cnil){
	goto T1055;}
	V552= Cnil;
	goto T1053;
	goto T1055;
T1055:;
	base[20]= (V548);
	vs_top=(vs_base=base+20)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1058;}
	{object V554;
	V554= (
	(type_of((V549)) == t_sfun ?(*(((V549))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V549))==t_vfun) ?
	(*(((V549))->sfn.sfn_self)):
	(fcall.fun=((V549)),fcalln))());
	if(((V508))==Cnil){
	goto T1063;}
	if(!(type_of((V550))==t_fixnum||type_of((V550))==t_bignum)){
	goto T1063;}
	(void)((((V512))->v.v_self[fix((V550))]=((V554))));
	V552= Cnil;
	goto T1053;
	goto T1063;
T1063:;
	V555= list(2,VV[174],(V554));
	V552= list(2,/* INLINE-ARGS */V555,list(3,VV[173],(V551),(V545)));
	goto T1053;}
	goto T1058;
T1058:;
	base[20]= (V545);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	V556= vs_base[0];
	V557= list(2,VV[122],V556);
	V552= list(2,/* INLINE-ARGS */V557,list(3,VV[173],(V551),(V545)));
	goto T1053;
T1053:;
	if(((V508))!=Cnil){
	goto T1072;}
	if(((V552))==Cnil){
	goto T1072;}
	V559 = CMPmake_fixnum((long)length((V552)));
	V560= list(4,VV[175],(V551),(V545),V559);
	V558= make_cons(/* INLINE-ARGS */V560,Cnil);
	goto T1070;
	goto T1072;
T1072:;
	V558= Cnil;
	goto T1070;
T1070:;
	V561= append(V558,(V552));
	(void)((*(LnkLI309))(/* INLINE-ARGS */V561,(V509)));}}
	goto T1030;
T1030:;
	V543= CMPcdr((V543));
	V544= CMPcar((V543));
	goto T1025;}
	goto T1021;
T1021:;
	base[12]= CMPcar((V509));
	base[13]= (V512);
	vs_top=(vs_base=base+12)+2;
	return;}
	}
}
/*	local entry for function GET-PV-CELL-FOR-CLASS	*/

static object LI51(V563)

register object V563;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V564;
	object V565;
	register object V566;
	base[4]=VV[311]->s.s_gfdef;
	base[5]= (V563);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	V569= vs_base[0];
	{object V567;
	object V568= V569;
	if(V568==Cnil){
	V564= Cnil;
	goto T1083;}
	base[3]=V567=MMcons(Cnil,Cnil);
	goto T1084;
T1084:;
	base[5]= (V568->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	(V567->c.c_car)= vs_base[0];
	if((V568=MMcdr(V568))==Cnil){
	V564= base[3];
	goto T1083;}
	V567=MMcdr(V567)=MMcons(Cnil,Cnil);
	goto T1084;}
	goto T1083;
T1083:;
	V570= make_cons(Cnil,(V564));
	V565= make_cons(/* INLINE-ARGS */V570,Cnil);
	base[3]= (V563);
	base[4]= (VV[176]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V566= vs_base[0];
	if(((V566))==Cnil){
	goto T1094;}
	if(equal((V565),STREF(object,(V566),8))){
	goto T1093;}
	goto T1094;
T1094:;
	V566= (VFUN_NARGS=2,(*(LnkLI318))(VV[178],(V565)));
	{object V572;
	V572= (VV[176]->s.s_dbind);
	base[3]= V563;
	base[4]= (V572);
	base[5]= V566;
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	goto T1093;
T1093:;
	base[3]= (V563);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V574= vs_base[0];
	{object V575 = (*(LnkLI319))((V566),V574);
	VMR48(V575)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INITIALIZE-INSTANCE-SIMPLE-FUNCTION	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V576;
	object V577;
	object V578;
	object V579;
	check_arg(4);
	V576=(base[0]);
	V577=(base[1]);
	V578=(base[2]);
	V579=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V580;
	object V581;
	register object V582;
	V580= (*(LnkLI320))((V578));
	V581= STREF(object,(V577),0);
	base[7]= CMPcar((V581));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V583= vs_base[0];
	V582= listA(3,(V576),V583,CMPcdr((V581)));
	if(((VV[179]->s.s_dbind))!=Cnil){
	goto T1111;}
	base[7]= (V582);
	base[8]= (VV[180]->s.s_dbind);
	vs_top=(vs_base=base+7)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1112;}
	goto T1111;
T1111:;
	{object V584;
	object V585;
	base[7]= (V580);
	base[8]= (V579);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk321)();
	if(vs_base>=vs_top){vs_top=sup;goto T1121;}
	V584= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1122;}
	V585= vs_base[0];
	vs_top=sup;
	goto T1123;
	goto T1121;
T1121:;
	V584= Cnil;
	goto T1122;
T1122:;
	V585= Cnil;
	goto T1123;
T1123:;
	{register object V586;
	{register object x= (V584),V587= (VV[181]->s.s_dbind);
	while(V587!=Cnil)
	if(equal(x,V587->c.c_car->c.c_car) &&V587->c.c_car != Cnil){
	V586= (V587->c.c_car);
	goto T1124;
	}else V587=V587->c.c_cdr;
	V586= Cnil;}
	goto T1124;
T1124:;
	{object V589;
	V589= (VV[180]->s.s_dbind);
	base[7]= V582;
	base[8]= (V589);
	base[9]= Ct;
	vs_top=(vs_base=base+7)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V586))==Cnil){
	goto T1132;}
	{object V592;
	base[8]= make_cons((V582),Cnil);
	base[9]= CMPcdddr((V586));
	base[10]= VV[12];
	base[11]= (VV[251]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk322)();
	vs_top=sup;
	V592= vs_base[0];
	(CMPcddr(V586))->c.c_cdr = (V592);
	(void)(CMPcddr(V586));
	goto T1130;}
	goto T1132;
T1132:;
	V586= listA(4,(V584),Cnil,Cnil,make_cons((V582),Cnil));{object V593;
	V593= (VV[181]->s.s_dbind);
	V594= make_cons((V586),Cnil);
	(VV[181]->s.s_dbind)= nconc(V593,/* INLINE-ARGS */V594);}
	goto T1130;
T1130:;
	if(((VV[182]->s.s_dbind))!=Cnil){
	goto T1143;}
	if((CMPcadr((V586)))!=Cnil){
	goto T1143;}
	{object V596;
	base[8]= CMPcar((V586));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk323)();
	vs_top=sup;
	V596= vs_base[0];
	(CMPcdr(V586))->c.c_car = (V596);
	(void)(CMPcdr(V586));}
	goto T1143;
T1143:;
	if((CMPcadr((V586)))==Cnil){
	goto T1152;}
	base[7]= CMPcadr((V586));
	{object V597;
	V597= (V585);
	 vs_top=base+8;
	 while(V597!=Cnil)
	 {vs_push((V597)->c.c_car);V597=(V597)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1152;
T1152:;
	base[7]= list(3,VV[138],(V580),(V579));
	vs_top=(vs_base=base+7)+1;
	return;}}
	goto T1112;
T1112:;
	base[7]= list(3,VV[138],(V580),(V579));
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function LOAD-PRECOMPILED-IIS-ENTRY	*/

static object LI53(V602,V603,V604,V605)

object V602;object V603;object V604;object V605;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V606;
	{register object x= (V602),V607= (VV[181]->s.s_dbind);
	while(V607!=Cnil)
	if(equal(x,V607->c.c_car->c.c_car) &&V607->c.c_car != Cnil){
	V606= (V607->c.c_car);
	goto T1156;
	}else V607=V607->c.c_cdr;
	V606= Cnil;}
	goto T1156;
T1156:;
	if(((V606))!=Cnil){
	goto T1157;}
	V606= listA(4,(V602),Cnil,Cnil,Cnil);{object V608;
	V608= (VV[181]->s.s_dbind);
	V609= make_cons((V606),Cnil);
	(VV[181]->s.s_dbind)= nconc(V608,/* INLINE-ARGS */V609);}
	goto T1157;
T1157:;
	(CMPcdr(V606))->c.c_car = V603;
	(void)(CMPcdr(V606));
	(CMPcddr(V606))->c.c_car = V604;
	(void)(CMPcddr(V606));
	{register object V614;
	register object V615;
	V614= (V605);
	V615= CMPcar((V614));
	goto T1171;
T1171:;
	if(!(((V614))==Cnil)){
	goto T1172;}
	goto T1167;
	goto T1172;
T1172:;
	{register object V616;
	register object V617;
	register object V618;
	V616= (V615);
	V617= (VV[180]->s.s_dbind);
	V618= Ct;
	base[1]= (V616);
	base[2]= (V617);
	base[3]= (V618);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	V614= CMPcdr((V614));
	V615= CMPcar((V614));
	goto T1171;}
	goto T1167;
T1167:;
	{object V620;
	base[1]= (V605);
	base[2]= CMPcdddr((V606));
	base[3]= VV[12];
	base[4]= (VV[251]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk322)();
	vs_top=sup;
	V620= vs_base[0];
	(CMPcddr(V606))->c.c_cdr = (V620);
	(void)(CMPcddr(V606));
	{object V621 = (V620);
	VMR50(V621)}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PRECOMPILE-IIS-FUNCTIONS	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V622=base[0]->c.c_cdr;
	if(endp(V622)){
	base[2]= Cnil;
	} else {
	base[2]= (V622->c.c_car);
	V622=V622->c.c_cdr;}
	if(!endp(V622))invalid_macro_call();}
	{register object V623;
	V623= small_fixnum(-1);
	{register object V625;
	register object V626;
	V625= Cnil;
	V626= Cnil;
	{register object V627;
	register object V628;
	V627= (VV[181]->s.s_dbind);
	V628= CMPcar((V627));
	goto T1202;
T1202:;
	if(!(((V627))==Cnil)){
	goto T1203;}
	goto T1198;
	goto T1203;
T1203:;
	if((CMPcaddr((V628)))==Cnil){
	goto T1208;}
	if(!((CMPcaddr((V628)))==(base[2]))){
	goto T1207;}
	goto T1208;
T1208:;
	if((base[2])==Cnil){
	goto T1212;}
	{register object V629;
	register object V630;
	V629= (V628);
	V630= base[2];
	(CMPcddr((V629)))->c.c_car = (V630);
	(void)(CMPcddr((V629)));}
	goto T1212;
T1212:;
	{register object V631;
	V623= number_plus((V623),small_fixnum(1));
	V632= list(3,VV[183],base[2],(V623));
	V633= list(2,VV[4],CMPcar((V628)));
	V634= list(2,VV[186],CMPcar((V628)));
	V635= list(2,VV[4],base[2]);
	V636= list(5,VV[185],/* INLINE-ARGS */V633,/* INLINE-ARGS */V634,/* INLINE-ARGS */V635,list(2,VV[4],CMPcdddr((V628))));
	V631= (*(LnkLI324))(/* INLINE-ARGS */V632,VV[184],/* INLINE-ARGS */V636);
	if(((V625))!=Cnil){
	goto T1221;}
	V626= make_cons((V631),Cnil);
	V625= (V626);
	goto T1207;
	goto T1221;
T1221:;
	V638= make_cons((V631),Cnil);
	((V626))->c.c_cdr = /* INLINE-ARGS */V638;
	V637= (V626);
	V626= CMPcdr(V637);}
	goto T1207;
T1207:;
	V627= CMPcdr((V627));
	V628= CMPcar((V627));
	goto T1202;}
	goto T1198;
T1198:;
	V624= (V625);}
	base[3]= make_cons(VV[6],V624);
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	function definition for COMPILE-IIS-FUNCTIONS	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	bds_check;
	{object V639;
	check_arg(1);
	V639=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (((V639))==Cnil?Ct:Cnil);
	bds_bind(VV[179],Ct);
	bds_bind(VV[91],Ct);
	bds_bind(VV[182],base[3]);
	if(!(((VV[109]->s.s_dbind))==(VV[110]))){
	goto T1234;}
	vs_base=vs_top;
	(void) (*Lnk325)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T1234;
T1234:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function INITIALIZE-INSTANCE-SIMPLE	*/

static object LI56(V644,V645,V646,V647)

object V644;register object V645;object V646;register object V647;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V648;
	register object V649;
	object V650;
	object V651;
	register object V652;
	V648= CMPcar((V644));
	if(type_of(V646)==t_structure){
	goto T1241;}
	goto T1239;
	goto T1241;
T1241:;
	if(!(((V646)->str.str_def)==(VV[187]))){
	goto T1239;}
	V650= STREF(object,(V646),4);
	goto T1237;
	goto T1239;
T1239:;{object V654;
	V654= (VV[188]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V646);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	V655= vs_base[0];
	if(!((V654)==(CMPcar(V655)))){
	goto T1244;}}
	V650= CMPcar(((V646))->cc.cc_turbo[12]);
	goto T1237;
	goto T1244;
T1244:;
	V650= Cnil;
	goto T1237;
T1237:;
	V651= (*(LnkLI328))((V646));
	V649= (V647);
	V652= Cnil;
	goto T1252;
T1252:;
	if(((V645))!=Cnil){
	goto T1254;}
	goto T1250;
	goto T1254;
T1254:;
	{register object V656;
	{object V657;
	V657= CMPcar((V645));
	V645= CMPcdr((V645));
	V656= (V657);}
	{object V658;
	V658= CMPcar((V656));
	{object V659= (V658);
	if((V659!= VV[161]))goto T1262;
	V647= make_cons(V652,(V647));
	{object V661;
	V661= CMPcadr((V656));
	V647= make_cons((V661),(V647));
	goto T1253;}
	goto T1262;
T1262:;
	if((V659!= VV[174]))goto T1267;
	V652= CMPcadr((V656));
	goto T1253;
	goto T1267;
T1267:;
	if((V659!= VV[122]))goto T1269;
	V652= (
	V662 = CMPcadr((V656)),
	(type_of(V662) == t_sfun ?(*((V662)->sfn.sfn_self)):
	(fcall.argd=0,type_of(V662)==t_vfun) ?
	(*((V662)->sfn.sfn_self)):
	(fcall.fun=(V662),fcalln))());
	goto T1253;
	goto T1269;
T1269:;
	if((V659!= VV[172]))goto T1271;
	V663= one_minus(CMPcadr((V656)));
	V649= nthcdr(fix(/* INLINE-ARGS */V663),(V649));
	{object V664;
	V664= CMPcar((V649));
	V649= CMPcdr((V649));
	V652= (V664);}
	goto T1253;
	goto T1271;
T1271:;
	if((V659!= VV[173]))goto T1278;
	{object V665;
	V665= ((V648))->v.v_self[fix(CMPcadr((V656)))];
	if(!(type_of(V665)==t_fixnum)){
	goto T1281;}
	(void)(((V650))->v.v_self[fix((V665))]= ((V652)));
	goto T1253;
	goto T1281;
T1281:;
	if(!(type_of(V665)==t_cons)){
	goto T1284;}
	(V665)->c.c_cdr = V652;
	goto T1253;
	goto T1284;
T1284:;
	{object V671;
	V671= CMPcaddr((V656));
	V673= ({object _tmp=get(VV[204],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[204])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[204])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V674 = V673,
	(type_of(V674) == t_sfun ?(*((V674)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V674)==t_vfun) ?
	(*((V674)->sfn.sfn_self)):
	(fcall.fun=(V674),fcalln))(V652,V651,V646,(V671))));
	goto T1253;}}
	goto T1278;
T1278:;
	if((V659!= VV[175]))goto T1289;
	{object V675;
	V675= ((V648))->v.v_self[fix(CMPcadr((V656)))];
	if(!(type_of(V675)==t_fixnum)){
	goto T1294;}
	if(!((((((V650))->v.v_self[fix((V675))])==(VV[189])?Ct:Cnil))==Cnil)){
	goto T1253;}
	goto T1291;
	goto T1294;
T1294:;
	if(!(type_of(V675)==t_cons)){
	goto T1297;}
	if(!((((CMPcdr((V675)))==(VV[189])?Ct:Cnil))==Cnil)){
	goto T1253;}
	goto T1291;
	goto T1297;
T1297:;
	base[0]= (V651);
	base[1]= (V646);
	base[2]= CMPcaddr((V656));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk213)(Lclptr213);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1253;}}
	goto T1291;
T1291:;
	{long V677;
	register long V678;
	V677= fix(CMPcadddr((V656)));
	V678= 0;
	goto T1305;
T1305:;
	if(!((V678)>=(V677))){
	goto T1306;}
	goto T1253;
	goto T1306;
T1306:;
	{object V679;
	V679= CMPcar((V645));
	V645= CMPcdr((V645));}
	V678= (long)(V678)+1;
	goto T1305;}
	goto T1289;
T1289:;
	if((V659!= VV[162]))goto T1316;
	if(!(type_of((V647))==t_cons)){
	goto T1317;}
	V647= make_cons(CMPcar((V647)),CMPcdr((V647)));
	goto T1317;
T1317:;
	(VV[93]->s.s_dbind)= CMPcadr((V656));
	(VV[94]->s.s_dbind)= (V647);
	(VV[95]->s.s_dbind)= CMPcaddr((V656));
	goto T1253;
	goto T1316;
T1316:;
	if((V659!= VV[329]))goto T1326;
	V649= (V647);
	goto T1253;
	goto T1326;
T1326:;
	base[0]= VV[101];
	base[1]= VV[102];
	base[2]= VV[103];
	base[3]= VV[104];
	base[4]= (V658);
	base[5]= VV[105];
	base[6]= VV[190];
	base[7]= VV[107];
	base[8]= VV[191];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk281)();
	vs_top=sup;}}}
	goto T1253;
T1253:;
	goto T1252;
	goto T1250;
T1250:;
	{object V680 = (V647);
	VMR53(V680)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-TO-CVECTOR	*/

static object LI57(V683,V684)

register object V683;object V684;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;{object V685;
	base[0]= (V684);
	base[1]= (V683);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk312)();
	vs_top=sup;
	V685= vs_base[0];
	if(V685==Cnil)goto T1338;
	{object V686 = V685;
	VMR54(V686)}
	goto T1338;
T1338:;}
	{object V687;
	V687= CMPmake_fixnum((long)(((V683))->st.st_fillp));
	{register object V689;
	register long V690;
	long V691;
	V689= (V683);
	V690= (long)(((V689))->st.st_fillp);
	V691= (long)(((V689))->st.st_dim);
	if(!((V690)<(V691))){
	goto T1348;}
	(void)((((V689))->st.st_fillp)=((long)(1)+(V690)));
	V692 = CMPmake_fixnum(V690);
	(void)(aset1((V689),fix(V692),V684));
	goto T1343;
	goto T1348;
T1348:;
	base[0]= V684;
	base[1]= (V689);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk330)();
	vs_top=sup;}
	goto T1343;
T1343:;
	{object V693 = (V687);
	VMR54(V693)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-FORM-TO-LISP	*/

static object LI60(V697,V698,V699)

register object V697;object V698;register object V699;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	base[0]= (V698);
	{object V700;
	{object V702;
	V702= CMPcdr(CMPcar(V697));
	{object V703;
	V703= CMPcar(CMPcar(V697));
	(V697)->c.c_car = (V702);
	V700= (V703);}}
	{object V704;
	V704= CMPcar((V700));
	{object V705= (V704);
	if((V705!= VV[161]))goto T1360;
	base[1]= CMPcadr((V700));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V706= vs_base[0];
	{object V707 = list(2,VV[192],list(3,VV[57],V706,VV[193]));
	VMR55(V707)}
	goto T1360;
T1360:;
	if((V705!= VV[174]))goto T1363;
	base[1]= CMPcadr((V700));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V708= vs_base[0];
	V709= list(3,VV[194],VV[76],V708);
	{object V710 = make_cons(/* INLINE-ARGS */V709,Cnil);
	VMR55(V710)}
	goto T1363;
T1363:;
	if((V705!= VV[122]))goto T1366;
	base[1]= CMPcadr((V700));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V711= vs_base[0];
	V712= list(3,VV[194],VV[76],list(2,VV[122],list(3,VV[195],VV[186],V711)));
	{object V713 = make_cons(/* INLINE-ARGS */V712,Cnil);
	VMR55(V713)}
	goto T1366;
T1366:;
	if((V705!= VV[172]))goto T1369;
	{object V715;
	V715= one_minus(CMPcadr((V700)));
	{object V716= (V715);
	if(!eql(V716,VV[197]))goto T1372;
	V714= VV[198];
	goto T1370;
	goto T1372;
T1372:;
	if(!eql(V716,VV[199]))goto T1373;
	V714= VV[200];
	goto T1370;
	goto T1373;
T1373:;
	V714= list(2,VV[201],(V715));}}
	goto T1370;
T1370:;
	{object V717 = list(2,list(3,VV[194],VV[196],append(V714,VV[202])),VV[203]);
	VMR55(V717)}
	goto T1369;
T1369:;
	if((V705!= VV[173]))goto T1374;
	{object V718;
	object V719;
	object V720;
	V718= CMPcadr((V700));
	V719= ((V699))->v.v_self[fix((V718))];
	base[4]= CMPcaddr((V700));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V721= vs_base[0];
	V720= list(3,VV[62],list(4,VV[204],VV[111],VV[129],V721),VV[76]);
	if(((VV[205]->s.s_dbind))==Cnil){
	goto T1381;}
	if(!(type_of(V719)==t_fixnum)){
	goto T1384;}
	base[4]= (V719);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V723= vs_base[0];
	V724= list(3,VV[62],list(3,VV[206],VV[58],V723),VV[76]);
	{object V725 = make_cons(/* INLINE-ARGS */V724,Cnil);
	VMR55(V725)}
	goto T1384;
T1384:;
	if(!(type_of(V719)==t_cons)){
	goto T1389;}
	base[4]= (V719);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V726= vs_base[0];
	V727= list(3,VV[62],list(2,VV[207],V726),VV[76]);
	{object V728 = make_cons(/* INLINE-ARGS */V727,Cnil);
	VMR55(V728)}
	goto T1389;
T1389:;
	{object V729 = make_cons((V720),Cnil);
	VMR55(V729)}
	goto T1381;
T1381:;
	base[4]= (V718);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V730= vs_base[0];
	if(!(type_of(V719)==t_fixnum)){
	goto T1397;}
	V731= VV[210];
	goto T1395;
	goto T1397;
T1397:;
	if(!(type_of(V719)==t_cons)){
	goto T1400;}
	V731= VV[211];
	goto T1395;
	goto T1400;
T1400:;
	V731= VV[212];
	goto T1395;
T1395:;
	V733= list(7,VV[208],VV[209],VV[58],V730,VV[76],(V720),V731);
	{object V734 = make_cons(/* INLINE-ARGS */V733,Cnil);
	VMR55(V734)}}
	goto T1374;
T1374:;
	if((V705!= VV[175]))goto T1402;
	{object V735;
	object V736;
	object V737;
	V735= CMPcadr((V700));
	V736= ((V699))->v.v_self[fix((V735))];
	base[4]= CMPcaddr((V700));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V738= vs_base[0];
	V737= list(4,VV[213],VV[111],VV[129],V738);
	if(((VV[205]->s.s_dbind))==Cnil){
	goto T1410;}
	if(!(type_of(V736)==t_fixnum)){
	goto T1413;}
	base[4]= (V736);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V741= vs_base[0];
	V742= list(3,VV[206],VV[58],V741);
	V739= list(2,VV[214],list(3,VV[55],/* INLINE-ARGS */V742,list(2,VV[4],(VV[169]->s.s_dbind))));
	goto T1408;
	goto T1413;
T1413:;
	if(!(type_of(V736)==t_cons)){
	goto T1418;}
	base[4]= (V736);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V743= vs_base[0];
	V744= list(2,VV[207],V743);
	V739= list(2,VV[214],list(3,VV[55],/* INLINE-ARGS */V744,list(2,VV[4],(VV[169]->s.s_dbind))));
	goto T1408;
	goto T1418;
T1418:;
	V739= (V737);
	goto T1408;
	goto T1410;
T1410:;
	base[4]= (V735);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V745= vs_base[0];
	{object V747;
	V747= ((V699))->v.v_self[fix((V735))];
	if(!(type_of((V747))==t_fixnum)){
	goto T1427;}
	V746= VV[210];
	goto T1424;
	goto T1427;
T1427:;
	if(!(type_of((V747))==t_cons)){
	goto T1430;}
	V746= VV[211];
	goto T1424;
	goto T1430;
T1430:;
	V746= VV[212];}
	goto T1424;
T1424:;
	V739= list(6,VV[215],VV[209],VV[58],V745,(V737),V746);
	goto T1408;
T1408:;
	{register object V749;
	V749= make_cons(Cnil,Cnil);
	{long V750;
	register long V751;
	V750= fix(CMPcadddr((V700)));
	V751= 0;
	goto T1437;
T1437:;
	if(!((V751)>=(V750))){
	goto T1438;}
	V748= CMPcar((V749));
	goto T1432;
	goto T1438;
T1438:;
	V752= (*(LnkLI331))((V697),base[0],(V699));
	(void)((*(LnkLI309))(/* INLINE-ARGS */V752,(V749)));
	V751= (long)(V751)+1;
	goto T1437;}}
	goto T1432;
T1432:;
	V753= listA(3,VV[54],V739,V748);
	{object V754 = make_cons(/* INLINE-ARGS */V753,Cnil);
	VMR55(V754)}}
	goto T1402;
T1402:;
	if((V705!= VV[162]))goto T1445;
	base[1]= CMPcadr((V700));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V755= vs_base[0];
	V756= list(3,VV[194],VV[93],V755);
	base[1]= CMPcaddr((V700));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V757= vs_base[0];
	{object V758 = list(4,VV[216],/* INLINE-ARGS */V756,VV[217],list(3,VV[194],VV[95],V757));
	VMR55(V758)}
	goto T1445;
T1445:;
	if((V705!= VV[329]))goto T1450;
	{object V759 = VV[218];
	VMR55(V759)}
	goto T1450;
T1450:;
	base[1]= VV[101];
	base[2]= VV[102];
	base[3]= VV[103];
	base[4]= VV[104];
	base[5]= (V704);
	base[6]= VV[105];
	base[7]= VV[227];
	base[8]= VV[107];
	base[9]= VV[228];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk281)();
	vs_top=sup;
	{object V760 = vs_base[0];
	VMR55(V760)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for IIS-BODY	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V761=base[0]->c.c_cdr;
	base[2]= V761;}
	V763= listA(3,VV[231],VV[232],base[2]);
	base[3]= listA(3,VV[52],VV[230],append(VV[229],/* INLINE-ARGS */V763));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for FORM-LIST-TO-LISP	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V764;
	object V765;
	check_arg(2);
	V764=(base[0]);
	V765=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V766;
	register object V767;
	register object V768;
	object V769;
	object V770;
	V766= make_cons((V765),Cnil);
	base[8]= CMPmake_fixnum((long)length((V765)));
	base[9]= small_fixnum(2);
	vs_top=(vs_base=base+8)+2;
	Lfloor();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[233];
	base[9]= small_fixnum(0);
	base[10]= VV[234];
	base[11]= Ct;
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk310)();
	vs_top=sup;
	V767= vs_base[0];
	V768= CMPcar((V764));
	{register object V771;
	V771= make_cons(Cnil,Cnil);
	goto T1473;
T1473:;
	if((CMPcar((V766)))!=Cnil){
	goto T1475;}
	V769= CMPcar((V771));
	goto T1470;
	goto T1475;
T1475:;
	V772= (*(LnkLI331))((V766),(V767),(V768));
	(void)((*(LnkLI309))(/* INLINE-ARGS */V772,(V771)));
	goto T1473;}
	goto T1470;
T1470:;
	V773 = CMPmake_fixnum((long)length((V767)));
	V770= list(2,VV[235],V773);
	V774= list(2,VV[238],list(3,VV[239],(V770),VV[222]));
	base[7]= list(4,VV[236],VV[237],/* INLINE-ARGS */V774,list(2,VV[186],list(5,VV[236],VV[240],VV[241],make_cons(VV[242],(V769)),VV[193])));
	base[9]= (V767);
	base[10]= (V770);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk332)();
	vs_top=sup;
	V775= vs_base[0];
	base[8]= list(2,(V764),V775);
	vs_top=(vs_base=base+7)+2;
	return;}
	}
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static object LI64(V777)

object V777;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	V778= make_cons((V777),Cnil);
	(void)((*(LnkLI7))(/* INLINE-ARGS */V778));
	{object V779 = (*(LnkLI75))((V777));
	VMR58(V779)}
	return Cnil;
}
/*	local function CONST	*/

static void L61(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{object V780;
	check_arg(1);
	V780=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V780))==t_fixnum||
type_of((V780))==t_bignum||
type_of((V780))==t_ratio||
type_of((V780))==t_shortfloat||
type_of((V780))==t_longfloat||
type_of((V780))==t_complex){
	goto T1486;}
	if(!(type_of((V780))==t_character)){
	goto T1487;}
	goto T1486;
T1486:;
	base[1]= (V780);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1487;
T1487:;
	if(!(type_of((V780))==t_symbol)){
	goto T1492;}
	base[1]= (V780);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1492;}
	base[1]= list(2,VV[4],(V780));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1492;
T1492:;
	base[1]= list(3,VV[221],VV[222],(*(LnkLI333))(base0[0],(V780)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC71(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	{object V781;
	object V782;
	if(vs_top-vs_base<1) too_few_arguments();
	V781=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V782=(base[1]);
	vs_top=sup;
	{object V783;
	if(((base0[3]->c.c_car))==Cnil){
	goto T1499;}
	V783= (VFUN_NARGS=2,(*(LnkLI334))((base0[4]->c.c_car),(base0[3]->c.c_car)));
	goto T1497;
	goto T1499;
T1499:;
	V783= (V781);
	goto T1497;
T1497:;
	if(!(((V783))==((V781)))){
	goto T1501;}
	if(!((((((base0[2]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1502;}
	goto T1501;
T1501:;
	base[2]= (V783);
	base[3]= (V782);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk132)();
	return;
	goto T1502;
T1502:;
	{register object V784;
	register object V785;
	{register object V786;
	V786= (base0[6]->c.c_car);
	if(!(type_of((V786))==t_cons)){
	goto T1510;}
	if(!((CMPcar((V786)))==(VV[138]))){
	goto T1510;}
	V784= (*(LnkLI119))(CMPcadr((V786)),CMPcaddr((V786)),Cnil,(V782));
	goto T1508;
	goto T1510;
T1510:;
	V784= (
	(type_of((V786)) == t_sfun ?(*(((V786))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V786))==t_vfun) ?
	(*(((V786))->sfn.sfn_self)):
	(fcall.fun=((V786)),fcalln))(Cnil,(V782)));}
	goto T1508;
T1508:;
	base[4]=VV[96]->s.s_gfdef;
	base[5]= (base0[7]->c.c_car);
	{object V787;
	V787= (V784);
	 vs_top=base+6;
	 while(V787!=Cnil)
	 {vs_push((V787)->c.c_car);V787=(V787)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk96)(Lclptr96);
	vs_top=sup;
	V785= vs_base[0];
	base[4]= (base0[0]->c.c_car);
	base[5]= VV[139];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1520;}
	(void)((
	V788 = STREF(object,(base0[0]->c.c_car),0),
	(type_of(V788) == t_sfun ?(*((V788)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V788)==t_vfun) ?
	(*((V788)->sfn.sfn_self)):
	(fcall.fun=(V788),fcalln))(STREF(object,(base0[0]->c.c_car),4),STREF(object,(base0[0]->c.c_car),8),(V785),(V784))));
	goto T1517;
	goto T1520;
T1520:;
	{object V789;
	V789= (base0[0]->c.c_car);
	{register object V790;
	V790= (V789);
	base[4]= (V790);
	base[5]= VV[140];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1525;}
	{object V791;
	object V792;
	register object V793;
	V791= STREF(object,(base0[0]->c.c_car),0);
	V792= make_cons((V785),(V784));
	V793= STREF(object,(base0[0]->c.c_car),4);
	if(((V793))==Cnil){
	goto T1533;}
	if((CMPcdr((V793)))!=Cnil){
	goto T1533;}
	(void)((
	(type_of((V791)) == t_sfun ?(*(((V791))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V791))==t_vfun) ?
	(*(((V791))->sfn.sfn_self)):
	(fcall.fun=((V791)),fcalln))((V792),CMPcar((V793)))));
	goto T1517;
	goto T1533;
T1533:;
	base[4]= (V791);
	base[5]= (V792);
	{object V794;
	V794= (V793);
	 vs_top=base+6;
	 while(V794!=Cnil)
	 {vs_push((V794)->c.c_car);V794=(V794)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1517;}
	goto T1525;
T1525:;
	base[4]= (V790);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1541;}
	base[4]= (base0[0]->c.c_car);
	base[5]= (V785);
	{object V795;
	V795= (V784);
	 vs_top=base+6;
	 while(V795!=Cnil)
	 {vs_push((V795)->c.c_car);V795=(V795)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1517;
	goto T1541;
T1541:;
	base[4]= VV[101];
	base[5]= VV[102];
	base[6]= VV[141];
	base[7]= VV[104];
	base[8]= (V789);
	base[9]= VV[105];
	base[10]= VV[159];
	base[11]= VV[107];
	base[12]= VV[160];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk281)();
	vs_top=sup;}}
	goto T1517;
T1517:;
	base[4]= (V785);
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC70(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	{object V796;
	object V797;
	if(vs_top-vs_base<1) too_few_arguments();
	V796=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V797=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= VV[139];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1558;}
	base[2]= STREF(object,(base0[0]->c.c_car),0);
	base[3]= STREF(object,(base0[0]->c.c_car),4);
	base[4]= STREF(object,(base0[0]->c.c_car),8);
	base[5]= (V796);
	base[6]= Ct;
	base[7]= (V797);
	vs_top=(vs_base=base+3)+5;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1558;
T1558:;
	{object V798;
	V798= (base0[0]->c.c_car);
	{register object V799;
	V799= (V798);
	base[2]= (V799);
	base[3]= VV[140];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1569;}
	{object V800;
	object V801;
	register object V802;
	V800= STREF(object,(base0[0]->c.c_car),0);
	V801= listA(3,(V796),Ct,(V797));
	V802= STREF(object,(base0[0]->c.c_car),4);
	if(((V802))==Cnil){
	goto T1577;}
	if((CMPcdr((V802)))!=Cnil){
	goto T1577;}
	base[2]= (V801);
	base[3]= CMPcar((V802));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V800);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1577;
T1577:;
	base[2]= (V800);
	base[3]= (V801);
	{object V803;
	V803= (V802);
	 vs_top=base+4;
	 while(V803!=Cnil)
	 {vs_push((V803)->c.c_car);V803=(V803)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1569;
T1569:;
	base[2]= (V799);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1587;}
	base[2]= (base0[0]->c.c_car);
	base[3]= (V796);
	base[4]= Ct;
	{object V804;
	V804= (V797);
	 vs_top=base+5;
	 while(V804!=Cnil)
	 {vs_push((V804)->c.c_car);V804=(V804)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1587;
T1587:;
	base[2]= VV[101];
	base[3]= VV[102];
	base[4]= VV[141];
	base[5]= VV[104];
	base[6]= (V798);
	base[7]= VV[105];
	base[8]= VV[157];
	base[9]= VV[107];
	base[10]= VV[158];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk281)();
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC69(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	{object V805;
	object V806;
	object V807;
	if(vs_top-vs_base<2) too_few_arguments();
	V805=(base[0]);
	V806=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V807=(base[2]);
	vs_top=sup;
	{register object V808;
	V808= (base0[3]->c.c_car);
	if(!(type_of((V808))==t_cons)){
	goto T1605;}
	if(!((CMPcar((V808)))==(VV[138]))){
	goto T1605;}
	(void)((*(LnkLI119))(CMPcadr((V808)),CMPcaddr((V808)),(V805),(V807)));
	goto T1603;
	goto T1605;
T1605:;
	(void)((
	(type_of((V808)) == t_sfun ?(*(((V808))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V808))==t_vfun) ?
	(*(((V808))->sfn.sfn_self)):
	(fcall.fun=((V808)),fcalln))((V805),(V807))));}
	goto T1603;
T1603:;
	base[3]= (V805);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC68(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{object V809;
	object V810;
	if(vs_top-vs_base<1) too_few_arguments();
	V809=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V810=(base[1]);
	vs_top=sup;
	{object V811;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1611;}
	V811= (VFUN_NARGS=2,(*(LnkLI334))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1609;
	goto T1611;
T1611:;
	V811= (V809);
	goto T1609;
T1609:;
	if(!(((V811))==((V809)))){
	goto T1613;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1614;}
	goto T1613;
T1613:;
	base[2]= (V811);
	base[3]= (V810);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk132)();
	return;
	goto T1614;
T1614:;
	{register object V812;
	object V813;
	V812= (
	(type_of((base0[4]->c.c_car)) == t_sfun ?(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=2,type_of((base0[4]->c.c_car))==t_vfun) ?
	(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[4]->c.c_car)),fcalln))((base0[5]->c.c_car),(base0[0]->c.c_car)));
	{object V814;
	V814= (base0[1]->c.c_car);
	if(!(type_of((V814))==t_cons)){
	goto T1623;}
	if(!((CMPcar((V814)))==(VV[138]))){
	goto T1623;}
	V813= (*(LnkLI119))(CMPcadr((V814)),CMPcaddr((V814)),(V812),(V810));
	goto T1621;
	goto T1623;
T1623:;
	V813= (
	(type_of((V814)) == t_sfun ?(*(((V814))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V814))==t_vfun) ?
	(*(((V814))->sfn.sfn_self)):
	(fcall.fun=((V814)),fcalln))((V812),(V810)));}
	goto T1621;
T1621:;
	{object V815;
	register object V816;
	V815= (base0[3]->c.c_car);
	V816= CMPcar((V815));
	goto T1631;
T1631:;
	if(!(((V815))==Cnil)){
	goto T1632;}
	goto T1627;
	goto T1632;
T1632:;
	base[5]= (V816);
	base[6]= VV[139];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1639;}
	(void)((
	V817 = STREF(object,(V816),0),
	(type_of(V817) == t_sfun ?(*((V817)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V817)==t_vfun) ?
	(*((V817)->sfn.sfn_self)):
	(fcall.fun=(V817),fcalln))(STREF(object,(V816),4),STREF(object,(V816),8),(V812),Ct,(V813))));
	goto T1636;
	goto T1639;
T1639:;
	base[5]= V816;
	base[6]= VV[140];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1644;}
	{object V820;
	object V821;
	object V822;
	V820= STREF(object,(V816),0);
	V821= listA(3,(V812),Ct,(V813));
	V822= STREF(object,(V816),4);
	if(((V822))==Cnil){
	goto T1652;}
	if((CMPcdr((V822)))!=Cnil){
	goto T1652;}
	(void)((
	(type_of((V820)) == t_sfun ?(*(((V820))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V820))==t_vfun) ?
	(*(((V820))->sfn.sfn_self)):
	(fcall.fun=((V820)),fcalln))((V821),CMPcar((V822)))));
	goto T1636;
	goto T1652;
T1652:;
	base[5]= (V820);
	base[6]= (V821);
	{object V823;
	V823= (V822);
	 vs_top=base+7;
	 while(V823!=Cnil)
	 {vs_push((V823)->c.c_car);V823=(V823)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1636;}
	goto T1644;
T1644:;
	base[5]= V816;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1660;}
	base[5]= (V816);
	base[6]= (V812);
	base[7]= Ct;
	{object V824;
	V824= (V813);
	 vs_top=base+8;
	 while(V824!=Cnil)
	 {vs_push((V824)->c.c_car);V824=(V824)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1636;
	goto T1660;
T1660:;
	base[5]= VV[101];
	base[6]= VV[102];
	base[7]= VV[141];
	base[8]= VV[104];
	base[9]= V816;
	base[10]= VV[105];
	base[11]= VV[146];
	base[12]= VV[107];
	base[13]= VV[147];
	vs_top=(vs_base=base+5)+9;
	(void) (*Lnk281)();
	vs_top=sup;
	goto T1636;
T1636:;
	V815= CMPcdr((V815));
	V816= CMPcar((V815));
	goto T1631;}
	goto T1627;
T1627:;
	{object V825;
	register object V826;
	V825= (base0[2]->c.c_car);
	V826= CMPcar((V825));
	goto T1685;
T1685:;
	if(!(((V825))==Cnil)){
	goto T1686;}
	goto T1681;
	goto T1686;
T1686:;
	base[5]= (V826);
	base[6]= VV[139];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1693;}
	(void)((
	V827 = STREF(object,(V826),0),
	(type_of(V827) == t_sfun ?(*((V827)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V827)==t_vfun) ?
	(*((V827)->sfn.sfn_self)):
	(fcall.fun=(V827),fcalln))(STREF(object,(V826),4),STREF(object,(V826),8),(V812),(V813))));
	goto T1690;
	goto T1693;
T1693:;
	base[5]= V826;
	base[6]= VV[140];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1698;}
	{object V830;
	object V831;
	object V832;
	V830= STREF(object,(V826),0);
	V831= make_cons((V812),(V813));
	V832= STREF(object,(V826),4);
	if(((V832))==Cnil){
	goto T1706;}
	if((CMPcdr((V832)))!=Cnil){
	goto T1706;}
	(void)((
	(type_of((V830)) == t_sfun ?(*(((V830))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V830))==t_vfun) ?
	(*(((V830))->sfn.sfn_self)):
	(fcall.fun=((V830)),fcalln))((V831),CMPcar((V832)))));
	goto T1690;
	goto T1706;
T1706:;
	base[5]= (V830);
	base[6]= (V831);
	{object V833;
	V833= (V832);
	 vs_top=base+7;
	 while(V833!=Cnil)
	 {vs_push((V833)->c.c_car);V833=(V833)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1690;}
	goto T1698;
T1698:;
	base[5]= V826;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1714;}
	base[5]= (V826);
	base[6]= (V812);
	{object V834;
	V834= (V813);
	 vs_top=base+7;
	 while(V834!=Cnil)
	 {vs_push((V834)->c.c_car);V834=(V834)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1690;
	goto T1714;
T1714:;
	base[5]= VV[101];
	base[6]= VV[102];
	base[7]= VV[141];
	base[8]= VV[104];
	base[9]= V826;
	base[10]= VV[105];
	base[11]= VV[148];
	base[12]= VV[107];
	base[13]= VV[149];
	vs_top=(vs_base=base+5)+9;
	(void) (*Lnk281)();
	vs_top=sup;
	goto T1690;
T1690:;
	V825= CMPcdr((V825));
	V826= CMPcar((V825));
	goto T1685;}
	goto T1681;
T1681:;
	base[4]= (V812);
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC67(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V835;
	register object V836;
	if(vs_top-vs_base<1) too_few_arguments();
	V835=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V836=(base[1]);
	vs_top=sup;
	{object V837;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1736;}
	V837= (VFUN_NARGS=2,(*(LnkLI334))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1734;
	goto T1736;
T1736:;
	V837= (V835);
	goto T1734;
T1734:;
	if(!(((V837))==((V835)))){
	goto T1738;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1739;}
	goto T1738;
T1738:;
	base[2]= (V837);
	base[3]= (V836);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk132)();
	return;
	goto T1739;
T1739:;
	{register object V838;
	{object V839;
	V839= (*(LnkLI336))();
	V840= Ct;
	STSET(object,(V839),0, (base0[5]->c.c_car));
	(void)((base0[5]->c.c_car));
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lcopy_seq();
	vs_top=sup;
	V841= vs_base[0];
	V842= Ct;
	STSET(object,(V839),4, V841);
	(void)(V841);
	V838= (V839);}
	{object V843;
	V843= (base0[1]->c.c_car);
	if(!(type_of((V843))==t_cons)){
	goto T1753;}
	if(!((CMPcar((V843)))==(VV[138]))){
	goto T1753;}
	(void)((*(LnkLI119))(CMPcadr((V843)),CMPcaddr((V843)),(V838),(V836)));
	goto T1751;
	goto T1753;
T1753:;
	(void)((
	(type_of((V843)) == t_sfun ?(*(((V843))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V843))==t_vfun) ?
	(*(((V843))->sfn.sfn_self)):
	(fcall.fun=((V843)),fcalln))((V838),(V836))));}
	goto T1751;
T1751:;
	{object V844;
	register object V845;
	V844= (base0[3]->c.c_car);
	V845= CMPcar((V844));
	goto T1761;
T1761:;
	if(!(((V844))==Cnil)){
	goto T1762;}
	goto T1757;
	goto T1762;
T1762:;
	base[3]= (V845);
	base[4]= VV[139];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1769;}
	(void)((
	V846 = STREF(object,(V845),0),
	(type_of(V846) == t_sfun ?(*((V846)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V846)==t_vfun) ?
	(*((V846)->sfn.sfn_self)):
	(fcall.fun=(V846),fcalln))(STREF(object,(V845),4),STREF(object,(V845),8),(V838),Ct,(V836))));
	goto T1766;
	goto T1769;
T1769:;
	base[3]= V845;
	base[4]= VV[140];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1774;}
	{object V849;
	object V850;
	object V851;
	V849= STREF(object,(V845),0);
	V850= listA(3,(V838),Ct,(V836));
	V851= STREF(object,(V845),4);
	if(((V851))==Cnil){
	goto T1782;}
	if((CMPcdr((V851)))!=Cnil){
	goto T1782;}
	(void)((
	(type_of((V849)) == t_sfun ?(*(((V849))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V849))==t_vfun) ?
	(*(((V849))->sfn.sfn_self)):
	(fcall.fun=((V849)),fcalln))((V850),CMPcar((V851)))));
	goto T1766;
	goto T1782;
T1782:;
	base[3]= (V849);
	base[4]= (V850);
	{object V852;
	V852= (V851);
	 vs_top=base+5;
	 while(V852!=Cnil)
	 {vs_push((V852)->c.c_car);V852=(V852)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1766;}
	goto T1774;
T1774:;
	base[3]= V845;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1790;}
	base[3]= (V845);
	base[4]= (V838);
	base[5]= Ct;
	{object V853;
	V853= (V836);
	 vs_top=base+6;
	 while(V853!=Cnil)
	 {vs_push((V853)->c.c_car);V853=(V853)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1766;
	goto T1790;
T1790:;
	base[3]= VV[101];
	base[4]= VV[102];
	base[5]= VV[141];
	base[6]= VV[104];
	base[7]= V845;
	base[8]= VV[105];
	base[9]= VV[142];
	base[10]= VV[107];
	base[11]= VV[143];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk281)();
	vs_top=sup;
	goto T1766;
T1766:;
	V844= CMPcdr((V844));
	V845= CMPcar((V844));
	goto T1761;}
	goto T1757;
T1757:;
	{object V854;
	register object V855;
	V854= (base0[2]->c.c_car);
	V855= CMPcar((V854));
	goto T1815;
T1815:;
	if(!(((V854))==Cnil)){
	goto T1816;}
	goto T1811;
	goto T1816;
T1816:;
	base[3]= (V855);
	base[4]= VV[139];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1823;}
	(void)((
	V856 = STREF(object,(V855),0),
	(type_of(V856) == t_sfun ?(*((V856)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V856)==t_vfun) ?
	(*((V856)->sfn.sfn_self)):
	(fcall.fun=(V856),fcalln))(STREF(object,(V855),4),STREF(object,(V855),8),(V838),(V836))));
	goto T1820;
	goto T1823;
T1823:;
	base[3]= V855;
	base[4]= VV[140];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk335)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1828;}
	{object V859;
	object V860;
	object V861;
	V859= STREF(object,(V855),0);
	V860= make_cons((V838),(V836));
	V861= STREF(object,(V855),4);
	if(((V861))==Cnil){
	goto T1836;}
	if((CMPcdr((V861)))!=Cnil){
	goto T1836;}
	(void)((
	(type_of((V859)) == t_sfun ?(*(((V859))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V859))==t_vfun) ?
	(*(((V859))->sfn.sfn_self)):
	(fcall.fun=((V859)),fcalln))((V860),CMPcar((V861)))));
	goto T1820;
	goto T1836;
T1836:;
	base[3]= (V859);
	base[4]= (V860);
	{object V862;
	V862= (V861);
	 vs_top=base+5;
	 while(V862!=Cnil)
	 {vs_push((V862)->c.c_car);V862=(V862)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1820;}
	goto T1828;
T1828:;
	base[3]= V855;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1844;}
	base[3]= (V855);
	base[4]= (V838);
	{object V863;
	V863= (V836);
	 vs_top=base+5;
	 while(V863!=Cnil)
	 {vs_push((V863)->c.c_car);V863=(V863)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1820;
	goto T1844;
T1844:;
	base[3]= VV[101];
	base[4]= VV[102];
	base[5]= VV[141];
	base[6]= VV[104];
	base[7]= V855;
	base[8]= VV[105];
	base[9]= VV[144];
	base[10]= VV[107];
	base[11]= VV[145];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk281)();
	vs_top=sup;
	goto T1820;
T1820:;
	V854= CMPcdr((V854));
	V855= CMPcar((V854));
	goto T1815;}
	goto T1811;
T1811:;
	base[2]= (V838);
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local function CHECK-METH	*/

static void LC34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	{object V864;
	check_arg(1);
	V864=(base[0]);
	vs_top=sup;
	{register object V865;
	base[1]= (V864);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	V865= vs_base[0];
	if(((V865))!=Cnil){
	goto T1867;}
	base[1]= (V864);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V866= vs_base[0];
	base[1]= ((CMPcar(V866))==((VV[1]->s.s_dbind))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1867;
T1867:;
	if((CMPcdr((V865)))==Cnil){
	goto T1871;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1871;
T1871:;
	if(!((CMPcar((V865)))==(VV[114]))){
	goto T1873;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1873;
T1873:;
	base[1]= ((CMPcar((V865)))==(VV[115])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	{object V867;
	object V868;
	if(vs_top-vs_base<1) too_few_arguments();
	V867=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V868=(base[1]);
	vs_top=sup;
	base[2]=VV[337]->s.s_gfdef;
	base[3]= (base0[0]->c.c_car);
	base[4]= (V867);
	{object V869;
	V869= (V868);
	 vs_top=base+5;
	 while(V869!=Cnil)
	 {vs_push((V869)->c.c_car);V869=(V869)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk337)(Lclptr337);
	return;
	}
}
/*	local function COMPUTE-VALID-P	*/

static void L32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V870;
	check_arg(1);
	V870=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((((base0[3])==Cnil?Ct:Cnil))==Cnil)){
	goto T1878;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1878;
T1878:;
	{register object V871;
	object V872;
	base[1]= base0[1];
	base[2]= (V870);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk338)();
	if(vs_base>=vs_top){vs_top=sup;goto T1883;}
	V871= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1884;}
	V872= vs_base[0];
	vs_top=sup;
	goto T1885;
	goto T1883;
T1883:;
	V871= Cnil;
	goto T1884;
T1884:;
	V872= Cnil;
	goto T1885;
T1885:;
	if(!(((((V872))==Cnil?Ct:Cnil))==Cnil)){
	goto T1886;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1886;
T1886:;
	{register object V873;
	register object V874;
	V873= base0[2];
	V874= CMPcar((V873));
	goto T1891;
T1891:;
	if(!(((V873))==Cnil)){
	goto T1892;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1892;
T1892:;
	{register object x= (V874),V875= (V871);
	while(V875!=Cnil)
	if(eql(x,V875->c.c_car)){
	goto T1896;
	}else V875=V875->c.c_cdr;}
	if(((V874))==(VV[2])){
	goto T1896;}
	base[2]= make_cons(VV[100],(V874));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1896;
T1896:;
	V873= CMPcdr((V873));
	V874= CMPcar((V873));
	goto T1891;}}
	}
}
/*	local function CLOSURE	*/

static void LC65(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{register object V876;
	object V877;
	object V878;
	check_arg(3);
	V876=(base[0]);
	V877=(base[1]);
	V878=(base[2]);
	vs_top=sup;{object V879;
	if(((V877))==(VV[8])){
	goto T1908;}
	V879= Cnil;
	goto T1907;
	goto T1908;
T1908:;
	if(type_of((V876))==t_cons){
	goto T1910;}
	V879= Cnil;
	goto T1907;
	goto T1910;
T1910:;
	if((CMPcar((V876)))==(VV[9])){
	goto T1912;}
	V879= Cnil;
	goto T1907;
	goto T1912;
T1912:;
	V879= (*(LnkLI339))((V876));
	goto T1907;
T1907:;
	if(V879==Cnil)goto T1906;
	base[3]= V879;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1906;
T1906:;}
	base[3]= (V876);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
static object  LnkTLI339(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[339],(void **)(void *)&LnkLI339,1,first,ap);va_end(ap);return V1;} /* EXPAND-MAKE-INSTANCE-FORM */
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* CHECK-INITARGS-VALUES */
static void LnkT337(ptr) object *ptr;{ call_or_link_closure(VV[337],(void **)(void *)&Lnk337,(void **)(void *)&Lclptr337);} /* NO-APPLICABLE-METHOD */
static object  LnkTLI336(){return call_proc0(VV[336],(void **)(void *)&LnkLI336);} /* %%ALLOCATE-INSTANCE--CLASS */
static void LnkT335(){ call_or_link(VV[335],(void **)(void *)&Lnk335);} /* STRUCTURE-SUBTYPE-P */
static void LnkT96(ptr) object *ptr;{ call_or_link_closure(VV[96],(void **)(void *)&Lnk96,(void **)(void *)&Lclptr96);} /* ALLOCATE-INSTANCE */
static object  LnkTLI119(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[119],(void **)(void *)&LnkLI119,4,first,ap);va_end(ap);return V1;} /* INITIALIZE-INSTANCE-SIMPLE */
static void LnkT132(){ call_or_link(VV[132],(void **)(void *)&Lnk132);} /* MAKE-INSTANCE-FUNCTION-TRAP */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[334],(void **)(void *)&LnkLI334,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static object  LnkTLI333(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[333],(void **)(void *)&LnkLI333,2,first,ap);va_end(ap);return V1;} /* ADD-TO-CVECTOR */
static object  LnkTLI7(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[7],(void **)(void *)&LnkLI7,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTIONS */
static void LnkT332(){ call_or_link(VV[332],(void **)(void *)&Lnk332);} /* COERCE */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,3,first,ap);va_end(ap);return V1;} /* FIRST-FORM-TO-LISP */
static void LnkT330(){ call_or_link(VV[330],(void **)(void *)&Lnk330);} /* VECTOR-PUSH-EXTEND */
static void LnkT213(ptr) object *ptr;{ call_or_link_closure(VV[213],(void **)(void *)&Lnk213,(void **)(void *)&Lclptr213);} /* SLOT-BOUNDP-USING-CLASS */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)(void *)&LnkLI328,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[327],(void **)(void *)&LnkLI327,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT326(){ call_or_link(VV[326],(void **)(void *)&Lnk326);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT325(){ call_or_link(VV[325],(void **)(void *)&Lnk325);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[324],(void **)(void *)&LnkLI324,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT323(){ call_or_link(VV[323],(void **)(void *)&Lnk323);} /* COMPILE-LAMBDA */
static void LnkT322(){ call_or_link(VV[322],(void **)(void *)&Lnk322);} /* UNION */
static void LnkT321(){ call_or_link(VV[321],(void **)(void *)&Lnk321);} /* FORM-LIST-TO-LISP */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[320],(void **)(void *)&LnkLI320,1,first,ap);va_end(ap);return V1;} /* GET-PV-CELL-FOR-CLASS */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[319],(void **)(void *)&LnkLI319,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[318],(void **)(void *)&LnkLI318,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static void LnkT317(ptr) object *ptr;{ call_or_link_closure(VV[317],(void **)(void *)&Lnk317,(void **)(void *)&Lclptr317);} /* SLOT-DEFINITION-LOCATION */
static void LnkT316(ptr) object *ptr;{ call_or_link_closure(VV[316],(void **)(void *)&Lnk316,(void **)(void *)&Lclptr316);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT315(ptr) object *ptr;{ call_or_link_closure(VV[315],(void **)(void *)&Lnk315,(void **)(void *)&Lclptr315);} /* SLOT-DEFINITION-INITFORM */
static void LnkT314(){ call_or_link(VV[314],(void **)(void *)&Lnk314);} /* STABLE-SORT */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* POSITION */
static void LnkT311(ptr) object *ptr;{ call_or_link_closure(VV[311],(void **)(void *)&Lnk311,(void **)(void *)&Lclptr311);} /* SLOT-DEFINITION-NAME */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* MAKE-ARRAY */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[309],(void **)(void *)&LnkLI309,2,first,ap);va_end(ap);return V1;} /* ADD-FORMS */
static void LnkT308(ptr) object *ptr;{ call_or_link_closure(VV[308],(void **)(void *)&Lnk308,(void **)(void *)&Lclptr308);} /* SLOT-DEFINITION-INITARGS */
static void LnkT307(ptr) object *ptr;{ call_or_link_closure(VV[307],(void **)(void *)&Lnk307,(void **)(void *)&Lclptr307);} /* CLASS-SLOTS */
static void LnkT306(ptr) object *ptr;{ call_or_link_closure(VV[306],(void **)(void *)&Lnk306,(void **)(void *)&Lclptr306);} /* CLASS-DEFAULT-INITARGS */
static void LnkT305(){ call_or_link(VV[305],(void **)(void *)&Lnk305);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static void LnkT304(){ call_or_link(VV[304],(void **)(void *)&Lnk304);} /* GET-COMPLEX-INITIALIZATION-FUNCTIONS */
static void LnkT303(){ call_or_link(VV[303],(void **)(void *)&Lnk303);} /* GET-SIMPLE-INITIALIZATION-FUNCTION */
static void LnkT302(){ call_or_link(VV[302],(void **)(void *)&Lnk302);} /* MAKE-EFFECTIVE-METHOD-FUNCTION */
static void LnkT301(){ call_or_link(VV[301],(void **)(void *)&Lnk301);} /* REMOVE */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* FUNCALLABLE-STANDARD-CLASS-P */
static void LnkT297(ptr) object *ptr;{ call_or_link_closure(VV[297],(void **)(void *)&Lnk297,(void **)(void *)&Lclptr297);} /* STANDARD-CLASS-P */
static void LnkT295(ptr) object *ptr;{ call_or_link_closure(VV[295],(void **)(void *)&Lnk295,(void **)(void *)&Lclptr295);} /* STRUCTURE-CLASS-P */
static void LnkT294(ptr) object *ptr;{ call_or_link_closure(VV[294],(void **)(void *)&Lnk294,(void **)(void *)&Lclptr294);} /* METHOD-QUALIFIERS */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-SIMPLE */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-COMPLEX */
static void LnkT291(){ call_or_link(VV[291],(void **)(void *)&Lnk291);} /* SOME */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[289],(void **)(void *)&LnkLI289,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-1 */
static void LnkT112(ptr) object *ptr;{ call_or_link_closure(VV[112],(void **)(void *)&Lnk112,(void **)(void *)&Lclptr112);} /* DEFAULT-INITARGS */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[288],(void **)(void *)&LnkLI288,5,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION-INTERNAL */
static void LnkT287(){ call_or_link(VV[287],(void **)(void *)&Lnk287);} /* EVERY */
static void LnkT286(ptr) object *ptr;{ call_or_link_closure(VV[286],(void **)(void *)&Lnk286,(void **)(void *)&Lclptr286);} /* METHOD-SPECIALIZERS */
static object  LnkTLI285(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[285],(void **)(void *)&LnkLI285,2,first,ap);va_end(ap);return V1;} /* FIND-STANDARD-II-METHOD */
static void LnkT284(ptr) object *ptr;{ call_or_link_closure(VV[284],(void **)(void *)&Lnk284,(void **)(void *)&Lclptr284);} /* COMPUTE-APPLICABLE-METHODS */
static object  LnkTLI280(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[280],(void **)(void *)&LnkLI280,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* FINALIZE-INHERITANCE */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* CLASS-FINALIZED-P */
static void LnkT281(){ call_or_link(VV[281],(void **)(void *)&Lnk281);} /* ERROR */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION */
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* MAKE-SHARED-INITIALIZE-FORM-LIST */
static void LnkT276(ptr) object *ptr;{ call_or_link_closure(VV[276],(void **)(void *)&Lnk276,(void **)(void *)&Lclptr276);} /* CLASS-PROTOTYPE */
static void LnkT275(){ call_or_link(VV[275],(void **)(void *)&Lnk275);} /* INITIALIZE-INSTANCE-SIMPLE-FUNCTION */
static void LnkT274(){ call_or_link(VV[274],(void **)(void *)&Lnk274);} /* MAKE-DEFAULT-INITARGS-FORM-LIST */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[273],(void **)(void *)&LnkLI273,first,ap);va_end(ap);return V1;} /* MAKE-INITIALIZE-INFO */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,1,first,ap);va_end(ap);return V1;} /* RESET-INITIALIZE-INFO */
static void LnkT271(ptr) object *ptr;{ call_or_link_closure(VV[271],(void **)(void *)&Lnk271,(void **)(void *)&Lclptr271);} /* CLASS-INITIALIZE-INFO */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,1,first,ap);va_end(ap);return V1;} /* RESET-CLASS-INITIALIZE-INFO-1 */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,1,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO-BOUND-SLOTS */
static void LnkT269(ptr) object *ptr;{ call_or_link_closure(VV[269],(void **)(void *)&Lnk269,(void **)(void *)&Lclptr269);} /* CLASS-WRAPPER */
static void LnkT9(ptr) object *ptr;{ call_or_link_closure(VV[9],(void **)(void *)&Lnk9,(void **)(void *)&Lclptr9);} /* MAKE-INSTANCE */
static void LnkT255(ptr) object *ptr;{ call_or_link_closure(VV[255],(void **)(void *)&Lnk255,(void **)(void *)&Lclptr255);} /* CLASS-NAME */
static void LnkT254(ptr) object *ptr;{ call_or_link_closure(VV[254],(void **)(void *)&Lnk254,(void **)(void *)&Lclptr254);} /* CLASSP */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],(void **)(void *)&LnkLI61,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITIALIZE-INFO-INTERNAL */
static void LnkT253(ptr) object *ptr;{ call_or_link_closure(VV[253],(void **)(void *)&Lnk253,(void **)(void *)&Lclptr253);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT252(){ call_or_link(VV[252],(void **)(void *)&Lnk252);} /* FIND */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[250],(void **)(void *)&LnkLI250,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static void LnkT249(){ call_or_link(VV[249],(void **)(void *)&Lnk249);} /* WALK-FORM */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-SYMBOL */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[247],(void **)(void *)&LnkLI247,1,first,ap);va_end(ap);return V1;} /* CONSTANT-SYMBOL-P */
static void LnkT246(){ call_or_link(VV[246],(void **)(void *)&Lnk246);} /* MAP-ALL-CLASSES */
static void LnkT244(ptr) object *ptr;{ call_or_link_closure(VV[244],(void **)(void *)&Lnk244,(void **)(void *)&Lclptr244);} /* CLASS-PRECEDENCE-LIST */
static object  LnkTLI243(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[243],(void **)(void *)&LnkLI243,first,ap);va_end(ap);return V1;} /* FIND-CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

