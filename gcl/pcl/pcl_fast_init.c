
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
	V1= (VFUN_NARGS=1,(*(LnkLI217))((V1)));
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
	(void) (*Lnk218)(Lclptr218);
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
	base[1]= (VV[219]->s.s_gfdef);
	base[2]= (V1);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk220)();
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
	if(((*(LnkLI221))((V13)))==Cnil){
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
	if(((*(LnkLI221))(CMPcar((V19))))!=Cnil){
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
	base[6]= VV[222];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk223)();
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
	V48= (VFUN_NARGS=1,(*(LnkLI224))(CMPcar((V46))));
	V49= CMPcddr((V48));
	V50= make_cons(CMPcadr((V46)),CMPcaddr((V46)));
	base[4]= (V50);
	base[5]= (V49);
	base[6]= VV[12];
	base[7]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk226)();
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
	(void) (*Lnk227)(Lclptr227);
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
	(void) (*Lnk228)(Lclptr228);
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
	(void) (*Lnk229)(Lclptr229);
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
	V63= (VFUN_NARGS=2,(*(LnkLI217))((V60),Cnil));
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
	Vcs[0]=Vcs[0];
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
	(void) (*Lnk243)(Lclptr243);
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
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V209= vs_base[0];
	{object V210 = (*(LnkLI244))(V209);
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
	(void)((*(LnkLI246))(CMPcar((V212))));
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
	(void)((*(LnkLI244))(CMPcdr((V215))));
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
	Vcs[0]=Vcs[0];
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
	register object V226;{object V227;
	base[0]= (V220);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V227= vs_base[0];
	if(V227==Cnil)goto T322;
	V226= V227;
	goto T321;
	goto T322;
T322:;}
	base[0]= make_cons(Cnil,Cnil);
	base[1]= V220;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk247)(Lclptr247);
	vs_top=sup;
	V226= vs_base[0];
	goto T321;
T321:;
	V225= (V221);
	goto T329;
T329:;
	if(((V225))!=Cnil){
	goto T331;}
	goto T327;
	goto T331;
T331:;
	{register object V229;
	register object V230;
	{object V231;
	V231= CMPcar((V225));
	V225= CMPcdr((V225));
	V229= (V231);}
	V230= (V226);
	if(((V222))==Cnil){
	goto T338;}
	if(!(((V229))==(VV[2]))){
	goto T342;}
	{object V232;
	V232= CMPcar((V225));
	V225= CMPcdr((V225));
	V223= (V232);}
	goto T338;
	goto T342;
T342:;
	{object V233;
	V233= CMPcar((V225));
	V225= CMPcdr((V225));}
	goto T338;
T338:;
	goto T352;
T352:;
	{register object V234;
	V234= CMPcdr((V230));
	if(((V234))!=Cnil){
	goto T355;}
	V226= make_cons(Cnil,Cnil);
	{object V236;
	V237= make_cons((V229),(V226));
	V236= make_cons(/* INLINE-ARGS */V237,Cnil);
	(V230)->c.c_cdr = (V236);}
	goto T330;
	goto T355;
T355:;
	if(!(eql((V229),CMPcaar((V234))))){
	goto T363;}
	V226= CMPcdar((V234));
	goto T330;
	goto T363;
T363:;
	V230= (V234);}
	goto T352;}
	goto T330;
T330:;
	goto T329;
	goto T327;
T327:;{object V238;
	V238= CMPcar((V226));
	if(V238==Cnil)goto T372;
	V224= V238;
	goto T371;
	goto T372;
T372:;}
	{object V240;
	V240= (VFUN_NARGS=0,(*(LnkLI248))());
	(V226)->c.c_car = (V240);
	V224= (V240);}
	goto T371;
T371:;}
	goto T314;
T314:;
	{object V241;
	V241= STREF(object,(V224),4);
	base[0]= (V220);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V242= vs_base[0];
	if(((V241))==(V242)){
	goto T376;}
	if(((V241))!=Cnil){
	goto T382;}
	{register object V243;
	object V244;
	object V245;
	V243= (V221);
	V244= make_cons(Cnil,Cnil);
	V245= (V244);
	goto T390;
T390:;
	if(((V243))!=Cnil){
	goto T392;}
	goto T388;
	goto T392;
T392:;
	{object V246;
	{object V247;
	V247= CMPcar((V243));
	V243= CMPcdr((V243));
	V246= (V247);}
	{object V249;
	V249= make_cons((V246),Cnil);
	(V245)->c.c_cdr = (V249);}}
	V245= CMPcdr((V245));
	if(((V222))==Cnil){
	goto T391;}
	{object V250;
	V250= CMPcar((V243));
	V243= CMPcdr((V243));}
	goto T391;
T391:;
	goto T390;
	goto T388;
T388:;
	V251= list(3,(V220),CMPcdr((V244)),(V223));
	V252= Ct;
	STSET(object,(V224),0, /* INLINE-ARGS */V251);
	(void)(/* INLINE-ARGS */V251);}
	goto T382;
T382:;
	(void)((*(LnkLI246))((V224)));}
	goto T376;
T376:;
	(VV[93]->s.s_dbind)= (V220);
	(VV[94]->s.s_dbind)= (V221);
	(VV[95]->s.s_dbind)= (V224);
	{object V253 = (V224);
	VMR30(V253)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UPDATE-INITIALIZE-INFO-INTERNAL	*/

static object LI31(V256,V257)

register object V256;object V257;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register object V258;
	V258= STREF(object,(V256),0);
	base[1]= CMPcar((V258));
	base[2]= CMPcadr((V258));
	base[3]= CMPcaddr((V258));
	{object V259= (V257);
	if((V259!= VV[67])
	&& (V259!= VV[69]))goto T421;
	{object V260;
	object V261;
	base[4]= base[1];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk249)();
	if(vs_base>=vs_top){vs_top=sup;goto T425;}
	V260= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T426;}
	V261= vs_base[0];
	vs_top=sup;
	goto T427;
	goto T425;
T425:;
	V260= Cnil;
	goto T426;
T426:;
	V261= Cnil;
	goto T427;
T427:;
	V262= Ct;
	STSET(object,(V256),16, (V260));
	(void)((V260));
	V263= Ct;
	STSET(object,(V256),24, (V261));
	(void)((V261));
	goto T416;}
	goto T421;
T421:;
	if((V259!= VV[68]))goto T429;
	{object V264;
	object V265;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk249)();
	if(vs_base>=vs_top){vs_top=sup;goto T434;}
	V264= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T435;}
	V265= vs_base[0];
	vs_top=sup;
	goto T436;
	goto T434;
T434:;
	V264= Cnil;
	goto T435;
T435:;
	V265= Cnil;
	goto T436;
T436:;
	V266= Ct;
	STSET(object,(V256),20, (V264));
	(void)((V264));
	V267= Ct;
	STSET(object,(V256),24, (V265));
	(void)((V265));
	goto T416;}
	goto T429;
T429:;
	if((V259!= VV[70]))goto T438;
	{object V268;
	{object V269;
	V269= STREF(object,(V256),16);
	if(!(((V269))==(VV[43]))){
	goto T442;}
	(void)((*(LnkLI61))((V256),VV[67]));
	V268= STREF(object,(V256),16);
	goto T439;
	goto T442;
T442:;
	V268= (V269);}
	goto T439;
T439:;
	base[4]= VV[70];
	base[5]= (V256);
	base[6]= base[1];
	base[7]= (V268);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V270= vs_base[0];
	V271= Ct;
	STSET(object,(V256),28, V270);
	(void)(V270);
	goto T416;}
	goto T438;
T438:;
	if((V259!= VV[65])
	&& (V259!= VV[66]))goto T450;
	{object V272;
	base[4]= base[1];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V272= vs_base[0];
	V274= listA(3,VV[96],base[1],Cnil);
	V275= listA(3,VV[97],(V272),Cnil);
	base[4]= list(3,/* INLINE-ARGS */V274,/* INLINE-ARGS */V275,listA(4,VV[98],(V272),Ct,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V273= vs_base[0];
	V276= Ct;
	STSET(object,(V256),8, V273);
	(void)(V273);
	V278= listA(3,VV[99],(V272),Cnil);
	base[4]= list(2,/* INLINE-ARGS */V278,listA(4,VV[98],(V272),Cnil,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V277= vs_base[0];
	V279= Ct;
	STSET(object,(V256),12, V277);
	(void)(V277);
	goto T416;}
	goto T450;
T450:;
	if((V259!= VV[71]))goto T458;
	{object V280;
	object V281;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Ct;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk252)();
	if(vs_base>=vs_top){vs_top=sup;goto T464;}
	V280= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V281= vs_base[0];
	vs_top=sup;
	goto T466;
	goto T464;
T464:;
	V280= Cnil;
	goto T465;
T465:;
	V281= Cnil;
	goto T466;
T466:;
	base[4]= VV[71];
	base[5]= (V256);
	base[6]= base[1];
	base[7]= (V280);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V282= vs_base[0];
	V283= Ct;
	STSET(object,(V256),32, V282);
	(void)(V282);
	goto T416;}
	goto T458;
T458:;
	if((V259!= VV[72]))goto T472;
	{object V284;
	object V285;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk252)();
	if(vs_base>=vs_top){vs_top=sup;goto T478;}
	V284= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V285= vs_base[0];
	vs_top=sup;
	goto T480;
	goto T478;
T478:;
	V284= Cnil;
	goto T479;
T479:;
	V285= Cnil;
	goto T480;
T480:;
	base[4]= VV[72];
	base[5]= (V256);
	base[6]= base[1];
	base[7]= (V284);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V286= vs_base[0];
	V287= Ct;
	STSET(object,(V256),36, V286);
	(void)(V286);
	goto T416;}
	goto T472;
T472:;
	if((V259!= VV[73])
	&& (V259!= VV[74]))goto T486;
	{object V288;
	object V289;
	{object V290;
	V290= STREF(object,(V256),20);
	if(!(((V290))==(VV[43]))){
	goto T490;}
	(void)((*(LnkLI61))((V256),VV[68]));
	V288= STREF(object,(V256),20);
	goto T487;
	goto T490;
T490:;
	V288= (V290);}
	goto T487;
T487:;
	{object V291;
	V291= STREF(object,(V256),24);
	if(!(((V291))==(VV[43]))){
	goto T496;}
	(void)((*(LnkLI61))((V256),VV[69]));
	V289= STREF(object,(V256),24);
	goto T493;
	goto T496;
T496:;
	V289= (V291);}
	goto T493;
T493:;
	{object V292;
	object V293;
	base[4]= base[1];
	base[5]= (V289);
	base[6]= Ct;
	base[7]= Ct;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk252)();
	if(vs_base>=vs_top){vs_top=sup;goto T504;}
	V292= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T505;}
	V293= vs_base[0];
	vs_top=sup;
	goto T506;
	goto T504;
T504:;
	V292= Cnil;
	goto T505;
T505:;
	V293= Cnil;
	goto T506;
T506:;
	V294= Ct;
	STSET(object,(V256),40, (V293));
	(void)((V293));
	base[4]= VV[74];
	base[5]= (V256);
	base[6]= base[1];
	base[7]= append((V288),(V292));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V295= vs_base[0];
	V296= Ct;
	STSET(object,(V256),44, V295);
	(void)(V295);
	goto T416;}}
	goto T486;
T486:;
	if((V259!= VV[75]))goto T513;
	V297= (*(LnkLI75))((V258));
	V298= Ct;
	STSET(object,(V256),52, /* INLINE-ARGS */V297);
	(void)(/* INLINE-ARGS */V297);
	goto T416;
	goto T513;
T513:;
	if((V259!= VV[13]))goto T514;
	{object V299;
	object V300;
	V299= (*(LnkLI253))((V258));
	{object V301;
	V301= STREF(object,(V256),52);
	if(!(((V301))==(VV[43]))){
	goto T519;}
	(void)((*(LnkLI61))((V256),VV[75]));
	V300= STREF(object,(V256),52);
	goto T516;
	goto T519;
T519:;
	V300= (V301);}
	goto T516;
T516:;
	V302= Ct;
	STSET(object,(V256),48, (V299));
	(void)((V299));
	if(((V300))==Cnil){
	goto T416;}
	if((V299)!=Cnil){
	V304= (V299);
	goto T525;}
	V304= (VV[255]->s.s_gfdef);
	goto T525;
T525:;
	(void)((*(LnkLI254))(V304,V300));
	goto T416;}
	goto T514;
T514:;
	FEerror("The ECASE key value ~s is illegal.",1,V259);
	goto T416;}}
	goto T416;
T416:;
	{object V305 = (V256);
	VMR31(V305)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION	*/

static object LI33(V307)

object V307;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register object V308;
	object V309;
	V308= CMPcar((V307));
	V309= CMPcadr((V307));
	if(((VV[101]->s.s_dbind))==(VV[102])){
	goto T528;}
	{object V310 = Cnil;
	VMR32(V310)}
	goto T528;
T528:;
	if(!(type_of((V308))==t_symbol)){
	goto T531;}
	V308= (VFUN_NARGS=1,(*(LnkLI217))((V308)));
	goto T531;
T531:;
	base[2]= (V308);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T535;}
	base[2]= (V308);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk256)(Lclptr256);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T535;}
	base[2]= (V308);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	goto T535;
T535:;
	{register object V311;
	object V312;
	register object V313;
	object V314;
	object V315;
	object V316;
	object V317;
	register object V318;
	object V319;
	object V320;
	{object V321;
	object V322= (V309);
	if(V322==Cnil){
	V311= Cnil;
	goto T543;}
	base[13]=V321=MMcons(Cnil,Cnil);
	goto T544;
T544:;
	(V321->c.c_cdr)= list(2,(V322->c.c_car),Cnil);
	while(MMcdr(V321)!=Cnil)V321=MMcdr(V321);
	if((V322=MMcdr(V322))==Cnil){
	base[13]=base[13]->c.c_cdr;
	V311= base[13];
	goto T543;}
	goto T544;}
	goto T543;
T543:;
	V312= make_cons((V308),(V311));
	base[4]= (*(LnkLI258))(VV[9]);
	base[4]=MMcons(base[4],Cnil);
	base[13]= (base[4]->c.c_car);
	base[14]= (V312);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V313= vs_base[0];
	V314= (*(LnkLI260))((V313),VV[103]);
	V315= list(2,(V308),(V311));
	V316= (*(LnkLI258))(VV[104]);
	base[13]= (V316);
	base[14]= (V315);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V317= vs_base[0];
	base[13]= (V308);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T558;}
	V318= Cnil;
	goto T557;
	goto T558;
T558:;
	base[13]= (V308);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V318= vs_base[0];
	goto T557;
T557:;
	if(((V318))==Cnil){
	goto T564;}
	base[13]= (*(LnkLI258))(VV[97]);
	base[14]= make_cons((V318),(V311));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V319= vs_base[0];
	goto T562;
	goto T564;
T564:;
	V319= Cnil;
	goto T562;
T562:;
	if(((V318))==Cnil){
	goto T570;}
	base[13]= (*(LnkLI258))(VV[98]);
	base[14]= listA(3,(V318),Ct,(V311));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V320= vs_base[0];
	goto T568;
	goto T570;
T570:;
	V320= Cnil;
	goto T568;
T568:;
	if(((V313))!=Cnil){
	goto T574;}
	{object V324 = 
	make_cclosure_new(LC66,Cnil,base[4],Cdata);
	VMR32(V324)}
	goto T574;
T574:;
	if((CMPcdr((V313)))!=Cnil){
	goto T578;}
	if(!((CMPcar((V313)))==((V314)))){
	goto T578;}
	if((CMPcdr((V317)))!=Cnil){
	goto T578;}
	base[13]= CMPcar((V317));
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V325= vs_base[0];
	if(!((CMPcar(V325))==((VV[105]->s.s_dbind)))){
	goto T578;}
	base[13]=make_cclosure_new(LC34,Cnil,base[4],Cdata);
	base[13]=MMcons(base[13],base[4]);
	base[14]= (base[13]->c.c_car);
	base[15]= (V319);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T590;}
	goto T589;
	goto T590;
T590:;
	base[14]= (base[13]->c.c_car);
	base[15]= (V320);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T577;}
	goto T589;
T589:;
	goto T578;
T578:;
	{object V326 = Cnil;
	VMR32(V326)}
	goto T577;
T577:;
	base[13]= (V308);
	base[14]= (V311);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	V327= vs_base[0];
	{object V328 = (*(LnkLI263))((V308),(V307),V327,(V319),(V320));
	VMR32(V328)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-INTERNAL	*/

static object LI35(V334,V335,V336,V337,V338)

register object V334;register object V335;object V336;register object V337;register object V338;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V339;
	object V340;
	object V341;
	V339= CMPcadr((V335));
	V340= CMPcaddr((V335));
	base[3]= (*(LnkLI258))(VV[96]);
	base[4]= make_cons((V334),(V336));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V341= vs_base[0];
	if(((V340))!=Cnil){
	goto T604;}
	base[3]= (V341);
	base[4]= (V337);
	base[5]= (V338);
	vs_top=(vs_base=base+3)+3;
	Lappend();
	vs_top=sup;
	V342= vs_base[0];
	if(((VFUN_NARGS=5,(*(LnkLI264))((V334),(V336),V342,Ct,Cnil)))!=Cnil){
	goto T604;}
	{object V343 = Cnil;
	VMR33(V343)}
	goto T604;
T604:;
	if((CMPcdr((V341)))!=Cnil){
	goto T613;}
	base[3]= (VV[265]->s.s_gfdef);
	base[4]= (V337);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk266)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T613;}
	base[3]= (VV[265]->s.s_gfdef);
	base[4]= (V338);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk266)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T614;}
	goto T613;
T613:;
	{object V344 = (*(LnkLI267))((V335),(V334),(V339),(V337),(V338));
	VMR33(V344)}
	goto T614;
T614:;
	{object V345 = (*(LnkLI268))((V335),(V334),(V339),(V337),(V338));
	VMR33(V345)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPLICATED-INSTANCE-CREATION-METHOD	*/

static object LI36(V347)

object V347;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V348;
	base[0]= (V347);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V348= vs_base[0];
	if(((V348))==Cnil){
	goto T627;}
	if((CMPcdr((V348)))==Cnil){
	goto T630;}
	V349= Cnil;
	goto T629;
	goto T630;
T630:;
	V349= ((CMPcar((V348)))==(VV[107])?Ct:Cnil);
	goto T629;
T629:;
	{object V350 = ((V349)==Cnil?Ct:Cnil);
	VMR34(V350)}
	goto T627;
T627:;
	{object V351;
	base[0]= (V347);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V352= vs_base[0];
	V351= CMPcar(V352);
	base[0]= (V351);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V353= vs_base[0];
	if(!((V353)==Cnil)){
	goto T635;}
	{object V354 = Ct;
	VMR34(V354)}
	goto T635;
T635:;
	base[0]= (V351);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V355= vs_base[0];
	{object V356 = ((((VV[108])==(V355)?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR34(V356)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-STANDARD-II-METHOD	*/

static object LI37(V359,V360)

object V359;register object V360;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{register object V361;
	register object V362;
	V361= (V359);
	V362= CMPcar((V361));
	goto T644;
T644:;
	if(!(((V361))==Cnil)){
	goto T645;}
	{object V363 = Cnil;
	VMR35(V363)}
	goto T645;
T645:;
	base[1]= (V362);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T649;}
	{register object V364;
	base[1]= (V362);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V365= vs_base[0];
	V364= CMPcar(V365);
	base[1]= (V364);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T649;}
	if(!(type_of((V360))==t_cons||((V360))==Cnil)){
	goto T662;}
	base[1]= (V364);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V367= vs_base[0];
	{register object x= V367,V366= (V360);
	while(V366!=Cnil)
	if(eql(x,V366->c.c_car)){
	goto T660;
	}else V366=V366->c.c_cdr;
	goto T649;}
	goto T662;
T662:;
	base[1]= (V364);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V368= vs_base[0];
	if(!((V368)==((V360)))){
	goto T649;}
	goto T660;
T660:;
	{object V369 = (V362);
	VMR35(V369)}}
	goto T649;
T649:;
	V361= CMPcdr((V361));
	V362= CMPcar((V361));
	goto T644;}
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
	{object V370=base[0]->c.c_cdr;
	if(endp(V370))invalid_macro_call();
	base[2]= (V370->c.c_car);
	V370=V370->c.c_cdr;
	if(endp(V370))invalid_macro_call();
	base[3]= (V370->c.c_car);
	V370=V370->c.c_cdr;
	if(endp(V370))invalid_macro_call();
	base[4]= (V370->c.c_car);
	V370=V370->c.c_cdr;
	if(!endp(V370))invalid_macro_call();}
	V371= list(2,VV[109],base[2]);
	V372= make_cons(/* INLINE-ARGS */V371,Cnil);
	V373= list(5,VV[111],VV[112],VV[113],base[3],base[4]);
	base[5]= list(3,VV[52],/* INLINE-ARGS */V372,list(4,VV[78],VV[110],/* INLINE-ARGS */V373,list(4,VV[114],VV[115],base[3],base[4])));
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
	{object V374=base[0]->c.c_cdr;
	if(endp(V374))invalid_macro_call();
	base[2]= (V374->c.c_car);
	V374=V374->c.c_cdr;
	if(!endp(V374))invalid_macro_call();}
	base[3]= list(2,VV[116],base[2]);
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
	{object V375=base[0]->c.c_cdr;
	if(endp(V375))invalid_macro_call();
	base[2]= (V375->c.c_car);
	V375=V375->c.c_cdr;
	if(endp(V375))invalid_macro_call();
	base[3]= (V375->c.c_car);
	V375=V375->c.c_cdr;
	if(!endp(V375))invalid_macro_call();}
	V376= list(3,VV[62],VV[118],base[2]);
	base[4]= list(5,VV[52],VV[117],/* INLINE-ARGS */V376,list(3,VV[62],VV[119],list(2,VV[120],base[3])),VV[121]);
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
	{object V377=base[0]->c.c_cdr;
	if(endp(V377))invalid_macro_call();
	base[2]= (V377->c.c_car);
	V377=V377->c.c_cdr;
	base[3]= V377;}
	V378= list(3,VV[124],VV[125],base[2]);
	base[4]= list(3,VV[52],VV[122],list(4,VV[78],VV[123],/* INLINE-ARGS */V378,make_cons(VV[6],base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-INSTANCE-FUNCTION-TRAP	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V379;
	object V380;
	check_arg(2);
	V379=(base[0]);
	V380=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V381;
	object V382;
	V381= (VFUN_NARGS=2,(*(LnkLI39))((V379),(V380)));
	{object V383;
	V383= STREF(object,(V381),48);
	if(!(((V383))==(VV[43]))){
	goto T677;}
	(void)((*(LnkLI61))((V381),VV[13]));
	V382= STREF(object,(V381),48);
	goto T674;
	goto T677;
T677:;
	V382= (V383);}
	goto T674;
T674:;
	base[4]= (V379);
	base[5]= (V380);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V382);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-SIMPLE	*/

static object LI43(V389,V390,V391,V392,V393)

object V389;object V390;object V391;object V392;object V393;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V394;
	object V395;
	object V396;
	object V397;
	base[0]= CMPcar((V389));
	base[0]=MMcons(base[0],Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T685;}
	base[1]= (VFUN_NARGS=2,(*(LnkLI224))((base[0]->c.c_car),Cnil));
	goto T683;
	goto T685;
T685:;
	base[1]= Cnil;
	goto T683;
T683:;
	base[1]=MMcons(base[1],base[0]);
	base[10]= (V390);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	base[2]= vs_base[0];
	base[2]=MMcons(base[2],base[1]);
	V394= make_cons((base[2]->c.c_car),Cnil);
	base[10]= (V390);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T692;}
	base[4]= (VV[271]->s.s_gfdef);
	goto T690;
	goto T692;
T692:;
	base[10]= (V390);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T696;}
	base[4]= (VV[273]->s.s_gfdef);
	goto T690;
	goto T696;
T696:;
	base[10]= (V390);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T700;}
	base[4]= (VV[275]->s.s_gfdef);
	goto T690;
	goto T700;
T700:;
	base[10]= VV[126];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T690;
T690:;
	base[4]=MMcons(base[4],base[2]);
	base[10]= (V390);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	V395= VV[127];
	goto T704;
	goto T706;
T706:;
	V395= Cnil;
	goto T704;
T704:;
	V396= (*(LnkLI260))((V393),VV[108]);
	base[11]= (V396);
	base[12]= (V393);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	V401= vs_base[0];
	{object V399;
	object V400= V401;
	if(V400==Cnil){
	V398= Cnil;
	goto T711;}
	base[10]=V399=MMcons(Cnil,Cnil);
	goto T712;
T712:;
	base[11]= (VV[98]->s.s_gfdef);
	base[12]= list(3,VV[128],(V400->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V394);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk277)();
	vs_top=sup;
	(V399->c.c_car)= vs_base[0];
	if((V400=MMcdr(V400))==Cnil){
	V398= base[10];
	goto T711;}
	V399=MMcdr(V399)=MMcons(Cnil,Cnil);
	goto T712;}
	goto T711;
T711:;
	base[7]= nreverse(V398);
	base[7]=MMcons(base[7],base[4]);
	V397= (*(LnkLI260))((V392),VV[108]);
	base[11]= (V397);
	base[12]= (V392);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	V406= vs_base[0];
	{object V404;
	object V405= V406;
	if(V405==Cnil){
	V403= Cnil;
	goto T723;}
	base[10]=V404=MMcons(Cnil,Cnil);
	goto T724;
T724:;
	base[11]= (VV[97]->s.s_gfdef);
	base[12]= list(3,VV[128],(V405->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V394);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk277)();
	vs_top=sup;
	(V404->c.c_car)= vs_base[0];
	if((V405=MMcdr(V405))==Cnil){
	V403= base[10];
	goto T723;}
	V404=MMcdr(V404)=MMcons(Cnil,Cnil);
	goto T724;}
	goto T723;
T723:;
	base[9]= nreverse(V403);
	base[9]=MMcons(base[9],base[7]);
	base[12]= (V390);
	base[13]= (V391);
	base[14]= CMPcaddr((V389));
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk278)();
	if(vs_base>=vs_top){vs_top=sup;goto T737;}
	base[10]=MMcons(vs_base[0],base[9]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T738;}
	base[11]=MMcons(vs_base[0],base[10]);
	vs_top=sup;
	goto T739;
	goto T737;
T737:;
	base[10]=MMcons(Cnil,base[9]);
	goto T738;
T738:;
	base[11]=MMcons(Cnil,base[10]);
	goto T739;
T739:;
	if(!(((V395))==(VV[127]))){
	goto T741;}
	{object V408 = 
	make_cclosure_new(LC67,Cnil,base[11],Cdata);
	VMR41(V408)}
	goto T741;
T741:;
	{object V409 = 
	make_cclosure_new(LC68,Cnil,base[11],Cdata);
	VMR41(V409)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-COMPLEX	*/

static object LI45(V415,V416,V417,V418,V419)

object V415;object V416;object V417;object V418;object V419;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	base[0]=MMcons((V416),Cnil);
	base[3]= (base[0]->c.c_car);
	base[4]= (V417);
	base[5]= CMPcaddr((V415));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk279)();
	if(vs_base>=vs_top){vs_top=sup;goto T747;}
	base[1]=MMcons(vs_base[0],base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T748;}
	base[2]=MMcons(vs_base[0],base[1]);
	vs_top=sup;
	goto T749;
	goto T747;
T747:;
	base[1]=MMcons(Cnil,base[0]);
	goto T748;
T748:;
	base[2]=MMcons(Cnil,base[1]);
	goto T749;
T749:;
	base[3]= CMPcar((V415));
	base[3]=MMcons(base[3],base[2]);
	if(!(type_of((base[3]->c.c_car))==t_symbol)){
	goto T753;}
	base[4]= (VFUN_NARGS=2,(*(LnkLI224))((base[3]->c.c_car),Cnil));
	goto T751;
	goto T753;
T753:;
	base[4]= Cnil;
	goto T751;
T751:;
	base[4]=MMcons(base[4],base[3]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	base[5]= vs_base[0];
	base[5]=MMcons(base[5],base[4]);
	base[8]= (VV[98]->s.s_gfdef);
	base[9]= (V419);
	V420= list(2,VV[138],(base[0]->c.c_car));
	base[10]= make_cons(/* INLINE-ARGS */V420,VV[139]);
	V421= (*(LnkLI260))((V419),VV[108]);
	V422= 
	make_cclosure_new(LC69,Cnil,base[5],Cdata);
	V423= list(2,/* INLINE-ARGS */V421,V422);
	base[11]= make_cons(/* INLINE-ARGS */V423,Cnil);
	base[12]= list(3,(base[5]->c.c_car),(VV[140]->s.s_dbind),(VV[140]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk280)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[6]=MMcons(base[6],base[5]);
	base[8]= (VV[97]->s.s_gfdef);
	base[9]= (V418);
	base[10]= list(2,list(2,VV[138],(base[0]->c.c_car)),Ct);
	V424= (*(LnkLI260))((V418),VV[108]);
	V425= 
	make_cclosure_new(LC70,Cnil,base[6],Cdata);
	V426= list(2,/* INLINE-ARGS */V424,V425);
	base[11]= make_cons(/* INLINE-ARGS */V426,Cnil);
	base[12]= list(2,(base[5]->c.c_car),(VV[140]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk280)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[7]=MMcons(base[7],base[6]);
	{object V427 = 
	make_cclosure_new(LC71,Cnil,base[7],Cdata);
	VMR42(V427)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-SIMPLE-INITIALIZATION-FUNCTION	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V428;
	object V429;
	object V430;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V428=(base[0]);
	V429=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T771;}
	V430=(base[2]);
	vs_top=sup;
	goto T772;
	goto T771;
T771:;
	V430= Cnil;
	goto T772;
T772:;
	{register object V431;
	V431= (VFUN_NARGS=4,(*(LnkLI39))((V428),(V429),Cnil,(V430)));
	{object V432;
	V432= STREF(object,(V431),44);
	if(!(((V432))==(VV[43]))){
	goto T778;}
	(void)((*(LnkLI61))((V431),VV[74]));
	base[3]= STREF(object,(V431),44);
	goto T775;
	goto T778;
T778:;
	base[3]= (V432);}
	goto T775;
T775:;
	{object V433;
	V433= STREF(object,(V431),40);
	if(!(((V433))==(VV[43]))){
	goto T784;}
	(void)((*(LnkLI61))((V431),VV[73]));
	base[4]= STREF(object,(V431),40);
	goto T781;
	goto T784;
T784:;
	base[4]= (V433);}
	goto T781;
T781:;
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for GET-COMPLEX-INITIALIZATION-FUNCTIONS	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{register object V434;
	object V435;
	register object V436;
	object V437;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V434=(base[0]);
	V435=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T787;}
	V436=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T788;}
	V437=(base[3]);
	vs_top=sup;
	goto T789;
	goto T787;
T787:;
	V436= Cnil;
	goto T788;
T788:;
	V437= Cnil;
	goto T789;
T789:;
	{register object V438;
	object V439;
	V438= (VFUN_NARGS=4,(*(LnkLI39))((V434),(V435),Cnil,(V436)));
	{object V440;
	V440= STREF(object,(V438),28);
	if(!(((V440))==(VV[43]))){
	goto T796;}
	(void)((*(LnkLI61))((V438),VV[70]));
	V439= STREF(object,(V438),28);
	goto T793;
	goto T796;
T796:;
	V439= (V440);}
	goto T793;
T793:;
	if(((V437))==Cnil){
	goto T800;}
	base[6]= (V439);
	{object V441;
	V441= STREF(object,(V438),32);
	if(!(((V441))==(VV[43]))){
	goto T806;}
	(void)((*(LnkLI61))((V438),VV[71]));
	base[7]= STREF(object,(V438),32);
	goto T803;
	goto T806;
T806:;
	base[7]= (V441);}
	goto T803;
T803:;
	vs_top=(vs_base=base+6)+2;
	return;
	goto T800;
T800:;
	base[6]= (V439);
	{object V442;
	{object V444;
	V444= STREF(object,(V438),24);
	if(!(((V444))==(VV[43]))){
	goto T815;}
	(void)((*(LnkLI61))((V438),VV[69]));
	V443= STREF(object,(V438),24);
	goto T812;
	goto T815;
T815:;
	V443= (V444);}
	goto T812;
T812:;
	V445= (VFUN_NARGS=4,(*(LnkLI39))((V434),V443,Cnil,(V436)));
	V442= STREF(object,/* INLINE-ARGS */V445,32);
	if(!(((V442))==(VV[43]))){
	goto T819;}
	{object V447;
	V447= STREF(object,(V438),24);
	if(!(((V447))==(VV[43]))){
	goto T825;}
	(void)((*(LnkLI61))((V438),VV[69]));
	V446= STREF(object,(V438),24);
	goto T822;
	goto T825;
T825:;
	V446= (V447);}
	goto T822;
T822:;
	V448= (VFUN_NARGS=4,(*(LnkLI39))((V434),V446,Cnil,(V436)));
	(void)((*(LnkLI61))(/* INLINE-ARGS */V448,VV[71]));
	{object V450;
	V450= STREF(object,(V438),24);
	if(!(((V450))==(VV[43]))){
	goto T831;}
	(void)((*(LnkLI61))((V438),VV[69]));
	V449= STREF(object,(V438),24);
	goto T828;
	goto T831;
T831:;
	V449= (V450);}
	goto T828;
T828:;
	V451= (VFUN_NARGS=4,(*(LnkLI39))((V434),V449,Cnil,(V436)));
	base[7]= STREF(object,/* INLINE-ARGS */V451,32);
	goto T810;
	goto T819;
T819:;
	base[7]= (V442);}
	goto T810;
T810:;
	vs_top=(vs_base=base+6)+2;
	return;}
	}
}
/*	local entry for function ADD-FORMS	*/

static object LI48(V454,V455)

register object V454;register object V455;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	if(((V454))==Cnil){
	goto T834;}
	base[0]= (V454);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V454= vs_base[0];
	if((CMPcar((V455)))!=Cnil){
	goto T842;}
	(V455)->c.c_car = V454;
	goto T840;
	goto T842;
T842:;
	(CMPcdr(V455))->c.c_cdr = V454;
	(void)(CMPcdr(V455));
	goto T840;
T840:;
	{object V461;
	base[1]= (V454);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V461= vs_base[0];
	(V455)->c.c_cdr = (V461);}
	goto T834;
T834:;
	{object V462 = CMPcar((V455));
	VMR45(V462)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-DEFAULT-INITARGS-FORM-LIST	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V463;
	object V464;
	object V465;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V463=(base[0]);
	V464=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T849;}
	V465=(base[2]);
	vs_top=sup;
	goto T850;
	goto T849;
T849:;
	V465= Ct;
	goto T850;
T850:;
	{object V466;
	object V467;
	object V468;
	object V469;
	register object V470;
	V466= make_cons(Cnil,Cnil);
	base[3]= (V463);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V467= vs_base[0];
	base[4]= (V463);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V473= vs_base[0];
	{object V471;
	object V472= V473;
	if(V472==Cnil){
	V469= Cnil;
	goto T855;}
	base[3]=V471=MMcons(Cnil,Cnil);
	goto T856;
T856:;
	base[5]= (V472->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V477= vs_base[0];
	{object V475;
	object V476= V477;
	if(V476==Cnil){
	(V471->c.c_cdr)= Cnil;
	goto T859;}
	base[4]=V475=MMcons(Cnil,Cnil);
	goto T860;
T860:;
	(V475->c.c_car)= make_cons((V476->c.c_car),(V472->c.c_car));
	if((V476=MMcdr(V476))==Cnil){
	(V471->c.c_cdr)= base[4];
	goto T859;}
	V475=MMcdr(V475)=MMcons(Cnil,Cnil);
	goto T860;}
	goto T859;
T859:;
	while(MMcdr(V471)!=Cnil)V471=MMcdr(V471);
	if((V472=MMcdr(V472))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V469= base[3];
	goto T855;}
	goto T856;}
	goto T855;
T855:;
	V468= (V464);
	V470= Cnil;
	{register object V479;
	object V480;
	V479= (V468);
	V480= CMPcar((V479));
	goto T868;
T868:;
	if(!(((V479))==Cnil)){
	goto T869;}
	goto T864;
	goto T869;
T869:;
	{object V481;
	{register object x= (V480),V483= (V469);
	while(V483!=Cnil)
	if(eql(x,V483->c.c_car->c.c_car) &&V483->c.c_car != Cnil){
	V482= (V483->c.c_car);
	goto T875;
	}else V483=V483->c.c_cdr;
	V482= Cnil;}
	goto T875;
T875:;
	V481= CMPcdr(V482);
	base[5]= (V481);
	base[6]= (V470);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V470= vs_base[0];}
	V479= CMPcdr((V479));
	V480= CMPcar((V479));
	goto T868;}
	goto T864;
T864:;
	{register object V484;
	register object V485;
	V484= (V467);
	V485= CMPcar((V484));
	goto T888;
T888:;
	if(!(((V484))==Cnil)){
	goto T889;}
	goto T884;
	goto T889;
T889:;
	{register object V486;
	register object V487;
	object V488;
	V486= CMPcar((V485));
	{register object x= (V486),V490= (V469);
	while(V490!=Cnil)
	if(eql(x,V490->c.c_car->c.c_car) &&V490->c.c_car != Cnil){
	V489= (V490->c.c_car);
	goto T896;
	}else V490=V490->c.c_cdr;
	V489= Cnil;}
	goto T896;
T896:;
	V487= CMPcdr(V489);
	V488= CMPcadr((V485));
	{register object x= (V487),V491= (V470);
	while(V491!=Cnil)
	if(eql(x,V491->c.c_car)){
	goto T893;
	}else V491=V491->c.c_cdr;}
	V492= list(2,VV[114],(V488));
	V493= list(2,/* INLINE-ARGS */V492,list(2,VV[145],(V486)));
	(void)((*(LnkLI284))(/* INLINE-ARGS */V493,(V466)));
	V468= make_cons(V486,(V468));
	V470= make_cons(V487,(V470));}
	goto T893;
T893:;
	V484= CMPcdr((V484));
	V485= CMPcar((V484));
	goto T888;}
	goto T884;
T884:;
	if(((V465))==Cnil){
	goto T909;}
	V496= list(3,VV[146],(V463),(VFUN_NARGS=3,(*(LnkLI39))((V463),(V468),Cnil)));
	V497= make_cons(/* INLINE-ARGS */V496,Cnil);
	(void)((*(LnkLI284))(/* INLINE-ARGS */V497,(V466)));
	goto T909;
T909:;
	(void)((*(LnkLI284))(VV[147],(V466)));
	base[3]= CMPcar((V466));
	base[4]= (V468);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for MAKE-SHARED-INITIALIZE-FORM-LIST	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V498;
	object V499;
	object V500;
	object V501;
	check_arg(4);
	V498=(base[0]);
	V499=(base[1]);
	V500=(base[2]);
	V501=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V502;
	object V503;
	object V504;
	object V505;
	object V506;
	object V507;
	object V508;
	object V509;
	V502= make_cons(Cnil,Cnil);
	base[12]= (V498);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T918;}
	V503= VV[148];
	goto T916;
	goto T918;
T918:;
	base[12]= (V498);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T922;}
	V503= VV[149];
	goto T916;
	goto T922;
T922:;
	base[12]= (V498);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T926;}
	V503= VV[150];
	goto T916;
	goto T926;
T926:;
	base[12]= VV[151];
	vs_top=(vs_base=base+12)+1;
	Lerror();
	vs_top=sup;
	V503= vs_base[0];
	goto T916;
T916:;
	base[12]= (V498);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V504= vs_base[0];
	if(((V501))==Cnil){
	goto T934;}
	base[12]= ((V504))->v.v_self[12];
	base[13]= VV[152];
	base[14]= (VV[153]->s.s_dbind);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk285)();
	vs_top=sup;
	V505= vs_base[0];
	goto T932;
	goto T934;
T934:;
	V505= Cnil;
	goto T932;
T932:;
	base[12]= (V498);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V506= vs_base[0];
	base[13]=VV[286]->s.s_gfdef;
	{object V510;
	object V511= (V506);
	if(V511==Cnil){
	V507= Cnil;
	goto T941;}
	base[12]=V510=MMcons(Cnil,Cnil);
	goto T942;
T942:;
	base[14]= (V511->c.c_car);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	(V510->c.c_car)= vs_base[0];
	if((V511=MMcdr(V511))==Cnil){
	V507= base[12];
	goto T941;}
	V510=MMcdr(V510)=MMcons(Cnil,Cnil);
	goto T942;}
	goto T941;
T941:;
	{object V512;
	object V513= (V506);
	if(V513==Cnil){
	V508= Cnil;
	goto T945;}
	base[12]=V512=MMcons(Cnil,Cnil);
	goto T946;
T946:;
	{object V515;
	V515= VV[154];
	{register object V516;
	object V517;
	base[15]= (V513->c.c_car);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V516= vs_base[0];
	V517= CMPcar((V516));
	goto T953;
T953:;
	if(!(((V516))==Cnil)){
	goto T954;}
	goto T948;
	goto T954;
T954:;
	{object V518;
	base[15]= (V517);
	base[16]= (V499);
	vs_top=(vs_base=base+15)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V518= vs_base[0];
	if(((V518))==Cnil){
	goto T958;}
	V515= (number_compare((V515),(V518))<=0?((V515)):(V518));}
	goto T958;
T958:;
	V516= CMPcdr((V516));
	V517= CMPcar((V516));
	goto T953;}
	goto T948;
T948:;
	(V512->c.c_car)= make_cons((V513->c.c_car),(V515));}
	if((V513=MMcdr(V513))==Cnil){
	V508= base[12];
	goto T945;}
	V512=MMcdr(V512)=MMcons(Cnil,Cnil);
	goto T946;}
	goto T945;
T945:;
	base[12]= (V508);
	base[13]= (VV[288]->s.s_gfdef);
	base[14]= VV[155];
	base[15]= (VV[189]->s.s_gfdef);
	vs_top=(vs_base=base+12)+4;
	(void) (*Lnk289)();
	vs_top=sup;
	V509= vs_base[0];
	{long V519;
	V519= 0;
	{register object V520;
	register object V521;
	V520= (V509);
	V521= CMPcar((V520));
	goto T980;
T980:;
	if(!(((V520))==Cnil)){
	goto T981;}
	goto T975;
	goto T981;
T981:;
	{object V522;
	object V523;
	register long V524;
	V522= CMPcar((V521));
	base[15]= (V522);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V523= vs_base[0];
	V525= CMPcdr((V521));
	V526 = CMPmake_fixnum(V519);
	V527= number_minus(/* INLINE-ARGS */V525,V526);
	V524= fix(one_plus(/* INLINE-ARGS */V527));
	if(eql(CMPcdr((V521)),VV[154])){
	goto T985;}
	{object V528;
	base[16]= (V523);
	base[17]= (V507);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V529= vs_base[0];
	V528= one_plus(V529);
	if(!((V524)>0)){
	goto T999;}
	V531 = CMPmake_fixnum((long)(2)*(V524));
	V532= list(2,VV[156],V531);
	V530= make_cons(/* INLINE-ARGS */V532,Cnil);
	goto T997;
	goto T999;
T999:;
	V530= Cnil;
	goto T997;
T997:;
	V533= list(3,VV[157],(V528),(V522));
	V534= make_cons(/* INLINE-ARGS */V533,Cnil);
	V535= append(V530,/* INLINE-ARGS */V534);
	(void)((*(LnkLI284))(/* INLINE-ARGS */V535,(V502)));}
	V519= (long)(V519)+(V524);}
	goto T985;
T985:;
	V520= CMPcdr((V520));
	V521= CMPcar((V520));
	goto T980;}}
	goto T975;
T975:;
	{register object V536;
	object V537;
	V536= (V509);
	V537= CMPcar((V536));
	goto T1011;
T1011:;
	if(!(((V536))==Cnil)){
	goto T1012;}
	goto T1007;
	goto T1012;
T1012:;
	{register object V538;
	object V539;
	V538= CMPcar((V537));
	base[15]= (V538);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V539= vs_base[0];
	if(!(eql(CMPcdr((V537)),VV[154]))){
	goto T1016;}
	if(((V500))==(Ct)){
	goto T1020;}
	{register object x= (V539),V540= (V500);
	while(V540!=Cnil)
	if(eql(x,V540->c.c_car)){
	goto T1025;
	}else V540=V540->c.c_cdr;
	goto T1016;}
	goto T1025;
T1025:;
	goto T1020;
T1020:;
	{object V541;
	object V542;
	object V543;
	register object V544;
	register object V545;
	base[20]= (V538);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	V541= vs_base[0];
	base[20]= (V538);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V542= vs_base[0];
	if(((V503))==(VV[148])){
	goto T1032;}
	base[20]= (V538);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	V543= vs_base[0];
	goto T1030;
	goto T1032;
T1032:;
	V543= Cnil;
	goto T1030;
T1030:;
	base[20]= (V539);
	base[21]= (V507);
	vs_top=(vs_base=base+20)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V546= vs_base[0];
	V544= one_plus(V546);
	if(((V542))!=Cnil){
	goto T1041;}
	V545= Cnil;
	goto T1039;
	goto T1041;
T1041:;
	base[20]= (V541);
	vs_top=(vs_base=base+20)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1044;}
	{object V547;
	V547= (
	(type_of((V542)) == t_sfun ?(*(((V542))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V542))==t_vfun) ?
	(*(((V542))->sfn.sfn_self)):
	(fcall.fun=((V542)),fcalln))());
	if(((V501))==Cnil){
	goto T1049;}
	if(!(type_of((V543))==t_fixnum||type_of((V543))==t_bignum)){
	goto T1049;}
	(void)((((V505))->v.v_self[fix((V543))]=((V547))));
	V545= Cnil;
	goto T1039;
	goto T1049;
T1049:;
	V548= list(2,VV[158],(V547));
	V545= list(2,/* INLINE-ARGS */V548,list(3,VV[157],(V544),(V538)));
	goto T1039;}
	goto T1044;
T1044:;
	base[20]= (V538);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V549= vs_base[0];
	V550= list(2,VV[114],V549);
	V545= list(2,/* INLINE-ARGS */V550,list(3,VV[157],(V544),(V538)));
	goto T1039;
T1039:;
	if(((V501))!=Cnil){
	goto T1058;}
	if(((V545))==Cnil){
	goto T1058;}
	V552 = CMPmake_fixnum((long)length((V545)));
	V553= list(4,VV[159],(V544),(V538),V552);
	V551= make_cons(/* INLINE-ARGS */V553,Cnil);
	goto T1056;
	goto T1058;
T1058:;
	V551= Cnil;
	goto T1056;
T1056:;
	V554= append(V551,(V545));
	(void)((*(LnkLI284))(/* INLINE-ARGS */V554,(V502)));}}
	goto T1016;
T1016:;
	V536= CMPcdr((V536));
	V537= CMPcar((V536));
	goto T1011;}
	goto T1007;
T1007:;
	base[12]= CMPcar((V502));
	base[13]= (V505);
	vs_top=(vs_base=base+12)+2;
	return;}
	}
}
/*	local entry for function GET-PV-CELL-FOR-CLASS	*/

static object LI51(V556)

register object V556;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V557;
	object V558;
	register object V559;
	base[4]=VV[286]->s.s_gfdef;
	base[5]= (V556);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V562= vs_base[0];
	{object V560;
	object V561= V562;
	if(V561==Cnil){
	V557= Cnil;
	goto T1069;}
	base[3]=V560=MMcons(Cnil,Cnil);
	goto T1070;
T1070:;
	base[5]= (V561->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	(V560->c.c_car)= vs_base[0];
	if((V561=MMcdr(V561))==Cnil){
	V557= base[3];
	goto T1069;}
	V560=MMcdr(V560)=MMcons(Cnil,Cnil);
	goto T1070;}
	goto T1069;
T1069:;
	V563= make_cons(Cnil,(V557));
	V558= make_cons(/* INLINE-ARGS */V563,Cnil);
	base[3]= (V556);
	base[4]= (VV[160]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V559= vs_base[0];
	if(((V559))==Cnil){
	goto T1080;}
	if(equal((V558),STREF(object,(V559),8))){
	goto T1079;}
	goto T1080;
T1080:;
	V559= (VFUN_NARGS=2,(*(LnkLI293))(VV[162],(V558)));
	{object V565;
	V565= (VV[160]->s.s_dbind);
	base[3]= V556;
	base[4]= (V565);
	base[5]= V559;
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	goto T1079;
T1079:;
	base[3]= (V556);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V567= vs_base[0];
	{object V568 = (*(LnkLI294))((V559),V567);
	VMR48(V568)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INITIALIZE-INSTANCE-SIMPLE-FUNCTION	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V569;
	object V570;
	object V571;
	object V572;
	check_arg(4);
	V569=(base[0]);
	V570=(base[1]);
	V571=(base[2]);
	V572=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V573;
	object V574;
	register object V575;
	V573= (*(LnkLI295))((V571));
	V574= STREF(object,(V570),0);
	base[7]= CMPcar((V574));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V576= vs_base[0];
	V575= listA(3,(V569),V576,CMPcdr((V574)));
	if(((VV[163]->s.s_dbind))!=Cnil){
	goto T1097;}
	base[7]= (V575);
	base[8]= (VV[164]->s.s_dbind);
	vs_top=(vs_base=base+7)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1098;}
	goto T1097;
T1097:;
	{object V577;
	object V578;
	base[7]= (V573);
	base[8]= (V572);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk296)();
	if(vs_base>=vs_top){vs_top=sup;goto T1107;}
	V577= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1108;}
	V578= vs_base[0];
	vs_top=sup;
	goto T1109;
	goto T1107;
T1107:;
	V577= Cnil;
	goto T1108;
T1108:;
	V578= Cnil;
	goto T1109;
T1109:;
	{register object V579;
	{register object x= (V577),V580= (VV[165]->s.s_dbind);
	while(V580!=Cnil)
	if(equal(x,V580->c.c_car->c.c_car) &&V580->c.c_car != Cnil){
	V579= (V580->c.c_car);
	goto T1110;
	}else V580=V580->c.c_cdr;
	V579= Cnil;}
	goto T1110;
T1110:;
	{object V582;
	V582= (VV[164]->s.s_dbind);
	base[7]= V575;
	base[8]= (V582);
	base[9]= Ct;
	vs_top=(vs_base=base+7)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V579))==Cnil){
	goto T1118;}
	{object V585;
	base[8]= make_cons((V575),Cnil);
	base[9]= CMPcdddr((V579));
	base[10]= VV[12];
	base[11]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk297)();
	vs_top=sup;
	V585= vs_base[0];
	(CMPcddr(V579))->c.c_cdr = (V585);
	(void)(CMPcddr(V579));
	goto T1116;}
	goto T1118;
T1118:;
	V579= listA(4,(V577),Cnil,Cnil,make_cons((V575),Cnil));{object V586;
	V586= (VV[165]->s.s_dbind);
	V587= make_cons((V579),Cnil);
	(VV[165]->s.s_dbind)= nconc(V586,/* INLINE-ARGS */V587);}
	goto T1116;
T1116:;
	if(((VV[166]->s.s_dbind))!=Cnil){
	goto T1129;}
	if((CMPcadr((V579)))!=Cnil){
	goto T1129;}
	{object V589;
	base[8]= CMPcar((V579));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk298)();
	vs_top=sup;
	V589= vs_base[0];
	(CMPcdr(V579))->c.c_car = (V589);
	(void)(CMPcdr(V579));}
	goto T1129;
T1129:;
	if((CMPcadr((V579)))==Cnil){
	goto T1138;}
	base[7]= CMPcadr((V579));
	{object V590;
	V590= (V578);
	 vs_top=base+8;
	 while(V590!=Cnil)
	 {vs_push((V590)->c.c_car);V590=(V590)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1138;
T1138:;
	base[7]= list(3,VV[130],(V573),(V572));
	vs_top=(vs_base=base+7)+1;
	return;}}
	goto T1098;
T1098:;
	base[7]= list(3,VV[130],(V573),(V572));
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function LOAD-PRECOMPILED-IIS-ENTRY	*/

static object LI53(V595,V596,V597,V598)

object V595;object V596;object V597;object V598;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V599;
	{register object x= (V595),V600= (VV[165]->s.s_dbind);
	while(V600!=Cnil)
	if(equal(x,V600->c.c_car->c.c_car) &&V600->c.c_car != Cnil){
	V599= (V600->c.c_car);
	goto T1142;
	}else V600=V600->c.c_cdr;
	V599= Cnil;}
	goto T1142;
T1142:;
	if(((V599))!=Cnil){
	goto T1143;}
	V599= listA(4,(V595),Cnil,Cnil,Cnil);{object V601;
	V601= (VV[165]->s.s_dbind);
	V602= make_cons((V599),Cnil);
	(VV[165]->s.s_dbind)= nconc(V601,/* INLINE-ARGS */V602);}
	goto T1143;
T1143:;
	(CMPcdr(V599))->c.c_car = V596;
	(void)(CMPcdr(V599));
	(CMPcddr(V599))->c.c_car = V597;
	(void)(CMPcddr(V599));
	{register object V607;
	register object V608;
	V607= (V598);
	V608= CMPcar((V607));
	goto T1157;
T1157:;
	if(!(((V607))==Cnil)){
	goto T1158;}
	goto T1153;
	goto T1158;
T1158:;
	{register object V609;
	register object V610;
	register object V611;
	V609= (V608);
	V610= (VV[164]->s.s_dbind);
	V611= Ct;
	base[1]= (V609);
	base[2]= (V610);
	base[3]= (V611);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	V607= CMPcdr((V607));
	V608= CMPcar((V607));
	goto T1157;}
	goto T1153;
T1153:;
	{object V613;
	base[1]= (V598);
	base[2]= CMPcdddr((V599));
	base[3]= VV[12];
	base[4]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk297)();
	vs_top=sup;
	V613= vs_base[0];
	(CMPcddr(V599))->c.c_cdr = (V613);
	(void)(CMPcddr(V599));
	{object V614 = (V613);
	VMR50(V614)}}}
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
	{object V615=base[0]->c.c_cdr;
	if(endp(V615)){
	base[2]= Cnil;
	} else {
	base[2]= (V615->c.c_car);
	V615=V615->c.c_cdr;}
	if(!endp(V615))invalid_macro_call();}
	{register object V616;
	V616= small_fixnum(-1);
	{register object V618;
	register object V619;
	V618= Cnil;
	V619= Cnil;
	{register object V620;
	register object V621;
	V620= (VV[165]->s.s_dbind);
	V621= CMPcar((V620));
	goto T1188;
T1188:;
	if(!(((V620))==Cnil)){
	goto T1189;}
	goto T1184;
	goto T1189;
T1189:;
	if((CMPcaddr((V621)))==Cnil){
	goto T1194;}
	if(!((CMPcaddr((V621)))==(base[2]))){
	goto T1193;}
	goto T1194;
T1194:;
	if((base[2])==Cnil){
	goto T1198;}
	{register object V622;
	register object V623;
	V622= (V621);
	V623= base[2];
	(CMPcddr((V622)))->c.c_car = (V623);
	(void)(CMPcddr((V622)));}
	goto T1198;
T1198:;
	{register object V624;
	V616= number_plus((V616),small_fixnum(1));
	V625= list(3,VV[167],base[2],(V616));
	V626= list(2,VV[4],CMPcar((V621)));
	V627= list(2,VV[170],CMPcar((V621)));
	V628= list(2,VV[4],base[2]);
	V629= list(5,VV[169],/* INLINE-ARGS */V626,/* INLINE-ARGS */V627,/* INLINE-ARGS */V628,list(2,VV[4],CMPcdddr((V621))));
	V624= (*(LnkLI299))(/* INLINE-ARGS */V625,VV[168],/* INLINE-ARGS */V629);
	if(((V618))!=Cnil){
	goto T1207;}
	V619= make_cons((V624),Cnil);
	V618= (V619);
	goto T1193;
	goto T1207;
T1207:;
	V631= make_cons((V624),Cnil);
	((V619))->c.c_cdr = /* INLINE-ARGS */V631;
	V630= (V619);
	V619= CMPcdr(V630);}
	goto T1193;
T1193:;
	V620= CMPcdr((V620));
	V621= CMPcar((V620));
	goto T1188;}
	goto T1184;
T1184:;
	V617= (V618);}
	base[3]= make_cons(VV[6],V617);
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	function definition for COMPILE-IIS-FUNCTIONS	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	bds_check;
	{object V632;
	check_arg(1);
	V632=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (((V632))==Cnil?Ct:Cnil);
	bds_bind(VV[163],Ct);
	bds_bind(VV[91],Ct);
	bds_bind(VV[166],base[3]);
	if(!(((VV[101]->s.s_dbind))==(VV[102]))){
	goto T1220;}
	vs_base=vs_top;
	(void) (*Lnk300)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T1220;
T1220:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function INITIALIZE-INSTANCE-SIMPLE	*/

static object LI56(V637,V638,V639,V640)

object V637;register object V638;object V639;register object V640;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V641;
	register object V642;
	object V643;
	object V644;
	register object V645;
	V641= CMPcar((V637));
	if(type_of(V639)==t_structure){
	goto T1227;}
	goto T1225;
	goto T1227;
T1227:;
	if(!(((V639)->str.str_def)==(VV[171]))){
	goto T1225;}
	V643= STREF(object,(V639),4);
	goto T1223;
	goto T1225;
T1225:;{object V647;
	V647= (VV[172]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V639);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	V648= vs_base[0];
	if(!((V647)==(CMPcar(V648)))){
	goto T1230;}}
	V643= CMPcar(((V639))->cc.cc_turbo[12]);
	goto T1223;
	goto T1230;
T1230:;
	V643= Cnil;
	goto T1223;
T1223:;
	V644= (*(LnkLI303))((V639));
	V642= (V640);
	V645= Cnil;
	goto T1238;
T1238:;
	if(((V638))!=Cnil){
	goto T1240;}
	goto T1236;
	goto T1240;
T1240:;
	{register object V649;
	{object V650;
	V650= CMPcar((V638));
	V638= CMPcdr((V638));
	V649= (V650);}
	{object V651= CMPcar((V649));
	if((V651!= VV[145]))goto T1247;
	V640= make_cons(V645,(V640));
	{object V653;
	V653= CMPcadr((V649));
	V640= make_cons((V653),(V640));
	goto T1239;}
	goto T1247;
T1247:;
	if((V651!= VV[158]))goto T1252;
	V645= CMPcadr((V649));
	goto T1239;
	goto T1252;
T1252:;
	if((V651!= VV[114]))goto T1254;
	V645= (
	V654 = CMPcadr((V649)),
	(type_of(V654) == t_sfun ?(*((V654)->sfn.sfn_self)):
	(fcall.argd=0,type_of(V654)==t_vfun) ?
	(*((V654)->sfn.sfn_self)):
	(fcall.fun=(V654),fcalln))());
	goto T1239;
	goto T1254;
T1254:;
	if((V651!= VV[156]))goto T1256;
	V655= one_minus(CMPcadr((V649)));
	V642= nthcdr(fix(/* INLINE-ARGS */V655),(V642));
	{object V656;
	V656= CMPcar((V642));
	V642= CMPcdr((V642));
	V645= (V656);}
	goto T1239;
	goto T1256;
T1256:;
	if((V651!= VV[157]))goto T1263;
	{object V657;
	V657= ((V641))->v.v_self[fix(CMPcadr((V649)))];
	if(!(type_of(V657)==t_fixnum)){
	goto T1266;}
	(void)(((V643))->v.v_self[fix((V657))]= ((V645)));
	goto T1239;
	goto T1266;
T1266:;
	if(!(type_of(V657)==t_cons)){
	goto T1269;}
	(V657)->c.c_cdr = V645;
	goto T1239;
	goto T1269;
T1269:;
	{object V663;
	V663= CMPcaddr((V649));
	base[0]= (V645);
	base[1]= V644;
	base[2]= V639;
	base[3]= (V663);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	goto T1239;}}
	goto T1263;
T1263:;
	if((V651!= VV[159]))goto T1277;
	{object V664;
	V664= ((V641))->v.v_self[fix(CMPcadr((V649)))];
	if(!(type_of(V664)==t_fixnum)){
	goto T1282;}
	if(!((((((V643))->v.v_self[fix((V664))])==(VV[173])?Ct:Cnil))==Cnil)){
	goto T1239;}
	goto T1279;
	goto T1282;
T1282:;
	if(!(type_of(V664)==t_cons)){
	goto T1285;}
	if(!((((CMPcdr((V664)))==(VV[173])?Ct:Cnil))==Cnil)){
	goto T1239;}
	goto T1279;
	goto T1285;
T1285:;
	base[0]= (V644);
	base[1]= (V639);
	base[2]= CMPcaddr((V649));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk195)(Lclptr195);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1239;}}
	goto T1279;
T1279:;
	{long V666;
	register long V667;
	V666= fix(CMPcadddr((V649)));
	V667= 0;
	goto T1293;
T1293:;
	if(!((V667)>=(V666))){
	goto T1294;}
	goto T1239;
	goto T1294;
T1294:;
	{object V668;
	V668= CMPcar((V638));
	V638= CMPcdr((V638));}
	V667= (long)(V667)+1;
	goto T1293;}
	goto T1277;
T1277:;
	if((V651!= VV[146]))goto T1304;
	if(!(type_of((V640))==t_cons)){
	goto T1305;}
	V640= make_cons(CMPcar((V640)),CMPcdr((V640)));
	goto T1305;
T1305:;
	(VV[93]->s.s_dbind)= CMPcadr((V649));
	(VV[94]->s.s_dbind)= (V640);
	(VV[95]->s.s_dbind)= CMPcaddr((V649));
	goto T1239;
	goto T1304;
T1304:;
	if((V651!= VV[305]))goto T1314;
	V642= (V640);
	goto T1239;
	goto T1314;
T1314:;
	FEerror("The ECASE key value ~s is illegal.",1,V651);
	goto T1239;}}
	goto T1239;
T1239:;
	goto T1238;
	goto T1236;
T1236:;
	{object V669 = (V640);
	VMR53(V669)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-TO-CVECTOR	*/

static object LI57(V672,V673)

register object V672;object V673;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;{object V674;
	base[0]= (V673);
	base[1]= (V672);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V674= vs_base[0];
	if(V674==Cnil)goto T1317;
	{object V675 = V674;
	VMR54(V675)}
	goto T1317;
T1317:;}
	{object V676;
	V676= CMPmake_fixnum((long)(((V672))->st.st_fillp));
	{register object V678;
	register long V679;
	long V680;
	V678= (V672);
	V679= (long)(((V678))->st.st_fillp);
	V680= (long)(((V678))->st.st_dim);
	if(!((V679)<(V680))){
	goto T1327;}
	(void)((((V678))->st.st_fillp)=((long)(1)+(V679)));
	V681 = CMPmake_fixnum(V679);
	(void)(aset1((V678),fix(V681),V673));
	goto T1322;
	goto T1327;
T1327:;
	base[0]= V673;
	base[1]= (V678);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk306)();
	vs_top=sup;}
	goto T1322;
T1322:;
	{object V682 = (V676);
	VMR54(V682)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-FORM-TO-LISP	*/

static object LI60(V686,V687,V688)

register object V686;object V687;register object V688;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	base[0]= (V687);
	{object V689;
	{object V691;
	V691= CMPcdr(CMPcar(V686));
	{object V692;
	V692= CMPcar(CMPcar(V686));
	(V686)->c.c_car = (V691);
	V689= (V692);}}
	{object V693= CMPcar((V689));
	if((V693!= VV[145]))goto T1338;
	base[1]= CMPcadr((V689));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V694= vs_base[0];
	{object V695 = list(2,VV[174],list(3,VV[57],V694,VV[175]));
	VMR55(V695)}
	goto T1338;
T1338:;
	if((V693!= VV[158]))goto T1341;
	base[1]= CMPcadr((V689));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V696= vs_base[0];
	V697= list(3,VV[176],VV[76],V696);
	{object V698 = make_cons(/* INLINE-ARGS */V697,Cnil);
	VMR55(V698)}
	goto T1341;
T1341:;
	if((V693!= VV[114]))goto T1344;
	base[1]= CMPcadr((V689));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V699= vs_base[0];
	V700= list(3,VV[176],VV[76],list(2,VV[114],list(3,VV[177],VV[170],V699)));
	{object V701 = make_cons(/* INLINE-ARGS */V700,Cnil);
	VMR55(V701)}
	goto T1344;
T1344:;
	if((V693!= VV[156]))goto T1347;
	{object V703;
	V703= one_minus(CMPcadr((V689)));
	{object V704= (V703);
	if(!eql(V704,VV[179]))goto T1350;
	V702= VV[180];
	goto T1348;
	goto T1350;
T1350:;
	if(!eql(V704,VV[181]))goto T1351;
	V702= VV[182];
	goto T1348;
	goto T1351;
T1351:;
	V702= list(2,VV[183],(V703));}}
	goto T1348;
T1348:;
	{object V705 = list(2,list(3,VV[176],VV[178],append(V702,VV[184])),VV[185]);
	VMR55(V705)}
	goto T1347;
T1347:;
	if((V693!= VV[157]))goto T1352;
	{object V706;
	object V707;
	object V708;
	V706= CMPcadr((V689));
	V707= ((V688))->v.v_self[fix((V706))];
	base[4]= CMPcaddr((V689));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V709= vs_base[0];
	V708= list(3,VV[62],list(4,VV[186],VV[103],VV[121],V709),VV[76]);
	if(((VV[187]->s.s_dbind))==Cnil){
	goto T1359;}
	if(!(type_of(V707)==t_fixnum)){
	goto T1362;}
	base[4]= (V707);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V711= vs_base[0];
	V712= list(3,VV[62],list(3,VV[188],VV[58],V711),VV[76]);
	{object V713 = make_cons(/* INLINE-ARGS */V712,Cnil);
	VMR55(V713)}
	goto T1362;
T1362:;
	if(!(type_of(V707)==t_cons)){
	goto T1367;}
	base[4]= (V707);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V714= vs_base[0];
	V715= list(3,VV[62],list(2,VV[189],V714),VV[76]);
	{object V716 = make_cons(/* INLINE-ARGS */V715,Cnil);
	VMR55(V716)}
	goto T1367;
T1367:;
	{object V717 = make_cons((V708),Cnil);
	VMR55(V717)}
	goto T1359;
T1359:;
	base[4]= (V706);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V718= vs_base[0];
	if(!(type_of(V707)==t_fixnum)){
	goto T1375;}
	V719= VV[192];
	goto T1373;
	goto T1375;
T1375:;
	if(!(type_of(V707)==t_cons)){
	goto T1378;}
	V719= VV[193];
	goto T1373;
	goto T1378;
T1378:;
	V719= VV[194];
	goto T1373;
T1373:;
	V721= list(7,VV[190],VV[191],VV[58],V718,VV[76],(V708),V719);
	{object V722 = make_cons(/* INLINE-ARGS */V721,Cnil);
	VMR55(V722)}}
	goto T1352;
T1352:;
	if((V693!= VV[159]))goto T1380;
	{object V723;
	object V724;
	object V725;
	V723= CMPcadr((V689));
	V724= ((V688))->v.v_self[fix((V723))];
	base[4]= CMPcaddr((V689));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V726= vs_base[0];
	V725= list(4,VV[195],VV[103],VV[121],V726);
	if(((VV[187]->s.s_dbind))==Cnil){
	goto T1388;}
	if(!(type_of(V724)==t_fixnum)){
	goto T1391;}
	base[4]= (V724);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V729= vs_base[0];
	V730= list(3,VV[188],VV[58],V729);
	V727= list(2,VV[196],list(3,VV[55],/* INLINE-ARGS */V730,list(2,VV[4],(VV[153]->s.s_dbind))));
	goto T1386;
	goto T1391;
T1391:;
	if(!(type_of(V724)==t_cons)){
	goto T1396;}
	base[4]= (V724);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V731= vs_base[0];
	V732= list(2,VV[189],V731);
	V727= list(2,VV[196],list(3,VV[55],/* INLINE-ARGS */V732,list(2,VV[4],(VV[153]->s.s_dbind))));
	goto T1386;
	goto T1396;
T1396:;
	V727= (V725);
	goto T1386;
	goto T1388;
T1388:;
	base[4]= (V723);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V733= vs_base[0];
	{object V735;
	V735= ((V688))->v.v_self[fix((V723))];
	if(!(type_of((V735))==t_fixnum)){
	goto T1405;}
	V734= VV[192];
	goto T1402;
	goto T1405;
T1405:;
	if(!(type_of((V735))==t_cons)){
	goto T1408;}
	V734= VV[193];
	goto T1402;
	goto T1408;
T1408:;
	V734= VV[194];}
	goto T1402;
T1402:;
	V727= list(6,VV[197],VV[191],VV[58],V733,(V725),V734);
	goto T1386;
T1386:;
	{register object V737;
	V737= make_cons(Cnil,Cnil);
	{register long V738;
	register long V739;
	V738= fix(CMPcadddr((V689)));
	V739= 0;
	goto T1415;
T1415:;
	if(!((V739)>=(V738))){
	goto T1416;}
	V736= CMPcar((V737));
	goto T1410;
	goto T1416;
T1416:;
	V740= (*(LnkLI307))((V686),base[0],(V688));
	(void)((*(LnkLI284))(/* INLINE-ARGS */V740,(V737)));
	V739= (long)(V739)+1;
	goto T1415;}}
	goto T1410;
T1410:;
	V741= listA(3,VV[54],V727,V736);
	{object V742 = make_cons(/* INLINE-ARGS */V741,Cnil);
	VMR55(V742)}}
	goto T1380;
T1380:;
	if((V693!= VV[146]))goto T1423;
	base[1]= CMPcadr((V689));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V743= vs_base[0];
	V744= list(3,VV[176],VV[93],V743);
	base[1]= CMPcaddr((V689));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V745= vs_base[0];
	{object V746 = list(4,VV[198],/* INLINE-ARGS */V744,VV[199],list(3,VV[176],VV[95],V745));
	VMR55(V746)}
	goto T1423;
T1423:;
	if((V693!= VV[305]))goto T1428;
	{object V747 = VV[200];
	VMR55(V747)}
	goto T1428;
T1428:;
	FEerror("The ECASE key value ~s is illegal.",1,V693);
	{object V748 = Cnil;
	VMR55(V748)}}}
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
	{object V749=base[0]->c.c_cdr;
	base[2]= V749;}
	V751= listA(3,VV[205],VV[206],base[2]);
	base[3]= listA(3,VV[52],VV[204],append(VV[203],/* INLINE-ARGS */V751));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for FORM-LIST-TO-LISP	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V752;
	object V753;
	check_arg(2);
	V752=(base[0]);
	V753=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V754;
	register object V755;
	register object V756;
	object V757;
	object V758;
	V754= make_cons((V753),Cnil);
	base[8]= CMPmake_fixnum((long)length((V753)));
	base[9]= small_fixnum(2);
	vs_top=(vs_base=base+8)+2;
	Lfloor();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[207];
	base[9]= small_fixnum(0);
	base[10]= VV[208];
	base[11]= Ct;
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk285)();
	vs_top=sup;
	V755= vs_base[0];
	V756= CMPcar((V752));
	{register object V759;
	V759= make_cons(Cnil,Cnil);
	goto T1442;
T1442:;
	if((CMPcar((V754)))!=Cnil){
	goto T1444;}
	V757= CMPcar((V759));
	goto T1439;
	goto T1444;
T1444:;
	V760= (*(LnkLI307))((V754),(V755),(V756));
	(void)((*(LnkLI284))(/* INLINE-ARGS */V760,(V759)));
	goto T1442;}
	goto T1439;
T1439:;
	V761 = CMPmake_fixnum((long)length((V755)));
	V758= list(2,VV[209],V761);
	V762= list(2,VV[212],list(3,VV[213],(V758),VV[202]));
	base[7]= list(4,VV[210],VV[211],/* INLINE-ARGS */V762,list(2,VV[170],list(5,VV[210],VV[214],VV[215],make_cons(VV[216],(V757)),VV[175])));
	base[9]= (V755);
	base[10]= (V758);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	V763= vs_base[0];
	base[8]= list(2,(V752),V763);
	vs_top=(vs_base=base+7)+2;
	return;}
	}
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static object LI64(V765)

object V765;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	V766= make_cons((V765),Cnil);
	(void)((*(LnkLI7))(/* INLINE-ARGS */V766));
	{object V767 = (*(LnkLI75))((V765));
	VMR58(V767)}
	return Cnil;
}
/*	local function CONST	*/

static void L61(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{object V768;
	check_arg(1);
	V768=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V768))==t_fixnum||
type_of((V768))==t_bignum||
type_of((V768))==t_ratio||
type_of((V768))==t_shortfloat||
type_of((V768))==t_longfloat||
type_of((V768))==t_complex){
	goto T1455;}
	if(!(type_of((V768))==t_character)){
	goto T1456;}
	goto T1455;
T1455:;
	base[1]= (V768);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1456;
T1456:;
	if(!(type_of((V768))==t_symbol)){
	goto T1461;}
	base[1]= (V768);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1461;}
	base[1]= list(2,VV[4],(V768));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1461;
T1461:;
	base[1]= list(3,VV[201],VV[202],(*(LnkLI309))(base0[0],(V768)));
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
	{object V769;
	object V770;
	if(vs_top-vs_base<1) too_few_arguments();
	V769=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V770=(base[1]);
	vs_top=sup;
	{object V771;
	if(((base0[3]->c.c_car))==Cnil){
	goto T1468;}
	V771= (VFUN_NARGS=2,(*(LnkLI310))((base0[4]->c.c_car),(base0[3]->c.c_car)));
	goto T1466;
	goto T1468;
T1468:;
	V771= (V769);
	goto T1466;
T1466:;
	if(!(((V771))==((V769)))){
	goto T1470;}
	if(!((((((base0[2]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1471;}
	goto T1470;
T1470:;
	base[2]= (V771);
	base[3]= (V770);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1471;
T1471:;
	{register object V772;
	register object V773;
	{register object V774;
	V774= (base0[6]->c.c_car);
	if(!(type_of((V774))==t_cons)){
	goto T1479;}
	if(!((CMPcar((V774)))==(VV[130]))){
	goto T1479;}
	V772= (*(LnkLI111))(CMPcadr((V774)),CMPcaddr((V774)),Cnil,(V770));
	goto T1477;
	goto T1479;
T1479:;
	V772= (
	(type_of((V774)) == t_sfun ?(*(((V774))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V774))==t_vfun) ?
	(*(((V774))->sfn.sfn_self)):
	(fcall.fun=((V774)),fcalln))(Cnil,(V770)));}
	goto T1477;
T1477:;
	base[4]=VV[96]->s.s_gfdef;
	base[5]= (base0[7]->c.c_car);
	{object V775;
	V775= (V772);
	 vs_top=base+6;
	 while(V775!=Cnil)
	 {vs_push((V775)->c.c_car);V775=(V775)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk96)(Lclptr96);
	vs_top=sup;
	V773= vs_base[0];
	base[4]= (base0[0]->c.c_car);
	base[5]= VV[131];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1489;}
	(void)((
	V776 = STREF(object,(base0[0]->c.c_car),0),
	(type_of(V776) == t_sfun ?(*((V776)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V776)==t_vfun) ?
	(*((V776)->sfn.sfn_self)):
	(fcall.fun=(V776),fcalln))(STREF(object,(base0[0]->c.c_car),4),STREF(object,(base0[0]->c.c_car),8),(V773),(V772))));
	goto T1486;
	goto T1489;
T1489:;
	{register object V777;
	V777= (base0[0]->c.c_car);
	base[4]= (V777);
	base[5]= VV[132];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1494;}
	{object V778;
	object V779;
	register object V780;
	V778= STREF(object,(base0[0]->c.c_car),0);
	V779= make_cons((V773),(V772));
	V780= STREF(object,(base0[0]->c.c_car),4);
	if(((V780))==Cnil){
	goto T1502;}
	if((CMPcdr((V780)))!=Cnil){
	goto T1502;}
	(void)((
	(type_of((V778)) == t_sfun ?(*(((V778))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V778))==t_vfun) ?
	(*(((V778))->sfn.sfn_self)):
	(fcall.fun=((V778)),fcalln))((V779),CMPcar((V780)))));
	goto T1486;
	goto T1502;
T1502:;
	base[4]= (V778);
	base[5]= (V779);
	{object V781;
	V781= (V780);
	 vs_top=base+6;
	 while(V781!=Cnil)
	 {vs_push((V781)->c.c_car);V781=(V781)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1486;}
	goto T1494;
T1494:;
	base[4]= (V777);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1510;}
	base[4]= (base0[0]->c.c_car);
	base[5]= (V773);
	{object V782;
	V782= (V772);
	 vs_top=base+6;
	 while(V782!=Cnil)
	 {vs_push((V782)->c.c_car);V782=(V782)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1486;
	goto T1510;
T1510:;
	base[5]= VV[97];
	base[6]= (V777);
	base[7]= VV[144];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;}
	goto T1486;
T1486:;
	base[4]= (V773);
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
	{object V783;
	object V784;
	if(vs_top-vs_base<1) too_few_arguments();
	V783=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V784=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= VV[131];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1522;}
	base[2]= STREF(object,(base0[0]->c.c_car),0);
	base[3]= STREF(object,(base0[0]->c.c_car),4);
	base[4]= STREF(object,(base0[0]->c.c_car),8);
	base[5]= (V783);
	base[6]= Ct;
	base[7]= (V784);
	vs_top=(vs_base=base+3)+5;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1522;
T1522:;
	{register object V785;
	V785= (base0[0]->c.c_car);
	base[2]= (V785);
	base[3]= VV[132];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1533;}
	{object V786;
	object V787;
	register object V788;
	V786= STREF(object,(base0[0]->c.c_car),0);
	V787= listA(3,(V783),Ct,(V784));
	V788= STREF(object,(base0[0]->c.c_car),4);
	if(((V788))==Cnil){
	goto T1541;}
	if((CMPcdr((V788)))!=Cnil){
	goto T1541;}
	base[2]= (V787);
	base[3]= CMPcar((V788));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V786);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1541;
T1541:;
	base[2]= (V786);
	base[3]= (V787);
	{object V789;
	V789= (V788);
	 vs_top=base+4;
	 while(V789!=Cnil)
	 {vs_push((V789)->c.c_car);V789=(V789)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1533;
T1533:;
	base[2]= (V785);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1551;}
	base[2]= (base0[0]->c.c_car);
	base[3]= (V783);
	base[4]= Ct;
	{object V790;
	V790= (V784);
	 vs_top=base+5;
	 while(V790!=Cnil)
	 {vs_push((V790)->c.c_car);V790=(V790)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1551;
T1551:;
	base[3]= VV[98];
	base[4]= (V785);
	base[5]= VV[143];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC69(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	{object V791;
	object V792;
	object V793;
	if(vs_top-vs_base<2) too_few_arguments();
	V791=(base[0]);
	V792=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V793=(base[2]);
	vs_top=sup;
	{register object V794;
	V794= (base0[3]->c.c_car);
	if(!(type_of((V794))==t_cons)){
	goto T1564;}
	if(!((CMPcar((V794)))==(VV[130]))){
	goto T1564;}
	(void)((*(LnkLI111))(CMPcadr((V794)),CMPcaddr((V794)),(V791),(V793)));
	goto T1562;
	goto T1564;
T1564:;
	(void)((
	(type_of((V794)) == t_sfun ?(*(((V794))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V794))==t_vfun) ?
	(*(((V794))->sfn.sfn_self)):
	(fcall.fun=((V794)),fcalln))((V791),(V793))));}
	goto T1562;
T1562:;
	base[3]= (V791);
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
	{object V795;
	object V796;
	if(vs_top-vs_base<1) too_few_arguments();
	V795=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V796=(base[1]);
	vs_top=sup;
	{object V797;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1570;}
	V797= (VFUN_NARGS=2,(*(LnkLI310))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1568;
	goto T1570;
T1570:;
	V797= (V795);
	goto T1568;
T1568:;
	if(!(((V797))==((V795)))){
	goto T1572;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1573;}
	goto T1572;
T1572:;
	base[2]= (V797);
	base[3]= (V796);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1573;
T1573:;
	{register object V798;
	object V799;
	V798= (
	(type_of((base0[4]->c.c_car)) == t_sfun ?(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=2,type_of((base0[4]->c.c_car))==t_vfun) ?
	(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[4]->c.c_car)),fcalln))((base0[5]->c.c_car),(base0[0]->c.c_car)));
	{object V800;
	V800= (base0[1]->c.c_car);
	if(!(type_of((V800))==t_cons)){
	goto T1582;}
	if(!((CMPcar((V800)))==(VV[130]))){
	goto T1582;}
	V799= (*(LnkLI111))(CMPcadr((V800)),CMPcaddr((V800)),(V798),(V796));
	goto T1580;
	goto T1582;
T1582:;
	V799= (
	(type_of((V800)) == t_sfun ?(*(((V800))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V800))==t_vfun) ?
	(*(((V800))->sfn.sfn_self)):
	(fcall.fun=((V800)),fcalln))((V798),(V796)));}
	goto T1580;
T1580:;
	{object V801;
	register object V802;
	V801= (base0[3]->c.c_car);
	V802= CMPcar((V801));
	goto T1590;
T1590:;
	if(!(((V801))==Cnil)){
	goto T1591;}
	goto T1586;
	goto T1591;
T1591:;
	base[5]= (V802);
	base[6]= VV[131];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1598;}
	(void)((
	V803 = STREF(object,(V802),0),
	(type_of(V803) == t_sfun ?(*((V803)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V803)==t_vfun) ?
	(*((V803)->sfn.sfn_self)):
	(fcall.fun=(V803),fcalln))(STREF(object,(V802),4),STREF(object,(V802),8),(V798),Ct,(V799))));
	goto T1595;
	goto T1598;
T1598:;
	base[5]= V802;
	base[6]= VV[132];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1603;}
	{object V805;
	object V806;
	object V807;
	V805= STREF(object,(V802),0);
	V806= listA(3,(V798),Ct,(V799));
	V807= STREF(object,(V802),4);
	if(((V807))==Cnil){
	goto T1611;}
	if((CMPcdr((V807)))!=Cnil){
	goto T1611;}
	(void)((
	(type_of((V805)) == t_sfun ?(*(((V805))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V805))==t_vfun) ?
	(*(((V805))->sfn.sfn_self)):
	(fcall.fun=((V805)),fcalln))((V806),CMPcar((V807)))));
	goto T1595;
	goto T1611;
T1611:;
	base[5]= (V805);
	base[6]= (V806);
	{object V808;
	V808= (V807);
	 vs_top=base+7;
	 while(V808!=Cnil)
	 {vs_push((V808)->c.c_car);V808=(V808)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1595;}
	goto T1603;
T1603:;
	base[5]= V802;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1619;}
	base[5]= (V802);
	base[6]= (V798);
	base[7]= Ct;
	{object V809;
	V809= (V799);
	 vs_top=base+8;
	 while(V809!=Cnil)
	 {vs_push((V809)->c.c_car);V809=(V809)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1595;
	goto T1619;
T1619:;
	base[6]= VV[133];
	base[7]= V802;
	base[8]= VV[136];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T1595;
T1595:;
	V801= CMPcdr((V801));
	V802= CMPcar((V801));
	goto T1590;}
	goto T1586;
T1586:;
	{object V810;
	register object V811;
	V810= (base0[2]->c.c_car);
	V811= CMPcar((V810));
	goto T1639;
T1639:;
	if(!(((V810))==Cnil)){
	goto T1640;}
	goto T1635;
	goto T1640;
T1640:;
	base[5]= (V811);
	base[6]= VV[131];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1647;}
	(void)((
	V812 = STREF(object,(V811),0),
	(type_of(V812) == t_sfun ?(*((V812)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V812)==t_vfun) ?
	(*((V812)->sfn.sfn_self)):
	(fcall.fun=(V812),fcalln))(STREF(object,(V811),4),STREF(object,(V811),8),(V798),(V799))));
	goto T1644;
	goto T1647;
T1647:;
	base[5]= V811;
	base[6]= VV[132];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1652;}
	{object V814;
	object V815;
	object V816;
	V814= STREF(object,(V811),0);
	V815= make_cons((V798),(V799));
	V816= STREF(object,(V811),4);
	if(((V816))==Cnil){
	goto T1660;}
	if((CMPcdr((V816)))!=Cnil){
	goto T1660;}
	(void)((
	(type_of((V814)) == t_sfun ?(*(((V814))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V814))==t_vfun) ?
	(*(((V814))->sfn.sfn_self)):
	(fcall.fun=((V814)),fcalln))((V815),CMPcar((V816)))));
	goto T1644;
	goto T1660;
T1660:;
	base[5]= (V814);
	base[6]= (V815);
	{object V817;
	V817= (V816);
	 vs_top=base+7;
	 while(V817!=Cnil)
	 {vs_push((V817)->c.c_car);V817=(V817)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1644;}
	goto T1652;
T1652:;
	base[5]= V811;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1668;}
	base[5]= (V811);
	base[6]= (V798);
	{object V818;
	V818= (V799);
	 vs_top=base+7;
	 while(V818!=Cnil)
	 {vs_push((V818)->c.c_car);V818=(V818)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1644;
	goto T1668;
T1668:;
	base[6]= VV[133];
	base[7]= V811;
	base[8]= VV[137];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T1644;
T1644:;
	V810= CMPcdr((V810));
	V811= CMPcar((V810));
	goto T1639;}
	goto T1635;
T1635:;
	base[4]= (V798);
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
	{object V819;
	register object V820;
	if(vs_top-vs_base<1) too_few_arguments();
	V819=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V820=(base[1]);
	vs_top=sup;
	{object V821;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1685;}
	V821= (VFUN_NARGS=2,(*(LnkLI310))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1683;
	goto T1685;
T1685:;
	V821= (V819);
	goto T1683;
T1683:;
	if(!(((V821))==((V819)))){
	goto T1687;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1688;}
	goto T1687;
T1687:;
	base[2]= (V821);
	base[3]= (V820);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1688;
T1688:;
	{register object V822;
	{object V823;
	V823= (*(LnkLI313))();
	V824= Ct;
	STSET(object,(V823),0, (base0[5]->c.c_car));
	(void)((base0[5]->c.c_car));
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lcopy_seq();
	vs_top=sup;
	V825= vs_base[0];
	V826= Ct;
	STSET(object,(V823),4, V825);
	(void)(V825);
	V822= (V823);}
	{object V827;
	V827= (base0[1]->c.c_car);
	if(!(type_of((V827))==t_cons)){
	goto T1702;}
	if(!((CMPcar((V827)))==(VV[130]))){
	goto T1702;}
	(void)((*(LnkLI111))(CMPcadr((V827)),CMPcaddr((V827)),(V822),(V820)));
	goto T1700;
	goto T1702;
T1702:;
	(void)((
	(type_of((V827)) == t_sfun ?(*(((V827))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V827))==t_vfun) ?
	(*(((V827))->sfn.sfn_self)):
	(fcall.fun=((V827)),fcalln))((V822),(V820))));}
	goto T1700;
T1700:;
	{object V828;
	register object V829;
	V828= (base0[3]->c.c_car);
	V829= CMPcar((V828));
	goto T1710;
T1710:;
	if(!(((V828))==Cnil)){
	goto T1711;}
	goto T1706;
	goto T1711;
T1711:;
	base[3]= (V829);
	base[4]= VV[131];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1718;}
	(void)((
	V830 = STREF(object,(V829),0),
	(type_of(V830) == t_sfun ?(*((V830)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V830)==t_vfun) ?
	(*((V830)->sfn.sfn_self)):
	(fcall.fun=(V830),fcalln))(STREF(object,(V829),4),STREF(object,(V829),8),(V822),Ct,(V820))));
	goto T1715;
	goto T1718;
T1718:;
	base[3]= V829;
	base[4]= VV[132];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1723;}
	{object V832;
	object V833;
	object V834;
	V832= STREF(object,(V829),0);
	V833= listA(3,(V822),Ct,(V820));
	V834= STREF(object,(V829),4);
	if(((V834))==Cnil){
	goto T1731;}
	if((CMPcdr((V834)))!=Cnil){
	goto T1731;}
	(void)((
	(type_of((V832)) == t_sfun ?(*(((V832))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V832))==t_vfun) ?
	(*(((V832))->sfn.sfn_self)):
	(fcall.fun=((V832)),fcalln))((V833),CMPcar((V834)))));
	goto T1715;
	goto T1731;
T1731:;
	base[3]= (V832);
	base[4]= (V833);
	{object V835;
	V835= (V834);
	 vs_top=base+5;
	 while(V835!=Cnil)
	 {vs_push((V835)->c.c_car);V835=(V835)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1715;}
	goto T1723;
T1723:;
	base[3]= V829;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1739;}
	base[3]= (V829);
	base[4]= (V822);
	base[5]= Ct;
	{object V836;
	V836= (V820);
	 vs_top=base+6;
	 while(V836!=Cnil)
	 {vs_push((V836)->c.c_car);V836=(V836)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1715;
	goto T1739;
T1739:;
	base[4]= VV[133];
	base[5]= V829;
	base[6]= VV[134];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1715;
T1715:;
	V828= CMPcdr((V828));
	V829= CMPcar((V828));
	goto T1710;}
	goto T1706;
T1706:;
	{object V837;
	register object V838;
	V837= (base0[2]->c.c_car);
	V838= CMPcar((V837));
	goto T1759;
T1759:;
	if(!(((V837))==Cnil)){
	goto T1760;}
	goto T1755;
	goto T1760;
T1760:;
	base[3]= (V838);
	base[4]= VV[131];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1767;}
	(void)((
	V839 = STREF(object,(V838),0),
	(type_of(V839) == t_sfun ?(*((V839)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V839)==t_vfun) ?
	(*((V839)->sfn.sfn_self)):
	(fcall.fun=(V839),fcalln))(STREF(object,(V838),4),STREF(object,(V838),8),(V822),(V820))));
	goto T1764;
	goto T1767;
T1767:;
	base[3]= V838;
	base[4]= VV[132];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1772;}
	{object V841;
	object V842;
	object V843;
	V841= STREF(object,(V838),0);
	V842= make_cons((V822),(V820));
	V843= STREF(object,(V838),4);
	if(((V843))==Cnil){
	goto T1780;}
	if((CMPcdr((V843)))!=Cnil){
	goto T1780;}
	(void)((
	(type_of((V841)) == t_sfun ?(*(((V841))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V841))==t_vfun) ?
	(*(((V841))->sfn.sfn_self)):
	(fcall.fun=((V841)),fcalln))((V842),CMPcar((V843)))));
	goto T1764;
	goto T1780;
T1780:;
	base[3]= (V841);
	base[4]= (V842);
	{object V844;
	V844= (V843);
	 vs_top=base+5;
	 while(V844!=Cnil)
	 {vs_push((V844)->c.c_car);V844=(V844)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1764;}
	goto T1772;
T1772:;
	base[3]= V838;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1788;}
	base[3]= (V838);
	base[4]= (V822);
	{object V845;
	V845= (V820);
	 vs_top=base+5;
	 while(V845!=Cnil)
	 {vs_push((V845)->c.c_car);V845=(V845)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1764;
	goto T1788;
T1788:;
	base[4]= VV[133];
	base[5]= V838;
	base[6]= VV[135];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1764;
T1764:;
	V837= CMPcdr((V837));
	V838= CMPcar((V837));
	goto T1759;}
	goto T1755;
T1755:;
	base[2]= (V822);
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
	{object V846;
	check_arg(1);
	V846=(base[0]);
	vs_top=sup;
	{register object V847;
	base[1]= (V846);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V847= vs_base[0];
	if(((V847))!=Cnil){
	goto T1806;}
	base[1]= (V846);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V848= vs_base[0];
	base[1]= ((CMPcar(V848))==((VV[1]->s.s_dbind))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1806;
T1806:;
	if((CMPcdr((V847)))==Cnil){
	goto T1810;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1810;
T1810:;
	if(!((CMPcar((V847)))==(VV[106]))){
	goto T1812;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1812;
T1812:;
	base[1]= ((CMPcar((V847)))==(VV[107])?Ct:Cnil);
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
	{object V849;
	object V850;
	if(vs_top-vs_base<1) too_few_arguments();
	V849=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V850=(base[1]);
	vs_top=sup;
	base[2]=VV[314]->s.s_gfdef;
	base[3]= (base0[0]->c.c_car);
	base[4]= (V849);
	{object V851;
	V851= (V850);
	 vs_top=base+5;
	 while(V851!=Cnil)
	 {vs_push((V851)->c.c_car);V851=(V851)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk314)(Lclptr314);
	return;
	}
}
/*	local function COMPUTE-VALID-P	*/

static void L32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V852;
	check_arg(1);
	V852=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((((base0[3])==Cnil?Ct:Cnil))==Cnil)){
	goto T1817;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1817;
T1817:;
	{register object V853;
	object V854;
	base[1]= base0[1];
	base[2]= (V852);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk315)();
	if(vs_base>=vs_top){vs_top=sup;goto T1822;}
	V853= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1823;}
	V854= vs_base[0];
	vs_top=sup;
	goto T1824;
	goto T1822;
T1822:;
	V853= Cnil;
	goto T1823;
T1823:;
	V854= Cnil;
	goto T1824;
T1824:;
	if(!(((((V854))==Cnil?Ct:Cnil))==Cnil)){
	goto T1825;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1825;
T1825:;
	{register object V855;
	register object V856;
	V855= base0[2];
	V856= CMPcar((V855));
	goto T1830;
T1830:;
	if(!(((V855))==Cnil)){
	goto T1831;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1831;
T1831:;
	{register object x= (V856),V857= (V853);
	while(V857!=Cnil)
	if(eql(x,V857->c.c_car)){
	goto T1835;
	}else V857=V857->c.c_cdr;}
	base[2]= make_cons(VV[100],(V856));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1835;
T1835:;
	V855= CMPcdr((V855));
	V856= CMPcar((V855));
	goto T1830;}}
	}
}
/*	local function CLOSURE	*/

static void LC65(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{register object V858;
	object V859;
	object V860;
	check_arg(3);
	V858=(base[0]);
	V859=(base[1]);
	V860=(base[2]);
	vs_top=sup;{object V861;
	if(((V859))==(VV[8])){
	goto T1845;}
	V861= Cnil;
	goto T1844;
	goto T1845;
T1845:;
	if(type_of((V858))==t_cons){
	goto T1847;}
	V861= Cnil;
	goto T1844;
	goto T1847;
T1847:;
	if((CMPcar((V858)))==(VV[9])){
	goto T1849;}
	V861= Cnil;
	goto T1844;
	goto T1849;
T1849:;
	V861= (*(LnkLI316))((V858));
	goto T1844;
T1844:;
	if(V861==Cnil)goto T1843;
	base[3]= V861;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1843;
T1843:;}
	base[3]= (V858);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[316],(void **)(void *)&LnkLI316,1,first,ap);va_end(ap);return V1;} /* EXPAND-MAKE-INSTANCE-FORM */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* CHECK-INITARGS-VALUES */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)(void *)&Lnk314,(void **)(void *)&Lclptr314);} /* NO-APPLICABLE-METHOD */
static object  LnkTLI313(){return call_proc0(VV[313],(void **)(void *)&LnkLI313);} /* %%ALLOCATE-INSTANCE--CLASS */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* TYPECASE-ERROR-STRING */
static void LnkT311(){ call_or_link(VV[311],(void **)(void *)&Lnk311);} /* STRUCTURE-SUBTYPE-P */
static void LnkT96(ptr) object *ptr;{ call_or_link_closure(VV[96],(void **)(void *)&Lnk96,(void **)(void *)&Lclptr96);} /* ALLOCATE-INSTANCE */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,4,first,ap);va_end(ap);return V1;} /* INITIALIZE-INSTANCE-SIMPLE */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* MAKE-INSTANCE-FUNCTION-TRAP */
static object  LnkTLI310(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[310],(void **)(void *)&LnkLI310,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[309],(void **)(void *)&LnkLI309,2,first,ap);va_end(ap);return V1;} /* ADD-TO-CVECTOR */
static object  LnkTLI7(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[7],(void **)(void *)&LnkLI7,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTIONS */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* COERCE */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,3,first,ap);va_end(ap);return V1;} /* FIRST-FORM-TO-LISP */
static void LnkT306(){ call_or_link(VV[306],(void **)(void *)&Lnk306);} /* VECTOR-PUSH-EXTEND */
static void LnkT195(ptr) object *ptr;{ call_or_link_closure(VV[195],(void **)(void *)&Lnk195,(void **)(void *)&Lclptr195);} /* SLOT-BOUNDP-USING-CLASS */
static void LnkT304(ptr) object *ptr;{ call_or_link_closure(VV[304],(void **)(void *)&Lnk304,(void **)(void *)&Lclptr304);} /* SETF PCL SLOT-VALUE-USING-CLASS */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)(void *)&LnkLI303,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)(void *)&LnkLI302,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT301(){ call_or_link(VV[301],(void **)(void *)&Lnk301);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT300(){ call_or_link(VV[300],(void **)(void *)&Lnk300);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static object  LnkTLI299(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[299],(void **)(void *)&LnkLI299,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* COMPILE-LAMBDA */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* UNION */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* FORM-LIST-TO-LISP */
static object  LnkTLI295(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[295],(void **)(void *)&LnkLI295,1,first,ap);va_end(ap);return V1;} /* GET-PV-CELL-FOR-CLASS */
static object  LnkTLI294(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[294],(void **)(void *)&LnkLI294,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[293],(void **)(void *)&LnkLI293,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static void LnkT292(ptr) object *ptr;{ call_or_link_closure(VV[292],(void **)(void *)&Lnk292,(void **)(void *)&Lclptr292);} /* SLOT-DEFINITION-LOCATION */
static void LnkT291(ptr) object *ptr;{ call_or_link_closure(VV[291],(void **)(void *)&Lnk291,(void **)(void *)&Lclptr291);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT290(ptr) object *ptr;{ call_or_link_closure(VV[290],(void **)(void *)&Lnk290,(void **)(void *)&Lclptr290);} /* SLOT-DEFINITION-INITFORM */
static void LnkT289(){ call_or_link(VV[289],(void **)(void *)&Lnk289);} /* STABLE-SORT */
static void LnkT287(){ call_or_link(VV[287],(void **)(void *)&Lnk287);} /* POSITION */
static void LnkT286(ptr) object *ptr;{ call_or_link_closure(VV[286],(void **)(void *)&Lnk286,(void **)(void *)&Lclptr286);} /* SLOT-DEFINITION-NAME */
static void LnkT285(){ call_or_link(VV[285],(void **)(void *)&Lnk285);} /* MAKE-ARRAY */
static object  LnkTLI284(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[284],(void **)(void *)&LnkLI284,2,first,ap);va_end(ap);return V1;} /* ADD-FORMS */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* SLOT-DEFINITION-INITARGS */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* CLASS-SLOTS */
static void LnkT281(ptr) object *ptr;{ call_or_link_closure(VV[281],(void **)(void *)&Lnk281,(void **)(void *)&Lclptr281);} /* CLASS-DEFAULT-INITARGS */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* GET-COMPLEX-INITIALIZATION-FUNCTIONS */
static void LnkT278(){ call_or_link(VV[278],(void **)(void *)&Lnk278);} /* GET-SIMPLE-INITIALIZATION-FUNCTION */
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* MAKE-EFFECTIVE-METHOD-FUNCTION */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* REMOVE */
static void LnkT274(ptr) object *ptr;{ call_or_link_closure(VV[274],(void **)(void *)&Lnk274,(void **)(void *)&Lclptr274);} /* FUNCALLABLE-STANDARD-CLASS-P */
static void LnkT272(ptr) object *ptr;{ call_or_link_closure(VV[272],(void **)(void *)&Lnk272,(void **)(void *)&Lclptr272);} /* STANDARD-CLASS-P */
static void LnkT270(ptr) object *ptr;{ call_or_link_closure(VV[270],(void **)(void *)&Lnk270,(void **)(void *)&Lclptr270);} /* STRUCTURE-CLASS-P */
static void LnkT269(ptr) object *ptr;{ call_or_link_closure(VV[269],(void **)(void *)&Lnk269,(void **)(void *)&Lclptr269);} /* METHOD-QUALIFIERS */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)(void *)&LnkLI268,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-SIMPLE */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)(void *)&LnkLI267,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-COMPLEX */
static void LnkT266(){ call_or_link(VV[266],(void **)(void *)&Lnk266);} /* SOME */
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[264],(void **)(void *)&LnkLI264,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-1 */
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* DEFAULT-INITARGS */
static object  LnkTLI263(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[263],(void **)(void *)&LnkLI263,5,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION-INTERNAL */
static void LnkT262(){ call_or_link(VV[262],(void **)(void *)&Lnk262);} /* EVERY */
static void LnkT261(ptr) object *ptr;{ call_or_link_closure(VV[261],(void **)(void *)&Lnk261,(void **)(void *)&Lclptr261);} /* METHOD-SPECIALIZERS */
static object  LnkTLI260(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[260],(void **)(void *)&LnkLI260,2,first,ap);va_end(ap);return V1;} /* FIND-STANDARD-II-METHOD */
static void LnkT259(ptr) object *ptr;{ call_or_link_closure(VV[259],(void **)(void *)&Lnk259,(void **)(void *)&Lclptr259);} /* COMPUTE-APPLICABLE-METHODS */
static object  LnkTLI258(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[258],(void **)(void *)&LnkLI258,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT257(ptr) object *ptr;{ call_or_link_closure(VV[257],(void **)(void *)&Lnk257,(void **)(void *)&Lclptr257);} /* FINALIZE-INHERITANCE */
static void LnkT256(ptr) object *ptr;{ call_or_link_closure(VV[256],(void **)(void *)&Lnk256,(void **)(void *)&Lclptr256);} /* CLASS-FINALIZED-P */
static object  LnkTLI254(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[254],(void **)(void *)&LnkLI254,2,first,ap);va_end(ap);return V1;} /* SETF PCL GDEFINITION */
static object  LnkTLI253(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[253],(void **)(void *)&LnkLI253,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION */
static void LnkT252(){ call_or_link(VV[252],(void **)(void *)&Lnk252);} /* MAKE-SHARED-INITIALIZE-FORM-LIST */
static void LnkT251(ptr) object *ptr;{ call_or_link_closure(VV[251],(void **)(void *)&Lnk251,(void **)(void *)&Lclptr251);} /* CLASS-PROTOTYPE */
static void LnkT250(){ call_or_link(VV[250],(void **)(void *)&Lnk250);} /* INITIALIZE-INSTANCE-SIMPLE-FUNCTION */
static void LnkT249(){ call_or_link(VV[249],(void **)(void *)&Lnk249);} /* MAKE-DEFAULT-INITARGS-FORM-LIST */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[248],(void **)(void *)&LnkLI248,first,ap);va_end(ap);return V1;} /* MAKE-INITIALIZE-INFO */
static void LnkT247(ptr) object *ptr;{ call_or_link_closure(VV[247],(void **)(void *)&Lnk247,(void **)(void *)&Lclptr247);} /* SETF PCL CLASS-INITIALIZE-INFO */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[246],(void **)(void *)&LnkLI246,1,first,ap);va_end(ap);return V1;} /* RESET-INITIALIZE-INFO */
static void LnkT245(ptr) object *ptr;{ call_or_link_closure(VV[245],(void **)(void *)&Lnk245,(void **)(void *)&Lclptr245);} /* CLASS-INITIALIZE-INFO */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,1,first,ap);va_end(ap);return V1;} /* RESET-CLASS-INITIALIZE-INFO-1 */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,1,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO-BOUND-SLOTS */
static void LnkT243(ptr) object *ptr;{ call_or_link_closure(VV[243],(void **)(void *)&Lnk243,(void **)(void *)&Lclptr243);} /* CLASS-WRAPPER */
static void LnkT9(ptr) object *ptr;{ call_or_link_closure(VV[9],(void **)(void *)&Lnk9,(void **)(void *)&Lclptr9);} /* MAKE-INSTANCE */
static void LnkT229(ptr) object *ptr;{ call_or_link_closure(VV[229],(void **)(void *)&Lnk229,(void **)(void *)&Lclptr229);} /* CLASS-NAME */
static void LnkT228(ptr) object *ptr;{ call_or_link_closure(VV[228],(void **)(void *)&Lnk228,(void **)(void *)&Lclptr228);} /* CLASSP */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],(void **)(void *)&LnkLI61,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITIALIZE-INFO-INTERNAL */
static void LnkT227(ptr) object *ptr;{ call_or_link_closure(VV[227],(void **)(void *)&Lnk227,(void **)(void *)&Lclptr227);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT226(){ call_or_link(VV[226],(void **)(void *)&Lnk226);} /* FIND */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[224],(void **)(void *)&LnkLI224,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static void LnkT223(){ call_or_link(VV[223],(void **)(void *)&Lnk223);} /* WALK-FORM */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-SYMBOL */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,1,first,ap);va_end(ap);return V1;} /* CONSTANT-SYMBOL-P */
static void LnkT220(){ call_or_link(VV[220],(void **)(void *)&Lnk220);} /* MAP-ALL-CLASSES */
static void LnkT218(ptr) object *ptr;{ call_or_link_closure(VV[218],(void **)(void *)&Lnk218,(void **)(void *)&Lclptr218);} /* CLASS-PRECEDENCE-LIST */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[217],(void **)(void *)&LnkLI217,first,ap);va_end(ap);return V1;} /* FIND-CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

